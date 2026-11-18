// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// ApplyMultiResConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCunfCunfCuni_avx @ 1405a4db0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyMultiResConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCunfCunfCuni_avx
               (undefined1 (*param_1) [32],longlong param_2,longlong param_3,longlong param_4,
               uint param_5,uint param_6,uint param_7,uint param_8)

{
  undefined1 (*pauVar1) [32];
  undefined1 (*pauVar2) [32];
  undefined1 (*pauVar3) [32];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined4 uVar19;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined4 uVar20;
  undefined1 (*pauVar21) [32];
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined4 uVar30;
  longlong lVar29;
  uint uVar31;
  uint uVar32;
  ulonglong uVar33;
  ulonglong uVar35;
  undefined1 (*pauVar36) [16];
  undefined1 (*pauVar37) [32];
  longlong lVar38;
  ulonglong uVar39;
  undefined4 uVar40;
  ulonglong in_R10;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  float fVar45;
  float fVar56;
  float fVar57;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar59 [16];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  float fVar58;
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar60 [16];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  uint uVar79;
  undefined1 auVar70 [16];
  uint uVar78;
  uint uVar80;
  uint uVar81;
  uint uVar82;
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  uint uVar83;
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
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
  undefined1 auVar97 [16];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  uint uVar106;
  undefined1 auVar105 [32];
  undefined1 auVar107 [16];
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
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  undefined1 auVar128 [32];
  undefined1 auVar129 [16];
  undefined1 auVar130 [32];
  float fVar137;
  undefined1 auVar131 [32];
  undefined1 auVar132 [32];
  float fVar134;
  float fVar135;
  float fVar136;
  undefined1 auVar133 [64];
  undefined1 auVar138 [32];
  uint uVar141;
  undefined1 auVar139 [32];
  undefined1 auVar140 [32];
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
  undefined1 auVar152 [32];
  undefined1 auVar153 [32];
  undefined1 auVar154 [32];
  undefined1 auVar155 [32];
  undefined1 auVar156 [32];
  undefined1 auVar157 [32];
  undefined1 auStack_460 [28];
  char local_444;
  undefined1 local_3a0 [32];
  undefined1 local_320 [32];
  undefined1 local_2a0 [32];
  undefined1 local_280 [32];
  float local_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float local_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  ulonglong uVar34;
  
  uVar32 = param_8 + 7;
  if (-1 < (int)param_8) {
    uVar32 = param_8;
  }
  pauVar21 = param_1;
  if ((int)(uVar32 & 0xfffffff8) < 1) {
    uVar33 = 0;
  }
  else {
    auVar48 = vshufps_avx(ZEXT416(param_6),ZEXT416(param_6),0);
    auVar133 = ZEXT3264(CONCAT1616(auVar48,auVar48));
    auVar48 = vshufps_avx(ZEXT416(param_7),ZEXT416(param_7),0);
    auVar60 = vshufps_avx(ZEXT416(param_5),ZEXT416(param_5),0);
    uVar33 = 0;
    lVar38 = 0;
    pauVar37 = param_1;
    lVar18 = param_4;
    do {
      pauVar1 = pauVar37 + 1;
      pauVar2 = pauVar37 + 2;
      pauVar3 = pauVar37 + 3;
      auVar71._16_16_ = *(undefined1 (*) [16])*pauVar2;
      auVar71._0_16_ = *(undefined1 (*) [16])*pauVar37;
      auVar84._16_16_ = *(undefined1 (*) [16])(pauVar37[2] + 0x10);
      auVar84._0_16_ = *(undefined1 (*) [16])(*pauVar37 + 0x10);
      auVar98._16_16_ = *(undefined1 (*) [16])*pauVar3;
      auVar98._0_16_ = *(undefined1 (*) [16])*pauVar1;
      auVar108._16_16_ = *(undefined1 (*) [16])(pauVar37[3] + 0x10);
      auVar108._0_16_ = *(undefined1 (*) [16])(pauVar37[1] + 0x10);
      auVar51 = vunpcklps_avx(auVar71,auVar84);
      auVar71 = vunpckhps_avx(auVar71,auVar84);
      auVar114 = vunpcklps_avx(auVar98,auVar108);
      auVar84 = vunpckhps_avx(auVar98,auVar108);
      auVar98 = vunpcklpd_avx(auVar51,auVar114);
      auVar51 = vunpckhpd_avx(auVar51,auVar114);
      auVar114 = vunpcklpd_avx(auVar71,auVar84);
      auVar84 = vunpckhpd_avx(auVar71,auVar84);
      auVar71 = vcmpps_avx(ZEXT832(0) << 0x20,auVar84,1);
      uVar13 = vmovmskps_avx(auVar71);
      if (uVar13 != 0) {
        local_444 = (char)uVar13;
        if (local_444 == -1) {
          auVar46 = *(undefined1 (*) [16])(param_2 + 0x10 + lVar38);
          auVar47 = *(undefined1 (*) [16])(param_2 + 0x30 + lVar38);
          auVar143._16_16_ = auVar46;
          auVar143._0_16_ = *(undefined1 (*) [16])(param_2 + lVar38);
          auVar100._16_16_ = auVar47;
          auVar100._0_16_ = *(undefined1 (*) [16])(param_2 + 0x20 + lVar38);
          auVar59 = *(undefined1 (*) [16])(param_2 + 0x50 + lVar38);
          auVar97 = *(undefined1 (*) [16])(param_2 + 0x40 + lVar38);
          auVar150._16_16_ = auVar59;
          auVar150._0_16_ = auVar97;
          auVar86._16_16_ = *(undefined1 (*) [16])(param_2 + lVar38);
          auVar86._0_16_ = auVar46;
          auVar108 = vblendps_avx(auVar143,auVar86,0x24);
          auVar108 = vpermilps_avx(auVar108,
                                   ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                                  );
          uVar40 = *(undefined4 *)(param_2 + 0x28 + lVar38);
          auVar153._20_4_ = uVar40;
          auVar153._16_4_ = uVar40;
          auVar153._24_4_ = uVar40;
          auVar153._28_4_ = uVar40;
          uVar40 = *(undefined4 *)(param_2 + 0x24 + lVar38);
          auVar153._4_4_ = uVar40;
          auVar153._0_4_ = uVar40;
          auVar153._8_4_ = uVar40;
          auVar153._12_4_ = uVar40;
          auVar108 = vblendps_avx(auVar108,auVar153,0x88);
          auVar154._16_16_ = auVar97;
          auVar154._0_16_ = auVar59;
          auVar99 = vblendps_avx(auVar154,auVar150,0x44);
          auVar99 = vpermilps_avx(auVar99,
                                  ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                                 );
          uVar40 = *(undefined4 *)(param_2 + 0x34 + lVar38);
          auVar110._20_4_ = uVar40;
          auVar110._16_4_ = uVar40;
          auVar110._24_4_ = uVar40;
          auVar110._28_4_ = uVar40;
          auVar47 = vshufps_avx(auVar47,auVar47,0xec);
          auVar110._0_16_ = auVar47;
          auVar99 = vblendps_avx(auVar99,auVar110,0x13);
          local_2a0._16_16_ = auVar99._0_16_;
          local_2a0._0_16_ = auVar108._0_16_;
          auVar109 = vperm2f128_avx(auVar108,auVar99,0x31);
          auVar108 = vblendps_avx(auVar100,auVar143,0x24);
          auVar108 = vshufps_avx(ZEXT1632(auVar46),auVar108,0x21);
          auVar108 = vshufps_avx(auVar108,auVar100,0xc2);
          auVar99 = vshufps_avx(auVar154,auVar150,0xc4);
          local_3a0 = vblendps_avx(auVar108,auVar99,0xe0);
          auVar46 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar38);
          auVar47 = *(undefined1 (*) [16])(param_3 + 0x30 + lVar38);
          auVar151._16_16_ = auVar46;
          auVar151._0_16_ = *(undefined1 (*) [16])(param_3 + lVar38);
          auVar155._16_16_ = auVar47;
          auVar155._0_16_ = *(undefined1 (*) [16])(param_3 + 0x20 + lVar38);
          auVar59 = *(undefined1 (*) [16])(param_3 + 0x50 + lVar38);
          auVar97 = *(undefined1 (*) [16])(param_3 + 0x40 + lVar38);
          auVar49._16_16_ = auVar59;
          auVar49._0_16_ = auVar97;
          auVar73._16_16_ = *(undefined1 (*) [16])(param_3 + lVar38);
          auVar73._0_16_ = auVar46;
          auVar108 = vblendps_avx(auVar151,auVar73,0x24);
          auVar108 = vpermilps_avx(auVar108,
                                   ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                                  );
          uVar40 = *(undefined4 *)(param_3 + 0x28 + lVar38);
          auVar61._20_4_ = uVar40;
          auVar61._16_4_ = uVar40;
          auVar61._24_4_ = uVar40;
          auVar61._28_4_ = uVar40;
          uVar40 = *(undefined4 *)(param_3 + 0x24 + lVar38);
          auVar61._4_4_ = uVar40;
          auVar61._0_4_ = uVar40;
          auVar61._8_4_ = uVar40;
          auVar61._12_4_ = uVar40;
          auVar108 = vblendps_avx(auVar108,auVar61,0x88);
          auVar64._16_16_ = auVar97;
          auVar64._0_16_ = auVar59;
          auVar99 = vblendps_avx(auVar64,auVar49,0x44);
          auVar99 = vpermilps_avx(auVar99,
                                  ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                                 );
          uVar40 = *(undefined4 *)(param_3 + 0x34 + lVar38);
          auVar87._20_4_ = uVar40;
          auVar87._16_4_ = uVar40;
          auVar87._24_4_ = uVar40;
          auVar87._28_4_ = uVar40;
          auVar47 = vshufps_avx(auVar47,auVar47,0xec);
          auVar87._0_16_ = auVar47;
          auVar99 = vblendps_avx(auVar99,auVar87,0x13);
          auVar72._16_16_ = auVar99._0_16_;
          auVar72._0_16_ = auVar108._0_16_;
          auVar85 = vperm2f128_avx(auVar108,auVar99,0x31);
          auVar108 = vblendps_avx(auVar155,auVar151,0x24);
          auVar108 = vshufps_avx(ZEXT1632(auVar46),auVar108,0x21);
          auVar108 = vshufps_avx(auVar108,auVar155,0xc2);
          auVar99 = vshufps_avx(auVar64,auVar49,0xc4);
          auVar99 = vblendps_avx(auVar108,auVar99,0xe0);
          auVar46 = *(undefined1 (*) [16])(param_4 + 0x10 + lVar38);
          auVar47 = *(undefined1 (*) [16])(param_4 + 0x30 + lVar38);
          auVar156._16_16_ = auVar46;
          auVar156._0_16_ = *(undefined1 (*) [16])(param_4 + lVar38);
          auVar65._16_16_ = auVar47;
          auVar65._0_16_ = *(undefined1 (*) [16])(param_4 + 0x20 + lVar38);
          auVar59 = *(undefined1 (*) [16])(param_4 + 0x50 + lVar38);
          auVar97 = *(undefined1 (*) [16])(param_4 + 0x40 + lVar38);
          auVar130._16_16_ = auVar59;
          auVar130._0_16_ = auVar97;
          auVar50._16_16_ = *(undefined1 (*) [16])(param_4 + lVar38);
          auVar50._0_16_ = auVar46;
          auVar108 = vblendps_avx(auVar156,auVar50,0x24);
          auVar108 = vpermilps_avx(auVar108,
                                   ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                                  );
          uVar40 = *(undefined4 *)(param_4 + 0x28 + lVar38);
          auVar120._20_4_ = uVar40;
          auVar120._16_4_ = uVar40;
          auVar120._24_4_ = uVar40;
          auVar120._28_4_ = uVar40;
          uVar40 = *(undefined4 *)(param_4 + 0x24 + lVar38);
          auVar120._4_4_ = uVar40;
          auVar120._0_4_ = uVar40;
          auVar120._8_4_ = uVar40;
          auVar120._12_4_ = uVar40;
          auVar108 = vblendps_avx(auVar108,auVar120,0x88);
          auVar121._16_16_ = auVar97;
          auVar121._0_16_ = auVar59;
          auVar152 = vblendps_avx(auVar121,auVar130,0x44);
          auVar152 = vpermilps_avx(auVar152,
                                   ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                                  );
          uVar40 = *(undefined4 *)(param_4 + 0x34 + lVar38);
          auVar144._20_4_ = uVar40;
          auVar144._16_4_ = uVar40;
          auVar144._24_4_ = uVar40;
          auVar144._28_4_ = uVar40;
          auVar47 = vshufps_avx(auVar47,auVar47,0xec);
          auVar144._0_16_ = auVar47;
          auVar152 = vblendps_avx(auVar152,auVar144,0x13);
          auVar142._16_16_ = auVar152._0_16_;
          auVar142._0_16_ = auVar108._0_16_;
          auVar149 = vperm2f128_avx(auVar108,auVar152,0x31);
          auVar108 = vblendps_avx(auVar65,auVar156,0x24);
          auVar108 = vshufps_avx(ZEXT1632(auVar46),auVar108,0x21);
          auVar108 = vshufps_avx(auVar108,auVar65,0xc2);
          auVar152 = vshufps_avx(auVar121,auVar130,0xc4);
          auVar133 = ZEXT3264(auVar133._0_32_);
          auVar152 = vblendps_avx(auVar108,auVar152,0xe0);
        }
        else {
          uVar78 = auVar71._0_4_;
          auVar46._0_4_ =
               uVar78 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000;
          uVar79 = auVar71._4_4_;
          auVar46._4_4_ = uVar79 & _UNK_150b50b04;
          uVar80 = auVar71._8_4_;
          auVar46._8_4_ = uVar80 & _UNK_150b50b08;
          uVar81 = auVar71._12_4_;
          auVar46._12_4_ = uVar81 & _UNK_150b50b0c;
          uVar82 = auVar71._16_4_;
          uVar83 = auVar71._20_4_;
          uVar106 = auVar71._24_4_;
          uVar141 = auVar71._28_4_;
          uVar31 = vextractps_avx(auVar46,1);
          uVar34 = (ulonglong)uVar31;
          uVar40 = vextractps_avx(auVar46,2);
          lVar14 = CONCAT44((int)((ulonglong)lVar18 >> 0x20),uVar40);
          uVar40 = vextractps_avx(auVar46,3);
          lVar29 = CONCAT44((int)(in_R10 >> 0x20),uVar40);
          uVar42 = (ulonglong)(uVar83 & _UNK_150b50b14);
          in_R10 = (ulonglong)(uVar106 & _UNK_150b50b18);
          uVar43 = (ulonglong)(uVar141 & _UNK_150b50b1c);
          lVar18 = param_2 + lVar38;
          auVar46 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + lVar38)),
                                  ZEXT416(*(uint *)(uVar34 + lVar18)),0x10);
          auVar46 = vinsertps_avx(auVar46,ZEXT416(*(uint *)(lVar14 + lVar18)),0x20);
          auVar46 = vinsertps_avx(auVar46,ZEXT416(*(uint *)(lVar29 + lVar18)),0x30);
          uVar15 = (ulonglong)(uVar82 & _UNK_150b50b10);
          auVar47 = vinsertps_avx(ZEXT416(*(uint *)(uVar15 + lVar18)),
                                  ZEXT416(*(uint *)(uVar42 + lVar18)),0x10);
          auVar47 = vinsertps_avx(auVar47,ZEXT416(*(uint *)(in_R10 + lVar18)),0x20);
          auVar47 = vinsertps_avx(auVar47,ZEXT416(*(uint *)(uVar43 + lVar18)),0x30);
          uVar16 = (ulonglong)(uVar83 & _UNK_150b50b34);
          uVar35 = (ulonglong)(uVar106 & _UNK_150b50b38);
          uVar39 = (ulonglong)(uVar141 & _UNK_150b50b3c);
          uVar41 = (ulonglong)(uVar82 & _UNK_150b50b30);
          auVar59 = vinsertps_avx(ZEXT416(*(uint *)(uVar41 + lVar18)),
                                  ZEXT416(*(uint *)(uVar16 + lVar18)),0x10);
          auVar59 = vinsertps_avx(auVar59,ZEXT416(*(uint *)(uVar35 + lVar18)),0x20);
          auVar59 = vinsertps_avx(auVar59,ZEXT416(*(uint *)(uVar39 + lVar18)),0x30);
          uVar11 = (ulonglong)
                   (uVar78 & ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                   );
          uVar9 = (ulonglong)(uVar79 & _UNK_150b50b24);
          auVar97 = vinsertps_avx(ZEXT416(*(uint *)(uVar11 + lVar18)),
                                  ZEXT416(*(uint *)(uVar9 + lVar18)),0x10);
          uVar17 = (ulonglong)(uVar80 & _UNK_150b50b28);
          auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(uVar17 + lVar18)),0x20);
          uVar22 = (ulonglong)(uVar81 & _UNK_150b50b2c);
          auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(uVar22 + lVar18)),0x30);
          uVar23 = (ulonglong)(uVar82 & _UNK_150b50b50);
          uVar24 = (ulonglong)(uVar83 & _UNK_150b50b54);
          auVar107 = vinsertps_avx(ZEXT416(*(uint *)(uVar23 + lVar18)),
                                   ZEXT416(*(uint *)(uVar24 + lVar18)),0x10);
          uVar25 = (ulonglong)(uVar106 & _UNK_150b50b58);
          auVar107 = vinsertps_avx(auVar107,ZEXT416(*(uint *)(uVar25 + lVar18)),0x20);
          uVar26 = (ulonglong)(uVar141 & _UNK_150b50b5c);
          auVar107 = vinsertps_avx(auVar107,ZEXT416(*(uint *)(uVar26 + lVar18)),0x30);
          uVar12 = (ulonglong)
                   (uVar78 & ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008
                   );
          uVar10 = (ulonglong)(uVar79 & _UNK_150b50b44);
          auVar70 = vinsertps_avx(ZEXT416(*(uint *)(uVar12 + lVar18)),
                                  ZEXT416(*(uint *)(uVar10 + lVar18)),0x10);
          uVar27 = (ulonglong)(uVar80 & _UNK_150b50b48);
          auVar70 = vinsertps_avx(auVar70,ZEXT416(*(uint *)(uVar27 + lVar18)),0x20);
          uVar28 = (ulonglong)(uVar81 & _UNK_150b50b4c);
          auVar70 = vinsertps_avx(auVar70,ZEXT416(*(uint *)(uVar28 + lVar18)),0x30);
          local_2a0._16_16_ = auVar47;
          local_2a0._0_16_ = auVar46;
          auVar109._16_16_ = auVar59;
          auVar109._0_16_ = auVar97;
          local_3a0._16_16_ = auVar107;
          local_3a0._0_16_ = auVar70;
          lVar18 = param_3 + lVar38;
          auVar46 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + lVar38)),
                                  ZEXT416(*(uint *)(uVar34 + lVar18)),0x10);
          auVar46 = vinsertps_avx(auVar46,ZEXT416(*(uint *)(lVar14 + lVar18)),0x20);
          auVar46 = vinsertps_avx(auVar46,ZEXT416(*(uint *)(lVar29 + lVar18)),0x30);
          auVar47 = vinsertps_avx(ZEXT416(*(uint *)(uVar15 + lVar18)),
                                  ZEXT416(*(uint *)(uVar42 + lVar18)),0x10);
          auVar47 = vinsertps_avx(auVar47,ZEXT416(*(uint *)(in_R10 + lVar18)),0x20);
          auVar47 = vinsertps_avx(auVar47,ZEXT416(*(uint *)(uVar43 + lVar18)),0x30);
          auVar59 = vinsertps_avx(ZEXT416(*(uint *)(uVar41 + lVar18)),
                                  ZEXT416(*(uint *)(uVar16 + lVar18)),0x10);
          auVar59 = vinsertps_avx(auVar59,ZEXT416(*(uint *)(uVar35 + lVar18)),0x20);
          auVar59 = vinsertps_avx(auVar59,ZEXT416(*(uint *)(uVar39 + lVar18)),0x30);
          auVar97 = vinsertps_avx(ZEXT416(*(uint *)(uVar11 + lVar18)),
                                  ZEXT416(*(uint *)(uVar9 + lVar18)),0x10);
          auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(uVar17 + lVar18)),0x20);
          auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(uVar22 + lVar18)),0x30);
          auVar107 = vinsertps_avx(ZEXT416(*(uint *)(uVar23 + lVar18)),
                                   ZEXT416(*(uint *)(uVar24 + lVar18)),0x10);
          auVar107 = vinsertps_avx(auVar107,ZEXT416(*(uint *)(uVar25 + lVar18)),0x20);
          auVar107 = vinsertps_avx(auVar107,ZEXT416(*(uint *)(uVar26 + lVar18)),0x30);
          auVar70 = vinsertps_avx(ZEXT416(*(uint *)(uVar12 + lVar18)),
                                  ZEXT416(*(uint *)(uVar10 + lVar18)),0x10);
          auVar70 = vinsertps_avx(auVar70,ZEXT416(*(uint *)(uVar27 + lVar18)),0x20);
          auVar70 = vinsertps_avx(auVar70,ZEXT416(*(uint *)(uVar28 + lVar18)),0x30);
          lVar18 = param_4 + lVar38;
          auVar129 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + lVar38)),
                                   ZEXT416(*(uint *)(uVar34 + lVar18)),0x10);
          auVar129 = vinsertps_avx(auVar129,ZEXT416(*(uint *)(lVar14 + lVar18)),0x20);
          auVar129 = vinsertps_avx(auVar129,ZEXT416(*(uint *)(lVar29 + lVar18)),0x30);
          auVar4 = vinsertps_avx(ZEXT416(*(uint *)(uVar15 + lVar18)),
                                 ZEXT416(*(uint *)(uVar42 + lVar18)),0x10);
          auVar4 = vinsertps_avx(auVar4,ZEXT416(*(uint *)(in_R10 + lVar18)),0x20);
          auVar4 = vinsertps_avx(auVar4,ZEXT416(*(uint *)(uVar43 + lVar18)),0x30);
          auVar5 = vinsertps_avx(ZEXT416(*(uint *)(uVar41 + lVar18)),
                                 ZEXT416(*(uint *)(uVar16 + lVar18)),0x10);
          auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(uVar35 + lVar18)),0x20);
          auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(uVar39 + lVar18)),0x30);
          auVar6 = vinsertps_avx(ZEXT416(*(uint *)(uVar11 + lVar18)),
                                 ZEXT416(*(uint *)(uVar9 + lVar18)),0x10);
          auVar6 = vinsertps_avx(auVar6,ZEXT416(*(uint *)(uVar17 + lVar18)),0x20);
          auVar6 = vinsertps_avx(auVar6,ZEXT416(*(uint *)(uVar22 + lVar18)),0x30);
          auVar7 = vinsertps_avx(ZEXT416(*(uint *)(uVar23 + lVar18)),
                                 ZEXT416(*(uint *)(uVar24 + lVar18)),0x10);
          auVar7 = vinsertps_avx(auVar7,ZEXT416(*(uint *)(uVar25 + lVar18)),0x20);
          auVar7 = vinsertps_avx(auVar7,ZEXT416(*(uint *)(uVar26 + lVar18)),0x30);
          auVar8 = vinsertps_avx(ZEXT416(*(uint *)(uVar12 + lVar18)),
                                 ZEXT416(*(uint *)(uVar10 + lVar18)),0x10);
          auVar8 = vinsertps_avx(auVar8,ZEXT416(*(uint *)(uVar27 + lVar18)),0x20);
          auVar8 = vinsertps_avx(auVar8,ZEXT416(*(uint *)(uVar28 + lVar18)),0x30);
          auVar72._16_16_ = auVar47;
          auVar72._0_16_ = auVar46;
          auVar85._16_16_ = auVar59;
          auVar85._0_16_ = auVar97;
          auVar99._16_16_ = auVar107;
          auVar99._0_16_ = auVar70;
          auVar142._16_16_ = auVar4;
          auVar142._0_16_ = auVar129;
          auVar149._16_16_ = auVar5;
          auVar149._0_16_ = auVar6;
          auVar152._16_16_ = auVar7;
          auVar152._0_16_ = auVar8;
          lVar18 = lVar38;
        }
        auVar108 = vsubps_avx(auVar98,auVar72);
        auVar85 = vsubps_avx(auVar51,auVar85);
        auVar99 = vsubps_avx(auVar114,auVar99);
        fVar45 = auVar133._0_4_;
        auVar74._0_4_ = fVar45 * auVar108._0_4_;
        fVar56 = auVar133._4_4_;
        auVar74._4_4_ = fVar56 * auVar108._4_4_;
        fVar57 = auVar133._8_4_;
        auVar74._8_4_ = fVar57 * auVar108._8_4_;
        fVar58 = auVar133._12_4_;
        auVar74._12_4_ = fVar58 * auVar108._12_4_;
        fVar134 = auVar133._16_4_;
        auVar74._16_4_ = fVar134 * auVar108._16_4_;
        fVar135 = auVar133._20_4_;
        auVar74._20_4_ = fVar135 * auVar108._20_4_;
        fVar136 = auVar133._24_4_;
        auVar74._24_4_ = fVar136 * auVar108._24_4_;
        fVar137 = auVar133._28_4_;
        auVar74._28_4_ = fVar137 * auVar108._28_4_;
        auVar88._0_4_ = fVar45 * auVar85._0_4_;
        auVar88._4_4_ = fVar56 * auVar85._4_4_;
        auVar88._8_4_ = fVar57 * auVar85._8_4_;
        auVar88._12_4_ = fVar58 * auVar85._12_4_;
        auVar88._16_4_ = fVar134 * auVar85._16_4_;
        auVar88._20_4_ = fVar135 * auVar85._20_4_;
        auVar88._24_4_ = fVar136 * auVar85._24_4_;
        auVar88._28_4_ = fVar137 * auVar85._28_4_;
        auVar101._0_4_ = fVar45 * auVar99._0_4_;
        auVar101._4_4_ = fVar56 * auVar99._4_4_;
        auVar101._8_4_ = fVar57 * auVar99._8_4_;
        auVar101._12_4_ = fVar58 * auVar99._12_4_;
        auVar101._16_4_ = fVar134 * auVar99._16_4_;
        auVar101._20_4_ = fVar135 * auVar99._20_4_;
        auVar101._24_4_ = fVar136 * auVar99._24_4_;
        auVar101._28_4_ = fVar137 * auVar99._28_4_;
        auVar98 = vsubps_avx(auVar98,auVar74);
        auVar108 = vsubps_avx(auVar51,auVar88);
        auVar114 = vsubps_avx(auVar114,auVar101);
        auVar51 = vmaskmovps_avx(auVar71,auVar98);
        auVar98 = vmaskmovps_avx(auVar71,auVar108);
        auVar114 = vmaskmovps_avx(auVar71,auVar114);
        auVar108 = vsubps_avx(auVar51,local_2a0);
        auVar99 = vsubps_avx(auVar98,auVar109);
        auVar109 = vsubps_avx(auVar114,local_3a0);
        local_1a0 = auVar60._0_4_;
        fStack_19c = auVar60._4_4_;
        fStack_198 = auVar60._8_4_;
        fStack_194 = auVar60._12_4_;
        auVar111._0_4_ = auVar142._0_4_ * local_1a0;
        auVar111._4_4_ = auVar142._4_4_ * fStack_19c;
        auVar111._8_4_ = auVar142._8_4_ * fStack_198;
        auVar111._12_4_ = auVar142._12_4_ * fStack_194;
        auVar111._16_4_ = auVar142._16_4_ * local_1a0;
        auVar111._20_4_ = auVar142._20_4_ * fStack_19c;
        auVar111._24_4_ = auVar142._24_4_ * fStack_198;
        auVar111._28_4_ = auVar142._28_4_ * fStack_194;
        auVar108 = vsubps_avx(auVar108,auVar111);
        auVar112._0_4_ = auVar149._0_4_ * local_1a0;
        auVar112._4_4_ = auVar149._4_4_ * fStack_19c;
        auVar112._8_4_ = auVar149._8_4_ * fStack_198;
        auVar112._12_4_ = auVar149._12_4_ * fStack_194;
        auVar112._16_4_ = auVar149._16_4_ * local_1a0;
        auVar112._20_4_ = auVar149._20_4_ * fStack_19c;
        auVar112._24_4_ = auVar149._24_4_ * fStack_198;
        auVar112._28_4_ = auVar149._28_4_ * fStack_194;
        auVar99 = vsubps_avx(auVar99,auVar112);
        auVar113._0_4_ = auVar152._0_4_ * local_1a0;
        auVar113._4_4_ = auVar152._4_4_ * fStack_19c;
        auVar113._8_4_ = auVar152._8_4_ * fStack_198;
        auVar113._12_4_ = auVar152._12_4_ * fStack_194;
        auVar113._16_4_ = auVar152._16_4_ * local_1a0;
        auVar113._20_4_ = auVar152._20_4_ * fStack_19c;
        auVar113._24_4_ = auVar152._24_4_ * fStack_198;
        auVar113._28_4_ = auVar152._28_4_ * fStack_194;
        auVar152 = vsubps_avx(auVar109,auVar113);
        local_180 = auVar48._0_4_;
        fStack_17c = auVar48._4_4_;
        fStack_178 = auVar48._8_4_;
        fStack_174 = auVar48._12_4_;
        auVar75._0_4_ = local_180 * auVar108._0_4_;
        auVar75._4_4_ = fStack_17c * auVar108._4_4_;
        auVar75._8_4_ = fStack_178 * auVar108._8_4_;
        auVar75._12_4_ = fStack_174 * auVar108._12_4_;
        auVar75._16_4_ = local_180 * auVar108._16_4_;
        auVar75._20_4_ = fStack_17c * auVar108._20_4_;
        auVar75._24_4_ = fStack_178 * auVar108._24_4_;
        auVar75._28_4_ = fStack_174 * auVar108._28_4_;
        auVar89._0_4_ = local_180 * auVar99._0_4_;
        auVar89._4_4_ = fStack_17c * auVar99._4_4_;
        auVar89._8_4_ = fStack_178 * auVar99._8_4_;
        auVar89._12_4_ = fStack_174 * auVar99._12_4_;
        auVar89._16_4_ = local_180 * auVar99._16_4_;
        auVar89._20_4_ = fStack_17c * auVar99._20_4_;
        auVar89._24_4_ = fStack_178 * auVar99._24_4_;
        auVar89._28_4_ = fStack_174 * auVar99._28_4_;
        auVar102._0_4_ = local_180 * auVar152._0_4_;
        auVar102._4_4_ = fStack_17c * auVar152._4_4_;
        auVar102._8_4_ = fStack_178 * auVar152._8_4_;
        auVar102._12_4_ = fStack_174 * auVar152._12_4_;
        auVar102._16_4_ = local_180 * auVar152._16_4_;
        auVar102._20_4_ = fStack_17c * auVar152._20_4_;
        auVar102._24_4_ = fStack_178 * auVar152._24_4_;
        auVar102._28_4_ = fStack_174 * auVar152._28_4_;
        auVar51 = vsubps_avx(auVar51,auVar75);
        auVar98 = vsubps_avx(auVar98,auVar89);
        auVar114 = vsubps_avx(auVar114,auVar102);
        auVar51 = vmaskmovps_avx(auVar71,auVar51);
        auVar98 = vmaskmovps_avx(auVar71,auVar98);
        auVar71 = vmaskmovps_avx(auVar71,auVar114);
        if (local_444 == -1) {
          auVar114 = vunpcklps_avx(auVar51,auVar98);
          auVar99 = vunpcklps_avx(auVar71,auVar84);
          auVar108 = vunpcklpd_avx(auVar114,auVar99);
          auVar114 = vunpckhpd_avx(auVar114,auVar99);
          auVar51 = vunpckhps_avx(auVar51,auVar98);
          auVar71 = vunpckhps_avx(auVar71,auVar84);
          auVar84 = vunpcklpd_avx(auVar51,auVar71);
          auVar71 = vunpckhpd_avx(auVar51,auVar71);
          *(undefined1 (*) [16])(*pauVar37 + 0x10) = auVar114._0_16_;
          *(undefined1 (*) [16])*pauVar37 = auVar108._0_16_;
          *(undefined1 (*) [16])(pauVar37[1] + 0x10) = auVar71._0_16_;
          *(undefined1 (*) [16])pauVar37[1] = auVar84._0_16_;
          *(undefined1 (*) [16])(pauVar37[2] + 0x10) = auVar114._16_16_;
          *(undefined1 (*) [16])pauVar37[2] = auVar108._16_16_;
          *(undefined1 (*) [16])(pauVar37[3] + 0x10) = auVar71._16_16_;
          *(undefined1 (*) [16])pauVar37[3] = auVar84._16_16_;
          pauVar21 = (undefined1 (*) [32])auStack_460;
        }
        else {
          if ((uVar13 & 1) != 0) {
            *(int *)*pauVar37 = auVar51._0_4_;
          }
          auVar46 = auVar51._0_16_;
          auVar47 = auVar51._16_16_;
          auVar107 = auVar98._0_16_;
          auVar70 = auVar98._16_16_;
          auVar59 = auVar71._0_16_;
          auVar97 = auVar71._16_16_;
          if ((uVar13 & 2) == 0) {
            if ((uVar13 & 4) == 0) goto LAB_1405a585c;
LAB_1405a59d0:
            uVar40 = vextractps_avx(auVar46,2);
            *(undefined4 *)pauVar37[1] = uVar40;
            if ((uVar13 & 8) != 0) goto LAB_1405a59e1;
LAB_1405a5866:
            if ((uVar13 & 0x10) == 0) goto LAB_1405a5876;
LAB_1405a59f8:
            *(int *)pauVar37[2] = auVar51._16_4_;
            if ((uVar13 & 0x20) != 0) goto LAB_1405a5a07;
LAB_1405a5880:
            if ((uVar13 & 0x40) == 0) goto LAB_1405a588a;
LAB_1405a5a18:
            uVar40 = vextractps_avx(auVar47,2);
            *(undefined4 *)pauVar37[3] = uVar40;
            if (local_444 < '\0') goto LAB_1405a5a2a;
LAB_1405a5895:
            if ((uVar13 & 1) == 0) goto LAB_1405a589f;
LAB_1405a5a3b:
            *(int *)(*pauVar37 + 4) = auVar98._0_4_;
            if ((uVar13 & 2) != 0) goto LAB_1405a5a4a;
LAB_1405a58a9:
            if ((uVar13 & 4) == 0) goto LAB_1405a58b3;
LAB_1405a5a5b:
            uVar40 = vextractps_avx(auVar107,2);
            *(undefined4 *)(pauVar37[1] + 4) = uVar40;
            if ((uVar13 & 8) != 0) goto LAB_1405a5a6c;
LAB_1405a58bd:
            if ((uVar13 & 0x10) == 0) goto LAB_1405a58cd;
LAB_1405a5a83:
            *(int *)(pauVar37[2] + 4) = auVar98._16_4_;
            if ((uVar13 & 0x20) != 0) goto LAB_1405a5a92;
LAB_1405a58d7:
            if ((uVar13 & 0x40) == 0) goto LAB_1405a58e1;
LAB_1405a5aa3:
            uVar40 = vextractps_avx(auVar70,2);
            *(undefined4 *)(pauVar37[3] + 4) = uVar40;
            if (local_444 < '\0') goto LAB_1405a5ab5;
LAB_1405a58ec:
            if ((uVar13 & 1) == 0) goto LAB_1405a58f6;
LAB_1405a5ac6:
            *(int *)(*pauVar37 + 8) = auVar71._0_4_;
            if ((uVar13 & 2) != 0) goto LAB_1405a5ad5;
LAB_1405a5900:
            if ((uVar13 & 4) == 0) goto LAB_1405a590a;
LAB_1405a5ae6:
            uVar40 = vextractps_avx(auVar59,2);
            *(undefined4 *)(pauVar37[1] + 8) = uVar40;
            if ((uVar13 & 8) != 0) goto LAB_1405a5af7;
LAB_1405a5914:
            if ((uVar13 & 0x10) == 0) goto LAB_1405a5924;
LAB_1405a5b0e:
            *(int *)(pauVar37[2] + 8) = auVar71._16_4_;
            if ((uVar13 & 0x20) != 0) goto LAB_1405a5b1d;
LAB_1405a592e:
            if ((uVar13 & 0x40) == 0) goto LAB_1405a5938;
LAB_1405a5b2e:
            uVar40 = vextractps_avx(auVar97,2);
            *(undefined4 *)(pauVar37[3] + 8) = uVar40;
            if (local_444 < '\0') goto LAB_1405a5b40;
LAB_1405a5943:
            if ((uVar13 & 1) == 0) goto LAB_1405a5958;
LAB_1405a5b5c:
            auVar71 = *pauVar37;
            uVar40 = vextractps_avx(auVar71._0_16_,3);
            *(undefined4 *)(*pauVar37 + 0xc) = uVar40;
            if ((uVar13 & 2) != 0) goto LAB_1405a5b6d;
LAB_1405a5962:
            if ((uVar13 & 4) == 0) goto LAB_1405a5972;
LAB_1405a5b8a:
            auVar71 = *pauVar1;
            uVar40 = vextractps_avx(auVar71._0_16_,3);
            *(undefined4 *)(pauVar37[1] + 0xc) = uVar40;
            if ((uVar13 & 8) != 0) goto LAB_1405a5ba4;
LAB_1405a5985:
            if ((uVar13 & 0x10) == 0) goto LAB_1405a5995;
LAB_1405a5bc1:
            auVar71 = *pauVar2;
            uVar40 = vextractps_avx(auVar71._0_16_,3);
            *(undefined4 *)(pauVar37[2] + 0xc) = uVar40;
            if ((uVar13 & 0x20) != 0) goto LAB_1405a5bd2;
LAB_1405a599f:
            if ((uVar13 & 0x40) == 0) goto LAB_1405a59af;
LAB_1405a5bef:
            auVar71 = *pauVar3;
            uVar40 = vextractps_avx(auVar71._0_16_,3);
            *(undefined4 *)(pauVar37[3] + 0xc) = uVar40;
          }
          else {
            uVar40 = vextractps_avx(auVar46,1);
            *(undefined4 *)(*pauVar37 + 0x10) = uVar40;
            if ((uVar13 & 4) != 0) goto LAB_1405a59d0;
LAB_1405a585c:
            if ((uVar13 & 8) == 0) goto LAB_1405a5866;
LAB_1405a59e1:
            uVar40 = vextractps_avx(auVar46,3);
            *(undefined4 *)(pauVar37[1] + 0x10) = uVar40;
            if ((uVar13 & 0x10) != 0) goto LAB_1405a59f8;
LAB_1405a5876:
            if ((uVar13 & 0x20) == 0) goto LAB_1405a5880;
LAB_1405a5a07:
            uVar40 = vextractps_avx(auVar47,1);
            *(undefined4 *)(pauVar37[2] + 0x10) = uVar40;
            if ((uVar13 & 0x40) != 0) goto LAB_1405a5a18;
LAB_1405a588a:
            if (-1 < local_444) goto LAB_1405a5895;
LAB_1405a5a2a:
            uVar40 = vextractps_avx(auVar47,3);
            *(undefined4 *)(pauVar37[3] + 0x10) = uVar40;
            if ((uVar13 & 1) != 0) goto LAB_1405a5a3b;
LAB_1405a589f:
            if ((uVar13 & 2) == 0) goto LAB_1405a58a9;
LAB_1405a5a4a:
            uVar40 = vextractps_avx(auVar107,1);
            *(undefined4 *)(*pauVar37 + 0x14) = uVar40;
            if ((uVar13 & 4) != 0) goto LAB_1405a5a5b;
LAB_1405a58b3:
            if ((uVar13 & 8) == 0) goto LAB_1405a58bd;
LAB_1405a5a6c:
            uVar40 = vextractps_avx(auVar107,3);
            *(undefined4 *)(pauVar37[1] + 0x14) = uVar40;
            if ((uVar13 & 0x10) != 0) goto LAB_1405a5a83;
LAB_1405a58cd:
            if ((uVar13 & 0x20) == 0) goto LAB_1405a58d7;
LAB_1405a5a92:
            uVar40 = vextractps_avx(auVar70,1);
            *(undefined4 *)(pauVar37[2] + 0x14) = uVar40;
            if ((uVar13 & 0x40) != 0) goto LAB_1405a5aa3;
LAB_1405a58e1:
            if (-1 < local_444) goto LAB_1405a58ec;
LAB_1405a5ab5:
            uVar40 = vextractps_avx(auVar70,3);
            *(undefined4 *)(pauVar37[3] + 0x14) = uVar40;
            if ((uVar13 & 1) != 0) goto LAB_1405a5ac6;
LAB_1405a58f6:
            if ((uVar13 & 2) == 0) goto LAB_1405a5900;
LAB_1405a5ad5:
            uVar40 = vextractps_avx(auVar59,1);
            *(undefined4 *)(*pauVar37 + 0x18) = uVar40;
            if ((uVar13 & 4) != 0) goto LAB_1405a5ae6;
LAB_1405a590a:
            if ((uVar13 & 8) == 0) goto LAB_1405a5914;
LAB_1405a5af7:
            uVar40 = vextractps_avx(auVar59,3);
            *(undefined4 *)(pauVar37[1] + 0x18) = uVar40;
            if ((uVar13 & 0x10) != 0) goto LAB_1405a5b0e;
LAB_1405a5924:
            if ((uVar13 & 0x20) == 0) goto LAB_1405a592e;
LAB_1405a5b1d:
            uVar40 = vextractps_avx(auVar97,1);
            *(undefined4 *)(pauVar37[2] + 0x18) = uVar40;
            if ((uVar13 & 0x40) != 0) goto LAB_1405a5b2e;
LAB_1405a5938:
            if (-1 < local_444) goto LAB_1405a5943;
LAB_1405a5b40:
            uVar40 = vextractps_avx(auVar97,3);
            *(undefined4 *)(pauVar37[3] + 0x18) = uVar40;
            if ((uVar13 & 1) != 0) goto LAB_1405a5b5c;
LAB_1405a5958:
            auVar71 = *pauVar37;
            if ((uVar13 & 2) == 0) goto LAB_1405a5962;
LAB_1405a5b6d:
            uVar40 = vextractps_avx(auVar71._16_16_,3);
            *(undefined4 *)(*pauVar37 + 0x1c) = uVar40;
            if ((uVar13 & 4) != 0) goto LAB_1405a5b8a;
LAB_1405a5972:
            auVar71 = *pauVar1;
            if ((uVar13 & 8) == 0) goto LAB_1405a5985;
LAB_1405a5ba4:
            uVar40 = vextractps_avx(auVar71._16_16_,3);
            *(undefined4 *)(pauVar37[1] + 0x1c) = uVar40;
            if ((uVar13 & 0x10) != 0) goto LAB_1405a5bc1;
LAB_1405a5995:
            auVar71 = *pauVar2;
            if ((uVar13 & 0x20) == 0) goto LAB_1405a599f;
LAB_1405a5bd2:
            uVar40 = vextractps_avx(auVar71._16_16_,3);
            *(undefined4 *)(pauVar37[2] + 0x1c) = uVar40;
            if ((uVar13 & 0x40) != 0) goto LAB_1405a5bef;
LAB_1405a59af:
            auVar71 = *pauVar3;
          }
          pauVar21 = (undefined1 (*) [32])auStack_460;
          if (local_444 < '\0') {
            uVar40 = vextractps_avx(auVar71._16_16_,3);
            *(undefined4 *)(pauVar37[3] + 0x1c) = uVar40;
            pauVar21 = (undefined1 (*) [32])auStack_460;
          }
        }
      }
      lVar38 = lVar38 + 0x60;
      pauVar37 = pauVar37 + 4;
      uVar13 = (int)uVar33 + 8;
      uVar33 = (ulonglong)uVar13;
    } while ((int)uVar13 < (int)(uVar32 & 0xfffffff8));
  }
  if ((int)(uint)uVar33 < (int)param_8) {
    auVar48 = vpshufd_avx(ZEXT416((uint)uVar33),0);
    auVar51._16_16_ = auVar48;
    auVar51._0_16_ = auVar48;
    auVar46 = vpshufd_avx(ZEXT416(param_8),0);
    pauVar36 = (undefined1 (*) [16])(*param_1 + uVar33 * 0x10);
    auVar47 = SUB3216(auVar51 | 
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
    auVar59 = SUB3216(auVar51 | 
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
    auVar60 = vpcmpgtd_avx(auVar46,auVar59);
    auVar48 = vpcmpgtd_avx(auVar46,auVar47);
    auVar48 = vpand_avx(auVar48,auVar60);
    auVar60 = vpcmpeqd_avx(auVar60,auVar60);
    auVar60 = auVar60 & ~auVar48;
    if ((((SUB161(auVar60 >> 0x1f,0) & 1) == 0 && (SUB161(auVar60 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar60 >> 0x5f,0) & 1) == 0) && -1 < auVar60[0xf]) {
      auVar77._16_16_ = pauVar36[4];
      auVar77._0_16_ = *pauVar36;
      auVar104._16_16_ = pauVar36[5];
      auVar104._0_16_ = pauVar36[1];
      auVar115._16_16_ = pauVar36[6];
      auVar115._0_16_ = pauVar36[2];
      auVar123._16_16_ = pauVar36[7];
      auVar123._0_16_ = pauVar36[3];
      auVar84 = vunpcklps_avx(auVar77,auVar104);
      auVar71 = vunpckhps_avx(auVar77,auVar104);
      auVar98 = vunpcklps_avx(auVar115,auVar123);
      auVar51 = vunpckhps_avx(auVar115,auVar123);
      auVar103 = vunpcklpd_avx(auVar84,auVar98);
      auVar114 = vunpckhpd_avx(auVar84,auVar98);
      auVar122 = vunpcklpd_avx(auVar71,auVar51);
      auVar76 = vunpckhpd_avx(auVar71,auVar51);
    }
    else {
      auVar48 = vpcmpgtd_avx(auVar46,auVar59);
      auVar60 = vpcmpgtd_avx(auVar46,auVar47);
      uVar13 = auVar60._0_4_;
      auVar97._0_4_ =
           uVar13 & ___ymm_0000007000000060000000500000004000000030000000200000001000000000;
      uVar31 = auVar60._4_4_;
      auVar97._4_4_ = uVar31 & _UNK_150b50e44;
      uVar78 = auVar60._8_4_;
      auVar97._8_4_ = uVar78 & _UNK_150b50e48;
      uVar79 = auVar60._12_4_;
      auVar97._12_4_ = uVar79 & _UNK_150b50e4c;
      uVar80 = auVar48._0_4_;
      uVar81 = auVar48._4_4_;
      uVar82 = auVar48._8_4_;
      uVar83 = auVar48._12_4_;
      uVar19 = (undefined4)(uVar33 * 0x10 >> 0x20);
      uVar40 = vextractps_avx(auVar97,1);
      uVar30 = (undefined4)((ulonglong)pauVar21 >> 0x20);
      uVar20 = vextractps_avx(auVar97,2);
      uVar32 = vextractps_avx(auVar97,3);
      auVar48 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar36 + (uVar80 & _UNK_150b50e50))),
                              ZEXT416(*(uint *)(*pauVar36 + (uVar81 & _UNK_150b50e54))),0x10);
      auVar48 = vinsertps_avx(auVar48,ZEXT416(*(uint *)(*pauVar36 + (uVar82 & _UNK_150b50e58))),0x20
                             );
      auVar48 = vinsertps_avx(auVar48,ZEXT416(*(uint *)(*pauVar36 + (uVar83 & _UNK_150b50e5c))),0x30
                             );
      auVar60 = vinsertps_avx(ZEXT416(*(uint *)*pauVar36),
                              ZEXT416(*(uint *)(*pauVar36 + CONCAT44(uVar19,uVar40))),0x10);
      auVar60 = vinsertps_avx(auVar60,ZEXT416(*(uint *)(*pauVar36 + CONCAT44(uVar30,uVar20))),0x20);
      auVar60 = vinsertps_avx(auVar60,ZEXT416(*(uint *)(*pauVar36 + uVar32)),0x30);
      auVar107._0_4_ =
           uVar13 & ___ymm_0000007400000064000000540000004400000034000000240000001400000004;
      auVar107._4_4_ = uVar31 & _UNK_150b50e64;
      auVar107._8_4_ = uVar78 & _UNK_150b50e68;
      auVar107._12_4_ = uVar79 & _UNK_150b50e6c;
      uVar40 = vextractps_avx(auVar107,1);
      uVar20 = vextractps_avx(auVar107,2);
      uVar32 = vextractps_avx(auVar107,3);
      auVar97 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar36 + (uVar80 & _UNK_150b50e70))),
                              ZEXT416(*(uint *)(*pauVar36 + (uVar81 & _UNK_150b50e74))),0x10);
      auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(*pauVar36 + (uVar82 & _UNK_150b50e78))),0x20
                             );
      auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(*pauVar36 + (uVar83 & _UNK_150b50e7c))),0x30
                             );
      auVar107 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar36 + auVar107._0_4_)),
                               ZEXT416(*(uint *)(*pauVar36 + CONCAT44(uVar19,uVar40))),0x10);
      auVar107 = vinsertps_avx(auVar107,ZEXT416(*(uint *)(*pauVar36 + CONCAT44(uVar30,uVar20))),0x20
                              );
      auVar107 = vinsertps_avx(auVar107,ZEXT416(*(uint *)(*pauVar36 + uVar32)),0x30);
      auVar129._0_4_ =
           uVar13 & ___ymm_0000007800000068000000580000004800000038000000280000001800000008;
      auVar129._4_4_ = uVar31 & _UNK_150b50e84;
      auVar129._8_4_ = uVar78 & _UNK_150b50e88;
      auVar129._12_4_ = uVar79 & _UNK_150b50e8c;
      uVar40 = vextractps_avx(auVar129,1);
      uVar20 = vextractps_avx(auVar129,2);
      auVar103._16_16_ = auVar48;
      auVar103._0_16_ = auVar60;
      uVar32 = vextractps_avx(auVar129,3);
      auVar48 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar36 + (uVar80 & _UNK_150b50e90))),
                              ZEXT416(*(uint *)(*pauVar36 + (uVar81 & _UNK_150b50e94))),0x10);
      auVar48 = vinsertps_avx(auVar48,ZEXT416(*(uint *)(*pauVar36 + (uVar82 & _UNK_150b50e98))),0x20
                             );
      auVar48 = vinsertps_avx(auVar48,ZEXT416(*(uint *)(*pauVar36 + (uVar83 & _UNK_150b50e9c))),0x30
                             );
      auVar60 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar36 + auVar129._0_4_)),
                              ZEXT416(*(uint *)(*pauVar36 + CONCAT44(uVar19,uVar40))),0x10);
      auVar60 = vinsertps_avx(auVar60,ZEXT416(*(uint *)(*pauVar36 + CONCAT44(uVar30,uVar20))),0x20);
      auVar60 = vinsertps_avx(auVar60,ZEXT416(*(uint *)(*pauVar36 + uVar32)),0x30);
      auVar70._0_4_ =
           uVar13 & ___ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c;
      auVar70._4_4_ = uVar31 & _UNK_150b50ea4;
      auVar70._8_4_ = uVar78 & _UNK_150b50ea8;
      auVar70._12_4_ = uVar79 & _UNK_150b50eac;
      uVar40 = vextractps_avx(auVar70,1);
      uVar20 = vextractps_avx(auVar70,2);
      auVar114._16_16_ = auVar97;
      auVar114._0_16_ = auVar107;
      uVar32 = vextractps_avx(auVar70,3);
      auVar97 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar36 + (uVar80 & _UNK_150b50eb0))),
                              ZEXT416(*(uint *)(*pauVar36 + (uVar81 & _UNK_150b50eb4))),0x10);
      auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(*pauVar36 + (uVar82 & _UNK_150b50eb8))),0x20
                             );
      auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(*pauVar36 + (uVar83 & _UNK_150b50ebc))),0x30
                             );
      auVar107 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar36 + auVar70._0_4_)),
                               ZEXT416(*(uint *)(*pauVar36 + CONCAT44(uVar19,uVar40))),0x10);
      auVar107 = vinsertps_avx(auVar107,ZEXT416(*(uint *)(*pauVar36 + CONCAT44(uVar30,uVar20))),0x20
                              );
      auVar122._16_16_ = auVar48;
      auVar122._0_16_ = auVar60;
      auVar48 = vinsertps_avx(auVar107,ZEXT416(*(uint *)(*pauVar36 + uVar32)),0x30);
      auVar76._16_16_ = auVar97;
      auVar76._0_16_ = auVar48;
    }
    auVar48 = vpcmpgtd_avx(auVar46,auVar59);
    auVar60 = vpcmpgtd_avx(auVar46,auVar47);
    auVar90._16_16_ = auVar48;
    auVar90._0_16_ = auVar60;
    auVar71 = vmaskmovps_avx(auVar90,auVar103);
    auVar51 = vmaskmovps_avx(auVar90,auVar114);
    auVar84 = vmaskmovps_avx(auVar90,auVar122);
    auVar98 = vcmpps_avx(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar76,1);
    auVar91._0_4_ = auVar98._0_4_ & auVar60._0_4_;
    auVar91._4_4_ = auVar98._4_4_ & auVar60._4_4_;
    auVar91._8_4_ = auVar98._8_4_ & auVar60._8_4_;
    auVar91._12_4_ = auVar98._12_4_ & auVar60._12_4_;
    auVar91._16_4_ = auVar98._16_4_ & auVar48._0_4_;
    auVar91._20_4_ = auVar98._20_4_ & auVar48._4_4_;
    auVar91._24_4_ = auVar98._24_4_ & auVar48._8_4_;
    auVar91._28_4_ = auVar98._28_4_ & auVar48._12_4_;
    uVar32 = vmovmskps_avx(auVar91);
    if (uVar32 != 0) {
      auVar48 = vpand_avx(auVar98._16_16_,auVar48);
      auVar47._0_4_ = auVar98._0_4_ & auVar60._0_4_;
      auVar47._4_4_ = auVar98._4_4_ & auVar60._4_4_;
      auVar47._8_4_ = auVar98._8_4_ & auVar60._8_4_;
      auVar47._12_4_ = auVar98._12_4_ & auVar60._12_4_;
      auVar48 = vpackssdw_avx(auVar47,auVar48);
      pauVar21 = (undefined1 (*) [32])(param_2 + uVar33 * 0xc);
      auVar60 = vpmovsxwd_avx(auVar48);
      auVar48 = vpunpckhwd_avx(auVar48,auVar48);
      local_444 = (char)uVar32;
      if (local_444 == -1) {
        auVar108 = pauVar21[2];
        auVar66._16_16_ = *(undefined1 (*) [16])*pauVar21;
        auVar66._0_16_ = *(undefined1 (*) [16])(*pauVar21 + 0x10);
        auVar98 = vblendps_avx(*pauVar21,auVar66,0x24);
        auVar98 = vpermilps_avx(auVar98,
                                ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                               );
        uVar40 = *(undefined4 *)(pauVar21[1] + 4);
        auVar145._4_4_ = uVar40;
        auVar145._0_4_ = uVar40;
        auVar145._8_4_ = uVar40;
        auVar145._12_4_ = uVar40;
        uVar40 = *(undefined4 *)(pauVar21[1] + 8);
        auVar145._20_4_ = uVar40;
        auVar145._16_4_ = uVar40;
        auVar145._24_4_ = uVar40;
        auVar145._28_4_ = uVar40;
        auVar98 = vblendps_avx(auVar98,auVar145,0x88);
        auVar146._16_16_ = *(undefined1 (*) [16])pauVar21[2];
        auVar146._0_16_ = *(undefined1 (*) [16])(pauVar21[2] + 0x10);
        auVar114 = vblendps_avx(auVar146,auVar108,0x44);
        auVar114 = vpermilps_avx(auVar114,
                                 ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                                );
        auVar46 = vshufps_avx(*(undefined1 (*) [16])(pauVar21[1] + 0x10),
                              *(undefined1 (*) [16])(pauVar21[1] + 0x10),0xec);
        uVar40 = *(undefined4 *)(pauVar21[1] + 0x14);
        auVar126._20_4_ = uVar40;
        auVar126._16_4_ = uVar40;
        auVar126._24_4_ = uVar40;
        auVar126._28_4_ = uVar40;
        auVar126._0_16_ = auVar46;
        auVar114 = vblendps_avx(auVar114,auVar126,0x13);
        auVar62._16_16_ = auVar114._0_16_;
        auVar62._0_16_ = auVar98._0_16_;
        local_280 = vperm2f128_avx(auVar98,auVar114,0x31);
        auVar98 = vblendps_avx(pauVar21[1],*pauVar21,0x24);
        auVar98 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])(*pauVar21 + 0x10)),auVar98,0x21);
        auVar98 = vshufps_avx(auVar98,pauVar21[1],0xc2);
        auVar114 = vshufps_avx(auVar146,auVar108,0xc4);
        local_320 = vblendps_avx(auVar98,auVar114,0xe0);
        lVar18 = uVar33 * 0xc;
        auVar46 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar18);
        auVar47 = *(undefined1 (*) [16])(param_3 + 0x30 + lVar18);
        auVar59 = *(undefined1 (*) [16])(param_3 + 0x50 + lVar18);
        auVar97 = *(undefined1 (*) [16])(param_3 + 0x40 + lVar18);
        uVar40 = *(undefined4 *)(param_3 + 0x28 + lVar18);
        auVar132._20_4_ = uVar40;
        auVar132._16_4_ = uVar40;
        auVar132._24_4_ = uVar40;
        auVar132._28_4_ = uVar40;
        uVar40 = *(undefined4 *)(param_3 + 0x24 + lVar18);
        auVar132._4_4_ = uVar40;
        auVar132._0_4_ = uVar40;
        auVar132._8_4_ = uVar40;
        auVar132._12_4_ = uVar40;
        uVar40 = *(undefined4 *)(param_3 + 0x34 + lVar18);
        auVar52._20_4_ = uVar40;
        auVar52._16_4_ = uVar40;
        auVar52._24_4_ = uVar40;
        auVar52._28_4_ = uVar40;
        auVar63._16_16_ = auVar46;
        auVar63._0_16_ = *(undefined1 (*) [16])(param_3 + lVar18);
        auVar67._16_16_ = auVar47;
        auVar67._0_16_ = *(undefined1 (*) [16])(param_3 + 0x20 + lVar18);
        auVar92._16_16_ = auVar59;
        auVar92._0_16_ = auVar97;
        auVar127._16_16_ = *(undefined1 (*) [16])(param_3 + lVar18);
        auVar127._0_16_ = auVar46;
        auVar98 = vblendps_avx(auVar63,auVar127,0x24);
        auVar98 = vpermilps_avx(auVar98,
                                ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                               );
        auVar98 = vblendps_avx(auVar98,auVar132,0x88);
        auVar147._16_16_ = auVar97;
        auVar147._0_16_ = auVar59;
        auVar114 = vblendps_avx(auVar147,auVar92,0x44);
        auVar114 = vpermilps_avx(auVar114,
                                 ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                                );
        auVar47 = vshufps_avx(auVar47,auVar47,0xec);
        auVar52._0_16_ = auVar47;
        auVar114 = vblendps_avx(auVar114,auVar52,0x13);
        auVar125._16_16_ = auVar114._0_16_;
        auVar125._0_16_ = auVar98._0_16_;
        auVar131 = vperm2f128_avx(auVar98,auVar114,0x31);
        auVar98 = vblendps_avx(auVar67,auVar63,0x24);
        auVar98 = vshufps_avx(ZEXT1632(auVar46),auVar98,0x21);
        auVar98 = vshufps_avx(auVar98,auVar67,0xc2);
        auVar114 = vshufps_avx(auVar147,auVar92,0xc4);
        auVar138 = vblendps_avx(auVar98,auVar114,0xe0);
        auVar46 = *(undefined1 (*) [16])(param_4 + 0x10 + lVar18);
        auVar47 = *(undefined1 (*) [16])(param_4 + 0x30 + lVar18);
        auVar140._16_16_ = auVar46;
        auVar140._0_16_ = *(undefined1 (*) [16])(param_4 + lVar18);
        auVar68._16_16_ = auVar47;
        auVar68._0_16_ = *(undefined1 (*) [16])(param_4 + 0x20 + lVar18);
        auVar59 = *(undefined1 (*) [16])(param_4 + 0x50 + lVar18);
        auVar97 = *(undefined1 (*) [16])(param_4 + 0x40 + lVar18);
        auVar157._16_16_ = auVar59;
        auVar157._0_16_ = auVar97;
        auVar53._16_16_ = *(undefined1 (*) [16])(param_4 + lVar18);
        auVar53._0_16_ = auVar46;
        auVar98 = vblendps_avx(auVar140,auVar53,0x24);
        auVar98 = vpermilps_avx(auVar98,
                                ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                               );
        uVar40 = *(undefined4 *)(param_4 + 0x28 + lVar18);
        auVar117._20_4_ = uVar40;
        auVar117._16_4_ = uVar40;
        auVar117._24_4_ = uVar40;
        auVar117._28_4_ = uVar40;
        uVar40 = *(undefined4 *)(param_4 + 0x24 + lVar18);
        auVar117._4_4_ = uVar40;
        auVar117._0_4_ = uVar40;
        auVar117._8_4_ = uVar40;
        auVar117._12_4_ = uVar40;
        auVar98 = vblendps_avx(auVar98,auVar117,0x88);
        auVar148._16_16_ = auVar97;
        auVar148._0_16_ = auVar59;
        auVar114 = vblendps_avx(auVar148,auVar157,0x44);
        auVar114 = vpermilps_avx(auVar114,
                                 ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                                );
        uVar40 = *(undefined4 *)(param_4 + 0x34 + lVar18);
        auVar93._20_4_ = uVar40;
        auVar93._16_4_ = uVar40;
        auVar93._24_4_ = uVar40;
        auVar93._28_4_ = uVar40;
        auVar47 = vshufps_avx(auVar47,auVar47,0xec);
        auVar93._0_16_ = auVar47;
        auVar114 = vblendps_avx(auVar114,auVar93,0x13);
        auVar124._16_16_ = auVar114._0_16_;
        auVar124._0_16_ = auVar98._0_16_;
        auVar116 = vperm2f128_avx(auVar98,auVar114,0x31);
        auVar98 = vblendps_avx(auVar68,auVar140,0x24);
        auVar98 = vshufps_avx(ZEXT1632(auVar46),auVar98,0x21);
        auVar98 = vshufps_avx(auVar98,auVar68,0xc2);
        auVar114 = vshufps_avx(auVar148,auVar157,0xc4);
        auVar139 = vblendps_avx(auVar98,auVar114,0xe0);
      }
      else {
        uVar31 = auVar60._0_4_;
        auVar59._0_4_ =
             uVar31 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000;
        uVar78 = auVar60._4_4_;
        auVar59._4_4_ = uVar78 & _UNK_150b50b04;
        uVar79 = auVar60._8_4_;
        auVar59._8_4_ = uVar79 & _UNK_150b50b08;
        uVar80 = auVar60._12_4_;
        auVar59._12_4_ = uVar80 & _UNK_150b50b0c;
        uVar81 = auVar48._0_4_;
        uVar82 = auVar48._4_4_;
        uVar83 = auVar48._8_4_;
        uVar106 = auVar48._12_4_;
        uVar40 = vextractps_avx(auVar59,1);
        lVar14 = CONCAT44((int)(uVar33 * 3 >> 0x20),uVar40);
        uVar40 = vextractps_avx(auVar59,2);
        lVar29 = CONCAT44((int)((ulonglong)param_2 >> 0x20),uVar40);
        uVar13 = vextractps_avx(auVar59,3);
        uVar22 = (ulonglong)uVar13;
        uVar24 = (ulonglong)(uVar82 & _UNK_150b50b14);
        uVar41 = (ulonglong)(uVar83 & _UNK_150b50b18);
        uVar43 = (ulonglong)(uVar106 & _UNK_150b50b1c);
        uVar23 = (ulonglong)(uVar81 & _UNK_150b50b10);
        auVar46 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar21 + uVar23)),
                                ZEXT416(*(uint *)(*pauVar21 + uVar24)),0x10);
        auVar46 = vinsertps_avx(auVar46,ZEXT416(*(uint *)(*pauVar21 + uVar41)),0x20);
        auVar46 = vinsertps_avx(auVar46,ZEXT416(*(uint *)(*pauVar21 + uVar43)),0x30);
        auVar47 = vinsertps_avx(ZEXT416(*(uint *)*pauVar21),ZEXT416(*(uint *)(*pauVar21 + lVar14)),
                                0x10);
        auVar47 = vinsertps_avx(auVar47,ZEXT416(*(uint *)(*pauVar21 + lVar29)),0x20);
        auVar47 = vinsertps_avx(auVar47,ZEXT416(*(uint *)(*pauVar21 + uVar22)),0x30);
        uVar15 = (ulonglong)(uVar82 & _UNK_150b50b34);
        uVar25 = (ulonglong)(uVar83 & _UNK_150b50b38);
        uVar44 = (ulonglong)(uVar81 & _UNK_150b50b30);
        uVar42 = (ulonglong)(uVar106 & _UNK_150b50b3c);
        auVar59 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar21 + uVar44)),
                                ZEXT416(*(uint *)(*pauVar21 + uVar15)),0x10);
        auVar59 = vinsertps_avx(auVar59,ZEXT416(*(uint *)(*pauVar21 + uVar25)),0x20);
        uVar11 = (ulonglong)
                 (uVar31 & ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004);
        auVar59 = vinsertps_avx(auVar59,ZEXT416(*(uint *)(*pauVar21 + uVar42)),0x30);
        uVar9 = (ulonglong)(uVar78 & _UNK_150b50b24);
        auVar97 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar21 + uVar11)),
                                ZEXT416(*(uint *)(*pauVar21 + uVar9)),0x10);
        uVar16 = (ulonglong)(uVar79 & _UNK_150b50b28);
        auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(*pauVar21 + uVar16)),0x20);
        uVar17 = (ulonglong)(uVar80 & _UNK_150b50b2c);
        auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(*pauVar21 + uVar17)),0x30);
        uVar26 = (ulonglong)(uVar81 & _UNK_150b50b50);
        uVar27 = (ulonglong)(uVar82 & _UNK_150b50b54);
        auVar107 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar21 + uVar26)),
                                 ZEXT416(*(uint *)(*pauVar21 + uVar27)),0x10);
        uVar28 = (ulonglong)(uVar83 & _UNK_150b50b58);
        auVar107 = vinsertps_avx(auVar107,ZEXT416(*(uint *)(*pauVar21 + uVar28)),0x20);
        uVar34 = (ulonglong)(uVar106 & _UNK_150b50b5c);
        auVar107 = vinsertps_avx(auVar107,ZEXT416(*(uint *)(*pauVar21 + uVar34)),0x30);
        uVar12 = (ulonglong)
                 (uVar31 & ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008);
        uVar10 = (ulonglong)(uVar78 & _UNK_150b50b44);
        auVar70 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar21 + uVar12)),
                                ZEXT416(*(uint *)(*pauVar21 + uVar10)),0x10);
        uVar35 = (ulonglong)(uVar79 & _UNK_150b50b48);
        auVar70 = vinsertps_avx(auVar70,ZEXT416(*(uint *)(*pauVar21 + uVar35)),0x20);
        uVar39 = (ulonglong)(uVar80 & _UNK_150b50b4c);
        auVar70 = vinsertps_avx(auVar70,ZEXT416(*(uint *)(*pauVar21 + uVar39)),0x30);
        auVar62._16_16_ = auVar46;
        auVar62._0_16_ = auVar47;
        local_280._16_16_ = auVar59;
        local_280._0_16_ = auVar97;
        local_320._16_16_ = auVar107;
        local_320._0_16_ = auVar70;
        lVar38 = uVar33 * 0xc;
        lVar18 = param_3 + lVar38;
        auVar46 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + lVar38)),
                                ZEXT416(*(uint *)(lVar14 + lVar18)),0x10);
        auVar46 = vinsertps_avx(auVar46,ZEXT416(*(uint *)(lVar29 + lVar18)),0x20);
        auVar46 = vinsertps_avx(auVar46,ZEXT416(*(uint *)(uVar22 + lVar18)),0x30);
        auVar47 = vinsertps_avx(ZEXT416(*(uint *)(uVar23 + lVar18)),
                                ZEXT416(*(uint *)(uVar24 + lVar18)),0x10);
        auVar47 = vinsertps_avx(auVar47,ZEXT416(*(uint *)(uVar41 + lVar18)),0x20);
        auVar47 = vinsertps_avx(auVar47,ZEXT416(*(uint *)(uVar43 + lVar18)),0x30);
        auVar59 = vinsertps_avx(ZEXT416(*(uint *)(uVar44 + lVar18)),
                                ZEXT416(*(uint *)(uVar15 + lVar18)),0x10);
        auVar59 = vinsertps_avx(auVar59,ZEXT416(*(uint *)(uVar25 + lVar18)),0x20);
        auVar59 = vinsertps_avx(auVar59,ZEXT416(*(uint *)(uVar42 + lVar18)),0x30);
        auVar97 = vinsertps_avx(ZEXT416(*(uint *)(uVar11 + lVar18)),
                                ZEXT416(*(uint *)(uVar9 + lVar18)),0x10);
        auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(uVar16 + lVar18)),0x20);
        auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(uVar17 + lVar18)),0x30);
        auVar107 = vinsertps_avx(ZEXT416(*(uint *)(uVar26 + lVar18)),
                                 ZEXT416(*(uint *)(uVar27 + lVar18)),0x10);
        auVar107 = vinsertps_avx(auVar107,ZEXT416(*(uint *)(uVar28 + lVar18)),0x20);
        auVar107 = vinsertps_avx(auVar107,ZEXT416(*(uint *)(uVar34 + lVar18)),0x30);
        auVar70 = vinsertps_avx(ZEXT416(*(uint *)(uVar12 + lVar18)),
                                ZEXT416(*(uint *)(uVar10 + lVar18)),0x10);
        auVar70 = vinsertps_avx(auVar70,ZEXT416(*(uint *)(uVar35 + lVar18)),0x20);
        auVar70 = vinsertps_avx(auVar70,ZEXT416(*(uint *)(uVar39 + lVar18)),0x30);
        lVar18 = param_4 + lVar38;
        auVar129 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + lVar38)),
                                 ZEXT416(*(uint *)(lVar14 + lVar18)),0x10);
        auVar129 = vinsertps_avx(auVar129,ZEXT416(*(uint *)(lVar29 + lVar18)),0x20);
        auVar129 = vinsertps_avx(auVar129,ZEXT416(*(uint *)(uVar22 + lVar18)),0x30);
        auVar4 = vinsertps_avx(ZEXT416(*(uint *)(uVar23 + lVar18)),
                               ZEXT416(*(uint *)(uVar24 + lVar18)),0x10);
        auVar4 = vinsertps_avx(auVar4,ZEXT416(*(uint *)(uVar41 + lVar18)),0x20);
        auVar4 = vinsertps_avx(auVar4,ZEXT416(*(uint *)(uVar43 + lVar18)),0x30);
        auVar5 = vinsertps_avx(ZEXT416(*(uint *)(uVar44 + lVar18)),
                               ZEXT416(*(uint *)(uVar15 + lVar18)),0x10);
        auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(uVar25 + lVar18)),0x20);
        auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(uVar42 + lVar18)),0x30);
        auVar6 = vinsertps_avx(ZEXT416(*(uint *)(uVar11 + lVar18)),
                               ZEXT416(*(uint *)(uVar9 + lVar18)),0x10);
        auVar6 = vinsertps_avx(auVar6,ZEXT416(*(uint *)(uVar16 + lVar18)),0x20);
        auVar6 = vinsertps_avx(auVar6,ZEXT416(*(uint *)(uVar17 + lVar18)),0x30);
        auVar7 = vinsertps_avx(ZEXT416(*(uint *)(uVar26 + lVar18)),
                               ZEXT416(*(uint *)(uVar27 + lVar18)),0x10);
        auVar7 = vinsertps_avx(auVar7,ZEXT416(*(uint *)(uVar28 + lVar18)),0x20);
        auVar7 = vinsertps_avx(auVar7,ZEXT416(*(uint *)(uVar34 + lVar18)),0x30);
        auVar8 = vinsertps_avx(ZEXT416(*(uint *)(uVar12 + lVar18)),
                               ZEXT416(*(uint *)(uVar10 + lVar18)),0x10);
        auVar8 = vinsertps_avx(auVar8,ZEXT416(*(uint *)(uVar35 + lVar18)),0x20);
        auVar8 = vinsertps_avx(auVar8,ZEXT416(*(uint *)(uVar39 + lVar18)),0x30);
        auVar125._16_16_ = auVar47;
        auVar125._0_16_ = auVar46;
        auVar131._16_16_ = auVar59;
        auVar131._0_16_ = auVar97;
        auVar138._16_16_ = auVar107;
        auVar138._0_16_ = auVar70;
        auVar124._16_16_ = auVar4;
        auVar124._0_16_ = auVar129;
        auVar116._16_16_ = auVar5;
        auVar116._0_16_ = auVar6;
        auVar139._16_16_ = auVar7;
        auVar139._0_16_ = auVar8;
      }
      auVar46 = vshufps_avx(ZEXT416(param_6),ZEXT416(param_6),0);
      auVar98 = vsubps_avx(auVar71,auVar125);
      auVar114 = vsubps_avx(auVar51,auVar131);
      auVar108 = vsubps_avx(auVar84,auVar138);
      fVar45 = auVar46._0_4_;
      auVar94._0_4_ = fVar45 * auVar98._0_4_;
      fVar56 = auVar46._4_4_;
      auVar94._4_4_ = fVar56 * auVar98._4_4_;
      fVar57 = auVar46._8_4_;
      auVar94._8_4_ = fVar57 * auVar98._8_4_;
      fVar58 = auVar46._12_4_;
      auVar94._12_4_ = fVar58 * auVar98._12_4_;
      auVar94._16_4_ = fVar45 * auVar98._16_4_;
      auVar94._20_4_ = fVar56 * auVar98._20_4_;
      auVar94._24_4_ = fVar57 * auVar98._24_4_;
      auVar94._28_4_ = fVar58 * auVar98._28_4_;
      auVar128._0_4_ = auVar114._0_4_ * fVar45;
      auVar128._4_4_ = auVar114._4_4_ * fVar56;
      auVar128._8_4_ = auVar114._8_4_ * fVar57;
      auVar128._12_4_ = auVar114._12_4_ * fVar58;
      auVar128._16_4_ = auVar114._16_4_ * fVar45;
      auVar128._20_4_ = auVar114._20_4_ * fVar56;
      auVar128._24_4_ = auVar114._24_4_ * fVar57;
      auVar128._28_4_ = auVar114._28_4_ * fVar58;
      auVar54._0_4_ = auVar108._0_4_ * fVar45;
      auVar54._4_4_ = auVar108._4_4_ * fVar56;
      auVar54._8_4_ = auVar108._8_4_ * fVar57;
      auVar54._12_4_ = auVar108._12_4_ * fVar58;
      auVar54._16_4_ = auVar108._16_4_ * fVar45;
      auVar54._20_4_ = auVar108._20_4_ * fVar56;
      auVar54._24_4_ = auVar108._24_4_ * fVar57;
      auVar54._28_4_ = auVar108._28_4_ * fVar58;
      auVar71 = vsubps_avx(auVar71,auVar94);
      auVar51 = vsubps_avx(auVar51,auVar128);
      auVar84 = vsubps_avx(auVar84,auVar54);
      auVar55._16_16_ = auVar48;
      auVar55._0_16_ = auVar60;
      auVar71 = vmaskmovps_avx(auVar55,auVar71);
      auVar51 = vmaskmovps_avx(auVar55,auVar51);
      auVar84 = vmaskmovps_avx(auVar55,auVar84);
      auVar98 = vsubps_avx(auVar71,auVar62);
      auVar48 = vshufps_avx(ZEXT416(param_5),ZEXT416(param_5),0);
      fVar45 = auVar48._0_4_;
      auVar105._0_4_ = fVar45 * auVar124._0_4_;
      fVar56 = auVar48._4_4_;
      auVar105._4_4_ = fVar56 * auVar124._4_4_;
      fVar57 = auVar48._8_4_;
      auVar105._8_4_ = fVar57 * auVar124._8_4_;
      fVar58 = auVar48._12_4_;
      auVar105._12_4_ = fVar58 * auVar124._12_4_;
      auVar105._16_4_ = fVar45 * auVar124._16_4_;
      auVar105._20_4_ = fVar56 * auVar124._20_4_;
      auVar105._24_4_ = fVar57 * auVar124._24_4_;
      auVar105._28_4_ = fVar58 * auVar124._28_4_;
      auVar98 = vsubps_avx(auVar98,auVar105);
      auVar114 = vsubps_avx(auVar51,local_280);
      auVar118._0_4_ = fVar45 * auVar116._0_4_;
      auVar118._4_4_ = fVar56 * auVar116._4_4_;
      auVar118._8_4_ = fVar57 * auVar116._8_4_;
      auVar118._12_4_ = fVar58 * auVar116._12_4_;
      auVar118._16_4_ = fVar45 * auVar116._16_4_;
      auVar118._20_4_ = fVar56 * auVar116._20_4_;
      auVar118._24_4_ = fVar57 * auVar116._24_4_;
      auVar118._28_4_ = fVar58 * auVar116._28_4_;
      auVar114 = vsubps_avx(auVar114,auVar118);
      auVar95._0_4_ = auVar139._0_4_ * fVar45;
      auVar95._4_4_ = auVar139._4_4_ * fVar56;
      auVar95._8_4_ = auVar139._8_4_ * fVar57;
      auVar95._12_4_ = auVar139._12_4_ * fVar58;
      auVar95._16_4_ = auVar139._16_4_ * fVar45;
      auVar95._20_4_ = auVar139._20_4_ * fVar56;
      auVar95._24_4_ = auVar139._24_4_ * fVar57;
      auVar95._28_4_ = auVar139._28_4_ * fVar58;
      auVar108 = vsubps_avx(auVar84,local_320);
      auVar108 = vsubps_avx(auVar108,auVar95);
      auVar48 = vshufps_avx(ZEXT416(param_7),ZEXT416(param_7),0);
      fVar45 = auVar48._0_4_;
      auVar69._0_4_ = fVar45 * auVar98._0_4_;
      fVar56 = auVar48._4_4_;
      auVar69._4_4_ = fVar56 * auVar98._4_4_;
      fVar57 = auVar48._8_4_;
      auVar69._8_4_ = fVar57 * auVar98._8_4_;
      fVar58 = auVar48._12_4_;
      auVar69._12_4_ = fVar58 * auVar98._12_4_;
      auVar69._16_4_ = fVar45 * auVar98._16_4_;
      auVar69._20_4_ = fVar56 * auVar98._20_4_;
      auVar69._24_4_ = fVar57 * auVar98._24_4_;
      auVar69._28_4_ = fVar58 * auVar98._28_4_;
      auVar119._0_4_ = fVar45 * auVar114._0_4_;
      auVar119._4_4_ = fVar56 * auVar114._4_4_;
      auVar119._8_4_ = fVar57 * auVar114._8_4_;
      auVar119._12_4_ = fVar58 * auVar114._12_4_;
      auVar119._16_4_ = fVar45 * auVar114._16_4_;
      auVar119._20_4_ = fVar56 * auVar114._20_4_;
      auVar119._24_4_ = fVar57 * auVar114._24_4_;
      auVar119._28_4_ = fVar58 * auVar114._28_4_;
      auVar96._0_4_ = fVar45 * auVar108._0_4_;
      auVar96._4_4_ = fVar56 * auVar108._4_4_;
      auVar96._8_4_ = fVar57 * auVar108._8_4_;
      auVar96._12_4_ = fVar58 * auVar108._12_4_;
      auVar96._16_4_ = fVar45 * auVar108._16_4_;
      auVar96._20_4_ = fVar56 * auVar108._20_4_;
      auVar96._24_4_ = fVar57 * auVar108._24_4_;
      auVar96._28_4_ = fVar58 * auVar108._28_4_;
      auVar71 = vsubps_avx(auVar71,auVar69);
      auVar51 = vsubps_avx(auVar51,auVar119);
      auVar84 = vsubps_avx(auVar84,auVar96);
      auVar71 = vmaskmovps_avx(auVar55,auVar71);
      auVar51 = vmaskmovps_avx(auVar55,auVar51);
      auVar84 = vmaskmovps_avx(auVar55,auVar84);
      if (local_444 == -1) {
        auVar98 = vunpcklps_avx(auVar71,auVar51);
        auVar108 = vunpcklps_avx(auVar84,auVar76);
        auVar114 = vunpcklpd_avx(auVar98,auVar108);
        auVar98 = vunpckhpd_avx(auVar98,auVar108);
        auVar71 = vunpckhps_avx(auVar71,auVar51);
        auVar51 = vunpckhps_avx(auVar84,auVar76);
        auVar84 = vunpcklpd_avx(auVar71,auVar51);
        auVar71 = vunpckhpd_avx(auVar71,auVar51);
        pauVar36[1] = auVar98._0_16_;
        *pauVar36 = auVar114._0_16_;
        pauVar36[3] = auVar71._0_16_;
        pauVar36[2] = auVar84._0_16_;
        pauVar36[5] = auVar98._16_16_;
        pauVar36[4] = auVar114._16_16_;
        pauVar36[7] = auVar71._16_16_;
        pauVar36[6] = auVar84._16_16_;
      }
      else {
        auVar107 = auVar76._0_16_;
        auVar70 = auVar76._16_16_;
        auVar59 = auVar71._0_16_;
        auVar97 = auVar71._16_16_;
        auVar46 = auVar51._0_16_;
        auVar47 = auVar51._16_16_;
        auVar48 = auVar84._0_16_;
        auVar60 = auVar84._16_16_;
        if ((uVar32 & 1) != 0) {
          *(int *)*pauVar36 = auVar71._0_4_;
        }
        if ((uVar32 & 2) != 0) {
          uVar40 = vextractps_avx(auVar59,1);
          *(undefined4 *)pauVar36[1] = uVar40;
        }
        if ((uVar32 & 4) != 0) {
          uVar40 = vextractps_avx(auVar59,2);
          *(undefined4 *)pauVar36[2] = uVar40;
        }
        if ((uVar32 & 8) != 0) {
          uVar40 = vextractps_avx(auVar59,3);
          *(undefined4 *)pauVar36[3] = uVar40;
        }
        if ((uVar32 & 0x10) != 0) {
          *(int *)pauVar36[4] = auVar71._16_4_;
        }
        if ((uVar32 & 0x20) != 0) {
          uVar40 = vextractps_avx(auVar97,1);
          *(undefined4 *)pauVar36[5] = uVar40;
        }
        if ((uVar32 & 0x40) != 0) {
          uVar40 = vextractps_avx(auVar97,2);
          *(undefined4 *)pauVar36[6] = uVar40;
        }
        if (local_444 < '\0') {
          uVar40 = vextractps_avx(auVar97,3);
          *(undefined4 *)pauVar36[7] = uVar40;
        }
        if ((uVar32 & 1) != 0) {
          *(int *)(*pauVar36 + 4) = auVar51._0_4_;
        }
        if ((uVar32 & 2) != 0) {
          uVar40 = vextractps_avx(auVar46,1);
          *(undefined4 *)(pauVar36[1] + 4) = uVar40;
        }
        if ((uVar32 & 4) != 0) {
          uVar40 = vextractps_avx(auVar46,2);
          *(undefined4 *)(pauVar36[2] + 4) = uVar40;
        }
        if ((uVar32 & 8) != 0) {
          uVar40 = vextractps_avx(auVar46,3);
          *(undefined4 *)(pauVar36[3] + 4) = uVar40;
        }
        if ((uVar32 & 0x10) != 0) {
          *(int *)(pauVar36[4] + 4) = auVar51._16_4_;
        }
        if ((uVar32 & 0x20) != 0) {
          uVar40 = vextractps_avx(auVar47,1);
          *(undefined4 *)(pauVar36[5] + 4) = uVar40;
        }
        if ((uVar32 & 0x40) != 0) {
          uVar40 = vextractps_avx(auVar47,2);
          *(undefined4 *)(pauVar36[6] + 4) = uVar40;
        }
        if (local_444 < '\0') {
          uVar40 = vextractps_avx(auVar47,3);
          *(undefined4 *)(pauVar36[7] + 4) = uVar40;
        }
        if ((uVar32 & 1) != 0) {
          *(int *)(*pauVar36 + 8) = auVar84._0_4_;
        }
        if ((uVar32 & 2) != 0) {
          uVar40 = vextractps_avx(auVar48,1);
          *(undefined4 *)(pauVar36[1] + 8) = uVar40;
        }
        if ((uVar32 & 4) != 0) {
          uVar40 = vextractps_avx(auVar48,2);
          *(undefined4 *)(pauVar36[2] + 8) = uVar40;
        }
        if ((uVar32 & 8) != 0) {
          uVar40 = vextractps_avx(auVar48,3);
          *(undefined4 *)(pauVar36[3] + 8) = uVar40;
        }
        if ((uVar32 & 0x10) != 0) {
          *(int *)(pauVar36[4] + 8) = auVar84._16_4_;
        }
        if ((uVar32 & 0x20) != 0) {
          uVar40 = vextractps_avx(auVar60,1);
          *(undefined4 *)(pauVar36[5] + 8) = uVar40;
        }
        if ((uVar32 & 0x40) != 0) {
          uVar40 = vextractps_avx(auVar60,2);
          *(undefined4 *)(pauVar36[6] + 8) = uVar40;
        }
        if (local_444 < '\0') {
          uVar40 = vextractps_avx(auVar60,3);
          *(undefined4 *)(pauVar36[7] + 8) = uVar40;
        }
        if ((uVar32 & 1) != 0) {
          *(int *)(*pauVar36 + 0xc) = auVar76._0_4_;
        }
        if ((uVar32 & 2) != 0) {
          uVar40 = vextractps_avx(auVar107,1);
          *(undefined4 *)(pauVar36[1] + 0xc) = uVar40;
        }
        if ((uVar32 & 4) != 0) {
          uVar40 = vextractps_avx(auVar107,2);
          *(undefined4 *)(pauVar36[2] + 0xc) = uVar40;
        }
        if ((uVar32 & 8) != 0) {
          uVar40 = vextractps_avx(auVar107,3);
          *(undefined4 *)(pauVar36[3] + 0xc) = uVar40;
        }
        if ((uVar32 & 0x10) != 0) {
          *(int *)(pauVar36[4] + 0xc) = auVar76._16_4_;
        }
        if ((uVar32 & 0x20) != 0) {
          uVar40 = vextractps_avx(auVar70,1);
          *(undefined4 *)(pauVar36[5] + 0xc) = uVar40;
        }
        if ((uVar32 & 0x40) != 0) {
          uVar40 = vextractps_avx(auVar70,2);
          *(undefined4 *)(pauVar36[6] + 0xc) = uVar40;
        }
        if (local_444 < '\0') {
          uVar40 = vextractps_avx(auVar70,3);
          *(undefined4 *)(pauVar36[7] + 0xc) = uVar40;
        }
      }
    }
  }
  return;
}

// ApplyMultiResConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cuni_avx @ 1405a6b40

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyMultiResConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cuni_avx
               (undefined1 (*param_1) [32],longlong param_2,longlong param_3,longlong param_4,
               uint param_5,byte param_6,longlong param_7,longlong param_8,byte param_9,
               longlong param_10,longlong param_11,uint param_12)

{
  undefined1 (*pauVar1) [32];
  undefined1 (*pauVar2) [32];
  undefined1 (*pauVar3) [32];
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  byte bVar16;
  uint uVar17;
  byte *pbVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined4 uVar30;
  longlong lVar29;
  undefined4 uVar31;
  undefined1 (*pauVar32) [32];
  ulonglong uVar33;
  undefined1 (*pauVar34) [16];
  undefined4 uVar36;
  longlong lVar35;
  undefined4 uVar37;
  uint uVar38;
  ulonglong uVar39;
  longlong lVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  longlong lVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  undefined1 auVar48 [16];
  uint uVar58;
  uint uVar59;
  undefined1 auVar49 [32];
  undefined1 auVar47 [16];
  uint uVar60;
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  uint uVar72;
  uint uVar73;
  uint uVar74;
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  uint uVar75;
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [16];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar90 [16];
  float fVar89;
  float fVar98;
  float fVar99;
  float fVar101;
  float fVar102;
  float fVar103;
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  float fVar100;
  float fVar104;
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar105 [16];
  undefined1 auVar106 [32];
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
  undefined1 auVar118 [16];
  undefined1 auVar119 [32];
  undefined1 auVar120 [32];
  undefined1 auVar121 [32];
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
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
  undefined1 auVar138 [16];
  uint uVar140;
  uint uVar141;
  uint uVar142;
  uint uVar143;
  undefined1 auVar139 [32];
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
  undefined1 auVar157 [32];
  undefined1 auVar158 [32];
  undefined1 auVar159 [32];
  undefined1 auVar160 [32];
  undefined1 auVar161 [32];
  undefined1 auVar162 [32];
  undefined1 local_3e0 [32];
  undefined1 local_360 [32];
  undefined1 local_340 [32];
  undefined1 local_280 [8];
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  
  uVar38 = param_12 + 7;
  if (-1 < (int)param_12) {
    uVar38 = param_12;
  }
  if ((int)(uVar38 & 0xfffffff8) < 1) {
    uVar44 = 0;
    if ((int)param_12 < 1) {
      return;
    }
  }
  else {
    auVar90 = vshufps_avx(ZEXT416(param_5),ZEXT416(param_5),0);
    lVar43 = 0;
    uVar44 = 0;
    pauVar32 = param_1;
    do {
      pauVar1 = pauVar32 + 1;
      pauVar2 = pauVar32 + 2;
      pauVar3 = pauVar32 + 3;
      auVar49._16_16_ = *(undefined1 (*) [16])*pauVar2;
      auVar49._0_16_ = *(undefined1 (*) [16])*pauVar32;
      auVar64._16_16_ = *(undefined1 (*) [16])(pauVar32[2] + 0x10);
      auVar64._0_16_ = *(undefined1 (*) [16])(*pauVar32 + 0x10);
      auVar76._16_16_ = *(undefined1 (*) [16])*pauVar3;
      auVar76._0_16_ = *(undefined1 (*) [16])*pauVar1;
      auVar82._16_16_ = *(undefined1 (*) [16])(pauVar32[3] + 0x10);
      auVar82._0_16_ = *(undefined1 (*) [16])(pauVar32[1] + 0x10);
      auVar55 = vunpcklps_avx(auVar49,auVar64);
      auVar49 = vunpckhps_avx(auVar49,auVar64);
      auVar122 = vunpcklps_avx(auVar76,auVar82);
      auVar64 = vunpckhps_avx(auVar76,auVar82);
      auVar76 = vunpcklpd_avx(auVar55,auVar122);
      auVar55 = vunpckhpd_avx(auVar55,auVar122);
      auVar122 = vunpcklpd_avx(auVar49,auVar64);
      auVar64 = vunpckhpd_avx(auVar49,auVar64);
      auVar49 = vcmpps_avx(ZEXT832(0) << 0x20,auVar64,1);
      uVar17 = vmovmskps_avx(auVar49);
      if (uVar17 != 0) {
        auVar81 = ZEXT816(0) << 0x20;
        bVar16 = (byte)uVar17;
        auVar127 = ZEXT816(0) << 0x20;
        if ((param_6 & 1) != 0) {
          if ((~bVar16 & 0x81) == 0) {
            auVar127._8_8_ = 0;
            auVar127._0_8_ = *(ulonglong *)(param_7 + uVar44);
          }
          else {
            pbVar18 = (byte *)(param_7 + uVar44);
            auVar47 = auVar127;
            auVar127 = SUB6416(ZEXT864(0),0) << 0x20;
            if ((uVar17 & 1) != 0) {
              auVar47 = ZEXT116(*pbVar18);
              auVar127 = ZEXT116(*pbVar18);
            }
            if ((uVar17 & 2) != 0) {
              auVar127 = vpinsrb_avx(auVar47,(uint)pbVar18[1],1);
              auVar127 = vpblendw_avx(auVar127,auVar47,0xe);
            }
            if ((uVar17 & 4) != 0) {
              auVar47 = vpmovzxwd_avx(auVar127);
              auVar47 = vpinsrb_avx(auVar47,(uint)pbVar18[2],2);
              auVar47 = vpinsrb_avx(auVar47,(uint)auVar127[3],3);
              auVar127 = vpblendw_avx(auVar47,auVar127,0xc);
            }
            if ((uVar17 & 8) != 0) {
              auVar47 = vpmovzxwd_avx(auVar127);
              auVar47 = vpinsrb_avx(auVar47,(uint)auVar127[2],2);
              auVar47 = vpinsrb_avx(auVar47,(uint)pbVar18[3],3);
              auVar127 = vpblendw_avx(auVar47,auVar127,0xc);
            }
            if ((uVar17 & 0x10) != 0) {
              auVar47 = vpshufb_avx(auVar127,___xmm_80800706808005048080030203020100);
              auVar47 = vpinsrb_avx(auVar47,(uint)pbVar18[4],4);
              auVar47 = vpinsrb_avx(auVar47,(uint)auVar127[5],5);
              auVar127 = vpblendw_avx(auVar47,auVar127,8);
            }
            if ((uVar17 & 0x20) != 0) {
              auVar47 = vpshufb_avx(auVar127,___xmm_80800706808005048080030403020100);
              auVar47 = vpinsrb_avx(auVar47,(uint)pbVar18[5],5);
              auVar127 = vpblendw_avx(auVar47,auVar127,8);
            }
            if ((uVar17 & 0x40) != 0) {
              auVar47 = vpshufb_avx(auVar127,___xmm_80800706808005048080050403020100);
              auVar47 = vpinsrb_avx(auVar47,(uint)pbVar18[6],6);
              auVar127 = vpinsrb_avx(auVar47,(uint)auVar127[7],7);
            }
            if ((uVar17 & 0x80) != 0) {
              auVar127 = vpshufb_avx(auVar127,___xmm_80800706808005048006050403020100);
              auVar127 = vpinsrb_avx(auVar127,(uint)pbVar18[7],7);
            }
          }
        }
        if ((param_9 & 1) != 0) {
          if ((~bVar16 & 0x81) == 0) {
            auVar81._8_8_ = 0;
            auVar81._0_8_ = *(ulonglong *)(param_10 + uVar44);
          }
          else {
            pbVar18 = (byte *)(param_10 + uVar44);
            auVar47 = auVar81;
            auVar81 = SUB6416(ZEXT864(0),0) << 0x20;
            if ((uVar17 & 1) != 0) {
              auVar47 = ZEXT116(*pbVar18);
              auVar81 = ZEXT116(*pbVar18);
            }
            if ((uVar17 & 2) != 0) {
              auVar81 = vpinsrb_avx(auVar47,(uint)pbVar18[1],1);
              auVar81 = vpblendw_avx(auVar81,auVar47,0xe);
            }
            if ((uVar17 & 4) != 0) {
              auVar47 = vpmovzxwd_avx(auVar81);
              auVar47 = vpinsrb_avx(auVar47,(uint)pbVar18[2],2);
              auVar47 = vpinsrb_avx(auVar47,(uint)auVar81[3],3);
              auVar81 = vpblendw_avx(auVar47,auVar81,0xc);
            }
            if ((uVar17 & 8) != 0) {
              auVar47 = vpmovzxwd_avx(auVar81);
              auVar47 = vpinsrb_avx(auVar47,(uint)auVar81[2],2);
              auVar47 = vpinsrb_avx(auVar47,(uint)pbVar18[3],3);
              auVar81 = vpblendw_avx(auVar47,auVar81,0xc);
            }
            if ((uVar17 & 0x10) != 0) {
              auVar47 = vpshufb_avx(auVar81,___xmm_80800706808005048080030203020100);
              auVar47 = vpinsrb_avx(auVar47,(uint)pbVar18[4],4);
              auVar47 = vpinsrb_avx(auVar47,(uint)auVar81[5],5);
              auVar81 = vpblendw_avx(auVar47,auVar81,8);
            }
            if ((uVar17 & 0x20) != 0) {
              auVar47 = vpshufb_avx(auVar81,___xmm_80800706808005048080030403020100);
              auVar47 = vpinsrb_avx(auVar47,(uint)pbVar18[5],5);
              auVar81 = vpblendw_avx(auVar47,auVar81,8);
            }
            if ((uVar17 & 0x40) != 0) {
              auVar47 = vpshufb_avx(auVar81,___xmm_80800706808005048080050403020100);
              auVar47 = vpinsrb_avx(auVar47,(uint)pbVar18[6],6);
              auVar81 = vpinsrb_avx(auVar47,(uint)auVar81[7],7);
            }
            if ((uVar17 & 0x80) != 0) {
              auVar81 = vpshufb_avx(auVar81,___xmm_80800706808005048006050403020100);
              auVar81 = vpinsrb_avx(auVar81,(uint)pbVar18[7],7);
            }
          }
        }
        auVar47 = vshufps_avx(auVar127,auVar127,0x55);
        auVar47 = vpmovsxbd_avx(auVar47);
        auVar127 = vpmovsxbd_avx(auVar127);
        auVar61 = vpslld_avx(auVar127,2);
        auVar47 = vpslld_avx(auVar47,2);
        uVar72 = auVar49._0_4_;
        uVar73 = auVar49._4_4_;
        uVar74 = auVar49._8_4_;
        uVar75 = auVar49._12_4_;
        uVar140 = auVar49._16_4_;
        uVar141 = auVar49._20_4_;
        uVar142 = auVar49._24_4_;
        uVar143 = auVar49._28_4_;
        auVar127 = vinsertps_avx(ZEXT416(*(uint *)(param_8 + (int)(uVar140 & auVar47._0_4_))),
                                 ZEXT416(*(uint *)(param_8 + (int)(uVar141 & auVar47._4_4_))),0x10);
        auVar127 = vinsertps_avx(auVar127,ZEXT416(*(uint *)(param_8 + (int)(uVar142 & auVar47._8_4_)
                                                           )),0x20);
        auVar127 = vinsertps_avx(auVar127,ZEXT416(*(uint *)(param_8 +
                                                           (int)(uVar143 & auVar47._12_4_))),0x30);
        auVar47 = vinsertps_avx(ZEXT416(*(uint *)(param_8 + (int)(uVar72 & auVar61._0_4_))),
                                ZEXT416(*(uint *)(param_8 + (int)(uVar73 & auVar61._4_4_))),0x10);
        auVar47 = vinsertps_avx(auVar47,ZEXT416(*(uint *)(param_8 + (int)(uVar74 & auVar61._8_4_))),
                                0x20);
        auVar47 = vinsertps_avx(auVar47,ZEXT416(*(uint *)(param_8 + (int)(uVar75 & auVar61._12_4_)))
                                ,0x30);
        auVar61 = vshufps_avx(auVar81,auVar81,0x55);
        auVar61 = vpmovsxbd_avx(auVar61);
        auVar81 = vpmovsxbd_avx(auVar81);
        auVar62 = vpslld_avx(auVar81,2);
        auVar61 = vpslld_avx(auVar61,2);
        uVar58 = uVar73 & auVar62._4_4_;
        uVar59 = uVar74 & auVar62._8_4_;
        uVar60 = uVar75 & auVar62._12_4_;
        auVar81 = vinsertps_avx(ZEXT416(*(uint *)(param_11 + (int)(uVar140 & auVar61._0_4_))),
                                ZEXT416(*(uint *)(param_11 + (int)(uVar141 & auVar61._4_4_))),0x10);
        auVar81 = vinsertps_avx(auVar81,ZEXT416(*(uint *)(param_11 + (int)(uVar142 & auVar61._8_4_))
                                               ),0x20);
        auVar81 = vinsertps_avx(auVar81,ZEXT416(*(uint *)(param_11 + (int)(uVar143 & auVar61._12_4_)
                                                         )),0x30);
        auVar61 = vinsertps_avx(ZEXT416(*(uint *)(param_11 + (int)(uVar72 & auVar62._0_4_))),
                                ZEXT416(*(uint *)(param_11 + (int)uVar58)),0x10);
        auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)(param_11 + (int)uVar59)),0x20);
        auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)(param_11 + (int)uVar60)),0x30);
        if (bVar16 == 0xff) {
          auVar62 = *(undefined1 (*) [16])(param_2 + 0x10 + lVar43);
          auVar105 = *(undefined1 (*) [16])(param_2 + 0x30 + lVar43);
          auVar149._16_16_ = auVar62;
          auVar149._0_16_ = *(undefined1 (*) [16])(param_2 + lVar43);
          auVar77._16_16_ = auVar105;
          auVar77._0_16_ = *(undefined1 (*) [16])(param_2 + 0x20 + lVar43);
          auVar63 = *(undefined1 (*) [16])(param_2 + 0x50 + lVar43);
          auVar118 = *(undefined1 (*) [16])(param_2 + 0x40 + lVar43);
          auVar152._16_16_ = auVar63;
          auVar152._0_16_ = auVar118;
          auVar66._16_16_ = *(undefined1 (*) [16])(param_2 + lVar43);
          auVar66._0_16_ = auVar62;
          auVar82 = vblendps_avx(auVar149,auVar66,0x24);
          auVar82 = vpermilps_avx(auVar82,
                                  ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                                 );
          uVar37 = *(undefined4 *)(param_2 + 0x28 + lVar43);
          auVar156._20_4_ = uVar37;
          auVar156._16_4_ = uVar37;
          auVar156._24_4_ = uVar37;
          auVar156._28_4_ = uVar37;
          uVar37 = *(undefined4 *)(param_2 + 0x24 + lVar43);
          auVar156._4_4_ = uVar37;
          auVar156._0_4_ = uVar37;
          auVar156._8_4_ = uVar37;
          auVar156._12_4_ = uVar37;
          auVar82 = vblendps_avx(auVar82,auVar156,0x88);
          auVar157._16_16_ = auVar118;
          auVar157._0_16_ = auVar63;
          auVar151 = vblendps_avx(auVar157,auVar152,0x44);
          auVar151 = vpermilps_avx(auVar151,
                                   ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                                  );
          uVar37 = *(undefined4 *)(param_2 + 0x34 + lVar43);
          auVar83._20_4_ = uVar37;
          auVar83._16_4_ = uVar37;
          auVar83._24_4_ = uVar37;
          auVar83._28_4_ = uVar37;
          auVar105 = vshufps_avx(auVar105,auVar105,0xec);
          auVar83._0_16_ = auVar105;
          auVar151 = vblendps_avx(auVar151,auVar83,0x13);
          register0x00001310 = auVar151._0_16_;
          _local_280 = auVar82._0_16_;
          auVar135 = vperm2f128_avx(auVar82,auVar151,0x31);
          auVar82 = vblendps_avx(auVar77,auVar149,0x24);
          auVar82 = vshufps_avx(ZEXT1632(auVar62),auVar82,0x21);
          auVar82 = vshufps_avx(auVar82,auVar77,0xc2);
          auVar151 = vshufps_avx(auVar157,auVar152,0xc4);
          local_340 = vblendps_avx(auVar82,auVar151,0xe0);
          auVar62 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar43);
          auVar105 = *(undefined1 (*) [16])(param_3 + 0x30 + lVar43);
          auVar153._16_16_ = auVar62;
          auVar153._0_16_ = *(undefined1 (*) [16])(param_3 + lVar43);
          auVar158._16_16_ = auVar105;
          auVar158._0_16_ = *(undefined1 (*) [16])(param_3 + 0x20 + lVar43);
          auVar63 = *(undefined1 (*) [16])(param_3 + 0x50 + lVar43);
          auVar118 = *(undefined1 (*) [16])(param_3 + 0x40 + lVar43);
          auVar91._16_16_ = auVar63;
          auVar91._0_16_ = auVar118;
          auVar51._16_16_ = *(undefined1 (*) [16])(param_3 + lVar43);
          auVar51._0_16_ = auVar62;
          auVar82 = vblendps_avx(auVar153,auVar51,0x24);
          auVar82 = vpermilps_avx(auVar82,
                                  ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                                 );
          uVar37 = *(undefined4 *)(param_3 + 0x28 + lVar43);
          auVar106._20_4_ = uVar37;
          auVar106._16_4_ = uVar37;
          auVar106._24_4_ = uVar37;
          auVar106._28_4_ = uVar37;
          uVar37 = *(undefined4 *)(param_3 + 0x24 + lVar43);
          auVar106._4_4_ = uVar37;
          auVar106._0_4_ = uVar37;
          auVar106._8_4_ = uVar37;
          auVar106._12_4_ = uVar37;
          auVar82 = vblendps_avx(auVar82,auVar106,0x88);
          auVar107._16_16_ = auVar118;
          auVar107._0_16_ = auVar63;
          auVar151 = vblendps_avx(auVar107,auVar91,0x44);
          auVar151 = vpermilps_avx(auVar151,
                                   ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                                  );
          uVar37 = *(undefined4 *)(param_3 + 0x34 + lVar43);
          auVar119._20_4_ = uVar37;
          auVar119._16_4_ = uVar37;
          auVar119._24_4_ = uVar37;
          auVar119._28_4_ = uVar37;
          auVar105 = vshufps_avx(auVar105,auVar105,0xec);
          auVar119._0_16_ = auVar105;
          auVar151 = vblendps_avx(auVar151,auVar119,0x13);
          auVar65._16_16_ = auVar151._0_16_;
          auVar65._0_16_ = auVar82._0_16_;
          auVar148 = vperm2f128_avx(auVar82,auVar151,0x31);
          auVar82 = vblendps_avx(auVar158,auVar153,0x24);
          auVar82 = vshufps_avx(ZEXT1632(auVar62),auVar82,0x21);
          auVar82 = vshufps_avx(auVar82,auVar158,0xc2);
          auVar151 = vshufps_avx(auVar107,auVar91,0xc4);
          auVar151 = vblendps_avx(auVar82,auVar151,0xe0);
          auVar62 = *(undefined1 (*) [16])(param_4 + 0x10 + lVar43);
          auVar105 = *(undefined1 (*) [16])(param_4 + 0x30 + lVar43);
          auVar120._16_16_ = auVar62;
          auVar120._0_16_ = *(undefined1 (*) [16])(param_4 + lVar43);
          auVar92._16_16_ = auVar105;
          auVar92._0_16_ = *(undefined1 (*) [16])(param_4 + 0x20 + lVar43);
          auVar63 = *(undefined1 (*) [16])(param_4 + 0x50 + lVar43);
          auVar118 = *(undefined1 (*) [16])(param_4 + 0x40 + lVar43);
          auVar128._16_16_ = auVar63;
          auVar128._0_16_ = auVar118;
          auVar52._16_16_ = *(undefined1 (*) [16])(param_4 + lVar43);
          auVar52._0_16_ = auVar62;
          auVar82 = vblendps_avx(auVar120,auVar52,0x24);
          auVar82 = vpermilps_avx(auVar82,
                                  ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                                 );
          uVar37 = *(undefined4 *)(param_4 + 0x28 + lVar43);
          auVar78._20_4_ = uVar37;
          auVar78._16_4_ = uVar37;
          auVar78._24_4_ = uVar37;
          auVar78._28_4_ = uVar37;
          uVar37 = *(undefined4 *)(param_4 + 0x24 + lVar43);
          auVar78._4_4_ = uVar37;
          auVar78._0_4_ = uVar37;
          auVar78._8_4_ = uVar37;
          auVar78._12_4_ = uVar37;
          auVar82 = vblendps_avx(auVar82,auVar78,0x88);
          auVar79._16_16_ = auVar118;
          auVar79._0_16_ = auVar63;
          auVar50 = vblendps_avx(auVar79,auVar128,0x44);
          auVar50 = vpermilps_avx(auVar50,
                                  ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                                 );
          uVar37 = *(undefined4 *)(param_4 + 0x34 + lVar43);
          auVar108._20_4_ = uVar37;
          auVar108._16_4_ = uVar37;
          auVar108._24_4_ = uVar37;
          auVar108._28_4_ = uVar37;
          auVar105 = vshufps_avx(auVar105,auVar105,0xec);
          auVar108._0_16_ = auVar105;
          auVar50 = vblendps_avx(auVar50,auVar108,0x13);
          auVar155._16_16_ = auVar50._0_16_;
          auVar155._0_16_ = auVar82._0_16_;
          auVar162 = vperm2f128_avx(auVar82,auVar50,0x31);
          auVar82 = vblendps_avx(auVar92,auVar120,0x24);
          auVar82 = vshufps_avx(ZEXT1632(auVar62),auVar82,0x21);
          auVar82 = vshufps_avx(auVar82,auVar92,0xc2);
          auVar50 = vshufps_avx(auVar79,auVar128,0xc4);
          auVar50 = vblendps_avx(auVar82,auVar50,0xe0);
        }
        else {
          auVar62._0_4_ =
               uVar72 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000;
          auVar62._4_4_ = uVar73 & _UNK_150b50b04;
          auVar62._8_4_ = uVar74 & _UNK_150b50b08;
          auVar62._12_4_ = uVar75 & _UNK_150b50b0c;
          uVar37 = vextractps_avx(auVar62,1);
          lVar29 = CONCAT44((int)uVar58 >> 0x1f,uVar37);
          uVar37 = vextractps_avx(auVar62,2);
          lVar35 = CONCAT44((int)uVar59 >> 0x1f,uVar37);
          uVar37 = vextractps_avx(auVar62,3);
          lVar40 = CONCAT44((int)uVar60 >> 0x1f,uVar37);
          uVar46 = (ulonglong)(uVar141 & _UNK_150b50b14);
          uVar41 = (ulonglong)(uVar142 & _UNK_150b50b18);
          uVar42 = (ulonglong)(uVar143 & _UNK_150b50b1c);
          lVar4 = param_2 + lVar43;
          auVar62 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + lVar43)),
                                  ZEXT416(*(uint *)(lVar29 + lVar4)),0x10);
          auVar62 = vinsertps_avx(auVar62,ZEXT416(*(uint *)(lVar35 + lVar4)),0x20);
          auVar62 = vinsertps_avx(auVar62,ZEXT416(*(uint *)(lVar40 + lVar4)),0x30);
          uVar19 = (ulonglong)(uVar140 & _UNK_150b50b10);
          auVar105 = vinsertps_avx(ZEXT416(*(uint *)(uVar19 + lVar4)),
                                   ZEXT416(*(uint *)(uVar46 + lVar4)),0x10);
          auVar105 = vinsertps_avx(auVar105,ZEXT416(*(uint *)(uVar41 + lVar4)),0x20);
          auVar105 = vinsertps_avx(auVar105,ZEXT416(*(uint *)(uVar42 + lVar4)),0x30);
          uVar20 = (ulonglong)(uVar141 & _UNK_150b50b34);
          uVar33 = (ulonglong)(uVar142 & _UNK_150b50b38);
          uVar39 = (ulonglong)(uVar143 & _UNK_150b50b3c);
          uVar45 = (ulonglong)(uVar140 & _UNK_150b50b30);
          auVar63 = vinsertps_avx(ZEXT416(*(uint *)(uVar45 + lVar4)),
                                  ZEXT416(*(uint *)(uVar20 + lVar4)),0x10);
          auVar63 = vinsertps_avx(auVar63,ZEXT416(*(uint *)(uVar33 + lVar4)),0x20);
          auVar63 = vinsertps_avx(auVar63,ZEXT416(*(uint *)(uVar39 + lVar4)),0x30);
          uVar14 = (ulonglong)
                   (uVar72 & ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                   );
          uVar12 = (ulonglong)(uVar73 & _UNK_150b50b24);
          auVar118 = vinsertps_avx(ZEXT416(*(uint *)(uVar14 + lVar4)),
                                   ZEXT416(*(uint *)(uVar12 + lVar4)),0x10);
          uVar21 = (ulonglong)(uVar74 & _UNK_150b50b28);
          auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(uVar21 + lVar4)),0x20);
          uVar22 = (ulonglong)(uVar75 & _UNK_150b50b2c);
          auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(uVar22 + lVar4)),0x30);
          uVar23 = (ulonglong)(uVar140 & _UNK_150b50b50);
          uVar24 = (ulonglong)(uVar141 & _UNK_150b50b54);
          auVar138 = vinsertps_avx(ZEXT416(*(uint *)(uVar23 + lVar4)),
                                   ZEXT416(*(uint *)(uVar24 + lVar4)),0x10);
          uVar25 = (ulonglong)(uVar142 & _UNK_150b50b58);
          auVar138 = vinsertps_avx(auVar138,ZEXT416(*(uint *)(uVar25 + lVar4)),0x20);
          uVar26 = (ulonglong)(uVar143 & _UNK_150b50b5c);
          auVar138 = vinsertps_avx(auVar138,ZEXT416(*(uint *)(uVar26 + lVar4)),0x30);
          uVar15 = (ulonglong)
                   (uVar72 & ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008
                   );
          uVar13 = (ulonglong)(uVar73 & _UNK_150b50b44);
          auVar48 = vinsertps_avx(ZEXT416(*(uint *)(uVar15 + lVar4)),
                                  ZEXT416(*(uint *)(uVar13 + lVar4)),0x10);
          uVar27 = (ulonglong)(uVar74 & _UNK_150b50b48);
          auVar48 = vinsertps_avx(auVar48,ZEXT416(*(uint *)(uVar27 + lVar4)),0x20);
          uVar28 = (ulonglong)(uVar75 & _UNK_150b50b4c);
          auVar48 = vinsertps_avx(auVar48,ZEXT416(*(uint *)(uVar28 + lVar4)),0x30);
          register0x00001250 = auVar105;
          _local_280 = auVar62;
          auVar135._16_16_ = auVar63;
          auVar135._0_16_ = auVar118;
          local_340._16_16_ = auVar138;
          local_340._0_16_ = auVar48;
          lVar4 = param_3 + lVar43;
          auVar62 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + lVar43)),
                                  ZEXT416(*(uint *)(lVar29 + lVar4)),0x10);
          auVar62 = vinsertps_avx(auVar62,ZEXT416(*(uint *)(lVar35 + lVar4)),0x20);
          auVar62 = vinsertps_avx(auVar62,ZEXT416(*(uint *)(lVar40 + lVar4)),0x30);
          auVar105 = vinsertps_avx(ZEXT416(*(uint *)(uVar19 + lVar4)),
                                   ZEXT416(*(uint *)(uVar46 + lVar4)),0x10);
          auVar105 = vinsertps_avx(auVar105,ZEXT416(*(uint *)(uVar41 + lVar4)),0x20);
          auVar105 = vinsertps_avx(auVar105,ZEXT416(*(uint *)(uVar42 + lVar4)),0x30);
          auVar63 = vinsertps_avx(ZEXT416(*(uint *)(uVar45 + lVar4)),
                                  ZEXT416(*(uint *)(uVar20 + lVar4)),0x10);
          auVar63 = vinsertps_avx(auVar63,ZEXT416(*(uint *)(uVar33 + lVar4)),0x20);
          auVar63 = vinsertps_avx(auVar63,ZEXT416(*(uint *)(uVar39 + lVar4)),0x30);
          auVar118 = vinsertps_avx(ZEXT416(*(uint *)(uVar14 + lVar4)),
                                   ZEXT416(*(uint *)(uVar12 + lVar4)),0x10);
          auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(uVar21 + lVar4)),0x20);
          auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(uVar22 + lVar4)),0x30);
          auVar138 = vinsertps_avx(ZEXT416(*(uint *)(uVar23 + lVar4)),
                                   ZEXT416(*(uint *)(uVar24 + lVar4)),0x10);
          auVar138 = vinsertps_avx(auVar138,ZEXT416(*(uint *)(uVar25 + lVar4)),0x20);
          auVar138 = vinsertps_avx(auVar138,ZEXT416(*(uint *)(uVar26 + lVar4)),0x30);
          auVar48 = vinsertps_avx(ZEXT416(*(uint *)(uVar15 + lVar4)),
                                  ZEXT416(*(uint *)(uVar13 + lVar4)),0x10);
          auVar48 = vinsertps_avx(auVar48,ZEXT416(*(uint *)(uVar27 + lVar4)),0x20);
          auVar48 = vinsertps_avx(auVar48,ZEXT416(*(uint *)(uVar28 + lVar4)),0x30);
          lVar4 = param_4 + lVar43;
          auVar5 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + lVar43)),
                                 ZEXT416(*(uint *)(lVar29 + lVar4)),0x10);
          auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(lVar35 + lVar4)),0x20);
          auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(lVar40 + lVar4)),0x30);
          auVar6 = vinsertps_avx(ZEXT416(*(uint *)(uVar19 + lVar4)),
                                 ZEXT416(*(uint *)(uVar46 + lVar4)),0x10);
          auVar6 = vinsertps_avx(auVar6,ZEXT416(*(uint *)(uVar41 + lVar4)),0x20);
          auVar6 = vinsertps_avx(auVar6,ZEXT416(*(uint *)(uVar42 + lVar4)),0x30);
          auVar7 = vinsertps_avx(ZEXT416(*(uint *)(uVar45 + lVar4)),
                                 ZEXT416(*(uint *)(uVar20 + lVar4)),0x10);
          auVar7 = vinsertps_avx(auVar7,ZEXT416(*(uint *)(uVar33 + lVar4)),0x20);
          auVar7 = vinsertps_avx(auVar7,ZEXT416(*(uint *)(uVar39 + lVar4)),0x30);
          auVar8 = vinsertps_avx(ZEXT416(*(uint *)(uVar14 + lVar4)),
                                 ZEXT416(*(uint *)(uVar12 + lVar4)),0x10);
          auVar8 = vinsertps_avx(auVar8,ZEXT416(*(uint *)(uVar21 + lVar4)),0x20);
          auVar8 = vinsertps_avx(auVar8,ZEXT416(*(uint *)(uVar22 + lVar4)),0x30);
          auVar9 = vinsertps_avx(ZEXT416(*(uint *)(uVar23 + lVar4)),
                                 ZEXT416(*(uint *)(uVar24 + lVar4)),0x10);
          auVar9 = vinsertps_avx(auVar9,ZEXT416(*(uint *)(uVar25 + lVar4)),0x20);
          auVar9 = vinsertps_avx(auVar9,ZEXT416(*(uint *)(uVar26 + lVar4)),0x30);
          auVar10 = vinsertps_avx(ZEXT416(*(uint *)(uVar15 + lVar4)),
                                  ZEXT416(*(uint *)(uVar13 + lVar4)),0x10);
          auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(uVar27 + lVar4)),0x20);
          auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(uVar28 + lVar4)),0x30);
          auVar65._16_16_ = auVar105;
          auVar65._0_16_ = auVar62;
          auVar148._16_16_ = auVar63;
          auVar148._0_16_ = auVar118;
          auVar151._16_16_ = auVar138;
          auVar151._0_16_ = auVar48;
          auVar155._16_16_ = auVar6;
          auVar155._0_16_ = auVar5;
          auVar162._16_16_ = auVar7;
          auVar162._0_16_ = auVar8;
          auVar50._16_16_ = auVar9;
          auVar50._0_16_ = auVar10;
        }
        auVar82 = vsubps_avx(auVar76,auVar65);
        auVar148 = vsubps_avx(auVar55,auVar148);
        auVar151 = vsubps_avx(auVar122,auVar151);
        fVar89 = auVar47._0_4_;
        auVar67._0_4_ = fVar89 * auVar82._0_4_;
        fVar98 = auVar47._4_4_;
        auVar67._4_4_ = fVar98 * auVar82._4_4_;
        fVar99 = auVar47._8_4_;
        auVar67._8_4_ = fVar99 * auVar82._8_4_;
        fVar100 = auVar47._12_4_;
        auVar67._12_4_ = fVar100 * auVar82._12_4_;
        fVar101 = auVar127._0_4_;
        auVar67._16_4_ = fVar101 * auVar82._16_4_;
        fVar102 = auVar127._4_4_;
        auVar67._20_4_ = fVar102 * auVar82._20_4_;
        fVar103 = auVar127._8_4_;
        auVar67._24_4_ = fVar103 * auVar82._24_4_;
        fVar104 = auVar127._12_4_;
        auVar67._28_4_ = fVar104 * auVar82._28_4_;
        auVar109._0_4_ = fVar89 * auVar148._0_4_;
        auVar109._4_4_ = fVar98 * auVar148._4_4_;
        auVar109._8_4_ = fVar99 * auVar148._8_4_;
        auVar109._12_4_ = fVar100 * auVar148._12_4_;
        auVar109._16_4_ = fVar101 * auVar148._16_4_;
        auVar109._20_4_ = fVar102 * auVar148._20_4_;
        auVar109._24_4_ = fVar103 * auVar148._24_4_;
        auVar109._28_4_ = fVar104 * auVar148._28_4_;
        auVar121._0_4_ = fVar89 * auVar151._0_4_;
        auVar121._4_4_ = fVar98 * auVar151._4_4_;
        auVar121._8_4_ = fVar99 * auVar151._8_4_;
        auVar121._12_4_ = fVar100 * auVar151._12_4_;
        auVar121._16_4_ = fVar101 * auVar151._16_4_;
        auVar121._20_4_ = fVar102 * auVar151._20_4_;
        auVar121._24_4_ = fVar103 * auVar151._24_4_;
        auVar121._28_4_ = fVar104 * auVar151._28_4_;
        auVar76 = vsubps_avx(auVar76,auVar67);
        auVar82 = vsubps_avx(auVar55,auVar109);
        auVar122 = vsubps_avx(auVar122,auVar121);
        auVar55 = vmaskmovps_avx(auVar49,auVar76);
        auVar76 = vmaskmovps_avx(auVar49,auVar82);
        auVar122 = vmaskmovps_avx(auVar49,auVar122);
        auVar82 = vsubps_avx(auVar55,_local_280);
        auVar151 = vsubps_avx(auVar76,auVar135);
        auVar135 = vsubps_avx(auVar122,local_340);
        local_120 = auVar90._0_4_;
        fStack_11c = auVar90._4_4_;
        fStack_118 = auVar90._8_4_;
        fStack_114 = auVar90._12_4_;
        auVar129._0_4_ = local_120 * auVar155._0_4_;
        auVar129._4_4_ = fStack_11c * auVar155._4_4_;
        auVar129._8_4_ = fStack_118 * auVar155._8_4_;
        auVar129._12_4_ = fStack_114 * auVar155._12_4_;
        auVar129._16_4_ = local_120 * auVar155._16_4_;
        auVar129._20_4_ = fStack_11c * auVar155._20_4_;
        auVar129._24_4_ = fStack_118 * auVar155._24_4_;
        auVar129._28_4_ = fStack_114 * auVar155._28_4_;
        auVar82 = vsubps_avx(auVar82,auVar129);
        auVar130._0_4_ = local_120 * auVar162._0_4_;
        auVar130._4_4_ = fStack_11c * auVar162._4_4_;
        auVar130._8_4_ = fStack_118 * auVar162._8_4_;
        auVar130._12_4_ = fStack_114 * auVar162._12_4_;
        auVar130._16_4_ = local_120 * auVar162._16_4_;
        auVar130._20_4_ = fStack_11c * auVar162._20_4_;
        auVar130._24_4_ = fStack_118 * auVar162._24_4_;
        auVar130._28_4_ = fStack_114 * auVar162._28_4_;
        auVar151 = vsubps_avx(auVar151,auVar130);
        auVar53._0_4_ = local_120 * auVar50._0_4_;
        auVar53._4_4_ = fStack_11c * auVar50._4_4_;
        auVar53._8_4_ = fStack_118 * auVar50._8_4_;
        auVar53._12_4_ = fStack_114 * auVar50._12_4_;
        auVar53._16_4_ = local_120 * auVar50._16_4_;
        auVar53._20_4_ = fStack_11c * auVar50._20_4_;
        auVar53._24_4_ = fStack_118 * auVar50._24_4_;
        auVar53._28_4_ = fStack_114 * auVar50._28_4_;
        auVar50 = vsubps_avx(auVar135,auVar53);
        fVar89 = auVar61._0_4_;
        auVar93._0_4_ = fVar89 * auVar82._0_4_;
        fVar98 = auVar61._4_4_;
        auVar93._4_4_ = fVar98 * auVar82._4_4_;
        fVar99 = auVar61._8_4_;
        auVar93._8_4_ = fVar99 * auVar82._8_4_;
        fVar100 = auVar61._12_4_;
        auVar93._12_4_ = fVar100 * auVar82._12_4_;
        fVar101 = auVar81._0_4_;
        auVar93._16_4_ = fVar101 * auVar82._16_4_;
        fVar102 = auVar81._4_4_;
        auVar93._20_4_ = fVar102 * auVar82._20_4_;
        fVar103 = auVar81._8_4_;
        auVar93._24_4_ = fVar103 * auVar82._24_4_;
        fVar104 = auVar81._12_4_;
        auVar93._28_4_ = fVar104 * auVar82._28_4_;
        auVar110._0_4_ = fVar89 * auVar151._0_4_;
        auVar110._4_4_ = fVar98 * auVar151._4_4_;
        auVar110._8_4_ = fVar99 * auVar151._8_4_;
        auVar110._12_4_ = fVar100 * auVar151._12_4_;
        auVar110._16_4_ = fVar101 * auVar151._16_4_;
        auVar110._20_4_ = fVar102 * auVar151._20_4_;
        auVar110._24_4_ = fVar103 * auVar151._24_4_;
        auVar110._28_4_ = fVar104 * auVar151._28_4_;
        auVar54._0_4_ = fVar89 * auVar50._0_4_;
        auVar54._4_4_ = fVar98 * auVar50._4_4_;
        auVar54._8_4_ = fVar99 * auVar50._8_4_;
        auVar54._12_4_ = fVar100 * auVar50._12_4_;
        auVar54._16_4_ = fVar101 * auVar50._16_4_;
        auVar54._20_4_ = fVar102 * auVar50._20_4_;
        auVar54._24_4_ = fVar103 * auVar50._24_4_;
        auVar54._28_4_ = fVar104 * auVar50._28_4_;
        auVar55 = vsubps_avx(auVar55,auVar93);
        auVar76 = vsubps_avx(auVar76,auVar110);
        auVar122 = vsubps_avx(auVar122,auVar54);
        auVar55 = vmaskmovps_avx(auVar49,auVar55);
        auVar76 = vmaskmovps_avx(auVar49,auVar76);
        auVar49 = vmaskmovps_avx(auVar49,auVar122);
        if (bVar16 == 0xff) {
          auVar122 = vunpcklps_avx(auVar55,auVar76);
          auVar151 = vunpcklps_avx(auVar49,auVar64);
          auVar82 = vunpcklpd_avx(auVar122,auVar151);
          auVar122 = vunpckhpd_avx(auVar122,auVar151);
          auVar55 = vunpckhps_avx(auVar55,auVar76);
          auVar49 = vunpckhps_avx(auVar49,auVar64);
          auVar64 = vunpcklpd_avx(auVar55,auVar49);
          auVar49 = vunpckhpd_avx(auVar55,auVar49);
          *(undefined1 (*) [16])(*pauVar32 + 0x10) = auVar122._0_16_;
          *(undefined1 (*) [16])*pauVar32 = auVar82._0_16_;
          *(undefined1 (*) [16])(pauVar32[1] + 0x10) = auVar49._0_16_;
          *(undefined1 (*) [16])pauVar32[1] = auVar64._0_16_;
          *(undefined1 (*) [16])(pauVar32[2] + 0x10) = auVar122._16_16_;
          *(undefined1 (*) [16])pauVar32[2] = auVar82._16_16_;
          *(undefined1 (*) [16])(pauVar32[3] + 0x10) = auVar49._16_16_;
          *(undefined1 (*) [16])pauVar32[3] = auVar64._16_16_;
        }
        else {
          if ((uVar17 & 1) != 0) {
            *(int *)*pauVar32 = auVar55._0_4_;
          }
          auVar127 = auVar55._0_16_;
          auVar81 = auVar55._16_16_;
          auVar62 = auVar76._0_16_;
          auVar105 = auVar76._16_16_;
          auVar47 = auVar49._0_16_;
          auVar61 = auVar49._16_16_;
          if ((uVar17 & 2) == 0) {
            if ((uVar17 & 4) != 0) goto LAB_1405a79f8;
LAB_1405a7892:
            if ((uVar17 & 8) != 0) goto LAB_1405a7a09;
LAB_1405a789c:
            if ((uVar17 & 0x10) != 0) goto LAB_1405a7a20;
LAB_1405a78ac:
            if ((uVar17 & 0x20) != 0) goto LAB_1405a7a2f;
LAB_1405a78b6:
            if ((uVar17 & 0x40) != 0) goto LAB_1405a7a40;
LAB_1405a78c0:
            if ((char)bVar16 < '\0') goto LAB_1405a7a52;
LAB_1405a78cb:
            if ((uVar17 & 1) != 0) goto LAB_1405a7a63;
LAB_1405a78d5:
            if ((uVar17 & 2) != 0) goto LAB_1405a7a72;
LAB_1405a78df:
            if ((uVar17 & 4) != 0) goto LAB_1405a7a83;
LAB_1405a78e9:
            if ((uVar17 & 8) != 0) goto LAB_1405a7a94;
LAB_1405a78f3:
            if ((uVar17 & 0x10) != 0) goto LAB_1405a7aab;
LAB_1405a7903:
            if ((uVar17 & 0x20) != 0) goto LAB_1405a7aba;
LAB_1405a790d:
            if ((uVar17 & 0x40) != 0) goto LAB_1405a7acb;
LAB_1405a7917:
            if ((char)bVar16 < '\0') goto LAB_1405a7add;
LAB_1405a7922:
            if ((uVar17 & 1) != 0) goto LAB_1405a7aee;
LAB_1405a792c:
            if ((uVar17 & 2) != 0) goto LAB_1405a7afd;
LAB_1405a7936:
            if ((uVar17 & 4) != 0) goto LAB_1405a7b0e;
LAB_1405a7940:
            if ((uVar17 & 8) != 0) goto LAB_1405a7b1f;
LAB_1405a794a:
            if ((uVar17 & 0x10) != 0) goto LAB_1405a7b36;
LAB_1405a795a:
            if ((uVar17 & 0x20) != 0) goto LAB_1405a7b45;
LAB_1405a7964:
            if ((uVar17 & 0x40) != 0) goto LAB_1405a7b56;
LAB_1405a796e:
            if ((char)bVar16 < '\0') goto LAB_1405a7b68;
LAB_1405a7979:
            if ((uVar17 & 1) != 0) goto LAB_1405a7b7f;
LAB_1405a7989:
            auVar49 = *pauVar32;
            if ((uVar17 & 2) != 0) goto LAB_1405a7b90;
LAB_1405a7993:
            if ((uVar17 & 4) != 0) goto LAB_1405a7bad;
LAB_1405a79a3:
            auVar49 = *pauVar1;
            if ((uVar17 & 8) != 0) goto LAB_1405a7bbe;
LAB_1405a79ad:
            if ((uVar17 & 0x10) != 0) goto LAB_1405a7bdb;
LAB_1405a79bd:
            auVar49 = *pauVar2;
            if ((uVar17 & 0x20) != 0) goto LAB_1405a7bec;
LAB_1405a79c7:
            if ((uVar17 & 0x40) != 0) goto LAB_1405a7c09;
LAB_1405a79d7:
            auVar49 = *pauVar3;
          }
          else {
            uVar37 = vextractps_avx(auVar127,1);
            *(undefined4 *)(*pauVar32 + 0x10) = uVar37;
            if ((uVar17 & 4) == 0) goto LAB_1405a7892;
LAB_1405a79f8:
            uVar37 = vextractps_avx(auVar127,2);
            *(undefined4 *)pauVar32[1] = uVar37;
            if ((uVar17 & 8) == 0) goto LAB_1405a789c;
LAB_1405a7a09:
            uVar37 = vextractps_avx(auVar127,3);
            *(undefined4 *)(pauVar32[1] + 0x10) = uVar37;
            if ((uVar17 & 0x10) == 0) goto LAB_1405a78ac;
LAB_1405a7a20:
            *(int *)pauVar32[2] = auVar55._16_4_;
            if ((uVar17 & 0x20) == 0) goto LAB_1405a78b6;
LAB_1405a7a2f:
            uVar37 = vextractps_avx(auVar81,1);
            *(undefined4 *)(pauVar32[2] + 0x10) = uVar37;
            if ((uVar17 & 0x40) == 0) goto LAB_1405a78c0;
LAB_1405a7a40:
            uVar37 = vextractps_avx(auVar81,2);
            *(undefined4 *)pauVar32[3] = uVar37;
            if (-1 < (char)bVar16) goto LAB_1405a78cb;
LAB_1405a7a52:
            uVar37 = vextractps_avx(auVar81,3);
            *(undefined4 *)(pauVar32[3] + 0x10) = uVar37;
            if ((uVar17 & 1) == 0) goto LAB_1405a78d5;
LAB_1405a7a63:
            *(int *)(*pauVar32 + 4) = auVar76._0_4_;
            if ((uVar17 & 2) == 0) goto LAB_1405a78df;
LAB_1405a7a72:
            uVar37 = vextractps_avx(auVar62,1);
            *(undefined4 *)(*pauVar32 + 0x14) = uVar37;
            if ((uVar17 & 4) == 0) goto LAB_1405a78e9;
LAB_1405a7a83:
            uVar37 = vextractps_avx(auVar62,2);
            *(undefined4 *)(pauVar32[1] + 4) = uVar37;
            if ((uVar17 & 8) == 0) goto LAB_1405a78f3;
LAB_1405a7a94:
            uVar37 = vextractps_avx(auVar62,3);
            *(undefined4 *)(pauVar32[1] + 0x14) = uVar37;
            if ((uVar17 & 0x10) == 0) goto LAB_1405a7903;
LAB_1405a7aab:
            *(int *)(pauVar32[2] + 4) = auVar76._16_4_;
            if ((uVar17 & 0x20) == 0) goto LAB_1405a790d;
LAB_1405a7aba:
            uVar37 = vextractps_avx(auVar105,1);
            *(undefined4 *)(pauVar32[2] + 0x14) = uVar37;
            if ((uVar17 & 0x40) == 0) goto LAB_1405a7917;
LAB_1405a7acb:
            uVar37 = vextractps_avx(auVar105,2);
            *(undefined4 *)(pauVar32[3] + 4) = uVar37;
            if (-1 < (char)bVar16) goto LAB_1405a7922;
LAB_1405a7add:
            uVar37 = vextractps_avx(auVar105,3);
            *(undefined4 *)(pauVar32[3] + 0x14) = uVar37;
            if ((uVar17 & 1) == 0) goto LAB_1405a792c;
LAB_1405a7aee:
            *(int *)(*pauVar32 + 8) = auVar49._0_4_;
            if ((uVar17 & 2) == 0) goto LAB_1405a7936;
LAB_1405a7afd:
            uVar37 = vextractps_avx(auVar47,1);
            *(undefined4 *)(*pauVar32 + 0x18) = uVar37;
            if ((uVar17 & 4) == 0) goto LAB_1405a7940;
LAB_1405a7b0e:
            uVar37 = vextractps_avx(auVar47,2);
            *(undefined4 *)(pauVar32[1] + 8) = uVar37;
            if ((uVar17 & 8) == 0) goto LAB_1405a794a;
LAB_1405a7b1f:
            uVar37 = vextractps_avx(auVar47,3);
            *(undefined4 *)(pauVar32[1] + 0x18) = uVar37;
            if ((uVar17 & 0x10) == 0) goto LAB_1405a795a;
LAB_1405a7b36:
            *(int *)(pauVar32[2] + 8) = auVar49._16_4_;
            if ((uVar17 & 0x20) == 0) goto LAB_1405a7964;
LAB_1405a7b45:
            uVar37 = vextractps_avx(auVar61,1);
            *(undefined4 *)(pauVar32[2] + 0x18) = uVar37;
            if ((uVar17 & 0x40) == 0) goto LAB_1405a796e;
LAB_1405a7b56:
            uVar37 = vextractps_avx(auVar61,2);
            *(undefined4 *)(pauVar32[3] + 8) = uVar37;
            if (-1 < (char)bVar16) goto LAB_1405a7979;
LAB_1405a7b68:
            uVar37 = vextractps_avx(auVar61,3);
            *(undefined4 *)(pauVar32[3] + 0x18) = uVar37;
            if ((uVar17 & 1) == 0) goto LAB_1405a7989;
LAB_1405a7b7f:
            auVar49 = *pauVar32;
            uVar37 = vextractps_avx(auVar49._0_16_,3);
            *(undefined4 *)(*pauVar32 + 0xc) = uVar37;
            if ((uVar17 & 2) == 0) goto LAB_1405a7993;
LAB_1405a7b90:
            uVar37 = vextractps_avx(auVar49._16_16_,3);
            *(undefined4 *)(*pauVar32 + 0x1c) = uVar37;
            if ((uVar17 & 4) == 0) goto LAB_1405a79a3;
LAB_1405a7bad:
            auVar49 = *pauVar1;
            uVar37 = vextractps_avx(auVar49._0_16_,3);
            *(undefined4 *)(pauVar32[1] + 0xc) = uVar37;
            if ((uVar17 & 8) == 0) goto LAB_1405a79ad;
LAB_1405a7bbe:
            uVar37 = vextractps_avx(auVar49._16_16_,3);
            *(undefined4 *)(pauVar32[1] + 0x1c) = uVar37;
            if ((uVar17 & 0x10) == 0) goto LAB_1405a79bd;
LAB_1405a7bdb:
            auVar49 = *pauVar2;
            uVar37 = vextractps_avx(auVar49._0_16_,3);
            *(undefined4 *)(pauVar32[2] + 0xc) = uVar37;
            if ((uVar17 & 0x20) == 0) goto LAB_1405a79c7;
LAB_1405a7bec:
            uVar37 = vextractps_avx(auVar49._16_16_,3);
            *(undefined4 *)(pauVar32[2] + 0x1c) = uVar37;
            if ((uVar17 & 0x40) == 0) goto LAB_1405a79d7;
LAB_1405a7c09:
            auVar49 = *pauVar3;
            uVar37 = vextractps_avx(auVar49._0_16_,3);
            *(undefined4 *)(pauVar32[3] + 0xc) = uVar37;
          }
          if ((char)bVar16 < '\0') {
            uVar37 = vextractps_avx(auVar49._16_16_,3);
            *(undefined4 *)(pauVar32[3] + 0x1c) = uVar37;
          }
        }
      }
      uVar44 = uVar44 + 8;
      lVar43 = lVar43 + 0x60;
      pauVar32 = pauVar32 + 4;
    } while ((int)uVar44 < (int)(uVar38 & 0xfffffff8));
    if ((int)param_12 <= (int)uVar44) {
      return;
    }
  }
  auVar90 = vpshufd_avx(ZEXT416((uint)uVar44),0);
  auVar55._16_16_ = auVar90;
  auVar55._0_16_ = auVar90;
  auVar81 = vpshufd_avx(ZEXT416(param_12),0);
  uVar44 = uVar44 & 0xffffffff;
  pauVar34 = (undefined1 (*) [16])(*param_1 + uVar44 * 0x10);
  auVar47 = SUB3216(auVar55 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar61 = SUB3216(auVar55 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar127 = vpcmpgtd_avx(auVar81,auVar61);
  auVar90 = vpcmpgtd_avx(auVar81,auVar47);
  auVar90 = vpand_avx(auVar90,auVar127);
  auVar127 = vpcmpeqd_avx(auVar127,auVar127);
  auVar127 = auVar127 & ~auVar90;
  if ((((SUB161(auVar127 >> 0x1f,0) & 1) == 0 && (SUB161(auVar127 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar127 >> 0x5f,0) & 1) == 0) && -1 < auVar127[0xf]) {
    auVar69._16_16_ = pauVar34[4];
    auVar69._0_16_ = *pauVar34;
    auVar112._16_16_ = pauVar34[5];
    auVar112._0_16_ = pauVar34[1];
    auVar123._16_16_ = pauVar34[6];
    auVar123._0_16_ = pauVar34[2];
    auVar132._16_16_ = pauVar34[7];
    auVar132._0_16_ = pauVar34[3];
    auVar64 = vunpcklps_avx(auVar69,auVar112);
    auVar49 = vunpckhps_avx(auVar69,auVar112);
    auVar76 = vunpcklps_avx(auVar123,auVar132);
    auVar55 = vunpckhps_avx(auVar123,auVar132);
    auVar111 = vunpcklpd_avx(auVar64,auVar76);
    auVar122 = vunpckhpd_avx(auVar64,auVar76);
    auVar131 = vunpcklpd_avx(auVar49,auVar55);
    auVar68 = vunpckhpd_avx(auVar49,auVar55);
  }
  else {
    auVar90 = vpcmpgtd_avx(auVar81,auVar61);
    auVar127 = vpcmpgtd_avx(auVar81,auVar47);
    uVar17 = auVar127._0_4_;
    auVar105._0_4_ =
         uVar17 & ___ymm_0000007000000060000000500000004000000030000000200000001000000000;
    uVar58 = auVar127._4_4_;
    auVar105._4_4_ = uVar58 & _UNK_150b50e44;
    uVar59 = auVar127._8_4_;
    auVar105._8_4_ = uVar59 & _UNK_150b50e48;
    uVar60 = auVar127._12_4_;
    auVar105._12_4_ = uVar60 & _UNK_150b50e4c;
    uVar72 = auVar90._0_4_;
    uVar73 = auVar90._4_4_;
    uVar74 = auVar90._8_4_;
    uVar75 = auVar90._12_4_;
    uVar30 = (undefined4)(uVar44 * 0x10 >> 0x20);
    uVar37 = vextractps_avx(auVar105,1);
    uVar36 = (undefined4)((ulonglong)pauVar34 >> 0x20);
    uVar31 = vextractps_avx(auVar105,2);
    uVar38 = vextractps_avx(auVar105,3);
    auVar90 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar34 + (uVar72 & _UNK_150b50e50))),
                            ZEXT416(*(uint *)(*pauVar34 + (uVar73 & _UNK_150b50e54))),0x10);
    auVar90 = vinsertps_avx(auVar90,ZEXT416(*(uint *)(*pauVar34 + (uVar74 & _UNK_150b50e58))),0x20);
    auVar90 = vinsertps_avx(auVar90,ZEXT416(*(uint *)(*pauVar34 + (uVar75 & _UNK_150b50e5c))),0x30);
    auVar127 = vinsertps_avx(ZEXT416(*(uint *)*pauVar34),
                             ZEXT416(*(uint *)(*pauVar34 + CONCAT44(uVar30,uVar37))),0x10);
    auVar127 = vinsertps_avx(auVar127,ZEXT416(*(uint *)(*pauVar34 + CONCAT44(uVar36,uVar31))),0x20);
    auVar127 = vinsertps_avx(auVar127,ZEXT416(*(uint *)(*pauVar34 + uVar38)),0x30);
    auVar118._0_4_ =
         uVar17 & ___ymm_0000007400000064000000540000004400000034000000240000001400000004;
    auVar118._4_4_ = uVar58 & _UNK_150b50e64;
    auVar118._8_4_ = uVar59 & _UNK_150b50e68;
    auVar118._12_4_ = uVar60 & _UNK_150b50e6c;
    uVar37 = vextractps_avx(auVar118,1);
    uVar31 = vextractps_avx(auVar118,2);
    uVar38 = vextractps_avx(auVar118,3);
    auVar62 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar34 + (uVar72 & _UNK_150b50e70))),
                            ZEXT416(*(uint *)(*pauVar34 + (uVar73 & _UNK_150b50e74))),0x10);
    auVar62 = vinsertps_avx(auVar62,ZEXT416(*(uint *)(*pauVar34 + (uVar74 & _UNK_150b50e78))),0x20);
    auVar62 = vinsertps_avx(auVar62,ZEXT416(*(uint *)(*pauVar34 + (uVar75 & _UNK_150b50e7c))),0x30);
    auVar105 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar34 + auVar118._0_4_)),
                             ZEXT416(*(uint *)(*pauVar34 + CONCAT44(uVar30,uVar37))),0x10);
    auVar105 = vinsertps_avx(auVar105,ZEXT416(*(uint *)(*pauVar34 + CONCAT44(uVar36,uVar31))),0x20);
    auVar105 = vinsertps_avx(auVar105,ZEXT416(*(uint *)(*pauVar34 + uVar38)),0x30);
    auVar138._0_4_ =
         uVar17 & ___ymm_0000007800000068000000580000004800000038000000280000001800000008;
    auVar138._4_4_ = uVar58 & _UNK_150b50e84;
    auVar138._8_4_ = uVar59 & _UNK_150b50e88;
    auVar138._12_4_ = uVar60 & _UNK_150b50e8c;
    uVar37 = vextractps_avx(auVar138,1);
    uVar31 = vextractps_avx(auVar138,2);
    auVar111._16_16_ = auVar90;
    auVar111._0_16_ = auVar127;
    uVar38 = vextractps_avx(auVar138,3);
    auVar90 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar34 + (uVar72 & _UNK_150b50e90))),
                            ZEXT416(*(uint *)(*pauVar34 + (uVar73 & _UNK_150b50e94))),0x10);
    auVar90 = vinsertps_avx(auVar90,ZEXT416(*(uint *)(*pauVar34 + (uVar74 & _UNK_150b50e98))),0x20);
    auVar90 = vinsertps_avx(auVar90,ZEXT416(*(uint *)(*pauVar34 + (uVar75 & _UNK_150b50e9c))),0x30);
    auVar127 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar34 + auVar138._0_4_)),
                             ZEXT416(*(uint *)(*pauVar34 + CONCAT44(uVar30,uVar37))),0x10);
    auVar127 = vinsertps_avx(auVar127,ZEXT416(*(uint *)(*pauVar34 + CONCAT44(uVar36,uVar31))),0x20);
    auVar127 = vinsertps_avx(auVar127,ZEXT416(*(uint *)(*pauVar34 + uVar38)),0x30);
    auVar63._0_4_ = uVar17 & ___ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c
    ;
    auVar63._4_4_ = uVar58 & _UNK_150b50ea4;
    auVar63._8_4_ = uVar59 & _UNK_150b50ea8;
    auVar63._12_4_ = uVar60 & _UNK_150b50eac;
    uVar37 = vextractps_avx(auVar63,1);
    uVar31 = vextractps_avx(auVar63,2);
    auVar122._16_16_ = auVar62;
    auVar122._0_16_ = auVar105;
    uVar38 = vextractps_avx(auVar63,3);
    auVar62 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar34 + (uVar72 & _UNK_150b50eb0))),
                            ZEXT416(*(uint *)(*pauVar34 + (uVar73 & _UNK_150b50eb4))),0x10);
    auVar62 = vinsertps_avx(auVar62,ZEXT416(*(uint *)(*pauVar34 + (uVar74 & _UNK_150b50eb8))),0x20);
    auVar62 = vinsertps_avx(auVar62,ZEXT416(*(uint *)(*pauVar34 + (uVar75 & _UNK_150b50ebc))),0x30);
    auVar105 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar34 + auVar63._0_4_)),
                             ZEXT416(*(uint *)(*pauVar34 + CONCAT44(uVar30,uVar37))),0x10);
    auVar105 = vinsertps_avx(auVar105,ZEXT416(*(uint *)(*pauVar34 + CONCAT44(uVar36,uVar31))),0x20);
    auVar131._16_16_ = auVar90;
    auVar131._0_16_ = auVar127;
    auVar90 = vinsertps_avx(auVar105,ZEXT416(*(uint *)(*pauVar34 + uVar38)),0x30);
    auVar68._16_16_ = auVar62;
    auVar68._0_16_ = auVar90;
  }
  auVar90 = vpcmpgtd_avx(auVar81,auVar61);
  auVar127 = vpcmpgtd_avx(auVar81,auVar47);
  auVar94._16_16_ = auVar90;
  auVar94._0_16_ = auVar127;
  auVar49 = vmaskmovps_avx(auVar94,auVar111);
  auVar55 = vmaskmovps_avx(auVar94,auVar122);
  auVar64 = vmaskmovps_avx(auVar94,auVar131);
  auVar76 = vcmpps_avx(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar68,1);
  auVar95._0_4_ = auVar76._0_4_ & auVar127._0_4_;
  auVar95._4_4_ = auVar76._4_4_ & auVar127._4_4_;
  auVar95._8_4_ = auVar76._8_4_ & auVar127._8_4_;
  auVar95._12_4_ = auVar76._12_4_ & auVar127._12_4_;
  auVar95._16_4_ = auVar76._16_4_ & auVar90._0_4_;
  auVar95._20_4_ = auVar76._20_4_ & auVar90._4_4_;
  auVar95._24_4_ = auVar76._24_4_ & auVar90._8_4_;
  auVar95._28_4_ = auVar76._28_4_ & auVar90._12_4_;
  uVar38 = vmovmskps_avx(auVar95);
  if (uVar38 != 0) {
    auVar90 = vpand_avx(auVar76._16_16_,auVar90);
    auVar61._0_4_ = auVar76._0_4_ & auVar127._0_4_;
    auVar61._4_4_ = auVar76._4_4_ & auVar127._4_4_;
    auVar61._8_4_ = auVar76._8_4_ & auVar127._8_4_;
    auVar61._12_4_ = auVar76._12_4_ & auVar127._12_4_;
    auVar127 = vpackssdw_avx(auVar61,auVar90);
    auVar47 = (undefined1  [16])0x0;
    bVar16 = (byte)uVar38;
    auVar90 = (undefined1  [16])0x0;
    if ((param_6 & 1) != 0) {
      if ((~bVar16 & 0x81) == 0) {
        auVar90._8_8_ = 0;
        auVar90._0_8_ = *(ulonglong *)(param_7 + uVar44);
      }
      else {
        pbVar18 = (byte *)(param_7 + uVar44);
        auVar90 = vpacksswb_avx(auVar127,auVar127);
        auVar81 = auVar90 >> 0xf;
        auVar61 = auVar90 >> 0x17;
        auVar62 = auVar90 >> 0x1f;
        auVar105 = auVar90 >> 0x27;
        auVar63 = auVar90 >> 0x2f;
        auVar118 = auVar90 >> 0x37;
        auVar138 = auVar90 >> 0x3f;
        if ((SUB161(auVar90 >> 7,0) & 1) != 0) {
          auVar90 = ZEXT116(*pbVar18);
        }
        if ((auVar81[0] & 1) != 0) {
          auVar81 = vpinsrb_avx(auVar90,(uint)pbVar18[1],1);
          auVar90 = vpblendw_avx(auVar81,auVar90,0xe);
        }
        if ((auVar61[0] & 1) != 0) {
          auVar81 = vpmovzxwd_avx(auVar90);
          auVar81 = vpinsrb_avx(auVar81,(uint)pbVar18[2],2);
          auVar81 = vpinsrb_avx(auVar81,(uint)auVar90[3],3);
          auVar90 = vpblendw_avx(auVar81,auVar90,0xc);
        }
        if ((auVar62[0] & 1) != 0) {
          auVar81 = vpmovzxwd_avx(auVar90);
          auVar81 = vpinsrb_avx(auVar81,(uint)auVar90[2],2);
          auVar81 = vpinsrb_avx(auVar81,(uint)pbVar18[3],3);
          auVar90 = vpblendw_avx(auVar81,auVar90,0xc);
        }
        if ((auVar105[0] & 1) != 0) {
          auVar81 = vpshufb_avx(auVar90,___xmm_80800706808005048080030203020100);
          auVar81 = vpinsrb_avx(auVar81,(uint)pbVar18[4],4);
          auVar81 = vpinsrb_avx(auVar81,(uint)auVar90[5],5);
          auVar90 = vpblendw_avx(auVar81,auVar90,8);
        }
        if ((auVar63[0] & 1) != 0) {
          auVar81 = vpshufb_avx(auVar90,___xmm_80800706808005048080030403020100);
          auVar81 = vpinsrb_avx(auVar81,(uint)pbVar18[5],5);
          auVar90 = vpblendw_avx(auVar81,auVar90,8);
        }
        if ((auVar118[0] & 1) != 0) {
          auVar81 = vpshufb_avx(auVar90,___xmm_80800706808005048080050403020100);
          auVar81 = vpinsrb_avx(auVar81,(uint)pbVar18[6],6);
          auVar90 = vpinsrb_avx(auVar81,(uint)auVar90[7],7);
        }
        if ((auVar138[0] & 1) != 0) {
          auVar90 = vpshufb_avx(auVar90,___xmm_80800706808005048006050403020100);
          auVar90 = vpinsrb_avx(auVar90,(uint)pbVar18[7],7);
        }
      }
    }
    if ((param_9 & 1) != 0) {
      if ((~bVar16 & 0x81) == 0) {
        auVar47._8_8_ = 0;
        auVar47._0_8_ = *(ulonglong *)(param_10 + uVar44);
      }
      else {
        pbVar18 = (byte *)(param_10 + uVar44);
        auVar47 = vpacksswb_avx(auVar127,auVar127);
        auVar81 = auVar47 >> 0xf;
        auVar61 = auVar47 >> 0x17;
        auVar62 = auVar47 >> 0x1f;
        auVar105 = auVar47 >> 0x27;
        auVar63 = auVar47 >> 0x2f;
        auVar118 = auVar47 >> 0x37;
        auVar138 = auVar47 >> 0x3f;
        if ((SUB161(auVar47 >> 7,0) & 1) != 0) {
          auVar47 = ZEXT116(*pbVar18);
        }
        if ((auVar81[0] & 1) != 0) {
          auVar81 = vpinsrb_avx(auVar47,(uint)pbVar18[1],1);
          auVar47 = vpblendw_avx(auVar81,auVar47,0xe);
        }
        if ((auVar61[0] & 1) != 0) {
          auVar81 = vpmovzxwd_avx(auVar47);
          auVar81 = vpinsrb_avx(auVar81,(uint)pbVar18[2],2);
          auVar81 = vpinsrb_avx(auVar81,(uint)auVar47[3],3);
          auVar47 = vpblendw_avx(auVar81,auVar47,0xc);
        }
        if ((auVar62[0] & 1) != 0) {
          auVar81 = vpmovzxwd_avx(auVar47);
          auVar81 = vpinsrb_avx(auVar81,(uint)auVar47[2],2);
          auVar81 = vpinsrb_avx(auVar81,(uint)pbVar18[3],3);
          auVar47 = vpblendw_avx(auVar81,auVar47,0xc);
        }
        if ((auVar105[0] & 1) != 0) {
          auVar81 = vpshufb_avx(auVar47,___xmm_80800706808005048080030203020100);
          auVar81 = vpinsrb_avx(auVar81,(uint)pbVar18[4],4);
          auVar81 = vpinsrb_avx(auVar81,(uint)auVar47[5],5);
          auVar47 = vpblendw_avx(auVar81,auVar47,8);
        }
        if ((auVar63[0] & 1) != 0) {
          auVar81 = vpshufb_avx(auVar47,___xmm_80800706808005048080030403020100);
          auVar81 = vpinsrb_avx(auVar81,(uint)pbVar18[5],5);
          auVar47 = vpblendw_avx(auVar81,auVar47,8);
        }
        if ((auVar118[0] & 1) != 0) {
          auVar81 = vpshufb_avx(auVar47,___xmm_80800706808005048080050403020100);
          auVar81 = vpinsrb_avx(auVar81,(uint)pbVar18[6],6);
          auVar47 = vpinsrb_avx(auVar81,(uint)auVar47[7],7);
        }
        if ((auVar138[0] & 1) != 0) {
          auVar81 = vpshufb_avx(auVar47,___xmm_80800706808005048006050403020100);
          auVar47 = vpinsrb_avx(auVar81,(uint)pbVar18[7],7);
        }
      }
    }
    auVar81 = vpmovsxbd_avx(auVar90);
    auVar90 = vpshufd_avx(auVar90,0x55);
    auVar90 = vpmovsxbd_avx(auVar90);
    auVar61 = vpslld_avx(auVar90,2);
    auVar90 = vpslld_avx(auVar81,2);
    auVar62 = vpmovsxwd_avx(auVar127);
    auVar81 = vpand_avx(auVar62,auVar90);
    auVar105 = vpunpckhwd_avx(auVar127,auVar127);
    auVar127 = vpand_avx(auVar105,auVar61);
    auVar90 = vinsertps_avx(ZEXT416(*(uint *)(param_8 + auVar127._0_4_)),
                            ZEXT416(*(uint *)(param_8 + auVar127._4_4_)),0x10);
    auVar90 = vinsertps_avx(auVar90,ZEXT416(*(uint *)(param_8 + auVar127._8_4_)),0x20);
    auVar90 = vinsertps_avx(auVar90,ZEXT416(*(uint *)(param_8 + auVar127._12_4_)),0x30);
    auVar127 = vinsertps_avx(ZEXT416(*(uint *)(param_8 + auVar81._0_4_)),
                             ZEXT416(*(uint *)(param_8 + auVar81._4_4_)),0x10);
    auVar127 = vinsertps_avx(auVar127,ZEXT416(*(uint *)(param_8 + auVar81._8_4_)),0x20);
    auVar127 = vinsertps_avx(auVar127,ZEXT416(*(uint *)(param_8 + auVar81._12_4_)),0x30);
    auVar61 = vpmovsxbd_avx(auVar47);
    auVar81 = vpshufd_avx(auVar47,0x55);
    auVar81 = vpmovsxbd_avx(auVar81);
    auVar81 = vpslld_avx(auVar81,2);
    auVar47 = vpand_avx(auVar105,auVar81);
    auVar81 = vinsertps_avx(ZEXT416(*(uint *)(param_11 + auVar47._0_4_)),
                            ZEXT416(*(uint *)(param_11 + auVar47._4_4_)),0x10);
    auVar61 = vpslld_avx(auVar61,2);
    auVar81 = vinsertps_avx(auVar81,ZEXT416(*(uint *)(param_11 + auVar47._8_4_)),0x20);
    auVar61 = vpand_avx(auVar62,auVar61);
    auVar81 = vinsertps_avx(auVar81,ZEXT416(*(uint *)(param_11 + auVar47._12_4_)),0x30);
    auVar47 = vinsertps_avx(ZEXT416(*(uint *)(param_11 + auVar61._0_4_)),
                            ZEXT416(*(uint *)(param_11 + auVar61._4_4_)),0x10);
    auVar47 = vinsertps_avx(auVar47,ZEXT416(*(uint *)(param_11 + auVar61._8_4_)),0x20);
    auVar47 = vinsertps_avx(auVar47,ZEXT416(*(uint *)(param_11 + auVar61._12_4_)),0x30);
    pauVar32 = (undefined1 (*) [32])(param_2 + uVar44 * 0xc);
    if (bVar16 == 0xff) {
      auVar82 = pauVar32[2];
      auVar113._16_16_ = *(undefined1 (*) [16])*pauVar32;
      auVar113._0_16_ = *(undefined1 (*) [16])(*pauVar32 + 0x10);
      auVar76 = vblendps_avx(*pauVar32,auVar113,0x24);
      auVar76 = vpermilps_avx(auVar76,
                              ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                             );
      uVar37 = *(undefined4 *)(pauVar32[1] + 4);
      auVar159._4_4_ = uVar37;
      auVar159._0_4_ = uVar37;
      auVar159._8_4_ = uVar37;
      auVar159._12_4_ = uVar37;
      uVar37 = *(undefined4 *)(pauVar32[1] + 8);
      auVar159._20_4_ = uVar37;
      auVar159._16_4_ = uVar37;
      auVar159._24_4_ = uVar37;
      auVar159._28_4_ = uVar37;
      auVar76 = vblendps_avx(auVar76,auVar159,0x88);
      auVar160._16_16_ = *(undefined1 (*) [16])pauVar32[2];
      auVar160._0_16_ = *(undefined1 (*) [16])(pauVar32[2] + 0x10);
      auVar122 = vblendps_avx(auVar160,auVar82,0x44);
      auVar122 = vpermilps_avx(auVar122,
                               ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                              );
      auVar61 = vshufps_avx(*(undefined1 (*) [16])(pauVar32[1] + 0x10),
                            *(undefined1 (*) [16])(pauVar32[1] + 0x10),0xec);
      uVar37 = *(undefined4 *)(pauVar32[1] + 0x14);
      auVar145._20_4_ = uVar37;
      auVar145._16_4_ = uVar37;
      auVar145._24_4_ = uVar37;
      auVar145._28_4_ = uVar37;
      auVar145._0_16_ = auVar61;
      auVar122 = vblendps_avx(auVar122,auVar145,0x13);
      local_3e0._16_16_ = auVar122._0_16_;
      local_3e0._0_16_ = auVar76._0_16_;
      local_340 = vperm2f128_avx(auVar76,auVar122,0x31);
      auVar76 = vblendps_avx(pauVar32[1],*pauVar32,0x24);
      auVar76 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])(*pauVar32 + 0x10)),auVar76,0x21);
      auVar76 = vshufps_avx(auVar76,pauVar32[1],0xc2);
      auVar122 = vshufps_avx(auVar160,auVar82,0xc4);
      local_360 = vblendps_avx(auVar76,auVar122,0xe0);
      lVar43 = uVar44 * 0xc;
      auVar61 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar43);
      auVar63 = *(undefined1 (*) [16])(param_3 + 0x30 + lVar43);
      auVar118 = *(undefined1 (*) [16])(param_3 + 0x50 + lVar43);
      auVar138 = *(undefined1 (*) [16])(param_3 + 0x40 + lVar43);
      uVar37 = *(undefined4 *)(param_3 + 0x28 + lVar43);
      auVar70._20_4_ = uVar37;
      auVar70._16_4_ = uVar37;
      auVar70._24_4_ = uVar37;
      auVar70._28_4_ = uVar37;
      uVar37 = *(undefined4 *)(param_3 + 0x24 + lVar43);
      auVar70._4_4_ = uVar37;
      auVar70._0_4_ = uVar37;
      auVar70._8_4_ = uVar37;
      auVar70._12_4_ = uVar37;
      uVar37 = *(undefined4 *)(param_3 + 0x34 + lVar43);
      auVar124._20_4_ = uVar37;
      auVar124._16_4_ = uVar37;
      auVar124._24_4_ = uVar37;
      auVar124._28_4_ = uVar37;
      auVar133._16_16_ = auVar61;
      auVar133._0_16_ = *(undefined1 (*) [16])(param_3 + lVar43);
      auVar84._16_16_ = auVar63;
      auVar84._0_16_ = *(undefined1 (*) [16])(param_3 + 0x20 + lVar43);
      auVar56._16_16_ = auVar118;
      auVar56._0_16_ = auVar138;
      auVar146._16_16_ = *(undefined1 (*) [16])(param_3 + lVar43);
      auVar146._0_16_ = auVar61;
      auVar76 = vblendps_avx(auVar133,auVar146,0x24);
      auVar76 = vpermilps_avx(auVar76,
                              ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                             );
      auVar76 = vblendps_avx(auVar76,auVar70,0x88);
      auVar114._16_16_ = auVar138;
      auVar114._0_16_ = auVar118;
      auVar122 = vblendps_avx(auVar114,auVar56,0x44);
      auVar122 = vpermilps_avx(auVar122,
                               ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                              );
      auVar63 = vshufps_avx(auVar63,auVar63,0xec);
      auVar124._0_16_ = auVar63;
      auVar122 = vblendps_avx(auVar122,auVar124,0x13);
      auVar144._16_16_ = auVar122._0_16_;
      auVar144._0_16_ = auVar76._0_16_;
      auVar147 = vperm2f128_avx(auVar76,auVar122,0x31);
      auVar76 = vblendps_avx(auVar84,auVar133,0x24);
      auVar76 = vshufps_avx(ZEXT1632(auVar61),auVar76,0x21);
      auVar76 = vshufps_avx(auVar76,auVar84,0xc2);
      auVar122 = vshufps_avx(auVar114,auVar56,0xc4);
      auVar150 = vblendps_avx(auVar76,auVar122,0xe0);
      auVar61 = *(undefined1 (*) [16])(param_4 + 0x10 + lVar43);
      auVar63 = *(undefined1 (*) [16])(param_4 + 0x30 + lVar43);
      auVar125._16_16_ = auVar61;
      auVar125._0_16_ = *(undefined1 (*) [16])(param_4 + lVar43);
      auVar85._16_16_ = auVar63;
      auVar85._0_16_ = *(undefined1 (*) [16])(param_4 + 0x20 + lVar43);
      auVar118 = *(undefined1 (*) [16])(param_4 + 0x50 + lVar43);
      auVar138 = *(undefined1 (*) [16])(param_4 + 0x40 + lVar43);
      auVar161._16_16_ = auVar118;
      auVar161._0_16_ = auVar138;
      auVar57._16_16_ = *(undefined1 (*) [16])(param_4 + lVar43);
      auVar57._0_16_ = auVar61;
      auVar76 = vblendps_avx(auVar125,auVar57,0x24);
      auVar76 = vpermilps_avx(auVar76,
                              ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                             );
      uVar37 = *(undefined4 *)(param_4 + 0x28 + lVar43);
      auVar137._20_4_ = uVar37;
      auVar137._16_4_ = uVar37;
      auVar137._24_4_ = uVar37;
      auVar137._28_4_ = uVar37;
      uVar37 = *(undefined4 *)(param_4 + 0x24 + lVar43);
      auVar137._4_4_ = uVar37;
      auVar137._0_4_ = uVar37;
      auVar137._8_4_ = uVar37;
      auVar137._12_4_ = uVar37;
      auVar76 = vblendps_avx(auVar76,auVar137,0x88);
      auVar134._16_16_ = auVar138;
      auVar134._0_16_ = auVar118;
      auVar122 = vblendps_avx(auVar134,auVar161,0x44);
      auVar122 = vpermilps_avx(auVar122,
                               ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                              );
      uVar37 = *(undefined4 *)(param_4 + 0x34 + lVar43);
      auVar115._20_4_ = uVar37;
      auVar115._16_4_ = uVar37;
      auVar115._24_4_ = uVar37;
      auVar115._28_4_ = uVar37;
      auVar63 = vshufps_avx(auVar63,auVar63,0xec);
      auVar115._0_16_ = auVar63;
      auVar122 = vblendps_avx(auVar122,auVar115,0x13);
      auVar139._16_16_ = auVar122._0_16_;
      auVar139._0_16_ = auVar76._0_16_;
      auVar136 = vperm2f128_avx(auVar76,auVar122,0x31);
      auVar76 = vblendps_avx(auVar85,auVar125,0x24);
      auVar76 = vshufps_avx(ZEXT1632(auVar61),auVar76,0x21);
      auVar76 = vshufps_avx(auVar76,auVar85,0xc2);
      auVar122 = vshufps_avx(auVar134,auVar161,0xc4);
      auVar154 = vblendps_avx(auVar76,auVar122,0xe0);
    }
    else {
      uVar17 = auVar62._0_4_;
      auVar48._0_4_ =
           uVar17 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000;
      uVar58 = auVar62._4_4_;
      auVar48._4_4_ = uVar58 & _UNK_150b50b04;
      uVar59 = auVar62._8_4_;
      auVar48._8_4_ = uVar59 & _UNK_150b50b08;
      uVar60 = auVar62._12_4_;
      auVar48._12_4_ = uVar60 & _UNK_150b50b0c;
      uVar72 = auVar105._0_4_;
      uVar73 = auVar105._4_4_;
      uVar74 = auVar105._8_4_;
      uVar75 = auVar105._12_4_;
      uVar37 = vextractps_avx(auVar48,1);
      lVar29 = CONCAT44((int)(uVar44 * 3 >> 0x20),uVar37);
      uVar37 = vextractps_avx(auVar48,2);
      lVar35 = CONCAT44((int)((ulonglong)param_2 >> 0x20),uVar37);
      uVar37 = vextractps_avx(auVar48,3);
      lVar40 = CONCAT44((int)((ulonglong)param_8 >> 0x20),uVar37);
      uVar26 = (ulonglong)(uVar73 & _UNK_150b50b14);
      uVar41 = (ulonglong)(uVar74 & _UNK_150b50b18);
      uVar45 = (ulonglong)(uVar75 & _UNK_150b50b1c);
      uVar25 = (ulonglong)(uVar72 & _UNK_150b50b10);
      auVar61 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar32 + uVar25)),
                              ZEXT416(*(uint *)(*pauVar32 + uVar26)),0x10);
      auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)(*pauVar32 + uVar41)),0x20);
      auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)(*pauVar32 + uVar45)),0x30);
      auVar63 = vinsertps_avx(ZEXT416(*(uint *)*pauVar32),ZEXT416(*(uint *)(*pauVar32 + lVar29)),
                              0x10);
      auVar63 = vinsertps_avx(auVar63,ZEXT416(*(uint *)(*pauVar32 + lVar35)),0x20);
      auVar63 = vinsertps_avx(auVar63,ZEXT416(*(uint *)(*pauVar32 + lVar40)),0x30);
      uVar19 = (ulonglong)(uVar73 & _UNK_150b50b34);
      uVar27 = (ulonglong)(uVar74 & _UNK_150b50b38);
      uVar46 = (ulonglong)(uVar72 & _UNK_150b50b30);
      uVar42 = (ulonglong)(uVar75 & _UNK_150b50b3c);
      auVar118 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar32 + uVar46)),
                               ZEXT416(*(uint *)(*pauVar32 + uVar19)),0x10);
      auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(*pauVar32 + uVar27)),0x20);
      uVar14 = (ulonglong)
               (uVar17 & ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004);
      auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(*pauVar32 + uVar42)),0x30);
      uVar12 = (ulonglong)(uVar58 & _UNK_150b50b24);
      auVar138 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar32 + uVar14)),
                               ZEXT416(*(uint *)(*pauVar32 + uVar12)),0x10);
      uVar20 = (ulonglong)(uVar59 & _UNK_150b50b28);
      auVar138 = vinsertps_avx(auVar138,ZEXT416(*(uint *)(*pauVar32 + uVar20)),0x20);
      uVar21 = (ulonglong)(uVar60 & _UNK_150b50b2c);
      auVar138 = vinsertps_avx(auVar138,ZEXT416(*(uint *)(*pauVar32 + uVar21)),0x30);
      uVar22 = (ulonglong)(uVar72 & _UNK_150b50b50);
      uVar23 = (ulonglong)(uVar73 & _UNK_150b50b54);
      auVar48 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar32 + uVar22)),
                              ZEXT416(*(uint *)(*pauVar32 + uVar23)),0x10);
      uVar24 = (ulonglong)(uVar74 & _UNK_150b50b58);
      auVar48 = vinsertps_avx(auVar48,ZEXT416(*(uint *)(*pauVar32 + uVar24)),0x20);
      uVar28 = (ulonglong)(uVar75 & _UNK_150b50b5c);
      auVar48 = vinsertps_avx(auVar48,ZEXT416(*(uint *)(*pauVar32 + uVar28)),0x30);
      uVar15 = (ulonglong)
               (uVar17 & ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008);
      uVar13 = (ulonglong)(uVar58 & _UNK_150b50b44);
      auVar5 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar32 + uVar15)),
                             ZEXT416(*(uint *)(*pauVar32 + uVar13)),0x10);
      uVar33 = (ulonglong)(uVar59 & _UNK_150b50b48);
      auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(*pauVar32 + uVar33)),0x20);
      uVar39 = (ulonglong)(uVar60 & _UNK_150b50b4c);
      auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(*pauVar32 + uVar39)),0x30);
      local_3e0._16_16_ = auVar61;
      local_3e0._0_16_ = auVar63;
      local_340._16_16_ = auVar118;
      local_340._0_16_ = auVar138;
      local_360._16_16_ = auVar48;
      local_360._0_16_ = auVar5;
      lVar4 = uVar44 * 0xc;
      lVar43 = param_3 + lVar4;
      auVar61 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + lVar4)),
                              ZEXT416(*(uint *)(lVar29 + lVar43)),0x10);
      auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)(lVar35 + lVar43)),0x20);
      auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)(lVar40 + lVar43)),0x30);
      auVar63 = vinsertps_avx(ZEXT416(*(uint *)(uVar25 + lVar43)),
                              ZEXT416(*(uint *)(uVar26 + lVar43)),0x10);
      auVar63 = vinsertps_avx(auVar63,ZEXT416(*(uint *)(uVar41 + lVar43)),0x20);
      auVar63 = vinsertps_avx(auVar63,ZEXT416(*(uint *)(uVar45 + lVar43)),0x30);
      auVar118 = vinsertps_avx(ZEXT416(*(uint *)(uVar46 + lVar43)),
                               ZEXT416(*(uint *)(uVar19 + lVar43)),0x10);
      auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(uVar27 + lVar43)),0x20);
      auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(uVar42 + lVar43)),0x30);
      auVar138 = vinsertps_avx(ZEXT416(*(uint *)(uVar14 + lVar43)),
                               ZEXT416(*(uint *)(uVar12 + lVar43)),0x10);
      auVar138 = vinsertps_avx(auVar138,ZEXT416(*(uint *)(uVar20 + lVar43)),0x20);
      auVar138 = vinsertps_avx(auVar138,ZEXT416(*(uint *)(uVar21 + lVar43)),0x30);
      auVar48 = vinsertps_avx(ZEXT416(*(uint *)(uVar22 + lVar43)),
                              ZEXT416(*(uint *)(uVar23 + lVar43)),0x10);
      auVar48 = vinsertps_avx(auVar48,ZEXT416(*(uint *)(uVar24 + lVar43)),0x20);
      auVar48 = vinsertps_avx(auVar48,ZEXT416(*(uint *)(uVar28 + lVar43)),0x30);
      auVar5 = vinsertps_avx(ZEXT416(*(uint *)(uVar15 + lVar43)),ZEXT416(*(uint *)(uVar13 + lVar43))
                             ,0x10);
      auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(uVar33 + lVar43)),0x20);
      auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(uVar39 + lVar43)),0x30);
      lVar43 = param_4 + lVar4;
      auVar6 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + lVar4)),ZEXT416(*(uint *)(lVar29 + lVar43))
                             ,0x10);
      auVar6 = vinsertps_avx(auVar6,ZEXT416(*(uint *)(lVar35 + lVar43)),0x20);
      auVar6 = vinsertps_avx(auVar6,ZEXT416(*(uint *)(lVar40 + lVar43)),0x30);
      auVar7 = vinsertps_avx(ZEXT416(*(uint *)(uVar25 + lVar43)),ZEXT416(*(uint *)(uVar26 + lVar43))
                             ,0x10);
      auVar7 = vinsertps_avx(auVar7,ZEXT416(*(uint *)(uVar41 + lVar43)),0x20);
      auVar7 = vinsertps_avx(auVar7,ZEXT416(*(uint *)(uVar45 + lVar43)),0x30);
      auVar8 = vinsertps_avx(ZEXT416(*(uint *)(uVar46 + lVar43)),ZEXT416(*(uint *)(uVar19 + lVar43))
                             ,0x10);
      auVar8 = vinsertps_avx(auVar8,ZEXT416(*(uint *)(uVar27 + lVar43)),0x20);
      auVar8 = vinsertps_avx(auVar8,ZEXT416(*(uint *)(uVar42 + lVar43)),0x30);
      auVar9 = vinsertps_avx(ZEXT416(*(uint *)(uVar14 + lVar43)),ZEXT416(*(uint *)(uVar12 + lVar43))
                             ,0x10);
      auVar9 = vinsertps_avx(auVar9,ZEXT416(*(uint *)(uVar20 + lVar43)),0x20);
      auVar9 = vinsertps_avx(auVar9,ZEXT416(*(uint *)(uVar21 + lVar43)),0x30);
      auVar10 = vinsertps_avx(ZEXT416(*(uint *)(uVar22 + lVar43)),
                              ZEXT416(*(uint *)(uVar23 + lVar43)),0x10);
      auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(uVar24 + lVar43)),0x20);
      auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(uVar28 + lVar43)),0x30);
      auVar11 = vinsertps_avx(ZEXT416(*(uint *)(uVar15 + lVar43)),
                              ZEXT416(*(uint *)(uVar13 + lVar43)),0x10);
      auVar11 = vinsertps_avx(auVar11,ZEXT416(*(uint *)(uVar33 + lVar43)),0x20);
      auVar11 = vinsertps_avx(auVar11,ZEXT416(*(uint *)(uVar39 + lVar43)),0x30);
      auVar144._16_16_ = auVar63;
      auVar144._0_16_ = auVar61;
      auVar147._16_16_ = auVar118;
      auVar147._0_16_ = auVar138;
      auVar150._16_16_ = auVar48;
      auVar150._0_16_ = auVar5;
      auVar139._16_16_ = auVar7;
      auVar139._0_16_ = auVar6;
      auVar136._16_16_ = auVar8;
      auVar136._0_16_ = auVar9;
      auVar154._16_16_ = auVar10;
      auVar154._0_16_ = auVar11;
    }
    auVar76 = vsubps_avx(auVar49,auVar144);
    auVar122 = vsubps_avx(auVar55,auVar147);
    auVar82 = vsubps_avx(auVar64,auVar150);
    fVar89 = auVar127._0_4_;
    auVar86._0_4_ = fVar89 * auVar76._0_4_;
    fVar98 = auVar127._4_4_;
    auVar86._4_4_ = fVar98 * auVar76._4_4_;
    fVar99 = auVar127._8_4_;
    auVar86._8_4_ = fVar99 * auVar76._8_4_;
    fVar100 = auVar127._12_4_;
    auVar86._12_4_ = fVar100 * auVar76._12_4_;
    fVar101 = auVar90._0_4_;
    auVar86._16_4_ = fVar101 * auVar76._16_4_;
    fVar102 = auVar90._4_4_;
    auVar86._20_4_ = fVar102 * auVar76._20_4_;
    fVar103 = auVar90._8_4_;
    auVar86._24_4_ = fVar103 * auVar76._24_4_;
    fVar104 = auVar90._12_4_;
    auVar86._28_4_ = fVar104 * auVar76._28_4_;
    auVar116._0_4_ = fVar89 * auVar122._0_4_;
    auVar116._4_4_ = fVar98 * auVar122._4_4_;
    auVar116._8_4_ = fVar99 * auVar122._8_4_;
    auVar116._12_4_ = fVar100 * auVar122._12_4_;
    auVar116._16_4_ = fVar101 * auVar122._16_4_;
    auVar116._20_4_ = fVar102 * auVar122._20_4_;
    auVar116._24_4_ = fVar103 * auVar122._24_4_;
    auVar116._28_4_ = fVar104 * auVar122._28_4_;
    auVar96._0_4_ = fVar89 * auVar82._0_4_;
    auVar96._4_4_ = fVar98 * auVar82._4_4_;
    auVar96._8_4_ = fVar99 * auVar82._8_4_;
    auVar96._12_4_ = fVar100 * auVar82._12_4_;
    auVar96._16_4_ = fVar101 * auVar82._16_4_;
    auVar96._20_4_ = fVar102 * auVar82._20_4_;
    auVar96._24_4_ = fVar103 * auVar82._24_4_;
    auVar96._28_4_ = fVar104 * auVar82._28_4_;
    auVar49 = vsubps_avx(auVar49,auVar86);
    auVar55 = vsubps_avx(auVar55,auVar116);
    auVar64 = vsubps_avx(auVar64,auVar96);
    auVar80._16_16_ = auVar105;
    auVar80._0_16_ = auVar62;
    auVar49 = vmaskmovps_avx(auVar80,auVar49);
    auVar55 = vmaskmovps_avx(auVar80,auVar55);
    auVar64 = vmaskmovps_avx(auVar80,auVar64);
    auVar76 = vsubps_avx(auVar49,local_3e0);
    auVar90 = vshufps_avx(ZEXT416(param_5),ZEXT416(param_5),0);
    fVar89 = auVar90._0_4_;
    auVar97._0_4_ = auVar139._0_4_ * fVar89;
    fVar98 = auVar90._4_4_;
    auVar97._4_4_ = auVar139._4_4_ * fVar98;
    fVar99 = auVar90._8_4_;
    auVar97._8_4_ = auVar139._8_4_ * fVar99;
    fVar100 = auVar90._12_4_;
    auVar97._12_4_ = auVar139._12_4_ * fVar100;
    auVar97._16_4_ = auVar139._16_4_ * fVar89;
    auVar97._20_4_ = auVar139._20_4_ * fVar98;
    auVar97._24_4_ = auVar139._24_4_ * fVar99;
    auVar97._28_4_ = auVar139._28_4_ * fVar100;
    auVar76 = vsubps_avx(auVar76,auVar97);
    auVar122 = vsubps_avx(auVar55,local_340);
    auVar126._0_4_ = auVar136._0_4_ * fVar89;
    auVar126._4_4_ = auVar136._4_4_ * fVar98;
    auVar126._8_4_ = auVar136._8_4_ * fVar99;
    auVar126._12_4_ = auVar136._12_4_ * fVar100;
    auVar126._16_4_ = auVar136._16_4_ * fVar89;
    auVar126._20_4_ = auVar136._20_4_ * fVar98;
    auVar126._24_4_ = auVar136._24_4_ * fVar99;
    auVar126._28_4_ = auVar136._28_4_ * fVar100;
    auVar122 = vsubps_avx(auVar122,auVar126);
    auVar87._0_4_ = auVar154._0_4_ * fVar89;
    auVar87._4_4_ = auVar154._4_4_ * fVar98;
    auVar87._8_4_ = auVar154._8_4_ * fVar99;
    auVar87._12_4_ = auVar154._12_4_ * fVar100;
    auVar87._16_4_ = auVar154._16_4_ * fVar89;
    auVar87._20_4_ = auVar154._20_4_ * fVar98;
    auVar87._24_4_ = auVar154._24_4_ * fVar99;
    auVar87._28_4_ = auVar154._28_4_ * fVar100;
    auVar82 = vsubps_avx(auVar64,local_360);
    auVar82 = vsubps_avx(auVar82,auVar87);
    local_280._0_4_ = auVar47._0_4_;
    local_280._4_4_ = auVar47._4_4_;
    fStack_278 = auVar47._8_4_;
    fStack_274 = auVar47._12_4_;
    fStack_270 = auVar81._0_4_;
    fStack_26c = auVar81._4_4_;
    fStack_268 = auVar81._8_4_;
    fStack_264 = auVar81._12_4_;
    auVar71._0_4_ = (float)local_280._0_4_ * auVar76._0_4_;
    auVar71._4_4_ = (float)local_280._4_4_ * auVar76._4_4_;
    auVar71._8_4_ = fStack_278 * auVar76._8_4_;
    auVar71._12_4_ = fStack_274 * auVar76._12_4_;
    auVar71._16_4_ = fStack_270 * auVar76._16_4_;
    auVar71._20_4_ = fStack_26c * auVar76._20_4_;
    auVar71._24_4_ = fStack_268 * auVar76._24_4_;
    auVar71._28_4_ = fStack_264 * auVar76._28_4_;
    auVar117._0_4_ = (float)local_280._0_4_ * auVar122._0_4_;
    auVar117._4_4_ = (float)local_280._4_4_ * auVar122._4_4_;
    auVar117._8_4_ = fStack_278 * auVar122._8_4_;
    auVar117._12_4_ = fStack_274 * auVar122._12_4_;
    auVar117._16_4_ = fStack_270 * auVar122._16_4_;
    auVar117._20_4_ = fStack_26c * auVar122._20_4_;
    auVar117._24_4_ = fStack_268 * auVar122._24_4_;
    auVar117._28_4_ = fStack_264 * auVar122._28_4_;
    auVar88._0_4_ = (float)local_280._0_4_ * auVar82._0_4_;
    auVar88._4_4_ = (float)local_280._4_4_ * auVar82._4_4_;
    auVar88._8_4_ = fStack_278 * auVar82._8_4_;
    auVar88._12_4_ = fStack_274 * auVar82._12_4_;
    auVar88._16_4_ = fStack_270 * auVar82._16_4_;
    auVar88._20_4_ = fStack_26c * auVar82._20_4_;
    auVar88._24_4_ = fStack_268 * auVar82._24_4_;
    auVar88._28_4_ = fStack_264 * auVar82._28_4_;
    auVar49 = vsubps_avx(auVar49,auVar71);
    auVar55 = vsubps_avx(auVar55,auVar117);
    auVar64 = vsubps_avx(auVar64,auVar88);
    auVar49 = vmaskmovps_avx(auVar80,auVar49);
    auVar55 = vmaskmovps_avx(auVar80,auVar55);
    auVar64 = vmaskmovps_avx(auVar80,auVar64);
    if (bVar16 == 0xff) {
      auVar76 = vunpcklps_avx(auVar49,auVar55);
      auVar82 = vunpcklps_avx(auVar64,auVar68);
      auVar122 = vunpcklpd_avx(auVar76,auVar82);
      auVar76 = vunpckhpd_avx(auVar76,auVar82);
      auVar49 = vunpckhps_avx(auVar49,auVar55);
      auVar55 = vunpckhps_avx(auVar64,auVar68);
      auVar64 = vunpcklpd_avx(auVar49,auVar55);
      auVar49 = vunpckhpd_avx(auVar49,auVar55);
      pauVar34[1] = auVar76._0_16_;
      *pauVar34 = auVar122._0_16_;
      pauVar34[3] = auVar49._0_16_;
      pauVar34[2] = auVar64._0_16_;
      pauVar34[5] = auVar76._16_16_;
      pauVar34[4] = auVar122._16_16_;
      pauVar34[7] = auVar49._16_16_;
      pauVar34[6] = auVar64._16_16_;
    }
    else {
      auVar105 = auVar49._0_16_;
      auVar61 = auVar55._0_16_;
      auVar62 = auVar55._16_16_;
      auVar90 = auVar64._0_16_;
      auVar127 = auVar64._16_16_;
      auVar81 = auVar68._0_16_;
      auVar47 = auVar68._16_16_;
      if ((uVar38 & 1) != 0) {
        *(int *)*pauVar34 = auVar49._0_4_;
      }
      if ((uVar38 & 2) != 0) {
        uVar37 = vextractps_avx(auVar105,1);
        *(undefined4 *)pauVar34[1] = uVar37;
      }
      if ((uVar38 & 4) != 0) {
        uVar37 = vextractps_avx(auVar105,2);
        *(undefined4 *)pauVar34[2] = uVar37;
      }
      if ((uVar38 & 8) != 0) {
        uVar37 = vextractps_avx(auVar105,3);
        *(undefined4 *)pauVar34[3] = uVar37;
      }
      if ((uVar38 & 0x10) != 0) {
        *(int *)pauVar34[4] = auVar49._16_4_;
      }
      if ((uVar38 & 0x20) != 0) {
        *(int *)pauVar34[5] = auVar49._20_4_;
      }
      if ((uVar38 & 0x40) != 0) {
        *(int *)pauVar34[6] = auVar49._24_4_;
      }
      if ((char)bVar16 < '\0') {
        *(int *)pauVar34[7] = auVar49._28_4_;
      }
      if ((uVar38 & 1) != 0) {
        *(int *)(*pauVar34 + 4) = auVar55._0_4_;
      }
      if ((uVar38 & 2) != 0) {
        uVar37 = vextractps_avx(auVar61,1);
        *(undefined4 *)(pauVar34[1] + 4) = uVar37;
      }
      if ((uVar38 & 4) != 0) {
        uVar37 = vextractps_avx(auVar61,2);
        *(undefined4 *)(pauVar34[2] + 4) = uVar37;
      }
      if ((uVar38 & 8) != 0) {
        uVar37 = vextractps_avx(auVar61,3);
        *(undefined4 *)(pauVar34[3] + 4) = uVar37;
      }
      if ((uVar38 & 0x10) != 0) {
        *(int *)(pauVar34[4] + 4) = auVar55._16_4_;
      }
      if ((uVar38 & 0x20) != 0) {
        uVar37 = vextractps_avx(auVar62,1);
        *(undefined4 *)(pauVar34[5] + 4) = uVar37;
      }
      if ((uVar38 & 0x40) != 0) {
        uVar37 = vextractps_avx(auVar62,2);
        *(undefined4 *)(pauVar34[6] + 4) = uVar37;
      }
      if ((char)bVar16 < '\0') {
        uVar37 = vextractps_avx(auVar62,3);
        *(undefined4 *)(pauVar34[7] + 4) = uVar37;
      }
      if ((uVar38 & 1) != 0) {
        *(int *)(*pauVar34 + 8) = auVar64._0_4_;
      }
      if ((uVar38 & 2) != 0) {
        uVar37 = vextractps_avx(auVar90,1);
        *(undefined4 *)(pauVar34[1] + 8) = uVar37;
      }
      if ((uVar38 & 4) != 0) {
        uVar37 = vextractps_avx(auVar90,2);
        *(undefined4 *)(pauVar34[2] + 8) = uVar37;
      }
      if ((uVar38 & 8) != 0) {
        uVar37 = vextractps_avx(auVar90,3);
        *(undefined4 *)(pauVar34[3] + 8) = uVar37;
      }
      if ((uVar38 & 0x10) != 0) {
        *(int *)(pauVar34[4] + 8) = auVar64._16_4_;
      }
      if ((uVar38 & 0x20) != 0) {
        uVar37 = vextractps_avx(auVar127,1);
        *(undefined4 *)(pauVar34[5] + 8) = uVar37;
      }
      if ((uVar38 & 0x40) != 0) {
        uVar37 = vextractps_avx(auVar127,2);
        *(undefined4 *)(pauVar34[6] + 8) = uVar37;
      }
      if ((char)bVar16 < '\0') {
        uVar37 = vextractps_avx(auVar127,3);
        *(undefined4 *)(pauVar34[7] + 8) = uVar37;
      }
      if ((uVar38 & 1) != 0) {
        *(int *)(*pauVar34 + 0xc) = auVar68._0_4_;
      }
      if ((uVar38 & 2) != 0) {
        uVar37 = vextractps_avx(auVar81,1);
        *(undefined4 *)(pauVar34[1] + 0xc) = uVar37;
      }
      if ((uVar38 & 4) != 0) {
        uVar37 = vextractps_avx(auVar81,2);
        *(undefined4 *)(pauVar34[2] + 0xc) = uVar37;
      }
      if ((uVar38 & 8) != 0) {
        uVar37 = vextractps_avx(auVar81,3);
        *(undefined4 *)(pauVar34[3] + 0xc) = uVar37;
      }
      if ((uVar38 & 0x10) != 0) {
        *(int *)(pauVar34[4] + 0xc) = auVar68._16_4_;
      }
      if ((uVar38 & 0x20) != 0) {
        uVar37 = vextractps_avx(auVar47,1);
        *(undefined4 *)(pauVar34[5] + 0xc) = uVar37;
      }
      if ((uVar38 & 0x40) != 0) {
        uVar37 = vextractps_avx(auVar47,2);
        *(undefined4 *)(pauVar34[6] + 0xc) = uVar37;
      }
      if ((char)bVar16 < '\0') {
        uVar37 = vextractps_avx(auVar47,3);
        *(undefined4 *)(pauVar34[7] + 0xc) = uVar37;
      }
    }
  }
  return;
}

// MultiResUpdateFineTargets___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_Cuni_avx @ 1405a91c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MultiResUpdateFineTargets___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_Cuni_avx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,uint param_8)

{
  float fVar1;
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
  undefined8 uVar38;
  uint uVar39;
  longlong lVar40;
  ulonglong uVar41;
  undefined4 uVar42;
  longlong lVar43;
  undefined4 uVar45;
  ulonglong uVar44;
  undefined4 uVar46;
  longlong lVar47;
  undefined4 uVar51;
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  longlong lVar52;
  longlong lVar53;
  ulonglong uVar54;
  longlong lVar55;
  longlong lVar56;
  ulonglong uVar57;
  longlong lVar58;
  longlong lVar59;
  ulonglong uVar60;
  char cVar61;
  uint uVar62;
  longlong lVar63;
  longlong lVar64;
  longlong lVar65;
  longlong lVar66;
  ulonglong uVar67;
  ulonglong uVar68;
  ulonglong uVar69;
  longlong lVar70;
  longlong lVar71;
  longlong lVar72;
  longlong lVar73;
  longlong lVar74;
  longlong lVar75;
  longlong lVar76;
  undefined1 (*pauVar77) [16];
  longlong lVar78;
  longlong lVar79;
  longlong lVar80;
  longlong lVar81;
  longlong lVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [16];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar108 [16];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  uint uVar118;
  uint uVar127;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  uint uVar125;
  uint uVar126;
  uint uVar128;
  uint uVar129;
  uint uVar130;
  undefined1 auVar121 [32];
  uint uVar131;
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  undefined1 auVar132 [32];
  undefined1 auVar133 [32];
  undefined1 auVar134 [32];
  undefined1 auVar135 [32];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [32];
  undefined1 auVar142 [32];
  undefined1 auVar144 [32];
  undefined1 auVar145 [16];
  undefined1 auVar146 [32];
  undefined1 auVar147 [16];
  undefined1 auVar148 [32];
  undefined1 auVar150 [32];
  undefined1 auVar151 [16];
  undefined1 auVar152 [32];
  undefined1 auVar153 [32];
  float local_678;
  float fStack_674;
  float fStack_670;
  float fStack_66c;
  float fStack_668;
  float fStack_664;
  float fStack_660;
  float fStack_65c;
  float local_5f8;
  float fStack_5f4;
  float fStack_5f0;
  float fStack_5ec;
  float local_5d8;
  float fStack_5d4;
  float fStack_5d0;
  float fStack_5cc;
  float fStack_5c8;
  float fStack_5c4;
  float fStack_5c0;
  float fStack_5bc;
  float local_5b8;
  float fStack_5b4;
  float fStack_5b0;
  float fStack_5ac;
  float fStack_5a8;
  float fStack_5a4;
  float fStack_5a0;
  float fStack_59c;
  float local_598;
  float fStack_594;
  float fStack_590;
  float fStack_58c;
  float fStack_588;
  float fStack_584;
  float fStack_580;
  float fStack_57c;
  float local_578;
  float fStack_574;
  float fStack_570;
  float fStack_56c;
  float fStack_568;
  float fStack_564;
  float fStack_560;
  float fStack_55c;
  float local_558;
  float fStack_554;
  float fStack_550;
  float fStack_54c;
  float fStack_548;
  float fStack_544;
  float fStack_540;
  float fStack_53c;
  float local_538;
  float fStack_534;
  float fStack_530;
  float fStack_52c;
  float fStack_528;
  float fStack_524;
  float fStack_520;
  float fStack_51c;
  float local_518;
  float fStack_514;
  float fStack_510;
  float fStack_50c;
  float fStack_508;
  float fStack_504;
  float fStack_500;
  float fStack_4fc;
  float local_4f8;
  float fStack_4f4;
  float fStack_4f0;
  float fStack_4ec;
  float fStack_4e8;
  float fStack_4e4;
  float fStack_4e0;
  float fStack_4dc;
  float local_4d8;
  float fStack_4d4;
  float fStack_4d0;
  float fStack_4cc;
  float fStack_4c8;
  float fStack_4c4;
  float fStack_4c0;
  float fStack_4bc;
  float local_4b8;
  float fStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  float fStack_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  float local_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  float fStack_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  float local_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float fStack_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  float local_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float fStack_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  float local_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float fStack_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float local_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  float fStack_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float local_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float local_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  undefined1 local_378 [8];
  float fStack_370;
  float fStack_36c;
  float fStack_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  float local_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float fStack_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  float local_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  undefined1 local_2d8 [8];
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  undefined1 local_2b8 [8];
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  undefined1 local_298 [8];
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 auVar89 [32];
  undefined1 auVar96 [32];
  undefined1 auVar104 [32];
  undefined1 auVar117 [32];
  undefined1 auVar124 [32];
  undefined1 auVar141 [32];
  undefined1 auVar143 [32];
  undefined1 auVar149 [32];
  undefined1 auVar154 [32];
  
  uVar39 = param_8 + 7;
  if (-1 < (int)param_8) {
    uVar39 = param_8;
  }
  if ((int)(uVar39 & 0xfffffff8) < 1) {
    uVar62 = 0;
    lVar52 = param_2;
    if ((int)param_8 < 1) {
      return;
    }
  }
  else {
    pauVar77 = (undefined1 (*) [16])(param_6 + 0x60);
    lVar55 = 0x40;
    uVar62 = 0;
    do {
      auVar87 = ___ymm_0000000000000006000000000000000700000001000000000000000200000000;
      auVar84._16_16_ = pauVar77[-2];
      auVar84._0_16_ = pauVar77[-6];
      auVar94._16_16_ = pauVar77[-1];
      auVar94._0_16_ = pauVar77[-5];
      auVar102._16_16_ = *pauVar77;
      auVar102._0_16_ = pauVar77[-4];
      auVar111._16_16_ = pauVar77[1];
      auVar111._0_16_ = pauVar77[-3];
      auVar95 = vunpcklps_avx(auVar84,auVar94);
      auVar84 = vunpckhps_avx(auVar84,auVar94);
      auVar85 = vunpcklps_avx(auVar102,auVar111);
      auVar94 = vunpckhps_avx(auVar102,auVar111);
      auVar86 = vunpcklpd_avx(auVar95,auVar85);
      auVar102 = vunpckhpd_avx(auVar95,auVar85);
      auVar96 = vunpcklpd_avx(auVar84,auVar94);
      auVar105 = vunpckhpd_avx(auVar84,auVar94);
      auVar136 = *(undefined1 (*) [16])(param_7 + -0x40 + lVar55);
      auVar108 = *(undefined1 (*) [16])(param_7 + -0x30 + lVar55);
      auVar90 = *(undefined1 (*) [16])(param_7 + -0x10 + lVar55);
      auVar112._16_16_ = auVar108;
      auVar112._0_16_ = auVar136;
      auVar101 = *(undefined1 (*) [16])(param_7 + 0x10 + lVar55);
      uVar42 = *(undefined4 *)(param_7 + -0x18 + lVar55);
      auVar144._20_4_ = uVar42;
      auVar144._16_4_ = uVar42;
      auVar144._24_4_ = uVar42;
      auVar144._28_4_ = uVar42;
      uVar42 = *(undefined4 *)(param_7 + -0x1c + lVar55);
      auVar144._4_4_ = uVar42;
      auVar144._0_4_ = uVar42;
      auVar144._8_4_ = uVar42;
      auVar144._12_4_ = uVar42;
      auVar146._16_16_ = auVar101;
      auVar146._0_16_ = *(undefined1 (*) [16])(param_7 + lVar55);
      auVar95._16_16_ = auVar136;
      auVar95._0_16_ = auVar108;
      auVar84 = vblendps_avx(auVar112,auVar95,0x24);
      auVar84 = vpermilps_avx(auVar84,
                              ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                             );
      auVar84 = vblendps_avx(auVar84,auVar144,0x88);
      auVar140._16_16_ = *(undefined1 (*) [16])(param_7 + lVar55);
      auVar140._0_16_ = auVar101;
      uVar42 = *(undefined4 *)(param_7 + -0xc + lVar55);
      auVar103._20_4_ = uVar42;
      auVar103._16_4_ = uVar42;
      auVar103._24_4_ = uVar42;
      auVar103._28_4_ = uVar42;
      auVar136 = vshufps_avx(auVar90,auVar90,0xec);
      auVar103._0_16_ = auVar136;
      auVar94 = vblendps_avx(auVar140,auVar146,0x44);
      auVar94 = vpermilps_avx(auVar94,
                              ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                             );
      auVar94 = vblendps_avx(auVar94,auVar103,0x13);
      auVar136 = *(undefined1 (*) [16])(param_7 + -0x20 + lVar55);
      auVar132._16_16_ = auVar90;
      auVar132._0_16_ = auVar136;
      auVar85._16_16_ = auVar136;
      auVar85._0_16_ = auVar108;
      auVar95 = vblendps_avx(auVar132,auVar112,0x24);
      auVar95 = vshufps_avx(auVar85,auVar95,0x21);
      auVar85 = vshufps_avx(auVar95,auVar132,0xc2);
      auVar95 = vshufps_avx(auVar140,auVar146,0xc4);
      auVar95 = vblendps_avx(auVar85,auVar95,0xe0);
      lVar63 = (longlong)(auVar84._0_4_ * 3);
      lVar52 = (longlong)(auVar84._4_4_ * 3);
      lVar65 = (longlong)(auVar84._8_4_ * 3);
      lVar58 = (longlong)(auVar84._12_4_ * 3);
      lVar80 = (longlong)(auVar94._0_4_ * 3);
      lVar56 = (longlong)(auVar94._4_4_ * 3);
      lVar76 = (longlong)(auVar94._8_4_ * 3);
      lVar72 = (longlong)(auVar94._12_4_ * 3);
      auVar136 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + lVar80 * 4)),
                               ZEXT416(*(uint *)(param_3 + lVar56 * 4)),0x10);
      auVar136 = vinsertps_avx(auVar136,ZEXT416(*(uint *)(param_3 + lVar76 * 4)),0x20);
      auVar136 = vinsertps_avx(auVar136,ZEXT416(*(uint *)(param_3 + lVar72 * 4)),0x30);
      auVar108 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + lVar63 * 4)),
                               ZEXT416(*(uint *)(param_3 + lVar52 * 4)),0x10);
      auVar108 = vinsertps_avx(auVar108,ZEXT416(*(uint *)(param_3 + lVar65 * 4)),0x20);
      auVar108 = vinsertps_avx(auVar108,ZEXT416(*(uint *)(param_3 + lVar58 * 4)),0x30);
      auVar90 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + 4 + lVar80 * 4)),
                              ZEXT416(*(uint *)(param_3 + 4 + lVar56 * 4)),0x10);
      auVar90 = vinsertps_avx(auVar90,ZEXT416(*(uint *)(param_3 + 4 + lVar76 * 4)),0x20);
      auVar90 = vinsertps_avx(auVar90,ZEXT416(*(uint *)(param_3 + 4 + lVar72 * 4)),0x30);
      auVar101 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + 4 + lVar63 * 4)),
                               ZEXT416(*(uint *)(param_3 + 4 + lVar52 * 4)),0x10);
      auVar101 = vinsertps_avx(auVar101,ZEXT416(*(uint *)(param_3 + 4 + lVar65 * 4)),0x20);
      auVar101 = vinsertps_avx(auVar101,ZEXT416(*(uint *)(param_3 + 4 + lVar58 * 4)),0x30);
      auVar145 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + 8 + lVar80 * 4)),
                               ZEXT416(*(uint *)(param_3 + 8 + lVar56 * 4)),0x10);
      auVar145 = vinsertps_avx(auVar145,ZEXT416(*(uint *)(param_3 + 8 + lVar76 * 4)),0x20);
      auVar145 = vinsertps_avx(auVar145,ZEXT416(*(uint *)(param_3 + 8 + lVar72 * 4)),0x30);
      auVar91 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + 8 + lVar63 * 4)),
                              ZEXT416(*(uint *)(param_3 + 8 + lVar52 * 4)),0x10);
      auVar91 = vinsertps_avx(auVar91,ZEXT416(*(uint *)(param_3 + 8 + lVar65 * 4)),0x20);
      auVar91 = vinsertps_avx(auVar91,ZEXT416(*(uint *)(param_3 + 8 + lVar58 * 4)),0x30);
      lVar53 = (longlong)(auVar84._16_4_ * 3);
      lVar43 = (longlong)(auVar84._20_4_ * 3);
      lVar40 = (longlong)(auVar84._24_4_ * 3);
      lVar74 = (longlong)(auVar84._28_4_ * 3);
      lVar66 = (longlong)(auVar94._16_4_ * 3);
      lVar47 = (longlong)(auVar94._20_4_ * 3);
      lVar64 = (longlong)(auVar94._24_4_ * 3);
      lVar59 = (longlong)(auVar94._28_4_ * 3);
      auVar92 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + lVar66 * 4)),
                              ZEXT416(*(uint *)(param_3 + lVar47 * 4)),0x10);
      auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)(param_3 + lVar64 * 4)),0x20);
      auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)(param_3 + lVar59 * 4)),0x30);
      auVar93 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + lVar53 * 4)),
                              ZEXT416(*(uint *)(param_3 + lVar43 * 4)),0x10);
      auVar93 = vinsertps_avx(auVar93,ZEXT416(*(uint *)(param_3 + lVar40 * 4)),0x20);
      auVar93 = vinsertps_avx(auVar93,ZEXT416(*(uint *)(param_3 + lVar74 * 4)),0x30);
      auVar109 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + 4 + lVar66 * 4)),
                               ZEXT416(*(uint *)(param_3 + 4 + lVar47 * 4)),0x10);
      auVar109 = vinsertps_avx(auVar109,ZEXT416(*(uint *)(param_3 + 4 + lVar64 * 4)),0x20);
      auVar109 = vinsertps_avx(auVar109,ZEXT416(*(uint *)(param_3 + 4 + lVar59 * 4)),0x30);
      auVar119 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + 4 + lVar53 * 4)),
                               ZEXT416(*(uint *)(param_3 + 4 + lVar43 * 4)),0x10);
      auVar119 = vinsertps_avx(auVar119,ZEXT416(*(uint *)(param_3 + 4 + lVar40 * 4)),0x20);
      auVar119 = vinsertps_avx(auVar119,ZEXT416(*(uint *)(param_3 + 4 + lVar74 * 4)),0x30);
      auVar137 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + 8 + lVar66 * 4)),
                               ZEXT416(*(uint *)(param_3 + 8 + lVar47 * 4)),0x10);
      auVar137 = vinsertps_avx(auVar137,ZEXT416(*(uint *)(param_3 + 8 + lVar64 * 4)),0x20);
      auVar138 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + lVar80 * 4)),
                               ZEXT416(*(uint *)(param_4 + lVar56 * 4)),0x10);
      auVar2 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + 4 + lVar80 * 4)),
                             ZEXT416(*(uint *)(param_4 + 4 + lVar56 * 4)),0x10);
      auVar3 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + 8 + lVar80 * 4)),
                             ZEXT416(*(uint *)(param_4 + 8 + lVar56 * 4)),0x10);
      auVar83 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + lVar80 * 4)),
                              ZEXT416(*(uint *)(param_5 + lVar56 * 4)),0x10);
      auVar4 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + 4 + lVar80 * 4)),
                             ZEXT416(*(uint *)(param_5 + 4 + lVar56 * 4)),0x10);
      auVar5 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + 8 + lVar80 * 4)),
                             ZEXT416(*(uint *)(param_5 + 8 + lVar56 * 4)),0x10);
      auVar138 = vinsertps_avx(auVar138,ZEXT416(*(uint *)(param_4 + lVar76 * 4)),0x20);
      auVar2 = vinsertps_avx(auVar2,ZEXT416(*(uint *)(param_4 + 4 + lVar76 * 4)),0x20);
      auVar3 = vinsertps_avx(auVar3,ZEXT416(*(uint *)(param_4 + 8 + lVar76 * 4)),0x20);
      auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(param_5 + lVar76 * 4)),0x20);
      auVar4 = vinsertps_avx(auVar4,ZEXT416(*(uint *)(param_5 + 4 + lVar76 * 4)),0x20);
      auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(param_5 + 8 + lVar76 * 4)),0x20);
      auVar138 = vinsertps_avx(auVar138,ZEXT416(*(uint *)(param_4 + lVar72 * 4)),0x30);
      auVar2 = vinsertps_avx(auVar2,ZEXT416(*(uint *)(param_4 + 4 + lVar72 * 4)),0x30);
      auVar3 = vinsertps_avx(auVar3,ZEXT416(*(uint *)(param_4 + 8 + lVar72 * 4)),0x30);
      auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(param_5 + lVar72 * 4)),0x30);
      auVar4 = vinsertps_avx(auVar4,ZEXT416(*(uint *)(param_5 + 4 + lVar72 * 4)),0x30);
      auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(param_5 + 8 + lVar72 * 4)),0x30);
      auVar6 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + lVar63 * 4)),
                             ZEXT416(*(uint *)(param_4 + lVar52 * 4)),0x10);
      auVar7 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + 4 + lVar63 * 4)),
                             ZEXT416(*(uint *)(param_4 + 4 + lVar52 * 4)),0x10);
      auVar8 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + 8 + lVar63 * 4)),
                             ZEXT416(*(uint *)(param_4 + 8 + lVar52 * 4)),0x10);
      auVar9 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + lVar63 * 4)),
                             ZEXT416(*(uint *)(param_5 + lVar52 * 4)),0x10);
      auVar110 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + 4 + lVar63 * 4)),
                               ZEXT416(*(uint *)(param_5 + 4 + lVar52 * 4)),0x10);
      auVar120 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + 8 + lVar63 * 4)),
                               ZEXT416(*(uint *)(param_5 + 8 + lVar52 * 4)),0x10);
      auVar6 = vinsertps_avx(auVar6,ZEXT416(*(uint *)(param_4 + lVar65 * 4)),0x20);
      auVar7 = vinsertps_avx(auVar7,ZEXT416(*(uint *)(param_4 + 4 + lVar65 * 4)),0x20);
      auVar8 = vinsertps_avx(auVar8,ZEXT416(*(uint *)(param_4 + 8 + lVar65 * 4)),0x20);
      auVar9 = vinsertps_avx(auVar9,ZEXT416(*(uint *)(param_5 + lVar65 * 4)),0x20);
      auVar110 = vinsertps_avx(auVar110,ZEXT416(*(uint *)(param_5 + 4 + lVar65 * 4)),0x20);
      auVar120 = vinsertps_avx(auVar120,ZEXT416(*(uint *)(param_5 + 8 + lVar65 * 4)),0x20);
      auVar6 = vinsertps_avx(auVar6,ZEXT416(*(uint *)(param_4 + lVar58 * 4)),0x30);
      auVar7 = vinsertps_avx(auVar7,ZEXT416(*(uint *)(param_4 + 4 + lVar58 * 4)),0x30);
      auVar8 = vinsertps_avx(auVar8,ZEXT416(*(uint *)(param_4 + 8 + lVar58 * 4)),0x30);
      auVar9 = vinsertps_avx(auVar9,ZEXT416(*(uint *)(param_5 + lVar58 * 4)),0x30);
      auVar110 = vinsertps_avx(auVar110,ZEXT416(*(uint *)(param_5 + 4 + lVar58 * 4)),0x30);
      auVar120 = vinsertps_avx(auVar120,ZEXT416(*(uint *)(param_5 + 8 + lVar58 * 4)),0x30);
      auVar137 = vinsertps_avx(auVar137,ZEXT416(*(uint *)(param_3 + 8 + lVar59 * 4)),0x30);
      auVar139 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + 8 + lVar53 * 4)),
                               ZEXT416(*(uint *)(param_3 + 8 + lVar43 * 4)),0x10);
      auVar139 = vinsertps_avx(auVar139,ZEXT416(*(uint *)(param_3 + 8 + lVar40 * 4)),0x20);
      auVar139 = vinsertps_avx(auVar139,ZEXT416(*(uint *)(param_3 + 8 + lVar74 * 4)),0x30);
      lVar72 = (longlong)(auVar85._0_4_ * 3);
      lVar63 = (longlong)(auVar85._4_4_ * 3);
      lVar65 = (longlong)(auVar85._8_4_ * 3);
      lVar58 = (longlong)(auVar95._16_4_ * 3);
      lVar80 = (longlong)(auVar95._20_4_ * 3);
      lVar76 = (longlong)(auVar95._24_4_ * 3);
      lVar56 = (longlong)(auVar95._28_4_ * 3);
      auVar147 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + lVar58 * 4)),
                               ZEXT416(*(uint *)(param_3 + lVar80 * 4)),0x10);
      auVar147 = vinsertps_avx(auVar147,ZEXT416(*(uint *)(param_3 + lVar76 * 4)),0x20);
      auVar147 = vinsertps_avx(auVar147,ZEXT416(*(uint *)(param_3 + lVar56 * 4)),0x30);
      lVar52 = (longlong)(auVar85._12_4_ * 3);
      auVar151 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + lVar72 * 4)),
                               ZEXT416(*(uint *)(param_3 + lVar63 * 4)),0x10);
      auVar151 = vinsertps_avx(auVar151,ZEXT416(*(uint *)(param_3 + lVar65 * 4)),0x20);
      auVar151 = vinsertps_avx(auVar151,ZEXT416(*(uint *)(param_3 + lVar52 * 4)),0x30);
      auVar10 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + 4 + lVar58 * 4)),
                              ZEXT416(*(uint *)(param_3 + 4 + lVar80 * 4)),0x10);
      auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_3 + 4 + lVar76 * 4)),0x20);
      auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_3 + 4 + lVar56 * 4)),0x30);
      auVar11 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + 4 + lVar72 * 4)),
                              ZEXT416(*(uint *)(param_3 + 4 + lVar63 * 4)),0x10);
      auVar11 = vinsertps_avx(auVar11,ZEXT416(*(uint *)(param_3 + 4 + lVar65 * 4)),0x20);
      auVar11 = vinsertps_avx(auVar11,ZEXT416(*(uint *)(param_3 + 4 + lVar52 * 4)),0x30);
      auVar12 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + 8 + lVar58 * 4)),
                              ZEXT416(*(uint *)(param_3 + 8 + lVar80 * 4)),0x10);
      auVar12 = vinsertps_avx(auVar12,ZEXT416(*(uint *)(param_3 + 8 + lVar76 * 4)),0x20);
      auVar12 = vinsertps_avx(auVar12,ZEXT416(*(uint *)(param_3 + 8 + lVar56 * 4)),0x30);
      auVar13 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + 8 + lVar72 * 4)),
                              ZEXT416(*(uint *)(param_3 + 8 + lVar63 * 4)),0x10);
      auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)(param_3 + 8 + lVar65 * 4)),0x20);
      auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)(param_3 + 8 + lVar52 * 4)),0x30);
      auVar14 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + lVar66 * 4)),
                              ZEXT416(*(uint *)(param_4 + lVar47 * 4)),0x10);
      auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(param_4 + lVar64 * 4)),0x20);
      auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(param_4 + lVar59 * 4)),0x30);
      auVar15 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + lVar53 * 4)),
                              ZEXT416(*(uint *)(param_4 + lVar43 * 4)),0x10);
      auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(param_4 + lVar40 * 4)),0x20);
      auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(param_4 + lVar74 * 4)),0x30);
      auVar16 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + 4 + lVar66 * 4)),
                              ZEXT416(*(uint *)(param_4 + 4 + lVar47 * 4)),0x10);
      auVar16 = vinsertps_avx(auVar16,ZEXT416(*(uint *)(param_4 + 4 + lVar64 * 4)),0x20);
      auVar16 = vinsertps_avx(auVar16,ZEXT416(*(uint *)(param_4 + 4 + lVar59 * 4)),0x30);
      auVar17 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + 4 + lVar53 * 4)),
                              ZEXT416(*(uint *)(param_4 + 4 + lVar43 * 4)),0x10);
      auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)(param_4 + 4 + lVar40 * 4)),0x20);
      auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)(param_4 + 4 + lVar74 * 4)),0x30);
      auVar18 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + 8 + lVar66 * 4)),
                              ZEXT416(*(uint *)(param_4 + 8 + lVar47 * 4)),0x10);
      auVar18 = vinsertps_avx(auVar18,ZEXT416(*(uint *)(param_4 + 8 + lVar64 * 4)),0x20);
      auVar18 = vinsertps_avx(auVar18,ZEXT416(*(uint *)(param_4 + 8 + lVar59 * 4)),0x30);
      auVar19 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + 8 + lVar53 * 4)),
                              ZEXT416(*(uint *)(param_4 + 8 + lVar43 * 4)),0x10);
      auVar19 = vinsertps_avx(auVar19,ZEXT416(*(uint *)(param_4 + 8 + lVar40 * 4)),0x20);
      auVar19 = vinsertps_avx(auVar19,ZEXT416(*(uint *)(param_4 + 8 + lVar74 * 4)),0x30);
      auVar20 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + lVar58 * 4)),
                              ZEXT416(*(uint *)(param_4 + lVar80 * 4)),0x10);
      auVar20 = vinsertps_avx(auVar20,ZEXT416(*(uint *)(param_4 + lVar76 * 4)),0x20);
      auVar20 = vinsertps_avx(auVar20,ZEXT416(*(uint *)(param_4 + lVar56 * 4)),0x30);
      auVar21 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + lVar72 * 4)),
                              ZEXT416(*(uint *)(param_4 + lVar63 * 4)),0x10);
      auVar21 = vinsertps_avx(auVar21,ZEXT416(*(uint *)(param_4 + lVar65 * 4)),0x20);
      auVar21 = vinsertps_avx(auVar21,ZEXT416(*(uint *)(param_4 + lVar52 * 4)),0x30);
      auVar22 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + 4 + lVar58 * 4)),
                              ZEXT416(*(uint *)(param_4 + 4 + lVar80 * 4)),0x10);
      auVar22 = vinsertps_avx(auVar22,ZEXT416(*(uint *)(param_4 + 4 + lVar76 * 4)),0x20);
      auVar22 = vinsertps_avx(auVar22,ZEXT416(*(uint *)(param_4 + 4 + lVar56 * 4)),0x30);
      auVar23 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + 4 + lVar72 * 4)),
                              ZEXT416(*(uint *)(param_4 + 4 + lVar63 * 4)),0x10);
      auVar23 = vinsertps_avx(auVar23,ZEXT416(*(uint *)(param_4 + 4 + lVar65 * 4)),0x20);
      auVar23 = vinsertps_avx(auVar23,ZEXT416(*(uint *)(param_4 + 4 + lVar52 * 4)),0x30);
      auVar24 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + 8 + lVar58 * 4)),
                              ZEXT416(*(uint *)(param_4 + 8 + lVar80 * 4)),0x10);
      auVar24 = vinsertps_avx(auVar24,ZEXT416(*(uint *)(param_4 + 8 + lVar76 * 4)),0x20);
      auVar24 = vinsertps_avx(auVar24,ZEXT416(*(uint *)(param_4 + 8 + lVar56 * 4)),0x30);
      auVar25 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + 8 + lVar72 * 4)),
                              ZEXT416(*(uint *)(param_4 + 8 + lVar63 * 4)),0x10);
      auVar25 = vinsertps_avx(auVar25,ZEXT416(*(uint *)(param_4 + 8 + lVar65 * 4)),0x20);
      auVar25 = vinsertps_avx(auVar25,ZEXT416(*(uint *)(param_4 + 8 + lVar52 * 4)),0x30);
      auVar26 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + lVar66 * 4)),
                              ZEXT416(*(uint *)(param_5 + lVar47 * 4)),0x10);
      auVar27 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + 4 + lVar66 * 4)),
                              ZEXT416(*(uint *)(param_5 + 4 + lVar47 * 4)),0x10);
      auVar28 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + 8 + lVar66 * 4)),
                              ZEXT416(*(uint *)(param_5 + 8 + lVar47 * 4)),0x10);
      auVar26 = vinsertps_avx(auVar26,ZEXT416(*(uint *)(param_5 + lVar64 * 4)),0x20);
      auVar27 = vinsertps_avx(auVar27,ZEXT416(*(uint *)(param_5 + 4 + lVar64 * 4)),0x20);
      auVar28 = vinsertps_avx(auVar28,ZEXT416(*(uint *)(param_5 + 8 + lVar64 * 4)),0x20);
      auVar26 = vinsertps_avx(auVar26,ZEXT416(*(uint *)(param_5 + lVar59 * 4)),0x30);
      auVar27 = vinsertps_avx(auVar27,ZEXT416(*(uint *)(param_5 + 4 + lVar59 * 4)),0x30);
      auVar28 = vinsertps_avx(auVar28,ZEXT416(*(uint *)(param_5 + 8 + lVar59 * 4)),0x30);
      auVar29 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + lVar53 * 4)),
                              ZEXT416(*(uint *)(param_5 + lVar43 * 4)),0x10);
      auVar30 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + 4 + lVar53 * 4)),
                              ZEXT416(*(uint *)(param_5 + 4 + lVar43 * 4)),0x10);
      local_5f8 = auVar120._0_4_;
      fStack_5f4 = auVar120._4_4_;
      fStack_5f0 = auVar120._8_4_;
      fStack_5ec = auVar120._12_4_;
      local_298._0_4_ = auVar5._0_4_;
      local_298._4_4_ = auVar5._4_4_;
      fStack_290 = auVar5._8_4_;
      fStack_28c = auVar5._12_4_;
      auVar5 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + 8 + lVar53 * 4)),
                             ZEXT416(*(uint *)(param_5 + 8 + lVar43 * 4)),0x10);
      auVar120 = vinsertps_avx(auVar29,ZEXT416(*(uint *)(param_5 + lVar40 * 4)),0x20);
      auVar29 = vinsertps_avx(auVar30,ZEXT416(*(uint *)(param_5 + 4 + lVar40 * 4)),0x20);
      auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(param_5 + 8 + lVar40 * 4)),0x20);
      auVar120 = vinsertps_avx(auVar120,ZEXT416(*(uint *)(param_5 + lVar74 * 4)),0x30);
      auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)(param_5 + 4 + lVar74 * 4)),0x30);
      auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(param_5 + 8 + lVar74 * 4)),0x30);
      auVar30 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + lVar58 * 4)),
                              ZEXT416(*(uint *)(param_5 + lVar80 * 4)),0x10);
      auVar30 = vinsertps_avx(auVar30,ZEXT416(*(uint *)(param_5 + lVar76 * 4)),0x20);
      auVar30 = vinsertps_avx(auVar30,ZEXT416(*(uint *)(param_5 + lVar56 * 4)),0x30);
      auVar31 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + lVar72 * 4)),
                              ZEXT416(*(uint *)(param_5 + lVar63 * 4)),0x10);
      auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(param_5 + lVar65 * 4)),0x20);
      auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(param_5 + lVar52 * 4)),0x30);
      auVar32 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + 4 + lVar58 * 4)),
                              ZEXT416(*(uint *)(param_5 + 4 + lVar80 * 4)),0x10);
      auVar33 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + 8 + lVar58 * 4)),
                              ZEXT416(*(uint *)(param_5 + 8 + lVar80 * 4)),0x10);
      auVar32 = vinsertps_avx(auVar32,ZEXT416(*(uint *)(param_5 + 4 + lVar76 * 4)),0x20);
      auVar33 = vinsertps_avx(auVar33,ZEXT416(*(uint *)(param_5 + 8 + lVar76 * 4)),0x20);
      auVar32 = vinsertps_avx(auVar32,ZEXT416(*(uint *)(param_5 + 4 + lVar56 * 4)),0x30);
      auVar33 = vinsertps_avx(auVar33,ZEXT416(*(uint *)(param_5 + 8 + lVar56 * 4)),0x30);
      auVar34 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + 4 + lVar72 * 4)),
                              ZEXT416(*(uint *)(param_5 + 4 + lVar63 * 4)),0x10);
      auVar35 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + 8 + lVar72 * 4)),
                              ZEXT416(*(uint *)(param_5 + 8 + lVar63 * 4)),0x10);
      auVar34 = vinsertps_avx(auVar34,ZEXT416(*(uint *)(param_5 + 4 + lVar65 * 4)),0x20);
      auVar35 = vinsertps_avx(auVar35,ZEXT416(*(uint *)(param_5 + 8 + lVar65 * 4)),0x20);
      auVar34 = vinsertps_avx(auVar34,ZEXT416(*(uint *)(param_5 + 4 + lVar52 * 4)),0x30);
      auVar35 = vinsertps_avx(auVar35,ZEXT416(*(uint *)(param_5 + 8 + lVar52 * 4)),0x30);
      local_408 = auVar105._0_4_;
      fStack_404 = auVar105._4_4_;
      fStack_400 = auVar105._8_4_;
      fStack_3fc = auVar105._12_4_;
      fStack_3f8 = auVar105._16_4_;
      fStack_3f4 = auVar105._20_4_;
      fStack_3f0 = auVar105._24_4_;
      fStack_3ec = auVar105._28_4_;
      local_518 = auVar108._0_4_;
      fStack_514 = auVar108._4_4_;
      fStack_510 = auVar108._8_4_;
      fStack_50c = auVar108._12_4_;
      fStack_508 = auVar136._0_4_;
      fStack_504 = auVar136._4_4_;
      fStack_500 = auVar136._8_4_;
      fStack_4fc = auVar136._12_4_;
      local_538 = auVar101._0_4_;
      fStack_534 = auVar101._4_4_;
      fStack_530 = auVar101._8_4_;
      fStack_52c = auVar101._12_4_;
      fStack_528 = auVar90._0_4_;
      fStack_524 = auVar90._4_4_;
      fStack_520 = auVar90._8_4_;
      fStack_51c = auVar90._12_4_;
      local_2f8 = auVar8._0_4_;
      fStack_2f4 = auVar8._4_4_;
      fStack_2f0 = auVar8._8_4_;
      fStack_2ec = auVar8._12_4_;
      fStack_2e8 = auVar3._0_4_;
      fStack_2e4 = auVar3._4_4_;
      fStack_2e0 = auVar3._8_4_;
      fStack_2dc = auVar3._12_4_;
      local_338 = auVar91._0_4_;
      fStack_334 = auVar91._4_4_;
      fStack_330 = auVar91._8_4_;
      fStack_32c = auVar91._12_4_;
      fStack_328 = auVar145._0_4_;
      fStack_324 = auVar145._4_4_;
      fStack_320 = auVar145._8_4_;
      fStack_31c = auVar145._12_4_;
      local_478 = auVar93._0_4_;
      fStack_474 = auVar93._4_4_;
      fStack_470 = auVar93._8_4_;
      fStack_46c = auVar93._12_4_;
      fStack_468 = auVar92._0_4_;
      fStack_464 = auVar92._4_4_;
      fStack_460 = auVar92._8_4_;
      fStack_45c = auVar92._12_4_;
      local_378._0_4_ = auVar17._0_4_;
      local_378._4_4_ = auVar17._4_4_;
      fStack_370 = auVar17._8_4_;
      fStack_36c = auVar17._12_4_;
      fStack_368 = auVar16._0_4_;
      fStack_364 = auVar16._4_4_;
      fStack_360 = auVar16._8_4_;
      fStack_35c = auVar16._12_4_;
      local_358 = auVar119._0_4_;
      fStack_354 = auVar119._4_4_;
      fStack_350 = auVar119._8_4_;
      fStack_34c = auVar119._12_4_;
      fStack_348 = auVar109._0_4_;
      fStack_344 = auVar109._4_4_;
      fStack_340 = auVar109._8_4_;
      fStack_33c = auVar109._12_4_;
      local_4d8 = auVar139._0_4_;
      fStack_4d4 = auVar139._4_4_;
      fStack_4d0 = auVar139._8_4_;
      fStack_4cc = auVar139._12_4_;
      fStack_4c8 = auVar137._0_4_;
      fStack_4c4 = auVar137._4_4_;
      fStack_4c0 = auVar137._8_4_;
      fStack_4bc = auVar137._12_4_;
      local_3c8 = auVar86._0_4_;
      fStack_3c4 = auVar86._4_4_;
      fStack_3c0 = auVar86._8_4_;
      fStack_3bc = auVar86._12_4_;
      fStack_3b8 = auVar86._16_4_;
      fStack_3b4 = auVar86._20_4_;
      fStack_3b0 = auVar86._24_4_;
      fStack_3ac = auVar86._28_4_;
      local_3e8 = auVar102._0_4_;
      fStack_3e4 = auVar102._4_4_;
      fStack_3e0 = auVar102._8_4_;
      fStack_3dc = auVar102._12_4_;
      fStack_3d8 = auVar102._16_4_;
      fStack_3d4 = auVar102._20_4_;
      fStack_3d0 = auVar102._24_4_;
      fStack_3cc = auVar102._28_4_;
      local_318 = auVar21._0_4_;
      fStack_314 = auVar21._4_4_;
      fStack_310 = auVar21._8_4_;
      fStack_30c = auVar21._12_4_;
      fStack_308 = auVar20._0_4_;
      fStack_304 = auVar20._4_4_;
      fStack_300 = auVar20._8_4_;
      fStack_2fc = auVar20._12_4_;
      local_498 = auVar151._0_4_;
      fStack_494 = auVar151._4_4_;
      fStack_490 = auVar151._8_4_;
      fStack_48c = auVar151._12_4_;
      fStack_488 = auVar147._0_4_;
      fStack_484 = auVar147._4_4_;
      fStack_480 = auVar147._8_4_;
      fStack_47c = auVar147._12_4_;
      local_558 = auVar23._0_4_;
      fStack_554 = auVar23._4_4_;
      fStack_550 = auVar23._8_4_;
      fStack_54c = auVar23._12_4_;
      fStack_548 = auVar22._0_4_;
      fStack_544 = auVar22._4_4_;
      fStack_540 = auVar22._8_4_;
      fStack_53c = auVar22._12_4_;
      local_4b8 = auVar11._0_4_;
      fStack_4b4 = auVar11._4_4_;
      fStack_4b0 = auVar11._8_4_;
      fStack_4ac = auVar11._12_4_;
      fStack_4a8 = auVar10._0_4_;
      fStack_4a4 = auVar10._4_4_;
      fStack_4a0 = auVar10._8_4_;
      fStack_49c = auVar10._12_4_;
      local_5d8 = auVar13._0_4_;
      fStack_5d4 = auVar13._4_4_;
      fStack_5d0 = auVar13._8_4_;
      fStack_5cc = auVar13._12_4_;
      fStack_5c8 = auVar12._0_4_;
      fStack_5c4 = auVar12._4_4_;
      fStack_5c0 = auVar12._8_4_;
      fStack_5bc = auVar12._12_4_;
      local_3a8 = auVar96._0_4_;
      fStack_3a4 = auVar96._4_4_;
      fStack_3a0 = auVar96._8_4_;
      fStack_39c = auVar96._12_4_;
      fStack_398 = auVar96._16_4_;
      fStack_394 = auVar96._20_4_;
      fStack_390 = auVar96._24_4_;
      fStack_38c = auVar96._28_4_;
      auVar136._0_4_ =
           local_3e8 * (auVar15._0_4_ * local_408 + local_478) +
           local_3c8 * (auVar6._0_4_ * local_408 + local_518) +
           local_3a8 * (local_408 * local_318 + local_498);
      auVar136._4_4_ =
           fStack_3e4 * (auVar15._4_4_ * fStack_404 + fStack_474) +
           fStack_3c4 * (auVar6._4_4_ * fStack_404 + fStack_514) +
           fStack_3a4 * (fStack_404 * fStack_314 + fStack_494);
      auVar136._8_4_ =
           fStack_3e0 * (auVar15._8_4_ * fStack_400 + fStack_470) +
           fStack_3c0 * (auVar6._8_4_ * fStack_400 + fStack_510) +
           fStack_3a0 * (fStack_400 * fStack_310 + fStack_490);
      auVar136._12_4_ =
           fStack_3dc * (auVar15._12_4_ * fStack_3fc + fStack_46c) +
           fStack_3bc * (auVar6._12_4_ * fStack_3fc + fStack_50c) +
           fStack_39c * (fStack_3fc * fStack_30c + fStack_48c);
      auVar141._16_4_ =
           fStack_3d8 * (auVar14._0_4_ * fStack_3f8 + fStack_468) +
           fStack_3b8 * (auVar138._0_4_ * fStack_3f8 + fStack_508) +
           fStack_398 * (fStack_3f8 * fStack_308 + fStack_488);
      auVar141._0_16_ = auVar136;
      auVar141._20_4_ =
           fStack_3d4 * (auVar14._4_4_ * fStack_3f4 + fStack_464) +
           fStack_3b4 * (auVar138._4_4_ * fStack_3f4 + fStack_504) +
           fStack_394 * (fStack_3f4 * fStack_304 + fStack_484);
      auVar141._24_4_ =
           fStack_3d0 * (auVar14._8_4_ * fStack_3f0 + fStack_460) +
           fStack_3b0 * (auVar138._8_4_ * fStack_3f0 + fStack_500) +
           fStack_390 * (fStack_3f0 * fStack_300 + fStack_480);
      auVar141._28_4_ =
           fStack_3cc * (auVar14._12_4_ * fStack_3ec + fStack_45c) +
           fStack_3ac * (auVar138._12_4_ * fStack_3ec + fStack_4fc) +
           fStack_38c * (fStack_3ec * fStack_2fc + fStack_47c);
      auVar108._0_4_ =
           local_3e8 * (local_408 * (float)local_378._0_4_ + local_358) +
           local_3c8 * (auVar7._0_4_ * local_408 + local_538) +
           local_3a8 * (local_408 * local_558 + local_4b8);
      auVar108._4_4_ =
           fStack_3e4 * (fStack_404 * (float)local_378._4_4_ + fStack_354) +
           fStack_3c4 * (auVar7._4_4_ * fStack_404 + fStack_534) +
           fStack_3a4 * (fStack_404 * fStack_554 + fStack_4b4);
      auVar108._8_4_ =
           fStack_3e0 * (fStack_400 * fStack_370 + fStack_350) +
           fStack_3c0 * (auVar7._8_4_ * fStack_400 + fStack_530) +
           fStack_3a0 * (fStack_400 * fStack_550 + fStack_4b0);
      auVar108._12_4_ =
           fStack_3dc * (fStack_3fc * fStack_36c + fStack_34c) +
           fStack_3bc * (auVar7._12_4_ * fStack_3fc + fStack_52c) +
           fStack_39c * (fStack_3fc * fStack_54c + fStack_4ac);
      auVar152._16_4_ =
           fStack_3d8 * (fStack_3f8 * fStack_368 + fStack_348) +
           fStack_3b8 * (auVar2._0_4_ * fStack_3f8 + fStack_528) +
           fStack_398 * (fStack_3f8 * fStack_548 + fStack_4a8);
      auVar152._0_16_ = auVar108;
      auVar152._20_4_ =
           fStack_3d4 * (fStack_3f4 * fStack_364 + fStack_344) +
           fStack_3b4 * (auVar2._4_4_ * fStack_3f4 + fStack_524) +
           fStack_394 * (fStack_3f4 * fStack_544 + fStack_4a4);
      auVar152._24_4_ =
           fStack_3d0 * (fStack_3f0 * fStack_360 + fStack_340) +
           fStack_3b0 * (auVar2._8_4_ * fStack_3f0 + fStack_520) +
           fStack_390 * (fStack_3f0 * fStack_540 + fStack_4a0);
      auVar152._28_4_ =
           fStack_3cc * (fStack_3ec * fStack_35c + fStack_33c) +
           fStack_3ac * (auVar2._12_4_ * fStack_3ec + fStack_51c) +
           fStack_38c * (fStack_3ec * fStack_53c + fStack_49c);
      auVar121._0_4_ =
           local_3e8 * (auVar19._0_4_ * local_408 + local_4d8) +
           (local_408 * local_2f8 + local_338) * local_3c8 +
           local_3a8 * (auVar25._0_4_ * local_408 + local_5d8);
      auVar121._4_4_ =
           fStack_3e4 * (auVar19._4_4_ * fStack_404 + fStack_4d4) +
           (fStack_404 * fStack_2f4 + fStack_334) * fStack_3c4 +
           fStack_3a4 * (auVar25._4_4_ * fStack_404 + fStack_5d4);
      auVar121._8_4_ =
           fStack_3e0 * (auVar19._8_4_ * fStack_400 + fStack_4d0) +
           (fStack_400 * fStack_2f0 + fStack_330) * fStack_3c0 +
           fStack_3a0 * (auVar25._8_4_ * fStack_400 + fStack_5d0);
      auVar121._12_4_ =
           fStack_3dc * (auVar19._12_4_ * fStack_3fc + fStack_4cc) +
           (fStack_3fc * fStack_2ec + fStack_32c) * fStack_3bc +
           fStack_39c * (auVar25._12_4_ * fStack_3fc + fStack_5cc);
      auVar121._16_4_ =
           fStack_3d8 * (auVar18._0_4_ * fStack_3f8 + fStack_4c8) +
           (fStack_3f8 * fStack_2e8 + fStack_328) * fStack_3b8 +
           fStack_398 * (auVar24._0_4_ * fStack_3f8 + fStack_5c8);
      auVar121._20_4_ =
           fStack_3d4 * (auVar18._4_4_ * fStack_3f4 + fStack_4c4) +
           (fStack_3f4 * fStack_2e4 + fStack_324) * fStack_3b4 +
           fStack_394 * (auVar24._4_4_ * fStack_3f4 + fStack_5c4);
      auVar121._24_4_ =
           fStack_3d0 * (auVar18._8_4_ * fStack_3f0 + fStack_4c0) +
           (fStack_3f0 * fStack_2e0 + fStack_320) * fStack_3b0 +
           fStack_390 * (auVar24._8_4_ * fStack_3f0 + fStack_5c0);
      auVar121._28_4_ =
           fStack_3cc * (auVar18._12_4_ * fStack_3ec + fStack_4bc) +
           (fStack_3ec * fStack_2dc + fStack_31c) * fStack_3ac +
           fStack_38c * (auVar24._12_4_ * fStack_3ec + fStack_5bc);
      local_598 = auVar9._0_4_;
      fStack_594 = auVar9._4_4_;
      fStack_590 = auVar9._8_4_;
      fStack_58c = auVar9._12_4_;
      fStack_588 = auVar83._0_4_;
      fStack_584 = auVar83._4_4_;
      fStack_580 = auVar83._8_4_;
      fStack_57c = auVar83._12_4_;
      local_5b8 = auVar110._0_4_;
      fStack_5b4 = auVar110._4_4_;
      fStack_5b0 = auVar110._8_4_;
      fStack_5ac = auVar110._12_4_;
      fStack_5a8 = auVar4._0_4_;
      fStack_5a4 = auVar4._4_4_;
      fStack_5a0 = auVar4._8_4_;
      fStack_59c = auVar4._12_4_;
      local_678 = auVar31._0_4_;
      fStack_674 = auVar31._4_4_;
      fStack_670 = auVar31._8_4_;
      fStack_66c = auVar31._12_4_;
      fStack_668 = auVar30._0_4_;
      fStack_664 = auVar30._4_4_;
      fStack_660 = auVar30._8_4_;
      fStack_65c = auVar30._12_4_;
      auVar90._0_4_ = local_3c8 * local_598 + local_3e8 * auVar120._0_4_ + local_3a8 * local_678;
      auVar90._4_4_ =
           fStack_3c4 * fStack_594 + fStack_3e4 * auVar120._4_4_ + fStack_3a4 * fStack_674;
      auVar90._8_4_ =
           fStack_3c0 * fStack_590 + fStack_3e0 * auVar120._8_4_ + fStack_3a0 * fStack_670;
      auVar90._12_4_ =
           fStack_3bc * fStack_58c + fStack_3dc * auVar120._12_4_ + fStack_39c * fStack_66c;
      auVar96._16_4_ =
           fStack_3b8 * fStack_588 + fStack_3d8 * auVar26._0_4_ + fStack_398 * fStack_668;
      auVar96._0_16_ = auVar90;
      auVar96._20_4_ =
           fStack_3b4 * fStack_584 + fStack_3d4 * auVar26._4_4_ + fStack_394 * fStack_664;
      auVar96._24_4_ =
           fStack_3b0 * fStack_580 + fStack_3d0 * auVar26._8_4_ + fStack_390 * fStack_660;
      auVar96._28_4_ =
           fStack_3ac * fStack_57c + fStack_3cc * auVar26._12_4_ + fStack_38c * fStack_65c;
      auVar101._0_4_ = local_3c8 * local_5b8 + local_3e8 * auVar29._0_4_ + local_3a8 * auVar34._0_4_
      ;
      auVar101._4_4_ =
           fStack_3c4 * fStack_5b4 + fStack_3e4 * auVar29._4_4_ + fStack_3a4 * auVar34._4_4_;
      auVar101._8_4_ =
           fStack_3c0 * fStack_5b0 + fStack_3e0 * auVar29._8_4_ + fStack_3a0 * auVar34._8_4_;
      auVar101._12_4_ =
           fStack_3bc * fStack_5ac + fStack_3dc * auVar29._12_4_ + fStack_39c * auVar34._12_4_;
      auVar104._16_4_ =
           fStack_3b8 * fStack_5a8 + fStack_3d8 * auVar27._0_4_ + fStack_398 * auVar32._0_4_;
      auVar104._0_16_ = auVar101;
      auVar104._20_4_ =
           fStack_3b4 * fStack_5a4 + fStack_3d4 * auVar27._4_4_ + fStack_394 * auVar32._4_4_;
      auVar104._24_4_ =
           fStack_3b0 * fStack_5a0 + fStack_3d0 * auVar27._8_4_ + fStack_390 * auVar32._8_4_;
      auVar104._28_4_ =
           fStack_3ac * fStack_59c + fStack_3cc * auVar27._12_4_ + fStack_38c * auVar32._12_4_;
      auVar86._0_4_ = local_5f8 * local_3c8 + local_3e8 * auVar5._0_4_ + local_3a8 * auVar35._0_4_;
      auVar86._4_4_ =
           fStack_5f4 * fStack_3c4 + fStack_3e4 * auVar5._4_4_ + fStack_3a4 * auVar35._4_4_;
      auVar86._8_4_ =
           fStack_5f0 * fStack_3c0 + fStack_3e0 * auVar5._8_4_ + fStack_3a0 * auVar35._8_4_;
      auVar86._12_4_ =
           fStack_5ec * fStack_3bc + fStack_3dc * auVar5._12_4_ + fStack_39c * auVar35._12_4_;
      auVar86._16_4_ =
           (float)local_298._0_4_ * fStack_3b8 + fStack_3d8 * auVar28._0_4_ +
           fStack_398 * auVar33._0_4_;
      auVar86._20_4_ =
           (float)local_298._4_4_ * fStack_3b4 + fStack_3d4 * auVar28._4_4_ +
           fStack_394 * auVar33._4_4_;
      auVar86._24_4_ =
           fStack_290 * fStack_3b0 + fStack_3d0 * auVar28._8_4_ + fStack_390 * auVar33._8_4_;
      auVar86._28_4_ =
           fStack_28c * fStack_3ac + fStack_3cc * auVar28._12_4_ + fStack_38c * auVar33._12_4_;
      auVar113._16_16_ = auVar108;
      auVar113._0_16_ = auVar136;
      auVar95 = vshufpd_avx(auVar141,auVar113,2);
      auVar145 = auVar152._16_16_;
      auVar136 = vshufpd_avx(auVar108,auVar145,1);
      auVar85 = vperm2f128_avx(auVar121,auVar121,1);
      auVar84 = vshufps_avx(auVar121,auVar85,0x30);
      auVar84 = vshufps_avx(auVar85,auVar84,0x29);
      auVar84 = vblendps_avx(auVar84,ZEXT1632(auVar136),7);
      auVar102 = vperm2f128_avx(auVar84,auVar84,1);
      auVar94 = vunpcklpd_avx(auVar102,auVar121);
      auVar85 = vshufps_avx(auVar85,auVar94,0x24);
      auVar94 = vperm2f128_avx(auVar95,auVar95,1);
      auVar94 = vblendps_avx(auVar95,auVar94,0x44);
      auVar94 = vpermilps_avx(auVar94,
                              ___ymm_0000000000000006000000000000000700000001000000000000000200000000
                             );
      auVar94 = vblendps_avx(auVar94,auVar85,0xa4);
      *(undefined1 (*) [16])(param_1 + -0x30 + lVar55) = auVar94._16_16_;
      *(undefined1 (*) [16])(param_1 + -0x40 + lVar55) = auVar94._0_16_;
      auVar105 = ___ymm_0000000000000007000000000000000000000000000000010000000000000000;
      auVar94 = vpermilps_avx(auVar84,
                              ___ymm_0000000000000007000000000000000000000000000000010000000000000000
                             );
      auVar84 = vshufps_avx(auVar102,auVar102,0xa9);
      auVar84 = vblendps_avx(auVar84,auVar94,0x44);
      auVar94 = vshufpd_avx(auVar95,auVar95,1);
      auVar84 = vblendps_avx(auVar84,auVar94,0x92);
      *(undefined1 (*) [16])(param_1 + -0x10 + lVar55) = auVar84._16_16_;
      *(undefined1 (*) [16])(param_1 + -0x20 + lVar55) = auVar84._0_16_;
      auVar136 = vshufps_avx(auVar141._16_16_,auVar145,0x9e);
      auVar108 = vshufps_avx(auVar145,auVar145,0xff);
      auVar133._16_16_ = auVar108;
      auVar133._0_16_ = auVar136;
      auVar94 = vperm2f128_avx(auVar121,ZEXT1632(auVar136),0x21);
      auVar84 = vblendps_avx(auVar133,auVar121,0xe0);
      auVar94 = vshufps_avx(auVar94,auVar84,0x21);
      auVar84 = vshufps_avx(auVar94,auVar84,0xc2);
      *(undefined1 (*) [16])(param_1 + 0x10 + lVar55) = auVar84._16_16_;
      *(undefined1 (*) [16])(param_1 + lVar55) = auVar84._0_16_;
      auVar114._16_16_ = auVar101;
      auVar114._0_16_ = auVar90;
      auVar95 = vshufpd_avx(auVar96,auVar114,2);
      auVar108 = auVar104._16_16_;
      auVar136 = vshufpd_avx(auVar101,auVar108,1);
      auVar85 = vperm2f128_avx(auVar86,auVar86,1);
      auVar84 = vshufps_avx(auVar86,auVar85,0x30);
      auVar84 = vshufps_avx(auVar85,auVar84,0x29);
      auVar84 = vblendps_avx(auVar84,ZEXT1632(auVar136),7);
      auVar102 = vperm2f128_avx(auVar84,auVar84,1);
      auVar94 = vunpcklpd_avx(auVar102,auVar86);
      auVar85 = vshufps_avx(auVar85,auVar94,0x24);
      auVar94 = vperm2f128_avx(auVar95,auVar95,1);
      auVar94 = vblendps_avx(auVar95,auVar94,0x44);
      auVar94 = vpermilps_avx(auVar94,auVar87);
      auVar94 = vblendps_avx(auVar94,auVar85,0xa4);
      *(undefined1 (*) [16])(param_2 + -0x30 + lVar55) = auVar94._16_16_;
      *(undefined1 (*) [16])(param_2 + -0x40 + lVar55) = auVar94._0_16_;
      auVar94 = vpermilps_avx(auVar84,auVar105);
      auVar84 = vshufps_avx(auVar102,auVar102,0xa9);
      auVar84 = vblendps_avx(auVar84,auVar94,0x44);
      auVar94 = vshufpd_avx(auVar95,auVar95,1);
      auVar84 = vblendps_avx(auVar84,auVar94,0x92);
      *(undefined1 (*) [16])(param_2 + -0x10 + lVar55) = auVar84._16_16_;
      *(undefined1 (*) [16])(param_2 + -0x20 + lVar55) = auVar84._0_16_;
      auVar136 = vshufps_avx(auVar96._16_16_,auVar108,0x9e);
      auVar108 = vshufps_avx(auVar108,auVar108,0xff);
      auVar105._16_16_ = auVar108;
      auVar105._0_16_ = auVar136;
      auVar94 = vperm2f128_avx(auVar86,ZEXT1632(auVar136),0x21);
      auVar84 = vblendps_avx(auVar105,auVar86,0xe0);
      auVar94 = vshufps_avx(auVar94,auVar84,0x21);
      auVar84 = vshufps_avx(auVar94,auVar84,0xc2);
      *(undefined1 (*) [16])(param_2 + 0x10 + lVar55) = auVar84._16_16_;
      *(undefined1 (*) [16])(param_2 + lVar55) = auVar84._0_16_;
      lVar55 = lVar55 + 0x60;
      pauVar77 = pauVar77 + 8;
      uVar62 = uVar62 + 8;
    } while ((int)uVar62 < (int)(uVar39 & 0xfffffff8));
    if ((int)param_8 <= (int)uVar62) {
      return;
    }
  }
  auVar84 = ___ymm_0000000000000006000000000000000700000001000000000000000200000000;
  auVar136 = vpshufd_avx(ZEXT416(uVar62),0);
  auVar87._16_16_ = auVar136;
  auVar87._0_16_ = auVar136;
  auVar90 = vpshufd_avx(ZEXT416(param_8),0);
  uVar54 = (ulonglong)uVar62;
  pauVar77 = (undefined1 (*) [16])(param_6 + uVar54 * 0x10);
  auVar101 = SUB3216(auVar87 | 
                     ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar145 = SUB3216(auVar87 | 
                     ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar136 = vpcmpgtd_avx(auVar90,auVar145);
  auVar108 = vpcmpgtd_avx(auVar90,auVar101);
  auVar88._16_16_ = auVar136;
  auVar88._0_16_ = auVar108;
  uVar39 = vmovmskps_avx(auVar88);
  if (uVar39 == 0xff) {
    auVar97._16_16_ = pauVar77[4];
    auVar97._0_16_ = *pauVar77;
    auVar106._16_16_ = pauVar77[5];
    auVar106._0_16_ = pauVar77[1];
    auVar115._16_16_ = pauVar77[6];
    auVar115._0_16_ = pauVar77[2];
    auVar122._16_16_ = pauVar77[7];
    auVar122._0_16_ = pauVar77[3];
    auVar85 = vunpcklps_avx(auVar97,auVar106);
    auVar94 = vunpckhps_avx(auVar97,auVar106);
    auVar102 = vunpcklps_avx(auVar115,auVar122);
    auVar95 = vunpckhps_avx(auVar115,auVar122);
    _local_298 = vunpcklpd_avx(auVar85,auVar102);
    _local_2b8 = vunpckhpd_avx(auVar85,auVar102);
    _local_2d8 = vunpcklpd_avx(auVar94,auVar95);
    _local_378 = vunpckhpd_avx(auVar94,auVar95);
    auVar136 = *(undefined1 (*) [16])(param_7 + uVar54 * 0xc);
    auVar108 = *(undefined1 (*) [16])(param_7 + 0x10 + uVar54 * 0xc);
    auVar91 = *(undefined1 (*) [16])(param_7 + 0x30 + uVar54 * 0xc);
    auVar92 = *(undefined1 (*) [16])(param_7 + 0x50 + uVar54 * 0xc);
    auVar93 = *(undefined1 (*) [16])(param_7 + 0x40 + uVar54 * 0xc);
    uVar42 = *(undefined4 *)(param_7 + 0x28 + uVar54 * 0xc);
    auVar148._20_4_ = uVar42;
    auVar148._16_4_ = uVar42;
    auVar148._24_4_ = uVar42;
    auVar148._28_4_ = uVar42;
    uVar42 = *(undefined4 *)(param_7 + 0x24 + uVar54 * 0xc);
    auVar148._4_4_ = uVar42;
    auVar148._0_4_ = uVar42;
    auVar148._8_4_ = uVar42;
    auVar148._12_4_ = uVar42;
    uVar42 = *(undefined4 *)(param_7 + 0x34 + uVar54 * 0xc);
    auVar123._20_4_ = uVar42;
    auVar123._16_4_ = uVar42;
    auVar123._24_4_ = uVar42;
    auVar123._28_4_ = uVar42;
    auVar153._16_16_ = auVar108;
    auVar153._0_16_ = auVar136;
    auVar116._16_16_ = auVar91;
    auVar116._0_16_ = *(undefined1 (*) [16])(param_7 + 0x20 + uVar54 * 0xc);
    auVar98._16_16_ = auVar136;
    auVar98._0_16_ = auVar108;
    auVar94 = vblendps_avx(auVar153,auVar98,0x24);
    auVar94 = vpermilps_avx(auVar94,
                            ___ymm_0000000000000007000000040000000500000000000000020000000300000000)
    ;
    auVar150._16_16_ = auVar92;
    auVar150._0_16_ = auVar93;
    auVar94 = vblendps_avx(auVar94,auVar148,0x88);
    auVar134._16_16_ = auVar93;
    auVar134._0_16_ = auVar92;
    auVar95 = vblendps_avx(auVar134,auVar150,0x44);
    auVar95 = vpermilps_avx(auVar95,
                            ___ymm_0000000600000007000000040000000000000001000000020000000000000000)
    ;
    auVar136 = vshufps_avx(auVar91,auVar91,0xec);
    auVar123._0_16_ = auVar136;
    auVar95 = vblendps_avx(auVar95,auVar123,0x13);
    auVar142._16_16_ = auVar95._0_16_;
    auVar142._0_16_ = auVar94._0_16_;
    auVar85 = vperm2f128_avx(auVar94,auVar95,0x31);
    auVar94 = vblendps_avx(auVar116,auVar153,0x24);
    auVar94 = vshufps_avx(ZEXT1632(auVar108),auVar94,0x21);
    auVar94 = vshufps_avx(auVar94,auVar116,0xc2);
    auVar95 = vshufps_avx(auVar134,auVar150,0xc4);
    auVar94 = vblendps_avx(auVar94,auVar95,0xe0);
  }
  else {
    auVar136 = vpcmpgtd_avx(auVar90,auVar145);
    auVar108 = vpcmpgtd_avx(auVar90,auVar101);
    uVar118 = auVar108._0_4_;
    auVar91._0_4_ =
         uVar118 & ___ymm_0000007000000060000000500000004000000030000000200000001000000000;
    uVar125 = auVar108._4_4_;
    auVar91._4_4_ = uVar125 & _UNK_150b50e44;
    uVar126 = auVar108._8_4_;
    auVar91._8_4_ = uVar126 & _UNK_150b50e48;
    uVar127 = auVar108._12_4_;
    auVar91._12_4_ = uVar127 & _UNK_150b50e4c;
    uVar128 = auVar136._0_4_;
    uVar129 = auVar136._4_4_;
    uVar130 = auVar136._8_4_;
    uVar131 = auVar136._12_4_;
    uVar62 = vextractps_avx(auVar91,1);
    uVar45 = (undefined4)((ulonglong)param_1 >> 0x20);
    uVar42 = vextractps_avx(auVar91,2);
    uVar51 = (undefined4)((ulonglong)lVar52 >> 0x20);
    uVar46 = vextractps_avx(auVar91,3);
    auVar136 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar77 + (uVar128 & _UNK_150b50e50))),
                             ZEXT416(*(uint *)(*pauVar77 + (uVar129 & _UNK_150b50e54))),0x10);
    auVar136 = vinsertps_avx(auVar136,ZEXT416(*(uint *)(*pauVar77 + (uVar130 & _UNK_150b50e58))),
                             0x20);
    auVar136 = vinsertps_avx(auVar136,ZEXT416(*(uint *)(*pauVar77 + (uVar131 & _UNK_150b50e5c))),
                             0x30);
    auVar108 = vinsertps_avx(ZEXT416(*(uint *)*pauVar77),ZEXT416(*(uint *)(*pauVar77 + uVar62)),0x10
                            );
    auVar108 = vinsertps_avx(auVar108,ZEXT416(*(uint *)(*pauVar77 + CONCAT44(uVar45,uVar42))),0x20);
    auVar108 = vinsertps_avx(auVar108,ZEXT416(*(uint *)(*pauVar77 + CONCAT44(uVar51,uVar46))),0x30);
    auVar92._0_4_ =
         uVar118 & ___ymm_0000007400000064000000540000004400000034000000240000001400000004;
    auVar92._4_4_ = uVar125 & _UNK_150b50e64;
    auVar92._8_4_ = uVar126 & _UNK_150b50e68;
    auVar92._12_4_ = uVar127 & _UNK_150b50e6c;
    uVar62 = vextractps_avx(auVar92,1);
    uVar42 = vextractps_avx(auVar92,2);
    uVar46 = vextractps_avx(auVar92,3);
    auVar91 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar77 + (uVar128 & _UNK_150b50e70))),
                            ZEXT416(*(uint *)(*pauVar77 + (uVar129 & _UNK_150b50e74))),0x10);
    auVar91 = vinsertps_avx(auVar91,ZEXT416(*(uint *)(*pauVar77 + (uVar130 & _UNK_150b50e78))),0x20)
    ;
    auVar91 = vinsertps_avx(auVar91,ZEXT416(*(uint *)(*pauVar77 + (uVar131 & _UNK_150b50e7c))),0x30)
    ;
    auVar92 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar77 + auVar92._0_4_)),
                            ZEXT416(*(uint *)(*pauVar77 + uVar62)),0x10);
    auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)(*pauVar77 + CONCAT44(uVar45,uVar42))),0x20);
    auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)(*pauVar77 + CONCAT44(uVar51,uVar46))),0x30);
    auVar137._0_4_ =
         uVar118 & ___ymm_0000007800000068000000580000004800000038000000280000001800000008;
    auVar137._4_4_ = uVar125 & _UNK_150b50e84;
    auVar137._8_4_ = uVar126 & _UNK_150b50e88;
    auVar137._12_4_ = uVar127 & _UNK_150b50e8c;
    uVar62 = vextractps_avx(auVar137,1);
    uVar42 = vextractps_avx(auVar137,2);
    register0x00001290 = auVar136;
    _local_298 = auVar108;
    uVar46 = vextractps_avx(auVar137,3);
    auVar136 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar77 + (uVar128 & _UNK_150b50e90))),
                             ZEXT416(*(uint *)(*pauVar77 + (uVar129 & _UNK_150b50e94))),0x10);
    auVar136 = vinsertps_avx(auVar136,ZEXT416(*(uint *)(*pauVar77 + (uVar130 & _UNK_150b50e98))),
                             0x20);
    auVar136 = vinsertps_avx(auVar136,ZEXT416(*(uint *)(*pauVar77 + (uVar131 & _UNK_150b50e9c))),
                             0x30);
    auVar108 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar77 + auVar137._0_4_)),
                             ZEXT416(*(uint *)(*pauVar77 + uVar62)),0x10);
    auVar108 = vinsertps_avx(auVar108,ZEXT416(*(uint *)(*pauVar77 + CONCAT44(uVar45,uVar42))),0x20);
    auVar108 = vinsertps_avx(auVar108,ZEXT416(*(uint *)(*pauVar77 + CONCAT44(uVar51,uVar46))),0x30);
    auVar138._0_4_ =
         uVar118 & ___ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c;
    auVar138._4_4_ = uVar125 & _UNK_150b50ea4;
    auVar138._8_4_ = uVar126 & _UNK_150b50ea8;
    auVar138._12_4_ = uVar127 & _UNK_150b50eac;
    uVar62 = vextractps_avx(auVar138,1);
    uVar42 = vextractps_avx(auVar138,2);
    register0x00001250 = auVar91;
    _local_2b8 = auVar92;
    uVar46 = vextractps_avx(auVar138,3);
    auVar91 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar77 + (uVar128 & _UNK_150b50eb0))),
                            ZEXT416(*(uint *)(*pauVar77 + (uVar129 & _UNK_150b50eb4))),0x10);
    auVar91 = vinsertps_avx(auVar91,ZEXT416(*(uint *)(*pauVar77 + (uVar130 & _UNK_150b50eb8))),0x20)
    ;
    auVar91 = vinsertps_avx(auVar91,ZEXT416(*(uint *)(*pauVar77 + (uVar131 & _UNK_150b50ebc))),0x30)
    ;
    auVar92 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar77 + auVar138._0_4_)),
                            ZEXT416(*(uint *)(*pauVar77 + uVar62)),0x10);
    auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)(*pauVar77 + CONCAT44(uVar45,uVar42))),0x20);
    register0x00001290 = auVar136;
    _local_2d8 = auVar108;
    auVar136 = vinsertps_avx(auVar92,ZEXT416(*(uint *)(*pauVar77 + CONCAT44(uVar51,uVar46))),0x30);
    register0x00001250 = auVar91;
    _local_378 = auVar136;
    auVar93._0_4_ =
         uVar118 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000;
    auVar93._4_4_ = uVar125 & _UNK_150b50b04;
    auVar93._8_4_ = uVar126 & _UNK_150b50b08;
    auVar93._12_4_ = uVar127 & _UNK_150b50b0c;
    vextractps_avx(auVar93,1);
    vextractps_avx(auVar93,2);
    lVar52 = param_7 + uVar54 * 0xc;
    vextractps_avx(auVar93,3);
    auVar109._0_4_ =
         uVar118 & ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004;
    auVar109._4_4_ = uVar125 & _UNK_150b50b24;
    auVar109._8_4_ = uVar126 & _UNK_150b50b28;
    auVar109._12_4_ = uVar127 & _UNK_150b50b2c;
    vextractps_avx(auVar109,1);
    vextractps_avx(auVar109,2);
    vextractps_avx(auVar109,3);
    auVar119._0_4_ =
         uVar118 & ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008;
    auVar119._4_4_ = uVar125 & _UNK_150b50b44;
    auVar119._8_4_ = uVar126 & _UNK_150b50b48;
    auVar119._12_4_ = uVar127 & _UNK_150b50b4c;
    vextractps_avx(auVar119,1);
    vextractps_avx(auVar119,2);
    auVar142 = ZEXT2032(CONCAT416(*(undefined4 *)((ulonglong)(uVar128 & _UNK_150b50b10) + lVar52),
                                  ZEXT416(*(uint *)(param_7 + uVar54 * 0xc))));
    vextractps_avx(auVar119,3);
    auVar85 = ZEXT2032(CONCAT416(*(undefined4 *)((ulonglong)(uVar128 & _UNK_150b50b30) + lVar52),
                                 ZEXT416(*(uint *)((ulonglong)auVar109._0_4_ + lVar52))));
    auVar94 = ZEXT2032(CONCAT416(*(undefined4 *)((ulonglong)(uVar128 & _UNK_150b50b50) + lVar52),
                                 ZEXT416(*(uint *)((ulonglong)auVar119._0_4_ + lVar52))));
  }
  auVar91 = vpcmpgtd_avx(auVar90,auVar145);
  auVar110 = vpcmpgtd_avx(auVar90,auVar101);
  auVar145._4_4_ = auVar142._20_4_ * 3;
  auVar145._0_4_ = auVar142._16_4_ * 3;
  auVar145._8_4_ = auVar142._24_4_ * 3;
  auVar145._12_4_ = auVar142._28_4_ * 3;
  auVar7 = vpand_avx(auVar91,auVar145);
  lVar43 = (longlong)auVar7._0_4_;
  lVar52 = param_3 + lVar43 * 4;
  lVar56 = (longlong)auVar7._4_4_;
  lVar55 = param_3 + lVar56 * 4;
  uVar50 = (ulonglong)(auVar91._4_4_ & _UNK_150b50d54);
  uVar48 = (ulonglong)(auVar91._8_4_ & _UNK_150b50d58);
  uVar60 = (ulonglong)(auVar91._0_4_ & _UNK_150b50d50);
  auVar136 = vinsertps_avx(ZEXT416(*(uint *)(uVar60 + lVar52)),ZEXT416(*(uint *)(uVar50 + lVar55)),
                           0x10);
  uVar57 = (ulonglong)(auVar91._0_4_ & _UNK_150b50d70);
  uVar49 = (ulonglong)(auVar91._4_4_ & _UNK_150b50d74);
  auVar108 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar52)),ZEXT416(*(uint *)(uVar49 + lVar55)),
                           0x10);
  auVar2._4_4_ = auVar85._20_4_ * 3;
  auVar2._0_4_ = auVar85._16_4_ * 3;
  auVar2._8_4_ = auVar85._24_4_ * 3;
  auVar2._12_4_ = auVar85._28_4_ * 3;
  auVar8 = vpand_avx(auVar91,auVar2);
  lVar47 = (longlong)auVar8._0_4_;
  uVar41 = (ulonglong)(auVar91._12_4_ & _UNK_150b50d5c);
  lVar64 = (longlong)auVar8._4_4_;
  lVar52 = param_3 + lVar47 * 4;
  lVar55 = param_3 + lVar64 * 4;
  auVar90 = vinsertps_avx(ZEXT416(*(uint *)(uVar60 + lVar52)),ZEXT416(*(uint *)(uVar50 + lVar55)),
                          0x10);
  uVar67 = (ulonglong)(auVar91._8_4_ & _UNK_150b50d78);
  uVar44 = (ulonglong)(auVar91._12_4_ & _UNK_150b50d7c);
  auVar3._4_4_ = auVar94._20_4_ * 3;
  auVar3._0_4_ = auVar94._16_4_ * 3;
  auVar3._8_4_ = auVar94._24_4_ * 3;
  auVar3._12_4_ = auVar94._28_4_ * 3;
  auVar101 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar52)),ZEXT416(*(uint *)(uVar49 + lVar55)),
                           0x10);
  auVar9 = vpand_avx(auVar91,auVar3);
  lVar75 = (longlong)auVar9._0_4_;
  lVar52 = param_3 + lVar75 * 4;
  lVar65 = (longlong)auVar9._4_4_;
  lVar55 = param_3 + lVar65 * 4;
  auVar145 = vinsertps_avx(ZEXT416(*(uint *)(uVar60 + lVar52)),ZEXT416(*(uint *)(uVar50 + lVar55)),
                           0x10);
  auVar91 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar52)),ZEXT416(*(uint *)(uVar49 + lVar55)),
                          0x10);
  lVar52 = param_4 + lVar43 * 4;
  lVar55 = param_4 + lVar56 * 4;
  auVar92 = vinsertps_avx(ZEXT416(*(uint *)(uVar60 + lVar52)),ZEXT416(*(uint *)(uVar50 + lVar55)),
                          0x10);
  auVar93 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar52)),ZEXT416(*(uint *)(uVar49 + lVar55)),
                          0x10);
  lVar52 = param_4 + lVar47 * 4;
  lVar55 = param_4 + lVar64 * 4;
  auVar109 = vinsertps_avx(ZEXT416(*(uint *)(uVar60 + lVar52)),ZEXT416(*(uint *)(uVar50 + lVar55)),
                           0x10);
  auVar119 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar52)),ZEXT416(*(uint *)(uVar49 + lVar55)),
                           0x10);
  lVar52 = param_4 + lVar75 * 4;
  lVar55 = param_4 + lVar65 * 4;
  auVar137 = vinsertps_avx(ZEXT416(*(uint *)(uVar60 + lVar52)),ZEXT416(*(uint *)(uVar50 + lVar55)),
                           0x10);
  auVar138 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar52)),ZEXT416(*(uint *)(uVar49 + lVar55)),
                           0x10);
  lVar52 = param_5 + lVar43 * 4;
  lVar55 = param_5 + lVar56 * 4;
  auVar2 = vinsertps_avx(ZEXT416(*(uint *)(uVar60 + lVar52)),ZEXT416(*(uint *)(uVar50 + lVar55)),
                         0x10);
  auVar3 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar52)),ZEXT416(*(uint *)(uVar49 + lVar55)),
                         0x10);
  lVar52 = param_5 + lVar47 * 4;
  lVar55 = param_5 + lVar64 * 4;
  auVar83 = vinsertps_avx(ZEXT416(*(uint *)(uVar60 + lVar52)),ZEXT416(*(uint *)(uVar50 + lVar55)),
                          0x10);
  auVar4 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar52)),ZEXT416(*(uint *)(uVar49 + lVar55)),
                         0x10);
  lVar52 = param_5 + lVar75 * 4;
  lVar55 = param_5 + lVar65 * 4;
  auVar5 = vinsertps_avx(ZEXT416(*(uint *)(uVar60 + lVar52)),ZEXT416(*(uint *)(uVar50 + lVar55)),
                         0x10);
  auVar6 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar52)),ZEXT416(*(uint *)(uVar49 + lVar55)),
                         0x10);
  lVar40 = (longlong)auVar7._8_4_;
  lVar52 = param_3 + lVar40 * 4;
  auVar136 = vinsertps_avx(auVar136,ZEXT416(*(uint *)(uVar48 + lVar52)),0x20);
  auVar108 = vinsertps_avx(auVar108,ZEXT416(*(uint *)(uVar67 + lVar52)),0x20);
  lVar66 = (longlong)auVar8._8_4_;
  lVar52 = param_3 + lVar66 * 4;
  auVar90 = vinsertps_avx(auVar90,ZEXT416(*(uint *)(uVar48 + lVar52)),0x20);
  auVar101 = vinsertps_avx(auVar101,ZEXT416(*(uint *)(uVar67 + lVar52)),0x20);
  lVar72 = (longlong)auVar9._8_4_;
  lVar52 = param_3 + lVar72 * 4;
  auVar145 = vinsertps_avx(auVar145,ZEXT416(*(uint *)(uVar48 + lVar52)),0x20);
  auVar91 = vinsertps_avx(auVar91,ZEXT416(*(uint *)(uVar67 + lVar52)),0x20);
  lVar52 = param_4 + lVar40 * 4;
  auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)(uVar48 + lVar52)),0x20);
  auVar93 = vinsertps_avx(auVar93,ZEXT416(*(uint *)(uVar67 + lVar52)),0x20);
  lVar52 = param_4 + lVar66 * 4;
  auVar109 = vinsertps_avx(auVar109,ZEXT416(*(uint *)(uVar48 + lVar52)),0x20);
  auVar119 = vinsertps_avx(auVar119,ZEXT416(*(uint *)(uVar67 + lVar52)),0x20);
  lVar52 = param_4 + lVar72 * 4;
  auVar137 = vinsertps_avx(auVar137,ZEXT416(*(uint *)(uVar48 + lVar52)),0x20);
  auVar138 = vinsertps_avx(auVar138,ZEXT416(*(uint *)(uVar67 + lVar52)),0x20);
  lVar52 = param_5 + lVar40 * 4;
  auVar2 = vinsertps_avx(auVar2,ZEXT416(*(uint *)(uVar48 + lVar52)),0x20);
  auVar3 = vinsertps_avx(auVar3,ZEXT416(*(uint *)(uVar67 + lVar52)),0x20);
  lVar52 = param_5 + lVar66 * 4;
  auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(uVar48 + lVar52)),0x20);
  auVar4 = vinsertps_avx(auVar4,ZEXT416(*(uint *)(uVar67 + lVar52)),0x20);
  lVar52 = param_5 + lVar72 * 4;
  auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(uVar48 + lVar52)),0x20);
  auVar6 = vinsertps_avx(auVar6,ZEXT416(*(uint *)(uVar67 + lVar52)),0x20);
  lVar53 = (longlong)auVar7._12_4_;
  lVar52 = param_3 + lVar53 * 4;
  auVar136 = vinsertps_avx(auVar136,ZEXT416(*(uint *)(uVar41 + lVar52)),0x30);
  auVar108 = vinsertps_avx(auVar108,ZEXT416(*(uint *)(uVar44 + lVar52)),0x30);
  lVar58 = (longlong)auVar8._12_4_;
  lVar52 = param_3 + lVar58 * 4;
  auVar90 = vinsertps_avx(auVar90,ZEXT416(*(uint *)(uVar41 + lVar52)),0x30);
  auVar101 = vinsertps_avx(auVar101,ZEXT416(*(uint *)(uVar44 + lVar52)),0x30);
  lVar59 = (longlong)auVar9._12_4_;
  lVar52 = param_3 + lVar59 * 4;
  auVar145 = vinsertps_avx(auVar145,ZEXT416(*(uint *)(uVar41 + lVar52)),0x30);
  auVar91 = vinsertps_avx(auVar91,ZEXT416(*(uint *)(uVar44 + lVar52)),0x30);
  auVar7._4_4_ = auVar142._4_4_ * 3;
  auVar7._0_4_ = auVar142._0_4_ * 3;
  auVar7._8_4_ = auVar142._8_4_ * 3;
  auVar7._12_4_ = auVar142._12_4_ * 3;
  lVar52 = param_4 + lVar53 * 4;
  auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)(uVar41 + lVar52)),0x30);
  auVar93 = vinsertps_avx(auVar93,ZEXT416(*(uint *)(uVar44 + lVar52)),0x30);
  auVar20 = vpand_avx(auVar110,auVar7);
  lVar52 = param_4 + lVar58 * 4;
  auVar109 = vinsertps_avx(auVar109,ZEXT416(*(uint *)(uVar41 + lVar52)),0x30);
  auVar119 = vinsertps_avx(auVar119,ZEXT416(*(uint *)(uVar44 + lVar52)),0x30);
  lVar52 = param_4 + lVar59 * 4;
  auVar137 = vinsertps_avx(auVar137,ZEXT416(*(uint *)(uVar41 + lVar52)),0x30);
  uVar48 = (ulonglong)(auVar110._4_4_ & _UNK_150b50d44);
  uVar68 = (ulonglong)(auVar110._8_4_ & _UNK_150b50d48);
  uVar69 = (ulonglong)(auVar110._12_4_ & _UNK_150b50d4c);
  uVar57 = (ulonglong)
           (auVar110._0_4_ & ___ymm_0000000400000004000000040000000400000004000000040000000400000004
           );
  auVar138 = vinsertps_avx(auVar138,ZEXT416(*(uint *)(uVar44 + lVar52)),0x30);
  lVar52 = param_5 + lVar53 * 4;
  auVar2 = vinsertps_avx(auVar2,ZEXT416(*(uint *)(uVar41 + lVar52)),0x30);
  uVar60 = (ulonglong)(auVar110._4_4_ & _UNK_150b50d64);
  uVar49 = (ulonglong)(auVar110._8_4_ & _UNK_150b50d68);
  uVar50 = (ulonglong)(auVar110._12_4_ & _UNK_150b50d6c);
  uVar67 = (ulonglong)
           (auVar110._0_4_ & ___ymm_0000000800000008000000080000000800000008000000080000000800000008
           );
  auVar3 = vinsertps_avx(auVar3,ZEXT416(*(uint *)(uVar44 + lVar52)),0x30);
  lVar52 = param_5 + lVar58 * 4;
  auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(uVar41 + lVar52)),0x30);
  auVar4 = vinsertps_avx(auVar4,ZEXT416(*(uint *)(uVar44 + lVar52)),0x30);
  lVar52 = param_5 + lVar59 * 4;
  auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(uVar41 + lVar52)),0x30);
  local_4b8 = auVar85._0_4_;
  fStack_4b4 = auVar85._4_4_;
  fStack_4b0 = auVar85._8_4_;
  fStack_4ac = auVar85._12_4_;
  auVar8._4_4_ = (int)fStack_4b4 * 3;
  auVar8._0_4_ = (int)local_4b8 * 3;
  auVar8._8_4_ = (int)fStack_4b0 * 3;
  auVar8._12_4_ = (int)fStack_4ac * 3;
  auVar21 = vpand_avx(auVar110,auVar8);
  auVar6 = vinsertps_avx(auVar6,ZEXT416(*(uint *)(uVar44 + lVar52)),0x30);
  auVar9._4_4_ = auVar94._4_4_ * 3;
  auVar9._0_4_ = auVar94._0_4_ * 3;
  auVar9._8_4_ = auVar94._8_4_ * 3;
  auVar9._12_4_ = auVar94._12_4_ * 3;
  lVar73 = (longlong)auVar20._0_4_;
  lVar78 = (longlong)auVar20._4_4_;
  lVar52 = param_3 + lVar73 * 4;
  lVar55 = param_3 + lVar78 * 4;
  auVar7 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar52)),ZEXT416(*(uint *)(uVar48 + lVar55)),
                         0x10);
  auVar26 = vpand_avx(auVar110,auVar9);
  auVar8 = vinsertps_avx(ZEXT416(*(uint *)(uVar67 + lVar52)),ZEXT416(*(uint *)(uVar60 + lVar55)),
                         0x10);
  lVar63 = (longlong)auVar21._0_4_;
  lVar81 = (longlong)auVar21._4_4_;
  lVar52 = param_3 + lVar63 * 4;
  lVar55 = param_3 + lVar81 * 4;
  auVar9 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar52)),ZEXT416(*(uint *)(uVar48 + lVar55)),
                         0x10);
  auVar110 = vinsertps_avx(ZEXT416(*(uint *)(uVar67 + lVar52)),ZEXT416(*(uint *)(uVar60 + lVar55)),
                           0x10);
  lVar80 = (longlong)auVar26._0_4_;
  lVar74 = (longlong)auVar26._4_4_;
  lVar52 = param_3 + lVar80 * 4;
  lVar55 = param_3 + lVar74 * 4;
  auVar120 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar52)),ZEXT416(*(uint *)(uVar48 + lVar55)),
                           0x10);
  auVar139 = vinsertps_avx(ZEXT416(*(uint *)(uVar67 + lVar52)),ZEXT416(*(uint *)(uVar60 + lVar55)),
                           0x10);
  lVar52 = param_4 + lVar73 * 4;
  lVar55 = param_4 + lVar78 * 4;
  auVar147 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar52)),ZEXT416(*(uint *)(uVar48 + lVar55)),
                           0x10);
  auVar151 = vinsertps_avx(ZEXT416(*(uint *)(uVar67 + lVar52)),ZEXT416(*(uint *)(uVar60 + lVar55)),
                           0x10);
  lVar52 = param_4 + lVar63 * 4;
  lVar55 = param_4 + lVar81 * 4;
  auVar10 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar52)),ZEXT416(*(uint *)(uVar48 + lVar55)),
                          0x10);
  auVar11 = vinsertps_avx(ZEXT416(*(uint *)(uVar67 + lVar52)),ZEXT416(*(uint *)(uVar60 + lVar55)),
                          0x10);
  lVar52 = param_4 + lVar80 * 4;
  lVar55 = param_4 + lVar74 * 4;
  auVar12 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar52)),ZEXT416(*(uint *)(uVar48 + lVar55)),
                          0x10);
  auVar13 = vinsertps_avx(ZEXT416(*(uint *)(uVar67 + lVar52)),ZEXT416(*(uint *)(uVar60 + lVar55)),
                          0x10);
  lVar52 = param_5 + lVar73 * 4;
  lVar55 = param_5 + lVar78 * 4;
  auVar14 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar52)),ZEXT416(*(uint *)(uVar48 + lVar55)),
                          0x10);
  auVar15 = vinsertps_avx(ZEXT416(*(uint *)(uVar67 + lVar52)),ZEXT416(*(uint *)(uVar60 + lVar55)),
                          0x10);
  lVar52 = param_5 + lVar63 * 4;
  lVar55 = param_5 + lVar81 * 4;
  auVar16 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar52)),ZEXT416(*(uint *)(uVar48 + lVar55)),
                          0x10);
  auVar17 = vinsertps_avx(ZEXT416(*(uint *)(uVar67 + lVar52)),ZEXT416(*(uint *)(uVar60 + lVar55)),
                          0x10);
  lVar52 = param_5 + lVar80 * 4;
  lVar55 = param_5 + lVar74 * 4;
  auVar18 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar52)),ZEXT416(*(uint *)(uVar48 + lVar55)),
                          0x10);
  auVar19 = vinsertps_avx(ZEXT416(*(uint *)(uVar67 + lVar52)),ZEXT416(*(uint *)(uVar60 + lVar55)),
                          0x10);
  lVar82 = (longlong)auVar20._8_4_;
  lVar52 = param_3 + lVar82 * 4;
  auVar7 = vinsertps_avx(auVar7,ZEXT416(*(uint *)(uVar68 + lVar52)),0x20);
  auVar8 = vinsertps_avx(auVar8,ZEXT416(*(uint *)(uVar49 + lVar52)),0x20);
  lVar55 = (longlong)auVar20._12_4_;
  lVar52 = param_3 + lVar55 * 4;
  auVar7 = vinsertps_avx(auVar7,ZEXT416(*(uint *)(uVar69 + lVar52)),0x30);
  auVar8 = vinsertps_avx(auVar8,ZEXT416(*(uint *)(uVar50 + lVar52)),0x30);
  lVar70 = (longlong)auVar21._8_4_;
  lVar52 = param_3 + lVar70 * 4;
  auVar9 = vinsertps_avx(auVar9,ZEXT416(*(uint *)(uVar68 + lVar52)),0x20);
  auVar110 = vinsertps_avx(auVar110,ZEXT416(*(uint *)(uVar49 + lVar52)),0x20);
  lVar71 = (longlong)auVar21._12_4_;
  lVar52 = param_3 + lVar71 * 4;
  auVar9 = vinsertps_avx(auVar9,ZEXT416(*(uint *)(uVar69 + lVar52)),0x30);
  auVar110 = vinsertps_avx(auVar110,ZEXT416(*(uint *)(uVar50 + lVar52)),0x30);
  lVar76 = (longlong)auVar26._8_4_;
  lVar52 = param_3 + lVar76 * 4;
  auVar120 = vinsertps_avx(auVar120,ZEXT416(*(uint *)(uVar68 + lVar52)),0x20);
  auVar139 = vinsertps_avx(auVar139,ZEXT416(*(uint *)(uVar49 + lVar52)),0x20);
  auVar20 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + lVar43 * 4)),
                          ZEXT416(*(uint *)(param_3 + lVar56 * 4)),0x10);
  auVar20 = vinsertps_avx(auVar20,ZEXT416(*(uint *)(param_3 + lVar40 * 4)),0x20);
  auVar20 = vinsertps_avx(auVar20,ZEXT416(*(uint *)(param_3 + lVar53 * 4)),0x30);
  auVar21 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + lVar73 * 4)),
                          ZEXT416(*(uint *)(param_3 + lVar78 * 4)),0x10);
  auVar21 = vinsertps_avx(auVar21,ZEXT416(*(uint *)(param_3 + lVar82 * 4)),0x20);
  auVar21 = vinsertps_avx(auVar21,ZEXT416(*(uint *)(param_3 + lVar55 * 4)),0x30);
  auVar22 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + lVar47 * 4)),
                          ZEXT416(*(uint *)(param_3 + lVar64 * 4)),0x10);
  auVar22 = vinsertps_avx(auVar22,ZEXT416(*(uint *)(param_3 + lVar66 * 4)),0x20);
  auVar22 = vinsertps_avx(auVar22,ZEXT416(*(uint *)(param_3 + lVar58 * 4)),0x30);
  auVar23 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + lVar63 * 4)),
                          ZEXT416(*(uint *)(param_3 + lVar81 * 4)),0x10);
  auVar23 = vinsertps_avx(auVar23,ZEXT416(*(uint *)(param_3 + lVar70 * 4)),0x20);
  auVar23 = vinsertps_avx(auVar23,ZEXT416(*(uint *)(param_3 + lVar71 * 4)),0x30);
  auVar24 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + lVar75 * 4)),
                          ZEXT416(*(uint *)(param_3 + lVar65 * 4)),0x10);
  auVar24 = vinsertps_avx(auVar24,ZEXT416(*(uint *)(param_3 + lVar72 * 4)),0x20);
  auVar24 = vinsertps_avx(auVar24,ZEXT416(*(uint *)(param_3 + lVar59 * 4)),0x30);
  auVar25 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + lVar80 * 4)),
                          ZEXT416(*(uint *)(param_3 + lVar74 * 4)),0x10);
  auVar25 = vinsertps_avx(auVar25,ZEXT416(*(uint *)(param_3 + lVar76 * 4)),0x20);
  lVar79 = (longlong)auVar26._12_4_;
  auVar25 = vinsertps_avx(auVar25,ZEXT416(*(uint *)(param_3 + lVar79 * 4)),0x30);
  param_3 = param_3 + lVar79 * 4;
  auVar120 = vinsertps_avx(auVar120,ZEXT416(*(uint *)(uVar69 + param_3)),0x30);
  auVar139 = vinsertps_avx(auVar139,ZEXT416(*(uint *)(uVar50 + param_3)),0x30);
  lVar52 = param_4 + lVar82 * 4;
  auVar147 = vinsertps_avx(auVar147,ZEXT416(*(uint *)(uVar68 + lVar52)),0x20);
  auVar151 = vinsertps_avx(auVar151,ZEXT416(*(uint *)(uVar49 + lVar52)),0x20);
  lVar52 = param_4 + lVar55 * 4;
  auVar147 = vinsertps_avx(auVar147,ZEXT416(*(uint *)(uVar69 + lVar52)),0x30);
  auVar151 = vinsertps_avx(auVar151,ZEXT416(*(uint *)(uVar50 + lVar52)),0x30);
  lVar52 = param_4 + lVar70 * 4;
  auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(uVar68 + lVar52)),0x20);
  auVar11 = vinsertps_avx(auVar11,ZEXT416(*(uint *)(uVar49 + lVar52)),0x20);
  lVar52 = param_4 + lVar71 * 4;
  auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(uVar69 + lVar52)),0x30);
  auVar11 = vinsertps_avx(auVar11,ZEXT416(*(uint *)(uVar50 + lVar52)),0x30);
  lVar52 = param_4 + lVar76 * 4;
  auVar12 = vinsertps_avx(auVar12,ZEXT416(*(uint *)(uVar68 + lVar52)),0x20);
  auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)(uVar49 + lVar52)),0x20);
  auVar26 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + lVar43 * 4)),
                          ZEXT416(*(uint *)(param_4 + lVar56 * 4)),0x10);
  auVar26 = vinsertps_avx(auVar26,ZEXT416(*(uint *)(param_4 + lVar40 * 4)),0x20);
  auVar26 = vinsertps_avx(auVar26,ZEXT416(*(uint *)(param_4 + lVar53 * 4)),0x30);
  auVar27 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + lVar73 * 4)),
                          ZEXT416(*(uint *)(param_4 + lVar78 * 4)),0x10);
  auVar27 = vinsertps_avx(auVar27,ZEXT416(*(uint *)(param_4 + lVar82 * 4)),0x20);
  auVar27 = vinsertps_avx(auVar27,ZEXT416(*(uint *)(param_4 + lVar55 * 4)),0x30);
  auVar28 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + lVar47 * 4)),
                          ZEXT416(*(uint *)(param_4 + lVar64 * 4)),0x10);
  auVar28 = vinsertps_avx(auVar28,ZEXT416(*(uint *)(param_4 + lVar66 * 4)),0x20);
  auVar28 = vinsertps_avx(auVar28,ZEXT416(*(uint *)(param_4 + lVar58 * 4)),0x30);
  auVar29 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + lVar63 * 4)),
                          ZEXT416(*(uint *)(param_4 + lVar81 * 4)),0x10);
  auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)(param_4 + lVar70 * 4)),0x20);
  auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)(param_4 + lVar71 * 4)),0x30);
  auVar30 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + lVar75 * 4)),
                          ZEXT416(*(uint *)(param_4 + lVar65 * 4)),0x10);
  auVar30 = vinsertps_avx(auVar30,ZEXT416(*(uint *)(param_4 + lVar72 * 4)),0x20);
  auVar30 = vinsertps_avx(auVar30,ZEXT416(*(uint *)(param_4 + lVar59 * 4)),0x30);
  auVar31 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + lVar80 * 4)),
                          ZEXT416(*(uint *)(param_4 + lVar74 * 4)),0x10);
  auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(param_4 + lVar76 * 4)),0x20);
  auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(param_4 + lVar79 * 4)),0x30);
  param_4 = param_4 + lVar79 * 4;
  auVar12 = vinsertps_avx(auVar12,ZEXT416(*(uint *)(uVar69 + param_4)),0x30);
  auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)(uVar50 + param_4)),0x30);
  auVar32 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + lVar43 * 4)),
                          ZEXT416(*(uint *)(param_5 + lVar56 * 4)),0x10);
  auVar32 = vinsertps_avx(auVar32,ZEXT416(*(uint *)(param_5 + lVar40 * 4)),0x20);
  auVar32 = vinsertps_avx(auVar32,ZEXT416(*(uint *)(param_5 + lVar53 * 4)),0x30);
  auVar33 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + lVar73 * 4)),
                          ZEXT416(*(uint *)(param_5 + lVar78 * 4)),0x10);
  auVar33 = vinsertps_avx(auVar33,ZEXT416(*(uint *)(param_5 + lVar82 * 4)),0x20);
  lVar52 = param_5 + lVar82 * 4;
  auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(uVar68 + lVar52)),0x20);
  auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(uVar49 + lVar52)),0x20);
  auVar33 = vinsertps_avx(auVar33,ZEXT416(*(uint *)(param_5 + lVar55 * 4)),0x30);
  lVar52 = param_5 + lVar55 * 4;
  auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(uVar69 + lVar52)),0x30);
  auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(uVar50 + lVar52)),0x30);
  auVar34 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + lVar47 * 4)),
                          ZEXT416(*(uint *)(param_5 + lVar64 * 4)),0x10);
  auVar34 = vinsertps_avx(auVar34,ZEXT416(*(uint *)(param_5 + lVar66 * 4)),0x20);
  auVar34 = vinsertps_avx(auVar34,ZEXT416(*(uint *)(param_5 + lVar58 * 4)),0x30);
  auVar35 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + lVar63 * 4)),
                          ZEXT416(*(uint *)(param_5 + lVar81 * 4)),0x10);
  auVar35 = vinsertps_avx(auVar35,ZEXT416(*(uint *)(param_5 + lVar70 * 4)),0x20);
  lVar52 = param_5 + lVar70 * 4;
  auVar16 = vinsertps_avx(auVar16,ZEXT416(*(uint *)(uVar68 + lVar52)),0x20);
  auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)(uVar49 + lVar52)),0x20);
  auVar35 = vinsertps_avx(auVar35,ZEXT416(*(uint *)(param_5 + lVar71 * 4)),0x30);
  lVar52 = param_5 + lVar71 * 4;
  auVar16 = vinsertps_avx(auVar16,ZEXT416(*(uint *)(uVar69 + lVar52)),0x30);
  auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)(uVar50 + lVar52)),0x30);
  auVar36 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + lVar75 * 4)),
                          ZEXT416(*(uint *)(param_5 + lVar65 * 4)),0x10);
  auVar36 = vinsertps_avx(auVar36,ZEXT416(*(uint *)(param_5 + lVar72 * 4)),0x20);
  auVar36 = vinsertps_avx(auVar36,ZEXT416(*(uint *)(param_5 + lVar59 * 4)),0x30);
  auVar37 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + lVar80 * 4)),
                          ZEXT416(*(uint *)(param_5 + lVar74 * 4)),0x10);
  auVar37 = vinsertps_avx(auVar37,ZEXT416(*(uint *)(param_5 + lVar76 * 4)),0x20);
  lVar52 = param_5 + lVar76 * 4;
  auVar18 = vinsertps_avx(auVar18,ZEXT416(*(uint *)(uVar68 + lVar52)),0x20);
  auVar37 = vinsertps_avx(auVar37,ZEXT416(*(uint *)(param_5 + lVar79 * 4)),0x30);
  auVar19 = vinsertps_avx(auVar19,ZEXT416(*(uint *)(uVar49 + lVar52)),0x20);
  param_5 = param_5 + lVar79 * 4;
  auVar18 = vinsertps_avx(auVar18,ZEXT416(*(uint *)(uVar69 + param_5)),0x30);
  auVar19 = vinsertps_avx(auVar19,ZEXT416(*(uint *)(uVar50 + param_5)),0x30);
  local_1c8 = auVar7._0_4_;
  fStack_1c4 = auVar7._4_4_;
  fStack_1c0 = auVar7._8_4_;
  fStack_1bc = auVar7._12_4_;
  fStack_1b8 = auVar136._0_4_;
  fStack_1b4 = auVar136._4_4_;
  fStack_1b0 = auVar136._8_4_;
  fStack_1ac = auVar136._12_4_;
  local_458 = auVar151._0_4_;
  fStack_454 = auVar151._4_4_;
  fStack_450 = auVar151._8_4_;
  fStack_44c = auVar151._12_4_;
  fStack_448 = auVar93._0_4_;
  fStack_444 = auVar93._4_4_;
  fStack_440 = auVar93._8_4_;
  fStack_43c = auVar93._12_4_;
  local_1a8 = auVar8._0_4_;
  fStack_1a4 = auVar8._4_4_;
  fStack_1a0 = auVar8._8_4_;
  fStack_19c = auVar8._12_4_;
  fStack_198 = auVar108._0_4_;
  fStack_194 = auVar108._4_4_;
  fStack_190 = auVar108._8_4_;
  fStack_18c = auVar108._12_4_;
  local_108 = auVar29._0_4_;
  fStack_104 = auVar29._4_4_;
  fStack_100 = auVar29._8_4_;
  fStack_fc = auVar29._12_4_;
  fStack_f8 = auVar28._0_4_;
  fStack_f4 = auVar28._4_4_;
  fStack_f0 = auVar28._8_4_;
  fStack_ec = auVar28._12_4_;
  local_248 = auVar23._0_4_;
  fStack_244 = auVar23._4_4_;
  fStack_240 = auVar23._8_4_;
  fStack_23c = auVar23._12_4_;
  fStack_238 = auVar22._0_4_;
  fStack_234 = auVar22._4_4_;
  fStack_230 = auVar22._8_4_;
  fStack_22c = auVar22._12_4_;
  local_188 = auVar9._0_4_;
  fStack_184 = auVar9._4_4_;
  fStack_180 = auVar9._8_4_;
  fStack_17c = auVar9._12_4_;
  fStack_178 = auVar90._0_4_;
  fStack_174 = auVar90._4_4_;
  fStack_170 = auVar90._8_4_;
  fStack_16c = auVar90._12_4_;
  local_268 = auVar110._0_4_;
  fStack_264 = auVar110._4_4_;
  fStack_260 = auVar110._8_4_;
  fStack_25c = auVar110._12_4_;
  fStack_258 = auVar101._0_4_;
  fStack_254 = auVar101._4_4_;
  fStack_250 = auVar101._8_4_;
  fStack_24c = auVar101._12_4_;
  local_598 = auVar31._0_4_;
  fStack_594 = auVar31._4_4_;
  fStack_590 = auVar31._8_4_;
  fStack_58c = auVar31._12_4_;
  fStack_588 = auVar30._0_4_;
  fStack_584 = auVar30._4_4_;
  fStack_580 = auVar30._8_4_;
  fStack_57c = auVar30._12_4_;
  local_168 = auVar25._0_4_;
  fStack_164 = auVar25._4_4_;
  fStack_160 = auVar25._8_4_;
  fStack_15c = auVar25._12_4_;
  fStack_158 = auVar24._0_4_;
  fStack_154 = auVar24._4_4_;
  fStack_150 = auVar24._8_4_;
  fStack_14c = auVar24._12_4_;
  local_4f8 = auVar12._0_4_;
  fStack_4f4 = auVar12._4_4_;
  fStack_4f0 = auVar12._8_4_;
  fStack_4ec = auVar12._12_4_;
  fStack_4e8 = auVar137._0_4_;
  fStack_4e4 = auVar137._4_4_;
  fStack_4e0 = auVar137._8_4_;
  fStack_4dc = auVar137._12_4_;
  local_148 = auVar120._0_4_;
  fStack_144 = auVar120._4_4_;
  fStack_140 = auVar120._8_4_;
  fStack_13c = auVar120._12_4_;
  fStack_138 = auVar145._0_4_;
  fStack_134 = auVar145._4_4_;
  fStack_130 = auVar145._8_4_;
  fStack_12c = auVar145._12_4_;
  local_128 = auVar139._0_4_;
  fStack_124 = auVar139._4_4_;
  fStack_120 = auVar139._8_4_;
  fStack_11c = auVar139._12_4_;
  fStack_118 = auVar91._0_4_;
  fStack_114 = auVar91._4_4_;
  fStack_110 = auVar91._8_4_;
  fStack_10c = auVar91._12_4_;
  auVar139._0_4_ =
       ((float)local_378._0_4_ * local_108 + local_248) * (float)local_2b8._0_4_ +
       (float)local_298._0_4_ * (auVar21._0_4_ + auVar27._0_4_ * (float)local_378._0_4_) +
       (float)local_2d8._0_4_ * ((float)local_378._0_4_ * local_598 + local_168);
  auVar139._4_4_ =
       ((float)local_378._4_4_ * fStack_104 + fStack_244) * (float)local_2b8._4_4_ +
       (float)local_298._4_4_ * (auVar21._4_4_ + auVar27._4_4_ * (float)local_378._4_4_) +
       (float)local_2d8._4_4_ * ((float)local_378._4_4_ * fStack_594 + fStack_164);
  auVar139._8_4_ =
       (fStack_370 * fStack_100 + fStack_240) * fStack_2b0 +
       fStack_290 * (auVar21._8_4_ + auVar27._8_4_ * fStack_370) +
       fStack_2d0 * (fStack_370 * fStack_590 + fStack_160);
  auVar139._12_4_ =
       (fStack_36c * fStack_fc + fStack_23c) * fStack_2ac +
       fStack_28c * (auVar21._12_4_ + auVar27._12_4_ * fStack_36c) +
       fStack_2cc * (fStack_36c * fStack_58c + fStack_15c);
  auVar143._16_4_ =
       (fStack_368 * fStack_f8 + fStack_238) * fStack_2a8 +
       fStack_288 * (auVar20._0_4_ + auVar26._0_4_ * fStack_368) +
       fStack_2c8 * (fStack_368 * fStack_588 + fStack_158);
  auVar143._0_16_ = auVar139;
  auVar143._20_4_ =
       (fStack_364 * fStack_f4 + fStack_234) * fStack_2a4 +
       fStack_284 * (auVar20._4_4_ + auVar26._4_4_ * fStack_364) +
       fStack_2c4 * (fStack_364 * fStack_584 + fStack_154);
  auVar143._24_4_ =
       (fStack_360 * fStack_f0 + fStack_230) * fStack_2a0 +
       fStack_280 * (auVar20._8_4_ + auVar26._8_4_ * fStack_360) +
       fStack_2c0 * (fStack_360 * fStack_580 + fStack_150);
  auVar143._28_4_ =
       (fStack_35c * fStack_ec + fStack_22c) * fStack_29c +
       fStack_27c * (auVar20._12_4_ + auVar26._12_4_ * fStack_35c) +
       fStack_2bc * (fStack_35c * fStack_57c + fStack_14c);
  auVar151._0_4_ =
       (auVar147._0_4_ * (float)local_378._0_4_ + local_1c8) * (float)local_298._0_4_ +
       (auVar10._0_4_ * (float)local_378._0_4_ + local_188) * (float)local_2b8._0_4_ +
       (float)local_2d8._0_4_ * ((float)local_378._0_4_ * local_4f8 + local_148);
  auVar151._4_4_ =
       (auVar147._4_4_ * (float)local_378._4_4_ + fStack_1c4) * (float)local_298._4_4_ +
       (auVar10._4_4_ * (float)local_378._4_4_ + fStack_184) * (float)local_2b8._4_4_ +
       (float)local_2d8._4_4_ * ((float)local_378._4_4_ * fStack_4f4 + fStack_144);
  auVar151._8_4_ =
       (auVar147._8_4_ * fStack_370 + fStack_1c0) * fStack_290 +
       (auVar10._8_4_ * fStack_370 + fStack_180) * fStack_2b0 +
       fStack_2d0 * (fStack_370 * fStack_4f0 + fStack_140);
  auVar151._12_4_ =
       (auVar147._12_4_ * fStack_36c + fStack_1bc) * fStack_28c +
       (auVar10._12_4_ * fStack_36c + fStack_17c) * fStack_2ac +
       fStack_2cc * (fStack_36c * fStack_4ec + fStack_13c);
  auVar154._16_4_ =
       (auVar92._0_4_ * fStack_368 + fStack_1b8) * fStack_288 +
       (auVar109._0_4_ * fStack_368 + fStack_178) * fStack_2a8 +
       fStack_2c8 * (fStack_368 * fStack_4e8 + fStack_138);
  auVar154._0_16_ = auVar151;
  auVar154._20_4_ =
       (auVar92._4_4_ * fStack_364 + fStack_1b4) * fStack_284 +
       (auVar109._4_4_ * fStack_364 + fStack_174) * fStack_2a4 +
       fStack_2c4 * (fStack_364 * fStack_4e4 + fStack_134);
  auVar154._24_4_ =
       (auVar92._8_4_ * fStack_360 + fStack_1b0) * fStack_280 +
       (auVar109._8_4_ * fStack_360 + fStack_170) * fStack_2a0 +
       fStack_2c0 * (fStack_360 * fStack_4e0 + fStack_130);
  auVar154._28_4_ =
       (auVar92._12_4_ * fStack_35c + fStack_1ac) * fStack_27c +
       (auVar109._12_4_ * fStack_35c + fStack_16c) * fStack_29c +
       fStack_2bc * (fStack_35c * fStack_4dc + fStack_12c);
  auVar147._0_4_ =
       ((float)local_378._0_4_ * local_458 + local_1a8) * (float)local_298._0_4_ +
       (float)local_2b8._0_4_ * ((float)local_378._0_4_ * auVar11._0_4_ + local_268) +
       (float)local_2d8._0_4_ * (auVar13._0_4_ * (float)local_378._0_4_ + local_128);
  auVar147._4_4_ =
       ((float)local_378._4_4_ * fStack_454 + fStack_1a4) * (float)local_298._4_4_ +
       (float)local_2b8._4_4_ * ((float)local_378._4_4_ * auVar11._4_4_ + fStack_264) +
       (float)local_2d8._4_4_ * (auVar13._4_4_ * (float)local_378._4_4_ + fStack_124);
  auVar147._8_4_ =
       (fStack_370 * fStack_450 + fStack_1a0) * fStack_290 +
       fStack_2b0 * (fStack_370 * auVar11._8_4_ + fStack_260) +
       fStack_2d0 * (auVar13._8_4_ * fStack_370 + fStack_120);
  auVar147._12_4_ =
       (fStack_36c * fStack_44c + fStack_19c) * fStack_28c +
       fStack_2ac * (fStack_36c * auVar11._12_4_ + fStack_25c) +
       fStack_2cc * (auVar13._12_4_ * fStack_36c + fStack_11c);
  auVar149._16_4_ =
       (fStack_368 * fStack_448 + fStack_198) * fStack_288 +
       fStack_2a8 * (fStack_368 * auVar119._0_4_ + fStack_258) +
       fStack_2c8 * (auVar138._0_4_ * fStack_368 + fStack_118);
  auVar149._0_16_ = auVar147;
  auVar149._20_4_ =
       (fStack_364 * fStack_444 + fStack_194) * fStack_284 +
       fStack_2a4 * (fStack_364 * auVar119._4_4_ + fStack_254) +
       fStack_2c4 * (auVar138._4_4_ * fStack_364 + fStack_114);
  auVar149._24_4_ =
       (fStack_360 * fStack_440 + fStack_190) * fStack_280 +
       fStack_2a0 * (fStack_360 * auVar119._8_4_ + fStack_250) +
       fStack_2c0 * (auVar138._8_4_ * fStack_360 + fStack_110);
  auVar149._28_4_ =
       (fStack_35c * fStack_43c + fStack_18c) * fStack_27c +
       fStack_29c * (fStack_35c * auVar119._12_4_ + fStack_24c) +
       fStack_2bc * (auVar138._12_4_ * fStack_35c + fStack_10c);
  local_578 = auVar33._0_4_;
  fStack_574 = auVar33._4_4_;
  fStack_570 = auVar33._8_4_;
  fStack_56c = auVar33._12_4_;
  fStack_568 = auVar32._0_4_;
  fStack_564 = auVar32._4_4_;
  fStack_560 = auVar32._8_4_;
  fStack_55c = auVar32._12_4_;
  local_678 = auVar37._0_4_;
  fStack_674 = auVar37._4_4_;
  fStack_670 = auVar37._8_4_;
  fStack_66c = auVar37._12_4_;
  fStack_668 = auVar36._0_4_;
  fStack_664 = auVar36._4_4_;
  fStack_660 = auVar36._8_4_;
  fStack_65c = auVar36._12_4_;
  auVar110._0_4_ =
       (float)local_298._0_4_ * local_578 + (float)local_2b8._0_4_ * auVar35._0_4_ +
       (float)local_2d8._0_4_ * local_678;
  auVar110._4_4_ =
       (float)local_298._4_4_ * fStack_574 + (float)local_2b8._4_4_ * auVar35._4_4_ +
       (float)local_2d8._4_4_ * fStack_674;
  auVar110._8_4_ = fStack_290 * fStack_570 + fStack_2b0 * auVar35._8_4_ + fStack_2d0 * fStack_670;
  auVar110._12_4_ = fStack_28c * fStack_56c + fStack_2ac * auVar35._12_4_ + fStack_2cc * fStack_66c;
  auVar117._16_4_ = fStack_288 * fStack_568 + fStack_2a8 * auVar34._0_4_ + fStack_2c8 * fStack_668;
  auVar117._0_16_ = auVar110;
  auVar117._20_4_ = fStack_284 * fStack_564 + fStack_2a4 * auVar34._4_4_ + fStack_2c4 * fStack_664;
  auVar117._24_4_ = fStack_280 * fStack_560 + fStack_2a0 * auVar34._8_4_ + fStack_2c0 * fStack_660;
  auVar117._28_4_ = fStack_27c * fStack_55c + fStack_29c * auVar34._12_4_ + fStack_2bc * fStack_65c;
  auVar120._0_4_ =
       auVar14._0_4_ * (float)local_298._0_4_ + (float)local_2b8._0_4_ * auVar16._0_4_ +
       (float)local_2d8._0_4_ * auVar18._0_4_;
  auVar120._4_4_ =
       auVar14._4_4_ * (float)local_298._4_4_ + (float)local_2b8._4_4_ * auVar16._4_4_ +
       (float)local_2d8._4_4_ * auVar18._4_4_;
  auVar120._8_4_ =
       auVar14._8_4_ * fStack_290 + fStack_2b0 * auVar16._8_4_ + fStack_2d0 * auVar18._8_4_;
  auVar120._12_4_ =
       auVar14._12_4_ * fStack_28c + fStack_2ac * auVar16._12_4_ + fStack_2cc * auVar18._12_4_;
  auVar124._16_4_ =
       auVar2._0_4_ * fStack_288 + fStack_2a8 * auVar83._0_4_ + fStack_2c8 * auVar5._0_4_;
  auVar124._0_16_ = auVar120;
  auVar124._20_4_ =
       auVar2._4_4_ * fStack_284 + fStack_2a4 * auVar83._4_4_ + fStack_2c4 * auVar5._4_4_;
  auVar124._24_4_ =
       auVar2._8_4_ * fStack_280 + fStack_2a0 * auVar83._8_4_ + fStack_2c0 * auVar5._8_4_;
  auVar124._28_4_ =
       auVar2._12_4_ * fStack_27c + fStack_29c * auVar83._12_4_ + fStack_2bc * auVar5._12_4_;
  local_5b8 = auVar19._0_4_;
  fStack_5b4 = auVar19._4_4_;
  fStack_5b0 = auVar19._8_4_;
  fStack_5ac = auVar19._12_4_;
  fStack_5a8 = auVar6._0_4_;
  fStack_5a4 = auVar6._4_4_;
  fStack_5a0 = auVar6._8_4_;
  fStack_59c = auVar6._12_4_;
  auVar83._0_4_ =
       auVar15._0_4_ * (float)local_298._0_4_ + (float)local_2b8._0_4_ * auVar17._0_4_ +
       (float)local_2d8._0_4_ * local_5b8;
  auVar83._4_4_ =
       auVar15._4_4_ * (float)local_298._4_4_ + (float)local_2b8._4_4_ * auVar17._4_4_ +
       (float)local_2d8._4_4_ * fStack_5b4;
  auVar83._8_4_ = auVar15._8_4_ * fStack_290 + fStack_2b0 * auVar17._8_4_ + fStack_2d0 * fStack_5b0;
  auVar83._12_4_ =
       auVar15._12_4_ * fStack_28c + fStack_2ac * auVar17._12_4_ + fStack_2cc * fStack_5ac;
  auVar89._16_4_ = auVar3._0_4_ * fStack_288 + fStack_2a8 * auVar4._0_4_ + fStack_2c8 * fStack_5a8;
  auVar89._0_16_ = auVar83;
  auVar89._20_4_ = auVar3._4_4_ * fStack_284 + fStack_2a4 * auVar4._4_4_ + fStack_2c4 * fStack_5a4;
  auVar89._24_4_ = auVar3._8_4_ * fStack_280 + fStack_2a0 * auVar4._8_4_ + fStack_2c0 * fStack_5a0;
  auVar89._28_4_ = auVar3._12_4_ * fStack_27c + fStack_29c * auVar4._12_4_ + fStack_2bc * fStack_59c
  ;
  pauVar77 = (undefined1 (*) [16])(param_1 + uVar54 * 0xc);
  auVar101 = auVar154._16_16_;
  auVar90 = auVar143._16_16_;
  auVar136 = auVar117._16_16_;
  cVar61 = (char)uVar39;
  auVar108 = auVar124._16_16_;
  if (cVar61 == -1) {
    auVar99._16_16_ = auVar151;
    auVar99._0_16_ = auVar139;
    auVar85 = vshufpd_avx(auVar143,auVar99,2);
    auVar102 = vperm2f128_avx(auVar149,auVar149,1);
    auVar94 = vshufps_avx(auVar149,auVar102,0x30);
    auVar94 = vshufps_avx(auVar102,auVar94,0x29);
    auVar145 = vshufpd_avx(auVar151,auVar101,1);
    auVar94 = vblendps_avx(auVar94,ZEXT1632(auVar145),7);
    auVar95 = vperm2f128_avx(auVar85,auVar85,1);
    auVar95 = vblendps_avx(auVar85,auVar95,0x44);
    auVar86 = vpermilps_avx(auVar95,
                            ___ymm_0000000000000006000000000000000700000001000000000000000200000000)
    ;
    auVar105 = vperm2f128_avx(auVar94,auVar94,1);
    auVar95 = vunpcklpd_avx(auVar105,auVar149);
    auVar95 = vshufps_avx(auVar102,auVar95,0x24);
    auVar95 = vblendps_avx(auVar86,auVar95,0xa4);
    pauVar77[1] = auVar95._16_16_;
    *pauVar77 = auVar95._0_16_;
    auVar86 = ___ymm_0000000000000007000000000000000000000000000000010000000000000000;
    auVar95 = vpermilps_avx(auVar94,
                            ___ymm_0000000000000007000000000000000000000000000000010000000000000000)
    ;
    auVar94 = vshufps_avx(auVar105,auVar105,0xa9);
    auVar94 = vblendps_avx(auVar94,auVar95,0x44);
    auVar95 = vshufpd_avx(auVar85,auVar85,1);
    auVar94 = vblendps_avx(auVar94,auVar95,0x92);
    pauVar77[3] = auVar94._16_16_;
    pauVar77[2] = auVar94._0_16_;
    auVar90 = vshufps_avx(auVar90,auVar101,0x9e);
    auVar101 = vshufps_avx(auVar101,auVar101,0xff);
    auVar135._16_16_ = auVar101;
    auVar135._0_16_ = auVar90;
    auVar95 = vperm2f128_avx(auVar149,ZEXT1632(auVar90),0x21);
    auVar94 = vblendps_avx(auVar135,auVar149,0xe0);
    auVar95 = vshufps_avx(auVar95,auVar94,0x21);
    auVar94 = vshufps_avx(auVar95,auVar94,0xc2);
    pauVar77[5] = auVar94._16_16_;
    pauVar77[4] = auVar94._0_16_;
    auVar100._16_16_ = auVar120;
    auVar100._0_16_ = auVar110;
    auVar85 = vshufpd_avx(auVar117,auVar100,2);
    auVar102 = vperm2f128_avx(auVar89,auVar89,1);
    auVar94 = vshufps_avx(auVar89,auVar102,0x30);
    auVar94 = vshufps_avx(auVar102,auVar94,0x29);
    auVar90 = vshufpd_avx(auVar120,auVar108,1);
    auVar94 = vblendps_avx(auVar94,ZEXT1632(auVar90),7);
    auVar95 = vperm2f128_avx(auVar85,auVar85,1);
    auVar95 = vblendps_avx(auVar85,auVar95,0x44);
    auVar105 = vpermilps_avx(auVar95,auVar84);
    auVar95 = vperm2f128_avx(auVar94,auVar94,1);
    auVar84 = vunpcklpd_avx(auVar95,auVar89);
    auVar84 = vshufps_avx(auVar102,auVar84,0x24);
    auVar84 = vblendps_avx(auVar105,auVar84,0xa4);
    *(undefined1 (*) [16])(param_2 + 0x10 + uVar54 * 0xc) = auVar84._16_16_;
    *(undefined1 (*) [16])(param_2 + uVar54 * 0xc) = auVar84._0_16_;
    auVar94 = vpermilps_avx(auVar94,auVar86);
    auVar84 = vshufps_avx(auVar95,auVar95,0xa9);
    auVar84 = vblendps_avx(auVar84,auVar94,0x44);
    auVar94 = vshufpd_avx(auVar85,auVar85,1);
    auVar84 = vblendps_avx(auVar84,auVar94,0x92);
    *(undefined1 (*) [16])(param_2 + 0x30 + uVar54 * 0xc) = auVar84._16_16_;
    *(undefined1 (*) [16])(param_2 + 0x20 + uVar54 * 0xc) = auVar84._0_16_;
    auVar136 = vshufps_avx(auVar136,auVar108,0x9e);
    auVar108 = vshufps_avx(auVar108,auVar108,0xff);
    auVar107._16_16_ = auVar108;
    auVar107._0_16_ = auVar136;
    auVar94 = vperm2f128_avx(auVar89,ZEXT1632(auVar136),0x21);
    auVar84 = vblendps_avx(auVar107,auVar89,0xe0);
    auVar94 = vshufps_avx(auVar94,auVar84,0x21);
    auVar84 = vshufps_avx(auVar94,auVar84,0xc2);
    *(undefined1 (*) [16])(param_2 + 0x50 + uVar54 * 0xc) = auVar84._16_16_;
    *(undefined1 (*) [16])(param_2 + 0x40 + uVar54 * 0xc) = auVar84._0_16_;
  }
  else {
    auVar91 = auVar149._16_16_;
    auVar145 = auVar89._16_16_;
    if ((uVar39 & 1) != 0) {
      *(float *)*pauVar77 = auVar139._0_4_;
    }
    if ((uVar39 & 2) != 0) {
      uVar42 = vextractps_avx(auVar139,1);
      *(undefined4 *)(*pauVar77 + 0xc) = uVar42;
    }
    if ((uVar39 & 4) != 0) {
      uVar42 = vextractps_avx(auVar139,2);
      *(undefined4 *)(pauVar77[1] + 8) = uVar42;
    }
    if ((uVar39 & 8) != 0) {
      uVar42 = vextractps_avx(auVar139,3);
      *(undefined4 *)(pauVar77[2] + 4) = uVar42;
    }
    if ((uVar39 & 0x10) != 0) {
      *(float *)pauVar77[3] = auVar143._16_4_;
    }
    if ((uVar39 & 0x20) != 0) {
      uVar42 = vextractps_avx(auVar90,1);
      *(undefined4 *)(pauVar77[3] + 0xc) = uVar42;
    }
    if ((uVar39 & 0x40) != 0) {
      uVar42 = vextractps_avx(auVar90,2);
      *(undefined4 *)(pauVar77[4] + 8) = uVar42;
    }
    if (cVar61 < '\0') {
      uVar42 = vextractps_avx(auVar90,3);
      *(undefined4 *)(pauVar77[5] + 4) = uVar42;
    }
    if ((uVar39 & 1) != 0) {
      *(float *)(*pauVar77 + 4) = auVar151._0_4_;
    }
    if ((uVar39 & 2) != 0) {
      uVar42 = vextractps_avx(auVar151,1);
      *(undefined4 *)pauVar77[1] = uVar42;
    }
    if ((uVar39 & 4) != 0) {
      uVar42 = vextractps_avx(auVar151,2);
      *(undefined4 *)(pauVar77[1] + 0xc) = uVar42;
    }
    if ((uVar39 & 8) != 0) {
      uVar42 = vextractps_avx(auVar151,3);
      *(undefined4 *)(pauVar77[2] + 8) = uVar42;
    }
    if ((uVar39 & 0x10) != 0) {
      *(float *)(pauVar77[3] + 4) = auVar154._16_4_;
    }
    if ((uVar39 & 0x20) != 0) {
      uVar42 = vextractps_avx(auVar101,1);
      *(undefined4 *)pauVar77[4] = uVar42;
    }
    if ((uVar39 & 0x40) != 0) {
      uVar42 = vextractps_avx(auVar101,2);
      *(undefined4 *)(pauVar77[4] + 0xc) = uVar42;
    }
    if (cVar61 < '\0') {
      uVar42 = vextractps_avx(auVar101,3);
      *(undefined4 *)(pauVar77[5] + 8) = uVar42;
    }
    if ((uVar39 & 1) != 0) {
      *(float *)(*pauVar77 + 8) = auVar147._0_4_;
    }
    if ((uVar39 & 2) != 0) {
      uVar42 = vextractps_avx(auVar147,1);
      *(undefined4 *)(pauVar77[1] + 4) = uVar42;
    }
    if ((uVar39 & 4) != 0) {
      uVar42 = vextractps_avx(auVar147,2);
      *(undefined4 *)pauVar77[2] = uVar42;
    }
    if ((uVar39 & 8) != 0) {
      uVar42 = vextractps_avx(auVar147,3);
      *(undefined4 *)(pauVar77[2] + 0xc) = uVar42;
    }
    if ((uVar39 & 0x10) != 0) {
      *(float *)(pauVar77[3] + 8) = auVar149._16_4_;
    }
    if ((uVar39 & 0x20) != 0) {
      uVar42 = vextractps_avx(auVar91,1);
      *(undefined4 *)(pauVar77[4] + 4) = uVar42;
    }
    if ((uVar39 & 0x40) != 0) {
      uVar42 = vextractps_avx(auVar91,2);
      *(undefined4 *)pauVar77[5] = uVar42;
    }
    if (cVar61 < '\0') {
      uVar42 = vextractps_avx(auVar91,3);
      *(undefined4 *)(pauVar77[5] + 0xc) = uVar42;
    }
    uVar38 = param_2 + uVar54 * 0xc;
    if ((uVar39 & 1) != 0) {
      *(float *)uVar38 = auVar110._0_4_;
    }
    if ((uVar39 & 2) != 0) {
      fVar1 = (float)vextractps_avx(auVar110,1);
      *(float *)(uVar38 + 0xc) = fVar1;
    }
    if ((uVar39 & 4) != 0) {
      fVar1 = (float)vextractps_avx(auVar110,2);
      *(float *)(uVar38 + 0x18) = fVar1;
    }
    if ((uVar39 & 8) != 0) {
      fVar1 = (float)vextractps_avx(auVar110,3);
      *(float *)(uVar38 + 0x24) = fVar1;
    }
    if ((uVar39 & 0x10) != 0) {
      *(float *)(uVar38 + 0x30) = auVar117._16_4_;
    }
    if ((uVar39 & 0x20) != 0) {
      fVar1 = (float)vextractps_avx(auVar136,1);
      *(float *)(uVar38 + 0x3c) = fVar1;
    }
    if ((uVar39 & 0x40) != 0) {
      fVar1 = (float)vextractps_avx(auVar136,2);
      *(float *)(uVar38 + 0x48) = fVar1;
    }
    if (cVar61 < '\0') {
      fVar1 = (float)vextractps_avx(auVar136,3);
      *(float *)(uVar38 + 0x54) = fVar1;
    }
    if ((uVar39 & 1) != 0) {
      *(float *)(uVar38 + 4) = auVar120._0_4_;
    }
    if ((uVar39 & 2) != 0) {
      fVar1 = (float)vextractps_avx(auVar120,1);
      *(float *)(uVar38 + 0x10) = fVar1;
    }
    if ((uVar39 & 4) != 0) {
      fVar1 = (float)vextractps_avx(auVar120,2);
      *(float *)(uVar38 + 0x1c) = fVar1;
    }
    if ((uVar39 & 8) != 0) {
      fVar1 = (float)vextractps_avx(auVar120,3);
      *(float *)(uVar38 + 0x28) = fVar1;
    }
    if ((uVar39 & 0x10) != 0) {
      *(float *)(uVar38 + 0x34) = auVar124._16_4_;
    }
    if ((uVar39 & 0x20) != 0) {
      fVar1 = (float)vextractps_avx(auVar108,1);
      *(float *)(uVar38 + 0x40) = fVar1;
    }
    if ((uVar39 & 0x40) != 0) {
      fVar1 = (float)vextractps_avx(auVar108,2);
      *(float *)(uVar38 + 0x4c) = fVar1;
    }
    if (cVar61 < '\0') {
      fVar1 = (float)vextractps_avx(auVar108,3);
      *(float *)(uVar38 + 0x58) = fVar1;
    }
    if ((uVar39 & 1) != 0) {
      *(float *)(uVar38 + 8) = auVar83._0_4_;
    }
    if ((uVar39 & 2) != 0) {
      fVar1 = (float)vextractps_avx(auVar83,1);
      *(float *)(uVar38 + 0x14) = fVar1;
    }
    if ((uVar39 & 4) != 0) {
      fVar1 = (float)vextractps_avx(auVar83,2);
      *(float *)(uVar38 + 0x20) = fVar1;
    }
    if ((uVar39 & 8) != 0) {
      fVar1 = (float)vextractps_avx(auVar83,3);
      *(float *)(uVar38 + 0x2c) = fVar1;
    }
    if ((uVar39 & 0x10) != 0) {
      *(float *)(uVar38 + 0x38) = auVar89._16_4_;
    }
    if ((uVar39 & 0x20) != 0) {
      fVar1 = (float)vextractps_avx(auVar145,1);
      *(float *)(uVar38 + 0x44) = fVar1;
    }
    if ((uVar39 & 0x40) != 0) {
      fVar1 = (float)vextractps_avx(auVar145,2);
      *(float *)(uVar38 + 0x50) = fVar1;
    }
    if (cVar61 < '\0') {
      fVar1 = (float)vextractps_avx(auVar145,3);
      *(float *)(uVar38 + 0x5c) = fVar1;
    }
  }
  return;
}

// ApplyMultiResConstraints_avx @ 1405abea0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyMultiResConstraints_avx
               (undefined1 (*param_1) [32],longlong param_2,longlong param_3,longlong param_4,
               uint param_5,uint param_6,uint param_7,uint param_8)

{
  undefined1 (*pauVar1) [32];
  undefined1 (*pauVar2) [32];
  undefined1 (*pauVar3) [32];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined4 uVar19;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined4 uVar20;
  undefined1 (*pauVar21) [32];
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined4 uVar30;
  longlong lVar29;
  uint uVar31;
  uint uVar32;
  ulonglong uVar33;
  ulonglong uVar35;
  undefined1 (*pauVar36) [16];
  undefined1 (*pauVar37) [32];
  longlong lVar38;
  ulonglong uVar39;
  undefined4 uVar40;
  ulonglong in_R10;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  float fVar45;
  float fVar56;
  float fVar57;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar59 [16];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  float fVar58;
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar60 [16];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  uint uVar79;
  undefined1 auVar70 [16];
  uint uVar78;
  uint uVar80;
  uint uVar81;
  uint uVar82;
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  uint uVar83;
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
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
  undefined1 auVar97 [16];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  uint uVar106;
  undefined1 auVar105 [32];
  undefined1 auVar107 [16];
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
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  undefined1 auVar128 [32];
  undefined1 auVar129 [16];
  undefined1 auVar130 [32];
  float fVar137;
  undefined1 auVar131 [32];
  undefined1 auVar132 [32];
  float fVar134;
  float fVar135;
  float fVar136;
  undefined1 auVar133 [64];
  undefined1 auVar138 [32];
  uint uVar141;
  undefined1 auVar139 [32];
  undefined1 auVar140 [32];
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
  undefined1 auVar152 [32];
  undefined1 auVar153 [32];
  undefined1 auVar154 [32];
  undefined1 auVar155 [32];
  undefined1 auVar156 [32];
  undefined1 auVar157 [32];
  undefined1 auStack_460 [28];
  char local_444;
  undefined1 local_3a0 [32];
  undefined1 local_320 [32];
  undefined1 local_2a0 [32];
  undefined1 local_280 [32];
  float local_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float local_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  ulonglong uVar34;
  
  uVar32 = param_8 + 7;
  if (-1 < (int)param_8) {
    uVar32 = param_8;
  }
  pauVar21 = param_1;
  if ((int)(uVar32 & 0xfffffff8) < 1) {
    uVar33 = 0;
  }
  else {
    auVar48 = vshufps_avx(ZEXT416(param_6),ZEXT416(param_6),0);
    auVar133 = ZEXT3264(CONCAT1616(auVar48,auVar48));
    auVar48 = vshufps_avx(ZEXT416(param_7),ZEXT416(param_7),0);
    auVar60 = vshufps_avx(ZEXT416(param_5),ZEXT416(param_5),0);
    uVar33 = 0;
    lVar38 = 0;
    pauVar37 = param_1;
    lVar18 = param_4;
    do {
      pauVar1 = pauVar37 + 1;
      pauVar2 = pauVar37 + 2;
      pauVar3 = pauVar37 + 3;
      auVar71._16_16_ = *(undefined1 (*) [16])*pauVar2;
      auVar71._0_16_ = *(undefined1 (*) [16])*pauVar37;
      auVar84._16_16_ = *(undefined1 (*) [16])(pauVar37[2] + 0x10);
      auVar84._0_16_ = *(undefined1 (*) [16])(*pauVar37 + 0x10);
      auVar98._16_16_ = *(undefined1 (*) [16])*pauVar3;
      auVar98._0_16_ = *(undefined1 (*) [16])*pauVar1;
      auVar108._16_16_ = *(undefined1 (*) [16])(pauVar37[3] + 0x10);
      auVar108._0_16_ = *(undefined1 (*) [16])(pauVar37[1] + 0x10);
      auVar51 = vunpcklps_avx(auVar71,auVar84);
      auVar71 = vunpckhps_avx(auVar71,auVar84);
      auVar114 = vunpcklps_avx(auVar98,auVar108);
      auVar84 = vunpckhps_avx(auVar98,auVar108);
      auVar98 = vunpcklpd_avx(auVar51,auVar114);
      auVar51 = vunpckhpd_avx(auVar51,auVar114);
      auVar114 = vunpcklpd_avx(auVar71,auVar84);
      auVar84 = vunpckhpd_avx(auVar71,auVar84);
      auVar71 = vcmpps_avx(ZEXT832(0) << 0x20,auVar84,1);
      uVar13 = vmovmskps_avx(auVar71);
      if (uVar13 != 0) {
        local_444 = (char)uVar13;
        if (local_444 == -1) {
          auVar46 = *(undefined1 (*) [16])(param_2 + 0x10 + lVar38);
          auVar47 = *(undefined1 (*) [16])(param_2 + 0x30 + lVar38);
          auVar143._16_16_ = auVar46;
          auVar143._0_16_ = *(undefined1 (*) [16])(param_2 + lVar38);
          auVar100._16_16_ = auVar47;
          auVar100._0_16_ = *(undefined1 (*) [16])(param_2 + 0x20 + lVar38);
          auVar59 = *(undefined1 (*) [16])(param_2 + 0x50 + lVar38);
          auVar97 = *(undefined1 (*) [16])(param_2 + 0x40 + lVar38);
          auVar150._16_16_ = auVar59;
          auVar150._0_16_ = auVar97;
          auVar86._16_16_ = *(undefined1 (*) [16])(param_2 + lVar38);
          auVar86._0_16_ = auVar46;
          auVar108 = vblendps_avx(auVar143,auVar86,0x24);
          auVar108 = vpermilps_avx(auVar108,
                                   ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                                  );
          uVar40 = *(undefined4 *)(param_2 + 0x28 + lVar38);
          auVar153._20_4_ = uVar40;
          auVar153._16_4_ = uVar40;
          auVar153._24_4_ = uVar40;
          auVar153._28_4_ = uVar40;
          uVar40 = *(undefined4 *)(param_2 + 0x24 + lVar38);
          auVar153._4_4_ = uVar40;
          auVar153._0_4_ = uVar40;
          auVar153._8_4_ = uVar40;
          auVar153._12_4_ = uVar40;
          auVar108 = vblendps_avx(auVar108,auVar153,0x88);
          auVar154._16_16_ = auVar97;
          auVar154._0_16_ = auVar59;
          auVar99 = vblendps_avx(auVar154,auVar150,0x44);
          auVar99 = vpermilps_avx(auVar99,
                                  ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                                 );
          uVar40 = *(undefined4 *)(param_2 + 0x34 + lVar38);
          auVar110._20_4_ = uVar40;
          auVar110._16_4_ = uVar40;
          auVar110._24_4_ = uVar40;
          auVar110._28_4_ = uVar40;
          auVar47 = vshufps_avx(auVar47,auVar47,0xec);
          auVar110._0_16_ = auVar47;
          auVar99 = vblendps_avx(auVar99,auVar110,0x13);
          local_2a0._16_16_ = auVar99._0_16_;
          local_2a0._0_16_ = auVar108._0_16_;
          auVar109 = vperm2f128_avx(auVar108,auVar99,0x31);
          auVar108 = vblendps_avx(auVar100,auVar143,0x24);
          auVar108 = vshufps_avx(ZEXT1632(auVar46),auVar108,0x21);
          auVar108 = vshufps_avx(auVar108,auVar100,0xc2);
          auVar99 = vshufps_avx(auVar154,auVar150,0xc4);
          local_3a0 = vblendps_avx(auVar108,auVar99,0xe0);
          auVar46 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar38);
          auVar47 = *(undefined1 (*) [16])(param_3 + 0x30 + lVar38);
          auVar151._16_16_ = auVar46;
          auVar151._0_16_ = *(undefined1 (*) [16])(param_3 + lVar38);
          auVar155._16_16_ = auVar47;
          auVar155._0_16_ = *(undefined1 (*) [16])(param_3 + 0x20 + lVar38);
          auVar59 = *(undefined1 (*) [16])(param_3 + 0x50 + lVar38);
          auVar97 = *(undefined1 (*) [16])(param_3 + 0x40 + lVar38);
          auVar49._16_16_ = auVar59;
          auVar49._0_16_ = auVar97;
          auVar73._16_16_ = *(undefined1 (*) [16])(param_3 + lVar38);
          auVar73._0_16_ = auVar46;
          auVar108 = vblendps_avx(auVar151,auVar73,0x24);
          auVar108 = vpermilps_avx(auVar108,
                                   ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                                  );
          uVar40 = *(undefined4 *)(param_3 + 0x28 + lVar38);
          auVar61._20_4_ = uVar40;
          auVar61._16_4_ = uVar40;
          auVar61._24_4_ = uVar40;
          auVar61._28_4_ = uVar40;
          uVar40 = *(undefined4 *)(param_3 + 0x24 + lVar38);
          auVar61._4_4_ = uVar40;
          auVar61._0_4_ = uVar40;
          auVar61._8_4_ = uVar40;
          auVar61._12_4_ = uVar40;
          auVar108 = vblendps_avx(auVar108,auVar61,0x88);
          auVar64._16_16_ = auVar97;
          auVar64._0_16_ = auVar59;
          auVar99 = vblendps_avx(auVar64,auVar49,0x44);
          auVar99 = vpermilps_avx(auVar99,
                                  ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                                 );
          uVar40 = *(undefined4 *)(param_3 + 0x34 + lVar38);
          auVar87._20_4_ = uVar40;
          auVar87._16_4_ = uVar40;
          auVar87._24_4_ = uVar40;
          auVar87._28_4_ = uVar40;
          auVar47 = vshufps_avx(auVar47,auVar47,0xec);
          auVar87._0_16_ = auVar47;
          auVar99 = vblendps_avx(auVar99,auVar87,0x13);
          auVar72._16_16_ = auVar99._0_16_;
          auVar72._0_16_ = auVar108._0_16_;
          auVar85 = vperm2f128_avx(auVar108,auVar99,0x31);
          auVar108 = vblendps_avx(auVar155,auVar151,0x24);
          auVar108 = vshufps_avx(ZEXT1632(auVar46),auVar108,0x21);
          auVar108 = vshufps_avx(auVar108,auVar155,0xc2);
          auVar99 = vshufps_avx(auVar64,auVar49,0xc4);
          auVar99 = vblendps_avx(auVar108,auVar99,0xe0);
          auVar46 = *(undefined1 (*) [16])(param_4 + 0x10 + lVar38);
          auVar47 = *(undefined1 (*) [16])(param_4 + 0x30 + lVar38);
          auVar156._16_16_ = auVar46;
          auVar156._0_16_ = *(undefined1 (*) [16])(param_4 + lVar38);
          auVar65._16_16_ = auVar47;
          auVar65._0_16_ = *(undefined1 (*) [16])(param_4 + 0x20 + lVar38);
          auVar59 = *(undefined1 (*) [16])(param_4 + 0x50 + lVar38);
          auVar97 = *(undefined1 (*) [16])(param_4 + 0x40 + lVar38);
          auVar130._16_16_ = auVar59;
          auVar130._0_16_ = auVar97;
          auVar50._16_16_ = *(undefined1 (*) [16])(param_4 + lVar38);
          auVar50._0_16_ = auVar46;
          auVar108 = vblendps_avx(auVar156,auVar50,0x24);
          auVar108 = vpermilps_avx(auVar108,
                                   ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                                  );
          uVar40 = *(undefined4 *)(param_4 + 0x28 + lVar38);
          auVar120._20_4_ = uVar40;
          auVar120._16_4_ = uVar40;
          auVar120._24_4_ = uVar40;
          auVar120._28_4_ = uVar40;
          uVar40 = *(undefined4 *)(param_4 + 0x24 + lVar38);
          auVar120._4_4_ = uVar40;
          auVar120._0_4_ = uVar40;
          auVar120._8_4_ = uVar40;
          auVar120._12_4_ = uVar40;
          auVar108 = vblendps_avx(auVar108,auVar120,0x88);
          auVar121._16_16_ = auVar97;
          auVar121._0_16_ = auVar59;
          auVar152 = vblendps_avx(auVar121,auVar130,0x44);
          auVar152 = vpermilps_avx(auVar152,
                                   ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                                  );
          uVar40 = *(undefined4 *)(param_4 + 0x34 + lVar38);
          auVar144._20_4_ = uVar40;
          auVar144._16_4_ = uVar40;
          auVar144._24_4_ = uVar40;
          auVar144._28_4_ = uVar40;
          auVar47 = vshufps_avx(auVar47,auVar47,0xec);
          auVar144._0_16_ = auVar47;
          auVar152 = vblendps_avx(auVar152,auVar144,0x13);
          auVar142._16_16_ = auVar152._0_16_;
          auVar142._0_16_ = auVar108._0_16_;
          auVar149 = vperm2f128_avx(auVar108,auVar152,0x31);
          auVar108 = vblendps_avx(auVar65,auVar156,0x24);
          auVar108 = vshufps_avx(ZEXT1632(auVar46),auVar108,0x21);
          auVar108 = vshufps_avx(auVar108,auVar65,0xc2);
          auVar152 = vshufps_avx(auVar121,auVar130,0xc4);
          auVar133 = ZEXT3264(auVar133._0_32_);
          auVar152 = vblendps_avx(auVar108,auVar152,0xe0);
        }
        else {
          uVar78 = auVar71._0_4_;
          auVar46._0_4_ =
               uVar78 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000;
          uVar79 = auVar71._4_4_;
          auVar46._4_4_ = uVar79 & _UNK_150b50b04;
          uVar80 = auVar71._8_4_;
          auVar46._8_4_ = uVar80 & _UNK_150b50b08;
          uVar81 = auVar71._12_4_;
          auVar46._12_4_ = uVar81 & _UNK_150b50b0c;
          uVar82 = auVar71._16_4_;
          uVar83 = auVar71._20_4_;
          uVar106 = auVar71._24_4_;
          uVar141 = auVar71._28_4_;
          uVar31 = vextractps_avx(auVar46,1);
          uVar34 = (ulonglong)uVar31;
          uVar40 = vextractps_avx(auVar46,2);
          lVar14 = CONCAT44((int)((ulonglong)lVar18 >> 0x20),uVar40);
          uVar40 = vextractps_avx(auVar46,3);
          lVar29 = CONCAT44((int)(in_R10 >> 0x20),uVar40);
          uVar42 = (ulonglong)(uVar83 & _UNK_150b50b14);
          in_R10 = (ulonglong)(uVar106 & _UNK_150b50b18);
          uVar43 = (ulonglong)(uVar141 & _UNK_150b50b1c);
          lVar18 = param_2 + lVar38;
          auVar46 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + lVar38)),
                                  ZEXT416(*(uint *)(uVar34 + lVar18)),0x10);
          auVar46 = vinsertps_avx(auVar46,ZEXT416(*(uint *)(lVar14 + lVar18)),0x20);
          auVar46 = vinsertps_avx(auVar46,ZEXT416(*(uint *)(lVar29 + lVar18)),0x30);
          uVar15 = (ulonglong)(uVar82 & _UNK_150b50b10);
          auVar47 = vinsertps_avx(ZEXT416(*(uint *)(uVar15 + lVar18)),
                                  ZEXT416(*(uint *)(uVar42 + lVar18)),0x10);
          auVar47 = vinsertps_avx(auVar47,ZEXT416(*(uint *)(in_R10 + lVar18)),0x20);
          auVar47 = vinsertps_avx(auVar47,ZEXT416(*(uint *)(uVar43 + lVar18)),0x30);
          uVar16 = (ulonglong)(uVar83 & _UNK_150b50b34);
          uVar35 = (ulonglong)(uVar106 & _UNK_150b50b38);
          uVar39 = (ulonglong)(uVar141 & _UNK_150b50b3c);
          uVar41 = (ulonglong)(uVar82 & _UNK_150b50b30);
          auVar59 = vinsertps_avx(ZEXT416(*(uint *)(uVar41 + lVar18)),
                                  ZEXT416(*(uint *)(uVar16 + lVar18)),0x10);
          auVar59 = vinsertps_avx(auVar59,ZEXT416(*(uint *)(uVar35 + lVar18)),0x20);
          auVar59 = vinsertps_avx(auVar59,ZEXT416(*(uint *)(uVar39 + lVar18)),0x30);
          uVar11 = (ulonglong)
                   (uVar78 & ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                   );
          uVar9 = (ulonglong)(uVar79 & _UNK_150b50b24);
          auVar97 = vinsertps_avx(ZEXT416(*(uint *)(uVar11 + lVar18)),
                                  ZEXT416(*(uint *)(uVar9 + lVar18)),0x10);
          uVar17 = (ulonglong)(uVar80 & _UNK_150b50b28);
          auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(uVar17 + lVar18)),0x20);
          uVar22 = (ulonglong)(uVar81 & _UNK_150b50b2c);
          auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(uVar22 + lVar18)),0x30);
          uVar23 = (ulonglong)(uVar82 & _UNK_150b50b50);
          uVar24 = (ulonglong)(uVar83 & _UNK_150b50b54);
          auVar107 = vinsertps_avx(ZEXT416(*(uint *)(uVar23 + lVar18)),
                                   ZEXT416(*(uint *)(uVar24 + lVar18)),0x10);
          uVar25 = (ulonglong)(uVar106 & _UNK_150b50b58);
          auVar107 = vinsertps_avx(auVar107,ZEXT416(*(uint *)(uVar25 + lVar18)),0x20);
          uVar26 = (ulonglong)(uVar141 & _UNK_150b50b5c);
          auVar107 = vinsertps_avx(auVar107,ZEXT416(*(uint *)(uVar26 + lVar18)),0x30);
          uVar12 = (ulonglong)
                   (uVar78 & ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008
                   );
          uVar10 = (ulonglong)(uVar79 & _UNK_150b50b44);
          auVar70 = vinsertps_avx(ZEXT416(*(uint *)(uVar12 + lVar18)),
                                  ZEXT416(*(uint *)(uVar10 + lVar18)),0x10);
          uVar27 = (ulonglong)(uVar80 & _UNK_150b50b48);
          auVar70 = vinsertps_avx(auVar70,ZEXT416(*(uint *)(uVar27 + lVar18)),0x20);
          uVar28 = (ulonglong)(uVar81 & _UNK_150b50b4c);
          auVar70 = vinsertps_avx(auVar70,ZEXT416(*(uint *)(uVar28 + lVar18)),0x30);
          local_2a0._16_16_ = auVar47;
          local_2a0._0_16_ = auVar46;
          auVar109._16_16_ = auVar59;
          auVar109._0_16_ = auVar97;
          local_3a0._16_16_ = auVar107;
          local_3a0._0_16_ = auVar70;
          lVar18 = param_3 + lVar38;
          auVar46 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + lVar38)),
                                  ZEXT416(*(uint *)(uVar34 + lVar18)),0x10);
          auVar46 = vinsertps_avx(auVar46,ZEXT416(*(uint *)(lVar14 + lVar18)),0x20);
          auVar46 = vinsertps_avx(auVar46,ZEXT416(*(uint *)(lVar29 + lVar18)),0x30);
          auVar47 = vinsertps_avx(ZEXT416(*(uint *)(uVar15 + lVar18)),
                                  ZEXT416(*(uint *)(uVar42 + lVar18)),0x10);
          auVar47 = vinsertps_avx(auVar47,ZEXT416(*(uint *)(in_R10 + lVar18)),0x20);
          auVar47 = vinsertps_avx(auVar47,ZEXT416(*(uint *)(uVar43 + lVar18)),0x30);
          auVar59 = vinsertps_avx(ZEXT416(*(uint *)(uVar41 + lVar18)),
                                  ZEXT416(*(uint *)(uVar16 + lVar18)),0x10);
          auVar59 = vinsertps_avx(auVar59,ZEXT416(*(uint *)(uVar35 + lVar18)),0x20);
          auVar59 = vinsertps_avx(auVar59,ZEXT416(*(uint *)(uVar39 + lVar18)),0x30);
          auVar97 = vinsertps_avx(ZEXT416(*(uint *)(uVar11 + lVar18)),
                                  ZEXT416(*(uint *)(uVar9 + lVar18)),0x10);
          auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(uVar17 + lVar18)),0x20);
          auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(uVar22 + lVar18)),0x30);
          auVar107 = vinsertps_avx(ZEXT416(*(uint *)(uVar23 + lVar18)),
                                   ZEXT416(*(uint *)(uVar24 + lVar18)),0x10);
          auVar107 = vinsertps_avx(auVar107,ZEXT416(*(uint *)(uVar25 + lVar18)),0x20);
          auVar107 = vinsertps_avx(auVar107,ZEXT416(*(uint *)(uVar26 + lVar18)),0x30);
          auVar70 = vinsertps_avx(ZEXT416(*(uint *)(uVar12 + lVar18)),
                                  ZEXT416(*(uint *)(uVar10 + lVar18)),0x10);
          auVar70 = vinsertps_avx(auVar70,ZEXT416(*(uint *)(uVar27 + lVar18)),0x20);
          auVar70 = vinsertps_avx(auVar70,ZEXT416(*(uint *)(uVar28 + lVar18)),0x30);
          lVar18 = param_4 + lVar38;
          auVar129 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + lVar38)),
                                   ZEXT416(*(uint *)(uVar34 + lVar18)),0x10);
          auVar129 = vinsertps_avx(auVar129,ZEXT416(*(uint *)(lVar14 + lVar18)),0x20);
          auVar129 = vinsertps_avx(auVar129,ZEXT416(*(uint *)(lVar29 + lVar18)),0x30);
          auVar4 = vinsertps_avx(ZEXT416(*(uint *)(uVar15 + lVar18)),
                                 ZEXT416(*(uint *)(uVar42 + lVar18)),0x10);
          auVar4 = vinsertps_avx(auVar4,ZEXT416(*(uint *)(in_R10 + lVar18)),0x20);
          auVar4 = vinsertps_avx(auVar4,ZEXT416(*(uint *)(uVar43 + lVar18)),0x30);
          auVar5 = vinsertps_avx(ZEXT416(*(uint *)(uVar41 + lVar18)),
                                 ZEXT416(*(uint *)(uVar16 + lVar18)),0x10);
          auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(uVar35 + lVar18)),0x20);
          auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(uVar39 + lVar18)),0x30);
          auVar6 = vinsertps_avx(ZEXT416(*(uint *)(uVar11 + lVar18)),
                                 ZEXT416(*(uint *)(uVar9 + lVar18)),0x10);
          auVar6 = vinsertps_avx(auVar6,ZEXT416(*(uint *)(uVar17 + lVar18)),0x20);
          auVar6 = vinsertps_avx(auVar6,ZEXT416(*(uint *)(uVar22 + lVar18)),0x30);
          auVar7 = vinsertps_avx(ZEXT416(*(uint *)(uVar23 + lVar18)),
                                 ZEXT416(*(uint *)(uVar24 + lVar18)),0x10);
          auVar7 = vinsertps_avx(auVar7,ZEXT416(*(uint *)(uVar25 + lVar18)),0x20);
          auVar7 = vinsertps_avx(auVar7,ZEXT416(*(uint *)(uVar26 + lVar18)),0x30);
          auVar8 = vinsertps_avx(ZEXT416(*(uint *)(uVar12 + lVar18)),
                                 ZEXT416(*(uint *)(uVar10 + lVar18)),0x10);
          auVar8 = vinsertps_avx(auVar8,ZEXT416(*(uint *)(uVar27 + lVar18)),0x20);
          auVar8 = vinsertps_avx(auVar8,ZEXT416(*(uint *)(uVar28 + lVar18)),0x30);
          auVar72._16_16_ = auVar47;
          auVar72._0_16_ = auVar46;
          auVar85._16_16_ = auVar59;
          auVar85._0_16_ = auVar97;
          auVar99._16_16_ = auVar107;
          auVar99._0_16_ = auVar70;
          auVar142._16_16_ = auVar4;
          auVar142._0_16_ = auVar129;
          auVar149._16_16_ = auVar5;
          auVar149._0_16_ = auVar6;
          auVar152._16_16_ = auVar7;
          auVar152._0_16_ = auVar8;
          lVar18 = lVar38;
        }
        auVar108 = vsubps_avx(auVar98,auVar72);
        auVar85 = vsubps_avx(auVar51,auVar85);
        auVar99 = vsubps_avx(auVar114,auVar99);
        fVar45 = auVar133._0_4_;
        auVar74._0_4_ = fVar45 * auVar108._0_4_;
        fVar56 = auVar133._4_4_;
        auVar74._4_4_ = fVar56 * auVar108._4_4_;
        fVar57 = auVar133._8_4_;
        auVar74._8_4_ = fVar57 * auVar108._8_4_;
        fVar58 = auVar133._12_4_;
        auVar74._12_4_ = fVar58 * auVar108._12_4_;
        fVar134 = auVar133._16_4_;
        auVar74._16_4_ = fVar134 * auVar108._16_4_;
        fVar135 = auVar133._20_4_;
        auVar74._20_4_ = fVar135 * auVar108._20_4_;
        fVar136 = auVar133._24_4_;
        auVar74._24_4_ = fVar136 * auVar108._24_4_;
        fVar137 = auVar133._28_4_;
        auVar74._28_4_ = fVar137 * auVar108._28_4_;
        auVar88._0_4_ = fVar45 * auVar85._0_4_;
        auVar88._4_4_ = fVar56 * auVar85._4_4_;
        auVar88._8_4_ = fVar57 * auVar85._8_4_;
        auVar88._12_4_ = fVar58 * auVar85._12_4_;
        auVar88._16_4_ = fVar134 * auVar85._16_4_;
        auVar88._20_4_ = fVar135 * auVar85._20_4_;
        auVar88._24_4_ = fVar136 * auVar85._24_4_;
        auVar88._28_4_ = fVar137 * auVar85._28_4_;
        auVar101._0_4_ = fVar45 * auVar99._0_4_;
        auVar101._4_4_ = fVar56 * auVar99._4_4_;
        auVar101._8_4_ = fVar57 * auVar99._8_4_;
        auVar101._12_4_ = fVar58 * auVar99._12_4_;
        auVar101._16_4_ = fVar134 * auVar99._16_4_;
        auVar101._20_4_ = fVar135 * auVar99._20_4_;
        auVar101._24_4_ = fVar136 * auVar99._24_4_;
        auVar101._28_4_ = fVar137 * auVar99._28_4_;
        auVar98 = vsubps_avx(auVar98,auVar74);
        auVar108 = vsubps_avx(auVar51,auVar88);
        auVar114 = vsubps_avx(auVar114,auVar101);
        auVar51 = vmaskmovps_avx(auVar71,auVar98);
        auVar98 = vmaskmovps_avx(auVar71,auVar108);
        auVar114 = vmaskmovps_avx(auVar71,auVar114);
        auVar108 = vsubps_avx(auVar51,local_2a0);
        auVar99 = vsubps_avx(auVar98,auVar109);
        auVar109 = vsubps_avx(auVar114,local_3a0);
        local_1a0 = auVar60._0_4_;
        fStack_19c = auVar60._4_4_;
        fStack_198 = auVar60._8_4_;
        fStack_194 = auVar60._12_4_;
        auVar111._0_4_ = auVar142._0_4_ * local_1a0;
        auVar111._4_4_ = auVar142._4_4_ * fStack_19c;
        auVar111._8_4_ = auVar142._8_4_ * fStack_198;
        auVar111._12_4_ = auVar142._12_4_ * fStack_194;
        auVar111._16_4_ = auVar142._16_4_ * local_1a0;
        auVar111._20_4_ = auVar142._20_4_ * fStack_19c;
        auVar111._24_4_ = auVar142._24_4_ * fStack_198;
        auVar111._28_4_ = auVar142._28_4_ * fStack_194;
        auVar108 = vsubps_avx(auVar108,auVar111);
        auVar112._0_4_ = auVar149._0_4_ * local_1a0;
        auVar112._4_4_ = auVar149._4_4_ * fStack_19c;
        auVar112._8_4_ = auVar149._8_4_ * fStack_198;
        auVar112._12_4_ = auVar149._12_4_ * fStack_194;
        auVar112._16_4_ = auVar149._16_4_ * local_1a0;
        auVar112._20_4_ = auVar149._20_4_ * fStack_19c;
        auVar112._24_4_ = auVar149._24_4_ * fStack_198;
        auVar112._28_4_ = auVar149._28_4_ * fStack_194;
        auVar99 = vsubps_avx(auVar99,auVar112);
        auVar113._0_4_ = auVar152._0_4_ * local_1a0;
        auVar113._4_4_ = auVar152._4_4_ * fStack_19c;
        auVar113._8_4_ = auVar152._8_4_ * fStack_198;
        auVar113._12_4_ = auVar152._12_4_ * fStack_194;
        auVar113._16_4_ = auVar152._16_4_ * local_1a0;
        auVar113._20_4_ = auVar152._20_4_ * fStack_19c;
        auVar113._24_4_ = auVar152._24_4_ * fStack_198;
        auVar113._28_4_ = auVar152._28_4_ * fStack_194;
        auVar152 = vsubps_avx(auVar109,auVar113);
        local_180 = auVar48._0_4_;
        fStack_17c = auVar48._4_4_;
        fStack_178 = auVar48._8_4_;
        fStack_174 = auVar48._12_4_;
        auVar75._0_4_ = local_180 * auVar108._0_4_;
        auVar75._4_4_ = fStack_17c * auVar108._4_4_;
        auVar75._8_4_ = fStack_178 * auVar108._8_4_;
        auVar75._12_4_ = fStack_174 * auVar108._12_4_;
        auVar75._16_4_ = local_180 * auVar108._16_4_;
        auVar75._20_4_ = fStack_17c * auVar108._20_4_;
        auVar75._24_4_ = fStack_178 * auVar108._24_4_;
        auVar75._28_4_ = fStack_174 * auVar108._28_4_;
        auVar89._0_4_ = local_180 * auVar99._0_4_;
        auVar89._4_4_ = fStack_17c * auVar99._4_4_;
        auVar89._8_4_ = fStack_178 * auVar99._8_4_;
        auVar89._12_4_ = fStack_174 * auVar99._12_4_;
        auVar89._16_4_ = local_180 * auVar99._16_4_;
        auVar89._20_4_ = fStack_17c * auVar99._20_4_;
        auVar89._24_4_ = fStack_178 * auVar99._24_4_;
        auVar89._28_4_ = fStack_174 * auVar99._28_4_;
        auVar102._0_4_ = local_180 * auVar152._0_4_;
        auVar102._4_4_ = fStack_17c * auVar152._4_4_;
        auVar102._8_4_ = fStack_178 * auVar152._8_4_;
        auVar102._12_4_ = fStack_174 * auVar152._12_4_;
        auVar102._16_4_ = local_180 * auVar152._16_4_;
        auVar102._20_4_ = fStack_17c * auVar152._20_4_;
        auVar102._24_4_ = fStack_178 * auVar152._24_4_;
        auVar102._28_4_ = fStack_174 * auVar152._28_4_;
        auVar51 = vsubps_avx(auVar51,auVar75);
        auVar98 = vsubps_avx(auVar98,auVar89);
        auVar114 = vsubps_avx(auVar114,auVar102);
        auVar51 = vmaskmovps_avx(auVar71,auVar51);
        auVar98 = vmaskmovps_avx(auVar71,auVar98);
        auVar71 = vmaskmovps_avx(auVar71,auVar114);
        if (local_444 == -1) {
          auVar114 = vunpcklps_avx(auVar51,auVar98);
          auVar99 = vunpcklps_avx(auVar71,auVar84);
          auVar108 = vunpcklpd_avx(auVar114,auVar99);
          auVar114 = vunpckhpd_avx(auVar114,auVar99);
          auVar51 = vunpckhps_avx(auVar51,auVar98);
          auVar71 = vunpckhps_avx(auVar71,auVar84);
          auVar84 = vunpcklpd_avx(auVar51,auVar71);
          auVar71 = vunpckhpd_avx(auVar51,auVar71);
          *(undefined1 (*) [16])(*pauVar37 + 0x10) = auVar114._0_16_;
          *(undefined1 (*) [16])*pauVar37 = auVar108._0_16_;
          *(undefined1 (*) [16])(pauVar37[1] + 0x10) = auVar71._0_16_;
          *(undefined1 (*) [16])pauVar37[1] = auVar84._0_16_;
          *(undefined1 (*) [16])(pauVar37[2] + 0x10) = auVar114._16_16_;
          *(undefined1 (*) [16])pauVar37[2] = auVar108._16_16_;
          *(undefined1 (*) [16])(pauVar37[3] + 0x10) = auVar71._16_16_;
          *(undefined1 (*) [16])pauVar37[3] = auVar84._16_16_;
          pauVar21 = (undefined1 (*) [32])auStack_460;
        }
        else {
          if ((uVar13 & 1) != 0) {
            *(int *)*pauVar37 = auVar51._0_4_;
          }
          auVar46 = auVar51._0_16_;
          auVar47 = auVar51._16_16_;
          auVar107 = auVar98._0_16_;
          auVar70 = auVar98._16_16_;
          auVar59 = auVar71._0_16_;
          auVar97 = auVar71._16_16_;
          if ((uVar13 & 2) == 0) {
            if ((uVar13 & 4) == 0) goto LAB_1405ac94c;
LAB_1405acac0:
            uVar40 = vextractps_avx(auVar46,2);
            *(undefined4 *)pauVar37[1] = uVar40;
            if ((uVar13 & 8) != 0) goto LAB_1405acad1;
LAB_1405ac956:
            if ((uVar13 & 0x10) == 0) goto LAB_1405ac966;
LAB_1405acae8:
            *(int *)pauVar37[2] = auVar51._16_4_;
            if ((uVar13 & 0x20) != 0) goto LAB_1405acaf7;
LAB_1405ac970:
            if ((uVar13 & 0x40) == 0) goto LAB_1405ac97a;
LAB_1405acb08:
            uVar40 = vextractps_avx(auVar47,2);
            *(undefined4 *)pauVar37[3] = uVar40;
            if (local_444 < '\0') goto LAB_1405acb1a;
LAB_1405ac985:
            if ((uVar13 & 1) == 0) goto LAB_1405ac98f;
LAB_1405acb2b:
            *(int *)(*pauVar37 + 4) = auVar98._0_4_;
            if ((uVar13 & 2) != 0) goto LAB_1405acb3a;
LAB_1405ac999:
            if ((uVar13 & 4) == 0) goto LAB_1405ac9a3;
LAB_1405acb4b:
            uVar40 = vextractps_avx(auVar107,2);
            *(undefined4 *)(pauVar37[1] + 4) = uVar40;
            if ((uVar13 & 8) != 0) goto LAB_1405acb5c;
LAB_1405ac9ad:
            if ((uVar13 & 0x10) == 0) goto LAB_1405ac9bd;
LAB_1405acb73:
            *(int *)(pauVar37[2] + 4) = auVar98._16_4_;
            if ((uVar13 & 0x20) != 0) goto LAB_1405acb82;
LAB_1405ac9c7:
            if ((uVar13 & 0x40) == 0) goto LAB_1405ac9d1;
LAB_1405acb93:
            uVar40 = vextractps_avx(auVar70,2);
            *(undefined4 *)(pauVar37[3] + 4) = uVar40;
            if (local_444 < '\0') goto LAB_1405acba5;
LAB_1405ac9dc:
            if ((uVar13 & 1) == 0) goto LAB_1405ac9e6;
LAB_1405acbb6:
            *(int *)(*pauVar37 + 8) = auVar71._0_4_;
            if ((uVar13 & 2) != 0) goto LAB_1405acbc5;
LAB_1405ac9f0:
            if ((uVar13 & 4) == 0) goto LAB_1405ac9fa;
LAB_1405acbd6:
            uVar40 = vextractps_avx(auVar59,2);
            *(undefined4 *)(pauVar37[1] + 8) = uVar40;
            if ((uVar13 & 8) != 0) goto LAB_1405acbe7;
LAB_1405aca04:
            if ((uVar13 & 0x10) == 0) goto LAB_1405aca14;
LAB_1405acbfe:
            *(int *)(pauVar37[2] + 8) = auVar71._16_4_;
            if ((uVar13 & 0x20) != 0) goto LAB_1405acc0d;
LAB_1405aca1e:
            if ((uVar13 & 0x40) == 0) goto LAB_1405aca28;
LAB_1405acc1e:
            uVar40 = vextractps_avx(auVar97,2);
            *(undefined4 *)(pauVar37[3] + 8) = uVar40;
            if (local_444 < '\0') goto LAB_1405acc30;
LAB_1405aca33:
            if ((uVar13 & 1) == 0) goto LAB_1405aca48;
LAB_1405acc4c:
            auVar71 = *pauVar37;
            uVar40 = vextractps_avx(auVar71._0_16_,3);
            *(undefined4 *)(*pauVar37 + 0xc) = uVar40;
            if ((uVar13 & 2) != 0) goto LAB_1405acc5d;
LAB_1405aca52:
            if ((uVar13 & 4) == 0) goto LAB_1405aca62;
LAB_1405acc7a:
            auVar71 = *pauVar1;
            uVar40 = vextractps_avx(auVar71._0_16_,3);
            *(undefined4 *)(pauVar37[1] + 0xc) = uVar40;
            if ((uVar13 & 8) != 0) goto LAB_1405acc94;
LAB_1405aca75:
            if ((uVar13 & 0x10) == 0) goto LAB_1405aca85;
LAB_1405accb1:
            auVar71 = *pauVar2;
            uVar40 = vextractps_avx(auVar71._0_16_,3);
            *(undefined4 *)(pauVar37[2] + 0xc) = uVar40;
            if ((uVar13 & 0x20) != 0) goto LAB_1405accc2;
LAB_1405aca8f:
            if ((uVar13 & 0x40) == 0) goto LAB_1405aca9f;
LAB_1405accdf:
            auVar71 = *pauVar3;
            uVar40 = vextractps_avx(auVar71._0_16_,3);
            *(undefined4 *)(pauVar37[3] + 0xc) = uVar40;
          }
          else {
            uVar40 = vextractps_avx(auVar46,1);
            *(undefined4 *)(*pauVar37 + 0x10) = uVar40;
            if ((uVar13 & 4) != 0) goto LAB_1405acac0;
LAB_1405ac94c:
            if ((uVar13 & 8) == 0) goto LAB_1405ac956;
LAB_1405acad1:
            uVar40 = vextractps_avx(auVar46,3);
            *(undefined4 *)(pauVar37[1] + 0x10) = uVar40;
            if ((uVar13 & 0x10) != 0) goto LAB_1405acae8;
LAB_1405ac966:
            if ((uVar13 & 0x20) == 0) goto LAB_1405ac970;
LAB_1405acaf7:
            uVar40 = vextractps_avx(auVar47,1);
            *(undefined4 *)(pauVar37[2] + 0x10) = uVar40;
            if ((uVar13 & 0x40) != 0) goto LAB_1405acb08;
LAB_1405ac97a:
            if (-1 < local_444) goto LAB_1405ac985;
LAB_1405acb1a:
            uVar40 = vextractps_avx(auVar47,3);
            *(undefined4 *)(pauVar37[3] + 0x10) = uVar40;
            if ((uVar13 & 1) != 0) goto LAB_1405acb2b;
LAB_1405ac98f:
            if ((uVar13 & 2) == 0) goto LAB_1405ac999;
LAB_1405acb3a:
            uVar40 = vextractps_avx(auVar107,1);
            *(undefined4 *)(*pauVar37 + 0x14) = uVar40;
            if ((uVar13 & 4) != 0) goto LAB_1405acb4b;
LAB_1405ac9a3:
            if ((uVar13 & 8) == 0) goto LAB_1405ac9ad;
LAB_1405acb5c:
            uVar40 = vextractps_avx(auVar107,3);
            *(undefined4 *)(pauVar37[1] + 0x14) = uVar40;
            if ((uVar13 & 0x10) != 0) goto LAB_1405acb73;
LAB_1405ac9bd:
            if ((uVar13 & 0x20) == 0) goto LAB_1405ac9c7;
LAB_1405acb82:
            uVar40 = vextractps_avx(auVar70,1);
            *(undefined4 *)(pauVar37[2] + 0x14) = uVar40;
            if ((uVar13 & 0x40) != 0) goto LAB_1405acb93;
LAB_1405ac9d1:
            if (-1 < local_444) goto LAB_1405ac9dc;
LAB_1405acba5:
            uVar40 = vextractps_avx(auVar70,3);
            *(undefined4 *)(pauVar37[3] + 0x14) = uVar40;
            if ((uVar13 & 1) != 0) goto LAB_1405acbb6;
LAB_1405ac9e6:
            if ((uVar13 & 2) == 0) goto LAB_1405ac9f0;
LAB_1405acbc5:
            uVar40 = vextractps_avx(auVar59,1);
            *(undefined4 *)(*pauVar37 + 0x18) = uVar40;
            if ((uVar13 & 4) != 0) goto LAB_1405acbd6;
LAB_1405ac9fa:
            if ((uVar13 & 8) == 0) goto LAB_1405aca04;
LAB_1405acbe7:
            uVar40 = vextractps_avx(auVar59,3);
            *(undefined4 *)(pauVar37[1] + 0x18) = uVar40;
            if ((uVar13 & 0x10) != 0) goto LAB_1405acbfe;
LAB_1405aca14:
            if ((uVar13 & 0x20) == 0) goto LAB_1405aca1e;
LAB_1405acc0d:
            uVar40 = vextractps_avx(auVar97,1);
            *(undefined4 *)(pauVar37[2] + 0x18) = uVar40;
            if ((uVar13 & 0x40) != 0) goto LAB_1405acc1e;
LAB_1405aca28:
            if (-1 < local_444) goto LAB_1405aca33;
LAB_1405acc30:
            uVar40 = vextractps_avx(auVar97,3);
            *(undefined4 *)(pauVar37[3] + 0x18) = uVar40;
            if ((uVar13 & 1) != 0) goto LAB_1405acc4c;
LAB_1405aca48:
            auVar71 = *pauVar37;
            if ((uVar13 & 2) == 0) goto LAB_1405aca52;
LAB_1405acc5d:
            uVar40 = vextractps_avx(auVar71._16_16_,3);
            *(undefined4 *)(*pauVar37 + 0x1c) = uVar40;
            if ((uVar13 & 4) != 0) goto LAB_1405acc7a;
LAB_1405aca62:
            auVar71 = *pauVar1;
            if ((uVar13 & 8) == 0) goto LAB_1405aca75;
LAB_1405acc94:
            uVar40 = vextractps_avx(auVar71._16_16_,3);
            *(undefined4 *)(pauVar37[1] + 0x1c) = uVar40;
            if ((uVar13 & 0x10) != 0) goto LAB_1405accb1;
LAB_1405aca85:
            auVar71 = *pauVar2;
            if ((uVar13 & 0x20) == 0) goto LAB_1405aca8f;
LAB_1405accc2:
            uVar40 = vextractps_avx(auVar71._16_16_,3);
            *(undefined4 *)(pauVar37[2] + 0x1c) = uVar40;
            if ((uVar13 & 0x40) != 0) goto LAB_1405accdf;
LAB_1405aca9f:
            auVar71 = *pauVar3;
          }
          pauVar21 = (undefined1 (*) [32])auStack_460;
          if (local_444 < '\0') {
            uVar40 = vextractps_avx(auVar71._16_16_,3);
            *(undefined4 *)(pauVar37[3] + 0x1c) = uVar40;
            pauVar21 = (undefined1 (*) [32])auStack_460;
          }
        }
      }
      lVar38 = lVar38 + 0x60;
      pauVar37 = pauVar37 + 4;
      uVar13 = (int)uVar33 + 8;
      uVar33 = (ulonglong)uVar13;
    } while ((int)uVar13 < (int)(uVar32 & 0xfffffff8));
  }
  if ((int)(uint)uVar33 < (int)param_8) {
    auVar48 = vpshufd_avx(ZEXT416((uint)uVar33),0);
    auVar51._16_16_ = auVar48;
    auVar51._0_16_ = auVar48;
    auVar46 = vpshufd_avx(ZEXT416(param_8),0);
    pauVar36 = (undefined1 (*) [16])(*param_1 + uVar33 * 0x10);
    auVar47 = SUB3216(auVar51 | 
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
    auVar59 = SUB3216(auVar51 | 
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
    auVar60 = vpcmpgtd_avx(auVar46,auVar59);
    auVar48 = vpcmpgtd_avx(auVar46,auVar47);
    auVar48 = vpand_avx(auVar48,auVar60);
    auVar60 = vpcmpeqd_avx(auVar60,auVar60);
    auVar60 = auVar60 & ~auVar48;
    if ((((SUB161(auVar60 >> 0x1f,0) & 1) == 0 && (SUB161(auVar60 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar60 >> 0x5f,0) & 1) == 0) && -1 < auVar60[0xf]) {
      auVar77._16_16_ = pauVar36[4];
      auVar77._0_16_ = *pauVar36;
      auVar104._16_16_ = pauVar36[5];
      auVar104._0_16_ = pauVar36[1];
      auVar115._16_16_ = pauVar36[6];
      auVar115._0_16_ = pauVar36[2];
      auVar123._16_16_ = pauVar36[7];
      auVar123._0_16_ = pauVar36[3];
      auVar84 = vunpcklps_avx(auVar77,auVar104);
      auVar71 = vunpckhps_avx(auVar77,auVar104);
      auVar98 = vunpcklps_avx(auVar115,auVar123);
      auVar51 = vunpckhps_avx(auVar115,auVar123);
      auVar103 = vunpcklpd_avx(auVar84,auVar98);
      auVar114 = vunpckhpd_avx(auVar84,auVar98);
      auVar122 = vunpcklpd_avx(auVar71,auVar51);
      auVar76 = vunpckhpd_avx(auVar71,auVar51);
    }
    else {
      auVar48 = vpcmpgtd_avx(auVar46,auVar59);
      auVar60 = vpcmpgtd_avx(auVar46,auVar47);
      uVar13 = auVar60._0_4_;
      auVar97._0_4_ =
           uVar13 & ___ymm_0000007000000060000000500000004000000030000000200000001000000000;
      uVar31 = auVar60._4_4_;
      auVar97._4_4_ = uVar31 & _UNK_150b50e44;
      uVar78 = auVar60._8_4_;
      auVar97._8_4_ = uVar78 & _UNK_150b50e48;
      uVar79 = auVar60._12_4_;
      auVar97._12_4_ = uVar79 & _UNK_150b50e4c;
      uVar80 = auVar48._0_4_;
      uVar81 = auVar48._4_4_;
      uVar82 = auVar48._8_4_;
      uVar83 = auVar48._12_4_;
      uVar19 = (undefined4)(uVar33 * 0x10 >> 0x20);
      uVar40 = vextractps_avx(auVar97,1);
      uVar30 = (undefined4)((ulonglong)pauVar21 >> 0x20);
      uVar20 = vextractps_avx(auVar97,2);
      uVar32 = vextractps_avx(auVar97,3);
      auVar48 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar36 + (uVar80 & _UNK_150b50e50))),
                              ZEXT416(*(uint *)(*pauVar36 + (uVar81 & _UNK_150b50e54))),0x10);
      auVar48 = vinsertps_avx(auVar48,ZEXT416(*(uint *)(*pauVar36 + (uVar82 & _UNK_150b50e58))),0x20
                             );
      auVar48 = vinsertps_avx(auVar48,ZEXT416(*(uint *)(*pauVar36 + (uVar83 & _UNK_150b50e5c))),0x30
                             );
      auVar60 = vinsertps_avx(ZEXT416(*(uint *)*pauVar36),
                              ZEXT416(*(uint *)(*pauVar36 + CONCAT44(uVar19,uVar40))),0x10);
      auVar60 = vinsertps_avx(auVar60,ZEXT416(*(uint *)(*pauVar36 + CONCAT44(uVar30,uVar20))),0x20);
      auVar60 = vinsertps_avx(auVar60,ZEXT416(*(uint *)(*pauVar36 + uVar32)),0x30);
      auVar107._0_4_ =
           uVar13 & ___ymm_0000007400000064000000540000004400000034000000240000001400000004;
      auVar107._4_4_ = uVar31 & _UNK_150b50e64;
      auVar107._8_4_ = uVar78 & _UNK_150b50e68;
      auVar107._12_4_ = uVar79 & _UNK_150b50e6c;
      uVar40 = vextractps_avx(auVar107,1);
      uVar20 = vextractps_avx(auVar107,2);
      uVar32 = vextractps_avx(auVar107,3);
      auVar97 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar36 + (uVar80 & _UNK_150b50e70))),
                              ZEXT416(*(uint *)(*pauVar36 + (uVar81 & _UNK_150b50e74))),0x10);
      auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(*pauVar36 + (uVar82 & _UNK_150b50e78))),0x20
                             );
      auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(*pauVar36 + (uVar83 & _UNK_150b50e7c))),0x30
                             );
      auVar107 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar36 + auVar107._0_4_)),
                               ZEXT416(*(uint *)(*pauVar36 + CONCAT44(uVar19,uVar40))),0x10);
      auVar107 = vinsertps_avx(auVar107,ZEXT416(*(uint *)(*pauVar36 + CONCAT44(uVar30,uVar20))),0x20
                              );
      auVar107 = vinsertps_avx(auVar107,ZEXT416(*(uint *)(*pauVar36 + uVar32)),0x30);
      auVar129._0_4_ =
           uVar13 & ___ymm_0000007800000068000000580000004800000038000000280000001800000008;
      auVar129._4_4_ = uVar31 & _UNK_150b50e84;
      auVar129._8_4_ = uVar78 & _UNK_150b50e88;
      auVar129._12_4_ = uVar79 & _UNK_150b50e8c;
      uVar40 = vextractps_avx(auVar129,1);
      uVar20 = vextractps_avx(auVar129,2);
      auVar103._16_16_ = auVar48;
      auVar103._0_16_ = auVar60;
      uVar32 = vextractps_avx(auVar129,3);
      auVar48 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar36 + (uVar80 & _UNK_150b50e90))),
                              ZEXT416(*(uint *)(*pauVar36 + (uVar81 & _UNK_150b50e94))),0x10);
      auVar48 = vinsertps_avx(auVar48,ZEXT416(*(uint *)(*pauVar36 + (uVar82 & _UNK_150b50e98))),0x20
                             );
      auVar48 = vinsertps_avx(auVar48,ZEXT416(*(uint *)(*pauVar36 + (uVar83 & _UNK_150b50e9c))),0x30
                             );
      auVar60 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar36 + auVar129._0_4_)),
                              ZEXT416(*(uint *)(*pauVar36 + CONCAT44(uVar19,uVar40))),0x10);
      auVar60 = vinsertps_avx(auVar60,ZEXT416(*(uint *)(*pauVar36 + CONCAT44(uVar30,uVar20))),0x20);
      auVar60 = vinsertps_avx(auVar60,ZEXT416(*(uint *)(*pauVar36 + uVar32)),0x30);
      auVar70._0_4_ =
           uVar13 & ___ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c;
      auVar70._4_4_ = uVar31 & _UNK_150b50ea4;
      auVar70._8_4_ = uVar78 & _UNK_150b50ea8;
      auVar70._12_4_ = uVar79 & _UNK_150b50eac;
      uVar40 = vextractps_avx(auVar70,1);
      uVar20 = vextractps_avx(auVar70,2);
      auVar114._16_16_ = auVar97;
      auVar114._0_16_ = auVar107;
      uVar32 = vextractps_avx(auVar70,3);
      auVar97 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar36 + (uVar80 & _UNK_150b50eb0))),
                              ZEXT416(*(uint *)(*pauVar36 + (uVar81 & _UNK_150b50eb4))),0x10);
      auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(*pauVar36 + (uVar82 & _UNK_150b50eb8))),0x20
                             );
      auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(*pauVar36 + (uVar83 & _UNK_150b50ebc))),0x30
                             );
      auVar107 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar36 + auVar70._0_4_)),
                               ZEXT416(*(uint *)(*pauVar36 + CONCAT44(uVar19,uVar40))),0x10);
      auVar107 = vinsertps_avx(auVar107,ZEXT416(*(uint *)(*pauVar36 + CONCAT44(uVar30,uVar20))),0x20
                              );
      auVar122._16_16_ = auVar48;
      auVar122._0_16_ = auVar60;
      auVar48 = vinsertps_avx(auVar107,ZEXT416(*(uint *)(*pauVar36 + uVar32)),0x30);
      auVar76._16_16_ = auVar97;
      auVar76._0_16_ = auVar48;
    }
    auVar48 = vpcmpgtd_avx(auVar46,auVar59);
    auVar60 = vpcmpgtd_avx(auVar46,auVar47);
    auVar90._16_16_ = auVar48;
    auVar90._0_16_ = auVar60;
    auVar71 = vmaskmovps_avx(auVar90,auVar103);
    auVar51 = vmaskmovps_avx(auVar90,auVar114);
    auVar84 = vmaskmovps_avx(auVar90,auVar122);
    auVar98 = vcmpps_avx(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar76,1);
    auVar91._0_4_ = auVar98._0_4_ & auVar60._0_4_;
    auVar91._4_4_ = auVar98._4_4_ & auVar60._4_4_;
    auVar91._8_4_ = auVar98._8_4_ & auVar60._8_4_;
    auVar91._12_4_ = auVar98._12_4_ & auVar60._12_4_;
    auVar91._16_4_ = auVar98._16_4_ & auVar48._0_4_;
    auVar91._20_4_ = auVar98._20_4_ & auVar48._4_4_;
    auVar91._24_4_ = auVar98._24_4_ & auVar48._8_4_;
    auVar91._28_4_ = auVar98._28_4_ & auVar48._12_4_;
    uVar32 = vmovmskps_avx(auVar91);
    if (uVar32 != 0) {
      auVar48 = vpand_avx(auVar98._16_16_,auVar48);
      auVar47._0_4_ = auVar98._0_4_ & auVar60._0_4_;
      auVar47._4_4_ = auVar98._4_4_ & auVar60._4_4_;
      auVar47._8_4_ = auVar98._8_4_ & auVar60._8_4_;
      auVar47._12_4_ = auVar98._12_4_ & auVar60._12_4_;
      auVar48 = vpackssdw_avx(auVar47,auVar48);
      pauVar21 = (undefined1 (*) [32])(param_2 + uVar33 * 0xc);
      auVar60 = vpmovsxwd_avx(auVar48);
      auVar48 = vpunpckhwd_avx(auVar48,auVar48);
      local_444 = (char)uVar32;
      if (local_444 == -1) {
        auVar108 = pauVar21[2];
        auVar66._16_16_ = *(undefined1 (*) [16])*pauVar21;
        auVar66._0_16_ = *(undefined1 (*) [16])(*pauVar21 + 0x10);
        auVar98 = vblendps_avx(*pauVar21,auVar66,0x24);
        auVar98 = vpermilps_avx(auVar98,
                                ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                               );
        uVar40 = *(undefined4 *)(pauVar21[1] + 4);
        auVar145._4_4_ = uVar40;
        auVar145._0_4_ = uVar40;
        auVar145._8_4_ = uVar40;
        auVar145._12_4_ = uVar40;
        uVar40 = *(undefined4 *)(pauVar21[1] + 8);
        auVar145._20_4_ = uVar40;
        auVar145._16_4_ = uVar40;
        auVar145._24_4_ = uVar40;
        auVar145._28_4_ = uVar40;
        auVar98 = vblendps_avx(auVar98,auVar145,0x88);
        auVar146._16_16_ = *(undefined1 (*) [16])pauVar21[2];
        auVar146._0_16_ = *(undefined1 (*) [16])(pauVar21[2] + 0x10);
        auVar114 = vblendps_avx(auVar146,auVar108,0x44);
        auVar114 = vpermilps_avx(auVar114,
                                 ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                                );
        auVar46 = vshufps_avx(*(undefined1 (*) [16])(pauVar21[1] + 0x10),
                              *(undefined1 (*) [16])(pauVar21[1] + 0x10),0xec);
        uVar40 = *(undefined4 *)(pauVar21[1] + 0x14);
        auVar126._20_4_ = uVar40;
        auVar126._16_4_ = uVar40;
        auVar126._24_4_ = uVar40;
        auVar126._28_4_ = uVar40;
        auVar126._0_16_ = auVar46;
        auVar114 = vblendps_avx(auVar114,auVar126,0x13);
        auVar62._16_16_ = auVar114._0_16_;
        auVar62._0_16_ = auVar98._0_16_;
        local_280 = vperm2f128_avx(auVar98,auVar114,0x31);
        auVar98 = vblendps_avx(pauVar21[1],*pauVar21,0x24);
        auVar98 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])(*pauVar21 + 0x10)),auVar98,0x21);
        auVar98 = vshufps_avx(auVar98,pauVar21[1],0xc2);
        auVar114 = vshufps_avx(auVar146,auVar108,0xc4);
        local_320 = vblendps_avx(auVar98,auVar114,0xe0);
        lVar18 = uVar33 * 0xc;
        auVar46 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar18);
        auVar47 = *(undefined1 (*) [16])(param_3 + 0x30 + lVar18);
        auVar59 = *(undefined1 (*) [16])(param_3 + 0x50 + lVar18);
        auVar97 = *(undefined1 (*) [16])(param_3 + 0x40 + lVar18);
        uVar40 = *(undefined4 *)(param_3 + 0x28 + lVar18);
        auVar132._20_4_ = uVar40;
        auVar132._16_4_ = uVar40;
        auVar132._24_4_ = uVar40;
        auVar132._28_4_ = uVar40;
        uVar40 = *(undefined4 *)(param_3 + 0x24 + lVar18);
        auVar132._4_4_ = uVar40;
        auVar132._0_4_ = uVar40;
        auVar132._8_4_ = uVar40;
        auVar132._12_4_ = uVar40;
        uVar40 = *(undefined4 *)(param_3 + 0x34 + lVar18);
        auVar52._20_4_ = uVar40;
        auVar52._16_4_ = uVar40;
        auVar52._24_4_ = uVar40;
        auVar52._28_4_ = uVar40;
        auVar63._16_16_ = auVar46;
        auVar63._0_16_ = *(undefined1 (*) [16])(param_3 + lVar18);
        auVar67._16_16_ = auVar47;
        auVar67._0_16_ = *(undefined1 (*) [16])(param_3 + 0x20 + lVar18);
        auVar92._16_16_ = auVar59;
        auVar92._0_16_ = auVar97;
        auVar127._16_16_ = *(undefined1 (*) [16])(param_3 + lVar18);
        auVar127._0_16_ = auVar46;
        auVar98 = vblendps_avx(auVar63,auVar127,0x24);
        auVar98 = vpermilps_avx(auVar98,
                                ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                               );
        auVar98 = vblendps_avx(auVar98,auVar132,0x88);
        auVar147._16_16_ = auVar97;
        auVar147._0_16_ = auVar59;
        auVar114 = vblendps_avx(auVar147,auVar92,0x44);
        auVar114 = vpermilps_avx(auVar114,
                                 ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                                );
        auVar47 = vshufps_avx(auVar47,auVar47,0xec);
        auVar52._0_16_ = auVar47;
        auVar114 = vblendps_avx(auVar114,auVar52,0x13);
        auVar125._16_16_ = auVar114._0_16_;
        auVar125._0_16_ = auVar98._0_16_;
        auVar131 = vperm2f128_avx(auVar98,auVar114,0x31);
        auVar98 = vblendps_avx(auVar67,auVar63,0x24);
        auVar98 = vshufps_avx(ZEXT1632(auVar46),auVar98,0x21);
        auVar98 = vshufps_avx(auVar98,auVar67,0xc2);
        auVar114 = vshufps_avx(auVar147,auVar92,0xc4);
        auVar138 = vblendps_avx(auVar98,auVar114,0xe0);
        auVar46 = *(undefined1 (*) [16])(param_4 + 0x10 + lVar18);
        auVar47 = *(undefined1 (*) [16])(param_4 + 0x30 + lVar18);
        auVar140._16_16_ = auVar46;
        auVar140._0_16_ = *(undefined1 (*) [16])(param_4 + lVar18);
        auVar68._16_16_ = auVar47;
        auVar68._0_16_ = *(undefined1 (*) [16])(param_4 + 0x20 + lVar18);
        auVar59 = *(undefined1 (*) [16])(param_4 + 0x50 + lVar18);
        auVar97 = *(undefined1 (*) [16])(param_4 + 0x40 + lVar18);
        auVar157._16_16_ = auVar59;
        auVar157._0_16_ = auVar97;
        auVar53._16_16_ = *(undefined1 (*) [16])(param_4 + lVar18);
        auVar53._0_16_ = auVar46;
        auVar98 = vblendps_avx(auVar140,auVar53,0x24);
        auVar98 = vpermilps_avx(auVar98,
                                ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                               );
        uVar40 = *(undefined4 *)(param_4 + 0x28 + lVar18);
        auVar117._20_4_ = uVar40;
        auVar117._16_4_ = uVar40;
        auVar117._24_4_ = uVar40;
        auVar117._28_4_ = uVar40;
        uVar40 = *(undefined4 *)(param_4 + 0x24 + lVar18);
        auVar117._4_4_ = uVar40;
        auVar117._0_4_ = uVar40;
        auVar117._8_4_ = uVar40;
        auVar117._12_4_ = uVar40;
        auVar98 = vblendps_avx(auVar98,auVar117,0x88);
        auVar148._16_16_ = auVar97;
        auVar148._0_16_ = auVar59;
        auVar114 = vblendps_avx(auVar148,auVar157,0x44);
        auVar114 = vpermilps_avx(auVar114,
                                 ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                                );
        uVar40 = *(undefined4 *)(param_4 + 0x34 + lVar18);
        auVar93._20_4_ = uVar40;
        auVar93._16_4_ = uVar40;
        auVar93._24_4_ = uVar40;
        auVar93._28_4_ = uVar40;
        auVar47 = vshufps_avx(auVar47,auVar47,0xec);
        auVar93._0_16_ = auVar47;
        auVar114 = vblendps_avx(auVar114,auVar93,0x13);
        auVar124._16_16_ = auVar114._0_16_;
        auVar124._0_16_ = auVar98._0_16_;
        auVar116 = vperm2f128_avx(auVar98,auVar114,0x31);
        auVar98 = vblendps_avx(auVar68,auVar140,0x24);
        auVar98 = vshufps_avx(ZEXT1632(auVar46),auVar98,0x21);
        auVar98 = vshufps_avx(auVar98,auVar68,0xc2);
        auVar114 = vshufps_avx(auVar148,auVar157,0xc4);
        auVar139 = vblendps_avx(auVar98,auVar114,0xe0);
      }
      else {
        uVar31 = auVar60._0_4_;
        auVar59._0_4_ =
             uVar31 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000;
        uVar78 = auVar60._4_4_;
        auVar59._4_4_ = uVar78 & _UNK_150b50b04;
        uVar79 = auVar60._8_4_;
        auVar59._8_4_ = uVar79 & _UNK_150b50b08;
        uVar80 = auVar60._12_4_;
        auVar59._12_4_ = uVar80 & _UNK_150b50b0c;
        uVar81 = auVar48._0_4_;
        uVar82 = auVar48._4_4_;
        uVar83 = auVar48._8_4_;
        uVar106 = auVar48._12_4_;
        uVar40 = vextractps_avx(auVar59,1);
        lVar14 = CONCAT44((int)(uVar33 * 3 >> 0x20),uVar40);
        uVar40 = vextractps_avx(auVar59,2);
        lVar29 = CONCAT44((int)((ulonglong)param_2 >> 0x20),uVar40);
        uVar13 = vextractps_avx(auVar59,3);
        uVar22 = (ulonglong)uVar13;
        uVar24 = (ulonglong)(uVar82 & _UNK_150b50b14);
        uVar41 = (ulonglong)(uVar83 & _UNK_150b50b18);
        uVar43 = (ulonglong)(uVar106 & _UNK_150b50b1c);
        uVar23 = (ulonglong)(uVar81 & _UNK_150b50b10);
        auVar46 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar21 + uVar23)),
                                ZEXT416(*(uint *)(*pauVar21 + uVar24)),0x10);
        auVar46 = vinsertps_avx(auVar46,ZEXT416(*(uint *)(*pauVar21 + uVar41)),0x20);
        auVar46 = vinsertps_avx(auVar46,ZEXT416(*(uint *)(*pauVar21 + uVar43)),0x30);
        auVar47 = vinsertps_avx(ZEXT416(*(uint *)*pauVar21),ZEXT416(*(uint *)(*pauVar21 + lVar14)),
                                0x10);
        auVar47 = vinsertps_avx(auVar47,ZEXT416(*(uint *)(*pauVar21 + lVar29)),0x20);
        auVar47 = vinsertps_avx(auVar47,ZEXT416(*(uint *)(*pauVar21 + uVar22)),0x30);
        uVar15 = (ulonglong)(uVar82 & _UNK_150b50b34);
        uVar25 = (ulonglong)(uVar83 & _UNK_150b50b38);
        uVar44 = (ulonglong)(uVar81 & _UNK_150b50b30);
        uVar42 = (ulonglong)(uVar106 & _UNK_150b50b3c);
        auVar59 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar21 + uVar44)),
                                ZEXT416(*(uint *)(*pauVar21 + uVar15)),0x10);
        auVar59 = vinsertps_avx(auVar59,ZEXT416(*(uint *)(*pauVar21 + uVar25)),0x20);
        uVar11 = (ulonglong)
                 (uVar31 & ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004);
        auVar59 = vinsertps_avx(auVar59,ZEXT416(*(uint *)(*pauVar21 + uVar42)),0x30);
        uVar9 = (ulonglong)(uVar78 & _UNK_150b50b24);
        auVar97 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar21 + uVar11)),
                                ZEXT416(*(uint *)(*pauVar21 + uVar9)),0x10);
        uVar16 = (ulonglong)(uVar79 & _UNK_150b50b28);
        auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(*pauVar21 + uVar16)),0x20);
        uVar17 = (ulonglong)(uVar80 & _UNK_150b50b2c);
        auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(*pauVar21 + uVar17)),0x30);
        uVar26 = (ulonglong)(uVar81 & _UNK_150b50b50);
        uVar27 = (ulonglong)(uVar82 & _UNK_150b50b54);
        auVar107 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar21 + uVar26)),
                                 ZEXT416(*(uint *)(*pauVar21 + uVar27)),0x10);
        uVar28 = (ulonglong)(uVar83 & _UNK_150b50b58);
        auVar107 = vinsertps_avx(auVar107,ZEXT416(*(uint *)(*pauVar21 + uVar28)),0x20);
        uVar34 = (ulonglong)(uVar106 & _UNK_150b50b5c);
        auVar107 = vinsertps_avx(auVar107,ZEXT416(*(uint *)(*pauVar21 + uVar34)),0x30);
        uVar12 = (ulonglong)
                 (uVar31 & ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008);
        uVar10 = (ulonglong)(uVar78 & _UNK_150b50b44);
        auVar70 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar21 + uVar12)),
                                ZEXT416(*(uint *)(*pauVar21 + uVar10)),0x10);
        uVar35 = (ulonglong)(uVar79 & _UNK_150b50b48);
        auVar70 = vinsertps_avx(auVar70,ZEXT416(*(uint *)(*pauVar21 + uVar35)),0x20);
        uVar39 = (ulonglong)(uVar80 & _UNK_150b50b4c);
        auVar70 = vinsertps_avx(auVar70,ZEXT416(*(uint *)(*pauVar21 + uVar39)),0x30);
        auVar62._16_16_ = auVar46;
        auVar62._0_16_ = auVar47;
        local_280._16_16_ = auVar59;
        local_280._0_16_ = auVar97;
        local_320._16_16_ = auVar107;
        local_320._0_16_ = auVar70;
        lVar38 = uVar33 * 0xc;
        lVar18 = param_3 + lVar38;
        auVar46 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + lVar38)),
                                ZEXT416(*(uint *)(lVar14 + lVar18)),0x10);
        auVar46 = vinsertps_avx(auVar46,ZEXT416(*(uint *)(lVar29 + lVar18)),0x20);
        auVar46 = vinsertps_avx(auVar46,ZEXT416(*(uint *)(uVar22 + lVar18)),0x30);
        auVar47 = vinsertps_avx(ZEXT416(*(uint *)(uVar23 + lVar18)),
                                ZEXT416(*(uint *)(uVar24 + lVar18)),0x10);
        auVar47 = vinsertps_avx(auVar47,ZEXT416(*(uint *)(uVar41 + lVar18)),0x20);
        auVar47 = vinsertps_avx(auVar47,ZEXT416(*(uint *)(uVar43 + lVar18)),0x30);
        auVar59 = vinsertps_avx(ZEXT416(*(uint *)(uVar44 + lVar18)),
                                ZEXT416(*(uint *)(uVar15 + lVar18)),0x10);
        auVar59 = vinsertps_avx(auVar59,ZEXT416(*(uint *)(uVar25 + lVar18)),0x20);
        auVar59 = vinsertps_avx(auVar59,ZEXT416(*(uint *)(uVar42 + lVar18)),0x30);
        auVar97 = vinsertps_avx(ZEXT416(*(uint *)(uVar11 + lVar18)),
                                ZEXT416(*(uint *)(uVar9 + lVar18)),0x10);
        auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(uVar16 + lVar18)),0x20);
        auVar97 = vinsertps_avx(auVar97,ZEXT416(*(uint *)(uVar17 + lVar18)),0x30);
        auVar107 = vinsertps_avx(ZEXT416(*(uint *)(uVar26 + lVar18)),
                                 ZEXT416(*(uint *)(uVar27 + lVar18)),0x10);
        auVar107 = vinsertps_avx(auVar107,ZEXT416(*(uint *)(uVar28 + lVar18)),0x20);
        auVar107 = vinsertps_avx(auVar107,ZEXT416(*(uint *)(uVar34 + lVar18)),0x30);
        auVar70 = vinsertps_avx(ZEXT416(*(uint *)(uVar12 + lVar18)),
                                ZEXT416(*(uint *)(uVar10 + lVar18)),0x10);
        auVar70 = vinsertps_avx(auVar70,ZEXT416(*(uint *)(uVar35 + lVar18)),0x20);
        auVar70 = vinsertps_avx(auVar70,ZEXT416(*(uint *)(uVar39 + lVar18)),0x30);
        lVar18 = param_4 + lVar38;
        auVar129 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + lVar38)),
                                 ZEXT416(*(uint *)(lVar14 + lVar18)),0x10);
        auVar129 = vinsertps_avx(auVar129,ZEXT416(*(uint *)(lVar29 + lVar18)),0x20);
        auVar129 = vinsertps_avx(auVar129,ZEXT416(*(uint *)(uVar22 + lVar18)),0x30);
        auVar4 = vinsertps_avx(ZEXT416(*(uint *)(uVar23 + lVar18)),
                               ZEXT416(*(uint *)(uVar24 + lVar18)),0x10);
        auVar4 = vinsertps_avx(auVar4,ZEXT416(*(uint *)(uVar41 + lVar18)),0x20);
        auVar4 = vinsertps_avx(auVar4,ZEXT416(*(uint *)(uVar43 + lVar18)),0x30);
        auVar5 = vinsertps_avx(ZEXT416(*(uint *)(uVar44 + lVar18)),
                               ZEXT416(*(uint *)(uVar15 + lVar18)),0x10);
        auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(uVar25 + lVar18)),0x20);
        auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(uVar42 + lVar18)),0x30);
        auVar6 = vinsertps_avx(ZEXT416(*(uint *)(uVar11 + lVar18)),
                               ZEXT416(*(uint *)(uVar9 + lVar18)),0x10);
        auVar6 = vinsertps_avx(auVar6,ZEXT416(*(uint *)(uVar16 + lVar18)),0x20);
        auVar6 = vinsertps_avx(auVar6,ZEXT416(*(uint *)(uVar17 + lVar18)),0x30);
        auVar7 = vinsertps_avx(ZEXT416(*(uint *)(uVar26 + lVar18)),
                               ZEXT416(*(uint *)(uVar27 + lVar18)),0x10);
        auVar7 = vinsertps_avx(auVar7,ZEXT416(*(uint *)(uVar28 + lVar18)),0x20);
        auVar7 = vinsertps_avx(auVar7,ZEXT416(*(uint *)(uVar34 + lVar18)),0x30);
        auVar8 = vinsertps_avx(ZEXT416(*(uint *)(uVar12 + lVar18)),
                               ZEXT416(*(uint *)(uVar10 + lVar18)),0x10);
        auVar8 = vinsertps_avx(auVar8,ZEXT416(*(uint *)(uVar35 + lVar18)),0x20);
        auVar8 = vinsertps_avx(auVar8,ZEXT416(*(uint *)(uVar39 + lVar18)),0x30);
        auVar125._16_16_ = auVar47;
        auVar125._0_16_ = auVar46;
        auVar131._16_16_ = auVar59;
        auVar131._0_16_ = auVar97;
        auVar138._16_16_ = auVar107;
        auVar138._0_16_ = auVar70;
        auVar124._16_16_ = auVar4;
        auVar124._0_16_ = auVar129;
        auVar116._16_16_ = auVar5;
        auVar116._0_16_ = auVar6;
        auVar139._16_16_ = auVar7;
        auVar139._0_16_ = auVar8;
      }
      auVar46 = vshufps_avx(ZEXT416(param_6),ZEXT416(param_6),0);
      auVar98 = vsubps_avx(auVar71,auVar125);
      auVar114 = vsubps_avx(auVar51,auVar131);
      auVar108 = vsubps_avx(auVar84,auVar138);
      fVar45 = auVar46._0_4_;
      auVar94._0_4_ = fVar45 * auVar98._0_4_;
      fVar56 = auVar46._4_4_;
      auVar94._4_4_ = fVar56 * auVar98._4_4_;
      fVar57 = auVar46._8_4_;
      auVar94._8_4_ = fVar57 * auVar98._8_4_;
      fVar58 = auVar46._12_4_;
      auVar94._12_4_ = fVar58 * auVar98._12_4_;
      auVar94._16_4_ = fVar45 * auVar98._16_4_;
      auVar94._20_4_ = fVar56 * auVar98._20_4_;
      auVar94._24_4_ = fVar57 * auVar98._24_4_;
      auVar94._28_4_ = fVar58 * auVar98._28_4_;
      auVar128._0_4_ = auVar114._0_4_ * fVar45;
      auVar128._4_4_ = auVar114._4_4_ * fVar56;
      auVar128._8_4_ = auVar114._8_4_ * fVar57;
      auVar128._12_4_ = auVar114._12_4_ * fVar58;
      auVar128._16_4_ = auVar114._16_4_ * fVar45;
      auVar128._20_4_ = auVar114._20_4_ * fVar56;
      auVar128._24_4_ = auVar114._24_4_ * fVar57;
      auVar128._28_4_ = auVar114._28_4_ * fVar58;
      auVar54._0_4_ = auVar108._0_4_ * fVar45;
      auVar54._4_4_ = auVar108._4_4_ * fVar56;
      auVar54._8_4_ = auVar108._8_4_ * fVar57;
      auVar54._12_4_ = auVar108._12_4_ * fVar58;
      auVar54._16_4_ = auVar108._16_4_ * fVar45;
      auVar54._20_4_ = auVar108._20_4_ * fVar56;
      auVar54._24_4_ = auVar108._24_4_ * fVar57;
      auVar54._28_4_ = auVar108._28_4_ * fVar58;
      auVar71 = vsubps_avx(auVar71,auVar94);
      auVar51 = vsubps_avx(auVar51,auVar128);
      auVar84 = vsubps_avx(auVar84,auVar54);
      auVar55._16_16_ = auVar48;
      auVar55._0_16_ = auVar60;
      auVar71 = vmaskmovps_avx(auVar55,auVar71);
      auVar51 = vmaskmovps_avx(auVar55,auVar51);
      auVar84 = vmaskmovps_avx(auVar55,auVar84);
      auVar98 = vsubps_avx(auVar71,auVar62);
      auVar48 = vshufps_avx(ZEXT416(param_5),ZEXT416(param_5),0);
      fVar45 = auVar48._0_4_;
      auVar105._0_4_ = fVar45 * auVar124._0_4_;
      fVar56 = auVar48._4_4_;
      auVar105._4_4_ = fVar56 * auVar124._4_4_;
      fVar57 = auVar48._8_4_;
      auVar105._8_4_ = fVar57 * auVar124._8_4_;
      fVar58 = auVar48._12_4_;
      auVar105._12_4_ = fVar58 * auVar124._12_4_;
      auVar105._16_4_ = fVar45 * auVar124._16_4_;
      auVar105._20_4_ = fVar56 * auVar124._20_4_;
      auVar105._24_4_ = fVar57 * auVar124._24_4_;
      auVar105._28_4_ = fVar58 * auVar124._28_4_;
      auVar98 = vsubps_avx(auVar98,auVar105);
      auVar114 = vsubps_avx(auVar51,local_280);
      auVar118._0_4_ = fVar45 * auVar116._0_4_;
      auVar118._4_4_ = fVar56 * auVar116._4_4_;
      auVar118._8_4_ = fVar57 * auVar116._8_4_;
      auVar118._12_4_ = fVar58 * auVar116._12_4_;
      auVar118._16_4_ = fVar45 * auVar116._16_4_;
      auVar118._20_4_ = fVar56 * auVar116._20_4_;
      auVar118._24_4_ = fVar57 * auVar116._24_4_;
      auVar118._28_4_ = fVar58 * auVar116._28_4_;
      auVar114 = vsubps_avx(auVar114,auVar118);
      auVar95._0_4_ = auVar139._0_4_ * fVar45;
      auVar95._4_4_ = auVar139._4_4_ * fVar56;
      auVar95._8_4_ = auVar139._8_4_ * fVar57;
      auVar95._12_4_ = auVar139._12_4_ * fVar58;
      auVar95._16_4_ = auVar139._16_4_ * fVar45;
      auVar95._20_4_ = auVar139._20_4_ * fVar56;
      auVar95._24_4_ = auVar139._24_4_ * fVar57;
      auVar95._28_4_ = auVar139._28_4_ * fVar58;
      auVar108 = vsubps_avx(auVar84,local_320);
      auVar108 = vsubps_avx(auVar108,auVar95);
      auVar48 = vshufps_avx(ZEXT416(param_7),ZEXT416(param_7),0);
      fVar45 = auVar48._0_4_;
      auVar69._0_4_ = fVar45 * auVar98._0_4_;
      fVar56 = auVar48._4_4_;
      auVar69._4_4_ = fVar56 * auVar98._4_4_;
      fVar57 = auVar48._8_4_;
      auVar69._8_4_ = fVar57 * auVar98._8_4_;
      fVar58 = auVar48._12_4_;
      auVar69._12_4_ = fVar58 * auVar98._12_4_;
      auVar69._16_4_ = fVar45 * auVar98._16_4_;
      auVar69._20_4_ = fVar56 * auVar98._20_4_;
      auVar69._24_4_ = fVar57 * auVar98._24_4_;
      auVar69._28_4_ = fVar58 * auVar98._28_4_;
      auVar119._0_4_ = fVar45 * auVar114._0_4_;
      auVar119._4_4_ = fVar56 * auVar114._4_4_;
      auVar119._8_4_ = fVar57 * auVar114._8_4_;
      auVar119._12_4_ = fVar58 * auVar114._12_4_;
      auVar119._16_4_ = fVar45 * auVar114._16_4_;
      auVar119._20_4_ = fVar56 * auVar114._20_4_;
      auVar119._24_4_ = fVar57 * auVar114._24_4_;
      auVar119._28_4_ = fVar58 * auVar114._28_4_;
      auVar96._0_4_ = fVar45 * auVar108._0_4_;
      auVar96._4_4_ = fVar56 * auVar108._4_4_;
      auVar96._8_4_ = fVar57 * auVar108._8_4_;
      auVar96._12_4_ = fVar58 * auVar108._12_4_;
      auVar96._16_4_ = fVar45 * auVar108._16_4_;
      auVar96._20_4_ = fVar56 * auVar108._20_4_;
      auVar96._24_4_ = fVar57 * auVar108._24_4_;
      auVar96._28_4_ = fVar58 * auVar108._28_4_;
      auVar71 = vsubps_avx(auVar71,auVar69);
      auVar51 = vsubps_avx(auVar51,auVar119);
      auVar84 = vsubps_avx(auVar84,auVar96);
      auVar71 = vmaskmovps_avx(auVar55,auVar71);
      auVar51 = vmaskmovps_avx(auVar55,auVar51);
      auVar84 = vmaskmovps_avx(auVar55,auVar84);
      if (local_444 == -1) {
        auVar98 = vunpcklps_avx(auVar71,auVar51);
        auVar108 = vunpcklps_avx(auVar84,auVar76);
        auVar114 = vunpcklpd_avx(auVar98,auVar108);
        auVar98 = vunpckhpd_avx(auVar98,auVar108);
        auVar71 = vunpckhps_avx(auVar71,auVar51);
        auVar51 = vunpckhps_avx(auVar84,auVar76);
        auVar84 = vunpcklpd_avx(auVar71,auVar51);
        auVar71 = vunpckhpd_avx(auVar71,auVar51);
        pauVar36[1] = auVar98._0_16_;
        *pauVar36 = auVar114._0_16_;
        pauVar36[3] = auVar71._0_16_;
        pauVar36[2] = auVar84._0_16_;
        pauVar36[5] = auVar98._16_16_;
        pauVar36[4] = auVar114._16_16_;
        pauVar36[7] = auVar71._16_16_;
        pauVar36[6] = auVar84._16_16_;
      }
      else {
        auVar107 = auVar76._0_16_;
        auVar70 = auVar76._16_16_;
        auVar59 = auVar71._0_16_;
        auVar97 = auVar71._16_16_;
        auVar46 = auVar51._0_16_;
        auVar47 = auVar51._16_16_;
        auVar48 = auVar84._0_16_;
        auVar60 = auVar84._16_16_;
        if ((uVar32 & 1) != 0) {
          *(int *)*pauVar36 = auVar71._0_4_;
        }
        if ((uVar32 & 2) != 0) {
          uVar40 = vextractps_avx(auVar59,1);
          *(undefined4 *)pauVar36[1] = uVar40;
        }
        if ((uVar32 & 4) != 0) {
          uVar40 = vextractps_avx(auVar59,2);
          *(undefined4 *)pauVar36[2] = uVar40;
        }
        if ((uVar32 & 8) != 0) {
          uVar40 = vextractps_avx(auVar59,3);
          *(undefined4 *)pauVar36[3] = uVar40;
        }
        if ((uVar32 & 0x10) != 0) {
          *(int *)pauVar36[4] = auVar71._16_4_;
        }
        if ((uVar32 & 0x20) != 0) {
          uVar40 = vextractps_avx(auVar97,1);
          *(undefined4 *)pauVar36[5] = uVar40;
        }
        if ((uVar32 & 0x40) != 0) {
          uVar40 = vextractps_avx(auVar97,2);
          *(undefined4 *)pauVar36[6] = uVar40;
        }
        if (local_444 < '\0') {
          uVar40 = vextractps_avx(auVar97,3);
          *(undefined4 *)pauVar36[7] = uVar40;
        }
        if ((uVar32 & 1) != 0) {
          *(int *)(*pauVar36 + 4) = auVar51._0_4_;
        }
        if ((uVar32 & 2) != 0) {
          uVar40 = vextractps_avx(auVar46,1);
          *(undefined4 *)(pauVar36[1] + 4) = uVar40;
        }
        if ((uVar32 & 4) != 0) {
          uVar40 = vextractps_avx(auVar46,2);
          *(undefined4 *)(pauVar36[2] + 4) = uVar40;
        }
        if ((uVar32 & 8) != 0) {
          uVar40 = vextractps_avx(auVar46,3);
          *(undefined4 *)(pauVar36[3] + 4) = uVar40;
        }
        if ((uVar32 & 0x10) != 0) {
          *(int *)(pauVar36[4] + 4) = auVar51._16_4_;
        }
        if ((uVar32 & 0x20) != 0) {
          uVar40 = vextractps_avx(auVar47,1);
          *(undefined4 *)(pauVar36[5] + 4) = uVar40;
        }
        if ((uVar32 & 0x40) != 0) {
          uVar40 = vextractps_avx(auVar47,2);
          *(undefined4 *)(pauVar36[6] + 4) = uVar40;
        }
        if (local_444 < '\0') {
          uVar40 = vextractps_avx(auVar47,3);
          *(undefined4 *)(pauVar36[7] + 4) = uVar40;
        }
        if ((uVar32 & 1) != 0) {
          *(int *)(*pauVar36 + 8) = auVar84._0_4_;
        }
        if ((uVar32 & 2) != 0) {
          uVar40 = vextractps_avx(auVar48,1);
          *(undefined4 *)(pauVar36[1] + 8) = uVar40;
        }
        if ((uVar32 & 4) != 0) {
          uVar40 = vextractps_avx(auVar48,2);
          *(undefined4 *)(pauVar36[2] + 8) = uVar40;
        }
        if ((uVar32 & 8) != 0) {
          uVar40 = vextractps_avx(auVar48,3);
          *(undefined4 *)(pauVar36[3] + 8) = uVar40;
        }
        if ((uVar32 & 0x10) != 0) {
          *(int *)(pauVar36[4] + 8) = auVar84._16_4_;
        }
        if ((uVar32 & 0x20) != 0) {
          uVar40 = vextractps_avx(auVar60,1);
          *(undefined4 *)(pauVar36[5] + 8) = uVar40;
        }
        if ((uVar32 & 0x40) != 0) {
          uVar40 = vextractps_avx(auVar60,2);
          *(undefined4 *)(pauVar36[6] + 8) = uVar40;
        }
        if (local_444 < '\0') {
          uVar40 = vextractps_avx(auVar60,3);
          *(undefined4 *)(pauVar36[7] + 8) = uVar40;
        }
        if ((uVar32 & 1) != 0) {
          *(int *)(*pauVar36 + 0xc) = auVar76._0_4_;
        }
        if ((uVar32 & 2) != 0) {
          uVar40 = vextractps_avx(auVar107,1);
          *(undefined4 *)(pauVar36[1] + 0xc) = uVar40;
        }
        if ((uVar32 & 4) != 0) {
          uVar40 = vextractps_avx(auVar107,2);
          *(undefined4 *)(pauVar36[2] + 0xc) = uVar40;
        }
        if ((uVar32 & 8) != 0) {
          uVar40 = vextractps_avx(auVar107,3);
          *(undefined4 *)(pauVar36[3] + 0xc) = uVar40;
        }
        if ((uVar32 & 0x10) != 0) {
          *(int *)(pauVar36[4] + 0xc) = auVar76._16_4_;
        }
        if ((uVar32 & 0x20) != 0) {
          uVar40 = vextractps_avx(auVar70,1);
          *(undefined4 *)(pauVar36[5] + 0xc) = uVar40;
        }
        if ((uVar32 & 0x40) != 0) {
          uVar40 = vextractps_avx(auVar70,2);
          *(undefined4 *)(pauVar36[6] + 0xc) = uVar40;
        }
        if (local_444 < '\0') {
          uVar40 = vextractps_avx(auVar70,3);
          *(undefined4 *)(pauVar36[7] + 0xc) = uVar40;
        }
      }
    }
  }
  return;
}

// ApplyMultiResConstraintsWithWeightMaps_avx @ 1405adc30

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyMultiResConstraintsWithWeightMaps_avx
               (undefined1 (*param_1) [32],longlong param_2,longlong param_3,longlong param_4,
               uint param_5,byte param_6,longlong param_7,longlong param_8,byte param_9,
               longlong param_10,longlong param_11,uint param_12)

{
  undefined1 (*pauVar1) [32];
  undefined1 (*pauVar2) [32];
  undefined1 (*pauVar3) [32];
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  byte bVar16;
  uint uVar17;
  byte *pbVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  undefined4 uVar30;
  longlong lVar29;
  undefined4 uVar31;
  undefined1 (*pauVar32) [32];
  ulonglong uVar33;
  undefined1 (*pauVar34) [16];
  undefined4 uVar36;
  longlong lVar35;
  undefined4 uVar37;
  uint uVar38;
  ulonglong uVar39;
  longlong lVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  longlong lVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  undefined1 auVar48 [16];
  uint uVar58;
  uint uVar59;
  undefined1 auVar49 [32];
  undefined1 auVar47 [16];
  uint uVar60;
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  uint uVar72;
  uint uVar73;
  uint uVar74;
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  uint uVar75;
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [16];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar90 [16];
  float fVar89;
  float fVar98;
  float fVar99;
  float fVar101;
  float fVar102;
  float fVar103;
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  float fVar100;
  float fVar104;
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar105 [16];
  undefined1 auVar106 [32];
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
  undefined1 auVar118 [16];
  undefined1 auVar119 [32];
  undefined1 auVar120 [32];
  undefined1 auVar121 [32];
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
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
  undefined1 auVar138 [16];
  uint uVar140;
  uint uVar141;
  uint uVar142;
  uint uVar143;
  undefined1 auVar139 [32];
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
  undefined1 auVar157 [32];
  undefined1 auVar158 [32];
  undefined1 auVar159 [32];
  undefined1 auVar160 [32];
  undefined1 auVar161 [32];
  undefined1 auVar162 [32];
  undefined1 local_3e0 [32];
  undefined1 local_360 [32];
  undefined1 local_340 [32];
  undefined1 local_280 [8];
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  
  uVar38 = param_12 + 7;
  if (-1 < (int)param_12) {
    uVar38 = param_12;
  }
  if ((int)(uVar38 & 0xfffffff8) < 1) {
    uVar44 = 0;
    if ((int)param_12 < 1) {
      return;
    }
  }
  else {
    auVar90 = vshufps_avx(ZEXT416(param_5),ZEXT416(param_5),0);
    lVar43 = 0;
    uVar44 = 0;
    pauVar32 = param_1;
    do {
      pauVar1 = pauVar32 + 1;
      pauVar2 = pauVar32 + 2;
      pauVar3 = pauVar32 + 3;
      auVar49._16_16_ = *(undefined1 (*) [16])*pauVar2;
      auVar49._0_16_ = *(undefined1 (*) [16])*pauVar32;
      auVar64._16_16_ = *(undefined1 (*) [16])(pauVar32[2] + 0x10);
      auVar64._0_16_ = *(undefined1 (*) [16])(*pauVar32 + 0x10);
      auVar76._16_16_ = *(undefined1 (*) [16])*pauVar3;
      auVar76._0_16_ = *(undefined1 (*) [16])*pauVar1;
      auVar82._16_16_ = *(undefined1 (*) [16])(pauVar32[3] + 0x10);
      auVar82._0_16_ = *(undefined1 (*) [16])(pauVar32[1] + 0x10);
      auVar55 = vunpcklps_avx(auVar49,auVar64);
      auVar49 = vunpckhps_avx(auVar49,auVar64);
      auVar122 = vunpcklps_avx(auVar76,auVar82);
      auVar64 = vunpckhps_avx(auVar76,auVar82);
      auVar76 = vunpcklpd_avx(auVar55,auVar122);
      auVar55 = vunpckhpd_avx(auVar55,auVar122);
      auVar122 = vunpcklpd_avx(auVar49,auVar64);
      auVar64 = vunpckhpd_avx(auVar49,auVar64);
      auVar49 = vcmpps_avx(ZEXT832(0) << 0x20,auVar64,1);
      uVar17 = vmovmskps_avx(auVar49);
      if (uVar17 != 0) {
        auVar81 = ZEXT816(0) << 0x20;
        bVar16 = (byte)uVar17;
        auVar127 = ZEXT816(0) << 0x20;
        if ((param_6 & 1) != 0) {
          if ((~bVar16 & 0x81) == 0) {
            auVar127._8_8_ = 0;
            auVar127._0_8_ = *(ulonglong *)(param_7 + uVar44);
          }
          else {
            pbVar18 = (byte *)(param_7 + uVar44);
            auVar47 = auVar127;
            auVar127 = SUB6416(ZEXT864(0),0) << 0x20;
            if ((uVar17 & 1) != 0) {
              auVar47 = ZEXT116(*pbVar18);
              auVar127 = ZEXT116(*pbVar18);
            }
            if ((uVar17 & 2) != 0) {
              auVar127 = vpinsrb_avx(auVar47,(uint)pbVar18[1],1);
              auVar127 = vpblendw_avx(auVar127,auVar47,0xe);
            }
            if ((uVar17 & 4) != 0) {
              auVar47 = vpmovzxwd_avx(auVar127);
              auVar47 = vpinsrb_avx(auVar47,(uint)pbVar18[2],2);
              auVar47 = vpinsrb_avx(auVar47,(uint)auVar127[3],3);
              auVar127 = vpblendw_avx(auVar47,auVar127,0xc);
            }
            if ((uVar17 & 8) != 0) {
              auVar47 = vpmovzxwd_avx(auVar127);
              auVar47 = vpinsrb_avx(auVar47,(uint)auVar127[2],2);
              auVar47 = vpinsrb_avx(auVar47,(uint)pbVar18[3],3);
              auVar127 = vpblendw_avx(auVar47,auVar127,0xc);
            }
            if ((uVar17 & 0x10) != 0) {
              auVar47 = vpshufb_avx(auVar127,___xmm_80800706808005048080030203020100);
              auVar47 = vpinsrb_avx(auVar47,(uint)pbVar18[4],4);
              auVar47 = vpinsrb_avx(auVar47,(uint)auVar127[5],5);
              auVar127 = vpblendw_avx(auVar47,auVar127,8);
            }
            if ((uVar17 & 0x20) != 0) {
              auVar47 = vpshufb_avx(auVar127,___xmm_80800706808005048080030403020100);
              auVar47 = vpinsrb_avx(auVar47,(uint)pbVar18[5],5);
              auVar127 = vpblendw_avx(auVar47,auVar127,8);
            }
            if ((uVar17 & 0x40) != 0) {
              auVar47 = vpshufb_avx(auVar127,___xmm_80800706808005048080050403020100);
              auVar47 = vpinsrb_avx(auVar47,(uint)pbVar18[6],6);
              auVar127 = vpinsrb_avx(auVar47,(uint)auVar127[7],7);
            }
            if ((uVar17 & 0x80) != 0) {
              auVar127 = vpshufb_avx(auVar127,___xmm_80800706808005048006050403020100);
              auVar127 = vpinsrb_avx(auVar127,(uint)pbVar18[7],7);
            }
          }
        }
        if ((param_9 & 1) != 0) {
          if ((~bVar16 & 0x81) == 0) {
            auVar81._8_8_ = 0;
            auVar81._0_8_ = *(ulonglong *)(param_10 + uVar44);
          }
          else {
            pbVar18 = (byte *)(param_10 + uVar44);
            auVar47 = auVar81;
            auVar81 = SUB6416(ZEXT864(0),0) << 0x20;
            if ((uVar17 & 1) != 0) {
              auVar47 = ZEXT116(*pbVar18);
              auVar81 = ZEXT116(*pbVar18);
            }
            if ((uVar17 & 2) != 0) {
              auVar81 = vpinsrb_avx(auVar47,(uint)pbVar18[1],1);
              auVar81 = vpblendw_avx(auVar81,auVar47,0xe);
            }
            if ((uVar17 & 4) != 0) {
              auVar47 = vpmovzxwd_avx(auVar81);
              auVar47 = vpinsrb_avx(auVar47,(uint)pbVar18[2],2);
              auVar47 = vpinsrb_avx(auVar47,(uint)auVar81[3],3);
              auVar81 = vpblendw_avx(auVar47,auVar81,0xc);
            }
            if ((uVar17 & 8) != 0) {
              auVar47 = vpmovzxwd_avx(auVar81);
              auVar47 = vpinsrb_avx(auVar47,(uint)auVar81[2],2);
              auVar47 = vpinsrb_avx(auVar47,(uint)pbVar18[3],3);
              auVar81 = vpblendw_avx(auVar47,auVar81,0xc);
            }
            if ((uVar17 & 0x10) != 0) {
              auVar47 = vpshufb_avx(auVar81,___xmm_80800706808005048080030203020100);
              auVar47 = vpinsrb_avx(auVar47,(uint)pbVar18[4],4);
              auVar47 = vpinsrb_avx(auVar47,(uint)auVar81[5],5);
              auVar81 = vpblendw_avx(auVar47,auVar81,8);
            }
            if ((uVar17 & 0x20) != 0) {
              auVar47 = vpshufb_avx(auVar81,___xmm_80800706808005048080030403020100);
              auVar47 = vpinsrb_avx(auVar47,(uint)pbVar18[5],5);
              auVar81 = vpblendw_avx(auVar47,auVar81,8);
            }
            if ((uVar17 & 0x40) != 0) {
              auVar47 = vpshufb_avx(auVar81,___xmm_80800706808005048080050403020100);
              auVar47 = vpinsrb_avx(auVar47,(uint)pbVar18[6],6);
              auVar81 = vpinsrb_avx(auVar47,(uint)auVar81[7],7);
            }
            if ((uVar17 & 0x80) != 0) {
              auVar81 = vpshufb_avx(auVar81,___xmm_80800706808005048006050403020100);
              auVar81 = vpinsrb_avx(auVar81,(uint)pbVar18[7],7);
            }
          }
        }
        auVar47 = vshufps_avx(auVar127,auVar127,0x55);
        auVar47 = vpmovsxbd_avx(auVar47);
        auVar127 = vpmovsxbd_avx(auVar127);
        auVar61 = vpslld_avx(auVar127,2);
        auVar47 = vpslld_avx(auVar47,2);
        uVar72 = auVar49._0_4_;
        uVar73 = auVar49._4_4_;
        uVar74 = auVar49._8_4_;
        uVar75 = auVar49._12_4_;
        uVar140 = auVar49._16_4_;
        uVar141 = auVar49._20_4_;
        uVar142 = auVar49._24_4_;
        uVar143 = auVar49._28_4_;
        auVar127 = vinsertps_avx(ZEXT416(*(uint *)(param_8 + (int)(uVar140 & auVar47._0_4_))),
                                 ZEXT416(*(uint *)(param_8 + (int)(uVar141 & auVar47._4_4_))),0x10);
        auVar127 = vinsertps_avx(auVar127,ZEXT416(*(uint *)(param_8 + (int)(uVar142 & auVar47._8_4_)
                                                           )),0x20);
        auVar127 = vinsertps_avx(auVar127,ZEXT416(*(uint *)(param_8 +
                                                           (int)(uVar143 & auVar47._12_4_))),0x30);
        auVar47 = vinsertps_avx(ZEXT416(*(uint *)(param_8 + (int)(uVar72 & auVar61._0_4_))),
                                ZEXT416(*(uint *)(param_8 + (int)(uVar73 & auVar61._4_4_))),0x10);
        auVar47 = vinsertps_avx(auVar47,ZEXT416(*(uint *)(param_8 + (int)(uVar74 & auVar61._8_4_))),
                                0x20);
        auVar47 = vinsertps_avx(auVar47,ZEXT416(*(uint *)(param_8 + (int)(uVar75 & auVar61._12_4_)))
                                ,0x30);
        auVar61 = vshufps_avx(auVar81,auVar81,0x55);
        auVar61 = vpmovsxbd_avx(auVar61);
        auVar81 = vpmovsxbd_avx(auVar81);
        auVar62 = vpslld_avx(auVar81,2);
        auVar61 = vpslld_avx(auVar61,2);
        uVar58 = uVar73 & auVar62._4_4_;
        uVar59 = uVar74 & auVar62._8_4_;
        uVar60 = uVar75 & auVar62._12_4_;
        auVar81 = vinsertps_avx(ZEXT416(*(uint *)(param_11 + (int)(uVar140 & auVar61._0_4_))),
                                ZEXT416(*(uint *)(param_11 + (int)(uVar141 & auVar61._4_4_))),0x10);
        auVar81 = vinsertps_avx(auVar81,ZEXT416(*(uint *)(param_11 + (int)(uVar142 & auVar61._8_4_))
                                               ),0x20);
        auVar81 = vinsertps_avx(auVar81,ZEXT416(*(uint *)(param_11 + (int)(uVar143 & auVar61._12_4_)
                                                         )),0x30);
        auVar61 = vinsertps_avx(ZEXT416(*(uint *)(param_11 + (int)(uVar72 & auVar62._0_4_))),
                                ZEXT416(*(uint *)(param_11 + (int)uVar58)),0x10);
        auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)(param_11 + (int)uVar59)),0x20);
        auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)(param_11 + (int)uVar60)),0x30);
        if (bVar16 == 0xff) {
          auVar62 = *(undefined1 (*) [16])(param_2 + 0x10 + lVar43);
          auVar105 = *(undefined1 (*) [16])(param_2 + 0x30 + lVar43);
          auVar149._16_16_ = auVar62;
          auVar149._0_16_ = *(undefined1 (*) [16])(param_2 + lVar43);
          auVar77._16_16_ = auVar105;
          auVar77._0_16_ = *(undefined1 (*) [16])(param_2 + 0x20 + lVar43);
          auVar63 = *(undefined1 (*) [16])(param_2 + 0x50 + lVar43);
          auVar118 = *(undefined1 (*) [16])(param_2 + 0x40 + lVar43);
          auVar152._16_16_ = auVar63;
          auVar152._0_16_ = auVar118;
          auVar66._16_16_ = *(undefined1 (*) [16])(param_2 + lVar43);
          auVar66._0_16_ = auVar62;
          auVar82 = vblendps_avx(auVar149,auVar66,0x24);
          auVar82 = vpermilps_avx(auVar82,
                                  ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                                 );
          uVar37 = *(undefined4 *)(param_2 + 0x28 + lVar43);
          auVar156._20_4_ = uVar37;
          auVar156._16_4_ = uVar37;
          auVar156._24_4_ = uVar37;
          auVar156._28_4_ = uVar37;
          uVar37 = *(undefined4 *)(param_2 + 0x24 + lVar43);
          auVar156._4_4_ = uVar37;
          auVar156._0_4_ = uVar37;
          auVar156._8_4_ = uVar37;
          auVar156._12_4_ = uVar37;
          auVar82 = vblendps_avx(auVar82,auVar156,0x88);
          auVar157._16_16_ = auVar118;
          auVar157._0_16_ = auVar63;
          auVar151 = vblendps_avx(auVar157,auVar152,0x44);
          auVar151 = vpermilps_avx(auVar151,
                                   ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                                  );
          uVar37 = *(undefined4 *)(param_2 + 0x34 + lVar43);
          auVar83._20_4_ = uVar37;
          auVar83._16_4_ = uVar37;
          auVar83._24_4_ = uVar37;
          auVar83._28_4_ = uVar37;
          auVar105 = vshufps_avx(auVar105,auVar105,0xec);
          auVar83._0_16_ = auVar105;
          auVar151 = vblendps_avx(auVar151,auVar83,0x13);
          register0x00001310 = auVar151._0_16_;
          _local_280 = auVar82._0_16_;
          auVar135 = vperm2f128_avx(auVar82,auVar151,0x31);
          auVar82 = vblendps_avx(auVar77,auVar149,0x24);
          auVar82 = vshufps_avx(ZEXT1632(auVar62),auVar82,0x21);
          auVar82 = vshufps_avx(auVar82,auVar77,0xc2);
          auVar151 = vshufps_avx(auVar157,auVar152,0xc4);
          local_340 = vblendps_avx(auVar82,auVar151,0xe0);
          auVar62 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar43);
          auVar105 = *(undefined1 (*) [16])(param_3 + 0x30 + lVar43);
          auVar153._16_16_ = auVar62;
          auVar153._0_16_ = *(undefined1 (*) [16])(param_3 + lVar43);
          auVar158._16_16_ = auVar105;
          auVar158._0_16_ = *(undefined1 (*) [16])(param_3 + 0x20 + lVar43);
          auVar63 = *(undefined1 (*) [16])(param_3 + 0x50 + lVar43);
          auVar118 = *(undefined1 (*) [16])(param_3 + 0x40 + lVar43);
          auVar91._16_16_ = auVar63;
          auVar91._0_16_ = auVar118;
          auVar51._16_16_ = *(undefined1 (*) [16])(param_3 + lVar43);
          auVar51._0_16_ = auVar62;
          auVar82 = vblendps_avx(auVar153,auVar51,0x24);
          auVar82 = vpermilps_avx(auVar82,
                                  ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                                 );
          uVar37 = *(undefined4 *)(param_3 + 0x28 + lVar43);
          auVar106._20_4_ = uVar37;
          auVar106._16_4_ = uVar37;
          auVar106._24_4_ = uVar37;
          auVar106._28_4_ = uVar37;
          uVar37 = *(undefined4 *)(param_3 + 0x24 + lVar43);
          auVar106._4_4_ = uVar37;
          auVar106._0_4_ = uVar37;
          auVar106._8_4_ = uVar37;
          auVar106._12_4_ = uVar37;
          auVar82 = vblendps_avx(auVar82,auVar106,0x88);
          auVar107._16_16_ = auVar118;
          auVar107._0_16_ = auVar63;
          auVar151 = vblendps_avx(auVar107,auVar91,0x44);
          auVar151 = vpermilps_avx(auVar151,
                                   ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                                  );
          uVar37 = *(undefined4 *)(param_3 + 0x34 + lVar43);
          auVar119._20_4_ = uVar37;
          auVar119._16_4_ = uVar37;
          auVar119._24_4_ = uVar37;
          auVar119._28_4_ = uVar37;
          auVar105 = vshufps_avx(auVar105,auVar105,0xec);
          auVar119._0_16_ = auVar105;
          auVar151 = vblendps_avx(auVar151,auVar119,0x13);
          auVar65._16_16_ = auVar151._0_16_;
          auVar65._0_16_ = auVar82._0_16_;
          auVar148 = vperm2f128_avx(auVar82,auVar151,0x31);
          auVar82 = vblendps_avx(auVar158,auVar153,0x24);
          auVar82 = vshufps_avx(ZEXT1632(auVar62),auVar82,0x21);
          auVar82 = vshufps_avx(auVar82,auVar158,0xc2);
          auVar151 = vshufps_avx(auVar107,auVar91,0xc4);
          auVar151 = vblendps_avx(auVar82,auVar151,0xe0);
          auVar62 = *(undefined1 (*) [16])(param_4 + 0x10 + lVar43);
          auVar105 = *(undefined1 (*) [16])(param_4 + 0x30 + lVar43);
          auVar120._16_16_ = auVar62;
          auVar120._0_16_ = *(undefined1 (*) [16])(param_4 + lVar43);
          auVar92._16_16_ = auVar105;
          auVar92._0_16_ = *(undefined1 (*) [16])(param_4 + 0x20 + lVar43);
          auVar63 = *(undefined1 (*) [16])(param_4 + 0x50 + lVar43);
          auVar118 = *(undefined1 (*) [16])(param_4 + 0x40 + lVar43);
          auVar128._16_16_ = auVar63;
          auVar128._0_16_ = auVar118;
          auVar52._16_16_ = *(undefined1 (*) [16])(param_4 + lVar43);
          auVar52._0_16_ = auVar62;
          auVar82 = vblendps_avx(auVar120,auVar52,0x24);
          auVar82 = vpermilps_avx(auVar82,
                                  ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                                 );
          uVar37 = *(undefined4 *)(param_4 + 0x28 + lVar43);
          auVar78._20_4_ = uVar37;
          auVar78._16_4_ = uVar37;
          auVar78._24_4_ = uVar37;
          auVar78._28_4_ = uVar37;
          uVar37 = *(undefined4 *)(param_4 + 0x24 + lVar43);
          auVar78._4_4_ = uVar37;
          auVar78._0_4_ = uVar37;
          auVar78._8_4_ = uVar37;
          auVar78._12_4_ = uVar37;
          auVar82 = vblendps_avx(auVar82,auVar78,0x88);
          auVar79._16_16_ = auVar118;
          auVar79._0_16_ = auVar63;
          auVar50 = vblendps_avx(auVar79,auVar128,0x44);
          auVar50 = vpermilps_avx(auVar50,
                                  ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                                 );
          uVar37 = *(undefined4 *)(param_4 + 0x34 + lVar43);
          auVar108._20_4_ = uVar37;
          auVar108._16_4_ = uVar37;
          auVar108._24_4_ = uVar37;
          auVar108._28_4_ = uVar37;
          auVar105 = vshufps_avx(auVar105,auVar105,0xec);
          auVar108._0_16_ = auVar105;
          auVar50 = vblendps_avx(auVar50,auVar108,0x13);
          auVar155._16_16_ = auVar50._0_16_;
          auVar155._0_16_ = auVar82._0_16_;
          auVar162 = vperm2f128_avx(auVar82,auVar50,0x31);
          auVar82 = vblendps_avx(auVar92,auVar120,0x24);
          auVar82 = vshufps_avx(ZEXT1632(auVar62),auVar82,0x21);
          auVar82 = vshufps_avx(auVar82,auVar92,0xc2);
          auVar50 = vshufps_avx(auVar79,auVar128,0xc4);
          auVar50 = vblendps_avx(auVar82,auVar50,0xe0);
        }
        else {
          auVar62._0_4_ =
               uVar72 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000;
          auVar62._4_4_ = uVar73 & _UNK_150b50b04;
          auVar62._8_4_ = uVar74 & _UNK_150b50b08;
          auVar62._12_4_ = uVar75 & _UNK_150b50b0c;
          uVar37 = vextractps_avx(auVar62,1);
          lVar29 = CONCAT44((int)uVar58 >> 0x1f,uVar37);
          uVar37 = vextractps_avx(auVar62,2);
          lVar35 = CONCAT44((int)uVar59 >> 0x1f,uVar37);
          uVar37 = vextractps_avx(auVar62,3);
          lVar40 = CONCAT44((int)uVar60 >> 0x1f,uVar37);
          uVar46 = (ulonglong)(uVar141 & _UNK_150b50b14);
          uVar41 = (ulonglong)(uVar142 & _UNK_150b50b18);
          uVar42 = (ulonglong)(uVar143 & _UNK_150b50b1c);
          lVar4 = param_2 + lVar43;
          auVar62 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + lVar43)),
                                  ZEXT416(*(uint *)(lVar29 + lVar4)),0x10);
          auVar62 = vinsertps_avx(auVar62,ZEXT416(*(uint *)(lVar35 + lVar4)),0x20);
          auVar62 = vinsertps_avx(auVar62,ZEXT416(*(uint *)(lVar40 + lVar4)),0x30);
          uVar19 = (ulonglong)(uVar140 & _UNK_150b50b10);
          auVar105 = vinsertps_avx(ZEXT416(*(uint *)(uVar19 + lVar4)),
                                   ZEXT416(*(uint *)(uVar46 + lVar4)),0x10);
          auVar105 = vinsertps_avx(auVar105,ZEXT416(*(uint *)(uVar41 + lVar4)),0x20);
          auVar105 = vinsertps_avx(auVar105,ZEXT416(*(uint *)(uVar42 + lVar4)),0x30);
          uVar20 = (ulonglong)(uVar141 & _UNK_150b50b34);
          uVar33 = (ulonglong)(uVar142 & _UNK_150b50b38);
          uVar39 = (ulonglong)(uVar143 & _UNK_150b50b3c);
          uVar45 = (ulonglong)(uVar140 & _UNK_150b50b30);
          auVar63 = vinsertps_avx(ZEXT416(*(uint *)(uVar45 + lVar4)),
                                  ZEXT416(*(uint *)(uVar20 + lVar4)),0x10);
          auVar63 = vinsertps_avx(auVar63,ZEXT416(*(uint *)(uVar33 + lVar4)),0x20);
          auVar63 = vinsertps_avx(auVar63,ZEXT416(*(uint *)(uVar39 + lVar4)),0x30);
          uVar14 = (ulonglong)
                   (uVar72 & ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004
                   );
          uVar12 = (ulonglong)(uVar73 & _UNK_150b50b24);
          auVar118 = vinsertps_avx(ZEXT416(*(uint *)(uVar14 + lVar4)),
                                   ZEXT416(*(uint *)(uVar12 + lVar4)),0x10);
          uVar21 = (ulonglong)(uVar74 & _UNK_150b50b28);
          auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(uVar21 + lVar4)),0x20);
          uVar22 = (ulonglong)(uVar75 & _UNK_150b50b2c);
          auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(uVar22 + lVar4)),0x30);
          uVar23 = (ulonglong)(uVar140 & _UNK_150b50b50);
          uVar24 = (ulonglong)(uVar141 & _UNK_150b50b54);
          auVar138 = vinsertps_avx(ZEXT416(*(uint *)(uVar23 + lVar4)),
                                   ZEXT416(*(uint *)(uVar24 + lVar4)),0x10);
          uVar25 = (ulonglong)(uVar142 & _UNK_150b50b58);
          auVar138 = vinsertps_avx(auVar138,ZEXT416(*(uint *)(uVar25 + lVar4)),0x20);
          uVar26 = (ulonglong)(uVar143 & _UNK_150b50b5c);
          auVar138 = vinsertps_avx(auVar138,ZEXT416(*(uint *)(uVar26 + lVar4)),0x30);
          uVar15 = (ulonglong)
                   (uVar72 & ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008
                   );
          uVar13 = (ulonglong)(uVar73 & _UNK_150b50b44);
          auVar48 = vinsertps_avx(ZEXT416(*(uint *)(uVar15 + lVar4)),
                                  ZEXT416(*(uint *)(uVar13 + lVar4)),0x10);
          uVar27 = (ulonglong)(uVar74 & _UNK_150b50b48);
          auVar48 = vinsertps_avx(auVar48,ZEXT416(*(uint *)(uVar27 + lVar4)),0x20);
          uVar28 = (ulonglong)(uVar75 & _UNK_150b50b4c);
          auVar48 = vinsertps_avx(auVar48,ZEXT416(*(uint *)(uVar28 + lVar4)),0x30);
          register0x00001250 = auVar105;
          _local_280 = auVar62;
          auVar135._16_16_ = auVar63;
          auVar135._0_16_ = auVar118;
          local_340._16_16_ = auVar138;
          local_340._0_16_ = auVar48;
          lVar4 = param_3 + lVar43;
          auVar62 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + lVar43)),
                                  ZEXT416(*(uint *)(lVar29 + lVar4)),0x10);
          auVar62 = vinsertps_avx(auVar62,ZEXT416(*(uint *)(lVar35 + lVar4)),0x20);
          auVar62 = vinsertps_avx(auVar62,ZEXT416(*(uint *)(lVar40 + lVar4)),0x30);
          auVar105 = vinsertps_avx(ZEXT416(*(uint *)(uVar19 + lVar4)),
                                   ZEXT416(*(uint *)(uVar46 + lVar4)),0x10);
          auVar105 = vinsertps_avx(auVar105,ZEXT416(*(uint *)(uVar41 + lVar4)),0x20);
          auVar105 = vinsertps_avx(auVar105,ZEXT416(*(uint *)(uVar42 + lVar4)),0x30);
          auVar63 = vinsertps_avx(ZEXT416(*(uint *)(uVar45 + lVar4)),
                                  ZEXT416(*(uint *)(uVar20 + lVar4)),0x10);
          auVar63 = vinsertps_avx(auVar63,ZEXT416(*(uint *)(uVar33 + lVar4)),0x20);
          auVar63 = vinsertps_avx(auVar63,ZEXT416(*(uint *)(uVar39 + lVar4)),0x30);
          auVar118 = vinsertps_avx(ZEXT416(*(uint *)(uVar14 + lVar4)),
                                   ZEXT416(*(uint *)(uVar12 + lVar4)),0x10);
          auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(uVar21 + lVar4)),0x20);
          auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(uVar22 + lVar4)),0x30);
          auVar138 = vinsertps_avx(ZEXT416(*(uint *)(uVar23 + lVar4)),
                                   ZEXT416(*(uint *)(uVar24 + lVar4)),0x10);
          auVar138 = vinsertps_avx(auVar138,ZEXT416(*(uint *)(uVar25 + lVar4)),0x20);
          auVar138 = vinsertps_avx(auVar138,ZEXT416(*(uint *)(uVar26 + lVar4)),0x30);
          auVar48 = vinsertps_avx(ZEXT416(*(uint *)(uVar15 + lVar4)),
                                  ZEXT416(*(uint *)(uVar13 + lVar4)),0x10);
          auVar48 = vinsertps_avx(auVar48,ZEXT416(*(uint *)(uVar27 + lVar4)),0x20);
          auVar48 = vinsertps_avx(auVar48,ZEXT416(*(uint *)(uVar28 + lVar4)),0x30);
          lVar4 = param_4 + lVar43;
          auVar5 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + lVar43)),
                                 ZEXT416(*(uint *)(lVar29 + lVar4)),0x10);
          auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(lVar35 + lVar4)),0x20);
          auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(lVar40 + lVar4)),0x30);
          auVar6 = vinsertps_avx(ZEXT416(*(uint *)(uVar19 + lVar4)),
                                 ZEXT416(*(uint *)(uVar46 + lVar4)),0x10);
          auVar6 = vinsertps_avx(auVar6,ZEXT416(*(uint *)(uVar41 + lVar4)),0x20);
          auVar6 = vinsertps_avx(auVar6,ZEXT416(*(uint *)(uVar42 + lVar4)),0x30);
          auVar7 = vinsertps_avx(ZEXT416(*(uint *)(uVar45 + lVar4)),
                                 ZEXT416(*(uint *)(uVar20 + lVar4)),0x10);
          auVar7 = vinsertps_avx(auVar7,ZEXT416(*(uint *)(uVar33 + lVar4)),0x20);
          auVar7 = vinsertps_avx(auVar7,ZEXT416(*(uint *)(uVar39 + lVar4)),0x30);
          auVar8 = vinsertps_avx(ZEXT416(*(uint *)(uVar14 + lVar4)),
                                 ZEXT416(*(uint *)(uVar12 + lVar4)),0x10);
          auVar8 = vinsertps_avx(auVar8,ZEXT416(*(uint *)(uVar21 + lVar4)),0x20);
          auVar8 = vinsertps_avx(auVar8,ZEXT416(*(uint *)(uVar22 + lVar4)),0x30);
          auVar9 = vinsertps_avx(ZEXT416(*(uint *)(uVar23 + lVar4)),
                                 ZEXT416(*(uint *)(uVar24 + lVar4)),0x10);
          auVar9 = vinsertps_avx(auVar9,ZEXT416(*(uint *)(uVar25 + lVar4)),0x20);
          auVar9 = vinsertps_avx(auVar9,ZEXT416(*(uint *)(uVar26 + lVar4)),0x30);
          auVar10 = vinsertps_avx(ZEXT416(*(uint *)(uVar15 + lVar4)),
                                  ZEXT416(*(uint *)(uVar13 + lVar4)),0x10);
          auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(uVar27 + lVar4)),0x20);
          auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(uVar28 + lVar4)),0x30);
          auVar65._16_16_ = auVar105;
          auVar65._0_16_ = auVar62;
          auVar148._16_16_ = auVar63;
          auVar148._0_16_ = auVar118;
          auVar151._16_16_ = auVar138;
          auVar151._0_16_ = auVar48;
          auVar155._16_16_ = auVar6;
          auVar155._0_16_ = auVar5;
          auVar162._16_16_ = auVar7;
          auVar162._0_16_ = auVar8;
          auVar50._16_16_ = auVar9;
          auVar50._0_16_ = auVar10;
        }
        auVar82 = vsubps_avx(auVar76,auVar65);
        auVar148 = vsubps_avx(auVar55,auVar148);
        auVar151 = vsubps_avx(auVar122,auVar151);
        fVar89 = auVar47._0_4_;
        auVar67._0_4_ = fVar89 * auVar82._0_4_;
        fVar98 = auVar47._4_4_;
        auVar67._4_4_ = fVar98 * auVar82._4_4_;
        fVar99 = auVar47._8_4_;
        auVar67._8_4_ = fVar99 * auVar82._8_4_;
        fVar100 = auVar47._12_4_;
        auVar67._12_4_ = fVar100 * auVar82._12_4_;
        fVar101 = auVar127._0_4_;
        auVar67._16_4_ = fVar101 * auVar82._16_4_;
        fVar102 = auVar127._4_4_;
        auVar67._20_4_ = fVar102 * auVar82._20_4_;
        fVar103 = auVar127._8_4_;
        auVar67._24_4_ = fVar103 * auVar82._24_4_;
        fVar104 = auVar127._12_4_;
        auVar67._28_4_ = fVar104 * auVar82._28_4_;
        auVar109._0_4_ = fVar89 * auVar148._0_4_;
        auVar109._4_4_ = fVar98 * auVar148._4_4_;
        auVar109._8_4_ = fVar99 * auVar148._8_4_;
        auVar109._12_4_ = fVar100 * auVar148._12_4_;
        auVar109._16_4_ = fVar101 * auVar148._16_4_;
        auVar109._20_4_ = fVar102 * auVar148._20_4_;
        auVar109._24_4_ = fVar103 * auVar148._24_4_;
        auVar109._28_4_ = fVar104 * auVar148._28_4_;
        auVar121._0_4_ = fVar89 * auVar151._0_4_;
        auVar121._4_4_ = fVar98 * auVar151._4_4_;
        auVar121._8_4_ = fVar99 * auVar151._8_4_;
        auVar121._12_4_ = fVar100 * auVar151._12_4_;
        auVar121._16_4_ = fVar101 * auVar151._16_4_;
        auVar121._20_4_ = fVar102 * auVar151._20_4_;
        auVar121._24_4_ = fVar103 * auVar151._24_4_;
        auVar121._28_4_ = fVar104 * auVar151._28_4_;
        auVar76 = vsubps_avx(auVar76,auVar67);
        auVar82 = vsubps_avx(auVar55,auVar109);
        auVar122 = vsubps_avx(auVar122,auVar121);
        auVar55 = vmaskmovps_avx(auVar49,auVar76);
        auVar76 = vmaskmovps_avx(auVar49,auVar82);
        auVar122 = vmaskmovps_avx(auVar49,auVar122);
        auVar82 = vsubps_avx(auVar55,_local_280);
        auVar151 = vsubps_avx(auVar76,auVar135);
        auVar135 = vsubps_avx(auVar122,local_340);
        local_120 = auVar90._0_4_;
        fStack_11c = auVar90._4_4_;
        fStack_118 = auVar90._8_4_;
        fStack_114 = auVar90._12_4_;
        auVar129._0_4_ = local_120 * auVar155._0_4_;
        auVar129._4_4_ = fStack_11c * auVar155._4_4_;
        auVar129._8_4_ = fStack_118 * auVar155._8_4_;
        auVar129._12_4_ = fStack_114 * auVar155._12_4_;
        auVar129._16_4_ = local_120 * auVar155._16_4_;
        auVar129._20_4_ = fStack_11c * auVar155._20_4_;
        auVar129._24_4_ = fStack_118 * auVar155._24_4_;
        auVar129._28_4_ = fStack_114 * auVar155._28_4_;
        auVar82 = vsubps_avx(auVar82,auVar129);
        auVar130._0_4_ = local_120 * auVar162._0_4_;
        auVar130._4_4_ = fStack_11c * auVar162._4_4_;
        auVar130._8_4_ = fStack_118 * auVar162._8_4_;
        auVar130._12_4_ = fStack_114 * auVar162._12_4_;
        auVar130._16_4_ = local_120 * auVar162._16_4_;
        auVar130._20_4_ = fStack_11c * auVar162._20_4_;
        auVar130._24_4_ = fStack_118 * auVar162._24_4_;
        auVar130._28_4_ = fStack_114 * auVar162._28_4_;
        auVar151 = vsubps_avx(auVar151,auVar130);
        auVar53._0_4_ = local_120 * auVar50._0_4_;
        auVar53._4_4_ = fStack_11c * auVar50._4_4_;
        auVar53._8_4_ = fStack_118 * auVar50._8_4_;
        auVar53._12_4_ = fStack_114 * auVar50._12_4_;
        auVar53._16_4_ = local_120 * auVar50._16_4_;
        auVar53._20_4_ = fStack_11c * auVar50._20_4_;
        auVar53._24_4_ = fStack_118 * auVar50._24_4_;
        auVar53._28_4_ = fStack_114 * auVar50._28_4_;
        auVar50 = vsubps_avx(auVar135,auVar53);
        fVar89 = auVar61._0_4_;
        auVar93._0_4_ = fVar89 * auVar82._0_4_;
        fVar98 = auVar61._4_4_;
        auVar93._4_4_ = fVar98 * auVar82._4_4_;
        fVar99 = auVar61._8_4_;
        auVar93._8_4_ = fVar99 * auVar82._8_4_;
        fVar100 = auVar61._12_4_;
        auVar93._12_4_ = fVar100 * auVar82._12_4_;
        fVar101 = auVar81._0_4_;
        auVar93._16_4_ = fVar101 * auVar82._16_4_;
        fVar102 = auVar81._4_4_;
        auVar93._20_4_ = fVar102 * auVar82._20_4_;
        fVar103 = auVar81._8_4_;
        auVar93._24_4_ = fVar103 * auVar82._24_4_;
        fVar104 = auVar81._12_4_;
        auVar93._28_4_ = fVar104 * auVar82._28_4_;
        auVar110._0_4_ = fVar89 * auVar151._0_4_;
        auVar110._4_4_ = fVar98 * auVar151._4_4_;
        auVar110._8_4_ = fVar99 * auVar151._8_4_;
        auVar110._12_4_ = fVar100 * auVar151._12_4_;
        auVar110._16_4_ = fVar101 * auVar151._16_4_;
        auVar110._20_4_ = fVar102 * auVar151._20_4_;
        auVar110._24_4_ = fVar103 * auVar151._24_4_;
        auVar110._28_4_ = fVar104 * auVar151._28_4_;
        auVar54._0_4_ = fVar89 * auVar50._0_4_;
        auVar54._4_4_ = fVar98 * auVar50._4_4_;
        auVar54._8_4_ = fVar99 * auVar50._8_4_;
        auVar54._12_4_ = fVar100 * auVar50._12_4_;
        auVar54._16_4_ = fVar101 * auVar50._16_4_;
        auVar54._20_4_ = fVar102 * auVar50._20_4_;
        auVar54._24_4_ = fVar103 * auVar50._24_4_;
        auVar54._28_4_ = fVar104 * auVar50._28_4_;
        auVar55 = vsubps_avx(auVar55,auVar93);
        auVar76 = vsubps_avx(auVar76,auVar110);
        auVar122 = vsubps_avx(auVar122,auVar54);
        auVar55 = vmaskmovps_avx(auVar49,auVar55);
        auVar76 = vmaskmovps_avx(auVar49,auVar76);
        auVar49 = vmaskmovps_avx(auVar49,auVar122);
        if (bVar16 == 0xff) {
          auVar122 = vunpcklps_avx(auVar55,auVar76);
          auVar151 = vunpcklps_avx(auVar49,auVar64);
          auVar82 = vunpcklpd_avx(auVar122,auVar151);
          auVar122 = vunpckhpd_avx(auVar122,auVar151);
          auVar55 = vunpckhps_avx(auVar55,auVar76);
          auVar49 = vunpckhps_avx(auVar49,auVar64);
          auVar64 = vunpcklpd_avx(auVar55,auVar49);
          auVar49 = vunpckhpd_avx(auVar55,auVar49);
          *(undefined1 (*) [16])(*pauVar32 + 0x10) = auVar122._0_16_;
          *(undefined1 (*) [16])*pauVar32 = auVar82._0_16_;
          *(undefined1 (*) [16])(pauVar32[1] + 0x10) = auVar49._0_16_;
          *(undefined1 (*) [16])pauVar32[1] = auVar64._0_16_;
          *(undefined1 (*) [16])(pauVar32[2] + 0x10) = auVar122._16_16_;
          *(undefined1 (*) [16])pauVar32[2] = auVar82._16_16_;
          *(undefined1 (*) [16])(pauVar32[3] + 0x10) = auVar49._16_16_;
          *(undefined1 (*) [16])pauVar32[3] = auVar64._16_16_;
        }
        else {
          if ((uVar17 & 1) != 0) {
            *(int *)*pauVar32 = auVar55._0_4_;
          }
          auVar127 = auVar55._0_16_;
          auVar81 = auVar55._16_16_;
          auVar62 = auVar76._0_16_;
          auVar105 = auVar76._16_16_;
          auVar47 = auVar49._0_16_;
          auVar61 = auVar49._16_16_;
          if ((uVar17 & 2) == 0) {
            if ((uVar17 & 4) != 0) goto LAB_1405aeae8;
LAB_1405ae982:
            if ((uVar17 & 8) != 0) goto LAB_1405aeaf9;
LAB_1405ae98c:
            if ((uVar17 & 0x10) != 0) goto LAB_1405aeb10;
LAB_1405ae99c:
            if ((uVar17 & 0x20) != 0) goto LAB_1405aeb1f;
LAB_1405ae9a6:
            if ((uVar17 & 0x40) != 0) goto LAB_1405aeb30;
LAB_1405ae9b0:
            if ((char)bVar16 < '\0') goto LAB_1405aeb42;
LAB_1405ae9bb:
            if ((uVar17 & 1) != 0) goto LAB_1405aeb53;
LAB_1405ae9c5:
            if ((uVar17 & 2) != 0) goto LAB_1405aeb62;
LAB_1405ae9cf:
            if ((uVar17 & 4) != 0) goto LAB_1405aeb73;
LAB_1405ae9d9:
            if ((uVar17 & 8) != 0) goto LAB_1405aeb84;
LAB_1405ae9e3:
            if ((uVar17 & 0x10) != 0) goto LAB_1405aeb9b;
LAB_1405ae9f3:
            if ((uVar17 & 0x20) != 0) goto LAB_1405aebaa;
LAB_1405ae9fd:
            if ((uVar17 & 0x40) != 0) goto LAB_1405aebbb;
LAB_1405aea07:
            if ((char)bVar16 < '\0') goto LAB_1405aebcd;
LAB_1405aea12:
            if ((uVar17 & 1) != 0) goto LAB_1405aebde;
LAB_1405aea1c:
            if ((uVar17 & 2) != 0) goto LAB_1405aebed;
LAB_1405aea26:
            if ((uVar17 & 4) != 0) goto LAB_1405aebfe;
LAB_1405aea30:
            if ((uVar17 & 8) != 0) goto LAB_1405aec0f;
LAB_1405aea3a:
            if ((uVar17 & 0x10) != 0) goto LAB_1405aec26;
LAB_1405aea4a:
            if ((uVar17 & 0x20) != 0) goto LAB_1405aec35;
LAB_1405aea54:
            if ((uVar17 & 0x40) != 0) goto LAB_1405aec46;
LAB_1405aea5e:
            if ((char)bVar16 < '\0') goto LAB_1405aec58;
LAB_1405aea69:
            if ((uVar17 & 1) != 0) goto LAB_1405aec6f;
LAB_1405aea79:
            auVar49 = *pauVar32;
            if ((uVar17 & 2) != 0) goto LAB_1405aec80;
LAB_1405aea83:
            if ((uVar17 & 4) != 0) goto LAB_1405aec9d;
LAB_1405aea93:
            auVar49 = *pauVar1;
            if ((uVar17 & 8) != 0) goto LAB_1405aecae;
LAB_1405aea9d:
            if ((uVar17 & 0x10) != 0) goto LAB_1405aeccb;
LAB_1405aeaad:
            auVar49 = *pauVar2;
            if ((uVar17 & 0x20) != 0) goto LAB_1405aecdc;
LAB_1405aeab7:
            if ((uVar17 & 0x40) != 0) goto LAB_1405aecf9;
LAB_1405aeac7:
            auVar49 = *pauVar3;
          }
          else {
            uVar37 = vextractps_avx(auVar127,1);
            *(undefined4 *)(*pauVar32 + 0x10) = uVar37;
            if ((uVar17 & 4) == 0) goto LAB_1405ae982;
LAB_1405aeae8:
            uVar37 = vextractps_avx(auVar127,2);
            *(undefined4 *)pauVar32[1] = uVar37;
            if ((uVar17 & 8) == 0) goto LAB_1405ae98c;
LAB_1405aeaf9:
            uVar37 = vextractps_avx(auVar127,3);
            *(undefined4 *)(pauVar32[1] + 0x10) = uVar37;
            if ((uVar17 & 0x10) == 0) goto LAB_1405ae99c;
LAB_1405aeb10:
            *(int *)pauVar32[2] = auVar55._16_4_;
            if ((uVar17 & 0x20) == 0) goto LAB_1405ae9a6;
LAB_1405aeb1f:
            uVar37 = vextractps_avx(auVar81,1);
            *(undefined4 *)(pauVar32[2] + 0x10) = uVar37;
            if ((uVar17 & 0x40) == 0) goto LAB_1405ae9b0;
LAB_1405aeb30:
            uVar37 = vextractps_avx(auVar81,2);
            *(undefined4 *)pauVar32[3] = uVar37;
            if (-1 < (char)bVar16) goto LAB_1405ae9bb;
LAB_1405aeb42:
            uVar37 = vextractps_avx(auVar81,3);
            *(undefined4 *)(pauVar32[3] + 0x10) = uVar37;
            if ((uVar17 & 1) == 0) goto LAB_1405ae9c5;
LAB_1405aeb53:
            *(int *)(*pauVar32 + 4) = auVar76._0_4_;
            if ((uVar17 & 2) == 0) goto LAB_1405ae9cf;
LAB_1405aeb62:
            uVar37 = vextractps_avx(auVar62,1);
            *(undefined4 *)(*pauVar32 + 0x14) = uVar37;
            if ((uVar17 & 4) == 0) goto LAB_1405ae9d9;
LAB_1405aeb73:
            uVar37 = vextractps_avx(auVar62,2);
            *(undefined4 *)(pauVar32[1] + 4) = uVar37;
            if ((uVar17 & 8) == 0) goto LAB_1405ae9e3;
LAB_1405aeb84:
            uVar37 = vextractps_avx(auVar62,3);
            *(undefined4 *)(pauVar32[1] + 0x14) = uVar37;
            if ((uVar17 & 0x10) == 0) goto LAB_1405ae9f3;
LAB_1405aeb9b:
            *(int *)(pauVar32[2] + 4) = auVar76._16_4_;
            if ((uVar17 & 0x20) == 0) goto LAB_1405ae9fd;
LAB_1405aebaa:
            uVar37 = vextractps_avx(auVar105,1);
            *(undefined4 *)(pauVar32[2] + 0x14) = uVar37;
            if ((uVar17 & 0x40) == 0) goto LAB_1405aea07;
LAB_1405aebbb:
            uVar37 = vextractps_avx(auVar105,2);
            *(undefined4 *)(pauVar32[3] + 4) = uVar37;
            if (-1 < (char)bVar16) goto LAB_1405aea12;
LAB_1405aebcd:
            uVar37 = vextractps_avx(auVar105,3);
            *(undefined4 *)(pauVar32[3] + 0x14) = uVar37;
            if ((uVar17 & 1) == 0) goto LAB_1405aea1c;
LAB_1405aebde:
            *(int *)(*pauVar32 + 8) = auVar49._0_4_;
            if ((uVar17 & 2) == 0) goto LAB_1405aea26;
LAB_1405aebed:
            uVar37 = vextractps_avx(auVar47,1);
            *(undefined4 *)(*pauVar32 + 0x18) = uVar37;
            if ((uVar17 & 4) == 0) goto LAB_1405aea30;
LAB_1405aebfe:
            uVar37 = vextractps_avx(auVar47,2);
            *(undefined4 *)(pauVar32[1] + 8) = uVar37;
            if ((uVar17 & 8) == 0) goto LAB_1405aea3a;
LAB_1405aec0f:
            uVar37 = vextractps_avx(auVar47,3);
            *(undefined4 *)(pauVar32[1] + 0x18) = uVar37;
            if ((uVar17 & 0x10) == 0) goto LAB_1405aea4a;
LAB_1405aec26:
            *(int *)(pauVar32[2] + 8) = auVar49._16_4_;
            if ((uVar17 & 0x20) == 0) goto LAB_1405aea54;
LAB_1405aec35:
            uVar37 = vextractps_avx(auVar61,1);
            *(undefined4 *)(pauVar32[2] + 0x18) = uVar37;
            if ((uVar17 & 0x40) == 0) goto LAB_1405aea5e;
LAB_1405aec46:
            uVar37 = vextractps_avx(auVar61,2);
            *(undefined4 *)(pauVar32[3] + 8) = uVar37;
            if (-1 < (char)bVar16) goto LAB_1405aea69;
LAB_1405aec58:
            uVar37 = vextractps_avx(auVar61,3);
            *(undefined4 *)(pauVar32[3] + 0x18) = uVar37;
            if ((uVar17 & 1) == 0) goto LAB_1405aea79;
LAB_1405aec6f:
            auVar49 = *pauVar32;
            uVar37 = vextractps_avx(auVar49._0_16_,3);
            *(undefined4 *)(*pauVar32 + 0xc) = uVar37;
            if ((uVar17 & 2) == 0) goto LAB_1405aea83;
LAB_1405aec80:
            uVar37 = vextractps_avx(auVar49._16_16_,3);
            *(undefined4 *)(*pauVar32 + 0x1c) = uVar37;
            if ((uVar17 & 4) == 0) goto LAB_1405aea93;
LAB_1405aec9d:
            auVar49 = *pauVar1;
            uVar37 = vextractps_avx(auVar49._0_16_,3);
            *(undefined4 *)(pauVar32[1] + 0xc) = uVar37;
            if ((uVar17 & 8) == 0) goto LAB_1405aea9d;
LAB_1405aecae:
            uVar37 = vextractps_avx(auVar49._16_16_,3);
            *(undefined4 *)(pauVar32[1] + 0x1c) = uVar37;
            if ((uVar17 & 0x10) == 0) goto LAB_1405aeaad;
LAB_1405aeccb:
            auVar49 = *pauVar2;
            uVar37 = vextractps_avx(auVar49._0_16_,3);
            *(undefined4 *)(pauVar32[2] + 0xc) = uVar37;
            if ((uVar17 & 0x20) == 0) goto LAB_1405aeab7;
LAB_1405aecdc:
            uVar37 = vextractps_avx(auVar49._16_16_,3);
            *(undefined4 *)(pauVar32[2] + 0x1c) = uVar37;
            if ((uVar17 & 0x40) == 0) goto LAB_1405aeac7;
LAB_1405aecf9:
            auVar49 = *pauVar3;
            uVar37 = vextractps_avx(auVar49._0_16_,3);
            *(undefined4 *)(pauVar32[3] + 0xc) = uVar37;
          }
          if ((char)bVar16 < '\0') {
            uVar37 = vextractps_avx(auVar49._16_16_,3);
            *(undefined4 *)(pauVar32[3] + 0x1c) = uVar37;
          }
        }
      }
      uVar44 = uVar44 + 8;
      lVar43 = lVar43 + 0x60;
      pauVar32 = pauVar32 + 4;
    } while ((int)uVar44 < (int)(uVar38 & 0xfffffff8));
    if ((int)param_12 <= (int)uVar44) {
      return;
    }
  }
  auVar90 = vpshufd_avx(ZEXT416((uint)uVar44),0);
  auVar55._16_16_ = auVar90;
  auVar55._0_16_ = auVar90;
  auVar81 = vpshufd_avx(ZEXT416(param_12),0);
  uVar44 = uVar44 & 0xffffffff;
  pauVar34 = (undefined1 (*) [16])(*param_1 + uVar44 * 0x10);
  auVar47 = SUB3216(auVar55 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar61 = SUB3216(auVar55 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar127 = vpcmpgtd_avx(auVar81,auVar61);
  auVar90 = vpcmpgtd_avx(auVar81,auVar47);
  auVar90 = vpand_avx(auVar90,auVar127);
  auVar127 = vpcmpeqd_avx(auVar127,auVar127);
  auVar127 = auVar127 & ~auVar90;
  if ((((SUB161(auVar127 >> 0x1f,0) & 1) == 0 && (SUB161(auVar127 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar127 >> 0x5f,0) & 1) == 0) && -1 < auVar127[0xf]) {
    auVar69._16_16_ = pauVar34[4];
    auVar69._0_16_ = *pauVar34;
    auVar112._16_16_ = pauVar34[5];
    auVar112._0_16_ = pauVar34[1];
    auVar123._16_16_ = pauVar34[6];
    auVar123._0_16_ = pauVar34[2];
    auVar132._16_16_ = pauVar34[7];
    auVar132._0_16_ = pauVar34[3];
    auVar64 = vunpcklps_avx(auVar69,auVar112);
    auVar49 = vunpckhps_avx(auVar69,auVar112);
    auVar76 = vunpcklps_avx(auVar123,auVar132);
    auVar55 = vunpckhps_avx(auVar123,auVar132);
    auVar111 = vunpcklpd_avx(auVar64,auVar76);
    auVar122 = vunpckhpd_avx(auVar64,auVar76);
    auVar131 = vunpcklpd_avx(auVar49,auVar55);
    auVar68 = vunpckhpd_avx(auVar49,auVar55);
  }
  else {
    auVar90 = vpcmpgtd_avx(auVar81,auVar61);
    auVar127 = vpcmpgtd_avx(auVar81,auVar47);
    uVar17 = auVar127._0_4_;
    auVar105._0_4_ =
         uVar17 & ___ymm_0000007000000060000000500000004000000030000000200000001000000000;
    uVar58 = auVar127._4_4_;
    auVar105._4_4_ = uVar58 & _UNK_150b50e44;
    uVar59 = auVar127._8_4_;
    auVar105._8_4_ = uVar59 & _UNK_150b50e48;
    uVar60 = auVar127._12_4_;
    auVar105._12_4_ = uVar60 & _UNK_150b50e4c;
    uVar72 = auVar90._0_4_;
    uVar73 = auVar90._4_4_;
    uVar74 = auVar90._8_4_;
    uVar75 = auVar90._12_4_;
    uVar30 = (undefined4)(uVar44 * 0x10 >> 0x20);
    uVar37 = vextractps_avx(auVar105,1);
    uVar36 = (undefined4)((ulonglong)pauVar34 >> 0x20);
    uVar31 = vextractps_avx(auVar105,2);
    uVar38 = vextractps_avx(auVar105,3);
    auVar90 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar34 + (uVar72 & _UNK_150b50e50))),
                            ZEXT416(*(uint *)(*pauVar34 + (uVar73 & _UNK_150b50e54))),0x10);
    auVar90 = vinsertps_avx(auVar90,ZEXT416(*(uint *)(*pauVar34 + (uVar74 & _UNK_150b50e58))),0x20);
    auVar90 = vinsertps_avx(auVar90,ZEXT416(*(uint *)(*pauVar34 + (uVar75 & _UNK_150b50e5c))),0x30);
    auVar127 = vinsertps_avx(ZEXT416(*(uint *)*pauVar34),
                             ZEXT416(*(uint *)(*pauVar34 + CONCAT44(uVar30,uVar37))),0x10);
    auVar127 = vinsertps_avx(auVar127,ZEXT416(*(uint *)(*pauVar34 + CONCAT44(uVar36,uVar31))),0x20);
    auVar127 = vinsertps_avx(auVar127,ZEXT416(*(uint *)(*pauVar34 + uVar38)),0x30);
    auVar118._0_4_ =
         uVar17 & ___ymm_0000007400000064000000540000004400000034000000240000001400000004;
    auVar118._4_4_ = uVar58 & _UNK_150b50e64;
    auVar118._8_4_ = uVar59 & _UNK_150b50e68;
    auVar118._12_4_ = uVar60 & _UNK_150b50e6c;
    uVar37 = vextractps_avx(auVar118,1);
    uVar31 = vextractps_avx(auVar118,2);
    uVar38 = vextractps_avx(auVar118,3);
    auVar62 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar34 + (uVar72 & _UNK_150b50e70))),
                            ZEXT416(*(uint *)(*pauVar34 + (uVar73 & _UNK_150b50e74))),0x10);
    auVar62 = vinsertps_avx(auVar62,ZEXT416(*(uint *)(*pauVar34 + (uVar74 & _UNK_150b50e78))),0x20);
    auVar62 = vinsertps_avx(auVar62,ZEXT416(*(uint *)(*pauVar34 + (uVar75 & _UNK_150b50e7c))),0x30);
    auVar105 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar34 + auVar118._0_4_)),
                             ZEXT416(*(uint *)(*pauVar34 + CONCAT44(uVar30,uVar37))),0x10);
    auVar105 = vinsertps_avx(auVar105,ZEXT416(*(uint *)(*pauVar34 + CONCAT44(uVar36,uVar31))),0x20);
    auVar105 = vinsertps_avx(auVar105,ZEXT416(*(uint *)(*pauVar34 + uVar38)),0x30);
    auVar138._0_4_ =
         uVar17 & ___ymm_0000007800000068000000580000004800000038000000280000001800000008;
    auVar138._4_4_ = uVar58 & _UNK_150b50e84;
    auVar138._8_4_ = uVar59 & _UNK_150b50e88;
    auVar138._12_4_ = uVar60 & _UNK_150b50e8c;
    uVar37 = vextractps_avx(auVar138,1);
    uVar31 = vextractps_avx(auVar138,2);
    auVar111._16_16_ = auVar90;
    auVar111._0_16_ = auVar127;
    uVar38 = vextractps_avx(auVar138,3);
    auVar90 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar34 + (uVar72 & _UNK_150b50e90))),
                            ZEXT416(*(uint *)(*pauVar34 + (uVar73 & _UNK_150b50e94))),0x10);
    auVar90 = vinsertps_avx(auVar90,ZEXT416(*(uint *)(*pauVar34 + (uVar74 & _UNK_150b50e98))),0x20);
    auVar90 = vinsertps_avx(auVar90,ZEXT416(*(uint *)(*pauVar34 + (uVar75 & _UNK_150b50e9c))),0x30);
    auVar127 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar34 + auVar138._0_4_)),
                             ZEXT416(*(uint *)(*pauVar34 + CONCAT44(uVar30,uVar37))),0x10);
    auVar127 = vinsertps_avx(auVar127,ZEXT416(*(uint *)(*pauVar34 + CONCAT44(uVar36,uVar31))),0x20);
    auVar127 = vinsertps_avx(auVar127,ZEXT416(*(uint *)(*pauVar34 + uVar38)),0x30);
    auVar63._0_4_ = uVar17 & ___ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c
    ;
    auVar63._4_4_ = uVar58 & _UNK_150b50ea4;
    auVar63._8_4_ = uVar59 & _UNK_150b50ea8;
    auVar63._12_4_ = uVar60 & _UNK_150b50eac;
    uVar37 = vextractps_avx(auVar63,1);
    uVar31 = vextractps_avx(auVar63,2);
    auVar122._16_16_ = auVar62;
    auVar122._0_16_ = auVar105;
    uVar38 = vextractps_avx(auVar63,3);
    auVar62 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar34 + (uVar72 & _UNK_150b50eb0))),
                            ZEXT416(*(uint *)(*pauVar34 + (uVar73 & _UNK_150b50eb4))),0x10);
    auVar62 = vinsertps_avx(auVar62,ZEXT416(*(uint *)(*pauVar34 + (uVar74 & _UNK_150b50eb8))),0x20);
    auVar62 = vinsertps_avx(auVar62,ZEXT416(*(uint *)(*pauVar34 + (uVar75 & _UNK_150b50ebc))),0x30);
    auVar105 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar34 + auVar63._0_4_)),
                             ZEXT416(*(uint *)(*pauVar34 + CONCAT44(uVar30,uVar37))),0x10);
    auVar105 = vinsertps_avx(auVar105,ZEXT416(*(uint *)(*pauVar34 + CONCAT44(uVar36,uVar31))),0x20);
    auVar131._16_16_ = auVar90;
    auVar131._0_16_ = auVar127;
    auVar90 = vinsertps_avx(auVar105,ZEXT416(*(uint *)(*pauVar34 + uVar38)),0x30);
    auVar68._16_16_ = auVar62;
    auVar68._0_16_ = auVar90;
  }
  auVar90 = vpcmpgtd_avx(auVar81,auVar61);
  auVar127 = vpcmpgtd_avx(auVar81,auVar47);
  auVar94._16_16_ = auVar90;
  auVar94._0_16_ = auVar127;
  auVar49 = vmaskmovps_avx(auVar94,auVar111);
  auVar55 = vmaskmovps_avx(auVar94,auVar122);
  auVar64 = vmaskmovps_avx(auVar94,auVar131);
  auVar76 = vcmpps_avx(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar68,1);
  auVar95._0_4_ = auVar76._0_4_ & auVar127._0_4_;
  auVar95._4_4_ = auVar76._4_4_ & auVar127._4_4_;
  auVar95._8_4_ = auVar76._8_4_ & auVar127._8_4_;
  auVar95._12_4_ = auVar76._12_4_ & auVar127._12_4_;
  auVar95._16_4_ = auVar76._16_4_ & auVar90._0_4_;
  auVar95._20_4_ = auVar76._20_4_ & auVar90._4_4_;
  auVar95._24_4_ = auVar76._24_4_ & auVar90._8_4_;
  auVar95._28_4_ = auVar76._28_4_ & auVar90._12_4_;
  uVar38 = vmovmskps_avx(auVar95);
  if (uVar38 != 0) {
    auVar90 = vpand_avx(auVar76._16_16_,auVar90);
    auVar61._0_4_ = auVar76._0_4_ & auVar127._0_4_;
    auVar61._4_4_ = auVar76._4_4_ & auVar127._4_4_;
    auVar61._8_4_ = auVar76._8_4_ & auVar127._8_4_;
    auVar61._12_4_ = auVar76._12_4_ & auVar127._12_4_;
    auVar127 = vpackssdw_avx(auVar61,auVar90);
    auVar47 = (undefined1  [16])0x0;
    bVar16 = (byte)uVar38;
    auVar90 = (undefined1  [16])0x0;
    if ((param_6 & 1) != 0) {
      if ((~bVar16 & 0x81) == 0) {
        auVar90._8_8_ = 0;
        auVar90._0_8_ = *(ulonglong *)(param_7 + uVar44);
      }
      else {
        pbVar18 = (byte *)(param_7 + uVar44);
        auVar90 = vpacksswb_avx(auVar127,auVar127);
        auVar81 = auVar90 >> 0xf;
        auVar61 = auVar90 >> 0x17;
        auVar62 = auVar90 >> 0x1f;
        auVar105 = auVar90 >> 0x27;
        auVar63 = auVar90 >> 0x2f;
        auVar118 = auVar90 >> 0x37;
        auVar138 = auVar90 >> 0x3f;
        if ((SUB161(auVar90 >> 7,0) & 1) != 0) {
          auVar90 = ZEXT116(*pbVar18);
        }
        if ((auVar81[0] & 1) != 0) {
          auVar81 = vpinsrb_avx(auVar90,(uint)pbVar18[1],1);
          auVar90 = vpblendw_avx(auVar81,auVar90,0xe);
        }
        if ((auVar61[0] & 1) != 0) {
          auVar81 = vpmovzxwd_avx(auVar90);
          auVar81 = vpinsrb_avx(auVar81,(uint)pbVar18[2],2);
          auVar81 = vpinsrb_avx(auVar81,(uint)auVar90[3],3);
          auVar90 = vpblendw_avx(auVar81,auVar90,0xc);
        }
        if ((auVar62[0] & 1) != 0) {
          auVar81 = vpmovzxwd_avx(auVar90);
          auVar81 = vpinsrb_avx(auVar81,(uint)auVar90[2],2);
          auVar81 = vpinsrb_avx(auVar81,(uint)pbVar18[3],3);
          auVar90 = vpblendw_avx(auVar81,auVar90,0xc);
        }
        if ((auVar105[0] & 1) != 0) {
          auVar81 = vpshufb_avx(auVar90,___xmm_80800706808005048080030203020100);
          auVar81 = vpinsrb_avx(auVar81,(uint)pbVar18[4],4);
          auVar81 = vpinsrb_avx(auVar81,(uint)auVar90[5],5);
          auVar90 = vpblendw_avx(auVar81,auVar90,8);
        }
        if ((auVar63[0] & 1) != 0) {
          auVar81 = vpshufb_avx(auVar90,___xmm_80800706808005048080030403020100);
          auVar81 = vpinsrb_avx(auVar81,(uint)pbVar18[5],5);
          auVar90 = vpblendw_avx(auVar81,auVar90,8);
        }
        if ((auVar118[0] & 1) != 0) {
          auVar81 = vpshufb_avx(auVar90,___xmm_80800706808005048080050403020100);
          auVar81 = vpinsrb_avx(auVar81,(uint)pbVar18[6],6);
          auVar90 = vpinsrb_avx(auVar81,(uint)auVar90[7],7);
        }
        if ((auVar138[0] & 1) != 0) {
          auVar90 = vpshufb_avx(auVar90,___xmm_80800706808005048006050403020100);
          auVar90 = vpinsrb_avx(auVar90,(uint)pbVar18[7],7);
        }
      }
    }
    if ((param_9 & 1) != 0) {
      if ((~bVar16 & 0x81) == 0) {
        auVar47._8_8_ = 0;
        auVar47._0_8_ = *(ulonglong *)(param_10 + uVar44);
      }
      else {
        pbVar18 = (byte *)(param_10 + uVar44);
        auVar47 = vpacksswb_avx(auVar127,auVar127);
        auVar81 = auVar47 >> 0xf;
        auVar61 = auVar47 >> 0x17;
        auVar62 = auVar47 >> 0x1f;
        auVar105 = auVar47 >> 0x27;
        auVar63 = auVar47 >> 0x2f;
        auVar118 = auVar47 >> 0x37;
        auVar138 = auVar47 >> 0x3f;
        if ((SUB161(auVar47 >> 7,0) & 1) != 0) {
          auVar47 = ZEXT116(*pbVar18);
        }
        if ((auVar81[0] & 1) != 0) {
          auVar81 = vpinsrb_avx(auVar47,(uint)pbVar18[1],1);
          auVar47 = vpblendw_avx(auVar81,auVar47,0xe);
        }
        if ((auVar61[0] & 1) != 0) {
          auVar81 = vpmovzxwd_avx(auVar47);
          auVar81 = vpinsrb_avx(auVar81,(uint)pbVar18[2],2);
          auVar81 = vpinsrb_avx(auVar81,(uint)auVar47[3],3);
          auVar47 = vpblendw_avx(auVar81,auVar47,0xc);
        }
        if ((auVar62[0] & 1) != 0) {
          auVar81 = vpmovzxwd_avx(auVar47);
          auVar81 = vpinsrb_avx(auVar81,(uint)auVar47[2],2);
          auVar81 = vpinsrb_avx(auVar81,(uint)pbVar18[3],3);
          auVar47 = vpblendw_avx(auVar81,auVar47,0xc);
        }
        if ((auVar105[0] & 1) != 0) {
          auVar81 = vpshufb_avx(auVar47,___xmm_80800706808005048080030203020100);
          auVar81 = vpinsrb_avx(auVar81,(uint)pbVar18[4],4);
          auVar81 = vpinsrb_avx(auVar81,(uint)auVar47[5],5);
          auVar47 = vpblendw_avx(auVar81,auVar47,8);
        }
        if ((auVar63[0] & 1) != 0) {
          auVar81 = vpshufb_avx(auVar47,___xmm_80800706808005048080030403020100);
          auVar81 = vpinsrb_avx(auVar81,(uint)pbVar18[5],5);
          auVar47 = vpblendw_avx(auVar81,auVar47,8);
        }
        if ((auVar118[0] & 1) != 0) {
          auVar81 = vpshufb_avx(auVar47,___xmm_80800706808005048080050403020100);
          auVar81 = vpinsrb_avx(auVar81,(uint)pbVar18[6],6);
          auVar47 = vpinsrb_avx(auVar81,(uint)auVar47[7],7);
        }
        if ((auVar138[0] & 1) != 0) {
          auVar81 = vpshufb_avx(auVar47,___xmm_80800706808005048006050403020100);
          auVar47 = vpinsrb_avx(auVar81,(uint)pbVar18[7],7);
        }
      }
    }
    auVar81 = vpmovsxbd_avx(auVar90);
    auVar90 = vpshufd_avx(auVar90,0x55);
    auVar90 = vpmovsxbd_avx(auVar90);
    auVar61 = vpslld_avx(auVar90,2);
    auVar90 = vpslld_avx(auVar81,2);
    auVar62 = vpmovsxwd_avx(auVar127);
    auVar81 = vpand_avx(auVar62,auVar90);
    auVar105 = vpunpckhwd_avx(auVar127,auVar127);
    auVar127 = vpand_avx(auVar105,auVar61);
    auVar90 = vinsertps_avx(ZEXT416(*(uint *)(param_8 + auVar127._0_4_)),
                            ZEXT416(*(uint *)(param_8 + auVar127._4_4_)),0x10);
    auVar90 = vinsertps_avx(auVar90,ZEXT416(*(uint *)(param_8 + auVar127._8_4_)),0x20);
    auVar90 = vinsertps_avx(auVar90,ZEXT416(*(uint *)(param_8 + auVar127._12_4_)),0x30);
    auVar127 = vinsertps_avx(ZEXT416(*(uint *)(param_8 + auVar81._0_4_)),
                             ZEXT416(*(uint *)(param_8 + auVar81._4_4_)),0x10);
    auVar127 = vinsertps_avx(auVar127,ZEXT416(*(uint *)(param_8 + auVar81._8_4_)),0x20);
    auVar127 = vinsertps_avx(auVar127,ZEXT416(*(uint *)(param_8 + auVar81._12_4_)),0x30);
    auVar61 = vpmovsxbd_avx(auVar47);
    auVar81 = vpshufd_avx(auVar47,0x55);
    auVar81 = vpmovsxbd_avx(auVar81);
    auVar81 = vpslld_avx(auVar81,2);
    auVar47 = vpand_avx(auVar105,auVar81);
    auVar81 = vinsertps_avx(ZEXT416(*(uint *)(param_11 + auVar47._0_4_)),
                            ZEXT416(*(uint *)(param_11 + auVar47._4_4_)),0x10);
    auVar61 = vpslld_avx(auVar61,2);
    auVar81 = vinsertps_avx(auVar81,ZEXT416(*(uint *)(param_11 + auVar47._8_4_)),0x20);
    auVar61 = vpand_avx(auVar62,auVar61);
    auVar81 = vinsertps_avx(auVar81,ZEXT416(*(uint *)(param_11 + auVar47._12_4_)),0x30);
    auVar47 = vinsertps_avx(ZEXT416(*(uint *)(param_11 + auVar61._0_4_)),
                            ZEXT416(*(uint *)(param_11 + auVar61._4_4_)),0x10);
    auVar47 = vinsertps_avx(auVar47,ZEXT416(*(uint *)(param_11 + auVar61._8_4_)),0x20);
    auVar47 = vinsertps_avx(auVar47,ZEXT416(*(uint *)(param_11 + auVar61._12_4_)),0x30);
    pauVar32 = (undefined1 (*) [32])(param_2 + uVar44 * 0xc);
    if (bVar16 == 0xff) {
      auVar82 = pauVar32[2];
      auVar113._16_16_ = *(undefined1 (*) [16])*pauVar32;
      auVar113._0_16_ = *(undefined1 (*) [16])(*pauVar32 + 0x10);
      auVar76 = vblendps_avx(*pauVar32,auVar113,0x24);
      auVar76 = vpermilps_avx(auVar76,
                              ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                             );
      uVar37 = *(undefined4 *)(pauVar32[1] + 4);
      auVar159._4_4_ = uVar37;
      auVar159._0_4_ = uVar37;
      auVar159._8_4_ = uVar37;
      auVar159._12_4_ = uVar37;
      uVar37 = *(undefined4 *)(pauVar32[1] + 8);
      auVar159._20_4_ = uVar37;
      auVar159._16_4_ = uVar37;
      auVar159._24_4_ = uVar37;
      auVar159._28_4_ = uVar37;
      auVar76 = vblendps_avx(auVar76,auVar159,0x88);
      auVar160._16_16_ = *(undefined1 (*) [16])pauVar32[2];
      auVar160._0_16_ = *(undefined1 (*) [16])(pauVar32[2] + 0x10);
      auVar122 = vblendps_avx(auVar160,auVar82,0x44);
      auVar122 = vpermilps_avx(auVar122,
                               ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                              );
      auVar61 = vshufps_avx(*(undefined1 (*) [16])(pauVar32[1] + 0x10),
                            *(undefined1 (*) [16])(pauVar32[1] + 0x10),0xec);
      uVar37 = *(undefined4 *)(pauVar32[1] + 0x14);
      auVar145._20_4_ = uVar37;
      auVar145._16_4_ = uVar37;
      auVar145._24_4_ = uVar37;
      auVar145._28_4_ = uVar37;
      auVar145._0_16_ = auVar61;
      auVar122 = vblendps_avx(auVar122,auVar145,0x13);
      local_3e0._16_16_ = auVar122._0_16_;
      local_3e0._0_16_ = auVar76._0_16_;
      local_340 = vperm2f128_avx(auVar76,auVar122,0x31);
      auVar76 = vblendps_avx(pauVar32[1],*pauVar32,0x24);
      auVar76 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])(*pauVar32 + 0x10)),auVar76,0x21);
      auVar76 = vshufps_avx(auVar76,pauVar32[1],0xc2);
      auVar122 = vshufps_avx(auVar160,auVar82,0xc4);
      local_360 = vblendps_avx(auVar76,auVar122,0xe0);
      lVar43 = uVar44 * 0xc;
      auVar61 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar43);
      auVar63 = *(undefined1 (*) [16])(param_3 + 0x30 + lVar43);
      auVar118 = *(undefined1 (*) [16])(param_3 + 0x50 + lVar43);
      auVar138 = *(undefined1 (*) [16])(param_3 + 0x40 + lVar43);
      uVar37 = *(undefined4 *)(param_3 + 0x28 + lVar43);
      auVar70._20_4_ = uVar37;
      auVar70._16_4_ = uVar37;
      auVar70._24_4_ = uVar37;
      auVar70._28_4_ = uVar37;
      uVar37 = *(undefined4 *)(param_3 + 0x24 + lVar43);
      auVar70._4_4_ = uVar37;
      auVar70._0_4_ = uVar37;
      auVar70._8_4_ = uVar37;
      auVar70._12_4_ = uVar37;
      uVar37 = *(undefined4 *)(param_3 + 0x34 + lVar43);
      auVar124._20_4_ = uVar37;
      auVar124._16_4_ = uVar37;
      auVar124._24_4_ = uVar37;
      auVar124._28_4_ = uVar37;
      auVar133._16_16_ = auVar61;
      auVar133._0_16_ = *(undefined1 (*) [16])(param_3 + lVar43);
      auVar84._16_16_ = auVar63;
      auVar84._0_16_ = *(undefined1 (*) [16])(param_3 + 0x20 + lVar43);
      auVar56._16_16_ = auVar118;
      auVar56._0_16_ = auVar138;
      auVar146._16_16_ = *(undefined1 (*) [16])(param_3 + lVar43);
      auVar146._0_16_ = auVar61;
      auVar76 = vblendps_avx(auVar133,auVar146,0x24);
      auVar76 = vpermilps_avx(auVar76,
                              ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                             );
      auVar76 = vblendps_avx(auVar76,auVar70,0x88);
      auVar114._16_16_ = auVar138;
      auVar114._0_16_ = auVar118;
      auVar122 = vblendps_avx(auVar114,auVar56,0x44);
      auVar122 = vpermilps_avx(auVar122,
                               ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                              );
      auVar63 = vshufps_avx(auVar63,auVar63,0xec);
      auVar124._0_16_ = auVar63;
      auVar122 = vblendps_avx(auVar122,auVar124,0x13);
      auVar144._16_16_ = auVar122._0_16_;
      auVar144._0_16_ = auVar76._0_16_;
      auVar147 = vperm2f128_avx(auVar76,auVar122,0x31);
      auVar76 = vblendps_avx(auVar84,auVar133,0x24);
      auVar76 = vshufps_avx(ZEXT1632(auVar61),auVar76,0x21);
      auVar76 = vshufps_avx(auVar76,auVar84,0xc2);
      auVar122 = vshufps_avx(auVar114,auVar56,0xc4);
      auVar150 = vblendps_avx(auVar76,auVar122,0xe0);
      auVar61 = *(undefined1 (*) [16])(param_4 + 0x10 + lVar43);
      auVar63 = *(undefined1 (*) [16])(param_4 + 0x30 + lVar43);
      auVar125._16_16_ = auVar61;
      auVar125._0_16_ = *(undefined1 (*) [16])(param_4 + lVar43);
      auVar85._16_16_ = auVar63;
      auVar85._0_16_ = *(undefined1 (*) [16])(param_4 + 0x20 + lVar43);
      auVar118 = *(undefined1 (*) [16])(param_4 + 0x50 + lVar43);
      auVar138 = *(undefined1 (*) [16])(param_4 + 0x40 + lVar43);
      auVar161._16_16_ = auVar118;
      auVar161._0_16_ = auVar138;
      auVar57._16_16_ = *(undefined1 (*) [16])(param_4 + lVar43);
      auVar57._0_16_ = auVar61;
      auVar76 = vblendps_avx(auVar125,auVar57,0x24);
      auVar76 = vpermilps_avx(auVar76,
                              ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                             );
      uVar37 = *(undefined4 *)(param_4 + 0x28 + lVar43);
      auVar137._20_4_ = uVar37;
      auVar137._16_4_ = uVar37;
      auVar137._24_4_ = uVar37;
      auVar137._28_4_ = uVar37;
      uVar37 = *(undefined4 *)(param_4 + 0x24 + lVar43);
      auVar137._4_4_ = uVar37;
      auVar137._0_4_ = uVar37;
      auVar137._8_4_ = uVar37;
      auVar137._12_4_ = uVar37;
      auVar76 = vblendps_avx(auVar76,auVar137,0x88);
      auVar134._16_16_ = auVar138;
      auVar134._0_16_ = auVar118;
      auVar122 = vblendps_avx(auVar134,auVar161,0x44);
      auVar122 = vpermilps_avx(auVar122,
                               ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                              );
      uVar37 = *(undefined4 *)(param_4 + 0x34 + lVar43);
      auVar115._20_4_ = uVar37;
      auVar115._16_4_ = uVar37;
      auVar115._24_4_ = uVar37;
      auVar115._28_4_ = uVar37;
      auVar63 = vshufps_avx(auVar63,auVar63,0xec);
      auVar115._0_16_ = auVar63;
      auVar122 = vblendps_avx(auVar122,auVar115,0x13);
      auVar139._16_16_ = auVar122._0_16_;
      auVar139._0_16_ = auVar76._0_16_;
      auVar136 = vperm2f128_avx(auVar76,auVar122,0x31);
      auVar76 = vblendps_avx(auVar85,auVar125,0x24);
      auVar76 = vshufps_avx(ZEXT1632(auVar61),auVar76,0x21);
      auVar76 = vshufps_avx(auVar76,auVar85,0xc2);
      auVar122 = vshufps_avx(auVar134,auVar161,0xc4);
      auVar154 = vblendps_avx(auVar76,auVar122,0xe0);
    }
    else {
      uVar17 = auVar62._0_4_;
      auVar48._0_4_ =
           uVar17 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000;
      uVar58 = auVar62._4_4_;
      auVar48._4_4_ = uVar58 & _UNK_150b50b04;
      uVar59 = auVar62._8_4_;
      auVar48._8_4_ = uVar59 & _UNK_150b50b08;
      uVar60 = auVar62._12_4_;
      auVar48._12_4_ = uVar60 & _UNK_150b50b0c;
      uVar72 = auVar105._0_4_;
      uVar73 = auVar105._4_4_;
      uVar74 = auVar105._8_4_;
      uVar75 = auVar105._12_4_;
      uVar37 = vextractps_avx(auVar48,1);
      lVar29 = CONCAT44((int)(uVar44 * 3 >> 0x20),uVar37);
      uVar37 = vextractps_avx(auVar48,2);
      lVar35 = CONCAT44((int)((ulonglong)param_2 >> 0x20),uVar37);
      uVar37 = vextractps_avx(auVar48,3);
      lVar40 = CONCAT44((int)((ulonglong)param_8 >> 0x20),uVar37);
      uVar26 = (ulonglong)(uVar73 & _UNK_150b50b14);
      uVar41 = (ulonglong)(uVar74 & _UNK_150b50b18);
      uVar45 = (ulonglong)(uVar75 & _UNK_150b50b1c);
      uVar25 = (ulonglong)(uVar72 & _UNK_150b50b10);
      auVar61 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar32 + uVar25)),
                              ZEXT416(*(uint *)(*pauVar32 + uVar26)),0x10);
      auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)(*pauVar32 + uVar41)),0x20);
      auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)(*pauVar32 + uVar45)),0x30);
      auVar63 = vinsertps_avx(ZEXT416(*(uint *)*pauVar32),ZEXT416(*(uint *)(*pauVar32 + lVar29)),
                              0x10);
      auVar63 = vinsertps_avx(auVar63,ZEXT416(*(uint *)(*pauVar32 + lVar35)),0x20);
      auVar63 = vinsertps_avx(auVar63,ZEXT416(*(uint *)(*pauVar32 + lVar40)),0x30);
      uVar19 = (ulonglong)(uVar73 & _UNK_150b50b34);
      uVar27 = (ulonglong)(uVar74 & _UNK_150b50b38);
      uVar46 = (ulonglong)(uVar72 & _UNK_150b50b30);
      uVar42 = (ulonglong)(uVar75 & _UNK_150b50b3c);
      auVar118 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar32 + uVar46)),
                               ZEXT416(*(uint *)(*pauVar32 + uVar19)),0x10);
      auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(*pauVar32 + uVar27)),0x20);
      uVar14 = (ulonglong)
               (uVar17 & ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004);
      auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(*pauVar32 + uVar42)),0x30);
      uVar12 = (ulonglong)(uVar58 & _UNK_150b50b24);
      auVar138 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar32 + uVar14)),
                               ZEXT416(*(uint *)(*pauVar32 + uVar12)),0x10);
      uVar20 = (ulonglong)(uVar59 & _UNK_150b50b28);
      auVar138 = vinsertps_avx(auVar138,ZEXT416(*(uint *)(*pauVar32 + uVar20)),0x20);
      uVar21 = (ulonglong)(uVar60 & _UNK_150b50b2c);
      auVar138 = vinsertps_avx(auVar138,ZEXT416(*(uint *)(*pauVar32 + uVar21)),0x30);
      uVar22 = (ulonglong)(uVar72 & _UNK_150b50b50);
      uVar23 = (ulonglong)(uVar73 & _UNK_150b50b54);
      auVar48 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar32 + uVar22)),
                              ZEXT416(*(uint *)(*pauVar32 + uVar23)),0x10);
      uVar24 = (ulonglong)(uVar74 & _UNK_150b50b58);
      auVar48 = vinsertps_avx(auVar48,ZEXT416(*(uint *)(*pauVar32 + uVar24)),0x20);
      uVar28 = (ulonglong)(uVar75 & _UNK_150b50b5c);
      auVar48 = vinsertps_avx(auVar48,ZEXT416(*(uint *)(*pauVar32 + uVar28)),0x30);
      uVar15 = (ulonglong)
               (uVar17 & ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008);
      uVar13 = (ulonglong)(uVar58 & _UNK_150b50b44);
      auVar5 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar32 + uVar15)),
                             ZEXT416(*(uint *)(*pauVar32 + uVar13)),0x10);
      uVar33 = (ulonglong)(uVar59 & _UNK_150b50b48);
      auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(*pauVar32 + uVar33)),0x20);
      uVar39 = (ulonglong)(uVar60 & _UNK_150b50b4c);
      auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(*pauVar32 + uVar39)),0x30);
      local_3e0._16_16_ = auVar61;
      local_3e0._0_16_ = auVar63;
      local_340._16_16_ = auVar118;
      local_340._0_16_ = auVar138;
      local_360._16_16_ = auVar48;
      local_360._0_16_ = auVar5;
      lVar4 = uVar44 * 0xc;
      lVar43 = param_3 + lVar4;
      auVar61 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + lVar4)),
                              ZEXT416(*(uint *)(lVar29 + lVar43)),0x10);
      auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)(lVar35 + lVar43)),0x20);
      auVar61 = vinsertps_avx(auVar61,ZEXT416(*(uint *)(lVar40 + lVar43)),0x30);
      auVar63 = vinsertps_avx(ZEXT416(*(uint *)(uVar25 + lVar43)),
                              ZEXT416(*(uint *)(uVar26 + lVar43)),0x10);
      auVar63 = vinsertps_avx(auVar63,ZEXT416(*(uint *)(uVar41 + lVar43)),0x20);
      auVar63 = vinsertps_avx(auVar63,ZEXT416(*(uint *)(uVar45 + lVar43)),0x30);
      auVar118 = vinsertps_avx(ZEXT416(*(uint *)(uVar46 + lVar43)),
                               ZEXT416(*(uint *)(uVar19 + lVar43)),0x10);
      auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(uVar27 + lVar43)),0x20);
      auVar118 = vinsertps_avx(auVar118,ZEXT416(*(uint *)(uVar42 + lVar43)),0x30);
      auVar138 = vinsertps_avx(ZEXT416(*(uint *)(uVar14 + lVar43)),
                               ZEXT416(*(uint *)(uVar12 + lVar43)),0x10);
      auVar138 = vinsertps_avx(auVar138,ZEXT416(*(uint *)(uVar20 + lVar43)),0x20);
      auVar138 = vinsertps_avx(auVar138,ZEXT416(*(uint *)(uVar21 + lVar43)),0x30);
      auVar48 = vinsertps_avx(ZEXT416(*(uint *)(uVar22 + lVar43)),
                              ZEXT416(*(uint *)(uVar23 + lVar43)),0x10);
      auVar48 = vinsertps_avx(auVar48,ZEXT416(*(uint *)(uVar24 + lVar43)),0x20);
      auVar48 = vinsertps_avx(auVar48,ZEXT416(*(uint *)(uVar28 + lVar43)),0x30);
      auVar5 = vinsertps_avx(ZEXT416(*(uint *)(uVar15 + lVar43)),ZEXT416(*(uint *)(uVar13 + lVar43))
                             ,0x10);
      auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(uVar33 + lVar43)),0x20);
      auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(uVar39 + lVar43)),0x30);
      lVar43 = param_4 + lVar4;
      auVar6 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + lVar4)),ZEXT416(*(uint *)(lVar29 + lVar43))
                             ,0x10);
      auVar6 = vinsertps_avx(auVar6,ZEXT416(*(uint *)(lVar35 + lVar43)),0x20);
      auVar6 = vinsertps_avx(auVar6,ZEXT416(*(uint *)(lVar40 + lVar43)),0x30);
      auVar7 = vinsertps_avx(ZEXT416(*(uint *)(uVar25 + lVar43)),ZEXT416(*(uint *)(uVar26 + lVar43))
                             ,0x10);
      auVar7 = vinsertps_avx(auVar7,ZEXT416(*(uint *)(uVar41 + lVar43)),0x20);
      auVar7 = vinsertps_avx(auVar7,ZEXT416(*(uint *)(uVar45 + lVar43)),0x30);
      auVar8 = vinsertps_avx(ZEXT416(*(uint *)(uVar46 + lVar43)),ZEXT416(*(uint *)(uVar19 + lVar43))
                             ,0x10);
      auVar8 = vinsertps_avx(auVar8,ZEXT416(*(uint *)(uVar27 + lVar43)),0x20);
      auVar8 = vinsertps_avx(auVar8,ZEXT416(*(uint *)(uVar42 + lVar43)),0x30);
      auVar9 = vinsertps_avx(ZEXT416(*(uint *)(uVar14 + lVar43)),ZEXT416(*(uint *)(uVar12 + lVar43))
                             ,0x10);
      auVar9 = vinsertps_avx(auVar9,ZEXT416(*(uint *)(uVar20 + lVar43)),0x20);
      auVar9 = vinsertps_avx(auVar9,ZEXT416(*(uint *)(uVar21 + lVar43)),0x30);
      auVar10 = vinsertps_avx(ZEXT416(*(uint *)(uVar22 + lVar43)),
                              ZEXT416(*(uint *)(uVar23 + lVar43)),0x10);
      auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(uVar24 + lVar43)),0x20);
      auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(uVar28 + lVar43)),0x30);
      auVar11 = vinsertps_avx(ZEXT416(*(uint *)(uVar15 + lVar43)),
                              ZEXT416(*(uint *)(uVar13 + lVar43)),0x10);
      auVar11 = vinsertps_avx(auVar11,ZEXT416(*(uint *)(uVar33 + lVar43)),0x20);
      auVar11 = vinsertps_avx(auVar11,ZEXT416(*(uint *)(uVar39 + lVar43)),0x30);
      auVar144._16_16_ = auVar63;
      auVar144._0_16_ = auVar61;
      auVar147._16_16_ = auVar118;
      auVar147._0_16_ = auVar138;
      auVar150._16_16_ = auVar48;
      auVar150._0_16_ = auVar5;
      auVar139._16_16_ = auVar7;
      auVar139._0_16_ = auVar6;
      auVar136._16_16_ = auVar8;
      auVar136._0_16_ = auVar9;
      auVar154._16_16_ = auVar10;
      auVar154._0_16_ = auVar11;
    }
    auVar76 = vsubps_avx(auVar49,auVar144);
    auVar122 = vsubps_avx(auVar55,auVar147);
    auVar82 = vsubps_avx(auVar64,auVar150);
    fVar89 = auVar127._0_4_;
    auVar86._0_4_ = fVar89 * auVar76._0_4_;
    fVar98 = auVar127._4_4_;
    auVar86._4_4_ = fVar98 * auVar76._4_4_;
    fVar99 = auVar127._8_4_;
    auVar86._8_4_ = fVar99 * auVar76._8_4_;
    fVar100 = auVar127._12_4_;
    auVar86._12_4_ = fVar100 * auVar76._12_4_;
    fVar101 = auVar90._0_4_;
    auVar86._16_4_ = fVar101 * auVar76._16_4_;
    fVar102 = auVar90._4_4_;
    auVar86._20_4_ = fVar102 * auVar76._20_4_;
    fVar103 = auVar90._8_4_;
    auVar86._24_4_ = fVar103 * auVar76._24_4_;
    fVar104 = auVar90._12_4_;
    auVar86._28_4_ = fVar104 * auVar76._28_4_;
    auVar116._0_4_ = fVar89 * auVar122._0_4_;
    auVar116._4_4_ = fVar98 * auVar122._4_4_;
    auVar116._8_4_ = fVar99 * auVar122._8_4_;
    auVar116._12_4_ = fVar100 * auVar122._12_4_;
    auVar116._16_4_ = fVar101 * auVar122._16_4_;
    auVar116._20_4_ = fVar102 * auVar122._20_4_;
    auVar116._24_4_ = fVar103 * auVar122._24_4_;
    auVar116._28_4_ = fVar104 * auVar122._28_4_;
    auVar96._0_4_ = fVar89 * auVar82._0_4_;
    auVar96._4_4_ = fVar98 * auVar82._4_4_;
    auVar96._8_4_ = fVar99 * auVar82._8_4_;
    auVar96._12_4_ = fVar100 * auVar82._12_4_;
    auVar96._16_4_ = fVar101 * auVar82._16_4_;
    auVar96._20_4_ = fVar102 * auVar82._20_4_;
    auVar96._24_4_ = fVar103 * auVar82._24_4_;
    auVar96._28_4_ = fVar104 * auVar82._28_4_;
    auVar49 = vsubps_avx(auVar49,auVar86);
    auVar55 = vsubps_avx(auVar55,auVar116);
    auVar64 = vsubps_avx(auVar64,auVar96);
    auVar80._16_16_ = auVar105;
    auVar80._0_16_ = auVar62;
    auVar49 = vmaskmovps_avx(auVar80,auVar49);
    auVar55 = vmaskmovps_avx(auVar80,auVar55);
    auVar64 = vmaskmovps_avx(auVar80,auVar64);
    auVar76 = vsubps_avx(auVar49,local_3e0);
    auVar90 = vshufps_avx(ZEXT416(param_5),ZEXT416(param_5),0);
    fVar89 = auVar90._0_4_;
    auVar97._0_4_ = auVar139._0_4_ * fVar89;
    fVar98 = auVar90._4_4_;
    auVar97._4_4_ = auVar139._4_4_ * fVar98;
    fVar99 = auVar90._8_4_;
    auVar97._8_4_ = auVar139._8_4_ * fVar99;
    fVar100 = auVar90._12_4_;
    auVar97._12_4_ = auVar139._12_4_ * fVar100;
    auVar97._16_4_ = auVar139._16_4_ * fVar89;
    auVar97._20_4_ = auVar139._20_4_ * fVar98;
    auVar97._24_4_ = auVar139._24_4_ * fVar99;
    auVar97._28_4_ = auVar139._28_4_ * fVar100;
    auVar76 = vsubps_avx(auVar76,auVar97);
    auVar122 = vsubps_avx(auVar55,local_340);
    auVar126._0_4_ = auVar136._0_4_ * fVar89;
    auVar126._4_4_ = auVar136._4_4_ * fVar98;
    auVar126._8_4_ = auVar136._8_4_ * fVar99;
    auVar126._12_4_ = auVar136._12_4_ * fVar100;
    auVar126._16_4_ = auVar136._16_4_ * fVar89;
    auVar126._20_4_ = auVar136._20_4_ * fVar98;
    auVar126._24_4_ = auVar136._24_4_ * fVar99;
    auVar126._28_4_ = auVar136._28_4_ * fVar100;
    auVar122 = vsubps_avx(auVar122,auVar126);
    auVar87._0_4_ = auVar154._0_4_ * fVar89;
    auVar87._4_4_ = auVar154._4_4_ * fVar98;
    auVar87._8_4_ = auVar154._8_4_ * fVar99;
    auVar87._12_4_ = auVar154._12_4_ * fVar100;
    auVar87._16_4_ = auVar154._16_4_ * fVar89;
    auVar87._20_4_ = auVar154._20_4_ * fVar98;
    auVar87._24_4_ = auVar154._24_4_ * fVar99;
    auVar87._28_4_ = auVar154._28_4_ * fVar100;
    auVar82 = vsubps_avx(auVar64,local_360);
    auVar82 = vsubps_avx(auVar82,auVar87);
    local_280._0_4_ = auVar47._0_4_;
    local_280._4_4_ = auVar47._4_4_;
    fStack_278 = auVar47._8_4_;
    fStack_274 = auVar47._12_4_;
    fStack_270 = auVar81._0_4_;
    fStack_26c = auVar81._4_4_;
    fStack_268 = auVar81._8_4_;
    fStack_264 = auVar81._12_4_;
    auVar71._0_4_ = (float)local_280._0_4_ * auVar76._0_4_;
    auVar71._4_4_ = (float)local_280._4_4_ * auVar76._4_4_;
    auVar71._8_4_ = fStack_278 * auVar76._8_4_;
    auVar71._12_4_ = fStack_274 * auVar76._12_4_;
    auVar71._16_4_ = fStack_270 * auVar76._16_4_;
    auVar71._20_4_ = fStack_26c * auVar76._20_4_;
    auVar71._24_4_ = fStack_268 * auVar76._24_4_;
    auVar71._28_4_ = fStack_264 * auVar76._28_4_;
    auVar117._0_4_ = (float)local_280._0_4_ * auVar122._0_4_;
    auVar117._4_4_ = (float)local_280._4_4_ * auVar122._4_4_;
    auVar117._8_4_ = fStack_278 * auVar122._8_4_;
    auVar117._12_4_ = fStack_274 * auVar122._12_4_;
    auVar117._16_4_ = fStack_270 * auVar122._16_4_;
    auVar117._20_4_ = fStack_26c * auVar122._20_4_;
    auVar117._24_4_ = fStack_268 * auVar122._24_4_;
    auVar117._28_4_ = fStack_264 * auVar122._28_4_;
    auVar88._0_4_ = (float)local_280._0_4_ * auVar82._0_4_;
    auVar88._4_4_ = (float)local_280._4_4_ * auVar82._4_4_;
    auVar88._8_4_ = fStack_278 * auVar82._8_4_;
    auVar88._12_4_ = fStack_274 * auVar82._12_4_;
    auVar88._16_4_ = fStack_270 * auVar82._16_4_;
    auVar88._20_4_ = fStack_26c * auVar82._20_4_;
    auVar88._24_4_ = fStack_268 * auVar82._24_4_;
    auVar88._28_4_ = fStack_264 * auVar82._28_4_;
    auVar49 = vsubps_avx(auVar49,auVar71);
    auVar55 = vsubps_avx(auVar55,auVar117);
    auVar64 = vsubps_avx(auVar64,auVar88);
    auVar49 = vmaskmovps_avx(auVar80,auVar49);
    auVar55 = vmaskmovps_avx(auVar80,auVar55);
    auVar64 = vmaskmovps_avx(auVar80,auVar64);
    if (bVar16 == 0xff) {
      auVar76 = vunpcklps_avx(auVar49,auVar55);
      auVar82 = vunpcklps_avx(auVar64,auVar68);
      auVar122 = vunpcklpd_avx(auVar76,auVar82);
      auVar76 = vunpckhpd_avx(auVar76,auVar82);
      auVar49 = vunpckhps_avx(auVar49,auVar55);
      auVar55 = vunpckhps_avx(auVar64,auVar68);
      auVar64 = vunpcklpd_avx(auVar49,auVar55);
      auVar49 = vunpckhpd_avx(auVar49,auVar55);
      pauVar34[1] = auVar76._0_16_;
      *pauVar34 = auVar122._0_16_;
      pauVar34[3] = auVar49._0_16_;
      pauVar34[2] = auVar64._0_16_;
      pauVar34[5] = auVar76._16_16_;
      pauVar34[4] = auVar122._16_16_;
      pauVar34[7] = auVar49._16_16_;
      pauVar34[6] = auVar64._16_16_;
    }
    else {
      auVar105 = auVar49._0_16_;
      auVar61 = auVar55._0_16_;
      auVar62 = auVar55._16_16_;
      auVar90 = auVar64._0_16_;
      auVar127 = auVar64._16_16_;
      auVar81 = auVar68._0_16_;
      auVar47 = auVar68._16_16_;
      if ((uVar38 & 1) != 0) {
        *(int *)*pauVar34 = auVar49._0_4_;
      }
      if ((uVar38 & 2) != 0) {
        uVar37 = vextractps_avx(auVar105,1);
        *(undefined4 *)pauVar34[1] = uVar37;
      }
      if ((uVar38 & 4) != 0) {
        uVar37 = vextractps_avx(auVar105,2);
        *(undefined4 *)pauVar34[2] = uVar37;
      }
      if ((uVar38 & 8) != 0) {
        uVar37 = vextractps_avx(auVar105,3);
        *(undefined4 *)pauVar34[3] = uVar37;
      }
      if ((uVar38 & 0x10) != 0) {
        *(int *)pauVar34[4] = auVar49._16_4_;
      }
      if ((uVar38 & 0x20) != 0) {
        *(int *)pauVar34[5] = auVar49._20_4_;
      }
      if ((uVar38 & 0x40) != 0) {
        *(int *)pauVar34[6] = auVar49._24_4_;
      }
      if ((char)bVar16 < '\0') {
        *(int *)pauVar34[7] = auVar49._28_4_;
      }
      if ((uVar38 & 1) != 0) {
        *(int *)(*pauVar34 + 4) = auVar55._0_4_;
      }
      if ((uVar38 & 2) != 0) {
        uVar37 = vextractps_avx(auVar61,1);
        *(undefined4 *)(pauVar34[1] + 4) = uVar37;
      }
      if ((uVar38 & 4) != 0) {
        uVar37 = vextractps_avx(auVar61,2);
        *(undefined4 *)(pauVar34[2] + 4) = uVar37;
      }
      if ((uVar38 & 8) != 0) {
        uVar37 = vextractps_avx(auVar61,3);
        *(undefined4 *)(pauVar34[3] + 4) = uVar37;
      }
      if ((uVar38 & 0x10) != 0) {
        *(int *)(pauVar34[4] + 4) = auVar55._16_4_;
      }
      if ((uVar38 & 0x20) != 0) {
        uVar37 = vextractps_avx(auVar62,1);
        *(undefined4 *)(pauVar34[5] + 4) = uVar37;
      }
      if ((uVar38 & 0x40) != 0) {
        uVar37 = vextractps_avx(auVar62,2);
        *(undefined4 *)(pauVar34[6] + 4) = uVar37;
      }
      if ((char)bVar16 < '\0') {
        uVar37 = vextractps_avx(auVar62,3);
        *(undefined4 *)(pauVar34[7] + 4) = uVar37;
      }
      if ((uVar38 & 1) != 0) {
        *(int *)(*pauVar34 + 8) = auVar64._0_4_;
      }
      if ((uVar38 & 2) != 0) {
        uVar37 = vextractps_avx(auVar90,1);
        *(undefined4 *)(pauVar34[1] + 8) = uVar37;
      }
      if ((uVar38 & 4) != 0) {
        uVar37 = vextractps_avx(auVar90,2);
        *(undefined4 *)(pauVar34[2] + 8) = uVar37;
      }
      if ((uVar38 & 8) != 0) {
        uVar37 = vextractps_avx(auVar90,3);
        *(undefined4 *)(pauVar34[3] + 8) = uVar37;
      }
      if ((uVar38 & 0x10) != 0) {
        *(int *)(pauVar34[4] + 8) = auVar64._16_4_;
      }
      if ((uVar38 & 0x20) != 0) {
        uVar37 = vextractps_avx(auVar127,1);
        *(undefined4 *)(pauVar34[5] + 8) = uVar37;
      }
      if ((uVar38 & 0x40) != 0) {
        uVar37 = vextractps_avx(auVar127,2);
        *(undefined4 *)(pauVar34[6] + 8) = uVar37;
      }
      if ((char)bVar16 < '\0') {
        uVar37 = vextractps_avx(auVar127,3);
        *(undefined4 *)(pauVar34[7] + 8) = uVar37;
      }
      if ((uVar38 & 1) != 0) {
        *(int *)(*pauVar34 + 0xc) = auVar68._0_4_;
      }
      if ((uVar38 & 2) != 0) {
        uVar37 = vextractps_avx(auVar81,1);
        *(undefined4 *)(pauVar34[1] + 0xc) = uVar37;
      }
      if ((uVar38 & 4) != 0) {
        uVar37 = vextractps_avx(auVar81,2);
        *(undefined4 *)(pauVar34[2] + 0xc) = uVar37;
      }
      if ((uVar38 & 8) != 0) {
        uVar37 = vextractps_avx(auVar81,3);
        *(undefined4 *)(pauVar34[3] + 0xc) = uVar37;
      }
      if ((uVar38 & 0x10) != 0) {
        *(int *)(pauVar34[4] + 0xc) = auVar68._16_4_;
      }
      if ((uVar38 & 0x20) != 0) {
        uVar37 = vextractps_avx(auVar47,1);
        *(undefined4 *)(pauVar34[5] + 0xc) = uVar37;
      }
      if ((uVar38 & 0x40) != 0) {
        uVar37 = vextractps_avx(auVar47,2);
        *(undefined4 *)(pauVar34[6] + 0xc) = uVar37;
      }
      if ((char)bVar16 < '\0') {
        uVar37 = vextractps_avx(auVar47,3);
        *(undefined4 *)(pauVar34[7] + 0xc) = uVar37;
      }
    }
  }
  return;
}

// MultiResUpdateFineTargets_avx @ 1405b02b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MultiResUpdateFineTargets_avx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,uint param_8)

{
  float fVar1;
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
  undefined8 uVar38;
  uint uVar39;
  longlong lVar40;
  ulonglong uVar41;
  undefined4 uVar42;
  longlong lVar43;
  undefined4 uVar45;
  ulonglong uVar44;
  undefined4 uVar46;
  longlong lVar47;
  undefined4 uVar51;
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar50;
  longlong lVar52;
  longlong lVar53;
  ulonglong uVar54;
  longlong lVar55;
  longlong lVar56;
  ulonglong uVar57;
  longlong lVar58;
  longlong lVar59;
  ulonglong uVar60;
  char cVar61;
  uint uVar62;
  longlong lVar63;
  longlong lVar64;
  longlong lVar65;
  longlong lVar66;
  ulonglong uVar67;
  ulonglong uVar68;
  ulonglong uVar69;
  longlong lVar70;
  longlong lVar71;
  longlong lVar72;
  longlong lVar73;
  longlong lVar74;
  longlong lVar75;
  longlong lVar76;
  undefined1 (*pauVar77) [16];
  longlong lVar78;
  longlong lVar79;
  longlong lVar80;
  longlong lVar81;
  longlong lVar82;
  undefined1 auVar83 [16];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [16];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar108 [16];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  uint uVar118;
  uint uVar127;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  uint uVar125;
  uint uVar126;
  uint uVar128;
  uint uVar129;
  uint uVar130;
  undefined1 auVar121 [32];
  uint uVar131;
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  undefined1 auVar132 [32];
  undefined1 auVar133 [32];
  undefined1 auVar134 [32];
  undefined1 auVar135 [32];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [32];
  undefined1 auVar142 [32];
  undefined1 auVar144 [32];
  undefined1 auVar145 [16];
  undefined1 auVar146 [32];
  undefined1 auVar147 [16];
  undefined1 auVar148 [32];
  undefined1 auVar150 [32];
  undefined1 auVar151 [16];
  undefined1 auVar152 [32];
  undefined1 auVar153 [32];
  float local_678;
  float fStack_674;
  float fStack_670;
  float fStack_66c;
  float fStack_668;
  float fStack_664;
  float fStack_660;
  float fStack_65c;
  float local_5f8;
  float fStack_5f4;
  float fStack_5f0;
  float fStack_5ec;
  float local_5d8;
  float fStack_5d4;
  float fStack_5d0;
  float fStack_5cc;
  float fStack_5c8;
  float fStack_5c4;
  float fStack_5c0;
  float fStack_5bc;
  float local_5b8;
  float fStack_5b4;
  float fStack_5b0;
  float fStack_5ac;
  float fStack_5a8;
  float fStack_5a4;
  float fStack_5a0;
  float fStack_59c;
  float local_598;
  float fStack_594;
  float fStack_590;
  float fStack_58c;
  float fStack_588;
  float fStack_584;
  float fStack_580;
  float fStack_57c;
  float local_578;
  float fStack_574;
  float fStack_570;
  float fStack_56c;
  float fStack_568;
  float fStack_564;
  float fStack_560;
  float fStack_55c;
  float local_558;
  float fStack_554;
  float fStack_550;
  float fStack_54c;
  float fStack_548;
  float fStack_544;
  float fStack_540;
  float fStack_53c;
  float local_538;
  float fStack_534;
  float fStack_530;
  float fStack_52c;
  float fStack_528;
  float fStack_524;
  float fStack_520;
  float fStack_51c;
  float local_518;
  float fStack_514;
  float fStack_510;
  float fStack_50c;
  float fStack_508;
  float fStack_504;
  float fStack_500;
  float fStack_4fc;
  float local_4f8;
  float fStack_4f4;
  float fStack_4f0;
  float fStack_4ec;
  float fStack_4e8;
  float fStack_4e4;
  float fStack_4e0;
  float fStack_4dc;
  float local_4d8;
  float fStack_4d4;
  float fStack_4d0;
  float fStack_4cc;
  float fStack_4c8;
  float fStack_4c4;
  float fStack_4c0;
  float fStack_4bc;
  float local_4b8;
  float fStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  float fStack_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  float local_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  float fStack_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  float local_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float fStack_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  float local_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float fStack_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  float local_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float fStack_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float local_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  float fStack_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float local_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float fStack_3b8;
  float fStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  float local_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  undefined1 local_378 [8];
  float fStack_370;
  float fStack_36c;
  float fStack_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  float local_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float fStack_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  float local_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  undefined1 local_2d8 [8];
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  undefined1 local_2b8 [8];
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  undefined1 local_298 [8];
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 auVar89 [32];
  undefined1 auVar96 [32];
  undefined1 auVar104 [32];
  undefined1 auVar117 [32];
  undefined1 auVar124 [32];
  undefined1 auVar141 [32];
  undefined1 auVar143 [32];
  undefined1 auVar149 [32];
  undefined1 auVar154 [32];
  
  uVar39 = param_8 + 7;
  if (-1 < (int)param_8) {
    uVar39 = param_8;
  }
  if ((int)(uVar39 & 0xfffffff8) < 1) {
    uVar62 = 0;
    lVar52 = param_2;
    if ((int)param_8 < 1) {
      return;
    }
  }
  else {
    pauVar77 = (undefined1 (*) [16])(param_6 + 0x60);
    lVar55 = 0x40;
    uVar62 = 0;
    do {
      auVar87 = ___ymm_0000000000000006000000000000000700000001000000000000000200000000;
      auVar84._16_16_ = pauVar77[-2];
      auVar84._0_16_ = pauVar77[-6];
      auVar94._16_16_ = pauVar77[-1];
      auVar94._0_16_ = pauVar77[-5];
      auVar102._16_16_ = *pauVar77;
      auVar102._0_16_ = pauVar77[-4];
      auVar111._16_16_ = pauVar77[1];
      auVar111._0_16_ = pauVar77[-3];
      auVar95 = vunpcklps_avx(auVar84,auVar94);
      auVar84 = vunpckhps_avx(auVar84,auVar94);
      auVar85 = vunpcklps_avx(auVar102,auVar111);
      auVar94 = vunpckhps_avx(auVar102,auVar111);
      auVar86 = vunpcklpd_avx(auVar95,auVar85);
      auVar102 = vunpckhpd_avx(auVar95,auVar85);
      auVar96 = vunpcklpd_avx(auVar84,auVar94);
      auVar105 = vunpckhpd_avx(auVar84,auVar94);
      auVar136 = *(undefined1 (*) [16])(param_7 + -0x40 + lVar55);
      auVar108 = *(undefined1 (*) [16])(param_7 + -0x30 + lVar55);
      auVar90 = *(undefined1 (*) [16])(param_7 + -0x10 + lVar55);
      auVar112._16_16_ = auVar108;
      auVar112._0_16_ = auVar136;
      auVar101 = *(undefined1 (*) [16])(param_7 + 0x10 + lVar55);
      uVar42 = *(undefined4 *)(param_7 + -0x18 + lVar55);
      auVar144._20_4_ = uVar42;
      auVar144._16_4_ = uVar42;
      auVar144._24_4_ = uVar42;
      auVar144._28_4_ = uVar42;
      uVar42 = *(undefined4 *)(param_7 + -0x1c + lVar55);
      auVar144._4_4_ = uVar42;
      auVar144._0_4_ = uVar42;
      auVar144._8_4_ = uVar42;
      auVar144._12_4_ = uVar42;
      auVar146._16_16_ = auVar101;
      auVar146._0_16_ = *(undefined1 (*) [16])(param_7 + lVar55);
      auVar95._16_16_ = auVar136;
      auVar95._0_16_ = auVar108;
      auVar84 = vblendps_avx(auVar112,auVar95,0x24);
      auVar84 = vpermilps_avx(auVar84,
                              ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                             );
      auVar84 = vblendps_avx(auVar84,auVar144,0x88);
      auVar140._16_16_ = *(undefined1 (*) [16])(param_7 + lVar55);
      auVar140._0_16_ = auVar101;
      uVar42 = *(undefined4 *)(param_7 + -0xc + lVar55);
      auVar103._20_4_ = uVar42;
      auVar103._16_4_ = uVar42;
      auVar103._24_4_ = uVar42;
      auVar103._28_4_ = uVar42;
      auVar136 = vshufps_avx(auVar90,auVar90,0xec);
      auVar103._0_16_ = auVar136;
      auVar94 = vblendps_avx(auVar140,auVar146,0x44);
      auVar94 = vpermilps_avx(auVar94,
                              ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                             );
      auVar94 = vblendps_avx(auVar94,auVar103,0x13);
      auVar136 = *(undefined1 (*) [16])(param_7 + -0x20 + lVar55);
      auVar132._16_16_ = auVar90;
      auVar132._0_16_ = auVar136;
      auVar85._16_16_ = auVar136;
      auVar85._0_16_ = auVar108;
      auVar95 = vblendps_avx(auVar132,auVar112,0x24);
      auVar95 = vshufps_avx(auVar85,auVar95,0x21);
      auVar85 = vshufps_avx(auVar95,auVar132,0xc2);
      auVar95 = vshufps_avx(auVar140,auVar146,0xc4);
      auVar95 = vblendps_avx(auVar85,auVar95,0xe0);
      lVar63 = (longlong)(auVar84._0_4_ * 3);
      lVar52 = (longlong)(auVar84._4_4_ * 3);
      lVar65 = (longlong)(auVar84._8_4_ * 3);
      lVar58 = (longlong)(auVar84._12_4_ * 3);
      lVar80 = (longlong)(auVar94._0_4_ * 3);
      lVar56 = (longlong)(auVar94._4_4_ * 3);
      lVar76 = (longlong)(auVar94._8_4_ * 3);
      lVar72 = (longlong)(auVar94._12_4_ * 3);
      auVar136 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + lVar80 * 4)),
                               ZEXT416(*(uint *)(param_3 + lVar56 * 4)),0x10);
      auVar136 = vinsertps_avx(auVar136,ZEXT416(*(uint *)(param_3 + lVar76 * 4)),0x20);
      auVar136 = vinsertps_avx(auVar136,ZEXT416(*(uint *)(param_3 + lVar72 * 4)),0x30);
      auVar108 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + lVar63 * 4)),
                               ZEXT416(*(uint *)(param_3 + lVar52 * 4)),0x10);
      auVar108 = vinsertps_avx(auVar108,ZEXT416(*(uint *)(param_3 + lVar65 * 4)),0x20);
      auVar108 = vinsertps_avx(auVar108,ZEXT416(*(uint *)(param_3 + lVar58 * 4)),0x30);
      auVar90 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + 4 + lVar80 * 4)),
                              ZEXT416(*(uint *)(param_3 + 4 + lVar56 * 4)),0x10);
      auVar90 = vinsertps_avx(auVar90,ZEXT416(*(uint *)(param_3 + 4 + lVar76 * 4)),0x20);
      auVar90 = vinsertps_avx(auVar90,ZEXT416(*(uint *)(param_3 + 4 + lVar72 * 4)),0x30);
      auVar101 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + 4 + lVar63 * 4)),
                               ZEXT416(*(uint *)(param_3 + 4 + lVar52 * 4)),0x10);
      auVar101 = vinsertps_avx(auVar101,ZEXT416(*(uint *)(param_3 + 4 + lVar65 * 4)),0x20);
      auVar101 = vinsertps_avx(auVar101,ZEXT416(*(uint *)(param_3 + 4 + lVar58 * 4)),0x30);
      auVar145 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + 8 + lVar80 * 4)),
                               ZEXT416(*(uint *)(param_3 + 8 + lVar56 * 4)),0x10);
      auVar145 = vinsertps_avx(auVar145,ZEXT416(*(uint *)(param_3 + 8 + lVar76 * 4)),0x20);
      auVar145 = vinsertps_avx(auVar145,ZEXT416(*(uint *)(param_3 + 8 + lVar72 * 4)),0x30);
      auVar91 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + 8 + lVar63 * 4)),
                              ZEXT416(*(uint *)(param_3 + 8 + lVar52 * 4)),0x10);
      auVar91 = vinsertps_avx(auVar91,ZEXT416(*(uint *)(param_3 + 8 + lVar65 * 4)),0x20);
      auVar91 = vinsertps_avx(auVar91,ZEXT416(*(uint *)(param_3 + 8 + lVar58 * 4)),0x30);
      lVar53 = (longlong)(auVar84._16_4_ * 3);
      lVar43 = (longlong)(auVar84._20_4_ * 3);
      lVar40 = (longlong)(auVar84._24_4_ * 3);
      lVar74 = (longlong)(auVar84._28_4_ * 3);
      lVar66 = (longlong)(auVar94._16_4_ * 3);
      lVar47 = (longlong)(auVar94._20_4_ * 3);
      lVar64 = (longlong)(auVar94._24_4_ * 3);
      lVar59 = (longlong)(auVar94._28_4_ * 3);
      auVar92 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + lVar66 * 4)),
                              ZEXT416(*(uint *)(param_3 + lVar47 * 4)),0x10);
      auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)(param_3 + lVar64 * 4)),0x20);
      auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)(param_3 + lVar59 * 4)),0x30);
      auVar93 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + lVar53 * 4)),
                              ZEXT416(*(uint *)(param_3 + lVar43 * 4)),0x10);
      auVar93 = vinsertps_avx(auVar93,ZEXT416(*(uint *)(param_3 + lVar40 * 4)),0x20);
      auVar93 = vinsertps_avx(auVar93,ZEXT416(*(uint *)(param_3 + lVar74 * 4)),0x30);
      auVar109 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + 4 + lVar66 * 4)),
                               ZEXT416(*(uint *)(param_3 + 4 + lVar47 * 4)),0x10);
      auVar109 = vinsertps_avx(auVar109,ZEXT416(*(uint *)(param_3 + 4 + lVar64 * 4)),0x20);
      auVar109 = vinsertps_avx(auVar109,ZEXT416(*(uint *)(param_3 + 4 + lVar59 * 4)),0x30);
      auVar119 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + 4 + lVar53 * 4)),
                               ZEXT416(*(uint *)(param_3 + 4 + lVar43 * 4)),0x10);
      auVar119 = vinsertps_avx(auVar119,ZEXT416(*(uint *)(param_3 + 4 + lVar40 * 4)),0x20);
      auVar119 = vinsertps_avx(auVar119,ZEXT416(*(uint *)(param_3 + 4 + lVar74 * 4)),0x30);
      auVar137 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + 8 + lVar66 * 4)),
                               ZEXT416(*(uint *)(param_3 + 8 + lVar47 * 4)),0x10);
      auVar137 = vinsertps_avx(auVar137,ZEXT416(*(uint *)(param_3 + 8 + lVar64 * 4)),0x20);
      auVar138 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + lVar80 * 4)),
                               ZEXT416(*(uint *)(param_4 + lVar56 * 4)),0x10);
      auVar2 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + 4 + lVar80 * 4)),
                             ZEXT416(*(uint *)(param_4 + 4 + lVar56 * 4)),0x10);
      auVar3 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + 8 + lVar80 * 4)),
                             ZEXT416(*(uint *)(param_4 + 8 + lVar56 * 4)),0x10);
      auVar83 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + lVar80 * 4)),
                              ZEXT416(*(uint *)(param_5 + lVar56 * 4)),0x10);
      auVar4 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + 4 + lVar80 * 4)),
                             ZEXT416(*(uint *)(param_5 + 4 + lVar56 * 4)),0x10);
      auVar5 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + 8 + lVar80 * 4)),
                             ZEXT416(*(uint *)(param_5 + 8 + lVar56 * 4)),0x10);
      auVar138 = vinsertps_avx(auVar138,ZEXT416(*(uint *)(param_4 + lVar76 * 4)),0x20);
      auVar2 = vinsertps_avx(auVar2,ZEXT416(*(uint *)(param_4 + 4 + lVar76 * 4)),0x20);
      auVar3 = vinsertps_avx(auVar3,ZEXT416(*(uint *)(param_4 + 8 + lVar76 * 4)),0x20);
      auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(param_5 + lVar76 * 4)),0x20);
      auVar4 = vinsertps_avx(auVar4,ZEXT416(*(uint *)(param_5 + 4 + lVar76 * 4)),0x20);
      auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(param_5 + 8 + lVar76 * 4)),0x20);
      auVar138 = vinsertps_avx(auVar138,ZEXT416(*(uint *)(param_4 + lVar72 * 4)),0x30);
      auVar2 = vinsertps_avx(auVar2,ZEXT416(*(uint *)(param_4 + 4 + lVar72 * 4)),0x30);
      auVar3 = vinsertps_avx(auVar3,ZEXT416(*(uint *)(param_4 + 8 + lVar72 * 4)),0x30);
      auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(param_5 + lVar72 * 4)),0x30);
      auVar4 = vinsertps_avx(auVar4,ZEXT416(*(uint *)(param_5 + 4 + lVar72 * 4)),0x30);
      auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(param_5 + 8 + lVar72 * 4)),0x30);
      auVar6 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + lVar63 * 4)),
                             ZEXT416(*(uint *)(param_4 + lVar52 * 4)),0x10);
      auVar7 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + 4 + lVar63 * 4)),
                             ZEXT416(*(uint *)(param_4 + 4 + lVar52 * 4)),0x10);
      auVar8 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + 8 + lVar63 * 4)),
                             ZEXT416(*(uint *)(param_4 + 8 + lVar52 * 4)),0x10);
      auVar9 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + lVar63 * 4)),
                             ZEXT416(*(uint *)(param_5 + lVar52 * 4)),0x10);
      auVar110 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + 4 + lVar63 * 4)),
                               ZEXT416(*(uint *)(param_5 + 4 + lVar52 * 4)),0x10);
      auVar120 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + 8 + lVar63 * 4)),
                               ZEXT416(*(uint *)(param_5 + 8 + lVar52 * 4)),0x10);
      auVar6 = vinsertps_avx(auVar6,ZEXT416(*(uint *)(param_4 + lVar65 * 4)),0x20);
      auVar7 = vinsertps_avx(auVar7,ZEXT416(*(uint *)(param_4 + 4 + lVar65 * 4)),0x20);
      auVar8 = vinsertps_avx(auVar8,ZEXT416(*(uint *)(param_4 + 8 + lVar65 * 4)),0x20);
      auVar9 = vinsertps_avx(auVar9,ZEXT416(*(uint *)(param_5 + lVar65 * 4)),0x20);
      auVar110 = vinsertps_avx(auVar110,ZEXT416(*(uint *)(param_5 + 4 + lVar65 * 4)),0x20);
      auVar120 = vinsertps_avx(auVar120,ZEXT416(*(uint *)(param_5 + 8 + lVar65 * 4)),0x20);
      auVar6 = vinsertps_avx(auVar6,ZEXT416(*(uint *)(param_4 + lVar58 * 4)),0x30);
      auVar7 = vinsertps_avx(auVar7,ZEXT416(*(uint *)(param_4 + 4 + lVar58 * 4)),0x30);
      auVar8 = vinsertps_avx(auVar8,ZEXT416(*(uint *)(param_4 + 8 + lVar58 * 4)),0x30);
      auVar9 = vinsertps_avx(auVar9,ZEXT416(*(uint *)(param_5 + lVar58 * 4)),0x30);
      auVar110 = vinsertps_avx(auVar110,ZEXT416(*(uint *)(param_5 + 4 + lVar58 * 4)),0x30);
      auVar120 = vinsertps_avx(auVar120,ZEXT416(*(uint *)(param_5 + 8 + lVar58 * 4)),0x30);
      auVar137 = vinsertps_avx(auVar137,ZEXT416(*(uint *)(param_3 + 8 + lVar59 * 4)),0x30);
      auVar139 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + 8 + lVar53 * 4)),
                               ZEXT416(*(uint *)(param_3 + 8 + lVar43 * 4)),0x10);
      auVar139 = vinsertps_avx(auVar139,ZEXT416(*(uint *)(param_3 + 8 + lVar40 * 4)),0x20);
      auVar139 = vinsertps_avx(auVar139,ZEXT416(*(uint *)(param_3 + 8 + lVar74 * 4)),0x30);
      lVar72 = (longlong)(auVar85._0_4_ * 3);
      lVar63 = (longlong)(auVar85._4_4_ * 3);
      lVar65 = (longlong)(auVar85._8_4_ * 3);
      lVar58 = (longlong)(auVar95._16_4_ * 3);
      lVar80 = (longlong)(auVar95._20_4_ * 3);
      lVar76 = (longlong)(auVar95._24_4_ * 3);
      lVar56 = (longlong)(auVar95._28_4_ * 3);
      auVar147 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + lVar58 * 4)),
                               ZEXT416(*(uint *)(param_3 + lVar80 * 4)),0x10);
      auVar147 = vinsertps_avx(auVar147,ZEXT416(*(uint *)(param_3 + lVar76 * 4)),0x20);
      auVar147 = vinsertps_avx(auVar147,ZEXT416(*(uint *)(param_3 + lVar56 * 4)),0x30);
      lVar52 = (longlong)(auVar85._12_4_ * 3);
      auVar151 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + lVar72 * 4)),
                               ZEXT416(*(uint *)(param_3 + lVar63 * 4)),0x10);
      auVar151 = vinsertps_avx(auVar151,ZEXT416(*(uint *)(param_3 + lVar65 * 4)),0x20);
      auVar151 = vinsertps_avx(auVar151,ZEXT416(*(uint *)(param_3 + lVar52 * 4)),0x30);
      auVar10 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + 4 + lVar58 * 4)),
                              ZEXT416(*(uint *)(param_3 + 4 + lVar80 * 4)),0x10);
      auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_3 + 4 + lVar76 * 4)),0x20);
      auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(param_3 + 4 + lVar56 * 4)),0x30);
      auVar11 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + 4 + lVar72 * 4)),
                              ZEXT416(*(uint *)(param_3 + 4 + lVar63 * 4)),0x10);
      auVar11 = vinsertps_avx(auVar11,ZEXT416(*(uint *)(param_3 + 4 + lVar65 * 4)),0x20);
      auVar11 = vinsertps_avx(auVar11,ZEXT416(*(uint *)(param_3 + 4 + lVar52 * 4)),0x30);
      auVar12 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + 8 + lVar58 * 4)),
                              ZEXT416(*(uint *)(param_3 + 8 + lVar80 * 4)),0x10);
      auVar12 = vinsertps_avx(auVar12,ZEXT416(*(uint *)(param_3 + 8 + lVar76 * 4)),0x20);
      auVar12 = vinsertps_avx(auVar12,ZEXT416(*(uint *)(param_3 + 8 + lVar56 * 4)),0x30);
      auVar13 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + 8 + lVar72 * 4)),
                              ZEXT416(*(uint *)(param_3 + 8 + lVar63 * 4)),0x10);
      auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)(param_3 + 8 + lVar65 * 4)),0x20);
      auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)(param_3 + 8 + lVar52 * 4)),0x30);
      auVar14 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + lVar66 * 4)),
                              ZEXT416(*(uint *)(param_4 + lVar47 * 4)),0x10);
      auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(param_4 + lVar64 * 4)),0x20);
      auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(param_4 + lVar59 * 4)),0x30);
      auVar15 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + lVar53 * 4)),
                              ZEXT416(*(uint *)(param_4 + lVar43 * 4)),0x10);
      auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(param_4 + lVar40 * 4)),0x20);
      auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(param_4 + lVar74 * 4)),0x30);
      auVar16 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + 4 + lVar66 * 4)),
                              ZEXT416(*(uint *)(param_4 + 4 + lVar47 * 4)),0x10);
      auVar16 = vinsertps_avx(auVar16,ZEXT416(*(uint *)(param_4 + 4 + lVar64 * 4)),0x20);
      auVar16 = vinsertps_avx(auVar16,ZEXT416(*(uint *)(param_4 + 4 + lVar59 * 4)),0x30);
      auVar17 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + 4 + lVar53 * 4)),
                              ZEXT416(*(uint *)(param_4 + 4 + lVar43 * 4)),0x10);
      auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)(param_4 + 4 + lVar40 * 4)),0x20);
      auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)(param_4 + 4 + lVar74 * 4)),0x30);
      auVar18 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + 8 + lVar66 * 4)),
                              ZEXT416(*(uint *)(param_4 + 8 + lVar47 * 4)),0x10);
      auVar18 = vinsertps_avx(auVar18,ZEXT416(*(uint *)(param_4 + 8 + lVar64 * 4)),0x20);
      auVar18 = vinsertps_avx(auVar18,ZEXT416(*(uint *)(param_4 + 8 + lVar59 * 4)),0x30);
      auVar19 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + 8 + lVar53 * 4)),
                              ZEXT416(*(uint *)(param_4 + 8 + lVar43 * 4)),0x10);
      auVar19 = vinsertps_avx(auVar19,ZEXT416(*(uint *)(param_4 + 8 + lVar40 * 4)),0x20);
      auVar19 = vinsertps_avx(auVar19,ZEXT416(*(uint *)(param_4 + 8 + lVar74 * 4)),0x30);
      auVar20 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + lVar58 * 4)),
                              ZEXT416(*(uint *)(param_4 + lVar80 * 4)),0x10);
      auVar20 = vinsertps_avx(auVar20,ZEXT416(*(uint *)(param_4 + lVar76 * 4)),0x20);
      auVar20 = vinsertps_avx(auVar20,ZEXT416(*(uint *)(param_4 + lVar56 * 4)),0x30);
      auVar21 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + lVar72 * 4)),
                              ZEXT416(*(uint *)(param_4 + lVar63 * 4)),0x10);
      auVar21 = vinsertps_avx(auVar21,ZEXT416(*(uint *)(param_4 + lVar65 * 4)),0x20);
      auVar21 = vinsertps_avx(auVar21,ZEXT416(*(uint *)(param_4 + lVar52 * 4)),0x30);
      auVar22 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + 4 + lVar58 * 4)),
                              ZEXT416(*(uint *)(param_4 + 4 + lVar80 * 4)),0x10);
      auVar22 = vinsertps_avx(auVar22,ZEXT416(*(uint *)(param_4 + 4 + lVar76 * 4)),0x20);
      auVar22 = vinsertps_avx(auVar22,ZEXT416(*(uint *)(param_4 + 4 + lVar56 * 4)),0x30);
      auVar23 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + 4 + lVar72 * 4)),
                              ZEXT416(*(uint *)(param_4 + 4 + lVar63 * 4)),0x10);
      auVar23 = vinsertps_avx(auVar23,ZEXT416(*(uint *)(param_4 + 4 + lVar65 * 4)),0x20);
      auVar23 = vinsertps_avx(auVar23,ZEXT416(*(uint *)(param_4 + 4 + lVar52 * 4)),0x30);
      auVar24 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + 8 + lVar58 * 4)),
                              ZEXT416(*(uint *)(param_4 + 8 + lVar80 * 4)),0x10);
      auVar24 = vinsertps_avx(auVar24,ZEXT416(*(uint *)(param_4 + 8 + lVar76 * 4)),0x20);
      auVar24 = vinsertps_avx(auVar24,ZEXT416(*(uint *)(param_4 + 8 + lVar56 * 4)),0x30);
      auVar25 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + 8 + lVar72 * 4)),
                              ZEXT416(*(uint *)(param_4 + 8 + lVar63 * 4)),0x10);
      auVar25 = vinsertps_avx(auVar25,ZEXT416(*(uint *)(param_4 + 8 + lVar65 * 4)),0x20);
      auVar25 = vinsertps_avx(auVar25,ZEXT416(*(uint *)(param_4 + 8 + lVar52 * 4)),0x30);
      auVar26 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + lVar66 * 4)),
                              ZEXT416(*(uint *)(param_5 + lVar47 * 4)),0x10);
      auVar27 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + 4 + lVar66 * 4)),
                              ZEXT416(*(uint *)(param_5 + 4 + lVar47 * 4)),0x10);
      auVar28 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + 8 + lVar66 * 4)),
                              ZEXT416(*(uint *)(param_5 + 8 + lVar47 * 4)),0x10);
      auVar26 = vinsertps_avx(auVar26,ZEXT416(*(uint *)(param_5 + lVar64 * 4)),0x20);
      auVar27 = vinsertps_avx(auVar27,ZEXT416(*(uint *)(param_5 + 4 + lVar64 * 4)),0x20);
      auVar28 = vinsertps_avx(auVar28,ZEXT416(*(uint *)(param_5 + 8 + lVar64 * 4)),0x20);
      auVar26 = vinsertps_avx(auVar26,ZEXT416(*(uint *)(param_5 + lVar59 * 4)),0x30);
      auVar27 = vinsertps_avx(auVar27,ZEXT416(*(uint *)(param_5 + 4 + lVar59 * 4)),0x30);
      auVar28 = vinsertps_avx(auVar28,ZEXT416(*(uint *)(param_5 + 8 + lVar59 * 4)),0x30);
      auVar29 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + lVar53 * 4)),
                              ZEXT416(*(uint *)(param_5 + lVar43 * 4)),0x10);
      auVar30 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + 4 + lVar53 * 4)),
                              ZEXT416(*(uint *)(param_5 + 4 + lVar43 * 4)),0x10);
      local_5f8 = auVar120._0_4_;
      fStack_5f4 = auVar120._4_4_;
      fStack_5f0 = auVar120._8_4_;
      fStack_5ec = auVar120._12_4_;
      local_298._0_4_ = auVar5._0_4_;
      local_298._4_4_ = auVar5._4_4_;
      fStack_290 = auVar5._8_4_;
      fStack_28c = auVar5._12_4_;
      auVar5 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + 8 + lVar53 * 4)),
                             ZEXT416(*(uint *)(param_5 + 8 + lVar43 * 4)),0x10);
      auVar120 = vinsertps_avx(auVar29,ZEXT416(*(uint *)(param_5 + lVar40 * 4)),0x20);
      auVar29 = vinsertps_avx(auVar30,ZEXT416(*(uint *)(param_5 + 4 + lVar40 * 4)),0x20);
      auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(param_5 + 8 + lVar40 * 4)),0x20);
      auVar120 = vinsertps_avx(auVar120,ZEXT416(*(uint *)(param_5 + lVar74 * 4)),0x30);
      auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)(param_5 + 4 + lVar74 * 4)),0x30);
      auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(param_5 + 8 + lVar74 * 4)),0x30);
      auVar30 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + lVar58 * 4)),
                              ZEXT416(*(uint *)(param_5 + lVar80 * 4)),0x10);
      auVar30 = vinsertps_avx(auVar30,ZEXT416(*(uint *)(param_5 + lVar76 * 4)),0x20);
      auVar30 = vinsertps_avx(auVar30,ZEXT416(*(uint *)(param_5 + lVar56 * 4)),0x30);
      auVar31 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + lVar72 * 4)),
                              ZEXT416(*(uint *)(param_5 + lVar63 * 4)),0x10);
      auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(param_5 + lVar65 * 4)),0x20);
      auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(param_5 + lVar52 * 4)),0x30);
      auVar32 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + 4 + lVar58 * 4)),
                              ZEXT416(*(uint *)(param_5 + 4 + lVar80 * 4)),0x10);
      auVar33 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + 8 + lVar58 * 4)),
                              ZEXT416(*(uint *)(param_5 + 8 + lVar80 * 4)),0x10);
      auVar32 = vinsertps_avx(auVar32,ZEXT416(*(uint *)(param_5 + 4 + lVar76 * 4)),0x20);
      auVar33 = vinsertps_avx(auVar33,ZEXT416(*(uint *)(param_5 + 8 + lVar76 * 4)),0x20);
      auVar32 = vinsertps_avx(auVar32,ZEXT416(*(uint *)(param_5 + 4 + lVar56 * 4)),0x30);
      auVar33 = vinsertps_avx(auVar33,ZEXT416(*(uint *)(param_5 + 8 + lVar56 * 4)),0x30);
      auVar34 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + 4 + lVar72 * 4)),
                              ZEXT416(*(uint *)(param_5 + 4 + lVar63 * 4)),0x10);
      auVar35 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + 8 + lVar72 * 4)),
                              ZEXT416(*(uint *)(param_5 + 8 + lVar63 * 4)),0x10);
      auVar34 = vinsertps_avx(auVar34,ZEXT416(*(uint *)(param_5 + 4 + lVar65 * 4)),0x20);
      auVar35 = vinsertps_avx(auVar35,ZEXT416(*(uint *)(param_5 + 8 + lVar65 * 4)),0x20);
      auVar34 = vinsertps_avx(auVar34,ZEXT416(*(uint *)(param_5 + 4 + lVar52 * 4)),0x30);
      auVar35 = vinsertps_avx(auVar35,ZEXT416(*(uint *)(param_5 + 8 + lVar52 * 4)),0x30);
      local_408 = auVar105._0_4_;
      fStack_404 = auVar105._4_4_;
      fStack_400 = auVar105._8_4_;
      fStack_3fc = auVar105._12_4_;
      fStack_3f8 = auVar105._16_4_;
      fStack_3f4 = auVar105._20_4_;
      fStack_3f0 = auVar105._24_4_;
      fStack_3ec = auVar105._28_4_;
      local_518 = auVar108._0_4_;
      fStack_514 = auVar108._4_4_;
      fStack_510 = auVar108._8_4_;
      fStack_50c = auVar108._12_4_;
      fStack_508 = auVar136._0_4_;
      fStack_504 = auVar136._4_4_;
      fStack_500 = auVar136._8_4_;
      fStack_4fc = auVar136._12_4_;
      local_538 = auVar101._0_4_;
      fStack_534 = auVar101._4_4_;
      fStack_530 = auVar101._8_4_;
      fStack_52c = auVar101._12_4_;
      fStack_528 = auVar90._0_4_;
      fStack_524 = auVar90._4_4_;
      fStack_520 = auVar90._8_4_;
      fStack_51c = auVar90._12_4_;
      local_2f8 = auVar8._0_4_;
      fStack_2f4 = auVar8._4_4_;
      fStack_2f0 = auVar8._8_4_;
      fStack_2ec = auVar8._12_4_;
      fStack_2e8 = auVar3._0_4_;
      fStack_2e4 = auVar3._4_4_;
      fStack_2e0 = auVar3._8_4_;
      fStack_2dc = auVar3._12_4_;
      local_338 = auVar91._0_4_;
      fStack_334 = auVar91._4_4_;
      fStack_330 = auVar91._8_4_;
      fStack_32c = auVar91._12_4_;
      fStack_328 = auVar145._0_4_;
      fStack_324 = auVar145._4_4_;
      fStack_320 = auVar145._8_4_;
      fStack_31c = auVar145._12_4_;
      local_478 = auVar93._0_4_;
      fStack_474 = auVar93._4_4_;
      fStack_470 = auVar93._8_4_;
      fStack_46c = auVar93._12_4_;
      fStack_468 = auVar92._0_4_;
      fStack_464 = auVar92._4_4_;
      fStack_460 = auVar92._8_4_;
      fStack_45c = auVar92._12_4_;
      local_378._0_4_ = auVar17._0_4_;
      local_378._4_4_ = auVar17._4_4_;
      fStack_370 = auVar17._8_4_;
      fStack_36c = auVar17._12_4_;
      fStack_368 = auVar16._0_4_;
      fStack_364 = auVar16._4_4_;
      fStack_360 = auVar16._8_4_;
      fStack_35c = auVar16._12_4_;
      local_358 = auVar119._0_4_;
      fStack_354 = auVar119._4_4_;
      fStack_350 = auVar119._8_4_;
      fStack_34c = auVar119._12_4_;
      fStack_348 = auVar109._0_4_;
      fStack_344 = auVar109._4_4_;
      fStack_340 = auVar109._8_4_;
      fStack_33c = auVar109._12_4_;
      local_4d8 = auVar139._0_4_;
      fStack_4d4 = auVar139._4_4_;
      fStack_4d0 = auVar139._8_4_;
      fStack_4cc = auVar139._12_4_;
      fStack_4c8 = auVar137._0_4_;
      fStack_4c4 = auVar137._4_4_;
      fStack_4c0 = auVar137._8_4_;
      fStack_4bc = auVar137._12_4_;
      local_3c8 = auVar86._0_4_;
      fStack_3c4 = auVar86._4_4_;
      fStack_3c0 = auVar86._8_4_;
      fStack_3bc = auVar86._12_4_;
      fStack_3b8 = auVar86._16_4_;
      fStack_3b4 = auVar86._20_4_;
      fStack_3b0 = auVar86._24_4_;
      fStack_3ac = auVar86._28_4_;
      local_3e8 = auVar102._0_4_;
      fStack_3e4 = auVar102._4_4_;
      fStack_3e0 = auVar102._8_4_;
      fStack_3dc = auVar102._12_4_;
      fStack_3d8 = auVar102._16_4_;
      fStack_3d4 = auVar102._20_4_;
      fStack_3d0 = auVar102._24_4_;
      fStack_3cc = auVar102._28_4_;
      local_318 = auVar21._0_4_;
      fStack_314 = auVar21._4_4_;
      fStack_310 = auVar21._8_4_;
      fStack_30c = auVar21._12_4_;
      fStack_308 = auVar20._0_4_;
      fStack_304 = auVar20._4_4_;
      fStack_300 = auVar20._8_4_;
      fStack_2fc = auVar20._12_4_;
      local_498 = auVar151._0_4_;
      fStack_494 = auVar151._4_4_;
      fStack_490 = auVar151._8_4_;
      fStack_48c = auVar151._12_4_;
      fStack_488 = auVar147._0_4_;
      fStack_484 = auVar147._4_4_;
      fStack_480 = auVar147._8_4_;
      fStack_47c = auVar147._12_4_;
      local_558 = auVar23._0_4_;
      fStack_554 = auVar23._4_4_;
      fStack_550 = auVar23._8_4_;
      fStack_54c = auVar23._12_4_;
      fStack_548 = auVar22._0_4_;
      fStack_544 = auVar22._4_4_;
      fStack_540 = auVar22._8_4_;
      fStack_53c = auVar22._12_4_;
      local_4b8 = auVar11._0_4_;
      fStack_4b4 = auVar11._4_4_;
      fStack_4b0 = auVar11._8_4_;
      fStack_4ac = auVar11._12_4_;
      fStack_4a8 = auVar10._0_4_;
      fStack_4a4 = auVar10._4_4_;
      fStack_4a0 = auVar10._8_4_;
      fStack_49c = auVar10._12_4_;
      local_5d8 = auVar13._0_4_;
      fStack_5d4 = auVar13._4_4_;
      fStack_5d0 = auVar13._8_4_;
      fStack_5cc = auVar13._12_4_;
      fStack_5c8 = auVar12._0_4_;
      fStack_5c4 = auVar12._4_4_;
      fStack_5c0 = auVar12._8_4_;
      fStack_5bc = auVar12._12_4_;
      local_3a8 = auVar96._0_4_;
      fStack_3a4 = auVar96._4_4_;
      fStack_3a0 = auVar96._8_4_;
      fStack_39c = auVar96._12_4_;
      fStack_398 = auVar96._16_4_;
      fStack_394 = auVar96._20_4_;
      fStack_390 = auVar96._24_4_;
      fStack_38c = auVar96._28_4_;
      auVar136._0_4_ =
           local_3e8 * (auVar15._0_4_ * local_408 + local_478) +
           local_3c8 * (auVar6._0_4_ * local_408 + local_518) +
           local_3a8 * (local_408 * local_318 + local_498);
      auVar136._4_4_ =
           fStack_3e4 * (auVar15._4_4_ * fStack_404 + fStack_474) +
           fStack_3c4 * (auVar6._4_4_ * fStack_404 + fStack_514) +
           fStack_3a4 * (fStack_404 * fStack_314 + fStack_494);
      auVar136._8_4_ =
           fStack_3e0 * (auVar15._8_4_ * fStack_400 + fStack_470) +
           fStack_3c0 * (auVar6._8_4_ * fStack_400 + fStack_510) +
           fStack_3a0 * (fStack_400 * fStack_310 + fStack_490);
      auVar136._12_4_ =
           fStack_3dc * (auVar15._12_4_ * fStack_3fc + fStack_46c) +
           fStack_3bc * (auVar6._12_4_ * fStack_3fc + fStack_50c) +
           fStack_39c * (fStack_3fc * fStack_30c + fStack_48c);
      auVar141._16_4_ =
           fStack_3d8 * (auVar14._0_4_ * fStack_3f8 + fStack_468) +
           fStack_3b8 * (auVar138._0_4_ * fStack_3f8 + fStack_508) +
           fStack_398 * (fStack_3f8 * fStack_308 + fStack_488);
      auVar141._0_16_ = auVar136;
      auVar141._20_4_ =
           fStack_3d4 * (auVar14._4_4_ * fStack_3f4 + fStack_464) +
           fStack_3b4 * (auVar138._4_4_ * fStack_3f4 + fStack_504) +
           fStack_394 * (fStack_3f4 * fStack_304 + fStack_484);
      auVar141._24_4_ =
           fStack_3d0 * (auVar14._8_4_ * fStack_3f0 + fStack_460) +
           fStack_3b0 * (auVar138._8_4_ * fStack_3f0 + fStack_500) +
           fStack_390 * (fStack_3f0 * fStack_300 + fStack_480);
      auVar141._28_4_ =
           fStack_3cc * (auVar14._12_4_ * fStack_3ec + fStack_45c) +
           fStack_3ac * (auVar138._12_4_ * fStack_3ec + fStack_4fc) +
           fStack_38c * (fStack_3ec * fStack_2fc + fStack_47c);
      auVar108._0_4_ =
           local_3e8 * (local_408 * (float)local_378._0_4_ + local_358) +
           local_3c8 * (auVar7._0_4_ * local_408 + local_538) +
           local_3a8 * (local_408 * local_558 + local_4b8);
      auVar108._4_4_ =
           fStack_3e4 * (fStack_404 * (float)local_378._4_4_ + fStack_354) +
           fStack_3c4 * (auVar7._4_4_ * fStack_404 + fStack_534) +
           fStack_3a4 * (fStack_404 * fStack_554 + fStack_4b4);
      auVar108._8_4_ =
           fStack_3e0 * (fStack_400 * fStack_370 + fStack_350) +
           fStack_3c0 * (auVar7._8_4_ * fStack_400 + fStack_530) +
           fStack_3a0 * (fStack_400 * fStack_550 + fStack_4b0);
      auVar108._12_4_ =
           fStack_3dc * (fStack_3fc * fStack_36c + fStack_34c) +
           fStack_3bc * (auVar7._12_4_ * fStack_3fc + fStack_52c) +
           fStack_39c * (fStack_3fc * fStack_54c + fStack_4ac);
      auVar152._16_4_ =
           fStack_3d8 * (fStack_3f8 * fStack_368 + fStack_348) +
           fStack_3b8 * (auVar2._0_4_ * fStack_3f8 + fStack_528) +
           fStack_398 * (fStack_3f8 * fStack_548 + fStack_4a8);
      auVar152._0_16_ = auVar108;
      auVar152._20_4_ =
           fStack_3d4 * (fStack_3f4 * fStack_364 + fStack_344) +
           fStack_3b4 * (auVar2._4_4_ * fStack_3f4 + fStack_524) +
           fStack_394 * (fStack_3f4 * fStack_544 + fStack_4a4);
      auVar152._24_4_ =
           fStack_3d0 * (fStack_3f0 * fStack_360 + fStack_340) +
           fStack_3b0 * (auVar2._8_4_ * fStack_3f0 + fStack_520) +
           fStack_390 * (fStack_3f0 * fStack_540 + fStack_4a0);
      auVar152._28_4_ =
           fStack_3cc * (fStack_3ec * fStack_35c + fStack_33c) +
           fStack_3ac * (auVar2._12_4_ * fStack_3ec + fStack_51c) +
           fStack_38c * (fStack_3ec * fStack_53c + fStack_49c);
      auVar121._0_4_ =
           local_3e8 * (auVar19._0_4_ * local_408 + local_4d8) +
           (local_408 * local_2f8 + local_338) * local_3c8 +
           local_3a8 * (auVar25._0_4_ * local_408 + local_5d8);
      auVar121._4_4_ =
           fStack_3e4 * (auVar19._4_4_ * fStack_404 + fStack_4d4) +
           (fStack_404 * fStack_2f4 + fStack_334) * fStack_3c4 +
           fStack_3a4 * (auVar25._4_4_ * fStack_404 + fStack_5d4);
      auVar121._8_4_ =
           fStack_3e0 * (auVar19._8_4_ * fStack_400 + fStack_4d0) +
           (fStack_400 * fStack_2f0 + fStack_330) * fStack_3c0 +
           fStack_3a0 * (auVar25._8_4_ * fStack_400 + fStack_5d0);
      auVar121._12_4_ =
           fStack_3dc * (auVar19._12_4_ * fStack_3fc + fStack_4cc) +
           (fStack_3fc * fStack_2ec + fStack_32c) * fStack_3bc +
           fStack_39c * (auVar25._12_4_ * fStack_3fc + fStack_5cc);
      auVar121._16_4_ =
           fStack_3d8 * (auVar18._0_4_ * fStack_3f8 + fStack_4c8) +
           (fStack_3f8 * fStack_2e8 + fStack_328) * fStack_3b8 +
           fStack_398 * (auVar24._0_4_ * fStack_3f8 + fStack_5c8);
      auVar121._20_4_ =
           fStack_3d4 * (auVar18._4_4_ * fStack_3f4 + fStack_4c4) +
           (fStack_3f4 * fStack_2e4 + fStack_324) * fStack_3b4 +
           fStack_394 * (auVar24._4_4_ * fStack_3f4 + fStack_5c4);
      auVar121._24_4_ =
           fStack_3d0 * (auVar18._8_4_ * fStack_3f0 + fStack_4c0) +
           (fStack_3f0 * fStack_2e0 + fStack_320) * fStack_3b0 +
           fStack_390 * (auVar24._8_4_ * fStack_3f0 + fStack_5c0);
      auVar121._28_4_ =
           fStack_3cc * (auVar18._12_4_ * fStack_3ec + fStack_4bc) +
           (fStack_3ec * fStack_2dc + fStack_31c) * fStack_3ac +
           fStack_38c * (auVar24._12_4_ * fStack_3ec + fStack_5bc);
      local_598 = auVar9._0_4_;
      fStack_594 = auVar9._4_4_;
      fStack_590 = auVar9._8_4_;
      fStack_58c = auVar9._12_4_;
      fStack_588 = auVar83._0_4_;
      fStack_584 = auVar83._4_4_;
      fStack_580 = auVar83._8_4_;
      fStack_57c = auVar83._12_4_;
      local_5b8 = auVar110._0_4_;
      fStack_5b4 = auVar110._4_4_;
      fStack_5b0 = auVar110._8_4_;
      fStack_5ac = auVar110._12_4_;
      fStack_5a8 = auVar4._0_4_;
      fStack_5a4 = auVar4._4_4_;
      fStack_5a0 = auVar4._8_4_;
      fStack_59c = auVar4._12_4_;
      local_678 = auVar31._0_4_;
      fStack_674 = auVar31._4_4_;
      fStack_670 = auVar31._8_4_;
      fStack_66c = auVar31._12_4_;
      fStack_668 = auVar30._0_4_;
      fStack_664 = auVar30._4_4_;
      fStack_660 = auVar30._8_4_;
      fStack_65c = auVar30._12_4_;
      auVar90._0_4_ = local_3c8 * local_598 + local_3e8 * auVar120._0_4_ + local_3a8 * local_678;
      auVar90._4_4_ =
           fStack_3c4 * fStack_594 + fStack_3e4 * auVar120._4_4_ + fStack_3a4 * fStack_674;
      auVar90._8_4_ =
           fStack_3c0 * fStack_590 + fStack_3e0 * auVar120._8_4_ + fStack_3a0 * fStack_670;
      auVar90._12_4_ =
           fStack_3bc * fStack_58c + fStack_3dc * auVar120._12_4_ + fStack_39c * fStack_66c;
      auVar96._16_4_ =
           fStack_3b8 * fStack_588 + fStack_3d8 * auVar26._0_4_ + fStack_398 * fStack_668;
      auVar96._0_16_ = auVar90;
      auVar96._20_4_ =
           fStack_3b4 * fStack_584 + fStack_3d4 * auVar26._4_4_ + fStack_394 * fStack_664;
      auVar96._24_4_ =
           fStack_3b0 * fStack_580 + fStack_3d0 * auVar26._8_4_ + fStack_390 * fStack_660;
      auVar96._28_4_ =
           fStack_3ac * fStack_57c + fStack_3cc * auVar26._12_4_ + fStack_38c * fStack_65c;
      auVar101._0_4_ = local_3c8 * local_5b8 + local_3e8 * auVar29._0_4_ + local_3a8 * auVar34._0_4_
      ;
      auVar101._4_4_ =
           fStack_3c4 * fStack_5b4 + fStack_3e4 * auVar29._4_4_ + fStack_3a4 * auVar34._4_4_;
      auVar101._8_4_ =
           fStack_3c0 * fStack_5b0 + fStack_3e0 * auVar29._8_4_ + fStack_3a0 * auVar34._8_4_;
      auVar101._12_4_ =
           fStack_3bc * fStack_5ac + fStack_3dc * auVar29._12_4_ + fStack_39c * auVar34._12_4_;
      auVar104._16_4_ =
           fStack_3b8 * fStack_5a8 + fStack_3d8 * auVar27._0_4_ + fStack_398 * auVar32._0_4_;
      auVar104._0_16_ = auVar101;
      auVar104._20_4_ =
           fStack_3b4 * fStack_5a4 + fStack_3d4 * auVar27._4_4_ + fStack_394 * auVar32._4_4_;
      auVar104._24_4_ =
           fStack_3b0 * fStack_5a0 + fStack_3d0 * auVar27._8_4_ + fStack_390 * auVar32._8_4_;
      auVar104._28_4_ =
           fStack_3ac * fStack_59c + fStack_3cc * auVar27._12_4_ + fStack_38c * auVar32._12_4_;
      auVar86._0_4_ = local_5f8 * local_3c8 + local_3e8 * auVar5._0_4_ + local_3a8 * auVar35._0_4_;
      auVar86._4_4_ =
           fStack_5f4 * fStack_3c4 + fStack_3e4 * auVar5._4_4_ + fStack_3a4 * auVar35._4_4_;
      auVar86._8_4_ =
           fStack_5f0 * fStack_3c0 + fStack_3e0 * auVar5._8_4_ + fStack_3a0 * auVar35._8_4_;
      auVar86._12_4_ =
           fStack_5ec * fStack_3bc + fStack_3dc * auVar5._12_4_ + fStack_39c * auVar35._12_4_;
      auVar86._16_4_ =
           (float)local_298._0_4_ * fStack_3b8 + fStack_3d8 * auVar28._0_4_ +
           fStack_398 * auVar33._0_4_;
      auVar86._20_4_ =
           (float)local_298._4_4_ * fStack_3b4 + fStack_3d4 * auVar28._4_4_ +
           fStack_394 * auVar33._4_4_;
      auVar86._24_4_ =
           fStack_290 * fStack_3b0 + fStack_3d0 * auVar28._8_4_ + fStack_390 * auVar33._8_4_;
      auVar86._28_4_ =
           fStack_28c * fStack_3ac + fStack_3cc * auVar28._12_4_ + fStack_38c * auVar33._12_4_;
      auVar113._16_16_ = auVar108;
      auVar113._0_16_ = auVar136;
      auVar95 = vshufpd_avx(auVar141,auVar113,2);
      auVar145 = auVar152._16_16_;
      auVar136 = vshufpd_avx(auVar108,auVar145,1);
      auVar85 = vperm2f128_avx(auVar121,auVar121,1);
      auVar84 = vshufps_avx(auVar121,auVar85,0x30);
      auVar84 = vshufps_avx(auVar85,auVar84,0x29);
      auVar84 = vblendps_avx(auVar84,ZEXT1632(auVar136),7);
      auVar102 = vperm2f128_avx(auVar84,auVar84,1);
      auVar94 = vunpcklpd_avx(auVar102,auVar121);
      auVar85 = vshufps_avx(auVar85,auVar94,0x24);
      auVar94 = vperm2f128_avx(auVar95,auVar95,1);
      auVar94 = vblendps_avx(auVar95,auVar94,0x44);
      auVar94 = vpermilps_avx(auVar94,
                              ___ymm_0000000000000006000000000000000700000001000000000000000200000000
                             );
      auVar94 = vblendps_avx(auVar94,auVar85,0xa4);
      *(undefined1 (*) [16])(param_1 + -0x30 + lVar55) = auVar94._16_16_;
      *(undefined1 (*) [16])(param_1 + -0x40 + lVar55) = auVar94._0_16_;
      auVar105 = ___ymm_0000000000000007000000000000000000000000000000010000000000000000;
      auVar94 = vpermilps_avx(auVar84,
                              ___ymm_0000000000000007000000000000000000000000000000010000000000000000
                             );
      auVar84 = vshufps_avx(auVar102,auVar102,0xa9);
      auVar84 = vblendps_avx(auVar84,auVar94,0x44);
      auVar94 = vshufpd_avx(auVar95,auVar95,1);
      auVar84 = vblendps_avx(auVar84,auVar94,0x92);
      *(undefined1 (*) [16])(param_1 + -0x10 + lVar55) = auVar84._16_16_;
      *(undefined1 (*) [16])(param_1 + -0x20 + lVar55) = auVar84._0_16_;
      auVar136 = vshufps_avx(auVar141._16_16_,auVar145,0x9e);
      auVar108 = vshufps_avx(auVar145,auVar145,0xff);
      auVar133._16_16_ = auVar108;
      auVar133._0_16_ = auVar136;
      auVar94 = vperm2f128_avx(auVar121,ZEXT1632(auVar136),0x21);
      auVar84 = vblendps_avx(auVar133,auVar121,0xe0);
      auVar94 = vshufps_avx(auVar94,auVar84,0x21);
      auVar84 = vshufps_avx(auVar94,auVar84,0xc2);
      *(undefined1 (*) [16])(param_1 + 0x10 + lVar55) = auVar84._16_16_;
      *(undefined1 (*) [16])(param_1 + lVar55) = auVar84._0_16_;
      auVar114._16_16_ = auVar101;
      auVar114._0_16_ = auVar90;
      auVar95 = vshufpd_avx(auVar96,auVar114,2);
      auVar108 = auVar104._16_16_;
      auVar136 = vshufpd_avx(auVar101,auVar108,1);
      auVar85 = vperm2f128_avx(auVar86,auVar86,1);
      auVar84 = vshufps_avx(auVar86,auVar85,0x30);
      auVar84 = vshufps_avx(auVar85,auVar84,0x29);
      auVar84 = vblendps_avx(auVar84,ZEXT1632(auVar136),7);
      auVar102 = vperm2f128_avx(auVar84,auVar84,1);
      auVar94 = vunpcklpd_avx(auVar102,auVar86);
      auVar85 = vshufps_avx(auVar85,auVar94,0x24);
      auVar94 = vperm2f128_avx(auVar95,auVar95,1);
      auVar94 = vblendps_avx(auVar95,auVar94,0x44);
      auVar94 = vpermilps_avx(auVar94,auVar87);
      auVar94 = vblendps_avx(auVar94,auVar85,0xa4);
      *(undefined1 (*) [16])(param_2 + -0x30 + lVar55) = auVar94._16_16_;
      *(undefined1 (*) [16])(param_2 + -0x40 + lVar55) = auVar94._0_16_;
      auVar94 = vpermilps_avx(auVar84,auVar105);
      auVar84 = vshufps_avx(auVar102,auVar102,0xa9);
      auVar84 = vblendps_avx(auVar84,auVar94,0x44);
      auVar94 = vshufpd_avx(auVar95,auVar95,1);
      auVar84 = vblendps_avx(auVar84,auVar94,0x92);
      *(undefined1 (*) [16])(param_2 + -0x10 + lVar55) = auVar84._16_16_;
      *(undefined1 (*) [16])(param_2 + -0x20 + lVar55) = auVar84._0_16_;
      auVar136 = vshufps_avx(auVar96._16_16_,auVar108,0x9e);
      auVar108 = vshufps_avx(auVar108,auVar108,0xff);
      auVar105._16_16_ = auVar108;
      auVar105._0_16_ = auVar136;
      auVar94 = vperm2f128_avx(auVar86,ZEXT1632(auVar136),0x21);
      auVar84 = vblendps_avx(auVar105,auVar86,0xe0);
      auVar94 = vshufps_avx(auVar94,auVar84,0x21);
      auVar84 = vshufps_avx(auVar94,auVar84,0xc2);
      *(undefined1 (*) [16])(param_2 + 0x10 + lVar55) = auVar84._16_16_;
      *(undefined1 (*) [16])(param_2 + lVar55) = auVar84._0_16_;
      lVar55 = lVar55 + 0x60;
      pauVar77 = pauVar77 + 8;
      uVar62 = uVar62 + 8;
    } while ((int)uVar62 < (int)(uVar39 & 0xfffffff8));
    if ((int)param_8 <= (int)uVar62) {
      return;
    }
  }
  auVar84 = ___ymm_0000000000000006000000000000000700000001000000000000000200000000;
  auVar136 = vpshufd_avx(ZEXT416(uVar62),0);
  auVar87._16_16_ = auVar136;
  auVar87._0_16_ = auVar136;
  auVar90 = vpshufd_avx(ZEXT416(param_8),0);
  uVar54 = (ulonglong)uVar62;
  pauVar77 = (undefined1 (*) [16])(param_6 + uVar54 * 0x10);
  auVar101 = SUB3216(auVar87 | 
                     ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar145 = SUB3216(auVar87 | 
                     ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar136 = vpcmpgtd_avx(auVar90,auVar145);
  auVar108 = vpcmpgtd_avx(auVar90,auVar101);
  auVar88._16_16_ = auVar136;
  auVar88._0_16_ = auVar108;
  uVar39 = vmovmskps_avx(auVar88);
  if (uVar39 == 0xff) {
    auVar97._16_16_ = pauVar77[4];
    auVar97._0_16_ = *pauVar77;
    auVar106._16_16_ = pauVar77[5];
    auVar106._0_16_ = pauVar77[1];
    auVar115._16_16_ = pauVar77[6];
    auVar115._0_16_ = pauVar77[2];
    auVar122._16_16_ = pauVar77[7];
    auVar122._0_16_ = pauVar77[3];
    auVar85 = vunpcklps_avx(auVar97,auVar106);
    auVar94 = vunpckhps_avx(auVar97,auVar106);
    auVar102 = vunpcklps_avx(auVar115,auVar122);
    auVar95 = vunpckhps_avx(auVar115,auVar122);
    _local_298 = vunpcklpd_avx(auVar85,auVar102);
    _local_2b8 = vunpckhpd_avx(auVar85,auVar102);
    _local_2d8 = vunpcklpd_avx(auVar94,auVar95);
    _local_378 = vunpckhpd_avx(auVar94,auVar95);
    auVar136 = *(undefined1 (*) [16])(param_7 + uVar54 * 0xc);
    auVar108 = *(undefined1 (*) [16])(param_7 + 0x10 + uVar54 * 0xc);
    auVar91 = *(undefined1 (*) [16])(param_7 + 0x30 + uVar54 * 0xc);
    auVar92 = *(undefined1 (*) [16])(param_7 + 0x50 + uVar54 * 0xc);
    auVar93 = *(undefined1 (*) [16])(param_7 + 0x40 + uVar54 * 0xc);
    uVar42 = *(undefined4 *)(param_7 + 0x28 + uVar54 * 0xc);
    auVar148._20_4_ = uVar42;
    auVar148._16_4_ = uVar42;
    auVar148._24_4_ = uVar42;
    auVar148._28_4_ = uVar42;
    uVar42 = *(undefined4 *)(param_7 + 0x24 + uVar54 * 0xc);
    auVar148._4_4_ = uVar42;
    auVar148._0_4_ = uVar42;
    auVar148._8_4_ = uVar42;
    auVar148._12_4_ = uVar42;
    uVar42 = *(undefined4 *)(param_7 + 0x34 + uVar54 * 0xc);
    auVar123._20_4_ = uVar42;
    auVar123._16_4_ = uVar42;
    auVar123._24_4_ = uVar42;
    auVar123._28_4_ = uVar42;
    auVar153._16_16_ = auVar108;
    auVar153._0_16_ = auVar136;
    auVar116._16_16_ = auVar91;
    auVar116._0_16_ = *(undefined1 (*) [16])(param_7 + 0x20 + uVar54 * 0xc);
    auVar98._16_16_ = auVar136;
    auVar98._0_16_ = auVar108;
    auVar94 = vblendps_avx(auVar153,auVar98,0x24);
    auVar94 = vpermilps_avx(auVar94,
                            ___ymm_0000000000000007000000040000000500000000000000020000000300000000)
    ;
    auVar150._16_16_ = auVar92;
    auVar150._0_16_ = auVar93;
    auVar94 = vblendps_avx(auVar94,auVar148,0x88);
    auVar134._16_16_ = auVar93;
    auVar134._0_16_ = auVar92;
    auVar95 = vblendps_avx(auVar134,auVar150,0x44);
    auVar95 = vpermilps_avx(auVar95,
                            ___ymm_0000000600000007000000040000000000000001000000020000000000000000)
    ;
    auVar136 = vshufps_avx(auVar91,auVar91,0xec);
    auVar123._0_16_ = auVar136;
    auVar95 = vblendps_avx(auVar95,auVar123,0x13);
    auVar142._16_16_ = auVar95._0_16_;
    auVar142._0_16_ = auVar94._0_16_;
    auVar85 = vperm2f128_avx(auVar94,auVar95,0x31);
    auVar94 = vblendps_avx(auVar116,auVar153,0x24);
    auVar94 = vshufps_avx(ZEXT1632(auVar108),auVar94,0x21);
    auVar94 = vshufps_avx(auVar94,auVar116,0xc2);
    auVar95 = vshufps_avx(auVar134,auVar150,0xc4);
    auVar94 = vblendps_avx(auVar94,auVar95,0xe0);
  }
  else {
    auVar136 = vpcmpgtd_avx(auVar90,auVar145);
    auVar108 = vpcmpgtd_avx(auVar90,auVar101);
    uVar118 = auVar108._0_4_;
    auVar91._0_4_ =
         uVar118 & ___ymm_0000007000000060000000500000004000000030000000200000001000000000;
    uVar125 = auVar108._4_4_;
    auVar91._4_4_ = uVar125 & _UNK_150b50e44;
    uVar126 = auVar108._8_4_;
    auVar91._8_4_ = uVar126 & _UNK_150b50e48;
    uVar127 = auVar108._12_4_;
    auVar91._12_4_ = uVar127 & _UNK_150b50e4c;
    uVar128 = auVar136._0_4_;
    uVar129 = auVar136._4_4_;
    uVar130 = auVar136._8_4_;
    uVar131 = auVar136._12_4_;
    uVar62 = vextractps_avx(auVar91,1);
    uVar45 = (undefined4)((ulonglong)param_1 >> 0x20);
    uVar42 = vextractps_avx(auVar91,2);
    uVar51 = (undefined4)((ulonglong)lVar52 >> 0x20);
    uVar46 = vextractps_avx(auVar91,3);
    auVar136 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar77 + (uVar128 & _UNK_150b50e50))),
                             ZEXT416(*(uint *)(*pauVar77 + (uVar129 & _UNK_150b50e54))),0x10);
    auVar136 = vinsertps_avx(auVar136,ZEXT416(*(uint *)(*pauVar77 + (uVar130 & _UNK_150b50e58))),
                             0x20);
    auVar136 = vinsertps_avx(auVar136,ZEXT416(*(uint *)(*pauVar77 + (uVar131 & _UNK_150b50e5c))),
                             0x30);
    auVar108 = vinsertps_avx(ZEXT416(*(uint *)*pauVar77),ZEXT416(*(uint *)(*pauVar77 + uVar62)),0x10
                            );
    auVar108 = vinsertps_avx(auVar108,ZEXT416(*(uint *)(*pauVar77 + CONCAT44(uVar45,uVar42))),0x20);
    auVar108 = vinsertps_avx(auVar108,ZEXT416(*(uint *)(*pauVar77 + CONCAT44(uVar51,uVar46))),0x30);
    auVar92._0_4_ =
         uVar118 & ___ymm_0000007400000064000000540000004400000034000000240000001400000004;
    auVar92._4_4_ = uVar125 & _UNK_150b50e64;
    auVar92._8_4_ = uVar126 & _UNK_150b50e68;
    auVar92._12_4_ = uVar127 & _UNK_150b50e6c;
    uVar62 = vextractps_avx(auVar92,1);
    uVar42 = vextractps_avx(auVar92,2);
    uVar46 = vextractps_avx(auVar92,3);
    auVar91 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar77 + (uVar128 & _UNK_150b50e70))),
                            ZEXT416(*(uint *)(*pauVar77 + (uVar129 & _UNK_150b50e74))),0x10);
    auVar91 = vinsertps_avx(auVar91,ZEXT416(*(uint *)(*pauVar77 + (uVar130 & _UNK_150b50e78))),0x20)
    ;
    auVar91 = vinsertps_avx(auVar91,ZEXT416(*(uint *)(*pauVar77 + (uVar131 & _UNK_150b50e7c))),0x30)
    ;
    auVar92 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar77 + auVar92._0_4_)),
                            ZEXT416(*(uint *)(*pauVar77 + uVar62)),0x10);
    auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)(*pauVar77 + CONCAT44(uVar45,uVar42))),0x20);
    auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)(*pauVar77 + CONCAT44(uVar51,uVar46))),0x30);
    auVar137._0_4_ =
         uVar118 & ___ymm_0000007800000068000000580000004800000038000000280000001800000008;
    auVar137._4_4_ = uVar125 & _UNK_150b50e84;
    auVar137._8_4_ = uVar126 & _UNK_150b50e88;
    auVar137._12_4_ = uVar127 & _UNK_150b50e8c;
    uVar62 = vextractps_avx(auVar137,1);
    uVar42 = vextractps_avx(auVar137,2);
    register0x00001290 = auVar136;
    _local_298 = auVar108;
    uVar46 = vextractps_avx(auVar137,3);
    auVar136 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar77 + (uVar128 & _UNK_150b50e90))),
                             ZEXT416(*(uint *)(*pauVar77 + (uVar129 & _UNK_150b50e94))),0x10);
    auVar136 = vinsertps_avx(auVar136,ZEXT416(*(uint *)(*pauVar77 + (uVar130 & _UNK_150b50e98))),
                             0x20);
    auVar136 = vinsertps_avx(auVar136,ZEXT416(*(uint *)(*pauVar77 + (uVar131 & _UNK_150b50e9c))),
                             0x30);
    auVar108 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar77 + auVar137._0_4_)),
                             ZEXT416(*(uint *)(*pauVar77 + uVar62)),0x10);
    auVar108 = vinsertps_avx(auVar108,ZEXT416(*(uint *)(*pauVar77 + CONCAT44(uVar45,uVar42))),0x20);
    auVar108 = vinsertps_avx(auVar108,ZEXT416(*(uint *)(*pauVar77 + CONCAT44(uVar51,uVar46))),0x30);
    auVar138._0_4_ =
         uVar118 & ___ymm_0000007c0000006c0000005c0000004c0000003c0000002c0000001c0000000c;
    auVar138._4_4_ = uVar125 & _UNK_150b50ea4;
    auVar138._8_4_ = uVar126 & _UNK_150b50ea8;
    auVar138._12_4_ = uVar127 & _UNK_150b50eac;
    uVar62 = vextractps_avx(auVar138,1);
    uVar42 = vextractps_avx(auVar138,2);
    register0x00001250 = auVar91;
    _local_2b8 = auVar92;
    uVar46 = vextractps_avx(auVar138,3);
    auVar91 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar77 + (uVar128 & _UNK_150b50eb0))),
                            ZEXT416(*(uint *)(*pauVar77 + (uVar129 & _UNK_150b50eb4))),0x10);
    auVar91 = vinsertps_avx(auVar91,ZEXT416(*(uint *)(*pauVar77 + (uVar130 & _UNK_150b50eb8))),0x20)
    ;
    auVar91 = vinsertps_avx(auVar91,ZEXT416(*(uint *)(*pauVar77 + (uVar131 & _UNK_150b50ebc))),0x30)
    ;
    auVar92 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar77 + auVar138._0_4_)),
                            ZEXT416(*(uint *)(*pauVar77 + uVar62)),0x10);
    auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)(*pauVar77 + CONCAT44(uVar45,uVar42))),0x20);
    register0x00001290 = auVar136;
    _local_2d8 = auVar108;
    auVar136 = vinsertps_avx(auVar92,ZEXT416(*(uint *)(*pauVar77 + CONCAT44(uVar51,uVar46))),0x30);
    register0x00001250 = auVar91;
    _local_378 = auVar136;
    auVar93._0_4_ =
         uVar118 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000;
    auVar93._4_4_ = uVar125 & _UNK_150b50b04;
    auVar93._8_4_ = uVar126 & _UNK_150b50b08;
    auVar93._12_4_ = uVar127 & _UNK_150b50b0c;
    vextractps_avx(auVar93,1);
    vextractps_avx(auVar93,2);
    lVar52 = param_7 + uVar54 * 0xc;
    vextractps_avx(auVar93,3);
    auVar109._0_4_ =
         uVar118 & ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004;
    auVar109._4_4_ = uVar125 & _UNK_150b50b24;
    auVar109._8_4_ = uVar126 & _UNK_150b50b28;
    auVar109._12_4_ = uVar127 & _UNK_150b50b2c;
    vextractps_avx(auVar109,1);
    vextractps_avx(auVar109,2);
    vextractps_avx(auVar109,3);
    auVar119._0_4_ =
         uVar118 & ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008;
    auVar119._4_4_ = uVar125 & _UNK_150b50b44;
    auVar119._8_4_ = uVar126 & _UNK_150b50b48;
    auVar119._12_4_ = uVar127 & _UNK_150b50b4c;
    vextractps_avx(auVar119,1);
    vextractps_avx(auVar119,2);
    auVar142 = ZEXT2032(CONCAT416(*(undefined4 *)((ulonglong)(uVar128 & _UNK_150b50b10) + lVar52),
                                  ZEXT416(*(uint *)(param_7 + uVar54 * 0xc))));
    vextractps_avx(auVar119,3);
    auVar85 = ZEXT2032(CONCAT416(*(undefined4 *)((ulonglong)(uVar128 & _UNK_150b50b30) + lVar52),
                                 ZEXT416(*(uint *)((ulonglong)auVar109._0_4_ + lVar52))));
    auVar94 = ZEXT2032(CONCAT416(*(undefined4 *)((ulonglong)(uVar128 & _UNK_150b50b50) + lVar52),
                                 ZEXT416(*(uint *)((ulonglong)auVar119._0_4_ + lVar52))));
  }
  auVar91 = vpcmpgtd_avx(auVar90,auVar145);
  auVar110 = vpcmpgtd_avx(auVar90,auVar101);
  auVar145._4_4_ = auVar142._20_4_ * 3;
  auVar145._0_4_ = auVar142._16_4_ * 3;
  auVar145._8_4_ = auVar142._24_4_ * 3;
  auVar145._12_4_ = auVar142._28_4_ * 3;
  auVar7 = vpand_avx(auVar91,auVar145);
  lVar43 = (longlong)auVar7._0_4_;
  lVar52 = param_3 + lVar43 * 4;
  lVar56 = (longlong)auVar7._4_4_;
  lVar55 = param_3 + lVar56 * 4;
  uVar50 = (ulonglong)(auVar91._4_4_ & _UNK_150b50d54);
  uVar48 = (ulonglong)(auVar91._8_4_ & _UNK_150b50d58);
  uVar60 = (ulonglong)(auVar91._0_4_ & _UNK_150b50d50);
  auVar136 = vinsertps_avx(ZEXT416(*(uint *)(uVar60 + lVar52)),ZEXT416(*(uint *)(uVar50 + lVar55)),
                           0x10);
  uVar57 = (ulonglong)(auVar91._0_4_ & _UNK_150b50d70);
  uVar49 = (ulonglong)(auVar91._4_4_ & _UNK_150b50d74);
  auVar108 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar52)),ZEXT416(*(uint *)(uVar49 + lVar55)),
                           0x10);
  auVar2._4_4_ = auVar85._20_4_ * 3;
  auVar2._0_4_ = auVar85._16_4_ * 3;
  auVar2._8_4_ = auVar85._24_4_ * 3;
  auVar2._12_4_ = auVar85._28_4_ * 3;
  auVar8 = vpand_avx(auVar91,auVar2);
  lVar47 = (longlong)auVar8._0_4_;
  uVar41 = (ulonglong)(auVar91._12_4_ & _UNK_150b50d5c);
  lVar64 = (longlong)auVar8._4_4_;
  lVar52 = param_3 + lVar47 * 4;
  lVar55 = param_3 + lVar64 * 4;
  auVar90 = vinsertps_avx(ZEXT416(*(uint *)(uVar60 + lVar52)),ZEXT416(*(uint *)(uVar50 + lVar55)),
                          0x10);
  uVar67 = (ulonglong)(auVar91._8_4_ & _UNK_150b50d78);
  uVar44 = (ulonglong)(auVar91._12_4_ & _UNK_150b50d7c);
  auVar3._4_4_ = auVar94._20_4_ * 3;
  auVar3._0_4_ = auVar94._16_4_ * 3;
  auVar3._8_4_ = auVar94._24_4_ * 3;
  auVar3._12_4_ = auVar94._28_4_ * 3;
  auVar101 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar52)),ZEXT416(*(uint *)(uVar49 + lVar55)),
                           0x10);
  auVar9 = vpand_avx(auVar91,auVar3);
  lVar75 = (longlong)auVar9._0_4_;
  lVar52 = param_3 + lVar75 * 4;
  lVar65 = (longlong)auVar9._4_4_;
  lVar55 = param_3 + lVar65 * 4;
  auVar145 = vinsertps_avx(ZEXT416(*(uint *)(uVar60 + lVar52)),ZEXT416(*(uint *)(uVar50 + lVar55)),
                           0x10);
  auVar91 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar52)),ZEXT416(*(uint *)(uVar49 + lVar55)),
                          0x10);
  lVar52 = param_4 + lVar43 * 4;
  lVar55 = param_4 + lVar56 * 4;
  auVar92 = vinsertps_avx(ZEXT416(*(uint *)(uVar60 + lVar52)),ZEXT416(*(uint *)(uVar50 + lVar55)),
                          0x10);
  auVar93 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar52)),ZEXT416(*(uint *)(uVar49 + lVar55)),
                          0x10);
  lVar52 = param_4 + lVar47 * 4;
  lVar55 = param_4 + lVar64 * 4;
  auVar109 = vinsertps_avx(ZEXT416(*(uint *)(uVar60 + lVar52)),ZEXT416(*(uint *)(uVar50 + lVar55)),
                           0x10);
  auVar119 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar52)),ZEXT416(*(uint *)(uVar49 + lVar55)),
                           0x10);
  lVar52 = param_4 + lVar75 * 4;
  lVar55 = param_4 + lVar65 * 4;
  auVar137 = vinsertps_avx(ZEXT416(*(uint *)(uVar60 + lVar52)),ZEXT416(*(uint *)(uVar50 + lVar55)),
                           0x10);
  auVar138 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar52)),ZEXT416(*(uint *)(uVar49 + lVar55)),
                           0x10);
  lVar52 = param_5 + lVar43 * 4;
  lVar55 = param_5 + lVar56 * 4;
  auVar2 = vinsertps_avx(ZEXT416(*(uint *)(uVar60 + lVar52)),ZEXT416(*(uint *)(uVar50 + lVar55)),
                         0x10);
  auVar3 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar52)),ZEXT416(*(uint *)(uVar49 + lVar55)),
                         0x10);
  lVar52 = param_5 + lVar47 * 4;
  lVar55 = param_5 + lVar64 * 4;
  auVar83 = vinsertps_avx(ZEXT416(*(uint *)(uVar60 + lVar52)),ZEXT416(*(uint *)(uVar50 + lVar55)),
                          0x10);
  auVar4 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar52)),ZEXT416(*(uint *)(uVar49 + lVar55)),
                         0x10);
  lVar52 = param_5 + lVar75 * 4;
  lVar55 = param_5 + lVar65 * 4;
  auVar5 = vinsertps_avx(ZEXT416(*(uint *)(uVar60 + lVar52)),ZEXT416(*(uint *)(uVar50 + lVar55)),
                         0x10);
  auVar6 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar52)),ZEXT416(*(uint *)(uVar49 + lVar55)),
                         0x10);
  lVar40 = (longlong)auVar7._8_4_;
  lVar52 = param_3 + lVar40 * 4;
  auVar136 = vinsertps_avx(auVar136,ZEXT416(*(uint *)(uVar48 + lVar52)),0x20);
  auVar108 = vinsertps_avx(auVar108,ZEXT416(*(uint *)(uVar67 + lVar52)),0x20);
  lVar66 = (longlong)auVar8._8_4_;
  lVar52 = param_3 + lVar66 * 4;
  auVar90 = vinsertps_avx(auVar90,ZEXT416(*(uint *)(uVar48 + lVar52)),0x20);
  auVar101 = vinsertps_avx(auVar101,ZEXT416(*(uint *)(uVar67 + lVar52)),0x20);
  lVar72 = (longlong)auVar9._8_4_;
  lVar52 = param_3 + lVar72 * 4;
  auVar145 = vinsertps_avx(auVar145,ZEXT416(*(uint *)(uVar48 + lVar52)),0x20);
  auVar91 = vinsertps_avx(auVar91,ZEXT416(*(uint *)(uVar67 + lVar52)),0x20);
  lVar52 = param_4 + lVar40 * 4;
  auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)(uVar48 + lVar52)),0x20);
  auVar93 = vinsertps_avx(auVar93,ZEXT416(*(uint *)(uVar67 + lVar52)),0x20);
  lVar52 = param_4 + lVar66 * 4;
  auVar109 = vinsertps_avx(auVar109,ZEXT416(*(uint *)(uVar48 + lVar52)),0x20);
  auVar119 = vinsertps_avx(auVar119,ZEXT416(*(uint *)(uVar67 + lVar52)),0x20);
  lVar52 = param_4 + lVar72 * 4;
  auVar137 = vinsertps_avx(auVar137,ZEXT416(*(uint *)(uVar48 + lVar52)),0x20);
  auVar138 = vinsertps_avx(auVar138,ZEXT416(*(uint *)(uVar67 + lVar52)),0x20);
  lVar52 = param_5 + lVar40 * 4;
  auVar2 = vinsertps_avx(auVar2,ZEXT416(*(uint *)(uVar48 + lVar52)),0x20);
  auVar3 = vinsertps_avx(auVar3,ZEXT416(*(uint *)(uVar67 + lVar52)),0x20);
  lVar52 = param_5 + lVar66 * 4;
  auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(uVar48 + lVar52)),0x20);
  auVar4 = vinsertps_avx(auVar4,ZEXT416(*(uint *)(uVar67 + lVar52)),0x20);
  lVar52 = param_5 + lVar72 * 4;
  auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(uVar48 + lVar52)),0x20);
  auVar6 = vinsertps_avx(auVar6,ZEXT416(*(uint *)(uVar67 + lVar52)),0x20);
  lVar53 = (longlong)auVar7._12_4_;
  lVar52 = param_3 + lVar53 * 4;
  auVar136 = vinsertps_avx(auVar136,ZEXT416(*(uint *)(uVar41 + lVar52)),0x30);
  auVar108 = vinsertps_avx(auVar108,ZEXT416(*(uint *)(uVar44 + lVar52)),0x30);
  lVar58 = (longlong)auVar8._12_4_;
  lVar52 = param_3 + lVar58 * 4;
  auVar90 = vinsertps_avx(auVar90,ZEXT416(*(uint *)(uVar41 + lVar52)),0x30);
  auVar101 = vinsertps_avx(auVar101,ZEXT416(*(uint *)(uVar44 + lVar52)),0x30);
  lVar59 = (longlong)auVar9._12_4_;
  lVar52 = param_3 + lVar59 * 4;
  auVar145 = vinsertps_avx(auVar145,ZEXT416(*(uint *)(uVar41 + lVar52)),0x30);
  auVar91 = vinsertps_avx(auVar91,ZEXT416(*(uint *)(uVar44 + lVar52)),0x30);
  auVar7._4_4_ = auVar142._4_4_ * 3;
  auVar7._0_4_ = auVar142._0_4_ * 3;
  auVar7._8_4_ = auVar142._8_4_ * 3;
  auVar7._12_4_ = auVar142._12_4_ * 3;
  lVar52 = param_4 + lVar53 * 4;
  auVar92 = vinsertps_avx(auVar92,ZEXT416(*(uint *)(uVar41 + lVar52)),0x30);
  auVar93 = vinsertps_avx(auVar93,ZEXT416(*(uint *)(uVar44 + lVar52)),0x30);
  auVar20 = vpand_avx(auVar110,auVar7);
  lVar52 = param_4 + lVar58 * 4;
  auVar109 = vinsertps_avx(auVar109,ZEXT416(*(uint *)(uVar41 + lVar52)),0x30);
  auVar119 = vinsertps_avx(auVar119,ZEXT416(*(uint *)(uVar44 + lVar52)),0x30);
  lVar52 = param_4 + lVar59 * 4;
  auVar137 = vinsertps_avx(auVar137,ZEXT416(*(uint *)(uVar41 + lVar52)),0x30);
  uVar48 = (ulonglong)(auVar110._4_4_ & _UNK_150b50d44);
  uVar68 = (ulonglong)(auVar110._8_4_ & _UNK_150b50d48);
  uVar69 = (ulonglong)(auVar110._12_4_ & _UNK_150b50d4c);
  uVar57 = (ulonglong)
           (auVar110._0_4_ & ___ymm_0000000400000004000000040000000400000004000000040000000400000004
           );
  auVar138 = vinsertps_avx(auVar138,ZEXT416(*(uint *)(uVar44 + lVar52)),0x30);
  lVar52 = param_5 + lVar53 * 4;
  auVar2 = vinsertps_avx(auVar2,ZEXT416(*(uint *)(uVar41 + lVar52)),0x30);
  uVar60 = (ulonglong)(auVar110._4_4_ & _UNK_150b50d64);
  uVar49 = (ulonglong)(auVar110._8_4_ & _UNK_150b50d68);
  uVar50 = (ulonglong)(auVar110._12_4_ & _UNK_150b50d6c);
  uVar67 = (ulonglong)
           (auVar110._0_4_ & ___ymm_0000000800000008000000080000000800000008000000080000000800000008
           );
  auVar3 = vinsertps_avx(auVar3,ZEXT416(*(uint *)(uVar44 + lVar52)),0x30);
  lVar52 = param_5 + lVar58 * 4;
  auVar83 = vinsertps_avx(auVar83,ZEXT416(*(uint *)(uVar41 + lVar52)),0x30);
  auVar4 = vinsertps_avx(auVar4,ZEXT416(*(uint *)(uVar44 + lVar52)),0x30);
  lVar52 = param_5 + lVar59 * 4;
  auVar5 = vinsertps_avx(auVar5,ZEXT416(*(uint *)(uVar41 + lVar52)),0x30);
  local_4b8 = auVar85._0_4_;
  fStack_4b4 = auVar85._4_4_;
  fStack_4b0 = auVar85._8_4_;
  fStack_4ac = auVar85._12_4_;
  auVar8._4_4_ = (int)fStack_4b4 * 3;
  auVar8._0_4_ = (int)local_4b8 * 3;
  auVar8._8_4_ = (int)fStack_4b0 * 3;
  auVar8._12_4_ = (int)fStack_4ac * 3;
  auVar21 = vpand_avx(auVar110,auVar8);
  auVar6 = vinsertps_avx(auVar6,ZEXT416(*(uint *)(uVar44 + lVar52)),0x30);
  auVar9._4_4_ = auVar94._4_4_ * 3;
  auVar9._0_4_ = auVar94._0_4_ * 3;
  auVar9._8_4_ = auVar94._8_4_ * 3;
  auVar9._12_4_ = auVar94._12_4_ * 3;
  lVar73 = (longlong)auVar20._0_4_;
  lVar78 = (longlong)auVar20._4_4_;
  lVar52 = param_3 + lVar73 * 4;
  lVar55 = param_3 + lVar78 * 4;
  auVar7 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar52)),ZEXT416(*(uint *)(uVar48 + lVar55)),
                         0x10);
  auVar26 = vpand_avx(auVar110,auVar9);
  auVar8 = vinsertps_avx(ZEXT416(*(uint *)(uVar67 + lVar52)),ZEXT416(*(uint *)(uVar60 + lVar55)),
                         0x10);
  lVar63 = (longlong)auVar21._0_4_;
  lVar81 = (longlong)auVar21._4_4_;
  lVar52 = param_3 + lVar63 * 4;
  lVar55 = param_3 + lVar81 * 4;
  auVar9 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar52)),ZEXT416(*(uint *)(uVar48 + lVar55)),
                         0x10);
  auVar110 = vinsertps_avx(ZEXT416(*(uint *)(uVar67 + lVar52)),ZEXT416(*(uint *)(uVar60 + lVar55)),
                           0x10);
  lVar80 = (longlong)auVar26._0_4_;
  lVar74 = (longlong)auVar26._4_4_;
  lVar52 = param_3 + lVar80 * 4;
  lVar55 = param_3 + lVar74 * 4;
  auVar120 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar52)),ZEXT416(*(uint *)(uVar48 + lVar55)),
                           0x10);
  auVar139 = vinsertps_avx(ZEXT416(*(uint *)(uVar67 + lVar52)),ZEXT416(*(uint *)(uVar60 + lVar55)),
                           0x10);
  lVar52 = param_4 + lVar73 * 4;
  lVar55 = param_4 + lVar78 * 4;
  auVar147 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar52)),ZEXT416(*(uint *)(uVar48 + lVar55)),
                           0x10);
  auVar151 = vinsertps_avx(ZEXT416(*(uint *)(uVar67 + lVar52)),ZEXT416(*(uint *)(uVar60 + lVar55)),
                           0x10);
  lVar52 = param_4 + lVar63 * 4;
  lVar55 = param_4 + lVar81 * 4;
  auVar10 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar52)),ZEXT416(*(uint *)(uVar48 + lVar55)),
                          0x10);
  auVar11 = vinsertps_avx(ZEXT416(*(uint *)(uVar67 + lVar52)),ZEXT416(*(uint *)(uVar60 + lVar55)),
                          0x10);
  lVar52 = param_4 + lVar80 * 4;
  lVar55 = param_4 + lVar74 * 4;
  auVar12 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar52)),ZEXT416(*(uint *)(uVar48 + lVar55)),
                          0x10);
  auVar13 = vinsertps_avx(ZEXT416(*(uint *)(uVar67 + lVar52)),ZEXT416(*(uint *)(uVar60 + lVar55)),
                          0x10);
  lVar52 = param_5 + lVar73 * 4;
  lVar55 = param_5 + lVar78 * 4;
  auVar14 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar52)),ZEXT416(*(uint *)(uVar48 + lVar55)),
                          0x10);
  auVar15 = vinsertps_avx(ZEXT416(*(uint *)(uVar67 + lVar52)),ZEXT416(*(uint *)(uVar60 + lVar55)),
                          0x10);
  lVar52 = param_5 + lVar63 * 4;
  lVar55 = param_5 + lVar81 * 4;
  auVar16 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar52)),ZEXT416(*(uint *)(uVar48 + lVar55)),
                          0x10);
  auVar17 = vinsertps_avx(ZEXT416(*(uint *)(uVar67 + lVar52)),ZEXT416(*(uint *)(uVar60 + lVar55)),
                          0x10);
  lVar52 = param_5 + lVar80 * 4;
  lVar55 = param_5 + lVar74 * 4;
  auVar18 = vinsertps_avx(ZEXT416(*(uint *)(uVar57 + lVar52)),ZEXT416(*(uint *)(uVar48 + lVar55)),
                          0x10);
  auVar19 = vinsertps_avx(ZEXT416(*(uint *)(uVar67 + lVar52)),ZEXT416(*(uint *)(uVar60 + lVar55)),
                          0x10);
  lVar82 = (longlong)auVar20._8_4_;
  lVar52 = param_3 + lVar82 * 4;
  auVar7 = vinsertps_avx(auVar7,ZEXT416(*(uint *)(uVar68 + lVar52)),0x20);
  auVar8 = vinsertps_avx(auVar8,ZEXT416(*(uint *)(uVar49 + lVar52)),0x20);
  lVar55 = (longlong)auVar20._12_4_;
  lVar52 = param_3 + lVar55 * 4;
  auVar7 = vinsertps_avx(auVar7,ZEXT416(*(uint *)(uVar69 + lVar52)),0x30);
  auVar8 = vinsertps_avx(auVar8,ZEXT416(*(uint *)(uVar50 + lVar52)),0x30);
  lVar70 = (longlong)auVar21._8_4_;
  lVar52 = param_3 + lVar70 * 4;
  auVar9 = vinsertps_avx(auVar9,ZEXT416(*(uint *)(uVar68 + lVar52)),0x20);
  auVar110 = vinsertps_avx(auVar110,ZEXT416(*(uint *)(uVar49 + lVar52)),0x20);
  lVar71 = (longlong)auVar21._12_4_;
  lVar52 = param_3 + lVar71 * 4;
  auVar9 = vinsertps_avx(auVar9,ZEXT416(*(uint *)(uVar69 + lVar52)),0x30);
  auVar110 = vinsertps_avx(auVar110,ZEXT416(*(uint *)(uVar50 + lVar52)),0x30);
  lVar76 = (longlong)auVar26._8_4_;
  lVar52 = param_3 + lVar76 * 4;
  auVar120 = vinsertps_avx(auVar120,ZEXT416(*(uint *)(uVar68 + lVar52)),0x20);
  auVar139 = vinsertps_avx(auVar139,ZEXT416(*(uint *)(uVar49 + lVar52)),0x20);
  auVar20 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + lVar43 * 4)),
                          ZEXT416(*(uint *)(param_3 + lVar56 * 4)),0x10);
  auVar20 = vinsertps_avx(auVar20,ZEXT416(*(uint *)(param_3 + lVar40 * 4)),0x20);
  auVar20 = vinsertps_avx(auVar20,ZEXT416(*(uint *)(param_3 + lVar53 * 4)),0x30);
  auVar21 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + lVar73 * 4)),
                          ZEXT416(*(uint *)(param_3 + lVar78 * 4)),0x10);
  auVar21 = vinsertps_avx(auVar21,ZEXT416(*(uint *)(param_3 + lVar82 * 4)),0x20);
  auVar21 = vinsertps_avx(auVar21,ZEXT416(*(uint *)(param_3 + lVar55 * 4)),0x30);
  auVar22 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + lVar47 * 4)),
                          ZEXT416(*(uint *)(param_3 + lVar64 * 4)),0x10);
  auVar22 = vinsertps_avx(auVar22,ZEXT416(*(uint *)(param_3 + lVar66 * 4)),0x20);
  auVar22 = vinsertps_avx(auVar22,ZEXT416(*(uint *)(param_3 + lVar58 * 4)),0x30);
  auVar23 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + lVar63 * 4)),
                          ZEXT416(*(uint *)(param_3 + lVar81 * 4)),0x10);
  auVar23 = vinsertps_avx(auVar23,ZEXT416(*(uint *)(param_3 + lVar70 * 4)),0x20);
  auVar23 = vinsertps_avx(auVar23,ZEXT416(*(uint *)(param_3 + lVar71 * 4)),0x30);
  auVar24 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + lVar75 * 4)),
                          ZEXT416(*(uint *)(param_3 + lVar65 * 4)),0x10);
  auVar24 = vinsertps_avx(auVar24,ZEXT416(*(uint *)(param_3 + lVar72 * 4)),0x20);
  auVar24 = vinsertps_avx(auVar24,ZEXT416(*(uint *)(param_3 + lVar59 * 4)),0x30);
  auVar25 = vinsertps_avx(ZEXT416(*(uint *)(param_3 + lVar80 * 4)),
                          ZEXT416(*(uint *)(param_3 + lVar74 * 4)),0x10);
  auVar25 = vinsertps_avx(auVar25,ZEXT416(*(uint *)(param_3 + lVar76 * 4)),0x20);
  lVar79 = (longlong)auVar26._12_4_;
  auVar25 = vinsertps_avx(auVar25,ZEXT416(*(uint *)(param_3 + lVar79 * 4)),0x30);
  param_3 = param_3 + lVar79 * 4;
  auVar120 = vinsertps_avx(auVar120,ZEXT416(*(uint *)(uVar69 + param_3)),0x30);
  auVar139 = vinsertps_avx(auVar139,ZEXT416(*(uint *)(uVar50 + param_3)),0x30);
  lVar52 = param_4 + lVar82 * 4;
  auVar147 = vinsertps_avx(auVar147,ZEXT416(*(uint *)(uVar68 + lVar52)),0x20);
  auVar151 = vinsertps_avx(auVar151,ZEXT416(*(uint *)(uVar49 + lVar52)),0x20);
  lVar52 = param_4 + lVar55 * 4;
  auVar147 = vinsertps_avx(auVar147,ZEXT416(*(uint *)(uVar69 + lVar52)),0x30);
  auVar151 = vinsertps_avx(auVar151,ZEXT416(*(uint *)(uVar50 + lVar52)),0x30);
  lVar52 = param_4 + lVar70 * 4;
  auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(uVar68 + lVar52)),0x20);
  auVar11 = vinsertps_avx(auVar11,ZEXT416(*(uint *)(uVar49 + lVar52)),0x20);
  lVar52 = param_4 + lVar71 * 4;
  auVar10 = vinsertps_avx(auVar10,ZEXT416(*(uint *)(uVar69 + lVar52)),0x30);
  auVar11 = vinsertps_avx(auVar11,ZEXT416(*(uint *)(uVar50 + lVar52)),0x30);
  lVar52 = param_4 + lVar76 * 4;
  auVar12 = vinsertps_avx(auVar12,ZEXT416(*(uint *)(uVar68 + lVar52)),0x20);
  auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)(uVar49 + lVar52)),0x20);
  auVar26 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + lVar43 * 4)),
                          ZEXT416(*(uint *)(param_4 + lVar56 * 4)),0x10);
  auVar26 = vinsertps_avx(auVar26,ZEXT416(*(uint *)(param_4 + lVar40 * 4)),0x20);
  auVar26 = vinsertps_avx(auVar26,ZEXT416(*(uint *)(param_4 + lVar53 * 4)),0x30);
  auVar27 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + lVar73 * 4)),
                          ZEXT416(*(uint *)(param_4 + lVar78 * 4)),0x10);
  auVar27 = vinsertps_avx(auVar27,ZEXT416(*(uint *)(param_4 + lVar82 * 4)),0x20);
  auVar27 = vinsertps_avx(auVar27,ZEXT416(*(uint *)(param_4 + lVar55 * 4)),0x30);
  auVar28 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + lVar47 * 4)),
                          ZEXT416(*(uint *)(param_4 + lVar64 * 4)),0x10);
  auVar28 = vinsertps_avx(auVar28,ZEXT416(*(uint *)(param_4 + lVar66 * 4)),0x20);
  auVar28 = vinsertps_avx(auVar28,ZEXT416(*(uint *)(param_4 + lVar58 * 4)),0x30);
  auVar29 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + lVar63 * 4)),
                          ZEXT416(*(uint *)(param_4 + lVar81 * 4)),0x10);
  auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)(param_4 + lVar70 * 4)),0x20);
  auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)(param_4 + lVar71 * 4)),0x30);
  auVar30 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + lVar75 * 4)),
                          ZEXT416(*(uint *)(param_4 + lVar65 * 4)),0x10);
  auVar30 = vinsertps_avx(auVar30,ZEXT416(*(uint *)(param_4 + lVar72 * 4)),0x20);
  auVar30 = vinsertps_avx(auVar30,ZEXT416(*(uint *)(param_4 + lVar59 * 4)),0x30);
  auVar31 = vinsertps_avx(ZEXT416(*(uint *)(param_4 + lVar80 * 4)),
                          ZEXT416(*(uint *)(param_4 + lVar74 * 4)),0x10);
  auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(param_4 + lVar76 * 4)),0x20);
  auVar31 = vinsertps_avx(auVar31,ZEXT416(*(uint *)(param_4 + lVar79 * 4)),0x30);
  param_4 = param_4 + lVar79 * 4;
  auVar12 = vinsertps_avx(auVar12,ZEXT416(*(uint *)(uVar69 + param_4)),0x30);
  auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)(uVar50 + param_4)),0x30);
  auVar32 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + lVar43 * 4)),
                          ZEXT416(*(uint *)(param_5 + lVar56 * 4)),0x10);
  auVar32 = vinsertps_avx(auVar32,ZEXT416(*(uint *)(param_5 + lVar40 * 4)),0x20);
  auVar32 = vinsertps_avx(auVar32,ZEXT416(*(uint *)(param_5 + lVar53 * 4)),0x30);
  auVar33 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + lVar73 * 4)),
                          ZEXT416(*(uint *)(param_5 + lVar78 * 4)),0x10);
  auVar33 = vinsertps_avx(auVar33,ZEXT416(*(uint *)(param_5 + lVar82 * 4)),0x20);
  lVar52 = param_5 + lVar82 * 4;
  auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(uVar68 + lVar52)),0x20);
  auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(uVar49 + lVar52)),0x20);
  auVar33 = vinsertps_avx(auVar33,ZEXT416(*(uint *)(param_5 + lVar55 * 4)),0x30);
  lVar52 = param_5 + lVar55 * 4;
  auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(uVar69 + lVar52)),0x30);
  auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(uVar50 + lVar52)),0x30);
  auVar34 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + lVar47 * 4)),
                          ZEXT416(*(uint *)(param_5 + lVar64 * 4)),0x10);
  auVar34 = vinsertps_avx(auVar34,ZEXT416(*(uint *)(param_5 + lVar66 * 4)),0x20);
  auVar34 = vinsertps_avx(auVar34,ZEXT416(*(uint *)(param_5 + lVar58 * 4)),0x30);
  auVar35 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + lVar63 * 4)),
                          ZEXT416(*(uint *)(param_5 + lVar81 * 4)),0x10);
  auVar35 = vinsertps_avx(auVar35,ZEXT416(*(uint *)(param_5 + lVar70 * 4)),0x20);
  lVar52 = param_5 + lVar70 * 4;
  auVar16 = vinsertps_avx(auVar16,ZEXT416(*(uint *)(uVar68 + lVar52)),0x20);
  auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)(uVar49 + lVar52)),0x20);
  auVar35 = vinsertps_avx(auVar35,ZEXT416(*(uint *)(param_5 + lVar71 * 4)),0x30);
  lVar52 = param_5 + lVar71 * 4;
  auVar16 = vinsertps_avx(auVar16,ZEXT416(*(uint *)(uVar69 + lVar52)),0x30);
  auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)(uVar50 + lVar52)),0x30);
  auVar36 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + lVar75 * 4)),
                          ZEXT416(*(uint *)(param_5 + lVar65 * 4)),0x10);
  auVar36 = vinsertps_avx(auVar36,ZEXT416(*(uint *)(param_5 + lVar72 * 4)),0x20);
  auVar36 = vinsertps_avx(auVar36,ZEXT416(*(uint *)(param_5 + lVar59 * 4)),0x30);
  auVar37 = vinsertps_avx(ZEXT416(*(uint *)(param_5 + lVar80 * 4)),
                          ZEXT416(*(uint *)(param_5 + lVar74 * 4)),0x10);
  auVar37 = vinsertps_avx(auVar37,ZEXT416(*(uint *)(param_5 + lVar76 * 4)),0x20);
  lVar52 = param_5 + lVar76 * 4;
  auVar18 = vinsertps_avx(auVar18,ZEXT416(*(uint *)(uVar68 + lVar52)),0x20);
  auVar37 = vinsertps_avx(auVar37,ZEXT416(*(uint *)(param_5 + lVar79 * 4)),0x30);
  auVar19 = vinsertps_avx(auVar19,ZEXT416(*(uint *)(uVar49 + lVar52)),0x20);
  param_5 = param_5 + lVar79 * 4;
  auVar18 = vinsertps_avx(auVar18,ZEXT416(*(uint *)(uVar69 + param_5)),0x30);
  auVar19 = vinsertps_avx(auVar19,ZEXT416(*(uint *)(uVar50 + param_5)),0x30);
  local_1c8 = auVar7._0_4_;
  fStack_1c4 = auVar7._4_4_;
  fStack_1c0 = auVar7._8_4_;
  fStack_1bc = auVar7._12_4_;
  fStack_1b8 = auVar136._0_4_;
  fStack_1b4 = auVar136._4_4_;
  fStack_1b0 = auVar136._8_4_;
  fStack_1ac = auVar136._12_4_;
  local_458 = auVar151._0_4_;
  fStack_454 = auVar151._4_4_;
  fStack_450 = auVar151._8_4_;
  fStack_44c = auVar151._12_4_;
  fStack_448 = auVar93._0_4_;
  fStack_444 = auVar93._4_4_;
  fStack_440 = auVar93._8_4_;
  fStack_43c = auVar93._12_4_;
  local_1a8 = auVar8._0_4_;
  fStack_1a4 = auVar8._4_4_;
  fStack_1a0 = auVar8._8_4_;
  fStack_19c = auVar8._12_4_;
  fStack_198 = auVar108._0_4_;
  fStack_194 = auVar108._4_4_;
  fStack_190 = auVar108._8_4_;
  fStack_18c = auVar108._12_4_;
  local_108 = auVar29._0_4_;
  fStack_104 = auVar29._4_4_;
  fStack_100 = auVar29._8_4_;
  fStack_fc = auVar29._12_4_;
  fStack_f8 = auVar28._0_4_;
  fStack_f4 = auVar28._4_4_;
  fStack_f0 = auVar28._8_4_;
  fStack_ec = auVar28._12_4_;
  local_248 = auVar23._0_4_;
  fStack_244 = auVar23._4_4_;
  fStack_240 = auVar23._8_4_;
  fStack_23c = auVar23._12_4_;
  fStack_238 = auVar22._0_4_;
  fStack_234 = auVar22._4_4_;
  fStack_230 = auVar22._8_4_;
  fStack_22c = auVar22._12_4_;
  local_188 = auVar9._0_4_;
  fStack_184 = auVar9._4_4_;
  fStack_180 = auVar9._8_4_;
  fStack_17c = auVar9._12_4_;
  fStack_178 = auVar90._0_4_;
  fStack_174 = auVar90._4_4_;
  fStack_170 = auVar90._8_4_;
  fStack_16c = auVar90._12_4_;
  local_268 = auVar110._0_4_;
  fStack_264 = auVar110._4_4_;
  fStack_260 = auVar110._8_4_;
  fStack_25c = auVar110._12_4_;
  fStack_258 = auVar101._0_4_;
  fStack_254 = auVar101._4_4_;
  fStack_250 = auVar101._8_4_;
  fStack_24c = auVar101._12_4_;
  local_598 = auVar31._0_4_;
  fStack_594 = auVar31._4_4_;
  fStack_590 = auVar31._8_4_;
  fStack_58c = auVar31._12_4_;
  fStack_588 = auVar30._0_4_;
  fStack_584 = auVar30._4_4_;
  fStack_580 = auVar30._8_4_;
  fStack_57c = auVar30._12_4_;
  local_168 = auVar25._0_4_;
  fStack_164 = auVar25._4_4_;
  fStack_160 = auVar25._8_4_;
  fStack_15c = auVar25._12_4_;
  fStack_158 = auVar24._0_4_;
  fStack_154 = auVar24._4_4_;
  fStack_150 = auVar24._8_4_;
  fStack_14c = auVar24._12_4_;
  local_4f8 = auVar12._0_4_;
  fStack_4f4 = auVar12._4_4_;
  fStack_4f0 = auVar12._8_4_;
  fStack_4ec = auVar12._12_4_;
  fStack_4e8 = auVar137._0_4_;
  fStack_4e4 = auVar137._4_4_;
  fStack_4e0 = auVar137._8_4_;
  fStack_4dc = auVar137._12_4_;
  local_148 = auVar120._0_4_;
  fStack_144 = auVar120._4_4_;
  fStack_140 = auVar120._8_4_;
  fStack_13c = auVar120._12_4_;
  fStack_138 = auVar145._0_4_;
  fStack_134 = auVar145._4_4_;
  fStack_130 = auVar145._8_4_;
  fStack_12c = auVar145._12_4_;
  local_128 = auVar139._0_4_;
  fStack_124 = auVar139._4_4_;
  fStack_120 = auVar139._8_4_;
  fStack_11c = auVar139._12_4_;
  fStack_118 = auVar91._0_4_;
  fStack_114 = auVar91._4_4_;
  fStack_110 = auVar91._8_4_;
  fStack_10c = auVar91._12_4_;
  auVar139._0_4_ =
       ((float)local_378._0_4_ * local_108 + local_248) * (float)local_2b8._0_4_ +
       (float)local_298._0_4_ * (auVar21._0_4_ + auVar27._0_4_ * (float)local_378._0_4_) +
       (float)local_2d8._0_4_ * ((float)local_378._0_4_ * local_598 + local_168);
  auVar139._4_4_ =
       ((float)local_378._4_4_ * fStack_104 + fStack_244) * (float)local_2b8._4_4_ +
       (float)local_298._4_4_ * (auVar21._4_4_ + auVar27._4_4_ * (float)local_378._4_4_) +
       (float)local_2d8._4_4_ * ((float)local_378._4_4_ * fStack_594 + fStack_164);
  auVar139._8_4_ =
       (fStack_370 * fStack_100 + fStack_240) * fStack_2b0 +
       fStack_290 * (auVar21._8_4_ + auVar27._8_4_ * fStack_370) +
       fStack_2d0 * (fStack_370 * fStack_590 + fStack_160);
  auVar139._12_4_ =
       (fStack_36c * fStack_fc + fStack_23c) * fStack_2ac +
       fStack_28c * (auVar21._12_4_ + auVar27._12_4_ * fStack_36c) +
       fStack_2cc * (fStack_36c * fStack_58c + fStack_15c);
  auVar143._16_4_ =
       (fStack_368 * fStack_f8 + fStack_238) * fStack_2a8 +
       fStack_288 * (auVar20._0_4_ + auVar26._0_4_ * fStack_368) +
       fStack_2c8 * (fStack_368 * fStack_588 + fStack_158);
  auVar143._0_16_ = auVar139;
  auVar143._20_4_ =
       (fStack_364 * fStack_f4 + fStack_234) * fStack_2a4 +
       fStack_284 * (auVar20._4_4_ + auVar26._4_4_ * fStack_364) +
       fStack_2c4 * (fStack_364 * fStack_584 + fStack_154);
  auVar143._24_4_ =
       (fStack_360 * fStack_f0 + fStack_230) * fStack_2a0 +
       fStack_280 * (auVar20._8_4_ + auVar26._8_4_ * fStack_360) +
       fStack_2c0 * (fStack_360 * fStack_580 + fStack_150);
  auVar143._28_4_ =
       (fStack_35c * fStack_ec + fStack_22c) * fStack_29c +
       fStack_27c * (auVar20._12_4_ + auVar26._12_4_ * fStack_35c) +
       fStack_2bc * (fStack_35c * fStack_57c + fStack_14c);
  auVar151._0_4_ =
       (auVar147._0_4_ * (float)local_378._0_4_ + local_1c8) * (float)local_298._0_4_ +
       (auVar10._0_4_ * (float)local_378._0_4_ + local_188) * (float)local_2b8._0_4_ +
       (float)local_2d8._0_4_ * ((float)local_378._0_4_ * local_4f8 + local_148);
  auVar151._4_4_ =
       (auVar147._4_4_ * (float)local_378._4_4_ + fStack_1c4) * (float)local_298._4_4_ +
       (auVar10._4_4_ * (float)local_378._4_4_ + fStack_184) * (float)local_2b8._4_4_ +
       (float)local_2d8._4_4_ * ((float)local_378._4_4_ * fStack_4f4 + fStack_144);
  auVar151._8_4_ =
       (auVar147._8_4_ * fStack_370 + fStack_1c0) * fStack_290 +
       (auVar10._8_4_ * fStack_370 + fStack_180) * fStack_2b0 +
       fStack_2d0 * (fStack_370 * fStack_4f0 + fStack_140);
  auVar151._12_4_ =
       (auVar147._12_4_ * fStack_36c + fStack_1bc) * fStack_28c +
       (auVar10._12_4_ * fStack_36c + fStack_17c) * fStack_2ac +
       fStack_2cc * (fStack_36c * fStack_4ec + fStack_13c);
  auVar154._16_4_ =
       (auVar92._0_4_ * fStack_368 + fStack_1b8) * fStack_288 +
       (auVar109._0_4_ * fStack_368 + fStack_178) * fStack_2a8 +
       fStack_2c8 * (fStack_368 * fStack_4e8 + fStack_138);
  auVar154._0_16_ = auVar151;
  auVar154._20_4_ =
       (auVar92._4_4_ * fStack_364 + fStack_1b4) * fStack_284 +
       (auVar109._4_4_ * fStack_364 + fStack_174) * fStack_2a4 +
       fStack_2c4 * (fStack_364 * fStack_4e4 + fStack_134);
  auVar154._24_4_ =
       (auVar92._8_4_ * fStack_360 + fStack_1b0) * fStack_280 +
       (auVar109._8_4_ * fStack_360 + fStack_170) * fStack_2a0 +
       fStack_2c0 * (fStack_360 * fStack_4e0 + fStack_130);
  auVar154._28_4_ =
       (auVar92._12_4_ * fStack_35c + fStack_1ac) * fStack_27c +
       (auVar109._12_4_ * fStack_35c + fStack_16c) * fStack_29c +
       fStack_2bc * (fStack_35c * fStack_4dc + fStack_12c);
  auVar147._0_4_ =
       ((float)local_378._0_4_ * local_458 + local_1a8) * (float)local_298._0_4_ +
       (float)local_2b8._0_4_ * ((float)local_378._0_4_ * auVar11._0_4_ + local_268) +
       (float)local_2d8._0_4_ * (auVar13._0_4_ * (float)local_378._0_4_ + local_128);
  auVar147._4_4_ =
       ((float)local_378._4_4_ * fStack_454 + fStack_1a4) * (float)local_298._4_4_ +
       (float)local_2b8._4_4_ * ((float)local_378._4_4_ * auVar11._4_4_ + fStack_264) +
       (float)local_2d8._4_4_ * (auVar13._4_4_ * (float)local_378._4_4_ + fStack_124);
  auVar147._8_4_ =
       (fStack_370 * fStack_450 + fStack_1a0) * fStack_290 +
       fStack_2b0 * (fStack_370 * auVar11._8_4_ + fStack_260) +
       fStack_2d0 * (auVar13._8_4_ * fStack_370 + fStack_120);
  auVar147._12_4_ =
       (fStack_36c * fStack_44c + fStack_19c) * fStack_28c +
       fStack_2ac * (fStack_36c * auVar11._12_4_ + fStack_25c) +
       fStack_2cc * (auVar13._12_4_ * fStack_36c + fStack_11c);
  auVar149._16_4_ =
       (fStack_368 * fStack_448 + fStack_198) * fStack_288 +
       fStack_2a8 * (fStack_368 * auVar119._0_4_ + fStack_258) +
       fStack_2c8 * (auVar138._0_4_ * fStack_368 + fStack_118);
  auVar149._0_16_ = auVar147;
  auVar149._20_4_ =
       (fStack_364 * fStack_444 + fStack_194) * fStack_284 +
       fStack_2a4 * (fStack_364 * auVar119._4_4_ + fStack_254) +
       fStack_2c4 * (auVar138._4_4_ * fStack_364 + fStack_114);
  auVar149._24_4_ =
       (fStack_360 * fStack_440 + fStack_190) * fStack_280 +
       fStack_2a0 * (fStack_360 * auVar119._8_4_ + fStack_250) +
       fStack_2c0 * (auVar138._8_4_ * fStack_360 + fStack_110);
  auVar149._28_4_ =
       (fStack_35c * fStack_43c + fStack_18c) * fStack_27c +
       fStack_29c * (fStack_35c * auVar119._12_4_ + fStack_24c) +
       fStack_2bc * (auVar138._12_4_ * fStack_35c + fStack_10c);
  local_578 = auVar33._0_4_;
  fStack_574 = auVar33._4_4_;
  fStack_570 = auVar33._8_4_;
  fStack_56c = auVar33._12_4_;
  fStack_568 = auVar32._0_4_;
  fStack_564 = auVar32._4_4_;
  fStack_560 = auVar32._8_4_;
  fStack_55c = auVar32._12_4_;
  local_678 = auVar37._0_4_;
  fStack_674 = auVar37._4_4_;
  fStack_670 = auVar37._8_4_;
  fStack_66c = auVar37._12_4_;
  fStack_668 = auVar36._0_4_;
  fStack_664 = auVar36._4_4_;
  fStack_660 = auVar36._8_4_;
  fStack_65c = auVar36._12_4_;
  auVar110._0_4_ =
       (float)local_298._0_4_ * local_578 + (float)local_2b8._0_4_ * auVar35._0_4_ +
       (float)local_2d8._0_4_ * local_678;
  auVar110._4_4_ =
       (float)local_298._4_4_ * fStack_574 + (float)local_2b8._4_4_ * auVar35._4_4_ +
       (float)local_2d8._4_4_ * fStack_674;
  auVar110._8_4_ = fStack_290 * fStack_570 + fStack_2b0 * auVar35._8_4_ + fStack_2d0 * fStack_670;
  auVar110._12_4_ = fStack_28c * fStack_56c + fStack_2ac * auVar35._12_4_ + fStack_2cc * fStack_66c;
  auVar117._16_4_ = fStack_288 * fStack_568 + fStack_2a8 * auVar34._0_4_ + fStack_2c8 * fStack_668;
  auVar117._0_16_ = auVar110;
  auVar117._20_4_ = fStack_284 * fStack_564 + fStack_2a4 * auVar34._4_4_ + fStack_2c4 * fStack_664;
  auVar117._24_4_ = fStack_280 * fStack_560 + fStack_2a0 * auVar34._8_4_ + fStack_2c0 * fStack_660;
  auVar117._28_4_ = fStack_27c * fStack_55c + fStack_29c * auVar34._12_4_ + fStack_2bc * fStack_65c;
  auVar120._0_4_ =
       auVar14._0_4_ * (float)local_298._0_4_ + (float)local_2b8._0_4_ * auVar16._0_4_ +
       (float)local_2d8._0_4_ * auVar18._0_4_;
  auVar120._4_4_ =
       auVar14._4_4_ * (float)local_298._4_4_ + (float)local_2b8._4_4_ * auVar16._4_4_ +
       (float)local_2d8._4_4_ * auVar18._4_4_;
  auVar120._8_4_ =
       auVar14._8_4_ * fStack_290 + fStack_2b0 * auVar16._8_4_ + fStack_2d0 * auVar18._8_4_;
  auVar120._12_4_ =
       auVar14._12_4_ * fStack_28c + fStack_2ac * auVar16._12_4_ + fStack_2cc * auVar18._12_4_;
  auVar124._16_4_ =
       auVar2._0_4_ * fStack_288 + fStack_2a8 * auVar83._0_4_ + fStack_2c8 * auVar5._0_4_;
  auVar124._0_16_ = auVar120;
  auVar124._20_4_ =
       auVar2._4_4_ * fStack_284 + fStack_2a4 * auVar83._4_4_ + fStack_2c4 * auVar5._4_4_;
  auVar124._24_4_ =
       auVar2._8_4_ * fStack_280 + fStack_2a0 * auVar83._8_4_ + fStack_2c0 * auVar5._8_4_;
  auVar124._28_4_ =
       auVar2._12_4_ * fStack_27c + fStack_29c * auVar83._12_4_ + fStack_2bc * auVar5._12_4_;
  local_5b8 = auVar19._0_4_;
  fStack_5b4 = auVar19._4_4_;
  fStack_5b0 = auVar19._8_4_;
  fStack_5ac = auVar19._12_4_;
  fStack_5a8 = auVar6._0_4_;
  fStack_5a4 = auVar6._4_4_;
  fStack_5a0 = auVar6._8_4_;
  fStack_59c = auVar6._12_4_;
  auVar83._0_4_ =
       auVar15._0_4_ * (float)local_298._0_4_ + (float)local_2b8._0_4_ * auVar17._0_4_ +
       (float)local_2d8._0_4_ * local_5b8;
  auVar83._4_4_ =
       auVar15._4_4_ * (float)local_298._4_4_ + (float)local_2b8._4_4_ * auVar17._4_4_ +
       (float)local_2d8._4_4_ * fStack_5b4;
  auVar83._8_4_ = auVar15._8_4_ * fStack_290 + fStack_2b0 * auVar17._8_4_ + fStack_2d0 * fStack_5b0;
  auVar83._12_4_ =
       auVar15._12_4_ * fStack_28c + fStack_2ac * auVar17._12_4_ + fStack_2cc * fStack_5ac;
  auVar89._16_4_ = auVar3._0_4_ * fStack_288 + fStack_2a8 * auVar4._0_4_ + fStack_2c8 * fStack_5a8;
  auVar89._0_16_ = auVar83;
  auVar89._20_4_ = auVar3._4_4_ * fStack_284 + fStack_2a4 * auVar4._4_4_ + fStack_2c4 * fStack_5a4;
  auVar89._24_4_ = auVar3._8_4_ * fStack_280 + fStack_2a0 * auVar4._8_4_ + fStack_2c0 * fStack_5a0;
  auVar89._28_4_ = auVar3._12_4_ * fStack_27c + fStack_29c * auVar4._12_4_ + fStack_2bc * fStack_59c
  ;
  pauVar77 = (undefined1 (*) [16])(param_1 + uVar54 * 0xc);
  auVar101 = auVar154._16_16_;
  auVar90 = auVar143._16_16_;
  auVar136 = auVar117._16_16_;
  cVar61 = (char)uVar39;
  auVar108 = auVar124._16_16_;
  if (cVar61 == -1) {
    auVar99._16_16_ = auVar151;
    auVar99._0_16_ = auVar139;
    auVar85 = vshufpd_avx(auVar143,auVar99,2);
    auVar102 = vperm2f128_avx(auVar149,auVar149,1);
    auVar94 = vshufps_avx(auVar149,auVar102,0x30);
    auVar94 = vshufps_avx(auVar102,auVar94,0x29);
    auVar145 = vshufpd_avx(auVar151,auVar101,1);
    auVar94 = vblendps_avx(auVar94,ZEXT1632(auVar145),7);
    auVar95 = vperm2f128_avx(auVar85,auVar85,1);
    auVar95 = vblendps_avx(auVar85,auVar95,0x44);
    auVar86 = vpermilps_avx(auVar95,
                            ___ymm_0000000000000006000000000000000700000001000000000000000200000000)
    ;
    auVar105 = vperm2f128_avx(auVar94,auVar94,1);
    auVar95 = vunpcklpd_avx(auVar105,auVar149);
    auVar95 = vshufps_avx(auVar102,auVar95,0x24);
    auVar95 = vblendps_avx(auVar86,auVar95,0xa4);
    pauVar77[1] = auVar95._16_16_;
    *pauVar77 = auVar95._0_16_;
    auVar86 = ___ymm_0000000000000007000000000000000000000000000000010000000000000000;
    auVar95 = vpermilps_avx(auVar94,
                            ___ymm_0000000000000007000000000000000000000000000000010000000000000000)
    ;
    auVar94 = vshufps_avx(auVar105,auVar105,0xa9);
    auVar94 = vblendps_avx(auVar94,auVar95,0x44);
    auVar95 = vshufpd_avx(auVar85,auVar85,1);
    auVar94 = vblendps_avx(auVar94,auVar95,0x92);
    pauVar77[3] = auVar94._16_16_;
    pauVar77[2] = auVar94._0_16_;
    auVar90 = vshufps_avx(auVar90,auVar101,0x9e);
    auVar101 = vshufps_avx(auVar101,auVar101,0xff);
    auVar135._16_16_ = auVar101;
    auVar135._0_16_ = auVar90;
    auVar95 = vperm2f128_avx(auVar149,ZEXT1632(auVar90),0x21);
    auVar94 = vblendps_avx(auVar135,auVar149,0xe0);
    auVar95 = vshufps_avx(auVar95,auVar94,0x21);
    auVar94 = vshufps_avx(auVar95,auVar94,0xc2);
    pauVar77[5] = auVar94._16_16_;
    pauVar77[4] = auVar94._0_16_;
    auVar100._16_16_ = auVar120;
    auVar100._0_16_ = auVar110;
    auVar85 = vshufpd_avx(auVar117,auVar100,2);
    auVar102 = vperm2f128_avx(auVar89,auVar89,1);
    auVar94 = vshufps_avx(auVar89,auVar102,0x30);
    auVar94 = vshufps_avx(auVar102,auVar94,0x29);
    auVar90 = vshufpd_avx(auVar120,auVar108,1);
    auVar94 = vblendps_avx(auVar94,ZEXT1632(auVar90),7);
    auVar95 = vperm2f128_avx(auVar85,auVar85,1);
    auVar95 = vblendps_avx(auVar85,auVar95,0x44);
    auVar105 = vpermilps_avx(auVar95,auVar84);
    auVar95 = vperm2f128_avx(auVar94,auVar94,1);
    auVar84 = vunpcklpd_avx(auVar95,auVar89);
    auVar84 = vshufps_avx(auVar102,auVar84,0x24);
    auVar84 = vblendps_avx(auVar105,auVar84,0xa4);
    *(undefined1 (*) [16])(param_2 + 0x10 + uVar54 * 0xc) = auVar84._16_16_;
    *(undefined1 (*) [16])(param_2 + uVar54 * 0xc) = auVar84._0_16_;
    auVar94 = vpermilps_avx(auVar94,auVar86);
    auVar84 = vshufps_avx(auVar95,auVar95,0xa9);
    auVar84 = vblendps_avx(auVar84,auVar94,0x44);
    auVar94 = vshufpd_avx(auVar85,auVar85,1);
    auVar84 = vblendps_avx(auVar84,auVar94,0x92);
    *(undefined1 (*) [16])(param_2 + 0x30 + uVar54 * 0xc) = auVar84._16_16_;
    *(undefined1 (*) [16])(param_2 + 0x20 + uVar54 * 0xc) = auVar84._0_16_;
    auVar136 = vshufps_avx(auVar136,auVar108,0x9e);
    auVar108 = vshufps_avx(auVar108,auVar108,0xff);
    auVar107._16_16_ = auVar108;
    auVar107._0_16_ = auVar136;
    auVar94 = vperm2f128_avx(auVar89,ZEXT1632(auVar136),0x21);
    auVar84 = vblendps_avx(auVar107,auVar89,0xe0);
    auVar94 = vshufps_avx(auVar94,auVar84,0x21);
    auVar84 = vshufps_avx(auVar94,auVar84,0xc2);
    *(undefined1 (*) [16])(param_2 + 0x50 + uVar54 * 0xc) = auVar84._16_16_;
    *(undefined1 (*) [16])(param_2 + 0x40 + uVar54 * 0xc) = auVar84._0_16_;
  }
  else {
    auVar91 = auVar149._16_16_;
    auVar145 = auVar89._16_16_;
    if ((uVar39 & 1) != 0) {
      *(float *)*pauVar77 = auVar139._0_4_;
    }
    if ((uVar39 & 2) != 0) {
      uVar42 = vextractps_avx(auVar139,1);
      *(undefined4 *)(*pauVar77 + 0xc) = uVar42;
    }
    if ((uVar39 & 4) != 0) {
      uVar42 = vextractps_avx(auVar139,2);
      *(undefined4 *)(pauVar77[1] + 8) = uVar42;
    }
    if ((uVar39 & 8) != 0) {
      uVar42 = vextractps_avx(auVar139,3);
      *(undefined4 *)(pauVar77[2] + 4) = uVar42;
    }
    if ((uVar39 & 0x10) != 0) {
      *(float *)pauVar77[3] = auVar143._16_4_;
    }
    if ((uVar39 & 0x20) != 0) {
      uVar42 = vextractps_avx(auVar90,1);
      *(undefined4 *)(pauVar77[3] + 0xc) = uVar42;
    }
    if ((uVar39 & 0x40) != 0) {
      uVar42 = vextractps_avx(auVar90,2);
      *(undefined4 *)(pauVar77[4] + 8) = uVar42;
    }
    if (cVar61 < '\0') {
      uVar42 = vextractps_avx(auVar90,3);
      *(undefined4 *)(pauVar77[5] + 4) = uVar42;
    }
    if ((uVar39 & 1) != 0) {
      *(float *)(*pauVar77 + 4) = auVar151._0_4_;
    }
    if ((uVar39 & 2) != 0) {
      uVar42 = vextractps_avx(auVar151,1);
      *(undefined4 *)pauVar77[1] = uVar42;
    }
    if ((uVar39 & 4) != 0) {
      uVar42 = vextractps_avx(auVar151,2);
      *(undefined4 *)(pauVar77[1] + 0xc) = uVar42;
    }
    if ((uVar39 & 8) != 0) {
      uVar42 = vextractps_avx(auVar151,3);
      *(undefined4 *)(pauVar77[2] + 8) = uVar42;
    }
    if ((uVar39 & 0x10) != 0) {
      *(float *)(pauVar77[3] + 4) = auVar154._16_4_;
    }
    if ((uVar39 & 0x20) != 0) {
      uVar42 = vextractps_avx(auVar101,1);
      *(undefined4 *)pauVar77[4] = uVar42;
    }
    if ((uVar39 & 0x40) != 0) {
      uVar42 = vextractps_avx(auVar101,2);
      *(undefined4 *)(pauVar77[4] + 0xc) = uVar42;
    }
    if (cVar61 < '\0') {
      uVar42 = vextractps_avx(auVar101,3);
      *(undefined4 *)(pauVar77[5] + 8) = uVar42;
    }
    if ((uVar39 & 1) != 0) {
      *(float *)(*pauVar77 + 8) = auVar147._0_4_;
    }
    if ((uVar39 & 2) != 0) {
      uVar42 = vextractps_avx(auVar147,1);
      *(undefined4 *)(pauVar77[1] + 4) = uVar42;
    }
    if ((uVar39 & 4) != 0) {
      uVar42 = vextractps_avx(auVar147,2);
      *(undefined4 *)pauVar77[2] = uVar42;
    }
    if ((uVar39 & 8) != 0) {
      uVar42 = vextractps_avx(auVar147,3);
      *(undefined4 *)(pauVar77[2] + 0xc) = uVar42;
    }
    if ((uVar39 & 0x10) != 0) {
      *(float *)(pauVar77[3] + 8) = auVar149._16_4_;
    }
    if ((uVar39 & 0x20) != 0) {
      uVar42 = vextractps_avx(auVar91,1);
      *(undefined4 *)(pauVar77[4] + 4) = uVar42;
    }
    if ((uVar39 & 0x40) != 0) {
      uVar42 = vextractps_avx(auVar91,2);
      *(undefined4 *)pauVar77[5] = uVar42;
    }
    if (cVar61 < '\0') {
      uVar42 = vextractps_avx(auVar91,3);
      *(undefined4 *)(pauVar77[5] + 0xc) = uVar42;
    }
    uVar38 = param_2 + uVar54 * 0xc;
    if ((uVar39 & 1) != 0) {
      *(float *)uVar38 = auVar110._0_4_;
    }
    if ((uVar39 & 2) != 0) {
      fVar1 = (float)vextractps_avx(auVar110,1);
      *(float *)(uVar38 + 0xc) = fVar1;
    }
    if ((uVar39 & 4) != 0) {
      fVar1 = (float)vextractps_avx(auVar110,2);
      *(float *)(uVar38 + 0x18) = fVar1;
    }
    if ((uVar39 & 8) != 0) {
      fVar1 = (float)vextractps_avx(auVar110,3);
      *(float *)(uVar38 + 0x24) = fVar1;
    }
    if ((uVar39 & 0x10) != 0) {
      *(float *)(uVar38 + 0x30) = auVar117._16_4_;
    }
    if ((uVar39 & 0x20) != 0) {
      fVar1 = (float)vextractps_avx(auVar136,1);
      *(float *)(uVar38 + 0x3c) = fVar1;
    }
    if ((uVar39 & 0x40) != 0) {
      fVar1 = (float)vextractps_avx(auVar136,2);
      *(float *)(uVar38 + 0x48) = fVar1;
    }
    if (cVar61 < '\0') {
      fVar1 = (float)vextractps_avx(auVar136,3);
      *(float *)(uVar38 + 0x54) = fVar1;
    }
    if ((uVar39 & 1) != 0) {
      *(float *)(uVar38 + 4) = auVar120._0_4_;
    }
    if ((uVar39 & 2) != 0) {
      fVar1 = (float)vextractps_avx(auVar120,1);
      *(float *)(uVar38 + 0x10) = fVar1;
    }
    if ((uVar39 & 4) != 0) {
      fVar1 = (float)vextractps_avx(auVar120,2);
      *(float *)(uVar38 + 0x1c) = fVar1;
    }
    if ((uVar39 & 8) != 0) {
      fVar1 = (float)vextractps_avx(auVar120,3);
      *(float *)(uVar38 + 0x28) = fVar1;
    }
    if ((uVar39 & 0x10) != 0) {
      *(float *)(uVar38 + 0x34) = auVar124._16_4_;
    }
    if ((uVar39 & 0x20) != 0) {
      fVar1 = (float)vextractps_avx(auVar108,1);
      *(float *)(uVar38 + 0x40) = fVar1;
    }
    if ((uVar39 & 0x40) != 0) {
      fVar1 = (float)vextractps_avx(auVar108,2);
      *(float *)(uVar38 + 0x4c) = fVar1;
    }
    if (cVar61 < '\0') {
      fVar1 = (float)vextractps_avx(auVar108,3);
      *(float *)(uVar38 + 0x58) = fVar1;
    }
    if ((uVar39 & 1) != 0) {
      *(float *)(uVar38 + 8) = auVar83._0_4_;
    }
    if ((uVar39 & 2) != 0) {
      fVar1 = (float)vextractps_avx(auVar83,1);
      *(float *)(uVar38 + 0x14) = fVar1;
    }
    if ((uVar39 & 4) != 0) {
      fVar1 = (float)vextractps_avx(auVar83,2);
      *(float *)(uVar38 + 0x20) = fVar1;
    }
    if ((uVar39 & 8) != 0) {
      fVar1 = (float)vextractps_avx(auVar83,3);
      *(float *)(uVar38 + 0x2c) = fVar1;
    }
    if ((uVar39 & 0x10) != 0) {
      *(float *)(uVar38 + 0x38) = auVar89._16_4_;
    }
    if ((uVar39 & 0x20) != 0) {
      fVar1 = (float)vextractps_avx(auVar145,1);
      *(float *)(uVar38 + 0x44) = fVar1;
    }
    if ((uVar39 & 0x40) != 0) {
      fVar1 = (float)vextractps_avx(auVar145,2);
      *(float *)(uVar38 + 0x50) = fVar1;
    }
    if (cVar61 < '\0') {
      fVar1 = (float)vextractps_avx(auVar145,3);
      *(float *)(uVar38 + 0x5c) = fVar1;
    }
  }
  return;
}


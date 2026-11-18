// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// PostIterationUpdates___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector4f_5D__3E_CunfCuniCuni_avx @ 140139c80

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PostIterationUpdates___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector4f_5D__3E_CunfCuniCuni_avx
               (longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,uint param_5,
               uint param_6)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  longlong unaff_RSI;
  undefined4 uVar5;
  undefined1 (*pauVar6) [16];
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined1 (*pauVar11) [16];
  undefined4 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [16];
  undefined1 auVar18 [32];
  undefined1 auVar23 [16];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 in_ZMM3 [64];
  uint uVar37;
  undefined1 auVar38 [16];
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar47 [16];
  undefined1 auVar42 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [16];
  undefined1 auVar55 [32];
  undefined1 auVar56 [16];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
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
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  
  auVar29 = ___ymm_0000000000000006000000000000000700000001000000000000000200000000;
  auVar30 = in_ZMM3._0_16_;
  uVar3 = (ulonglong)param_5;
  uVar9 = param_6 - param_5;
  pauVar11 = (undefined1 (*) [16])0x0;
  uVar2 = uVar9 + 7;
  if (-1 < (int)uVar9) {
    uVar2 = uVar9;
  }
  iVar7 = ((uVar2 & 0xfffffff8) - uVar9) + param_6;
  if ((int)param_5 < iVar7) {
    auVar24 = vshufps_avx(auVar30,auVar30,0);
    auVar14._16_16_ = auVar24;
    auVar14._0_16_ = auVar24;
    uVar3 = (ulonglong)(int)param_5;
    pauVar11 = (undefined1 (*) [16])(uVar3 * 0x10 + param_3 + 0x60);
    unaff_RSI = uVar3 * 0xc + 0x40;
    do {
      auVar55._16_16_ = pauVar11[-2];
      auVar55._0_16_ = pauVar11[-6];
      auVar57._16_16_ = pauVar11[-1];
      auVar57._0_16_ = pauVar11[-5];
      auVar61._16_16_ = *pauVar11;
      auVar61._0_16_ = pauVar11[-4];
      auVar64._16_16_ = pauVar11[1];
      auVar64._0_16_ = pauVar11[-3];
      auVar58 = vunpcklps_avx(auVar55,auVar57);
      auVar34 = vunpckhps_avx(auVar55,auVar57);
      auVar21 = vunpcklps_avx(auVar61,auVar64);
      auVar20 = vunpckhps_avx(auVar61,auVar64);
      auVar24 = *(undefined1 (*) [16])(param_2 + -0x40 + unaff_RSI);
      auVar23 = *(undefined1 (*) [16])(param_2 + -0x30 + unaff_RSI);
      auVar13 = *(undefined1 (*) [16])(param_2 + -0x10 + unaff_RSI);
      auVar65._16_16_ = auVar23;
      auVar65._0_16_ = auVar24;
      auVar66._16_16_ = auVar13;
      auVar66._0_16_ = *(undefined1 (*) [16])(param_2 + -0x20 + unaff_RSI);
      auVar25 = *(undefined1 (*) [16])(param_2 + 0x10 + unaff_RSI);
      uVar4 = *(undefined4 *)(param_2 + -0x18 + unaff_RSI);
      auVar18._20_4_ = uVar4;
      auVar18._16_4_ = uVar4;
      auVar18._24_4_ = uVar4;
      auVar18._28_4_ = uVar4;
      uVar4 = *(undefined4 *)(param_2 + -0x1c + unaff_RSI);
      auVar18._4_4_ = uVar4;
      auVar18._0_4_ = uVar4;
      auVar18._8_4_ = uVar4;
      auVar18._12_4_ = uVar4;
      auVar68._16_16_ = auVar24;
      auVar68._0_16_ = auVar23;
      auVar19 = vblendps_avx(auVar65,auVar68,0x24);
      auVar19 = vpermilps_avx(auVar19,
                              ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                             );
      auVar19 = vblendps_avx(auVar19,auVar18,0x88);
      auVar69._16_16_ = auVar25;
      auVar69._0_16_ = *(undefined1 (*) [16])(param_2 + unaff_RSI);
      auVar32._16_16_ = *(undefined1 (*) [16])(param_2 + unaff_RSI);
      auVar32._0_16_ = auVar25;
      uVar4 = *(undefined4 *)(param_2 + -0xc + unaff_RSI);
      auVar71._20_4_ = uVar4;
      auVar71._16_4_ = uVar4;
      auVar71._24_4_ = uVar4;
      auVar71._28_4_ = uVar4;
      auVar24 = vshufps_avx(auVar13,auVar13,0xec);
      auVar71._0_16_ = auVar24;
      auVar18 = vblendps_avx(auVar32,auVar69,0x44);
      auVar18 = vpermilps_avx(auVar18,
                              ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                             );
      auVar18 = vblendps_avx(auVar18,auVar71,0x13);
      auVar72._16_16_ = auVar18._0_16_;
      auVar72._0_16_ = auVar19._0_16_;
      auVar55 = vperm2f128_avx(auVar19,auVar18,0x31);
      auVar19 = vblendps_avx(auVar66,auVar65,0x24);
      auVar19 = vshufps_avx(ZEXT1632(auVar23),auVar19,0x21);
      auVar19 = vshufps_avx(auVar19,auVar66,0xc2);
      auVar18 = vshufps_avx(auVar32,auVar69,0xc4);
      auVar61 = vunpcklpd_avx(auVar58,auVar21);
      auVar19 = vblendps_avx(auVar19,auVar18,0xe0);
      auVar57 = vunpckhpd_avx(auVar58,auVar21);
      auVar64 = vunpcklpd_avx(auVar34,auVar20);
      auVar18 = vsubps_avx(auVar61,auVar72);
      auVar20 = vdivps_avx(auVar18,auVar14);
      auVar18 = vsubps_avx(auVar57,auVar55);
      auVar18 = vdivps_avx(auVar18,auVar14);
      auVar19 = vsubps_avx(auVar64,auVar19);
      auVar55 = vdivps_avx(auVar19,auVar14);
      auVar33._16_16_ = auVar18._0_16_;
      auVar33._0_16_ = auVar20._0_16_;
      auVar26 = vshufpd_avx(auVar20,auVar33,2);
      auVar23 = auVar18._16_16_;
      auVar24 = vshufpd_avx(auVar18._0_16_,auVar23,1);
      auVar32 = vperm2f128_avx(auVar55,auVar55,1);
      auVar19 = vshufps_avx(auVar55,auVar32,0x30);
      auVar19 = vshufps_avx(auVar32,auVar19,0x29);
      auVar19 = vblendps_avx(auVar19,ZEXT1632(auVar24),7);
      auVar33 = vperm2f128_avx(auVar19,auVar19,1);
      auVar18 = vunpcklpd_avx(auVar33,auVar55);
      auVar32 = vshufps_avx(auVar32,auVar18,0x24);
      auVar18 = vperm2f128_avx(auVar26,auVar26,1);
      auVar18 = vblendps_avx(auVar26,auVar18,0x44);
      auVar18 = vpermilps_avx(auVar18,auVar29);
      auVar18 = vblendps_avx(auVar18,auVar32,0xa4);
      *(undefined1 (*) [16])(param_1 + -0x30 + unaff_RSI) = auVar18._16_16_;
      *(undefined1 (*) [16])(param_1 + -0x40 + unaff_RSI) = auVar18._0_16_;
      auVar32 = ___ymm_0000000000000007000000000000000000000000000000010000000000000000;
      auVar18 = vpermilps_avx(auVar19,
                              ___ymm_0000000000000007000000000000000000000000000000010000000000000000
                             );
      auVar19 = vshufps_avx(auVar33,auVar33,0xa9);
      auVar19 = vblendps_avx(auVar19,auVar18,0x44);
      auVar18 = vshufpd_avx(auVar26,auVar26,1);
      auVar19 = vblendps_avx(auVar19,auVar18,0x92);
      *(undefined1 (*) [16])(param_1 + -0x10 + unaff_RSI) = auVar19._16_16_;
      *(undefined1 (*) [16])(param_1 + -0x20 + unaff_RSI) = auVar19._0_16_;
      auVar24 = vshufps_avx(auVar20._16_16_,auVar23,0x9e);
      auVar23 = vshufps_avx(auVar23,auVar23,0xff);
      auVar26._16_16_ = auVar23;
      auVar26._0_16_ = auVar24;
      auVar18 = vperm2f128_avx(auVar55,ZEXT1632(auVar24),0x21);
      auVar19 = vblendps_avx(auVar26,auVar55,0xe0);
      auVar18 = vshufps_avx(auVar18,auVar19,0x21);
      auVar19 = vshufps_avx(auVar18,auVar19,0xc2);
      *(undefined1 (*) [16])(param_1 + 0x10 + unaff_RSI) = auVar19._16_16_;
      *(undefined1 (*) [16])(param_1 + unaff_RSI) = auVar19._0_16_;
      auVar19._16_16_ = auVar57._0_16_;
      auVar19._0_16_ = auVar61._0_16_;
      auVar20 = vshufpd_avx(auVar58,auVar19,2);
      auVar23 = auVar57._16_16_;
      auVar24 = vshufpd_avx(auVar57._0_16_,auVar23,1);
      auVar55 = vperm2f128_avx(auVar64,auVar64,1);
      auVar19 = vshufps_avx(auVar64,auVar55,0x30);
      auVar19 = vshufps_avx(auVar55,auVar19,0x29);
      auVar19 = vblendps_avx(auVar19,ZEXT1632(auVar24),7);
      auVar26 = vperm2f128_avx(auVar19,auVar19,1);
      auVar18 = vunpcklpd_avx(auVar26,auVar34);
      auVar55 = vshufps_avx(auVar55,auVar18,0x24);
      auVar18 = vperm2f128_avx(auVar20,auVar20,1);
      auVar18 = vblendps_avx(auVar20,auVar18,0x44);
      auVar18 = vpermilps_avx(auVar18,auVar29);
      auVar18 = vblendps_avx(auVar18,auVar55,0xa4);
      *(undefined1 (*) [16])(param_2 + -0x30 + unaff_RSI) = auVar18._16_16_;
      *(undefined1 (*) [16])(param_2 + -0x40 + unaff_RSI) = auVar18._0_16_;
      auVar18 = vpermilps_avx(auVar19,auVar32);
      auVar19 = vshufps_avx(auVar26,auVar26,0xa9);
      auVar19 = vblendps_avx(auVar19,auVar18,0x44);
      auVar18 = vshufpd_avx(auVar20,auVar20,1);
      auVar19 = vblendps_avx(auVar19,auVar18,0x92);
      *(undefined1 (*) [16])(param_2 + -0x10 + unaff_RSI) = auVar19._16_16_;
      *(undefined1 (*) [16])(param_2 + -0x20 + unaff_RSI) = auVar19._0_16_;
      auVar24 = vshufps_avx(auVar61._16_16_,auVar23,0x9e);
      auVar23 = vshufps_avx(auVar23,auVar23,0xff);
      auVar20._16_16_ = auVar23;
      auVar20._0_16_ = auVar24;
      auVar19 = vblendps_avx(auVar20,auVar64,0xe0);
      auVar18 = vperm2f128_avx(auVar34,auVar21,0x31);
      auVar18 = vshufps_avx(auVar18,auVar19,0x21);
      auVar19 = vshufps_avx(auVar18,auVar19,0xc2);
      *(undefined1 (*) [16])(param_2 + 0x10 + unaff_RSI) = auVar19._16_16_;
      *(undefined1 (*) [16])(param_2 + unaff_RSI) = auVar19._0_16_;
      uVar3 = uVar3 + 8;
      pauVar11 = pauVar11 + 8;
      unaff_RSI = unaff_RSI + 0x60;
    } while ((longlong)uVar3 < (longlong)iVar7);
  }
  auVar29 = ___ymm_0000000000000006000000000000000700000001000000000000000200000000;
  uVar2 = (uint)uVar3;
  if ((int)uVar2 < (int)param_6) {
    auVar13 = vpshufd_avx(ZEXT416(uVar2),0);
    auVar24._0_4_ = auVar13._0_4_ + (int)__xmm_00000003000000020000000100000000;
    auVar24._4_4_ = auVar13._4_4_ + __xmm_00000003000000020000000100000000._4_4_;
    auVar24._8_4_ = auVar13._8_4_ + _UNK_150631e08;
    auVar24._12_4_ = auVar13._12_4_ + _UNK_150631e0c;
    auVar23._0_4_ = auVar13._0_4_ + ___xmm_00000007000000060000000500000004;
    auVar23._4_4_ = auVar13._4_4_ + _UNK_150631eb4;
    auVar23._8_4_ = auVar13._8_4_ + _UNK_150631eb8;
    auVar23._12_4_ = auVar13._12_4_ + _UNK_150631ebc;
    auVar31 = vpshufd_avx(ZEXT416(param_6),0);
    lVar8 = (longlong)(int)uVar2;
    pauVar6 = (undefined1 (*) [16])(param_3 + lVar8 * 0x10);
    auVar13 = vpcmpgtd_avx(auVar31,auVar23);
    auVar25 = vpcmpgtd_avx(auVar31,auVar24);
    auVar34._16_16_ = auVar13;
    auVar34._0_16_ = auVar25;
    uVar2 = vmovmskps_avx(auVar34);
    if (uVar2 == 0xff) {
      auVar16._16_16_ = pauVar6[4];
      auVar16._0_16_ = *pauVar6;
      auVar22._16_16_ = pauVar6[5];
      auVar22._0_16_ = pauVar6[1];
      auVar28._16_16_ = pauVar6[6];
      auVar28._0_16_ = pauVar6[2];
      auVar35._16_16_ = pauVar6[7];
      auVar35._0_16_ = pauVar6[3];
      auVar18 = vunpcklps_avx(auVar16,auVar22);
      auVar14 = vunpckhps_avx(auVar16,auVar22);
      auVar20 = vunpcklps_avx(auVar28,auVar35);
      auVar19 = vunpckhps_avx(auVar28,auVar35);
      auVar15 = vunpcklpd_avx(auVar14,auVar19);
      auVar27 = vunpcklpd_avx(auVar18,auVar20);
      auVar21 = vunpckhpd_avx(auVar18,auVar20);
      auVar24 = *(undefined1 (*) [16])(param_2 + lVar8 * 0xc);
      auVar23 = *(undefined1 (*) [16])(param_2 + 0x10 + lVar8 * 0xc);
      auVar13 = *(undefined1 (*) [16])(param_2 + 0x30 + lVar8 * 0xc);
      auVar25 = *(undefined1 (*) [16])(param_2 + 0x50 + lVar8 * 0xc);
      auVar31 = *(undefined1 (*) [16])(param_2 + 0x40 + lVar8 * 0xc);
      uVar4 = *(undefined4 *)(param_2 + 0x28 + lVar8 * 0xc);
      auVar40._20_4_ = uVar4;
      auVar40._16_4_ = uVar4;
      auVar40._24_4_ = uVar4;
      auVar40._28_4_ = uVar4;
      uVar4 = *(undefined4 *)(param_2 + 0x24 + lVar8 * 0xc);
      auVar40._4_4_ = uVar4;
      auVar40._0_4_ = uVar4;
      auVar40._8_4_ = uVar4;
      auVar40._12_4_ = uVar4;
      uVar4 = *(undefined4 *)(param_2 + 0x34 + lVar8 * 0xc);
      auVar52._20_4_ = uVar4;
      auVar52._16_4_ = uVar4;
      auVar52._24_4_ = uVar4;
      auVar52._28_4_ = uVar4;
      pauVar11 = (undefined1 (*) [16])(param_2 + lVar8 * 0xc);
      auVar67._16_16_ = auVar23;
      auVar67._0_16_ = auVar24;
      auVar70._16_16_ = auVar13;
      auVar70._0_16_ = *(undefined1 (*) [16])(param_2 + 0x20 + lVar8 * 0xc);
      auVar36._16_16_ = auVar24;
      auVar36._0_16_ = auVar23;
      auVar14 = vblendps_avx(auVar67,auVar36,0x24);
      auVar14 = vpermilps_avx(auVar14,
                              ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                             );
      auVar62._16_16_ = auVar25;
      auVar62._0_16_ = auVar31;
      auVar14 = vblendps_avx(auVar14,auVar40,0x88);
      auVar59._16_16_ = auVar31;
      auVar59._0_16_ = auVar25;
      auVar19 = vblendps_avx(auVar59,auVar62,0x44);
      auVar19 = vpermilps_avx(auVar19,
                              ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                             );
      auVar24 = vshufps_avx(auVar13,auVar13,0xec);
      auVar52._0_16_ = auVar24;
      auVar19 = vblendps_avx(auVar19,auVar52,0x13);
      auVar39._16_16_ = auVar19._0_16_;
      auVar39._0_16_ = auVar14._0_16_;
      auVar51 = vperm2f128_avx(auVar14,auVar19,0x31);
      auVar14 = vblendps_avx(auVar70,auVar67,0x24);
      auVar14 = vshufps_avx(ZEXT1632(auVar23),auVar14,0x21);
      auVar14 = vshufps_avx(auVar14,auVar70,0xc2);
      auVar19 = vshufps_avx(auVar59,auVar62,0xc4);
      auVar58 = vblendps_avx(auVar14,auVar19,0xe0);
    }
    else {
      auVar23 = vpcmpgtd_avx(auVar31,auVar23);
      auVar24 = vpcmpgtd_avx(auVar31,auVar24);
      uVar37 = auVar24._0_4_;
      auVar13._0_4_ =
           uVar37 & ___ymm_0000007000000060000000500000004000000030000000200000001000000000;
      uVar43 = auVar24._4_4_;
      auVar13._4_4_ = uVar43 & _UNK_150b50e44;
      uVar44 = auVar24._8_4_;
      auVar13._8_4_ = uVar44 & _UNK_150b50e48;
      uVar45 = auVar24._12_4_;
      auVar13._12_4_ = uVar45 & _UNK_150b50e4c;
      uVar46 = auVar23._0_4_;
      uVar48 = auVar23._4_4_;
      uVar49 = auVar23._8_4_;
      uVar50 = auVar23._12_4_;
      uVar9 = vextractps_avx(auVar13,1);
      uVar12 = (undefined4)((ulonglong)pauVar11 >> 0x20);
      uVar10 = vextractps_avx(auVar13,2);
      uVar5 = (undefined4)((ulonglong)unaff_RSI >> 0x20);
      uVar4 = vextractps_avx(auVar13,3);
      auVar24 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar6 + (uVar46 & _UNK_150b50e50))),
                              ZEXT416(*(uint *)(*pauVar6 + (uVar48 & _UNK_150b50e54))),0x10);
      auVar24 = vinsertps_avx(auVar24,ZEXT416(*(uint *)(*pauVar6 + (uVar49 & _UNK_150b50e58))),0x20)
      ;
      auVar24 = vinsertps_avx(auVar24,ZEXT416(*(uint *)(*pauVar6 + (uVar50 & _UNK_150b50e5c))),0x30)
      ;
      auVar23 = vinsertps_avx(ZEXT416(*(uint *)*pauVar6),ZEXT416(*(uint *)(*pauVar6 + uVar9)),0x10);
      auVar23 = vinsertps_avx(auVar23,ZEXT416(*(uint *)(*pauVar6 + CONCAT44(uVar12,uVar10))),0x20);
      auVar23 = vinsertps_avx(auVar23,ZEXT416(*(uint *)(*pauVar6 + CONCAT44(uVar5,uVar4))),0x30);
      auVar25._0_4_ =
           uVar37 & ___ymm_0000007400000064000000540000004400000034000000240000001400000004;
      auVar25._4_4_ = uVar43 & _UNK_150b50e64;
      auVar25._8_4_ = uVar44 & _UNK_150b50e68;
      auVar25._12_4_ = uVar45 & _UNK_150b50e6c;
      uVar9 = vextractps_avx(auVar25,1);
      uVar10 = vextractps_avx(auVar25,2);
      uVar4 = vextractps_avx(auVar25,3);
      auVar13 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar6 + (uVar46 & _UNK_150b50e70))),
                              ZEXT416(*(uint *)(*pauVar6 + (uVar48 & _UNK_150b50e74))),0x10);
      auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)(*pauVar6 + (uVar49 & _UNK_150b50e78))),0x20)
      ;
      auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)(*pauVar6 + (uVar50 & _UNK_150b50e7c))),0x30)
      ;
      auVar25 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar6 + auVar25._0_4_)),
                              ZEXT416(*(uint *)(*pauVar6 + uVar9)),0x10);
      auVar25 = vinsertps_avx(auVar25,ZEXT416(*(uint *)(*pauVar6 + CONCAT44(uVar12,uVar10))),0x20);
      auVar25 = vinsertps_avx(auVar25,ZEXT416(*(uint *)(*pauVar6 + CONCAT44(uVar5,uVar4))),0x30);
      auVar54._0_4_ =
           uVar37 & ___ymm_0000007800000068000000580000004800000038000000280000001800000008;
      auVar54._4_4_ = uVar43 & _UNK_150b50e84;
      auVar54._8_4_ = uVar44 & _UNK_150b50e88;
      auVar54._12_4_ = uVar45 & _UNK_150b50e8c;
      uVar9 = vextractps_avx(auVar54,1);
      uVar10 = vextractps_avx(auVar54,2);
      auVar27._16_16_ = auVar24;
      auVar27._0_16_ = auVar23;
      uVar4 = vextractps_avx(auVar54,3);
      auVar24 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar6 + (uVar46 & _UNK_150b50e90))),
                              ZEXT416(*(uint *)(*pauVar6 + (uVar48 & _UNK_150b50e94))),0x10);
      auVar24 = vinsertps_avx(auVar24,ZEXT416(*(uint *)(*pauVar6 + (uVar49 & _UNK_150b50e98))),0x20)
      ;
      auVar24 = vinsertps_avx(auVar24,ZEXT416(*(uint *)(*pauVar6 + (uVar50 & _UNK_150b50e9c))),0x30)
      ;
      auVar23 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar6 + auVar54._0_4_)),
                              ZEXT416(*(uint *)(*pauVar6 + uVar9)),0x10);
      auVar23 = vinsertps_avx(auVar23,ZEXT416(*(uint *)(*pauVar6 + CONCAT44(uVar12,uVar10))),0x20);
      auVar21._16_16_ = auVar13;
      auVar21._0_16_ = auVar25;
      auVar23 = vinsertps_avx(auVar23,ZEXT416(*(uint *)(*pauVar6 + CONCAT44(uVar5,uVar4))),0x30);
      auVar15._16_16_ = auVar24;
      auVar15._0_16_ = auVar23;
      auVar31._0_4_ =
           uVar37 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000;
      auVar31._4_4_ = uVar43 & _UNK_150b50b04;
      auVar31._8_4_ = uVar44 & _UNK_150b50b08;
      auVar31._12_4_ = uVar45 & _UNK_150b50b0c;
      uVar10 = vextractps_avx(auVar31,1);
      uVar4 = vextractps_avx(auVar31,2);
      pauVar11 = (undefined1 (*) [16])(param_2 + lVar8 * 0xc);
      uVar9 = vextractps_avx(auVar31,3);
      auVar24 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar11 + (uVar46 & _UNK_150b50b10))),
                              ZEXT416(*(uint *)(*pauVar11 + (uVar48 & _UNK_150b50b14))),0x10);
      auVar24 = vinsertps_avx(auVar24,ZEXT416(*(uint *)(*pauVar11 + (uVar49 & _UNK_150b50b18))),0x20
                             );
      auVar24 = vinsertps_avx(auVar24,ZEXT416(*(uint *)(*pauVar11 + (uVar50 & _UNK_150b50b1c))),0x30
                             );
      auVar23 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + lVar8 * 0xc)),
                              ZEXT416(*(uint *)(*pauVar11 + CONCAT44(uVar12,uVar10))),0x10);
      auVar23 = vinsertps_avx(auVar23,ZEXT416(*(uint *)(*pauVar11 + CONCAT44(uVar5,uVar4))),0x20);
      auVar23 = vinsertps_avx(auVar23,ZEXT416(*(uint *)(*pauVar11 + uVar9)),0x30);
      auVar56._0_4_ =
           uVar37 & ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004;
      auVar56._4_4_ = uVar43 & _UNK_150b50b24;
      auVar56._8_4_ = uVar44 & _UNK_150b50b28;
      auVar56._12_4_ = uVar45 & _UNK_150b50b2c;
      uVar10 = vextractps_avx(auVar56,1);
      uVar4 = vextractps_avx(auVar56,2);
      uVar9 = vextractps_avx(auVar56,3);
      auVar13 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar11 + (uVar46 & _UNK_150b50b30))),
                              ZEXT416(*(uint *)(*pauVar11 + (uVar48 & _UNK_150b50b34))),0x10);
      auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)(*pauVar11 + (uVar49 & _UNK_150b50b38))),0x20
                             );
      auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)(*pauVar11 + (uVar50 & _UNK_150b50b3c))),0x30
                             );
      auVar25 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar11 + auVar56._0_4_)),
                              ZEXT416(*(uint *)(*pauVar11 + CONCAT44(uVar12,uVar10))),0x10);
      auVar25 = vinsertps_avx(auVar25,ZEXT416(*(uint *)(*pauVar11 + CONCAT44(uVar5,uVar4))),0x20);
      auVar25 = vinsertps_avx(auVar25,ZEXT416(*(uint *)(*pauVar11 + uVar9)),0x30);
      auVar60._0_4_ =
           uVar37 & ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008;
      auVar60._4_4_ = uVar43 & _UNK_150b50b44;
      auVar60._8_4_ = uVar44 & _UNK_150b50b48;
      auVar60._12_4_ = uVar45 & _UNK_150b50b4c;
      uVar10 = vextractps_avx(auVar60,1);
      uVar4 = vextractps_avx(auVar60,2);
      auVar39._16_16_ = auVar24;
      auVar39._0_16_ = auVar23;
      uVar9 = vextractps_avx(auVar60,3);
      auVar24 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar11 + (uVar46 & _UNK_150b50b50))),
                              ZEXT416(*(uint *)(*pauVar11 + (uVar48 & _UNK_150b50b54))),0x10);
      auVar24 = vinsertps_avx(auVar24,ZEXT416(*(uint *)(*pauVar11 + (uVar49 & _UNK_150b50b58))),0x20
                             );
      auVar24 = vinsertps_avx(auVar24,ZEXT416(*(uint *)(*pauVar11 + (uVar50 & _UNK_150b50b5c))),0x30
                             );
      auVar23 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar11 + auVar60._0_4_)),
                              ZEXT416(*(uint *)(*pauVar11 + CONCAT44(uVar12,uVar10))),0x10);
      auVar23 = vinsertps_avx(auVar23,ZEXT416(*(uint *)(*pauVar11 + CONCAT44(uVar5,uVar4))),0x20);
      auVar51._16_16_ = auVar13;
      auVar51._0_16_ = auVar25;
      auVar23 = vinsertps_avx(auVar23,ZEXT416(*(uint *)(*pauVar11 + uVar9)),0x30);
      auVar58._16_16_ = auVar24;
      auVar58._0_16_ = auVar23;
    }
    pauVar6 = (undefined1 (*) [16])(param_1 + lVar8 * 0xc);
    auVar14 = vsubps_avx(auVar27,auVar39);
    auVar30 = vshufps_avx(auVar30,auVar30,0);
    auVar41._16_16_ = auVar30;
    auVar41._0_16_ = auVar30;
    auVar14 = vdivps_avx(auVar14,auVar41);
    auVar19 = vsubps_avx(auVar21,auVar51);
    auVar19 = vdivps_avx(auVar19,auVar41);
    auVar18 = vsubps_avx(auVar15,auVar58);
    auVar18 = vdivps_avx(auVar18,auVar41);
    auVar25 = auVar19._0_16_;
    auVar31 = auVar19._16_16_;
    auVar54 = auVar14._0_16_;
    auVar56 = auVar14._16_16_;
    auVar23 = auVar27._0_16_;
    auVar13 = auVar27._16_16_;
    cVar1 = (char)uVar2;
    auVar30 = auVar21._0_16_;
    auVar24 = auVar21._16_16_;
    if (cVar1 == -1) {
      auVar63._16_16_ = auVar25;
      auVar63._0_16_ = auVar54;
      auVar20 = vshufpd_avx(auVar14,auVar63,2);
      auVar55 = vperm2f128_avx(auVar18,auVar18,1);
      auVar14 = vshufps_avx(auVar18,auVar55,0x30);
      auVar14 = vshufps_avx(auVar55,auVar14,0x29);
      auVar25 = vshufpd_avx(auVar25,auVar31,1);
      auVar14 = vblendps_avx(auVar14,ZEXT1632(auVar25),7);
      auVar19 = vperm2f128_avx(auVar20,auVar20,1);
      auVar19 = vblendps_avx(auVar20,auVar19,0x44);
      auVar32 = vpermilps_avx(auVar19,
                              ___ymm_0000000000000006000000000000000700000001000000000000000200000000
                             );
      auVar26 = vperm2f128_avx(auVar14,auVar14,1);
      auVar19 = vunpcklpd_avx(auVar26,auVar18);
      auVar19 = vshufps_avx(auVar55,auVar19,0x24);
      auVar19 = vblendps_avx(auVar32,auVar19,0xa4);
      pauVar6[1] = auVar19._16_16_;
      *pauVar6 = auVar19._0_16_;
      auVar32 = ___ymm_0000000000000007000000000000000000000000000000010000000000000000;
      auVar19 = vpermilps_avx(auVar14,
                              ___ymm_0000000000000007000000000000000000000000000000010000000000000000
                             );
      auVar14 = vshufps_avx(auVar26,auVar26,0xa9);
      auVar14 = vblendps_avx(auVar14,auVar19,0x44);
      auVar19 = vshufpd_avx(auVar20,auVar20,1);
      auVar14 = vblendps_avx(auVar14,auVar19,0x92);
      pauVar6[3] = auVar14._16_16_;
      pauVar6[2] = auVar14._0_16_;
      auVar25 = vshufps_avx(auVar56,auVar31,0x9e);
      auVar31 = vshufps_avx(auVar31,auVar31,0xff);
      auVar53._16_16_ = auVar31;
      auVar53._0_16_ = auVar25;
      auVar19 = vperm2f128_avx(auVar18,ZEXT1632(auVar25),0x21);
      auVar14 = vblendps_avx(auVar53,auVar18,0xe0);
      auVar19 = vshufps_avx(auVar19,auVar14,0x21);
      auVar14 = vshufps_avx(auVar19,auVar14,0xc2);
      pauVar6[5] = auVar14._16_16_;
      pauVar6[4] = auVar14._0_16_;
      auVar42._16_16_ = auVar30;
      auVar42._0_16_ = auVar23;
      auVar18 = vshufpd_avx(auVar27,auVar42,2);
      auVar20 = vperm2f128_avx(auVar15,auVar15,1);
      auVar14 = vshufps_avx(auVar15,auVar20,0x30);
      auVar14 = vshufps_avx(auVar20,auVar14,0x29);
      auVar30 = vshufpd_avx(auVar30,auVar24,1);
      auVar14 = vblendps_avx(auVar14,ZEXT1632(auVar30),7);
      auVar19 = vperm2f128_avx(auVar18,auVar18,1);
      auVar19 = vblendps_avx(auVar18,auVar19,0x44);
      auVar55 = vpermilps_avx(auVar19,auVar29);
      auVar19 = vperm2f128_avx(auVar14,auVar14,1);
      auVar29 = vunpcklpd_avx(auVar19,auVar15);
      auVar29 = vshufps_avx(auVar20,auVar29,0x24);
      auVar29 = vblendps_avx(auVar55,auVar29,0xa4);
      pauVar11[1] = auVar29._16_16_;
      *pauVar11 = auVar29._0_16_;
      auVar14 = vpermilps_avx(auVar14,auVar32);
      auVar29 = vshufps_avx(auVar19,auVar19,0xa9);
      auVar29 = vblendps_avx(auVar29,auVar14,0x44);
      auVar14 = vshufpd_avx(auVar18,auVar18,1);
      auVar29 = vblendps_avx(auVar29,auVar14,0x92);
      *(undefined1 (*) [16])(param_2 + 0x20 + lVar8 * 0xc) = auVar29._0_16_;
      *(undefined1 (*) [16])(param_2 + 0x30 + lVar8 * 0xc) = auVar29._16_16_;
      auVar30 = vshufps_avx(auVar13,auVar24,0x9e);
      auVar24 = vshufps_avx(auVar24,auVar24,0xff);
      auVar29._16_16_ = auVar24;
      auVar29._0_16_ = auVar30;
      auVar14 = vperm2f128_avx(auVar15,ZEXT1632(auVar30),0x21);
      auVar29 = vblendps_avx(auVar29,auVar15,0xe0);
      auVar14 = vshufps_avx(auVar14,auVar29,0x21);
      auVar29 = vshufps_avx(auVar14,auVar29,0xc2);
      *(undefined1 (*) [16])(param_2 + 0x40 + lVar8 * 0xc) = auVar29._0_16_;
      *(undefined1 (*) [16])(param_2 + 0x50 + lVar8 * 0xc) = auVar29._16_16_;
    }
    else {
      auVar60 = auVar15._0_16_;
      auVar17 = auVar15._16_16_;
      auVar38 = auVar18._0_16_;
      auVar47 = auVar18._16_16_;
      if ((uVar2 & 1) != 0) {
        *(int *)*pauVar6 = auVar14._0_4_;
      }
      if ((uVar2 & 2) != 0) {
        uVar4 = vextractps_avx(auVar54,1);
        *(undefined4 *)(*pauVar6 + 0xc) = uVar4;
      }
      if ((uVar2 & 4) != 0) {
        uVar4 = vextractps_avx(auVar54,2);
        *(undefined4 *)(pauVar6[1] + 8) = uVar4;
      }
      if ((uVar2 & 8) != 0) {
        uVar4 = vextractps_avx(auVar54,3);
        *(undefined4 *)(pauVar6[2] + 4) = uVar4;
      }
      if ((uVar2 & 0x10) != 0) {
        *(int *)pauVar6[3] = auVar14._16_4_;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar4 = vextractps_avx(auVar56,1);
        *(undefined4 *)(pauVar6[3] + 0xc) = uVar4;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar4 = vextractps_avx(auVar56,2);
        *(undefined4 *)(pauVar6[4] + 8) = uVar4;
      }
      if (cVar1 < '\0') {
        uVar4 = vextractps_avx(auVar56,3);
        *(undefined4 *)(pauVar6[5] + 4) = uVar4;
      }
      if ((uVar2 & 1) != 0) {
        *(int *)(*pauVar6 + 4) = auVar19._0_4_;
      }
      if ((uVar2 & 2) != 0) {
        uVar4 = vextractps_avx(auVar25,1);
        *(undefined4 *)pauVar6[1] = uVar4;
      }
      if ((uVar2 & 4) != 0) {
        uVar4 = vextractps_avx(auVar25,2);
        *(undefined4 *)(pauVar6[1] + 0xc) = uVar4;
      }
      if ((uVar2 & 8) != 0) {
        uVar4 = vextractps_avx(auVar25,3);
        *(undefined4 *)(pauVar6[2] + 8) = uVar4;
      }
      if ((uVar2 & 0x10) != 0) {
        *(int *)(pauVar6[3] + 4) = auVar19._16_4_;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar4 = vextractps_avx(auVar31,1);
        *(undefined4 *)pauVar6[4] = uVar4;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar4 = vextractps_avx(auVar31,2);
        *(undefined4 *)(pauVar6[4] + 0xc) = uVar4;
      }
      if (cVar1 < '\0') {
        uVar4 = vextractps_avx(auVar31,3);
        *(undefined4 *)(pauVar6[5] + 8) = uVar4;
      }
      if ((uVar2 & 1) != 0) {
        *(int *)(*pauVar6 + 8) = auVar18._0_4_;
      }
      if ((uVar2 & 2) != 0) {
        uVar4 = vextractps_avx(auVar38,1);
        *(undefined4 *)(pauVar6[1] + 4) = uVar4;
      }
      if ((uVar2 & 4) != 0) {
        uVar4 = vextractps_avx(auVar38,2);
        *(undefined4 *)pauVar6[2] = uVar4;
      }
      if ((uVar2 & 8) != 0) {
        uVar4 = vextractps_avx(auVar38,3);
        *(undefined4 *)(pauVar6[2] + 0xc) = uVar4;
      }
      if ((uVar2 & 0x10) != 0) {
        *(int *)(pauVar6[3] + 8) = auVar18._16_4_;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar4 = vextractps_avx(auVar47,1);
        *(undefined4 *)(pauVar6[4] + 4) = uVar4;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar4 = vextractps_avx(auVar47,2);
        *(undefined4 *)pauVar6[5] = uVar4;
      }
      if (cVar1 < '\0') {
        uVar4 = vextractps_avx(auVar47,3);
        *(undefined4 *)(pauVar6[5] + 0xc) = uVar4;
      }
      if ((uVar2 & 1) != 0) {
        *(int *)*pauVar11 = auVar27._0_4_;
      }
      if ((uVar2 & 2) != 0) {
        uVar4 = vextractps_avx(auVar23,1);
        *(undefined4 *)(param_2 + 0xc + lVar8 * 0xc) = uVar4;
      }
      if ((uVar2 & 4) != 0) {
        uVar4 = vextractps_avx(auVar23,2);
        *(undefined4 *)(param_2 + 0x18 + lVar8 * 0xc) = uVar4;
      }
      if ((uVar2 & 8) != 0) {
        uVar4 = vextractps_avx(auVar23,3);
        *(undefined4 *)(param_2 + 0x24 + lVar8 * 0xc) = uVar4;
      }
      if ((uVar2 & 0x10) != 0) {
        *(int *)(param_2 + 0x30 + lVar8 * 0xc) = auVar27._16_4_;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar4 = vextractps_avx(auVar13,1);
        *(undefined4 *)(param_2 + 0x3c + lVar8 * 0xc) = uVar4;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar4 = vextractps_avx(auVar13,2);
        *(undefined4 *)(param_2 + 0x48 + lVar8 * 0xc) = uVar4;
      }
      if (cVar1 < '\0') {
        uVar4 = vextractps_avx(auVar13,3);
        *(undefined4 *)(param_2 + 0x54 + lVar8 * 0xc) = uVar4;
      }
      if ((uVar2 & 1) != 0) {
        *(int *)(param_2 + 4 + lVar8 * 0xc) = auVar21._0_4_;
      }
      if ((uVar2 & 2) != 0) {
        uVar4 = vextractps_avx(auVar30,1);
        *(undefined4 *)(param_2 + 0x10 + lVar8 * 0xc) = uVar4;
      }
      if ((uVar2 & 4) != 0) {
        uVar4 = vextractps_avx(auVar30,2);
        *(undefined4 *)(param_2 + 0x1c + lVar8 * 0xc) = uVar4;
      }
      if ((uVar2 & 8) != 0) {
        uVar4 = vextractps_avx(auVar30,3);
        *(undefined4 *)(param_2 + 0x28 + lVar8 * 0xc) = uVar4;
      }
      if ((uVar2 & 0x10) != 0) {
        *(int *)(param_2 + 0x34 + lVar8 * 0xc) = auVar21._16_4_;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar4 = vextractps_avx(auVar24,1);
        *(undefined4 *)(param_2 + 0x40 + lVar8 * 0xc) = uVar4;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar4 = vextractps_avx(auVar24,2);
        *(undefined4 *)(param_2 + 0x4c + lVar8 * 0xc) = uVar4;
      }
      if (cVar1 < '\0') {
        uVar4 = vextractps_avx(auVar24,3);
        *(undefined4 *)(param_2 + 0x58 + lVar8 * 0xc) = uVar4;
      }
      if ((uVar2 & 1) != 0) {
        *(int *)(param_2 + 8 + lVar8 * 0xc) = auVar15._0_4_;
      }
      if ((uVar2 & 2) != 0) {
        uVar4 = vextractps_avx(auVar60,1);
        *(undefined4 *)(param_2 + 0x14 + lVar8 * 0xc) = uVar4;
      }
      if ((uVar2 & 4) != 0) {
        uVar4 = vextractps_avx(auVar60,2);
        *(undefined4 *)(param_2 + 0x20 + lVar8 * 0xc) = uVar4;
      }
      if ((uVar2 & 8) != 0) {
        uVar4 = vextractps_avx(auVar60,3);
        *(undefined4 *)(param_2 + 0x2c + lVar8 * 0xc) = uVar4;
      }
      if ((uVar2 & 0x10) != 0) {
        *(int *)(param_2 + 0x38 + lVar8 * 0xc) = auVar15._16_4_;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar4 = vextractps_avx(auVar17,1);
        *(undefined4 *)(param_2 + 0x44 + lVar8 * 0xc) = uVar4;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar4 = vextractps_avx(auVar17,2);
        *(undefined4 *)(param_2 + 0x50 + lVar8 * 0xc) = uVar4;
      }
      if (cVar1 < '\0') {
        uVar4 = vextractps_avx(auVar17,3);
        *(undefined4 *)(param_2 + 0x5c + lVar8 * 0xc) = uVar4;
      }
    }
  }
  return;
}

// PostIterationUpdates_avx @ 14013aba0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PostIterationUpdates_avx
               (longlong param_1,longlong param_2,longlong param_3,undefined8 param_4,uint param_5,
               uint param_6)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  longlong unaff_RSI;
  undefined4 uVar5;
  undefined1 (*pauVar6) [16];
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined1 (*pauVar11) [16];
  undefined4 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [16];
  undefined1 auVar18 [32];
  undefined1 auVar23 [16];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 in_ZMM3 [64];
  uint uVar37;
  undefined1 auVar38 [16];
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar47 [16];
  undefined1 auVar42 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [16];
  undefined1 auVar55 [32];
  undefined1 auVar56 [16];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
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
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  
  auVar29 = ___ymm_0000000000000006000000000000000700000001000000000000000200000000;
  auVar30 = in_ZMM3._0_16_;
  uVar3 = (ulonglong)param_5;
  uVar9 = param_6 - param_5;
  pauVar11 = (undefined1 (*) [16])0x0;
  uVar2 = uVar9 + 7;
  if (-1 < (int)uVar9) {
    uVar2 = uVar9;
  }
  iVar7 = ((uVar2 & 0xfffffff8) - uVar9) + param_6;
  if ((int)param_5 < iVar7) {
    auVar24 = vshufps_avx(auVar30,auVar30,0);
    auVar14._16_16_ = auVar24;
    auVar14._0_16_ = auVar24;
    uVar3 = (ulonglong)(int)param_5;
    pauVar11 = (undefined1 (*) [16])(uVar3 * 0x10 + param_3 + 0x60);
    unaff_RSI = uVar3 * 0xc + 0x40;
    do {
      auVar55._16_16_ = pauVar11[-2];
      auVar55._0_16_ = pauVar11[-6];
      auVar57._16_16_ = pauVar11[-1];
      auVar57._0_16_ = pauVar11[-5];
      auVar61._16_16_ = *pauVar11;
      auVar61._0_16_ = pauVar11[-4];
      auVar64._16_16_ = pauVar11[1];
      auVar64._0_16_ = pauVar11[-3];
      auVar58 = vunpcklps_avx(auVar55,auVar57);
      auVar34 = vunpckhps_avx(auVar55,auVar57);
      auVar21 = vunpcklps_avx(auVar61,auVar64);
      auVar20 = vunpckhps_avx(auVar61,auVar64);
      auVar24 = *(undefined1 (*) [16])(param_2 + -0x40 + unaff_RSI);
      auVar23 = *(undefined1 (*) [16])(param_2 + -0x30 + unaff_RSI);
      auVar13 = *(undefined1 (*) [16])(param_2 + -0x10 + unaff_RSI);
      auVar65._16_16_ = auVar23;
      auVar65._0_16_ = auVar24;
      auVar66._16_16_ = auVar13;
      auVar66._0_16_ = *(undefined1 (*) [16])(param_2 + -0x20 + unaff_RSI);
      auVar25 = *(undefined1 (*) [16])(param_2 + 0x10 + unaff_RSI);
      uVar4 = *(undefined4 *)(param_2 + -0x18 + unaff_RSI);
      auVar18._20_4_ = uVar4;
      auVar18._16_4_ = uVar4;
      auVar18._24_4_ = uVar4;
      auVar18._28_4_ = uVar4;
      uVar4 = *(undefined4 *)(param_2 + -0x1c + unaff_RSI);
      auVar18._4_4_ = uVar4;
      auVar18._0_4_ = uVar4;
      auVar18._8_4_ = uVar4;
      auVar18._12_4_ = uVar4;
      auVar68._16_16_ = auVar24;
      auVar68._0_16_ = auVar23;
      auVar19 = vblendps_avx(auVar65,auVar68,0x24);
      auVar19 = vpermilps_avx(auVar19,
                              ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                             );
      auVar19 = vblendps_avx(auVar19,auVar18,0x88);
      auVar69._16_16_ = auVar25;
      auVar69._0_16_ = *(undefined1 (*) [16])(param_2 + unaff_RSI);
      auVar32._16_16_ = *(undefined1 (*) [16])(param_2 + unaff_RSI);
      auVar32._0_16_ = auVar25;
      uVar4 = *(undefined4 *)(param_2 + -0xc + unaff_RSI);
      auVar71._20_4_ = uVar4;
      auVar71._16_4_ = uVar4;
      auVar71._24_4_ = uVar4;
      auVar71._28_4_ = uVar4;
      auVar24 = vshufps_avx(auVar13,auVar13,0xec);
      auVar71._0_16_ = auVar24;
      auVar18 = vblendps_avx(auVar32,auVar69,0x44);
      auVar18 = vpermilps_avx(auVar18,
                              ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                             );
      auVar18 = vblendps_avx(auVar18,auVar71,0x13);
      auVar72._16_16_ = auVar18._0_16_;
      auVar72._0_16_ = auVar19._0_16_;
      auVar55 = vperm2f128_avx(auVar19,auVar18,0x31);
      auVar19 = vblendps_avx(auVar66,auVar65,0x24);
      auVar19 = vshufps_avx(ZEXT1632(auVar23),auVar19,0x21);
      auVar19 = vshufps_avx(auVar19,auVar66,0xc2);
      auVar18 = vshufps_avx(auVar32,auVar69,0xc4);
      auVar61 = vunpcklpd_avx(auVar58,auVar21);
      auVar19 = vblendps_avx(auVar19,auVar18,0xe0);
      auVar57 = vunpckhpd_avx(auVar58,auVar21);
      auVar64 = vunpcklpd_avx(auVar34,auVar20);
      auVar18 = vsubps_avx(auVar61,auVar72);
      auVar20 = vdivps_avx(auVar18,auVar14);
      auVar18 = vsubps_avx(auVar57,auVar55);
      auVar18 = vdivps_avx(auVar18,auVar14);
      auVar19 = vsubps_avx(auVar64,auVar19);
      auVar55 = vdivps_avx(auVar19,auVar14);
      auVar33._16_16_ = auVar18._0_16_;
      auVar33._0_16_ = auVar20._0_16_;
      auVar26 = vshufpd_avx(auVar20,auVar33,2);
      auVar23 = auVar18._16_16_;
      auVar24 = vshufpd_avx(auVar18._0_16_,auVar23,1);
      auVar32 = vperm2f128_avx(auVar55,auVar55,1);
      auVar19 = vshufps_avx(auVar55,auVar32,0x30);
      auVar19 = vshufps_avx(auVar32,auVar19,0x29);
      auVar19 = vblendps_avx(auVar19,ZEXT1632(auVar24),7);
      auVar33 = vperm2f128_avx(auVar19,auVar19,1);
      auVar18 = vunpcklpd_avx(auVar33,auVar55);
      auVar32 = vshufps_avx(auVar32,auVar18,0x24);
      auVar18 = vperm2f128_avx(auVar26,auVar26,1);
      auVar18 = vblendps_avx(auVar26,auVar18,0x44);
      auVar18 = vpermilps_avx(auVar18,auVar29);
      auVar18 = vblendps_avx(auVar18,auVar32,0xa4);
      *(undefined1 (*) [16])(param_1 + -0x30 + unaff_RSI) = auVar18._16_16_;
      *(undefined1 (*) [16])(param_1 + -0x40 + unaff_RSI) = auVar18._0_16_;
      auVar32 = ___ymm_0000000000000007000000000000000000000000000000010000000000000000;
      auVar18 = vpermilps_avx(auVar19,
                              ___ymm_0000000000000007000000000000000000000000000000010000000000000000
                             );
      auVar19 = vshufps_avx(auVar33,auVar33,0xa9);
      auVar19 = vblendps_avx(auVar19,auVar18,0x44);
      auVar18 = vshufpd_avx(auVar26,auVar26,1);
      auVar19 = vblendps_avx(auVar19,auVar18,0x92);
      *(undefined1 (*) [16])(param_1 + -0x10 + unaff_RSI) = auVar19._16_16_;
      *(undefined1 (*) [16])(param_1 + -0x20 + unaff_RSI) = auVar19._0_16_;
      auVar24 = vshufps_avx(auVar20._16_16_,auVar23,0x9e);
      auVar23 = vshufps_avx(auVar23,auVar23,0xff);
      auVar26._16_16_ = auVar23;
      auVar26._0_16_ = auVar24;
      auVar18 = vperm2f128_avx(auVar55,ZEXT1632(auVar24),0x21);
      auVar19 = vblendps_avx(auVar26,auVar55,0xe0);
      auVar18 = vshufps_avx(auVar18,auVar19,0x21);
      auVar19 = vshufps_avx(auVar18,auVar19,0xc2);
      *(undefined1 (*) [16])(param_1 + 0x10 + unaff_RSI) = auVar19._16_16_;
      *(undefined1 (*) [16])(param_1 + unaff_RSI) = auVar19._0_16_;
      auVar19._16_16_ = auVar57._0_16_;
      auVar19._0_16_ = auVar61._0_16_;
      auVar20 = vshufpd_avx(auVar58,auVar19,2);
      auVar23 = auVar57._16_16_;
      auVar24 = vshufpd_avx(auVar57._0_16_,auVar23,1);
      auVar55 = vperm2f128_avx(auVar64,auVar64,1);
      auVar19 = vshufps_avx(auVar64,auVar55,0x30);
      auVar19 = vshufps_avx(auVar55,auVar19,0x29);
      auVar19 = vblendps_avx(auVar19,ZEXT1632(auVar24),7);
      auVar26 = vperm2f128_avx(auVar19,auVar19,1);
      auVar18 = vunpcklpd_avx(auVar26,auVar34);
      auVar55 = vshufps_avx(auVar55,auVar18,0x24);
      auVar18 = vperm2f128_avx(auVar20,auVar20,1);
      auVar18 = vblendps_avx(auVar20,auVar18,0x44);
      auVar18 = vpermilps_avx(auVar18,auVar29);
      auVar18 = vblendps_avx(auVar18,auVar55,0xa4);
      *(undefined1 (*) [16])(param_2 + -0x30 + unaff_RSI) = auVar18._16_16_;
      *(undefined1 (*) [16])(param_2 + -0x40 + unaff_RSI) = auVar18._0_16_;
      auVar18 = vpermilps_avx(auVar19,auVar32);
      auVar19 = vshufps_avx(auVar26,auVar26,0xa9);
      auVar19 = vblendps_avx(auVar19,auVar18,0x44);
      auVar18 = vshufpd_avx(auVar20,auVar20,1);
      auVar19 = vblendps_avx(auVar19,auVar18,0x92);
      *(undefined1 (*) [16])(param_2 + -0x10 + unaff_RSI) = auVar19._16_16_;
      *(undefined1 (*) [16])(param_2 + -0x20 + unaff_RSI) = auVar19._0_16_;
      auVar24 = vshufps_avx(auVar61._16_16_,auVar23,0x9e);
      auVar23 = vshufps_avx(auVar23,auVar23,0xff);
      auVar20._16_16_ = auVar23;
      auVar20._0_16_ = auVar24;
      auVar19 = vblendps_avx(auVar20,auVar64,0xe0);
      auVar18 = vperm2f128_avx(auVar34,auVar21,0x31);
      auVar18 = vshufps_avx(auVar18,auVar19,0x21);
      auVar19 = vshufps_avx(auVar18,auVar19,0xc2);
      *(undefined1 (*) [16])(param_2 + 0x10 + unaff_RSI) = auVar19._16_16_;
      *(undefined1 (*) [16])(param_2 + unaff_RSI) = auVar19._0_16_;
      uVar3 = uVar3 + 8;
      pauVar11 = pauVar11 + 8;
      unaff_RSI = unaff_RSI + 0x60;
    } while ((longlong)uVar3 < (longlong)iVar7);
  }
  auVar29 = ___ymm_0000000000000006000000000000000700000001000000000000000200000000;
  uVar2 = (uint)uVar3;
  if ((int)uVar2 < (int)param_6) {
    auVar13 = vpshufd_avx(ZEXT416(uVar2),0);
    auVar24._0_4_ = auVar13._0_4_ + (int)__xmm_00000003000000020000000100000000;
    auVar24._4_4_ = auVar13._4_4_ + __xmm_00000003000000020000000100000000._4_4_;
    auVar24._8_4_ = auVar13._8_4_ + _UNK_150631e08;
    auVar24._12_4_ = auVar13._12_4_ + _UNK_150631e0c;
    auVar23._0_4_ = auVar13._0_4_ + ___xmm_00000007000000060000000500000004;
    auVar23._4_4_ = auVar13._4_4_ + _UNK_150631eb4;
    auVar23._8_4_ = auVar13._8_4_ + _UNK_150631eb8;
    auVar23._12_4_ = auVar13._12_4_ + _UNK_150631ebc;
    auVar31 = vpshufd_avx(ZEXT416(param_6),0);
    lVar8 = (longlong)(int)uVar2;
    pauVar6 = (undefined1 (*) [16])(param_3 + lVar8 * 0x10);
    auVar13 = vpcmpgtd_avx(auVar31,auVar23);
    auVar25 = vpcmpgtd_avx(auVar31,auVar24);
    auVar34._16_16_ = auVar13;
    auVar34._0_16_ = auVar25;
    uVar2 = vmovmskps_avx(auVar34);
    if (uVar2 == 0xff) {
      auVar16._16_16_ = pauVar6[4];
      auVar16._0_16_ = *pauVar6;
      auVar22._16_16_ = pauVar6[5];
      auVar22._0_16_ = pauVar6[1];
      auVar28._16_16_ = pauVar6[6];
      auVar28._0_16_ = pauVar6[2];
      auVar35._16_16_ = pauVar6[7];
      auVar35._0_16_ = pauVar6[3];
      auVar18 = vunpcklps_avx(auVar16,auVar22);
      auVar14 = vunpckhps_avx(auVar16,auVar22);
      auVar20 = vunpcklps_avx(auVar28,auVar35);
      auVar19 = vunpckhps_avx(auVar28,auVar35);
      auVar15 = vunpcklpd_avx(auVar14,auVar19);
      auVar27 = vunpcklpd_avx(auVar18,auVar20);
      auVar21 = vunpckhpd_avx(auVar18,auVar20);
      auVar24 = *(undefined1 (*) [16])(param_2 + lVar8 * 0xc);
      auVar23 = *(undefined1 (*) [16])(param_2 + 0x10 + lVar8 * 0xc);
      auVar13 = *(undefined1 (*) [16])(param_2 + 0x30 + lVar8 * 0xc);
      auVar25 = *(undefined1 (*) [16])(param_2 + 0x50 + lVar8 * 0xc);
      auVar31 = *(undefined1 (*) [16])(param_2 + 0x40 + lVar8 * 0xc);
      uVar4 = *(undefined4 *)(param_2 + 0x28 + lVar8 * 0xc);
      auVar40._20_4_ = uVar4;
      auVar40._16_4_ = uVar4;
      auVar40._24_4_ = uVar4;
      auVar40._28_4_ = uVar4;
      uVar4 = *(undefined4 *)(param_2 + 0x24 + lVar8 * 0xc);
      auVar40._4_4_ = uVar4;
      auVar40._0_4_ = uVar4;
      auVar40._8_4_ = uVar4;
      auVar40._12_4_ = uVar4;
      uVar4 = *(undefined4 *)(param_2 + 0x34 + lVar8 * 0xc);
      auVar52._20_4_ = uVar4;
      auVar52._16_4_ = uVar4;
      auVar52._24_4_ = uVar4;
      auVar52._28_4_ = uVar4;
      pauVar11 = (undefined1 (*) [16])(param_2 + lVar8 * 0xc);
      auVar67._16_16_ = auVar23;
      auVar67._0_16_ = auVar24;
      auVar70._16_16_ = auVar13;
      auVar70._0_16_ = *(undefined1 (*) [16])(param_2 + 0x20 + lVar8 * 0xc);
      auVar36._16_16_ = auVar24;
      auVar36._0_16_ = auVar23;
      auVar14 = vblendps_avx(auVar67,auVar36,0x24);
      auVar14 = vpermilps_avx(auVar14,
                              ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                             );
      auVar62._16_16_ = auVar25;
      auVar62._0_16_ = auVar31;
      auVar14 = vblendps_avx(auVar14,auVar40,0x88);
      auVar59._16_16_ = auVar31;
      auVar59._0_16_ = auVar25;
      auVar19 = vblendps_avx(auVar59,auVar62,0x44);
      auVar19 = vpermilps_avx(auVar19,
                              ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                             );
      auVar24 = vshufps_avx(auVar13,auVar13,0xec);
      auVar52._0_16_ = auVar24;
      auVar19 = vblendps_avx(auVar19,auVar52,0x13);
      auVar39._16_16_ = auVar19._0_16_;
      auVar39._0_16_ = auVar14._0_16_;
      auVar51 = vperm2f128_avx(auVar14,auVar19,0x31);
      auVar14 = vblendps_avx(auVar70,auVar67,0x24);
      auVar14 = vshufps_avx(ZEXT1632(auVar23),auVar14,0x21);
      auVar14 = vshufps_avx(auVar14,auVar70,0xc2);
      auVar19 = vshufps_avx(auVar59,auVar62,0xc4);
      auVar58 = vblendps_avx(auVar14,auVar19,0xe0);
    }
    else {
      auVar23 = vpcmpgtd_avx(auVar31,auVar23);
      auVar24 = vpcmpgtd_avx(auVar31,auVar24);
      uVar37 = auVar24._0_4_;
      auVar13._0_4_ =
           uVar37 & ___ymm_0000007000000060000000500000004000000030000000200000001000000000;
      uVar43 = auVar24._4_4_;
      auVar13._4_4_ = uVar43 & _UNK_150b50e44;
      uVar44 = auVar24._8_4_;
      auVar13._8_4_ = uVar44 & _UNK_150b50e48;
      uVar45 = auVar24._12_4_;
      auVar13._12_4_ = uVar45 & _UNK_150b50e4c;
      uVar46 = auVar23._0_4_;
      uVar48 = auVar23._4_4_;
      uVar49 = auVar23._8_4_;
      uVar50 = auVar23._12_4_;
      uVar9 = vextractps_avx(auVar13,1);
      uVar12 = (undefined4)((ulonglong)pauVar11 >> 0x20);
      uVar10 = vextractps_avx(auVar13,2);
      uVar5 = (undefined4)((ulonglong)unaff_RSI >> 0x20);
      uVar4 = vextractps_avx(auVar13,3);
      auVar24 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar6 + (uVar46 & _UNK_150b50e50))),
                              ZEXT416(*(uint *)(*pauVar6 + (uVar48 & _UNK_150b50e54))),0x10);
      auVar24 = vinsertps_avx(auVar24,ZEXT416(*(uint *)(*pauVar6 + (uVar49 & _UNK_150b50e58))),0x20)
      ;
      auVar24 = vinsertps_avx(auVar24,ZEXT416(*(uint *)(*pauVar6 + (uVar50 & _UNK_150b50e5c))),0x30)
      ;
      auVar23 = vinsertps_avx(ZEXT416(*(uint *)*pauVar6),ZEXT416(*(uint *)(*pauVar6 + uVar9)),0x10);
      auVar23 = vinsertps_avx(auVar23,ZEXT416(*(uint *)(*pauVar6 + CONCAT44(uVar12,uVar10))),0x20);
      auVar23 = vinsertps_avx(auVar23,ZEXT416(*(uint *)(*pauVar6 + CONCAT44(uVar5,uVar4))),0x30);
      auVar25._0_4_ =
           uVar37 & ___ymm_0000007400000064000000540000004400000034000000240000001400000004;
      auVar25._4_4_ = uVar43 & _UNK_150b50e64;
      auVar25._8_4_ = uVar44 & _UNK_150b50e68;
      auVar25._12_4_ = uVar45 & _UNK_150b50e6c;
      uVar9 = vextractps_avx(auVar25,1);
      uVar10 = vextractps_avx(auVar25,2);
      uVar4 = vextractps_avx(auVar25,3);
      auVar13 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar6 + (uVar46 & _UNK_150b50e70))),
                              ZEXT416(*(uint *)(*pauVar6 + (uVar48 & _UNK_150b50e74))),0x10);
      auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)(*pauVar6 + (uVar49 & _UNK_150b50e78))),0x20)
      ;
      auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)(*pauVar6 + (uVar50 & _UNK_150b50e7c))),0x30)
      ;
      auVar25 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar6 + auVar25._0_4_)),
                              ZEXT416(*(uint *)(*pauVar6 + uVar9)),0x10);
      auVar25 = vinsertps_avx(auVar25,ZEXT416(*(uint *)(*pauVar6 + CONCAT44(uVar12,uVar10))),0x20);
      auVar25 = vinsertps_avx(auVar25,ZEXT416(*(uint *)(*pauVar6 + CONCAT44(uVar5,uVar4))),0x30);
      auVar54._0_4_ =
           uVar37 & ___ymm_0000007800000068000000580000004800000038000000280000001800000008;
      auVar54._4_4_ = uVar43 & _UNK_150b50e84;
      auVar54._8_4_ = uVar44 & _UNK_150b50e88;
      auVar54._12_4_ = uVar45 & _UNK_150b50e8c;
      uVar9 = vextractps_avx(auVar54,1);
      uVar10 = vextractps_avx(auVar54,2);
      auVar27._16_16_ = auVar24;
      auVar27._0_16_ = auVar23;
      uVar4 = vextractps_avx(auVar54,3);
      auVar24 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar6 + (uVar46 & _UNK_150b50e90))),
                              ZEXT416(*(uint *)(*pauVar6 + (uVar48 & _UNK_150b50e94))),0x10);
      auVar24 = vinsertps_avx(auVar24,ZEXT416(*(uint *)(*pauVar6 + (uVar49 & _UNK_150b50e98))),0x20)
      ;
      auVar24 = vinsertps_avx(auVar24,ZEXT416(*(uint *)(*pauVar6 + (uVar50 & _UNK_150b50e9c))),0x30)
      ;
      auVar23 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar6 + auVar54._0_4_)),
                              ZEXT416(*(uint *)(*pauVar6 + uVar9)),0x10);
      auVar23 = vinsertps_avx(auVar23,ZEXT416(*(uint *)(*pauVar6 + CONCAT44(uVar12,uVar10))),0x20);
      auVar21._16_16_ = auVar13;
      auVar21._0_16_ = auVar25;
      auVar23 = vinsertps_avx(auVar23,ZEXT416(*(uint *)(*pauVar6 + CONCAT44(uVar5,uVar4))),0x30);
      auVar15._16_16_ = auVar24;
      auVar15._0_16_ = auVar23;
      auVar31._0_4_ =
           uVar37 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000;
      auVar31._4_4_ = uVar43 & _UNK_150b50b04;
      auVar31._8_4_ = uVar44 & _UNK_150b50b08;
      auVar31._12_4_ = uVar45 & _UNK_150b50b0c;
      uVar10 = vextractps_avx(auVar31,1);
      uVar4 = vextractps_avx(auVar31,2);
      pauVar11 = (undefined1 (*) [16])(param_2 + lVar8 * 0xc);
      uVar9 = vextractps_avx(auVar31,3);
      auVar24 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar11 + (uVar46 & _UNK_150b50b10))),
                              ZEXT416(*(uint *)(*pauVar11 + (uVar48 & _UNK_150b50b14))),0x10);
      auVar24 = vinsertps_avx(auVar24,ZEXT416(*(uint *)(*pauVar11 + (uVar49 & _UNK_150b50b18))),0x20
                             );
      auVar24 = vinsertps_avx(auVar24,ZEXT416(*(uint *)(*pauVar11 + (uVar50 & _UNK_150b50b1c))),0x30
                             );
      auVar23 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + lVar8 * 0xc)),
                              ZEXT416(*(uint *)(*pauVar11 + CONCAT44(uVar12,uVar10))),0x10);
      auVar23 = vinsertps_avx(auVar23,ZEXT416(*(uint *)(*pauVar11 + CONCAT44(uVar5,uVar4))),0x20);
      auVar23 = vinsertps_avx(auVar23,ZEXT416(*(uint *)(*pauVar11 + uVar9)),0x30);
      auVar56._0_4_ =
           uVar37 & ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004;
      auVar56._4_4_ = uVar43 & _UNK_150b50b24;
      auVar56._8_4_ = uVar44 & _UNK_150b50b28;
      auVar56._12_4_ = uVar45 & _UNK_150b50b2c;
      uVar10 = vextractps_avx(auVar56,1);
      uVar4 = vextractps_avx(auVar56,2);
      uVar9 = vextractps_avx(auVar56,3);
      auVar13 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar11 + (uVar46 & _UNK_150b50b30))),
                              ZEXT416(*(uint *)(*pauVar11 + (uVar48 & _UNK_150b50b34))),0x10);
      auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)(*pauVar11 + (uVar49 & _UNK_150b50b38))),0x20
                             );
      auVar13 = vinsertps_avx(auVar13,ZEXT416(*(uint *)(*pauVar11 + (uVar50 & _UNK_150b50b3c))),0x30
                             );
      auVar25 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar11 + auVar56._0_4_)),
                              ZEXT416(*(uint *)(*pauVar11 + CONCAT44(uVar12,uVar10))),0x10);
      auVar25 = vinsertps_avx(auVar25,ZEXT416(*(uint *)(*pauVar11 + CONCAT44(uVar5,uVar4))),0x20);
      auVar25 = vinsertps_avx(auVar25,ZEXT416(*(uint *)(*pauVar11 + uVar9)),0x30);
      auVar60._0_4_ =
           uVar37 & ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008;
      auVar60._4_4_ = uVar43 & _UNK_150b50b44;
      auVar60._8_4_ = uVar44 & _UNK_150b50b48;
      auVar60._12_4_ = uVar45 & _UNK_150b50b4c;
      uVar10 = vextractps_avx(auVar60,1);
      uVar4 = vextractps_avx(auVar60,2);
      auVar39._16_16_ = auVar24;
      auVar39._0_16_ = auVar23;
      uVar9 = vextractps_avx(auVar60,3);
      auVar24 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar11 + (uVar46 & _UNK_150b50b50))),
                              ZEXT416(*(uint *)(*pauVar11 + (uVar48 & _UNK_150b50b54))),0x10);
      auVar24 = vinsertps_avx(auVar24,ZEXT416(*(uint *)(*pauVar11 + (uVar49 & _UNK_150b50b58))),0x20
                             );
      auVar24 = vinsertps_avx(auVar24,ZEXT416(*(uint *)(*pauVar11 + (uVar50 & _UNK_150b50b5c))),0x30
                             );
      auVar23 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar11 + auVar60._0_4_)),
                              ZEXT416(*(uint *)(*pauVar11 + CONCAT44(uVar12,uVar10))),0x10);
      auVar23 = vinsertps_avx(auVar23,ZEXT416(*(uint *)(*pauVar11 + CONCAT44(uVar5,uVar4))),0x20);
      auVar51._16_16_ = auVar13;
      auVar51._0_16_ = auVar25;
      auVar23 = vinsertps_avx(auVar23,ZEXT416(*(uint *)(*pauVar11 + uVar9)),0x30);
      auVar58._16_16_ = auVar24;
      auVar58._0_16_ = auVar23;
    }
    pauVar6 = (undefined1 (*) [16])(param_1 + lVar8 * 0xc);
    auVar14 = vsubps_avx(auVar27,auVar39);
    auVar30 = vshufps_avx(auVar30,auVar30,0);
    auVar41._16_16_ = auVar30;
    auVar41._0_16_ = auVar30;
    auVar14 = vdivps_avx(auVar14,auVar41);
    auVar19 = vsubps_avx(auVar21,auVar51);
    auVar19 = vdivps_avx(auVar19,auVar41);
    auVar18 = vsubps_avx(auVar15,auVar58);
    auVar18 = vdivps_avx(auVar18,auVar41);
    auVar25 = auVar19._0_16_;
    auVar31 = auVar19._16_16_;
    auVar54 = auVar14._0_16_;
    auVar56 = auVar14._16_16_;
    auVar23 = auVar27._0_16_;
    auVar13 = auVar27._16_16_;
    cVar1 = (char)uVar2;
    auVar30 = auVar21._0_16_;
    auVar24 = auVar21._16_16_;
    if (cVar1 == -1) {
      auVar63._16_16_ = auVar25;
      auVar63._0_16_ = auVar54;
      auVar20 = vshufpd_avx(auVar14,auVar63,2);
      auVar55 = vperm2f128_avx(auVar18,auVar18,1);
      auVar14 = vshufps_avx(auVar18,auVar55,0x30);
      auVar14 = vshufps_avx(auVar55,auVar14,0x29);
      auVar25 = vshufpd_avx(auVar25,auVar31,1);
      auVar14 = vblendps_avx(auVar14,ZEXT1632(auVar25),7);
      auVar19 = vperm2f128_avx(auVar20,auVar20,1);
      auVar19 = vblendps_avx(auVar20,auVar19,0x44);
      auVar32 = vpermilps_avx(auVar19,
                              ___ymm_0000000000000006000000000000000700000001000000000000000200000000
                             );
      auVar26 = vperm2f128_avx(auVar14,auVar14,1);
      auVar19 = vunpcklpd_avx(auVar26,auVar18);
      auVar19 = vshufps_avx(auVar55,auVar19,0x24);
      auVar19 = vblendps_avx(auVar32,auVar19,0xa4);
      pauVar6[1] = auVar19._16_16_;
      *pauVar6 = auVar19._0_16_;
      auVar32 = ___ymm_0000000000000007000000000000000000000000000000010000000000000000;
      auVar19 = vpermilps_avx(auVar14,
                              ___ymm_0000000000000007000000000000000000000000000000010000000000000000
                             );
      auVar14 = vshufps_avx(auVar26,auVar26,0xa9);
      auVar14 = vblendps_avx(auVar14,auVar19,0x44);
      auVar19 = vshufpd_avx(auVar20,auVar20,1);
      auVar14 = vblendps_avx(auVar14,auVar19,0x92);
      pauVar6[3] = auVar14._16_16_;
      pauVar6[2] = auVar14._0_16_;
      auVar25 = vshufps_avx(auVar56,auVar31,0x9e);
      auVar31 = vshufps_avx(auVar31,auVar31,0xff);
      auVar53._16_16_ = auVar31;
      auVar53._0_16_ = auVar25;
      auVar19 = vperm2f128_avx(auVar18,ZEXT1632(auVar25),0x21);
      auVar14 = vblendps_avx(auVar53,auVar18,0xe0);
      auVar19 = vshufps_avx(auVar19,auVar14,0x21);
      auVar14 = vshufps_avx(auVar19,auVar14,0xc2);
      pauVar6[5] = auVar14._16_16_;
      pauVar6[4] = auVar14._0_16_;
      auVar42._16_16_ = auVar30;
      auVar42._0_16_ = auVar23;
      auVar18 = vshufpd_avx(auVar27,auVar42,2);
      auVar20 = vperm2f128_avx(auVar15,auVar15,1);
      auVar14 = vshufps_avx(auVar15,auVar20,0x30);
      auVar14 = vshufps_avx(auVar20,auVar14,0x29);
      auVar30 = vshufpd_avx(auVar30,auVar24,1);
      auVar14 = vblendps_avx(auVar14,ZEXT1632(auVar30),7);
      auVar19 = vperm2f128_avx(auVar18,auVar18,1);
      auVar19 = vblendps_avx(auVar18,auVar19,0x44);
      auVar55 = vpermilps_avx(auVar19,auVar29);
      auVar19 = vperm2f128_avx(auVar14,auVar14,1);
      auVar29 = vunpcklpd_avx(auVar19,auVar15);
      auVar29 = vshufps_avx(auVar20,auVar29,0x24);
      auVar29 = vblendps_avx(auVar55,auVar29,0xa4);
      pauVar11[1] = auVar29._16_16_;
      *pauVar11 = auVar29._0_16_;
      auVar14 = vpermilps_avx(auVar14,auVar32);
      auVar29 = vshufps_avx(auVar19,auVar19,0xa9);
      auVar29 = vblendps_avx(auVar29,auVar14,0x44);
      auVar14 = vshufpd_avx(auVar18,auVar18,1);
      auVar29 = vblendps_avx(auVar29,auVar14,0x92);
      *(undefined1 (*) [16])(param_2 + 0x20 + lVar8 * 0xc) = auVar29._0_16_;
      *(undefined1 (*) [16])(param_2 + 0x30 + lVar8 * 0xc) = auVar29._16_16_;
      auVar30 = vshufps_avx(auVar13,auVar24,0x9e);
      auVar24 = vshufps_avx(auVar24,auVar24,0xff);
      auVar29._16_16_ = auVar24;
      auVar29._0_16_ = auVar30;
      auVar14 = vperm2f128_avx(auVar15,ZEXT1632(auVar30),0x21);
      auVar29 = vblendps_avx(auVar29,auVar15,0xe0);
      auVar14 = vshufps_avx(auVar14,auVar29,0x21);
      auVar29 = vshufps_avx(auVar14,auVar29,0xc2);
      *(undefined1 (*) [16])(param_2 + 0x40 + lVar8 * 0xc) = auVar29._0_16_;
      *(undefined1 (*) [16])(param_2 + 0x50 + lVar8 * 0xc) = auVar29._16_16_;
    }
    else {
      auVar60 = auVar15._0_16_;
      auVar17 = auVar15._16_16_;
      auVar38 = auVar18._0_16_;
      auVar47 = auVar18._16_16_;
      if ((uVar2 & 1) != 0) {
        *(int *)*pauVar6 = auVar14._0_4_;
      }
      if ((uVar2 & 2) != 0) {
        uVar4 = vextractps_avx(auVar54,1);
        *(undefined4 *)(*pauVar6 + 0xc) = uVar4;
      }
      if ((uVar2 & 4) != 0) {
        uVar4 = vextractps_avx(auVar54,2);
        *(undefined4 *)(pauVar6[1] + 8) = uVar4;
      }
      if ((uVar2 & 8) != 0) {
        uVar4 = vextractps_avx(auVar54,3);
        *(undefined4 *)(pauVar6[2] + 4) = uVar4;
      }
      if ((uVar2 & 0x10) != 0) {
        *(int *)pauVar6[3] = auVar14._16_4_;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar4 = vextractps_avx(auVar56,1);
        *(undefined4 *)(pauVar6[3] + 0xc) = uVar4;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar4 = vextractps_avx(auVar56,2);
        *(undefined4 *)(pauVar6[4] + 8) = uVar4;
      }
      if (cVar1 < '\0') {
        uVar4 = vextractps_avx(auVar56,3);
        *(undefined4 *)(pauVar6[5] + 4) = uVar4;
      }
      if ((uVar2 & 1) != 0) {
        *(int *)(*pauVar6 + 4) = auVar19._0_4_;
      }
      if ((uVar2 & 2) != 0) {
        uVar4 = vextractps_avx(auVar25,1);
        *(undefined4 *)pauVar6[1] = uVar4;
      }
      if ((uVar2 & 4) != 0) {
        uVar4 = vextractps_avx(auVar25,2);
        *(undefined4 *)(pauVar6[1] + 0xc) = uVar4;
      }
      if ((uVar2 & 8) != 0) {
        uVar4 = vextractps_avx(auVar25,3);
        *(undefined4 *)(pauVar6[2] + 8) = uVar4;
      }
      if ((uVar2 & 0x10) != 0) {
        *(int *)(pauVar6[3] + 4) = auVar19._16_4_;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar4 = vextractps_avx(auVar31,1);
        *(undefined4 *)pauVar6[4] = uVar4;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar4 = vextractps_avx(auVar31,2);
        *(undefined4 *)(pauVar6[4] + 0xc) = uVar4;
      }
      if (cVar1 < '\0') {
        uVar4 = vextractps_avx(auVar31,3);
        *(undefined4 *)(pauVar6[5] + 8) = uVar4;
      }
      if ((uVar2 & 1) != 0) {
        *(int *)(*pauVar6 + 8) = auVar18._0_4_;
      }
      if ((uVar2 & 2) != 0) {
        uVar4 = vextractps_avx(auVar38,1);
        *(undefined4 *)(pauVar6[1] + 4) = uVar4;
      }
      if ((uVar2 & 4) != 0) {
        uVar4 = vextractps_avx(auVar38,2);
        *(undefined4 *)pauVar6[2] = uVar4;
      }
      if ((uVar2 & 8) != 0) {
        uVar4 = vextractps_avx(auVar38,3);
        *(undefined4 *)(pauVar6[2] + 0xc) = uVar4;
      }
      if ((uVar2 & 0x10) != 0) {
        *(int *)(pauVar6[3] + 8) = auVar18._16_4_;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar4 = vextractps_avx(auVar47,1);
        *(undefined4 *)(pauVar6[4] + 4) = uVar4;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar4 = vextractps_avx(auVar47,2);
        *(undefined4 *)pauVar6[5] = uVar4;
      }
      if (cVar1 < '\0') {
        uVar4 = vextractps_avx(auVar47,3);
        *(undefined4 *)(pauVar6[5] + 0xc) = uVar4;
      }
      if ((uVar2 & 1) != 0) {
        *(int *)*pauVar11 = auVar27._0_4_;
      }
      if ((uVar2 & 2) != 0) {
        uVar4 = vextractps_avx(auVar23,1);
        *(undefined4 *)(param_2 + 0xc + lVar8 * 0xc) = uVar4;
      }
      if ((uVar2 & 4) != 0) {
        uVar4 = vextractps_avx(auVar23,2);
        *(undefined4 *)(param_2 + 0x18 + lVar8 * 0xc) = uVar4;
      }
      if ((uVar2 & 8) != 0) {
        uVar4 = vextractps_avx(auVar23,3);
        *(undefined4 *)(param_2 + 0x24 + lVar8 * 0xc) = uVar4;
      }
      if ((uVar2 & 0x10) != 0) {
        *(int *)(param_2 + 0x30 + lVar8 * 0xc) = auVar27._16_4_;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar4 = vextractps_avx(auVar13,1);
        *(undefined4 *)(param_2 + 0x3c + lVar8 * 0xc) = uVar4;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar4 = vextractps_avx(auVar13,2);
        *(undefined4 *)(param_2 + 0x48 + lVar8 * 0xc) = uVar4;
      }
      if (cVar1 < '\0') {
        uVar4 = vextractps_avx(auVar13,3);
        *(undefined4 *)(param_2 + 0x54 + lVar8 * 0xc) = uVar4;
      }
      if ((uVar2 & 1) != 0) {
        *(int *)(param_2 + 4 + lVar8 * 0xc) = auVar21._0_4_;
      }
      if ((uVar2 & 2) != 0) {
        uVar4 = vextractps_avx(auVar30,1);
        *(undefined4 *)(param_2 + 0x10 + lVar8 * 0xc) = uVar4;
      }
      if ((uVar2 & 4) != 0) {
        uVar4 = vextractps_avx(auVar30,2);
        *(undefined4 *)(param_2 + 0x1c + lVar8 * 0xc) = uVar4;
      }
      if ((uVar2 & 8) != 0) {
        uVar4 = vextractps_avx(auVar30,3);
        *(undefined4 *)(param_2 + 0x28 + lVar8 * 0xc) = uVar4;
      }
      if ((uVar2 & 0x10) != 0) {
        *(int *)(param_2 + 0x34 + lVar8 * 0xc) = auVar21._16_4_;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar4 = vextractps_avx(auVar24,1);
        *(undefined4 *)(param_2 + 0x40 + lVar8 * 0xc) = uVar4;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar4 = vextractps_avx(auVar24,2);
        *(undefined4 *)(param_2 + 0x4c + lVar8 * 0xc) = uVar4;
      }
      if (cVar1 < '\0') {
        uVar4 = vextractps_avx(auVar24,3);
        *(undefined4 *)(param_2 + 0x58 + lVar8 * 0xc) = uVar4;
      }
      if ((uVar2 & 1) != 0) {
        *(int *)(param_2 + 8 + lVar8 * 0xc) = auVar15._0_4_;
      }
      if ((uVar2 & 2) != 0) {
        uVar4 = vextractps_avx(auVar60,1);
        *(undefined4 *)(param_2 + 0x14 + lVar8 * 0xc) = uVar4;
      }
      if ((uVar2 & 4) != 0) {
        uVar4 = vextractps_avx(auVar60,2);
        *(undefined4 *)(param_2 + 0x20 + lVar8 * 0xc) = uVar4;
      }
      if ((uVar2 & 8) != 0) {
        uVar4 = vextractps_avx(auVar60,3);
        *(undefined4 *)(param_2 + 0x2c + lVar8 * 0xc) = uVar4;
      }
      if ((uVar2 & 0x10) != 0) {
        *(int *)(param_2 + 0x38 + lVar8 * 0xc) = auVar15._16_4_;
      }
      if ((uVar2 & 0x20) != 0) {
        uVar4 = vextractps_avx(auVar17,1);
        *(undefined4 *)(param_2 + 0x44 + lVar8 * 0xc) = uVar4;
      }
      if ((uVar2 & 0x40) != 0) {
        uVar4 = vextractps_avx(auVar17,2);
        *(undefined4 *)(param_2 + 0x50 + lVar8 * 0xc) = uVar4;
      }
      if (cVar1 < '\0') {
        uVar4 = vextractps_avx(auVar17,3);
        *(undefined4 *)(param_2 + 0x5c + lVar8 * 0xc) = uVar4;
      }
    }
  }
  return;
}


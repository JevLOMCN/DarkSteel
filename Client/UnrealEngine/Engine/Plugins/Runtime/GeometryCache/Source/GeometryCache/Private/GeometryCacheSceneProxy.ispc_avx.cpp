// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 10

// InterpolatePositions___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_uniunfunf_avx @ 140caef40

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolatePositions___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_uniunfunf_avx
               (longlong param_1,longlong param_2,longlong param_3,uint param_4,uint param_5,
               uint param_6)

{
  undefined1 (*pauVar1) [32];
  longlong lVar2;
  undefined1 (*pauVar3) [16];
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  longlong in_R11;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar13;
  float fVar28;
  undefined1 auVar17 [16];
  float fVar26;
  float fVar27;
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar29 [16];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar30 [16];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [16];
  undefined1 auVar40 [32];
  uint uVar42;
  float fVar43;
  uint uVar48;
  uint uVar50;
  uint uVar52;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  uint uVar57;
  undefined1 auVar46 [32];
  float fVar49;
  float fVar51;
  float fVar53;
  undefined1 auVar47 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
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
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  longlong lVar12;
  undefined1 auVar20 [32];
  undefined1 auVar25 [32];
  undefined1 auVar35 [32];
  undefined1 auVar41 [32];
  
  auVar21 = ___ymm_0000000600000007000000040000000000000001000000020000000000000000;
  uVar8 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar8 = param_4;
  }
  if ((int)(uVar8 & 0xfffffff8) < 1) {
    uVar4 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    auVar17 = vshufps_avx(ZEXT416(param_5),ZEXT416(param_5),0);
    auVar30 = vshufps_avx(ZEXT416(param_6),ZEXT416(param_6),0);
    in_R11 = 0x40;
    uVar4 = 0;
    do {
      auVar14 = *(undefined1 (*) [16])(param_1 + -0x40 + in_R11);
      auVar29 = *(undefined1 (*) [16])(param_1 + -0x30 + in_R11);
      auVar15 = *(undefined1 (*) [16])(param_1 + -0x10 + in_R11);
      auVar73._16_16_ = auVar29;
      auVar73._0_16_ = auVar14;
      auVar76._16_16_ = auVar15;
      auVar76._0_16_ = *(undefined1 (*) [16])(param_1 + -0x20 + in_R11);
      auVar39 = *(undefined1 (*) [16])(param_1 + 0x10 + in_R11);
      auVar78._16_16_ = auVar39;
      auVar78._0_16_ = *(undefined1 (*) [16])(param_1 + in_R11);
      auVar65._16_16_ = auVar14;
      auVar65._0_16_ = auVar29;
      auVar20 = vblendps_avx(auVar73,auVar65,0x24);
      auVar20 = vpermilps_avx(auVar20,
                              ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                             );
      uVar11 = *(undefined4 *)(param_1 + -0x18 + in_R11);
      auVar18._20_4_ = uVar11;
      auVar18._16_4_ = uVar11;
      auVar18._24_4_ = uVar11;
      auVar18._28_4_ = uVar11;
      uVar11 = *(undefined4 *)(param_1 + -0x1c + in_R11);
      auVar18._4_4_ = uVar11;
      auVar18._0_4_ = uVar11;
      auVar18._8_4_ = uVar11;
      auVar18._12_4_ = uVar11;
      auVar20 = vblendps_avx(auVar20,auVar18,0x88);
      auVar31._16_16_ = *(undefined1 (*) [16])(param_1 + in_R11);
      auVar31._0_16_ = auVar39;
      auVar18 = vblendps_avx(auVar31,auVar78,0x44);
      auVar18 = vpermilps_avx(auVar18,auVar21);
      uVar11 = *(undefined4 *)(param_1 + -0xc + in_R11);
      auVar67._20_4_ = uVar11;
      auVar67._16_4_ = uVar11;
      auVar67._24_4_ = uVar11;
      auVar67._28_4_ = uVar11;
      auVar14 = vshufps_avx(auVar15,auVar15,0xec);
      auVar67._0_16_ = auVar14;
      auVar18 = vblendps_avx(auVar18,auVar67,0x13);
      auVar65 = vperm2f128_avx(auVar20,auVar18,0x31);
      auVar33 = vblendps_avx(auVar76,auVar73,0x24);
      auVar33 = vshufps_avx(ZEXT1632(auVar29),auVar33,0x21);
      auVar33 = vshufps_avx(auVar33,auVar76,0xc2);
      auVar19 = vshufps_avx(auVar31,auVar78,0xc4);
      auVar33 = vblendps_avx(auVar33,auVar19,0xe0);
      auVar14 = *(undefined1 (*) [16])(param_2 + -0x40 + in_R11);
      auVar29 = *(undefined1 (*) [16])(param_2 + -0x30 + in_R11);
      auVar15 = *(undefined1 (*) [16])(param_2 + -0x10 + in_R11);
      auVar77._16_16_ = auVar29;
      auVar77._0_16_ = auVar14;
      auVar32._16_16_ = auVar15;
      auVar32._0_16_ = *(undefined1 (*) [16])(param_2 + -0x20 + in_R11);
      auVar39 = *(undefined1 (*) [16])(param_2 + 0x10 + in_R11);
      auVar60._16_16_ = auVar39;
      auVar60._0_16_ = *(undefined1 (*) [16])(param_2 + in_R11);
      auVar19._16_16_ = auVar14;
      auVar19._0_16_ = auVar29;
      auVar19 = vblendps_avx(auVar77,auVar19,0x24);
      auVar19 = vpermilps_avx(auVar19,
                              ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                             );
      uVar11 = *(undefined4 *)(param_2 + -0x18 + in_R11);
      auVar44._20_4_ = uVar11;
      auVar44._16_4_ = uVar11;
      auVar44._24_4_ = uVar11;
      auVar44._28_4_ = uVar11;
      uVar11 = *(undefined4 *)(param_2 + -0x1c + in_R11);
      auVar44._4_4_ = uVar11;
      auVar44._0_4_ = uVar11;
      auVar44._8_4_ = uVar11;
      auVar44._12_4_ = uVar11;
      auVar19 = vblendps_avx(auVar19,auVar44,0x88);
      auVar45._16_16_ = *(undefined1 (*) [16])(param_2 + in_R11);
      auVar45._0_16_ = auVar39;
      auVar31 = vblendps_avx(auVar45,auVar60,0x44);
      auVar31 = vpermilps_avx(auVar31,auVar21);
      uVar11 = *(undefined4 *)(param_2 + -0xc + in_R11);
      auVar74._20_4_ = uVar11;
      auVar74._16_4_ = uVar11;
      auVar74._24_4_ = uVar11;
      auVar74._28_4_ = uVar11;
      auVar14 = vshufps_avx(auVar15,auVar15,0xec);
      auVar74._0_16_ = auVar14;
      auVar31 = vblendps_avx(auVar31,auVar74,0x13);
      auVar44 = vperm2f128_avx(auVar19,auVar31,0x31);
      auVar34 = vblendps_avx(auVar32,auVar77,0x24);
      auVar34 = vshufps_avx(ZEXT1632(auVar29),auVar34,0x21);
      auVar34 = vshufps_avx(auVar34,auVar32,0xc2);
      auVar32 = vshufps_avx(auVar45,auVar60,0xc4);
      auVar34 = vblendps_avx(auVar34,auVar32,0xe0);
      fVar13 = auVar17._0_4_;
      fVar27 = auVar17._4_4_;
      fVar43 = auVar17._8_4_;
      fVar51 = auVar17._12_4_;
      fVar26 = auVar30._0_4_;
      fVar28 = auVar30._4_4_;
      fVar49 = auVar30._8_4_;
      fVar53 = auVar30._12_4_;
      auVar29._0_4_ = auVar19._0_4_ * fVar26 + auVar20._0_4_ * fVar13;
      auVar29._4_4_ = auVar19._4_4_ * fVar28 + auVar20._4_4_ * fVar27;
      auVar29._8_4_ = auVar19._8_4_ * fVar49 + auVar20._8_4_ * fVar43;
      auVar29._12_4_ = auVar19._12_4_ * fVar53 + auVar20._12_4_ * fVar51;
      auVar68._16_4_ = auVar31._0_4_ * fVar26 + auVar18._0_4_ * fVar13;
      auVar68._0_16_ = auVar29;
      auVar68._20_4_ = auVar31._4_4_ * fVar28 + auVar18._4_4_ * fVar27;
      auVar68._24_4_ = auVar31._8_4_ * fVar49 + auVar18._8_4_ * fVar43;
      auVar68._28_4_ = auVar31._12_4_ * fVar53 + auVar18._12_4_ * fVar51;
      auVar14._0_4_ = auVar65._0_4_ * fVar13 + fVar26 * auVar44._0_4_;
      auVar14._4_4_ = auVar65._4_4_ * fVar27 + fVar28 * auVar44._4_4_;
      auVar14._8_4_ = auVar65._8_4_ * fVar43 + fVar49 * auVar44._8_4_;
      auVar14._12_4_ = auVar65._12_4_ * fVar51 + fVar53 * auVar44._12_4_;
      auVar20._16_4_ = auVar65._16_4_ * fVar13 + fVar26 * auVar44._16_4_;
      auVar20._0_16_ = auVar14;
      auVar20._20_4_ = auVar65._20_4_ * fVar27 + fVar28 * auVar44._20_4_;
      auVar20._24_4_ = auVar65._24_4_ * fVar43 + fVar49 * auVar44._24_4_;
      auVar20._28_4_ = auVar65._28_4_ * fVar51 + fVar53 * auVar44._28_4_;
      auVar66._0_4_ = auVar33._0_4_ * fVar13 + fVar26 * auVar34._0_4_;
      auVar66._4_4_ = auVar33._4_4_ * fVar27 + fVar28 * auVar34._4_4_;
      auVar66._8_4_ = auVar33._8_4_ * fVar43 + fVar49 * auVar34._8_4_;
      auVar66._12_4_ = auVar33._12_4_ * fVar51 + fVar53 * auVar34._12_4_;
      auVar66._16_4_ = auVar33._16_4_ * fVar13 + fVar26 * auVar34._16_4_;
      auVar66._20_4_ = auVar33._20_4_ * fVar27 + fVar28 * auVar34._20_4_;
      auVar66._24_4_ = auVar33._24_4_ * fVar43 + fVar49 * auVar34._24_4_;
      auVar66._28_4_ = auVar33._28_4_ * fVar51 + fVar53 * auVar34._28_4_;
      auVar33._16_16_ = auVar14;
      auVar33._0_16_ = auVar29;
      auVar33 = vshufpd_avx(auVar68,auVar33,2);
      auVar29 = auVar20._16_16_;
      auVar14 = vshufpd_avx(auVar14,auVar29,1);
      auVar19 = vperm2f128_avx(auVar66,auVar66,1);
      auVar20 = vshufps_avx(auVar66,auVar19,0x30);
      auVar20 = vshufps_avx(auVar19,auVar20,0x29);
      auVar20 = vblendps_avx(auVar20,ZEXT1632(auVar14),7);
      auVar31 = vperm2f128_avx(auVar20,auVar20,1);
      auVar18 = vunpcklpd_avx(auVar31,auVar66);
      auVar19 = vshufps_avx(auVar19,auVar18,0x24);
      auVar18 = vperm2f128_avx(auVar33,auVar33,1);
      auVar18 = vblendps_avx(auVar33,auVar18,0x44);
      auVar18 = vpermilps_avx(auVar18,
                              ___ymm_0000000000000006000000000000000700000001000000000000000200000000
                             );
      auVar18 = vblendps_avx(auVar18,auVar19,0xa4);
      *(undefined1 (*) [16])(param_3 + -0x30 + in_R11) = auVar18._16_16_;
      *(undefined1 (*) [16])(param_3 + -0x40 + in_R11) = auVar18._0_16_;
      auVar18 = vpermilps_avx(auVar20,
                              ___ymm_0000000000000007000000000000000000000000000000010000000000000000
                             );
      auVar20 = vshufps_avx(auVar31,auVar31,0xa9);
      auVar20 = vblendps_avx(auVar20,auVar18,0x44);
      auVar18 = vshufpd_avx(auVar33,auVar33,1);
      auVar20 = vblendps_avx(auVar20,auVar18,0x92);
      *(undefined1 (*) [16])(param_3 + -0x10 + in_R11) = auVar20._16_16_;
      *(undefined1 (*) [16])(param_3 + -0x20 + in_R11) = auVar20._0_16_;
      auVar14 = vshufps_avx(auVar68._16_16_,auVar29,0x9e);
      auVar29 = vshufps_avx(auVar29,auVar29,0xff);
      auVar34._16_16_ = auVar29;
      auVar34._0_16_ = auVar14;
      auVar18 = vperm2f128_avx(auVar66,ZEXT1632(auVar14),0x21);
      auVar20 = vblendps_avx(auVar34,auVar66,0xe0);
      auVar18 = vshufps_avx(auVar18,auVar20,0x21);
      auVar20 = vshufps_avx(auVar18,auVar20,0xc2);
      *(undefined1 (*) [16])(param_3 + 0x10 + in_R11) = auVar20._16_16_;
      *(undefined1 (*) [16])(param_3 + in_R11) = auVar20._0_16_;
      in_R11 = in_R11 + 0x60;
      uVar4 = uVar4 + 8;
    } while ((int)uVar4 < (int)(uVar8 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar4) {
      return;
    }
  }
  auVar17 = vpshufd_avx(ZEXT416(uVar4),0);
  auVar21._16_16_ = auVar17;
  auVar21._0_16_ = auVar17;
  auVar14 = vpshufd_avx(ZEXT416(param_4),0);
  uVar6 = (ulonglong)uVar4;
  pauVar1 = (undefined1 (*) [32])(param_1 + uVar6 * 0xc);
  auVar29 = SUB3216(auVar21 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar15 = SUB3216(auVar21 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar17 = vpcmpgtd_avx(auVar14,auVar15);
  auVar30 = vpcmpgtd_avx(auVar14,auVar29);
  auVar22._16_16_ = auVar17;
  auVar22._0_16_ = auVar30;
  uVar8 = vmovmskps_avx(auVar22);
  if (uVar8 == 0xff) {
    auVar18 = pauVar1[2];
    auVar23._16_16_ = *(undefined1 (*) [16])*pauVar1;
    auVar23._0_16_ = *(undefined1 (*) [16])(*pauVar1 + 0x10);
    auVar21 = vblendps_avx(*pauVar1,auVar23,0x24);
    auVar21 = vpermilps_avx(auVar21,
                            ___ymm_0000000000000007000000040000000500000000000000020000000300000000)
    ;
    uVar11 = *(undefined4 *)(pauVar1[1] + 4);
    auVar69._4_4_ = uVar11;
    auVar69._0_4_ = uVar11;
    auVar69._8_4_ = uVar11;
    auVar69._12_4_ = uVar11;
    uVar11 = *(undefined4 *)(pauVar1[1] + 8);
    auVar69._20_4_ = uVar11;
    auVar69._16_4_ = uVar11;
    auVar69._24_4_ = uVar11;
    auVar69._28_4_ = uVar11;
    auVar21 = vblendps_avx(auVar21,auVar69,0x88);
    auVar70._16_16_ = *(undefined1 (*) [16])pauVar1[2];
    auVar70._0_16_ = *(undefined1 (*) [16])(pauVar1[2] + 0x10);
    auVar20 = vblendps_avx(auVar70,auVar18,0x44);
    auVar20 = vpermilps_avx(auVar20,
                            ___ymm_0000000600000007000000040000000000000001000000020000000000000000)
    ;
    auVar17 = vshufps_avx(*(undefined1 (*) [16])(pauVar1[1] + 0x10),
                          *(undefined1 (*) [16])(pauVar1[1] + 0x10),0xec);
    uVar11 = *(undefined4 *)(pauVar1[1] + 0x14);
    auVar37._20_4_ = uVar11;
    auVar37._16_4_ = uVar11;
    auVar37._24_4_ = uVar11;
    auVar37._28_4_ = uVar11;
    auVar37._0_16_ = auVar17;
    auVar20 = vblendps_avx(auVar20,auVar37,0x13);
    auVar36._16_16_ = auVar20._0_16_;
    auVar36._0_16_ = auVar21._0_16_;
    auVar40 = vperm2f128_avx(auVar21,auVar20,0x31);
    auVar21 = vblendps_avx(pauVar1[1],*pauVar1,0x24);
    auVar21 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])(*pauVar1 + 0x10)),auVar21,0x21);
    auVar21 = vshufps_avx(auVar21,pauVar1[1],0xc2);
    auVar20 = vshufps_avx(auVar70,auVar18,0xc4);
    auVar46 = vblendps_avx(auVar21,auVar20,0xe0);
    auVar17 = *(undefined1 (*) [16])(param_2 + uVar6 * 0xc);
    auVar30 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar6 * 0xc);
    auVar14 = *(undefined1 (*) [16])(param_2 + 0x30 + uVar6 * 0xc);
    auVar71._16_16_ = auVar30;
    auVar71._0_16_ = auVar17;
    auVar29 = *(undefined1 (*) [16])(param_2 + 0x50 + uVar6 * 0xc);
    auVar15 = *(undefined1 (*) [16])(param_2 + 0x40 + uVar6 * 0xc);
    auVar24._16_16_ = auVar17;
    auVar24._0_16_ = auVar30;
    auVar21 = vblendps_avx(auVar71,auVar24,0x24);
    auVar21 = vpermilps_avx(auVar21,
                            ___ymm_0000000000000007000000040000000500000000000000020000000300000000)
    ;
    uVar11 = *(undefined4 *)(param_2 + 0x28 + uVar6 * 0xc);
    auVar59._20_4_ = uVar11;
    auVar59._16_4_ = uVar11;
    auVar59._24_4_ = uVar11;
    auVar59._28_4_ = uVar11;
    uVar11 = *(undefined4 *)(param_2 + 0x24 + uVar6 * 0xc);
    auVar59._4_4_ = uVar11;
    auVar59._0_4_ = uVar11;
    auVar59._8_4_ = uVar11;
    auVar59._12_4_ = uVar11;
    uVar11 = *(undefined4 *)(param_2 + 0x34 + uVar6 * 0xc);
    auVar62._20_4_ = uVar11;
    auVar62._16_4_ = uVar11;
    auVar62._24_4_ = uVar11;
    auVar62._28_4_ = uVar11;
    auVar64._16_16_ = auVar14;
    auVar64._0_16_ = *(undefined1 (*) [16])(param_2 + 0x20 + uVar6 * 0xc);
    auVar75._16_16_ = auVar29;
    auVar75._0_16_ = auVar15;
    auVar21 = vblendps_avx(auVar21,auVar59,0x88);
    auVar72._16_16_ = auVar15;
    auVar72._0_16_ = auVar29;
    auVar20 = vblendps_avx(auVar72,auVar75,0x44);
    auVar20 = vpermilps_avx(auVar20,
                            ___ymm_0000000600000007000000040000000000000001000000020000000000000000)
    ;
    auVar17 = vshufps_avx(auVar14,auVar14,0xec);
    auVar62._0_16_ = auVar17;
    auVar20 = vblendps_avx(auVar20,auVar62,0x13);
    auVar58._16_16_ = auVar20._0_16_;
    auVar58._0_16_ = auVar21._0_16_;
    auVar61 = vperm2f128_avx(auVar21,auVar20,0x31);
    auVar21 = vblendps_avx(auVar64,auVar71,0x24);
    auVar21 = vshufps_avx(ZEXT1632(auVar30),auVar21,0x21);
    auVar21 = vshufps_avx(auVar21,auVar64,0xc2);
    auVar20 = vshufps_avx(auVar72,auVar75,0xc4);
    auVar63 = vblendps_avx(auVar21,auVar20,0xe0);
  }
  else {
    auVar17 = vpcmpgtd_avx(auVar14,auVar15);
    auVar30 = vpcmpgtd_avx(auVar14,auVar29);
    uVar42 = auVar30._0_4_;
    auVar15._0_4_ = uVar42 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000
    ;
    uVar48 = auVar30._4_4_;
    auVar15._4_4_ = uVar48 & _UNK_150b50b04;
    uVar50 = auVar30._8_4_;
    auVar15._8_4_ = uVar50 & _UNK_150b50b08;
    uVar52 = auVar30._12_4_;
    auVar15._12_4_ = uVar52 & _UNK_150b50b0c;
    uVar54 = auVar17._0_4_;
    uVar55 = auVar17._4_4_;
    uVar56 = auVar17._8_4_;
    uVar57 = auVar17._12_4_;
    uVar4 = vextractps_avx(auVar15,1);
    uVar9 = vextractps_avx(auVar15,2);
    uVar11 = vextractps_avx(auVar15,3);
    lVar12 = CONCAT44((int)((ulonglong)in_R11 >> 0x20),uVar11);
    auVar17 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar1 + (uVar54 & _UNK_150b50b10))),
                            ZEXT416(*(uint *)(*pauVar1 + (uVar55 & _UNK_150b50b14))),0x10);
    auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)(*pauVar1 + (uVar56 & _UNK_150b50b18))),0x20);
    auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)(*pauVar1 + (uVar57 & _UNK_150b50b1c))),0x30);
    auVar30 = vinsertps_avx(ZEXT416(*(uint *)*pauVar1),ZEXT416(*(uint *)(*pauVar1 + uVar4)),0x10);
    auVar30 = vinsertps_avx(auVar30,ZEXT416(*(uint *)(*pauVar1 + uVar9)),0x20);
    auVar30 = vinsertps_avx(auVar30,ZEXT416(*(uint *)(*pauVar1 + lVar12)),0x30);
    auVar16._0_4_ = uVar42 & ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004
    ;
    auVar16._4_4_ = uVar48 & _UNK_150b50b24;
    auVar16._8_4_ = uVar50 & _UNK_150b50b28;
    auVar16._12_4_ = uVar52 & _UNK_150b50b2c;
    uVar5 = vextractps_avx(auVar16,1);
    uVar10 = vextractps_avx(auVar16,2);
    auVar14 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar1 + (uVar54 & _UNK_150b50b30))),
                            ZEXT416(*(uint *)(*pauVar1 + (uVar55 & _UNK_150b50b34))),0x10);
    auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(*pauVar1 + (uVar56 & _UNK_150b50b38))),0x20);
    auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(*pauVar1 + (uVar57 & _UNK_150b50b3c))),0x30);
    auVar29 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar1 + auVar16._0_4_)),
                            ZEXT416(*(uint *)(*pauVar1 + uVar5)),0x10);
    auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)(*pauVar1 + uVar10)),0x20);
    auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)(*pauVar1 + auVar16._12_4_)),0x30);
    auVar15 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar1 + (uVar54 & _UNK_150b50b50))),
                            ZEXT416(*(uint *)(*pauVar1 + (uVar55 & _UNK_150b50b54))),0x10);
    auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(*pauVar1 + (uVar56 & _UNK_150b50b58))),0x20);
    auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(*pauVar1 + (uVar57 & _UNK_150b50b5c))),0x30);
    auVar39 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar1 +
                                             (uVar42 & 
                                             ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008
                                             ))),
                            ZEXT416(*(uint *)(*pauVar1 + (uVar48 & _UNK_150b50b44))),0x10);
    auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(*pauVar1 + (uVar50 & _UNK_150b50b48))),0x20);
    auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(*pauVar1 + (uVar52 & _UNK_150b50b4c))),0x30);
    auVar36._16_16_ = auVar17;
    auVar36._0_16_ = auVar30;
    auVar40._16_16_ = auVar14;
    auVar40._0_16_ = auVar29;
    auVar46._16_16_ = auVar15;
    auVar46._0_16_ = auVar39;
    lVar2 = param_2 + uVar6 * 0xc;
    auVar17 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar54 & _UNK_150b50b10) + lVar2)),
                            ZEXT416(*(uint *)((ulonglong)(uVar55 & _UNK_150b50b14) + lVar2)),0x10);
    auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)((ulonglong)(uVar56 & _UNK_150b50b18) + lVar2))
                            ,0x20);
    auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)((ulonglong)(uVar57 & _UNK_150b50b1c) + lVar2))
                            ,0x30);
    auVar30 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + uVar6 * 0xc)),
                            ZEXT416(*(uint *)((ulonglong)uVar4 + lVar2)),0x10);
    auVar30 = vinsertps_avx(auVar30,ZEXT416(*(uint *)((ulonglong)uVar9 + lVar2)),0x20);
    auVar30 = vinsertps_avx(auVar30,ZEXT416(*(uint *)(lVar12 + lVar2)),0x30);
    auVar14 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar54 & _UNK_150b50b30) + lVar2)),
                            ZEXT416(*(uint *)((ulonglong)(uVar55 & _UNK_150b50b34) + lVar2)),0x10);
    auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)((ulonglong)(uVar56 & _UNK_150b50b38) + lVar2))
                            ,0x20);
    auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)((ulonglong)(uVar57 & _UNK_150b50b3c) + lVar2))
                            ,0x30);
    auVar29 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar16._0_4_ + lVar2)),
                            ZEXT416(*(uint *)((ulonglong)uVar5 + lVar2)),0x10);
    auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)((ulonglong)uVar10 + lVar2)),0x20);
    auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)((ulonglong)auVar16._12_4_ + lVar2)),0x30);
    auVar15 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar54 & _UNK_150b50b50) + lVar2)),
                            ZEXT416(*(uint *)((ulonglong)(uVar55 & _UNK_150b50b54) + lVar2)),0x10);
    auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)((ulonglong)(uVar56 & _UNK_150b50b58) + lVar2))
                            ,0x20);
    auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)((ulonglong)(uVar57 & _UNK_150b50b5c) + lVar2))
                            ,0x30);
    auVar39 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                              (uVar42 & 
                                              ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008
                                              ) + lVar2)),
                            ZEXT416(*(uint *)((ulonglong)(uVar48 & _UNK_150b50b44) + lVar2)),0x10);
    auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)((ulonglong)(uVar50 & _UNK_150b50b48) + lVar2))
                            ,0x20);
    auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)((ulonglong)(uVar52 & _UNK_150b50b4c) + lVar2))
                            ,0x30);
    auVar58._16_16_ = auVar17;
    auVar58._0_16_ = auVar30;
    auVar61._16_16_ = auVar14;
    auVar61._0_16_ = auVar29;
    auVar63._16_16_ = auVar15;
    auVar63._0_16_ = auVar39;
  }
  auVar17 = vshufps_avx(ZEXT416(param_5),ZEXT416(param_5),0);
  fVar13 = auVar17._0_4_;
  fVar26 = auVar17._4_4_;
  fVar27 = auVar17._8_4_;
  fVar28 = auVar17._12_4_;
  auVar17 = vshufps_avx(ZEXT416(param_6),ZEXT416(param_6),0);
  fVar43 = auVar17._0_4_;
  fVar49 = auVar17._4_4_;
  fVar51 = auVar17._8_4_;
  fVar53 = auVar17._12_4_;
  auVar39._0_4_ = fVar13 * auVar36._0_4_ + fVar43 * auVar58._0_4_;
  auVar39._4_4_ = fVar26 * auVar36._4_4_ + fVar49 * auVar58._4_4_;
  auVar39._8_4_ = fVar27 * auVar36._8_4_ + fVar51 * auVar58._8_4_;
  auVar39._12_4_ = fVar28 * auVar36._12_4_ + fVar53 * auVar58._12_4_;
  auVar41._16_4_ = fVar13 * auVar36._16_4_ + fVar43 * auVar58._16_4_;
  auVar41._0_16_ = auVar39;
  auVar41._20_4_ = fVar26 * auVar36._20_4_ + fVar49 * auVar58._20_4_;
  auVar41._24_4_ = fVar27 * auVar36._24_4_ + fVar51 * auVar58._24_4_;
  auVar41._28_4_ = fVar28 * auVar36._28_4_ + fVar53 * auVar58._28_4_;
  auVar30._0_4_ = fVar13 * auVar40._0_4_ + fVar43 * auVar61._0_4_;
  auVar30._4_4_ = fVar26 * auVar40._4_4_ + fVar49 * auVar61._4_4_;
  auVar30._8_4_ = fVar27 * auVar40._8_4_ + fVar51 * auVar61._8_4_;
  auVar30._12_4_ = fVar28 * auVar40._12_4_ + fVar53 * auVar61._12_4_;
  auVar35._16_4_ = fVar13 * auVar40._16_4_ + fVar43 * auVar61._16_4_;
  auVar35._0_16_ = auVar30;
  auVar35._20_4_ = fVar26 * auVar40._20_4_ + fVar49 * auVar61._20_4_;
  auVar35._24_4_ = fVar27 * auVar40._24_4_ + fVar51 * auVar61._24_4_;
  auVar35._28_4_ = fVar28 * auVar40._28_4_ + fVar53 * auVar61._28_4_;
  auVar17._0_4_ = fVar13 * auVar46._0_4_ + fVar43 * auVar63._0_4_;
  auVar17._4_4_ = fVar26 * auVar46._4_4_ + fVar49 * auVar63._4_4_;
  auVar17._8_4_ = fVar27 * auVar46._8_4_ + fVar51 * auVar63._8_4_;
  auVar17._12_4_ = fVar28 * auVar46._12_4_ + fVar53 * auVar63._12_4_;
  auVar25._16_4_ = fVar13 * auVar46._16_4_ + fVar43 * auVar63._16_4_;
  auVar25._0_16_ = auVar17;
  auVar25._20_4_ = fVar26 * auVar46._20_4_ + fVar49 * auVar63._20_4_;
  auVar25._24_4_ = fVar27 * auVar46._24_4_ + fVar51 * auVar63._24_4_;
  auVar25._28_4_ = fVar28 * auVar46._28_4_ + fVar53 * auVar63._28_4_;
  pauVar3 = (undefined1 (*) [16])(param_3 + uVar6 * 0xc);
  auVar29 = auVar41._16_16_;
  cVar7 = (char)uVar8;
  auVar14 = auVar35._16_16_;
  if (cVar7 == -1) {
    auVar47._16_16_ = auVar30;
    auVar47._0_16_ = auVar39;
    auVar18 = vshufpd_avx(auVar41,auVar47,2);
    auVar33 = vperm2f128_avx(auVar25,auVar25,1);
    auVar21 = vshufps_avx(auVar25,auVar33,0x30);
    auVar21 = vshufps_avx(auVar33,auVar21,0x29);
    auVar17 = vshufpd_avx(auVar30,auVar14,1);
    auVar21 = vblendps_avx(auVar21,ZEXT1632(auVar17),7);
    auVar19 = vperm2f128_avx(auVar21,auVar21,1);
    auVar20 = vunpcklpd_avx(auVar19,auVar25);
    auVar33 = vshufps_avx(auVar33,auVar20,0x24);
    auVar20 = vperm2f128_avx(auVar18,auVar18,1);
    auVar20 = vblendps_avx(auVar18,auVar20,0x44);
    auVar20 = vpermilps_avx(auVar20,
                            ___ymm_0000000000000006000000000000000700000001000000000000000200000000)
    ;
    auVar20 = vblendps_avx(auVar20,auVar33,0xa4);
    pauVar3[1] = auVar20._16_16_;
    auVar33 = vpermilps_avx(auVar21,
                            ___ymm_0000000000000007000000000000000000000000000000010000000000000000)
    ;
    *pauVar3 = auVar20._0_16_;
    auVar21 = vshufps_avx(auVar19,auVar19,0xa9);
    auVar21 = vblendps_avx(auVar21,auVar33,0x44);
    auVar20 = vshufpd_avx(auVar18,auVar18,1);
    auVar21 = vblendps_avx(auVar21,auVar20,0x92);
    pauVar3[3] = auVar21._16_16_;
    pauVar3[2] = auVar21._0_16_;
    auVar17 = vshufps_avx(auVar29,auVar14,0x9e);
    auVar30 = vshufps_avx(auVar14,auVar14,0xff);
    auVar38._16_16_ = auVar30;
    auVar38._0_16_ = auVar17;
    auVar20 = vperm2f128_avx(auVar25,ZEXT1632(auVar17),0x21);
    auVar21 = vblendps_avx(auVar38,auVar25,0xe0);
    auVar20 = vshufps_avx(auVar20,auVar21,0x21);
    auVar21 = vshufps_avx(auVar20,auVar21,0xc2);
    pauVar3[5] = auVar21._16_16_;
    pauVar3[4] = auVar21._0_16_;
  }
  else {
    auVar15 = auVar25._16_16_;
    if ((uVar8 & 1) != 0) {
      *(float *)*pauVar3 = auVar39._0_4_;
    }
    if ((uVar8 & 2) != 0) {
      uVar11 = vextractps_avx(auVar39,1);
      *(undefined4 *)(*pauVar3 + 0xc) = uVar11;
    }
    if ((uVar8 & 4) != 0) {
      uVar11 = vextractps_avx(auVar39,2);
      *(undefined4 *)(pauVar3[1] + 8) = uVar11;
    }
    if ((uVar8 & 8) != 0) {
      uVar11 = vextractps_avx(auVar39,3);
      *(undefined4 *)(pauVar3[2] + 4) = uVar11;
    }
    if ((uVar8 & 0x10) != 0) {
      *(float *)pauVar3[3] = auVar41._16_4_;
    }
    if ((uVar8 & 0x20) != 0) {
      uVar11 = vextractps_avx(auVar29,1);
      *(undefined4 *)(pauVar3[3] + 0xc) = uVar11;
    }
    if ((uVar8 & 0x40) != 0) {
      uVar11 = vextractps_avx(auVar29,2);
      *(undefined4 *)(pauVar3[4] + 8) = uVar11;
    }
    if (cVar7 < '\0') {
      uVar11 = vextractps_avx(auVar29,3);
      *(undefined4 *)(pauVar3[5] + 4) = uVar11;
    }
    if ((uVar8 & 1) != 0) {
      *(float *)(*pauVar3 + 4) = auVar30._0_4_;
    }
    if ((uVar8 & 2) != 0) {
      uVar11 = vextractps_avx(auVar30,1);
      *(undefined4 *)pauVar3[1] = uVar11;
    }
    if ((uVar8 & 4) != 0) {
      uVar11 = vextractps_avx(auVar30,2);
      *(undefined4 *)(pauVar3[1] + 0xc) = uVar11;
    }
    if ((uVar8 & 8) != 0) {
      uVar11 = vextractps_avx(auVar30,3);
      *(undefined4 *)(pauVar3[2] + 8) = uVar11;
    }
    if ((uVar8 & 0x10) != 0) {
      *(float *)(pauVar3[3] + 4) = auVar35._16_4_;
    }
    if ((uVar8 & 0x20) != 0) {
      uVar11 = vextractps_avx(auVar14,1);
      *(undefined4 *)pauVar3[4] = uVar11;
    }
    if ((uVar8 & 0x40) != 0) {
      uVar11 = vextractps_avx(auVar14,2);
      *(undefined4 *)(pauVar3[4] + 0xc) = uVar11;
    }
    if (cVar7 < '\0') {
      uVar11 = vextractps_avx(auVar14,3);
      *(undefined4 *)(pauVar3[5] + 8) = uVar11;
    }
    if ((uVar8 & 1) != 0) {
      *(float *)(*pauVar3 + 8) = auVar17._0_4_;
    }
    if ((uVar8 & 2) != 0) {
      uVar11 = vextractps_avx(auVar17,1);
      *(undefined4 *)(pauVar3[1] + 4) = uVar11;
    }
    if ((uVar8 & 4) != 0) {
      uVar11 = vextractps_avx(auVar17,2);
      *(undefined4 *)pauVar3[2] = uVar11;
    }
    if ((uVar8 & 8) != 0) {
      uVar11 = vextractps_avx(auVar17,3);
      *(undefined4 *)(pauVar3[2] + 0xc) = uVar11;
    }
    if ((uVar8 & 0x10) != 0) {
      *(float *)(pauVar3[3] + 8) = auVar25._16_4_;
    }
    if ((uVar8 & 0x20) != 0) {
      uVar11 = vextractps_avx(auVar15,1);
      *(undefined4 *)(pauVar3[4] + 4) = uVar11;
    }
    if ((uVar8 & 0x40) != 0) {
      uVar11 = vextractps_avx(auVar15,2);
      *(undefined4 *)pauVar3[5] = uVar11;
    }
    if (cVar7 < '\0') {
      uVar11 = vextractps_avx(auVar15,3);
      *(undefined4 *)(pauVar3[5] + 0xc) = uVar11;
    }
  }
  return;
}

// InterpolateMotionVectors___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_uniunfunfunf_avx @ 140cafb10

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolateMotionVectors___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_uniunfunfunf_avx
               (longlong param_1,longlong param_2,longlong param_3,uint param_4,uint param_5,
               uint param_6,uint param_7)

{
  undefined1 (*pauVar1) [32];
  longlong lVar2;
  undefined1 (*pauVar3) [16];
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  longlong in_R11;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar28;
  undefined1 auVar17 [16];
  float fVar26;
  float fVar27;
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar29 [16];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar30 [16];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  float fVar42;
  float fVar48;
  undefined1 auVar43 [16];
  float fVar46;
  float fVar47;
  undefined1 auVar44 [32];
  float fVar49;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  uint uVar55;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  undefined1 auVar56 [32];
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
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  longlong lVar12;
  undefined1 auVar20 [32];
  undefined1 auVar25 [32];
  undefined1 auVar35 [32];
  undefined1 auVar45 [32];
  
  uVar6 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar6 = param_4;
  }
  if ((int)(uVar6 & 0xfffffff8) < 1) {
    uVar10 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    auVar17 = vshufps_avx(ZEXT416(param_5),ZEXT416(param_5),0);
    auVar30 = vshufps_avx(ZEXT416(param_6),ZEXT416(param_6),0);
    auVar15 = vshufps_avx(ZEXT416(param_7),ZEXT416(param_7),0);
    in_R11 = 0x40;
    uVar10 = 0;
    do {
      auVar14 = *(undefined1 (*) [16])(param_1 + -0x40 + in_R11);
      auVar29 = *(undefined1 (*) [16])(param_1 + -0x30 + in_R11);
      auVar43 = *(undefined1 (*) [16])(param_1 + -0x10 + in_R11);
      auVar81._16_16_ = auVar29;
      auVar81._0_16_ = auVar14;
      auVar82._16_16_ = auVar43;
      auVar82._0_16_ = *(undefined1 (*) [16])(param_1 + -0x20 + in_R11);
      auVar16 = *(undefined1 (*) [16])(param_1 + 0x10 + in_R11);
      auVar31._16_16_ = auVar16;
      auVar31._0_16_ = *(undefined1 (*) [16])(param_1 + in_R11);
      auVar75._16_16_ = auVar14;
      auVar75._0_16_ = auVar29;
      auVar20 = vblendps_avx(auVar81,auVar75,0x24);
      auVar20 = vpermilps_avx(auVar20,
                              ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                             );
      uVar11 = *(undefined4 *)(param_1 + -0x18 + in_R11);
      auVar36._20_4_ = uVar11;
      auVar36._16_4_ = uVar11;
      auVar36._24_4_ = uVar11;
      auVar36._28_4_ = uVar11;
      uVar11 = *(undefined4 *)(param_1 + -0x1c + in_R11);
      auVar36._4_4_ = uVar11;
      auVar36._0_4_ = uVar11;
      auVar36._8_4_ = uVar11;
      auVar36._12_4_ = uVar11;
      auVar20 = vblendps_avx(auVar20,auVar36,0x88);
      auVar18._16_16_ = *(undefined1 (*) [16])(param_1 + in_R11);
      auVar18._0_16_ = auVar16;
      auVar33 = vblendps_avx(auVar18,auVar31,0x44);
      auVar33 = vpermilps_avx(auVar33,
                              ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                             );
      uVar11 = *(undefined4 *)(param_1 + -0xc + in_R11);
      auVar76._20_4_ = uVar11;
      auVar76._16_4_ = uVar11;
      auVar76._24_4_ = uVar11;
      auVar76._28_4_ = uVar11;
      auVar14 = vshufps_avx(auVar43,auVar43,0xec);
      auVar76._0_16_ = auVar14;
      auVar33 = vblendps_avx(auVar33,auVar76,0x13);
      auVar36 = vperm2f128_avx(auVar20,auVar33,0x31);
      auVar34 = vblendps_avx(auVar82,auVar81,0x24);
      auVar34 = vshufps_avx(ZEXT1632(auVar29),auVar34,0x21);
      auVar34 = vshufps_avx(auVar34,auVar82,0xc2);
      auVar18 = vshufps_avx(auVar18,auVar31,0xc4);
      auVar34 = vblendps_avx(auVar34,auVar18,0xe0);
      auVar14 = *(undefined1 (*) [16])(param_2 + -0x40 + in_R11);
      auVar29 = *(undefined1 (*) [16])(param_2 + -0x30 + in_R11);
      auVar43 = *(undefined1 (*) [16])(param_2 + -0x10 + in_R11);
      auVar71._16_16_ = auVar29;
      auVar71._0_16_ = auVar14;
      auVar32._16_16_ = auVar43;
      auVar32._0_16_ = *(undefined1 (*) [16])(param_2 + -0x20 + in_R11);
      auVar16 = *(undefined1 (*) [16])(param_2 + 0x10 + in_R11);
      auVar73._16_16_ = auVar16;
      auVar73._0_16_ = *(undefined1 (*) [16])(param_2 + in_R11);
      auVar19._16_16_ = auVar14;
      auVar19._0_16_ = auVar29;
      auVar18 = vblendps_avx(auVar71,auVar19,0x24);
      auVar18 = vpermilps_avx(auVar18,
                              ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                             );
      uVar11 = *(undefined4 *)(param_2 + -0x18 + in_R11);
      auVar64._20_4_ = uVar11;
      auVar64._16_4_ = uVar11;
      auVar64._24_4_ = uVar11;
      auVar64._28_4_ = uVar11;
      uVar11 = *(undefined4 *)(param_2 + -0x1c + in_R11);
      auVar64._4_4_ = uVar11;
      auVar64._0_4_ = uVar11;
      auVar64._8_4_ = uVar11;
      auVar64._12_4_ = uVar11;
      auVar18 = vblendps_avx(auVar18,auVar64,0x88);
      auVar65._16_16_ = *(undefined1 (*) [16])(param_2 + in_R11);
      auVar65._0_16_ = auVar16;
      auVar19 = vblendps_avx(auVar65,auVar73,0x44);
      auVar19 = vpermilps_avx(auVar19,
                              ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                             );
      uVar11 = *(undefined4 *)(param_2 + -0xc + in_R11);
      auVar37._20_4_ = uVar11;
      auVar37._16_4_ = uVar11;
      auVar37._24_4_ = uVar11;
      auVar37._28_4_ = uVar11;
      auVar14 = vshufps_avx(auVar43,auVar43,0xec);
      auVar37._0_16_ = auVar14;
      auVar19 = vblendps_avx(auVar19,auVar37,0x13);
      auVar37 = vperm2f128_avx(auVar18,auVar19,0x31);
      auVar31 = vblendps_avx(auVar32,auVar71,0x24);
      auVar31 = vshufps_avx(ZEXT1632(auVar29),auVar31,0x21);
      auVar31 = vshufps_avx(auVar31,auVar32,0xc2);
      auVar32 = vshufps_avx(auVar65,auVar73,0xc4);
      auVar31 = vblendps_avx(auVar31,auVar32,0xe0);
      local_108 = auVar17._0_4_;
      fStack_104 = auVar17._4_4_;
      fStack_100 = auVar17._8_4_;
      fStack_fc = auVar17._12_4_;
      fVar13 = auVar30._0_4_;
      fVar26 = auVar30._4_4_;
      fVar27 = auVar30._8_4_;
      fVar28 = auVar30._12_4_;
      fVar42 = auVar15._0_4_;
      auVar29._0_4_ = fVar42 * (auVar20._0_4_ * local_108 + fVar13 * auVar18._0_4_);
      fVar46 = auVar15._4_4_;
      auVar29._4_4_ = fVar46 * (auVar20._4_4_ * fStack_104 + fVar26 * auVar18._4_4_);
      fVar47 = auVar15._8_4_;
      auVar29._8_4_ = fVar47 * (auVar20._8_4_ * fStack_100 + fVar27 * auVar18._8_4_);
      fVar48 = auVar15._12_4_;
      auVar29._12_4_ = fVar48 * (auVar20._12_4_ * fStack_fc + fVar28 * auVar18._12_4_);
      auVar38._16_4_ = fVar42 * (auVar33._0_4_ * local_108 + fVar13 * auVar19._0_4_);
      auVar38._0_16_ = auVar29;
      auVar38._20_4_ = fVar46 * (auVar33._4_4_ * fStack_104 + fVar26 * auVar19._4_4_);
      auVar38._24_4_ = fVar47 * (auVar33._8_4_ * fStack_100 + fVar27 * auVar19._8_4_);
      auVar38._28_4_ = fVar48 * (auVar33._12_4_ * fStack_fc + fVar28 * auVar19._12_4_);
      auVar14._0_4_ = fVar42 * (auVar36._0_4_ * local_108 + fVar13 * auVar37._0_4_);
      auVar14._4_4_ = fVar46 * (auVar36._4_4_ * fStack_104 + fVar26 * auVar37._4_4_);
      auVar14._8_4_ = fVar47 * (auVar36._8_4_ * fStack_100 + fVar27 * auVar37._8_4_);
      auVar14._12_4_ = fVar48 * (auVar36._12_4_ * fStack_fc + fVar28 * auVar37._12_4_);
      auVar20._16_4_ = fVar42 * (auVar36._16_4_ * local_108 + fVar13 * auVar37._16_4_);
      auVar20._0_16_ = auVar14;
      auVar20._20_4_ = fVar46 * (auVar36._20_4_ * fStack_104 + fVar26 * auVar37._20_4_);
      auVar20._24_4_ = fVar47 * (auVar36._24_4_ * fStack_100 + fVar27 * auVar37._24_4_);
      auVar20._28_4_ = fVar48 * (auVar36._28_4_ * fStack_fc + fVar28 * auVar37._28_4_);
      auVar77._0_4_ = fVar42 * (auVar34._0_4_ * local_108 + fVar13 * auVar31._0_4_);
      auVar77._4_4_ = fVar46 * (auVar34._4_4_ * fStack_104 + fVar26 * auVar31._4_4_);
      auVar77._8_4_ = fVar47 * (auVar34._8_4_ * fStack_100 + fVar27 * auVar31._8_4_);
      auVar77._12_4_ = fVar48 * (auVar34._12_4_ * fStack_fc + fVar28 * auVar31._12_4_);
      auVar77._16_4_ = fVar42 * (auVar34._16_4_ * local_108 + fVar13 * auVar31._16_4_);
      auVar77._20_4_ = fVar46 * (auVar34._20_4_ * fStack_104 + fVar26 * auVar31._20_4_);
      auVar77._24_4_ = fVar47 * (auVar34._24_4_ * fStack_100 + fVar27 * auVar31._24_4_);
      auVar77._28_4_ = fVar48 * (auVar34._28_4_ * fStack_fc + fVar28 * auVar31._28_4_);
      auVar33._16_16_ = auVar14;
      auVar33._0_16_ = auVar29;
      auVar34 = vshufpd_avx(auVar38,auVar33,2);
      auVar29 = auVar20._16_16_;
      auVar14 = vshufpd_avx(auVar14,auVar29,1);
      auVar18 = vperm2f128_avx(auVar77,auVar77,1);
      auVar20 = vshufps_avx(auVar77,auVar18,0x30);
      auVar20 = vshufps_avx(auVar18,auVar20,0x29);
      auVar20 = vblendps_avx(auVar20,ZEXT1632(auVar14),7);
      auVar19 = vperm2f128_avx(auVar20,auVar20,1);
      auVar33 = vunpcklpd_avx(auVar19,auVar77);
      auVar18 = vshufps_avx(auVar18,auVar33,0x24);
      auVar33 = vperm2f128_avx(auVar34,auVar34,1);
      auVar33 = vblendps_avx(auVar34,auVar33,0x44);
      auVar33 = vpermilps_avx(auVar33,
                              ___ymm_0000000000000006000000000000000700000001000000000000000200000000
                             );
      auVar33 = vblendps_avx(auVar33,auVar18,0xa4);
      *(undefined1 (*) [16])(param_3 + -0x30 + in_R11) = auVar33._16_16_;
      *(undefined1 (*) [16])(param_3 + -0x40 + in_R11) = auVar33._0_16_;
      auVar33 = vpermilps_avx(auVar20,
                              ___ymm_0000000000000007000000000000000000000000000000010000000000000000
                             );
      auVar20 = vshufps_avx(auVar19,auVar19,0xa9);
      auVar20 = vblendps_avx(auVar20,auVar33,0x44);
      auVar33 = vshufpd_avx(auVar34,auVar34,1);
      auVar20 = vblendps_avx(auVar20,auVar33,0x92);
      *(undefined1 (*) [16])(param_3 + -0x10 + in_R11) = auVar20._16_16_;
      *(undefined1 (*) [16])(param_3 + -0x20 + in_R11) = auVar20._0_16_;
      auVar14 = vshufps_avx(auVar38._16_16_,auVar29,0x9e);
      auVar29 = vshufps_avx(auVar29,auVar29,0xff);
      auVar34._16_16_ = auVar29;
      auVar34._0_16_ = auVar14;
      auVar33 = vperm2f128_avx(auVar77,ZEXT1632(auVar14),0x21);
      auVar20 = vblendps_avx(auVar34,auVar77,0xe0);
      auVar33 = vshufps_avx(auVar33,auVar20,0x21);
      auVar20 = vshufps_avx(auVar33,auVar20,0xc2);
      *(undefined1 (*) [16])(param_3 + 0x10 + in_R11) = auVar20._16_16_;
      *(undefined1 (*) [16])(param_3 + in_R11) = auVar20._0_16_;
      in_R11 = in_R11 + 0x60;
      uVar7 = (int)uVar10 + 8;
      uVar10 = (ulonglong)uVar7;
    } while ((int)uVar7 < (int)(uVar6 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar7) {
      return;
    }
  }
  auVar17 = vpshufd_avx(ZEXT416((uint)uVar10),0);
  auVar21._16_16_ = auVar17;
  auVar21._0_16_ = auVar17;
  auVar15 = vpshufd_avx(ZEXT416(param_4),0);
  pauVar1 = (undefined1 (*) [32])(param_1 + uVar10 * 0xc);
  auVar14 = SUB3216(auVar21 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar29 = SUB3216(auVar21 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar17 = vpcmpgtd_avx(auVar15,auVar29);
  auVar30 = vpcmpgtd_avx(auVar15,auVar14);
  auVar22._16_16_ = auVar17;
  auVar22._0_16_ = auVar30;
  uVar6 = vmovmskps_avx(auVar22);
  if (uVar6 == 0xff) {
    auVar34 = pauVar1[2];
    auVar23._16_16_ = *(undefined1 (*) [16])*pauVar1;
    auVar23._0_16_ = *(undefined1 (*) [16])(*pauVar1 + 0x10);
    auVar20 = vblendps_avx(*pauVar1,auVar23,0x24);
    auVar20 = vpermilps_avx(auVar20,
                            ___ymm_0000000000000007000000040000000500000000000000020000000300000000)
    ;
    uVar11 = *(undefined4 *)(pauVar1[1] + 4);
    auVar69._4_4_ = uVar11;
    auVar69._0_4_ = uVar11;
    auVar69._8_4_ = uVar11;
    auVar69._12_4_ = uVar11;
    uVar11 = *(undefined4 *)(pauVar1[1] + 8);
    auVar69._20_4_ = uVar11;
    auVar69._16_4_ = uVar11;
    auVar69._24_4_ = uVar11;
    auVar69._28_4_ = uVar11;
    auVar20 = vblendps_avx(auVar20,auVar69,0x88);
    auVar78._16_16_ = *(undefined1 (*) [16])pauVar1[2];
    auVar78._0_16_ = *(undefined1 (*) [16])(pauVar1[2] + 0x10);
    auVar33 = vblendps_avx(auVar78,auVar34,0x44);
    auVar33 = vpermilps_avx(auVar33,
                            ___ymm_0000000600000007000000040000000000000001000000020000000000000000)
    ;
    auVar17 = vshufps_avx(*(undefined1 (*) [16])(pauVar1[1] + 0x10),
                          *(undefined1 (*) [16])(pauVar1[1] + 0x10),0xec);
    uVar11 = *(undefined4 *)(pauVar1[1] + 0x14);
    auVar39._20_4_ = uVar11;
    auVar39._16_4_ = uVar11;
    auVar39._24_4_ = uVar11;
    auVar39._28_4_ = uVar11;
    auVar39._0_16_ = auVar17;
    auVar33 = vblendps_avx(auVar33,auVar39,0x13);
    auVar44._16_16_ = auVar33._0_16_;
    auVar44._0_16_ = auVar20._0_16_;
    auVar50 = vperm2f128_avx(auVar20,auVar33,0x31);
    auVar20 = vblendps_avx(pauVar1[1],*pauVar1,0x24);
    auVar20 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])(*pauVar1 + 0x10)),auVar20,0x21);
    auVar20 = vshufps_avx(auVar20,pauVar1[1],0xc2);
    auVar33 = vshufps_avx(auVar78,auVar34,0xc4);
    auVar56 = vblendps_avx(auVar20,auVar33,0xe0);
    auVar17 = *(undefined1 (*) [16])(param_2 + uVar10 * 0xc);
    auVar30 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar10 * 0xc);
    auVar15 = *(undefined1 (*) [16])(param_2 + 0x30 + uVar10 * 0xc);
    auVar74._16_16_ = auVar30;
    auVar74._0_16_ = auVar17;
    auVar14 = *(undefined1 (*) [16])(param_2 + 0x50 + uVar10 * 0xc);
    auVar29 = *(undefined1 (*) [16])(param_2 + 0x40 + uVar10 * 0xc);
    auVar24._16_16_ = auVar17;
    auVar24._0_16_ = auVar30;
    auVar20 = vblendps_avx(auVar74,auVar24,0x24);
    auVar20 = vpermilps_avx(auVar20,
                            ___ymm_0000000000000007000000040000000500000000000000020000000300000000)
    ;
    uVar11 = *(undefined4 *)(param_2 + 0x28 + uVar10 * 0xc);
    auVar67._20_4_ = uVar11;
    auVar67._16_4_ = uVar11;
    auVar67._24_4_ = uVar11;
    auVar67._28_4_ = uVar11;
    uVar11 = *(undefined4 *)(param_2 + 0x24 + uVar10 * 0xc);
    auVar67._4_4_ = uVar11;
    auVar67._0_4_ = uVar11;
    auVar67._8_4_ = uVar11;
    auVar67._12_4_ = uVar11;
    uVar11 = *(undefined4 *)(param_2 + 0x34 + uVar10 * 0xc);
    auVar70._20_4_ = uVar11;
    auVar70._16_4_ = uVar11;
    auVar70._24_4_ = uVar11;
    auVar70._28_4_ = uVar11;
    auVar40._16_16_ = auVar15;
    auVar40._0_16_ = *(undefined1 (*) [16])(param_2 + 0x20 + uVar10 * 0xc);
    auVar80._16_16_ = auVar14;
    auVar80._0_16_ = auVar29;
    auVar20 = vblendps_avx(auVar20,auVar67,0x88);
    auVar79._16_16_ = auVar29;
    auVar79._0_16_ = auVar14;
    auVar33 = vblendps_avx(auVar79,auVar80,0x44);
    auVar33 = vpermilps_avx(auVar33,
                            ___ymm_0000000600000007000000040000000000000001000000020000000000000000)
    ;
    auVar17 = vshufps_avx(auVar15,auVar15,0xec);
    auVar70._0_16_ = auVar17;
    auVar33 = vblendps_avx(auVar33,auVar70,0x13);
    auVar66._16_16_ = auVar33._0_16_;
    auVar66._0_16_ = auVar20._0_16_;
    auVar68 = vperm2f128_avx(auVar20,auVar33,0x31);
    auVar20 = vblendps_avx(auVar40,auVar74,0x24);
    auVar20 = vshufps_avx(ZEXT1632(auVar30),auVar20,0x21);
    auVar20 = vshufps_avx(auVar20,auVar40,0xc2);
    auVar33 = vshufps_avx(auVar79,auVar80,0xc4);
    auVar72 = vblendps_avx(auVar20,auVar33,0xe0);
  }
  else {
    auVar17 = vpcmpgtd_avx(auVar15,auVar29);
    auVar30 = vpcmpgtd_avx(auVar15,auVar14);
    uVar55 = auVar30._0_4_;
    auVar15._0_4_ = uVar55 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000
    ;
    uVar57 = auVar30._4_4_;
    auVar15._4_4_ = uVar57 & _UNK_150b50b04;
    uVar58 = auVar30._8_4_;
    auVar15._8_4_ = uVar58 & _UNK_150b50b08;
    uVar59 = auVar30._12_4_;
    auVar15._12_4_ = uVar59 & _UNK_150b50b0c;
    uVar60 = auVar17._0_4_;
    uVar61 = auVar17._4_4_;
    uVar62 = auVar17._8_4_;
    uVar63 = auVar17._12_4_;
    uVar7 = vextractps_avx(auVar15,1);
    uVar8 = vextractps_avx(auVar15,2);
    uVar11 = vextractps_avx(auVar15,3);
    lVar12 = CONCAT44((int)((ulonglong)in_R11 >> 0x20),uVar11);
    auVar17 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar1 + (uVar60 & _UNK_150b50b10))),
                            ZEXT416(*(uint *)(*pauVar1 + (uVar61 & _UNK_150b50b14))),0x10);
    auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)(*pauVar1 + (uVar62 & _UNK_150b50b18))),0x20);
    auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)(*pauVar1 + (uVar63 & _UNK_150b50b1c))),0x30);
    auVar30 = vinsertps_avx(ZEXT416(*(uint *)*pauVar1),ZEXT416(*(uint *)(*pauVar1 + uVar7)),0x10);
    auVar30 = vinsertps_avx(auVar30,ZEXT416(*(uint *)(*pauVar1 + uVar8)),0x20);
    auVar30 = vinsertps_avx(auVar30,ZEXT416(*(uint *)(*pauVar1 + lVar12)),0x30);
    auVar16._0_4_ = uVar55 & ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004
    ;
    auVar16._4_4_ = uVar57 & _UNK_150b50b24;
    auVar16._8_4_ = uVar58 & _UNK_150b50b28;
    auVar16._12_4_ = uVar59 & _UNK_150b50b2c;
    uVar4 = vextractps_avx(auVar16,1);
    uVar9 = vextractps_avx(auVar16,2);
    auVar15 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar1 + (uVar60 & _UNK_150b50b30))),
                            ZEXT416(*(uint *)(*pauVar1 + (uVar61 & _UNK_150b50b34))),0x10);
    auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(*pauVar1 + (uVar62 & _UNK_150b50b38))),0x20);
    auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(*pauVar1 + (uVar63 & _UNK_150b50b3c))),0x30);
    auVar14 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar1 + auVar16._0_4_)),
                            ZEXT416(*(uint *)(*pauVar1 + uVar4)),0x10);
    auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(*pauVar1 + uVar9)),0x20);
    auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(*pauVar1 + auVar16._12_4_)),0x30);
    auVar29 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar1 + (uVar60 & _UNK_150b50b50))),
                            ZEXT416(*(uint *)(*pauVar1 + (uVar61 & _UNK_150b50b54))),0x10);
    auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)(*pauVar1 + (uVar62 & _UNK_150b50b58))),0x20);
    auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)(*pauVar1 + (uVar63 & _UNK_150b50b5c))),0x30);
    auVar43 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar1 +
                                             (uVar55 & 
                                             ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008
                                             ))),
                            ZEXT416(*(uint *)(*pauVar1 + (uVar57 & _UNK_150b50b44))),0x10);
    auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)(*pauVar1 + (uVar58 & _UNK_150b50b48))),0x20);
    auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)(*pauVar1 + (uVar59 & _UNK_150b50b4c))),0x30);
    auVar44._16_16_ = auVar17;
    auVar44._0_16_ = auVar30;
    auVar50._16_16_ = auVar15;
    auVar50._0_16_ = auVar14;
    auVar56._16_16_ = auVar29;
    auVar56._0_16_ = auVar43;
    lVar2 = param_2 + uVar10 * 0xc;
    auVar17 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar60 & _UNK_150b50b10) + lVar2)),
                            ZEXT416(*(uint *)((ulonglong)(uVar61 & _UNK_150b50b14) + lVar2)),0x10);
    auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)((ulonglong)(uVar62 & _UNK_150b50b18) + lVar2))
                            ,0x20);
    auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)((ulonglong)(uVar63 & _UNK_150b50b1c) + lVar2))
                            ,0x30);
    auVar30 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + uVar10 * 0xc)),
                            ZEXT416(*(uint *)((ulonglong)uVar7 + lVar2)),0x10);
    auVar30 = vinsertps_avx(auVar30,ZEXT416(*(uint *)((ulonglong)uVar8 + lVar2)),0x20);
    auVar30 = vinsertps_avx(auVar30,ZEXT416(*(uint *)(lVar12 + lVar2)),0x30);
    auVar15 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar60 & _UNK_150b50b30) + lVar2)),
                            ZEXT416(*(uint *)((ulonglong)(uVar61 & _UNK_150b50b34) + lVar2)),0x10);
    auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)((ulonglong)(uVar62 & _UNK_150b50b38) + lVar2))
                            ,0x20);
    auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)((ulonglong)(uVar63 & _UNK_150b50b3c) + lVar2))
                            ,0x30);
    auVar14 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar16._0_4_ + lVar2)),
                            ZEXT416(*(uint *)((ulonglong)uVar4 + lVar2)),0x10);
    auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)((ulonglong)uVar9 + lVar2)),0x20);
    auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)((ulonglong)auVar16._12_4_ + lVar2)),0x30);
    auVar29 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar60 & _UNK_150b50b50) + lVar2)),
                            ZEXT416(*(uint *)((ulonglong)(uVar61 & _UNK_150b50b54) + lVar2)),0x10);
    auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)((ulonglong)(uVar62 & _UNK_150b50b58) + lVar2))
                            ,0x20);
    auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)((ulonglong)(uVar63 & _UNK_150b50b5c) + lVar2))
                            ,0x30);
    auVar43 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                              (uVar55 & 
                                              ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008
                                              ) + lVar2)),
                            ZEXT416(*(uint *)((ulonglong)(uVar57 & _UNK_150b50b44) + lVar2)),0x10);
    auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)((ulonglong)(uVar58 & _UNK_150b50b48) + lVar2))
                            ,0x20);
    auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)((ulonglong)(uVar59 & _UNK_150b50b4c) + lVar2))
                            ,0x30);
    auVar66._16_16_ = auVar17;
    auVar66._0_16_ = auVar30;
    auVar68._16_16_ = auVar15;
    auVar68._0_16_ = auVar14;
    auVar72._16_16_ = auVar29;
    auVar72._0_16_ = auVar43;
  }
  auVar17 = vshufps_avx(ZEXT416(param_5),ZEXT416(param_5),0);
  fVar13 = auVar17._0_4_;
  fVar26 = auVar17._4_4_;
  fVar27 = auVar17._8_4_;
  fVar28 = auVar17._12_4_;
  auVar17 = vshufps_avx(ZEXT416(param_6),ZEXT416(param_6),0);
  fVar42 = auVar17._0_4_;
  fVar46 = auVar17._4_4_;
  fVar47 = auVar17._8_4_;
  fVar48 = auVar17._12_4_;
  auVar17 = vshufps_avx(ZEXT416(param_7),ZEXT416(param_7),0);
  fVar49 = auVar17._0_4_;
  auVar43._0_4_ = fVar49 * (fVar13 * auVar44._0_4_ + fVar42 * auVar66._0_4_);
  fVar52 = auVar17._4_4_;
  auVar43._4_4_ = fVar52 * (fVar26 * auVar44._4_4_ + fVar46 * auVar66._4_4_);
  fVar53 = auVar17._8_4_;
  auVar43._8_4_ = fVar53 * (fVar27 * auVar44._8_4_ + fVar47 * auVar66._8_4_);
  fVar54 = auVar17._12_4_;
  auVar43._12_4_ = fVar54 * (fVar28 * auVar44._12_4_ + fVar48 * auVar66._12_4_);
  auVar45._16_4_ = fVar49 * (fVar13 * auVar44._16_4_ + fVar42 * auVar66._16_4_);
  auVar45._0_16_ = auVar43;
  auVar45._20_4_ = fVar52 * (fVar26 * auVar44._20_4_ + fVar46 * auVar66._20_4_);
  auVar45._24_4_ = fVar53 * (fVar27 * auVar44._24_4_ + fVar47 * auVar66._24_4_);
  auVar45._28_4_ = fVar54 * (fVar28 * auVar44._28_4_ + fVar48 * auVar66._28_4_);
  auVar30._0_4_ = fVar49 * (fVar13 * auVar50._0_4_ + fVar42 * auVar68._0_4_);
  auVar30._4_4_ = fVar52 * (fVar26 * auVar50._4_4_ + fVar46 * auVar68._4_4_);
  auVar30._8_4_ = fVar53 * (fVar27 * auVar50._8_4_ + fVar47 * auVar68._8_4_);
  auVar30._12_4_ = fVar54 * (fVar28 * auVar50._12_4_ + fVar48 * auVar68._12_4_);
  auVar35._16_4_ = fVar49 * (fVar13 * auVar50._16_4_ + fVar42 * auVar68._16_4_);
  auVar35._0_16_ = auVar30;
  auVar35._20_4_ = fVar52 * (fVar26 * auVar50._20_4_ + fVar46 * auVar68._20_4_);
  auVar35._24_4_ = fVar53 * (fVar27 * auVar50._24_4_ + fVar47 * auVar68._24_4_);
  auVar35._28_4_ = fVar54 * (fVar28 * auVar50._28_4_ + fVar48 * auVar68._28_4_);
  auVar17._0_4_ = fVar49 * (fVar13 * auVar56._0_4_ + auVar72._0_4_ * fVar42);
  auVar17._4_4_ = fVar52 * (fVar26 * auVar56._4_4_ + auVar72._4_4_ * fVar46);
  auVar17._8_4_ = fVar53 * (fVar27 * auVar56._8_4_ + auVar72._8_4_ * fVar47);
  auVar17._12_4_ = fVar54 * (fVar28 * auVar56._12_4_ + auVar72._12_4_ * fVar48);
  auVar25._16_4_ = fVar49 * (fVar13 * auVar56._16_4_ + auVar72._16_4_ * fVar42);
  auVar25._0_16_ = auVar17;
  auVar25._20_4_ = fVar52 * (fVar26 * auVar56._20_4_ + auVar72._20_4_ * fVar46);
  auVar25._24_4_ = fVar53 * (fVar27 * auVar56._24_4_ + auVar72._24_4_ * fVar47);
  auVar25._28_4_ = fVar54 * (fVar28 * auVar56._28_4_ + auVar72._28_4_ * fVar48);
  pauVar3 = (undefined1 (*) [16])(param_3 + uVar10 * 0xc);
  auVar14 = auVar45._16_16_;
  cVar5 = (char)uVar6;
  auVar15 = auVar35._16_16_;
  if (cVar5 == -1) {
    auVar51._16_16_ = auVar30;
    auVar51._0_16_ = auVar43;
    auVar34 = vshufpd_avx(auVar45,auVar51,2);
    auVar18 = vperm2f128_avx(auVar25,auVar25,1);
    auVar20 = vshufps_avx(auVar25,auVar18,0x30);
    auVar20 = vshufps_avx(auVar18,auVar20,0x29);
    auVar17 = vshufpd_avx(auVar30,auVar15,1);
    auVar20 = vblendps_avx(auVar20,ZEXT1632(auVar17),7);
    auVar19 = vperm2f128_avx(auVar20,auVar20,1);
    auVar33 = vunpcklpd_avx(auVar19,auVar25);
    auVar18 = vshufps_avx(auVar18,auVar33,0x24);
    auVar33 = vperm2f128_avx(auVar34,auVar34,1);
    auVar33 = vblendps_avx(auVar34,auVar33,0x44);
    auVar33 = vpermilps_avx(auVar33,
                            ___ymm_0000000000000006000000000000000700000001000000000000000200000000)
    ;
    auVar33 = vblendps_avx(auVar33,auVar18,0xa4);
    pauVar3[1] = auVar33._16_16_;
    auVar18 = vpermilps_avx(auVar20,
                            ___ymm_0000000000000007000000000000000000000000000000010000000000000000)
    ;
    *pauVar3 = auVar33._0_16_;
    auVar20 = vshufps_avx(auVar19,auVar19,0xa9);
    auVar20 = vblendps_avx(auVar20,auVar18,0x44);
    auVar33 = vshufpd_avx(auVar34,auVar34,1);
    auVar20 = vblendps_avx(auVar20,auVar33,0x92);
    pauVar3[3] = auVar20._16_16_;
    pauVar3[2] = auVar20._0_16_;
    auVar17 = vshufps_avx(auVar14,auVar15,0x9e);
    auVar30 = vshufps_avx(auVar15,auVar15,0xff);
    auVar41._16_16_ = auVar30;
    auVar41._0_16_ = auVar17;
    auVar33 = vperm2f128_avx(auVar25,ZEXT1632(auVar17),0x21);
    auVar20 = vblendps_avx(auVar41,auVar25,0xe0);
    auVar33 = vshufps_avx(auVar33,auVar20,0x21);
    auVar20 = vshufps_avx(auVar33,auVar20,0xc2);
    pauVar3[5] = auVar20._16_16_;
    pauVar3[4] = auVar20._0_16_;
  }
  else {
    auVar29 = auVar25._16_16_;
    if ((uVar6 & 1) != 0) {
      *(float *)*pauVar3 = auVar43._0_4_;
    }
    if ((uVar6 & 2) != 0) {
      uVar11 = vextractps_avx(auVar43,1);
      *(undefined4 *)(*pauVar3 + 0xc) = uVar11;
    }
    if ((uVar6 & 4) != 0) {
      uVar11 = vextractps_avx(auVar43,2);
      *(undefined4 *)(pauVar3[1] + 8) = uVar11;
    }
    if ((uVar6 & 8) != 0) {
      uVar11 = vextractps_avx(auVar43,3);
      *(undefined4 *)(pauVar3[2] + 4) = uVar11;
    }
    if ((uVar6 & 0x10) != 0) {
      *(float *)pauVar3[3] = auVar45._16_4_;
    }
    if ((uVar6 & 0x20) != 0) {
      uVar11 = vextractps_avx(auVar14,1);
      *(undefined4 *)(pauVar3[3] + 0xc) = uVar11;
    }
    if ((uVar6 & 0x40) != 0) {
      uVar11 = vextractps_avx(auVar14,2);
      *(undefined4 *)(pauVar3[4] + 8) = uVar11;
    }
    if (cVar5 < '\0') {
      uVar11 = vextractps_avx(auVar14,3);
      *(undefined4 *)(pauVar3[5] + 4) = uVar11;
    }
    if ((uVar6 & 1) != 0) {
      *(float *)(*pauVar3 + 4) = auVar30._0_4_;
    }
    if ((uVar6 & 2) != 0) {
      uVar11 = vextractps_avx(auVar30,1);
      *(undefined4 *)pauVar3[1] = uVar11;
    }
    if ((uVar6 & 4) != 0) {
      uVar11 = vextractps_avx(auVar30,2);
      *(undefined4 *)(pauVar3[1] + 0xc) = uVar11;
    }
    if ((uVar6 & 8) != 0) {
      uVar11 = vextractps_avx(auVar30,3);
      *(undefined4 *)(pauVar3[2] + 8) = uVar11;
    }
    if ((uVar6 & 0x10) != 0) {
      *(float *)(pauVar3[3] + 4) = auVar35._16_4_;
    }
    if ((uVar6 & 0x20) != 0) {
      uVar11 = vextractps_avx(auVar15,1);
      *(undefined4 *)pauVar3[4] = uVar11;
    }
    if ((uVar6 & 0x40) != 0) {
      uVar11 = vextractps_avx(auVar15,2);
      *(undefined4 *)(pauVar3[4] + 0xc) = uVar11;
    }
    if (cVar5 < '\0') {
      uVar11 = vextractps_avx(auVar15,3);
      *(undefined4 *)(pauVar3[5] + 8) = uVar11;
    }
    if ((uVar6 & 1) != 0) {
      *(float *)(*pauVar3 + 8) = auVar17._0_4_;
    }
    if ((uVar6 & 2) != 0) {
      uVar11 = vextractps_avx(auVar17,1);
      *(undefined4 *)(pauVar3[1] + 4) = uVar11;
    }
    if ((uVar6 & 4) != 0) {
      uVar11 = vextractps_avx(auVar17,2);
      *(undefined4 *)pauVar3[2] = uVar11;
    }
    if ((uVar6 & 8) != 0) {
      uVar11 = vextractps_avx(auVar17,3);
      *(undefined4 *)(pauVar3[2] + 0xc) = uVar11;
    }
    if ((uVar6 & 0x10) != 0) {
      *(float *)(pauVar3[3] + 8) = auVar25._16_4_;
    }
    if ((uVar6 & 0x20) != 0) {
      uVar11 = vextractps_avx(auVar29,1);
      *(undefined4 *)(pauVar3[4] + 4) = uVar11;
    }
    if ((uVar6 & 0x40) != 0) {
      uVar11 = vextractps_avx(auVar29,2);
      *(undefined4 *)pauVar3[5] = uVar11;
    }
    if (cVar5 < '\0') {
      uVar11 = vextractps_avx(auVar29,3);
      *(undefined4 *)(pauVar3[5] + 0xc) = uVar11;
    }
  }
  return;
}

// InterpolateUVs___un_3C_s_5B_unFVector2f_5D__3E_un_3C_s_5B_unFVector2f_5D__3E_un_3C_s_5B_unFVector2f_5D__3E_uniunfunf_avx @ 140cb0730

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolateUVs___un_3C_s_5B_unFVector2f_5D__3E_un_3C_s_5B_unFVector2f_5D__3E_un_3C_s_5B_unFVector2f_5D__3E_uniunfunf_avx
               (longlong param_1,longlong param_2,longlong param_3,uint param_4,uint param_5,
               uint param_6)

{
  undefined1 (*pauVar1) [16];
  longlong lVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar10;
  longlong lVar9;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined8 in_R11;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined8 unaff_R14;
  longlong lVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar22 [16];
  float fVar27;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar28 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [32];
  undefined1 auVar36 [16];
  undefined1 auVar35 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  longlong lVar8;
  undefined1 auVar23 [32];
  undefined1 auVar29 [32];
  undefined1 auVar42 [32];
  
  uVar4 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar4 = param_4;
  }
  if ((int)(uVar4 & 0xfffffff8) < 1) {
    uVar5 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    auVar33 = vshufps_avx(ZEXT416(param_5),ZEXT416(param_5),0);
    auVar22 = vshufps_avx(ZEXT416(param_6),ZEXT416(param_6),0);
    uVar5 = 0;
    do {
      auVar45._16_16_ = *(undefined1 (*) [16])(param_1 + 0x30 + uVar5 * 8);
      auVar45._0_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + uVar5 * 8);
      auVar41._16_16_ = *(undefined1 (*) [16])(param_1 + 0x20 + uVar5 * 8);
      auVar41._0_16_ = *(undefined1 (*) [16])(param_1 + uVar5 * 8);
      auVar42 = vshufps_avx(auVar41,auVar45,0x88);
      auVar41 = vshufps_avx(auVar41,auVar45,0xdd);
      auVar52._16_16_ = *(undefined1 (*) [16])(param_2 + 0x30 + uVar5 * 8);
      auVar52._0_16_ = *(undefined1 (*) [16])(param_2 + 0x10 + uVar5 * 8);
      auVar46._16_16_ = *(undefined1 (*) [16])(param_2 + 0x20 + uVar5 * 8);
      auVar46._0_16_ = *(undefined1 (*) [16])(param_2 + uVar5 * 8);
      auVar45 = vshufps_avx(auVar46,auVar52,0x88);
      auVar46 = vshufps_avx(auVar46,auVar52,0xdd);
      fVar27 = auVar33._0_4_;
      fVar30 = auVar33._4_4_;
      fVar31 = auVar33._8_4_;
      fVar32 = auVar33._12_4_;
      fVar21 = auVar22._0_4_;
      fVar24 = auVar22._4_4_;
      fVar25 = auVar22._8_4_;
      fVar26 = auVar22._12_4_;
      auVar36._0_4_ = fVar27 * auVar42._0_4_ + auVar45._0_4_ * fVar21;
      auVar36._4_4_ = fVar30 * auVar42._4_4_ + auVar45._4_4_ * fVar24;
      auVar36._8_4_ = fVar31 * auVar42._8_4_ + auVar45._8_4_ * fVar25;
      auVar36._12_4_ = fVar32 * auVar42._12_4_ + auVar45._12_4_ * fVar26;
      auVar50._16_4_ = fVar27 * auVar42._16_4_ + auVar45._16_4_ * fVar21;
      auVar50._0_16_ = auVar36;
      auVar50._20_4_ = fVar30 * auVar42._20_4_ + auVar45._20_4_ * fVar24;
      auVar50._24_4_ = fVar31 * auVar42._24_4_ + auVar45._24_4_ * fVar25;
      auVar50._28_4_ = fVar32 * auVar42._28_4_ + auVar45._28_4_ * fVar26;
      auVar39._0_4_ = fVar27 * auVar41._0_4_ + fVar21 * auVar46._0_4_;
      auVar39._4_4_ = fVar30 * auVar41._4_4_ + fVar24 * auVar46._4_4_;
      auVar39._8_4_ = fVar31 * auVar41._8_4_ + fVar25 * auVar46._8_4_;
      auVar39._12_4_ = fVar32 * auVar41._12_4_ + fVar26 * auVar46._12_4_;
      auVar42._16_4_ = fVar27 * auVar41._16_4_ + fVar21 * auVar46._16_4_;
      auVar42._0_16_ = auVar39;
      auVar42._20_4_ = fVar30 * auVar41._20_4_ + fVar24 * auVar46._20_4_;
      auVar42._24_4_ = fVar31 * auVar41._24_4_ + fVar25 * auVar46._24_4_;
      auVar42._28_4_ = fVar32 * auVar41._28_4_ + fVar26 * auVar46._28_4_;
      auVar28 = vunpcklps_avx(auVar36,auVar39);
      auVar39 = vunpckhps_avx(auVar36,auVar39);
      *(undefined1 (*) [16])(param_3 + 0x10 + uVar5 * 8) = auVar39;
      *(undefined1 (*) [16])(param_3 + uVar5 * 8) = auVar28;
      auVar28 = vunpcklps_avx(auVar50._16_16_,auVar42._16_16_);
      auVar39 = vunpckhps_avx(auVar50._16_16_,auVar42._16_16_);
      *(undefined1 (*) [16])(param_3 + 0x30 + uVar5 * 8) = auVar39;
      *(undefined1 (*) [16])(param_3 + 0x20 + uVar5 * 8) = auVar28;
      uVar5 = uVar5 + 8;
    } while ((int)uVar5 < (int)(uVar4 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar5) {
      return;
    }
  }
  auVar33 = vpshufd_avx(ZEXT416((uint)uVar5),0);
  auVar34._16_16_ = auVar33;
  auVar34._0_16_ = auVar33;
  auVar39 = vpshufd_avx(ZEXT416(param_4),0);
  uVar5 = uVar5 & 0xffffffff;
  pauVar1 = (undefined1 (*) [16])(param_1 + uVar5 * 8);
  auVar28 = SUB3216(auVar34 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar36 = SUB3216(auVar34 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar33 = vpcmpgtd_avx(auVar39,auVar36);
  auVar22 = vpcmpgtd_avx(auVar39,auVar28);
  auVar47._16_16_ = auVar33;
  auVar47._0_16_ = auVar22;
  uVar4 = vmovmskps_avx(auVar47);
  if (uVar4 == 0xff) {
    auVar38._16_16_ = pauVar1[3];
    auVar38._0_16_ = pauVar1[1];
    auVar44._16_16_ = pauVar1[2];
    auVar44._0_16_ = *pauVar1;
    auVar35 = vshufps_avx(auVar44,auVar38,0x88);
    auVar37 = vshufps_avx(auVar44,auVar38,0xdd);
    auVar49._16_16_ = *(undefined1 (*) [16])(param_2 + 0x30 + uVar5 * 8);
    auVar49._0_16_ = *(undefined1 (*) [16])(param_2 + 0x10 + uVar5 * 8);
    auVar51._16_16_ = *(undefined1 (*) [16])(param_2 + 0x20 + uVar5 * 8);
    auVar51._0_16_ = *(undefined1 (*) [16])(param_2 + uVar5 * 8);
    auVar43 = vshufps_avx(auVar51,auVar49,0x88);
    auVar48 = vshufps_avx(auVar51,auVar49,0xdd);
  }
  else {
    auVar36 = vpcmpgtd_avx(auVar39,auVar36);
    auVar39 = vpcmpgtd_avx(auVar39,auVar28);
    auVar33._0_4_ =
         auVar39._0_4_ & ___ymm_0000003800000030000000280000002000000018000000100000000800000000;
    auVar33._4_4_ = auVar39._4_4_ & _UNK_150b519c4;
    auVar33._8_4_ = auVar39._8_4_ & _UNK_150b519c8;
    auVar33._12_4_ = auVar39._12_4_ & _UNK_150b519cc;
    uVar10 = (undefined4)((ulonglong)param_1 >> 0x20);
    uVar7 = vextractps_avx(auVar33,1);
    lVar8 = CONCAT44(uVar10,uVar7);
    uVar14 = vextractps_avx(auVar33,2);
    uVar7 = vextractps_avx(auVar33,3);
    lVar16 = CONCAT44((int)((ulonglong)in_R11 >> 0x20),uVar7);
    uVar12 = (ulonglong)(auVar36._4_4_ & _UNK_150b519d4);
    uVar20 = (ulonglong)(auVar36._8_4_ & _UNK_150b519d8);
    uVar18 = (ulonglong)(auVar36._0_4_ & _UNK_150b519d0);
    uVar17 = (ulonglong)(auVar36._12_4_ & _UNK_150b519dc);
    auVar33 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar1 + uVar18)),
                            ZEXT416(*(uint *)(*pauVar1 + uVar12)),0x10);
    auVar33 = vinsertps_avx(auVar33,ZEXT416(*(uint *)(*pauVar1 + uVar20)),0x20);
    auVar33 = vinsertps_avx(auVar33,ZEXT416(*(uint *)(*pauVar1 + uVar17)),0x30);
    auVar22 = vinsertps_avx(ZEXT416(*(uint *)*pauVar1),ZEXT416(*(uint *)(*pauVar1 + lVar8)),0x10);
    auVar22 = vinsertps_avx(auVar22,ZEXT416(*(uint *)(*pauVar1 + uVar14)),0x20);
    auVar22 = vinsertps_avx(auVar22,ZEXT416(*(uint *)(*pauVar1 + lVar16)),0x30);
    auVar40._0_4_ =
         auVar39._0_4_ & ___ymm_0000003c000000340000002c000000240000001c000000140000000c00000004;
    auVar40._4_4_ = auVar39._4_4_ & _UNK_150b519e4;
    auVar40._8_4_ = auVar39._8_4_ & _UNK_150b519e8;
    auVar40._12_4_ = auVar39._12_4_ & _UNK_150b519ec;
    uVar7 = vextractps_avx(auVar40,1);
    lVar9 = CONCAT44(uVar10,uVar7);
    uVar7 = vextractps_avx(auVar40,2);
    lVar19 = CONCAT44((int)((ulonglong)unaff_R14 >> 0x20),uVar7);
    uVar13 = (ulonglong)(auVar36._4_4_ & _UNK_150b519f4);
    uVar15 = (ulonglong)(auVar36._8_4_ & _UNK_150b519f8);
    uVar11 = (ulonglong)(auVar36._12_4_ & _UNK_150b519fc);
    uVar6 = (ulonglong)(auVar36._0_4_ & _UNK_150b519f0);
    auVar39 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar1 + uVar6)),
                            ZEXT416(*(uint *)(*pauVar1 + uVar13)),0x10);
    auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(*pauVar1 + uVar15)),0x20);
    auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(*pauVar1 + uVar11)),0x30);
    auVar28 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar1 + auVar40._0_4_)),
                            ZEXT416(*(uint *)(*pauVar1 + lVar9)),0x10);
    auVar28 = vinsertps_avx(auVar28,ZEXT416(*(uint *)(*pauVar1 + lVar19)),0x20);
    auVar28 = vinsertps_avx(auVar28,ZEXT416(*(uint *)(*pauVar1 + auVar40._12_4_)),0x30);
    auVar35._16_16_ = auVar33;
    auVar35._0_16_ = auVar22;
    auVar37._16_16_ = auVar39;
    auVar37._0_16_ = auVar28;
    lVar2 = param_2 + uVar5 * 8;
    auVar33 = vinsertps_avx(ZEXT416(*(uint *)(uVar18 + lVar2)),ZEXT416(*(uint *)(uVar12 + lVar2)),
                            0x10);
    auVar33 = vinsertps_avx(auVar33,ZEXT416(*(uint *)(uVar20 + lVar2)),0x20);
    auVar33 = vinsertps_avx(auVar33,ZEXT416(*(uint *)(uVar17 + lVar2)),0x30);
    auVar22 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + uVar5 * 8)),
                            ZEXT416(*(uint *)(lVar8 + lVar2)),0x10);
    auVar22 = vinsertps_avx(auVar22,ZEXT416(*(uint *)((ulonglong)uVar14 + lVar2)),0x20);
    auVar22 = vinsertps_avx(auVar22,ZEXT416(*(uint *)(lVar16 + lVar2)),0x30);
    auVar39 = vinsertps_avx(ZEXT416(*(uint *)(uVar6 + lVar2)),ZEXT416(*(uint *)(uVar13 + lVar2)),
                            0x10);
    auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(uVar15 + lVar2)),0x20);
    auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(uVar11 + lVar2)),0x30);
    auVar28 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar40._0_4_ + lVar2)),
                            ZEXT416(*(uint *)(lVar9 + lVar2)),0x10);
    auVar28 = vinsertps_avx(auVar28,ZEXT416(*(uint *)(lVar19 + lVar2)),0x20);
    auVar28 = vinsertps_avx(auVar28,ZEXT416(*(uint *)((ulonglong)auVar40._12_4_ + lVar2)),0x30);
    auVar43._16_16_ = auVar33;
    auVar43._0_16_ = auVar22;
    auVar48._16_16_ = auVar39;
    auVar48._0_16_ = auVar28;
  }
  auVar33 = vshufps_avx(ZEXT416(param_5),ZEXT416(param_5),0);
  fVar27 = auVar33._0_4_;
  fVar30 = auVar33._4_4_;
  fVar31 = auVar33._8_4_;
  fVar32 = auVar33._12_4_;
  auVar33 = vshufps_avx(ZEXT416(param_6),ZEXT416(param_6),0);
  fVar21 = auVar33._0_4_;
  fVar24 = auVar33._4_4_;
  fVar25 = auVar33._8_4_;
  fVar26 = auVar33._12_4_;
  auVar28._0_4_ = fVar27 * auVar35._0_4_ + fVar21 * auVar43._0_4_;
  auVar28._4_4_ = fVar30 * auVar35._4_4_ + fVar24 * auVar43._4_4_;
  auVar28._8_4_ = fVar31 * auVar35._8_4_ + fVar25 * auVar43._8_4_;
  auVar28._12_4_ = fVar32 * auVar35._12_4_ + fVar26 * auVar43._12_4_;
  auVar29._16_4_ = fVar27 * auVar35._16_4_ + fVar21 * auVar43._16_4_;
  auVar29._0_16_ = auVar28;
  auVar29._20_4_ = fVar30 * auVar35._20_4_ + fVar24 * auVar43._20_4_;
  auVar29._24_4_ = fVar31 * auVar35._24_4_ + fVar25 * auVar43._24_4_;
  auVar29._28_4_ = fVar32 * auVar35._28_4_ + fVar26 * auVar43._28_4_;
  auVar22._0_4_ = fVar27 * auVar37._0_4_ + fVar21 * auVar48._0_4_;
  auVar22._4_4_ = fVar30 * auVar37._4_4_ + fVar24 * auVar48._4_4_;
  auVar22._8_4_ = fVar31 * auVar37._8_4_ + fVar25 * auVar48._8_4_;
  auVar22._12_4_ = fVar32 * auVar37._12_4_ + fVar26 * auVar48._12_4_;
  auVar23._16_4_ = fVar27 * auVar37._16_4_ + fVar21 * auVar48._16_4_;
  auVar23._0_16_ = auVar22;
  auVar23._20_4_ = fVar30 * auVar37._20_4_ + fVar24 * auVar48._20_4_;
  auVar23._24_4_ = fVar31 * auVar37._24_4_ + fVar25 * auVar48._24_4_;
  auVar23._28_4_ = fVar32 * auVar37._28_4_ + fVar26 * auVar48._28_4_;
  cVar3 = (char)uVar4;
  auVar39 = auVar29._16_16_;
  auVar33 = auVar23._16_16_;
  if (cVar3 == -1) {
    auVar36 = vunpcklps_avx(auVar28,auVar22);
    auVar22 = vunpckhps_avx(auVar28,auVar22);
    *(undefined1 (*) [16])(param_3 + 0x10 + uVar5 * 8) = auVar22;
    *(undefined1 (*) [16])(param_3 + uVar5 * 8) = auVar36;
    auVar22 = vunpcklps_avx(auVar39,auVar33);
    auVar33 = vunpckhps_avx(auVar39,auVar33);
    *(undefined1 (*) [16])(param_3 + 0x30 + uVar5 * 8) = auVar33;
    *(undefined1 (*) [16])(param_3 + 0x20 + uVar5 * 8) = auVar22;
  }
  else {
    if ((uVar4 & 1) != 0) {
      *(float *)(param_3 + uVar5 * 8) = auVar28._0_4_;
    }
    if ((uVar4 & 2) != 0) {
      uVar7 = vextractps_avx(auVar28,1);
      *(undefined4 *)(param_3 + 8 + uVar5 * 8) = uVar7;
    }
    if ((uVar4 & 4) != 0) {
      uVar7 = vextractps_avx(auVar28,2);
      *(undefined4 *)(param_3 + 0x10 + uVar5 * 8) = uVar7;
    }
    if ((uVar4 & 8) != 0) {
      uVar7 = vextractps_avx(auVar28,3);
      *(undefined4 *)(param_3 + 0x18 + uVar5 * 8) = uVar7;
    }
    if ((uVar4 & 0x10) != 0) {
      *(float *)(param_3 + 0x20 + uVar5 * 8) = auVar29._16_4_;
    }
    if ((uVar4 & 0x20) != 0) {
      uVar7 = vextractps_avx(auVar39,1);
      *(undefined4 *)(param_3 + 0x28 + uVar5 * 8) = uVar7;
    }
    if ((uVar4 & 0x40) != 0) {
      uVar7 = vextractps_avx(auVar39,2);
      *(undefined4 *)(param_3 + 0x30 + uVar5 * 8) = uVar7;
    }
    if (cVar3 < '\0') {
      uVar7 = vextractps_avx(auVar39,3);
      *(undefined4 *)(param_3 + 0x38 + uVar5 * 8) = uVar7;
    }
    if ((uVar4 & 1) != 0) {
      *(float *)(param_3 + 4 + uVar5 * 8) = auVar22._0_4_;
    }
    if ((uVar4 & 2) != 0) {
      uVar7 = vextractps_avx(auVar22,1);
      *(undefined4 *)(param_3 + 0xc + uVar5 * 8) = uVar7;
    }
    if ((uVar4 & 4) != 0) {
      uVar7 = vextractps_avx(auVar22,2);
      *(undefined4 *)(param_3 + 0x14 + uVar5 * 8) = uVar7;
    }
    if ((uVar4 & 8) != 0) {
      uVar7 = vextractps_avx(auVar22,3);
      *(undefined4 *)(param_3 + 0x1c + uVar5 * 8) = uVar7;
    }
    if ((uVar4 & 0x10) != 0) {
      *(float *)(param_3 + 0x24 + uVar5 * 8) = auVar23._16_4_;
    }
    if ((uVar4 & 0x20) != 0) {
      uVar7 = vextractps_avx(auVar33,1);
      *(undefined4 *)(param_3 + 0x2c + uVar5 * 8) = uVar7;
    }
    if ((uVar4 & 0x40) != 0) {
      uVar7 = vextractps_avx(auVar33,2);
      *(undefined4 *)(param_3 + 0x34 + uVar5 * 8) = uVar7;
    }
    if (cVar3 < '\0') {
      uVar7 = vextractps_avx(auVar33,3);
      *(undefined4 *)(param_3 + 0x3c + uVar5 * 8) = uVar7;
    }
  }
  return;
}

// InterpolateColors___un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_uniunfunf_avx @ 140cb0d00

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolateColors___un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_uniunfunf_avx
               (longlong param_1,longlong param_2,longlong param_3,uint param_4,uint param_5,
               uint param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  ulonglong uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [16];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [16];
  undefined1 auVar18 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar9 [32];
  undefined1 auVar19 [32];
  
  fVar3 = __real_3f000000;
  uVar6 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar6 = param_4;
  }
  if ((int)(uVar6 & 0xfffffff8) < 1) {
    uVar4 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    auVar10 = vpshufd_avx(ZEXT416(param_5),0);
    auVar2 = vpshufd_avx(ZEXT416(param_6),0);
    uVar4 = 0;
    do {
      auVar17 = vpmovzxbd_avx(ZEXT416(*(uint *)(param_1 + 4 + uVar4)));
      auVar14 = vpmovzxbd_avx(ZEXT416(*(uint *)(param_1 + uVar4)));
      auVar8 = vpmovzxbd_avx(ZEXT416(*(uint *)(param_2 + 4 + uVar4)));
      auVar1 = vpmovzxbd_avx(ZEXT416(*(uint *)(param_2 + uVar4)));
      auVar18._16_16_ = auVar17;
      auVar18._0_16_ = auVar14;
      auVar18 = vcvtdq2ps_avx(auVar18);
      auVar21._16_16_ = auVar8;
      auVar21._0_16_ = auVar1;
      auVar21 = vcvtdq2ps_avx(auVar21);
      auVar17._0_4_ = (int)(auVar10._0_4_ * auVar18._0_4_ + auVar2._0_4_ * auVar21._0_4_ + fVar3);
      auVar17._4_4_ = (int)(auVar10._4_4_ * auVar18._4_4_ + auVar2._4_4_ * auVar21._4_4_ + fVar3);
      auVar17._8_4_ = (int)(auVar10._8_4_ * auVar18._8_4_ + auVar2._8_4_ * auVar21._8_4_ + fVar3);
      auVar17._12_4_ =
           (int)(auVar10._12_4_ * auVar18._12_4_ + auVar2._12_4_ * auVar21._12_4_ + fVar3);
      auVar19._16_4_ = (int)(auVar10._0_4_ * auVar18._16_4_ + auVar2._0_4_ * auVar21._16_4_ + fVar3)
      ;
      auVar19._0_16_ = auVar17;
      auVar19._20_4_ = (int)(auVar10._4_4_ * auVar18._20_4_ + auVar2._4_4_ * auVar21._20_4_ + fVar3)
      ;
      auVar19._24_4_ = (int)(auVar10._8_4_ * auVar18._24_4_ + auVar2._8_4_ * auVar21._24_4_ + fVar3)
      ;
      auVar19._28_4_ =
           (int)(auVar10._12_4_ * auVar18._28_4_ + auVar2._12_4_ * auVar21._28_4_ + fVar3);
      auVar17 = vpackssdw_avx(auVar17,auVar19._16_16_);
      auVar17 = vpackuswb_avx(auVar17,auVar17);
      *(longlong *)(param_3 + uVar4) = auVar17._0_8_;
      uVar4 = uVar4 + 8;
    } while (uVar4 < (uVar6 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar4) {
      return;
    }
  }
  auVar10 = vpshufd_avx(ZEXT416((uint)uVar4),0);
  auVar11._16_16_ = auVar10;
  auVar11._0_16_ = auVar10;
  auVar17 = vpshufd_avx(ZEXT416(param_4),0);
  uVar4 = uVar4 & 0xffffffff;
  auVar14 = SUB3216(auVar11 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar8 = SUB3216(auVar11 | ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                   ,0x10);
  auVar10 = vpcmpgtd_avx(auVar17,auVar8);
  auVar2 = vpcmpgtd_avx(auVar17,auVar14);
  auVar20._16_16_ = auVar10;
  auVar20._0_16_ = auVar2;
  uVar6 = vmovmskps_avx(auVar20);
  if ((~(byte)uVar6 & 0x81) == 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = *(ulonglong *)(param_1 + uVar4);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = *(ulonglong *)(param_2 + uVar4);
  }
  else {
    pbVar5 = (byte *)(param_1 + uVar4);
    auVar2 = vpcmpgtd_avx(auVar17,auVar8);
    auVar10 = vpcmpgtd_avx(auVar17,auVar14);
    auVar12._16_16_ = auVar2;
    auVar12._0_16_ = auVar10;
    uVar7 = vmovmskps_avx(auVar12);
    if ((uVar7 & 1) != 0) {
      auVar10 = ZEXT116(*pbVar5);
    }
    if ((uVar7 & 2) != 0) {
      auVar8 = vpinsrb_avx(auVar10,(uint)pbVar5[1],1);
      auVar10 = vpblendw_avx(auVar8,auVar10,0xe);
    }
    if ((uVar7 & 4) != 0) {
      auVar8 = vpmovzxwd_avx(auVar10);
      auVar8 = vpinsrb_avx(auVar8,(uint)pbVar5[2],2);
      auVar8 = vpinsrb_avx(auVar8,(uint)auVar10[3],3);
      auVar10 = vpblendw_avx(auVar8,auVar10,0xc);
    }
    if ((uVar7 & 8) != 0) {
      auVar8 = vpmovzxwd_avx(auVar10);
      auVar8 = vpinsrb_avx(auVar8,(uint)auVar10[2],2);
      auVar8 = vpinsrb_avx(auVar8,(uint)pbVar5[3],3);
      auVar10 = vpblendw_avx(auVar8,auVar10,0xc);
    }
    if ((uVar7 & 0x10) != 0) {
      auVar8 = vpshufb_avx(auVar10,___xmm_80800706808005048080030203020100);
      auVar8 = vpinsrb_avx(auVar8,(uint)pbVar5[4],4);
      auVar8 = vpinsrb_avx(auVar8,(uint)auVar10[5],5);
      auVar10 = vpblendw_avx(auVar8,auVar10,8);
    }
    if ((uVar7 & 0x20) != 0) {
      auVar8 = vpshufb_avx(auVar10,___xmm_80800706808005048080030403020100);
      auVar8 = vpinsrb_avx(auVar8,(uint)pbVar5[5],5);
      auVar10 = vpblendw_avx(auVar8,auVar10,8);
    }
    if ((uVar7 & 0x40) != 0) {
      auVar8 = vpshufb_avx(auVar10,___xmm_80800706808005048080050403020100);
      auVar8 = vpinsrb_avx(auVar8,(uint)pbVar5[6],6);
      auVar10 = vpinsrb_avx(auVar8,(uint)auVar10[7],7);
    }
    if ((uVar7 & 0x80) != 0) {
      auVar10 = vpshufb_avx(auVar10,___xmm_80800706808005048006050403020100);
      auVar10 = vpinsrb_avx(auVar10,(uint)pbVar5[7],7);
    }
    pbVar5 = (byte *)(param_2 + uVar4);
    auVar14 = vpcmpgtd_avx(auVar17,auVar14);
    auVar15._16_16_ = auVar2;
    auVar15._0_16_ = auVar14;
    uVar7 = vmovmskps_avx(auVar15);
    if ((uVar7 & 1) != 0) {
      auVar14 = ZEXT116(*pbVar5);
    }
    if ((uVar7 & 2) != 0) {
      auVar2 = vpinsrb_avx(auVar14,(uint)pbVar5[1],1);
      auVar14 = vpblendw_avx(auVar2,auVar14,0xe);
    }
    if ((uVar7 & 4) != 0) {
      auVar2 = vpmovzxwd_avx(auVar14);
      auVar2 = vpinsrb_avx(auVar2,(uint)pbVar5[2],2);
      auVar2 = vpinsrb_avx(auVar2,(uint)auVar14[3],3);
      auVar14 = vpblendw_avx(auVar2,auVar14,0xc);
    }
    if ((uVar7 & 8) != 0) {
      auVar2 = vpmovzxwd_avx(auVar14);
      auVar2 = vpinsrb_avx(auVar2,(uint)auVar14[2],2);
      auVar2 = vpinsrb_avx(auVar2,(uint)pbVar5[3],3);
      auVar14 = vpblendw_avx(auVar2,auVar14,0xc);
    }
    if ((uVar7 & 0x10) != 0) {
      auVar2 = vpshufb_avx(auVar14,___xmm_80800706808005048080030203020100);
      auVar2 = vpinsrb_avx(auVar2,(uint)pbVar5[4],4);
      auVar2 = vpinsrb_avx(auVar2,(uint)auVar14[5],5);
      auVar14 = vpblendw_avx(auVar2,auVar14,8);
    }
    if ((uVar7 & 0x20) != 0) {
      auVar2 = vpshufb_avx(auVar14,___xmm_80800706808005048080030403020100);
      auVar2 = vpinsrb_avx(auVar2,(uint)pbVar5[5],5);
      auVar14 = vpblendw_avx(auVar2,auVar14,8);
    }
    if ((uVar7 & 0x40) != 0) {
      auVar2 = vpshufb_avx(auVar14,___xmm_80800706808005048080050403020100);
      auVar2 = vpinsrb_avx(auVar2,(uint)pbVar5[6],6);
      auVar14 = vpinsrb_avx(auVar2,(uint)auVar14[7],7);
    }
    if ((uVar7 & 0x80) != 0) {
      auVar2 = vpshufb_avx(auVar14,___xmm_80800706808005048006050403020100);
      auVar14 = vpinsrb_avx(auVar2,(uint)pbVar5[7],7);
    }
  }
  auVar2 = vpmovzxbd_avx(auVar10);
  auVar10 = vpshufd_avx(auVar10,0x55);
  auVar10 = vpmovzxbd_avx(auVar10);
  auVar13._16_16_ = auVar10;
  auVar13._0_16_ = auVar2;
  auVar18 = vcvtdq2ps_avx(auVar13);
  auVar10 = vpmovzxbd_avx(auVar14);
  auVar2 = vpshufd_avx(auVar14,0x55);
  auVar2 = vpmovzxbd_avx(auVar2);
  auVar16._16_16_ = auVar2;
  auVar16._0_16_ = auVar10;
  auVar21 = vcvtdq2ps_avx(auVar16);
  auVar10 = vpshufd_avx(ZEXT416(param_5),0);
  auVar2 = vpshufd_avx(ZEXT416(param_6),0);
  auVar8._0_4_ = (int)(auVar10._0_4_ * auVar18._0_4_ +
                      auVar2._0_4_ * auVar21._0_4_ +
                      ___ymm_3f0000003f0000003f0000003f0000003f0000003f0000003f0000003f000000);
  auVar8._4_4_ = (int)(auVar10._4_4_ * auVar18._4_4_ + auVar2._4_4_ * auVar21._4_4_ + _UNK_150b515a4
                      );
  auVar8._8_4_ = (int)(auVar10._8_4_ * auVar18._8_4_ + auVar2._8_4_ * auVar21._8_4_ + _UNK_150b515a8
                      );
  auVar8._12_4_ =
       (int)(auVar10._12_4_ * auVar18._12_4_ + auVar2._12_4_ * auVar21._12_4_ + _UNK_150b515ac);
  auVar9._16_4_ =
       (int)(auVar10._0_4_ * auVar18._16_4_ + auVar2._0_4_ * auVar21._16_4_ + _UNK_150b515b0);
  auVar9._0_16_ = auVar8;
  auVar9._20_4_ =
       (int)(auVar10._4_4_ * auVar18._20_4_ + auVar2._4_4_ * auVar21._20_4_ + _UNK_150b515b4);
  auVar9._24_4_ =
       (int)(auVar10._8_4_ * auVar18._24_4_ + auVar2._8_4_ * auVar21._24_4_ + _UNK_150b515b8);
  auVar9._28_4_ =
       (int)(auVar10._12_4_ * auVar18._28_4_ + auVar2._12_4_ * auVar21._28_4_ + _UNK_150b515bc);
  auVar10 = vpackssdw_avx(auVar8,auVar9._16_16_);
  auVar10 = vpackuswb_avx(auVar10,auVar10);
  if ((uVar6 & 1) != 0) {
    *(char *)(param_3 + uVar4) = auVar10[0];
  }
  if ((uVar6 & 2) != 0) {
    *(char *)(param_3 + 1 + uVar4) = auVar10[1];
  }
  if ((uVar6 & 4) != 0) {
    *(char *)(param_3 + 2 + uVar4) = auVar10[2];
  }
  if ((uVar6 & 8) != 0) {
    *(char *)(param_3 + 3 + uVar4) = auVar10[3];
  }
  if ((uVar6 & 0x10) != 0) {
    *(char *)(param_3 + 4 + uVar4) = auVar10[4];
  }
  if ((uVar6 & 0x20) != 0) {
    *(char *)(param_3 + 5 + uVar4) = auVar10[5];
  }
  if ((uVar6 & 0x40) != 0) {
    *(char *)(param_3 + 6 + uVar4) = auVar10[6];
  }
  if ((char)(byte)uVar6 < '\0') {
    *(char *)(param_3 + 7 + uVar4) = auVar10[7];
  }
  return;
}

// InterpolateTangents___un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_uniunfunf_avx @ 140cb1200

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolateTangents___un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_un_3C_unT_3E_uniunfunf_avx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,uint param_7,uint param_8,uint param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  byte *pbVar10;
  byte bVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  float fVar17;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar18 [32];
  undefined1 auVar22 [16];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  float fVar28;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar36 [16];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [32];
  undefined1 auVar40 [16];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [16];
  undefined1 auVar51 [32];
  undefined1 auVar52 [16];
  undefined1 auVar53 [32];
  undefined1 auVar16 [32];
  undefined1 auVar48 [32];
  
  fVar9 = __real_3f000000;
  uVar12 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar12 = param_7;
  }
  if ((int)(uVar12 & 0xfffffff8) < 1) {
    uVar13 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    auVar22 = vpshufd_avx(ZEXT416(param_8),0);
    auVar15 = vpshufd_avx(ZEXT416(param_9),0);
    uVar13 = 0;
    auVar37._0_8_ = CONCAT44(__real_80808080,__real_80808080);
    auVar37._8_4_ = __real_80808080;
    auVar37._12_4_ = __real_80808080;
    do {
      auVar36._8_8_ = 0;
      auVar36._0_8_ = *(ulonglong *)(param_1 + uVar13);
      auVar44._8_8_ = 0;
      auVar44._0_8_ = *(ulonglong *)(param_2 + uVar13);
      auVar50._8_8_ = 0;
      auVar50._0_8_ = *(ulonglong *)(param_3 + uVar13);
      auVar52._8_8_ = 0;
      auVar52._0_8_ = *(ulonglong *)(param_4 + uVar13);
      auVar29 = vpmovzxbd_avx(auVar36 ^ auVar37);
      auVar36 = vpshufd_avx(auVar36 ^ auVar37,0x55);
      auVar36 = vpmovzxbd_avx(auVar36);
      auVar41._16_16_ = auVar36;
      auVar41._0_16_ = auVar29;
      auVar41 = vcvtdq2ps_avx(auVar41);
      auVar29 = vpmovzxbd_avx(auVar44 ^ auVar37);
      auVar36 = vpshufd_avx(auVar44 ^ auVar37,0x55);
      auVar36 = vpmovzxbd_avx(auVar36);
      auVar47._16_16_ = auVar36;
      auVar47._0_16_ = auVar29;
      auVar47 = vcvtdq2ps_avx(auVar47);
      auVar29 = vpmovzxbd_avx(auVar50 ^ auVar37);
      auVar36 = vpshufd_avx(auVar50 ^ auVar37,0x55);
      auVar36 = vpmovzxbd_avx(auVar36);
      auVar51._16_16_ = auVar36;
      auVar51._0_16_ = auVar29;
      auVar51 = vcvtdq2ps_avx(auVar51);
      auVar29 = vpmovzxbd_avx(auVar52 ^ auVar37);
      auVar36 = vpshufd_avx(auVar52 ^ auVar37,0x55);
      auVar36 = vpmovzxbd_avx(auVar36);
      auVar53._16_16_ = auVar36;
      auVar53._0_16_ = auVar29;
      auVar53 = vcvtdq2ps_avx(auVar53);
      fVar17 = auVar22._0_4_;
      fVar19 = auVar22._4_4_;
      fVar20 = auVar22._8_4_;
      fVar21 = auVar22._12_4_;
      fVar28 = auVar15._0_4_;
      fVar33 = auVar15._4_4_;
      fVar34 = auVar15._8_4_;
      fVar35 = auVar15._12_4_;
      auVar29._0_4_ = (int)(fVar17 * auVar41._0_4_ + fVar28 * auVar47._0_4_ + fVar9);
      auVar29._4_4_ = (int)(fVar19 * auVar41._4_4_ + fVar33 * auVar47._4_4_ + fVar9);
      auVar29._8_4_ = (int)(fVar20 * auVar41._8_4_ + fVar34 * auVar47._8_4_ + fVar9);
      auVar29._12_4_ = (int)(fVar21 * auVar41._12_4_ + fVar35 * auVar47._12_4_ + fVar9);
      auVar42._16_4_ = (int)(fVar17 * auVar41._16_4_ + fVar28 * auVar47._16_4_ + fVar9);
      auVar42._0_16_ = auVar29;
      auVar42._20_4_ = (int)(fVar19 * auVar41._20_4_ + fVar33 * auVar47._20_4_ + fVar9);
      auVar42._24_4_ = (int)(fVar20 * auVar41._24_4_ + fVar34 * auVar47._24_4_ + fVar9);
      auVar42._28_4_ = (int)(fVar21 * auVar41._28_4_ + fVar35 * auVar47._28_4_ + fVar9);
      auVar29 = vpackssdw_avx(auVar29,auVar42._16_16_);
      auVar36 = vpackuswb_avx(auVar29,auVar29);
      auVar45._0_4_ = (int)(auVar53._0_4_ * fVar28 + fVar9 + auVar51._0_4_ * fVar17);
      auVar45._4_4_ = (int)(auVar53._4_4_ * fVar33 + fVar9 + auVar51._4_4_ * fVar19);
      auVar45._8_4_ = (int)(auVar53._8_4_ * fVar34 + fVar9 + auVar51._8_4_ * fVar20);
      auVar45._12_4_ = (int)(auVar53._12_4_ * fVar35 + fVar9 + auVar51._12_4_ * fVar21);
      auVar48._16_4_ = (int)(auVar53._16_4_ * fVar28 + fVar9 + auVar51._16_4_ * fVar17);
      auVar48._0_16_ = auVar45;
      auVar48._20_4_ = (int)(auVar53._20_4_ * fVar33 + fVar9 + auVar51._20_4_ * fVar19);
      auVar48._24_4_ = (int)(auVar53._24_4_ * fVar34 + fVar9 + auVar51._24_4_ * fVar20);
      auVar48._28_4_ = (int)(auVar53._28_4_ * fVar35 + fVar9 + auVar51._28_4_ * fVar21);
      auVar29 = vpackssdw_avx(auVar45,auVar48._16_16_);
      auVar29 = vpackuswb_avx(auVar29,auVar29);
      *(ulonglong *)(param_5 + uVar13) = auVar36._0_8_ ^ auVar37._0_8_;
      *(ulonglong *)(param_6 + uVar13) = auVar29._0_8_ ^ auVar37._0_8_;
      uVar13 = uVar13 + 8;
    } while (uVar13 < (uVar12 & 0xfffffff8));
    if ((int)param_7 <= (int)uVar13) {
      return;
    }
  }
  fVar9 = __real_3f000000;
  auVar22 = vpshufd_avx(ZEXT416((uint)uVar13),0);
  auVar23._16_16_ = auVar22;
  auVar23._0_16_ = auVar22;
  auVar37 = vpshufd_avx(ZEXT416(param_7),0);
  uVar13 = uVar13 & 0xffffffff;
  auVar29 = SUB3216(auVar23 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar36 = SUB3216(auVar23 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar22 = vpcmpgtd_avx(auVar37,auVar36);
  auVar15 = vpcmpgtd_avx(auVar37,auVar29);
  auVar39._16_16_ = auVar22;
  auVar39._0_16_ = auVar15;
  uVar12 = vmovmskps_avx(auVar39);
  bVar11 = (byte)uVar12;
  if ((~bVar11 & 0x81) == 0) {
    auVar22._8_8_ = 0;
    auVar22._0_8_ = *(ulonglong *)(param_1 + uVar13);
    auVar40._8_8_ = 0;
    auVar40._0_8_ = *(ulonglong *)(param_2 + uVar13);
    auVar46._8_8_ = 0;
    auVar46._0_8_ = *(ulonglong *)(param_3 + uVar13);
    auVar30._8_8_ = 0;
    auVar30._0_8_ = *(ulonglong *)(param_4 + uVar13);
  }
  else {
    pbVar10 = (byte *)(param_1 + uVar13);
    auVar15 = vpcmpgtd_avx(auVar37,auVar36);
    auVar22 = vpcmpgtd_avx(auVar37,auVar29);
    auVar24._16_16_ = auVar15;
    auVar24._0_16_ = auVar22;
    uVar14 = vmovmskps_avx(auVar24);
    if ((uVar14 & 1) != 0) {
      auVar22 = ZEXT116(*pbVar10);
    }
    if ((uVar14 & 2) != 0) {
      auVar36 = vpinsrb_avx(auVar22,(uint)pbVar10[1],1);
      auVar22 = vpblendw_avx(auVar36,auVar22,0xe);
    }
    if ((uVar14 & 4) != 0) {
      auVar36 = vpmovzxwd_avx(auVar22);
      auVar36 = vpinsrb_avx(auVar36,(uint)pbVar10[2],2);
      auVar36 = vpinsrb_avx(auVar36,(uint)auVar22[3],3);
      auVar22 = vpblendw_avx(auVar36,auVar22,0xc);
    }
    if ((uVar14 & 8) != 0) {
      auVar36 = vpmovzxwd_avx(auVar22);
      auVar36 = vpinsrb_avx(auVar36,(uint)auVar22[2],2);
      auVar36 = vpinsrb_avx(auVar36,(uint)pbVar10[3],3);
      auVar22 = vpblendw_avx(auVar36,auVar22,0xc);
    }
    if ((uVar14 & 0x10) != 0) {
      auVar36 = vpshufb_avx(auVar22,___xmm_80800706808005048080030203020100);
      auVar36 = vpinsrb_avx(auVar36,(uint)pbVar10[4],4);
      auVar36 = vpinsrb_avx(auVar36,(uint)auVar22[5],5);
      auVar22 = vpblendw_avx(auVar36,auVar22,8);
    }
    if ((uVar14 & 0x20) != 0) {
      auVar36 = vpshufb_avx(auVar22,___xmm_80800706808005048080030403020100);
      auVar36 = vpinsrb_avx(auVar36,(uint)pbVar10[5],5);
      auVar22 = vpblendw_avx(auVar36,auVar22,8);
    }
    if ((uVar14 & 0x40) != 0) {
      auVar36 = vpshufb_avx(auVar22,___xmm_80800706808005048080050403020100);
      auVar36 = vpinsrb_avx(auVar36,(uint)pbVar10[6],6);
      auVar22 = vpinsrb_avx(auVar36,(uint)auVar22[7],7);
    }
    if ((uVar14 & 0x80) != 0) {
      auVar22 = vpshufb_avx(auVar22,___xmm_80800706808005048006050403020100);
      auVar22 = vpinsrb_avx(auVar22,(uint)pbVar10[7],7);
    }
    pbVar10 = (byte *)(param_2 + uVar13);
    auVar40 = vpcmpgtd_avx(auVar37,auVar29);
    auVar43._16_16_ = auVar15;
    auVar43._0_16_ = auVar40;
    uVar14 = vmovmskps_avx(auVar43);
    if ((uVar14 & 1) != 0) {
      auVar40 = ZEXT116(*pbVar10);
    }
    if ((uVar14 & 2) != 0) {
      auVar36 = vpinsrb_avx(auVar40,(uint)pbVar10[1],1);
      auVar40 = vpblendw_avx(auVar36,auVar40,0xe);
    }
    if ((uVar14 & 4) != 0) {
      auVar36 = vpmovzxwd_avx(auVar40);
      auVar36 = vpinsrb_avx(auVar36,(uint)pbVar10[2],2);
      auVar36 = vpinsrb_avx(auVar36,(uint)auVar40[3],3);
      auVar40 = vpblendw_avx(auVar36,auVar40,0xc);
    }
    if ((uVar14 & 8) != 0) {
      auVar36 = vpmovzxwd_avx(auVar40);
      auVar36 = vpinsrb_avx(auVar36,(uint)auVar40[2],2);
      auVar36 = vpinsrb_avx(auVar36,(uint)pbVar10[3],3);
      auVar40 = vpblendw_avx(auVar36,auVar40,0xc);
    }
    if ((uVar14 & 0x10) != 0) {
      auVar36 = vpshufb_avx(auVar40,___xmm_80800706808005048080030203020100);
      auVar36 = vpinsrb_avx(auVar36,(uint)pbVar10[4],4);
      auVar36 = vpinsrb_avx(auVar36,(uint)auVar40[5],5);
      auVar40 = vpblendw_avx(auVar36,auVar40,8);
    }
    if ((uVar14 & 0x20) != 0) {
      auVar36 = vpshufb_avx(auVar40,___xmm_80800706808005048080030403020100);
      auVar36 = vpinsrb_avx(auVar36,(uint)pbVar10[5],5);
      auVar40 = vpblendw_avx(auVar36,auVar40,8);
    }
    if ((uVar14 & 0x40) != 0) {
      auVar36 = vpshufb_avx(auVar40,___xmm_80800706808005048080050403020100);
      auVar36 = vpinsrb_avx(auVar36,(uint)pbVar10[6],6);
      auVar40 = vpinsrb_avx(auVar36,(uint)auVar40[7],7);
    }
    if ((uVar14 & 0x80) != 0) {
      auVar36 = vpshufb_avx(auVar40,___xmm_80800706808005048006050403020100);
      auVar40 = vpinsrb_avx(auVar36,(uint)pbVar10[7],7);
    }
    pbVar10 = (byte *)(param_3 + uVar13);
    auVar46 = vpcmpgtd_avx(auVar37,auVar29);
    auVar49._16_16_ = auVar15;
    auVar49._0_16_ = auVar46;
    uVar14 = vmovmskps_avx(auVar49);
    if ((uVar14 & 1) != 0) {
      auVar46 = ZEXT116(*pbVar10);
    }
    if ((uVar14 & 2) != 0) {
      auVar36 = vpinsrb_avx(auVar46,(uint)pbVar10[1],1);
      auVar46 = vpblendw_avx(auVar36,auVar46,0xe);
    }
    if ((uVar14 & 4) != 0) {
      auVar36 = vpmovzxwd_avx(auVar46);
      auVar36 = vpinsrb_avx(auVar36,(uint)pbVar10[2],2);
      auVar36 = vpinsrb_avx(auVar36,(uint)auVar46[3],3);
      auVar46 = vpblendw_avx(auVar36,auVar46,0xc);
    }
    if ((uVar14 & 8) != 0) {
      auVar36 = vpmovzxwd_avx(auVar46);
      auVar36 = vpinsrb_avx(auVar36,(uint)auVar46[2],2);
      auVar36 = vpinsrb_avx(auVar36,(uint)pbVar10[3],3);
      auVar46 = vpblendw_avx(auVar36,auVar46,0xc);
    }
    if ((uVar14 & 0x10) != 0) {
      auVar36 = vpshufb_avx(auVar46,___xmm_80800706808005048080030203020100);
      auVar36 = vpinsrb_avx(auVar36,(uint)pbVar10[4],4);
      auVar36 = vpinsrb_avx(auVar36,(uint)auVar46[5],5);
      auVar46 = vpblendw_avx(auVar36,auVar46,8);
    }
    if ((uVar14 & 0x20) != 0) {
      auVar36 = vpshufb_avx(auVar46,___xmm_80800706808005048080030403020100);
      auVar36 = vpinsrb_avx(auVar36,(uint)pbVar10[5],5);
      auVar46 = vpblendw_avx(auVar36,auVar46,8);
    }
    if ((uVar14 & 0x40) != 0) {
      auVar36 = vpshufb_avx(auVar46,___xmm_80800706808005048080050403020100);
      auVar36 = vpinsrb_avx(auVar36,(uint)pbVar10[6],6);
      auVar46 = vpinsrb_avx(auVar36,(uint)auVar46[7],7);
    }
    if ((uVar14 & 0x80) != 0) {
      auVar36 = vpshufb_avx(auVar46,___xmm_80800706808005048006050403020100);
      auVar46 = vpinsrb_avx(auVar36,(uint)pbVar10[7],7);
    }
    pbVar10 = (byte *)(param_4 + uVar13);
    auVar30 = vpcmpgtd_avx(auVar37,auVar29);
    auVar31._16_16_ = auVar15;
    auVar31._0_16_ = auVar30;
    uVar14 = vmovmskps_avx(auVar31);
    if ((uVar14 & 1) != 0) {
      auVar30 = ZEXT116(*pbVar10);
    }
    if ((uVar14 & 2) != 0) {
      auVar15 = vpinsrb_avx(auVar30,(uint)pbVar10[1],1);
      auVar30 = vpblendw_avx(auVar15,auVar30,0xe);
    }
    if ((uVar14 & 4) != 0) {
      auVar15 = vpmovzxwd_avx(auVar30);
      auVar15 = vpinsrb_avx(auVar15,(uint)pbVar10[2],2);
      auVar15 = vpinsrb_avx(auVar15,(uint)auVar30[3],3);
      auVar30 = vpblendw_avx(auVar15,auVar30,0xc);
    }
    if ((uVar14 & 8) != 0) {
      auVar15 = vpmovzxwd_avx(auVar30);
      auVar15 = vpinsrb_avx(auVar15,(uint)auVar30[2],2);
      auVar15 = vpinsrb_avx(auVar15,(uint)pbVar10[3],3);
      auVar30 = vpblendw_avx(auVar15,auVar30,0xc);
    }
    if ((uVar14 & 0x10) != 0) {
      auVar15 = vpshufb_avx(auVar30,___xmm_80800706808005048080030203020100);
      auVar15 = vpinsrb_avx(auVar15,(uint)pbVar10[4],4);
      auVar15 = vpinsrb_avx(auVar15,(uint)auVar30[5],5);
      auVar30 = vpblendw_avx(auVar15,auVar30,8);
    }
    if ((uVar14 & 0x20) != 0) {
      auVar15 = vpshufb_avx(auVar30,___xmm_80800706808005048080030403020100);
      auVar15 = vpinsrb_avx(auVar15,(uint)pbVar10[5],5);
      auVar30 = vpblendw_avx(auVar15,auVar30,8);
    }
    if ((uVar14 & 0x40) != 0) {
      auVar15 = vpshufb_avx(auVar30,___xmm_80800706808005048080050403020100);
      auVar15 = vpinsrb_avx(auVar15,(uint)pbVar10[6],6);
      auVar30 = vpinsrb_avx(auVar15,(uint)auVar30[7],7);
    }
    if ((uVar14 & 0x80) != 0) {
      auVar15 = vpshufb_avx(auVar30,___xmm_80800706808005048006050403020100);
      auVar30 = vpinsrb_avx(auVar15,(uint)pbVar10[7],7);
    }
  }
  auVar38._4_4_ = __real_80808080;
  auVar38._0_4_ = __real_80808080;
  auVar38._8_4_ = __real_80808080;
  auVar38._12_4_ = __real_80808080;
  auVar15 = vpmovzxbd_avx(auVar22 ^ auVar38);
  auVar22 = vpshufd_avx(auVar22 ^ auVar38,0x55);
  auVar22 = vpmovzxbd_avx(auVar22);
  auVar25._16_16_ = auVar22;
  auVar25._0_16_ = auVar15;
  auVar41 = vcvtdq2ps_avx(auVar25);
  auVar22 = vpmovzxbd_avx(auVar40 ^ auVar38);
  auVar15 = vpshufd_avx(auVar40 ^ auVar38,0x55);
  auVar15 = vpmovzxbd_avx(auVar15);
  auVar26._16_16_ = auVar15;
  auVar26._0_16_ = auVar22;
  auVar47 = vcvtdq2ps_avx(auVar26);
  auVar22 = vpmovzxbd_avx(auVar46 ^ auVar38);
  auVar15 = vpshufd_avx(auVar46 ^ auVar38,0x55);
  auVar15 = vpmovzxbd_avx(auVar15);
  auVar27._16_16_ = auVar15;
  auVar27._0_16_ = auVar22;
  auVar22 = vpmovzxbd_avx(auVar30 ^ auVar38);
  auVar15 = vpshufd_avx(auVar30 ^ auVar38,0x55);
  auVar15 = vpmovzxbd_avx(auVar15);
  auVar32._16_16_ = auVar15;
  auVar32._0_16_ = auVar22;
  auVar51 = vcvtdq2ps_avx(auVar32);
  auVar22 = vpshufd_avx(ZEXT416(param_8),0);
  fVar17 = auVar22._0_4_;
  fVar19 = auVar22._4_4_;
  fVar20 = auVar22._8_4_;
  fVar21 = auVar22._12_4_;
  auVar22 = vpshufd_avx(ZEXT416(param_9),0);
  fVar28 = auVar22._0_4_;
  fVar33 = auVar22._4_4_;
  fVar34 = auVar22._8_4_;
  fVar35 = auVar22._12_4_;
  auVar15._0_4_ = (int)(fVar17 * auVar41._0_4_ + fVar28 * auVar47._0_4_ + __real_3f000000);
  auVar15._4_4_ = (int)(fVar19 * auVar41._4_4_ + fVar33 * auVar47._4_4_ + __real_3f000000);
  auVar15._8_4_ = (int)(fVar20 * auVar41._8_4_ + fVar34 * auVar47._8_4_ + __real_3f000000);
  auVar15._12_4_ = (int)(fVar21 * auVar41._12_4_ + fVar35 * auVar47._12_4_ + __real_3f000000);
  auVar16._16_4_ = (int)(fVar17 * auVar41._16_4_ + fVar28 * auVar47._16_4_ + __real_3f000000);
  auVar16._0_16_ = auVar15;
  auVar16._20_4_ = (int)(fVar19 * auVar41._20_4_ + fVar33 * auVar47._20_4_ + __real_3f000000);
  auVar16._24_4_ = (int)(fVar20 * auVar41._24_4_ + fVar34 * auVar47._24_4_ + __real_3f000000);
  auVar16._28_4_ = (int)(fVar21 * auVar41._28_4_ + fVar35 * auVar47._28_4_ + __real_3f000000);
  auVar22 = vpackssdw_avx(auVar15,auVar16._16_16_);
  auVar22 = vpackuswb_avx(auVar22,auVar22);
  auVar22 = auVar22 ^ auVar38;
  if ((uVar12 & 1) == 0) {
    auVar41 = vcvtdq2ps_avx(auVar27);
  }
  else {
    *(char *)(param_5 + uVar13) = auVar22[0];
    auVar41 = vcvtdq2ps_avx(auVar27);
  }
  if ((uVar12 & 2) != 0) {
    *(char *)(param_5 + 1 + uVar13) = auVar22[1];
  }
  if ((uVar12 & 4) != 0) {
    *(char *)(param_5 + 2 + uVar13) = auVar22[2];
  }
  uVar8 = fVar21 * (float)auVar41._28_4_ + fVar35 * auVar51._28_4_ + fVar9;
  uVar7 = fVar20 * (float)auVar41._24_4_ + fVar34 * auVar51._24_4_ + fVar9;
  uVar6 = fVar19 * (float)auVar41._20_4_ + fVar33 * auVar51._20_4_ + fVar9;
  uVar5 = fVar17 * (float)auVar41._16_4_ + fVar28 * auVar51._16_4_ + fVar9;
  uVar4 = fVar21 * (float)auVar41._12_4_ + fVar35 * auVar51._12_4_ + fVar9;
  uVar3 = fVar20 * (float)auVar41._8_4_ + fVar34 * auVar51._8_4_ + fVar9;
  uVar2 = fVar19 * (float)auVar41._4_4_ + fVar33 * auVar51._4_4_ + fVar9;
  uVar1 = fVar17 * (float)auVar41._0_4_ + fVar28 * auVar51._0_4_ + fVar9;
  if ((uVar12 & 8) == 0) {
    auVar18._0_4_ = (int)(float)uVar1;
    auVar18._4_4_ = (int)(float)uVar2;
    auVar18._8_4_ = (int)(float)uVar3;
    auVar18._12_4_ = (int)(float)uVar4;
    auVar18._16_4_ = (int)(float)uVar5;
    auVar18._20_4_ = (int)(float)uVar6;
    auVar18._24_4_ = (int)(float)uVar7;
    auVar18._28_4_ = (int)(float)uVar8;
  }
  else {
    *(char *)(param_5 + 3 + uVar13) = auVar22[3];
    auVar18._0_4_ = (int)(float)uVar1;
    auVar18._4_4_ = (int)(float)uVar2;
    auVar18._8_4_ = (int)(float)uVar3;
    auVar18._12_4_ = (int)(float)uVar4;
    auVar18._16_4_ = (int)(float)uVar5;
    auVar18._20_4_ = (int)(float)uVar6;
    auVar18._24_4_ = (int)(float)uVar7;
    auVar18._28_4_ = (int)(float)uVar8;
  }
  if ((uVar12 & 0x10) != 0) {
    *(char *)(param_5 + 4 + uVar13) = auVar22[4];
  }
  if ((uVar12 & 0x20) == 0) {
    auVar15 = vpackssdw_avx(auVar18._0_16_,auVar18._16_16_);
  }
  else {
    *(char *)(param_5 + 5 + uVar13) = auVar22[5];
    auVar15 = vpackssdw_avx(auVar18._0_16_,auVar18._16_16_);
  }
  if ((uVar12 & 0x40) == 0) {
    auVar15 = vpackuswb_avx(auVar15,auVar15);
  }
  else {
    *(char *)(param_5 + 6 + uVar13) = auVar22[6];
    auVar15 = vpackuswb_avx(auVar15,auVar15);
  }
  if ((char)bVar11 < '\0') {
    *(char *)(param_5 + 7 + uVar13) = auVar22[7];
  }
  auVar15 = auVar15 ^ auVar38;
  if ((uVar12 & 1) != 0) {
    *(char *)(param_6 + uVar13) = auVar15[0];
  }
  if ((uVar12 & 2) != 0) {
    *(char *)(param_6 + 1 + uVar13) = auVar15[1];
  }
  if ((uVar12 & 4) != 0) {
    *(char *)(param_6 + 2 + uVar13) = auVar15[2];
  }
  if ((uVar12 & 8) != 0) {
    *(char *)(param_6 + 3 + uVar13) = auVar15[3];
  }
  if ((uVar12 & 0x10) != 0) {
    *(char *)(param_6 + 4 + uVar13) = auVar15[4];
  }
  if ((uVar12 & 0x20) != 0) {
    *(char *)(param_6 + 5 + uVar13) = auVar15[5];
  }
  if ((uVar12 & 0x40) != 0) {
    *(char *)(param_6 + 6 + uVar13) = auVar15[6];
  }
  if ((char)bVar11 < '\0') {
    *(char *)(param_6 + 7 + uVar13) = auVar15[7];
  }
  return;
}

// InterpolatePositions_avx @ 140cb1c30

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolatePositions_avx
               (longlong param_1,longlong param_2,longlong param_3,uint param_4,uint param_5,
               uint param_6)

{
  undefined1 (*pauVar1) [32];
  longlong lVar2;
  undefined1 (*pauVar3) [16];
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  longlong in_R11;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar13;
  float fVar28;
  undefined1 auVar17 [16];
  float fVar26;
  float fVar27;
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar29 [16];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar30 [16];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [16];
  undefined1 auVar40 [32];
  uint uVar42;
  float fVar43;
  uint uVar48;
  uint uVar50;
  uint uVar52;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  uint uVar57;
  undefined1 auVar46 [32];
  float fVar49;
  float fVar51;
  float fVar53;
  undefined1 auVar47 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
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
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  longlong lVar12;
  undefined1 auVar20 [32];
  undefined1 auVar25 [32];
  undefined1 auVar35 [32];
  undefined1 auVar41 [32];
  
  auVar21 = ___ymm_0000000600000007000000040000000000000001000000020000000000000000;
  uVar8 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar8 = param_4;
  }
  if ((int)(uVar8 & 0xfffffff8) < 1) {
    uVar4 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    auVar17 = vshufps_avx(ZEXT416(param_5),ZEXT416(param_5),0);
    auVar30 = vshufps_avx(ZEXT416(param_6),ZEXT416(param_6),0);
    in_R11 = 0x40;
    uVar4 = 0;
    do {
      auVar14 = *(undefined1 (*) [16])(param_1 + -0x40 + in_R11);
      auVar29 = *(undefined1 (*) [16])(param_1 + -0x30 + in_R11);
      auVar15 = *(undefined1 (*) [16])(param_1 + -0x10 + in_R11);
      auVar73._16_16_ = auVar29;
      auVar73._0_16_ = auVar14;
      auVar76._16_16_ = auVar15;
      auVar76._0_16_ = *(undefined1 (*) [16])(param_1 + -0x20 + in_R11);
      auVar39 = *(undefined1 (*) [16])(param_1 + 0x10 + in_R11);
      auVar78._16_16_ = auVar39;
      auVar78._0_16_ = *(undefined1 (*) [16])(param_1 + in_R11);
      auVar65._16_16_ = auVar14;
      auVar65._0_16_ = auVar29;
      auVar20 = vblendps_avx(auVar73,auVar65,0x24);
      auVar20 = vpermilps_avx(auVar20,
                              ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                             );
      uVar11 = *(undefined4 *)(param_1 + -0x18 + in_R11);
      auVar18._20_4_ = uVar11;
      auVar18._16_4_ = uVar11;
      auVar18._24_4_ = uVar11;
      auVar18._28_4_ = uVar11;
      uVar11 = *(undefined4 *)(param_1 + -0x1c + in_R11);
      auVar18._4_4_ = uVar11;
      auVar18._0_4_ = uVar11;
      auVar18._8_4_ = uVar11;
      auVar18._12_4_ = uVar11;
      auVar20 = vblendps_avx(auVar20,auVar18,0x88);
      auVar31._16_16_ = *(undefined1 (*) [16])(param_1 + in_R11);
      auVar31._0_16_ = auVar39;
      auVar18 = vblendps_avx(auVar31,auVar78,0x44);
      auVar18 = vpermilps_avx(auVar18,auVar21);
      uVar11 = *(undefined4 *)(param_1 + -0xc + in_R11);
      auVar67._20_4_ = uVar11;
      auVar67._16_4_ = uVar11;
      auVar67._24_4_ = uVar11;
      auVar67._28_4_ = uVar11;
      auVar14 = vshufps_avx(auVar15,auVar15,0xec);
      auVar67._0_16_ = auVar14;
      auVar18 = vblendps_avx(auVar18,auVar67,0x13);
      auVar65 = vperm2f128_avx(auVar20,auVar18,0x31);
      auVar33 = vblendps_avx(auVar76,auVar73,0x24);
      auVar33 = vshufps_avx(ZEXT1632(auVar29),auVar33,0x21);
      auVar33 = vshufps_avx(auVar33,auVar76,0xc2);
      auVar19 = vshufps_avx(auVar31,auVar78,0xc4);
      auVar33 = vblendps_avx(auVar33,auVar19,0xe0);
      auVar14 = *(undefined1 (*) [16])(param_2 + -0x40 + in_R11);
      auVar29 = *(undefined1 (*) [16])(param_2 + -0x30 + in_R11);
      auVar15 = *(undefined1 (*) [16])(param_2 + -0x10 + in_R11);
      auVar77._16_16_ = auVar29;
      auVar77._0_16_ = auVar14;
      auVar32._16_16_ = auVar15;
      auVar32._0_16_ = *(undefined1 (*) [16])(param_2 + -0x20 + in_R11);
      auVar39 = *(undefined1 (*) [16])(param_2 + 0x10 + in_R11);
      auVar60._16_16_ = auVar39;
      auVar60._0_16_ = *(undefined1 (*) [16])(param_2 + in_R11);
      auVar19._16_16_ = auVar14;
      auVar19._0_16_ = auVar29;
      auVar19 = vblendps_avx(auVar77,auVar19,0x24);
      auVar19 = vpermilps_avx(auVar19,
                              ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                             );
      uVar11 = *(undefined4 *)(param_2 + -0x18 + in_R11);
      auVar44._20_4_ = uVar11;
      auVar44._16_4_ = uVar11;
      auVar44._24_4_ = uVar11;
      auVar44._28_4_ = uVar11;
      uVar11 = *(undefined4 *)(param_2 + -0x1c + in_R11);
      auVar44._4_4_ = uVar11;
      auVar44._0_4_ = uVar11;
      auVar44._8_4_ = uVar11;
      auVar44._12_4_ = uVar11;
      auVar19 = vblendps_avx(auVar19,auVar44,0x88);
      auVar45._16_16_ = *(undefined1 (*) [16])(param_2 + in_R11);
      auVar45._0_16_ = auVar39;
      auVar31 = vblendps_avx(auVar45,auVar60,0x44);
      auVar31 = vpermilps_avx(auVar31,auVar21);
      uVar11 = *(undefined4 *)(param_2 + -0xc + in_R11);
      auVar74._20_4_ = uVar11;
      auVar74._16_4_ = uVar11;
      auVar74._24_4_ = uVar11;
      auVar74._28_4_ = uVar11;
      auVar14 = vshufps_avx(auVar15,auVar15,0xec);
      auVar74._0_16_ = auVar14;
      auVar31 = vblendps_avx(auVar31,auVar74,0x13);
      auVar44 = vperm2f128_avx(auVar19,auVar31,0x31);
      auVar34 = vblendps_avx(auVar32,auVar77,0x24);
      auVar34 = vshufps_avx(ZEXT1632(auVar29),auVar34,0x21);
      auVar34 = vshufps_avx(auVar34,auVar32,0xc2);
      auVar32 = vshufps_avx(auVar45,auVar60,0xc4);
      auVar34 = vblendps_avx(auVar34,auVar32,0xe0);
      fVar13 = auVar17._0_4_;
      fVar27 = auVar17._4_4_;
      fVar43 = auVar17._8_4_;
      fVar51 = auVar17._12_4_;
      fVar26 = auVar30._0_4_;
      fVar28 = auVar30._4_4_;
      fVar49 = auVar30._8_4_;
      fVar53 = auVar30._12_4_;
      auVar29._0_4_ = auVar19._0_4_ * fVar26 + auVar20._0_4_ * fVar13;
      auVar29._4_4_ = auVar19._4_4_ * fVar28 + auVar20._4_4_ * fVar27;
      auVar29._8_4_ = auVar19._8_4_ * fVar49 + auVar20._8_4_ * fVar43;
      auVar29._12_4_ = auVar19._12_4_ * fVar53 + auVar20._12_4_ * fVar51;
      auVar68._16_4_ = auVar31._0_4_ * fVar26 + auVar18._0_4_ * fVar13;
      auVar68._0_16_ = auVar29;
      auVar68._20_4_ = auVar31._4_4_ * fVar28 + auVar18._4_4_ * fVar27;
      auVar68._24_4_ = auVar31._8_4_ * fVar49 + auVar18._8_4_ * fVar43;
      auVar68._28_4_ = auVar31._12_4_ * fVar53 + auVar18._12_4_ * fVar51;
      auVar14._0_4_ = auVar65._0_4_ * fVar13 + fVar26 * auVar44._0_4_;
      auVar14._4_4_ = auVar65._4_4_ * fVar27 + fVar28 * auVar44._4_4_;
      auVar14._8_4_ = auVar65._8_4_ * fVar43 + fVar49 * auVar44._8_4_;
      auVar14._12_4_ = auVar65._12_4_ * fVar51 + fVar53 * auVar44._12_4_;
      auVar20._16_4_ = auVar65._16_4_ * fVar13 + fVar26 * auVar44._16_4_;
      auVar20._0_16_ = auVar14;
      auVar20._20_4_ = auVar65._20_4_ * fVar27 + fVar28 * auVar44._20_4_;
      auVar20._24_4_ = auVar65._24_4_ * fVar43 + fVar49 * auVar44._24_4_;
      auVar20._28_4_ = auVar65._28_4_ * fVar51 + fVar53 * auVar44._28_4_;
      auVar66._0_4_ = auVar33._0_4_ * fVar13 + fVar26 * auVar34._0_4_;
      auVar66._4_4_ = auVar33._4_4_ * fVar27 + fVar28 * auVar34._4_4_;
      auVar66._8_4_ = auVar33._8_4_ * fVar43 + fVar49 * auVar34._8_4_;
      auVar66._12_4_ = auVar33._12_4_ * fVar51 + fVar53 * auVar34._12_4_;
      auVar66._16_4_ = auVar33._16_4_ * fVar13 + fVar26 * auVar34._16_4_;
      auVar66._20_4_ = auVar33._20_4_ * fVar27 + fVar28 * auVar34._20_4_;
      auVar66._24_4_ = auVar33._24_4_ * fVar43 + fVar49 * auVar34._24_4_;
      auVar66._28_4_ = auVar33._28_4_ * fVar51 + fVar53 * auVar34._28_4_;
      auVar33._16_16_ = auVar14;
      auVar33._0_16_ = auVar29;
      auVar33 = vshufpd_avx(auVar68,auVar33,2);
      auVar29 = auVar20._16_16_;
      auVar14 = vshufpd_avx(auVar14,auVar29,1);
      auVar19 = vperm2f128_avx(auVar66,auVar66,1);
      auVar20 = vshufps_avx(auVar66,auVar19,0x30);
      auVar20 = vshufps_avx(auVar19,auVar20,0x29);
      auVar20 = vblendps_avx(auVar20,ZEXT1632(auVar14),7);
      auVar31 = vperm2f128_avx(auVar20,auVar20,1);
      auVar18 = vunpcklpd_avx(auVar31,auVar66);
      auVar19 = vshufps_avx(auVar19,auVar18,0x24);
      auVar18 = vperm2f128_avx(auVar33,auVar33,1);
      auVar18 = vblendps_avx(auVar33,auVar18,0x44);
      auVar18 = vpermilps_avx(auVar18,
                              ___ymm_0000000000000006000000000000000700000001000000000000000200000000
                             );
      auVar18 = vblendps_avx(auVar18,auVar19,0xa4);
      *(undefined1 (*) [16])(param_3 + -0x30 + in_R11) = auVar18._16_16_;
      *(undefined1 (*) [16])(param_3 + -0x40 + in_R11) = auVar18._0_16_;
      auVar18 = vpermilps_avx(auVar20,
                              ___ymm_0000000000000007000000000000000000000000000000010000000000000000
                             );
      auVar20 = vshufps_avx(auVar31,auVar31,0xa9);
      auVar20 = vblendps_avx(auVar20,auVar18,0x44);
      auVar18 = vshufpd_avx(auVar33,auVar33,1);
      auVar20 = vblendps_avx(auVar20,auVar18,0x92);
      *(undefined1 (*) [16])(param_3 + -0x10 + in_R11) = auVar20._16_16_;
      *(undefined1 (*) [16])(param_3 + -0x20 + in_R11) = auVar20._0_16_;
      auVar14 = vshufps_avx(auVar68._16_16_,auVar29,0x9e);
      auVar29 = vshufps_avx(auVar29,auVar29,0xff);
      auVar34._16_16_ = auVar29;
      auVar34._0_16_ = auVar14;
      auVar18 = vperm2f128_avx(auVar66,ZEXT1632(auVar14),0x21);
      auVar20 = vblendps_avx(auVar34,auVar66,0xe0);
      auVar18 = vshufps_avx(auVar18,auVar20,0x21);
      auVar20 = vshufps_avx(auVar18,auVar20,0xc2);
      *(undefined1 (*) [16])(param_3 + 0x10 + in_R11) = auVar20._16_16_;
      *(undefined1 (*) [16])(param_3 + in_R11) = auVar20._0_16_;
      in_R11 = in_R11 + 0x60;
      uVar4 = uVar4 + 8;
    } while ((int)uVar4 < (int)(uVar8 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar4) {
      return;
    }
  }
  auVar17 = vpshufd_avx(ZEXT416(uVar4),0);
  auVar21._16_16_ = auVar17;
  auVar21._0_16_ = auVar17;
  auVar14 = vpshufd_avx(ZEXT416(param_4),0);
  uVar6 = (ulonglong)uVar4;
  pauVar1 = (undefined1 (*) [32])(param_1 + uVar6 * 0xc);
  auVar29 = SUB3216(auVar21 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar15 = SUB3216(auVar21 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar17 = vpcmpgtd_avx(auVar14,auVar15);
  auVar30 = vpcmpgtd_avx(auVar14,auVar29);
  auVar22._16_16_ = auVar17;
  auVar22._0_16_ = auVar30;
  uVar8 = vmovmskps_avx(auVar22);
  if (uVar8 == 0xff) {
    auVar18 = pauVar1[2];
    auVar23._16_16_ = *(undefined1 (*) [16])*pauVar1;
    auVar23._0_16_ = *(undefined1 (*) [16])(*pauVar1 + 0x10);
    auVar21 = vblendps_avx(*pauVar1,auVar23,0x24);
    auVar21 = vpermilps_avx(auVar21,
                            ___ymm_0000000000000007000000040000000500000000000000020000000300000000)
    ;
    uVar11 = *(undefined4 *)(pauVar1[1] + 4);
    auVar69._4_4_ = uVar11;
    auVar69._0_4_ = uVar11;
    auVar69._8_4_ = uVar11;
    auVar69._12_4_ = uVar11;
    uVar11 = *(undefined4 *)(pauVar1[1] + 8);
    auVar69._20_4_ = uVar11;
    auVar69._16_4_ = uVar11;
    auVar69._24_4_ = uVar11;
    auVar69._28_4_ = uVar11;
    auVar21 = vblendps_avx(auVar21,auVar69,0x88);
    auVar70._16_16_ = *(undefined1 (*) [16])pauVar1[2];
    auVar70._0_16_ = *(undefined1 (*) [16])(pauVar1[2] + 0x10);
    auVar20 = vblendps_avx(auVar70,auVar18,0x44);
    auVar20 = vpermilps_avx(auVar20,
                            ___ymm_0000000600000007000000040000000000000001000000020000000000000000)
    ;
    auVar17 = vshufps_avx(*(undefined1 (*) [16])(pauVar1[1] + 0x10),
                          *(undefined1 (*) [16])(pauVar1[1] + 0x10),0xec);
    uVar11 = *(undefined4 *)(pauVar1[1] + 0x14);
    auVar37._20_4_ = uVar11;
    auVar37._16_4_ = uVar11;
    auVar37._24_4_ = uVar11;
    auVar37._28_4_ = uVar11;
    auVar37._0_16_ = auVar17;
    auVar20 = vblendps_avx(auVar20,auVar37,0x13);
    auVar36._16_16_ = auVar20._0_16_;
    auVar36._0_16_ = auVar21._0_16_;
    auVar40 = vperm2f128_avx(auVar21,auVar20,0x31);
    auVar21 = vblendps_avx(pauVar1[1],*pauVar1,0x24);
    auVar21 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])(*pauVar1 + 0x10)),auVar21,0x21);
    auVar21 = vshufps_avx(auVar21,pauVar1[1],0xc2);
    auVar20 = vshufps_avx(auVar70,auVar18,0xc4);
    auVar46 = vblendps_avx(auVar21,auVar20,0xe0);
    auVar17 = *(undefined1 (*) [16])(param_2 + uVar6 * 0xc);
    auVar30 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar6 * 0xc);
    auVar14 = *(undefined1 (*) [16])(param_2 + 0x30 + uVar6 * 0xc);
    auVar71._16_16_ = auVar30;
    auVar71._0_16_ = auVar17;
    auVar29 = *(undefined1 (*) [16])(param_2 + 0x50 + uVar6 * 0xc);
    auVar15 = *(undefined1 (*) [16])(param_2 + 0x40 + uVar6 * 0xc);
    auVar24._16_16_ = auVar17;
    auVar24._0_16_ = auVar30;
    auVar21 = vblendps_avx(auVar71,auVar24,0x24);
    auVar21 = vpermilps_avx(auVar21,
                            ___ymm_0000000000000007000000040000000500000000000000020000000300000000)
    ;
    uVar11 = *(undefined4 *)(param_2 + 0x28 + uVar6 * 0xc);
    auVar59._20_4_ = uVar11;
    auVar59._16_4_ = uVar11;
    auVar59._24_4_ = uVar11;
    auVar59._28_4_ = uVar11;
    uVar11 = *(undefined4 *)(param_2 + 0x24 + uVar6 * 0xc);
    auVar59._4_4_ = uVar11;
    auVar59._0_4_ = uVar11;
    auVar59._8_4_ = uVar11;
    auVar59._12_4_ = uVar11;
    uVar11 = *(undefined4 *)(param_2 + 0x34 + uVar6 * 0xc);
    auVar62._20_4_ = uVar11;
    auVar62._16_4_ = uVar11;
    auVar62._24_4_ = uVar11;
    auVar62._28_4_ = uVar11;
    auVar64._16_16_ = auVar14;
    auVar64._0_16_ = *(undefined1 (*) [16])(param_2 + 0x20 + uVar6 * 0xc);
    auVar75._16_16_ = auVar29;
    auVar75._0_16_ = auVar15;
    auVar21 = vblendps_avx(auVar21,auVar59,0x88);
    auVar72._16_16_ = auVar15;
    auVar72._0_16_ = auVar29;
    auVar20 = vblendps_avx(auVar72,auVar75,0x44);
    auVar20 = vpermilps_avx(auVar20,
                            ___ymm_0000000600000007000000040000000000000001000000020000000000000000)
    ;
    auVar17 = vshufps_avx(auVar14,auVar14,0xec);
    auVar62._0_16_ = auVar17;
    auVar20 = vblendps_avx(auVar20,auVar62,0x13);
    auVar58._16_16_ = auVar20._0_16_;
    auVar58._0_16_ = auVar21._0_16_;
    auVar61 = vperm2f128_avx(auVar21,auVar20,0x31);
    auVar21 = vblendps_avx(auVar64,auVar71,0x24);
    auVar21 = vshufps_avx(ZEXT1632(auVar30),auVar21,0x21);
    auVar21 = vshufps_avx(auVar21,auVar64,0xc2);
    auVar20 = vshufps_avx(auVar72,auVar75,0xc4);
    auVar63 = vblendps_avx(auVar21,auVar20,0xe0);
  }
  else {
    auVar17 = vpcmpgtd_avx(auVar14,auVar15);
    auVar30 = vpcmpgtd_avx(auVar14,auVar29);
    uVar42 = auVar30._0_4_;
    auVar15._0_4_ = uVar42 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000
    ;
    uVar48 = auVar30._4_4_;
    auVar15._4_4_ = uVar48 & _UNK_150b50b04;
    uVar50 = auVar30._8_4_;
    auVar15._8_4_ = uVar50 & _UNK_150b50b08;
    uVar52 = auVar30._12_4_;
    auVar15._12_4_ = uVar52 & _UNK_150b50b0c;
    uVar54 = auVar17._0_4_;
    uVar55 = auVar17._4_4_;
    uVar56 = auVar17._8_4_;
    uVar57 = auVar17._12_4_;
    uVar4 = vextractps_avx(auVar15,1);
    uVar9 = vextractps_avx(auVar15,2);
    uVar11 = vextractps_avx(auVar15,3);
    lVar12 = CONCAT44((int)((ulonglong)in_R11 >> 0x20),uVar11);
    auVar17 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar1 + (uVar54 & _UNK_150b50b10))),
                            ZEXT416(*(uint *)(*pauVar1 + (uVar55 & _UNK_150b50b14))),0x10);
    auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)(*pauVar1 + (uVar56 & _UNK_150b50b18))),0x20);
    auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)(*pauVar1 + (uVar57 & _UNK_150b50b1c))),0x30);
    auVar30 = vinsertps_avx(ZEXT416(*(uint *)*pauVar1),ZEXT416(*(uint *)(*pauVar1 + uVar4)),0x10);
    auVar30 = vinsertps_avx(auVar30,ZEXT416(*(uint *)(*pauVar1 + uVar9)),0x20);
    auVar30 = vinsertps_avx(auVar30,ZEXT416(*(uint *)(*pauVar1 + lVar12)),0x30);
    auVar16._0_4_ = uVar42 & ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004
    ;
    auVar16._4_4_ = uVar48 & _UNK_150b50b24;
    auVar16._8_4_ = uVar50 & _UNK_150b50b28;
    auVar16._12_4_ = uVar52 & _UNK_150b50b2c;
    uVar5 = vextractps_avx(auVar16,1);
    uVar10 = vextractps_avx(auVar16,2);
    auVar14 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar1 + (uVar54 & _UNK_150b50b30))),
                            ZEXT416(*(uint *)(*pauVar1 + (uVar55 & _UNK_150b50b34))),0x10);
    auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(*pauVar1 + (uVar56 & _UNK_150b50b38))),0x20);
    auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(*pauVar1 + (uVar57 & _UNK_150b50b3c))),0x30);
    auVar29 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar1 + auVar16._0_4_)),
                            ZEXT416(*(uint *)(*pauVar1 + uVar5)),0x10);
    auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)(*pauVar1 + uVar10)),0x20);
    auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)(*pauVar1 + auVar16._12_4_)),0x30);
    auVar15 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar1 + (uVar54 & _UNK_150b50b50))),
                            ZEXT416(*(uint *)(*pauVar1 + (uVar55 & _UNK_150b50b54))),0x10);
    auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(*pauVar1 + (uVar56 & _UNK_150b50b58))),0x20);
    auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(*pauVar1 + (uVar57 & _UNK_150b50b5c))),0x30);
    auVar39 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar1 +
                                             (uVar42 & 
                                             ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008
                                             ))),
                            ZEXT416(*(uint *)(*pauVar1 + (uVar48 & _UNK_150b50b44))),0x10);
    auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(*pauVar1 + (uVar50 & _UNK_150b50b48))),0x20);
    auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(*pauVar1 + (uVar52 & _UNK_150b50b4c))),0x30);
    auVar36._16_16_ = auVar17;
    auVar36._0_16_ = auVar30;
    auVar40._16_16_ = auVar14;
    auVar40._0_16_ = auVar29;
    auVar46._16_16_ = auVar15;
    auVar46._0_16_ = auVar39;
    lVar2 = param_2 + uVar6 * 0xc;
    auVar17 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar54 & _UNK_150b50b10) + lVar2)),
                            ZEXT416(*(uint *)((ulonglong)(uVar55 & _UNK_150b50b14) + lVar2)),0x10);
    auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)((ulonglong)(uVar56 & _UNK_150b50b18) + lVar2))
                            ,0x20);
    auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)((ulonglong)(uVar57 & _UNK_150b50b1c) + lVar2))
                            ,0x30);
    auVar30 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + uVar6 * 0xc)),
                            ZEXT416(*(uint *)((ulonglong)uVar4 + lVar2)),0x10);
    auVar30 = vinsertps_avx(auVar30,ZEXT416(*(uint *)((ulonglong)uVar9 + lVar2)),0x20);
    auVar30 = vinsertps_avx(auVar30,ZEXT416(*(uint *)(lVar12 + lVar2)),0x30);
    auVar14 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar54 & _UNK_150b50b30) + lVar2)),
                            ZEXT416(*(uint *)((ulonglong)(uVar55 & _UNK_150b50b34) + lVar2)),0x10);
    auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)((ulonglong)(uVar56 & _UNK_150b50b38) + lVar2))
                            ,0x20);
    auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)((ulonglong)(uVar57 & _UNK_150b50b3c) + lVar2))
                            ,0x30);
    auVar29 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar16._0_4_ + lVar2)),
                            ZEXT416(*(uint *)((ulonglong)uVar5 + lVar2)),0x10);
    auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)((ulonglong)uVar10 + lVar2)),0x20);
    auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)((ulonglong)auVar16._12_4_ + lVar2)),0x30);
    auVar15 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar54 & _UNK_150b50b50) + lVar2)),
                            ZEXT416(*(uint *)((ulonglong)(uVar55 & _UNK_150b50b54) + lVar2)),0x10);
    auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)((ulonglong)(uVar56 & _UNK_150b50b58) + lVar2))
                            ,0x20);
    auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)((ulonglong)(uVar57 & _UNK_150b50b5c) + lVar2))
                            ,0x30);
    auVar39 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                              (uVar42 & 
                                              ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008
                                              ) + lVar2)),
                            ZEXT416(*(uint *)((ulonglong)(uVar48 & _UNK_150b50b44) + lVar2)),0x10);
    auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)((ulonglong)(uVar50 & _UNK_150b50b48) + lVar2))
                            ,0x20);
    auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)((ulonglong)(uVar52 & _UNK_150b50b4c) + lVar2))
                            ,0x30);
    auVar58._16_16_ = auVar17;
    auVar58._0_16_ = auVar30;
    auVar61._16_16_ = auVar14;
    auVar61._0_16_ = auVar29;
    auVar63._16_16_ = auVar15;
    auVar63._0_16_ = auVar39;
  }
  auVar17 = vshufps_avx(ZEXT416(param_5),ZEXT416(param_5),0);
  fVar13 = auVar17._0_4_;
  fVar26 = auVar17._4_4_;
  fVar27 = auVar17._8_4_;
  fVar28 = auVar17._12_4_;
  auVar17 = vshufps_avx(ZEXT416(param_6),ZEXT416(param_6),0);
  fVar43 = auVar17._0_4_;
  fVar49 = auVar17._4_4_;
  fVar51 = auVar17._8_4_;
  fVar53 = auVar17._12_4_;
  auVar39._0_4_ = fVar13 * auVar36._0_4_ + fVar43 * auVar58._0_4_;
  auVar39._4_4_ = fVar26 * auVar36._4_4_ + fVar49 * auVar58._4_4_;
  auVar39._8_4_ = fVar27 * auVar36._8_4_ + fVar51 * auVar58._8_4_;
  auVar39._12_4_ = fVar28 * auVar36._12_4_ + fVar53 * auVar58._12_4_;
  auVar41._16_4_ = fVar13 * auVar36._16_4_ + fVar43 * auVar58._16_4_;
  auVar41._0_16_ = auVar39;
  auVar41._20_4_ = fVar26 * auVar36._20_4_ + fVar49 * auVar58._20_4_;
  auVar41._24_4_ = fVar27 * auVar36._24_4_ + fVar51 * auVar58._24_4_;
  auVar41._28_4_ = fVar28 * auVar36._28_4_ + fVar53 * auVar58._28_4_;
  auVar30._0_4_ = fVar13 * auVar40._0_4_ + fVar43 * auVar61._0_4_;
  auVar30._4_4_ = fVar26 * auVar40._4_4_ + fVar49 * auVar61._4_4_;
  auVar30._8_4_ = fVar27 * auVar40._8_4_ + fVar51 * auVar61._8_4_;
  auVar30._12_4_ = fVar28 * auVar40._12_4_ + fVar53 * auVar61._12_4_;
  auVar35._16_4_ = fVar13 * auVar40._16_4_ + fVar43 * auVar61._16_4_;
  auVar35._0_16_ = auVar30;
  auVar35._20_4_ = fVar26 * auVar40._20_4_ + fVar49 * auVar61._20_4_;
  auVar35._24_4_ = fVar27 * auVar40._24_4_ + fVar51 * auVar61._24_4_;
  auVar35._28_4_ = fVar28 * auVar40._28_4_ + fVar53 * auVar61._28_4_;
  auVar17._0_4_ = fVar13 * auVar46._0_4_ + fVar43 * auVar63._0_4_;
  auVar17._4_4_ = fVar26 * auVar46._4_4_ + fVar49 * auVar63._4_4_;
  auVar17._8_4_ = fVar27 * auVar46._8_4_ + fVar51 * auVar63._8_4_;
  auVar17._12_4_ = fVar28 * auVar46._12_4_ + fVar53 * auVar63._12_4_;
  auVar25._16_4_ = fVar13 * auVar46._16_4_ + fVar43 * auVar63._16_4_;
  auVar25._0_16_ = auVar17;
  auVar25._20_4_ = fVar26 * auVar46._20_4_ + fVar49 * auVar63._20_4_;
  auVar25._24_4_ = fVar27 * auVar46._24_4_ + fVar51 * auVar63._24_4_;
  auVar25._28_4_ = fVar28 * auVar46._28_4_ + fVar53 * auVar63._28_4_;
  pauVar3 = (undefined1 (*) [16])(param_3 + uVar6 * 0xc);
  auVar29 = auVar41._16_16_;
  cVar7 = (char)uVar8;
  auVar14 = auVar35._16_16_;
  if (cVar7 == -1) {
    auVar47._16_16_ = auVar30;
    auVar47._0_16_ = auVar39;
    auVar18 = vshufpd_avx(auVar41,auVar47,2);
    auVar33 = vperm2f128_avx(auVar25,auVar25,1);
    auVar21 = vshufps_avx(auVar25,auVar33,0x30);
    auVar21 = vshufps_avx(auVar33,auVar21,0x29);
    auVar17 = vshufpd_avx(auVar30,auVar14,1);
    auVar21 = vblendps_avx(auVar21,ZEXT1632(auVar17),7);
    auVar19 = vperm2f128_avx(auVar21,auVar21,1);
    auVar20 = vunpcklpd_avx(auVar19,auVar25);
    auVar33 = vshufps_avx(auVar33,auVar20,0x24);
    auVar20 = vperm2f128_avx(auVar18,auVar18,1);
    auVar20 = vblendps_avx(auVar18,auVar20,0x44);
    auVar20 = vpermilps_avx(auVar20,
                            ___ymm_0000000000000006000000000000000700000001000000000000000200000000)
    ;
    auVar20 = vblendps_avx(auVar20,auVar33,0xa4);
    pauVar3[1] = auVar20._16_16_;
    auVar33 = vpermilps_avx(auVar21,
                            ___ymm_0000000000000007000000000000000000000000000000010000000000000000)
    ;
    *pauVar3 = auVar20._0_16_;
    auVar21 = vshufps_avx(auVar19,auVar19,0xa9);
    auVar21 = vblendps_avx(auVar21,auVar33,0x44);
    auVar20 = vshufpd_avx(auVar18,auVar18,1);
    auVar21 = vblendps_avx(auVar21,auVar20,0x92);
    pauVar3[3] = auVar21._16_16_;
    pauVar3[2] = auVar21._0_16_;
    auVar17 = vshufps_avx(auVar29,auVar14,0x9e);
    auVar30 = vshufps_avx(auVar14,auVar14,0xff);
    auVar38._16_16_ = auVar30;
    auVar38._0_16_ = auVar17;
    auVar20 = vperm2f128_avx(auVar25,ZEXT1632(auVar17),0x21);
    auVar21 = vblendps_avx(auVar38,auVar25,0xe0);
    auVar20 = vshufps_avx(auVar20,auVar21,0x21);
    auVar21 = vshufps_avx(auVar20,auVar21,0xc2);
    pauVar3[5] = auVar21._16_16_;
    pauVar3[4] = auVar21._0_16_;
  }
  else {
    auVar15 = auVar25._16_16_;
    if ((uVar8 & 1) != 0) {
      *(float *)*pauVar3 = auVar39._0_4_;
    }
    if ((uVar8 & 2) != 0) {
      uVar11 = vextractps_avx(auVar39,1);
      *(undefined4 *)(*pauVar3 + 0xc) = uVar11;
    }
    if ((uVar8 & 4) != 0) {
      uVar11 = vextractps_avx(auVar39,2);
      *(undefined4 *)(pauVar3[1] + 8) = uVar11;
    }
    if ((uVar8 & 8) != 0) {
      uVar11 = vextractps_avx(auVar39,3);
      *(undefined4 *)(pauVar3[2] + 4) = uVar11;
    }
    if ((uVar8 & 0x10) != 0) {
      *(float *)pauVar3[3] = auVar41._16_4_;
    }
    if ((uVar8 & 0x20) != 0) {
      uVar11 = vextractps_avx(auVar29,1);
      *(undefined4 *)(pauVar3[3] + 0xc) = uVar11;
    }
    if ((uVar8 & 0x40) != 0) {
      uVar11 = vextractps_avx(auVar29,2);
      *(undefined4 *)(pauVar3[4] + 8) = uVar11;
    }
    if (cVar7 < '\0') {
      uVar11 = vextractps_avx(auVar29,3);
      *(undefined4 *)(pauVar3[5] + 4) = uVar11;
    }
    if ((uVar8 & 1) != 0) {
      *(float *)(*pauVar3 + 4) = auVar30._0_4_;
    }
    if ((uVar8 & 2) != 0) {
      uVar11 = vextractps_avx(auVar30,1);
      *(undefined4 *)pauVar3[1] = uVar11;
    }
    if ((uVar8 & 4) != 0) {
      uVar11 = vextractps_avx(auVar30,2);
      *(undefined4 *)(pauVar3[1] + 0xc) = uVar11;
    }
    if ((uVar8 & 8) != 0) {
      uVar11 = vextractps_avx(auVar30,3);
      *(undefined4 *)(pauVar3[2] + 8) = uVar11;
    }
    if ((uVar8 & 0x10) != 0) {
      *(float *)(pauVar3[3] + 4) = auVar35._16_4_;
    }
    if ((uVar8 & 0x20) != 0) {
      uVar11 = vextractps_avx(auVar14,1);
      *(undefined4 *)pauVar3[4] = uVar11;
    }
    if ((uVar8 & 0x40) != 0) {
      uVar11 = vextractps_avx(auVar14,2);
      *(undefined4 *)(pauVar3[4] + 0xc) = uVar11;
    }
    if (cVar7 < '\0') {
      uVar11 = vextractps_avx(auVar14,3);
      *(undefined4 *)(pauVar3[5] + 8) = uVar11;
    }
    if ((uVar8 & 1) != 0) {
      *(float *)(*pauVar3 + 8) = auVar17._0_4_;
    }
    if ((uVar8 & 2) != 0) {
      uVar11 = vextractps_avx(auVar17,1);
      *(undefined4 *)(pauVar3[1] + 4) = uVar11;
    }
    if ((uVar8 & 4) != 0) {
      uVar11 = vextractps_avx(auVar17,2);
      *(undefined4 *)pauVar3[2] = uVar11;
    }
    if ((uVar8 & 8) != 0) {
      uVar11 = vextractps_avx(auVar17,3);
      *(undefined4 *)(pauVar3[2] + 0xc) = uVar11;
    }
    if ((uVar8 & 0x10) != 0) {
      *(float *)(pauVar3[3] + 8) = auVar25._16_4_;
    }
    if ((uVar8 & 0x20) != 0) {
      uVar11 = vextractps_avx(auVar15,1);
      *(undefined4 *)(pauVar3[4] + 4) = uVar11;
    }
    if ((uVar8 & 0x40) != 0) {
      uVar11 = vextractps_avx(auVar15,2);
      *(undefined4 *)pauVar3[5] = uVar11;
    }
    if (cVar7 < '\0') {
      uVar11 = vextractps_avx(auVar15,3);
      *(undefined4 *)(pauVar3[5] + 0xc) = uVar11;
    }
  }
  return;
}

// InterpolateMotionVectors_avx @ 140cb2800

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolateMotionVectors_avx
               (longlong param_1,longlong param_2,longlong param_3,uint param_4,uint param_5,
               uint param_6,uint param_7)

{
  undefined1 (*pauVar1) [32];
  longlong lVar2;
  undefined1 (*pauVar3) [16];
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  longlong in_R11;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar28;
  undefined1 auVar17 [16];
  float fVar26;
  float fVar27;
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar29 [16];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar30 [16];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  float fVar42;
  float fVar48;
  undefined1 auVar43 [16];
  float fVar46;
  float fVar47;
  undefined1 auVar44 [32];
  float fVar49;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  uint uVar55;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  undefined1 auVar56 [32];
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
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  longlong lVar12;
  undefined1 auVar20 [32];
  undefined1 auVar25 [32];
  undefined1 auVar35 [32];
  undefined1 auVar45 [32];
  
  uVar6 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar6 = param_4;
  }
  if ((int)(uVar6 & 0xfffffff8) < 1) {
    uVar10 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    auVar17 = vshufps_avx(ZEXT416(param_5),ZEXT416(param_5),0);
    auVar30 = vshufps_avx(ZEXT416(param_6),ZEXT416(param_6),0);
    auVar15 = vshufps_avx(ZEXT416(param_7),ZEXT416(param_7),0);
    in_R11 = 0x40;
    uVar10 = 0;
    do {
      auVar14 = *(undefined1 (*) [16])(param_1 + -0x40 + in_R11);
      auVar29 = *(undefined1 (*) [16])(param_1 + -0x30 + in_R11);
      auVar43 = *(undefined1 (*) [16])(param_1 + -0x10 + in_R11);
      auVar81._16_16_ = auVar29;
      auVar81._0_16_ = auVar14;
      auVar82._16_16_ = auVar43;
      auVar82._0_16_ = *(undefined1 (*) [16])(param_1 + -0x20 + in_R11);
      auVar16 = *(undefined1 (*) [16])(param_1 + 0x10 + in_R11);
      auVar31._16_16_ = auVar16;
      auVar31._0_16_ = *(undefined1 (*) [16])(param_1 + in_R11);
      auVar75._16_16_ = auVar14;
      auVar75._0_16_ = auVar29;
      auVar20 = vblendps_avx(auVar81,auVar75,0x24);
      auVar20 = vpermilps_avx(auVar20,
                              ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                             );
      uVar11 = *(undefined4 *)(param_1 + -0x18 + in_R11);
      auVar36._20_4_ = uVar11;
      auVar36._16_4_ = uVar11;
      auVar36._24_4_ = uVar11;
      auVar36._28_4_ = uVar11;
      uVar11 = *(undefined4 *)(param_1 + -0x1c + in_R11);
      auVar36._4_4_ = uVar11;
      auVar36._0_4_ = uVar11;
      auVar36._8_4_ = uVar11;
      auVar36._12_4_ = uVar11;
      auVar20 = vblendps_avx(auVar20,auVar36,0x88);
      auVar18._16_16_ = *(undefined1 (*) [16])(param_1 + in_R11);
      auVar18._0_16_ = auVar16;
      auVar33 = vblendps_avx(auVar18,auVar31,0x44);
      auVar33 = vpermilps_avx(auVar33,
                              ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                             );
      uVar11 = *(undefined4 *)(param_1 + -0xc + in_R11);
      auVar76._20_4_ = uVar11;
      auVar76._16_4_ = uVar11;
      auVar76._24_4_ = uVar11;
      auVar76._28_4_ = uVar11;
      auVar14 = vshufps_avx(auVar43,auVar43,0xec);
      auVar76._0_16_ = auVar14;
      auVar33 = vblendps_avx(auVar33,auVar76,0x13);
      auVar36 = vperm2f128_avx(auVar20,auVar33,0x31);
      auVar34 = vblendps_avx(auVar82,auVar81,0x24);
      auVar34 = vshufps_avx(ZEXT1632(auVar29),auVar34,0x21);
      auVar34 = vshufps_avx(auVar34,auVar82,0xc2);
      auVar18 = vshufps_avx(auVar18,auVar31,0xc4);
      auVar34 = vblendps_avx(auVar34,auVar18,0xe0);
      auVar14 = *(undefined1 (*) [16])(param_2 + -0x40 + in_R11);
      auVar29 = *(undefined1 (*) [16])(param_2 + -0x30 + in_R11);
      auVar43 = *(undefined1 (*) [16])(param_2 + -0x10 + in_R11);
      auVar71._16_16_ = auVar29;
      auVar71._0_16_ = auVar14;
      auVar32._16_16_ = auVar43;
      auVar32._0_16_ = *(undefined1 (*) [16])(param_2 + -0x20 + in_R11);
      auVar16 = *(undefined1 (*) [16])(param_2 + 0x10 + in_R11);
      auVar73._16_16_ = auVar16;
      auVar73._0_16_ = *(undefined1 (*) [16])(param_2 + in_R11);
      auVar19._16_16_ = auVar14;
      auVar19._0_16_ = auVar29;
      auVar18 = vblendps_avx(auVar71,auVar19,0x24);
      auVar18 = vpermilps_avx(auVar18,
                              ___ymm_0000000000000007000000040000000500000000000000020000000300000000
                             );
      uVar11 = *(undefined4 *)(param_2 + -0x18 + in_R11);
      auVar64._20_4_ = uVar11;
      auVar64._16_4_ = uVar11;
      auVar64._24_4_ = uVar11;
      auVar64._28_4_ = uVar11;
      uVar11 = *(undefined4 *)(param_2 + -0x1c + in_R11);
      auVar64._4_4_ = uVar11;
      auVar64._0_4_ = uVar11;
      auVar64._8_4_ = uVar11;
      auVar64._12_4_ = uVar11;
      auVar18 = vblendps_avx(auVar18,auVar64,0x88);
      auVar65._16_16_ = *(undefined1 (*) [16])(param_2 + in_R11);
      auVar65._0_16_ = auVar16;
      auVar19 = vblendps_avx(auVar65,auVar73,0x44);
      auVar19 = vpermilps_avx(auVar19,
                              ___ymm_0000000600000007000000040000000000000001000000020000000000000000
                             );
      uVar11 = *(undefined4 *)(param_2 + -0xc + in_R11);
      auVar37._20_4_ = uVar11;
      auVar37._16_4_ = uVar11;
      auVar37._24_4_ = uVar11;
      auVar37._28_4_ = uVar11;
      auVar14 = vshufps_avx(auVar43,auVar43,0xec);
      auVar37._0_16_ = auVar14;
      auVar19 = vblendps_avx(auVar19,auVar37,0x13);
      auVar37 = vperm2f128_avx(auVar18,auVar19,0x31);
      auVar31 = vblendps_avx(auVar32,auVar71,0x24);
      auVar31 = vshufps_avx(ZEXT1632(auVar29),auVar31,0x21);
      auVar31 = vshufps_avx(auVar31,auVar32,0xc2);
      auVar32 = vshufps_avx(auVar65,auVar73,0xc4);
      auVar31 = vblendps_avx(auVar31,auVar32,0xe0);
      local_108 = auVar17._0_4_;
      fStack_104 = auVar17._4_4_;
      fStack_100 = auVar17._8_4_;
      fStack_fc = auVar17._12_4_;
      fVar13 = auVar30._0_4_;
      fVar26 = auVar30._4_4_;
      fVar27 = auVar30._8_4_;
      fVar28 = auVar30._12_4_;
      fVar42 = auVar15._0_4_;
      auVar29._0_4_ = fVar42 * (auVar20._0_4_ * local_108 + fVar13 * auVar18._0_4_);
      fVar46 = auVar15._4_4_;
      auVar29._4_4_ = fVar46 * (auVar20._4_4_ * fStack_104 + fVar26 * auVar18._4_4_);
      fVar47 = auVar15._8_4_;
      auVar29._8_4_ = fVar47 * (auVar20._8_4_ * fStack_100 + fVar27 * auVar18._8_4_);
      fVar48 = auVar15._12_4_;
      auVar29._12_4_ = fVar48 * (auVar20._12_4_ * fStack_fc + fVar28 * auVar18._12_4_);
      auVar38._16_4_ = fVar42 * (auVar33._0_4_ * local_108 + fVar13 * auVar19._0_4_);
      auVar38._0_16_ = auVar29;
      auVar38._20_4_ = fVar46 * (auVar33._4_4_ * fStack_104 + fVar26 * auVar19._4_4_);
      auVar38._24_4_ = fVar47 * (auVar33._8_4_ * fStack_100 + fVar27 * auVar19._8_4_);
      auVar38._28_4_ = fVar48 * (auVar33._12_4_ * fStack_fc + fVar28 * auVar19._12_4_);
      auVar14._0_4_ = fVar42 * (auVar36._0_4_ * local_108 + fVar13 * auVar37._0_4_);
      auVar14._4_4_ = fVar46 * (auVar36._4_4_ * fStack_104 + fVar26 * auVar37._4_4_);
      auVar14._8_4_ = fVar47 * (auVar36._8_4_ * fStack_100 + fVar27 * auVar37._8_4_);
      auVar14._12_4_ = fVar48 * (auVar36._12_4_ * fStack_fc + fVar28 * auVar37._12_4_);
      auVar20._16_4_ = fVar42 * (auVar36._16_4_ * local_108 + fVar13 * auVar37._16_4_);
      auVar20._0_16_ = auVar14;
      auVar20._20_4_ = fVar46 * (auVar36._20_4_ * fStack_104 + fVar26 * auVar37._20_4_);
      auVar20._24_4_ = fVar47 * (auVar36._24_4_ * fStack_100 + fVar27 * auVar37._24_4_);
      auVar20._28_4_ = fVar48 * (auVar36._28_4_ * fStack_fc + fVar28 * auVar37._28_4_);
      auVar77._0_4_ = fVar42 * (auVar34._0_4_ * local_108 + fVar13 * auVar31._0_4_);
      auVar77._4_4_ = fVar46 * (auVar34._4_4_ * fStack_104 + fVar26 * auVar31._4_4_);
      auVar77._8_4_ = fVar47 * (auVar34._8_4_ * fStack_100 + fVar27 * auVar31._8_4_);
      auVar77._12_4_ = fVar48 * (auVar34._12_4_ * fStack_fc + fVar28 * auVar31._12_4_);
      auVar77._16_4_ = fVar42 * (auVar34._16_4_ * local_108 + fVar13 * auVar31._16_4_);
      auVar77._20_4_ = fVar46 * (auVar34._20_4_ * fStack_104 + fVar26 * auVar31._20_4_);
      auVar77._24_4_ = fVar47 * (auVar34._24_4_ * fStack_100 + fVar27 * auVar31._24_4_);
      auVar77._28_4_ = fVar48 * (auVar34._28_4_ * fStack_fc + fVar28 * auVar31._28_4_);
      auVar33._16_16_ = auVar14;
      auVar33._0_16_ = auVar29;
      auVar34 = vshufpd_avx(auVar38,auVar33,2);
      auVar29 = auVar20._16_16_;
      auVar14 = vshufpd_avx(auVar14,auVar29,1);
      auVar18 = vperm2f128_avx(auVar77,auVar77,1);
      auVar20 = vshufps_avx(auVar77,auVar18,0x30);
      auVar20 = vshufps_avx(auVar18,auVar20,0x29);
      auVar20 = vblendps_avx(auVar20,ZEXT1632(auVar14),7);
      auVar19 = vperm2f128_avx(auVar20,auVar20,1);
      auVar33 = vunpcklpd_avx(auVar19,auVar77);
      auVar18 = vshufps_avx(auVar18,auVar33,0x24);
      auVar33 = vperm2f128_avx(auVar34,auVar34,1);
      auVar33 = vblendps_avx(auVar34,auVar33,0x44);
      auVar33 = vpermilps_avx(auVar33,
                              ___ymm_0000000000000006000000000000000700000001000000000000000200000000
                             );
      auVar33 = vblendps_avx(auVar33,auVar18,0xa4);
      *(undefined1 (*) [16])(param_3 + -0x30 + in_R11) = auVar33._16_16_;
      *(undefined1 (*) [16])(param_3 + -0x40 + in_R11) = auVar33._0_16_;
      auVar33 = vpermilps_avx(auVar20,
                              ___ymm_0000000000000007000000000000000000000000000000010000000000000000
                             );
      auVar20 = vshufps_avx(auVar19,auVar19,0xa9);
      auVar20 = vblendps_avx(auVar20,auVar33,0x44);
      auVar33 = vshufpd_avx(auVar34,auVar34,1);
      auVar20 = vblendps_avx(auVar20,auVar33,0x92);
      *(undefined1 (*) [16])(param_3 + -0x10 + in_R11) = auVar20._16_16_;
      *(undefined1 (*) [16])(param_3 + -0x20 + in_R11) = auVar20._0_16_;
      auVar14 = vshufps_avx(auVar38._16_16_,auVar29,0x9e);
      auVar29 = vshufps_avx(auVar29,auVar29,0xff);
      auVar34._16_16_ = auVar29;
      auVar34._0_16_ = auVar14;
      auVar33 = vperm2f128_avx(auVar77,ZEXT1632(auVar14),0x21);
      auVar20 = vblendps_avx(auVar34,auVar77,0xe0);
      auVar33 = vshufps_avx(auVar33,auVar20,0x21);
      auVar20 = vshufps_avx(auVar33,auVar20,0xc2);
      *(undefined1 (*) [16])(param_3 + 0x10 + in_R11) = auVar20._16_16_;
      *(undefined1 (*) [16])(param_3 + in_R11) = auVar20._0_16_;
      in_R11 = in_R11 + 0x60;
      uVar7 = (int)uVar10 + 8;
      uVar10 = (ulonglong)uVar7;
    } while ((int)uVar7 < (int)(uVar6 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar7) {
      return;
    }
  }
  auVar17 = vpshufd_avx(ZEXT416((uint)uVar10),0);
  auVar21._16_16_ = auVar17;
  auVar21._0_16_ = auVar17;
  auVar15 = vpshufd_avx(ZEXT416(param_4),0);
  pauVar1 = (undefined1 (*) [32])(param_1 + uVar10 * 0xc);
  auVar14 = SUB3216(auVar21 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar29 = SUB3216(auVar21 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar17 = vpcmpgtd_avx(auVar15,auVar29);
  auVar30 = vpcmpgtd_avx(auVar15,auVar14);
  auVar22._16_16_ = auVar17;
  auVar22._0_16_ = auVar30;
  uVar6 = vmovmskps_avx(auVar22);
  if (uVar6 == 0xff) {
    auVar34 = pauVar1[2];
    auVar23._16_16_ = *(undefined1 (*) [16])*pauVar1;
    auVar23._0_16_ = *(undefined1 (*) [16])(*pauVar1 + 0x10);
    auVar20 = vblendps_avx(*pauVar1,auVar23,0x24);
    auVar20 = vpermilps_avx(auVar20,
                            ___ymm_0000000000000007000000040000000500000000000000020000000300000000)
    ;
    uVar11 = *(undefined4 *)(pauVar1[1] + 4);
    auVar69._4_4_ = uVar11;
    auVar69._0_4_ = uVar11;
    auVar69._8_4_ = uVar11;
    auVar69._12_4_ = uVar11;
    uVar11 = *(undefined4 *)(pauVar1[1] + 8);
    auVar69._20_4_ = uVar11;
    auVar69._16_4_ = uVar11;
    auVar69._24_4_ = uVar11;
    auVar69._28_4_ = uVar11;
    auVar20 = vblendps_avx(auVar20,auVar69,0x88);
    auVar78._16_16_ = *(undefined1 (*) [16])pauVar1[2];
    auVar78._0_16_ = *(undefined1 (*) [16])(pauVar1[2] + 0x10);
    auVar33 = vblendps_avx(auVar78,auVar34,0x44);
    auVar33 = vpermilps_avx(auVar33,
                            ___ymm_0000000600000007000000040000000000000001000000020000000000000000)
    ;
    auVar17 = vshufps_avx(*(undefined1 (*) [16])(pauVar1[1] + 0x10),
                          *(undefined1 (*) [16])(pauVar1[1] + 0x10),0xec);
    uVar11 = *(undefined4 *)(pauVar1[1] + 0x14);
    auVar39._20_4_ = uVar11;
    auVar39._16_4_ = uVar11;
    auVar39._24_4_ = uVar11;
    auVar39._28_4_ = uVar11;
    auVar39._0_16_ = auVar17;
    auVar33 = vblendps_avx(auVar33,auVar39,0x13);
    auVar44._16_16_ = auVar33._0_16_;
    auVar44._0_16_ = auVar20._0_16_;
    auVar50 = vperm2f128_avx(auVar20,auVar33,0x31);
    auVar20 = vblendps_avx(pauVar1[1],*pauVar1,0x24);
    auVar20 = vshufps_avx(ZEXT1632(*(undefined1 (*) [16])(*pauVar1 + 0x10)),auVar20,0x21);
    auVar20 = vshufps_avx(auVar20,pauVar1[1],0xc2);
    auVar33 = vshufps_avx(auVar78,auVar34,0xc4);
    auVar56 = vblendps_avx(auVar20,auVar33,0xe0);
    auVar17 = *(undefined1 (*) [16])(param_2 + uVar10 * 0xc);
    auVar30 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar10 * 0xc);
    auVar15 = *(undefined1 (*) [16])(param_2 + 0x30 + uVar10 * 0xc);
    auVar74._16_16_ = auVar30;
    auVar74._0_16_ = auVar17;
    auVar14 = *(undefined1 (*) [16])(param_2 + 0x50 + uVar10 * 0xc);
    auVar29 = *(undefined1 (*) [16])(param_2 + 0x40 + uVar10 * 0xc);
    auVar24._16_16_ = auVar17;
    auVar24._0_16_ = auVar30;
    auVar20 = vblendps_avx(auVar74,auVar24,0x24);
    auVar20 = vpermilps_avx(auVar20,
                            ___ymm_0000000000000007000000040000000500000000000000020000000300000000)
    ;
    uVar11 = *(undefined4 *)(param_2 + 0x28 + uVar10 * 0xc);
    auVar67._20_4_ = uVar11;
    auVar67._16_4_ = uVar11;
    auVar67._24_4_ = uVar11;
    auVar67._28_4_ = uVar11;
    uVar11 = *(undefined4 *)(param_2 + 0x24 + uVar10 * 0xc);
    auVar67._4_4_ = uVar11;
    auVar67._0_4_ = uVar11;
    auVar67._8_4_ = uVar11;
    auVar67._12_4_ = uVar11;
    uVar11 = *(undefined4 *)(param_2 + 0x34 + uVar10 * 0xc);
    auVar70._20_4_ = uVar11;
    auVar70._16_4_ = uVar11;
    auVar70._24_4_ = uVar11;
    auVar70._28_4_ = uVar11;
    auVar40._16_16_ = auVar15;
    auVar40._0_16_ = *(undefined1 (*) [16])(param_2 + 0x20 + uVar10 * 0xc);
    auVar80._16_16_ = auVar14;
    auVar80._0_16_ = auVar29;
    auVar20 = vblendps_avx(auVar20,auVar67,0x88);
    auVar79._16_16_ = auVar29;
    auVar79._0_16_ = auVar14;
    auVar33 = vblendps_avx(auVar79,auVar80,0x44);
    auVar33 = vpermilps_avx(auVar33,
                            ___ymm_0000000600000007000000040000000000000001000000020000000000000000)
    ;
    auVar17 = vshufps_avx(auVar15,auVar15,0xec);
    auVar70._0_16_ = auVar17;
    auVar33 = vblendps_avx(auVar33,auVar70,0x13);
    auVar66._16_16_ = auVar33._0_16_;
    auVar66._0_16_ = auVar20._0_16_;
    auVar68 = vperm2f128_avx(auVar20,auVar33,0x31);
    auVar20 = vblendps_avx(auVar40,auVar74,0x24);
    auVar20 = vshufps_avx(ZEXT1632(auVar30),auVar20,0x21);
    auVar20 = vshufps_avx(auVar20,auVar40,0xc2);
    auVar33 = vshufps_avx(auVar79,auVar80,0xc4);
    auVar72 = vblendps_avx(auVar20,auVar33,0xe0);
  }
  else {
    auVar17 = vpcmpgtd_avx(auVar15,auVar29);
    auVar30 = vpcmpgtd_avx(auVar15,auVar14);
    uVar55 = auVar30._0_4_;
    auVar15._0_4_ = uVar55 & ___ymm_00000054000000480000003c0000003000000024000000180000000c00000000
    ;
    uVar57 = auVar30._4_4_;
    auVar15._4_4_ = uVar57 & _UNK_150b50b04;
    uVar58 = auVar30._8_4_;
    auVar15._8_4_ = uVar58 & _UNK_150b50b08;
    uVar59 = auVar30._12_4_;
    auVar15._12_4_ = uVar59 & _UNK_150b50b0c;
    uVar60 = auVar17._0_4_;
    uVar61 = auVar17._4_4_;
    uVar62 = auVar17._8_4_;
    uVar63 = auVar17._12_4_;
    uVar7 = vextractps_avx(auVar15,1);
    uVar8 = vextractps_avx(auVar15,2);
    uVar11 = vextractps_avx(auVar15,3);
    lVar12 = CONCAT44((int)((ulonglong)in_R11 >> 0x20),uVar11);
    auVar17 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar1 + (uVar60 & _UNK_150b50b10))),
                            ZEXT416(*(uint *)(*pauVar1 + (uVar61 & _UNK_150b50b14))),0x10);
    auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)(*pauVar1 + (uVar62 & _UNK_150b50b18))),0x20);
    auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)(*pauVar1 + (uVar63 & _UNK_150b50b1c))),0x30);
    auVar30 = vinsertps_avx(ZEXT416(*(uint *)*pauVar1),ZEXT416(*(uint *)(*pauVar1 + uVar7)),0x10);
    auVar30 = vinsertps_avx(auVar30,ZEXT416(*(uint *)(*pauVar1 + uVar8)),0x20);
    auVar30 = vinsertps_avx(auVar30,ZEXT416(*(uint *)(*pauVar1 + lVar12)),0x30);
    auVar16._0_4_ = uVar55 & ___ymm_000000580000004c0000004000000034000000280000001c0000001000000004
    ;
    auVar16._4_4_ = uVar57 & _UNK_150b50b24;
    auVar16._8_4_ = uVar58 & _UNK_150b50b28;
    auVar16._12_4_ = uVar59 & _UNK_150b50b2c;
    uVar4 = vextractps_avx(auVar16,1);
    uVar9 = vextractps_avx(auVar16,2);
    auVar15 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar1 + (uVar60 & _UNK_150b50b30))),
                            ZEXT416(*(uint *)(*pauVar1 + (uVar61 & _UNK_150b50b34))),0x10);
    auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(*pauVar1 + (uVar62 & _UNK_150b50b38))),0x20);
    auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)(*pauVar1 + (uVar63 & _UNK_150b50b3c))),0x30);
    auVar14 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar1 + auVar16._0_4_)),
                            ZEXT416(*(uint *)(*pauVar1 + uVar4)),0x10);
    auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(*pauVar1 + uVar9)),0x20);
    auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)(*pauVar1 + auVar16._12_4_)),0x30);
    auVar29 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar1 + (uVar60 & _UNK_150b50b50))),
                            ZEXT416(*(uint *)(*pauVar1 + (uVar61 & _UNK_150b50b54))),0x10);
    auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)(*pauVar1 + (uVar62 & _UNK_150b50b58))),0x20);
    auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)(*pauVar1 + (uVar63 & _UNK_150b50b5c))),0x30);
    auVar43 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar1 +
                                             (uVar55 & 
                                             ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008
                                             ))),
                            ZEXT416(*(uint *)(*pauVar1 + (uVar57 & _UNK_150b50b44))),0x10);
    auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)(*pauVar1 + (uVar58 & _UNK_150b50b48))),0x20);
    auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)(*pauVar1 + (uVar59 & _UNK_150b50b4c))),0x30);
    auVar44._16_16_ = auVar17;
    auVar44._0_16_ = auVar30;
    auVar50._16_16_ = auVar15;
    auVar50._0_16_ = auVar14;
    auVar56._16_16_ = auVar29;
    auVar56._0_16_ = auVar43;
    lVar2 = param_2 + uVar10 * 0xc;
    auVar17 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar60 & _UNK_150b50b10) + lVar2)),
                            ZEXT416(*(uint *)((ulonglong)(uVar61 & _UNK_150b50b14) + lVar2)),0x10);
    auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)((ulonglong)(uVar62 & _UNK_150b50b18) + lVar2))
                            ,0x20);
    auVar17 = vinsertps_avx(auVar17,ZEXT416(*(uint *)((ulonglong)(uVar63 & _UNK_150b50b1c) + lVar2))
                            ,0x30);
    auVar30 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + uVar10 * 0xc)),
                            ZEXT416(*(uint *)((ulonglong)uVar7 + lVar2)),0x10);
    auVar30 = vinsertps_avx(auVar30,ZEXT416(*(uint *)((ulonglong)uVar8 + lVar2)),0x20);
    auVar30 = vinsertps_avx(auVar30,ZEXT416(*(uint *)(lVar12 + lVar2)),0x30);
    auVar15 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar60 & _UNK_150b50b30) + lVar2)),
                            ZEXT416(*(uint *)((ulonglong)(uVar61 & _UNK_150b50b34) + lVar2)),0x10);
    auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)((ulonglong)(uVar62 & _UNK_150b50b38) + lVar2))
                            ,0x20);
    auVar15 = vinsertps_avx(auVar15,ZEXT416(*(uint *)((ulonglong)(uVar63 & _UNK_150b50b3c) + lVar2))
                            ,0x30);
    auVar14 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar16._0_4_ + lVar2)),
                            ZEXT416(*(uint *)((ulonglong)uVar4 + lVar2)),0x10);
    auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)((ulonglong)uVar9 + lVar2)),0x20);
    auVar14 = vinsertps_avx(auVar14,ZEXT416(*(uint *)((ulonglong)auVar16._12_4_ + lVar2)),0x30);
    auVar29 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)(uVar60 & _UNK_150b50b50) + lVar2)),
                            ZEXT416(*(uint *)((ulonglong)(uVar61 & _UNK_150b50b54) + lVar2)),0x10);
    auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)((ulonglong)(uVar62 & _UNK_150b50b58) + lVar2))
                            ,0x20);
    auVar29 = vinsertps_avx(auVar29,ZEXT416(*(uint *)((ulonglong)(uVar63 & _UNK_150b50b5c) + lVar2))
                            ,0x30);
    auVar43 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)
                                              (uVar55 & 
                                              ___ymm_0000005c0000005000000044000000380000002c000000200000001400000008
                                              ) + lVar2)),
                            ZEXT416(*(uint *)((ulonglong)(uVar57 & _UNK_150b50b44) + lVar2)),0x10);
    auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)((ulonglong)(uVar58 & _UNK_150b50b48) + lVar2))
                            ,0x20);
    auVar43 = vinsertps_avx(auVar43,ZEXT416(*(uint *)((ulonglong)(uVar59 & _UNK_150b50b4c) + lVar2))
                            ,0x30);
    auVar66._16_16_ = auVar17;
    auVar66._0_16_ = auVar30;
    auVar68._16_16_ = auVar15;
    auVar68._0_16_ = auVar14;
    auVar72._16_16_ = auVar29;
    auVar72._0_16_ = auVar43;
  }
  auVar17 = vshufps_avx(ZEXT416(param_5),ZEXT416(param_5),0);
  fVar13 = auVar17._0_4_;
  fVar26 = auVar17._4_4_;
  fVar27 = auVar17._8_4_;
  fVar28 = auVar17._12_4_;
  auVar17 = vshufps_avx(ZEXT416(param_6),ZEXT416(param_6),0);
  fVar42 = auVar17._0_4_;
  fVar46 = auVar17._4_4_;
  fVar47 = auVar17._8_4_;
  fVar48 = auVar17._12_4_;
  auVar17 = vshufps_avx(ZEXT416(param_7),ZEXT416(param_7),0);
  fVar49 = auVar17._0_4_;
  auVar43._0_4_ = fVar49 * (fVar13 * auVar44._0_4_ + fVar42 * auVar66._0_4_);
  fVar52 = auVar17._4_4_;
  auVar43._4_4_ = fVar52 * (fVar26 * auVar44._4_4_ + fVar46 * auVar66._4_4_);
  fVar53 = auVar17._8_4_;
  auVar43._8_4_ = fVar53 * (fVar27 * auVar44._8_4_ + fVar47 * auVar66._8_4_);
  fVar54 = auVar17._12_4_;
  auVar43._12_4_ = fVar54 * (fVar28 * auVar44._12_4_ + fVar48 * auVar66._12_4_);
  auVar45._16_4_ = fVar49 * (fVar13 * auVar44._16_4_ + fVar42 * auVar66._16_4_);
  auVar45._0_16_ = auVar43;
  auVar45._20_4_ = fVar52 * (fVar26 * auVar44._20_4_ + fVar46 * auVar66._20_4_);
  auVar45._24_4_ = fVar53 * (fVar27 * auVar44._24_4_ + fVar47 * auVar66._24_4_);
  auVar45._28_4_ = fVar54 * (fVar28 * auVar44._28_4_ + fVar48 * auVar66._28_4_);
  auVar30._0_4_ = fVar49 * (fVar13 * auVar50._0_4_ + fVar42 * auVar68._0_4_);
  auVar30._4_4_ = fVar52 * (fVar26 * auVar50._4_4_ + fVar46 * auVar68._4_4_);
  auVar30._8_4_ = fVar53 * (fVar27 * auVar50._8_4_ + fVar47 * auVar68._8_4_);
  auVar30._12_4_ = fVar54 * (fVar28 * auVar50._12_4_ + fVar48 * auVar68._12_4_);
  auVar35._16_4_ = fVar49 * (fVar13 * auVar50._16_4_ + fVar42 * auVar68._16_4_);
  auVar35._0_16_ = auVar30;
  auVar35._20_4_ = fVar52 * (fVar26 * auVar50._20_4_ + fVar46 * auVar68._20_4_);
  auVar35._24_4_ = fVar53 * (fVar27 * auVar50._24_4_ + fVar47 * auVar68._24_4_);
  auVar35._28_4_ = fVar54 * (fVar28 * auVar50._28_4_ + fVar48 * auVar68._28_4_);
  auVar17._0_4_ = fVar49 * (fVar13 * auVar56._0_4_ + auVar72._0_4_ * fVar42);
  auVar17._4_4_ = fVar52 * (fVar26 * auVar56._4_4_ + auVar72._4_4_ * fVar46);
  auVar17._8_4_ = fVar53 * (fVar27 * auVar56._8_4_ + auVar72._8_4_ * fVar47);
  auVar17._12_4_ = fVar54 * (fVar28 * auVar56._12_4_ + auVar72._12_4_ * fVar48);
  auVar25._16_4_ = fVar49 * (fVar13 * auVar56._16_4_ + auVar72._16_4_ * fVar42);
  auVar25._0_16_ = auVar17;
  auVar25._20_4_ = fVar52 * (fVar26 * auVar56._20_4_ + auVar72._20_4_ * fVar46);
  auVar25._24_4_ = fVar53 * (fVar27 * auVar56._24_4_ + auVar72._24_4_ * fVar47);
  auVar25._28_4_ = fVar54 * (fVar28 * auVar56._28_4_ + auVar72._28_4_ * fVar48);
  pauVar3 = (undefined1 (*) [16])(param_3 + uVar10 * 0xc);
  auVar14 = auVar45._16_16_;
  cVar5 = (char)uVar6;
  auVar15 = auVar35._16_16_;
  if (cVar5 == -1) {
    auVar51._16_16_ = auVar30;
    auVar51._0_16_ = auVar43;
    auVar34 = vshufpd_avx(auVar45,auVar51,2);
    auVar18 = vperm2f128_avx(auVar25,auVar25,1);
    auVar20 = vshufps_avx(auVar25,auVar18,0x30);
    auVar20 = vshufps_avx(auVar18,auVar20,0x29);
    auVar17 = vshufpd_avx(auVar30,auVar15,1);
    auVar20 = vblendps_avx(auVar20,ZEXT1632(auVar17),7);
    auVar19 = vperm2f128_avx(auVar20,auVar20,1);
    auVar33 = vunpcklpd_avx(auVar19,auVar25);
    auVar18 = vshufps_avx(auVar18,auVar33,0x24);
    auVar33 = vperm2f128_avx(auVar34,auVar34,1);
    auVar33 = vblendps_avx(auVar34,auVar33,0x44);
    auVar33 = vpermilps_avx(auVar33,
                            ___ymm_0000000000000006000000000000000700000001000000000000000200000000)
    ;
    auVar33 = vblendps_avx(auVar33,auVar18,0xa4);
    pauVar3[1] = auVar33._16_16_;
    auVar18 = vpermilps_avx(auVar20,
                            ___ymm_0000000000000007000000000000000000000000000000010000000000000000)
    ;
    *pauVar3 = auVar33._0_16_;
    auVar20 = vshufps_avx(auVar19,auVar19,0xa9);
    auVar20 = vblendps_avx(auVar20,auVar18,0x44);
    auVar33 = vshufpd_avx(auVar34,auVar34,1);
    auVar20 = vblendps_avx(auVar20,auVar33,0x92);
    pauVar3[3] = auVar20._16_16_;
    pauVar3[2] = auVar20._0_16_;
    auVar17 = vshufps_avx(auVar14,auVar15,0x9e);
    auVar30 = vshufps_avx(auVar15,auVar15,0xff);
    auVar41._16_16_ = auVar30;
    auVar41._0_16_ = auVar17;
    auVar33 = vperm2f128_avx(auVar25,ZEXT1632(auVar17),0x21);
    auVar20 = vblendps_avx(auVar41,auVar25,0xe0);
    auVar33 = vshufps_avx(auVar33,auVar20,0x21);
    auVar20 = vshufps_avx(auVar33,auVar20,0xc2);
    pauVar3[5] = auVar20._16_16_;
    pauVar3[4] = auVar20._0_16_;
  }
  else {
    auVar29 = auVar25._16_16_;
    if ((uVar6 & 1) != 0) {
      *(float *)*pauVar3 = auVar43._0_4_;
    }
    if ((uVar6 & 2) != 0) {
      uVar11 = vextractps_avx(auVar43,1);
      *(undefined4 *)(*pauVar3 + 0xc) = uVar11;
    }
    if ((uVar6 & 4) != 0) {
      uVar11 = vextractps_avx(auVar43,2);
      *(undefined4 *)(pauVar3[1] + 8) = uVar11;
    }
    if ((uVar6 & 8) != 0) {
      uVar11 = vextractps_avx(auVar43,3);
      *(undefined4 *)(pauVar3[2] + 4) = uVar11;
    }
    if ((uVar6 & 0x10) != 0) {
      *(float *)pauVar3[3] = auVar45._16_4_;
    }
    if ((uVar6 & 0x20) != 0) {
      uVar11 = vextractps_avx(auVar14,1);
      *(undefined4 *)(pauVar3[3] + 0xc) = uVar11;
    }
    if ((uVar6 & 0x40) != 0) {
      uVar11 = vextractps_avx(auVar14,2);
      *(undefined4 *)(pauVar3[4] + 8) = uVar11;
    }
    if (cVar5 < '\0') {
      uVar11 = vextractps_avx(auVar14,3);
      *(undefined4 *)(pauVar3[5] + 4) = uVar11;
    }
    if ((uVar6 & 1) != 0) {
      *(float *)(*pauVar3 + 4) = auVar30._0_4_;
    }
    if ((uVar6 & 2) != 0) {
      uVar11 = vextractps_avx(auVar30,1);
      *(undefined4 *)pauVar3[1] = uVar11;
    }
    if ((uVar6 & 4) != 0) {
      uVar11 = vextractps_avx(auVar30,2);
      *(undefined4 *)(pauVar3[1] + 0xc) = uVar11;
    }
    if ((uVar6 & 8) != 0) {
      uVar11 = vextractps_avx(auVar30,3);
      *(undefined4 *)(pauVar3[2] + 8) = uVar11;
    }
    if ((uVar6 & 0x10) != 0) {
      *(float *)(pauVar3[3] + 4) = auVar35._16_4_;
    }
    if ((uVar6 & 0x20) != 0) {
      uVar11 = vextractps_avx(auVar15,1);
      *(undefined4 *)pauVar3[4] = uVar11;
    }
    if ((uVar6 & 0x40) != 0) {
      uVar11 = vextractps_avx(auVar15,2);
      *(undefined4 *)(pauVar3[4] + 0xc) = uVar11;
    }
    if (cVar5 < '\0') {
      uVar11 = vextractps_avx(auVar15,3);
      *(undefined4 *)(pauVar3[5] + 8) = uVar11;
    }
    if ((uVar6 & 1) != 0) {
      *(float *)(*pauVar3 + 8) = auVar17._0_4_;
    }
    if ((uVar6 & 2) != 0) {
      uVar11 = vextractps_avx(auVar17,1);
      *(undefined4 *)(pauVar3[1] + 4) = uVar11;
    }
    if ((uVar6 & 4) != 0) {
      uVar11 = vextractps_avx(auVar17,2);
      *(undefined4 *)pauVar3[2] = uVar11;
    }
    if ((uVar6 & 8) != 0) {
      uVar11 = vextractps_avx(auVar17,3);
      *(undefined4 *)(pauVar3[2] + 0xc) = uVar11;
    }
    if ((uVar6 & 0x10) != 0) {
      *(float *)(pauVar3[3] + 8) = auVar25._16_4_;
    }
    if ((uVar6 & 0x20) != 0) {
      uVar11 = vextractps_avx(auVar29,1);
      *(undefined4 *)(pauVar3[4] + 4) = uVar11;
    }
    if ((uVar6 & 0x40) != 0) {
      uVar11 = vextractps_avx(auVar29,2);
      *(undefined4 *)pauVar3[5] = uVar11;
    }
    if (cVar5 < '\0') {
      uVar11 = vextractps_avx(auVar29,3);
      *(undefined4 *)(pauVar3[5] + 0xc) = uVar11;
    }
  }
  return;
}

// InterpolateUVs_avx @ 140cb3420

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolateUVs_avx(longlong param_1,longlong param_2,longlong param_3,uint param_4,uint param_5
                       ,uint param_6)

{
  undefined1 (*pauVar1) [16];
  longlong lVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  undefined4 uVar10;
  longlong lVar9;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined8 in_R11;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined8 unaff_R14;
  longlong lVar19;
  ulonglong uVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar22 [16];
  float fVar27;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar28 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [32];
  undefined1 auVar36 [16];
  undefined1 auVar35 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  longlong lVar8;
  undefined1 auVar23 [32];
  undefined1 auVar29 [32];
  undefined1 auVar42 [32];
  
  uVar4 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar4 = param_4;
  }
  if ((int)(uVar4 & 0xfffffff8) < 1) {
    uVar5 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    auVar33 = vshufps_avx(ZEXT416(param_5),ZEXT416(param_5),0);
    auVar22 = vshufps_avx(ZEXT416(param_6),ZEXT416(param_6),0);
    uVar5 = 0;
    do {
      auVar45._16_16_ = *(undefined1 (*) [16])(param_1 + 0x30 + uVar5 * 8);
      auVar45._0_16_ = *(undefined1 (*) [16])(param_1 + 0x10 + uVar5 * 8);
      auVar41._16_16_ = *(undefined1 (*) [16])(param_1 + 0x20 + uVar5 * 8);
      auVar41._0_16_ = *(undefined1 (*) [16])(param_1 + uVar5 * 8);
      auVar42 = vshufps_avx(auVar41,auVar45,0x88);
      auVar41 = vshufps_avx(auVar41,auVar45,0xdd);
      auVar52._16_16_ = *(undefined1 (*) [16])(param_2 + 0x30 + uVar5 * 8);
      auVar52._0_16_ = *(undefined1 (*) [16])(param_2 + 0x10 + uVar5 * 8);
      auVar46._16_16_ = *(undefined1 (*) [16])(param_2 + 0x20 + uVar5 * 8);
      auVar46._0_16_ = *(undefined1 (*) [16])(param_2 + uVar5 * 8);
      auVar45 = vshufps_avx(auVar46,auVar52,0x88);
      auVar46 = vshufps_avx(auVar46,auVar52,0xdd);
      fVar27 = auVar33._0_4_;
      fVar30 = auVar33._4_4_;
      fVar31 = auVar33._8_4_;
      fVar32 = auVar33._12_4_;
      fVar21 = auVar22._0_4_;
      fVar24 = auVar22._4_4_;
      fVar25 = auVar22._8_4_;
      fVar26 = auVar22._12_4_;
      auVar36._0_4_ = fVar27 * auVar42._0_4_ + auVar45._0_4_ * fVar21;
      auVar36._4_4_ = fVar30 * auVar42._4_4_ + auVar45._4_4_ * fVar24;
      auVar36._8_4_ = fVar31 * auVar42._8_4_ + auVar45._8_4_ * fVar25;
      auVar36._12_4_ = fVar32 * auVar42._12_4_ + auVar45._12_4_ * fVar26;
      auVar50._16_4_ = fVar27 * auVar42._16_4_ + auVar45._16_4_ * fVar21;
      auVar50._0_16_ = auVar36;
      auVar50._20_4_ = fVar30 * auVar42._20_4_ + auVar45._20_4_ * fVar24;
      auVar50._24_4_ = fVar31 * auVar42._24_4_ + auVar45._24_4_ * fVar25;
      auVar50._28_4_ = fVar32 * auVar42._28_4_ + auVar45._28_4_ * fVar26;
      auVar39._0_4_ = fVar27 * auVar41._0_4_ + fVar21 * auVar46._0_4_;
      auVar39._4_4_ = fVar30 * auVar41._4_4_ + fVar24 * auVar46._4_4_;
      auVar39._8_4_ = fVar31 * auVar41._8_4_ + fVar25 * auVar46._8_4_;
      auVar39._12_4_ = fVar32 * auVar41._12_4_ + fVar26 * auVar46._12_4_;
      auVar42._16_4_ = fVar27 * auVar41._16_4_ + fVar21 * auVar46._16_4_;
      auVar42._0_16_ = auVar39;
      auVar42._20_4_ = fVar30 * auVar41._20_4_ + fVar24 * auVar46._20_4_;
      auVar42._24_4_ = fVar31 * auVar41._24_4_ + fVar25 * auVar46._24_4_;
      auVar42._28_4_ = fVar32 * auVar41._28_4_ + fVar26 * auVar46._28_4_;
      auVar28 = vunpcklps_avx(auVar36,auVar39);
      auVar39 = vunpckhps_avx(auVar36,auVar39);
      *(undefined1 (*) [16])(param_3 + 0x10 + uVar5 * 8) = auVar39;
      *(undefined1 (*) [16])(param_3 + uVar5 * 8) = auVar28;
      auVar28 = vunpcklps_avx(auVar50._16_16_,auVar42._16_16_);
      auVar39 = vunpckhps_avx(auVar50._16_16_,auVar42._16_16_);
      *(undefined1 (*) [16])(param_3 + 0x30 + uVar5 * 8) = auVar39;
      *(undefined1 (*) [16])(param_3 + 0x20 + uVar5 * 8) = auVar28;
      uVar5 = uVar5 + 8;
    } while ((int)uVar5 < (int)(uVar4 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar5) {
      return;
    }
  }
  auVar33 = vpshufd_avx(ZEXT416((uint)uVar5),0);
  auVar34._16_16_ = auVar33;
  auVar34._0_16_ = auVar33;
  auVar39 = vpshufd_avx(ZEXT416(param_4),0);
  uVar5 = uVar5 & 0xffffffff;
  pauVar1 = (undefined1 (*) [16])(param_1 + uVar5 * 8);
  auVar28 = SUB3216(auVar34 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar36 = SUB3216(auVar34 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar33 = vpcmpgtd_avx(auVar39,auVar36);
  auVar22 = vpcmpgtd_avx(auVar39,auVar28);
  auVar47._16_16_ = auVar33;
  auVar47._0_16_ = auVar22;
  uVar4 = vmovmskps_avx(auVar47);
  if (uVar4 == 0xff) {
    auVar38._16_16_ = pauVar1[3];
    auVar38._0_16_ = pauVar1[1];
    auVar44._16_16_ = pauVar1[2];
    auVar44._0_16_ = *pauVar1;
    auVar35 = vshufps_avx(auVar44,auVar38,0x88);
    auVar37 = vshufps_avx(auVar44,auVar38,0xdd);
    auVar49._16_16_ = *(undefined1 (*) [16])(param_2 + 0x30 + uVar5 * 8);
    auVar49._0_16_ = *(undefined1 (*) [16])(param_2 + 0x10 + uVar5 * 8);
    auVar51._16_16_ = *(undefined1 (*) [16])(param_2 + 0x20 + uVar5 * 8);
    auVar51._0_16_ = *(undefined1 (*) [16])(param_2 + uVar5 * 8);
    auVar43 = vshufps_avx(auVar51,auVar49,0x88);
    auVar48 = vshufps_avx(auVar51,auVar49,0xdd);
  }
  else {
    auVar36 = vpcmpgtd_avx(auVar39,auVar36);
    auVar39 = vpcmpgtd_avx(auVar39,auVar28);
    auVar33._0_4_ =
         auVar39._0_4_ & ___ymm_0000003800000030000000280000002000000018000000100000000800000000;
    auVar33._4_4_ = auVar39._4_4_ & _UNK_150b519c4;
    auVar33._8_4_ = auVar39._8_4_ & _UNK_150b519c8;
    auVar33._12_4_ = auVar39._12_4_ & _UNK_150b519cc;
    uVar10 = (undefined4)((ulonglong)param_1 >> 0x20);
    uVar7 = vextractps_avx(auVar33,1);
    lVar8 = CONCAT44(uVar10,uVar7);
    uVar14 = vextractps_avx(auVar33,2);
    uVar7 = vextractps_avx(auVar33,3);
    lVar16 = CONCAT44((int)((ulonglong)in_R11 >> 0x20),uVar7);
    uVar12 = (ulonglong)(auVar36._4_4_ & _UNK_150b519d4);
    uVar20 = (ulonglong)(auVar36._8_4_ & _UNK_150b519d8);
    uVar18 = (ulonglong)(auVar36._0_4_ & _UNK_150b519d0);
    uVar17 = (ulonglong)(auVar36._12_4_ & _UNK_150b519dc);
    auVar33 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar1 + uVar18)),
                            ZEXT416(*(uint *)(*pauVar1 + uVar12)),0x10);
    auVar33 = vinsertps_avx(auVar33,ZEXT416(*(uint *)(*pauVar1 + uVar20)),0x20);
    auVar33 = vinsertps_avx(auVar33,ZEXT416(*(uint *)(*pauVar1 + uVar17)),0x30);
    auVar22 = vinsertps_avx(ZEXT416(*(uint *)*pauVar1),ZEXT416(*(uint *)(*pauVar1 + lVar8)),0x10);
    auVar22 = vinsertps_avx(auVar22,ZEXT416(*(uint *)(*pauVar1 + uVar14)),0x20);
    auVar22 = vinsertps_avx(auVar22,ZEXT416(*(uint *)(*pauVar1 + lVar16)),0x30);
    auVar40._0_4_ =
         auVar39._0_4_ & ___ymm_0000003c000000340000002c000000240000001c000000140000000c00000004;
    auVar40._4_4_ = auVar39._4_4_ & _UNK_150b519e4;
    auVar40._8_4_ = auVar39._8_4_ & _UNK_150b519e8;
    auVar40._12_4_ = auVar39._12_4_ & _UNK_150b519ec;
    uVar7 = vextractps_avx(auVar40,1);
    lVar9 = CONCAT44(uVar10,uVar7);
    uVar7 = vextractps_avx(auVar40,2);
    lVar19 = CONCAT44((int)((ulonglong)unaff_R14 >> 0x20),uVar7);
    uVar13 = (ulonglong)(auVar36._4_4_ & _UNK_150b519f4);
    uVar15 = (ulonglong)(auVar36._8_4_ & _UNK_150b519f8);
    uVar11 = (ulonglong)(auVar36._12_4_ & _UNK_150b519fc);
    uVar6 = (ulonglong)(auVar36._0_4_ & _UNK_150b519f0);
    auVar39 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar1 + uVar6)),
                            ZEXT416(*(uint *)(*pauVar1 + uVar13)),0x10);
    auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(*pauVar1 + uVar15)),0x20);
    auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(*pauVar1 + uVar11)),0x30);
    auVar28 = vinsertps_avx(ZEXT416(*(uint *)(*pauVar1 + auVar40._0_4_)),
                            ZEXT416(*(uint *)(*pauVar1 + lVar9)),0x10);
    auVar28 = vinsertps_avx(auVar28,ZEXT416(*(uint *)(*pauVar1 + lVar19)),0x20);
    auVar28 = vinsertps_avx(auVar28,ZEXT416(*(uint *)(*pauVar1 + auVar40._12_4_)),0x30);
    auVar35._16_16_ = auVar33;
    auVar35._0_16_ = auVar22;
    auVar37._16_16_ = auVar39;
    auVar37._0_16_ = auVar28;
    lVar2 = param_2 + uVar5 * 8;
    auVar33 = vinsertps_avx(ZEXT416(*(uint *)(uVar18 + lVar2)),ZEXT416(*(uint *)(uVar12 + lVar2)),
                            0x10);
    auVar33 = vinsertps_avx(auVar33,ZEXT416(*(uint *)(uVar20 + lVar2)),0x20);
    auVar33 = vinsertps_avx(auVar33,ZEXT416(*(uint *)(uVar17 + lVar2)),0x30);
    auVar22 = vinsertps_avx(ZEXT416(*(uint *)(param_2 + uVar5 * 8)),
                            ZEXT416(*(uint *)(lVar8 + lVar2)),0x10);
    auVar22 = vinsertps_avx(auVar22,ZEXT416(*(uint *)((ulonglong)uVar14 + lVar2)),0x20);
    auVar22 = vinsertps_avx(auVar22,ZEXT416(*(uint *)(lVar16 + lVar2)),0x30);
    auVar39 = vinsertps_avx(ZEXT416(*(uint *)(uVar6 + lVar2)),ZEXT416(*(uint *)(uVar13 + lVar2)),
                            0x10);
    auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(uVar15 + lVar2)),0x20);
    auVar39 = vinsertps_avx(auVar39,ZEXT416(*(uint *)(uVar11 + lVar2)),0x30);
    auVar28 = vinsertps_avx(ZEXT416(*(uint *)((ulonglong)auVar40._0_4_ + lVar2)),
                            ZEXT416(*(uint *)(lVar9 + lVar2)),0x10);
    auVar28 = vinsertps_avx(auVar28,ZEXT416(*(uint *)(lVar19 + lVar2)),0x20);
    auVar28 = vinsertps_avx(auVar28,ZEXT416(*(uint *)((ulonglong)auVar40._12_4_ + lVar2)),0x30);
    auVar43._16_16_ = auVar33;
    auVar43._0_16_ = auVar22;
    auVar48._16_16_ = auVar39;
    auVar48._0_16_ = auVar28;
  }
  auVar33 = vshufps_avx(ZEXT416(param_5),ZEXT416(param_5),0);
  fVar27 = auVar33._0_4_;
  fVar30 = auVar33._4_4_;
  fVar31 = auVar33._8_4_;
  fVar32 = auVar33._12_4_;
  auVar33 = vshufps_avx(ZEXT416(param_6),ZEXT416(param_6),0);
  fVar21 = auVar33._0_4_;
  fVar24 = auVar33._4_4_;
  fVar25 = auVar33._8_4_;
  fVar26 = auVar33._12_4_;
  auVar28._0_4_ = fVar27 * auVar35._0_4_ + fVar21 * auVar43._0_4_;
  auVar28._4_4_ = fVar30 * auVar35._4_4_ + fVar24 * auVar43._4_4_;
  auVar28._8_4_ = fVar31 * auVar35._8_4_ + fVar25 * auVar43._8_4_;
  auVar28._12_4_ = fVar32 * auVar35._12_4_ + fVar26 * auVar43._12_4_;
  auVar29._16_4_ = fVar27 * auVar35._16_4_ + fVar21 * auVar43._16_4_;
  auVar29._0_16_ = auVar28;
  auVar29._20_4_ = fVar30 * auVar35._20_4_ + fVar24 * auVar43._20_4_;
  auVar29._24_4_ = fVar31 * auVar35._24_4_ + fVar25 * auVar43._24_4_;
  auVar29._28_4_ = fVar32 * auVar35._28_4_ + fVar26 * auVar43._28_4_;
  auVar22._0_4_ = fVar27 * auVar37._0_4_ + fVar21 * auVar48._0_4_;
  auVar22._4_4_ = fVar30 * auVar37._4_4_ + fVar24 * auVar48._4_4_;
  auVar22._8_4_ = fVar31 * auVar37._8_4_ + fVar25 * auVar48._8_4_;
  auVar22._12_4_ = fVar32 * auVar37._12_4_ + fVar26 * auVar48._12_4_;
  auVar23._16_4_ = fVar27 * auVar37._16_4_ + fVar21 * auVar48._16_4_;
  auVar23._0_16_ = auVar22;
  auVar23._20_4_ = fVar30 * auVar37._20_4_ + fVar24 * auVar48._20_4_;
  auVar23._24_4_ = fVar31 * auVar37._24_4_ + fVar25 * auVar48._24_4_;
  auVar23._28_4_ = fVar32 * auVar37._28_4_ + fVar26 * auVar48._28_4_;
  cVar3 = (char)uVar4;
  auVar39 = auVar29._16_16_;
  auVar33 = auVar23._16_16_;
  if (cVar3 == -1) {
    auVar36 = vunpcklps_avx(auVar28,auVar22);
    auVar22 = vunpckhps_avx(auVar28,auVar22);
    *(undefined1 (*) [16])(param_3 + 0x10 + uVar5 * 8) = auVar22;
    *(undefined1 (*) [16])(param_3 + uVar5 * 8) = auVar36;
    auVar22 = vunpcklps_avx(auVar39,auVar33);
    auVar33 = vunpckhps_avx(auVar39,auVar33);
    *(undefined1 (*) [16])(param_3 + 0x30 + uVar5 * 8) = auVar33;
    *(undefined1 (*) [16])(param_3 + 0x20 + uVar5 * 8) = auVar22;
  }
  else {
    if ((uVar4 & 1) != 0) {
      *(float *)(param_3 + uVar5 * 8) = auVar28._0_4_;
    }
    if ((uVar4 & 2) != 0) {
      uVar7 = vextractps_avx(auVar28,1);
      *(undefined4 *)(param_3 + 8 + uVar5 * 8) = uVar7;
    }
    if ((uVar4 & 4) != 0) {
      uVar7 = vextractps_avx(auVar28,2);
      *(undefined4 *)(param_3 + 0x10 + uVar5 * 8) = uVar7;
    }
    if ((uVar4 & 8) != 0) {
      uVar7 = vextractps_avx(auVar28,3);
      *(undefined4 *)(param_3 + 0x18 + uVar5 * 8) = uVar7;
    }
    if ((uVar4 & 0x10) != 0) {
      *(float *)(param_3 + 0x20 + uVar5 * 8) = auVar29._16_4_;
    }
    if ((uVar4 & 0x20) != 0) {
      uVar7 = vextractps_avx(auVar39,1);
      *(undefined4 *)(param_3 + 0x28 + uVar5 * 8) = uVar7;
    }
    if ((uVar4 & 0x40) != 0) {
      uVar7 = vextractps_avx(auVar39,2);
      *(undefined4 *)(param_3 + 0x30 + uVar5 * 8) = uVar7;
    }
    if (cVar3 < '\0') {
      uVar7 = vextractps_avx(auVar39,3);
      *(undefined4 *)(param_3 + 0x38 + uVar5 * 8) = uVar7;
    }
    if ((uVar4 & 1) != 0) {
      *(float *)(param_3 + 4 + uVar5 * 8) = auVar22._0_4_;
    }
    if ((uVar4 & 2) != 0) {
      uVar7 = vextractps_avx(auVar22,1);
      *(undefined4 *)(param_3 + 0xc + uVar5 * 8) = uVar7;
    }
    if ((uVar4 & 4) != 0) {
      uVar7 = vextractps_avx(auVar22,2);
      *(undefined4 *)(param_3 + 0x14 + uVar5 * 8) = uVar7;
    }
    if ((uVar4 & 8) != 0) {
      uVar7 = vextractps_avx(auVar22,3);
      *(undefined4 *)(param_3 + 0x1c + uVar5 * 8) = uVar7;
    }
    if ((uVar4 & 0x10) != 0) {
      *(float *)(param_3 + 0x24 + uVar5 * 8) = auVar23._16_4_;
    }
    if ((uVar4 & 0x20) != 0) {
      uVar7 = vextractps_avx(auVar33,1);
      *(undefined4 *)(param_3 + 0x2c + uVar5 * 8) = uVar7;
    }
    if ((uVar4 & 0x40) != 0) {
      uVar7 = vextractps_avx(auVar33,2);
      *(undefined4 *)(param_3 + 0x34 + uVar5 * 8) = uVar7;
    }
    if (cVar3 < '\0') {
      uVar7 = vextractps_avx(auVar33,3);
      *(undefined4 *)(param_3 + 0x3c + uVar5 * 8) = uVar7;
    }
  }
  return;
}

// InterpolateColors_avx @ 140cb39f0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolateColors_avx
               (longlong param_1,longlong param_2,longlong param_3,uint param_4,uint param_5,
               uint param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  ulonglong uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [16];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [16];
  undefined1 auVar18 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar9 [32];
  undefined1 auVar19 [32];
  
  fVar3 = __real_3f000000;
  uVar6 = param_4 + 7;
  if (-1 < (int)param_4) {
    uVar6 = param_4;
  }
  if ((int)(uVar6 & 0xfffffff8) < 1) {
    uVar4 = 0;
    if ((int)param_4 < 1) {
      return;
    }
  }
  else {
    auVar10 = vpshufd_avx(ZEXT416(param_5),0);
    auVar2 = vpshufd_avx(ZEXT416(param_6),0);
    uVar4 = 0;
    do {
      auVar17 = vpmovzxbd_avx(ZEXT416(*(uint *)(param_1 + 4 + uVar4)));
      auVar14 = vpmovzxbd_avx(ZEXT416(*(uint *)(param_1 + uVar4)));
      auVar8 = vpmovzxbd_avx(ZEXT416(*(uint *)(param_2 + 4 + uVar4)));
      auVar1 = vpmovzxbd_avx(ZEXT416(*(uint *)(param_2 + uVar4)));
      auVar18._16_16_ = auVar17;
      auVar18._0_16_ = auVar14;
      auVar18 = vcvtdq2ps_avx(auVar18);
      auVar21._16_16_ = auVar8;
      auVar21._0_16_ = auVar1;
      auVar21 = vcvtdq2ps_avx(auVar21);
      auVar17._0_4_ = (int)(auVar10._0_4_ * auVar18._0_4_ + auVar2._0_4_ * auVar21._0_4_ + fVar3);
      auVar17._4_4_ = (int)(auVar10._4_4_ * auVar18._4_4_ + auVar2._4_4_ * auVar21._4_4_ + fVar3);
      auVar17._8_4_ = (int)(auVar10._8_4_ * auVar18._8_4_ + auVar2._8_4_ * auVar21._8_4_ + fVar3);
      auVar17._12_4_ =
           (int)(auVar10._12_4_ * auVar18._12_4_ + auVar2._12_4_ * auVar21._12_4_ + fVar3);
      auVar19._16_4_ = (int)(auVar10._0_4_ * auVar18._16_4_ + auVar2._0_4_ * auVar21._16_4_ + fVar3)
      ;
      auVar19._0_16_ = auVar17;
      auVar19._20_4_ = (int)(auVar10._4_4_ * auVar18._20_4_ + auVar2._4_4_ * auVar21._20_4_ + fVar3)
      ;
      auVar19._24_4_ = (int)(auVar10._8_4_ * auVar18._24_4_ + auVar2._8_4_ * auVar21._24_4_ + fVar3)
      ;
      auVar19._28_4_ =
           (int)(auVar10._12_4_ * auVar18._28_4_ + auVar2._12_4_ * auVar21._28_4_ + fVar3);
      auVar17 = vpackssdw_avx(auVar17,auVar19._16_16_);
      auVar17 = vpackuswb_avx(auVar17,auVar17);
      *(longlong *)(param_3 + uVar4) = auVar17._0_8_;
      uVar4 = uVar4 + 8;
    } while (uVar4 < (uVar6 & 0xfffffff8));
    if ((int)param_4 <= (int)uVar4) {
      return;
    }
  }
  auVar10 = vpshufd_avx(ZEXT416((uint)uVar4),0);
  auVar11._16_16_ = auVar10;
  auVar11._0_16_ = auVar10;
  auVar17 = vpshufd_avx(ZEXT416(param_4),0);
  uVar4 = uVar4 & 0xffffffff;
  auVar14 = SUB3216(auVar11 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar8 = SUB3216(auVar11 | ___ymm_0000000700000006000000050000000400000003000000020000000100000000
                   ,0x10);
  auVar10 = vpcmpgtd_avx(auVar17,auVar8);
  auVar2 = vpcmpgtd_avx(auVar17,auVar14);
  auVar20._16_16_ = auVar10;
  auVar20._0_16_ = auVar2;
  uVar6 = vmovmskps_avx(auVar20);
  if ((~(byte)uVar6 & 0x81) == 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = *(ulonglong *)(param_1 + uVar4);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = *(ulonglong *)(param_2 + uVar4);
  }
  else {
    pbVar5 = (byte *)(param_1 + uVar4);
    auVar2 = vpcmpgtd_avx(auVar17,auVar8);
    auVar10 = vpcmpgtd_avx(auVar17,auVar14);
    auVar12._16_16_ = auVar2;
    auVar12._0_16_ = auVar10;
    uVar7 = vmovmskps_avx(auVar12);
    if ((uVar7 & 1) != 0) {
      auVar10 = ZEXT116(*pbVar5);
    }
    if ((uVar7 & 2) != 0) {
      auVar8 = vpinsrb_avx(auVar10,(uint)pbVar5[1],1);
      auVar10 = vpblendw_avx(auVar8,auVar10,0xe);
    }
    if ((uVar7 & 4) != 0) {
      auVar8 = vpmovzxwd_avx(auVar10);
      auVar8 = vpinsrb_avx(auVar8,(uint)pbVar5[2],2);
      auVar8 = vpinsrb_avx(auVar8,(uint)auVar10[3],3);
      auVar10 = vpblendw_avx(auVar8,auVar10,0xc);
    }
    if ((uVar7 & 8) != 0) {
      auVar8 = vpmovzxwd_avx(auVar10);
      auVar8 = vpinsrb_avx(auVar8,(uint)auVar10[2],2);
      auVar8 = vpinsrb_avx(auVar8,(uint)pbVar5[3],3);
      auVar10 = vpblendw_avx(auVar8,auVar10,0xc);
    }
    if ((uVar7 & 0x10) != 0) {
      auVar8 = vpshufb_avx(auVar10,___xmm_80800706808005048080030203020100);
      auVar8 = vpinsrb_avx(auVar8,(uint)pbVar5[4],4);
      auVar8 = vpinsrb_avx(auVar8,(uint)auVar10[5],5);
      auVar10 = vpblendw_avx(auVar8,auVar10,8);
    }
    if ((uVar7 & 0x20) != 0) {
      auVar8 = vpshufb_avx(auVar10,___xmm_80800706808005048080030403020100);
      auVar8 = vpinsrb_avx(auVar8,(uint)pbVar5[5],5);
      auVar10 = vpblendw_avx(auVar8,auVar10,8);
    }
    if ((uVar7 & 0x40) != 0) {
      auVar8 = vpshufb_avx(auVar10,___xmm_80800706808005048080050403020100);
      auVar8 = vpinsrb_avx(auVar8,(uint)pbVar5[6],6);
      auVar10 = vpinsrb_avx(auVar8,(uint)auVar10[7],7);
    }
    if ((uVar7 & 0x80) != 0) {
      auVar10 = vpshufb_avx(auVar10,___xmm_80800706808005048006050403020100);
      auVar10 = vpinsrb_avx(auVar10,(uint)pbVar5[7],7);
    }
    pbVar5 = (byte *)(param_2 + uVar4);
    auVar14 = vpcmpgtd_avx(auVar17,auVar14);
    auVar15._16_16_ = auVar2;
    auVar15._0_16_ = auVar14;
    uVar7 = vmovmskps_avx(auVar15);
    if ((uVar7 & 1) != 0) {
      auVar14 = ZEXT116(*pbVar5);
    }
    if ((uVar7 & 2) != 0) {
      auVar2 = vpinsrb_avx(auVar14,(uint)pbVar5[1],1);
      auVar14 = vpblendw_avx(auVar2,auVar14,0xe);
    }
    if ((uVar7 & 4) != 0) {
      auVar2 = vpmovzxwd_avx(auVar14);
      auVar2 = vpinsrb_avx(auVar2,(uint)pbVar5[2],2);
      auVar2 = vpinsrb_avx(auVar2,(uint)auVar14[3],3);
      auVar14 = vpblendw_avx(auVar2,auVar14,0xc);
    }
    if ((uVar7 & 8) != 0) {
      auVar2 = vpmovzxwd_avx(auVar14);
      auVar2 = vpinsrb_avx(auVar2,(uint)auVar14[2],2);
      auVar2 = vpinsrb_avx(auVar2,(uint)pbVar5[3],3);
      auVar14 = vpblendw_avx(auVar2,auVar14,0xc);
    }
    if ((uVar7 & 0x10) != 0) {
      auVar2 = vpshufb_avx(auVar14,___xmm_80800706808005048080030203020100);
      auVar2 = vpinsrb_avx(auVar2,(uint)pbVar5[4],4);
      auVar2 = vpinsrb_avx(auVar2,(uint)auVar14[5],5);
      auVar14 = vpblendw_avx(auVar2,auVar14,8);
    }
    if ((uVar7 & 0x20) != 0) {
      auVar2 = vpshufb_avx(auVar14,___xmm_80800706808005048080030403020100);
      auVar2 = vpinsrb_avx(auVar2,(uint)pbVar5[5],5);
      auVar14 = vpblendw_avx(auVar2,auVar14,8);
    }
    if ((uVar7 & 0x40) != 0) {
      auVar2 = vpshufb_avx(auVar14,___xmm_80800706808005048080050403020100);
      auVar2 = vpinsrb_avx(auVar2,(uint)pbVar5[6],6);
      auVar14 = vpinsrb_avx(auVar2,(uint)auVar14[7],7);
    }
    if ((uVar7 & 0x80) != 0) {
      auVar2 = vpshufb_avx(auVar14,___xmm_80800706808005048006050403020100);
      auVar14 = vpinsrb_avx(auVar2,(uint)pbVar5[7],7);
    }
  }
  auVar2 = vpmovzxbd_avx(auVar10);
  auVar10 = vpshufd_avx(auVar10,0x55);
  auVar10 = vpmovzxbd_avx(auVar10);
  auVar13._16_16_ = auVar10;
  auVar13._0_16_ = auVar2;
  auVar18 = vcvtdq2ps_avx(auVar13);
  auVar10 = vpmovzxbd_avx(auVar14);
  auVar2 = vpshufd_avx(auVar14,0x55);
  auVar2 = vpmovzxbd_avx(auVar2);
  auVar16._16_16_ = auVar2;
  auVar16._0_16_ = auVar10;
  auVar21 = vcvtdq2ps_avx(auVar16);
  auVar10 = vpshufd_avx(ZEXT416(param_5),0);
  auVar2 = vpshufd_avx(ZEXT416(param_6),0);
  auVar8._0_4_ = (int)(auVar10._0_4_ * auVar18._0_4_ +
                      auVar2._0_4_ * auVar21._0_4_ +
                      ___ymm_3f0000003f0000003f0000003f0000003f0000003f0000003f0000003f000000);
  auVar8._4_4_ = (int)(auVar10._4_4_ * auVar18._4_4_ + auVar2._4_4_ * auVar21._4_4_ + _UNK_150b515a4
                      );
  auVar8._8_4_ = (int)(auVar10._8_4_ * auVar18._8_4_ + auVar2._8_4_ * auVar21._8_4_ + _UNK_150b515a8
                      );
  auVar8._12_4_ =
       (int)(auVar10._12_4_ * auVar18._12_4_ + auVar2._12_4_ * auVar21._12_4_ + _UNK_150b515ac);
  auVar9._16_4_ =
       (int)(auVar10._0_4_ * auVar18._16_4_ + auVar2._0_4_ * auVar21._16_4_ + _UNK_150b515b0);
  auVar9._0_16_ = auVar8;
  auVar9._20_4_ =
       (int)(auVar10._4_4_ * auVar18._20_4_ + auVar2._4_4_ * auVar21._20_4_ + _UNK_150b515b4);
  auVar9._24_4_ =
       (int)(auVar10._8_4_ * auVar18._24_4_ + auVar2._8_4_ * auVar21._24_4_ + _UNK_150b515b8);
  auVar9._28_4_ =
       (int)(auVar10._12_4_ * auVar18._28_4_ + auVar2._12_4_ * auVar21._28_4_ + _UNK_150b515bc);
  auVar10 = vpackssdw_avx(auVar8,auVar9._16_16_);
  auVar10 = vpackuswb_avx(auVar10,auVar10);
  if ((uVar6 & 1) != 0) {
    *(char *)(param_3 + uVar4) = auVar10[0];
  }
  if ((uVar6 & 2) != 0) {
    *(char *)(param_3 + 1 + uVar4) = auVar10[1];
  }
  if ((uVar6 & 4) != 0) {
    *(char *)(param_3 + 2 + uVar4) = auVar10[2];
  }
  if ((uVar6 & 8) != 0) {
    *(char *)(param_3 + 3 + uVar4) = auVar10[3];
  }
  if ((uVar6 & 0x10) != 0) {
    *(char *)(param_3 + 4 + uVar4) = auVar10[4];
  }
  if ((uVar6 & 0x20) != 0) {
    *(char *)(param_3 + 5 + uVar4) = auVar10[5];
  }
  if ((uVar6 & 0x40) != 0) {
    *(char *)(param_3 + 6 + uVar4) = auVar10[6];
  }
  if ((char)(byte)uVar6 < '\0') {
    *(char *)(param_3 + 7 + uVar4) = auVar10[7];
  }
  return;
}

// InterpolateTangents_avx @ 140cb3ef0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InterpolateTangents_avx
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,uint param_7,uint param_8,uint param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  byte *pbVar10;
  byte bVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  float fVar17;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar18 [32];
  undefined1 auVar22 [16];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  float fVar28;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar36 [16];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [32];
  undefined1 auVar40 [16];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [16];
  undefined1 auVar51 [32];
  undefined1 auVar52 [16];
  undefined1 auVar53 [32];
  undefined1 auVar16 [32];
  undefined1 auVar48 [32];
  
  fVar9 = __real_3f000000;
  uVar12 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar12 = param_7;
  }
  if ((int)(uVar12 & 0xfffffff8) < 1) {
    uVar13 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    auVar22 = vpshufd_avx(ZEXT416(param_8),0);
    auVar15 = vpshufd_avx(ZEXT416(param_9),0);
    uVar13 = 0;
    auVar37._0_8_ = CONCAT44(__real_80808080,__real_80808080);
    auVar37._8_4_ = __real_80808080;
    auVar37._12_4_ = __real_80808080;
    do {
      auVar36._8_8_ = 0;
      auVar36._0_8_ = *(ulonglong *)(param_1 + uVar13);
      auVar44._8_8_ = 0;
      auVar44._0_8_ = *(ulonglong *)(param_2 + uVar13);
      auVar50._8_8_ = 0;
      auVar50._0_8_ = *(ulonglong *)(param_3 + uVar13);
      auVar52._8_8_ = 0;
      auVar52._0_8_ = *(ulonglong *)(param_4 + uVar13);
      auVar29 = vpmovzxbd_avx(auVar36 ^ auVar37);
      auVar36 = vpshufd_avx(auVar36 ^ auVar37,0x55);
      auVar36 = vpmovzxbd_avx(auVar36);
      auVar41._16_16_ = auVar36;
      auVar41._0_16_ = auVar29;
      auVar41 = vcvtdq2ps_avx(auVar41);
      auVar29 = vpmovzxbd_avx(auVar44 ^ auVar37);
      auVar36 = vpshufd_avx(auVar44 ^ auVar37,0x55);
      auVar36 = vpmovzxbd_avx(auVar36);
      auVar47._16_16_ = auVar36;
      auVar47._0_16_ = auVar29;
      auVar47 = vcvtdq2ps_avx(auVar47);
      auVar29 = vpmovzxbd_avx(auVar50 ^ auVar37);
      auVar36 = vpshufd_avx(auVar50 ^ auVar37,0x55);
      auVar36 = vpmovzxbd_avx(auVar36);
      auVar51._16_16_ = auVar36;
      auVar51._0_16_ = auVar29;
      auVar51 = vcvtdq2ps_avx(auVar51);
      auVar29 = vpmovzxbd_avx(auVar52 ^ auVar37);
      auVar36 = vpshufd_avx(auVar52 ^ auVar37,0x55);
      auVar36 = vpmovzxbd_avx(auVar36);
      auVar53._16_16_ = auVar36;
      auVar53._0_16_ = auVar29;
      auVar53 = vcvtdq2ps_avx(auVar53);
      fVar17 = auVar22._0_4_;
      fVar19 = auVar22._4_4_;
      fVar20 = auVar22._8_4_;
      fVar21 = auVar22._12_4_;
      fVar28 = auVar15._0_4_;
      fVar33 = auVar15._4_4_;
      fVar34 = auVar15._8_4_;
      fVar35 = auVar15._12_4_;
      auVar29._0_4_ = (int)(fVar17 * auVar41._0_4_ + fVar28 * auVar47._0_4_ + fVar9);
      auVar29._4_4_ = (int)(fVar19 * auVar41._4_4_ + fVar33 * auVar47._4_4_ + fVar9);
      auVar29._8_4_ = (int)(fVar20 * auVar41._8_4_ + fVar34 * auVar47._8_4_ + fVar9);
      auVar29._12_4_ = (int)(fVar21 * auVar41._12_4_ + fVar35 * auVar47._12_4_ + fVar9);
      auVar42._16_4_ = (int)(fVar17 * auVar41._16_4_ + fVar28 * auVar47._16_4_ + fVar9);
      auVar42._0_16_ = auVar29;
      auVar42._20_4_ = (int)(fVar19 * auVar41._20_4_ + fVar33 * auVar47._20_4_ + fVar9);
      auVar42._24_4_ = (int)(fVar20 * auVar41._24_4_ + fVar34 * auVar47._24_4_ + fVar9);
      auVar42._28_4_ = (int)(fVar21 * auVar41._28_4_ + fVar35 * auVar47._28_4_ + fVar9);
      auVar29 = vpackssdw_avx(auVar29,auVar42._16_16_);
      auVar36 = vpackuswb_avx(auVar29,auVar29);
      auVar45._0_4_ = (int)(auVar53._0_4_ * fVar28 + fVar9 + auVar51._0_4_ * fVar17);
      auVar45._4_4_ = (int)(auVar53._4_4_ * fVar33 + fVar9 + auVar51._4_4_ * fVar19);
      auVar45._8_4_ = (int)(auVar53._8_4_ * fVar34 + fVar9 + auVar51._8_4_ * fVar20);
      auVar45._12_4_ = (int)(auVar53._12_4_ * fVar35 + fVar9 + auVar51._12_4_ * fVar21);
      auVar48._16_4_ = (int)(auVar53._16_4_ * fVar28 + fVar9 + auVar51._16_4_ * fVar17);
      auVar48._0_16_ = auVar45;
      auVar48._20_4_ = (int)(auVar53._20_4_ * fVar33 + fVar9 + auVar51._20_4_ * fVar19);
      auVar48._24_4_ = (int)(auVar53._24_4_ * fVar34 + fVar9 + auVar51._24_4_ * fVar20);
      auVar48._28_4_ = (int)(auVar53._28_4_ * fVar35 + fVar9 + auVar51._28_4_ * fVar21);
      auVar29 = vpackssdw_avx(auVar45,auVar48._16_16_);
      auVar29 = vpackuswb_avx(auVar29,auVar29);
      *(ulonglong *)(param_5 + uVar13) = auVar36._0_8_ ^ auVar37._0_8_;
      *(ulonglong *)(param_6 + uVar13) = auVar29._0_8_ ^ auVar37._0_8_;
      uVar13 = uVar13 + 8;
    } while (uVar13 < (uVar12 & 0xfffffff8));
    if ((int)param_7 <= (int)uVar13) {
      return;
    }
  }
  fVar9 = __real_3f000000;
  auVar22 = vpshufd_avx(ZEXT416((uint)uVar13),0);
  auVar23._16_16_ = auVar22;
  auVar23._0_16_ = auVar22;
  auVar37 = vpshufd_avx(ZEXT416(param_7),0);
  uVar13 = uVar13 & 0xffffffff;
  auVar29 = SUB3216(auVar23 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0);
  auVar36 = SUB3216(auVar23 | 
                    ___ymm_0000000700000006000000050000000400000003000000020000000100000000,0x10);
  auVar22 = vpcmpgtd_avx(auVar37,auVar36);
  auVar15 = vpcmpgtd_avx(auVar37,auVar29);
  auVar39._16_16_ = auVar22;
  auVar39._0_16_ = auVar15;
  uVar12 = vmovmskps_avx(auVar39);
  bVar11 = (byte)uVar12;
  if ((~bVar11 & 0x81) == 0) {
    auVar22._8_8_ = 0;
    auVar22._0_8_ = *(ulonglong *)(param_1 + uVar13);
    auVar40._8_8_ = 0;
    auVar40._0_8_ = *(ulonglong *)(param_2 + uVar13);
    auVar46._8_8_ = 0;
    auVar46._0_8_ = *(ulonglong *)(param_3 + uVar13);
    auVar30._8_8_ = 0;
    auVar30._0_8_ = *(ulonglong *)(param_4 + uVar13);
  }
  else {
    pbVar10 = (byte *)(param_1 + uVar13);
    auVar15 = vpcmpgtd_avx(auVar37,auVar36);
    auVar22 = vpcmpgtd_avx(auVar37,auVar29);
    auVar24._16_16_ = auVar15;
    auVar24._0_16_ = auVar22;
    uVar14 = vmovmskps_avx(auVar24);
    if ((uVar14 & 1) != 0) {
      auVar22 = ZEXT116(*pbVar10);
    }
    if ((uVar14 & 2) != 0) {
      auVar36 = vpinsrb_avx(auVar22,(uint)pbVar10[1],1);
      auVar22 = vpblendw_avx(auVar36,auVar22,0xe);
    }
    if ((uVar14 & 4) != 0) {
      auVar36 = vpmovzxwd_avx(auVar22);
      auVar36 = vpinsrb_avx(auVar36,(uint)pbVar10[2],2);
      auVar36 = vpinsrb_avx(auVar36,(uint)auVar22[3],3);
      auVar22 = vpblendw_avx(auVar36,auVar22,0xc);
    }
    if ((uVar14 & 8) != 0) {
      auVar36 = vpmovzxwd_avx(auVar22);
      auVar36 = vpinsrb_avx(auVar36,(uint)auVar22[2],2);
      auVar36 = vpinsrb_avx(auVar36,(uint)pbVar10[3],3);
      auVar22 = vpblendw_avx(auVar36,auVar22,0xc);
    }
    if ((uVar14 & 0x10) != 0) {
      auVar36 = vpshufb_avx(auVar22,___xmm_80800706808005048080030203020100);
      auVar36 = vpinsrb_avx(auVar36,(uint)pbVar10[4],4);
      auVar36 = vpinsrb_avx(auVar36,(uint)auVar22[5],5);
      auVar22 = vpblendw_avx(auVar36,auVar22,8);
    }
    if ((uVar14 & 0x20) != 0) {
      auVar36 = vpshufb_avx(auVar22,___xmm_80800706808005048080030403020100);
      auVar36 = vpinsrb_avx(auVar36,(uint)pbVar10[5],5);
      auVar22 = vpblendw_avx(auVar36,auVar22,8);
    }
    if ((uVar14 & 0x40) != 0) {
      auVar36 = vpshufb_avx(auVar22,___xmm_80800706808005048080050403020100);
      auVar36 = vpinsrb_avx(auVar36,(uint)pbVar10[6],6);
      auVar22 = vpinsrb_avx(auVar36,(uint)auVar22[7],7);
    }
    if ((uVar14 & 0x80) != 0) {
      auVar22 = vpshufb_avx(auVar22,___xmm_80800706808005048006050403020100);
      auVar22 = vpinsrb_avx(auVar22,(uint)pbVar10[7],7);
    }
    pbVar10 = (byte *)(param_2 + uVar13);
    auVar40 = vpcmpgtd_avx(auVar37,auVar29);
    auVar43._16_16_ = auVar15;
    auVar43._0_16_ = auVar40;
    uVar14 = vmovmskps_avx(auVar43);
    if ((uVar14 & 1) != 0) {
      auVar40 = ZEXT116(*pbVar10);
    }
    if ((uVar14 & 2) != 0) {
      auVar36 = vpinsrb_avx(auVar40,(uint)pbVar10[1],1);
      auVar40 = vpblendw_avx(auVar36,auVar40,0xe);
    }
    if ((uVar14 & 4) != 0) {
      auVar36 = vpmovzxwd_avx(auVar40);
      auVar36 = vpinsrb_avx(auVar36,(uint)pbVar10[2],2);
      auVar36 = vpinsrb_avx(auVar36,(uint)auVar40[3],3);
      auVar40 = vpblendw_avx(auVar36,auVar40,0xc);
    }
    if ((uVar14 & 8) != 0) {
      auVar36 = vpmovzxwd_avx(auVar40);
      auVar36 = vpinsrb_avx(auVar36,(uint)auVar40[2],2);
      auVar36 = vpinsrb_avx(auVar36,(uint)pbVar10[3],3);
      auVar40 = vpblendw_avx(auVar36,auVar40,0xc);
    }
    if ((uVar14 & 0x10) != 0) {
      auVar36 = vpshufb_avx(auVar40,___xmm_80800706808005048080030203020100);
      auVar36 = vpinsrb_avx(auVar36,(uint)pbVar10[4],4);
      auVar36 = vpinsrb_avx(auVar36,(uint)auVar40[5],5);
      auVar40 = vpblendw_avx(auVar36,auVar40,8);
    }
    if ((uVar14 & 0x20) != 0) {
      auVar36 = vpshufb_avx(auVar40,___xmm_80800706808005048080030403020100);
      auVar36 = vpinsrb_avx(auVar36,(uint)pbVar10[5],5);
      auVar40 = vpblendw_avx(auVar36,auVar40,8);
    }
    if ((uVar14 & 0x40) != 0) {
      auVar36 = vpshufb_avx(auVar40,___xmm_80800706808005048080050403020100);
      auVar36 = vpinsrb_avx(auVar36,(uint)pbVar10[6],6);
      auVar40 = vpinsrb_avx(auVar36,(uint)auVar40[7],7);
    }
    if ((uVar14 & 0x80) != 0) {
      auVar36 = vpshufb_avx(auVar40,___xmm_80800706808005048006050403020100);
      auVar40 = vpinsrb_avx(auVar36,(uint)pbVar10[7],7);
    }
    pbVar10 = (byte *)(param_3 + uVar13);
    auVar46 = vpcmpgtd_avx(auVar37,auVar29);
    auVar49._16_16_ = auVar15;
    auVar49._0_16_ = auVar46;
    uVar14 = vmovmskps_avx(auVar49);
    if ((uVar14 & 1) != 0) {
      auVar46 = ZEXT116(*pbVar10);
    }
    if ((uVar14 & 2) != 0) {
      auVar36 = vpinsrb_avx(auVar46,(uint)pbVar10[1],1);
      auVar46 = vpblendw_avx(auVar36,auVar46,0xe);
    }
    if ((uVar14 & 4) != 0) {
      auVar36 = vpmovzxwd_avx(auVar46);
      auVar36 = vpinsrb_avx(auVar36,(uint)pbVar10[2],2);
      auVar36 = vpinsrb_avx(auVar36,(uint)auVar46[3],3);
      auVar46 = vpblendw_avx(auVar36,auVar46,0xc);
    }
    if ((uVar14 & 8) != 0) {
      auVar36 = vpmovzxwd_avx(auVar46);
      auVar36 = vpinsrb_avx(auVar36,(uint)auVar46[2],2);
      auVar36 = vpinsrb_avx(auVar36,(uint)pbVar10[3],3);
      auVar46 = vpblendw_avx(auVar36,auVar46,0xc);
    }
    if ((uVar14 & 0x10) != 0) {
      auVar36 = vpshufb_avx(auVar46,___xmm_80800706808005048080030203020100);
      auVar36 = vpinsrb_avx(auVar36,(uint)pbVar10[4],4);
      auVar36 = vpinsrb_avx(auVar36,(uint)auVar46[5],5);
      auVar46 = vpblendw_avx(auVar36,auVar46,8);
    }
    if ((uVar14 & 0x20) != 0) {
      auVar36 = vpshufb_avx(auVar46,___xmm_80800706808005048080030403020100);
      auVar36 = vpinsrb_avx(auVar36,(uint)pbVar10[5],5);
      auVar46 = vpblendw_avx(auVar36,auVar46,8);
    }
    if ((uVar14 & 0x40) != 0) {
      auVar36 = vpshufb_avx(auVar46,___xmm_80800706808005048080050403020100);
      auVar36 = vpinsrb_avx(auVar36,(uint)pbVar10[6],6);
      auVar46 = vpinsrb_avx(auVar36,(uint)auVar46[7],7);
    }
    if ((uVar14 & 0x80) != 0) {
      auVar36 = vpshufb_avx(auVar46,___xmm_80800706808005048006050403020100);
      auVar46 = vpinsrb_avx(auVar36,(uint)pbVar10[7],7);
    }
    pbVar10 = (byte *)(param_4 + uVar13);
    auVar30 = vpcmpgtd_avx(auVar37,auVar29);
    auVar31._16_16_ = auVar15;
    auVar31._0_16_ = auVar30;
    uVar14 = vmovmskps_avx(auVar31);
    if ((uVar14 & 1) != 0) {
      auVar30 = ZEXT116(*pbVar10);
    }
    if ((uVar14 & 2) != 0) {
      auVar15 = vpinsrb_avx(auVar30,(uint)pbVar10[1],1);
      auVar30 = vpblendw_avx(auVar15,auVar30,0xe);
    }
    if ((uVar14 & 4) != 0) {
      auVar15 = vpmovzxwd_avx(auVar30);
      auVar15 = vpinsrb_avx(auVar15,(uint)pbVar10[2],2);
      auVar15 = vpinsrb_avx(auVar15,(uint)auVar30[3],3);
      auVar30 = vpblendw_avx(auVar15,auVar30,0xc);
    }
    if ((uVar14 & 8) != 0) {
      auVar15 = vpmovzxwd_avx(auVar30);
      auVar15 = vpinsrb_avx(auVar15,(uint)auVar30[2],2);
      auVar15 = vpinsrb_avx(auVar15,(uint)pbVar10[3],3);
      auVar30 = vpblendw_avx(auVar15,auVar30,0xc);
    }
    if ((uVar14 & 0x10) != 0) {
      auVar15 = vpshufb_avx(auVar30,___xmm_80800706808005048080030203020100);
      auVar15 = vpinsrb_avx(auVar15,(uint)pbVar10[4],4);
      auVar15 = vpinsrb_avx(auVar15,(uint)auVar30[5],5);
      auVar30 = vpblendw_avx(auVar15,auVar30,8);
    }
    if ((uVar14 & 0x20) != 0) {
      auVar15 = vpshufb_avx(auVar30,___xmm_80800706808005048080030403020100);
      auVar15 = vpinsrb_avx(auVar15,(uint)pbVar10[5],5);
      auVar30 = vpblendw_avx(auVar15,auVar30,8);
    }
    if ((uVar14 & 0x40) != 0) {
      auVar15 = vpshufb_avx(auVar30,___xmm_80800706808005048080050403020100);
      auVar15 = vpinsrb_avx(auVar15,(uint)pbVar10[6],6);
      auVar30 = vpinsrb_avx(auVar15,(uint)auVar30[7],7);
    }
    if ((uVar14 & 0x80) != 0) {
      auVar15 = vpshufb_avx(auVar30,___xmm_80800706808005048006050403020100);
      auVar30 = vpinsrb_avx(auVar15,(uint)pbVar10[7],7);
    }
  }
  auVar38._4_4_ = __real_80808080;
  auVar38._0_4_ = __real_80808080;
  auVar38._8_4_ = __real_80808080;
  auVar38._12_4_ = __real_80808080;
  auVar15 = vpmovzxbd_avx(auVar22 ^ auVar38);
  auVar22 = vpshufd_avx(auVar22 ^ auVar38,0x55);
  auVar22 = vpmovzxbd_avx(auVar22);
  auVar25._16_16_ = auVar22;
  auVar25._0_16_ = auVar15;
  auVar41 = vcvtdq2ps_avx(auVar25);
  auVar22 = vpmovzxbd_avx(auVar40 ^ auVar38);
  auVar15 = vpshufd_avx(auVar40 ^ auVar38,0x55);
  auVar15 = vpmovzxbd_avx(auVar15);
  auVar26._16_16_ = auVar15;
  auVar26._0_16_ = auVar22;
  auVar47 = vcvtdq2ps_avx(auVar26);
  auVar22 = vpmovzxbd_avx(auVar46 ^ auVar38);
  auVar15 = vpshufd_avx(auVar46 ^ auVar38,0x55);
  auVar15 = vpmovzxbd_avx(auVar15);
  auVar27._16_16_ = auVar15;
  auVar27._0_16_ = auVar22;
  auVar22 = vpmovzxbd_avx(auVar30 ^ auVar38);
  auVar15 = vpshufd_avx(auVar30 ^ auVar38,0x55);
  auVar15 = vpmovzxbd_avx(auVar15);
  auVar32._16_16_ = auVar15;
  auVar32._0_16_ = auVar22;
  auVar51 = vcvtdq2ps_avx(auVar32);
  auVar22 = vpshufd_avx(ZEXT416(param_8),0);
  fVar17 = auVar22._0_4_;
  fVar19 = auVar22._4_4_;
  fVar20 = auVar22._8_4_;
  fVar21 = auVar22._12_4_;
  auVar22 = vpshufd_avx(ZEXT416(param_9),0);
  fVar28 = auVar22._0_4_;
  fVar33 = auVar22._4_4_;
  fVar34 = auVar22._8_4_;
  fVar35 = auVar22._12_4_;
  auVar15._0_4_ = (int)(fVar17 * auVar41._0_4_ + fVar28 * auVar47._0_4_ + __real_3f000000);
  auVar15._4_4_ = (int)(fVar19 * auVar41._4_4_ + fVar33 * auVar47._4_4_ + __real_3f000000);
  auVar15._8_4_ = (int)(fVar20 * auVar41._8_4_ + fVar34 * auVar47._8_4_ + __real_3f000000);
  auVar15._12_4_ = (int)(fVar21 * auVar41._12_4_ + fVar35 * auVar47._12_4_ + __real_3f000000);
  auVar16._16_4_ = (int)(fVar17 * auVar41._16_4_ + fVar28 * auVar47._16_4_ + __real_3f000000);
  auVar16._0_16_ = auVar15;
  auVar16._20_4_ = (int)(fVar19 * auVar41._20_4_ + fVar33 * auVar47._20_4_ + __real_3f000000);
  auVar16._24_4_ = (int)(fVar20 * auVar41._24_4_ + fVar34 * auVar47._24_4_ + __real_3f000000);
  auVar16._28_4_ = (int)(fVar21 * auVar41._28_4_ + fVar35 * auVar47._28_4_ + __real_3f000000);
  auVar22 = vpackssdw_avx(auVar15,auVar16._16_16_);
  auVar22 = vpackuswb_avx(auVar22,auVar22);
  auVar22 = auVar22 ^ auVar38;
  if ((uVar12 & 1) == 0) {
    auVar41 = vcvtdq2ps_avx(auVar27);
  }
  else {
    *(char *)(param_5 + uVar13) = auVar22[0];
    auVar41 = vcvtdq2ps_avx(auVar27);
  }
  if ((uVar12 & 2) != 0) {
    *(char *)(param_5 + 1 + uVar13) = auVar22[1];
  }
  if ((uVar12 & 4) != 0) {
    *(char *)(param_5 + 2 + uVar13) = auVar22[2];
  }
  uVar8 = fVar21 * (float)auVar41._28_4_ + fVar35 * auVar51._28_4_ + fVar9;
  uVar7 = fVar20 * (float)auVar41._24_4_ + fVar34 * auVar51._24_4_ + fVar9;
  uVar6 = fVar19 * (float)auVar41._20_4_ + fVar33 * auVar51._20_4_ + fVar9;
  uVar5 = fVar17 * (float)auVar41._16_4_ + fVar28 * auVar51._16_4_ + fVar9;
  uVar4 = fVar21 * (float)auVar41._12_4_ + fVar35 * auVar51._12_4_ + fVar9;
  uVar3 = fVar20 * (float)auVar41._8_4_ + fVar34 * auVar51._8_4_ + fVar9;
  uVar2 = fVar19 * (float)auVar41._4_4_ + fVar33 * auVar51._4_4_ + fVar9;
  uVar1 = fVar17 * (float)auVar41._0_4_ + fVar28 * auVar51._0_4_ + fVar9;
  if ((uVar12 & 8) == 0) {
    auVar18._0_4_ = (int)(float)uVar1;
    auVar18._4_4_ = (int)(float)uVar2;
    auVar18._8_4_ = (int)(float)uVar3;
    auVar18._12_4_ = (int)(float)uVar4;
    auVar18._16_4_ = (int)(float)uVar5;
    auVar18._20_4_ = (int)(float)uVar6;
    auVar18._24_4_ = (int)(float)uVar7;
    auVar18._28_4_ = (int)(float)uVar8;
  }
  else {
    *(char *)(param_5 + 3 + uVar13) = auVar22[3];
    auVar18._0_4_ = (int)(float)uVar1;
    auVar18._4_4_ = (int)(float)uVar2;
    auVar18._8_4_ = (int)(float)uVar3;
    auVar18._12_4_ = (int)(float)uVar4;
    auVar18._16_4_ = (int)(float)uVar5;
    auVar18._20_4_ = (int)(float)uVar6;
    auVar18._24_4_ = (int)(float)uVar7;
    auVar18._28_4_ = (int)(float)uVar8;
  }
  if ((uVar12 & 0x10) != 0) {
    *(char *)(param_5 + 4 + uVar13) = auVar22[4];
  }
  if ((uVar12 & 0x20) == 0) {
    auVar15 = vpackssdw_avx(auVar18._0_16_,auVar18._16_16_);
  }
  else {
    *(char *)(param_5 + 5 + uVar13) = auVar22[5];
    auVar15 = vpackssdw_avx(auVar18._0_16_,auVar18._16_16_);
  }
  if ((uVar12 & 0x40) == 0) {
    auVar15 = vpackuswb_avx(auVar15,auVar15);
  }
  else {
    *(char *)(param_5 + 6 + uVar13) = auVar22[6];
    auVar15 = vpackuswb_avx(auVar15,auVar15);
  }
  if ((char)bVar11 < '\0') {
    *(char *)(param_5 + 7 + uVar13) = auVar22[7];
  }
  auVar15 = auVar15 ^ auVar38;
  if ((uVar12 & 1) != 0) {
    *(char *)(param_6 + uVar13) = auVar15[0];
  }
  if ((uVar12 & 2) != 0) {
    *(char *)(param_6 + 1 + uVar13) = auVar15[1];
  }
  if ((uVar12 & 4) != 0) {
    *(char *)(param_6 + 2 + uVar13) = auVar15[2];
  }
  if ((uVar12 & 8) != 0) {
    *(char *)(param_6 + 3 + uVar13) = auVar15[3];
  }
  if ((uVar12 & 0x10) != 0) {
    *(char *)(param_6 + 4 + uVar13) = auVar15[4];
  }
  if ((uVar12 & 0x20) != 0) {
    *(char *)(param_6 + 5 + uVar13) = auVar15[5];
  }
  if ((uVar12 & 0x40) != 0) {
    *(char *)(param_6 + 6 + uVar13) = auVar15[6];
  }
  if ((char)bVar11 < '\0') {
    *(char *)(param_6 + 7 + uVar13) = auVar15[7];
  }
  return;
}


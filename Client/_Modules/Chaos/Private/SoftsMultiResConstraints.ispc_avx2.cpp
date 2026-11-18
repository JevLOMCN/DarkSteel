// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// ApplyMultiResConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCunfCunfCuni_avx2 @ 14059dbb0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyMultiResConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCunfCunfCuni_avx2
               (undefined1 (*param_1) [32],undefined1 (*param_2) [32],undefined1 (*param_3) [32],
               undefined1 (*param_4) [32],float param_5,float param_6,float param_7,uint param_8)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  undefined1 (*pauVar5) [32];
  undefined1 (*pauVar6) [32];
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 (*pauVar10) [32];
  undefined1 (*pauVar11) [32];
  undefined1 auVar12 [16];
  undefined1 auVar13 [32];
  undefined1 auVar15 [16];
  undefined1 auVar14 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [16];
  undefined1 auVar30 [32];
  undefined1 auVar33 [16];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [16];
  undefined1 auVar37 [16];
  undefined1 auVar36 [32];
  undefined1 auVar38 [16];
  undefined1 auVar39 [32];
  undefined1 auVar40 [16];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  
  uVar4 = param_8 + 7;
  if (-1 < (int)param_8) {
    uVar4 = param_8;
  }
  if ((int)(uVar4 & 0xfffffff8) < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    pauVar5 = param_2;
    pauVar6 = param_1;
    pauVar10 = param_3;
    pauVar11 = param_4;
    do {
      auVar20 = *pauVar6;
      auVar28 = pauVar6[1];
      auVar39 = pauVar6[2];
      auVar17 = pauVar6[3];
      auVar18 = vperm2f128_avx(auVar20,auVar39,0x20);
      auVar14 = vperm2f128_avx(auVar20,auVar39,0x31);
      auVar42 = vperm2f128_avx(auVar28,auVar17,0x20);
      auVar16 = vperm2f128_avx(auVar28,auVar17,0x31);
      auVar24 = vunpcklps_avx(auVar18,auVar14);
      auVar18 = vunpckhps_avx(auVar18,auVar14);
      auVar36 = vunpcklps_avx(auVar42,auVar16);
      auVar14 = vunpckhps_avx(auVar42,auVar16);
      auVar42 = vunpcklpd_avx(auVar24,auVar36);
      auVar24 = vunpckhpd_avx(auVar24,auVar36);
      auVar36 = vunpcklpd_avx(auVar18,auVar14);
      auVar14 = vunpckhpd_avx(auVar18,auVar14);
      auVar18 = vcmpps_avx(ZEXT832(0) << 0x20,auVar14,1);
      uVar9 = vmovmskps_avx(auVar18);
      if (uVar9 != 0) {
        cVar3 = (char)uVar9;
        if (cVar3 == -1) {
          auVar16 = pauVar5[1];
          auVar44 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                 ,auVar16);
          auVar26 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                 ,*pauVar5);
          auVar44 = vblendps_avx(auVar26,auVar44,0x88);
          auVar26 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                 ,auVar16);
          auVar13 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                 ,pauVar5[2]);
          auVar26 = vblendps_avx(auVar13,auVar26,0x13);
          auVar30._16_16_ = auVar26._0_16_;
          auVar30._0_16_ = auVar44._0_16_;
          auVar41 = vperm2f128_avx(auVar44,auVar26,0x31);
          auVar16 = vblendps_avx(auVar16,*pauVar5,0x24);
          auVar16 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                 ,auVar16);
          auVar44 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                 ,pauVar5[2]);
          auVar44 = vblendps_avx(auVar16,auVar44,0xe0);
          auVar16 = pauVar10[1];
          auVar26 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                 ,auVar16);
          auVar13 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                 ,*pauVar10);
          auVar26 = vblendps_avx(auVar13,auVar26,0x88);
          auVar13 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                 ,auVar16);
          auVar27 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                 ,pauVar10[2]);
          auVar13 = vblendps_avx(auVar27,auVar13,0x13);
          auVar45._16_16_ = auVar13._0_16_;
          auVar45._0_16_ = auVar26._0_16_;
          auVar22 = vperm2f128_avx(auVar26,auVar13,0x31);
          auVar16 = vblendps_avx(auVar16,*pauVar10,0x24);
          auVar16 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                 ,auVar16);
          auVar26 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                 ,pauVar10[2]);
          auVar26 = vblendps_avx(auVar16,auVar26,0xe0);
          auVar16 = pauVar11[1];
          auVar13 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                 ,auVar16);
          auVar27 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                 ,*pauVar11);
          auVar13 = vblendps_avx(auVar27,auVar13,0x88);
          auVar27 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                 ,auVar16);
          auVar23 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                 ,pauVar11[2]);
          auVar27 = vblendps_avx(auVar23,auVar27,0x13);
          auVar23._16_16_ = auVar27._0_16_;
          auVar23._0_16_ = auVar13._0_16_;
          auVar13 = vperm2f128_avx(auVar13,auVar27,0x31);
          auVar16 = vblendps_avx(auVar16,*pauVar11,0x24);
          auVar16 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                 ,auVar16);
          auVar27 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                 ,pauVar11[2]);
          auVar16 = vblendps_avx(auVar16,auVar27,0xe0);
        }
        else {
          auVar30 = vgatherdps(ZEXT832(0) << 0x20,auVar18);
          auVar41 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar18);
          auVar44 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar18);
          auVar45 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar18);
          auVar22 = vgatherdps(ZEXT832(0) << 0x20,auVar18);
          auVar26 = vgatherdps(ZEXT832(0) << 0x20,auVar18);
          auVar23 = vgatherdps(ZEXT832(0) << 0x20,auVar18);
          auVar13 = vgatherdps(ZEXT832(0),auVar18);
          auVar16 = vgatherdps(ZEXT832(0),auVar18);
        }
        auVar27 = vsubps_avx(auVar42,auVar45);
        auVar22 = vsubps_avx(auVar24,auVar22);
        auVar26 = vsubps_avx(auVar36,auVar26);
        auVar19._0_4_ = -(param_6 * auVar27._0_4_) + auVar42._0_4_;
        auVar19._4_4_ = -(param_6 * auVar27._4_4_) + auVar42._4_4_;
        auVar19._8_4_ = -(param_6 * auVar27._8_4_) + auVar42._8_4_;
        auVar19._12_4_ = -(param_6 * auVar27._12_4_) + auVar42._12_4_;
        auVar19._16_4_ = -(param_6 * auVar27._16_4_) + auVar42._16_4_;
        auVar19._20_4_ = -(param_6 * auVar27._20_4_) + auVar42._20_4_;
        auVar19._24_4_ = -(param_6 * auVar27._24_4_) + auVar42._24_4_;
        auVar19._28_4_ = -(param_6 * auVar27._28_4_) + auVar42._28_4_;
        auVar42._0_4_ = -(param_6 * auVar22._0_4_) + auVar24._0_4_;
        auVar42._4_4_ = -(param_6 * auVar22._4_4_) + auVar24._4_4_;
        auVar42._8_4_ = -(param_6 * auVar22._8_4_) + auVar24._8_4_;
        auVar42._12_4_ = -(param_6 * auVar22._12_4_) + auVar24._12_4_;
        auVar42._16_4_ = -(param_6 * auVar22._16_4_) + auVar24._16_4_;
        auVar42._20_4_ = -(param_6 * auVar22._20_4_) + auVar24._20_4_;
        auVar42._24_4_ = -(param_6 * auVar22._24_4_) + auVar24._24_4_;
        auVar42._28_4_ = -(param_6 * auVar22._28_4_) + auVar24._28_4_;
        auVar27._0_4_ = -(param_6 * auVar26._0_4_) + auVar36._0_4_;
        auVar27._4_4_ = -(param_6 * auVar26._4_4_) + auVar36._4_4_;
        auVar27._8_4_ = -(param_6 * auVar26._8_4_) + auVar36._8_4_;
        auVar27._12_4_ = -(param_6 * auVar26._12_4_) + auVar36._12_4_;
        auVar27._16_4_ = -(param_6 * auVar26._16_4_) + auVar36._16_4_;
        auVar27._20_4_ = -(param_6 * auVar26._20_4_) + auVar36._20_4_;
        auVar27._24_4_ = -(param_6 * auVar26._24_4_) + auVar36._24_4_;
        auVar27._28_4_ = -(param_6 * auVar26._28_4_) + auVar36._28_4_;
        auVar24 = vmaskmovps_avx(auVar18,auVar19);
        auVar42 = vmaskmovps_avx(auVar18,auVar42);
        auVar36 = vmaskmovps_avx(auVar18,auVar27);
        auVar26 = vsubps_avx(auVar24,auVar30);
        auVar27 = vsubps_avx(auVar42,auVar41);
        auVar44 = vsubps_avx(auVar36,auVar44);
        auVar41._0_4_ = -(param_7 * (-(param_5 * auVar23._0_4_) + auVar26._0_4_)) + auVar24._0_4_;
        auVar41._4_4_ = -(param_7 * (-(param_5 * auVar23._4_4_) + auVar26._4_4_)) + auVar24._4_4_;
        auVar41._8_4_ = -(param_7 * (-(param_5 * auVar23._8_4_) + auVar26._8_4_)) + auVar24._8_4_;
        auVar41._12_4_ =
             -(param_7 * (-(param_5 * auVar23._12_4_) + auVar26._12_4_)) + auVar24._12_4_;
        auVar41._16_4_ =
             -(param_7 * (-(param_5 * auVar23._16_4_) + auVar26._16_4_)) + auVar24._16_4_;
        auVar41._20_4_ =
             -(param_7 * (-(param_5 * auVar23._20_4_) + auVar26._20_4_)) + auVar24._20_4_;
        auVar41._24_4_ =
             -(param_7 * (-(param_5 * auVar23._24_4_) + auVar26._24_4_)) + auVar24._24_4_;
        auVar41._28_4_ =
             -(param_7 * (-(param_5 * auVar23._28_4_) + auVar26._28_4_)) + auVar24._28_4_;
        auVar26._0_4_ = -(param_7 * (-(param_5 * auVar13._0_4_) + auVar27._0_4_)) + auVar42._0_4_;
        auVar26._4_4_ = -(param_7 * (-(param_5 * auVar13._4_4_) + auVar27._4_4_)) + auVar42._4_4_;
        auVar26._8_4_ = -(param_7 * (-(param_5 * auVar13._8_4_) + auVar27._8_4_)) + auVar42._8_4_;
        auVar26._12_4_ =
             -(param_7 * (-(param_5 * auVar13._12_4_) + auVar27._12_4_)) + auVar42._12_4_;
        auVar26._16_4_ =
             -(param_7 * (-(param_5 * auVar13._16_4_) + auVar27._16_4_)) + auVar42._16_4_;
        auVar26._20_4_ =
             -(param_7 * (-(param_5 * auVar13._20_4_) + auVar27._20_4_)) + auVar42._20_4_;
        auVar26._24_4_ =
             -(param_7 * (-(param_5 * auVar13._24_4_) + auVar27._24_4_)) + auVar42._24_4_;
        auVar26._28_4_ =
             -(param_7 * (-(param_5 * auVar13._28_4_) + auVar27._28_4_)) + auVar42._28_4_;
        auVar13._0_4_ = -(param_7 * (-(param_5 * auVar16._0_4_) + auVar44._0_4_)) + auVar36._0_4_;
        auVar13._4_4_ = -(param_7 * (-(param_5 * auVar16._4_4_) + auVar44._4_4_)) + auVar36._4_4_;
        auVar13._8_4_ = -(param_7 * (-(param_5 * auVar16._8_4_) + auVar44._8_4_)) + auVar36._8_4_;
        auVar13._12_4_ =
             -(param_7 * (-(param_5 * auVar16._12_4_) + auVar44._12_4_)) + auVar36._12_4_;
        auVar13._16_4_ =
             -(param_7 * (-(param_5 * auVar16._16_4_) + auVar44._16_4_)) + auVar36._16_4_;
        auVar13._20_4_ =
             -(param_7 * (-(param_5 * auVar16._20_4_) + auVar44._20_4_)) + auVar36._20_4_;
        auVar13._24_4_ =
             -(param_7 * (-(param_5 * auVar16._24_4_) + auVar44._24_4_)) + auVar36._24_4_;
        auVar13._28_4_ =
             -(param_7 * (-(param_5 * auVar16._28_4_) + auVar44._28_4_)) + auVar36._28_4_;
        auVar24 = vmaskmovps_avx(auVar18,auVar41);
        auVar42 = vmaskmovps_avx(auVar18,auVar26);
        auVar18 = vmaskmovps_avx(auVar18,auVar13);
        if (cVar3 == -1) {
          auVar20 = vunpcklps_avx(auVar24,auVar42);
          auVar28 = vunpcklps_avx(auVar18,auVar14);
          auVar17 = vunpcklpd_avx(auVar20,auVar28);
          auVar20 = vunpckhpd_avx(auVar20,auVar28);
          auVar28 = vunpckhps_avx(auVar24,auVar42);
          auVar39 = vunpckhps_avx(auVar18,auVar14);
          auVar18 = vunpcklpd_avx(auVar28,auVar39);
          auVar24._16_16_ = auVar20._0_16_;
          auVar24._0_16_ = auVar17._0_16_;
          *pauVar6 = auVar24;
          auVar28 = vunpckhpd_avx(auVar28,auVar39);
          auVar39._16_16_ = auVar28._0_16_;
          auVar39._0_16_ = auVar18._0_16_;
          pauVar6[1] = auVar39;
          auVar20 = vperm2f128_avx(auVar17,auVar20,0x31);
          pauVar6[2] = auVar20;
          auVar20 = vperm2f128_avx(auVar18,auVar28,0x31);
          pauVar6[3] = auVar20;
        }
        else {
          if ((uVar9 & 1) != 0) {
            *(int *)*pauVar6 = auVar24._0_4_;
          }
          auVar12 = auVar24._0_16_;
          auVar15 = auVar24._16_16_;
          auVar29 = auVar42._0_16_;
          auVar33 = auVar42._16_16_;
          auVar35 = auVar18._0_16_;
          auVar37 = auVar18._16_16_;
          if ((uVar9 & 2) != 0) {
            uVar1 = vextractps_avx(auVar12,1);
            *(undefined4 *)(*pauVar6 + 0x10) = uVar1;
          }
          if ((uVar9 & 4) != 0) {
            uVar1 = vextractps_avx(auVar12,2);
            *(undefined4 *)pauVar6[1] = uVar1;
          }
          if ((uVar9 & 8) != 0) {
            uVar1 = vextractps_avx(auVar12,3);
            *(undefined4 *)(pauVar6[1] + 0x10) = uVar1;
          }
          if ((uVar9 & 0x10) != 0) {
            *(int *)pauVar6[2] = auVar24._16_4_;
          }
          if ((uVar9 & 0x20) != 0) {
            uVar1 = vextractps_avx(auVar15,1);
            *(undefined4 *)(pauVar6[2] + 0x10) = uVar1;
          }
          if ((uVar9 & 0x40) != 0) {
            uVar1 = vextractps_avx(auVar15,2);
            *(undefined4 *)pauVar6[3] = uVar1;
          }
          if (cVar3 < '\0') {
            uVar1 = vextractps_avx(auVar15,3);
            *(undefined4 *)(pauVar6[3] + 0x10) = uVar1;
          }
          if ((uVar9 & 1) != 0) {
            *(int *)(*pauVar6 + 4) = auVar42._0_4_;
          }
          if ((uVar9 & 2) != 0) {
            uVar1 = vextractps_avx(auVar29,1);
            *(undefined4 *)(*pauVar6 + 0x14) = uVar1;
          }
          if ((uVar9 & 4) != 0) {
            uVar1 = vextractps_avx(auVar29,2);
            *(undefined4 *)(pauVar6[1] + 4) = uVar1;
          }
          if ((uVar9 & 8) != 0) {
            uVar1 = vextractps_avx(auVar29,3);
            *(undefined4 *)(pauVar6[1] + 0x14) = uVar1;
          }
          if ((uVar9 & 0x10) != 0) {
            *(int *)(pauVar6[2] + 4) = auVar42._16_4_;
          }
          if ((uVar9 & 0x20) != 0) {
            uVar1 = vextractps_avx(auVar33,1);
            *(undefined4 *)(pauVar6[2] + 0x14) = uVar1;
          }
          if ((uVar9 & 0x40) != 0) {
            uVar1 = vextractps_avx(auVar33,2);
            *(undefined4 *)(pauVar6[3] + 4) = uVar1;
          }
          if (cVar3 < '\0') {
            uVar1 = vextractps_avx(auVar33,3);
            *(undefined4 *)(pauVar6[3] + 0x14) = uVar1;
          }
          if ((uVar9 & 1) != 0) {
            *(int *)(*pauVar6 + 8) = auVar18._0_4_;
          }
          if ((uVar9 & 2) != 0) {
            uVar1 = vextractps_avx(auVar35,1);
            *(undefined4 *)(*pauVar6 + 0x18) = uVar1;
          }
          if ((uVar9 & 4) != 0) {
            uVar1 = vextractps_avx(auVar35,2);
            *(undefined4 *)(pauVar6[1] + 8) = uVar1;
          }
          if ((uVar9 & 8) != 0) {
            uVar1 = vextractps_avx(auVar35,3);
            *(undefined4 *)(pauVar6[1] + 0x18) = uVar1;
          }
          if ((uVar9 & 0x10) != 0) {
            *(int *)(pauVar6[2] + 8) = auVar18._16_4_;
          }
          if ((uVar9 & 0x20) != 0) {
            uVar1 = vextractps_avx(auVar37,1);
            *(undefined4 *)(pauVar6[2] + 0x18) = uVar1;
          }
          if ((uVar9 & 0x40) != 0) {
            uVar1 = vextractps_avx(auVar37,2);
            *(undefined4 *)(pauVar6[3] + 8) = uVar1;
          }
          if (cVar3 < '\0') {
            uVar1 = vextractps_avx(auVar37,3);
            *(undefined4 *)(pauVar6[3] + 0x18) = uVar1;
          }
          if ((uVar9 & 1) != 0) {
            uVar1 = vextractps_avx(auVar20._0_16_,3);
            *(undefined4 *)(*pauVar6 + 0xc) = uVar1;
          }
          if ((uVar9 & 2) != 0) {
            uVar1 = vextractps_avx(auVar20._16_16_,3);
            *(undefined4 *)(*pauVar6 + 0x1c) = uVar1;
          }
          if ((uVar9 & 4) != 0) {
            uVar1 = vextractps_avx(auVar28._0_16_,3);
            *(undefined4 *)(pauVar6[1] + 0xc) = uVar1;
          }
          if ((uVar9 & 8) != 0) {
            uVar1 = vextractps_avx(auVar28._16_16_,3);
            *(undefined4 *)(pauVar6[1] + 0x1c) = uVar1;
          }
          if ((uVar9 & 0x10) != 0) {
            uVar1 = vextractps_avx(auVar39._0_16_,3);
            *(undefined4 *)(pauVar6[2] + 0xc) = uVar1;
          }
          if ((uVar9 & 0x20) != 0) {
            uVar1 = vextractps_avx(auVar39._16_16_,3);
            *(undefined4 *)(pauVar6[2] + 0x1c) = uVar1;
          }
          if ((uVar9 & 0x40) != 0) {
            uVar1 = vextractps_avx(auVar17._0_16_,3);
            *(undefined4 *)(pauVar6[3] + 0xc) = uVar1;
          }
          if (cVar3 < '\0') {
            uVar1 = vextractps_avx(auVar17._16_16_,3);
            *(undefined4 *)(pauVar6[3] + 0x1c) = uVar1;
          }
        }
      }
      pauVar11 = pauVar11 + 3;
      pauVar10 = pauVar10 + 3;
      pauVar5 = pauVar5 + 3;
      pauVar6 = pauVar6 + 4;
      uVar7 = uVar7 + 8;
    } while ((int)uVar7 < (int)(uVar4 & 0xfffffff8));
  }
  if ((int)uVar7 < (int)param_8) {
    auVar20._4_4_ = uVar7;
    auVar20._0_4_ = uVar7;
    auVar20._8_4_ = uVar7;
    auVar20._12_4_ = uVar7;
    auVar20._16_4_ = uVar7;
    auVar20._20_4_ = uVar7;
    auVar20._24_4_ = uVar7;
    auVar20._28_4_ = uVar7;
    auVar20 = vpor_avx2(auVar20,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar17._4_4_ = param_8;
    auVar17._0_4_ = param_8;
    auVar17._8_4_ = param_8;
    auVar17._12_4_ = param_8;
    auVar17._16_4_ = param_8;
    auVar17._20_4_ = param_8;
    auVar17._24_4_ = param_8;
    auVar17._28_4_ = param_8;
    auVar28 = vpcmpgtd_avx2(auVar17,auVar20);
    uVar8 = (ulonglong)uVar7;
    pauVar5 = (undefined1 (*) [32])(*param_1 + uVar8 * 0x10);
    auVar20 = vpcmpeqd_avx2(auVar17,auVar17);
    auVar20 = auVar20 & ~auVar28;
    if ((((((((SUB321(auVar20 >> 0x1f,0) & 1) == 0 && (SUB321(auVar20 >> 0x3f,0) & 1) == 0) &&
            (SUB321(auVar20 >> 0x5f,0) & 1) == 0) && SUB321(auVar20 >> 0x7f,0) == '\0') &&
          (SUB321(auVar20 >> 0x9f,0) & 1) == 0) && SUB321(auVar20 >> 0xbf,0) == '\0') &&
        (SUB321(auVar20 >> 0xdf,0) & 1) == 0) && -1 < auVar20[0x1f]) {
      auVar39 = vperm2f128_avx(*pauVar5,pauVar5[2],0x20);
      auVar17 = vperm2f128_avx(*pauVar5,pauVar5[2],0x31);
      auVar18 = vperm2f128_avx(pauVar5[1],pauVar5[3],0x20);
      auVar14 = vperm2f128_avx(pauVar5[1],pauVar5[3],0x31);
      auVar20 = vunpcklps_avx(auVar39,auVar17);
      auVar39 = vunpckhps_avx(auVar39,auVar17);
      auVar24 = vunpcklps_avx(auVar18,auVar14);
      auVar17 = vunpckhps_avx(auVar18,auVar14);
      auVar18 = vunpcklpd_avx(auVar20,auVar24);
      auVar20 = vunpckhpd_avx(auVar20,auVar24);
      auVar24 = vunpcklpd_avx(auVar39,auVar17);
      auVar39 = vunpckhpd_avx(auVar39,auVar17);
    }
    else {
      auVar18 = vgatherdps(ZEXT832(0) << 0x20,auVar28);
      auVar20 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar28);
      auVar24 = vgatherdps(ZEXT832(0),auVar28);
      auVar39 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar28);
    }
    auVar17 = vmaskmovps_avx(auVar28,auVar18);
    auVar20 = vmaskmovps_avx(auVar28,auVar20);
    auVar18 = vmaskmovps_avx(auVar28,auVar24);
    auVar24 = vcmpps_avx(ZEXT832(0) << 0x20,auVar39,1);
    auVar14._0_4_ = auVar24._0_4_ & auVar28._0_4_;
    auVar14._4_4_ = auVar24._4_4_ & auVar28._4_4_;
    auVar14._8_4_ = auVar24._8_4_ & auVar28._8_4_;
    auVar14._12_4_ = auVar24._12_4_ & auVar28._12_4_;
    auVar14._16_4_ = auVar24._16_4_ & auVar28._16_4_;
    auVar14._20_4_ = auVar24._20_4_ & auVar28._20_4_;
    auVar14._24_4_ = auVar24._24_4_ & auVar28._24_4_;
    auVar14._28_4_ = auVar24._28_4_ & auVar28._28_4_;
    uVar4 = vmovmskps_avx(auVar14);
    if (uVar4 != 0) {
      pauVar6 = (undefined1 (*) [32])(*param_2 + uVar8 * 0xc);
      cVar3 = (char)uVar4;
      if (cVar3 == -1) {
        auVar28 = pauVar6[1];
        auVar24 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar28);
        auVar42 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,*pauVar6);
        auVar24 = vblendps_avx(auVar42,auVar24,0x88);
        auVar42 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar28);
        auVar36 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,pauVar6[2]);
        auVar42 = vblendps_avx(auVar36,auVar42,0x13);
        auVar22._16_16_ = auVar42._0_16_;
        auVar22._0_16_ = auVar24._0_16_;
        auVar44 = vperm2f128_avx(auVar24,auVar42,0x31);
        auVar28 = vblendps_avx(auVar28,*pauVar6,0x24);
        auVar28 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar28);
        auVar24 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,pauVar6[2]);
        auVar24 = vblendps_avx(auVar28,auVar24,0xe0);
        lVar2 = uVar8 * 0xc;
        auVar28 = *(undefined1 (*) [32])(param_3[1] + lVar2);
        auVar42 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar28);
        auVar36 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,*(undefined1 (*) [32])(*param_3 + lVar2));
        auVar42 = vblendps_avx(auVar36,auVar42,0x88);
        auVar36 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar28);
        auVar16 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_3[2] + lVar2));
        auVar36 = vblendps_avx(auVar16,auVar36,0x13);
        auVar31._16_16_ = auVar36._0_16_;
        auVar31._0_16_ = auVar42._0_16_;
        auVar26 = vperm2f128_avx(auVar42,auVar36,0x31);
        auVar28 = vblendps_avx(auVar28,*(undefined1 (*) [32])(*param_3 + lVar2),0x24);
        auVar28 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar28);
        auVar42 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,*(undefined1 (*) [32])(param_3[2] + lVar2));
        auVar42 = vblendps_avx(auVar28,auVar42,0xe0);
        auVar28 = *(undefined1 (*) [32])(param_4[1] + lVar2);
        auVar36 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar28);
        auVar16 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,*(undefined1 (*) [32])(*param_4 + lVar2));
        auVar36 = vblendps_avx(auVar16,auVar36,0x88);
        auVar16 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar28);
        auVar13 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_4[2] + lVar2));
        auVar16 = vblendps_avx(auVar13,auVar16,0x13);
        auVar34._16_16_ = auVar16._0_16_;
        auVar34._0_16_ = auVar36._0_16_;
        auVar36 = vperm2f128_avx(auVar36,auVar16,0x31);
        auVar28 = vblendps_avx(auVar28,*(undefined1 (*) [32])(*param_4 + lVar2),0x24);
        auVar28 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar28);
        auVar16 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,*(undefined1 (*) [32])(param_4[2] + lVar2));
        auVar28 = vblendps_avx(auVar28,auVar16,0xe0);
      }
      else {
        auVar22 = vgatherdps(ZEXT832(0) << 0x20,auVar14);
        auVar44 = vgatherdps(ZEXT832(0),auVar14);
        auVar24 = vgatherdps(ZEXT832(0),auVar14);
        auVar31 = vgatherdps(ZEXT832(0),auVar14);
        auVar26 = vgatherdps(ZEXT832(0),auVar14);
        auVar42 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar14);
        auVar34 = vgatherdps(ZEXT832(0),auVar14);
        auVar36 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar14);
        auVar28 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar14);
      }
      auVar16 = vsubps_avx(auVar17,auVar31);
      auVar26 = vsubps_avx(auVar20,auVar26);
      auVar42 = vsubps_avx(auVar18,auVar42);
      auVar32._0_4_ = -(param_6 * auVar16._0_4_) + auVar17._0_4_;
      auVar32._4_4_ = -(param_6 * auVar16._4_4_) + auVar17._4_4_;
      auVar32._8_4_ = -(param_6 * auVar16._8_4_) + auVar17._8_4_;
      auVar32._12_4_ = -(param_6 * auVar16._12_4_) + auVar17._12_4_;
      auVar32._16_4_ = -(param_6 * auVar16._16_4_) + auVar17._16_4_;
      auVar32._20_4_ = -(param_6 * auVar16._20_4_) + auVar17._20_4_;
      auVar32._24_4_ = -(param_6 * auVar16._24_4_) + auVar17._24_4_;
      auVar32._28_4_ = -(param_6 * auVar16._28_4_) + auVar17._28_4_;
      auVar16._0_4_ = -(param_6 * auVar26._0_4_) + auVar20._0_4_;
      auVar16._4_4_ = -(param_6 * auVar26._4_4_) + auVar20._4_4_;
      auVar16._8_4_ = -(param_6 * auVar26._8_4_) + auVar20._8_4_;
      auVar16._12_4_ = -(param_6 * auVar26._12_4_) + auVar20._12_4_;
      auVar16._16_4_ = -(param_6 * auVar26._16_4_) + auVar20._16_4_;
      auVar16._20_4_ = -(param_6 * auVar26._20_4_) + auVar20._20_4_;
      auVar16._24_4_ = -(param_6 * auVar26._24_4_) + auVar20._24_4_;
      auVar16._28_4_ = -(param_6 * auVar26._28_4_) + auVar20._28_4_;
      auVar43._0_4_ = -(param_6 * auVar42._0_4_) + auVar18._0_4_;
      auVar43._4_4_ = -(param_6 * auVar42._4_4_) + auVar18._4_4_;
      auVar43._8_4_ = -(param_6 * auVar42._8_4_) + auVar18._8_4_;
      auVar43._12_4_ = -(param_6 * auVar42._12_4_) + auVar18._12_4_;
      auVar43._16_4_ = -(param_6 * auVar42._16_4_) + auVar18._16_4_;
      auVar43._20_4_ = -(param_6 * auVar42._20_4_) + auVar18._20_4_;
      auVar43._24_4_ = -(param_6 * auVar42._24_4_) + auVar18._24_4_;
      auVar43._28_4_ = -(param_6 * auVar42._28_4_) + auVar18._28_4_;
      auVar20 = vmaskmovps_avx(auVar14,auVar32);
      auVar17 = vmaskmovps_avx(auVar14,auVar16);
      auVar18 = vmaskmovps_avx(auVar14,auVar43);
      auVar42 = vsubps_avx(auVar20,auVar22);
      auVar16 = vsubps_avx(auVar17,auVar44);
      auVar24 = vsubps_avx(auVar18,auVar24);
      auVar44._0_4_ = -(param_7 * (-(param_5 * auVar34._0_4_) + auVar42._0_4_)) + auVar20._0_4_;
      auVar44._4_4_ = -(param_7 * (-(param_5 * auVar34._4_4_) + auVar42._4_4_)) + auVar20._4_4_;
      auVar44._8_4_ = -(param_7 * (-(param_5 * auVar34._8_4_) + auVar42._8_4_)) + auVar20._8_4_;
      auVar44._12_4_ = -(param_7 * (-(param_5 * auVar34._12_4_) + auVar42._12_4_)) + auVar20._12_4_;
      auVar44._16_4_ = -(param_7 * (-(param_5 * auVar34._16_4_) + auVar42._16_4_)) + auVar20._16_4_;
      auVar44._20_4_ = -(param_7 * (-(param_5 * auVar34._20_4_) + auVar42._20_4_)) + auVar20._20_4_;
      auVar44._24_4_ = -(param_7 * (-(param_5 * auVar34._24_4_) + auVar42._24_4_)) + auVar20._24_4_;
      auVar44._28_4_ = -(param_7 * (-(param_5 * auVar34._28_4_) + auVar42._28_4_)) + auVar20._28_4_;
      auVar21._0_4_ = -(param_7 * (-(param_5 * auVar36._0_4_) + auVar16._0_4_)) + auVar17._0_4_;
      auVar21._4_4_ = -(param_7 * (-(param_5 * auVar36._4_4_) + auVar16._4_4_)) + auVar17._4_4_;
      auVar21._8_4_ = -(param_7 * (-(param_5 * auVar36._8_4_) + auVar16._8_4_)) + auVar17._8_4_;
      auVar21._12_4_ = -(param_7 * (-(param_5 * auVar36._12_4_) + auVar16._12_4_)) + auVar17._12_4_;
      auVar21._16_4_ = -(param_7 * (-(param_5 * auVar36._16_4_) + auVar16._16_4_)) + auVar17._16_4_;
      auVar21._20_4_ = -(param_7 * (-(param_5 * auVar36._20_4_) + auVar16._20_4_)) + auVar17._20_4_;
      auVar21._24_4_ = -(param_7 * (-(param_5 * auVar36._24_4_) + auVar16._24_4_)) + auVar17._24_4_;
      auVar21._28_4_ = -(param_7 * (-(param_5 * auVar36._28_4_) + auVar16._28_4_)) + auVar17._28_4_;
      auVar36._0_4_ = -(param_7 * (-(param_5 * auVar28._0_4_) + auVar24._0_4_)) + auVar18._0_4_;
      auVar36._4_4_ = -(param_7 * (-(param_5 * auVar28._4_4_) + auVar24._4_4_)) + auVar18._4_4_;
      auVar36._8_4_ = -(param_7 * (-(param_5 * auVar28._8_4_) + auVar24._8_4_)) + auVar18._8_4_;
      auVar36._12_4_ = -(param_7 * (-(param_5 * auVar28._12_4_) + auVar24._12_4_)) + auVar18._12_4_;
      auVar36._16_4_ = -(param_7 * (-(param_5 * auVar28._16_4_) + auVar24._16_4_)) + auVar18._16_4_;
      auVar36._20_4_ = -(param_7 * (-(param_5 * auVar28._20_4_) + auVar24._20_4_)) + auVar18._20_4_;
      auVar36._24_4_ = -(param_7 * (-(param_5 * auVar28._24_4_) + auVar24._24_4_)) + auVar18._24_4_;
      auVar36._28_4_ = -(param_7 * (-(param_5 * auVar28._28_4_) + auVar24._28_4_)) + auVar18._28_4_;
      auVar20 = vmaskmovps_avx(auVar14,auVar44);
      auVar28 = vmaskmovps_avx(auVar14,auVar21);
      auVar17 = vmaskmovps_avx(auVar14,auVar36);
      if (cVar3 == -1) {
        auVar18 = vunpcklps_avx(auVar20,auVar28);
        auVar14 = vunpcklps_avx(auVar17,auVar39);
        auVar24 = vunpcklpd_avx(auVar18,auVar14);
        auVar18 = vunpckhpd_avx(auVar18,auVar14);
        auVar20 = vunpckhps_avx(auVar20,auVar28);
        auVar28 = vunpckhps_avx(auVar17,auVar39);
        auVar39 = vunpcklpd_avx(auVar20,auVar28);
        auVar25._16_16_ = auVar18._0_16_;
        auVar25._0_16_ = auVar24._0_16_;
        *pauVar5 = auVar25;
        auVar20 = vunpckhpd_avx(auVar20,auVar28);
        auVar28._16_16_ = auVar20._0_16_;
        auVar28._0_16_ = auVar39._0_16_;
        pauVar5[1] = auVar28;
        auVar28 = vperm2f128_avx(auVar24,auVar18,0x31);
        pauVar5[2] = auVar28;
        auVar20 = vperm2f128_avx(auVar39,auVar20,0x31);
        pauVar5[3] = auVar20;
      }
      else {
        auVar38 = auVar39._0_16_;
        auVar40 = auVar39._16_16_;
        auVar35 = auVar20._0_16_;
        auVar37 = auVar20._16_16_;
        auVar29 = auVar28._0_16_;
        auVar33 = auVar28._16_16_;
        auVar12 = auVar17._0_16_;
        auVar15 = auVar17._16_16_;
        if ((uVar4 & 1) != 0) {
          *(int *)*pauVar5 = auVar20._0_4_;
        }
        if ((uVar4 & 2) != 0) {
          uVar1 = vextractps_avx(auVar35,1);
          *(undefined4 *)(*pauVar5 + 0x10) = uVar1;
        }
        if ((uVar4 & 4) != 0) {
          uVar1 = vextractps_avx(auVar35,2);
          *(undefined4 *)pauVar5[1] = uVar1;
        }
        if ((uVar4 & 8) != 0) {
          uVar1 = vextractps_avx(auVar35,3);
          *(undefined4 *)(pauVar5[1] + 0x10) = uVar1;
        }
        if ((uVar4 & 0x10) != 0) {
          *(int *)pauVar5[2] = auVar20._16_4_;
        }
        if ((uVar4 & 0x20) != 0) {
          uVar1 = vextractps_avx(auVar37,1);
          *(undefined4 *)(pauVar5[2] + 0x10) = uVar1;
        }
        if ((uVar4 & 0x40) != 0) {
          uVar1 = vextractps_avx(auVar37,2);
          *(undefined4 *)pauVar5[3] = uVar1;
        }
        if (cVar3 < '\0') {
          uVar1 = vextractps_avx(auVar37,3);
          *(undefined4 *)(pauVar5[3] + 0x10) = uVar1;
        }
        if ((uVar4 & 1) != 0) {
          *(int *)(*pauVar5 + 4) = auVar28._0_4_;
        }
        if ((uVar4 & 2) != 0) {
          uVar1 = vextractps_avx(auVar29,1);
          *(undefined4 *)(*pauVar5 + 0x14) = uVar1;
        }
        if ((uVar4 & 4) != 0) {
          uVar1 = vextractps_avx(auVar29,2);
          *(undefined4 *)(pauVar5[1] + 4) = uVar1;
        }
        if ((uVar4 & 8) != 0) {
          uVar1 = vextractps_avx(auVar29,3);
          *(undefined4 *)(pauVar5[1] + 0x14) = uVar1;
        }
        if ((uVar4 & 0x10) != 0) {
          *(int *)(pauVar5[2] + 4) = auVar28._16_4_;
        }
        if ((uVar4 & 0x20) != 0) {
          uVar1 = vextractps_avx(auVar33,1);
          *(undefined4 *)(pauVar5[2] + 0x14) = uVar1;
        }
        if ((uVar4 & 0x40) != 0) {
          uVar1 = vextractps_avx(auVar33,2);
          *(undefined4 *)(pauVar5[3] + 4) = uVar1;
        }
        if (cVar3 < '\0') {
          uVar1 = vextractps_avx(auVar33,3);
          *(undefined4 *)(pauVar5[3] + 0x14) = uVar1;
        }
        if ((uVar4 & 1) != 0) {
          *(int *)(*pauVar5 + 8) = auVar17._0_4_;
        }
        if ((uVar4 & 2) != 0) {
          uVar1 = vextractps_avx(auVar12,1);
          *(undefined4 *)(*pauVar5 + 0x18) = uVar1;
        }
        if ((uVar4 & 4) != 0) {
          uVar1 = vextractps_avx(auVar12,2);
          *(undefined4 *)(pauVar5[1] + 8) = uVar1;
        }
        if ((uVar4 & 8) != 0) {
          uVar1 = vextractps_avx(auVar12,3);
          *(undefined4 *)(pauVar5[1] + 0x18) = uVar1;
        }
        if ((uVar4 & 0x10) != 0) {
          *(int *)(pauVar5[2] + 8) = auVar17._16_4_;
        }
        if ((uVar4 & 0x20) != 0) {
          uVar1 = vextractps_avx(auVar15,1);
          *(undefined4 *)(pauVar5[2] + 0x18) = uVar1;
        }
        if ((uVar4 & 0x40) != 0) {
          uVar1 = vextractps_avx(auVar15,2);
          *(undefined4 *)(pauVar5[3] + 8) = uVar1;
        }
        if (cVar3 < '\0') {
          uVar1 = vextractps_avx(auVar15,3);
          *(undefined4 *)(pauVar5[3] + 0x18) = uVar1;
        }
        if ((uVar4 & 1) != 0) {
          *(int *)(*pauVar5 + 0xc) = auVar39._0_4_;
        }
        if ((uVar4 & 2) != 0) {
          uVar1 = vextractps_avx(auVar38,1);
          *(undefined4 *)(*pauVar5 + 0x1c) = uVar1;
        }
        if ((uVar4 & 4) != 0) {
          uVar1 = vextractps_avx(auVar38,2);
          *(undefined4 *)(pauVar5[1] + 0xc) = uVar1;
        }
        if ((uVar4 & 8) != 0) {
          uVar1 = vextractps_avx(auVar38,3);
          *(undefined4 *)(pauVar5[1] + 0x1c) = uVar1;
        }
        if ((uVar4 & 0x10) != 0) {
          *(int *)(pauVar5[2] + 0xc) = auVar39._16_4_;
        }
        if ((uVar4 & 0x20) != 0) {
          uVar1 = vextractps_avx(auVar40,1);
          *(undefined4 *)(pauVar5[2] + 0x1c) = uVar1;
        }
        if ((uVar4 & 0x40) != 0) {
          uVar1 = vextractps_avx(auVar40,2);
          *(undefined4 *)(pauVar5[3] + 0xc) = uVar1;
        }
        if (cVar3 < '\0') {
          uVar1 = vextractps_avx(auVar40,3);
          *(undefined4 *)(pauVar5[3] + 0x1c) = uVar1;
        }
      }
    }
  }
  return;
}

// ApplyMultiResConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cuni_avx2 @ 14059ec30

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyMultiResConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cuni_avx2
               (undefined1 (*param_1) [32],undefined1 (*param_2) [32],undefined1 (*param_3) [32],
               undefined1 (*param_4) [32],float param_5,byte param_6,longlong param_7,
               undefined8 param_8,byte param_9,longlong param_10,undefined8 param_11,uint param_12)

{
  undefined1 uVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 (*pauVar4) [32];
  undefined1 (*pauVar5) [32];
  undefined1 (*pauVar6) [32];
  uint uVar7;
  undefined1 (*pauVar8) [32];
  undefined1 *puVar9;
  uint uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar18 [16];
  float fVar17;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [32];
  undefined1 auVar44 [16];
  undefined1 auVar45 [32];
  undefined1 auVar46 [16];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [16];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [16];
  undefined1 local_2e0 [32];
  
  uVar7 = param_12 + 7;
  if (-1 < (int)param_12) {
    uVar7 = param_12;
  }
  if ((int)(uVar7 & 0xfffffff8) < 1) {
    uVar12 = 0;
    if ((int)param_12 < 1) {
      return;
    }
  }
  else {
    uVar12 = 0;
    pauVar4 = param_1;
    pauVar5 = param_2;
    pauVar6 = param_3;
    pauVar8 = param_4;
    do {
      auVar32 = *pauVar4;
      auVar22 = pauVar4[1];
      auVar52 = pauVar4[2];
      auVar39 = pauVar4[3];
      auVar21 = vperm2f128_avx(auVar32,auVar52,0x20);
      auVar16 = vperm2f128_avx(auVar32,auVar52,0x31);
      auVar40 = vperm2f128_avx(auVar22,auVar39,0x20);
      auVar45 = vperm2f128_avx(auVar22,auVar39,0x31);
      auVar34 = vunpcklps_avx(auVar21,auVar16);
      auVar21 = vunpckhps_avx(auVar21,auVar16);
      auVar38 = vunpcklps_avx(auVar40,auVar45);
      auVar16 = vunpckhps_avx(auVar40,auVar45);
      auVar40 = vunpcklpd_avx(auVar34,auVar38);
      auVar34 = vunpckhpd_avx(auVar34,auVar38);
      auVar38 = vunpcklpd_avx(auVar21,auVar16);
      auVar16 = vunpckhpd_avx(auVar21,auVar16);
      auVar21 = vcmpps_avx(ZEXT832(0) << 0x20,auVar16,1);
      uVar10 = vmovmskps_avx(auVar21);
      if (uVar10 != 0) {
        auVar44 = (undefined1  [16])0x0;
        bVar3 = (byte)uVar10;
        auVar46 = (undefined1  [16])0x0;
        if ((param_6 & 1) != 0) {
          if ((~bVar3 & 0x81) == 0) {
            auVar46._8_8_ = 0;
            auVar46._0_8_ = *(ulonglong *)(param_7 + uVar12);
          }
          else {
            puVar9 = (undefined1 *)(param_7 + uVar12);
            auVar46 = (undefined1  [16])0x0;
            if ((uVar10 & 1) != 0) {
              uVar1 = *puVar9;
              auVar46[1] = uVar1;
              auVar46[0] = uVar1;
              auVar46[2] = uVar1;
              auVar46[3] = uVar1;
              auVar46[4] = uVar1;
              auVar46[5] = uVar1;
              auVar46[6] = uVar1;
              auVar46[7] = uVar1;
              auVar46[8] = uVar1;
              auVar46[9] = uVar1;
              auVar46[10] = uVar1;
              auVar46[0xb] = uVar1;
              auVar46[0xc] = uVar1;
              auVar46[0xd] = uVar1;
              auVar46[0xe] = uVar1;
              auVar46[0xf] = uVar1;
            }
            if ((uVar10 & 2) != 0) {
              auVar30 = vpinsrb_avx(auVar46,(uint)(byte)puVar9[1],1);
              auVar46 = vpblendw_avx(auVar30,auVar46,0xe);
            }
            if ((uVar10 & 4) != 0) {
              auVar30 = vpmovzxwd_avx(auVar46);
              auVar30 = vpinsrb_avx(auVar30,(uint)(byte)puVar9[2],2);
              auVar30 = vpinsrb_avx(auVar30,(uint)auVar46[3],3);
              auVar46 = vpblendd_avx2(auVar30,auVar46,2);
            }
            if ((uVar10 & 8) != 0) {
              auVar30 = vpshufb_avx(auVar46,___xmm_80800706808005048080030280020100);
              auVar30 = vpinsrb_avx(auVar30,(uint)(byte)puVar9[3],3);
              auVar46 = vpblendd_avx2(auVar30,auVar46,2);
            }
            if ((uVar10 & 0x10) != 0) {
              auVar30 = vpshufb_avx(auVar46,___xmm_80800706808005048080030203020100);
              auVar30 = vpinsrb_avx(auVar30,(uint)(byte)puVar9[4],4);
              auVar30 = vpinsrb_avx(auVar30,(uint)auVar46[5],5);
              auVar46 = vpblendw_avx(auVar30,auVar46,8);
            }
            if ((uVar10 & 0x20) != 0) {
              auVar30 = vpshufb_avx(auVar46,___xmm_80800706808005048080030403020100);
              auVar30 = vpinsrb_avx(auVar30,(uint)(byte)puVar9[5],5);
              auVar46 = vpblendw_avx(auVar30,auVar46,8);
            }
            if ((uVar10 & 0x40) != 0) {
              auVar30 = vpshufb_avx(auVar46,___xmm_80800706808005048080050403020100);
              auVar30 = vpinsrb_avx(auVar30,(uint)(byte)puVar9[6],6);
              auVar46 = vpinsrb_avx(auVar30,(uint)auVar46[7],7);
            }
            if ((uVar10 & 0x80) != 0) {
              auVar46 = vpshufb_avx(auVar46,___xmm_80800706808005048006050403020100);
              auVar46 = vpinsrb_avx(auVar46,(uint)(byte)puVar9[7],7);
            }
          }
        }
        if ((param_9 & 1) != 0) {
          if ((~bVar3 & 0x81) == 0) {
            auVar44._8_8_ = 0;
            auVar44._0_8_ = *(ulonglong *)(param_10 + uVar12);
          }
          else {
            puVar9 = (undefined1 *)(param_10 + uVar12);
            if ((uVar10 & 1) != 0) {
              uVar1 = *puVar9;
              auVar44[1] = uVar1;
              auVar44[0] = uVar1;
              auVar44[2] = uVar1;
              auVar44[3] = uVar1;
              auVar44[4] = uVar1;
              auVar44[5] = uVar1;
              auVar44[6] = uVar1;
              auVar44[7] = uVar1;
              auVar44[8] = uVar1;
              auVar44[9] = uVar1;
              auVar44[10] = uVar1;
              auVar44[0xb] = uVar1;
              auVar44[0xc] = uVar1;
              auVar44[0xd] = uVar1;
              auVar44[0xe] = uVar1;
              auVar44[0xf] = uVar1;
            }
            if ((uVar10 & 2) != 0) {
              auVar30 = vpinsrb_avx(auVar44,(uint)(byte)puVar9[1],1);
              auVar44 = vpblendw_avx(auVar30,auVar44,0xe);
            }
            if ((uVar10 & 4) != 0) {
              auVar30 = vpmovzxwd_avx(auVar44);
              auVar30 = vpinsrb_avx(auVar30,(uint)(byte)puVar9[2],2);
              auVar30 = vpinsrb_avx(auVar30,(uint)auVar44[3],3);
              auVar44 = vpblendd_avx2(auVar30,auVar44,2);
            }
            if ((uVar10 & 8) != 0) {
              auVar30 = vpshufb_avx(auVar44,___xmm_80800706808005048080030280020100);
              auVar30 = vpinsrb_avx(auVar30,(uint)(byte)puVar9[3],3);
              auVar44 = vpblendd_avx2(auVar30,auVar44,2);
            }
            if ((uVar10 & 0x10) != 0) {
              auVar30 = vpshufb_avx(auVar44,___xmm_80800706808005048080030203020100);
              auVar30 = vpinsrb_avx(auVar30,(uint)(byte)puVar9[4],4);
              auVar30 = vpinsrb_avx(auVar30,(uint)auVar44[5],5);
              auVar44 = vpblendw_avx(auVar30,auVar44,8);
            }
            if ((uVar10 & 0x20) != 0) {
              auVar30 = vpshufb_avx(auVar44,___xmm_80800706808005048080030403020100);
              auVar30 = vpinsrb_avx(auVar30,(uint)(byte)puVar9[5],5);
              auVar44 = vpblendw_avx(auVar30,auVar44,8);
            }
            if ((uVar10 & 0x40) != 0) {
              auVar30 = vpshufb_avx(auVar44,___xmm_80800706808005048080050403020100);
              auVar30 = vpinsrb_avx(auVar30,(uint)(byte)puVar9[6],6);
              auVar44 = vpinsrb_avx(auVar30,(uint)auVar44[7],7);
            }
            if ((uVar10 & 0x80) != 0) {
              auVar44 = vpshufb_avx(auVar44,___xmm_80800706808005048006050403020100);
              auVar44 = vpinsrb_avx(auVar44,(uint)(byte)puVar9[7],7);
            }
          }
        }
        auVar45 = vpmovsxbd_avx2(auVar46);
        vpslld_avx2(auVar45,2);
        auVar47 = vgatherdps(ZEXT1632((undefined1  [16])0x0),auVar21);
        auVar45 = vpmovsxbd_avx2(auVar44);
        vpslld_avx2(auVar45,2);
        auVar45 = vgatherdps(ZEXT1632((undefined1  [16])0x0),auVar21);
        if (bVar3 == 0xff) {
          auVar37 = pauVar5[1];
          auVar51 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                 ,auVar37);
          auVar33 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                 ,*pauVar5);
          auVar51 = vblendps_avx(auVar33,auVar51,0x88);
          auVar33 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                 ,auVar37);
          auVar36 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                 ,pauVar5[2]);
          auVar33 = vblendps_avx(auVar36,auVar33,0x13);
          auVar19._16_16_ = auVar33._0_16_;
          auVar19._0_16_ = auVar51._0_16_;
          auVar49 = vperm2f128_avx(auVar51,auVar33,0x31);
          auVar37 = vblendps_avx(auVar37,*pauVar5,0x24);
          auVar37 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                 ,auVar37);
          auVar51 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                 ,pauVar5[2]);
          auVar51 = vblendps_avx(auVar37,auVar51,0xe0);
          auVar37 = pauVar6[1];
          auVar33 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                 ,auVar37);
          auVar36 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                 ,*pauVar6);
          auVar33 = vblendps_avx(auVar36,auVar33,0x88);
          auVar36 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                 ,auVar37);
          auVar20 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                 ,pauVar6[2]);
          auVar36 = vblendps_avx(auVar20,auVar36,0x13);
          auVar13._16_16_ = auVar36._0_16_;
          auVar13._0_16_ = auVar33._0_16_;
          auVar15 = vperm2f128_avx(auVar33,auVar36,0x31);
          auVar37 = vblendps_avx(auVar37,*pauVar6,0x24);
          auVar37 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                 ,auVar37);
          auVar33 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                 ,pauVar6[2]);
          auVar33 = vblendps_avx(auVar37,auVar33,0xe0);
          auVar37 = pauVar8[1];
          auVar36 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                 ,auVar37);
          auVar20 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                 ,*pauVar8);
          auVar36 = vblendps_avx(auVar20,auVar36,0x88);
          auVar20 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                 ,auVar37);
          auVar31 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                 ,pauVar8[2]);
          auVar20 = vblendps_avx(auVar31,auVar20,0x13);
          auVar31._16_16_ = auVar20._0_16_;
          auVar31._0_16_ = auVar36._0_16_;
          auVar36 = vperm2f128_avx(auVar36,auVar20,0x31);
          auVar37 = vblendps_avx(auVar37,*pauVar8,0x24);
          auVar37 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                 ,auVar37);
          auVar20 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                 ,pauVar8[2]);
          auVar37 = vblendps_avx(auVar37,auVar20,0xe0);
        }
        else {
          auVar19 = vgatherdps(ZEXT832(0) << 0x20,auVar21);
          auVar49 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar21);
          auVar51 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar21);
          auVar13 = vgatherdps(ZEXT832(0),auVar21);
          auVar15 = vgatherdps(ZEXT832(0),auVar21);
          auVar33 = vgatherdps(ZEXT832(0) << 0x20,auVar21);
          auVar31 = vgatherdps(ZEXT832(0),auVar21);
          auVar36 = vgatherdps(ZEXT832(0),auVar21);
          auVar37 = vgatherdps(ZEXT832(0),auVar21);
        }
        auVar20 = vsubps_avx(auVar40,auVar13);
        auVar15 = vsubps_avx(auVar34,auVar15);
        auVar33 = vsubps_avx(auVar38,auVar33);
        fVar17 = auVar47._0_4_;
        auVar14._0_4_ = -(fVar17 * auVar20._0_4_) + auVar40._0_4_;
        fVar23 = auVar47._4_4_;
        auVar14._4_4_ = -(fVar23 * auVar20._4_4_) + auVar40._4_4_;
        fVar24 = auVar47._8_4_;
        auVar14._8_4_ = -(fVar24 * auVar20._8_4_) + auVar40._8_4_;
        fVar25 = auVar47._12_4_;
        auVar14._12_4_ = -(fVar25 * auVar20._12_4_) + auVar40._12_4_;
        fVar26 = auVar47._16_4_;
        auVar14._16_4_ = -(fVar26 * auVar20._16_4_) + auVar40._16_4_;
        fVar27 = auVar47._20_4_;
        auVar14._20_4_ = -(fVar27 * auVar20._20_4_) + auVar40._20_4_;
        fVar28 = auVar47._24_4_;
        auVar14._24_4_ = -(fVar28 * auVar20._24_4_) + auVar40._24_4_;
        fVar29 = auVar47._28_4_;
        auVar14._28_4_ = -(fVar29 * auVar20._28_4_) + auVar40._28_4_;
        auVar40._0_4_ = -(fVar17 * auVar15._0_4_) + auVar34._0_4_;
        auVar40._4_4_ = -(fVar23 * auVar15._4_4_) + auVar34._4_4_;
        auVar40._8_4_ = -(fVar24 * auVar15._8_4_) + auVar34._8_4_;
        auVar40._12_4_ = -(fVar25 * auVar15._12_4_) + auVar34._12_4_;
        auVar40._16_4_ = -(fVar26 * auVar15._16_4_) + auVar34._16_4_;
        auVar40._20_4_ = -(fVar27 * auVar15._20_4_) + auVar34._20_4_;
        auVar40._24_4_ = -(fVar28 * auVar15._24_4_) + auVar34._24_4_;
        auVar40._28_4_ = -(fVar29 * auVar15._28_4_) + auVar34._28_4_;
        auVar47._0_4_ = -(fVar17 * auVar33._0_4_) + auVar38._0_4_;
        auVar47._4_4_ = -(fVar23 * auVar33._4_4_) + auVar38._4_4_;
        auVar47._8_4_ = -(fVar24 * auVar33._8_4_) + auVar38._8_4_;
        auVar47._12_4_ = -(fVar25 * auVar33._12_4_) + auVar38._12_4_;
        auVar47._16_4_ = -(fVar26 * auVar33._16_4_) + auVar38._16_4_;
        auVar47._20_4_ = -(fVar27 * auVar33._20_4_) + auVar38._20_4_;
        auVar47._24_4_ = -(fVar28 * auVar33._24_4_) + auVar38._24_4_;
        auVar47._28_4_ = -(fVar29 * auVar33._28_4_) + auVar38._28_4_;
        auVar34 = vmaskmovps_avx(auVar21,auVar14);
        auVar40 = vmaskmovps_avx(auVar21,auVar40);
        auVar38 = vmaskmovps_avx(auVar21,auVar47);
        auVar47 = vsubps_avx(auVar34,auVar19);
        auVar33 = vsubps_avx(auVar40,auVar49);
        auVar51 = vsubps_avx(auVar38,auVar51);
        fVar17 = auVar45._0_4_;
        auVar20._0_4_ = -(fVar17 * (-(param_5 * auVar31._0_4_) + auVar47._0_4_)) + auVar34._0_4_;
        fVar23 = auVar45._4_4_;
        auVar20._4_4_ = -(fVar23 * (-(param_5 * auVar31._4_4_) + auVar47._4_4_)) + auVar34._4_4_;
        fVar24 = auVar45._8_4_;
        auVar20._8_4_ = -(fVar24 * (-(param_5 * auVar31._8_4_) + auVar47._8_4_)) + auVar34._8_4_;
        fVar25 = auVar45._12_4_;
        auVar20._12_4_ = -(fVar25 * (-(param_5 * auVar31._12_4_) + auVar47._12_4_)) + auVar34._12_4_
        ;
        fVar26 = auVar45._16_4_;
        auVar20._16_4_ = -(fVar26 * (-(param_5 * auVar31._16_4_) + auVar47._16_4_)) + auVar34._16_4_
        ;
        fVar27 = auVar45._20_4_;
        auVar20._20_4_ = -(fVar27 * (-(param_5 * auVar31._20_4_) + auVar47._20_4_)) + auVar34._20_4_
        ;
        fVar28 = auVar45._24_4_;
        auVar20._24_4_ = -(fVar28 * (-(param_5 * auVar31._24_4_) + auVar47._24_4_)) + auVar34._24_4_
        ;
        fVar29 = auVar45._28_4_;
        auVar20._28_4_ = -(fVar29 * (-(param_5 * auVar31._28_4_) + auVar47._28_4_)) + auVar34._28_4_
        ;
        auVar45._0_4_ = -(fVar17 * (-(param_5 * auVar36._0_4_) + auVar33._0_4_)) + auVar40._0_4_;
        auVar45._4_4_ = -(fVar23 * (-(param_5 * auVar36._4_4_) + auVar33._4_4_)) + auVar40._4_4_;
        auVar45._8_4_ = -(fVar24 * (-(param_5 * auVar36._8_4_) + auVar33._8_4_)) + auVar40._8_4_;
        auVar45._12_4_ = -(fVar25 * (-(param_5 * auVar36._12_4_) + auVar33._12_4_)) + auVar40._12_4_
        ;
        auVar45._16_4_ = -(fVar26 * (-(param_5 * auVar36._16_4_) + auVar33._16_4_)) + auVar40._16_4_
        ;
        auVar45._20_4_ = -(fVar27 * (-(param_5 * auVar36._20_4_) + auVar33._20_4_)) + auVar40._20_4_
        ;
        auVar45._24_4_ = -(fVar28 * (-(param_5 * auVar36._24_4_) + auVar33._24_4_)) + auVar40._24_4_
        ;
        auVar45._28_4_ = -(fVar29 * (-(param_5 * auVar36._28_4_) + auVar33._28_4_)) + auVar40._28_4_
        ;
        auVar33._0_4_ = -(fVar17 * (-(param_5 * auVar37._0_4_) + auVar51._0_4_)) + auVar38._0_4_;
        auVar33._4_4_ = -(fVar23 * (-(param_5 * auVar37._4_4_) + auVar51._4_4_)) + auVar38._4_4_;
        auVar33._8_4_ = -(fVar24 * (-(param_5 * auVar37._8_4_) + auVar51._8_4_)) + auVar38._8_4_;
        auVar33._12_4_ = -(fVar25 * (-(param_5 * auVar37._12_4_) + auVar51._12_4_)) + auVar38._12_4_
        ;
        auVar33._16_4_ = -(fVar26 * (-(param_5 * auVar37._16_4_) + auVar51._16_4_)) + auVar38._16_4_
        ;
        auVar33._20_4_ = -(fVar27 * (-(param_5 * auVar37._20_4_) + auVar51._20_4_)) + auVar38._20_4_
        ;
        auVar33._24_4_ = -(fVar28 * (-(param_5 * auVar37._24_4_) + auVar51._24_4_)) + auVar38._24_4_
        ;
        auVar33._28_4_ = -(fVar29 * (-(param_5 * auVar37._28_4_) + auVar51._28_4_)) + auVar38._28_4_
        ;
        auVar34 = vmaskmovps_avx(auVar21,auVar20);
        auVar40 = vmaskmovps_avx(auVar21,auVar45);
        auVar21 = vmaskmovps_avx(auVar21,auVar33);
        if (bVar3 == 0xff) {
          auVar32 = vunpcklps_avx(auVar34,auVar40);
          auVar22 = vunpcklps_avx(auVar21,auVar16);
          auVar39 = vunpcklpd_avx(auVar32,auVar22);
          auVar32 = vunpckhpd_avx(auVar32,auVar22);
          auVar22 = vunpckhps_avx(auVar34,auVar40);
          auVar52 = vunpckhps_avx(auVar21,auVar16);
          auVar21 = vunpcklpd_avx(auVar22,auVar52);
          auVar34._16_16_ = auVar32._0_16_;
          auVar34._0_16_ = auVar39._0_16_;
          *pauVar4 = auVar34;
          auVar22 = vunpckhpd_avx(auVar22,auVar52);
          auVar52._16_16_ = auVar22._0_16_;
          auVar52._0_16_ = auVar21._0_16_;
          pauVar4[1] = auVar52;
          auVar32 = vperm2f128_avx(auVar39,auVar32,0x31);
          pauVar4[2] = auVar32;
          auVar32 = vperm2f128_avx(auVar21,auVar22,0x31);
          pauVar4[3] = auVar32;
        }
        else {
          if ((uVar10 & 1) != 0) {
            *(int *)*pauVar4 = auVar34._0_4_;
          }
          auVar46 = auVar34._0_16_;
          auVar44 = auVar34._16_16_;
          auVar30 = auVar40._0_16_;
          auVar18 = auVar40._16_16_;
          auVar41 = auVar21._0_16_;
          auVar42 = auVar21._16_16_;
          if ((uVar10 & 2) != 0) {
            uVar11 = vextractps_avx(auVar46,1);
            *(undefined4 *)(*pauVar4 + 0x10) = uVar11;
          }
          if ((uVar10 & 4) != 0) {
            uVar11 = vextractps_avx(auVar46,2);
            *(undefined4 *)pauVar4[1] = uVar11;
          }
          if ((uVar10 & 8) != 0) {
            uVar11 = vextractps_avx(auVar46,3);
            *(undefined4 *)(pauVar4[1] + 0x10) = uVar11;
          }
          if ((uVar10 & 0x10) != 0) {
            *(int *)pauVar4[2] = auVar34._16_4_;
          }
          if ((uVar10 & 0x20) != 0) {
            uVar11 = vextractps_avx(auVar44,1);
            *(undefined4 *)(pauVar4[2] + 0x10) = uVar11;
          }
          if ((uVar10 & 0x40) != 0) {
            uVar11 = vextractps_avx(auVar44,2);
            *(undefined4 *)pauVar4[3] = uVar11;
          }
          if ((char)bVar3 < '\0') {
            uVar11 = vextractps_avx(auVar44,3);
            *(undefined4 *)(pauVar4[3] + 0x10) = uVar11;
          }
          if ((uVar10 & 1) != 0) {
            *(int *)(*pauVar4 + 4) = auVar40._0_4_;
          }
          if ((uVar10 & 2) != 0) {
            uVar11 = vextractps_avx(auVar30,1);
            *(undefined4 *)(*pauVar4 + 0x14) = uVar11;
          }
          if ((uVar10 & 4) != 0) {
            uVar11 = vextractps_avx(auVar30,2);
            *(undefined4 *)(pauVar4[1] + 4) = uVar11;
          }
          if ((uVar10 & 8) != 0) {
            uVar11 = vextractps_avx(auVar30,3);
            *(undefined4 *)(pauVar4[1] + 0x14) = uVar11;
          }
          if ((uVar10 & 0x10) != 0) {
            *(int *)(pauVar4[2] + 4) = auVar40._16_4_;
          }
          if ((uVar10 & 0x20) != 0) {
            uVar11 = vextractps_avx(auVar18,1);
            *(undefined4 *)(pauVar4[2] + 0x14) = uVar11;
          }
          if ((uVar10 & 0x40) != 0) {
            uVar11 = vextractps_avx(auVar18,2);
            *(undefined4 *)(pauVar4[3] + 4) = uVar11;
          }
          if ((char)bVar3 < '\0') {
            uVar11 = vextractps_avx(auVar18,3);
            *(undefined4 *)(pauVar4[3] + 0x14) = uVar11;
          }
          if ((uVar10 & 1) != 0) {
            *(int *)(*pauVar4 + 8) = auVar21._0_4_;
          }
          if ((uVar10 & 2) != 0) {
            uVar11 = vextractps_avx(auVar41,1);
            *(undefined4 *)(*pauVar4 + 0x18) = uVar11;
          }
          if ((uVar10 & 4) != 0) {
            uVar11 = vextractps_avx(auVar41,2);
            *(undefined4 *)(pauVar4[1] + 8) = uVar11;
          }
          if ((uVar10 & 8) != 0) {
            uVar11 = vextractps_avx(auVar41,3);
            *(undefined4 *)(pauVar4[1] + 0x18) = uVar11;
          }
          if ((uVar10 & 0x10) != 0) {
            *(int *)(pauVar4[2] + 8) = auVar21._16_4_;
          }
          if ((uVar10 & 0x20) != 0) {
            uVar11 = vextractps_avx(auVar42,1);
            *(undefined4 *)(pauVar4[2] + 0x18) = uVar11;
          }
          if ((uVar10 & 0x40) != 0) {
            uVar11 = vextractps_avx(auVar42,2);
            *(undefined4 *)(pauVar4[3] + 8) = uVar11;
          }
          if ((char)bVar3 < '\0') {
            uVar11 = vextractps_avx(auVar42,3);
            *(undefined4 *)(pauVar4[3] + 0x18) = uVar11;
          }
          if ((uVar10 & 1) != 0) {
            uVar11 = vextractps_avx(auVar32._0_16_,3);
            *(undefined4 *)(*pauVar4 + 0xc) = uVar11;
          }
          if ((uVar10 & 2) != 0) {
            uVar11 = vextractps_avx(auVar32._16_16_,3);
            *(undefined4 *)(*pauVar4 + 0x1c) = uVar11;
          }
          if ((uVar10 & 4) != 0) {
            uVar11 = vextractps_avx(auVar22._0_16_,3);
            *(undefined4 *)(pauVar4[1] + 0xc) = uVar11;
          }
          if ((uVar10 & 8) != 0) {
            uVar11 = vextractps_avx(auVar22._16_16_,3);
            *(undefined4 *)(pauVar4[1] + 0x1c) = uVar11;
          }
          if ((uVar10 & 0x10) != 0) {
            uVar11 = vextractps_avx(auVar52._0_16_,3);
            *(undefined4 *)(pauVar4[2] + 0xc) = uVar11;
          }
          if ((uVar10 & 0x20) != 0) {
            uVar11 = vextractps_avx(auVar52._16_16_,3);
            *(undefined4 *)(pauVar4[2] + 0x1c) = uVar11;
          }
          if ((uVar10 & 0x40) != 0) {
            uVar11 = vextractps_avx(auVar39._0_16_,3);
            *(undefined4 *)(pauVar4[3] + 0xc) = uVar11;
          }
          if ((char)bVar3 < '\0') {
            uVar11 = vextractps_avx(auVar39._16_16_,3);
            *(undefined4 *)(pauVar4[3] + 0x1c) = uVar11;
          }
        }
      }
      uVar12 = uVar12 + 8;
      pauVar8 = pauVar8 + 3;
      pauVar6 = pauVar6 + 3;
      pauVar5 = pauVar5 + 3;
      pauVar4 = pauVar4 + 4;
    } while ((int)uVar12 < (int)(uVar7 & 0xfffffff8));
    if ((int)param_12 <= (int)uVar12) {
      return;
    }
  }
  uVar11 = (undefined4)uVar12;
  auVar32._4_4_ = uVar11;
  auVar32._0_4_ = uVar11;
  auVar32._8_4_ = uVar11;
  auVar32._12_4_ = uVar11;
  auVar32._16_4_ = uVar11;
  auVar32._20_4_ = uVar11;
  auVar32._24_4_ = uVar11;
  auVar32._28_4_ = uVar11;
  auVar32 = vpor_avx2(auVar32,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar22._4_4_ = param_12;
  auVar22._0_4_ = param_12;
  auVar22._8_4_ = param_12;
  auVar22._12_4_ = param_12;
  auVar22._16_4_ = param_12;
  auVar22._20_4_ = param_12;
  auVar22._24_4_ = param_12;
  auVar22._28_4_ = param_12;
  auVar22 = vpcmpgtd_avx2(auVar22,auVar32);
  uVar12 = uVar12 & 0xffffffff;
  pauVar4 = (undefined1 (*) [32])(*param_1 + uVar12 * 0x10);
  auVar32 = vpcmpeqd_avx2(auVar32,auVar32);
  auVar32 = auVar32 & ~auVar22;
  if ((((((((SUB321(auVar32 >> 0x1f,0) & 1) == 0 && (SUB321(auVar32 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar32 >> 0x5f,0) & 1) == 0) && SUB321(auVar32 >> 0x7f,0) == '\0') &&
        (SUB321(auVar32 >> 0x9f,0) & 1) == 0) && SUB321(auVar32 >> 0xbf,0) == '\0') &&
      (SUB321(auVar32 >> 0xdf,0) & 1) == 0) && -1 < auVar32[0x1f]) {
    auVar52 = vperm2f128_avx(*pauVar4,pauVar4[2],0x20);
    auVar39 = vperm2f128_avx(*pauVar4,pauVar4[2],0x31);
    auVar21 = vperm2f128_avx(pauVar4[1],pauVar4[3],0x20);
    auVar16 = vperm2f128_avx(pauVar4[1],pauVar4[3],0x31);
    auVar32 = vunpcklps_avx(auVar52,auVar39);
    auVar52 = vunpckhps_avx(auVar52,auVar39);
    auVar34 = vunpcklps_avx(auVar21,auVar16);
    auVar39 = vunpckhps_avx(auVar21,auVar16);
    auVar21 = vunpcklpd_avx(auVar32,auVar34);
    auVar32 = vunpckhpd_avx(auVar32,auVar34);
    auVar34 = vunpcklpd_avx(auVar52,auVar39);
    auVar52 = vunpckhpd_avx(auVar52,auVar39);
  }
  else {
    auVar21 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar22);
    auVar32 = vgatherdps(ZEXT832(0),auVar22);
    auVar34 = vgatherdps(ZEXT832(0),auVar22);
    auVar52 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar22);
  }
  auVar39 = vmaskmovps_avx(auVar22,auVar21);
  auVar32 = vmaskmovps_avx(auVar22,auVar32);
  auVar21 = vmaskmovps_avx(auVar22,auVar34);
  auVar34 = vcmpps_avx(ZEXT832(0) << 0x20,auVar52,1);
  auVar16._0_4_ = auVar34._0_4_ & auVar22._0_4_;
  auVar16._4_4_ = auVar34._4_4_ & auVar22._4_4_;
  auVar16._8_4_ = auVar34._8_4_ & auVar22._8_4_;
  auVar16._12_4_ = auVar34._12_4_ & auVar22._12_4_;
  auVar16._16_4_ = auVar34._16_4_ & auVar22._16_4_;
  auVar16._20_4_ = auVar34._20_4_ & auVar22._20_4_;
  auVar16._24_4_ = auVar34._24_4_ & auVar22._24_4_;
  auVar16._28_4_ = auVar34._28_4_ & auVar22._28_4_;
  uVar7 = vmovmskps_avx(auVar16);
  if (uVar7 != 0) {
    auVar18 = ZEXT816(0) << 0x20;
    bVar3 = (byte)uVar7;
    auVar30 = ZEXT816(0) << 0x20;
    if ((param_6 & 1) != 0) {
      if ((~bVar3 & 0x81) == 0) {
        auVar30._8_8_ = 0;
        auVar30._0_8_ = *(ulonglong *)(param_7 + uVar12);
      }
      else {
        puVar9 = (undefined1 *)(param_7 + uVar12);
        if ((uVar7 & 1) != 0) {
          uVar1 = *puVar9;
          auVar30[1] = uVar1;
          auVar30[0] = uVar1;
          auVar30[2] = uVar1;
          auVar30[3] = uVar1;
          auVar30[4] = uVar1;
          auVar30[5] = uVar1;
          auVar30[6] = uVar1;
          auVar30[7] = uVar1;
          auVar30[8] = uVar1;
          auVar30[9] = uVar1;
          auVar30[10] = uVar1;
          auVar30[0xb] = uVar1;
          auVar30[0xc] = uVar1;
          auVar30[0xd] = uVar1;
          auVar30[0xe] = uVar1;
          auVar30[0xf] = uVar1;
        }
        if ((uVar7 & 2) != 0) {
          auVar46 = vpinsrb_avx(auVar30,(uint)(byte)puVar9[1],1);
          auVar30 = vpblendw_avx(auVar46,auVar30,0xe);
        }
        if ((uVar7 & 4) != 0) {
          auVar46 = vpmovzxwd_avx(auVar30);
          auVar46 = vpinsrb_avx(auVar46,(uint)(byte)puVar9[2],2);
          auVar46 = vpinsrb_avx(auVar46,(uint)auVar30[3],3);
          auVar30 = vpblendd_avx2(auVar46,auVar30,2);
        }
        if ((uVar7 & 8) != 0) {
          auVar46 = vpshufb_avx(auVar30,___xmm_80800706808005048080030280020100);
          auVar46 = vpinsrb_avx(auVar46,(uint)(byte)puVar9[3],3);
          auVar30 = vpblendd_avx2(auVar46,auVar30,2);
        }
        if ((uVar7 & 0x10) != 0) {
          auVar46 = vpshufb_avx(auVar30,___xmm_80800706808005048080030203020100);
          auVar46 = vpinsrb_avx(auVar46,(uint)(byte)puVar9[4],4);
          auVar46 = vpinsrb_avx(auVar46,(uint)auVar30[5],5);
          auVar30 = vpblendw_avx(auVar46,auVar30,8);
        }
        if ((uVar7 & 0x20) != 0) {
          auVar46 = vpshufb_avx(auVar30,___xmm_80800706808005048080030403020100);
          auVar46 = vpinsrb_avx(auVar46,(uint)(byte)puVar9[5],5);
          auVar30 = vpblendw_avx(auVar46,auVar30,8);
        }
        if ((uVar7 & 0x40) != 0) {
          auVar46 = vpshufb_avx(auVar30,___xmm_80800706808005048080050403020100);
          auVar46 = vpinsrb_avx(auVar46,(uint)(byte)puVar9[6],6);
          auVar30 = vpinsrb_avx(auVar46,(uint)auVar30[7],7);
        }
        if ((uVar7 & 0x80) != 0) {
          auVar46 = vpshufb_avx(auVar30,___xmm_80800706808005048006050403020100);
          auVar30 = vpinsrb_avx(auVar46,(uint)(byte)puVar9[7],7);
        }
      }
    }
    if ((param_9 & 1) != 0) {
      if ((~bVar3 & 0x81) == 0) {
        auVar18._8_8_ = 0;
        auVar18._0_8_ = *(ulonglong *)(param_10 + uVar12);
      }
      else {
        puVar9 = (undefined1 *)(param_10 + uVar12);
        if ((uVar7 & 1) != 0) {
          uVar1 = *puVar9;
          auVar18[1] = uVar1;
          auVar18[0] = uVar1;
          auVar18[2] = uVar1;
          auVar18[3] = uVar1;
          auVar18[4] = uVar1;
          auVar18[5] = uVar1;
          auVar18[6] = uVar1;
          auVar18[7] = uVar1;
          auVar18[8] = uVar1;
          auVar18[9] = uVar1;
          auVar18[10] = uVar1;
          auVar18[0xb] = uVar1;
          auVar18[0xc] = uVar1;
          auVar18[0xd] = uVar1;
          auVar18[0xe] = uVar1;
          auVar18[0xf] = uVar1;
        }
        if ((uVar7 & 2) != 0) {
          auVar46 = vpinsrb_avx(auVar18,(uint)(byte)puVar9[1],1);
          auVar18 = vpblendw_avx(auVar46,auVar18,0xe);
        }
        if ((uVar7 & 4) != 0) {
          auVar46 = vpmovzxwd_avx(auVar18);
          auVar46 = vpinsrb_avx(auVar46,(uint)(byte)puVar9[2],2);
          auVar46 = vpinsrb_avx(auVar46,(uint)auVar18[3],3);
          auVar18 = vpblendd_avx2(auVar46,auVar18,2);
        }
        if ((uVar7 & 8) != 0) {
          auVar46 = vpshufb_avx(auVar18,___xmm_80800706808005048080030280020100);
          auVar46 = vpinsrb_avx(auVar46,(uint)(byte)puVar9[3],3);
          auVar18 = vpblendd_avx2(auVar46,auVar18,2);
        }
        if ((uVar7 & 0x10) != 0) {
          auVar46 = vpshufb_avx(auVar18,___xmm_80800706808005048080030203020100);
          auVar46 = vpinsrb_avx(auVar46,(uint)(byte)puVar9[4],4);
          auVar46 = vpinsrb_avx(auVar46,(uint)auVar18[5],5);
          auVar18 = vpblendw_avx(auVar46,auVar18,8);
        }
        if ((uVar7 & 0x20) != 0) {
          auVar46 = vpshufb_avx(auVar18,___xmm_80800706808005048080030403020100);
          auVar46 = vpinsrb_avx(auVar46,(uint)(byte)puVar9[5],5);
          auVar18 = vpblendw_avx(auVar46,auVar18,8);
        }
        if ((uVar7 & 0x40) != 0) {
          auVar46 = vpshufb_avx(auVar18,___xmm_80800706808005048080050403020100);
          auVar46 = vpinsrb_avx(auVar46,(uint)(byte)puVar9[6],6);
          auVar18 = vpinsrb_avx(auVar46,(uint)auVar18[7],7);
        }
        if ((uVar7 & 0x80) != 0) {
          auVar46 = vpshufb_avx(auVar18,___xmm_80800706808005048006050403020100);
          auVar18 = vpinsrb_avx(auVar46,(uint)(byte)puVar9[7],7);
        }
      }
    }
    auVar22 = vpmovsxbd_avx2(auVar30);
    vpslld_avx2(auVar22,2);
    auVar34 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar16);
    auVar22 = vpmovsxbd_avx2(auVar18);
    vpslld_avx2(auVar22,2);
    auVar22 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar16);
    pauVar5 = (undefined1 (*) [32])(*param_2 + uVar12 * 0xc);
    if (bVar3 == 0xff) {
      auVar40 = pauVar5[1];
      auVar38 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar40);
      auVar45 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*pauVar5);
      auVar38 = vblendps_avx(auVar45,auVar38,0x88);
      auVar45 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar40);
      auVar47 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,pauVar5[2]);
      auVar45 = vblendps_avx(auVar47,auVar45,0x13);
      local_2e0._16_16_ = auVar45._0_16_;
      local_2e0._0_16_ = auVar38._0_16_;
      auVar51 = vperm2f128_avx(auVar38,auVar45,0x31);
      auVar40 = vblendps_avx(auVar40,*pauVar5,0x24);
      auVar40 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar40);
      auVar38 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,pauVar5[2]);
      auVar38 = vblendps_avx(auVar40,auVar38,0xe0);
      lVar2 = uVar12 * 0xc;
      auVar40 = *(undefined1 (*) [32])(param_3[1] + lVar2);
      auVar45 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar40);
      auVar47 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*(undefined1 (*) [32])(*param_3 + lVar2));
      auVar45 = vblendps_avx(auVar47,auVar45,0x88);
      auVar47 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar40);
      auVar37 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,*(undefined1 (*) [32])(param_3[2] + lVar2));
      auVar47 = vblendps_avx(auVar37,auVar47,0x13);
      auVar49._16_16_ = auVar47._0_16_;
      auVar49._0_16_ = auVar45._0_16_;
      auVar33 = vperm2f128_avx(auVar45,auVar47,0x31);
      auVar40 = vblendps_avx(auVar40,*(undefined1 (*) [32])(*param_3 + lVar2),0x24);
      auVar40 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar40);
      auVar45 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,*(undefined1 (*) [32])(param_3[2] + lVar2));
      auVar45 = vblendps_avx(auVar40,auVar45,0xe0);
      auVar40 = *(undefined1 (*) [32])(param_4[1] + lVar2);
      auVar47 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar40);
      auVar37 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*(undefined1 (*) [32])(*param_4 + lVar2));
      auVar47 = vblendps_avx(auVar37,auVar47,0x88);
      auVar37 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar40);
      auVar36 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,*(undefined1 (*) [32])(param_4[2] + lVar2));
      auVar37 = vblendps_avx(auVar36,auVar37,0x13);
      auVar36._16_16_ = auVar37._0_16_;
      auVar36._0_16_ = auVar47._0_16_;
      auVar47 = vperm2f128_avx(auVar47,auVar37,0x31);
      auVar40 = vblendps_avx(auVar40,*(undefined1 (*) [32])(*param_4 + lVar2),0x24);
      auVar40 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar40);
      auVar37 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,*(undefined1 (*) [32])(param_4[2] + lVar2));
      auVar40 = vblendps_avx(auVar40,auVar37,0xe0);
    }
    else {
      local_2e0 = vgatherdps(ZEXT832(0),auVar16);
      auVar51 = vgatherdps(ZEXT832(0) << 0x20,auVar16);
      auVar38 = vgatherdps(ZEXT832(0),auVar16);
      auVar49 = vgatherdps(ZEXT832(0),auVar16);
      auVar33 = vgatherdps(ZEXT832(0),auVar16);
      auVar45 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar16);
      auVar36 = vgatherdps(ZEXT832(0),auVar16);
      auVar47 = vgatherdps(ZEXT832(0),auVar16);
      auVar40 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar16);
    }
    auVar37 = vsubps_avx(auVar39,auVar49);
    auVar33 = vsubps_avx(auVar32,auVar33);
    auVar45 = vsubps_avx(auVar21,auVar45);
    fVar17 = auVar34._0_4_;
    auVar15._0_4_ = -(fVar17 * auVar37._0_4_) + auVar39._0_4_;
    fVar23 = auVar34._4_4_;
    auVar15._4_4_ = -(fVar23 * auVar37._4_4_) + auVar39._4_4_;
    fVar24 = auVar34._8_4_;
    auVar15._8_4_ = -(fVar24 * auVar37._8_4_) + auVar39._8_4_;
    fVar25 = auVar34._12_4_;
    auVar15._12_4_ = -(fVar25 * auVar37._12_4_) + auVar39._12_4_;
    fVar26 = auVar34._16_4_;
    auVar15._16_4_ = -(fVar26 * auVar37._16_4_) + auVar39._16_4_;
    fVar27 = auVar34._20_4_;
    auVar15._20_4_ = -(fVar27 * auVar37._20_4_) + auVar39._20_4_;
    fVar28 = auVar34._24_4_;
    auVar15._24_4_ = -(fVar28 * auVar37._24_4_) + auVar39._24_4_;
    fVar29 = auVar34._28_4_;
    auVar15._28_4_ = -(fVar29 * auVar37._28_4_) + auVar39._28_4_;
    auVar43._0_4_ = -(fVar17 * auVar33._0_4_) + auVar32._0_4_;
    auVar43._4_4_ = -(fVar23 * auVar33._4_4_) + auVar32._4_4_;
    auVar43._8_4_ = -(fVar24 * auVar33._8_4_) + auVar32._8_4_;
    auVar43._12_4_ = -(fVar25 * auVar33._12_4_) + auVar32._12_4_;
    auVar43._16_4_ = -(fVar26 * auVar33._16_4_) + auVar32._16_4_;
    auVar43._20_4_ = -(fVar27 * auVar33._20_4_) + auVar32._20_4_;
    auVar43._24_4_ = -(fVar28 * auVar33._24_4_) + auVar32._24_4_;
    auVar43._28_4_ = -(fVar29 * auVar33._28_4_) + auVar32._28_4_;
    auVar48._0_4_ = -(fVar17 * auVar45._0_4_) + auVar21._0_4_;
    auVar48._4_4_ = -(fVar23 * auVar45._4_4_) + auVar21._4_4_;
    auVar48._8_4_ = -(fVar24 * auVar45._8_4_) + auVar21._8_4_;
    auVar48._12_4_ = -(fVar25 * auVar45._12_4_) + auVar21._12_4_;
    auVar48._16_4_ = -(fVar26 * auVar45._16_4_) + auVar21._16_4_;
    auVar48._20_4_ = -(fVar27 * auVar45._20_4_) + auVar21._20_4_;
    auVar48._24_4_ = -(fVar28 * auVar45._24_4_) + auVar21._24_4_;
    auVar48._28_4_ = -(fVar29 * auVar45._28_4_) + auVar21._28_4_;
    auVar32 = vmaskmovps_avx(auVar16,auVar15);
    auVar39 = vmaskmovps_avx(auVar16,auVar43);
    auVar21 = vmaskmovps_avx(auVar16,auVar48);
    auVar34 = vsubps_avx(auVar32,local_2e0);
    auVar45 = vsubps_avx(auVar39,auVar51);
    auVar38 = vsubps_avx(auVar21,auVar38);
    fVar17 = auVar22._0_4_;
    auVar51._0_4_ = -(fVar17 * (-(param_5 * auVar36._0_4_) + auVar34._0_4_)) + auVar32._0_4_;
    fVar23 = auVar22._4_4_;
    auVar51._4_4_ = -(fVar23 * (-(param_5 * auVar36._4_4_) + auVar34._4_4_)) + auVar32._4_4_;
    fVar24 = auVar22._8_4_;
    auVar51._8_4_ = -(fVar24 * (-(param_5 * auVar36._8_4_) + auVar34._8_4_)) + auVar32._8_4_;
    fVar25 = auVar22._12_4_;
    auVar51._12_4_ = -(fVar25 * (-(param_5 * auVar36._12_4_) + auVar34._12_4_)) + auVar32._12_4_;
    fVar26 = auVar22._16_4_;
    auVar51._16_4_ = -(fVar26 * (-(param_5 * auVar36._16_4_) + auVar34._16_4_)) + auVar32._16_4_;
    fVar27 = auVar22._20_4_;
    auVar51._20_4_ = -(fVar27 * (-(param_5 * auVar36._20_4_) + auVar34._20_4_)) + auVar32._20_4_;
    fVar28 = auVar22._24_4_;
    auVar51._24_4_ = -(fVar28 * (-(param_5 * auVar36._24_4_) + auVar34._24_4_)) + auVar32._24_4_;
    fVar29 = auVar22._28_4_;
    auVar51._28_4_ = -(fVar29 * (-(param_5 * auVar36._28_4_) + auVar34._28_4_)) + auVar32._28_4_;
    auVar37._0_4_ = -(fVar17 * (-(param_5 * auVar47._0_4_) + auVar45._0_4_)) + auVar39._0_4_;
    auVar37._4_4_ = -(fVar23 * (-(param_5 * auVar47._4_4_) + auVar45._4_4_)) + auVar39._4_4_;
    auVar37._8_4_ = -(fVar24 * (-(param_5 * auVar47._8_4_) + auVar45._8_4_)) + auVar39._8_4_;
    auVar37._12_4_ = -(fVar25 * (-(param_5 * auVar47._12_4_) + auVar45._12_4_)) + auVar39._12_4_;
    auVar37._16_4_ = -(fVar26 * (-(param_5 * auVar47._16_4_) + auVar45._16_4_)) + auVar39._16_4_;
    auVar37._20_4_ = -(fVar27 * (-(param_5 * auVar47._20_4_) + auVar45._20_4_)) + auVar39._20_4_;
    auVar37._24_4_ = -(fVar28 * (-(param_5 * auVar47._24_4_) + auVar45._24_4_)) + auVar39._24_4_;
    auVar37._28_4_ = -(fVar29 * (-(param_5 * auVar47._28_4_) + auVar45._28_4_)) + auVar39._28_4_;
    auVar39._0_4_ = -(fVar17 * (-(param_5 * auVar40._0_4_) + auVar38._0_4_)) + auVar21._0_4_;
    auVar39._4_4_ = -(fVar23 * (-(param_5 * auVar40._4_4_) + auVar38._4_4_)) + auVar21._4_4_;
    auVar39._8_4_ = -(fVar24 * (-(param_5 * auVar40._8_4_) + auVar38._8_4_)) + auVar21._8_4_;
    auVar39._12_4_ = -(fVar25 * (-(param_5 * auVar40._12_4_) + auVar38._12_4_)) + auVar21._12_4_;
    auVar39._16_4_ = -(fVar26 * (-(param_5 * auVar40._16_4_) + auVar38._16_4_)) + auVar21._16_4_;
    auVar39._20_4_ = -(fVar27 * (-(param_5 * auVar40._20_4_) + auVar38._20_4_)) + auVar21._20_4_;
    auVar39._24_4_ = -(fVar28 * (-(param_5 * auVar40._24_4_) + auVar38._24_4_)) + auVar21._24_4_;
    auVar39._28_4_ = -(fVar29 * (-(param_5 * auVar40._28_4_) + auVar38._28_4_)) + auVar21._28_4_;
    auVar32 = vmaskmovps_avx(auVar16,auVar51);
    auVar22 = vmaskmovps_avx(auVar16,auVar37);
    auVar39 = vmaskmovps_avx(auVar16,auVar39);
    if (bVar3 == 0xff) {
      auVar21 = vunpcklps_avx(auVar32,auVar22);
      auVar16 = vunpcklps_avx(auVar39,auVar52);
      auVar34 = vunpcklpd_avx(auVar21,auVar16);
      auVar21 = vunpckhpd_avx(auVar21,auVar16);
      auVar32 = vunpckhps_avx(auVar32,auVar22);
      auVar22 = vunpckhps_avx(auVar39,auVar52);
      auVar52 = vunpcklpd_avx(auVar32,auVar22);
      auVar35._16_16_ = auVar21._0_16_;
      auVar35._0_16_ = auVar34._0_16_;
      *pauVar4 = auVar35;
      auVar32 = vunpckhpd_avx(auVar32,auVar22);
      auVar38._16_16_ = auVar32._0_16_;
      auVar38._0_16_ = auVar52._0_16_;
      pauVar4[1] = auVar38;
      auVar22 = vperm2f128_avx(auVar34,auVar21,0x31);
      pauVar4[2] = auVar22;
      auVar32 = vperm2f128_avx(auVar52,auVar32,0x31);
      pauVar4[3] = auVar32;
    }
    else {
      auVar41 = auVar32._0_16_;
      auVar42 = auVar32._16_16_;
      auVar30 = auVar22._0_16_;
      auVar18 = auVar22._16_16_;
      auVar46 = auVar39._0_16_;
      auVar44 = auVar39._16_16_;
      auVar50 = auVar52._0_16_;
      auVar53 = auVar52._16_16_;
      if ((uVar7 & 1) != 0) {
        *(int *)*pauVar4 = auVar32._0_4_;
      }
      if ((uVar7 & 2) != 0) {
        uVar11 = vextractps_avx(auVar41,1);
        *(undefined4 *)(*pauVar4 + 0x10) = uVar11;
      }
      if ((uVar7 & 4) != 0) {
        uVar11 = vextractps_avx(auVar41,2);
        *(undefined4 *)pauVar4[1] = uVar11;
      }
      if ((uVar7 & 8) != 0) {
        uVar11 = vextractps_avx(auVar41,3);
        *(undefined4 *)(pauVar4[1] + 0x10) = uVar11;
      }
      if ((uVar7 & 0x10) != 0) {
        *(int *)pauVar4[2] = auVar32._16_4_;
      }
      if ((uVar7 & 0x20) != 0) {
        uVar11 = vextractps_avx(auVar42,1);
        *(undefined4 *)(pauVar4[2] + 0x10) = uVar11;
      }
      if ((uVar7 & 0x40) != 0) {
        uVar11 = vextractps_avx(auVar42,2);
        *(undefined4 *)pauVar4[3] = uVar11;
      }
      if ((char)bVar3 < '\0') {
        uVar11 = vextractps_avx(auVar42,3);
        *(undefined4 *)(pauVar4[3] + 0x10) = uVar11;
      }
      if ((uVar7 & 1) != 0) {
        *(int *)(*pauVar4 + 4) = auVar22._0_4_;
      }
      if ((uVar7 & 2) != 0) {
        uVar11 = vextractps_avx(auVar30,1);
        *(undefined4 *)(*pauVar4 + 0x14) = uVar11;
      }
      if ((uVar7 & 4) != 0) {
        uVar11 = vextractps_avx(auVar30,2);
        *(undefined4 *)(pauVar4[1] + 4) = uVar11;
      }
      if ((uVar7 & 8) != 0) {
        uVar11 = vextractps_avx(auVar30,3);
        *(undefined4 *)(pauVar4[1] + 0x14) = uVar11;
      }
      if ((uVar7 & 0x10) != 0) {
        *(int *)(pauVar4[2] + 4) = auVar22._16_4_;
      }
      if ((uVar7 & 0x20) != 0) {
        uVar11 = vextractps_avx(auVar18,1);
        *(undefined4 *)(pauVar4[2] + 0x14) = uVar11;
      }
      if ((uVar7 & 0x40) != 0) {
        uVar11 = vextractps_avx(auVar18,2);
        *(undefined4 *)(pauVar4[3] + 4) = uVar11;
      }
      if ((char)bVar3 < '\0') {
        uVar11 = vextractps_avx(auVar18,3);
        *(undefined4 *)(pauVar4[3] + 0x14) = uVar11;
      }
      if ((uVar7 & 1) != 0) {
        *(int *)(*pauVar4 + 8) = auVar39._0_4_;
      }
      if ((uVar7 & 2) != 0) {
        uVar11 = vextractps_avx(auVar46,1);
        *(undefined4 *)(*pauVar4 + 0x18) = uVar11;
      }
      if ((uVar7 & 4) != 0) {
        uVar11 = vextractps_avx(auVar46,2);
        *(undefined4 *)(pauVar4[1] + 8) = uVar11;
      }
      if ((uVar7 & 8) != 0) {
        uVar11 = vextractps_avx(auVar46,3);
        *(undefined4 *)(pauVar4[1] + 0x18) = uVar11;
      }
      if ((uVar7 & 0x10) != 0) {
        *(int *)(pauVar4[2] + 8) = auVar39._16_4_;
      }
      if ((uVar7 & 0x20) != 0) {
        uVar11 = vextractps_avx(auVar44,1);
        *(undefined4 *)(pauVar4[2] + 0x18) = uVar11;
      }
      if ((uVar7 & 0x40) != 0) {
        uVar11 = vextractps_avx(auVar44,2);
        *(undefined4 *)(pauVar4[3] + 8) = uVar11;
      }
      if ((char)bVar3 < '\0') {
        uVar11 = vextractps_avx(auVar44,3);
        *(undefined4 *)(pauVar4[3] + 0x18) = uVar11;
      }
      if ((uVar7 & 1) != 0) {
        *(int *)(*pauVar4 + 0xc) = auVar52._0_4_;
      }
      if ((uVar7 & 2) != 0) {
        uVar11 = vextractps_avx(auVar50,1);
        *(undefined4 *)(*pauVar4 + 0x1c) = uVar11;
      }
      if ((uVar7 & 4) != 0) {
        uVar11 = vextractps_avx(auVar50,2);
        *(undefined4 *)(pauVar4[1] + 0xc) = uVar11;
      }
      if ((uVar7 & 8) != 0) {
        uVar11 = vextractps_avx(auVar50,3);
        *(undefined4 *)(pauVar4[1] + 0x1c) = uVar11;
      }
      if ((uVar7 & 0x10) != 0) {
        *(int *)(pauVar4[2] + 0xc) = auVar52._16_4_;
      }
      if ((uVar7 & 0x20) != 0) {
        uVar11 = vextractps_avx(auVar53,1);
        *(undefined4 *)(pauVar4[2] + 0x1c) = uVar11;
      }
      if ((uVar7 & 0x40) != 0) {
        uVar11 = vextractps_avx(auVar53,2);
        *(undefined4 *)(pauVar4[3] + 0xc) = uVar11;
      }
      if ((char)bVar3 < '\0') {
        uVar11 = vextractps_avx(auVar53,3);
        *(undefined4 *)(pauVar4[3] + 0x1c) = uVar11;
      }
    }
  }
  return;
}

// MultiResUpdateFineTargets___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_Cuni_avx2 @ 1405a02c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MultiResUpdateFineTargets___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_Cuni_avx2
               (longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 auVar2 [32];
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  undefined1 (*pauVar8) [32];
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [16];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [16];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [16];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [16];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [16];
  undefined1 auVar42 [32];
  undefined1 auVar43 [16];
  undefined1 auVar44 [32];
  undefined1 auVar45 [16];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [32];
  undefined1 auVar52 [16];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  float fVar57;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 auVar58 [16];
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  longlong in_stack_00000030;
  longlong in_stack_00000038;
  uint in_stack_00000040;
  undefined1 local_368 [8];
  float fStack_360;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  undefined1 local_348 [8];
  float fStack_340;
  float fStack_33c;
  float fStack_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  undefined1 local_328 [8];
  float fStack_320;
  float fStack_31c;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  undefined1 local_308 [8];
  float fStack_300;
  float fStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
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
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
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
  
  uVar1 = __real_0000000c;
  iVar5 = __real_00000008;
  iVar4 = __real_00000004;
  uVar7 = in_stack_00000040 + 7;
  if (-1 < (int)in_stack_00000040) {
    uVar7 = in_stack_00000040;
  }
  if ((int)(uVar7 & 0xfffffff8) < 1) {
    uVar9 = 0;
    if ((int)in_stack_00000040 < 1) {
      return;
    }
  }
  else {
    pauVar8 = (undefined1 (*) [32])(in_stack_00000030 + 0x60);
    lVar11 = 0x40;
    uVar9 = 0;
    do {
      auVar19 = ___ymm_0000000000000002000000000000000700000001000000000000000600000000;
      auVar18 = ___ymm_0000000000000003000000040000000700000000000000030000000000000003;
      auVar14 = ___ymm_0000000400000003000000020000000100000000000000000000000000000000;
      auVar47 = vperm2f128_avx(pauVar8[-3],pauVar8[-1],0x20);
      auVar17 = vperm2f128_avx(pauVar8[-3],pauVar8[-1],0x31);
      auVar54 = vperm2f128_avx(pauVar8[-2],*pauVar8,0x20);
      auVar15 = vperm2f128_avx(pauVar8[-2],*pauVar8,0x31);
      auVar13 = vunpcklps_avx(auVar47,auVar17);
      auVar47 = vunpckhps_avx(auVar47,auVar17);
      auVar2 = vunpcklps_avx(auVar54,auVar15);
      auVar17 = vunpckhps_avx(auVar54,auVar15);
      auVar54 = vunpcklpd_avx(auVar13,auVar2);
      auVar13 = vunpckhpd_avx(auVar13,auVar2);
      auVar15 = vunpcklpd_avx(auVar47,auVar17);
      auVar2 = vunpckhpd_avx(auVar47,auVar17);
      auVar47 = *(undefined1 (*) [32])(in_stack_00000038 + -0x40 + lVar11);
      auVar17 = *(undefined1 (*) [32])(in_stack_00000038 + -0x20 + lVar11);
      auVar25 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                            auVar17);
      auVar30 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            auVar47);
      auVar30 = vpblendd_avx2(auVar30,auVar25,0x88);
      auVar25 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                            auVar17);
      auVar32 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                            *(undefined1 (*) [32])(in_stack_00000038 + lVar11));
      auVar25 = vpblendd_avx2(auVar32,auVar25,0x13);
      auVar20 = ZEXT116(0) * auVar25._0_16_ | ZEXT116(1) * auVar30._0_16_;
      auVar27 = ZEXT116(0) * auVar30._16_16_ | ZEXT116(1) * auVar25._0_16_;
      auVar28._16_16_ = auVar27;
      auVar28._0_16_ = auVar20;
      auVar26 = vperm2i128_avx2(auVar30,auVar25,0x31);
      auVar47 = vpblendd_avx2(auVar17,auVar47,0x24);
      auVar47 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                            auVar47);
      auVar21._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar21._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar17 = vpermd_avx2(auVar21,*(undefined1 (*) [32])(in_stack_00000038 + lVar11));
      auVar32 = vpblendd_avx2(auVar47,auVar17,0xe0);
      auVar47._4_4_ = auVar20._4_4_ * 3;
      auVar47._0_4_ = auVar20._0_4_ * 3;
      auVar47._8_4_ = auVar20._8_4_ * 3;
      auVar47._12_4_ = auVar20._12_4_ * 3;
      auVar47._16_4_ = auVar27._0_4_ * 3;
      auVar47._20_4_ = auVar27._4_4_ * 3;
      auVar47._24_4_ = auVar27._8_4_ * 3;
      auVar47._28_4_ = auVar27._12_4_ * 3;
      auVar17 = vpcmpeqd_avx2(auVar17,auVar17);
      auVar21 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar17);
      auVar33._4_4_ = uVar1;
      auVar33._0_4_ = uVar1;
      auVar33._8_4_ = uVar1;
      auVar33._12_4_ = uVar1;
      auVar33._16_4_ = uVar1;
      auVar33._20_4_ = uVar1;
      auVar33._24_4_ = uVar1;
      auVar33._28_4_ = uVar1;
      auVar25 = vpmulld_avx2(auVar28,auVar33);
      auVar17 = vpcmpeqd_avx2(auVar30,auVar30);
      auVar35 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar17);
      auVar22._4_4_ = iVar5;
      auVar22._0_4_ = iVar5;
      auVar22._8_4_ = iVar5;
      auVar22._12_4_ = iVar5;
      auVar22._16_4_ = iVar5;
      auVar22._20_4_ = iVar5;
      auVar22._24_4_ = iVar5;
      auVar22._28_4_ = iVar5;
      auVar17._0_4_ = auVar25._0_4_ + iVar5;
      auVar17._4_4_ = auVar25._4_4_ + iVar5;
      auVar17._8_4_ = auVar25._8_4_ + iVar5;
      auVar17._12_4_ = auVar25._12_4_ + iVar5;
      auVar17._16_4_ = auVar25._16_4_ + iVar5;
      auVar17._20_4_ = auVar25._20_4_ + iVar5;
      auVar17._24_4_ = auVar25._24_4_ + iVar5;
      auVar17._28_4_ = auVar25._28_4_ + iVar5;
      auVar25 = vpcmpeqd_avx2(auVar22,auVar22);
      auVar36 = vgatherdps(ZEXT832(0) << 0x20,auVar25);
      auVar25 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar37 = vgatherdps(ZEXT832(0) << 0x20,auVar25);
      auVar25 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar38 = vgatherdps(ZEXT832(0) << 0x20,auVar25);
      auVar25 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar39 = vgatherdps(ZEXT832(0) << 0x20,auVar25);
      auVar47 = vpcmpeqd_avx2(auVar47,auVar47);
      auVar28 = vgatherdps(ZEXT832(0),auVar47);
      auVar47 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar56 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar47);
      auVar47 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar22 = vgatherdps(ZEXT432(0) << 0x20,auVar47);
      auVar47 = vpcmpeqd_avx2(auVar17,auVar17);
      auVar23 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
      auVar47 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar48 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar47);
      auVar47 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar24 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
      auVar47 = vpmulld_avx2(auVar26,auVar33);
      auVar25._0_4_ = auVar47._0_4_ + iVar4;
      auVar25._4_4_ = auVar47._4_4_ + iVar4;
      auVar25._8_4_ = auVar47._8_4_ + iVar4;
      auVar25._12_4_ = auVar47._12_4_ + iVar4;
      auVar25._16_4_ = auVar47._16_4_ + iVar4;
      auVar25._20_4_ = auVar47._20_4_ + iVar4;
      auVar25._24_4_ = auVar47._24_4_ + iVar4;
      auVar25._28_4_ = auVar47._28_4_ + iVar4;
      auVar47 = vpcmpeqd_avx2(auVar24,auVar24);
      auVar55 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar47);
      auVar47 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar44 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar47);
      auVar47 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar29 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
      auVar47 = vpcmpeqd_avx2(auVar25,auVar25);
      auVar46 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
      auVar47 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar40 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
      auVar47 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar25 = vgatherdps(ZEXT832(0),auVar47);
      auVar30._4_4_ = auVar32._4_4_ * 3;
      auVar30._0_4_ = auVar32._0_4_ * 3;
      auVar30._8_4_ = auVar32._8_4_ * 3;
      auVar30._12_4_ = auVar32._12_4_ * 3;
      auVar30._16_4_ = auVar32._16_4_ * 3;
      auVar30._20_4_ = auVar32._20_4_ * 3;
      auVar30._24_4_ = auVar32._24_4_ * 3;
      auVar30._28_4_ = auVar32._28_4_ * 3;
      auVar47 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar53 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar47);
      auVar47 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar42 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
      auVar47 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar26 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
      vpmulld_avx2(auVar32,auVar33);
      auVar47 = vpcmpeqd_avx2(auVar32,auVar32);
      auVar34 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
      auVar47 = vpcmpeqd_avx2(auVar30,auVar30);
      auVar51 = vgatherdps(ZEXT832(0),auVar47);
      auVar47 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar32 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
      auVar47 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar17 = vgatherdps(ZEXT432(0) << 0x20,auVar47);
      auVar47 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar33 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
      auVar47 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar30 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
      local_1e8 = auVar37._0_4_;
      fStack_1e4 = auVar37._4_4_;
      fStack_1e0 = auVar37._8_4_;
      fStack_1dc = auVar37._12_4_;
      fStack_1d8 = auVar37._16_4_;
      fStack_1d4 = auVar37._20_4_;
      fStack_1d0 = auVar37._24_4_;
      fStack_1cc = auVar37._28_4_;
      fVar57 = auVar2._0_4_;
      local_368._0_4_ = auVar21._0_4_;
      fVar59 = auVar2._4_4_;
      local_368._4_4_ = auVar21._4_4_;
      fVar60 = auVar2._8_4_;
      fStack_360 = auVar21._8_4_;
      fVar61 = auVar2._12_4_;
      fStack_35c = auVar21._12_4_;
      fVar62 = auVar2._16_4_;
      fStack_358 = auVar21._16_4_;
      fVar63 = auVar2._20_4_;
      fStack_354 = auVar21._20_4_;
      fVar64 = auVar2._24_4_;
      fStack_350 = auVar21._24_4_;
      fVar65 = auVar2._28_4_;
      fStack_34c = auVar21._28_4_;
      local_208 = auVar38._0_4_;
      fStack_204 = auVar38._4_4_;
      fStack_200 = auVar38._8_4_;
      fStack_1fc = auVar38._12_4_;
      fStack_1f8 = auVar38._16_4_;
      fStack_1f4 = auVar38._20_4_;
      fStack_1f0 = auVar38._24_4_;
      fStack_1ec = auVar38._28_4_;
      local_148 = auVar35._0_4_;
      fStack_144 = auVar35._4_4_;
      fStack_140 = auVar35._8_4_;
      fStack_13c = auVar35._12_4_;
      fStack_138 = auVar35._16_4_;
      fStack_134 = auVar35._20_4_;
      fStack_130 = auVar35._24_4_;
      fStack_12c = auVar35._28_4_;
      local_168 = auVar36._0_4_;
      fStack_164 = auVar36._4_4_;
      fStack_160 = auVar36._8_4_;
      fStack_15c = auVar36._12_4_;
      fStack_158 = auVar36._16_4_;
      fStack_154 = auVar36._20_4_;
      fStack_150 = auVar36._24_4_;
      fStack_14c = auVar36._28_4_;
      local_2e8 = auVar23._0_4_;
      fStack_2e4 = auVar23._4_4_;
      fStack_2e0 = auVar23._8_4_;
      fStack_2dc = auVar23._12_4_;
      fStack_2d8 = auVar23._16_4_;
      fStack_2d4 = auVar23._20_4_;
      fStack_2d0 = auVar23._24_4_;
      fStack_2cc = auVar23._28_4_;
      local_348._0_4_ = auVar13._0_4_;
      local_348._4_4_ = auVar13._4_4_;
      fStack_340 = auVar13._8_4_;
      fStack_33c = auVar13._12_4_;
      fStack_338 = auVar13._16_4_;
      fStack_334 = auVar13._20_4_;
      fStack_330 = auVar13._24_4_;
      fStack_32c = auVar13._28_4_;
      local_328._0_4_ = auVar54._0_4_;
      local_328._4_4_ = auVar54._4_4_;
      fStack_320 = auVar54._8_4_;
      fStack_31c = auVar54._12_4_;
      fStack_318 = auVar54._16_4_;
      fStack_314 = auVar54._20_4_;
      fStack_310 = auVar54._24_4_;
      fStack_30c = auVar54._28_4_;
      local_308._0_4_ = auVar15._0_4_;
      local_308._4_4_ = auVar15._4_4_;
      fStack_300 = auVar15._8_4_;
      fStack_2fc = auVar15._12_4_;
      fStack_2f8 = auVar15._16_4_;
      fStack_2f4 = auVar15._20_4_;
      fStack_2f0 = auVar15._24_4_;
      fStack_2ec = auVar15._28_4_;
      auVar41._0_4_ =
           (float)local_308._0_4_ * (fVar57 * auVar42._0_4_ + auVar53._0_4_) +
           (float)local_328._0_4_ * (fVar57 * local_1e8 + (float)local_368._0_4_) +
           (float)local_348._0_4_ * (fVar57 * auVar48._0_4_ + local_2e8);
      auVar41._4_4_ =
           (float)local_308._4_4_ * (fVar59 * auVar42._4_4_ + auVar53._4_4_) +
           (float)local_328._4_4_ * (fVar59 * fStack_1e4 + (float)local_368._4_4_) +
           (float)local_348._4_4_ * (fVar59 * auVar48._4_4_ + fStack_2e4);
      auVar41._8_4_ =
           fStack_300 * (fVar60 * auVar42._8_4_ + auVar53._8_4_) +
           fStack_320 * (fVar60 * fStack_1e0 + fStack_360) +
           fStack_340 * (fVar60 * auVar48._8_4_ + fStack_2e0);
      auVar41._12_4_ =
           fStack_2fc * (fVar61 * auVar42._12_4_ + auVar53._12_4_) +
           fStack_31c * (fVar61 * fStack_1dc + fStack_35c) +
           fStack_33c * (fVar61 * auVar48._12_4_ + fStack_2dc);
      auVar35._16_4_ =
           fStack_2f8 * (fVar62 * auVar42._16_4_ + auVar53._16_4_) +
           fStack_318 * (fVar62 * fStack_1d8 + fStack_358) +
           fStack_338 * (fVar62 * auVar48._16_4_ + fStack_2d8);
      auVar35._0_16_ = auVar41;
      auVar35._20_4_ =
           fStack_2f4 * (fVar63 * auVar42._20_4_ + auVar53._20_4_) +
           fStack_314 * (fVar63 * fStack_1d4 + fStack_354) +
           fStack_334 * (fVar63 * auVar48._20_4_ + fStack_2d4);
      auVar35._24_4_ =
           fStack_2f0 * (fVar64 * auVar42._24_4_ + auVar53._24_4_) +
           fStack_310 * (fVar64 * fStack_1d0 + fStack_350) +
           fStack_330 * (fVar64 * auVar48._24_4_ + fStack_2d0);
      auVar35._28_4_ =
           fStack_2ec * (fVar65 * auVar42._28_4_ + auVar53._28_4_) +
           fStack_30c * (fVar65 * fStack_1cc + fStack_34c) +
           fStack_32c * (fVar65 * auVar48._28_4_ + fStack_2cc);
      auVar49._0_4_ =
           (float)local_308._0_4_ * (fVar57 * auVar51._0_4_ + auVar34._0_4_) +
           (float)local_328._0_4_ * (fVar57 * local_208 + local_148) +
           (float)local_348._0_4_ * (fVar57 * auVar44._0_4_ + auVar55._0_4_);
      auVar49._4_4_ =
           (float)local_308._4_4_ * (fVar59 * auVar51._4_4_ + auVar34._4_4_) +
           (float)local_328._4_4_ * (fVar59 * fStack_204 + fStack_144) +
           (float)local_348._4_4_ * (fVar59 * auVar44._4_4_ + auVar55._4_4_);
      auVar49._8_4_ =
           fStack_300 * (fVar60 * auVar51._8_4_ + auVar34._8_4_) +
           fStack_320 * (fVar60 * fStack_200 + fStack_140) +
           fStack_340 * (fVar60 * auVar44._8_4_ + auVar55._8_4_);
      auVar49._12_4_ =
           fStack_2fc * (fVar61 * auVar51._12_4_ + auVar34._12_4_) +
           fStack_31c * (fVar61 * fStack_1fc + fStack_13c) +
           fStack_33c * (fVar61 * auVar44._12_4_ + auVar55._12_4_);
      auVar36._16_4_ =
           fStack_2f8 * (fVar62 * auVar51._16_4_ + auVar34._16_4_) +
           fStack_318 * (fVar62 * fStack_1f8 + fStack_138) +
           fStack_338 * (fVar62 * auVar44._16_4_ + auVar55._16_4_);
      auVar36._0_16_ = auVar49;
      auVar36._20_4_ =
           fStack_2f4 * (fVar63 * auVar51._20_4_ + auVar34._20_4_) +
           fStack_314 * (fVar63 * fStack_1f4 + fStack_134) +
           fStack_334 * (fVar63 * auVar44._20_4_ + auVar55._20_4_);
      auVar36._24_4_ =
           fStack_2f0 * (fVar64 * auVar51._24_4_ + auVar34._24_4_) +
           fStack_310 * (fVar64 * fStack_1f0 + fStack_130) +
           fStack_330 * (fVar64 * auVar44._24_4_ + auVar55._24_4_);
      auVar36._28_4_ =
           fStack_2ec * (fVar65 * auVar51._28_4_ + auVar34._28_4_) +
           fStack_30c * (fVar65 * fStack_1ec + fStack_12c) +
           fStack_32c * (fVar65 * auVar44._28_4_ + auVar55._28_4_);
      auVar34._0_4_ =
           (float)local_308._0_4_ * (fVar57 * auVar33._0_4_ + auVar17._0_4_) +
           (float)local_328._0_4_ * (fVar57 * auVar56._0_4_ + local_168) +
           (float)local_348._0_4_ * (fVar57 * auVar40._0_4_ + auVar46._0_4_);
      auVar34._4_4_ =
           (float)local_308._4_4_ * (fVar59 * auVar33._4_4_ + auVar17._4_4_) +
           (float)local_328._4_4_ * (fVar59 * auVar56._4_4_ + fStack_164) +
           (float)local_348._4_4_ * (fVar59 * auVar40._4_4_ + auVar46._4_4_);
      auVar34._8_4_ =
           fStack_300 * (fVar60 * auVar33._8_4_ + auVar17._8_4_) +
           fStack_320 * (fVar60 * auVar56._8_4_ + fStack_160) +
           fStack_340 * (fVar60 * auVar40._8_4_ + auVar46._8_4_);
      auVar34._12_4_ =
           fStack_2fc * (fVar61 * auVar33._12_4_ + auVar17._12_4_) +
           fStack_31c * (fVar61 * auVar56._12_4_ + fStack_15c) +
           fStack_33c * (fVar61 * auVar40._12_4_ + auVar46._12_4_);
      auVar34._16_4_ =
           fStack_2f8 * (fVar62 * auVar33._16_4_ + auVar17._16_4_) +
           fStack_318 * (fVar62 * auVar56._16_4_ + fStack_158) +
           fStack_338 * (fVar62 * auVar40._16_4_ + auVar46._16_4_);
      auVar34._20_4_ =
           fStack_2f4 * (fVar63 * auVar33._20_4_ + auVar17._20_4_) +
           fStack_314 * (fVar63 * auVar56._20_4_ + fStack_154) +
           fStack_334 * (fVar63 * auVar40._20_4_ + auVar46._20_4_);
      auVar34._24_4_ =
           fStack_2f0 * (fVar64 * auVar33._24_4_ + auVar17._24_4_) +
           fStack_310 * (fVar64 * auVar56._24_4_ + fStack_150) +
           fStack_330 * (fVar64 * auVar40._24_4_ + auVar46._24_4_);
      auVar34._28_4_ =
           fStack_2ec * (fVar65 * auVar33._28_4_ + auVar17._28_4_) +
           fStack_30c * (fVar65 * auVar56._28_4_ + fStack_14c) +
           fStack_32c * (fVar65 * auVar40._28_4_ + auVar46._28_4_);
      local_228 = auVar24._0_4_;
      fStack_224 = auVar24._4_4_;
      fStack_220 = auVar24._8_4_;
      fStack_21c = auVar24._12_4_;
      fStack_218 = auVar24._16_4_;
      fStack_214 = auVar24._20_4_;
      fStack_210 = auVar24._24_4_;
      fStack_20c = auVar24._28_4_;
      local_248 = auVar29._0_4_;
      fStack_244 = auVar29._4_4_;
      fStack_240 = auVar29._8_4_;
      fStack_23c = auVar29._12_4_;
      fStack_238 = auVar29._16_4_;
      fStack_234 = auVar29._20_4_;
      fStack_230 = auVar29._24_4_;
      fStack_22c = auVar29._28_4_;
      local_2a8 = auVar25._0_4_;
      fStack_2a4 = auVar25._4_4_;
      fStack_2a0 = auVar25._8_4_;
      fStack_29c = auVar25._12_4_;
      fStack_298 = auVar25._16_4_;
      fStack_294 = auVar25._20_4_;
      fStack_290 = auVar25._24_4_;
      fStack_28c = auVar25._28_4_;
      local_188 = auVar39._0_4_;
      fStack_184 = auVar39._4_4_;
      fStack_180 = auVar39._8_4_;
      fStack_17c = auVar39._12_4_;
      fStack_178 = auVar39._16_4_;
      fStack_174 = auVar39._20_4_;
      fStack_170 = auVar39._24_4_;
      fStack_16c = auVar39._28_4_;
      local_1a8 = auVar28._0_4_;
      fStack_1a4 = auVar28._4_4_;
      fStack_1a0 = auVar28._8_4_;
      fStack_19c = auVar28._12_4_;
      fStack_198 = auVar28._16_4_;
      fStack_194 = auVar28._20_4_;
      fStack_190 = auVar28._24_4_;
      fStack_18c = auVar28._28_4_;
      local_1c8 = auVar22._0_4_;
      fStack_1c4 = auVar22._4_4_;
      fStack_1c0 = auVar22._8_4_;
      fStack_1bc = auVar22._12_4_;
      fStack_1b8 = auVar22._16_4_;
      fStack_1b4 = auVar22._20_4_;
      fStack_1b0 = auVar22._24_4_;
      fStack_1ac = auVar22._28_4_;
      local_2c8 = auVar26._0_4_;
      auVar20._0_4_ =
           (float)local_308._0_4_ * local_2c8 +
           (float)local_328._0_4_ * local_188 + (float)local_348._0_4_ * local_228;
      fStack_2c4 = auVar26._4_4_;
      auVar20._4_4_ =
           (float)local_308._4_4_ * fStack_2c4 +
           (float)local_328._4_4_ * fStack_184 + (float)local_348._4_4_ * fStack_224;
      fStack_2c0 = auVar26._8_4_;
      auVar20._8_4_ = fStack_300 * fStack_2c0 + fStack_320 * fStack_180 + fStack_340 * fStack_220;
      fStack_2bc = auVar26._12_4_;
      auVar20._12_4_ = fStack_2fc * fStack_2bc + fStack_31c * fStack_17c + fStack_33c * fStack_21c;
      fStack_2b8 = auVar26._16_4_;
      auVar23._16_4_ = fStack_2f8 * fStack_2b8 + fStack_318 * fStack_178 + fStack_338 * fStack_218;
      auVar23._0_16_ = auVar20;
      fStack_2b4 = auVar26._20_4_;
      auVar23._20_4_ = fStack_2f4 * fStack_2b4 + fStack_314 * fStack_174 + fStack_334 * fStack_214;
      fStack_2b0 = auVar26._24_4_;
      auVar23._24_4_ = fStack_2f0 * fStack_2b0 + fStack_310 * fStack_170 + fStack_330 * fStack_210;
      fStack_2ac = auVar26._28_4_;
      auVar23._28_4_ = fStack_2ec * fStack_2ac + fStack_30c * fStack_16c + fStack_32c * fStack_20c;
      auVar13._16_16_ = auVar49;
      auVar13._0_16_ = auVar41;
      auVar17 = vshufpd_avx(auVar35,auVar13,2);
      auVar13 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar34);
      auVar47 = vpermpd_avx2(auVar36,0xe9);
      auVar47 = vblendps_avx(auVar13,auVar47,7);
      auVar17 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar17);
      auVar13 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                             ,auVar47);
      auVar17 = vblendps_avx(auVar17,auVar13,0xa4);
      *(undefined1 (*) [32])(param_1 + -0x40 + lVar11) = auVar17;
      auVar2 = ___ymm_0000000000000007000000020000000000000006000000010000000000000005;
      auVar17 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar47);
      auVar47 = vshufpd_avx(auVar35,auVar35,1);
      auVar47 = vblendps_avx(auVar17,auVar47,0x92);
      *(undefined1 (*) [32])(param_1 + -0x20 + lVar11) = auVar47;
      auVar15 = ___ymm_0000000700000004000000010000000600000003000000000000000500000002;
      auVar54 = ___ymm_0000000700000007000000070000000700000006000000050000000200000001;
      local_268 = auVar32._0_4_;
      auVar27._0_4_ =
           (float)local_308._0_4_ * local_268 +
           (float)local_328._0_4_ * local_1a8 + (float)local_348._0_4_ * local_248;
      fStack_264 = auVar32._4_4_;
      auVar27._4_4_ =
           (float)local_308._4_4_ * fStack_264 +
           (float)local_328._4_4_ * fStack_1a4 + (float)local_348._4_4_ * fStack_244;
      fStack_260 = auVar32._8_4_;
      auVar27._8_4_ = fStack_300 * fStack_260 + fStack_320 * fStack_1a0 + fStack_340 * fStack_240;
      fStack_25c = auVar32._12_4_;
      auVar27._12_4_ = fStack_2fc * fStack_25c + fStack_31c * fStack_19c + fStack_33c * fStack_23c;
      fStack_258 = auVar32._16_4_;
      auVar24._16_4_ = fStack_2f8 * fStack_258 + fStack_318 * fStack_198 + fStack_338 * fStack_238;
      auVar24._0_16_ = auVar27;
      fStack_254 = auVar32._20_4_;
      auVar24._20_4_ = fStack_2f4 * fStack_254 + fStack_314 * fStack_194 + fStack_334 * fStack_234;
      fStack_250 = auVar32._24_4_;
      auVar24._24_4_ = fStack_2f0 * fStack_250 + fStack_310 * fStack_190 + fStack_330 * fStack_230;
      fStack_24c = auVar32._28_4_;
      auVar24._28_4_ = fStack_2ec * fStack_24c + fStack_30c * fStack_18c + fStack_32c * fStack_22c;
      auVar47 = vpermpd_avx2(auVar35,0xff);
      auVar17 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                             ,auVar36);
      auVar47 = vblendps_avx(auVar17,auVar47,3);
      auVar47 = vblendps_avx(auVar47,auVar34,0xe0);
      auVar47 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar47);
      *(undefined1 (*) [32])(param_1 + lVar11) = auVar47;
      local_288 = auVar30._0_4_;
      auVar26._0_4_ =
           (float)local_308._0_4_ * local_288 +
           (float)local_328._0_4_ * local_1c8 + (float)local_348._0_4_ * local_2a8;
      fStack_284 = auVar30._4_4_;
      auVar26._4_4_ =
           (float)local_308._4_4_ * fStack_284 +
           (float)local_328._4_4_ * fStack_1c4 + (float)local_348._4_4_ * fStack_2a4;
      fStack_280 = auVar30._8_4_;
      auVar26._8_4_ = fStack_300 * fStack_280 + fStack_320 * fStack_1c0 + fStack_340 * fStack_2a0;
      fStack_27c = auVar30._12_4_;
      auVar26._12_4_ = fStack_2fc * fStack_27c + fStack_31c * fStack_1bc + fStack_33c * fStack_29c;
      fStack_278 = auVar30._16_4_;
      auVar26._16_4_ = fStack_2f8 * fStack_278 + fStack_318 * fStack_1b8 + fStack_338 * fStack_298;
      fStack_274 = auVar30._20_4_;
      auVar26._20_4_ = fStack_2f4 * fStack_274 + fStack_314 * fStack_1b4 + fStack_334 * fStack_294;
      fStack_270 = auVar30._24_4_;
      auVar26._24_4_ = fStack_2f0 * fStack_270 + fStack_310 * fStack_1b0 + fStack_330 * fStack_290;
      fStack_26c = auVar30._28_4_;
      auVar26._28_4_ = fStack_2ec * fStack_26c + fStack_30c * fStack_1ac + fStack_32c * fStack_28c;
      auVar32._16_16_ = auVar27;
      auVar32._0_16_ = auVar20;
      auVar17 = vshufpd_avx(auVar23,auVar32,2);
      auVar13 = vpermps_avx2(auVar14,auVar26);
      auVar47 = vpermpd_avx2(auVar24,0xe9);
      auVar47 = vblendps_avx(auVar13,auVar47,7);
      auVar17 = vpermps_avx2(auVar19,auVar17);
      auVar13 = vpermps_avx2(auVar18,auVar47);
      auVar17 = vblendps_avx(auVar17,auVar13,0xa4);
      *(undefined1 (*) [32])(param_2 + -0x40 + lVar11) = auVar17;
      auVar17 = vpermps_avx2(auVar2,auVar47);
      auVar47 = vshufpd_avx(auVar23,auVar23,1);
      auVar47 = vblendps_avx(auVar17,auVar47,0x92);
      *(undefined1 (*) [32])(param_2 + -0x20 + lVar11) = auVar47;
      auVar47 = vpermpd_avx2(auVar23,0xff);
      auVar17 = vpermps_avx2(auVar54,auVar24);
      auVar47 = vblendps_avx(auVar17,auVar47,3);
      auVar47 = vblendps_avx(auVar47,auVar26,0xe0);
      auVar47 = vpermps_avx2(auVar15,auVar47);
      *(undefined1 (*) [32])(param_2 + lVar11) = auVar47;
      lVar11 = lVar11 + 0x60;
      pauVar8 = pauVar8 + 4;
      uVar9 = uVar9 + 8;
    } while ((int)uVar9 < (int)(uVar7 & 0xfffffff8));
    if ((int)in_stack_00000040 <= (int)uVar9) {
      return;
    }
  }
  auVar2 = ___ymm_0000000000000002000000000000000700000001000000000000000600000000;
  auVar13 = ___ymm_0000000000000003000000040000000700000000000000030000000000000003;
  auVar17 = ___ymm_0000000400000003000000020000000100000000000000000000000000000000;
  auVar54._4_4_ = uVar9;
  auVar54._0_4_ = uVar9;
  auVar54._8_4_ = uVar9;
  auVar54._12_4_ = uVar9;
  auVar54._16_4_ = uVar9;
  auVar54._20_4_ = uVar9;
  auVar54._24_4_ = uVar9;
  auVar54._28_4_ = uVar9;
  auVar47 = vpor_avx2(auVar54,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar15._4_4_ = in_stack_00000040;
  auVar15._0_4_ = in_stack_00000040;
  auVar15._8_4_ = in_stack_00000040;
  auVar15._12_4_ = in_stack_00000040;
  auVar15._16_4_ = in_stack_00000040;
  auVar15._20_4_ = in_stack_00000040;
  auVar15._24_4_ = in_stack_00000040;
  auVar15._28_4_ = in_stack_00000040;
  auVar47 = vpcmpgtd_avx2(auVar15,auVar47);
  uVar10 = (ulonglong)uVar9;
  pauVar8 = (undefined1 (*) [32])(in_stack_00000030 + uVar10 * 0x10);
  uVar7 = vmovmskps_avx(auVar47);
  if (uVar7 == 0xff) {
    auVar54 = vperm2f128_avx(*pauVar8,pauVar8[2],0x20);
    auVar15 = vperm2f128_avx(*pauVar8,pauVar8[2],0x31);
    auVar32 = vperm2f128_avx(pauVar8[1],pauVar8[3],0x20);
    auVar26 = vperm2f128_avx(pauVar8[1],pauVar8[3],0x31);
    auVar25 = vunpcklps_avx(auVar54,auVar15);
    auVar54 = vunpckhps_avx(auVar54,auVar15);
    auVar30 = vunpcklps_avx(auVar32,auVar26);
    auVar15 = vunpckhps_avx(auVar32,auVar26);
    _local_308 = vunpcklpd_avx(auVar25,auVar30);
    _local_348 = vunpckhpd_avx(auVar25,auVar30);
    _local_328 = vunpcklpd_avx(auVar54,auVar15);
    _local_368 = vunpckhpd_avx(auVar54,auVar15);
    auVar54 = *(undefined1 (*) [32])(in_stack_00000038 + uVar10 * 0xc);
    auVar15 = *(undefined1 (*) [32])(in_stack_00000038 + 0x20 + uVar10 * 0xc);
    auVar25 = *(undefined1 (*) [32])(in_stack_00000038 + 0x40 + uVar10 * 0xc);
    auVar30 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                          auVar15);
    auVar32 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                          auVar54);
    auVar30 = vpblendd_avx2(auVar32,auVar30,0x88);
    auVar32 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                          auVar15);
    auVar26 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                          auVar25);
    auVar32 = vpblendd_avx2(auVar26,auVar32,0x13);
    auVar14._16_16_ = ZEXT116(0) * auVar30._16_16_ | ZEXT116(1) * auVar32._0_16_;
    auVar14._0_16_ = ZEXT116(0) * auVar32._0_16_ | ZEXT116(1) * auVar30._0_16_;
    auVar30 = vperm2i128_avx2(auVar30,auVar32,0x31);
    auVar54 = vpblendd_avx2(auVar15,auVar54,0x24);
    auVar54 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                          auVar54);
    auVar18._16_16_ = ___xmm_00000007000000040000000100000000;
    auVar18._0_16_ = ___xmm_00000007000000040000000100000000;
    auVar15 = vpermd_avx2(auVar18,auVar25);
    auVar54 = vpblendd_avx2(auVar54,auVar15,0xe0);
  }
  else {
    _local_308 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
    _local_348 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
    _local_328 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
    _local_368 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
    auVar14 = vpgatherdd(ZEXT1232(ZEXT812(0)),auVar47);
    auVar30 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
    auVar54 = vpgatherdd(ZEXT1232(ZEXT812(0)),auVar47);
  }
  auVar42._4_4_ = __real_0000000c;
  auVar42._0_4_ = __real_0000000c;
  auVar42._8_4_ = __real_0000000c;
  auVar42._12_4_ = __real_0000000c;
  auVar42._16_4_ = __real_0000000c;
  auVar42._20_4_ = __real_0000000c;
  auVar42._24_4_ = __real_0000000c;
  auVar42._28_4_ = __real_0000000c;
  vpmulld_avx2(auVar14,auVar42);
  auVar25 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
  auVar32 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
  auVar26 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
  auVar22 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
  auVar33 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
  auVar14 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
  auVar18 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
  auVar38 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar47);
  auVar19 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
  auVar21 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
  auVar35 = vgatherdps(ZEXT832(0),auVar47);
  auVar23 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
  vpmulld_avx2(auVar30,auVar42);
  auVar30 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
  auVar36 = vgatherdps(ZEXT832(0),auVar47);
  auVar24 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
  auVar15 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
  auVar34 = vgatherdps(ZEXT832(0),auVar47);
  auVar28 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
  auVar37 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
  auVar40 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar47);
  auVar29 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
  vpmulld_avx2(auVar54,auVar42);
  auVar54 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
  auVar39 = vgatherdps(ZEXT832(0),auVar47);
  auVar42 = vgatherdps(ZEXT832(0),auVar47);
  auVar46 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
  auVar44 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
  auVar47 = vgatherdps(ZEXT832(0),auVar47);
  local_1a8 = auVar32._0_4_;
  fStack_1a4 = auVar32._4_4_;
  fStack_1a0 = auVar32._8_4_;
  fStack_19c = auVar32._12_4_;
  fStack_198 = auVar32._16_4_;
  fStack_194 = auVar32._20_4_;
  fStack_190 = auVar32._24_4_;
  fStack_18c = auVar32._28_4_;
  local_148 = auVar25._0_4_;
  fStack_144 = auVar25._4_4_;
  fStack_140 = auVar25._8_4_;
  fStack_13c = auVar25._12_4_;
  fStack_138 = auVar25._16_4_;
  fStack_134 = auVar25._20_4_;
  fStack_130 = auVar25._24_4_;
  fStack_12c = auVar25._28_4_;
  local_248 = auVar33._0_4_;
  fStack_244 = auVar33._4_4_;
  fStack_240 = auVar33._8_4_;
  fStack_23c = auVar33._12_4_;
  fStack_238 = auVar33._16_4_;
  fStack_234 = auVar33._20_4_;
  fStack_230 = auVar33._24_4_;
  fStack_22c = auVar33._28_4_;
  local_208 = auVar22._0_4_;
  fStack_204 = auVar22._4_4_;
  fStack_200 = auVar22._8_4_;
  fStack_1fc = auVar22._12_4_;
  fStack_1f8 = auVar22._16_4_;
  fStack_1f4 = auVar22._20_4_;
  fStack_1f0 = auVar22._24_4_;
  fStack_1ec = auVar22._28_4_;
  local_268 = auVar18._0_4_;
  fStack_264 = auVar18._4_4_;
  fStack_260 = auVar18._8_4_;
  fStack_25c = auVar18._12_4_;
  fStack_258 = auVar18._16_4_;
  fStack_254 = auVar18._20_4_;
  fStack_250 = auVar18._24_4_;
  fStack_24c = auVar18._28_4_;
  local_2c8 = auVar21._0_4_;
  fStack_2c4 = auVar21._4_4_;
  fStack_2c0 = auVar21._8_4_;
  fStack_2bc = auVar21._12_4_;
  fStack_2b8 = auVar21._16_4_;
  fStack_2b4 = auVar21._20_4_;
  fStack_2b0 = auVar21._24_4_;
  fStack_2ac = auVar21._28_4_;
  local_2e8 = auVar30._0_4_;
  fStack_2e4 = auVar30._4_4_;
  fStack_2e0 = auVar30._8_4_;
  fStack_2dc = auVar30._12_4_;
  fStack_2d8 = auVar30._16_4_;
  fStack_2d4 = auVar30._20_4_;
  fStack_2d0 = auVar30._24_4_;
  fStack_2cc = auVar30._28_4_;
  local_1e8 = auVar23._0_4_;
  fStack_1e4 = auVar23._4_4_;
  fStack_1e0 = auVar23._8_4_;
  fStack_1dc = auVar23._12_4_;
  fStack_1d8 = auVar23._16_4_;
  fStack_1d4 = auVar23._20_4_;
  fStack_1d0 = auVar23._24_4_;
  fStack_1cc = auVar23._28_4_;
  local_228 = auVar24._0_4_;
  fStack_224 = auVar24._4_4_;
  fStack_220 = auVar24._8_4_;
  fStack_21c = auVar24._12_4_;
  fStack_218 = auVar24._16_4_;
  fStack_214 = auVar24._20_4_;
  fStack_210 = auVar24._24_4_;
  fStack_20c = auVar24._28_4_;
  local_288 = auVar28._0_4_;
  fStack_284 = auVar28._4_4_;
  fStack_280 = auVar28._8_4_;
  fStack_27c = auVar28._12_4_;
  fStack_278 = auVar28._16_4_;
  fStack_274 = auVar28._20_4_;
  fStack_270 = auVar28._24_4_;
  fStack_26c = auVar28._28_4_;
  local_168 = auVar26._0_4_;
  fStack_164 = auVar26._4_4_;
  fStack_160 = auVar26._8_4_;
  fStack_15c = auVar26._12_4_;
  fStack_158 = auVar26._16_4_;
  fStack_154 = auVar26._20_4_;
  fStack_150 = auVar26._24_4_;
  fStack_14c = auVar26._28_4_;
  local_188 = auVar14._0_4_;
  fStack_184 = auVar14._4_4_;
  fStack_180 = auVar14._8_4_;
  fStack_17c = auVar14._12_4_;
  fStack_178 = auVar14._16_4_;
  fStack_174 = auVar14._20_4_;
  fStack_170 = auVar14._24_4_;
  fStack_16c = auVar14._28_4_;
  local_1c8 = auVar19._0_4_;
  fStack_1c4 = auVar19._4_4_;
  fStack_1c0 = auVar19._8_4_;
  fStack_1bc = auVar19._12_4_;
  fStack_1b8 = auVar19._16_4_;
  fStack_1b4 = auVar19._20_4_;
  fStack_1b0 = auVar19._24_4_;
  fStack_1ac = auVar19._28_4_;
  auVar58._0_4_ =
       (float)local_328._0_4_ * ((float)local_368._0_4_ * auVar40._0_4_ + auVar37._0_4_) +
       (float)local_308._0_4_ * ((float)local_368._0_4_ * local_1a8 + local_148) +
       (float)local_348._0_4_ * ((float)local_368._0_4_ * auVar35._0_4_ + local_2c8);
  auVar58._4_4_ =
       (float)local_328._4_4_ * ((float)local_368._4_4_ * auVar40._4_4_ + auVar37._4_4_) +
       (float)local_308._4_4_ * ((float)local_368._4_4_ * fStack_1a4 + fStack_144) +
       (float)local_348._4_4_ * ((float)local_368._4_4_ * auVar35._4_4_ + fStack_2c4);
  auVar58._8_4_ =
       fStack_320 * (fStack_360 * auVar40._8_4_ + auVar37._8_4_) +
       fStack_300 * (fStack_360 * fStack_1a0 + fStack_140) +
       fStack_340 * (fStack_360 * auVar35._8_4_ + fStack_2c0);
  auVar58._12_4_ =
       fStack_31c * (fStack_35c * auVar40._12_4_ + auVar37._12_4_) +
       fStack_2fc * (fStack_35c * fStack_19c + fStack_13c) +
       fStack_33c * (fStack_35c * auVar35._12_4_ + fStack_2bc);
  auVar48._16_4_ =
       fStack_318 * (fStack_358 * auVar40._16_4_ + auVar37._16_4_) +
       fStack_2f8 * (fStack_358 * fStack_198 + fStack_138) +
       fStack_338 * (fStack_358 * auVar35._16_4_ + fStack_2b8);
  auVar48._0_16_ = auVar58;
  auVar48._20_4_ =
       fStack_314 * (fStack_354 * auVar40._20_4_ + auVar37._20_4_) +
       fStack_2f4 * (fStack_354 * fStack_194 + fStack_134) +
       fStack_334 * (fStack_354 * auVar35._20_4_ + fStack_2b4);
  auVar48._24_4_ =
       fStack_310 * (fStack_350 * auVar40._24_4_ + auVar37._24_4_) +
       fStack_2f0 * (fStack_350 * fStack_190 + fStack_130) +
       fStack_330 * (fStack_350 * auVar35._24_4_ + fStack_2b0);
  auVar48._28_4_ =
       fStack_30c * (fStack_34c * auVar40._28_4_ + auVar37._28_4_) +
       fStack_2ec * (fStack_34c * fStack_18c + fStack_12c) +
       fStack_32c * (fStack_34c * auVar35._28_4_ + fStack_2ac);
  auVar43._0_4_ =
       (float)local_328._0_4_ * ((float)local_368._0_4_ * auVar39._0_4_ + auVar54._0_4_) +
       (float)local_308._0_4_ * ((float)local_368._0_4_ * local_248 + local_208) +
       (float)local_348._0_4_ * ((float)local_368._0_4_ * auVar36._0_4_ + local_2e8);
  auVar43._4_4_ =
       (float)local_328._4_4_ * ((float)local_368._4_4_ * auVar39._4_4_ + auVar54._4_4_) +
       (float)local_308._4_4_ * ((float)local_368._4_4_ * fStack_244 + fStack_204) +
       (float)local_348._4_4_ * ((float)local_368._4_4_ * auVar36._4_4_ + fStack_2e4);
  auVar43._8_4_ =
       fStack_320 * (fStack_360 * auVar39._8_4_ + auVar54._8_4_) +
       fStack_300 * (fStack_360 * fStack_240 + fStack_200) +
       fStack_340 * (fStack_360 * auVar36._8_4_ + fStack_2e0);
  auVar43._12_4_ =
       fStack_31c * (fStack_35c * auVar39._12_4_ + auVar54._12_4_) +
       fStack_2fc * (fStack_35c * fStack_23c + fStack_1fc) +
       fStack_33c * (fStack_35c * auVar36._12_4_ + fStack_2dc);
  auVar40._16_4_ =
       fStack_318 * (fStack_358 * auVar39._16_4_ + auVar54._16_4_) +
       fStack_2f8 * (fStack_358 * fStack_238 + fStack_1f8) +
       fStack_338 * (fStack_358 * auVar36._16_4_ + fStack_2d8);
  auVar40._0_16_ = auVar43;
  auVar40._20_4_ =
       fStack_314 * (fStack_354 * auVar39._20_4_ + auVar54._20_4_) +
       fStack_2f4 * (fStack_354 * fStack_234 + fStack_1f4) +
       fStack_334 * (fStack_354 * auVar36._20_4_ + fStack_2d4);
  auVar40._24_4_ =
       fStack_310 * (fStack_350 * auVar39._24_4_ + auVar54._24_4_) +
       fStack_2f0 * (fStack_350 * fStack_230 + fStack_1f0) +
       fStack_330 * (fStack_350 * auVar36._24_4_ + fStack_2d0);
  auVar40._28_4_ =
       fStack_30c * (fStack_34c * auVar39._28_4_ + auVar54._28_4_) +
       fStack_2ec * (fStack_34c * fStack_22c + fStack_1ec) +
       fStack_32c * (fStack_34c * auVar36._28_4_ + fStack_2cc);
  auVar50._0_4_ =
       (float)local_328._0_4_ * ((float)local_368._0_4_ * auVar44._0_4_ + auVar46._0_4_) +
       (float)local_308._0_4_ * ((float)local_368._0_4_ * auVar38._0_4_ + local_268) +
       (float)local_348._0_4_ * ((float)local_368._0_4_ * auVar34._0_4_ + auVar15._0_4_);
  auVar50._4_4_ =
       (float)local_328._4_4_ * ((float)local_368._4_4_ * auVar44._4_4_ + auVar46._4_4_) +
       (float)local_308._4_4_ * ((float)local_368._4_4_ * auVar38._4_4_ + fStack_264) +
       (float)local_348._4_4_ * ((float)local_368._4_4_ * auVar34._4_4_ + auVar15._4_4_);
  auVar50._8_4_ =
       fStack_320 * (fStack_360 * auVar44._8_4_ + auVar46._8_4_) +
       fStack_300 * (fStack_360 * auVar38._8_4_ + fStack_260) +
       fStack_340 * (fStack_360 * auVar34._8_4_ + auVar15._8_4_);
  auVar50._12_4_ =
       fStack_31c * (fStack_35c * auVar44._12_4_ + auVar46._12_4_) +
       fStack_2fc * (fStack_35c * auVar38._12_4_ + fStack_25c) +
       fStack_33c * (fStack_35c * auVar34._12_4_ + auVar15._12_4_);
  auVar39._16_4_ =
       fStack_318 * (fStack_358 * auVar44._16_4_ + auVar46._16_4_) +
       fStack_2f8 * (fStack_358 * auVar38._16_4_ + fStack_258) +
       fStack_338 * (fStack_358 * auVar34._16_4_ + auVar15._16_4_);
  auVar39._0_16_ = auVar50;
  auVar39._20_4_ =
       fStack_314 * (fStack_354 * auVar44._20_4_ + auVar46._20_4_) +
       fStack_2f4 * (fStack_354 * auVar38._20_4_ + fStack_254) +
       fStack_334 * (fStack_354 * auVar34._20_4_ + auVar15._20_4_);
  auVar39._24_4_ =
       fStack_310 * (fStack_350 * auVar44._24_4_ + auVar46._24_4_) +
       fStack_2f0 * (fStack_350 * auVar38._24_4_ + fStack_250) +
       fStack_330 * (fStack_350 * auVar34._24_4_ + auVar15._24_4_);
  auVar39._28_4_ =
       fStack_30c * (fStack_34c * auVar44._28_4_ + auVar46._28_4_) +
       fStack_2ec * (fStack_34c * auVar38._28_4_ + fStack_24c) +
       fStack_32c * (fStack_34c * auVar34._28_4_ + auVar15._28_4_);
  local_2a8 = auVar29._0_4_;
  auVar31._0_4_ =
       (float)local_328._0_4_ * local_2a8 +
       (float)local_308._0_4_ * local_168 + (float)local_348._0_4_ * local_1e8;
  fStack_2a4 = auVar29._4_4_;
  auVar31._4_4_ =
       (float)local_328._4_4_ * fStack_2a4 +
       (float)local_308._4_4_ * fStack_164 + (float)local_348._4_4_ * fStack_1e4;
  fStack_2a0 = auVar29._8_4_;
  auVar31._8_4_ = fStack_320 * fStack_2a0 + fStack_300 * fStack_160 + fStack_340 * fStack_1e0;
  fStack_29c = auVar29._12_4_;
  auVar31._12_4_ = fStack_31c * fStack_29c + fStack_2fc * fStack_15c + fStack_33c * fStack_1dc;
  fStack_298 = auVar29._16_4_;
  auVar37._16_4_ = fStack_318 * fStack_298 + fStack_2f8 * fStack_158 + fStack_338 * fStack_1d8;
  auVar37._0_16_ = auVar31;
  fStack_294 = auVar29._20_4_;
  auVar37._20_4_ = fStack_314 * fStack_294 + fStack_2f4 * fStack_154 + fStack_334 * fStack_1d4;
  fStack_290 = auVar29._24_4_;
  auVar37._24_4_ = fStack_310 * fStack_290 + fStack_2f0 * fStack_150 + fStack_330 * fStack_1d0;
  fStack_28c = auVar29._28_4_;
  auVar37._28_4_ = fStack_30c * fStack_28c + fStack_2ec * fStack_14c + fStack_32c * fStack_1cc;
  auVar16._0_4_ =
       (float)local_328._0_4_ * auVar42._0_4_ +
       (float)local_308._0_4_ * local_188 + (float)local_348._0_4_ * local_228;
  auVar16._4_4_ =
       (float)local_328._4_4_ * auVar42._4_4_ +
       (float)local_308._4_4_ * fStack_184 + (float)local_348._4_4_ * fStack_224;
  auVar16._8_4_ = fStack_320 * auVar42._8_4_ + fStack_300 * fStack_180 + fStack_340 * fStack_220;
  auVar16._12_4_ = fStack_31c * auVar42._12_4_ + fStack_2fc * fStack_17c + fStack_33c * fStack_21c;
  auVar29._16_4_ = fStack_318 * auVar42._16_4_ + fStack_2f8 * fStack_178 + fStack_338 * fStack_218;
  auVar29._0_16_ = auVar16;
  auVar29._20_4_ = fStack_314 * auVar42._20_4_ + fStack_2f4 * fStack_174 + fStack_334 * fStack_214;
  auVar29._24_4_ = fStack_310 * auVar42._24_4_ + fStack_2f0 * fStack_170 + fStack_330 * fStack_210;
  auVar29._28_4_ = fStack_30c * auVar42._28_4_ + fStack_2ec * fStack_16c + fStack_32c * fStack_20c;
  auVar12._0_4_ =
       (float)local_328._0_4_ * auVar47._0_4_ +
       (float)local_308._0_4_ * local_1c8 + (float)local_348._0_4_ * local_288;
  auVar12._4_4_ =
       (float)local_328._4_4_ * auVar47._4_4_ +
       (float)local_308._4_4_ * fStack_1c4 + (float)local_348._4_4_ * fStack_284;
  auVar12._8_4_ = fStack_320 * auVar47._8_4_ + fStack_300 * fStack_1c0 + fStack_340 * fStack_280;
  auVar12._12_4_ = fStack_31c * auVar47._12_4_ + fStack_2fc * fStack_1bc + fStack_33c * fStack_27c;
  auVar19._16_4_ = fStack_318 * auVar47._16_4_ + fStack_2f8 * fStack_1b8 + fStack_338 * fStack_278;
  auVar19._0_16_ = auVar12;
  auVar19._20_4_ = fStack_314 * auVar47._20_4_ + fStack_2f4 * fStack_1b4 + fStack_334 * fStack_274;
  auVar19._24_4_ = fStack_310 * auVar47._24_4_ + fStack_2f0 * fStack_1b0 + fStack_330 * fStack_270;
  auVar19._28_4_ = fStack_30c * auVar47._28_4_ + fStack_2ec * fStack_1ac + fStack_32c * fStack_26c;
  pauVar8 = (undefined1 (*) [32])(param_1 + uVar10 * 0xc);
  cVar6 = (char)uVar7;
  auVar27 = auVar48._16_16_;
  auVar20 = auVar37._16_16_;
  if (cVar6 == -1) {
    auVar38._16_16_ = auVar43;
    auVar38._0_16_ = auVar58;
    auVar54 = vshufpd_avx(auVar48,auVar38,2);
    auVar15 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000,
                           auVar39);
    auVar47 = vpermpd_avx2(auVar40,0xe9);
    auVar47 = vblendps_avx(auVar15,auVar47,7);
    auVar15 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003,
                           auVar47);
    auVar54 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000,
                           auVar54);
    auVar54 = vblendps_avx(auVar54,auVar15,0xa4);
    *pauVar8 = auVar54;
    auVar15 = ___ymm_0000000000000007000000020000000000000006000000010000000000000005;
    auVar54 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005,
                           auVar47);
    auVar47 = vshufpd_avx(auVar48,auVar48,1);
    auVar47 = vblendps_avx(auVar54,auVar47,0x92);
    pauVar8[1] = auVar47;
    auVar30 = ___ymm_0000000700000004000000010000000600000003000000000000000500000002;
    auVar25 = ___ymm_0000000700000007000000070000000700000006000000050000000200000001;
    auVar54 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001,
                           auVar40);
    auVar47 = vpermpd_avx2(auVar48,0xff);
    auVar47 = vblendps_avx(auVar54,auVar47,3);
    auVar47 = vblendps_avx(auVar47,auVar39,0xe0);
    auVar47 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002,
                           auVar47);
    pauVar8[2] = auVar47;
    auVar44._16_16_ = auVar16;
    auVar44._0_16_ = auVar31;
    auVar54 = vshufpd_avx(auVar37,auVar44,2);
    auVar17 = vpermps_avx2(auVar17,auVar19);
    auVar47 = vpermpd_avx2(auVar29,0xe9);
    auVar47 = vblendps_avx(auVar17,auVar47,7);
    auVar17 = vpermps_avx2(auVar13,auVar47);
    auVar13 = vpermps_avx2(auVar2,auVar54);
    auVar17 = vblendps_avx(auVar13,auVar17,0xa4);
    *(undefined1 (*) [32])(param_2 + uVar10 * 0xc) = auVar17;
    auVar17 = vpermps_avx2(auVar15,auVar47);
    auVar47 = vshufpd_avx(auVar37,auVar37,1);
    auVar47 = vblendps_avx(auVar17,auVar47,0x92);
    *(undefined1 (*) [32])(param_2 + 0x20 + uVar10 * 0xc) = auVar47;
    auVar17 = vpermps_avx2(auVar25,auVar29);
    auVar47 = vpermpd_avx2(auVar37,0xff);
    auVar47 = vblendps_avx(auVar17,auVar47,3);
    auVar47 = vblendps_avx(auVar47,auVar19,0xe0);
    auVar47 = vpermps_avx2(auVar30,auVar47);
    *(undefined1 (*) [32])(param_2 + 0x40 + uVar10 * 0xc) = auVar47;
  }
  else {
    auVar45 = auVar40._16_16_;
    auVar52 = auVar39._16_16_;
    auVar49 = auVar29._16_16_;
    auVar41 = auVar19._16_16_;
    if ((uVar7 & 1) != 0) {
      *(float *)*pauVar8 = auVar58._0_4_;
    }
    if ((uVar7 & 2) != 0) {
      uVar1 = vextractps_avx(auVar58,1);
      *(undefined4 *)(*pauVar8 + 0xc) = uVar1;
    }
    if ((uVar7 & 4) != 0) {
      uVar1 = vextractps_avx(auVar58,2);
      *(undefined4 *)(*pauVar8 + 0x18) = uVar1;
    }
    if ((uVar7 & 8) != 0) {
      uVar1 = vextractps_avx(auVar58,3);
      *(undefined4 *)(pauVar8[1] + 4) = uVar1;
    }
    if ((uVar7 & 0x10) != 0) {
      *(float *)(pauVar8[1] + 0x10) = auVar48._16_4_;
    }
    if ((uVar7 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar27,1);
      *(undefined4 *)(pauVar8[1] + 0x1c) = uVar1;
    }
    if ((uVar7 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar27,2);
      *(undefined4 *)(pauVar8[2] + 8) = uVar1;
    }
    if (cVar6 < '\0') {
      uVar1 = vextractps_avx(auVar27,3);
      *(undefined4 *)(pauVar8[2] + 0x14) = uVar1;
    }
    if ((uVar7 & 1) != 0) {
      *(float *)(*pauVar8 + 4) = auVar43._0_4_;
    }
    if ((uVar7 & 2) != 0) {
      uVar1 = vextractps_avx(auVar43,1);
      *(undefined4 *)(*pauVar8 + 0x10) = uVar1;
    }
    if ((uVar7 & 4) != 0) {
      uVar1 = vextractps_avx(auVar43,2);
      *(undefined4 *)(*pauVar8 + 0x1c) = uVar1;
    }
    if ((uVar7 & 8) != 0) {
      uVar1 = vextractps_avx(auVar43,3);
      *(undefined4 *)(pauVar8[1] + 8) = uVar1;
    }
    if ((uVar7 & 0x10) != 0) {
      *(float *)(pauVar8[1] + 0x14) = auVar40._16_4_;
    }
    if ((uVar7 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar45,1);
      *(undefined4 *)pauVar8[2] = uVar1;
    }
    if ((uVar7 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar45,2);
      *(undefined4 *)(pauVar8[2] + 0xc) = uVar1;
    }
    if (cVar6 < '\0') {
      uVar1 = vextractps_avx(auVar45,3);
      *(undefined4 *)(pauVar8[2] + 0x18) = uVar1;
    }
    if ((uVar7 & 1) != 0) {
      *(float *)(*pauVar8 + 8) = auVar50._0_4_;
    }
    if ((uVar7 & 2) != 0) {
      uVar1 = vextractps_avx(auVar50,1);
      *(undefined4 *)(*pauVar8 + 0x14) = uVar1;
    }
    if ((uVar7 & 4) != 0) {
      uVar1 = vextractps_avx(auVar50,2);
      *(undefined4 *)pauVar8[1] = uVar1;
    }
    if ((uVar7 & 8) != 0) {
      uVar1 = vextractps_avx(auVar50,3);
      *(undefined4 *)(pauVar8[1] + 0xc) = uVar1;
    }
    if ((uVar7 & 0x10) != 0) {
      *(float *)(pauVar8[1] + 0x18) = auVar39._16_4_;
    }
    if ((uVar7 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar52,1);
      *(undefined4 *)(pauVar8[2] + 4) = uVar1;
    }
    if ((uVar7 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar52,2);
      *(undefined4 *)(pauVar8[2] + 0x10) = uVar1;
    }
    if (cVar6 < '\0') {
      uVar1 = vextractps_avx(auVar52,3);
      *(undefined4 *)(pauVar8[2] + 0x1c) = uVar1;
    }
    uVar3 = param_2 + uVar10 * 0xc;
    if ((uVar7 & 1) != 0) {
      *(float *)uVar3 = auVar31._0_4_;
    }
    if ((uVar7 & 2) != 0) {
      fVar57 = (float)vextractps_avx(auVar31,1);
      *(float *)(uVar3 + 0xc) = fVar57;
    }
    if ((uVar7 & 4) != 0) {
      fVar57 = (float)vextractps_avx(auVar31,2);
      *(float *)(uVar3 + 0x18) = fVar57;
    }
    if ((uVar7 & 8) != 0) {
      fVar57 = (float)vextractps_avx(auVar31,3);
      *(float *)(uVar3 + 0x24) = fVar57;
    }
    if ((uVar7 & 0x10) != 0) {
      *(float *)(uVar3 + 0x30) = auVar37._16_4_;
    }
    if ((uVar7 & 0x20) != 0) {
      fVar57 = (float)vextractps_avx(auVar20,1);
      *(float *)(uVar3 + 0x3c) = fVar57;
    }
    if ((uVar7 & 0x40) != 0) {
      fVar57 = (float)vextractps_avx(auVar20,2);
      *(float *)(uVar3 + 0x48) = fVar57;
    }
    if (cVar6 < '\0') {
      fVar57 = (float)vextractps_avx(auVar20,3);
      *(float *)(uVar3 + 0x54) = fVar57;
    }
    if ((uVar7 & 1) != 0) {
      *(float *)(uVar3 + 4) = auVar16._0_4_;
    }
    if ((uVar7 & 2) != 0) {
      fVar57 = (float)vextractps_avx(auVar16,1);
      *(float *)(uVar3 + 0x10) = fVar57;
    }
    if ((uVar7 & 4) != 0) {
      fVar57 = (float)vextractps_avx(auVar16,2);
      *(float *)(uVar3 + 0x1c) = fVar57;
    }
    if ((uVar7 & 8) != 0) {
      fVar57 = (float)vextractps_avx(auVar16,3);
      *(float *)(uVar3 + 0x28) = fVar57;
    }
    if ((uVar7 & 0x10) != 0) {
      *(float *)(uVar3 + 0x34) = auVar29._16_4_;
    }
    if ((uVar7 & 0x20) != 0) {
      fVar57 = (float)vextractps_avx(auVar49,1);
      *(float *)(uVar3 + 0x40) = fVar57;
    }
    if ((uVar7 & 0x40) != 0) {
      fVar57 = (float)vextractps_avx(auVar49,2);
      *(float *)(uVar3 + 0x4c) = fVar57;
    }
    if (cVar6 < '\0') {
      fVar57 = (float)vextractps_avx(auVar49,3);
      *(float *)(uVar3 + 0x58) = fVar57;
    }
    if ((uVar7 & 1) != 0) {
      *(float *)(uVar3 + 8) = auVar12._0_4_;
    }
    if ((uVar7 & 2) != 0) {
      fVar57 = (float)vextractps_avx(auVar12,1);
      *(float *)(uVar3 + 0x14) = fVar57;
    }
    if ((uVar7 & 4) != 0) {
      fVar57 = (float)vextractps_avx(auVar12,2);
      *(float *)(uVar3 + 0x20) = fVar57;
    }
    if ((uVar7 & 8) != 0) {
      fVar57 = (float)vextractps_avx(auVar12,3);
      *(float *)(uVar3 + 0x2c) = fVar57;
    }
    if ((uVar7 & 0x10) != 0) {
      *(float *)(uVar3 + 0x38) = auVar19._16_4_;
    }
    if ((uVar7 & 0x20) != 0) {
      fVar57 = (float)vextractps_avx(auVar41,1);
      *(float *)(uVar3 + 0x44) = fVar57;
    }
    if ((uVar7 & 0x40) != 0) {
      fVar57 = (float)vextractps_avx(auVar41,2);
      *(float *)(uVar3 + 0x50) = fVar57;
    }
    if (cVar6 < '\0') {
      fVar57 = (float)vextractps_avx(auVar41,3);
      *(float *)(uVar3 + 0x5c) = fVar57;
    }
  }
  return;
}

// ApplyMultiResConstraints_avx2 @ 1405a14b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyMultiResConstraints_avx2
               (undefined1 (*param_1) [32],undefined1 (*param_2) [32],undefined1 (*param_3) [32],
               undefined1 (*param_4) [32],float param_5,float param_6,float param_7,uint param_8)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  undefined1 (*pauVar5) [32];
  undefined1 (*pauVar6) [32];
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 (*pauVar10) [32];
  undefined1 (*pauVar11) [32];
  undefined1 auVar12 [16];
  undefined1 auVar13 [32];
  undefined1 auVar15 [16];
  undefined1 auVar14 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [16];
  undefined1 auVar30 [32];
  undefined1 auVar33 [16];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [16];
  undefined1 auVar37 [16];
  undefined1 auVar36 [32];
  undefined1 auVar38 [16];
  undefined1 auVar39 [32];
  undefined1 auVar40 [16];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  
  uVar4 = param_8 + 7;
  if (-1 < (int)param_8) {
    uVar4 = param_8;
  }
  if ((int)(uVar4 & 0xfffffff8) < 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    pauVar5 = param_2;
    pauVar6 = param_1;
    pauVar10 = param_3;
    pauVar11 = param_4;
    do {
      auVar20 = *pauVar6;
      auVar28 = pauVar6[1];
      auVar39 = pauVar6[2];
      auVar17 = pauVar6[3];
      auVar18 = vperm2f128_avx(auVar20,auVar39,0x20);
      auVar14 = vperm2f128_avx(auVar20,auVar39,0x31);
      auVar42 = vperm2f128_avx(auVar28,auVar17,0x20);
      auVar16 = vperm2f128_avx(auVar28,auVar17,0x31);
      auVar24 = vunpcklps_avx(auVar18,auVar14);
      auVar18 = vunpckhps_avx(auVar18,auVar14);
      auVar36 = vunpcklps_avx(auVar42,auVar16);
      auVar14 = vunpckhps_avx(auVar42,auVar16);
      auVar42 = vunpcklpd_avx(auVar24,auVar36);
      auVar24 = vunpckhpd_avx(auVar24,auVar36);
      auVar36 = vunpcklpd_avx(auVar18,auVar14);
      auVar14 = vunpckhpd_avx(auVar18,auVar14);
      auVar18 = vcmpps_avx(ZEXT832(0) << 0x20,auVar14,1);
      uVar9 = vmovmskps_avx(auVar18);
      if (uVar9 != 0) {
        cVar3 = (char)uVar9;
        if (cVar3 == -1) {
          auVar16 = pauVar5[1];
          auVar44 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                 ,auVar16);
          auVar26 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                 ,*pauVar5);
          auVar44 = vblendps_avx(auVar26,auVar44,0x88);
          auVar26 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                 ,auVar16);
          auVar13 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                 ,pauVar5[2]);
          auVar26 = vblendps_avx(auVar13,auVar26,0x13);
          auVar30._16_16_ = auVar26._0_16_;
          auVar30._0_16_ = auVar44._0_16_;
          auVar41 = vperm2f128_avx(auVar44,auVar26,0x31);
          auVar16 = vblendps_avx(auVar16,*pauVar5,0x24);
          auVar16 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                 ,auVar16);
          auVar44 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                 ,pauVar5[2]);
          auVar44 = vblendps_avx(auVar16,auVar44,0xe0);
          auVar16 = pauVar10[1];
          auVar26 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                 ,auVar16);
          auVar13 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                 ,*pauVar10);
          auVar26 = vblendps_avx(auVar13,auVar26,0x88);
          auVar13 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                 ,auVar16);
          auVar27 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                 ,pauVar10[2]);
          auVar13 = vblendps_avx(auVar27,auVar13,0x13);
          auVar45._16_16_ = auVar13._0_16_;
          auVar45._0_16_ = auVar26._0_16_;
          auVar22 = vperm2f128_avx(auVar26,auVar13,0x31);
          auVar16 = vblendps_avx(auVar16,*pauVar10,0x24);
          auVar16 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                 ,auVar16);
          auVar26 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                 ,pauVar10[2]);
          auVar26 = vblendps_avx(auVar16,auVar26,0xe0);
          auVar16 = pauVar11[1];
          auVar13 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                 ,auVar16);
          auVar27 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                 ,*pauVar11);
          auVar13 = vblendps_avx(auVar27,auVar13,0x88);
          auVar27 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                 ,auVar16);
          auVar23 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                 ,pauVar11[2]);
          auVar27 = vblendps_avx(auVar23,auVar27,0x13);
          auVar23._16_16_ = auVar27._0_16_;
          auVar23._0_16_ = auVar13._0_16_;
          auVar13 = vperm2f128_avx(auVar13,auVar27,0x31);
          auVar16 = vblendps_avx(auVar16,*pauVar11,0x24);
          auVar16 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                 ,auVar16);
          auVar27 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                 ,pauVar11[2]);
          auVar16 = vblendps_avx(auVar16,auVar27,0xe0);
        }
        else {
          auVar30 = vgatherdps(ZEXT832(0) << 0x20,auVar18);
          auVar41 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar18);
          auVar44 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar18);
          auVar45 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar18);
          auVar22 = vgatherdps(ZEXT832(0) << 0x20,auVar18);
          auVar26 = vgatherdps(ZEXT832(0) << 0x20,auVar18);
          auVar23 = vgatherdps(ZEXT832(0) << 0x20,auVar18);
          auVar13 = vgatherdps(ZEXT832(0),auVar18);
          auVar16 = vgatherdps(ZEXT832(0),auVar18);
        }
        auVar27 = vsubps_avx(auVar42,auVar45);
        auVar22 = vsubps_avx(auVar24,auVar22);
        auVar26 = vsubps_avx(auVar36,auVar26);
        auVar19._0_4_ = -(param_6 * auVar27._0_4_) + auVar42._0_4_;
        auVar19._4_4_ = -(param_6 * auVar27._4_4_) + auVar42._4_4_;
        auVar19._8_4_ = -(param_6 * auVar27._8_4_) + auVar42._8_4_;
        auVar19._12_4_ = -(param_6 * auVar27._12_4_) + auVar42._12_4_;
        auVar19._16_4_ = -(param_6 * auVar27._16_4_) + auVar42._16_4_;
        auVar19._20_4_ = -(param_6 * auVar27._20_4_) + auVar42._20_4_;
        auVar19._24_4_ = -(param_6 * auVar27._24_4_) + auVar42._24_4_;
        auVar19._28_4_ = -(param_6 * auVar27._28_4_) + auVar42._28_4_;
        auVar42._0_4_ = -(param_6 * auVar22._0_4_) + auVar24._0_4_;
        auVar42._4_4_ = -(param_6 * auVar22._4_4_) + auVar24._4_4_;
        auVar42._8_4_ = -(param_6 * auVar22._8_4_) + auVar24._8_4_;
        auVar42._12_4_ = -(param_6 * auVar22._12_4_) + auVar24._12_4_;
        auVar42._16_4_ = -(param_6 * auVar22._16_4_) + auVar24._16_4_;
        auVar42._20_4_ = -(param_6 * auVar22._20_4_) + auVar24._20_4_;
        auVar42._24_4_ = -(param_6 * auVar22._24_4_) + auVar24._24_4_;
        auVar42._28_4_ = -(param_6 * auVar22._28_4_) + auVar24._28_4_;
        auVar27._0_4_ = -(param_6 * auVar26._0_4_) + auVar36._0_4_;
        auVar27._4_4_ = -(param_6 * auVar26._4_4_) + auVar36._4_4_;
        auVar27._8_4_ = -(param_6 * auVar26._8_4_) + auVar36._8_4_;
        auVar27._12_4_ = -(param_6 * auVar26._12_4_) + auVar36._12_4_;
        auVar27._16_4_ = -(param_6 * auVar26._16_4_) + auVar36._16_4_;
        auVar27._20_4_ = -(param_6 * auVar26._20_4_) + auVar36._20_4_;
        auVar27._24_4_ = -(param_6 * auVar26._24_4_) + auVar36._24_4_;
        auVar27._28_4_ = -(param_6 * auVar26._28_4_) + auVar36._28_4_;
        auVar24 = vmaskmovps_avx(auVar18,auVar19);
        auVar42 = vmaskmovps_avx(auVar18,auVar42);
        auVar36 = vmaskmovps_avx(auVar18,auVar27);
        auVar26 = vsubps_avx(auVar24,auVar30);
        auVar27 = vsubps_avx(auVar42,auVar41);
        auVar44 = vsubps_avx(auVar36,auVar44);
        auVar41._0_4_ = -(param_7 * (-(param_5 * auVar23._0_4_) + auVar26._0_4_)) + auVar24._0_4_;
        auVar41._4_4_ = -(param_7 * (-(param_5 * auVar23._4_4_) + auVar26._4_4_)) + auVar24._4_4_;
        auVar41._8_4_ = -(param_7 * (-(param_5 * auVar23._8_4_) + auVar26._8_4_)) + auVar24._8_4_;
        auVar41._12_4_ =
             -(param_7 * (-(param_5 * auVar23._12_4_) + auVar26._12_4_)) + auVar24._12_4_;
        auVar41._16_4_ =
             -(param_7 * (-(param_5 * auVar23._16_4_) + auVar26._16_4_)) + auVar24._16_4_;
        auVar41._20_4_ =
             -(param_7 * (-(param_5 * auVar23._20_4_) + auVar26._20_4_)) + auVar24._20_4_;
        auVar41._24_4_ =
             -(param_7 * (-(param_5 * auVar23._24_4_) + auVar26._24_4_)) + auVar24._24_4_;
        auVar41._28_4_ =
             -(param_7 * (-(param_5 * auVar23._28_4_) + auVar26._28_4_)) + auVar24._28_4_;
        auVar26._0_4_ = -(param_7 * (-(param_5 * auVar13._0_4_) + auVar27._0_4_)) + auVar42._0_4_;
        auVar26._4_4_ = -(param_7 * (-(param_5 * auVar13._4_4_) + auVar27._4_4_)) + auVar42._4_4_;
        auVar26._8_4_ = -(param_7 * (-(param_5 * auVar13._8_4_) + auVar27._8_4_)) + auVar42._8_4_;
        auVar26._12_4_ =
             -(param_7 * (-(param_5 * auVar13._12_4_) + auVar27._12_4_)) + auVar42._12_4_;
        auVar26._16_4_ =
             -(param_7 * (-(param_5 * auVar13._16_4_) + auVar27._16_4_)) + auVar42._16_4_;
        auVar26._20_4_ =
             -(param_7 * (-(param_5 * auVar13._20_4_) + auVar27._20_4_)) + auVar42._20_4_;
        auVar26._24_4_ =
             -(param_7 * (-(param_5 * auVar13._24_4_) + auVar27._24_4_)) + auVar42._24_4_;
        auVar26._28_4_ =
             -(param_7 * (-(param_5 * auVar13._28_4_) + auVar27._28_4_)) + auVar42._28_4_;
        auVar13._0_4_ = -(param_7 * (-(param_5 * auVar16._0_4_) + auVar44._0_4_)) + auVar36._0_4_;
        auVar13._4_4_ = -(param_7 * (-(param_5 * auVar16._4_4_) + auVar44._4_4_)) + auVar36._4_4_;
        auVar13._8_4_ = -(param_7 * (-(param_5 * auVar16._8_4_) + auVar44._8_4_)) + auVar36._8_4_;
        auVar13._12_4_ =
             -(param_7 * (-(param_5 * auVar16._12_4_) + auVar44._12_4_)) + auVar36._12_4_;
        auVar13._16_4_ =
             -(param_7 * (-(param_5 * auVar16._16_4_) + auVar44._16_4_)) + auVar36._16_4_;
        auVar13._20_4_ =
             -(param_7 * (-(param_5 * auVar16._20_4_) + auVar44._20_4_)) + auVar36._20_4_;
        auVar13._24_4_ =
             -(param_7 * (-(param_5 * auVar16._24_4_) + auVar44._24_4_)) + auVar36._24_4_;
        auVar13._28_4_ =
             -(param_7 * (-(param_5 * auVar16._28_4_) + auVar44._28_4_)) + auVar36._28_4_;
        auVar24 = vmaskmovps_avx(auVar18,auVar41);
        auVar42 = vmaskmovps_avx(auVar18,auVar26);
        auVar18 = vmaskmovps_avx(auVar18,auVar13);
        if (cVar3 == -1) {
          auVar20 = vunpcklps_avx(auVar24,auVar42);
          auVar28 = vunpcklps_avx(auVar18,auVar14);
          auVar17 = vunpcklpd_avx(auVar20,auVar28);
          auVar20 = vunpckhpd_avx(auVar20,auVar28);
          auVar28 = vunpckhps_avx(auVar24,auVar42);
          auVar39 = vunpckhps_avx(auVar18,auVar14);
          auVar18 = vunpcklpd_avx(auVar28,auVar39);
          auVar24._16_16_ = auVar20._0_16_;
          auVar24._0_16_ = auVar17._0_16_;
          *pauVar6 = auVar24;
          auVar28 = vunpckhpd_avx(auVar28,auVar39);
          auVar39._16_16_ = auVar28._0_16_;
          auVar39._0_16_ = auVar18._0_16_;
          pauVar6[1] = auVar39;
          auVar20 = vperm2f128_avx(auVar17,auVar20,0x31);
          pauVar6[2] = auVar20;
          auVar20 = vperm2f128_avx(auVar18,auVar28,0x31);
          pauVar6[3] = auVar20;
        }
        else {
          if ((uVar9 & 1) != 0) {
            *(int *)*pauVar6 = auVar24._0_4_;
          }
          auVar12 = auVar24._0_16_;
          auVar15 = auVar24._16_16_;
          auVar29 = auVar42._0_16_;
          auVar33 = auVar42._16_16_;
          auVar35 = auVar18._0_16_;
          auVar37 = auVar18._16_16_;
          if ((uVar9 & 2) != 0) {
            uVar1 = vextractps_avx(auVar12,1);
            *(undefined4 *)(*pauVar6 + 0x10) = uVar1;
          }
          if ((uVar9 & 4) != 0) {
            uVar1 = vextractps_avx(auVar12,2);
            *(undefined4 *)pauVar6[1] = uVar1;
          }
          if ((uVar9 & 8) != 0) {
            uVar1 = vextractps_avx(auVar12,3);
            *(undefined4 *)(pauVar6[1] + 0x10) = uVar1;
          }
          if ((uVar9 & 0x10) != 0) {
            *(int *)pauVar6[2] = auVar24._16_4_;
          }
          if ((uVar9 & 0x20) != 0) {
            uVar1 = vextractps_avx(auVar15,1);
            *(undefined4 *)(pauVar6[2] + 0x10) = uVar1;
          }
          if ((uVar9 & 0x40) != 0) {
            uVar1 = vextractps_avx(auVar15,2);
            *(undefined4 *)pauVar6[3] = uVar1;
          }
          if (cVar3 < '\0') {
            uVar1 = vextractps_avx(auVar15,3);
            *(undefined4 *)(pauVar6[3] + 0x10) = uVar1;
          }
          if ((uVar9 & 1) != 0) {
            *(int *)(*pauVar6 + 4) = auVar42._0_4_;
          }
          if ((uVar9 & 2) != 0) {
            uVar1 = vextractps_avx(auVar29,1);
            *(undefined4 *)(*pauVar6 + 0x14) = uVar1;
          }
          if ((uVar9 & 4) != 0) {
            uVar1 = vextractps_avx(auVar29,2);
            *(undefined4 *)(pauVar6[1] + 4) = uVar1;
          }
          if ((uVar9 & 8) != 0) {
            uVar1 = vextractps_avx(auVar29,3);
            *(undefined4 *)(pauVar6[1] + 0x14) = uVar1;
          }
          if ((uVar9 & 0x10) != 0) {
            *(int *)(pauVar6[2] + 4) = auVar42._16_4_;
          }
          if ((uVar9 & 0x20) != 0) {
            uVar1 = vextractps_avx(auVar33,1);
            *(undefined4 *)(pauVar6[2] + 0x14) = uVar1;
          }
          if ((uVar9 & 0x40) != 0) {
            uVar1 = vextractps_avx(auVar33,2);
            *(undefined4 *)(pauVar6[3] + 4) = uVar1;
          }
          if (cVar3 < '\0') {
            uVar1 = vextractps_avx(auVar33,3);
            *(undefined4 *)(pauVar6[3] + 0x14) = uVar1;
          }
          if ((uVar9 & 1) != 0) {
            *(int *)(*pauVar6 + 8) = auVar18._0_4_;
          }
          if ((uVar9 & 2) != 0) {
            uVar1 = vextractps_avx(auVar35,1);
            *(undefined4 *)(*pauVar6 + 0x18) = uVar1;
          }
          if ((uVar9 & 4) != 0) {
            uVar1 = vextractps_avx(auVar35,2);
            *(undefined4 *)(pauVar6[1] + 8) = uVar1;
          }
          if ((uVar9 & 8) != 0) {
            uVar1 = vextractps_avx(auVar35,3);
            *(undefined4 *)(pauVar6[1] + 0x18) = uVar1;
          }
          if ((uVar9 & 0x10) != 0) {
            *(int *)(pauVar6[2] + 8) = auVar18._16_4_;
          }
          if ((uVar9 & 0x20) != 0) {
            uVar1 = vextractps_avx(auVar37,1);
            *(undefined4 *)(pauVar6[2] + 0x18) = uVar1;
          }
          if ((uVar9 & 0x40) != 0) {
            uVar1 = vextractps_avx(auVar37,2);
            *(undefined4 *)(pauVar6[3] + 8) = uVar1;
          }
          if (cVar3 < '\0') {
            uVar1 = vextractps_avx(auVar37,3);
            *(undefined4 *)(pauVar6[3] + 0x18) = uVar1;
          }
          if ((uVar9 & 1) != 0) {
            uVar1 = vextractps_avx(auVar20._0_16_,3);
            *(undefined4 *)(*pauVar6 + 0xc) = uVar1;
          }
          if ((uVar9 & 2) != 0) {
            uVar1 = vextractps_avx(auVar20._16_16_,3);
            *(undefined4 *)(*pauVar6 + 0x1c) = uVar1;
          }
          if ((uVar9 & 4) != 0) {
            uVar1 = vextractps_avx(auVar28._0_16_,3);
            *(undefined4 *)(pauVar6[1] + 0xc) = uVar1;
          }
          if ((uVar9 & 8) != 0) {
            uVar1 = vextractps_avx(auVar28._16_16_,3);
            *(undefined4 *)(pauVar6[1] + 0x1c) = uVar1;
          }
          if ((uVar9 & 0x10) != 0) {
            uVar1 = vextractps_avx(auVar39._0_16_,3);
            *(undefined4 *)(pauVar6[2] + 0xc) = uVar1;
          }
          if ((uVar9 & 0x20) != 0) {
            uVar1 = vextractps_avx(auVar39._16_16_,3);
            *(undefined4 *)(pauVar6[2] + 0x1c) = uVar1;
          }
          if ((uVar9 & 0x40) != 0) {
            uVar1 = vextractps_avx(auVar17._0_16_,3);
            *(undefined4 *)(pauVar6[3] + 0xc) = uVar1;
          }
          if (cVar3 < '\0') {
            uVar1 = vextractps_avx(auVar17._16_16_,3);
            *(undefined4 *)(pauVar6[3] + 0x1c) = uVar1;
          }
        }
      }
      pauVar11 = pauVar11 + 3;
      pauVar10 = pauVar10 + 3;
      pauVar5 = pauVar5 + 3;
      pauVar6 = pauVar6 + 4;
      uVar7 = uVar7 + 8;
    } while ((int)uVar7 < (int)(uVar4 & 0xfffffff8));
  }
  if ((int)uVar7 < (int)param_8) {
    auVar20._4_4_ = uVar7;
    auVar20._0_4_ = uVar7;
    auVar20._8_4_ = uVar7;
    auVar20._12_4_ = uVar7;
    auVar20._16_4_ = uVar7;
    auVar20._20_4_ = uVar7;
    auVar20._24_4_ = uVar7;
    auVar20._28_4_ = uVar7;
    auVar20 = vpor_avx2(auVar20,
                        ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
    auVar17._4_4_ = param_8;
    auVar17._0_4_ = param_8;
    auVar17._8_4_ = param_8;
    auVar17._12_4_ = param_8;
    auVar17._16_4_ = param_8;
    auVar17._20_4_ = param_8;
    auVar17._24_4_ = param_8;
    auVar17._28_4_ = param_8;
    auVar28 = vpcmpgtd_avx2(auVar17,auVar20);
    uVar8 = (ulonglong)uVar7;
    pauVar5 = (undefined1 (*) [32])(*param_1 + uVar8 * 0x10);
    auVar20 = vpcmpeqd_avx2(auVar17,auVar17);
    auVar20 = auVar20 & ~auVar28;
    if ((((((((SUB321(auVar20 >> 0x1f,0) & 1) == 0 && (SUB321(auVar20 >> 0x3f,0) & 1) == 0) &&
            (SUB321(auVar20 >> 0x5f,0) & 1) == 0) && SUB321(auVar20 >> 0x7f,0) == '\0') &&
          (SUB321(auVar20 >> 0x9f,0) & 1) == 0) && SUB321(auVar20 >> 0xbf,0) == '\0') &&
        (SUB321(auVar20 >> 0xdf,0) & 1) == 0) && -1 < auVar20[0x1f]) {
      auVar39 = vperm2f128_avx(*pauVar5,pauVar5[2],0x20);
      auVar17 = vperm2f128_avx(*pauVar5,pauVar5[2],0x31);
      auVar18 = vperm2f128_avx(pauVar5[1],pauVar5[3],0x20);
      auVar14 = vperm2f128_avx(pauVar5[1],pauVar5[3],0x31);
      auVar20 = vunpcklps_avx(auVar39,auVar17);
      auVar39 = vunpckhps_avx(auVar39,auVar17);
      auVar24 = vunpcklps_avx(auVar18,auVar14);
      auVar17 = vunpckhps_avx(auVar18,auVar14);
      auVar18 = vunpcklpd_avx(auVar20,auVar24);
      auVar20 = vunpckhpd_avx(auVar20,auVar24);
      auVar24 = vunpcklpd_avx(auVar39,auVar17);
      auVar39 = vunpckhpd_avx(auVar39,auVar17);
    }
    else {
      auVar18 = vgatherdps(ZEXT832(0) << 0x20,auVar28);
      auVar20 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar28);
      auVar24 = vgatherdps(ZEXT832(0),auVar28);
      auVar39 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar28);
    }
    auVar17 = vmaskmovps_avx(auVar28,auVar18);
    auVar20 = vmaskmovps_avx(auVar28,auVar20);
    auVar18 = vmaskmovps_avx(auVar28,auVar24);
    auVar24 = vcmpps_avx(ZEXT832(0) << 0x20,auVar39,1);
    auVar14._0_4_ = auVar24._0_4_ & auVar28._0_4_;
    auVar14._4_4_ = auVar24._4_4_ & auVar28._4_4_;
    auVar14._8_4_ = auVar24._8_4_ & auVar28._8_4_;
    auVar14._12_4_ = auVar24._12_4_ & auVar28._12_4_;
    auVar14._16_4_ = auVar24._16_4_ & auVar28._16_4_;
    auVar14._20_4_ = auVar24._20_4_ & auVar28._20_4_;
    auVar14._24_4_ = auVar24._24_4_ & auVar28._24_4_;
    auVar14._28_4_ = auVar24._28_4_ & auVar28._28_4_;
    uVar4 = vmovmskps_avx(auVar14);
    if (uVar4 != 0) {
      pauVar6 = (undefined1 (*) [32])(*param_2 + uVar8 * 0xc);
      cVar3 = (char)uVar4;
      if (cVar3 == -1) {
        auVar28 = pauVar6[1];
        auVar24 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar28);
        auVar42 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,*pauVar6);
        auVar24 = vblendps_avx(auVar42,auVar24,0x88);
        auVar42 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar28);
        auVar36 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,pauVar6[2]);
        auVar42 = vblendps_avx(auVar36,auVar42,0x13);
        auVar22._16_16_ = auVar42._0_16_;
        auVar22._0_16_ = auVar24._0_16_;
        auVar44 = vperm2f128_avx(auVar24,auVar42,0x31);
        auVar28 = vblendps_avx(auVar28,*pauVar6,0x24);
        auVar28 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar28);
        auVar24 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,pauVar6[2]);
        auVar24 = vblendps_avx(auVar28,auVar24,0xe0);
        lVar2 = uVar8 * 0xc;
        auVar28 = *(undefined1 (*) [32])(param_3[1] + lVar2);
        auVar42 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar28);
        auVar36 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,*(undefined1 (*) [32])(*param_3 + lVar2));
        auVar42 = vblendps_avx(auVar36,auVar42,0x88);
        auVar36 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar28);
        auVar16 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_3[2] + lVar2));
        auVar36 = vblendps_avx(auVar16,auVar36,0x13);
        auVar31._16_16_ = auVar36._0_16_;
        auVar31._0_16_ = auVar42._0_16_;
        auVar26 = vperm2f128_avx(auVar42,auVar36,0x31);
        auVar28 = vblendps_avx(auVar28,*(undefined1 (*) [32])(*param_3 + lVar2),0x24);
        auVar28 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar28);
        auVar42 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,*(undefined1 (*) [32])(param_3[2] + lVar2));
        auVar42 = vblendps_avx(auVar28,auVar42,0xe0);
        auVar28 = *(undefined1 (*) [32])(param_4[1] + lVar2);
        auVar36 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                               ,auVar28);
        auVar16 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                               ,*(undefined1 (*) [32])(*param_4 + lVar2));
        auVar36 = vblendps_avx(auVar16,auVar36,0x88);
        auVar16 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                               ,auVar28);
        auVar13 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                               ,*(undefined1 (*) [32])(param_4[2] + lVar2));
        auVar16 = vblendps_avx(auVar13,auVar16,0x13);
        auVar34._16_16_ = auVar16._0_16_;
        auVar34._0_16_ = auVar36._0_16_;
        auVar36 = vperm2f128_avx(auVar36,auVar16,0x31);
        auVar28 = vblendps_avx(auVar28,*(undefined1 (*) [32])(*param_4 + lVar2),0x24);
        auVar28 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                               ,auVar28);
        auVar16 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                               ,*(undefined1 (*) [32])(param_4[2] + lVar2));
        auVar28 = vblendps_avx(auVar28,auVar16,0xe0);
      }
      else {
        auVar22 = vgatherdps(ZEXT832(0) << 0x20,auVar14);
        auVar44 = vgatherdps(ZEXT832(0),auVar14);
        auVar24 = vgatherdps(ZEXT832(0),auVar14);
        auVar31 = vgatherdps(ZEXT832(0),auVar14);
        auVar26 = vgatherdps(ZEXT832(0),auVar14);
        auVar42 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar14);
        auVar34 = vgatherdps(ZEXT832(0),auVar14);
        auVar36 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar14);
        auVar28 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar14);
      }
      auVar16 = vsubps_avx(auVar17,auVar31);
      auVar26 = vsubps_avx(auVar20,auVar26);
      auVar42 = vsubps_avx(auVar18,auVar42);
      auVar32._0_4_ = -(param_6 * auVar16._0_4_) + auVar17._0_4_;
      auVar32._4_4_ = -(param_6 * auVar16._4_4_) + auVar17._4_4_;
      auVar32._8_4_ = -(param_6 * auVar16._8_4_) + auVar17._8_4_;
      auVar32._12_4_ = -(param_6 * auVar16._12_4_) + auVar17._12_4_;
      auVar32._16_4_ = -(param_6 * auVar16._16_4_) + auVar17._16_4_;
      auVar32._20_4_ = -(param_6 * auVar16._20_4_) + auVar17._20_4_;
      auVar32._24_4_ = -(param_6 * auVar16._24_4_) + auVar17._24_4_;
      auVar32._28_4_ = -(param_6 * auVar16._28_4_) + auVar17._28_4_;
      auVar16._0_4_ = -(param_6 * auVar26._0_4_) + auVar20._0_4_;
      auVar16._4_4_ = -(param_6 * auVar26._4_4_) + auVar20._4_4_;
      auVar16._8_4_ = -(param_6 * auVar26._8_4_) + auVar20._8_4_;
      auVar16._12_4_ = -(param_6 * auVar26._12_4_) + auVar20._12_4_;
      auVar16._16_4_ = -(param_6 * auVar26._16_4_) + auVar20._16_4_;
      auVar16._20_4_ = -(param_6 * auVar26._20_4_) + auVar20._20_4_;
      auVar16._24_4_ = -(param_6 * auVar26._24_4_) + auVar20._24_4_;
      auVar16._28_4_ = -(param_6 * auVar26._28_4_) + auVar20._28_4_;
      auVar43._0_4_ = -(param_6 * auVar42._0_4_) + auVar18._0_4_;
      auVar43._4_4_ = -(param_6 * auVar42._4_4_) + auVar18._4_4_;
      auVar43._8_4_ = -(param_6 * auVar42._8_4_) + auVar18._8_4_;
      auVar43._12_4_ = -(param_6 * auVar42._12_4_) + auVar18._12_4_;
      auVar43._16_4_ = -(param_6 * auVar42._16_4_) + auVar18._16_4_;
      auVar43._20_4_ = -(param_6 * auVar42._20_4_) + auVar18._20_4_;
      auVar43._24_4_ = -(param_6 * auVar42._24_4_) + auVar18._24_4_;
      auVar43._28_4_ = -(param_6 * auVar42._28_4_) + auVar18._28_4_;
      auVar20 = vmaskmovps_avx(auVar14,auVar32);
      auVar17 = vmaskmovps_avx(auVar14,auVar16);
      auVar18 = vmaskmovps_avx(auVar14,auVar43);
      auVar42 = vsubps_avx(auVar20,auVar22);
      auVar16 = vsubps_avx(auVar17,auVar44);
      auVar24 = vsubps_avx(auVar18,auVar24);
      auVar44._0_4_ = -(param_7 * (-(param_5 * auVar34._0_4_) + auVar42._0_4_)) + auVar20._0_4_;
      auVar44._4_4_ = -(param_7 * (-(param_5 * auVar34._4_4_) + auVar42._4_4_)) + auVar20._4_4_;
      auVar44._8_4_ = -(param_7 * (-(param_5 * auVar34._8_4_) + auVar42._8_4_)) + auVar20._8_4_;
      auVar44._12_4_ = -(param_7 * (-(param_5 * auVar34._12_4_) + auVar42._12_4_)) + auVar20._12_4_;
      auVar44._16_4_ = -(param_7 * (-(param_5 * auVar34._16_4_) + auVar42._16_4_)) + auVar20._16_4_;
      auVar44._20_4_ = -(param_7 * (-(param_5 * auVar34._20_4_) + auVar42._20_4_)) + auVar20._20_4_;
      auVar44._24_4_ = -(param_7 * (-(param_5 * auVar34._24_4_) + auVar42._24_4_)) + auVar20._24_4_;
      auVar44._28_4_ = -(param_7 * (-(param_5 * auVar34._28_4_) + auVar42._28_4_)) + auVar20._28_4_;
      auVar21._0_4_ = -(param_7 * (-(param_5 * auVar36._0_4_) + auVar16._0_4_)) + auVar17._0_4_;
      auVar21._4_4_ = -(param_7 * (-(param_5 * auVar36._4_4_) + auVar16._4_4_)) + auVar17._4_4_;
      auVar21._8_4_ = -(param_7 * (-(param_5 * auVar36._8_4_) + auVar16._8_4_)) + auVar17._8_4_;
      auVar21._12_4_ = -(param_7 * (-(param_5 * auVar36._12_4_) + auVar16._12_4_)) + auVar17._12_4_;
      auVar21._16_4_ = -(param_7 * (-(param_5 * auVar36._16_4_) + auVar16._16_4_)) + auVar17._16_4_;
      auVar21._20_4_ = -(param_7 * (-(param_5 * auVar36._20_4_) + auVar16._20_4_)) + auVar17._20_4_;
      auVar21._24_4_ = -(param_7 * (-(param_5 * auVar36._24_4_) + auVar16._24_4_)) + auVar17._24_4_;
      auVar21._28_4_ = -(param_7 * (-(param_5 * auVar36._28_4_) + auVar16._28_4_)) + auVar17._28_4_;
      auVar36._0_4_ = -(param_7 * (-(param_5 * auVar28._0_4_) + auVar24._0_4_)) + auVar18._0_4_;
      auVar36._4_4_ = -(param_7 * (-(param_5 * auVar28._4_4_) + auVar24._4_4_)) + auVar18._4_4_;
      auVar36._8_4_ = -(param_7 * (-(param_5 * auVar28._8_4_) + auVar24._8_4_)) + auVar18._8_4_;
      auVar36._12_4_ = -(param_7 * (-(param_5 * auVar28._12_4_) + auVar24._12_4_)) + auVar18._12_4_;
      auVar36._16_4_ = -(param_7 * (-(param_5 * auVar28._16_4_) + auVar24._16_4_)) + auVar18._16_4_;
      auVar36._20_4_ = -(param_7 * (-(param_5 * auVar28._20_4_) + auVar24._20_4_)) + auVar18._20_4_;
      auVar36._24_4_ = -(param_7 * (-(param_5 * auVar28._24_4_) + auVar24._24_4_)) + auVar18._24_4_;
      auVar36._28_4_ = -(param_7 * (-(param_5 * auVar28._28_4_) + auVar24._28_4_)) + auVar18._28_4_;
      auVar20 = vmaskmovps_avx(auVar14,auVar44);
      auVar28 = vmaskmovps_avx(auVar14,auVar21);
      auVar17 = vmaskmovps_avx(auVar14,auVar36);
      if (cVar3 == -1) {
        auVar18 = vunpcklps_avx(auVar20,auVar28);
        auVar14 = vunpcklps_avx(auVar17,auVar39);
        auVar24 = vunpcklpd_avx(auVar18,auVar14);
        auVar18 = vunpckhpd_avx(auVar18,auVar14);
        auVar20 = vunpckhps_avx(auVar20,auVar28);
        auVar28 = vunpckhps_avx(auVar17,auVar39);
        auVar39 = vunpcklpd_avx(auVar20,auVar28);
        auVar25._16_16_ = auVar18._0_16_;
        auVar25._0_16_ = auVar24._0_16_;
        *pauVar5 = auVar25;
        auVar20 = vunpckhpd_avx(auVar20,auVar28);
        auVar28._16_16_ = auVar20._0_16_;
        auVar28._0_16_ = auVar39._0_16_;
        pauVar5[1] = auVar28;
        auVar28 = vperm2f128_avx(auVar24,auVar18,0x31);
        pauVar5[2] = auVar28;
        auVar20 = vperm2f128_avx(auVar39,auVar20,0x31);
        pauVar5[3] = auVar20;
      }
      else {
        auVar38 = auVar39._0_16_;
        auVar40 = auVar39._16_16_;
        auVar35 = auVar20._0_16_;
        auVar37 = auVar20._16_16_;
        auVar29 = auVar28._0_16_;
        auVar33 = auVar28._16_16_;
        auVar12 = auVar17._0_16_;
        auVar15 = auVar17._16_16_;
        if ((uVar4 & 1) != 0) {
          *(int *)*pauVar5 = auVar20._0_4_;
        }
        if ((uVar4 & 2) != 0) {
          uVar1 = vextractps_avx(auVar35,1);
          *(undefined4 *)(*pauVar5 + 0x10) = uVar1;
        }
        if ((uVar4 & 4) != 0) {
          uVar1 = vextractps_avx(auVar35,2);
          *(undefined4 *)pauVar5[1] = uVar1;
        }
        if ((uVar4 & 8) != 0) {
          uVar1 = vextractps_avx(auVar35,3);
          *(undefined4 *)(pauVar5[1] + 0x10) = uVar1;
        }
        if ((uVar4 & 0x10) != 0) {
          *(int *)pauVar5[2] = auVar20._16_4_;
        }
        if ((uVar4 & 0x20) != 0) {
          uVar1 = vextractps_avx(auVar37,1);
          *(undefined4 *)(pauVar5[2] + 0x10) = uVar1;
        }
        if ((uVar4 & 0x40) != 0) {
          uVar1 = vextractps_avx(auVar37,2);
          *(undefined4 *)pauVar5[3] = uVar1;
        }
        if (cVar3 < '\0') {
          uVar1 = vextractps_avx(auVar37,3);
          *(undefined4 *)(pauVar5[3] + 0x10) = uVar1;
        }
        if ((uVar4 & 1) != 0) {
          *(int *)(*pauVar5 + 4) = auVar28._0_4_;
        }
        if ((uVar4 & 2) != 0) {
          uVar1 = vextractps_avx(auVar29,1);
          *(undefined4 *)(*pauVar5 + 0x14) = uVar1;
        }
        if ((uVar4 & 4) != 0) {
          uVar1 = vextractps_avx(auVar29,2);
          *(undefined4 *)(pauVar5[1] + 4) = uVar1;
        }
        if ((uVar4 & 8) != 0) {
          uVar1 = vextractps_avx(auVar29,3);
          *(undefined4 *)(pauVar5[1] + 0x14) = uVar1;
        }
        if ((uVar4 & 0x10) != 0) {
          *(int *)(pauVar5[2] + 4) = auVar28._16_4_;
        }
        if ((uVar4 & 0x20) != 0) {
          uVar1 = vextractps_avx(auVar33,1);
          *(undefined4 *)(pauVar5[2] + 0x14) = uVar1;
        }
        if ((uVar4 & 0x40) != 0) {
          uVar1 = vextractps_avx(auVar33,2);
          *(undefined4 *)(pauVar5[3] + 4) = uVar1;
        }
        if (cVar3 < '\0') {
          uVar1 = vextractps_avx(auVar33,3);
          *(undefined4 *)(pauVar5[3] + 0x14) = uVar1;
        }
        if ((uVar4 & 1) != 0) {
          *(int *)(*pauVar5 + 8) = auVar17._0_4_;
        }
        if ((uVar4 & 2) != 0) {
          uVar1 = vextractps_avx(auVar12,1);
          *(undefined4 *)(*pauVar5 + 0x18) = uVar1;
        }
        if ((uVar4 & 4) != 0) {
          uVar1 = vextractps_avx(auVar12,2);
          *(undefined4 *)(pauVar5[1] + 8) = uVar1;
        }
        if ((uVar4 & 8) != 0) {
          uVar1 = vextractps_avx(auVar12,3);
          *(undefined4 *)(pauVar5[1] + 0x18) = uVar1;
        }
        if ((uVar4 & 0x10) != 0) {
          *(int *)(pauVar5[2] + 8) = auVar17._16_4_;
        }
        if ((uVar4 & 0x20) != 0) {
          uVar1 = vextractps_avx(auVar15,1);
          *(undefined4 *)(pauVar5[2] + 0x18) = uVar1;
        }
        if ((uVar4 & 0x40) != 0) {
          uVar1 = vextractps_avx(auVar15,2);
          *(undefined4 *)(pauVar5[3] + 8) = uVar1;
        }
        if (cVar3 < '\0') {
          uVar1 = vextractps_avx(auVar15,3);
          *(undefined4 *)(pauVar5[3] + 0x18) = uVar1;
        }
        if ((uVar4 & 1) != 0) {
          *(int *)(*pauVar5 + 0xc) = auVar39._0_4_;
        }
        if ((uVar4 & 2) != 0) {
          uVar1 = vextractps_avx(auVar38,1);
          *(undefined4 *)(*pauVar5 + 0x1c) = uVar1;
        }
        if ((uVar4 & 4) != 0) {
          uVar1 = vextractps_avx(auVar38,2);
          *(undefined4 *)(pauVar5[1] + 0xc) = uVar1;
        }
        if ((uVar4 & 8) != 0) {
          uVar1 = vextractps_avx(auVar38,3);
          *(undefined4 *)(pauVar5[1] + 0x1c) = uVar1;
        }
        if ((uVar4 & 0x10) != 0) {
          *(int *)(pauVar5[2] + 0xc) = auVar39._16_4_;
        }
        if ((uVar4 & 0x20) != 0) {
          uVar1 = vextractps_avx(auVar40,1);
          *(undefined4 *)(pauVar5[2] + 0x1c) = uVar1;
        }
        if ((uVar4 & 0x40) != 0) {
          uVar1 = vextractps_avx(auVar40,2);
          *(undefined4 *)(pauVar5[3] + 0xc) = uVar1;
        }
        if (cVar3 < '\0') {
          uVar1 = vextractps_avx(auVar40,3);
          *(undefined4 *)(pauVar5[3] + 0x1c) = uVar1;
        }
      }
    }
  }
  return;
}

// ApplyMultiResConstraintsWithWeightMaps_avx2 @ 1405a2530

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyMultiResConstraintsWithWeightMaps_avx2
               (undefined1 (*param_1) [32],undefined1 (*param_2) [32],undefined1 (*param_3) [32],
               undefined1 (*param_4) [32],float param_5,byte param_6,longlong param_7,
               undefined8 param_8,byte param_9,longlong param_10,undefined8 param_11,uint param_12)

{
  undefined1 uVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 (*pauVar4) [32];
  undefined1 (*pauVar5) [32];
  undefined1 (*pauVar6) [32];
  uint uVar7;
  undefined1 (*pauVar8) [32];
  undefined1 *puVar9;
  uint uVar10;
  undefined4 uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar18 [16];
  float fVar17;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [32];
  undefined1 auVar44 [16];
  undefined1 auVar45 [32];
  undefined1 auVar46 [16];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [16];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [16];
  undefined1 local_2e0 [32];
  
  uVar7 = param_12 + 7;
  if (-1 < (int)param_12) {
    uVar7 = param_12;
  }
  if ((int)(uVar7 & 0xfffffff8) < 1) {
    uVar12 = 0;
    if ((int)param_12 < 1) {
      return;
    }
  }
  else {
    uVar12 = 0;
    pauVar4 = param_1;
    pauVar5 = param_2;
    pauVar6 = param_3;
    pauVar8 = param_4;
    do {
      auVar32 = *pauVar4;
      auVar22 = pauVar4[1];
      auVar52 = pauVar4[2];
      auVar39 = pauVar4[3];
      auVar21 = vperm2f128_avx(auVar32,auVar52,0x20);
      auVar16 = vperm2f128_avx(auVar32,auVar52,0x31);
      auVar40 = vperm2f128_avx(auVar22,auVar39,0x20);
      auVar45 = vperm2f128_avx(auVar22,auVar39,0x31);
      auVar34 = vunpcklps_avx(auVar21,auVar16);
      auVar21 = vunpckhps_avx(auVar21,auVar16);
      auVar38 = vunpcklps_avx(auVar40,auVar45);
      auVar16 = vunpckhps_avx(auVar40,auVar45);
      auVar40 = vunpcklpd_avx(auVar34,auVar38);
      auVar34 = vunpckhpd_avx(auVar34,auVar38);
      auVar38 = vunpcklpd_avx(auVar21,auVar16);
      auVar16 = vunpckhpd_avx(auVar21,auVar16);
      auVar21 = vcmpps_avx(ZEXT832(0) << 0x20,auVar16,1);
      uVar10 = vmovmskps_avx(auVar21);
      if (uVar10 != 0) {
        auVar44 = (undefined1  [16])0x0;
        bVar3 = (byte)uVar10;
        auVar46 = (undefined1  [16])0x0;
        if ((param_6 & 1) != 0) {
          if ((~bVar3 & 0x81) == 0) {
            auVar46._8_8_ = 0;
            auVar46._0_8_ = *(ulonglong *)(param_7 + uVar12);
          }
          else {
            puVar9 = (undefined1 *)(param_7 + uVar12);
            auVar46 = (undefined1  [16])0x0;
            if ((uVar10 & 1) != 0) {
              uVar1 = *puVar9;
              auVar46[1] = uVar1;
              auVar46[0] = uVar1;
              auVar46[2] = uVar1;
              auVar46[3] = uVar1;
              auVar46[4] = uVar1;
              auVar46[5] = uVar1;
              auVar46[6] = uVar1;
              auVar46[7] = uVar1;
              auVar46[8] = uVar1;
              auVar46[9] = uVar1;
              auVar46[10] = uVar1;
              auVar46[0xb] = uVar1;
              auVar46[0xc] = uVar1;
              auVar46[0xd] = uVar1;
              auVar46[0xe] = uVar1;
              auVar46[0xf] = uVar1;
            }
            if ((uVar10 & 2) != 0) {
              auVar30 = vpinsrb_avx(auVar46,(uint)(byte)puVar9[1],1);
              auVar46 = vpblendw_avx(auVar30,auVar46,0xe);
            }
            if ((uVar10 & 4) != 0) {
              auVar30 = vpmovzxwd_avx(auVar46);
              auVar30 = vpinsrb_avx(auVar30,(uint)(byte)puVar9[2],2);
              auVar30 = vpinsrb_avx(auVar30,(uint)auVar46[3],3);
              auVar46 = vpblendd_avx2(auVar30,auVar46,2);
            }
            if ((uVar10 & 8) != 0) {
              auVar30 = vpshufb_avx(auVar46,___xmm_80800706808005048080030280020100);
              auVar30 = vpinsrb_avx(auVar30,(uint)(byte)puVar9[3],3);
              auVar46 = vpblendd_avx2(auVar30,auVar46,2);
            }
            if ((uVar10 & 0x10) != 0) {
              auVar30 = vpshufb_avx(auVar46,___xmm_80800706808005048080030203020100);
              auVar30 = vpinsrb_avx(auVar30,(uint)(byte)puVar9[4],4);
              auVar30 = vpinsrb_avx(auVar30,(uint)auVar46[5],5);
              auVar46 = vpblendw_avx(auVar30,auVar46,8);
            }
            if ((uVar10 & 0x20) != 0) {
              auVar30 = vpshufb_avx(auVar46,___xmm_80800706808005048080030403020100);
              auVar30 = vpinsrb_avx(auVar30,(uint)(byte)puVar9[5],5);
              auVar46 = vpblendw_avx(auVar30,auVar46,8);
            }
            if ((uVar10 & 0x40) != 0) {
              auVar30 = vpshufb_avx(auVar46,___xmm_80800706808005048080050403020100);
              auVar30 = vpinsrb_avx(auVar30,(uint)(byte)puVar9[6],6);
              auVar46 = vpinsrb_avx(auVar30,(uint)auVar46[7],7);
            }
            if ((uVar10 & 0x80) != 0) {
              auVar46 = vpshufb_avx(auVar46,___xmm_80800706808005048006050403020100);
              auVar46 = vpinsrb_avx(auVar46,(uint)(byte)puVar9[7],7);
            }
          }
        }
        if ((param_9 & 1) != 0) {
          if ((~bVar3 & 0x81) == 0) {
            auVar44._8_8_ = 0;
            auVar44._0_8_ = *(ulonglong *)(param_10 + uVar12);
          }
          else {
            puVar9 = (undefined1 *)(param_10 + uVar12);
            if ((uVar10 & 1) != 0) {
              uVar1 = *puVar9;
              auVar44[1] = uVar1;
              auVar44[0] = uVar1;
              auVar44[2] = uVar1;
              auVar44[3] = uVar1;
              auVar44[4] = uVar1;
              auVar44[5] = uVar1;
              auVar44[6] = uVar1;
              auVar44[7] = uVar1;
              auVar44[8] = uVar1;
              auVar44[9] = uVar1;
              auVar44[10] = uVar1;
              auVar44[0xb] = uVar1;
              auVar44[0xc] = uVar1;
              auVar44[0xd] = uVar1;
              auVar44[0xe] = uVar1;
              auVar44[0xf] = uVar1;
            }
            if ((uVar10 & 2) != 0) {
              auVar30 = vpinsrb_avx(auVar44,(uint)(byte)puVar9[1],1);
              auVar44 = vpblendw_avx(auVar30,auVar44,0xe);
            }
            if ((uVar10 & 4) != 0) {
              auVar30 = vpmovzxwd_avx(auVar44);
              auVar30 = vpinsrb_avx(auVar30,(uint)(byte)puVar9[2],2);
              auVar30 = vpinsrb_avx(auVar30,(uint)auVar44[3],3);
              auVar44 = vpblendd_avx2(auVar30,auVar44,2);
            }
            if ((uVar10 & 8) != 0) {
              auVar30 = vpshufb_avx(auVar44,___xmm_80800706808005048080030280020100);
              auVar30 = vpinsrb_avx(auVar30,(uint)(byte)puVar9[3],3);
              auVar44 = vpblendd_avx2(auVar30,auVar44,2);
            }
            if ((uVar10 & 0x10) != 0) {
              auVar30 = vpshufb_avx(auVar44,___xmm_80800706808005048080030203020100);
              auVar30 = vpinsrb_avx(auVar30,(uint)(byte)puVar9[4],4);
              auVar30 = vpinsrb_avx(auVar30,(uint)auVar44[5],5);
              auVar44 = vpblendw_avx(auVar30,auVar44,8);
            }
            if ((uVar10 & 0x20) != 0) {
              auVar30 = vpshufb_avx(auVar44,___xmm_80800706808005048080030403020100);
              auVar30 = vpinsrb_avx(auVar30,(uint)(byte)puVar9[5],5);
              auVar44 = vpblendw_avx(auVar30,auVar44,8);
            }
            if ((uVar10 & 0x40) != 0) {
              auVar30 = vpshufb_avx(auVar44,___xmm_80800706808005048080050403020100);
              auVar30 = vpinsrb_avx(auVar30,(uint)(byte)puVar9[6],6);
              auVar44 = vpinsrb_avx(auVar30,(uint)auVar44[7],7);
            }
            if ((uVar10 & 0x80) != 0) {
              auVar44 = vpshufb_avx(auVar44,___xmm_80800706808005048006050403020100);
              auVar44 = vpinsrb_avx(auVar44,(uint)(byte)puVar9[7],7);
            }
          }
        }
        auVar45 = vpmovsxbd_avx2(auVar46);
        vpslld_avx2(auVar45,2);
        auVar47 = vgatherdps(ZEXT1632((undefined1  [16])0x0),auVar21);
        auVar45 = vpmovsxbd_avx2(auVar44);
        vpslld_avx2(auVar45,2);
        auVar45 = vgatherdps(ZEXT1632((undefined1  [16])0x0),auVar21);
        if (bVar3 == 0xff) {
          auVar37 = pauVar5[1];
          auVar51 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                 ,auVar37);
          auVar33 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                 ,*pauVar5);
          auVar51 = vblendps_avx(auVar33,auVar51,0x88);
          auVar33 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                 ,auVar37);
          auVar36 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                 ,pauVar5[2]);
          auVar33 = vblendps_avx(auVar36,auVar33,0x13);
          auVar19._16_16_ = auVar33._0_16_;
          auVar19._0_16_ = auVar51._0_16_;
          auVar49 = vperm2f128_avx(auVar51,auVar33,0x31);
          auVar37 = vblendps_avx(auVar37,*pauVar5,0x24);
          auVar37 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                 ,auVar37);
          auVar51 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                 ,pauVar5[2]);
          auVar51 = vblendps_avx(auVar37,auVar51,0xe0);
          auVar37 = pauVar6[1];
          auVar33 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                 ,auVar37);
          auVar36 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                 ,*pauVar6);
          auVar33 = vblendps_avx(auVar36,auVar33,0x88);
          auVar36 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                 ,auVar37);
          auVar20 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                 ,pauVar6[2]);
          auVar36 = vblendps_avx(auVar20,auVar36,0x13);
          auVar13._16_16_ = auVar36._0_16_;
          auVar13._0_16_ = auVar33._0_16_;
          auVar15 = vperm2f128_avx(auVar33,auVar36,0x31);
          auVar37 = vblendps_avx(auVar37,*pauVar6,0x24);
          auVar37 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                 ,auVar37);
          auVar33 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                 ,pauVar6[2]);
          auVar33 = vblendps_avx(auVar37,auVar33,0xe0);
          auVar37 = pauVar8[1];
          auVar36 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                                 ,auVar37);
          auVar20 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                                 ,*pauVar8);
          auVar36 = vblendps_avx(auVar20,auVar36,0x88);
          auVar20 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                                 ,auVar37);
          auVar31 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                                 ,pauVar8[2]);
          auVar20 = vblendps_avx(auVar31,auVar20,0x13);
          auVar31._16_16_ = auVar20._0_16_;
          auVar31._0_16_ = auVar36._0_16_;
          auVar36 = vperm2f128_avx(auVar36,auVar20,0x31);
          auVar37 = vblendps_avx(auVar37,*pauVar8,0x24);
          auVar37 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                                 ,auVar37);
          auVar20 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                                 ,pauVar8[2]);
          auVar37 = vblendps_avx(auVar37,auVar20,0xe0);
        }
        else {
          auVar19 = vgatherdps(ZEXT832(0) << 0x20,auVar21);
          auVar49 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar21);
          auVar51 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar21);
          auVar13 = vgatherdps(ZEXT832(0),auVar21);
          auVar15 = vgatherdps(ZEXT832(0),auVar21);
          auVar33 = vgatherdps(ZEXT832(0) << 0x20,auVar21);
          auVar31 = vgatherdps(ZEXT832(0),auVar21);
          auVar36 = vgatherdps(ZEXT832(0),auVar21);
          auVar37 = vgatherdps(ZEXT832(0),auVar21);
        }
        auVar20 = vsubps_avx(auVar40,auVar13);
        auVar15 = vsubps_avx(auVar34,auVar15);
        auVar33 = vsubps_avx(auVar38,auVar33);
        fVar17 = auVar47._0_4_;
        auVar14._0_4_ = -(fVar17 * auVar20._0_4_) + auVar40._0_4_;
        fVar23 = auVar47._4_4_;
        auVar14._4_4_ = -(fVar23 * auVar20._4_4_) + auVar40._4_4_;
        fVar24 = auVar47._8_4_;
        auVar14._8_4_ = -(fVar24 * auVar20._8_4_) + auVar40._8_4_;
        fVar25 = auVar47._12_4_;
        auVar14._12_4_ = -(fVar25 * auVar20._12_4_) + auVar40._12_4_;
        fVar26 = auVar47._16_4_;
        auVar14._16_4_ = -(fVar26 * auVar20._16_4_) + auVar40._16_4_;
        fVar27 = auVar47._20_4_;
        auVar14._20_4_ = -(fVar27 * auVar20._20_4_) + auVar40._20_4_;
        fVar28 = auVar47._24_4_;
        auVar14._24_4_ = -(fVar28 * auVar20._24_4_) + auVar40._24_4_;
        fVar29 = auVar47._28_4_;
        auVar14._28_4_ = -(fVar29 * auVar20._28_4_) + auVar40._28_4_;
        auVar40._0_4_ = -(fVar17 * auVar15._0_4_) + auVar34._0_4_;
        auVar40._4_4_ = -(fVar23 * auVar15._4_4_) + auVar34._4_4_;
        auVar40._8_4_ = -(fVar24 * auVar15._8_4_) + auVar34._8_4_;
        auVar40._12_4_ = -(fVar25 * auVar15._12_4_) + auVar34._12_4_;
        auVar40._16_4_ = -(fVar26 * auVar15._16_4_) + auVar34._16_4_;
        auVar40._20_4_ = -(fVar27 * auVar15._20_4_) + auVar34._20_4_;
        auVar40._24_4_ = -(fVar28 * auVar15._24_4_) + auVar34._24_4_;
        auVar40._28_4_ = -(fVar29 * auVar15._28_4_) + auVar34._28_4_;
        auVar47._0_4_ = -(fVar17 * auVar33._0_4_) + auVar38._0_4_;
        auVar47._4_4_ = -(fVar23 * auVar33._4_4_) + auVar38._4_4_;
        auVar47._8_4_ = -(fVar24 * auVar33._8_4_) + auVar38._8_4_;
        auVar47._12_4_ = -(fVar25 * auVar33._12_4_) + auVar38._12_4_;
        auVar47._16_4_ = -(fVar26 * auVar33._16_4_) + auVar38._16_4_;
        auVar47._20_4_ = -(fVar27 * auVar33._20_4_) + auVar38._20_4_;
        auVar47._24_4_ = -(fVar28 * auVar33._24_4_) + auVar38._24_4_;
        auVar47._28_4_ = -(fVar29 * auVar33._28_4_) + auVar38._28_4_;
        auVar34 = vmaskmovps_avx(auVar21,auVar14);
        auVar40 = vmaskmovps_avx(auVar21,auVar40);
        auVar38 = vmaskmovps_avx(auVar21,auVar47);
        auVar47 = vsubps_avx(auVar34,auVar19);
        auVar33 = vsubps_avx(auVar40,auVar49);
        auVar51 = vsubps_avx(auVar38,auVar51);
        fVar17 = auVar45._0_4_;
        auVar20._0_4_ = -(fVar17 * (-(param_5 * auVar31._0_4_) + auVar47._0_4_)) + auVar34._0_4_;
        fVar23 = auVar45._4_4_;
        auVar20._4_4_ = -(fVar23 * (-(param_5 * auVar31._4_4_) + auVar47._4_4_)) + auVar34._4_4_;
        fVar24 = auVar45._8_4_;
        auVar20._8_4_ = -(fVar24 * (-(param_5 * auVar31._8_4_) + auVar47._8_4_)) + auVar34._8_4_;
        fVar25 = auVar45._12_4_;
        auVar20._12_4_ = -(fVar25 * (-(param_5 * auVar31._12_4_) + auVar47._12_4_)) + auVar34._12_4_
        ;
        fVar26 = auVar45._16_4_;
        auVar20._16_4_ = -(fVar26 * (-(param_5 * auVar31._16_4_) + auVar47._16_4_)) + auVar34._16_4_
        ;
        fVar27 = auVar45._20_4_;
        auVar20._20_4_ = -(fVar27 * (-(param_5 * auVar31._20_4_) + auVar47._20_4_)) + auVar34._20_4_
        ;
        fVar28 = auVar45._24_4_;
        auVar20._24_4_ = -(fVar28 * (-(param_5 * auVar31._24_4_) + auVar47._24_4_)) + auVar34._24_4_
        ;
        fVar29 = auVar45._28_4_;
        auVar20._28_4_ = -(fVar29 * (-(param_5 * auVar31._28_4_) + auVar47._28_4_)) + auVar34._28_4_
        ;
        auVar45._0_4_ = -(fVar17 * (-(param_5 * auVar36._0_4_) + auVar33._0_4_)) + auVar40._0_4_;
        auVar45._4_4_ = -(fVar23 * (-(param_5 * auVar36._4_4_) + auVar33._4_4_)) + auVar40._4_4_;
        auVar45._8_4_ = -(fVar24 * (-(param_5 * auVar36._8_4_) + auVar33._8_4_)) + auVar40._8_4_;
        auVar45._12_4_ = -(fVar25 * (-(param_5 * auVar36._12_4_) + auVar33._12_4_)) + auVar40._12_4_
        ;
        auVar45._16_4_ = -(fVar26 * (-(param_5 * auVar36._16_4_) + auVar33._16_4_)) + auVar40._16_4_
        ;
        auVar45._20_4_ = -(fVar27 * (-(param_5 * auVar36._20_4_) + auVar33._20_4_)) + auVar40._20_4_
        ;
        auVar45._24_4_ = -(fVar28 * (-(param_5 * auVar36._24_4_) + auVar33._24_4_)) + auVar40._24_4_
        ;
        auVar45._28_4_ = -(fVar29 * (-(param_5 * auVar36._28_4_) + auVar33._28_4_)) + auVar40._28_4_
        ;
        auVar33._0_4_ = -(fVar17 * (-(param_5 * auVar37._0_4_) + auVar51._0_4_)) + auVar38._0_4_;
        auVar33._4_4_ = -(fVar23 * (-(param_5 * auVar37._4_4_) + auVar51._4_4_)) + auVar38._4_4_;
        auVar33._8_4_ = -(fVar24 * (-(param_5 * auVar37._8_4_) + auVar51._8_4_)) + auVar38._8_4_;
        auVar33._12_4_ = -(fVar25 * (-(param_5 * auVar37._12_4_) + auVar51._12_4_)) + auVar38._12_4_
        ;
        auVar33._16_4_ = -(fVar26 * (-(param_5 * auVar37._16_4_) + auVar51._16_4_)) + auVar38._16_4_
        ;
        auVar33._20_4_ = -(fVar27 * (-(param_5 * auVar37._20_4_) + auVar51._20_4_)) + auVar38._20_4_
        ;
        auVar33._24_4_ = -(fVar28 * (-(param_5 * auVar37._24_4_) + auVar51._24_4_)) + auVar38._24_4_
        ;
        auVar33._28_4_ = -(fVar29 * (-(param_5 * auVar37._28_4_) + auVar51._28_4_)) + auVar38._28_4_
        ;
        auVar34 = vmaskmovps_avx(auVar21,auVar20);
        auVar40 = vmaskmovps_avx(auVar21,auVar45);
        auVar21 = vmaskmovps_avx(auVar21,auVar33);
        if (bVar3 == 0xff) {
          auVar32 = vunpcklps_avx(auVar34,auVar40);
          auVar22 = vunpcklps_avx(auVar21,auVar16);
          auVar39 = vunpcklpd_avx(auVar32,auVar22);
          auVar32 = vunpckhpd_avx(auVar32,auVar22);
          auVar22 = vunpckhps_avx(auVar34,auVar40);
          auVar52 = vunpckhps_avx(auVar21,auVar16);
          auVar21 = vunpcklpd_avx(auVar22,auVar52);
          auVar34._16_16_ = auVar32._0_16_;
          auVar34._0_16_ = auVar39._0_16_;
          *pauVar4 = auVar34;
          auVar22 = vunpckhpd_avx(auVar22,auVar52);
          auVar52._16_16_ = auVar22._0_16_;
          auVar52._0_16_ = auVar21._0_16_;
          pauVar4[1] = auVar52;
          auVar32 = vperm2f128_avx(auVar39,auVar32,0x31);
          pauVar4[2] = auVar32;
          auVar32 = vperm2f128_avx(auVar21,auVar22,0x31);
          pauVar4[3] = auVar32;
        }
        else {
          if ((uVar10 & 1) != 0) {
            *(int *)*pauVar4 = auVar34._0_4_;
          }
          auVar46 = auVar34._0_16_;
          auVar44 = auVar34._16_16_;
          auVar30 = auVar40._0_16_;
          auVar18 = auVar40._16_16_;
          auVar41 = auVar21._0_16_;
          auVar42 = auVar21._16_16_;
          if ((uVar10 & 2) != 0) {
            uVar11 = vextractps_avx(auVar46,1);
            *(undefined4 *)(*pauVar4 + 0x10) = uVar11;
          }
          if ((uVar10 & 4) != 0) {
            uVar11 = vextractps_avx(auVar46,2);
            *(undefined4 *)pauVar4[1] = uVar11;
          }
          if ((uVar10 & 8) != 0) {
            uVar11 = vextractps_avx(auVar46,3);
            *(undefined4 *)(pauVar4[1] + 0x10) = uVar11;
          }
          if ((uVar10 & 0x10) != 0) {
            *(int *)pauVar4[2] = auVar34._16_4_;
          }
          if ((uVar10 & 0x20) != 0) {
            uVar11 = vextractps_avx(auVar44,1);
            *(undefined4 *)(pauVar4[2] + 0x10) = uVar11;
          }
          if ((uVar10 & 0x40) != 0) {
            uVar11 = vextractps_avx(auVar44,2);
            *(undefined4 *)pauVar4[3] = uVar11;
          }
          if ((char)bVar3 < '\0') {
            uVar11 = vextractps_avx(auVar44,3);
            *(undefined4 *)(pauVar4[3] + 0x10) = uVar11;
          }
          if ((uVar10 & 1) != 0) {
            *(int *)(*pauVar4 + 4) = auVar40._0_4_;
          }
          if ((uVar10 & 2) != 0) {
            uVar11 = vextractps_avx(auVar30,1);
            *(undefined4 *)(*pauVar4 + 0x14) = uVar11;
          }
          if ((uVar10 & 4) != 0) {
            uVar11 = vextractps_avx(auVar30,2);
            *(undefined4 *)(pauVar4[1] + 4) = uVar11;
          }
          if ((uVar10 & 8) != 0) {
            uVar11 = vextractps_avx(auVar30,3);
            *(undefined4 *)(pauVar4[1] + 0x14) = uVar11;
          }
          if ((uVar10 & 0x10) != 0) {
            *(int *)(pauVar4[2] + 4) = auVar40._16_4_;
          }
          if ((uVar10 & 0x20) != 0) {
            uVar11 = vextractps_avx(auVar18,1);
            *(undefined4 *)(pauVar4[2] + 0x14) = uVar11;
          }
          if ((uVar10 & 0x40) != 0) {
            uVar11 = vextractps_avx(auVar18,2);
            *(undefined4 *)(pauVar4[3] + 4) = uVar11;
          }
          if ((char)bVar3 < '\0') {
            uVar11 = vextractps_avx(auVar18,3);
            *(undefined4 *)(pauVar4[3] + 0x14) = uVar11;
          }
          if ((uVar10 & 1) != 0) {
            *(int *)(*pauVar4 + 8) = auVar21._0_4_;
          }
          if ((uVar10 & 2) != 0) {
            uVar11 = vextractps_avx(auVar41,1);
            *(undefined4 *)(*pauVar4 + 0x18) = uVar11;
          }
          if ((uVar10 & 4) != 0) {
            uVar11 = vextractps_avx(auVar41,2);
            *(undefined4 *)(pauVar4[1] + 8) = uVar11;
          }
          if ((uVar10 & 8) != 0) {
            uVar11 = vextractps_avx(auVar41,3);
            *(undefined4 *)(pauVar4[1] + 0x18) = uVar11;
          }
          if ((uVar10 & 0x10) != 0) {
            *(int *)(pauVar4[2] + 8) = auVar21._16_4_;
          }
          if ((uVar10 & 0x20) != 0) {
            uVar11 = vextractps_avx(auVar42,1);
            *(undefined4 *)(pauVar4[2] + 0x18) = uVar11;
          }
          if ((uVar10 & 0x40) != 0) {
            uVar11 = vextractps_avx(auVar42,2);
            *(undefined4 *)(pauVar4[3] + 8) = uVar11;
          }
          if ((char)bVar3 < '\0') {
            uVar11 = vextractps_avx(auVar42,3);
            *(undefined4 *)(pauVar4[3] + 0x18) = uVar11;
          }
          if ((uVar10 & 1) != 0) {
            uVar11 = vextractps_avx(auVar32._0_16_,3);
            *(undefined4 *)(*pauVar4 + 0xc) = uVar11;
          }
          if ((uVar10 & 2) != 0) {
            uVar11 = vextractps_avx(auVar32._16_16_,3);
            *(undefined4 *)(*pauVar4 + 0x1c) = uVar11;
          }
          if ((uVar10 & 4) != 0) {
            uVar11 = vextractps_avx(auVar22._0_16_,3);
            *(undefined4 *)(pauVar4[1] + 0xc) = uVar11;
          }
          if ((uVar10 & 8) != 0) {
            uVar11 = vextractps_avx(auVar22._16_16_,3);
            *(undefined4 *)(pauVar4[1] + 0x1c) = uVar11;
          }
          if ((uVar10 & 0x10) != 0) {
            uVar11 = vextractps_avx(auVar52._0_16_,3);
            *(undefined4 *)(pauVar4[2] + 0xc) = uVar11;
          }
          if ((uVar10 & 0x20) != 0) {
            uVar11 = vextractps_avx(auVar52._16_16_,3);
            *(undefined4 *)(pauVar4[2] + 0x1c) = uVar11;
          }
          if ((uVar10 & 0x40) != 0) {
            uVar11 = vextractps_avx(auVar39._0_16_,3);
            *(undefined4 *)(pauVar4[3] + 0xc) = uVar11;
          }
          if ((char)bVar3 < '\0') {
            uVar11 = vextractps_avx(auVar39._16_16_,3);
            *(undefined4 *)(pauVar4[3] + 0x1c) = uVar11;
          }
        }
      }
      uVar12 = uVar12 + 8;
      pauVar8 = pauVar8 + 3;
      pauVar6 = pauVar6 + 3;
      pauVar5 = pauVar5 + 3;
      pauVar4 = pauVar4 + 4;
    } while ((int)uVar12 < (int)(uVar7 & 0xfffffff8));
    if ((int)param_12 <= (int)uVar12) {
      return;
    }
  }
  uVar11 = (undefined4)uVar12;
  auVar32._4_4_ = uVar11;
  auVar32._0_4_ = uVar11;
  auVar32._8_4_ = uVar11;
  auVar32._12_4_ = uVar11;
  auVar32._16_4_ = uVar11;
  auVar32._20_4_ = uVar11;
  auVar32._24_4_ = uVar11;
  auVar32._28_4_ = uVar11;
  auVar32 = vpor_avx2(auVar32,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar22._4_4_ = param_12;
  auVar22._0_4_ = param_12;
  auVar22._8_4_ = param_12;
  auVar22._12_4_ = param_12;
  auVar22._16_4_ = param_12;
  auVar22._20_4_ = param_12;
  auVar22._24_4_ = param_12;
  auVar22._28_4_ = param_12;
  auVar22 = vpcmpgtd_avx2(auVar22,auVar32);
  uVar12 = uVar12 & 0xffffffff;
  pauVar4 = (undefined1 (*) [32])(*param_1 + uVar12 * 0x10);
  auVar32 = vpcmpeqd_avx2(auVar32,auVar32);
  auVar32 = auVar32 & ~auVar22;
  if ((((((((SUB321(auVar32 >> 0x1f,0) & 1) == 0 && (SUB321(auVar32 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar32 >> 0x5f,0) & 1) == 0) && SUB321(auVar32 >> 0x7f,0) == '\0') &&
        (SUB321(auVar32 >> 0x9f,0) & 1) == 0) && SUB321(auVar32 >> 0xbf,0) == '\0') &&
      (SUB321(auVar32 >> 0xdf,0) & 1) == 0) && -1 < auVar32[0x1f]) {
    auVar52 = vperm2f128_avx(*pauVar4,pauVar4[2],0x20);
    auVar39 = vperm2f128_avx(*pauVar4,pauVar4[2],0x31);
    auVar21 = vperm2f128_avx(pauVar4[1],pauVar4[3],0x20);
    auVar16 = vperm2f128_avx(pauVar4[1],pauVar4[3],0x31);
    auVar32 = vunpcklps_avx(auVar52,auVar39);
    auVar52 = vunpckhps_avx(auVar52,auVar39);
    auVar34 = vunpcklps_avx(auVar21,auVar16);
    auVar39 = vunpckhps_avx(auVar21,auVar16);
    auVar21 = vunpcklpd_avx(auVar32,auVar34);
    auVar32 = vunpckhpd_avx(auVar32,auVar34);
    auVar34 = vunpcklpd_avx(auVar52,auVar39);
    auVar52 = vunpckhpd_avx(auVar52,auVar39);
  }
  else {
    auVar21 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar22);
    auVar32 = vgatherdps(ZEXT832(0),auVar22);
    auVar34 = vgatherdps(ZEXT832(0),auVar22);
    auVar52 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar22);
  }
  auVar39 = vmaskmovps_avx(auVar22,auVar21);
  auVar32 = vmaskmovps_avx(auVar22,auVar32);
  auVar21 = vmaskmovps_avx(auVar22,auVar34);
  auVar34 = vcmpps_avx(ZEXT832(0) << 0x20,auVar52,1);
  auVar16._0_4_ = auVar34._0_4_ & auVar22._0_4_;
  auVar16._4_4_ = auVar34._4_4_ & auVar22._4_4_;
  auVar16._8_4_ = auVar34._8_4_ & auVar22._8_4_;
  auVar16._12_4_ = auVar34._12_4_ & auVar22._12_4_;
  auVar16._16_4_ = auVar34._16_4_ & auVar22._16_4_;
  auVar16._20_4_ = auVar34._20_4_ & auVar22._20_4_;
  auVar16._24_4_ = auVar34._24_4_ & auVar22._24_4_;
  auVar16._28_4_ = auVar34._28_4_ & auVar22._28_4_;
  uVar7 = vmovmskps_avx(auVar16);
  if (uVar7 != 0) {
    auVar18 = ZEXT816(0) << 0x20;
    bVar3 = (byte)uVar7;
    auVar30 = ZEXT816(0) << 0x20;
    if ((param_6 & 1) != 0) {
      if ((~bVar3 & 0x81) == 0) {
        auVar30._8_8_ = 0;
        auVar30._0_8_ = *(ulonglong *)(param_7 + uVar12);
      }
      else {
        puVar9 = (undefined1 *)(param_7 + uVar12);
        if ((uVar7 & 1) != 0) {
          uVar1 = *puVar9;
          auVar30[1] = uVar1;
          auVar30[0] = uVar1;
          auVar30[2] = uVar1;
          auVar30[3] = uVar1;
          auVar30[4] = uVar1;
          auVar30[5] = uVar1;
          auVar30[6] = uVar1;
          auVar30[7] = uVar1;
          auVar30[8] = uVar1;
          auVar30[9] = uVar1;
          auVar30[10] = uVar1;
          auVar30[0xb] = uVar1;
          auVar30[0xc] = uVar1;
          auVar30[0xd] = uVar1;
          auVar30[0xe] = uVar1;
          auVar30[0xf] = uVar1;
        }
        if ((uVar7 & 2) != 0) {
          auVar46 = vpinsrb_avx(auVar30,(uint)(byte)puVar9[1],1);
          auVar30 = vpblendw_avx(auVar46,auVar30,0xe);
        }
        if ((uVar7 & 4) != 0) {
          auVar46 = vpmovzxwd_avx(auVar30);
          auVar46 = vpinsrb_avx(auVar46,(uint)(byte)puVar9[2],2);
          auVar46 = vpinsrb_avx(auVar46,(uint)auVar30[3],3);
          auVar30 = vpblendd_avx2(auVar46,auVar30,2);
        }
        if ((uVar7 & 8) != 0) {
          auVar46 = vpshufb_avx(auVar30,___xmm_80800706808005048080030280020100);
          auVar46 = vpinsrb_avx(auVar46,(uint)(byte)puVar9[3],3);
          auVar30 = vpblendd_avx2(auVar46,auVar30,2);
        }
        if ((uVar7 & 0x10) != 0) {
          auVar46 = vpshufb_avx(auVar30,___xmm_80800706808005048080030203020100);
          auVar46 = vpinsrb_avx(auVar46,(uint)(byte)puVar9[4],4);
          auVar46 = vpinsrb_avx(auVar46,(uint)auVar30[5],5);
          auVar30 = vpblendw_avx(auVar46,auVar30,8);
        }
        if ((uVar7 & 0x20) != 0) {
          auVar46 = vpshufb_avx(auVar30,___xmm_80800706808005048080030403020100);
          auVar46 = vpinsrb_avx(auVar46,(uint)(byte)puVar9[5],5);
          auVar30 = vpblendw_avx(auVar46,auVar30,8);
        }
        if ((uVar7 & 0x40) != 0) {
          auVar46 = vpshufb_avx(auVar30,___xmm_80800706808005048080050403020100);
          auVar46 = vpinsrb_avx(auVar46,(uint)(byte)puVar9[6],6);
          auVar30 = vpinsrb_avx(auVar46,(uint)auVar30[7],7);
        }
        if ((uVar7 & 0x80) != 0) {
          auVar46 = vpshufb_avx(auVar30,___xmm_80800706808005048006050403020100);
          auVar30 = vpinsrb_avx(auVar46,(uint)(byte)puVar9[7],7);
        }
      }
    }
    if ((param_9 & 1) != 0) {
      if ((~bVar3 & 0x81) == 0) {
        auVar18._8_8_ = 0;
        auVar18._0_8_ = *(ulonglong *)(param_10 + uVar12);
      }
      else {
        puVar9 = (undefined1 *)(param_10 + uVar12);
        if ((uVar7 & 1) != 0) {
          uVar1 = *puVar9;
          auVar18[1] = uVar1;
          auVar18[0] = uVar1;
          auVar18[2] = uVar1;
          auVar18[3] = uVar1;
          auVar18[4] = uVar1;
          auVar18[5] = uVar1;
          auVar18[6] = uVar1;
          auVar18[7] = uVar1;
          auVar18[8] = uVar1;
          auVar18[9] = uVar1;
          auVar18[10] = uVar1;
          auVar18[0xb] = uVar1;
          auVar18[0xc] = uVar1;
          auVar18[0xd] = uVar1;
          auVar18[0xe] = uVar1;
          auVar18[0xf] = uVar1;
        }
        if ((uVar7 & 2) != 0) {
          auVar46 = vpinsrb_avx(auVar18,(uint)(byte)puVar9[1],1);
          auVar18 = vpblendw_avx(auVar46,auVar18,0xe);
        }
        if ((uVar7 & 4) != 0) {
          auVar46 = vpmovzxwd_avx(auVar18);
          auVar46 = vpinsrb_avx(auVar46,(uint)(byte)puVar9[2],2);
          auVar46 = vpinsrb_avx(auVar46,(uint)auVar18[3],3);
          auVar18 = vpblendd_avx2(auVar46,auVar18,2);
        }
        if ((uVar7 & 8) != 0) {
          auVar46 = vpshufb_avx(auVar18,___xmm_80800706808005048080030280020100);
          auVar46 = vpinsrb_avx(auVar46,(uint)(byte)puVar9[3],3);
          auVar18 = vpblendd_avx2(auVar46,auVar18,2);
        }
        if ((uVar7 & 0x10) != 0) {
          auVar46 = vpshufb_avx(auVar18,___xmm_80800706808005048080030203020100);
          auVar46 = vpinsrb_avx(auVar46,(uint)(byte)puVar9[4],4);
          auVar46 = vpinsrb_avx(auVar46,(uint)auVar18[5],5);
          auVar18 = vpblendw_avx(auVar46,auVar18,8);
        }
        if ((uVar7 & 0x20) != 0) {
          auVar46 = vpshufb_avx(auVar18,___xmm_80800706808005048080030403020100);
          auVar46 = vpinsrb_avx(auVar46,(uint)(byte)puVar9[5],5);
          auVar18 = vpblendw_avx(auVar46,auVar18,8);
        }
        if ((uVar7 & 0x40) != 0) {
          auVar46 = vpshufb_avx(auVar18,___xmm_80800706808005048080050403020100);
          auVar46 = vpinsrb_avx(auVar46,(uint)(byte)puVar9[6],6);
          auVar18 = vpinsrb_avx(auVar46,(uint)auVar18[7],7);
        }
        if ((uVar7 & 0x80) != 0) {
          auVar46 = vpshufb_avx(auVar18,___xmm_80800706808005048006050403020100);
          auVar18 = vpinsrb_avx(auVar46,(uint)(byte)puVar9[7],7);
        }
      }
    }
    auVar22 = vpmovsxbd_avx2(auVar30);
    vpslld_avx2(auVar22,2);
    auVar34 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar16);
    auVar22 = vpmovsxbd_avx2(auVar18);
    vpslld_avx2(auVar22,2);
    auVar22 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar16);
    pauVar5 = (undefined1 (*) [32])(*param_2 + uVar12 * 0xc);
    if (bVar3 == 0xff) {
      auVar40 = pauVar5[1];
      auVar38 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar40);
      auVar45 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*pauVar5);
      auVar38 = vblendps_avx(auVar45,auVar38,0x88);
      auVar45 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar40);
      auVar47 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,pauVar5[2]);
      auVar45 = vblendps_avx(auVar47,auVar45,0x13);
      local_2e0._16_16_ = auVar45._0_16_;
      local_2e0._0_16_ = auVar38._0_16_;
      auVar51 = vperm2f128_avx(auVar38,auVar45,0x31);
      auVar40 = vblendps_avx(auVar40,*pauVar5,0x24);
      auVar40 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar40);
      auVar38 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,pauVar5[2]);
      auVar38 = vblendps_avx(auVar40,auVar38,0xe0);
      lVar2 = uVar12 * 0xc;
      auVar40 = *(undefined1 (*) [32])(param_3[1] + lVar2);
      auVar45 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar40);
      auVar47 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*(undefined1 (*) [32])(*param_3 + lVar2));
      auVar45 = vblendps_avx(auVar47,auVar45,0x88);
      auVar47 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar40);
      auVar37 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,*(undefined1 (*) [32])(param_3[2] + lVar2));
      auVar47 = vblendps_avx(auVar37,auVar47,0x13);
      auVar49._16_16_ = auVar47._0_16_;
      auVar49._0_16_ = auVar45._0_16_;
      auVar33 = vperm2f128_avx(auVar45,auVar47,0x31);
      auVar40 = vblendps_avx(auVar40,*(undefined1 (*) [32])(*param_3 + lVar2),0x24);
      auVar40 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar40);
      auVar45 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,*(undefined1 (*) [32])(param_3[2] + lVar2));
      auVar45 = vblendps_avx(auVar40,auVar45,0xe0);
      auVar40 = *(undefined1 (*) [32])(param_4[1] + lVar2);
      auVar47 = vpermps_avx2(___ymm_0000000200000002000000000000000000000001000000000000000100000000
                             ,auVar40);
      auVar37 = vpermps_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000
                             ,*(undefined1 (*) [32])(*param_4 + lVar2));
      auVar47 = vblendps_avx(auVar37,auVar47,0x88);
      auVar37 = vpermps_avx2(___ymm_0000000700000005000000070000000500000003000000010000000700000004
                             ,auVar40);
      auVar36 = vpermps_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000
                             ,*(undefined1 (*) [32])(param_4[2] + lVar2));
      auVar37 = vblendps_avx(auVar36,auVar37,0x13);
      auVar36._16_16_ = auVar37._0_16_;
      auVar36._0_16_ = auVar47._0_16_;
      auVar47 = vperm2f128_avx(auVar47,auVar37,0x31);
      auVar40 = vblendps_avx(auVar40,*(undefined1 (*) [32])(*param_4 + lVar2),0x24);
      auVar40 = vpermps_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002
                             ,auVar40);
      auVar37 = vpermps_avx2(___ymm_0000000700000004000000010000000000000003000000000000000100000000
                             ,*(undefined1 (*) [32])(param_4[2] + lVar2));
      auVar40 = vblendps_avx(auVar40,auVar37,0xe0);
    }
    else {
      local_2e0 = vgatherdps(ZEXT832(0),auVar16);
      auVar51 = vgatherdps(ZEXT832(0) << 0x20,auVar16);
      auVar38 = vgatherdps(ZEXT832(0),auVar16);
      auVar49 = vgatherdps(ZEXT832(0),auVar16);
      auVar33 = vgatherdps(ZEXT832(0),auVar16);
      auVar45 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar16);
      auVar36 = vgatherdps(ZEXT832(0),auVar16);
      auVar47 = vgatherdps(ZEXT832(0),auVar16);
      auVar40 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar16);
    }
    auVar37 = vsubps_avx(auVar39,auVar49);
    auVar33 = vsubps_avx(auVar32,auVar33);
    auVar45 = vsubps_avx(auVar21,auVar45);
    fVar17 = auVar34._0_4_;
    auVar15._0_4_ = -(fVar17 * auVar37._0_4_) + auVar39._0_4_;
    fVar23 = auVar34._4_4_;
    auVar15._4_4_ = -(fVar23 * auVar37._4_4_) + auVar39._4_4_;
    fVar24 = auVar34._8_4_;
    auVar15._8_4_ = -(fVar24 * auVar37._8_4_) + auVar39._8_4_;
    fVar25 = auVar34._12_4_;
    auVar15._12_4_ = -(fVar25 * auVar37._12_4_) + auVar39._12_4_;
    fVar26 = auVar34._16_4_;
    auVar15._16_4_ = -(fVar26 * auVar37._16_4_) + auVar39._16_4_;
    fVar27 = auVar34._20_4_;
    auVar15._20_4_ = -(fVar27 * auVar37._20_4_) + auVar39._20_4_;
    fVar28 = auVar34._24_4_;
    auVar15._24_4_ = -(fVar28 * auVar37._24_4_) + auVar39._24_4_;
    fVar29 = auVar34._28_4_;
    auVar15._28_4_ = -(fVar29 * auVar37._28_4_) + auVar39._28_4_;
    auVar43._0_4_ = -(fVar17 * auVar33._0_4_) + auVar32._0_4_;
    auVar43._4_4_ = -(fVar23 * auVar33._4_4_) + auVar32._4_4_;
    auVar43._8_4_ = -(fVar24 * auVar33._8_4_) + auVar32._8_4_;
    auVar43._12_4_ = -(fVar25 * auVar33._12_4_) + auVar32._12_4_;
    auVar43._16_4_ = -(fVar26 * auVar33._16_4_) + auVar32._16_4_;
    auVar43._20_4_ = -(fVar27 * auVar33._20_4_) + auVar32._20_4_;
    auVar43._24_4_ = -(fVar28 * auVar33._24_4_) + auVar32._24_4_;
    auVar43._28_4_ = -(fVar29 * auVar33._28_4_) + auVar32._28_4_;
    auVar48._0_4_ = -(fVar17 * auVar45._0_4_) + auVar21._0_4_;
    auVar48._4_4_ = -(fVar23 * auVar45._4_4_) + auVar21._4_4_;
    auVar48._8_4_ = -(fVar24 * auVar45._8_4_) + auVar21._8_4_;
    auVar48._12_4_ = -(fVar25 * auVar45._12_4_) + auVar21._12_4_;
    auVar48._16_4_ = -(fVar26 * auVar45._16_4_) + auVar21._16_4_;
    auVar48._20_4_ = -(fVar27 * auVar45._20_4_) + auVar21._20_4_;
    auVar48._24_4_ = -(fVar28 * auVar45._24_4_) + auVar21._24_4_;
    auVar48._28_4_ = -(fVar29 * auVar45._28_4_) + auVar21._28_4_;
    auVar32 = vmaskmovps_avx(auVar16,auVar15);
    auVar39 = vmaskmovps_avx(auVar16,auVar43);
    auVar21 = vmaskmovps_avx(auVar16,auVar48);
    auVar34 = vsubps_avx(auVar32,local_2e0);
    auVar45 = vsubps_avx(auVar39,auVar51);
    auVar38 = vsubps_avx(auVar21,auVar38);
    fVar17 = auVar22._0_4_;
    auVar51._0_4_ = -(fVar17 * (-(param_5 * auVar36._0_4_) + auVar34._0_4_)) + auVar32._0_4_;
    fVar23 = auVar22._4_4_;
    auVar51._4_4_ = -(fVar23 * (-(param_5 * auVar36._4_4_) + auVar34._4_4_)) + auVar32._4_4_;
    fVar24 = auVar22._8_4_;
    auVar51._8_4_ = -(fVar24 * (-(param_5 * auVar36._8_4_) + auVar34._8_4_)) + auVar32._8_4_;
    fVar25 = auVar22._12_4_;
    auVar51._12_4_ = -(fVar25 * (-(param_5 * auVar36._12_4_) + auVar34._12_4_)) + auVar32._12_4_;
    fVar26 = auVar22._16_4_;
    auVar51._16_4_ = -(fVar26 * (-(param_5 * auVar36._16_4_) + auVar34._16_4_)) + auVar32._16_4_;
    fVar27 = auVar22._20_4_;
    auVar51._20_4_ = -(fVar27 * (-(param_5 * auVar36._20_4_) + auVar34._20_4_)) + auVar32._20_4_;
    fVar28 = auVar22._24_4_;
    auVar51._24_4_ = -(fVar28 * (-(param_5 * auVar36._24_4_) + auVar34._24_4_)) + auVar32._24_4_;
    fVar29 = auVar22._28_4_;
    auVar51._28_4_ = -(fVar29 * (-(param_5 * auVar36._28_4_) + auVar34._28_4_)) + auVar32._28_4_;
    auVar37._0_4_ = -(fVar17 * (-(param_5 * auVar47._0_4_) + auVar45._0_4_)) + auVar39._0_4_;
    auVar37._4_4_ = -(fVar23 * (-(param_5 * auVar47._4_4_) + auVar45._4_4_)) + auVar39._4_4_;
    auVar37._8_4_ = -(fVar24 * (-(param_5 * auVar47._8_4_) + auVar45._8_4_)) + auVar39._8_4_;
    auVar37._12_4_ = -(fVar25 * (-(param_5 * auVar47._12_4_) + auVar45._12_4_)) + auVar39._12_4_;
    auVar37._16_4_ = -(fVar26 * (-(param_5 * auVar47._16_4_) + auVar45._16_4_)) + auVar39._16_4_;
    auVar37._20_4_ = -(fVar27 * (-(param_5 * auVar47._20_4_) + auVar45._20_4_)) + auVar39._20_4_;
    auVar37._24_4_ = -(fVar28 * (-(param_5 * auVar47._24_4_) + auVar45._24_4_)) + auVar39._24_4_;
    auVar37._28_4_ = -(fVar29 * (-(param_5 * auVar47._28_4_) + auVar45._28_4_)) + auVar39._28_4_;
    auVar39._0_4_ = -(fVar17 * (-(param_5 * auVar40._0_4_) + auVar38._0_4_)) + auVar21._0_4_;
    auVar39._4_4_ = -(fVar23 * (-(param_5 * auVar40._4_4_) + auVar38._4_4_)) + auVar21._4_4_;
    auVar39._8_4_ = -(fVar24 * (-(param_5 * auVar40._8_4_) + auVar38._8_4_)) + auVar21._8_4_;
    auVar39._12_4_ = -(fVar25 * (-(param_5 * auVar40._12_4_) + auVar38._12_4_)) + auVar21._12_4_;
    auVar39._16_4_ = -(fVar26 * (-(param_5 * auVar40._16_4_) + auVar38._16_4_)) + auVar21._16_4_;
    auVar39._20_4_ = -(fVar27 * (-(param_5 * auVar40._20_4_) + auVar38._20_4_)) + auVar21._20_4_;
    auVar39._24_4_ = -(fVar28 * (-(param_5 * auVar40._24_4_) + auVar38._24_4_)) + auVar21._24_4_;
    auVar39._28_4_ = -(fVar29 * (-(param_5 * auVar40._28_4_) + auVar38._28_4_)) + auVar21._28_4_;
    auVar32 = vmaskmovps_avx(auVar16,auVar51);
    auVar22 = vmaskmovps_avx(auVar16,auVar37);
    auVar39 = vmaskmovps_avx(auVar16,auVar39);
    if (bVar3 == 0xff) {
      auVar21 = vunpcklps_avx(auVar32,auVar22);
      auVar16 = vunpcklps_avx(auVar39,auVar52);
      auVar34 = vunpcklpd_avx(auVar21,auVar16);
      auVar21 = vunpckhpd_avx(auVar21,auVar16);
      auVar32 = vunpckhps_avx(auVar32,auVar22);
      auVar22 = vunpckhps_avx(auVar39,auVar52);
      auVar52 = vunpcklpd_avx(auVar32,auVar22);
      auVar35._16_16_ = auVar21._0_16_;
      auVar35._0_16_ = auVar34._0_16_;
      *pauVar4 = auVar35;
      auVar32 = vunpckhpd_avx(auVar32,auVar22);
      auVar38._16_16_ = auVar32._0_16_;
      auVar38._0_16_ = auVar52._0_16_;
      pauVar4[1] = auVar38;
      auVar22 = vperm2f128_avx(auVar34,auVar21,0x31);
      pauVar4[2] = auVar22;
      auVar32 = vperm2f128_avx(auVar52,auVar32,0x31);
      pauVar4[3] = auVar32;
    }
    else {
      auVar41 = auVar32._0_16_;
      auVar42 = auVar32._16_16_;
      auVar30 = auVar22._0_16_;
      auVar18 = auVar22._16_16_;
      auVar46 = auVar39._0_16_;
      auVar44 = auVar39._16_16_;
      auVar50 = auVar52._0_16_;
      auVar53 = auVar52._16_16_;
      if ((uVar7 & 1) != 0) {
        *(int *)*pauVar4 = auVar32._0_4_;
      }
      if ((uVar7 & 2) != 0) {
        uVar11 = vextractps_avx(auVar41,1);
        *(undefined4 *)(*pauVar4 + 0x10) = uVar11;
      }
      if ((uVar7 & 4) != 0) {
        uVar11 = vextractps_avx(auVar41,2);
        *(undefined4 *)pauVar4[1] = uVar11;
      }
      if ((uVar7 & 8) != 0) {
        uVar11 = vextractps_avx(auVar41,3);
        *(undefined4 *)(pauVar4[1] + 0x10) = uVar11;
      }
      if ((uVar7 & 0x10) != 0) {
        *(int *)pauVar4[2] = auVar32._16_4_;
      }
      if ((uVar7 & 0x20) != 0) {
        uVar11 = vextractps_avx(auVar42,1);
        *(undefined4 *)(pauVar4[2] + 0x10) = uVar11;
      }
      if ((uVar7 & 0x40) != 0) {
        uVar11 = vextractps_avx(auVar42,2);
        *(undefined4 *)pauVar4[3] = uVar11;
      }
      if ((char)bVar3 < '\0') {
        uVar11 = vextractps_avx(auVar42,3);
        *(undefined4 *)(pauVar4[3] + 0x10) = uVar11;
      }
      if ((uVar7 & 1) != 0) {
        *(int *)(*pauVar4 + 4) = auVar22._0_4_;
      }
      if ((uVar7 & 2) != 0) {
        uVar11 = vextractps_avx(auVar30,1);
        *(undefined4 *)(*pauVar4 + 0x14) = uVar11;
      }
      if ((uVar7 & 4) != 0) {
        uVar11 = vextractps_avx(auVar30,2);
        *(undefined4 *)(pauVar4[1] + 4) = uVar11;
      }
      if ((uVar7 & 8) != 0) {
        uVar11 = vextractps_avx(auVar30,3);
        *(undefined4 *)(pauVar4[1] + 0x14) = uVar11;
      }
      if ((uVar7 & 0x10) != 0) {
        *(int *)(pauVar4[2] + 4) = auVar22._16_4_;
      }
      if ((uVar7 & 0x20) != 0) {
        uVar11 = vextractps_avx(auVar18,1);
        *(undefined4 *)(pauVar4[2] + 0x14) = uVar11;
      }
      if ((uVar7 & 0x40) != 0) {
        uVar11 = vextractps_avx(auVar18,2);
        *(undefined4 *)(pauVar4[3] + 4) = uVar11;
      }
      if ((char)bVar3 < '\0') {
        uVar11 = vextractps_avx(auVar18,3);
        *(undefined4 *)(pauVar4[3] + 0x14) = uVar11;
      }
      if ((uVar7 & 1) != 0) {
        *(int *)(*pauVar4 + 8) = auVar39._0_4_;
      }
      if ((uVar7 & 2) != 0) {
        uVar11 = vextractps_avx(auVar46,1);
        *(undefined4 *)(*pauVar4 + 0x18) = uVar11;
      }
      if ((uVar7 & 4) != 0) {
        uVar11 = vextractps_avx(auVar46,2);
        *(undefined4 *)(pauVar4[1] + 8) = uVar11;
      }
      if ((uVar7 & 8) != 0) {
        uVar11 = vextractps_avx(auVar46,3);
        *(undefined4 *)(pauVar4[1] + 0x18) = uVar11;
      }
      if ((uVar7 & 0x10) != 0) {
        *(int *)(pauVar4[2] + 8) = auVar39._16_4_;
      }
      if ((uVar7 & 0x20) != 0) {
        uVar11 = vextractps_avx(auVar44,1);
        *(undefined4 *)(pauVar4[2] + 0x18) = uVar11;
      }
      if ((uVar7 & 0x40) != 0) {
        uVar11 = vextractps_avx(auVar44,2);
        *(undefined4 *)(pauVar4[3] + 8) = uVar11;
      }
      if ((char)bVar3 < '\0') {
        uVar11 = vextractps_avx(auVar44,3);
        *(undefined4 *)(pauVar4[3] + 0x18) = uVar11;
      }
      if ((uVar7 & 1) != 0) {
        *(int *)(*pauVar4 + 0xc) = auVar52._0_4_;
      }
      if ((uVar7 & 2) != 0) {
        uVar11 = vextractps_avx(auVar50,1);
        *(undefined4 *)(*pauVar4 + 0x1c) = uVar11;
      }
      if ((uVar7 & 4) != 0) {
        uVar11 = vextractps_avx(auVar50,2);
        *(undefined4 *)(pauVar4[1] + 0xc) = uVar11;
      }
      if ((uVar7 & 8) != 0) {
        uVar11 = vextractps_avx(auVar50,3);
        *(undefined4 *)(pauVar4[1] + 0x1c) = uVar11;
      }
      if ((uVar7 & 0x10) != 0) {
        *(int *)(pauVar4[2] + 0xc) = auVar52._16_4_;
      }
      if ((uVar7 & 0x20) != 0) {
        uVar11 = vextractps_avx(auVar53,1);
        *(undefined4 *)(pauVar4[2] + 0x1c) = uVar11;
      }
      if ((uVar7 & 0x40) != 0) {
        uVar11 = vextractps_avx(auVar53,2);
        *(undefined4 *)(pauVar4[3] + 0xc) = uVar11;
      }
      if ((char)bVar3 < '\0') {
        uVar11 = vextractps_avx(auVar53,3);
        *(undefined4 *)(pauVar4[3] + 0x1c) = uVar11;
      }
    }
  }
  return;
}

// MultiResUpdateFineTargets_avx2 @ 1405a3bc0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MultiResUpdateFineTargets_avx2(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 auVar2 [32];
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  undefined1 (*pauVar8) [32];
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [16];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [16];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [16];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [16];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [16];
  undefined1 auVar42 [32];
  undefined1 auVar43 [16];
  undefined1 auVar44 [32];
  undefined1 auVar45 [16];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [32];
  undefined1 auVar52 [16];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  float fVar57;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined1 auVar58 [16];
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  longlong in_stack_00000030;
  longlong in_stack_00000038;
  uint in_stack_00000040;
  undefined1 local_368 [8];
  float fStack_360;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  undefined1 local_348 [8];
  float fStack_340;
  float fStack_33c;
  float fStack_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  undefined1 local_328 [8];
  float fStack_320;
  float fStack_31c;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  undefined1 local_308 [8];
  float fStack_300;
  float fStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
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
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
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
  
  uVar1 = __real_0000000c;
  iVar5 = __real_00000008;
  iVar4 = __real_00000004;
  uVar7 = in_stack_00000040 + 7;
  if (-1 < (int)in_stack_00000040) {
    uVar7 = in_stack_00000040;
  }
  if ((int)(uVar7 & 0xfffffff8) < 1) {
    uVar9 = 0;
    if ((int)in_stack_00000040 < 1) {
      return;
    }
  }
  else {
    pauVar8 = (undefined1 (*) [32])(in_stack_00000030 + 0x60);
    lVar11 = 0x40;
    uVar9 = 0;
    do {
      auVar19 = ___ymm_0000000000000002000000000000000700000001000000000000000600000000;
      auVar18 = ___ymm_0000000000000003000000040000000700000000000000030000000000000003;
      auVar14 = ___ymm_0000000400000003000000020000000100000000000000000000000000000000;
      auVar47 = vperm2f128_avx(pauVar8[-3],pauVar8[-1],0x20);
      auVar17 = vperm2f128_avx(pauVar8[-3],pauVar8[-1],0x31);
      auVar54 = vperm2f128_avx(pauVar8[-2],*pauVar8,0x20);
      auVar15 = vperm2f128_avx(pauVar8[-2],*pauVar8,0x31);
      auVar13 = vunpcklps_avx(auVar47,auVar17);
      auVar47 = vunpckhps_avx(auVar47,auVar17);
      auVar2 = vunpcklps_avx(auVar54,auVar15);
      auVar17 = vunpckhps_avx(auVar54,auVar15);
      auVar54 = vunpcklpd_avx(auVar13,auVar2);
      auVar13 = vunpckhpd_avx(auVar13,auVar2);
      auVar15 = vunpcklpd_avx(auVar47,auVar17);
      auVar2 = vunpckhpd_avx(auVar47,auVar17);
      auVar47 = *(undefined1 (*) [32])(in_stack_00000038 + -0x40 + lVar11);
      auVar17 = *(undefined1 (*) [32])(in_stack_00000038 + -0x20 + lVar11);
      auVar25 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                            auVar17);
      auVar30 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                            auVar47);
      auVar30 = vpblendd_avx2(auVar30,auVar25,0x88);
      auVar25 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                            auVar17);
      auVar32 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                            *(undefined1 (*) [32])(in_stack_00000038 + lVar11));
      auVar25 = vpblendd_avx2(auVar32,auVar25,0x13);
      auVar20 = ZEXT116(0) * auVar25._0_16_ | ZEXT116(1) * auVar30._0_16_;
      auVar27 = ZEXT116(0) * auVar30._16_16_ | ZEXT116(1) * auVar25._0_16_;
      auVar28._16_16_ = auVar27;
      auVar28._0_16_ = auVar20;
      auVar26 = vperm2i128_avx2(auVar30,auVar25,0x31);
      auVar47 = vpblendd_avx2(auVar17,auVar47,0x24);
      auVar47 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                            auVar47);
      auVar21._16_16_ = ___xmm_00000007000000040000000100000000;
      auVar21._0_16_ = ___xmm_00000007000000040000000100000000;
      auVar17 = vpermd_avx2(auVar21,*(undefined1 (*) [32])(in_stack_00000038 + lVar11));
      auVar32 = vpblendd_avx2(auVar47,auVar17,0xe0);
      auVar47._4_4_ = auVar20._4_4_ * 3;
      auVar47._0_4_ = auVar20._0_4_ * 3;
      auVar47._8_4_ = auVar20._8_4_ * 3;
      auVar47._12_4_ = auVar20._12_4_ * 3;
      auVar47._16_4_ = auVar27._0_4_ * 3;
      auVar47._20_4_ = auVar27._4_4_ * 3;
      auVar47._24_4_ = auVar27._8_4_ * 3;
      auVar47._28_4_ = auVar27._12_4_ * 3;
      auVar17 = vpcmpeqd_avx2(auVar17,auVar17);
      auVar21 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar17);
      auVar33._4_4_ = uVar1;
      auVar33._0_4_ = uVar1;
      auVar33._8_4_ = uVar1;
      auVar33._12_4_ = uVar1;
      auVar33._16_4_ = uVar1;
      auVar33._20_4_ = uVar1;
      auVar33._24_4_ = uVar1;
      auVar33._28_4_ = uVar1;
      auVar25 = vpmulld_avx2(auVar28,auVar33);
      auVar17 = vpcmpeqd_avx2(auVar30,auVar30);
      auVar35 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar17);
      auVar22._4_4_ = iVar5;
      auVar22._0_4_ = iVar5;
      auVar22._8_4_ = iVar5;
      auVar22._12_4_ = iVar5;
      auVar22._16_4_ = iVar5;
      auVar22._20_4_ = iVar5;
      auVar22._24_4_ = iVar5;
      auVar22._28_4_ = iVar5;
      auVar17._0_4_ = auVar25._0_4_ + iVar5;
      auVar17._4_4_ = auVar25._4_4_ + iVar5;
      auVar17._8_4_ = auVar25._8_4_ + iVar5;
      auVar17._12_4_ = auVar25._12_4_ + iVar5;
      auVar17._16_4_ = auVar25._16_4_ + iVar5;
      auVar17._20_4_ = auVar25._20_4_ + iVar5;
      auVar17._24_4_ = auVar25._24_4_ + iVar5;
      auVar17._28_4_ = auVar25._28_4_ + iVar5;
      auVar25 = vpcmpeqd_avx2(auVar22,auVar22);
      auVar36 = vgatherdps(ZEXT832(0) << 0x20,auVar25);
      auVar25 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar37 = vgatherdps(ZEXT832(0) << 0x20,auVar25);
      auVar25 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar38 = vgatherdps(ZEXT832(0) << 0x20,auVar25);
      auVar25 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar39 = vgatherdps(ZEXT832(0) << 0x20,auVar25);
      auVar47 = vpcmpeqd_avx2(auVar47,auVar47);
      auVar28 = vgatherdps(ZEXT832(0),auVar47);
      auVar47 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar56 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar47);
      auVar47 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar22 = vgatherdps(ZEXT432(0) << 0x20,auVar47);
      auVar47 = vpcmpeqd_avx2(auVar17,auVar17);
      auVar23 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
      auVar47 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar48 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar47);
      auVar47 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar24 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
      auVar47 = vpmulld_avx2(auVar26,auVar33);
      auVar25._0_4_ = auVar47._0_4_ + iVar4;
      auVar25._4_4_ = auVar47._4_4_ + iVar4;
      auVar25._8_4_ = auVar47._8_4_ + iVar4;
      auVar25._12_4_ = auVar47._12_4_ + iVar4;
      auVar25._16_4_ = auVar47._16_4_ + iVar4;
      auVar25._20_4_ = auVar47._20_4_ + iVar4;
      auVar25._24_4_ = auVar47._24_4_ + iVar4;
      auVar25._28_4_ = auVar47._28_4_ + iVar4;
      auVar47 = vpcmpeqd_avx2(auVar24,auVar24);
      auVar55 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar47);
      auVar47 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar44 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar47);
      auVar47 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar29 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
      auVar47 = vpcmpeqd_avx2(auVar25,auVar25);
      auVar46 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
      auVar47 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar40 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
      auVar47 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar25 = vgatherdps(ZEXT832(0),auVar47);
      auVar30._4_4_ = auVar32._4_4_ * 3;
      auVar30._0_4_ = auVar32._0_4_ * 3;
      auVar30._8_4_ = auVar32._8_4_ * 3;
      auVar30._12_4_ = auVar32._12_4_ * 3;
      auVar30._16_4_ = auVar32._16_4_ * 3;
      auVar30._20_4_ = auVar32._20_4_ * 3;
      auVar30._24_4_ = auVar32._24_4_ * 3;
      auVar30._28_4_ = auVar32._28_4_ * 3;
      auVar47 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar53 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar47);
      auVar47 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar42 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
      auVar47 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar26 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
      vpmulld_avx2(auVar32,auVar33);
      auVar47 = vpcmpeqd_avx2(auVar32,auVar32);
      auVar34 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
      auVar47 = vpcmpeqd_avx2(auVar30,auVar30);
      auVar51 = vgatherdps(ZEXT832(0),auVar47);
      auVar47 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar32 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
      auVar47 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar17 = vgatherdps(ZEXT432(0) << 0x20,auVar47);
      auVar47 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar33 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
      auVar47 = vpcmpeqd_avx2((undefined1  [32])0x0,(undefined1  [32])0x0);
      auVar30 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
      local_1e8 = auVar37._0_4_;
      fStack_1e4 = auVar37._4_4_;
      fStack_1e0 = auVar37._8_4_;
      fStack_1dc = auVar37._12_4_;
      fStack_1d8 = auVar37._16_4_;
      fStack_1d4 = auVar37._20_4_;
      fStack_1d0 = auVar37._24_4_;
      fStack_1cc = auVar37._28_4_;
      fVar57 = auVar2._0_4_;
      local_368._0_4_ = auVar21._0_4_;
      fVar59 = auVar2._4_4_;
      local_368._4_4_ = auVar21._4_4_;
      fVar60 = auVar2._8_4_;
      fStack_360 = auVar21._8_4_;
      fVar61 = auVar2._12_4_;
      fStack_35c = auVar21._12_4_;
      fVar62 = auVar2._16_4_;
      fStack_358 = auVar21._16_4_;
      fVar63 = auVar2._20_4_;
      fStack_354 = auVar21._20_4_;
      fVar64 = auVar2._24_4_;
      fStack_350 = auVar21._24_4_;
      fVar65 = auVar2._28_4_;
      fStack_34c = auVar21._28_4_;
      local_208 = auVar38._0_4_;
      fStack_204 = auVar38._4_4_;
      fStack_200 = auVar38._8_4_;
      fStack_1fc = auVar38._12_4_;
      fStack_1f8 = auVar38._16_4_;
      fStack_1f4 = auVar38._20_4_;
      fStack_1f0 = auVar38._24_4_;
      fStack_1ec = auVar38._28_4_;
      local_148 = auVar35._0_4_;
      fStack_144 = auVar35._4_4_;
      fStack_140 = auVar35._8_4_;
      fStack_13c = auVar35._12_4_;
      fStack_138 = auVar35._16_4_;
      fStack_134 = auVar35._20_4_;
      fStack_130 = auVar35._24_4_;
      fStack_12c = auVar35._28_4_;
      local_168 = auVar36._0_4_;
      fStack_164 = auVar36._4_4_;
      fStack_160 = auVar36._8_4_;
      fStack_15c = auVar36._12_4_;
      fStack_158 = auVar36._16_4_;
      fStack_154 = auVar36._20_4_;
      fStack_150 = auVar36._24_4_;
      fStack_14c = auVar36._28_4_;
      local_2e8 = auVar23._0_4_;
      fStack_2e4 = auVar23._4_4_;
      fStack_2e0 = auVar23._8_4_;
      fStack_2dc = auVar23._12_4_;
      fStack_2d8 = auVar23._16_4_;
      fStack_2d4 = auVar23._20_4_;
      fStack_2d0 = auVar23._24_4_;
      fStack_2cc = auVar23._28_4_;
      local_348._0_4_ = auVar13._0_4_;
      local_348._4_4_ = auVar13._4_4_;
      fStack_340 = auVar13._8_4_;
      fStack_33c = auVar13._12_4_;
      fStack_338 = auVar13._16_4_;
      fStack_334 = auVar13._20_4_;
      fStack_330 = auVar13._24_4_;
      fStack_32c = auVar13._28_4_;
      local_328._0_4_ = auVar54._0_4_;
      local_328._4_4_ = auVar54._4_4_;
      fStack_320 = auVar54._8_4_;
      fStack_31c = auVar54._12_4_;
      fStack_318 = auVar54._16_4_;
      fStack_314 = auVar54._20_4_;
      fStack_310 = auVar54._24_4_;
      fStack_30c = auVar54._28_4_;
      local_308._0_4_ = auVar15._0_4_;
      local_308._4_4_ = auVar15._4_4_;
      fStack_300 = auVar15._8_4_;
      fStack_2fc = auVar15._12_4_;
      fStack_2f8 = auVar15._16_4_;
      fStack_2f4 = auVar15._20_4_;
      fStack_2f0 = auVar15._24_4_;
      fStack_2ec = auVar15._28_4_;
      auVar41._0_4_ =
           (float)local_308._0_4_ * (fVar57 * auVar42._0_4_ + auVar53._0_4_) +
           (float)local_328._0_4_ * (fVar57 * local_1e8 + (float)local_368._0_4_) +
           (float)local_348._0_4_ * (fVar57 * auVar48._0_4_ + local_2e8);
      auVar41._4_4_ =
           (float)local_308._4_4_ * (fVar59 * auVar42._4_4_ + auVar53._4_4_) +
           (float)local_328._4_4_ * (fVar59 * fStack_1e4 + (float)local_368._4_4_) +
           (float)local_348._4_4_ * (fVar59 * auVar48._4_4_ + fStack_2e4);
      auVar41._8_4_ =
           fStack_300 * (fVar60 * auVar42._8_4_ + auVar53._8_4_) +
           fStack_320 * (fVar60 * fStack_1e0 + fStack_360) +
           fStack_340 * (fVar60 * auVar48._8_4_ + fStack_2e0);
      auVar41._12_4_ =
           fStack_2fc * (fVar61 * auVar42._12_4_ + auVar53._12_4_) +
           fStack_31c * (fVar61 * fStack_1dc + fStack_35c) +
           fStack_33c * (fVar61 * auVar48._12_4_ + fStack_2dc);
      auVar35._16_4_ =
           fStack_2f8 * (fVar62 * auVar42._16_4_ + auVar53._16_4_) +
           fStack_318 * (fVar62 * fStack_1d8 + fStack_358) +
           fStack_338 * (fVar62 * auVar48._16_4_ + fStack_2d8);
      auVar35._0_16_ = auVar41;
      auVar35._20_4_ =
           fStack_2f4 * (fVar63 * auVar42._20_4_ + auVar53._20_4_) +
           fStack_314 * (fVar63 * fStack_1d4 + fStack_354) +
           fStack_334 * (fVar63 * auVar48._20_4_ + fStack_2d4);
      auVar35._24_4_ =
           fStack_2f0 * (fVar64 * auVar42._24_4_ + auVar53._24_4_) +
           fStack_310 * (fVar64 * fStack_1d0 + fStack_350) +
           fStack_330 * (fVar64 * auVar48._24_4_ + fStack_2d0);
      auVar35._28_4_ =
           fStack_2ec * (fVar65 * auVar42._28_4_ + auVar53._28_4_) +
           fStack_30c * (fVar65 * fStack_1cc + fStack_34c) +
           fStack_32c * (fVar65 * auVar48._28_4_ + fStack_2cc);
      auVar49._0_4_ =
           (float)local_308._0_4_ * (fVar57 * auVar51._0_4_ + auVar34._0_4_) +
           (float)local_328._0_4_ * (fVar57 * local_208 + local_148) +
           (float)local_348._0_4_ * (fVar57 * auVar44._0_4_ + auVar55._0_4_);
      auVar49._4_4_ =
           (float)local_308._4_4_ * (fVar59 * auVar51._4_4_ + auVar34._4_4_) +
           (float)local_328._4_4_ * (fVar59 * fStack_204 + fStack_144) +
           (float)local_348._4_4_ * (fVar59 * auVar44._4_4_ + auVar55._4_4_);
      auVar49._8_4_ =
           fStack_300 * (fVar60 * auVar51._8_4_ + auVar34._8_4_) +
           fStack_320 * (fVar60 * fStack_200 + fStack_140) +
           fStack_340 * (fVar60 * auVar44._8_4_ + auVar55._8_4_);
      auVar49._12_4_ =
           fStack_2fc * (fVar61 * auVar51._12_4_ + auVar34._12_4_) +
           fStack_31c * (fVar61 * fStack_1fc + fStack_13c) +
           fStack_33c * (fVar61 * auVar44._12_4_ + auVar55._12_4_);
      auVar36._16_4_ =
           fStack_2f8 * (fVar62 * auVar51._16_4_ + auVar34._16_4_) +
           fStack_318 * (fVar62 * fStack_1f8 + fStack_138) +
           fStack_338 * (fVar62 * auVar44._16_4_ + auVar55._16_4_);
      auVar36._0_16_ = auVar49;
      auVar36._20_4_ =
           fStack_2f4 * (fVar63 * auVar51._20_4_ + auVar34._20_4_) +
           fStack_314 * (fVar63 * fStack_1f4 + fStack_134) +
           fStack_334 * (fVar63 * auVar44._20_4_ + auVar55._20_4_);
      auVar36._24_4_ =
           fStack_2f0 * (fVar64 * auVar51._24_4_ + auVar34._24_4_) +
           fStack_310 * (fVar64 * fStack_1f0 + fStack_130) +
           fStack_330 * (fVar64 * auVar44._24_4_ + auVar55._24_4_);
      auVar36._28_4_ =
           fStack_2ec * (fVar65 * auVar51._28_4_ + auVar34._28_4_) +
           fStack_30c * (fVar65 * fStack_1ec + fStack_12c) +
           fStack_32c * (fVar65 * auVar44._28_4_ + auVar55._28_4_);
      auVar34._0_4_ =
           (float)local_308._0_4_ * (fVar57 * auVar33._0_4_ + auVar17._0_4_) +
           (float)local_328._0_4_ * (fVar57 * auVar56._0_4_ + local_168) +
           (float)local_348._0_4_ * (fVar57 * auVar40._0_4_ + auVar46._0_4_);
      auVar34._4_4_ =
           (float)local_308._4_4_ * (fVar59 * auVar33._4_4_ + auVar17._4_4_) +
           (float)local_328._4_4_ * (fVar59 * auVar56._4_4_ + fStack_164) +
           (float)local_348._4_4_ * (fVar59 * auVar40._4_4_ + auVar46._4_4_);
      auVar34._8_4_ =
           fStack_300 * (fVar60 * auVar33._8_4_ + auVar17._8_4_) +
           fStack_320 * (fVar60 * auVar56._8_4_ + fStack_160) +
           fStack_340 * (fVar60 * auVar40._8_4_ + auVar46._8_4_);
      auVar34._12_4_ =
           fStack_2fc * (fVar61 * auVar33._12_4_ + auVar17._12_4_) +
           fStack_31c * (fVar61 * auVar56._12_4_ + fStack_15c) +
           fStack_33c * (fVar61 * auVar40._12_4_ + auVar46._12_4_);
      auVar34._16_4_ =
           fStack_2f8 * (fVar62 * auVar33._16_4_ + auVar17._16_4_) +
           fStack_318 * (fVar62 * auVar56._16_4_ + fStack_158) +
           fStack_338 * (fVar62 * auVar40._16_4_ + auVar46._16_4_);
      auVar34._20_4_ =
           fStack_2f4 * (fVar63 * auVar33._20_4_ + auVar17._20_4_) +
           fStack_314 * (fVar63 * auVar56._20_4_ + fStack_154) +
           fStack_334 * (fVar63 * auVar40._20_4_ + auVar46._20_4_);
      auVar34._24_4_ =
           fStack_2f0 * (fVar64 * auVar33._24_4_ + auVar17._24_4_) +
           fStack_310 * (fVar64 * auVar56._24_4_ + fStack_150) +
           fStack_330 * (fVar64 * auVar40._24_4_ + auVar46._24_4_);
      auVar34._28_4_ =
           fStack_2ec * (fVar65 * auVar33._28_4_ + auVar17._28_4_) +
           fStack_30c * (fVar65 * auVar56._28_4_ + fStack_14c) +
           fStack_32c * (fVar65 * auVar40._28_4_ + auVar46._28_4_);
      local_228 = auVar24._0_4_;
      fStack_224 = auVar24._4_4_;
      fStack_220 = auVar24._8_4_;
      fStack_21c = auVar24._12_4_;
      fStack_218 = auVar24._16_4_;
      fStack_214 = auVar24._20_4_;
      fStack_210 = auVar24._24_4_;
      fStack_20c = auVar24._28_4_;
      local_248 = auVar29._0_4_;
      fStack_244 = auVar29._4_4_;
      fStack_240 = auVar29._8_4_;
      fStack_23c = auVar29._12_4_;
      fStack_238 = auVar29._16_4_;
      fStack_234 = auVar29._20_4_;
      fStack_230 = auVar29._24_4_;
      fStack_22c = auVar29._28_4_;
      local_2a8 = auVar25._0_4_;
      fStack_2a4 = auVar25._4_4_;
      fStack_2a0 = auVar25._8_4_;
      fStack_29c = auVar25._12_4_;
      fStack_298 = auVar25._16_4_;
      fStack_294 = auVar25._20_4_;
      fStack_290 = auVar25._24_4_;
      fStack_28c = auVar25._28_4_;
      local_188 = auVar39._0_4_;
      fStack_184 = auVar39._4_4_;
      fStack_180 = auVar39._8_4_;
      fStack_17c = auVar39._12_4_;
      fStack_178 = auVar39._16_4_;
      fStack_174 = auVar39._20_4_;
      fStack_170 = auVar39._24_4_;
      fStack_16c = auVar39._28_4_;
      local_1a8 = auVar28._0_4_;
      fStack_1a4 = auVar28._4_4_;
      fStack_1a0 = auVar28._8_4_;
      fStack_19c = auVar28._12_4_;
      fStack_198 = auVar28._16_4_;
      fStack_194 = auVar28._20_4_;
      fStack_190 = auVar28._24_4_;
      fStack_18c = auVar28._28_4_;
      local_1c8 = auVar22._0_4_;
      fStack_1c4 = auVar22._4_4_;
      fStack_1c0 = auVar22._8_4_;
      fStack_1bc = auVar22._12_4_;
      fStack_1b8 = auVar22._16_4_;
      fStack_1b4 = auVar22._20_4_;
      fStack_1b0 = auVar22._24_4_;
      fStack_1ac = auVar22._28_4_;
      local_2c8 = auVar26._0_4_;
      auVar20._0_4_ =
           (float)local_308._0_4_ * local_2c8 +
           (float)local_328._0_4_ * local_188 + (float)local_348._0_4_ * local_228;
      fStack_2c4 = auVar26._4_4_;
      auVar20._4_4_ =
           (float)local_308._4_4_ * fStack_2c4 +
           (float)local_328._4_4_ * fStack_184 + (float)local_348._4_4_ * fStack_224;
      fStack_2c0 = auVar26._8_4_;
      auVar20._8_4_ = fStack_300 * fStack_2c0 + fStack_320 * fStack_180 + fStack_340 * fStack_220;
      fStack_2bc = auVar26._12_4_;
      auVar20._12_4_ = fStack_2fc * fStack_2bc + fStack_31c * fStack_17c + fStack_33c * fStack_21c;
      fStack_2b8 = auVar26._16_4_;
      auVar23._16_4_ = fStack_2f8 * fStack_2b8 + fStack_318 * fStack_178 + fStack_338 * fStack_218;
      auVar23._0_16_ = auVar20;
      fStack_2b4 = auVar26._20_4_;
      auVar23._20_4_ = fStack_2f4 * fStack_2b4 + fStack_314 * fStack_174 + fStack_334 * fStack_214;
      fStack_2b0 = auVar26._24_4_;
      auVar23._24_4_ = fStack_2f0 * fStack_2b0 + fStack_310 * fStack_170 + fStack_330 * fStack_210;
      fStack_2ac = auVar26._28_4_;
      auVar23._28_4_ = fStack_2ec * fStack_2ac + fStack_30c * fStack_16c + fStack_32c * fStack_20c;
      auVar13._16_16_ = auVar49;
      auVar13._0_16_ = auVar41;
      auVar17 = vshufpd_avx(auVar35,auVar13,2);
      auVar13 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000
                             ,auVar34);
      auVar47 = vpermpd_avx2(auVar36,0xe9);
      auVar47 = vblendps_avx(auVar13,auVar47,7);
      auVar17 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000
                             ,auVar17);
      auVar13 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003
                             ,auVar47);
      auVar17 = vblendps_avx(auVar17,auVar13,0xa4);
      *(undefined1 (*) [32])(param_1 + -0x40 + lVar11) = auVar17;
      auVar2 = ___ymm_0000000000000007000000020000000000000006000000010000000000000005;
      auVar17 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005
                             ,auVar47);
      auVar47 = vshufpd_avx(auVar35,auVar35,1);
      auVar47 = vblendps_avx(auVar17,auVar47,0x92);
      *(undefined1 (*) [32])(param_1 + -0x20 + lVar11) = auVar47;
      auVar15 = ___ymm_0000000700000004000000010000000600000003000000000000000500000002;
      auVar54 = ___ymm_0000000700000007000000070000000700000006000000050000000200000001;
      local_268 = auVar32._0_4_;
      auVar27._0_4_ =
           (float)local_308._0_4_ * local_268 +
           (float)local_328._0_4_ * local_1a8 + (float)local_348._0_4_ * local_248;
      fStack_264 = auVar32._4_4_;
      auVar27._4_4_ =
           (float)local_308._4_4_ * fStack_264 +
           (float)local_328._4_4_ * fStack_1a4 + (float)local_348._4_4_ * fStack_244;
      fStack_260 = auVar32._8_4_;
      auVar27._8_4_ = fStack_300 * fStack_260 + fStack_320 * fStack_1a0 + fStack_340 * fStack_240;
      fStack_25c = auVar32._12_4_;
      auVar27._12_4_ = fStack_2fc * fStack_25c + fStack_31c * fStack_19c + fStack_33c * fStack_23c;
      fStack_258 = auVar32._16_4_;
      auVar24._16_4_ = fStack_2f8 * fStack_258 + fStack_318 * fStack_198 + fStack_338 * fStack_238;
      auVar24._0_16_ = auVar27;
      fStack_254 = auVar32._20_4_;
      auVar24._20_4_ = fStack_2f4 * fStack_254 + fStack_314 * fStack_194 + fStack_334 * fStack_234;
      fStack_250 = auVar32._24_4_;
      auVar24._24_4_ = fStack_2f0 * fStack_250 + fStack_310 * fStack_190 + fStack_330 * fStack_230;
      fStack_24c = auVar32._28_4_;
      auVar24._28_4_ = fStack_2ec * fStack_24c + fStack_30c * fStack_18c + fStack_32c * fStack_22c;
      auVar47 = vpermpd_avx2(auVar35,0xff);
      auVar17 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001
                             ,auVar36);
      auVar47 = vblendps_avx(auVar17,auVar47,3);
      auVar47 = vblendps_avx(auVar47,auVar34,0xe0);
      auVar47 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002
                             ,auVar47);
      *(undefined1 (*) [32])(param_1 + lVar11) = auVar47;
      local_288 = auVar30._0_4_;
      auVar26._0_4_ =
           (float)local_308._0_4_ * local_288 +
           (float)local_328._0_4_ * local_1c8 + (float)local_348._0_4_ * local_2a8;
      fStack_284 = auVar30._4_4_;
      auVar26._4_4_ =
           (float)local_308._4_4_ * fStack_284 +
           (float)local_328._4_4_ * fStack_1c4 + (float)local_348._4_4_ * fStack_2a4;
      fStack_280 = auVar30._8_4_;
      auVar26._8_4_ = fStack_300 * fStack_280 + fStack_320 * fStack_1c0 + fStack_340 * fStack_2a0;
      fStack_27c = auVar30._12_4_;
      auVar26._12_4_ = fStack_2fc * fStack_27c + fStack_31c * fStack_1bc + fStack_33c * fStack_29c;
      fStack_278 = auVar30._16_4_;
      auVar26._16_4_ = fStack_2f8 * fStack_278 + fStack_318 * fStack_1b8 + fStack_338 * fStack_298;
      fStack_274 = auVar30._20_4_;
      auVar26._20_4_ = fStack_2f4 * fStack_274 + fStack_314 * fStack_1b4 + fStack_334 * fStack_294;
      fStack_270 = auVar30._24_4_;
      auVar26._24_4_ = fStack_2f0 * fStack_270 + fStack_310 * fStack_1b0 + fStack_330 * fStack_290;
      fStack_26c = auVar30._28_4_;
      auVar26._28_4_ = fStack_2ec * fStack_26c + fStack_30c * fStack_1ac + fStack_32c * fStack_28c;
      auVar32._16_16_ = auVar27;
      auVar32._0_16_ = auVar20;
      auVar17 = vshufpd_avx(auVar23,auVar32,2);
      auVar13 = vpermps_avx2(auVar14,auVar26);
      auVar47 = vpermpd_avx2(auVar24,0xe9);
      auVar47 = vblendps_avx(auVar13,auVar47,7);
      auVar17 = vpermps_avx2(auVar19,auVar17);
      auVar13 = vpermps_avx2(auVar18,auVar47);
      auVar17 = vblendps_avx(auVar17,auVar13,0xa4);
      *(undefined1 (*) [32])(param_2 + -0x40 + lVar11) = auVar17;
      auVar17 = vpermps_avx2(auVar2,auVar47);
      auVar47 = vshufpd_avx(auVar23,auVar23,1);
      auVar47 = vblendps_avx(auVar17,auVar47,0x92);
      *(undefined1 (*) [32])(param_2 + -0x20 + lVar11) = auVar47;
      auVar47 = vpermpd_avx2(auVar23,0xff);
      auVar17 = vpermps_avx2(auVar54,auVar24);
      auVar47 = vblendps_avx(auVar17,auVar47,3);
      auVar47 = vblendps_avx(auVar47,auVar26,0xe0);
      auVar47 = vpermps_avx2(auVar15,auVar47);
      *(undefined1 (*) [32])(param_2 + lVar11) = auVar47;
      lVar11 = lVar11 + 0x60;
      pauVar8 = pauVar8 + 4;
      uVar9 = uVar9 + 8;
    } while ((int)uVar9 < (int)(uVar7 & 0xfffffff8));
    if ((int)in_stack_00000040 <= (int)uVar9) {
      return;
    }
  }
  auVar2 = ___ymm_0000000000000002000000000000000700000001000000000000000600000000;
  auVar13 = ___ymm_0000000000000003000000040000000700000000000000030000000000000003;
  auVar17 = ___ymm_0000000400000003000000020000000100000000000000000000000000000000;
  auVar54._4_4_ = uVar9;
  auVar54._0_4_ = uVar9;
  auVar54._8_4_ = uVar9;
  auVar54._12_4_ = uVar9;
  auVar54._16_4_ = uVar9;
  auVar54._20_4_ = uVar9;
  auVar54._24_4_ = uVar9;
  auVar54._28_4_ = uVar9;
  auVar47 = vpor_avx2(auVar54,
                      ___ymm_0000000700000006000000050000000400000003000000020000000100000000);
  auVar15._4_4_ = in_stack_00000040;
  auVar15._0_4_ = in_stack_00000040;
  auVar15._8_4_ = in_stack_00000040;
  auVar15._12_4_ = in_stack_00000040;
  auVar15._16_4_ = in_stack_00000040;
  auVar15._20_4_ = in_stack_00000040;
  auVar15._24_4_ = in_stack_00000040;
  auVar15._28_4_ = in_stack_00000040;
  auVar47 = vpcmpgtd_avx2(auVar15,auVar47);
  uVar10 = (ulonglong)uVar9;
  pauVar8 = (undefined1 (*) [32])(in_stack_00000030 + uVar10 * 0x10);
  uVar7 = vmovmskps_avx(auVar47);
  if (uVar7 == 0xff) {
    auVar54 = vperm2f128_avx(*pauVar8,pauVar8[2],0x20);
    auVar15 = vperm2f128_avx(*pauVar8,pauVar8[2],0x31);
    auVar32 = vperm2f128_avx(pauVar8[1],pauVar8[3],0x20);
    auVar26 = vperm2f128_avx(pauVar8[1],pauVar8[3],0x31);
    auVar25 = vunpcklps_avx(auVar54,auVar15);
    auVar54 = vunpckhps_avx(auVar54,auVar15);
    auVar30 = vunpcklps_avx(auVar32,auVar26);
    auVar15 = vunpckhps_avx(auVar32,auVar26);
    _local_308 = vunpcklpd_avx(auVar25,auVar30);
    _local_348 = vunpckhpd_avx(auVar25,auVar30);
    _local_328 = vunpcklpd_avx(auVar54,auVar15);
    _local_368 = vunpckhpd_avx(auVar54,auVar15);
    auVar54 = *(undefined1 (*) [32])(in_stack_00000038 + uVar10 * 0xc);
    auVar15 = *(undefined1 (*) [32])(in_stack_00000038 + 0x20 + uVar10 * 0xc);
    auVar25 = *(undefined1 (*) [32])(in_stack_00000038 + 0x40 + uVar10 * 0xc);
    auVar30 = vpermd_avx2(___ymm_0000000200000000000000000000000000000001000000000000000000000000,
                          auVar15);
    auVar32 = vpermd_avx2(___ymm_0000000000000007000000040000000100000000000000060000000300000000,
                          auVar54);
    auVar30 = vpblendd_avx2(auVar32,auVar30,0x88);
    auVar32 = vpermd_avx2(___ymm_0000000000000000000000000000000500000000000000000000000700000004,
                          auVar15);
    auVar26 = vpermd_avx2(___ymm_0000000600000003000000000000000000000005000000020000000000000000,
                          auVar25);
    auVar32 = vpblendd_avx2(auVar26,auVar32,0x13);
    auVar14._16_16_ = ZEXT116(0) * auVar30._16_16_ | ZEXT116(1) * auVar32._0_16_;
    auVar14._0_16_ = ZEXT116(0) * auVar32._0_16_ | ZEXT116(1) * auVar30._0_16_;
    auVar30 = vperm2i128_avx2(auVar30,auVar32,0x31);
    auVar54 = vpblendd_avx2(auVar15,auVar54,0x24);
    auVar54 = vpermd_avx2(___ymm_0000000000000000000000000000000600000003000000000000000500000002,
                          auVar54);
    auVar18._16_16_ = ___xmm_00000007000000040000000100000000;
    auVar18._0_16_ = ___xmm_00000007000000040000000100000000;
    auVar15 = vpermd_avx2(auVar18,auVar25);
    auVar54 = vpblendd_avx2(auVar54,auVar15,0xe0);
  }
  else {
    _local_308 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
    _local_348 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
    _local_328 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
    _local_368 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
    auVar14 = vpgatherdd(ZEXT1232(ZEXT812(0)),auVar47);
    auVar30 = vpgatherdd(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
    auVar54 = vpgatherdd(ZEXT1232(ZEXT812(0)),auVar47);
  }
  auVar42._4_4_ = __real_0000000c;
  auVar42._0_4_ = __real_0000000c;
  auVar42._8_4_ = __real_0000000c;
  auVar42._12_4_ = __real_0000000c;
  auVar42._16_4_ = __real_0000000c;
  auVar42._20_4_ = __real_0000000c;
  auVar42._24_4_ = __real_0000000c;
  auVar42._28_4_ = __real_0000000c;
  vpmulld_avx2(auVar14,auVar42);
  auVar25 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
  auVar32 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
  auVar26 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
  auVar22 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
  auVar33 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
  auVar14 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
  auVar18 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
  auVar38 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar47);
  auVar19 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
  auVar21 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
  auVar35 = vgatherdps(ZEXT832(0),auVar47);
  auVar23 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
  vpmulld_avx2(auVar30,auVar42);
  auVar30 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
  auVar36 = vgatherdps(ZEXT832(0),auVar47);
  auVar24 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
  auVar15 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
  auVar34 = vgatherdps(ZEXT832(0),auVar47);
  auVar28 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
  auVar37 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
  auVar40 = vgatherdps(ZEXT1232(ZEXT812(0)),auVar47);
  auVar29 = vgatherdps(ZEXT832(0) << 0x20,auVar47);
  vpmulld_avx2(auVar54,auVar42);
  auVar54 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
  auVar39 = vgatherdps(ZEXT832(0),auVar47);
  auVar42 = vgatherdps(ZEXT832(0),auVar47);
  auVar46 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
  auVar44 = vgatherdps(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar47);
  auVar47 = vgatherdps(ZEXT832(0),auVar47);
  local_1a8 = auVar32._0_4_;
  fStack_1a4 = auVar32._4_4_;
  fStack_1a0 = auVar32._8_4_;
  fStack_19c = auVar32._12_4_;
  fStack_198 = auVar32._16_4_;
  fStack_194 = auVar32._20_4_;
  fStack_190 = auVar32._24_4_;
  fStack_18c = auVar32._28_4_;
  local_148 = auVar25._0_4_;
  fStack_144 = auVar25._4_4_;
  fStack_140 = auVar25._8_4_;
  fStack_13c = auVar25._12_4_;
  fStack_138 = auVar25._16_4_;
  fStack_134 = auVar25._20_4_;
  fStack_130 = auVar25._24_4_;
  fStack_12c = auVar25._28_4_;
  local_248 = auVar33._0_4_;
  fStack_244 = auVar33._4_4_;
  fStack_240 = auVar33._8_4_;
  fStack_23c = auVar33._12_4_;
  fStack_238 = auVar33._16_4_;
  fStack_234 = auVar33._20_4_;
  fStack_230 = auVar33._24_4_;
  fStack_22c = auVar33._28_4_;
  local_208 = auVar22._0_4_;
  fStack_204 = auVar22._4_4_;
  fStack_200 = auVar22._8_4_;
  fStack_1fc = auVar22._12_4_;
  fStack_1f8 = auVar22._16_4_;
  fStack_1f4 = auVar22._20_4_;
  fStack_1f0 = auVar22._24_4_;
  fStack_1ec = auVar22._28_4_;
  local_268 = auVar18._0_4_;
  fStack_264 = auVar18._4_4_;
  fStack_260 = auVar18._8_4_;
  fStack_25c = auVar18._12_4_;
  fStack_258 = auVar18._16_4_;
  fStack_254 = auVar18._20_4_;
  fStack_250 = auVar18._24_4_;
  fStack_24c = auVar18._28_4_;
  local_2c8 = auVar21._0_4_;
  fStack_2c4 = auVar21._4_4_;
  fStack_2c0 = auVar21._8_4_;
  fStack_2bc = auVar21._12_4_;
  fStack_2b8 = auVar21._16_4_;
  fStack_2b4 = auVar21._20_4_;
  fStack_2b0 = auVar21._24_4_;
  fStack_2ac = auVar21._28_4_;
  local_2e8 = auVar30._0_4_;
  fStack_2e4 = auVar30._4_4_;
  fStack_2e0 = auVar30._8_4_;
  fStack_2dc = auVar30._12_4_;
  fStack_2d8 = auVar30._16_4_;
  fStack_2d4 = auVar30._20_4_;
  fStack_2d0 = auVar30._24_4_;
  fStack_2cc = auVar30._28_4_;
  local_1e8 = auVar23._0_4_;
  fStack_1e4 = auVar23._4_4_;
  fStack_1e0 = auVar23._8_4_;
  fStack_1dc = auVar23._12_4_;
  fStack_1d8 = auVar23._16_4_;
  fStack_1d4 = auVar23._20_4_;
  fStack_1d0 = auVar23._24_4_;
  fStack_1cc = auVar23._28_4_;
  local_228 = auVar24._0_4_;
  fStack_224 = auVar24._4_4_;
  fStack_220 = auVar24._8_4_;
  fStack_21c = auVar24._12_4_;
  fStack_218 = auVar24._16_4_;
  fStack_214 = auVar24._20_4_;
  fStack_210 = auVar24._24_4_;
  fStack_20c = auVar24._28_4_;
  local_288 = auVar28._0_4_;
  fStack_284 = auVar28._4_4_;
  fStack_280 = auVar28._8_4_;
  fStack_27c = auVar28._12_4_;
  fStack_278 = auVar28._16_4_;
  fStack_274 = auVar28._20_4_;
  fStack_270 = auVar28._24_4_;
  fStack_26c = auVar28._28_4_;
  local_168 = auVar26._0_4_;
  fStack_164 = auVar26._4_4_;
  fStack_160 = auVar26._8_4_;
  fStack_15c = auVar26._12_4_;
  fStack_158 = auVar26._16_4_;
  fStack_154 = auVar26._20_4_;
  fStack_150 = auVar26._24_4_;
  fStack_14c = auVar26._28_4_;
  local_188 = auVar14._0_4_;
  fStack_184 = auVar14._4_4_;
  fStack_180 = auVar14._8_4_;
  fStack_17c = auVar14._12_4_;
  fStack_178 = auVar14._16_4_;
  fStack_174 = auVar14._20_4_;
  fStack_170 = auVar14._24_4_;
  fStack_16c = auVar14._28_4_;
  local_1c8 = auVar19._0_4_;
  fStack_1c4 = auVar19._4_4_;
  fStack_1c0 = auVar19._8_4_;
  fStack_1bc = auVar19._12_4_;
  fStack_1b8 = auVar19._16_4_;
  fStack_1b4 = auVar19._20_4_;
  fStack_1b0 = auVar19._24_4_;
  fStack_1ac = auVar19._28_4_;
  auVar58._0_4_ =
       (float)local_328._0_4_ * ((float)local_368._0_4_ * auVar40._0_4_ + auVar37._0_4_) +
       (float)local_308._0_4_ * ((float)local_368._0_4_ * local_1a8 + local_148) +
       (float)local_348._0_4_ * ((float)local_368._0_4_ * auVar35._0_4_ + local_2c8);
  auVar58._4_4_ =
       (float)local_328._4_4_ * ((float)local_368._4_4_ * auVar40._4_4_ + auVar37._4_4_) +
       (float)local_308._4_4_ * ((float)local_368._4_4_ * fStack_1a4 + fStack_144) +
       (float)local_348._4_4_ * ((float)local_368._4_4_ * auVar35._4_4_ + fStack_2c4);
  auVar58._8_4_ =
       fStack_320 * (fStack_360 * auVar40._8_4_ + auVar37._8_4_) +
       fStack_300 * (fStack_360 * fStack_1a0 + fStack_140) +
       fStack_340 * (fStack_360 * auVar35._8_4_ + fStack_2c0);
  auVar58._12_4_ =
       fStack_31c * (fStack_35c * auVar40._12_4_ + auVar37._12_4_) +
       fStack_2fc * (fStack_35c * fStack_19c + fStack_13c) +
       fStack_33c * (fStack_35c * auVar35._12_4_ + fStack_2bc);
  auVar48._16_4_ =
       fStack_318 * (fStack_358 * auVar40._16_4_ + auVar37._16_4_) +
       fStack_2f8 * (fStack_358 * fStack_198 + fStack_138) +
       fStack_338 * (fStack_358 * auVar35._16_4_ + fStack_2b8);
  auVar48._0_16_ = auVar58;
  auVar48._20_4_ =
       fStack_314 * (fStack_354 * auVar40._20_4_ + auVar37._20_4_) +
       fStack_2f4 * (fStack_354 * fStack_194 + fStack_134) +
       fStack_334 * (fStack_354 * auVar35._20_4_ + fStack_2b4);
  auVar48._24_4_ =
       fStack_310 * (fStack_350 * auVar40._24_4_ + auVar37._24_4_) +
       fStack_2f0 * (fStack_350 * fStack_190 + fStack_130) +
       fStack_330 * (fStack_350 * auVar35._24_4_ + fStack_2b0);
  auVar48._28_4_ =
       fStack_30c * (fStack_34c * auVar40._28_4_ + auVar37._28_4_) +
       fStack_2ec * (fStack_34c * fStack_18c + fStack_12c) +
       fStack_32c * (fStack_34c * auVar35._28_4_ + fStack_2ac);
  auVar43._0_4_ =
       (float)local_328._0_4_ * ((float)local_368._0_4_ * auVar39._0_4_ + auVar54._0_4_) +
       (float)local_308._0_4_ * ((float)local_368._0_4_ * local_248 + local_208) +
       (float)local_348._0_4_ * ((float)local_368._0_4_ * auVar36._0_4_ + local_2e8);
  auVar43._4_4_ =
       (float)local_328._4_4_ * ((float)local_368._4_4_ * auVar39._4_4_ + auVar54._4_4_) +
       (float)local_308._4_4_ * ((float)local_368._4_4_ * fStack_244 + fStack_204) +
       (float)local_348._4_4_ * ((float)local_368._4_4_ * auVar36._4_4_ + fStack_2e4);
  auVar43._8_4_ =
       fStack_320 * (fStack_360 * auVar39._8_4_ + auVar54._8_4_) +
       fStack_300 * (fStack_360 * fStack_240 + fStack_200) +
       fStack_340 * (fStack_360 * auVar36._8_4_ + fStack_2e0);
  auVar43._12_4_ =
       fStack_31c * (fStack_35c * auVar39._12_4_ + auVar54._12_4_) +
       fStack_2fc * (fStack_35c * fStack_23c + fStack_1fc) +
       fStack_33c * (fStack_35c * auVar36._12_4_ + fStack_2dc);
  auVar40._16_4_ =
       fStack_318 * (fStack_358 * auVar39._16_4_ + auVar54._16_4_) +
       fStack_2f8 * (fStack_358 * fStack_238 + fStack_1f8) +
       fStack_338 * (fStack_358 * auVar36._16_4_ + fStack_2d8);
  auVar40._0_16_ = auVar43;
  auVar40._20_4_ =
       fStack_314 * (fStack_354 * auVar39._20_4_ + auVar54._20_4_) +
       fStack_2f4 * (fStack_354 * fStack_234 + fStack_1f4) +
       fStack_334 * (fStack_354 * auVar36._20_4_ + fStack_2d4);
  auVar40._24_4_ =
       fStack_310 * (fStack_350 * auVar39._24_4_ + auVar54._24_4_) +
       fStack_2f0 * (fStack_350 * fStack_230 + fStack_1f0) +
       fStack_330 * (fStack_350 * auVar36._24_4_ + fStack_2d0);
  auVar40._28_4_ =
       fStack_30c * (fStack_34c * auVar39._28_4_ + auVar54._28_4_) +
       fStack_2ec * (fStack_34c * fStack_22c + fStack_1ec) +
       fStack_32c * (fStack_34c * auVar36._28_4_ + fStack_2cc);
  auVar50._0_4_ =
       (float)local_328._0_4_ * ((float)local_368._0_4_ * auVar44._0_4_ + auVar46._0_4_) +
       (float)local_308._0_4_ * ((float)local_368._0_4_ * auVar38._0_4_ + local_268) +
       (float)local_348._0_4_ * ((float)local_368._0_4_ * auVar34._0_4_ + auVar15._0_4_);
  auVar50._4_4_ =
       (float)local_328._4_4_ * ((float)local_368._4_4_ * auVar44._4_4_ + auVar46._4_4_) +
       (float)local_308._4_4_ * ((float)local_368._4_4_ * auVar38._4_4_ + fStack_264) +
       (float)local_348._4_4_ * ((float)local_368._4_4_ * auVar34._4_4_ + auVar15._4_4_);
  auVar50._8_4_ =
       fStack_320 * (fStack_360 * auVar44._8_4_ + auVar46._8_4_) +
       fStack_300 * (fStack_360 * auVar38._8_4_ + fStack_260) +
       fStack_340 * (fStack_360 * auVar34._8_4_ + auVar15._8_4_);
  auVar50._12_4_ =
       fStack_31c * (fStack_35c * auVar44._12_4_ + auVar46._12_4_) +
       fStack_2fc * (fStack_35c * auVar38._12_4_ + fStack_25c) +
       fStack_33c * (fStack_35c * auVar34._12_4_ + auVar15._12_4_);
  auVar39._16_4_ =
       fStack_318 * (fStack_358 * auVar44._16_4_ + auVar46._16_4_) +
       fStack_2f8 * (fStack_358 * auVar38._16_4_ + fStack_258) +
       fStack_338 * (fStack_358 * auVar34._16_4_ + auVar15._16_4_);
  auVar39._0_16_ = auVar50;
  auVar39._20_4_ =
       fStack_314 * (fStack_354 * auVar44._20_4_ + auVar46._20_4_) +
       fStack_2f4 * (fStack_354 * auVar38._20_4_ + fStack_254) +
       fStack_334 * (fStack_354 * auVar34._20_4_ + auVar15._20_4_);
  auVar39._24_4_ =
       fStack_310 * (fStack_350 * auVar44._24_4_ + auVar46._24_4_) +
       fStack_2f0 * (fStack_350 * auVar38._24_4_ + fStack_250) +
       fStack_330 * (fStack_350 * auVar34._24_4_ + auVar15._24_4_);
  auVar39._28_4_ =
       fStack_30c * (fStack_34c * auVar44._28_4_ + auVar46._28_4_) +
       fStack_2ec * (fStack_34c * auVar38._28_4_ + fStack_24c) +
       fStack_32c * (fStack_34c * auVar34._28_4_ + auVar15._28_4_);
  local_2a8 = auVar29._0_4_;
  auVar31._0_4_ =
       (float)local_328._0_4_ * local_2a8 +
       (float)local_308._0_4_ * local_168 + (float)local_348._0_4_ * local_1e8;
  fStack_2a4 = auVar29._4_4_;
  auVar31._4_4_ =
       (float)local_328._4_4_ * fStack_2a4 +
       (float)local_308._4_4_ * fStack_164 + (float)local_348._4_4_ * fStack_1e4;
  fStack_2a0 = auVar29._8_4_;
  auVar31._8_4_ = fStack_320 * fStack_2a0 + fStack_300 * fStack_160 + fStack_340 * fStack_1e0;
  fStack_29c = auVar29._12_4_;
  auVar31._12_4_ = fStack_31c * fStack_29c + fStack_2fc * fStack_15c + fStack_33c * fStack_1dc;
  fStack_298 = auVar29._16_4_;
  auVar37._16_4_ = fStack_318 * fStack_298 + fStack_2f8 * fStack_158 + fStack_338 * fStack_1d8;
  auVar37._0_16_ = auVar31;
  fStack_294 = auVar29._20_4_;
  auVar37._20_4_ = fStack_314 * fStack_294 + fStack_2f4 * fStack_154 + fStack_334 * fStack_1d4;
  fStack_290 = auVar29._24_4_;
  auVar37._24_4_ = fStack_310 * fStack_290 + fStack_2f0 * fStack_150 + fStack_330 * fStack_1d0;
  fStack_28c = auVar29._28_4_;
  auVar37._28_4_ = fStack_30c * fStack_28c + fStack_2ec * fStack_14c + fStack_32c * fStack_1cc;
  auVar16._0_4_ =
       (float)local_328._0_4_ * auVar42._0_4_ +
       (float)local_308._0_4_ * local_188 + (float)local_348._0_4_ * local_228;
  auVar16._4_4_ =
       (float)local_328._4_4_ * auVar42._4_4_ +
       (float)local_308._4_4_ * fStack_184 + (float)local_348._4_4_ * fStack_224;
  auVar16._8_4_ = fStack_320 * auVar42._8_4_ + fStack_300 * fStack_180 + fStack_340 * fStack_220;
  auVar16._12_4_ = fStack_31c * auVar42._12_4_ + fStack_2fc * fStack_17c + fStack_33c * fStack_21c;
  auVar29._16_4_ = fStack_318 * auVar42._16_4_ + fStack_2f8 * fStack_178 + fStack_338 * fStack_218;
  auVar29._0_16_ = auVar16;
  auVar29._20_4_ = fStack_314 * auVar42._20_4_ + fStack_2f4 * fStack_174 + fStack_334 * fStack_214;
  auVar29._24_4_ = fStack_310 * auVar42._24_4_ + fStack_2f0 * fStack_170 + fStack_330 * fStack_210;
  auVar29._28_4_ = fStack_30c * auVar42._28_4_ + fStack_2ec * fStack_16c + fStack_32c * fStack_20c;
  auVar12._0_4_ =
       (float)local_328._0_4_ * auVar47._0_4_ +
       (float)local_308._0_4_ * local_1c8 + (float)local_348._0_4_ * local_288;
  auVar12._4_4_ =
       (float)local_328._4_4_ * auVar47._4_4_ +
       (float)local_308._4_4_ * fStack_1c4 + (float)local_348._4_4_ * fStack_284;
  auVar12._8_4_ = fStack_320 * auVar47._8_4_ + fStack_300 * fStack_1c0 + fStack_340 * fStack_280;
  auVar12._12_4_ = fStack_31c * auVar47._12_4_ + fStack_2fc * fStack_1bc + fStack_33c * fStack_27c;
  auVar19._16_4_ = fStack_318 * auVar47._16_4_ + fStack_2f8 * fStack_1b8 + fStack_338 * fStack_278;
  auVar19._0_16_ = auVar12;
  auVar19._20_4_ = fStack_314 * auVar47._20_4_ + fStack_2f4 * fStack_1b4 + fStack_334 * fStack_274;
  auVar19._24_4_ = fStack_310 * auVar47._24_4_ + fStack_2f0 * fStack_1b0 + fStack_330 * fStack_270;
  auVar19._28_4_ = fStack_30c * auVar47._28_4_ + fStack_2ec * fStack_1ac + fStack_32c * fStack_26c;
  pauVar8 = (undefined1 (*) [32])(param_1 + uVar10 * 0xc);
  cVar6 = (char)uVar7;
  auVar27 = auVar48._16_16_;
  auVar20 = auVar37._16_16_;
  if (cVar6 == -1) {
    auVar38._16_16_ = auVar43;
    auVar38._0_16_ = auVar58;
    auVar54 = vshufpd_avx(auVar48,auVar38,2);
    auVar15 = vpermps_avx2(___ymm_0000000400000003000000020000000100000000000000000000000000000000,
                           auVar39);
    auVar47 = vpermpd_avx2(auVar40,0xe9);
    auVar47 = vblendps_avx(auVar15,auVar47,7);
    auVar15 = vpermps_avx2(___ymm_0000000000000003000000040000000700000000000000030000000000000003,
                           auVar47);
    auVar54 = vpermps_avx2(___ymm_0000000000000002000000000000000700000001000000000000000600000000,
                           auVar54);
    auVar54 = vblendps_avx(auVar54,auVar15,0xa4);
    *pauVar8 = auVar54;
    auVar15 = ___ymm_0000000000000007000000020000000000000006000000010000000000000005;
    auVar54 = vpermps_avx2(___ymm_0000000000000007000000020000000000000006000000010000000000000005,
                           auVar47);
    auVar47 = vshufpd_avx(auVar48,auVar48,1);
    auVar47 = vblendps_avx(auVar54,auVar47,0x92);
    pauVar8[1] = auVar47;
    auVar30 = ___ymm_0000000700000004000000010000000600000003000000000000000500000002;
    auVar25 = ___ymm_0000000700000007000000070000000700000006000000050000000200000001;
    auVar54 = vpermps_avx2(___ymm_0000000700000007000000070000000700000006000000050000000200000001,
                           auVar40);
    auVar47 = vpermpd_avx2(auVar48,0xff);
    auVar47 = vblendps_avx(auVar54,auVar47,3);
    auVar47 = vblendps_avx(auVar47,auVar39,0xe0);
    auVar47 = vpermps_avx2(___ymm_0000000700000004000000010000000600000003000000000000000500000002,
                           auVar47);
    pauVar8[2] = auVar47;
    auVar44._16_16_ = auVar16;
    auVar44._0_16_ = auVar31;
    auVar54 = vshufpd_avx(auVar37,auVar44,2);
    auVar17 = vpermps_avx2(auVar17,auVar19);
    auVar47 = vpermpd_avx2(auVar29,0xe9);
    auVar47 = vblendps_avx(auVar17,auVar47,7);
    auVar17 = vpermps_avx2(auVar13,auVar47);
    auVar13 = vpermps_avx2(auVar2,auVar54);
    auVar17 = vblendps_avx(auVar13,auVar17,0xa4);
    *(undefined1 (*) [32])(param_2 + uVar10 * 0xc) = auVar17;
    auVar17 = vpermps_avx2(auVar15,auVar47);
    auVar47 = vshufpd_avx(auVar37,auVar37,1);
    auVar47 = vblendps_avx(auVar17,auVar47,0x92);
    *(undefined1 (*) [32])(param_2 + 0x20 + uVar10 * 0xc) = auVar47;
    auVar17 = vpermps_avx2(auVar25,auVar29);
    auVar47 = vpermpd_avx2(auVar37,0xff);
    auVar47 = vblendps_avx(auVar17,auVar47,3);
    auVar47 = vblendps_avx(auVar47,auVar19,0xe0);
    auVar47 = vpermps_avx2(auVar30,auVar47);
    *(undefined1 (*) [32])(param_2 + 0x40 + uVar10 * 0xc) = auVar47;
  }
  else {
    auVar45 = auVar40._16_16_;
    auVar52 = auVar39._16_16_;
    auVar49 = auVar29._16_16_;
    auVar41 = auVar19._16_16_;
    if ((uVar7 & 1) != 0) {
      *(float *)*pauVar8 = auVar58._0_4_;
    }
    if ((uVar7 & 2) != 0) {
      uVar1 = vextractps_avx(auVar58,1);
      *(undefined4 *)(*pauVar8 + 0xc) = uVar1;
    }
    if ((uVar7 & 4) != 0) {
      uVar1 = vextractps_avx(auVar58,2);
      *(undefined4 *)(*pauVar8 + 0x18) = uVar1;
    }
    if ((uVar7 & 8) != 0) {
      uVar1 = vextractps_avx(auVar58,3);
      *(undefined4 *)(pauVar8[1] + 4) = uVar1;
    }
    if ((uVar7 & 0x10) != 0) {
      *(float *)(pauVar8[1] + 0x10) = auVar48._16_4_;
    }
    if ((uVar7 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar27,1);
      *(undefined4 *)(pauVar8[1] + 0x1c) = uVar1;
    }
    if ((uVar7 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar27,2);
      *(undefined4 *)(pauVar8[2] + 8) = uVar1;
    }
    if (cVar6 < '\0') {
      uVar1 = vextractps_avx(auVar27,3);
      *(undefined4 *)(pauVar8[2] + 0x14) = uVar1;
    }
    if ((uVar7 & 1) != 0) {
      *(float *)(*pauVar8 + 4) = auVar43._0_4_;
    }
    if ((uVar7 & 2) != 0) {
      uVar1 = vextractps_avx(auVar43,1);
      *(undefined4 *)(*pauVar8 + 0x10) = uVar1;
    }
    if ((uVar7 & 4) != 0) {
      uVar1 = vextractps_avx(auVar43,2);
      *(undefined4 *)(*pauVar8 + 0x1c) = uVar1;
    }
    if ((uVar7 & 8) != 0) {
      uVar1 = vextractps_avx(auVar43,3);
      *(undefined4 *)(pauVar8[1] + 8) = uVar1;
    }
    if ((uVar7 & 0x10) != 0) {
      *(float *)(pauVar8[1] + 0x14) = auVar40._16_4_;
    }
    if ((uVar7 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar45,1);
      *(undefined4 *)pauVar8[2] = uVar1;
    }
    if ((uVar7 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar45,2);
      *(undefined4 *)(pauVar8[2] + 0xc) = uVar1;
    }
    if (cVar6 < '\0') {
      uVar1 = vextractps_avx(auVar45,3);
      *(undefined4 *)(pauVar8[2] + 0x18) = uVar1;
    }
    if ((uVar7 & 1) != 0) {
      *(float *)(*pauVar8 + 8) = auVar50._0_4_;
    }
    if ((uVar7 & 2) != 0) {
      uVar1 = vextractps_avx(auVar50,1);
      *(undefined4 *)(*pauVar8 + 0x14) = uVar1;
    }
    if ((uVar7 & 4) != 0) {
      uVar1 = vextractps_avx(auVar50,2);
      *(undefined4 *)pauVar8[1] = uVar1;
    }
    if ((uVar7 & 8) != 0) {
      uVar1 = vextractps_avx(auVar50,3);
      *(undefined4 *)(pauVar8[1] + 0xc) = uVar1;
    }
    if ((uVar7 & 0x10) != 0) {
      *(float *)(pauVar8[1] + 0x18) = auVar39._16_4_;
    }
    if ((uVar7 & 0x20) != 0) {
      uVar1 = vextractps_avx(auVar52,1);
      *(undefined4 *)(pauVar8[2] + 4) = uVar1;
    }
    if ((uVar7 & 0x40) != 0) {
      uVar1 = vextractps_avx(auVar52,2);
      *(undefined4 *)(pauVar8[2] + 0x10) = uVar1;
    }
    if (cVar6 < '\0') {
      uVar1 = vextractps_avx(auVar52,3);
      *(undefined4 *)(pauVar8[2] + 0x1c) = uVar1;
    }
    uVar3 = param_2 + uVar10 * 0xc;
    if ((uVar7 & 1) != 0) {
      *(float *)uVar3 = auVar31._0_4_;
    }
    if ((uVar7 & 2) != 0) {
      fVar57 = (float)vextractps_avx(auVar31,1);
      *(float *)(uVar3 + 0xc) = fVar57;
    }
    if ((uVar7 & 4) != 0) {
      fVar57 = (float)vextractps_avx(auVar31,2);
      *(float *)(uVar3 + 0x18) = fVar57;
    }
    if ((uVar7 & 8) != 0) {
      fVar57 = (float)vextractps_avx(auVar31,3);
      *(float *)(uVar3 + 0x24) = fVar57;
    }
    if ((uVar7 & 0x10) != 0) {
      *(float *)(uVar3 + 0x30) = auVar37._16_4_;
    }
    if ((uVar7 & 0x20) != 0) {
      fVar57 = (float)vextractps_avx(auVar20,1);
      *(float *)(uVar3 + 0x3c) = fVar57;
    }
    if ((uVar7 & 0x40) != 0) {
      fVar57 = (float)vextractps_avx(auVar20,2);
      *(float *)(uVar3 + 0x48) = fVar57;
    }
    if (cVar6 < '\0') {
      fVar57 = (float)vextractps_avx(auVar20,3);
      *(float *)(uVar3 + 0x54) = fVar57;
    }
    if ((uVar7 & 1) != 0) {
      *(float *)(uVar3 + 4) = auVar16._0_4_;
    }
    if ((uVar7 & 2) != 0) {
      fVar57 = (float)vextractps_avx(auVar16,1);
      *(float *)(uVar3 + 0x10) = fVar57;
    }
    if ((uVar7 & 4) != 0) {
      fVar57 = (float)vextractps_avx(auVar16,2);
      *(float *)(uVar3 + 0x1c) = fVar57;
    }
    if ((uVar7 & 8) != 0) {
      fVar57 = (float)vextractps_avx(auVar16,3);
      *(float *)(uVar3 + 0x28) = fVar57;
    }
    if ((uVar7 & 0x10) != 0) {
      *(float *)(uVar3 + 0x34) = auVar29._16_4_;
    }
    if ((uVar7 & 0x20) != 0) {
      fVar57 = (float)vextractps_avx(auVar49,1);
      *(float *)(uVar3 + 0x40) = fVar57;
    }
    if ((uVar7 & 0x40) != 0) {
      fVar57 = (float)vextractps_avx(auVar49,2);
      *(float *)(uVar3 + 0x4c) = fVar57;
    }
    if (cVar6 < '\0') {
      fVar57 = (float)vextractps_avx(auVar49,3);
      *(float *)(uVar3 + 0x58) = fVar57;
    }
    if ((uVar7 & 1) != 0) {
      *(float *)(uVar3 + 8) = auVar12._0_4_;
    }
    if ((uVar7 & 2) != 0) {
      fVar57 = (float)vextractps_avx(auVar12,1);
      *(float *)(uVar3 + 0x14) = fVar57;
    }
    if ((uVar7 & 4) != 0) {
      fVar57 = (float)vextractps_avx(auVar12,2);
      *(float *)(uVar3 + 0x20) = fVar57;
    }
    if ((uVar7 & 8) != 0) {
      fVar57 = (float)vextractps_avx(auVar12,3);
      *(float *)(uVar3 + 0x2c) = fVar57;
    }
    if ((uVar7 & 0x10) != 0) {
      *(float *)(uVar3 + 0x38) = auVar19._16_4_;
    }
    if ((uVar7 & 0x20) != 0) {
      fVar57 = (float)vextractps_avx(auVar41,1);
      *(float *)(uVar3 + 0x44) = fVar57;
    }
    if ((uVar7 & 0x40) != 0) {
      fVar57 = (float)vextractps_avx(auVar41,2);
      *(float *)(uVar3 + 0x50) = fVar57;
    }
    if (cVar6 < '\0') {
      fVar57 = (float)vextractps_avx(auVar41,3);
      *(float *)(uVar3 + 0x5c) = fVar57;
    }
  }
  return;
}


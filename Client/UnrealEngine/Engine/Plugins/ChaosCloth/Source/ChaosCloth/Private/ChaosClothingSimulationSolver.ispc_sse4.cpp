// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 16

// ApplyPreSimulationTransforms___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunu_3E_un_3C_s_5B__c_unFTransform3f_5D__3E_REFs_5B__c_unFVector3f_5D_CunfCuniCuni_sse4 @ 140d08470

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPreSimulationTransforms___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunu_3E_un_3C_s_5B__c_unFTransform3f_5D__3E_REFs_5B__c_unFVector3f_5D_CunfCuniCuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,longlong param_8,longlong param_9,float *param_10,
               undefined4 param_11,int param_12,int param_13)

{
  float *pfVar1;
  undefined1 (*pauVar2) [16];
  undefined4 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  longlong unaff_RBP;
  longlong lVar19;
  uint *puVar20;
  byte bVar21;
  longlong lVar22;
  float *pfVar23;
  byte bVar24;
  uint uVar25;
  byte bVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  float fVar30;
  float fVar31;
  float fVar49;
  float fVar51;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar54;
  undefined1 auVar37 [16];
  float fVar50;
  float fVar52;
  float fVar53;
  float fVar55;
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
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auVar60 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar67;
  float fVar68;
  float fVar75;
  float fVar77;
  undefined1 auVar69 [16];
  float fVar79;
  undefined1 auVar70 [16];
  float fVar76;
  float fVar78;
  float fVar80;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar81;
  float fVar87;
  float fVar88;
  float fVar89;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined8 uVar90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  float fVar105;
  float fVar107;
  float fVar108;
  undefined1 auVar106 [16];
  float fVar109;
  float fVar110;
  float fVar112;
  float fVar113;
  undefined1 auVar111 [16];
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar131;
  float fVar132;
  undefined1 auVar123 [16];
  float fVar133;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  float fVar134;
  float fVar136;
  float fVar137;
  undefined1 auVar135 [16];
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  
  uVar25 = param_13 - param_12;
  uVar18 = uVar25 + 3;
  if (-1 < (int)uVar25) {
    uVar18 = uVar25;
  }
  iVar12 = ((uVar18 & 0xfffffffc) - uVar25) + param_13;
  if (param_12 < iVar12) {
    lVar28 = (longlong)param_12;
    unaff_RBP = lVar28 * 0xc;
    lVar13 = param_3 + 0x20;
    pfVar23 = (float *)(lVar28 * 0x10 + 0x30 + param_1);
    lVar27 = param_2 + 0x20;
    lVar22 = param_4 + 0x20;
    lVar15 = param_7 + 0x20;
    lVar16 = param_5 + 0x20;
    param_12 = param_12 << 2;
    do {
      auVar32 = pmulld(*(undefined1 (*) [16])(param_8 + param_12),
                       ___xmm_00000006000000060000000600000006);
      lVar19 = (longlong)auVar32._0_4_;
      lVar14 = (longlong)auVar32._4_4_;
      lVar17 = (longlong)auVar32._8_4_;
      lVar29 = (longlong)auVar32._12_4_;
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + lVar19 * 8)),
                         *(undefined4 *)(param_9 + lVar14 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + lVar17 * 8),0x20);
      auVar135 = insertps(auVar32,*(undefined4 *)(param_9 + lVar29 * 8),0x30);
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + 4 + lVar19 * 8)),
                         *(undefined4 *)(param_9 + 4 + lVar14 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + 4 + lVar17 * 8),0x20);
      auVar123 = insertps(auVar32,*(undefined4 *)(param_9 + 4 + lVar29 * 8),0x30);
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + 8 + lVar19 * 8)),
                         *(undefined4 *)(param_9 + 8 + lVar14 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + 8 + lVar17 * 8),0x20);
      auVar111 = insertps(auVar32,*(undefined4 *)(param_9 + 8 + lVar29 * 8),0x30);
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + 0xc + lVar19 * 8)),
                         *(undefined4 *)(param_9 + 0xc + lVar14 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + 0xc + lVar17 * 8),0x20);
      auVar104 = insertps(auVar32,*(undefined4 *)(param_9 + 0xc + lVar29 * 8),0x30);
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + 0x10 + lVar19 * 8)),
                         *(undefined4 *)(param_9 + 0x10 + lVar14 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + 0x10 + lVar17 * 8),0x20);
      auVar33 = insertps(auVar32,*(undefined4 *)(param_9 + 0x10 + lVar29 * 8),0x30);
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + 0x18 + lVar19 * 8)),
                         *(undefined4 *)(param_9 + 0x18 + lVar14 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + 0x18 + lVar17 * 8),0x20);
      auVar34 = insertps(auVar32,*(undefined4 *)(param_9 + 0x18 + lVar29 * 8),0x30);
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + 0x20 + lVar19 * 8)),
                         *(undefined4 *)(param_9 + 0x20 + lVar14 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + 0x20 + lVar17 * 8),0x20);
      auVar35 = insertps(auVar32,*(undefined4 *)(param_9 + 0x20 + lVar29 * 8),0x30);
      fVar55 = auVar35._12_4_;
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + 0x24 + lVar19 * 8)),
                         *(undefined4 *)(param_9 + 0x24 + lVar14 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + 0x24 + lVar17 * 8),0x20);
      auVar36 = insertps(auVar32,*(undefined4 *)(param_9 + 0x24 + lVar29 * 8),0x30);
      fVar148 = auVar36._12_4_;
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + 0x28 + lVar19 * 8)),
                         *(undefined4 *)(param_9 + 0x28 + lVar14 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + 0x28 + lVar17 * 8),0x20);
      auVar106 = insertps(auVar32,*(undefined4 *)(param_9 + 0x28 + lVar29 * 8),0x30);
      auVar32 = *(undefined1 (*) [16])(lVar13 + -0x20 + unaff_RBP);
      auVar37 = *(undefined1 (*) [16])(lVar13 + -0x10 + unaff_RBP);
      pfVar1 = (float *)(lVar13 + unaff_RBP);
      auVar69 = insertps(auVar37,auVar32,0x8c);
      fVar31 = auVar35._0_4_;
      fVar81 = auVar32._0_4_ * fVar31;
      fVar50 = auVar35._4_4_;
      fVar87 = auVar32._12_4_ * fVar50;
      fVar53 = auVar35._8_4_;
      fVar88 = auVar37._8_4_ * fVar53;
      fVar89 = pfVar1[1] * fVar55;
      fVar142 = auVar36._0_4_;
      fVar30 = auVar32._4_4_ * fVar142;
      fVar144 = auVar36._4_4_;
      fVar49 = auVar37._0_4_ * fVar144;
      fVar146 = auVar36._8_4_;
      fVar51 = auVar37._12_4_ * fVar146;
      fVar54 = pfVar1[2] * fVar148;
      fVar68 = auVar106._0_4_;
      fVar67 = auVar69._0_4_ * fVar68;
      fVar76 = auVar106._4_4_;
      fVar75 = auVar69._4_4_ * fVar76;
      fVar78 = auVar106._8_4_;
      fVar77 = *pfVar1 * fVar78;
      fVar80 = auVar106._12_4_;
      fVar79 = pfVar1[3] * fVar80;
      fVar134 = auVar135._0_4_;
      fVar136 = auVar135._4_4_;
      fVar137 = auVar135._8_4_;
      fVar138 = auVar135._12_4_;
      fVar139 = auVar123._0_4_;
      fVar131 = auVar123._4_4_;
      fVar132 = auVar123._8_4_;
      fVar133 = auVar123._12_4_;
      fVar110 = auVar111._0_4_;
      fVar112 = auVar111._4_4_;
      fVar113 = auVar111._8_4_;
      fVar119 = auVar111._12_4_;
      fVar114 = fVar134 * fVar30 - fVar139 * fVar81;
      fVar115 = fVar136 * fVar49 - fVar131 * fVar87;
      fVar116 = fVar137 * fVar51 - fVar132 * fVar88;
      fVar117 = fVar138 * fVar54 - fVar133 * fVar89;
      fVar59 = fVar139 * fVar67 - fVar110 * fVar30;
      fVar61 = fVar131 * fVar75 - fVar112 * fVar49;
      fVar62 = fVar132 * fVar77 - fVar113 * fVar51;
      fVar63 = fVar133 * fVar79 - fVar119 * fVar54;
      fVar118 = fVar110 * fVar81 - fVar134 * fVar67;
      fVar120 = fVar112 * fVar87 - fVar136 * fVar75;
      fVar121 = fVar113 * fVar88 - fVar137 * fVar77;
      fVar122 = fVar119 * fVar89 - fVar138 * fVar79;
      fVar59 = fVar59 + fVar59;
      fVar61 = fVar61 + fVar61;
      fVar62 = fVar62 + fVar62;
      fVar63 = fVar63 + fVar63;
      fVar118 = fVar118 + fVar118;
      fVar120 = fVar120 + fVar120;
      fVar121 = fVar121 + fVar121;
      fVar122 = fVar122 + fVar122;
      fVar114 = fVar114 + fVar114;
      fVar115 = fVar115 + fVar115;
      fVar116 = fVar116 + fVar116;
      fVar117 = fVar117 + fVar117;
      fVar107 = auVar104._0_4_;
      fVar108 = auVar104._4_4_;
      fVar109 = auVar104._12_4_;
      fVar105 = auVar104._8_4_;
      fVar140 = param_10[2];
      fVar141 = ((fVar134 * fVar118 - fVar59 * fVar139) + fVar107 * fVar114 + fVar67 + auVar34._0_4_
                ) - fVar140;
      fVar143 = ((fVar136 * fVar120 - fVar61 * fVar131) + fVar108 * fVar115 + fVar75 + auVar34._4_4_
                ) - fVar140;
      fVar145 = ((fVar137 * fVar121 - fVar62 * fVar132) + fVar105 * fVar116 + fVar77 + auVar34._8_4_
                ) - fVar140;
      fVar147 = ((fVar138 * fVar122 - fVar63 * fVar133) + fVar109 * fVar117 + fVar79 +
                auVar34._12_4_) - fVar140;
      puVar3 = (undefined4 *)(param_6 + param_12);
      uVar11 = *puVar3;
      fVar77 = (float)puVar3[1];
      fVar79 = (float)puVar3[2];
      fVar52 = (float)puVar3[3];
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + 0x14 + lVar19 * 8)),
                         *(undefined4 *)(param_9 + 0x14 + lVar14 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + 0x14 + lVar17 * 8),0x20);
      auVar104 = insertps(auVar32,*(undefined4 *)(param_9 + 0x14 + lVar29 * 8),0x30);
      fVar67 = *param_10;
      fVar81 = ((fVar139 * fVar114 - fVar118 * fVar110) + fVar107 * fVar59 + fVar81 + auVar33._0_4_)
               - fVar67;
      fVar87 = ((fVar131 * fVar115 - fVar120 * fVar112) + fVar108 * fVar61 + fVar87 + auVar33._4_4_)
               - fVar67;
      auVar70._0_8_ = CONCAT44(fVar87,fVar81);
      auVar70._8_4_ =
           ((fVar132 * fVar116 - fVar121 * fVar113) + fVar105 * fVar62 + fVar88 + auVar33._8_4_) -
           fVar67;
      auVar70._12_4_ =
           ((fVar133 * fVar117 - fVar122 * fVar119) + fVar109 * fVar63 + fVar89 + auVar33._12_4_) -
           fVar67;
      fVar75 = param_10[1];
      auVar82._0_4_ =
           ((fVar110 * fVar59 - fVar114 * fVar134) + fVar107 * fVar118 + fVar30 + auVar104._0_4_) -
           fVar75;
      auVar82._4_4_ =
           ((fVar112 * fVar61 - fVar115 * fVar136) + fVar108 * fVar120 + fVar49 + auVar104._4_4_) -
           fVar75;
      auVar82._8_4_ =
           ((fVar113 * fVar62 - fVar116 * fVar137) + fVar105 * fVar121 + fVar51 + auVar104._8_4_) -
           fVar75;
      auVar82._12_4_ =
           ((fVar119 * fVar63 - fVar117 * fVar138) + fVar109 * fVar122 + fVar54 + auVar104._12_4_) -
           fVar75;
      auVar35._8_4_ = fVar87;
      auVar35._0_8_ = auVar70._0_8_;
      auVar35._12_4_ = auVar82._4_4_;
      uVar90 = CONCAT44(auVar82._0_4_,fVar81);
      *(undefined8 *)(pfVar23 + -0xc) = uVar90;
      *(ulonglong *)(pfVar23 + -10) = CONCAT44(uVar11,fVar141);
      *(longlong *)(pfVar23 + -8) = auVar35._8_8_;
      pfVar23[-6] = fVar143;
      pfVar23[-5] = fVar77;
      pfVar23[-4] = auVar70._8_4_;
      pfVar23[-3] = auVar82._8_4_;
      pfVar23[-2] = fVar145;
      pfVar23[-1] = fVar79;
      *pfVar23 = auVar70._12_4_;
      pfVar23[1] = auVar82._12_4_;
      pfVar23[2] = fVar147;
      pfVar23[3] = fVar52;
      auVar36._8_4_ = auVar70._8_4_;
      auVar36._0_8_ = auVar70._0_8_;
      auVar36._12_4_ = auVar70._12_4_;
      auVar37 = insertps(auVar36,auVar82,0x30);
      auVar111._4_4_ = auVar82._8_4_;
      auVar111._0_4_ = auVar82._4_4_;
      auVar111._8_4_ = fVar141;
      auVar111._12_4_ = fVar143;
      auVar32._4_4_ = fVar143;
      auVar32._0_4_ = fVar141;
      auVar32._8_4_ = fVar145;
      auVar32._12_4_ = fVar147;
      auVar32 = insertps(auVar37,auVar32,0x20);
      puVar3 = (undefined4 *)(lVar13 + -0x20 + unaff_RBP);
      *puVar3 = auVar32._0_4_;
      puVar3[1] = auVar32._12_4_;
      puVar3[2] = auVar32._8_4_;
      puVar3[3] = auVar32._4_4_;
      auVar32 = blendps(auVar111,auVar70,4);
      puVar3 = (undefined4 *)(lVar13 + -0x10 + unaff_RBP);
      *puVar3 = auVar32._0_4_;
      puVar3[1] = auVar32._12_4_;
      puVar3[2] = auVar32._8_4_;
      puVar3[3] = auVar32._4_4_;
      pfVar1 = (float *)(lVar13 + unaff_RBP);
      *pfVar1 = fVar145;
      pfVar1[1] = auVar70._12_4_;
      pfVar1[2] = auVar82._12_4_;
      pfVar1[3] = fVar147;
      auVar32 = *(undefined1 (*) [16])(lVar27 + -0x20 + unaff_RBP);
      auVar37 = *(undefined1 (*) [16])(lVar27 + -0x10 + unaff_RBP);
      pfVar1 = (float *)(lVar27 + unaff_RBP);
      auVar35 = insertps(auVar37,auVar32,0x8c);
      fVar120 = auVar32._0_4_ * fVar31;
      fVar121 = auVar32._12_4_ * fVar50;
      fVar122 = auVar37._8_4_ * fVar53;
      fVar141 = pfVar1[1] * fVar55;
      fVar77 = auVar32._4_4_ * fVar142;
      fVar79 = auVar37._0_4_ * fVar144;
      fVar52 = auVar37._12_4_ * fVar146;
      fVar30 = pfVar1[2] * fVar148;
      fVar115 = auVar35._0_4_ * fVar68;
      fVar116 = auVar35._4_4_ * fVar76;
      fVar117 = *pfVar1 * fVar78;
      fVar118 = pfVar1[3] * fVar80;
      fVar87 = fVar134 * fVar77 - fVar139 * fVar120;
      fVar88 = fVar136 * fVar79 - fVar131 * fVar121;
      fVar89 = fVar137 * fVar52 - fVar132 * fVar122;
      fVar114 = fVar138 * fVar30 - fVar133 * fVar141;
      fVar61 = fVar139 * fVar115 - fVar110 * fVar77;
      fVar62 = fVar131 * fVar116 - fVar112 * fVar79;
      fVar63 = fVar132 * fVar117 - fVar113 * fVar52;
      fVar81 = fVar133 * fVar118 - fVar119 * fVar30;
      fVar49 = fVar110 * fVar120 - fVar134 * fVar115;
      fVar51 = fVar112 * fVar121 - fVar136 * fVar116;
      fVar54 = fVar113 * fVar122 - fVar137 * fVar117;
      fVar59 = fVar119 * fVar141 - fVar138 * fVar118;
      fVar61 = fVar61 + fVar61;
      fVar62 = fVar62 + fVar62;
      fVar63 = fVar63 + fVar63;
      fVar81 = fVar81 + fVar81;
      fVar49 = fVar49 + fVar49;
      fVar51 = fVar51 + fVar51;
      fVar54 = fVar54 + fVar54;
      fVar59 = fVar59 + fVar59;
      fVar87 = fVar87 + fVar87;
      fVar88 = fVar88 + fVar88;
      fVar89 = fVar89 + fVar89;
      fVar114 = fVar114 + fVar114;
      auVar69._0_4_ = (fVar134 * fVar49 - fVar61 * fVar139) + fVar107 * fVar87 + fVar115;
      auVar69._4_4_ = (fVar136 * fVar51 - fVar62 * fVar131) + fVar108 * fVar88 + fVar116;
      auVar69._8_4_ = (fVar137 * fVar54 - fVar63 * fVar132) + fVar105 * fVar89 + fVar117;
      auVar69._12_4_ = (fVar138 * fVar59 - fVar81 * fVar133) + fVar109 * fVar114 + fVar118;
      fVar115 = (fVar139 * fVar87 - fVar49 * fVar110) + fVar107 * fVar61 + fVar120;
      fVar116 = (fVar131 * fVar88 - fVar51 * fVar112) + fVar108 * fVar62 + fVar121;
      fVar117 = (fVar132 * fVar89 - fVar54 * fVar113) + fVar105 * fVar63 + fVar122;
      fVar118 = (fVar133 * fVar114 - fVar59 * fVar119) + fVar109 * fVar81 + fVar141;
      auVar83._0_4_ = (fVar110 * fVar61 - fVar87 * fVar134) + fVar107 * fVar49 + fVar77;
      auVar83._4_4_ = (fVar112 * fVar62 - fVar88 * fVar136) + fVar108 * fVar51 + fVar79;
      auVar83._8_4_ = (fVar113 * fVar63 - fVar89 * fVar137) + fVar105 * fVar54 + fVar52;
      auVar83._12_4_ = (fVar119 * fVar81 - fVar114 * fVar138) + fVar109 * fVar59 + fVar30;
      auVar106._4_4_ = fVar116;
      auVar106._0_4_ = fVar115;
      auVar106._8_4_ = fVar117;
      auVar106._12_4_ = fVar118;
      auVar32 = insertps(auVar106,auVar83,0x30);
      auVar123._4_4_ = auVar83._8_4_;
      auVar123._0_4_ = auVar83._4_4_;
      auVar123._8_4_ = auVar69._0_4_;
      auVar123._12_4_ = auVar69._4_4_;
      auVar32 = insertps(auVar32,auVar69,0x20);
      puVar3 = (undefined4 *)(lVar27 + -0x20 + unaff_RBP);
      *puVar3 = auVar32._0_4_;
      puVar3[1] = auVar32._12_4_;
      puVar3[2] = auVar32._8_4_;
      puVar3[3] = auVar32._4_4_;
      auVar37._4_4_ = fVar116;
      auVar37._0_4_ = fVar115;
      auVar37._8_4_ = fVar117;
      auVar37._12_4_ = fVar118;
      auVar32 = blendps(auVar123,auVar37,4);
      puVar3 = (undefined4 *)(lVar27 + -0x10 + unaff_RBP);
      *puVar3 = auVar32._0_4_;
      puVar3[1] = auVar32._12_4_;
      puVar3[2] = auVar32._8_4_;
      puVar3[3] = auVar32._4_4_;
      pfVar1 = (float *)(lVar27 + unaff_RBP);
      *pfVar1 = auVar69._8_4_;
      pfVar1[1] = fVar118;
      pfVar1[2] = auVar83._12_4_;
      pfVar1[3] = auVar69._12_4_;
      auVar32 = *(undefined1 (*) [16])(lVar22 + -0x20 + unaff_RBP);
      auVar37 = *(undefined1 (*) [16])(lVar22 + -0x10 + unaff_RBP);
      pfVar1 = (float *)(lVar22 + unaff_RBP);
      auVar35 = insertps(auVar37,auVar32,0x8c);
      fVar31 = auVar32._0_4_ * fVar31;
      fVar50 = auVar32._12_4_ * fVar50;
      fVar53 = auVar37._8_4_ * fVar53;
      fVar55 = pfVar1[1] * fVar55;
      fVar142 = auVar32._4_4_ * fVar142;
      fVar144 = auVar37._0_4_ * fVar144;
      fVar146 = auVar37._12_4_ * fVar146;
      fVar148 = pfVar1[2] * fVar148;
      fVar68 = auVar35._0_4_ * fVar68;
      fVar76 = auVar35._4_4_ * fVar76;
      fVar78 = *pfVar1 * fVar78;
      fVar80 = pfVar1[3] * fVar80;
      fVar61 = fVar134 * fVar142 - fVar139 * fVar31;
      fVar62 = fVar136 * fVar144 - fVar131 * fVar50;
      fVar63 = fVar137 * fVar146 - fVar132 * fVar53;
      fVar81 = fVar138 * fVar148 - fVar133 * fVar55;
      fVar77 = fVar139 * fVar68 - fVar110 * fVar142;
      fVar79 = fVar131 * fVar76 - fVar112 * fVar144;
      fVar52 = fVar132 * fVar78 - fVar113 * fVar146;
      fVar30 = fVar133 * fVar80 - fVar119 * fVar148;
      fVar49 = fVar110 * fVar31 - fVar134 * fVar68;
      fVar51 = fVar112 * fVar50 - fVar136 * fVar76;
      fVar54 = fVar113 * fVar53 - fVar137 * fVar78;
      fVar59 = fVar119 * fVar55 - fVar138 * fVar80;
      fVar77 = fVar77 + fVar77;
      fVar79 = fVar79 + fVar79;
      fVar52 = fVar52 + fVar52;
      fVar30 = fVar30 + fVar30;
      fVar49 = fVar49 + fVar49;
      fVar51 = fVar51 + fVar51;
      fVar54 = fVar54 + fVar54;
      fVar59 = fVar59 + fVar59;
      fVar61 = fVar61 + fVar61;
      fVar62 = fVar62 + fVar62;
      fVar63 = fVar63 + fVar63;
      fVar81 = fVar81 + fVar81;
      fVar31 = ((fVar139 * fVar61 - fVar49 * fVar110) + fVar107 * fVar77 + fVar31 + auVar33._0_4_) -
               fVar67;
      fVar50 = ((fVar131 * fVar62 - fVar51 * fVar112) + fVar108 * fVar79 + fVar50 + auVar33._4_4_) -
               fVar67;
      auVar124._0_8_ = CONCAT44(fVar50,fVar31);
      auVar124._8_4_ =
           ((fVar132 * fVar63 - fVar54 * fVar113) + fVar105 * fVar52 + fVar53 + auVar33._8_4_) -
           fVar67;
      auVar124._12_4_ =
           ((fVar133 * fVar81 - fVar59 * fVar119) + fVar109 * fVar30 + fVar55 + auVar33._12_4_) -
           fVar67;
      auVar71._0_4_ =
           ((fVar110 * fVar77 - fVar61 * fVar134) + fVar107 * fVar49 + fVar142 + auVar104._0_4_) -
           fVar75;
      auVar71._4_4_ =
           ((fVar112 * fVar79 - fVar62 * fVar136) + fVar108 * fVar51 + fVar144 + auVar104._4_4_) -
           fVar75;
      auVar71._8_4_ =
           ((fVar113 * fVar52 - fVar63 * fVar137) + fVar105 * fVar54 + fVar146 + auVar104._8_4_) -
           fVar75;
      auVar71._12_4_ =
           ((fVar119 * fVar30 - fVar81 * fVar138) + fVar109 * fVar59 + fVar148 + auVar104._12_4_) -
           fVar75;
      auVar104._0_4_ =
           ((fVar134 * fVar49 - fVar77 * fVar139) + fVar107 * fVar61 + fVar68 + auVar34._0_4_) -
           fVar140;
      auVar104._4_4_ =
           ((fVar136 * fVar51 - fVar79 * fVar131) + fVar108 * fVar62 + fVar76 + auVar34._4_4_) -
           fVar140;
      auVar104._8_4_ =
           ((fVar137 * fVar54 - fVar52 * fVar132) + fVar105 * fVar63 + fVar78 + auVar34._8_4_) -
           fVar140;
      auVar104._12_4_ =
           ((fVar138 * fVar59 - fVar30 * fVar133) + fVar109 * fVar81 + fVar80 + auVar34._12_4_) -
           fVar140;
      auVar135._8_4_ = auVar124._8_4_;
      auVar135._0_8_ = auVar124._0_8_;
      auVar135._12_4_ = auVar124._12_4_;
      auVar32 = insertps(auVar135,auVar71,0x30);
      auVar64._4_4_ = auVar71._8_4_;
      auVar64._0_4_ = auVar71._4_4_;
      auVar64._8_4_ = auVar104._0_4_;
      auVar64._12_4_ = auVar104._4_4_;
      auVar32 = insertps(auVar32,auVar104,0x20);
      puVar3 = (undefined4 *)(lVar22 + -0x20 + unaff_RBP);
      *puVar3 = auVar32._0_4_;
      puVar3[1] = auVar32._12_4_;
      puVar3[2] = auVar32._8_4_;
      puVar3[3] = auVar32._4_4_;
      auVar32 = blendps(auVar64,auVar124,4);
      puVar3 = (undefined4 *)(lVar22 + -0x10 + unaff_RBP);
      *puVar3 = auVar32._0_4_;
      puVar3[1] = auVar32._12_4_;
      puVar3[2] = auVar32._8_4_;
      puVar3[3] = auVar32._4_4_;
      pfVar1 = (float *)(lVar22 + unaff_RBP);
      *pfVar1 = auVar104._8_4_;
      pfVar1[1] = auVar124._12_4_;
      pfVar1[2] = auVar71._12_4_;
      pfVar1[3] = auVar104._12_4_;
      auVar32 = *(undefined1 (*) [16])(lVar15 + -0x20 + unaff_RBP);
      auVar37 = *(undefined1 (*) [16])(lVar15 + -0x10 + unaff_RBP);
      pfVar1 = (float *)(lVar15 + unaff_RBP);
      auVar33 = insertps(auVar37,auVar32,0x8c);
      auVar84._0_4_ = auVar32._0_4_ - fVar31;
      auVar84._4_4_ = auVar32._12_4_ - fVar50;
      auVar84._8_4_ = auVar37._8_4_ - auVar124._8_4_;
      auVar84._12_4_ = pfVar1[1] - auVar124._12_4_;
      auVar126._0_4_ = auVar32._4_4_ - auVar71._0_4_;
      auVar126._4_4_ = auVar37._0_4_ - auVar71._4_4_;
      auVar126._8_4_ = auVar37._12_4_ - auVar71._8_4_;
      auVar126._12_4_ = pfVar1[2] - auVar71._12_4_;
      auVar65._0_4_ = auVar33._0_4_ - auVar104._0_4_;
      auVar65._4_4_ = auVar33._4_4_ - auVar104._4_4_;
      auVar65._8_4_ = *pfVar1 - auVar104._8_4_;
      auVar65._12_4_ = pfVar1[3] - auVar104._12_4_;
      auVar33._4_4_ = param_11;
      auVar33._0_4_ = param_11;
      auVar33._8_4_ = param_11;
      auVar33._12_4_ = param_11;
      auVar35 = divps(auVar84,auVar33);
      auVar37 = divps(auVar126,auVar33);
      auVar33 = divps(auVar65,auVar33);
      auVar32 = insertps(auVar35,auVar37,0x30);
      auVar34._0_8_ = auVar37._4_8_;
      auVar34._8_4_ = auVar33._0_4_;
      auVar34._12_4_ = auVar33._4_4_;
      auVar32 = insertps(auVar32,auVar33,0x20);
      puVar3 = (undefined4 *)(lVar16 + -0x20 + unaff_RBP);
      *puVar3 = auVar32._0_4_;
      puVar3[1] = auVar32._12_4_;
      puVar3[2] = auVar32._8_4_;
      puVar3[3] = auVar32._4_4_;
      auVar32 = blendps(auVar34,auVar35,4);
      puVar3 = (undefined4 *)(lVar16 + -0x10 + unaff_RBP);
      *puVar3 = auVar32._0_4_;
      puVar3[1] = auVar32._12_4_;
      puVar3[2] = auVar32._8_4_;
      puVar3[3] = auVar32._4_4_;
      puVar3 = (undefined4 *)(lVar16 + unaff_RBP);
      *puVar3 = auVar33._8_4_;
      puVar3[1] = auVar35._12_4_;
      puVar3[2] = auVar37._12_4_;
      puVar3[3] = auVar33._12_4_;
      lVar28 = lVar28 + 4;
      lVar13 = lVar13 + 0x30;
      pfVar23 = pfVar23 + 0x10;
      lVar27 = lVar27 + 0x30;
      lVar22 = lVar22 + 0x30;
      lVar15 = lVar15 + 0x30;
      lVar16 = lVar16 + 0x30;
      param_12 = param_12 + 0x10;
    } while (lVar28 < iVar12);
    param_12 = (int)lVar28;
  }
  if (param_12 < param_13) {
    auVar48._0_4_ = param_12 + (int)__xmm_00000003000000020000000100000000;
    auVar48._4_4_ = param_12 + __xmm_00000003000000020000000100000000._4_4_;
    auVar48._8_4_ = param_12 + _UNK_150631e08;
    auVar48._12_4_ = param_12 + _UNK_150631e0c;
    auVar56._0_4_ = -(uint)(auVar48._0_4_ < param_13);
    auVar56._4_4_ = -(uint)(auVar48._4_4_ < param_13);
    auVar56._8_4_ = -(uint)(auVar48._8_4_ < param_13);
    auVar56._12_4_ = -(uint)(auVar48._12_4_ < param_13);
    lVar13 = (longlong)(param_12 * 4);
    uVar18 = movmskps((int)unaff_RBP,auVar56);
    bVar26 = (char)((byte)uVar18 << 4) >> 4;
    bVar24 = (byte)uVar18 & 9;
    if (bVar24 == 9) {
      auVar48 = *(undefined1 (*) [16])(param_8 + lVar13);
    }
    else {
      puVar20 = (uint *)(param_8 + lVar13);
      if ((uVar18 & 1) != 0) {
        auVar48 = ZEXT416(*puVar20);
      }
      if ((uVar18 & 2) != 0) {
        auVar48._0_8_ = auVar48._0_8_ & 0xffffffff | (ulonglong)puVar20[1] << 0x20;
      }
      if ((uVar18 & 4) != 0) {
        auVar48._8_8_ = auVar48._8_8_ & 0xffffffff00000000 | (ulonglong)puVar20[2];
      }
      if ((uVar18 & 8) != 0) {
        auVar48._8_8_ = auVar48._8_8_ & 0xffffffff | (ulonglong)puVar20[3] << 0x20;
      }
    }
    auVar32 = pmulld(auVar48,___xmm_00000006000000060000000600000006);
    auVar32 = auVar32 & auVar56;
    lVar27 = param_9 + (longlong)auVar32._0_4_ * 8;
    lVar22 = param_9 + (longlong)auVar32._4_4_ * 8;
    lVar15 = param_9 + (longlong)auVar32._8_4_ * 8;
    lVar16 = param_9 + (longlong)auVar32._12_4_ * 8;
    auVar37 = insertps(ZEXT416(*(uint *)(param_9 + (longlong)auVar32._0_4_ * 8)),
                       *(undefined4 *)(param_9 + (longlong)auVar32._4_4_ * 8),0x10);
    auVar37 = insertps(auVar37,*(undefined4 *)(param_9 + (longlong)auVar32._8_4_ * 8),0x20);
    auVar104 = insertps(auVar37,*(undefined4 *)(param_9 + (longlong)auVar32._12_4_ * 8),0x30);
    auVar32 = ___xmm_00000004000000040000000400000004 & auVar56;
    auVar37 = insertps(ZEXT416(*(uint *)((ulonglong)auVar32._0_4_ + lVar27)),
                       *(undefined4 *)((ulonglong)auVar32._4_4_ + lVar22),0x10);
    auVar37 = insertps(auVar37,*(undefined4 *)((ulonglong)auVar32._8_4_ + lVar15),0x20);
    auVar69 = insertps(auVar37,*(undefined4 *)((ulonglong)auVar32._12_4_ + lVar16),0x30);
    auVar32 = ___xmm_00000008000000080000000800000008 & auVar56;
    auVar37 = insertps(ZEXT416(*(uint *)((ulonglong)auVar32._0_4_ + lVar27)),
                       *(undefined4 *)((ulonglong)auVar32._4_4_ + lVar22),0x10);
    auVar37 = insertps(auVar37,*(undefined4 *)((ulonglong)auVar32._8_4_ + lVar15),0x20);
    auVar36 = insertps(auVar37,*(undefined4 *)((ulonglong)auVar32._12_4_ + lVar16),0x30);
    auVar32 = ___xmm_0000000c0000000c0000000c0000000c & auVar56;
    auVar37 = insertps(ZEXT416(*(uint *)((ulonglong)auVar32._0_4_ + lVar27)),
                       *(undefined4 *)((ulonglong)auVar32._4_4_ + lVar22),0x10);
    auVar37 = insertps(auVar37,*(undefined4 *)((ulonglong)auVar32._8_4_ + lVar15),0x20);
    auVar123 = insertps(auVar37,*(undefined4 *)((ulonglong)auVar32._12_4_ + lVar16),0x30);
    auVar32 = ___xmm_00000010000000100000001000000010 & auVar56;
    auVar37 = insertps(ZEXT416(*(uint *)((ulonglong)auVar32._0_4_ + lVar27)),
                       *(undefined4 *)((ulonglong)auVar32._4_4_ + lVar22),0x10);
    auVar37 = insertps(auVar37,*(undefined4 *)((ulonglong)auVar32._8_4_ + lVar15),0x20);
    auVar32 = insertps(auVar37,*(undefined4 *)((ulonglong)auVar32._12_4_ + lVar16),0x30);
    auVar37 = ___xmm_00000014000000140000001400000014 & auVar56;
    auVar33 = insertps(ZEXT416(*(uint *)((ulonglong)auVar37._0_4_ + lVar27)),
                       *(undefined4 *)((ulonglong)auVar37._4_4_ + lVar22),0x10);
    auVar33 = insertps(auVar33,*(undefined4 *)((ulonglong)auVar37._8_4_ + lVar15),0x20);
    auVar111 = insertps(auVar33,*(undefined4 *)((ulonglong)auVar37._12_4_ + lVar16),0x30);
    auVar37 = ___xmm_00000018000000180000001800000018 & auVar56;
    auVar33 = insertps(ZEXT416(*(uint *)((ulonglong)auVar37._0_4_ + lVar27)),
                       *(undefined4 *)((ulonglong)auVar37._4_4_ + lVar22),0x10);
    auVar33 = insertps(auVar33,*(undefined4 *)((ulonglong)auVar37._8_4_ + lVar15),0x20);
    auVar37 = insertps(auVar33,*(undefined4 *)((ulonglong)auVar37._12_4_ + lVar16),0x30);
    auVar33 = ___xmm_00000020000000200000002000000020 & auVar56;
    auVar34 = insertps(ZEXT416(*(uint *)((ulonglong)auVar33._0_4_ + lVar27)),
                       *(undefined4 *)((ulonglong)auVar33._4_4_ + lVar22),0x10);
    auVar34 = insertps(auVar34,*(undefined4 *)((ulonglong)auVar33._8_4_ + lVar15),0x20);
    auVar33 = insertps(auVar34,*(undefined4 *)((ulonglong)auVar33._12_4_ + lVar16),0x30);
    auVar34 = ___xmm_00000024000000240000002400000024 & auVar56;
    auVar35 = insertps(ZEXT416(*(uint *)((ulonglong)auVar34._0_4_ + lVar27)),
                       *(undefined4 *)((ulonglong)auVar34._4_4_ + lVar22),0x10);
    auVar35 = insertps(auVar35,*(undefined4 *)((ulonglong)auVar34._8_4_ + lVar15),0x20);
    auVar34 = insertps(auVar35,*(undefined4 *)((ulonglong)auVar34._12_4_ + lVar16),0x30);
    auVar35 = ___xmm_00000028000000280000002800000028 & auVar56;
    auVar106 = insertps(ZEXT416(*(uint *)((ulonglong)auVar35._0_4_ + lVar27)),
                        *(undefined4 *)((ulonglong)auVar35._4_4_ + lVar22),0x10);
    auVar106 = insertps(auVar106,*(undefined4 *)((ulonglong)auVar35._8_4_ + lVar15),0x20);
    auVar35 = insertps(auVar106,*(undefined4 *)((ulonglong)auVar35._12_4_ + lVar16),0x30);
    lVar27 = (longlong)param_12;
    pauVar2 = (undefined1 (*) [16])(param_3 + lVar27 * 0xc);
    bVar21 = ~bVar26;
    if ((bVar21 & 0xf) == 0) {
      auVar106 = *pauVar2;
      auVar135 = pauVar2[1];
      auVar91._0_4_ = auVar106._0_4_;
      auVar126 = insertps(auVar135,auVar106,0x8c);
      auVar91._4_4_ = auVar106._12_4_;
      auVar91._8_4_ = auVar135._8_4_;
      auVar91._12_4_ = *(undefined4 *)(pauVar2[2] + 4);
      auVar98._4_4_ = auVar135._0_4_;
      auVar98._0_4_ = auVar106._4_4_;
      auVar98._8_4_ = auVar135._12_4_;
      auVar98._12_4_ = *(undefined4 *)(pauVar2[2] + 8);
      auVar125._0_8_ = auVar126._0_8_;
      auVar125._8_4_ = *(undefined4 *)pauVar2[2];
      auVar125._12_4_ = *(undefined4 *)(pauVar2[2] + 0xc);
    }
    else {
      auVar38._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar56._0_4_;
      auVar38._4_4_ = _UNK_150b50da4 & auVar56._4_4_;
      auVar38._8_4_ = _UNK_150b50da8 & auVar56._8_4_;
      auVar38._12_4_ = _UNK_150b50dac & auVar56._12_4_;
      lVar22 = extractps(auVar38,1);
      lVar16 = extractps(auVar38,2);
      lVar15 = extractps(auVar38,3);
      auVar106 = insertps(ZEXT416(*(uint *)*pauVar2),*(undefined4 *)(*pauVar2 + lVar22),0x10);
      auVar106 = insertps(auVar106,*(undefined4 *)(*pauVar2 + lVar16),0x20);
      auVar91 = insertps(auVar106,*(undefined4 *)(*pauVar2 + lVar15),0x30);
      auVar106 = ___xmm_000000280000001c0000001000000004 & auVar56;
      auVar135 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar106._0_4_)),
                          *(undefined4 *)(*pauVar2 + auVar106._4_4_),0x10);
      auVar135 = insertps(auVar135,*(undefined4 *)(*pauVar2 + auVar106._8_4_),0x20);
      auVar98 = insertps(auVar135,*(undefined4 *)(*pauVar2 + auVar106._12_4_),0x30);
      auVar106 = ___xmm_0000002c000000200000001400000008 & auVar56;
      auVar135 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar106._0_4_)),
                          *(undefined4 *)(*pauVar2 + auVar106._4_4_),0x10);
      auVar135 = insertps(auVar135,*(undefined4 *)(*pauVar2 + auVar106._8_4_),0x20);
      auVar125 = insertps(auVar135,*(undefined4 *)(*pauVar2 + auVar106._12_4_),0x30);
    }
    local_1a8 = auVar33._0_4_;
    fStack_1a4 = auVar33._4_4_;
    fStack_1a0 = auVar33._8_4_;
    fStack_19c = auVar33._12_4_;
    fVar87 = auVar91._0_4_ * local_1a8;
    fVar88 = auVar91._4_4_ * fStack_1a4;
    fVar89 = auVar91._8_4_ * fStack_1a0;
    fVar114 = auVar91._12_4_ * fStack_19c;
    local_198 = auVar34._0_4_;
    fStack_194 = auVar34._4_4_;
    fStack_190 = auVar34._8_4_;
    fStack_18c = auVar34._12_4_;
    fVar115 = auVar98._0_4_ * local_198;
    fVar116 = auVar98._4_4_ * fStack_194;
    fVar117 = auVar98._8_4_ * fStack_190;
    fVar118 = auVar98._12_4_ * fStack_18c;
    fVar105 = auVar35._0_4_;
    auVar127._0_4_ = auVar125._0_4_ * fVar105;
    fVar107 = auVar35._4_4_;
    auVar127._4_4_ = auVar125._4_4_ * fVar107;
    fVar108 = auVar35._8_4_;
    auVar127._8_4_ = auVar125._8_4_ * fVar108;
    fVar109 = auVar35._12_4_;
    auVar127._12_4_ = auVar125._12_4_ * fVar109;
    fVar61 = auVar104._0_4_;
    fVar62 = auVar104._4_4_;
    fVar63 = auVar104._8_4_;
    fVar81 = auVar104._12_4_;
    fVar53 = auVar69._0_4_;
    fVar148 = auVar69._4_4_;
    fVar54 = auVar69._8_4_;
    fVar55 = auVar69._12_4_;
    fVar31 = auVar36._0_4_;
    fVar49 = auVar36._4_4_;
    fVar50 = auVar36._8_4_;
    fVar51 = auVar36._12_4_;
    fVar120 = fVar61 * fVar115 - fVar53 * fVar87;
    fVar121 = fVar62 * fVar116 - fVar148 * fVar88;
    fVar122 = fVar63 * fVar117 - fVar54 * fVar89;
    fVar139 = fVar81 * fVar118 - fVar55 * fVar114;
    fVar119 = fVar53 * auVar127._0_4_ - fVar31 * fVar115;
    fVar142 = fVar148 * auVar127._4_4_ - fVar49 * fVar116;
    fVar144 = fVar54 * auVar127._8_4_ - fVar50 * fVar117;
    fVar146 = fVar55 * auVar127._12_4_ - fVar51 * fVar118;
    fVar77 = fVar31 * fVar87 - fVar61 * auVar127._0_4_;
    fVar79 = fVar49 * fVar88 - fVar62 * auVar127._4_4_;
    fVar52 = fVar50 * fVar89 - fVar63 * auVar127._8_4_;
    fVar30 = fVar51 * fVar114 - fVar81 * auVar127._12_4_;
    fVar119 = fVar119 + fVar119;
    fVar142 = fVar142 + fVar142;
    fVar144 = fVar144 + fVar144;
    fVar146 = fVar146 + fVar146;
    fVar77 = fVar77 + fVar77;
    fVar79 = fVar79 + fVar79;
    fVar52 = fVar52 + fVar52;
    fVar30 = fVar30 + fVar30;
    fVar120 = fVar120 + fVar120;
    fVar121 = fVar121 + fVar121;
    fVar122 = fVar122 + fVar122;
    fVar139 = fVar139 + fVar139;
    fVar110 = auVar123._0_4_;
    fVar112 = auVar123._4_4_;
    fVar113 = auVar123._12_4_;
    fVar59 = auVar123._8_4_;
    fVar68 = fVar110 * fVar120 + auVar127._0_4_;
    fVar76 = fVar112 * fVar121 + auVar127._4_4_;
    fVar78 = fVar59 * fVar122 + auVar127._8_4_;
    fVar80 = fVar113 * fVar139 + auVar127._12_4_;
    local_168 = auVar32._0_4_;
    fStack_164 = auVar32._4_4_;
    fStack_160 = auVar32._8_4_;
    fStack_15c = auVar32._12_4_;
    local_178 = auVar37._0_4_;
    fStack_174 = auVar37._4_4_;
    fStack_170 = auVar37._8_4_;
    fStack_16c = auVar37._12_4_;
    fVar140 = *param_10;
    fVar67 = param_10[1];
    fVar75 = param_10[2];
    if (bVar24 == 9) {
      auVar127 = *(undefined1 (*) [16])(param_6 + lVar13);
    }
    else {
      puVar20 = (uint *)(param_6 + lVar13);
      if ((uVar18 & 1) != 0) {
        auVar127 = ZEXT416(*puVar20);
      }
      if ((uVar18 & 2) != 0) {
        auVar127 = insertps(auVar127,puVar20[1],0x10);
      }
      if ((uVar18 & 4) != 0) {
        auVar127 = insertps(auVar127,puVar20[2],0x20);
      }
      if ((uVar18 & 8) != 0) {
        auVar127 = insertps(auVar127,puVar20[3],0x30);
      }
    }
    pfVar23 = (float *)(param_1 + lVar27 * 0x10);
    fVar87 = ((fVar53 * fVar120 - fVar77 * fVar31) + fVar110 * fVar119 + fVar87 + local_168) -
             fVar140;
    fVar88 = ((fVar148 * fVar121 - fVar79 * fVar49) + fVar112 * fVar142 + fVar88 + fStack_164) -
             fVar140;
    auVar92._0_8_ = CONCAT44(fVar88,fVar87);
    auVar92._8_4_ =
         ((fVar54 * fVar122 - fVar52 * fVar50) + fVar59 * fVar144 + fVar89 + fStack_160) - fVar140;
    auVar92._12_4_ =
         ((fVar55 * fVar139 - fVar30 * fVar51) + fVar113 * fVar146 + fVar114 + fStack_15c) - fVar140
    ;
    auVar99._0_4_ =
         ((fVar31 * fVar119 - fVar120 * fVar61) + fVar110 * fVar77 + fVar115 + auVar111._0_4_) -
         fVar67;
    auVar99._4_4_ =
         ((fVar49 * fVar142 - fVar121 * fVar62) + fVar112 * fVar79 + fVar116 + auVar111._4_4_) -
         fVar67;
    auVar99._8_4_ =
         ((fVar50 * fVar144 - fVar122 * fVar63) + fVar59 * fVar52 + fVar117 + auVar111._8_4_) -
         fVar67;
    auVar99._12_4_ =
         ((fVar51 * fVar146 - fVar139 * fVar81) + fVar113 * fVar30 + fVar118 + auVar111._12_4_) -
         fVar67;
    fVar77 = ((fVar61 * fVar77 - fVar119 * fVar53) + fVar68 + local_178) - fVar75;
    fVar79 = ((fVar62 * fVar79 - fVar142 * fVar148) + fVar76 + fStack_174) - fVar75;
    fVar52 = ((fVar63 * fVar52 - fVar144 * fVar54) + fVar78 + fStack_170) - fVar75;
    fVar30 = ((fVar81 * fVar30 - fVar146 * fVar55) + fVar80 + fStack_16c) - fVar75;
    if ((bVar21 & 0xf) == 0) {
      auVar40._8_4_ = fVar88;
      auVar40._0_8_ = auVar92._0_8_;
      auVar40._12_4_ = auVar99._4_4_;
      uVar90 = CONCAT44(auVar99._0_4_,fVar87);
      *(undefined8 *)pfVar23 = uVar90;
      *(ulonglong *)(pfVar23 + 2) = CONCAT44(auVar127._0_4_,fVar77);
      *(longlong *)(pfVar23 + 4) = auVar40._8_8_;
      pfVar23[6] = fVar79;
      pfVar23[7] = auVar127._4_4_;
      pfVar23[8] = auVar92._8_4_;
      pfVar23[9] = auVar99._8_4_;
      pfVar23[10] = fVar52;
      pfVar23[0xb] = auVar127._8_4_;
      pfVar23[0xc] = auVar92._12_4_;
      pfVar23[0xd] = auVar99._12_4_;
      pfVar23[0xe] = fVar30;
      pfVar23[0xf] = auVar127._12_4_;
      auVar41._4_4_ = fVar88;
      auVar41._0_4_ = fVar87;
      auVar41._8_4_ = auVar92._8_4_;
      auVar41._12_4_ = auVar92._12_4_;
      auVar32 = insertps(auVar41,auVar99,0x30);
      auVar72._4_4_ = auVar99._8_4_;
      auVar72._0_4_ = auVar99._4_4_;
      auVar72._8_4_ = fVar77;
      auVar72._12_4_ = fVar79;
      auVar10._4_4_ = fVar79;
      auVar10._0_4_ = fVar77;
      auVar10._8_4_ = fVar52;
      auVar10._12_4_ = fVar30;
      auVar32 = insertps(auVar32,auVar10,0x20);
      *(int *)*pauVar2 = auVar32._0_4_;
      *(int *)(*pauVar2 + 4) = auVar32._12_4_;
      *(int *)(*pauVar2 + 8) = auVar32._8_4_;
      *(int *)(*pauVar2 + 0xc) = auVar32._4_4_;
      auVar32 = blendps(auVar72,auVar92,4);
      *(int *)pauVar2[1] = auVar32._0_4_;
      *(int *)(pauVar2[1] + 4) = auVar32._12_4_;
      *(int *)(pauVar2[1] + 8) = auVar32._8_4_;
      *(int *)(pauVar2[1] + 0xc) = auVar32._4_4_;
      *(float *)pauVar2[2] = fVar52;
      *(float *)(pauVar2[2] + 4) = auVar92._12_4_;
      *(float *)(pauVar2[2] + 8) = auVar99._12_4_;
      *(float *)(pauVar2[2] + 0xc) = fVar30;
      pfVar23 = (float *)(param_2 + lVar27 * 0xc);
      auVar32 = *(undefined1 (*) [16])(param_2 + lVar27 * 0xc);
      auVar37 = *(undefined1 (*) [16])(param_2 + 0x10 + lVar27 * 0xc);
      puVar3 = (undefined4 *)(param_2 + 0x20 + lVar27 * 0xc);
      auVar93._0_4_ = auVar32._0_4_;
      auVar33 = insertps(auVar37,auVar32,0x8c);
      auVar93._4_4_ = auVar32._12_4_;
      auVar93._8_4_ = auVar37._8_4_;
      auVar93._12_4_ = puVar3[1];
      auVar100._4_4_ = auVar37._0_4_;
      auVar100._0_4_ = auVar32._4_4_;
      auVar100._8_4_ = auVar37._12_4_;
      auVar100._12_4_ = puVar3[2];
      auVar128._0_8_ = auVar33._0_8_;
      auVar128._8_4_ = *puVar3;
      auVar128._12_4_ = puVar3[3];
    }
    else {
      if ((bVar26 & 1) != 0) {
        *pfVar23 = fVar87;
      }
      if ((bVar26 & 2) != 0) {
        uVar90 = extractps(auVar92,1);
        *(undefined8 *)(pfVar23 + 4) = uVar90;
      }
      if ((bVar26 & 4) != 0) {
        uVar90 = extractps(auVar92,2);
        *(undefined8 *)(pfVar23 + 8) = uVar90;
      }
      if ((char)bVar26 < '\0') {
        uVar90 = extractps(auVar92,3);
        *(undefined8 *)(pfVar23 + 0xc) = uVar90;
      }
      if ((bVar26 & 1) != 0) {
        pfVar23[1] = auVar99._0_4_;
      }
      if ((bVar26 & 2) != 0) {
        uVar90 = extractps(auVar99,1);
        *(undefined8 *)(pfVar23 + 5) = uVar90;
      }
      if ((bVar26 & 4) != 0) {
        uVar90 = extractps(auVar99,2);
        *(undefined8 *)(pfVar23 + 9) = uVar90;
      }
      if ((char)bVar26 < '\0') {
        uVar90 = extractps(auVar99,3);
        *(undefined8 *)(pfVar23 + 0xd) = uVar90;
      }
      if ((bVar26 & 1) != 0) {
        pfVar23[2] = fVar77;
      }
      if ((bVar26 & 2) != 0) {
        auVar9._4_4_ = fVar79;
        auVar9._0_4_ = fVar77;
        auVar9._8_4_ = fVar52;
        auVar9._12_4_ = fVar30;
        uVar90 = extractps(auVar9,1);
        *(undefined8 *)(pfVar23 + 6) = uVar90;
      }
      if ((bVar26 & 4) != 0) {
        auVar8._4_4_ = fVar79;
        auVar8._0_4_ = fVar77;
        auVar8._8_4_ = fVar52;
        auVar8._12_4_ = fVar30;
        uVar90 = extractps(auVar8,2);
        *(undefined8 *)(pfVar23 + 10) = uVar90;
      }
      if ((char)bVar26 < '\0') {
        auVar7._4_4_ = fVar79;
        auVar7._0_4_ = fVar77;
        auVar7._8_4_ = fVar52;
        auVar7._12_4_ = fVar30;
        uVar90 = extractps(auVar7,3);
        *(undefined8 *)(pfVar23 + 0xe) = uVar90;
      }
      if ((bVar26 & 1) != 0) {
        pfVar23[3] = auVar127._0_4_;
      }
      if ((bVar26 & 2) != 0) {
        uVar90 = extractps(auVar127,1);
        *(undefined8 *)(pfVar23 + 7) = uVar90;
      }
      if ((bVar26 & 4) != 0) {
        uVar90 = extractps(auVar127,2);
        *(undefined8 *)(pfVar23 + 0xb) = uVar90;
      }
      if ((char)bVar26 < '\0') {
        uVar90 = extractps(auVar127,3);
        *(undefined8 *)(pfVar23 + 0xf) = uVar90;
      }
      if ((bVar26 & 1) != 0) {
        *(float *)*pauVar2 = fVar87;
      }
      if ((bVar26 & 2) != 0) {
        uVar90 = extractps(auVar92,1);
        *(undefined8 *)(*pauVar2 + 0xc) = uVar90;
      }
      if ((bVar26 & 4) != 0) {
        uVar90 = extractps(auVar92,2);
        *(undefined8 *)(pauVar2[1] + 8) = uVar90;
      }
      if ((char)bVar26 < '\0') {
        uVar90 = extractps(auVar92,3);
        *(undefined8 *)(pauVar2[2] + 4) = uVar90;
      }
      if ((bVar26 & 1) != 0) {
        *(float *)(*pauVar2 + 4) = auVar99._0_4_;
      }
      if ((bVar26 & 2) != 0) {
        uVar90 = extractps(auVar99,1);
        *(undefined8 *)pauVar2[1] = uVar90;
      }
      if ((bVar26 & 4) != 0) {
        uVar90 = extractps(auVar99,2);
        *(undefined8 *)(pauVar2[1] + 0xc) = uVar90;
      }
      if ((char)bVar26 < '\0') {
        uVar90 = extractps(auVar99,3);
        *(undefined8 *)(pauVar2[2] + 8) = uVar90;
      }
      if ((bVar26 & 1) != 0) {
        *(float *)(*pauVar2 + 8) = fVar77;
      }
      if ((bVar26 & 2) != 0) {
        auVar6._4_4_ = fVar79;
        auVar6._0_4_ = fVar77;
        auVar6._8_4_ = fVar52;
        auVar6._12_4_ = fVar30;
        uVar90 = extractps(auVar6,1);
        *(undefined8 *)(pauVar2[1] + 4) = uVar90;
      }
      if ((bVar26 & 4) != 0) {
        auVar5._4_4_ = fVar79;
        auVar5._0_4_ = fVar77;
        auVar5._8_4_ = fVar52;
        auVar5._12_4_ = fVar30;
        uVar90 = extractps(auVar5,2);
        *(undefined8 *)pauVar2[2] = uVar90;
      }
      if ((char)bVar26 < '\0') {
        auVar4._4_4_ = fVar79;
        auVar4._0_4_ = fVar77;
        auVar4._8_4_ = fVar52;
        auVar4._12_4_ = fVar30;
        uVar90 = extractps(auVar4,3);
        *(undefined8 *)(pauVar2[2] + 0xc) = uVar90;
      }
      auVar39._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar56._0_4_;
      auVar39._4_4_ = _UNK_150b50da4 & auVar56._4_4_;
      auVar39._8_4_ = _UNK_150b50da8 & auVar56._8_4_;
      auVar39._12_4_ = _UNK_150b50dac & auVar56._12_4_;
      lVar13 = extractps(auVar39,1);
      lVar22 = extractps(auVar39,2);
      lVar15 = extractps(auVar39,3);
      pfVar23 = (float *)(param_2 + lVar27 * 0xc);
      auVar32 = insertps(ZEXT416(*(uint *)(param_2 + lVar27 * 0xc)),
                         *(undefined4 *)(lVar13 + (longlong)pfVar23),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(lVar22 + (longlong)pfVar23),0x20);
      auVar93 = insertps(auVar32,*(undefined4 *)(lVar15 + (longlong)pfVar23),0x30);
      auVar32 = ___xmm_000000280000001c0000001000000004 & auVar56;
      auVar37 = insertps(ZEXT416(*(uint *)((ulonglong)auVar32._0_4_ + (longlong)pfVar23)),
                         *(undefined4 *)((ulonglong)auVar32._4_4_ + (longlong)pfVar23),0x10);
      auVar37 = insertps(auVar37,*(undefined4 *)((ulonglong)auVar32._8_4_ + (longlong)pfVar23),0x20)
      ;
      auVar100 = insertps(auVar37,*(undefined4 *)((ulonglong)auVar32._12_4_ + (longlong)pfVar23),
                          0x30);
      auVar32 = ___xmm_0000002c000000200000001400000008 & auVar56;
      auVar37 = insertps(ZEXT416(*(uint *)((ulonglong)auVar32._0_4_ + (longlong)pfVar23)),
                         *(undefined4 *)((ulonglong)auVar32._4_4_ + (longlong)pfVar23),0x10);
      auVar37 = insertps(auVar37,*(undefined4 *)((ulonglong)auVar32._8_4_ + (longlong)pfVar23),0x20)
      ;
      auVar128 = insertps(auVar37,*(undefined4 *)((ulonglong)auVar32._12_4_ + (longlong)pfVar23),
                          0x30);
    }
    fVar87 = auVar93._0_4_ * local_1a8;
    fVar68 = auVar93._4_4_ * fStack_1a4;
    fVar88 = auVar93._8_4_ * fStack_1a0;
    fVar76 = auVar93._12_4_ * fStack_19c;
    fVar89 = auVar100._0_4_ * local_198;
    fVar78 = auVar100._4_4_ * fStack_194;
    fVar114 = auVar100._8_4_ * fStack_190;
    fVar80 = auVar100._12_4_ * fStack_18c;
    fVar119 = auVar128._0_4_ * fVar105;
    fVar142 = auVar128._4_4_ * fVar107;
    fVar144 = auVar128._8_4_ * fVar108;
    fVar146 = auVar128._12_4_ * fVar109;
    fVar120 = fVar61 * fVar89 - fVar53 * fVar87;
    fVar121 = fVar62 * fVar78 - fVar148 * fVar68;
    fVar122 = fVar63 * fVar114 - fVar54 * fVar88;
    fVar139 = fVar81 * fVar80 - fVar55 * fVar76;
    fVar115 = fVar53 * fVar119 - fVar31 * fVar89;
    fVar116 = fVar148 * fVar142 - fVar49 * fVar78;
    fVar117 = fVar54 * fVar144 - fVar50 * fVar114;
    fVar118 = fVar55 * fVar146 - fVar51 * fVar80;
    fVar77 = fVar31 * fVar87 - fVar61 * fVar119;
    fVar79 = fVar49 * fVar68 - fVar62 * fVar142;
    fVar52 = fVar50 * fVar88 - fVar63 * fVar144;
    fVar30 = fVar51 * fVar76 - fVar81 * fVar146;
    fVar115 = fVar115 + fVar115;
    fVar116 = fVar116 + fVar116;
    fVar117 = fVar117 + fVar117;
    fVar118 = fVar118 + fVar118;
    fVar77 = fVar77 + fVar77;
    fVar79 = fVar79 + fVar79;
    fVar52 = fVar52 + fVar52;
    fVar30 = fVar30 + fVar30;
    fVar120 = fVar120 + fVar120;
    fVar121 = fVar121 + fVar121;
    fVar122 = fVar122 + fVar122;
    fVar139 = fVar139 + fVar139;
    auVar94._0_4_ = (fVar61 * fVar77 - fVar115 * fVar53) + fVar110 * fVar120 + fVar119;
    auVar94._4_4_ = (fVar62 * fVar79 - fVar116 * fVar148) + fVar112 * fVar121 + fVar142;
    auVar94._8_4_ = (fVar63 * fVar52 - fVar117 * fVar54) + fVar59 * fVar122 + fVar144;
    auVar94._12_4_ = (fVar81 * fVar30 - fVar118 * fVar55) + fVar113 * fVar139 + fVar146;
    fVar87 = (fVar53 * fVar120 - fVar77 * fVar31) + fVar110 * fVar115 + fVar87;
    auVar129._0_8_ =
         CONCAT44((fVar148 * fVar121 - fVar79 * fVar49) + fVar112 * fVar116 + fVar68,fVar87);
    auVar129._8_4_ = (fVar54 * fVar122 - fVar52 * fVar50) + fVar59 * fVar117 + fVar88;
    auVar129._12_4_ = (fVar55 * fVar139 - fVar30 * fVar51) + fVar113 * fVar118 + fVar76;
    auVar101._0_4_ = (fVar31 * fVar115 - fVar120 * fVar61) + fVar110 * fVar77 + fVar89;
    auVar101._4_4_ = (fVar49 * fVar116 - fVar121 * fVar62) + fVar112 * fVar79 + fVar78;
    auVar101._8_4_ = (fVar50 * fVar117 - fVar122 * fVar63) + fVar59 * fVar52 + fVar114;
    auVar101._12_4_ = (fVar51 * fVar118 - fVar139 * fVar81) + fVar113 * fVar30 + fVar80;
    if ((bVar21 & 0xf) == 0) {
      lVar13 = lVar27 * 0xc;
      auVar43._8_4_ = auVar129._8_4_;
      auVar43._0_8_ = auVar129._0_8_;
      auVar43._12_4_ = auVar129._12_4_;
      auVar32 = insertps(auVar43,auVar101,0x30);
      auVar73._4_4_ = auVar101._8_4_;
      auVar73._0_4_ = auVar101._4_4_;
      auVar73._8_4_ = auVar94._0_4_;
      auVar73._12_4_ = auVar94._4_4_;
      auVar32 = insertps(auVar32,auVar94,0x20);
      *pfVar23 = auVar32._0_4_;
      pfVar23[1] = auVar32._12_4_;
      pfVar23[2] = auVar32._8_4_;
      pfVar23[3] = auVar32._4_4_;
      auVar32 = blendps(auVar73,auVar129,4);
      puVar3 = (undefined4 *)(param_2 + 0x10 + lVar13);
      *puVar3 = auVar32._0_4_;
      puVar3[1] = auVar32._12_4_;
      puVar3[2] = auVar32._8_4_;
      puVar3[3] = auVar32._4_4_;
      pfVar23 = (float *)(param_2 + 0x20 + lVar13);
      *pfVar23 = auVar94._8_4_;
      pfVar23[1] = auVar129._12_4_;
      pfVar23[2] = auVar101._12_4_;
      pfVar23[3] = auVar94._12_4_;
      auVar32 = *(undefined1 (*) [16])(param_4 + lVar13);
      auVar37 = *(undefined1 (*) [16])(param_4 + 0x10 + lVar13);
      puVar3 = (undefined4 *)(param_4 + 0x20 + lVar13);
      pfVar23 = (float *)(param_4 + lVar13);
      auVar95._0_4_ = auVar32._0_4_;
      auVar33 = insertps(auVar37,auVar32,0x8c);
      auVar95._4_4_ = auVar32._12_4_;
      auVar95._8_4_ = auVar37._8_4_;
      auVar95._12_4_ = puVar3[1];
      auVar102._4_4_ = auVar37._0_4_;
      auVar102._0_4_ = auVar32._4_4_;
      auVar102._8_4_ = auVar37._12_4_;
      auVar102._12_4_ = puVar3[2];
      auVar130._0_8_ = auVar33._0_8_;
      auVar130._8_4_ = *puVar3;
      auVar130._12_4_ = puVar3[3];
      fVar140 = *param_10;
      fVar67 = param_10[1];
      fVar75 = param_10[2];
    }
    else {
      if ((bVar26 & 1) != 0) {
        *pfVar23 = fVar87;
      }
      if ((bVar26 & 2) != 0) {
        uVar90 = extractps(auVar129,1);
        *(undefined8 *)(param_2 + 0xc + lVar27 * 0xc) = uVar90;
      }
      if ((bVar26 & 4) != 0) {
        uVar90 = extractps(auVar129,2);
        *(undefined8 *)(param_2 + 0x18 + lVar27 * 0xc) = uVar90;
      }
      if ((char)bVar26 < '\0') {
        uVar90 = extractps(auVar129,3);
        *(undefined8 *)(param_2 + 0x24 + lVar27 * 0xc) = uVar90;
      }
      if ((bVar26 & 1) != 0) {
        *(float *)(param_2 + 4 + lVar27 * 0xc) = auVar101._0_4_;
      }
      if ((bVar26 & 2) != 0) {
        uVar90 = extractps(auVar101,1);
        *(undefined8 *)(param_2 + 0x10 + lVar27 * 0xc) = uVar90;
      }
      if ((bVar26 & 4) != 0) {
        uVar90 = extractps(auVar101,2);
        *(undefined8 *)(param_2 + 0x1c + lVar27 * 0xc) = uVar90;
      }
      if ((char)bVar26 < '\0') {
        uVar90 = extractps(auVar101,3);
        *(undefined8 *)(param_2 + 0x28 + lVar27 * 0xc) = uVar90;
      }
      if ((bVar26 & 1) != 0) {
        *(float *)(param_2 + 8 + lVar27 * 0xc) = auVar94._0_4_;
      }
      if ((bVar26 & 2) != 0) {
        uVar90 = extractps(auVar94,1);
        *(undefined8 *)(param_2 + 0x14 + lVar27 * 0xc) = uVar90;
      }
      if ((bVar26 & 4) != 0) {
        uVar90 = extractps(auVar94,2);
        *(undefined8 *)(param_2 + 0x20 + lVar27 * 0xc) = uVar90;
      }
      if ((char)bVar26 < '\0') {
        uVar90 = extractps(auVar94,3);
        *(undefined8 *)(param_2 + 0x2c + lVar27 * 0xc) = uVar90;
      }
      auVar42._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar56._0_4_;
      auVar42._4_4_ = _UNK_150b50da4 & auVar56._4_4_;
      auVar42._8_4_ = _UNK_150b50da8 & auVar56._8_4_;
      auVar42._12_4_ = _UNK_150b50dac & auVar56._12_4_;
      lVar13 = extractps(auVar42,1);
      lVar22 = extractps(auVar42,2);
      lVar15 = extractps(auVar42,3);
      pfVar23 = (float *)(param_4 + lVar27 * 0xc);
      auVar32 = insertps(ZEXT416(*(uint *)(param_4 + lVar27 * 0xc)),
                         *(undefined4 *)(lVar13 + (longlong)pfVar23),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(lVar22 + (longlong)pfVar23),0x20);
      auVar95 = insertps(auVar32,*(undefined4 *)(lVar15 + (longlong)pfVar23),0x30);
      auVar32 = ___xmm_000000280000001c0000001000000004 & auVar56;
      auVar37 = insertps(ZEXT416(*(uint *)((ulonglong)auVar32._0_4_ + (longlong)pfVar23)),
                         *(undefined4 *)((ulonglong)auVar32._4_4_ + (longlong)pfVar23),0x10);
      auVar37 = insertps(auVar37,*(undefined4 *)((ulonglong)auVar32._8_4_ + (longlong)pfVar23),0x20)
      ;
      auVar102 = insertps(auVar37,*(undefined4 *)((ulonglong)auVar32._12_4_ + (longlong)pfVar23),
                          0x30);
      auVar32 = ___xmm_0000002c000000200000001400000008 & auVar56;
      auVar37 = insertps(ZEXT416(*(uint *)((ulonglong)auVar32._0_4_ + (longlong)pfVar23)),
                         *(undefined4 *)((ulonglong)auVar32._4_4_ + (longlong)pfVar23),0x10);
      auVar37 = insertps(auVar37,*(undefined4 *)((ulonglong)auVar32._8_4_ + (longlong)pfVar23),0x20)
      ;
      auVar130 = insertps(auVar37,*(undefined4 *)((ulonglong)auVar32._12_4_ + (longlong)pfVar23),
                          0x30);
    }
    local_1a8 = local_1a8 * auVar95._0_4_;
    fStack_1a4 = fStack_1a4 * auVar95._4_4_;
    fStack_1a0 = fStack_1a0 * auVar95._8_4_;
    fStack_19c = fStack_19c * auVar95._12_4_;
    local_198 = local_198 * auVar102._0_4_;
    fStack_194 = fStack_194 * auVar102._4_4_;
    fStack_190 = fStack_190 * auVar102._8_4_;
    fStack_18c = fStack_18c * auVar102._12_4_;
    fVar105 = fVar105 * auVar130._0_4_;
    fVar107 = fVar107 * auVar130._4_4_;
    fVar108 = fVar108 * auVar130._8_4_;
    fVar109 = fVar109 * auVar130._12_4_;
    fVar88 = fVar61 * local_198 - fVar53 * local_1a8;
    fVar76 = fVar62 * fStack_194 - fVar148 * fStack_1a4;
    fVar89 = fVar63 * fStack_190 - fVar54 * fStack_1a0;
    fVar78 = fVar81 * fStack_18c - fVar55 * fStack_19c;
    fVar114 = fVar53 * fVar105 - fVar31 * local_198;
    fVar80 = fVar148 * fVar107 - fVar49 * fStack_194;
    fVar115 = fVar54 * fVar108 - fVar50 * fStack_190;
    fVar116 = fVar55 * fVar109 - fVar51 * fStack_18c;
    fVar77 = fVar31 * local_1a8 - fVar61 * fVar105;
    fVar79 = fVar49 * fStack_1a4 - fVar62 * fVar107;
    fVar52 = fVar50 * fStack_1a0 - fVar63 * fVar108;
    fVar30 = fVar51 * fStack_19c - fVar81 * fVar109;
    fVar114 = fVar114 + fVar114;
    fVar80 = fVar80 + fVar80;
    fVar115 = fVar115 + fVar115;
    fVar116 = fVar116 + fVar116;
    fVar77 = fVar77 + fVar77;
    fVar79 = fVar79 + fVar79;
    fVar52 = fVar52 + fVar52;
    fVar30 = fVar30 + fVar30;
    fVar88 = fVar88 + fVar88;
    fVar76 = fVar76 + fVar76;
    fVar89 = fVar89 + fVar89;
    fVar78 = fVar78 + fVar78;
    fVar87 = (local_168 + (fVar53 * fVar88 - fVar77 * fVar31) + fVar110 * fVar114 + local_1a8) -
             fVar140;
    fVar68 = (fStack_164 + (fVar148 * fVar76 - fVar79 * fVar49) + fVar112 * fVar80 + fStack_1a4) -
             fVar140;
    auVar66._0_8_ = CONCAT44(fVar68,fVar87);
    auVar66._8_4_ =
         (fStack_160 + (fVar54 * fVar89 - fVar52 * fVar50) + fVar59 * fVar115 + fStack_1a0) -
         fVar140;
    auVar66._12_4_ =
         (fStack_15c + (fVar55 * fVar78 - fVar30 * fVar51) + fVar113 * fVar116 + fStack_19c) -
         fVar140;
    auVar74._0_4_ =
         (auVar111._0_4_ + (fVar31 * fVar114 - fVar88 * fVar61) + fVar110 * fVar77 + local_198) -
         fVar67;
    auVar74._4_4_ =
         (auVar111._4_4_ + (fVar49 * fVar80 - fVar76 * fVar62) + fVar112 * fVar79 + fStack_194) -
         fVar67;
    auVar74._8_4_ =
         (auVar111._8_4_ + (fVar50 * fVar115 - fVar89 * fVar63) + fVar59 * fVar52 + fStack_190) -
         fVar67;
    auVar74._12_4_ =
         (auVar111._12_4_ + (fVar51 * fVar116 - fVar78 * fVar81) + fVar113 * fVar30 + fStack_18c) -
         fVar67;
    auVar103._0_4_ =
         (local_178 + (fVar61 * fVar77 - fVar114 * fVar53) + fVar110 * fVar88 + fVar105) - fVar75;
    auVar103._4_4_ =
         (fStack_174 + (fVar62 * fVar79 - fVar80 * fVar148) + fVar112 * fVar76 + fVar107) - fVar75;
    auVar103._8_4_ =
         (fStack_170 + (fVar63 * fVar52 - fVar115 * fVar54) + fVar59 * fVar89 + fVar108) - fVar75;
    auVar103._12_4_ =
         (fStack_16c + (fVar81 * fVar30 - fVar116 * fVar55) + fVar113 * fVar78 + fVar109) - fVar75;
    if ((bVar21 & 0xf) == 0) {
      lVar13 = lVar27 * 0xc;
      auVar46._8_4_ = auVar66._8_4_;
      auVar46._0_8_ = auVar66._0_8_;
      auVar46._12_4_ = auVar66._12_4_;
      auVar32 = insertps(auVar46,auVar74,0x30);
      auVar57._4_4_ = auVar74._8_4_;
      auVar57._0_4_ = auVar74._4_4_;
      auVar57._8_4_ = auVar103._0_4_;
      auVar57._12_4_ = auVar103._4_4_;
      auVar32 = insertps(auVar32,auVar103,0x20);
      *pfVar23 = auVar32._0_4_;
      pfVar23[1] = auVar32._12_4_;
      pfVar23[2] = auVar32._8_4_;
      pfVar23[3] = auVar32._4_4_;
      auVar32 = blendps(auVar57,auVar66,4);
      puVar3 = (undefined4 *)(param_4 + 0x10 + lVar13);
      *puVar3 = auVar32._0_4_;
      puVar3[1] = auVar32._12_4_;
      puVar3[2] = auVar32._8_4_;
      puVar3[3] = auVar32._4_4_;
      pfVar23 = (float *)(param_4 + 0x20 + lVar13);
      *pfVar23 = auVar103._8_4_;
      pfVar23[1] = auVar66._12_4_;
      pfVar23[2] = auVar74._12_4_;
      pfVar23[3] = auVar103._12_4_;
      auVar32 = *(undefined1 (*) [16])(param_7 + lVar13);
      auVar37 = *(undefined1 (*) [16])(param_7 + 0x10 + lVar13);
      puVar3 = (undefined4 *)(param_7 + 0x20 + lVar13);
      auVar96._0_4_ = auVar32._0_4_;
      auVar33 = insertps(auVar37,auVar32,0x8c);
      auVar96._4_4_ = auVar32._12_4_;
      auVar96._8_4_ = auVar37._8_4_;
      auVar96._12_4_ = puVar3[1];
      auVar85._4_4_ = auVar37._0_4_;
      auVar85._0_4_ = auVar32._4_4_;
      auVar85._8_4_ = auVar37._12_4_;
      auVar85._12_4_ = puVar3[2];
      auVar45._0_8_ = auVar33._0_8_;
      auVar45._8_4_ = *puVar3;
      auVar45._12_4_ = puVar3[3];
    }
    else {
      if ((bVar26 & 1) != 0) {
        *pfVar23 = fVar87;
      }
      if ((bVar26 & 2) != 0) {
        uVar90 = extractps(auVar66,1);
        *(undefined8 *)(param_4 + 0xc + lVar27 * 0xc) = uVar90;
      }
      if ((bVar26 & 4) != 0) {
        uVar90 = extractps(auVar66,2);
        *(undefined8 *)(param_4 + 0x18 + lVar27 * 0xc) = uVar90;
      }
      if ((char)bVar26 < '\0') {
        uVar90 = extractps(auVar66,3);
        *(undefined8 *)(param_4 + 0x24 + lVar27 * 0xc) = uVar90;
      }
      if ((bVar26 & 1) != 0) {
        *(float *)(param_4 + 4 + lVar27 * 0xc) = auVar74._0_4_;
      }
      if ((bVar26 & 2) != 0) {
        uVar90 = extractps(auVar74,1);
        *(undefined8 *)(param_4 + 0x10 + lVar27 * 0xc) = uVar90;
      }
      if ((bVar26 & 4) != 0) {
        uVar90 = extractps(auVar74,2);
        *(undefined8 *)(param_4 + 0x1c + lVar27 * 0xc) = uVar90;
      }
      if ((char)bVar26 < '\0') {
        uVar90 = extractps(auVar74,3);
        *(undefined8 *)(param_4 + 0x28 + lVar27 * 0xc) = uVar90;
      }
      if ((bVar26 & 1) != 0) {
        *(float *)(param_4 + 8 + lVar27 * 0xc) = auVar103._0_4_;
      }
      if ((bVar26 & 2) != 0) {
        uVar90 = extractps(auVar103,1);
        *(undefined8 *)(param_4 + 0x14 + lVar27 * 0xc) = uVar90;
      }
      if ((bVar26 & 4) != 0) {
        uVar90 = extractps(auVar103,2);
        *(undefined8 *)(param_4 + 0x20 + lVar27 * 0xc) = uVar90;
      }
      if ((char)bVar26 < '\0') {
        uVar90 = extractps(auVar103,3);
        *(undefined8 *)(param_4 + 0x2c + lVar27 * 0xc) = uVar90;
      }
      auVar44._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar56._0_4_;
      auVar44._4_4_ = _UNK_150b50da4 & auVar56._4_4_;
      auVar44._8_4_ = _UNK_150b50da8 & auVar56._8_4_;
      auVar44._12_4_ = _UNK_150b50dac & auVar56._12_4_;
      lVar22 = extractps(auVar44,1);
      lVar15 = extractps(auVar44,2);
      lVar16 = extractps(auVar44,3);
      lVar13 = param_7 + lVar27 * 0xc;
      auVar32 = insertps(ZEXT416(*(uint *)(param_7 + lVar27 * 0xc)),*(undefined4 *)(lVar22 + lVar13)
                         ,0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(lVar15 + lVar13),0x20);
      auVar96 = insertps(auVar32,*(undefined4 *)(lVar16 + lVar13),0x30);
      auVar32 = ___xmm_000000280000001c0000001000000004 & auVar56;
      auVar37 = insertps(ZEXT416(*(uint *)((ulonglong)auVar32._0_4_ + lVar13)),
                         *(undefined4 *)((ulonglong)auVar32._4_4_ + lVar13),0x10);
      auVar37 = insertps(auVar37,*(undefined4 *)((ulonglong)auVar32._8_4_ + lVar13),0x20);
      auVar85 = insertps(auVar37,*(undefined4 *)((ulonglong)auVar32._12_4_ + lVar13),0x30);
      auVar56 = auVar56 & ___xmm_0000002c000000200000001400000008;
      auVar32 = insertps(ZEXT416(*(uint *)((ulonglong)auVar56._0_4_ + lVar13)),
                         *(undefined4 *)((ulonglong)auVar56._4_4_ + lVar13),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)((ulonglong)auVar56._8_4_ + lVar13),0x20);
      auVar45 = insertps(auVar32,*(undefined4 *)((ulonglong)auVar56._12_4_ + lVar13),0x30);
    }
    auVar97._0_4_ = auVar96._0_4_ - fVar87;
    auVar97._4_4_ = auVar96._4_4_ - fVar68;
    auVar97._8_4_ = auVar96._8_4_ - auVar66._8_4_;
    auVar97._12_4_ = auVar96._12_4_ - auVar66._12_4_;
    auVar86._0_4_ = auVar85._0_4_ - auVar74._0_4_;
    auVar86._4_4_ = auVar85._4_4_ - auVar74._4_4_;
    auVar86._8_4_ = auVar85._8_4_ - auVar74._8_4_;
    auVar86._12_4_ = auVar85._12_4_ - auVar74._12_4_;
    auVar47._0_4_ = auVar45._0_4_ - auVar103._0_4_;
    auVar47._4_4_ = auVar45._4_4_ - auVar103._4_4_;
    auVar47._8_4_ = auVar45._8_4_ - auVar103._8_4_;
    auVar47._12_4_ = auVar45._12_4_ - auVar103._12_4_;
    auVar58._4_4_ = param_11;
    auVar58._0_4_ = param_11;
    auVar58._8_4_ = param_11;
    auVar58._12_4_ = param_11;
    auVar33 = divps(auVar97,auVar58);
    auVar37 = divps(auVar86,auVar58);
    auVar32 = divps(auVar47,auVar58);
    puVar3 = (undefined4 *)(param_5 + lVar27 * 0xc);
    if ((bVar21 & 0xf) == 0) {
      auVar34 = insertps(auVar33,auVar37,0x30);
      auVar60._0_8_ = auVar37._4_8_;
      auVar60._8_4_ = auVar32._0_4_;
      auVar60._12_4_ = auVar32._4_4_;
      auVar34 = insertps(auVar34,auVar32,0x20);
      *puVar3 = auVar34._0_4_;
      puVar3[1] = auVar34._12_4_;
      puVar3[2] = auVar34._8_4_;
      puVar3[3] = auVar34._4_4_;
      auVar34 = blendps(auVar60,auVar33,4);
      puVar3[4] = auVar34._0_4_;
      puVar3[5] = auVar34._12_4_;
      puVar3[6] = auVar34._8_4_;
      puVar3[7] = auVar34._4_4_;
      puVar3[8] = auVar32._8_4_;
      puVar3[9] = auVar33._12_4_;
      puVar3[10] = auVar37._12_4_;
      puVar3[0xb] = auVar32._12_4_;
    }
    else {
      if ((bVar26 & 1) != 0) {
        *puVar3 = auVar33._0_4_;
      }
      if ((bVar26 & 2) != 0) {
        uVar90 = extractps(auVar33,1);
        *(undefined8 *)(puVar3 + 3) = uVar90;
      }
      if ((bVar26 & 4) != 0) {
        uVar90 = extractps(auVar33,2);
        *(undefined8 *)(puVar3 + 6) = uVar90;
      }
      if ((char)bVar26 < '\0') {
        uVar90 = extractps(auVar33,3);
        *(undefined8 *)(puVar3 + 9) = uVar90;
      }
      if ((bVar26 & 1) != 0) {
        puVar3[1] = auVar37._0_4_;
      }
      if ((bVar26 & 2) != 0) {
        uVar90 = extractps(auVar37,1);
        *(undefined8 *)(puVar3 + 4) = uVar90;
      }
      if ((bVar26 & 4) != 0) {
        uVar90 = extractps(auVar37,2);
        *(undefined8 *)(puVar3 + 7) = uVar90;
      }
      if ((char)bVar26 < '\0') {
        uVar90 = extractps(auVar37,3);
        *(undefined8 *)(puVar3 + 10) = uVar90;
      }
      if ((bVar26 & 1) != 0) {
        puVar3[2] = auVar32._0_4_;
      }
      if ((bVar26 & 2) != 0) {
        uVar90 = extractps(auVar32,1);
        *(undefined8 *)(puVar3 + 5) = uVar90;
      }
      if ((bVar26 & 4) != 0) {
        uVar90 = extractps(auVar32,2);
        *(undefined8 *)(puVar3 + 8) = uVar90;
      }
      if ((char)bVar26 < '\0') {
        uVar90 = extractps(auVar32,3);
        *(undefined8 *)(puVar3 + 0xb) = uVar90;
      }
    }
  }
  return;
}

// ApplyPreSimulationTransform___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_s_5B__c_unFVector3f_5D__3E_REFs_5B__c_unFTransform3f_5D_REFs_5B__c_unFVector3f_5D_CunfCuni_sse4 @ 140d09f90

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPreSimulationTransform___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_s_5B__c_unFVector3f_5D__3E_REFs_5B__c_unFTransform3f_5D_REFs_5B__c_unFVector3f_5D_CunfCuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,float *param_8,float *param_9,undefined4 param_10,
               uint param_11)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  undefined4 uVar13;
  float *pfVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  byte bVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  uint *puVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar35;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar49 [16];
  float fVar60;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
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
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  uint uVar81;
  uint uVar82;
  uint uVar83;
  uint uVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  undefined1 auVar89 [16];
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar101;
  float fVar102;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  float fVar108;
  undefined1 auVar100 [16];
  float fVar109;
  undefined8 uVar110;
  float fVar114;
  float fVar115;
  float fVar116;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fStack_14c;
  float fStack_13c;
  float fStack_11c;
  float fStack_10c;
  undefined1 auVar48 [16];
  float fVar103;
  
  uVar17 = param_11 + 3;
  if (-1 < (int)param_11) {
    uVar17 = param_11;
  }
  uVar17 = uVar17 & 0xfffffffc;
  if ((int)uVar17 < 1) {
    uVar16 = 0;
    if ((int)param_11 < 1) {
      return;
    }
  }
  else {
    lVar21 = 8;
    uVar16 = 0;
    uVar19 = 0;
    do {
      auVar26 = *(undefined1 (*) [16])(param_3 + -0x20 + lVar21 * 4);
      auVar25 = *(undefined1 (*) [16])(param_3 + -0x10 + lVar21 * 4);
      pfVar14 = (float *)(param_3 + lVar21 * 4);
      auVar89 = insertps(auVar25,auVar26,0x8c);
      fVar35 = param_8[8];
      fVar46 = auVar26._0_4_ * fVar35;
      fVar57 = auVar26._12_4_ * fVar35;
      fVar58 = auVar25._8_4_ * fVar35;
      fVar59 = pfVar14[1] * fVar35;
      fVar122 = param_8[9];
      fVar96 = auVar26._4_4_ * fVar122;
      fVar101 = auVar25._0_4_ * fVar122;
      fVar104 = auVar25._12_4_ * fVar122;
      fVar106 = pfVar14[2] * fVar122;
      fVar60 = param_8[10];
      fVar87 = auVar89._0_4_ * fVar60;
      fVar90 = auVar89._4_4_ * fVar60;
      fVar92 = *pfVar14 * fVar60;
      fVar94 = pfVar14[3] * fVar60;
      fVar85 = *param_8;
      fVar108 = param_8[1];
      fVar86 = param_8[2];
      fVar123 = param_8[3];
      fVar109 = fVar46 * fVar86 - fVar87 * fVar85;
      fVar114 = fVar57 * fVar86 - fVar90 * fVar85;
      fVar115 = fVar58 * fVar86 - fVar92 * fVar85;
      fVar116 = fVar59 * fVar86 - fVar94 * fVar85;
      fVar109 = fVar109 + fVar109;
      fVar114 = fVar114 + fVar114;
      fVar115 = fVar115 + fVar115;
      fVar116 = fVar116 + fVar116;
      fVar97 = fVar96 * fVar85 - fVar46 * fVar108;
      fVar102 = fVar101 * fVar85 - fVar57 * fVar108;
      fVar105 = fVar104 * fVar85 - fVar58 * fVar108;
      fVar107 = fVar106 * fVar85 - fVar59 * fVar108;
      fVar97 = fVar97 + fVar97;
      fVar102 = fVar102 + fVar102;
      fVar105 = fVar105 + fVar105;
      fVar107 = fVar107 + fVar107;
      fVar88 = fVar87 * fVar108 - fVar96 * fVar86;
      fVar91 = fVar90 * fVar108 - fVar101 * fVar86;
      fVar93 = fVar92 * fVar108 - fVar104 * fVar86;
      fVar95 = fVar94 * fVar108 - fVar106 * fVar86;
      fVar88 = fVar88 + fVar88;
      fVar91 = fVar91 + fVar91;
      fVar93 = fVar93 + fVar93;
      fVar95 = fVar95 + fVar95;
      fVar103 = param_8[4];
      fVar117 = param_8[6];
      fVar36 = param_9[2];
      fVar118 = ((fVar85 * fVar109 - fVar88 * fVar108) + fVar123 * fVar97 + fVar87 + fVar117) -
                fVar36;
      fVar119 = ((fVar85 * fVar114 - fVar91 * fVar108) + fVar123 * fVar102 + fVar90 + fVar117) -
                fVar36;
      fVar120 = ((fVar85 * fVar115 - fVar93 * fVar108) + fVar123 * fVar105 + fVar92 + fVar117) -
                fVar36;
      fVar121 = ((fVar85 * fVar116 - fVar95 * fVar108) + fVar123 * fVar107 + fVar94 + fVar117) -
                fVar36;
      puVar1 = (undefined4 *)(param_6 + (uVar19 & 0xffffffff));
      uVar12 = *puVar1;
      uVar13 = puVar1[1];
      fVar92 = (float)puVar1[2];
      fVar94 = (float)puVar1[3];
      fVar87 = param_8[5];
      fVar90 = *param_9;
      fVar47 = ((fVar108 * fVar97 - fVar109 * fVar86) + fVar123 * fVar88 + fVar46 + fVar103) -
               fVar90;
      fVar57 = ((fVar108 * fVar102 - fVar114 * fVar86) + fVar123 * fVar91 + fVar57 + fVar103) -
               fVar90;
      auVar48._0_8_ = CONCAT44(fVar57,fVar47);
      auVar48._8_4_ =
           ((fVar108 * fVar105 - fVar115 * fVar86) + fVar123 * fVar93 + fVar58 + fVar103) - fVar90;
      auVar48._12_4_ =
           ((fVar108 * fVar107 - fVar116 * fVar86) + fVar123 * fVar95 + fVar59 + fVar103) - fVar90;
      fVar46 = param_9[1];
      fVar58 = ((fVar86 * fVar88 - fVar97 * fVar85) + fVar123 * fVar109 + fVar96 + fVar87) - fVar46;
      fVar59 = ((fVar86 * fVar91 - fVar102 * fVar85) + fVar123 * fVar114 + fVar101 + fVar87) -
               fVar46;
      fVar88 = ((fVar86 * fVar93 - fVar105 * fVar85) + fVar123 * fVar115 + fVar104 + fVar87) -
               fVar46;
      fVar91 = ((fVar86 * fVar95 - fVar107 * fVar85) + fVar123 * fVar116 + fVar106 + fVar87) -
               fVar46;
      auVar71._8_4_ = fVar57;
      auVar71._0_8_ = auVar48._0_8_;
      auVar71._12_4_ = fVar59;
      puVar2 = (undefined8 *)(param_1 + uVar19 * 4);
      *puVar2 = CONCAT44(fVar58,fVar47);
      puVar2[1] = CONCAT44(uVar12,fVar118);
      puVar2 = (undefined8 *)(param_1 + 0x10 + uVar19 * 4);
      *puVar2 = auVar71._8_8_;
      *(float *)(puVar2 + 1) = fVar119;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uVar13;
      pfVar14 = (float *)(param_1 + 0x20 + uVar19 * 4);
      *pfVar14 = auVar48._8_4_;
      pfVar14[1] = fVar88;
      pfVar14[2] = fVar120;
      pfVar14[3] = fVar92;
      pfVar14 = (float *)(param_1 + 0x30 + uVar19 * 4);
      *pfVar14 = auVar48._12_4_;
      pfVar14[1] = fVar91;
      pfVar14[2] = fVar121;
      pfVar14[3] = fVar94;
      auVar24._8_4_ = auVar48._8_4_;
      auVar24._0_8_ = auVar48._0_8_;
      auVar24._12_4_ = auVar48._12_4_;
      auVar25._4_4_ = fVar59;
      auVar25._0_4_ = fVar58;
      auVar25._8_4_ = fVar88;
      auVar25._12_4_ = fVar91;
      auVar25 = insertps(auVar24,auVar25,0x30);
      auVar37._4_4_ = fVar88;
      auVar37._0_4_ = fVar59;
      auVar37._8_4_ = fVar118;
      auVar37._12_4_ = fVar119;
      auVar26._4_4_ = fVar119;
      auVar26._0_4_ = fVar118;
      auVar26._8_4_ = fVar120;
      auVar26._12_4_ = fVar121;
      auVar26 = insertps(auVar25,auVar26,0x20);
      puVar1 = (undefined4 *)(param_3 + -0x20 + lVar21 * 4);
      *puVar1 = auVar26._0_4_;
      puVar1[1] = auVar26._12_4_;
      puVar1[2] = auVar26._8_4_;
      puVar1[3] = auVar26._4_4_;
      auVar26 = blendps(auVar37,auVar48,4);
      puVar1 = (undefined4 *)(param_3 + -0x10 + lVar21 * 4);
      *puVar1 = auVar26._0_4_;
      puVar1[1] = auVar26._12_4_;
      puVar1[2] = auVar26._8_4_;
      puVar1[3] = auVar26._4_4_;
      pfVar14 = (float *)(param_3 + lVar21 * 4);
      *pfVar14 = fVar120;
      pfVar14[1] = auVar48._12_4_;
      pfVar14[2] = fVar91;
      pfVar14[3] = fVar121;
      auVar26 = *(undefined1 (*) [16])(param_2 + -0x20 + lVar21 * 4);
      auVar25 = *(undefined1 (*) [16])(param_2 + -0x10 + lVar21 * 4);
      pfVar14 = (float *)(param_2 + lVar21 * 4);
      auVar89 = insertps(auVar25,auVar26,0x8c);
      fVar101 = auVar26._0_4_ * fVar35;
      fVar102 = auVar26._12_4_ * fVar35;
      fVar104 = auVar25._8_4_ * fVar35;
      fVar105 = pfVar14[1] * fVar35;
      fVar58 = auVar26._4_4_ * fVar122;
      fVar59 = auVar25._0_4_ * fVar122;
      fVar88 = auVar25._12_4_ * fVar122;
      fVar91 = pfVar14[2] * fVar122;
      fVar92 = auVar89._0_4_ * fVar60;
      fVar94 = auVar89._4_4_ * fVar60;
      fVar47 = *pfVar14 * fVar60;
      fVar57 = pfVar14[3] * fVar60;
      fVar93 = fVar58 * fVar85 - fVar101 * fVar108;
      fVar95 = fVar59 * fVar85 - fVar102 * fVar108;
      fVar96 = fVar88 * fVar85 - fVar104 * fVar108;
      fVar97 = fVar91 * fVar85 - fVar105 * fVar108;
      fVar106 = fVar92 * fVar108 - fVar58 * fVar86;
      fVar107 = fVar94 * fVar108 - fVar59 * fVar86;
      fVar109 = fVar47 * fVar108 - fVar88 * fVar86;
      fVar114 = fVar57 * fVar108 - fVar91 * fVar86;
      fVar115 = fVar101 * fVar86 - fVar92 * fVar85;
      fVar116 = fVar102 * fVar86 - fVar94 * fVar85;
      fVar118 = fVar104 * fVar86 - fVar47 * fVar85;
      fVar119 = fVar105 * fVar86 - fVar57 * fVar85;
      fVar106 = fVar106 + fVar106;
      fVar107 = fVar107 + fVar107;
      fVar109 = fVar109 + fVar109;
      fVar114 = fVar114 + fVar114;
      fVar115 = fVar115 + fVar115;
      fVar116 = fVar116 + fVar116;
      fVar118 = fVar118 + fVar118;
      fVar119 = fVar119 + fVar119;
      fVar93 = fVar93 + fVar93;
      fVar95 = fVar95 + fVar95;
      fVar96 = fVar96 + fVar96;
      fVar97 = fVar97 + fVar97;
      auVar27._0_4_ = (fVar85 * fVar115 - fVar106 * fVar108) + fVar123 * fVar93 + fVar92;
      auVar27._4_4_ = (fVar85 * fVar116 - fVar107 * fVar108) + fVar123 * fVar95 + fVar94;
      auVar27._8_4_ = (fVar85 * fVar118 - fVar109 * fVar108) + fVar123 * fVar96 + fVar47;
      auVar27._12_4_ = (fVar85 * fVar119 - fVar114 * fVar108) + fVar123 * fVar97 + fVar57;
      auVar61._0_8_ =
           CONCAT44((fVar108 * fVar95 - fVar116 * fVar86) + fVar123 * fVar107 + fVar102,
                    (fVar108 * fVar93 - fVar115 * fVar86) + fVar123 * fVar106 + fVar101);
      auVar61._8_4_ = (fVar108 * fVar96 - fVar118 * fVar86) + fVar123 * fVar109 + fVar104;
      auVar61._12_4_ = (fVar108 * fVar97 - fVar119 * fVar86) + fVar123 * fVar114 + fVar105;
      auVar38._0_4_ = (fVar86 * fVar106 - fVar93 * fVar85) + fVar123 * fVar115 + fVar58;
      auVar38._4_4_ = (fVar86 * fVar107 - fVar95 * fVar85) + fVar123 * fVar116 + fVar59;
      auVar38._8_4_ = (fVar86 * fVar109 - fVar96 * fVar85) + fVar123 * fVar118 + fVar88;
      auVar38._12_4_ = (fVar86 * fVar114 - fVar97 * fVar85) + fVar123 * fVar119 + fVar91;
      auVar49._8_4_ = auVar61._8_4_;
      auVar49._0_8_ = auVar61._0_8_;
      auVar49._12_4_ = auVar61._12_4_;
      auVar26 = insertps(auVar49,auVar38,0x30);
      auVar69._4_4_ = auVar38._8_4_;
      auVar69._0_4_ = auVar38._4_4_;
      auVar69._8_4_ = auVar27._0_4_;
      auVar69._12_4_ = auVar27._4_4_;
      auVar26 = insertps(auVar26,auVar27,0x20);
      puVar1 = (undefined4 *)(param_2 + -0x20 + lVar21 * 4);
      *puVar1 = auVar26._0_4_;
      puVar1[1] = auVar26._12_4_;
      puVar1[2] = auVar26._8_4_;
      puVar1[3] = auVar26._4_4_;
      auVar26 = blendps(auVar69,auVar61,4);
      puVar1 = (undefined4 *)(param_2 + -0x10 + lVar21 * 4);
      *puVar1 = auVar26._0_4_;
      puVar1[1] = auVar26._12_4_;
      puVar1[2] = auVar26._8_4_;
      puVar1[3] = auVar26._4_4_;
      pfVar14 = (float *)(param_2 + lVar21 * 4);
      *pfVar14 = auVar27._8_4_;
      pfVar14[1] = auVar61._12_4_;
      pfVar14[2] = auVar38._12_4_;
      pfVar14[3] = auVar27._12_4_;
      auVar26 = *(undefined1 (*) [16])(param_4 + -0x20 + lVar21 * 4);
      auVar25 = *(undefined1 (*) [16])(param_4 + -0x10 + lVar21 * 4);
      pfVar14 = (float *)(param_4 + lVar21 * 4);
      auVar89 = insertps(auVar25,auVar26,0x8c);
      fVar92 = auVar26._0_4_ * fVar35;
      fVar94 = auVar26._12_4_ * fVar35;
      fVar47 = auVar25._8_4_ * fVar35;
      fVar35 = pfVar14[1] * fVar35;
      fVar109 = auVar26._4_4_ * fVar122;
      fVar114 = auVar25._0_4_ * fVar122;
      fVar115 = auVar25._12_4_ * fVar122;
      fVar122 = pfVar14[2] * fVar122;
      fVar91 = auVar89._0_4_ * fVar60;
      fVar93 = auVar89._4_4_ * fVar60;
      fVar95 = *pfVar14 * fVar60;
      fVar60 = pfVar14[3] * fVar60;
      fVar104 = fVar109 * fVar85 - fVar92 * fVar108;
      fVar105 = fVar114 * fVar85 - fVar94 * fVar108;
      fVar106 = fVar115 * fVar85 - fVar47 * fVar108;
      fVar107 = fVar122 * fVar85 - fVar35 * fVar108;
      fVar57 = fVar91 * fVar108 - fVar109 * fVar86;
      fVar58 = fVar93 * fVar108 - fVar114 * fVar86;
      fVar59 = fVar95 * fVar108 - fVar115 * fVar86;
      fVar88 = fVar60 * fVar108 - fVar122 * fVar86;
      fVar96 = fVar92 * fVar86 - fVar91 * fVar85;
      fVar97 = fVar94 * fVar86 - fVar93 * fVar85;
      fVar101 = fVar47 * fVar86 - fVar95 * fVar85;
      fVar102 = fVar35 * fVar86 - fVar60 * fVar85;
      fVar57 = fVar57 + fVar57;
      fVar58 = fVar58 + fVar58;
      fVar59 = fVar59 + fVar59;
      fVar88 = fVar88 + fVar88;
      fVar96 = fVar96 + fVar96;
      fVar97 = fVar97 + fVar97;
      fVar101 = fVar101 + fVar101;
      fVar102 = fVar102 + fVar102;
      fVar104 = fVar104 + fVar104;
      fVar105 = fVar105 + fVar105;
      fVar106 = fVar106 + fVar106;
      fVar107 = fVar107 + fVar107;
      fVar92 = ((fVar108 * fVar104 - fVar96 * fVar86) + fVar123 * fVar57 + fVar92 + fVar103) -
               fVar90;
      fVar94 = ((fVar108 * fVar105 - fVar97 * fVar86) + fVar123 * fVar58 + fVar94 + fVar103) -
               fVar90;
      auVar39._0_8_ = CONCAT44(fVar94,fVar92);
      auVar39._8_4_ =
           ((fVar108 * fVar106 - fVar101 * fVar86) + fVar123 * fVar59 + fVar47 + fVar103) - fVar90;
      auVar39._12_4_ =
           ((fVar108 * fVar107 - fVar102 * fVar86) + fVar123 * fVar88 + fVar35 + fVar103) - fVar90;
      auVar78._0_4_ =
           ((fVar86 * fVar57 - fVar104 * fVar85) + fVar123 * fVar96 + fVar109 + fVar87) - fVar46;
      auVar78._4_4_ =
           ((fVar86 * fVar58 - fVar105 * fVar85) + fVar123 * fVar97 + fVar114 + fVar87) - fVar46;
      auVar78._8_4_ =
           ((fVar86 * fVar59 - fVar106 * fVar85) + fVar123 * fVar101 + fVar115 + fVar87) - fVar46;
      auVar78._12_4_ =
           ((fVar86 * fVar88 - fVar107 * fVar85) + fVar123 * fVar102 + fVar122 + fVar87) - fVar46;
      auVar50._0_4_ =
           ((fVar85 * fVar96 - fVar57 * fVar108) + fVar123 * fVar104 + fVar91 + fVar117) - fVar36;
      auVar50._4_4_ =
           ((fVar85 * fVar97 - fVar58 * fVar108) + fVar123 * fVar105 + fVar93 + fVar117) - fVar36;
      auVar50._8_4_ =
           ((fVar85 * fVar101 - fVar59 * fVar108) + fVar123 * fVar106 + fVar95 + fVar117) - fVar36;
      auVar50._12_4_ =
           ((fVar85 * fVar102 - fVar88 * fVar108) + fVar123 * fVar107 + fVar60 + fVar117) - fVar36;
      auVar28._8_4_ = auVar39._8_4_;
      auVar28._0_8_ = auVar39._0_8_;
      auVar28._12_4_ = auVar39._12_4_;
      auVar26 = insertps(auVar28,auVar78,0x30);
      auVar62._4_4_ = auVar78._8_4_;
      auVar62._0_4_ = auVar78._4_4_;
      auVar62._8_4_ = auVar50._0_4_;
      auVar62._12_4_ = auVar50._4_4_;
      auVar26 = insertps(auVar26,auVar50,0x20);
      puVar1 = (undefined4 *)(param_4 + -0x20 + lVar21 * 4);
      *puVar1 = auVar26._0_4_;
      puVar1[1] = auVar26._12_4_;
      puVar1[2] = auVar26._8_4_;
      puVar1[3] = auVar26._4_4_;
      auVar26 = blendps(auVar62,auVar39,4);
      puVar1 = (undefined4 *)(param_4 + -0x10 + lVar21 * 4);
      *puVar1 = auVar26._0_4_;
      puVar1[1] = auVar26._12_4_;
      puVar1[2] = auVar26._8_4_;
      puVar1[3] = auVar26._4_4_;
      pfVar14 = (float *)(param_4 + lVar21 * 4);
      *pfVar14 = auVar50._8_4_;
      pfVar14[1] = auVar39._12_4_;
      pfVar14[2] = auVar78._12_4_;
      pfVar14[3] = auVar50._12_4_;
      auVar26 = *(undefined1 (*) [16])(param_7 + -0x20 + lVar21 * 4);
      auVar25 = *(undefined1 (*) [16])(param_7 + -0x10 + lVar21 * 4);
      pfVar14 = (float *)(param_7 + lVar21 * 4);
      auVar89 = insertps(auVar25,auVar26,0x8c);
      auVar70._0_4_ = auVar26._0_4_ - fVar92;
      auVar70._4_4_ = auVar26._12_4_ - fVar94;
      auVar70._8_4_ = auVar25._8_4_ - auVar39._8_4_;
      auVar70._12_4_ = pfVar14[1] - auVar39._12_4_;
      auVar29._0_4_ = auVar26._4_4_ - auVar78._0_4_;
      auVar29._4_4_ = auVar25._0_4_ - auVar78._4_4_;
      auVar29._8_4_ = auVar25._12_4_ - auVar78._8_4_;
      auVar29._12_4_ = pfVar14[2] - auVar78._12_4_;
      auVar63._0_4_ = auVar89._0_4_ - auVar50._0_4_;
      auVar63._4_4_ = auVar89._4_4_ - auVar50._4_4_;
      auVar63._8_4_ = *pfVar14 - auVar50._8_4_;
      auVar63._12_4_ = pfVar14[3] - auVar50._12_4_;
      auVar89._4_4_ = param_10;
      auVar89._0_4_ = param_10;
      auVar89._8_4_ = param_10;
      auVar89._12_4_ = param_10;
      auVar71 = divps(auVar70,auVar89);
      auVar26 = divps(auVar29,auVar89);
      auVar89 = divps(auVar63,auVar89);
      auVar25 = insertps(auVar71,auVar26,0x30);
      auVar51._0_8_ = auVar26._4_8_;
      auVar51._8_4_ = auVar89._0_4_;
      auVar51._12_4_ = auVar89._4_4_;
      auVar25 = insertps(auVar25,auVar89,0x20);
      puVar1 = (undefined4 *)(param_5 + -0x20 + lVar21 * 4);
      *puVar1 = auVar25._0_4_;
      puVar1[1] = auVar25._12_4_;
      puVar1[2] = auVar25._8_4_;
      puVar1[3] = auVar25._4_4_;
      auVar25 = blendps(auVar51,auVar71,4);
      puVar1 = (undefined4 *)(param_5 + -0x10 + lVar21 * 4);
      *puVar1 = auVar25._0_4_;
      puVar1[1] = auVar25._12_4_;
      puVar1[2] = auVar25._8_4_;
      puVar1[3] = auVar25._4_4_;
      puVar1 = (undefined4 *)(param_5 + lVar21 * 4);
      *puVar1 = auVar89._8_4_;
      puVar1[1] = auVar71._12_4_;
      puVar1[2] = auVar26._12_4_;
      puVar1[3] = auVar89._12_4_;
      uVar19 = uVar19 + 0x10;
      lVar21 = lVar21 + 0xc;
      uVar16 = uVar16 + 4;
    } while ((int)uVar16 < (int)uVar17);
    if ((int)param_11 <= (int)uVar16) {
      return;
    }
  }
  uVar81 = -(uint)((int)(uVar16 | (uint)__xmm_00000003000000020000000100000000) < (int)param_11);
  uVar82 = -(uint)((int)(uVar16 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_11);
  uVar83 = -(uint)((int)(uVar16 | _UNK_150631e08) < (int)param_11);
  uVar84 = -(uint)((int)(uVar16 | _UNK_150631e0c) < (int)param_11);
  uVar19 = (ulonglong)uVar16;
  pauVar3 = (undefined1 (*) [16])(param_3 + uVar19 * 0xc);
  auVar4._4_4_ = uVar82;
  auVar4._0_4_ = uVar81;
  auVar4._8_4_ = uVar83;
  auVar4._12_4_ = uVar84;
  uVar17 = movmskps(uVar17,auVar4);
  bVar18 = (char)((char)uVar17 << 4) >> 4;
  if (uVar17 == 0xf) {
    auVar26 = *pauVar3;
    auVar25 = pauVar3[1];
    auVar64._0_4_ = auVar26._0_4_;
    auVar89 = insertps(auVar25,auVar26,0x8c);
    auVar64._4_4_ = auVar26._12_4_;
    auVar64._8_4_ = auVar25._8_4_;
    auVar64._12_4_ = *(undefined4 *)(pauVar3[2] + 4);
    auVar72._4_4_ = auVar25._0_4_;
    auVar72._0_4_ = auVar26._4_4_;
    auVar72._8_4_ = auVar25._12_4_;
    auVar72._12_4_ = *(undefined4 *)(pauVar3[2] + 8);
    auVar111._0_8_ = auVar89._0_8_;
    auVar111._8_4_ = *(undefined4 *)pauVar3[2];
    auVar111._12_4_ = *(undefined4 *)(pauVar3[2] + 0xc);
  }
  else {
    auVar30._0_4_ = ___xmm_00000024000000180000000c00000000 & uVar81;
    auVar30._4_4_ = _UNK_150b50da4 & uVar82;
    auVar30._8_4_ = _UNK_150b50da8 & uVar83;
    auVar30._12_4_ = _UNK_150b50dac & uVar84;
    lVar22 = extractps(auVar30,1);
    lVar20 = extractps(auVar30,2);
    lVar21 = extractps(auVar30,3);
    auVar26 = insertps(ZEXT416(*(uint *)*pauVar3),*(undefined4 *)(*pauVar3 + lVar22),0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)(*pauVar3 + lVar20),0x20);
    auVar64 = insertps(auVar26,*(undefined4 *)(*pauVar3 + lVar21),0x30);
    auVar26 = insertps(ZEXT416(*(uint *)(*pauVar3 +
                                        (___xmm_000000280000001c0000001000000004 & uVar81))),
                       *(undefined4 *)(*pauVar3 + (_UNK_150b50db4 & uVar82)),0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)(*pauVar3 + (_UNK_150b50db8 & uVar83)),0x20);
    auVar72 = insertps(auVar26,*(undefined4 *)(*pauVar3 + (_UNK_150b50dbc & uVar84)),0x30);
    auVar26 = insertps(ZEXT416(*(uint *)(*pauVar3 +
                                        (___xmm_0000002c000000200000001400000008 & uVar81))),
                       *(undefined4 *)(*pauVar3 + (_UNK_150b50dc4 & uVar82)),0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)(*pauVar3 + (_UNK_150b50dc8 & uVar83)),0x20);
    auVar111 = insertps(auVar26,*(undefined4 *)(*pauVar3 + (_UNK_150b50dcc & uVar84)),0x30);
  }
  fVar35 = param_8[8];
  fVar58 = auVar64._0_4_ * fVar35;
  fVar59 = auVar64._4_4_ * fVar35;
  fVar88 = auVar64._8_4_ * fVar35;
  fVar91 = auVar64._12_4_ * fVar35;
  fVar122 = param_8[9];
  fVar93 = auVar72._0_4_ * fVar122;
  fVar95 = auVar72._4_4_ * fVar122;
  fVar96 = auVar72._8_4_ * fVar122;
  fVar97 = auVar72._12_4_ * fVar122;
  fVar60 = param_8[10];
  auVar112._0_4_ = auVar111._0_4_ * fVar60;
  auVar112._4_4_ = auVar111._4_4_ * fVar60;
  auVar112._8_4_ = auVar111._8_4_ * fVar60;
  auVar112._12_4_ = auVar111._12_4_ * fVar60;
  fVar85 = *param_8;
  fVar108 = param_8[1];
  fVar86 = param_8[2];
  fVar123 = param_8[3];
  fVar101 = fVar93 * fVar85 - fVar58 * fVar108;
  fVar102 = fVar95 * fVar85 - fVar59 * fVar108;
  fVar104 = fVar96 * fVar85 - fVar88 * fVar108;
  fVar105 = fVar97 * fVar85 - fVar91 * fVar108;
  fVar92 = auVar112._0_4_ * fVar108 - fVar93 * fVar86;
  fVar94 = auVar112._4_4_ * fVar108 - fVar95 * fVar86;
  fVar47 = auVar112._8_4_ * fVar108 - fVar96 * fVar86;
  fVar57 = auVar112._12_4_ * fVar108 - fVar97 * fVar86;
  fVar106 = fVar58 * fVar86 - auVar112._0_4_ * fVar85;
  fVar107 = fVar59 * fVar86 - auVar112._4_4_ * fVar85;
  fVar109 = fVar88 * fVar86 - auVar112._8_4_ * fVar85;
  fVar114 = fVar91 * fVar86 - auVar112._12_4_ * fVar85;
  fVar92 = fVar92 + fVar92;
  fVar94 = fVar94 + fVar94;
  fVar47 = fVar47 + fVar47;
  fVar57 = fVar57 + fVar57;
  fVar106 = fVar106 + fVar106;
  fVar107 = fVar107 + fVar107;
  fVar109 = fVar109 + fVar109;
  fVar114 = fVar114 + fVar114;
  fVar101 = fVar101 + fVar101;
  fVar102 = fVar102 + fVar102;
  fVar104 = fVar104 + fVar104;
  fVar105 = fVar105 + fVar105;
  fVar36 = fVar123 * fVar101 + auVar112._0_4_;
  fVar87 = fVar123 * fVar102 + auVar112._4_4_;
  fVar90 = fVar123 * fVar104 + auVar112._8_4_;
  fVar46 = fVar123 * fVar105 + auVar112._12_4_;
  fStack_11c = param_8[4];
  fStack_10c = param_8[5];
  fVar103 = param_8[6];
  fStack_14c = *param_9;
  fStack_13c = param_9[1];
  fVar117 = param_9[2];
  bVar15 = ~bVar18;
  if ((bVar15 & 9) == 0) {
    auVar112 = *(undefined1 (*) [16])(param_6 + (int)(uVar16 << 2));
  }
  else {
    puVar23 = (uint *)(param_6 + (int)(uVar16 << 2));
    if ((uVar17 & 1) != 0) {
      auVar112 = ZEXT416(*puVar23);
    }
    if ((uVar17 & 2) != 0) {
      auVar112 = insertps(auVar112,puVar23[1],0x10);
    }
    if ((uVar17 & 4) != 0) {
      auVar112 = insertps(auVar112,puVar23[2],0x20);
    }
    if ((uVar17 & 8) != 0) {
      auVar112 = insertps(auVar112,puVar23[3],0x30);
    }
  }
  fVar58 = ((fVar108 * fVar101 - fVar106 * fVar86) + fVar123 * fVar92 + fVar58 + fStack_11c) -
           fStack_14c;
  fVar59 = ((fVar108 * fVar102 - fVar107 * fVar86) + fVar123 * fVar94 + fVar59 + fStack_11c) -
           fStack_14c;
  auVar65._0_8_ = CONCAT44(fVar59,fVar58);
  auVar65._8_4_ =
       ((fVar108 * fVar104 - fVar109 * fVar86) + fVar123 * fVar47 + fVar88 + fStack_11c) -
       fStack_14c;
  auVar65._12_4_ =
       ((fVar108 * fVar105 - fVar114 * fVar86) + fVar123 * fVar57 + fVar91 + fStack_11c) -
       fStack_14c;
  auVar73._0_4_ =
       ((fVar86 * fVar92 - fVar101 * fVar85) + fVar123 * fVar106 + fVar93 + fStack_10c) - fStack_13c
  ;
  auVar73._4_4_ =
       ((fVar86 * fVar94 - fVar102 * fVar85) + fVar123 * fVar107 + fVar95 + fStack_10c) - fStack_13c
  ;
  auVar73._8_4_ =
       ((fVar86 * fVar47 - fVar104 * fVar85) + fVar123 * fVar109 + fVar96 + fStack_10c) - fStack_13c
  ;
  auVar73._12_4_ =
       ((fVar86 * fVar57 - fVar105 * fVar85) + fVar123 * fVar114 + fVar97 + fStack_10c) - fStack_13c
  ;
  fVar36 = ((fVar85 * fVar106 - fVar92 * fVar108) + fVar36 + fVar103) - fVar117;
  fVar87 = ((fVar85 * fVar107 - fVar94 * fVar108) + fVar87 + fVar103) - fVar117;
  fVar90 = ((fVar85 * fVar109 - fVar47 * fVar108) + fVar90 + fVar103) - fVar117;
  fVar46 = ((fVar85 * fVar114 - fVar57 * fVar108) + fVar46 + fVar103) - fVar117;
  pfVar14 = (float *)(param_1 + uVar19 * 0x10);
  if ((bVar15 & 0xf) == 0) {
    auVar41._8_4_ = fVar59;
    auVar41._0_8_ = auVar65._0_8_;
    auVar41._12_4_ = auVar73._4_4_;
    uVar110 = CONCAT44(auVar73._0_4_,fVar58);
    *(undefined8 *)pfVar14 = uVar110;
    *(ulonglong *)(pfVar14 + 2) = CONCAT44(auVar112._0_4_,fVar36);
    *(longlong *)(pfVar14 + 4) = auVar41._8_8_;
    pfVar14[6] = fVar87;
    pfVar14[7] = auVar112._4_4_;
    pfVar14[8] = auVar65._8_4_;
    pfVar14[9] = auVar73._8_4_;
    pfVar14[10] = fVar90;
    pfVar14[0xb] = auVar112._8_4_;
    pfVar14[0xc] = auVar65._12_4_;
    pfVar14[0xd] = auVar73._12_4_;
    pfVar14[0xe] = fVar46;
    pfVar14[0xf] = auVar112._12_4_;
    auVar42._4_4_ = fVar59;
    auVar42._0_4_ = fVar58;
    auVar42._8_4_ = auVar65._8_4_;
    auVar42._12_4_ = auVar65._12_4_;
    auVar26 = insertps(auVar42,auVar73,0x30);
    auVar53._4_4_ = auVar73._8_4_;
    auVar53._0_4_ = auVar73._4_4_;
    auVar53._8_4_ = fVar36;
    auVar53._12_4_ = fVar87;
    auVar11._4_4_ = fVar87;
    auVar11._0_4_ = fVar36;
    auVar11._8_4_ = fVar90;
    auVar11._12_4_ = fVar46;
    auVar26 = insertps(auVar26,auVar11,0x20);
    *(int *)*pauVar3 = auVar26._0_4_;
    *(int *)(*pauVar3 + 4) = auVar26._12_4_;
    *(int *)(*pauVar3 + 8) = auVar26._8_4_;
    *(int *)(*pauVar3 + 0xc) = auVar26._4_4_;
    auVar26 = blendps(auVar53,auVar65,4);
    *(int *)pauVar3[1] = auVar26._0_4_;
    *(int *)(pauVar3[1] + 4) = auVar26._12_4_;
    *(int *)(pauVar3[1] + 8) = auVar26._8_4_;
    *(int *)(pauVar3[1] + 0xc) = auVar26._4_4_;
    *(float *)pauVar3[2] = fVar90;
    *(float *)(pauVar3[2] + 4) = auVar65._12_4_;
    *(float *)(pauVar3[2] + 8) = auVar73._12_4_;
    *(float *)(pauVar3[2] + 0xc) = fVar46;
    pfVar14 = (float *)(param_2 + uVar19 * 0xc);
    auVar26 = *(undefined1 (*) [16])(param_2 + uVar19 * 0xc);
    auVar25 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar19 * 0xc);
    puVar1 = (undefined4 *)(param_2 + 0x20 + uVar19 * 0xc);
    auVar52._0_4_ = auVar26._0_4_;
    auVar89 = insertps(auVar25,auVar26,0x8c);
    auVar52._4_4_ = auVar26._12_4_;
    auVar52._8_4_ = auVar25._8_4_;
    auVar52._12_4_ = puVar1[1];
    auVar74._4_4_ = auVar25._0_4_;
    auVar74._0_4_ = auVar26._4_4_;
    auVar74._8_4_ = auVar25._12_4_;
    auVar74._12_4_ = puVar1[2];
    auVar98._0_8_ = auVar89._0_8_;
    auVar98._8_4_ = *puVar1;
    auVar98._12_4_ = puVar1[3];
  }
  else {
    if ((bVar18 & 1) != 0) {
      *pfVar14 = fVar58;
    }
    if ((bVar18 & 2) != 0) {
      uVar110 = extractps(auVar65,1);
      *(undefined8 *)(pfVar14 + 4) = uVar110;
    }
    if ((bVar18 & 4) != 0) {
      uVar110 = extractps(auVar65,2);
      *(undefined8 *)(pfVar14 + 8) = uVar110;
    }
    if ((char)bVar18 < '\0') {
      uVar110 = extractps(auVar65,3);
      *(undefined8 *)(pfVar14 + 0xc) = uVar110;
    }
    if ((bVar18 & 1) != 0) {
      pfVar14[1] = auVar73._0_4_;
    }
    if ((bVar18 & 2) != 0) {
      uVar110 = extractps(auVar73,1);
      *(undefined8 *)(pfVar14 + 5) = uVar110;
    }
    if ((bVar18 & 4) != 0) {
      uVar110 = extractps(auVar73,2);
      *(undefined8 *)(pfVar14 + 9) = uVar110;
    }
    if ((char)bVar18 < '\0') {
      uVar110 = extractps(auVar73,3);
      *(undefined8 *)(pfVar14 + 0xd) = uVar110;
    }
    if ((bVar18 & 1) != 0) {
      pfVar14[2] = fVar36;
    }
    if ((bVar18 & 2) != 0) {
      auVar10._4_4_ = fVar87;
      auVar10._0_4_ = fVar36;
      auVar10._8_4_ = fVar90;
      auVar10._12_4_ = fVar46;
      uVar110 = extractps(auVar10,1);
      *(undefined8 *)(pfVar14 + 6) = uVar110;
    }
    if ((bVar18 & 4) != 0) {
      auVar9._4_4_ = fVar87;
      auVar9._0_4_ = fVar36;
      auVar9._8_4_ = fVar90;
      auVar9._12_4_ = fVar46;
      uVar110 = extractps(auVar9,2);
      *(undefined8 *)(pfVar14 + 10) = uVar110;
    }
    if ((char)bVar18 < '\0') {
      auVar8._4_4_ = fVar87;
      auVar8._0_4_ = fVar36;
      auVar8._8_4_ = fVar90;
      auVar8._12_4_ = fVar46;
      uVar110 = extractps(auVar8,3);
      *(undefined8 *)(pfVar14 + 0xe) = uVar110;
    }
    if ((bVar18 & 1) != 0) {
      pfVar14[3] = auVar112._0_4_;
    }
    if ((bVar18 & 2) != 0) {
      uVar110 = extractps(auVar112,1);
      *(undefined8 *)(pfVar14 + 7) = uVar110;
    }
    if ((bVar18 & 4) != 0) {
      uVar110 = extractps(auVar112,2);
      *(undefined8 *)(pfVar14 + 0xb) = uVar110;
    }
    if ((char)bVar18 < '\0') {
      uVar110 = extractps(auVar112,3);
      *(undefined8 *)(pfVar14 + 0xf) = uVar110;
    }
    if ((bVar18 & 1) != 0) {
      *(float *)*pauVar3 = fVar58;
    }
    if ((bVar18 & 2) != 0) {
      uVar110 = extractps(auVar65,1);
      *(undefined8 *)(*pauVar3 + 0xc) = uVar110;
    }
    if ((bVar18 & 4) != 0) {
      uVar110 = extractps(auVar65,2);
      *(undefined8 *)(pauVar3[1] + 8) = uVar110;
    }
    if ((char)bVar18 < '\0') {
      uVar110 = extractps(auVar65,3);
      *(undefined8 *)(pauVar3[2] + 4) = uVar110;
    }
    if ((bVar18 & 1) != 0) {
      *(float *)(*pauVar3 + 4) = auVar73._0_4_;
    }
    if ((bVar18 & 2) != 0) {
      uVar110 = extractps(auVar73,1);
      *(undefined8 *)pauVar3[1] = uVar110;
    }
    if ((bVar18 & 4) != 0) {
      uVar110 = extractps(auVar73,2);
      *(undefined8 *)(pauVar3[1] + 0xc) = uVar110;
    }
    if ((char)bVar18 < '\0') {
      uVar110 = extractps(auVar73,3);
      *(undefined8 *)(pauVar3[2] + 8) = uVar110;
    }
    if ((bVar18 & 1) != 0) {
      *(float *)(*pauVar3 + 8) = fVar36;
    }
    if ((bVar18 & 2) != 0) {
      auVar7._4_4_ = fVar87;
      auVar7._0_4_ = fVar36;
      auVar7._8_4_ = fVar90;
      auVar7._12_4_ = fVar46;
      uVar110 = extractps(auVar7,1);
      *(undefined8 *)(pauVar3[1] + 4) = uVar110;
    }
    if ((bVar18 & 4) != 0) {
      auVar6._4_4_ = fVar87;
      auVar6._0_4_ = fVar36;
      auVar6._8_4_ = fVar90;
      auVar6._12_4_ = fVar46;
      uVar110 = extractps(auVar6,2);
      *(undefined8 *)pauVar3[2] = uVar110;
    }
    if ((char)bVar18 < '\0') {
      auVar5._4_4_ = fVar87;
      auVar5._0_4_ = fVar36;
      auVar5._8_4_ = fVar90;
      auVar5._12_4_ = fVar46;
      uVar110 = extractps(auVar5,3);
      *(undefined8 *)(pauVar3[2] + 0xc) = uVar110;
    }
    auVar40._0_4_ = ___xmm_00000024000000180000000c00000000 & uVar81;
    auVar40._4_4_ = _UNK_150b50da4 & uVar82;
    auVar40._8_4_ = _UNK_150b50da8 & uVar83;
    auVar40._12_4_ = _UNK_150b50dac & uVar84;
    lVar21 = extractps(auVar40,1);
    lVar20 = extractps(auVar40,2);
    lVar22 = extractps(auVar40,3);
    pfVar14 = (float *)(param_2 + uVar19 * 0xc);
    auVar26 = insertps(ZEXT416(*(uint *)(param_2 + uVar19 * 0xc)),
                       *(undefined4 *)(lVar21 + (longlong)pfVar14),0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)(lVar20 + (longlong)pfVar14),0x20);
    auVar52 = insertps(auVar26,*(undefined4 *)(lVar22 + (longlong)pfVar14),0x30);
    auVar26 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (___xmm_000000280000001c0000001000000004 & uVar81) +
                                        (longlong)pfVar14)),
                       *(undefined4 *)((ulonglong)(_UNK_150b50db4 & uVar82) + (longlong)pfVar14),
                       0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)
                                ((ulonglong)(_UNK_150b50db8 & uVar83) + (longlong)pfVar14),0x20);
    auVar74 = insertps(auVar26,*(undefined4 *)
                                ((ulonglong)(_UNK_150b50dbc & uVar84) + (longlong)pfVar14),0x30);
    auVar26 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (___xmm_0000002c000000200000001400000008 & uVar81) +
                                        (longlong)pfVar14)),
                       *(undefined4 *)((ulonglong)(_UNK_150b50dc4 & uVar82) + (longlong)pfVar14),
                       0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)
                                ((ulonglong)(_UNK_150b50dc8 & uVar83) + (longlong)pfVar14),0x20);
    auVar98 = insertps(auVar26,*(undefined4 *)
                                ((ulonglong)(_UNK_150b50dcc & uVar84) + (longlong)pfVar14),0x30);
  }
  fVar36 = auVar52._0_4_ * fVar35;
  fVar87 = auVar52._4_4_ * fVar35;
  fVar90 = auVar52._8_4_ * fVar35;
  fVar46 = auVar52._12_4_ * fVar35;
  fVar58 = auVar74._0_4_ * fVar122;
  fVar59 = auVar74._4_4_ * fVar122;
  fVar88 = auVar74._8_4_ * fVar122;
  fVar91 = auVar74._12_4_ * fVar122;
  fVar93 = auVar98._0_4_ * fVar60;
  fVar95 = auVar98._4_4_ * fVar60;
  fVar96 = auVar98._8_4_ * fVar60;
  fVar97 = auVar98._12_4_ * fVar60;
  fVar106 = fVar58 * fVar85 - fVar36 * fVar108;
  fVar107 = fVar59 * fVar85 - fVar87 * fVar108;
  fVar109 = fVar88 * fVar85 - fVar90 * fVar108;
  fVar114 = fVar91 * fVar85 - fVar46 * fVar108;
  fVar101 = fVar93 * fVar108 - fVar58 * fVar86;
  fVar102 = fVar95 * fVar108 - fVar59 * fVar86;
  fVar104 = fVar96 * fVar108 - fVar88 * fVar86;
  fVar105 = fVar97 * fVar108 - fVar91 * fVar86;
  fVar92 = fVar36 * fVar86 - fVar93 * fVar85;
  fVar94 = fVar87 * fVar86 - fVar95 * fVar85;
  fVar47 = fVar90 * fVar86 - fVar96 * fVar85;
  fVar57 = fVar46 * fVar86 - fVar97 * fVar85;
  fVar101 = fVar101 + fVar101;
  fVar102 = fVar102 + fVar102;
  fVar104 = fVar104 + fVar104;
  fVar105 = fVar105 + fVar105;
  fVar92 = fVar92 + fVar92;
  fVar94 = fVar94 + fVar94;
  fVar47 = fVar47 + fVar47;
  fVar57 = fVar57 + fVar57;
  fVar106 = fVar106 + fVar106;
  fVar107 = fVar107 + fVar107;
  fVar109 = fVar109 + fVar109;
  fVar114 = fVar114 + fVar114;
  auVar54._0_4_ = (fVar85 * fVar92 - fVar101 * fVar108) + fVar123 * fVar106 + fVar93;
  auVar54._4_4_ = (fVar85 * fVar94 - fVar102 * fVar108) + fVar123 * fVar107 + fVar95;
  auVar54._8_4_ = (fVar85 * fVar47 - fVar104 * fVar108) + fVar123 * fVar109 + fVar96;
  auVar54._12_4_ = (fVar85 * fVar57 - fVar105 * fVar108) + fVar123 * fVar114 + fVar97;
  fVar36 = (fVar108 * fVar106 - fVar92 * fVar86) + fVar123 * fVar101 + fVar36;
  auVar99._0_8_ =
       CONCAT44((fVar108 * fVar107 - fVar94 * fVar86) + fVar123 * fVar102 + fVar87,fVar36);
  auVar99._8_4_ = (fVar108 * fVar109 - fVar47 * fVar86) + fVar123 * fVar104 + fVar90;
  auVar99._12_4_ = (fVar108 * fVar114 - fVar57 * fVar86) + fVar123 * fVar105 + fVar46;
  auVar75._0_4_ = (fVar86 * fVar101 - fVar106 * fVar85) + fVar123 * fVar92 + fVar58;
  auVar75._4_4_ = (fVar86 * fVar102 - fVar107 * fVar85) + fVar123 * fVar94 + fVar59;
  auVar75._8_4_ = (fVar86 * fVar104 - fVar109 * fVar85) + fVar123 * fVar47 + fVar88;
  auVar75._12_4_ = (fVar86 * fVar105 - fVar114 * fVar85) + fVar123 * fVar57 + fVar91;
  if ((bVar15 & 0xf) == 0) {
    lVar21 = uVar19 * 0xc;
    auVar31._8_4_ = auVar99._8_4_;
    auVar31._0_8_ = auVar99._0_8_;
    auVar31._12_4_ = auVar99._12_4_;
    auVar26 = insertps(auVar31,auVar75,0x30);
    auVar43._4_4_ = auVar75._8_4_;
    auVar43._0_4_ = auVar75._4_4_;
    auVar43._8_4_ = auVar54._0_4_;
    auVar43._12_4_ = auVar54._4_4_;
    auVar26 = insertps(auVar26,auVar54,0x20);
    *pfVar14 = auVar26._0_4_;
    pfVar14[1] = auVar26._12_4_;
    pfVar14[2] = auVar26._8_4_;
    pfVar14[3] = auVar26._4_4_;
    auVar26 = blendps(auVar43,auVar99,4);
    puVar1 = (undefined4 *)(param_2 + 0x10 + lVar21);
    *puVar1 = auVar26._0_4_;
    puVar1[1] = auVar26._12_4_;
    puVar1[2] = auVar26._8_4_;
    puVar1[3] = auVar26._4_4_;
    pfVar14 = (float *)(param_2 + 0x20 + lVar21);
    *pfVar14 = auVar54._8_4_;
    pfVar14[1] = auVar99._12_4_;
    pfVar14[2] = auVar75._12_4_;
    pfVar14[3] = auVar54._12_4_;
    auVar26 = *(undefined1 (*) [16])(param_4 + lVar21);
    auVar25 = *(undefined1 (*) [16])(param_4 + 0x10 + lVar21);
    puVar1 = (undefined4 *)(param_4 + 0x20 + lVar21);
    pfVar14 = (float *)(param_4 + lVar21);
    auVar66._0_4_ = auVar26._0_4_;
    auVar89 = insertps(auVar25,auVar26,0x8c);
    auVar66._4_4_ = auVar26._12_4_;
    auVar66._8_4_ = auVar25._8_4_;
    auVar66._12_4_ = puVar1[1];
    auVar76._4_4_ = auVar25._0_4_;
    auVar76._0_4_ = auVar26._4_4_;
    auVar76._8_4_ = auVar25._12_4_;
    auVar76._12_4_ = puVar1[2];
    auVar113._0_8_ = auVar89._0_8_;
    auVar113._8_4_ = *puVar1;
    auVar113._12_4_ = puVar1[3];
    fVar35 = param_8[8];
    fVar122 = param_8[9];
    fVar60 = param_8[10];
    fVar85 = *param_8;
    fVar108 = param_8[1];
    fVar86 = param_8[2];
    fVar123 = param_8[3];
    fStack_11c = param_8[4];
    fStack_10c = param_8[5];
    fVar103 = param_8[6];
    fStack_14c = *param_9;
    fStack_13c = param_9[1];
    fVar117 = param_9[2];
  }
  else {
    if ((bVar18 & 1) != 0) {
      *pfVar14 = fVar36;
    }
    if ((bVar18 & 2) != 0) {
      uVar110 = extractps(auVar99,1);
      *(undefined8 *)(param_2 + 0xc + uVar19 * 0xc) = uVar110;
    }
    if ((bVar18 & 4) != 0) {
      uVar110 = extractps(auVar99,2);
      *(undefined8 *)(param_2 + 0x18 + uVar19 * 0xc) = uVar110;
    }
    if ((char)bVar18 < '\0') {
      uVar110 = extractps(auVar99,3);
      *(undefined8 *)(param_2 + 0x24 + uVar19 * 0xc) = uVar110;
    }
    if ((bVar18 & 1) != 0) {
      *(float *)(param_2 + 4 + uVar19 * 0xc) = auVar75._0_4_;
    }
    if ((bVar18 & 2) != 0) {
      uVar110 = extractps(auVar75,1);
      *(undefined8 *)(param_2 + 0x10 + uVar19 * 0xc) = uVar110;
    }
    if ((bVar18 & 4) != 0) {
      uVar110 = extractps(auVar75,2);
      *(undefined8 *)(param_2 + 0x1c + uVar19 * 0xc) = uVar110;
    }
    if ((char)bVar18 < '\0') {
      uVar110 = extractps(auVar75,3);
      *(undefined8 *)(param_2 + 0x28 + uVar19 * 0xc) = uVar110;
    }
    if ((bVar18 & 1) != 0) {
      *(float *)(param_2 + 8 + uVar19 * 0xc) = auVar54._0_4_;
    }
    if ((bVar18 & 2) != 0) {
      uVar110 = extractps(auVar54,1);
      *(undefined8 *)(param_2 + 0x14 + uVar19 * 0xc) = uVar110;
    }
    if ((bVar18 & 4) != 0) {
      uVar110 = extractps(auVar54,2);
      *(undefined8 *)(param_2 + 0x20 + uVar19 * 0xc) = uVar110;
    }
    if ((char)bVar18 < '\0') {
      uVar110 = extractps(auVar54,3);
      *(undefined8 *)(param_2 + 0x2c + uVar19 * 0xc) = uVar110;
    }
    pfVar14 = (float *)(param_4 + uVar19 * 0xc);
    auVar26 = insertps(ZEXT416(*(uint *)(param_4 + uVar19 * 0xc)),
                       *(undefined4 *)((ulonglong)(_UNK_150b50da4 & uVar82) + (longlong)pfVar14),
                       0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)
                                ((ulonglong)(_UNK_150b50da8 & uVar83) + (longlong)pfVar14),0x20);
    auVar66 = insertps(auVar26,*(undefined4 *)
                                ((ulonglong)(_UNK_150b50dac & uVar84) + (longlong)pfVar14),0x30);
    auVar26 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (___xmm_000000280000001c0000001000000004 & uVar81) +
                                        (longlong)pfVar14)),
                       *(undefined4 *)((ulonglong)(_UNK_150b50db4 & uVar82) + (longlong)pfVar14),
                       0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)
                                ((ulonglong)(_UNK_150b50db8 & uVar83) + (longlong)pfVar14),0x20);
    auVar76 = insertps(auVar26,*(undefined4 *)
                                ((ulonglong)(_UNK_150b50dbc & uVar84) + (longlong)pfVar14),0x30);
    auVar26 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (___xmm_0000002c000000200000001400000008 & uVar81) +
                                        (longlong)pfVar14)),
                       *(undefined4 *)((ulonglong)(_UNK_150b50dc4 & uVar82) + (longlong)pfVar14),
                       0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)
                                ((ulonglong)(_UNK_150b50dc8 & uVar83) + (longlong)pfVar14),0x20);
    auVar113 = insertps(auVar26,*(undefined4 *)
                                 ((ulonglong)(_UNK_150b50dcc & uVar84) + (longlong)pfVar14),0x30);
  }
  fVar96 = fVar60 * auVar113._0_4_;
  fVar97 = fVar60 * auVar113._4_4_;
  fVar101 = fVar60 * auVar113._8_4_;
  fVar60 = fVar60 * auVar113._12_4_;
  fVar36 = fVar122 * auVar76._0_4_;
  fVar87 = fVar122 * auVar76._4_4_;
  fVar90 = fVar122 * auVar76._8_4_;
  fVar122 = fVar122 * auVar76._12_4_;
  fVar57 = fVar35 * auVar66._0_4_;
  fVar58 = fVar35 * auVar66._4_4_;
  fVar59 = fVar35 * auVar66._8_4_;
  fVar35 = fVar35 * auVar66._12_4_;
  fVar88 = fVar36 * fVar85 - fVar57 * fVar108;
  fVar91 = fVar87 * fVar85 - fVar58 * fVar108;
  fVar93 = fVar90 * fVar85 - fVar59 * fVar108;
  fVar95 = fVar122 * fVar85 - fVar35 * fVar108;
  fVar46 = fVar96 * fVar108 - fVar36 * fVar86;
  fVar92 = fVar97 * fVar108 - fVar87 * fVar86;
  fVar94 = fVar101 * fVar108 - fVar90 * fVar86;
  fVar47 = fVar60 * fVar108 - fVar122 * fVar86;
  fVar102 = fVar57 * fVar86 - fVar96 * fVar85;
  fVar104 = fVar58 * fVar86 - fVar97 * fVar85;
  fVar105 = fVar59 * fVar86 - fVar101 * fVar85;
  fVar106 = fVar35 * fVar86 - fVar60 * fVar85;
  fVar46 = fVar46 + fVar46;
  fVar92 = fVar92 + fVar92;
  fVar94 = fVar94 + fVar94;
  fVar47 = fVar47 + fVar47;
  fVar102 = fVar102 + fVar102;
  fVar104 = fVar104 + fVar104;
  fVar105 = fVar105 + fVar105;
  fVar106 = fVar106 + fVar106;
  fVar88 = fVar88 + fVar88;
  fVar91 = fVar91 + fVar91;
  fVar93 = fVar93 + fVar93;
  fVar95 = fVar95 + fVar95;
  auVar67._0_4_ =
       ((fVar85 * fVar102 - fVar46 * fVar108) + fVar123 * fVar88 + fVar96 + fVar103) - fVar117;
  auVar67._4_4_ =
       ((fVar85 * fVar104 - fVar92 * fVar108) + fVar123 * fVar91 + fVar97 + fVar103) - fVar117;
  auVar67._8_4_ =
       ((fVar85 * fVar105 - fVar94 * fVar108) + fVar123 * fVar93 + fVar101 + fVar103) - fVar117;
  auVar67._12_4_ =
       ((fVar85 * fVar106 - fVar47 * fVar108) + fVar123 * fVar95 + fVar60 + fVar103) - fVar117;
  fVar60 = ((fVar108 * fVar88 - fVar102 * fVar86) + fVar123 * fVar46 + fVar57 + fStack_11c) -
           fStack_14c;
  fVar103 = ((fVar108 * fVar91 - fVar104 * fVar86) + fVar123 * fVar92 + fVar58 + fStack_11c) -
            fStack_14c;
  auVar100._0_8_ = CONCAT44(fVar103,fVar60);
  auVar100._8_4_ =
       ((fVar108 * fVar93 - fVar105 * fVar86) + fVar123 * fVar94 + fVar59 + fStack_11c) - fStack_14c
  ;
  auVar100._12_4_ =
       ((fVar108 * fVar95 - fVar106 * fVar86) + fVar123 * fVar47 + fVar35 + fStack_11c) - fStack_14c
  ;
  auVar77._0_4_ =
       ((fVar86 * fVar46 - fVar88 * fVar85) + fVar123 * fVar102 + fVar36 + fStack_10c) - fStack_13c;
  auVar77._4_4_ =
       ((fVar86 * fVar92 - fVar91 * fVar85) + fVar123 * fVar104 + fVar87 + fStack_10c) - fStack_13c;
  auVar77._8_4_ =
       ((fVar86 * fVar94 - fVar93 * fVar85) + fVar123 * fVar105 + fVar90 + fStack_10c) - fStack_13c;
  auVar77._12_4_ =
       ((fVar86 * fVar47 - fVar95 * fVar85) + fVar123 * fVar106 + fVar122 + fStack_10c) - fStack_13c
  ;
  if ((bVar15 & 0xf) == 0) {
    lVar21 = uVar19 * 0xc;
    auVar33._8_4_ = auVar100._8_4_;
    auVar33._0_8_ = auVar100._0_8_;
    auVar33._12_4_ = auVar100._12_4_;
    auVar26 = insertps(auVar33,auVar77,0x30);
    auVar44._4_4_ = auVar77._8_4_;
    auVar44._0_4_ = auVar77._4_4_;
    auVar44._8_4_ = auVar67._0_4_;
    auVar44._12_4_ = auVar67._4_4_;
    auVar26 = insertps(auVar26,auVar67,0x20);
    *pfVar14 = auVar26._0_4_;
    pfVar14[1] = auVar26._12_4_;
    pfVar14[2] = auVar26._8_4_;
    pfVar14[3] = auVar26._4_4_;
    auVar26 = blendps(auVar44,auVar100,4);
    puVar1 = (undefined4 *)(param_4 + 0x10 + lVar21);
    *puVar1 = auVar26._0_4_;
    puVar1[1] = auVar26._12_4_;
    puVar1[2] = auVar26._8_4_;
    puVar1[3] = auVar26._4_4_;
    pfVar14 = (float *)(param_4 + 0x20 + lVar21);
    *pfVar14 = auVar67._8_4_;
    pfVar14[1] = auVar100._12_4_;
    pfVar14[2] = auVar77._12_4_;
    pfVar14[3] = auVar67._12_4_;
    auVar26 = *(undefined1 (*) [16])(param_7 + lVar21);
    auVar25 = *(undefined1 (*) [16])(param_7 + 0x10 + lVar21);
    puVar1 = (undefined4 *)(param_7 + 0x20 + lVar21);
    auVar79._0_4_ = auVar26._0_4_;
    auVar89 = insertps(auVar25,auVar26,0x8c);
    auVar79._4_4_ = auVar26._12_4_;
    auVar79._8_4_ = auVar25._8_4_;
    auVar79._12_4_ = puVar1[1];
    auVar55._4_4_ = auVar25._0_4_;
    auVar55._0_4_ = auVar26._4_4_;
    auVar55._8_4_ = auVar25._12_4_;
    auVar55._12_4_ = puVar1[2];
    auVar32._0_8_ = auVar89._0_8_;
    auVar32._8_4_ = *puVar1;
    auVar32._12_4_ = puVar1[3];
  }
  else {
    if ((bVar18 & 1) != 0) {
      *pfVar14 = fVar60;
    }
    if ((bVar18 & 2) != 0) {
      uVar110 = extractps(auVar100,1);
      *(undefined8 *)(param_4 + 0xc + uVar19 * 0xc) = uVar110;
    }
    if ((bVar18 & 4) != 0) {
      uVar110 = extractps(auVar100,2);
      *(undefined8 *)(param_4 + 0x18 + uVar19 * 0xc) = uVar110;
    }
    if ((char)bVar18 < '\0') {
      uVar110 = extractps(auVar100,3);
      *(undefined8 *)(param_4 + 0x24 + uVar19 * 0xc) = uVar110;
    }
    if ((bVar18 & 1) != 0) {
      *(float *)(param_4 + 4 + uVar19 * 0xc) = auVar77._0_4_;
    }
    if ((bVar18 & 2) != 0) {
      uVar110 = extractps(auVar77,1);
      *(undefined8 *)(param_4 + 0x10 + uVar19 * 0xc) = uVar110;
    }
    if ((bVar18 & 4) != 0) {
      uVar110 = extractps(auVar77,2);
      *(undefined8 *)(param_4 + 0x1c + uVar19 * 0xc) = uVar110;
    }
    if ((char)bVar18 < '\0') {
      uVar110 = extractps(auVar77,3);
      *(undefined8 *)(param_4 + 0x28 + uVar19 * 0xc) = uVar110;
    }
    if ((bVar18 & 1) != 0) {
      *(float *)(param_4 + 8 + uVar19 * 0xc) = auVar67._0_4_;
    }
    if ((bVar18 & 2) != 0) {
      uVar110 = extractps(auVar67,1);
      *(undefined8 *)(param_4 + 0x14 + uVar19 * 0xc) = uVar110;
    }
    if ((bVar18 & 4) != 0) {
      uVar110 = extractps(auVar67,2);
      *(undefined8 *)(param_4 + 0x20 + uVar19 * 0xc) = uVar110;
    }
    if ((char)bVar18 < '\0') {
      uVar110 = extractps(auVar67,3);
      *(undefined8 *)(param_4 + 0x2c + uVar19 * 0xc) = uVar110;
    }
    lVar21 = param_7 + uVar19 * 0xc;
    auVar26 = insertps(ZEXT416(*(uint *)(param_7 + uVar19 * 0xc)),
                       *(undefined4 *)((ulonglong)(_UNK_150b50da4 & uVar82) + lVar21),0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)((ulonglong)(_UNK_150b50da8 & uVar83) + lVar21),0x20);
    auVar79 = insertps(auVar26,*(undefined4 *)((ulonglong)(_UNK_150b50dac & uVar84) + lVar21),0x30);
    auVar26 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (___xmm_000000280000001c0000001000000004 & uVar81) + lVar21
                                        )),
                       *(undefined4 *)((ulonglong)(_UNK_150b50db4 & uVar82) + lVar21),0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)((ulonglong)(_UNK_150b50db8 & uVar83) + lVar21),0x20);
    auVar55 = insertps(auVar26,*(undefined4 *)((ulonglong)(_UNK_150b50dbc & uVar84) + lVar21),0x30);
    auVar26 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (uVar81 & ___xmm_0000002c000000200000001400000008) + lVar21
                                        )),
                       *(undefined4 *)((ulonglong)(uVar82 & _UNK_150b50dc4) + lVar21),0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)((ulonglong)(uVar83 & _UNK_150b50dc8) + lVar21),0x20);
    auVar32 = insertps(auVar26,*(undefined4 *)((ulonglong)(uVar84 & _UNK_150b50dcc) + lVar21),0x30);
  }
  auVar80._0_4_ = auVar79._0_4_ - fVar60;
  auVar80._4_4_ = auVar79._4_4_ - fVar103;
  auVar80._8_4_ = auVar79._8_4_ - auVar100._8_4_;
  auVar80._12_4_ = auVar79._12_4_ - auVar100._12_4_;
  auVar56._0_4_ = auVar55._0_4_ - auVar77._0_4_;
  auVar56._4_4_ = auVar55._4_4_ - auVar77._4_4_;
  auVar56._8_4_ = auVar55._8_4_ - auVar77._8_4_;
  auVar56._12_4_ = auVar55._12_4_ - auVar77._12_4_;
  auVar34._0_4_ = auVar32._0_4_ - auVar67._0_4_;
  auVar34._4_4_ = auVar32._4_4_ - auVar67._4_4_;
  auVar34._8_4_ = auVar32._8_4_ - auVar67._8_4_;
  auVar34._12_4_ = auVar32._12_4_ - auVar67._12_4_;
  auVar45._4_4_ = param_10;
  auVar45._0_4_ = param_10;
  auVar45._8_4_ = param_10;
  auVar45._12_4_ = param_10;
  auVar89 = divps(auVar80,auVar45);
  auVar25 = divps(auVar56,auVar45);
  auVar26 = divps(auVar34,auVar45);
  puVar1 = (undefined4 *)(param_5 + uVar19 * 0xc);
  if ((bVar15 & 0xf) == 0) {
    auVar71 = insertps(auVar89,auVar25,0x30);
    auVar68._0_8_ = auVar25._4_8_;
    auVar68._8_4_ = auVar26._0_4_;
    auVar68._12_4_ = auVar26._4_4_;
    auVar71 = insertps(auVar71,auVar26,0x20);
    *puVar1 = auVar71._0_4_;
    puVar1[1] = auVar71._12_4_;
    puVar1[2] = auVar71._8_4_;
    puVar1[3] = auVar71._4_4_;
    auVar71 = blendps(auVar68,auVar89,4);
    puVar1[4] = auVar71._0_4_;
    puVar1[5] = auVar71._12_4_;
    puVar1[6] = auVar71._8_4_;
    puVar1[7] = auVar71._4_4_;
    puVar1[8] = auVar26._8_4_;
    puVar1[9] = auVar89._12_4_;
    puVar1[10] = auVar25._12_4_;
    puVar1[0xb] = auVar26._12_4_;
  }
  else {
    if ((bVar18 & 1) != 0) {
      *puVar1 = auVar89._0_4_;
    }
    if ((bVar18 & 2) != 0) {
      uVar110 = extractps(auVar89,1);
      *(undefined8 *)(puVar1 + 3) = uVar110;
    }
    if ((bVar18 & 4) != 0) {
      uVar110 = extractps(auVar89,2);
      *(undefined8 *)(puVar1 + 6) = uVar110;
    }
    if ((char)bVar18 < '\0') {
      uVar110 = extractps(auVar89,3);
      *(undefined8 *)(puVar1 + 9) = uVar110;
    }
    if ((bVar18 & 1) != 0) {
      puVar1[1] = auVar25._0_4_;
    }
    if ((bVar18 & 2) != 0) {
      uVar110 = extractps(auVar25,1);
      *(undefined8 *)(puVar1 + 4) = uVar110;
    }
    if ((bVar18 & 4) != 0) {
      uVar110 = extractps(auVar25,2);
      *(undefined8 *)(puVar1 + 7) = uVar110;
    }
    if ((char)bVar18 < '\0') {
      uVar110 = extractps(auVar25,3);
      *(undefined8 *)(puVar1 + 10) = uVar110;
    }
    if ((bVar18 & 1) != 0) {
      puVar1[2] = auVar26._0_4_;
    }
    if ((bVar18 & 2) != 0) {
      uVar110 = extractps(auVar26,1);
      *(undefined8 *)(puVar1 + 5) = uVar110;
    }
    if ((bVar18 & 4) != 0) {
      uVar110 = extractps(auVar26,2);
      *(undefined8 *)(puVar1 + 8) = uVar110;
    }
    if ((char)bVar18 < '\0') {
      uVar110 = extractps(auVar26,3);
      *(undefined8 *)(puVar1 + 0xb) = uVar110;
    }
  }
  return;
}

// ApplyAnimationPreSimulationTransform___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_REFs_5B__c_unFTransform3f_5D_REFs_5B__c_unFVector3f_5D_CunfCuni_sse4 @ 140d0b770

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyAnimationPreSimulationTransform___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_REFs_5B__c_unFTransform3f_5D_REFs_5B__c_unFVector3f_5D_CunfCuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,float *param_4,float *param_5,
               undefined4 param_6,uint param_7)

{
  float *pfVar1;
  undefined1 (*pauVar2) [16];
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  byte bVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
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
  float fVar39;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar49;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  
  uVar19 = param_7 + 3;
  if (-1 < (int)param_7) {
    uVar19 = param_7;
  }
  if ((int)(uVar19 & 0xfffffffc) < 1) {
    uVar23 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    auVar30._4_4_ = param_6;
    auVar30._0_4_ = param_6;
    auVar30._8_4_ = param_6;
    auVar30._12_4_ = param_6;
    lVar20 = 0x20;
    uVar23 = 0;
    do {
      auVar40 = *(undefined1 (*) [16])(param_1 + -0x20 + lVar20);
      auVar55 = *(undefined1 (*) [16])(param_1 + -0x10 + lVar20);
      pfVar1 = (float *)(param_1 + lVar20);
      auVar34 = insertps(auVar55,auVar40,0x8c);
      fVar48 = param_4[8];
      fVar39 = fVar48 * auVar40._0_4_;
      fVar46 = fVar48 * auVar40._12_4_;
      fVar47 = fVar48 * auVar55._8_4_;
      fVar48 = fVar48 * pfVar1[1];
      fVar75 = param_4[9];
      fVar69 = fVar75 * auVar40._4_4_;
      fVar71 = fVar75 * auVar55._0_4_;
      fVar73 = fVar75 * auVar55._12_4_;
      fVar75 = fVar75 * pfVar1[2];
      fVar67 = param_4[10];
      fVar61 = fVar67 * auVar34._0_4_;
      fVar63 = fVar67 * auVar34._4_4_;
      fVar65 = fVar67 * *pfVar1;
      fVar67 = fVar67 * pfVar1[3];
      fVar4 = *param_4;
      fVar5 = param_4[1];
      fVar6 = param_4[2];
      fVar7 = param_4[3];
      fVar49 = fVar39 * fVar6 - fVar61 * fVar4;
      fVar56 = fVar46 * fVar6 - fVar63 * fVar4;
      fVar57 = fVar47 * fVar6 - fVar65 * fVar4;
      fVar58 = fVar48 * fVar6 - fVar67 * fVar4;
      fVar49 = fVar49 + fVar49;
      fVar56 = fVar56 + fVar56;
      fVar57 = fVar57 + fVar57;
      fVar58 = fVar58 + fVar58;
      fVar70 = fVar69 * fVar4 - fVar39 * fVar5;
      fVar72 = fVar71 * fVar4 - fVar46 * fVar5;
      fVar74 = fVar73 * fVar4 - fVar47 * fVar5;
      fVar76 = fVar75 * fVar4 - fVar48 * fVar5;
      fVar70 = fVar70 + fVar70;
      fVar72 = fVar72 + fVar72;
      fVar74 = fVar74 + fVar74;
      fVar76 = fVar76 + fVar76;
      fVar62 = fVar61 * fVar5 - fVar69 * fVar6;
      fVar64 = fVar63 * fVar5 - fVar71 * fVar6;
      fVar66 = fVar65 * fVar5 - fVar73 * fVar6;
      fVar68 = fVar67 * fVar5 - fVar75 * fVar6;
      fVar62 = fVar62 + fVar62;
      fVar64 = fVar64 + fVar64;
      fVar66 = fVar66 + fVar66;
      fVar68 = fVar68 + fVar68;
      fVar8 = param_4[4];
      fVar9 = param_4[5];
      fVar10 = param_4[6];
      fVar11 = *param_5;
      fVar12 = param_5[1];
      fVar13 = param_5[2];
      fVar39 = (fVar8 + (fVar5 * fVar70 - fVar49 * fVar6) + fVar7 * fVar62 + fVar39) - fVar11;
      fVar46 = (fVar8 + (fVar5 * fVar72 - fVar56 * fVar6) + fVar7 * fVar64 + fVar46) - fVar11;
      auVar34._0_8_ = CONCAT44(fVar46,fVar39);
      auVar34._8_4_ = (fVar8 + (fVar5 * fVar74 - fVar57 * fVar6) + fVar7 * fVar66 + fVar47) - fVar11
      ;
      auVar34._12_4_ =
           (fVar8 + (fVar5 * fVar76 - fVar58 * fVar6) + fVar7 * fVar68 + fVar48) - fVar11;
      auVar52._0_4_ = (fVar9 + (fVar6 * fVar62 - fVar70 * fVar4) + fVar7 * fVar49 + fVar69) - fVar12
      ;
      auVar52._4_4_ = (fVar9 + (fVar6 * fVar64 - fVar72 * fVar4) + fVar7 * fVar56 + fVar71) - fVar12
      ;
      auVar52._8_4_ = (fVar9 + (fVar6 * fVar66 - fVar74 * fVar4) + fVar7 * fVar57 + fVar73) - fVar12
      ;
      auVar52._12_4_ =
           (fVar9 + (fVar6 * fVar68 - fVar76 * fVar4) + fVar7 * fVar58 + fVar75) - fVar12;
      auVar60._0_4_ =
           (fVar10 + (fVar4 * fVar49 - fVar62 * fVar5) + fVar7 * fVar70 + fVar61) - fVar13;
      auVar60._4_4_ =
           (fVar10 + (fVar4 * fVar56 - fVar64 * fVar5) + fVar7 * fVar72 + fVar63) - fVar13;
      auVar60._8_4_ =
           (fVar10 + (fVar4 * fVar57 - fVar66 * fVar5) + fVar7 * fVar74 + fVar65) - fVar13;
      auVar60._12_4_ =
           (fVar10 + (fVar4 * fVar58 - fVar68 * fVar5) + fVar7 * fVar76 + fVar67) - fVar13;
      auVar40._8_4_ = auVar34._8_4_;
      auVar40._0_8_ = auVar34._0_8_;
      auVar40._12_4_ = auVar34._12_4_;
      auVar40 = insertps(auVar40,auVar52,0x30);
      auVar50._4_4_ = auVar52._8_4_;
      auVar50._0_4_ = auVar52._4_4_;
      auVar50._8_4_ = auVar60._0_4_;
      auVar50._12_4_ = auVar60._4_4_;
      auVar40 = insertps(auVar40,auVar60,0x20);
      puVar3 = (undefined4 *)(param_1 + -0x20 + lVar20);
      *puVar3 = auVar40._0_4_;
      puVar3[1] = auVar40._12_4_;
      puVar3[2] = auVar40._8_4_;
      puVar3[3] = auVar40._4_4_;
      auVar40 = blendps(auVar50,auVar34,4);
      puVar3 = (undefined4 *)(param_1 + -0x10 + lVar20);
      *puVar3 = auVar40._0_4_;
      puVar3[1] = auVar40._12_4_;
      puVar3[2] = auVar40._8_4_;
      puVar3[3] = auVar40._4_4_;
      pfVar1 = (float *)(param_1 + lVar20);
      *pfVar1 = auVar60._8_4_;
      pfVar1[1] = auVar34._12_4_;
      pfVar1[2] = auVar52._12_4_;
      pfVar1[3] = auVar60._12_4_;
      auVar40 = *(undefined1 (*) [16])(param_3 + -0x20 + lVar20);
      auVar55 = *(undefined1 (*) [16])(param_3 + -0x10 + lVar20);
      pfVar1 = (float *)(param_3 + lVar20);
      auVar50 = insertps(auVar55,auVar40,0x8c);
      auVar59._0_4_ = auVar40._0_4_ - fVar39;
      auVar59._4_4_ = auVar40._12_4_ - fVar46;
      auVar59._8_4_ = auVar55._8_4_ - auVar34._8_4_;
      auVar59._12_4_ = pfVar1[1] - auVar34._12_4_;
      auVar41._0_4_ = auVar40._4_4_ - auVar52._0_4_;
      auVar41._4_4_ = auVar55._0_4_ - auVar52._4_4_;
      auVar41._8_4_ = auVar55._12_4_ - auVar52._8_4_;
      auVar41._12_4_ = pfVar1[2] - auVar52._12_4_;
      auVar51._0_4_ = auVar50._0_4_ - auVar60._0_4_;
      auVar51._4_4_ = auVar50._4_4_ - auVar60._4_4_;
      auVar51._8_4_ = *pfVar1 - auVar60._8_4_;
      auVar51._12_4_ = pfVar1[3] - auVar60._12_4_;
      auVar60 = divps(auVar59,auVar30);
      auVar34 = divps(auVar41,auVar30);
      auVar52 = divps(auVar51,auVar30);
      auVar40 = insertps(auVar60,auVar34,0x30);
      auVar55._0_8_ = auVar34._4_8_;
      auVar55._8_4_ = auVar52._0_4_;
      auVar55._12_4_ = auVar52._4_4_;
      auVar40 = insertps(auVar40,auVar52,0x20);
      puVar3 = (undefined4 *)(param_2 + -0x20 + lVar20);
      *puVar3 = auVar40._0_4_;
      puVar3[1] = auVar40._12_4_;
      puVar3[2] = auVar40._8_4_;
      puVar3[3] = auVar40._4_4_;
      auVar40 = blendps(auVar55,auVar60,4);
      puVar3 = (undefined4 *)(param_2 + -0x10 + lVar20);
      *puVar3 = auVar40._0_4_;
      puVar3[1] = auVar40._12_4_;
      puVar3[2] = auVar40._8_4_;
      puVar3[3] = auVar40._4_4_;
      puVar3 = (undefined4 *)(param_2 + lVar20);
      *puVar3 = auVar52._8_4_;
      puVar3[1] = auVar60._12_4_;
      puVar3[2] = auVar34._12_4_;
      puVar3[3] = auVar52._12_4_;
      lVar20 = lVar20 + 0x30;
      uVar23 = uVar23 + 4;
    } while ((int)uVar23 < (int)(uVar19 & 0xfffffffc));
    if ((int)param_7 <= (int)uVar23) {
      return;
    }
  }
  auVar25._0_4_ =
       -(uint)((int)(uVar23 | (uint)__xmm_00000003000000020000000100000000) < (int)param_7);
  auVar25._4_4_ =
       -(uint)((int)(uVar23 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_7);
  auVar25._8_4_ = -(uint)((int)(uVar23 | _UNK_150631e08) < (int)param_7);
  auVar25._12_4_ = -(uint)((int)(uVar23 | _UNK_150631e0c) < (int)param_7);
  uVar16 = (ulonglong)uVar23;
  pauVar2 = (undefined1 (*) [16])(param_1 + uVar16 * 0xc);
  iVar17 = movmskps((int)param_1,auVar25);
  bVar15 = (char)((char)iVar17 << 4) >> 4;
  if (iVar17 == 0xf) {
    auVar30 = *pauVar2;
    auVar40 = pauVar2[1];
    auVar31._0_4_ = auVar30._0_4_;
    auVar55 = insertps(auVar40,auVar30,0x8c);
    auVar31._4_4_ = auVar30._12_4_;
    auVar31._8_4_ = auVar40._8_4_;
    auVar31._12_4_ = *(undefined4 *)(pauVar2[2] + 4);
    auVar35._4_4_ = auVar40._0_4_;
    auVar35._0_4_ = auVar30._4_4_;
    auVar35._8_4_ = auVar40._12_4_;
    auVar35._12_4_ = *(undefined4 *)(pauVar2[2] + 8);
    auVar37._0_8_ = auVar55._0_8_;
    auVar37._8_4_ = *(undefined4 *)pauVar2[2];
    auVar37._12_4_ = *(undefined4 *)(pauVar2[2] + 0xc);
  }
  else {
    auVar29._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar25._0_4_;
    auVar29._4_4_ = _UNK_150b50da4 & auVar25._4_4_;
    auVar29._8_4_ = _UNK_150b50da8 & auVar25._8_4_;
    auVar29._12_4_ = _UNK_150b50dac & auVar25._12_4_;
    lVar20 = extractps(auVar29,1);
    lVar21 = extractps(auVar29,2);
    lVar18 = extractps(auVar29,3);
    auVar30 = insertps(ZEXT416(*(uint *)*pauVar2),*(undefined4 *)(*pauVar2 + lVar20),0x10);
    auVar30 = insertps(auVar30,*(undefined4 *)(*pauVar2 + lVar21),0x20);
    auVar31 = insertps(auVar30,*(undefined4 *)(*pauVar2 + lVar18),0x30);
    auVar30 = ___xmm_000000280000001c0000001000000004 & auVar25;
    auVar40 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar30._0_4_)),
                       *(undefined4 *)(*pauVar2 + auVar30._4_4_),0x10);
    auVar40 = insertps(auVar40,*(undefined4 *)(*pauVar2 + auVar30._8_4_),0x20);
    auVar35 = insertps(auVar40,*(undefined4 *)(*pauVar2 + auVar30._12_4_),0x30);
    auVar30 = ___xmm_0000002c000000200000001400000008 & auVar25;
    auVar40 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar30._0_4_)),
                       *(undefined4 *)(*pauVar2 + auVar30._4_4_),0x10);
    auVar40 = insertps(auVar40,*(undefined4 *)(*pauVar2 + auVar30._8_4_),0x20);
    auVar37 = insertps(auVar40,*(undefined4 *)(*pauVar2 + auVar30._12_4_),0x30);
  }
  fVar48 = param_4[8];
  fVar39 = fVar48 * auVar31._0_4_;
  fVar46 = fVar48 * auVar31._4_4_;
  fVar47 = fVar48 * auVar31._8_4_;
  fVar48 = fVar48 * auVar31._12_4_;
  fVar75 = param_4[9];
  fVar69 = fVar75 * auVar35._0_4_;
  fVar71 = fVar75 * auVar35._4_4_;
  fVar73 = fVar75 * auVar35._8_4_;
  fVar75 = fVar75 * auVar35._12_4_;
  fVar67 = param_4[10];
  fVar61 = fVar67 * auVar37._0_4_;
  fVar63 = fVar67 * auVar37._4_4_;
  fVar65 = fVar67 * auVar37._8_4_;
  fVar67 = fVar67 * auVar37._12_4_;
  fVar4 = *param_4;
  fVar5 = param_4[1];
  fVar6 = param_4[2];
  fVar7 = param_4[3];
  fVar49 = fVar39 * fVar6 - fVar61 * fVar4;
  fVar56 = fVar46 * fVar6 - fVar63 * fVar4;
  fVar57 = fVar47 * fVar6 - fVar65 * fVar4;
  fVar58 = fVar48 * fVar6 - fVar67 * fVar4;
  fVar49 = fVar49 + fVar49;
  fVar56 = fVar56 + fVar56;
  fVar57 = fVar57 + fVar57;
  fVar58 = fVar58 + fVar58;
  fVar70 = fVar69 * fVar4 - fVar39 * fVar5;
  fVar72 = fVar71 * fVar4 - fVar46 * fVar5;
  fVar74 = fVar73 * fVar4 - fVar47 * fVar5;
  fVar76 = fVar75 * fVar4 - fVar48 * fVar5;
  fVar70 = fVar70 + fVar70;
  fVar72 = fVar72 + fVar72;
  fVar74 = fVar74 + fVar74;
  fVar76 = fVar76 + fVar76;
  fVar62 = fVar61 * fVar5 - fVar69 * fVar6;
  fVar64 = fVar63 * fVar5 - fVar71 * fVar6;
  fVar66 = fVar65 * fVar5 - fVar73 * fVar6;
  fVar68 = fVar67 * fVar5 - fVar75 * fVar6;
  fVar62 = fVar62 + fVar62;
  fVar64 = fVar64 + fVar64;
  fVar66 = fVar66 + fVar66;
  fVar68 = fVar68 + fVar68;
  fVar8 = param_4[4];
  fVar9 = param_4[5];
  fVar10 = param_4[6];
  fVar11 = *param_5;
  fVar12 = param_5[1];
  fVar13 = param_5[2];
  fVar39 = (fVar8 + (fVar5 * fVar70 - fVar49 * fVar6) + fVar7 * fVar62 + fVar39) - fVar11;
  fVar46 = (fVar8 + (fVar5 * fVar72 - fVar56 * fVar6) + fVar7 * fVar64 + fVar46) - fVar11;
  auVar32._0_8_ = CONCAT44(fVar46,fVar39);
  auVar32._8_4_ = (fVar8 + (fVar5 * fVar74 - fVar57 * fVar6) + fVar7 * fVar66 + fVar47) - fVar11;
  auVar32._12_4_ = (fVar8 + (fVar5 * fVar76 - fVar58 * fVar6) + fVar7 * fVar68 + fVar48) - fVar11;
  auVar36._0_4_ = (fVar9 + (fVar6 * fVar62 - fVar70 * fVar4) + fVar7 * fVar49 + fVar69) - fVar12;
  auVar36._4_4_ = (fVar9 + (fVar6 * fVar64 - fVar72 * fVar4) + fVar7 * fVar56 + fVar71) - fVar12;
  auVar36._8_4_ = (fVar9 + (fVar6 * fVar66 - fVar74 * fVar4) + fVar7 * fVar57 + fVar73) - fVar12;
  auVar36._12_4_ = (fVar9 + (fVar6 * fVar68 - fVar76 * fVar4) + fVar7 * fVar58 + fVar75) - fVar12;
  auVar38._0_4_ = (fVar10 + (fVar4 * fVar49 - fVar62 * fVar5) + fVar7 * fVar70 + fVar61) - fVar13;
  auVar38._4_4_ = (fVar10 + (fVar4 * fVar56 - fVar64 * fVar5) + fVar7 * fVar72 + fVar63) - fVar13;
  auVar38._8_4_ = (fVar10 + (fVar4 * fVar57 - fVar66 * fVar5) + fVar7 * fVar74 + fVar65) - fVar13;
  auVar38._12_4_ = (fVar10 + (fVar4 * fVar58 - fVar68 * fVar5) + fVar7 * fVar76 + fVar67) - fVar13;
  if ((~bVar15 & 0xf) == 0) {
    auVar27._8_4_ = auVar32._8_4_;
    auVar27._0_8_ = auVar32._0_8_;
    auVar27._12_4_ = auVar32._12_4_;
    auVar30 = insertps(auVar27,auVar36,0x30);
    auVar44._4_4_ = auVar36._8_4_;
    auVar44._0_4_ = auVar36._4_4_;
    auVar44._8_4_ = auVar38._0_4_;
    auVar44._12_4_ = auVar38._4_4_;
    auVar30 = insertps(auVar30,auVar38,0x20);
    *(int *)*pauVar2 = auVar30._0_4_;
    *(int *)(*pauVar2 + 4) = auVar30._12_4_;
    *(int *)(*pauVar2 + 8) = auVar30._8_4_;
    *(int *)(*pauVar2 + 0xc) = auVar30._4_4_;
    auVar30 = blendps(auVar44,auVar32,4);
    *(int *)pauVar2[1] = auVar30._0_4_;
    *(int *)(pauVar2[1] + 4) = auVar30._12_4_;
    *(int *)(pauVar2[1] + 8) = auVar30._8_4_;
    *(int *)(pauVar2[1] + 0xc) = auVar30._4_4_;
    *(float *)pauVar2[2] = auVar38._8_4_;
    *(float *)(pauVar2[2] + 4) = auVar32._12_4_;
    *(float *)(pauVar2[2] + 8) = auVar36._12_4_;
    *(float *)(pauVar2[2] + 0xc) = auVar38._12_4_;
    auVar30 = *(undefined1 (*) [16])(param_3 + uVar16 * 0xc);
    auVar40 = *(undefined1 (*) [16])(param_3 + 0x10 + uVar16 * 0xc);
    puVar3 = (undefined4 *)(param_3 + 0x20 + uVar16 * 0xc);
    auVar53._0_4_ = auVar30._0_4_;
    auVar55 = insertps(auVar40,auVar30,0x8c);
    auVar53._4_4_ = auVar30._12_4_;
    auVar53._8_4_ = auVar40._8_4_;
    auVar53._12_4_ = puVar3[1];
    auVar43._4_4_ = auVar40._0_4_;
    auVar43._0_4_ = auVar30._4_4_;
    auVar43._8_4_ = auVar40._12_4_;
    auVar43._12_4_ = puVar3[2];
    auVar26._0_8_ = auVar55._0_8_;
    auVar26._8_4_ = *puVar3;
    auVar26._12_4_ = puVar3[3];
  }
  else {
    if ((bVar15 & 1) != 0) {
      *(float *)*pauVar2 = fVar39;
    }
    if ((bVar15 & 2) != 0) {
      uVar14 = extractps(auVar32,1);
      *(undefined8 *)(*pauVar2 + 0xc) = uVar14;
    }
    if ((bVar15 & 4) != 0) {
      uVar14 = extractps(auVar32,2);
      *(undefined8 *)(pauVar2[1] + 8) = uVar14;
    }
    if ((char)bVar15 < '\0') {
      uVar14 = extractps(auVar32,3);
      *(undefined8 *)(pauVar2[2] + 4) = uVar14;
    }
    if ((bVar15 & 1) != 0) {
      *(float *)(*pauVar2 + 4) = auVar36._0_4_;
    }
    if ((bVar15 & 2) != 0) {
      uVar14 = extractps(auVar36,1);
      *(undefined8 *)pauVar2[1] = uVar14;
    }
    if ((bVar15 & 4) != 0) {
      uVar14 = extractps(auVar36,2);
      *(undefined8 *)(pauVar2[1] + 0xc) = uVar14;
    }
    if ((char)bVar15 < '\0') {
      uVar14 = extractps(auVar36,3);
      *(undefined8 *)(pauVar2[2] + 8) = uVar14;
    }
    if ((bVar15 & 1) != 0) {
      *(float *)(*pauVar2 + 8) = auVar38._0_4_;
    }
    if ((bVar15 & 2) != 0) {
      uVar14 = extractps(auVar38,1);
      *(undefined8 *)(pauVar2[1] + 4) = uVar14;
    }
    if ((bVar15 & 4) != 0) {
      uVar14 = extractps(auVar38,2);
      *(undefined8 *)pauVar2[2] = uVar14;
    }
    if ((char)bVar15 < '\0') {
      uVar14 = extractps(auVar38,3);
      *(undefined8 *)(pauVar2[2] + 0xc) = uVar14;
    }
    auVar42._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar25._0_4_;
    auVar42._4_4_ = _UNK_150b50da4 & auVar25._4_4_;
    auVar42._8_4_ = _UNK_150b50da8 & auVar25._8_4_;
    auVar42._12_4_ = _UNK_150b50dac & auVar25._12_4_;
    lVar21 = extractps(auVar42,1);
    lVar22 = extractps(auVar42,2);
    lVar18 = extractps(auVar42,3);
    lVar20 = param_3 + uVar16 * 0xc;
    auVar30 = insertps(ZEXT416(*(uint *)(param_3 + uVar16 * 0xc)),*(undefined4 *)(lVar21 + lVar20),
                       0x10);
    auVar30 = insertps(auVar30,*(undefined4 *)(lVar22 + lVar20),0x20);
    auVar53 = insertps(auVar30,*(undefined4 *)(lVar18 + lVar20),0x30);
    auVar30 = ___xmm_000000280000001c0000001000000004 & auVar25;
    auVar40 = insertps(ZEXT416(*(uint *)((ulonglong)auVar30._0_4_ + lVar20)),
                       *(undefined4 *)((ulonglong)auVar30._4_4_ + lVar20),0x10);
    auVar40 = insertps(auVar40,*(undefined4 *)((ulonglong)auVar30._8_4_ + lVar20),0x20);
    auVar43 = insertps(auVar40,*(undefined4 *)((ulonglong)auVar30._12_4_ + lVar20),0x30);
    auVar25 = auVar25 & ___xmm_0000002c000000200000001400000008;
    auVar30 = insertps(ZEXT416(*(uint *)((ulonglong)auVar25._0_4_ + lVar20)),
                       *(undefined4 *)((ulonglong)auVar25._4_4_ + lVar20),0x10);
    auVar30 = insertps(auVar30,*(undefined4 *)((ulonglong)auVar25._8_4_ + lVar20),0x20);
    auVar26 = insertps(auVar30,*(undefined4 *)((ulonglong)auVar25._12_4_ + lVar20),0x30);
  }
  auVar54._0_4_ = auVar53._0_4_ - fVar39;
  auVar54._4_4_ = auVar53._4_4_ - fVar46;
  auVar54._8_4_ = auVar53._8_4_ - auVar32._8_4_;
  auVar54._12_4_ = auVar53._12_4_ - auVar32._12_4_;
  auVar45._0_4_ = auVar43._0_4_ - auVar36._0_4_;
  auVar45._4_4_ = auVar43._4_4_ - auVar36._4_4_;
  auVar45._8_4_ = auVar43._8_4_ - auVar36._8_4_;
  auVar45._12_4_ = auVar43._12_4_ - auVar36._12_4_;
  auVar28._0_4_ = auVar26._0_4_ - auVar38._0_4_;
  auVar28._4_4_ = auVar26._4_4_ - auVar38._4_4_;
  auVar28._8_4_ = auVar26._8_4_ - auVar38._8_4_;
  auVar28._12_4_ = auVar26._12_4_ - auVar38._12_4_;
  auVar24._4_4_ = param_6;
  auVar24._0_4_ = param_6;
  auVar24._8_4_ = param_6;
  auVar24._12_4_ = param_6;
  auVar55 = divps(auVar54,auVar24);
  auVar40 = divps(auVar45,auVar24);
  auVar30 = divps(auVar28,auVar24);
  puVar3 = (undefined4 *)(param_2 + uVar16 * 0xc);
  if ((~bVar15 & 0xf) == 0) {
    auVar34 = insertps(auVar55,auVar40,0x30);
    auVar33._0_8_ = auVar40._4_8_;
    auVar33._8_4_ = auVar30._0_4_;
    auVar33._12_4_ = auVar30._4_4_;
    auVar34 = insertps(auVar34,auVar30,0x20);
    *puVar3 = auVar34._0_4_;
    puVar3[1] = auVar34._12_4_;
    puVar3[2] = auVar34._8_4_;
    puVar3[3] = auVar34._4_4_;
    auVar34 = blendps(auVar33,auVar55,4);
    puVar3[4] = auVar34._0_4_;
    puVar3[5] = auVar34._12_4_;
    puVar3[6] = auVar34._8_4_;
    puVar3[7] = auVar34._4_4_;
    puVar3[8] = auVar30._8_4_;
    puVar3[9] = auVar55._12_4_;
    puVar3[10] = auVar40._12_4_;
    puVar3[0xb] = auVar30._12_4_;
  }
  else {
    if ((bVar15 & 1) != 0) {
      *puVar3 = auVar55._0_4_;
    }
    if ((bVar15 & 2) != 0) {
      uVar14 = extractps(auVar55,1);
      *(undefined8 *)(puVar3 + 3) = uVar14;
    }
    if ((bVar15 & 4) != 0) {
      uVar14 = extractps(auVar55,2);
      *(undefined8 *)(puVar3 + 6) = uVar14;
    }
    if ((char)bVar15 < '\0') {
      uVar14 = extractps(auVar55,3);
      *(undefined8 *)(puVar3 + 9) = uVar14;
    }
    if ((bVar15 & 1) != 0) {
      puVar3[1] = auVar40._0_4_;
    }
    if ((bVar15 & 2) != 0) {
      uVar14 = extractps(auVar40,1);
      *(undefined8 *)(puVar3 + 4) = uVar14;
    }
    if ((bVar15 & 4) != 0) {
      uVar14 = extractps(auVar40,2);
      *(undefined8 *)(puVar3 + 7) = uVar14;
    }
    if ((char)bVar15 < '\0') {
      uVar14 = extractps(auVar40,3);
      *(undefined8 *)(puVar3 + 10) = uVar14;
    }
    if ((bVar15 & 1) != 0) {
      puVar3[2] = auVar30._0_4_;
    }
    if ((bVar15 & 2) != 0) {
      uVar14 = extractps(auVar30,1);
      *(undefined8 *)(puVar3 + 5) = uVar14;
    }
    if ((bVar15 & 4) != 0) {
      uVar14 = extractps(auVar30,2);
      *(undefined8 *)(puVar3 + 8) = uVar14;
    }
    if ((char)bVar15 < '\0') {
      uVar14 = extractps(auVar30,3);
      *(undefined8 *)(puVar3 + 0xb) = uVar14;
    }
  }
  return;
}

// ApplyPreSimulationTransformAndClampVelocity___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_s_5B__c_unFVector3f_5D__3E_REFs_5B__c_unFTransform3f_5D_REFs_5B__c_unFVector3f_5D_CunfCuniCunf_sse4 @ 140d0c0b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPreSimulationTransformAndClampVelocity___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_s_5B__c_unFVector3f_5D__3E_REFs_5B__c_unFTransform3f_5D_REFs_5B__c_unFVector3f_5D_CunfCuniCunf_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,float *param_8,float *param_9,undefined4 param_10,
               uint param_11,float param_12)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [16];
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  byte bVar8;
  float *pfVar9;
  undefined4 *puVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  byte bVar17;
  undefined4 unaff_R13D;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  float fVar22;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar41;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar23;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar42;
  float fVar44;
  float fVar61;
  float fVar64;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar43;
  float fVar62;
  float fVar65;
  float fVar67;
  float fVar68;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar69;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar70;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar63;
  float fVar66;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar71;
  float fVar72;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar88;
  float fVar96;
  float fVar97;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  float fVar98;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar99;
  float fVar100;
  float fVar105;
  float fVar106;
  undefined1 auVar101 [16];
  float fVar107;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  float fVar108;
  float fVar115;
  float fVar116;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  float fVar126;
  undefined1 auVar117 [16];
  float fVar127;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  float fVar128;
  undefined8 uVar129;
  float fVar136;
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  float fVar135;
  float fVar137;
  undefined1 auVar134 [16];
  float fVar138;
  float fVar140;
  float fVar141;
  float fVar142;
  undefined1 auVar139 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  float fVar156;
  float fVar157;
  float fVar158;
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  float fVar159;
  float fVar160;
  float fVar161;
  float fVar162;
  float fVar163;
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar73 [16];
  undefined1 auVar102 [16];
  
  uVar13 = param_11 + 3;
  if (-1 < (int)param_11) {
    uVar13 = param_11;
  }
  uVar13 = uVar13 & 0xfffffffc;
  if ((int)uVar13 < 1) {
    uVar12 = 0;
  }
  else {
    lVar20 = 8;
    uVar12 = 0;
    uVar16 = 0;
    do {
      auVar24 = *(undefined1 (*) [16])(param_3 + -0x20 + lVar20 * 4);
      auVar167 = *(undefined1 (*) [16])(param_3 + -0x10 + lVar20 * 4);
      pfVar9 = (float *)(param_3 + lVar20 * 4);
      auVar46 = insertps(auVar167,auVar24,0x8c);
      fVar69 = param_8[8];
      fVar22 = auVar24._0_4_ * fVar69;
      fVar38 = auVar24._12_4_ * fVar69;
      fVar39 = auVar167._8_4_ * fVar69;
      fVar40 = pfVar9[1] * fVar69;
      fVar158 = param_8[9];
      fVar71 = auVar24._4_4_ * fVar158;
      fVar81 = auVar167._0_4_ * fVar158;
      fVar83 = auVar167._12_4_ * fVar158;
      fVar85 = pfVar9[2] * fVar158;
      fVar86 = param_8[10];
      fVar42 = auVar46._0_4_ * fVar86;
      fVar61 = auVar46._4_4_ * fVar86;
      fVar64 = *pfVar9 * fVar86;
      fVar67 = pfVar9[3] * fVar86;
      fVar41 = *param_8;
      fVar70 = param_8[1];
      fVar84 = param_8[2];
      fVar87 = param_8[3];
      fVar159 = fVar22 * fVar84 - fVar42 * fVar41;
      fVar160 = fVar38 * fVar84 - fVar61 * fVar41;
      fVar161 = fVar39 * fVar84 - fVar64 * fVar41;
      fVar162 = fVar40 * fVar84 - fVar67 * fVar41;
      fVar159 = fVar159 + fVar159;
      fVar160 = fVar160 + fVar160;
      fVar161 = fVar161 + fVar161;
      fVar162 = fVar162 + fVar162;
      fVar138 = fVar71 * fVar41 - fVar22 * fVar70;
      fVar140 = fVar81 * fVar41 - fVar38 * fVar70;
      fVar141 = fVar83 * fVar41 - fVar39 * fVar70;
      fVar142 = fVar85 * fVar41 - fVar40 * fVar70;
      fVar138 = fVar138 + fVar138;
      fVar140 = fVar140 + fVar140;
      fVar141 = fVar141 + fVar141;
      fVar142 = fVar142 + fVar142;
      fVar43 = fVar42 * fVar70 - fVar71 * fVar84;
      fVar62 = fVar61 * fVar70 - fVar81 * fVar84;
      fVar65 = fVar64 * fVar70 - fVar83 * fVar84;
      fVar68 = fVar67 * fVar70 - fVar85 * fVar84;
      fVar43 = fVar43 + fVar43;
      fVar62 = fVar62 + fVar62;
      fVar65 = fVar65 + fVar65;
      fVar68 = fVar68 + fVar68;
      fVar23 = param_8[4];
      fVar126 = param_8[6];
      fVar127 = param_9[2];
      fVar72 = ((fVar41 * fVar159 - fVar43 * fVar70) + fVar87 * fVar138 + fVar42 + fVar126) -
               fVar127;
      fVar82 = ((fVar41 * fVar160 - fVar62 * fVar70) + fVar87 * fVar140 + fVar61 + fVar126) -
               fVar127;
      auVar73._0_8_ = CONCAT44(fVar82,fVar72);
      auVar73._8_4_ =
           ((fVar41 * fVar161 - fVar65 * fVar70) + fVar87 * fVar141 + fVar64 + fVar126) - fVar127;
      auVar73._12_4_ =
           ((fVar41 * fVar162 - fVar68 * fVar70) + fVar87 * fVar142 + fVar67 + fVar126) - fVar127;
      puVar10 = (undefined4 *)(param_6 + (uVar16 & 0xffffffff));
      uVar7 = *puVar10;
      fVar64 = (float)puVar10[2];
      fVar67 = (float)puVar10[3];
      auVar47._8_4_ = fVar82;
      auVar47._0_8_ = auVar73._0_8_;
      auVar47._12_4_ = puVar10[1];
      fVar42 = param_8[5];
      fVar61 = *param_9;
      fVar99 = ((fVar70 * fVar138 - fVar159 * fVar84) + fVar87 * fVar43 + fVar22 + fVar23) - fVar61;
      fVar38 = ((fVar70 * fVar140 - fVar160 * fVar84) + fVar87 * fVar62 + fVar38 + fVar23) - fVar61;
      auVar102._0_8_ = CONCAT44(fVar38,fVar99);
      auVar102._8_4_ =
           ((fVar70 * fVar141 - fVar161 * fVar84) + fVar87 * fVar65 + fVar39 + fVar23) - fVar61;
      auVar102._12_4_ =
           ((fVar70 * fVar142 - fVar162 * fVar84) + fVar87 * fVar68 + fVar40 + fVar23) - fVar61;
      fVar22 = param_9[1];
      auVar90._0_4_ =
           ((fVar84 * fVar43 - fVar138 * fVar41) + fVar87 * fVar159 + fVar71 + fVar42) - fVar22;
      auVar90._4_4_ =
           ((fVar84 * fVar62 - fVar140 * fVar41) + fVar87 * fVar160 + fVar81 + fVar42) - fVar22;
      auVar90._8_4_ =
           ((fVar84 * fVar65 - fVar141 * fVar41) + fVar87 * fVar161 + fVar83 + fVar42) - fVar22;
      auVar90._12_4_ =
           ((fVar84 * fVar68 - fVar142 * fVar41) + fVar87 * fVar162 + fVar85 + fVar42) - fVar22;
      auVar50._8_4_ = fVar38;
      auVar50._0_8_ = auVar102._0_8_;
      auVar50._12_4_ = auVar90._4_4_;
      uVar129 = CONCAT44(auVar90._0_4_,fVar99);
      puVar1 = (undefined8 *)(param_1 + uVar16 * 4);
      *puVar1 = uVar129;
      puVar1[1] = CONCAT44(uVar7,fVar72);
      puVar1 = (undefined8 *)(param_1 + 0x10 + uVar16 * 4);
      *puVar1 = auVar50._8_8_;
      puVar1[1] = auVar47._8_8_;
      pfVar9 = (float *)(param_1 + 0x20 + uVar16 * 4);
      *pfVar9 = auVar102._8_4_;
      pfVar9[1] = auVar90._8_4_;
      pfVar9[2] = auVar73._8_4_;
      pfVar9[3] = fVar64;
      pfVar9 = (float *)(param_1 + 0x30 + uVar16 * 4);
      *pfVar9 = auVar102._12_4_;
      pfVar9[1] = auVar90._12_4_;
      pfVar9[2] = auVar73._12_4_;
      pfVar9[3] = fVar67;
      auVar110._8_4_ = auVar102._8_4_;
      auVar110._0_8_ = auVar102._0_8_;
      auVar110._12_4_ = auVar102._12_4_;
      auVar24 = insertps(auVar110,auVar90,0x30);
      auVar48._4_4_ = auVar90._8_4_;
      auVar48._0_4_ = auVar90._4_4_;
      auVar48._8_4_ = fVar72;
      auVar48._12_4_ = fVar82;
      auVar24 = insertps(auVar24,auVar73,0x20);
      puVar10 = (undefined4 *)(param_3 + -0x20 + lVar20 * 4);
      *puVar10 = auVar24._0_4_;
      puVar10[1] = auVar24._12_4_;
      puVar10[2] = auVar24._8_4_;
      puVar10[3] = auVar24._4_4_;
      auVar24 = blendps(auVar48,auVar102,4);
      puVar10 = (undefined4 *)(param_3 + -0x10 + lVar20 * 4);
      *puVar10 = auVar24._0_4_;
      puVar10[1] = auVar24._12_4_;
      puVar10[2] = auVar24._8_4_;
      puVar10[3] = auVar24._4_4_;
      pfVar9 = (float *)(param_3 + lVar20 * 4);
      *pfVar9 = auVar73._8_4_;
      pfVar9[1] = auVar102._12_4_;
      pfVar9[2] = auVar90._12_4_;
      pfVar9[3] = auVar73._12_4_;
      auVar24 = *(undefined1 (*) [16])(param_2 + -0x20 + lVar20 * 4);
      auVar167 = *(undefined1 (*) [16])(param_2 + -0x10 + lVar20 * 4);
      pfVar9 = (float *)(param_2 + lVar20 * 4);
      auVar46 = insertps(auVar167,auVar24,0x8c);
      fVar138 = auVar24._0_4_ * fVar69;
      fVar140 = auVar24._12_4_ * fVar69;
      fVar141 = auVar167._8_4_ * fVar69;
      fVar142 = pfVar9[1] * fVar69;
      fVar82 = auVar24._4_4_ * fVar158;
      fVar83 = auVar167._0_4_ * fVar158;
      fVar85 = auVar167._12_4_ * fVar158;
      fVar99 = pfVar9[2] * fVar158;
      fVar64 = fVar82 * fVar41 - fVar138 * fVar70;
      fVar67 = fVar83 * fVar41 - fVar140 * fVar70;
      fVar38 = fVar85 * fVar41 - fVar141 * fVar70;
      fVar39 = fVar99 * fVar41 - fVar142 * fVar70;
      fVar68 = auVar46._0_4_ * fVar86;
      fVar71 = auVar46._4_4_ * fVar86;
      fVar72 = *pfVar9 * fVar86;
      fVar81 = pfVar9[3] * fVar86;
      fVar161 = fVar68 * fVar70 - fVar82 * fVar84;
      fVar162 = fVar71 * fVar70 - fVar83 * fVar84;
      fVar156 = fVar72 * fVar70 - fVar85 * fVar84;
      fVar157 = fVar81 * fVar70 - fVar99 * fVar84;
      fVar40 = fVar138 * fVar84 - fVar68 * fVar41;
      fVar43 = fVar140 * fVar84 - fVar71 * fVar41;
      fVar62 = fVar141 * fVar84 - fVar72 * fVar41;
      fVar65 = fVar142 * fVar84 - fVar81 * fVar41;
      fVar161 = fVar161 + fVar161;
      fVar162 = fVar162 + fVar162;
      fVar156 = fVar156 + fVar156;
      fVar157 = fVar157 + fVar157;
      fVar40 = fVar40 + fVar40;
      fVar43 = fVar43 + fVar43;
      fVar62 = fVar62 + fVar62;
      fVar65 = fVar65 + fVar65;
      fVar64 = fVar64 + fVar64;
      fVar67 = fVar67 + fVar67;
      fVar38 = fVar38 + fVar38;
      fVar39 = fVar39 + fVar39;
      fVar159 = (fVar41 * fVar40 - fVar161 * fVar70) + fVar87 * fVar64 + fVar68;
      fVar160 = (fVar41 * fVar43 - fVar162 * fVar70) + fVar87 * fVar67 + fVar71;
      auVar164._0_8_ = CONCAT44(fVar160,fVar159);
      auVar164._8_4_ = (fVar41 * fVar62 - fVar156 * fVar70) + fVar87 * fVar38 + fVar72;
      auVar164._12_4_ = (fVar41 * fVar65 - fVar157 * fVar70) + fVar87 * fVar39 + fVar81;
      fVar138 = (fVar70 * fVar64 - fVar40 * fVar84) + fVar87 * fVar161 + fVar138;
      fVar140 = (fVar70 * fVar67 - fVar43 * fVar84) + fVar87 * fVar162 + fVar140;
      auVar101._0_8_ = CONCAT44(fVar140,fVar138);
      auVar101._8_4_ = (fVar70 * fVar38 - fVar62 * fVar84) + fVar87 * fVar156 + fVar141;
      auVar101._12_4_ = (fVar70 * fVar39 - fVar65 * fVar84) + fVar87 * fVar157 + fVar142;
      fVar71 = (fVar84 * fVar161 - fVar64 * fVar41) + fVar87 * fVar40 + fVar82;
      fVar82 = (fVar84 * fVar162 - fVar67 * fVar41) + fVar87 * fVar43 + fVar83;
      auVar89._0_8_ = CONCAT44(fVar82,fVar71);
      auVar89._8_4_ = (fVar84 * fVar156 - fVar38 * fVar41) + fVar87 * fVar62 + fVar85;
      auVar89._12_4_ = (fVar84 * fVar157 - fVar39 * fVar41) + fVar87 * fVar65 + fVar99;
      auVar24 = *(undefined1 (*) [16])(param_4 + -0x20 + lVar20 * 4);
      auVar167 = *(undefined1 (*) [16])(param_4 + -0x10 + lVar20 * 4);
      pfVar9 = (float *)(param_4 + lVar20 * 4);
      auVar46 = insertps(auVar167,auVar24,0x8c);
      fVar40 = auVar24._0_4_ * fVar69;
      fVar43 = auVar24._12_4_ * fVar69;
      fVar62 = auVar167._8_4_ * fVar69;
      fVar69 = pfVar9[1] * fVar69;
      fVar141 = auVar24._4_4_ * fVar158;
      fVar142 = auVar167._0_4_ * fVar158;
      fVar161 = auVar167._12_4_ * fVar158;
      fVar158 = pfVar9[2] * fVar158;
      fVar65 = auVar46._0_4_ * fVar86;
      fVar72 = auVar46._4_4_ * fVar86;
      fVar83 = *pfVar9 * fVar86;
      fVar86 = pfVar9[3] * fVar86;
      fVar162 = fVar141 * fVar41 - fVar40 * fVar70;
      fVar156 = fVar142 * fVar41 - fVar43 * fVar70;
      fVar157 = fVar161 * fVar41 - fVar62 * fVar70;
      fVar163 = fVar158 * fVar41 - fVar69 * fVar70;
      fVar64 = fVar40 * fVar84 - fVar65 * fVar41;
      fVar67 = fVar43 * fVar84 - fVar72 * fVar41;
      fVar38 = fVar62 * fVar84 - fVar83 * fVar41;
      fVar39 = fVar69 * fVar84 - fVar86 * fVar41;
      fVar64 = fVar64 + fVar64;
      fVar67 = fVar67 + fVar67;
      fVar38 = fVar38 + fVar38;
      fVar39 = fVar39 + fVar39;
      fVar162 = fVar162 + fVar162;
      fVar156 = fVar156 + fVar156;
      fVar157 = fVar157 + fVar157;
      fVar163 = fVar163 + fVar163;
      fVar68 = fVar65 * fVar70 - fVar141 * fVar84;
      fVar81 = fVar72 * fVar70 - fVar142 * fVar84;
      fVar85 = fVar83 * fVar70 - fVar161 * fVar84;
      fVar99 = fVar86 * fVar70 - fVar158 * fVar84;
      fVar68 = fVar68 + fVar68;
      fVar81 = fVar81 + fVar81;
      fVar85 = fVar85 + fVar85;
      fVar99 = fVar99 + fVar99;
      fVar40 = ((fVar70 * fVar162 - fVar64 * fVar84) + fVar87 * fVar68 + fVar40 + fVar23) - fVar61;
      fVar43 = ((fVar70 * fVar156 - fVar67 * fVar84) + fVar87 * fVar81 + fVar43 + fVar23) - fVar61;
      fVar62 = ((fVar70 * fVar157 - fVar38 * fVar84) + fVar87 * fVar85 + fVar62 + fVar23) - fVar61;
      fVar61 = ((fVar70 * fVar163 - fVar39 * fVar84) + fVar87 * fVar99 + fVar69 + fVar23) - fVar61;
      auVar149._0_4_ =
           ((fVar84 * fVar68 - fVar162 * fVar41) + fVar87 * fVar64 + fVar141 + fVar42) - fVar22;
      auVar149._4_4_ =
           ((fVar84 * fVar81 - fVar156 * fVar41) + fVar87 * fVar67 + fVar142 + fVar42) - fVar22;
      auVar149._8_4_ =
           ((fVar84 * fVar85 - fVar157 * fVar41) + fVar87 * fVar38 + fVar161 + fVar42) - fVar22;
      auVar149._12_4_ =
           ((fVar84 * fVar99 - fVar163 * fVar41) + fVar87 * fVar39 + fVar158 + fVar42) - fVar22;
      auVar143._0_4_ =
           ((fVar41 * fVar64 - fVar68 * fVar70) + fVar87 * fVar162 + fVar65 + fVar126) - fVar127;
      auVar143._4_4_ =
           ((fVar41 * fVar67 - fVar81 * fVar70) + fVar87 * fVar156 + fVar72 + fVar126) - fVar127;
      auVar143._8_4_ =
           ((fVar41 * fVar38 - fVar85 * fVar70) + fVar87 * fVar157 + fVar83 + fVar126) - fVar127;
      auVar143._12_4_ =
           ((fVar41 * fVar39 - fVar99 * fVar70) + fVar87 * fVar163 + fVar86 + fVar126) - fVar127;
      auVar25._4_4_ = fVar43;
      auVar25._0_4_ = fVar40;
      auVar25._8_4_ = fVar62;
      auVar25._12_4_ = fVar61;
      auVar24 = insertps(auVar25,auVar149,0x30);
      auVar24 = insertps(auVar24,auVar143,0x20);
      puVar10 = (undefined4 *)(param_4 + -0x20 + lVar20 * 4);
      *puVar10 = auVar24._0_4_;
      puVar10[1] = auVar24._12_4_;
      puVar10[2] = auVar24._8_4_;
      puVar10[3] = auVar24._4_4_;
      auVar26._4_4_ = auVar149._8_4_;
      auVar26._0_4_ = auVar149._4_4_;
      auVar26._8_4_ = auVar143._0_4_;
      auVar26._12_4_ = auVar143._4_4_;
      auVar24._4_4_ = fVar43;
      auVar24._0_4_ = fVar40;
      auVar24._8_4_ = fVar62;
      auVar24._12_4_ = fVar61;
      auVar24 = blendps(auVar26,auVar24,4);
      puVar10 = (undefined4 *)(param_4 + -0x10 + lVar20 * 4);
      *puVar10 = auVar24._0_4_;
      puVar10[1] = auVar24._12_4_;
      puVar10[2] = auVar24._8_4_;
      puVar10[3] = auVar24._4_4_;
      pfVar9 = (float *)(param_4 + lVar20 * 4);
      *pfVar9 = auVar143._8_4_;
      pfVar9[1] = fVar61;
      pfVar9[2] = auVar149._12_4_;
      pfVar9[3] = auVar143._12_4_;
      auVar24 = *(undefined1 (*) [16])(param_7 + -0x20 + lVar20 * 4);
      auVar167 = *(undefined1 (*) [16])(param_7 + -0x10 + lVar20 * 4);
      pfVar9 = (float *)(param_7 + lVar20 * 4);
      auVar46 = insertps(auVar167,auVar24,0x8c);
      auVar49._0_4_ = auVar24._0_4_ - fVar40;
      auVar49._4_4_ = auVar24._12_4_ - fVar43;
      auVar49._8_4_ = auVar167._8_4_ - fVar62;
      auVar49._12_4_ = pfVar9[1] - fVar61;
      auVar109._0_4_ = auVar24._4_4_ - auVar149._0_4_;
      auVar109._4_4_ = auVar167._0_4_ - auVar149._4_4_;
      auVar109._8_4_ = auVar167._12_4_ - auVar149._8_4_;
      auVar109._12_4_ = pfVar9[2] - auVar149._12_4_;
      auVar167._4_4_ = param_12;
      auVar167._0_4_ = param_12;
      auVar167._8_4_ = param_12;
      auVar167._12_4_ = param_12;
      auVar27._0_4_ = auVar46._0_4_ - auVar143._0_4_;
      auVar27._4_4_ = auVar46._4_4_ - auVar143._4_4_;
      auVar27._8_4_ = *pfVar9 - auVar143._8_4_;
      auVar27._12_4_ = pfVar9[3] - auVar143._12_4_;
      auVar46._4_4_ = param_10;
      auVar46._0_4_ = param_10;
      auVar46._8_4_ = param_10;
      auVar46._12_4_ = param_10;
      auVar50 = divps(auVar49,auVar46);
      auVar110 = divps(auVar109,auVar46);
      auVar24 = divps(auVar27,auVar46);
      fVar70 = auVar50._12_4_;
      auVar46 = insertps(auVar50,auVar110,0x30);
      fVar23 = auVar110._12_4_;
      fVar69 = auVar24._0_4_;
      fVar158 = auVar24._4_4_;
      fVar86 = auVar24._8_4_;
      fVar41 = auVar24._12_4_;
      auVar117._0_8_ = auVar110._4_8_;
      auVar117._8_4_ = fVar69;
      auVar117._12_4_ = fVar158;
      auVar24 = insertps(auVar46,auVar24,0x20);
      puVar10 = (undefined4 *)(param_5 + -0x20 + lVar20 * 4);
      *puVar10 = auVar24._0_4_;
      puVar10[1] = auVar24._12_4_;
      puVar10[2] = auVar24._8_4_;
      puVar10[3] = auVar24._4_4_;
      auVar24 = blendps(auVar117,auVar50,4);
      puVar10 = (undefined4 *)(param_5 + -0x10 + lVar20 * 4);
      *puVar10 = auVar24._0_4_;
      puVar10[1] = auVar24._12_4_;
      puVar10[2] = auVar24._8_4_;
      puVar10[3] = auVar24._4_4_;
      pfVar9 = (float *)(param_5 + lVar20 * 4);
      *pfVar9 = fVar86;
      pfVar9[1] = fVar70;
      pfVar9[2] = fVar23;
      pfVar9[3] = fVar41;
      fVar138 = fVar138 - auVar50._0_4_;
      fVar140 = fVar140 - auVar50._4_4_;
      fVar42 = auVar101._8_4_ - auVar50._8_4_;
      fVar61 = auVar101._12_4_ - fVar70;
      fVar71 = fVar71 - auVar110._0_4_;
      fVar82 = fVar82 - auVar110._4_4_;
      fVar84 = auVar89._8_4_ - auVar110._8_4_;
      fVar87 = auVar89._12_4_ - fVar23;
      fVar159 = fVar159 - fVar69;
      fVar160 = fVar160 - fVar158;
      fVar126 = auVar164._8_4_ - fVar86;
      fVar127 = auVar164._12_4_ - fVar41;
      auVar139._0_4_ = fVar159 * fVar159 + fVar71 * fVar71 + fVar138 * fVar138;
      auVar139._4_4_ = fVar160 * fVar160 + fVar82 * fVar82 + fVar140 * fVar140;
      auVar139._8_4_ = fVar126 * fVar126 + fVar84 * fVar84 + fVar42 * fVar42;
      auVar139._12_4_ = fVar127 * fVar127 + fVar87 * fVar87 + fVar61 * fVar61;
      auVar144._4_4_ = -(uint)(param_12 < auVar139._4_4_);
      auVar144._0_4_ = -(uint)(param_12 < auVar139._0_4_);
      auVar144._8_4_ = -(uint)(param_12 < auVar139._8_4_);
      auVar144._12_4_ = -(uint)(param_12 < auVar139._12_4_);
      iVar18 = movmskps(unaff_R13D,auVar144);
      unaff_R13D = 0;
      if (iVar18 != 0) {
        bVar17 = (char)((char)iVar18 << 4) >> 4;
        unaff_R13D = CONCAT31((int3)((uint)iVar18 >> 8),bVar17);
        auVar24 = divps(auVar167,auVar139);
        auVar24 = sqrtps(auVar139,auVar24);
        fVar22 = auVar24._0_4_;
        fVar64 = auVar24._4_4_;
        fVar67 = auVar24._8_4_;
        fVar38 = auVar24._12_4_;
        auVar51._0_8_ = CONCAT44(auVar50._4_4_ + fVar140 * fVar64,auVar50._0_4_ + fVar138 * fVar22);
        auVar51._8_4_ = auVar50._8_4_ + fVar42 * fVar67;
        auVar51._12_4_ = fVar70 + fVar61 * fVar38;
        auVar130._8_4_ = auVar101._8_4_;
        auVar130._0_8_ = auVar101._0_8_;
        auVar130._12_4_ = auVar101._12_4_;
        bVar21 = (bVar17 & 1) != 0;
        if (bVar21) {
          auVar130._8_4_ = auVar51._8_4_;
          auVar130._0_8_ = auVar51._0_8_;
          auVar130._12_4_ = auVar51._12_4_;
        }
        auVar111._0_8_ = CONCAT44(auVar110._4_4_ + fVar82 * fVar64,auVar110._0_4_ + fVar71 * fVar22)
        ;
        auVar111._8_4_ = auVar110._8_4_ + fVar84 * fVar67;
        auVar111._12_4_ = fVar23 + fVar87 * fVar38;
        auVar28._0_8_ = CONCAT44(fVar158 + fVar160 * fVar64,fVar69 + fVar159 * fVar22);
        auVar28._8_4_ = fVar86 + fVar126 * fVar67;
        auVar28._12_4_ = fVar41 + fVar127 * fVar38;
        auVar118._8_4_ = auVar89._8_4_;
        auVar118._0_8_ = auVar89._0_8_;
        auVar118._12_4_ = auVar89._12_4_;
        auVar74._8_4_ = auVar164._8_4_;
        auVar74._0_8_ = auVar164._0_8_;
        auVar74._12_4_ = auVar164._12_4_;
        if (bVar21) {
          auVar118._8_4_ = auVar111._8_4_;
          auVar118._0_8_ = auVar111._0_8_;
          auVar118._12_4_ = auVar111._12_4_;
          auVar74._8_4_ = auVar28._8_4_;
          auVar74._0_8_ = auVar28._0_8_;
          auVar74._12_4_ = auVar28._12_4_;
          auVar24 = blendps(auVar101,auVar130,1);
          if ((bVar17 & 2) != 0) goto LAB_140d0c819;
LAB_140d0c776:
          auVar46 = blendps(auVar89,auVar118,1);
          auVar165 = blendps(auVar164,auVar74,1);
          auVar24 = blendps(auVar24,auVar24,2);
          auVar119 = auVar46;
          auVar167 = auVar165;
          if ((bVar17 & 4) == 0) goto LAB_140d0c7a9;
LAB_140d0c855:
          auVar132._8_4_ = auVar51._8_4_;
          auVar132._0_8_ = auVar51._0_8_;
          auVar132._12_4_ = auVar51._12_4_;
          auVar46 = blendps(auVar46,auVar119,2);
          auVar120._8_4_ = auVar111._8_4_;
          auVar120._0_8_ = auVar111._0_8_;
          auVar120._12_4_ = auVar111._12_4_;
          auVar167 = blendps(auVar167,auVar165,2);
          auVar166._8_4_ = auVar28._8_4_;
          auVar166._0_8_ = auVar28._0_8_;
          auVar166._12_4_ = auVar28._12_4_;
          auVar24 = blendps(auVar24,auVar132,4);
          if (-1 < (char)bVar17) goto LAB_140d0c88d;
LAB_140d0c7d8:
          auVar46 = blendps(auVar46,auVar120,4);
          if ((char)bVar17 < '\0') goto LAB_140d0c7e4;
LAB_140d0c89c:
          auVar167 = blendps(auVar167,auVar166,4);
          auVar111 = auVar46;
        }
        else {
          auVar24 = blendps(auVar101,auVar130,1);
          if ((bVar17 & 2) == 0) goto LAB_140d0c776;
LAB_140d0c819:
          auVar131._8_4_ = auVar51._8_4_;
          auVar131._0_8_ = auVar51._0_8_;
          auVar131._12_4_ = auVar51._12_4_;
          auVar46 = blendps(auVar89,auVar118,1);
          auVar119._8_4_ = auVar111._8_4_;
          auVar119._0_8_ = auVar111._0_8_;
          auVar119._12_4_ = auVar111._12_4_;
          auVar167 = blendps(auVar164,auVar74,1);
          auVar165._8_4_ = auVar28._8_4_;
          auVar165._0_8_ = auVar28._0_8_;
          auVar165._12_4_ = auVar28._12_4_;
          auVar24 = blendps(auVar24,auVar131,2);
          if ((bVar17 & 4) != 0) goto LAB_140d0c855;
LAB_140d0c7a9:
          auVar46 = blendps(auVar46,auVar119,2);
          auVar166 = blendps(auVar167,auVar165,2);
          auVar24 = blendps(auVar24,auVar24,4);
          auVar120 = auVar46;
          auVar167 = auVar166;
          if ((char)bVar17 < '\0') goto LAB_140d0c7d8;
LAB_140d0c88d:
          auVar51 = auVar24;
          auVar46 = blendps(auVar46,auVar120,4);
          auVar24 = auVar51;
          if (-1 < (char)bVar17) goto LAB_140d0c89c;
LAB_140d0c7e4:
          auVar167 = blendps(auVar167,auVar166,4);
        }
        if (-1 < (char)bVar17) {
          auVar28 = auVar167;
        }
        auVar101 = blendps(auVar24,auVar51,8);
        auVar89 = blendps(auVar46,auVar111,8);
        auVar164 = blendps(auVar167,auVar28,8);
      }
      auVar24 = insertps(auVar101,auVar89,0x30);
      auVar45._0_8_ = auVar89._4_8_;
      auVar45._8_4_ = auVar164._0_4_;
      auVar45._12_4_ = auVar164._4_4_;
      auVar24 = insertps(auVar24,auVar164,0x20);
      puVar10 = (undefined4 *)(param_2 + -0x20 + lVar20 * 4);
      *puVar10 = auVar24._0_4_;
      puVar10[1] = auVar24._12_4_;
      puVar10[2] = auVar24._8_4_;
      puVar10[3] = auVar24._4_4_;
      auVar24 = blendps(auVar45,auVar101,4);
      puVar10 = (undefined4 *)(param_2 + -0x10 + lVar20 * 4);
      *puVar10 = auVar24._0_4_;
      puVar10[1] = auVar24._12_4_;
      puVar10[2] = auVar24._8_4_;
      puVar10[3] = auVar24._4_4_;
      puVar10 = (undefined4 *)(param_2 + lVar20 * 4);
      *puVar10 = auVar164._8_4_;
      puVar10[1] = auVar101._12_4_;
      puVar10[2] = auVar89._12_4_;
      puVar10[3] = auVar164._12_4_;
      uVar16 = uVar16 + 0x10;
      lVar20 = lVar20 + 0xc;
      uVar12 = uVar12 + 4;
    } while ((int)uVar12 < (int)uVar13);
  }
  if ((int)param_11 <= (int)uVar12) {
    return;
  }
  bVar21 = (int)(uVar12 | (uint)__xmm_00000003000000020000000100000000) < (int)param_11;
  auVar145._0_4_ = -(uint)bVar21;
  bVar4 = (int)(uVar12 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_11;
  auVar145._4_4_ = -(uint)bVar4;
  bVar5 = (int)(uVar12 | _UNK_150631e08) < (int)param_11;
  auVar145._8_4_ = -(uint)bVar5;
  bVar6 = (int)(uVar12 | _UNK_150631e0c) < (int)param_11;
  auVar145._12_4_ = -(uint)bVar6;
  uVar16 = (ulonglong)uVar12;
  pauVar2 = (undefined1 (*) [16])(param_3 + uVar16 * 0xc);
  uVar13 = movmskps(uVar13,auVar145);
  bVar17 = (char)((char)uVar13 << 4) >> 4;
  if (uVar13 == 0xf) {
    auVar24 = *pauVar2;
    auVar167 = pauVar2[1];
    auVar30._0_4_ = auVar24._0_4_;
    auVar46 = insertps(auVar167,auVar24,0x8c);
    auVar30._4_4_ = auVar24._12_4_;
    auVar30._8_4_ = auVar167._8_4_;
    auVar30._12_4_ = *(undefined4 *)(pauVar2[2] + 4);
    auVar53._4_4_ = auVar167._0_4_;
    auVar53._0_4_ = auVar24._4_4_;
    auVar53._8_4_ = auVar167._12_4_;
    auVar53._12_4_ = *(undefined4 *)(pauVar2[2] + 8);
    auVar76._0_8_ = auVar46._0_8_;
    auVar76._8_4_ = *(undefined4 *)pauVar2[2];
    auVar76._12_4_ = *(undefined4 *)(pauVar2[2] + 0xc);
  }
  else {
    auVar29._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar145._0_4_;
    auVar29._4_4_ = _UNK_150b50da4 & auVar145._4_4_;
    auVar29._8_4_ = _UNK_150b50da8 & auVar145._8_4_;
    auVar29._12_4_ = _UNK_150b50dac & auVar145._12_4_;
    lVar19 = extractps(auVar29,1);
    lVar15 = extractps(auVar29,2);
    lVar20 = extractps(auVar29,3);
    auVar24 = insertps(ZEXT416(*(uint *)*pauVar2),*(undefined4 *)(*pauVar2 + lVar19),0x10);
    auVar24 = insertps(auVar24,*(undefined4 *)(*pauVar2 + lVar15),0x20);
    auVar30 = insertps(auVar24,*(undefined4 *)(*pauVar2 + lVar20),0x30);
    auVar52._4_4_ = _UNK_150b50db4;
    auVar52._0_4_ = ___xmm_000000280000001c0000001000000004;
    auVar52._8_4_ = _UNK_150b50db8;
    auVar52._12_4_ = _UNK_150b50dbc;
    auVar52 = auVar52 & auVar145;
    auVar24 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar52._0_4_)),
                       *(undefined4 *)(*pauVar2 + auVar52._4_4_),0x10);
    auVar24 = insertps(auVar24,*(undefined4 *)(*pauVar2 + auVar52._8_4_),0x20);
    auVar53 = insertps(auVar24,*(undefined4 *)(*pauVar2 + auVar52._12_4_),0x30);
    auVar75._4_4_ = _UNK_150b50dc4;
    auVar75._0_4_ = ___xmm_0000002c000000200000001400000008;
    auVar75._8_4_ = _UNK_150b50dc8;
    auVar75._12_4_ = _UNK_150b50dcc;
    auVar75 = auVar75 & auVar145;
    auVar24 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar75._0_4_)),
                       *(undefined4 *)(*pauVar2 + auVar75._4_4_),0x10);
    auVar24 = insertps(auVar24,*(undefined4 *)(*pauVar2 + auVar75._8_4_),0x20);
    auVar76 = insertps(auVar24,*(undefined4 *)(*pauVar2 + auVar75._12_4_),0x30);
  }
  fVar69 = param_8[8];
  fVar23 = auVar30._0_4_ * fVar69;
  fVar126 = auVar30._4_4_ * fVar69;
  fVar127 = auVar30._8_4_ * fVar69;
  fVar42 = auVar30._12_4_ * fVar69;
  fVar158 = param_8[9];
  fVar64 = auVar53._0_4_ * fVar158;
  fVar67 = auVar53._4_4_ * fVar158;
  fVar38 = auVar53._8_4_ * fVar158;
  fVar39 = auVar53._12_4_ * fVar158;
  fVar86 = param_8[10];
  fVar40 = auVar76._0_4_ * fVar86;
  fVar43 = auVar76._4_4_ * fVar86;
  fVar62 = auVar76._8_4_ * fVar86;
  fVar65 = auVar76._12_4_ * fVar86;
  fVar41 = *param_8;
  fVar70 = param_8[1];
  fVar84 = param_8[2];
  fVar87 = param_8[3];
  fVar68 = fVar64 * fVar41 - fVar23 * fVar70;
  fVar71 = fVar67 * fVar41 - fVar126 * fVar70;
  fVar72 = fVar38 * fVar41 - fVar127 * fVar70;
  fVar81 = fVar39 * fVar41 - fVar42 * fVar70;
  fVar138 = fVar40 * fVar70 - fVar64 * fVar84;
  fVar140 = fVar43 * fVar70 - fVar67 * fVar84;
  fVar141 = fVar62 * fVar70 - fVar38 * fVar84;
  fVar142 = fVar65 * fVar70 - fVar39 * fVar84;
  fVar82 = fVar23 * fVar84 - fVar40 * fVar41;
  fVar83 = fVar126 * fVar84 - fVar43 * fVar41;
  fVar85 = fVar127 * fVar84 - fVar62 * fVar41;
  fVar99 = fVar42 * fVar84 - fVar65 * fVar41;
  fVar138 = fVar138 + fVar138;
  fVar140 = fVar140 + fVar140;
  fVar141 = fVar141 + fVar141;
  fVar142 = fVar142 + fVar142;
  fVar82 = fVar82 + fVar82;
  fVar83 = fVar83 + fVar83;
  fVar85 = fVar85 + fVar85;
  fVar99 = fVar99 + fVar99;
  fVar68 = fVar68 + fVar68;
  fVar71 = fVar71 + fVar71;
  fVar72 = fVar72 + fVar72;
  fVar81 = fVar81 + fVar81;
  auVar133._0_4_ = fVar87 * fVar138 + fVar23;
  auVar133._4_4_ = fVar87 * fVar140 + fVar126;
  auVar133._8_4_ = fVar87 * fVar141 + fVar127;
  auVar133._12_4_ = fVar87 * fVar142 + fVar42;
  fVar159 = (fVar70 * fVar68 - fVar82 * fVar84) + auVar133._0_4_;
  fVar160 = (fVar70 * fVar71 - fVar83 * fVar84) + auVar133._4_4_;
  fVar161 = (fVar70 * fVar72 - fVar85 * fVar84) + auVar133._8_4_;
  fVar162 = (fVar70 * fVar81 - fVar99 * fVar84) + auVar133._12_4_;
  fVar23 = param_8[4];
  fVar126 = param_8[5];
  fVar127 = param_8[6];
  fVar42 = *param_9;
  fVar61 = param_9[1];
  fVar22 = param_9[2];
  bVar11 = ~bVar17;
  if ((bVar11 & 9) == 0) {
    auVar133 = *(undefined1 (*) [16])(param_6 + (int)(uVar12 << 2));
  }
  else {
    puVar14 = (uint *)(param_6 + (int)(uVar12 << 2));
    if ((uVar13 & 1) != 0) {
      auVar133 = ZEXT416(*puVar14);
    }
    if ((uVar13 & 2) != 0) {
      auVar133 = insertps(auVar133,puVar14[1],0x10);
    }
    if ((uVar13 & 4) != 0) {
      auVar133 = insertps(auVar133,puVar14[2],0x20);
    }
    if ((uVar13 & 8) != 0) {
      auVar133 = insertps(auVar133,puVar14[3],0x30);
    }
  }
  fVar159 = (fVar159 + fVar23) - fVar42;
  fVar160 = (fVar160 + fVar23) - fVar42;
  auVar121._0_8_ = CONCAT44(fVar160,fVar159);
  auVar121._8_4_ = (fVar161 + fVar23) - fVar42;
  auVar121._12_4_ = (fVar162 + fVar23) - fVar42;
  auVar54._0_4_ =
       ((fVar84 * fVar138 - fVar68 * fVar41) + fVar87 * fVar82 + fVar64 + fVar126) - fVar61;
  auVar54._4_4_ =
       ((fVar84 * fVar140 - fVar71 * fVar41) + fVar87 * fVar83 + fVar67 + fVar126) - fVar61;
  auVar54._8_4_ =
       ((fVar84 * fVar141 - fVar72 * fVar41) + fVar87 * fVar85 + fVar38 + fVar126) - fVar61;
  auVar54._12_4_ =
       ((fVar84 * fVar142 - fVar81 * fVar41) + fVar87 * fVar99 + fVar39 + fVar126) - fVar61;
  auVar31._0_4_ =
       ((fVar41 * fVar82 - fVar138 * fVar70) + fVar87 * fVar68 + fVar40 + fVar127) - fVar22;
  auVar31._4_4_ =
       ((fVar41 * fVar83 - fVar140 * fVar70) + fVar87 * fVar71 + fVar43 + fVar127) - fVar22;
  auVar31._8_4_ =
       ((fVar41 * fVar85 - fVar141 * fVar70) + fVar87 * fVar72 + fVar62 + fVar127) - fVar22;
  auVar31._12_4_ =
       ((fVar41 * fVar99 - fVar142 * fVar70) + fVar87 * fVar81 + fVar65 + fVar127) - fVar22;
  pfVar9 = (float *)(param_1 + (ulonglong)uVar12 * 0x10);
  if ((bVar11 & 0xf) == 0) {
    auVar78._8_4_ = fVar160;
    auVar78._0_8_ = auVar121._0_8_;
    auVar78._12_4_ = auVar54._4_4_;
    uVar129 = CONCAT44(auVar54._0_4_,fVar159);
    *(undefined8 *)pfVar9 = uVar129;
    *(ulonglong *)(pfVar9 + 2) = CONCAT44(auVar133._0_4_,auVar31._0_4_);
    *(longlong *)(pfVar9 + 4) = auVar78._8_8_;
    pfVar9[6] = auVar31._4_4_;
    pfVar9[7] = auVar133._4_4_;
    pfVar9[8] = auVar121._8_4_;
    pfVar9[9] = auVar54._8_4_;
    pfVar9[10] = auVar31._8_4_;
    pfVar9[0xb] = auVar133._8_4_;
    pfVar9[0xc] = auVar121._12_4_;
    pfVar9[0xd] = auVar54._12_4_;
    pfVar9[0xe] = auVar31._12_4_;
    pfVar9[0xf] = auVar133._12_4_;
    auVar79._4_4_ = fVar160;
    auVar79._0_4_ = fVar159;
    auVar79._8_4_ = auVar121._8_4_;
    auVar79._12_4_ = auVar121._12_4_;
    auVar24 = insertps(auVar79,auVar54,0x30);
    auVar91._4_4_ = auVar54._8_4_;
    auVar91._0_4_ = auVar54._4_4_;
    auVar91._8_4_ = auVar31._0_4_;
    auVar91._12_4_ = auVar31._4_4_;
    auVar24 = insertps(auVar24,auVar31,0x20);
    *(int *)*pauVar2 = auVar24._0_4_;
    *(int *)(*pauVar2 + 4) = auVar24._12_4_;
    *(int *)(*pauVar2 + 8) = auVar24._8_4_;
    *(int *)(*pauVar2 + 0xc) = auVar24._4_4_;
    auVar24 = blendps(auVar91,auVar121,4);
    *(int *)pauVar2[1] = auVar24._0_4_;
    *(int *)(pauVar2[1] + 4) = auVar24._12_4_;
    *(int *)(pauVar2[1] + 8) = auVar24._8_4_;
    *(int *)(pauVar2[1] + 0xc) = auVar24._4_4_;
    *(float *)pauVar2[2] = auVar31._8_4_;
    *(float *)(pauVar2[2] + 4) = auVar121._12_4_;
    *(float *)(pauVar2[2] + 8) = auVar54._12_4_;
    *(float *)(pauVar2[2] + 0xc) = auVar31._12_4_;
    puVar10 = (undefined4 *)(param_2 + uVar16 * 0xc);
    auVar24 = *(undefined1 (*) [16])(param_2 + uVar16 * 0xc);
    auVar167 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar16 * 0xc);
    puVar3 = (undefined4 *)(param_2 + 0x20 + uVar16 * 0xc);
    auVar77._0_4_ = auVar24._0_4_;
    auVar46 = insertps(auVar167,auVar24,0x8c);
    auVar77._4_4_ = auVar24._12_4_;
    auVar77._8_4_ = auVar167._8_4_;
    auVar77._12_4_ = puVar3[1];
    auVar122._4_4_ = auVar167._0_4_;
    auVar122._0_4_ = auVar24._4_4_;
    auVar122._8_4_ = auVar167._12_4_;
    auVar122._12_4_ = puVar3[2];
    auVar168._0_8_ = auVar46._0_8_;
    auVar168._8_4_ = *puVar3;
    auVar168._12_4_ = puVar3[3];
  }
  else {
    if ((bVar17 & 1) != 0) {
      *pfVar9 = fVar159;
    }
    if ((bVar17 & 2) != 0) {
      uVar129 = extractps(auVar121,1);
      *(undefined8 *)(pfVar9 + 4) = uVar129;
    }
    if ((bVar17 & 4) != 0) {
      uVar129 = extractps(auVar121,2);
      *(undefined8 *)(pfVar9 + 8) = uVar129;
    }
    if ((char)bVar17 < '\0') {
      uVar129 = extractps(auVar121,3);
      *(undefined8 *)(pfVar9 + 0xc) = uVar129;
    }
    if ((bVar17 & 1) != 0) {
      pfVar9[1] = auVar54._0_4_;
    }
    if ((bVar17 & 2) != 0) {
      uVar129 = extractps(auVar54,1);
      *(undefined8 *)(pfVar9 + 5) = uVar129;
    }
    if ((bVar17 & 4) != 0) {
      uVar129 = extractps(auVar54,2);
      *(undefined8 *)(pfVar9 + 9) = uVar129;
    }
    if ((char)bVar17 < '\0') {
      uVar129 = extractps(auVar54,3);
      *(undefined8 *)(pfVar9 + 0xd) = uVar129;
    }
    if ((bVar17 & 1) != 0) {
      pfVar9[2] = auVar31._0_4_;
    }
    if ((bVar17 & 2) != 0) {
      uVar129 = extractps(auVar31,1);
      *(undefined8 *)(pfVar9 + 6) = uVar129;
    }
    if ((bVar17 & 4) != 0) {
      uVar129 = extractps(auVar31,2);
      *(undefined8 *)(pfVar9 + 10) = uVar129;
    }
    if ((char)bVar17 < '\0') {
      uVar129 = extractps(auVar31,3);
      *(undefined8 *)(pfVar9 + 0xe) = uVar129;
    }
    if ((bVar17 & 1) != 0) {
      pfVar9[3] = auVar133._0_4_;
    }
    if ((bVar17 & 2) != 0) {
      uVar129 = extractps(auVar133,1);
      *(undefined8 *)(pfVar9 + 7) = uVar129;
    }
    if ((bVar17 & 4) != 0) {
      uVar129 = extractps(auVar133,2);
      *(undefined8 *)(pfVar9 + 0xb) = uVar129;
    }
    if ((char)bVar17 < '\0') {
      uVar129 = extractps(auVar133,3);
      *(undefined8 *)(pfVar9 + 0xf) = uVar129;
    }
    if ((bVar17 & 1) != 0) {
      *(float *)*pauVar2 = fVar159;
    }
    if ((bVar17 & 2) != 0) {
      uVar129 = extractps(auVar121,1);
      *(undefined8 *)(*pauVar2 + 0xc) = uVar129;
    }
    if ((bVar17 & 4) != 0) {
      uVar129 = extractps(auVar121,2);
      *(undefined8 *)(pauVar2[1] + 8) = uVar129;
    }
    if ((char)bVar17 < '\0') {
      uVar129 = extractps(auVar121,3);
      *(undefined8 *)(pauVar2[2] + 4) = uVar129;
    }
    if ((bVar17 & 1) != 0) {
      *(float *)(*pauVar2 + 4) = auVar54._0_4_;
    }
    if ((bVar17 & 2) != 0) {
      uVar129 = extractps(auVar54,1);
      *(undefined8 *)pauVar2[1] = uVar129;
    }
    if ((bVar17 & 4) != 0) {
      uVar129 = extractps(auVar54,2);
      *(undefined8 *)(pauVar2[1] + 0xc) = uVar129;
    }
    if ((char)bVar17 < '\0') {
      uVar129 = extractps(auVar54,3);
      *(undefined8 *)(pauVar2[2] + 8) = uVar129;
    }
    if ((bVar17 & 1) != 0) {
      *(float *)(*pauVar2 + 8) = auVar31._0_4_;
    }
    if ((bVar17 & 2) != 0) {
      uVar129 = extractps(auVar31,1);
      *(undefined8 *)(pauVar2[1] + 4) = uVar129;
    }
    if ((bVar17 & 4) != 0) {
      uVar129 = extractps(auVar31,2);
      *(undefined8 *)pauVar2[2] = uVar129;
    }
    if ((char)bVar17 < '\0') {
      uVar129 = extractps(auVar31,3);
      *(undefined8 *)(pauVar2[2] + 0xc) = uVar129;
    }
    auVar32._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar145._0_4_;
    auVar32._4_4_ = _UNK_150b50da4 & auVar145._4_4_;
    auVar32._8_4_ = _UNK_150b50da8 & auVar145._8_4_;
    auVar32._12_4_ = _UNK_150b50dac & auVar145._12_4_;
    lVar20 = extractps(auVar32,1);
    lVar15 = extractps(auVar32,2);
    lVar19 = extractps(auVar32,3);
    puVar10 = (undefined4 *)(param_2 + uVar16 * 0xc);
    auVar24 = insertps(ZEXT416(*(uint *)(param_2 + uVar16 * 0xc)),
                       *(undefined4 *)(lVar20 + (longlong)puVar10),0x10);
    auVar24 = insertps(auVar24,*(undefined4 *)(lVar15 + (longlong)puVar10),0x20);
    auVar77 = insertps(auVar24,*(undefined4 *)(lVar19 + (longlong)puVar10),0x30);
    auVar33._4_4_ = _UNK_150b50db4;
    auVar33._0_4_ = ___xmm_000000280000001c0000001000000004;
    auVar33._8_4_ = _UNK_150b50db8;
    auVar33._12_4_ = _UNK_150b50dbc;
    auVar33 = auVar33 & auVar145;
    auVar24 = insertps(ZEXT416(*(uint *)((ulonglong)auVar33._0_4_ + (longlong)puVar10)),
                       *(undefined4 *)((ulonglong)auVar33._4_4_ + (longlong)puVar10),0x10);
    auVar24 = insertps(auVar24,*(undefined4 *)((ulonglong)auVar33._8_4_ + (longlong)puVar10),0x20);
    auVar122 = insertps(auVar24,*(undefined4 *)((ulonglong)auVar33._12_4_ + (longlong)puVar10),0x30)
    ;
    auVar34._4_4_ = _UNK_150b50dc4;
    auVar34._0_4_ = ___xmm_0000002c000000200000001400000008;
    auVar34._8_4_ = _UNK_150b50dc8;
    auVar34._12_4_ = _UNK_150b50dcc;
    auVar34 = auVar34 & auVar145;
    auVar24 = insertps(ZEXT416(*(uint *)((ulonglong)auVar34._0_4_ + (longlong)puVar10)),
                       *(undefined4 *)((ulonglong)auVar34._4_4_ + (longlong)puVar10),0x10);
    auVar24 = insertps(auVar24,*(undefined4 *)((ulonglong)auVar34._8_4_ + (longlong)puVar10),0x20);
    auVar168 = insertps(auVar24,*(undefined4 *)((ulonglong)auVar34._12_4_ + (longlong)puVar10),0x30)
    ;
  }
  fVar64 = auVar77._0_4_ * fVar69;
  fVar67 = auVar77._4_4_ * fVar69;
  fVar38 = auVar77._8_4_ * fVar69;
  fVar39 = auVar77._12_4_ * fVar69;
  fVar40 = auVar122._0_4_ * fVar158;
  fVar43 = auVar122._4_4_ * fVar158;
  fVar62 = auVar122._8_4_ * fVar158;
  fVar65 = auVar122._12_4_ * fVar158;
  fVar159 = auVar168._0_4_ * fVar86;
  fVar160 = auVar168._4_4_ * fVar86;
  fVar161 = auVar168._8_4_ * fVar86;
  fVar162 = auVar168._12_4_ * fVar86;
  fVar68 = fVar40 * fVar41 - fVar64 * fVar70;
  fVar71 = fVar43 * fVar41 - fVar67 * fVar70;
  fVar72 = fVar62 * fVar41 - fVar38 * fVar70;
  fVar81 = fVar65 * fVar41 - fVar39 * fVar70;
  fVar138 = fVar159 * fVar70 - fVar40 * fVar84;
  fVar140 = fVar160 * fVar70 - fVar43 * fVar84;
  fVar141 = fVar161 * fVar70 - fVar62 * fVar84;
  fVar142 = fVar162 * fVar70 - fVar65 * fVar84;
  fVar82 = fVar64 * fVar84 - fVar159 * fVar41;
  fVar83 = fVar67 * fVar84 - fVar160 * fVar41;
  fVar85 = fVar38 * fVar84 - fVar161 * fVar41;
  fVar99 = fVar39 * fVar84 - fVar162 * fVar41;
  fVar138 = fVar138 + fVar138;
  fVar140 = fVar140 + fVar140;
  fVar141 = fVar141 + fVar141;
  fVar142 = fVar142 + fVar142;
  fVar82 = fVar82 + fVar82;
  fVar83 = fVar83 + fVar83;
  fVar85 = fVar85 + fVar85;
  fVar99 = fVar99 + fVar99;
  fVar68 = fVar68 + fVar68;
  fVar71 = fVar71 + fVar71;
  fVar72 = fVar72 + fVar72;
  fVar81 = fVar81 + fVar81;
  pauVar2 = (undefined1 (*) [16])(param_4 + uVar16 * 0xc);
  if ((bVar11 & 0xf) == 0) {
    auVar24 = *pauVar2;
    auVar167 = pauVar2[1];
    auVar112._0_4_ = auVar24._0_4_;
    auVar46 = insertps(auVar167,auVar24,0x8c);
    auVar112._4_4_ = auVar24._12_4_;
    auVar112._8_4_ = auVar167._8_4_;
    auVar112._12_4_ = *(undefined4 *)(pauVar2[2] + 4);
    auVar55._4_4_ = auVar167._0_4_;
    auVar55._0_4_ = auVar24._4_4_;
    auVar55._8_4_ = auVar167._12_4_;
    auVar55._12_4_ = *(undefined4 *)(pauVar2[2] + 8);
    auVar35._0_8_ = auVar46._0_8_;
    auVar35._8_4_ = *(undefined4 *)pauVar2[2];
    auVar35._12_4_ = *(undefined4 *)(pauVar2[2] + 0xc);
  }
  else {
    auVar24 = insertps(ZEXT416(*(uint *)*pauVar2),
                       *(undefined4 *)(*pauVar2 + (_UNK_150b50da4 & auVar145._4_4_)),0x10);
    auVar24 = insertps(auVar24,*(undefined4 *)(*pauVar2 + (_UNK_150b50da8 & auVar145._8_4_)),0x20);
    auVar112 = insertps(auVar24,*(undefined4 *)(*pauVar2 + (_UNK_150b50dac & auVar145._12_4_)),0x30)
    ;
    auVar24 = insertps(ZEXT416(*(uint *)(*pauVar2 +
                                        (___xmm_000000280000001c0000001000000004 & auVar145._0_4_)))
                       ,*(undefined4 *)(*pauVar2 + (_UNK_150b50db4 & auVar145._4_4_)),0x10);
    auVar24 = insertps(auVar24,*(undefined4 *)(*pauVar2 + (_UNK_150b50db8 & auVar145._8_4_)),0x20);
    auVar55 = insertps(auVar24,*(undefined4 *)(*pauVar2 + (_UNK_150b50dbc & auVar145._12_4_)),0x30);
    auVar24 = insertps(ZEXT416(*(uint *)(*pauVar2 +
                                        (___xmm_0000002c000000200000001400000008 & auVar145._0_4_)))
                       ,*(undefined4 *)(*pauVar2 + (_UNK_150b50dc4 & auVar145._4_4_)),0x10);
    auVar24 = insertps(auVar24,*(undefined4 *)(*pauVar2 + (_UNK_150b50dc8 & auVar145._8_4_)),0x20);
    auVar35 = insertps(auVar24,*(undefined4 *)(*pauVar2 + (_UNK_150b50dcc & auVar145._12_4_)),0x30);
  }
  fVar108 = auVar112._0_4_ * fVar69;
  fVar115 = auVar112._4_4_ * fVar69;
  fVar116 = auVar112._8_4_ * fVar69;
  fVar69 = auVar112._12_4_ * fVar69;
  fVar44 = auVar55._0_4_ * fVar158;
  fVar63 = auVar55._4_4_ * fVar158;
  fVar66 = auVar55._8_4_ * fVar158;
  fVar158 = auVar55._12_4_ * fVar158;
  fVar156 = auVar35._0_4_ * fVar86;
  fVar157 = auVar35._4_4_ * fVar86;
  fVar163 = auVar35._8_4_ * fVar86;
  fVar86 = auVar35._12_4_ * fVar86;
  fVar88 = fVar44 * fVar41 - fVar108 * fVar70;
  fVar96 = fVar63 * fVar41 - fVar115 * fVar70;
  fVar97 = fVar66 * fVar41 - fVar116 * fVar70;
  fVar98 = fVar158 * fVar41 - fVar69 * fVar70;
  fVar128 = fVar156 * fVar70 - fVar44 * fVar84;
  fVar135 = fVar157 * fVar70 - fVar63 * fVar84;
  fVar136 = fVar163 * fVar70 - fVar66 * fVar84;
  fVar137 = fVar86 * fVar70 - fVar158 * fVar84;
  fVar100 = fVar108 * fVar84 - fVar156 * fVar41;
  fVar105 = fVar115 * fVar84 - fVar157 * fVar41;
  fVar106 = fVar116 * fVar84 - fVar163 * fVar41;
  fVar107 = fVar69 * fVar84 - fVar86 * fVar41;
  fVar128 = fVar128 + fVar128;
  fVar135 = fVar135 + fVar135;
  fVar136 = fVar136 + fVar136;
  fVar137 = fVar137 + fVar137;
  fVar100 = fVar100 + fVar100;
  fVar105 = fVar105 + fVar105;
  fVar106 = fVar106 + fVar106;
  fVar107 = fVar107 + fVar107;
  fVar88 = fVar88 + fVar88;
  fVar96 = fVar96 + fVar96;
  fVar97 = fVar97 + fVar97;
  fVar98 = fVar98 + fVar98;
  fVar108 = (fVar23 + (fVar70 * fVar88 - fVar100 * fVar84) + fVar87 * fVar128 + fVar108) - fVar42;
  fVar115 = (fVar23 + (fVar70 * fVar96 - fVar105 * fVar84) + fVar87 * fVar135 + fVar115) - fVar42;
  auVar92._0_8_ = CONCAT44(fVar115,fVar108);
  auVar92._8_4_ =
       (fVar23 + (fVar70 * fVar97 - fVar106 * fVar84) + fVar87 * fVar136 + fVar116) - fVar42;
  auVar92._12_4_ =
       (fVar23 + (fVar70 * fVar98 - fVar107 * fVar84) + fVar87 * fVar137 + fVar69) - fVar42;
  auVar103._0_4_ =
       (fVar126 + (fVar84 * fVar128 - fVar88 * fVar41) + fVar87 * fVar100 + fVar44) - fVar61;
  auVar103._4_4_ =
       (fVar126 + (fVar84 * fVar135 - fVar96 * fVar41) + fVar87 * fVar105 + fVar63) - fVar61;
  auVar103._8_4_ =
       (fVar126 + (fVar84 * fVar136 - fVar97 * fVar41) + fVar87 * fVar106 + fVar66) - fVar61;
  auVar103._12_4_ =
       (fVar126 + (fVar84 * fVar137 - fVar98 * fVar41) + fVar87 * fVar107 + fVar158) - fVar61;
  auVar113._0_4_ =
       (fVar127 + (fVar41 * fVar100 - fVar128 * fVar70) + fVar87 * fVar88 + fVar156) - fVar22;
  auVar113._4_4_ =
       (fVar127 + (fVar41 * fVar105 - fVar135 * fVar70) + fVar87 * fVar96 + fVar157) - fVar22;
  auVar113._8_4_ =
       (fVar127 + (fVar41 * fVar106 - fVar136 * fVar70) + fVar87 * fVar97 + fVar163) - fVar22;
  auVar113._12_4_ =
       (fVar127 + (fVar41 * fVar107 - fVar137 * fVar70) + fVar87 * fVar98 + fVar86) - fVar22;
  if ((bVar11 & 0xf) == 0) {
    auVar36._8_4_ = auVar92._8_4_;
    auVar36._0_8_ = auVar92._0_8_;
    auVar36._12_4_ = auVar92._12_4_;
    auVar24 = insertps(auVar36,auVar103,0x30);
    auVar56._4_4_ = auVar103._8_4_;
    auVar56._0_4_ = auVar103._4_4_;
    auVar56._8_4_ = auVar113._0_4_;
    auVar56._12_4_ = auVar113._4_4_;
    auVar24 = insertps(auVar24,auVar113,0x20);
    *(int *)*pauVar2 = auVar24._0_4_;
    *(int *)(*pauVar2 + 4) = auVar24._12_4_;
    *(int *)(*pauVar2 + 8) = auVar24._8_4_;
    *(int *)(*pauVar2 + 0xc) = auVar24._4_4_;
    auVar24 = blendps(auVar56,auVar92,4);
    *(int *)pauVar2[1] = auVar24._0_4_;
    *(int *)(pauVar2[1] + 4) = auVar24._12_4_;
    *(int *)(pauVar2[1] + 8) = auVar24._8_4_;
    *(int *)(pauVar2[1] + 0xc) = auVar24._4_4_;
    *(float *)pauVar2[2] = auVar113._8_4_;
    *(float *)(pauVar2[2] + 4) = auVar92._12_4_;
    *(float *)(pauVar2[2] + 8) = auVar103._12_4_;
    *(float *)(pauVar2[2] + 0xc) = auVar113._12_4_;
    auVar24 = *(undefined1 (*) [16])(param_7 + uVar16 * 0xc);
    auVar167 = *(undefined1 (*) [16])(param_7 + 0x10 + uVar16 * 0xc);
    puVar3 = (undefined4 *)(param_7 + 0x20 + uVar16 * 0xc);
    auVar146._0_4_ = auVar24._0_4_;
    auVar46 = insertps(auVar167,auVar24,0x8c);
    auVar146._4_4_ = auVar24._12_4_;
    auVar146._8_4_ = auVar167._8_4_;
    auVar146._12_4_ = puVar3[1];
    auVar150._4_4_ = auVar167._0_4_;
    auVar150._0_4_ = auVar24._4_4_;
    auVar150._8_4_ = auVar167._12_4_;
    auVar150._12_4_ = puVar3[2];
    auVar153._0_8_ = auVar46._0_8_;
    auVar153._8_4_ = *puVar3;
    auVar153._12_4_ = puVar3[3];
  }
  else {
    if ((bVar17 & 1) != 0) {
      *(float *)*pauVar2 = fVar108;
    }
    if ((bVar17 & 2) != 0) {
      uVar129 = extractps(auVar92,1);
      *(undefined8 *)(*pauVar2 + 0xc) = uVar129;
    }
    if ((bVar17 & 4) != 0) {
      uVar129 = extractps(auVar92,2);
      *(undefined8 *)(pauVar2[1] + 8) = uVar129;
    }
    if ((char)bVar17 < '\0') {
      uVar129 = extractps(auVar92,3);
      *(undefined8 *)(pauVar2[2] + 4) = uVar129;
    }
    if ((bVar17 & 1) != 0) {
      *(float *)(*pauVar2 + 4) = auVar103._0_4_;
    }
    if ((bVar17 & 2) != 0) {
      uVar129 = extractps(auVar103,1);
      *(undefined8 *)pauVar2[1] = uVar129;
    }
    if ((bVar17 & 4) != 0) {
      uVar129 = extractps(auVar103,2);
      *(undefined8 *)(pauVar2[1] + 0xc) = uVar129;
    }
    if ((char)bVar17 < '\0') {
      uVar129 = extractps(auVar103,3);
      *(undefined8 *)(pauVar2[2] + 8) = uVar129;
    }
    if ((bVar17 & 1) != 0) {
      *(float *)(*pauVar2 + 8) = auVar113._0_4_;
    }
    if ((bVar17 & 2) != 0) {
      uVar129 = extractps(auVar113,1);
      *(undefined8 *)(pauVar2[1] + 4) = uVar129;
    }
    if ((bVar17 & 4) != 0) {
      uVar129 = extractps(auVar113,2);
      *(undefined8 *)pauVar2[2] = uVar129;
    }
    if ((char)bVar17 < '\0') {
      uVar129 = extractps(auVar113,3);
      *(undefined8 *)(pauVar2[2] + 0xc) = uVar129;
    }
    lVar20 = param_7 + uVar16 * 0xc;
    auVar24 = insertps(ZEXT416(*(uint *)(param_7 + uVar16 * 0xc)),
                       *(undefined4 *)((ulonglong)(_UNK_150b50da4 & auVar145._4_4_) + lVar20),0x10);
    auVar24 = insertps(auVar24,*(undefined4 *)
                                ((ulonglong)(_UNK_150b50da8 & auVar145._8_4_) + lVar20),0x20);
    auVar146 = insertps(auVar24,*(undefined4 *)
                                 ((ulonglong)(_UNK_150b50dac & auVar145._12_4_) + lVar20),0x30);
    auVar24 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (___xmm_000000280000001c0000001000000004 & auVar145._0_4_)
                                        + lVar20)),
                       *(undefined4 *)((ulonglong)(_UNK_150b50db4 & auVar145._4_4_) + lVar20),0x10);
    auVar24 = insertps(auVar24,*(undefined4 *)
                                ((ulonglong)(_UNK_150b50db8 & auVar145._8_4_) + lVar20),0x20);
    auVar150 = insertps(auVar24,*(undefined4 *)
                                 ((ulonglong)(_UNK_150b50dbc & auVar145._12_4_) + lVar20),0x30);
    auVar24 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (___xmm_0000002c000000200000001400000008 & auVar145._0_4_)
                                        + lVar20)),
                       *(undefined4 *)((ulonglong)(_UNK_150b50dc4 & auVar145._4_4_) + lVar20),0x10);
    auVar24 = insertps(auVar24,*(undefined4 *)
                                ((ulonglong)(_UNK_150b50dc8 & auVar145._8_4_) + lVar20),0x20);
    auVar153 = insertps(auVar24,*(undefined4 *)
                                 ((ulonglong)(_UNK_150b50dcc & auVar145._12_4_) + lVar20),0x30);
  }
  fVar23 = fVar64 + fVar87 * fVar138 + (fVar70 * fVar68 - fVar82 * fVar84);
  fVar126 = fVar67 + fVar87 * fVar140 + (fVar70 * fVar71 - fVar83 * fVar84);
  auVar80._0_8_ = CONCAT44(fVar126,fVar23);
  auVar80._8_4_ = fVar38 + fVar87 * fVar141 + (fVar70 * fVar72 - fVar85 * fVar84);
  auVar80._12_4_ = fVar39 + fVar87 * fVar142 + (fVar70 * fVar81 - fVar99 * fVar84);
  fVar69 = fVar40 + fVar87 * fVar82 + (fVar84 * fVar138 - fVar68 * fVar41);
  fVar158 = fVar43 + fVar87 * fVar83 + (fVar84 * fVar140 - fVar71 * fVar41);
  auVar125._0_8_ = CONCAT44(fVar158,fVar69);
  auVar125._8_4_ = fVar62 + fVar87 * fVar85 + (fVar84 * fVar141 - fVar72 * fVar41);
  auVar125._12_4_ = fVar65 + fVar87 * fVar99 + (fVar84 * fVar142 - fVar81 * fVar41);
  fVar86 = fVar159 + fVar87 * fVar68 + (fVar41 * fVar82 - fVar138 * fVar70);
  fVar84 = fVar160 + fVar87 * fVar71 + (fVar41 * fVar83 - fVar140 * fVar70);
  auVar171._0_8_ = CONCAT44(fVar84,fVar86);
  auVar171._8_4_ = fVar161 + fVar87 * fVar72 + (fVar41 * fVar85 - fVar141 * fVar70);
  auVar171._12_4_ = fVar162 + fVar87 * fVar81 + (fVar41 * fVar99 - fVar142 * fVar70);
  auVar147._0_4_ = auVar146._0_4_ - fVar108;
  auVar147._4_4_ = auVar146._4_4_ - fVar115;
  auVar147._8_4_ = auVar146._8_4_ - auVar92._8_4_;
  auVar147._12_4_ = auVar146._12_4_ - auVar92._12_4_;
  auVar151._0_4_ = auVar150._0_4_ - auVar103._0_4_;
  auVar151._4_4_ = auVar150._4_4_ - auVar103._4_4_;
  auVar151._8_4_ = auVar150._8_4_ - auVar103._8_4_;
  auVar151._12_4_ = auVar150._12_4_ - auVar103._12_4_;
  auVar154._0_4_ = auVar153._0_4_ - auVar113._0_4_;
  auVar154._4_4_ = auVar153._4_4_ - auVar113._4_4_;
  auVar154._8_4_ = auVar153._8_4_ - auVar113._8_4_;
  auVar154._12_4_ = auVar153._12_4_ - auVar113._12_4_;
  auVar57._4_4_ = param_10;
  auVar57._0_4_ = param_10;
  auVar57._8_4_ = param_10;
  auVar57._12_4_ = param_10;
  auVar24 = divps(auVar147,auVar57);
  auVar167 = divps(auVar151,auVar57);
  auVar46 = divps(auVar154,auVar57);
  pfVar9 = (float *)(param_5 + uVar16 * 0xc);
  fVar41 = auVar24._0_4_;
  fVar70 = auVar24._12_4_;
  fVar87 = auVar167._0_4_;
  fVar127 = auVar167._12_4_;
  fVar42 = auVar46._0_4_;
  fVar61 = auVar46._4_4_;
  fVar22 = auVar46._8_4_;
  fVar64 = auVar46._12_4_;
  if ((bVar11 & 0xf) == 0) {
    auVar50 = insertps(auVar24,auVar167,0x30);
    auVar58._0_8_ = auVar167._4_8_;
    auVar58._8_4_ = fVar42;
    auVar58._12_4_ = fVar61;
    auVar46 = insertps(auVar50,auVar46,0x20);
    *pfVar9 = auVar46._0_4_;
    pfVar9[1] = auVar46._12_4_;
    pfVar9[2] = auVar46._8_4_;
    pfVar9[3] = auVar46._4_4_;
    auVar46 = blendps(auVar58,auVar24,4);
    pfVar9[4] = auVar46._0_4_;
    pfVar9[5] = auVar46._12_4_;
    pfVar9[6] = auVar46._8_4_;
    pfVar9[7] = auVar46._4_4_;
    pfVar9[8] = fVar22;
    pfVar9[9] = fVar70;
    pfVar9[10] = fVar127;
    pfVar9[0xb] = fVar64;
  }
  else {
    if ((bVar17 & 1) != 0) {
      *pfVar9 = fVar41;
    }
    if ((bVar17 & 2) != 0) {
      uVar129 = extractps(auVar24,1);
      *(undefined8 *)(pfVar9 + 3) = uVar129;
    }
    if ((bVar17 & 4) != 0) {
      uVar129 = extractps(auVar24,2);
      *(undefined8 *)(pfVar9 + 6) = uVar129;
    }
    if ((char)bVar17 < '\0') {
      uVar129 = extractps(auVar24,3);
      *(undefined8 *)(pfVar9 + 9) = uVar129;
    }
    if ((bVar17 & 1) != 0) {
      pfVar9[1] = fVar87;
    }
    if ((bVar17 & 2) != 0) {
      uVar129 = extractps(auVar167,1);
      *(undefined8 *)(pfVar9 + 4) = uVar129;
    }
    if ((bVar17 & 4) != 0) {
      uVar129 = extractps(auVar167,2);
      *(undefined8 *)(pfVar9 + 7) = uVar129;
    }
    if ((char)bVar17 < '\0') {
      uVar129 = extractps(auVar167,3);
      *(undefined8 *)(pfVar9 + 10) = uVar129;
    }
    if ((bVar17 & 1) != 0) {
      pfVar9[2] = fVar42;
    }
    if ((bVar17 & 2) != 0) {
      uVar129 = extractps(auVar46,1);
      *(undefined8 *)(pfVar9 + 5) = uVar129;
    }
    if ((bVar17 & 4) != 0) {
      uVar129 = extractps(auVar46,2);
      *(undefined8 *)(pfVar9 + 8) = uVar129;
    }
    if ((char)bVar17 < '\0') {
      uVar129 = extractps(auVar46,3);
      *(undefined8 *)(pfVar9 + 0xb) = uVar129;
    }
  }
  fVar23 = fVar23 - fVar41;
  fVar126 = fVar126 - auVar24._4_4_;
  fVar43 = auVar80._8_4_ - auVar24._8_4_;
  fVar62 = auVar80._12_4_ - fVar70;
  fVar69 = fVar69 - fVar87;
  fVar158 = fVar158 - auVar167._4_4_;
  fVar67 = auVar125._8_4_ - auVar167._8_4_;
  fVar38 = auVar125._12_4_ - fVar127;
  fVar86 = fVar86 - fVar42;
  fVar84 = fVar84 - fVar61;
  fVar39 = auVar171._8_4_ - fVar22;
  fVar40 = auVar171._12_4_ - fVar64;
  auVar104._0_4_ = fVar86 * fVar86 + fVar69 * fVar69 + fVar23 * fVar23;
  auVar104._4_4_ = fVar84 * fVar84 + fVar158 * fVar158 + fVar126 * fVar126;
  auVar104._8_4_ = fVar39 * fVar39 + fVar67 * fVar67 + fVar43 * fVar43;
  auVar104._12_4_ = fVar40 * fVar40 + fVar38 * fVar38 + fVar62 * fVar62;
  auVar134._4_4_ = param_12;
  auVar134._0_4_ = param_12;
  auVar134._8_4_ = param_12;
  auVar134._12_4_ = param_12;
  auVar114._0_4_ = -(uint)(param_12 < auVar104._0_4_ && bVar21);
  auVar114._4_4_ = -(uint)(param_12 < auVar104._4_4_ && bVar4);
  auVar114._8_4_ = -(uint)(param_12 < auVar104._8_4_ && bVar5);
  auVar114._12_4_ = -(uint)(param_12 < auVar104._12_4_ && bVar6);
  iVar18 = movmskps((int)pfVar9,auVar114);
  if (iVar18 == 0) goto LAB_140d0d8ff;
  bVar8 = (char)((char)iVar18 << 4) >> 4;
  auVar46 = divps(auVar134,auVar104);
  auVar46 = sqrtps(auVar104,auVar46);
  fVar65 = auVar46._0_4_;
  fVar68 = auVar46._4_4_;
  fVar71 = auVar46._8_4_;
  fVar72 = auVar46._12_4_;
  auVar148._0_8_ = CONCAT44(auVar24._4_4_ + fVar126 * fVar68,fVar41 + fVar23 * fVar65);
  auVar148._8_4_ = auVar24._8_4_ + fVar43 * fVar71;
  auVar148._12_4_ = fVar70 + fVar62 * fVar72;
  auVar93._8_4_ = auVar80._8_4_;
  auVar93._0_8_ = auVar80._0_8_;
  auVar93._12_4_ = auVar80._12_4_;
  bVar21 = (bVar8 & 1) != 0;
  if (bVar21) {
    auVar93._8_4_ = auVar148._8_4_;
    auVar93._0_8_ = auVar148._0_8_;
    auVar93._12_4_ = auVar148._12_4_;
  }
  auVar152._0_8_ = CONCAT44(auVar167._4_4_ + fVar158 * fVar68,fVar87 + fVar69 * fVar65);
  auVar152._8_4_ = auVar167._8_4_ + fVar67 * fVar71;
  auVar152._12_4_ = fVar127 + fVar38 * fVar72;
  auVar155._0_8_ = CONCAT44(fVar61 + fVar84 * fVar68,fVar42 + fVar86 * fVar65);
  auVar155._8_4_ = fVar22 + fVar39 * fVar71;
  auVar155._12_4_ = fVar64 + fVar40 * fVar72;
  auVar59._8_4_ = auVar125._8_4_;
  auVar59._0_8_ = auVar125._0_8_;
  auVar59._12_4_ = auVar125._12_4_;
  auVar37._8_4_ = auVar171._8_4_;
  auVar37._0_8_ = auVar171._0_8_;
  auVar37._12_4_ = auVar171._12_4_;
  if (bVar21) {
    auVar59._8_4_ = auVar152._8_4_;
    auVar59._0_8_ = auVar152._0_8_;
    auVar59._12_4_ = auVar152._12_4_;
    auVar37._8_4_ = auVar155._8_4_;
    auVar37._0_8_ = auVar155._0_8_;
    auVar37._12_4_ = auVar155._12_4_;
    auVar24 = blendps(auVar80,auVar93,1);
    if ((bVar8 & 2) != 0) goto LAB_140d0d9d5;
LAB_140d0d870:
    auVar123 = blendps(auVar125,auVar59,1);
    auVar169 = blendps(auVar171,auVar37,1);
    auVar24 = blendps(auVar24,auVar24,2);
    auVar167 = auVar123;
    auVar46 = auVar169;
    if ((bVar8 & 4) == 0) goto LAB_140d0d8a3;
LAB_140d0da14:
    auVar95._8_4_ = auVar148._8_4_;
    auVar95._0_8_ = auVar148._0_8_;
    auVar95._12_4_ = auVar148._12_4_;
    auVar167 = blendps(auVar167,auVar123,2);
    auVar124._8_4_ = auVar152._8_4_;
    auVar124._0_8_ = auVar152._0_8_;
    auVar124._12_4_ = auVar152._12_4_;
    auVar46 = blendps(auVar46,auVar169,2);
    auVar170._8_4_ = auVar155._8_4_;
    auVar170._0_8_ = auVar155._0_8_;
    auVar170._12_4_ = auVar155._12_4_;
    auVar24 = blendps(auVar24,auVar95,4);
    if (-1 < (char)bVar8) goto LAB_140d0da4e;
LAB_140d0d8d1:
    auVar167 = blendps(auVar167,auVar124,4);
    if ((char)bVar8 < '\0') goto LAB_140d0d8dd;
LAB_140d0da5e:
    auVar46 = blendps(auVar46,auVar170,4);
    auVar152 = auVar167;
  }
  else {
    auVar24 = blendps(auVar80,auVar93,1);
    if ((bVar8 & 2) == 0) goto LAB_140d0d870;
LAB_140d0d9d5:
    auVar94._8_4_ = auVar148._8_4_;
    auVar94._0_8_ = auVar148._0_8_;
    auVar94._12_4_ = auVar148._12_4_;
    auVar167 = blendps(auVar125,auVar59,1);
    auVar123._8_4_ = auVar152._8_4_;
    auVar123._0_8_ = auVar152._0_8_;
    auVar123._12_4_ = auVar152._12_4_;
    auVar46 = blendps(auVar171,auVar37,1);
    auVar169._8_4_ = auVar155._8_4_;
    auVar169._0_8_ = auVar155._0_8_;
    auVar169._12_4_ = auVar155._12_4_;
    auVar24 = blendps(auVar24,auVar94,2);
    if ((bVar8 & 4) != 0) goto LAB_140d0da14;
LAB_140d0d8a3:
    auVar124 = blendps(auVar167,auVar123,2);
    auVar170 = blendps(auVar46,auVar169,2);
    auVar24 = blendps(auVar24,auVar24,4);
    auVar167 = auVar124;
    auVar46 = auVar170;
    if ((char)bVar8 < '\0') goto LAB_140d0d8d1;
LAB_140d0da4e:
    auVar167 = blendps(auVar167,auVar124,4);
    auVar148 = auVar24;
    if (-1 < (char)bVar8) goto LAB_140d0da5e;
LAB_140d0d8dd:
    auVar46 = blendps(auVar46,auVar170,4);
  }
  if (-1 < (char)bVar8) {
    auVar155 = auVar46;
  }
  auVar80 = blendps(auVar24,auVar148,8);
  auVar125 = blendps(auVar167,auVar152,8);
  auVar171 = blendps(auVar46,auVar155,8);
LAB_140d0d8ff:
  if ((bVar11 & 0xf) == 0) {
    auVar24 = insertps(auVar80,auVar125,0x30);
    auVar60._0_8_ = auVar125._4_8_;
    auVar60._8_4_ = auVar171._0_4_;
    auVar60._12_4_ = auVar171._4_4_;
    auVar24 = insertps(auVar24,auVar171,0x20);
    *puVar10 = auVar24._0_4_;
    puVar10[1] = auVar24._12_4_;
    puVar10[2] = auVar24._8_4_;
    puVar10[3] = auVar24._4_4_;
    auVar24 = blendps(auVar60,auVar80,4);
    puVar10 = (undefined4 *)(param_2 + 0x10 + uVar16 * 0xc);
    *puVar10 = auVar24._0_4_;
    puVar10[1] = auVar24._12_4_;
    puVar10[2] = auVar24._8_4_;
    puVar10[3] = auVar24._4_4_;
    puVar10 = (undefined4 *)(param_2 + 0x20 + uVar16 * 0xc);
    *puVar10 = auVar171._8_4_;
    puVar10[1] = auVar80._12_4_;
    puVar10[2] = auVar125._12_4_;
    puVar10[3] = auVar171._12_4_;
  }
  else {
    if ((bVar17 & 1) != 0) {
      *puVar10 = auVar80._0_4_;
    }
    if ((bVar17 & 2) != 0) {
      uVar129 = extractps(auVar80,1);
      *(undefined8 *)(param_2 + 0xc + uVar16 * 0xc) = uVar129;
    }
    if ((bVar17 & 4) != 0) {
      uVar129 = extractps(auVar80,2);
      *(undefined8 *)(param_2 + 0x18 + uVar16 * 0xc) = uVar129;
    }
    if ((char)bVar17 < '\0') {
      uVar129 = extractps(auVar80,3);
      *(undefined8 *)(param_2 + 0x24 + uVar16 * 0xc) = uVar129;
    }
    if ((bVar17 & 1) != 0) {
      *(int *)(param_2 + 4 + uVar16 * 0xc) = auVar125._0_4_;
    }
    if ((bVar17 & 2) != 0) {
      uVar129 = extractps(auVar125,1);
      *(undefined8 *)(param_2 + 0x10 + uVar16 * 0xc) = uVar129;
    }
    if ((bVar17 & 4) != 0) {
      uVar129 = extractps(auVar125,2);
      *(undefined8 *)(param_2 + 0x1c + uVar16 * 0xc) = uVar129;
    }
    if ((char)bVar17 < '\0') {
      uVar129 = extractps(auVar125,3);
      *(undefined8 *)(param_2 + 0x28 + uVar16 * 0xc) = uVar129;
    }
    if ((bVar17 & 1) != 0) {
      *(int *)(param_2 + 8 + uVar16 * 0xc) = auVar171._0_4_;
    }
    if ((bVar17 & 2) != 0) {
      uVar129 = extractps(auVar171,1);
      *(undefined8 *)(param_2 + 0x14 + uVar16 * 0xc) = uVar129;
    }
    if ((bVar17 & 4) != 0) {
      uVar129 = extractps(auVar171,2);
      *(undefined8 *)(param_2 + 0x20 + uVar16 * 0xc) = uVar129;
    }
    if ((char)bVar17 < '\0') {
      uVar129 = extractps(auVar171,3);
      *(undefined8 *)(param_2 + 0x2c + uVar16 * 0xc) = uVar129;
    }
  }
  return;
}

// ApplyPreSimulationTransformsAndClampVelocity___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunu_3E_un_3C_s_5B__c_unFTransform3f_5D__3E_REFs_5B__c_unFVector3f_5D_CunfCuniCuniCunf_sse4 @ 140d0dbd0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPreSimulationTransformsAndClampVelocity___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_Cunf_3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_Cunu_3E_un_3C_s_5B__c_unFTransform3f_5D__3E_REFs_5B__c_unFVector3f_5D_CunfCuniCuniCunf_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,longlong param_8,longlong param_9,float *param_10,
               undefined4 param_11,int param_12,int param_13,float param_14)

{
  float *pfVar1;
  undefined1 (*pauVar2) [16];
  undefined4 *puVar3;
  uint *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  byte bVar11;
  int iVar12;
  longlong lVar13;
  undefined4 *puVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  longlong unaff_RBP;
  longlong lVar18;
  byte bVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  float *pfVar23;
  byte bVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  bool bVar28;
  float fVar29;
  float fVar47;
  float fVar48;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar49;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar30;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar50;
  float fVar51;
  float fVar63;
  float fVar65;
  undefined1 auVar52 [16];
  float fVar64;
  float fVar66;
  float fVar68;
  float fVar69;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar67;
  float fVar70;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar76;
  float fVar86;
  undefined8 uVar77;
  float fVar87;
  undefined1 auVar78 [16];
  float fVar88;
  float fVar89;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar90;
  float fVar96;
  float fVar97;
  float fVar98;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  float fVar109;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  float fVar110;
  float fVar116;
  float fVar117;
  undefined1 auVar111 [16];
  float fVar118;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  float fVar119;
  float fVar120;
  float fVar127;
  float fVar129;
  undefined1 auVar121 [16];
  float fVar131;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  float fVar128;
  float fVar130;
  float fVar132;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  float fVar153;
  float fVar160;
  float fVar161;
  undefined1 auVar154 [16];
  float fVar162;
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  float fVar170;
  float fVar171;
  float fVar172;
  float fVar173;
  float fVar174;
  float fVar175;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined1 local_128 [8];
  float fStack_120;
  float fStack_11c;
  undefined1 local_118 [16];
  undefined1 auVar136 [16];
  
  uVar22 = param_13 - param_12;
  uVar17 = uVar22 + 3;
  if (-1 < (int)uVar22) {
    uVar17 = uVar22;
  }
  iVar9 = ((uVar17 & 0xfffffffc) - uVar22) + param_13;
  if (param_12 < iVar9) {
    local_118._4_4_ = param_11;
    local_118._0_4_ = param_11;
    local_118._8_4_ = param_11;
    local_118._12_4_ = param_11;
    lVar26 = (longlong)param_12;
    unaff_RBP = lVar26 * 0xc;
    lVar10 = param_3 + 0x20;
    pfVar23 = (float *)(lVar26 * 0x10 + 0x30 + param_1);
    lVar25 = param_2 + 0x20;
    lVar21 = param_4 + 0x20;
    lVar20 = param_7 + 0x20;
    lVar15 = param_5 + 0x20;
    param_12 = param_12 << 2;
    local_128._4_4_ = param_14;
    local_128._0_4_ = param_14;
    fStack_120 = param_14;
    fStack_11c = param_14;
    do {
      auVar31 = pmulld(*(undefined1 (*) [16])(param_8 + param_12),
                       ___xmm_00000006000000060000000600000006);
      lVar18 = (longlong)auVar31._0_4_;
      lVar13 = (longlong)auVar31._4_4_;
      lVar16 = (longlong)auVar31._8_4_;
      lVar27 = (longlong)auVar31._12_4_;
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + lVar18 * 8)),
                         *(undefined4 *)(param_9 + lVar13 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + lVar16 * 8),0x20);
      auVar33 = insertps(auVar32,*(undefined4 *)(param_9 + lVar27 * 8),0x30);
      fVar89 = auVar33._4_4_;
      fVar109 = auVar33._12_4_;
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + 4 + lVar18 * 8)),
                         *(undefined4 *)(param_9 + 4 + lVar13 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + 4 + lVar16 * 8),0x20);
      auVar121 = insertps(auVar32,*(undefined4 *)(param_9 + 4 + lVar27 * 8),0x30);
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + 8 + lVar18 * 8)),
                         *(undefined4 *)(param_9 + 8 + lVar13 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + 8 + lVar16 * 8),0x20);
      auVar111 = insertps(auVar32,*(undefined4 *)(param_9 + 8 + lVar27 * 8),0x30);
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + 0xc + lVar18 * 8)),
                         *(undefined4 *)(param_9 + 0xc + lVar13 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + 0xc + lVar16 * 8),0x20);
      auVar99 = insertps(auVar32,*(undefined4 *)(param_9 + 0xc + lVar27 * 8),0x30);
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + 0x10 + lVar18 * 8)),
                         *(undefined4 *)(param_9 + 0x10 + lVar13 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + 0x10 + lVar16 * 8),0x20);
      auVar34 = insertps(auVar32,*(undefined4 *)(param_9 + 0x10 + lVar27 * 8),0x30);
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + 0x18 + lVar18 * 8)),
                         *(undefined4 *)(param_9 + 0x18 + lVar13 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + 0x18 + lVar16 * 8),0x20);
      auVar163 = insertps(auVar32,*(undefined4 *)(param_9 + 0x18 + lVar27 * 8),0x30);
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + 0x20 + lVar18 * 8)),
                         *(undefined4 *)(param_9 + 0x20 + lVar13 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + 0x20 + lVar16 * 8),0x20);
      auVar35 = insertps(auVar32,*(undefined4 *)(param_9 + 0x20 + lVar27 * 8),0x30);
      fVar170 = auVar35._0_4_;
      fVar175 = auVar35._12_4_;
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + 0x24 + lVar18 * 8)),
                         *(undefined4 *)(param_9 + 0x24 + lVar13 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + 0x24 + lVar16 * 8),0x20);
      auVar167 = insertps(auVar32,*(undefined4 *)(param_9 + 0x24 + lVar27 * 8),0x30);
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + 0x28 + lVar18 * 8)),
                         *(undefined4 *)(param_9 + 0x28 + lVar13 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + 0x28 + lVar16 * 8),0x20);
      auVar169 = insertps(auVar32,*(undefined4 *)(param_9 + 0x28 + lVar27 * 8),0x30);
      auVar32 = *(undefined1 (*) [16])(lVar10 + -0x20 + unaff_RBP);
      auVar53 = *(undefined1 (*) [16])(lVar10 + -0x10 + unaff_RBP);
      pfVar1 = (float *)(lVar10 + unaff_RBP);
      auVar78 = insertps(auVar53,auVar32,0x8c);
      fVar133 = auVar32._0_4_ * fVar170;
      fVar171 = auVar35._4_4_;
      fVar137 = auVar32._12_4_ * fVar171;
      fVar173 = auVar35._8_4_;
      fVar140 = auVar53._8_4_ * fVar173;
      fVar142 = pfVar1[1] * fVar175;
      fVar51 = auVar167._0_4_;
      fVar50 = auVar32._4_4_ * fVar51;
      fVar64 = auVar167._4_4_;
      fVar63 = auVar53._0_4_ * fVar64;
      fVar66 = auVar167._8_4_;
      fVar65 = auVar53._12_4_ * fVar66;
      fVar69 = auVar167._12_4_;
      fVar68 = pfVar1[2] * fVar69;
      fVar135 = auVar169._0_4_;
      fVar76 = auVar78._0_4_ * fVar135;
      fVar139 = auVar169._4_4_;
      fVar86 = auVar78._4_4_ * fVar139;
      fVar141 = auVar169._8_4_;
      fVar87 = *pfVar1 * fVar141;
      fVar143 = auVar169._12_4_;
      fVar88 = pfVar1[3] * fVar143;
      fVar67 = auVar33._0_4_;
      fVar70 = auVar33._8_4_;
      fVar119 = auVar121._0_4_;
      fVar127 = auVar121._4_4_;
      fVar129 = auVar121._8_4_;
      fVar131 = auVar121._12_4_;
      fVar120 = auVar111._0_4_;
      fVar128 = auVar111._4_4_;
      fVar130 = auVar111._8_4_;
      fVar132 = auVar111._12_4_;
      fVar29 = fVar67 * fVar50 - fVar119 * fVar133;
      fVar47 = fVar89 * fVar63 - fVar127 * fVar137;
      fVar48 = fVar70 * fVar65 - fVar129 * fVar140;
      fVar49 = fVar109 * fVar68 - fVar131 * fVar142;
      fVar153 = fVar119 * fVar76 - fVar120 * fVar50;
      fVar160 = fVar127 * fVar86 - fVar128 * fVar63;
      fVar161 = fVar129 * fVar87 - fVar130 * fVar65;
      fVar162 = fVar131 * fVar88 - fVar132 * fVar68;
      fVar90 = fVar120 * fVar133 - fVar67 * fVar76;
      fVar96 = fVar128 * fVar137 - fVar89 * fVar86;
      fVar97 = fVar130 * fVar140 - fVar70 * fVar87;
      fVar98 = fVar132 * fVar142 - fVar109 * fVar88;
      fVar153 = fVar153 + fVar153;
      fVar160 = fVar160 + fVar160;
      fVar161 = fVar161 + fVar161;
      fVar162 = fVar162 + fVar162;
      fVar90 = fVar90 + fVar90;
      fVar96 = fVar96 + fVar96;
      fVar97 = fVar97 + fVar97;
      fVar98 = fVar98 + fVar98;
      fVar29 = fVar29 + fVar29;
      fVar47 = fVar47 + fVar47;
      fVar48 = fVar48 + fVar48;
      fVar49 = fVar49 + fVar49;
      fVar110 = auVar99._0_4_;
      fVar116 = auVar99._4_4_;
      fVar117 = auVar99._12_4_;
      fVar118 = auVar99._8_4_;
      fVar30 = param_10[2];
      fVar134 = ((fVar67 * fVar90 - fVar153 * fVar119) + fVar110 * fVar29 + fVar76 + auVar163._0_4_)
                - fVar30;
      fVar138 = ((fVar89 * fVar96 - fVar160 * fVar127) + fVar116 * fVar47 + fVar86 + auVar163._4_4_)
                - fVar30;
      auVar136._0_8_ = CONCAT44(fVar138,fVar134);
      auVar136._8_4_ =
           ((fVar70 * fVar97 - fVar161 * fVar129) + fVar118 * fVar48 + fVar87 + auVar163._8_4_) -
           fVar30;
      auVar136._12_4_ =
           ((fVar109 * fVar98 - fVar162 * fVar131) + fVar117 * fVar49 + fVar88 + auVar163._12_4_) -
           fVar30;
      puVar14 = (undefined4 *)(param_6 + param_12);
      uVar8 = *puVar14;
      fVar87 = (float)puVar14[2];
      fVar88 = (float)puVar14[3];
      auVar78._8_4_ = fVar138;
      auVar78._0_8_ = auVar136._0_8_;
      auVar78._12_4_ = puVar14[1];
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + 0x14 + lVar18 * 8)),
                         *(undefined4 *)(param_9 + 0x14 + lVar13 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + 0x14 + lVar16 * 8),0x20);
      auVar33 = insertps(auVar32,*(undefined4 *)(param_9 + 0x14 + lVar27 * 8),0x30);
      local_1b8 = auVar34._0_4_;
      fStack_1b4 = auVar34._4_4_;
      fStack_1b0 = auVar34._8_4_;
      fStack_1ac = auVar34._12_4_;
      fVar76 = *param_10;
      fVar133 = ((fVar119 * fVar29 - fVar90 * fVar120) + fVar110 * fVar153 + fVar133 + local_1b8) -
                fVar76;
      fVar137 = ((fVar127 * fVar47 - fVar96 * fVar128) + fVar116 * fVar160 + fVar137 + fStack_1b4) -
                fVar76;
      auVar155._0_8_ = CONCAT44(fVar137,fVar133);
      auVar155._8_4_ =
           ((fVar129 * fVar48 - fVar97 * fVar130) + fVar118 * fVar161 + fVar140 + fStack_1b0) -
           fVar76;
      auVar155._12_4_ =
           ((fVar131 * fVar49 - fVar98 * fVar132) + fVar117 * fVar162 + fVar142 + fStack_1ac) -
           fVar76;
      fVar86 = param_10[1];
      auVar145._0_4_ =
           ((fVar120 * fVar153 - fVar29 * fVar67) + fVar110 * fVar90 + fVar50 + auVar33._0_4_) -
           fVar86;
      auVar145._4_4_ =
           ((fVar128 * fVar160 - fVar47 * fVar89) + fVar116 * fVar96 + fVar63 + auVar33._4_4_) -
           fVar86;
      auVar145._8_4_ =
           ((fVar130 * fVar161 - fVar48 * fVar70) + fVar118 * fVar97 + fVar65 + auVar33._8_4_) -
           fVar86;
      auVar145._12_4_ =
           ((fVar132 * fVar162 - fVar49 * fVar109) + fVar117 * fVar98 + fVar68 + auVar33._12_4_) -
           fVar86;
      auVar32._8_4_ = fVar137;
      auVar32._0_8_ = auVar155._0_8_;
      auVar32._12_4_ = auVar145._4_4_;
      uVar77 = CONCAT44(auVar145._0_4_,fVar133);
      *(undefined8 *)(pfVar23 + -0xc) = uVar77;
      *(ulonglong *)(pfVar23 + -10) = CONCAT44(uVar8,fVar134);
      *(longlong *)(pfVar23 + -8) = auVar32._8_8_;
      *(longlong *)(pfVar23 + -6) = auVar78._8_8_;
      pfVar23[-4] = auVar155._8_4_;
      pfVar23[-3] = auVar145._8_4_;
      pfVar23[-2] = auVar136._8_4_;
      pfVar23[-1] = fVar87;
      *pfVar23 = auVar155._12_4_;
      pfVar23[1] = auVar145._12_4_;
      pfVar23[2] = auVar136._12_4_;
      pfVar23[3] = fVar88;
      auVar53._8_4_ = auVar155._8_4_;
      auVar53._0_8_ = auVar155._0_8_;
      auVar53._12_4_ = auVar155._12_4_;
      auVar32 = insertps(auVar53,auVar145,0x30);
      auVar99._4_4_ = auVar145._8_4_;
      auVar99._0_4_ = auVar145._4_4_;
      auVar99._8_4_ = fVar134;
      auVar99._12_4_ = fVar138;
      auVar32 = insertps(auVar32,auVar136,0x20);
      puVar14 = (undefined4 *)(lVar10 + -0x20 + unaff_RBP);
      *puVar14 = auVar32._0_4_;
      puVar14[1] = auVar32._12_4_;
      puVar14[2] = auVar32._8_4_;
      puVar14[3] = auVar32._4_4_;
      auVar32 = blendps(auVar99,auVar155,4);
      puVar14 = (undefined4 *)(lVar10 + -0x10 + unaff_RBP);
      *puVar14 = auVar32._0_4_;
      puVar14[1] = auVar32._12_4_;
      puVar14[2] = auVar32._8_4_;
      puVar14[3] = auVar32._4_4_;
      pfVar1 = (float *)(lVar10 + unaff_RBP);
      *pfVar1 = auVar136._8_4_;
      pfVar1[1] = auVar155._12_4_;
      pfVar1[2] = auVar145._12_4_;
      pfVar1[3] = auVar136._12_4_;
      auVar32 = *(undefined1 (*) [16])(lVar25 + -0x20 + unaff_RBP);
      auVar53 = *(undefined1 (*) [16])(lVar25 + -0x10 + unaff_RBP);
      pfVar1 = (float *)(lVar25 + unaff_RBP);
      auVar34 = insertps(auVar53,auVar32,0x8c);
      fVar140 = auVar32._0_4_ * fVar170;
      fVar142 = auVar32._12_4_ * fVar171;
      fVar153 = auVar53._8_4_ * fVar173;
      fVar160 = pfVar1[1] * fVar175;
      fVar133 = auVar32._4_4_ * fVar51;
      fVar134 = auVar53._0_4_ * fVar64;
      fVar137 = auVar53._12_4_ * fVar66;
      fVar138 = pfVar1[2] * fVar69;
      fVar87 = fVar67 * fVar133 - fVar119 * fVar140;
      fVar88 = fVar89 * fVar134 - fVar127 * fVar142;
      fVar29 = fVar70 * fVar137 - fVar129 * fVar153;
      fVar47 = fVar109 * fVar138 - fVar131 * fVar160;
      fVar65 = auVar34._0_4_ * fVar135;
      fVar68 = auVar34._4_4_ * fVar139;
      fVar97 = *pfVar1 * fVar141;
      fVar98 = pfVar1[3] * fVar143;
      fVar161 = fVar119 * fVar65 - fVar120 * fVar133;
      fVar162 = fVar127 * fVar68 - fVar128 * fVar134;
      fVar172 = fVar129 * fVar97 - fVar130 * fVar137;
      fVar174 = fVar131 * fVar98 - fVar132 * fVar138;
      fVar48 = fVar120 * fVar140 - fVar67 * fVar65;
      fVar49 = fVar128 * fVar142 - fVar89 * fVar68;
      fVar50 = fVar130 * fVar153 - fVar70 * fVar97;
      fVar63 = fVar132 * fVar160 - fVar109 * fVar98;
      fVar161 = fVar161 + fVar161;
      fVar162 = fVar162 + fVar162;
      fVar172 = fVar172 + fVar172;
      fVar174 = fVar174 + fVar174;
      fVar48 = fVar48 + fVar48;
      fVar49 = fVar49 + fVar49;
      fVar50 = fVar50 + fVar50;
      fVar63 = fVar63 + fVar63;
      fVar87 = fVar87 + fVar87;
      fVar88 = fVar88 + fVar88;
      fVar29 = fVar29 + fVar29;
      fVar47 = fVar47 + fVar47;
      fVar90 = (fVar67 * fVar48 - fVar161 * fVar119) + fVar110 * fVar87 + fVar65;
      fVar96 = (fVar89 * fVar49 - fVar162 * fVar127) + fVar116 * fVar88 + fVar68;
      auVar167._0_8_ = CONCAT44(fVar96,fVar90);
      auVar167._8_4_ = (fVar70 * fVar50 - fVar172 * fVar129) + fVar118 * fVar29 + fVar97;
      auVar167._12_4_ = (fVar109 * fVar63 - fVar174 * fVar131) + fVar117 * fVar47 + fVar98;
      fVar97 = (fVar119 * fVar87 - fVar48 * fVar120) + fVar110 * fVar161 + fVar140;
      fVar98 = (fVar127 * fVar88 - fVar49 * fVar128) + fVar116 * fVar162 + fVar142;
      auVar154._0_8_ = CONCAT44(fVar98,fVar97);
      auVar154._8_4_ = (fVar129 * fVar29 - fVar50 * fVar130) + fVar118 * fVar172 + fVar153;
      auVar154._12_4_ = (fVar131 * fVar47 - fVar63 * fVar132) + fVar117 * fVar174 + fVar160;
      fVar65 = (fVar120 * fVar161 - fVar87 * fVar67) + fVar110 * fVar48 + fVar133;
      fVar68 = (fVar128 * fVar162 - fVar88 * fVar89) + fVar116 * fVar49 + fVar134;
      auVar144._0_8_ = CONCAT44(fVar68,fVar65);
      auVar144._8_4_ = (fVar130 * fVar172 - fVar29 * fVar70) + fVar118 * fVar50 + fVar137;
      auVar144._12_4_ = (fVar132 * fVar174 - fVar47 * fVar109) + fVar117 * fVar63 + fVar138;
      auVar32 = *(undefined1 (*) [16])(lVar21 + -0x20 + unaff_RBP);
      auVar53 = *(undefined1 (*) [16])(lVar21 + -0x10 + unaff_RBP);
      pfVar1 = (float *)(lVar21 + unaff_RBP);
      auVar34 = insertps(auVar53,auVar32,0x8c);
      fVar170 = auVar32._0_4_ * fVar170;
      fVar171 = auVar32._12_4_ * fVar171;
      fVar173 = auVar53._8_4_ * fVar173;
      fVar175 = pfVar1[1] * fVar175;
      fVar51 = auVar32._4_4_ * fVar51;
      fVar64 = auVar53._0_4_ * fVar64;
      fVar66 = auVar53._12_4_ * fVar66;
      fVar69 = pfVar1[2] * fVar69;
      fVar135 = auVar34._0_4_ * fVar135;
      fVar139 = auVar34._4_4_ * fVar139;
      fVar141 = *pfVar1 * fVar141;
      fVar143 = pfVar1[3] * fVar143;
      fVar87 = fVar67 * fVar51 - fVar119 * fVar170;
      fVar88 = fVar89 * fVar64 - fVar127 * fVar171;
      fVar29 = fVar70 * fVar66 - fVar129 * fVar173;
      fVar47 = fVar109 * fVar69 - fVar131 * fVar175;
      fVar48 = fVar119 * fVar135 - fVar120 * fVar51;
      fVar49 = fVar127 * fVar139 - fVar128 * fVar64;
      fVar50 = fVar129 * fVar141 - fVar130 * fVar66;
      fVar63 = fVar131 * fVar143 - fVar132 * fVar69;
      fVar133 = fVar120 * fVar170 - fVar67 * fVar135;
      fVar134 = fVar128 * fVar171 - fVar89 * fVar139;
      fVar137 = fVar130 * fVar173 - fVar70 * fVar141;
      fVar138 = fVar132 * fVar175 - fVar109 * fVar143;
      fVar48 = fVar48 + fVar48;
      fVar49 = fVar49 + fVar49;
      fVar50 = fVar50 + fVar50;
      fVar63 = fVar63 + fVar63;
      fVar133 = fVar133 + fVar133;
      fVar134 = fVar134 + fVar134;
      fVar137 = fVar137 + fVar137;
      fVar138 = fVar138 + fVar138;
      fVar87 = fVar87 + fVar87;
      fVar88 = fVar88 + fVar88;
      fVar29 = fVar29 + fVar29;
      fVar47 = fVar47 + fVar47;
      fVar170 = ((fVar119 * fVar87 - fVar133 * fVar120) + fVar110 * fVar48 + fVar170 + local_1b8) -
                fVar76;
      fVar171 = ((fVar127 * fVar88 - fVar134 * fVar128) + fVar116 * fVar49 + fVar171 + fStack_1b4) -
                fVar76;
      auVar122._0_8_ = CONCAT44(fVar171,fVar170);
      auVar122._8_4_ =
           ((fVar129 * fVar29 - fVar137 * fVar130) + fVar118 * fVar50 + fVar173 + fStack_1b0) -
           fVar76;
      auVar122._12_4_ =
           ((fVar131 * fVar47 - fVar138 * fVar132) + fVar117 * fVar63 + fVar175 + fStack_1ac) -
           fVar76;
      auVar168._0_4_ =
           ((fVar120 * fVar48 - fVar87 * fVar67) + fVar110 * fVar133 + fVar51 + auVar33._0_4_) -
           fVar86;
      auVar168._4_4_ =
           ((fVar128 * fVar49 - fVar88 * fVar89) + fVar116 * fVar134 + fVar64 + auVar33._4_4_) -
           fVar86;
      auVar168._8_4_ =
           ((fVar130 * fVar50 - fVar29 * fVar70) + fVar118 * fVar137 + fVar66 + auVar33._8_4_) -
           fVar86;
      auVar168._12_4_ =
           ((fVar132 * fVar63 - fVar47 * fVar109) + fVar117 * fVar138 + fVar69 + auVar33._12_4_) -
           fVar86;
      auVar164._0_4_ =
           ((fVar67 * fVar133 - fVar48 * fVar119) + fVar110 * fVar87 + fVar135 + auVar163._0_4_) -
           fVar30;
      auVar164._4_4_ =
           ((fVar89 * fVar134 - fVar49 * fVar127) + fVar116 * fVar88 + fVar139 + auVar163._4_4_) -
           fVar30;
      auVar164._8_4_ =
           ((fVar70 * fVar137 - fVar50 * fVar129) + fVar118 * fVar29 + fVar141 + auVar163._8_4_) -
           fVar30;
      auVar164._12_4_ =
           ((fVar109 * fVar138 - fVar63 * fVar131) + fVar117 * fVar47 + fVar143 + auVar163._12_4_) -
           fVar30;
      auVar33._8_4_ = auVar122._8_4_;
      auVar33._0_8_ = auVar122._0_8_;
      auVar33._12_4_ = auVar122._12_4_;
      auVar32 = insertps(auVar33,auVar168,0x30);
      auVar32 = insertps(auVar32,auVar164,0x20);
      puVar14 = (undefined4 *)(lVar21 + -0x20 + unaff_RBP);
      *puVar14 = auVar32._0_4_;
      puVar14[1] = auVar32._12_4_;
      puVar14[2] = auVar32._8_4_;
      puVar14[3] = auVar32._4_4_;
      auVar34._4_4_ = auVar168._8_4_;
      auVar34._0_4_ = auVar168._4_4_;
      auVar34._8_4_ = auVar164._0_4_;
      auVar34._12_4_ = auVar164._4_4_;
      auVar32 = blendps(auVar34,auVar122,4);
      puVar14 = (undefined4 *)(lVar21 + -0x10 + unaff_RBP);
      *puVar14 = auVar32._0_4_;
      puVar14[1] = auVar32._12_4_;
      puVar14[2] = auVar32._8_4_;
      puVar14[3] = auVar32._4_4_;
      pfVar1 = (float *)(lVar21 + unaff_RBP);
      *pfVar1 = auVar164._8_4_;
      pfVar1[1] = auVar122._12_4_;
      pfVar1[2] = auVar168._12_4_;
      pfVar1[3] = auVar164._12_4_;
      auVar32 = *(undefined1 (*) [16])(lVar20 + -0x20 + unaff_RBP);
      auVar53 = *(undefined1 (*) [16])(lVar20 + -0x10 + unaff_RBP);
      pfVar1 = (float *)(lVar20 + unaff_RBP);
      auVar33 = insertps(auVar53,auVar32,0x8c);
      auVar111._0_4_ = auVar32._0_4_ - fVar170;
      auVar111._4_4_ = auVar32._12_4_ - fVar171;
      auVar111._8_4_ = auVar53._8_4_ - auVar122._8_4_;
      auVar111._12_4_ = pfVar1[1] - auVar122._12_4_;
      auVar121._0_4_ = auVar32._4_4_ - auVar168._0_4_;
      auVar121._4_4_ = auVar53._0_4_ - auVar168._4_4_;
      auVar121._8_4_ = auVar53._12_4_ - auVar168._8_4_;
      auVar121._12_4_ = pfVar1[2] - auVar168._12_4_;
      auVar35._0_4_ = auVar33._0_4_ - auVar164._0_4_;
      auVar35._4_4_ = auVar33._4_4_ - auVar164._4_4_;
      auVar35._8_4_ = *pfVar1 - auVar164._8_4_;
      auVar35._12_4_ = pfVar1[3] - auVar164._12_4_;
      auVar53 = divps(auVar111,local_118);
      auVar33 = divps(auVar121,local_118);
      auVar32 = divps(auVar35,local_118);
      fVar88 = auVar53._12_4_;
      auVar34 = insertps(auVar53,auVar33,0x30);
      fVar170 = auVar33._12_4_;
      fVar30 = auVar32._0_4_;
      fVar76 = auVar32._4_4_;
      fVar86 = auVar32._8_4_;
      fVar87 = auVar32._12_4_;
      auVar163._0_8_ = auVar33._4_8_;
      auVar163._8_4_ = fVar30;
      auVar163._12_4_ = fVar76;
      auVar32 = insertps(auVar34,auVar32,0x20);
      puVar14 = (undefined4 *)(lVar15 + -0x20 + unaff_RBP);
      *puVar14 = auVar32._0_4_;
      puVar14[1] = auVar32._12_4_;
      puVar14[2] = auVar32._8_4_;
      puVar14[3] = auVar32._4_4_;
      auVar32 = blendps(auVar163,auVar53,4);
      puVar14 = (undefined4 *)(lVar15 + -0x10 + unaff_RBP);
      *puVar14 = auVar32._0_4_;
      puVar14[1] = auVar32._12_4_;
      puVar14[2] = auVar32._8_4_;
      puVar14[3] = auVar32._4_4_;
      pfVar1 = (float *)(lVar15 + unaff_RBP);
      *pfVar1 = fVar86;
      pfVar1[1] = fVar88;
      pfVar1[2] = fVar170;
      pfVar1[3] = fVar87;
      fVar97 = fVar97 - auVar53._0_4_;
      fVar98 = fVar98 - auVar53._4_4_;
      fVar109 = auVar154._8_4_ - auVar53._8_4_;
      fVar175 = auVar154._12_4_ - fVar88;
      fVar65 = fVar65 - auVar33._0_4_;
      fVar68 = fVar68 - auVar33._4_4_;
      fVar29 = auVar144._8_4_ - auVar33._8_4_;
      fVar89 = auVar144._12_4_ - fVar170;
      fVar90 = fVar90 - fVar30;
      fVar96 = fVar96 - fVar76;
      fVar47 = auVar167._8_4_ - fVar86;
      fVar48 = auVar167._12_4_ - fVar87;
      auVar169._0_4_ = fVar90 * fVar90 + fVar65 * fVar65 + fVar97 * fVar97;
      auVar169._4_4_ = fVar96 * fVar96 + fVar68 * fVar68 + fVar98 * fVar98;
      auVar169._8_4_ = fVar47 * fVar47 + fVar29 * fVar29 + fVar109 * fVar109;
      auVar169._12_4_ = fVar48 * fVar48 + fVar89 * fVar89 + fVar175 * fVar175;
      auVar123._4_4_ = -(uint)(param_14 < auVar169._4_4_);
      auVar123._0_4_ = -(uint)(param_14 < auVar169._0_4_);
      auVar123._8_4_ = -(uint)(param_14 < auVar169._8_4_);
      auVar123._12_4_ = -(uint)(param_14 < auVar169._12_4_);
      iVar12 = movmskps(auVar31._4_4_,auVar123);
      if (iVar12 != 0) {
        bVar11 = (char)((char)iVar12 << 4) >> 4;
        auVar32 = divps(_local_128,auVar169);
        auVar32 = sqrtps(auVar169,auVar32);
        fVar49 = auVar32._0_4_;
        fVar50 = auVar32._4_4_;
        fVar51 = auVar32._8_4_;
        fVar63 = auVar32._12_4_;
        auVar31._0_8_ = CONCAT44(auVar53._4_4_ + fVar98 * fVar50,auVar53._0_4_ + fVar97 * fVar49);
        auVar31._8_4_ = auVar53._8_4_ + fVar109 * fVar51;
        auVar31._12_4_ = fVar88 + fVar175 * fVar63;
        auVar102._8_4_ = auVar154._8_4_;
        auVar102._0_8_ = auVar154._0_8_;
        auVar102._12_4_ = auVar154._12_4_;
        bVar28 = (bVar11 & 1) != 0;
        if (bVar28) {
          auVar102._8_4_ = auVar31._8_4_;
          auVar102._0_8_ = auVar31._0_8_;
          auVar102._12_4_ = auVar31._12_4_;
        }
        auVar71._0_8_ = CONCAT44(auVar33._4_4_ + fVar68 * fVar50,auVar33._0_4_ + fVar65 * fVar49);
        auVar71._8_4_ = auVar33._8_4_ + fVar29 * fVar51;
        auVar71._12_4_ = fVar170 + fVar89 * fVar63;
        auVar36._0_8_ = CONCAT44(fVar76 + fVar96 * fVar50,fVar30 + fVar90 * fVar49);
        auVar36._8_4_ = fVar86 + fVar47 * fVar51;
        auVar36._12_4_ = fVar87 + fVar48 * fVar63;
        auVar100._8_4_ = auVar144._8_4_;
        auVar100._0_8_ = auVar144._0_8_;
        auVar100._12_4_ = auVar144._12_4_;
        auVar79._8_4_ = auVar167._8_4_;
        auVar79._0_8_ = auVar167._0_8_;
        auVar79._12_4_ = auVar167._12_4_;
        if (bVar28) {
          auVar100._8_4_ = auVar71._8_4_;
          auVar100._0_8_ = auVar71._0_8_;
          auVar100._12_4_ = auVar71._12_4_;
          auVar79._8_4_ = auVar36._8_4_;
          auVar79._0_8_ = auVar36._0_8_;
          auVar79._12_4_ = auVar36._12_4_;
          auVar32 = blendps(auVar154,auVar102,1);
          if ((bVar11 & 2) != 0) goto LAB_140d0e55b;
LAB_140d0e4ae:
          auVar146 = blendps(auVar144,auVar100,1);
          auVar91 = blendps(auVar167,auVar79,1);
          auVar32 = blendps(auVar32,auVar32,2);
          auVar53 = auVar91;
          auVar33 = auVar146;
          if ((bVar11 & 4) == 0) goto LAB_140d0e4e3;
LAB_140d0e599:
          auVar104._8_4_ = auVar31._8_4_;
          auVar104._0_8_ = auVar31._0_8_;
          auVar104._12_4_ = auVar31._12_4_;
          auVar33 = blendps(auVar33,auVar146,2);
          auVar147._8_4_ = auVar71._8_4_;
          auVar147._0_8_ = auVar71._0_8_;
          auVar147._12_4_ = auVar71._12_4_;
          auVar53 = blendps(auVar53,auVar91,2);
          auVar92._8_4_ = auVar36._8_4_;
          auVar92._0_8_ = auVar36._0_8_;
          auVar92._12_4_ = auVar36._12_4_;
          auVar32 = blendps(auVar32,auVar104,4);
          if (-1 < (char)bVar11) goto LAB_140d0e5d1;
LAB_140d0e512:
          auVar33 = blendps(auVar33,auVar147,4);
          if ((char)bVar11 < '\0') goto LAB_140d0e51f;
LAB_140d0e5e2:
          auVar53 = blendps(auVar53,auVar92,4);
          auVar71 = auVar33;
        }
        else {
          auVar32 = blendps(auVar154,auVar102,1);
          if ((bVar11 & 2) == 0) goto LAB_140d0e4ae;
LAB_140d0e55b:
          auVar103._8_4_ = auVar31._8_4_;
          auVar103._0_8_ = auVar31._0_8_;
          auVar103._12_4_ = auVar31._12_4_;
          auVar33 = blendps(auVar144,auVar100,1);
          auVar146._8_4_ = auVar71._8_4_;
          auVar146._0_8_ = auVar71._0_8_;
          auVar146._12_4_ = auVar71._12_4_;
          auVar53 = blendps(auVar167,auVar79,1);
          auVar91._8_4_ = auVar36._8_4_;
          auVar91._0_8_ = auVar36._0_8_;
          auVar91._12_4_ = auVar36._12_4_;
          auVar32 = blendps(auVar32,auVar103,2);
          if ((bVar11 & 4) != 0) goto LAB_140d0e599;
LAB_140d0e4e3:
          auVar147 = blendps(auVar33,auVar146,2);
          auVar92 = blendps(auVar53,auVar91,2);
          auVar32 = blendps(auVar32,auVar32,4);
          auVar53 = auVar92;
          auVar33 = auVar147;
          if ((char)bVar11 < '\0') goto LAB_140d0e512;
LAB_140d0e5d1:
          auVar31 = auVar32;
          auVar33 = blendps(auVar33,auVar147,4);
          auVar32 = auVar31;
          if (-1 < (char)bVar11) goto LAB_140d0e5e2;
LAB_140d0e51f:
          auVar53 = blendps(auVar53,auVar92,4);
        }
        if (-1 < (char)bVar11) {
          auVar36 = auVar53;
        }
        auVar154 = blendps(auVar32,auVar31,8);
        auVar144 = blendps(auVar33,auVar71,8);
        auVar167 = blendps(auVar53,auVar36,8);
      }
      auVar32 = insertps(auVar154,auVar144,0x30);
      auVar52._0_8_ = auVar144._4_8_;
      auVar52._8_4_ = auVar167._0_4_;
      auVar52._12_4_ = auVar167._4_4_;
      auVar32 = insertps(auVar32,auVar167,0x20);
      puVar14 = (undefined4 *)(lVar25 + -0x20 + unaff_RBP);
      *puVar14 = auVar32._0_4_;
      puVar14[1] = auVar32._12_4_;
      puVar14[2] = auVar32._8_4_;
      puVar14[3] = auVar32._4_4_;
      auVar32 = blendps(auVar52,auVar154,4);
      puVar14 = (undefined4 *)(lVar25 + -0x10 + unaff_RBP);
      *puVar14 = auVar32._0_4_;
      puVar14[1] = auVar32._12_4_;
      puVar14[2] = auVar32._8_4_;
      puVar14[3] = auVar32._4_4_;
      puVar14 = (undefined4 *)(lVar25 + unaff_RBP);
      *puVar14 = auVar167._8_4_;
      puVar14[1] = auVar154._12_4_;
      puVar14[2] = auVar144._12_4_;
      puVar14[3] = auVar167._12_4_;
      lVar26 = lVar26 + 4;
      lVar10 = lVar10 + 0x30;
      pfVar23 = pfVar23 + 0x10;
      lVar25 = lVar25 + 0x30;
      lVar21 = lVar21 + 0x30;
      lVar20 = lVar20 + 0x30;
      lVar15 = lVar15 + 0x30;
      param_12 = param_12 + 0x10;
    } while (lVar26 < iVar9);
    param_12 = (int)lVar26;
  }
  if (param_13 <= param_12) {
    return;
  }
  auVar46._0_4_ = param_12 + (int)__xmm_00000003000000020000000100000000;
  auVar46._4_4_ = param_12 + __xmm_00000003000000020000000100000000._4_4_;
  auVar46._8_4_ = param_12 + _UNK_150631e08;
  auVar46._12_4_ = param_12 + _UNK_150631e0c;
  bVar28 = auVar46._0_4_ < param_13;
  auVar93._0_4_ = -(uint)bVar28;
  bVar5 = auVar46._4_4_ < param_13;
  auVar93._4_4_ = -(uint)bVar5;
  bVar6 = auVar46._8_4_ < param_13;
  auVar93._8_4_ = -(uint)bVar6;
  bVar7 = auVar46._12_4_ < param_13;
  auVar93._12_4_ = -(uint)bVar7;
  lVar10 = (longlong)(param_12 * 4);
  uVar17 = movmskps((int)unaff_RBP,auVar93);
  bVar24 = (char)((byte)uVar17 << 4) >> 4;
  bVar11 = (byte)uVar17 & 9;
  if (bVar11 == 9) {
    auVar46 = *(undefined1 (*) [16])(param_8 + lVar10);
  }
  else {
    puVar4 = (uint *)(param_8 + lVar10);
    if ((uVar17 & 1) != 0) {
      auVar46 = ZEXT416(*puVar4);
    }
    if ((uVar17 & 2) != 0) {
      auVar46._0_8_ = auVar46._0_8_ & 0xffffffff | (ulonglong)puVar4[1] << 0x20;
    }
    if ((uVar17 & 4) != 0) {
      auVar46._8_8_ = auVar46._8_8_ & 0xffffffff00000000 | (ulonglong)puVar4[2];
    }
    if ((uVar17 & 8) != 0) {
      auVar46._8_8_ = auVar46._8_8_ & 0xffffffff | (ulonglong)puVar4[3] << 0x20;
    }
  }
  auVar32 = pmulld(auVar46,___xmm_00000006000000060000000600000006);
  auVar32 = auVar32 & auVar93;
  lVar25 = param_9 + (longlong)auVar32._0_4_ * 8;
  lVar20 = param_9 + (longlong)auVar32._4_4_ * 8;
  lVar15 = param_9 + (longlong)auVar32._8_4_ * 8;
  lVar21 = param_9 + (longlong)auVar32._12_4_ * 8;
  auVar53 = insertps(ZEXT416(*(uint *)(param_9 + (longlong)auVar32._0_4_ * 8)),
                     *(undefined4 *)(param_9 + (longlong)auVar32._4_4_ * 8),0x10);
  auVar53 = insertps(auVar53,*(undefined4 *)(param_9 + (longlong)auVar32._8_4_ * 8),0x20);
  auVar121 = insertps(auVar53,*(undefined4 *)(param_9 + (longlong)auVar32._12_4_ * 8),0x30);
  auVar32 = ___xmm_00000004000000040000000400000004 & auVar93;
  auVar53 = insertps(ZEXT416(*(uint *)((ulonglong)auVar32._0_4_ + lVar25)),
                     *(undefined4 *)((ulonglong)auVar32._4_4_ + lVar20),0x10);
  auVar53 = insertps(auVar53,*(undefined4 *)((ulonglong)auVar32._8_4_ + lVar15),0x20);
  auVar32 = insertps(auVar53,*(undefined4 *)((ulonglong)auVar32._12_4_ + lVar21),0x30);
  auVar53 = ___xmm_00000008000000080000000800000008 & auVar93;
  auVar31 = insertps(ZEXT416(*(uint *)((ulonglong)auVar53._0_4_ + lVar25)),
                     *(undefined4 *)((ulonglong)auVar53._4_4_ + lVar20),0x10);
  auVar31 = insertps(auVar31,*(undefined4 *)((ulonglong)auVar53._8_4_ + lVar15),0x20);
  auVar35 = insertps(auVar31,*(undefined4 *)((ulonglong)auVar53._12_4_ + lVar21),0x30);
  auVar53 = ___xmm_0000000c0000000c0000000c0000000c & auVar93;
  auVar31 = insertps(ZEXT416(*(uint *)((ulonglong)auVar53._0_4_ + lVar25)),
                     *(undefined4 *)((ulonglong)auVar53._4_4_ + lVar20),0x10);
  auVar31 = insertps(auVar31,*(undefined4 *)((ulonglong)auVar53._8_4_ + lVar15),0x20);
  auVar167 = insertps(auVar31,*(undefined4 *)((ulonglong)auVar53._12_4_ + lVar21),0x30);
  auVar53 = ___xmm_00000010000000100000001000000010 & auVar93;
  auVar31 = insertps(ZEXT416(*(uint *)((ulonglong)auVar53._0_4_ + lVar25)),
                     *(undefined4 *)((ulonglong)auVar53._4_4_ + lVar20),0x10);
  auVar31 = insertps(auVar31,*(undefined4 *)((ulonglong)auVar53._8_4_ + lVar15),0x20);
  auVar34 = insertps(auVar31,*(undefined4 *)((ulonglong)auVar53._12_4_ + lVar21),0x30);
  auVar53 = ___xmm_00000014000000140000001400000014 & auVar93;
  auVar31 = insertps(ZEXT416(*(uint *)((ulonglong)auVar53._0_4_ + lVar25)),
                     *(undefined4 *)((ulonglong)auVar53._4_4_ + lVar20),0x10);
  auVar31 = insertps(auVar31,*(undefined4 *)((ulonglong)auVar53._8_4_ + lVar15),0x20);
  auVar99 = insertps(auVar31,*(undefined4 *)((ulonglong)auVar53._12_4_ + lVar21),0x30);
  auVar53 = ___xmm_00000018000000180000001800000018 & auVar93;
  auVar31 = insertps(ZEXT416(*(uint *)((ulonglong)auVar53._0_4_ + lVar25)),
                     *(undefined4 *)((ulonglong)auVar53._4_4_ + lVar20),0x10);
  auVar31 = insertps(auVar31,*(undefined4 *)((ulonglong)auVar53._8_4_ + lVar15),0x20);
  auVar111 = insertps(auVar31,*(undefined4 *)((ulonglong)auVar53._12_4_ + lVar21),0x30);
  auVar53 = ___xmm_00000020000000200000002000000020 & auVar93;
  auVar31 = insertps(ZEXT416(*(uint *)((ulonglong)auVar53._0_4_ + lVar25)),
                     *(undefined4 *)((ulonglong)auVar53._4_4_ + lVar20),0x10);
  auVar31 = insertps(auVar31,*(undefined4 *)((ulonglong)auVar53._8_4_ + lVar15),0x20);
  auVar78 = insertps(auVar31,*(undefined4 *)((ulonglong)auVar53._12_4_ + lVar21),0x30);
  auVar53 = ___xmm_00000024000000240000002400000024 & auVar93;
  auVar31 = insertps(ZEXT416(*(uint *)((ulonglong)auVar53._0_4_ + lVar25)),
                     *(undefined4 *)((ulonglong)auVar53._4_4_ + lVar20),0x10);
  auVar31 = insertps(auVar31,*(undefined4 *)((ulonglong)auVar53._8_4_ + lVar15),0x20);
  auVar53 = insertps(auVar31,*(undefined4 *)((ulonglong)auVar53._12_4_ + lVar21),0x30);
  auVar31 = ___xmm_00000028000000280000002800000028 & auVar93;
  auVar33 = insertps(ZEXT416(*(uint *)((ulonglong)auVar31._0_4_ + lVar25)),
                     *(undefined4 *)((ulonglong)auVar31._4_4_ + lVar20),0x10);
  auVar33 = insertps(auVar33,*(undefined4 *)((ulonglong)auVar31._8_4_ + lVar15),0x20);
  auVar31 = insertps(auVar33,*(undefined4 *)((ulonglong)auVar31._12_4_ + lVar21),0x30);
  lVar25 = (longlong)param_12;
  pauVar2 = (undefined1 (*) [16])(param_3 + lVar25 * 0xc);
  bVar19 = ~bVar24;
  if ((bVar19 & 0xf) == 0) {
    auVar33 = *pauVar2;
    auVar163 = pauVar2[1];
    auVar38._0_4_ = auVar33._0_4_;
    auVar169 = insertps(auVar163,auVar33,0x8c);
    auVar38._4_4_ = auVar33._12_4_;
    auVar38._8_4_ = auVar163._8_4_;
    auVar38._12_4_ = *(undefined4 *)(pauVar2[2] + 4);
    auVar55._4_4_ = auVar163._0_4_;
    auVar55._0_4_ = auVar33._4_4_;
    auVar55._8_4_ = auVar163._12_4_;
    auVar55._12_4_ = *(undefined4 *)(pauVar2[2] + 8);
    auVar81._0_8_ = auVar169._0_8_;
    auVar81._8_4_ = *(undefined4 *)pauVar2[2];
    auVar81._12_4_ = *(undefined4 *)(pauVar2[2] + 0xc);
  }
  else {
    auVar37._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar93._0_4_;
    auVar37._4_4_ = _UNK_150b50da4 & auVar93._4_4_;
    auVar37._8_4_ = _UNK_150b50da8 & auVar93._8_4_;
    auVar37._12_4_ = _UNK_150b50dac & auVar93._12_4_;
    lVar20 = extractps(auVar37,1);
    lVar21 = extractps(auVar37,2);
    lVar15 = extractps(auVar37,3);
    auVar33 = insertps(ZEXT416(*(uint *)*pauVar2),*(undefined4 *)(*pauVar2 + lVar20),0x10);
    auVar33 = insertps(auVar33,*(undefined4 *)(*pauVar2 + lVar21),0x20);
    auVar38 = insertps(auVar33,*(undefined4 *)(*pauVar2 + lVar15),0x30);
    auVar54._4_4_ = _UNK_150b50db4;
    auVar54._0_4_ = ___xmm_000000280000001c0000001000000004;
    auVar54._8_4_ = _UNK_150b50db8;
    auVar54._12_4_ = _UNK_150b50dbc;
    auVar54 = auVar54 & auVar93;
    auVar33 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar54._0_4_)),
                       *(undefined4 *)(*pauVar2 + auVar54._4_4_),0x10);
    auVar33 = insertps(auVar33,*(undefined4 *)(*pauVar2 + auVar54._8_4_),0x20);
    auVar55 = insertps(auVar33,*(undefined4 *)(*pauVar2 + auVar54._12_4_),0x30);
    auVar80._4_4_ = _UNK_150b50dc4;
    auVar80._0_4_ = ___xmm_0000002c000000200000001400000008;
    auVar80._8_4_ = _UNK_150b50dc8;
    auVar80._12_4_ = _UNK_150b50dcc;
    auVar80 = auVar80 & auVar93;
    auVar33 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar80._0_4_)),
                       *(undefined4 *)(*pauVar2 + auVar80._4_4_),0x10);
    auVar33 = insertps(auVar33,*(undefined4 *)(*pauVar2 + auVar80._8_4_),0x20);
    auVar81 = insertps(auVar33,*(undefined4 *)(*pauVar2 + auVar80._12_4_),0x30);
  }
  fVar68 = auVar78._0_4_;
  fVar30 = auVar38._0_4_ * fVar68;
  fVar69 = auVar78._4_4_;
  fVar76 = auVar38._4_4_ * fVar69;
  fVar90 = auVar78._8_4_;
  fVar86 = auVar38._8_4_ * fVar90;
  fVar171 = auVar78._12_4_;
  fVar87 = auVar38._12_4_ * fVar171;
  local_1c8 = auVar53._0_4_;
  fStack_1c4 = auVar53._4_4_;
  fStack_1c0 = auVar53._8_4_;
  fStack_1bc = auVar53._12_4_;
  fVar88 = auVar55._0_4_ * local_1c8;
  fVar170 = auVar55._4_4_ * fStack_1c4;
  fVar29 = auVar55._8_4_ * fStack_1c0;
  fVar89 = auVar55._12_4_ * fStack_1bc;
  local_1d8 = auVar31._0_4_;
  fStack_1d4 = auVar31._4_4_;
  fStack_1d0 = auVar31._8_4_;
  fStack_1cc = auVar31._12_4_;
  fVar49 = auVar81._0_4_ * local_1d8;
  fVar50 = auVar81._4_4_ * fStack_1d4;
  fVar63 = auVar81._8_4_ * fStack_1d0;
  fVar65 = auVar81._12_4_ * fStack_1cc;
  fVar127 = auVar121._0_4_;
  fVar129 = auVar121._4_4_;
  fVar131 = auVar121._8_4_;
  fVar133 = auVar121._12_4_;
  local_1b8 = auVar32._0_4_;
  fStack_1b4 = auVar32._4_4_;
  fStack_1b0 = auVar32._8_4_;
  fStack_1ac = auVar32._12_4_;
  fVar47 = auVar35._0_4_;
  fVar48 = auVar35._4_4_;
  fVar109 = auVar35._8_4_;
  fVar175 = auVar35._12_4_;
  fVar96 = fVar127 * fVar88 - local_1b8 * fVar30;
  fVar173 = fVar129 * fVar170 - fStack_1b4 * fVar76;
  fVar97 = fVar131 * fVar29 - fStack_1b0 * fVar86;
  fVar98 = fVar133 * fVar89 - fStack_1ac * fVar87;
  fVar120 = local_1b8 * fVar49 - fVar47 * fVar88;
  fVar128 = fStack_1b4 * fVar50 - fVar48 * fVar170;
  fVar130 = fStack_1b0 * fVar63 - fVar109 * fVar29;
  fVar132 = fStack_1ac * fVar65 - fVar175 * fVar89;
  fVar110 = fVar47 * fVar30 - fVar127 * fVar49;
  fVar116 = fVar48 * fVar76 - fVar129 * fVar50;
  fVar117 = fVar109 * fVar86 - fVar131 * fVar63;
  fVar118 = fVar175 * fVar87 - fVar133 * fVar65;
  fVar120 = fVar120 + fVar120;
  fVar128 = fVar128 + fVar128;
  fVar130 = fVar130 + fVar130;
  fVar132 = fVar132 + fVar132;
  fVar110 = fVar110 + fVar110;
  fVar116 = fVar116 + fVar116;
  fVar117 = fVar117 + fVar117;
  fVar118 = fVar118 + fVar118;
  fVar96 = fVar96 + fVar96;
  fVar173 = fVar173 + fVar173;
  fVar97 = fVar97 + fVar97;
  fVar98 = fVar98 + fVar98;
  fVar134 = auVar167._0_4_;
  fVar135 = auVar167._4_4_;
  fVar137 = auVar167._12_4_;
  fVar119 = auVar167._8_4_;
  auVar148._0_4_ = fVar134 * fVar120 + fVar30;
  auVar148._4_4_ = fVar135 * fVar128 + fVar76;
  auVar148._8_4_ = fVar119 * fVar130 + fVar86;
  auVar148._12_4_ = fVar137 * fVar132 + fVar87;
  fVar87 = (local_1b8 * fVar96 - fVar110 * fVar47) + auVar148._0_4_;
  fVar51 = (fStack_1b4 * fVar173 - fVar116 * fVar48) + auVar148._4_4_;
  fVar64 = (fStack_1b0 * fVar97 - fVar117 * fVar109) + auVar148._8_4_;
  fVar66 = (fStack_1ac * fVar98 - fVar118 * fVar175) + auVar148._12_4_;
  local_158 = auVar34._0_4_;
  fStack_154 = auVar34._4_4_;
  fStack_150 = auVar34._8_4_;
  fStack_14c = auVar34._12_4_;
  fVar30 = *param_10;
  fVar76 = param_10[1];
  fVar86 = param_10[2];
  if (bVar11 == 9) {
    auVar148 = *(undefined1 (*) [16])(param_6 + lVar10);
  }
  else {
    puVar4 = (uint *)(param_6 + lVar10);
    if ((uVar17 & 1) != 0) {
      auVar148 = ZEXT416(*puVar4);
    }
    if ((uVar17 & 2) != 0) {
      auVar148 = insertps(auVar148,puVar4[1],0x10);
    }
    if ((uVar17 & 4) != 0) {
      auVar148 = insertps(auVar148,puVar4[2],0x20);
    }
    if ((uVar17 & 8) != 0) {
      auVar148 = insertps(auVar148,puVar4[3],0x30);
    }
  }
  pfVar23 = (float *)(param_1 + lVar25 * 0x10);
  auVar82._0_4_ = (fVar87 + local_158) - fVar30;
  auVar82._4_4_ = (fVar51 + fStack_154) - fVar30;
  auVar82._8_4_ = (fVar64 + fStack_150) - fVar30;
  auVar82._12_4_ = (fVar66 + fStack_14c) - fVar30;
  auVar56._0_4_ =
       ((fVar47 * fVar120 - fVar96 * fVar127) + fVar134 * fVar110 + fVar88 + auVar99._0_4_) - fVar76
  ;
  auVar56._4_4_ =
       ((fVar48 * fVar128 - fVar173 * fVar129) + fVar135 * fVar116 + fVar170 + auVar99._4_4_) -
       fVar76;
  auVar56._8_4_ =
       ((fVar109 * fVar130 - fVar97 * fVar131) + fVar119 * fVar117 + fVar29 + auVar99._8_4_) -
       fVar76;
  auVar56._12_4_ =
       ((fVar175 * fVar132 - fVar98 * fVar133) + fVar137 * fVar118 + fVar89 + auVar99._12_4_) -
       fVar76;
  auVar39._0_4_ =
       ((fVar127 * fVar110 - fVar120 * local_1b8) + fVar134 * fVar96 + fVar49 + auVar111._0_4_) -
       fVar86;
  auVar39._4_4_ =
       ((fVar129 * fVar116 - fVar128 * fStack_1b4) + fVar135 * fVar173 + fVar50 + auVar111._4_4_) -
       fVar86;
  auVar39._8_4_ =
       ((fVar131 * fVar117 - fVar130 * fStack_1b0) + fVar119 * fVar97 + fVar63 + auVar111._8_4_) -
       fVar86;
  auVar39._12_4_ =
       ((fVar133 * fVar118 - fVar132 * fStack_1ac) + fVar137 * fVar98 + fVar65 + auVar111._12_4_) -
       fVar86;
  if ((bVar19 & 0xf) == 0) {
    uVar77 = CONCAT44(auVar56._0_4_,auVar82._0_4_);
    *(undefined8 *)pfVar23 = uVar77;
    *(ulonglong *)(pfVar23 + 2) = CONCAT44(auVar148._0_4_,auVar39._0_4_);
    pfVar23[4] = auVar82._4_4_;
    pfVar23[5] = auVar56._4_4_;
    pfVar23[6] = auVar39._4_4_;
    pfVar23[7] = auVar148._4_4_;
    pfVar23[8] = auVar82._8_4_;
    pfVar23[9] = auVar56._8_4_;
    pfVar23[10] = auVar39._8_4_;
    pfVar23[0xb] = auVar148._8_4_;
    pfVar23[0xc] = auVar82._12_4_;
    pfVar23[0xd] = auVar56._12_4_;
    pfVar23[0xe] = auVar39._12_4_;
    pfVar23[0xf] = auVar148._12_4_;
    auVar105._4_4_ = auVar82._4_4_;
    auVar105._0_4_ = auVar82._0_4_;
    auVar105._8_4_ = auVar82._8_4_;
    auVar105._12_4_ = auVar82._12_4_;
    auVar32 = insertps(auVar105,auVar56,0x30);
    auVar112._4_4_ = auVar56._8_4_;
    auVar112._0_4_ = auVar56._4_4_;
    auVar112._8_4_ = auVar39._0_4_;
    auVar112._12_4_ = auVar39._4_4_;
    auVar32 = insertps(auVar32,auVar39,0x20);
    *(int *)*pauVar2 = auVar32._0_4_;
    *(int *)(*pauVar2 + 4) = auVar32._12_4_;
    *(int *)(*pauVar2 + 8) = auVar32._8_4_;
    *(int *)(*pauVar2 + 0xc) = auVar32._4_4_;
    auVar32 = blendps(auVar112,auVar82,4);
    *(int *)pauVar2[1] = auVar32._0_4_;
    *(int *)(pauVar2[1] + 4) = auVar32._12_4_;
    *(int *)(pauVar2[1] + 8) = auVar32._8_4_;
    *(int *)(pauVar2[1] + 0xc) = auVar32._4_4_;
    *(float *)pauVar2[2] = auVar39._8_4_;
    *(float *)(pauVar2[2] + 4) = auVar82._12_4_;
    *(float *)(pauVar2[2] + 8) = auVar56._12_4_;
    *(float *)(pauVar2[2] + 0xc) = auVar39._12_4_;
    puVar14 = (undefined4 *)(param_2 + lVar25 * 0xc);
    auVar32 = *(undefined1 (*) [16])(param_2 + lVar25 * 0xc);
    auVar53 = *(undefined1 (*) [16])(param_2 + 0x10 + lVar25 * 0xc);
    puVar3 = (undefined4 *)(param_2 + 0x20 + lVar25 * 0xc);
    auVar165._0_4_ = auVar32._0_4_;
    auVar31 = insertps(auVar53,auVar32,0x8c);
    auVar165._4_4_ = auVar32._12_4_;
    auVar165._8_4_ = auVar53._8_4_;
    auVar165._12_4_ = puVar3[1];
    auVar156._4_4_ = auVar53._0_4_;
    auVar156._0_4_ = auVar32._4_4_;
    auVar156._8_4_ = auVar53._12_4_;
    auVar156._12_4_ = puVar3[2];
    auVar149._0_8_ = auVar31._0_8_;
    auVar149._8_4_ = *puVar3;
    auVar149._12_4_ = puVar3[3];
  }
  else {
    if ((bVar24 & 1) != 0) {
      *pfVar23 = auVar82._0_4_;
    }
    if ((bVar24 & 2) != 0) {
      uVar77 = extractps(auVar82,1);
      *(undefined8 *)(pfVar23 + 4) = uVar77;
    }
    if ((bVar24 & 4) != 0) {
      uVar77 = extractps(auVar82,2);
      *(undefined8 *)(pfVar23 + 8) = uVar77;
    }
    if ((char)bVar24 < '\0') {
      uVar77 = extractps(auVar82,3);
      *(undefined8 *)(pfVar23 + 0xc) = uVar77;
    }
    if ((bVar24 & 1) != 0) {
      pfVar23[1] = auVar56._0_4_;
    }
    if ((bVar24 & 2) != 0) {
      uVar77 = extractps(auVar56,1);
      *(undefined8 *)(pfVar23 + 5) = uVar77;
    }
    if ((bVar24 & 4) != 0) {
      uVar77 = extractps(auVar56,2);
      *(undefined8 *)(pfVar23 + 9) = uVar77;
    }
    if ((char)bVar24 < '\0') {
      uVar77 = extractps(auVar56,3);
      *(undefined8 *)(pfVar23 + 0xd) = uVar77;
    }
    if ((bVar24 & 1) != 0) {
      pfVar23[2] = auVar39._0_4_;
    }
    if ((bVar24 & 2) != 0) {
      uVar77 = extractps(auVar39,1);
      *(undefined8 *)(pfVar23 + 6) = uVar77;
    }
    if ((bVar24 & 4) != 0) {
      uVar77 = extractps(auVar39,2);
      *(undefined8 *)(pfVar23 + 10) = uVar77;
    }
    if ((char)bVar24 < '\0') {
      uVar77 = extractps(auVar39,3);
      *(undefined8 *)(pfVar23 + 0xe) = uVar77;
    }
    if ((bVar24 & 1) != 0) {
      pfVar23[3] = auVar148._0_4_;
    }
    if ((bVar24 & 2) != 0) {
      uVar77 = extractps(auVar148,1);
      *(undefined8 *)(pfVar23 + 7) = uVar77;
    }
    if ((bVar24 & 4) != 0) {
      uVar77 = extractps(auVar148,2);
      *(undefined8 *)(pfVar23 + 0xb) = uVar77;
    }
    if ((char)bVar24 < '\0') {
      uVar77 = extractps(auVar148,3);
      *(undefined8 *)(pfVar23 + 0xf) = uVar77;
    }
    if ((bVar24 & 1) != 0) {
      *(float *)*pauVar2 = auVar82._0_4_;
    }
    if ((bVar24 & 2) != 0) {
      uVar77 = extractps(auVar82,1);
      *(undefined8 *)(*pauVar2 + 0xc) = uVar77;
    }
    if ((bVar24 & 4) != 0) {
      uVar77 = extractps(auVar82,2);
      *(undefined8 *)(pauVar2[1] + 8) = uVar77;
    }
    if ((char)bVar24 < '\0') {
      uVar77 = extractps(auVar82,3);
      *(undefined8 *)(pauVar2[2] + 4) = uVar77;
    }
    if ((bVar24 & 1) != 0) {
      *(float *)(*pauVar2 + 4) = auVar56._0_4_;
    }
    if ((bVar24 & 2) != 0) {
      uVar77 = extractps(auVar56,1);
      *(undefined8 *)pauVar2[1] = uVar77;
    }
    if ((bVar24 & 4) != 0) {
      uVar77 = extractps(auVar56,2);
      *(undefined8 *)(pauVar2[1] + 0xc) = uVar77;
    }
    if ((char)bVar24 < '\0') {
      uVar77 = extractps(auVar56,3);
      *(undefined8 *)(pauVar2[2] + 8) = uVar77;
    }
    if ((bVar24 & 1) != 0) {
      *(float *)(*pauVar2 + 8) = auVar39._0_4_;
    }
    if ((bVar24 & 2) != 0) {
      uVar77 = extractps(auVar39,1);
      *(undefined8 *)(pauVar2[1] + 4) = uVar77;
    }
    if ((bVar24 & 4) != 0) {
      uVar77 = extractps(auVar39,2);
      *(undefined8 *)pauVar2[2] = uVar77;
    }
    if ((char)bVar24 < '\0') {
      uVar77 = extractps(auVar39,3);
      *(undefined8 *)(pauVar2[2] + 0xc) = uVar77;
    }
    auVar40._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar93._0_4_;
    auVar40._4_4_ = _UNK_150b50da4 & auVar93._4_4_;
    auVar40._8_4_ = _UNK_150b50da8 & auVar93._8_4_;
    auVar40._12_4_ = _UNK_150b50dac & auVar93._12_4_;
    lVar10 = extractps(auVar40,1);
    lVar20 = extractps(auVar40,2);
    lVar15 = extractps(auVar40,3);
    puVar14 = (undefined4 *)(param_2 + lVar25 * 0xc);
    auVar32 = insertps(ZEXT416(*(uint *)(param_2 + lVar25 * 0xc)),
                       *(undefined4 *)(lVar10 + (longlong)puVar14),0x10);
    auVar32 = insertps(auVar32,*(undefined4 *)(lVar20 + (longlong)puVar14),0x20);
    auVar165 = insertps(auVar32,*(undefined4 *)(lVar15 + (longlong)puVar14),0x30);
    auVar41._4_4_ = _UNK_150b50db4;
    auVar41._0_4_ = ___xmm_000000280000001c0000001000000004;
    auVar41._8_4_ = _UNK_150b50db8;
    auVar41._12_4_ = _UNK_150b50dbc;
    auVar41 = auVar41 & auVar93;
    auVar32 = insertps(ZEXT416(*(uint *)((ulonglong)auVar41._0_4_ + (longlong)puVar14)),
                       *(undefined4 *)((ulonglong)auVar41._4_4_ + (longlong)puVar14),0x10);
    auVar32 = insertps(auVar32,*(undefined4 *)((ulonglong)auVar41._8_4_ + (longlong)puVar14),0x20);
    auVar156 = insertps(auVar32,*(undefined4 *)((ulonglong)auVar41._12_4_ + (longlong)puVar14),0x30)
    ;
    auVar42._4_4_ = _UNK_150b50dc4;
    auVar42._0_4_ = ___xmm_0000002c000000200000001400000008;
    auVar42._8_4_ = _UNK_150b50dc8;
    auVar42._12_4_ = _UNK_150b50dcc;
    auVar42 = auVar42 & auVar93;
    auVar32 = insertps(ZEXT416(*(uint *)((ulonglong)auVar42._0_4_ + (longlong)puVar14)),
                       *(undefined4 *)((ulonglong)auVar42._4_4_ + (longlong)puVar14),0x10);
    auVar32 = insertps(auVar32,*(undefined4 *)((ulonglong)auVar42._8_4_ + (longlong)puVar14),0x20);
    auVar149 = insertps(auVar32,*(undefined4 *)((ulonglong)auVar42._12_4_ + (longlong)puVar14),0x30)
    ;
  }
  fVar120 = auVar165._0_4_ * fVar68;
  fVar128 = auVar165._4_4_ * fVar69;
  fVar130 = auVar165._8_4_ * fVar90;
  fVar132 = auVar165._12_4_ * fVar171;
  fVar110 = auVar156._0_4_ * local_1c8;
  fVar116 = auVar156._4_4_ * fStack_1c4;
  fVar117 = auVar156._8_4_ * fStack_1c0;
  fVar118 = auVar156._12_4_ * fStack_1bc;
  fVar96 = auVar149._0_4_ * local_1d8;
  fVar173 = auVar149._4_4_ * fStack_1d4;
  fVar97 = auVar149._8_4_ * fStack_1d0;
  fVar98 = auVar149._12_4_ * fStack_1cc;
  fVar87 = fVar127 * fVar110 - local_1b8 * fVar120;
  fVar88 = fVar129 * fVar116 - fStack_1b4 * fVar128;
  fVar170 = fVar131 * fVar117 - fStack_1b0 * fVar130;
  fVar29 = fVar133 * fVar118 - fStack_1ac * fVar132;
  fVar89 = local_1b8 * fVar96 - fVar47 * fVar110;
  fVar49 = fStack_1b4 * fVar173 - fVar48 * fVar116;
  fVar50 = fStack_1b0 * fVar97 - fVar109 * fVar117;
  fVar51 = fStack_1ac * fVar98 - fVar175 * fVar118;
  fVar63 = fVar47 * fVar120 - fVar127 * fVar96;
  fVar64 = fVar48 * fVar128 - fVar129 * fVar173;
  fVar65 = fVar109 * fVar130 - fVar131 * fVar97;
  fVar66 = fVar175 * fVar132 - fVar133 * fVar98;
  fVar89 = fVar89 + fVar89;
  fVar49 = fVar49 + fVar49;
  fVar50 = fVar50 + fVar50;
  fVar51 = fVar51 + fVar51;
  fVar63 = fVar63 + fVar63;
  fVar64 = fVar64 + fVar64;
  fVar65 = fVar65 + fVar65;
  fVar66 = fVar66 + fVar66;
  fVar87 = fVar87 + fVar87;
  fVar88 = fVar88 + fVar88;
  fVar170 = fVar170 + fVar170;
  fVar29 = fVar29 + fVar29;
  pauVar2 = (undefined1 (*) [16])(param_4 + lVar25 * 0xc);
  if ((bVar19 & 0xf) == 0) {
    auVar32 = *pauVar2;
    auVar53 = pauVar2[1];
    auVar57._0_4_ = auVar32._0_4_;
    auVar31 = insertps(auVar53,auVar32,0x8c);
    auVar57._4_4_ = auVar32._12_4_;
    auVar57._8_4_ = auVar53._8_4_;
    auVar57._12_4_ = *(undefined4 *)(pauVar2[2] + 4);
    auVar83._4_4_ = auVar53._0_4_;
    auVar83._0_4_ = auVar32._4_4_;
    auVar83._8_4_ = auVar53._12_4_;
    auVar83._12_4_ = *(undefined4 *)(pauVar2[2] + 8);
    auVar43._0_8_ = auVar31._0_8_;
    auVar43._8_4_ = *(undefined4 *)pauVar2[2];
    auVar43._12_4_ = *(undefined4 *)(pauVar2[2] + 0xc);
  }
  else {
    auVar32 = insertps(ZEXT416(*(uint *)*pauVar2),
                       *(undefined4 *)(*pauVar2 + (_UNK_150b50da4 & auVar93._4_4_)),0x10);
    auVar32 = insertps(auVar32,*(undefined4 *)(*pauVar2 + (_UNK_150b50da8 & auVar93._8_4_)),0x20);
    auVar57 = insertps(auVar32,*(undefined4 *)(*pauVar2 + (_UNK_150b50dac & auVar93._12_4_)),0x30);
    auVar32 = insertps(ZEXT416(*(uint *)(*pauVar2 +
                                        (___xmm_000000280000001c0000001000000004 & auVar93._0_4_))),
                       *(undefined4 *)(*pauVar2 + (_UNK_150b50db4 & auVar93._4_4_)),0x10);
    auVar32 = insertps(auVar32,*(undefined4 *)(*pauVar2 + (_UNK_150b50db8 & auVar93._8_4_)),0x20);
    auVar83 = insertps(auVar32,*(undefined4 *)(*pauVar2 + (_UNK_150b50dbc & auVar93._12_4_)),0x30);
    auVar32 = insertps(ZEXT416(*(uint *)(*pauVar2 +
                                        (___xmm_0000002c000000200000001400000008 & auVar93._0_4_))),
                       *(undefined4 *)(*pauVar2 + (_UNK_150b50dc4 & auVar93._4_4_)),0x10);
    auVar32 = insertps(auVar32,*(undefined4 *)(*pauVar2 + (_UNK_150b50dc8 & auVar93._8_4_)),0x20);
    auVar43 = insertps(auVar32,*(undefined4 *)(*pauVar2 + (_UNK_150b50dcc & auVar93._12_4_)),0x30);
  }
  fVar68 = fVar68 * auVar57._0_4_;
  fVar69 = fVar69 * auVar57._4_4_;
  fVar90 = fVar90 * auVar57._8_4_;
  fVar171 = fVar171 * auVar57._12_4_;
  local_1c8 = local_1c8 * auVar83._0_4_;
  fStack_1c4 = fStack_1c4 * auVar83._4_4_;
  fStack_1c0 = fStack_1c0 * auVar83._8_4_;
  fStack_1bc = fStack_1bc * auVar83._12_4_;
  local_1d8 = local_1d8 * auVar43._0_4_;
  fStack_1d4 = fStack_1d4 * auVar43._4_4_;
  fStack_1d0 = fStack_1d0 * auVar43._8_4_;
  fStack_1cc = fStack_1cc * auVar43._12_4_;
  fVar138 = fVar127 * local_1c8 - local_1b8 * fVar68;
  fVar139 = fVar129 * fStack_1c4 - fStack_1b4 * fVar69;
  fVar140 = fVar131 * fStack_1c0 - fStack_1b0 * fVar90;
  fVar141 = fVar133 * fStack_1bc - fStack_1ac * fVar171;
  fVar153 = local_1b8 * local_1d8 - fVar47 * local_1c8;
  fVar160 = fStack_1b4 * fStack_1d4 - fVar48 * fStack_1c4;
  fVar161 = fStack_1b0 * fStack_1d0 - fVar109 * fStack_1c0;
  fVar162 = fStack_1ac * fStack_1cc - fVar175 * fStack_1bc;
  fVar142 = fVar47 * fVar68 - fVar127 * local_1d8;
  fVar143 = fVar48 * fVar69 - fVar129 * fStack_1d4;
  fVar67 = fVar109 * fVar90 - fVar131 * fStack_1d0;
  fVar70 = fVar175 * fVar171 - fVar133 * fStack_1cc;
  fVar153 = fVar153 + fVar153;
  fVar160 = fVar160 + fVar160;
  fVar161 = fVar161 + fVar161;
  fVar162 = fVar162 + fVar162;
  fVar142 = fVar142 + fVar142;
  fVar143 = fVar143 + fVar143;
  fVar67 = fVar67 + fVar67;
  fVar70 = fVar70 + fVar70;
  fVar138 = fVar138 + fVar138;
  fVar139 = fVar139 + fVar139;
  fVar140 = fVar140 + fVar140;
  fVar141 = fVar141 + fVar141;
  fVar68 = (local_158 + (local_1b8 * fVar138 - fVar142 * fVar47) + fVar134 * fVar153 + fVar68) -
           fVar30;
  fVar69 = (fStack_154 + (fStack_1b4 * fVar139 - fVar143 * fVar48) + fVar135 * fVar160 + fVar69) -
           fVar30;
  auVar84._0_8_ = CONCAT44(fVar69,fVar68);
  auVar84._8_4_ =
       (fStack_150 + (fStack_1b0 * fVar140 - fVar67 * fVar109) + fVar119 * fVar161 + fVar90) -
       fVar30;
  auVar84._12_4_ =
       (fStack_14c + (fStack_1ac * fVar141 - fVar70 * fVar175) + fVar137 * fVar162 + fVar171) -
       fVar30;
  auVar72._0_4_ =
       (auVar99._0_4_ + (fVar47 * fVar153 - fVar138 * fVar127) + fVar134 * fVar142 + local_1c8) -
       fVar76;
  auVar72._4_4_ =
       (auVar99._4_4_ + (fVar48 * fVar160 - fVar139 * fVar129) + fVar135 * fVar143 + fStack_1c4) -
       fVar76;
  auVar72._8_4_ =
       (auVar99._8_4_ + (fVar109 * fVar161 - fVar140 * fVar131) + fVar119 * fVar67 + fStack_1c0) -
       fVar76;
  auVar72._12_4_ =
       (auVar99._12_4_ + (fVar175 * fVar162 - fVar141 * fVar133) + fVar137 * fVar70 + fStack_1bc) -
       fVar76;
  auVar94._0_4_ =
       (auVar111._0_4_ + (fVar127 * fVar142 - fVar153 * local_1b8) + fVar134 * fVar138 + local_1d8)
       - fVar86;
  auVar94._4_4_ =
       (auVar111._4_4_ + (fVar129 * fVar143 - fVar160 * fStack_1b4) + fVar135 * fVar139 + fStack_1d4
       ) - fVar86;
  auVar94._8_4_ =
       (auVar111._8_4_ + (fVar131 * fVar67 - fVar161 * fStack_1b0) + fVar119 * fVar140 + fStack_1d0)
       - fVar86;
  auVar94._12_4_ =
       (auVar111._12_4_ + (fVar133 * fVar70 - fVar162 * fStack_1ac) + fVar137 * fVar141 + fStack_1cc
       ) - fVar86;
  if ((bVar19 & 0xf) == 0) {
    auVar44._8_4_ = auVar84._8_4_;
    auVar44._0_8_ = auVar84._0_8_;
    auVar44._12_4_ = auVar84._12_4_;
    auVar32 = insertps(auVar44,auVar72,0x30);
    auVar58._4_4_ = auVar72._8_4_;
    auVar58._0_4_ = auVar72._4_4_;
    auVar58._8_4_ = auVar94._0_4_;
    auVar58._12_4_ = auVar94._4_4_;
    auVar32 = insertps(auVar32,auVar94,0x20);
    *(int *)*pauVar2 = auVar32._0_4_;
    *(int *)(*pauVar2 + 4) = auVar32._12_4_;
    *(int *)(*pauVar2 + 8) = auVar32._8_4_;
    *(int *)(*pauVar2 + 0xc) = auVar32._4_4_;
    auVar32 = blendps(auVar58,auVar84,4);
    *(int *)pauVar2[1] = auVar32._0_4_;
    *(int *)(pauVar2[1] + 4) = auVar32._12_4_;
    *(int *)(pauVar2[1] + 8) = auVar32._8_4_;
    *(int *)(pauVar2[1] + 0xc) = auVar32._4_4_;
    *(float *)pauVar2[2] = auVar94._8_4_;
    *(float *)(pauVar2[2] + 4) = auVar84._12_4_;
    *(float *)(pauVar2[2] + 8) = auVar72._12_4_;
    *(float *)(pauVar2[2] + 0xc) = auVar94._12_4_;
    auVar32 = *(undefined1 (*) [16])(param_7 + lVar25 * 0xc);
    auVar53 = *(undefined1 (*) [16])(param_7 + 0x10 + lVar25 * 0xc);
    puVar3 = (undefined4 *)(param_7 + 0x20 + lVar25 * 0xc);
    auVar106._0_4_ = auVar32._0_4_;
    auVar31 = insertps(auVar53,auVar32,0x8c);
    auVar106._4_4_ = auVar32._12_4_;
    auVar106._8_4_ = auVar53._8_4_;
    auVar106._12_4_ = puVar3[1];
    auVar113._4_4_ = auVar53._0_4_;
    auVar113._0_4_ = auVar32._4_4_;
    auVar113._8_4_ = auVar53._12_4_;
    auVar113._12_4_ = puVar3[2];
    auVar124._0_8_ = auVar31._0_8_;
    auVar124._8_4_ = *puVar3;
    auVar124._12_4_ = puVar3[3];
  }
  else {
    if ((bVar24 & 1) != 0) {
      *(float *)*pauVar2 = fVar68;
    }
    if ((bVar24 & 2) != 0) {
      uVar77 = extractps(auVar84,1);
      *(undefined8 *)(*pauVar2 + 0xc) = uVar77;
    }
    if ((bVar24 & 4) != 0) {
      uVar77 = extractps(auVar84,2);
      *(undefined8 *)(pauVar2[1] + 8) = uVar77;
    }
    if ((char)bVar24 < '\0') {
      uVar77 = extractps(auVar84,3);
      *(undefined8 *)(pauVar2[2] + 4) = uVar77;
    }
    if ((bVar24 & 1) != 0) {
      *(float *)(*pauVar2 + 4) = auVar72._0_4_;
    }
    if ((bVar24 & 2) != 0) {
      uVar77 = extractps(auVar72,1);
      *(undefined8 *)pauVar2[1] = uVar77;
    }
    if ((bVar24 & 4) != 0) {
      uVar77 = extractps(auVar72,2);
      *(undefined8 *)(pauVar2[1] + 0xc) = uVar77;
    }
    if ((char)bVar24 < '\0') {
      uVar77 = extractps(auVar72,3);
      *(undefined8 *)(pauVar2[2] + 8) = uVar77;
    }
    if ((bVar24 & 1) != 0) {
      *(float *)(*pauVar2 + 8) = auVar94._0_4_;
    }
    if ((bVar24 & 2) != 0) {
      uVar77 = extractps(auVar94,1);
      *(undefined8 *)(pauVar2[1] + 4) = uVar77;
    }
    if ((bVar24 & 4) != 0) {
      uVar77 = extractps(auVar94,2);
      *(undefined8 *)pauVar2[2] = uVar77;
    }
    if ((char)bVar24 < '\0') {
      uVar77 = extractps(auVar94,3);
      *(undefined8 *)(pauVar2[2] + 0xc) = uVar77;
    }
    lVar10 = param_7 + lVar25 * 0xc;
    auVar32 = insertps(ZEXT416(*(uint *)(param_7 + lVar25 * 0xc)),
                       *(undefined4 *)((ulonglong)(_UNK_150b50da4 & auVar93._4_4_) + lVar10),0x10);
    auVar32 = insertps(auVar32,*(undefined4 *)((ulonglong)(_UNK_150b50da8 & auVar93._8_4_) + lVar10)
                       ,0x20);
    auVar106 = insertps(auVar32,*(undefined4 *)
                                 ((ulonglong)(_UNK_150b50dac & auVar93._12_4_) + lVar10),0x30);
    auVar32 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (___xmm_000000280000001c0000001000000004 & auVar93._0_4_) +
                                        lVar10)),
                       *(undefined4 *)((ulonglong)(_UNK_150b50db4 & auVar93._4_4_) + lVar10),0x10);
    auVar32 = insertps(auVar32,*(undefined4 *)((ulonglong)(_UNK_150b50db8 & auVar93._8_4_) + lVar10)
                       ,0x20);
    auVar113 = insertps(auVar32,*(undefined4 *)
                                 ((ulonglong)(_UNK_150b50dbc & auVar93._12_4_) + lVar10),0x30);
    auVar32 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (___xmm_0000002c000000200000001400000008 & auVar93._0_4_) +
                                        lVar10)),
                       *(undefined4 *)((ulonglong)(_UNK_150b50dc4 & auVar93._4_4_) + lVar10),0x10);
    auVar32 = insertps(auVar32,*(undefined4 *)((ulonglong)(_UNK_150b50dc8 & auVar93._8_4_) + lVar10)
                       ,0x20);
    auVar124 = insertps(auVar32,*(undefined4 *)
                                 ((ulonglong)(_UNK_150b50dcc & auVar93._12_4_) + lVar10),0x30);
  }
  fVar90 = fVar120 + fVar134 * fVar89 + (local_1b8 * fVar87 - fVar63 * fVar47);
  fVar171 = fVar128 + fVar135 * fVar49 + (fStack_1b4 * fVar88 - fVar64 * fVar48);
  auVar166._0_8_ = CONCAT44(fVar171,fVar90);
  auVar166._8_4_ = fVar130 + fVar119 * fVar50 + (fStack_1b0 * fVar170 - fVar65 * fVar109);
  auVar166._12_4_ = fVar132 + fVar137 * fVar51 + (fStack_1ac * fVar29 - fVar66 * fVar175);
  fVar30 = fVar110 + fVar134 * fVar63 + (fVar47 * fVar89 - fVar87 * fVar127);
  fVar76 = fVar116 + fVar135 * fVar64 + (fVar48 * fVar49 - fVar88 * fVar129);
  auVar159._0_8_ = CONCAT44(fVar76,fVar30);
  auVar159._8_4_ = fVar117 + fVar119 * fVar65 + (fVar109 * fVar50 - fVar170 * fVar131);
  auVar159._12_4_ = fVar118 + fVar137 * fVar66 + (fVar175 * fVar51 - fVar29 * fVar133);
  fVar86 = fVar96 + fVar134 * fVar87 + (fVar127 * fVar63 - fVar89 * local_1b8);
  fVar87 = fVar173 + fVar135 * fVar88 + (fVar129 * fVar64 - fVar49 * fStack_1b4);
  auVar152._0_8_ = CONCAT44(fVar87,fVar86);
  auVar152._8_4_ = fVar97 + fVar119 * fVar170 + (fVar131 * fVar65 - fVar50 * fStack_1b0);
  auVar152._12_4_ = fVar98 + fVar137 * fVar29 + (fVar133 * fVar66 - fVar51 * fStack_1ac);
  auVar107._0_4_ = auVar106._0_4_ - fVar68;
  auVar107._4_4_ = auVar106._4_4_ - fVar69;
  auVar107._8_4_ = auVar106._8_4_ - auVar84._8_4_;
  auVar107._12_4_ = auVar106._12_4_ - auVar84._12_4_;
  auVar114._0_4_ = auVar113._0_4_ - auVar72._0_4_;
  auVar114._4_4_ = auVar113._4_4_ - auVar72._4_4_;
  auVar114._8_4_ = auVar113._8_4_ - auVar72._8_4_;
  auVar114._12_4_ = auVar113._12_4_ - auVar72._12_4_;
  auVar125._0_4_ = auVar124._0_4_ - auVar94._0_4_;
  auVar125._4_4_ = auVar124._4_4_ - auVar94._4_4_;
  auVar125._8_4_ = auVar124._8_4_ - auVar94._8_4_;
  auVar125._12_4_ = auVar124._12_4_ - auVar94._12_4_;
  auVar59._4_4_ = param_11;
  auVar59._0_4_ = param_11;
  auVar59._8_4_ = param_11;
  auVar59._12_4_ = param_11;
  auVar32 = divps(auVar107,auVar59);
  auVar53 = divps(auVar114,auVar59);
  auVar31 = divps(auVar125,auVar59);
  pfVar23 = (float *)(param_5 + lVar25 * 0xc);
  fVar88 = auVar32._0_4_;
  fVar170 = auVar32._12_4_;
  fVar29 = auVar53._0_4_;
  fVar89 = auVar53._12_4_;
  fVar47 = auVar31._0_4_;
  fVar48 = auVar31._4_4_;
  fVar109 = auVar31._8_4_;
  fVar175 = auVar31._12_4_;
  if ((bVar19 & 0xf) == 0) {
    auVar33 = insertps(auVar32,auVar53,0x30);
    auVar60._0_8_ = auVar53._4_8_;
    auVar60._8_4_ = fVar47;
    auVar60._12_4_ = fVar48;
    auVar31 = insertps(auVar33,auVar31,0x20);
    *pfVar23 = auVar31._0_4_;
    pfVar23[1] = auVar31._12_4_;
    pfVar23[2] = auVar31._8_4_;
    pfVar23[3] = auVar31._4_4_;
    auVar31 = blendps(auVar60,auVar32,4);
    pfVar23[4] = auVar31._0_4_;
    pfVar23[5] = auVar31._12_4_;
    pfVar23[6] = auVar31._8_4_;
    pfVar23[7] = auVar31._4_4_;
    pfVar23[8] = fVar109;
    pfVar23[9] = fVar170;
    pfVar23[10] = fVar89;
    pfVar23[0xb] = fVar175;
  }
  else {
    if ((bVar24 & 1) != 0) {
      *pfVar23 = fVar88;
    }
    if ((bVar24 & 2) != 0) {
      uVar77 = extractps(auVar32,1);
      *(undefined8 *)(pfVar23 + 3) = uVar77;
    }
    if ((bVar24 & 4) != 0) {
      uVar77 = extractps(auVar32,2);
      *(undefined8 *)(pfVar23 + 6) = uVar77;
    }
    if ((char)bVar24 < '\0') {
      uVar77 = extractps(auVar32,3);
      *(undefined8 *)(pfVar23 + 9) = uVar77;
    }
    if ((bVar24 & 1) != 0) {
      pfVar23[1] = fVar29;
    }
    if ((bVar24 & 2) != 0) {
      uVar77 = extractps(auVar53,1);
      *(undefined8 *)(pfVar23 + 4) = uVar77;
    }
    if ((bVar24 & 4) != 0) {
      uVar77 = extractps(auVar53,2);
      *(undefined8 *)(pfVar23 + 7) = uVar77;
    }
    if ((char)bVar24 < '\0') {
      uVar77 = extractps(auVar53,3);
      *(undefined8 *)(pfVar23 + 10) = uVar77;
    }
    if ((bVar24 & 1) != 0) {
      pfVar23[2] = fVar47;
    }
    if ((bVar24 & 2) != 0) {
      uVar77 = extractps(auVar31,1);
      *(undefined8 *)(pfVar23 + 5) = uVar77;
    }
    if ((bVar24 & 4) != 0) {
      uVar77 = extractps(auVar31,2);
      *(undefined8 *)(pfVar23 + 8) = uVar77;
    }
    if ((char)bVar24 < '\0') {
      uVar77 = extractps(auVar31,3);
      *(undefined8 *)(pfVar23 + 0xb) = uVar77;
    }
  }
  fVar90 = fVar90 - fVar88;
  fVar171 = fVar171 - auVar32._4_4_;
  fVar64 = auVar166._8_4_ - auVar32._8_4_;
  fVar65 = auVar166._12_4_ - fVar170;
  fVar30 = fVar30 - fVar29;
  fVar76 = fVar76 - auVar53._4_4_;
  fVar49 = auVar159._8_4_ - auVar53._8_4_;
  fVar50 = auVar159._12_4_ - fVar89;
  fVar86 = fVar86 - fVar47;
  fVar87 = fVar87 - fVar48;
  fVar51 = auVar152._8_4_ - fVar109;
  fVar63 = auVar152._12_4_ - fVar175;
  auVar85._0_4_ = fVar86 * fVar86 + fVar30 * fVar30 + fVar90 * fVar90;
  auVar85._4_4_ = fVar87 * fVar87 + fVar76 * fVar76 + fVar171 * fVar171;
  auVar85._8_4_ = fVar51 * fVar51 + fVar49 * fVar49 + fVar64 * fVar64;
  auVar85._12_4_ = fVar63 * fVar63 + fVar50 * fVar50 + fVar65 * fVar65;
  auVar101._4_4_ = param_14;
  auVar101._0_4_ = param_14;
  auVar101._8_4_ = param_14;
  auVar101._12_4_ = param_14;
  auVar95._0_4_ = -(uint)(param_14 < auVar85._0_4_ && bVar28);
  auVar95._4_4_ = -(uint)(param_14 < auVar85._4_4_ && bVar5);
  auVar95._8_4_ = -(uint)(param_14 < auVar85._8_4_ && bVar6);
  auVar95._12_4_ = -(uint)(param_14 < auVar85._12_4_ && bVar7);
  iVar9 = movmskps((int)pfVar23,auVar95);
  if (iVar9 == 0) goto LAB_140d0f8d9;
  bVar11 = (char)((char)iVar9 << 4) >> 4;
  auVar31 = divps(auVar101,auVar85);
  auVar31 = sqrtps(auVar85,auVar31);
  fVar66 = auVar31._0_4_;
  fVar68 = auVar31._4_4_;
  fVar69 = auVar31._8_4_;
  fVar96 = auVar31._12_4_;
  auVar108._0_8_ = CONCAT44(auVar32._4_4_ + fVar171 * fVar68,fVar88 + fVar90 * fVar66);
  auVar108._8_4_ = auVar32._8_4_ + fVar64 * fVar69;
  auVar108._12_4_ = fVar170 + fVar65 * fVar96;
  auVar73._8_4_ = auVar166._8_4_;
  auVar73._0_8_ = auVar166._0_8_;
  auVar73._12_4_ = auVar166._12_4_;
  bVar28 = (bVar11 & 1) != 0;
  if (bVar28) {
    auVar73._8_4_ = auVar108._8_4_;
    auVar73._0_8_ = auVar108._0_8_;
    auVar73._12_4_ = auVar108._12_4_;
  }
  auVar115._0_8_ = CONCAT44(auVar53._4_4_ + fVar76 * fVar68,fVar29 + fVar30 * fVar66);
  auVar115._8_4_ = auVar53._8_4_ + fVar49 * fVar69;
  auVar115._12_4_ = fVar89 + fVar50 * fVar96;
  auVar126._0_8_ = CONCAT44(fVar48 + fVar87 * fVar68,fVar47 + fVar86 * fVar66);
  auVar126._8_4_ = fVar109 + fVar51 * fVar69;
  auVar126._12_4_ = fVar175 + fVar63 * fVar96;
  auVar61._8_4_ = auVar159._8_4_;
  auVar61._0_8_ = auVar159._0_8_;
  auVar61._12_4_ = auVar159._12_4_;
  auVar45._8_4_ = auVar152._8_4_;
  auVar45._0_8_ = auVar152._0_8_;
  auVar45._12_4_ = auVar152._12_4_;
  if (bVar28) {
    auVar61._8_4_ = auVar115._8_4_;
    auVar61._0_8_ = auVar115._0_8_;
    auVar61._12_4_ = auVar115._12_4_;
    auVar45._8_4_ = auVar126._8_4_;
    auVar45._0_8_ = auVar126._0_8_;
    auVar45._12_4_ = auVar126._12_4_;
    auVar32 = blendps(auVar166,auVar73,1);
    if ((bVar11 & 2) != 0) goto LAB_140d0f9b6;
LAB_140d0f843:
    auVar157 = blendps(auVar159,auVar61,1);
    auVar150 = blendps(auVar152,auVar45,1);
    auVar32 = blendps(auVar32,auVar32,2);
    auVar53 = auVar150;
    auVar31 = auVar157;
    if ((bVar11 & 4) == 0) goto LAB_140d0f879;
LAB_140d0f9f6:
    auVar75._8_4_ = auVar108._8_4_;
    auVar75._0_8_ = auVar108._0_8_;
    auVar75._12_4_ = auVar108._12_4_;
    auVar31 = blendps(auVar31,auVar157,2);
    auVar158._8_4_ = auVar115._8_4_;
    auVar158._0_8_ = auVar115._0_8_;
    auVar158._12_4_ = auVar115._12_4_;
    auVar53 = blendps(auVar53,auVar150,2);
    auVar151._8_4_ = auVar126._8_4_;
    auVar151._0_8_ = auVar126._0_8_;
    auVar151._12_4_ = auVar126._12_4_;
    auVar32 = blendps(auVar32,auVar75,4);
    if (-1 < (char)bVar11) goto LAB_140d0fa31;
LAB_140d0f8aa:
    auVar31 = blendps(auVar31,auVar158,4);
    if ((char)bVar11 < '\0') goto LAB_140d0f8b7;
LAB_140d0fa42:
    auVar53 = blendps(auVar53,auVar151,4);
    auVar115 = auVar31;
  }
  else {
    auVar32 = blendps(auVar166,auVar73,1);
    if ((bVar11 & 2) == 0) goto LAB_140d0f843;
LAB_140d0f9b6:
    auVar74._8_4_ = auVar108._8_4_;
    auVar74._0_8_ = auVar108._0_8_;
    auVar74._12_4_ = auVar108._12_4_;
    auVar31 = blendps(auVar159,auVar61,1);
    auVar157._8_4_ = auVar115._8_4_;
    auVar157._0_8_ = auVar115._0_8_;
    auVar157._12_4_ = auVar115._12_4_;
    auVar53 = blendps(auVar152,auVar45,1);
    auVar150._8_4_ = auVar126._8_4_;
    auVar150._0_8_ = auVar126._0_8_;
    auVar150._12_4_ = auVar126._12_4_;
    auVar32 = blendps(auVar32,auVar74,2);
    if ((bVar11 & 4) != 0) goto LAB_140d0f9f6;
LAB_140d0f879:
    auVar158 = blendps(auVar31,auVar157,2);
    auVar151 = blendps(auVar53,auVar150,2);
    auVar32 = blendps(auVar32,auVar32,4);
    auVar53 = auVar151;
    auVar31 = auVar158;
    if ((char)bVar11 < '\0') goto LAB_140d0f8aa;
LAB_140d0fa31:
    auVar108 = auVar32;
    auVar31 = blendps(auVar31,auVar158,4);
    auVar32 = auVar108;
    if (-1 < (char)bVar11) goto LAB_140d0fa42;
LAB_140d0f8b7:
    auVar53 = blendps(auVar53,auVar151,4);
  }
  if (-1 < (char)bVar11) {
    auVar126 = auVar53;
  }
  auVar166 = blendps(auVar32,auVar108,8);
  auVar159 = blendps(auVar31,auVar115,8);
  auVar152 = blendps(auVar53,auVar126,8);
LAB_140d0f8d9:
  if ((bVar19 & 0xf) == 0) {
    auVar32 = insertps(auVar166,auVar159,0x30);
    auVar62._0_8_ = auVar159._4_8_;
    auVar62._8_4_ = auVar152._0_4_;
    auVar62._12_4_ = auVar152._4_4_;
    auVar32 = insertps(auVar32,auVar152,0x20);
    *puVar14 = auVar32._0_4_;
    puVar14[1] = auVar32._12_4_;
    puVar14[2] = auVar32._8_4_;
    puVar14[3] = auVar32._4_4_;
    auVar32 = blendps(auVar62,auVar166,4);
    puVar14 = (undefined4 *)(param_2 + 0x10 + lVar25 * 0xc);
    *puVar14 = auVar32._0_4_;
    puVar14[1] = auVar32._12_4_;
    puVar14[2] = auVar32._8_4_;
    puVar14[3] = auVar32._4_4_;
    puVar14 = (undefined4 *)(param_2 + 0x20 + lVar25 * 0xc);
    *puVar14 = auVar152._8_4_;
    puVar14[1] = auVar166._12_4_;
    puVar14[2] = auVar159._12_4_;
    puVar14[3] = auVar152._12_4_;
  }
  else {
    if ((bVar24 & 1) != 0) {
      *puVar14 = auVar166._0_4_;
    }
    if ((bVar24 & 2) != 0) {
      uVar77 = extractps(auVar166,1);
      *(undefined8 *)(param_2 + 0xc + lVar25 * 0xc) = uVar77;
    }
    if ((bVar24 & 4) != 0) {
      uVar77 = extractps(auVar166,2);
      *(undefined8 *)(param_2 + 0x18 + lVar25 * 0xc) = uVar77;
    }
    if ((char)bVar24 < '\0') {
      uVar77 = extractps(auVar166,3);
      *(undefined8 *)(param_2 + 0x24 + lVar25 * 0xc) = uVar77;
    }
    if ((bVar24 & 1) != 0) {
      *(int *)(param_2 + 4 + lVar25 * 0xc) = auVar159._0_4_;
    }
    if ((bVar24 & 2) != 0) {
      uVar77 = extractps(auVar159,1);
      *(undefined8 *)(param_2 + 0x10 + lVar25 * 0xc) = uVar77;
    }
    if ((bVar24 & 4) != 0) {
      uVar77 = extractps(auVar159,2);
      *(undefined8 *)(param_2 + 0x1c + lVar25 * 0xc) = uVar77;
    }
    if ((char)bVar24 < '\0') {
      uVar77 = extractps(auVar159,3);
      *(undefined8 *)(param_2 + 0x28 + lVar25 * 0xc) = uVar77;
    }
    if ((bVar24 & 1) != 0) {
      *(int *)(param_2 + 8 + lVar25 * 0xc) = auVar152._0_4_;
    }
    if ((bVar24 & 2) != 0) {
      uVar77 = extractps(auVar152,1);
      *(undefined8 *)(param_2 + 0x14 + lVar25 * 0xc) = uVar77;
    }
    if ((bVar24 & 4) != 0) {
      uVar77 = extractps(auVar152,2);
      *(undefined8 *)(param_2 + 0x20 + lVar25 * 0xc) = uVar77;
    }
    if ((char)bVar24 < '\0') {
      uVar77 = extractps(auVar152,3);
      *(undefined8 *)(param_2 + 0x2c + lVar25 * 0xc) = uVar77;
    }
  }
  return;
}

// PreSubstepInterpolation___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCuniCuni_sse4 @ 140d0fc20

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PreSubstepInterpolation___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCuniCuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,float param_7,uint param_8,int param_9)

{
  float *pfVar1;
  float *pfVar2;
  uint *puVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  byte bVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
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
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
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
  float fVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar63 [16];
  
  fVar8 = _UNK_1508be49c;
  fVar7 = _UNK_1508be498;
  fVar56 = _UNK_1508be494;
  fVar33 = ___xmm_00800000008000000080000000800000;
  auVar23 = ___xmm_3f8000003f8000003f8000003f800000;
  uVar15 = (ulonglong)param_8;
  uVar12 = param_9 - param_8;
  uVar20 = uVar12 + 3;
  if (-1 < (int)uVar12) {
    uVar20 = uVar12;
  }
  iVar9 = ((uVar20 & 0xfffffffc) - uVar12) + param_9;
  if ((int)param_8 < iVar9) {
    fVar37 = __real_3f800000 - param_7;
    uVar15 = (ulonglong)(int)param_8;
    lVar13 = uVar15 * 0xc;
    lVar18 = param_3 + 0x20;
    lVar19 = param_4 + 0x20;
    lVar16 = param_1 + 0x20;
    lVar17 = param_5 + 0x20;
    lVar11 = param_6 + 0x20;
    lVar10 = param_2 + 0x20;
    do {
      auVar46 = *(undefined1 (*) [16])(lVar18 + -0x20 + lVar13);
      auVar58 = *(undefined1 (*) [16])(lVar18 + -0x10 + lVar13);
      pfVar1 = (float *)(lVar18 + lVar13);
      auVar57 = insertps(auVar58,auVar46,0x8c);
      auVar67 = *(undefined1 (*) [16])(lVar19 + -0x20 + lVar13);
      auVar60 = *(undefined1 (*) [16])(lVar19 + -0x10 + lVar13);
      pfVar2 = (float *)(lVar19 + lVar13);
      auVar45 = insertps(auVar60,auVar67,0x8c);
      auVar50._0_8_ =
           CONCAT44(auVar67._12_4_ * fVar37 + auVar46._12_4_ * param_7,
                    auVar67._0_4_ * fVar37 + auVar46._0_4_ * param_7);
      auVar50._8_4_ = auVar60._8_4_ * fVar37 + auVar58._8_4_ * param_7;
      auVar50._12_4_ = pfVar2[1] * fVar37 + pfVar1[1] * param_7;
      auVar46._0_4_ = auVar67._4_4_ * fVar37 + auVar46._4_4_ * param_7;
      auVar46._4_4_ = auVar60._0_4_ * fVar37 + auVar58._0_4_ * param_7;
      auVar46._8_4_ = auVar60._12_4_ * fVar37 + auVar58._12_4_ * param_7;
      auVar46._12_4_ = pfVar2[2] * fVar37 + pfVar1[2] * param_7;
      auVar51._0_4_ = auVar45._0_4_ * fVar37 + auVar57._0_4_ * param_7;
      auVar51._4_4_ = auVar45._4_4_ * fVar37 + auVar57._4_4_ * param_7;
      auVar51._8_4_ = *pfVar2 * fVar37 + *pfVar1 * param_7;
      auVar51._12_4_ = pfVar2[3] * fVar37 + pfVar1[3] * param_7;
      auVar45._8_4_ = auVar50._8_4_;
      auVar45._0_8_ = auVar50._0_8_;
      auVar45._12_4_ = auVar50._12_4_;
      auVar58 = insertps(auVar45,auVar46,0x30);
      auVar64._4_4_ = auVar46._8_4_;
      auVar64._0_4_ = auVar46._4_4_;
      auVar64._8_4_ = auVar51._0_4_;
      auVar64._12_4_ = auVar51._4_4_;
      auVar58 = insertps(auVar58,auVar51,0x20);
      puVar5 = (undefined4 *)(lVar16 + -0x20 + lVar13);
      *puVar5 = auVar58._0_4_;
      puVar5[1] = auVar58._12_4_;
      puVar5[2] = auVar58._8_4_;
      puVar5[3] = auVar58._4_4_;
      auVar58 = blendps(auVar64,auVar50,4);
      puVar5 = (undefined4 *)(lVar16 + -0x10 + lVar13);
      *puVar5 = auVar58._0_4_;
      puVar5[1] = auVar58._12_4_;
      puVar5[2] = auVar58._8_4_;
      puVar5[3] = auVar58._4_4_;
      pfVar1 = (float *)(lVar16 + lVar13);
      *pfVar1 = auVar51._8_4_;
      pfVar1[1] = auVar50._12_4_;
      pfVar1[2] = auVar46._12_4_;
      pfVar1[3] = auVar51._12_4_;
      auVar46 = *(undefined1 (*) [16])(lVar17 + -0x20 + lVar13);
      auVar58 = *(undefined1 (*) [16])(lVar17 + -0x10 + lVar13);
      pfVar1 = (float *)(lVar17 + lVar13);
      auVar45 = insertps(auVar58,auVar46,0x8c);
      auVar67 = *(undefined1 (*) [16])(lVar11 + -0x20 + lVar13);
      auVar60 = *(undefined1 (*) [16])(lVar11 + -0x10 + lVar13);
      pfVar2 = (float *)(lVar11 + lVar13);
      auVar51 = insertps(auVar60,auVar67,0x8c);
      auVar57._0_4_ = auVar67._0_4_ * fVar37 + auVar46._0_4_ * param_7;
      auVar57._4_4_ = auVar67._12_4_ * fVar37 + auVar46._12_4_ * param_7;
      auVar57._8_4_ = auVar60._8_4_ * fVar37 + auVar58._8_4_ * param_7;
      auVar57._12_4_ = pfVar2[1] * fVar37 + pfVar1[1] * param_7;
      auVar59._0_4_ = auVar67._4_4_ * fVar37 + auVar46._4_4_ * param_7;
      auVar59._4_4_ = auVar60._0_4_ * fVar37 + auVar58._0_4_ * param_7;
      auVar59._8_4_ = auVar60._12_4_ * fVar37 + auVar58._12_4_ * param_7;
      auVar59._12_4_ = pfVar2[2] * fVar37 + pfVar1[2] * param_7;
      auVar52._0_4_ = auVar51._0_4_ * fVar37 + auVar45._0_4_ * param_7;
      auVar52._4_4_ = auVar51._4_4_ * fVar37 + auVar45._4_4_ * param_7;
      auVar52._8_4_ = *pfVar2 * fVar37 + *pfVar1 * param_7;
      auVar52._12_4_ = pfVar2[3] * fVar37 + pfVar1[3] * param_7;
      auVar65._0_4_ = auVar59._0_4_ * auVar59._0_4_ + auVar57._0_4_ * auVar57._0_4_;
      auVar65._4_4_ = auVar59._4_4_ * auVar59._4_4_ + auVar57._4_4_ * auVar57._4_4_;
      auVar65._8_4_ = auVar59._8_4_ * auVar59._8_4_ + auVar57._8_4_ * auVar57._8_4_;
      auVar65._12_4_ = auVar59._12_4_ * auVar59._12_4_ + auVar57._12_4_ * auVar57._12_4_;
      auVar58._0_4_ = auVar52._0_4_ * auVar52._0_4_ + auVar65._0_4_;
      auVar58._4_4_ = auVar52._4_4_ * auVar52._4_4_ + auVar65._4_4_;
      auVar58._8_4_ = auVar52._8_4_ * auVar52._8_4_ + auVar65._8_4_;
      auVar58._12_4_ = auVar52._12_4_ * auVar52._12_4_ + auVar65._12_4_;
      auVar45 = sqrtps(auVar65,auVar58);
      uVar20 = -(uint)(auVar58._0_4_ <= fVar33);
      uVar12 = -(uint)(auVar58._4_4_ <= fVar56);
      uVar21 = -(uint)(auVar58._8_4_ <= fVar7);
      uVar22 = -(uint)(auVar58._12_4_ <= fVar8);
      auVar67._4_4_ = uVar12;
      auVar67._0_4_ = uVar20;
      auVar67._8_4_ = uVar21;
      auVar67._12_4_ = uVar22;
      auVar46 = divps(auVar57,auVar45);
      auVar60 = divps(auVar59,auVar45);
      auVar58 = divps(auVar52,auVar45);
      auVar46 = blendvps(auVar46,auVar23,auVar67);
      auVar66._0_4_ = ~uVar20 & auVar60._0_4_;
      auVar66._4_4_ = ~uVar12 & auVar60._4_4_;
      auVar66._8_4_ = ~uVar21 & auVar60._8_4_;
      auVar66._12_4_ = ~uVar22 & auVar60._12_4_;
      auVar60._0_4_ = ~uVar20 & auVar58._0_4_;
      auVar60._4_4_ = ~uVar12 & auVar58._4_4_;
      auVar60._8_4_ = ~uVar21 & auVar58._8_4_;
      auVar60._12_4_ = ~uVar22 & auVar58._12_4_;
      auVar58 = insertps(auVar46,auVar66,0x30);
      auVar61._4_4_ = auVar66._8_4_;
      auVar61._0_4_ = auVar66._4_4_;
      auVar61._8_4_ = auVar60._0_4_;
      auVar61._12_4_ = auVar60._4_4_;
      auVar58 = insertps(auVar58,auVar60,0x20);
      puVar5 = (undefined4 *)(lVar10 + -0x20 + lVar13);
      *puVar5 = auVar58._0_4_;
      puVar5[1] = auVar58._12_4_;
      puVar5[2] = auVar58._8_4_;
      puVar5[3] = auVar58._4_4_;
      auVar58 = blendps(auVar61,auVar46,4);
      puVar5 = (undefined4 *)(lVar10 + -0x10 + lVar13);
      *puVar5 = auVar58._0_4_;
      puVar5[1] = auVar58._12_4_;
      puVar5[2] = auVar58._8_4_;
      puVar5[3] = auVar58._4_4_;
      puVar3 = (uint *)(lVar10 + lVar13);
      *puVar3 = auVar60._8_4_;
      puVar3[1] = auVar46._12_4_;
      puVar3[2] = auVar66._12_4_;
      puVar3[3] = auVar60._12_4_;
      uVar15 = uVar15 + 4;
      lVar18 = lVar18 + 0x30;
      lVar19 = lVar19 + 0x30;
      lVar16 = lVar16 + 0x30;
      lVar17 = lVar17 + 0x30;
      lVar11 = lVar11 + 0x30;
      lVar10 = lVar10 + 0x30;
    } while ((longlong)uVar15 < (longlong)iVar9);
  }
  iVar9 = (int)uVar15;
  if (iVar9 < param_9) {
    auVar23._0_4_ = -(uint)(iVar9 + (int)__xmm_00000003000000020000000100000000 < param_9);
    auVar23._4_4_ = -(uint)(iVar9 + __xmm_00000003000000020000000100000000._4_4_ < param_9);
    auVar23._8_4_ = -(uint)(iVar9 + _UNK_150631e08 < param_9);
    auVar23._12_4_ = -(uint)(iVar9 + _UNK_150631e0c < param_9);
    lVar18 = (longlong)iVar9;
    pauVar4 = (undefined1 (*) [16])(param_3 + lVar18 * 0xc);
    iVar9 = movmskps((int)param_2,auVar23);
    bVar14 = (char)((char)iVar9 << 4) >> 4;
    if (iVar9 == 0xf) {
      auVar46 = *pauVar4;
      auVar58 = pauVar4[1];
      auVar47._0_4_ = auVar46._0_4_;
      auVar67 = insertps(auVar58,auVar46,0x8c);
      auVar47._4_4_ = auVar46._12_4_;
      auVar47._8_4_ = auVar58._8_4_;
      auVar47._12_4_ = *(undefined4 *)(pauVar4[2] + 4);
      auVar53._4_4_ = auVar58._0_4_;
      auVar53._0_4_ = auVar46._4_4_;
      auVar53._8_4_ = auVar58._12_4_;
      auVar53._12_4_ = *(undefined4 *)(pauVar4[2] + 8);
      auVar68._0_8_ = auVar67._0_8_;
      auVar68._8_4_ = *(undefined4 *)pauVar4[2];
      auVar68._12_4_ = *(undefined4 *)(pauVar4[2] + 0xc);
      auVar46 = *(undefined1 (*) [16])(param_4 + lVar18 * 0xc);
      auVar58 = *(undefined1 (*) [16])(param_4 + 0x10 + lVar18 * 0xc);
      puVar5 = (undefined4 *)(param_4 + 0x20 + lVar18 * 0xc);
      auVar62._0_4_ = auVar46._0_4_;
      auVar67 = insertps(auVar58,auVar46,0x8c);
      auVar62._4_4_ = auVar46._12_4_;
      auVar62._8_4_ = auVar58._8_4_;
      auVar62._12_4_ = puVar5[1];
      auVar42._4_4_ = auVar58._0_4_;
      auVar42._0_4_ = auVar46._4_4_;
      auVar42._8_4_ = auVar58._12_4_;
      auVar42._12_4_ = puVar5[2];
      auVar38._0_8_ = auVar67._0_8_;
      auVar38._8_4_ = *puVar5;
      auVar38._12_4_ = puVar5[3];
    }
    else {
      auVar34._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar23._0_4_;
      auVar34._4_4_ = _UNK_150b50da4 & auVar23._4_4_;
      auVar34._8_4_ = _UNK_150b50da8 & auVar23._8_4_;
      auVar34._12_4_ = _UNK_150b50dac & auVar23._12_4_;
      lVar16 = extractps(auVar34,1);
      lVar17 = extractps(auVar34,2);
      lVar10 = extractps(auVar34,3);
      auVar46 = insertps(ZEXT416(*(uint *)*pauVar4),*(undefined4 *)(*pauVar4 + lVar16),0x10);
      auVar46 = insertps(auVar46,*(undefined4 *)(*pauVar4 + lVar17),0x20);
      auVar47 = insertps(auVar46,*(undefined4 *)(*pauVar4 + lVar10),0x30);
      auVar46 = ___xmm_000000280000001c0000001000000004 & auVar23;
      auVar58 = insertps(ZEXT416(*(uint *)(*pauVar4 + auVar46._0_4_)),
                         *(undefined4 *)(*pauVar4 + auVar46._4_4_),0x10);
      auVar58 = insertps(auVar58,*(undefined4 *)(*pauVar4 + auVar46._8_4_),0x20);
      auVar53 = insertps(auVar58,*(undefined4 *)(*pauVar4 + auVar46._12_4_),0x30);
      auVar58 = ___xmm_0000002c000000200000001400000008 & auVar23;
      auVar67 = insertps(ZEXT416(*(uint *)(*pauVar4 + auVar58._0_4_)),
                         *(undefined4 *)(*pauVar4 + auVar58._4_4_),0x10);
      auVar67 = insertps(auVar67,*(undefined4 *)(*pauVar4 + auVar58._8_4_),0x20);
      auVar68 = insertps(auVar67,*(undefined4 *)(*pauVar4 + auVar58._12_4_),0x30);
      lVar19 = param_4 + lVar18 * 0xc;
      auVar67 = insertps(ZEXT416(*(uint *)(param_4 + lVar18 * 0xc)),*(undefined4 *)(lVar16 + lVar19)
                         ,0x10);
      auVar67 = insertps(auVar67,*(undefined4 *)(lVar17 + lVar19),0x20);
      auVar62 = insertps(auVar67,*(undefined4 *)(lVar10 + lVar19),0x30);
      auVar67 = insertps(ZEXT416(*(uint *)((ulonglong)auVar46._0_4_ + lVar19)),
                         *(undefined4 *)((ulonglong)auVar46._4_4_ + lVar19),0x10);
      auVar67 = insertps(auVar67,*(undefined4 *)((ulonglong)auVar46._8_4_ + lVar19),0x20);
      auVar42 = insertps(auVar67,*(undefined4 *)((ulonglong)auVar46._12_4_ + lVar19),0x30);
      auVar46 = insertps(ZEXT416(*(uint *)((ulonglong)auVar58._0_4_ + lVar19)),
                         *(undefined4 *)((ulonglong)auVar58._4_4_ + lVar19),0x10);
      auVar46 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar58._8_4_ + lVar19),0x20);
      auVar38 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar58._12_4_ + lVar19),0x30);
    }
    fVar33 = __real_3f800000 - param_7;
    fVar56 = auVar62._0_4_ * fVar33 + auVar47._0_4_ * param_7;
    auVar63._0_8_ = CONCAT44(auVar62._4_4_ * fVar33 + auVar47._4_4_ * param_7,fVar56);
    auVar63._8_4_ = auVar62._8_4_ * fVar33 + auVar47._8_4_ * param_7;
    auVar63._12_4_ = auVar62._12_4_ * fVar33 + auVar47._12_4_ * param_7;
    auVar43._0_4_ = auVar42._0_4_ * fVar33 + auVar53._0_4_ * param_7;
    auVar43._4_4_ = auVar42._4_4_ * fVar33 + auVar53._4_4_ * param_7;
    auVar43._8_4_ = auVar42._8_4_ * fVar33 + auVar53._8_4_ * param_7;
    auVar43._12_4_ = auVar42._12_4_ * fVar33 + auVar53._12_4_ * param_7;
    auVar39._0_4_ = auVar38._0_4_ * fVar33 + auVar68._0_4_ * param_7;
    auVar39._4_4_ = auVar38._4_4_ * fVar33 + auVar68._4_4_ * param_7;
    auVar39._8_4_ = auVar38._8_4_ * fVar33 + auVar68._8_4_ * param_7;
    auVar39._12_4_ = auVar38._12_4_ * fVar33 + auVar68._12_4_ * param_7;
    pfVar1 = (float *)(param_1 + lVar18 * 0xc);
    if ((~bVar14 & 0xf) == 0) {
      auVar25._8_4_ = auVar63._8_4_;
      auVar25._0_8_ = auVar63._0_8_;
      auVar25._12_4_ = auVar63._12_4_;
      auVar23 = insertps(auVar25,auVar43,0x30);
      auVar31._4_4_ = auVar43._8_4_;
      auVar31._0_4_ = auVar43._4_4_;
      auVar31._8_4_ = auVar39._0_4_;
      auVar31._12_4_ = auVar39._4_4_;
      auVar23 = insertps(auVar23,auVar39,0x20);
      *pfVar1 = auVar23._0_4_;
      pfVar1[1] = auVar23._12_4_;
      pfVar1[2] = auVar23._8_4_;
      pfVar1[3] = auVar23._4_4_;
      auVar23 = blendps(auVar31,auVar63,4);
      pfVar1[4] = auVar23._0_4_;
      pfVar1[5] = auVar23._12_4_;
      pfVar1[6] = auVar23._8_4_;
      pfVar1[7] = auVar23._4_4_;
      pfVar1[8] = auVar39._8_4_;
      pfVar1[9] = auVar63._12_4_;
      pfVar1[10] = auVar43._12_4_;
      pfVar1[0xb] = auVar39._12_4_;
      lVar19 = lVar18 * 0xc;
      auVar23 = *(undefined1 (*) [16])(param_5 + lVar19);
      auVar46 = *(undefined1 (*) [16])(param_5 + 0x10 + lVar19);
      puVar5 = (undefined4 *)(param_5 + 0x20 + lVar19);
      auVar40._0_4_ = auVar23._0_4_;
      auVar58 = insertps(auVar46,auVar23,0x8c);
      auVar40._4_4_ = auVar23._12_4_;
      auVar40._8_4_ = auVar46._8_4_;
      auVar40._12_4_ = puVar5[1];
      auVar44._4_4_ = auVar46._0_4_;
      auVar44._0_4_ = auVar23._4_4_;
      auVar44._8_4_ = auVar46._12_4_;
      auVar44._12_4_ = puVar5[2];
      auVar24._0_8_ = auVar58._0_8_;
      auVar24._8_4_ = *puVar5;
      auVar24._12_4_ = puVar5[3];
      auVar23 = *(undefined1 (*) [16])(param_6 + lVar19);
      auVar46 = *(undefined1 (*) [16])(param_6 + 0x10 + lVar19);
      puVar5 = (undefined4 *)(param_6 + 0x20 + lVar19);
      auVar30._0_4_ = auVar23._0_4_;
      auVar58 = insertps(auVar46,auVar23,0x8c);
      auVar30._4_4_ = auVar23._12_4_;
      auVar30._8_4_ = auVar46._8_4_;
      auVar30._12_4_ = puVar5[1];
      auVar48._4_4_ = auVar46._0_4_;
      auVar48._0_4_ = auVar23._4_4_;
      auVar48._8_4_ = auVar46._12_4_;
      auVar48._12_4_ = puVar5[2];
      auVar54._0_8_ = auVar58._0_8_;
      auVar54._8_4_ = *puVar5;
      auVar54._12_4_ = puVar5[3];
    }
    else {
      if ((bVar14 & 1) != 0) {
        *pfVar1 = fVar56;
      }
      if ((bVar14 & 2) != 0) {
        uVar6 = extractps(auVar63,1);
        *(undefined8 *)(pfVar1 + 3) = uVar6;
      }
      if ((bVar14 & 4) != 0) {
        uVar6 = extractps(auVar63,2);
        *(undefined8 *)(pfVar1 + 6) = uVar6;
      }
      if ((char)bVar14 < '\0') {
        uVar6 = extractps(auVar63,3);
        *(undefined8 *)(pfVar1 + 9) = uVar6;
      }
      if ((bVar14 & 1) != 0) {
        pfVar1[1] = auVar43._0_4_;
      }
      if ((bVar14 & 2) != 0) {
        uVar6 = extractps(auVar43,1);
        *(undefined8 *)(pfVar1 + 4) = uVar6;
      }
      if ((bVar14 & 4) != 0) {
        uVar6 = extractps(auVar43,2);
        *(undefined8 *)(pfVar1 + 7) = uVar6;
      }
      if ((char)bVar14 < '\0') {
        uVar6 = extractps(auVar43,3);
        *(undefined8 *)(pfVar1 + 10) = uVar6;
      }
      if ((bVar14 & 1) != 0) {
        pfVar1[2] = auVar39._0_4_;
      }
      if ((bVar14 & 2) != 0) {
        uVar6 = extractps(auVar39,1);
        *(undefined8 *)(pfVar1 + 5) = uVar6;
      }
      if ((bVar14 & 4) != 0) {
        uVar6 = extractps(auVar39,2);
        *(undefined8 *)(pfVar1 + 8) = uVar6;
      }
      if ((char)bVar14 < '\0') {
        uVar6 = extractps(auVar39,3);
        *(undefined8 *)(pfVar1 + 0xb) = uVar6;
      }
      lVar16 = lVar18 * 0xc;
      auVar29._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar23._0_4_;
      auVar29._4_4_ = _UNK_150b50da4 & auVar23._4_4_;
      auVar29._8_4_ = _UNK_150b50da8 & auVar23._8_4_;
      auVar29._12_4_ = _UNK_150b50dac & auVar23._12_4_;
      lVar10 = extractps(auVar29,1);
      lVar13 = extractps(auVar29,2);
      lVar17 = extractps(auVar29,3);
      lVar19 = param_5 + lVar16;
      auVar46 = insertps(ZEXT416(*(uint *)(param_5 + lVar16)),*(undefined4 *)(lVar10 + lVar19),0x10)
      ;
      auVar46 = insertps(auVar46,*(undefined4 *)(lVar13 + lVar19),0x20);
      auVar40 = insertps(auVar46,*(undefined4 *)(lVar17 + lVar19),0x30);
      auVar58 = ___xmm_000000280000001c0000001000000004 & auVar23;
      auVar46 = insertps(ZEXT416(*(uint *)((ulonglong)auVar58._0_4_ + lVar19)),
                         *(undefined4 *)((ulonglong)auVar58._4_4_ + lVar19),0x10);
      auVar46 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar58._8_4_ + lVar19),0x20);
      auVar44 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar58._12_4_ + lVar19),0x30);
      auVar23 = auVar23 & ___xmm_0000002c000000200000001400000008;
      auVar46 = insertps(ZEXT416(*(uint *)((ulonglong)auVar23._0_4_ + lVar19)),
                         *(undefined4 *)((ulonglong)auVar23._4_4_ + lVar19),0x10);
      auVar46 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar23._8_4_ + lVar19),0x20);
      auVar24 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar23._12_4_ + lVar19),0x30);
      lVar19 = param_6 + lVar16;
      auVar46 = insertps(ZEXT416(*(uint *)(param_6 + lVar16)),*(undefined4 *)(lVar10 + lVar19),0x10)
      ;
      auVar46 = insertps(auVar46,*(undefined4 *)(lVar13 + lVar19),0x20);
      auVar30 = insertps(auVar46,*(undefined4 *)(lVar17 + lVar19),0x30);
      auVar46 = insertps(ZEXT416(*(uint *)((ulonglong)auVar58._0_4_ + lVar19)),
                         *(undefined4 *)((ulonglong)auVar58._4_4_ + lVar19),0x10);
      auVar46 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar58._8_4_ + lVar19),0x20);
      auVar48 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar58._12_4_ + lVar19),0x30);
      auVar46 = insertps(ZEXT416(*(uint *)((ulonglong)auVar23._0_4_ + lVar19)),
                         *(undefined4 *)((ulonglong)auVar23._4_4_ + lVar19),0x10);
      auVar46 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar23._8_4_ + lVar19),0x20);
      auVar54 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar23._12_4_ + lVar19),0x30);
    }
    auVar32._0_4_ = auVar30._0_4_ * fVar33 + auVar40._0_4_ * param_7;
    auVar32._4_4_ = auVar30._4_4_ * fVar33 + auVar40._4_4_ * param_7;
    auVar32._8_4_ = auVar30._8_4_ * fVar33 + auVar40._8_4_ * param_7;
    auVar32._12_4_ = auVar30._12_4_ * fVar33 + auVar40._12_4_ * param_7;
    auVar49._0_4_ = auVar48._0_4_ * fVar33 + auVar44._0_4_ * param_7;
    auVar49._4_4_ = auVar48._4_4_ * fVar33 + auVar44._4_4_ * param_7;
    auVar49._8_4_ = auVar48._8_4_ * fVar33 + auVar44._8_4_ * param_7;
    auVar49._12_4_ = auVar48._12_4_ * fVar33 + auVar44._12_4_ * param_7;
    auVar55._0_4_ = auVar54._0_4_ * fVar33 + auVar24._0_4_ * param_7;
    auVar55._4_4_ = auVar54._4_4_ * fVar33 + auVar24._4_4_ * param_7;
    auVar55._8_4_ = auVar54._8_4_ * fVar33 + auVar24._8_4_ * param_7;
    auVar55._12_4_ = auVar54._12_4_ * fVar33 + auVar24._12_4_ * param_7;
    auVar35._0_4_ = auVar49._0_4_ * auVar49._0_4_ + auVar32._0_4_ * auVar32._0_4_;
    auVar35._4_4_ = auVar49._4_4_ * auVar49._4_4_ + auVar32._4_4_ * auVar32._4_4_;
    auVar35._8_4_ = auVar49._8_4_ * auVar49._8_4_ + auVar32._8_4_ * auVar32._8_4_;
    auVar35._12_4_ = auVar49._12_4_ * auVar49._12_4_ + auVar32._12_4_ * auVar32._12_4_;
    auVar26._0_4_ = auVar55._0_4_ * auVar55._0_4_ + auVar35._0_4_;
    auVar26._4_4_ = auVar55._4_4_ * auVar55._4_4_ + auVar35._4_4_;
    auVar26._8_4_ = auVar55._8_4_ * auVar55._8_4_ + auVar35._8_4_;
    auVar26._12_4_ = auVar55._12_4_ * auVar55._12_4_ + auVar35._12_4_;
    auVar46 = sqrtps(auVar35,auVar26);
    uVar20 = -(uint)(auVar26._0_4_ <= ___xmm_00800000008000000080000000800000);
    uVar12 = -(uint)(auVar26._4_4_ <= _UNK_1508be494);
    uVar21 = -(uint)(auVar26._8_4_ <= _UNK_1508be498);
    uVar22 = -(uint)(auVar26._12_4_ <= _UNK_1508be49c);
    auVar27._4_4_ = uVar12;
    auVar27._0_4_ = uVar20;
    auVar27._8_4_ = uVar21;
    auVar27._12_4_ = uVar22;
    auVar23 = divps(auVar32,auVar46);
    auVar58 = divps(auVar49,auVar46);
    auVar46 = divps(auVar55,auVar46);
    auVar23 = blendvps(auVar23,___xmm_3f8000003f8000003f8000003f800000,auVar27);
    auVar36._0_4_ = ~uVar20 & auVar58._0_4_;
    auVar36._4_4_ = ~uVar12 & auVar58._4_4_;
    auVar36._8_4_ = ~uVar21 & auVar58._8_4_;
    auVar36._12_4_ = ~uVar22 & auVar58._12_4_;
    auVar28._0_4_ = ~uVar20 & auVar46._0_4_;
    auVar28._4_4_ = ~uVar12 & auVar46._4_4_;
    auVar28._8_4_ = ~uVar21 & auVar46._8_4_;
    auVar28._12_4_ = ~uVar22 & auVar46._12_4_;
    puVar5 = (undefined4 *)(param_2 + lVar18 * 0xc);
    if ((~bVar14 & 0xf) == 0) {
      auVar46 = insertps(auVar23,auVar36,0x30);
      auVar41._4_4_ = auVar36._8_4_;
      auVar41._0_4_ = auVar36._4_4_;
      auVar41._8_4_ = auVar28._0_4_;
      auVar41._12_4_ = auVar28._4_4_;
      auVar46 = insertps(auVar46,auVar28,0x20);
      *puVar5 = auVar46._0_4_;
      puVar5[1] = auVar46._12_4_;
      puVar5[2] = auVar46._8_4_;
      puVar5[3] = auVar46._4_4_;
      auVar46 = blendps(auVar41,auVar23,4);
      puVar5[4] = auVar46._0_4_;
      puVar5[5] = auVar46._12_4_;
      puVar5[6] = auVar46._8_4_;
      puVar5[7] = auVar46._4_4_;
      puVar5[8] = auVar28._8_4_;
      puVar5[9] = auVar23._12_4_;
      puVar5[10] = auVar36._12_4_;
      puVar5[0xb] = auVar28._12_4_;
    }
    else {
      if ((bVar14 & 1) != 0) {
        *puVar5 = auVar23._0_4_;
      }
      if ((bVar14 & 2) != 0) {
        uVar6 = extractps(auVar23,1);
        *(undefined8 *)(puVar5 + 3) = uVar6;
      }
      if ((bVar14 & 4) != 0) {
        uVar6 = extractps(auVar23,2);
        *(undefined8 *)(puVar5 + 6) = uVar6;
      }
      if ((char)bVar14 < '\0') {
        uVar6 = extractps(auVar23,3);
        *(undefined8 *)(puVar5 + 9) = uVar6;
      }
      if ((bVar14 & 1) != 0) {
        puVar5[1] = auVar36._0_4_;
      }
      if ((bVar14 & 2) != 0) {
        uVar6 = extractps(auVar36,1);
        *(undefined8 *)(puVar5 + 4) = uVar6;
      }
      if ((bVar14 & 4) != 0) {
        uVar6 = extractps(auVar36,2);
        *(undefined8 *)(puVar5 + 7) = uVar6;
      }
      if ((char)bVar14 < '\0') {
        uVar6 = extractps(auVar36,3);
        *(undefined8 *)(puVar5 + 10) = uVar6;
      }
      if ((bVar14 & 1) != 0) {
        puVar5[2] = auVar28._0_4_;
      }
      if ((bVar14 & 2) != 0) {
        uVar6 = extractps(auVar28,1);
        *(undefined8 *)(puVar5 + 5) = uVar6;
      }
      if ((bVar14 & 4) != 0) {
        uVar6 = extractps(auVar28,2);
        *(undefined8 *)(puVar5 + 8) = uVar6;
      }
      if ((char)bVar14 < '\0') {
        uVar6 = extractps(auVar28,3);
        *(undefined8 *)(puVar5 + 0xb) = uVar6;
      }
    }
  }
  return;
}

// CalculateBounds___REFs_5B_unFVector3f_5D_REFs_5B_unFVector3f_5D_un_3C_s_5B__c_unFVector3f_5D__3E_CuniCuni_sse4 @ 140d106d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CalculateBounds___REFs_5B_unFVector3f_5D_REFs_5B_unFVector3f_5D_un_3C_s_5B__c_unFVector3f_5D__3E_CuniCuni_sse4
               (undefined4 *param_1,undefined4 *param_2,longlong param_3,longlong param_4,
               int param_5,undefined1 (*param_6) [16])

{
  undefined1 (*pauVar1) [16];
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
  undefined1 auVar35 [12];
  undefined1 auVar36 [12];
  undefined1 auVar37 [12];
  undefined1 auVar38 [12];
  undefined1 auVar39 [12];
  undefined1 auVar40 [12];
  undefined1 auVar41 [12];
  undefined1 auVar42 [12];
  undefined1 auVar43 [12];
  undefined1 auVar44 [12];
  undefined1 auVar45 [12];
  byte bVar46;
  uint uVar47;
  int iVar48;
  longlong lVar49;
  uint uVar50;
  int iVar51;
  longlong lVar52;
  undefined4 in_R11D;
  int iVar53;
  longlong lVar54;
  undefined4 *puVar55;
  bool bVar56;
  float fVar64;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar65 [16];
  undefined4 uVar66;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined1 auVar67 [16];
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar81;
  undefined4 uVar82;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined4 uVar83;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined4 uVar84;
  undefined4 uVar95;
  undefined4 uVar96;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined4 uVar97;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined4 uVar108;
  undefined4 uVar120;
  undefined4 uVar121;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined4 uVar122;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined4 uVar130;
  undefined4 uVar131;
  undefined4 uVar132;
  undefined4 uVar133;
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined4 uVar141;
  undefined4 uVar142;
  undefined4 uVar143;
  undefined4 uVar144;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  
  auVar111 = *param_6;
  iVar53 = movmskps(in_R11D,auVar111);
  iVar48 = (int)param_4;
  uVar47 = param_5 - iVar48;
  uVar50 = uVar47 + 3;
  if (-1 < (int)uVar47) {
    uVar50 = uVar47;
  }
  iVar51 = ((uVar50 & 0xfffffffc) - uVar47) + param_5;
  uVar108 = *param_1;
  uVar120 = param_1[1];
  uVar121 = param_1[2];
  auVar109._4_4_ = uVar108;
  auVar109._0_4_ = uVar108;
  auVar109._8_4_ = uVar108;
  auVar109._12_4_ = uVar108;
  auVar98._4_4_ = uVar120;
  auVar98._0_4_ = uVar120;
  auVar98._8_4_ = uVar120;
  auVar98._12_4_ = uVar120;
  auVar85._4_4_ = uVar121;
  auVar85._0_4_ = uVar121;
  auVar85._8_4_ = uVar121;
  auVar85._12_4_ = uVar121;
  uVar108 = *param_2;
  uVar120 = param_2[1];
  uVar121 = param_2[2];
  auVar72._4_4_ = uVar108;
  auVar72._0_4_ = uVar108;
  auVar72._8_4_ = uVar108;
  auVar72._12_4_ = uVar108;
  auVar67._4_4_ = uVar120;
  auVar67._0_4_ = uVar120;
  auVar67._8_4_ = uVar120;
  auVar67._12_4_ = uVar120;
  auVar65._4_4_ = uVar121;
  auVar65._0_4_ = uVar121;
  auVar65._8_4_ = uVar121;
  auVar65._12_4_ = uVar121;
  if (iVar53 == 0xf) {
    if (iVar48 < iVar51) {
      param_4 = (longlong)iVar48;
      puVar55 = (undefined4 *)(param_3 + 0x20 + param_4 * 0xc);
      do {
        auVar139 = *(undefined1 (*) [16])(puVar55 + -8);
        auVar135 = *(undefined1 (*) [16])(puVar55 + -4);
        auVar111._0_4_ = auVar139._0_4_;
        auVar125 = insertps(auVar135,auVar139,0x8c);
        auVar111._4_4_ = auVar139._12_4_;
        auVar111._8_4_ = auVar135._8_4_;
        auVar111._12_4_ = puVar55[1];
        auVar73._0_8_ = auVar125._0_8_;
        auVar73._8_4_ = *puVar55;
        auVar73._12_4_ = puVar55[3];
        auVar109 = minps(auVar109,auVar111);
        auVar125._4_4_ = auVar135._0_4_;
        auVar125._0_4_ = auVar139._4_4_;
        auVar125._8_4_ = auVar135._12_4_;
        auVar125._12_4_ = puVar55[2];
        auVar98 = minps(auVar98,auVar125);
        auVar85 = minps(auVar85,auVar73);
        auVar72 = maxps(auVar72,auVar111);
        auVar137._4_4_ = auVar135._0_4_;
        auVar137._0_4_ = auVar139._4_4_;
        auVar137._8_4_ = auVar135._12_4_;
        auVar137._12_4_ = puVar55[2];
        auVar67 = maxps(auVar67,auVar137);
        auVar65 = maxps(auVar65,auVar73);
        param_4 = param_4 + 4;
        puVar55 = puVar55 + 0xc;
      } while (param_4 < iVar51);
    }
    iVar48 = (int)param_4;
    if (iVar48 < param_5) {
      auVar139._0_4_ = -(uint)(iVar48 + (int)__xmm_00000003000000020000000100000000 < param_5);
      auVar139._4_4_ = -(uint)(iVar48 + __xmm_00000003000000020000000100000000._4_4_ < param_5);
      auVar139._8_4_ = -(uint)(iVar48 + _UNK_150631e08 < param_5);
      auVar139._12_4_ = -(uint)(iVar48 + _UNK_150631e0c < param_5);
      pauVar1 = (undefined1 (*) [16])(param_3 + (longlong)iVar48 * 0xc);
      iVar48 = movmskps(iVar48,auVar139);
      bVar46 = (char)((char)iVar48 << 4) >> 4;
      if (iVar48 == 0xf) {
        auVar111 = *pauVar1;
        auVar139 = pauVar1[1];
        auVar110._0_4_ = auVar111._0_4_;
        auVar125 = insertps(auVar139,auVar111,0x8c);
        auVar110._4_4_ = auVar111._12_4_;
        auVar110._8_4_ = auVar139._8_4_;
        auVar110._12_4_ = *(undefined4 *)(pauVar1[2] + 4);
        auVar135._4_4_ = auVar139._0_4_;
        auVar135._0_4_ = auVar111._4_4_;
        auVar135._8_4_ = auVar139._12_4_;
        auVar135._12_4_ = *(undefined4 *)(pauVar1[2] + 8);
        auVar74._0_8_ = auVar125._0_8_;
        auVar74._8_4_ = *(undefined4 *)pauVar1[2];
        auVar74._12_4_ = *(undefined4 *)(pauVar1[2] + 0xc);
      }
      else {
        auVar86._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar139._0_4_;
        auVar86._4_4_ = _UNK_150b50da4 & auVar139._4_4_;
        auVar86._8_4_ = _UNK_150b50da8 & auVar139._8_4_;
        auVar86._12_4_ = _UNK_150b50dac & auVar139._12_4_;
        lVar49 = extractps(auVar86,1);
        lVar52 = extractps(auVar86,2);
        lVar54 = extractps(auVar86,3);
        auVar111 = insertps(ZEXT416(*(uint *)*pauVar1),*(undefined4 *)(*pauVar1 + lVar49),0x10);
        auVar111 = insertps(auVar111,*(undefined4 *)(*pauVar1 + lVar52),0x20);
        auVar110 = insertps(auVar111,*(undefined4 *)(*pauVar1 + lVar54),0x30);
        auVar111 = ___xmm_000000280000001c0000001000000004 & auVar139;
        auVar135 = insertps(ZEXT416(*(uint *)(*pauVar1 + auVar111._0_4_)),
                            *(undefined4 *)(*pauVar1 + auVar111._4_4_),0x10);
        auVar135 = insertps(auVar135,*(undefined4 *)(*pauVar1 + auVar111._8_4_),0x20);
        auVar135 = insertps(auVar135,*(undefined4 *)(*pauVar1 + auVar111._12_4_),0x30);
        auVar139 = auVar139 & ___xmm_0000002c000000200000001400000008;
        auVar111 = insertps(ZEXT416(*(uint *)(*pauVar1 + auVar139._0_4_)),
                            *(undefined4 *)(*pauVar1 + auVar139._4_4_),0x10);
        auVar111 = insertps(auVar111,*(undefined4 *)(*pauVar1 + auVar139._8_4_),0x20);
        auVar74 = insertps(auVar111,*(undefined4 *)(*pauVar1 + auVar139._12_4_),0x30);
      }
      local_c8 = minps(auVar109,auVar110);
      bVar56 = (bVar46 & 1) != 0;
      auVar139 = auVar109;
      if (bVar56) {
        auVar139 = local_c8;
      }
      local_d8 = minps(auVar98,auVar135);
      auVar125 = minps(auVar85,auVar74);
      uVar84 = auVar125._0_4_;
      uVar95 = auVar125._4_4_;
      uVar96 = auVar125._8_4_;
      uVar97 = auVar125._12_4_;
      auVar137 = auVar98;
      uVar108 = auVar85._0_4_;
      uVar120 = auVar85._4_4_;
      uVar121 = auVar85._8_4_;
      uVar122 = auVar85._12_4_;
      if (bVar56) {
        auVar137 = local_d8;
        uVar108 = uVar84;
        uVar120 = uVar95;
        uVar121 = uVar96;
        uVar122 = uVar97;
      }
      auVar111 = maxps(auVar67,auVar135);
      auVar73 = maxps(auVar65,auVar74);
      auVar135 = maxps(auVar72,auVar110);
      uVar71 = auVar135._0_4_;
      uVar81 = auVar135._4_4_;
      uVar82 = auVar135._8_4_;
      uVar83 = auVar135._12_4_;
      uVar66 = auVar111._0_4_;
      uVar68 = auVar111._4_4_;
      uVar69 = auVar111._8_4_;
      uVar70 = auVar111._12_4_;
      if (bVar56) {
        auVar139 = blendps(auVar109,auVar139,1);
        uVar130 = uVar66;
        uVar131 = uVar68;
        uVar132 = uVar69;
        uVar133 = uVar70;
        auVar109 = auVar73;
        uVar141 = uVar71;
        uVar142 = uVar81;
        uVar143 = uVar82;
        uVar144 = uVar83;
        if ((bVar46 & 2) != 0) goto LAB_140d111ab;
LAB_140d10f7c:
        auVar74 = blendps(auVar98,auVar137,1);
        auVar17._4_4_ = uVar120;
        auVar17._0_4_ = uVar108;
        auVar17._8_4_ = uVar121;
        auVar17._12_4_ = uVar122;
        auVar137 = blendps(auVar85,auVar17,1);
        auVar29._4_4_ = uVar142;
        auVar29._0_4_ = uVar141;
        auVar29._8_4_ = uVar143;
        auVar29._12_4_ = uVar144;
        auVar98 = blendps(auVar72,auVar29,1);
        auVar6._4_4_ = uVar131;
        auVar6._0_4_ = uVar130;
        auVar6._8_4_ = uVar132;
        auVar6._12_4_ = uVar133;
        auVar85 = blendps(auVar67,auVar6,1);
        auVar72 = blendps(auVar65,auVar109,1);
        auVar109 = blendps(auVar139,auVar139,2);
        uVar108 = auVar85._0_4_;
        uVar120 = auVar85._4_4_;
        uVar121 = auVar85._8_4_;
        uVar122 = auVar85._12_4_;
        auVar65 = auVar72;
        auVar67 = auVar74;
        uVar130 = auVar137._0_4_;
        uVar131 = auVar137._4_4_;
        uVar132 = auVar137._8_4_;
        uVar133 = auVar137._12_4_;
        uVar141 = auVar98._0_4_;
        uVar142 = auVar98._4_4_;
        uVar143 = auVar98._8_4_;
        uVar144 = auVar98._12_4_;
        if ((bVar46 & 4) == 0) goto LAB_140d10fe4;
LAB_140d1122d:
        auVar74 = blendps(auVar74,auVar67,2);
        auVar21._4_4_ = uVar131;
        auVar21._0_4_ = uVar130;
        auVar21._8_4_ = uVar132;
        auVar21._12_4_ = uVar133;
        auVar137 = blendps(auVar137,auVar21,2);
        auVar33._4_4_ = uVar142;
        auVar33._0_4_ = uVar141;
        auVar33._8_4_ = uVar143;
        auVar33._12_4_ = uVar144;
        auVar139 = blendps(auVar98,auVar33,2);
        auVar10._4_4_ = uVar120;
        auVar10._0_4_ = uVar108;
        auVar10._8_4_ = uVar121;
        auVar10._12_4_ = uVar122;
        auVar98 = blendps(auVar85,auVar10,2);
        auVar85 = blendps(auVar72,auVar65,2);
        auVar65 = blendps(auVar109,local_c8,4);
        auVar67 = auVar73;
        auVar72 = local_d8;
        if (-1 < (char)bVar46) goto LAB_140d112aa;
LAB_140d11047:
        auVar72 = blendps(auVar74,auVar72,4);
        if ((char)bVar46 < '\0') goto LAB_140d11054;
LAB_140d112bc:
        auVar20._4_4_ = uVar95;
        auVar20._0_4_ = uVar84;
        auVar20._8_4_ = uVar96;
        auVar20._12_4_ = uVar97;
        auVar137 = blendps(auVar137,auVar20,4);
        local_d8 = auVar72;
        if (-1 < (char)bVar46) goto LAB_140d112cd;
LAB_140d11061:
        auVar31._4_4_ = uVar81;
        auVar31._0_4_ = uVar71;
        auVar31._8_4_ = uVar82;
        auVar31._12_4_ = uVar83;
        auVar139 = blendps(auVar139,auVar31,4);
        if ((char)bVar46 < '\0') goto LAB_140d1106e;
LAB_140d112de:
        auVar9._4_4_ = uVar68;
        auVar9._0_4_ = uVar66;
        auVar9._8_4_ = uVar69;
        auVar9._12_4_ = uVar70;
        auVar74 = blendps(auVar98,auVar9,4);
        auVar135 = auVar139;
        if (-1 < (char)bVar46) goto LAB_140d112ef;
LAB_140d1107b:
        auVar110 = blendps(auVar85,auVar67,4);
      }
      else {
        auVar139 = blendps(auVar109,auVar139,1);
        uVar130 = auVar67._0_4_;
        uVar131 = auVar67._4_4_;
        uVar132 = auVar67._8_4_;
        uVar133 = auVar67._12_4_;
        auVar109 = auVar65;
        uVar141 = auVar72._0_4_;
        uVar142 = auVar72._4_4_;
        uVar143 = auVar72._8_4_;
        uVar144 = auVar72._12_4_;
        if ((bVar46 & 2) == 0) goto LAB_140d10f7c;
LAB_140d111ab:
        auVar74 = blendps(auVar98,auVar137,1);
        auVar22._4_4_ = uVar120;
        auVar22._0_4_ = uVar108;
        auVar22._8_4_ = uVar121;
        auVar22._12_4_ = uVar122;
        auVar137 = blendps(auVar85,auVar22,1);
        auVar34._4_4_ = uVar142;
        auVar34._0_4_ = uVar141;
        auVar34._8_4_ = uVar143;
        auVar34._12_4_ = uVar144;
        auVar98 = blendps(auVar72,auVar34,1);
        auVar99._4_4_ = uVar131;
        auVar99._0_4_ = uVar130;
        auVar99._8_4_ = uVar132;
        auVar99._12_4_ = uVar133;
        auVar85 = blendps(auVar67,auVar99,1);
        auVar72 = blendps(auVar65,auVar109,1);
        auVar109 = blendps(auVar139,local_c8,2);
        uVar108 = uVar66;
        uVar120 = uVar68;
        uVar121 = uVar69;
        uVar122 = uVar70;
        auVar65 = auVar73;
        auVar67 = local_d8;
        uVar130 = uVar84;
        uVar131 = uVar95;
        uVar132 = uVar96;
        uVar133 = uVar97;
        uVar141 = uVar71;
        uVar142 = uVar81;
        uVar143 = uVar82;
        uVar144 = uVar83;
        if ((bVar46 & 4) != 0) goto LAB_140d1122d;
LAB_140d10fe4:
        auVar74 = blendps(auVar74,auVar67,2);
        auVar18._4_4_ = uVar131;
        auVar18._0_4_ = uVar130;
        auVar18._8_4_ = uVar132;
        auVar18._12_4_ = uVar133;
        auVar137 = blendps(auVar137,auVar18,2);
        uVar84 = auVar137._0_4_;
        uVar95 = auVar137._4_4_;
        uVar96 = auVar137._8_4_;
        uVar97 = auVar137._12_4_;
        auVar30._4_4_ = uVar142;
        auVar30._0_4_ = uVar141;
        auVar30._8_4_ = uVar143;
        auVar30._12_4_ = uVar144;
        auVar139 = blendps(auVar98,auVar30,2);
        uVar71 = auVar139._0_4_;
        uVar81 = auVar139._4_4_;
        uVar82 = auVar139._8_4_;
        uVar83 = auVar139._12_4_;
        auVar7._4_4_ = uVar120;
        auVar7._0_4_ = uVar108;
        auVar7._8_4_ = uVar121;
        auVar7._12_4_ = uVar122;
        auVar98 = blendps(auVar85,auVar7,2);
        uVar66 = auVar98._0_4_;
        uVar68 = auVar98._4_4_;
        uVar69 = auVar98._8_4_;
        uVar70 = auVar98._12_4_;
        auVar85 = blendps(auVar72,auVar65,2);
        auVar65 = blendps(auVar109,auVar109,4);
        auVar67 = auVar85;
        auVar72 = auVar74;
        if ((char)bVar46 < '\0') goto LAB_140d11047;
LAB_140d112aa:
        auVar72 = blendps(auVar74,auVar72,4);
        local_c8 = auVar65;
        if (-1 < (char)bVar46) goto LAB_140d112bc;
LAB_140d11054:
        auVar19._4_4_ = uVar95;
        auVar19._0_4_ = uVar84;
        auVar19._8_4_ = uVar96;
        auVar19._12_4_ = uVar97;
        auVar137 = blendps(auVar137,auVar19,4);
        if ((char)bVar46 < '\0') goto LAB_140d11061;
LAB_140d112cd:
        auVar32._4_4_ = uVar81;
        auVar32._0_4_ = uVar71;
        auVar32._8_4_ = uVar82;
        auVar32._12_4_ = uVar83;
        auVar139 = blendps(auVar139,auVar32,4);
        auVar125 = auVar137;
        if (-1 < (char)bVar46) goto LAB_140d112de;
LAB_140d1106e:
        auVar8._4_4_ = uVar68;
        auVar8._0_4_ = uVar66;
        auVar8._8_4_ = uVar69;
        auVar8._12_4_ = uVar70;
        auVar74 = blendps(auVar98,auVar8,4);
        if ((char)bVar46 < '\0') goto LAB_140d1107b;
LAB_140d112ef:
        auVar110 = blendps(auVar85,auVar67,4);
        auVar111 = auVar74;
      }
      if (-1 < (char)bVar46) {
        auVar73 = auVar110;
      }
      auVar109 = blendps(auVar65,local_c8,8);
      auVar98 = blendps(auVar72,local_d8,8);
      auVar85 = blendps(auVar137,auVar125,8);
      auVar72 = blendps(auVar139,auVar135,8);
      auVar67 = blendps(auVar74,auVar111,8);
      auVar65 = blendps(auVar110,auVar73,8);
    }
    auVar40._4_8_ = auVar111._8_8_;
    auVar40._0_4_ = auVar109._4_4_;
    auVar58._0_8_ = auVar40._0_8_ << 0x20;
    auVar58._8_4_ = auVar109._8_4_;
    auVar58._12_4_ = auVar109._12_4_;
    auVar59._8_8_ = auVar109._8_8_;
    auVar59._0_8_ = auVar58._8_8_;
    auVar60 = minps(auVar59,auVar109);
    fVar64 = auVar60._4_4_;
    auVar116._4_4_ = fVar64;
    auVar116._0_4_ = fVar64;
    auVar116._8_4_ = auVar60._12_4_;
    auVar116._12_4_ = auVar60._12_4_;
    if (fVar64 <= auVar60._0_4_) {
      auVar60._0_4_ = fVar64;
    }
    auVar41._4_8_ = auVar116._8_8_;
    auVar41._0_4_ = auVar98._4_4_;
    auVar117._0_8_ = auVar41._0_8_ << 0x20;
    auVar117._8_4_ = auVar98._8_4_;
    auVar117._12_4_ = auVar98._12_4_;
    auVar118._8_8_ = auVar98._8_8_;
    auVar118._0_8_ = auVar117._8_8_;
    auVar119 = minps(auVar118,auVar98);
    fVar64 = auVar119._4_4_;
    auVar104._4_4_ = fVar64;
    auVar104._0_4_ = fVar64;
    auVar104._8_4_ = auVar119._12_4_;
    auVar104._12_4_ = auVar119._12_4_;
    if (fVar64 <= auVar119._0_4_) {
      auVar119._0_4_ = fVar64;
    }
    auVar42._4_8_ = auVar104._8_8_;
    auVar42._0_4_ = auVar85._4_4_;
    auVar105._0_8_ = auVar42._0_8_ << 0x20;
    auVar105._8_4_ = auVar85._8_4_;
    auVar105._12_4_ = auVar85._12_4_;
    auVar106._8_8_ = auVar85._8_8_;
    auVar106._0_8_ = auVar105._8_8_;
    auVar107 = minps(auVar106,auVar85);
    fVar64 = auVar107._4_4_;
    auVar91._4_4_ = fVar64;
    auVar91._0_4_ = fVar64;
    auVar91._8_4_ = auVar107._12_4_;
    auVar91._12_4_ = auVar107._12_4_;
    if (fVar64 <= auVar107._0_4_) {
      auVar107._0_4_ = fVar64;
    }
    *param_1 = auVar60._0_4_;
    param_1[1] = auVar119._0_4_;
    param_1[2] = auVar107._0_4_;
    auVar43._4_8_ = auVar91._8_8_;
    auVar43._0_4_ = auVar72._4_4_;
    auVar92._0_8_ = auVar43._0_8_ << 0x20;
    auVar92._8_4_ = auVar72._8_4_;
    auVar92._12_4_ = auVar72._12_4_;
    auVar93._8_8_ = auVar72._8_8_;
    auVar93._0_8_ = auVar92._8_8_;
    auVar94 = maxps(auVar93,auVar72);
    if (auVar94._0_4_ <= auVar94._4_4_) {
      auVar94._0_4_ = auVar94._4_4_;
    }
    uVar108 = auVar94._0_4_;
    auVar44._4_8_ = auVar72._8_8_;
    auVar44._0_4_ = auVar67._4_4_;
    auVar79._0_8_ = auVar44._0_8_ << 0x20;
    auVar79._8_4_ = auVar67._8_4_;
    auVar79._12_4_ = auVar67._12_4_;
    auVar80._8_8_ = auVar67._8_8_;
    auVar80._0_8_ = auVar79._8_8_;
    auVar78 = maxps(auVar80,auVar67);
    fVar64 = auVar78._4_4_;
    auVar57._4_4_ = (int)fVar64;
    auVar57._0_4_ = (int)fVar64;
    auVar57._8_4_ = auVar78._12_4_;
    auVar57._12_4_ = auVar78._12_4_;
    if (auVar78._0_4_ <= fVar64) {
      auVar78._0_4_ = fVar64;
    }
    goto LAB_140d1111a;
  }
  if (iVar48 < iVar51) {
    param_4 = (longlong)iVar48;
    puVar55 = (undefined4 *)(param_3 + 0x20 + param_4 * 0xc);
    do {
      auVar139 = *(undefined1 (*) [16])(puVar55 + -8);
      auVar135 = *(undefined1 (*) [16])(puVar55 + -4);
      auVar123._0_4_ = auVar139._0_4_;
      auVar125 = insertps(auVar135,auVar139,0x8c);
      auVar123._4_4_ = auVar139._12_4_;
      auVar123._8_4_ = auVar135._8_4_;
      auVar123._12_4_ = puVar55[1];
      auVar134._4_4_ = auVar135._0_4_;
      auVar134._0_4_ = auVar139._4_4_;
      auVar134._8_4_ = auVar135._12_4_;
      auVar134._12_4_ = puVar55[2];
      unaff_XMM8._0_8_ = auVar125._0_8_;
      unaff_XMM8._8_4_ = *puVar55;
      unaff_XMM8._12_4_ = puVar55[3];
      auVar109 = minps(auVar109,auVar123);
      auVar98 = minps(auVar98,auVar134);
      auVar85 = minps(auVar85,unaff_XMM8);
      auVar72 = maxps(auVar72,auVar123);
      auVar67 = maxps(auVar67,auVar134);
      auVar65 = maxps(auVar65,unaff_XMM8);
      param_4 = param_4 + 4;
      puVar55 = puVar55 + 0xc;
    } while (param_4 < iVar51);
  }
  iVar48 = (int)param_4;
  if (iVar48 < param_5) {
    auVar124._0_4_ = -(uint)(iVar48 + (int)__xmm_00000003000000020000000100000000 < param_5);
    auVar124._4_4_ = -(uint)(iVar48 + __xmm_00000003000000020000000100000000._4_4_ < param_5);
    auVar124._8_4_ = -(uint)(iVar48 + _UNK_150631e08 < param_5);
    auVar124._12_4_ = -(uint)(iVar48 + _UNK_150631e0c < param_5);
    pauVar1 = (undefined1 (*) [16])(param_3 + (longlong)iVar48 * 0xc);
    iVar48 = movmskps(iVar48,auVar124);
    bVar46 = (char)((char)iVar48 << 4) >> 4;
    if (iVar48 == 0xf) {
      auVar139 = *pauVar1;
      auVar135 = pauVar1[1];
      auVar140._0_4_ = auVar139._0_4_;
      auVar125 = insertps(auVar135,auVar139,0x8c);
      auVar140._4_4_ = auVar139._12_4_;
      auVar140._8_4_ = auVar135._8_4_;
      auVar140._12_4_ = *(undefined4 *)(pauVar1[2] + 4);
      auVar136._4_4_ = auVar135._0_4_;
      auVar136._0_4_ = auVar139._4_4_;
      auVar136._8_4_ = auVar135._12_4_;
      auVar136._12_4_ = *(undefined4 *)(pauVar1[2] + 8);
      auVar138._0_8_ = auVar125._0_8_;
      auVar138._8_4_ = *(undefined4 *)pauVar1[2];
      auVar138._12_4_ = *(undefined4 *)(pauVar1[2] + 0xc);
    }
    else {
      auVar126._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar124._0_4_;
      auVar126._4_4_ = _UNK_150b50da4 & auVar124._4_4_;
      auVar126._8_4_ = _UNK_150b50da8 & auVar124._8_4_;
      auVar126._12_4_ = _UNK_150b50dac & auVar124._12_4_;
      lVar49 = extractps(auVar126,1);
      lVar52 = extractps(auVar126,2);
      lVar54 = extractps(auVar126,3);
      auVar139 = insertps(ZEXT416(*(uint *)*pauVar1),*(undefined4 *)(*pauVar1 + lVar49),0x10);
      auVar139 = insertps(auVar139,*(undefined4 *)(*pauVar1 + lVar52),0x20);
      auVar140 = insertps(auVar139,*(undefined4 *)(*pauVar1 + lVar54),0x30);
      auVar139 = ___xmm_000000280000001c0000001000000004 & auVar124;
      auVar135 = insertps(ZEXT416(*(uint *)(*pauVar1 + auVar139._0_4_)),
                          *(undefined4 *)(*pauVar1 + auVar139._4_4_),0x10);
      auVar135 = insertps(auVar135,*(undefined4 *)(*pauVar1 + auVar139._8_4_),0x20);
      auVar136 = insertps(auVar135,*(undefined4 *)(*pauVar1 + auVar139._12_4_),0x30);
      auVar124 = auVar124 & ___xmm_0000002c000000200000001400000008;
      auVar139 = insertps(ZEXT416(*(uint *)(*pauVar1 + auVar124._0_4_)),
                          *(undefined4 *)(*pauVar1 + auVar124._4_4_),0x10);
      auVar139 = insertps(auVar139,*(undefined4 *)(*pauVar1 + auVar124._8_4_),0x20);
      auVar138 = insertps(auVar139,*(undefined4 *)(*pauVar1 + auVar124._12_4_),0x30);
    }
    local_c8 = minps(auVar109,auVar140);
    bVar56 = (bVar46 & 1) != 0;
    uVar108 = auVar109._0_4_;
    uVar120 = auVar109._4_4_;
    uVar121 = auVar109._8_4_;
    uVar122 = auVar109._12_4_;
    if (bVar56) {
      uVar108 = local_c8._0_4_;
      uVar120 = local_c8._4_4_;
      uVar121 = local_c8._8_4_;
      uVar122 = local_c8._12_4_;
    }
    auVar139 = minps(auVar98,auVar136);
    auVar135 = minps(auVar85,auVar138);
    local_d8._0_4_ = auVar139._0_4_;
    local_d8._4_4_ = auVar139._4_4_;
    local_d8._8_4_ = auVar139._8_4_;
    local_d8._12_4_ = auVar139._12_4_;
    local_b8._0_4_ = auVar135._0_4_;
    local_b8._4_4_ = auVar135._4_4_;
    local_b8._8_4_ = auVar135._8_4_;
    local_b8._12_4_ = auVar135._12_4_;
    uVar84 = auVar98._0_4_;
    uVar95 = auVar98._4_4_;
    uVar96 = auVar98._8_4_;
    uVar97 = auVar98._12_4_;
    uVar66 = auVar85._0_4_;
    uVar68 = auVar85._4_4_;
    uVar69 = auVar85._8_4_;
    uVar70 = auVar85._12_4_;
    if (bVar56) {
      uVar84 = local_d8._0_4_;
      uVar95 = local_d8._4_4_;
      uVar96 = local_d8._8_4_;
      uVar97 = local_d8._12_4_;
      uVar66 = local_b8._0_4_;
      uVar68 = local_b8._4_4_;
      uVar69 = local_b8._8_4_;
      uVar70 = local_b8._12_4_;
    }
    unaff_XMM8 = maxps(auVar67,auVar136);
    auVar137 = maxps(auVar65,auVar138);
    auVar125 = maxps(auVar72,auVar140);
    if (bVar56) {
      auVar5._4_4_ = uVar120;
      auVar5._0_4_ = uVar108;
      auVar5._8_4_ = uVar121;
      auVar5._12_4_ = uVar122;
      auVar110 = blendps(auVar109,auVar5,1);
      uVar108 = auVar110._0_4_;
      uVar120 = auVar110._4_4_;
      uVar121 = auVar110._8_4_;
      uVar122 = auVar110._12_4_;
      auVar109 = unaff_XMM8;
      auVar73 = auVar125;
      auVar74 = auVar137;
      if ((bVar46 & 2) != 0) goto LAB_140d10d64;
LAB_140d10b63:
      auVar11._4_4_ = uVar95;
      auVar11._0_4_ = uVar84;
      auVar11._8_4_ = uVar96;
      auVar11._12_4_ = uVar97;
      auVar99 = blendps(auVar98,auVar11,1);
      auVar23._4_4_ = uVar68;
      auVar23._0_4_ = uVar66;
      auVar23._8_4_ = uVar69;
      auVar23._12_4_ = uVar70;
      auVar86 = blendps(auVar85,auVar23,1);
      auVar73 = blendps(auVar72,auVar73,1);
      auVar98 = blendps(auVar67,auVar109,1);
      auVar85 = blendps(auVar65,auVar74,1);
      auVar3._4_4_ = uVar120;
      auVar3._0_4_ = uVar108;
      auVar3._8_4_ = uVar121;
      auVar3._12_4_ = uVar122;
      auVar109 = blendps(auVar110,auVar3,2);
      uVar66 = auVar109._0_4_;
      uVar68 = auVar109._4_4_;
      uVar69 = auVar109._8_4_;
      uVar70 = auVar109._12_4_;
      auVar65 = auVar98;
      auVar67 = auVar73;
      auVar72 = auVar85;
      uVar108 = auVar99._0_4_;
      uVar120 = auVar99._4_4_;
      uVar121 = auVar99._8_4_;
      uVar122 = auVar99._12_4_;
      uVar84 = auVar86._0_4_;
      uVar95 = auVar86._4_4_;
      uVar96 = auVar86._8_4_;
      uVar97 = auVar86._12_4_;
      if ((bVar46 & 4) == 0) goto LAB_140d10bcd;
LAB_140d10deb:
      auVar15._4_4_ = uVar120;
      auVar15._0_4_ = uVar108;
      auVar15._8_4_ = uVar121;
      auVar15._12_4_ = uVar122;
      auVar99 = blendps(auVar99,auVar15,2);
      auVar27._4_4_ = uVar95;
      auVar27._0_4_ = uVar84;
      auVar27._8_4_ = uVar96;
      auVar27._12_4_ = uVar97;
      auVar110 = blendps(auVar86,auVar27,2);
      auVar74 = blendps(auVar73,auVar67,2);
      auVar73 = blendps(auVar98,auVar65,2);
      auVar98 = blendps(auVar85,auVar72,2);
      auVar65 = blendps(auVar109,local_c8,4);
      auVar67 = unaff_XMM8;
      auVar72 = auVar125;
      auVar85 = auVar137;
      if (-1 < (char)bVar46) goto LAB_140d10e6c;
LAB_140d10c31:
      auVar13._4_4_ = local_d8._4_4_;
      auVar13._0_4_ = local_d8._0_4_;
      auVar13._8_4_ = local_d8._8_4_;
      auVar13._12_4_ = local_d8._12_4_;
      auVar86 = blendps(auVar99,auVar13,4);
      if ((char)bVar46 < '\0') goto LAB_140d10c3e;
LAB_140d10e7e:
      auVar26._4_4_ = local_b8._4_4_;
      auVar26._0_4_ = local_b8._0_4_;
      auVar26._8_4_ = local_b8._8_4_;
      auVar26._12_4_ = local_b8._12_4_;
      auVar110 = blendps(auVar110,auVar26,4);
      local_d8 = auVar86;
      if (-1 < (char)bVar46) goto LAB_140d10e8f;
LAB_140d10c4b:
      auVar72 = blendps(auVar74,auVar72,4);
      local_b8 = auVar135;
      if ((char)bVar46 < '\0') goto LAB_140d10c58;
LAB_140d10ea1:
      auVar67 = blendps(auVar73,auVar67,4);
      auVar125 = auVar72;
      if (-1 < (char)bVar46) goto LAB_140d10eb1;
LAB_140d10c65:
      auVar139 = blendps(auVar98,auVar85,4);
    }
    else {
      auVar2._4_4_ = uVar120;
      auVar2._0_4_ = uVar108;
      auVar2._8_4_ = uVar121;
      auVar2._12_4_ = uVar122;
      auVar110 = blendps(auVar109,auVar2,1);
      uVar108 = auVar110._0_4_;
      uVar120 = auVar110._4_4_;
      uVar121 = auVar110._8_4_;
      uVar122 = auVar110._12_4_;
      auVar109 = auVar67;
      auVar73 = auVar72;
      auVar74 = auVar65;
      if ((bVar46 & 2) == 0) goto LAB_140d10b63;
LAB_140d10d64:
      auVar16._4_4_ = uVar95;
      auVar16._0_4_ = uVar84;
      auVar16._8_4_ = uVar96;
      auVar16._12_4_ = uVar97;
      auVar99 = blendps(auVar98,auVar16,1);
      auVar28._4_4_ = uVar68;
      auVar28._0_4_ = uVar66;
      auVar28._8_4_ = uVar69;
      auVar28._12_4_ = uVar70;
      auVar86 = blendps(auVar85,auVar28,1);
      auVar73 = blendps(auVar72,auVar73,1);
      auVar98 = blendps(auVar67,auVar109,1);
      auVar85 = blendps(auVar65,auVar74,1);
      auVar109 = blendps(auVar110,local_c8,2);
      uVar66 = auVar109._0_4_;
      uVar68 = auVar109._4_4_;
      uVar69 = auVar109._8_4_;
      uVar70 = auVar109._12_4_;
      auVar65 = unaff_XMM8;
      auVar67 = auVar125;
      auVar72 = auVar137;
      uVar108 = local_d8._0_4_;
      uVar120 = local_d8._4_4_;
      uVar121 = local_d8._8_4_;
      uVar122 = local_d8._12_4_;
      uVar84 = local_b8._0_4_;
      uVar95 = local_b8._4_4_;
      uVar96 = local_b8._8_4_;
      uVar97 = local_b8._12_4_;
      if ((bVar46 & 4) != 0) goto LAB_140d10deb;
LAB_140d10bcd:
      auVar12._4_4_ = uVar120;
      auVar12._0_4_ = uVar108;
      auVar12._8_4_ = uVar121;
      auVar12._12_4_ = uVar122;
      auVar99 = blendps(auVar99,auVar12,2);
      local_d8._0_4_ = auVar99._0_4_;
      local_d8._4_4_ = auVar99._4_4_;
      local_d8._8_4_ = auVar99._8_4_;
      local_d8._12_4_ = auVar99._12_4_;
      auVar24._4_4_ = uVar95;
      auVar24._0_4_ = uVar84;
      auVar24._8_4_ = uVar96;
      auVar24._12_4_ = uVar97;
      auVar110 = blendps(auVar86,auVar24,2);
      local_b8._0_4_ = auVar110._0_4_;
      local_b8._4_4_ = auVar110._4_4_;
      local_b8._8_4_ = auVar110._8_4_;
      local_b8._12_4_ = auVar110._12_4_;
      auVar74 = blendps(auVar73,auVar67,2);
      auVar73 = blendps(auVar98,auVar65,2);
      auVar98 = blendps(auVar85,auVar72,2);
      auVar4._4_4_ = uVar68;
      auVar4._0_4_ = uVar66;
      auVar4._8_4_ = uVar69;
      auVar4._12_4_ = uVar70;
      auVar65 = blendps(auVar109,auVar4,4);
      auVar67 = auVar73;
      auVar72 = auVar74;
      auVar85 = auVar98;
      if ((char)bVar46 < '\0') goto LAB_140d10c31;
LAB_140d10e6c:
      auVar14._4_4_ = local_d8._4_4_;
      auVar14._0_4_ = local_d8._0_4_;
      auVar14._8_4_ = local_d8._8_4_;
      auVar14._12_4_ = local_d8._12_4_;
      auVar86 = blendps(auVar99,auVar14,4);
      local_c8 = auVar65;
      if (-1 < (char)bVar46) goto LAB_140d10e7e;
LAB_140d10c3e:
      auVar25._4_4_ = local_b8._4_4_;
      auVar25._0_4_ = local_b8._0_4_;
      auVar25._8_4_ = local_b8._8_4_;
      auVar25._12_4_ = local_b8._12_4_;
      auVar110 = blendps(auVar110,auVar25,4);
      local_d8 = auVar139;
      if ((char)bVar46 < '\0') goto LAB_140d10c4b;
LAB_140d10e8f:
      auVar72 = blendps(auVar74,auVar72,4);
      local_b8 = auVar110;
      if (-1 < (char)bVar46) goto LAB_140d10ea1;
LAB_140d10c58:
      auVar67 = blendps(auVar73,auVar67,4);
      if ((char)bVar46 < '\0') goto LAB_140d10c65;
LAB_140d10eb1:
      auVar139 = blendps(auVar98,auVar85,4);
      unaff_XMM8 = auVar67;
    }
    if (-1 < (char)bVar46) {
      auVar137 = auVar139;
    }
    auVar109 = blendps(auVar65,local_c8,8);
    auVar98 = blendps(auVar86,local_d8,8);
    auVar85 = blendps(auVar110,local_b8,8);
    auVar72 = blendps(auVar72,auVar125,8);
    auVar67 = blendps(auVar67,unaff_XMM8,8);
    auVar65 = blendps(auVar139,auVar137,8);
  }
  auVar57._0_4_ = -(uint)(auVar111._0_4_ == 0);
  auVar57._4_4_ = -(uint)(auVar111._4_4_ == 0);
  auVar57._8_4_ = -(uint)(auVar111._8_4_ == 0);
  auVar57._12_4_ = -(uint)(auVar111._12_4_ == 0);
  auVar111 = blendvps(auVar109,___xmm_7f8000007f8000007f8000007f800000,auVar57);
  auVar35._4_8_ = unaff_XMM8._8_8_;
  auVar35._0_4_ = auVar111._4_4_;
  auVar127._0_8_ = auVar35._0_8_ << 0x20;
  auVar127._8_4_ = auVar111._8_4_;
  auVar127._12_4_ = auVar111._12_4_;
  auVar128._8_8_ = auVar111._8_8_;
  auVar128._0_8_ = auVar127._8_8_;
  auVar129 = minps(auVar128,auVar111);
  fVar64 = auVar129._4_4_;
  auVar112._4_4_ = fVar64;
  auVar112._0_4_ = fVar64;
  auVar112._8_4_ = auVar129._12_4_;
  auVar112._12_4_ = auVar129._12_4_;
  if (fVar64 <= auVar129._0_4_) {
    auVar129._0_4_ = fVar64;
  }
  auVar111 = blendvps(auVar98,___xmm_7f8000007f8000007f8000007f800000,auVar57);
  auVar36._4_8_ = auVar112._8_8_;
  auVar36._0_4_ = auVar111._4_4_;
  auVar113._0_8_ = auVar36._0_8_ << 0x20;
  auVar113._8_4_ = auVar111._8_4_;
  auVar113._12_4_ = auVar111._12_4_;
  auVar114._8_8_ = auVar111._8_8_;
  auVar114._0_8_ = auVar113._8_8_;
  auVar115 = minps(auVar114,auVar111);
  fVar64 = auVar115._4_4_;
  auVar100._4_4_ = fVar64;
  auVar100._0_4_ = fVar64;
  auVar100._8_4_ = auVar115._12_4_;
  auVar100._12_4_ = auVar115._12_4_;
  if (fVar64 <= auVar115._0_4_) {
    auVar115._0_4_ = fVar64;
  }
  auVar111 = blendvps(auVar85,___xmm_7f8000007f8000007f8000007f800000,auVar57);
  auVar37._4_8_ = auVar100._8_8_;
  auVar37._0_4_ = auVar111._4_4_;
  auVar101._0_8_ = auVar37._0_8_ << 0x20;
  auVar101._8_4_ = auVar111._8_4_;
  auVar101._12_4_ = auVar111._12_4_;
  auVar102._8_8_ = auVar111._8_8_;
  auVar102._0_8_ = auVar101._8_8_;
  auVar103 = minps(auVar102,auVar111);
  fVar64 = auVar103._4_4_;
  auVar87._4_4_ = fVar64;
  auVar87._0_4_ = fVar64;
  auVar87._8_4_ = auVar103._12_4_;
  auVar87._12_4_ = auVar103._12_4_;
  if (fVar64 <= auVar103._0_4_) {
    auVar103._0_4_ = fVar64;
  }
  *param_1 = auVar129._0_4_;
  param_1[1] = auVar115._0_4_;
  param_1[2] = auVar103._0_4_;
  auVar111 = blendvps(auVar72,___xmm_ff800000ff800000ff800000ff800000,auVar57);
  auVar38._4_8_ = auVar87._8_8_;
  auVar38._0_4_ = auVar111._4_4_;
  auVar88._0_8_ = auVar38._0_8_ << 0x20;
  auVar88._8_4_ = auVar111._8_4_;
  auVar88._12_4_ = auVar111._12_4_;
  auVar89._8_8_ = auVar111._8_8_;
  auVar89._0_8_ = auVar88._8_8_;
  auVar90 = maxps(auVar89,auVar111);
  fVar64 = auVar90._4_4_;
  auVar75._4_4_ = fVar64;
  auVar75._0_4_ = fVar64;
  auVar75._8_4_ = auVar90._12_4_;
  auVar75._12_4_ = auVar90._12_4_;
  if (auVar90._0_4_ <= fVar64) {
    auVar90._0_4_ = fVar64;
  }
  uVar108 = auVar90._0_4_;
  auVar111 = blendvps(auVar67,___xmm_ff800000ff800000ff800000ff800000,auVar57);
  auVar39._4_8_ = auVar75._8_8_;
  auVar39._0_4_ = auVar111._4_4_;
  auVar76._0_8_ = auVar39._0_8_ << 0x20;
  auVar76._8_4_ = auVar111._8_4_;
  auVar76._12_4_ = auVar111._12_4_;
  auVar77._8_8_ = auVar111._8_8_;
  auVar77._0_8_ = auVar76._8_8_;
  auVar78 = maxps(auVar77,auVar111);
  if (auVar78._0_4_ <= auVar78._4_4_) {
    auVar78._0_4_ = auVar78._4_4_;
  }
  auVar65 = blendvps(auVar65,___xmm_ff800000ff800000ff800000ff800000,auVar57);
LAB_140d1111a:
  auVar45._4_8_ = auVar57._8_8_;
  auVar45._0_4_ = auVar65._4_4_;
  auVar61._0_8_ = auVar45._0_8_ << 0x20;
  auVar61._8_4_ = auVar65._8_4_;
  auVar61._12_4_ = auVar65._12_4_;
  auVar62._8_8_ = auVar65._8_8_;
  auVar62._0_8_ = auVar61._8_8_;
  auVar63 = maxps(auVar62,auVar65);
  if (auVar63._0_4_ <= auVar63._4_4_) {
    auVar63._0_4_ = auVar63._4_4_;
  }
  *param_2 = uVar108;
  param_2[1] = auVar78._0_4_;
  param_2[2] = auVar63._0_4_;
  return;
}

// CalculateSquaredRadius___REFunfREFs_5B__c_unFVector3f_5D_un_3C_s_5B__c_unFVector3f_5D__3E_CuniCuni_sse4 @ 140d11310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CalculateSquaredRadius___REFunfREFs_5B__c_unFVector3f_5D_un_3C_s_5B__c_unFVector3f_5D__3E_CuniCuni_sse4
               (undefined4 *param_1,float *param_2,longlong param_3,longlong param_4,int param_5,
               int *param_6)

{
  undefined1 (*pauVar1) [16];
  undefined4 uVar2;
  undefined1 auVar3 [12];
  uint uVar4;
  float *pfVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar23;
  float fVar24;
  undefined1 auVar22 [16];
  float fVar25;
  float fVar26;
  float fVar30;
  float fVar31;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar32;
  undefined1 auVar29 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  
  uVar2 = *param_1;
  auVar17._4_4_ = uVar2;
  auVar17._0_4_ = uVar2;
  auVar17._8_4_ = uVar2;
  auVar17._12_4_ = uVar2;
  iVar6 = (int)param_4;
  uVar4 = param_5 - iVar6;
  uVar10 = uVar4 + 3;
  if (-1 < (int)uVar4) {
    uVar10 = uVar4;
  }
  iVar11 = ((uVar10 & 0xfffffffc) - uVar4) + param_5;
  if (iVar6 < iVar11) {
    param_4 = (longlong)iVar6;
    pfVar5 = (float *)(param_3 + 0x20 + param_4 * 0xc);
    fVar20 = *param_2;
    fVar25 = param_2[1];
    fVar32 = param_2[2];
    do {
      auVar18 = *(undefined1 (*) [16])(pfVar5 + -8);
      auVar12 = *(undefined1 (*) [16])(pfVar5 + -4);
      auVar27 = insertps(auVar12,auVar18,0x8c);
      fVar21 = auVar18._0_4_ - fVar20;
      fVar23 = auVar18._12_4_ - fVar20;
      fVar24 = auVar12._8_4_ - fVar20;
      fVar33 = auVar18._4_4_ - fVar25;
      fVar34 = auVar12._0_4_ - fVar25;
      fVar35 = auVar12._12_4_ - fVar25;
      fVar26 = auVar27._0_4_ - fVar32;
      fVar30 = auVar27._4_4_ - fVar32;
      auVar18._0_4_ = fVar26 * fVar26 + fVar33 * fVar33 + fVar21 * fVar21;
      auVar18._4_4_ = fVar30 * fVar30 + fVar34 * fVar34 + fVar23 * fVar23;
      auVar18._8_4_ = (*pfVar5 - fVar32) * (*pfVar5 - fVar32) + fVar35 * fVar35 + fVar24 * fVar24;
      auVar18._12_4_ =
           (pfVar5[3] - fVar32) * (pfVar5[3] - fVar32) +
           (pfVar5[2] - fVar25) * (pfVar5[2] - fVar25) + (pfVar5[1] - fVar20) * (pfVar5[1] - fVar20)
      ;
      auVar17 = maxps(auVar17,auVar18);
      param_4 = param_4 + 4;
      pfVar5 = pfVar5 + 0xc;
    } while (param_4 < iVar11);
  }
  iVar6 = (int)param_4;
  if (iVar6 < param_5) {
    auVar12._0_4_ = -(uint)(iVar6 + (int)__xmm_00000003000000020000000100000000 < param_5);
    auVar12._4_4_ = -(uint)(iVar6 + __xmm_00000003000000020000000100000000._4_4_ < param_5);
    auVar12._8_4_ = -(uint)(iVar6 + _UNK_150631e08 < param_5);
    auVar12._12_4_ = -(uint)(iVar6 + _UNK_150631e0c < param_5);
    pauVar1 = (undefined1 (*) [16])(param_3 + (longlong)iVar6 * 0xc);
    iVar6 = movmskps((int)param_3,auVar12);
    if (iVar6 == 0xf) {
      auVar18 = *pauVar1;
      auVar27 = pauVar1[1];
      auVar19._0_4_ = auVar18._0_4_;
      auVar28 = insertps(auVar27,auVar18,0x8c);
      auVar19._4_4_ = auVar18._12_4_;
      auVar19._8_4_ = auVar27._8_4_;
      auVar19._12_4_ = *(undefined4 *)(pauVar1[2] + 4);
      auVar22._4_4_ = auVar27._0_4_;
      auVar22._0_4_ = auVar18._4_4_;
      auVar22._8_4_ = auVar27._12_4_;
      auVar22._12_4_ = *(undefined4 *)(pauVar1[2] + 8);
      auVar27._0_8_ = auVar28._0_8_;
      auVar27._8_4_ = *(undefined4 *)pauVar1[2];
      auVar27._12_4_ = *(undefined4 *)(pauVar1[2] + 0xc);
    }
    else {
      auVar28._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar12._0_4_;
      auVar28._4_4_ = _UNK_150b50da4 & auVar12._4_4_;
      auVar28._8_4_ = _UNK_150b50da8 & auVar12._8_4_;
      auVar28._12_4_ = _UNK_150b50dac & auVar12._12_4_;
      lVar7 = extractps(auVar28,1);
      lVar8 = extractps(auVar28,2);
      lVar9 = extractps(auVar28,3);
      auVar18 = insertps(ZEXT416(*(uint *)*pauVar1),*(undefined4 *)(*pauVar1 + lVar7),0x10);
      auVar18 = insertps(auVar18,*(undefined4 *)(*pauVar1 + lVar8),0x20);
      auVar19 = insertps(auVar18,*(undefined4 *)(*pauVar1 + lVar9),0x30);
      auVar18 = ___xmm_000000280000001c0000001000000004 & auVar12;
      auVar27 = insertps(ZEXT416(*(uint *)(*pauVar1 + auVar18._0_4_)),
                         *(undefined4 *)(*pauVar1 + auVar18._4_4_),0x10);
      auVar27 = insertps(auVar27,*(undefined4 *)(*pauVar1 + auVar18._8_4_),0x20);
      auVar22 = insertps(auVar27,*(undefined4 *)(*pauVar1 + auVar18._12_4_),0x30);
      auVar18 = ___xmm_0000002c000000200000001400000008 & auVar12;
      auVar27 = insertps(ZEXT416(*(uint *)(*pauVar1 + auVar18._0_4_)),
                         *(undefined4 *)(*pauVar1 + auVar18._4_4_),0x10);
      auVar27 = insertps(auVar27,*(undefined4 *)(*pauVar1 + auVar18._8_4_),0x20);
      auVar27 = insertps(auVar27,*(undefined4 *)(*pauVar1 + auVar18._12_4_),0x30);
    }
    fVar20 = *param_2;
    fVar25 = param_2[1];
    fVar32 = param_2[2];
    fVar21 = auVar19._0_4_ - fVar20;
    fVar23 = auVar19._4_4_ - fVar20;
    fVar24 = auVar19._8_4_ - fVar20;
    fVar20 = auVar19._12_4_ - fVar20;
    fVar26 = auVar22._0_4_ - fVar25;
    fVar30 = auVar22._4_4_ - fVar25;
    fVar33 = auVar22._8_4_ - fVar25;
    fVar25 = auVar22._12_4_ - fVar25;
    fVar34 = auVar27._0_4_ - fVar32;
    fVar35 = auVar27._4_4_ - fVar32;
    fVar31 = auVar27._8_4_ - fVar32;
    fVar32 = auVar27._12_4_ - fVar32;
    auVar29._0_4_ = fVar34 * fVar34 + fVar26 * fVar26 + fVar21 * fVar21;
    auVar29._4_4_ = fVar35 * fVar35 + fVar30 * fVar30 + fVar23 * fVar23;
    auVar29._8_4_ = fVar31 * fVar31 + fVar33 * fVar33 + fVar24 * fVar24;
    auVar29._12_4_ = fVar32 * fVar32 + fVar25 * fVar25 + fVar20 * fVar20;
    auVar18 = maxps(auVar17,auVar29);
    auVar17 = blendvps(auVar17,auVar18,auVar12);
  }
  auVar16._0_4_ = -(uint)(*param_6 == 0);
  auVar16._4_4_ = -(uint)(param_6[1] == 0);
  auVar16._8_4_ = -(uint)(param_6[2] == 0);
  auVar16._12_4_ = -(uint)(param_6[3] == 0);
  auVar17 = blendvps(auVar17,___xmm_ff800000ff800000ff800000ff800000,auVar16);
  auVar3._4_8_ = auVar16._8_8_;
  auVar3._0_4_ = auVar17._4_4_;
  auVar13._0_8_ = auVar3._0_8_ << 0x20;
  auVar13._8_4_ = auVar17._8_4_;
  auVar13._12_4_ = auVar17._12_4_;
  auVar14._8_8_ = auVar17._8_8_;
  auVar14._0_8_ = auVar13._8_8_;
  auVar15 = maxps(auVar14,auVar17);
  if (auVar15._0_4_ <= auVar15._4_4_) {
    auVar15._0_4_ = auVar15._4_4_;
  }
  *param_1 = auVar15._0_4_;
  return;
}

// ApplyPreSimulationTransforms_sse4 @ 140d11590

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPreSimulationTransforms_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,longlong param_8,longlong param_9,float *param_10,
               undefined4 param_11,int param_12,int param_13)

{
  float *pfVar1;
  undefined1 (*pauVar2) [16];
  undefined4 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  longlong unaff_RBP;
  longlong lVar19;
  uint *puVar20;
  byte bVar21;
  longlong lVar22;
  float *pfVar23;
  byte bVar24;
  uint uVar25;
  byte bVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  float fVar30;
  float fVar31;
  float fVar49;
  float fVar51;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar54;
  undefined1 auVar37 [16];
  float fVar50;
  float fVar52;
  float fVar53;
  float fVar55;
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
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auVar60 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar67;
  float fVar68;
  float fVar75;
  float fVar77;
  undefined1 auVar69 [16];
  float fVar79;
  undefined1 auVar70 [16];
  float fVar76;
  float fVar78;
  float fVar80;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  float fVar81;
  float fVar87;
  float fVar88;
  float fVar89;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined8 uVar90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  float fVar105;
  float fVar107;
  float fVar108;
  undefined1 auVar106 [16];
  float fVar109;
  float fVar110;
  float fVar112;
  float fVar113;
  undefined1 auVar111 [16];
  float fVar114;
  float fVar115;
  float fVar116;
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar131;
  float fVar132;
  undefined1 auVar123 [16];
  float fVar133;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  float fVar134;
  float fVar136;
  float fVar137;
  undefined1 auVar135 [16];
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  
  uVar25 = param_13 - param_12;
  uVar18 = uVar25 + 3;
  if (-1 < (int)uVar25) {
    uVar18 = uVar25;
  }
  iVar12 = ((uVar18 & 0xfffffffc) - uVar25) + param_13;
  if (param_12 < iVar12) {
    lVar28 = (longlong)param_12;
    unaff_RBP = lVar28 * 0xc;
    lVar13 = param_3 + 0x20;
    pfVar23 = (float *)(lVar28 * 0x10 + 0x30 + param_1);
    lVar27 = param_2 + 0x20;
    lVar22 = param_4 + 0x20;
    lVar15 = param_7 + 0x20;
    lVar16 = param_5 + 0x20;
    param_12 = param_12 << 2;
    do {
      auVar32 = pmulld(*(undefined1 (*) [16])(param_8 + param_12),
                       ___xmm_00000006000000060000000600000006);
      lVar19 = (longlong)auVar32._0_4_;
      lVar14 = (longlong)auVar32._4_4_;
      lVar17 = (longlong)auVar32._8_4_;
      lVar29 = (longlong)auVar32._12_4_;
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + lVar19 * 8)),
                         *(undefined4 *)(param_9 + lVar14 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + lVar17 * 8),0x20);
      auVar135 = insertps(auVar32,*(undefined4 *)(param_9 + lVar29 * 8),0x30);
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + 4 + lVar19 * 8)),
                         *(undefined4 *)(param_9 + 4 + lVar14 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + 4 + lVar17 * 8),0x20);
      auVar123 = insertps(auVar32,*(undefined4 *)(param_9 + 4 + lVar29 * 8),0x30);
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + 8 + lVar19 * 8)),
                         *(undefined4 *)(param_9 + 8 + lVar14 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + 8 + lVar17 * 8),0x20);
      auVar111 = insertps(auVar32,*(undefined4 *)(param_9 + 8 + lVar29 * 8),0x30);
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + 0xc + lVar19 * 8)),
                         *(undefined4 *)(param_9 + 0xc + lVar14 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + 0xc + lVar17 * 8),0x20);
      auVar104 = insertps(auVar32,*(undefined4 *)(param_9 + 0xc + lVar29 * 8),0x30);
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + 0x10 + lVar19 * 8)),
                         *(undefined4 *)(param_9 + 0x10 + lVar14 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + 0x10 + lVar17 * 8),0x20);
      auVar33 = insertps(auVar32,*(undefined4 *)(param_9 + 0x10 + lVar29 * 8),0x30);
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + 0x18 + lVar19 * 8)),
                         *(undefined4 *)(param_9 + 0x18 + lVar14 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + 0x18 + lVar17 * 8),0x20);
      auVar34 = insertps(auVar32,*(undefined4 *)(param_9 + 0x18 + lVar29 * 8),0x30);
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + 0x20 + lVar19 * 8)),
                         *(undefined4 *)(param_9 + 0x20 + lVar14 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + 0x20 + lVar17 * 8),0x20);
      auVar35 = insertps(auVar32,*(undefined4 *)(param_9 + 0x20 + lVar29 * 8),0x30);
      fVar55 = auVar35._12_4_;
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + 0x24 + lVar19 * 8)),
                         *(undefined4 *)(param_9 + 0x24 + lVar14 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + 0x24 + lVar17 * 8),0x20);
      auVar36 = insertps(auVar32,*(undefined4 *)(param_9 + 0x24 + lVar29 * 8),0x30);
      fVar148 = auVar36._12_4_;
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + 0x28 + lVar19 * 8)),
                         *(undefined4 *)(param_9 + 0x28 + lVar14 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + 0x28 + lVar17 * 8),0x20);
      auVar106 = insertps(auVar32,*(undefined4 *)(param_9 + 0x28 + lVar29 * 8),0x30);
      auVar32 = *(undefined1 (*) [16])(lVar13 + -0x20 + unaff_RBP);
      auVar37 = *(undefined1 (*) [16])(lVar13 + -0x10 + unaff_RBP);
      pfVar1 = (float *)(lVar13 + unaff_RBP);
      auVar69 = insertps(auVar37,auVar32,0x8c);
      fVar31 = auVar35._0_4_;
      fVar81 = auVar32._0_4_ * fVar31;
      fVar50 = auVar35._4_4_;
      fVar87 = auVar32._12_4_ * fVar50;
      fVar53 = auVar35._8_4_;
      fVar88 = auVar37._8_4_ * fVar53;
      fVar89 = pfVar1[1] * fVar55;
      fVar142 = auVar36._0_4_;
      fVar30 = auVar32._4_4_ * fVar142;
      fVar144 = auVar36._4_4_;
      fVar49 = auVar37._0_4_ * fVar144;
      fVar146 = auVar36._8_4_;
      fVar51 = auVar37._12_4_ * fVar146;
      fVar54 = pfVar1[2] * fVar148;
      fVar68 = auVar106._0_4_;
      fVar67 = auVar69._0_4_ * fVar68;
      fVar76 = auVar106._4_4_;
      fVar75 = auVar69._4_4_ * fVar76;
      fVar78 = auVar106._8_4_;
      fVar77 = *pfVar1 * fVar78;
      fVar80 = auVar106._12_4_;
      fVar79 = pfVar1[3] * fVar80;
      fVar134 = auVar135._0_4_;
      fVar136 = auVar135._4_4_;
      fVar137 = auVar135._8_4_;
      fVar138 = auVar135._12_4_;
      fVar139 = auVar123._0_4_;
      fVar131 = auVar123._4_4_;
      fVar132 = auVar123._8_4_;
      fVar133 = auVar123._12_4_;
      fVar110 = auVar111._0_4_;
      fVar112 = auVar111._4_4_;
      fVar113 = auVar111._8_4_;
      fVar119 = auVar111._12_4_;
      fVar114 = fVar134 * fVar30 - fVar139 * fVar81;
      fVar115 = fVar136 * fVar49 - fVar131 * fVar87;
      fVar116 = fVar137 * fVar51 - fVar132 * fVar88;
      fVar117 = fVar138 * fVar54 - fVar133 * fVar89;
      fVar59 = fVar139 * fVar67 - fVar110 * fVar30;
      fVar61 = fVar131 * fVar75 - fVar112 * fVar49;
      fVar62 = fVar132 * fVar77 - fVar113 * fVar51;
      fVar63 = fVar133 * fVar79 - fVar119 * fVar54;
      fVar118 = fVar110 * fVar81 - fVar134 * fVar67;
      fVar120 = fVar112 * fVar87 - fVar136 * fVar75;
      fVar121 = fVar113 * fVar88 - fVar137 * fVar77;
      fVar122 = fVar119 * fVar89 - fVar138 * fVar79;
      fVar59 = fVar59 + fVar59;
      fVar61 = fVar61 + fVar61;
      fVar62 = fVar62 + fVar62;
      fVar63 = fVar63 + fVar63;
      fVar118 = fVar118 + fVar118;
      fVar120 = fVar120 + fVar120;
      fVar121 = fVar121 + fVar121;
      fVar122 = fVar122 + fVar122;
      fVar114 = fVar114 + fVar114;
      fVar115 = fVar115 + fVar115;
      fVar116 = fVar116 + fVar116;
      fVar117 = fVar117 + fVar117;
      fVar107 = auVar104._0_4_;
      fVar108 = auVar104._4_4_;
      fVar109 = auVar104._12_4_;
      fVar105 = auVar104._8_4_;
      fVar140 = param_10[2];
      fVar141 = ((fVar134 * fVar118 - fVar59 * fVar139) + fVar107 * fVar114 + fVar67 + auVar34._0_4_
                ) - fVar140;
      fVar143 = ((fVar136 * fVar120 - fVar61 * fVar131) + fVar108 * fVar115 + fVar75 + auVar34._4_4_
                ) - fVar140;
      fVar145 = ((fVar137 * fVar121 - fVar62 * fVar132) + fVar105 * fVar116 + fVar77 + auVar34._8_4_
                ) - fVar140;
      fVar147 = ((fVar138 * fVar122 - fVar63 * fVar133) + fVar109 * fVar117 + fVar79 +
                auVar34._12_4_) - fVar140;
      puVar3 = (undefined4 *)(param_6 + param_12);
      uVar11 = *puVar3;
      fVar77 = (float)puVar3[1];
      fVar79 = (float)puVar3[2];
      fVar52 = (float)puVar3[3];
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + 0x14 + lVar19 * 8)),
                         *(undefined4 *)(param_9 + 0x14 + lVar14 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + 0x14 + lVar17 * 8),0x20);
      auVar104 = insertps(auVar32,*(undefined4 *)(param_9 + 0x14 + lVar29 * 8),0x30);
      fVar67 = *param_10;
      fVar81 = ((fVar139 * fVar114 - fVar118 * fVar110) + fVar107 * fVar59 + fVar81 + auVar33._0_4_)
               - fVar67;
      fVar87 = ((fVar131 * fVar115 - fVar120 * fVar112) + fVar108 * fVar61 + fVar87 + auVar33._4_4_)
               - fVar67;
      auVar70._0_8_ = CONCAT44(fVar87,fVar81);
      auVar70._8_4_ =
           ((fVar132 * fVar116 - fVar121 * fVar113) + fVar105 * fVar62 + fVar88 + auVar33._8_4_) -
           fVar67;
      auVar70._12_4_ =
           ((fVar133 * fVar117 - fVar122 * fVar119) + fVar109 * fVar63 + fVar89 + auVar33._12_4_) -
           fVar67;
      fVar75 = param_10[1];
      auVar82._0_4_ =
           ((fVar110 * fVar59 - fVar114 * fVar134) + fVar107 * fVar118 + fVar30 + auVar104._0_4_) -
           fVar75;
      auVar82._4_4_ =
           ((fVar112 * fVar61 - fVar115 * fVar136) + fVar108 * fVar120 + fVar49 + auVar104._4_4_) -
           fVar75;
      auVar82._8_4_ =
           ((fVar113 * fVar62 - fVar116 * fVar137) + fVar105 * fVar121 + fVar51 + auVar104._8_4_) -
           fVar75;
      auVar82._12_4_ =
           ((fVar119 * fVar63 - fVar117 * fVar138) + fVar109 * fVar122 + fVar54 + auVar104._12_4_) -
           fVar75;
      auVar35._8_4_ = fVar87;
      auVar35._0_8_ = auVar70._0_8_;
      auVar35._12_4_ = auVar82._4_4_;
      uVar90 = CONCAT44(auVar82._0_4_,fVar81);
      *(undefined8 *)(pfVar23 + -0xc) = uVar90;
      *(ulonglong *)(pfVar23 + -10) = CONCAT44(uVar11,fVar141);
      *(longlong *)(pfVar23 + -8) = auVar35._8_8_;
      pfVar23[-6] = fVar143;
      pfVar23[-5] = fVar77;
      pfVar23[-4] = auVar70._8_4_;
      pfVar23[-3] = auVar82._8_4_;
      pfVar23[-2] = fVar145;
      pfVar23[-1] = fVar79;
      *pfVar23 = auVar70._12_4_;
      pfVar23[1] = auVar82._12_4_;
      pfVar23[2] = fVar147;
      pfVar23[3] = fVar52;
      auVar36._8_4_ = auVar70._8_4_;
      auVar36._0_8_ = auVar70._0_8_;
      auVar36._12_4_ = auVar70._12_4_;
      auVar37 = insertps(auVar36,auVar82,0x30);
      auVar111._4_4_ = auVar82._8_4_;
      auVar111._0_4_ = auVar82._4_4_;
      auVar111._8_4_ = fVar141;
      auVar111._12_4_ = fVar143;
      auVar32._4_4_ = fVar143;
      auVar32._0_4_ = fVar141;
      auVar32._8_4_ = fVar145;
      auVar32._12_4_ = fVar147;
      auVar32 = insertps(auVar37,auVar32,0x20);
      puVar3 = (undefined4 *)(lVar13 + -0x20 + unaff_RBP);
      *puVar3 = auVar32._0_4_;
      puVar3[1] = auVar32._12_4_;
      puVar3[2] = auVar32._8_4_;
      puVar3[3] = auVar32._4_4_;
      auVar32 = blendps(auVar111,auVar70,4);
      puVar3 = (undefined4 *)(lVar13 + -0x10 + unaff_RBP);
      *puVar3 = auVar32._0_4_;
      puVar3[1] = auVar32._12_4_;
      puVar3[2] = auVar32._8_4_;
      puVar3[3] = auVar32._4_4_;
      pfVar1 = (float *)(lVar13 + unaff_RBP);
      *pfVar1 = fVar145;
      pfVar1[1] = auVar70._12_4_;
      pfVar1[2] = auVar82._12_4_;
      pfVar1[3] = fVar147;
      auVar32 = *(undefined1 (*) [16])(lVar27 + -0x20 + unaff_RBP);
      auVar37 = *(undefined1 (*) [16])(lVar27 + -0x10 + unaff_RBP);
      pfVar1 = (float *)(lVar27 + unaff_RBP);
      auVar35 = insertps(auVar37,auVar32,0x8c);
      fVar120 = auVar32._0_4_ * fVar31;
      fVar121 = auVar32._12_4_ * fVar50;
      fVar122 = auVar37._8_4_ * fVar53;
      fVar141 = pfVar1[1] * fVar55;
      fVar77 = auVar32._4_4_ * fVar142;
      fVar79 = auVar37._0_4_ * fVar144;
      fVar52 = auVar37._12_4_ * fVar146;
      fVar30 = pfVar1[2] * fVar148;
      fVar115 = auVar35._0_4_ * fVar68;
      fVar116 = auVar35._4_4_ * fVar76;
      fVar117 = *pfVar1 * fVar78;
      fVar118 = pfVar1[3] * fVar80;
      fVar87 = fVar134 * fVar77 - fVar139 * fVar120;
      fVar88 = fVar136 * fVar79 - fVar131 * fVar121;
      fVar89 = fVar137 * fVar52 - fVar132 * fVar122;
      fVar114 = fVar138 * fVar30 - fVar133 * fVar141;
      fVar61 = fVar139 * fVar115 - fVar110 * fVar77;
      fVar62 = fVar131 * fVar116 - fVar112 * fVar79;
      fVar63 = fVar132 * fVar117 - fVar113 * fVar52;
      fVar81 = fVar133 * fVar118 - fVar119 * fVar30;
      fVar49 = fVar110 * fVar120 - fVar134 * fVar115;
      fVar51 = fVar112 * fVar121 - fVar136 * fVar116;
      fVar54 = fVar113 * fVar122 - fVar137 * fVar117;
      fVar59 = fVar119 * fVar141 - fVar138 * fVar118;
      fVar61 = fVar61 + fVar61;
      fVar62 = fVar62 + fVar62;
      fVar63 = fVar63 + fVar63;
      fVar81 = fVar81 + fVar81;
      fVar49 = fVar49 + fVar49;
      fVar51 = fVar51 + fVar51;
      fVar54 = fVar54 + fVar54;
      fVar59 = fVar59 + fVar59;
      fVar87 = fVar87 + fVar87;
      fVar88 = fVar88 + fVar88;
      fVar89 = fVar89 + fVar89;
      fVar114 = fVar114 + fVar114;
      auVar69._0_4_ = (fVar134 * fVar49 - fVar61 * fVar139) + fVar107 * fVar87 + fVar115;
      auVar69._4_4_ = (fVar136 * fVar51 - fVar62 * fVar131) + fVar108 * fVar88 + fVar116;
      auVar69._8_4_ = (fVar137 * fVar54 - fVar63 * fVar132) + fVar105 * fVar89 + fVar117;
      auVar69._12_4_ = (fVar138 * fVar59 - fVar81 * fVar133) + fVar109 * fVar114 + fVar118;
      fVar115 = (fVar139 * fVar87 - fVar49 * fVar110) + fVar107 * fVar61 + fVar120;
      fVar116 = (fVar131 * fVar88 - fVar51 * fVar112) + fVar108 * fVar62 + fVar121;
      fVar117 = (fVar132 * fVar89 - fVar54 * fVar113) + fVar105 * fVar63 + fVar122;
      fVar118 = (fVar133 * fVar114 - fVar59 * fVar119) + fVar109 * fVar81 + fVar141;
      auVar83._0_4_ = (fVar110 * fVar61 - fVar87 * fVar134) + fVar107 * fVar49 + fVar77;
      auVar83._4_4_ = (fVar112 * fVar62 - fVar88 * fVar136) + fVar108 * fVar51 + fVar79;
      auVar83._8_4_ = (fVar113 * fVar63 - fVar89 * fVar137) + fVar105 * fVar54 + fVar52;
      auVar83._12_4_ = (fVar119 * fVar81 - fVar114 * fVar138) + fVar109 * fVar59 + fVar30;
      auVar106._4_4_ = fVar116;
      auVar106._0_4_ = fVar115;
      auVar106._8_4_ = fVar117;
      auVar106._12_4_ = fVar118;
      auVar32 = insertps(auVar106,auVar83,0x30);
      auVar123._4_4_ = auVar83._8_4_;
      auVar123._0_4_ = auVar83._4_4_;
      auVar123._8_4_ = auVar69._0_4_;
      auVar123._12_4_ = auVar69._4_4_;
      auVar32 = insertps(auVar32,auVar69,0x20);
      puVar3 = (undefined4 *)(lVar27 + -0x20 + unaff_RBP);
      *puVar3 = auVar32._0_4_;
      puVar3[1] = auVar32._12_4_;
      puVar3[2] = auVar32._8_4_;
      puVar3[3] = auVar32._4_4_;
      auVar37._4_4_ = fVar116;
      auVar37._0_4_ = fVar115;
      auVar37._8_4_ = fVar117;
      auVar37._12_4_ = fVar118;
      auVar32 = blendps(auVar123,auVar37,4);
      puVar3 = (undefined4 *)(lVar27 + -0x10 + unaff_RBP);
      *puVar3 = auVar32._0_4_;
      puVar3[1] = auVar32._12_4_;
      puVar3[2] = auVar32._8_4_;
      puVar3[3] = auVar32._4_4_;
      pfVar1 = (float *)(lVar27 + unaff_RBP);
      *pfVar1 = auVar69._8_4_;
      pfVar1[1] = fVar118;
      pfVar1[2] = auVar83._12_4_;
      pfVar1[3] = auVar69._12_4_;
      auVar32 = *(undefined1 (*) [16])(lVar22 + -0x20 + unaff_RBP);
      auVar37 = *(undefined1 (*) [16])(lVar22 + -0x10 + unaff_RBP);
      pfVar1 = (float *)(lVar22 + unaff_RBP);
      auVar35 = insertps(auVar37,auVar32,0x8c);
      fVar31 = auVar32._0_4_ * fVar31;
      fVar50 = auVar32._12_4_ * fVar50;
      fVar53 = auVar37._8_4_ * fVar53;
      fVar55 = pfVar1[1] * fVar55;
      fVar142 = auVar32._4_4_ * fVar142;
      fVar144 = auVar37._0_4_ * fVar144;
      fVar146 = auVar37._12_4_ * fVar146;
      fVar148 = pfVar1[2] * fVar148;
      fVar68 = auVar35._0_4_ * fVar68;
      fVar76 = auVar35._4_4_ * fVar76;
      fVar78 = *pfVar1 * fVar78;
      fVar80 = pfVar1[3] * fVar80;
      fVar61 = fVar134 * fVar142 - fVar139 * fVar31;
      fVar62 = fVar136 * fVar144 - fVar131 * fVar50;
      fVar63 = fVar137 * fVar146 - fVar132 * fVar53;
      fVar81 = fVar138 * fVar148 - fVar133 * fVar55;
      fVar77 = fVar139 * fVar68 - fVar110 * fVar142;
      fVar79 = fVar131 * fVar76 - fVar112 * fVar144;
      fVar52 = fVar132 * fVar78 - fVar113 * fVar146;
      fVar30 = fVar133 * fVar80 - fVar119 * fVar148;
      fVar49 = fVar110 * fVar31 - fVar134 * fVar68;
      fVar51 = fVar112 * fVar50 - fVar136 * fVar76;
      fVar54 = fVar113 * fVar53 - fVar137 * fVar78;
      fVar59 = fVar119 * fVar55 - fVar138 * fVar80;
      fVar77 = fVar77 + fVar77;
      fVar79 = fVar79 + fVar79;
      fVar52 = fVar52 + fVar52;
      fVar30 = fVar30 + fVar30;
      fVar49 = fVar49 + fVar49;
      fVar51 = fVar51 + fVar51;
      fVar54 = fVar54 + fVar54;
      fVar59 = fVar59 + fVar59;
      fVar61 = fVar61 + fVar61;
      fVar62 = fVar62 + fVar62;
      fVar63 = fVar63 + fVar63;
      fVar81 = fVar81 + fVar81;
      fVar31 = ((fVar139 * fVar61 - fVar49 * fVar110) + fVar107 * fVar77 + fVar31 + auVar33._0_4_) -
               fVar67;
      fVar50 = ((fVar131 * fVar62 - fVar51 * fVar112) + fVar108 * fVar79 + fVar50 + auVar33._4_4_) -
               fVar67;
      auVar124._0_8_ = CONCAT44(fVar50,fVar31);
      auVar124._8_4_ =
           ((fVar132 * fVar63 - fVar54 * fVar113) + fVar105 * fVar52 + fVar53 + auVar33._8_4_) -
           fVar67;
      auVar124._12_4_ =
           ((fVar133 * fVar81 - fVar59 * fVar119) + fVar109 * fVar30 + fVar55 + auVar33._12_4_) -
           fVar67;
      auVar71._0_4_ =
           ((fVar110 * fVar77 - fVar61 * fVar134) + fVar107 * fVar49 + fVar142 + auVar104._0_4_) -
           fVar75;
      auVar71._4_4_ =
           ((fVar112 * fVar79 - fVar62 * fVar136) + fVar108 * fVar51 + fVar144 + auVar104._4_4_) -
           fVar75;
      auVar71._8_4_ =
           ((fVar113 * fVar52 - fVar63 * fVar137) + fVar105 * fVar54 + fVar146 + auVar104._8_4_) -
           fVar75;
      auVar71._12_4_ =
           ((fVar119 * fVar30 - fVar81 * fVar138) + fVar109 * fVar59 + fVar148 + auVar104._12_4_) -
           fVar75;
      auVar104._0_4_ =
           ((fVar134 * fVar49 - fVar77 * fVar139) + fVar107 * fVar61 + fVar68 + auVar34._0_4_) -
           fVar140;
      auVar104._4_4_ =
           ((fVar136 * fVar51 - fVar79 * fVar131) + fVar108 * fVar62 + fVar76 + auVar34._4_4_) -
           fVar140;
      auVar104._8_4_ =
           ((fVar137 * fVar54 - fVar52 * fVar132) + fVar105 * fVar63 + fVar78 + auVar34._8_4_) -
           fVar140;
      auVar104._12_4_ =
           ((fVar138 * fVar59 - fVar30 * fVar133) + fVar109 * fVar81 + fVar80 + auVar34._12_4_) -
           fVar140;
      auVar135._8_4_ = auVar124._8_4_;
      auVar135._0_8_ = auVar124._0_8_;
      auVar135._12_4_ = auVar124._12_4_;
      auVar32 = insertps(auVar135,auVar71,0x30);
      auVar64._4_4_ = auVar71._8_4_;
      auVar64._0_4_ = auVar71._4_4_;
      auVar64._8_4_ = auVar104._0_4_;
      auVar64._12_4_ = auVar104._4_4_;
      auVar32 = insertps(auVar32,auVar104,0x20);
      puVar3 = (undefined4 *)(lVar22 + -0x20 + unaff_RBP);
      *puVar3 = auVar32._0_4_;
      puVar3[1] = auVar32._12_4_;
      puVar3[2] = auVar32._8_4_;
      puVar3[3] = auVar32._4_4_;
      auVar32 = blendps(auVar64,auVar124,4);
      puVar3 = (undefined4 *)(lVar22 + -0x10 + unaff_RBP);
      *puVar3 = auVar32._0_4_;
      puVar3[1] = auVar32._12_4_;
      puVar3[2] = auVar32._8_4_;
      puVar3[3] = auVar32._4_4_;
      pfVar1 = (float *)(lVar22 + unaff_RBP);
      *pfVar1 = auVar104._8_4_;
      pfVar1[1] = auVar124._12_4_;
      pfVar1[2] = auVar71._12_4_;
      pfVar1[3] = auVar104._12_4_;
      auVar32 = *(undefined1 (*) [16])(lVar15 + -0x20 + unaff_RBP);
      auVar37 = *(undefined1 (*) [16])(lVar15 + -0x10 + unaff_RBP);
      pfVar1 = (float *)(lVar15 + unaff_RBP);
      auVar33 = insertps(auVar37,auVar32,0x8c);
      auVar84._0_4_ = auVar32._0_4_ - fVar31;
      auVar84._4_4_ = auVar32._12_4_ - fVar50;
      auVar84._8_4_ = auVar37._8_4_ - auVar124._8_4_;
      auVar84._12_4_ = pfVar1[1] - auVar124._12_4_;
      auVar126._0_4_ = auVar32._4_4_ - auVar71._0_4_;
      auVar126._4_4_ = auVar37._0_4_ - auVar71._4_4_;
      auVar126._8_4_ = auVar37._12_4_ - auVar71._8_4_;
      auVar126._12_4_ = pfVar1[2] - auVar71._12_4_;
      auVar65._0_4_ = auVar33._0_4_ - auVar104._0_4_;
      auVar65._4_4_ = auVar33._4_4_ - auVar104._4_4_;
      auVar65._8_4_ = *pfVar1 - auVar104._8_4_;
      auVar65._12_4_ = pfVar1[3] - auVar104._12_4_;
      auVar33._4_4_ = param_11;
      auVar33._0_4_ = param_11;
      auVar33._8_4_ = param_11;
      auVar33._12_4_ = param_11;
      auVar35 = divps(auVar84,auVar33);
      auVar37 = divps(auVar126,auVar33);
      auVar33 = divps(auVar65,auVar33);
      auVar32 = insertps(auVar35,auVar37,0x30);
      auVar34._0_8_ = auVar37._4_8_;
      auVar34._8_4_ = auVar33._0_4_;
      auVar34._12_4_ = auVar33._4_4_;
      auVar32 = insertps(auVar32,auVar33,0x20);
      puVar3 = (undefined4 *)(lVar16 + -0x20 + unaff_RBP);
      *puVar3 = auVar32._0_4_;
      puVar3[1] = auVar32._12_4_;
      puVar3[2] = auVar32._8_4_;
      puVar3[3] = auVar32._4_4_;
      auVar32 = blendps(auVar34,auVar35,4);
      puVar3 = (undefined4 *)(lVar16 + -0x10 + unaff_RBP);
      *puVar3 = auVar32._0_4_;
      puVar3[1] = auVar32._12_4_;
      puVar3[2] = auVar32._8_4_;
      puVar3[3] = auVar32._4_4_;
      puVar3 = (undefined4 *)(lVar16 + unaff_RBP);
      *puVar3 = auVar33._8_4_;
      puVar3[1] = auVar35._12_4_;
      puVar3[2] = auVar37._12_4_;
      puVar3[3] = auVar33._12_4_;
      lVar28 = lVar28 + 4;
      lVar13 = lVar13 + 0x30;
      pfVar23 = pfVar23 + 0x10;
      lVar27 = lVar27 + 0x30;
      lVar22 = lVar22 + 0x30;
      lVar15 = lVar15 + 0x30;
      lVar16 = lVar16 + 0x30;
      param_12 = param_12 + 0x10;
    } while (lVar28 < iVar12);
    param_12 = (int)lVar28;
  }
  if (param_12 < param_13) {
    auVar48._0_4_ = param_12 + (int)__xmm_00000003000000020000000100000000;
    auVar48._4_4_ = param_12 + __xmm_00000003000000020000000100000000._4_4_;
    auVar48._8_4_ = param_12 + _UNK_150631e08;
    auVar48._12_4_ = param_12 + _UNK_150631e0c;
    auVar56._0_4_ = -(uint)(auVar48._0_4_ < param_13);
    auVar56._4_4_ = -(uint)(auVar48._4_4_ < param_13);
    auVar56._8_4_ = -(uint)(auVar48._8_4_ < param_13);
    auVar56._12_4_ = -(uint)(auVar48._12_4_ < param_13);
    lVar13 = (longlong)(param_12 * 4);
    uVar18 = movmskps((int)unaff_RBP,auVar56);
    bVar26 = (char)((byte)uVar18 << 4) >> 4;
    bVar24 = (byte)uVar18 & 9;
    if (bVar24 == 9) {
      auVar48 = *(undefined1 (*) [16])(param_8 + lVar13);
    }
    else {
      puVar20 = (uint *)(param_8 + lVar13);
      if ((uVar18 & 1) != 0) {
        auVar48 = ZEXT416(*puVar20);
      }
      if ((uVar18 & 2) != 0) {
        auVar48._0_8_ = auVar48._0_8_ & 0xffffffff | (ulonglong)puVar20[1] << 0x20;
      }
      if ((uVar18 & 4) != 0) {
        auVar48._8_8_ = auVar48._8_8_ & 0xffffffff00000000 | (ulonglong)puVar20[2];
      }
      if ((uVar18 & 8) != 0) {
        auVar48._8_8_ = auVar48._8_8_ & 0xffffffff | (ulonglong)puVar20[3] << 0x20;
      }
    }
    auVar32 = pmulld(auVar48,___xmm_00000006000000060000000600000006);
    auVar32 = auVar32 & auVar56;
    lVar27 = param_9 + (longlong)auVar32._0_4_ * 8;
    lVar22 = param_9 + (longlong)auVar32._4_4_ * 8;
    lVar15 = param_9 + (longlong)auVar32._8_4_ * 8;
    lVar16 = param_9 + (longlong)auVar32._12_4_ * 8;
    auVar37 = insertps(ZEXT416(*(uint *)(param_9 + (longlong)auVar32._0_4_ * 8)),
                       *(undefined4 *)(param_9 + (longlong)auVar32._4_4_ * 8),0x10);
    auVar37 = insertps(auVar37,*(undefined4 *)(param_9 + (longlong)auVar32._8_4_ * 8),0x20);
    auVar104 = insertps(auVar37,*(undefined4 *)(param_9 + (longlong)auVar32._12_4_ * 8),0x30);
    auVar32 = ___xmm_00000004000000040000000400000004 & auVar56;
    auVar37 = insertps(ZEXT416(*(uint *)((ulonglong)auVar32._0_4_ + lVar27)),
                       *(undefined4 *)((ulonglong)auVar32._4_4_ + lVar22),0x10);
    auVar37 = insertps(auVar37,*(undefined4 *)((ulonglong)auVar32._8_4_ + lVar15),0x20);
    auVar69 = insertps(auVar37,*(undefined4 *)((ulonglong)auVar32._12_4_ + lVar16),0x30);
    auVar32 = ___xmm_00000008000000080000000800000008 & auVar56;
    auVar37 = insertps(ZEXT416(*(uint *)((ulonglong)auVar32._0_4_ + lVar27)),
                       *(undefined4 *)((ulonglong)auVar32._4_4_ + lVar22),0x10);
    auVar37 = insertps(auVar37,*(undefined4 *)((ulonglong)auVar32._8_4_ + lVar15),0x20);
    auVar36 = insertps(auVar37,*(undefined4 *)((ulonglong)auVar32._12_4_ + lVar16),0x30);
    auVar32 = ___xmm_0000000c0000000c0000000c0000000c & auVar56;
    auVar37 = insertps(ZEXT416(*(uint *)((ulonglong)auVar32._0_4_ + lVar27)),
                       *(undefined4 *)((ulonglong)auVar32._4_4_ + lVar22),0x10);
    auVar37 = insertps(auVar37,*(undefined4 *)((ulonglong)auVar32._8_4_ + lVar15),0x20);
    auVar123 = insertps(auVar37,*(undefined4 *)((ulonglong)auVar32._12_4_ + lVar16),0x30);
    auVar32 = ___xmm_00000010000000100000001000000010 & auVar56;
    auVar37 = insertps(ZEXT416(*(uint *)((ulonglong)auVar32._0_4_ + lVar27)),
                       *(undefined4 *)((ulonglong)auVar32._4_4_ + lVar22),0x10);
    auVar37 = insertps(auVar37,*(undefined4 *)((ulonglong)auVar32._8_4_ + lVar15),0x20);
    auVar32 = insertps(auVar37,*(undefined4 *)((ulonglong)auVar32._12_4_ + lVar16),0x30);
    auVar37 = ___xmm_00000014000000140000001400000014 & auVar56;
    auVar33 = insertps(ZEXT416(*(uint *)((ulonglong)auVar37._0_4_ + lVar27)),
                       *(undefined4 *)((ulonglong)auVar37._4_4_ + lVar22),0x10);
    auVar33 = insertps(auVar33,*(undefined4 *)((ulonglong)auVar37._8_4_ + lVar15),0x20);
    auVar111 = insertps(auVar33,*(undefined4 *)((ulonglong)auVar37._12_4_ + lVar16),0x30);
    auVar37 = ___xmm_00000018000000180000001800000018 & auVar56;
    auVar33 = insertps(ZEXT416(*(uint *)((ulonglong)auVar37._0_4_ + lVar27)),
                       *(undefined4 *)((ulonglong)auVar37._4_4_ + lVar22),0x10);
    auVar33 = insertps(auVar33,*(undefined4 *)((ulonglong)auVar37._8_4_ + lVar15),0x20);
    auVar37 = insertps(auVar33,*(undefined4 *)((ulonglong)auVar37._12_4_ + lVar16),0x30);
    auVar33 = ___xmm_00000020000000200000002000000020 & auVar56;
    auVar34 = insertps(ZEXT416(*(uint *)((ulonglong)auVar33._0_4_ + lVar27)),
                       *(undefined4 *)((ulonglong)auVar33._4_4_ + lVar22),0x10);
    auVar34 = insertps(auVar34,*(undefined4 *)((ulonglong)auVar33._8_4_ + lVar15),0x20);
    auVar33 = insertps(auVar34,*(undefined4 *)((ulonglong)auVar33._12_4_ + lVar16),0x30);
    auVar34 = ___xmm_00000024000000240000002400000024 & auVar56;
    auVar35 = insertps(ZEXT416(*(uint *)((ulonglong)auVar34._0_4_ + lVar27)),
                       *(undefined4 *)((ulonglong)auVar34._4_4_ + lVar22),0x10);
    auVar35 = insertps(auVar35,*(undefined4 *)((ulonglong)auVar34._8_4_ + lVar15),0x20);
    auVar34 = insertps(auVar35,*(undefined4 *)((ulonglong)auVar34._12_4_ + lVar16),0x30);
    auVar35 = ___xmm_00000028000000280000002800000028 & auVar56;
    auVar106 = insertps(ZEXT416(*(uint *)((ulonglong)auVar35._0_4_ + lVar27)),
                        *(undefined4 *)((ulonglong)auVar35._4_4_ + lVar22),0x10);
    auVar106 = insertps(auVar106,*(undefined4 *)((ulonglong)auVar35._8_4_ + lVar15),0x20);
    auVar35 = insertps(auVar106,*(undefined4 *)((ulonglong)auVar35._12_4_ + lVar16),0x30);
    lVar27 = (longlong)param_12;
    pauVar2 = (undefined1 (*) [16])(param_3 + lVar27 * 0xc);
    bVar21 = ~bVar26;
    if ((bVar21 & 0xf) == 0) {
      auVar106 = *pauVar2;
      auVar135 = pauVar2[1];
      auVar91._0_4_ = auVar106._0_4_;
      auVar126 = insertps(auVar135,auVar106,0x8c);
      auVar91._4_4_ = auVar106._12_4_;
      auVar91._8_4_ = auVar135._8_4_;
      auVar91._12_4_ = *(undefined4 *)(pauVar2[2] + 4);
      auVar98._4_4_ = auVar135._0_4_;
      auVar98._0_4_ = auVar106._4_4_;
      auVar98._8_4_ = auVar135._12_4_;
      auVar98._12_4_ = *(undefined4 *)(pauVar2[2] + 8);
      auVar125._0_8_ = auVar126._0_8_;
      auVar125._8_4_ = *(undefined4 *)pauVar2[2];
      auVar125._12_4_ = *(undefined4 *)(pauVar2[2] + 0xc);
    }
    else {
      auVar38._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar56._0_4_;
      auVar38._4_4_ = _UNK_150b50da4 & auVar56._4_4_;
      auVar38._8_4_ = _UNK_150b50da8 & auVar56._8_4_;
      auVar38._12_4_ = _UNK_150b50dac & auVar56._12_4_;
      lVar22 = extractps(auVar38,1);
      lVar16 = extractps(auVar38,2);
      lVar15 = extractps(auVar38,3);
      auVar106 = insertps(ZEXT416(*(uint *)*pauVar2),*(undefined4 *)(*pauVar2 + lVar22),0x10);
      auVar106 = insertps(auVar106,*(undefined4 *)(*pauVar2 + lVar16),0x20);
      auVar91 = insertps(auVar106,*(undefined4 *)(*pauVar2 + lVar15),0x30);
      auVar106 = ___xmm_000000280000001c0000001000000004 & auVar56;
      auVar135 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar106._0_4_)),
                          *(undefined4 *)(*pauVar2 + auVar106._4_4_),0x10);
      auVar135 = insertps(auVar135,*(undefined4 *)(*pauVar2 + auVar106._8_4_),0x20);
      auVar98 = insertps(auVar135,*(undefined4 *)(*pauVar2 + auVar106._12_4_),0x30);
      auVar106 = ___xmm_0000002c000000200000001400000008 & auVar56;
      auVar135 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar106._0_4_)),
                          *(undefined4 *)(*pauVar2 + auVar106._4_4_),0x10);
      auVar135 = insertps(auVar135,*(undefined4 *)(*pauVar2 + auVar106._8_4_),0x20);
      auVar125 = insertps(auVar135,*(undefined4 *)(*pauVar2 + auVar106._12_4_),0x30);
    }
    local_1a8 = auVar33._0_4_;
    fStack_1a4 = auVar33._4_4_;
    fStack_1a0 = auVar33._8_4_;
    fStack_19c = auVar33._12_4_;
    fVar87 = auVar91._0_4_ * local_1a8;
    fVar88 = auVar91._4_4_ * fStack_1a4;
    fVar89 = auVar91._8_4_ * fStack_1a0;
    fVar114 = auVar91._12_4_ * fStack_19c;
    local_198 = auVar34._0_4_;
    fStack_194 = auVar34._4_4_;
    fStack_190 = auVar34._8_4_;
    fStack_18c = auVar34._12_4_;
    fVar115 = auVar98._0_4_ * local_198;
    fVar116 = auVar98._4_4_ * fStack_194;
    fVar117 = auVar98._8_4_ * fStack_190;
    fVar118 = auVar98._12_4_ * fStack_18c;
    fVar105 = auVar35._0_4_;
    auVar127._0_4_ = auVar125._0_4_ * fVar105;
    fVar107 = auVar35._4_4_;
    auVar127._4_4_ = auVar125._4_4_ * fVar107;
    fVar108 = auVar35._8_4_;
    auVar127._8_4_ = auVar125._8_4_ * fVar108;
    fVar109 = auVar35._12_4_;
    auVar127._12_4_ = auVar125._12_4_ * fVar109;
    fVar61 = auVar104._0_4_;
    fVar62 = auVar104._4_4_;
    fVar63 = auVar104._8_4_;
    fVar81 = auVar104._12_4_;
    fVar53 = auVar69._0_4_;
    fVar148 = auVar69._4_4_;
    fVar54 = auVar69._8_4_;
    fVar55 = auVar69._12_4_;
    fVar31 = auVar36._0_4_;
    fVar49 = auVar36._4_4_;
    fVar50 = auVar36._8_4_;
    fVar51 = auVar36._12_4_;
    fVar120 = fVar61 * fVar115 - fVar53 * fVar87;
    fVar121 = fVar62 * fVar116 - fVar148 * fVar88;
    fVar122 = fVar63 * fVar117 - fVar54 * fVar89;
    fVar139 = fVar81 * fVar118 - fVar55 * fVar114;
    fVar119 = fVar53 * auVar127._0_4_ - fVar31 * fVar115;
    fVar142 = fVar148 * auVar127._4_4_ - fVar49 * fVar116;
    fVar144 = fVar54 * auVar127._8_4_ - fVar50 * fVar117;
    fVar146 = fVar55 * auVar127._12_4_ - fVar51 * fVar118;
    fVar77 = fVar31 * fVar87 - fVar61 * auVar127._0_4_;
    fVar79 = fVar49 * fVar88 - fVar62 * auVar127._4_4_;
    fVar52 = fVar50 * fVar89 - fVar63 * auVar127._8_4_;
    fVar30 = fVar51 * fVar114 - fVar81 * auVar127._12_4_;
    fVar119 = fVar119 + fVar119;
    fVar142 = fVar142 + fVar142;
    fVar144 = fVar144 + fVar144;
    fVar146 = fVar146 + fVar146;
    fVar77 = fVar77 + fVar77;
    fVar79 = fVar79 + fVar79;
    fVar52 = fVar52 + fVar52;
    fVar30 = fVar30 + fVar30;
    fVar120 = fVar120 + fVar120;
    fVar121 = fVar121 + fVar121;
    fVar122 = fVar122 + fVar122;
    fVar139 = fVar139 + fVar139;
    fVar110 = auVar123._0_4_;
    fVar112 = auVar123._4_4_;
    fVar113 = auVar123._12_4_;
    fVar59 = auVar123._8_4_;
    fVar68 = fVar110 * fVar120 + auVar127._0_4_;
    fVar76 = fVar112 * fVar121 + auVar127._4_4_;
    fVar78 = fVar59 * fVar122 + auVar127._8_4_;
    fVar80 = fVar113 * fVar139 + auVar127._12_4_;
    local_168 = auVar32._0_4_;
    fStack_164 = auVar32._4_4_;
    fStack_160 = auVar32._8_4_;
    fStack_15c = auVar32._12_4_;
    local_178 = auVar37._0_4_;
    fStack_174 = auVar37._4_4_;
    fStack_170 = auVar37._8_4_;
    fStack_16c = auVar37._12_4_;
    fVar140 = *param_10;
    fVar67 = param_10[1];
    fVar75 = param_10[2];
    if (bVar24 == 9) {
      auVar127 = *(undefined1 (*) [16])(param_6 + lVar13);
    }
    else {
      puVar20 = (uint *)(param_6 + lVar13);
      if ((uVar18 & 1) != 0) {
        auVar127 = ZEXT416(*puVar20);
      }
      if ((uVar18 & 2) != 0) {
        auVar127 = insertps(auVar127,puVar20[1],0x10);
      }
      if ((uVar18 & 4) != 0) {
        auVar127 = insertps(auVar127,puVar20[2],0x20);
      }
      if ((uVar18 & 8) != 0) {
        auVar127 = insertps(auVar127,puVar20[3],0x30);
      }
    }
    pfVar23 = (float *)(param_1 + lVar27 * 0x10);
    fVar87 = ((fVar53 * fVar120 - fVar77 * fVar31) + fVar110 * fVar119 + fVar87 + local_168) -
             fVar140;
    fVar88 = ((fVar148 * fVar121 - fVar79 * fVar49) + fVar112 * fVar142 + fVar88 + fStack_164) -
             fVar140;
    auVar92._0_8_ = CONCAT44(fVar88,fVar87);
    auVar92._8_4_ =
         ((fVar54 * fVar122 - fVar52 * fVar50) + fVar59 * fVar144 + fVar89 + fStack_160) - fVar140;
    auVar92._12_4_ =
         ((fVar55 * fVar139 - fVar30 * fVar51) + fVar113 * fVar146 + fVar114 + fStack_15c) - fVar140
    ;
    auVar99._0_4_ =
         ((fVar31 * fVar119 - fVar120 * fVar61) + fVar110 * fVar77 + fVar115 + auVar111._0_4_) -
         fVar67;
    auVar99._4_4_ =
         ((fVar49 * fVar142 - fVar121 * fVar62) + fVar112 * fVar79 + fVar116 + auVar111._4_4_) -
         fVar67;
    auVar99._8_4_ =
         ((fVar50 * fVar144 - fVar122 * fVar63) + fVar59 * fVar52 + fVar117 + auVar111._8_4_) -
         fVar67;
    auVar99._12_4_ =
         ((fVar51 * fVar146 - fVar139 * fVar81) + fVar113 * fVar30 + fVar118 + auVar111._12_4_) -
         fVar67;
    fVar77 = ((fVar61 * fVar77 - fVar119 * fVar53) + fVar68 + local_178) - fVar75;
    fVar79 = ((fVar62 * fVar79 - fVar142 * fVar148) + fVar76 + fStack_174) - fVar75;
    fVar52 = ((fVar63 * fVar52 - fVar144 * fVar54) + fVar78 + fStack_170) - fVar75;
    fVar30 = ((fVar81 * fVar30 - fVar146 * fVar55) + fVar80 + fStack_16c) - fVar75;
    if ((bVar21 & 0xf) == 0) {
      auVar40._8_4_ = fVar88;
      auVar40._0_8_ = auVar92._0_8_;
      auVar40._12_4_ = auVar99._4_4_;
      uVar90 = CONCAT44(auVar99._0_4_,fVar87);
      *(undefined8 *)pfVar23 = uVar90;
      *(ulonglong *)(pfVar23 + 2) = CONCAT44(auVar127._0_4_,fVar77);
      *(longlong *)(pfVar23 + 4) = auVar40._8_8_;
      pfVar23[6] = fVar79;
      pfVar23[7] = auVar127._4_4_;
      pfVar23[8] = auVar92._8_4_;
      pfVar23[9] = auVar99._8_4_;
      pfVar23[10] = fVar52;
      pfVar23[0xb] = auVar127._8_4_;
      pfVar23[0xc] = auVar92._12_4_;
      pfVar23[0xd] = auVar99._12_4_;
      pfVar23[0xe] = fVar30;
      pfVar23[0xf] = auVar127._12_4_;
      auVar41._4_4_ = fVar88;
      auVar41._0_4_ = fVar87;
      auVar41._8_4_ = auVar92._8_4_;
      auVar41._12_4_ = auVar92._12_4_;
      auVar32 = insertps(auVar41,auVar99,0x30);
      auVar72._4_4_ = auVar99._8_4_;
      auVar72._0_4_ = auVar99._4_4_;
      auVar72._8_4_ = fVar77;
      auVar72._12_4_ = fVar79;
      auVar10._4_4_ = fVar79;
      auVar10._0_4_ = fVar77;
      auVar10._8_4_ = fVar52;
      auVar10._12_4_ = fVar30;
      auVar32 = insertps(auVar32,auVar10,0x20);
      *(int *)*pauVar2 = auVar32._0_4_;
      *(int *)(*pauVar2 + 4) = auVar32._12_4_;
      *(int *)(*pauVar2 + 8) = auVar32._8_4_;
      *(int *)(*pauVar2 + 0xc) = auVar32._4_4_;
      auVar32 = blendps(auVar72,auVar92,4);
      *(int *)pauVar2[1] = auVar32._0_4_;
      *(int *)(pauVar2[1] + 4) = auVar32._12_4_;
      *(int *)(pauVar2[1] + 8) = auVar32._8_4_;
      *(int *)(pauVar2[1] + 0xc) = auVar32._4_4_;
      *(float *)pauVar2[2] = fVar52;
      *(float *)(pauVar2[2] + 4) = auVar92._12_4_;
      *(float *)(pauVar2[2] + 8) = auVar99._12_4_;
      *(float *)(pauVar2[2] + 0xc) = fVar30;
      pfVar23 = (float *)(param_2 + lVar27 * 0xc);
      auVar32 = *(undefined1 (*) [16])(param_2 + lVar27 * 0xc);
      auVar37 = *(undefined1 (*) [16])(param_2 + 0x10 + lVar27 * 0xc);
      puVar3 = (undefined4 *)(param_2 + 0x20 + lVar27 * 0xc);
      auVar93._0_4_ = auVar32._0_4_;
      auVar33 = insertps(auVar37,auVar32,0x8c);
      auVar93._4_4_ = auVar32._12_4_;
      auVar93._8_4_ = auVar37._8_4_;
      auVar93._12_4_ = puVar3[1];
      auVar100._4_4_ = auVar37._0_4_;
      auVar100._0_4_ = auVar32._4_4_;
      auVar100._8_4_ = auVar37._12_4_;
      auVar100._12_4_ = puVar3[2];
      auVar128._0_8_ = auVar33._0_8_;
      auVar128._8_4_ = *puVar3;
      auVar128._12_4_ = puVar3[3];
    }
    else {
      if ((bVar26 & 1) != 0) {
        *pfVar23 = fVar87;
      }
      if ((bVar26 & 2) != 0) {
        uVar90 = extractps(auVar92,1);
        *(undefined8 *)(pfVar23 + 4) = uVar90;
      }
      if ((bVar26 & 4) != 0) {
        uVar90 = extractps(auVar92,2);
        *(undefined8 *)(pfVar23 + 8) = uVar90;
      }
      if ((char)bVar26 < '\0') {
        uVar90 = extractps(auVar92,3);
        *(undefined8 *)(pfVar23 + 0xc) = uVar90;
      }
      if ((bVar26 & 1) != 0) {
        pfVar23[1] = auVar99._0_4_;
      }
      if ((bVar26 & 2) != 0) {
        uVar90 = extractps(auVar99,1);
        *(undefined8 *)(pfVar23 + 5) = uVar90;
      }
      if ((bVar26 & 4) != 0) {
        uVar90 = extractps(auVar99,2);
        *(undefined8 *)(pfVar23 + 9) = uVar90;
      }
      if ((char)bVar26 < '\0') {
        uVar90 = extractps(auVar99,3);
        *(undefined8 *)(pfVar23 + 0xd) = uVar90;
      }
      if ((bVar26 & 1) != 0) {
        pfVar23[2] = fVar77;
      }
      if ((bVar26 & 2) != 0) {
        auVar9._4_4_ = fVar79;
        auVar9._0_4_ = fVar77;
        auVar9._8_4_ = fVar52;
        auVar9._12_4_ = fVar30;
        uVar90 = extractps(auVar9,1);
        *(undefined8 *)(pfVar23 + 6) = uVar90;
      }
      if ((bVar26 & 4) != 0) {
        auVar8._4_4_ = fVar79;
        auVar8._0_4_ = fVar77;
        auVar8._8_4_ = fVar52;
        auVar8._12_4_ = fVar30;
        uVar90 = extractps(auVar8,2);
        *(undefined8 *)(pfVar23 + 10) = uVar90;
      }
      if ((char)bVar26 < '\0') {
        auVar7._4_4_ = fVar79;
        auVar7._0_4_ = fVar77;
        auVar7._8_4_ = fVar52;
        auVar7._12_4_ = fVar30;
        uVar90 = extractps(auVar7,3);
        *(undefined8 *)(pfVar23 + 0xe) = uVar90;
      }
      if ((bVar26 & 1) != 0) {
        pfVar23[3] = auVar127._0_4_;
      }
      if ((bVar26 & 2) != 0) {
        uVar90 = extractps(auVar127,1);
        *(undefined8 *)(pfVar23 + 7) = uVar90;
      }
      if ((bVar26 & 4) != 0) {
        uVar90 = extractps(auVar127,2);
        *(undefined8 *)(pfVar23 + 0xb) = uVar90;
      }
      if ((char)bVar26 < '\0') {
        uVar90 = extractps(auVar127,3);
        *(undefined8 *)(pfVar23 + 0xf) = uVar90;
      }
      if ((bVar26 & 1) != 0) {
        *(float *)*pauVar2 = fVar87;
      }
      if ((bVar26 & 2) != 0) {
        uVar90 = extractps(auVar92,1);
        *(undefined8 *)(*pauVar2 + 0xc) = uVar90;
      }
      if ((bVar26 & 4) != 0) {
        uVar90 = extractps(auVar92,2);
        *(undefined8 *)(pauVar2[1] + 8) = uVar90;
      }
      if ((char)bVar26 < '\0') {
        uVar90 = extractps(auVar92,3);
        *(undefined8 *)(pauVar2[2] + 4) = uVar90;
      }
      if ((bVar26 & 1) != 0) {
        *(float *)(*pauVar2 + 4) = auVar99._0_4_;
      }
      if ((bVar26 & 2) != 0) {
        uVar90 = extractps(auVar99,1);
        *(undefined8 *)pauVar2[1] = uVar90;
      }
      if ((bVar26 & 4) != 0) {
        uVar90 = extractps(auVar99,2);
        *(undefined8 *)(pauVar2[1] + 0xc) = uVar90;
      }
      if ((char)bVar26 < '\0') {
        uVar90 = extractps(auVar99,3);
        *(undefined8 *)(pauVar2[2] + 8) = uVar90;
      }
      if ((bVar26 & 1) != 0) {
        *(float *)(*pauVar2 + 8) = fVar77;
      }
      if ((bVar26 & 2) != 0) {
        auVar6._4_4_ = fVar79;
        auVar6._0_4_ = fVar77;
        auVar6._8_4_ = fVar52;
        auVar6._12_4_ = fVar30;
        uVar90 = extractps(auVar6,1);
        *(undefined8 *)(pauVar2[1] + 4) = uVar90;
      }
      if ((bVar26 & 4) != 0) {
        auVar5._4_4_ = fVar79;
        auVar5._0_4_ = fVar77;
        auVar5._8_4_ = fVar52;
        auVar5._12_4_ = fVar30;
        uVar90 = extractps(auVar5,2);
        *(undefined8 *)pauVar2[2] = uVar90;
      }
      if ((char)bVar26 < '\0') {
        auVar4._4_4_ = fVar79;
        auVar4._0_4_ = fVar77;
        auVar4._8_4_ = fVar52;
        auVar4._12_4_ = fVar30;
        uVar90 = extractps(auVar4,3);
        *(undefined8 *)(pauVar2[2] + 0xc) = uVar90;
      }
      auVar39._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar56._0_4_;
      auVar39._4_4_ = _UNK_150b50da4 & auVar56._4_4_;
      auVar39._8_4_ = _UNK_150b50da8 & auVar56._8_4_;
      auVar39._12_4_ = _UNK_150b50dac & auVar56._12_4_;
      lVar13 = extractps(auVar39,1);
      lVar22 = extractps(auVar39,2);
      lVar15 = extractps(auVar39,3);
      pfVar23 = (float *)(param_2 + lVar27 * 0xc);
      auVar32 = insertps(ZEXT416(*(uint *)(param_2 + lVar27 * 0xc)),
                         *(undefined4 *)(lVar13 + (longlong)pfVar23),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(lVar22 + (longlong)pfVar23),0x20);
      auVar93 = insertps(auVar32,*(undefined4 *)(lVar15 + (longlong)pfVar23),0x30);
      auVar32 = ___xmm_000000280000001c0000001000000004 & auVar56;
      auVar37 = insertps(ZEXT416(*(uint *)((ulonglong)auVar32._0_4_ + (longlong)pfVar23)),
                         *(undefined4 *)((ulonglong)auVar32._4_4_ + (longlong)pfVar23),0x10);
      auVar37 = insertps(auVar37,*(undefined4 *)((ulonglong)auVar32._8_4_ + (longlong)pfVar23),0x20)
      ;
      auVar100 = insertps(auVar37,*(undefined4 *)((ulonglong)auVar32._12_4_ + (longlong)pfVar23),
                          0x30);
      auVar32 = ___xmm_0000002c000000200000001400000008 & auVar56;
      auVar37 = insertps(ZEXT416(*(uint *)((ulonglong)auVar32._0_4_ + (longlong)pfVar23)),
                         *(undefined4 *)((ulonglong)auVar32._4_4_ + (longlong)pfVar23),0x10);
      auVar37 = insertps(auVar37,*(undefined4 *)((ulonglong)auVar32._8_4_ + (longlong)pfVar23),0x20)
      ;
      auVar128 = insertps(auVar37,*(undefined4 *)((ulonglong)auVar32._12_4_ + (longlong)pfVar23),
                          0x30);
    }
    fVar87 = auVar93._0_4_ * local_1a8;
    fVar68 = auVar93._4_4_ * fStack_1a4;
    fVar88 = auVar93._8_4_ * fStack_1a0;
    fVar76 = auVar93._12_4_ * fStack_19c;
    fVar89 = auVar100._0_4_ * local_198;
    fVar78 = auVar100._4_4_ * fStack_194;
    fVar114 = auVar100._8_4_ * fStack_190;
    fVar80 = auVar100._12_4_ * fStack_18c;
    fVar119 = auVar128._0_4_ * fVar105;
    fVar142 = auVar128._4_4_ * fVar107;
    fVar144 = auVar128._8_4_ * fVar108;
    fVar146 = auVar128._12_4_ * fVar109;
    fVar120 = fVar61 * fVar89 - fVar53 * fVar87;
    fVar121 = fVar62 * fVar78 - fVar148 * fVar68;
    fVar122 = fVar63 * fVar114 - fVar54 * fVar88;
    fVar139 = fVar81 * fVar80 - fVar55 * fVar76;
    fVar115 = fVar53 * fVar119 - fVar31 * fVar89;
    fVar116 = fVar148 * fVar142 - fVar49 * fVar78;
    fVar117 = fVar54 * fVar144 - fVar50 * fVar114;
    fVar118 = fVar55 * fVar146 - fVar51 * fVar80;
    fVar77 = fVar31 * fVar87 - fVar61 * fVar119;
    fVar79 = fVar49 * fVar68 - fVar62 * fVar142;
    fVar52 = fVar50 * fVar88 - fVar63 * fVar144;
    fVar30 = fVar51 * fVar76 - fVar81 * fVar146;
    fVar115 = fVar115 + fVar115;
    fVar116 = fVar116 + fVar116;
    fVar117 = fVar117 + fVar117;
    fVar118 = fVar118 + fVar118;
    fVar77 = fVar77 + fVar77;
    fVar79 = fVar79 + fVar79;
    fVar52 = fVar52 + fVar52;
    fVar30 = fVar30 + fVar30;
    fVar120 = fVar120 + fVar120;
    fVar121 = fVar121 + fVar121;
    fVar122 = fVar122 + fVar122;
    fVar139 = fVar139 + fVar139;
    auVar94._0_4_ = (fVar61 * fVar77 - fVar115 * fVar53) + fVar110 * fVar120 + fVar119;
    auVar94._4_4_ = (fVar62 * fVar79 - fVar116 * fVar148) + fVar112 * fVar121 + fVar142;
    auVar94._8_4_ = (fVar63 * fVar52 - fVar117 * fVar54) + fVar59 * fVar122 + fVar144;
    auVar94._12_4_ = (fVar81 * fVar30 - fVar118 * fVar55) + fVar113 * fVar139 + fVar146;
    fVar87 = (fVar53 * fVar120 - fVar77 * fVar31) + fVar110 * fVar115 + fVar87;
    auVar129._0_8_ =
         CONCAT44((fVar148 * fVar121 - fVar79 * fVar49) + fVar112 * fVar116 + fVar68,fVar87);
    auVar129._8_4_ = (fVar54 * fVar122 - fVar52 * fVar50) + fVar59 * fVar117 + fVar88;
    auVar129._12_4_ = (fVar55 * fVar139 - fVar30 * fVar51) + fVar113 * fVar118 + fVar76;
    auVar101._0_4_ = (fVar31 * fVar115 - fVar120 * fVar61) + fVar110 * fVar77 + fVar89;
    auVar101._4_4_ = (fVar49 * fVar116 - fVar121 * fVar62) + fVar112 * fVar79 + fVar78;
    auVar101._8_4_ = (fVar50 * fVar117 - fVar122 * fVar63) + fVar59 * fVar52 + fVar114;
    auVar101._12_4_ = (fVar51 * fVar118 - fVar139 * fVar81) + fVar113 * fVar30 + fVar80;
    if ((bVar21 & 0xf) == 0) {
      lVar13 = lVar27 * 0xc;
      auVar43._8_4_ = auVar129._8_4_;
      auVar43._0_8_ = auVar129._0_8_;
      auVar43._12_4_ = auVar129._12_4_;
      auVar32 = insertps(auVar43,auVar101,0x30);
      auVar73._4_4_ = auVar101._8_4_;
      auVar73._0_4_ = auVar101._4_4_;
      auVar73._8_4_ = auVar94._0_4_;
      auVar73._12_4_ = auVar94._4_4_;
      auVar32 = insertps(auVar32,auVar94,0x20);
      *pfVar23 = auVar32._0_4_;
      pfVar23[1] = auVar32._12_4_;
      pfVar23[2] = auVar32._8_4_;
      pfVar23[3] = auVar32._4_4_;
      auVar32 = blendps(auVar73,auVar129,4);
      puVar3 = (undefined4 *)(param_2 + 0x10 + lVar13);
      *puVar3 = auVar32._0_4_;
      puVar3[1] = auVar32._12_4_;
      puVar3[2] = auVar32._8_4_;
      puVar3[3] = auVar32._4_4_;
      pfVar23 = (float *)(param_2 + 0x20 + lVar13);
      *pfVar23 = auVar94._8_4_;
      pfVar23[1] = auVar129._12_4_;
      pfVar23[2] = auVar101._12_4_;
      pfVar23[3] = auVar94._12_4_;
      auVar32 = *(undefined1 (*) [16])(param_4 + lVar13);
      auVar37 = *(undefined1 (*) [16])(param_4 + 0x10 + lVar13);
      puVar3 = (undefined4 *)(param_4 + 0x20 + lVar13);
      pfVar23 = (float *)(param_4 + lVar13);
      auVar95._0_4_ = auVar32._0_4_;
      auVar33 = insertps(auVar37,auVar32,0x8c);
      auVar95._4_4_ = auVar32._12_4_;
      auVar95._8_4_ = auVar37._8_4_;
      auVar95._12_4_ = puVar3[1];
      auVar102._4_4_ = auVar37._0_4_;
      auVar102._0_4_ = auVar32._4_4_;
      auVar102._8_4_ = auVar37._12_4_;
      auVar102._12_4_ = puVar3[2];
      auVar130._0_8_ = auVar33._0_8_;
      auVar130._8_4_ = *puVar3;
      auVar130._12_4_ = puVar3[3];
      fVar140 = *param_10;
      fVar67 = param_10[1];
      fVar75 = param_10[2];
    }
    else {
      if ((bVar26 & 1) != 0) {
        *pfVar23 = fVar87;
      }
      if ((bVar26 & 2) != 0) {
        uVar90 = extractps(auVar129,1);
        *(undefined8 *)(param_2 + 0xc + lVar27 * 0xc) = uVar90;
      }
      if ((bVar26 & 4) != 0) {
        uVar90 = extractps(auVar129,2);
        *(undefined8 *)(param_2 + 0x18 + lVar27 * 0xc) = uVar90;
      }
      if ((char)bVar26 < '\0') {
        uVar90 = extractps(auVar129,3);
        *(undefined8 *)(param_2 + 0x24 + lVar27 * 0xc) = uVar90;
      }
      if ((bVar26 & 1) != 0) {
        *(float *)(param_2 + 4 + lVar27 * 0xc) = auVar101._0_4_;
      }
      if ((bVar26 & 2) != 0) {
        uVar90 = extractps(auVar101,1);
        *(undefined8 *)(param_2 + 0x10 + lVar27 * 0xc) = uVar90;
      }
      if ((bVar26 & 4) != 0) {
        uVar90 = extractps(auVar101,2);
        *(undefined8 *)(param_2 + 0x1c + lVar27 * 0xc) = uVar90;
      }
      if ((char)bVar26 < '\0') {
        uVar90 = extractps(auVar101,3);
        *(undefined8 *)(param_2 + 0x28 + lVar27 * 0xc) = uVar90;
      }
      if ((bVar26 & 1) != 0) {
        *(float *)(param_2 + 8 + lVar27 * 0xc) = auVar94._0_4_;
      }
      if ((bVar26 & 2) != 0) {
        uVar90 = extractps(auVar94,1);
        *(undefined8 *)(param_2 + 0x14 + lVar27 * 0xc) = uVar90;
      }
      if ((bVar26 & 4) != 0) {
        uVar90 = extractps(auVar94,2);
        *(undefined8 *)(param_2 + 0x20 + lVar27 * 0xc) = uVar90;
      }
      if ((char)bVar26 < '\0') {
        uVar90 = extractps(auVar94,3);
        *(undefined8 *)(param_2 + 0x2c + lVar27 * 0xc) = uVar90;
      }
      auVar42._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar56._0_4_;
      auVar42._4_4_ = _UNK_150b50da4 & auVar56._4_4_;
      auVar42._8_4_ = _UNK_150b50da8 & auVar56._8_4_;
      auVar42._12_4_ = _UNK_150b50dac & auVar56._12_4_;
      lVar13 = extractps(auVar42,1);
      lVar22 = extractps(auVar42,2);
      lVar15 = extractps(auVar42,3);
      pfVar23 = (float *)(param_4 + lVar27 * 0xc);
      auVar32 = insertps(ZEXT416(*(uint *)(param_4 + lVar27 * 0xc)),
                         *(undefined4 *)(lVar13 + (longlong)pfVar23),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(lVar22 + (longlong)pfVar23),0x20);
      auVar95 = insertps(auVar32,*(undefined4 *)(lVar15 + (longlong)pfVar23),0x30);
      auVar32 = ___xmm_000000280000001c0000001000000004 & auVar56;
      auVar37 = insertps(ZEXT416(*(uint *)((ulonglong)auVar32._0_4_ + (longlong)pfVar23)),
                         *(undefined4 *)((ulonglong)auVar32._4_4_ + (longlong)pfVar23),0x10);
      auVar37 = insertps(auVar37,*(undefined4 *)((ulonglong)auVar32._8_4_ + (longlong)pfVar23),0x20)
      ;
      auVar102 = insertps(auVar37,*(undefined4 *)((ulonglong)auVar32._12_4_ + (longlong)pfVar23),
                          0x30);
      auVar32 = ___xmm_0000002c000000200000001400000008 & auVar56;
      auVar37 = insertps(ZEXT416(*(uint *)((ulonglong)auVar32._0_4_ + (longlong)pfVar23)),
                         *(undefined4 *)((ulonglong)auVar32._4_4_ + (longlong)pfVar23),0x10);
      auVar37 = insertps(auVar37,*(undefined4 *)((ulonglong)auVar32._8_4_ + (longlong)pfVar23),0x20)
      ;
      auVar130 = insertps(auVar37,*(undefined4 *)((ulonglong)auVar32._12_4_ + (longlong)pfVar23),
                          0x30);
    }
    local_1a8 = local_1a8 * auVar95._0_4_;
    fStack_1a4 = fStack_1a4 * auVar95._4_4_;
    fStack_1a0 = fStack_1a0 * auVar95._8_4_;
    fStack_19c = fStack_19c * auVar95._12_4_;
    local_198 = local_198 * auVar102._0_4_;
    fStack_194 = fStack_194 * auVar102._4_4_;
    fStack_190 = fStack_190 * auVar102._8_4_;
    fStack_18c = fStack_18c * auVar102._12_4_;
    fVar105 = fVar105 * auVar130._0_4_;
    fVar107 = fVar107 * auVar130._4_4_;
    fVar108 = fVar108 * auVar130._8_4_;
    fVar109 = fVar109 * auVar130._12_4_;
    fVar88 = fVar61 * local_198 - fVar53 * local_1a8;
    fVar76 = fVar62 * fStack_194 - fVar148 * fStack_1a4;
    fVar89 = fVar63 * fStack_190 - fVar54 * fStack_1a0;
    fVar78 = fVar81 * fStack_18c - fVar55 * fStack_19c;
    fVar114 = fVar53 * fVar105 - fVar31 * local_198;
    fVar80 = fVar148 * fVar107 - fVar49 * fStack_194;
    fVar115 = fVar54 * fVar108 - fVar50 * fStack_190;
    fVar116 = fVar55 * fVar109 - fVar51 * fStack_18c;
    fVar77 = fVar31 * local_1a8 - fVar61 * fVar105;
    fVar79 = fVar49 * fStack_1a4 - fVar62 * fVar107;
    fVar52 = fVar50 * fStack_1a0 - fVar63 * fVar108;
    fVar30 = fVar51 * fStack_19c - fVar81 * fVar109;
    fVar114 = fVar114 + fVar114;
    fVar80 = fVar80 + fVar80;
    fVar115 = fVar115 + fVar115;
    fVar116 = fVar116 + fVar116;
    fVar77 = fVar77 + fVar77;
    fVar79 = fVar79 + fVar79;
    fVar52 = fVar52 + fVar52;
    fVar30 = fVar30 + fVar30;
    fVar88 = fVar88 + fVar88;
    fVar76 = fVar76 + fVar76;
    fVar89 = fVar89 + fVar89;
    fVar78 = fVar78 + fVar78;
    fVar87 = (local_168 + (fVar53 * fVar88 - fVar77 * fVar31) + fVar110 * fVar114 + local_1a8) -
             fVar140;
    fVar68 = (fStack_164 + (fVar148 * fVar76 - fVar79 * fVar49) + fVar112 * fVar80 + fStack_1a4) -
             fVar140;
    auVar66._0_8_ = CONCAT44(fVar68,fVar87);
    auVar66._8_4_ =
         (fStack_160 + (fVar54 * fVar89 - fVar52 * fVar50) + fVar59 * fVar115 + fStack_1a0) -
         fVar140;
    auVar66._12_4_ =
         (fStack_15c + (fVar55 * fVar78 - fVar30 * fVar51) + fVar113 * fVar116 + fStack_19c) -
         fVar140;
    auVar74._0_4_ =
         (auVar111._0_4_ + (fVar31 * fVar114 - fVar88 * fVar61) + fVar110 * fVar77 + local_198) -
         fVar67;
    auVar74._4_4_ =
         (auVar111._4_4_ + (fVar49 * fVar80 - fVar76 * fVar62) + fVar112 * fVar79 + fStack_194) -
         fVar67;
    auVar74._8_4_ =
         (auVar111._8_4_ + (fVar50 * fVar115 - fVar89 * fVar63) + fVar59 * fVar52 + fStack_190) -
         fVar67;
    auVar74._12_4_ =
         (auVar111._12_4_ + (fVar51 * fVar116 - fVar78 * fVar81) + fVar113 * fVar30 + fStack_18c) -
         fVar67;
    auVar103._0_4_ =
         (local_178 + (fVar61 * fVar77 - fVar114 * fVar53) + fVar110 * fVar88 + fVar105) - fVar75;
    auVar103._4_4_ =
         (fStack_174 + (fVar62 * fVar79 - fVar80 * fVar148) + fVar112 * fVar76 + fVar107) - fVar75;
    auVar103._8_4_ =
         (fStack_170 + (fVar63 * fVar52 - fVar115 * fVar54) + fVar59 * fVar89 + fVar108) - fVar75;
    auVar103._12_4_ =
         (fStack_16c + (fVar81 * fVar30 - fVar116 * fVar55) + fVar113 * fVar78 + fVar109) - fVar75;
    if ((bVar21 & 0xf) == 0) {
      lVar13 = lVar27 * 0xc;
      auVar46._8_4_ = auVar66._8_4_;
      auVar46._0_8_ = auVar66._0_8_;
      auVar46._12_4_ = auVar66._12_4_;
      auVar32 = insertps(auVar46,auVar74,0x30);
      auVar57._4_4_ = auVar74._8_4_;
      auVar57._0_4_ = auVar74._4_4_;
      auVar57._8_4_ = auVar103._0_4_;
      auVar57._12_4_ = auVar103._4_4_;
      auVar32 = insertps(auVar32,auVar103,0x20);
      *pfVar23 = auVar32._0_4_;
      pfVar23[1] = auVar32._12_4_;
      pfVar23[2] = auVar32._8_4_;
      pfVar23[3] = auVar32._4_4_;
      auVar32 = blendps(auVar57,auVar66,4);
      puVar3 = (undefined4 *)(param_4 + 0x10 + lVar13);
      *puVar3 = auVar32._0_4_;
      puVar3[1] = auVar32._12_4_;
      puVar3[2] = auVar32._8_4_;
      puVar3[3] = auVar32._4_4_;
      pfVar23 = (float *)(param_4 + 0x20 + lVar13);
      *pfVar23 = auVar103._8_4_;
      pfVar23[1] = auVar66._12_4_;
      pfVar23[2] = auVar74._12_4_;
      pfVar23[3] = auVar103._12_4_;
      auVar32 = *(undefined1 (*) [16])(param_7 + lVar13);
      auVar37 = *(undefined1 (*) [16])(param_7 + 0x10 + lVar13);
      puVar3 = (undefined4 *)(param_7 + 0x20 + lVar13);
      auVar96._0_4_ = auVar32._0_4_;
      auVar33 = insertps(auVar37,auVar32,0x8c);
      auVar96._4_4_ = auVar32._12_4_;
      auVar96._8_4_ = auVar37._8_4_;
      auVar96._12_4_ = puVar3[1];
      auVar85._4_4_ = auVar37._0_4_;
      auVar85._0_4_ = auVar32._4_4_;
      auVar85._8_4_ = auVar37._12_4_;
      auVar85._12_4_ = puVar3[2];
      auVar45._0_8_ = auVar33._0_8_;
      auVar45._8_4_ = *puVar3;
      auVar45._12_4_ = puVar3[3];
    }
    else {
      if ((bVar26 & 1) != 0) {
        *pfVar23 = fVar87;
      }
      if ((bVar26 & 2) != 0) {
        uVar90 = extractps(auVar66,1);
        *(undefined8 *)(param_4 + 0xc + lVar27 * 0xc) = uVar90;
      }
      if ((bVar26 & 4) != 0) {
        uVar90 = extractps(auVar66,2);
        *(undefined8 *)(param_4 + 0x18 + lVar27 * 0xc) = uVar90;
      }
      if ((char)bVar26 < '\0') {
        uVar90 = extractps(auVar66,3);
        *(undefined8 *)(param_4 + 0x24 + lVar27 * 0xc) = uVar90;
      }
      if ((bVar26 & 1) != 0) {
        *(float *)(param_4 + 4 + lVar27 * 0xc) = auVar74._0_4_;
      }
      if ((bVar26 & 2) != 0) {
        uVar90 = extractps(auVar74,1);
        *(undefined8 *)(param_4 + 0x10 + lVar27 * 0xc) = uVar90;
      }
      if ((bVar26 & 4) != 0) {
        uVar90 = extractps(auVar74,2);
        *(undefined8 *)(param_4 + 0x1c + lVar27 * 0xc) = uVar90;
      }
      if ((char)bVar26 < '\0') {
        uVar90 = extractps(auVar74,3);
        *(undefined8 *)(param_4 + 0x28 + lVar27 * 0xc) = uVar90;
      }
      if ((bVar26 & 1) != 0) {
        *(float *)(param_4 + 8 + lVar27 * 0xc) = auVar103._0_4_;
      }
      if ((bVar26 & 2) != 0) {
        uVar90 = extractps(auVar103,1);
        *(undefined8 *)(param_4 + 0x14 + lVar27 * 0xc) = uVar90;
      }
      if ((bVar26 & 4) != 0) {
        uVar90 = extractps(auVar103,2);
        *(undefined8 *)(param_4 + 0x20 + lVar27 * 0xc) = uVar90;
      }
      if ((char)bVar26 < '\0') {
        uVar90 = extractps(auVar103,3);
        *(undefined8 *)(param_4 + 0x2c + lVar27 * 0xc) = uVar90;
      }
      auVar44._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar56._0_4_;
      auVar44._4_4_ = _UNK_150b50da4 & auVar56._4_4_;
      auVar44._8_4_ = _UNK_150b50da8 & auVar56._8_4_;
      auVar44._12_4_ = _UNK_150b50dac & auVar56._12_4_;
      lVar22 = extractps(auVar44,1);
      lVar15 = extractps(auVar44,2);
      lVar16 = extractps(auVar44,3);
      lVar13 = param_7 + lVar27 * 0xc;
      auVar32 = insertps(ZEXT416(*(uint *)(param_7 + lVar27 * 0xc)),*(undefined4 *)(lVar22 + lVar13)
                         ,0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(lVar15 + lVar13),0x20);
      auVar96 = insertps(auVar32,*(undefined4 *)(lVar16 + lVar13),0x30);
      auVar32 = ___xmm_000000280000001c0000001000000004 & auVar56;
      auVar37 = insertps(ZEXT416(*(uint *)((ulonglong)auVar32._0_4_ + lVar13)),
                         *(undefined4 *)((ulonglong)auVar32._4_4_ + lVar13),0x10);
      auVar37 = insertps(auVar37,*(undefined4 *)((ulonglong)auVar32._8_4_ + lVar13),0x20);
      auVar85 = insertps(auVar37,*(undefined4 *)((ulonglong)auVar32._12_4_ + lVar13),0x30);
      auVar56 = auVar56 & ___xmm_0000002c000000200000001400000008;
      auVar32 = insertps(ZEXT416(*(uint *)((ulonglong)auVar56._0_4_ + lVar13)),
                         *(undefined4 *)((ulonglong)auVar56._4_4_ + lVar13),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)((ulonglong)auVar56._8_4_ + lVar13),0x20);
      auVar45 = insertps(auVar32,*(undefined4 *)((ulonglong)auVar56._12_4_ + lVar13),0x30);
    }
    auVar97._0_4_ = auVar96._0_4_ - fVar87;
    auVar97._4_4_ = auVar96._4_4_ - fVar68;
    auVar97._8_4_ = auVar96._8_4_ - auVar66._8_4_;
    auVar97._12_4_ = auVar96._12_4_ - auVar66._12_4_;
    auVar86._0_4_ = auVar85._0_4_ - auVar74._0_4_;
    auVar86._4_4_ = auVar85._4_4_ - auVar74._4_4_;
    auVar86._8_4_ = auVar85._8_4_ - auVar74._8_4_;
    auVar86._12_4_ = auVar85._12_4_ - auVar74._12_4_;
    auVar47._0_4_ = auVar45._0_4_ - auVar103._0_4_;
    auVar47._4_4_ = auVar45._4_4_ - auVar103._4_4_;
    auVar47._8_4_ = auVar45._8_4_ - auVar103._8_4_;
    auVar47._12_4_ = auVar45._12_4_ - auVar103._12_4_;
    auVar58._4_4_ = param_11;
    auVar58._0_4_ = param_11;
    auVar58._8_4_ = param_11;
    auVar58._12_4_ = param_11;
    auVar33 = divps(auVar97,auVar58);
    auVar37 = divps(auVar86,auVar58);
    auVar32 = divps(auVar47,auVar58);
    puVar3 = (undefined4 *)(param_5 + lVar27 * 0xc);
    if ((bVar21 & 0xf) == 0) {
      auVar34 = insertps(auVar33,auVar37,0x30);
      auVar60._0_8_ = auVar37._4_8_;
      auVar60._8_4_ = auVar32._0_4_;
      auVar60._12_4_ = auVar32._4_4_;
      auVar34 = insertps(auVar34,auVar32,0x20);
      *puVar3 = auVar34._0_4_;
      puVar3[1] = auVar34._12_4_;
      puVar3[2] = auVar34._8_4_;
      puVar3[3] = auVar34._4_4_;
      auVar34 = blendps(auVar60,auVar33,4);
      puVar3[4] = auVar34._0_4_;
      puVar3[5] = auVar34._12_4_;
      puVar3[6] = auVar34._8_4_;
      puVar3[7] = auVar34._4_4_;
      puVar3[8] = auVar32._8_4_;
      puVar3[9] = auVar33._12_4_;
      puVar3[10] = auVar37._12_4_;
      puVar3[0xb] = auVar32._12_4_;
    }
    else {
      if ((bVar26 & 1) != 0) {
        *puVar3 = auVar33._0_4_;
      }
      if ((bVar26 & 2) != 0) {
        uVar90 = extractps(auVar33,1);
        *(undefined8 *)(puVar3 + 3) = uVar90;
      }
      if ((bVar26 & 4) != 0) {
        uVar90 = extractps(auVar33,2);
        *(undefined8 *)(puVar3 + 6) = uVar90;
      }
      if ((char)bVar26 < '\0') {
        uVar90 = extractps(auVar33,3);
        *(undefined8 *)(puVar3 + 9) = uVar90;
      }
      if ((bVar26 & 1) != 0) {
        puVar3[1] = auVar37._0_4_;
      }
      if ((bVar26 & 2) != 0) {
        uVar90 = extractps(auVar37,1);
        *(undefined8 *)(puVar3 + 4) = uVar90;
      }
      if ((bVar26 & 4) != 0) {
        uVar90 = extractps(auVar37,2);
        *(undefined8 *)(puVar3 + 7) = uVar90;
      }
      if ((char)bVar26 < '\0') {
        uVar90 = extractps(auVar37,3);
        *(undefined8 *)(puVar3 + 10) = uVar90;
      }
      if ((bVar26 & 1) != 0) {
        puVar3[2] = auVar32._0_4_;
      }
      if ((bVar26 & 2) != 0) {
        uVar90 = extractps(auVar32,1);
        *(undefined8 *)(puVar3 + 5) = uVar90;
      }
      if ((bVar26 & 4) != 0) {
        uVar90 = extractps(auVar32,2);
        *(undefined8 *)(puVar3 + 8) = uVar90;
      }
      if ((char)bVar26 < '\0') {
        uVar90 = extractps(auVar32,3);
        *(undefined8 *)(puVar3 + 0xb) = uVar90;
      }
    }
  }
  return;
}

// ApplyPreSimulationTransform_sse4 @ 140d130b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPreSimulationTransform_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,float *param_8,float *param_9,undefined4 param_10,
               uint param_11)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined4 uVar12;
  undefined4 uVar13;
  float *pfVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  byte bVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  uint *puVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar35;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  float fVar47;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar49 [16];
  float fVar60;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
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
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  uint uVar81;
  uint uVar82;
  uint uVar83;
  uint uVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  float fVar88;
  float fVar90;
  float fVar91;
  float fVar92;
  float fVar93;
  undefined1 auVar89 [16];
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar101;
  float fVar102;
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  float fVar108;
  undefined1 auVar100 [16];
  float fVar109;
  undefined8 uVar110;
  float fVar114;
  float fVar115;
  float fVar116;
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  float fVar117;
  float fVar118;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  float fStack_14c;
  float fStack_13c;
  float fStack_11c;
  float fStack_10c;
  undefined1 auVar48 [16];
  float fVar103;
  
  uVar17 = param_11 + 3;
  if (-1 < (int)param_11) {
    uVar17 = param_11;
  }
  uVar17 = uVar17 & 0xfffffffc;
  if ((int)uVar17 < 1) {
    uVar16 = 0;
    if ((int)param_11 < 1) {
      return;
    }
  }
  else {
    lVar21 = 8;
    uVar16 = 0;
    uVar19 = 0;
    do {
      auVar26 = *(undefined1 (*) [16])(param_3 + -0x20 + lVar21 * 4);
      auVar25 = *(undefined1 (*) [16])(param_3 + -0x10 + lVar21 * 4);
      pfVar14 = (float *)(param_3 + lVar21 * 4);
      auVar89 = insertps(auVar25,auVar26,0x8c);
      fVar35 = param_8[8];
      fVar46 = auVar26._0_4_ * fVar35;
      fVar57 = auVar26._12_4_ * fVar35;
      fVar58 = auVar25._8_4_ * fVar35;
      fVar59 = pfVar14[1] * fVar35;
      fVar122 = param_8[9];
      fVar96 = auVar26._4_4_ * fVar122;
      fVar101 = auVar25._0_4_ * fVar122;
      fVar104 = auVar25._12_4_ * fVar122;
      fVar106 = pfVar14[2] * fVar122;
      fVar60 = param_8[10];
      fVar87 = auVar89._0_4_ * fVar60;
      fVar90 = auVar89._4_4_ * fVar60;
      fVar92 = *pfVar14 * fVar60;
      fVar94 = pfVar14[3] * fVar60;
      fVar85 = *param_8;
      fVar108 = param_8[1];
      fVar86 = param_8[2];
      fVar123 = param_8[3];
      fVar109 = fVar46 * fVar86 - fVar87 * fVar85;
      fVar114 = fVar57 * fVar86 - fVar90 * fVar85;
      fVar115 = fVar58 * fVar86 - fVar92 * fVar85;
      fVar116 = fVar59 * fVar86 - fVar94 * fVar85;
      fVar109 = fVar109 + fVar109;
      fVar114 = fVar114 + fVar114;
      fVar115 = fVar115 + fVar115;
      fVar116 = fVar116 + fVar116;
      fVar97 = fVar96 * fVar85 - fVar46 * fVar108;
      fVar102 = fVar101 * fVar85 - fVar57 * fVar108;
      fVar105 = fVar104 * fVar85 - fVar58 * fVar108;
      fVar107 = fVar106 * fVar85 - fVar59 * fVar108;
      fVar97 = fVar97 + fVar97;
      fVar102 = fVar102 + fVar102;
      fVar105 = fVar105 + fVar105;
      fVar107 = fVar107 + fVar107;
      fVar88 = fVar87 * fVar108 - fVar96 * fVar86;
      fVar91 = fVar90 * fVar108 - fVar101 * fVar86;
      fVar93 = fVar92 * fVar108 - fVar104 * fVar86;
      fVar95 = fVar94 * fVar108 - fVar106 * fVar86;
      fVar88 = fVar88 + fVar88;
      fVar91 = fVar91 + fVar91;
      fVar93 = fVar93 + fVar93;
      fVar95 = fVar95 + fVar95;
      fVar103 = param_8[4];
      fVar117 = param_8[6];
      fVar36 = param_9[2];
      fVar118 = ((fVar85 * fVar109 - fVar88 * fVar108) + fVar123 * fVar97 + fVar87 + fVar117) -
                fVar36;
      fVar119 = ((fVar85 * fVar114 - fVar91 * fVar108) + fVar123 * fVar102 + fVar90 + fVar117) -
                fVar36;
      fVar120 = ((fVar85 * fVar115 - fVar93 * fVar108) + fVar123 * fVar105 + fVar92 + fVar117) -
                fVar36;
      fVar121 = ((fVar85 * fVar116 - fVar95 * fVar108) + fVar123 * fVar107 + fVar94 + fVar117) -
                fVar36;
      puVar1 = (undefined4 *)(param_6 + (uVar19 & 0xffffffff));
      uVar12 = *puVar1;
      uVar13 = puVar1[1];
      fVar92 = (float)puVar1[2];
      fVar94 = (float)puVar1[3];
      fVar87 = param_8[5];
      fVar90 = *param_9;
      fVar47 = ((fVar108 * fVar97 - fVar109 * fVar86) + fVar123 * fVar88 + fVar46 + fVar103) -
               fVar90;
      fVar57 = ((fVar108 * fVar102 - fVar114 * fVar86) + fVar123 * fVar91 + fVar57 + fVar103) -
               fVar90;
      auVar48._0_8_ = CONCAT44(fVar57,fVar47);
      auVar48._8_4_ =
           ((fVar108 * fVar105 - fVar115 * fVar86) + fVar123 * fVar93 + fVar58 + fVar103) - fVar90;
      auVar48._12_4_ =
           ((fVar108 * fVar107 - fVar116 * fVar86) + fVar123 * fVar95 + fVar59 + fVar103) - fVar90;
      fVar46 = param_9[1];
      fVar58 = ((fVar86 * fVar88 - fVar97 * fVar85) + fVar123 * fVar109 + fVar96 + fVar87) - fVar46;
      fVar59 = ((fVar86 * fVar91 - fVar102 * fVar85) + fVar123 * fVar114 + fVar101 + fVar87) -
               fVar46;
      fVar88 = ((fVar86 * fVar93 - fVar105 * fVar85) + fVar123 * fVar115 + fVar104 + fVar87) -
               fVar46;
      fVar91 = ((fVar86 * fVar95 - fVar107 * fVar85) + fVar123 * fVar116 + fVar106 + fVar87) -
               fVar46;
      auVar71._8_4_ = fVar57;
      auVar71._0_8_ = auVar48._0_8_;
      auVar71._12_4_ = fVar59;
      puVar2 = (undefined8 *)(param_1 + uVar19 * 4);
      *puVar2 = CONCAT44(fVar58,fVar47);
      puVar2[1] = CONCAT44(uVar12,fVar118);
      puVar2 = (undefined8 *)(param_1 + 0x10 + uVar19 * 4);
      *puVar2 = auVar71._8_8_;
      *(float *)(puVar2 + 1) = fVar119;
      *(undefined4 *)((longlong)puVar2 + 0xc) = uVar13;
      pfVar14 = (float *)(param_1 + 0x20 + uVar19 * 4);
      *pfVar14 = auVar48._8_4_;
      pfVar14[1] = fVar88;
      pfVar14[2] = fVar120;
      pfVar14[3] = fVar92;
      pfVar14 = (float *)(param_1 + 0x30 + uVar19 * 4);
      *pfVar14 = auVar48._12_4_;
      pfVar14[1] = fVar91;
      pfVar14[2] = fVar121;
      pfVar14[3] = fVar94;
      auVar24._8_4_ = auVar48._8_4_;
      auVar24._0_8_ = auVar48._0_8_;
      auVar24._12_4_ = auVar48._12_4_;
      auVar25._4_4_ = fVar59;
      auVar25._0_4_ = fVar58;
      auVar25._8_4_ = fVar88;
      auVar25._12_4_ = fVar91;
      auVar25 = insertps(auVar24,auVar25,0x30);
      auVar37._4_4_ = fVar88;
      auVar37._0_4_ = fVar59;
      auVar37._8_4_ = fVar118;
      auVar37._12_4_ = fVar119;
      auVar26._4_4_ = fVar119;
      auVar26._0_4_ = fVar118;
      auVar26._8_4_ = fVar120;
      auVar26._12_4_ = fVar121;
      auVar26 = insertps(auVar25,auVar26,0x20);
      puVar1 = (undefined4 *)(param_3 + -0x20 + lVar21 * 4);
      *puVar1 = auVar26._0_4_;
      puVar1[1] = auVar26._12_4_;
      puVar1[2] = auVar26._8_4_;
      puVar1[3] = auVar26._4_4_;
      auVar26 = blendps(auVar37,auVar48,4);
      puVar1 = (undefined4 *)(param_3 + -0x10 + lVar21 * 4);
      *puVar1 = auVar26._0_4_;
      puVar1[1] = auVar26._12_4_;
      puVar1[2] = auVar26._8_4_;
      puVar1[3] = auVar26._4_4_;
      pfVar14 = (float *)(param_3 + lVar21 * 4);
      *pfVar14 = fVar120;
      pfVar14[1] = auVar48._12_4_;
      pfVar14[2] = fVar91;
      pfVar14[3] = fVar121;
      auVar26 = *(undefined1 (*) [16])(param_2 + -0x20 + lVar21 * 4);
      auVar25 = *(undefined1 (*) [16])(param_2 + -0x10 + lVar21 * 4);
      pfVar14 = (float *)(param_2 + lVar21 * 4);
      auVar89 = insertps(auVar25,auVar26,0x8c);
      fVar101 = auVar26._0_4_ * fVar35;
      fVar102 = auVar26._12_4_ * fVar35;
      fVar104 = auVar25._8_4_ * fVar35;
      fVar105 = pfVar14[1] * fVar35;
      fVar58 = auVar26._4_4_ * fVar122;
      fVar59 = auVar25._0_4_ * fVar122;
      fVar88 = auVar25._12_4_ * fVar122;
      fVar91 = pfVar14[2] * fVar122;
      fVar92 = auVar89._0_4_ * fVar60;
      fVar94 = auVar89._4_4_ * fVar60;
      fVar47 = *pfVar14 * fVar60;
      fVar57 = pfVar14[3] * fVar60;
      fVar93 = fVar58 * fVar85 - fVar101 * fVar108;
      fVar95 = fVar59 * fVar85 - fVar102 * fVar108;
      fVar96 = fVar88 * fVar85 - fVar104 * fVar108;
      fVar97 = fVar91 * fVar85 - fVar105 * fVar108;
      fVar106 = fVar92 * fVar108 - fVar58 * fVar86;
      fVar107 = fVar94 * fVar108 - fVar59 * fVar86;
      fVar109 = fVar47 * fVar108 - fVar88 * fVar86;
      fVar114 = fVar57 * fVar108 - fVar91 * fVar86;
      fVar115 = fVar101 * fVar86 - fVar92 * fVar85;
      fVar116 = fVar102 * fVar86 - fVar94 * fVar85;
      fVar118 = fVar104 * fVar86 - fVar47 * fVar85;
      fVar119 = fVar105 * fVar86 - fVar57 * fVar85;
      fVar106 = fVar106 + fVar106;
      fVar107 = fVar107 + fVar107;
      fVar109 = fVar109 + fVar109;
      fVar114 = fVar114 + fVar114;
      fVar115 = fVar115 + fVar115;
      fVar116 = fVar116 + fVar116;
      fVar118 = fVar118 + fVar118;
      fVar119 = fVar119 + fVar119;
      fVar93 = fVar93 + fVar93;
      fVar95 = fVar95 + fVar95;
      fVar96 = fVar96 + fVar96;
      fVar97 = fVar97 + fVar97;
      auVar27._0_4_ = (fVar85 * fVar115 - fVar106 * fVar108) + fVar123 * fVar93 + fVar92;
      auVar27._4_4_ = (fVar85 * fVar116 - fVar107 * fVar108) + fVar123 * fVar95 + fVar94;
      auVar27._8_4_ = (fVar85 * fVar118 - fVar109 * fVar108) + fVar123 * fVar96 + fVar47;
      auVar27._12_4_ = (fVar85 * fVar119 - fVar114 * fVar108) + fVar123 * fVar97 + fVar57;
      auVar61._0_8_ =
           CONCAT44((fVar108 * fVar95 - fVar116 * fVar86) + fVar123 * fVar107 + fVar102,
                    (fVar108 * fVar93 - fVar115 * fVar86) + fVar123 * fVar106 + fVar101);
      auVar61._8_4_ = (fVar108 * fVar96 - fVar118 * fVar86) + fVar123 * fVar109 + fVar104;
      auVar61._12_4_ = (fVar108 * fVar97 - fVar119 * fVar86) + fVar123 * fVar114 + fVar105;
      auVar38._0_4_ = (fVar86 * fVar106 - fVar93 * fVar85) + fVar123 * fVar115 + fVar58;
      auVar38._4_4_ = (fVar86 * fVar107 - fVar95 * fVar85) + fVar123 * fVar116 + fVar59;
      auVar38._8_4_ = (fVar86 * fVar109 - fVar96 * fVar85) + fVar123 * fVar118 + fVar88;
      auVar38._12_4_ = (fVar86 * fVar114 - fVar97 * fVar85) + fVar123 * fVar119 + fVar91;
      auVar49._8_4_ = auVar61._8_4_;
      auVar49._0_8_ = auVar61._0_8_;
      auVar49._12_4_ = auVar61._12_4_;
      auVar26 = insertps(auVar49,auVar38,0x30);
      auVar69._4_4_ = auVar38._8_4_;
      auVar69._0_4_ = auVar38._4_4_;
      auVar69._8_4_ = auVar27._0_4_;
      auVar69._12_4_ = auVar27._4_4_;
      auVar26 = insertps(auVar26,auVar27,0x20);
      puVar1 = (undefined4 *)(param_2 + -0x20 + lVar21 * 4);
      *puVar1 = auVar26._0_4_;
      puVar1[1] = auVar26._12_4_;
      puVar1[2] = auVar26._8_4_;
      puVar1[3] = auVar26._4_4_;
      auVar26 = blendps(auVar69,auVar61,4);
      puVar1 = (undefined4 *)(param_2 + -0x10 + lVar21 * 4);
      *puVar1 = auVar26._0_4_;
      puVar1[1] = auVar26._12_4_;
      puVar1[2] = auVar26._8_4_;
      puVar1[3] = auVar26._4_4_;
      pfVar14 = (float *)(param_2 + lVar21 * 4);
      *pfVar14 = auVar27._8_4_;
      pfVar14[1] = auVar61._12_4_;
      pfVar14[2] = auVar38._12_4_;
      pfVar14[3] = auVar27._12_4_;
      auVar26 = *(undefined1 (*) [16])(param_4 + -0x20 + lVar21 * 4);
      auVar25 = *(undefined1 (*) [16])(param_4 + -0x10 + lVar21 * 4);
      pfVar14 = (float *)(param_4 + lVar21 * 4);
      auVar89 = insertps(auVar25,auVar26,0x8c);
      fVar92 = auVar26._0_4_ * fVar35;
      fVar94 = auVar26._12_4_ * fVar35;
      fVar47 = auVar25._8_4_ * fVar35;
      fVar35 = pfVar14[1] * fVar35;
      fVar109 = auVar26._4_4_ * fVar122;
      fVar114 = auVar25._0_4_ * fVar122;
      fVar115 = auVar25._12_4_ * fVar122;
      fVar122 = pfVar14[2] * fVar122;
      fVar91 = auVar89._0_4_ * fVar60;
      fVar93 = auVar89._4_4_ * fVar60;
      fVar95 = *pfVar14 * fVar60;
      fVar60 = pfVar14[3] * fVar60;
      fVar104 = fVar109 * fVar85 - fVar92 * fVar108;
      fVar105 = fVar114 * fVar85 - fVar94 * fVar108;
      fVar106 = fVar115 * fVar85 - fVar47 * fVar108;
      fVar107 = fVar122 * fVar85 - fVar35 * fVar108;
      fVar57 = fVar91 * fVar108 - fVar109 * fVar86;
      fVar58 = fVar93 * fVar108 - fVar114 * fVar86;
      fVar59 = fVar95 * fVar108 - fVar115 * fVar86;
      fVar88 = fVar60 * fVar108 - fVar122 * fVar86;
      fVar96 = fVar92 * fVar86 - fVar91 * fVar85;
      fVar97 = fVar94 * fVar86 - fVar93 * fVar85;
      fVar101 = fVar47 * fVar86 - fVar95 * fVar85;
      fVar102 = fVar35 * fVar86 - fVar60 * fVar85;
      fVar57 = fVar57 + fVar57;
      fVar58 = fVar58 + fVar58;
      fVar59 = fVar59 + fVar59;
      fVar88 = fVar88 + fVar88;
      fVar96 = fVar96 + fVar96;
      fVar97 = fVar97 + fVar97;
      fVar101 = fVar101 + fVar101;
      fVar102 = fVar102 + fVar102;
      fVar104 = fVar104 + fVar104;
      fVar105 = fVar105 + fVar105;
      fVar106 = fVar106 + fVar106;
      fVar107 = fVar107 + fVar107;
      fVar92 = ((fVar108 * fVar104 - fVar96 * fVar86) + fVar123 * fVar57 + fVar92 + fVar103) -
               fVar90;
      fVar94 = ((fVar108 * fVar105 - fVar97 * fVar86) + fVar123 * fVar58 + fVar94 + fVar103) -
               fVar90;
      auVar39._0_8_ = CONCAT44(fVar94,fVar92);
      auVar39._8_4_ =
           ((fVar108 * fVar106 - fVar101 * fVar86) + fVar123 * fVar59 + fVar47 + fVar103) - fVar90;
      auVar39._12_4_ =
           ((fVar108 * fVar107 - fVar102 * fVar86) + fVar123 * fVar88 + fVar35 + fVar103) - fVar90;
      auVar78._0_4_ =
           ((fVar86 * fVar57 - fVar104 * fVar85) + fVar123 * fVar96 + fVar109 + fVar87) - fVar46;
      auVar78._4_4_ =
           ((fVar86 * fVar58 - fVar105 * fVar85) + fVar123 * fVar97 + fVar114 + fVar87) - fVar46;
      auVar78._8_4_ =
           ((fVar86 * fVar59 - fVar106 * fVar85) + fVar123 * fVar101 + fVar115 + fVar87) - fVar46;
      auVar78._12_4_ =
           ((fVar86 * fVar88 - fVar107 * fVar85) + fVar123 * fVar102 + fVar122 + fVar87) - fVar46;
      auVar50._0_4_ =
           ((fVar85 * fVar96 - fVar57 * fVar108) + fVar123 * fVar104 + fVar91 + fVar117) - fVar36;
      auVar50._4_4_ =
           ((fVar85 * fVar97 - fVar58 * fVar108) + fVar123 * fVar105 + fVar93 + fVar117) - fVar36;
      auVar50._8_4_ =
           ((fVar85 * fVar101 - fVar59 * fVar108) + fVar123 * fVar106 + fVar95 + fVar117) - fVar36;
      auVar50._12_4_ =
           ((fVar85 * fVar102 - fVar88 * fVar108) + fVar123 * fVar107 + fVar60 + fVar117) - fVar36;
      auVar28._8_4_ = auVar39._8_4_;
      auVar28._0_8_ = auVar39._0_8_;
      auVar28._12_4_ = auVar39._12_4_;
      auVar26 = insertps(auVar28,auVar78,0x30);
      auVar62._4_4_ = auVar78._8_4_;
      auVar62._0_4_ = auVar78._4_4_;
      auVar62._8_4_ = auVar50._0_4_;
      auVar62._12_4_ = auVar50._4_4_;
      auVar26 = insertps(auVar26,auVar50,0x20);
      puVar1 = (undefined4 *)(param_4 + -0x20 + lVar21 * 4);
      *puVar1 = auVar26._0_4_;
      puVar1[1] = auVar26._12_4_;
      puVar1[2] = auVar26._8_4_;
      puVar1[3] = auVar26._4_4_;
      auVar26 = blendps(auVar62,auVar39,4);
      puVar1 = (undefined4 *)(param_4 + -0x10 + lVar21 * 4);
      *puVar1 = auVar26._0_4_;
      puVar1[1] = auVar26._12_4_;
      puVar1[2] = auVar26._8_4_;
      puVar1[3] = auVar26._4_4_;
      pfVar14 = (float *)(param_4 + lVar21 * 4);
      *pfVar14 = auVar50._8_4_;
      pfVar14[1] = auVar39._12_4_;
      pfVar14[2] = auVar78._12_4_;
      pfVar14[3] = auVar50._12_4_;
      auVar26 = *(undefined1 (*) [16])(param_7 + -0x20 + lVar21 * 4);
      auVar25 = *(undefined1 (*) [16])(param_7 + -0x10 + lVar21 * 4);
      pfVar14 = (float *)(param_7 + lVar21 * 4);
      auVar89 = insertps(auVar25,auVar26,0x8c);
      auVar70._0_4_ = auVar26._0_4_ - fVar92;
      auVar70._4_4_ = auVar26._12_4_ - fVar94;
      auVar70._8_4_ = auVar25._8_4_ - auVar39._8_4_;
      auVar70._12_4_ = pfVar14[1] - auVar39._12_4_;
      auVar29._0_4_ = auVar26._4_4_ - auVar78._0_4_;
      auVar29._4_4_ = auVar25._0_4_ - auVar78._4_4_;
      auVar29._8_4_ = auVar25._12_4_ - auVar78._8_4_;
      auVar29._12_4_ = pfVar14[2] - auVar78._12_4_;
      auVar63._0_4_ = auVar89._0_4_ - auVar50._0_4_;
      auVar63._4_4_ = auVar89._4_4_ - auVar50._4_4_;
      auVar63._8_4_ = *pfVar14 - auVar50._8_4_;
      auVar63._12_4_ = pfVar14[3] - auVar50._12_4_;
      auVar89._4_4_ = param_10;
      auVar89._0_4_ = param_10;
      auVar89._8_4_ = param_10;
      auVar89._12_4_ = param_10;
      auVar71 = divps(auVar70,auVar89);
      auVar26 = divps(auVar29,auVar89);
      auVar89 = divps(auVar63,auVar89);
      auVar25 = insertps(auVar71,auVar26,0x30);
      auVar51._0_8_ = auVar26._4_8_;
      auVar51._8_4_ = auVar89._0_4_;
      auVar51._12_4_ = auVar89._4_4_;
      auVar25 = insertps(auVar25,auVar89,0x20);
      puVar1 = (undefined4 *)(param_5 + -0x20 + lVar21 * 4);
      *puVar1 = auVar25._0_4_;
      puVar1[1] = auVar25._12_4_;
      puVar1[2] = auVar25._8_4_;
      puVar1[3] = auVar25._4_4_;
      auVar25 = blendps(auVar51,auVar71,4);
      puVar1 = (undefined4 *)(param_5 + -0x10 + lVar21 * 4);
      *puVar1 = auVar25._0_4_;
      puVar1[1] = auVar25._12_4_;
      puVar1[2] = auVar25._8_4_;
      puVar1[3] = auVar25._4_4_;
      puVar1 = (undefined4 *)(param_5 + lVar21 * 4);
      *puVar1 = auVar89._8_4_;
      puVar1[1] = auVar71._12_4_;
      puVar1[2] = auVar26._12_4_;
      puVar1[3] = auVar89._12_4_;
      uVar19 = uVar19 + 0x10;
      lVar21 = lVar21 + 0xc;
      uVar16 = uVar16 + 4;
    } while ((int)uVar16 < (int)uVar17);
    if ((int)param_11 <= (int)uVar16) {
      return;
    }
  }
  uVar81 = -(uint)((int)(uVar16 | (uint)__xmm_00000003000000020000000100000000) < (int)param_11);
  uVar82 = -(uint)((int)(uVar16 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_11);
  uVar83 = -(uint)((int)(uVar16 | _UNK_150631e08) < (int)param_11);
  uVar84 = -(uint)((int)(uVar16 | _UNK_150631e0c) < (int)param_11);
  uVar19 = (ulonglong)uVar16;
  pauVar3 = (undefined1 (*) [16])(param_3 + uVar19 * 0xc);
  auVar4._4_4_ = uVar82;
  auVar4._0_4_ = uVar81;
  auVar4._8_4_ = uVar83;
  auVar4._12_4_ = uVar84;
  uVar17 = movmskps(uVar17,auVar4);
  bVar18 = (char)((char)uVar17 << 4) >> 4;
  if (uVar17 == 0xf) {
    auVar26 = *pauVar3;
    auVar25 = pauVar3[1];
    auVar64._0_4_ = auVar26._0_4_;
    auVar89 = insertps(auVar25,auVar26,0x8c);
    auVar64._4_4_ = auVar26._12_4_;
    auVar64._8_4_ = auVar25._8_4_;
    auVar64._12_4_ = *(undefined4 *)(pauVar3[2] + 4);
    auVar72._4_4_ = auVar25._0_4_;
    auVar72._0_4_ = auVar26._4_4_;
    auVar72._8_4_ = auVar25._12_4_;
    auVar72._12_4_ = *(undefined4 *)(pauVar3[2] + 8);
    auVar111._0_8_ = auVar89._0_8_;
    auVar111._8_4_ = *(undefined4 *)pauVar3[2];
    auVar111._12_4_ = *(undefined4 *)(pauVar3[2] + 0xc);
  }
  else {
    auVar30._0_4_ = ___xmm_00000024000000180000000c00000000 & uVar81;
    auVar30._4_4_ = _UNK_150b50da4 & uVar82;
    auVar30._8_4_ = _UNK_150b50da8 & uVar83;
    auVar30._12_4_ = _UNK_150b50dac & uVar84;
    lVar22 = extractps(auVar30,1);
    lVar20 = extractps(auVar30,2);
    lVar21 = extractps(auVar30,3);
    auVar26 = insertps(ZEXT416(*(uint *)*pauVar3),*(undefined4 *)(*pauVar3 + lVar22),0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)(*pauVar3 + lVar20),0x20);
    auVar64 = insertps(auVar26,*(undefined4 *)(*pauVar3 + lVar21),0x30);
    auVar26 = insertps(ZEXT416(*(uint *)(*pauVar3 +
                                        (___xmm_000000280000001c0000001000000004 & uVar81))),
                       *(undefined4 *)(*pauVar3 + (_UNK_150b50db4 & uVar82)),0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)(*pauVar3 + (_UNK_150b50db8 & uVar83)),0x20);
    auVar72 = insertps(auVar26,*(undefined4 *)(*pauVar3 + (_UNK_150b50dbc & uVar84)),0x30);
    auVar26 = insertps(ZEXT416(*(uint *)(*pauVar3 +
                                        (___xmm_0000002c000000200000001400000008 & uVar81))),
                       *(undefined4 *)(*pauVar3 + (_UNK_150b50dc4 & uVar82)),0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)(*pauVar3 + (_UNK_150b50dc8 & uVar83)),0x20);
    auVar111 = insertps(auVar26,*(undefined4 *)(*pauVar3 + (_UNK_150b50dcc & uVar84)),0x30);
  }
  fVar35 = param_8[8];
  fVar58 = auVar64._0_4_ * fVar35;
  fVar59 = auVar64._4_4_ * fVar35;
  fVar88 = auVar64._8_4_ * fVar35;
  fVar91 = auVar64._12_4_ * fVar35;
  fVar122 = param_8[9];
  fVar93 = auVar72._0_4_ * fVar122;
  fVar95 = auVar72._4_4_ * fVar122;
  fVar96 = auVar72._8_4_ * fVar122;
  fVar97 = auVar72._12_4_ * fVar122;
  fVar60 = param_8[10];
  auVar112._0_4_ = auVar111._0_4_ * fVar60;
  auVar112._4_4_ = auVar111._4_4_ * fVar60;
  auVar112._8_4_ = auVar111._8_4_ * fVar60;
  auVar112._12_4_ = auVar111._12_4_ * fVar60;
  fVar85 = *param_8;
  fVar108 = param_8[1];
  fVar86 = param_8[2];
  fVar123 = param_8[3];
  fVar101 = fVar93 * fVar85 - fVar58 * fVar108;
  fVar102 = fVar95 * fVar85 - fVar59 * fVar108;
  fVar104 = fVar96 * fVar85 - fVar88 * fVar108;
  fVar105 = fVar97 * fVar85 - fVar91 * fVar108;
  fVar92 = auVar112._0_4_ * fVar108 - fVar93 * fVar86;
  fVar94 = auVar112._4_4_ * fVar108 - fVar95 * fVar86;
  fVar47 = auVar112._8_4_ * fVar108 - fVar96 * fVar86;
  fVar57 = auVar112._12_4_ * fVar108 - fVar97 * fVar86;
  fVar106 = fVar58 * fVar86 - auVar112._0_4_ * fVar85;
  fVar107 = fVar59 * fVar86 - auVar112._4_4_ * fVar85;
  fVar109 = fVar88 * fVar86 - auVar112._8_4_ * fVar85;
  fVar114 = fVar91 * fVar86 - auVar112._12_4_ * fVar85;
  fVar92 = fVar92 + fVar92;
  fVar94 = fVar94 + fVar94;
  fVar47 = fVar47 + fVar47;
  fVar57 = fVar57 + fVar57;
  fVar106 = fVar106 + fVar106;
  fVar107 = fVar107 + fVar107;
  fVar109 = fVar109 + fVar109;
  fVar114 = fVar114 + fVar114;
  fVar101 = fVar101 + fVar101;
  fVar102 = fVar102 + fVar102;
  fVar104 = fVar104 + fVar104;
  fVar105 = fVar105 + fVar105;
  fVar36 = fVar123 * fVar101 + auVar112._0_4_;
  fVar87 = fVar123 * fVar102 + auVar112._4_4_;
  fVar90 = fVar123 * fVar104 + auVar112._8_4_;
  fVar46 = fVar123 * fVar105 + auVar112._12_4_;
  fStack_11c = param_8[4];
  fStack_10c = param_8[5];
  fVar103 = param_8[6];
  fStack_14c = *param_9;
  fStack_13c = param_9[1];
  fVar117 = param_9[2];
  bVar15 = ~bVar18;
  if ((bVar15 & 9) == 0) {
    auVar112 = *(undefined1 (*) [16])(param_6 + (int)(uVar16 << 2));
  }
  else {
    puVar23 = (uint *)(param_6 + (int)(uVar16 << 2));
    if ((uVar17 & 1) != 0) {
      auVar112 = ZEXT416(*puVar23);
    }
    if ((uVar17 & 2) != 0) {
      auVar112 = insertps(auVar112,puVar23[1],0x10);
    }
    if ((uVar17 & 4) != 0) {
      auVar112 = insertps(auVar112,puVar23[2],0x20);
    }
    if ((uVar17 & 8) != 0) {
      auVar112 = insertps(auVar112,puVar23[3],0x30);
    }
  }
  fVar58 = ((fVar108 * fVar101 - fVar106 * fVar86) + fVar123 * fVar92 + fVar58 + fStack_11c) -
           fStack_14c;
  fVar59 = ((fVar108 * fVar102 - fVar107 * fVar86) + fVar123 * fVar94 + fVar59 + fStack_11c) -
           fStack_14c;
  auVar65._0_8_ = CONCAT44(fVar59,fVar58);
  auVar65._8_4_ =
       ((fVar108 * fVar104 - fVar109 * fVar86) + fVar123 * fVar47 + fVar88 + fStack_11c) -
       fStack_14c;
  auVar65._12_4_ =
       ((fVar108 * fVar105 - fVar114 * fVar86) + fVar123 * fVar57 + fVar91 + fStack_11c) -
       fStack_14c;
  auVar73._0_4_ =
       ((fVar86 * fVar92 - fVar101 * fVar85) + fVar123 * fVar106 + fVar93 + fStack_10c) - fStack_13c
  ;
  auVar73._4_4_ =
       ((fVar86 * fVar94 - fVar102 * fVar85) + fVar123 * fVar107 + fVar95 + fStack_10c) - fStack_13c
  ;
  auVar73._8_4_ =
       ((fVar86 * fVar47 - fVar104 * fVar85) + fVar123 * fVar109 + fVar96 + fStack_10c) - fStack_13c
  ;
  auVar73._12_4_ =
       ((fVar86 * fVar57 - fVar105 * fVar85) + fVar123 * fVar114 + fVar97 + fStack_10c) - fStack_13c
  ;
  fVar36 = ((fVar85 * fVar106 - fVar92 * fVar108) + fVar36 + fVar103) - fVar117;
  fVar87 = ((fVar85 * fVar107 - fVar94 * fVar108) + fVar87 + fVar103) - fVar117;
  fVar90 = ((fVar85 * fVar109 - fVar47 * fVar108) + fVar90 + fVar103) - fVar117;
  fVar46 = ((fVar85 * fVar114 - fVar57 * fVar108) + fVar46 + fVar103) - fVar117;
  pfVar14 = (float *)(param_1 + uVar19 * 0x10);
  if ((bVar15 & 0xf) == 0) {
    auVar41._8_4_ = fVar59;
    auVar41._0_8_ = auVar65._0_8_;
    auVar41._12_4_ = auVar73._4_4_;
    uVar110 = CONCAT44(auVar73._0_4_,fVar58);
    *(undefined8 *)pfVar14 = uVar110;
    *(ulonglong *)(pfVar14 + 2) = CONCAT44(auVar112._0_4_,fVar36);
    *(longlong *)(pfVar14 + 4) = auVar41._8_8_;
    pfVar14[6] = fVar87;
    pfVar14[7] = auVar112._4_4_;
    pfVar14[8] = auVar65._8_4_;
    pfVar14[9] = auVar73._8_4_;
    pfVar14[10] = fVar90;
    pfVar14[0xb] = auVar112._8_4_;
    pfVar14[0xc] = auVar65._12_4_;
    pfVar14[0xd] = auVar73._12_4_;
    pfVar14[0xe] = fVar46;
    pfVar14[0xf] = auVar112._12_4_;
    auVar42._4_4_ = fVar59;
    auVar42._0_4_ = fVar58;
    auVar42._8_4_ = auVar65._8_4_;
    auVar42._12_4_ = auVar65._12_4_;
    auVar26 = insertps(auVar42,auVar73,0x30);
    auVar53._4_4_ = auVar73._8_4_;
    auVar53._0_4_ = auVar73._4_4_;
    auVar53._8_4_ = fVar36;
    auVar53._12_4_ = fVar87;
    auVar11._4_4_ = fVar87;
    auVar11._0_4_ = fVar36;
    auVar11._8_4_ = fVar90;
    auVar11._12_4_ = fVar46;
    auVar26 = insertps(auVar26,auVar11,0x20);
    *(int *)*pauVar3 = auVar26._0_4_;
    *(int *)(*pauVar3 + 4) = auVar26._12_4_;
    *(int *)(*pauVar3 + 8) = auVar26._8_4_;
    *(int *)(*pauVar3 + 0xc) = auVar26._4_4_;
    auVar26 = blendps(auVar53,auVar65,4);
    *(int *)pauVar3[1] = auVar26._0_4_;
    *(int *)(pauVar3[1] + 4) = auVar26._12_4_;
    *(int *)(pauVar3[1] + 8) = auVar26._8_4_;
    *(int *)(pauVar3[1] + 0xc) = auVar26._4_4_;
    *(float *)pauVar3[2] = fVar90;
    *(float *)(pauVar3[2] + 4) = auVar65._12_4_;
    *(float *)(pauVar3[2] + 8) = auVar73._12_4_;
    *(float *)(pauVar3[2] + 0xc) = fVar46;
    pfVar14 = (float *)(param_2 + uVar19 * 0xc);
    auVar26 = *(undefined1 (*) [16])(param_2 + uVar19 * 0xc);
    auVar25 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar19 * 0xc);
    puVar1 = (undefined4 *)(param_2 + 0x20 + uVar19 * 0xc);
    auVar52._0_4_ = auVar26._0_4_;
    auVar89 = insertps(auVar25,auVar26,0x8c);
    auVar52._4_4_ = auVar26._12_4_;
    auVar52._8_4_ = auVar25._8_4_;
    auVar52._12_4_ = puVar1[1];
    auVar74._4_4_ = auVar25._0_4_;
    auVar74._0_4_ = auVar26._4_4_;
    auVar74._8_4_ = auVar25._12_4_;
    auVar74._12_4_ = puVar1[2];
    auVar98._0_8_ = auVar89._0_8_;
    auVar98._8_4_ = *puVar1;
    auVar98._12_4_ = puVar1[3];
  }
  else {
    if ((bVar18 & 1) != 0) {
      *pfVar14 = fVar58;
    }
    if ((bVar18 & 2) != 0) {
      uVar110 = extractps(auVar65,1);
      *(undefined8 *)(pfVar14 + 4) = uVar110;
    }
    if ((bVar18 & 4) != 0) {
      uVar110 = extractps(auVar65,2);
      *(undefined8 *)(pfVar14 + 8) = uVar110;
    }
    if ((char)bVar18 < '\0') {
      uVar110 = extractps(auVar65,3);
      *(undefined8 *)(pfVar14 + 0xc) = uVar110;
    }
    if ((bVar18 & 1) != 0) {
      pfVar14[1] = auVar73._0_4_;
    }
    if ((bVar18 & 2) != 0) {
      uVar110 = extractps(auVar73,1);
      *(undefined8 *)(pfVar14 + 5) = uVar110;
    }
    if ((bVar18 & 4) != 0) {
      uVar110 = extractps(auVar73,2);
      *(undefined8 *)(pfVar14 + 9) = uVar110;
    }
    if ((char)bVar18 < '\0') {
      uVar110 = extractps(auVar73,3);
      *(undefined8 *)(pfVar14 + 0xd) = uVar110;
    }
    if ((bVar18 & 1) != 0) {
      pfVar14[2] = fVar36;
    }
    if ((bVar18 & 2) != 0) {
      auVar10._4_4_ = fVar87;
      auVar10._0_4_ = fVar36;
      auVar10._8_4_ = fVar90;
      auVar10._12_4_ = fVar46;
      uVar110 = extractps(auVar10,1);
      *(undefined8 *)(pfVar14 + 6) = uVar110;
    }
    if ((bVar18 & 4) != 0) {
      auVar9._4_4_ = fVar87;
      auVar9._0_4_ = fVar36;
      auVar9._8_4_ = fVar90;
      auVar9._12_4_ = fVar46;
      uVar110 = extractps(auVar9,2);
      *(undefined8 *)(pfVar14 + 10) = uVar110;
    }
    if ((char)bVar18 < '\0') {
      auVar8._4_4_ = fVar87;
      auVar8._0_4_ = fVar36;
      auVar8._8_4_ = fVar90;
      auVar8._12_4_ = fVar46;
      uVar110 = extractps(auVar8,3);
      *(undefined8 *)(pfVar14 + 0xe) = uVar110;
    }
    if ((bVar18 & 1) != 0) {
      pfVar14[3] = auVar112._0_4_;
    }
    if ((bVar18 & 2) != 0) {
      uVar110 = extractps(auVar112,1);
      *(undefined8 *)(pfVar14 + 7) = uVar110;
    }
    if ((bVar18 & 4) != 0) {
      uVar110 = extractps(auVar112,2);
      *(undefined8 *)(pfVar14 + 0xb) = uVar110;
    }
    if ((char)bVar18 < '\0') {
      uVar110 = extractps(auVar112,3);
      *(undefined8 *)(pfVar14 + 0xf) = uVar110;
    }
    if ((bVar18 & 1) != 0) {
      *(float *)*pauVar3 = fVar58;
    }
    if ((bVar18 & 2) != 0) {
      uVar110 = extractps(auVar65,1);
      *(undefined8 *)(*pauVar3 + 0xc) = uVar110;
    }
    if ((bVar18 & 4) != 0) {
      uVar110 = extractps(auVar65,2);
      *(undefined8 *)(pauVar3[1] + 8) = uVar110;
    }
    if ((char)bVar18 < '\0') {
      uVar110 = extractps(auVar65,3);
      *(undefined8 *)(pauVar3[2] + 4) = uVar110;
    }
    if ((bVar18 & 1) != 0) {
      *(float *)(*pauVar3 + 4) = auVar73._0_4_;
    }
    if ((bVar18 & 2) != 0) {
      uVar110 = extractps(auVar73,1);
      *(undefined8 *)pauVar3[1] = uVar110;
    }
    if ((bVar18 & 4) != 0) {
      uVar110 = extractps(auVar73,2);
      *(undefined8 *)(pauVar3[1] + 0xc) = uVar110;
    }
    if ((char)bVar18 < '\0') {
      uVar110 = extractps(auVar73,3);
      *(undefined8 *)(pauVar3[2] + 8) = uVar110;
    }
    if ((bVar18 & 1) != 0) {
      *(float *)(*pauVar3 + 8) = fVar36;
    }
    if ((bVar18 & 2) != 0) {
      auVar7._4_4_ = fVar87;
      auVar7._0_4_ = fVar36;
      auVar7._8_4_ = fVar90;
      auVar7._12_4_ = fVar46;
      uVar110 = extractps(auVar7,1);
      *(undefined8 *)(pauVar3[1] + 4) = uVar110;
    }
    if ((bVar18 & 4) != 0) {
      auVar6._4_4_ = fVar87;
      auVar6._0_4_ = fVar36;
      auVar6._8_4_ = fVar90;
      auVar6._12_4_ = fVar46;
      uVar110 = extractps(auVar6,2);
      *(undefined8 *)pauVar3[2] = uVar110;
    }
    if ((char)bVar18 < '\0') {
      auVar5._4_4_ = fVar87;
      auVar5._0_4_ = fVar36;
      auVar5._8_4_ = fVar90;
      auVar5._12_4_ = fVar46;
      uVar110 = extractps(auVar5,3);
      *(undefined8 *)(pauVar3[2] + 0xc) = uVar110;
    }
    auVar40._0_4_ = ___xmm_00000024000000180000000c00000000 & uVar81;
    auVar40._4_4_ = _UNK_150b50da4 & uVar82;
    auVar40._8_4_ = _UNK_150b50da8 & uVar83;
    auVar40._12_4_ = _UNK_150b50dac & uVar84;
    lVar21 = extractps(auVar40,1);
    lVar20 = extractps(auVar40,2);
    lVar22 = extractps(auVar40,3);
    pfVar14 = (float *)(param_2 + uVar19 * 0xc);
    auVar26 = insertps(ZEXT416(*(uint *)(param_2 + uVar19 * 0xc)),
                       *(undefined4 *)(lVar21 + (longlong)pfVar14),0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)(lVar20 + (longlong)pfVar14),0x20);
    auVar52 = insertps(auVar26,*(undefined4 *)(lVar22 + (longlong)pfVar14),0x30);
    auVar26 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (___xmm_000000280000001c0000001000000004 & uVar81) +
                                        (longlong)pfVar14)),
                       *(undefined4 *)((ulonglong)(_UNK_150b50db4 & uVar82) + (longlong)pfVar14),
                       0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)
                                ((ulonglong)(_UNK_150b50db8 & uVar83) + (longlong)pfVar14),0x20);
    auVar74 = insertps(auVar26,*(undefined4 *)
                                ((ulonglong)(_UNK_150b50dbc & uVar84) + (longlong)pfVar14),0x30);
    auVar26 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (___xmm_0000002c000000200000001400000008 & uVar81) +
                                        (longlong)pfVar14)),
                       *(undefined4 *)((ulonglong)(_UNK_150b50dc4 & uVar82) + (longlong)pfVar14),
                       0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)
                                ((ulonglong)(_UNK_150b50dc8 & uVar83) + (longlong)pfVar14),0x20);
    auVar98 = insertps(auVar26,*(undefined4 *)
                                ((ulonglong)(_UNK_150b50dcc & uVar84) + (longlong)pfVar14),0x30);
  }
  fVar36 = auVar52._0_4_ * fVar35;
  fVar87 = auVar52._4_4_ * fVar35;
  fVar90 = auVar52._8_4_ * fVar35;
  fVar46 = auVar52._12_4_ * fVar35;
  fVar58 = auVar74._0_4_ * fVar122;
  fVar59 = auVar74._4_4_ * fVar122;
  fVar88 = auVar74._8_4_ * fVar122;
  fVar91 = auVar74._12_4_ * fVar122;
  fVar93 = auVar98._0_4_ * fVar60;
  fVar95 = auVar98._4_4_ * fVar60;
  fVar96 = auVar98._8_4_ * fVar60;
  fVar97 = auVar98._12_4_ * fVar60;
  fVar106 = fVar58 * fVar85 - fVar36 * fVar108;
  fVar107 = fVar59 * fVar85 - fVar87 * fVar108;
  fVar109 = fVar88 * fVar85 - fVar90 * fVar108;
  fVar114 = fVar91 * fVar85 - fVar46 * fVar108;
  fVar101 = fVar93 * fVar108 - fVar58 * fVar86;
  fVar102 = fVar95 * fVar108 - fVar59 * fVar86;
  fVar104 = fVar96 * fVar108 - fVar88 * fVar86;
  fVar105 = fVar97 * fVar108 - fVar91 * fVar86;
  fVar92 = fVar36 * fVar86 - fVar93 * fVar85;
  fVar94 = fVar87 * fVar86 - fVar95 * fVar85;
  fVar47 = fVar90 * fVar86 - fVar96 * fVar85;
  fVar57 = fVar46 * fVar86 - fVar97 * fVar85;
  fVar101 = fVar101 + fVar101;
  fVar102 = fVar102 + fVar102;
  fVar104 = fVar104 + fVar104;
  fVar105 = fVar105 + fVar105;
  fVar92 = fVar92 + fVar92;
  fVar94 = fVar94 + fVar94;
  fVar47 = fVar47 + fVar47;
  fVar57 = fVar57 + fVar57;
  fVar106 = fVar106 + fVar106;
  fVar107 = fVar107 + fVar107;
  fVar109 = fVar109 + fVar109;
  fVar114 = fVar114 + fVar114;
  auVar54._0_4_ = (fVar85 * fVar92 - fVar101 * fVar108) + fVar123 * fVar106 + fVar93;
  auVar54._4_4_ = (fVar85 * fVar94 - fVar102 * fVar108) + fVar123 * fVar107 + fVar95;
  auVar54._8_4_ = (fVar85 * fVar47 - fVar104 * fVar108) + fVar123 * fVar109 + fVar96;
  auVar54._12_4_ = (fVar85 * fVar57 - fVar105 * fVar108) + fVar123 * fVar114 + fVar97;
  fVar36 = (fVar108 * fVar106 - fVar92 * fVar86) + fVar123 * fVar101 + fVar36;
  auVar99._0_8_ =
       CONCAT44((fVar108 * fVar107 - fVar94 * fVar86) + fVar123 * fVar102 + fVar87,fVar36);
  auVar99._8_4_ = (fVar108 * fVar109 - fVar47 * fVar86) + fVar123 * fVar104 + fVar90;
  auVar99._12_4_ = (fVar108 * fVar114 - fVar57 * fVar86) + fVar123 * fVar105 + fVar46;
  auVar75._0_4_ = (fVar86 * fVar101 - fVar106 * fVar85) + fVar123 * fVar92 + fVar58;
  auVar75._4_4_ = (fVar86 * fVar102 - fVar107 * fVar85) + fVar123 * fVar94 + fVar59;
  auVar75._8_4_ = (fVar86 * fVar104 - fVar109 * fVar85) + fVar123 * fVar47 + fVar88;
  auVar75._12_4_ = (fVar86 * fVar105 - fVar114 * fVar85) + fVar123 * fVar57 + fVar91;
  if ((bVar15 & 0xf) == 0) {
    lVar21 = uVar19 * 0xc;
    auVar31._8_4_ = auVar99._8_4_;
    auVar31._0_8_ = auVar99._0_8_;
    auVar31._12_4_ = auVar99._12_4_;
    auVar26 = insertps(auVar31,auVar75,0x30);
    auVar43._4_4_ = auVar75._8_4_;
    auVar43._0_4_ = auVar75._4_4_;
    auVar43._8_4_ = auVar54._0_4_;
    auVar43._12_4_ = auVar54._4_4_;
    auVar26 = insertps(auVar26,auVar54,0x20);
    *pfVar14 = auVar26._0_4_;
    pfVar14[1] = auVar26._12_4_;
    pfVar14[2] = auVar26._8_4_;
    pfVar14[3] = auVar26._4_4_;
    auVar26 = blendps(auVar43,auVar99,4);
    puVar1 = (undefined4 *)(param_2 + 0x10 + lVar21);
    *puVar1 = auVar26._0_4_;
    puVar1[1] = auVar26._12_4_;
    puVar1[2] = auVar26._8_4_;
    puVar1[3] = auVar26._4_4_;
    pfVar14 = (float *)(param_2 + 0x20 + lVar21);
    *pfVar14 = auVar54._8_4_;
    pfVar14[1] = auVar99._12_4_;
    pfVar14[2] = auVar75._12_4_;
    pfVar14[3] = auVar54._12_4_;
    auVar26 = *(undefined1 (*) [16])(param_4 + lVar21);
    auVar25 = *(undefined1 (*) [16])(param_4 + 0x10 + lVar21);
    puVar1 = (undefined4 *)(param_4 + 0x20 + lVar21);
    pfVar14 = (float *)(param_4 + lVar21);
    auVar66._0_4_ = auVar26._0_4_;
    auVar89 = insertps(auVar25,auVar26,0x8c);
    auVar66._4_4_ = auVar26._12_4_;
    auVar66._8_4_ = auVar25._8_4_;
    auVar66._12_4_ = puVar1[1];
    auVar76._4_4_ = auVar25._0_4_;
    auVar76._0_4_ = auVar26._4_4_;
    auVar76._8_4_ = auVar25._12_4_;
    auVar76._12_4_ = puVar1[2];
    auVar113._0_8_ = auVar89._0_8_;
    auVar113._8_4_ = *puVar1;
    auVar113._12_4_ = puVar1[3];
    fVar35 = param_8[8];
    fVar122 = param_8[9];
    fVar60 = param_8[10];
    fVar85 = *param_8;
    fVar108 = param_8[1];
    fVar86 = param_8[2];
    fVar123 = param_8[3];
    fStack_11c = param_8[4];
    fStack_10c = param_8[5];
    fVar103 = param_8[6];
    fStack_14c = *param_9;
    fStack_13c = param_9[1];
    fVar117 = param_9[2];
  }
  else {
    if ((bVar18 & 1) != 0) {
      *pfVar14 = fVar36;
    }
    if ((bVar18 & 2) != 0) {
      uVar110 = extractps(auVar99,1);
      *(undefined8 *)(param_2 + 0xc + uVar19 * 0xc) = uVar110;
    }
    if ((bVar18 & 4) != 0) {
      uVar110 = extractps(auVar99,2);
      *(undefined8 *)(param_2 + 0x18 + uVar19 * 0xc) = uVar110;
    }
    if ((char)bVar18 < '\0') {
      uVar110 = extractps(auVar99,3);
      *(undefined8 *)(param_2 + 0x24 + uVar19 * 0xc) = uVar110;
    }
    if ((bVar18 & 1) != 0) {
      *(float *)(param_2 + 4 + uVar19 * 0xc) = auVar75._0_4_;
    }
    if ((bVar18 & 2) != 0) {
      uVar110 = extractps(auVar75,1);
      *(undefined8 *)(param_2 + 0x10 + uVar19 * 0xc) = uVar110;
    }
    if ((bVar18 & 4) != 0) {
      uVar110 = extractps(auVar75,2);
      *(undefined8 *)(param_2 + 0x1c + uVar19 * 0xc) = uVar110;
    }
    if ((char)bVar18 < '\0') {
      uVar110 = extractps(auVar75,3);
      *(undefined8 *)(param_2 + 0x28 + uVar19 * 0xc) = uVar110;
    }
    if ((bVar18 & 1) != 0) {
      *(float *)(param_2 + 8 + uVar19 * 0xc) = auVar54._0_4_;
    }
    if ((bVar18 & 2) != 0) {
      uVar110 = extractps(auVar54,1);
      *(undefined8 *)(param_2 + 0x14 + uVar19 * 0xc) = uVar110;
    }
    if ((bVar18 & 4) != 0) {
      uVar110 = extractps(auVar54,2);
      *(undefined8 *)(param_2 + 0x20 + uVar19 * 0xc) = uVar110;
    }
    if ((char)bVar18 < '\0') {
      uVar110 = extractps(auVar54,3);
      *(undefined8 *)(param_2 + 0x2c + uVar19 * 0xc) = uVar110;
    }
    pfVar14 = (float *)(param_4 + uVar19 * 0xc);
    auVar26 = insertps(ZEXT416(*(uint *)(param_4 + uVar19 * 0xc)),
                       *(undefined4 *)((ulonglong)(_UNK_150b50da4 & uVar82) + (longlong)pfVar14),
                       0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)
                                ((ulonglong)(_UNK_150b50da8 & uVar83) + (longlong)pfVar14),0x20);
    auVar66 = insertps(auVar26,*(undefined4 *)
                                ((ulonglong)(_UNK_150b50dac & uVar84) + (longlong)pfVar14),0x30);
    auVar26 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (___xmm_000000280000001c0000001000000004 & uVar81) +
                                        (longlong)pfVar14)),
                       *(undefined4 *)((ulonglong)(_UNK_150b50db4 & uVar82) + (longlong)pfVar14),
                       0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)
                                ((ulonglong)(_UNK_150b50db8 & uVar83) + (longlong)pfVar14),0x20);
    auVar76 = insertps(auVar26,*(undefined4 *)
                                ((ulonglong)(_UNK_150b50dbc & uVar84) + (longlong)pfVar14),0x30);
    auVar26 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (___xmm_0000002c000000200000001400000008 & uVar81) +
                                        (longlong)pfVar14)),
                       *(undefined4 *)((ulonglong)(_UNK_150b50dc4 & uVar82) + (longlong)pfVar14),
                       0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)
                                ((ulonglong)(_UNK_150b50dc8 & uVar83) + (longlong)pfVar14),0x20);
    auVar113 = insertps(auVar26,*(undefined4 *)
                                 ((ulonglong)(_UNK_150b50dcc & uVar84) + (longlong)pfVar14),0x30);
  }
  fVar96 = fVar60 * auVar113._0_4_;
  fVar97 = fVar60 * auVar113._4_4_;
  fVar101 = fVar60 * auVar113._8_4_;
  fVar60 = fVar60 * auVar113._12_4_;
  fVar36 = fVar122 * auVar76._0_4_;
  fVar87 = fVar122 * auVar76._4_4_;
  fVar90 = fVar122 * auVar76._8_4_;
  fVar122 = fVar122 * auVar76._12_4_;
  fVar57 = fVar35 * auVar66._0_4_;
  fVar58 = fVar35 * auVar66._4_4_;
  fVar59 = fVar35 * auVar66._8_4_;
  fVar35 = fVar35 * auVar66._12_4_;
  fVar88 = fVar36 * fVar85 - fVar57 * fVar108;
  fVar91 = fVar87 * fVar85 - fVar58 * fVar108;
  fVar93 = fVar90 * fVar85 - fVar59 * fVar108;
  fVar95 = fVar122 * fVar85 - fVar35 * fVar108;
  fVar46 = fVar96 * fVar108 - fVar36 * fVar86;
  fVar92 = fVar97 * fVar108 - fVar87 * fVar86;
  fVar94 = fVar101 * fVar108 - fVar90 * fVar86;
  fVar47 = fVar60 * fVar108 - fVar122 * fVar86;
  fVar102 = fVar57 * fVar86 - fVar96 * fVar85;
  fVar104 = fVar58 * fVar86 - fVar97 * fVar85;
  fVar105 = fVar59 * fVar86 - fVar101 * fVar85;
  fVar106 = fVar35 * fVar86 - fVar60 * fVar85;
  fVar46 = fVar46 + fVar46;
  fVar92 = fVar92 + fVar92;
  fVar94 = fVar94 + fVar94;
  fVar47 = fVar47 + fVar47;
  fVar102 = fVar102 + fVar102;
  fVar104 = fVar104 + fVar104;
  fVar105 = fVar105 + fVar105;
  fVar106 = fVar106 + fVar106;
  fVar88 = fVar88 + fVar88;
  fVar91 = fVar91 + fVar91;
  fVar93 = fVar93 + fVar93;
  fVar95 = fVar95 + fVar95;
  auVar67._0_4_ =
       ((fVar85 * fVar102 - fVar46 * fVar108) + fVar123 * fVar88 + fVar96 + fVar103) - fVar117;
  auVar67._4_4_ =
       ((fVar85 * fVar104 - fVar92 * fVar108) + fVar123 * fVar91 + fVar97 + fVar103) - fVar117;
  auVar67._8_4_ =
       ((fVar85 * fVar105 - fVar94 * fVar108) + fVar123 * fVar93 + fVar101 + fVar103) - fVar117;
  auVar67._12_4_ =
       ((fVar85 * fVar106 - fVar47 * fVar108) + fVar123 * fVar95 + fVar60 + fVar103) - fVar117;
  fVar60 = ((fVar108 * fVar88 - fVar102 * fVar86) + fVar123 * fVar46 + fVar57 + fStack_11c) -
           fStack_14c;
  fVar103 = ((fVar108 * fVar91 - fVar104 * fVar86) + fVar123 * fVar92 + fVar58 + fStack_11c) -
            fStack_14c;
  auVar100._0_8_ = CONCAT44(fVar103,fVar60);
  auVar100._8_4_ =
       ((fVar108 * fVar93 - fVar105 * fVar86) + fVar123 * fVar94 + fVar59 + fStack_11c) - fStack_14c
  ;
  auVar100._12_4_ =
       ((fVar108 * fVar95 - fVar106 * fVar86) + fVar123 * fVar47 + fVar35 + fStack_11c) - fStack_14c
  ;
  auVar77._0_4_ =
       ((fVar86 * fVar46 - fVar88 * fVar85) + fVar123 * fVar102 + fVar36 + fStack_10c) - fStack_13c;
  auVar77._4_4_ =
       ((fVar86 * fVar92 - fVar91 * fVar85) + fVar123 * fVar104 + fVar87 + fStack_10c) - fStack_13c;
  auVar77._8_4_ =
       ((fVar86 * fVar94 - fVar93 * fVar85) + fVar123 * fVar105 + fVar90 + fStack_10c) - fStack_13c;
  auVar77._12_4_ =
       ((fVar86 * fVar47 - fVar95 * fVar85) + fVar123 * fVar106 + fVar122 + fStack_10c) - fStack_13c
  ;
  if ((bVar15 & 0xf) == 0) {
    lVar21 = uVar19 * 0xc;
    auVar33._8_4_ = auVar100._8_4_;
    auVar33._0_8_ = auVar100._0_8_;
    auVar33._12_4_ = auVar100._12_4_;
    auVar26 = insertps(auVar33,auVar77,0x30);
    auVar44._4_4_ = auVar77._8_4_;
    auVar44._0_4_ = auVar77._4_4_;
    auVar44._8_4_ = auVar67._0_4_;
    auVar44._12_4_ = auVar67._4_4_;
    auVar26 = insertps(auVar26,auVar67,0x20);
    *pfVar14 = auVar26._0_4_;
    pfVar14[1] = auVar26._12_4_;
    pfVar14[2] = auVar26._8_4_;
    pfVar14[3] = auVar26._4_4_;
    auVar26 = blendps(auVar44,auVar100,4);
    puVar1 = (undefined4 *)(param_4 + 0x10 + lVar21);
    *puVar1 = auVar26._0_4_;
    puVar1[1] = auVar26._12_4_;
    puVar1[2] = auVar26._8_4_;
    puVar1[3] = auVar26._4_4_;
    pfVar14 = (float *)(param_4 + 0x20 + lVar21);
    *pfVar14 = auVar67._8_4_;
    pfVar14[1] = auVar100._12_4_;
    pfVar14[2] = auVar77._12_4_;
    pfVar14[3] = auVar67._12_4_;
    auVar26 = *(undefined1 (*) [16])(param_7 + lVar21);
    auVar25 = *(undefined1 (*) [16])(param_7 + 0x10 + lVar21);
    puVar1 = (undefined4 *)(param_7 + 0x20 + lVar21);
    auVar79._0_4_ = auVar26._0_4_;
    auVar89 = insertps(auVar25,auVar26,0x8c);
    auVar79._4_4_ = auVar26._12_4_;
    auVar79._8_4_ = auVar25._8_4_;
    auVar79._12_4_ = puVar1[1];
    auVar55._4_4_ = auVar25._0_4_;
    auVar55._0_4_ = auVar26._4_4_;
    auVar55._8_4_ = auVar25._12_4_;
    auVar55._12_4_ = puVar1[2];
    auVar32._0_8_ = auVar89._0_8_;
    auVar32._8_4_ = *puVar1;
    auVar32._12_4_ = puVar1[3];
  }
  else {
    if ((bVar18 & 1) != 0) {
      *pfVar14 = fVar60;
    }
    if ((bVar18 & 2) != 0) {
      uVar110 = extractps(auVar100,1);
      *(undefined8 *)(param_4 + 0xc + uVar19 * 0xc) = uVar110;
    }
    if ((bVar18 & 4) != 0) {
      uVar110 = extractps(auVar100,2);
      *(undefined8 *)(param_4 + 0x18 + uVar19 * 0xc) = uVar110;
    }
    if ((char)bVar18 < '\0') {
      uVar110 = extractps(auVar100,3);
      *(undefined8 *)(param_4 + 0x24 + uVar19 * 0xc) = uVar110;
    }
    if ((bVar18 & 1) != 0) {
      *(float *)(param_4 + 4 + uVar19 * 0xc) = auVar77._0_4_;
    }
    if ((bVar18 & 2) != 0) {
      uVar110 = extractps(auVar77,1);
      *(undefined8 *)(param_4 + 0x10 + uVar19 * 0xc) = uVar110;
    }
    if ((bVar18 & 4) != 0) {
      uVar110 = extractps(auVar77,2);
      *(undefined8 *)(param_4 + 0x1c + uVar19 * 0xc) = uVar110;
    }
    if ((char)bVar18 < '\0') {
      uVar110 = extractps(auVar77,3);
      *(undefined8 *)(param_4 + 0x28 + uVar19 * 0xc) = uVar110;
    }
    if ((bVar18 & 1) != 0) {
      *(float *)(param_4 + 8 + uVar19 * 0xc) = auVar67._0_4_;
    }
    if ((bVar18 & 2) != 0) {
      uVar110 = extractps(auVar67,1);
      *(undefined8 *)(param_4 + 0x14 + uVar19 * 0xc) = uVar110;
    }
    if ((bVar18 & 4) != 0) {
      uVar110 = extractps(auVar67,2);
      *(undefined8 *)(param_4 + 0x20 + uVar19 * 0xc) = uVar110;
    }
    if ((char)bVar18 < '\0') {
      uVar110 = extractps(auVar67,3);
      *(undefined8 *)(param_4 + 0x2c + uVar19 * 0xc) = uVar110;
    }
    lVar21 = param_7 + uVar19 * 0xc;
    auVar26 = insertps(ZEXT416(*(uint *)(param_7 + uVar19 * 0xc)),
                       *(undefined4 *)((ulonglong)(_UNK_150b50da4 & uVar82) + lVar21),0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)((ulonglong)(_UNK_150b50da8 & uVar83) + lVar21),0x20);
    auVar79 = insertps(auVar26,*(undefined4 *)((ulonglong)(_UNK_150b50dac & uVar84) + lVar21),0x30);
    auVar26 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (___xmm_000000280000001c0000001000000004 & uVar81) + lVar21
                                        )),
                       *(undefined4 *)((ulonglong)(_UNK_150b50db4 & uVar82) + lVar21),0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)((ulonglong)(_UNK_150b50db8 & uVar83) + lVar21),0x20);
    auVar55 = insertps(auVar26,*(undefined4 *)((ulonglong)(_UNK_150b50dbc & uVar84) + lVar21),0x30);
    auVar26 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (uVar81 & ___xmm_0000002c000000200000001400000008) + lVar21
                                        )),
                       *(undefined4 *)((ulonglong)(uVar82 & _UNK_150b50dc4) + lVar21),0x10);
    auVar26 = insertps(auVar26,*(undefined4 *)((ulonglong)(uVar83 & _UNK_150b50dc8) + lVar21),0x20);
    auVar32 = insertps(auVar26,*(undefined4 *)((ulonglong)(uVar84 & _UNK_150b50dcc) + lVar21),0x30);
  }
  auVar80._0_4_ = auVar79._0_4_ - fVar60;
  auVar80._4_4_ = auVar79._4_4_ - fVar103;
  auVar80._8_4_ = auVar79._8_4_ - auVar100._8_4_;
  auVar80._12_4_ = auVar79._12_4_ - auVar100._12_4_;
  auVar56._0_4_ = auVar55._0_4_ - auVar77._0_4_;
  auVar56._4_4_ = auVar55._4_4_ - auVar77._4_4_;
  auVar56._8_4_ = auVar55._8_4_ - auVar77._8_4_;
  auVar56._12_4_ = auVar55._12_4_ - auVar77._12_4_;
  auVar34._0_4_ = auVar32._0_4_ - auVar67._0_4_;
  auVar34._4_4_ = auVar32._4_4_ - auVar67._4_4_;
  auVar34._8_4_ = auVar32._8_4_ - auVar67._8_4_;
  auVar34._12_4_ = auVar32._12_4_ - auVar67._12_4_;
  auVar45._4_4_ = param_10;
  auVar45._0_4_ = param_10;
  auVar45._8_4_ = param_10;
  auVar45._12_4_ = param_10;
  auVar89 = divps(auVar80,auVar45);
  auVar25 = divps(auVar56,auVar45);
  auVar26 = divps(auVar34,auVar45);
  puVar1 = (undefined4 *)(param_5 + uVar19 * 0xc);
  if ((bVar15 & 0xf) == 0) {
    auVar71 = insertps(auVar89,auVar25,0x30);
    auVar68._0_8_ = auVar25._4_8_;
    auVar68._8_4_ = auVar26._0_4_;
    auVar68._12_4_ = auVar26._4_4_;
    auVar71 = insertps(auVar71,auVar26,0x20);
    *puVar1 = auVar71._0_4_;
    puVar1[1] = auVar71._12_4_;
    puVar1[2] = auVar71._8_4_;
    puVar1[3] = auVar71._4_4_;
    auVar71 = blendps(auVar68,auVar89,4);
    puVar1[4] = auVar71._0_4_;
    puVar1[5] = auVar71._12_4_;
    puVar1[6] = auVar71._8_4_;
    puVar1[7] = auVar71._4_4_;
    puVar1[8] = auVar26._8_4_;
    puVar1[9] = auVar89._12_4_;
    puVar1[10] = auVar25._12_4_;
    puVar1[0xb] = auVar26._12_4_;
  }
  else {
    if ((bVar18 & 1) != 0) {
      *puVar1 = auVar89._0_4_;
    }
    if ((bVar18 & 2) != 0) {
      uVar110 = extractps(auVar89,1);
      *(undefined8 *)(puVar1 + 3) = uVar110;
    }
    if ((bVar18 & 4) != 0) {
      uVar110 = extractps(auVar89,2);
      *(undefined8 *)(puVar1 + 6) = uVar110;
    }
    if ((char)bVar18 < '\0') {
      uVar110 = extractps(auVar89,3);
      *(undefined8 *)(puVar1 + 9) = uVar110;
    }
    if ((bVar18 & 1) != 0) {
      puVar1[1] = auVar25._0_4_;
    }
    if ((bVar18 & 2) != 0) {
      uVar110 = extractps(auVar25,1);
      *(undefined8 *)(puVar1 + 4) = uVar110;
    }
    if ((bVar18 & 4) != 0) {
      uVar110 = extractps(auVar25,2);
      *(undefined8 *)(puVar1 + 7) = uVar110;
    }
    if ((char)bVar18 < '\0') {
      uVar110 = extractps(auVar25,3);
      *(undefined8 *)(puVar1 + 10) = uVar110;
    }
    if ((bVar18 & 1) != 0) {
      puVar1[2] = auVar26._0_4_;
    }
    if ((bVar18 & 2) != 0) {
      uVar110 = extractps(auVar26,1);
      *(undefined8 *)(puVar1 + 5) = uVar110;
    }
    if ((bVar18 & 4) != 0) {
      uVar110 = extractps(auVar26,2);
      *(undefined8 *)(puVar1 + 8) = uVar110;
    }
    if ((char)bVar18 < '\0') {
      uVar110 = extractps(auVar26,3);
      *(undefined8 *)(puVar1 + 0xb) = uVar110;
    }
  }
  return;
}

// ApplyAnimationPreSimulationTransform_sse4 @ 140d14890

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyAnimationPreSimulationTransform_sse4
               (longlong param_1,longlong param_2,longlong param_3,float *param_4,float *param_5,
               undefined4 param_6,uint param_7)

{
  float *pfVar1;
  undefined1 (*pauVar2) [16];
  undefined4 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  byte bVar15;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
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
  float fVar39;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar49;
  float fVar56;
  float fVar57;
  float fVar58;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  
  uVar19 = param_7 + 3;
  if (-1 < (int)param_7) {
    uVar19 = param_7;
  }
  if ((int)(uVar19 & 0xfffffffc) < 1) {
    uVar23 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    auVar30._4_4_ = param_6;
    auVar30._0_4_ = param_6;
    auVar30._8_4_ = param_6;
    auVar30._12_4_ = param_6;
    lVar20 = 0x20;
    uVar23 = 0;
    do {
      auVar40 = *(undefined1 (*) [16])(param_1 + -0x20 + lVar20);
      auVar55 = *(undefined1 (*) [16])(param_1 + -0x10 + lVar20);
      pfVar1 = (float *)(param_1 + lVar20);
      auVar34 = insertps(auVar55,auVar40,0x8c);
      fVar48 = param_4[8];
      fVar39 = fVar48 * auVar40._0_4_;
      fVar46 = fVar48 * auVar40._12_4_;
      fVar47 = fVar48 * auVar55._8_4_;
      fVar48 = fVar48 * pfVar1[1];
      fVar75 = param_4[9];
      fVar69 = fVar75 * auVar40._4_4_;
      fVar71 = fVar75 * auVar55._0_4_;
      fVar73 = fVar75 * auVar55._12_4_;
      fVar75 = fVar75 * pfVar1[2];
      fVar67 = param_4[10];
      fVar61 = fVar67 * auVar34._0_4_;
      fVar63 = fVar67 * auVar34._4_4_;
      fVar65 = fVar67 * *pfVar1;
      fVar67 = fVar67 * pfVar1[3];
      fVar4 = *param_4;
      fVar5 = param_4[1];
      fVar6 = param_4[2];
      fVar7 = param_4[3];
      fVar49 = fVar39 * fVar6 - fVar61 * fVar4;
      fVar56 = fVar46 * fVar6 - fVar63 * fVar4;
      fVar57 = fVar47 * fVar6 - fVar65 * fVar4;
      fVar58 = fVar48 * fVar6 - fVar67 * fVar4;
      fVar49 = fVar49 + fVar49;
      fVar56 = fVar56 + fVar56;
      fVar57 = fVar57 + fVar57;
      fVar58 = fVar58 + fVar58;
      fVar70 = fVar69 * fVar4 - fVar39 * fVar5;
      fVar72 = fVar71 * fVar4 - fVar46 * fVar5;
      fVar74 = fVar73 * fVar4 - fVar47 * fVar5;
      fVar76 = fVar75 * fVar4 - fVar48 * fVar5;
      fVar70 = fVar70 + fVar70;
      fVar72 = fVar72 + fVar72;
      fVar74 = fVar74 + fVar74;
      fVar76 = fVar76 + fVar76;
      fVar62 = fVar61 * fVar5 - fVar69 * fVar6;
      fVar64 = fVar63 * fVar5 - fVar71 * fVar6;
      fVar66 = fVar65 * fVar5 - fVar73 * fVar6;
      fVar68 = fVar67 * fVar5 - fVar75 * fVar6;
      fVar62 = fVar62 + fVar62;
      fVar64 = fVar64 + fVar64;
      fVar66 = fVar66 + fVar66;
      fVar68 = fVar68 + fVar68;
      fVar8 = param_4[4];
      fVar9 = param_4[5];
      fVar10 = param_4[6];
      fVar11 = *param_5;
      fVar12 = param_5[1];
      fVar13 = param_5[2];
      fVar39 = (fVar8 + (fVar5 * fVar70 - fVar49 * fVar6) + fVar7 * fVar62 + fVar39) - fVar11;
      fVar46 = (fVar8 + (fVar5 * fVar72 - fVar56 * fVar6) + fVar7 * fVar64 + fVar46) - fVar11;
      auVar34._0_8_ = CONCAT44(fVar46,fVar39);
      auVar34._8_4_ = (fVar8 + (fVar5 * fVar74 - fVar57 * fVar6) + fVar7 * fVar66 + fVar47) - fVar11
      ;
      auVar34._12_4_ =
           (fVar8 + (fVar5 * fVar76 - fVar58 * fVar6) + fVar7 * fVar68 + fVar48) - fVar11;
      auVar52._0_4_ = (fVar9 + (fVar6 * fVar62 - fVar70 * fVar4) + fVar7 * fVar49 + fVar69) - fVar12
      ;
      auVar52._4_4_ = (fVar9 + (fVar6 * fVar64 - fVar72 * fVar4) + fVar7 * fVar56 + fVar71) - fVar12
      ;
      auVar52._8_4_ = (fVar9 + (fVar6 * fVar66 - fVar74 * fVar4) + fVar7 * fVar57 + fVar73) - fVar12
      ;
      auVar52._12_4_ =
           (fVar9 + (fVar6 * fVar68 - fVar76 * fVar4) + fVar7 * fVar58 + fVar75) - fVar12;
      auVar60._0_4_ =
           (fVar10 + (fVar4 * fVar49 - fVar62 * fVar5) + fVar7 * fVar70 + fVar61) - fVar13;
      auVar60._4_4_ =
           (fVar10 + (fVar4 * fVar56 - fVar64 * fVar5) + fVar7 * fVar72 + fVar63) - fVar13;
      auVar60._8_4_ =
           (fVar10 + (fVar4 * fVar57 - fVar66 * fVar5) + fVar7 * fVar74 + fVar65) - fVar13;
      auVar60._12_4_ =
           (fVar10 + (fVar4 * fVar58 - fVar68 * fVar5) + fVar7 * fVar76 + fVar67) - fVar13;
      auVar40._8_4_ = auVar34._8_4_;
      auVar40._0_8_ = auVar34._0_8_;
      auVar40._12_4_ = auVar34._12_4_;
      auVar40 = insertps(auVar40,auVar52,0x30);
      auVar50._4_4_ = auVar52._8_4_;
      auVar50._0_4_ = auVar52._4_4_;
      auVar50._8_4_ = auVar60._0_4_;
      auVar50._12_4_ = auVar60._4_4_;
      auVar40 = insertps(auVar40,auVar60,0x20);
      puVar3 = (undefined4 *)(param_1 + -0x20 + lVar20);
      *puVar3 = auVar40._0_4_;
      puVar3[1] = auVar40._12_4_;
      puVar3[2] = auVar40._8_4_;
      puVar3[3] = auVar40._4_4_;
      auVar40 = blendps(auVar50,auVar34,4);
      puVar3 = (undefined4 *)(param_1 + -0x10 + lVar20);
      *puVar3 = auVar40._0_4_;
      puVar3[1] = auVar40._12_4_;
      puVar3[2] = auVar40._8_4_;
      puVar3[3] = auVar40._4_4_;
      pfVar1 = (float *)(param_1 + lVar20);
      *pfVar1 = auVar60._8_4_;
      pfVar1[1] = auVar34._12_4_;
      pfVar1[2] = auVar52._12_4_;
      pfVar1[3] = auVar60._12_4_;
      auVar40 = *(undefined1 (*) [16])(param_3 + -0x20 + lVar20);
      auVar55 = *(undefined1 (*) [16])(param_3 + -0x10 + lVar20);
      pfVar1 = (float *)(param_3 + lVar20);
      auVar50 = insertps(auVar55,auVar40,0x8c);
      auVar59._0_4_ = auVar40._0_4_ - fVar39;
      auVar59._4_4_ = auVar40._12_4_ - fVar46;
      auVar59._8_4_ = auVar55._8_4_ - auVar34._8_4_;
      auVar59._12_4_ = pfVar1[1] - auVar34._12_4_;
      auVar41._0_4_ = auVar40._4_4_ - auVar52._0_4_;
      auVar41._4_4_ = auVar55._0_4_ - auVar52._4_4_;
      auVar41._8_4_ = auVar55._12_4_ - auVar52._8_4_;
      auVar41._12_4_ = pfVar1[2] - auVar52._12_4_;
      auVar51._0_4_ = auVar50._0_4_ - auVar60._0_4_;
      auVar51._4_4_ = auVar50._4_4_ - auVar60._4_4_;
      auVar51._8_4_ = *pfVar1 - auVar60._8_4_;
      auVar51._12_4_ = pfVar1[3] - auVar60._12_4_;
      auVar60 = divps(auVar59,auVar30);
      auVar34 = divps(auVar41,auVar30);
      auVar52 = divps(auVar51,auVar30);
      auVar40 = insertps(auVar60,auVar34,0x30);
      auVar55._0_8_ = auVar34._4_8_;
      auVar55._8_4_ = auVar52._0_4_;
      auVar55._12_4_ = auVar52._4_4_;
      auVar40 = insertps(auVar40,auVar52,0x20);
      puVar3 = (undefined4 *)(param_2 + -0x20 + lVar20);
      *puVar3 = auVar40._0_4_;
      puVar3[1] = auVar40._12_4_;
      puVar3[2] = auVar40._8_4_;
      puVar3[3] = auVar40._4_4_;
      auVar40 = blendps(auVar55,auVar60,4);
      puVar3 = (undefined4 *)(param_2 + -0x10 + lVar20);
      *puVar3 = auVar40._0_4_;
      puVar3[1] = auVar40._12_4_;
      puVar3[2] = auVar40._8_4_;
      puVar3[3] = auVar40._4_4_;
      puVar3 = (undefined4 *)(param_2 + lVar20);
      *puVar3 = auVar52._8_4_;
      puVar3[1] = auVar60._12_4_;
      puVar3[2] = auVar34._12_4_;
      puVar3[3] = auVar52._12_4_;
      lVar20 = lVar20 + 0x30;
      uVar23 = uVar23 + 4;
    } while ((int)uVar23 < (int)(uVar19 & 0xfffffffc));
    if ((int)param_7 <= (int)uVar23) {
      return;
    }
  }
  auVar25._0_4_ =
       -(uint)((int)(uVar23 | (uint)__xmm_00000003000000020000000100000000) < (int)param_7);
  auVar25._4_4_ =
       -(uint)((int)(uVar23 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_7);
  auVar25._8_4_ = -(uint)((int)(uVar23 | _UNK_150631e08) < (int)param_7);
  auVar25._12_4_ = -(uint)((int)(uVar23 | _UNK_150631e0c) < (int)param_7);
  uVar16 = (ulonglong)uVar23;
  pauVar2 = (undefined1 (*) [16])(param_1 + uVar16 * 0xc);
  iVar17 = movmskps((int)param_1,auVar25);
  bVar15 = (char)((char)iVar17 << 4) >> 4;
  if (iVar17 == 0xf) {
    auVar30 = *pauVar2;
    auVar40 = pauVar2[1];
    auVar31._0_4_ = auVar30._0_4_;
    auVar55 = insertps(auVar40,auVar30,0x8c);
    auVar31._4_4_ = auVar30._12_4_;
    auVar31._8_4_ = auVar40._8_4_;
    auVar31._12_4_ = *(undefined4 *)(pauVar2[2] + 4);
    auVar35._4_4_ = auVar40._0_4_;
    auVar35._0_4_ = auVar30._4_4_;
    auVar35._8_4_ = auVar40._12_4_;
    auVar35._12_4_ = *(undefined4 *)(pauVar2[2] + 8);
    auVar37._0_8_ = auVar55._0_8_;
    auVar37._8_4_ = *(undefined4 *)pauVar2[2];
    auVar37._12_4_ = *(undefined4 *)(pauVar2[2] + 0xc);
  }
  else {
    auVar29._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar25._0_4_;
    auVar29._4_4_ = _UNK_150b50da4 & auVar25._4_4_;
    auVar29._8_4_ = _UNK_150b50da8 & auVar25._8_4_;
    auVar29._12_4_ = _UNK_150b50dac & auVar25._12_4_;
    lVar20 = extractps(auVar29,1);
    lVar21 = extractps(auVar29,2);
    lVar18 = extractps(auVar29,3);
    auVar30 = insertps(ZEXT416(*(uint *)*pauVar2),*(undefined4 *)(*pauVar2 + lVar20),0x10);
    auVar30 = insertps(auVar30,*(undefined4 *)(*pauVar2 + lVar21),0x20);
    auVar31 = insertps(auVar30,*(undefined4 *)(*pauVar2 + lVar18),0x30);
    auVar30 = ___xmm_000000280000001c0000001000000004 & auVar25;
    auVar40 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar30._0_4_)),
                       *(undefined4 *)(*pauVar2 + auVar30._4_4_),0x10);
    auVar40 = insertps(auVar40,*(undefined4 *)(*pauVar2 + auVar30._8_4_),0x20);
    auVar35 = insertps(auVar40,*(undefined4 *)(*pauVar2 + auVar30._12_4_),0x30);
    auVar30 = ___xmm_0000002c000000200000001400000008 & auVar25;
    auVar40 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar30._0_4_)),
                       *(undefined4 *)(*pauVar2 + auVar30._4_4_),0x10);
    auVar40 = insertps(auVar40,*(undefined4 *)(*pauVar2 + auVar30._8_4_),0x20);
    auVar37 = insertps(auVar40,*(undefined4 *)(*pauVar2 + auVar30._12_4_),0x30);
  }
  fVar48 = param_4[8];
  fVar39 = fVar48 * auVar31._0_4_;
  fVar46 = fVar48 * auVar31._4_4_;
  fVar47 = fVar48 * auVar31._8_4_;
  fVar48 = fVar48 * auVar31._12_4_;
  fVar75 = param_4[9];
  fVar69 = fVar75 * auVar35._0_4_;
  fVar71 = fVar75 * auVar35._4_4_;
  fVar73 = fVar75 * auVar35._8_4_;
  fVar75 = fVar75 * auVar35._12_4_;
  fVar67 = param_4[10];
  fVar61 = fVar67 * auVar37._0_4_;
  fVar63 = fVar67 * auVar37._4_4_;
  fVar65 = fVar67 * auVar37._8_4_;
  fVar67 = fVar67 * auVar37._12_4_;
  fVar4 = *param_4;
  fVar5 = param_4[1];
  fVar6 = param_4[2];
  fVar7 = param_4[3];
  fVar49 = fVar39 * fVar6 - fVar61 * fVar4;
  fVar56 = fVar46 * fVar6 - fVar63 * fVar4;
  fVar57 = fVar47 * fVar6 - fVar65 * fVar4;
  fVar58 = fVar48 * fVar6 - fVar67 * fVar4;
  fVar49 = fVar49 + fVar49;
  fVar56 = fVar56 + fVar56;
  fVar57 = fVar57 + fVar57;
  fVar58 = fVar58 + fVar58;
  fVar70 = fVar69 * fVar4 - fVar39 * fVar5;
  fVar72 = fVar71 * fVar4 - fVar46 * fVar5;
  fVar74 = fVar73 * fVar4 - fVar47 * fVar5;
  fVar76 = fVar75 * fVar4 - fVar48 * fVar5;
  fVar70 = fVar70 + fVar70;
  fVar72 = fVar72 + fVar72;
  fVar74 = fVar74 + fVar74;
  fVar76 = fVar76 + fVar76;
  fVar62 = fVar61 * fVar5 - fVar69 * fVar6;
  fVar64 = fVar63 * fVar5 - fVar71 * fVar6;
  fVar66 = fVar65 * fVar5 - fVar73 * fVar6;
  fVar68 = fVar67 * fVar5 - fVar75 * fVar6;
  fVar62 = fVar62 + fVar62;
  fVar64 = fVar64 + fVar64;
  fVar66 = fVar66 + fVar66;
  fVar68 = fVar68 + fVar68;
  fVar8 = param_4[4];
  fVar9 = param_4[5];
  fVar10 = param_4[6];
  fVar11 = *param_5;
  fVar12 = param_5[1];
  fVar13 = param_5[2];
  fVar39 = (fVar8 + (fVar5 * fVar70 - fVar49 * fVar6) + fVar7 * fVar62 + fVar39) - fVar11;
  fVar46 = (fVar8 + (fVar5 * fVar72 - fVar56 * fVar6) + fVar7 * fVar64 + fVar46) - fVar11;
  auVar32._0_8_ = CONCAT44(fVar46,fVar39);
  auVar32._8_4_ = (fVar8 + (fVar5 * fVar74 - fVar57 * fVar6) + fVar7 * fVar66 + fVar47) - fVar11;
  auVar32._12_4_ = (fVar8 + (fVar5 * fVar76 - fVar58 * fVar6) + fVar7 * fVar68 + fVar48) - fVar11;
  auVar36._0_4_ = (fVar9 + (fVar6 * fVar62 - fVar70 * fVar4) + fVar7 * fVar49 + fVar69) - fVar12;
  auVar36._4_4_ = (fVar9 + (fVar6 * fVar64 - fVar72 * fVar4) + fVar7 * fVar56 + fVar71) - fVar12;
  auVar36._8_4_ = (fVar9 + (fVar6 * fVar66 - fVar74 * fVar4) + fVar7 * fVar57 + fVar73) - fVar12;
  auVar36._12_4_ = (fVar9 + (fVar6 * fVar68 - fVar76 * fVar4) + fVar7 * fVar58 + fVar75) - fVar12;
  auVar38._0_4_ = (fVar10 + (fVar4 * fVar49 - fVar62 * fVar5) + fVar7 * fVar70 + fVar61) - fVar13;
  auVar38._4_4_ = (fVar10 + (fVar4 * fVar56 - fVar64 * fVar5) + fVar7 * fVar72 + fVar63) - fVar13;
  auVar38._8_4_ = (fVar10 + (fVar4 * fVar57 - fVar66 * fVar5) + fVar7 * fVar74 + fVar65) - fVar13;
  auVar38._12_4_ = (fVar10 + (fVar4 * fVar58 - fVar68 * fVar5) + fVar7 * fVar76 + fVar67) - fVar13;
  if ((~bVar15 & 0xf) == 0) {
    auVar27._8_4_ = auVar32._8_4_;
    auVar27._0_8_ = auVar32._0_8_;
    auVar27._12_4_ = auVar32._12_4_;
    auVar30 = insertps(auVar27,auVar36,0x30);
    auVar44._4_4_ = auVar36._8_4_;
    auVar44._0_4_ = auVar36._4_4_;
    auVar44._8_4_ = auVar38._0_4_;
    auVar44._12_4_ = auVar38._4_4_;
    auVar30 = insertps(auVar30,auVar38,0x20);
    *(int *)*pauVar2 = auVar30._0_4_;
    *(int *)(*pauVar2 + 4) = auVar30._12_4_;
    *(int *)(*pauVar2 + 8) = auVar30._8_4_;
    *(int *)(*pauVar2 + 0xc) = auVar30._4_4_;
    auVar30 = blendps(auVar44,auVar32,4);
    *(int *)pauVar2[1] = auVar30._0_4_;
    *(int *)(pauVar2[1] + 4) = auVar30._12_4_;
    *(int *)(pauVar2[1] + 8) = auVar30._8_4_;
    *(int *)(pauVar2[1] + 0xc) = auVar30._4_4_;
    *(float *)pauVar2[2] = auVar38._8_4_;
    *(float *)(pauVar2[2] + 4) = auVar32._12_4_;
    *(float *)(pauVar2[2] + 8) = auVar36._12_4_;
    *(float *)(pauVar2[2] + 0xc) = auVar38._12_4_;
    auVar30 = *(undefined1 (*) [16])(param_3 + uVar16 * 0xc);
    auVar40 = *(undefined1 (*) [16])(param_3 + 0x10 + uVar16 * 0xc);
    puVar3 = (undefined4 *)(param_3 + 0x20 + uVar16 * 0xc);
    auVar53._0_4_ = auVar30._0_4_;
    auVar55 = insertps(auVar40,auVar30,0x8c);
    auVar53._4_4_ = auVar30._12_4_;
    auVar53._8_4_ = auVar40._8_4_;
    auVar53._12_4_ = puVar3[1];
    auVar43._4_4_ = auVar40._0_4_;
    auVar43._0_4_ = auVar30._4_4_;
    auVar43._8_4_ = auVar40._12_4_;
    auVar43._12_4_ = puVar3[2];
    auVar26._0_8_ = auVar55._0_8_;
    auVar26._8_4_ = *puVar3;
    auVar26._12_4_ = puVar3[3];
  }
  else {
    if ((bVar15 & 1) != 0) {
      *(float *)*pauVar2 = fVar39;
    }
    if ((bVar15 & 2) != 0) {
      uVar14 = extractps(auVar32,1);
      *(undefined8 *)(*pauVar2 + 0xc) = uVar14;
    }
    if ((bVar15 & 4) != 0) {
      uVar14 = extractps(auVar32,2);
      *(undefined8 *)(pauVar2[1] + 8) = uVar14;
    }
    if ((char)bVar15 < '\0') {
      uVar14 = extractps(auVar32,3);
      *(undefined8 *)(pauVar2[2] + 4) = uVar14;
    }
    if ((bVar15 & 1) != 0) {
      *(float *)(*pauVar2 + 4) = auVar36._0_4_;
    }
    if ((bVar15 & 2) != 0) {
      uVar14 = extractps(auVar36,1);
      *(undefined8 *)pauVar2[1] = uVar14;
    }
    if ((bVar15 & 4) != 0) {
      uVar14 = extractps(auVar36,2);
      *(undefined8 *)(pauVar2[1] + 0xc) = uVar14;
    }
    if ((char)bVar15 < '\0') {
      uVar14 = extractps(auVar36,3);
      *(undefined8 *)(pauVar2[2] + 8) = uVar14;
    }
    if ((bVar15 & 1) != 0) {
      *(float *)(*pauVar2 + 8) = auVar38._0_4_;
    }
    if ((bVar15 & 2) != 0) {
      uVar14 = extractps(auVar38,1);
      *(undefined8 *)(pauVar2[1] + 4) = uVar14;
    }
    if ((bVar15 & 4) != 0) {
      uVar14 = extractps(auVar38,2);
      *(undefined8 *)pauVar2[2] = uVar14;
    }
    if ((char)bVar15 < '\0') {
      uVar14 = extractps(auVar38,3);
      *(undefined8 *)(pauVar2[2] + 0xc) = uVar14;
    }
    auVar42._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar25._0_4_;
    auVar42._4_4_ = _UNK_150b50da4 & auVar25._4_4_;
    auVar42._8_4_ = _UNK_150b50da8 & auVar25._8_4_;
    auVar42._12_4_ = _UNK_150b50dac & auVar25._12_4_;
    lVar21 = extractps(auVar42,1);
    lVar22 = extractps(auVar42,2);
    lVar18 = extractps(auVar42,3);
    lVar20 = param_3 + uVar16 * 0xc;
    auVar30 = insertps(ZEXT416(*(uint *)(param_3 + uVar16 * 0xc)),*(undefined4 *)(lVar21 + lVar20),
                       0x10);
    auVar30 = insertps(auVar30,*(undefined4 *)(lVar22 + lVar20),0x20);
    auVar53 = insertps(auVar30,*(undefined4 *)(lVar18 + lVar20),0x30);
    auVar30 = ___xmm_000000280000001c0000001000000004 & auVar25;
    auVar40 = insertps(ZEXT416(*(uint *)((ulonglong)auVar30._0_4_ + lVar20)),
                       *(undefined4 *)((ulonglong)auVar30._4_4_ + lVar20),0x10);
    auVar40 = insertps(auVar40,*(undefined4 *)((ulonglong)auVar30._8_4_ + lVar20),0x20);
    auVar43 = insertps(auVar40,*(undefined4 *)((ulonglong)auVar30._12_4_ + lVar20),0x30);
    auVar25 = auVar25 & ___xmm_0000002c000000200000001400000008;
    auVar30 = insertps(ZEXT416(*(uint *)((ulonglong)auVar25._0_4_ + lVar20)),
                       *(undefined4 *)((ulonglong)auVar25._4_4_ + lVar20),0x10);
    auVar30 = insertps(auVar30,*(undefined4 *)((ulonglong)auVar25._8_4_ + lVar20),0x20);
    auVar26 = insertps(auVar30,*(undefined4 *)((ulonglong)auVar25._12_4_ + lVar20),0x30);
  }
  auVar54._0_4_ = auVar53._0_4_ - fVar39;
  auVar54._4_4_ = auVar53._4_4_ - fVar46;
  auVar54._8_4_ = auVar53._8_4_ - auVar32._8_4_;
  auVar54._12_4_ = auVar53._12_4_ - auVar32._12_4_;
  auVar45._0_4_ = auVar43._0_4_ - auVar36._0_4_;
  auVar45._4_4_ = auVar43._4_4_ - auVar36._4_4_;
  auVar45._8_4_ = auVar43._8_4_ - auVar36._8_4_;
  auVar45._12_4_ = auVar43._12_4_ - auVar36._12_4_;
  auVar28._0_4_ = auVar26._0_4_ - auVar38._0_4_;
  auVar28._4_4_ = auVar26._4_4_ - auVar38._4_4_;
  auVar28._8_4_ = auVar26._8_4_ - auVar38._8_4_;
  auVar28._12_4_ = auVar26._12_4_ - auVar38._12_4_;
  auVar24._4_4_ = param_6;
  auVar24._0_4_ = param_6;
  auVar24._8_4_ = param_6;
  auVar24._12_4_ = param_6;
  auVar55 = divps(auVar54,auVar24);
  auVar40 = divps(auVar45,auVar24);
  auVar30 = divps(auVar28,auVar24);
  puVar3 = (undefined4 *)(param_2 + uVar16 * 0xc);
  if ((~bVar15 & 0xf) == 0) {
    auVar34 = insertps(auVar55,auVar40,0x30);
    auVar33._0_8_ = auVar40._4_8_;
    auVar33._8_4_ = auVar30._0_4_;
    auVar33._12_4_ = auVar30._4_4_;
    auVar34 = insertps(auVar34,auVar30,0x20);
    *puVar3 = auVar34._0_4_;
    puVar3[1] = auVar34._12_4_;
    puVar3[2] = auVar34._8_4_;
    puVar3[3] = auVar34._4_4_;
    auVar34 = blendps(auVar33,auVar55,4);
    puVar3[4] = auVar34._0_4_;
    puVar3[5] = auVar34._12_4_;
    puVar3[6] = auVar34._8_4_;
    puVar3[7] = auVar34._4_4_;
    puVar3[8] = auVar30._8_4_;
    puVar3[9] = auVar55._12_4_;
    puVar3[10] = auVar40._12_4_;
    puVar3[0xb] = auVar30._12_4_;
  }
  else {
    if ((bVar15 & 1) != 0) {
      *puVar3 = auVar55._0_4_;
    }
    if ((bVar15 & 2) != 0) {
      uVar14 = extractps(auVar55,1);
      *(undefined8 *)(puVar3 + 3) = uVar14;
    }
    if ((bVar15 & 4) != 0) {
      uVar14 = extractps(auVar55,2);
      *(undefined8 *)(puVar3 + 6) = uVar14;
    }
    if ((char)bVar15 < '\0') {
      uVar14 = extractps(auVar55,3);
      *(undefined8 *)(puVar3 + 9) = uVar14;
    }
    if ((bVar15 & 1) != 0) {
      puVar3[1] = auVar40._0_4_;
    }
    if ((bVar15 & 2) != 0) {
      uVar14 = extractps(auVar40,1);
      *(undefined8 *)(puVar3 + 4) = uVar14;
    }
    if ((bVar15 & 4) != 0) {
      uVar14 = extractps(auVar40,2);
      *(undefined8 *)(puVar3 + 7) = uVar14;
    }
    if ((char)bVar15 < '\0') {
      uVar14 = extractps(auVar40,3);
      *(undefined8 *)(puVar3 + 10) = uVar14;
    }
    if ((bVar15 & 1) != 0) {
      puVar3[2] = auVar30._0_4_;
    }
    if ((bVar15 & 2) != 0) {
      uVar14 = extractps(auVar30,1);
      *(undefined8 *)(puVar3 + 5) = uVar14;
    }
    if ((bVar15 & 4) != 0) {
      uVar14 = extractps(auVar30,2);
      *(undefined8 *)(puVar3 + 8) = uVar14;
    }
    if ((char)bVar15 < '\0') {
      uVar14 = extractps(auVar30,3);
      *(undefined8 *)(puVar3 + 0xb) = uVar14;
    }
  }
  return;
}

// ApplyPreSimulationTransformAndClampVelocity_sse4 @ 140d151d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPreSimulationTransformAndClampVelocity_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,float *param_8,float *param_9,undefined4 param_10,
               uint param_11,float param_12)

{
  undefined8 *puVar1;
  undefined1 (*pauVar2) [16];
  undefined4 *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 uVar7;
  byte bVar8;
  float *pfVar9;
  undefined4 *puVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  byte bVar17;
  undefined4 unaff_R13D;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  float fVar22;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar41;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar23;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar42;
  float fVar44;
  float fVar61;
  float fVar64;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar43;
  float fVar62;
  float fVar65;
  float fVar67;
  float fVar68;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar69;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar70;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  float fVar63;
  float fVar66;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar71;
  float fVar72;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar88;
  float fVar96;
  float fVar97;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  float fVar98;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  float fVar99;
  float fVar100;
  float fVar105;
  float fVar106;
  undefined1 auVar101 [16];
  float fVar107;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  float fVar108;
  float fVar115;
  float fVar116;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  float fVar126;
  undefined1 auVar117 [16];
  float fVar127;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  float fVar128;
  undefined8 uVar129;
  float fVar136;
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  float fVar135;
  float fVar137;
  undefined1 auVar134 [16];
  float fVar138;
  float fVar140;
  float fVar141;
  float fVar142;
  undefined1 auVar139 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  float fVar156;
  float fVar157;
  float fVar158;
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  float fVar159;
  float fVar160;
  float fVar161;
  float fVar162;
  float fVar163;
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar73 [16];
  undefined1 auVar102 [16];
  
  uVar13 = param_11 + 3;
  if (-1 < (int)param_11) {
    uVar13 = param_11;
  }
  uVar13 = uVar13 & 0xfffffffc;
  if ((int)uVar13 < 1) {
    uVar12 = 0;
  }
  else {
    lVar20 = 8;
    uVar12 = 0;
    uVar16 = 0;
    do {
      auVar24 = *(undefined1 (*) [16])(param_3 + -0x20 + lVar20 * 4);
      auVar167 = *(undefined1 (*) [16])(param_3 + -0x10 + lVar20 * 4);
      pfVar9 = (float *)(param_3 + lVar20 * 4);
      auVar46 = insertps(auVar167,auVar24,0x8c);
      fVar69 = param_8[8];
      fVar22 = auVar24._0_4_ * fVar69;
      fVar38 = auVar24._12_4_ * fVar69;
      fVar39 = auVar167._8_4_ * fVar69;
      fVar40 = pfVar9[1] * fVar69;
      fVar158 = param_8[9];
      fVar71 = auVar24._4_4_ * fVar158;
      fVar81 = auVar167._0_4_ * fVar158;
      fVar83 = auVar167._12_4_ * fVar158;
      fVar85 = pfVar9[2] * fVar158;
      fVar86 = param_8[10];
      fVar42 = auVar46._0_4_ * fVar86;
      fVar61 = auVar46._4_4_ * fVar86;
      fVar64 = *pfVar9 * fVar86;
      fVar67 = pfVar9[3] * fVar86;
      fVar41 = *param_8;
      fVar70 = param_8[1];
      fVar84 = param_8[2];
      fVar87 = param_8[3];
      fVar159 = fVar22 * fVar84 - fVar42 * fVar41;
      fVar160 = fVar38 * fVar84 - fVar61 * fVar41;
      fVar161 = fVar39 * fVar84 - fVar64 * fVar41;
      fVar162 = fVar40 * fVar84 - fVar67 * fVar41;
      fVar159 = fVar159 + fVar159;
      fVar160 = fVar160 + fVar160;
      fVar161 = fVar161 + fVar161;
      fVar162 = fVar162 + fVar162;
      fVar138 = fVar71 * fVar41 - fVar22 * fVar70;
      fVar140 = fVar81 * fVar41 - fVar38 * fVar70;
      fVar141 = fVar83 * fVar41 - fVar39 * fVar70;
      fVar142 = fVar85 * fVar41 - fVar40 * fVar70;
      fVar138 = fVar138 + fVar138;
      fVar140 = fVar140 + fVar140;
      fVar141 = fVar141 + fVar141;
      fVar142 = fVar142 + fVar142;
      fVar43 = fVar42 * fVar70 - fVar71 * fVar84;
      fVar62 = fVar61 * fVar70 - fVar81 * fVar84;
      fVar65 = fVar64 * fVar70 - fVar83 * fVar84;
      fVar68 = fVar67 * fVar70 - fVar85 * fVar84;
      fVar43 = fVar43 + fVar43;
      fVar62 = fVar62 + fVar62;
      fVar65 = fVar65 + fVar65;
      fVar68 = fVar68 + fVar68;
      fVar23 = param_8[4];
      fVar126 = param_8[6];
      fVar127 = param_9[2];
      fVar72 = ((fVar41 * fVar159 - fVar43 * fVar70) + fVar87 * fVar138 + fVar42 + fVar126) -
               fVar127;
      fVar82 = ((fVar41 * fVar160 - fVar62 * fVar70) + fVar87 * fVar140 + fVar61 + fVar126) -
               fVar127;
      auVar73._0_8_ = CONCAT44(fVar82,fVar72);
      auVar73._8_4_ =
           ((fVar41 * fVar161 - fVar65 * fVar70) + fVar87 * fVar141 + fVar64 + fVar126) - fVar127;
      auVar73._12_4_ =
           ((fVar41 * fVar162 - fVar68 * fVar70) + fVar87 * fVar142 + fVar67 + fVar126) - fVar127;
      puVar10 = (undefined4 *)(param_6 + (uVar16 & 0xffffffff));
      uVar7 = *puVar10;
      fVar64 = (float)puVar10[2];
      fVar67 = (float)puVar10[3];
      auVar47._8_4_ = fVar82;
      auVar47._0_8_ = auVar73._0_8_;
      auVar47._12_4_ = puVar10[1];
      fVar42 = param_8[5];
      fVar61 = *param_9;
      fVar99 = ((fVar70 * fVar138 - fVar159 * fVar84) + fVar87 * fVar43 + fVar22 + fVar23) - fVar61;
      fVar38 = ((fVar70 * fVar140 - fVar160 * fVar84) + fVar87 * fVar62 + fVar38 + fVar23) - fVar61;
      auVar102._0_8_ = CONCAT44(fVar38,fVar99);
      auVar102._8_4_ =
           ((fVar70 * fVar141 - fVar161 * fVar84) + fVar87 * fVar65 + fVar39 + fVar23) - fVar61;
      auVar102._12_4_ =
           ((fVar70 * fVar142 - fVar162 * fVar84) + fVar87 * fVar68 + fVar40 + fVar23) - fVar61;
      fVar22 = param_9[1];
      auVar90._0_4_ =
           ((fVar84 * fVar43 - fVar138 * fVar41) + fVar87 * fVar159 + fVar71 + fVar42) - fVar22;
      auVar90._4_4_ =
           ((fVar84 * fVar62 - fVar140 * fVar41) + fVar87 * fVar160 + fVar81 + fVar42) - fVar22;
      auVar90._8_4_ =
           ((fVar84 * fVar65 - fVar141 * fVar41) + fVar87 * fVar161 + fVar83 + fVar42) - fVar22;
      auVar90._12_4_ =
           ((fVar84 * fVar68 - fVar142 * fVar41) + fVar87 * fVar162 + fVar85 + fVar42) - fVar22;
      auVar50._8_4_ = fVar38;
      auVar50._0_8_ = auVar102._0_8_;
      auVar50._12_4_ = auVar90._4_4_;
      uVar129 = CONCAT44(auVar90._0_4_,fVar99);
      puVar1 = (undefined8 *)(param_1 + uVar16 * 4);
      *puVar1 = uVar129;
      puVar1[1] = CONCAT44(uVar7,fVar72);
      puVar1 = (undefined8 *)(param_1 + 0x10 + uVar16 * 4);
      *puVar1 = auVar50._8_8_;
      puVar1[1] = auVar47._8_8_;
      pfVar9 = (float *)(param_1 + 0x20 + uVar16 * 4);
      *pfVar9 = auVar102._8_4_;
      pfVar9[1] = auVar90._8_4_;
      pfVar9[2] = auVar73._8_4_;
      pfVar9[3] = fVar64;
      pfVar9 = (float *)(param_1 + 0x30 + uVar16 * 4);
      *pfVar9 = auVar102._12_4_;
      pfVar9[1] = auVar90._12_4_;
      pfVar9[2] = auVar73._12_4_;
      pfVar9[3] = fVar67;
      auVar110._8_4_ = auVar102._8_4_;
      auVar110._0_8_ = auVar102._0_8_;
      auVar110._12_4_ = auVar102._12_4_;
      auVar24 = insertps(auVar110,auVar90,0x30);
      auVar48._4_4_ = auVar90._8_4_;
      auVar48._0_4_ = auVar90._4_4_;
      auVar48._8_4_ = fVar72;
      auVar48._12_4_ = fVar82;
      auVar24 = insertps(auVar24,auVar73,0x20);
      puVar10 = (undefined4 *)(param_3 + -0x20 + lVar20 * 4);
      *puVar10 = auVar24._0_4_;
      puVar10[1] = auVar24._12_4_;
      puVar10[2] = auVar24._8_4_;
      puVar10[3] = auVar24._4_4_;
      auVar24 = blendps(auVar48,auVar102,4);
      puVar10 = (undefined4 *)(param_3 + -0x10 + lVar20 * 4);
      *puVar10 = auVar24._0_4_;
      puVar10[1] = auVar24._12_4_;
      puVar10[2] = auVar24._8_4_;
      puVar10[3] = auVar24._4_4_;
      pfVar9 = (float *)(param_3 + lVar20 * 4);
      *pfVar9 = auVar73._8_4_;
      pfVar9[1] = auVar102._12_4_;
      pfVar9[2] = auVar90._12_4_;
      pfVar9[3] = auVar73._12_4_;
      auVar24 = *(undefined1 (*) [16])(param_2 + -0x20 + lVar20 * 4);
      auVar167 = *(undefined1 (*) [16])(param_2 + -0x10 + lVar20 * 4);
      pfVar9 = (float *)(param_2 + lVar20 * 4);
      auVar46 = insertps(auVar167,auVar24,0x8c);
      fVar138 = auVar24._0_4_ * fVar69;
      fVar140 = auVar24._12_4_ * fVar69;
      fVar141 = auVar167._8_4_ * fVar69;
      fVar142 = pfVar9[1] * fVar69;
      fVar82 = auVar24._4_4_ * fVar158;
      fVar83 = auVar167._0_4_ * fVar158;
      fVar85 = auVar167._12_4_ * fVar158;
      fVar99 = pfVar9[2] * fVar158;
      fVar64 = fVar82 * fVar41 - fVar138 * fVar70;
      fVar67 = fVar83 * fVar41 - fVar140 * fVar70;
      fVar38 = fVar85 * fVar41 - fVar141 * fVar70;
      fVar39 = fVar99 * fVar41 - fVar142 * fVar70;
      fVar68 = auVar46._0_4_ * fVar86;
      fVar71 = auVar46._4_4_ * fVar86;
      fVar72 = *pfVar9 * fVar86;
      fVar81 = pfVar9[3] * fVar86;
      fVar161 = fVar68 * fVar70 - fVar82 * fVar84;
      fVar162 = fVar71 * fVar70 - fVar83 * fVar84;
      fVar156 = fVar72 * fVar70 - fVar85 * fVar84;
      fVar157 = fVar81 * fVar70 - fVar99 * fVar84;
      fVar40 = fVar138 * fVar84 - fVar68 * fVar41;
      fVar43 = fVar140 * fVar84 - fVar71 * fVar41;
      fVar62 = fVar141 * fVar84 - fVar72 * fVar41;
      fVar65 = fVar142 * fVar84 - fVar81 * fVar41;
      fVar161 = fVar161 + fVar161;
      fVar162 = fVar162 + fVar162;
      fVar156 = fVar156 + fVar156;
      fVar157 = fVar157 + fVar157;
      fVar40 = fVar40 + fVar40;
      fVar43 = fVar43 + fVar43;
      fVar62 = fVar62 + fVar62;
      fVar65 = fVar65 + fVar65;
      fVar64 = fVar64 + fVar64;
      fVar67 = fVar67 + fVar67;
      fVar38 = fVar38 + fVar38;
      fVar39 = fVar39 + fVar39;
      fVar159 = (fVar41 * fVar40 - fVar161 * fVar70) + fVar87 * fVar64 + fVar68;
      fVar160 = (fVar41 * fVar43 - fVar162 * fVar70) + fVar87 * fVar67 + fVar71;
      auVar164._0_8_ = CONCAT44(fVar160,fVar159);
      auVar164._8_4_ = (fVar41 * fVar62 - fVar156 * fVar70) + fVar87 * fVar38 + fVar72;
      auVar164._12_4_ = (fVar41 * fVar65 - fVar157 * fVar70) + fVar87 * fVar39 + fVar81;
      fVar138 = (fVar70 * fVar64 - fVar40 * fVar84) + fVar87 * fVar161 + fVar138;
      fVar140 = (fVar70 * fVar67 - fVar43 * fVar84) + fVar87 * fVar162 + fVar140;
      auVar101._0_8_ = CONCAT44(fVar140,fVar138);
      auVar101._8_4_ = (fVar70 * fVar38 - fVar62 * fVar84) + fVar87 * fVar156 + fVar141;
      auVar101._12_4_ = (fVar70 * fVar39 - fVar65 * fVar84) + fVar87 * fVar157 + fVar142;
      fVar71 = (fVar84 * fVar161 - fVar64 * fVar41) + fVar87 * fVar40 + fVar82;
      fVar82 = (fVar84 * fVar162 - fVar67 * fVar41) + fVar87 * fVar43 + fVar83;
      auVar89._0_8_ = CONCAT44(fVar82,fVar71);
      auVar89._8_4_ = (fVar84 * fVar156 - fVar38 * fVar41) + fVar87 * fVar62 + fVar85;
      auVar89._12_4_ = (fVar84 * fVar157 - fVar39 * fVar41) + fVar87 * fVar65 + fVar99;
      auVar24 = *(undefined1 (*) [16])(param_4 + -0x20 + lVar20 * 4);
      auVar167 = *(undefined1 (*) [16])(param_4 + -0x10 + lVar20 * 4);
      pfVar9 = (float *)(param_4 + lVar20 * 4);
      auVar46 = insertps(auVar167,auVar24,0x8c);
      fVar40 = auVar24._0_4_ * fVar69;
      fVar43 = auVar24._12_4_ * fVar69;
      fVar62 = auVar167._8_4_ * fVar69;
      fVar69 = pfVar9[1] * fVar69;
      fVar141 = auVar24._4_4_ * fVar158;
      fVar142 = auVar167._0_4_ * fVar158;
      fVar161 = auVar167._12_4_ * fVar158;
      fVar158 = pfVar9[2] * fVar158;
      fVar65 = auVar46._0_4_ * fVar86;
      fVar72 = auVar46._4_4_ * fVar86;
      fVar83 = *pfVar9 * fVar86;
      fVar86 = pfVar9[3] * fVar86;
      fVar162 = fVar141 * fVar41 - fVar40 * fVar70;
      fVar156 = fVar142 * fVar41 - fVar43 * fVar70;
      fVar157 = fVar161 * fVar41 - fVar62 * fVar70;
      fVar163 = fVar158 * fVar41 - fVar69 * fVar70;
      fVar64 = fVar40 * fVar84 - fVar65 * fVar41;
      fVar67 = fVar43 * fVar84 - fVar72 * fVar41;
      fVar38 = fVar62 * fVar84 - fVar83 * fVar41;
      fVar39 = fVar69 * fVar84 - fVar86 * fVar41;
      fVar64 = fVar64 + fVar64;
      fVar67 = fVar67 + fVar67;
      fVar38 = fVar38 + fVar38;
      fVar39 = fVar39 + fVar39;
      fVar162 = fVar162 + fVar162;
      fVar156 = fVar156 + fVar156;
      fVar157 = fVar157 + fVar157;
      fVar163 = fVar163 + fVar163;
      fVar68 = fVar65 * fVar70 - fVar141 * fVar84;
      fVar81 = fVar72 * fVar70 - fVar142 * fVar84;
      fVar85 = fVar83 * fVar70 - fVar161 * fVar84;
      fVar99 = fVar86 * fVar70 - fVar158 * fVar84;
      fVar68 = fVar68 + fVar68;
      fVar81 = fVar81 + fVar81;
      fVar85 = fVar85 + fVar85;
      fVar99 = fVar99 + fVar99;
      fVar40 = ((fVar70 * fVar162 - fVar64 * fVar84) + fVar87 * fVar68 + fVar40 + fVar23) - fVar61;
      fVar43 = ((fVar70 * fVar156 - fVar67 * fVar84) + fVar87 * fVar81 + fVar43 + fVar23) - fVar61;
      fVar62 = ((fVar70 * fVar157 - fVar38 * fVar84) + fVar87 * fVar85 + fVar62 + fVar23) - fVar61;
      fVar61 = ((fVar70 * fVar163 - fVar39 * fVar84) + fVar87 * fVar99 + fVar69 + fVar23) - fVar61;
      auVar149._0_4_ =
           ((fVar84 * fVar68 - fVar162 * fVar41) + fVar87 * fVar64 + fVar141 + fVar42) - fVar22;
      auVar149._4_4_ =
           ((fVar84 * fVar81 - fVar156 * fVar41) + fVar87 * fVar67 + fVar142 + fVar42) - fVar22;
      auVar149._8_4_ =
           ((fVar84 * fVar85 - fVar157 * fVar41) + fVar87 * fVar38 + fVar161 + fVar42) - fVar22;
      auVar149._12_4_ =
           ((fVar84 * fVar99 - fVar163 * fVar41) + fVar87 * fVar39 + fVar158 + fVar42) - fVar22;
      auVar143._0_4_ =
           ((fVar41 * fVar64 - fVar68 * fVar70) + fVar87 * fVar162 + fVar65 + fVar126) - fVar127;
      auVar143._4_4_ =
           ((fVar41 * fVar67 - fVar81 * fVar70) + fVar87 * fVar156 + fVar72 + fVar126) - fVar127;
      auVar143._8_4_ =
           ((fVar41 * fVar38 - fVar85 * fVar70) + fVar87 * fVar157 + fVar83 + fVar126) - fVar127;
      auVar143._12_4_ =
           ((fVar41 * fVar39 - fVar99 * fVar70) + fVar87 * fVar163 + fVar86 + fVar126) - fVar127;
      auVar25._4_4_ = fVar43;
      auVar25._0_4_ = fVar40;
      auVar25._8_4_ = fVar62;
      auVar25._12_4_ = fVar61;
      auVar24 = insertps(auVar25,auVar149,0x30);
      auVar24 = insertps(auVar24,auVar143,0x20);
      puVar10 = (undefined4 *)(param_4 + -0x20 + lVar20 * 4);
      *puVar10 = auVar24._0_4_;
      puVar10[1] = auVar24._12_4_;
      puVar10[2] = auVar24._8_4_;
      puVar10[3] = auVar24._4_4_;
      auVar26._4_4_ = auVar149._8_4_;
      auVar26._0_4_ = auVar149._4_4_;
      auVar26._8_4_ = auVar143._0_4_;
      auVar26._12_4_ = auVar143._4_4_;
      auVar24._4_4_ = fVar43;
      auVar24._0_4_ = fVar40;
      auVar24._8_4_ = fVar62;
      auVar24._12_4_ = fVar61;
      auVar24 = blendps(auVar26,auVar24,4);
      puVar10 = (undefined4 *)(param_4 + -0x10 + lVar20 * 4);
      *puVar10 = auVar24._0_4_;
      puVar10[1] = auVar24._12_4_;
      puVar10[2] = auVar24._8_4_;
      puVar10[3] = auVar24._4_4_;
      pfVar9 = (float *)(param_4 + lVar20 * 4);
      *pfVar9 = auVar143._8_4_;
      pfVar9[1] = fVar61;
      pfVar9[2] = auVar149._12_4_;
      pfVar9[3] = auVar143._12_4_;
      auVar24 = *(undefined1 (*) [16])(param_7 + -0x20 + lVar20 * 4);
      auVar167 = *(undefined1 (*) [16])(param_7 + -0x10 + lVar20 * 4);
      pfVar9 = (float *)(param_7 + lVar20 * 4);
      auVar46 = insertps(auVar167,auVar24,0x8c);
      auVar49._0_4_ = auVar24._0_4_ - fVar40;
      auVar49._4_4_ = auVar24._12_4_ - fVar43;
      auVar49._8_4_ = auVar167._8_4_ - fVar62;
      auVar49._12_4_ = pfVar9[1] - fVar61;
      auVar109._0_4_ = auVar24._4_4_ - auVar149._0_4_;
      auVar109._4_4_ = auVar167._0_4_ - auVar149._4_4_;
      auVar109._8_4_ = auVar167._12_4_ - auVar149._8_4_;
      auVar109._12_4_ = pfVar9[2] - auVar149._12_4_;
      auVar167._4_4_ = param_12;
      auVar167._0_4_ = param_12;
      auVar167._8_4_ = param_12;
      auVar167._12_4_ = param_12;
      auVar27._0_4_ = auVar46._0_4_ - auVar143._0_4_;
      auVar27._4_4_ = auVar46._4_4_ - auVar143._4_4_;
      auVar27._8_4_ = *pfVar9 - auVar143._8_4_;
      auVar27._12_4_ = pfVar9[3] - auVar143._12_4_;
      auVar46._4_4_ = param_10;
      auVar46._0_4_ = param_10;
      auVar46._8_4_ = param_10;
      auVar46._12_4_ = param_10;
      auVar50 = divps(auVar49,auVar46);
      auVar110 = divps(auVar109,auVar46);
      auVar24 = divps(auVar27,auVar46);
      fVar70 = auVar50._12_4_;
      auVar46 = insertps(auVar50,auVar110,0x30);
      fVar23 = auVar110._12_4_;
      fVar69 = auVar24._0_4_;
      fVar158 = auVar24._4_4_;
      fVar86 = auVar24._8_4_;
      fVar41 = auVar24._12_4_;
      auVar117._0_8_ = auVar110._4_8_;
      auVar117._8_4_ = fVar69;
      auVar117._12_4_ = fVar158;
      auVar24 = insertps(auVar46,auVar24,0x20);
      puVar10 = (undefined4 *)(param_5 + -0x20 + lVar20 * 4);
      *puVar10 = auVar24._0_4_;
      puVar10[1] = auVar24._12_4_;
      puVar10[2] = auVar24._8_4_;
      puVar10[3] = auVar24._4_4_;
      auVar24 = blendps(auVar117,auVar50,4);
      puVar10 = (undefined4 *)(param_5 + -0x10 + lVar20 * 4);
      *puVar10 = auVar24._0_4_;
      puVar10[1] = auVar24._12_4_;
      puVar10[2] = auVar24._8_4_;
      puVar10[3] = auVar24._4_4_;
      pfVar9 = (float *)(param_5 + lVar20 * 4);
      *pfVar9 = fVar86;
      pfVar9[1] = fVar70;
      pfVar9[2] = fVar23;
      pfVar9[3] = fVar41;
      fVar138 = fVar138 - auVar50._0_4_;
      fVar140 = fVar140 - auVar50._4_4_;
      fVar42 = auVar101._8_4_ - auVar50._8_4_;
      fVar61 = auVar101._12_4_ - fVar70;
      fVar71 = fVar71 - auVar110._0_4_;
      fVar82 = fVar82 - auVar110._4_4_;
      fVar84 = auVar89._8_4_ - auVar110._8_4_;
      fVar87 = auVar89._12_4_ - fVar23;
      fVar159 = fVar159 - fVar69;
      fVar160 = fVar160 - fVar158;
      fVar126 = auVar164._8_4_ - fVar86;
      fVar127 = auVar164._12_4_ - fVar41;
      auVar139._0_4_ = fVar159 * fVar159 + fVar71 * fVar71 + fVar138 * fVar138;
      auVar139._4_4_ = fVar160 * fVar160 + fVar82 * fVar82 + fVar140 * fVar140;
      auVar139._8_4_ = fVar126 * fVar126 + fVar84 * fVar84 + fVar42 * fVar42;
      auVar139._12_4_ = fVar127 * fVar127 + fVar87 * fVar87 + fVar61 * fVar61;
      auVar144._4_4_ = -(uint)(param_12 < auVar139._4_4_);
      auVar144._0_4_ = -(uint)(param_12 < auVar139._0_4_);
      auVar144._8_4_ = -(uint)(param_12 < auVar139._8_4_);
      auVar144._12_4_ = -(uint)(param_12 < auVar139._12_4_);
      iVar18 = movmskps(unaff_R13D,auVar144);
      unaff_R13D = 0;
      if (iVar18 != 0) {
        bVar17 = (char)((char)iVar18 << 4) >> 4;
        unaff_R13D = CONCAT31((int3)((uint)iVar18 >> 8),bVar17);
        auVar24 = divps(auVar167,auVar139);
        auVar24 = sqrtps(auVar139,auVar24);
        fVar22 = auVar24._0_4_;
        fVar64 = auVar24._4_4_;
        fVar67 = auVar24._8_4_;
        fVar38 = auVar24._12_4_;
        auVar51._0_8_ = CONCAT44(auVar50._4_4_ + fVar140 * fVar64,auVar50._0_4_ + fVar138 * fVar22);
        auVar51._8_4_ = auVar50._8_4_ + fVar42 * fVar67;
        auVar51._12_4_ = fVar70 + fVar61 * fVar38;
        auVar130._8_4_ = auVar101._8_4_;
        auVar130._0_8_ = auVar101._0_8_;
        auVar130._12_4_ = auVar101._12_4_;
        bVar21 = (bVar17 & 1) != 0;
        if (bVar21) {
          auVar130._8_4_ = auVar51._8_4_;
          auVar130._0_8_ = auVar51._0_8_;
          auVar130._12_4_ = auVar51._12_4_;
        }
        auVar111._0_8_ = CONCAT44(auVar110._4_4_ + fVar82 * fVar64,auVar110._0_4_ + fVar71 * fVar22)
        ;
        auVar111._8_4_ = auVar110._8_4_ + fVar84 * fVar67;
        auVar111._12_4_ = fVar23 + fVar87 * fVar38;
        auVar28._0_8_ = CONCAT44(fVar158 + fVar160 * fVar64,fVar69 + fVar159 * fVar22);
        auVar28._8_4_ = fVar86 + fVar126 * fVar67;
        auVar28._12_4_ = fVar41 + fVar127 * fVar38;
        auVar118._8_4_ = auVar89._8_4_;
        auVar118._0_8_ = auVar89._0_8_;
        auVar118._12_4_ = auVar89._12_4_;
        auVar74._8_4_ = auVar164._8_4_;
        auVar74._0_8_ = auVar164._0_8_;
        auVar74._12_4_ = auVar164._12_4_;
        if (bVar21) {
          auVar118._8_4_ = auVar111._8_4_;
          auVar118._0_8_ = auVar111._0_8_;
          auVar118._12_4_ = auVar111._12_4_;
          auVar74._8_4_ = auVar28._8_4_;
          auVar74._0_8_ = auVar28._0_8_;
          auVar74._12_4_ = auVar28._12_4_;
          auVar24 = blendps(auVar101,auVar130,1);
          if ((bVar17 & 2) != 0) goto LAB_140d15939;
LAB_140d15896:
          auVar46 = blendps(auVar89,auVar118,1);
          auVar165 = blendps(auVar164,auVar74,1);
          auVar24 = blendps(auVar24,auVar24,2);
          auVar119 = auVar46;
          auVar167 = auVar165;
          if ((bVar17 & 4) == 0) goto LAB_140d158c9;
LAB_140d15975:
          auVar132._8_4_ = auVar51._8_4_;
          auVar132._0_8_ = auVar51._0_8_;
          auVar132._12_4_ = auVar51._12_4_;
          auVar46 = blendps(auVar46,auVar119,2);
          auVar120._8_4_ = auVar111._8_4_;
          auVar120._0_8_ = auVar111._0_8_;
          auVar120._12_4_ = auVar111._12_4_;
          auVar167 = blendps(auVar167,auVar165,2);
          auVar166._8_4_ = auVar28._8_4_;
          auVar166._0_8_ = auVar28._0_8_;
          auVar166._12_4_ = auVar28._12_4_;
          auVar24 = blendps(auVar24,auVar132,4);
          if (-1 < (char)bVar17) goto LAB_140d159ad;
LAB_140d158f8:
          auVar46 = blendps(auVar46,auVar120,4);
          if ((char)bVar17 < '\0') goto LAB_140d15904;
LAB_140d159bc:
          auVar167 = blendps(auVar167,auVar166,4);
          auVar111 = auVar46;
        }
        else {
          auVar24 = blendps(auVar101,auVar130,1);
          if ((bVar17 & 2) == 0) goto LAB_140d15896;
LAB_140d15939:
          auVar131._8_4_ = auVar51._8_4_;
          auVar131._0_8_ = auVar51._0_8_;
          auVar131._12_4_ = auVar51._12_4_;
          auVar46 = blendps(auVar89,auVar118,1);
          auVar119._8_4_ = auVar111._8_4_;
          auVar119._0_8_ = auVar111._0_8_;
          auVar119._12_4_ = auVar111._12_4_;
          auVar167 = blendps(auVar164,auVar74,1);
          auVar165._8_4_ = auVar28._8_4_;
          auVar165._0_8_ = auVar28._0_8_;
          auVar165._12_4_ = auVar28._12_4_;
          auVar24 = blendps(auVar24,auVar131,2);
          if ((bVar17 & 4) != 0) goto LAB_140d15975;
LAB_140d158c9:
          auVar46 = blendps(auVar46,auVar119,2);
          auVar166 = blendps(auVar167,auVar165,2);
          auVar24 = blendps(auVar24,auVar24,4);
          auVar120 = auVar46;
          auVar167 = auVar166;
          if ((char)bVar17 < '\0') goto LAB_140d158f8;
LAB_140d159ad:
          auVar51 = auVar24;
          auVar46 = blendps(auVar46,auVar120,4);
          auVar24 = auVar51;
          if (-1 < (char)bVar17) goto LAB_140d159bc;
LAB_140d15904:
          auVar167 = blendps(auVar167,auVar166,4);
        }
        if (-1 < (char)bVar17) {
          auVar28 = auVar167;
        }
        auVar101 = blendps(auVar24,auVar51,8);
        auVar89 = blendps(auVar46,auVar111,8);
        auVar164 = blendps(auVar167,auVar28,8);
      }
      auVar24 = insertps(auVar101,auVar89,0x30);
      auVar45._0_8_ = auVar89._4_8_;
      auVar45._8_4_ = auVar164._0_4_;
      auVar45._12_4_ = auVar164._4_4_;
      auVar24 = insertps(auVar24,auVar164,0x20);
      puVar10 = (undefined4 *)(param_2 + -0x20 + lVar20 * 4);
      *puVar10 = auVar24._0_4_;
      puVar10[1] = auVar24._12_4_;
      puVar10[2] = auVar24._8_4_;
      puVar10[3] = auVar24._4_4_;
      auVar24 = blendps(auVar45,auVar101,4);
      puVar10 = (undefined4 *)(param_2 + -0x10 + lVar20 * 4);
      *puVar10 = auVar24._0_4_;
      puVar10[1] = auVar24._12_4_;
      puVar10[2] = auVar24._8_4_;
      puVar10[3] = auVar24._4_4_;
      puVar10 = (undefined4 *)(param_2 + lVar20 * 4);
      *puVar10 = auVar164._8_4_;
      puVar10[1] = auVar101._12_4_;
      puVar10[2] = auVar89._12_4_;
      puVar10[3] = auVar164._12_4_;
      uVar16 = uVar16 + 0x10;
      lVar20 = lVar20 + 0xc;
      uVar12 = uVar12 + 4;
    } while ((int)uVar12 < (int)uVar13);
  }
  if ((int)param_11 <= (int)uVar12) {
    return;
  }
  bVar21 = (int)(uVar12 | (uint)__xmm_00000003000000020000000100000000) < (int)param_11;
  auVar145._0_4_ = -(uint)bVar21;
  bVar4 = (int)(uVar12 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_11;
  auVar145._4_4_ = -(uint)bVar4;
  bVar5 = (int)(uVar12 | _UNK_150631e08) < (int)param_11;
  auVar145._8_4_ = -(uint)bVar5;
  bVar6 = (int)(uVar12 | _UNK_150631e0c) < (int)param_11;
  auVar145._12_4_ = -(uint)bVar6;
  uVar16 = (ulonglong)uVar12;
  pauVar2 = (undefined1 (*) [16])(param_3 + uVar16 * 0xc);
  uVar13 = movmskps(uVar13,auVar145);
  bVar17 = (char)((char)uVar13 << 4) >> 4;
  if (uVar13 == 0xf) {
    auVar24 = *pauVar2;
    auVar167 = pauVar2[1];
    auVar30._0_4_ = auVar24._0_4_;
    auVar46 = insertps(auVar167,auVar24,0x8c);
    auVar30._4_4_ = auVar24._12_4_;
    auVar30._8_4_ = auVar167._8_4_;
    auVar30._12_4_ = *(undefined4 *)(pauVar2[2] + 4);
    auVar53._4_4_ = auVar167._0_4_;
    auVar53._0_4_ = auVar24._4_4_;
    auVar53._8_4_ = auVar167._12_4_;
    auVar53._12_4_ = *(undefined4 *)(pauVar2[2] + 8);
    auVar76._0_8_ = auVar46._0_8_;
    auVar76._8_4_ = *(undefined4 *)pauVar2[2];
    auVar76._12_4_ = *(undefined4 *)(pauVar2[2] + 0xc);
  }
  else {
    auVar29._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar145._0_4_;
    auVar29._4_4_ = _UNK_150b50da4 & auVar145._4_4_;
    auVar29._8_4_ = _UNK_150b50da8 & auVar145._8_4_;
    auVar29._12_4_ = _UNK_150b50dac & auVar145._12_4_;
    lVar19 = extractps(auVar29,1);
    lVar15 = extractps(auVar29,2);
    lVar20 = extractps(auVar29,3);
    auVar24 = insertps(ZEXT416(*(uint *)*pauVar2),*(undefined4 *)(*pauVar2 + lVar19),0x10);
    auVar24 = insertps(auVar24,*(undefined4 *)(*pauVar2 + lVar15),0x20);
    auVar30 = insertps(auVar24,*(undefined4 *)(*pauVar2 + lVar20),0x30);
    auVar52._4_4_ = _UNK_150b50db4;
    auVar52._0_4_ = ___xmm_000000280000001c0000001000000004;
    auVar52._8_4_ = _UNK_150b50db8;
    auVar52._12_4_ = _UNK_150b50dbc;
    auVar52 = auVar52 & auVar145;
    auVar24 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar52._0_4_)),
                       *(undefined4 *)(*pauVar2 + auVar52._4_4_),0x10);
    auVar24 = insertps(auVar24,*(undefined4 *)(*pauVar2 + auVar52._8_4_),0x20);
    auVar53 = insertps(auVar24,*(undefined4 *)(*pauVar2 + auVar52._12_4_),0x30);
    auVar75._4_4_ = _UNK_150b50dc4;
    auVar75._0_4_ = ___xmm_0000002c000000200000001400000008;
    auVar75._8_4_ = _UNK_150b50dc8;
    auVar75._12_4_ = _UNK_150b50dcc;
    auVar75 = auVar75 & auVar145;
    auVar24 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar75._0_4_)),
                       *(undefined4 *)(*pauVar2 + auVar75._4_4_),0x10);
    auVar24 = insertps(auVar24,*(undefined4 *)(*pauVar2 + auVar75._8_4_),0x20);
    auVar76 = insertps(auVar24,*(undefined4 *)(*pauVar2 + auVar75._12_4_),0x30);
  }
  fVar69 = param_8[8];
  fVar23 = auVar30._0_4_ * fVar69;
  fVar126 = auVar30._4_4_ * fVar69;
  fVar127 = auVar30._8_4_ * fVar69;
  fVar42 = auVar30._12_4_ * fVar69;
  fVar158 = param_8[9];
  fVar64 = auVar53._0_4_ * fVar158;
  fVar67 = auVar53._4_4_ * fVar158;
  fVar38 = auVar53._8_4_ * fVar158;
  fVar39 = auVar53._12_4_ * fVar158;
  fVar86 = param_8[10];
  fVar40 = auVar76._0_4_ * fVar86;
  fVar43 = auVar76._4_4_ * fVar86;
  fVar62 = auVar76._8_4_ * fVar86;
  fVar65 = auVar76._12_4_ * fVar86;
  fVar41 = *param_8;
  fVar70 = param_8[1];
  fVar84 = param_8[2];
  fVar87 = param_8[3];
  fVar68 = fVar64 * fVar41 - fVar23 * fVar70;
  fVar71 = fVar67 * fVar41 - fVar126 * fVar70;
  fVar72 = fVar38 * fVar41 - fVar127 * fVar70;
  fVar81 = fVar39 * fVar41 - fVar42 * fVar70;
  fVar138 = fVar40 * fVar70 - fVar64 * fVar84;
  fVar140 = fVar43 * fVar70 - fVar67 * fVar84;
  fVar141 = fVar62 * fVar70 - fVar38 * fVar84;
  fVar142 = fVar65 * fVar70 - fVar39 * fVar84;
  fVar82 = fVar23 * fVar84 - fVar40 * fVar41;
  fVar83 = fVar126 * fVar84 - fVar43 * fVar41;
  fVar85 = fVar127 * fVar84 - fVar62 * fVar41;
  fVar99 = fVar42 * fVar84 - fVar65 * fVar41;
  fVar138 = fVar138 + fVar138;
  fVar140 = fVar140 + fVar140;
  fVar141 = fVar141 + fVar141;
  fVar142 = fVar142 + fVar142;
  fVar82 = fVar82 + fVar82;
  fVar83 = fVar83 + fVar83;
  fVar85 = fVar85 + fVar85;
  fVar99 = fVar99 + fVar99;
  fVar68 = fVar68 + fVar68;
  fVar71 = fVar71 + fVar71;
  fVar72 = fVar72 + fVar72;
  fVar81 = fVar81 + fVar81;
  auVar133._0_4_ = fVar87 * fVar138 + fVar23;
  auVar133._4_4_ = fVar87 * fVar140 + fVar126;
  auVar133._8_4_ = fVar87 * fVar141 + fVar127;
  auVar133._12_4_ = fVar87 * fVar142 + fVar42;
  fVar159 = (fVar70 * fVar68 - fVar82 * fVar84) + auVar133._0_4_;
  fVar160 = (fVar70 * fVar71 - fVar83 * fVar84) + auVar133._4_4_;
  fVar161 = (fVar70 * fVar72 - fVar85 * fVar84) + auVar133._8_4_;
  fVar162 = (fVar70 * fVar81 - fVar99 * fVar84) + auVar133._12_4_;
  fVar23 = param_8[4];
  fVar126 = param_8[5];
  fVar127 = param_8[6];
  fVar42 = *param_9;
  fVar61 = param_9[1];
  fVar22 = param_9[2];
  bVar11 = ~bVar17;
  if ((bVar11 & 9) == 0) {
    auVar133 = *(undefined1 (*) [16])(param_6 + (int)(uVar12 << 2));
  }
  else {
    puVar14 = (uint *)(param_6 + (int)(uVar12 << 2));
    if ((uVar13 & 1) != 0) {
      auVar133 = ZEXT416(*puVar14);
    }
    if ((uVar13 & 2) != 0) {
      auVar133 = insertps(auVar133,puVar14[1],0x10);
    }
    if ((uVar13 & 4) != 0) {
      auVar133 = insertps(auVar133,puVar14[2],0x20);
    }
    if ((uVar13 & 8) != 0) {
      auVar133 = insertps(auVar133,puVar14[3],0x30);
    }
  }
  fVar159 = (fVar159 + fVar23) - fVar42;
  fVar160 = (fVar160 + fVar23) - fVar42;
  auVar121._0_8_ = CONCAT44(fVar160,fVar159);
  auVar121._8_4_ = (fVar161 + fVar23) - fVar42;
  auVar121._12_4_ = (fVar162 + fVar23) - fVar42;
  auVar54._0_4_ =
       ((fVar84 * fVar138 - fVar68 * fVar41) + fVar87 * fVar82 + fVar64 + fVar126) - fVar61;
  auVar54._4_4_ =
       ((fVar84 * fVar140 - fVar71 * fVar41) + fVar87 * fVar83 + fVar67 + fVar126) - fVar61;
  auVar54._8_4_ =
       ((fVar84 * fVar141 - fVar72 * fVar41) + fVar87 * fVar85 + fVar38 + fVar126) - fVar61;
  auVar54._12_4_ =
       ((fVar84 * fVar142 - fVar81 * fVar41) + fVar87 * fVar99 + fVar39 + fVar126) - fVar61;
  auVar31._0_4_ =
       ((fVar41 * fVar82 - fVar138 * fVar70) + fVar87 * fVar68 + fVar40 + fVar127) - fVar22;
  auVar31._4_4_ =
       ((fVar41 * fVar83 - fVar140 * fVar70) + fVar87 * fVar71 + fVar43 + fVar127) - fVar22;
  auVar31._8_4_ =
       ((fVar41 * fVar85 - fVar141 * fVar70) + fVar87 * fVar72 + fVar62 + fVar127) - fVar22;
  auVar31._12_4_ =
       ((fVar41 * fVar99 - fVar142 * fVar70) + fVar87 * fVar81 + fVar65 + fVar127) - fVar22;
  pfVar9 = (float *)(param_1 + (ulonglong)uVar12 * 0x10);
  if ((bVar11 & 0xf) == 0) {
    auVar78._8_4_ = fVar160;
    auVar78._0_8_ = auVar121._0_8_;
    auVar78._12_4_ = auVar54._4_4_;
    uVar129 = CONCAT44(auVar54._0_4_,fVar159);
    *(undefined8 *)pfVar9 = uVar129;
    *(ulonglong *)(pfVar9 + 2) = CONCAT44(auVar133._0_4_,auVar31._0_4_);
    *(longlong *)(pfVar9 + 4) = auVar78._8_8_;
    pfVar9[6] = auVar31._4_4_;
    pfVar9[7] = auVar133._4_4_;
    pfVar9[8] = auVar121._8_4_;
    pfVar9[9] = auVar54._8_4_;
    pfVar9[10] = auVar31._8_4_;
    pfVar9[0xb] = auVar133._8_4_;
    pfVar9[0xc] = auVar121._12_4_;
    pfVar9[0xd] = auVar54._12_4_;
    pfVar9[0xe] = auVar31._12_4_;
    pfVar9[0xf] = auVar133._12_4_;
    auVar79._4_4_ = fVar160;
    auVar79._0_4_ = fVar159;
    auVar79._8_4_ = auVar121._8_4_;
    auVar79._12_4_ = auVar121._12_4_;
    auVar24 = insertps(auVar79,auVar54,0x30);
    auVar91._4_4_ = auVar54._8_4_;
    auVar91._0_4_ = auVar54._4_4_;
    auVar91._8_4_ = auVar31._0_4_;
    auVar91._12_4_ = auVar31._4_4_;
    auVar24 = insertps(auVar24,auVar31,0x20);
    *(int *)*pauVar2 = auVar24._0_4_;
    *(int *)(*pauVar2 + 4) = auVar24._12_4_;
    *(int *)(*pauVar2 + 8) = auVar24._8_4_;
    *(int *)(*pauVar2 + 0xc) = auVar24._4_4_;
    auVar24 = blendps(auVar91,auVar121,4);
    *(int *)pauVar2[1] = auVar24._0_4_;
    *(int *)(pauVar2[1] + 4) = auVar24._12_4_;
    *(int *)(pauVar2[1] + 8) = auVar24._8_4_;
    *(int *)(pauVar2[1] + 0xc) = auVar24._4_4_;
    *(float *)pauVar2[2] = auVar31._8_4_;
    *(float *)(pauVar2[2] + 4) = auVar121._12_4_;
    *(float *)(pauVar2[2] + 8) = auVar54._12_4_;
    *(float *)(pauVar2[2] + 0xc) = auVar31._12_4_;
    puVar10 = (undefined4 *)(param_2 + uVar16 * 0xc);
    auVar24 = *(undefined1 (*) [16])(param_2 + uVar16 * 0xc);
    auVar167 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar16 * 0xc);
    puVar3 = (undefined4 *)(param_2 + 0x20 + uVar16 * 0xc);
    auVar77._0_4_ = auVar24._0_4_;
    auVar46 = insertps(auVar167,auVar24,0x8c);
    auVar77._4_4_ = auVar24._12_4_;
    auVar77._8_4_ = auVar167._8_4_;
    auVar77._12_4_ = puVar3[1];
    auVar122._4_4_ = auVar167._0_4_;
    auVar122._0_4_ = auVar24._4_4_;
    auVar122._8_4_ = auVar167._12_4_;
    auVar122._12_4_ = puVar3[2];
    auVar168._0_8_ = auVar46._0_8_;
    auVar168._8_4_ = *puVar3;
    auVar168._12_4_ = puVar3[3];
  }
  else {
    if ((bVar17 & 1) != 0) {
      *pfVar9 = fVar159;
    }
    if ((bVar17 & 2) != 0) {
      uVar129 = extractps(auVar121,1);
      *(undefined8 *)(pfVar9 + 4) = uVar129;
    }
    if ((bVar17 & 4) != 0) {
      uVar129 = extractps(auVar121,2);
      *(undefined8 *)(pfVar9 + 8) = uVar129;
    }
    if ((char)bVar17 < '\0') {
      uVar129 = extractps(auVar121,3);
      *(undefined8 *)(pfVar9 + 0xc) = uVar129;
    }
    if ((bVar17 & 1) != 0) {
      pfVar9[1] = auVar54._0_4_;
    }
    if ((bVar17 & 2) != 0) {
      uVar129 = extractps(auVar54,1);
      *(undefined8 *)(pfVar9 + 5) = uVar129;
    }
    if ((bVar17 & 4) != 0) {
      uVar129 = extractps(auVar54,2);
      *(undefined8 *)(pfVar9 + 9) = uVar129;
    }
    if ((char)bVar17 < '\0') {
      uVar129 = extractps(auVar54,3);
      *(undefined8 *)(pfVar9 + 0xd) = uVar129;
    }
    if ((bVar17 & 1) != 0) {
      pfVar9[2] = auVar31._0_4_;
    }
    if ((bVar17 & 2) != 0) {
      uVar129 = extractps(auVar31,1);
      *(undefined8 *)(pfVar9 + 6) = uVar129;
    }
    if ((bVar17 & 4) != 0) {
      uVar129 = extractps(auVar31,2);
      *(undefined8 *)(pfVar9 + 10) = uVar129;
    }
    if ((char)bVar17 < '\0') {
      uVar129 = extractps(auVar31,3);
      *(undefined8 *)(pfVar9 + 0xe) = uVar129;
    }
    if ((bVar17 & 1) != 0) {
      pfVar9[3] = auVar133._0_4_;
    }
    if ((bVar17 & 2) != 0) {
      uVar129 = extractps(auVar133,1);
      *(undefined8 *)(pfVar9 + 7) = uVar129;
    }
    if ((bVar17 & 4) != 0) {
      uVar129 = extractps(auVar133,2);
      *(undefined8 *)(pfVar9 + 0xb) = uVar129;
    }
    if ((char)bVar17 < '\0') {
      uVar129 = extractps(auVar133,3);
      *(undefined8 *)(pfVar9 + 0xf) = uVar129;
    }
    if ((bVar17 & 1) != 0) {
      *(float *)*pauVar2 = fVar159;
    }
    if ((bVar17 & 2) != 0) {
      uVar129 = extractps(auVar121,1);
      *(undefined8 *)(*pauVar2 + 0xc) = uVar129;
    }
    if ((bVar17 & 4) != 0) {
      uVar129 = extractps(auVar121,2);
      *(undefined8 *)(pauVar2[1] + 8) = uVar129;
    }
    if ((char)bVar17 < '\0') {
      uVar129 = extractps(auVar121,3);
      *(undefined8 *)(pauVar2[2] + 4) = uVar129;
    }
    if ((bVar17 & 1) != 0) {
      *(float *)(*pauVar2 + 4) = auVar54._0_4_;
    }
    if ((bVar17 & 2) != 0) {
      uVar129 = extractps(auVar54,1);
      *(undefined8 *)pauVar2[1] = uVar129;
    }
    if ((bVar17 & 4) != 0) {
      uVar129 = extractps(auVar54,2);
      *(undefined8 *)(pauVar2[1] + 0xc) = uVar129;
    }
    if ((char)bVar17 < '\0') {
      uVar129 = extractps(auVar54,3);
      *(undefined8 *)(pauVar2[2] + 8) = uVar129;
    }
    if ((bVar17 & 1) != 0) {
      *(float *)(*pauVar2 + 8) = auVar31._0_4_;
    }
    if ((bVar17 & 2) != 0) {
      uVar129 = extractps(auVar31,1);
      *(undefined8 *)(pauVar2[1] + 4) = uVar129;
    }
    if ((bVar17 & 4) != 0) {
      uVar129 = extractps(auVar31,2);
      *(undefined8 *)pauVar2[2] = uVar129;
    }
    if ((char)bVar17 < '\0') {
      uVar129 = extractps(auVar31,3);
      *(undefined8 *)(pauVar2[2] + 0xc) = uVar129;
    }
    auVar32._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar145._0_4_;
    auVar32._4_4_ = _UNK_150b50da4 & auVar145._4_4_;
    auVar32._8_4_ = _UNK_150b50da8 & auVar145._8_4_;
    auVar32._12_4_ = _UNK_150b50dac & auVar145._12_4_;
    lVar20 = extractps(auVar32,1);
    lVar15 = extractps(auVar32,2);
    lVar19 = extractps(auVar32,3);
    puVar10 = (undefined4 *)(param_2 + uVar16 * 0xc);
    auVar24 = insertps(ZEXT416(*(uint *)(param_2 + uVar16 * 0xc)),
                       *(undefined4 *)(lVar20 + (longlong)puVar10),0x10);
    auVar24 = insertps(auVar24,*(undefined4 *)(lVar15 + (longlong)puVar10),0x20);
    auVar77 = insertps(auVar24,*(undefined4 *)(lVar19 + (longlong)puVar10),0x30);
    auVar33._4_4_ = _UNK_150b50db4;
    auVar33._0_4_ = ___xmm_000000280000001c0000001000000004;
    auVar33._8_4_ = _UNK_150b50db8;
    auVar33._12_4_ = _UNK_150b50dbc;
    auVar33 = auVar33 & auVar145;
    auVar24 = insertps(ZEXT416(*(uint *)((ulonglong)auVar33._0_4_ + (longlong)puVar10)),
                       *(undefined4 *)((ulonglong)auVar33._4_4_ + (longlong)puVar10),0x10);
    auVar24 = insertps(auVar24,*(undefined4 *)((ulonglong)auVar33._8_4_ + (longlong)puVar10),0x20);
    auVar122 = insertps(auVar24,*(undefined4 *)((ulonglong)auVar33._12_4_ + (longlong)puVar10),0x30)
    ;
    auVar34._4_4_ = _UNK_150b50dc4;
    auVar34._0_4_ = ___xmm_0000002c000000200000001400000008;
    auVar34._8_4_ = _UNK_150b50dc8;
    auVar34._12_4_ = _UNK_150b50dcc;
    auVar34 = auVar34 & auVar145;
    auVar24 = insertps(ZEXT416(*(uint *)((ulonglong)auVar34._0_4_ + (longlong)puVar10)),
                       *(undefined4 *)((ulonglong)auVar34._4_4_ + (longlong)puVar10),0x10);
    auVar24 = insertps(auVar24,*(undefined4 *)((ulonglong)auVar34._8_4_ + (longlong)puVar10),0x20);
    auVar168 = insertps(auVar24,*(undefined4 *)((ulonglong)auVar34._12_4_ + (longlong)puVar10),0x30)
    ;
  }
  fVar64 = auVar77._0_4_ * fVar69;
  fVar67 = auVar77._4_4_ * fVar69;
  fVar38 = auVar77._8_4_ * fVar69;
  fVar39 = auVar77._12_4_ * fVar69;
  fVar40 = auVar122._0_4_ * fVar158;
  fVar43 = auVar122._4_4_ * fVar158;
  fVar62 = auVar122._8_4_ * fVar158;
  fVar65 = auVar122._12_4_ * fVar158;
  fVar159 = auVar168._0_4_ * fVar86;
  fVar160 = auVar168._4_4_ * fVar86;
  fVar161 = auVar168._8_4_ * fVar86;
  fVar162 = auVar168._12_4_ * fVar86;
  fVar68 = fVar40 * fVar41 - fVar64 * fVar70;
  fVar71 = fVar43 * fVar41 - fVar67 * fVar70;
  fVar72 = fVar62 * fVar41 - fVar38 * fVar70;
  fVar81 = fVar65 * fVar41 - fVar39 * fVar70;
  fVar138 = fVar159 * fVar70 - fVar40 * fVar84;
  fVar140 = fVar160 * fVar70 - fVar43 * fVar84;
  fVar141 = fVar161 * fVar70 - fVar62 * fVar84;
  fVar142 = fVar162 * fVar70 - fVar65 * fVar84;
  fVar82 = fVar64 * fVar84 - fVar159 * fVar41;
  fVar83 = fVar67 * fVar84 - fVar160 * fVar41;
  fVar85 = fVar38 * fVar84 - fVar161 * fVar41;
  fVar99 = fVar39 * fVar84 - fVar162 * fVar41;
  fVar138 = fVar138 + fVar138;
  fVar140 = fVar140 + fVar140;
  fVar141 = fVar141 + fVar141;
  fVar142 = fVar142 + fVar142;
  fVar82 = fVar82 + fVar82;
  fVar83 = fVar83 + fVar83;
  fVar85 = fVar85 + fVar85;
  fVar99 = fVar99 + fVar99;
  fVar68 = fVar68 + fVar68;
  fVar71 = fVar71 + fVar71;
  fVar72 = fVar72 + fVar72;
  fVar81 = fVar81 + fVar81;
  pauVar2 = (undefined1 (*) [16])(param_4 + uVar16 * 0xc);
  if ((bVar11 & 0xf) == 0) {
    auVar24 = *pauVar2;
    auVar167 = pauVar2[1];
    auVar112._0_4_ = auVar24._0_4_;
    auVar46 = insertps(auVar167,auVar24,0x8c);
    auVar112._4_4_ = auVar24._12_4_;
    auVar112._8_4_ = auVar167._8_4_;
    auVar112._12_4_ = *(undefined4 *)(pauVar2[2] + 4);
    auVar55._4_4_ = auVar167._0_4_;
    auVar55._0_4_ = auVar24._4_4_;
    auVar55._8_4_ = auVar167._12_4_;
    auVar55._12_4_ = *(undefined4 *)(pauVar2[2] + 8);
    auVar35._0_8_ = auVar46._0_8_;
    auVar35._8_4_ = *(undefined4 *)pauVar2[2];
    auVar35._12_4_ = *(undefined4 *)(pauVar2[2] + 0xc);
  }
  else {
    auVar24 = insertps(ZEXT416(*(uint *)*pauVar2),
                       *(undefined4 *)(*pauVar2 + (_UNK_150b50da4 & auVar145._4_4_)),0x10);
    auVar24 = insertps(auVar24,*(undefined4 *)(*pauVar2 + (_UNK_150b50da8 & auVar145._8_4_)),0x20);
    auVar112 = insertps(auVar24,*(undefined4 *)(*pauVar2 + (_UNK_150b50dac & auVar145._12_4_)),0x30)
    ;
    auVar24 = insertps(ZEXT416(*(uint *)(*pauVar2 +
                                        (___xmm_000000280000001c0000001000000004 & auVar145._0_4_)))
                       ,*(undefined4 *)(*pauVar2 + (_UNK_150b50db4 & auVar145._4_4_)),0x10);
    auVar24 = insertps(auVar24,*(undefined4 *)(*pauVar2 + (_UNK_150b50db8 & auVar145._8_4_)),0x20);
    auVar55 = insertps(auVar24,*(undefined4 *)(*pauVar2 + (_UNK_150b50dbc & auVar145._12_4_)),0x30);
    auVar24 = insertps(ZEXT416(*(uint *)(*pauVar2 +
                                        (___xmm_0000002c000000200000001400000008 & auVar145._0_4_)))
                       ,*(undefined4 *)(*pauVar2 + (_UNK_150b50dc4 & auVar145._4_4_)),0x10);
    auVar24 = insertps(auVar24,*(undefined4 *)(*pauVar2 + (_UNK_150b50dc8 & auVar145._8_4_)),0x20);
    auVar35 = insertps(auVar24,*(undefined4 *)(*pauVar2 + (_UNK_150b50dcc & auVar145._12_4_)),0x30);
  }
  fVar108 = auVar112._0_4_ * fVar69;
  fVar115 = auVar112._4_4_ * fVar69;
  fVar116 = auVar112._8_4_ * fVar69;
  fVar69 = auVar112._12_4_ * fVar69;
  fVar44 = auVar55._0_4_ * fVar158;
  fVar63 = auVar55._4_4_ * fVar158;
  fVar66 = auVar55._8_4_ * fVar158;
  fVar158 = auVar55._12_4_ * fVar158;
  fVar156 = auVar35._0_4_ * fVar86;
  fVar157 = auVar35._4_4_ * fVar86;
  fVar163 = auVar35._8_4_ * fVar86;
  fVar86 = auVar35._12_4_ * fVar86;
  fVar88 = fVar44 * fVar41 - fVar108 * fVar70;
  fVar96 = fVar63 * fVar41 - fVar115 * fVar70;
  fVar97 = fVar66 * fVar41 - fVar116 * fVar70;
  fVar98 = fVar158 * fVar41 - fVar69 * fVar70;
  fVar128 = fVar156 * fVar70 - fVar44 * fVar84;
  fVar135 = fVar157 * fVar70 - fVar63 * fVar84;
  fVar136 = fVar163 * fVar70 - fVar66 * fVar84;
  fVar137 = fVar86 * fVar70 - fVar158 * fVar84;
  fVar100 = fVar108 * fVar84 - fVar156 * fVar41;
  fVar105 = fVar115 * fVar84 - fVar157 * fVar41;
  fVar106 = fVar116 * fVar84 - fVar163 * fVar41;
  fVar107 = fVar69 * fVar84 - fVar86 * fVar41;
  fVar128 = fVar128 + fVar128;
  fVar135 = fVar135 + fVar135;
  fVar136 = fVar136 + fVar136;
  fVar137 = fVar137 + fVar137;
  fVar100 = fVar100 + fVar100;
  fVar105 = fVar105 + fVar105;
  fVar106 = fVar106 + fVar106;
  fVar107 = fVar107 + fVar107;
  fVar88 = fVar88 + fVar88;
  fVar96 = fVar96 + fVar96;
  fVar97 = fVar97 + fVar97;
  fVar98 = fVar98 + fVar98;
  fVar108 = (fVar23 + (fVar70 * fVar88 - fVar100 * fVar84) + fVar87 * fVar128 + fVar108) - fVar42;
  fVar115 = (fVar23 + (fVar70 * fVar96 - fVar105 * fVar84) + fVar87 * fVar135 + fVar115) - fVar42;
  auVar92._0_8_ = CONCAT44(fVar115,fVar108);
  auVar92._8_4_ =
       (fVar23 + (fVar70 * fVar97 - fVar106 * fVar84) + fVar87 * fVar136 + fVar116) - fVar42;
  auVar92._12_4_ =
       (fVar23 + (fVar70 * fVar98 - fVar107 * fVar84) + fVar87 * fVar137 + fVar69) - fVar42;
  auVar103._0_4_ =
       (fVar126 + (fVar84 * fVar128 - fVar88 * fVar41) + fVar87 * fVar100 + fVar44) - fVar61;
  auVar103._4_4_ =
       (fVar126 + (fVar84 * fVar135 - fVar96 * fVar41) + fVar87 * fVar105 + fVar63) - fVar61;
  auVar103._8_4_ =
       (fVar126 + (fVar84 * fVar136 - fVar97 * fVar41) + fVar87 * fVar106 + fVar66) - fVar61;
  auVar103._12_4_ =
       (fVar126 + (fVar84 * fVar137 - fVar98 * fVar41) + fVar87 * fVar107 + fVar158) - fVar61;
  auVar113._0_4_ =
       (fVar127 + (fVar41 * fVar100 - fVar128 * fVar70) + fVar87 * fVar88 + fVar156) - fVar22;
  auVar113._4_4_ =
       (fVar127 + (fVar41 * fVar105 - fVar135 * fVar70) + fVar87 * fVar96 + fVar157) - fVar22;
  auVar113._8_4_ =
       (fVar127 + (fVar41 * fVar106 - fVar136 * fVar70) + fVar87 * fVar97 + fVar163) - fVar22;
  auVar113._12_4_ =
       (fVar127 + (fVar41 * fVar107 - fVar137 * fVar70) + fVar87 * fVar98 + fVar86) - fVar22;
  if ((bVar11 & 0xf) == 0) {
    auVar36._8_4_ = auVar92._8_4_;
    auVar36._0_8_ = auVar92._0_8_;
    auVar36._12_4_ = auVar92._12_4_;
    auVar24 = insertps(auVar36,auVar103,0x30);
    auVar56._4_4_ = auVar103._8_4_;
    auVar56._0_4_ = auVar103._4_4_;
    auVar56._8_4_ = auVar113._0_4_;
    auVar56._12_4_ = auVar113._4_4_;
    auVar24 = insertps(auVar24,auVar113,0x20);
    *(int *)*pauVar2 = auVar24._0_4_;
    *(int *)(*pauVar2 + 4) = auVar24._12_4_;
    *(int *)(*pauVar2 + 8) = auVar24._8_4_;
    *(int *)(*pauVar2 + 0xc) = auVar24._4_4_;
    auVar24 = blendps(auVar56,auVar92,4);
    *(int *)pauVar2[1] = auVar24._0_4_;
    *(int *)(pauVar2[1] + 4) = auVar24._12_4_;
    *(int *)(pauVar2[1] + 8) = auVar24._8_4_;
    *(int *)(pauVar2[1] + 0xc) = auVar24._4_4_;
    *(float *)pauVar2[2] = auVar113._8_4_;
    *(float *)(pauVar2[2] + 4) = auVar92._12_4_;
    *(float *)(pauVar2[2] + 8) = auVar103._12_4_;
    *(float *)(pauVar2[2] + 0xc) = auVar113._12_4_;
    auVar24 = *(undefined1 (*) [16])(param_7 + uVar16 * 0xc);
    auVar167 = *(undefined1 (*) [16])(param_7 + 0x10 + uVar16 * 0xc);
    puVar3 = (undefined4 *)(param_7 + 0x20 + uVar16 * 0xc);
    auVar146._0_4_ = auVar24._0_4_;
    auVar46 = insertps(auVar167,auVar24,0x8c);
    auVar146._4_4_ = auVar24._12_4_;
    auVar146._8_4_ = auVar167._8_4_;
    auVar146._12_4_ = puVar3[1];
    auVar150._4_4_ = auVar167._0_4_;
    auVar150._0_4_ = auVar24._4_4_;
    auVar150._8_4_ = auVar167._12_4_;
    auVar150._12_4_ = puVar3[2];
    auVar153._0_8_ = auVar46._0_8_;
    auVar153._8_4_ = *puVar3;
    auVar153._12_4_ = puVar3[3];
  }
  else {
    if ((bVar17 & 1) != 0) {
      *(float *)*pauVar2 = fVar108;
    }
    if ((bVar17 & 2) != 0) {
      uVar129 = extractps(auVar92,1);
      *(undefined8 *)(*pauVar2 + 0xc) = uVar129;
    }
    if ((bVar17 & 4) != 0) {
      uVar129 = extractps(auVar92,2);
      *(undefined8 *)(pauVar2[1] + 8) = uVar129;
    }
    if ((char)bVar17 < '\0') {
      uVar129 = extractps(auVar92,3);
      *(undefined8 *)(pauVar2[2] + 4) = uVar129;
    }
    if ((bVar17 & 1) != 0) {
      *(float *)(*pauVar2 + 4) = auVar103._0_4_;
    }
    if ((bVar17 & 2) != 0) {
      uVar129 = extractps(auVar103,1);
      *(undefined8 *)pauVar2[1] = uVar129;
    }
    if ((bVar17 & 4) != 0) {
      uVar129 = extractps(auVar103,2);
      *(undefined8 *)(pauVar2[1] + 0xc) = uVar129;
    }
    if ((char)bVar17 < '\0') {
      uVar129 = extractps(auVar103,3);
      *(undefined8 *)(pauVar2[2] + 8) = uVar129;
    }
    if ((bVar17 & 1) != 0) {
      *(float *)(*pauVar2 + 8) = auVar113._0_4_;
    }
    if ((bVar17 & 2) != 0) {
      uVar129 = extractps(auVar113,1);
      *(undefined8 *)(pauVar2[1] + 4) = uVar129;
    }
    if ((bVar17 & 4) != 0) {
      uVar129 = extractps(auVar113,2);
      *(undefined8 *)pauVar2[2] = uVar129;
    }
    if ((char)bVar17 < '\0') {
      uVar129 = extractps(auVar113,3);
      *(undefined8 *)(pauVar2[2] + 0xc) = uVar129;
    }
    lVar20 = param_7 + uVar16 * 0xc;
    auVar24 = insertps(ZEXT416(*(uint *)(param_7 + uVar16 * 0xc)),
                       *(undefined4 *)((ulonglong)(_UNK_150b50da4 & auVar145._4_4_) + lVar20),0x10);
    auVar24 = insertps(auVar24,*(undefined4 *)
                                ((ulonglong)(_UNK_150b50da8 & auVar145._8_4_) + lVar20),0x20);
    auVar146 = insertps(auVar24,*(undefined4 *)
                                 ((ulonglong)(_UNK_150b50dac & auVar145._12_4_) + lVar20),0x30);
    auVar24 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (___xmm_000000280000001c0000001000000004 & auVar145._0_4_)
                                        + lVar20)),
                       *(undefined4 *)((ulonglong)(_UNK_150b50db4 & auVar145._4_4_) + lVar20),0x10);
    auVar24 = insertps(auVar24,*(undefined4 *)
                                ((ulonglong)(_UNK_150b50db8 & auVar145._8_4_) + lVar20),0x20);
    auVar150 = insertps(auVar24,*(undefined4 *)
                                 ((ulonglong)(_UNK_150b50dbc & auVar145._12_4_) + lVar20),0x30);
    auVar24 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (___xmm_0000002c000000200000001400000008 & auVar145._0_4_)
                                        + lVar20)),
                       *(undefined4 *)((ulonglong)(_UNK_150b50dc4 & auVar145._4_4_) + lVar20),0x10);
    auVar24 = insertps(auVar24,*(undefined4 *)
                                ((ulonglong)(_UNK_150b50dc8 & auVar145._8_4_) + lVar20),0x20);
    auVar153 = insertps(auVar24,*(undefined4 *)
                                 ((ulonglong)(_UNK_150b50dcc & auVar145._12_4_) + lVar20),0x30);
  }
  fVar23 = fVar64 + fVar87 * fVar138 + (fVar70 * fVar68 - fVar82 * fVar84);
  fVar126 = fVar67 + fVar87 * fVar140 + (fVar70 * fVar71 - fVar83 * fVar84);
  auVar80._0_8_ = CONCAT44(fVar126,fVar23);
  auVar80._8_4_ = fVar38 + fVar87 * fVar141 + (fVar70 * fVar72 - fVar85 * fVar84);
  auVar80._12_4_ = fVar39 + fVar87 * fVar142 + (fVar70 * fVar81 - fVar99 * fVar84);
  fVar69 = fVar40 + fVar87 * fVar82 + (fVar84 * fVar138 - fVar68 * fVar41);
  fVar158 = fVar43 + fVar87 * fVar83 + (fVar84 * fVar140 - fVar71 * fVar41);
  auVar125._0_8_ = CONCAT44(fVar158,fVar69);
  auVar125._8_4_ = fVar62 + fVar87 * fVar85 + (fVar84 * fVar141 - fVar72 * fVar41);
  auVar125._12_4_ = fVar65 + fVar87 * fVar99 + (fVar84 * fVar142 - fVar81 * fVar41);
  fVar86 = fVar159 + fVar87 * fVar68 + (fVar41 * fVar82 - fVar138 * fVar70);
  fVar84 = fVar160 + fVar87 * fVar71 + (fVar41 * fVar83 - fVar140 * fVar70);
  auVar171._0_8_ = CONCAT44(fVar84,fVar86);
  auVar171._8_4_ = fVar161 + fVar87 * fVar72 + (fVar41 * fVar85 - fVar141 * fVar70);
  auVar171._12_4_ = fVar162 + fVar87 * fVar81 + (fVar41 * fVar99 - fVar142 * fVar70);
  auVar147._0_4_ = auVar146._0_4_ - fVar108;
  auVar147._4_4_ = auVar146._4_4_ - fVar115;
  auVar147._8_4_ = auVar146._8_4_ - auVar92._8_4_;
  auVar147._12_4_ = auVar146._12_4_ - auVar92._12_4_;
  auVar151._0_4_ = auVar150._0_4_ - auVar103._0_4_;
  auVar151._4_4_ = auVar150._4_4_ - auVar103._4_4_;
  auVar151._8_4_ = auVar150._8_4_ - auVar103._8_4_;
  auVar151._12_4_ = auVar150._12_4_ - auVar103._12_4_;
  auVar154._0_4_ = auVar153._0_4_ - auVar113._0_4_;
  auVar154._4_4_ = auVar153._4_4_ - auVar113._4_4_;
  auVar154._8_4_ = auVar153._8_4_ - auVar113._8_4_;
  auVar154._12_4_ = auVar153._12_4_ - auVar113._12_4_;
  auVar57._4_4_ = param_10;
  auVar57._0_4_ = param_10;
  auVar57._8_4_ = param_10;
  auVar57._12_4_ = param_10;
  auVar24 = divps(auVar147,auVar57);
  auVar167 = divps(auVar151,auVar57);
  auVar46 = divps(auVar154,auVar57);
  pfVar9 = (float *)(param_5 + uVar16 * 0xc);
  fVar41 = auVar24._0_4_;
  fVar70 = auVar24._12_4_;
  fVar87 = auVar167._0_4_;
  fVar127 = auVar167._12_4_;
  fVar42 = auVar46._0_4_;
  fVar61 = auVar46._4_4_;
  fVar22 = auVar46._8_4_;
  fVar64 = auVar46._12_4_;
  if ((bVar11 & 0xf) == 0) {
    auVar50 = insertps(auVar24,auVar167,0x30);
    auVar58._0_8_ = auVar167._4_8_;
    auVar58._8_4_ = fVar42;
    auVar58._12_4_ = fVar61;
    auVar46 = insertps(auVar50,auVar46,0x20);
    *pfVar9 = auVar46._0_4_;
    pfVar9[1] = auVar46._12_4_;
    pfVar9[2] = auVar46._8_4_;
    pfVar9[3] = auVar46._4_4_;
    auVar46 = blendps(auVar58,auVar24,4);
    pfVar9[4] = auVar46._0_4_;
    pfVar9[5] = auVar46._12_4_;
    pfVar9[6] = auVar46._8_4_;
    pfVar9[7] = auVar46._4_4_;
    pfVar9[8] = fVar22;
    pfVar9[9] = fVar70;
    pfVar9[10] = fVar127;
    pfVar9[0xb] = fVar64;
  }
  else {
    if ((bVar17 & 1) != 0) {
      *pfVar9 = fVar41;
    }
    if ((bVar17 & 2) != 0) {
      uVar129 = extractps(auVar24,1);
      *(undefined8 *)(pfVar9 + 3) = uVar129;
    }
    if ((bVar17 & 4) != 0) {
      uVar129 = extractps(auVar24,2);
      *(undefined8 *)(pfVar9 + 6) = uVar129;
    }
    if ((char)bVar17 < '\0') {
      uVar129 = extractps(auVar24,3);
      *(undefined8 *)(pfVar9 + 9) = uVar129;
    }
    if ((bVar17 & 1) != 0) {
      pfVar9[1] = fVar87;
    }
    if ((bVar17 & 2) != 0) {
      uVar129 = extractps(auVar167,1);
      *(undefined8 *)(pfVar9 + 4) = uVar129;
    }
    if ((bVar17 & 4) != 0) {
      uVar129 = extractps(auVar167,2);
      *(undefined8 *)(pfVar9 + 7) = uVar129;
    }
    if ((char)bVar17 < '\0') {
      uVar129 = extractps(auVar167,3);
      *(undefined8 *)(pfVar9 + 10) = uVar129;
    }
    if ((bVar17 & 1) != 0) {
      pfVar9[2] = fVar42;
    }
    if ((bVar17 & 2) != 0) {
      uVar129 = extractps(auVar46,1);
      *(undefined8 *)(pfVar9 + 5) = uVar129;
    }
    if ((bVar17 & 4) != 0) {
      uVar129 = extractps(auVar46,2);
      *(undefined8 *)(pfVar9 + 8) = uVar129;
    }
    if ((char)bVar17 < '\0') {
      uVar129 = extractps(auVar46,3);
      *(undefined8 *)(pfVar9 + 0xb) = uVar129;
    }
  }
  fVar23 = fVar23 - fVar41;
  fVar126 = fVar126 - auVar24._4_4_;
  fVar43 = auVar80._8_4_ - auVar24._8_4_;
  fVar62 = auVar80._12_4_ - fVar70;
  fVar69 = fVar69 - fVar87;
  fVar158 = fVar158 - auVar167._4_4_;
  fVar67 = auVar125._8_4_ - auVar167._8_4_;
  fVar38 = auVar125._12_4_ - fVar127;
  fVar86 = fVar86 - fVar42;
  fVar84 = fVar84 - fVar61;
  fVar39 = auVar171._8_4_ - fVar22;
  fVar40 = auVar171._12_4_ - fVar64;
  auVar104._0_4_ = fVar86 * fVar86 + fVar69 * fVar69 + fVar23 * fVar23;
  auVar104._4_4_ = fVar84 * fVar84 + fVar158 * fVar158 + fVar126 * fVar126;
  auVar104._8_4_ = fVar39 * fVar39 + fVar67 * fVar67 + fVar43 * fVar43;
  auVar104._12_4_ = fVar40 * fVar40 + fVar38 * fVar38 + fVar62 * fVar62;
  auVar134._4_4_ = param_12;
  auVar134._0_4_ = param_12;
  auVar134._8_4_ = param_12;
  auVar134._12_4_ = param_12;
  auVar114._0_4_ = -(uint)(param_12 < auVar104._0_4_ && bVar21);
  auVar114._4_4_ = -(uint)(param_12 < auVar104._4_4_ && bVar4);
  auVar114._8_4_ = -(uint)(param_12 < auVar104._8_4_ && bVar5);
  auVar114._12_4_ = -(uint)(param_12 < auVar104._12_4_ && bVar6);
  iVar18 = movmskps((int)pfVar9,auVar114);
  if (iVar18 == 0) goto LAB_140d16a1f;
  bVar8 = (char)((char)iVar18 << 4) >> 4;
  auVar46 = divps(auVar134,auVar104);
  auVar46 = sqrtps(auVar104,auVar46);
  fVar65 = auVar46._0_4_;
  fVar68 = auVar46._4_4_;
  fVar71 = auVar46._8_4_;
  fVar72 = auVar46._12_4_;
  auVar148._0_8_ = CONCAT44(auVar24._4_4_ + fVar126 * fVar68,fVar41 + fVar23 * fVar65);
  auVar148._8_4_ = auVar24._8_4_ + fVar43 * fVar71;
  auVar148._12_4_ = fVar70 + fVar62 * fVar72;
  auVar93._8_4_ = auVar80._8_4_;
  auVar93._0_8_ = auVar80._0_8_;
  auVar93._12_4_ = auVar80._12_4_;
  bVar21 = (bVar8 & 1) != 0;
  if (bVar21) {
    auVar93._8_4_ = auVar148._8_4_;
    auVar93._0_8_ = auVar148._0_8_;
    auVar93._12_4_ = auVar148._12_4_;
  }
  auVar152._0_8_ = CONCAT44(auVar167._4_4_ + fVar158 * fVar68,fVar87 + fVar69 * fVar65);
  auVar152._8_4_ = auVar167._8_4_ + fVar67 * fVar71;
  auVar152._12_4_ = fVar127 + fVar38 * fVar72;
  auVar155._0_8_ = CONCAT44(fVar61 + fVar84 * fVar68,fVar42 + fVar86 * fVar65);
  auVar155._8_4_ = fVar22 + fVar39 * fVar71;
  auVar155._12_4_ = fVar64 + fVar40 * fVar72;
  auVar59._8_4_ = auVar125._8_4_;
  auVar59._0_8_ = auVar125._0_8_;
  auVar59._12_4_ = auVar125._12_4_;
  auVar37._8_4_ = auVar171._8_4_;
  auVar37._0_8_ = auVar171._0_8_;
  auVar37._12_4_ = auVar171._12_4_;
  if (bVar21) {
    auVar59._8_4_ = auVar152._8_4_;
    auVar59._0_8_ = auVar152._0_8_;
    auVar59._12_4_ = auVar152._12_4_;
    auVar37._8_4_ = auVar155._8_4_;
    auVar37._0_8_ = auVar155._0_8_;
    auVar37._12_4_ = auVar155._12_4_;
    auVar24 = blendps(auVar80,auVar93,1);
    if ((bVar8 & 2) != 0) goto LAB_140d16af5;
LAB_140d16990:
    auVar123 = blendps(auVar125,auVar59,1);
    auVar169 = blendps(auVar171,auVar37,1);
    auVar24 = blendps(auVar24,auVar24,2);
    auVar167 = auVar123;
    auVar46 = auVar169;
    if ((bVar8 & 4) == 0) goto LAB_140d169c3;
LAB_140d16b34:
    auVar95._8_4_ = auVar148._8_4_;
    auVar95._0_8_ = auVar148._0_8_;
    auVar95._12_4_ = auVar148._12_4_;
    auVar167 = blendps(auVar167,auVar123,2);
    auVar124._8_4_ = auVar152._8_4_;
    auVar124._0_8_ = auVar152._0_8_;
    auVar124._12_4_ = auVar152._12_4_;
    auVar46 = blendps(auVar46,auVar169,2);
    auVar170._8_4_ = auVar155._8_4_;
    auVar170._0_8_ = auVar155._0_8_;
    auVar170._12_4_ = auVar155._12_4_;
    auVar24 = blendps(auVar24,auVar95,4);
    if (-1 < (char)bVar8) goto LAB_140d16b6e;
LAB_140d169f1:
    auVar167 = blendps(auVar167,auVar124,4);
    if ((char)bVar8 < '\0') goto LAB_140d169fd;
LAB_140d16b7e:
    auVar46 = blendps(auVar46,auVar170,4);
    auVar152 = auVar167;
  }
  else {
    auVar24 = blendps(auVar80,auVar93,1);
    if ((bVar8 & 2) == 0) goto LAB_140d16990;
LAB_140d16af5:
    auVar94._8_4_ = auVar148._8_4_;
    auVar94._0_8_ = auVar148._0_8_;
    auVar94._12_4_ = auVar148._12_4_;
    auVar167 = blendps(auVar125,auVar59,1);
    auVar123._8_4_ = auVar152._8_4_;
    auVar123._0_8_ = auVar152._0_8_;
    auVar123._12_4_ = auVar152._12_4_;
    auVar46 = blendps(auVar171,auVar37,1);
    auVar169._8_4_ = auVar155._8_4_;
    auVar169._0_8_ = auVar155._0_8_;
    auVar169._12_4_ = auVar155._12_4_;
    auVar24 = blendps(auVar24,auVar94,2);
    if ((bVar8 & 4) != 0) goto LAB_140d16b34;
LAB_140d169c3:
    auVar124 = blendps(auVar167,auVar123,2);
    auVar170 = blendps(auVar46,auVar169,2);
    auVar24 = blendps(auVar24,auVar24,4);
    auVar167 = auVar124;
    auVar46 = auVar170;
    if ((char)bVar8 < '\0') goto LAB_140d169f1;
LAB_140d16b6e:
    auVar167 = blendps(auVar167,auVar124,4);
    auVar148 = auVar24;
    if (-1 < (char)bVar8) goto LAB_140d16b7e;
LAB_140d169fd:
    auVar46 = blendps(auVar46,auVar170,4);
  }
  if (-1 < (char)bVar8) {
    auVar155 = auVar46;
  }
  auVar80 = blendps(auVar24,auVar148,8);
  auVar125 = blendps(auVar167,auVar152,8);
  auVar171 = blendps(auVar46,auVar155,8);
LAB_140d16a1f:
  if ((bVar11 & 0xf) == 0) {
    auVar24 = insertps(auVar80,auVar125,0x30);
    auVar60._0_8_ = auVar125._4_8_;
    auVar60._8_4_ = auVar171._0_4_;
    auVar60._12_4_ = auVar171._4_4_;
    auVar24 = insertps(auVar24,auVar171,0x20);
    *puVar10 = auVar24._0_4_;
    puVar10[1] = auVar24._12_4_;
    puVar10[2] = auVar24._8_4_;
    puVar10[3] = auVar24._4_4_;
    auVar24 = blendps(auVar60,auVar80,4);
    puVar10 = (undefined4 *)(param_2 + 0x10 + uVar16 * 0xc);
    *puVar10 = auVar24._0_4_;
    puVar10[1] = auVar24._12_4_;
    puVar10[2] = auVar24._8_4_;
    puVar10[3] = auVar24._4_4_;
    puVar10 = (undefined4 *)(param_2 + 0x20 + uVar16 * 0xc);
    *puVar10 = auVar171._8_4_;
    puVar10[1] = auVar80._12_4_;
    puVar10[2] = auVar125._12_4_;
    puVar10[3] = auVar171._12_4_;
  }
  else {
    if ((bVar17 & 1) != 0) {
      *puVar10 = auVar80._0_4_;
    }
    if ((bVar17 & 2) != 0) {
      uVar129 = extractps(auVar80,1);
      *(undefined8 *)(param_2 + 0xc + uVar16 * 0xc) = uVar129;
    }
    if ((bVar17 & 4) != 0) {
      uVar129 = extractps(auVar80,2);
      *(undefined8 *)(param_2 + 0x18 + uVar16 * 0xc) = uVar129;
    }
    if ((char)bVar17 < '\0') {
      uVar129 = extractps(auVar80,3);
      *(undefined8 *)(param_2 + 0x24 + uVar16 * 0xc) = uVar129;
    }
    if ((bVar17 & 1) != 0) {
      *(int *)(param_2 + 4 + uVar16 * 0xc) = auVar125._0_4_;
    }
    if ((bVar17 & 2) != 0) {
      uVar129 = extractps(auVar125,1);
      *(undefined8 *)(param_2 + 0x10 + uVar16 * 0xc) = uVar129;
    }
    if ((bVar17 & 4) != 0) {
      uVar129 = extractps(auVar125,2);
      *(undefined8 *)(param_2 + 0x1c + uVar16 * 0xc) = uVar129;
    }
    if ((char)bVar17 < '\0') {
      uVar129 = extractps(auVar125,3);
      *(undefined8 *)(param_2 + 0x28 + uVar16 * 0xc) = uVar129;
    }
    if ((bVar17 & 1) != 0) {
      *(int *)(param_2 + 8 + uVar16 * 0xc) = auVar171._0_4_;
    }
    if ((bVar17 & 2) != 0) {
      uVar129 = extractps(auVar171,1);
      *(undefined8 *)(param_2 + 0x14 + uVar16 * 0xc) = uVar129;
    }
    if ((bVar17 & 4) != 0) {
      uVar129 = extractps(auVar171,2);
      *(undefined8 *)(param_2 + 0x20 + uVar16 * 0xc) = uVar129;
    }
    if ((char)bVar17 < '\0') {
      uVar129 = extractps(auVar171,3);
      *(undefined8 *)(param_2 + 0x2c + uVar16 * 0xc) = uVar129;
    }
  }
  return;
}

// ApplyPreSimulationTransformsAndClampVelocity_sse4 @ 140d16cf0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPreSimulationTransformsAndClampVelocity_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,longlong param_8,longlong param_9,float *param_10,
               undefined4 param_11,int param_12,int param_13,float param_14)

{
  float *pfVar1;
  undefined1 (*pauVar2) [16];
  undefined4 *puVar3;
  uint *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  byte bVar11;
  int iVar12;
  longlong lVar13;
  undefined4 *puVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  longlong unaff_RBP;
  longlong lVar18;
  byte bVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  float *pfVar23;
  byte bVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  bool bVar28;
  float fVar29;
  float fVar47;
  float fVar48;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar49;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar30;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  float fVar50;
  float fVar51;
  float fVar63;
  float fVar65;
  undefined1 auVar52 [16];
  float fVar64;
  float fVar66;
  float fVar68;
  float fVar69;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar67;
  float fVar70;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar76;
  float fVar86;
  undefined8 uVar77;
  float fVar87;
  undefined1 auVar78 [16];
  float fVar88;
  float fVar89;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar90;
  float fVar96;
  float fVar97;
  float fVar98;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  float fVar109;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  float fVar110;
  float fVar116;
  float fVar117;
  undefined1 auVar111 [16];
  float fVar118;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  float fVar119;
  float fVar120;
  float fVar127;
  float fVar129;
  undefined1 auVar121 [16];
  float fVar131;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  float fVar128;
  float fVar130;
  float fVar132;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  float fVar133;
  float fVar134;
  float fVar135;
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  float fVar153;
  float fVar160;
  float fVar161;
  undefined1 auVar154 [16];
  float fVar162;
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  float fVar170;
  float fVar171;
  float fVar172;
  float fVar173;
  float fVar174;
  float fVar175;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined1 local_128 [8];
  float fStack_120;
  float fStack_11c;
  undefined1 local_118 [16];
  undefined1 auVar136 [16];
  
  uVar22 = param_13 - param_12;
  uVar17 = uVar22 + 3;
  if (-1 < (int)uVar22) {
    uVar17 = uVar22;
  }
  iVar9 = ((uVar17 & 0xfffffffc) - uVar22) + param_13;
  if (param_12 < iVar9) {
    local_118._4_4_ = param_11;
    local_118._0_4_ = param_11;
    local_118._8_4_ = param_11;
    local_118._12_4_ = param_11;
    lVar26 = (longlong)param_12;
    unaff_RBP = lVar26 * 0xc;
    lVar10 = param_3 + 0x20;
    pfVar23 = (float *)(lVar26 * 0x10 + 0x30 + param_1);
    lVar25 = param_2 + 0x20;
    lVar21 = param_4 + 0x20;
    lVar20 = param_7 + 0x20;
    lVar15 = param_5 + 0x20;
    param_12 = param_12 << 2;
    local_128._4_4_ = param_14;
    local_128._0_4_ = param_14;
    fStack_120 = param_14;
    fStack_11c = param_14;
    do {
      auVar31 = pmulld(*(undefined1 (*) [16])(param_8 + param_12),
                       ___xmm_00000006000000060000000600000006);
      lVar18 = (longlong)auVar31._0_4_;
      lVar13 = (longlong)auVar31._4_4_;
      lVar16 = (longlong)auVar31._8_4_;
      lVar27 = (longlong)auVar31._12_4_;
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + lVar18 * 8)),
                         *(undefined4 *)(param_9 + lVar13 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + lVar16 * 8),0x20);
      auVar33 = insertps(auVar32,*(undefined4 *)(param_9 + lVar27 * 8),0x30);
      fVar89 = auVar33._4_4_;
      fVar109 = auVar33._12_4_;
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + 4 + lVar18 * 8)),
                         *(undefined4 *)(param_9 + 4 + lVar13 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + 4 + lVar16 * 8),0x20);
      auVar121 = insertps(auVar32,*(undefined4 *)(param_9 + 4 + lVar27 * 8),0x30);
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + 8 + lVar18 * 8)),
                         *(undefined4 *)(param_9 + 8 + lVar13 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + 8 + lVar16 * 8),0x20);
      auVar111 = insertps(auVar32,*(undefined4 *)(param_9 + 8 + lVar27 * 8),0x30);
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + 0xc + lVar18 * 8)),
                         *(undefined4 *)(param_9 + 0xc + lVar13 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + 0xc + lVar16 * 8),0x20);
      auVar99 = insertps(auVar32,*(undefined4 *)(param_9 + 0xc + lVar27 * 8),0x30);
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + 0x10 + lVar18 * 8)),
                         *(undefined4 *)(param_9 + 0x10 + lVar13 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + 0x10 + lVar16 * 8),0x20);
      auVar34 = insertps(auVar32,*(undefined4 *)(param_9 + 0x10 + lVar27 * 8),0x30);
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + 0x18 + lVar18 * 8)),
                         *(undefined4 *)(param_9 + 0x18 + lVar13 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + 0x18 + lVar16 * 8),0x20);
      auVar163 = insertps(auVar32,*(undefined4 *)(param_9 + 0x18 + lVar27 * 8),0x30);
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + 0x20 + lVar18 * 8)),
                         *(undefined4 *)(param_9 + 0x20 + lVar13 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + 0x20 + lVar16 * 8),0x20);
      auVar35 = insertps(auVar32,*(undefined4 *)(param_9 + 0x20 + lVar27 * 8),0x30);
      fVar170 = auVar35._0_4_;
      fVar175 = auVar35._12_4_;
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + 0x24 + lVar18 * 8)),
                         *(undefined4 *)(param_9 + 0x24 + lVar13 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + 0x24 + lVar16 * 8),0x20);
      auVar167 = insertps(auVar32,*(undefined4 *)(param_9 + 0x24 + lVar27 * 8),0x30);
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + 0x28 + lVar18 * 8)),
                         *(undefined4 *)(param_9 + 0x28 + lVar13 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + 0x28 + lVar16 * 8),0x20);
      auVar169 = insertps(auVar32,*(undefined4 *)(param_9 + 0x28 + lVar27 * 8),0x30);
      auVar32 = *(undefined1 (*) [16])(lVar10 + -0x20 + unaff_RBP);
      auVar53 = *(undefined1 (*) [16])(lVar10 + -0x10 + unaff_RBP);
      pfVar1 = (float *)(lVar10 + unaff_RBP);
      auVar78 = insertps(auVar53,auVar32,0x8c);
      fVar133 = auVar32._0_4_ * fVar170;
      fVar171 = auVar35._4_4_;
      fVar137 = auVar32._12_4_ * fVar171;
      fVar173 = auVar35._8_4_;
      fVar140 = auVar53._8_4_ * fVar173;
      fVar142 = pfVar1[1] * fVar175;
      fVar51 = auVar167._0_4_;
      fVar50 = auVar32._4_4_ * fVar51;
      fVar64 = auVar167._4_4_;
      fVar63 = auVar53._0_4_ * fVar64;
      fVar66 = auVar167._8_4_;
      fVar65 = auVar53._12_4_ * fVar66;
      fVar69 = auVar167._12_4_;
      fVar68 = pfVar1[2] * fVar69;
      fVar135 = auVar169._0_4_;
      fVar76 = auVar78._0_4_ * fVar135;
      fVar139 = auVar169._4_4_;
      fVar86 = auVar78._4_4_ * fVar139;
      fVar141 = auVar169._8_4_;
      fVar87 = *pfVar1 * fVar141;
      fVar143 = auVar169._12_4_;
      fVar88 = pfVar1[3] * fVar143;
      fVar67 = auVar33._0_4_;
      fVar70 = auVar33._8_4_;
      fVar119 = auVar121._0_4_;
      fVar127 = auVar121._4_4_;
      fVar129 = auVar121._8_4_;
      fVar131 = auVar121._12_4_;
      fVar120 = auVar111._0_4_;
      fVar128 = auVar111._4_4_;
      fVar130 = auVar111._8_4_;
      fVar132 = auVar111._12_4_;
      fVar29 = fVar67 * fVar50 - fVar119 * fVar133;
      fVar47 = fVar89 * fVar63 - fVar127 * fVar137;
      fVar48 = fVar70 * fVar65 - fVar129 * fVar140;
      fVar49 = fVar109 * fVar68 - fVar131 * fVar142;
      fVar153 = fVar119 * fVar76 - fVar120 * fVar50;
      fVar160 = fVar127 * fVar86 - fVar128 * fVar63;
      fVar161 = fVar129 * fVar87 - fVar130 * fVar65;
      fVar162 = fVar131 * fVar88 - fVar132 * fVar68;
      fVar90 = fVar120 * fVar133 - fVar67 * fVar76;
      fVar96 = fVar128 * fVar137 - fVar89 * fVar86;
      fVar97 = fVar130 * fVar140 - fVar70 * fVar87;
      fVar98 = fVar132 * fVar142 - fVar109 * fVar88;
      fVar153 = fVar153 + fVar153;
      fVar160 = fVar160 + fVar160;
      fVar161 = fVar161 + fVar161;
      fVar162 = fVar162 + fVar162;
      fVar90 = fVar90 + fVar90;
      fVar96 = fVar96 + fVar96;
      fVar97 = fVar97 + fVar97;
      fVar98 = fVar98 + fVar98;
      fVar29 = fVar29 + fVar29;
      fVar47 = fVar47 + fVar47;
      fVar48 = fVar48 + fVar48;
      fVar49 = fVar49 + fVar49;
      fVar110 = auVar99._0_4_;
      fVar116 = auVar99._4_4_;
      fVar117 = auVar99._12_4_;
      fVar118 = auVar99._8_4_;
      fVar30 = param_10[2];
      fVar134 = ((fVar67 * fVar90 - fVar153 * fVar119) + fVar110 * fVar29 + fVar76 + auVar163._0_4_)
                - fVar30;
      fVar138 = ((fVar89 * fVar96 - fVar160 * fVar127) + fVar116 * fVar47 + fVar86 + auVar163._4_4_)
                - fVar30;
      auVar136._0_8_ = CONCAT44(fVar138,fVar134);
      auVar136._8_4_ =
           ((fVar70 * fVar97 - fVar161 * fVar129) + fVar118 * fVar48 + fVar87 + auVar163._8_4_) -
           fVar30;
      auVar136._12_4_ =
           ((fVar109 * fVar98 - fVar162 * fVar131) + fVar117 * fVar49 + fVar88 + auVar163._12_4_) -
           fVar30;
      puVar14 = (undefined4 *)(param_6 + param_12);
      uVar8 = *puVar14;
      fVar87 = (float)puVar14[2];
      fVar88 = (float)puVar14[3];
      auVar78._8_4_ = fVar138;
      auVar78._0_8_ = auVar136._0_8_;
      auVar78._12_4_ = puVar14[1];
      auVar32 = insertps(ZEXT416(*(uint *)(param_9 + 0x14 + lVar18 * 8)),
                         *(undefined4 *)(param_9 + 0x14 + lVar13 * 8),0x10);
      auVar32 = insertps(auVar32,*(undefined4 *)(param_9 + 0x14 + lVar16 * 8),0x20);
      auVar33 = insertps(auVar32,*(undefined4 *)(param_9 + 0x14 + lVar27 * 8),0x30);
      local_1b8 = auVar34._0_4_;
      fStack_1b4 = auVar34._4_4_;
      fStack_1b0 = auVar34._8_4_;
      fStack_1ac = auVar34._12_4_;
      fVar76 = *param_10;
      fVar133 = ((fVar119 * fVar29 - fVar90 * fVar120) + fVar110 * fVar153 + fVar133 + local_1b8) -
                fVar76;
      fVar137 = ((fVar127 * fVar47 - fVar96 * fVar128) + fVar116 * fVar160 + fVar137 + fStack_1b4) -
                fVar76;
      auVar155._0_8_ = CONCAT44(fVar137,fVar133);
      auVar155._8_4_ =
           ((fVar129 * fVar48 - fVar97 * fVar130) + fVar118 * fVar161 + fVar140 + fStack_1b0) -
           fVar76;
      auVar155._12_4_ =
           ((fVar131 * fVar49 - fVar98 * fVar132) + fVar117 * fVar162 + fVar142 + fStack_1ac) -
           fVar76;
      fVar86 = param_10[1];
      auVar145._0_4_ =
           ((fVar120 * fVar153 - fVar29 * fVar67) + fVar110 * fVar90 + fVar50 + auVar33._0_4_) -
           fVar86;
      auVar145._4_4_ =
           ((fVar128 * fVar160 - fVar47 * fVar89) + fVar116 * fVar96 + fVar63 + auVar33._4_4_) -
           fVar86;
      auVar145._8_4_ =
           ((fVar130 * fVar161 - fVar48 * fVar70) + fVar118 * fVar97 + fVar65 + auVar33._8_4_) -
           fVar86;
      auVar145._12_4_ =
           ((fVar132 * fVar162 - fVar49 * fVar109) + fVar117 * fVar98 + fVar68 + auVar33._12_4_) -
           fVar86;
      auVar32._8_4_ = fVar137;
      auVar32._0_8_ = auVar155._0_8_;
      auVar32._12_4_ = auVar145._4_4_;
      uVar77 = CONCAT44(auVar145._0_4_,fVar133);
      *(undefined8 *)(pfVar23 + -0xc) = uVar77;
      *(ulonglong *)(pfVar23 + -10) = CONCAT44(uVar8,fVar134);
      *(longlong *)(pfVar23 + -8) = auVar32._8_8_;
      *(longlong *)(pfVar23 + -6) = auVar78._8_8_;
      pfVar23[-4] = auVar155._8_4_;
      pfVar23[-3] = auVar145._8_4_;
      pfVar23[-2] = auVar136._8_4_;
      pfVar23[-1] = fVar87;
      *pfVar23 = auVar155._12_4_;
      pfVar23[1] = auVar145._12_4_;
      pfVar23[2] = auVar136._12_4_;
      pfVar23[3] = fVar88;
      auVar53._8_4_ = auVar155._8_4_;
      auVar53._0_8_ = auVar155._0_8_;
      auVar53._12_4_ = auVar155._12_4_;
      auVar32 = insertps(auVar53,auVar145,0x30);
      auVar99._4_4_ = auVar145._8_4_;
      auVar99._0_4_ = auVar145._4_4_;
      auVar99._8_4_ = fVar134;
      auVar99._12_4_ = fVar138;
      auVar32 = insertps(auVar32,auVar136,0x20);
      puVar14 = (undefined4 *)(lVar10 + -0x20 + unaff_RBP);
      *puVar14 = auVar32._0_4_;
      puVar14[1] = auVar32._12_4_;
      puVar14[2] = auVar32._8_4_;
      puVar14[3] = auVar32._4_4_;
      auVar32 = blendps(auVar99,auVar155,4);
      puVar14 = (undefined4 *)(lVar10 + -0x10 + unaff_RBP);
      *puVar14 = auVar32._0_4_;
      puVar14[1] = auVar32._12_4_;
      puVar14[2] = auVar32._8_4_;
      puVar14[3] = auVar32._4_4_;
      pfVar1 = (float *)(lVar10 + unaff_RBP);
      *pfVar1 = auVar136._8_4_;
      pfVar1[1] = auVar155._12_4_;
      pfVar1[2] = auVar145._12_4_;
      pfVar1[3] = auVar136._12_4_;
      auVar32 = *(undefined1 (*) [16])(lVar25 + -0x20 + unaff_RBP);
      auVar53 = *(undefined1 (*) [16])(lVar25 + -0x10 + unaff_RBP);
      pfVar1 = (float *)(lVar25 + unaff_RBP);
      auVar34 = insertps(auVar53,auVar32,0x8c);
      fVar140 = auVar32._0_4_ * fVar170;
      fVar142 = auVar32._12_4_ * fVar171;
      fVar153 = auVar53._8_4_ * fVar173;
      fVar160 = pfVar1[1] * fVar175;
      fVar133 = auVar32._4_4_ * fVar51;
      fVar134 = auVar53._0_4_ * fVar64;
      fVar137 = auVar53._12_4_ * fVar66;
      fVar138 = pfVar1[2] * fVar69;
      fVar87 = fVar67 * fVar133 - fVar119 * fVar140;
      fVar88 = fVar89 * fVar134 - fVar127 * fVar142;
      fVar29 = fVar70 * fVar137 - fVar129 * fVar153;
      fVar47 = fVar109 * fVar138 - fVar131 * fVar160;
      fVar65 = auVar34._0_4_ * fVar135;
      fVar68 = auVar34._4_4_ * fVar139;
      fVar97 = *pfVar1 * fVar141;
      fVar98 = pfVar1[3] * fVar143;
      fVar161 = fVar119 * fVar65 - fVar120 * fVar133;
      fVar162 = fVar127 * fVar68 - fVar128 * fVar134;
      fVar172 = fVar129 * fVar97 - fVar130 * fVar137;
      fVar174 = fVar131 * fVar98 - fVar132 * fVar138;
      fVar48 = fVar120 * fVar140 - fVar67 * fVar65;
      fVar49 = fVar128 * fVar142 - fVar89 * fVar68;
      fVar50 = fVar130 * fVar153 - fVar70 * fVar97;
      fVar63 = fVar132 * fVar160 - fVar109 * fVar98;
      fVar161 = fVar161 + fVar161;
      fVar162 = fVar162 + fVar162;
      fVar172 = fVar172 + fVar172;
      fVar174 = fVar174 + fVar174;
      fVar48 = fVar48 + fVar48;
      fVar49 = fVar49 + fVar49;
      fVar50 = fVar50 + fVar50;
      fVar63 = fVar63 + fVar63;
      fVar87 = fVar87 + fVar87;
      fVar88 = fVar88 + fVar88;
      fVar29 = fVar29 + fVar29;
      fVar47 = fVar47 + fVar47;
      fVar90 = (fVar67 * fVar48 - fVar161 * fVar119) + fVar110 * fVar87 + fVar65;
      fVar96 = (fVar89 * fVar49 - fVar162 * fVar127) + fVar116 * fVar88 + fVar68;
      auVar167._0_8_ = CONCAT44(fVar96,fVar90);
      auVar167._8_4_ = (fVar70 * fVar50 - fVar172 * fVar129) + fVar118 * fVar29 + fVar97;
      auVar167._12_4_ = (fVar109 * fVar63 - fVar174 * fVar131) + fVar117 * fVar47 + fVar98;
      fVar97 = (fVar119 * fVar87 - fVar48 * fVar120) + fVar110 * fVar161 + fVar140;
      fVar98 = (fVar127 * fVar88 - fVar49 * fVar128) + fVar116 * fVar162 + fVar142;
      auVar154._0_8_ = CONCAT44(fVar98,fVar97);
      auVar154._8_4_ = (fVar129 * fVar29 - fVar50 * fVar130) + fVar118 * fVar172 + fVar153;
      auVar154._12_4_ = (fVar131 * fVar47 - fVar63 * fVar132) + fVar117 * fVar174 + fVar160;
      fVar65 = (fVar120 * fVar161 - fVar87 * fVar67) + fVar110 * fVar48 + fVar133;
      fVar68 = (fVar128 * fVar162 - fVar88 * fVar89) + fVar116 * fVar49 + fVar134;
      auVar144._0_8_ = CONCAT44(fVar68,fVar65);
      auVar144._8_4_ = (fVar130 * fVar172 - fVar29 * fVar70) + fVar118 * fVar50 + fVar137;
      auVar144._12_4_ = (fVar132 * fVar174 - fVar47 * fVar109) + fVar117 * fVar63 + fVar138;
      auVar32 = *(undefined1 (*) [16])(lVar21 + -0x20 + unaff_RBP);
      auVar53 = *(undefined1 (*) [16])(lVar21 + -0x10 + unaff_RBP);
      pfVar1 = (float *)(lVar21 + unaff_RBP);
      auVar34 = insertps(auVar53,auVar32,0x8c);
      fVar170 = auVar32._0_4_ * fVar170;
      fVar171 = auVar32._12_4_ * fVar171;
      fVar173 = auVar53._8_4_ * fVar173;
      fVar175 = pfVar1[1] * fVar175;
      fVar51 = auVar32._4_4_ * fVar51;
      fVar64 = auVar53._0_4_ * fVar64;
      fVar66 = auVar53._12_4_ * fVar66;
      fVar69 = pfVar1[2] * fVar69;
      fVar135 = auVar34._0_4_ * fVar135;
      fVar139 = auVar34._4_4_ * fVar139;
      fVar141 = *pfVar1 * fVar141;
      fVar143 = pfVar1[3] * fVar143;
      fVar87 = fVar67 * fVar51 - fVar119 * fVar170;
      fVar88 = fVar89 * fVar64 - fVar127 * fVar171;
      fVar29 = fVar70 * fVar66 - fVar129 * fVar173;
      fVar47 = fVar109 * fVar69 - fVar131 * fVar175;
      fVar48 = fVar119 * fVar135 - fVar120 * fVar51;
      fVar49 = fVar127 * fVar139 - fVar128 * fVar64;
      fVar50 = fVar129 * fVar141 - fVar130 * fVar66;
      fVar63 = fVar131 * fVar143 - fVar132 * fVar69;
      fVar133 = fVar120 * fVar170 - fVar67 * fVar135;
      fVar134 = fVar128 * fVar171 - fVar89 * fVar139;
      fVar137 = fVar130 * fVar173 - fVar70 * fVar141;
      fVar138 = fVar132 * fVar175 - fVar109 * fVar143;
      fVar48 = fVar48 + fVar48;
      fVar49 = fVar49 + fVar49;
      fVar50 = fVar50 + fVar50;
      fVar63 = fVar63 + fVar63;
      fVar133 = fVar133 + fVar133;
      fVar134 = fVar134 + fVar134;
      fVar137 = fVar137 + fVar137;
      fVar138 = fVar138 + fVar138;
      fVar87 = fVar87 + fVar87;
      fVar88 = fVar88 + fVar88;
      fVar29 = fVar29 + fVar29;
      fVar47 = fVar47 + fVar47;
      fVar170 = ((fVar119 * fVar87 - fVar133 * fVar120) + fVar110 * fVar48 + fVar170 + local_1b8) -
                fVar76;
      fVar171 = ((fVar127 * fVar88 - fVar134 * fVar128) + fVar116 * fVar49 + fVar171 + fStack_1b4) -
                fVar76;
      auVar122._0_8_ = CONCAT44(fVar171,fVar170);
      auVar122._8_4_ =
           ((fVar129 * fVar29 - fVar137 * fVar130) + fVar118 * fVar50 + fVar173 + fStack_1b0) -
           fVar76;
      auVar122._12_4_ =
           ((fVar131 * fVar47 - fVar138 * fVar132) + fVar117 * fVar63 + fVar175 + fStack_1ac) -
           fVar76;
      auVar168._0_4_ =
           ((fVar120 * fVar48 - fVar87 * fVar67) + fVar110 * fVar133 + fVar51 + auVar33._0_4_) -
           fVar86;
      auVar168._4_4_ =
           ((fVar128 * fVar49 - fVar88 * fVar89) + fVar116 * fVar134 + fVar64 + auVar33._4_4_) -
           fVar86;
      auVar168._8_4_ =
           ((fVar130 * fVar50 - fVar29 * fVar70) + fVar118 * fVar137 + fVar66 + auVar33._8_4_) -
           fVar86;
      auVar168._12_4_ =
           ((fVar132 * fVar63 - fVar47 * fVar109) + fVar117 * fVar138 + fVar69 + auVar33._12_4_) -
           fVar86;
      auVar164._0_4_ =
           ((fVar67 * fVar133 - fVar48 * fVar119) + fVar110 * fVar87 + fVar135 + auVar163._0_4_) -
           fVar30;
      auVar164._4_4_ =
           ((fVar89 * fVar134 - fVar49 * fVar127) + fVar116 * fVar88 + fVar139 + auVar163._4_4_) -
           fVar30;
      auVar164._8_4_ =
           ((fVar70 * fVar137 - fVar50 * fVar129) + fVar118 * fVar29 + fVar141 + auVar163._8_4_) -
           fVar30;
      auVar164._12_4_ =
           ((fVar109 * fVar138 - fVar63 * fVar131) + fVar117 * fVar47 + fVar143 + auVar163._12_4_) -
           fVar30;
      auVar33._8_4_ = auVar122._8_4_;
      auVar33._0_8_ = auVar122._0_8_;
      auVar33._12_4_ = auVar122._12_4_;
      auVar32 = insertps(auVar33,auVar168,0x30);
      auVar32 = insertps(auVar32,auVar164,0x20);
      puVar14 = (undefined4 *)(lVar21 + -0x20 + unaff_RBP);
      *puVar14 = auVar32._0_4_;
      puVar14[1] = auVar32._12_4_;
      puVar14[2] = auVar32._8_4_;
      puVar14[3] = auVar32._4_4_;
      auVar34._4_4_ = auVar168._8_4_;
      auVar34._0_4_ = auVar168._4_4_;
      auVar34._8_4_ = auVar164._0_4_;
      auVar34._12_4_ = auVar164._4_4_;
      auVar32 = blendps(auVar34,auVar122,4);
      puVar14 = (undefined4 *)(lVar21 + -0x10 + unaff_RBP);
      *puVar14 = auVar32._0_4_;
      puVar14[1] = auVar32._12_4_;
      puVar14[2] = auVar32._8_4_;
      puVar14[3] = auVar32._4_4_;
      pfVar1 = (float *)(lVar21 + unaff_RBP);
      *pfVar1 = auVar164._8_4_;
      pfVar1[1] = auVar122._12_4_;
      pfVar1[2] = auVar168._12_4_;
      pfVar1[3] = auVar164._12_4_;
      auVar32 = *(undefined1 (*) [16])(lVar20 + -0x20 + unaff_RBP);
      auVar53 = *(undefined1 (*) [16])(lVar20 + -0x10 + unaff_RBP);
      pfVar1 = (float *)(lVar20 + unaff_RBP);
      auVar33 = insertps(auVar53,auVar32,0x8c);
      auVar111._0_4_ = auVar32._0_4_ - fVar170;
      auVar111._4_4_ = auVar32._12_4_ - fVar171;
      auVar111._8_4_ = auVar53._8_4_ - auVar122._8_4_;
      auVar111._12_4_ = pfVar1[1] - auVar122._12_4_;
      auVar121._0_4_ = auVar32._4_4_ - auVar168._0_4_;
      auVar121._4_4_ = auVar53._0_4_ - auVar168._4_4_;
      auVar121._8_4_ = auVar53._12_4_ - auVar168._8_4_;
      auVar121._12_4_ = pfVar1[2] - auVar168._12_4_;
      auVar35._0_4_ = auVar33._0_4_ - auVar164._0_4_;
      auVar35._4_4_ = auVar33._4_4_ - auVar164._4_4_;
      auVar35._8_4_ = *pfVar1 - auVar164._8_4_;
      auVar35._12_4_ = pfVar1[3] - auVar164._12_4_;
      auVar53 = divps(auVar111,local_118);
      auVar33 = divps(auVar121,local_118);
      auVar32 = divps(auVar35,local_118);
      fVar88 = auVar53._12_4_;
      auVar34 = insertps(auVar53,auVar33,0x30);
      fVar170 = auVar33._12_4_;
      fVar30 = auVar32._0_4_;
      fVar76 = auVar32._4_4_;
      fVar86 = auVar32._8_4_;
      fVar87 = auVar32._12_4_;
      auVar163._0_8_ = auVar33._4_8_;
      auVar163._8_4_ = fVar30;
      auVar163._12_4_ = fVar76;
      auVar32 = insertps(auVar34,auVar32,0x20);
      puVar14 = (undefined4 *)(lVar15 + -0x20 + unaff_RBP);
      *puVar14 = auVar32._0_4_;
      puVar14[1] = auVar32._12_4_;
      puVar14[2] = auVar32._8_4_;
      puVar14[3] = auVar32._4_4_;
      auVar32 = blendps(auVar163,auVar53,4);
      puVar14 = (undefined4 *)(lVar15 + -0x10 + unaff_RBP);
      *puVar14 = auVar32._0_4_;
      puVar14[1] = auVar32._12_4_;
      puVar14[2] = auVar32._8_4_;
      puVar14[3] = auVar32._4_4_;
      pfVar1 = (float *)(lVar15 + unaff_RBP);
      *pfVar1 = fVar86;
      pfVar1[1] = fVar88;
      pfVar1[2] = fVar170;
      pfVar1[3] = fVar87;
      fVar97 = fVar97 - auVar53._0_4_;
      fVar98 = fVar98 - auVar53._4_4_;
      fVar109 = auVar154._8_4_ - auVar53._8_4_;
      fVar175 = auVar154._12_4_ - fVar88;
      fVar65 = fVar65 - auVar33._0_4_;
      fVar68 = fVar68 - auVar33._4_4_;
      fVar29 = auVar144._8_4_ - auVar33._8_4_;
      fVar89 = auVar144._12_4_ - fVar170;
      fVar90 = fVar90 - fVar30;
      fVar96 = fVar96 - fVar76;
      fVar47 = auVar167._8_4_ - fVar86;
      fVar48 = auVar167._12_4_ - fVar87;
      auVar169._0_4_ = fVar90 * fVar90 + fVar65 * fVar65 + fVar97 * fVar97;
      auVar169._4_4_ = fVar96 * fVar96 + fVar68 * fVar68 + fVar98 * fVar98;
      auVar169._8_4_ = fVar47 * fVar47 + fVar29 * fVar29 + fVar109 * fVar109;
      auVar169._12_4_ = fVar48 * fVar48 + fVar89 * fVar89 + fVar175 * fVar175;
      auVar123._4_4_ = -(uint)(param_14 < auVar169._4_4_);
      auVar123._0_4_ = -(uint)(param_14 < auVar169._0_4_);
      auVar123._8_4_ = -(uint)(param_14 < auVar169._8_4_);
      auVar123._12_4_ = -(uint)(param_14 < auVar169._12_4_);
      iVar12 = movmskps(auVar31._4_4_,auVar123);
      if (iVar12 != 0) {
        bVar11 = (char)((char)iVar12 << 4) >> 4;
        auVar32 = divps(_local_128,auVar169);
        auVar32 = sqrtps(auVar169,auVar32);
        fVar49 = auVar32._0_4_;
        fVar50 = auVar32._4_4_;
        fVar51 = auVar32._8_4_;
        fVar63 = auVar32._12_4_;
        auVar31._0_8_ = CONCAT44(auVar53._4_4_ + fVar98 * fVar50,auVar53._0_4_ + fVar97 * fVar49);
        auVar31._8_4_ = auVar53._8_4_ + fVar109 * fVar51;
        auVar31._12_4_ = fVar88 + fVar175 * fVar63;
        auVar102._8_4_ = auVar154._8_4_;
        auVar102._0_8_ = auVar154._0_8_;
        auVar102._12_4_ = auVar154._12_4_;
        bVar28 = (bVar11 & 1) != 0;
        if (bVar28) {
          auVar102._8_4_ = auVar31._8_4_;
          auVar102._0_8_ = auVar31._0_8_;
          auVar102._12_4_ = auVar31._12_4_;
        }
        auVar71._0_8_ = CONCAT44(auVar33._4_4_ + fVar68 * fVar50,auVar33._0_4_ + fVar65 * fVar49);
        auVar71._8_4_ = auVar33._8_4_ + fVar29 * fVar51;
        auVar71._12_4_ = fVar170 + fVar89 * fVar63;
        auVar36._0_8_ = CONCAT44(fVar76 + fVar96 * fVar50,fVar30 + fVar90 * fVar49);
        auVar36._8_4_ = fVar86 + fVar47 * fVar51;
        auVar36._12_4_ = fVar87 + fVar48 * fVar63;
        auVar100._8_4_ = auVar144._8_4_;
        auVar100._0_8_ = auVar144._0_8_;
        auVar100._12_4_ = auVar144._12_4_;
        auVar79._8_4_ = auVar167._8_4_;
        auVar79._0_8_ = auVar167._0_8_;
        auVar79._12_4_ = auVar167._12_4_;
        if (bVar28) {
          auVar100._8_4_ = auVar71._8_4_;
          auVar100._0_8_ = auVar71._0_8_;
          auVar100._12_4_ = auVar71._12_4_;
          auVar79._8_4_ = auVar36._8_4_;
          auVar79._0_8_ = auVar36._0_8_;
          auVar79._12_4_ = auVar36._12_4_;
          auVar32 = blendps(auVar154,auVar102,1);
          if ((bVar11 & 2) != 0) goto LAB_140d1767b;
LAB_140d175ce:
          auVar146 = blendps(auVar144,auVar100,1);
          auVar91 = blendps(auVar167,auVar79,1);
          auVar32 = blendps(auVar32,auVar32,2);
          auVar53 = auVar91;
          auVar33 = auVar146;
          if ((bVar11 & 4) == 0) goto LAB_140d17603;
LAB_140d176b9:
          auVar104._8_4_ = auVar31._8_4_;
          auVar104._0_8_ = auVar31._0_8_;
          auVar104._12_4_ = auVar31._12_4_;
          auVar33 = blendps(auVar33,auVar146,2);
          auVar147._8_4_ = auVar71._8_4_;
          auVar147._0_8_ = auVar71._0_8_;
          auVar147._12_4_ = auVar71._12_4_;
          auVar53 = blendps(auVar53,auVar91,2);
          auVar92._8_4_ = auVar36._8_4_;
          auVar92._0_8_ = auVar36._0_8_;
          auVar92._12_4_ = auVar36._12_4_;
          auVar32 = blendps(auVar32,auVar104,4);
          if (-1 < (char)bVar11) goto LAB_140d176f1;
LAB_140d17632:
          auVar33 = blendps(auVar33,auVar147,4);
          if ((char)bVar11 < '\0') goto LAB_140d1763f;
LAB_140d17702:
          auVar53 = blendps(auVar53,auVar92,4);
          auVar71 = auVar33;
        }
        else {
          auVar32 = blendps(auVar154,auVar102,1);
          if ((bVar11 & 2) == 0) goto LAB_140d175ce;
LAB_140d1767b:
          auVar103._8_4_ = auVar31._8_4_;
          auVar103._0_8_ = auVar31._0_8_;
          auVar103._12_4_ = auVar31._12_4_;
          auVar33 = blendps(auVar144,auVar100,1);
          auVar146._8_4_ = auVar71._8_4_;
          auVar146._0_8_ = auVar71._0_8_;
          auVar146._12_4_ = auVar71._12_4_;
          auVar53 = blendps(auVar167,auVar79,1);
          auVar91._8_4_ = auVar36._8_4_;
          auVar91._0_8_ = auVar36._0_8_;
          auVar91._12_4_ = auVar36._12_4_;
          auVar32 = blendps(auVar32,auVar103,2);
          if ((bVar11 & 4) != 0) goto LAB_140d176b9;
LAB_140d17603:
          auVar147 = blendps(auVar33,auVar146,2);
          auVar92 = blendps(auVar53,auVar91,2);
          auVar32 = blendps(auVar32,auVar32,4);
          auVar53 = auVar92;
          auVar33 = auVar147;
          if ((char)bVar11 < '\0') goto LAB_140d17632;
LAB_140d176f1:
          auVar31 = auVar32;
          auVar33 = blendps(auVar33,auVar147,4);
          auVar32 = auVar31;
          if (-1 < (char)bVar11) goto LAB_140d17702;
LAB_140d1763f:
          auVar53 = blendps(auVar53,auVar92,4);
        }
        if (-1 < (char)bVar11) {
          auVar36 = auVar53;
        }
        auVar154 = blendps(auVar32,auVar31,8);
        auVar144 = blendps(auVar33,auVar71,8);
        auVar167 = blendps(auVar53,auVar36,8);
      }
      auVar32 = insertps(auVar154,auVar144,0x30);
      auVar52._0_8_ = auVar144._4_8_;
      auVar52._8_4_ = auVar167._0_4_;
      auVar52._12_4_ = auVar167._4_4_;
      auVar32 = insertps(auVar32,auVar167,0x20);
      puVar14 = (undefined4 *)(lVar25 + -0x20 + unaff_RBP);
      *puVar14 = auVar32._0_4_;
      puVar14[1] = auVar32._12_4_;
      puVar14[2] = auVar32._8_4_;
      puVar14[3] = auVar32._4_4_;
      auVar32 = blendps(auVar52,auVar154,4);
      puVar14 = (undefined4 *)(lVar25 + -0x10 + unaff_RBP);
      *puVar14 = auVar32._0_4_;
      puVar14[1] = auVar32._12_4_;
      puVar14[2] = auVar32._8_4_;
      puVar14[3] = auVar32._4_4_;
      puVar14 = (undefined4 *)(lVar25 + unaff_RBP);
      *puVar14 = auVar167._8_4_;
      puVar14[1] = auVar154._12_4_;
      puVar14[2] = auVar144._12_4_;
      puVar14[3] = auVar167._12_4_;
      lVar26 = lVar26 + 4;
      lVar10 = lVar10 + 0x30;
      pfVar23 = pfVar23 + 0x10;
      lVar25 = lVar25 + 0x30;
      lVar21 = lVar21 + 0x30;
      lVar20 = lVar20 + 0x30;
      lVar15 = lVar15 + 0x30;
      param_12 = param_12 + 0x10;
    } while (lVar26 < iVar9);
    param_12 = (int)lVar26;
  }
  if (param_13 <= param_12) {
    return;
  }
  auVar46._0_4_ = param_12 + (int)__xmm_00000003000000020000000100000000;
  auVar46._4_4_ = param_12 + __xmm_00000003000000020000000100000000._4_4_;
  auVar46._8_4_ = param_12 + _UNK_150631e08;
  auVar46._12_4_ = param_12 + _UNK_150631e0c;
  bVar28 = auVar46._0_4_ < param_13;
  auVar93._0_4_ = -(uint)bVar28;
  bVar5 = auVar46._4_4_ < param_13;
  auVar93._4_4_ = -(uint)bVar5;
  bVar6 = auVar46._8_4_ < param_13;
  auVar93._8_4_ = -(uint)bVar6;
  bVar7 = auVar46._12_4_ < param_13;
  auVar93._12_4_ = -(uint)bVar7;
  lVar10 = (longlong)(param_12 * 4);
  uVar17 = movmskps((int)unaff_RBP,auVar93);
  bVar24 = (char)((byte)uVar17 << 4) >> 4;
  bVar11 = (byte)uVar17 & 9;
  if (bVar11 == 9) {
    auVar46 = *(undefined1 (*) [16])(param_8 + lVar10);
  }
  else {
    puVar4 = (uint *)(param_8 + lVar10);
    if ((uVar17 & 1) != 0) {
      auVar46 = ZEXT416(*puVar4);
    }
    if ((uVar17 & 2) != 0) {
      auVar46._0_8_ = auVar46._0_8_ & 0xffffffff | (ulonglong)puVar4[1] << 0x20;
    }
    if ((uVar17 & 4) != 0) {
      auVar46._8_8_ = auVar46._8_8_ & 0xffffffff00000000 | (ulonglong)puVar4[2];
    }
    if ((uVar17 & 8) != 0) {
      auVar46._8_8_ = auVar46._8_8_ & 0xffffffff | (ulonglong)puVar4[3] << 0x20;
    }
  }
  auVar32 = pmulld(auVar46,___xmm_00000006000000060000000600000006);
  auVar32 = auVar32 & auVar93;
  lVar25 = param_9 + (longlong)auVar32._0_4_ * 8;
  lVar20 = param_9 + (longlong)auVar32._4_4_ * 8;
  lVar15 = param_9 + (longlong)auVar32._8_4_ * 8;
  lVar21 = param_9 + (longlong)auVar32._12_4_ * 8;
  auVar53 = insertps(ZEXT416(*(uint *)(param_9 + (longlong)auVar32._0_4_ * 8)),
                     *(undefined4 *)(param_9 + (longlong)auVar32._4_4_ * 8),0x10);
  auVar53 = insertps(auVar53,*(undefined4 *)(param_9 + (longlong)auVar32._8_4_ * 8),0x20);
  auVar121 = insertps(auVar53,*(undefined4 *)(param_9 + (longlong)auVar32._12_4_ * 8),0x30);
  auVar32 = ___xmm_00000004000000040000000400000004 & auVar93;
  auVar53 = insertps(ZEXT416(*(uint *)((ulonglong)auVar32._0_4_ + lVar25)),
                     *(undefined4 *)((ulonglong)auVar32._4_4_ + lVar20),0x10);
  auVar53 = insertps(auVar53,*(undefined4 *)((ulonglong)auVar32._8_4_ + lVar15),0x20);
  auVar32 = insertps(auVar53,*(undefined4 *)((ulonglong)auVar32._12_4_ + lVar21),0x30);
  auVar53 = ___xmm_00000008000000080000000800000008 & auVar93;
  auVar31 = insertps(ZEXT416(*(uint *)((ulonglong)auVar53._0_4_ + lVar25)),
                     *(undefined4 *)((ulonglong)auVar53._4_4_ + lVar20),0x10);
  auVar31 = insertps(auVar31,*(undefined4 *)((ulonglong)auVar53._8_4_ + lVar15),0x20);
  auVar35 = insertps(auVar31,*(undefined4 *)((ulonglong)auVar53._12_4_ + lVar21),0x30);
  auVar53 = ___xmm_0000000c0000000c0000000c0000000c & auVar93;
  auVar31 = insertps(ZEXT416(*(uint *)((ulonglong)auVar53._0_4_ + lVar25)),
                     *(undefined4 *)((ulonglong)auVar53._4_4_ + lVar20),0x10);
  auVar31 = insertps(auVar31,*(undefined4 *)((ulonglong)auVar53._8_4_ + lVar15),0x20);
  auVar167 = insertps(auVar31,*(undefined4 *)((ulonglong)auVar53._12_4_ + lVar21),0x30);
  auVar53 = ___xmm_00000010000000100000001000000010 & auVar93;
  auVar31 = insertps(ZEXT416(*(uint *)((ulonglong)auVar53._0_4_ + lVar25)),
                     *(undefined4 *)((ulonglong)auVar53._4_4_ + lVar20),0x10);
  auVar31 = insertps(auVar31,*(undefined4 *)((ulonglong)auVar53._8_4_ + lVar15),0x20);
  auVar34 = insertps(auVar31,*(undefined4 *)((ulonglong)auVar53._12_4_ + lVar21),0x30);
  auVar53 = ___xmm_00000014000000140000001400000014 & auVar93;
  auVar31 = insertps(ZEXT416(*(uint *)((ulonglong)auVar53._0_4_ + lVar25)),
                     *(undefined4 *)((ulonglong)auVar53._4_4_ + lVar20),0x10);
  auVar31 = insertps(auVar31,*(undefined4 *)((ulonglong)auVar53._8_4_ + lVar15),0x20);
  auVar99 = insertps(auVar31,*(undefined4 *)((ulonglong)auVar53._12_4_ + lVar21),0x30);
  auVar53 = ___xmm_00000018000000180000001800000018 & auVar93;
  auVar31 = insertps(ZEXT416(*(uint *)((ulonglong)auVar53._0_4_ + lVar25)),
                     *(undefined4 *)((ulonglong)auVar53._4_4_ + lVar20),0x10);
  auVar31 = insertps(auVar31,*(undefined4 *)((ulonglong)auVar53._8_4_ + lVar15),0x20);
  auVar111 = insertps(auVar31,*(undefined4 *)((ulonglong)auVar53._12_4_ + lVar21),0x30);
  auVar53 = ___xmm_00000020000000200000002000000020 & auVar93;
  auVar31 = insertps(ZEXT416(*(uint *)((ulonglong)auVar53._0_4_ + lVar25)),
                     *(undefined4 *)((ulonglong)auVar53._4_4_ + lVar20),0x10);
  auVar31 = insertps(auVar31,*(undefined4 *)((ulonglong)auVar53._8_4_ + lVar15),0x20);
  auVar78 = insertps(auVar31,*(undefined4 *)((ulonglong)auVar53._12_4_ + lVar21),0x30);
  auVar53 = ___xmm_00000024000000240000002400000024 & auVar93;
  auVar31 = insertps(ZEXT416(*(uint *)((ulonglong)auVar53._0_4_ + lVar25)),
                     *(undefined4 *)((ulonglong)auVar53._4_4_ + lVar20),0x10);
  auVar31 = insertps(auVar31,*(undefined4 *)((ulonglong)auVar53._8_4_ + lVar15),0x20);
  auVar53 = insertps(auVar31,*(undefined4 *)((ulonglong)auVar53._12_4_ + lVar21),0x30);
  auVar31 = ___xmm_00000028000000280000002800000028 & auVar93;
  auVar33 = insertps(ZEXT416(*(uint *)((ulonglong)auVar31._0_4_ + lVar25)),
                     *(undefined4 *)((ulonglong)auVar31._4_4_ + lVar20),0x10);
  auVar33 = insertps(auVar33,*(undefined4 *)((ulonglong)auVar31._8_4_ + lVar15),0x20);
  auVar31 = insertps(auVar33,*(undefined4 *)((ulonglong)auVar31._12_4_ + lVar21),0x30);
  lVar25 = (longlong)param_12;
  pauVar2 = (undefined1 (*) [16])(param_3 + lVar25 * 0xc);
  bVar19 = ~bVar24;
  if ((bVar19 & 0xf) == 0) {
    auVar33 = *pauVar2;
    auVar163 = pauVar2[1];
    auVar38._0_4_ = auVar33._0_4_;
    auVar169 = insertps(auVar163,auVar33,0x8c);
    auVar38._4_4_ = auVar33._12_4_;
    auVar38._8_4_ = auVar163._8_4_;
    auVar38._12_4_ = *(undefined4 *)(pauVar2[2] + 4);
    auVar55._4_4_ = auVar163._0_4_;
    auVar55._0_4_ = auVar33._4_4_;
    auVar55._8_4_ = auVar163._12_4_;
    auVar55._12_4_ = *(undefined4 *)(pauVar2[2] + 8);
    auVar81._0_8_ = auVar169._0_8_;
    auVar81._8_4_ = *(undefined4 *)pauVar2[2];
    auVar81._12_4_ = *(undefined4 *)(pauVar2[2] + 0xc);
  }
  else {
    auVar37._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar93._0_4_;
    auVar37._4_4_ = _UNK_150b50da4 & auVar93._4_4_;
    auVar37._8_4_ = _UNK_150b50da8 & auVar93._8_4_;
    auVar37._12_4_ = _UNK_150b50dac & auVar93._12_4_;
    lVar20 = extractps(auVar37,1);
    lVar21 = extractps(auVar37,2);
    lVar15 = extractps(auVar37,3);
    auVar33 = insertps(ZEXT416(*(uint *)*pauVar2),*(undefined4 *)(*pauVar2 + lVar20),0x10);
    auVar33 = insertps(auVar33,*(undefined4 *)(*pauVar2 + lVar21),0x20);
    auVar38 = insertps(auVar33,*(undefined4 *)(*pauVar2 + lVar15),0x30);
    auVar54._4_4_ = _UNK_150b50db4;
    auVar54._0_4_ = ___xmm_000000280000001c0000001000000004;
    auVar54._8_4_ = _UNK_150b50db8;
    auVar54._12_4_ = _UNK_150b50dbc;
    auVar54 = auVar54 & auVar93;
    auVar33 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar54._0_4_)),
                       *(undefined4 *)(*pauVar2 + auVar54._4_4_),0x10);
    auVar33 = insertps(auVar33,*(undefined4 *)(*pauVar2 + auVar54._8_4_),0x20);
    auVar55 = insertps(auVar33,*(undefined4 *)(*pauVar2 + auVar54._12_4_),0x30);
    auVar80._4_4_ = _UNK_150b50dc4;
    auVar80._0_4_ = ___xmm_0000002c000000200000001400000008;
    auVar80._8_4_ = _UNK_150b50dc8;
    auVar80._12_4_ = _UNK_150b50dcc;
    auVar80 = auVar80 & auVar93;
    auVar33 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar80._0_4_)),
                       *(undefined4 *)(*pauVar2 + auVar80._4_4_),0x10);
    auVar33 = insertps(auVar33,*(undefined4 *)(*pauVar2 + auVar80._8_4_),0x20);
    auVar81 = insertps(auVar33,*(undefined4 *)(*pauVar2 + auVar80._12_4_),0x30);
  }
  fVar68 = auVar78._0_4_;
  fVar30 = auVar38._0_4_ * fVar68;
  fVar69 = auVar78._4_4_;
  fVar76 = auVar38._4_4_ * fVar69;
  fVar90 = auVar78._8_4_;
  fVar86 = auVar38._8_4_ * fVar90;
  fVar171 = auVar78._12_4_;
  fVar87 = auVar38._12_4_ * fVar171;
  local_1c8 = auVar53._0_4_;
  fStack_1c4 = auVar53._4_4_;
  fStack_1c0 = auVar53._8_4_;
  fStack_1bc = auVar53._12_4_;
  fVar88 = auVar55._0_4_ * local_1c8;
  fVar170 = auVar55._4_4_ * fStack_1c4;
  fVar29 = auVar55._8_4_ * fStack_1c0;
  fVar89 = auVar55._12_4_ * fStack_1bc;
  local_1d8 = auVar31._0_4_;
  fStack_1d4 = auVar31._4_4_;
  fStack_1d0 = auVar31._8_4_;
  fStack_1cc = auVar31._12_4_;
  fVar49 = auVar81._0_4_ * local_1d8;
  fVar50 = auVar81._4_4_ * fStack_1d4;
  fVar63 = auVar81._8_4_ * fStack_1d0;
  fVar65 = auVar81._12_4_ * fStack_1cc;
  fVar127 = auVar121._0_4_;
  fVar129 = auVar121._4_4_;
  fVar131 = auVar121._8_4_;
  fVar133 = auVar121._12_4_;
  local_1b8 = auVar32._0_4_;
  fStack_1b4 = auVar32._4_4_;
  fStack_1b0 = auVar32._8_4_;
  fStack_1ac = auVar32._12_4_;
  fVar47 = auVar35._0_4_;
  fVar48 = auVar35._4_4_;
  fVar109 = auVar35._8_4_;
  fVar175 = auVar35._12_4_;
  fVar96 = fVar127 * fVar88 - local_1b8 * fVar30;
  fVar173 = fVar129 * fVar170 - fStack_1b4 * fVar76;
  fVar97 = fVar131 * fVar29 - fStack_1b0 * fVar86;
  fVar98 = fVar133 * fVar89 - fStack_1ac * fVar87;
  fVar120 = local_1b8 * fVar49 - fVar47 * fVar88;
  fVar128 = fStack_1b4 * fVar50 - fVar48 * fVar170;
  fVar130 = fStack_1b0 * fVar63 - fVar109 * fVar29;
  fVar132 = fStack_1ac * fVar65 - fVar175 * fVar89;
  fVar110 = fVar47 * fVar30 - fVar127 * fVar49;
  fVar116 = fVar48 * fVar76 - fVar129 * fVar50;
  fVar117 = fVar109 * fVar86 - fVar131 * fVar63;
  fVar118 = fVar175 * fVar87 - fVar133 * fVar65;
  fVar120 = fVar120 + fVar120;
  fVar128 = fVar128 + fVar128;
  fVar130 = fVar130 + fVar130;
  fVar132 = fVar132 + fVar132;
  fVar110 = fVar110 + fVar110;
  fVar116 = fVar116 + fVar116;
  fVar117 = fVar117 + fVar117;
  fVar118 = fVar118 + fVar118;
  fVar96 = fVar96 + fVar96;
  fVar173 = fVar173 + fVar173;
  fVar97 = fVar97 + fVar97;
  fVar98 = fVar98 + fVar98;
  fVar134 = auVar167._0_4_;
  fVar135 = auVar167._4_4_;
  fVar137 = auVar167._12_4_;
  fVar119 = auVar167._8_4_;
  auVar148._0_4_ = fVar134 * fVar120 + fVar30;
  auVar148._4_4_ = fVar135 * fVar128 + fVar76;
  auVar148._8_4_ = fVar119 * fVar130 + fVar86;
  auVar148._12_4_ = fVar137 * fVar132 + fVar87;
  fVar87 = (local_1b8 * fVar96 - fVar110 * fVar47) + auVar148._0_4_;
  fVar51 = (fStack_1b4 * fVar173 - fVar116 * fVar48) + auVar148._4_4_;
  fVar64 = (fStack_1b0 * fVar97 - fVar117 * fVar109) + auVar148._8_4_;
  fVar66 = (fStack_1ac * fVar98 - fVar118 * fVar175) + auVar148._12_4_;
  local_158 = auVar34._0_4_;
  fStack_154 = auVar34._4_4_;
  fStack_150 = auVar34._8_4_;
  fStack_14c = auVar34._12_4_;
  fVar30 = *param_10;
  fVar76 = param_10[1];
  fVar86 = param_10[2];
  if (bVar11 == 9) {
    auVar148 = *(undefined1 (*) [16])(param_6 + lVar10);
  }
  else {
    puVar4 = (uint *)(param_6 + lVar10);
    if ((uVar17 & 1) != 0) {
      auVar148 = ZEXT416(*puVar4);
    }
    if ((uVar17 & 2) != 0) {
      auVar148 = insertps(auVar148,puVar4[1],0x10);
    }
    if ((uVar17 & 4) != 0) {
      auVar148 = insertps(auVar148,puVar4[2],0x20);
    }
    if ((uVar17 & 8) != 0) {
      auVar148 = insertps(auVar148,puVar4[3],0x30);
    }
  }
  pfVar23 = (float *)(param_1 + lVar25 * 0x10);
  auVar82._0_4_ = (fVar87 + local_158) - fVar30;
  auVar82._4_4_ = (fVar51 + fStack_154) - fVar30;
  auVar82._8_4_ = (fVar64 + fStack_150) - fVar30;
  auVar82._12_4_ = (fVar66 + fStack_14c) - fVar30;
  auVar56._0_4_ =
       ((fVar47 * fVar120 - fVar96 * fVar127) + fVar134 * fVar110 + fVar88 + auVar99._0_4_) - fVar76
  ;
  auVar56._4_4_ =
       ((fVar48 * fVar128 - fVar173 * fVar129) + fVar135 * fVar116 + fVar170 + auVar99._4_4_) -
       fVar76;
  auVar56._8_4_ =
       ((fVar109 * fVar130 - fVar97 * fVar131) + fVar119 * fVar117 + fVar29 + auVar99._8_4_) -
       fVar76;
  auVar56._12_4_ =
       ((fVar175 * fVar132 - fVar98 * fVar133) + fVar137 * fVar118 + fVar89 + auVar99._12_4_) -
       fVar76;
  auVar39._0_4_ =
       ((fVar127 * fVar110 - fVar120 * local_1b8) + fVar134 * fVar96 + fVar49 + auVar111._0_4_) -
       fVar86;
  auVar39._4_4_ =
       ((fVar129 * fVar116 - fVar128 * fStack_1b4) + fVar135 * fVar173 + fVar50 + auVar111._4_4_) -
       fVar86;
  auVar39._8_4_ =
       ((fVar131 * fVar117 - fVar130 * fStack_1b0) + fVar119 * fVar97 + fVar63 + auVar111._8_4_) -
       fVar86;
  auVar39._12_4_ =
       ((fVar133 * fVar118 - fVar132 * fStack_1ac) + fVar137 * fVar98 + fVar65 + auVar111._12_4_) -
       fVar86;
  if ((bVar19 & 0xf) == 0) {
    uVar77 = CONCAT44(auVar56._0_4_,auVar82._0_4_);
    *(undefined8 *)pfVar23 = uVar77;
    *(ulonglong *)(pfVar23 + 2) = CONCAT44(auVar148._0_4_,auVar39._0_4_);
    pfVar23[4] = auVar82._4_4_;
    pfVar23[5] = auVar56._4_4_;
    pfVar23[6] = auVar39._4_4_;
    pfVar23[7] = auVar148._4_4_;
    pfVar23[8] = auVar82._8_4_;
    pfVar23[9] = auVar56._8_4_;
    pfVar23[10] = auVar39._8_4_;
    pfVar23[0xb] = auVar148._8_4_;
    pfVar23[0xc] = auVar82._12_4_;
    pfVar23[0xd] = auVar56._12_4_;
    pfVar23[0xe] = auVar39._12_4_;
    pfVar23[0xf] = auVar148._12_4_;
    auVar105._4_4_ = auVar82._4_4_;
    auVar105._0_4_ = auVar82._0_4_;
    auVar105._8_4_ = auVar82._8_4_;
    auVar105._12_4_ = auVar82._12_4_;
    auVar32 = insertps(auVar105,auVar56,0x30);
    auVar112._4_4_ = auVar56._8_4_;
    auVar112._0_4_ = auVar56._4_4_;
    auVar112._8_4_ = auVar39._0_4_;
    auVar112._12_4_ = auVar39._4_4_;
    auVar32 = insertps(auVar32,auVar39,0x20);
    *(int *)*pauVar2 = auVar32._0_4_;
    *(int *)(*pauVar2 + 4) = auVar32._12_4_;
    *(int *)(*pauVar2 + 8) = auVar32._8_4_;
    *(int *)(*pauVar2 + 0xc) = auVar32._4_4_;
    auVar32 = blendps(auVar112,auVar82,4);
    *(int *)pauVar2[1] = auVar32._0_4_;
    *(int *)(pauVar2[1] + 4) = auVar32._12_4_;
    *(int *)(pauVar2[1] + 8) = auVar32._8_4_;
    *(int *)(pauVar2[1] + 0xc) = auVar32._4_4_;
    *(float *)pauVar2[2] = auVar39._8_4_;
    *(float *)(pauVar2[2] + 4) = auVar82._12_4_;
    *(float *)(pauVar2[2] + 8) = auVar56._12_4_;
    *(float *)(pauVar2[2] + 0xc) = auVar39._12_4_;
    puVar14 = (undefined4 *)(param_2 + lVar25 * 0xc);
    auVar32 = *(undefined1 (*) [16])(param_2 + lVar25 * 0xc);
    auVar53 = *(undefined1 (*) [16])(param_2 + 0x10 + lVar25 * 0xc);
    puVar3 = (undefined4 *)(param_2 + 0x20 + lVar25 * 0xc);
    auVar165._0_4_ = auVar32._0_4_;
    auVar31 = insertps(auVar53,auVar32,0x8c);
    auVar165._4_4_ = auVar32._12_4_;
    auVar165._8_4_ = auVar53._8_4_;
    auVar165._12_4_ = puVar3[1];
    auVar156._4_4_ = auVar53._0_4_;
    auVar156._0_4_ = auVar32._4_4_;
    auVar156._8_4_ = auVar53._12_4_;
    auVar156._12_4_ = puVar3[2];
    auVar149._0_8_ = auVar31._0_8_;
    auVar149._8_4_ = *puVar3;
    auVar149._12_4_ = puVar3[3];
  }
  else {
    if ((bVar24 & 1) != 0) {
      *pfVar23 = auVar82._0_4_;
    }
    if ((bVar24 & 2) != 0) {
      uVar77 = extractps(auVar82,1);
      *(undefined8 *)(pfVar23 + 4) = uVar77;
    }
    if ((bVar24 & 4) != 0) {
      uVar77 = extractps(auVar82,2);
      *(undefined8 *)(pfVar23 + 8) = uVar77;
    }
    if ((char)bVar24 < '\0') {
      uVar77 = extractps(auVar82,3);
      *(undefined8 *)(pfVar23 + 0xc) = uVar77;
    }
    if ((bVar24 & 1) != 0) {
      pfVar23[1] = auVar56._0_4_;
    }
    if ((bVar24 & 2) != 0) {
      uVar77 = extractps(auVar56,1);
      *(undefined8 *)(pfVar23 + 5) = uVar77;
    }
    if ((bVar24 & 4) != 0) {
      uVar77 = extractps(auVar56,2);
      *(undefined8 *)(pfVar23 + 9) = uVar77;
    }
    if ((char)bVar24 < '\0') {
      uVar77 = extractps(auVar56,3);
      *(undefined8 *)(pfVar23 + 0xd) = uVar77;
    }
    if ((bVar24 & 1) != 0) {
      pfVar23[2] = auVar39._0_4_;
    }
    if ((bVar24 & 2) != 0) {
      uVar77 = extractps(auVar39,1);
      *(undefined8 *)(pfVar23 + 6) = uVar77;
    }
    if ((bVar24 & 4) != 0) {
      uVar77 = extractps(auVar39,2);
      *(undefined8 *)(pfVar23 + 10) = uVar77;
    }
    if ((char)bVar24 < '\0') {
      uVar77 = extractps(auVar39,3);
      *(undefined8 *)(pfVar23 + 0xe) = uVar77;
    }
    if ((bVar24 & 1) != 0) {
      pfVar23[3] = auVar148._0_4_;
    }
    if ((bVar24 & 2) != 0) {
      uVar77 = extractps(auVar148,1);
      *(undefined8 *)(pfVar23 + 7) = uVar77;
    }
    if ((bVar24 & 4) != 0) {
      uVar77 = extractps(auVar148,2);
      *(undefined8 *)(pfVar23 + 0xb) = uVar77;
    }
    if ((char)bVar24 < '\0') {
      uVar77 = extractps(auVar148,3);
      *(undefined8 *)(pfVar23 + 0xf) = uVar77;
    }
    if ((bVar24 & 1) != 0) {
      *(float *)*pauVar2 = auVar82._0_4_;
    }
    if ((bVar24 & 2) != 0) {
      uVar77 = extractps(auVar82,1);
      *(undefined8 *)(*pauVar2 + 0xc) = uVar77;
    }
    if ((bVar24 & 4) != 0) {
      uVar77 = extractps(auVar82,2);
      *(undefined8 *)(pauVar2[1] + 8) = uVar77;
    }
    if ((char)bVar24 < '\0') {
      uVar77 = extractps(auVar82,3);
      *(undefined8 *)(pauVar2[2] + 4) = uVar77;
    }
    if ((bVar24 & 1) != 0) {
      *(float *)(*pauVar2 + 4) = auVar56._0_4_;
    }
    if ((bVar24 & 2) != 0) {
      uVar77 = extractps(auVar56,1);
      *(undefined8 *)pauVar2[1] = uVar77;
    }
    if ((bVar24 & 4) != 0) {
      uVar77 = extractps(auVar56,2);
      *(undefined8 *)(pauVar2[1] + 0xc) = uVar77;
    }
    if ((char)bVar24 < '\0') {
      uVar77 = extractps(auVar56,3);
      *(undefined8 *)(pauVar2[2] + 8) = uVar77;
    }
    if ((bVar24 & 1) != 0) {
      *(float *)(*pauVar2 + 8) = auVar39._0_4_;
    }
    if ((bVar24 & 2) != 0) {
      uVar77 = extractps(auVar39,1);
      *(undefined8 *)(pauVar2[1] + 4) = uVar77;
    }
    if ((bVar24 & 4) != 0) {
      uVar77 = extractps(auVar39,2);
      *(undefined8 *)pauVar2[2] = uVar77;
    }
    if ((char)bVar24 < '\0') {
      uVar77 = extractps(auVar39,3);
      *(undefined8 *)(pauVar2[2] + 0xc) = uVar77;
    }
    auVar40._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar93._0_4_;
    auVar40._4_4_ = _UNK_150b50da4 & auVar93._4_4_;
    auVar40._8_4_ = _UNK_150b50da8 & auVar93._8_4_;
    auVar40._12_4_ = _UNK_150b50dac & auVar93._12_4_;
    lVar10 = extractps(auVar40,1);
    lVar20 = extractps(auVar40,2);
    lVar15 = extractps(auVar40,3);
    puVar14 = (undefined4 *)(param_2 + lVar25 * 0xc);
    auVar32 = insertps(ZEXT416(*(uint *)(param_2 + lVar25 * 0xc)),
                       *(undefined4 *)(lVar10 + (longlong)puVar14),0x10);
    auVar32 = insertps(auVar32,*(undefined4 *)(lVar20 + (longlong)puVar14),0x20);
    auVar165 = insertps(auVar32,*(undefined4 *)(lVar15 + (longlong)puVar14),0x30);
    auVar41._4_4_ = _UNK_150b50db4;
    auVar41._0_4_ = ___xmm_000000280000001c0000001000000004;
    auVar41._8_4_ = _UNK_150b50db8;
    auVar41._12_4_ = _UNK_150b50dbc;
    auVar41 = auVar41 & auVar93;
    auVar32 = insertps(ZEXT416(*(uint *)((ulonglong)auVar41._0_4_ + (longlong)puVar14)),
                       *(undefined4 *)((ulonglong)auVar41._4_4_ + (longlong)puVar14),0x10);
    auVar32 = insertps(auVar32,*(undefined4 *)((ulonglong)auVar41._8_4_ + (longlong)puVar14),0x20);
    auVar156 = insertps(auVar32,*(undefined4 *)((ulonglong)auVar41._12_4_ + (longlong)puVar14),0x30)
    ;
    auVar42._4_4_ = _UNK_150b50dc4;
    auVar42._0_4_ = ___xmm_0000002c000000200000001400000008;
    auVar42._8_4_ = _UNK_150b50dc8;
    auVar42._12_4_ = _UNK_150b50dcc;
    auVar42 = auVar42 & auVar93;
    auVar32 = insertps(ZEXT416(*(uint *)((ulonglong)auVar42._0_4_ + (longlong)puVar14)),
                       *(undefined4 *)((ulonglong)auVar42._4_4_ + (longlong)puVar14),0x10);
    auVar32 = insertps(auVar32,*(undefined4 *)((ulonglong)auVar42._8_4_ + (longlong)puVar14),0x20);
    auVar149 = insertps(auVar32,*(undefined4 *)((ulonglong)auVar42._12_4_ + (longlong)puVar14),0x30)
    ;
  }
  fVar120 = auVar165._0_4_ * fVar68;
  fVar128 = auVar165._4_4_ * fVar69;
  fVar130 = auVar165._8_4_ * fVar90;
  fVar132 = auVar165._12_4_ * fVar171;
  fVar110 = auVar156._0_4_ * local_1c8;
  fVar116 = auVar156._4_4_ * fStack_1c4;
  fVar117 = auVar156._8_4_ * fStack_1c0;
  fVar118 = auVar156._12_4_ * fStack_1bc;
  fVar96 = auVar149._0_4_ * local_1d8;
  fVar173 = auVar149._4_4_ * fStack_1d4;
  fVar97 = auVar149._8_4_ * fStack_1d0;
  fVar98 = auVar149._12_4_ * fStack_1cc;
  fVar87 = fVar127 * fVar110 - local_1b8 * fVar120;
  fVar88 = fVar129 * fVar116 - fStack_1b4 * fVar128;
  fVar170 = fVar131 * fVar117 - fStack_1b0 * fVar130;
  fVar29 = fVar133 * fVar118 - fStack_1ac * fVar132;
  fVar89 = local_1b8 * fVar96 - fVar47 * fVar110;
  fVar49 = fStack_1b4 * fVar173 - fVar48 * fVar116;
  fVar50 = fStack_1b0 * fVar97 - fVar109 * fVar117;
  fVar51 = fStack_1ac * fVar98 - fVar175 * fVar118;
  fVar63 = fVar47 * fVar120 - fVar127 * fVar96;
  fVar64 = fVar48 * fVar128 - fVar129 * fVar173;
  fVar65 = fVar109 * fVar130 - fVar131 * fVar97;
  fVar66 = fVar175 * fVar132 - fVar133 * fVar98;
  fVar89 = fVar89 + fVar89;
  fVar49 = fVar49 + fVar49;
  fVar50 = fVar50 + fVar50;
  fVar51 = fVar51 + fVar51;
  fVar63 = fVar63 + fVar63;
  fVar64 = fVar64 + fVar64;
  fVar65 = fVar65 + fVar65;
  fVar66 = fVar66 + fVar66;
  fVar87 = fVar87 + fVar87;
  fVar88 = fVar88 + fVar88;
  fVar170 = fVar170 + fVar170;
  fVar29 = fVar29 + fVar29;
  pauVar2 = (undefined1 (*) [16])(param_4 + lVar25 * 0xc);
  if ((bVar19 & 0xf) == 0) {
    auVar32 = *pauVar2;
    auVar53 = pauVar2[1];
    auVar57._0_4_ = auVar32._0_4_;
    auVar31 = insertps(auVar53,auVar32,0x8c);
    auVar57._4_4_ = auVar32._12_4_;
    auVar57._8_4_ = auVar53._8_4_;
    auVar57._12_4_ = *(undefined4 *)(pauVar2[2] + 4);
    auVar83._4_4_ = auVar53._0_4_;
    auVar83._0_4_ = auVar32._4_4_;
    auVar83._8_4_ = auVar53._12_4_;
    auVar83._12_4_ = *(undefined4 *)(pauVar2[2] + 8);
    auVar43._0_8_ = auVar31._0_8_;
    auVar43._8_4_ = *(undefined4 *)pauVar2[2];
    auVar43._12_4_ = *(undefined4 *)(pauVar2[2] + 0xc);
  }
  else {
    auVar32 = insertps(ZEXT416(*(uint *)*pauVar2),
                       *(undefined4 *)(*pauVar2 + (_UNK_150b50da4 & auVar93._4_4_)),0x10);
    auVar32 = insertps(auVar32,*(undefined4 *)(*pauVar2 + (_UNK_150b50da8 & auVar93._8_4_)),0x20);
    auVar57 = insertps(auVar32,*(undefined4 *)(*pauVar2 + (_UNK_150b50dac & auVar93._12_4_)),0x30);
    auVar32 = insertps(ZEXT416(*(uint *)(*pauVar2 +
                                        (___xmm_000000280000001c0000001000000004 & auVar93._0_4_))),
                       *(undefined4 *)(*pauVar2 + (_UNK_150b50db4 & auVar93._4_4_)),0x10);
    auVar32 = insertps(auVar32,*(undefined4 *)(*pauVar2 + (_UNK_150b50db8 & auVar93._8_4_)),0x20);
    auVar83 = insertps(auVar32,*(undefined4 *)(*pauVar2 + (_UNK_150b50dbc & auVar93._12_4_)),0x30);
    auVar32 = insertps(ZEXT416(*(uint *)(*pauVar2 +
                                        (___xmm_0000002c000000200000001400000008 & auVar93._0_4_))),
                       *(undefined4 *)(*pauVar2 + (_UNK_150b50dc4 & auVar93._4_4_)),0x10);
    auVar32 = insertps(auVar32,*(undefined4 *)(*pauVar2 + (_UNK_150b50dc8 & auVar93._8_4_)),0x20);
    auVar43 = insertps(auVar32,*(undefined4 *)(*pauVar2 + (_UNK_150b50dcc & auVar93._12_4_)),0x30);
  }
  fVar68 = fVar68 * auVar57._0_4_;
  fVar69 = fVar69 * auVar57._4_4_;
  fVar90 = fVar90 * auVar57._8_4_;
  fVar171 = fVar171 * auVar57._12_4_;
  local_1c8 = local_1c8 * auVar83._0_4_;
  fStack_1c4 = fStack_1c4 * auVar83._4_4_;
  fStack_1c0 = fStack_1c0 * auVar83._8_4_;
  fStack_1bc = fStack_1bc * auVar83._12_4_;
  local_1d8 = local_1d8 * auVar43._0_4_;
  fStack_1d4 = fStack_1d4 * auVar43._4_4_;
  fStack_1d0 = fStack_1d0 * auVar43._8_4_;
  fStack_1cc = fStack_1cc * auVar43._12_4_;
  fVar138 = fVar127 * local_1c8 - local_1b8 * fVar68;
  fVar139 = fVar129 * fStack_1c4 - fStack_1b4 * fVar69;
  fVar140 = fVar131 * fStack_1c0 - fStack_1b0 * fVar90;
  fVar141 = fVar133 * fStack_1bc - fStack_1ac * fVar171;
  fVar153 = local_1b8 * local_1d8 - fVar47 * local_1c8;
  fVar160 = fStack_1b4 * fStack_1d4 - fVar48 * fStack_1c4;
  fVar161 = fStack_1b0 * fStack_1d0 - fVar109 * fStack_1c0;
  fVar162 = fStack_1ac * fStack_1cc - fVar175 * fStack_1bc;
  fVar142 = fVar47 * fVar68 - fVar127 * local_1d8;
  fVar143 = fVar48 * fVar69 - fVar129 * fStack_1d4;
  fVar67 = fVar109 * fVar90 - fVar131 * fStack_1d0;
  fVar70 = fVar175 * fVar171 - fVar133 * fStack_1cc;
  fVar153 = fVar153 + fVar153;
  fVar160 = fVar160 + fVar160;
  fVar161 = fVar161 + fVar161;
  fVar162 = fVar162 + fVar162;
  fVar142 = fVar142 + fVar142;
  fVar143 = fVar143 + fVar143;
  fVar67 = fVar67 + fVar67;
  fVar70 = fVar70 + fVar70;
  fVar138 = fVar138 + fVar138;
  fVar139 = fVar139 + fVar139;
  fVar140 = fVar140 + fVar140;
  fVar141 = fVar141 + fVar141;
  fVar68 = (local_158 + (local_1b8 * fVar138 - fVar142 * fVar47) + fVar134 * fVar153 + fVar68) -
           fVar30;
  fVar69 = (fStack_154 + (fStack_1b4 * fVar139 - fVar143 * fVar48) + fVar135 * fVar160 + fVar69) -
           fVar30;
  auVar84._0_8_ = CONCAT44(fVar69,fVar68);
  auVar84._8_4_ =
       (fStack_150 + (fStack_1b0 * fVar140 - fVar67 * fVar109) + fVar119 * fVar161 + fVar90) -
       fVar30;
  auVar84._12_4_ =
       (fStack_14c + (fStack_1ac * fVar141 - fVar70 * fVar175) + fVar137 * fVar162 + fVar171) -
       fVar30;
  auVar72._0_4_ =
       (auVar99._0_4_ + (fVar47 * fVar153 - fVar138 * fVar127) + fVar134 * fVar142 + local_1c8) -
       fVar76;
  auVar72._4_4_ =
       (auVar99._4_4_ + (fVar48 * fVar160 - fVar139 * fVar129) + fVar135 * fVar143 + fStack_1c4) -
       fVar76;
  auVar72._8_4_ =
       (auVar99._8_4_ + (fVar109 * fVar161 - fVar140 * fVar131) + fVar119 * fVar67 + fStack_1c0) -
       fVar76;
  auVar72._12_4_ =
       (auVar99._12_4_ + (fVar175 * fVar162 - fVar141 * fVar133) + fVar137 * fVar70 + fStack_1bc) -
       fVar76;
  auVar94._0_4_ =
       (auVar111._0_4_ + (fVar127 * fVar142 - fVar153 * local_1b8) + fVar134 * fVar138 + local_1d8)
       - fVar86;
  auVar94._4_4_ =
       (auVar111._4_4_ + (fVar129 * fVar143 - fVar160 * fStack_1b4) + fVar135 * fVar139 + fStack_1d4
       ) - fVar86;
  auVar94._8_4_ =
       (auVar111._8_4_ + (fVar131 * fVar67 - fVar161 * fStack_1b0) + fVar119 * fVar140 + fStack_1d0)
       - fVar86;
  auVar94._12_4_ =
       (auVar111._12_4_ + (fVar133 * fVar70 - fVar162 * fStack_1ac) + fVar137 * fVar141 + fStack_1cc
       ) - fVar86;
  if ((bVar19 & 0xf) == 0) {
    auVar44._8_4_ = auVar84._8_4_;
    auVar44._0_8_ = auVar84._0_8_;
    auVar44._12_4_ = auVar84._12_4_;
    auVar32 = insertps(auVar44,auVar72,0x30);
    auVar58._4_4_ = auVar72._8_4_;
    auVar58._0_4_ = auVar72._4_4_;
    auVar58._8_4_ = auVar94._0_4_;
    auVar58._12_4_ = auVar94._4_4_;
    auVar32 = insertps(auVar32,auVar94,0x20);
    *(int *)*pauVar2 = auVar32._0_4_;
    *(int *)(*pauVar2 + 4) = auVar32._12_4_;
    *(int *)(*pauVar2 + 8) = auVar32._8_4_;
    *(int *)(*pauVar2 + 0xc) = auVar32._4_4_;
    auVar32 = blendps(auVar58,auVar84,4);
    *(int *)pauVar2[1] = auVar32._0_4_;
    *(int *)(pauVar2[1] + 4) = auVar32._12_4_;
    *(int *)(pauVar2[1] + 8) = auVar32._8_4_;
    *(int *)(pauVar2[1] + 0xc) = auVar32._4_4_;
    *(float *)pauVar2[2] = auVar94._8_4_;
    *(float *)(pauVar2[2] + 4) = auVar84._12_4_;
    *(float *)(pauVar2[2] + 8) = auVar72._12_4_;
    *(float *)(pauVar2[2] + 0xc) = auVar94._12_4_;
    auVar32 = *(undefined1 (*) [16])(param_7 + lVar25 * 0xc);
    auVar53 = *(undefined1 (*) [16])(param_7 + 0x10 + lVar25 * 0xc);
    puVar3 = (undefined4 *)(param_7 + 0x20 + lVar25 * 0xc);
    auVar106._0_4_ = auVar32._0_4_;
    auVar31 = insertps(auVar53,auVar32,0x8c);
    auVar106._4_4_ = auVar32._12_4_;
    auVar106._8_4_ = auVar53._8_4_;
    auVar106._12_4_ = puVar3[1];
    auVar113._4_4_ = auVar53._0_4_;
    auVar113._0_4_ = auVar32._4_4_;
    auVar113._8_4_ = auVar53._12_4_;
    auVar113._12_4_ = puVar3[2];
    auVar124._0_8_ = auVar31._0_8_;
    auVar124._8_4_ = *puVar3;
    auVar124._12_4_ = puVar3[3];
  }
  else {
    if ((bVar24 & 1) != 0) {
      *(float *)*pauVar2 = fVar68;
    }
    if ((bVar24 & 2) != 0) {
      uVar77 = extractps(auVar84,1);
      *(undefined8 *)(*pauVar2 + 0xc) = uVar77;
    }
    if ((bVar24 & 4) != 0) {
      uVar77 = extractps(auVar84,2);
      *(undefined8 *)(pauVar2[1] + 8) = uVar77;
    }
    if ((char)bVar24 < '\0') {
      uVar77 = extractps(auVar84,3);
      *(undefined8 *)(pauVar2[2] + 4) = uVar77;
    }
    if ((bVar24 & 1) != 0) {
      *(float *)(*pauVar2 + 4) = auVar72._0_4_;
    }
    if ((bVar24 & 2) != 0) {
      uVar77 = extractps(auVar72,1);
      *(undefined8 *)pauVar2[1] = uVar77;
    }
    if ((bVar24 & 4) != 0) {
      uVar77 = extractps(auVar72,2);
      *(undefined8 *)(pauVar2[1] + 0xc) = uVar77;
    }
    if ((char)bVar24 < '\0') {
      uVar77 = extractps(auVar72,3);
      *(undefined8 *)(pauVar2[2] + 8) = uVar77;
    }
    if ((bVar24 & 1) != 0) {
      *(float *)(*pauVar2 + 8) = auVar94._0_4_;
    }
    if ((bVar24 & 2) != 0) {
      uVar77 = extractps(auVar94,1);
      *(undefined8 *)(pauVar2[1] + 4) = uVar77;
    }
    if ((bVar24 & 4) != 0) {
      uVar77 = extractps(auVar94,2);
      *(undefined8 *)pauVar2[2] = uVar77;
    }
    if ((char)bVar24 < '\0') {
      uVar77 = extractps(auVar94,3);
      *(undefined8 *)(pauVar2[2] + 0xc) = uVar77;
    }
    lVar10 = param_7 + lVar25 * 0xc;
    auVar32 = insertps(ZEXT416(*(uint *)(param_7 + lVar25 * 0xc)),
                       *(undefined4 *)((ulonglong)(_UNK_150b50da4 & auVar93._4_4_) + lVar10),0x10);
    auVar32 = insertps(auVar32,*(undefined4 *)((ulonglong)(_UNK_150b50da8 & auVar93._8_4_) + lVar10)
                       ,0x20);
    auVar106 = insertps(auVar32,*(undefined4 *)
                                 ((ulonglong)(_UNK_150b50dac & auVar93._12_4_) + lVar10),0x30);
    auVar32 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (___xmm_000000280000001c0000001000000004 & auVar93._0_4_) +
                                        lVar10)),
                       *(undefined4 *)((ulonglong)(_UNK_150b50db4 & auVar93._4_4_) + lVar10),0x10);
    auVar32 = insertps(auVar32,*(undefined4 *)((ulonglong)(_UNK_150b50db8 & auVar93._8_4_) + lVar10)
                       ,0x20);
    auVar113 = insertps(auVar32,*(undefined4 *)
                                 ((ulonglong)(_UNK_150b50dbc & auVar93._12_4_) + lVar10),0x30);
    auVar32 = insertps(ZEXT416(*(uint *)((ulonglong)
                                         (___xmm_0000002c000000200000001400000008 & auVar93._0_4_) +
                                        lVar10)),
                       *(undefined4 *)((ulonglong)(_UNK_150b50dc4 & auVar93._4_4_) + lVar10),0x10);
    auVar32 = insertps(auVar32,*(undefined4 *)((ulonglong)(_UNK_150b50dc8 & auVar93._8_4_) + lVar10)
                       ,0x20);
    auVar124 = insertps(auVar32,*(undefined4 *)
                                 ((ulonglong)(_UNK_150b50dcc & auVar93._12_4_) + lVar10),0x30);
  }
  fVar90 = fVar120 + fVar134 * fVar89 + (local_1b8 * fVar87 - fVar63 * fVar47);
  fVar171 = fVar128 + fVar135 * fVar49 + (fStack_1b4 * fVar88 - fVar64 * fVar48);
  auVar166._0_8_ = CONCAT44(fVar171,fVar90);
  auVar166._8_4_ = fVar130 + fVar119 * fVar50 + (fStack_1b0 * fVar170 - fVar65 * fVar109);
  auVar166._12_4_ = fVar132 + fVar137 * fVar51 + (fStack_1ac * fVar29 - fVar66 * fVar175);
  fVar30 = fVar110 + fVar134 * fVar63 + (fVar47 * fVar89 - fVar87 * fVar127);
  fVar76 = fVar116 + fVar135 * fVar64 + (fVar48 * fVar49 - fVar88 * fVar129);
  auVar159._0_8_ = CONCAT44(fVar76,fVar30);
  auVar159._8_4_ = fVar117 + fVar119 * fVar65 + (fVar109 * fVar50 - fVar170 * fVar131);
  auVar159._12_4_ = fVar118 + fVar137 * fVar66 + (fVar175 * fVar51 - fVar29 * fVar133);
  fVar86 = fVar96 + fVar134 * fVar87 + (fVar127 * fVar63 - fVar89 * local_1b8);
  fVar87 = fVar173 + fVar135 * fVar88 + (fVar129 * fVar64 - fVar49 * fStack_1b4);
  auVar152._0_8_ = CONCAT44(fVar87,fVar86);
  auVar152._8_4_ = fVar97 + fVar119 * fVar170 + (fVar131 * fVar65 - fVar50 * fStack_1b0);
  auVar152._12_4_ = fVar98 + fVar137 * fVar29 + (fVar133 * fVar66 - fVar51 * fStack_1ac);
  auVar107._0_4_ = auVar106._0_4_ - fVar68;
  auVar107._4_4_ = auVar106._4_4_ - fVar69;
  auVar107._8_4_ = auVar106._8_4_ - auVar84._8_4_;
  auVar107._12_4_ = auVar106._12_4_ - auVar84._12_4_;
  auVar114._0_4_ = auVar113._0_4_ - auVar72._0_4_;
  auVar114._4_4_ = auVar113._4_4_ - auVar72._4_4_;
  auVar114._8_4_ = auVar113._8_4_ - auVar72._8_4_;
  auVar114._12_4_ = auVar113._12_4_ - auVar72._12_4_;
  auVar125._0_4_ = auVar124._0_4_ - auVar94._0_4_;
  auVar125._4_4_ = auVar124._4_4_ - auVar94._4_4_;
  auVar125._8_4_ = auVar124._8_4_ - auVar94._8_4_;
  auVar125._12_4_ = auVar124._12_4_ - auVar94._12_4_;
  auVar59._4_4_ = param_11;
  auVar59._0_4_ = param_11;
  auVar59._8_4_ = param_11;
  auVar59._12_4_ = param_11;
  auVar32 = divps(auVar107,auVar59);
  auVar53 = divps(auVar114,auVar59);
  auVar31 = divps(auVar125,auVar59);
  pfVar23 = (float *)(param_5 + lVar25 * 0xc);
  fVar88 = auVar32._0_4_;
  fVar170 = auVar32._12_4_;
  fVar29 = auVar53._0_4_;
  fVar89 = auVar53._12_4_;
  fVar47 = auVar31._0_4_;
  fVar48 = auVar31._4_4_;
  fVar109 = auVar31._8_4_;
  fVar175 = auVar31._12_4_;
  if ((bVar19 & 0xf) == 0) {
    auVar33 = insertps(auVar32,auVar53,0x30);
    auVar60._0_8_ = auVar53._4_8_;
    auVar60._8_4_ = fVar47;
    auVar60._12_4_ = fVar48;
    auVar31 = insertps(auVar33,auVar31,0x20);
    *pfVar23 = auVar31._0_4_;
    pfVar23[1] = auVar31._12_4_;
    pfVar23[2] = auVar31._8_4_;
    pfVar23[3] = auVar31._4_4_;
    auVar31 = blendps(auVar60,auVar32,4);
    pfVar23[4] = auVar31._0_4_;
    pfVar23[5] = auVar31._12_4_;
    pfVar23[6] = auVar31._8_4_;
    pfVar23[7] = auVar31._4_4_;
    pfVar23[8] = fVar109;
    pfVar23[9] = fVar170;
    pfVar23[10] = fVar89;
    pfVar23[0xb] = fVar175;
  }
  else {
    if ((bVar24 & 1) != 0) {
      *pfVar23 = fVar88;
    }
    if ((bVar24 & 2) != 0) {
      uVar77 = extractps(auVar32,1);
      *(undefined8 *)(pfVar23 + 3) = uVar77;
    }
    if ((bVar24 & 4) != 0) {
      uVar77 = extractps(auVar32,2);
      *(undefined8 *)(pfVar23 + 6) = uVar77;
    }
    if ((char)bVar24 < '\0') {
      uVar77 = extractps(auVar32,3);
      *(undefined8 *)(pfVar23 + 9) = uVar77;
    }
    if ((bVar24 & 1) != 0) {
      pfVar23[1] = fVar29;
    }
    if ((bVar24 & 2) != 0) {
      uVar77 = extractps(auVar53,1);
      *(undefined8 *)(pfVar23 + 4) = uVar77;
    }
    if ((bVar24 & 4) != 0) {
      uVar77 = extractps(auVar53,2);
      *(undefined8 *)(pfVar23 + 7) = uVar77;
    }
    if ((char)bVar24 < '\0') {
      uVar77 = extractps(auVar53,3);
      *(undefined8 *)(pfVar23 + 10) = uVar77;
    }
    if ((bVar24 & 1) != 0) {
      pfVar23[2] = fVar47;
    }
    if ((bVar24 & 2) != 0) {
      uVar77 = extractps(auVar31,1);
      *(undefined8 *)(pfVar23 + 5) = uVar77;
    }
    if ((bVar24 & 4) != 0) {
      uVar77 = extractps(auVar31,2);
      *(undefined8 *)(pfVar23 + 8) = uVar77;
    }
    if ((char)bVar24 < '\0') {
      uVar77 = extractps(auVar31,3);
      *(undefined8 *)(pfVar23 + 0xb) = uVar77;
    }
  }
  fVar90 = fVar90 - fVar88;
  fVar171 = fVar171 - auVar32._4_4_;
  fVar64 = auVar166._8_4_ - auVar32._8_4_;
  fVar65 = auVar166._12_4_ - fVar170;
  fVar30 = fVar30 - fVar29;
  fVar76 = fVar76 - auVar53._4_4_;
  fVar49 = auVar159._8_4_ - auVar53._8_4_;
  fVar50 = auVar159._12_4_ - fVar89;
  fVar86 = fVar86 - fVar47;
  fVar87 = fVar87 - fVar48;
  fVar51 = auVar152._8_4_ - fVar109;
  fVar63 = auVar152._12_4_ - fVar175;
  auVar85._0_4_ = fVar86 * fVar86 + fVar30 * fVar30 + fVar90 * fVar90;
  auVar85._4_4_ = fVar87 * fVar87 + fVar76 * fVar76 + fVar171 * fVar171;
  auVar85._8_4_ = fVar51 * fVar51 + fVar49 * fVar49 + fVar64 * fVar64;
  auVar85._12_4_ = fVar63 * fVar63 + fVar50 * fVar50 + fVar65 * fVar65;
  auVar101._4_4_ = param_14;
  auVar101._0_4_ = param_14;
  auVar101._8_4_ = param_14;
  auVar101._12_4_ = param_14;
  auVar95._0_4_ = -(uint)(param_14 < auVar85._0_4_ && bVar28);
  auVar95._4_4_ = -(uint)(param_14 < auVar85._4_4_ && bVar5);
  auVar95._8_4_ = -(uint)(param_14 < auVar85._8_4_ && bVar6);
  auVar95._12_4_ = -(uint)(param_14 < auVar85._12_4_ && bVar7);
  iVar9 = movmskps((int)pfVar23,auVar95);
  if (iVar9 == 0) goto LAB_140d189f9;
  bVar11 = (char)((char)iVar9 << 4) >> 4;
  auVar31 = divps(auVar101,auVar85);
  auVar31 = sqrtps(auVar85,auVar31);
  fVar66 = auVar31._0_4_;
  fVar68 = auVar31._4_4_;
  fVar69 = auVar31._8_4_;
  fVar96 = auVar31._12_4_;
  auVar108._0_8_ = CONCAT44(auVar32._4_4_ + fVar171 * fVar68,fVar88 + fVar90 * fVar66);
  auVar108._8_4_ = auVar32._8_4_ + fVar64 * fVar69;
  auVar108._12_4_ = fVar170 + fVar65 * fVar96;
  auVar73._8_4_ = auVar166._8_4_;
  auVar73._0_8_ = auVar166._0_8_;
  auVar73._12_4_ = auVar166._12_4_;
  bVar28 = (bVar11 & 1) != 0;
  if (bVar28) {
    auVar73._8_4_ = auVar108._8_4_;
    auVar73._0_8_ = auVar108._0_8_;
    auVar73._12_4_ = auVar108._12_4_;
  }
  auVar115._0_8_ = CONCAT44(auVar53._4_4_ + fVar76 * fVar68,fVar29 + fVar30 * fVar66);
  auVar115._8_4_ = auVar53._8_4_ + fVar49 * fVar69;
  auVar115._12_4_ = fVar89 + fVar50 * fVar96;
  auVar126._0_8_ = CONCAT44(fVar48 + fVar87 * fVar68,fVar47 + fVar86 * fVar66);
  auVar126._8_4_ = fVar109 + fVar51 * fVar69;
  auVar126._12_4_ = fVar175 + fVar63 * fVar96;
  auVar61._8_4_ = auVar159._8_4_;
  auVar61._0_8_ = auVar159._0_8_;
  auVar61._12_4_ = auVar159._12_4_;
  auVar45._8_4_ = auVar152._8_4_;
  auVar45._0_8_ = auVar152._0_8_;
  auVar45._12_4_ = auVar152._12_4_;
  if (bVar28) {
    auVar61._8_4_ = auVar115._8_4_;
    auVar61._0_8_ = auVar115._0_8_;
    auVar61._12_4_ = auVar115._12_4_;
    auVar45._8_4_ = auVar126._8_4_;
    auVar45._0_8_ = auVar126._0_8_;
    auVar45._12_4_ = auVar126._12_4_;
    auVar32 = blendps(auVar166,auVar73,1);
    if ((bVar11 & 2) != 0) goto LAB_140d18ad6;
LAB_140d18963:
    auVar157 = blendps(auVar159,auVar61,1);
    auVar150 = blendps(auVar152,auVar45,1);
    auVar32 = blendps(auVar32,auVar32,2);
    auVar53 = auVar150;
    auVar31 = auVar157;
    if ((bVar11 & 4) == 0) goto LAB_140d18999;
LAB_140d18b16:
    auVar75._8_4_ = auVar108._8_4_;
    auVar75._0_8_ = auVar108._0_8_;
    auVar75._12_4_ = auVar108._12_4_;
    auVar31 = blendps(auVar31,auVar157,2);
    auVar158._8_4_ = auVar115._8_4_;
    auVar158._0_8_ = auVar115._0_8_;
    auVar158._12_4_ = auVar115._12_4_;
    auVar53 = blendps(auVar53,auVar150,2);
    auVar151._8_4_ = auVar126._8_4_;
    auVar151._0_8_ = auVar126._0_8_;
    auVar151._12_4_ = auVar126._12_4_;
    auVar32 = blendps(auVar32,auVar75,4);
    if (-1 < (char)bVar11) goto LAB_140d18b51;
LAB_140d189ca:
    auVar31 = blendps(auVar31,auVar158,4);
    if ((char)bVar11 < '\0') goto LAB_140d189d7;
LAB_140d18b62:
    auVar53 = blendps(auVar53,auVar151,4);
    auVar115 = auVar31;
  }
  else {
    auVar32 = blendps(auVar166,auVar73,1);
    if ((bVar11 & 2) == 0) goto LAB_140d18963;
LAB_140d18ad6:
    auVar74._8_4_ = auVar108._8_4_;
    auVar74._0_8_ = auVar108._0_8_;
    auVar74._12_4_ = auVar108._12_4_;
    auVar31 = blendps(auVar159,auVar61,1);
    auVar157._8_4_ = auVar115._8_4_;
    auVar157._0_8_ = auVar115._0_8_;
    auVar157._12_4_ = auVar115._12_4_;
    auVar53 = blendps(auVar152,auVar45,1);
    auVar150._8_4_ = auVar126._8_4_;
    auVar150._0_8_ = auVar126._0_8_;
    auVar150._12_4_ = auVar126._12_4_;
    auVar32 = blendps(auVar32,auVar74,2);
    if ((bVar11 & 4) != 0) goto LAB_140d18b16;
LAB_140d18999:
    auVar158 = blendps(auVar31,auVar157,2);
    auVar151 = blendps(auVar53,auVar150,2);
    auVar32 = blendps(auVar32,auVar32,4);
    auVar53 = auVar151;
    auVar31 = auVar158;
    if ((char)bVar11 < '\0') goto LAB_140d189ca;
LAB_140d18b51:
    auVar108 = auVar32;
    auVar31 = blendps(auVar31,auVar158,4);
    auVar32 = auVar108;
    if (-1 < (char)bVar11) goto LAB_140d18b62;
LAB_140d189d7:
    auVar53 = blendps(auVar53,auVar151,4);
  }
  if (-1 < (char)bVar11) {
    auVar126 = auVar53;
  }
  auVar166 = blendps(auVar32,auVar108,8);
  auVar159 = blendps(auVar31,auVar115,8);
  auVar152 = blendps(auVar53,auVar126,8);
LAB_140d189f9:
  if ((bVar19 & 0xf) == 0) {
    auVar32 = insertps(auVar166,auVar159,0x30);
    auVar62._0_8_ = auVar159._4_8_;
    auVar62._8_4_ = auVar152._0_4_;
    auVar62._12_4_ = auVar152._4_4_;
    auVar32 = insertps(auVar32,auVar152,0x20);
    *puVar14 = auVar32._0_4_;
    puVar14[1] = auVar32._12_4_;
    puVar14[2] = auVar32._8_4_;
    puVar14[3] = auVar32._4_4_;
    auVar32 = blendps(auVar62,auVar166,4);
    puVar14 = (undefined4 *)(param_2 + 0x10 + lVar25 * 0xc);
    *puVar14 = auVar32._0_4_;
    puVar14[1] = auVar32._12_4_;
    puVar14[2] = auVar32._8_4_;
    puVar14[3] = auVar32._4_4_;
    puVar14 = (undefined4 *)(param_2 + 0x20 + lVar25 * 0xc);
    *puVar14 = auVar152._8_4_;
    puVar14[1] = auVar166._12_4_;
    puVar14[2] = auVar159._12_4_;
    puVar14[3] = auVar152._12_4_;
  }
  else {
    if ((bVar24 & 1) != 0) {
      *puVar14 = auVar166._0_4_;
    }
    if ((bVar24 & 2) != 0) {
      uVar77 = extractps(auVar166,1);
      *(undefined8 *)(param_2 + 0xc + lVar25 * 0xc) = uVar77;
    }
    if ((bVar24 & 4) != 0) {
      uVar77 = extractps(auVar166,2);
      *(undefined8 *)(param_2 + 0x18 + lVar25 * 0xc) = uVar77;
    }
    if ((char)bVar24 < '\0') {
      uVar77 = extractps(auVar166,3);
      *(undefined8 *)(param_2 + 0x24 + lVar25 * 0xc) = uVar77;
    }
    if ((bVar24 & 1) != 0) {
      *(int *)(param_2 + 4 + lVar25 * 0xc) = auVar159._0_4_;
    }
    if ((bVar24 & 2) != 0) {
      uVar77 = extractps(auVar159,1);
      *(undefined8 *)(param_2 + 0x10 + lVar25 * 0xc) = uVar77;
    }
    if ((bVar24 & 4) != 0) {
      uVar77 = extractps(auVar159,2);
      *(undefined8 *)(param_2 + 0x1c + lVar25 * 0xc) = uVar77;
    }
    if ((char)bVar24 < '\0') {
      uVar77 = extractps(auVar159,3);
      *(undefined8 *)(param_2 + 0x28 + lVar25 * 0xc) = uVar77;
    }
    if ((bVar24 & 1) != 0) {
      *(int *)(param_2 + 8 + lVar25 * 0xc) = auVar152._0_4_;
    }
    if ((bVar24 & 2) != 0) {
      uVar77 = extractps(auVar152,1);
      *(undefined8 *)(param_2 + 0x14 + lVar25 * 0xc) = uVar77;
    }
    if ((bVar24 & 4) != 0) {
      uVar77 = extractps(auVar152,2);
      *(undefined8 *)(param_2 + 0x20 + lVar25 * 0xc) = uVar77;
    }
    if ((char)bVar24 < '\0') {
      uVar77 = extractps(auVar152,3);
      *(undefined8 *)(param_2 + 0x2c + lVar25 * 0xc) = uVar77;
    }
  }
  return;
}

// PreSubstepInterpolation_sse4 @ 140d18d40

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PreSubstepInterpolation_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,float param_7,uint param_8,int param_9)

{
  float *pfVar1;
  float *pfVar2;
  uint *puVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  byte bVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
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
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
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
  float fVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar63 [16];
  
  fVar8 = _UNK_1508be49c;
  fVar7 = _UNK_1508be498;
  fVar56 = _UNK_1508be494;
  fVar33 = ___xmm_00800000008000000080000000800000;
  auVar23 = ___xmm_3f8000003f8000003f8000003f800000;
  uVar15 = (ulonglong)param_8;
  uVar12 = param_9 - param_8;
  uVar20 = uVar12 + 3;
  if (-1 < (int)uVar12) {
    uVar20 = uVar12;
  }
  iVar9 = ((uVar20 & 0xfffffffc) - uVar12) + param_9;
  if ((int)param_8 < iVar9) {
    fVar37 = __real_3f800000 - param_7;
    uVar15 = (ulonglong)(int)param_8;
    lVar13 = uVar15 * 0xc;
    lVar18 = param_3 + 0x20;
    lVar19 = param_4 + 0x20;
    lVar16 = param_1 + 0x20;
    lVar17 = param_5 + 0x20;
    lVar11 = param_6 + 0x20;
    lVar10 = param_2 + 0x20;
    do {
      auVar46 = *(undefined1 (*) [16])(lVar18 + -0x20 + lVar13);
      auVar58 = *(undefined1 (*) [16])(lVar18 + -0x10 + lVar13);
      pfVar1 = (float *)(lVar18 + lVar13);
      auVar57 = insertps(auVar58,auVar46,0x8c);
      auVar67 = *(undefined1 (*) [16])(lVar19 + -0x20 + lVar13);
      auVar60 = *(undefined1 (*) [16])(lVar19 + -0x10 + lVar13);
      pfVar2 = (float *)(lVar19 + lVar13);
      auVar45 = insertps(auVar60,auVar67,0x8c);
      auVar50._0_8_ =
           CONCAT44(auVar67._12_4_ * fVar37 + auVar46._12_4_ * param_7,
                    auVar67._0_4_ * fVar37 + auVar46._0_4_ * param_7);
      auVar50._8_4_ = auVar60._8_4_ * fVar37 + auVar58._8_4_ * param_7;
      auVar50._12_4_ = pfVar2[1] * fVar37 + pfVar1[1] * param_7;
      auVar46._0_4_ = auVar67._4_4_ * fVar37 + auVar46._4_4_ * param_7;
      auVar46._4_4_ = auVar60._0_4_ * fVar37 + auVar58._0_4_ * param_7;
      auVar46._8_4_ = auVar60._12_4_ * fVar37 + auVar58._12_4_ * param_7;
      auVar46._12_4_ = pfVar2[2] * fVar37 + pfVar1[2] * param_7;
      auVar51._0_4_ = auVar45._0_4_ * fVar37 + auVar57._0_4_ * param_7;
      auVar51._4_4_ = auVar45._4_4_ * fVar37 + auVar57._4_4_ * param_7;
      auVar51._8_4_ = *pfVar2 * fVar37 + *pfVar1 * param_7;
      auVar51._12_4_ = pfVar2[3] * fVar37 + pfVar1[3] * param_7;
      auVar45._8_4_ = auVar50._8_4_;
      auVar45._0_8_ = auVar50._0_8_;
      auVar45._12_4_ = auVar50._12_4_;
      auVar58 = insertps(auVar45,auVar46,0x30);
      auVar64._4_4_ = auVar46._8_4_;
      auVar64._0_4_ = auVar46._4_4_;
      auVar64._8_4_ = auVar51._0_4_;
      auVar64._12_4_ = auVar51._4_4_;
      auVar58 = insertps(auVar58,auVar51,0x20);
      puVar5 = (undefined4 *)(lVar16 + -0x20 + lVar13);
      *puVar5 = auVar58._0_4_;
      puVar5[1] = auVar58._12_4_;
      puVar5[2] = auVar58._8_4_;
      puVar5[3] = auVar58._4_4_;
      auVar58 = blendps(auVar64,auVar50,4);
      puVar5 = (undefined4 *)(lVar16 + -0x10 + lVar13);
      *puVar5 = auVar58._0_4_;
      puVar5[1] = auVar58._12_4_;
      puVar5[2] = auVar58._8_4_;
      puVar5[3] = auVar58._4_4_;
      pfVar1 = (float *)(lVar16 + lVar13);
      *pfVar1 = auVar51._8_4_;
      pfVar1[1] = auVar50._12_4_;
      pfVar1[2] = auVar46._12_4_;
      pfVar1[3] = auVar51._12_4_;
      auVar46 = *(undefined1 (*) [16])(lVar17 + -0x20 + lVar13);
      auVar58 = *(undefined1 (*) [16])(lVar17 + -0x10 + lVar13);
      pfVar1 = (float *)(lVar17 + lVar13);
      auVar45 = insertps(auVar58,auVar46,0x8c);
      auVar67 = *(undefined1 (*) [16])(lVar11 + -0x20 + lVar13);
      auVar60 = *(undefined1 (*) [16])(lVar11 + -0x10 + lVar13);
      pfVar2 = (float *)(lVar11 + lVar13);
      auVar51 = insertps(auVar60,auVar67,0x8c);
      auVar57._0_4_ = auVar67._0_4_ * fVar37 + auVar46._0_4_ * param_7;
      auVar57._4_4_ = auVar67._12_4_ * fVar37 + auVar46._12_4_ * param_7;
      auVar57._8_4_ = auVar60._8_4_ * fVar37 + auVar58._8_4_ * param_7;
      auVar57._12_4_ = pfVar2[1] * fVar37 + pfVar1[1] * param_7;
      auVar59._0_4_ = auVar67._4_4_ * fVar37 + auVar46._4_4_ * param_7;
      auVar59._4_4_ = auVar60._0_4_ * fVar37 + auVar58._0_4_ * param_7;
      auVar59._8_4_ = auVar60._12_4_ * fVar37 + auVar58._12_4_ * param_7;
      auVar59._12_4_ = pfVar2[2] * fVar37 + pfVar1[2] * param_7;
      auVar52._0_4_ = auVar51._0_4_ * fVar37 + auVar45._0_4_ * param_7;
      auVar52._4_4_ = auVar51._4_4_ * fVar37 + auVar45._4_4_ * param_7;
      auVar52._8_4_ = *pfVar2 * fVar37 + *pfVar1 * param_7;
      auVar52._12_4_ = pfVar2[3] * fVar37 + pfVar1[3] * param_7;
      auVar65._0_4_ = auVar59._0_4_ * auVar59._0_4_ + auVar57._0_4_ * auVar57._0_4_;
      auVar65._4_4_ = auVar59._4_4_ * auVar59._4_4_ + auVar57._4_4_ * auVar57._4_4_;
      auVar65._8_4_ = auVar59._8_4_ * auVar59._8_4_ + auVar57._8_4_ * auVar57._8_4_;
      auVar65._12_4_ = auVar59._12_4_ * auVar59._12_4_ + auVar57._12_4_ * auVar57._12_4_;
      auVar58._0_4_ = auVar52._0_4_ * auVar52._0_4_ + auVar65._0_4_;
      auVar58._4_4_ = auVar52._4_4_ * auVar52._4_4_ + auVar65._4_4_;
      auVar58._8_4_ = auVar52._8_4_ * auVar52._8_4_ + auVar65._8_4_;
      auVar58._12_4_ = auVar52._12_4_ * auVar52._12_4_ + auVar65._12_4_;
      auVar45 = sqrtps(auVar65,auVar58);
      uVar20 = -(uint)(auVar58._0_4_ <= fVar33);
      uVar12 = -(uint)(auVar58._4_4_ <= fVar56);
      uVar21 = -(uint)(auVar58._8_4_ <= fVar7);
      uVar22 = -(uint)(auVar58._12_4_ <= fVar8);
      auVar67._4_4_ = uVar12;
      auVar67._0_4_ = uVar20;
      auVar67._8_4_ = uVar21;
      auVar67._12_4_ = uVar22;
      auVar46 = divps(auVar57,auVar45);
      auVar60 = divps(auVar59,auVar45);
      auVar58 = divps(auVar52,auVar45);
      auVar46 = blendvps(auVar46,auVar23,auVar67);
      auVar66._0_4_ = ~uVar20 & auVar60._0_4_;
      auVar66._4_4_ = ~uVar12 & auVar60._4_4_;
      auVar66._8_4_ = ~uVar21 & auVar60._8_4_;
      auVar66._12_4_ = ~uVar22 & auVar60._12_4_;
      auVar60._0_4_ = ~uVar20 & auVar58._0_4_;
      auVar60._4_4_ = ~uVar12 & auVar58._4_4_;
      auVar60._8_4_ = ~uVar21 & auVar58._8_4_;
      auVar60._12_4_ = ~uVar22 & auVar58._12_4_;
      auVar58 = insertps(auVar46,auVar66,0x30);
      auVar61._4_4_ = auVar66._8_4_;
      auVar61._0_4_ = auVar66._4_4_;
      auVar61._8_4_ = auVar60._0_4_;
      auVar61._12_4_ = auVar60._4_4_;
      auVar58 = insertps(auVar58,auVar60,0x20);
      puVar5 = (undefined4 *)(lVar10 + -0x20 + lVar13);
      *puVar5 = auVar58._0_4_;
      puVar5[1] = auVar58._12_4_;
      puVar5[2] = auVar58._8_4_;
      puVar5[3] = auVar58._4_4_;
      auVar58 = blendps(auVar61,auVar46,4);
      puVar5 = (undefined4 *)(lVar10 + -0x10 + lVar13);
      *puVar5 = auVar58._0_4_;
      puVar5[1] = auVar58._12_4_;
      puVar5[2] = auVar58._8_4_;
      puVar5[3] = auVar58._4_4_;
      puVar3 = (uint *)(lVar10 + lVar13);
      *puVar3 = auVar60._8_4_;
      puVar3[1] = auVar46._12_4_;
      puVar3[2] = auVar66._12_4_;
      puVar3[3] = auVar60._12_4_;
      uVar15 = uVar15 + 4;
      lVar18 = lVar18 + 0x30;
      lVar19 = lVar19 + 0x30;
      lVar16 = lVar16 + 0x30;
      lVar17 = lVar17 + 0x30;
      lVar11 = lVar11 + 0x30;
      lVar10 = lVar10 + 0x30;
    } while ((longlong)uVar15 < (longlong)iVar9);
  }
  iVar9 = (int)uVar15;
  if (iVar9 < param_9) {
    auVar23._0_4_ = -(uint)(iVar9 + (int)__xmm_00000003000000020000000100000000 < param_9);
    auVar23._4_4_ = -(uint)(iVar9 + __xmm_00000003000000020000000100000000._4_4_ < param_9);
    auVar23._8_4_ = -(uint)(iVar9 + _UNK_150631e08 < param_9);
    auVar23._12_4_ = -(uint)(iVar9 + _UNK_150631e0c < param_9);
    lVar18 = (longlong)iVar9;
    pauVar4 = (undefined1 (*) [16])(param_3 + lVar18 * 0xc);
    iVar9 = movmskps((int)param_2,auVar23);
    bVar14 = (char)((char)iVar9 << 4) >> 4;
    if (iVar9 == 0xf) {
      auVar46 = *pauVar4;
      auVar58 = pauVar4[1];
      auVar47._0_4_ = auVar46._0_4_;
      auVar67 = insertps(auVar58,auVar46,0x8c);
      auVar47._4_4_ = auVar46._12_4_;
      auVar47._8_4_ = auVar58._8_4_;
      auVar47._12_4_ = *(undefined4 *)(pauVar4[2] + 4);
      auVar53._4_4_ = auVar58._0_4_;
      auVar53._0_4_ = auVar46._4_4_;
      auVar53._8_4_ = auVar58._12_4_;
      auVar53._12_4_ = *(undefined4 *)(pauVar4[2] + 8);
      auVar68._0_8_ = auVar67._0_8_;
      auVar68._8_4_ = *(undefined4 *)pauVar4[2];
      auVar68._12_4_ = *(undefined4 *)(pauVar4[2] + 0xc);
      auVar46 = *(undefined1 (*) [16])(param_4 + lVar18 * 0xc);
      auVar58 = *(undefined1 (*) [16])(param_4 + 0x10 + lVar18 * 0xc);
      puVar5 = (undefined4 *)(param_4 + 0x20 + lVar18 * 0xc);
      auVar62._0_4_ = auVar46._0_4_;
      auVar67 = insertps(auVar58,auVar46,0x8c);
      auVar62._4_4_ = auVar46._12_4_;
      auVar62._8_4_ = auVar58._8_4_;
      auVar62._12_4_ = puVar5[1];
      auVar42._4_4_ = auVar58._0_4_;
      auVar42._0_4_ = auVar46._4_4_;
      auVar42._8_4_ = auVar58._12_4_;
      auVar42._12_4_ = puVar5[2];
      auVar38._0_8_ = auVar67._0_8_;
      auVar38._8_4_ = *puVar5;
      auVar38._12_4_ = puVar5[3];
    }
    else {
      auVar34._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar23._0_4_;
      auVar34._4_4_ = _UNK_150b50da4 & auVar23._4_4_;
      auVar34._8_4_ = _UNK_150b50da8 & auVar23._8_4_;
      auVar34._12_4_ = _UNK_150b50dac & auVar23._12_4_;
      lVar16 = extractps(auVar34,1);
      lVar17 = extractps(auVar34,2);
      lVar10 = extractps(auVar34,3);
      auVar46 = insertps(ZEXT416(*(uint *)*pauVar4),*(undefined4 *)(*pauVar4 + lVar16),0x10);
      auVar46 = insertps(auVar46,*(undefined4 *)(*pauVar4 + lVar17),0x20);
      auVar47 = insertps(auVar46,*(undefined4 *)(*pauVar4 + lVar10),0x30);
      auVar46 = ___xmm_000000280000001c0000001000000004 & auVar23;
      auVar58 = insertps(ZEXT416(*(uint *)(*pauVar4 + auVar46._0_4_)),
                         *(undefined4 *)(*pauVar4 + auVar46._4_4_),0x10);
      auVar58 = insertps(auVar58,*(undefined4 *)(*pauVar4 + auVar46._8_4_),0x20);
      auVar53 = insertps(auVar58,*(undefined4 *)(*pauVar4 + auVar46._12_4_),0x30);
      auVar58 = ___xmm_0000002c000000200000001400000008 & auVar23;
      auVar67 = insertps(ZEXT416(*(uint *)(*pauVar4 + auVar58._0_4_)),
                         *(undefined4 *)(*pauVar4 + auVar58._4_4_),0x10);
      auVar67 = insertps(auVar67,*(undefined4 *)(*pauVar4 + auVar58._8_4_),0x20);
      auVar68 = insertps(auVar67,*(undefined4 *)(*pauVar4 + auVar58._12_4_),0x30);
      lVar19 = param_4 + lVar18 * 0xc;
      auVar67 = insertps(ZEXT416(*(uint *)(param_4 + lVar18 * 0xc)),*(undefined4 *)(lVar16 + lVar19)
                         ,0x10);
      auVar67 = insertps(auVar67,*(undefined4 *)(lVar17 + lVar19),0x20);
      auVar62 = insertps(auVar67,*(undefined4 *)(lVar10 + lVar19),0x30);
      auVar67 = insertps(ZEXT416(*(uint *)((ulonglong)auVar46._0_4_ + lVar19)),
                         *(undefined4 *)((ulonglong)auVar46._4_4_ + lVar19),0x10);
      auVar67 = insertps(auVar67,*(undefined4 *)((ulonglong)auVar46._8_4_ + lVar19),0x20);
      auVar42 = insertps(auVar67,*(undefined4 *)((ulonglong)auVar46._12_4_ + lVar19),0x30);
      auVar46 = insertps(ZEXT416(*(uint *)((ulonglong)auVar58._0_4_ + lVar19)),
                         *(undefined4 *)((ulonglong)auVar58._4_4_ + lVar19),0x10);
      auVar46 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar58._8_4_ + lVar19),0x20);
      auVar38 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar58._12_4_ + lVar19),0x30);
    }
    fVar33 = __real_3f800000 - param_7;
    fVar56 = auVar62._0_4_ * fVar33 + auVar47._0_4_ * param_7;
    auVar63._0_8_ = CONCAT44(auVar62._4_4_ * fVar33 + auVar47._4_4_ * param_7,fVar56);
    auVar63._8_4_ = auVar62._8_4_ * fVar33 + auVar47._8_4_ * param_7;
    auVar63._12_4_ = auVar62._12_4_ * fVar33 + auVar47._12_4_ * param_7;
    auVar43._0_4_ = auVar42._0_4_ * fVar33 + auVar53._0_4_ * param_7;
    auVar43._4_4_ = auVar42._4_4_ * fVar33 + auVar53._4_4_ * param_7;
    auVar43._8_4_ = auVar42._8_4_ * fVar33 + auVar53._8_4_ * param_7;
    auVar43._12_4_ = auVar42._12_4_ * fVar33 + auVar53._12_4_ * param_7;
    auVar39._0_4_ = auVar38._0_4_ * fVar33 + auVar68._0_4_ * param_7;
    auVar39._4_4_ = auVar38._4_4_ * fVar33 + auVar68._4_4_ * param_7;
    auVar39._8_4_ = auVar38._8_4_ * fVar33 + auVar68._8_4_ * param_7;
    auVar39._12_4_ = auVar38._12_4_ * fVar33 + auVar68._12_4_ * param_7;
    pfVar1 = (float *)(param_1 + lVar18 * 0xc);
    if ((~bVar14 & 0xf) == 0) {
      auVar25._8_4_ = auVar63._8_4_;
      auVar25._0_8_ = auVar63._0_8_;
      auVar25._12_4_ = auVar63._12_4_;
      auVar23 = insertps(auVar25,auVar43,0x30);
      auVar31._4_4_ = auVar43._8_4_;
      auVar31._0_4_ = auVar43._4_4_;
      auVar31._8_4_ = auVar39._0_4_;
      auVar31._12_4_ = auVar39._4_4_;
      auVar23 = insertps(auVar23,auVar39,0x20);
      *pfVar1 = auVar23._0_4_;
      pfVar1[1] = auVar23._12_4_;
      pfVar1[2] = auVar23._8_4_;
      pfVar1[3] = auVar23._4_4_;
      auVar23 = blendps(auVar31,auVar63,4);
      pfVar1[4] = auVar23._0_4_;
      pfVar1[5] = auVar23._12_4_;
      pfVar1[6] = auVar23._8_4_;
      pfVar1[7] = auVar23._4_4_;
      pfVar1[8] = auVar39._8_4_;
      pfVar1[9] = auVar63._12_4_;
      pfVar1[10] = auVar43._12_4_;
      pfVar1[0xb] = auVar39._12_4_;
      lVar19 = lVar18 * 0xc;
      auVar23 = *(undefined1 (*) [16])(param_5 + lVar19);
      auVar46 = *(undefined1 (*) [16])(param_5 + 0x10 + lVar19);
      puVar5 = (undefined4 *)(param_5 + 0x20 + lVar19);
      auVar40._0_4_ = auVar23._0_4_;
      auVar58 = insertps(auVar46,auVar23,0x8c);
      auVar40._4_4_ = auVar23._12_4_;
      auVar40._8_4_ = auVar46._8_4_;
      auVar40._12_4_ = puVar5[1];
      auVar44._4_4_ = auVar46._0_4_;
      auVar44._0_4_ = auVar23._4_4_;
      auVar44._8_4_ = auVar46._12_4_;
      auVar44._12_4_ = puVar5[2];
      auVar24._0_8_ = auVar58._0_8_;
      auVar24._8_4_ = *puVar5;
      auVar24._12_4_ = puVar5[3];
      auVar23 = *(undefined1 (*) [16])(param_6 + lVar19);
      auVar46 = *(undefined1 (*) [16])(param_6 + 0x10 + lVar19);
      puVar5 = (undefined4 *)(param_6 + 0x20 + lVar19);
      auVar30._0_4_ = auVar23._0_4_;
      auVar58 = insertps(auVar46,auVar23,0x8c);
      auVar30._4_4_ = auVar23._12_4_;
      auVar30._8_4_ = auVar46._8_4_;
      auVar30._12_4_ = puVar5[1];
      auVar48._4_4_ = auVar46._0_4_;
      auVar48._0_4_ = auVar23._4_4_;
      auVar48._8_4_ = auVar46._12_4_;
      auVar48._12_4_ = puVar5[2];
      auVar54._0_8_ = auVar58._0_8_;
      auVar54._8_4_ = *puVar5;
      auVar54._12_4_ = puVar5[3];
    }
    else {
      if ((bVar14 & 1) != 0) {
        *pfVar1 = fVar56;
      }
      if ((bVar14 & 2) != 0) {
        uVar6 = extractps(auVar63,1);
        *(undefined8 *)(pfVar1 + 3) = uVar6;
      }
      if ((bVar14 & 4) != 0) {
        uVar6 = extractps(auVar63,2);
        *(undefined8 *)(pfVar1 + 6) = uVar6;
      }
      if ((char)bVar14 < '\0') {
        uVar6 = extractps(auVar63,3);
        *(undefined8 *)(pfVar1 + 9) = uVar6;
      }
      if ((bVar14 & 1) != 0) {
        pfVar1[1] = auVar43._0_4_;
      }
      if ((bVar14 & 2) != 0) {
        uVar6 = extractps(auVar43,1);
        *(undefined8 *)(pfVar1 + 4) = uVar6;
      }
      if ((bVar14 & 4) != 0) {
        uVar6 = extractps(auVar43,2);
        *(undefined8 *)(pfVar1 + 7) = uVar6;
      }
      if ((char)bVar14 < '\0') {
        uVar6 = extractps(auVar43,3);
        *(undefined8 *)(pfVar1 + 10) = uVar6;
      }
      if ((bVar14 & 1) != 0) {
        pfVar1[2] = auVar39._0_4_;
      }
      if ((bVar14 & 2) != 0) {
        uVar6 = extractps(auVar39,1);
        *(undefined8 *)(pfVar1 + 5) = uVar6;
      }
      if ((bVar14 & 4) != 0) {
        uVar6 = extractps(auVar39,2);
        *(undefined8 *)(pfVar1 + 8) = uVar6;
      }
      if ((char)bVar14 < '\0') {
        uVar6 = extractps(auVar39,3);
        *(undefined8 *)(pfVar1 + 0xb) = uVar6;
      }
      lVar16 = lVar18 * 0xc;
      auVar29._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar23._0_4_;
      auVar29._4_4_ = _UNK_150b50da4 & auVar23._4_4_;
      auVar29._8_4_ = _UNK_150b50da8 & auVar23._8_4_;
      auVar29._12_4_ = _UNK_150b50dac & auVar23._12_4_;
      lVar10 = extractps(auVar29,1);
      lVar13 = extractps(auVar29,2);
      lVar17 = extractps(auVar29,3);
      lVar19 = param_5 + lVar16;
      auVar46 = insertps(ZEXT416(*(uint *)(param_5 + lVar16)),*(undefined4 *)(lVar10 + lVar19),0x10)
      ;
      auVar46 = insertps(auVar46,*(undefined4 *)(lVar13 + lVar19),0x20);
      auVar40 = insertps(auVar46,*(undefined4 *)(lVar17 + lVar19),0x30);
      auVar58 = ___xmm_000000280000001c0000001000000004 & auVar23;
      auVar46 = insertps(ZEXT416(*(uint *)((ulonglong)auVar58._0_4_ + lVar19)),
                         *(undefined4 *)((ulonglong)auVar58._4_4_ + lVar19),0x10);
      auVar46 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar58._8_4_ + lVar19),0x20);
      auVar44 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar58._12_4_ + lVar19),0x30);
      auVar23 = auVar23 & ___xmm_0000002c000000200000001400000008;
      auVar46 = insertps(ZEXT416(*(uint *)((ulonglong)auVar23._0_4_ + lVar19)),
                         *(undefined4 *)((ulonglong)auVar23._4_4_ + lVar19),0x10);
      auVar46 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar23._8_4_ + lVar19),0x20);
      auVar24 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar23._12_4_ + lVar19),0x30);
      lVar19 = param_6 + lVar16;
      auVar46 = insertps(ZEXT416(*(uint *)(param_6 + lVar16)),*(undefined4 *)(lVar10 + lVar19),0x10)
      ;
      auVar46 = insertps(auVar46,*(undefined4 *)(lVar13 + lVar19),0x20);
      auVar30 = insertps(auVar46,*(undefined4 *)(lVar17 + lVar19),0x30);
      auVar46 = insertps(ZEXT416(*(uint *)((ulonglong)auVar58._0_4_ + lVar19)),
                         *(undefined4 *)((ulonglong)auVar58._4_4_ + lVar19),0x10);
      auVar46 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar58._8_4_ + lVar19),0x20);
      auVar48 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar58._12_4_ + lVar19),0x30);
      auVar46 = insertps(ZEXT416(*(uint *)((ulonglong)auVar23._0_4_ + lVar19)),
                         *(undefined4 *)((ulonglong)auVar23._4_4_ + lVar19),0x10);
      auVar46 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar23._8_4_ + lVar19),0x20);
      auVar54 = insertps(auVar46,*(undefined4 *)((ulonglong)auVar23._12_4_ + lVar19),0x30);
    }
    auVar32._0_4_ = auVar30._0_4_ * fVar33 + auVar40._0_4_ * param_7;
    auVar32._4_4_ = auVar30._4_4_ * fVar33 + auVar40._4_4_ * param_7;
    auVar32._8_4_ = auVar30._8_4_ * fVar33 + auVar40._8_4_ * param_7;
    auVar32._12_4_ = auVar30._12_4_ * fVar33 + auVar40._12_4_ * param_7;
    auVar49._0_4_ = auVar48._0_4_ * fVar33 + auVar44._0_4_ * param_7;
    auVar49._4_4_ = auVar48._4_4_ * fVar33 + auVar44._4_4_ * param_7;
    auVar49._8_4_ = auVar48._8_4_ * fVar33 + auVar44._8_4_ * param_7;
    auVar49._12_4_ = auVar48._12_4_ * fVar33 + auVar44._12_4_ * param_7;
    auVar55._0_4_ = auVar54._0_4_ * fVar33 + auVar24._0_4_ * param_7;
    auVar55._4_4_ = auVar54._4_4_ * fVar33 + auVar24._4_4_ * param_7;
    auVar55._8_4_ = auVar54._8_4_ * fVar33 + auVar24._8_4_ * param_7;
    auVar55._12_4_ = auVar54._12_4_ * fVar33 + auVar24._12_4_ * param_7;
    auVar35._0_4_ = auVar49._0_4_ * auVar49._0_4_ + auVar32._0_4_ * auVar32._0_4_;
    auVar35._4_4_ = auVar49._4_4_ * auVar49._4_4_ + auVar32._4_4_ * auVar32._4_4_;
    auVar35._8_4_ = auVar49._8_4_ * auVar49._8_4_ + auVar32._8_4_ * auVar32._8_4_;
    auVar35._12_4_ = auVar49._12_4_ * auVar49._12_4_ + auVar32._12_4_ * auVar32._12_4_;
    auVar26._0_4_ = auVar55._0_4_ * auVar55._0_4_ + auVar35._0_4_;
    auVar26._4_4_ = auVar55._4_4_ * auVar55._4_4_ + auVar35._4_4_;
    auVar26._8_4_ = auVar55._8_4_ * auVar55._8_4_ + auVar35._8_4_;
    auVar26._12_4_ = auVar55._12_4_ * auVar55._12_4_ + auVar35._12_4_;
    auVar46 = sqrtps(auVar35,auVar26);
    uVar20 = -(uint)(auVar26._0_4_ <= ___xmm_00800000008000000080000000800000);
    uVar12 = -(uint)(auVar26._4_4_ <= _UNK_1508be494);
    uVar21 = -(uint)(auVar26._8_4_ <= _UNK_1508be498);
    uVar22 = -(uint)(auVar26._12_4_ <= _UNK_1508be49c);
    auVar27._4_4_ = uVar12;
    auVar27._0_4_ = uVar20;
    auVar27._8_4_ = uVar21;
    auVar27._12_4_ = uVar22;
    auVar23 = divps(auVar32,auVar46);
    auVar58 = divps(auVar49,auVar46);
    auVar46 = divps(auVar55,auVar46);
    auVar23 = blendvps(auVar23,___xmm_3f8000003f8000003f8000003f800000,auVar27);
    auVar36._0_4_ = ~uVar20 & auVar58._0_4_;
    auVar36._4_4_ = ~uVar12 & auVar58._4_4_;
    auVar36._8_4_ = ~uVar21 & auVar58._8_4_;
    auVar36._12_4_ = ~uVar22 & auVar58._12_4_;
    auVar28._0_4_ = ~uVar20 & auVar46._0_4_;
    auVar28._4_4_ = ~uVar12 & auVar46._4_4_;
    auVar28._8_4_ = ~uVar21 & auVar46._8_4_;
    auVar28._12_4_ = ~uVar22 & auVar46._12_4_;
    puVar5 = (undefined4 *)(param_2 + lVar18 * 0xc);
    if ((~bVar14 & 0xf) == 0) {
      auVar46 = insertps(auVar23,auVar36,0x30);
      auVar41._4_4_ = auVar36._8_4_;
      auVar41._0_4_ = auVar36._4_4_;
      auVar41._8_4_ = auVar28._0_4_;
      auVar41._12_4_ = auVar28._4_4_;
      auVar46 = insertps(auVar46,auVar28,0x20);
      *puVar5 = auVar46._0_4_;
      puVar5[1] = auVar46._12_4_;
      puVar5[2] = auVar46._8_4_;
      puVar5[3] = auVar46._4_4_;
      auVar46 = blendps(auVar41,auVar23,4);
      puVar5[4] = auVar46._0_4_;
      puVar5[5] = auVar46._12_4_;
      puVar5[6] = auVar46._8_4_;
      puVar5[7] = auVar46._4_4_;
      puVar5[8] = auVar28._8_4_;
      puVar5[9] = auVar23._12_4_;
      puVar5[10] = auVar36._12_4_;
      puVar5[0xb] = auVar28._12_4_;
    }
    else {
      if ((bVar14 & 1) != 0) {
        *puVar5 = auVar23._0_4_;
      }
      if ((bVar14 & 2) != 0) {
        uVar6 = extractps(auVar23,1);
        *(undefined8 *)(puVar5 + 3) = uVar6;
      }
      if ((bVar14 & 4) != 0) {
        uVar6 = extractps(auVar23,2);
        *(undefined8 *)(puVar5 + 6) = uVar6;
      }
      if ((char)bVar14 < '\0') {
        uVar6 = extractps(auVar23,3);
        *(undefined8 *)(puVar5 + 9) = uVar6;
      }
      if ((bVar14 & 1) != 0) {
        puVar5[1] = auVar36._0_4_;
      }
      if ((bVar14 & 2) != 0) {
        uVar6 = extractps(auVar36,1);
        *(undefined8 *)(puVar5 + 4) = uVar6;
      }
      if ((bVar14 & 4) != 0) {
        uVar6 = extractps(auVar36,2);
        *(undefined8 *)(puVar5 + 7) = uVar6;
      }
      if ((char)bVar14 < '\0') {
        uVar6 = extractps(auVar36,3);
        *(undefined8 *)(puVar5 + 10) = uVar6;
      }
      if ((bVar14 & 1) != 0) {
        puVar5[2] = auVar28._0_4_;
      }
      if ((bVar14 & 2) != 0) {
        uVar6 = extractps(auVar28,1);
        *(undefined8 *)(puVar5 + 5) = uVar6;
      }
      if ((bVar14 & 4) != 0) {
        uVar6 = extractps(auVar28,2);
        *(undefined8 *)(puVar5 + 8) = uVar6;
      }
      if ((char)bVar14 < '\0') {
        uVar6 = extractps(auVar28,3);
        *(undefined8 *)(puVar5 + 0xb) = uVar6;
      }
    }
  }
  return;
}

// CalculateBounds_sse4 @ 140d197f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CalculateBounds_sse4
               (undefined4 *param_1,undefined4 *param_2,longlong param_3,longlong param_4,
               int param_5)

{
  undefined1 (*pauVar1) [16];
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
  undefined1 auVar26 [12];
  undefined1 auVar27 [12];
  undefined1 auVar28 [12];
  undefined1 auVar29 [12];
  undefined1 auVar30 [12];
  undefined1 auVar31 [12];
  byte bVar32;
  int iVar33;
  longlong lVar34;
  uint uVar35;
  int iVar36;
  longlong lVar37;
  uint uVar38;
  undefined4 *puVar39;
  longlong lVar40;
  bool bVar41;
  undefined1 auVar42 [16];
  undefined4 uVar43;
  undefined4 uVar49;
  float fVar50;
  undefined4 uVar51;
  undefined1 auVar44 [16];
  undefined4 uVar52;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined4 uVar53;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined1 auVar54 [16];
  undefined4 uVar61;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined4 uVar71;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined1 auVar72 [16];
  undefined4 uVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined4 uVar88;
  undefined4 uVar89;
  undefined4 uVar90;
  undefined4 uVar91;
  undefined4 uVar92;
  undefined4 uVar93;
  undefined4 uVar94;
  undefined4 uVar95;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined4 uVar100;
  undefined4 uVar101;
  undefined4 uVar102;
  undefined4 uVar103;
  undefined4 uVar104;
  undefined4 uVar105;
  undefined4 uVar106;
  undefined4 uVar107;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  
  uVar89 = *param_1;
  uVar91 = param_1[1];
  uVar93 = param_1[2];
  auVar76._4_4_ = uVar89;
  auVar76._0_4_ = uVar89;
  auVar76._8_4_ = uVar89;
  auVar76._12_4_ = uVar89;
  auVar62._4_4_ = uVar91;
  auVar62._0_4_ = uVar91;
  auVar62._8_4_ = uVar91;
  auVar62._12_4_ = uVar91;
  auVar44._4_4_ = uVar93;
  auVar44._0_4_ = uVar93;
  auVar44._8_4_ = uVar93;
  auVar44._12_4_ = uVar93;
  iVar33 = (int)param_4;
  uVar38 = param_5 - iVar33;
  uVar35 = uVar38 + 3;
  if (-1 < (int)uVar38) {
    uVar35 = uVar38;
  }
  iVar36 = ((uVar35 & 0xfffffffc) - uVar38) + param_5;
  uVar89 = *param_2;
  uVar91 = param_2[1];
  uVar93 = param_2[2];
  auVar72._4_4_ = uVar89;
  auVar72._0_4_ = uVar89;
  auVar72._8_4_ = uVar89;
  auVar72._12_4_ = uVar89;
  auVar54._4_4_ = uVar91;
  auVar54._0_4_ = uVar91;
  auVar54._8_4_ = uVar91;
  auVar54._12_4_ = uVar91;
  auVar42._4_4_ = uVar93;
  auVar42._0_4_ = uVar93;
  auVar42._8_4_ = uVar93;
  auVar42._12_4_ = uVar93;
  if (iVar33 < iVar36) {
    param_4 = (longlong)iVar33;
    puVar39 = (undefined4 *)(param_3 + 0x20 + param_4 * 0xc);
    do {
      auVar81 = *(undefined1 (*) [16])(puVar39 + -8);
      auVar98 = *(undefined1 (*) [16])(puVar39 + -4);
      unaff_XMM6._0_4_ = auVar81._0_4_;
      auVar86 = insertps(auVar98,auVar81,0x8c);
      unaff_XMM6._4_4_ = auVar81._12_4_;
      unaff_XMM6._8_4_ = auVar98._8_4_;
      unaff_XMM6._12_4_ = puVar39[1];
      auVar97._0_8_ = auVar86._0_8_;
      auVar97._8_4_ = *puVar39;
      auVar97._12_4_ = puVar39[3];
      auVar76 = minps(auVar76,unaff_XMM6);
      auVar86._4_4_ = auVar98._0_4_;
      auVar86._0_4_ = auVar81._4_4_;
      auVar86._8_4_ = auVar98._12_4_;
      auVar86._12_4_ = puVar39[2];
      auVar62 = minps(auVar62,auVar86);
      auVar44 = minps(auVar44,auVar97);
      auVar72 = maxps(auVar72,unaff_XMM6);
      auVar82._4_4_ = auVar98._0_4_;
      auVar82._0_4_ = auVar81._4_4_;
      auVar82._8_4_ = auVar98._12_4_;
      auVar82._12_4_ = puVar39[2];
      auVar54 = maxps(auVar54,auVar82);
      auVar42 = maxps(auVar42,auVar97);
      param_4 = param_4 + 4;
      puVar39 = puVar39 + 0xc;
    } while (param_4 < iVar36);
  }
  iVar33 = (int)param_4;
  if (param_5 <= iVar33) goto LAB_140d19bfb;
  auVar81._0_4_ = -(uint)(iVar33 + (int)__xmm_00000003000000020000000100000000 < param_5);
  auVar81._4_4_ = -(uint)(iVar33 + __xmm_00000003000000020000000100000000._4_4_ < param_5);
  auVar81._8_4_ = -(uint)(iVar33 + _UNK_150631e08 < param_5);
  auVar81._12_4_ = -(uint)(iVar33 + _UNK_150631e0c < param_5);
  pauVar1 = (undefined1 (*) [16])(param_3 + (longlong)iVar33 * 0xc);
  iVar33 = movmskps(iVar33,auVar81);
  bVar32 = (char)((char)iVar33 << 4) >> 4;
  if (iVar33 == 0xf) {
    auVar81 = *pauVar1;
    auVar98 = pauVar1[1];
    auVar99._0_4_ = auVar81._0_4_;
    auVar86 = insertps(auVar98,auVar81,0x8c);
    auVar99._4_4_ = auVar81._12_4_;
    auVar99._8_4_ = auVar98._8_4_;
    auVar99._12_4_ = *(undefined4 *)(pauVar1[2] + 4);
    auVar96._4_4_ = auVar98._0_4_;
    auVar96._0_4_ = auVar81._4_4_;
    auVar96._8_4_ = auVar98._12_4_;
    auVar96._12_4_ = *(undefined4 *)(pauVar1[2] + 8);
    auVar98._0_8_ = auVar86._0_8_;
    auVar98._8_4_ = *(undefined4 *)pauVar1[2];
    auVar98._12_4_ = *(undefined4 *)(pauVar1[2] + 0xc);
  }
  else {
    auVar87._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar81._0_4_;
    auVar87._4_4_ = _UNK_150b50da4 & auVar81._4_4_;
    auVar87._8_4_ = _UNK_150b50da8 & auVar81._8_4_;
    auVar87._12_4_ = _UNK_150b50dac & auVar81._12_4_;
    lVar34 = extractps(auVar87,1);
    lVar37 = extractps(auVar87,2);
    lVar40 = extractps(auVar87,3);
    auVar98 = insertps(ZEXT416(*(uint *)*pauVar1),*(undefined4 *)(*pauVar1 + lVar34),0x10);
    auVar98 = insertps(auVar98,*(undefined4 *)(*pauVar1 + lVar37),0x20);
    auVar99 = insertps(auVar98,*(undefined4 *)(*pauVar1 + lVar40),0x30);
    auVar98 = ___xmm_000000280000001c0000001000000004 & auVar81;
    auVar86 = insertps(ZEXT416(*(uint *)(*pauVar1 + auVar98._0_4_)),
                       *(undefined4 *)(*pauVar1 + auVar98._4_4_),0x10);
    auVar86 = insertps(auVar86,*(undefined4 *)(*pauVar1 + auVar98._8_4_),0x20);
    auVar96 = insertps(auVar86,*(undefined4 *)(*pauVar1 + auVar98._12_4_),0x30);
    auVar81 = auVar81 & ___xmm_0000002c000000200000001400000008;
    auVar98 = insertps(ZEXT416(*(uint *)(*pauVar1 + auVar81._0_4_)),
                       *(undefined4 *)(*pauVar1 + auVar81._4_4_),0x10);
    auVar98 = insertps(auVar98,*(undefined4 *)(*pauVar1 + auVar81._8_4_),0x20);
    auVar98 = insertps(auVar98,*(undefined4 *)(*pauVar1 + auVar81._12_4_),0x30);
  }
  local_b8 = minps(auVar76,auVar99);
  bVar41 = (bVar32 & 1) != 0;
  auVar81 = auVar76;
  if (bVar41) {
    auVar81 = local_b8;
  }
  auVar82 = minps(auVar62,auVar96);
  auVar86 = minps(auVar44,auVar98);
  uVar43 = auVar86._0_4_;
  uVar49 = auVar86._4_4_;
  uVar51 = auVar86._8_4_;
  uVar52 = auVar86._12_4_;
  local_c8._0_4_ = auVar82._0_4_;
  local_c8._4_4_ = auVar82._4_4_;
  local_c8._8_4_ = auVar82._8_4_;
  local_c8._12_4_ = auVar82._12_4_;
  uVar89 = auVar62._0_4_;
  uVar91 = auVar62._4_4_;
  uVar93 = auVar62._8_4_;
  uVar95 = auVar62._12_4_;
  uVar100 = auVar44._0_4_;
  uVar101 = auVar44._4_4_;
  uVar102 = auVar44._8_4_;
  uVar103 = auVar44._12_4_;
  if (bVar41) {
    uVar89 = local_c8._0_4_;
    uVar91 = local_c8._4_4_;
    uVar93 = local_c8._8_4_;
    uVar95 = local_c8._12_4_;
    uVar100 = uVar43;
    uVar101 = uVar49;
    uVar102 = uVar51;
    uVar103 = uVar52;
  }
  unaff_XMM6 = maxps(auVar54,auVar96);
  auVar97 = maxps(auVar42,auVar98);
  auVar98 = maxps(auVar72,auVar99);
  uVar71 = auVar98._0_4_;
  uVar73 = auVar98._4_4_;
  uVar74 = auVar98._8_4_;
  uVar75 = auVar98._12_4_;
  uVar53 = unaff_XMM6._0_4_;
  uVar59 = unaff_XMM6._4_4_;
  uVar60 = unaff_XMM6._8_4_;
  uVar61 = unaff_XMM6._12_4_;
  if (bVar41) {
    auVar81 = blendps(auVar76,auVar81,1);
    uVar88 = uVar53;
    uVar90 = uVar59;
    uVar92 = uVar60;
    uVar94 = uVar61;
    auVar76 = auVar97;
    uVar104 = uVar71;
    uVar105 = uVar73;
    uVar106 = uVar74;
    uVar107 = uVar75;
    if ((bVar32 & 2) != 0) goto LAB_140d19cf1;
LAB_140d19ac5:
    auVar8._4_4_ = uVar91;
    auVar8._0_4_ = uVar89;
    auVar8._8_4_ = uVar93;
    auVar8._12_4_ = uVar95;
    auVar99 = blendps(auVar62,auVar8,1);
    auVar14._4_4_ = uVar101;
    auVar14._0_4_ = uVar100;
    auVar14._8_4_ = uVar102;
    auVar14._12_4_ = uVar103;
    auVar96 = blendps(auVar44,auVar14,1);
    auVar20._4_4_ = uVar105;
    auVar20._0_4_ = uVar104;
    auVar20._8_4_ = uVar106;
    auVar20._12_4_ = uVar107;
    auVar72 = blendps(auVar72,auVar20,1);
    auVar2._4_4_ = uVar90;
    auVar2._0_4_ = uVar88;
    auVar2._8_4_ = uVar92;
    auVar2._12_4_ = uVar94;
    auVar54 = blendps(auVar54,auVar2,1);
    auVar62 = blendps(auVar42,auVar76,1);
    auVar76 = blendps(auVar81,auVar81,2);
    uVar89 = auVar54._0_4_;
    uVar91 = auVar54._4_4_;
    uVar93 = auVar54._8_4_;
    uVar95 = auVar54._12_4_;
    auVar44 = auVar62;
    uVar100 = auVar99._0_4_;
    uVar101 = auVar99._4_4_;
    uVar102 = auVar99._8_4_;
    uVar103 = auVar99._12_4_;
    uVar88 = auVar96._0_4_;
    uVar90 = auVar96._4_4_;
    uVar92 = auVar96._8_4_;
    uVar94 = auVar96._12_4_;
    uVar104 = auVar72._0_4_;
    uVar105 = auVar72._4_4_;
    uVar106 = auVar72._8_4_;
    uVar107 = auVar72._12_4_;
    if ((bVar32 & 4) == 0) goto LAB_140d19b2d;
LAB_140d19d73:
    auVar12._4_4_ = uVar101;
    auVar12._0_4_ = uVar100;
    auVar12._8_4_ = uVar102;
    auVar12._12_4_ = uVar103;
    auVar99 = blendps(auVar99,auVar12,2);
    auVar18._4_4_ = uVar90;
    auVar18._0_4_ = uVar88;
    auVar18._8_4_ = uVar92;
    auVar18._12_4_ = uVar94;
    auVar81 = blendps(auVar96,auVar18,2);
    auVar24._4_4_ = uVar105;
    auVar24._0_4_ = uVar104;
    auVar24._8_4_ = uVar106;
    auVar24._12_4_ = uVar107;
    auVar72 = blendps(auVar72,auVar24,2);
    auVar6._4_4_ = uVar91;
    auVar6._0_4_ = uVar89;
    auVar6._8_4_ = uVar93;
    auVar6._12_4_ = uVar95;
    auVar54 = blendps(auVar54,auVar6,2);
    auVar42 = blendps(auVar62,auVar44,2);
    auVar44 = blendps(auVar76,local_b8,4);
    auVar62 = auVar97;
    if (-1 < (char)bVar32) goto LAB_140d19df0;
LAB_140d19b90:
    auVar10._4_4_ = local_c8._4_4_;
    auVar10._0_4_ = local_c8._0_4_;
    auVar10._8_4_ = local_c8._8_4_;
    auVar10._12_4_ = local_c8._12_4_;
    auVar96 = blendps(auVar99,auVar10,4);
    if ((char)bVar32 < '\0') goto LAB_140d19b9d;
LAB_140d19e02:
    auVar17._4_4_ = uVar49;
    auVar17._0_4_ = uVar43;
    auVar17._8_4_ = uVar51;
    auVar17._12_4_ = uVar52;
    auVar81 = blendps(auVar81,auVar17,4);
    local_c8 = auVar96;
    if (-1 < (char)bVar32) goto LAB_140d19e13;
LAB_140d19baa:
    auVar22._4_4_ = uVar73;
    auVar22._0_4_ = uVar71;
    auVar22._8_4_ = uVar74;
    auVar22._12_4_ = uVar75;
    auVar72 = blendps(auVar72,auVar22,4);
    if ((char)bVar32 < '\0') goto LAB_140d19bb7;
LAB_140d19e24:
    auVar5._4_4_ = uVar59;
    auVar5._0_4_ = uVar53;
    auVar5._8_4_ = uVar60;
    auVar5._12_4_ = uVar61;
    auVar54 = blendps(auVar54,auVar5,4);
    auVar98 = auVar72;
    if (-1 < (char)bVar32) goto LAB_140d19e35;
LAB_140d19bc4:
    auVar42 = blendps(auVar42,auVar62,4);
  }
  else {
    auVar81 = blendps(auVar76,auVar81,1);
    uVar88 = auVar54._0_4_;
    uVar90 = auVar54._4_4_;
    uVar92 = auVar54._8_4_;
    uVar94 = auVar54._12_4_;
    auVar76 = auVar42;
    uVar104 = auVar72._0_4_;
    uVar105 = auVar72._4_4_;
    uVar106 = auVar72._8_4_;
    uVar107 = auVar72._12_4_;
    if ((bVar32 & 2) == 0) goto LAB_140d19ac5;
LAB_140d19cf1:
    auVar13._4_4_ = uVar91;
    auVar13._0_4_ = uVar89;
    auVar13._8_4_ = uVar93;
    auVar13._12_4_ = uVar95;
    auVar99 = blendps(auVar62,auVar13,1);
    auVar19._4_4_ = uVar101;
    auVar19._0_4_ = uVar100;
    auVar19._8_4_ = uVar102;
    auVar19._12_4_ = uVar103;
    auVar96 = blendps(auVar44,auVar19,1);
    auVar25._4_4_ = uVar105;
    auVar25._0_4_ = uVar104;
    auVar25._8_4_ = uVar106;
    auVar25._12_4_ = uVar107;
    auVar72 = blendps(auVar72,auVar25,1);
    auVar7._4_4_ = uVar90;
    auVar7._0_4_ = uVar88;
    auVar7._8_4_ = uVar92;
    auVar7._12_4_ = uVar94;
    auVar54 = blendps(auVar54,auVar7,1);
    auVar62 = blendps(auVar42,auVar76,1);
    auVar76 = blendps(auVar81,local_b8,2);
    uVar89 = uVar53;
    uVar91 = uVar59;
    uVar93 = uVar60;
    uVar95 = uVar61;
    auVar44 = auVar97;
    uVar100 = local_c8._0_4_;
    uVar101 = local_c8._4_4_;
    uVar102 = local_c8._8_4_;
    uVar103 = local_c8._12_4_;
    uVar88 = uVar43;
    uVar90 = uVar49;
    uVar92 = uVar51;
    uVar94 = uVar52;
    uVar104 = uVar71;
    uVar105 = uVar73;
    uVar106 = uVar74;
    uVar107 = uVar75;
    if ((bVar32 & 4) != 0) goto LAB_140d19d73;
LAB_140d19b2d:
    auVar9._4_4_ = uVar101;
    auVar9._0_4_ = uVar100;
    auVar9._8_4_ = uVar102;
    auVar9._12_4_ = uVar103;
    auVar99 = blendps(auVar99,auVar9,2);
    local_c8._0_4_ = auVar99._0_4_;
    local_c8._4_4_ = auVar99._4_4_;
    local_c8._8_4_ = auVar99._8_4_;
    local_c8._12_4_ = auVar99._12_4_;
    auVar15._4_4_ = uVar90;
    auVar15._0_4_ = uVar88;
    auVar15._8_4_ = uVar92;
    auVar15._12_4_ = uVar94;
    auVar81 = blendps(auVar96,auVar15,2);
    uVar43 = auVar81._0_4_;
    uVar49 = auVar81._4_4_;
    uVar51 = auVar81._8_4_;
    uVar52 = auVar81._12_4_;
    auVar21._4_4_ = uVar105;
    auVar21._0_4_ = uVar104;
    auVar21._8_4_ = uVar106;
    auVar21._12_4_ = uVar107;
    auVar72 = blendps(auVar72,auVar21,2);
    uVar71 = auVar72._0_4_;
    uVar73 = auVar72._4_4_;
    uVar74 = auVar72._8_4_;
    uVar75 = auVar72._12_4_;
    auVar3._4_4_ = uVar91;
    auVar3._0_4_ = uVar89;
    auVar3._8_4_ = uVar93;
    auVar3._12_4_ = uVar95;
    auVar54 = blendps(auVar54,auVar3,2);
    uVar53 = auVar54._0_4_;
    uVar59 = auVar54._4_4_;
    uVar60 = auVar54._8_4_;
    uVar61 = auVar54._12_4_;
    auVar42 = blendps(auVar62,auVar44,2);
    auVar44 = blendps(auVar76,auVar76,4);
    auVar62 = auVar42;
    if ((char)bVar32 < '\0') goto LAB_140d19b90;
LAB_140d19df0:
    auVar11._4_4_ = local_c8._4_4_;
    auVar11._0_4_ = local_c8._0_4_;
    auVar11._8_4_ = local_c8._8_4_;
    auVar11._12_4_ = local_c8._12_4_;
    auVar96 = blendps(auVar99,auVar11,4);
    local_b8 = auVar44;
    if (-1 < (char)bVar32) goto LAB_140d19e02;
LAB_140d19b9d:
    auVar16._4_4_ = uVar49;
    auVar16._0_4_ = uVar43;
    auVar16._8_4_ = uVar51;
    auVar16._12_4_ = uVar52;
    auVar81 = blendps(auVar81,auVar16,4);
    local_c8 = auVar82;
    if ((char)bVar32 < '\0') goto LAB_140d19baa;
LAB_140d19e13:
    auVar23._4_4_ = uVar73;
    auVar23._0_4_ = uVar71;
    auVar23._8_4_ = uVar74;
    auVar23._12_4_ = uVar75;
    auVar72 = blendps(auVar72,auVar23,4);
    auVar86 = auVar81;
    if (-1 < (char)bVar32) goto LAB_140d19e24;
LAB_140d19bb7:
    auVar4._4_4_ = uVar59;
    auVar4._0_4_ = uVar53;
    auVar4._8_4_ = uVar60;
    auVar4._12_4_ = uVar61;
    auVar54 = blendps(auVar54,auVar4,4);
    if ((char)bVar32 < '\0') goto LAB_140d19bc4;
LAB_140d19e35:
    auVar42 = blendps(auVar42,auVar62,4);
    unaff_XMM6 = auVar54;
  }
  if (-1 < (char)bVar32) {
    auVar97 = auVar42;
  }
  auVar76 = blendps(auVar44,local_b8,8);
  auVar62 = blendps(auVar96,local_c8,8);
  auVar44 = blendps(auVar81,auVar86,8);
  auVar72 = blendps(auVar72,auVar98,8);
  auVar54 = blendps(auVar54,unaff_XMM6,8);
  auVar42 = blendps(auVar42,auVar97,8);
LAB_140d19bfb:
  auVar26._4_8_ = unaff_XMM6._8_8_;
  auVar26._0_4_ = auVar76._4_4_;
  auVar83._0_8_ = auVar26._0_8_ << 0x20;
  auVar83._8_4_ = auVar76._8_4_;
  auVar83._12_4_ = auVar76._12_4_;
  auVar84._8_8_ = auVar76._8_8_;
  auVar84._0_8_ = auVar83._8_8_;
  auVar85 = minps(auVar84,auVar76);
  fVar50 = auVar85._4_4_;
  auVar77._4_4_ = fVar50;
  auVar77._0_4_ = fVar50;
  auVar77._8_4_ = auVar85._12_4_;
  auVar77._12_4_ = auVar85._12_4_;
  if (fVar50 <= auVar85._0_4_) {
    auVar85._0_4_ = fVar50;
  }
  auVar27._4_8_ = auVar77._8_8_;
  auVar27._0_4_ = auVar62._4_4_;
  auVar78._0_8_ = auVar27._0_8_ << 0x20;
  auVar78._8_4_ = auVar62._8_4_;
  auVar78._12_4_ = auVar62._12_4_;
  auVar79._8_8_ = auVar62._8_8_;
  auVar79._0_8_ = auVar78._8_8_;
  auVar80 = minps(auVar79,auVar62);
  fVar50 = auVar80._4_4_;
  auVar63._4_4_ = fVar50;
  auVar63._0_4_ = fVar50;
  auVar63._8_4_ = auVar80._12_4_;
  auVar63._12_4_ = auVar80._12_4_;
  if (fVar50 <= auVar80._0_4_) {
    auVar80._0_4_ = fVar50;
  }
  auVar28._4_8_ = auVar63._8_8_;
  auVar28._0_4_ = auVar44._4_4_;
  auVar64._0_8_ = auVar28._0_8_ << 0x20;
  auVar64._8_4_ = auVar44._8_4_;
  auVar64._12_4_ = auVar44._12_4_;
  auVar65._8_8_ = auVar44._8_8_;
  auVar65._0_8_ = auVar64._8_8_;
  auVar66 = minps(auVar65,auVar44);
  fVar50 = auVar66._4_4_;
  auVar45._4_4_ = fVar50;
  auVar45._0_4_ = fVar50;
  auVar45._8_4_ = auVar66._12_4_;
  auVar45._12_4_ = auVar66._12_4_;
  if (fVar50 <= auVar66._0_4_) {
    auVar66._0_4_ = fVar50;
  }
  *param_1 = auVar85._0_4_;
  param_1[1] = auVar80._0_4_;
  param_1[2] = auVar66._0_4_;
  auVar29._4_8_ = auVar45._8_8_;
  auVar29._0_4_ = auVar72._4_4_;
  auVar46._0_8_ = auVar29._0_8_ << 0x20;
  auVar46._8_4_ = auVar72._8_4_;
  auVar46._12_4_ = auVar72._12_4_;
  auVar47._8_8_ = auVar72._8_8_;
  auVar47._0_8_ = auVar46._8_8_;
  auVar48 = maxps(auVar47,auVar72);
  fVar50 = auVar48._4_4_;
  auVar67._4_4_ = fVar50;
  auVar67._0_4_ = fVar50;
  auVar67._8_4_ = auVar48._12_4_;
  auVar67._12_4_ = auVar48._12_4_;
  if (auVar48._0_4_ <= fVar50) {
    auVar48._0_4_ = fVar50;
  }
  auVar30._4_8_ = auVar67._8_8_;
  auVar30._0_4_ = auVar54._4_4_;
  auVar68._0_8_ = auVar30._0_8_ << 0x20;
  auVar68._8_4_ = auVar54._8_4_;
  auVar68._12_4_ = auVar54._12_4_;
  auVar69._8_8_ = auVar54._8_8_;
  auVar69._0_8_ = auVar68._8_8_;
  auVar70 = maxps(auVar69,auVar54);
  fVar50 = auVar70._4_4_;
  auVar55._4_4_ = fVar50;
  auVar55._0_4_ = fVar50;
  auVar55._8_4_ = auVar70._12_4_;
  auVar55._12_4_ = auVar70._12_4_;
  if (auVar70._0_4_ <= fVar50) {
    auVar70._0_4_ = fVar50;
  }
  auVar31._4_8_ = auVar55._8_8_;
  auVar31._0_4_ = auVar42._4_4_;
  auVar56._0_8_ = auVar31._0_8_ << 0x20;
  auVar56._8_4_ = auVar42._8_4_;
  auVar56._12_4_ = auVar42._12_4_;
  auVar57._8_8_ = auVar42._8_8_;
  auVar57._0_8_ = auVar56._8_8_;
  auVar58 = maxps(auVar57,auVar42);
  if (auVar58._0_4_ <= auVar58._4_4_) {
    auVar58._0_4_ = auVar58._4_4_;
  }
  *param_2 = auVar48._0_4_;
  param_2[1] = auVar70._0_4_;
  param_2[2] = auVar58._0_4_;
  return;
}

// CalculateSquaredRadius_sse4 @ 140d19e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void CalculateSquaredRadius_sse4
               (undefined4 *param_1,float *param_2,longlong param_3,longlong param_4,int param_5)

{
  undefined1 (*pauVar1) [16];
  undefined4 uVar2;
  undefined1 auVar3 [12];
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  float *pfVar11;
  undefined1 in_XMM0 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar24;
  float fVar25;
  undefined1 auVar22 [16];
  float fVar26;
  float fVar27;
  undefined1 auVar23 [16];
  float fVar28;
  float fVar30;
  undefined1 auVar29 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  
  uVar2 = *param_1;
  auVar15._4_4_ = uVar2;
  auVar15._0_4_ = uVar2;
  auVar15._8_4_ = uVar2;
  auVar15._12_4_ = uVar2;
  iVar4 = (int)param_4;
  uVar10 = param_5 - iVar4;
  uVar7 = uVar10 + 3;
  if (-1 < (int)uVar10) {
    uVar7 = uVar10;
  }
  iVar8 = ((uVar7 & 0xfffffffc) - uVar10) + param_5;
  if (iVar4 < iVar8) {
    param_4 = (longlong)iVar4;
    pfVar11 = (float *)(param_3 + 0x20 + param_4 * 0xc);
    fVar17 = *param_2;
    fVar20 = param_2[1];
    fVar27 = param_2[2];
    in_XMM0._4_4_ = (uint)fVar17;
    in_XMM0._0_4_ = (uint)fVar17;
    in_XMM0._8_4_ = (uint)fVar17;
    in_XMM0._12_4_ = (uint)fVar17;
    do {
      auVar16 = *(undefined1 (*) [16])(pfVar11 + -8);
      auVar18 = *(undefined1 (*) [16])(pfVar11 + -4);
      auVar29 = insertps(auVar18,auVar16,0x8c);
      fVar21 = auVar16._0_4_ - fVar17;
      fVar24 = auVar16._12_4_ - fVar17;
      fVar25 = auVar18._8_4_ - fVar17;
      fVar31 = auVar16._4_4_ - fVar20;
      fVar32 = auVar18._0_4_ - fVar20;
      fVar33 = auVar18._12_4_ - fVar20;
      fVar28 = auVar29._0_4_ - fVar27;
      fVar30 = auVar29._4_4_ - fVar27;
      auVar16._0_4_ = fVar28 * fVar28 + fVar31 * fVar31 + fVar21 * fVar21;
      auVar16._4_4_ = fVar30 * fVar30 + fVar32 * fVar32 + fVar24 * fVar24;
      auVar16._8_4_ = (*pfVar11 - fVar27) * (*pfVar11 - fVar27) + fVar33 * fVar33 + fVar25 * fVar25;
      auVar16._12_4_ =
           (pfVar11[3] - fVar27) * (pfVar11[3] - fVar27) +
           (pfVar11[2] - fVar20) * (pfVar11[2] - fVar20) +
           (pfVar11[1] - fVar17) * (pfVar11[1] - fVar17);
      auVar15 = maxps(auVar15,auVar16);
      param_4 = param_4 + 4;
      pfVar11 = pfVar11 + 0xc;
    } while (param_4 < iVar8);
  }
  iVar4 = (int)param_4;
  if (iVar4 < param_5) {
    in_XMM0._0_4_ = -(uint)(iVar4 + (int)__xmm_00000003000000020000000100000000 < param_5);
    in_XMM0._4_4_ = -(uint)(iVar4 + __xmm_00000003000000020000000100000000._4_4_ < param_5);
    in_XMM0._8_4_ = -(uint)(iVar4 + _UNK_150631e08 < param_5);
    in_XMM0._12_4_ = -(uint)(iVar4 + _UNK_150631e0c < param_5);
    pauVar1 = (undefined1 (*) [16])(param_3 + (longlong)iVar4 * 0xc);
    iVar4 = movmskps((int)param_3,in_XMM0);
    if (iVar4 == 0xf) {
      auVar16 = *pauVar1;
      auVar18 = pauVar1[1];
      auVar29._0_4_ = auVar16._0_4_;
      auVar22 = insertps(auVar18,auVar16,0x8c);
      auVar29._4_4_ = auVar16._12_4_;
      auVar29._8_4_ = auVar18._8_4_;
      auVar29._12_4_ = *(undefined4 *)(pauVar1[2] + 4);
      auVar19._4_4_ = auVar18._0_4_;
      auVar19._0_4_ = auVar16._4_4_;
      auVar19._8_4_ = auVar18._12_4_;
      auVar19._12_4_ = *(undefined4 *)(pauVar1[2] + 8);
      auVar18._0_8_ = auVar22._0_8_;
      auVar18._8_4_ = *(undefined4 *)pauVar1[2];
      auVar18._12_4_ = *(undefined4 *)(pauVar1[2] + 0xc);
    }
    else {
      auVar22._0_4_ = ___xmm_00000024000000180000000c00000000 & in_XMM0._0_4_;
      auVar22._4_4_ = _UNK_150b50da4 & in_XMM0._4_4_;
      auVar22._8_4_ = _UNK_150b50da8 & in_XMM0._8_4_;
      auVar22._12_4_ = _UNK_150b50dac & in_XMM0._12_4_;
      lVar5 = extractps(auVar22,1);
      lVar6 = extractps(auVar22,2);
      lVar9 = extractps(auVar22,3);
      auVar16 = insertps(ZEXT416(*(uint *)*pauVar1),*(undefined4 *)(*pauVar1 + lVar5),0x10);
      auVar16 = insertps(auVar16,*(undefined4 *)(*pauVar1 + lVar6),0x20);
      auVar29 = insertps(auVar16,*(undefined4 *)(*pauVar1 + lVar9),0x30);
      auVar16 = ___xmm_000000280000001c0000001000000004 & in_XMM0;
      auVar18 = insertps(ZEXT416(*(uint *)(*pauVar1 + auVar16._0_4_)),
                         *(undefined4 *)(*pauVar1 + auVar16._4_4_),0x10);
      auVar18 = insertps(auVar18,*(undefined4 *)(*pauVar1 + auVar16._8_4_),0x20);
      auVar19 = insertps(auVar18,*(undefined4 *)(*pauVar1 + auVar16._12_4_),0x30);
      auVar16 = ___xmm_0000002c000000200000001400000008 & in_XMM0;
      auVar18 = insertps(ZEXT416(*(uint *)(*pauVar1 + auVar16._0_4_)),
                         *(undefined4 *)(*pauVar1 + auVar16._4_4_),0x10);
      auVar18 = insertps(auVar18,*(undefined4 *)(*pauVar1 + auVar16._8_4_),0x20);
      auVar18 = insertps(auVar18,*(undefined4 *)(*pauVar1 + auVar16._12_4_),0x30);
    }
    fVar17 = *param_2;
    fVar20 = param_2[1];
    fVar27 = param_2[2];
    fVar21 = auVar29._0_4_ - fVar17;
    fVar24 = auVar29._4_4_ - fVar17;
    fVar25 = auVar29._8_4_ - fVar17;
    fVar17 = auVar29._12_4_ - fVar17;
    fVar28 = auVar19._0_4_ - fVar20;
    fVar30 = auVar19._4_4_ - fVar20;
    fVar31 = auVar19._8_4_ - fVar20;
    fVar20 = auVar19._12_4_ - fVar20;
    fVar32 = auVar18._0_4_ - fVar27;
    fVar33 = auVar18._4_4_ - fVar27;
    fVar26 = auVar18._8_4_ - fVar27;
    fVar27 = auVar18._12_4_ - fVar27;
    auVar23._0_4_ = fVar32 * fVar32 + fVar28 * fVar28 + fVar21 * fVar21;
    auVar23._4_4_ = fVar33 * fVar33 + fVar30 * fVar30 + fVar24 * fVar24;
    auVar23._8_4_ = fVar26 * fVar26 + fVar31 * fVar31 + fVar25 * fVar25;
    auVar23._12_4_ = fVar27 * fVar27 + fVar20 * fVar20 + fVar17 * fVar17;
    auVar16 = maxps(auVar15,auVar23);
    auVar15 = blendvps(auVar15,auVar16,in_XMM0);
  }
  auVar3._4_8_ = in_XMM0._8_8_;
  auVar3._0_4_ = auVar15._4_4_;
  auVar12._0_8_ = auVar3._0_8_ << 0x20;
  auVar12._8_4_ = auVar15._8_4_;
  auVar12._12_4_ = auVar15._12_4_;
  auVar13._8_8_ = auVar15._8_8_;
  auVar13._0_8_ = auVar12._8_8_;
  auVar14 = maxps(auVar13,auVar15);
  if (auVar14._0_4_ <= auVar14._4_4_) {
    auVar14._0_4_ = auVar14._4_4_;
  }
  *param_1 = auVar14._0_4_;
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// ApplyMultiResConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCunfCunfCuni_sse4 @ 1405b2f90

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyMultiResConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCunfCunfCuni_sse4
               (undefined1 (*param_1) [16],longlong param_2,longlong param_3,longlong param_4,
               float param_5,float param_6,float param_7,uint param_8)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined4 *puVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulonglong uVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  longlong lVar22;
  byte bVar23;
  uint uVar24;
  longlong lVar26;
  longlong lVar27;
  uint uVar28;
  uint uVar29;
  undefined1 (*pauVar30) [16];
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  ulonglong uVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  bool bVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
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
  undefined4 uVar61;
  float fVar67;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
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
  float fVar83;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined4 uVar84;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar91;
  float fVar95;
  float fVar96;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined4 uVar97;
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
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  float fVar117;
  float fVar126;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 (*pauVar25) [16];
  
  uVar28 = param_8 + 3;
  if (-1 < (int)param_8) {
    uVar28 = param_8;
  }
  if ((int)(uVar28 & 0xfffffffc) < 1) {
    uVar29 = 0;
  }
  else {
    uVar29 = 0;
    lVar31 = 0;
    pauVar25 = param_1;
    pauVar30 = param_1;
    do {
      auVar55 = *pauVar30;
      auVar129._0_8_ = auVar55._0_8_;
      pauVar1 = pauVar30 + 1;
      fVar139 = *(float *)*pauVar1;
      fVar138 = *(float *)(pauVar30[1] + 4);
      fVar67 = *(float *)(pauVar30[1] + 8);
      auVar74 = pauVar30[2];
      auVar121._0_8_ = auVar74._0_8_;
      pauVar2 = pauVar30 + 3;
      fVar140 = *(float *)*pauVar2;
      fVar83 = *(float *)(pauVar30[3] + 4);
      fVar19 = *(float *)(pauVar30[3] + 8);
      fVar20 = *(float *)(pauVar30[3] + 0xc);
      fVar137 = auVar55._4_4_;
      fVar126 = auVar55._8_4_;
      auVar141._4_4_ = fVar67;
      auVar141._0_4_ = fVar126;
      fVar95 = auVar74._4_4_;
      fVar96 = auVar74._8_4_;
      auVar141._12_4_ = fVar19;
      auVar141._8_4_ = fVar96;
      uVar41 = -(uint)(0.0 < auVar55._12_4_);
      uVar42 = -(uint)(0.0 < *(float *)(pauVar30[1] + 0xc));
      uVar43 = -(uint)(0.0 < auVar74._12_4_);
      uVar44 = -(uint)(0.0 < fVar20);
      auVar62._4_4_ = uVar42;
      auVar62._0_4_ = uVar41;
      auVar62._8_4_ = uVar43;
      auVar62._12_4_ = uVar44;
      uVar24 = movmskps((int)pauVar25,auVar62);
      pauVar25 = (undefined1 (*) [16])(ulonglong)uVar24;
      if (uVar24 != 0) {
        auVar129._8_4_ = fVar137;
        auVar129._12_4_ = fVar138;
        fVar117 = auVar55._0_4_;
        auVar121._8_4_ = fVar95;
        auVar121._12_4_ = fVar83;
        fVar91 = auVar74._0_4_;
        auVar80._12_4_ = fVar140;
        auVar80._8_4_ = fVar91;
        auVar80._4_4_ = fVar139;
        auVar80._0_4_ = fVar117;
        bVar23 = (char)((char)uVar24 << 4) >> 4;
        if ((~bVar23 & 0xf) == 0) {
          auVar62 = *(undefined1 (*) [16])(param_2 + lVar31);
          auVar71 = *(undefined1 (*) [16])(param_2 + 0x10 + lVar31);
          puVar3 = (undefined4 *)(param_2 + 0x20 + lVar31);
          auVar63._0_4_ = auVar62._0_4_;
          auVar52 = insertps(auVar71,auVar62,0x8c);
          auVar63._4_4_ = auVar62._12_4_;
          auVar63._8_4_ = auVar71._8_4_;
          auVar63._12_4_ = puVar3[1];
          auVar85._4_4_ = auVar71._0_4_;
          auVar85._0_4_ = auVar62._4_4_;
          auVar85._8_4_ = auVar71._12_4_;
          auVar85._12_4_ = puVar3[2];
          auVar52._8_4_ = *puVar3;
          auVar52._12_4_ = puVar3[3];
          auVar62 = *(undefined1 (*) [16])(param_3 + lVar31);
          auVar71 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar31);
          puVar3 = (undefined4 *)(param_3 + 0x20 + lVar31);
          auVar103._0_4_ = auVar62._0_4_;
          auVar68 = insertps(auVar71,auVar62,0x8c);
          auVar103._4_4_ = auVar62._12_4_;
          auVar103._8_4_ = auVar71._8_4_;
          auVar103._12_4_ = puVar3[1];
          auVar98._4_4_ = auVar71._0_4_;
          auVar98._0_4_ = auVar62._4_4_;
          auVar98._8_4_ = auVar71._12_4_;
          auVar98._12_4_ = puVar3[2];
          auVar112._0_8_ = auVar68._0_8_;
          auVar112._8_4_ = *puVar3;
          auVar112._12_4_ = puVar3[3];
          auVar62 = *(undefined1 (*) [16])(param_4 + lVar31);
          auVar71 = *(undefined1 (*) [16])(param_4 + 0x10 + lVar31);
          puVar3 = (undefined4 *)(param_4 + 0x20 + lVar31);
          auVar68._0_4_ = auVar62._0_4_;
          auVar72 = insertps(auVar71,auVar62,0x8c);
          auVar68._4_4_ = auVar62._12_4_;
          auVar68._8_4_ = auVar71._8_4_;
          auVar68._12_4_ = puVar3[1];
          auVar77._4_4_ = auVar71._0_4_;
          auVar77._0_4_ = auVar62._4_4_;
          auVar77._8_4_ = auVar71._12_4_;
          auVar77._12_4_ = puVar3[2];
          auVar71._0_8_ = auVar72._0_8_;
          auVar71._8_4_ = *puVar3;
          auVar71._12_4_ = puVar3[3];
        }
        else {
          auVar50._0_4_ = uVar41 & ___xmm_00000024000000180000000c00000000;
          auVar50._4_4_ = uVar42 & _UNK_150b50da4;
          auVar50._8_4_ = uVar43 & _UNK_150b50da8;
          auVar50._12_4_ = uVar44 & _UNK_150b50dac;
          lVar38 = extractps(auVar50,1);
          lVar39 = extractps(auVar50,2);
          lVar36 = extractps(auVar50,3);
          lVar27 = param_2 + lVar31;
          auVar62 = insertps(ZEXT416(*(uint *)(param_2 + lVar31)),*(undefined4 *)(lVar38 + lVar27),
                             0x10);
          auVar62 = insertps(auVar62,*(undefined4 *)(lVar39 + lVar27),0x20);
          auVar63 = insertps(auVar62,*(undefined4 *)(lVar36 + lVar27),0x30);
          auVar51._0_4_ = uVar41 & ___xmm_000000280000001c0000001000000004;
          auVar51._4_4_ = uVar42 & _UNK_150b50db4;
          auVar51._8_4_ = uVar43 & _UNK_150b50db8;
          auVar51._12_4_ = uVar44 & _UNK_150b50dbc;
          lVar37 = extractps(auVar51,1);
          lVar22 = extractps(auVar51,2);
          lVar34 = extractps(auVar51,3);
          uVar35 = (ulonglong)auVar51._0_4_;
          auVar62 = insertps(ZEXT416(*(uint *)(uVar35 + lVar27)),*(undefined4 *)(lVar37 + lVar27),
                             0x10);
          auVar62 = insertps(auVar62,*(undefined4 *)(lVar22 + lVar27),0x20);
          auVar85 = insertps(auVar62,*(undefined4 *)(lVar34 + lVar27),0x30);
          auVar72._0_4_ = uVar41 & ___xmm_0000002c000000200000001400000008;
          auVar72._4_4_ = uVar42 & _UNK_150b50dc4;
          auVar72._8_4_ = uVar43 & _UNK_150b50dc8;
          auVar72._12_4_ = uVar44 & _UNK_150b50dcc;
          lVar26 = extractps(auVar72,1);
          lVar33 = extractps(auVar72,2);
          lVar32 = extractps(auVar72,3);
          uVar17 = (ulonglong)auVar72._0_4_;
          auVar62 = insertps(ZEXT416(*(uint *)(uVar17 + lVar27)),*(undefined4 *)(lVar26 + lVar27),
                             0x10);
          auVar62 = insertps(auVar62,*(undefined4 *)(lVar33 + lVar27),0x20);
          auVar52 = insertps(auVar62,*(undefined4 *)(lVar32 + lVar27),0x30);
          lVar27 = param_3 + lVar31;
          auVar62 = insertps(ZEXT416(*(uint *)(param_3 + lVar31)),*(undefined4 *)(lVar38 + lVar27),
                             0x10);
          auVar62 = insertps(auVar62,*(undefined4 *)(lVar39 + lVar27),0x20);
          auVar103 = insertps(auVar62,*(undefined4 *)(lVar36 + lVar27),0x30);
          auVar62 = insertps(ZEXT416(*(uint *)(uVar35 + lVar27)),*(undefined4 *)(lVar37 + lVar27),
                             0x10);
          auVar62 = insertps(auVar62,*(undefined4 *)(lVar22 + lVar27),0x20);
          auVar98 = insertps(auVar62,*(undefined4 *)(lVar34 + lVar27),0x30);
          auVar62 = insertps(ZEXT416(*(uint *)(uVar17 + lVar27)),*(undefined4 *)(lVar26 + lVar27),
                             0x10);
          auVar62 = insertps(auVar62,*(undefined4 *)(lVar33 + lVar27),0x20);
          auVar112 = insertps(auVar62,*(undefined4 *)(lVar32 + lVar27),0x30);
          lVar27 = param_4 + lVar31;
          auVar62 = insertps(ZEXT416(*(uint *)(param_4 + lVar31)),*(undefined4 *)(lVar38 + lVar27),
                             0x10);
          auVar62 = insertps(auVar62,*(undefined4 *)(lVar39 + lVar27),0x20);
          auVar68 = insertps(auVar62,*(undefined4 *)(lVar36 + lVar27),0x30);
          auVar62 = insertps(ZEXT416(*(uint *)(uVar35 + lVar27)),*(undefined4 *)(lVar37 + lVar27),
                             0x10);
          auVar62 = insertps(auVar62,*(undefined4 *)(lVar22 + lVar27),0x20);
          auVar77 = insertps(auVar62,*(undefined4 *)(lVar34 + lVar27),0x30);
          auVar62 = insertps(ZEXT416(*(uint *)(uVar17 + lVar27)),*(undefined4 *)(lVar26 + lVar27),
                             0x10);
          auVar62 = insertps(auVar62,*(undefined4 *)(lVar33 + lVar27),0x20);
          auVar71 = insertps(auVar62,*(undefined4 *)(lVar32 + lVar27),0x30);
        }
        pauVar25 = (undefined1 (*) [16])(ulonglong)CONCAT31((int3)(uVar24 >> 8),bVar23);
        auVar104._0_8_ =
             CONCAT44(fVar139 - (fVar139 - auVar103._4_4_) * param_6,
                      fVar117 - (fVar117 - auVar103._0_4_) * param_6);
        auVar104._8_4_ = fVar91 - (fVar91 - auVar103._8_4_) * param_6;
        auVar104._12_4_ = fVar140 - (fVar140 - auVar103._12_4_) * param_6;
        auVar45._4_4_ = fVar139;
        auVar45._0_4_ = fVar117;
        auVar45._8_4_ = fVar91;
        auVar45._12_4_ = fVar140;
        bVar40 = (bVar23 & 1) != 0;
        if (bVar40) {
          auVar45._8_4_ = auVar104._8_4_;
          auVar45._0_8_ = auVar104._0_8_;
          auVar45._12_4_ = auVar104._12_4_;
        }
        auVar118._8_8_ = auVar121._8_8_;
        auVar118._0_8_ = auVar129._8_8_;
        fVar137 = fVar137 - (fVar137 - auVar98._0_4_) * param_6;
        fVar138 = fVar138 - (fVar138 - auVar98._4_4_) * param_6;
        fVar139 = fVar95 - (fVar95 - auVar98._8_4_) * param_6;
        fVar140 = fVar83 - (fVar83 - auVar98._12_4_) * param_6;
        auVar99._0_8_ =
             CONCAT44(fVar67 - (fVar67 - auVar112._4_4_) * param_6,
                      fVar126 - (fVar126 - auVar112._0_4_) * param_6);
        auVar99._8_4_ = fVar96 - (fVar96 - auVar112._8_4_) * param_6;
        auVar99._12_4_ = fVar19 - (fVar19 - auVar112._12_4_) * param_6;
        auVar92._8_4_ = fVar95;
        auVar92._0_8_ = auVar129._8_8_;
        auVar92._12_4_ = fVar83;
        auVar108._4_4_ = fVar67;
        auVar108._0_4_ = fVar126;
        auVar108._8_4_ = fVar96;
        auVar108._12_4_ = fVar19;
        if (bVar40) {
          auVar92._4_4_ = fVar138;
          auVar92._0_4_ = fVar137;
          auVar92._8_4_ = fVar139;
          auVar92._12_4_ = fVar140;
          auVar108._8_4_ = auVar99._8_4_;
          auVar108._0_8_ = auVar99._0_8_;
          auVar108._12_4_ = auVar99._12_4_;
          auVar62 = blendps(auVar80,auVar45,1);
          if ((bVar23 & 2) == 0) goto LAB_1405b33ef;
LAB_1405b366d:
          auVar113._8_4_ = auVar104._8_4_;
          auVar113._0_8_ = auVar104._0_8_;
          auVar113._12_4_ = auVar104._12_4_;
          auVar121 = blendps(auVar118,auVar92,1);
          auVar119._4_4_ = fVar138;
          auVar119._0_4_ = fVar137;
          auVar119._8_4_ = fVar139;
          auVar119._12_4_ = fVar140;
          auVar129 = blendps(auVar141,auVar108,1);
          auVar127._8_4_ = auVar99._8_4_;
          auVar127._0_8_ = auVar99._0_8_;
          auVar127._12_4_ = auVar99._12_4_;
          auVar62 = blendps(auVar62,auVar113,2);
          if ((bVar23 & 4) == 0) goto LAB_1405b3426;
LAB_1405b36b0:
          auVar114._8_4_ = auVar104._8_4_;
          auVar114._0_8_ = auVar104._0_8_;
          auVar114._12_4_ = auVar104._12_4_;
          auVar121 = blendps(auVar121,auVar119,2);
          auVar120._4_4_ = fVar138;
          auVar120._0_4_ = fVar137;
          auVar120._8_4_ = fVar139;
          auVar120._12_4_ = fVar140;
          auVar129 = blendps(auVar129,auVar127,2);
          auVar128._8_4_ = auVar99._8_4_;
          auVar128._0_8_ = auVar99._0_8_;
          auVar128._12_4_ = auVar99._12_4_;
          auVar62 = blendps(auVar62,auVar114,4);
          if ((char)bVar23 < '\0') goto LAB_1405b3457;
LAB_1405b36ed:
          auVar104 = auVar62;
          auVar121 = blendps(auVar121,auVar120,4);
          auVar62 = auVar104;
          if ((char)bVar23 < '\0') goto LAB_1405b3464;
LAB_1405b36fe:
          fVar137 = auVar121._0_4_;
          fVar138 = auVar121._4_4_;
          fVar139 = auVar121._8_4_;
          fVar140 = auVar121._12_4_;
          auVar129 = blendps(auVar129,auVar128,4);
        }
        else {
          auVar62 = blendps(auVar80,auVar45,1);
          if ((bVar23 & 2) != 0) goto LAB_1405b366d;
LAB_1405b33ef:
          auVar119 = blendps(auVar118,auVar92,1);
          auVar127 = blendps(auVar141,auVar108,1);
          auVar62 = blendps(auVar62,auVar62,2);
          auVar121 = auVar119;
          auVar129 = auVar127;
          if ((bVar23 & 4) != 0) goto LAB_1405b36b0;
LAB_1405b3426:
          auVar120 = blendps(auVar121,auVar119,2);
          auVar128 = blendps(auVar129,auVar127,2);
          auVar62 = blendps(auVar62,auVar62,4);
          auVar121 = auVar120;
          auVar129 = auVar128;
          if (-1 < (char)bVar23) goto LAB_1405b36ed;
LAB_1405b3457:
          auVar121 = blendps(auVar121,auVar120,4);
          if (-1 < (char)bVar23) goto LAB_1405b36fe;
LAB_1405b3464:
          auVar129 = blendps(auVar129,auVar128,4);
        }
        if (-1 < (char)bVar23) {
          auVar99 = auVar129;
        }
        auVar141 = blendps(auVar62,auVar104,8);
        auVar8._4_4_ = fVar138;
        auVar8._0_4_ = fVar137;
        auVar8._8_4_ = fVar139;
        auVar8._12_4_ = fVar140;
        auVar62 = blendps(auVar121,auVar8,8);
        auVar121 = blendps(auVar129,auVar99,8);
        auVar73._0_8_ =
             CONCAT44(auVar62._4_4_ -
                      ((auVar62._4_4_ - auVar85._4_4_) - auVar77._4_4_ * param_5) * param_7,
                      auVar62._0_4_ -
                      ((auVar62._0_4_ - auVar85._0_4_) - auVar77._0_4_ * param_5) * param_7);
        auVar73._8_4_ =
             auVar62._8_4_ - ((auVar62._8_4_ - auVar85._8_4_) - auVar77._8_4_ * param_5) * param_7;
        auVar73._12_4_ =
             auVar62._12_4_ -
             ((auVar62._12_4_ - auVar85._12_4_) - auVar77._12_4_ * param_5) * param_7;
        auVar53._0_8_ =
             CONCAT44(auVar121._4_4_ -
                      ((auVar121._4_4_ - auVar52._4_4_) - auVar71._4_4_ * param_5) * param_7,
                      auVar121._0_4_ -
                      ((auVar121._0_4_ - auVar52._0_4_) - auVar71._0_4_ * param_5) * param_7);
        auVar53._8_4_ =
             auVar121._8_4_ - ((auVar121._8_4_ - auVar52._8_4_) - auVar71._8_4_ * param_5) * param_7
        ;
        auVar53._12_4_ =
             auVar121._12_4_ -
             ((auVar121._12_4_ - auVar52._12_4_) - auVar71._12_4_ * param_5) * param_7;
        auVar69._0_8_ =
             CONCAT44(auVar141._4_4_ -
                      ((auVar141._4_4_ - auVar63._4_4_) - auVar68._4_4_ * param_5) * param_7,
                      auVar141._0_4_ -
                      ((auVar141._0_4_ - auVar63._0_4_) - auVar68._0_4_ * param_5) * param_7);
        auVar69._8_4_ =
             auVar141._8_4_ - ((auVar141._8_4_ - auVar63._8_4_) - auVar68._8_4_ * param_5) * param_7
        ;
        auVar69._12_4_ =
             auVar141._12_4_ -
             ((auVar141._12_4_ - auVar63._12_4_) - auVar68._12_4_ * param_5) * param_7;
        if ((bVar23 & 1) == 0) {
          auVar129 = blendps(auVar141,auVar141,1);
          auVar64 = auVar121;
          auVar86 = auVar62;
          auVar100 = auVar141;
          auVar105 = auVar129;
          if ((bVar23 & 2) != 0) goto LAB_1405b373f;
LAB_1405b3500:
          uVar97 = auVar100._0_4_;
          auVar122 = blendps(auVar62,auVar86,1);
          uVar84 = auVar86._0_4_;
          auVar130 = blendps(auVar121,auVar64,1);
          uVar61 = auVar64._0_4_;
          auVar129 = blendps(auVar105,auVar105,2);
          auVar62 = auVar122;
          auVar121 = auVar130;
          auVar46 = auVar129;
          if ((bVar23 & 4) != 0) goto LAB_1405b3781;
LAB_1405b3537:
          auVar123 = blendps(auVar62,auVar122,2);
          auVar131 = blendps(auVar121,auVar130,2);
          auVar62 = blendps(auVar46,auVar46,4);
          auVar141 = auVar123;
          auVar121 = auVar131;
          if (-1 < (char)bVar23) goto LAB_1405b37bc;
LAB_1405b3568:
          auVar129 = blendps(auVar141,auVar123,4);
          if (-1 < (char)bVar23) goto LAB_1405b37cd;
LAB_1405b3575:
          auVar121 = blendps(auVar121,auVar131,4);
        }
        else {
          auVar100._8_4_ = auVar69._8_4_;
          auVar100._0_8_ = auVar69._0_8_;
          auVar100._12_4_ = auVar69._12_4_;
          auVar86._8_4_ = auVar73._8_4_;
          auVar86._0_8_ = auVar73._0_8_;
          auVar86._12_4_ = auVar73._12_4_;
          auVar64._8_4_ = auVar53._8_4_;
          auVar64._0_8_ = auVar53._0_8_;
          auVar64._12_4_ = auVar53._12_4_;
          auVar129 = blendps(auVar141,auVar100,1);
          auVar105 = auVar129;
          if ((bVar23 & 2) == 0) goto LAB_1405b3500;
LAB_1405b373f:
          uVar97 = auVar100._0_4_;
          auVar105._8_4_ = auVar69._8_4_;
          auVar105._0_8_ = auVar69._0_8_;
          auVar105._12_4_ = auVar69._12_4_;
          auVar62 = blendps(auVar62,auVar86,1);
          uVar84 = auVar86._0_4_;
          auVar122._8_4_ = auVar73._8_4_;
          auVar122._0_8_ = auVar73._0_8_;
          auVar122._12_4_ = auVar73._12_4_;
          auVar121 = blendps(auVar121,auVar64,1);
          uVar61 = auVar64._0_4_;
          auVar130._8_4_ = auVar53._8_4_;
          auVar130._0_8_ = auVar53._0_8_;
          auVar130._12_4_ = auVar53._12_4_;
          auVar129 = blendps(auVar129,auVar105,2);
          auVar46 = auVar129;
          if ((bVar23 & 4) == 0) goto LAB_1405b3537;
LAB_1405b3781:
          auVar46._8_4_ = auVar69._8_4_;
          auVar46._0_8_ = auVar69._0_8_;
          auVar46._12_4_ = auVar69._12_4_;
          auVar141 = blendps(auVar62,auVar122,2);
          auVar123._8_4_ = auVar73._8_4_;
          auVar123._0_8_ = auVar73._0_8_;
          auVar123._12_4_ = auVar73._12_4_;
          auVar121 = blendps(auVar121,auVar130,2);
          auVar131._8_4_ = auVar53._8_4_;
          auVar131._0_8_ = auVar53._0_8_;
          auVar131._12_4_ = auVar53._12_4_;
          auVar62 = blendps(auVar129,auVar46,4);
          if ((char)bVar23 < '\0') goto LAB_1405b3568;
LAB_1405b37bc:
          auVar69 = auVar62;
          auVar129 = blendps(auVar141,auVar123,4);
          auVar62 = auVar69;
          if ((char)bVar23 < '\0') goto LAB_1405b3575;
LAB_1405b37cd:
          auVar121 = blendps(auVar121,auVar131,4);
          auVar73 = auVar129;
        }
        auVar141 = auVar121;
        if ((char)bVar23 < '\0') {
          auVar141 = auVar53;
        }
        if ((~bVar23 & 0xf) == 0) {
          auVar141 = blendps(auVar141,auVar121,7);
          auVar71 = blendps(auVar73,auVar129,7);
          auVar80 = blendps(auVar69,auVar62,7);
          auVar142._0_8_ = auVar62._0_8_;
          auVar142._8_4_ = auVar62._4_4_;
          auVar142._12_4_ = auVar129._4_4_;
          auVar132._0_8_ = auVar121._0_8_;
          auVar132._8_4_ = auVar121._4_4_;
          auVar132._12_4_ = *(float *)(pauVar30[1] + 0xc);
          *(ulonglong *)*pauVar30 = CONCAT44(auVar129._0_4_,auVar62._0_4_);
          *(ulonglong *)(*pauVar30 + 8) = CONCAT44(auVar55._12_4_,auVar121._0_4_);
          *(longlong *)pauVar30[1] = auVar142._8_8_;
          *(longlong *)(pauVar30[1] + 8) = auVar132._8_8_;
          *(int *)pauVar30[2] = auVar80._8_4_;
          *(int *)(pauVar30[2] + 4) = auVar71._8_4_;
          *(int *)(pauVar30[2] + 8) = auVar141._8_4_;
          *(float *)(pauVar30[2] + 0xc) = auVar74._12_4_;
          *(int *)pauVar30[3] = auVar80._12_4_;
          *(int *)(pauVar30[3] + 4) = auVar71._12_4_;
          *(int *)(pauVar30[3] + 8) = auVar141._12_4_;
          *(float *)(pauVar30[3] + 0xc) = fVar20;
        }
        else {
          if ((bVar23 & 1) == 0) {
            if ((bVar23 & 2) != 0) goto LAB_1405b385e;
LAB_1405b35b1:
            if ((bVar23 & 4) != 0) goto LAB_1405b3870;
LAB_1405b35bb:
            if ((char)bVar23 < '\0') goto LAB_1405b387f;
LAB_1405b35c3:
            if ((bVar23 & 1) != 0) goto LAB_1405b3890;
LAB_1405b35cd:
            if ((bVar23 & 2) != 0) goto LAB_1405b38a7;
LAB_1405b35df:
            auVar62 = *pauVar1;
            if ((bVar23 & 4) != 0) goto LAB_1405b38b9;
LAB_1405b35e9:
            if ((char)bVar23 < '\0') goto LAB_1405b38c9;
LAB_1405b35f1:
            if ((bVar23 & 1) != 0) goto LAB_1405b38da;
LAB_1405b35fb:
            if ((bVar23 & 2) != 0) goto LAB_1405b38e9;
LAB_1405b3605:
            if ((bVar23 & 4) != 0) goto LAB_1405b38fa;
LAB_1405b360f:
            if ((char)bVar23 < '\0') goto LAB_1405b3909;
LAB_1405b3617:
            if ((bVar23 & 1) != 0) goto LAB_1405b3922;
LAB_1405b3629:
            if ((bVar23 & 2) != 0) goto LAB_1405b393c;
LAB_1405b363b:
            auVar55 = *pauVar2;
          }
          else {
            *(undefined4 *)*pauVar30 = uVar97;
            if ((bVar23 & 2) == 0) goto LAB_1405b35b1;
LAB_1405b385e:
            uVar4 = extractps(auVar105,1);
            *(undefined8 *)pauVar30[1] = uVar4;
            if ((bVar23 & 4) == 0) goto LAB_1405b35bb;
LAB_1405b3870:
            uVar4 = extractps(auVar46,2);
            *(undefined8 *)pauVar30[2] = uVar4;
            if (-1 < (char)bVar23) goto LAB_1405b35c3;
LAB_1405b387f:
            uVar4 = extractps(auVar69,3);
            *(undefined8 *)pauVar30[3] = uVar4;
            if ((bVar23 & 1) == 0) goto LAB_1405b35cd;
LAB_1405b3890:
            *(undefined4 *)(*pauVar30 + 4) = uVar84;
            if ((bVar23 & 2) == 0) goto LAB_1405b35df;
LAB_1405b38a7:
            auVar62 = *pauVar1;
            uVar4 = extractps(auVar122,1);
            *(undefined8 *)(pauVar30[1] + 4) = uVar4;
            if ((bVar23 & 4) == 0) goto LAB_1405b35e9;
LAB_1405b38b9:
            uVar4 = extractps(auVar123,2);
            *(undefined8 *)(pauVar30[2] + 4) = uVar4;
            if (-1 < (char)bVar23) goto LAB_1405b35f1;
LAB_1405b38c9:
            uVar4 = extractps(auVar73,3);
            *(undefined8 *)(pauVar30[3] + 4) = uVar4;
            if ((bVar23 & 1) == 0) goto LAB_1405b35fb;
LAB_1405b38da:
            *(undefined4 *)(*pauVar30 + 8) = uVar61;
            if ((bVar23 & 2) == 0) goto LAB_1405b3605;
LAB_1405b38e9:
            uVar4 = extractps(auVar130,1);
            *(undefined8 *)(pauVar30[1] + 8) = uVar4;
            if ((bVar23 & 4) == 0) goto LAB_1405b360f;
LAB_1405b38fa:
            uVar4 = extractps(auVar131,2);
            *(undefined8 *)(pauVar30[2] + 8) = uVar4;
            if (-1 < (char)bVar23) goto LAB_1405b3617;
LAB_1405b3909:
            uVar4 = extractps(auVar141,3);
            *(undefined8 *)(pauVar30[3] + 8) = uVar4;
            if ((bVar23 & 1) == 0) goto LAB_1405b3629;
LAB_1405b3922:
            uVar4 = extractps(auVar55,3);
            *(undefined8 *)(*pauVar30 + 0xc) = uVar4;
            if ((bVar23 & 2) == 0) goto LAB_1405b363b;
LAB_1405b393c:
            auVar55 = *pauVar2;
            uVar4 = extractps(auVar62,3);
            *(undefined8 *)(pauVar30[1] + 0xc) = uVar4;
          }
          if ((bVar23 & 4) != 0) {
            uVar4 = extractps(auVar74,3);
            *(undefined8 *)(pauVar30[2] + 0xc) = uVar4;
          }
          if ((char)bVar23 < '\0') {
            uVar4 = extractps(auVar55,3);
            *(undefined8 *)(pauVar30[3] + 0xc) = uVar4;
          }
        }
      }
      lVar31 = lVar31 + 0x30;
      pauVar30 = pauVar30 + 4;
      uVar29 = uVar29 + 4;
    } while ((int)uVar29 < (int)(uVar28 & 0xfffffffc));
  }
  if ((int)param_8 <= (int)uVar29) {
    return;
  }
  bVar40 = (int)(uVar29 | (uint)__xmm_00000003000000020000000100000000) < (int)param_8;
  auVar55._0_4_ = -(uint)bVar40;
  bVar5 = (int)(uVar29 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_8;
  auVar55._4_4_ = -(uint)bVar5;
  bVar6 = (int)(uVar29 | _UNK_150631e08) < (int)param_8;
  auVar55._8_4_ = -(uint)bVar6;
  bVar7 = (int)(uVar29 | _UNK_150631e0c) < (int)param_8;
  auVar55._12_4_ = -(uint)bVar7;
  uVar35 = (ulonglong)uVar29;
  param_1 = param_1 + uVar35;
  iVar21 = movmskps(uVar29 * 0x10,auVar55);
  if (iVar21 == 0xf) {
    auVar55 = *param_1;
    auVar74 = param_1[2];
    auVar88._8_4_ = auVar55._4_4_;
    auVar88._0_8_ = auVar55._0_8_;
    auVar88._12_4_ = *(undefined4 *)(param_1[1] + 4);
    auVar75._4_4_ = *(undefined4 *)param_1[1];
    auVar75._0_4_ = auVar55._0_4_;
    auVar56._0_8_ = CONCAT44(*(undefined4 *)(param_1[1] + 8),auVar55._8_4_);
    auVar56._8_4_ = auVar55._12_4_;
    auVar56._12_4_ = *(undefined4 *)(param_1[1] + 0xc);
    auVar79._8_4_ = auVar74._4_4_;
    auVar79._0_8_ = auVar74._0_8_;
    auVar79._12_4_ = *(undefined4 *)(param_1[3] + 4);
    auVar78._8_8_ = auVar79._8_8_;
    auVar75._12_4_ = *(undefined4 *)param_1[3];
    auVar75._8_4_ = auVar74._0_4_;
    auVar70._0_8_ = CONCAT44(*(undefined4 *)(param_1[3] + 8),auVar74._8_4_);
    auVar70._8_4_ = auVar74._12_4_;
    auVar70._12_4_ = *(undefined4 *)(param_1[3] + 0xc);
    auVar78._0_8_ = auVar88._8_8_;
    auVar87._8_8_ = auVar70._0_8_;
    auVar87._0_8_ = auVar56._0_8_;
    auVar74._8_8_ = auVar70._8_8_;
    auVar74._0_8_ = auVar56._8_8_;
    uVar28 = 0xf;
  }
  else {
    auVar54._0_4_ = ___xmm_00000030000000200000001000000000 & auVar55._0_4_;
    auVar54._4_4_ = _UNK_150b511c4 & auVar55._4_4_;
    auVar54._8_4_ = _UNK_150b511c8 & auVar55._8_4_;
    auVar54._12_4_ = _UNK_150b511cc & auVar55._12_4_;
    lVar31 = extractps(auVar54,1);
    lVar27 = extractps(auVar54,2);
    lVar22 = extractps(auVar54,3);
    auVar74 = insertps(ZEXT416(*(uint *)*param_1),*(undefined4 *)(*param_1 + lVar31),0x10);
    auVar74 = insertps(auVar74,*(undefined4 *)(*param_1 + lVar27),0x20);
    auVar75 = insertps(auVar74,*(undefined4 *)(*param_1 + lVar22),0x30);
    auVar74 = ___xmm_00000034000000240000001400000004 & auVar55;
    auVar62 = insertps(ZEXT416(*(uint *)(*param_1 + auVar74._0_4_)),
                       *(undefined4 *)(*param_1 + auVar74._4_4_),0x10);
    auVar62 = insertps(auVar62,*(undefined4 *)(*param_1 + auVar74._8_4_),0x20);
    auVar78 = insertps(auVar62,*(undefined4 *)(*param_1 + auVar74._12_4_),0x30);
    auVar74 = ___xmm_00000038000000280000001800000008 & auVar55;
    auVar62 = insertps(ZEXT416(*(uint *)(*param_1 + auVar74._0_4_)),
                       *(undefined4 *)(*param_1 + auVar74._4_4_),0x10);
    auVar62 = insertps(auVar62,*(undefined4 *)(*param_1 + auVar74._8_4_),0x20);
    auVar87 = insertps(auVar62,*(undefined4 *)(*param_1 + auVar74._12_4_),0x30);
    auVar55 = ___xmm_0000003c0000002c0000001c0000000c & auVar55;
    uVar28 = auVar55._4_4_;
    auVar74 = insertps(ZEXT416(*(uint *)(*param_1 + auVar55._0_4_)),
                       *(undefined4 *)(*param_1 + uVar28),0x10);
    auVar74 = insertps(auVar74,*(undefined4 *)(*param_1 + auVar55._8_4_),0x20);
    auVar74 = insertps(auVar74,*(undefined4 *)(*param_1 + auVar55._12_4_),0x30);
  }
  fVar139 = auVar74._0_4_;
  auVar57._0_4_ = -(uint)(0.0 < fVar139 && bVar40);
  auVar57._4_4_ = -(uint)(0.0 < auVar74._4_4_ && bVar5);
  auVar57._8_4_ = -(uint)(0.0 < auVar74._8_4_ && bVar6);
  auVar57._12_4_ = -(uint)(0.0 < auVar74._12_4_ && bVar7);
  iVar21 = movmskps(uVar28,auVar57);
  if (iVar21 != 0) {
    bVar23 = (char)((char)iVar21 << 4) >> 4;
    pauVar25 = (undefined1 (*) [16])(param_2 + uVar35 * 0xc);
    if ((~bVar23 & 0xf) == 0) {
      auVar55 = *pauVar25;
      auVar62 = pauVar25[1];
      auVar48._0_4_ = auVar55._0_4_;
      auVar121 = insertps(auVar62,auVar55,0x8c);
      auVar48._4_4_ = auVar55._12_4_;
      auVar48._8_4_ = auVar62._8_4_;
      auVar48._12_4_ = *(undefined4 *)(pauVar25[2] + 4);
      auVar66._4_4_ = auVar62._0_4_;
      auVar66._0_4_ = auVar55._4_4_;
      auVar66._8_4_ = auVar62._12_4_;
      auVar66._12_4_ = *(undefined4 *)(pauVar25[2] + 8);
      auVar59._0_8_ = auVar121._0_8_;
      auVar59._8_4_ = *(undefined4 *)pauVar25[2];
      auVar59._12_4_ = *(undefined4 *)(pauVar25[2] + 0xc);
      lVar31 = uVar35 * 0xc;
      auVar55 = *(undefined1 (*) [16])(param_3 + lVar31);
      auVar62 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar31);
      puVar3 = (undefined4 *)(param_3 + 0x20 + lVar31);
      auVar109._0_4_ = auVar55._0_4_;
      auVar121 = insertps(auVar62,auVar55,0x8c);
      auVar109._4_4_ = auVar55._12_4_;
      auVar109._8_4_ = auVar62._8_4_;
      auVar109._12_4_ = puVar3[1];
      auVar115._4_4_ = auVar62._0_4_;
      auVar115._0_4_ = auVar55._4_4_;
      auVar115._8_4_ = auVar62._12_4_;
      auVar115._12_4_ = puVar3[2];
      auVar124._0_8_ = auVar121._0_8_;
      auVar124._8_4_ = *puVar3;
      auVar124._12_4_ = puVar3[3];
      auVar55 = *(undefined1 (*) [16])(param_4 + lVar31);
      auVar62 = *(undefined1 (*) [16])(param_4 + 0x10 + lVar31);
      puVar3 = (undefined4 *)(param_4 + 0x20 + lVar31);
      auVar93._0_4_ = auVar55._0_4_;
      auVar121 = insertps(auVar62,auVar55,0x8c);
      auVar93._4_4_ = auVar55._12_4_;
      auVar93._8_4_ = auVar62._8_4_;
      auVar93._12_4_ = puVar3[1];
      auVar101._4_4_ = auVar62._0_4_;
      auVar101._0_4_ = auVar55._4_4_;
      auVar101._8_4_ = auVar62._12_4_;
      auVar101._12_4_ = puVar3[2];
      auVar106._0_8_ = auVar121._0_8_;
      auVar106._8_4_ = *puVar3;
      auVar106._12_4_ = puVar3[3];
    }
    else {
      auVar47._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar57._0_4_;
      auVar47._4_4_ = _UNK_150b50da4 & auVar57._4_4_;
      auVar47._8_4_ = _UNK_150b50da8 & auVar57._8_4_;
      auVar47._12_4_ = _UNK_150b50dac & auVar57._12_4_;
      lVar34 = extractps(auVar47,1);
      lVar32 = extractps(auVar47,2);
      lVar33 = extractps(auVar47,3);
      auVar55 = insertps(ZEXT416(*(uint *)*pauVar25),*(undefined4 *)(*pauVar25 + lVar34),0x10);
      auVar55 = insertps(auVar55,*(undefined4 *)(*pauVar25 + lVar32),0x20);
      auVar48 = insertps(auVar55,*(undefined4 *)(*pauVar25 + lVar33),0x30);
      auVar65._0_4_ = ___xmm_000000280000001c0000001000000004 & auVar57._0_4_;
      auVar65._4_4_ = _UNK_150b50db4 & auVar57._4_4_;
      auVar65._8_4_ = _UNK_150b50db8 & auVar57._8_4_;
      auVar65._12_4_ = _UNK_150b50dbc & auVar57._12_4_;
      lVar26 = extractps(auVar65,1);
      lVar38 = extractps(auVar65,2);
      lVar39 = extractps(auVar65,3);
      uVar17 = (ulonglong)auVar65._0_4_;
      auVar55 = insertps(ZEXT416(*(uint *)(*pauVar25 + uVar17)),*(undefined4 *)(*pauVar25 + lVar26),
                         0x10);
      auVar55 = insertps(auVar55,*(undefined4 *)(*pauVar25 + lVar38),0x20);
      auVar66 = insertps(auVar55,*(undefined4 *)(*pauVar25 + lVar39),0x30);
      auVar58._0_4_ = auVar57._0_4_ & ___xmm_0000002c000000200000001400000008;
      auVar58._4_4_ = auVar57._4_4_ & _UNK_150b50dc4;
      auVar58._8_4_ = auVar57._8_4_ & _UNK_150b50dc8;
      auVar58._12_4_ = auVar57._12_4_ & _UNK_150b50dcc;
      lVar22 = extractps(auVar58,1);
      lVar36 = extractps(auVar58,2);
      lVar37 = extractps(auVar58,3);
      uVar18 = (ulonglong)auVar58._0_4_;
      auVar55 = insertps(ZEXT416(*(uint *)(*pauVar25 + uVar18)),*(undefined4 *)(*pauVar25 + lVar22),
                         0x10);
      auVar55 = insertps(auVar55,*(undefined4 *)(*pauVar25 + lVar36),0x20);
      auVar59 = insertps(auVar55,*(undefined4 *)(*pauVar25 + lVar37),0x30);
      lVar27 = uVar35 * 0xc;
      lVar31 = param_3 + lVar27;
      auVar55 = insertps(ZEXT416(*(uint *)(param_3 + lVar27)),*(undefined4 *)(lVar34 + lVar31),0x10)
      ;
      auVar55 = insertps(auVar55,*(undefined4 *)(lVar32 + lVar31),0x20);
      auVar109 = insertps(auVar55,*(undefined4 *)(lVar33 + lVar31),0x30);
      auVar55 = insertps(ZEXT416(*(uint *)(uVar17 + lVar31)),*(undefined4 *)(lVar26 + lVar31),0x10);
      auVar55 = insertps(auVar55,*(undefined4 *)(lVar38 + lVar31),0x20);
      auVar115 = insertps(auVar55,*(undefined4 *)(lVar39 + lVar31),0x30);
      auVar55 = insertps(ZEXT416(*(uint *)(uVar18 + lVar31)),*(undefined4 *)(lVar22 + lVar31),0x10);
      auVar55 = insertps(auVar55,*(undefined4 *)(lVar36 + lVar31),0x20);
      auVar124 = insertps(auVar55,*(undefined4 *)(lVar37 + lVar31),0x30);
      lVar31 = param_4 + lVar27;
      auVar55 = insertps(ZEXT416(*(uint *)(param_4 + lVar27)),*(undefined4 *)(lVar34 + lVar31),0x10)
      ;
      auVar55 = insertps(auVar55,*(undefined4 *)(lVar32 + lVar31),0x20);
      auVar93 = insertps(auVar55,*(undefined4 *)(lVar33 + lVar31),0x30);
      auVar55 = insertps(ZEXT416(*(uint *)(uVar17 + lVar31)),*(undefined4 *)(lVar26 + lVar31),0x10);
      auVar55 = insertps(auVar55,*(undefined4 *)(lVar38 + lVar31),0x20);
      auVar101 = insertps(auVar55,*(undefined4 *)(lVar39 + lVar31),0x30);
      auVar55 = insertps(ZEXT416(*(uint *)(uVar18 + lVar31)),*(undefined4 *)(lVar22 + lVar31),0x10);
      auVar55 = insertps(auVar55,*(undefined4 *)(lVar36 + lVar31),0x20);
      auVar106 = insertps(auVar55,*(undefined4 *)(lVar37 + lVar31),0x30);
    }
    fVar138 = auVar78._0_4_;
    fVar67 = auVar78._4_4_;
    fVar140 = auVar78._8_4_;
    fVar83 = auVar78._12_4_;
    auVar110._0_8_ =
         CONCAT44(auVar75._4_4_ - (auVar75._4_4_ - auVar109._4_4_) * param_6,
                  auVar75._0_4_ - (auVar75._0_4_ - auVar109._0_4_) * param_6);
    auVar110._8_4_ = auVar75._8_4_ - (auVar75._8_4_ - auVar109._8_4_) * param_6;
    auVar110._12_4_ = auVar75._12_4_ - (auVar75._12_4_ - auVar109._12_4_) * param_6;
    bVar40 = (bVar23 & 1) == 0;
    auVar143 = auVar75;
    if (!bVar40) {
      auVar143._8_4_ = auVar110._8_4_;
      auVar143._0_8_ = auVar110._0_8_;
      auVar143._12_4_ = auVar110._12_4_;
    }
    auVar81._0_4_ = fVar138 - (fVar138 - auVar115._0_4_) * param_6;
    auVar81._4_4_ = fVar67 - (fVar67 - auVar115._4_4_) * param_6;
    auVar81._8_4_ = fVar140 - (fVar140 - auVar115._8_4_) * param_6;
    auVar81._12_4_ = fVar83 - (fVar83 - auVar115._12_4_) * param_6;
    auVar89._0_8_ =
         CONCAT44(auVar87._4_4_ - (auVar87._4_4_ - auVar124._4_4_) * param_6,
                  auVar87._0_4_ - (auVar87._0_4_ - auVar124._0_4_) * param_6);
    auVar89._8_4_ = auVar87._8_4_ - (auVar87._8_4_ - auVar124._8_4_) * param_6;
    auVar89._12_4_ = auVar87._12_4_ - (auVar87._12_4_ - auVar124._12_4_) * param_6;
    if (bVar40) {
      auVar55 = blendps(auVar75,auVar143,1);
      auVar133 = auVar87;
    }
    else {
      auVar133._8_4_ = auVar89._8_4_;
      auVar133._0_8_ = auVar89._0_8_;
      auVar133._12_4_ = auVar89._12_4_;
      auVar55 = blendps(auVar75,auVar143,1);
      fVar138 = auVar81._0_4_;
      fVar67 = auVar81._4_4_;
      fVar140 = auVar81._8_4_;
      fVar83 = auVar81._12_4_;
    }
    bVar40 = (bVar23 & 2) != 0;
    auVar144 = auVar55;
    if (bVar40) {
      auVar144._8_4_ = auVar110._8_4_;
      auVar144._0_8_ = auVar110._0_8_;
      auVar144._12_4_ = auVar110._12_4_;
    }
    auVar9._4_4_ = fVar67;
    auVar9._0_4_ = fVar138;
    auVar9._8_4_ = fVar140;
    auVar9._12_4_ = fVar83;
    auVar62 = blendps(auVar78,auVar9,1);
    fVar138 = auVar62._0_4_;
    fVar67 = auVar62._4_4_;
    fVar140 = auVar62._8_4_;
    fVar83 = auVar62._12_4_;
    if (bVar40) {
      auVar121 = blendps(auVar87,auVar133,1);
      auVar134._8_4_ = auVar89._8_4_;
      auVar134._0_8_ = auVar89._0_8_;
      auVar134._12_4_ = auVar89._12_4_;
      auVar55 = blendps(auVar55,auVar144,2);
      fVar138 = auVar81._0_4_;
      fVar67 = auVar81._4_4_;
      fVar140 = auVar81._8_4_;
      fVar83 = auVar81._12_4_;
    }
    else {
      auVar121 = blendps(auVar87,auVar133,1);
      auVar55 = blendps(auVar55,auVar144,2);
      auVar134 = auVar121;
    }
    if ((bVar23 & 4) == 0) {
      auVar10._4_4_ = fVar67;
      auVar10._0_4_ = fVar138;
      auVar10._8_4_ = fVar140;
      auVar10._12_4_ = fVar83;
      auVar129 = blendps(auVar62,auVar10,2);
      fVar138 = auVar129._0_4_;
      fVar67 = auVar129._4_4_;
      fVar140 = auVar129._8_4_;
      fVar83 = auVar129._12_4_;
      auVar62 = blendps(auVar121,auVar134,2);
      auVar55 = blendps(auVar55,auVar55,4);
      auVar135 = auVar62;
    }
    else {
      auVar145._8_4_ = auVar110._8_4_;
      auVar145._0_8_ = auVar110._0_8_;
      auVar145._12_4_ = auVar110._12_4_;
      auVar16._4_4_ = fVar67;
      auVar16._0_4_ = fVar138;
      auVar16._8_4_ = fVar140;
      auVar16._12_4_ = fVar83;
      auVar129 = blendps(auVar62,auVar16,2);
      auVar62 = blendps(auVar121,auVar134,2);
      auVar135._8_4_ = auVar89._8_4_;
      auVar135._0_8_ = auVar89._0_8_;
      auVar135._12_4_ = auVar89._12_4_;
      auVar55 = blendps(auVar55,auVar145,4);
      fVar138 = auVar81._0_4_;
      fVar67 = auVar81._4_4_;
      fVar140 = auVar81._8_4_;
      fVar83 = auVar81._12_4_;
    }
    if ((char)bVar23 < '\0') {
      auVar11._4_4_ = fVar67;
      auVar11._0_4_ = fVar138;
      auVar11._8_4_ = fVar140;
      auVar11._12_4_ = fVar83;
      auVar121 = blendps(auVar129,auVar11,4);
      auVar62 = blendps(auVar62,auVar135,4);
    }
    else {
      auVar15._4_4_ = fVar67;
      auVar15._0_4_ = fVar138;
      auVar15._8_4_ = fVar140;
      auVar15._12_4_ = fVar83;
      auVar81 = blendps(auVar129,auVar15,4);
      auVar89 = blendps(auVar62,auVar135,4);
      auVar62 = auVar89;
      auVar110 = auVar55;
      auVar121 = auVar81;
    }
    auVar55 = blendps(auVar55,auVar110,8);
    auVar121 = blendps(auVar121,auVar81,8);
    auVar62 = blendps(auVar62,auVar89,8);
    fVar138 = auVar121._0_4_ -
              ((auVar121._0_4_ - auVar66._0_4_) - auVar101._0_4_ * param_5) * param_7;
    fVar67 = auVar121._4_4_ -
             ((auVar121._4_4_ - auVar66._4_4_) - auVar101._4_4_ * param_5) * param_7;
    auVar82._0_8_ = CONCAT44(fVar67,fVar138);
    auVar82._8_4_ =
         auVar121._8_4_ - ((auVar121._8_4_ - auVar66._8_4_) - auVar101._8_4_ * param_5) * param_7;
    auVar82._12_4_ =
         auVar121._12_4_ -
         ((auVar121._12_4_ - auVar66._12_4_) - auVar101._12_4_ * param_5) * param_7;
    auVar60._0_8_ =
         CONCAT44(auVar62._4_4_ -
                  ((auVar62._4_4_ - auVar59._4_4_) - auVar106._4_4_ * param_5) * param_7,
                  auVar62._0_4_ -
                  ((auVar62._0_4_ - auVar59._0_4_) - auVar106._0_4_ * param_5) * param_7);
    auVar60._8_4_ =
         auVar62._8_4_ - ((auVar62._8_4_ - auVar59._8_4_) - auVar106._8_4_ * param_5) * param_7;
    auVar60._12_4_ =
         auVar62._12_4_ - ((auVar62._12_4_ - auVar59._12_4_) - auVar106._12_4_ * param_5) * param_7;
    auVar94._0_8_ =
         CONCAT44(auVar55._4_4_ -
                  ((auVar55._4_4_ - auVar48._4_4_) - param_5 * auVar93._4_4_) * param_7,
                  auVar55._0_4_ -
                  ((auVar55._0_4_ - auVar48._0_4_) - param_5 * auVar93._0_4_) * param_7);
    auVar94._8_4_ =
         auVar55._8_4_ - ((auVar55._8_4_ - auVar48._8_4_) - param_5 * auVar93._8_4_) * param_7;
    auVar94._12_4_ =
         auVar55._12_4_ - ((auVar55._12_4_ - auVar48._12_4_) - param_5 * auVar93._12_4_) * param_7;
    if ((bVar23 & 1) == 0) {
      auVar129 = blendps(auVar55,auVar55,1);
      auVar49 = auVar62;
      auVar107 = auVar121;
    }
    else {
      auVar125._8_4_ = auVar94._8_4_;
      auVar125._0_8_ = auVar94._0_8_;
      auVar125._12_4_ = auVar94._12_4_;
      auVar107._8_4_ = auVar82._8_4_;
      auVar107._0_8_ = auVar82._0_8_;
      auVar107._12_4_ = auVar82._12_4_;
      auVar49._8_4_ = auVar60._8_4_;
      auVar49._0_8_ = auVar60._0_8_;
      auVar49._12_4_ = auVar60._12_4_;
      auVar129 = blendps(auVar55,auVar125,1);
      auVar55 = auVar125;
    }
    if ((bVar23 & 2) == 0) {
      auVar141 = blendps(auVar121,auVar107,1);
      auVar121 = blendps(auVar62,auVar49,1);
      auVar62 = blendps(auVar129,auVar129,2);
      auVar102 = auVar121;
      auVar116 = auVar141;
    }
    else {
      auVar136._8_4_ = auVar94._8_4_;
      auVar136._0_8_ = auVar94._0_8_;
      auVar136._12_4_ = auVar94._12_4_;
      auVar141 = blendps(auVar121,auVar107,1);
      auVar116._8_4_ = auVar82._8_4_;
      auVar116._0_8_ = auVar82._0_8_;
      auVar116._12_4_ = auVar82._12_4_;
      auVar121 = blendps(auVar62,auVar49,1);
      auVar102._8_4_ = auVar60._8_4_;
      auVar102._0_8_ = auVar60._0_8_;
      auVar102._12_4_ = auVar60._12_4_;
      auVar62 = blendps(auVar129,auVar136,2);
      auVar129 = auVar136;
    }
    if ((bVar23 & 4) == 0) {
      auVar80 = blendps(auVar141,auVar116,2);
      fVar138 = auVar80._0_4_;
      fVar67 = auVar80._4_4_;
      fVar140 = auVar80._8_4_;
      fVar83 = auVar80._12_4_;
      auVar141 = blendps(auVar121,auVar102,2);
      auVar121 = blendps(auVar62,auVar62,4);
      auVar111 = auVar141;
    }
    else {
      auVar146._8_4_ = auVar94._8_4_;
      auVar146._0_8_ = auVar94._0_8_;
      auVar146._12_4_ = auVar94._12_4_;
      auVar80 = blendps(auVar141,auVar116,2);
      auVar141 = blendps(auVar121,auVar102,2);
      auVar111._8_4_ = auVar60._8_4_;
      auVar111._0_8_ = auVar60._0_8_;
      auVar111._12_4_ = auVar60._12_4_;
      auVar121 = blendps(auVar62,auVar146,4);
      fVar140 = auVar82._8_4_;
      fVar83 = auVar82._12_4_;
      auVar62 = auVar146;
    }
    if ((char)bVar23 < '\0') {
      auVar12._4_4_ = fVar67;
      auVar12._0_4_ = fVar138;
      auVar12._8_4_ = fVar140;
      auVar12._12_4_ = fVar83;
      auVar80 = blendps(auVar80,auVar12,4);
      auVar141 = blendps(auVar141,auVar111,4);
    }
    else {
      auVar14._4_4_ = fVar67;
      auVar14._0_4_ = fVar138;
      auVar14._8_4_ = fVar140;
      auVar14._12_4_ = fVar83;
      auVar82 = blendps(auVar80,auVar14,4);
      auVar141 = blendps(auVar141,auVar111,4);
      auVar94 = auVar121;
      auVar80 = auVar82;
    }
    auVar71 = auVar141;
    if ((char)bVar23 < '\0') {
      auVar71 = auVar60;
    }
    if ((~bVar23 & 0xf) == 0) {
      auVar55 = blendps(auVar71,auVar141,7);
      auVar62 = blendps(auVar82,auVar80,7);
      auVar129 = blendps(auVar94,auVar121,7);
      auVar76._0_8_ = auVar121._0_8_;
      auVar76._8_4_ = auVar121._4_4_;
      auVar76._12_4_ = auVar80._4_4_;
      auVar90._0_8_ = auVar141._0_8_;
      auVar90._8_4_ = auVar141._4_4_;
      auVar90._12_4_ = auVar74._4_4_;
      *(ulonglong *)*param_1 = CONCAT44(auVar80._0_4_,auVar121._0_4_);
      *(ulonglong *)(*param_1 + 8) = CONCAT44(fVar139,auVar141._0_4_);
      *(longlong *)param_1[1] = auVar76._8_8_;
      *(longlong *)(param_1[1] + 8) = auVar90._8_8_;
      *(int *)param_1[2] = auVar129._8_4_;
      *(int *)(param_1[2] + 4) = auVar62._8_4_;
      *(int *)(param_1[2] + 8) = auVar55._8_4_;
      *(float *)(param_1[2] + 0xc) = auVar74._8_4_;
      *(int *)param_1[3] = auVar129._12_4_;
      *(int *)(param_1[3] + 4) = auVar62._12_4_;
      *(int *)(param_1[3] + 8) = auVar55._12_4_;
      *(float *)(param_1[3] + 0xc) = auVar74._12_4_;
    }
    else {
      if ((bVar23 & 1) != 0) {
        *(int *)*param_1 = auVar55._0_4_;
      }
      if ((bVar23 & 2) != 0) {
        uVar4 = extractps(auVar129,1);
        *(undefined8 *)param_1[1] = uVar4;
      }
      if ((bVar23 & 4) != 0) {
        uVar4 = extractps(auVar62,2);
        *(undefined8 *)param_1[2] = uVar4;
      }
      if ((char)bVar23 < '\0') {
        uVar4 = extractps(auVar94,3);
        *(undefined8 *)param_1[3] = uVar4;
      }
      if ((bVar23 & 1) != 0) {
        *(int *)(*param_1 + 4) = auVar107._0_4_;
      }
      if ((bVar23 & 2) != 0) {
        uVar4 = extractps(auVar116,1);
        *(undefined8 *)(param_1[1] + 4) = uVar4;
      }
      if ((bVar23 & 4) != 0) {
        auVar13._4_4_ = fVar67;
        auVar13._0_4_ = fVar138;
        auVar13._8_4_ = fVar140;
        auVar13._12_4_ = fVar83;
        uVar4 = extractps(auVar13,2);
        *(undefined8 *)(param_1[2] + 4) = uVar4;
      }
      if ((char)bVar23 < '\0') {
        uVar4 = extractps(auVar82,3);
        *(undefined8 *)(param_1[3] + 4) = uVar4;
      }
      if ((bVar23 & 1) != 0) {
        *(int *)(*param_1 + 8) = auVar49._0_4_;
      }
      if ((bVar23 & 2) != 0) {
        uVar4 = extractps(auVar102,1);
        *(undefined8 *)(param_1[1] + 8) = uVar4;
      }
      if ((bVar23 & 4) != 0) {
        uVar4 = extractps(auVar111,2);
        *(undefined8 *)(param_1[2] + 8) = uVar4;
      }
      if ((char)bVar23 < '\0') {
        uVar4 = extractps(auVar71,3);
        *(undefined8 *)(param_1[3] + 8) = uVar4;
      }
      if ((bVar23 & 1) != 0) {
        *(float *)(*param_1 + 0xc) = fVar139;
      }
      if ((bVar23 & 2) != 0) {
        uVar4 = extractps(auVar74,1);
        *(undefined8 *)(param_1[1] + 0xc) = uVar4;
      }
      if ((bVar23 & 4) != 0) {
        uVar4 = extractps(auVar74,2);
        *(undefined8 *)(param_1[2] + 0xc) = uVar4;
      }
      if ((char)bVar23 < '\0') {
        uVar4 = extractps(auVar74,3);
        *(undefined8 *)(param_1[3] + 0xc) = uVar4;
      }
    }
    return;
  }
  return;
}

// ApplyMultiResConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cuni_sse4 @ 1405b4370

/* WARNING: Removing unreachable block (ram,0x0001405b581b) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyMultiResConstraintsWithWeightMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_CunfCunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cuni_sse4
               (undefined1 (*param_1) [16],longlong param_2,longlong param_3,longlong param_4,
               float param_5,byte param_6,longlong param_7,longlong param_8,byte param_9,
               longlong param_10,longlong param_11,uint param_12)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  byte bVar16;
  int iVar17;
  byte *pbVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  byte bVar33;
  ulonglong uVar34;
  byte bVar35;
  longlong lVar36;
  longlong lVar37;
  undefined1 (*pauVar38) [16];
  bool bVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  float fVar44;
  float fVar56;
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
  undefined4 uVar57;
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
  undefined4 uVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar80;
  float fVar89;
  float fVar90;
  undefined1 auVar81 [16];
  float fVar91;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar110;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
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
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 local_178 [8];
  float fStack_170;
  float fStack_16c;
  undefined1 local_168 [8];
  float fStack_160;
  float fStack_15c;
  undefined1 (*pauVar21) [16];
  undefined1 auVar55 [16];
  
  uVar23 = param_12 + 3;
  if (-1 < (int)param_12) {
    uVar23 = param_12;
  }
  if ((int)(uVar23 & 0xfffffffc) < 1) {
    uVar30 = 0;
    if ((int)param_12 < 1) {
      return;
    }
  }
  else {
    lVar37 = 0;
    uVar30 = 0;
    pauVar21 = param_1;
    pauVar38 = param_1;
    do {
      auVar71 = *pauVar38;
      pauVar1 = pauVar38 + 1;
      fVar95 = *(float *)*pauVar1;
      fVar97 = *(float *)(pauVar38[1] + 4);
      fVar100 = *(float *)(pauVar38[1] + 8);
      pauVar2 = pauVar38 + 2;
      fVar99 = *(float *)*pauVar2;
      fVar96 = *(float *)(pauVar38[2] + 4);
      fVar98 = *(float *)(pauVar38[2] + 8);
      pauVar3 = pauVar38 + 3;
      fVar101 = *(float *)*pauVar3;
      fVar102 = *(float *)(pauVar38[3] + 4);
      fVar44 = *(float *)(pauVar38[3] + 8);
      fVar56 = auVar71._4_4_;
      fVar103 = auVar71._8_4_;
      auVar118._4_4_ = fVar100;
      auVar118._0_4_ = fVar103;
      auVar118._12_4_ = fVar44;
      auVar118._8_4_ = fVar98;
      uVar40 = -(uint)(0.0 < auVar71._12_4_);
      uVar41 = -(uint)(0.0 < *(float *)(pauVar38[1] + 0xc));
      uVar42 = -(uint)(0.0 < *(float *)(pauVar38[2] + 0xc));
      uVar43 = -(uint)(0.0 < *(float *)(pauVar38[3] + 0xc));
      auVar45._4_4_ = uVar41;
      auVar45._0_4_ = uVar40;
      auVar45._8_4_ = uVar42;
      auVar45._12_4_ = uVar43;
      uVar20 = movmskps((int)pauVar21,auVar45);
      pauVar21 = (undefined1 (*) [16])(ulonglong)uVar20;
      if (uVar20 != 0) {
        bVar33 = (char)((char)uVar20 << 4) >> 4;
        auVar60 = ZEXT816(0);
        bVar35 = ~bVar33;
        auVar67 = ZEXT816(0);
        if ((param_6 & 1) != 0) {
          if ((bVar35 & 9) == 0) {
            auVar67 = ZEXT416(*(uint *)(param_7 + uVar30));
          }
          else {
            pbVar18 = (byte *)(param_7 + uVar30);
            if ((uVar20 & 1) != 0) {
              auVar67 = ZEXT116(*pbVar18);
            }
            if ((uVar20 & 2) != 0) {
              auVar81._8_8_ = auVar67._8_8_;
              auVar81._0_8_ = auVar67._0_8_ | (ulonglong)pbVar18[1] << 8;
              auVar67 = pblendw(auVar67,auVar81,0xfd);
            }
            if ((uVar20 & 4) != 0) {
              bVar16 = auVar67[3];
              auVar67 = pmovzxwd(auVar67,auVar67);
              auVar67._0_8_ =
                   auVar67._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar18[2] << 0x10 |
                   (ulonglong)bVar16 << 0x18;
            }
            if ((uVar20 & 8) != 0) {
              bVar16 = auVar67[2];
              auVar67 = pmovzxwd(auVar67,auVar67);
              auVar67._0_8_ =
                   auVar67._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar16 << 0x10 |
                   (ulonglong)pbVar18[3] << 0x18;
            }
          }
        }
        if ((param_9 & 1) != 0) {
          if ((bVar35 & 9) == 0) {
            auVar60 = ZEXT416(*(uint *)(param_10 + uVar30));
          }
          else {
            pbVar18 = (byte *)(param_10 + uVar30);
            if ((uVar20 & 1) != 0) {
              auVar60 = ZEXT116(*pbVar18);
            }
            if ((uVar20 & 2) != 0) {
              auVar84._8_8_ = auVar60._8_8_;
              auVar84._0_8_ = auVar60._0_8_ | (ulonglong)pbVar18[1] << 8;
              auVar60 = pblendw(auVar60,auVar84,0xfd);
            }
            if ((uVar20 & 4) != 0) {
              bVar16 = auVar60[3];
              auVar60 = pmovzxwd(auVar60,auVar60);
              auVar60._0_8_ =
                   auVar60._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar18[2] << 0x10 |
                   (ulonglong)bVar16 << 0x18;
            }
            if ((uVar20 & 8) != 0) {
              bVar16 = auVar60[2];
              auVar60 = pmovzxwd(auVar60,auVar60);
              auVar60._0_8_ =
                   auVar60._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar16 << 0x10 |
                   (ulonglong)pbVar18[3] << 0x18;
            }
          }
        }
        auVar133._8_4_ = fVar56;
        auVar133._0_8_ = auVar71._0_8_;
        auVar133._12_4_ = fVar97;
        fVar110 = auVar71._0_4_;
        auVar129._4_4_ = fVar95;
        auVar129._0_4_ = fVar110;
        auVar129._12_4_ = fVar101;
        auVar129._8_4_ = fVar99;
        auVar67 = pmovsxbd(auVar67,auVar67);
        auVar68._0_4_ = auVar67._0_4_ << 2;
        auVar68._4_4_ = auVar67._4_4_ << 2;
        auVar68._8_4_ = auVar67._8_4_ << 2;
        auVar68._12_4_ = auVar67._12_4_ << 2;
        auVar68 = auVar68 & auVar45;
        auVar67 = insertps(ZEXT416(*(uint *)(param_8 + auVar68._0_4_)),
                           *(undefined4 *)(param_8 + auVar68._4_4_),0x10);
        auVar67 = insertps(auVar67,*(undefined4 *)(param_8 + auVar68._8_4_),0x20);
        auVar81 = insertps(auVar67,*(undefined4 *)(param_8 + auVar68._12_4_),0x30);
        auVar67 = pmovsxbd(auVar60,auVar60);
        auVar58._0_4_ = auVar67._0_4_ << 2;
        auVar58._4_4_ = auVar67._4_4_ << 2;
        auVar58._8_4_ = auVar67._8_4_ << 2;
        auVar58._12_4_ = auVar67._12_4_ << 2;
        auVar58 = auVar58 & auVar45;
        auVar67 = insertps(ZEXT416(*(uint *)(param_11 + auVar58._0_4_)),
                           *(undefined4 *)(param_11 + auVar58._4_4_),0x10);
        auVar67 = insertps(auVar67,*(undefined4 *)(param_11 + auVar58._8_4_),0x20);
        auVar67 = insertps(auVar67,*(undefined4 *)(param_11 + auVar58._12_4_),0x30);
        if ((bVar35 & 0xf) == 0) {
          auVar45 = *(undefined1 (*) [16])(param_2 + lVar37);
          auVar60 = *(undefined1 (*) [16])(param_2 + 0x10 + lVar37);
          puVar4 = (undefined4 *)(param_2 + 0x20 + lVar37);
          auVar84 = insertps(auVar60,auVar45,0x8c);
          local_178._4_4_ = auVar45._12_4_;
          local_178._0_4_ = auVar45._0_4_;
          fStack_170 = (float)auVar60._8_4_;
          fStack_16c = (float)puVar4[1];
          auVar69._4_4_ = auVar60._0_4_;
          auVar69._0_4_ = auVar45._4_4_;
          auVar69._8_4_ = auVar60._12_4_;
          auVar69._12_4_ = puVar4[2];
          auVar46._0_8_ = auVar84._0_8_;
          auVar46._8_4_ = *puVar4;
          auVar46._12_4_ = puVar4[3];
          auVar45 = *(undefined1 (*) [16])(param_3 + lVar37);
          auVar60 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar37);
          puVar4 = (undefined4 *)(param_3 + 0x20 + lVar37);
          auVar75._0_4_ = auVar45._0_4_;
          auVar84 = insertps(auVar60,auVar45,0x8c);
          auVar75._4_4_ = auVar45._12_4_;
          auVar75._8_4_ = auVar60._8_4_;
          auVar75._12_4_ = puVar4[1];
          auVar124._4_4_ = auVar60._0_4_;
          auVar124._0_4_ = auVar45._4_4_;
          auVar124._8_4_ = auVar60._12_4_;
          auVar124._12_4_ = puVar4[2];
          auVar111._0_8_ = auVar84._0_8_;
          auVar111._8_4_ = *puVar4;
          auVar111._12_4_ = puVar4[3];
          auVar45 = *(undefined1 (*) [16])(param_4 + lVar37);
          auVar60 = *(undefined1 (*) [16])(param_4 + 0x10 + lVar37);
          puVar4 = (undefined4 *)(param_4 + 0x20 + lVar37);
          auVar61._0_4_ = auVar45._0_4_;
          auVar84 = insertps(auVar60,auVar45,0x8c);
          auVar61._4_4_ = auVar45._12_4_;
          auVar61._8_4_ = auVar60._8_4_;
          auVar61._12_4_ = puVar4[1];
          auVar104._4_4_ = auVar60._0_4_;
          auVar104._0_4_ = auVar45._4_4_;
          auVar104._8_4_ = auVar60._12_4_;
          auVar104._12_4_ = puVar4[2];
          auVar92._0_8_ = auVar84._0_8_;
          auVar92._8_4_ = *puVar4;
          auVar92._12_4_ = puVar4[3];
        }
        else {
          auVar59._0_4_ = uVar40 & ___xmm_00000024000000180000000c00000000;
          auVar59._4_4_ = uVar41 & _UNK_150b50da4;
          auVar59._8_4_ = uVar42 & _UNK_150b50da8;
          auVar59._12_4_ = uVar43 & _UNK_150b50dac;
          lVar22 = extractps(auVar59,1);
          lVar36 = extractps(auVar59,2);
          lVar29 = extractps(auVar59,3);
          lVar25 = param_2 + lVar37;
          auVar60 = insertps(ZEXT416(*(uint *)(param_2 + lVar37)),*(undefined4 *)(lVar22 + lVar25),
                             0x10);
          auVar60 = insertps(auVar60,*(undefined4 *)(lVar36 + lVar25),0x20);
          _local_178 = insertps(auVar60,*(undefined4 *)(lVar29 + lVar25),0x30);
          auVar60 = auVar45 & ___xmm_000000280000001c0000001000000004;
          uVar28 = (ulonglong)auVar60._4_4_;
          uVar19 = (ulonglong)auVar60._8_4_;
          uVar34 = (ulonglong)auVar60._12_4_;
          uVar24 = (ulonglong)auVar60._0_4_;
          auVar60 = insertps(ZEXT416(*(uint *)(uVar24 + lVar25)),*(undefined4 *)(uVar28 + lVar25),
                             0x10);
          auVar60 = insertps(auVar60,*(undefined4 *)(uVar19 + lVar25),0x20);
          auVar69 = insertps(auVar60,*(undefined4 *)(uVar34 + lVar25),0x30);
          auVar45 = auVar45 & ___xmm_0000002c000000200000001400000008;
          uVar27 = (ulonglong)auVar45._4_4_;
          uVar32 = (ulonglong)auVar45._8_4_;
          uVar31 = (ulonglong)auVar45._12_4_;
          uVar26 = (ulonglong)auVar45._0_4_;
          auVar45 = insertps(ZEXT416(*(uint *)(uVar26 + lVar25)),*(undefined4 *)(uVar27 + lVar25),
                             0x10);
          auVar45 = insertps(auVar45,*(undefined4 *)(uVar32 + lVar25),0x20);
          auVar46 = insertps(auVar45,*(undefined4 *)(uVar31 + lVar25),0x30);
          lVar25 = param_3 + lVar37;
          auVar45 = insertps(ZEXT416(*(uint *)(param_3 + lVar37)),*(undefined4 *)(lVar22 + lVar25),
                             0x10);
          auVar45 = insertps(auVar45,*(undefined4 *)(lVar36 + lVar25),0x20);
          auVar75 = insertps(auVar45,*(undefined4 *)(lVar29 + lVar25),0x30);
          auVar45 = insertps(ZEXT416(*(uint *)(uVar24 + lVar25)),*(undefined4 *)(uVar28 + lVar25),
                             0x10);
          auVar45 = insertps(auVar45,*(undefined4 *)(uVar19 + lVar25),0x20);
          auVar124 = insertps(auVar45,*(undefined4 *)(uVar34 + lVar25),0x30);
          auVar45 = insertps(ZEXT416(*(uint *)(uVar26 + lVar25)),*(undefined4 *)(uVar27 + lVar25),
                             0x10);
          auVar45 = insertps(auVar45,*(undefined4 *)(uVar32 + lVar25),0x20);
          auVar111 = insertps(auVar45,*(undefined4 *)(uVar31 + lVar25),0x30);
          lVar25 = param_4 + lVar37;
          auVar45 = insertps(ZEXT416(*(uint *)(param_4 + lVar37)),*(undefined4 *)(lVar22 + lVar25),
                             0x10);
          auVar45 = insertps(auVar45,*(undefined4 *)(lVar36 + lVar25),0x20);
          auVar61 = insertps(auVar45,*(undefined4 *)(lVar29 + lVar25),0x30);
          auVar45 = insertps(ZEXT416(*(uint *)(uVar24 + lVar25)),*(undefined4 *)(uVar28 + lVar25),
                             0x10);
          auVar45 = insertps(auVar45,*(undefined4 *)(uVar19 + lVar25),0x20);
          auVar104 = insertps(auVar45,*(undefined4 *)(uVar34 + lVar25),0x30);
          auVar45 = insertps(ZEXT416(*(uint *)(uVar26 + lVar25)),*(undefined4 *)(uVar27 + lVar25),
                             0x10);
          auVar45 = insertps(auVar45,*(undefined4 *)(uVar32 + lVar25),0x20);
          auVar92 = insertps(auVar45,*(undefined4 *)(uVar31 + lVar25),0x30);
        }
        fVar80 = auVar81._0_4_;
        fVar89 = auVar81._4_4_;
        fVar90 = auVar81._8_4_;
        fVar91 = auVar81._12_4_;
        auVar140._0_8_ =
             CONCAT44(fVar95 - (fVar95 - auVar75._4_4_) * fVar89,
                      fVar110 - (fVar110 - auVar75._0_4_) * fVar80);
        auVar140._8_4_ = fVar99 - (fVar99 - auVar75._8_4_) * fVar90;
        auVar140._12_4_ = fVar101 - (fVar101 - auVar75._12_4_) * fVar91;
        pauVar21 = (undefined1 (*) [16])(ulonglong)bVar33;
        auVar76._4_4_ = fVar95;
        auVar76._0_4_ = fVar110;
        auVar76._8_4_ = fVar99;
        auVar76._12_4_ = fVar101;
        bVar39 = (bVar33 & 1) != 0;
        if (bVar39) {
          auVar76._8_4_ = auVar140._8_4_;
          auVar76._0_8_ = auVar140._0_8_;
          auVar76._12_4_ = auVar140._12_4_;
        }
        auVar134._12_4_ = fVar102;
        auVar134._8_4_ = fVar96;
        auVar134._0_8_ = auVar133._8_8_;
        auVar152._0_8_ =
             CONCAT44(fVar97 - (fVar97 - auVar124._4_4_) * fVar89,
                      fVar56 - (fVar56 - auVar124._0_4_) * fVar80);
        auVar152._8_4_ = fVar96 - (fVar96 - auVar124._8_4_) * fVar90;
        auVar152._12_4_ = fVar102 - (fVar102 - auVar124._12_4_) * fVar91;
        fVar95 = fVar103 - (fVar103 - auVar111._0_4_) * fVar80;
        fVar97 = fVar100 - (fVar100 - auVar111._4_4_) * fVar89;
        fVar99 = fVar98 - (fVar98 - auVar111._8_4_) * fVar90;
        fVar101 = fVar44 - (fVar44 - auVar111._12_4_) * fVar91;
        auVar82._8_4_ = fVar96;
        auVar82._0_8_ = auVar133._8_8_;
        auVar82._12_4_ = fVar102;
        auVar112._4_4_ = fVar100;
        auVar112._0_4_ = fVar103;
        auVar112._8_4_ = fVar98;
        auVar112._12_4_ = fVar44;
        if (bVar39) {
          auVar82._8_4_ = auVar152._8_4_;
          auVar82._0_8_ = auVar152._0_8_;
          auVar82._12_4_ = auVar152._12_4_;
          auVar112._4_4_ = fVar97;
          auVar112._0_4_ = fVar95;
          auVar112._8_4_ = fVar99;
          auVar112._12_4_ = fVar101;
          auVar45 = blendps(auVar129,auVar76,1);
          if ((bVar33 & 2) != 0) goto LAB_1405b4bdc;
LAB_1405b4964:
          auVar135 = blendps(auVar134,auVar82,1);
          auVar116 = blendps(auVar118,auVar112,1);
          auVar45 = blendps(auVar45,auVar45,2);
          auVar118 = auVar116;
          auVar60 = auVar135;
          if ((bVar33 & 4) == 0) goto LAB_1405b499a;
LAB_1405b4c1e:
          auVar126._8_4_ = auVar140._8_4_;
          auVar126._0_8_ = auVar140._0_8_;
          auVar126._12_4_ = auVar140._12_4_;
          auVar60 = blendps(auVar60,auVar135,2);
          auVar136._8_4_ = auVar152._8_4_;
          auVar136._0_8_ = auVar152._0_8_;
          auVar136._12_4_ = auVar152._12_4_;
          auVar118 = blendps(auVar118,auVar116,2);
          auVar117._4_4_ = fVar97;
          auVar117._0_4_ = fVar95;
          auVar117._8_4_ = fVar99;
          auVar117._12_4_ = fVar101;
          auVar45 = blendps(auVar45,auVar126,4);
          if (-1 < (char)bVar33) goto LAB_1405b4c5c;
LAB_1405b49cc:
          auVar60 = blendps(auVar60,auVar136,4);
          if ((char)bVar33 < '\0') goto LAB_1405b49d9;
LAB_1405b4c6d:
          auVar118 = blendps(auVar118,auVar117,4);
          auVar152 = auVar60;
        }
        else {
          auVar45 = blendps(auVar129,auVar76,1);
          if ((bVar33 & 2) == 0) goto LAB_1405b4964;
LAB_1405b4bdc:
          auVar125._8_4_ = auVar140._8_4_;
          auVar125._0_8_ = auVar140._0_8_;
          auVar125._12_4_ = auVar140._12_4_;
          auVar60 = blendps(auVar134,auVar82,1);
          auVar135._8_4_ = auVar152._8_4_;
          auVar135._0_8_ = auVar152._0_8_;
          auVar135._12_4_ = auVar152._12_4_;
          auVar118 = blendps(auVar118,auVar112,1);
          auVar116._4_4_ = fVar97;
          auVar116._0_4_ = fVar95;
          auVar116._8_4_ = fVar99;
          auVar116._12_4_ = fVar101;
          auVar45 = blendps(auVar45,auVar125,2);
          if ((bVar33 & 4) != 0) goto LAB_1405b4c1e;
LAB_1405b499a:
          auVar136 = blendps(auVar60,auVar135,2);
          auVar117 = blendps(auVar118,auVar116,2);
          auVar45 = blendps(auVar45,auVar45,4);
          auVar118 = auVar117;
          auVar60 = auVar136;
          if ((char)bVar33 < '\0') goto LAB_1405b49cc;
LAB_1405b4c5c:
          auVar60 = blendps(auVar60,auVar136,4);
          auVar140 = auVar45;
          if (-1 < (char)bVar33) goto LAB_1405b4c6d;
LAB_1405b49d9:
          auVar118 = blendps(auVar118,auVar117,4);
        }
        if (-1 < (char)bVar33) {
          fVar95 = auVar118._0_4_;
          fVar97 = auVar118._4_4_;
          fVar99 = auVar118._8_4_;
          fVar101 = auVar118._12_4_;
        }
        auVar81 = blendps(auVar45,auVar140,8);
        auVar60 = blendps(auVar60,auVar152,8);
        auVar9._4_4_ = fVar97;
        auVar9._0_4_ = fVar95;
        auVar9._8_4_ = fVar99;
        auVar9._12_4_ = fVar101;
        auVar45 = blendps(auVar118,auVar9,8);
        fVar96 = auVar60._0_4_;
        fVar98 = auVar60._4_4_;
        fVar100 = auVar60._8_4_;
        fVar99 = auVar60._12_4_;
        fVar101 = auVar67._0_4_;
        fVar102 = auVar67._4_4_;
        fVar44 = auVar67._8_4_;
        fVar56 = auVar67._12_4_;
        fVar95 = fVar96 - ((fVar96 - auVar69._0_4_) - auVar104._0_4_ * param_5) * fVar101;
        fVar97 = fVar98 - ((fVar98 - auVar69._4_4_) - auVar104._4_4_ * param_5) * fVar102;
        auVar70._0_8_ = CONCAT44(fVar97,fVar95);
        auVar70._8_4_ = fVar100 - ((fVar100 - auVar69._8_4_) - auVar104._8_4_ * param_5) * fVar44;
        auVar70._12_4_ = fVar99 - ((fVar99 - auVar69._12_4_) - auVar104._12_4_ * param_5) * fVar56;
        auVar47._0_8_ =
             CONCAT44(auVar45._4_4_ -
                      ((auVar45._4_4_ - auVar46._4_4_) - auVar92._4_4_ * param_5) * fVar102,
                      auVar45._0_4_ -
                      ((auVar45._0_4_ - auVar46._0_4_) - auVar92._0_4_ * param_5) * fVar101);
        auVar47._8_4_ =
             auVar45._8_4_ - ((auVar45._8_4_ - auVar46._8_4_) - auVar92._8_4_ * param_5) * fVar44;
        auVar47._12_4_ =
             auVar45._12_4_ -
             ((auVar45._12_4_ - auVar46._12_4_) - auVar92._12_4_ * param_5) * fVar56;
        auVar83._0_8_ =
             CONCAT44(auVar81._4_4_ -
                      ((auVar81._4_4_ - (float)local_178._4_4_) - auVar61._4_4_ * param_5) * fVar102
                      ,auVar81._0_4_ -
                       ((auVar81._0_4_ - (float)local_178._0_4_) - auVar61._0_4_ * param_5) *
                       fVar101);
        auVar83._8_4_ =
             auVar81._8_4_ - ((auVar81._8_4_ - fStack_170) - auVar61._8_4_ * param_5) * fVar44;
        auVar83._12_4_ =
             auVar81._12_4_ - ((auVar81._12_4_ - fStack_16c) - auVar61._12_4_ * param_5) * fVar56;
        if ((bVar33 & 1) == 0) {
          auVar118 = blendps(auVar81,auVar81,1);
          auVar62 = auVar45;
          auVar77 = auVar81;
          fVar95 = fVar96;
          fVar97 = fVar98;
          auVar113 = auVar118;
          if ((bVar33 & 2) == 0) goto LAB_1405b4a73;
LAB_1405b4cad:
          uVar74 = auVar77._0_4_;
          auVar113._8_4_ = auVar83._8_4_;
          auVar113._0_8_ = auVar83._0_8_;
          auVar113._12_4_ = auVar83._12_4_;
          auVar15._4_4_ = fVar97;
          auVar15._0_4_ = fVar95;
          auVar15._8_4_ = fVar100;
          auVar15._12_4_ = fVar99;
          auVar67 = blendps(auVar60,auVar15,1);
          auVar141._8_4_ = auVar70._8_4_;
          auVar141._0_8_ = auVar70._0_8_;
          auVar141._12_4_ = auVar70._12_4_;
          auVar45 = blendps(auVar45,auVar62,1);
          uVar57 = auVar62._0_4_;
          auVar119._8_4_ = auVar47._8_4_;
          auVar119._0_8_ = auVar47._0_8_;
          auVar119._12_4_ = auVar47._12_4_;
          auVar118 = blendps(auVar118,auVar113,2);
          auVar145 = auVar118;
          if ((bVar33 & 4) != 0) goto LAB_1405b4cee;
LAB_1405b4aa9:
          auVar137 = blendps(auVar67,auVar141,2);
          auVar120 = blendps(auVar45,auVar119,2);
          auVar45 = blendps(auVar145,auVar145,4);
          auVar67 = auVar120;
          auVar60 = auVar137;
          if ((char)bVar33 < '\0') goto LAB_1405b4adb;
LAB_1405b4d2b:
          auVar83 = auVar45;
          auVar118 = blendps(auVar60,auVar137,4);
          auVar45 = auVar83;
          if (-1 < (char)bVar33) goto LAB_1405b4d3c;
LAB_1405b4ae8:
          auVar67 = blendps(auVar67,auVar120,4);
        }
        else {
          auVar77._8_4_ = auVar83._8_4_;
          auVar77._0_8_ = auVar83._0_8_;
          auVar77._12_4_ = auVar83._12_4_;
          auVar62._8_4_ = auVar47._8_4_;
          auVar62._0_8_ = auVar47._0_8_;
          auVar62._12_4_ = auVar47._12_4_;
          auVar118 = blendps(auVar81,auVar77,1);
          fVar100 = auVar70._8_4_;
          fVar99 = auVar70._12_4_;
          auVar113 = auVar118;
          if ((bVar33 & 2) != 0) goto LAB_1405b4cad;
LAB_1405b4a73:
          uVar74 = auVar77._0_4_;
          auVar10._4_4_ = fVar97;
          auVar10._0_4_ = fVar95;
          auVar10._8_4_ = fVar100;
          auVar10._12_4_ = fVar99;
          auVar67 = blendps(auVar60,auVar10,1);
          auVar119 = blendps(auVar45,auVar62,1);
          uVar57 = auVar62._0_4_;
          auVar118 = blendps(auVar113,auVar113,2);
          auVar45 = auVar119;
          auVar141 = auVar67;
          auVar145 = auVar118;
          if ((bVar33 & 4) == 0) goto LAB_1405b4aa9;
LAB_1405b4cee:
          auVar145._8_4_ = auVar83._8_4_;
          auVar145._0_8_ = auVar83._0_8_;
          auVar145._12_4_ = auVar83._12_4_;
          auVar60 = blendps(auVar67,auVar141,2);
          auVar137._8_4_ = auVar70._8_4_;
          auVar137._0_8_ = auVar70._0_8_;
          auVar137._12_4_ = auVar70._12_4_;
          auVar67 = blendps(auVar45,auVar119,2);
          auVar120._8_4_ = auVar47._8_4_;
          auVar120._0_8_ = auVar47._0_8_;
          auVar120._12_4_ = auVar47._12_4_;
          auVar45 = blendps(auVar118,auVar145,4);
          if (-1 < (char)bVar33) goto LAB_1405b4d2b;
LAB_1405b4adb:
          auVar118 = blendps(auVar60,auVar137,4);
          if ((char)bVar33 < '\0') goto LAB_1405b4ae8;
LAB_1405b4d3c:
          auVar67 = blendps(auVar67,auVar120,4);
          auVar70 = auVar118;
        }
        auVar60 = auVar67;
        if ((char)bVar33 < '\0') {
          auVar60 = auVar47;
        }
        if ((bVar35 & 0xf) == 0) {
          auVar60 = blendps(auVar60,auVar67,7);
          auVar81 = blendps(auVar70,auVar118,7);
          auVar84 = blendps(auVar83,auVar45,7);
          auVar85._0_8_ = CONCAT44(auVar81._8_4_,auVar84._8_4_);
          auVar85._8_4_ = auVar84._12_4_;
          auVar85._12_4_ = auVar81._12_4_;
          auVar130._0_8_ = auVar45._0_8_;
          auVar130._8_4_ = auVar45._4_4_;
          auVar130._12_4_ = auVar118._4_4_;
          auVar121._0_8_ = auVar67._0_8_;
          auVar121._8_4_ = auVar67._4_4_;
          auVar121._12_4_ = *(float *)(pauVar38[1] + 0xc);
          auVar48._0_8_ = CONCAT44(*(float *)(pauVar38[2] + 0xc),auVar60._8_4_);
          auVar48._8_4_ = auVar60._12_4_;
          auVar48._12_4_ = *(float *)(pauVar38[3] + 0xc);
          *(ulonglong *)*pauVar38 = CONCAT44(auVar118._0_4_,auVar45._0_4_);
          *(ulonglong *)(*pauVar38 + 8) = CONCAT44(auVar71._12_4_,auVar67._0_4_);
          *(longlong *)pauVar38[1] = auVar130._8_8_;
          *(longlong *)(pauVar38[1] + 8) = auVar121._8_8_;
          auVar71._8_8_ = auVar48._0_8_;
          auVar71._0_8_ = auVar85._0_8_;
          pauVar38[2] = auVar71;
          *(longlong *)pauVar38[3] = auVar85._8_8_;
          *(longlong *)(pauVar38[3] + 8) = auVar48._8_8_;
        }
        else {
          if ((bVar33 & 1) == 0) {
            pauVar21 = (undefined1 (*) [16])(ulonglong)(bVar33 & 0xf);
            if ((bVar33 & 2) == 0) goto LAB_1405b4b21;
LAB_1405b4dd3:
            uVar5 = extractps(auVar113,1);
            *(undefined8 *)pauVar38[1] = uVar5;
            if (((ulonglong)pauVar21 & 4) != 0) goto LAB_1405b4de4;
LAB_1405b4b2a:
            if (-1 < (char)bVar33) goto LAB_1405b4b33;
LAB_1405b4df5:
            uVar5 = extractps(auVar83,3);
            *(undefined8 *)pauVar38[3] = uVar5;
            if (((ulonglong)pauVar21 & 1) != 0) goto LAB_1405b4e06;
LAB_1405b4b3c:
            if (((ulonglong)pauVar21 & 2) == 0) goto LAB_1405b4b4d;
LAB_1405b4e1d:
            auVar45 = *pauVar3;
            uVar5 = extractps(auVar141,1);
            *(undefined8 *)(pauVar38[1] + 4) = uVar5;
            if (((ulonglong)pauVar21 & 4) != 0) goto LAB_1405b4e36;
LAB_1405b4b5e:
            auVar118 = *pauVar2;
            if (-1 < (char)bVar33) goto LAB_1405b4b67;
LAB_1405b4e47:
            uVar5 = extractps(auVar70,3);
            *(undefined8 *)(pauVar38[3] + 4) = uVar5;
            if (((ulonglong)pauVar21 & 1) != 0) goto LAB_1405b4e58;
LAB_1405b4b70:
            if (((ulonglong)pauVar21 & 2) == 0) goto LAB_1405b4b79;
LAB_1405b4e67:
            uVar5 = extractps(auVar119,1);
            *(undefined8 *)(pauVar38[1] + 8) = uVar5;
            if (((ulonglong)pauVar21 & 4) != 0) goto LAB_1405b4e78;
LAB_1405b4b82:
            if (-1 < (char)bVar33) goto LAB_1405b4b93;
LAB_1405b4e91:
            auVar67 = *pauVar1;
            uVar5 = extractps(auVar60,3);
            *(undefined8 *)(pauVar38[3] + 8) = uVar5;
          }
          else {
            *(undefined4 *)*pauVar38 = uVar74;
            pauVar21 = (undefined1 (*) [16])(ulonglong)(bVar33 & 0xf);
            if ((bVar33 & 2) != 0) goto LAB_1405b4dd3;
LAB_1405b4b21:
            if (((ulonglong)pauVar21 & 4) == 0) goto LAB_1405b4b2a;
LAB_1405b4de4:
            uVar5 = extractps(auVar145,2);
            *(undefined8 *)pauVar38[2] = uVar5;
            if ((char)bVar33 < '\0') goto LAB_1405b4df5;
LAB_1405b4b33:
            if (((ulonglong)pauVar21 & 1) == 0) goto LAB_1405b4b3c;
LAB_1405b4e06:
            *(float *)(*pauVar38 + 4) = fVar95;
            if (((ulonglong)pauVar21 & 2) != 0) goto LAB_1405b4e1d;
LAB_1405b4b4d:
            auVar45 = *pauVar3;
            if (((ulonglong)pauVar21 & 4) == 0) goto LAB_1405b4b5e;
LAB_1405b4e36:
            auVar118 = *pauVar2;
            uVar5 = extractps(auVar137,2);
            *(undefined8 *)(pauVar38[2] + 4) = uVar5;
            if ((char)bVar33 < '\0') goto LAB_1405b4e47;
LAB_1405b4b67:
            if (((ulonglong)pauVar21 & 1) == 0) goto LAB_1405b4b70;
LAB_1405b4e58:
            *(undefined4 *)(*pauVar38 + 8) = uVar57;
            if (((ulonglong)pauVar21 & 2) != 0) goto LAB_1405b4e67;
LAB_1405b4b79:
            if (((ulonglong)pauVar21 & 4) == 0) goto LAB_1405b4b82;
LAB_1405b4e78:
            uVar5 = extractps(auVar120,2);
            *(undefined8 *)(pauVar38[2] + 8) = uVar5;
            if ((char)bVar33 < '\0') goto LAB_1405b4e91;
LAB_1405b4b93:
            auVar67 = *pauVar1;
          }
          if (((ulonglong)pauVar21 & 1) != 0) {
            uVar5 = extractps(auVar71,3);
            *(undefined8 *)(*pauVar38 + 0xc) = uVar5;
          }
          if (((ulonglong)pauVar21 & 2) != 0) {
            uVar5 = extractps(auVar67,3);
            *(undefined8 *)(pauVar38[1] + 0xc) = uVar5;
          }
          if (((ulonglong)pauVar21 & 4) != 0) {
            uVar5 = extractps(auVar118,3);
            *(undefined8 *)(pauVar38[2] + 0xc) = uVar5;
          }
          if ((char)bVar33 < '\0') {
            uVar5 = extractps(auVar45,3);
            *(undefined8 *)(pauVar38[3] + 0xc) = uVar5;
          }
        }
      }
      uVar30 = uVar30 + 4;
      lVar37 = lVar37 + 0x30;
      pauVar38 = pauVar38 + 4;
    } while ((int)uVar30 < (int)(uVar23 & 0xfffffffc));
    if ((int)param_12 <= (int)uVar30) {
      return;
    }
  }
  uVar23 = (uint)uVar30;
  bVar39 = (int)(uVar23 | (uint)__xmm_00000003000000020000000100000000) < (int)param_12;
  uVar20 = -(uint)bVar39;
  bVar6 = (int)(uVar23 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_12;
  uVar40 = -(uint)bVar6;
  bVar7 = (int)(uVar23 | _UNK_150631e08) < (int)param_12;
  uVar41 = -(uint)bVar7;
  bVar8 = (int)(uVar23 | _UNK_150631e0c) < (int)param_12;
  uVar42 = -(uint)bVar8;
  uVar30 = uVar30 & 0xffffffff;
  param_1 = param_1 + uVar30;
  auVar11._4_4_ = uVar40;
  auVar11._0_4_ = uVar20;
  auVar11._8_4_ = uVar41;
  auVar11._12_4_ = uVar42;
  iVar17 = movmskps(uVar23 * 0x10,auVar11);
  if (iVar17 == 0xf) {
    auVar71 = *param_1;
    auVar45 = param_1[2];
    auVar87._8_4_ = auVar71._4_4_;
    auVar87._0_8_ = auVar71._0_8_;
    auVar87._12_4_ = *(undefined4 *)(param_1[1] + 4);
    auVar72._4_4_ = *(undefined4 *)param_1[1];
    auVar72._0_4_ = auVar71._0_4_;
    auVar50._0_8_ = CONCAT44(*(undefined4 *)(param_1[1] + 8),auVar71._8_4_);
    auVar50._8_4_ = auVar71._12_4_;
    auVar50._12_4_ = *(undefined4 *)(param_1[1] + 0xc);
    auVar79._0_8_ = auVar45._0_8_;
    auVar79._8_4_ = auVar45._4_4_;
    auVar79._12_4_ = *(undefined4 *)(param_1[3] + 4);
    auVar78._8_8_ = auVar79._8_8_;
    auVar72._12_4_ = *(undefined4 *)param_1[3];
    auVar72._8_4_ = auVar45._0_4_;
    auVar106._0_8_ = CONCAT44(*(undefined4 *)(param_1[3] + 8),auVar45._8_4_);
    auVar106._8_4_ = auVar45._12_4_;
    auVar106._12_4_ = *(undefined4 *)(param_1[3] + 0xc);
    auVar78._0_8_ = auVar87._8_8_;
    auVar86._8_8_ = auVar106._0_8_;
    auVar86._0_8_ = auVar50._0_8_;
    auVar105._8_8_ = auVar106._8_8_;
    auVar105._0_8_ = auVar50._8_8_;
  }
  else {
    auVar49._0_4_ = ___xmm_00000030000000200000001000000000 & uVar20;
    auVar49._4_4_ = _UNK_150b511c4 & uVar40;
    auVar49._8_4_ = _UNK_150b511c8 & uVar41;
    auVar49._12_4_ = _UNK_150b511cc & uVar42;
    lVar37 = extractps(auVar49,1);
    lVar22 = extractps(auVar49,2);
    lVar25 = extractps(auVar49,3);
    auVar71 = insertps(ZEXT416(*(uint *)*param_1),*(undefined4 *)(*param_1 + lVar37),0x10);
    auVar71 = insertps(auVar71,*(undefined4 *)(*param_1 + lVar22),0x20);
    auVar72 = insertps(auVar71,*(undefined4 *)(*param_1 + lVar25),0x30);
    auVar71 = insertps(ZEXT416(*(uint *)(*param_1 +
                                        (___xmm_00000034000000240000001400000004 & uVar20))),
                       *(undefined4 *)(*param_1 + (_UNK_150b511d4 & uVar40)),0x10);
    auVar71 = insertps(auVar71,*(undefined4 *)(*param_1 + (_UNK_150b511d8 & uVar41)),0x20);
    auVar78 = insertps(auVar71,*(undefined4 *)(*param_1 + (_UNK_150b511dc & uVar42)),0x30);
    auVar71 = insertps(ZEXT416(*(uint *)(*param_1 +
                                        (___xmm_00000038000000280000001800000008 & uVar20))),
                       *(undefined4 *)(*param_1 + (_UNK_150b511e4 & uVar40)),0x10);
    auVar71 = insertps(auVar71,*(undefined4 *)(*param_1 + (_UNK_150b511e8 & uVar41)),0x20);
    auVar86 = insertps(auVar71,*(undefined4 *)(*param_1 + (_UNK_150b511ec & uVar42)),0x30);
    param_12 = _UNK_150b511fc & uVar42;
    auVar71 = insertps(ZEXT416(*(uint *)(*param_1 +
                                        (___xmm_0000003c0000002c0000001c0000000c & uVar20))),
                       *(undefined4 *)(*param_1 + (_UNK_150b511f4 & uVar40)),0x10);
    auVar71 = insertps(auVar71,*(undefined4 *)(*param_1 + (_UNK_150b511f8 & uVar41)),0x20);
    auVar105 = insertps(auVar71,*(undefined4 *)(*param_1 + param_12),0x30);
  }
  auVar51 = (undefined1  [16])0x0;
  fVar95 = auVar105._0_4_;
  fVar97 = auVar105._4_4_;
  fVar100 = auVar105._8_4_;
  fVar99 = auVar105._12_4_;
  auVar93._0_4_ = -(uint)(0.0 < fVar95 && bVar39);
  auVar93._4_4_ = -(uint)(0.0 < fVar97 && bVar6);
  auVar93._8_4_ = -(uint)(0.0 < fVar100 && bVar7);
  auVar93._12_4_ = -(uint)(0.0 < fVar99 && bVar8);
  uVar23 = movmskps(param_12,auVar93);
  if (uVar23 != 0) {
    bVar33 = (char)((char)uVar23 << 4) >> 4;
    bVar35 = ~bVar33;
    if ((param_6 & 1) != 0) {
      if ((bVar35 & 9) == 0) {
        auVar51 = ZEXT416(*(uint *)(param_7 + uVar30));
      }
      else {
        pbVar18 = (byte *)(param_7 + uVar30);
        if ((uVar23 & 1) != 0) {
          auVar51 = ZEXT116(*pbVar18);
        }
        if ((uVar23 & 2) != 0) {
          auVar65._8_8_ = auVar51._8_8_;
          auVar65._0_8_ = auVar51._0_8_ | (ulonglong)pbVar18[1] << 8;
          auVar51 = pblendw(auVar51,auVar65,0xfd);
        }
        if ((uVar23 & 4) != 0) {
          bVar16 = auVar51[3];
          auVar71 = pmovzxwd(auVar51,auVar51);
          auVar51._8_8_ = auVar71._8_8_;
          auVar51._0_8_ =
               auVar71._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar18[2] << 0x10 |
               (ulonglong)bVar16 << 0x18;
        }
        if ((uVar23 & 8) != 0) {
          bVar16 = auVar51[2];
          auVar71 = pmovzxwd(auVar51,auVar51);
          auVar51._8_8_ = auVar71._8_8_;
          auVar51._0_8_ =
               auVar71._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar16 << 0x10 |
               (ulonglong)pbVar18[3] << 0x18;
        }
      }
    }
    auVar109 = ZEXT816(0);
    if ((param_9 & 1) != 0) {
      if ((bVar35 & 9) == 0) {
        auVar109 = ZEXT416(*(uint *)(param_10 + uVar30));
      }
      else {
        pbVar18 = (byte *)(param_10 + uVar30);
        if ((uVar23 & 1) != 0) {
          auVar109 = ZEXT116(*pbVar18);
        }
        if ((uVar23 & 2) != 0) {
          auVar66._8_8_ = auVar109._8_8_;
          auVar66._0_8_ = auVar109._0_8_ | (ulonglong)pbVar18[1] << 8;
          auVar109 = pblendw(auVar109,auVar66,0xfd);
        }
        if ((uVar23 & 4) != 0) {
          bVar16 = auVar109[3];
          auVar71 = pmovzxwd(auVar109,auVar109);
          auVar109._8_8_ = auVar71._8_8_;
          auVar109._0_8_ =
               auVar71._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar18[2] << 0x10 |
               (ulonglong)bVar16 << 0x18;
        }
        if ((uVar23 & 8) != 0) {
          bVar16 = auVar109[2];
          auVar71 = pmovzxwd(auVar109,auVar109);
          auVar109._8_8_ = auVar71._8_8_;
          auVar109._0_8_ =
               auVar71._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar16 << 0x10 |
               (ulonglong)pbVar18[3] << 0x18;
        }
      }
    }
    auVar71 = pmovsxbd(auVar51,auVar51);
    auVar52._0_4_ = auVar71._0_4_ << 2;
    auVar52._4_4_ = auVar71._4_4_ << 2;
    auVar52._8_4_ = auVar71._8_4_ << 2;
    auVar52._12_4_ = auVar71._12_4_ << 2;
    auVar52 = auVar52 & auVar93;
    auVar71 = insertps(ZEXT416(*(uint *)(param_8 + auVar52._0_4_)),
                       *(undefined4 *)(param_8 + auVar52._4_4_),0x10);
    auVar71 = insertps(auVar71,*(undefined4 *)(param_8 + auVar52._8_4_),0x20);
    auVar71 = insertps(auVar71,*(undefined4 *)(param_8 + auVar52._12_4_),0x30);
    pauVar21 = (undefined1 (*) [16])(param_2 + uVar30 * 0xc);
    if ((bVar35 & 0xf) == 0) {
      auVar45 = *pauVar21;
      auVar118 = pauVar21[1];
      auVar67 = insertps(auVar118,auVar45,0x8c);
      local_168._4_4_ = auVar45._12_4_;
      local_168._0_4_ = auVar45._0_4_;
      fStack_160 = (float)auVar118._8_4_;
      fStack_15c = (float)*(undefined4 *)(pauVar21[2] + 4);
      local_178._4_4_ = auVar118._0_4_;
      local_178._0_4_ = auVar45._4_4_;
      fStack_170 = (float)auVar118._12_4_;
      fStack_16c = (float)*(undefined4 *)(pauVar21[2] + 8);
      auVar122._0_8_ = auVar67._0_8_;
      auVar122._8_4_ = *(undefined4 *)pauVar21[2];
      auVar122._12_4_ = *(undefined4 *)(pauVar21[2] + 0xc);
      lVar37 = uVar30 * 0xc;
      auVar45 = *(undefined1 (*) [16])(param_3 + lVar37);
      auVar118 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar37);
      puVar4 = (undefined4 *)(param_3 + 0x20 + lVar37);
      auVar142._0_4_ = auVar45._0_4_;
      auVar67 = insertps(auVar118,auVar45,0x8c);
      auVar142._4_4_ = auVar45._12_4_;
      auVar142._8_4_ = auVar118._8_4_;
      auVar142._12_4_ = puVar4[1];
      auVar146._4_4_ = auVar118._0_4_;
      auVar146._0_4_ = auVar45._4_4_;
      auVar146._8_4_ = auVar118._12_4_;
      auVar146._12_4_ = puVar4[2];
      auVar153._0_8_ = auVar67._0_8_;
      auVar153._8_4_ = *puVar4;
      auVar153._12_4_ = puVar4[3];
      auVar45 = *(undefined1 (*) [16])(param_4 + lVar37);
      auVar118 = *(undefined1 (*) [16])(param_4 + 0x10 + lVar37);
      puVar4 = (undefined4 *)(param_4 + 0x20 + lVar37);
      auVar127._0_4_ = auVar45._0_4_;
      auVar67 = insertps(auVar118,auVar45,0x8c);
      auVar127._4_4_ = auVar45._12_4_;
      auVar127._8_4_ = auVar118._8_4_;
      auVar127._12_4_ = puVar4[1];
      auVar131._4_4_ = auVar118._0_4_;
      auVar131._0_4_ = auVar45._4_4_;
      auVar131._8_4_ = auVar118._12_4_;
      auVar131._12_4_ = puVar4[2];
      auVar138._0_8_ = auVar67._0_8_;
      auVar138._8_4_ = *puVar4;
      auVar138._12_4_ = puVar4[3];
    }
    else {
      auVar63._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar93._0_4_;
      auVar63._4_4_ = _UNK_150b50da4 & auVar93._4_4_;
      auVar63._8_4_ = _UNK_150b50da8 & auVar93._8_4_;
      auVar63._12_4_ = _UNK_150b50dac & auVar93._12_4_;
      lVar22 = extractps(auVar63,1);
      lVar29 = extractps(auVar63,2);
      lVar36 = extractps(auVar63,3);
      auVar45 = insertps(ZEXT416(*(uint *)*pauVar21),*(undefined4 *)(*pauVar21 + lVar22),0x10);
      auVar45 = insertps(auVar45,*(undefined4 *)(*pauVar21 + lVar29),0x20);
      _local_168 = insertps(auVar45,*(undefined4 *)(*pauVar21 + lVar36),0x30);
      auVar45 = ___xmm_000000280000001c0000001000000004 & auVar93;
      uVar28 = (ulonglong)auVar45._4_4_;
      uVar24 = (ulonglong)auVar45._8_4_;
      uVar26 = (ulonglong)auVar45._12_4_;
      uVar31 = (ulonglong)auVar45._0_4_;
      auVar45 = insertps(ZEXT416(*(uint *)(*pauVar21 + uVar31)),*(undefined4 *)(*pauVar21 + uVar28),
                         0x10);
      auVar45 = insertps(auVar45,*(undefined4 *)(*pauVar21 + uVar24),0x20);
      _local_178 = insertps(auVar45,*(undefined4 *)(*pauVar21 + uVar26),0x30);
      auVar45 = ___xmm_0000002c000000200000001400000008 & auVar93;
      uVar19 = (ulonglong)auVar45._4_4_;
      uVar34 = (ulonglong)auVar45._8_4_;
      uVar32 = (ulonglong)auVar45._12_4_;
      uVar27 = (ulonglong)auVar45._0_4_;
      auVar45 = insertps(ZEXT416(*(uint *)(*pauVar21 + uVar27)),*(undefined4 *)(*pauVar21 + uVar19),
                         0x10);
      auVar45 = insertps(auVar45,*(undefined4 *)(*pauVar21 + uVar34),0x20);
      auVar122 = insertps(auVar45,*(undefined4 *)(*pauVar21 + uVar32),0x30);
      lVar25 = uVar30 * 0xc;
      lVar37 = param_3 + lVar25;
      auVar45 = insertps(ZEXT416(*(uint *)(param_3 + lVar25)),*(undefined4 *)(lVar22 + lVar37),0x10)
      ;
      auVar45 = insertps(auVar45,*(undefined4 *)(lVar29 + lVar37),0x20);
      auVar142 = insertps(auVar45,*(undefined4 *)(lVar36 + lVar37),0x30);
      auVar45 = insertps(ZEXT416(*(uint *)(uVar31 + lVar37)),*(undefined4 *)(uVar28 + lVar37),0x10);
      auVar45 = insertps(auVar45,*(undefined4 *)(uVar24 + lVar37),0x20);
      auVar146 = insertps(auVar45,*(undefined4 *)(uVar26 + lVar37),0x30);
      auVar45 = insertps(ZEXT416(*(uint *)(uVar27 + lVar37)),*(undefined4 *)(uVar19 + lVar37),0x10);
      auVar45 = insertps(auVar45,*(undefined4 *)(uVar34 + lVar37),0x20);
      auVar153 = insertps(auVar45,*(undefined4 *)(uVar32 + lVar37),0x30);
      lVar37 = param_4 + lVar25;
      auVar45 = insertps(ZEXT416(*(uint *)(param_4 + lVar25)),*(undefined4 *)(lVar22 + lVar37),0x10)
      ;
      auVar45 = insertps(auVar45,*(undefined4 *)(lVar29 + lVar37),0x20);
      auVar127 = insertps(auVar45,*(undefined4 *)(lVar36 + lVar37),0x30);
      auVar45 = insertps(ZEXT416(*(uint *)(uVar31 + lVar37)),*(undefined4 *)(uVar28 + lVar37),0x10);
      auVar45 = insertps(auVar45,*(undefined4 *)(uVar24 + lVar37),0x20);
      auVar131 = insertps(auVar45,*(undefined4 *)(uVar26 + lVar37),0x30);
      auVar45 = insertps(ZEXT416(*(uint *)(uVar27 + lVar37)),*(undefined4 *)(uVar19 + lVar37),0x10);
      auVar45 = insertps(auVar45,*(undefined4 *)(uVar34 + lVar37),0x20);
      auVar138 = insertps(auVar45,*(undefined4 *)(uVar32 + lVar37),0x30);
    }
    fVar96 = auVar71._0_4_;
    fVar98 = auVar71._4_4_;
    fVar101 = auVar71._8_4_;
    fVar102 = auVar71._12_4_;
    auVar147._0_4_ = (auVar86._0_4_ - auVar153._0_4_) * fVar96;
    auVar147._4_4_ = (auVar86._4_4_ - auVar153._4_4_) * fVar98;
    auVar147._8_4_ = (auVar86._8_4_ - auVar153._8_4_) * fVar101;
    auVar147._12_4_ = (auVar86._12_4_ - auVar153._12_4_) * fVar102;
    auVar64._0_8_ =
         CONCAT44(auVar72._4_4_ - (auVar72._4_4_ - auVar142._4_4_) * fVar98,
                  auVar72._0_4_ - (auVar72._0_4_ - auVar142._0_4_) * fVar96);
    auVar64._8_4_ = auVar72._8_4_ - (auVar72._8_4_ - auVar142._8_4_) * fVar101;
    auVar64._12_4_ = auVar72._12_4_ - (auVar72._12_4_ - auVar142._12_4_) * fVar102;
    bVar39 = (bVar33 & 1) != 0;
    auVar154 = auVar72;
    if (bVar39) {
      auVar154._8_4_ = auVar64._8_4_;
      auVar154._0_8_ = auVar64._0_8_;
      auVar154._12_4_ = auVar64._12_4_;
    }
    auVar114._0_8_ =
         CONCAT44(auVar78._4_4_ - (auVar78._4_4_ - auVar146._4_4_) * fVar98,
                  auVar78._0_4_ - (auVar78._0_4_ - auVar146._0_4_) * fVar96);
    auVar114._8_4_ = auVar78._8_4_ - (auVar78._8_4_ - auVar146._8_4_) * fVar101;
    auVar114._12_4_ = auVar78._12_4_ - (auVar78._12_4_ - auVar146._12_4_) * fVar102;
    fVar96 = auVar86._0_4_ - auVar147._0_4_;
    fVar98 = auVar86._4_4_ - auVar147._4_4_;
    fVar101 = auVar86._8_4_ - auVar147._8_4_;
    fVar102 = auVar86._12_4_ - auVar147._12_4_;
    auVar53 = auVar86;
    auVar143 = auVar78;
    if (bVar39) {
      auVar143._8_4_ = auVar114._8_4_;
      auVar143._0_8_ = auVar114._0_8_;
      auVar143._12_4_ = auVar114._12_4_;
      auVar53._4_4_ = fVar98;
      auVar53._0_4_ = fVar96;
      auVar53._8_4_ = fVar101;
      auVar53._12_4_ = fVar102;
    }
    auVar45 = pmovsxbd(auVar147,auVar109);
    auVar71 = blendps(auVar72,auVar154,1);
    if ((bVar33 & 2) == 0) {
      auVar148._0_4_ = auVar45._0_4_ << 2;
      auVar148._4_4_ = auVar45._4_4_ << 2;
      auVar148._8_4_ = auVar45._8_4_ << 2;
      auVar148._12_4_ = auVar45._12_4_ << 2;
      auVar45 = blendps(auVar78,auVar143,1);
      auVar118 = blendps(auVar86,auVar53,1);
      auVar108 = auVar45;
      auVar149 = auVar118;
      auVar156 = auVar71;
    }
    else {
      auVar156._8_4_ = auVar64._8_4_;
      auVar156._0_8_ = auVar64._0_8_;
      auVar156._12_4_ = auVar64._12_4_;
      auVar148._0_4_ = auVar45._0_4_ << 2;
      auVar148._4_4_ = auVar45._4_4_ << 2;
      auVar148._8_4_ = auVar45._8_4_ << 2;
      auVar148._12_4_ = auVar45._12_4_ << 2;
      auVar45 = blendps(auVar78,auVar143,1);
      auVar108._8_4_ = auVar114._8_4_;
      auVar108._0_8_ = auVar114._0_8_;
      auVar108._12_4_ = auVar114._12_4_;
      auVar118 = blendps(auVar86,auVar53,1);
      auVar149._4_4_ = fVar98;
      auVar149._0_4_ = fVar96;
      auVar149._8_4_ = fVar101;
      auVar149._12_4_ = fVar102;
    }
    auVar93 = auVar93 & auVar148;
    auVar71 = blendps(auVar71,auVar156,2);
    bVar39 = (bVar33 & 4) != 0;
    auVar54 = auVar71;
    if (bVar39) {
      auVar54._8_4_ = auVar64._8_4_;
      auVar54._0_8_ = auVar64._0_8_;
      auVar54._12_4_ = auVar64._12_4_;
    }
    auVar45 = blendps(auVar45,auVar108,2);
    auVar155 = auVar45;
    if (bVar39) {
      auVar155._8_4_ = auVar114._8_4_;
      auVar155._0_8_ = auVar114._0_8_;
      auVar155._12_4_ = auVar114._12_4_;
    }
    auVar118 = blendps(auVar118,auVar149,2);
    auVar150 = auVar118;
    if (bVar39) {
      auVar150._4_4_ = fVar98;
      auVar150._0_4_ = fVar96;
      auVar150._8_4_ = fVar101;
      auVar150._12_4_ = fVar102;
    }
    auVar67 = insertps(ZEXT416(*(uint *)(param_11 + auVar93._0_4_)),
                       *(undefined4 *)(param_11 + auVar93._4_4_),0x10);
    auVar71 = blendps(auVar71,auVar54,4);
    bVar39 = -1 < (char)bVar33;
    if (bVar39) {
      auVar64 = auVar71;
    }
    auVar67 = insertps(auVar67,*(undefined4 *)(param_11 + auVar93._8_4_),0x20);
    auVar45 = blendps(auVar45,auVar155,4);
    if (bVar39) {
      auVar114 = auVar45;
    }
    auVar67 = insertps(auVar67,*(undefined4 *)(param_11 + auVar93._12_4_),0x30);
    auVar118 = blendps(auVar118,auVar150,4);
    if (bVar39) {
      fVar96 = auVar118._0_4_;
      fVar98 = auVar118._4_4_;
      fVar101 = auVar118._8_4_;
      fVar102 = auVar118._12_4_;
    }
    auVar71 = blendps(auVar71,auVar64,8);
    auVar45 = blendps(auVar45,auVar114,8);
    auVar12._4_4_ = fVar98;
    auVar12._0_4_ = fVar96;
    auVar12._8_4_ = fVar101;
    auVar12._12_4_ = fVar102;
    auVar118 = blendps(auVar118,auVar12,8);
    fVar96 = auVar118._0_4_;
    fVar98 = auVar118._4_4_;
    fVar101 = auVar118._8_4_;
    fVar102 = auVar118._12_4_;
    fVar103 = auVar67._0_4_;
    fVar110 = auVar67._4_4_;
    fVar80 = auVar67._8_4_;
    fVar89 = auVar67._12_4_;
    auVar94._0_8_ =
         CONCAT44(auVar45._4_4_ -
                  ((auVar45._4_4_ - (float)local_178._4_4_) - auVar131._4_4_ * param_5) * fVar110,
                  auVar45._0_4_ -
                  ((auVar45._0_4_ - (float)local_178._0_4_) - auVar131._0_4_ * param_5) * fVar103);
    auVar94._8_4_ =
         auVar45._8_4_ - ((auVar45._8_4_ - fStack_170) - auVar131._8_4_ * param_5) * fVar80;
    auVar94._12_4_ =
         auVar45._12_4_ - ((auVar45._12_4_ - fStack_16c) - auVar131._12_4_ * param_5) * fVar89;
    fVar44 = fVar96 - ((fVar96 - auVar122._0_4_) - auVar138._0_4_ * param_5) * fVar103;
    fVar56 = fVar98 - ((fVar98 - auVar122._4_4_) - auVar138._4_4_ * param_5) * fVar110;
    auVar55._0_8_ = CONCAT44(fVar56,fVar44);
    auVar55._8_4_ = fVar101 - ((fVar101 - auVar122._8_4_) - auVar138._8_4_ * param_5) * fVar80;
    auVar55._12_4_ = fVar102 - ((fVar102 - auVar122._12_4_) - auVar138._12_4_ * param_5) * fVar89;
    auVar107._0_8_ =
         CONCAT44(auVar71._4_4_ -
                  ((auVar71._4_4_ - (float)local_168._4_4_) - param_5 * auVar127._4_4_) * fVar110,
                  auVar71._0_4_ -
                  ((auVar71._0_4_ - (float)local_168._0_4_) - param_5 * auVar127._0_4_) * fVar103);
    auVar107._8_4_ =
         auVar71._8_4_ - ((auVar71._8_4_ - fStack_160) - param_5 * auVar127._8_4_) * fVar80;
    auVar107._12_4_ =
         auVar71._12_4_ - ((auVar71._12_4_ - fStack_15c) - param_5 * auVar127._12_4_) * fVar89;
    if ((bVar33 & 1) == 0) {
      auVar67 = blendps(auVar71,auVar71,1);
      auVar123 = auVar45;
    }
    else {
      auVar139._8_4_ = auVar107._8_4_;
      auVar139._0_8_ = auVar107._0_8_;
      auVar139._12_4_ = auVar107._12_4_;
      auVar123._8_4_ = auVar94._8_4_;
      auVar123._0_8_ = auVar94._0_8_;
      auVar123._12_4_ = auVar94._12_4_;
      auVar67 = blendps(auVar71,auVar139,1);
      fVar96 = fVar44;
      fVar98 = fVar56;
      fVar101 = auVar55._8_4_;
      fVar102 = auVar55._12_4_;
      auVar71 = auVar139;
    }
    if ((bVar33 & 2) == 0) {
      auVar60 = blendps(auVar45,auVar123,1);
      auVar13._4_4_ = fVar98;
      auVar13._0_4_ = fVar96;
      auVar13._8_4_ = fVar101;
      auVar13._12_4_ = fVar102;
      auVar118 = blendps(auVar118,auVar13,1);
      auVar45 = blendps(auVar67,auVar67,2);
      auVar115 = auVar118;
      auVar132 = auVar60;
    }
    else {
      auVar144._8_4_ = auVar107._8_4_;
      auVar144._0_8_ = auVar107._0_8_;
      auVar144._12_4_ = auVar107._12_4_;
      auVar60 = blendps(auVar45,auVar123,1);
      auVar132._8_4_ = auVar94._8_4_;
      auVar132._0_8_ = auVar94._0_8_;
      auVar132._12_4_ = auVar94._12_4_;
      auVar14._4_4_ = fVar98;
      auVar14._0_4_ = fVar96;
      auVar14._8_4_ = fVar101;
      auVar14._12_4_ = fVar102;
      auVar118 = blendps(auVar118,auVar14,1);
      auVar115._8_4_ = auVar55._8_4_;
      auVar115._0_8_ = auVar55._0_8_;
      auVar115._12_4_ = auVar55._12_4_;
      auVar45 = blendps(auVar67,auVar144,2);
      auVar67 = auVar144;
    }
    if ((bVar33 & 4) == 0) {
      auVar81 = blendps(auVar60,auVar132,2);
      auVar60 = blendps(auVar118,auVar115,2);
      auVar118 = blendps(auVar45,auVar45,4);
      auVar128 = auVar60;
      auVar151 = auVar81;
    }
    else {
      auVar157._8_4_ = auVar107._8_4_;
      auVar157._0_8_ = auVar107._0_8_;
      auVar157._12_4_ = auVar107._12_4_;
      auVar81 = blendps(auVar60,auVar132,2);
      auVar151._8_4_ = auVar94._8_4_;
      auVar151._0_8_ = auVar94._0_8_;
      auVar151._12_4_ = auVar94._12_4_;
      auVar60 = blendps(auVar118,auVar115,2);
      auVar128._8_4_ = auVar55._8_4_;
      auVar128._0_8_ = auVar55._0_8_;
      auVar128._12_4_ = auVar55._12_4_;
      auVar118 = blendps(auVar45,auVar157,4);
      auVar45 = auVar157;
    }
    if ((char)bVar33 < '\0') {
      auVar81 = blendps(auVar81,auVar151,4);
    }
    else {
      auVar81 = blendps(auVar81,auVar151,4);
      auVar107 = auVar118;
    }
    if ((char)bVar33 < '\0') {
      auVar60 = blendps(auVar60,auVar128,4);
    }
    else {
      auVar60 = blendps(auVar60,auVar128,4);
      auVar94 = auVar81;
    }
    auVar84 = auVar60;
    if ((char)bVar33 < '\0') {
      auVar84 = auVar55;
    }
    if ((bVar35 & 0xf) == 0) {
      auVar71 = blendps(auVar84,auVar60,7);
      auVar45 = blendps(auVar94,auVar81,7);
      auVar67 = blendps(auVar107,auVar118,7);
      auVar73._0_8_ = auVar118._0_8_;
      auVar73._8_4_ = auVar118._4_4_;
      auVar73._12_4_ = auVar81._4_4_;
      auVar88._0_8_ = auVar60._0_8_;
      auVar88._8_4_ = auVar60._4_4_;
      auVar88._12_4_ = fVar97;
      *(ulonglong *)*param_1 = CONCAT44(auVar81._0_4_,auVar118._0_4_);
      *(ulonglong *)(*param_1 + 8) = CONCAT44(fVar95,auVar60._0_4_);
      *(longlong *)param_1[1] = auVar73._8_8_;
      *(longlong *)(param_1[1] + 8) = auVar88._8_8_;
      *(int *)param_1[2] = auVar67._8_4_;
      *(int *)(param_1[2] + 4) = auVar45._8_4_;
      *(int *)(param_1[2] + 8) = auVar71._8_4_;
      *(float *)(param_1[2] + 0xc) = fVar100;
      *(int *)param_1[3] = auVar67._12_4_;
      *(int *)(param_1[3] + 4) = auVar45._12_4_;
      *(int *)(param_1[3] + 8) = auVar71._12_4_;
      *(float *)(param_1[3] + 0xc) = fVar99;
    }
    else {
      if ((bVar33 & 1) != 0) {
        *(int *)*param_1 = auVar71._0_4_;
      }
      if ((bVar33 & 2) != 0) {
        uVar5 = extractps(auVar67,1);
        *(undefined8 *)param_1[1] = uVar5;
      }
      if ((bVar33 & 4) != 0) {
        uVar5 = extractps(auVar45,2);
        *(undefined8 *)param_1[2] = uVar5;
      }
      if ((char)bVar33 < '\0') {
        uVar5 = extractps(auVar107,3);
        *(undefined8 *)param_1[3] = uVar5;
      }
      if ((bVar33 & 1) != 0) {
        *(int *)(*param_1 + 4) = auVar123._0_4_;
      }
      if ((bVar33 & 2) != 0) {
        uVar5 = extractps(auVar132,1);
        *(undefined8 *)(param_1[1] + 4) = uVar5;
      }
      if ((bVar33 & 4) != 0) {
        uVar5 = extractps(auVar151,2);
        *(undefined8 *)(param_1[2] + 4) = uVar5;
      }
      if ((char)bVar33 < '\0') {
        uVar5 = extractps(auVar94,3);
        *(undefined8 *)(param_1[3] + 4) = uVar5;
      }
      if ((bVar33 & 1) != 0) {
        *(float *)(*param_1 + 8) = fVar96;
      }
      if ((bVar33 & 2) != 0) {
        uVar5 = extractps(auVar115,1);
        *(undefined8 *)(param_1[1] + 8) = uVar5;
      }
      if ((bVar33 & 4) != 0) {
        uVar5 = extractps(auVar128,2);
        *(undefined8 *)(param_1[2] + 8) = uVar5;
      }
      if ((char)bVar33 < '\0') {
        uVar5 = extractps(auVar84,3);
        *(undefined8 *)(param_1[3] + 8) = uVar5;
      }
      if ((bVar33 & 1) != 0) {
        *(float *)(*param_1 + 0xc) = fVar95;
      }
      if ((bVar33 & 2) != 0) {
        *(float *)(param_1[1] + 0xc) = fVar97;
      }
      if ((bVar33 & 4) != 0) {
        *(float *)(param_1[2] + 0xc) = fVar100;
      }
      if ((char)bVar33 < '\0') {
        *(float *)(param_1[3] + 0xc) = fVar99;
      }
    }
    return;
  }
  return;
}

// MultiResUpdateFineTargets___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_Cuni_sse4 @ 1405b5b60

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MultiResUpdateFineTargets___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector_5D__3E_Cuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,uint param_8)

{
  int *piVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [12];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  byte bVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  uint uVar25;
  uint *puVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  uint uVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  ulonglong uVar41;
  longlong lVar42;
  longlong lVar43;
  longlong lVar44;
  float *pfVar45;
  longlong lVar46;
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
  float fVar58;
  float fVar59;
  undefined1 auVar57 [16];
  float fVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined4 uVar64;
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
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 local_138 [8];
  undefined8 uStack_130;
  undefined1 local_128 [8];
  undefined8 uStack_120;
  undefined1 local_118 [8];
  undefined8 uStack_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  
  uVar30 = param_8 + 3;
  if (-1 < (int)param_8) {
    uVar30 = param_8;
  }
  if ((int)(uVar30 & 0xfffffffc) < 1) {
    uVar25 = 0;
    if ((int)param_8 < 1) {
      return;
    }
  }
  else {
    pfVar45 = (float *)(param_6 + 0x30);
    lVar46 = 0x20;
    uVar25 = 0;
    do {
      fVar56 = pfVar45[-0xc];
      fVar58 = pfVar45[-0xb];
      fVar59 = pfVar45[-10];
      fVar60 = pfVar45[-9];
      fVar6 = pfVar45[-8];
      fVar7 = pfVar45[-7];
      fVar8 = pfVar45[-6];
      fVar9 = pfVar45[-5];
      fVar10 = pfVar45[-4];
      fVar11 = pfVar45[-3];
      fVar12 = pfVar45[-2];
      fVar13 = pfVar45[-1];
      fVar14 = *pfVar45;
      fVar15 = pfVar45[1];
      fVar16 = pfVar45[2];
      fVar17 = pfVar45[3];
      auVar73 = *(undefined1 (*) [16])(param_7 + -0x20 + lVar46);
      auVar79 = *(undefined1 (*) [16])(param_7 + -0x10 + lVar46);
      piVar1 = (int *)(param_7 + lVar46);
      uVar64 = auVar79._0_4_;
      auVar47._4_4_ = uVar64;
      auVar47._0_4_ = uVar64;
      auVar47._8_4_ = uVar64;
      auVar47._12_4_ = uVar64;
      iVar18 = auVar73._12_4_;
      auVar70._4_4_ = iVar18;
      auVar70._0_4_ = auVar73._0_4_;
      auVar70._8_4_ = auVar73._4_4_;
      auVar70._12_4_ = iVar18;
      auVar47 = pblendw(auVar47,auVar70,0x3f);
      auVar74._0_8_ = auVar73._8_8_;
      auVar74._8_4_ = auVar73._8_4_;
      auVar74._12_4_ = iVar18;
      auVar78 = pblendw(auVar74,auVar79,0xc);
      lVar40 = (longlong)(auVar73._0_4_ * 3);
      lVar22 = (longlong)(iVar18 * 3);
      lVar31 = (longlong)(auVar79._8_4_ * 3);
      lVar35 = (longlong)(piVar1[1] * 3);
      auVar73 = insertps(ZEXT416(*(uint *)(param_3 + lVar40 * 4)),
                         *(undefined4 *)(param_3 + lVar22 * 4),0x10);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_3 + lVar31 * 4),0x20);
      auVar74 = insertps(auVar73,*(undefined4 *)(param_3 + lVar35 * 4),0x30);
      auVar73 = insertps(ZEXT416(*(uint *)(param_3 + 4 + lVar40 * 4)),
                         *(undefined4 *)(param_3 + 4 + lVar22 * 4),0x10);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_3 + 4 + lVar31 * 4),0x20);
      auVar67 = insertps(auVar73,*(undefined4 *)(param_3 + 4 + lVar35 * 4),0x30);
      auVar73 = insertps(ZEXT416(*(uint *)(param_3 + 8 + lVar40 * 4)),
                         *(undefined4 *)(param_3 + 8 + lVar22 * 4),0x10);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_3 + 8 + lVar31 * 4),0x20);
      auVar61 = insertps(auVar73,*(undefined4 *)(param_3 + 8 + lVar35 * 4),0x30);
      lVar38 = (longlong)(auVar47._8_4_ * 3);
      lVar28 = (longlong)(auVar47._12_4_ * 3);
      lVar44 = (longlong)(auVar79._12_4_ * 3);
      lVar43 = (longlong)(piVar1[2] * 3);
      auVar73 = insertps(ZEXT416(*(uint *)(param_3 + lVar38 * 4)),
                         *(undefined4 *)(param_3 + lVar28 * 4),0x10);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_3 + lVar44 * 4),0x20);
      auVar76 = insertps(auVar73,*(undefined4 *)(param_3 + lVar43 * 4),0x30);
      auVar73 = insertps(ZEXT416(*(uint *)(param_3 + 4 + lVar38 * 4)),
                         *(undefined4 *)(param_3 + 4 + lVar28 * 4),0x10);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_3 + 4 + lVar44 * 4),0x20);
      auVar69 = insertps(auVar73,*(undefined4 *)(param_3 + 4 + lVar43 * 4),0x30);
      auVar73 = insertps(ZEXT416(*(uint *)(param_3 + 8 + lVar38 * 4)),
                         *(undefined4 *)(param_3 + 8 + lVar28 * 4),0x10);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_3 + 8 + lVar44 * 4),0x20);
      auVar90 = insertps(ZEXT416(*(uint *)(param_4 + lVar40 * 4)),
                         *(undefined4 *)(param_4 + lVar22 * 4),0x10);
      auVar86 = insertps(ZEXT416(*(uint *)(param_4 + 4 + lVar40 * 4)),
                         *(undefined4 *)(param_4 + 4 + lVar22 * 4),0x10);
      auVar79 = insertps(ZEXT416(*(uint *)(param_4 + 8 + lVar40 * 4)),
                         *(undefined4 *)(param_4 + 8 + lVar22 * 4),0x10);
      auVar84 = insertps(ZEXT416(*(uint *)(param_5 + lVar40 * 4)),
                         *(undefined4 *)(param_5 + lVar22 * 4),0x10);
      auVar82 = insertps(ZEXT416(*(uint *)(param_5 + 4 + lVar40 * 4)),
                         *(undefined4 *)(param_5 + 4 + lVar22 * 4),0x10);
      auVar47 = insertps(ZEXT416(*(uint *)(param_5 + 8 + lVar40 * 4)),
                         *(undefined4 *)(param_5 + 8 + lVar22 * 4),0x10);
      auVar90 = insertps(auVar90,*(undefined4 *)(param_4 + lVar31 * 4),0x20);
      auVar86 = insertps(auVar86,*(undefined4 *)(param_4 + 4 + lVar31 * 4),0x20);
      auVar79 = insertps(auVar79,*(undefined4 *)(param_4 + 8 + lVar31 * 4),0x20);
      auVar84 = insertps(auVar84,*(undefined4 *)(param_5 + lVar31 * 4),0x20);
      auVar82 = insertps(auVar82,*(undefined4 *)(param_5 + 4 + lVar31 * 4),0x20);
      auVar47 = insertps(auVar47,*(undefined4 *)(param_5 + 8 + lVar31 * 4),0x20);
      auVar91 = insertps(auVar90,*(undefined4 *)(param_4 + lVar35 * 4),0x30);
      auVar87 = insertps(auVar86,*(undefined4 *)(param_4 + 4 + lVar35 * 4),0x30);
      auVar80 = insertps(auVar79,*(undefined4 *)(param_4 + 8 + lVar35 * 4),0x30);
      auVar85 = insertps(auVar84,*(undefined4 *)(param_5 + lVar35 * 4),0x30);
      auVar83 = insertps(auVar82,*(undefined4 *)(param_5 + 4 + lVar35 * 4),0x30);
      auVar81 = insertps(auVar47,*(undefined4 *)(param_5 + 8 + lVar35 * 4),0x30);
      auVar82 = insertps(auVar73,*(undefined4 *)(param_3 + 8 + lVar43 * 4),0x30);
      lVar31 = (longlong)(auVar78._0_4_ * 3);
      lVar22 = (longlong)(auVar78._4_4_ * 3);
      lVar40 = (longlong)(*piVar1 * 3);
      lVar35 = (longlong)(piVar1[3] * 3);
      auVar73 = insertps(ZEXT416(*(uint *)(param_4 + lVar38 * 4)),
                         *(undefined4 *)(param_4 + lVar28 * 4),0x10);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_4 + lVar44 * 4),0x20);
      auVar90 = insertps(auVar73,*(undefined4 *)(param_4 + lVar43 * 4),0x30);
      auVar73 = insertps(ZEXT416(*(uint *)(param_4 + 4 + lVar38 * 4)),
                         *(undefined4 *)(param_4 + 4 + lVar28 * 4),0x10);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_4 + 4 + lVar44 * 4),0x20);
      auVar75 = insertps(auVar73,*(undefined4 *)(param_4 + 4 + lVar43 * 4),0x30);
      auVar73 = insertps(ZEXT416(*(uint *)(param_4 + 8 + lVar38 * 4)),
                         *(undefined4 *)(param_4 + 8 + lVar28 * 4),0x10);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_4 + 8 + lVar44 * 4),0x20);
      auVar77 = insertps(auVar73,*(undefined4 *)(param_4 + 8 + lVar43 * 4),0x30);
      auVar73 = insertps(ZEXT416(*(uint *)(param_3 + lVar31 * 4)),
                         *(undefined4 *)(param_3 + lVar22 * 4),0x10);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_3 + lVar40 * 4),0x20);
      auVar70 = insertps(auVar73,*(undefined4 *)(param_3 + lVar35 * 4),0x30);
      auVar73 = insertps(ZEXT416(*(uint *)(param_3 + 4 + lVar31 * 4)),
                         *(undefined4 *)(param_3 + 4 + lVar22 * 4),0x10);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_3 + 4 + lVar40 * 4),0x20);
      auVar84 = insertps(auVar73,*(undefined4 *)(param_3 + 4 + lVar35 * 4),0x30);
      auVar73 = insertps(ZEXT416(*(uint *)(param_4 + lVar31 * 4)),
                         *(undefined4 *)(param_4 + lVar22 * 4),0x10);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_4 + lVar40 * 4),0x20);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_4 + lVar35 * 4),0x30);
      auVar79 = insertps(ZEXT416(*(uint *)(param_4 + 4 + lVar31 * 4)),
                         *(undefined4 *)(param_4 + 4 + lVar22 * 4),0x10);
      auVar79 = insertps(auVar79,*(undefined4 *)(param_4 + 4 + lVar40 * 4),0x20);
      auVar78 = insertps(auVar79,*(undefined4 *)(param_4 + 4 + lVar35 * 4),0x30);
      auVar79 = insertps(ZEXT416(*(uint *)(param_4 + 8 + lVar31 * 4)),
                         *(undefined4 *)(param_4 + 8 + lVar22 * 4),0x10);
      auVar79 = insertps(auVar79,*(undefined4 *)(param_4 + 8 + lVar40 * 4),0x20);
      auVar86 = insertps(auVar79,*(undefined4 *)(param_4 + 8 + lVar35 * 4),0x30);
      auVar79 = insertps(ZEXT416(*(uint *)(param_3 + 8 + lVar31 * 4)),
                         *(undefined4 *)(param_3 + 8 + lVar22 * 4),0x10);
      auVar79 = insertps(auVar79,*(undefined4 *)(param_3 + 8 + lVar40 * 4),0x20);
      auVar47 = insertps(auVar79,*(undefined4 *)(param_3 + 8 + lVar35 * 4),0x30);
      auVar79._0_8_ =
           CONCAT44((auVar73._4_4_ * fVar9 + auVar70._4_4_) * fVar8 +
                    (auVar90._4_4_ * fVar9 + auVar76._4_4_) * fVar7 +
                    (auVar91._4_4_ * fVar9 + auVar74._4_4_) * fVar6,
                    (auVar73._0_4_ * fVar60 + auVar70._0_4_) * fVar59 +
                    (auVar90._0_4_ * fVar60 + auVar76._0_4_) * fVar58 +
                    (auVar91._0_4_ * fVar60 + auVar74._0_4_) * fVar56);
      auVar79._8_4_ =
           (auVar73._8_4_ * fVar13 + auVar70._8_4_) * fVar12 +
           (auVar90._8_4_ * fVar13 + auVar76._8_4_) * fVar11 +
           (auVar91._8_4_ * fVar13 + auVar74._8_4_) * fVar10;
      auVar79._12_4_ =
           (auVar73._12_4_ * fVar17 + auVar70._12_4_) * fVar16 +
           (auVar90._12_4_ * fVar17 + auVar76._12_4_) * fVar15 +
           (auVar91._12_4_ * fVar17 + auVar74._12_4_) * fVar14;
      auVar90._0_4_ =
           (auVar78._0_4_ * fVar60 + auVar84._0_4_) * fVar59 +
           (auVar75._0_4_ * fVar60 + auVar69._0_4_) * fVar58 +
           (auVar87._0_4_ * fVar60 + auVar67._0_4_) * fVar56;
      auVar90._4_4_ =
           (auVar78._4_4_ * fVar9 + auVar84._4_4_) * fVar8 +
           (auVar75._4_4_ * fVar9 + auVar69._4_4_) * fVar7 +
           (auVar87._4_4_ * fVar9 + auVar67._4_4_) * fVar6;
      auVar90._8_4_ =
           (auVar78._8_4_ * fVar13 + auVar84._8_4_) * fVar12 +
           (auVar75._8_4_ * fVar13 + auVar69._8_4_) * fVar11 +
           (auVar87._8_4_ * fVar13 + auVar67._8_4_) * fVar10;
      auVar90._12_4_ =
           (auVar78._12_4_ * fVar17 + auVar84._12_4_) * fVar16 +
           (auVar75._12_4_ * fVar17 + auVar69._12_4_) * fVar15 +
           (auVar87._12_4_ * fVar17 + auVar67._12_4_) * fVar14;
      auVar67._0_4_ =
           (auVar86._0_4_ * fVar60 + auVar47._0_4_) * fVar59 +
           (auVar77._0_4_ * fVar60 + auVar82._0_4_) * fVar58 +
           (auVar80._0_4_ * fVar60 + auVar61._0_4_) * fVar56;
      auVar67._4_4_ =
           (auVar86._4_4_ * fVar9 + auVar47._4_4_) * fVar8 +
           (auVar77._4_4_ * fVar9 + auVar82._4_4_) * fVar7 +
           (auVar80._4_4_ * fVar9 + auVar61._4_4_) * fVar6;
      auVar67._8_4_ =
           (auVar86._8_4_ * fVar13 + auVar47._8_4_) * fVar12 +
           (auVar77._8_4_ * fVar13 + auVar82._8_4_) * fVar11 +
           (auVar80._8_4_ * fVar13 + auVar61._8_4_) * fVar10;
      auVar67._12_4_ =
           (auVar86._12_4_ * fVar17 + auVar47._12_4_) * fVar16 +
           (auVar77._12_4_ * fVar17 + auVar82._12_4_) * fVar15 +
           (auVar80._12_4_ * fVar17 + auVar61._12_4_) * fVar14;
      auVar47 = insertps(ZEXT416(*(uint *)(param_5 + lVar38 * 4)),
                         *(undefined4 *)(param_5 + lVar28 * 4),0x10);
      auVar61 = insertps(ZEXT416(*(uint *)(param_5 + 4 + lVar38 * 4)),
                         *(undefined4 *)(param_5 + 4 + lVar28 * 4),0x10);
      auVar73 = insertps(ZEXT416(*(uint *)(param_5 + 8 + lVar38 * 4)),
                         *(undefined4 *)(param_5 + 8 + lVar28 * 4),0x10);
      auVar47 = insertps(auVar47,*(undefined4 *)(param_5 + lVar44 * 4),0x20);
      auVar61 = insertps(auVar61,*(undefined4 *)(param_5 + 4 + lVar44 * 4),0x20);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_5 + 8 + lVar44 * 4),0x20);
      auVar78 = insertps(auVar47,*(undefined4 *)(param_5 + lVar43 * 4),0x30);
      auVar84 = insertps(auVar61,*(undefined4 *)(param_5 + 4 + lVar43 * 4),0x30);
      auVar61 = insertps(auVar73,*(undefined4 *)(param_5 + 8 + lVar43 * 4),0x30);
      auVar73 = insertps(ZEXT416(*(uint *)(param_5 + lVar31 * 4)),
                         *(undefined4 *)(param_5 + lVar22 * 4),0x10);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_5 + lVar40 * 4),0x20);
      auVar47 = insertps(auVar73,*(undefined4 *)(param_5 + lVar35 * 4),0x30);
      auVar73 = insertps(ZEXT416(*(uint *)(param_5 + 4 + lVar31 * 4)),
                         *(undefined4 *)(param_5 + 4 + lVar22 * 4),0x10);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_5 + 4 + lVar40 * 4),0x20);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_5 + 4 + lVar35 * 4),0x30);
      auVar82._0_8_ =
           CONCAT44(auVar47._4_4_ * fVar8 + auVar78._4_4_ * fVar7 + auVar85._4_4_ * fVar6,
                    auVar47._0_4_ * fVar59 + auVar78._0_4_ * fVar58 + auVar85._0_4_ * fVar56);
      auVar82._8_4_ = auVar47._8_4_ * fVar12 + auVar78._8_4_ * fVar11 + auVar85._8_4_ * fVar10;
      auVar82._12_4_ = auVar47._12_4_ * fVar16 + auVar78._12_4_ * fVar15 + auVar85._12_4_ * fVar14;
      auVar78._0_4_ = auVar73._0_4_ * fVar59 + auVar84._0_4_ * fVar58 + auVar83._0_4_ * fVar56;
      auVar78._4_4_ = auVar73._4_4_ * fVar8 + auVar84._4_4_ * fVar7 + auVar83._4_4_ * fVar6;
      auVar78._8_4_ = auVar73._8_4_ * fVar12 + auVar84._8_4_ * fVar11 + auVar83._8_4_ * fVar10;
      auVar78._12_4_ = auVar73._12_4_ * fVar16 + auVar84._12_4_ * fVar15 + auVar83._12_4_ * fVar14;
      auVar73 = insertps(ZEXT416(*(uint *)(param_5 + 8 + lVar31 * 4)),
                         *(undefined4 *)(param_5 + 8 + lVar22 * 4),0x10);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_5 + 8 + lVar40 * 4),0x20);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_5 + 8 + lVar35 * 4),0x30);
      auVar69._0_4_ = auVar73._0_4_ * fVar59 + auVar61._0_4_ * fVar58 + auVar81._0_4_ * fVar56;
      auVar69._4_4_ = auVar73._4_4_ * fVar8 + auVar61._4_4_ * fVar7 + auVar81._4_4_ * fVar6;
      auVar69._8_4_ = auVar73._8_4_ * fVar12 + auVar61._8_4_ * fVar11 + auVar81._8_4_ * fVar10;
      auVar69._12_4_ = auVar73._12_4_ * fVar16 + auVar61._12_4_ * fVar15 + auVar81._12_4_ * fVar14;
      auVar84._8_4_ = auVar79._8_4_;
      auVar84._0_8_ = auVar79._0_8_;
      auVar84._12_4_ = auVar79._12_4_;
      auVar73 = insertps(auVar84,auVar90,0x30);
      auVar73 = insertps(auVar73,auVar67,0x20);
      puVar3 = (undefined4 *)(param_1 + -0x20 + lVar46);
      *puVar3 = auVar73._0_4_;
      puVar3[1] = auVar73._12_4_;
      puVar3[2] = auVar73._8_4_;
      puVar3[3] = auVar73._4_4_;
      auVar86._4_4_ = auVar90._8_4_;
      auVar86._0_4_ = auVar90._4_4_;
      auVar86._8_4_ = auVar67._0_4_;
      auVar86._12_4_ = auVar67._4_4_;
      auVar73 = blendps(auVar86,auVar79,4);
      puVar3 = (undefined4 *)(param_1 + -0x10 + lVar46);
      *puVar3 = auVar73._0_4_;
      puVar3[1] = auVar73._12_4_;
      puVar3[2] = auVar73._8_4_;
      puVar3[3] = auVar73._4_4_;
      pfVar2 = (float *)(param_1 + lVar46);
      *pfVar2 = auVar67._8_4_;
      pfVar2[1] = auVar79._12_4_;
      pfVar2[2] = auVar90._12_4_;
      pfVar2[3] = auVar67._12_4_;
      auVar73._8_4_ = auVar82._8_4_;
      auVar73._0_8_ = auVar82._0_8_;
      auVar73._12_4_ = auVar82._12_4_;
      auVar73 = insertps(auVar73,auVar78,0x30);
      auVar73 = insertps(auVar73,auVar69,0x20);
      puVar3 = (undefined4 *)(param_2 + -0x20 + lVar46);
      *puVar3 = auVar73._0_4_;
      puVar3[1] = auVar73._12_4_;
      puVar3[2] = auVar73._8_4_;
      puVar3[3] = auVar73._4_4_;
      auVar61._4_4_ = auVar78._8_4_;
      auVar61._0_4_ = auVar78._4_4_;
      auVar61._8_4_ = auVar69._0_4_;
      auVar61._12_4_ = auVar69._4_4_;
      auVar73 = blendps(auVar61,auVar82,4);
      puVar3 = (undefined4 *)(param_2 + -0x10 + lVar46);
      *puVar3 = auVar73._0_4_;
      puVar3[1] = auVar73._12_4_;
      puVar3[2] = auVar73._8_4_;
      puVar3[3] = auVar73._4_4_;
      pfVar2 = (float *)(param_2 + lVar46);
      *pfVar2 = auVar69._8_4_;
      pfVar2[1] = auVar82._12_4_;
      pfVar2[2] = auVar78._12_4_;
      pfVar2[3] = auVar69._12_4_;
      lVar46 = lVar46 + 0x30;
      pfVar45 = pfVar45 + 0x10;
      uVar25 = uVar25 + 4;
    } while ((int)uVar25 < (int)(uVar30 & 0xfffffffc));
    if ((int)param_8 <= (int)uVar25) {
      return;
    }
  }
  auVar75._0_4_ =
       -(uint)((int)(uVar25 | (uint)__xmm_00000003000000020000000100000000) < (int)param_8);
  auVar75._4_4_ =
       -(uint)((int)(uVar25 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_8);
  auVar75._8_4_ = -(uint)((int)(uVar25 | _UNK_150631e08) < (int)param_8);
  auVar75._12_4_ = -(uint)((int)(uVar25 | _UNK_150631e0c) < (int)param_8);
  uVar32 = (ulonglong)uVar25;
  puVar26 = (uint *)(param_6 + uVar32 * 0x10);
  iVar18 = movmskps((int)(uVar32 * 0x10),auVar75);
  bVar21 = (char)((char)iVar18 << 4) >> 4;
  if (iVar18 == 0xf) {
    auVar73 = *(undefined1 (*) [16])(puVar26 + 8);
    local_118._4_4_ = puVar26[4];
    local_118._0_4_ = *puVar26;
    auVar76._0_8_ = CONCAT44(puVar26[6],puVar26[2]);
    auVar76._8_4_ = puVar26[3];
    auVar76._12_4_ = puVar26[7];
    auVar91._0_8_ = auVar73._0_8_;
    auVar91._8_4_ = auVar73._4_4_;
    auVar91._12_4_ = puVar26[0xd];
    uStack_110._4_4_ = (float)puVar26[0xc];
    uStack_110._0_4_ = (float)auVar73._0_4_;
    uStack_130._4_4_ = (float)puVar26[0xe];
    uStack_130._0_4_ = (float)auVar73._8_4_;
    local_128._4_4_ = puVar26[5];
    local_128._0_4_ = puVar26[1];
    uStack_120 = auVar91._8_8_;
    auVar5._4_8_ = auVar91._8_8_;
    auVar5._0_4_ = puVar26[0xe];
    auVar88._0_8_ = auVar5._0_8_ << 0x20;
    auVar88._8_4_ = auVar73._12_4_;
    auVar88._12_4_ = puVar26[0xf];
    local_138 = (undefined1  [8])auVar76._0_8_;
    auVar57._8_8_ = auVar88._8_8_;
    auVar57._0_8_ = auVar76._8_8_;
    auVar73 = *(undefined1 (*) [16])(param_7 + uVar32 * 0xc);
    auVar79 = *(undefined1 (*) [16])(param_7 + 0x10 + uVar32 * 0xc);
    puVar3 = (undefined4 *)(param_7 + 0x20 + uVar32 * 0xc);
    uVar64 = auVar79._0_4_;
    auVar81._4_4_ = uVar64;
    auVar81._0_4_ = uVar64;
    auVar81._8_4_ = uVar64;
    auVar81._12_4_ = uVar64;
    auVar77._8_4_ = auVar73._8_4_;
    auVar77._12_4_ = auVar73._12_4_;
    auVar85._0_8_ = CONCAT44(auVar77._12_4_,auVar73._0_4_);
    auVar85._8_4_ = auVar73._4_4_;
    auVar85._12_4_ = auVar77._12_4_;
    auVar47 = pblendw(auVar81,auVar85,0x3f);
    auVar77._0_8_ = auVar73._8_8_;
    auVar73 = pblendw(auVar77,auVar79,0xc);
    auVar65._0_8_ = CONCAT44(puVar3[1],auVar79._8_4_);
    auVar65._8_4_ = auVar79._12_4_;
    auVar65._12_4_ = puVar3[2];
    auVar87._8_8_ = auVar65._0_8_;
    auVar87._0_8_ = auVar85._0_8_;
    auVar83._8_8_ = auVar65._8_8_;
    auVar83._0_8_ = auVar47._8_8_;
    auVar80._0_8_ = auVar73._0_8_;
    auVar80._8_4_ = *puVar3;
    auVar80._12_4_ = puVar3[3];
  }
  else {
    auVar48._0_4_ = ___xmm_00000030000000200000001000000000 & auVar75._0_4_;
    auVar48._4_4_ = _UNK_150b511c4 & auVar75._4_4_;
    auVar48._8_4_ = _UNK_150b511c8 & auVar75._8_4_;
    auVar48._12_4_ = _UNK_150b511cc & auVar75._12_4_;
    lVar46 = extractps(auVar48,1);
    lVar22 = extractps(auVar48,2);
    lVar31 = extractps(auVar48,3);
    auVar73 = insertps(ZEXT416(*puVar26),*(undefined4 *)((longlong)puVar26 + lVar46),0x10);
    auVar73 = insertps(auVar73,*(undefined4 *)((longlong)puVar26 + lVar22),0x20);
    _local_118 = insertps(auVar73,*(undefined4 *)((longlong)puVar26 + lVar31),0x30);
    auVar73 = ___xmm_00000034000000240000001400000004 & auVar75;
    auVar79 = insertps(ZEXT416(*(uint *)((longlong)puVar26 + (ulonglong)auVar73._0_4_)),
                       *(undefined4 *)((longlong)puVar26 + (ulonglong)auVar73._4_4_),0x10);
    auVar79 = insertps(auVar79,*(undefined4 *)((longlong)puVar26 + (ulonglong)auVar73._8_4_),0x20);
    _local_128 = insertps(auVar79,*(undefined4 *)((longlong)puVar26 + (ulonglong)auVar73._12_4_),
                          0x30);
    auVar73 = ___xmm_00000038000000280000001800000008 & auVar75;
    auVar79 = insertps(ZEXT416(*(uint *)((longlong)puVar26 + (ulonglong)auVar73._0_4_)),
                       *(undefined4 *)((longlong)puVar26 + (ulonglong)auVar73._4_4_),0x10);
    auVar79 = insertps(auVar79,*(undefined4 *)((longlong)puVar26 + (ulonglong)auVar73._8_4_),0x20);
    _local_138 = insertps(auVar79,*(undefined4 *)((longlong)puVar26 + (ulonglong)auVar73._12_4_),
                          0x30);
    auVar73 = ___xmm_0000003c0000002c0000001c0000000c & auVar75;
    auVar79 = insertps(ZEXT416(*(uint *)((longlong)puVar26 + (ulonglong)auVar73._0_4_)),
                       *(undefined4 *)((longlong)puVar26 + (ulonglong)auVar73._4_4_),0x10);
    auVar79 = insertps(auVar79,*(undefined4 *)((longlong)puVar26 + (ulonglong)auVar73._8_4_),0x20);
    auVar57 = insertps(auVar79,*(undefined4 *)((longlong)puVar26 + (ulonglong)auVar73._12_4_),0x30);
    auVar49._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar75._0_4_;
    auVar49._4_4_ = _UNK_150b50da4 & auVar75._4_4_;
    auVar49._8_4_ = _UNK_150b50da8 & auVar75._8_4_;
    auVar49._12_4_ = _UNK_150b50dac & auVar75._12_4_;
    lVar28 = extractps(auVar49,1);
    lVar46 = param_7 + uVar32 * 0xc;
    lVar31 = extractps(auVar49,2);
    lVar22 = extractps(auVar49,3);
    auVar87._4_4_ = *(undefined4 *)(lVar28 + lVar46);
    auVar87._0_4_ = *(undefined4 *)(param_7 + uVar32 * 0xc);
    auVar87._12_4_ = *(undefined4 *)(lVar22 + lVar46);
    auVar87._8_4_ = *(undefined4 *)(lVar31 + lVar46);
    auVar73 = ___xmm_000000280000001c0000001000000004 & auVar75;
    auVar83._4_4_ = *(undefined4 *)((ulonglong)auVar73._4_4_ + lVar46);
    auVar83._0_4_ = *(undefined4 *)((ulonglong)auVar73._0_4_ + lVar46);
    auVar83._12_4_ = *(undefined4 *)((ulonglong)auVar73._12_4_ + lVar46);
    auVar83._8_4_ = *(undefined4 *)((ulonglong)auVar73._8_4_ + lVar46);
    auVar73 = ___xmm_0000002c000000200000001400000008 & auVar75;
    auVar80._4_4_ = *(undefined4 *)((ulonglong)auVar73._4_4_ + lVar46);
    auVar80._0_4_ = *(undefined4 *)((ulonglong)auVar73._0_4_ + lVar46);
    auVar80._12_4_ = *(undefined4 *)((ulonglong)auVar73._12_4_ + lVar46);
    auVar80._8_4_ = *(undefined4 *)((ulonglong)auVar73._8_4_ + lVar46);
  }
  auVar71._4_4_ = auVar87._4_4_ * 3;
  auVar71._0_4_ = auVar87._0_4_ * 3;
  auVar71._8_4_ = auVar87._8_4_ * 3;
  auVar71._12_4_ = auVar87._12_4_ * 3;
  auVar71 = auVar71 & auVar75;
  lVar28 = (longlong)auVar71._0_4_;
  lVar46 = param_3 + lVar28 * 4;
  lVar23 = (longlong)auVar71._4_4_;
  lVar22 = param_3 + lVar23 * 4;
  lVar39 = (longlong)auVar71._8_4_;
  lVar31 = param_3 + lVar39 * 4;
  auVar73 = ___xmm_00000004000000040000000400000004 & auVar75;
  uVar33 = (ulonglong)auVar73._4_4_;
  uVar41 = (ulonglong)auVar73._8_4_;
  uVar36 = (ulonglong)auVar73._0_4_;
  auVar79 = insertps(ZEXT416(*(uint *)(uVar36 + lVar46)),*(undefined4 *)(uVar33 + lVar22),0x10);
  auVar79 = insertps(auVar79,*(undefined4 *)(uVar41 + lVar31),0x20);
  auVar61 = ___xmm_00000008000000080000000800000008 & auVar75;
  uVar27 = (ulonglong)auVar61._0_4_;
  uVar19 = (ulonglong)auVar61._4_4_;
  auVar47 = insertps(ZEXT416(*(uint *)(uVar27 + lVar46)),*(undefined4 *)(uVar19 + lVar22),0x10);
  uVar20 = (ulonglong)auVar61._8_4_;
  auVar47 = insertps(auVar47,*(undefined4 *)(uVar20 + lVar31),0x20);
  lVar31 = (longlong)auVar71._12_4_;
  lVar46 = param_3 + lVar31 * 4;
  uVar24 = (ulonglong)auVar73._12_4_;
  auVar86 = insertps(auVar79,*(undefined4 *)(uVar24 + lVar46),0x30);
  uVar37 = (ulonglong)auVar61._12_4_;
  auVar67 = insertps(auVar47,*(undefined4 *)(uVar37 + lVar46),0x30);
  auVar53._4_4_ = auVar83._4_4_ * 3;
  auVar53._0_4_ = auVar83._0_4_ * 3;
  auVar53._8_4_ = auVar83._8_4_ * 3;
  auVar53._12_4_ = auVar83._12_4_ * 3;
  auVar53 = auVar53 & auVar75;
  lVar29 = (longlong)auVar53._0_4_;
  lVar46 = param_3 + lVar29 * 4;
  lVar35 = (longlong)auVar53._4_4_;
  lVar22 = param_3 + lVar35 * 4;
  auVar73 = insertps(ZEXT416(*(uint *)(uVar36 + lVar46)),*(undefined4 *)(uVar33 + lVar22),0x10);
  auVar79 = insertps(ZEXT416(*(uint *)(uVar27 + lVar46)),*(undefined4 *)(uVar19 + lVar22),0x10);
  lVar38 = (longlong)auVar53._8_4_;
  lVar46 = param_3 + lVar38 * 4;
  auVar73 = insertps(auVar73,*(undefined4 *)(uVar41 + lVar46),0x20);
  auVar79 = insertps(auVar79,*(undefined4 *)(uVar20 + lVar46),0x20);
  lVar40 = (longlong)auVar53._12_4_;
  lVar46 = param_3 + lVar40 * 4;
  auVar74 = insertps(auVar73,*(undefined4 *)(uVar24 + lVar46),0x30);
  auVar76 = insertps(auVar79,*(undefined4 *)(uVar37 + lVar46),0x30);
  auVar51._4_4_ = auVar80._4_4_ * 3;
  auVar51._0_4_ = auVar80._0_4_ * 3;
  auVar51._8_4_ = auVar80._8_4_ * 3;
  auVar51._12_4_ = auVar80._12_4_ * 3;
  auVar51 = auVar51 & auVar75;
  lVar43 = (longlong)auVar51._0_4_;
  lVar46 = param_3 + lVar43 * 4;
  lVar42 = (longlong)auVar51._4_4_;
  lVar22 = param_3 + lVar42 * 4;
  auVar79 = insertps(ZEXT416(*(uint *)(uVar36 + lVar46)),*(undefined4 *)(uVar33 + lVar22),0x10);
  auVar73 = insertps(ZEXT416(*(uint *)(uVar27 + lVar46)),*(undefined4 *)(uVar19 + lVar22),0x10);
  lVar34 = (longlong)auVar51._8_4_;
  lVar46 = param_3 + lVar34 * 4;
  auVar47 = insertps(auVar79,*(undefined4 *)(uVar41 + lVar46),0x20);
  auVar73 = insertps(auVar73,*(undefined4 *)(uVar20 + lVar46),0x20);
  auVar79 = insertps(ZEXT416(*(uint *)(param_3 + lVar28 * 4)),*(undefined4 *)(param_3 + lVar23 * 4),
                     0x10);
  auVar79 = insertps(auVar79,*(undefined4 *)(param_3 + lVar39 * 4),0x20);
  auVar78 = insertps(auVar79,*(undefined4 *)(param_3 + lVar31 * 4),0x30);
  auVar79 = insertps(ZEXT416(*(uint *)(param_3 + lVar29 * 4)),*(undefined4 *)(param_3 + lVar35 * 4),
                     0x10);
  auVar79 = insertps(auVar79,*(undefined4 *)(param_3 + lVar38 * 4),0x20);
  auVar79 = insertps(auVar79,*(undefined4 *)(param_3 + lVar40 * 4),0x30);
  lVar44 = (longlong)auVar51._12_4_;
  auVar61 = insertps(ZEXT416(*(uint *)(param_3 + lVar43 * 4)),*(undefined4 *)(param_3 + lVar42 * 4),
                     0x10);
  auVar61 = insertps(auVar61,*(undefined4 *)(param_3 + lVar34 * 4),0x20);
  auVar80 = insertps(auVar61,*(undefined4 *)(param_3 + lVar44 * 4),0x30);
  param_3 = param_3 + lVar44 * 4;
  auVar70 = insertps(auVar47,*(undefined4 *)(uVar24 + param_3),0x30);
  auVar84 = insertps(auVar73,*(undefined4 *)(uVar37 + param_3),0x30);
  lVar46 = param_4 + lVar28 * 4;
  lVar22 = param_4 + lVar23 * 4;
  auVar47 = insertps(ZEXT416(*(uint *)(uVar36 + lVar46)),*(undefined4 *)(uVar33 + lVar22),0x10);
  auVar73 = insertps(ZEXT416(*(uint *)(uVar27 + lVar46)),*(undefined4 *)(uVar19 + lVar22),0x10);
  lVar46 = param_4 + lVar39 * 4;
  auVar47 = insertps(auVar47,*(undefined4 *)(uVar41 + lVar46),0x20);
  auVar73 = insertps(auVar73,*(undefined4 *)(uVar20 + lVar46),0x20);
  lVar46 = param_4 + lVar31 * 4;
  auVar88 = insertps(auVar47,*(undefined4 *)(uVar24 + lVar46),0x30);
  auVar87 = insertps(auVar73,*(undefined4 *)(uVar37 + lVar46),0x30);
  lVar46 = param_4 + lVar29 * 4;
  lVar22 = param_4 + lVar35 * 4;
  auVar73 = insertps(ZEXT416(*(uint *)(uVar36 + lVar46)),*(undefined4 *)(uVar33 + lVar22),0x10);
  auVar47 = insertps(ZEXT416(*(uint *)(uVar27 + lVar46)),*(undefined4 *)(uVar19 + lVar22),0x10);
  lVar46 = param_4 + lVar38 * 4;
  auVar73 = insertps(auVar73,*(undefined4 *)(uVar41 + lVar46),0x20);
  auVar47 = insertps(auVar47,*(undefined4 *)(uVar20 + lVar46),0x20);
  lVar46 = param_4 + lVar40 * 4;
  auVar83 = insertps(auVar73,*(undefined4 *)(uVar24 + lVar46),0x30);
  auVar85 = insertps(auVar47,*(undefined4 *)(uVar37 + lVar46),0x30);
  auVar73 = insertps(ZEXT416(*(uint *)(param_4 + lVar28 * 4)),*(undefined4 *)(param_4 + lVar23 * 4),
                     0x10);
  auVar73 = insertps(auVar73,*(undefined4 *)(param_4 + lVar39 * 4),0x20);
  auVar47 = insertps(auVar73,*(undefined4 *)(param_4 + lVar31 * 4),0x30);
  auVar73 = insertps(ZEXT416(*(uint *)(param_4 + lVar29 * 4)),*(undefined4 *)(param_4 + lVar35 * 4),
                     0x10);
  fVar56 = auVar57._0_4_;
  fVar58 = auVar57._4_4_;
  fVar59 = auVar57._8_4_;
  fVar60 = auVar57._12_4_;
  auVar73 = insertps(auVar73,*(undefined4 *)(param_4 + lVar38 * 4),0x20);
  auVar57 = insertps(auVar73,*(undefined4 *)(param_4 + lVar40 * 4),0x30);
  lVar46 = param_4 + lVar43 * 4;
  lVar22 = param_4 + lVar42 * 4;
  auVar61 = insertps(ZEXT416(*(uint *)(uVar36 + lVar46)),*(undefined4 *)(uVar33 + lVar22),0x10);
  auVar73 = insertps(ZEXT416(*(uint *)(uVar27 + lVar46)),*(undefined4 *)(uVar19 + lVar22),0x10);
  lVar46 = param_4 + lVar34 * 4;
  auVar90 = insertps(auVar61,*(undefined4 *)(uVar41 + lVar46),0x20);
  auVar61 = insertps(auVar73,*(undefined4 *)(uVar20 + lVar46),0x20);
  auVar73 = insertps(ZEXT416(*(uint *)(param_4 + lVar43 * 4)),*(undefined4 *)(param_4 + lVar42 * 4),
                     0x10);
  auVar73 = insertps(auVar73,*(undefined4 *)(param_4 + lVar34 * 4),0x20);
  auVar82 = insertps(auVar73,*(undefined4 *)(param_4 + lVar44 * 4),0x30);
  param_4 = param_4 + lVar44 * 4;
  auVar69 = insertps(auVar90,*(undefined4 *)(uVar24 + param_4),0x30);
  auVar90 = insertps(auVar61,*(undefined4 *)(uVar37 + param_4),0x30);
  lVar46 = param_5 + lVar28 * 4;
  auVar73 = insertps(ZEXT416(*(uint *)(param_5 + lVar28 * 4)),*(undefined4 *)(param_5 + lVar23 * 4),
                     0x10);
  lVar22 = param_5 + lVar23 * 4;
  auVar75 = insertps(ZEXT416(*(uint *)(uVar36 + lVar46)),*(undefined4 *)(uVar33 + lVar22),0x10);
  auVar61 = insertps(ZEXT416(*(uint *)(uVar27 + lVar46)),*(undefined4 *)(uVar19 + lVar22),0x10);
  auVar73 = insertps(auVar73,*(undefined4 *)(param_5 + lVar39 * 4),0x20);
  lVar46 = param_5 + lVar39 * 4;
  auVar75 = insertps(auVar75,*(undefined4 *)(uVar41 + lVar46),0x20);
  auVar61 = insertps(auVar61,*(undefined4 *)(uVar20 + lVar46),0x20);
  auVar73 = insertps(auVar73,*(undefined4 *)(param_5 + lVar31 * 4),0x30);
  lVar46 = param_5 + lVar31 * 4;
  auVar75 = insertps(auVar75,*(undefined4 *)(uVar24 + lVar46),0x30);
  auVar61 = insertps(auVar61,*(undefined4 *)(uVar37 + lVar46),0x30);
  lVar46 = param_5 + lVar29 * 4;
  auVar91 = insertps(ZEXT416(*(uint *)(param_5 + lVar29 * 4)),*(undefined4 *)(param_5 + lVar35 * 4),
                     0x10);
  lVar22 = param_5 + lVar35 * 4;
  auVar81 = insertps(ZEXT416(*(uint *)(uVar36 + lVar46)),*(undefined4 *)(uVar33 + lVar22),0x10);
  auVar77 = insertps(ZEXT416(*(uint *)(uVar27 + lVar46)),*(undefined4 *)(uVar19 + lVar22),0x10);
  local_108 = auVar70._0_4_;
  fStack_104 = auVar70._4_4_;
  fStack_100 = auVar70._8_4_;
  fStack_fc = auVar70._12_4_;
  auVar91 = insertps(auVar91,*(undefined4 *)(param_5 + lVar38 * 4),0x20);
  lVar46 = param_5 + lVar38 * 4;
  auVar81 = insertps(auVar81,*(undefined4 *)(uVar41 + lVar46),0x20);
  auVar70 = insertps(auVar77,*(undefined4 *)(uVar20 + lVar46),0x20);
  auVar91 = insertps(auVar91,*(undefined4 *)(param_5 + lVar40 * 4),0x30);
  lVar46 = param_5 + lVar40 * 4;
  auVar77 = insertps(auVar81,*(undefined4 *)(uVar24 + lVar46),0x30);
  auVar70 = insertps(auVar70,*(undefined4 *)(uVar37 + lVar46),0x30);
  local_f8 = auVar84._0_4_;
  fStack_f4 = auVar84._4_4_;
  fStack_f0 = auVar84._8_4_;
  fStack_ec = auVar84._12_4_;
  lVar46 = param_5 + lVar43 * 4;
  lVar22 = param_5 + lVar42 * 4;
  auVar84 = insertps(ZEXT416(*(uint *)(uVar36 + lVar46)),*(undefined4 *)(uVar33 + lVar22),0x10);
  auVar54._0_4_ =
       (auVar82._0_4_ * fVar56 + auVar80._0_4_) * (float)local_138._0_4_ +
       (auVar57._0_4_ * fVar56 + auVar79._0_4_) * (float)local_128._0_4_ +
       (auVar47._0_4_ * fVar56 + auVar78._0_4_) * (float)local_118._0_4_;
  auVar54._4_4_ =
       (auVar82._4_4_ * fVar58 + auVar80._4_4_) * (float)local_138._4_4_ +
       (auVar57._4_4_ * fVar58 + auVar79._4_4_) * (float)local_128._4_4_ +
       (auVar47._4_4_ * fVar58 + auVar78._4_4_) * (float)local_118._4_4_;
  auVar54._8_4_ =
       (auVar82._8_4_ * fVar59 + auVar80._8_4_) * (float)uStack_130 +
       (auVar57._8_4_ * fVar59 + auVar79._8_4_) * (float)uStack_120 +
       (auVar47._8_4_ * fVar59 + auVar78._8_4_) * (float)uStack_110;
  auVar54._12_4_ =
       (auVar82._12_4_ * fVar60 + auVar80._12_4_) * uStack_130._4_4_ +
       (auVar57._12_4_ * fVar60 + auVar79._12_4_) * uStack_120._4_4_ +
       (auVar47._12_4_ * fVar60 + auVar78._12_4_) * uStack_110._4_4_;
  auVar68._0_4_ =
       (auVar69._0_4_ * fVar56 + local_108) * (float)local_138._0_4_ +
       (auVar83._0_4_ * fVar56 + auVar74._0_4_) * (float)local_128._0_4_ +
       (auVar88._0_4_ * fVar56 + auVar86._0_4_) * (float)local_118._0_4_;
  auVar68._4_4_ =
       (auVar69._4_4_ * fVar58 + fStack_104) * (float)local_138._4_4_ +
       (auVar83._4_4_ * fVar58 + auVar74._4_4_) * (float)local_128._4_4_ +
       (auVar88._4_4_ * fVar58 + auVar86._4_4_) * (float)local_118._4_4_;
  auVar68._8_4_ =
       (auVar69._8_4_ * fVar59 + fStack_100) * (float)uStack_130 +
       (auVar83._8_4_ * fVar59 + auVar74._8_4_) * (float)uStack_120 +
       (auVar88._8_4_ * fVar59 + auVar86._8_4_) * (float)uStack_110;
  auVar68._12_4_ =
       (auVar69._12_4_ * fVar60 + fStack_fc) * uStack_130._4_4_ +
       (auVar83._12_4_ * fVar60 + auVar74._12_4_) * uStack_120._4_4_ +
       (auVar88._12_4_ * fVar60 + auVar86._12_4_) * uStack_110._4_4_;
  auVar66._0_4_ =
       (auVar90._0_4_ * fVar56 + local_f8) * (float)local_138._0_4_ +
       (auVar85._0_4_ * fVar56 + auVar76._0_4_) * (float)local_128._0_4_ +
       (auVar87._0_4_ * fVar56 + auVar67._0_4_) * (float)local_118._0_4_;
  auVar66._4_4_ =
       (auVar90._4_4_ * fVar58 + fStack_f4) * (float)local_138._4_4_ +
       (auVar85._4_4_ * fVar58 + auVar76._4_4_) * (float)local_128._4_4_ +
       (auVar87._4_4_ * fVar58 + auVar67._4_4_) * (float)local_118._4_4_;
  auVar66._8_4_ =
       (auVar90._8_4_ * fVar59 + fStack_f0) * (float)uStack_130 +
       (auVar85._8_4_ * fVar59 + auVar76._8_4_) * (float)uStack_120 +
       (auVar87._8_4_ * fVar59 + auVar67._8_4_) * (float)uStack_110;
  auVar66._12_4_ =
       (auVar90._12_4_ * fVar60 + fStack_ec) * uStack_130._4_4_ +
       (auVar85._12_4_ * fVar60 + auVar76._12_4_) * uStack_120._4_4_ +
       (auVar87._12_4_ * fVar60 + auVar67._12_4_) * uStack_110._4_4_;
  auVar79 = insertps(ZEXT416(*(uint *)(uVar27 + lVar46)),*(undefined4 *)(uVar19 + lVar22),0x10);
  lVar46 = param_5 + lVar34 * 4;
  auVar78 = insertps(auVar84,*(undefined4 *)(uVar41 + lVar46),0x20);
  auVar79 = insertps(auVar79,*(undefined4 *)(uVar20 + lVar46),0x20);
  auVar47 = insertps(ZEXT416(*(uint *)(param_5 + lVar43 * 4)),*(undefined4 *)(param_5 + lVar42 * 4),
                     0x10);
  auVar47 = insertps(auVar47,*(undefined4 *)(param_5 + lVar34 * 4),0x20);
  auVar47 = insertps(auVar47,*(undefined4 *)(param_5 + lVar44 * 4),0x30);
  param_5 = param_5 + lVar44 * 4;
  auVar78 = insertps(auVar78,*(undefined4 *)(uVar24 + param_5),0x30);
  auVar52._0_4_ =
       auVar47._0_4_ * (float)local_138._0_4_ +
       auVar91._0_4_ * (float)local_128._0_4_ + auVar73._0_4_ * (float)local_118._0_4_;
  auVar52._4_4_ =
       auVar47._4_4_ * (float)local_138._4_4_ +
       auVar91._4_4_ * (float)local_128._4_4_ + auVar73._4_4_ * (float)local_118._4_4_;
  auVar52._8_4_ =
       auVar47._8_4_ * (float)uStack_130 +
       auVar91._8_4_ * (float)uStack_120 + auVar73._8_4_ * (float)uStack_110;
  auVar52._12_4_ =
       auVar47._12_4_ * uStack_130._4_4_ +
       auVar91._12_4_ * uStack_120._4_4_ + auVar73._12_4_ * uStack_110._4_4_;
  auVar73 = insertps(auVar79,*(undefined4 *)(uVar37 + param_5),0x30);
  auVar89._0_4_ =
       auVar78._0_4_ * (float)local_138._0_4_ +
       auVar77._0_4_ * (float)local_128._0_4_ + auVar75._0_4_ * (float)local_118._0_4_;
  auVar89._4_4_ =
       auVar78._4_4_ * (float)local_138._4_4_ +
       auVar77._4_4_ * (float)local_128._4_4_ + auVar75._4_4_ * (float)local_118._4_4_;
  auVar89._8_4_ =
       auVar78._8_4_ * (float)uStack_130 +
       auVar77._8_4_ * (float)uStack_120 + auVar75._8_4_ * (float)uStack_110;
  auVar89._12_4_ =
       auVar78._12_4_ * uStack_130._4_4_ +
       auVar77._12_4_ * uStack_120._4_4_ + auVar75._12_4_ * uStack_110._4_4_;
  auVar50._0_4_ =
       auVar73._0_4_ * (float)local_138._0_4_ +
       auVar70._0_4_ * (float)local_128._0_4_ + auVar61._0_4_ * (float)local_118._0_4_;
  auVar50._4_4_ =
       auVar73._4_4_ * (float)local_138._4_4_ +
       auVar70._4_4_ * (float)local_128._4_4_ + auVar61._4_4_ * (float)local_118._4_4_;
  auVar50._8_4_ =
       auVar73._8_4_ * (float)uStack_130 +
       auVar70._8_4_ * (float)uStack_120 + auVar61._8_4_ * (float)uStack_110;
  auVar50._12_4_ =
       auVar73._12_4_ * uStack_130._4_4_ +
       auVar70._12_4_ * uStack_120._4_4_ + auVar61._12_4_ * uStack_110._4_4_;
  pfVar45 = (float *)(param_1 + uVar32 * 0xc);
  if ((~bVar21 & 0xf) == 0) {
    auVar62._4_4_ = auVar54._4_4_;
    auVar62._0_4_ = auVar54._0_4_;
    auVar62._8_4_ = auVar54._8_4_;
    auVar62._12_4_ = auVar54._12_4_;
    auVar73 = insertps(auVar62,auVar68,0x30);
    auVar72._4_4_ = auVar68._8_4_;
    auVar72._0_4_ = auVar68._4_4_;
    auVar72._8_4_ = auVar66._0_4_;
    auVar72._12_4_ = auVar66._4_4_;
    auVar73 = insertps(auVar73,auVar66,0x20);
    *pfVar45 = auVar73._0_4_;
    pfVar45[1] = auVar73._12_4_;
    pfVar45[2] = auVar73._8_4_;
    pfVar45[3] = auVar73._4_4_;
    auVar73 = blendps(auVar72,auVar54,4);
    pfVar45[4] = auVar73._0_4_;
    pfVar45[5] = auVar73._12_4_;
    pfVar45[6] = auVar73._8_4_;
    pfVar45[7] = auVar73._4_4_;
    pfVar45[8] = auVar66._8_4_;
    pfVar45[9] = auVar54._12_4_;
    pfVar45[10] = auVar68._12_4_;
    pfVar45[0xb] = auVar66._12_4_;
    auVar55._4_4_ = auVar52._4_4_;
    auVar55._0_4_ = auVar52._0_4_;
    auVar55._8_4_ = auVar52._8_4_;
    auVar55._12_4_ = auVar52._12_4_;
    auVar73 = insertps(auVar55,auVar89,0x30);
    auVar63._4_4_ = auVar89._8_4_;
    auVar63._0_4_ = auVar89._4_4_;
    auVar63._8_4_ = auVar50._0_4_;
    auVar63._12_4_ = auVar50._4_4_;
    auVar73 = insertps(auVar73,auVar50,0x20);
    puVar3 = (undefined4 *)(param_2 + uVar32 * 0xc);
    *puVar3 = auVar73._0_4_;
    puVar3[1] = auVar73._12_4_;
    puVar3[2] = auVar73._8_4_;
    puVar3[3] = auVar73._4_4_;
    auVar73 = blendps(auVar63,auVar52,4);
    puVar3 = (undefined4 *)(param_2 + 0x10 + uVar32 * 0xc);
    *puVar3 = auVar73._0_4_;
    puVar3[1] = auVar73._12_4_;
    puVar3[2] = auVar73._8_4_;
    puVar3[3] = auVar73._4_4_;
    pfVar45 = (float *)(param_2 + 0x20 + uVar32 * 0xc);
    *pfVar45 = auVar50._8_4_;
    pfVar45[1] = auVar52._12_4_;
    pfVar45[2] = auVar89._12_4_;
    pfVar45[3] = auVar50._12_4_;
  }
  else {
    if ((bVar21 & 1) != 0) {
      *pfVar45 = auVar54._0_4_;
    }
    if ((bVar21 & 2) != 0) {
      uVar4 = extractps(auVar54,1);
      *(undefined8 *)(pfVar45 + 3) = uVar4;
    }
    if ((bVar21 & 4) != 0) {
      uVar4 = extractps(auVar54,2);
      *(undefined8 *)(pfVar45 + 6) = uVar4;
    }
    if ((char)bVar21 < '\0') {
      uVar4 = extractps(auVar54,3);
      *(undefined8 *)(pfVar45 + 9) = uVar4;
    }
    if ((bVar21 & 1) != 0) {
      pfVar45[1] = auVar68._0_4_;
    }
    if ((bVar21 & 2) != 0) {
      uVar4 = extractps(auVar68,1);
      *(undefined8 *)(pfVar45 + 4) = uVar4;
    }
    if ((bVar21 & 4) != 0) {
      uVar4 = extractps(auVar68,2);
      *(undefined8 *)(pfVar45 + 7) = uVar4;
    }
    if ((char)bVar21 < '\0') {
      uVar4 = extractps(auVar68,3);
      *(undefined8 *)(pfVar45 + 10) = uVar4;
    }
    if ((bVar21 & 1) != 0) {
      pfVar45[2] = auVar66._0_4_;
    }
    if ((bVar21 & 2) != 0) {
      uVar4 = extractps(auVar66,1);
      *(undefined8 *)(pfVar45 + 5) = uVar4;
    }
    if ((bVar21 & 4) != 0) {
      uVar4 = extractps(auVar66,2);
      *(undefined8 *)(pfVar45 + 8) = uVar4;
    }
    if ((char)bVar21 < '\0') {
      uVar4 = extractps(auVar66,3);
      *(undefined8 *)(pfVar45 + 0xb) = uVar4;
    }
    pfVar45 = (float *)(param_2 + uVar32 * 0xc);
    if ((bVar21 & 1) != 0) {
      *pfVar45 = auVar52._0_4_;
    }
    if ((bVar21 & 2) != 0) {
      uVar4 = extractps(auVar52,1);
      *(undefined8 *)(pfVar45 + 3) = uVar4;
    }
    if ((bVar21 & 4) != 0) {
      uVar4 = extractps(auVar52,2);
      *(undefined8 *)(pfVar45 + 6) = uVar4;
    }
    if ((char)bVar21 < '\0') {
      uVar4 = extractps(auVar52,3);
      *(undefined8 *)(pfVar45 + 9) = uVar4;
    }
    if ((bVar21 & 1) != 0) {
      pfVar45[1] = auVar89._0_4_;
    }
    if ((bVar21 & 2) != 0) {
      uVar4 = extractps(auVar89,1);
      *(undefined8 *)(pfVar45 + 4) = uVar4;
    }
    if ((bVar21 & 4) != 0) {
      uVar4 = extractps(auVar89,2);
      *(undefined8 *)(pfVar45 + 7) = uVar4;
    }
    if ((char)bVar21 < '\0') {
      uVar4 = extractps(auVar89,3);
      *(undefined8 *)(pfVar45 + 10) = uVar4;
    }
    if ((bVar21 & 1) != 0) {
      pfVar45[2] = auVar50._0_4_;
    }
    if ((bVar21 & 2) != 0) {
      uVar4 = extractps(auVar50,1);
      *(undefined8 *)(pfVar45 + 5) = uVar4;
    }
    if ((bVar21 & 4) != 0) {
      uVar4 = extractps(auVar50,2);
      *(undefined8 *)(pfVar45 + 8) = uVar4;
    }
    if ((char)bVar21 < '\0') {
      uVar4 = extractps(auVar50,3);
      *(undefined8 *)(pfVar45 + 0xb) = uVar4;
    }
  }
  return;
}

// ApplyMultiResConstraints_sse4 @ 1405b6f90

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyMultiResConstraints_sse4
               (undefined1 (*param_1) [16],longlong param_2,longlong param_3,longlong param_4,
               float param_5,float param_6,float param_7,uint param_8)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined4 *puVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulonglong uVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  int iVar21;
  longlong lVar22;
  byte bVar23;
  uint uVar24;
  longlong lVar26;
  longlong lVar27;
  uint uVar28;
  uint uVar29;
  undefined1 (*pauVar30) [16];
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  ulonglong uVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  longlong lVar39;
  bool bVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
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
  undefined4 uVar61;
  float fVar67;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
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
  float fVar83;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined4 uVar84;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  float fVar91;
  float fVar95;
  float fVar96;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined4 uVar97;
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
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  float fVar117;
  float fVar126;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  float fVar137;
  float fVar138;
  float fVar139;
  float fVar140;
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 (*pauVar25) [16];
  
  uVar28 = param_8 + 3;
  if (-1 < (int)param_8) {
    uVar28 = param_8;
  }
  if ((int)(uVar28 & 0xfffffffc) < 1) {
    uVar29 = 0;
  }
  else {
    uVar29 = 0;
    lVar31 = 0;
    pauVar25 = param_1;
    pauVar30 = param_1;
    do {
      auVar55 = *pauVar30;
      auVar129._0_8_ = auVar55._0_8_;
      pauVar1 = pauVar30 + 1;
      fVar139 = *(float *)*pauVar1;
      fVar138 = *(float *)(pauVar30[1] + 4);
      fVar67 = *(float *)(pauVar30[1] + 8);
      auVar74 = pauVar30[2];
      auVar121._0_8_ = auVar74._0_8_;
      pauVar2 = pauVar30 + 3;
      fVar140 = *(float *)*pauVar2;
      fVar83 = *(float *)(pauVar30[3] + 4);
      fVar19 = *(float *)(pauVar30[3] + 8);
      fVar20 = *(float *)(pauVar30[3] + 0xc);
      fVar137 = auVar55._4_4_;
      fVar126 = auVar55._8_4_;
      auVar141._4_4_ = fVar67;
      auVar141._0_4_ = fVar126;
      fVar95 = auVar74._4_4_;
      fVar96 = auVar74._8_4_;
      auVar141._12_4_ = fVar19;
      auVar141._8_4_ = fVar96;
      uVar41 = -(uint)(0.0 < auVar55._12_4_);
      uVar42 = -(uint)(0.0 < *(float *)(pauVar30[1] + 0xc));
      uVar43 = -(uint)(0.0 < auVar74._12_4_);
      uVar44 = -(uint)(0.0 < fVar20);
      auVar62._4_4_ = uVar42;
      auVar62._0_4_ = uVar41;
      auVar62._8_4_ = uVar43;
      auVar62._12_4_ = uVar44;
      uVar24 = movmskps((int)pauVar25,auVar62);
      pauVar25 = (undefined1 (*) [16])(ulonglong)uVar24;
      if (uVar24 != 0) {
        auVar129._8_4_ = fVar137;
        auVar129._12_4_ = fVar138;
        fVar117 = auVar55._0_4_;
        auVar121._8_4_ = fVar95;
        auVar121._12_4_ = fVar83;
        fVar91 = auVar74._0_4_;
        auVar80._12_4_ = fVar140;
        auVar80._8_4_ = fVar91;
        auVar80._4_4_ = fVar139;
        auVar80._0_4_ = fVar117;
        bVar23 = (char)((char)uVar24 << 4) >> 4;
        if ((~bVar23 & 0xf) == 0) {
          auVar62 = *(undefined1 (*) [16])(param_2 + lVar31);
          auVar71 = *(undefined1 (*) [16])(param_2 + 0x10 + lVar31);
          puVar3 = (undefined4 *)(param_2 + 0x20 + lVar31);
          auVar63._0_4_ = auVar62._0_4_;
          auVar52 = insertps(auVar71,auVar62,0x8c);
          auVar63._4_4_ = auVar62._12_4_;
          auVar63._8_4_ = auVar71._8_4_;
          auVar63._12_4_ = puVar3[1];
          auVar85._4_4_ = auVar71._0_4_;
          auVar85._0_4_ = auVar62._4_4_;
          auVar85._8_4_ = auVar71._12_4_;
          auVar85._12_4_ = puVar3[2];
          auVar52._8_4_ = *puVar3;
          auVar52._12_4_ = puVar3[3];
          auVar62 = *(undefined1 (*) [16])(param_3 + lVar31);
          auVar71 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar31);
          puVar3 = (undefined4 *)(param_3 + 0x20 + lVar31);
          auVar103._0_4_ = auVar62._0_4_;
          auVar68 = insertps(auVar71,auVar62,0x8c);
          auVar103._4_4_ = auVar62._12_4_;
          auVar103._8_4_ = auVar71._8_4_;
          auVar103._12_4_ = puVar3[1];
          auVar98._4_4_ = auVar71._0_4_;
          auVar98._0_4_ = auVar62._4_4_;
          auVar98._8_4_ = auVar71._12_4_;
          auVar98._12_4_ = puVar3[2];
          auVar112._0_8_ = auVar68._0_8_;
          auVar112._8_4_ = *puVar3;
          auVar112._12_4_ = puVar3[3];
          auVar62 = *(undefined1 (*) [16])(param_4 + lVar31);
          auVar71 = *(undefined1 (*) [16])(param_4 + 0x10 + lVar31);
          puVar3 = (undefined4 *)(param_4 + 0x20 + lVar31);
          auVar68._0_4_ = auVar62._0_4_;
          auVar72 = insertps(auVar71,auVar62,0x8c);
          auVar68._4_4_ = auVar62._12_4_;
          auVar68._8_4_ = auVar71._8_4_;
          auVar68._12_4_ = puVar3[1];
          auVar77._4_4_ = auVar71._0_4_;
          auVar77._0_4_ = auVar62._4_4_;
          auVar77._8_4_ = auVar71._12_4_;
          auVar77._12_4_ = puVar3[2];
          auVar71._0_8_ = auVar72._0_8_;
          auVar71._8_4_ = *puVar3;
          auVar71._12_4_ = puVar3[3];
        }
        else {
          auVar50._0_4_ = uVar41 & ___xmm_00000024000000180000000c00000000;
          auVar50._4_4_ = uVar42 & _UNK_150b50da4;
          auVar50._8_4_ = uVar43 & _UNK_150b50da8;
          auVar50._12_4_ = uVar44 & _UNK_150b50dac;
          lVar38 = extractps(auVar50,1);
          lVar39 = extractps(auVar50,2);
          lVar36 = extractps(auVar50,3);
          lVar27 = param_2 + lVar31;
          auVar62 = insertps(ZEXT416(*(uint *)(param_2 + lVar31)),*(undefined4 *)(lVar38 + lVar27),
                             0x10);
          auVar62 = insertps(auVar62,*(undefined4 *)(lVar39 + lVar27),0x20);
          auVar63 = insertps(auVar62,*(undefined4 *)(lVar36 + lVar27),0x30);
          auVar51._0_4_ = uVar41 & ___xmm_000000280000001c0000001000000004;
          auVar51._4_4_ = uVar42 & _UNK_150b50db4;
          auVar51._8_4_ = uVar43 & _UNK_150b50db8;
          auVar51._12_4_ = uVar44 & _UNK_150b50dbc;
          lVar37 = extractps(auVar51,1);
          lVar22 = extractps(auVar51,2);
          lVar34 = extractps(auVar51,3);
          uVar35 = (ulonglong)auVar51._0_4_;
          auVar62 = insertps(ZEXT416(*(uint *)(uVar35 + lVar27)),*(undefined4 *)(lVar37 + lVar27),
                             0x10);
          auVar62 = insertps(auVar62,*(undefined4 *)(lVar22 + lVar27),0x20);
          auVar85 = insertps(auVar62,*(undefined4 *)(lVar34 + lVar27),0x30);
          auVar72._0_4_ = uVar41 & ___xmm_0000002c000000200000001400000008;
          auVar72._4_4_ = uVar42 & _UNK_150b50dc4;
          auVar72._8_4_ = uVar43 & _UNK_150b50dc8;
          auVar72._12_4_ = uVar44 & _UNK_150b50dcc;
          lVar26 = extractps(auVar72,1);
          lVar33 = extractps(auVar72,2);
          lVar32 = extractps(auVar72,3);
          uVar17 = (ulonglong)auVar72._0_4_;
          auVar62 = insertps(ZEXT416(*(uint *)(uVar17 + lVar27)),*(undefined4 *)(lVar26 + lVar27),
                             0x10);
          auVar62 = insertps(auVar62,*(undefined4 *)(lVar33 + lVar27),0x20);
          auVar52 = insertps(auVar62,*(undefined4 *)(lVar32 + lVar27),0x30);
          lVar27 = param_3 + lVar31;
          auVar62 = insertps(ZEXT416(*(uint *)(param_3 + lVar31)),*(undefined4 *)(lVar38 + lVar27),
                             0x10);
          auVar62 = insertps(auVar62,*(undefined4 *)(lVar39 + lVar27),0x20);
          auVar103 = insertps(auVar62,*(undefined4 *)(lVar36 + lVar27),0x30);
          auVar62 = insertps(ZEXT416(*(uint *)(uVar35 + lVar27)),*(undefined4 *)(lVar37 + lVar27),
                             0x10);
          auVar62 = insertps(auVar62,*(undefined4 *)(lVar22 + lVar27),0x20);
          auVar98 = insertps(auVar62,*(undefined4 *)(lVar34 + lVar27),0x30);
          auVar62 = insertps(ZEXT416(*(uint *)(uVar17 + lVar27)),*(undefined4 *)(lVar26 + lVar27),
                             0x10);
          auVar62 = insertps(auVar62,*(undefined4 *)(lVar33 + lVar27),0x20);
          auVar112 = insertps(auVar62,*(undefined4 *)(lVar32 + lVar27),0x30);
          lVar27 = param_4 + lVar31;
          auVar62 = insertps(ZEXT416(*(uint *)(param_4 + lVar31)),*(undefined4 *)(lVar38 + lVar27),
                             0x10);
          auVar62 = insertps(auVar62,*(undefined4 *)(lVar39 + lVar27),0x20);
          auVar68 = insertps(auVar62,*(undefined4 *)(lVar36 + lVar27),0x30);
          auVar62 = insertps(ZEXT416(*(uint *)(uVar35 + lVar27)),*(undefined4 *)(lVar37 + lVar27),
                             0x10);
          auVar62 = insertps(auVar62,*(undefined4 *)(lVar22 + lVar27),0x20);
          auVar77 = insertps(auVar62,*(undefined4 *)(lVar34 + lVar27),0x30);
          auVar62 = insertps(ZEXT416(*(uint *)(uVar17 + lVar27)),*(undefined4 *)(lVar26 + lVar27),
                             0x10);
          auVar62 = insertps(auVar62,*(undefined4 *)(lVar33 + lVar27),0x20);
          auVar71 = insertps(auVar62,*(undefined4 *)(lVar32 + lVar27),0x30);
        }
        pauVar25 = (undefined1 (*) [16])(ulonglong)CONCAT31((int3)(uVar24 >> 8),bVar23);
        auVar104._0_8_ =
             CONCAT44(fVar139 - (fVar139 - auVar103._4_4_) * param_6,
                      fVar117 - (fVar117 - auVar103._0_4_) * param_6);
        auVar104._8_4_ = fVar91 - (fVar91 - auVar103._8_4_) * param_6;
        auVar104._12_4_ = fVar140 - (fVar140 - auVar103._12_4_) * param_6;
        auVar45._4_4_ = fVar139;
        auVar45._0_4_ = fVar117;
        auVar45._8_4_ = fVar91;
        auVar45._12_4_ = fVar140;
        bVar40 = (bVar23 & 1) != 0;
        if (bVar40) {
          auVar45._8_4_ = auVar104._8_4_;
          auVar45._0_8_ = auVar104._0_8_;
          auVar45._12_4_ = auVar104._12_4_;
        }
        auVar118._8_8_ = auVar121._8_8_;
        auVar118._0_8_ = auVar129._8_8_;
        fVar137 = fVar137 - (fVar137 - auVar98._0_4_) * param_6;
        fVar138 = fVar138 - (fVar138 - auVar98._4_4_) * param_6;
        fVar139 = fVar95 - (fVar95 - auVar98._8_4_) * param_6;
        fVar140 = fVar83 - (fVar83 - auVar98._12_4_) * param_6;
        auVar99._0_8_ =
             CONCAT44(fVar67 - (fVar67 - auVar112._4_4_) * param_6,
                      fVar126 - (fVar126 - auVar112._0_4_) * param_6);
        auVar99._8_4_ = fVar96 - (fVar96 - auVar112._8_4_) * param_6;
        auVar99._12_4_ = fVar19 - (fVar19 - auVar112._12_4_) * param_6;
        auVar92._8_4_ = fVar95;
        auVar92._0_8_ = auVar129._8_8_;
        auVar92._12_4_ = fVar83;
        auVar108._4_4_ = fVar67;
        auVar108._0_4_ = fVar126;
        auVar108._8_4_ = fVar96;
        auVar108._12_4_ = fVar19;
        if (bVar40) {
          auVar92._4_4_ = fVar138;
          auVar92._0_4_ = fVar137;
          auVar92._8_4_ = fVar139;
          auVar92._12_4_ = fVar140;
          auVar108._8_4_ = auVar99._8_4_;
          auVar108._0_8_ = auVar99._0_8_;
          auVar108._12_4_ = auVar99._12_4_;
          auVar62 = blendps(auVar80,auVar45,1);
          if ((bVar23 & 2) == 0) goto LAB_1405b73ef;
LAB_1405b766d:
          auVar113._8_4_ = auVar104._8_4_;
          auVar113._0_8_ = auVar104._0_8_;
          auVar113._12_4_ = auVar104._12_4_;
          auVar121 = blendps(auVar118,auVar92,1);
          auVar119._4_4_ = fVar138;
          auVar119._0_4_ = fVar137;
          auVar119._8_4_ = fVar139;
          auVar119._12_4_ = fVar140;
          auVar129 = blendps(auVar141,auVar108,1);
          auVar127._8_4_ = auVar99._8_4_;
          auVar127._0_8_ = auVar99._0_8_;
          auVar127._12_4_ = auVar99._12_4_;
          auVar62 = blendps(auVar62,auVar113,2);
          if ((bVar23 & 4) == 0) goto LAB_1405b7426;
LAB_1405b76b0:
          auVar114._8_4_ = auVar104._8_4_;
          auVar114._0_8_ = auVar104._0_8_;
          auVar114._12_4_ = auVar104._12_4_;
          auVar121 = blendps(auVar121,auVar119,2);
          auVar120._4_4_ = fVar138;
          auVar120._0_4_ = fVar137;
          auVar120._8_4_ = fVar139;
          auVar120._12_4_ = fVar140;
          auVar129 = blendps(auVar129,auVar127,2);
          auVar128._8_4_ = auVar99._8_4_;
          auVar128._0_8_ = auVar99._0_8_;
          auVar128._12_4_ = auVar99._12_4_;
          auVar62 = blendps(auVar62,auVar114,4);
          if ((char)bVar23 < '\0') goto LAB_1405b7457;
LAB_1405b76ed:
          auVar104 = auVar62;
          auVar121 = blendps(auVar121,auVar120,4);
          auVar62 = auVar104;
          if ((char)bVar23 < '\0') goto LAB_1405b7464;
LAB_1405b76fe:
          fVar137 = auVar121._0_4_;
          fVar138 = auVar121._4_4_;
          fVar139 = auVar121._8_4_;
          fVar140 = auVar121._12_4_;
          auVar129 = blendps(auVar129,auVar128,4);
        }
        else {
          auVar62 = blendps(auVar80,auVar45,1);
          if ((bVar23 & 2) != 0) goto LAB_1405b766d;
LAB_1405b73ef:
          auVar119 = blendps(auVar118,auVar92,1);
          auVar127 = blendps(auVar141,auVar108,1);
          auVar62 = blendps(auVar62,auVar62,2);
          auVar121 = auVar119;
          auVar129 = auVar127;
          if ((bVar23 & 4) != 0) goto LAB_1405b76b0;
LAB_1405b7426:
          auVar120 = blendps(auVar121,auVar119,2);
          auVar128 = blendps(auVar129,auVar127,2);
          auVar62 = blendps(auVar62,auVar62,4);
          auVar121 = auVar120;
          auVar129 = auVar128;
          if (-1 < (char)bVar23) goto LAB_1405b76ed;
LAB_1405b7457:
          auVar121 = blendps(auVar121,auVar120,4);
          if (-1 < (char)bVar23) goto LAB_1405b76fe;
LAB_1405b7464:
          auVar129 = blendps(auVar129,auVar128,4);
        }
        if (-1 < (char)bVar23) {
          auVar99 = auVar129;
        }
        auVar141 = blendps(auVar62,auVar104,8);
        auVar8._4_4_ = fVar138;
        auVar8._0_4_ = fVar137;
        auVar8._8_4_ = fVar139;
        auVar8._12_4_ = fVar140;
        auVar62 = blendps(auVar121,auVar8,8);
        auVar121 = blendps(auVar129,auVar99,8);
        auVar73._0_8_ =
             CONCAT44(auVar62._4_4_ -
                      ((auVar62._4_4_ - auVar85._4_4_) - auVar77._4_4_ * param_5) * param_7,
                      auVar62._0_4_ -
                      ((auVar62._0_4_ - auVar85._0_4_) - auVar77._0_4_ * param_5) * param_7);
        auVar73._8_4_ =
             auVar62._8_4_ - ((auVar62._8_4_ - auVar85._8_4_) - auVar77._8_4_ * param_5) * param_7;
        auVar73._12_4_ =
             auVar62._12_4_ -
             ((auVar62._12_4_ - auVar85._12_4_) - auVar77._12_4_ * param_5) * param_7;
        auVar53._0_8_ =
             CONCAT44(auVar121._4_4_ -
                      ((auVar121._4_4_ - auVar52._4_4_) - auVar71._4_4_ * param_5) * param_7,
                      auVar121._0_4_ -
                      ((auVar121._0_4_ - auVar52._0_4_) - auVar71._0_4_ * param_5) * param_7);
        auVar53._8_4_ =
             auVar121._8_4_ - ((auVar121._8_4_ - auVar52._8_4_) - auVar71._8_4_ * param_5) * param_7
        ;
        auVar53._12_4_ =
             auVar121._12_4_ -
             ((auVar121._12_4_ - auVar52._12_4_) - auVar71._12_4_ * param_5) * param_7;
        auVar69._0_8_ =
             CONCAT44(auVar141._4_4_ -
                      ((auVar141._4_4_ - auVar63._4_4_) - auVar68._4_4_ * param_5) * param_7,
                      auVar141._0_4_ -
                      ((auVar141._0_4_ - auVar63._0_4_) - auVar68._0_4_ * param_5) * param_7);
        auVar69._8_4_ =
             auVar141._8_4_ - ((auVar141._8_4_ - auVar63._8_4_) - auVar68._8_4_ * param_5) * param_7
        ;
        auVar69._12_4_ =
             auVar141._12_4_ -
             ((auVar141._12_4_ - auVar63._12_4_) - auVar68._12_4_ * param_5) * param_7;
        if ((bVar23 & 1) == 0) {
          auVar129 = blendps(auVar141,auVar141,1);
          auVar64 = auVar121;
          auVar86 = auVar62;
          auVar100 = auVar141;
          auVar105 = auVar129;
          if ((bVar23 & 2) != 0) goto LAB_1405b773f;
LAB_1405b7500:
          uVar97 = auVar100._0_4_;
          auVar122 = blendps(auVar62,auVar86,1);
          uVar84 = auVar86._0_4_;
          auVar130 = blendps(auVar121,auVar64,1);
          uVar61 = auVar64._0_4_;
          auVar129 = blendps(auVar105,auVar105,2);
          auVar62 = auVar122;
          auVar121 = auVar130;
          auVar46 = auVar129;
          if ((bVar23 & 4) != 0) goto LAB_1405b7781;
LAB_1405b7537:
          auVar123 = blendps(auVar62,auVar122,2);
          auVar131 = blendps(auVar121,auVar130,2);
          auVar62 = blendps(auVar46,auVar46,4);
          auVar141 = auVar123;
          auVar121 = auVar131;
          if (-1 < (char)bVar23) goto LAB_1405b77bc;
LAB_1405b7568:
          auVar129 = blendps(auVar141,auVar123,4);
          if (-1 < (char)bVar23) goto LAB_1405b77cd;
LAB_1405b7575:
          auVar121 = blendps(auVar121,auVar131,4);
        }
        else {
          auVar100._8_4_ = auVar69._8_4_;
          auVar100._0_8_ = auVar69._0_8_;
          auVar100._12_4_ = auVar69._12_4_;
          auVar86._8_4_ = auVar73._8_4_;
          auVar86._0_8_ = auVar73._0_8_;
          auVar86._12_4_ = auVar73._12_4_;
          auVar64._8_4_ = auVar53._8_4_;
          auVar64._0_8_ = auVar53._0_8_;
          auVar64._12_4_ = auVar53._12_4_;
          auVar129 = blendps(auVar141,auVar100,1);
          auVar105 = auVar129;
          if ((bVar23 & 2) == 0) goto LAB_1405b7500;
LAB_1405b773f:
          uVar97 = auVar100._0_4_;
          auVar105._8_4_ = auVar69._8_4_;
          auVar105._0_8_ = auVar69._0_8_;
          auVar105._12_4_ = auVar69._12_4_;
          auVar62 = blendps(auVar62,auVar86,1);
          uVar84 = auVar86._0_4_;
          auVar122._8_4_ = auVar73._8_4_;
          auVar122._0_8_ = auVar73._0_8_;
          auVar122._12_4_ = auVar73._12_4_;
          auVar121 = blendps(auVar121,auVar64,1);
          uVar61 = auVar64._0_4_;
          auVar130._8_4_ = auVar53._8_4_;
          auVar130._0_8_ = auVar53._0_8_;
          auVar130._12_4_ = auVar53._12_4_;
          auVar129 = blendps(auVar129,auVar105,2);
          auVar46 = auVar129;
          if ((bVar23 & 4) == 0) goto LAB_1405b7537;
LAB_1405b7781:
          auVar46._8_4_ = auVar69._8_4_;
          auVar46._0_8_ = auVar69._0_8_;
          auVar46._12_4_ = auVar69._12_4_;
          auVar141 = blendps(auVar62,auVar122,2);
          auVar123._8_4_ = auVar73._8_4_;
          auVar123._0_8_ = auVar73._0_8_;
          auVar123._12_4_ = auVar73._12_4_;
          auVar121 = blendps(auVar121,auVar130,2);
          auVar131._8_4_ = auVar53._8_4_;
          auVar131._0_8_ = auVar53._0_8_;
          auVar131._12_4_ = auVar53._12_4_;
          auVar62 = blendps(auVar129,auVar46,4);
          if ((char)bVar23 < '\0') goto LAB_1405b7568;
LAB_1405b77bc:
          auVar69 = auVar62;
          auVar129 = blendps(auVar141,auVar123,4);
          auVar62 = auVar69;
          if ((char)bVar23 < '\0') goto LAB_1405b7575;
LAB_1405b77cd:
          auVar121 = blendps(auVar121,auVar131,4);
          auVar73 = auVar129;
        }
        auVar141 = auVar121;
        if ((char)bVar23 < '\0') {
          auVar141 = auVar53;
        }
        if ((~bVar23 & 0xf) == 0) {
          auVar141 = blendps(auVar141,auVar121,7);
          auVar71 = blendps(auVar73,auVar129,7);
          auVar80 = blendps(auVar69,auVar62,7);
          auVar142._0_8_ = auVar62._0_8_;
          auVar142._8_4_ = auVar62._4_4_;
          auVar142._12_4_ = auVar129._4_4_;
          auVar132._0_8_ = auVar121._0_8_;
          auVar132._8_4_ = auVar121._4_4_;
          auVar132._12_4_ = *(float *)(pauVar30[1] + 0xc);
          *(ulonglong *)*pauVar30 = CONCAT44(auVar129._0_4_,auVar62._0_4_);
          *(ulonglong *)(*pauVar30 + 8) = CONCAT44(auVar55._12_4_,auVar121._0_4_);
          *(longlong *)pauVar30[1] = auVar142._8_8_;
          *(longlong *)(pauVar30[1] + 8) = auVar132._8_8_;
          *(int *)pauVar30[2] = auVar80._8_4_;
          *(int *)(pauVar30[2] + 4) = auVar71._8_4_;
          *(int *)(pauVar30[2] + 8) = auVar141._8_4_;
          *(float *)(pauVar30[2] + 0xc) = auVar74._12_4_;
          *(int *)pauVar30[3] = auVar80._12_4_;
          *(int *)(pauVar30[3] + 4) = auVar71._12_4_;
          *(int *)(pauVar30[3] + 8) = auVar141._12_4_;
          *(float *)(pauVar30[3] + 0xc) = fVar20;
        }
        else {
          if ((bVar23 & 1) == 0) {
            if ((bVar23 & 2) != 0) goto LAB_1405b785e;
LAB_1405b75b1:
            if ((bVar23 & 4) != 0) goto LAB_1405b7870;
LAB_1405b75bb:
            if ((char)bVar23 < '\0') goto LAB_1405b787f;
LAB_1405b75c3:
            if ((bVar23 & 1) != 0) goto LAB_1405b7890;
LAB_1405b75cd:
            if ((bVar23 & 2) != 0) goto LAB_1405b78a7;
LAB_1405b75df:
            auVar62 = *pauVar1;
            if ((bVar23 & 4) != 0) goto LAB_1405b78b9;
LAB_1405b75e9:
            if ((char)bVar23 < '\0') goto LAB_1405b78c9;
LAB_1405b75f1:
            if ((bVar23 & 1) != 0) goto LAB_1405b78da;
LAB_1405b75fb:
            if ((bVar23 & 2) != 0) goto LAB_1405b78e9;
LAB_1405b7605:
            if ((bVar23 & 4) != 0) goto LAB_1405b78fa;
LAB_1405b760f:
            if ((char)bVar23 < '\0') goto LAB_1405b7909;
LAB_1405b7617:
            if ((bVar23 & 1) != 0) goto LAB_1405b7922;
LAB_1405b7629:
            if ((bVar23 & 2) != 0) goto LAB_1405b793c;
LAB_1405b763b:
            auVar55 = *pauVar2;
          }
          else {
            *(undefined4 *)*pauVar30 = uVar97;
            if ((bVar23 & 2) == 0) goto LAB_1405b75b1;
LAB_1405b785e:
            uVar4 = extractps(auVar105,1);
            *(undefined8 *)pauVar30[1] = uVar4;
            if ((bVar23 & 4) == 0) goto LAB_1405b75bb;
LAB_1405b7870:
            uVar4 = extractps(auVar46,2);
            *(undefined8 *)pauVar30[2] = uVar4;
            if (-1 < (char)bVar23) goto LAB_1405b75c3;
LAB_1405b787f:
            uVar4 = extractps(auVar69,3);
            *(undefined8 *)pauVar30[3] = uVar4;
            if ((bVar23 & 1) == 0) goto LAB_1405b75cd;
LAB_1405b7890:
            *(undefined4 *)(*pauVar30 + 4) = uVar84;
            if ((bVar23 & 2) == 0) goto LAB_1405b75df;
LAB_1405b78a7:
            auVar62 = *pauVar1;
            uVar4 = extractps(auVar122,1);
            *(undefined8 *)(pauVar30[1] + 4) = uVar4;
            if ((bVar23 & 4) == 0) goto LAB_1405b75e9;
LAB_1405b78b9:
            uVar4 = extractps(auVar123,2);
            *(undefined8 *)(pauVar30[2] + 4) = uVar4;
            if (-1 < (char)bVar23) goto LAB_1405b75f1;
LAB_1405b78c9:
            uVar4 = extractps(auVar73,3);
            *(undefined8 *)(pauVar30[3] + 4) = uVar4;
            if ((bVar23 & 1) == 0) goto LAB_1405b75fb;
LAB_1405b78da:
            *(undefined4 *)(*pauVar30 + 8) = uVar61;
            if ((bVar23 & 2) == 0) goto LAB_1405b7605;
LAB_1405b78e9:
            uVar4 = extractps(auVar130,1);
            *(undefined8 *)(pauVar30[1] + 8) = uVar4;
            if ((bVar23 & 4) == 0) goto LAB_1405b760f;
LAB_1405b78fa:
            uVar4 = extractps(auVar131,2);
            *(undefined8 *)(pauVar30[2] + 8) = uVar4;
            if (-1 < (char)bVar23) goto LAB_1405b7617;
LAB_1405b7909:
            uVar4 = extractps(auVar141,3);
            *(undefined8 *)(pauVar30[3] + 8) = uVar4;
            if ((bVar23 & 1) == 0) goto LAB_1405b7629;
LAB_1405b7922:
            uVar4 = extractps(auVar55,3);
            *(undefined8 *)(*pauVar30 + 0xc) = uVar4;
            if ((bVar23 & 2) == 0) goto LAB_1405b763b;
LAB_1405b793c:
            auVar55 = *pauVar2;
            uVar4 = extractps(auVar62,3);
            *(undefined8 *)(pauVar30[1] + 0xc) = uVar4;
          }
          if ((bVar23 & 4) != 0) {
            uVar4 = extractps(auVar74,3);
            *(undefined8 *)(pauVar30[2] + 0xc) = uVar4;
          }
          if ((char)bVar23 < '\0') {
            uVar4 = extractps(auVar55,3);
            *(undefined8 *)(pauVar30[3] + 0xc) = uVar4;
          }
        }
      }
      lVar31 = lVar31 + 0x30;
      pauVar30 = pauVar30 + 4;
      uVar29 = uVar29 + 4;
    } while ((int)uVar29 < (int)(uVar28 & 0xfffffffc));
  }
  if ((int)param_8 <= (int)uVar29) {
    return;
  }
  bVar40 = (int)(uVar29 | (uint)__xmm_00000003000000020000000100000000) < (int)param_8;
  auVar55._0_4_ = -(uint)bVar40;
  bVar5 = (int)(uVar29 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_8;
  auVar55._4_4_ = -(uint)bVar5;
  bVar6 = (int)(uVar29 | _UNK_150631e08) < (int)param_8;
  auVar55._8_4_ = -(uint)bVar6;
  bVar7 = (int)(uVar29 | _UNK_150631e0c) < (int)param_8;
  auVar55._12_4_ = -(uint)bVar7;
  uVar35 = (ulonglong)uVar29;
  param_1 = param_1 + uVar35;
  iVar21 = movmskps(uVar29 * 0x10,auVar55);
  if (iVar21 == 0xf) {
    auVar55 = *param_1;
    auVar74 = param_1[2];
    auVar88._8_4_ = auVar55._4_4_;
    auVar88._0_8_ = auVar55._0_8_;
    auVar88._12_4_ = *(undefined4 *)(param_1[1] + 4);
    auVar75._4_4_ = *(undefined4 *)param_1[1];
    auVar75._0_4_ = auVar55._0_4_;
    auVar56._0_8_ = CONCAT44(*(undefined4 *)(param_1[1] + 8),auVar55._8_4_);
    auVar56._8_4_ = auVar55._12_4_;
    auVar56._12_4_ = *(undefined4 *)(param_1[1] + 0xc);
    auVar79._8_4_ = auVar74._4_4_;
    auVar79._0_8_ = auVar74._0_8_;
    auVar79._12_4_ = *(undefined4 *)(param_1[3] + 4);
    auVar78._8_8_ = auVar79._8_8_;
    auVar75._12_4_ = *(undefined4 *)param_1[3];
    auVar75._8_4_ = auVar74._0_4_;
    auVar70._0_8_ = CONCAT44(*(undefined4 *)(param_1[3] + 8),auVar74._8_4_);
    auVar70._8_4_ = auVar74._12_4_;
    auVar70._12_4_ = *(undefined4 *)(param_1[3] + 0xc);
    auVar78._0_8_ = auVar88._8_8_;
    auVar87._8_8_ = auVar70._0_8_;
    auVar87._0_8_ = auVar56._0_8_;
    auVar74._8_8_ = auVar70._8_8_;
    auVar74._0_8_ = auVar56._8_8_;
    uVar28 = 0xf;
  }
  else {
    auVar54._0_4_ = ___xmm_00000030000000200000001000000000 & auVar55._0_4_;
    auVar54._4_4_ = _UNK_150b511c4 & auVar55._4_4_;
    auVar54._8_4_ = _UNK_150b511c8 & auVar55._8_4_;
    auVar54._12_4_ = _UNK_150b511cc & auVar55._12_4_;
    lVar31 = extractps(auVar54,1);
    lVar27 = extractps(auVar54,2);
    lVar22 = extractps(auVar54,3);
    auVar74 = insertps(ZEXT416(*(uint *)*param_1),*(undefined4 *)(*param_1 + lVar31),0x10);
    auVar74 = insertps(auVar74,*(undefined4 *)(*param_1 + lVar27),0x20);
    auVar75 = insertps(auVar74,*(undefined4 *)(*param_1 + lVar22),0x30);
    auVar74 = ___xmm_00000034000000240000001400000004 & auVar55;
    auVar62 = insertps(ZEXT416(*(uint *)(*param_1 + auVar74._0_4_)),
                       *(undefined4 *)(*param_1 + auVar74._4_4_),0x10);
    auVar62 = insertps(auVar62,*(undefined4 *)(*param_1 + auVar74._8_4_),0x20);
    auVar78 = insertps(auVar62,*(undefined4 *)(*param_1 + auVar74._12_4_),0x30);
    auVar74 = ___xmm_00000038000000280000001800000008 & auVar55;
    auVar62 = insertps(ZEXT416(*(uint *)(*param_1 + auVar74._0_4_)),
                       *(undefined4 *)(*param_1 + auVar74._4_4_),0x10);
    auVar62 = insertps(auVar62,*(undefined4 *)(*param_1 + auVar74._8_4_),0x20);
    auVar87 = insertps(auVar62,*(undefined4 *)(*param_1 + auVar74._12_4_),0x30);
    auVar55 = ___xmm_0000003c0000002c0000001c0000000c & auVar55;
    uVar28 = auVar55._4_4_;
    auVar74 = insertps(ZEXT416(*(uint *)(*param_1 + auVar55._0_4_)),
                       *(undefined4 *)(*param_1 + uVar28),0x10);
    auVar74 = insertps(auVar74,*(undefined4 *)(*param_1 + auVar55._8_4_),0x20);
    auVar74 = insertps(auVar74,*(undefined4 *)(*param_1 + auVar55._12_4_),0x30);
  }
  fVar139 = auVar74._0_4_;
  auVar57._0_4_ = -(uint)(0.0 < fVar139 && bVar40);
  auVar57._4_4_ = -(uint)(0.0 < auVar74._4_4_ && bVar5);
  auVar57._8_4_ = -(uint)(0.0 < auVar74._8_4_ && bVar6);
  auVar57._12_4_ = -(uint)(0.0 < auVar74._12_4_ && bVar7);
  iVar21 = movmskps(uVar28,auVar57);
  if (iVar21 != 0) {
    bVar23 = (char)((char)iVar21 << 4) >> 4;
    pauVar25 = (undefined1 (*) [16])(param_2 + uVar35 * 0xc);
    if ((~bVar23 & 0xf) == 0) {
      auVar55 = *pauVar25;
      auVar62 = pauVar25[1];
      auVar48._0_4_ = auVar55._0_4_;
      auVar121 = insertps(auVar62,auVar55,0x8c);
      auVar48._4_4_ = auVar55._12_4_;
      auVar48._8_4_ = auVar62._8_4_;
      auVar48._12_4_ = *(undefined4 *)(pauVar25[2] + 4);
      auVar66._4_4_ = auVar62._0_4_;
      auVar66._0_4_ = auVar55._4_4_;
      auVar66._8_4_ = auVar62._12_4_;
      auVar66._12_4_ = *(undefined4 *)(pauVar25[2] + 8);
      auVar59._0_8_ = auVar121._0_8_;
      auVar59._8_4_ = *(undefined4 *)pauVar25[2];
      auVar59._12_4_ = *(undefined4 *)(pauVar25[2] + 0xc);
      lVar31 = uVar35 * 0xc;
      auVar55 = *(undefined1 (*) [16])(param_3 + lVar31);
      auVar62 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar31);
      puVar3 = (undefined4 *)(param_3 + 0x20 + lVar31);
      auVar109._0_4_ = auVar55._0_4_;
      auVar121 = insertps(auVar62,auVar55,0x8c);
      auVar109._4_4_ = auVar55._12_4_;
      auVar109._8_4_ = auVar62._8_4_;
      auVar109._12_4_ = puVar3[1];
      auVar115._4_4_ = auVar62._0_4_;
      auVar115._0_4_ = auVar55._4_4_;
      auVar115._8_4_ = auVar62._12_4_;
      auVar115._12_4_ = puVar3[2];
      auVar124._0_8_ = auVar121._0_8_;
      auVar124._8_4_ = *puVar3;
      auVar124._12_4_ = puVar3[3];
      auVar55 = *(undefined1 (*) [16])(param_4 + lVar31);
      auVar62 = *(undefined1 (*) [16])(param_4 + 0x10 + lVar31);
      puVar3 = (undefined4 *)(param_4 + 0x20 + lVar31);
      auVar93._0_4_ = auVar55._0_4_;
      auVar121 = insertps(auVar62,auVar55,0x8c);
      auVar93._4_4_ = auVar55._12_4_;
      auVar93._8_4_ = auVar62._8_4_;
      auVar93._12_4_ = puVar3[1];
      auVar101._4_4_ = auVar62._0_4_;
      auVar101._0_4_ = auVar55._4_4_;
      auVar101._8_4_ = auVar62._12_4_;
      auVar101._12_4_ = puVar3[2];
      auVar106._0_8_ = auVar121._0_8_;
      auVar106._8_4_ = *puVar3;
      auVar106._12_4_ = puVar3[3];
    }
    else {
      auVar47._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar57._0_4_;
      auVar47._4_4_ = _UNK_150b50da4 & auVar57._4_4_;
      auVar47._8_4_ = _UNK_150b50da8 & auVar57._8_4_;
      auVar47._12_4_ = _UNK_150b50dac & auVar57._12_4_;
      lVar34 = extractps(auVar47,1);
      lVar32 = extractps(auVar47,2);
      lVar33 = extractps(auVar47,3);
      auVar55 = insertps(ZEXT416(*(uint *)*pauVar25),*(undefined4 *)(*pauVar25 + lVar34),0x10);
      auVar55 = insertps(auVar55,*(undefined4 *)(*pauVar25 + lVar32),0x20);
      auVar48 = insertps(auVar55,*(undefined4 *)(*pauVar25 + lVar33),0x30);
      auVar65._0_4_ = ___xmm_000000280000001c0000001000000004 & auVar57._0_4_;
      auVar65._4_4_ = _UNK_150b50db4 & auVar57._4_4_;
      auVar65._8_4_ = _UNK_150b50db8 & auVar57._8_4_;
      auVar65._12_4_ = _UNK_150b50dbc & auVar57._12_4_;
      lVar26 = extractps(auVar65,1);
      lVar38 = extractps(auVar65,2);
      lVar39 = extractps(auVar65,3);
      uVar17 = (ulonglong)auVar65._0_4_;
      auVar55 = insertps(ZEXT416(*(uint *)(*pauVar25 + uVar17)),*(undefined4 *)(*pauVar25 + lVar26),
                         0x10);
      auVar55 = insertps(auVar55,*(undefined4 *)(*pauVar25 + lVar38),0x20);
      auVar66 = insertps(auVar55,*(undefined4 *)(*pauVar25 + lVar39),0x30);
      auVar58._0_4_ = auVar57._0_4_ & ___xmm_0000002c000000200000001400000008;
      auVar58._4_4_ = auVar57._4_4_ & _UNK_150b50dc4;
      auVar58._8_4_ = auVar57._8_4_ & _UNK_150b50dc8;
      auVar58._12_4_ = auVar57._12_4_ & _UNK_150b50dcc;
      lVar22 = extractps(auVar58,1);
      lVar36 = extractps(auVar58,2);
      lVar37 = extractps(auVar58,3);
      uVar18 = (ulonglong)auVar58._0_4_;
      auVar55 = insertps(ZEXT416(*(uint *)(*pauVar25 + uVar18)),*(undefined4 *)(*pauVar25 + lVar22),
                         0x10);
      auVar55 = insertps(auVar55,*(undefined4 *)(*pauVar25 + lVar36),0x20);
      auVar59 = insertps(auVar55,*(undefined4 *)(*pauVar25 + lVar37),0x30);
      lVar27 = uVar35 * 0xc;
      lVar31 = param_3 + lVar27;
      auVar55 = insertps(ZEXT416(*(uint *)(param_3 + lVar27)),*(undefined4 *)(lVar34 + lVar31),0x10)
      ;
      auVar55 = insertps(auVar55,*(undefined4 *)(lVar32 + lVar31),0x20);
      auVar109 = insertps(auVar55,*(undefined4 *)(lVar33 + lVar31),0x30);
      auVar55 = insertps(ZEXT416(*(uint *)(uVar17 + lVar31)),*(undefined4 *)(lVar26 + lVar31),0x10);
      auVar55 = insertps(auVar55,*(undefined4 *)(lVar38 + lVar31),0x20);
      auVar115 = insertps(auVar55,*(undefined4 *)(lVar39 + lVar31),0x30);
      auVar55 = insertps(ZEXT416(*(uint *)(uVar18 + lVar31)),*(undefined4 *)(lVar22 + lVar31),0x10);
      auVar55 = insertps(auVar55,*(undefined4 *)(lVar36 + lVar31),0x20);
      auVar124 = insertps(auVar55,*(undefined4 *)(lVar37 + lVar31),0x30);
      lVar31 = param_4 + lVar27;
      auVar55 = insertps(ZEXT416(*(uint *)(param_4 + lVar27)),*(undefined4 *)(lVar34 + lVar31),0x10)
      ;
      auVar55 = insertps(auVar55,*(undefined4 *)(lVar32 + lVar31),0x20);
      auVar93 = insertps(auVar55,*(undefined4 *)(lVar33 + lVar31),0x30);
      auVar55 = insertps(ZEXT416(*(uint *)(uVar17 + lVar31)),*(undefined4 *)(lVar26 + lVar31),0x10);
      auVar55 = insertps(auVar55,*(undefined4 *)(lVar38 + lVar31),0x20);
      auVar101 = insertps(auVar55,*(undefined4 *)(lVar39 + lVar31),0x30);
      auVar55 = insertps(ZEXT416(*(uint *)(uVar18 + lVar31)),*(undefined4 *)(lVar22 + lVar31),0x10);
      auVar55 = insertps(auVar55,*(undefined4 *)(lVar36 + lVar31),0x20);
      auVar106 = insertps(auVar55,*(undefined4 *)(lVar37 + lVar31),0x30);
    }
    fVar138 = auVar78._0_4_;
    fVar67 = auVar78._4_4_;
    fVar140 = auVar78._8_4_;
    fVar83 = auVar78._12_4_;
    auVar110._0_8_ =
         CONCAT44(auVar75._4_4_ - (auVar75._4_4_ - auVar109._4_4_) * param_6,
                  auVar75._0_4_ - (auVar75._0_4_ - auVar109._0_4_) * param_6);
    auVar110._8_4_ = auVar75._8_4_ - (auVar75._8_4_ - auVar109._8_4_) * param_6;
    auVar110._12_4_ = auVar75._12_4_ - (auVar75._12_4_ - auVar109._12_4_) * param_6;
    bVar40 = (bVar23 & 1) == 0;
    auVar143 = auVar75;
    if (!bVar40) {
      auVar143._8_4_ = auVar110._8_4_;
      auVar143._0_8_ = auVar110._0_8_;
      auVar143._12_4_ = auVar110._12_4_;
    }
    auVar81._0_4_ = fVar138 - (fVar138 - auVar115._0_4_) * param_6;
    auVar81._4_4_ = fVar67 - (fVar67 - auVar115._4_4_) * param_6;
    auVar81._8_4_ = fVar140 - (fVar140 - auVar115._8_4_) * param_6;
    auVar81._12_4_ = fVar83 - (fVar83 - auVar115._12_4_) * param_6;
    auVar89._0_8_ =
         CONCAT44(auVar87._4_4_ - (auVar87._4_4_ - auVar124._4_4_) * param_6,
                  auVar87._0_4_ - (auVar87._0_4_ - auVar124._0_4_) * param_6);
    auVar89._8_4_ = auVar87._8_4_ - (auVar87._8_4_ - auVar124._8_4_) * param_6;
    auVar89._12_4_ = auVar87._12_4_ - (auVar87._12_4_ - auVar124._12_4_) * param_6;
    if (bVar40) {
      auVar55 = blendps(auVar75,auVar143,1);
      auVar133 = auVar87;
    }
    else {
      auVar133._8_4_ = auVar89._8_4_;
      auVar133._0_8_ = auVar89._0_8_;
      auVar133._12_4_ = auVar89._12_4_;
      auVar55 = blendps(auVar75,auVar143,1);
      fVar138 = auVar81._0_4_;
      fVar67 = auVar81._4_4_;
      fVar140 = auVar81._8_4_;
      fVar83 = auVar81._12_4_;
    }
    bVar40 = (bVar23 & 2) != 0;
    auVar144 = auVar55;
    if (bVar40) {
      auVar144._8_4_ = auVar110._8_4_;
      auVar144._0_8_ = auVar110._0_8_;
      auVar144._12_4_ = auVar110._12_4_;
    }
    auVar9._4_4_ = fVar67;
    auVar9._0_4_ = fVar138;
    auVar9._8_4_ = fVar140;
    auVar9._12_4_ = fVar83;
    auVar62 = blendps(auVar78,auVar9,1);
    fVar138 = auVar62._0_4_;
    fVar67 = auVar62._4_4_;
    fVar140 = auVar62._8_4_;
    fVar83 = auVar62._12_4_;
    if (bVar40) {
      auVar121 = blendps(auVar87,auVar133,1);
      auVar134._8_4_ = auVar89._8_4_;
      auVar134._0_8_ = auVar89._0_8_;
      auVar134._12_4_ = auVar89._12_4_;
      auVar55 = blendps(auVar55,auVar144,2);
      fVar138 = auVar81._0_4_;
      fVar67 = auVar81._4_4_;
      fVar140 = auVar81._8_4_;
      fVar83 = auVar81._12_4_;
    }
    else {
      auVar121 = blendps(auVar87,auVar133,1);
      auVar55 = blendps(auVar55,auVar144,2);
      auVar134 = auVar121;
    }
    if ((bVar23 & 4) == 0) {
      auVar10._4_4_ = fVar67;
      auVar10._0_4_ = fVar138;
      auVar10._8_4_ = fVar140;
      auVar10._12_4_ = fVar83;
      auVar129 = blendps(auVar62,auVar10,2);
      fVar138 = auVar129._0_4_;
      fVar67 = auVar129._4_4_;
      fVar140 = auVar129._8_4_;
      fVar83 = auVar129._12_4_;
      auVar62 = blendps(auVar121,auVar134,2);
      auVar55 = blendps(auVar55,auVar55,4);
      auVar135 = auVar62;
    }
    else {
      auVar145._8_4_ = auVar110._8_4_;
      auVar145._0_8_ = auVar110._0_8_;
      auVar145._12_4_ = auVar110._12_4_;
      auVar16._4_4_ = fVar67;
      auVar16._0_4_ = fVar138;
      auVar16._8_4_ = fVar140;
      auVar16._12_4_ = fVar83;
      auVar129 = blendps(auVar62,auVar16,2);
      auVar62 = blendps(auVar121,auVar134,2);
      auVar135._8_4_ = auVar89._8_4_;
      auVar135._0_8_ = auVar89._0_8_;
      auVar135._12_4_ = auVar89._12_4_;
      auVar55 = blendps(auVar55,auVar145,4);
      fVar138 = auVar81._0_4_;
      fVar67 = auVar81._4_4_;
      fVar140 = auVar81._8_4_;
      fVar83 = auVar81._12_4_;
    }
    if ((char)bVar23 < '\0') {
      auVar11._4_4_ = fVar67;
      auVar11._0_4_ = fVar138;
      auVar11._8_4_ = fVar140;
      auVar11._12_4_ = fVar83;
      auVar121 = blendps(auVar129,auVar11,4);
      auVar62 = blendps(auVar62,auVar135,4);
    }
    else {
      auVar15._4_4_ = fVar67;
      auVar15._0_4_ = fVar138;
      auVar15._8_4_ = fVar140;
      auVar15._12_4_ = fVar83;
      auVar81 = blendps(auVar129,auVar15,4);
      auVar89 = blendps(auVar62,auVar135,4);
      auVar62 = auVar89;
      auVar110 = auVar55;
      auVar121 = auVar81;
    }
    auVar55 = blendps(auVar55,auVar110,8);
    auVar121 = blendps(auVar121,auVar81,8);
    auVar62 = blendps(auVar62,auVar89,8);
    fVar138 = auVar121._0_4_ -
              ((auVar121._0_4_ - auVar66._0_4_) - auVar101._0_4_ * param_5) * param_7;
    fVar67 = auVar121._4_4_ -
             ((auVar121._4_4_ - auVar66._4_4_) - auVar101._4_4_ * param_5) * param_7;
    auVar82._0_8_ = CONCAT44(fVar67,fVar138);
    auVar82._8_4_ =
         auVar121._8_4_ - ((auVar121._8_4_ - auVar66._8_4_) - auVar101._8_4_ * param_5) * param_7;
    auVar82._12_4_ =
         auVar121._12_4_ -
         ((auVar121._12_4_ - auVar66._12_4_) - auVar101._12_4_ * param_5) * param_7;
    auVar60._0_8_ =
         CONCAT44(auVar62._4_4_ -
                  ((auVar62._4_4_ - auVar59._4_4_) - auVar106._4_4_ * param_5) * param_7,
                  auVar62._0_4_ -
                  ((auVar62._0_4_ - auVar59._0_4_) - auVar106._0_4_ * param_5) * param_7);
    auVar60._8_4_ =
         auVar62._8_4_ - ((auVar62._8_4_ - auVar59._8_4_) - auVar106._8_4_ * param_5) * param_7;
    auVar60._12_4_ =
         auVar62._12_4_ - ((auVar62._12_4_ - auVar59._12_4_) - auVar106._12_4_ * param_5) * param_7;
    auVar94._0_8_ =
         CONCAT44(auVar55._4_4_ -
                  ((auVar55._4_4_ - auVar48._4_4_) - param_5 * auVar93._4_4_) * param_7,
                  auVar55._0_4_ -
                  ((auVar55._0_4_ - auVar48._0_4_) - param_5 * auVar93._0_4_) * param_7);
    auVar94._8_4_ =
         auVar55._8_4_ - ((auVar55._8_4_ - auVar48._8_4_) - param_5 * auVar93._8_4_) * param_7;
    auVar94._12_4_ =
         auVar55._12_4_ - ((auVar55._12_4_ - auVar48._12_4_) - param_5 * auVar93._12_4_) * param_7;
    if ((bVar23 & 1) == 0) {
      auVar129 = blendps(auVar55,auVar55,1);
      auVar49 = auVar62;
      auVar107 = auVar121;
    }
    else {
      auVar125._8_4_ = auVar94._8_4_;
      auVar125._0_8_ = auVar94._0_8_;
      auVar125._12_4_ = auVar94._12_4_;
      auVar107._8_4_ = auVar82._8_4_;
      auVar107._0_8_ = auVar82._0_8_;
      auVar107._12_4_ = auVar82._12_4_;
      auVar49._8_4_ = auVar60._8_4_;
      auVar49._0_8_ = auVar60._0_8_;
      auVar49._12_4_ = auVar60._12_4_;
      auVar129 = blendps(auVar55,auVar125,1);
      auVar55 = auVar125;
    }
    if ((bVar23 & 2) == 0) {
      auVar141 = blendps(auVar121,auVar107,1);
      auVar121 = blendps(auVar62,auVar49,1);
      auVar62 = blendps(auVar129,auVar129,2);
      auVar102 = auVar121;
      auVar116 = auVar141;
    }
    else {
      auVar136._8_4_ = auVar94._8_4_;
      auVar136._0_8_ = auVar94._0_8_;
      auVar136._12_4_ = auVar94._12_4_;
      auVar141 = blendps(auVar121,auVar107,1);
      auVar116._8_4_ = auVar82._8_4_;
      auVar116._0_8_ = auVar82._0_8_;
      auVar116._12_4_ = auVar82._12_4_;
      auVar121 = blendps(auVar62,auVar49,1);
      auVar102._8_4_ = auVar60._8_4_;
      auVar102._0_8_ = auVar60._0_8_;
      auVar102._12_4_ = auVar60._12_4_;
      auVar62 = blendps(auVar129,auVar136,2);
      auVar129 = auVar136;
    }
    if ((bVar23 & 4) == 0) {
      auVar80 = blendps(auVar141,auVar116,2);
      fVar138 = auVar80._0_4_;
      fVar67 = auVar80._4_4_;
      fVar140 = auVar80._8_4_;
      fVar83 = auVar80._12_4_;
      auVar141 = blendps(auVar121,auVar102,2);
      auVar121 = blendps(auVar62,auVar62,4);
      auVar111 = auVar141;
    }
    else {
      auVar146._8_4_ = auVar94._8_4_;
      auVar146._0_8_ = auVar94._0_8_;
      auVar146._12_4_ = auVar94._12_4_;
      auVar80 = blendps(auVar141,auVar116,2);
      auVar141 = blendps(auVar121,auVar102,2);
      auVar111._8_4_ = auVar60._8_4_;
      auVar111._0_8_ = auVar60._0_8_;
      auVar111._12_4_ = auVar60._12_4_;
      auVar121 = blendps(auVar62,auVar146,4);
      fVar140 = auVar82._8_4_;
      fVar83 = auVar82._12_4_;
      auVar62 = auVar146;
    }
    if ((char)bVar23 < '\0') {
      auVar12._4_4_ = fVar67;
      auVar12._0_4_ = fVar138;
      auVar12._8_4_ = fVar140;
      auVar12._12_4_ = fVar83;
      auVar80 = blendps(auVar80,auVar12,4);
      auVar141 = blendps(auVar141,auVar111,4);
    }
    else {
      auVar14._4_4_ = fVar67;
      auVar14._0_4_ = fVar138;
      auVar14._8_4_ = fVar140;
      auVar14._12_4_ = fVar83;
      auVar82 = blendps(auVar80,auVar14,4);
      auVar141 = blendps(auVar141,auVar111,4);
      auVar94 = auVar121;
      auVar80 = auVar82;
    }
    auVar71 = auVar141;
    if ((char)bVar23 < '\0') {
      auVar71 = auVar60;
    }
    if ((~bVar23 & 0xf) == 0) {
      auVar55 = blendps(auVar71,auVar141,7);
      auVar62 = blendps(auVar82,auVar80,7);
      auVar129 = blendps(auVar94,auVar121,7);
      auVar76._0_8_ = auVar121._0_8_;
      auVar76._8_4_ = auVar121._4_4_;
      auVar76._12_4_ = auVar80._4_4_;
      auVar90._0_8_ = auVar141._0_8_;
      auVar90._8_4_ = auVar141._4_4_;
      auVar90._12_4_ = auVar74._4_4_;
      *(ulonglong *)*param_1 = CONCAT44(auVar80._0_4_,auVar121._0_4_);
      *(ulonglong *)(*param_1 + 8) = CONCAT44(fVar139,auVar141._0_4_);
      *(longlong *)param_1[1] = auVar76._8_8_;
      *(longlong *)(param_1[1] + 8) = auVar90._8_8_;
      *(int *)param_1[2] = auVar129._8_4_;
      *(int *)(param_1[2] + 4) = auVar62._8_4_;
      *(int *)(param_1[2] + 8) = auVar55._8_4_;
      *(float *)(param_1[2] + 0xc) = auVar74._8_4_;
      *(int *)param_1[3] = auVar129._12_4_;
      *(int *)(param_1[3] + 4) = auVar62._12_4_;
      *(int *)(param_1[3] + 8) = auVar55._12_4_;
      *(float *)(param_1[3] + 0xc) = auVar74._12_4_;
    }
    else {
      if ((bVar23 & 1) != 0) {
        *(int *)*param_1 = auVar55._0_4_;
      }
      if ((bVar23 & 2) != 0) {
        uVar4 = extractps(auVar129,1);
        *(undefined8 *)param_1[1] = uVar4;
      }
      if ((bVar23 & 4) != 0) {
        uVar4 = extractps(auVar62,2);
        *(undefined8 *)param_1[2] = uVar4;
      }
      if ((char)bVar23 < '\0') {
        uVar4 = extractps(auVar94,3);
        *(undefined8 *)param_1[3] = uVar4;
      }
      if ((bVar23 & 1) != 0) {
        *(int *)(*param_1 + 4) = auVar107._0_4_;
      }
      if ((bVar23 & 2) != 0) {
        uVar4 = extractps(auVar116,1);
        *(undefined8 *)(param_1[1] + 4) = uVar4;
      }
      if ((bVar23 & 4) != 0) {
        auVar13._4_4_ = fVar67;
        auVar13._0_4_ = fVar138;
        auVar13._8_4_ = fVar140;
        auVar13._12_4_ = fVar83;
        uVar4 = extractps(auVar13,2);
        *(undefined8 *)(param_1[2] + 4) = uVar4;
      }
      if ((char)bVar23 < '\0') {
        uVar4 = extractps(auVar82,3);
        *(undefined8 *)(param_1[3] + 4) = uVar4;
      }
      if ((bVar23 & 1) != 0) {
        *(int *)(*param_1 + 8) = auVar49._0_4_;
      }
      if ((bVar23 & 2) != 0) {
        uVar4 = extractps(auVar102,1);
        *(undefined8 *)(param_1[1] + 8) = uVar4;
      }
      if ((bVar23 & 4) != 0) {
        uVar4 = extractps(auVar111,2);
        *(undefined8 *)(param_1[2] + 8) = uVar4;
      }
      if ((char)bVar23 < '\0') {
        uVar4 = extractps(auVar71,3);
        *(undefined8 *)(param_1[3] + 8) = uVar4;
      }
      if ((bVar23 & 1) != 0) {
        *(float *)(*param_1 + 0xc) = fVar139;
      }
      if ((bVar23 & 2) != 0) {
        uVar4 = extractps(auVar74,1);
        *(undefined8 *)(param_1[1] + 0xc) = uVar4;
      }
      if ((bVar23 & 4) != 0) {
        uVar4 = extractps(auVar74,2);
        *(undefined8 *)(param_1[2] + 0xc) = uVar4;
      }
      if ((char)bVar23 < '\0') {
        uVar4 = extractps(auVar74,3);
        *(undefined8 *)(param_1[3] + 0xc) = uVar4;
      }
    }
    return;
  }
  return;
}

// ApplyMultiResConstraintsWithWeightMaps_sse4 @ 1405b8370

/* WARNING: Removing unreachable block (ram,0x0001405b981b) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyMultiResConstraintsWithWeightMaps_sse4
               (undefined1 (*param_1) [16],longlong param_2,longlong param_3,longlong param_4,
               float param_5,byte param_6,longlong param_7,longlong param_8,byte param_9,
               longlong param_10,longlong param_11,uint param_12)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  byte bVar16;
  int iVar17;
  byte *pbVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar22;
  uint uVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong lVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  byte bVar33;
  ulonglong uVar34;
  byte bVar35;
  longlong lVar36;
  longlong lVar37;
  undefined1 (*pauVar38) [16];
  bool bVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  float fVar44;
  float fVar56;
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
  undefined4 uVar57;
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
  undefined4 uVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar80;
  float fVar89;
  float fVar90;
  undefined1 auVar81 [16];
  float fVar91;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
  float fVar110;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
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
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 local_178 [8];
  float fStack_170;
  float fStack_16c;
  undefined1 local_168 [8];
  float fStack_160;
  float fStack_15c;
  undefined1 (*pauVar21) [16];
  undefined1 auVar55 [16];
  
  uVar23 = param_12 + 3;
  if (-1 < (int)param_12) {
    uVar23 = param_12;
  }
  if ((int)(uVar23 & 0xfffffffc) < 1) {
    uVar30 = 0;
    if ((int)param_12 < 1) {
      return;
    }
  }
  else {
    lVar37 = 0;
    uVar30 = 0;
    pauVar21 = param_1;
    pauVar38 = param_1;
    do {
      auVar71 = *pauVar38;
      pauVar1 = pauVar38 + 1;
      fVar95 = *(float *)*pauVar1;
      fVar97 = *(float *)(pauVar38[1] + 4);
      fVar100 = *(float *)(pauVar38[1] + 8);
      pauVar2 = pauVar38 + 2;
      fVar99 = *(float *)*pauVar2;
      fVar96 = *(float *)(pauVar38[2] + 4);
      fVar98 = *(float *)(pauVar38[2] + 8);
      pauVar3 = pauVar38 + 3;
      fVar101 = *(float *)*pauVar3;
      fVar102 = *(float *)(pauVar38[3] + 4);
      fVar44 = *(float *)(pauVar38[3] + 8);
      fVar56 = auVar71._4_4_;
      fVar103 = auVar71._8_4_;
      auVar118._4_4_ = fVar100;
      auVar118._0_4_ = fVar103;
      auVar118._12_4_ = fVar44;
      auVar118._8_4_ = fVar98;
      uVar40 = -(uint)(0.0 < auVar71._12_4_);
      uVar41 = -(uint)(0.0 < *(float *)(pauVar38[1] + 0xc));
      uVar42 = -(uint)(0.0 < *(float *)(pauVar38[2] + 0xc));
      uVar43 = -(uint)(0.0 < *(float *)(pauVar38[3] + 0xc));
      auVar45._4_4_ = uVar41;
      auVar45._0_4_ = uVar40;
      auVar45._8_4_ = uVar42;
      auVar45._12_4_ = uVar43;
      uVar20 = movmskps((int)pauVar21,auVar45);
      pauVar21 = (undefined1 (*) [16])(ulonglong)uVar20;
      if (uVar20 != 0) {
        bVar33 = (char)((char)uVar20 << 4) >> 4;
        auVar60 = ZEXT816(0);
        bVar35 = ~bVar33;
        auVar67 = ZEXT816(0);
        if ((param_6 & 1) != 0) {
          if ((bVar35 & 9) == 0) {
            auVar67 = ZEXT416(*(uint *)(param_7 + uVar30));
          }
          else {
            pbVar18 = (byte *)(param_7 + uVar30);
            if ((uVar20 & 1) != 0) {
              auVar67 = ZEXT116(*pbVar18);
            }
            if ((uVar20 & 2) != 0) {
              auVar81._8_8_ = auVar67._8_8_;
              auVar81._0_8_ = auVar67._0_8_ | (ulonglong)pbVar18[1] << 8;
              auVar67 = pblendw(auVar67,auVar81,0xfd);
            }
            if ((uVar20 & 4) != 0) {
              bVar16 = auVar67[3];
              auVar67 = pmovzxwd(auVar67,auVar67);
              auVar67._0_8_ =
                   auVar67._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar18[2] << 0x10 |
                   (ulonglong)bVar16 << 0x18;
            }
            if ((uVar20 & 8) != 0) {
              bVar16 = auVar67[2];
              auVar67 = pmovzxwd(auVar67,auVar67);
              auVar67._0_8_ =
                   auVar67._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar16 << 0x10 |
                   (ulonglong)pbVar18[3] << 0x18;
            }
          }
        }
        if ((param_9 & 1) != 0) {
          if ((bVar35 & 9) == 0) {
            auVar60 = ZEXT416(*(uint *)(param_10 + uVar30));
          }
          else {
            pbVar18 = (byte *)(param_10 + uVar30);
            if ((uVar20 & 1) != 0) {
              auVar60 = ZEXT116(*pbVar18);
            }
            if ((uVar20 & 2) != 0) {
              auVar84._8_8_ = auVar60._8_8_;
              auVar84._0_8_ = auVar60._0_8_ | (ulonglong)pbVar18[1] << 8;
              auVar60 = pblendw(auVar60,auVar84,0xfd);
            }
            if ((uVar20 & 4) != 0) {
              bVar16 = auVar60[3];
              auVar60 = pmovzxwd(auVar60,auVar60);
              auVar60._0_8_ =
                   auVar60._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar18[2] << 0x10 |
                   (ulonglong)bVar16 << 0x18;
            }
            if ((uVar20 & 8) != 0) {
              bVar16 = auVar60[2];
              auVar60 = pmovzxwd(auVar60,auVar60);
              auVar60._0_8_ =
                   auVar60._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar16 << 0x10 |
                   (ulonglong)pbVar18[3] << 0x18;
            }
          }
        }
        auVar133._8_4_ = fVar56;
        auVar133._0_8_ = auVar71._0_8_;
        auVar133._12_4_ = fVar97;
        fVar110 = auVar71._0_4_;
        auVar129._4_4_ = fVar95;
        auVar129._0_4_ = fVar110;
        auVar129._12_4_ = fVar101;
        auVar129._8_4_ = fVar99;
        auVar67 = pmovsxbd(auVar67,auVar67);
        auVar68._0_4_ = auVar67._0_4_ << 2;
        auVar68._4_4_ = auVar67._4_4_ << 2;
        auVar68._8_4_ = auVar67._8_4_ << 2;
        auVar68._12_4_ = auVar67._12_4_ << 2;
        auVar68 = auVar68 & auVar45;
        auVar67 = insertps(ZEXT416(*(uint *)(param_8 + auVar68._0_4_)),
                           *(undefined4 *)(param_8 + auVar68._4_4_),0x10);
        auVar67 = insertps(auVar67,*(undefined4 *)(param_8 + auVar68._8_4_),0x20);
        auVar81 = insertps(auVar67,*(undefined4 *)(param_8 + auVar68._12_4_),0x30);
        auVar67 = pmovsxbd(auVar60,auVar60);
        auVar58._0_4_ = auVar67._0_4_ << 2;
        auVar58._4_4_ = auVar67._4_4_ << 2;
        auVar58._8_4_ = auVar67._8_4_ << 2;
        auVar58._12_4_ = auVar67._12_4_ << 2;
        auVar58 = auVar58 & auVar45;
        auVar67 = insertps(ZEXT416(*(uint *)(param_11 + auVar58._0_4_)),
                           *(undefined4 *)(param_11 + auVar58._4_4_),0x10);
        auVar67 = insertps(auVar67,*(undefined4 *)(param_11 + auVar58._8_4_),0x20);
        auVar67 = insertps(auVar67,*(undefined4 *)(param_11 + auVar58._12_4_),0x30);
        if ((bVar35 & 0xf) == 0) {
          auVar45 = *(undefined1 (*) [16])(param_2 + lVar37);
          auVar60 = *(undefined1 (*) [16])(param_2 + 0x10 + lVar37);
          puVar4 = (undefined4 *)(param_2 + 0x20 + lVar37);
          auVar84 = insertps(auVar60,auVar45,0x8c);
          local_178._4_4_ = auVar45._12_4_;
          local_178._0_4_ = auVar45._0_4_;
          fStack_170 = (float)auVar60._8_4_;
          fStack_16c = (float)puVar4[1];
          auVar69._4_4_ = auVar60._0_4_;
          auVar69._0_4_ = auVar45._4_4_;
          auVar69._8_4_ = auVar60._12_4_;
          auVar69._12_4_ = puVar4[2];
          auVar46._0_8_ = auVar84._0_8_;
          auVar46._8_4_ = *puVar4;
          auVar46._12_4_ = puVar4[3];
          auVar45 = *(undefined1 (*) [16])(param_3 + lVar37);
          auVar60 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar37);
          puVar4 = (undefined4 *)(param_3 + 0x20 + lVar37);
          auVar75._0_4_ = auVar45._0_4_;
          auVar84 = insertps(auVar60,auVar45,0x8c);
          auVar75._4_4_ = auVar45._12_4_;
          auVar75._8_4_ = auVar60._8_4_;
          auVar75._12_4_ = puVar4[1];
          auVar124._4_4_ = auVar60._0_4_;
          auVar124._0_4_ = auVar45._4_4_;
          auVar124._8_4_ = auVar60._12_4_;
          auVar124._12_4_ = puVar4[2];
          auVar111._0_8_ = auVar84._0_8_;
          auVar111._8_4_ = *puVar4;
          auVar111._12_4_ = puVar4[3];
          auVar45 = *(undefined1 (*) [16])(param_4 + lVar37);
          auVar60 = *(undefined1 (*) [16])(param_4 + 0x10 + lVar37);
          puVar4 = (undefined4 *)(param_4 + 0x20 + lVar37);
          auVar61._0_4_ = auVar45._0_4_;
          auVar84 = insertps(auVar60,auVar45,0x8c);
          auVar61._4_4_ = auVar45._12_4_;
          auVar61._8_4_ = auVar60._8_4_;
          auVar61._12_4_ = puVar4[1];
          auVar104._4_4_ = auVar60._0_4_;
          auVar104._0_4_ = auVar45._4_4_;
          auVar104._8_4_ = auVar60._12_4_;
          auVar104._12_4_ = puVar4[2];
          auVar92._0_8_ = auVar84._0_8_;
          auVar92._8_4_ = *puVar4;
          auVar92._12_4_ = puVar4[3];
        }
        else {
          auVar59._0_4_ = uVar40 & ___xmm_00000024000000180000000c00000000;
          auVar59._4_4_ = uVar41 & _UNK_150b50da4;
          auVar59._8_4_ = uVar42 & _UNK_150b50da8;
          auVar59._12_4_ = uVar43 & _UNK_150b50dac;
          lVar22 = extractps(auVar59,1);
          lVar36 = extractps(auVar59,2);
          lVar29 = extractps(auVar59,3);
          lVar25 = param_2 + lVar37;
          auVar60 = insertps(ZEXT416(*(uint *)(param_2 + lVar37)),*(undefined4 *)(lVar22 + lVar25),
                             0x10);
          auVar60 = insertps(auVar60,*(undefined4 *)(lVar36 + lVar25),0x20);
          _local_178 = insertps(auVar60,*(undefined4 *)(lVar29 + lVar25),0x30);
          auVar60 = auVar45 & ___xmm_000000280000001c0000001000000004;
          uVar28 = (ulonglong)auVar60._4_4_;
          uVar19 = (ulonglong)auVar60._8_4_;
          uVar34 = (ulonglong)auVar60._12_4_;
          uVar24 = (ulonglong)auVar60._0_4_;
          auVar60 = insertps(ZEXT416(*(uint *)(uVar24 + lVar25)),*(undefined4 *)(uVar28 + lVar25),
                             0x10);
          auVar60 = insertps(auVar60,*(undefined4 *)(uVar19 + lVar25),0x20);
          auVar69 = insertps(auVar60,*(undefined4 *)(uVar34 + lVar25),0x30);
          auVar45 = auVar45 & ___xmm_0000002c000000200000001400000008;
          uVar27 = (ulonglong)auVar45._4_4_;
          uVar32 = (ulonglong)auVar45._8_4_;
          uVar31 = (ulonglong)auVar45._12_4_;
          uVar26 = (ulonglong)auVar45._0_4_;
          auVar45 = insertps(ZEXT416(*(uint *)(uVar26 + lVar25)),*(undefined4 *)(uVar27 + lVar25),
                             0x10);
          auVar45 = insertps(auVar45,*(undefined4 *)(uVar32 + lVar25),0x20);
          auVar46 = insertps(auVar45,*(undefined4 *)(uVar31 + lVar25),0x30);
          lVar25 = param_3 + lVar37;
          auVar45 = insertps(ZEXT416(*(uint *)(param_3 + lVar37)),*(undefined4 *)(lVar22 + lVar25),
                             0x10);
          auVar45 = insertps(auVar45,*(undefined4 *)(lVar36 + lVar25),0x20);
          auVar75 = insertps(auVar45,*(undefined4 *)(lVar29 + lVar25),0x30);
          auVar45 = insertps(ZEXT416(*(uint *)(uVar24 + lVar25)),*(undefined4 *)(uVar28 + lVar25),
                             0x10);
          auVar45 = insertps(auVar45,*(undefined4 *)(uVar19 + lVar25),0x20);
          auVar124 = insertps(auVar45,*(undefined4 *)(uVar34 + lVar25),0x30);
          auVar45 = insertps(ZEXT416(*(uint *)(uVar26 + lVar25)),*(undefined4 *)(uVar27 + lVar25),
                             0x10);
          auVar45 = insertps(auVar45,*(undefined4 *)(uVar32 + lVar25),0x20);
          auVar111 = insertps(auVar45,*(undefined4 *)(uVar31 + lVar25),0x30);
          lVar25 = param_4 + lVar37;
          auVar45 = insertps(ZEXT416(*(uint *)(param_4 + lVar37)),*(undefined4 *)(lVar22 + lVar25),
                             0x10);
          auVar45 = insertps(auVar45,*(undefined4 *)(lVar36 + lVar25),0x20);
          auVar61 = insertps(auVar45,*(undefined4 *)(lVar29 + lVar25),0x30);
          auVar45 = insertps(ZEXT416(*(uint *)(uVar24 + lVar25)),*(undefined4 *)(uVar28 + lVar25),
                             0x10);
          auVar45 = insertps(auVar45,*(undefined4 *)(uVar19 + lVar25),0x20);
          auVar104 = insertps(auVar45,*(undefined4 *)(uVar34 + lVar25),0x30);
          auVar45 = insertps(ZEXT416(*(uint *)(uVar26 + lVar25)),*(undefined4 *)(uVar27 + lVar25),
                             0x10);
          auVar45 = insertps(auVar45,*(undefined4 *)(uVar32 + lVar25),0x20);
          auVar92 = insertps(auVar45,*(undefined4 *)(uVar31 + lVar25),0x30);
        }
        fVar80 = auVar81._0_4_;
        fVar89 = auVar81._4_4_;
        fVar90 = auVar81._8_4_;
        fVar91 = auVar81._12_4_;
        auVar140._0_8_ =
             CONCAT44(fVar95 - (fVar95 - auVar75._4_4_) * fVar89,
                      fVar110 - (fVar110 - auVar75._0_4_) * fVar80);
        auVar140._8_4_ = fVar99 - (fVar99 - auVar75._8_4_) * fVar90;
        auVar140._12_4_ = fVar101 - (fVar101 - auVar75._12_4_) * fVar91;
        pauVar21 = (undefined1 (*) [16])(ulonglong)bVar33;
        auVar76._4_4_ = fVar95;
        auVar76._0_4_ = fVar110;
        auVar76._8_4_ = fVar99;
        auVar76._12_4_ = fVar101;
        bVar39 = (bVar33 & 1) != 0;
        if (bVar39) {
          auVar76._8_4_ = auVar140._8_4_;
          auVar76._0_8_ = auVar140._0_8_;
          auVar76._12_4_ = auVar140._12_4_;
        }
        auVar134._12_4_ = fVar102;
        auVar134._8_4_ = fVar96;
        auVar134._0_8_ = auVar133._8_8_;
        auVar152._0_8_ =
             CONCAT44(fVar97 - (fVar97 - auVar124._4_4_) * fVar89,
                      fVar56 - (fVar56 - auVar124._0_4_) * fVar80);
        auVar152._8_4_ = fVar96 - (fVar96 - auVar124._8_4_) * fVar90;
        auVar152._12_4_ = fVar102 - (fVar102 - auVar124._12_4_) * fVar91;
        fVar95 = fVar103 - (fVar103 - auVar111._0_4_) * fVar80;
        fVar97 = fVar100 - (fVar100 - auVar111._4_4_) * fVar89;
        fVar99 = fVar98 - (fVar98 - auVar111._8_4_) * fVar90;
        fVar101 = fVar44 - (fVar44 - auVar111._12_4_) * fVar91;
        auVar82._8_4_ = fVar96;
        auVar82._0_8_ = auVar133._8_8_;
        auVar82._12_4_ = fVar102;
        auVar112._4_4_ = fVar100;
        auVar112._0_4_ = fVar103;
        auVar112._8_4_ = fVar98;
        auVar112._12_4_ = fVar44;
        if (bVar39) {
          auVar82._8_4_ = auVar152._8_4_;
          auVar82._0_8_ = auVar152._0_8_;
          auVar82._12_4_ = auVar152._12_4_;
          auVar112._4_4_ = fVar97;
          auVar112._0_4_ = fVar95;
          auVar112._8_4_ = fVar99;
          auVar112._12_4_ = fVar101;
          auVar45 = blendps(auVar129,auVar76,1);
          if ((bVar33 & 2) != 0) goto LAB_1405b8bdc;
LAB_1405b8964:
          auVar135 = blendps(auVar134,auVar82,1);
          auVar116 = blendps(auVar118,auVar112,1);
          auVar45 = blendps(auVar45,auVar45,2);
          auVar118 = auVar116;
          auVar60 = auVar135;
          if ((bVar33 & 4) == 0) goto LAB_1405b899a;
LAB_1405b8c1e:
          auVar126._8_4_ = auVar140._8_4_;
          auVar126._0_8_ = auVar140._0_8_;
          auVar126._12_4_ = auVar140._12_4_;
          auVar60 = blendps(auVar60,auVar135,2);
          auVar136._8_4_ = auVar152._8_4_;
          auVar136._0_8_ = auVar152._0_8_;
          auVar136._12_4_ = auVar152._12_4_;
          auVar118 = blendps(auVar118,auVar116,2);
          auVar117._4_4_ = fVar97;
          auVar117._0_4_ = fVar95;
          auVar117._8_4_ = fVar99;
          auVar117._12_4_ = fVar101;
          auVar45 = blendps(auVar45,auVar126,4);
          if (-1 < (char)bVar33) goto LAB_1405b8c5c;
LAB_1405b89cc:
          auVar60 = blendps(auVar60,auVar136,4);
          if ((char)bVar33 < '\0') goto LAB_1405b89d9;
LAB_1405b8c6d:
          auVar118 = blendps(auVar118,auVar117,4);
          auVar152 = auVar60;
        }
        else {
          auVar45 = blendps(auVar129,auVar76,1);
          if ((bVar33 & 2) == 0) goto LAB_1405b8964;
LAB_1405b8bdc:
          auVar125._8_4_ = auVar140._8_4_;
          auVar125._0_8_ = auVar140._0_8_;
          auVar125._12_4_ = auVar140._12_4_;
          auVar60 = blendps(auVar134,auVar82,1);
          auVar135._8_4_ = auVar152._8_4_;
          auVar135._0_8_ = auVar152._0_8_;
          auVar135._12_4_ = auVar152._12_4_;
          auVar118 = blendps(auVar118,auVar112,1);
          auVar116._4_4_ = fVar97;
          auVar116._0_4_ = fVar95;
          auVar116._8_4_ = fVar99;
          auVar116._12_4_ = fVar101;
          auVar45 = blendps(auVar45,auVar125,2);
          if ((bVar33 & 4) != 0) goto LAB_1405b8c1e;
LAB_1405b899a:
          auVar136 = blendps(auVar60,auVar135,2);
          auVar117 = blendps(auVar118,auVar116,2);
          auVar45 = blendps(auVar45,auVar45,4);
          auVar118 = auVar117;
          auVar60 = auVar136;
          if ((char)bVar33 < '\0') goto LAB_1405b89cc;
LAB_1405b8c5c:
          auVar60 = blendps(auVar60,auVar136,4);
          auVar140 = auVar45;
          if (-1 < (char)bVar33) goto LAB_1405b8c6d;
LAB_1405b89d9:
          auVar118 = blendps(auVar118,auVar117,4);
        }
        if (-1 < (char)bVar33) {
          fVar95 = auVar118._0_4_;
          fVar97 = auVar118._4_4_;
          fVar99 = auVar118._8_4_;
          fVar101 = auVar118._12_4_;
        }
        auVar81 = blendps(auVar45,auVar140,8);
        auVar60 = blendps(auVar60,auVar152,8);
        auVar9._4_4_ = fVar97;
        auVar9._0_4_ = fVar95;
        auVar9._8_4_ = fVar99;
        auVar9._12_4_ = fVar101;
        auVar45 = blendps(auVar118,auVar9,8);
        fVar96 = auVar60._0_4_;
        fVar98 = auVar60._4_4_;
        fVar100 = auVar60._8_4_;
        fVar99 = auVar60._12_4_;
        fVar101 = auVar67._0_4_;
        fVar102 = auVar67._4_4_;
        fVar44 = auVar67._8_4_;
        fVar56 = auVar67._12_4_;
        fVar95 = fVar96 - ((fVar96 - auVar69._0_4_) - auVar104._0_4_ * param_5) * fVar101;
        fVar97 = fVar98 - ((fVar98 - auVar69._4_4_) - auVar104._4_4_ * param_5) * fVar102;
        auVar70._0_8_ = CONCAT44(fVar97,fVar95);
        auVar70._8_4_ = fVar100 - ((fVar100 - auVar69._8_4_) - auVar104._8_4_ * param_5) * fVar44;
        auVar70._12_4_ = fVar99 - ((fVar99 - auVar69._12_4_) - auVar104._12_4_ * param_5) * fVar56;
        auVar47._0_8_ =
             CONCAT44(auVar45._4_4_ -
                      ((auVar45._4_4_ - auVar46._4_4_) - auVar92._4_4_ * param_5) * fVar102,
                      auVar45._0_4_ -
                      ((auVar45._0_4_ - auVar46._0_4_) - auVar92._0_4_ * param_5) * fVar101);
        auVar47._8_4_ =
             auVar45._8_4_ - ((auVar45._8_4_ - auVar46._8_4_) - auVar92._8_4_ * param_5) * fVar44;
        auVar47._12_4_ =
             auVar45._12_4_ -
             ((auVar45._12_4_ - auVar46._12_4_) - auVar92._12_4_ * param_5) * fVar56;
        auVar83._0_8_ =
             CONCAT44(auVar81._4_4_ -
                      ((auVar81._4_4_ - (float)local_178._4_4_) - auVar61._4_4_ * param_5) * fVar102
                      ,auVar81._0_4_ -
                       ((auVar81._0_4_ - (float)local_178._0_4_) - auVar61._0_4_ * param_5) *
                       fVar101);
        auVar83._8_4_ =
             auVar81._8_4_ - ((auVar81._8_4_ - fStack_170) - auVar61._8_4_ * param_5) * fVar44;
        auVar83._12_4_ =
             auVar81._12_4_ - ((auVar81._12_4_ - fStack_16c) - auVar61._12_4_ * param_5) * fVar56;
        if ((bVar33 & 1) == 0) {
          auVar118 = blendps(auVar81,auVar81,1);
          auVar62 = auVar45;
          auVar77 = auVar81;
          fVar95 = fVar96;
          fVar97 = fVar98;
          auVar113 = auVar118;
          if ((bVar33 & 2) == 0) goto LAB_1405b8a73;
LAB_1405b8cad:
          uVar74 = auVar77._0_4_;
          auVar113._8_4_ = auVar83._8_4_;
          auVar113._0_8_ = auVar83._0_8_;
          auVar113._12_4_ = auVar83._12_4_;
          auVar15._4_4_ = fVar97;
          auVar15._0_4_ = fVar95;
          auVar15._8_4_ = fVar100;
          auVar15._12_4_ = fVar99;
          auVar67 = blendps(auVar60,auVar15,1);
          auVar141._8_4_ = auVar70._8_4_;
          auVar141._0_8_ = auVar70._0_8_;
          auVar141._12_4_ = auVar70._12_4_;
          auVar45 = blendps(auVar45,auVar62,1);
          uVar57 = auVar62._0_4_;
          auVar119._8_4_ = auVar47._8_4_;
          auVar119._0_8_ = auVar47._0_8_;
          auVar119._12_4_ = auVar47._12_4_;
          auVar118 = blendps(auVar118,auVar113,2);
          auVar145 = auVar118;
          if ((bVar33 & 4) != 0) goto LAB_1405b8cee;
LAB_1405b8aa9:
          auVar137 = blendps(auVar67,auVar141,2);
          auVar120 = blendps(auVar45,auVar119,2);
          auVar45 = blendps(auVar145,auVar145,4);
          auVar67 = auVar120;
          auVar60 = auVar137;
          if ((char)bVar33 < '\0') goto LAB_1405b8adb;
LAB_1405b8d2b:
          auVar83 = auVar45;
          auVar118 = blendps(auVar60,auVar137,4);
          auVar45 = auVar83;
          if (-1 < (char)bVar33) goto LAB_1405b8d3c;
LAB_1405b8ae8:
          auVar67 = blendps(auVar67,auVar120,4);
        }
        else {
          auVar77._8_4_ = auVar83._8_4_;
          auVar77._0_8_ = auVar83._0_8_;
          auVar77._12_4_ = auVar83._12_4_;
          auVar62._8_4_ = auVar47._8_4_;
          auVar62._0_8_ = auVar47._0_8_;
          auVar62._12_4_ = auVar47._12_4_;
          auVar118 = blendps(auVar81,auVar77,1);
          fVar100 = auVar70._8_4_;
          fVar99 = auVar70._12_4_;
          auVar113 = auVar118;
          if ((bVar33 & 2) != 0) goto LAB_1405b8cad;
LAB_1405b8a73:
          uVar74 = auVar77._0_4_;
          auVar10._4_4_ = fVar97;
          auVar10._0_4_ = fVar95;
          auVar10._8_4_ = fVar100;
          auVar10._12_4_ = fVar99;
          auVar67 = blendps(auVar60,auVar10,1);
          auVar119 = blendps(auVar45,auVar62,1);
          uVar57 = auVar62._0_4_;
          auVar118 = blendps(auVar113,auVar113,2);
          auVar45 = auVar119;
          auVar141 = auVar67;
          auVar145 = auVar118;
          if ((bVar33 & 4) == 0) goto LAB_1405b8aa9;
LAB_1405b8cee:
          auVar145._8_4_ = auVar83._8_4_;
          auVar145._0_8_ = auVar83._0_8_;
          auVar145._12_4_ = auVar83._12_4_;
          auVar60 = blendps(auVar67,auVar141,2);
          auVar137._8_4_ = auVar70._8_4_;
          auVar137._0_8_ = auVar70._0_8_;
          auVar137._12_4_ = auVar70._12_4_;
          auVar67 = blendps(auVar45,auVar119,2);
          auVar120._8_4_ = auVar47._8_4_;
          auVar120._0_8_ = auVar47._0_8_;
          auVar120._12_4_ = auVar47._12_4_;
          auVar45 = blendps(auVar118,auVar145,4);
          if (-1 < (char)bVar33) goto LAB_1405b8d2b;
LAB_1405b8adb:
          auVar118 = blendps(auVar60,auVar137,4);
          if ((char)bVar33 < '\0') goto LAB_1405b8ae8;
LAB_1405b8d3c:
          auVar67 = blendps(auVar67,auVar120,4);
          auVar70 = auVar118;
        }
        auVar60 = auVar67;
        if ((char)bVar33 < '\0') {
          auVar60 = auVar47;
        }
        if ((bVar35 & 0xf) == 0) {
          auVar60 = blendps(auVar60,auVar67,7);
          auVar81 = blendps(auVar70,auVar118,7);
          auVar84 = blendps(auVar83,auVar45,7);
          auVar85._0_8_ = CONCAT44(auVar81._8_4_,auVar84._8_4_);
          auVar85._8_4_ = auVar84._12_4_;
          auVar85._12_4_ = auVar81._12_4_;
          auVar130._0_8_ = auVar45._0_8_;
          auVar130._8_4_ = auVar45._4_4_;
          auVar130._12_4_ = auVar118._4_4_;
          auVar121._0_8_ = auVar67._0_8_;
          auVar121._8_4_ = auVar67._4_4_;
          auVar121._12_4_ = *(float *)(pauVar38[1] + 0xc);
          auVar48._0_8_ = CONCAT44(*(float *)(pauVar38[2] + 0xc),auVar60._8_4_);
          auVar48._8_4_ = auVar60._12_4_;
          auVar48._12_4_ = *(float *)(pauVar38[3] + 0xc);
          *(ulonglong *)*pauVar38 = CONCAT44(auVar118._0_4_,auVar45._0_4_);
          *(ulonglong *)(*pauVar38 + 8) = CONCAT44(auVar71._12_4_,auVar67._0_4_);
          *(longlong *)pauVar38[1] = auVar130._8_8_;
          *(longlong *)(pauVar38[1] + 8) = auVar121._8_8_;
          auVar71._8_8_ = auVar48._0_8_;
          auVar71._0_8_ = auVar85._0_8_;
          pauVar38[2] = auVar71;
          *(longlong *)pauVar38[3] = auVar85._8_8_;
          *(longlong *)(pauVar38[3] + 8) = auVar48._8_8_;
        }
        else {
          if ((bVar33 & 1) == 0) {
            pauVar21 = (undefined1 (*) [16])(ulonglong)(bVar33 & 0xf);
            if ((bVar33 & 2) == 0) goto LAB_1405b8b21;
LAB_1405b8dd3:
            uVar5 = extractps(auVar113,1);
            *(undefined8 *)pauVar38[1] = uVar5;
            if (((ulonglong)pauVar21 & 4) != 0) goto LAB_1405b8de4;
LAB_1405b8b2a:
            if (-1 < (char)bVar33) goto LAB_1405b8b33;
LAB_1405b8df5:
            uVar5 = extractps(auVar83,3);
            *(undefined8 *)pauVar38[3] = uVar5;
            if (((ulonglong)pauVar21 & 1) != 0) goto LAB_1405b8e06;
LAB_1405b8b3c:
            if (((ulonglong)pauVar21 & 2) == 0) goto LAB_1405b8b4d;
LAB_1405b8e1d:
            auVar45 = *pauVar3;
            uVar5 = extractps(auVar141,1);
            *(undefined8 *)(pauVar38[1] + 4) = uVar5;
            if (((ulonglong)pauVar21 & 4) != 0) goto LAB_1405b8e36;
LAB_1405b8b5e:
            auVar118 = *pauVar2;
            if (-1 < (char)bVar33) goto LAB_1405b8b67;
LAB_1405b8e47:
            uVar5 = extractps(auVar70,3);
            *(undefined8 *)(pauVar38[3] + 4) = uVar5;
            if (((ulonglong)pauVar21 & 1) != 0) goto LAB_1405b8e58;
LAB_1405b8b70:
            if (((ulonglong)pauVar21 & 2) == 0) goto LAB_1405b8b79;
LAB_1405b8e67:
            uVar5 = extractps(auVar119,1);
            *(undefined8 *)(pauVar38[1] + 8) = uVar5;
            if (((ulonglong)pauVar21 & 4) != 0) goto LAB_1405b8e78;
LAB_1405b8b82:
            if (-1 < (char)bVar33) goto LAB_1405b8b93;
LAB_1405b8e91:
            auVar67 = *pauVar1;
            uVar5 = extractps(auVar60,3);
            *(undefined8 *)(pauVar38[3] + 8) = uVar5;
          }
          else {
            *(undefined4 *)*pauVar38 = uVar74;
            pauVar21 = (undefined1 (*) [16])(ulonglong)(bVar33 & 0xf);
            if ((bVar33 & 2) != 0) goto LAB_1405b8dd3;
LAB_1405b8b21:
            if (((ulonglong)pauVar21 & 4) == 0) goto LAB_1405b8b2a;
LAB_1405b8de4:
            uVar5 = extractps(auVar145,2);
            *(undefined8 *)pauVar38[2] = uVar5;
            if ((char)bVar33 < '\0') goto LAB_1405b8df5;
LAB_1405b8b33:
            if (((ulonglong)pauVar21 & 1) == 0) goto LAB_1405b8b3c;
LAB_1405b8e06:
            *(float *)(*pauVar38 + 4) = fVar95;
            if (((ulonglong)pauVar21 & 2) != 0) goto LAB_1405b8e1d;
LAB_1405b8b4d:
            auVar45 = *pauVar3;
            if (((ulonglong)pauVar21 & 4) == 0) goto LAB_1405b8b5e;
LAB_1405b8e36:
            auVar118 = *pauVar2;
            uVar5 = extractps(auVar137,2);
            *(undefined8 *)(pauVar38[2] + 4) = uVar5;
            if ((char)bVar33 < '\0') goto LAB_1405b8e47;
LAB_1405b8b67:
            if (((ulonglong)pauVar21 & 1) == 0) goto LAB_1405b8b70;
LAB_1405b8e58:
            *(undefined4 *)(*pauVar38 + 8) = uVar57;
            if (((ulonglong)pauVar21 & 2) != 0) goto LAB_1405b8e67;
LAB_1405b8b79:
            if (((ulonglong)pauVar21 & 4) == 0) goto LAB_1405b8b82;
LAB_1405b8e78:
            uVar5 = extractps(auVar120,2);
            *(undefined8 *)(pauVar38[2] + 8) = uVar5;
            if ((char)bVar33 < '\0') goto LAB_1405b8e91;
LAB_1405b8b93:
            auVar67 = *pauVar1;
          }
          if (((ulonglong)pauVar21 & 1) != 0) {
            uVar5 = extractps(auVar71,3);
            *(undefined8 *)(*pauVar38 + 0xc) = uVar5;
          }
          if (((ulonglong)pauVar21 & 2) != 0) {
            uVar5 = extractps(auVar67,3);
            *(undefined8 *)(pauVar38[1] + 0xc) = uVar5;
          }
          if (((ulonglong)pauVar21 & 4) != 0) {
            uVar5 = extractps(auVar118,3);
            *(undefined8 *)(pauVar38[2] + 0xc) = uVar5;
          }
          if ((char)bVar33 < '\0') {
            uVar5 = extractps(auVar45,3);
            *(undefined8 *)(pauVar38[3] + 0xc) = uVar5;
          }
        }
      }
      uVar30 = uVar30 + 4;
      lVar37 = lVar37 + 0x30;
      pauVar38 = pauVar38 + 4;
    } while ((int)uVar30 < (int)(uVar23 & 0xfffffffc));
    if ((int)param_12 <= (int)uVar30) {
      return;
    }
  }
  uVar23 = (uint)uVar30;
  bVar39 = (int)(uVar23 | (uint)__xmm_00000003000000020000000100000000) < (int)param_12;
  uVar20 = -(uint)bVar39;
  bVar6 = (int)(uVar23 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_12;
  uVar40 = -(uint)bVar6;
  bVar7 = (int)(uVar23 | _UNK_150631e08) < (int)param_12;
  uVar41 = -(uint)bVar7;
  bVar8 = (int)(uVar23 | _UNK_150631e0c) < (int)param_12;
  uVar42 = -(uint)bVar8;
  uVar30 = uVar30 & 0xffffffff;
  param_1 = param_1 + uVar30;
  auVar11._4_4_ = uVar40;
  auVar11._0_4_ = uVar20;
  auVar11._8_4_ = uVar41;
  auVar11._12_4_ = uVar42;
  iVar17 = movmskps(uVar23 * 0x10,auVar11);
  if (iVar17 == 0xf) {
    auVar71 = *param_1;
    auVar45 = param_1[2];
    auVar87._8_4_ = auVar71._4_4_;
    auVar87._0_8_ = auVar71._0_8_;
    auVar87._12_4_ = *(undefined4 *)(param_1[1] + 4);
    auVar72._4_4_ = *(undefined4 *)param_1[1];
    auVar72._0_4_ = auVar71._0_4_;
    auVar50._0_8_ = CONCAT44(*(undefined4 *)(param_1[1] + 8),auVar71._8_4_);
    auVar50._8_4_ = auVar71._12_4_;
    auVar50._12_4_ = *(undefined4 *)(param_1[1] + 0xc);
    auVar79._0_8_ = auVar45._0_8_;
    auVar79._8_4_ = auVar45._4_4_;
    auVar79._12_4_ = *(undefined4 *)(param_1[3] + 4);
    auVar78._8_8_ = auVar79._8_8_;
    auVar72._12_4_ = *(undefined4 *)param_1[3];
    auVar72._8_4_ = auVar45._0_4_;
    auVar106._0_8_ = CONCAT44(*(undefined4 *)(param_1[3] + 8),auVar45._8_4_);
    auVar106._8_4_ = auVar45._12_4_;
    auVar106._12_4_ = *(undefined4 *)(param_1[3] + 0xc);
    auVar78._0_8_ = auVar87._8_8_;
    auVar86._8_8_ = auVar106._0_8_;
    auVar86._0_8_ = auVar50._0_8_;
    auVar105._8_8_ = auVar106._8_8_;
    auVar105._0_8_ = auVar50._8_8_;
  }
  else {
    auVar49._0_4_ = ___xmm_00000030000000200000001000000000 & uVar20;
    auVar49._4_4_ = _UNK_150b511c4 & uVar40;
    auVar49._8_4_ = _UNK_150b511c8 & uVar41;
    auVar49._12_4_ = _UNK_150b511cc & uVar42;
    lVar37 = extractps(auVar49,1);
    lVar22 = extractps(auVar49,2);
    lVar25 = extractps(auVar49,3);
    auVar71 = insertps(ZEXT416(*(uint *)*param_1),*(undefined4 *)(*param_1 + lVar37),0x10);
    auVar71 = insertps(auVar71,*(undefined4 *)(*param_1 + lVar22),0x20);
    auVar72 = insertps(auVar71,*(undefined4 *)(*param_1 + lVar25),0x30);
    auVar71 = insertps(ZEXT416(*(uint *)(*param_1 +
                                        (___xmm_00000034000000240000001400000004 & uVar20))),
                       *(undefined4 *)(*param_1 + (_UNK_150b511d4 & uVar40)),0x10);
    auVar71 = insertps(auVar71,*(undefined4 *)(*param_1 + (_UNK_150b511d8 & uVar41)),0x20);
    auVar78 = insertps(auVar71,*(undefined4 *)(*param_1 + (_UNK_150b511dc & uVar42)),0x30);
    auVar71 = insertps(ZEXT416(*(uint *)(*param_1 +
                                        (___xmm_00000038000000280000001800000008 & uVar20))),
                       *(undefined4 *)(*param_1 + (_UNK_150b511e4 & uVar40)),0x10);
    auVar71 = insertps(auVar71,*(undefined4 *)(*param_1 + (_UNK_150b511e8 & uVar41)),0x20);
    auVar86 = insertps(auVar71,*(undefined4 *)(*param_1 + (_UNK_150b511ec & uVar42)),0x30);
    param_12 = _UNK_150b511fc & uVar42;
    auVar71 = insertps(ZEXT416(*(uint *)(*param_1 +
                                        (___xmm_0000003c0000002c0000001c0000000c & uVar20))),
                       *(undefined4 *)(*param_1 + (_UNK_150b511f4 & uVar40)),0x10);
    auVar71 = insertps(auVar71,*(undefined4 *)(*param_1 + (_UNK_150b511f8 & uVar41)),0x20);
    auVar105 = insertps(auVar71,*(undefined4 *)(*param_1 + param_12),0x30);
  }
  auVar51 = (undefined1  [16])0x0;
  fVar95 = auVar105._0_4_;
  fVar97 = auVar105._4_4_;
  fVar100 = auVar105._8_4_;
  fVar99 = auVar105._12_4_;
  auVar93._0_4_ = -(uint)(0.0 < fVar95 && bVar39);
  auVar93._4_4_ = -(uint)(0.0 < fVar97 && bVar6);
  auVar93._8_4_ = -(uint)(0.0 < fVar100 && bVar7);
  auVar93._12_4_ = -(uint)(0.0 < fVar99 && bVar8);
  uVar23 = movmskps(param_12,auVar93);
  if (uVar23 != 0) {
    bVar33 = (char)((char)uVar23 << 4) >> 4;
    bVar35 = ~bVar33;
    if ((param_6 & 1) != 0) {
      if ((bVar35 & 9) == 0) {
        auVar51 = ZEXT416(*(uint *)(param_7 + uVar30));
      }
      else {
        pbVar18 = (byte *)(param_7 + uVar30);
        if ((uVar23 & 1) != 0) {
          auVar51 = ZEXT116(*pbVar18);
        }
        if ((uVar23 & 2) != 0) {
          auVar65._8_8_ = auVar51._8_8_;
          auVar65._0_8_ = auVar51._0_8_ | (ulonglong)pbVar18[1] << 8;
          auVar51 = pblendw(auVar51,auVar65,0xfd);
        }
        if ((uVar23 & 4) != 0) {
          bVar16 = auVar51[3];
          auVar71 = pmovzxwd(auVar51,auVar51);
          auVar51._8_8_ = auVar71._8_8_;
          auVar51._0_8_ =
               auVar71._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar18[2] << 0x10 |
               (ulonglong)bVar16 << 0x18;
        }
        if ((uVar23 & 8) != 0) {
          bVar16 = auVar51[2];
          auVar71 = pmovzxwd(auVar51,auVar51);
          auVar51._8_8_ = auVar71._8_8_;
          auVar51._0_8_ =
               auVar71._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar16 << 0x10 |
               (ulonglong)pbVar18[3] << 0x18;
        }
      }
    }
    auVar109 = ZEXT816(0);
    if ((param_9 & 1) != 0) {
      if ((bVar35 & 9) == 0) {
        auVar109 = ZEXT416(*(uint *)(param_10 + uVar30));
      }
      else {
        pbVar18 = (byte *)(param_10 + uVar30);
        if ((uVar23 & 1) != 0) {
          auVar109 = ZEXT116(*pbVar18);
        }
        if ((uVar23 & 2) != 0) {
          auVar66._8_8_ = auVar109._8_8_;
          auVar66._0_8_ = auVar109._0_8_ | (ulonglong)pbVar18[1] << 8;
          auVar109 = pblendw(auVar109,auVar66,0xfd);
        }
        if ((uVar23 & 4) != 0) {
          bVar16 = auVar109[3];
          auVar71 = pmovzxwd(auVar109,auVar109);
          auVar109._8_8_ = auVar71._8_8_;
          auVar109._0_8_ =
               auVar71._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar18[2] << 0x10 |
               (ulonglong)bVar16 << 0x18;
        }
        if ((uVar23 & 8) != 0) {
          bVar16 = auVar109[2];
          auVar71 = pmovzxwd(auVar109,auVar109);
          auVar109._8_8_ = auVar71._8_8_;
          auVar109._0_8_ =
               auVar71._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar16 << 0x10 |
               (ulonglong)pbVar18[3] << 0x18;
        }
      }
    }
    auVar71 = pmovsxbd(auVar51,auVar51);
    auVar52._0_4_ = auVar71._0_4_ << 2;
    auVar52._4_4_ = auVar71._4_4_ << 2;
    auVar52._8_4_ = auVar71._8_4_ << 2;
    auVar52._12_4_ = auVar71._12_4_ << 2;
    auVar52 = auVar52 & auVar93;
    auVar71 = insertps(ZEXT416(*(uint *)(param_8 + auVar52._0_4_)),
                       *(undefined4 *)(param_8 + auVar52._4_4_),0x10);
    auVar71 = insertps(auVar71,*(undefined4 *)(param_8 + auVar52._8_4_),0x20);
    auVar71 = insertps(auVar71,*(undefined4 *)(param_8 + auVar52._12_4_),0x30);
    pauVar21 = (undefined1 (*) [16])(param_2 + uVar30 * 0xc);
    if ((bVar35 & 0xf) == 0) {
      auVar45 = *pauVar21;
      auVar118 = pauVar21[1];
      auVar67 = insertps(auVar118,auVar45,0x8c);
      local_168._4_4_ = auVar45._12_4_;
      local_168._0_4_ = auVar45._0_4_;
      fStack_160 = (float)auVar118._8_4_;
      fStack_15c = (float)*(undefined4 *)(pauVar21[2] + 4);
      local_178._4_4_ = auVar118._0_4_;
      local_178._0_4_ = auVar45._4_4_;
      fStack_170 = (float)auVar118._12_4_;
      fStack_16c = (float)*(undefined4 *)(pauVar21[2] + 8);
      auVar122._0_8_ = auVar67._0_8_;
      auVar122._8_4_ = *(undefined4 *)pauVar21[2];
      auVar122._12_4_ = *(undefined4 *)(pauVar21[2] + 0xc);
      lVar37 = uVar30 * 0xc;
      auVar45 = *(undefined1 (*) [16])(param_3 + lVar37);
      auVar118 = *(undefined1 (*) [16])(param_3 + 0x10 + lVar37);
      puVar4 = (undefined4 *)(param_3 + 0x20 + lVar37);
      auVar142._0_4_ = auVar45._0_4_;
      auVar67 = insertps(auVar118,auVar45,0x8c);
      auVar142._4_4_ = auVar45._12_4_;
      auVar142._8_4_ = auVar118._8_4_;
      auVar142._12_4_ = puVar4[1];
      auVar146._4_4_ = auVar118._0_4_;
      auVar146._0_4_ = auVar45._4_4_;
      auVar146._8_4_ = auVar118._12_4_;
      auVar146._12_4_ = puVar4[2];
      auVar153._0_8_ = auVar67._0_8_;
      auVar153._8_4_ = *puVar4;
      auVar153._12_4_ = puVar4[3];
      auVar45 = *(undefined1 (*) [16])(param_4 + lVar37);
      auVar118 = *(undefined1 (*) [16])(param_4 + 0x10 + lVar37);
      puVar4 = (undefined4 *)(param_4 + 0x20 + lVar37);
      auVar127._0_4_ = auVar45._0_4_;
      auVar67 = insertps(auVar118,auVar45,0x8c);
      auVar127._4_4_ = auVar45._12_4_;
      auVar127._8_4_ = auVar118._8_4_;
      auVar127._12_4_ = puVar4[1];
      auVar131._4_4_ = auVar118._0_4_;
      auVar131._0_4_ = auVar45._4_4_;
      auVar131._8_4_ = auVar118._12_4_;
      auVar131._12_4_ = puVar4[2];
      auVar138._0_8_ = auVar67._0_8_;
      auVar138._8_4_ = *puVar4;
      auVar138._12_4_ = puVar4[3];
    }
    else {
      auVar63._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar93._0_4_;
      auVar63._4_4_ = _UNK_150b50da4 & auVar93._4_4_;
      auVar63._8_4_ = _UNK_150b50da8 & auVar93._8_4_;
      auVar63._12_4_ = _UNK_150b50dac & auVar93._12_4_;
      lVar22 = extractps(auVar63,1);
      lVar29 = extractps(auVar63,2);
      lVar36 = extractps(auVar63,3);
      auVar45 = insertps(ZEXT416(*(uint *)*pauVar21),*(undefined4 *)(*pauVar21 + lVar22),0x10);
      auVar45 = insertps(auVar45,*(undefined4 *)(*pauVar21 + lVar29),0x20);
      _local_168 = insertps(auVar45,*(undefined4 *)(*pauVar21 + lVar36),0x30);
      auVar45 = ___xmm_000000280000001c0000001000000004 & auVar93;
      uVar28 = (ulonglong)auVar45._4_4_;
      uVar24 = (ulonglong)auVar45._8_4_;
      uVar26 = (ulonglong)auVar45._12_4_;
      uVar31 = (ulonglong)auVar45._0_4_;
      auVar45 = insertps(ZEXT416(*(uint *)(*pauVar21 + uVar31)),*(undefined4 *)(*pauVar21 + uVar28),
                         0x10);
      auVar45 = insertps(auVar45,*(undefined4 *)(*pauVar21 + uVar24),0x20);
      _local_178 = insertps(auVar45,*(undefined4 *)(*pauVar21 + uVar26),0x30);
      auVar45 = ___xmm_0000002c000000200000001400000008 & auVar93;
      uVar19 = (ulonglong)auVar45._4_4_;
      uVar34 = (ulonglong)auVar45._8_4_;
      uVar32 = (ulonglong)auVar45._12_4_;
      uVar27 = (ulonglong)auVar45._0_4_;
      auVar45 = insertps(ZEXT416(*(uint *)(*pauVar21 + uVar27)),*(undefined4 *)(*pauVar21 + uVar19),
                         0x10);
      auVar45 = insertps(auVar45,*(undefined4 *)(*pauVar21 + uVar34),0x20);
      auVar122 = insertps(auVar45,*(undefined4 *)(*pauVar21 + uVar32),0x30);
      lVar25 = uVar30 * 0xc;
      lVar37 = param_3 + lVar25;
      auVar45 = insertps(ZEXT416(*(uint *)(param_3 + lVar25)),*(undefined4 *)(lVar22 + lVar37),0x10)
      ;
      auVar45 = insertps(auVar45,*(undefined4 *)(lVar29 + lVar37),0x20);
      auVar142 = insertps(auVar45,*(undefined4 *)(lVar36 + lVar37),0x30);
      auVar45 = insertps(ZEXT416(*(uint *)(uVar31 + lVar37)),*(undefined4 *)(uVar28 + lVar37),0x10);
      auVar45 = insertps(auVar45,*(undefined4 *)(uVar24 + lVar37),0x20);
      auVar146 = insertps(auVar45,*(undefined4 *)(uVar26 + lVar37),0x30);
      auVar45 = insertps(ZEXT416(*(uint *)(uVar27 + lVar37)),*(undefined4 *)(uVar19 + lVar37),0x10);
      auVar45 = insertps(auVar45,*(undefined4 *)(uVar34 + lVar37),0x20);
      auVar153 = insertps(auVar45,*(undefined4 *)(uVar32 + lVar37),0x30);
      lVar37 = param_4 + lVar25;
      auVar45 = insertps(ZEXT416(*(uint *)(param_4 + lVar25)),*(undefined4 *)(lVar22 + lVar37),0x10)
      ;
      auVar45 = insertps(auVar45,*(undefined4 *)(lVar29 + lVar37),0x20);
      auVar127 = insertps(auVar45,*(undefined4 *)(lVar36 + lVar37),0x30);
      auVar45 = insertps(ZEXT416(*(uint *)(uVar31 + lVar37)),*(undefined4 *)(uVar28 + lVar37),0x10);
      auVar45 = insertps(auVar45,*(undefined4 *)(uVar24 + lVar37),0x20);
      auVar131 = insertps(auVar45,*(undefined4 *)(uVar26 + lVar37),0x30);
      auVar45 = insertps(ZEXT416(*(uint *)(uVar27 + lVar37)),*(undefined4 *)(uVar19 + lVar37),0x10);
      auVar45 = insertps(auVar45,*(undefined4 *)(uVar34 + lVar37),0x20);
      auVar138 = insertps(auVar45,*(undefined4 *)(uVar32 + lVar37),0x30);
    }
    fVar96 = auVar71._0_4_;
    fVar98 = auVar71._4_4_;
    fVar101 = auVar71._8_4_;
    fVar102 = auVar71._12_4_;
    auVar147._0_4_ = (auVar86._0_4_ - auVar153._0_4_) * fVar96;
    auVar147._4_4_ = (auVar86._4_4_ - auVar153._4_4_) * fVar98;
    auVar147._8_4_ = (auVar86._8_4_ - auVar153._8_4_) * fVar101;
    auVar147._12_4_ = (auVar86._12_4_ - auVar153._12_4_) * fVar102;
    auVar64._0_8_ =
         CONCAT44(auVar72._4_4_ - (auVar72._4_4_ - auVar142._4_4_) * fVar98,
                  auVar72._0_4_ - (auVar72._0_4_ - auVar142._0_4_) * fVar96);
    auVar64._8_4_ = auVar72._8_4_ - (auVar72._8_4_ - auVar142._8_4_) * fVar101;
    auVar64._12_4_ = auVar72._12_4_ - (auVar72._12_4_ - auVar142._12_4_) * fVar102;
    bVar39 = (bVar33 & 1) != 0;
    auVar154 = auVar72;
    if (bVar39) {
      auVar154._8_4_ = auVar64._8_4_;
      auVar154._0_8_ = auVar64._0_8_;
      auVar154._12_4_ = auVar64._12_4_;
    }
    auVar114._0_8_ =
         CONCAT44(auVar78._4_4_ - (auVar78._4_4_ - auVar146._4_4_) * fVar98,
                  auVar78._0_4_ - (auVar78._0_4_ - auVar146._0_4_) * fVar96);
    auVar114._8_4_ = auVar78._8_4_ - (auVar78._8_4_ - auVar146._8_4_) * fVar101;
    auVar114._12_4_ = auVar78._12_4_ - (auVar78._12_4_ - auVar146._12_4_) * fVar102;
    fVar96 = auVar86._0_4_ - auVar147._0_4_;
    fVar98 = auVar86._4_4_ - auVar147._4_4_;
    fVar101 = auVar86._8_4_ - auVar147._8_4_;
    fVar102 = auVar86._12_4_ - auVar147._12_4_;
    auVar53 = auVar86;
    auVar143 = auVar78;
    if (bVar39) {
      auVar143._8_4_ = auVar114._8_4_;
      auVar143._0_8_ = auVar114._0_8_;
      auVar143._12_4_ = auVar114._12_4_;
      auVar53._4_4_ = fVar98;
      auVar53._0_4_ = fVar96;
      auVar53._8_4_ = fVar101;
      auVar53._12_4_ = fVar102;
    }
    auVar45 = pmovsxbd(auVar147,auVar109);
    auVar71 = blendps(auVar72,auVar154,1);
    if ((bVar33 & 2) == 0) {
      auVar148._0_4_ = auVar45._0_4_ << 2;
      auVar148._4_4_ = auVar45._4_4_ << 2;
      auVar148._8_4_ = auVar45._8_4_ << 2;
      auVar148._12_4_ = auVar45._12_4_ << 2;
      auVar45 = blendps(auVar78,auVar143,1);
      auVar118 = blendps(auVar86,auVar53,1);
      auVar108 = auVar45;
      auVar149 = auVar118;
      auVar156 = auVar71;
    }
    else {
      auVar156._8_4_ = auVar64._8_4_;
      auVar156._0_8_ = auVar64._0_8_;
      auVar156._12_4_ = auVar64._12_4_;
      auVar148._0_4_ = auVar45._0_4_ << 2;
      auVar148._4_4_ = auVar45._4_4_ << 2;
      auVar148._8_4_ = auVar45._8_4_ << 2;
      auVar148._12_4_ = auVar45._12_4_ << 2;
      auVar45 = blendps(auVar78,auVar143,1);
      auVar108._8_4_ = auVar114._8_4_;
      auVar108._0_8_ = auVar114._0_8_;
      auVar108._12_4_ = auVar114._12_4_;
      auVar118 = blendps(auVar86,auVar53,1);
      auVar149._4_4_ = fVar98;
      auVar149._0_4_ = fVar96;
      auVar149._8_4_ = fVar101;
      auVar149._12_4_ = fVar102;
    }
    auVar93 = auVar93 & auVar148;
    auVar71 = blendps(auVar71,auVar156,2);
    bVar39 = (bVar33 & 4) != 0;
    auVar54 = auVar71;
    if (bVar39) {
      auVar54._8_4_ = auVar64._8_4_;
      auVar54._0_8_ = auVar64._0_8_;
      auVar54._12_4_ = auVar64._12_4_;
    }
    auVar45 = blendps(auVar45,auVar108,2);
    auVar155 = auVar45;
    if (bVar39) {
      auVar155._8_4_ = auVar114._8_4_;
      auVar155._0_8_ = auVar114._0_8_;
      auVar155._12_4_ = auVar114._12_4_;
    }
    auVar118 = blendps(auVar118,auVar149,2);
    auVar150 = auVar118;
    if (bVar39) {
      auVar150._4_4_ = fVar98;
      auVar150._0_4_ = fVar96;
      auVar150._8_4_ = fVar101;
      auVar150._12_4_ = fVar102;
    }
    auVar67 = insertps(ZEXT416(*(uint *)(param_11 + auVar93._0_4_)),
                       *(undefined4 *)(param_11 + auVar93._4_4_),0x10);
    auVar71 = blendps(auVar71,auVar54,4);
    bVar39 = -1 < (char)bVar33;
    if (bVar39) {
      auVar64 = auVar71;
    }
    auVar67 = insertps(auVar67,*(undefined4 *)(param_11 + auVar93._8_4_),0x20);
    auVar45 = blendps(auVar45,auVar155,4);
    if (bVar39) {
      auVar114 = auVar45;
    }
    auVar67 = insertps(auVar67,*(undefined4 *)(param_11 + auVar93._12_4_),0x30);
    auVar118 = blendps(auVar118,auVar150,4);
    if (bVar39) {
      fVar96 = auVar118._0_4_;
      fVar98 = auVar118._4_4_;
      fVar101 = auVar118._8_4_;
      fVar102 = auVar118._12_4_;
    }
    auVar71 = blendps(auVar71,auVar64,8);
    auVar45 = blendps(auVar45,auVar114,8);
    auVar12._4_4_ = fVar98;
    auVar12._0_4_ = fVar96;
    auVar12._8_4_ = fVar101;
    auVar12._12_4_ = fVar102;
    auVar118 = blendps(auVar118,auVar12,8);
    fVar96 = auVar118._0_4_;
    fVar98 = auVar118._4_4_;
    fVar101 = auVar118._8_4_;
    fVar102 = auVar118._12_4_;
    fVar103 = auVar67._0_4_;
    fVar110 = auVar67._4_4_;
    fVar80 = auVar67._8_4_;
    fVar89 = auVar67._12_4_;
    auVar94._0_8_ =
         CONCAT44(auVar45._4_4_ -
                  ((auVar45._4_4_ - (float)local_178._4_4_) - auVar131._4_4_ * param_5) * fVar110,
                  auVar45._0_4_ -
                  ((auVar45._0_4_ - (float)local_178._0_4_) - auVar131._0_4_ * param_5) * fVar103);
    auVar94._8_4_ =
         auVar45._8_4_ - ((auVar45._8_4_ - fStack_170) - auVar131._8_4_ * param_5) * fVar80;
    auVar94._12_4_ =
         auVar45._12_4_ - ((auVar45._12_4_ - fStack_16c) - auVar131._12_4_ * param_5) * fVar89;
    fVar44 = fVar96 - ((fVar96 - auVar122._0_4_) - auVar138._0_4_ * param_5) * fVar103;
    fVar56 = fVar98 - ((fVar98 - auVar122._4_4_) - auVar138._4_4_ * param_5) * fVar110;
    auVar55._0_8_ = CONCAT44(fVar56,fVar44);
    auVar55._8_4_ = fVar101 - ((fVar101 - auVar122._8_4_) - auVar138._8_4_ * param_5) * fVar80;
    auVar55._12_4_ = fVar102 - ((fVar102 - auVar122._12_4_) - auVar138._12_4_ * param_5) * fVar89;
    auVar107._0_8_ =
         CONCAT44(auVar71._4_4_ -
                  ((auVar71._4_4_ - (float)local_168._4_4_) - param_5 * auVar127._4_4_) * fVar110,
                  auVar71._0_4_ -
                  ((auVar71._0_4_ - (float)local_168._0_4_) - param_5 * auVar127._0_4_) * fVar103);
    auVar107._8_4_ =
         auVar71._8_4_ - ((auVar71._8_4_ - fStack_160) - param_5 * auVar127._8_4_) * fVar80;
    auVar107._12_4_ =
         auVar71._12_4_ - ((auVar71._12_4_ - fStack_15c) - param_5 * auVar127._12_4_) * fVar89;
    if ((bVar33 & 1) == 0) {
      auVar67 = blendps(auVar71,auVar71,1);
      auVar123 = auVar45;
    }
    else {
      auVar139._8_4_ = auVar107._8_4_;
      auVar139._0_8_ = auVar107._0_8_;
      auVar139._12_4_ = auVar107._12_4_;
      auVar123._8_4_ = auVar94._8_4_;
      auVar123._0_8_ = auVar94._0_8_;
      auVar123._12_4_ = auVar94._12_4_;
      auVar67 = blendps(auVar71,auVar139,1);
      fVar96 = fVar44;
      fVar98 = fVar56;
      fVar101 = auVar55._8_4_;
      fVar102 = auVar55._12_4_;
      auVar71 = auVar139;
    }
    if ((bVar33 & 2) == 0) {
      auVar60 = blendps(auVar45,auVar123,1);
      auVar13._4_4_ = fVar98;
      auVar13._0_4_ = fVar96;
      auVar13._8_4_ = fVar101;
      auVar13._12_4_ = fVar102;
      auVar118 = blendps(auVar118,auVar13,1);
      auVar45 = blendps(auVar67,auVar67,2);
      auVar115 = auVar118;
      auVar132 = auVar60;
    }
    else {
      auVar144._8_4_ = auVar107._8_4_;
      auVar144._0_8_ = auVar107._0_8_;
      auVar144._12_4_ = auVar107._12_4_;
      auVar60 = blendps(auVar45,auVar123,1);
      auVar132._8_4_ = auVar94._8_4_;
      auVar132._0_8_ = auVar94._0_8_;
      auVar132._12_4_ = auVar94._12_4_;
      auVar14._4_4_ = fVar98;
      auVar14._0_4_ = fVar96;
      auVar14._8_4_ = fVar101;
      auVar14._12_4_ = fVar102;
      auVar118 = blendps(auVar118,auVar14,1);
      auVar115._8_4_ = auVar55._8_4_;
      auVar115._0_8_ = auVar55._0_8_;
      auVar115._12_4_ = auVar55._12_4_;
      auVar45 = blendps(auVar67,auVar144,2);
      auVar67 = auVar144;
    }
    if ((bVar33 & 4) == 0) {
      auVar81 = blendps(auVar60,auVar132,2);
      auVar60 = blendps(auVar118,auVar115,2);
      auVar118 = blendps(auVar45,auVar45,4);
      auVar128 = auVar60;
      auVar151 = auVar81;
    }
    else {
      auVar157._8_4_ = auVar107._8_4_;
      auVar157._0_8_ = auVar107._0_8_;
      auVar157._12_4_ = auVar107._12_4_;
      auVar81 = blendps(auVar60,auVar132,2);
      auVar151._8_4_ = auVar94._8_4_;
      auVar151._0_8_ = auVar94._0_8_;
      auVar151._12_4_ = auVar94._12_4_;
      auVar60 = blendps(auVar118,auVar115,2);
      auVar128._8_4_ = auVar55._8_4_;
      auVar128._0_8_ = auVar55._0_8_;
      auVar128._12_4_ = auVar55._12_4_;
      auVar118 = blendps(auVar45,auVar157,4);
      auVar45 = auVar157;
    }
    if ((char)bVar33 < '\0') {
      auVar81 = blendps(auVar81,auVar151,4);
    }
    else {
      auVar81 = blendps(auVar81,auVar151,4);
      auVar107 = auVar118;
    }
    if ((char)bVar33 < '\0') {
      auVar60 = blendps(auVar60,auVar128,4);
    }
    else {
      auVar60 = blendps(auVar60,auVar128,4);
      auVar94 = auVar81;
    }
    auVar84 = auVar60;
    if ((char)bVar33 < '\0') {
      auVar84 = auVar55;
    }
    if ((bVar35 & 0xf) == 0) {
      auVar71 = blendps(auVar84,auVar60,7);
      auVar45 = blendps(auVar94,auVar81,7);
      auVar67 = blendps(auVar107,auVar118,7);
      auVar73._0_8_ = auVar118._0_8_;
      auVar73._8_4_ = auVar118._4_4_;
      auVar73._12_4_ = auVar81._4_4_;
      auVar88._0_8_ = auVar60._0_8_;
      auVar88._8_4_ = auVar60._4_4_;
      auVar88._12_4_ = fVar97;
      *(ulonglong *)*param_1 = CONCAT44(auVar81._0_4_,auVar118._0_4_);
      *(ulonglong *)(*param_1 + 8) = CONCAT44(fVar95,auVar60._0_4_);
      *(longlong *)param_1[1] = auVar73._8_8_;
      *(longlong *)(param_1[1] + 8) = auVar88._8_8_;
      *(int *)param_1[2] = auVar67._8_4_;
      *(int *)(param_1[2] + 4) = auVar45._8_4_;
      *(int *)(param_1[2] + 8) = auVar71._8_4_;
      *(float *)(param_1[2] + 0xc) = fVar100;
      *(int *)param_1[3] = auVar67._12_4_;
      *(int *)(param_1[3] + 4) = auVar45._12_4_;
      *(int *)(param_1[3] + 8) = auVar71._12_4_;
      *(float *)(param_1[3] + 0xc) = fVar99;
    }
    else {
      if ((bVar33 & 1) != 0) {
        *(int *)*param_1 = auVar71._0_4_;
      }
      if ((bVar33 & 2) != 0) {
        uVar5 = extractps(auVar67,1);
        *(undefined8 *)param_1[1] = uVar5;
      }
      if ((bVar33 & 4) != 0) {
        uVar5 = extractps(auVar45,2);
        *(undefined8 *)param_1[2] = uVar5;
      }
      if ((char)bVar33 < '\0') {
        uVar5 = extractps(auVar107,3);
        *(undefined8 *)param_1[3] = uVar5;
      }
      if ((bVar33 & 1) != 0) {
        *(int *)(*param_1 + 4) = auVar123._0_4_;
      }
      if ((bVar33 & 2) != 0) {
        uVar5 = extractps(auVar132,1);
        *(undefined8 *)(param_1[1] + 4) = uVar5;
      }
      if ((bVar33 & 4) != 0) {
        uVar5 = extractps(auVar151,2);
        *(undefined8 *)(param_1[2] + 4) = uVar5;
      }
      if ((char)bVar33 < '\0') {
        uVar5 = extractps(auVar94,3);
        *(undefined8 *)(param_1[3] + 4) = uVar5;
      }
      if ((bVar33 & 1) != 0) {
        *(float *)(*param_1 + 8) = fVar96;
      }
      if ((bVar33 & 2) != 0) {
        uVar5 = extractps(auVar115,1);
        *(undefined8 *)(param_1[1] + 8) = uVar5;
      }
      if ((bVar33 & 4) != 0) {
        uVar5 = extractps(auVar128,2);
        *(undefined8 *)(param_1[2] + 8) = uVar5;
      }
      if ((char)bVar33 < '\0') {
        uVar5 = extractps(auVar84,3);
        *(undefined8 *)(param_1[3] + 8) = uVar5;
      }
      if ((bVar33 & 1) != 0) {
        *(float *)(*param_1 + 0xc) = fVar95;
      }
      if ((bVar33 & 2) != 0) {
        *(float *)(param_1[1] + 0xc) = fVar97;
      }
      if ((bVar33 & 4) != 0) {
        *(float *)(param_1[2] + 0xc) = fVar100;
      }
      if ((char)bVar33 < '\0') {
        *(float *)(param_1[3] + 0xc) = fVar99;
      }
    }
    return;
  }
  return;
}

// MultiResUpdateFineTargets_sse4 @ 1405b9b60

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void MultiResUpdateFineTargets_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,longlong param_7,uint param_8)

{
  int *piVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [12];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  byte bVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  uint uVar25;
  uint *puVar26;
  ulonglong uVar27;
  longlong lVar28;
  longlong lVar29;
  uint uVar30;
  longlong lVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong lVar34;
  longlong lVar35;
  ulonglong uVar36;
  ulonglong uVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  ulonglong uVar41;
  longlong lVar42;
  longlong lVar43;
  longlong lVar44;
  float *pfVar45;
  longlong lVar46;
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
  float fVar58;
  float fVar59;
  undefined1 auVar57 [16];
  float fVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined4 uVar64;
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
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 local_138 [8];
  undefined8 uStack_130;
  undefined1 local_128 [8];
  undefined8 uStack_120;
  undefined1 local_118 [8];
  undefined8 uStack_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  
  uVar30 = param_8 + 3;
  if (-1 < (int)param_8) {
    uVar30 = param_8;
  }
  if ((int)(uVar30 & 0xfffffffc) < 1) {
    uVar25 = 0;
    if ((int)param_8 < 1) {
      return;
    }
  }
  else {
    pfVar45 = (float *)(param_6 + 0x30);
    lVar46 = 0x20;
    uVar25 = 0;
    do {
      fVar56 = pfVar45[-0xc];
      fVar58 = pfVar45[-0xb];
      fVar59 = pfVar45[-10];
      fVar60 = pfVar45[-9];
      fVar6 = pfVar45[-8];
      fVar7 = pfVar45[-7];
      fVar8 = pfVar45[-6];
      fVar9 = pfVar45[-5];
      fVar10 = pfVar45[-4];
      fVar11 = pfVar45[-3];
      fVar12 = pfVar45[-2];
      fVar13 = pfVar45[-1];
      fVar14 = *pfVar45;
      fVar15 = pfVar45[1];
      fVar16 = pfVar45[2];
      fVar17 = pfVar45[3];
      auVar73 = *(undefined1 (*) [16])(param_7 + -0x20 + lVar46);
      auVar79 = *(undefined1 (*) [16])(param_7 + -0x10 + lVar46);
      piVar1 = (int *)(param_7 + lVar46);
      uVar64 = auVar79._0_4_;
      auVar47._4_4_ = uVar64;
      auVar47._0_4_ = uVar64;
      auVar47._8_4_ = uVar64;
      auVar47._12_4_ = uVar64;
      iVar18 = auVar73._12_4_;
      auVar70._4_4_ = iVar18;
      auVar70._0_4_ = auVar73._0_4_;
      auVar70._8_4_ = auVar73._4_4_;
      auVar70._12_4_ = iVar18;
      auVar47 = pblendw(auVar47,auVar70,0x3f);
      auVar74._0_8_ = auVar73._8_8_;
      auVar74._8_4_ = auVar73._8_4_;
      auVar74._12_4_ = iVar18;
      auVar78 = pblendw(auVar74,auVar79,0xc);
      lVar40 = (longlong)(auVar73._0_4_ * 3);
      lVar22 = (longlong)(iVar18 * 3);
      lVar31 = (longlong)(auVar79._8_4_ * 3);
      lVar35 = (longlong)(piVar1[1] * 3);
      auVar73 = insertps(ZEXT416(*(uint *)(param_3 + lVar40 * 4)),
                         *(undefined4 *)(param_3 + lVar22 * 4),0x10);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_3 + lVar31 * 4),0x20);
      auVar74 = insertps(auVar73,*(undefined4 *)(param_3 + lVar35 * 4),0x30);
      auVar73 = insertps(ZEXT416(*(uint *)(param_3 + 4 + lVar40 * 4)),
                         *(undefined4 *)(param_3 + 4 + lVar22 * 4),0x10);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_3 + 4 + lVar31 * 4),0x20);
      auVar67 = insertps(auVar73,*(undefined4 *)(param_3 + 4 + lVar35 * 4),0x30);
      auVar73 = insertps(ZEXT416(*(uint *)(param_3 + 8 + lVar40 * 4)),
                         *(undefined4 *)(param_3 + 8 + lVar22 * 4),0x10);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_3 + 8 + lVar31 * 4),0x20);
      auVar61 = insertps(auVar73,*(undefined4 *)(param_3 + 8 + lVar35 * 4),0x30);
      lVar38 = (longlong)(auVar47._8_4_ * 3);
      lVar28 = (longlong)(auVar47._12_4_ * 3);
      lVar44 = (longlong)(auVar79._12_4_ * 3);
      lVar43 = (longlong)(piVar1[2] * 3);
      auVar73 = insertps(ZEXT416(*(uint *)(param_3 + lVar38 * 4)),
                         *(undefined4 *)(param_3 + lVar28 * 4),0x10);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_3 + lVar44 * 4),0x20);
      auVar76 = insertps(auVar73,*(undefined4 *)(param_3 + lVar43 * 4),0x30);
      auVar73 = insertps(ZEXT416(*(uint *)(param_3 + 4 + lVar38 * 4)),
                         *(undefined4 *)(param_3 + 4 + lVar28 * 4),0x10);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_3 + 4 + lVar44 * 4),0x20);
      auVar69 = insertps(auVar73,*(undefined4 *)(param_3 + 4 + lVar43 * 4),0x30);
      auVar73 = insertps(ZEXT416(*(uint *)(param_3 + 8 + lVar38 * 4)),
                         *(undefined4 *)(param_3 + 8 + lVar28 * 4),0x10);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_3 + 8 + lVar44 * 4),0x20);
      auVar90 = insertps(ZEXT416(*(uint *)(param_4 + lVar40 * 4)),
                         *(undefined4 *)(param_4 + lVar22 * 4),0x10);
      auVar86 = insertps(ZEXT416(*(uint *)(param_4 + 4 + lVar40 * 4)),
                         *(undefined4 *)(param_4 + 4 + lVar22 * 4),0x10);
      auVar79 = insertps(ZEXT416(*(uint *)(param_4 + 8 + lVar40 * 4)),
                         *(undefined4 *)(param_4 + 8 + lVar22 * 4),0x10);
      auVar84 = insertps(ZEXT416(*(uint *)(param_5 + lVar40 * 4)),
                         *(undefined4 *)(param_5 + lVar22 * 4),0x10);
      auVar82 = insertps(ZEXT416(*(uint *)(param_5 + 4 + lVar40 * 4)),
                         *(undefined4 *)(param_5 + 4 + lVar22 * 4),0x10);
      auVar47 = insertps(ZEXT416(*(uint *)(param_5 + 8 + lVar40 * 4)),
                         *(undefined4 *)(param_5 + 8 + lVar22 * 4),0x10);
      auVar90 = insertps(auVar90,*(undefined4 *)(param_4 + lVar31 * 4),0x20);
      auVar86 = insertps(auVar86,*(undefined4 *)(param_4 + 4 + lVar31 * 4),0x20);
      auVar79 = insertps(auVar79,*(undefined4 *)(param_4 + 8 + lVar31 * 4),0x20);
      auVar84 = insertps(auVar84,*(undefined4 *)(param_5 + lVar31 * 4),0x20);
      auVar82 = insertps(auVar82,*(undefined4 *)(param_5 + 4 + lVar31 * 4),0x20);
      auVar47 = insertps(auVar47,*(undefined4 *)(param_5 + 8 + lVar31 * 4),0x20);
      auVar91 = insertps(auVar90,*(undefined4 *)(param_4 + lVar35 * 4),0x30);
      auVar87 = insertps(auVar86,*(undefined4 *)(param_4 + 4 + lVar35 * 4),0x30);
      auVar80 = insertps(auVar79,*(undefined4 *)(param_4 + 8 + lVar35 * 4),0x30);
      auVar85 = insertps(auVar84,*(undefined4 *)(param_5 + lVar35 * 4),0x30);
      auVar83 = insertps(auVar82,*(undefined4 *)(param_5 + 4 + lVar35 * 4),0x30);
      auVar81 = insertps(auVar47,*(undefined4 *)(param_5 + 8 + lVar35 * 4),0x30);
      auVar82 = insertps(auVar73,*(undefined4 *)(param_3 + 8 + lVar43 * 4),0x30);
      lVar31 = (longlong)(auVar78._0_4_ * 3);
      lVar22 = (longlong)(auVar78._4_4_ * 3);
      lVar40 = (longlong)(*piVar1 * 3);
      lVar35 = (longlong)(piVar1[3] * 3);
      auVar73 = insertps(ZEXT416(*(uint *)(param_4 + lVar38 * 4)),
                         *(undefined4 *)(param_4 + lVar28 * 4),0x10);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_4 + lVar44 * 4),0x20);
      auVar90 = insertps(auVar73,*(undefined4 *)(param_4 + lVar43 * 4),0x30);
      auVar73 = insertps(ZEXT416(*(uint *)(param_4 + 4 + lVar38 * 4)),
                         *(undefined4 *)(param_4 + 4 + lVar28 * 4),0x10);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_4 + 4 + lVar44 * 4),0x20);
      auVar75 = insertps(auVar73,*(undefined4 *)(param_4 + 4 + lVar43 * 4),0x30);
      auVar73 = insertps(ZEXT416(*(uint *)(param_4 + 8 + lVar38 * 4)),
                         *(undefined4 *)(param_4 + 8 + lVar28 * 4),0x10);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_4 + 8 + lVar44 * 4),0x20);
      auVar77 = insertps(auVar73,*(undefined4 *)(param_4 + 8 + lVar43 * 4),0x30);
      auVar73 = insertps(ZEXT416(*(uint *)(param_3 + lVar31 * 4)),
                         *(undefined4 *)(param_3 + lVar22 * 4),0x10);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_3 + lVar40 * 4),0x20);
      auVar70 = insertps(auVar73,*(undefined4 *)(param_3 + lVar35 * 4),0x30);
      auVar73 = insertps(ZEXT416(*(uint *)(param_3 + 4 + lVar31 * 4)),
                         *(undefined4 *)(param_3 + 4 + lVar22 * 4),0x10);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_3 + 4 + lVar40 * 4),0x20);
      auVar84 = insertps(auVar73,*(undefined4 *)(param_3 + 4 + lVar35 * 4),0x30);
      auVar73 = insertps(ZEXT416(*(uint *)(param_4 + lVar31 * 4)),
                         *(undefined4 *)(param_4 + lVar22 * 4),0x10);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_4 + lVar40 * 4),0x20);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_4 + lVar35 * 4),0x30);
      auVar79 = insertps(ZEXT416(*(uint *)(param_4 + 4 + lVar31 * 4)),
                         *(undefined4 *)(param_4 + 4 + lVar22 * 4),0x10);
      auVar79 = insertps(auVar79,*(undefined4 *)(param_4 + 4 + lVar40 * 4),0x20);
      auVar78 = insertps(auVar79,*(undefined4 *)(param_4 + 4 + lVar35 * 4),0x30);
      auVar79 = insertps(ZEXT416(*(uint *)(param_4 + 8 + lVar31 * 4)),
                         *(undefined4 *)(param_4 + 8 + lVar22 * 4),0x10);
      auVar79 = insertps(auVar79,*(undefined4 *)(param_4 + 8 + lVar40 * 4),0x20);
      auVar86 = insertps(auVar79,*(undefined4 *)(param_4 + 8 + lVar35 * 4),0x30);
      auVar79 = insertps(ZEXT416(*(uint *)(param_3 + 8 + lVar31 * 4)),
                         *(undefined4 *)(param_3 + 8 + lVar22 * 4),0x10);
      auVar79 = insertps(auVar79,*(undefined4 *)(param_3 + 8 + lVar40 * 4),0x20);
      auVar47 = insertps(auVar79,*(undefined4 *)(param_3 + 8 + lVar35 * 4),0x30);
      auVar79._0_8_ =
           CONCAT44((auVar73._4_4_ * fVar9 + auVar70._4_4_) * fVar8 +
                    (auVar90._4_4_ * fVar9 + auVar76._4_4_) * fVar7 +
                    (auVar91._4_4_ * fVar9 + auVar74._4_4_) * fVar6,
                    (auVar73._0_4_ * fVar60 + auVar70._0_4_) * fVar59 +
                    (auVar90._0_4_ * fVar60 + auVar76._0_4_) * fVar58 +
                    (auVar91._0_4_ * fVar60 + auVar74._0_4_) * fVar56);
      auVar79._8_4_ =
           (auVar73._8_4_ * fVar13 + auVar70._8_4_) * fVar12 +
           (auVar90._8_4_ * fVar13 + auVar76._8_4_) * fVar11 +
           (auVar91._8_4_ * fVar13 + auVar74._8_4_) * fVar10;
      auVar79._12_4_ =
           (auVar73._12_4_ * fVar17 + auVar70._12_4_) * fVar16 +
           (auVar90._12_4_ * fVar17 + auVar76._12_4_) * fVar15 +
           (auVar91._12_4_ * fVar17 + auVar74._12_4_) * fVar14;
      auVar90._0_4_ =
           (auVar78._0_4_ * fVar60 + auVar84._0_4_) * fVar59 +
           (auVar75._0_4_ * fVar60 + auVar69._0_4_) * fVar58 +
           (auVar87._0_4_ * fVar60 + auVar67._0_4_) * fVar56;
      auVar90._4_4_ =
           (auVar78._4_4_ * fVar9 + auVar84._4_4_) * fVar8 +
           (auVar75._4_4_ * fVar9 + auVar69._4_4_) * fVar7 +
           (auVar87._4_4_ * fVar9 + auVar67._4_4_) * fVar6;
      auVar90._8_4_ =
           (auVar78._8_4_ * fVar13 + auVar84._8_4_) * fVar12 +
           (auVar75._8_4_ * fVar13 + auVar69._8_4_) * fVar11 +
           (auVar87._8_4_ * fVar13 + auVar67._8_4_) * fVar10;
      auVar90._12_4_ =
           (auVar78._12_4_ * fVar17 + auVar84._12_4_) * fVar16 +
           (auVar75._12_4_ * fVar17 + auVar69._12_4_) * fVar15 +
           (auVar87._12_4_ * fVar17 + auVar67._12_4_) * fVar14;
      auVar67._0_4_ =
           (auVar86._0_4_ * fVar60 + auVar47._0_4_) * fVar59 +
           (auVar77._0_4_ * fVar60 + auVar82._0_4_) * fVar58 +
           (auVar80._0_4_ * fVar60 + auVar61._0_4_) * fVar56;
      auVar67._4_4_ =
           (auVar86._4_4_ * fVar9 + auVar47._4_4_) * fVar8 +
           (auVar77._4_4_ * fVar9 + auVar82._4_4_) * fVar7 +
           (auVar80._4_4_ * fVar9 + auVar61._4_4_) * fVar6;
      auVar67._8_4_ =
           (auVar86._8_4_ * fVar13 + auVar47._8_4_) * fVar12 +
           (auVar77._8_4_ * fVar13 + auVar82._8_4_) * fVar11 +
           (auVar80._8_4_ * fVar13 + auVar61._8_4_) * fVar10;
      auVar67._12_4_ =
           (auVar86._12_4_ * fVar17 + auVar47._12_4_) * fVar16 +
           (auVar77._12_4_ * fVar17 + auVar82._12_4_) * fVar15 +
           (auVar80._12_4_ * fVar17 + auVar61._12_4_) * fVar14;
      auVar47 = insertps(ZEXT416(*(uint *)(param_5 + lVar38 * 4)),
                         *(undefined4 *)(param_5 + lVar28 * 4),0x10);
      auVar61 = insertps(ZEXT416(*(uint *)(param_5 + 4 + lVar38 * 4)),
                         *(undefined4 *)(param_5 + 4 + lVar28 * 4),0x10);
      auVar73 = insertps(ZEXT416(*(uint *)(param_5 + 8 + lVar38 * 4)),
                         *(undefined4 *)(param_5 + 8 + lVar28 * 4),0x10);
      auVar47 = insertps(auVar47,*(undefined4 *)(param_5 + lVar44 * 4),0x20);
      auVar61 = insertps(auVar61,*(undefined4 *)(param_5 + 4 + lVar44 * 4),0x20);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_5 + 8 + lVar44 * 4),0x20);
      auVar78 = insertps(auVar47,*(undefined4 *)(param_5 + lVar43 * 4),0x30);
      auVar84 = insertps(auVar61,*(undefined4 *)(param_5 + 4 + lVar43 * 4),0x30);
      auVar61 = insertps(auVar73,*(undefined4 *)(param_5 + 8 + lVar43 * 4),0x30);
      auVar73 = insertps(ZEXT416(*(uint *)(param_5 + lVar31 * 4)),
                         *(undefined4 *)(param_5 + lVar22 * 4),0x10);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_5 + lVar40 * 4),0x20);
      auVar47 = insertps(auVar73,*(undefined4 *)(param_5 + lVar35 * 4),0x30);
      auVar73 = insertps(ZEXT416(*(uint *)(param_5 + 4 + lVar31 * 4)),
                         *(undefined4 *)(param_5 + 4 + lVar22 * 4),0x10);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_5 + 4 + lVar40 * 4),0x20);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_5 + 4 + lVar35 * 4),0x30);
      auVar82._0_8_ =
           CONCAT44(auVar47._4_4_ * fVar8 + auVar78._4_4_ * fVar7 + auVar85._4_4_ * fVar6,
                    auVar47._0_4_ * fVar59 + auVar78._0_4_ * fVar58 + auVar85._0_4_ * fVar56);
      auVar82._8_4_ = auVar47._8_4_ * fVar12 + auVar78._8_4_ * fVar11 + auVar85._8_4_ * fVar10;
      auVar82._12_4_ = auVar47._12_4_ * fVar16 + auVar78._12_4_ * fVar15 + auVar85._12_4_ * fVar14;
      auVar78._0_4_ = auVar73._0_4_ * fVar59 + auVar84._0_4_ * fVar58 + auVar83._0_4_ * fVar56;
      auVar78._4_4_ = auVar73._4_4_ * fVar8 + auVar84._4_4_ * fVar7 + auVar83._4_4_ * fVar6;
      auVar78._8_4_ = auVar73._8_4_ * fVar12 + auVar84._8_4_ * fVar11 + auVar83._8_4_ * fVar10;
      auVar78._12_4_ = auVar73._12_4_ * fVar16 + auVar84._12_4_ * fVar15 + auVar83._12_4_ * fVar14;
      auVar73 = insertps(ZEXT416(*(uint *)(param_5 + 8 + lVar31 * 4)),
                         *(undefined4 *)(param_5 + 8 + lVar22 * 4),0x10);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_5 + 8 + lVar40 * 4),0x20);
      auVar73 = insertps(auVar73,*(undefined4 *)(param_5 + 8 + lVar35 * 4),0x30);
      auVar69._0_4_ = auVar73._0_4_ * fVar59 + auVar61._0_4_ * fVar58 + auVar81._0_4_ * fVar56;
      auVar69._4_4_ = auVar73._4_4_ * fVar8 + auVar61._4_4_ * fVar7 + auVar81._4_4_ * fVar6;
      auVar69._8_4_ = auVar73._8_4_ * fVar12 + auVar61._8_4_ * fVar11 + auVar81._8_4_ * fVar10;
      auVar69._12_4_ = auVar73._12_4_ * fVar16 + auVar61._12_4_ * fVar15 + auVar81._12_4_ * fVar14;
      auVar84._8_4_ = auVar79._8_4_;
      auVar84._0_8_ = auVar79._0_8_;
      auVar84._12_4_ = auVar79._12_4_;
      auVar73 = insertps(auVar84,auVar90,0x30);
      auVar73 = insertps(auVar73,auVar67,0x20);
      puVar3 = (undefined4 *)(param_1 + -0x20 + lVar46);
      *puVar3 = auVar73._0_4_;
      puVar3[1] = auVar73._12_4_;
      puVar3[2] = auVar73._8_4_;
      puVar3[3] = auVar73._4_4_;
      auVar86._4_4_ = auVar90._8_4_;
      auVar86._0_4_ = auVar90._4_4_;
      auVar86._8_4_ = auVar67._0_4_;
      auVar86._12_4_ = auVar67._4_4_;
      auVar73 = blendps(auVar86,auVar79,4);
      puVar3 = (undefined4 *)(param_1 + -0x10 + lVar46);
      *puVar3 = auVar73._0_4_;
      puVar3[1] = auVar73._12_4_;
      puVar3[2] = auVar73._8_4_;
      puVar3[3] = auVar73._4_4_;
      pfVar2 = (float *)(param_1 + lVar46);
      *pfVar2 = auVar67._8_4_;
      pfVar2[1] = auVar79._12_4_;
      pfVar2[2] = auVar90._12_4_;
      pfVar2[3] = auVar67._12_4_;
      auVar73._8_4_ = auVar82._8_4_;
      auVar73._0_8_ = auVar82._0_8_;
      auVar73._12_4_ = auVar82._12_4_;
      auVar73 = insertps(auVar73,auVar78,0x30);
      auVar73 = insertps(auVar73,auVar69,0x20);
      puVar3 = (undefined4 *)(param_2 + -0x20 + lVar46);
      *puVar3 = auVar73._0_4_;
      puVar3[1] = auVar73._12_4_;
      puVar3[2] = auVar73._8_4_;
      puVar3[3] = auVar73._4_4_;
      auVar61._4_4_ = auVar78._8_4_;
      auVar61._0_4_ = auVar78._4_4_;
      auVar61._8_4_ = auVar69._0_4_;
      auVar61._12_4_ = auVar69._4_4_;
      auVar73 = blendps(auVar61,auVar82,4);
      puVar3 = (undefined4 *)(param_2 + -0x10 + lVar46);
      *puVar3 = auVar73._0_4_;
      puVar3[1] = auVar73._12_4_;
      puVar3[2] = auVar73._8_4_;
      puVar3[3] = auVar73._4_4_;
      pfVar2 = (float *)(param_2 + lVar46);
      *pfVar2 = auVar69._8_4_;
      pfVar2[1] = auVar82._12_4_;
      pfVar2[2] = auVar78._12_4_;
      pfVar2[3] = auVar69._12_4_;
      lVar46 = lVar46 + 0x30;
      pfVar45 = pfVar45 + 0x10;
      uVar25 = uVar25 + 4;
    } while ((int)uVar25 < (int)(uVar30 & 0xfffffffc));
    if ((int)param_8 <= (int)uVar25) {
      return;
    }
  }
  auVar75._0_4_ =
       -(uint)((int)(uVar25 | (uint)__xmm_00000003000000020000000100000000) < (int)param_8);
  auVar75._4_4_ =
       -(uint)((int)(uVar25 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_8);
  auVar75._8_4_ = -(uint)((int)(uVar25 | _UNK_150631e08) < (int)param_8);
  auVar75._12_4_ = -(uint)((int)(uVar25 | _UNK_150631e0c) < (int)param_8);
  uVar32 = (ulonglong)uVar25;
  puVar26 = (uint *)(param_6 + uVar32 * 0x10);
  iVar18 = movmskps((int)(uVar32 * 0x10),auVar75);
  bVar21 = (char)((char)iVar18 << 4) >> 4;
  if (iVar18 == 0xf) {
    auVar73 = *(undefined1 (*) [16])(puVar26 + 8);
    local_118._4_4_ = puVar26[4];
    local_118._0_4_ = *puVar26;
    auVar76._0_8_ = CONCAT44(puVar26[6],puVar26[2]);
    auVar76._8_4_ = puVar26[3];
    auVar76._12_4_ = puVar26[7];
    auVar91._0_8_ = auVar73._0_8_;
    auVar91._8_4_ = auVar73._4_4_;
    auVar91._12_4_ = puVar26[0xd];
    uStack_110._4_4_ = (float)puVar26[0xc];
    uStack_110._0_4_ = (float)auVar73._0_4_;
    uStack_130._4_4_ = (float)puVar26[0xe];
    uStack_130._0_4_ = (float)auVar73._8_4_;
    local_128._4_4_ = puVar26[5];
    local_128._0_4_ = puVar26[1];
    uStack_120 = auVar91._8_8_;
    auVar5._4_8_ = auVar91._8_8_;
    auVar5._0_4_ = puVar26[0xe];
    auVar88._0_8_ = auVar5._0_8_ << 0x20;
    auVar88._8_4_ = auVar73._12_4_;
    auVar88._12_4_ = puVar26[0xf];
    local_138 = (undefined1  [8])auVar76._0_8_;
    auVar57._8_8_ = auVar88._8_8_;
    auVar57._0_8_ = auVar76._8_8_;
    auVar73 = *(undefined1 (*) [16])(param_7 + uVar32 * 0xc);
    auVar79 = *(undefined1 (*) [16])(param_7 + 0x10 + uVar32 * 0xc);
    puVar3 = (undefined4 *)(param_7 + 0x20 + uVar32 * 0xc);
    uVar64 = auVar79._0_4_;
    auVar81._4_4_ = uVar64;
    auVar81._0_4_ = uVar64;
    auVar81._8_4_ = uVar64;
    auVar81._12_4_ = uVar64;
    auVar77._8_4_ = auVar73._8_4_;
    auVar77._12_4_ = auVar73._12_4_;
    auVar85._0_8_ = CONCAT44(auVar77._12_4_,auVar73._0_4_);
    auVar85._8_4_ = auVar73._4_4_;
    auVar85._12_4_ = auVar77._12_4_;
    auVar47 = pblendw(auVar81,auVar85,0x3f);
    auVar77._0_8_ = auVar73._8_8_;
    auVar73 = pblendw(auVar77,auVar79,0xc);
    auVar65._0_8_ = CONCAT44(puVar3[1],auVar79._8_4_);
    auVar65._8_4_ = auVar79._12_4_;
    auVar65._12_4_ = puVar3[2];
    auVar87._8_8_ = auVar65._0_8_;
    auVar87._0_8_ = auVar85._0_8_;
    auVar83._8_8_ = auVar65._8_8_;
    auVar83._0_8_ = auVar47._8_8_;
    auVar80._0_8_ = auVar73._0_8_;
    auVar80._8_4_ = *puVar3;
    auVar80._12_4_ = puVar3[3];
  }
  else {
    auVar48._0_4_ = ___xmm_00000030000000200000001000000000 & auVar75._0_4_;
    auVar48._4_4_ = _UNK_150b511c4 & auVar75._4_4_;
    auVar48._8_4_ = _UNK_150b511c8 & auVar75._8_4_;
    auVar48._12_4_ = _UNK_150b511cc & auVar75._12_4_;
    lVar46 = extractps(auVar48,1);
    lVar22 = extractps(auVar48,2);
    lVar31 = extractps(auVar48,3);
    auVar73 = insertps(ZEXT416(*puVar26),*(undefined4 *)((longlong)puVar26 + lVar46),0x10);
    auVar73 = insertps(auVar73,*(undefined4 *)((longlong)puVar26 + lVar22),0x20);
    _local_118 = insertps(auVar73,*(undefined4 *)((longlong)puVar26 + lVar31),0x30);
    auVar73 = ___xmm_00000034000000240000001400000004 & auVar75;
    auVar79 = insertps(ZEXT416(*(uint *)((longlong)puVar26 + (ulonglong)auVar73._0_4_)),
                       *(undefined4 *)((longlong)puVar26 + (ulonglong)auVar73._4_4_),0x10);
    auVar79 = insertps(auVar79,*(undefined4 *)((longlong)puVar26 + (ulonglong)auVar73._8_4_),0x20);
    _local_128 = insertps(auVar79,*(undefined4 *)((longlong)puVar26 + (ulonglong)auVar73._12_4_),
                          0x30);
    auVar73 = ___xmm_00000038000000280000001800000008 & auVar75;
    auVar79 = insertps(ZEXT416(*(uint *)((longlong)puVar26 + (ulonglong)auVar73._0_4_)),
                       *(undefined4 *)((longlong)puVar26 + (ulonglong)auVar73._4_4_),0x10);
    auVar79 = insertps(auVar79,*(undefined4 *)((longlong)puVar26 + (ulonglong)auVar73._8_4_),0x20);
    _local_138 = insertps(auVar79,*(undefined4 *)((longlong)puVar26 + (ulonglong)auVar73._12_4_),
                          0x30);
    auVar73 = ___xmm_0000003c0000002c0000001c0000000c & auVar75;
    auVar79 = insertps(ZEXT416(*(uint *)((longlong)puVar26 + (ulonglong)auVar73._0_4_)),
                       *(undefined4 *)((longlong)puVar26 + (ulonglong)auVar73._4_4_),0x10);
    auVar79 = insertps(auVar79,*(undefined4 *)((longlong)puVar26 + (ulonglong)auVar73._8_4_),0x20);
    auVar57 = insertps(auVar79,*(undefined4 *)((longlong)puVar26 + (ulonglong)auVar73._12_4_),0x30);
    auVar49._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar75._0_4_;
    auVar49._4_4_ = _UNK_150b50da4 & auVar75._4_4_;
    auVar49._8_4_ = _UNK_150b50da8 & auVar75._8_4_;
    auVar49._12_4_ = _UNK_150b50dac & auVar75._12_4_;
    lVar28 = extractps(auVar49,1);
    lVar46 = param_7 + uVar32 * 0xc;
    lVar31 = extractps(auVar49,2);
    lVar22 = extractps(auVar49,3);
    auVar87._4_4_ = *(undefined4 *)(lVar28 + lVar46);
    auVar87._0_4_ = *(undefined4 *)(param_7 + uVar32 * 0xc);
    auVar87._12_4_ = *(undefined4 *)(lVar22 + lVar46);
    auVar87._8_4_ = *(undefined4 *)(lVar31 + lVar46);
    auVar73 = ___xmm_000000280000001c0000001000000004 & auVar75;
    auVar83._4_4_ = *(undefined4 *)((ulonglong)auVar73._4_4_ + lVar46);
    auVar83._0_4_ = *(undefined4 *)((ulonglong)auVar73._0_4_ + lVar46);
    auVar83._12_4_ = *(undefined4 *)((ulonglong)auVar73._12_4_ + lVar46);
    auVar83._8_4_ = *(undefined4 *)((ulonglong)auVar73._8_4_ + lVar46);
    auVar73 = ___xmm_0000002c000000200000001400000008 & auVar75;
    auVar80._4_4_ = *(undefined4 *)((ulonglong)auVar73._4_4_ + lVar46);
    auVar80._0_4_ = *(undefined4 *)((ulonglong)auVar73._0_4_ + lVar46);
    auVar80._12_4_ = *(undefined4 *)((ulonglong)auVar73._12_4_ + lVar46);
    auVar80._8_4_ = *(undefined4 *)((ulonglong)auVar73._8_4_ + lVar46);
  }
  auVar71._4_4_ = auVar87._4_4_ * 3;
  auVar71._0_4_ = auVar87._0_4_ * 3;
  auVar71._8_4_ = auVar87._8_4_ * 3;
  auVar71._12_4_ = auVar87._12_4_ * 3;
  auVar71 = auVar71 & auVar75;
  lVar28 = (longlong)auVar71._0_4_;
  lVar46 = param_3 + lVar28 * 4;
  lVar23 = (longlong)auVar71._4_4_;
  lVar22 = param_3 + lVar23 * 4;
  lVar39 = (longlong)auVar71._8_4_;
  lVar31 = param_3 + lVar39 * 4;
  auVar73 = ___xmm_00000004000000040000000400000004 & auVar75;
  uVar33 = (ulonglong)auVar73._4_4_;
  uVar41 = (ulonglong)auVar73._8_4_;
  uVar36 = (ulonglong)auVar73._0_4_;
  auVar79 = insertps(ZEXT416(*(uint *)(uVar36 + lVar46)),*(undefined4 *)(uVar33 + lVar22),0x10);
  auVar79 = insertps(auVar79,*(undefined4 *)(uVar41 + lVar31),0x20);
  auVar61 = ___xmm_00000008000000080000000800000008 & auVar75;
  uVar27 = (ulonglong)auVar61._0_4_;
  uVar19 = (ulonglong)auVar61._4_4_;
  auVar47 = insertps(ZEXT416(*(uint *)(uVar27 + lVar46)),*(undefined4 *)(uVar19 + lVar22),0x10);
  uVar20 = (ulonglong)auVar61._8_4_;
  auVar47 = insertps(auVar47,*(undefined4 *)(uVar20 + lVar31),0x20);
  lVar31 = (longlong)auVar71._12_4_;
  lVar46 = param_3 + lVar31 * 4;
  uVar24 = (ulonglong)auVar73._12_4_;
  auVar86 = insertps(auVar79,*(undefined4 *)(uVar24 + lVar46),0x30);
  uVar37 = (ulonglong)auVar61._12_4_;
  auVar67 = insertps(auVar47,*(undefined4 *)(uVar37 + lVar46),0x30);
  auVar53._4_4_ = auVar83._4_4_ * 3;
  auVar53._0_4_ = auVar83._0_4_ * 3;
  auVar53._8_4_ = auVar83._8_4_ * 3;
  auVar53._12_4_ = auVar83._12_4_ * 3;
  auVar53 = auVar53 & auVar75;
  lVar29 = (longlong)auVar53._0_4_;
  lVar46 = param_3 + lVar29 * 4;
  lVar35 = (longlong)auVar53._4_4_;
  lVar22 = param_3 + lVar35 * 4;
  auVar73 = insertps(ZEXT416(*(uint *)(uVar36 + lVar46)),*(undefined4 *)(uVar33 + lVar22),0x10);
  auVar79 = insertps(ZEXT416(*(uint *)(uVar27 + lVar46)),*(undefined4 *)(uVar19 + lVar22),0x10);
  lVar38 = (longlong)auVar53._8_4_;
  lVar46 = param_3 + lVar38 * 4;
  auVar73 = insertps(auVar73,*(undefined4 *)(uVar41 + lVar46),0x20);
  auVar79 = insertps(auVar79,*(undefined4 *)(uVar20 + lVar46),0x20);
  lVar40 = (longlong)auVar53._12_4_;
  lVar46 = param_3 + lVar40 * 4;
  auVar74 = insertps(auVar73,*(undefined4 *)(uVar24 + lVar46),0x30);
  auVar76 = insertps(auVar79,*(undefined4 *)(uVar37 + lVar46),0x30);
  auVar51._4_4_ = auVar80._4_4_ * 3;
  auVar51._0_4_ = auVar80._0_4_ * 3;
  auVar51._8_4_ = auVar80._8_4_ * 3;
  auVar51._12_4_ = auVar80._12_4_ * 3;
  auVar51 = auVar51 & auVar75;
  lVar43 = (longlong)auVar51._0_4_;
  lVar46 = param_3 + lVar43 * 4;
  lVar42 = (longlong)auVar51._4_4_;
  lVar22 = param_3 + lVar42 * 4;
  auVar79 = insertps(ZEXT416(*(uint *)(uVar36 + lVar46)),*(undefined4 *)(uVar33 + lVar22),0x10);
  auVar73 = insertps(ZEXT416(*(uint *)(uVar27 + lVar46)),*(undefined4 *)(uVar19 + lVar22),0x10);
  lVar34 = (longlong)auVar51._8_4_;
  lVar46 = param_3 + lVar34 * 4;
  auVar47 = insertps(auVar79,*(undefined4 *)(uVar41 + lVar46),0x20);
  auVar73 = insertps(auVar73,*(undefined4 *)(uVar20 + lVar46),0x20);
  auVar79 = insertps(ZEXT416(*(uint *)(param_3 + lVar28 * 4)),*(undefined4 *)(param_3 + lVar23 * 4),
                     0x10);
  auVar79 = insertps(auVar79,*(undefined4 *)(param_3 + lVar39 * 4),0x20);
  auVar78 = insertps(auVar79,*(undefined4 *)(param_3 + lVar31 * 4),0x30);
  auVar79 = insertps(ZEXT416(*(uint *)(param_3 + lVar29 * 4)),*(undefined4 *)(param_3 + lVar35 * 4),
                     0x10);
  auVar79 = insertps(auVar79,*(undefined4 *)(param_3 + lVar38 * 4),0x20);
  auVar79 = insertps(auVar79,*(undefined4 *)(param_3 + lVar40 * 4),0x30);
  lVar44 = (longlong)auVar51._12_4_;
  auVar61 = insertps(ZEXT416(*(uint *)(param_3 + lVar43 * 4)),*(undefined4 *)(param_3 + lVar42 * 4),
                     0x10);
  auVar61 = insertps(auVar61,*(undefined4 *)(param_3 + lVar34 * 4),0x20);
  auVar80 = insertps(auVar61,*(undefined4 *)(param_3 + lVar44 * 4),0x30);
  param_3 = param_3 + lVar44 * 4;
  auVar70 = insertps(auVar47,*(undefined4 *)(uVar24 + param_3),0x30);
  auVar84 = insertps(auVar73,*(undefined4 *)(uVar37 + param_3),0x30);
  lVar46 = param_4 + lVar28 * 4;
  lVar22 = param_4 + lVar23 * 4;
  auVar47 = insertps(ZEXT416(*(uint *)(uVar36 + lVar46)),*(undefined4 *)(uVar33 + lVar22),0x10);
  auVar73 = insertps(ZEXT416(*(uint *)(uVar27 + lVar46)),*(undefined4 *)(uVar19 + lVar22),0x10);
  lVar46 = param_4 + lVar39 * 4;
  auVar47 = insertps(auVar47,*(undefined4 *)(uVar41 + lVar46),0x20);
  auVar73 = insertps(auVar73,*(undefined4 *)(uVar20 + lVar46),0x20);
  lVar46 = param_4 + lVar31 * 4;
  auVar88 = insertps(auVar47,*(undefined4 *)(uVar24 + lVar46),0x30);
  auVar87 = insertps(auVar73,*(undefined4 *)(uVar37 + lVar46),0x30);
  lVar46 = param_4 + lVar29 * 4;
  lVar22 = param_4 + lVar35 * 4;
  auVar73 = insertps(ZEXT416(*(uint *)(uVar36 + lVar46)),*(undefined4 *)(uVar33 + lVar22),0x10);
  auVar47 = insertps(ZEXT416(*(uint *)(uVar27 + lVar46)),*(undefined4 *)(uVar19 + lVar22),0x10);
  lVar46 = param_4 + lVar38 * 4;
  auVar73 = insertps(auVar73,*(undefined4 *)(uVar41 + lVar46),0x20);
  auVar47 = insertps(auVar47,*(undefined4 *)(uVar20 + lVar46),0x20);
  lVar46 = param_4 + lVar40 * 4;
  auVar83 = insertps(auVar73,*(undefined4 *)(uVar24 + lVar46),0x30);
  auVar85 = insertps(auVar47,*(undefined4 *)(uVar37 + lVar46),0x30);
  auVar73 = insertps(ZEXT416(*(uint *)(param_4 + lVar28 * 4)),*(undefined4 *)(param_4 + lVar23 * 4),
                     0x10);
  auVar73 = insertps(auVar73,*(undefined4 *)(param_4 + lVar39 * 4),0x20);
  auVar47 = insertps(auVar73,*(undefined4 *)(param_4 + lVar31 * 4),0x30);
  auVar73 = insertps(ZEXT416(*(uint *)(param_4 + lVar29 * 4)),*(undefined4 *)(param_4 + lVar35 * 4),
                     0x10);
  fVar56 = auVar57._0_4_;
  fVar58 = auVar57._4_4_;
  fVar59 = auVar57._8_4_;
  fVar60 = auVar57._12_4_;
  auVar73 = insertps(auVar73,*(undefined4 *)(param_4 + lVar38 * 4),0x20);
  auVar57 = insertps(auVar73,*(undefined4 *)(param_4 + lVar40 * 4),0x30);
  lVar46 = param_4 + lVar43 * 4;
  lVar22 = param_4 + lVar42 * 4;
  auVar61 = insertps(ZEXT416(*(uint *)(uVar36 + lVar46)),*(undefined4 *)(uVar33 + lVar22),0x10);
  auVar73 = insertps(ZEXT416(*(uint *)(uVar27 + lVar46)),*(undefined4 *)(uVar19 + lVar22),0x10);
  lVar46 = param_4 + lVar34 * 4;
  auVar90 = insertps(auVar61,*(undefined4 *)(uVar41 + lVar46),0x20);
  auVar61 = insertps(auVar73,*(undefined4 *)(uVar20 + lVar46),0x20);
  auVar73 = insertps(ZEXT416(*(uint *)(param_4 + lVar43 * 4)),*(undefined4 *)(param_4 + lVar42 * 4),
                     0x10);
  auVar73 = insertps(auVar73,*(undefined4 *)(param_4 + lVar34 * 4),0x20);
  auVar82 = insertps(auVar73,*(undefined4 *)(param_4 + lVar44 * 4),0x30);
  param_4 = param_4 + lVar44 * 4;
  auVar69 = insertps(auVar90,*(undefined4 *)(uVar24 + param_4),0x30);
  auVar90 = insertps(auVar61,*(undefined4 *)(uVar37 + param_4),0x30);
  lVar46 = param_5 + lVar28 * 4;
  auVar73 = insertps(ZEXT416(*(uint *)(param_5 + lVar28 * 4)),*(undefined4 *)(param_5 + lVar23 * 4),
                     0x10);
  lVar22 = param_5 + lVar23 * 4;
  auVar75 = insertps(ZEXT416(*(uint *)(uVar36 + lVar46)),*(undefined4 *)(uVar33 + lVar22),0x10);
  auVar61 = insertps(ZEXT416(*(uint *)(uVar27 + lVar46)),*(undefined4 *)(uVar19 + lVar22),0x10);
  auVar73 = insertps(auVar73,*(undefined4 *)(param_5 + lVar39 * 4),0x20);
  lVar46 = param_5 + lVar39 * 4;
  auVar75 = insertps(auVar75,*(undefined4 *)(uVar41 + lVar46),0x20);
  auVar61 = insertps(auVar61,*(undefined4 *)(uVar20 + lVar46),0x20);
  auVar73 = insertps(auVar73,*(undefined4 *)(param_5 + lVar31 * 4),0x30);
  lVar46 = param_5 + lVar31 * 4;
  auVar75 = insertps(auVar75,*(undefined4 *)(uVar24 + lVar46),0x30);
  auVar61 = insertps(auVar61,*(undefined4 *)(uVar37 + lVar46),0x30);
  lVar46 = param_5 + lVar29 * 4;
  auVar91 = insertps(ZEXT416(*(uint *)(param_5 + lVar29 * 4)),*(undefined4 *)(param_5 + lVar35 * 4),
                     0x10);
  lVar22 = param_5 + lVar35 * 4;
  auVar81 = insertps(ZEXT416(*(uint *)(uVar36 + lVar46)),*(undefined4 *)(uVar33 + lVar22),0x10);
  auVar77 = insertps(ZEXT416(*(uint *)(uVar27 + lVar46)),*(undefined4 *)(uVar19 + lVar22),0x10);
  local_108 = auVar70._0_4_;
  fStack_104 = auVar70._4_4_;
  fStack_100 = auVar70._8_4_;
  fStack_fc = auVar70._12_4_;
  auVar91 = insertps(auVar91,*(undefined4 *)(param_5 + lVar38 * 4),0x20);
  lVar46 = param_5 + lVar38 * 4;
  auVar81 = insertps(auVar81,*(undefined4 *)(uVar41 + lVar46),0x20);
  auVar70 = insertps(auVar77,*(undefined4 *)(uVar20 + lVar46),0x20);
  auVar91 = insertps(auVar91,*(undefined4 *)(param_5 + lVar40 * 4),0x30);
  lVar46 = param_5 + lVar40 * 4;
  auVar77 = insertps(auVar81,*(undefined4 *)(uVar24 + lVar46),0x30);
  auVar70 = insertps(auVar70,*(undefined4 *)(uVar37 + lVar46),0x30);
  local_f8 = auVar84._0_4_;
  fStack_f4 = auVar84._4_4_;
  fStack_f0 = auVar84._8_4_;
  fStack_ec = auVar84._12_4_;
  lVar46 = param_5 + lVar43 * 4;
  lVar22 = param_5 + lVar42 * 4;
  auVar84 = insertps(ZEXT416(*(uint *)(uVar36 + lVar46)),*(undefined4 *)(uVar33 + lVar22),0x10);
  auVar54._0_4_ =
       (auVar82._0_4_ * fVar56 + auVar80._0_4_) * (float)local_138._0_4_ +
       (auVar57._0_4_ * fVar56 + auVar79._0_4_) * (float)local_128._0_4_ +
       (auVar47._0_4_ * fVar56 + auVar78._0_4_) * (float)local_118._0_4_;
  auVar54._4_4_ =
       (auVar82._4_4_ * fVar58 + auVar80._4_4_) * (float)local_138._4_4_ +
       (auVar57._4_4_ * fVar58 + auVar79._4_4_) * (float)local_128._4_4_ +
       (auVar47._4_4_ * fVar58 + auVar78._4_4_) * (float)local_118._4_4_;
  auVar54._8_4_ =
       (auVar82._8_4_ * fVar59 + auVar80._8_4_) * (float)uStack_130 +
       (auVar57._8_4_ * fVar59 + auVar79._8_4_) * (float)uStack_120 +
       (auVar47._8_4_ * fVar59 + auVar78._8_4_) * (float)uStack_110;
  auVar54._12_4_ =
       (auVar82._12_4_ * fVar60 + auVar80._12_4_) * uStack_130._4_4_ +
       (auVar57._12_4_ * fVar60 + auVar79._12_4_) * uStack_120._4_4_ +
       (auVar47._12_4_ * fVar60 + auVar78._12_4_) * uStack_110._4_4_;
  auVar68._0_4_ =
       (auVar69._0_4_ * fVar56 + local_108) * (float)local_138._0_4_ +
       (auVar83._0_4_ * fVar56 + auVar74._0_4_) * (float)local_128._0_4_ +
       (auVar88._0_4_ * fVar56 + auVar86._0_4_) * (float)local_118._0_4_;
  auVar68._4_4_ =
       (auVar69._4_4_ * fVar58 + fStack_104) * (float)local_138._4_4_ +
       (auVar83._4_4_ * fVar58 + auVar74._4_4_) * (float)local_128._4_4_ +
       (auVar88._4_4_ * fVar58 + auVar86._4_4_) * (float)local_118._4_4_;
  auVar68._8_4_ =
       (auVar69._8_4_ * fVar59 + fStack_100) * (float)uStack_130 +
       (auVar83._8_4_ * fVar59 + auVar74._8_4_) * (float)uStack_120 +
       (auVar88._8_4_ * fVar59 + auVar86._8_4_) * (float)uStack_110;
  auVar68._12_4_ =
       (auVar69._12_4_ * fVar60 + fStack_fc) * uStack_130._4_4_ +
       (auVar83._12_4_ * fVar60 + auVar74._12_4_) * uStack_120._4_4_ +
       (auVar88._12_4_ * fVar60 + auVar86._12_4_) * uStack_110._4_4_;
  auVar66._0_4_ =
       (auVar90._0_4_ * fVar56 + local_f8) * (float)local_138._0_4_ +
       (auVar85._0_4_ * fVar56 + auVar76._0_4_) * (float)local_128._0_4_ +
       (auVar87._0_4_ * fVar56 + auVar67._0_4_) * (float)local_118._0_4_;
  auVar66._4_4_ =
       (auVar90._4_4_ * fVar58 + fStack_f4) * (float)local_138._4_4_ +
       (auVar85._4_4_ * fVar58 + auVar76._4_4_) * (float)local_128._4_4_ +
       (auVar87._4_4_ * fVar58 + auVar67._4_4_) * (float)local_118._4_4_;
  auVar66._8_4_ =
       (auVar90._8_4_ * fVar59 + fStack_f0) * (float)uStack_130 +
       (auVar85._8_4_ * fVar59 + auVar76._8_4_) * (float)uStack_120 +
       (auVar87._8_4_ * fVar59 + auVar67._8_4_) * (float)uStack_110;
  auVar66._12_4_ =
       (auVar90._12_4_ * fVar60 + fStack_ec) * uStack_130._4_4_ +
       (auVar85._12_4_ * fVar60 + auVar76._12_4_) * uStack_120._4_4_ +
       (auVar87._12_4_ * fVar60 + auVar67._12_4_) * uStack_110._4_4_;
  auVar79 = insertps(ZEXT416(*(uint *)(uVar27 + lVar46)),*(undefined4 *)(uVar19 + lVar22),0x10);
  lVar46 = param_5 + lVar34 * 4;
  auVar78 = insertps(auVar84,*(undefined4 *)(uVar41 + lVar46),0x20);
  auVar79 = insertps(auVar79,*(undefined4 *)(uVar20 + lVar46),0x20);
  auVar47 = insertps(ZEXT416(*(uint *)(param_5 + lVar43 * 4)),*(undefined4 *)(param_5 + lVar42 * 4),
                     0x10);
  auVar47 = insertps(auVar47,*(undefined4 *)(param_5 + lVar34 * 4),0x20);
  auVar47 = insertps(auVar47,*(undefined4 *)(param_5 + lVar44 * 4),0x30);
  param_5 = param_5 + lVar44 * 4;
  auVar78 = insertps(auVar78,*(undefined4 *)(uVar24 + param_5),0x30);
  auVar52._0_4_ =
       auVar47._0_4_ * (float)local_138._0_4_ +
       auVar91._0_4_ * (float)local_128._0_4_ + auVar73._0_4_ * (float)local_118._0_4_;
  auVar52._4_4_ =
       auVar47._4_4_ * (float)local_138._4_4_ +
       auVar91._4_4_ * (float)local_128._4_4_ + auVar73._4_4_ * (float)local_118._4_4_;
  auVar52._8_4_ =
       auVar47._8_4_ * (float)uStack_130 +
       auVar91._8_4_ * (float)uStack_120 + auVar73._8_4_ * (float)uStack_110;
  auVar52._12_4_ =
       auVar47._12_4_ * uStack_130._4_4_ +
       auVar91._12_4_ * uStack_120._4_4_ + auVar73._12_4_ * uStack_110._4_4_;
  auVar73 = insertps(auVar79,*(undefined4 *)(uVar37 + param_5),0x30);
  auVar89._0_4_ =
       auVar78._0_4_ * (float)local_138._0_4_ +
       auVar77._0_4_ * (float)local_128._0_4_ + auVar75._0_4_ * (float)local_118._0_4_;
  auVar89._4_4_ =
       auVar78._4_4_ * (float)local_138._4_4_ +
       auVar77._4_4_ * (float)local_128._4_4_ + auVar75._4_4_ * (float)local_118._4_4_;
  auVar89._8_4_ =
       auVar78._8_4_ * (float)uStack_130 +
       auVar77._8_4_ * (float)uStack_120 + auVar75._8_4_ * (float)uStack_110;
  auVar89._12_4_ =
       auVar78._12_4_ * uStack_130._4_4_ +
       auVar77._12_4_ * uStack_120._4_4_ + auVar75._12_4_ * uStack_110._4_4_;
  auVar50._0_4_ =
       auVar73._0_4_ * (float)local_138._0_4_ +
       auVar70._0_4_ * (float)local_128._0_4_ + auVar61._0_4_ * (float)local_118._0_4_;
  auVar50._4_4_ =
       auVar73._4_4_ * (float)local_138._4_4_ +
       auVar70._4_4_ * (float)local_128._4_4_ + auVar61._4_4_ * (float)local_118._4_4_;
  auVar50._8_4_ =
       auVar73._8_4_ * (float)uStack_130 +
       auVar70._8_4_ * (float)uStack_120 + auVar61._8_4_ * (float)uStack_110;
  auVar50._12_4_ =
       auVar73._12_4_ * uStack_130._4_4_ +
       auVar70._12_4_ * uStack_120._4_4_ + auVar61._12_4_ * uStack_110._4_4_;
  pfVar45 = (float *)(param_1 + uVar32 * 0xc);
  if ((~bVar21 & 0xf) == 0) {
    auVar62._4_4_ = auVar54._4_4_;
    auVar62._0_4_ = auVar54._0_4_;
    auVar62._8_4_ = auVar54._8_4_;
    auVar62._12_4_ = auVar54._12_4_;
    auVar73 = insertps(auVar62,auVar68,0x30);
    auVar72._4_4_ = auVar68._8_4_;
    auVar72._0_4_ = auVar68._4_4_;
    auVar72._8_4_ = auVar66._0_4_;
    auVar72._12_4_ = auVar66._4_4_;
    auVar73 = insertps(auVar73,auVar66,0x20);
    *pfVar45 = auVar73._0_4_;
    pfVar45[1] = auVar73._12_4_;
    pfVar45[2] = auVar73._8_4_;
    pfVar45[3] = auVar73._4_4_;
    auVar73 = blendps(auVar72,auVar54,4);
    pfVar45[4] = auVar73._0_4_;
    pfVar45[5] = auVar73._12_4_;
    pfVar45[6] = auVar73._8_4_;
    pfVar45[7] = auVar73._4_4_;
    pfVar45[8] = auVar66._8_4_;
    pfVar45[9] = auVar54._12_4_;
    pfVar45[10] = auVar68._12_4_;
    pfVar45[0xb] = auVar66._12_4_;
    auVar55._4_4_ = auVar52._4_4_;
    auVar55._0_4_ = auVar52._0_4_;
    auVar55._8_4_ = auVar52._8_4_;
    auVar55._12_4_ = auVar52._12_4_;
    auVar73 = insertps(auVar55,auVar89,0x30);
    auVar63._4_4_ = auVar89._8_4_;
    auVar63._0_4_ = auVar89._4_4_;
    auVar63._8_4_ = auVar50._0_4_;
    auVar63._12_4_ = auVar50._4_4_;
    auVar73 = insertps(auVar73,auVar50,0x20);
    puVar3 = (undefined4 *)(param_2 + uVar32 * 0xc);
    *puVar3 = auVar73._0_4_;
    puVar3[1] = auVar73._12_4_;
    puVar3[2] = auVar73._8_4_;
    puVar3[3] = auVar73._4_4_;
    auVar73 = blendps(auVar63,auVar52,4);
    puVar3 = (undefined4 *)(param_2 + 0x10 + uVar32 * 0xc);
    *puVar3 = auVar73._0_4_;
    puVar3[1] = auVar73._12_4_;
    puVar3[2] = auVar73._8_4_;
    puVar3[3] = auVar73._4_4_;
    pfVar45 = (float *)(param_2 + 0x20 + uVar32 * 0xc);
    *pfVar45 = auVar50._8_4_;
    pfVar45[1] = auVar52._12_4_;
    pfVar45[2] = auVar89._12_4_;
    pfVar45[3] = auVar50._12_4_;
  }
  else {
    if ((bVar21 & 1) != 0) {
      *pfVar45 = auVar54._0_4_;
    }
    if ((bVar21 & 2) != 0) {
      uVar4 = extractps(auVar54,1);
      *(undefined8 *)(pfVar45 + 3) = uVar4;
    }
    if ((bVar21 & 4) != 0) {
      uVar4 = extractps(auVar54,2);
      *(undefined8 *)(pfVar45 + 6) = uVar4;
    }
    if ((char)bVar21 < '\0') {
      uVar4 = extractps(auVar54,3);
      *(undefined8 *)(pfVar45 + 9) = uVar4;
    }
    if ((bVar21 & 1) != 0) {
      pfVar45[1] = auVar68._0_4_;
    }
    if ((bVar21 & 2) != 0) {
      uVar4 = extractps(auVar68,1);
      *(undefined8 *)(pfVar45 + 4) = uVar4;
    }
    if ((bVar21 & 4) != 0) {
      uVar4 = extractps(auVar68,2);
      *(undefined8 *)(pfVar45 + 7) = uVar4;
    }
    if ((char)bVar21 < '\0') {
      uVar4 = extractps(auVar68,3);
      *(undefined8 *)(pfVar45 + 10) = uVar4;
    }
    if ((bVar21 & 1) != 0) {
      pfVar45[2] = auVar66._0_4_;
    }
    if ((bVar21 & 2) != 0) {
      uVar4 = extractps(auVar66,1);
      *(undefined8 *)(pfVar45 + 5) = uVar4;
    }
    if ((bVar21 & 4) != 0) {
      uVar4 = extractps(auVar66,2);
      *(undefined8 *)(pfVar45 + 8) = uVar4;
    }
    if ((char)bVar21 < '\0') {
      uVar4 = extractps(auVar66,3);
      *(undefined8 *)(pfVar45 + 0xb) = uVar4;
    }
    pfVar45 = (float *)(param_2 + uVar32 * 0xc);
    if ((bVar21 & 1) != 0) {
      *pfVar45 = auVar52._0_4_;
    }
    if ((bVar21 & 2) != 0) {
      uVar4 = extractps(auVar52,1);
      *(undefined8 *)(pfVar45 + 3) = uVar4;
    }
    if ((bVar21 & 4) != 0) {
      uVar4 = extractps(auVar52,2);
      *(undefined8 *)(pfVar45 + 6) = uVar4;
    }
    if ((char)bVar21 < '\0') {
      uVar4 = extractps(auVar52,3);
      *(undefined8 *)(pfVar45 + 9) = uVar4;
    }
    if ((bVar21 & 1) != 0) {
      pfVar45[1] = auVar89._0_4_;
    }
    if ((bVar21 & 2) != 0) {
      uVar4 = extractps(auVar89,1);
      *(undefined8 *)(pfVar45 + 4) = uVar4;
    }
    if ((bVar21 & 4) != 0) {
      uVar4 = extractps(auVar89,2);
      *(undefined8 *)(pfVar45 + 7) = uVar4;
    }
    if ((char)bVar21 < '\0') {
      uVar4 = extractps(auVar89,3);
      *(undefined8 *)(pfVar45 + 10) = uVar4;
    }
    if ((bVar21 & 1) != 0) {
      pfVar45[2] = auVar50._0_4_;
    }
    if ((bVar21 & 2) != 0) {
      uVar4 = extractps(auVar50,1);
      *(undefined8 *)(pfVar45 + 5) = uVar4;
    }
    if ((bVar21 & 4) != 0) {
      uVar4 = extractps(auVar50,2);
      *(undefined8 *)(pfVar45 + 8) = uVar4;
    }
    if ((char)bVar21 < '\0') {
      uVar4 = extractps(auVar50,3);
      *(undefined8 *)(pfVar45 + 0xb) = uVar4;
    }
  }
  return;
}


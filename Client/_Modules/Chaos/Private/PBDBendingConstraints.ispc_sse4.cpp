// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// InitBendingConstraintsIsBuckled___un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector4_5D__3E_un_3C_Cunf_3E_un_3C_unb_3E_CunfCuni_sse4 @ 140062bf0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InitBendingConstraintsIsBuckled___un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector4_5D__3E_un_3C_Cunf_3E_un_3C_unb_3E_CunfCuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               uint param_6)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  ulonglong uVar7;
  undefined1 (*pauVar8) [16];
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  uint *puVar13;
  byte bVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  float fVar38;
  int iVar39;
  float fVar52;
  float fVar53;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar54;
  undefined1 auVar44 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar55;
  float fVar60;
  int iVar61;
  float fVar62;
  float fVar63;
  int iVar64;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar65;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar80;
  float fVar89;
  float fVar90;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar91;
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
  float fVar101;
  float fVar102;
  undefined1 auVar96 [16];
  float fVar103;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  float fVar104;
  float fVar109;
  float fVar111;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar113;
  undefined1 auVar107 [16];
  float fVar110;
  float fVar112;
  float fVar114;
  undefined1 auVar108 [16];
  float fVar115;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  float fVar126;
  undefined1 auVar127 [16];
  float fVar128;
  float fVar131;
  float fVar132;
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  float fVar133;
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  float fVar136;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  undefined1 auVar137 [16];
  float fVar144;
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  float fVar145;
  float fVar148;
  float fVar149;
  undefined1 auVar146 [16];
  float fVar150;
  undefined1 auVar147 [16];
  float fVar151;
  float fVar156;
  float fVar157;
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  float fVar158;
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 auVar45 [16];
  
  uVar16 = param_6 + 3;
  if (-1 < (int)param_6) {
    uVar16 = param_6;
  }
  uVar16 = uVar16 & 0xfffffffc;
  if ((int)uVar16 < 1) {
    uVar7 = 0;
  }
  else {
    uVar10 = 0;
    auVar43._4_4_ = _UNK_150b51104;
    auVar43._0_4_ = ___xmm_40490fdb40490fdb40490fdb40490fdb;
    auVar43._8_4_ = _UNK_150b51108;
    auVar43._12_4_ = _UNK_150b5110c;
    uVar7 = 0;
    auVar66 = ___xmm_3f8000003f8000003f8000003f800000;
    uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar25 = _UNK_15061cc74;
    uVar28 = _UNK_15061cc78;
    uVar29 = _UNK_15061cc7c;
    do {
      auVar88 = ___xmm_3f8000003f8000003f8000003f800000;
      uVar37 = _UNK_15061cc7c;
      uVar36 = _UNK_15061cc78;
      uVar33 = _UNK_15061cc74;
      uVar32 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      piVar1 = (int *)(param_2 + uVar10 * 4);
      piVar2 = (int *)(param_2 + 0x10 + uVar10 * 4);
      piVar3 = (int *)(param_2 + 0x20 + uVar10 * 4);
      piVar4 = (int *)(param_2 + 0x30 + uVar10 * 4);
      lVar12 = (longlong)(*piVar1 * 3);
      lVar9 = (longlong)(*piVar2 * 3);
      lVar19 = (longlong)(*piVar3 * 3);
      lVar21 = (longlong)(*piVar4 * 3);
      auVar152 = insertps(ZEXT416(*(uint *)(param_1 + lVar12 * 4)),
                          *(undefined4 *)(param_1 + lVar9 * 4),0x10);
      auVar152 = insertps(auVar152,*(undefined4 *)(param_1 + lVar19 * 4),0x20);
      auVar153 = insertps(auVar152,*(undefined4 *)(param_1 + lVar21 * 4),0x30);
      auVar152 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar12 * 4)),
                          *(undefined4 *)(param_1 + 4 + lVar9 * 4),0x10);
      auVar152 = insertps(auVar152,*(undefined4 *)(param_1 + 4 + lVar19 * 4),0x20);
      auVar146 = insertps(auVar152,*(undefined4 *)(param_1 + 4 + lVar21 * 4),0x30);
      auVar152 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar12 * 4)),
                          *(undefined4 *)(param_1 + 8 + lVar9 * 4),0x10);
      auVar152 = insertps(auVar152,*(undefined4 *)(param_1 + 8 + lVar19 * 4),0x20);
      auVar152 = insertps(auVar152,*(undefined4 *)(param_1 + 8 + lVar21 * 4),0x30);
      lVar12 = (longlong)(piVar1[1] * 3);
      lVar9 = (longlong)(piVar2[1] * 3);
      lVar19 = (longlong)(piVar3[1] * 3);
      lVar21 = (longlong)(piVar4[1] * 3);
      auVar72 = insertps(ZEXT416(*(uint *)(param_1 + lVar12 * 4)),
                         *(undefined4 *)(param_1 + lVar9 * 4),0x10);
      auVar72 = insertps(auVar72,*(undefined4 *)(param_1 + lVar19 * 4),0x20);
      auVar72 = insertps(auVar72,*(undefined4 *)(param_1 + lVar21 * 4),0x30);
      auVar105 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar12 * 4)),
                          *(undefined4 *)(param_1 + 4 + lVar9 * 4),0x10);
      auVar105 = insertps(auVar105,*(undefined4 *)(param_1 + 4 + lVar19 * 4),0x20);
      auVar106 = insertps(auVar105,*(undefined4 *)(param_1 + 4 + lVar21 * 4),0x30);
      auVar105 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar12 * 4)),
                          *(undefined4 *)(param_1 + 8 + lVar9 * 4),0x10);
      auVar105 = insertps(auVar105,*(undefined4 *)(param_1 + 8 + lVar19 * 4),0x20);
      auVar137 = insertps(auVar105,*(undefined4 *)(param_1 + 8 + lVar21 * 4),0x30);
      lVar12 = (longlong)(piVar1[2] * 3);
      lVar9 = (longlong)(piVar2[2] * 3);
      lVar19 = (longlong)(piVar3[2] * 3);
      lVar21 = (longlong)(piVar4[2] * 3);
      auVar105 = insertps(ZEXT416(*(uint *)(param_1 + lVar12 * 4)),
                          *(undefined4 *)(param_1 + lVar9 * 4),0x10);
      auVar105 = insertps(auVar105,*(undefined4 *)(param_1 + lVar19 * 4),0x20);
      auVar105 = insertps(auVar105,*(undefined4 *)(param_1 + lVar21 * 4),0x30);
      auVar129 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar12 * 4)),
                          *(undefined4 *)(param_1 + 4 + lVar9 * 4),0x10);
      auVar129 = insertps(auVar129,*(undefined4 *)(param_1 + 4 + lVar19 * 4),0x20);
      auVar130 = insertps(auVar129,*(undefined4 *)(param_1 + 4 + lVar21 * 4),0x30);
      auVar129 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar12 * 4)),
                          *(undefined4 *)(param_1 + 8 + lVar9 * 4),0x10);
      auVar129 = insertps(auVar129,*(undefined4 *)(param_1 + 8 + lVar19 * 4),0x20);
      auVar129 = insertps(auVar129,*(undefined4 *)(param_1 + 8 + lVar21 * 4),0x30);
      puVar13 = (uint *)(param_3 + (uVar10 & 0xffffffff));
      fVar141 = auVar43._0_4_;
      fVar143 = auVar43._4_4_;
      fVar120 = auVar43._8_4_;
      fVar122 = auVar43._12_4_;
      fVar110 = auVar72._0_4_;
      fVar112 = auVar72._4_4_;
      fVar114 = auVar72._12_4_;
      fVar151 = auVar153._0_4_;
      auVar93._0_4_ = fVar110 - fVar151;
      fVar156 = auVar153._4_4_;
      auVar93._4_4_ = fVar112 - fVar156;
      fVar126 = auVar72._8_4_;
      fVar157 = auVar153._8_4_;
      auVar93._8_4_ = fVar126 - fVar157;
      fVar158 = auVar153._12_4_;
      auVar93._12_4_ = fVar114 - fVar158;
      fVar104 = auVar106._0_4_;
      fVar109 = auVar106._4_4_;
      fVar113 = auVar106._12_4_;
      fVar145 = auVar146._0_4_;
      auVar153._0_4_ = fVar104 - fVar145;
      fVar148 = auVar146._4_4_;
      auVar153._4_4_ = fVar109 - fVar148;
      fVar111 = auVar106._8_4_;
      fVar149 = auVar146._8_4_;
      auVar153._8_4_ = fVar111 - fVar149;
      fVar150 = auVar146._12_4_;
      auVar153._12_4_ = fVar113 - fVar150;
      fVar136 = auVar137._0_4_;
      fVar140 = auVar137._4_4_;
      fVar144 = auVar137._12_4_;
      fVar55 = auVar152._0_4_;
      auVar96._0_4_ = fVar136 - fVar55;
      fVar60 = auVar152._4_4_;
      auVar96._4_4_ = fVar140 - fVar60;
      fVar62 = auVar152._8_4_;
      fVar142 = auVar137._8_4_;
      auVar96._8_4_ = fVar142 - fVar62;
      fVar63 = auVar152._12_4_;
      auVar96._12_4_ = fVar144 - fVar63;
      auVar152._0_4_ = auVar93._0_4_ * auVar93._0_4_;
      auVar152._4_4_ = auVar93._4_4_ * auVar93._4_4_;
      auVar152._8_4_ = auVar93._8_4_ * auVar93._8_4_;
      auVar152._12_4_ = auVar93._12_4_ * auVar93._12_4_;
      auVar124._0_4_ =
           auVar96._0_4_ * auVar96._0_4_ + auVar153._0_4_ * auVar153._0_4_ + auVar152._0_4_;
      auVar124._4_4_ =
           auVar96._4_4_ * auVar96._4_4_ + auVar153._4_4_ * auVar153._4_4_ + auVar152._4_4_;
      auVar124._8_4_ =
           auVar96._8_4_ * auVar96._8_4_ + auVar153._8_4_ * auVar153._8_4_ + auVar152._8_4_;
      auVar124._12_4_ =
           auVar96._12_4_ * auVar96._12_4_ + auVar153._12_4_ * auVar153._12_4_ + auVar152._12_4_;
      auVar43 = sqrtps(auVar152,auVar124);
      uVar23 = -(uint)(auVar124._0_4_ <= ___xmm_00800000008000000080000000800000);
      uVar26 = -(uint)(auVar124._4_4_ <= _UNK_1508be494);
      uVar30 = -(uint)(auVar124._8_4_ <= _UNK_1508be498);
      uVar34 = -(uint)(auVar124._12_4_ <= _UNK_1508be49c);
      auVar72._4_4_ = uVar26;
      auVar72._0_4_ = uVar23;
      auVar106 = divps(auVar93,auVar43);
      auVar152 = divps(auVar153,auVar43);
      auVar146 = divps(auVar96,auVar43);
      auVar72._8_4_ = uVar30;
      auVar72._12_4_ = uVar34;
      auVar153 = blendvps(auVar106,auVar66,auVar72);
      fVar95 = fVar151 - auVar105._0_4_;
      fVar101 = fVar156 - auVar105._4_4_;
      fVar102 = fVar157 - auVar105._8_4_;
      fVar103 = fVar158 - auVar105._12_4_;
      fVar65 = fVar145 - auVar130._0_4_;
      fVar69 = fVar148 - auVar130._4_4_;
      fVar70 = fVar149 - auVar130._8_4_;
      fVar71 = fVar150 - auVar130._12_4_;
      fVar38 = fVar110 - auVar105._0_4_;
      fVar52 = fVar112 - auVar105._4_4_;
      fVar53 = fVar126 - auVar105._8_4_;
      fVar54 = fVar114 - auVar105._12_4_;
      fVar80 = fVar104 - auVar130._0_4_;
      fVar89 = fVar109 - auVar130._4_4_;
      fVar90 = fVar111 - auVar130._8_4_;
      fVar91 = fVar113 - auVar130._12_4_;
      fVar115 = fVar55 - auVar129._0_4_;
      fVar119 = fVar60 - auVar129._4_4_;
      fVar121 = fVar62 - auVar129._8_4_;
      fVar123 = fVar63 - auVar129._12_4_;
      fVar128 = fVar136 - auVar129._0_4_;
      fVar131 = fVar140 - auVar129._4_4_;
      fVar132 = fVar142 - auVar129._8_4_;
      fVar133 = fVar144 - auVar129._12_4_;
      auVar97._0_4_ = fVar95 * fVar80 - fVar38 * fVar65;
      auVar97._4_4_ = fVar101 * fVar89 - fVar52 * fVar69;
      auVar97._8_4_ = fVar102 * fVar90 - fVar53 * fVar70;
      auVar97._12_4_ = fVar103 * fVar91 - fVar54 * fVar71;
      lVar21 = (longlong)(piVar1[3] * 3);
      lVar19 = (longlong)(piVar2[3] * 3);
      lVar9 = (longlong)(piVar3[3] * 3);
      lVar12 = (longlong)(piVar4[3] * 3);
      auVar130._0_4_ = fVar65 * fVar128 - fVar80 * fVar115;
      auVar130._4_4_ = fVar69 * fVar131 - fVar89 * fVar119;
      auVar130._8_4_ = fVar70 * fVar132 - fVar90 * fVar121;
      auVar130._12_4_ = fVar71 * fVar133 - fVar91 * fVar123;
      auVar134._0_4_ = fVar38 * fVar115 - fVar128 * fVar95;
      auVar134._4_4_ = fVar52 * fVar119 - fVar131 * fVar101;
      auVar134._8_4_ = fVar53 * fVar121 - fVar132 * fVar102;
      auVar134._12_4_ = fVar54 * fVar123 - fVar133 * fVar103;
      auVar43 = insertps(ZEXT416(*(uint *)(param_1 + lVar21 * 4)),
                         *(undefined4 *)(param_1 + lVar19 * 4),0x10);
      auVar43 = insertps(auVar43,*(undefined4 *)(param_1 + lVar9 * 4),0x20);
      auVar105 = insertps(auVar43,*(undefined4 *)(param_1 + lVar12 * 4),0x30);
      auVar43 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar21 * 4)),
                         *(undefined4 *)(param_1 + 4 + lVar19 * 4),0x10);
      auVar43 = insertps(auVar43,*(undefined4 *)(param_1 + 4 + lVar9 * 4),0x20);
      auVar127._0_4_ =
           auVar97._0_4_ * auVar97._0_4_ +
           auVar134._0_4_ * auVar134._0_4_ + auVar130._0_4_ * auVar130._0_4_;
      auVar127._4_4_ =
           auVar97._4_4_ * auVar97._4_4_ +
           auVar134._4_4_ * auVar134._4_4_ + auVar130._4_4_ * auVar130._4_4_;
      auVar127._8_4_ =
           auVar97._8_4_ * auVar97._8_4_ +
           auVar134._8_4_ * auVar134._8_4_ + auVar130._8_4_ * auVar130._8_4_;
      auVar127._12_4_ =
           auVar97._12_4_ * auVar97._12_4_ +
           auVar134._12_4_ * auVar134._12_4_ + auVar130._12_4_ * auVar130._12_4_;
      auVar106 = sqrtps(auVar127,auVar127);
      auVar66 = divps(auVar130,auVar106);
      auVar129 = divps(auVar134,auVar106);
      auVar72 = divps(auVar97,auVar106);
      uVar24 = -(uint)(auVar106._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77);
      uVar27 = -(uint)(auVar106._4_4_ <= _UNK_1506895d4);
      uVar31 = -(uint)(auVar106._8_4_ <= _UNK_1506895d8);
      uVar35 = -(uint)(auVar106._12_4_ <= _UNK_1506895dc);
      fVar95 = (float)(~uVar24 & auVar66._0_4_);
      fVar101 = (float)(~uVar27 & auVar66._4_4_);
      fVar102 = (float)(~uVar31 & auVar66._8_4_);
      fVar103 = (float)(~uVar35 & auVar66._12_4_);
      auVar43 = insertps(auVar43,*(undefined4 *)(param_1 + 4 + lVar12 * 4),0x30);
      fVar65 = (float)(~uVar24 & auVar129._0_4_);
      fVar69 = (float)(~uVar27 & auVar129._4_4_);
      fVar70 = (float)(~uVar31 & auVar129._8_4_);
      fVar71 = (float)(~uVar35 & auVar129._12_4_);
      auVar66 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar21 * 4)),
                         *(undefined4 *)(param_1 + 8 + lVar19 * 4),0x10);
      fVar80 = (float)(~uVar24 & auVar72._0_4_);
      fVar89 = (float)(~uVar27 & auVar72._4_4_);
      fVar90 = (float)(~uVar31 & auVar72._8_4_);
      fVar91 = (float)(~uVar35 & auVar72._12_4_);
      auVar66 = insertps(auVar66,*(undefined4 *)(param_1 + 8 + lVar9 * 4),0x20);
      auVar137._0_4_ = fVar110 - auVar105._0_4_;
      auVar137._4_4_ = fVar112 - auVar105._4_4_;
      auVar137._8_4_ = fVar126 - auVar105._8_4_;
      auVar137._12_4_ = fVar114 - auVar105._12_4_;
      fVar151 = fVar151 - auVar105._0_4_;
      fVar156 = fVar156 - auVar105._4_4_;
      fVar157 = fVar157 - auVar105._8_4_;
      fVar158 = fVar158 - auVar105._12_4_;
      auVar66 = insertps(auVar66,*(undefined4 *)(param_1 + 8 + lVar12 * 4),0x30);
      fVar104 = fVar104 - auVar43._0_4_;
      fVar109 = fVar109 - auVar43._4_4_;
      fVar111 = fVar111 - auVar43._8_4_;
      fVar113 = fVar113 - auVar43._12_4_;
      fVar145 = fVar145 - auVar43._0_4_;
      fVar148 = fVar148 - auVar43._4_4_;
      fVar149 = fVar149 - auVar43._8_4_;
      fVar150 = fVar150 - auVar43._12_4_;
      fVar136 = fVar136 - auVar66._0_4_;
      fVar140 = fVar140 - auVar66._4_4_;
      fVar142 = fVar142 - auVar66._8_4_;
      fVar144 = fVar144 - auVar66._12_4_;
      fVar55 = fVar55 - auVar66._0_4_;
      fVar60 = fVar60 - auVar66._4_4_;
      fVar62 = fVar62 - auVar66._8_4_;
      fVar63 = fVar63 - auVar66._12_4_;
      auVar66._0_4_ = auVar137._0_4_ * fVar145 - fVar151 * fVar104;
      auVar66._4_4_ = auVar137._4_4_ * fVar148 - fVar156 * fVar109;
      auVar66._8_4_ = auVar137._8_4_ * fVar149 - fVar157 * fVar111;
      auVar66._12_4_ = auVar137._12_4_ * fVar150 - fVar158 * fVar113;
      auVar107._0_4_ = fVar104 * fVar55 - fVar145 * fVar136;
      auVar107._4_4_ = fVar109 * fVar60 - fVar148 * fVar140;
      auVar107._8_4_ = fVar111 * fVar62 - fVar149 * fVar142;
      auVar107._12_4_ = fVar113 * fVar63 - fVar150 * fVar144;
      auVar98._0_4_ = fVar151 * fVar136 - fVar55 * auVar137._0_4_;
      auVar98._4_4_ = fVar156 * fVar140 - fVar60 * auVar137._4_4_;
      auVar98._8_4_ = fVar157 * fVar142 - fVar62 * auVar137._8_4_;
      auVar98._12_4_ = fVar158 * fVar144 - fVar63 * auVar137._12_4_;
      auVar106._0_4_ =
           auVar66._0_4_ * auVar66._0_4_ +
           auVar98._0_4_ * auVar98._0_4_ + auVar107._0_4_ * auVar107._0_4_;
      auVar106._4_4_ =
           auVar66._4_4_ * auVar66._4_4_ +
           auVar98._4_4_ * auVar98._4_4_ + auVar107._4_4_ * auVar107._4_4_;
      auVar106._8_4_ =
           auVar66._8_4_ * auVar66._8_4_ +
           auVar98._8_4_ * auVar98._8_4_ + auVar107._8_4_ * auVar107._8_4_;
      auVar106._12_4_ =
           auVar66._12_4_ * auVar66._12_4_ +
           auVar98._12_4_ * auVar98._12_4_ + auVar107._12_4_ * auVar107._12_4_;
      auVar72 = sqrtps(auVar137,auVar106);
      auVar106 = divps(auVar107,auVar72);
      auVar105 = divps(auVar98,auVar72);
      auVar43 = divps(auVar66,auVar72);
      uVar24 = -(uint)(auVar72._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77);
      uVar27 = -(uint)(auVar72._4_4_ <= _UNK_1506895d4);
      uVar31 = -(uint)(auVar72._8_4_ <= _UNK_1506895d8);
      uVar35 = -(uint)(auVar72._12_4_ <= _UNK_1506895dc);
      fVar38 = (float)(~uVar24 & auVar106._0_4_);
      fVar52 = (float)(~uVar27 & auVar106._4_4_);
      fVar53 = (float)(~uVar31 & auVar106._8_4_);
      fVar54 = (float)(~uVar35 & auVar106._12_4_);
      fVar111 = (float)(~uVar24 & auVar105._0_4_);
      fVar110 = (float)(~uVar27 & auVar105._4_4_);
      fVar112 = (float)(~uVar31 & auVar105._8_4_);
      fVar114 = (float)(~uVar35 & auVar105._12_4_);
      fVar55 = (float)(~uVar24 & auVar43._0_4_);
      fVar60 = (float)(~uVar27 & auVar43._4_4_);
      fVar62 = (float)(~uVar31 & auVar43._8_4_);
      fVar63 = (float)(~uVar35 & auVar43._12_4_);
      auVar129._0_4_ =
           (fVar95 * fVar55 - fVar80 * fVar38) * (float)(~uVar23 & auVar152._0_4_) +
           (fVar80 * fVar111 - fVar65 * fVar55) * auVar153._0_4_ +
           (fVar65 * fVar38 - fVar95 * fVar111) * (float)(~uVar23 & auVar146._0_4_);
      auVar129._4_4_ =
           (fVar101 * fVar60 - fVar89 * fVar52) * (float)(~uVar26 & auVar152._4_4_) +
           (fVar89 * fVar110 - fVar69 * fVar60) * auVar153._4_4_ +
           (fVar69 * fVar52 - fVar101 * fVar110) * (float)(~uVar26 & auVar146._4_4_);
      auVar129._8_4_ =
           (fVar102 * fVar62 - fVar90 * fVar53) * (float)(~uVar30 & auVar152._8_4_) +
           (fVar90 * fVar112 - fVar70 * fVar62) * auVar153._8_4_ +
           (fVar70 * fVar53 - fVar102 * fVar112) * (float)(~uVar30 & auVar146._8_4_);
      auVar129._12_4_ =
           (fVar103 * fVar63 - fVar91 * fVar54) * (float)(~uVar34 & auVar152._12_4_) +
           (fVar91 * fVar114 - fVar71 * fVar63) * auVar153._12_4_ +
           (fVar71 * fVar54 - fVar103 * fVar114) * (float)(~uVar34 & auVar146._12_4_);
      auVar146._0_4_ = fVar55 * fVar80 + fVar111 * fVar65 + fVar38 * fVar95;
      auVar146._4_4_ = fVar60 * fVar89 + fVar110 * fVar69 + fVar52 * fVar101;
      auVar146._8_4_ = fVar62 * fVar90 + fVar112 * fVar70 + fVar53 * fVar102;
      auVar146._12_4_ = fVar63 * fVar91 + fVar114 * fVar71 + fVar54 * fVar103;
      auVar43 = maxps(auVar146,___xmm_bf800000bf800000bf800000bf800000);
      auVar152 = minps(auVar43,___xmm_3f8000003f8000003f8000003f800000);
      auVar43 = maxps(auVar129,___xmm_bf800000bf800000bf800000bf800000);
      auVar66 = minps(auVar43,___xmm_3f8000003f8000003f8000003f800000);
      auVar43 = divps(auVar66,auVar152);
      auVar147._0_4_ = (uint)auVar43._0_4_ ^ __xmm_80000000800000008000000080000000;
      auVar147._4_4_ = (uint)auVar43._4_4_ ^ _UNK_150651574;
      auVar147._8_4_ = (uint)auVar43._8_4_ ^ _UNK_150651578;
      auVar147._12_4_ = (uint)auVar43._12_4_ ^ _UNK_15065157c;
      auVar72 = maxps(auVar147,auVar43);
      auVar105._4_4_ = -(uint)(__xmm_3f8000003f8000003f8000003f800000._4_4_ < auVar72._4_4_);
      auVar105._0_4_ = -(uint)((float)__xmm_3f8000003f8000003f8000003f800000 < auVar72._0_4_);
      auVar105._8_4_ = -(uint)(__xmm_3f8000003f8000003f8000003f800000._8_4_ < auVar72._8_4_);
      auVar105._12_4_ = -(uint)(__xmm_3f8000003f8000003f8000003f800000._12_4_ < auVar72._12_4_);
      iVar11 = movmskps(piVar4[3] * 3,auVar105);
      if (iVar11 != 0) {
        auVar153 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar72);
      }
      auVar72 = blendvps(auVar72,auVar153,auVar105);
      fVar38 = auVar72._0_4_;
      fVar52 = auVar72._4_4_;
      fVar53 = auVar72._8_4_;
      fVar54 = auVar72._12_4_;
      fVar55 = fVar38 * fVar38;
      fVar60 = fVar52 * fVar52;
      fVar62 = fVar53 * fVar53;
      fVar63 = fVar54 * fVar54;
      auVar92._0_4_ =
           (((((((fVar55 * ___xmm_bb9918b7bb9918b7bb9918b7bb9918b7 +
                 ___xmm_3cc6061b3cc6061b3cc6061b3cc6061b) * fVar55 +
                ___xmm_bd732a49bd732a49bd732a49bd732a49) * fVar55 +
               ___xmm_3dcadb2a3dcadb2a3dcadb2a3dcadb2a) * fVar55 +
              ___xmm_be0f8549be0f8549be0f8549be0f8549) * fVar55 +
             ___xmm_3e4c7b543e4c7b543e4c7b543e4c7b54) * fVar55 +
            ___xmm_beaaa8cfbeaaa8cfbeaaa8cfbeaaa8cf) * fVar55 +
           ___xmm_3f7ffffe3f7ffffe3f7ffffe3f7ffffe) * fVar38;
      auVar92._4_4_ =
           (((((((fVar60 * _UNK_150b51114 + _UNK_150b51124) * fVar60 + _UNK_150b51134) * fVar60 +
               _UNK_150b51144) * fVar60 + _UNK_150b51154) * fVar60 + _UNK_150b51164) * fVar60 +
            _UNK_150b51174) * fVar60 + _UNK_150b51184) * fVar52;
      auVar92._8_4_ =
           (((((((fVar62 * _UNK_150b51118 + _UNK_150b51128) * fVar62 + _UNK_150b51138) * fVar62 +
               _UNK_150b51148) * fVar62 + _UNK_150b51158) * fVar62 + _UNK_150b51168) * fVar62 +
            _UNK_150b51178) * fVar62 + _UNK_150b51188) * fVar53;
      auVar92._12_4_ =
           (((((((fVar63 * _UNK_150b5111c + _UNK_150b5112c) * fVar63 + _UNK_150b5113c) * fVar63 +
               _UNK_150b5114c) * fVar63 + _UNK_150b5115c) * fVar63 + _UNK_150b5116c) * fVar63 +
            _UNK_150b5117c) * fVar63 + _UNK_150b5118c) * fVar54;
      auVar81._0_4_ = ___xmm_3fc90fdb3fc90fdb3fc90fdb3fc90fdb - auVar92._0_4_;
      auVar81._4_4_ = _UNK_150b51194 - auVar92._4_4_;
      auVar81._8_4_ = _UNK_150b51198 - auVar92._8_4_;
      auVar81._12_4_ = _UNK_150b5119c - auVar92._12_4_;
      auVar72 = blendvps(auVar92,auVar81,auVar105);
      auVar40._4_4_ = -(uint)(auVar43._4_4_ < 0.0);
      auVar40._0_4_ = -(uint)(auVar43._0_4_ < 0.0);
      auVar82._0_4_ = auVar72._0_4_ ^ __xmm_80000000800000008000000080000000;
      auVar82._4_4_ = auVar72._4_4_ ^ _UNK_150651574;
      auVar82._8_4_ = auVar72._8_4_ ^ _UNK_150651578;
      auVar82._12_4_ = auVar72._12_4_ ^ _UNK_15065157c;
      auVar40._8_4_ = -(uint)(auVar43._8_4_ < 0.0);
      auVar40._12_4_ = -(uint)(auVar43._12_4_ < 0.0);
      auVar72 = blendvps(auVar72,auVar82,auVar40);
      auVar41._4_4_ = -(uint)(auVar66._4_4_ < 0.0);
      auVar41._0_4_ = -(uint)(auVar66._0_4_ < 0.0);
      auVar43._4_4_ = _UNK_150b51104;
      auVar43._0_4_ = ___xmm_40490fdb40490fdb40490fdb40490fdb;
      auVar43._8_4_ = _UNK_150b51108;
      auVar43._12_4_ = _UNK_150b5110c;
      auVar41._8_4_ = -(uint)(auVar66._8_4_ < 0.0);
      auVar41._12_4_ = -(uint)(auVar66._12_4_ < 0.0);
      auVar66 = blendvps(auVar43,___xmm_c0490fdbc0490fdbc0490fdbc0490fdb,auVar41);
      auVar42._4_4_ =
           -(uint)(_UNK_150b51104 -
                   (float)((uint)((float)(auVar66._4_4_ & -(uint)(auVar152._4_4_ < 0.0)) +
                                 auVar72._4_4_) & _UNK_15061cc74) <
                  (fVar143 - (float)(puVar13[1] & uVar25)) * param_5);
      auVar42._0_4_ =
           -(uint)(___xmm_40490fdb40490fdb40490fdb40490fdb -
                   (float)((uint)((float)(auVar66._0_4_ & -(uint)(auVar152._0_4_ < 0.0)) +
                                 auVar72._0_4_) & __xmm_7fffffff7fffffff7fffffff7fffffff) <
                  (fVar141 - (float)(*puVar13 & uVar6)) * param_5);
      auVar42._8_4_ =
           -(uint)(_UNK_150b51108 -
                   (float)((uint)((float)(auVar66._8_4_ & -(uint)(auVar152._8_4_ < 0.0)) +
                                 auVar72._8_4_) & _UNK_15061cc78) <
                  (fVar120 - (float)(puVar13[2] & uVar28)) * param_5);
      auVar42._12_4_ =
           -(uint)(_UNK_150b5110c -
                   (float)((uint)((float)(auVar66._12_4_ & -(uint)(auVar152._12_4_ < 0.0)) +
                                 auVar72._12_4_) & _UNK_15061cc7c) <
                  (fVar122 - (float)(puVar13[3] & uVar29)) * param_5);
      auVar66 = packssdw(auVar42,auVar42);
      auVar66 = packsswb(auVar66,auVar66);
      *(uint *)(param_4 + uVar7) = auVar66._0_4_ & (uint)__xmm_00000000000000000000000001010101;
      uVar7 = uVar7 + 4;
      uVar10 = uVar10 + 0x10;
      auVar66 = auVar88;
      uVar6 = uVar32;
      uVar25 = uVar33;
      uVar28 = uVar36;
      uVar29 = uVar37;
    } while ((int)uVar7 < (int)uVar16);
  }
  uVar6 = (uint)uVar7;
  if ((int)uVar6 < (int)param_6) {
    auVar88._0_4_ =
         -(uint)((int)(uVar6 | (uint)__xmm_00000003000000020000000100000000) < (int)param_6);
    auVar88._4_4_ =
         -(uint)((int)(uVar6 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_6);
    auVar88._8_4_ = -(uint)((int)(uVar6 | _UNK_150631e08) < (int)param_6);
    auVar88._12_4_ = -(uint)((int)(uVar6 | _UNK_150631e0c) < (int)param_6);
    uVar7 = uVar7 & 0xffffffff;
    pauVar8 = (undefined1 (*) [16])(param_2 + uVar7 * 0x10);
    uVar16 = movmskps(uVar16,auVar88);
    bVar14 = (char)((char)uVar16 << 4) >> 4;
    if (uVar16 == 0xf) {
      auVar43 = *pauVar8;
      iVar61 = *(int *)pauVar8[1];
      auVar66 = pauVar8[2];
      iVar64 = *(int *)pauVar8[3];
      auVar74._0_8_ = auVar43._0_8_;
      auVar74._8_4_ = auVar43._4_4_;
      auVar74._12_4_ = *(undefined4 *)(pauVar8[1] + 4);
      iVar11 = auVar43._0_4_;
      auVar84._0_8_ = CONCAT44(*(undefined4 *)(pauVar8[1] + 8),auVar43._8_4_);
      auVar84._8_4_ = auVar43._12_4_;
      auVar84._12_4_ = *(undefined4 *)(pauVar8[1] + 0xc);
      auVar45._0_8_ = auVar66._0_8_;
      auVar45._8_4_ = auVar66._4_4_;
      auVar45._12_4_ = *(undefined4 *)(pauVar8[3] + 4);
      iVar39 = auVar66._0_4_;
      auVar67._0_8_ = CONCAT44(*(undefined4 *)(pauVar8[3] + 8),auVar66._8_4_);
      auVar67._8_4_ = auVar66._12_4_;
      auVar67._12_4_ = *(undefined4 *)(pauVar8[3] + 0xc);
      auVar73._8_8_ = auVar45._8_8_;
      auVar73._0_8_ = auVar74._8_8_;
      auVar116._8_8_ = auVar67._0_8_;
      auVar116._0_8_ = auVar84._0_8_;
      auVar83._8_8_ = auVar67._8_8_;
      auVar83._0_8_ = auVar84._8_8_;
    }
    else {
      auVar44._0_4_ = ___xmm_00000030000000200000001000000000 & auVar88._0_4_;
      auVar44._4_4_ = _UNK_150b511c4 & auVar88._4_4_;
      auVar44._8_4_ = _UNK_150b511c8 & auVar88._8_4_;
      auVar44._12_4_ = _UNK_150b511cc & auVar88._12_4_;
      lVar12 = extractps(auVar44,1);
      lVar19 = extractps(auVar44,2);
      lVar9 = extractps(auVar44,3);
      iVar11 = *(int *)*pauVar8;
      iVar61 = *(int *)(*pauVar8 + lVar12);
      iVar39 = *(int *)(*pauVar8 + lVar19);
      iVar64 = *(int *)(*pauVar8 + lVar9);
      auVar43 = ___xmm_00000034000000240000001400000004 & auVar88;
      auVar73._4_4_ = *(undefined4 *)(*pauVar8 + auVar43._4_4_);
      auVar73._0_4_ = *(undefined4 *)(*pauVar8 + auVar43._0_4_);
      auVar73._12_4_ = *(undefined4 *)(*pauVar8 + auVar43._12_4_);
      auVar73._8_4_ = *(undefined4 *)(*pauVar8 + auVar43._8_4_);
      auVar43 = ___xmm_00000038000000280000001800000008 & auVar88;
      auVar116._4_4_ = *(undefined4 *)(*pauVar8 + auVar43._4_4_);
      auVar116._0_4_ = *(undefined4 *)(*pauVar8 + auVar43._0_4_);
      auVar116._12_4_ = *(undefined4 *)(*pauVar8 + auVar43._12_4_);
      auVar116._8_4_ = *(undefined4 *)(*pauVar8 + auVar43._8_4_);
      auVar43 = ___xmm_0000003c0000002c0000001c0000000c & auVar88;
      auVar83._4_4_ = *(undefined4 *)(*pauVar8 + auVar43._4_4_);
      auVar83._0_4_ = *(undefined4 *)(*pauVar8 + auVar43._0_4_);
      auVar83._12_4_ = *(undefined4 *)(*pauVar8 + auVar43._12_4_);
      auVar83._8_4_ = *(undefined4 *)(*pauVar8 + auVar43._8_4_);
    }
    auVar46._4_4_ = iVar61 * 3;
    auVar46._0_4_ = iVar11 * 3;
    auVar46._8_4_ = iVar39 * 3;
    auVar46._12_4_ = iVar64 * 3;
    auVar46 = auVar46 & auVar88;
    lVar9 = param_1 + (longlong)auVar46._0_4_ * 4;
    lVar12 = param_1 + (longlong)auVar46._4_4_ * 4;
    lVar19 = param_1 + (longlong)auVar46._8_4_ * 4;
    auVar106 = ___xmm_00000004000000040000000400000004 & auVar88;
    uVar22 = (ulonglong)auVar106._4_4_;
    uVar15 = (ulonglong)auVar106._0_4_;
    uVar20 = (ulonglong)auVar106._8_4_;
    auVar43 = insertps(ZEXT416(*(uint *)(uVar15 + lVar9)),*(undefined4 *)(uVar22 + lVar12),0x10);
    auVar43 = insertps(auVar43,*(undefined4 *)(uVar20 + lVar19),0x20);
    auVar137 = ___xmm_00000008000000080000000800000008 & auVar88;
    uVar17 = (ulonglong)auVar137._4_4_;
    uVar10 = (ulonglong)auVar137._0_4_;
    uVar18 = (ulonglong)auVar137._8_4_;
    auVar66 = insertps(ZEXT416(*(uint *)(uVar10 + lVar9)),*(undefined4 *)(uVar17 + lVar12),0x10);
    auVar66 = insertps(auVar66,*(undefined4 *)(uVar18 + lVar19),0x20);
    auVar138._4_4_ = auVar73._4_4_ * 3;
    auVar138._0_4_ = auVar73._0_4_ * 3;
    auVar138._8_4_ = auVar73._8_4_ * 3;
    auVar138._12_4_ = auVar73._12_4_ * 3;
    auVar138 = auVar138 & auVar88;
    lVar9 = param_1 + (longlong)auVar138._0_4_ * 4;
    lVar12 = param_1 + (longlong)auVar138._4_4_ * 4;
    auVar152 = insertps(ZEXT416(*(uint *)(uVar15 + lVar9)),*(undefined4 *)(uVar22 + lVar12),0x10);
    auVar130 = insertps(ZEXT416(*(uint *)(uVar10 + lVar9)),*(undefined4 *)(uVar17 + lVar12),0x10);
    auVar154._4_4_ = auVar116._4_4_ * 3;
    auVar154._0_4_ = auVar116._0_4_ * 3;
    auVar154._8_4_ = auVar116._8_4_ * 3;
    auVar154._12_4_ = auVar116._12_4_ * 3;
    auVar154 = auVar154 & auVar88;
    lVar9 = param_1 + (longlong)auVar154._0_4_ * 4;
    auVar94._4_4_ = auVar83._4_4_ * 3;
    auVar94._0_4_ = auVar83._0_4_ * 3;
    auVar94._8_4_ = auVar83._8_4_ * 3;
    auVar94._12_4_ = auVar83._12_4_ * 3;
    auVar94 = auVar94 & auVar88;
    lVar12 = param_1 + (longlong)auVar94._0_4_ * 4;
    lVar19 = param_1 + (longlong)auVar154._4_4_ * 4;
    auVar153 = insertps(ZEXT416(*(uint *)(uVar15 + lVar9)),*(undefined4 *)(uVar22 + lVar19),0x10);
    auVar129 = insertps(ZEXT416(*(uint *)(uVar10 + lVar9)),*(undefined4 *)(uVar17 + lVar19),0x10);
    lVar9 = param_1 + (longlong)auVar94._4_4_ * 4;
    auVar105 = insertps(ZEXT416(*(uint *)(uVar15 + lVar12)),*(undefined4 *)(uVar22 + lVar9),0x10);
    auVar72 = insertps(ZEXT416(*(uint *)(uVar10 + lVar12)),*(undefined4 *)(uVar17 + lVar9),0x10);
    lVar9 = param_1 + (longlong)auVar138._8_4_ * 4;
    auVar152 = insertps(auVar152,*(undefined4 *)(uVar20 + lVar9),0x20);
    auVar147 = insertps(auVar130,*(undefined4 *)(uVar18 + lVar9),0x20);
    lVar9 = param_1 + (longlong)auVar154._8_4_ * 4;
    auVar146 = insertps(auVar153,*(undefined4 *)(uVar20 + lVar9),0x20);
    auVar153 = insertps(auVar129,*(undefined4 *)(uVar18 + lVar9),0x20);
    lVar9 = param_1 + (longlong)auVar94._8_4_ * 4;
    auVar129 = insertps(auVar105,*(undefined4 *)(uVar20 + lVar9),0x20);
    auVar105 = insertps(auVar72,*(undefined4 *)(uVar18 + lVar9),0x20);
    auVar72 = insertps(ZEXT416(*(uint *)(param_1 + (longlong)auVar46._0_4_ * 4)),
                       *(undefined4 *)(param_1 + (longlong)auVar46._4_4_ * 4),0x10);
    uVar15 = (ulonglong)auVar106._12_4_;
    auVar72 = insertps(auVar72,*(undefined4 *)(param_1 + (longlong)auVar46._8_4_ * 4),0x20);
    lVar9 = param_1 + (longlong)auVar46._12_4_ * 4;
    auVar130 = insertps(auVar72,*(undefined4 *)(param_1 + (longlong)auVar46._12_4_ * 4),0x30);
    auVar43 = insertps(auVar43,*(undefined4 *)(uVar15 + lVar9),0x30);
    uVar10 = (ulonglong)auVar137._12_4_;
    auVar66 = insertps(auVar66,*(undefined4 *)(uVar10 + lVar9),0x30);
    auVar72 = insertps(ZEXT416(*(uint *)(param_1 + (longlong)auVar138._0_4_ * 4)),
                       *(undefined4 *)(param_1 + (longlong)auVar138._4_4_ * 4),0x10);
    auVar72 = insertps(auVar72,*(undefined4 *)(param_1 + (longlong)auVar138._8_4_ * 4),0x20);
    auVar137 = insertps(auVar72,*(undefined4 *)(param_1 + (longlong)auVar138._12_4_ * 4),0x30);
    lVar9 = param_1 + (longlong)auVar138._12_4_ * 4;
    auVar152 = insertps(auVar152,*(undefined4 *)(uVar15 + lVar9),0x30);
    auVar147 = insertps(auVar147,*(undefined4 *)(uVar10 + lVar9),0x30);
    auVar72 = insertps(ZEXT416(*(uint *)(param_1 + (longlong)auVar154._0_4_ * 4)),
                       *(undefined4 *)(param_1 + (longlong)auVar154._4_4_ * 4),0x10);
    auVar72 = insertps(auVar72,*(undefined4 *)(param_1 + (longlong)auVar154._8_4_ * 4),0x20);
    auVar72 = insertps(auVar72,*(undefined4 *)(param_1 + (longlong)auVar154._12_4_ * 4),0x30);
    lVar9 = param_1 + (longlong)auVar154._12_4_ * 4;
    auVar146 = insertps(auVar146,*(undefined4 *)(uVar15 + lVar9),0x30);
    auVar153 = insertps(auVar153,*(undefined4 *)(uVar10 + lVar9),0x30);
    auVar106 = insertps(ZEXT416(*(uint *)(param_1 + (longlong)auVar94._0_4_ * 4)),
                        *(undefined4 *)(param_1 + (longlong)auVar94._4_4_ * 4),0x10);
    auVar106 = insertps(auVar106,*(undefined4 *)(param_1 + (longlong)auVar94._8_4_ * 4),0x20);
    auVar106 = insertps(auVar106,*(undefined4 *)(param_1 + (longlong)auVar94._12_4_ * 4),0x30);
    param_1 = param_1 + (longlong)auVar94._12_4_ * 4;
    auVar129 = insertps(auVar129,*(undefined4 *)(uVar15 + param_1),0x30);
    auVar105 = insertps(auVar105,*(undefined4 *)(uVar10 + param_1),0x30);
    uVar6 = uVar6 << 2;
    if ((~bVar14 & 9) == 0) {
      auVar46 = *(undefined1 (*) [16])(param_3 + (int)uVar6);
      uVar16 = uVar6;
    }
    else {
      puVar13 = (uint *)(param_3 + (int)uVar6);
      if ((uVar16 & 1) != 0) {
        auVar46 = ZEXT416(*puVar13);
      }
      if ((uVar16 & 2) != 0) {
        auVar46 = insertps(auVar46,puVar13[1],0x10);
      }
      if ((uVar16 & 4) != 0) {
        auVar46 = insertps(auVar46,puVar13[2],0x20);
      }
      if ((uVar16 & 8) != 0) {
        auVar46 = insertps(auVar46,puVar13[3],0x30);
      }
    }
    fVar102 = auVar137._0_4_;
    fVar103 = auVar137._4_4_;
    fVar109 = auVar137._12_4_;
    fVar126 = auVar130._0_4_;
    auVar155._0_4_ = fVar102 - fVar126;
    fVar95 = auVar130._4_4_;
    auVar155._4_4_ = fVar103 - fVar95;
    fVar101 = auVar130._8_4_;
    fVar104 = auVar137._8_4_;
    auVar155._8_4_ = fVar104 - fVar101;
    fVar142 = auVar130._12_4_;
    auVar155._12_4_ = fVar109 - fVar142;
    fVar60 = auVar152._0_4_;
    fVar62 = auVar152._4_4_;
    fVar63 = auVar152._12_4_;
    local_148 = auVar43._0_4_;
    fStack_144 = auVar43._4_4_;
    fStack_140 = auVar43._8_4_;
    fStack_13c = auVar43._12_4_;
    auVar56._0_4_ = fVar60 - local_148;
    auVar56._4_4_ = fVar62 - fStack_144;
    fVar53 = auVar152._8_4_;
    auVar56._8_4_ = fVar53 - fStack_140;
    auVar56._12_4_ = fVar63 - fStack_13c;
    auVar117._0_4_ = auVar56._0_4_ * auVar56._0_4_ + auVar155._0_4_ * auVar155._0_4_;
    auVar117._4_4_ = auVar56._4_4_ * auVar56._4_4_ + auVar155._4_4_ * auVar155._4_4_;
    auVar117._8_4_ = auVar56._8_4_ * auVar56._8_4_ + auVar155._8_4_ * auVar155._8_4_;
    auVar117._12_4_ = auVar56._12_4_ * auVar56._12_4_ + auVar155._12_4_ * auVar155._12_4_;
    fVar120 = auVar147._0_4_;
    fVar121 = auVar147._4_4_;
    fVar122 = auVar147._12_4_;
    local_128 = auVar66._0_4_;
    fStack_124 = auVar66._4_4_;
    fStack_120 = auVar66._8_4_;
    fStack_11c = auVar66._12_4_;
    auVar139._0_4_ = fVar120 - local_128;
    auVar139._4_4_ = fVar121 - fStack_124;
    fVar115 = auVar147._8_4_;
    auVar139._8_4_ = fVar115 - fStack_120;
    auVar139._12_4_ = fVar122 - fStack_11c;
    auVar47._0_4_ = auVar139._0_4_ * auVar139._0_4_ + auVar117._0_4_;
    auVar47._4_4_ = auVar139._4_4_ * auVar139._4_4_ + auVar117._4_4_;
    auVar47._8_4_ = auVar139._8_4_ * auVar139._8_4_ + auVar117._8_4_;
    auVar47._12_4_ = auVar139._12_4_ * auVar139._12_4_ + auVar117._12_4_;
    auVar66 = sqrtps(auVar117,auVar47);
    auVar152 = divps(auVar155,auVar66);
    auVar43 = divps(auVar56,auVar66);
    auVar130 = divps(auVar139,auVar66);
    uVar6 = -(uint)(auVar47._0_4_ <= ___xmm_00800000008000000080000000800000);
    uVar28 = -(uint)(auVar47._4_4_ <= _UNK_1508be494);
    uVar32 = -(uint)(auVar47._8_4_ <= _UNK_1508be498);
    uVar36 = -(uint)(auVar47._12_4_ <= _UNK_1508be49c);
    auVar48._4_4_ = uVar28;
    auVar48._0_4_ = uVar6;
    auVar48._8_4_ = uVar32;
    auVar48._12_4_ = uVar36;
    auVar137 = blendvps(auVar152,___xmm_3f8000003f8000003f8000003f800000,auVar48);
    fVar80 = fVar126 - auVar72._0_4_;
    fVar89 = fVar95 - auVar72._4_4_;
    fVar90 = fVar101 - auVar72._8_4_;
    fVar91 = fVar142 - auVar72._12_4_;
    fVar113 = fVar102 - auVar72._0_4_;
    fVar141 = fVar103 - auVar72._4_4_;
    fVar143 = fVar104 - auVar72._8_4_;
    fVar119 = fVar109 - auVar72._12_4_;
    fVar38 = local_148 - auVar146._0_4_;
    fVar52 = fStack_144 - auVar146._4_4_;
    fVar54 = fStack_140 - auVar146._8_4_;
    fVar55 = fStack_13c - auVar146._12_4_;
    fVar65 = fVar60 - auVar146._0_4_;
    fVar69 = fVar62 - auVar146._4_4_;
    fVar111 = fVar53 - auVar146._8_4_;
    fVar70 = fVar63 - auVar146._12_4_;
    auVar135._0_4_ = local_128 - auVar153._0_4_;
    auVar135._4_4_ = fStack_124 - auVar153._4_4_;
    auVar135._8_4_ = fStack_120 - auVar153._8_4_;
    auVar135._12_4_ = fStack_11c - auVar153._12_4_;
    fVar71 = fVar120 - auVar153._0_4_;
    fVar110 = fVar121 - auVar153._4_4_;
    fVar112 = fVar115 - auVar153._8_4_;
    fVar114 = fVar122 - auVar153._12_4_;
    auVar118._0_4_ = fVar80 * fVar65 - fVar113 * fVar38;
    auVar118._4_4_ = fVar89 * fVar69 - fVar141 * fVar52;
    auVar118._8_4_ = fVar90 * fVar111 - fVar143 * fVar54;
    auVar118._12_4_ = fVar91 * fVar70 - fVar119 * fVar55;
    auVar57._0_4_ = fVar38 * fVar71 - fVar65 * auVar135._0_4_;
    auVar57._4_4_ = fVar52 * fVar110 - fVar69 * auVar135._4_4_;
    auVar57._8_4_ = fVar54 * fVar112 - fVar111 * auVar135._8_4_;
    auVar57._12_4_ = fVar55 * fVar114 - fVar70 * auVar135._12_4_;
    auVar125._0_4_ = fVar113 * auVar135._0_4_ - fVar71 * fVar80;
    auVar125._4_4_ = fVar141 * auVar135._4_4_ - fVar110 * fVar89;
    auVar125._8_4_ = fVar143 * auVar135._8_4_ - fVar112 * fVar90;
    auVar125._12_4_ = fVar119 * auVar135._12_4_ - fVar114 * fVar91;
    auVar85._0_4_ =
         auVar118._0_4_ * auVar118._0_4_ +
         auVar125._0_4_ * auVar125._0_4_ + auVar57._0_4_ * auVar57._0_4_;
    auVar85._4_4_ =
         auVar118._4_4_ * auVar118._4_4_ +
         auVar125._4_4_ * auVar125._4_4_ + auVar57._4_4_ * auVar57._4_4_;
    auVar85._8_4_ =
         auVar118._8_4_ * auVar118._8_4_ +
         auVar125._8_4_ * auVar125._8_4_ + auVar57._8_4_ * auVar57._8_4_;
    auVar85._12_4_ =
         auVar118._12_4_ * auVar118._12_4_ +
         auVar125._12_4_ * auVar125._12_4_ + auVar57._12_4_ * auVar57._12_4_;
    auVar153 = sqrtps(auVar135,auVar85);
    auVar66 = divps(auVar57,auVar153);
    auVar72 = divps(auVar125,auVar153);
    auVar152 = divps(auVar118,auVar153);
    uVar25 = -(uint)(auVar153._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77);
    uVar29 = -(uint)(auVar153._4_4_ <= _UNK_1506895d4);
    uVar33 = -(uint)(auVar153._8_4_ <= _UNK_1506895d8);
    uVar37 = -(uint)(auVar153._12_4_ <= _UNK_1506895dc);
    fVar65 = (float)(~uVar25 & auVar66._0_4_);
    fVar69 = (float)(~uVar29 & auVar66._4_4_);
    fVar111 = (float)(~uVar33 & auVar66._8_4_);
    fVar70 = (float)(~uVar37 & auVar66._12_4_);
    fVar113 = (float)(~uVar25 & auVar72._0_4_);
    fVar141 = (float)(~uVar29 & auVar72._4_4_);
    fVar143 = (float)(~uVar33 & auVar72._8_4_);
    fVar119 = (float)(~uVar37 & auVar72._12_4_);
    fVar80 = (float)(~uVar25 & auVar152._0_4_);
    fVar89 = (float)(~uVar29 & auVar152._4_4_);
    fVar90 = (float)(~uVar33 & auVar152._8_4_);
    fVar91 = (float)(~uVar37 & auVar152._12_4_);
    fVar102 = fVar102 - auVar106._0_4_;
    fVar103 = fVar103 - auVar106._4_4_;
    fVar104 = fVar104 - auVar106._8_4_;
    fVar109 = fVar109 - auVar106._12_4_;
    fVar126 = fVar126 - auVar106._0_4_;
    fVar95 = fVar95 - auVar106._4_4_;
    fVar101 = fVar101 - auVar106._8_4_;
    fVar142 = fVar142 - auVar106._12_4_;
    local_138 = auVar129._0_4_;
    fStack_134 = auVar129._4_4_;
    fStack_130 = auVar129._8_4_;
    fStack_12c = auVar129._12_4_;
    local_f8 = auVar105._0_4_;
    fStack_f4 = auVar105._4_4_;
    fStack_f0 = auVar105._8_4_;
    fStack_ec = auVar105._12_4_;
    auVar58._0_4_ = fVar102 * (local_148 - local_138) - fVar126 * (fVar60 - local_138);
    auVar58._4_4_ = fVar103 * (fStack_144 - fStack_134) - fVar95 * (fVar62 - fStack_134);
    auVar58._8_4_ = fVar104 * (fStack_140 - fStack_130) - fVar101 * (fVar53 - fStack_130);
    auVar58._12_4_ = fVar109 * (fStack_13c - fStack_12c) - fVar142 * (fVar63 - fStack_12c);
    auVar75._0_4_ =
         (fVar60 - local_138) * (local_128 - local_f8) -
         (local_148 - local_138) * (fVar120 - local_f8);
    auVar75._4_4_ =
         (fVar62 - fStack_134) * (fStack_124 - fStack_f4) -
         (fStack_144 - fStack_134) * (fVar121 - fStack_f4);
    auVar75._8_4_ =
         (fVar53 - fStack_130) * (fStack_120 - fStack_f0) -
         (fStack_140 - fStack_130) * (fVar115 - fStack_f0);
    auVar75._12_4_ =
         (fVar63 - fStack_12c) * (fStack_11c - fStack_ec) -
         (fStack_13c - fStack_12c) * (fVar122 - fStack_ec);
    auVar108._0_4_ = fVar126 * (fVar120 - local_f8) - (local_128 - local_f8) * fVar102;
    auVar108._4_4_ = fVar95 * (fVar121 - fStack_f4) - (fStack_124 - fStack_f4) * fVar103;
    auVar108._8_4_ = fVar101 * (fVar115 - fStack_f0) - (fStack_120 - fStack_f0) * fVar104;
    auVar108._12_4_ = fVar142 * (fVar122 - fStack_ec) - (fStack_11c - fStack_ec) * fVar109;
    auVar99._0_4_ = auVar108._0_4_ * auVar108._0_4_ + auVar75._0_4_ * auVar75._0_4_;
    auVar99._4_4_ = auVar108._4_4_ * auVar108._4_4_ + auVar75._4_4_ * auVar75._4_4_;
    auVar99._8_4_ = auVar108._8_4_ * auVar108._8_4_ + auVar75._8_4_ * auVar75._8_4_;
    auVar99._12_4_ = auVar108._12_4_ * auVar108._12_4_ + auVar75._12_4_ * auVar75._12_4_;
    auVar68._0_4_ = auVar58._0_4_ * auVar58._0_4_ + auVar99._0_4_;
    auVar68._4_4_ = auVar58._4_4_ * auVar58._4_4_ + auVar99._4_4_;
    auVar68._8_4_ = auVar58._8_4_ * auVar58._8_4_ + auVar99._8_4_;
    auVar68._12_4_ = auVar58._12_4_ * auVar58._12_4_ + auVar99._12_4_;
    auVar72 = sqrtps(auVar99,auVar68);
    auVar152 = divps(auVar75,auVar72);
    auVar105 = divps(auVar108,auVar72);
    auVar66 = divps(auVar58,auVar72);
    uVar25 = -(uint)(auVar72._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77);
    uVar29 = -(uint)(auVar72._4_4_ <= _UNK_1506895d4);
    uVar33 = -(uint)(auVar72._8_4_ <= _UNK_1506895d8);
    uVar37 = -(uint)(auVar72._12_4_ <= _UNK_1506895dc);
    fVar38 = (float)(~uVar25 & auVar152._0_4_);
    fVar52 = (float)(~uVar29 & auVar152._4_4_);
    fVar53 = (float)(~uVar33 & auVar152._8_4_);
    fVar54 = (float)(~uVar37 & auVar152._12_4_);
    fVar55 = (float)(~uVar25 & auVar105._0_4_);
    fVar60 = (float)(~uVar29 & auVar105._4_4_);
    fVar62 = (float)(~uVar33 & auVar105._8_4_);
    fVar63 = (float)(~uVar37 & auVar105._12_4_);
    fVar71 = (float)(~uVar25 & auVar66._0_4_);
    fVar110 = (float)(~uVar29 & auVar66._4_4_);
    fVar112 = (float)(~uVar33 & auVar66._8_4_);
    fVar114 = (float)(~uVar37 & auVar66._12_4_);
    auVar59._0_4_ =
         (fVar65 * fVar71 - fVar80 * fVar38) * (float)(~uVar6 & auVar43._0_4_) +
         (fVar80 * fVar55 - fVar113 * fVar71) * auVar137._0_4_ +
         (fVar113 * fVar38 - fVar65 * fVar55) * (float)(~uVar6 & auVar130._0_4_);
    auVar59._4_4_ =
         (fVar69 * fVar110 - fVar89 * fVar52) * (float)(~uVar28 & auVar43._4_4_) +
         (fVar89 * fVar60 - fVar141 * fVar110) * auVar137._4_4_ +
         (fVar141 * fVar52 - fVar69 * fVar60) * (float)(~uVar28 & auVar130._4_4_);
    auVar59._8_4_ =
         (fVar111 * fVar112 - fVar90 * fVar53) * (float)(~uVar32 & auVar43._8_4_) +
         (fVar90 * fVar62 - fVar143 * fVar112) * auVar137._8_4_ +
         (fVar143 * fVar53 - fVar111 * fVar62) * (float)(~uVar32 & auVar130._8_4_);
    auVar59._12_4_ =
         (fVar70 * fVar114 - fVar91 * fVar54) * (float)(~uVar36 & auVar43._12_4_) +
         (fVar91 * fVar63 - fVar119 * fVar114) * auVar137._12_4_ +
         (fVar119 * fVar54 - fVar70 * fVar63) * (float)(~uVar36 & auVar130._12_4_);
    auVar100._0_4_ = fVar71 * fVar80 + fVar55 * fVar113 + fVar38 * fVar65;
    auVar100._4_4_ = fVar110 * fVar89 + fVar60 * fVar141 + fVar52 * fVar69;
    auVar100._8_4_ = fVar112 * fVar90 + fVar62 * fVar143 + fVar53 * fVar111;
    auVar100._12_4_ = fVar114 * fVar91 + fVar63 * fVar119 + fVar54 * fVar70;
    auVar43 = maxps(auVar100,___xmm_bf800000bf800000bf800000bf800000);
    auVar105 = minps(auVar43,___xmm_3f8000003f8000003f8000003f800000);
    auVar43 = maxps(auVar59,___xmm_bf800000bf800000bf800000bf800000);
    auVar66 = minps(auVar43,___xmm_3f8000003f8000003f8000003f800000);
    auVar152 = divps(auVar66,auVar105);
    auVar76._0_4_ = __xmm_80000000800000008000000080000000 ^ (uint)auVar152._0_4_;
    auVar76._4_4_ = _UNK_150651574 ^ (uint)auVar152._4_4_;
    auVar76._8_4_ = _UNK_150651578 ^ (uint)auVar152._8_4_;
    auVar76._12_4_ = _UNK_15065157c ^ (uint)auVar152._12_4_;
    auVar72 = maxps(auVar76,auVar152);
    uVar6 = -(uint)((float)__xmm_3f8000003f8000003f8000003f800000 < auVar72._0_4_);
    uVar25 = -(uint)(__xmm_3f8000003f8000003f8000003f800000._4_4_ < auVar72._4_4_);
    uVar28 = -(uint)(__xmm_3f8000003f8000003f8000003f800000._8_4_ < auVar72._8_4_);
    uVar29 = -(uint)(__xmm_3f8000003f8000003f8000003f800000._12_4_ < auVar72._12_4_);
    auVar49._4_4_ = uVar25;
    auVar49._0_4_ = uVar6;
    auVar49._8_4_ = uVar28;
    auVar49._12_4_ = uVar29;
    auVar86._0_4_ = auVar88._0_4_ & uVar6;
    auVar86._4_4_ = auVar88._4_4_ & uVar25;
    auVar86._8_4_ = auVar88._8_4_ & uVar28;
    auVar86._12_4_ = auVar88._12_4_ & uVar29;
    iVar11 = movmskps(uVar16,auVar86);
    auVar43 = ___xmm_3f8000003f8000003f8000003f800000;
    if (iVar11 != 0) {
      auVar43 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar72);
    }
    auVar43 = blendvps(auVar72,auVar43,auVar49);
    fVar38 = auVar43._0_4_;
    fVar52 = auVar43._4_4_;
    fVar53 = auVar43._8_4_;
    fVar54 = auVar43._12_4_;
    fVar55 = fVar38 * fVar38;
    fVar60 = fVar52 * fVar52;
    fVar62 = fVar53 * fVar53;
    fVar63 = fVar54 * fVar54;
    auVar87._0_4_ =
         (((((((___xmm_bb9918b7bb9918b7bb9918b7bb9918b7 * fVar55 +
               ___xmm_3cc6061b3cc6061b3cc6061b3cc6061b) * fVar55 +
              ___xmm_bd732a49bd732a49bd732a49bd732a49) * fVar55 +
             ___xmm_3dcadb2a3dcadb2a3dcadb2a3dcadb2a) * fVar55 +
            ___xmm_be0f8549be0f8549be0f8549be0f8549) * fVar55 +
           ___xmm_3e4c7b543e4c7b543e4c7b543e4c7b54) * fVar55 +
          ___xmm_beaaa8cfbeaaa8cfbeaaa8cfbeaaa8cf) * fVar55 +
         ___xmm_3f7ffffe3f7ffffe3f7ffffe3f7ffffe) * fVar38;
    auVar87._4_4_ =
         (((((((_UNK_150b51114 * fVar60 + _UNK_150b51124) * fVar60 + _UNK_150b51134) * fVar60 +
             _UNK_150b51144) * fVar60 + _UNK_150b51154) * fVar60 + _UNK_150b51164) * fVar60 +
          _UNK_150b51174) * fVar60 + _UNK_150b51184) * fVar52;
    auVar87._8_4_ =
         (((((((_UNK_150b51118 * fVar62 + _UNK_150b51128) * fVar62 + _UNK_150b51138) * fVar62 +
             _UNK_150b51148) * fVar62 + _UNK_150b51158) * fVar62 + _UNK_150b51168) * fVar62 +
          _UNK_150b51178) * fVar62 + _UNK_150b51188) * fVar53;
    auVar87._12_4_ =
         (((((((_UNK_150b5111c * fVar63 + _UNK_150b5112c) * fVar63 + _UNK_150b5113c) * fVar63 +
             _UNK_150b5114c) * fVar63 + _UNK_150b5115c) * fVar63 + _UNK_150b5116c) * fVar63 +
          _UNK_150b5117c) * fVar63 + _UNK_150b5118c) * fVar54;
    auVar77._0_4_ = ___xmm_3fc90fdb3fc90fdb3fc90fdb3fc90fdb - auVar87._0_4_;
    auVar77._4_4_ = _UNK_150b51194 - auVar87._4_4_;
    auVar77._8_4_ = _UNK_150b51198 - auVar87._8_4_;
    auVar77._12_4_ = _UNK_150b5119c - auVar87._12_4_;
    auVar43 = blendvps(auVar87,auVar77,auVar49);
    auVar50._4_4_ = -(uint)(auVar152._4_4_ < 0.0);
    auVar50._0_4_ = -(uint)(auVar152._0_4_ < 0.0);
    auVar78._0_4_ = __xmm_80000000800000008000000080000000 ^ auVar43._0_4_;
    auVar78._4_4_ = _UNK_150651574 ^ auVar43._4_4_;
    auVar78._8_4_ = _UNK_150651578 ^ auVar43._8_4_;
    auVar78._12_4_ = _UNK_15065157c ^ auVar43._12_4_;
    auVar50._8_4_ = -(uint)(auVar152._8_4_ < 0.0);
    auVar50._12_4_ = -(uint)(auVar152._12_4_ < 0.0);
    auVar88 = blendvps(auVar43,auVar78,auVar50);
    auVar51._4_4_ = -(uint)(auVar66._4_4_ < 0.0);
    auVar51._0_4_ = -(uint)(auVar66._0_4_ < 0.0);
    auVar5._4_4_ = _UNK_150b51104;
    auVar5._0_4_ = ___xmm_40490fdb40490fdb40490fdb40490fdb;
    auVar5._8_4_ = _UNK_150b51108;
    auVar5._12_4_ = _UNK_150b5110c;
    auVar51._8_4_ = -(uint)(auVar66._8_4_ < 0.0);
    auVar51._12_4_ = -(uint)(auVar66._12_4_ < 0.0);
    auVar43 = blendvps(auVar5,___xmm_c0490fdbc0490fdbc0490fdbc0490fdb,auVar51);
    auVar79._4_4_ =
         -(uint)(_UNK_150b51104 -
                 (float)((uint)((float)(auVar43._4_4_ & -(uint)(auVar105._4_4_ < 0.0)) +
                               auVar88._4_4_) & _UNK_15061cc74) <
                (_UNK_150b51104 - (float)(auVar46._4_4_ & _UNK_15061cc74)) * param_5);
    auVar79._0_4_ =
         -(uint)(___xmm_40490fdb40490fdb40490fdb40490fdb -
                 (float)((uint)((float)(auVar43._0_4_ & -(uint)(auVar105._0_4_ < 0.0)) +
                               auVar88._0_4_) & __xmm_7fffffff7fffffff7fffffff7fffffff) <
                (___xmm_40490fdb40490fdb40490fdb40490fdb -
                (float)(auVar46._0_4_ & __xmm_7fffffff7fffffff7fffffff7fffffff)) * param_5);
    auVar79._8_4_ =
         -(uint)(_UNK_150b51108 -
                 (float)((uint)((float)(auVar43._8_4_ & -(uint)(auVar105._8_4_ < 0.0)) +
                               auVar88._8_4_) & _UNK_15061cc78) <
                (_UNK_150b51108 - (float)(auVar46._8_4_ & _UNK_15061cc78)) * param_5);
    auVar79._12_4_ =
         -(uint)(_UNK_150b5110c -
                 (float)((uint)((float)(auVar43._12_4_ & -(uint)(auVar105._12_4_ < 0.0)) +
                               auVar88._12_4_) & _UNK_15061cc7c) <
                (_UNK_150b5110c - (float)(auVar46._12_4_ & _UNK_15061cc7c)) * param_5);
    auVar43 = packssdw(auVar79,auVar79);
    auVar43 = packsswb(auVar43,auVar43);
    auVar43 = auVar43 & ___xmm_00000000000000000000000001010101;
    if ((bVar14 & 1) != 0) {
      *(char *)(param_4 + uVar7) = auVar43[0];
    }
    if ((bVar14 & 2) != 0) {
      *(char *)(param_4 + 1 + uVar7) = auVar43[1];
    }
    if ((bVar14 & 4) != 0) {
      *(char *)(param_4 + 2 + uVar7) = auVar43[2];
    }
    if ((char)bVar14 < '\0') {
      *(char *)(param_4 + 3 + uVar7) = auVar43[3];
    }
  }
  return;
}

// InitBendingConstraintsIsBuckledWithMaps___un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector4_5D__3E_un_3C_Cunf_3E_un_3C_unb_3E_un_3C_CunT_3E_un_3C_Cunf_3E_Cuni_sse4 @ 140063b90

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InitBendingConstraintsIsBuckledWithMaps___un_3C_s_5B__c_unFVector3f_5D__3E_un_3C_s_5B__c_unFIntVector4_5D__3E_un_3C_Cunf_3E_un_3C_unb_3E_un_3C_CunT_3E_un_3C_Cunf_3E_Cuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,uint param_7)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  undefined1 (*pauVar8) [16];
  ulonglong uVar9;
  byte bVar10;
  int iVar11;
  ulonglong uVar12;
  byte *pbVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  int unaff_R15D;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  int iVar37;
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
  float fVar51;
  float fVar57;
  int iVar58;
  float fVar59;
  float fVar60;
  int iVar61;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar65;
  float fVar74;
  float fVar75;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar76;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar77;
  float fVar82;
  float fVar83;
  float fVar84;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar85;
  float fVar92;
  float fVar93;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar94;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  float fVar95;
  float fVar103;
  float fVar104;
  undefined1 auVar96 [16];
  float fVar105;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  float fVar109;
  float fVar112;
  float fVar113;
  undefined1 auVar110 [16];
  float fVar114;
  undefined1 auVar111 [16];
  float fVar115;
  float fVar119;
  float fVar120;
  undefined1 auVar116 [16];
  float fVar121;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  float fVar124;
  float fVar130;
  float fVar131;
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  float fVar132;
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  float fVar133;
  float fVar137;
  float fVar138;
  undefined1 auVar134 [16];
  float fVar139;
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  float fVar140;
  float fVar142;
  float fVar143;
  undefined1 auVar141 [16];
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  float fVar154;
  float fVar155;
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  float fVar156;
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  uint local_138;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  
  uVar24 = param_7 + 3;
  if (-1 < (int)param_7) {
    uVar24 = param_7;
  }
  if ((int)(uVar24 & 0xfffffffc) < 1) {
    uVar14 = 0;
  }
  else {
    uVar9 = 0;
    uVar14 = 0;
    auVar41 = ___xmm_40490fdb40490fdb40490fdb40490fdb;
    uVar19 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar27 = _UNK_15061cc74;
    uVar28 = _UNK_15061cc78;
    uVar31 = _UNK_15061cc7c;
    do {
      auVar52 = ___xmm_40490fdb40490fdb40490fdb40490fdb;
      uVar6 = _UNK_15061cc7c;
      uVar36 = _UNK_15061cc78;
      uVar35 = _UNK_15061cc74;
      uVar32 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      piVar1 = (int *)(param_2 + uVar9 * 4);
      auVar68 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar9 * 4);
      piVar2 = (int *)(param_2 + 0x20 + uVar9 * 4);
      piVar3 = (int *)(param_2 + 0x30 + uVar9 * 4);
      auVar42 = pmovsxbd(auVar68,*(undefined4 *)(param_5 + uVar14));
      lVar18 = (longlong)(*piVar1 * 3);
      lVar20 = (longlong)(auVar68._0_4_ * 3);
      lVar16 = (longlong)(*piVar2 * 3);
      lVar17 = (longlong)(*piVar3 * 3);
      auVar125 = insertps(ZEXT416(*(uint *)(param_1 + lVar18 * 4)),
                          *(undefined4 *)(param_1 + lVar20 * 4),0x10);
      auVar125 = insertps(auVar125,*(undefined4 *)(param_1 + lVar16 * 4),0x20);
      auVar126 = insertps(auVar125,*(undefined4 *)(param_1 + lVar17 * 4),0x30);
      auVar125 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar18 * 4)),
                          *(undefined4 *)(param_1 + 4 + lVar20 * 4),0x10);
      auVar125 = insertps(auVar125,*(undefined4 *)(param_1 + 4 + lVar16 * 4),0x20);
      auVar87 = insertps(auVar125,*(undefined4 *)(param_1 + 4 + lVar17 * 4),0x30);
      auVar125 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar18 * 4)),
                          *(undefined4 *)(param_1 + 8 + lVar20 * 4),0x10);
      auVar125 = insertps(auVar125,*(undefined4 *)(param_1 + 8 + lVar16 * 4),0x20);
      auVar125 = insertps(auVar125,*(undefined4 *)(param_1 + 8 + lVar17 * 4),0x30);
      lVar18 = (longlong)(piVar1[1] * 3);
      lVar20 = (longlong)(auVar68._4_4_ * 3);
      lVar16 = (longlong)(piVar2[1] * 3);
      lVar17 = (longlong)(piVar3[1] * 3);
      auVar150 = insertps(ZEXT416(*(uint *)(param_1 + lVar18 * 4)),
                          *(undefined4 *)(param_1 + lVar20 * 4),0x10);
      auVar150 = insertps(auVar150,*(undefined4 *)(param_1 + lVar16 * 4),0x20);
      auVar151 = insertps(auVar150,*(undefined4 *)(param_1 + lVar17 * 4),0x30);
      auVar150 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar18 * 4)),
                          *(undefined4 *)(param_1 + 4 + lVar20 * 4),0x10);
      auVar150 = insertps(auVar150,*(undefined4 *)(param_1 + 4 + lVar16 * 4),0x20);
      auVar134 = insertps(auVar150,*(undefined4 *)(param_1 + 4 + lVar17 * 4),0x30);
      auVar150 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar18 * 4)),
                          *(undefined4 *)(param_1 + 8 + lVar20 * 4),0x10);
      auVar150 = insertps(auVar150,*(undefined4 *)(param_1 + 8 + lVar16 * 4),0x20);
      auVar141 = insertps(auVar150,*(undefined4 *)(param_1 + 8 + lVar17 * 4),0x30);
      lVar18 = (longlong)(piVar1[2] * 3);
      lVar20 = (longlong)(auVar68._8_4_ * 3);
      lVar16 = (longlong)(piVar2[2] * 3);
      lVar17 = (longlong)(piVar3[2] * 3);
      auVar150 = insertps(ZEXT416(*(uint *)(param_1 + lVar18 * 4)),
                          *(undefined4 *)(param_1 + lVar20 * 4),0x10);
      auVar150 = insertps(auVar150,*(undefined4 *)(param_1 + lVar16 * 4),0x20);
      auVar116 = insertps(auVar150,*(undefined4 *)(param_1 + lVar17 * 4),0x30);
      auVar150 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar18 * 4)),
                          *(undefined4 *)(param_1 + 4 + lVar20 * 4),0x10);
      auVar150 = insertps(auVar150,*(undefined4 *)(param_1 + 4 + lVar16 * 4),0x20);
      auVar110 = insertps(auVar150,*(undefined4 *)(param_1 + 4 + lVar17 * 4),0x30);
      auVar150 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar18 * 4)),
                          *(undefined4 *)(param_1 + 8 + lVar20 * 4),0x10);
      auVar150 = insertps(auVar150,*(undefined4 *)(param_1 + 8 + lVar16 * 4),0x20);
      auVar106 = insertps(auVar150,*(undefined4 *)(param_1 + 8 + lVar17 * 4),0x30);
      unaff_R15D = piVar1[3] * 3;
      iVar11 = auVar68._12_4_ * 3;
      auVar68 = insertps(ZEXT416(*(uint *)(param_6 + (auVar42._0_4_ << 2))),
                         *(undefined4 *)(param_6 + auVar42._4_4_ * 4),0x10);
      auVar68 = insertps(auVar68,*(undefined4 *)(param_6 + (auVar42._8_4_ << 2)),0x20);
      auVar69 = insertps(auVar68,*(undefined4 *)(param_6 + (auVar42._12_4_ << 2)),0x30);
      puVar7 = (uint *)(param_3 + (uVar9 & 0xffffffff));
      fVar149 = auVar151._0_4_;
      fVar154 = auVar151._4_4_;
      fVar156 = auVar151._12_4_;
      fVar124 = auVar126._0_4_;
      fVar65 = fVar149 - fVar124;
      fVar130 = auVar126._4_4_;
      fVar74 = fVar154 - fVar130;
      auVar96._4_4_ = fVar74;
      auVar96._0_4_ = fVar65;
      fVar155 = auVar151._8_4_;
      fVar131 = auVar126._8_4_;
      fVar75 = fVar155 - fVar131;
      fVar132 = auVar126._12_4_;
      fVar76 = fVar156 - fVar132;
      fVar133 = auVar134._0_4_;
      fVar137 = auVar134._4_4_;
      fVar139 = auVar134._12_4_;
      fVar85 = auVar87._0_4_;
      auVar126._0_4_ = fVar133 - fVar85;
      fVar92 = auVar87._4_4_;
      auVar126._4_4_ = fVar137 - fVar92;
      fVar138 = auVar134._8_4_;
      fVar93 = auVar87._8_4_;
      auVar126._8_4_ = fVar138 - fVar93;
      fVar94 = auVar87._12_4_;
      auVar126._12_4_ = fVar139 - fVar94;
      fVar140 = auVar141._0_4_;
      fVar142 = auVar141._4_4_;
      fVar144 = auVar141._12_4_;
      fVar51 = auVar125._0_4_;
      auVar151._0_4_ = fVar140 - fVar51;
      fVar57 = auVar125._4_4_;
      auVar151._4_4_ = fVar142 - fVar57;
      fVar59 = auVar125._8_4_;
      fVar143 = auVar141._8_4_;
      auVar151._8_4_ = fVar143 - fVar59;
      fVar60 = auVar125._12_4_;
      auVar151._12_4_ = fVar144 - fVar60;
      auVar96._8_4_ = fVar75;
      auVar96._12_4_ = fVar76;
      auVar134._0_4_ = auVar126._0_4_ * auVar126._0_4_ + fVar65 * fVar65;
      auVar134._4_4_ = auVar126._4_4_ * auVar126._4_4_ + fVar74 * fVar74;
      auVar134._8_4_ = auVar126._8_4_ * auVar126._8_4_ + fVar75 * fVar75;
      auVar134._12_4_ = auVar126._12_4_ * auVar126._12_4_ + fVar76 * fVar76;
      auVar68._0_4_ = auVar151._0_4_ * auVar151._0_4_ + auVar134._0_4_;
      auVar68._4_4_ = auVar151._4_4_ * auVar151._4_4_ + auVar134._4_4_;
      auVar68._8_4_ = auVar151._8_4_ * auVar151._8_4_ + auVar134._8_4_;
      auVar68._12_4_ = auVar151._12_4_ * auVar151._12_4_ + auVar134._12_4_;
      auVar125 = sqrtps(auVar134,auVar68);
      uVar22 = -(uint)(auVar68._0_4_ <= ___xmm_00800000008000000080000000800000);
      uVar25 = -(uint)(auVar68._4_4_ <= _UNK_1508be494);
      uVar29 = -(uint)(auVar68._8_4_ <= _UNK_1508be498);
      uVar33 = -(uint)(auVar68._12_4_ <= _UNK_1508be49c);
      auVar42._4_4_ = uVar25;
      auVar42._0_4_ = uVar22;
      auVar42._8_4_ = uVar29;
      auVar42._12_4_ = uVar33;
      auVar87 = divps(auVar96,auVar125);
      auVar68 = divps(auVar126,auVar125);
      auVar125 = divps(auVar151,auVar125);
      auVar150 = blendvps(auVar87,___xmm_3f8000003f8000003f8000003f800000,auVar42);
      fVar77 = fVar124 - auVar116._0_4_;
      fVar82 = fVar130 - auVar116._4_4_;
      fVar83 = fVar131 - auVar116._8_4_;
      fVar84 = fVar132 - auVar116._12_4_;
      fVar65 = fVar85 - auVar110._0_4_;
      fVar74 = fVar92 - auVar110._4_4_;
      fVar75 = fVar93 - auVar110._8_4_;
      fVar76 = fVar94 - auVar110._12_4_;
      fVar95 = fVar149 - auVar116._0_4_;
      fVar103 = fVar154 - auVar116._4_4_;
      fVar104 = fVar155 - auVar116._8_4_;
      fVar105 = fVar156 - auVar116._12_4_;
      fVar115 = fVar133 - auVar110._0_4_;
      fVar119 = fVar137 - auVar110._4_4_;
      fVar120 = fVar138 - auVar110._8_4_;
      fVar121 = fVar139 - auVar110._12_4_;
      fVar109 = fVar51 - auVar106._0_4_;
      fVar112 = fVar57 - auVar106._4_4_;
      fVar113 = fVar59 - auVar106._8_4_;
      fVar114 = fVar60 - auVar106._12_4_;
      fVar145 = fVar140 - auVar106._0_4_;
      fVar146 = fVar142 - auVar106._4_4_;
      fVar147 = fVar143 - auVar106._8_4_;
      fVar148 = fVar144 - auVar106._12_4_;
      auVar116._0_4_ = fVar77 * fVar115 - fVar95 * fVar65;
      auVar116._4_4_ = fVar82 * fVar119 - fVar103 * fVar74;
      auVar116._8_4_ = fVar83 * fVar120 - fVar104 * fVar75;
      auVar116._12_4_ = fVar84 * fVar121 - fVar105 * fVar76;
      lVar20 = (longlong)unaff_R15D;
      lVar17 = (longlong)iVar11;
      lVar18 = (longlong)(piVar2[3] * 3);
      lVar16 = (longlong)(piVar3[3] * 3);
      auVar106._0_4_ = fVar65 * fVar145 - fVar115 * fVar109;
      auVar106._4_4_ = fVar74 * fVar146 - fVar119 * fVar112;
      auVar106._8_4_ = fVar75 * fVar147 - fVar120 * fVar113;
      auVar106._12_4_ = fVar76 * fVar148 - fVar121 * fVar114;
      auVar122._0_4_ = fVar95 * fVar109 - fVar145 * fVar77;
      auVar122._4_4_ = fVar103 * fVar112 - fVar146 * fVar82;
      auVar122._8_4_ = fVar104 * fVar113 - fVar147 * fVar83;
      auVar122._12_4_ = fVar105 * fVar114 - fVar148 * fVar84;
      auVar111._0_4_ = auVar122._0_4_ * auVar122._0_4_ + auVar106._0_4_ * auVar106._0_4_;
      auVar111._4_4_ = auVar122._4_4_ * auVar122._4_4_ + auVar106._4_4_ * auVar106._4_4_;
      auVar111._8_4_ = auVar122._8_4_ * auVar122._8_4_ + auVar106._8_4_ * auVar106._8_4_;
      auVar111._12_4_ = auVar122._12_4_ * auVar122._12_4_ + auVar106._12_4_ * auVar106._12_4_;
      auVar141._0_4_ = auVar116._0_4_ * auVar116._0_4_ + auVar111._0_4_;
      auVar141._4_4_ = auVar116._4_4_ * auVar116._4_4_ + auVar111._4_4_;
      auVar141._8_4_ = auVar116._8_4_ * auVar116._8_4_ + auVar111._8_4_;
      auVar141._12_4_ = auVar116._12_4_ * auVar116._12_4_ + auVar111._12_4_;
      auVar87 = sqrtps(auVar111,auVar141);
      auVar42 = divps(auVar106,auVar87);
      auVar106 = divps(auVar122,auVar87);
      auVar126 = divps(auVar116,auVar87);
      uVar23 = -(uint)(auVar87._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77);
      uVar26 = -(uint)(auVar87._4_4_ <= _UNK_1506895d4);
      uVar30 = -(uint)(auVar87._8_4_ <= _UNK_1506895d8);
      uVar34 = -(uint)(auVar87._12_4_ <= _UNK_1506895dc);
      fVar76 = (float)(~uVar23 & auVar42._0_4_);
      fVar77 = (float)(~uVar26 & auVar42._4_4_);
      fVar82 = (float)(~uVar30 & auVar42._8_4_);
      fVar83 = (float)(~uVar34 & auVar42._12_4_);
      fVar105 = (float)(~uVar23 & auVar106._0_4_);
      fVar109 = (float)(~uVar26 & auVar106._4_4_);
      fVar112 = (float)(~uVar30 & auVar106._8_4_);
      fVar113 = (float)(~uVar34 & auVar106._12_4_);
      auVar42 = insertps(ZEXT416(*(uint *)(param_1 + lVar20 * 4)),
                         *(undefined4 *)(param_1 + lVar17 * 4),0x10);
      auVar42 = insertps(auVar42,*(undefined4 *)(param_1 + lVar18 * 4),0x20);
      auVar87 = insertps(auVar42,*(undefined4 *)(param_1 + lVar16 * 4),0x30);
      auVar42 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar20 * 4)),
                         *(undefined4 *)(param_1 + 4 + lVar17 * 4),0x10);
      auVar42 = insertps(auVar42,*(undefined4 *)(param_1 + 4 + lVar18 * 4),0x20);
      fVar84 = (float)(~uVar23 & auVar126._0_4_);
      fVar95 = (float)(~uVar26 & auVar126._4_4_);
      fVar103 = (float)(~uVar30 & auVar126._8_4_);
      fVar104 = (float)(~uVar34 & auVar126._12_4_);
      auVar42 = insertps(auVar42,*(undefined4 *)(param_1 + 4 + lVar16 * 4),0x30);
      fVar149 = fVar149 - auVar87._0_4_;
      fVar154 = fVar154 - auVar87._4_4_;
      fVar155 = fVar155 - auVar87._8_4_;
      fVar156 = fVar156 - auVar87._12_4_;
      fVar124 = fVar124 - auVar87._0_4_;
      fVar130 = fVar130 - auVar87._4_4_;
      fVar131 = fVar131 - auVar87._8_4_;
      fVar132 = fVar132 - auVar87._12_4_;
      fVar133 = fVar133 - auVar42._0_4_;
      fVar137 = fVar137 - auVar42._4_4_;
      fVar138 = fVar138 - auVar42._8_4_;
      fVar139 = fVar139 - auVar42._12_4_;
      fVar85 = fVar85 - auVar42._0_4_;
      fVar92 = fVar92 - auVar42._4_4_;
      fVar93 = fVar93 - auVar42._8_4_;
      fVar94 = fVar94 - auVar42._12_4_;
      auVar42 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar20 * 4)),
                         *(undefined4 *)(param_1 + 8 + lVar17 * 4),0x10);
      auVar42 = insertps(auVar42,*(undefined4 *)(param_1 + 8 + lVar18 * 4),0x20);
      auVar42 = insertps(auVar42,*(undefined4 *)(param_1 + 8 + lVar16 * 4),0x30);
      fVar140 = fVar140 - auVar42._0_4_;
      fVar142 = fVar142 - auVar42._4_4_;
      fVar143 = fVar143 - auVar42._8_4_;
      fVar144 = fVar144 - auVar42._12_4_;
      fVar51 = fVar51 - auVar42._0_4_;
      fVar57 = fVar57 - auVar42._4_4_;
      fVar59 = fVar59 - auVar42._8_4_;
      fVar60 = fVar60 - auVar42._12_4_;
      auVar127._0_4_ = fVar124 * fVar133;
      auVar127._4_4_ = fVar130 * fVar137;
      auVar127._8_4_ = fVar131 * fVar138;
      auVar127._12_4_ = fVar132 * fVar139;
      auVar152._0_4_ = fVar149 * fVar85 - auVar127._0_4_;
      auVar152._4_4_ = fVar154 * fVar92 - auVar127._4_4_;
      auVar152._8_4_ = fVar155 * fVar93 - auVar127._8_4_;
      auVar152._12_4_ = fVar156 * fVar94 - auVar127._12_4_;
      auVar135._0_4_ = fVar133 * fVar51 - fVar85 * fVar140;
      auVar135._4_4_ = fVar137 * fVar57 - fVar92 * fVar142;
      auVar135._8_4_ = fVar138 * fVar59 - fVar93 * fVar143;
      auVar135._12_4_ = fVar139 * fVar60 - fVar94 * fVar144;
      auVar123._0_4_ = fVar124 * fVar140 - fVar51 * fVar149;
      auVar123._4_4_ = fVar130 * fVar142 - fVar57 * fVar154;
      auVar123._8_4_ = fVar131 * fVar143 - fVar59 * fVar155;
      auVar123._12_4_ = fVar132 * fVar144 - fVar60 * fVar156;
      auVar87._0_4_ =
           auVar152._0_4_ * auVar152._0_4_ +
           auVar123._0_4_ * auVar123._0_4_ + auVar135._0_4_ * auVar135._0_4_;
      auVar87._4_4_ =
           auVar152._4_4_ * auVar152._4_4_ +
           auVar123._4_4_ * auVar123._4_4_ + auVar135._4_4_ * auVar135._4_4_;
      auVar87._8_4_ =
           auVar152._8_4_ * auVar152._8_4_ +
           auVar123._8_4_ * auVar123._8_4_ + auVar135._8_4_ * auVar135._8_4_;
      auVar87._12_4_ =
           auVar152._12_4_ * auVar152._12_4_ +
           auVar123._12_4_ * auVar123._12_4_ + auVar135._12_4_ * auVar135._12_4_;
      auVar87 = sqrtps(auVar127,auVar87);
      auVar106 = divps(auVar135,auVar87);
      auVar42 = divps(auVar123,auVar87);
      auVar134 = divps(auVar152,auVar87);
      uVar23 = -(uint)(auVar87._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77);
      uVar26 = -(uint)(auVar87._4_4_ <= _UNK_1506895d4);
      uVar30 = -(uint)(auVar87._8_4_ <= _UNK_1506895d8);
      uVar34 = -(uint)(auVar87._12_4_ <= _UNK_1506895dc);
      fVar51 = (float)(~uVar23 & auVar106._0_4_);
      fVar57 = (float)(~uVar26 & auVar106._4_4_);
      fVar59 = (float)(~uVar30 & auVar106._8_4_);
      fVar60 = (float)(~uVar34 & auVar106._12_4_);
      fVar65 = (float)(~uVar23 & auVar42._0_4_);
      fVar74 = (float)(~uVar26 & auVar42._4_4_);
      fVar138 = (float)(~uVar30 & auVar42._8_4_);
      fVar75 = (float)(~uVar34 & auVar42._12_4_);
      fVar155 = (float)(~uVar23 & auVar134._0_4_);
      fVar143 = (float)(~uVar26 & auVar134._4_4_);
      fVar85 = (float)(~uVar30 & auVar134._8_4_);
      fVar92 = (float)(~uVar34 & auVar134._12_4_);
      local_148 = auVar150._0_4_;
      fStack_144 = auVar150._4_4_;
      fStack_140 = auVar150._8_4_;
      fStack_13c = auVar150._12_4_;
      auVar150._0_4_ =
           (fVar76 * fVar155 - fVar84 * fVar51) * (float)(~uVar22 & auVar68._0_4_) +
           (fVar84 * fVar65 - fVar105 * fVar155) * local_148 +
           (fVar105 * fVar51 - fVar76 * fVar65) * (float)(~uVar22 & auVar125._0_4_);
      auVar150._4_4_ =
           (fVar77 * fVar143 - fVar95 * fVar57) * (float)(~uVar25 & auVar68._4_4_) +
           (fVar95 * fVar74 - fVar109 * fVar143) * fStack_144 +
           (fVar109 * fVar57 - fVar77 * fVar74) * (float)(~uVar25 & auVar125._4_4_);
      auVar150._8_4_ =
           (fVar82 * fVar85 - fVar103 * fVar59) * (float)(~uVar29 & auVar68._8_4_) +
           (fVar103 * fVar138 - fVar112 * fVar85) * fStack_140 +
           (fVar112 * fVar59 - fVar82 * fVar138) * (float)(~uVar29 & auVar125._8_4_);
      auVar150._12_4_ =
           (fVar83 * fVar92 - fVar104 * fVar60) * (float)(~uVar33 & auVar68._12_4_) +
           (fVar104 * fVar75 - fVar113 * fVar92) * fStack_13c +
           (fVar113 * fVar60 - fVar83 * fVar75) * (float)(~uVar33 & auVar125._12_4_);
      auVar128._0_4_ = fVar155 * fVar84 + fVar65 * fVar105 + fVar51 * fVar76;
      auVar128._4_4_ = fVar143 * fVar95 + fVar74 * fVar109 + fVar57 * fVar77;
      auVar128._8_4_ = fVar85 * fVar103 + fVar138 * fVar112 + fVar59 * fVar82;
      auVar128._12_4_ = fVar92 * fVar104 + fVar75 * fVar113 + fVar60 * fVar83;
      auVar68 = maxps(auVar128,___xmm_bf800000bf800000bf800000bf800000);
      auVar106 = minps(auVar68,___xmm_3f8000003f8000003f8000003f800000);
      auVar68 = maxps(auVar150,___xmm_bf800000bf800000bf800000bf800000);
      auVar68 = minps(auVar68,___xmm_3f8000003f8000003f8000003f800000);
      auVar42 = divps(auVar68,auVar106);
      auVar110._0_4_ = (uint)auVar42._0_4_ ^ __xmm_80000000800000008000000080000000;
      auVar110._4_4_ = (uint)auVar42._4_4_ ^ _UNK_150651574;
      auVar110._8_4_ = (uint)auVar42._8_4_ ^ _UNK_150651578;
      auVar110._12_4_ = (uint)auVar42._12_4_ ^ _UNK_15065157c;
      auVar87 = maxps(auVar110,auVar42);
      auVar125._4_4_ = -(uint)(__xmm_3f8000003f8000003f8000003f800000._4_4_ < auVar87._4_4_);
      auVar125._0_4_ = -(uint)((float)__xmm_3f8000003f8000003f8000003f800000 < auVar87._0_4_);
      auVar125._8_4_ = -(uint)(__xmm_3f8000003f8000003f8000003f800000._8_4_ < auVar87._8_4_);
      auVar125._12_4_ = -(uint)(__xmm_3f8000003f8000003f8000003f800000._12_4_ < auVar87._12_4_);
      iVar11 = movmskps(iVar11,auVar125);
      if (iVar11 != 0) {
        auVar126 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar87);
      }
      auVar87 = blendvps(auVar87,auVar126,auVar125);
      fVar51 = auVar87._0_4_;
      fVar57 = auVar87._4_4_;
      fVar59 = auVar87._8_4_;
      fVar60 = auVar87._12_4_;
      fVar65 = fVar51 * fVar51;
      fVar74 = fVar57 * fVar57;
      fVar138 = fVar59 * fVar59;
      fVar75 = fVar60 * fVar60;
      auVar86._0_4_ =
           (((((((fVar65 * ___xmm_bb9918b7bb9918b7bb9918b7bb9918b7 +
                 ___xmm_3cc6061b3cc6061b3cc6061b3cc6061b) * fVar65 +
                ___xmm_bd732a49bd732a49bd732a49bd732a49) * fVar65 +
               ___xmm_3dcadb2a3dcadb2a3dcadb2a3dcadb2a) * fVar65 +
              ___xmm_be0f8549be0f8549be0f8549be0f8549) * fVar65 +
             ___xmm_3e4c7b543e4c7b543e4c7b543e4c7b54) * fVar65 +
            ___xmm_beaaa8cfbeaaa8cfbeaaa8cfbeaaa8cf) * fVar65 +
           ___xmm_3f7ffffe3f7ffffe3f7ffffe3f7ffffe) * fVar51;
      auVar86._4_4_ =
           (((((((fVar74 * _UNK_150b51114 + _UNK_150b51124) * fVar74 + _UNK_150b51134) * fVar74 +
               _UNK_150b51144) * fVar74 + _UNK_150b51154) * fVar74 + _UNK_150b51164) * fVar74 +
            _UNK_150b51174) * fVar74 + _UNK_150b51184) * fVar57;
      auVar86._8_4_ =
           (((((((fVar138 * _UNK_150b51118 + _UNK_150b51128) * fVar138 + _UNK_150b51138) * fVar138 +
               _UNK_150b51148) * fVar138 + _UNK_150b51158) * fVar138 + _UNK_150b51168) * fVar138 +
            _UNK_150b51178) * fVar138 + _UNK_150b51188) * fVar59;
      auVar86._12_4_ =
           (((((((fVar75 * _UNK_150b5111c + _UNK_150b5112c) * fVar75 + _UNK_150b5113c) * fVar75 +
               _UNK_150b5114c) * fVar75 + _UNK_150b5115c) * fVar75 + _UNK_150b5116c) * fVar75 +
            _UNK_150b5117c) * fVar75 + _UNK_150b5118c) * fVar60;
      auVar66._0_4_ = ___xmm_3fc90fdb3fc90fdb3fc90fdb3fc90fdb - auVar86._0_4_;
      auVar66._4_4_ = _UNK_150b51194 - auVar86._4_4_;
      auVar66._8_4_ = _UNK_150b51198 - auVar86._8_4_;
      auVar66._12_4_ = _UNK_150b5119c - auVar86._12_4_;
      auVar125 = blendvps(auVar86,auVar66,auVar125);
      auVar38._4_4_ = -(uint)(auVar42._4_4_ < 0.0);
      auVar38._0_4_ = -(uint)(auVar42._0_4_ < 0.0);
      auVar67._0_4_ = auVar125._0_4_ ^ __xmm_80000000800000008000000080000000;
      auVar67._4_4_ = auVar125._4_4_ ^ _UNK_150651574;
      auVar67._8_4_ = auVar125._8_4_ ^ _UNK_150651578;
      auVar67._12_4_ = auVar125._12_4_ ^ _UNK_15065157c;
      auVar38._8_4_ = -(uint)(auVar42._8_4_ < 0.0);
      auVar38._12_4_ = -(uint)(auVar42._12_4_ < 0.0);
      auVar42 = blendvps(auVar125,auVar67,auVar38);
      auVar39._4_4_ = -(uint)(auVar68._4_4_ < 0.0);
      auVar39._0_4_ = -(uint)(auVar68._0_4_ < 0.0);
      auVar39._8_4_ = -(uint)(auVar68._8_4_ < 0.0);
      auVar39._12_4_ = -(uint)(auVar68._12_4_ < 0.0);
      auVar68 = blendvps(___xmm_40490fdb40490fdb40490fdb40490fdb,
                         ___xmm_c0490fdbc0490fdbc0490fdbc0490fdb,auVar39);
      auVar40._4_4_ =
           -(uint)(__xmm_40490fdb40490fdb40490fdb40490fdb._4_4_ -
                   (float)((uint)((float)(auVar68._4_4_ & -(uint)(auVar106._4_4_ < 0.0)) +
                                 auVar42._4_4_) & _UNK_15061cc74) <
                  (auVar41._4_4_ - (float)(puVar7[1] & uVar27)) * auVar69._4_4_);
      auVar40._0_4_ =
           -(uint)((float)__xmm_40490fdb40490fdb40490fdb40490fdb -
                   (float)((uint)((float)(auVar68._0_4_ & -(uint)(auVar106._0_4_ < 0.0)) +
                                 auVar42._0_4_) & __xmm_7fffffff7fffffff7fffffff7fffffff) <
                  (auVar41._0_4_ - (float)(*puVar7 & uVar19)) * auVar69._0_4_);
      auVar40._8_4_ =
           -(uint)(__xmm_40490fdb40490fdb40490fdb40490fdb._8_4_ -
                   (float)((uint)((float)(auVar68._8_4_ & -(uint)(auVar106._8_4_ < 0.0)) +
                                 auVar42._8_4_) & _UNK_15061cc78) <
                  (auVar41._8_4_ - (float)(puVar7[2] & uVar28)) * auVar69._8_4_);
      auVar40._12_4_ =
           -(uint)(__xmm_40490fdb40490fdb40490fdb40490fdb._12_4_ -
                   (float)((uint)((float)(auVar68._12_4_ & -(uint)(auVar106._12_4_ < 0.0)) +
                                 auVar42._12_4_) & _UNK_15061cc7c) <
                  (auVar41._12_4_ - (float)(puVar7[3] & uVar31)) * auVar69._12_4_);
      auVar41 = packssdw(auVar40,auVar40);
      auVar41 = packsswb(auVar41,auVar41);
      *(uint *)(param_4 + uVar14) = auVar41._0_4_ & (uint)__xmm_00000000000000000000000001010101;
      uVar14 = uVar14 + 4;
      uVar9 = uVar9 + 0x10;
      auVar41 = auVar52;
      uVar19 = uVar32;
      uVar27 = uVar35;
      uVar28 = uVar36;
      uVar31 = uVar6;
    } while ((int)uVar14 < (int)(uVar24 & 0xfffffffc));
  }
  uVar24 = (uint)uVar14;
  if ((int)param_7 <= (int)uVar24) {
    return;
  }
  auVar41._0_4_ =
       -(uint)((int)(uVar24 | (uint)__xmm_00000003000000020000000100000000) < (int)param_7);
  auVar41._4_4_ =
       -(uint)((int)(uVar24 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_7);
  auVar41._8_4_ = -(uint)((int)(uVar24 | _UNK_150631e08) < (int)param_7);
  auVar41._12_4_ = -(uint)((int)(uVar24 | _UNK_150631e0c) < (int)param_7);
  uVar14 = uVar14 & 0xffffffff;
  pauVar8 = (undefined1 (*) [16])(param_2 + uVar14 * 0x10);
  uVar19 = movmskps(unaff_R15D,auVar41);
  bVar10 = (char)((char)uVar19 << 4) >> 4;
  if (uVar19 == 0xf) {
    auVar68 = *pauVar8;
    iVar58 = *(int *)pauVar8[1];
    auVar52 = pauVar8[2];
    iVar61 = *(int *)pauVar8[3];
    auVar78._0_8_ = auVar68._0_8_;
    auVar78._8_4_ = auVar68._4_4_;
    auVar78._12_4_ = *(undefined4 *)(pauVar8[1] + 4);
    iVar11 = auVar68._0_4_;
    auVar98._0_8_ = CONCAT44(*(undefined4 *)(pauVar8[1] + 8),auVar68._8_4_);
    auVar98._8_4_ = auVar68._12_4_;
    auVar98._12_4_ = *(undefined4 *)(pauVar8[1] + 0xc);
    auVar69._0_8_ = auVar52._0_8_;
    auVar69._8_4_ = auVar52._4_4_;
    auVar69._12_4_ = *(undefined4 *)(pauVar8[3] + 4);
    iVar37 = auVar52._0_4_;
    auVar62._0_8_ = CONCAT44(*(undefined4 *)(pauVar8[3] + 8),auVar52._8_4_);
    auVar62._8_4_ = auVar52._12_4_;
    auVar62._12_4_ = *(undefined4 *)(pauVar8[3] + 0xc);
    auVar52._8_8_ = auVar69._8_8_;
    auVar52._0_8_ = auVar78._8_8_;
    auVar88._8_8_ = auVar62._0_8_;
    auVar88._0_8_ = auVar98._0_8_;
    auVar97._8_8_ = auVar62._8_8_;
    auVar97._0_8_ = auVar98._8_8_;
  }
  else {
    auVar43._0_4_ = ___xmm_00000030000000200000001000000000 & auVar41._0_4_;
    auVar43._4_4_ = _UNK_150b511c4 & auVar41._4_4_;
    auVar43._8_4_ = _UNK_150b511c8 & auVar41._8_4_;
    auVar43._12_4_ = _UNK_150b511cc & auVar41._12_4_;
    lVar18 = extractps(auVar43,1);
    lVar17 = extractps(auVar43,2);
    lVar16 = extractps(auVar43,3);
    iVar11 = *(int *)*pauVar8;
    iVar58 = *(int *)(*pauVar8 + lVar18);
    iVar37 = *(int *)(*pauVar8 + lVar17);
    iVar61 = *(int *)(*pauVar8 + lVar16);
    auVar68 = ___xmm_00000034000000240000001400000004 & auVar41;
    auVar52._4_4_ = *(undefined4 *)(*pauVar8 + auVar68._4_4_);
    auVar52._0_4_ = *(undefined4 *)(*pauVar8 + auVar68._0_4_);
    auVar52._12_4_ = *(undefined4 *)(*pauVar8 + auVar68._12_4_);
    auVar52._8_4_ = *(undefined4 *)(*pauVar8 + auVar68._8_4_);
    auVar68 = ___xmm_00000038000000280000001800000008 & auVar41;
    auVar88._4_4_ = *(undefined4 *)(*pauVar8 + auVar68._4_4_);
    auVar88._0_4_ = *(undefined4 *)(*pauVar8 + auVar68._0_4_);
    auVar88._12_4_ = *(undefined4 *)(*pauVar8 + auVar68._12_4_);
    auVar88._8_4_ = *(undefined4 *)(*pauVar8 + auVar68._8_4_);
    auVar44 = ___xmm_0000003c0000002c0000001c0000000c & auVar41;
    auVar97._4_4_ = *(undefined4 *)(*pauVar8 + auVar44._4_4_);
    auVar97._0_4_ = *(undefined4 *)(*pauVar8 + auVar44._0_4_);
    auVar97._12_4_ = *(undefined4 *)(*pauVar8 + auVar44._12_4_);
    auVar97._8_4_ = *(undefined4 *)(*pauVar8 + auVar44._8_4_);
    pbVar13 = (byte *)(param_5 + uVar14);
    if ((~bVar10 & 9) != 0) {
      if ((uVar19 & 1) != 0) {
        auVar44 = ZEXT116(*pbVar13);
      }
      if ((uVar19 & 2) != 0) {
        auVar64._8_8_ = auVar44._8_8_;
        auVar64._0_8_ = auVar44._0_8_ & 0xffffffffffff00ff | (ulonglong)pbVar13[1] << 8;
        auVar44 = pblendw(auVar44,auVar64,0xfd);
      }
      if ((uVar19 & 4) != 0) {
        bVar4 = auVar44[3];
        auVar68 = pmovzxwd(auVar44,auVar44);
        auVar44._8_8_ = auVar68._8_8_;
        auVar44._0_8_ =
             auVar68._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar13[2] << 0x10 |
             (ulonglong)bVar4 << 0x18;
      }
      if ((uVar19 & 8) == 0) {
        local_138 = auVar44._0_4_;
        bVar5 = false;
      }
      else {
        auVar68 = pmovzxwd(auVar44,auVar44);
        local_138 = auVar68._0_4_ & 0xffff | (uint)auVar44[2] << 0x10 | (uint)pbVar13[3] << 0x18;
        bVar5 = false;
      }
      goto LAB_140064475;
    }
  }
  local_138 = *(uint *)(param_5 + uVar14);
  bVar5 = true;
LAB_140064475:
  auVar129._4_4_ = iVar58 * 3;
  auVar129._0_4_ = iVar11 * 3;
  auVar129._8_4_ = iVar37 * 3;
  auVar129._12_4_ = iVar61 * 3;
  auVar129 = auVar129 & auVar41;
  lVar16 = param_1 + (longlong)auVar129._0_4_ * 4;
  lVar17 = param_1 + (longlong)auVar129._4_4_ * 4;
  auVar125 = ___xmm_00000004000000040000000400000004 & auVar41;
  uVar9 = (ulonglong)auVar125._0_4_;
  uVar21 = (ulonglong)auVar125._4_4_;
  auVar42 = insertps(ZEXT416(*(uint *)(uVar9 + lVar16)),*(undefined4 *)(uVar21 + lVar17),0x10);
  auVar110 = ___xmm_00000008000000080000000800000008 & auVar41;
  uVar12 = (ulonglong)auVar110._0_4_;
  uVar15 = (ulonglong)auVar110._4_4_;
  auVar126 = insertps(ZEXT416(*(uint *)(uVar12 + lVar16)),*(undefined4 *)(uVar15 + lVar17),0x10);
  auVar153._4_4_ = auVar52._4_4_ * 3;
  auVar153._0_4_ = auVar52._0_4_ * 3;
  auVar153._8_4_ = auVar52._8_4_ * 3;
  auVar153._12_4_ = auVar52._12_4_ * 3;
  auVar153 = auVar153 & auVar41;
  lVar16 = param_1 + (longlong)auVar153._0_4_ * 4;
  lVar17 = param_1 + (longlong)auVar153._4_4_ * 4;
  auVar87 = insertps(ZEXT416(*(uint *)(uVar9 + lVar16)),*(undefined4 *)(uVar21 + lVar17),0x10);
  auVar52 = insertps(ZEXT416(*(uint *)(uVar12 + lVar16)),*(undefined4 *)(uVar15 + lVar17),0x10);
  auVar107._4_4_ = auVar88._4_4_ * 3;
  auVar107._0_4_ = auVar88._0_4_ * 3;
  auVar107._8_4_ = auVar88._8_4_ * 3;
  auVar107._12_4_ = auVar88._12_4_ * 3;
  auVar107 = auVar107 & auVar41;
  lVar16 = param_1 + (longlong)auVar107._0_4_ * 4;
  lVar17 = param_1 + (longlong)auVar107._4_4_ * 4;
  auVar69 = insertps(ZEXT416(*(uint *)(uVar9 + lVar16)),*(undefined4 *)(uVar21 + lVar17),0x10);
  auVar106 = insertps(ZEXT416(*(uint *)(uVar12 + lVar16)),*(undefined4 *)(uVar15 + lVar17),0x10);
  auVar89._4_4_ = auVar97._4_4_ * 3;
  auVar89._0_4_ = auVar97._0_4_ * 3;
  auVar89._8_4_ = auVar97._8_4_ * 3;
  auVar89._12_4_ = auVar97._12_4_ * 3;
  auVar89 = auVar89 & auVar41;
  lVar16 = param_1 + (longlong)auVar89._0_4_ * 4;
  lVar17 = param_1 + (longlong)auVar89._4_4_ * 4;
  auVar150 = insertps(ZEXT416(*(uint *)(uVar9 + lVar16)),*(undefined4 *)(uVar21 + lVar17),0x10);
  auVar68 = insertps(ZEXT416(*(uint *)(uVar12 + lVar16)),*(undefined4 *)(uVar15 + lVar17),0x10);
  lVar16 = param_1 + (longlong)auVar129._8_4_ * 4;
  uVar12 = (ulonglong)auVar125._8_4_;
  auVar42 = insertps(auVar42,*(undefined4 *)(uVar12 + lVar16),0x20);
  uVar9 = (ulonglong)auVar110._8_4_;
  auVar126 = insertps(auVar126,*(undefined4 *)(uVar9 + lVar16),0x20);
  lVar16 = param_1 + (longlong)auVar153._8_4_ * 4;
  auVar87 = insertps(auVar87,*(undefined4 *)(uVar12 + lVar16),0x20);
  auVar52 = insertps(auVar52,*(undefined4 *)(uVar9 + lVar16),0x20);
  lVar16 = param_1 + (longlong)auVar107._8_4_ * 4;
  auVar151 = insertps(auVar69,*(undefined4 *)(uVar12 + lVar16),0x20);
  auVar69 = insertps(auVar106,*(undefined4 *)(uVar9 + lVar16),0x20);
  lVar16 = param_1 + (longlong)auVar89._8_4_ * 4;
  auVar150 = insertps(auVar150,*(undefined4 *)(uVar12 + lVar16),0x20);
  auVar68 = insertps(auVar68,*(undefined4 *)(uVar9 + lVar16),0x20);
  auVar106 = insertps(ZEXT416(*(uint *)(param_1 + (longlong)auVar129._0_4_ * 4)),
                      *(undefined4 *)(param_1 + (longlong)auVar129._4_4_ * 4),0x10);
  auVar106 = insertps(auVar106,*(undefined4 *)(param_1 + (longlong)auVar129._8_4_ * 4),0x20);
  uVar12 = (ulonglong)auVar125._12_4_;
  auVar134 = insertps(auVar106,*(undefined4 *)(param_1 + (longlong)auVar129._12_4_ * 4),0x30);
  lVar16 = param_1 + (longlong)auVar129._12_4_ * 4;
  auVar125 = insertps(auVar42,*(undefined4 *)(uVar12 + lVar16),0x30);
  uVar9 = (ulonglong)auVar110._12_4_;
  auVar106 = insertps(auVar126,*(undefined4 *)(uVar9 + lVar16),0x30);
  auVar42 = insertps(ZEXT416(*(uint *)(param_1 + (longlong)auVar153._0_4_ * 4)),
                     *(undefined4 *)(param_1 + (longlong)auVar153._4_4_ * 4),0x10);
  auVar42 = insertps(auVar42,*(undefined4 *)(param_1 + (longlong)auVar153._8_4_ * 4),0x20);
  auVar110 = insertps(auVar42,*(undefined4 *)(param_1 + (longlong)auVar153._12_4_ * 4),0x30);
  lVar16 = param_1 + (longlong)auVar153._12_4_ * 4;
  auVar87 = insertps(auVar87,*(undefined4 *)(uVar12 + lVar16),0x30);
  auVar42 = insertps(auVar52,*(undefined4 *)(uVar9 + lVar16),0x30);
  auVar52 = insertps(ZEXT416(*(uint *)(param_1 + (longlong)auVar107._0_4_ * 4)),
                     *(undefined4 *)(param_1 + (longlong)auVar107._4_4_ * 4),0x10);
  auVar52 = insertps(auVar52,*(undefined4 *)(param_1 + (longlong)auVar107._8_4_ * 4),0x20);
  auVar116 = insertps(auVar52,*(undefined4 *)(param_1 + (longlong)auVar107._12_4_ * 4),0x30);
  lVar16 = param_1 + (longlong)auVar107._12_4_ * 4;
  auVar151 = insertps(auVar151,*(undefined4 *)(uVar12 + lVar16),0x30);
  auVar69 = insertps(auVar69,*(undefined4 *)(uVar9 + lVar16),0x30);
  auVar52 = insertps(ZEXT416(*(uint *)(param_1 + (longlong)auVar89._0_4_ * 4)),
                     *(undefined4 *)(param_1 + (longlong)auVar89._4_4_ * 4),0x10);
  auVar52 = insertps(auVar52,*(undefined4 *)(param_1 + (longlong)auVar89._8_4_ * 4),0x20);
  auVar126 = insertps(auVar52,*(undefined4 *)(param_1 + (longlong)auVar89._12_4_ * 4),0x30);
  param_1 = param_1 + (longlong)auVar89._12_4_ * 4;
  auVar150 = insertps(auVar150,*(undefined4 *)(uVar12 + param_1),0x30);
  auVar68 = insertps(auVar68,*(undefined4 *)(uVar9 + param_1),0x30);
  auVar52 = pmovsxbd(auVar68,local_138);
  auVar45._0_4_ = auVar52._0_4_ << 2;
  auVar45._4_4_ = auVar52._4_4_ << 2;
  auVar45._8_4_ = auVar52._8_4_ << 2;
  auVar45._12_4_ = auVar52._12_4_ << 2;
  auVar45 = auVar45 & auVar41;
  auVar52 = insertps(ZEXT416(*(uint *)(param_6 + auVar45._0_4_)),
                     *(undefined4 *)(param_6 + auVar45._4_4_),0x10);
  auVar52 = insertps(auVar52,*(undefined4 *)(param_6 + auVar45._8_4_),0x20);
  auVar52 = insertps(auVar52,*(undefined4 *)(param_6 + auVar45._12_4_),0x30);
  puVar7 = (uint *)(longlong)(int)(uVar24 << 2);
  if (bVar5) {
    auVar45 = *(undefined1 (*) [16])(param_3 + (longlong)puVar7);
  }
  else {
    puVar7 = (uint *)(param_3 + (longlong)puVar7);
    if ((uVar19 & 1) != 0) {
      auVar45 = ZEXT416(*puVar7);
    }
    if ((uVar19 & 2) != 0) {
      auVar45 = insertps(auVar45,puVar7[1],0x10);
    }
    if ((uVar19 & 4) != 0) {
      auVar45 = insertps(auVar45,puVar7[2],0x20);
    }
    if ((uVar19 & 8) != 0) {
      auVar45 = insertps(auVar45,puVar7[3],0x30);
    }
  }
  fVar120 = auVar110._0_4_;
  fVar121 = auVar110._4_4_;
  fVar124 = auVar110._12_4_;
  fVar113 = auVar134._0_4_;
  auVar70._0_4_ = fVar120 - fVar113;
  fVar114 = auVar134._4_4_;
  auVar70._4_4_ = fVar121 - fVar114;
  fVar155 = auVar110._8_4_;
  fVar115 = auVar134._8_4_;
  auVar70._8_4_ = fVar155 - fVar115;
  fVar119 = auVar134._12_4_;
  auVar70._12_4_ = fVar124 - fVar119;
  fVar77 = auVar87._0_4_;
  fVar82 = auVar87._4_4_;
  fVar143 = auVar87._12_4_;
  fVar74 = auVar125._0_4_;
  auVar53._0_4_ = fVar77 - fVar74;
  fVar138 = auVar125._4_4_;
  auVar53._4_4_ = fVar82 - fVar138;
  fVar59 = auVar87._8_4_;
  fVar75 = auVar125._8_4_;
  auVar53._8_4_ = fVar59 - fVar75;
  fVar76 = auVar125._12_4_;
  auVar53._12_4_ = fVar143 - fVar76;
  auVar90._0_4_ = auVar53._0_4_ * auVar53._0_4_ + auVar70._0_4_ * auVar70._0_4_;
  auVar90._4_4_ = auVar53._4_4_ * auVar53._4_4_ + auVar70._4_4_ * auVar70._4_4_;
  auVar90._8_4_ = auVar53._8_4_ * auVar53._8_4_ + auVar70._8_4_ * auVar70._8_4_;
  auVar90._12_4_ = auVar53._12_4_ * auVar53._12_4_ + auVar70._12_4_ * auVar70._12_4_;
  fVar105 = auVar42._0_4_;
  fVar109 = auVar42._4_4_;
  fVar112 = auVar42._12_4_;
  fVar148 = auVar106._0_4_;
  auVar99._0_4_ = fVar105 - fVar148;
  fVar149 = auVar106._4_4_;
  auVar99._4_4_ = fVar109 - fVar149;
  fVar95 = auVar42._8_4_;
  fVar154 = auVar106._8_4_;
  auVar99._8_4_ = fVar95 - fVar154;
  fVar156 = auVar106._12_4_;
  auVar99._12_4_ = fVar112 - fVar156;
  auVar46._0_4_ = auVar99._0_4_ * auVar99._0_4_ + auVar90._0_4_;
  auVar46._4_4_ = auVar99._4_4_ * auVar99._4_4_ + auVar90._4_4_;
  auVar46._8_4_ = auVar99._8_4_ * auVar99._8_4_ + auVar90._8_4_;
  auVar46._12_4_ = auVar99._12_4_ * auVar99._12_4_ + auVar90._12_4_;
  auVar87 = sqrtps(auVar90,auVar46);
  auVar125 = divps(auVar70,auVar87);
  auVar42 = divps(auVar53,auVar87);
  auVar106 = divps(auVar99,auVar87);
  uVar24 = -(uint)(auVar46._0_4_ <= ___xmm_00800000008000000080000000800000);
  uVar27 = -(uint)(auVar46._4_4_ <= _UNK_1508be494);
  uVar31 = -(uint)(auVar46._8_4_ <= _UNK_1508be498);
  uVar35 = -(uint)(auVar46._12_4_ <= _UNK_1508be49c);
  auVar47._4_4_ = uVar27;
  auVar47._0_4_ = uVar24;
  auVar47._8_4_ = uVar31;
  auVar47._12_4_ = uVar35;
  auVar87 = blendvps(auVar125,___xmm_3f8000003f8000003f8000003f800000,auVar47);
  fVar93 = fVar113 - auVar116._0_4_;
  fVar94 = fVar114 - auVar116._4_4_;
  fVar103 = fVar115 - auVar116._8_4_;
  fVar104 = fVar119 - auVar116._12_4_;
  fVar83 = fVar120 - auVar116._0_4_;
  fVar84 = fVar121 - auVar116._4_4_;
  fVar85 = fVar155 - auVar116._8_4_;
  fVar92 = fVar124 - auVar116._12_4_;
  fVar51 = fVar74 - auVar151._0_4_;
  fVar57 = fVar138 - auVar151._4_4_;
  fVar60 = fVar75 - auVar151._8_4_;
  fVar65 = fVar76 - auVar151._12_4_;
  fVar144 = fVar77 - auVar151._0_4_;
  fVar145 = fVar82 - auVar151._4_4_;
  fVar146 = fVar59 - auVar151._8_4_;
  fVar147 = fVar143 - auVar151._12_4_;
  fVar130 = fVar148 - auVar69._0_4_;
  fVar131 = fVar149 - auVar69._4_4_;
  fVar132 = fVar154 - auVar69._8_4_;
  fVar133 = fVar156 - auVar69._12_4_;
  fVar137 = fVar105 - auVar69._0_4_;
  fVar139 = fVar109 - auVar69._4_4_;
  fVar140 = fVar95 - auVar69._8_4_;
  fVar142 = fVar112 - auVar69._12_4_;
  auVar100._0_4_ = fVar93 * fVar144 - fVar83 * fVar51;
  auVar100._4_4_ = fVar94 * fVar145 - fVar84 * fVar57;
  auVar100._8_4_ = fVar103 * fVar146 - fVar85 * fVar60;
  auVar100._12_4_ = fVar104 * fVar147 - fVar92 * fVar65;
  auVar54._0_4_ = fVar51 * fVar137 - fVar144 * fVar130;
  auVar54._4_4_ = fVar57 * fVar139 - fVar145 * fVar131;
  auVar54._8_4_ = fVar60 * fVar140 - fVar146 * fVar132;
  auVar54._12_4_ = fVar65 * fVar142 - fVar147 * fVar133;
  auVar117._0_4_ = fVar83 * fVar130 - fVar137 * fVar93;
  auVar117._4_4_ = fVar84 * fVar131 - fVar139 * fVar94;
  auVar117._8_4_ = fVar85 * fVar132 - fVar140 * fVar103;
  auVar117._12_4_ = fVar92 * fVar133 - fVar142 * fVar104;
  auVar136._0_4_ = auVar117._0_4_ * auVar117._0_4_ + auVar54._0_4_ * auVar54._0_4_;
  auVar136._4_4_ = auVar117._4_4_ * auVar117._4_4_ + auVar54._4_4_ * auVar54._4_4_;
  auVar136._8_4_ = auVar117._8_4_ * auVar117._8_4_ + auVar54._8_4_ * auVar54._8_4_;
  auVar136._12_4_ = auVar117._12_4_ * auVar117._12_4_ + auVar54._12_4_ * auVar54._12_4_;
  auVar91._0_4_ = auVar100._0_4_ * auVar100._0_4_ + auVar136._0_4_;
  auVar91._4_4_ = auVar100._4_4_ * auVar100._4_4_ + auVar136._4_4_;
  auVar91._8_4_ = auVar100._8_4_ * auVar100._8_4_ + auVar136._8_4_;
  auVar91._12_4_ = auVar100._12_4_ * auVar100._12_4_ + auVar136._12_4_;
  auVar110 = sqrtps(auVar136,auVar91);
  auVar125 = divps(auVar54,auVar110);
  auVar134 = divps(auVar117,auVar110);
  auVar69 = divps(auVar100,auVar110);
  uVar19 = -(uint)(auVar110._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77);
  uVar28 = -(uint)(auVar110._4_4_ <= _UNK_1506895d4);
  uVar32 = -(uint)(auVar110._8_4_ <= _UNK_1506895d8);
  uVar36 = -(uint)(auVar110._12_4_ <= _UNK_1506895dc);
  fVar83 = (float)(~uVar19 & auVar125._0_4_);
  fVar84 = (float)(~uVar28 & auVar125._4_4_);
  fVar85 = (float)(~uVar32 & auVar125._8_4_);
  fVar92 = (float)(~uVar36 & auVar125._12_4_);
  fVar130 = (float)(~uVar19 & auVar134._0_4_);
  fVar131 = (float)(~uVar28 & auVar134._4_4_);
  fVar132 = (float)(~uVar32 & auVar134._8_4_);
  fVar133 = (float)(~uVar36 & auVar134._12_4_);
  fVar93 = (float)(~uVar19 & auVar69._0_4_);
  fVar94 = (float)(~uVar28 & auVar69._4_4_);
  fVar103 = (float)(~uVar32 & auVar69._8_4_);
  fVar104 = (float)(~uVar36 & auVar69._12_4_);
  local_108 = auVar126._0_4_;
  fStack_104 = auVar126._4_4_;
  fStack_100 = auVar126._8_4_;
  fStack_fc = auVar126._12_4_;
  local_118 = auVar150._0_4_;
  fStack_114 = auVar150._4_4_;
  fStack_110 = auVar150._8_4_;
  fStack_10c = auVar150._12_4_;
  local_128 = auVar68._0_4_;
  fStack_124 = auVar68._4_4_;
  fStack_120 = auVar68._8_4_;
  fStack_11c = auVar68._12_4_;
  auVar55._0_4_ =
       (fVar120 - local_108) * (fVar74 - local_118) - (fVar113 - local_108) * (fVar77 - local_118);
  auVar55._4_4_ =
       (fVar121 - fStack_104) * (fVar138 - fStack_114) -
       (fVar114 - fStack_104) * (fVar82 - fStack_114);
  auVar55._8_4_ =
       (fVar155 - fStack_100) * (fVar75 - fStack_110) -
       (fVar115 - fStack_100) * (fVar59 - fStack_110);
  auVar55._12_4_ =
       (fVar124 - fStack_fc) * (fVar76 - fStack_10c) -
       (fVar119 - fStack_fc) * (fVar143 - fStack_10c);
  auVar79._0_4_ =
       (fVar77 - local_118) * (fVar148 - local_128) - (fVar74 - local_118) * (fVar105 - local_128);
  auVar79._4_4_ =
       (fVar82 - fStack_114) * (fVar149 - fStack_124) -
       (fVar138 - fStack_114) * (fVar109 - fStack_124);
  auVar79._8_4_ =
       (fVar59 - fStack_110) * (fVar154 - fStack_120) -
       (fVar75 - fStack_110) * (fVar95 - fStack_120);
  auVar79._12_4_ =
       (fVar143 - fStack_10c) * (fVar156 - fStack_11c) -
       (fVar76 - fStack_10c) * (fVar112 - fStack_11c);
  auVar118._0_4_ =
       (fVar113 - local_108) * (fVar105 - local_128) - (fVar148 - local_128) * (fVar120 - local_108)
  ;
  auVar118._4_4_ =
       (fVar114 - fStack_104) * (fVar109 - fStack_124) -
       (fVar149 - fStack_124) * (fVar121 - fStack_104);
  auVar118._8_4_ =
       (fVar115 - fStack_100) * (fVar95 - fStack_120) -
       (fVar154 - fStack_120) * (fVar155 - fStack_100);
  auVar118._12_4_ =
       (fVar119 - fStack_fc) * (fVar112 - fStack_11c) -
       (fVar156 - fStack_11c) * (fVar124 - fStack_fc);
  auVar101._0_4_ = auVar118._0_4_ * auVar118._0_4_ + auVar79._0_4_ * auVar79._0_4_;
  auVar101._4_4_ = auVar118._4_4_ * auVar118._4_4_ + auVar79._4_4_ * auVar79._4_4_;
  auVar101._8_4_ = auVar118._8_4_ * auVar118._8_4_ + auVar79._8_4_ * auVar79._8_4_;
  auVar101._12_4_ = auVar118._12_4_ * auVar118._12_4_ + auVar79._12_4_ * auVar79._12_4_;
  auVar63._0_4_ = auVar55._0_4_ * auVar55._0_4_ + auVar101._0_4_;
  auVar63._4_4_ = auVar55._4_4_ * auVar55._4_4_ + auVar101._4_4_;
  auVar63._8_4_ = auVar55._8_4_ * auVar55._8_4_ + auVar101._8_4_;
  auVar63._12_4_ = auVar55._12_4_ * auVar55._12_4_ + auVar101._12_4_;
  auVar150 = sqrtps(auVar101,auVar63);
  auVar125 = divps(auVar79,auVar150);
  auVar126 = divps(auVar118,auVar150);
  auVar68 = divps(auVar55,auVar150);
  uVar19 = -(uint)(auVar150._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77);
  uVar28 = -(uint)(auVar150._4_4_ <= _UNK_1506895d4);
  uVar32 = -(uint)(auVar150._8_4_ <= _UNK_1506895d8);
  uVar36 = -(uint)(auVar150._12_4_ <= _UNK_1506895dc);
  fVar51 = (float)(~uVar19 & auVar125._0_4_);
  fVar57 = (float)(~uVar28 & auVar125._4_4_);
  fVar59 = (float)(~uVar32 & auVar125._8_4_);
  fVar60 = (float)(~uVar36 & auVar125._12_4_);
  fVar65 = (float)(~uVar19 & auVar126._0_4_);
  fVar74 = (float)(~uVar28 & auVar126._4_4_);
  fVar138 = (float)(~uVar32 & auVar126._8_4_);
  fVar75 = (float)(~uVar36 & auVar126._12_4_);
  fVar76 = (float)(~uVar19 & auVar68._0_4_);
  fVar155 = (float)(~uVar28 & auVar68._4_4_);
  fVar77 = (float)(~uVar32 & auVar68._8_4_);
  fVar82 = (float)(~uVar36 & auVar68._12_4_);
  auVar56._0_4_ =
       (fVar83 * fVar76 - fVar93 * fVar51) * (float)(~uVar24 & auVar42._0_4_) +
       (fVar93 * fVar65 - fVar130 * fVar76) * auVar87._0_4_ +
       (fVar130 * fVar51 - fVar83 * fVar65) * (float)(~uVar24 & auVar106._0_4_);
  auVar56._4_4_ =
       (fVar84 * fVar155 - fVar94 * fVar57) * (float)(~uVar27 & auVar42._4_4_) +
       (fVar94 * fVar74 - fVar131 * fVar155) * auVar87._4_4_ +
       (fVar131 * fVar57 - fVar84 * fVar74) * (float)(~uVar27 & auVar106._4_4_);
  auVar56._8_4_ =
       (fVar85 * fVar77 - fVar103 * fVar59) * (float)(~uVar31 & auVar42._8_4_) +
       (fVar103 * fVar138 - fVar132 * fVar77) * auVar87._8_4_ +
       (fVar132 * fVar59 - fVar85 * fVar138) * (float)(~uVar31 & auVar106._8_4_);
  auVar56._12_4_ =
       (fVar92 * fVar82 - fVar104 * fVar60) * (float)(~uVar35 & auVar42._12_4_) +
       (fVar104 * fVar75 - fVar133 * fVar82) * auVar87._12_4_ +
       (fVar133 * fVar60 - fVar92 * fVar75) * (float)(~uVar35 & auVar106._12_4_);
  auVar102._0_4_ = fVar76 * fVar93 + fVar65 * fVar130 + fVar51 * fVar83;
  auVar102._4_4_ = fVar155 * fVar94 + fVar74 * fVar131 + fVar57 * fVar84;
  auVar102._8_4_ = fVar77 * fVar103 + fVar138 * fVar132 + fVar59 * fVar85;
  auVar102._12_4_ = fVar82 * fVar104 + fVar75 * fVar133 + fVar60 * fVar92;
  auVar68 = maxps(auVar102,___xmm_bf800000bf800000bf800000bf800000);
  auVar87 = minps(auVar68,___xmm_3f8000003f8000003f8000003f800000);
  auVar68 = maxps(auVar56,___xmm_bf800000bf800000bf800000bf800000);
  auVar68 = minps(auVar68,___xmm_3f8000003f8000003f8000003f800000);
  auVar42 = divps(auVar68,auVar87);
  auVar71._0_4_ = __xmm_80000000800000008000000080000000 ^ (uint)auVar42._0_4_;
  auVar71._4_4_ = _UNK_150651574 ^ (uint)auVar42._4_4_;
  auVar71._8_4_ = _UNK_150651578 ^ (uint)auVar42._8_4_;
  auVar71._12_4_ = _UNK_15065157c ^ (uint)auVar42._12_4_;
  auVar125 = maxps(auVar71,auVar42);
  uVar24 = -(uint)((float)__xmm_3f8000003f8000003f8000003f800000 < auVar125._0_4_);
  uVar19 = -(uint)(__xmm_3f8000003f8000003f8000003f800000._4_4_ < auVar125._4_4_);
  uVar27 = -(uint)(__xmm_3f8000003f8000003f8000003f800000._8_4_ < auVar125._8_4_);
  uVar28 = -(uint)(__xmm_3f8000003f8000003f8000003f800000._12_4_ < auVar125._12_4_);
  auVar48._4_4_ = uVar19;
  auVar48._0_4_ = uVar24;
  auVar48._8_4_ = uVar27;
  auVar48._12_4_ = uVar28;
  auVar80._0_4_ = auVar41._0_4_ & uVar24;
  auVar80._4_4_ = auVar41._4_4_ & uVar19;
  auVar80._8_4_ = auVar41._8_4_ & uVar27;
  auVar80._12_4_ = auVar41._12_4_ & uVar28;
  iVar11 = movmskps((int)puVar7,auVar80);
  auVar41 = ___xmm_3f8000003f8000003f8000003f800000;
  if (iVar11 != 0) {
    auVar41 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar125);
  }
  auVar41 = blendvps(auVar125,auVar41,auVar48);
  fVar51 = auVar41._0_4_;
  fVar57 = auVar41._4_4_;
  fVar59 = auVar41._8_4_;
  fVar60 = auVar41._12_4_;
  fVar65 = fVar51 * fVar51;
  fVar74 = fVar57 * fVar57;
  fVar138 = fVar59 * fVar59;
  fVar75 = fVar60 * fVar60;
  auVar81._0_4_ =
       (((((((___xmm_bb9918b7bb9918b7bb9918b7bb9918b7 * fVar65 +
             ___xmm_3cc6061b3cc6061b3cc6061b3cc6061b) * fVar65 +
            ___xmm_bd732a49bd732a49bd732a49bd732a49) * fVar65 +
           ___xmm_3dcadb2a3dcadb2a3dcadb2a3dcadb2a) * fVar65 +
          ___xmm_be0f8549be0f8549be0f8549be0f8549) * fVar65 +
         ___xmm_3e4c7b543e4c7b543e4c7b543e4c7b54) * fVar65 + ___xmm_beaaa8cfbeaaa8cfbeaaa8cfbeaaa8cf
        ) * fVar65 + ___xmm_3f7ffffe3f7ffffe3f7ffffe3f7ffffe) * fVar51;
  auVar81._4_4_ =
       (((((((_UNK_150b51114 * fVar74 + _UNK_150b51124) * fVar74 + _UNK_150b51134) * fVar74 +
           _UNK_150b51144) * fVar74 + _UNK_150b51154) * fVar74 + _UNK_150b51164) * fVar74 +
        _UNK_150b51174) * fVar74 + _UNK_150b51184) * fVar57;
  auVar81._8_4_ =
       (((((((_UNK_150b51118 * fVar138 + _UNK_150b51128) * fVar138 + _UNK_150b51138) * fVar138 +
           _UNK_150b51148) * fVar138 + _UNK_150b51158) * fVar138 + _UNK_150b51168) * fVar138 +
        _UNK_150b51178) * fVar138 + _UNK_150b51188) * fVar59;
  auVar81._12_4_ =
       (((((((_UNK_150b5111c * fVar75 + _UNK_150b5112c) * fVar75 + _UNK_150b5113c) * fVar75 +
           _UNK_150b5114c) * fVar75 + _UNK_150b5115c) * fVar75 + _UNK_150b5116c) * fVar75 +
        _UNK_150b5117c) * fVar75 + _UNK_150b5118c) * fVar60;
  auVar72._0_4_ = ___xmm_3fc90fdb3fc90fdb3fc90fdb3fc90fdb - auVar81._0_4_;
  auVar72._4_4_ = _UNK_150b51194 - auVar81._4_4_;
  auVar72._8_4_ = _UNK_150b51198 - auVar81._8_4_;
  auVar72._12_4_ = _UNK_150b5119c - auVar81._12_4_;
  auVar41 = blendvps(auVar81,auVar72,auVar48);
  auVar49._4_4_ = -(uint)(auVar42._4_4_ < 0.0);
  auVar49._0_4_ = -(uint)(auVar42._0_4_ < 0.0);
  auVar73._0_4_ = __xmm_80000000800000008000000080000000 ^ auVar41._0_4_;
  auVar73._4_4_ = _UNK_150651574 ^ auVar41._4_4_;
  auVar73._8_4_ = _UNK_150651578 ^ auVar41._8_4_;
  auVar73._12_4_ = _UNK_15065157c ^ auVar41._12_4_;
  auVar49._8_4_ = -(uint)(auVar42._8_4_ < 0.0);
  auVar49._12_4_ = -(uint)(auVar42._12_4_ < 0.0);
  auVar42 = blendvps(auVar41,auVar73,auVar49);
  auVar50._4_4_ = -(uint)(auVar68._4_4_ < 0.0);
  auVar50._0_4_ = -(uint)(auVar68._0_4_ < 0.0);
  auVar50._8_4_ = -(uint)(auVar68._8_4_ < 0.0);
  auVar50._12_4_ = -(uint)(auVar68._12_4_ < 0.0);
  auVar41 = blendvps(___xmm_40490fdb40490fdb40490fdb40490fdb,___xmm_c0490fdbc0490fdbc0490fdbc0490fdb
                     ,auVar50);
  auVar108._4_4_ =
       -(uint)(__xmm_40490fdb40490fdb40490fdb40490fdb._4_4_ -
               (float)((uint)((float)(auVar41._4_4_ & -(uint)(auVar87._4_4_ < 0.0)) + auVar42._4_4_)
                      & _UNK_15061cc74) <
              auVar52._4_4_ *
              (__xmm_40490fdb40490fdb40490fdb40490fdb._4_4_ -
              (float)(auVar45._4_4_ & _UNK_15061cc74)));
  auVar108._0_4_ =
       -(uint)((float)__xmm_40490fdb40490fdb40490fdb40490fdb -
               (float)((uint)((float)(auVar41._0_4_ & -(uint)(auVar87._0_4_ < 0.0)) + auVar42._0_4_)
                      & __xmm_7fffffff7fffffff7fffffff7fffffff) <
              auVar52._0_4_ *
              ((float)__xmm_40490fdb40490fdb40490fdb40490fdb -
              (float)(auVar45._0_4_ & __xmm_7fffffff7fffffff7fffffff7fffffff)));
  auVar108._8_4_ =
       -(uint)(__xmm_40490fdb40490fdb40490fdb40490fdb._8_4_ -
               (float)((uint)((float)(auVar41._8_4_ & -(uint)(auVar87._8_4_ < 0.0)) + auVar42._8_4_)
                      & _UNK_15061cc78) <
              auVar52._8_4_ *
              (__xmm_40490fdb40490fdb40490fdb40490fdb._8_4_ -
              (float)(auVar45._8_4_ & _UNK_15061cc78)));
  auVar108._12_4_ =
       -(uint)(__xmm_40490fdb40490fdb40490fdb40490fdb._12_4_ -
               (float)((uint)((float)(auVar41._12_4_ & -(uint)(auVar87._12_4_ < 0.0)) +
                             auVar42._12_4_) & _UNK_15061cc7c) <
              auVar52._12_4_ *
              (__xmm_40490fdb40490fdb40490fdb40490fdb._12_4_ -
              (float)(auVar45._12_4_ & _UNK_15061cc7c)));
  auVar41 = packssdw(auVar108,auVar108);
  auVar41 = packsswb(auVar41,auVar41);
  auVar41 = auVar41 & ___xmm_00000000000000000000000001010101;
  if ((bVar10 & 1) != 0) {
    *(char *)(param_4 + uVar14) = auVar41[0];
  }
  if ((bVar10 & 2) != 0) {
    *(char *)(param_4 + 1 + uVar14) = auVar41[1];
  }
  if ((bVar10 & 4) != 0) {
    *(char *)(param_4 + 2 + uVar14) = auVar41[2];
  }
  if ((char)bVar10 < '\0') {
    *(char *)(param_4 + 3 + uVar14) = auVar41[3];
  }
  return;
}

// ApplyBendingConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector4_5D__3E_un_3C_Cunf_3E_un_3C_Cunb_3E_CunfCunfCuni_sse4 @ 140064cc0

/* WARNING: Removing unreachable block (ram,0x0001400670f8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyBendingConstraints___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector4_5D__3E_un_3C_Cunf_3E_un_3C_Cunb_3E_CunfCunfCuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,byte *param_4,undefined4 param_5,
               undefined4 param_6,uint param_7)

{
  int *piVar1;
  float *pfVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  undefined8 uVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint uVar21;
  int iVar22;
  longlong lVar23;
  byte *pbVar24;
  int iVar25;
  longlong lVar26;
  undefined1 (*pauVar27) [16];
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  ulonglong uVar35;
  longlong lVar36;
  longlong lVar37;
  ulonglong uVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  ulonglong uVar42;
  longlong lVar43;
  longlong lVar44;
  byte bVar45;
  int iVar46;
  longlong lVar47;
  longlong lVar48;
  bool bVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
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
  float fVar92;
  float fVar93;
  float fVar98;
  float fVar104;
  float fVar105;
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
  float fVar106;
  float fVar113;
  float fVar114;
  undefined1 auVar107 [16];
  float fVar115;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  float fVar116;
  float fVar117;
  int iVar134;
  float fVar135;
  float fVar137;
  float fVar139;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  float fVar140;
  undefined1 auVar127 [16];
  float fVar136;
  float fVar141;
  undefined1 auVar128 [16];
  float fVar138;
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  float fVar142;
  float fVar143;
  float fVar155;
  float fVar156;
  float fVar157;
  float fVar158;
  float fVar159;
  float fVar160;
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
  float fVar161;
  float fVar162;
  float fVar163;
  float fVar172;
  float fVar175;
  undefined1 auVar164 [16];
  float fVar177;
  undefined1 auVar165 [16];
  float fVar173;
  undefined1 auVar166 [16];
  float fVar176;
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  float fVar178;
  float fVar185;
  float fVar186;
  int iVar187;
  float fVar188;
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  float fVar189;
  float fVar190;
  float fVar200;
  float fVar202;
  float fVar203;
  undefined1 auVar191 [16];
  float fVar201;
  float fVar204;
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  float fVar205;
  float fVar206;
  float fVar212;
  float fVar214;
  undefined1 auVar207 [16];
  float fVar213;
  float fVar215;
  float fVar216;
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  float fVar221;
  float fVar222;
  float fVar223;
  float fVar224;
  float fVar228;
  float fVar229;
  float fVar231;
  float fVar232;
  float fVar233;
  float fVar235;
  float fVar236;
  float fVar237;
  undefined1 auVar225 [16];
  float fVar230;
  float fVar234;
  float fVar238;
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  float fVar239;
  float fVar240;
  float fVar245;
  float fVar247;
  undefined1 auVar242 [16];
  float fVar241;
  float fVar246;
  float fVar248;
  undefined1 auVar243 [16];
  undefined1 auVar244 [16];
  float fVar249;
  float fVar252;
  float fVar253;
  undefined1 auVar250 [16];
  float fVar254;
  float fVar255;
  undefined1 auVar251 [16];
  undefined1 auVar256 [16];
  undefined1 auVar257 [16];
  undefined1 auVar258 [16];
  undefined1 auVar259 [16];
  undefined1 auVar260 [16];
  float fVar261;
  float fVar262;
  float fVar263;
  float fVar269;
  float fVar273;
  undefined1 auVar264 [16];
  undefined1 auVar265 [16];
  float fVar270;
  float fVar271;
  float fVar272;
  float fVar274;
  float fVar275;
  float fVar276;
  float fVar277;
  float fVar278;
  float fVar279;
  undefined1 auVar266 [16];
  undefined1 auVar267 [16];
  undefined1 auVar268 [16];
  float fVar280;
  float fVar281;
  float fVar282;
  float fVar287;
  float fVar288;
  float fVar289;
  float fVar290;
  float fVar291;
  float fVar292;
  float fVar293;
  float fVar294;
  float fVar295;
  float fVar296;
  float fVar297;
  undefined1 auVar283 [16];
  undefined1 auVar284 [16];
  undefined1 auVar285 [16];
  undefined1 auVar286 [16];
  float fVar298;
  float fVar307;
  float fVar310;
  float fVar313;
  undefined1 auVar301 [16];
  undefined1 auVar302 [16];
  float fVar299;
  float fVar300;
  float fVar308;
  float fVar309;
  float fVar311;
  float fVar312;
  float fVar314;
  float fVar315;
  float fVar316;
  undefined1 auVar303 [16];
  undefined1 auVar304 [16];
  undefined1 auVar305 [16];
  undefined1 auVar306 [16];
  float local_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  float local_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float local_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float local_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float local_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  undefined1 local_3b8 [8];
  float fStack_3b0;
  float fStack_3ac;
  undefined1 local_3a8 [8];
  float fStack_3a0;
  float fStack_39c;
  float local_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  float local_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  undefined1 local_2c8 [8];
  float fStack_2c0;
  float fStack_2bc;
  float fVar174;
  
  uVar21 = param_7 + 3;
  if (-1 < (int)param_7) {
    uVar21 = param_7;
  }
  if ((int)(uVar21 & 0xfffffffc) < 1) {
    uVar38 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    uVar42 = 0;
    uVar38 = 0;
    do {
      piVar1 = (int *)(param_2 + uVar42 * 4);
      piVar3 = (int *)(param_2 + 0x10 + uVar42 * 4);
      piVar4 = (int *)(param_2 + 0x20 + uVar42 * 4);
      piVar5 = (int *)(param_2 + 0x30 + uVar42 * 4);
      iVar25 = *piVar5;
      iVar22 = piVar5[2];
      iVar187 = piVar5[1] << 4;
      lVar43 = (longlong)(piVar1[1] << 4);
      lVar28 = (longlong)(piVar3[1] * 0x10);
      lVar32 = (longlong)(piVar4[1] << 4);
      lVar23 = (longlong)iVar187;
      auVar264 = insertps(ZEXT416(*(uint *)(param_1 + lVar43)),*(undefined4 *)(param_1 + lVar28),
                          0x10);
      auVar264 = insertps(auVar264,*(undefined4 *)(param_1 + lVar32),0x20);
      auVar265 = insertps(auVar264,*(undefined4 *)(param_1 + lVar23),0x30);
      auVar264 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar43)),
                          *(undefined4 *)(param_1 + 4 + lVar28),0x10);
      auVar264 = insertps(auVar264,*(undefined4 *)(param_1 + 4 + lVar32),0x20);
      auVar256 = insertps(auVar264,*(undefined4 *)(param_1 + 4 + lVar23),0x30);
      auVar264 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar43)),
                          *(undefined4 *)(param_1 + 8 + lVar28),0x10);
      auVar264 = insertps(auVar264,*(undefined4 *)(param_1 + 8 + lVar32),0x20);
      auVar242 = insertps(auVar264,*(undefined4 *)(param_1 + 8 + lVar23),0x30);
      lVar37 = (longlong)(piVar1[2] << 4);
      lVar34 = (longlong)(piVar3[2] * 0x10);
      lVar41 = (longlong)(piVar4[2] << 4);
      lVar33 = (longlong)(iVar22 << 4);
      auVar264 = insertps(ZEXT416(*(uint *)(param_1 + lVar37)),*(undefined4 *)(param_1 + lVar34),
                          0x10);
      auVar264 = insertps(auVar264,*(undefined4 *)(param_1 + lVar41),0x20);
      auVar217 = insertps(auVar264,*(undefined4 *)(param_1 + lVar33),0x30);
      auVar264 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar37)),
                          *(undefined4 *)(param_1 + 4 + lVar34),0x10);
      auVar264 = insertps(auVar264,*(undefined4 *)(param_1 + 4 + lVar41),0x20);
      auVar207 = insertps(auVar264,*(undefined4 *)(param_1 + 4 + lVar33),0x30);
      iVar134 = *piVar3 * 0x10;
      lVar47 = (longlong)(*piVar1 << 4);
      lVar39 = (longlong)iVar134;
      lVar30 = (longlong)(*piVar4 << 4);
      lVar26 = (longlong)(iVar25 << 4);
      auVar264 = insertps(ZEXT416(*(uint *)(param_1 + lVar47)),*(undefined4 *)(param_1 + lVar39),
                          0x10);
      auVar264 = insertps(auVar264,*(undefined4 *)(param_1 + lVar30),0x20);
      auVar264 = insertps(auVar264,*(undefined4 *)(param_1 + lVar26),0x30);
      auVar301 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar47)),
                          *(undefined4 *)(param_1 + 4 + lVar39),0x10);
      auVar301 = insertps(auVar301,*(undefined4 *)(param_1 + 4 + lVar30),0x20);
      auVar302 = insertps(auVar301,*(undefined4 *)(param_1 + 4 + lVar26),0x30);
      auVar301 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar47)),
                          *(undefined4 *)(param_1 + 8 + lVar39),0x10);
      auVar301 = insertps(auVar301,*(undefined4 *)(param_1 + 8 + lVar30),0x20);
      auVar301 = insertps(auVar301,*(undefined4 *)(param_1 + 8 + lVar26),0x30);
      fVar295 = auVar265._0_4_;
      fVar269 = auVar265._4_4_;
      fVar276 = auVar265._12_4_;
      fVar221 = auVar264._0_4_;
      auVar125._0_4_ = fVar295 - fVar221;
      fVar228 = auVar264._4_4_;
      auVar125._4_4_ = fVar269 - fVar228;
      fVar136 = auVar265._8_4_;
      fVar232 = auVar264._8_4_;
      auVar125._8_4_ = fVar136 - fVar232;
      fVar236 = auVar264._12_4_;
      auVar125._12_4_ = fVar276 - fVar236;
      fVar289 = auVar256._0_4_;
      fVar290 = auVar256._4_4_;
      fVar293 = auVar256._12_4_;
      fVar298 = auVar302._0_4_;
      auVar243._0_4_ = fVar289 - fVar298;
      fVar307 = auVar302._4_4_;
      auVar243._4_4_ = fVar290 - fVar307;
      fVar141 = auVar256._8_4_;
      fVar310 = auVar302._8_4_;
      auVar243._8_4_ = fVar141 - fVar310;
      fVar314 = auVar302._12_4_;
      auVar243._12_4_ = fVar293 - fVar314;
      fVar240 = auVar242._0_4_;
      fVar245 = auVar242._4_4_;
      fVar313 = auVar242._12_4_;
      fVar280 = auVar301._0_4_;
      auVar164._0_4_ = fVar240 - fVar280;
      fVar287 = auVar301._4_4_;
      auVar164._4_4_ = fVar245 - fVar287;
      fVar174 = auVar242._8_4_;
      fVar291 = auVar301._8_4_;
      auVar164._8_4_ = fVar174 - fVar291;
      fVar296 = auVar301._12_4_;
      auVar164._12_4_ = fVar313 - fVar296;
      auVar242._0_4_ = auVar125._0_4_ * auVar125._0_4_;
      auVar242._4_4_ = auVar125._4_4_ * auVar125._4_4_;
      auVar242._8_4_ = auVar125._8_4_ * auVar125._8_4_;
      auVar242._12_4_ = auVar125._12_4_ * auVar125._12_4_;
      auVar250._0_4_ =
           auVar164._0_4_ * auVar164._0_4_ + auVar243._0_4_ * auVar243._0_4_ + auVar242._0_4_;
      auVar250._4_4_ =
           auVar164._4_4_ * auVar164._4_4_ + auVar243._4_4_ * auVar243._4_4_ + auVar242._4_4_;
      auVar250._8_4_ =
           auVar164._8_4_ * auVar164._8_4_ + auVar243._8_4_ * auVar243._8_4_ + auVar242._8_4_;
      auVar250._12_4_ =
           auVar164._12_4_ * auVar164._12_4_ + auVar243._12_4_ * auVar243._12_4_ + auVar242._12_4_;
      auVar264 = sqrtps(auVar242,auVar250);
      uVar50 = -(uint)(auVar250._0_4_ <= ___xmm_00800000008000000080000000800000);
      uVar51 = -(uint)(auVar250._4_4_ <= _UNK_1508be494);
      uVar52 = -(uint)(auVar250._8_4_ <= _UNK_1508be498);
      uVar55 = -(uint)(auVar250._12_4_ <= _UNK_1508be49c);
      auVar256._4_4_ = uVar51;
      auVar256._0_4_ = uVar50;
      auVar242 = divps(auVar125,auVar264);
      auVar265 = divps(auVar243,auVar264);
      auVar264 = divps(auVar164,auVar264);
      auVar256._8_4_ = uVar52;
      auVar256._12_4_ = uVar55;
      auVar242 = blendvps(auVar242,___xmm_3f8000003f8000003f8000003f800000,auVar256);
      fVar59 = (float)(~uVar50 & auVar265._0_4_);
      fVar89 = (float)(~uVar51 & auVar265._4_4_);
      fVar94 = (float)(~uVar52 & auVar265._8_4_);
      fVar99 = (float)(~uVar55 & auVar265._12_4_);
      fVar249 = (float)(~uVar50 & auVar264._0_4_);
      fVar252 = (float)(~uVar51 & auVar264._4_4_);
      fVar253 = (float)(~uVar52 & auVar264._8_4_);
      fVar254 = (float)(~uVar55 & auVar264._12_4_);
      fVar224 = auVar217._0_4_;
      fVar60 = fVar221 - fVar224;
      fVar231 = auVar217._4_4_;
      fVar90 = fVar228 - fVar231;
      fVar235 = auVar217._8_4_;
      fVar95 = fVar232 - fVar235;
      fVar239 = auVar217._12_4_;
      fVar100 = fVar236 - fVar239;
      fVar205 = auVar207._0_4_;
      fVar178 = fVar298 - fVar205;
      fVar212 = auVar207._4_4_;
      fVar185 = fVar307 - fVar212;
      fVar294 = auVar207._8_4_;
      fVar186 = fVar310 - fVar294;
      fVar215 = auVar207._12_4_;
      fVar188 = fVar314 - fVar215;
      fVar142 = fVar295 - fVar224;
      fVar155 = fVar269 - fVar231;
      auVar218._4_4_ = fVar155;
      auVar218._0_4_ = fVar142;
      fVar157 = fVar136 - fVar235;
      fVar159 = fVar276 - fVar239;
      fVar143 = fVar289 - fVar205;
      fVar156 = fVar290 - fVar212;
      fVar158 = fVar141 - fVar294;
      fVar160 = fVar293 - fVar215;
      auVar218._8_4_ = fVar157;
      auVar218._12_4_ = fVar159;
      auVar304._0_4_ = fVar143 * fVar60 - fVar142 * fVar178;
      auVar304._4_4_ = fVar156 * fVar90 - fVar155 * fVar185;
      auVar304._8_4_ = fVar158 * fVar95 - fVar157 * fVar186;
      auVar304._12_4_ = fVar160 * fVar100 - fVar159 * fVar188;
      auVar264 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar37)),
                          *(undefined4 *)(param_1 + 8 + lVar34),0x10);
      auVar264 = insertps(auVar264,*(undefined4 *)(param_1 + 8 + lVar41),0x20);
      auVar264 = insertps(auVar264,*(undefined4 *)(param_1 + 8 + lVar33),0x30);
      fVar62 = auVar264._0_4_;
      fVar161 = fVar280 - fVar62;
      fVar98 = auVar264._4_4_;
      fVar172 = fVar287 - fVar98;
      fVar106 = auVar264._8_4_;
      fVar175 = fVar291 - fVar106;
      fVar101 = auVar264._12_4_;
      fVar177 = fVar296 - fVar101;
      fVar116 = fVar240 - fVar62;
      fVar135 = fVar245 - fVar98;
      fVar137 = fVar174 - fVar106;
      fVar139 = fVar313 - fVar101;
      auVar265._0_4_ = fVar116 * fVar178 - fVar143 * fVar161;
      auVar265._4_4_ = fVar135 * fVar185 - fVar156 * fVar172;
      auVar265._8_4_ = fVar137 * fVar186 - fVar158 * fVar175;
      auVar265._12_4_ = fVar139 * fVar188 - fVar160 * fVar177;
      auVar305._0_4_ = fVar142 * fVar161 - fVar116 * fVar60;
      auVar305._4_4_ = fVar155 * fVar172 - fVar135 * fVar90;
      auVar305._8_4_ = fVar157 * fVar175 - fVar137 * fVar95;
      auVar305._12_4_ = fVar159 * fVar177 - fVar139 * fVar100;
      auVar165._0_4_ =
           auVar304._0_4_ * auVar304._0_4_ +
           auVar305._0_4_ * auVar305._0_4_ + auVar265._0_4_ * auVar265._0_4_;
      auVar165._4_4_ =
           auVar304._4_4_ * auVar304._4_4_ +
           auVar305._4_4_ * auVar305._4_4_ + auVar265._4_4_ * auVar265._4_4_;
      auVar165._8_4_ =
           auVar304._8_4_ * auVar304._8_4_ +
           auVar305._8_4_ * auVar305._8_4_ + auVar265._8_4_ * auVar265._8_4_;
      auVar165._12_4_ =
           auVar304._12_4_ * auVar304._12_4_ +
           auVar305._12_4_ * auVar305._12_4_ + auVar265._12_4_ * auVar265._12_4_;
      auVar301 = sqrtps(auVar218,auVar165);
      uVar50 = -(uint)(auVar301._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77);
      uVar52 = -(uint)(auVar301._4_4_ <= _UNK_1506895d4);
      uVar53 = -(uint)(auVar301._8_4_ <= _UNK_1506895d8);
      uVar56 = -(uint)(auVar301._12_4_ <= _UNK_1506895dc);
      auVar264 = divps(auVar265,auVar301);
      fVar189 = (float)(~uVar50 & auVar264._0_4_);
      fVar200 = (float)(~uVar52 & auVar264._4_4_);
      fVar202 = (float)(~uVar53 & auVar264._8_4_);
      fVar203 = (float)(~uVar56 & auVar264._12_4_);
      auVar264 = divps(auVar305,auVar301);
      fVar61 = (float)(~uVar50 & auVar264._0_4_);
      fVar91 = (float)(~uVar52 & auVar264._4_4_);
      fVar96 = (float)(~uVar53 & auVar264._8_4_);
      fVar102 = (float)(~uVar56 & auVar264._12_4_);
      lVar36 = (longlong)(piVar1[3] << 4);
      lVar29 = (longlong)(piVar3[3] * 0x10);
      lVar40 = (longlong)(piVar4[3] << 4);
      lVar48 = (longlong)(piVar5[3] << 4);
      auVar264 = insertps(ZEXT416(*(uint *)(param_1 + lVar36)),*(undefined4 *)(param_1 + lVar29),
                          0x10);
      auVar264 = insertps(auVar264,*(undefined4 *)(param_1 + lVar40),0x20);
      auVar256 = insertps(auVar264,*(undefined4 *)(param_1 + lVar48),0x30);
      auVar264 = divps(auVar304,auVar301);
      fVar206 = (float)(~uVar50 & auVar264._0_4_);
      fVar213 = (float)(~uVar52 & auVar264._4_4_);
      fVar214 = (float)(~uVar53 & auVar264._8_4_);
      fVar216 = (float)(~uVar56 & auVar264._12_4_);
      auVar264 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar36)),
                          *(undefined4 *)(param_1 + 4 + lVar29),0x10);
      auVar264 = insertps(auVar264,*(undefined4 *)(param_1 + 4 + lVar40),0x20);
      auVar264 = insertps(auVar264,*(undefined4 *)(param_1 + 4 + lVar48),0x30);
      fVar138 = auVar256._0_4_;
      fVar261 = fVar295 - fVar138;
      fVar140 = auVar256._4_4_;
      fVar270 = fVar269 - fVar140;
      fVar163 = auVar256._8_4_;
      fVar273 = fVar136 - fVar163;
      fVar176 = auVar256._12_4_;
      fVar277 = fVar276 - fVar176;
      fVar92 = auVar264._0_4_;
      auVar257._0_4_ = fVar289 - fVar92;
      fVar104 = auVar264._4_4_;
      auVar257._4_4_ = fVar290 - fVar104;
      fVar113 = auVar264._8_4_;
      auVar257._8_4_ = fVar141 - fVar113;
      fVar103 = auVar264._12_4_;
      auVar257._12_4_ = fVar293 - fVar103;
      fVar222 = fVar221 - fVar138;
      fVar229 = fVar228 - fVar140;
      fVar233 = fVar232 - fVar163;
      fVar237 = fVar236 - fVar176;
      fVar299 = fVar298 - fVar92;
      fVar308 = fVar307 - fVar104;
      fVar311 = fVar310 - fVar113;
      fVar315 = fVar314 - fVar103;
      auVar124._0_4_ = fVar261 * fVar299 - fVar222 * auVar257._0_4_;
      auVar124._4_4_ = fVar270 * fVar308 - fVar229 * auVar257._4_4_;
      auVar124._8_4_ = fVar273 * fVar311 - fVar233 * auVar257._8_4_;
      auVar124._12_4_ = fVar277 * fVar315 - fVar237 * auVar257._12_4_;
      auVar264 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar36)),
                          *(undefined4 *)(param_1 + 8 + lVar29),0x10);
      auVar264 = insertps(auVar264,*(undefined4 *)(param_1 + 8 + lVar40),0x20);
      auVar264 = insertps(auVar264,*(undefined4 *)(param_1 + 8 + lVar48),0x30);
      fVar93 = auVar264._0_4_;
      fVar241 = fVar240 - fVar93;
      fVar105 = auVar264._4_4_;
      fVar246 = fVar245 - fVar105;
      fVar97 = auVar264._8_4_;
      fVar247 = fVar174 - fVar97;
      fVar117 = auVar264._12_4_;
      fVar248 = fVar313 - fVar117;
      fVar281 = fVar280 - fVar93;
      fVar288 = fVar287 - fVar105;
      fVar292 = fVar291 - fVar97;
      fVar297 = fVar296 - fVar117;
      auVar207._0_4_ = auVar257._0_4_ * fVar281 - fVar299 * fVar241;
      auVar207._4_4_ = auVar257._4_4_ * fVar288 - fVar308 * fVar246;
      auVar207._8_4_ = auVar257._8_4_ * fVar292 - fVar311 * fVar247;
      auVar207._12_4_ = auVar257._12_4_ * fVar297 - fVar315 * fVar248;
      auVar144._0_4_ = fVar222 * fVar241 - fVar261 * fVar281;
      auVar144._4_4_ = fVar229 * fVar246 - fVar270 * fVar288;
      auVar144._8_4_ = fVar233 * fVar247 - fVar273 * fVar292;
      auVar144._12_4_ = fVar237 * fVar248 - fVar277 * fVar297;
      auVar225._0_4_ =
           auVar124._0_4_ * auVar124._0_4_ +
           auVar144._0_4_ * auVar144._0_4_ + auVar207._0_4_ * auVar207._0_4_;
      auVar225._4_4_ =
           auVar124._4_4_ * auVar124._4_4_ +
           auVar144._4_4_ * auVar144._4_4_ + auVar207._4_4_ * auVar207._4_4_;
      auVar225._8_4_ =
           auVar124._8_4_ * auVar124._8_4_ +
           auVar144._8_4_ * auVar144._8_4_ + auVar207._8_4_ * auVar207._8_4_;
      auVar225._12_4_ =
           auVar124._12_4_ * auVar124._12_4_ +
           auVar144._12_4_ * auVar144._12_4_ + auVar207._12_4_ * auVar207._12_4_;
      auVar256 = sqrtps(auVar257,auVar225);
      uVar51 = -(uint)(auVar256._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77);
      uVar55 = -(uint)(auVar256._4_4_ <= _UNK_1506895d4);
      uVar54 = -(uint)(auVar256._8_4_ <= _UNK_1506895d8);
      uVar57 = -(uint)(auVar256._12_4_ <= _UNK_1506895dc);
      auVar264 = divps(auVar207,auVar256);
      fVar223 = (float)(~uVar51 & auVar264._0_4_);
      fVar230 = (float)(~uVar55 & auVar264._4_4_);
      fVar234 = (float)(~uVar54 & auVar264._8_4_);
      fVar238 = (float)(~uVar57 & auVar264._12_4_);
      auVar264 = divps(auVar144,auVar256);
      fVar300 = (float)(~uVar51 & auVar264._0_4_);
      fVar309 = (float)(~uVar55 & auVar264._4_4_);
      fVar312 = (float)(~uVar54 & auVar264._8_4_);
      fVar316 = (float)(~uVar57 & auVar264._12_4_);
      auVar264 = divps(auVar124,auVar256);
      fVar262 = (float)(~uVar51 & auVar264._0_4_);
      fVar271 = (float)(~uVar55 & auVar264._4_4_);
      fVar274 = (float)(~uVar54 & auVar264._8_4_);
      fVar278 = (float)(~uVar57 & auVar264._12_4_);
      auVar191._0_4_ = fVar206 * fVar262 + fVar61 * fVar300 + fVar189 * fVar223;
      auVar191._4_4_ = fVar213 * fVar271 + fVar91 * fVar309 + fVar200 * fVar230;
      auVar191._8_4_ = fVar214 * fVar274 + fVar96 * fVar312 + fVar202 * fVar234;
      auVar191._12_4_ = fVar216 * fVar278 + fVar102 * fVar316 + fVar203 * fVar238;
      local_2d8 = auVar242._0_4_;
      fStack_2d4 = auVar242._4_4_;
      fStack_2d0 = auVar242._8_4_;
      fStack_2cc = auVar242._12_4_;
      auVar179._0_4_ =
           (fVar61 * fVar223 - fVar189 * fVar300) * fVar249 +
           (fVar189 * fVar262 - fVar206 * fVar223) * fVar59 +
           (fVar206 * fVar300 - fVar61 * fVar262) * local_2d8;
      auVar179._4_4_ =
           (fVar91 * fVar230 - fVar200 * fVar309) * fVar252 +
           (fVar200 * fVar271 - fVar213 * fVar230) * fVar89 +
           (fVar213 * fVar309 - fVar91 * fVar271) * fStack_2d4;
      auVar179._8_4_ =
           (fVar96 * fVar234 - fVar202 * fVar312) * fVar253 +
           (fVar202 * fVar274 - fVar214 * fVar234) * fVar94 +
           (fVar214 * fVar312 - fVar96 * fVar274) * fStack_2d0;
      auVar179._12_4_ =
           (fVar102 * fVar238 - fVar203 * fVar316) * fVar254 +
           (fVar203 * fVar278 - fVar216 * fVar238) * fVar99 +
           (fVar216 * fVar316 - fVar102 * fVar278) * fStack_2cc;
      auVar264 = maxps(auVar191,___xmm_bf800000bf800000bf800000bf800000);
      auVar207 = minps(auVar264,___xmm_3f8000003f8000003f8000003f800000);
      auVar264 = maxps(auVar179,___xmm_bf800000bf800000bf800000bf800000);
      auVar242 = minps(auVar264,___xmm_3f8000003f8000003f8000003f800000);
      fVar190 = auVar207._0_4_;
      fVar201 = auVar207._4_4_;
      fVar282 = auVar207._8_4_;
      fVar204 = auVar207._12_4_;
      fVar114 = auVar242._0_4_;
      fVar115 = auVar242._4_4_;
      fVar162 = auVar242._8_4_;
      fVar173 = auVar242._12_4_;
      auVar258._0_4_ = (fVar59 * fVar262 - fVar249 * fVar300) * fVar190 - fVar223 * fVar114;
      auVar258._4_4_ = (fVar89 * fVar271 - fVar252 * fVar309) * fVar201 - fVar230 * fVar115;
      auVar258._8_4_ = (fVar94 * fVar274 - fVar253 * fVar312) * fVar282 - fVar234 * fVar162;
      auVar258._12_4_ = (fVar99 * fVar278 - fVar254 * fVar316) * fVar204 - fVar238 * fVar173;
      auVar217._0_4_ = (fVar249 * fVar223 - local_2d8 * fVar262) * fVar190 - fVar300 * fVar114;
      auVar217._4_4_ = (fVar252 * fVar230 - fStack_2d4 * fVar271) * fVar201 - fVar309 * fVar115;
      auVar217._8_4_ = (fVar253 * fVar234 - fStack_2d0 * fVar274) * fVar282 - fVar312 * fVar162;
      auVar217._12_4_ = (fVar254 * fVar238 - fStack_2cc * fVar278) * fVar204 - fVar316 * fVar173;
      auVar283._0_4_ = (local_2d8 * fVar300 - fVar59 * fVar223) * fVar190 - fVar262 * fVar114;
      auVar283._4_4_ = (fStack_2d4 * fVar309 - fVar89 * fVar230) * fVar201 - fVar271 * fVar115;
      auVar283._8_4_ = (fStack_2d0 * fVar312 - fVar94 * fVar234) * fVar282 - fVar274 * fVar162;
      auVar283._12_4_ = (fStack_2cc * fVar316 - fVar99 * fVar238) * fVar204 - fVar278 * fVar173;
      auVar265 = divps(auVar258,auVar301);
      auVar264 = divps(auVar217,auVar301);
      auVar217 = divps(auVar283,auVar301);
      fVar262 = (float)(~uVar50 & auVar265._0_4_);
      fVar271 = (float)(~uVar52 & auVar265._4_4_);
      fVar274 = (float)(~uVar53 & auVar265._8_4_);
      fVar278 = (float)(~uVar56 & auVar265._12_4_);
      fVar263 = (float)(~uVar50 & auVar264._0_4_);
      fVar272 = (float)(~uVar52 & auVar264._4_4_);
      fVar275 = (float)(~uVar53 & auVar264._8_4_);
      fVar279 = (float)(~uVar56 & auVar264._12_4_);
      fVar223 = (float)(~uVar50 & auVar217._0_4_);
      fVar230 = (float)(~uVar52 & auVar217._4_4_);
      fVar234 = (float)(~uVar53 & auVar217._8_4_);
      fVar238 = (float)(~uVar56 & auVar217._12_4_);
      auVar301._0_4_ = (fVar249 * fVar61 - fVar59 * fVar206) * fVar190 - fVar189 * fVar114;
      auVar301._4_4_ = (fVar252 * fVar91 - fVar89 * fVar213) * fVar201 - fVar200 * fVar115;
      auVar301._8_4_ = (fVar253 * fVar96 - fVar94 * fVar214) * fVar282 - fVar202 * fVar162;
      auVar301._12_4_ = (fVar254 * fVar102 - fVar99 * fVar216) * fVar204 - fVar203 * fVar173;
      auVar303._0_4_ = (local_2d8 * fVar206 - fVar249 * fVar189) * fVar190 - fVar61 * fVar114;
      auVar303._4_4_ = (fStack_2d4 * fVar213 - fVar252 * fVar200) * fVar201 - fVar91 * fVar115;
      auVar303._8_4_ = (fStack_2d0 * fVar214 - fVar253 * fVar202) * fVar282 - fVar96 * fVar162;
      auVar303._12_4_ = (fStack_2cc * fVar216 - fVar254 * fVar203) * fVar204 - fVar102 * fVar173;
      auVar284._0_4_ = (fVar59 * fVar189 - local_2d8 * fVar61) * fVar190 - fVar206 * fVar114;
      auVar284._4_4_ = (fVar89 * fVar200 - fStack_2d4 * fVar91) * fVar201 - fVar213 * fVar115;
      auVar284._8_4_ = (fVar94 * fVar202 - fStack_2d0 * fVar96) * fVar282 - fVar214 * fVar162;
      auVar284._12_4_ = (fVar99 * fVar203 - fStack_2cc * fVar102) * fVar204 - fVar216 * fVar173;
      auVar264 = divps(auVar301,auVar256);
      auVar265 = divps(auVar303,auVar256);
      auVar256 = divps(auVar284,auVar256);
      fVar309 = (float)(~uVar51 & auVar264._0_4_);
      fVar312 = (float)(~uVar55 & auVar264._4_4_);
      fVar316 = (float)(~uVar54 & auVar264._8_4_);
      fVar255 = (float)(~uVar57 & auVar264._12_4_);
      fVar206 = (float)(~uVar51 & auVar265._0_4_);
      fVar213 = (float)(~uVar55 & auVar265._4_4_);
      fVar214 = (float)(~uVar54 & auVar265._8_4_);
      fVar249 = (float)(~uVar57 & auVar265._12_4_);
      fVar252 = (float)(~uVar51 & auVar256._0_4_);
      fVar253 = (float)(~uVar55 & auVar256._4_4_);
      fVar254 = (float)(~uVar54 & auVar256._8_4_);
      fVar300 = (float)(~uVar57 & auVar256._12_4_);
      fVar189 = fVar142 * fVar263 - fVar143 * fVar262;
      fVar200 = fVar155 * fVar272 - fVar156 * fVar271;
      fVar202 = fVar157 * fVar275 - fVar158 * fVar274;
      fVar203 = fVar159 * fVar279 - fVar160 * fVar278;
      fVar59 = fVar143 * fVar223 - fVar116 * fVar263;
      fVar89 = fVar156 * fVar230 - fVar135 * fVar272;
      fVar94 = fVar158 * fVar234 - fVar137 * fVar275;
      fVar99 = fVar160 * fVar238 - fVar139 * fVar279;
      fVar142 = fVar116 * fVar262 - fVar142 * fVar223;
      fVar155 = fVar135 * fVar271 - fVar155 * fVar230;
      fVar157 = fVar137 * fVar274 - fVar157 * fVar234;
      fVar159 = fVar139 * fVar278 - fVar159 * fVar238;
      fVar116 = fVar178 * fVar262 - fVar263 * fVar60;
      fVar135 = fVar185 * fVar271 - fVar272 * fVar90;
      fVar137 = fVar186 * fVar274 - fVar275 * fVar95;
      fVar139 = fVar188 * fVar278 - fVar279 * fVar100;
      fVar61 = fVar161 * fVar263 - fVar223 * fVar178;
      fVar91 = fVar172 * fVar272 - fVar230 * fVar185;
      fVar96 = fVar175 * fVar275 - fVar234 * fVar186;
      fVar102 = fVar177 * fVar279 - fVar238 * fVar188;
      fVar143 = fVar60 * fVar223 - fVar262 * fVar161;
      fVar156 = fVar90 * fVar230 - fVar271 * fVar172;
      fVar158 = fVar95 * fVar234 - fVar274 * fVar175;
      fVar160 = fVar100 * fVar238 - fVar278 * fVar177;
      fVar161 = fVar222 * fVar206 - fVar299 * fVar309;
      fVar223 = fVar229 * fVar213 - fVar308 * fVar312;
      fVar172 = fVar233 * fVar214 - fVar311 * fVar316;
      fVar230 = fVar237 * fVar249 - fVar315 * fVar255;
      fVar263 = fVar299 * fVar252 - fVar281 * fVar206;
      fVar272 = fVar308 * fVar253 - fVar288 * fVar213;
      fVar275 = fVar311 * fVar254 - fVar292 * fVar214;
      fVar279 = fVar315 * fVar300 - fVar297 * fVar249;
      fVar234 = fVar281 * fVar309 - fVar222 * fVar252;
      fVar238 = fVar288 * fVar312 - fVar229 * fVar253;
      fVar185 = fVar292 * fVar316 - fVar233 * fVar254;
      fVar188 = fVar297 * fVar255 - fVar237 * fVar300;
      fVar60 = auVar257._0_4_ * fVar309 - fVar206 * fVar261;
      fVar90 = auVar257._4_4_ * fVar312 - fVar213 * fVar270;
      fVar95 = auVar257._8_4_ * fVar316 - fVar214 * fVar273;
      fVar100 = auVar257._12_4_ * fVar255 - fVar249 * fVar277;
      fVar206 = fVar241 * fVar206 - fVar252 * auVar257._0_4_;
      fVar213 = fVar246 * fVar213 - fVar253 * auVar257._4_4_;
      fVar216 = fVar247 * fVar214 - fVar254 * auVar257._8_4_;
      fVar271 = fVar248 * fVar249 - fVar300 * auVar257._12_4_;
      fVar175 = fVar261 * fVar252 - fVar309 * fVar241;
      fVar177 = fVar270 * fVar253 - fVar312 * fVar246;
      fVar178 = fVar273 * fVar254 - fVar316 * fVar247;
      fVar186 = fVar277 * fVar300 - fVar255 * fVar248;
      fVar222 = fVar206 + fVar59;
      fVar229 = fVar213 + fVar89;
      fVar233 = fVar216 + fVar94;
      fVar237 = fVar271 + fVar99;
      auVar264._4_4_ = _UNK_150651574;
      auVar264._0_4_ = __xmm_80000000800000008000000080000000;
      auVar264._8_4_ = _UNK_150651578;
      auVar264._12_4_ = _UNK_15065157c;
      fVar206 = (float)((uint)fVar206 ^ __xmm_80000000800000008000000080000000) - fVar263;
      fVar214 = (float)((uint)fVar213 ^ _UNK_150651574) - fVar272;
      fVar262 = (float)((uint)fVar216 ^ _UNK_150651578) - fVar275;
      fVar274 = (float)((uint)fVar271 ^ _UNK_15065157c) - fVar279;
      fVar263 = fVar263 + fVar61;
      fVar272 = fVar272 + fVar91;
      fVar275 = fVar275 + fVar96;
      fVar279 = fVar279 + fVar102;
      fVar61 = (float)((uint)fVar59 ^ __xmm_80000000800000008000000080000000) - fVar61;
      fVar91 = (float)((uint)fVar89 ^ _UNK_150651574) - fVar91;
      fVar96 = (float)((uint)fVar94 ^ _UNK_150651578) - fVar96;
      fVar102 = (float)((uint)fVar99 ^ _UNK_15065157c) - fVar102;
      fVar213 = fVar175 + fVar142;
      fVar216 = fVar177 + fVar155;
      fVar271 = fVar178 + fVar157;
      fVar278 = fVar186 + fVar159;
      fVar94 = (float)((uint)fVar175 ^ __xmm_80000000800000008000000080000000) - fVar234;
      fVar99 = (float)((uint)fVar177 ^ _UNK_150651574) - fVar238;
      fVar175 = (float)((uint)fVar178 ^ _UNK_150651578) - fVar185;
      fVar177 = (float)((uint)fVar186 ^ _UNK_15065157c) - fVar188;
      fVar234 = fVar234 + fVar143;
      fVar238 = fVar238 + fVar156;
      fVar185 = fVar185 + fVar158;
      fVar188 = fVar188 + fVar160;
      fVar143 = (float)((uint)fVar142 ^ __xmm_80000000800000008000000080000000) - fVar143;
      fVar156 = (float)((uint)fVar155 ^ _UNK_150651574) - fVar156;
      fVar158 = (float)((uint)fVar157 ^ _UNK_150651578) - fVar158;
      fVar160 = (float)((uint)fVar159 ^ _UNK_15065157c) - fVar160;
      fVar142 = fVar60 + fVar189;
      fVar155 = fVar90 + fVar200;
      fVar157 = fVar95 + fVar202;
      fVar159 = fVar100 + fVar203;
      fVar59 = (float)((uint)fVar60 ^ __xmm_80000000800000008000000080000000) - fVar161;
      fVar60 = (float)((uint)fVar90 ^ _UNK_150651574) - fVar223;
      fVar89 = (float)((uint)fVar95 ^ _UNK_150651578) - fVar172;
      fVar90 = (float)((uint)fVar100 ^ _UNK_15065157c) - fVar230;
      fVar161 = fVar161 + fVar116;
      fVar223 = fVar223 + fVar135;
      fVar172 = fVar172 + fVar137;
      fVar230 = fVar230 + fVar139;
      fVar116 = (float)((uint)fVar189 ^ __xmm_80000000800000008000000080000000) - fVar116;
      fVar135 = (float)((uint)fVar200 ^ _UNK_150651574) - fVar135;
      fVar137 = (float)((uint)fVar202 ^ _UNK_150651578) - fVar137;
      fVar139 = (float)((uint)fVar203 ^ _UNK_15065157c) - fVar139;
      uVar50 = *(uint *)(param_1 + 0xc + lVar43);
      uVar51 = *(uint *)(param_1 + 0xc + lVar28);
      auVar256 = insertps(ZEXT416(uVar50),ZEXT416(uVar51),0x10);
      uVar52 = *(uint *)(param_1 + 0xc + lVar32);
      auVar256 = insertps(auVar256,ZEXT416(uVar52),0x20);
      uVar55 = *(uint *)(param_1 + 0xc + lVar23);
      auVar265 = insertps(auVar256,ZEXT416(uVar55),0x30);
      uVar53 = *(uint *)(param_1 + 0xc + lVar37);
      uVar54 = *(uint *)(param_1 + 0xc + lVar34);
      auVar256 = insertps(ZEXT416(uVar53),ZEXT416(uVar54),0x10);
      uVar56 = *(uint *)(param_1 + 0xc + lVar41);
      auVar256 = insertps(auVar256,ZEXT416(uVar56),0x20);
      uVar57 = *(uint *)(param_1 + 0xc + lVar33);
      auVar217 = insertps(auVar256,ZEXT416(uVar57),0x30);
      uVar58 = *(uint *)(param_1 + 0xc + lVar47);
      uVar6 = *(uint *)(param_1 + 0xc + lVar39);
      auVar256 = insertps(ZEXT416(uVar58),ZEXT416(uVar6),0x10);
      uVar7 = *(uint *)(param_1 + 0xc + lVar30);
      auVar256 = insertps(auVar256,ZEXT416(uVar7),0x20);
      uVar8 = *(uint *)(param_1 + 0xc + lVar26);
      auVar304 = insertps(auVar256,ZEXT416(uVar8),0x30);
      uVar9 = *(uint *)(param_1 + 0xc + lVar36);
      uVar10 = *(uint *)(param_1 + 0xc + lVar29);
      auVar256 = insertps(ZEXT416(uVar9),ZEXT416(uVar10),0x10);
      uVar11 = *(uint *)(param_1 + 0xc + lVar40);
      auVar256 = insertps(auVar256,ZEXT416(uVar11),0x20);
      uVar12 = *(uint *)(param_1 + 0xc + lVar48);
      auVar301 = insertps(auVar256,ZEXT416(uVar12),0x30);
      auVar242 = divps(auVar242,auVar207);
      auVar180._0_4_ = (uint)auVar242._0_4_ ^ __xmm_80000000800000008000000080000000;
      auVar180._4_4_ = (uint)auVar242._4_4_ ^ _UNK_150651574;
      auVar180._8_4_ = (uint)auVar242._8_4_ ^ _UNK_150651578;
      auVar180._12_4_ = (uint)auVar242._12_4_ ^ _UNK_15065157c;
      auVar256 = maxps(auVar180,auVar242);
      auVar302._4_4_ = -(uint)(__xmm_3f8000003f8000003f8000003f800000._4_4_ < auVar256._4_4_);
      auVar302._0_4_ = -(uint)((float)__xmm_3f8000003f8000003f8000003f800000 < auVar256._0_4_);
      auVar302._8_4_ = -(uint)(__xmm_3f8000003f8000003f8000003f800000._8_4_ < auVar256._8_4_);
      auVar302._12_4_ = -(uint)(__xmm_3f8000003f8000003f8000003f800000._12_4_ < auVar256._12_4_);
      iVar46 = movmskps(piVar5[3] << 4,auVar302);
      if (iVar46 != 0) {
        auVar264 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar256);
      }
      auVar264 = blendvps(auVar256,auVar264,auVar302);
      fVar95 = auVar264._0_4_;
      fVar100 = auVar264._4_4_;
      fVar178 = auVar264._8_4_;
      fVar189 = auVar264._12_4_;
      fVar200 = fVar95 * fVar95;
      fVar186 = fVar100 * fVar100;
      fVar202 = fVar178 * fVar178;
      fVar203 = fVar189 * fVar189;
      auVar251._0_4_ =
           (((((((fVar200 * ___xmm_bb9918b7bb9918b7bb9918b7bb9918b7 +
                 ___xmm_3cc6061b3cc6061b3cc6061b3cc6061b) * fVar200 +
                ___xmm_bd732a49bd732a49bd732a49bd732a49) * fVar200 +
               ___xmm_3dcadb2a3dcadb2a3dcadb2a3dcadb2a) * fVar200 +
              ___xmm_be0f8549be0f8549be0f8549be0f8549) * fVar200 +
             ___xmm_3e4c7b543e4c7b543e4c7b543e4c7b54) * fVar200 +
            ___xmm_beaaa8cfbeaaa8cfbeaaa8cfbeaaa8cf) * fVar200 +
           ___xmm_3f7ffffe3f7ffffe3f7ffffe3f7ffffe) * fVar95;
      auVar251._4_4_ =
           (((((((fVar186 * _UNK_150b51114 + _UNK_150b51124) * fVar186 + _UNK_150b51134) * fVar186 +
               _UNK_150b51144) * fVar186 + _UNK_150b51154) * fVar186 + _UNK_150b51164) * fVar186 +
            _UNK_150b51174) * fVar186 + _UNK_150b51184) * fVar100;
      auVar251._8_4_ =
           (((((((fVar202 * _UNK_150b51118 + _UNK_150b51128) * fVar202 + _UNK_150b51138) * fVar202 +
               _UNK_150b51148) * fVar202 + _UNK_150b51158) * fVar202 + _UNK_150b51168) * fVar202 +
            _UNK_150b51178) * fVar202 + _UNK_150b51188) * fVar178;
      auVar251._12_4_ =
           (((((((fVar203 * _UNK_150b5111c + _UNK_150b5112c) * fVar203 + _UNK_150b5113c) * fVar203 +
               _UNK_150b5114c) * fVar203 + _UNK_150b5115c) * fVar203 + _UNK_150b5116c) * fVar203 +
            _UNK_150b5117c) * fVar203 + _UNK_150b5118c) * fVar189;
      auVar118._0_4_ = ___xmm_3fc90fdb3fc90fdb3fc90fdb3fc90fdb - auVar251._0_4_;
      auVar118._4_4_ = _UNK_150b51194 - auVar251._4_4_;
      auVar118._8_4_ = _UNK_150b51198 - auVar251._8_4_;
      auVar118._12_4_ = _UNK_150b5119c - auVar251._12_4_;
      auVar264 = blendvps(auVar251,auVar118,auVar302);
      auVar63._4_4_ = -(uint)(auVar242._4_4_ < 0.0);
      auVar63._0_4_ = -(uint)(auVar242._0_4_ < 0.0);
      auVar119._0_4_ = auVar264._0_4_ ^ __xmm_80000000800000008000000080000000;
      auVar119._4_4_ = auVar264._4_4_ ^ _UNK_150651574;
      auVar119._8_4_ = auVar264._8_4_ ^ _UNK_150651578;
      auVar119._12_4_ = auVar264._12_4_ ^ _UNK_15065157c;
      auVar63._8_4_ = -(uint)(auVar242._8_4_ < 0.0);
      auVar63._12_4_ = -(uint)(auVar242._12_4_ < 0.0);
      auVar256 = blendvps(auVar264,auVar119,auVar63);
      auVar64._4_4_ = -(uint)(fVar115 < 0.0);
      auVar64._0_4_ = -(uint)(fVar114 < 0.0);
      auVar64._8_4_ = -(uint)(fVar162 < 0.0);
      auVar64._12_4_ = -(uint)(fVar173 < 0.0);
      auVar264 = blendvps(___xmm_40490fdb40490fdb40490fdb40490fdb,
                          ___xmm_c0490fdbc0490fdbc0490fdbc0490fdb,auVar64);
      fVar253 = auVar304._0_4_;
      fVar247 = auVar304._4_4_;
      fVar254 = auVar304._8_4_;
      fVar248 = auVar304._12_4_;
      fVar162 = auVar265._0_4_;
      fVar173 = auVar265._4_4_;
      fVar178 = auVar265._8_4_;
      fVar189 = auVar265._12_4_;
      fVar200 = auVar217._0_4_;
      fVar186 = auVar217._4_4_;
      fVar202 = auVar217._8_4_;
      fVar203 = auVar217._12_4_;
      auVar145._0_4_ = fVar94 * fVar94 + fVar206 * fVar206;
      auVar145._4_4_ = fVar99 * fVar99 + fVar214 * fVar214;
      auVar145._8_4_ = fVar175 * fVar175 + fVar262 * fVar262;
      auVar145._12_4_ = fVar177 * fVar177 + fVar274 * fVar274;
      fVar249 = auVar301._0_4_;
      fVar241 = auVar301._4_4_;
      fVar252 = auVar301._8_4_;
      fVar246 = auVar301._12_4_;
      auVar107._0_4_ =
           (fVar59 * fVar59 + auVar145._0_4_) * fVar249 +
           (fVar116 * fVar116 + fVar143 * fVar143 + fVar61 * fVar61) * fVar200 +
           (fVar161 * fVar161 + fVar234 * fVar234 + fVar263 * fVar263) * fVar162 +
           (fVar142 * fVar142 + fVar213 * fVar213 + fVar222 * fVar222) * fVar253;
      auVar107._4_4_ =
           (fVar60 * fVar60 + auVar145._4_4_) * fVar241 +
           (fVar135 * fVar135 + fVar156 * fVar156 + fVar91 * fVar91) * fVar186 +
           (fVar223 * fVar223 + fVar238 * fVar238 + fVar272 * fVar272) * fVar173 +
           (fVar155 * fVar155 + fVar216 * fVar216 + fVar229 * fVar229) * fVar247;
      auVar107._8_4_ =
           (fVar89 * fVar89 + auVar145._8_4_) * fVar252 +
           (fVar137 * fVar137 + fVar158 * fVar158 + fVar96 * fVar96) * fVar202 +
           (fVar172 * fVar172 + fVar185 * fVar185 + fVar275 * fVar275) * fVar178 +
           (fVar157 * fVar157 + fVar271 * fVar271 + fVar233 * fVar233) * fVar254;
      auVar107._12_4_ =
           (fVar90 * fVar90 + auVar145._12_4_) * fVar246 +
           (fVar139 * fVar139 + fVar160 * fVar160 + fVar102 * fVar102) * fVar203 +
           (fVar230 * fVar230 + fVar188 * fVar188 + fVar279 * fVar279) * fVar189 +
           (fVar159 * fVar159 + fVar278 * fVar278 + fVar237 * fVar237) * fVar248;
      pfVar2 = (float *)(param_3 + (uVar42 & 0xffffffff));
      auVar242 = pmovzxbd(auVar145,ZEXT416(*(uint *)(param_4 + uVar38)) &
                                   ___xmm_00000000000000000000000001010101);
      auVar65._4_4_ = -auVar242._4_4_;
      auVar65._0_4_ = -auVar242._0_4_;
      auVar65._8_4_ = -auVar242._8_4_;
      auVar65._12_4_ = SUB124(SUB1612((undefined1  [16])0x0,4),8) - auVar242._12_4_;
      auVar19._4_4_ = param_5;
      auVar19._0_4_ = param_5;
      auVar19._8_4_ = param_5;
      auVar19._12_4_ = param_5;
      auVar20._4_4_ = param_6;
      auVar20._0_4_ = param_6;
      auVar20._8_4_ = param_6;
      auVar20._12_4_ = param_6;
      auVar242 = blendvps(auVar19,auVar20,auVar65);
      auVar146._0_4_ =
           auVar242._0_4_ *
           (((float)(auVar264._0_4_ & -(uint)(fVar190 < 0.0)) + auVar256._0_4_) - *pfVar2);
      auVar146._4_4_ =
           auVar242._4_4_ *
           (((float)(auVar264._4_4_ & -(uint)(fVar201 < 0.0)) + auVar256._4_4_) - pfVar2[1]);
      auVar146._8_4_ =
           auVar242._8_4_ *
           (((float)(auVar264._8_4_ & -(uint)(fVar282 < 0.0)) + auVar256._8_4_) - pfVar2[2]);
      auVar146._12_4_ =
           auVar242._12_4_ *
           (((float)(auVar264._12_4_ & -(uint)(fVar204 < 0.0)) + auVar256._12_4_) - pfVar2[3]);
      auVar264 = maxps(auVar146,___xmm_bf490fdbbf490fdbbf490fdbbf490fdb);
      auVar264 = minps(auVar264,___xmm_3f490fdb3f490fdb3f490fdb3f490fdb);
      auVar264 = divps(auVar264,auVar107);
      fVar95 = (float)(-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 < auVar107._0_4_) &
                      auVar264._0_4_);
      fVar100 = (float)(-(uint)(_UNK_1506895d4 < auVar107._4_4_) & auVar264._4_4_);
      fVar114 = (float)(-(uint)(_UNK_1506895d8 < auVar107._8_4_) & auVar264._8_4_);
      fVar115 = (float)(-(uint)(_UNK_1506895dc < auVar107._12_4_) & auVar264._12_4_);
      auVar66._4_4_ = -(uint)(0.0 < fVar247);
      auVar66._0_4_ = -(uint)(0.0 < fVar253);
      auVar66._8_4_ = -(uint)(0.0 < fVar254);
      auVar66._12_4_ = -(uint)(0.0 < fVar248);
      iVar46 = movmskps((int)param_4,auVar66);
      if (iVar46 != 0) {
        bVar45 = (char)((char)iVar46 << 4) >> 4;
        fVar253 = fVar253 * fVar95;
        fVar247 = fVar247 * fVar100;
        fVar254 = fVar254 * fVar114;
        fVar248 = fVar248 * fVar115;
        auVar147._0_4_ = fVar221 - fVar222 * fVar253;
        auVar147._4_4_ = fVar228 - fVar229 * fVar247;
        auVar147._8_4_ = fVar232 - fVar233 * fVar254;
        auVar147._12_4_ = fVar236 - fVar237 * fVar248;
        if ((bVar45 & 1) != 0) {
          *(float *)(param_1 + lVar47) = auVar147._0_4_;
        }
        if ((bVar45 & 2) == 0) {
          if ((bVar45 & 4) != 0) goto LAB_140065da1;
LAB_140065a0f:
          if ((char)bVar45 < '\0') goto LAB_140065db1;
LAB_140065a18:
          auVar120._0_4_ = fVar298 - fVar213 * fVar253;
          auVar120._4_4_ = fVar307 - fVar216 * fVar247;
          auVar120._8_4_ = fVar310 - fVar271 * fVar254;
          auVar120._12_4_ = fVar314 - fVar278 * fVar248;
          if ((bVar45 & 1) != 0) goto LAB_140065dca;
LAB_140065a2a:
          if ((bVar45 & 2) != 0) goto LAB_140065ddb;
LAB_140065a34:
          if ((bVar45 & 4) != 0) goto LAB_140065ded;
LAB_140065a3e:
          if ((char)bVar45 < '\0') goto LAB_140065dfe;
LAB_140065a47:
          auVar67._0_4_ = fVar280 - fVar142 * fVar253;
          auVar67._4_4_ = fVar287 - fVar155 * fVar247;
          auVar67._8_4_ = fVar291 - fVar157 * fVar254;
          auVar67._12_4_ = fVar296 - fVar159 * fVar248;
        }
        else {
          uVar14 = extractps(auVar147,1);
          *(undefined8 *)(param_1 + lVar39) = uVar14;
          if ((bVar45 & 4) == 0) goto LAB_140065a0f;
LAB_140065da1:
          uVar14 = extractps(auVar147,2);
          *(undefined8 *)(param_1 + lVar30) = uVar14;
          if (-1 < (char)bVar45) goto LAB_140065a18;
LAB_140065db1:
          uVar14 = extractps(auVar147,3);
          *(undefined8 *)(param_1 + lVar26) = uVar14;
          auVar120._0_4_ = fVar298 - fVar213 * fVar253;
          auVar120._4_4_ = fVar307 - fVar216 * fVar247;
          auVar120._8_4_ = fVar310 - fVar271 * fVar254;
          auVar120._12_4_ = fVar314 - fVar278 * fVar248;
          if ((bVar45 & 1) == 0) goto LAB_140065a2a;
LAB_140065dca:
          *(int *)(param_1 + 4 + lVar47) = auVar120._0_4_;
          if ((bVar45 & 2) == 0) goto LAB_140065a34;
LAB_140065ddb:
          uVar14 = extractps(auVar120,1);
          *(undefined8 *)(param_1 + 4 + lVar39) = uVar14;
          if ((bVar45 & 4) == 0) goto LAB_140065a3e;
LAB_140065ded:
          uVar14 = extractps(auVar120,2);
          *(undefined8 *)(param_1 + 4 + lVar30) = uVar14;
          if (-1 < (char)bVar45) goto LAB_140065a47;
LAB_140065dfe:
          uVar14 = extractps(auVar120,3);
          *(undefined8 *)(param_1 + 4 + lVar26) = uVar14;
          auVar67._0_4_ = fVar280 - fVar142 * fVar253;
          auVar67._4_4_ = fVar287 - fVar155 * fVar247;
          auVar67._8_4_ = fVar291 - fVar157 * fVar254;
          auVar67._12_4_ = fVar296 - fVar159 * fVar248;
        }
        if ((bVar45 & 1) != 0) {
          *(int *)(param_1 + 8 + lVar47) = auVar67._0_4_;
        }
        if ((bVar45 & 2) != 0) {
          uVar14 = extractps(auVar67,1);
          *(undefined8 *)(param_1 + 8 + lVar39) = uVar14;
        }
        if ((bVar45 & 4) != 0) {
          uVar14 = extractps(auVar67,2);
          *(undefined8 *)(param_1 + 8 + lVar30) = uVar14;
        }
        if ((char)bVar45 < '\0') {
          uVar14 = extractps(auVar67,3);
          *(undefined8 *)(param_1 + 8 + lVar26) = uVar14;
        }
        if ((bVar45 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar47) = uVar58;
        }
        if ((bVar45 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar39) = uVar6;
        }
        if ((bVar45 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar30) = uVar7;
        }
        if ((char)bVar45 < '\0') {
          *(uint *)(param_1 + 0xc + lVar26) = uVar8;
        }
      }
      auVar68._4_4_ = -(uint)(0.0 < fVar173);
      auVar68._0_4_ = -(uint)(0.0 < fVar162);
      auVar68._8_4_ = -(uint)(0.0 < fVar178);
      auVar68._12_4_ = -(uint)(0.0 < fVar189);
      iVar25 = movmskps(iVar25 << 4,auVar68);
      if (iVar25 != 0) {
        bVar45 = (char)((char)iVar25 << 4) >> 4;
        fVar162 = fVar162 * fVar95;
        fVar173 = fVar173 * fVar100;
        fVar178 = fVar178 * fVar114;
        fVar189 = fVar189 * fVar115;
        auVar121._0_4_ = fVar295 - fVar263 * fVar162;
        auVar121._4_4_ = fVar269 - fVar272 * fVar173;
        auVar121._8_4_ = fVar136 - fVar275 * fVar178;
        auVar121._12_4_ = fVar276 - fVar279 * fVar189;
        if ((bVar45 & 1) != 0) {
          *(float *)(param_1 + lVar43) = auVar121._0_4_;
        }
        if ((bVar45 & 2) == 0) {
          if ((bVar45 & 4) != 0) goto LAB_140065ee2;
LAB_140065b12:
          if ((char)bVar45 < '\0') goto LAB_140065ef2;
LAB_140065b1a:
          auVar69._0_4_ = fVar289 - fVar234 * fVar162;
          auVar69._4_4_ = fVar290 - fVar238 * fVar173;
          auVar69._8_4_ = fVar141 - fVar185 * fVar178;
          auVar69._12_4_ = fVar293 - fVar188 * fVar189;
        }
        else {
          uVar14 = extractps(auVar121,1);
          *(undefined8 *)(param_1 + lVar28) = uVar14;
          if ((bVar45 & 4) == 0) goto LAB_140065b12;
LAB_140065ee2:
          uVar14 = extractps(auVar121,2);
          *(undefined8 *)(param_1 + lVar32) = uVar14;
          if (-1 < (char)bVar45) goto LAB_140065b1a;
LAB_140065ef2:
          uVar14 = extractps(auVar121,3);
          *(undefined8 *)(param_1 + lVar23) = uVar14;
          auVar69._0_4_ = fVar289 - fVar234 * fVar162;
          auVar69._4_4_ = fVar290 - fVar238 * fVar173;
          auVar69._8_4_ = fVar141 - fVar185 * fVar178;
          auVar69._12_4_ = fVar293 - fVar188 * fVar189;
          iVar134 = iVar187;
        }
        if ((bVar45 & 1) != 0) {
          *(int *)(param_1 + 4 + lVar43) = auVar69._0_4_;
        }
        if ((bVar45 & 2) != 0) {
          uVar14 = extractps(auVar69,1);
          *(undefined8 *)(param_1 + 4 + lVar28) = uVar14;
        }
        if ((bVar45 & 4) != 0) {
          uVar14 = extractps(auVar69,2);
          *(undefined8 *)(param_1 + 4 + lVar32) = uVar14;
        }
        if ((char)bVar45 < '\0') {
          uVar14 = extractps(auVar69,3);
          *(undefined8 *)(param_1 + 4 + lVar23) = uVar14;
          iVar134 = iVar187;
        }
        auVar70._0_4_ = fVar240 - fVar161 * fVar162;
        auVar70._4_4_ = fVar245 - fVar223 * fVar173;
        auVar70._8_4_ = fVar174 - fVar172 * fVar178;
        auVar70._12_4_ = fVar313 - fVar230 * fVar189;
        if ((bVar45 & 1) != 0) {
          *(float *)(param_1 + 8 + lVar43) = auVar70._0_4_;
        }
        if ((bVar45 & 2) != 0) {
          uVar14 = extractps(auVar70,1);
          *(undefined8 *)(param_1 + 8 + lVar28) = uVar14;
        }
        if ((bVar45 & 4) != 0) {
          uVar14 = extractps(auVar70,2);
          *(undefined8 *)(param_1 + 8 + lVar32) = uVar14;
        }
        if ((char)bVar45 < '\0') {
          uVar14 = extractps(auVar70,3);
          *(undefined8 *)(param_1 + 8 + lVar23) = uVar14;
          iVar134 = iVar187;
        }
        if ((bVar45 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar43) = uVar50;
        }
        if ((bVar45 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar28) = uVar51;
        }
        if ((bVar45 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar32) = uVar52;
        }
        if ((char)bVar45 < '\0') {
          *(uint *)(param_1 + 0xc + lVar23) = uVar55;
          iVar134 = iVar187;
        }
      }
      auVar71._4_4_ = -(uint)(0.0 < fVar186);
      auVar71._0_4_ = -(uint)(0.0 < fVar200);
      auVar71._8_4_ = -(uint)(0.0 < fVar202);
      auVar71._12_4_ = -(uint)(0.0 < fVar203);
      iVar134 = movmskps(iVar134,auVar71);
      iVar25 = 0;
      if (iVar134 != 0) {
        bVar45 = (char)((char)iVar134 << 4) >> 4;
        fVar200 = fVar200 * fVar95;
        fVar186 = fVar186 * fVar100;
        fVar202 = fVar202 * fVar114;
        fVar203 = fVar203 * fVar115;
        auVar122._0_4_ = fVar224 - fVar61 * fVar200;
        auVar122._4_4_ = fVar231 - fVar91 * fVar186;
        auVar122._8_4_ = fVar235 - fVar96 * fVar202;
        auVar122._12_4_ = fVar239 - fVar102 * fVar203;
        if ((bVar45 & 1) != 0) {
          *(float *)(param_1 + lVar37) = auVar122._0_4_;
        }
        if ((bVar45 & 2) != 0) {
          uVar14 = extractps(auVar122,1);
          *(undefined8 *)(param_1 + lVar34) = uVar14;
        }
        if ((bVar45 & 4) != 0) {
          uVar14 = extractps(auVar122,2);
          *(undefined8 *)(param_1 + lVar41) = uVar14;
        }
        if ((char)bVar45 < '\0') {
          uVar14 = extractps(auVar122,3);
          *(undefined8 *)(param_1 + lVar33) = uVar14;
        }
        auVar72._0_4_ = fVar205 - fVar143 * fVar200;
        auVar72._4_4_ = fVar212 - fVar156 * fVar186;
        auVar72._8_4_ = fVar294 - fVar158 * fVar202;
        auVar72._12_4_ = fVar215 - fVar160 * fVar203;
        if ((bVar45 & 1) != 0) {
          *(float *)(param_1 + 4 + lVar37) = auVar72._0_4_;
        }
        if ((bVar45 & 2) != 0) {
          uVar14 = extractps(auVar72,1);
          *(undefined8 *)(param_1 + 4 + lVar34) = uVar14;
        }
        if ((bVar45 & 4) != 0) {
          uVar14 = extractps(auVar72,2);
          *(undefined8 *)(param_1 + 4 + lVar41) = uVar14;
        }
        if ((char)bVar45 < '\0') {
          uVar14 = extractps(auVar72,3);
          *(undefined8 *)(param_1 + 4 + lVar33) = uVar14;
        }
        auVar73._0_4_ = fVar62 - fVar116 * fVar200;
        auVar73._4_4_ = fVar98 - fVar135 * fVar186;
        auVar73._8_4_ = fVar106 - fVar137 * fVar202;
        auVar73._12_4_ = fVar101 - fVar139 * fVar203;
        if ((bVar45 & 1) != 0) {
          *(float *)(param_1 + 8 + lVar37) = auVar73._0_4_;
        }
        if ((bVar45 & 2) != 0) {
          uVar14 = extractps(auVar73,1);
          *(undefined8 *)(param_1 + 8 + lVar34) = uVar14;
        }
        if ((bVar45 & 4) != 0) {
          uVar14 = extractps(auVar73,2);
          *(undefined8 *)(param_1 + 8 + lVar41) = uVar14;
        }
        if ((char)bVar45 < '\0') {
          uVar14 = extractps(auVar73,3);
          *(undefined8 *)(param_1 + 8 + lVar33) = uVar14;
        }
        if ((bVar45 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar37) = uVar53;
        }
        if ((bVar45 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar34) = uVar54;
        }
        if ((bVar45 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar41) = uVar56;
        }
        iVar25 = CONCAT31((int3)((uint)iVar134 >> 8),bVar45);
        if ((char)bVar45 < '\0') {
          *(uint *)(param_1 + 0xc + lVar33) = uVar57;
          iVar25 = iVar22 << 4;
        }
      }
      auVar74._4_4_ = -(uint)(0.0 < fVar241);
      auVar74._0_4_ = -(uint)(0.0 < fVar249);
      auVar74._8_4_ = -(uint)(0.0 < fVar252);
      auVar74._12_4_ = -(uint)(0.0 < fVar246);
      iVar25 = movmskps(iVar25,auVar74);
      if (iVar25 != 0) {
        bVar45 = (char)((char)iVar25 << 4) >> 4;
        fVar249 = fVar249 * fVar95;
        fVar241 = fVar241 * fVar100;
        fVar252 = fVar252 * fVar114;
        fVar246 = fVar246 * fVar115;
        auVar123._0_4_ = fVar138 - fVar206 * fVar249;
        auVar123._4_4_ = fVar140 - fVar214 * fVar241;
        auVar123._8_4_ = fVar163 - fVar262 * fVar252;
        auVar123._12_4_ = fVar176 - fVar274 * fVar246;
        if ((bVar45 & 1) != 0) {
          *(float *)(param_1 + lVar36) = auVar123._0_4_;
        }
        if ((bVar45 & 2) != 0) {
          uVar14 = extractps(auVar123,1);
          *(undefined8 *)(param_1 + lVar29) = uVar14;
        }
        if ((bVar45 & 4) != 0) {
          uVar14 = extractps(auVar123,2);
          *(undefined8 *)(param_1 + lVar40) = uVar14;
        }
        if ((char)bVar45 < '\0') {
          uVar14 = extractps(auVar123,3);
          *(undefined8 *)(param_1 + lVar48) = uVar14;
        }
        auVar108._0_4_ = fVar92 - fVar94 * fVar249;
        auVar108._4_4_ = fVar104 - fVar99 * fVar241;
        auVar108._8_4_ = fVar113 - fVar175 * fVar252;
        auVar108._12_4_ = fVar103 - fVar177 * fVar246;
        if ((bVar45 & 1) == 0) {
          if ((bVar45 & 2) != 0) goto LAB_1400661a0;
LAB_140065d2d:
          if ((bVar45 & 4) != 0) goto LAB_1400661b1;
LAB_140065d36:
          if ((char)bVar45 < '\0') goto LAB_1400661c2;
LAB_140065d3e:
          auVar75._0_4_ = fVar93 - fVar59 * fVar249;
          auVar75._4_4_ = fVar105 - fVar60 * fVar241;
          auVar75._8_4_ = fVar97 - fVar89 * fVar252;
          auVar75._12_4_ = fVar117 - fVar90 * fVar246;
        }
        else {
          *(float *)(param_1 + 4 + lVar36) = auVar108._0_4_;
          if ((bVar45 & 2) == 0) goto LAB_140065d2d;
LAB_1400661a0:
          uVar14 = extractps(auVar108,1);
          *(undefined8 *)(param_1 + 4 + lVar29) = uVar14;
          if ((bVar45 & 4) == 0) goto LAB_140065d36;
LAB_1400661b1:
          uVar14 = extractps(auVar108,2);
          *(undefined8 *)(param_1 + 4 + lVar40) = uVar14;
          if (-1 < (char)bVar45) goto LAB_140065d3e;
LAB_1400661c2:
          uVar14 = extractps(auVar108,3);
          *(undefined8 *)(param_1 + 4 + lVar48) = uVar14;
          auVar75._0_4_ = fVar93 - fVar59 * fVar249;
          auVar75._4_4_ = fVar105 - fVar60 * fVar241;
          auVar75._8_4_ = fVar97 - fVar89 * fVar252;
          auVar75._12_4_ = fVar117 - fVar90 * fVar246;
        }
        if ((bVar45 & 1) != 0) {
          *(int *)(param_1 + 8 + lVar36) = auVar75._0_4_;
        }
        if ((bVar45 & 2) != 0) {
          uVar14 = extractps(auVar75,1);
          *(undefined8 *)(param_1 + 8 + lVar29) = uVar14;
        }
        if ((bVar45 & 4) != 0) {
          uVar14 = extractps(auVar75,2);
          *(undefined8 *)(param_1 + 8 + lVar40) = uVar14;
        }
        if ((char)bVar45 < '\0') {
          uVar14 = extractps(auVar75,3);
          *(undefined8 *)(param_1 + 8 + lVar48) = uVar14;
        }
        if ((bVar45 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar36) = uVar9;
        }
        if ((bVar45 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar29) = uVar10;
        }
        if ((bVar45 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar40) = uVar11;
        }
        if ((char)bVar45 < '\0') {
          *(uint *)(param_1 + 0xc + lVar48) = uVar12;
        }
      }
      uVar38 = uVar38 + 4;
      uVar42 = uVar42 + 0x10;
    } while ((int)uVar38 < (int)(uVar21 & 0xfffffffc));
    if ((int)param_7 <= (int)uVar38) {
      return;
    }
  }
  uVar50 = (uint)uVar38;
  bVar15 = (int)(uVar50 | (uint)__xmm_00000003000000020000000100000000) < (int)param_7;
  auVar166._0_4_ = -(uint)bVar15;
  bVar16 = (int)(uVar50 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_7;
  auVar166._4_4_ = -(uint)bVar16;
  bVar17 = (int)(uVar50 | _UNK_150631e08) < (int)param_7;
  auVar166._8_4_ = -(uint)bVar17;
  bVar18 = (int)(uVar50 | _UNK_150631e0c) < (int)param_7;
  auVar166._12_4_ = -(uint)bVar18;
  pbVar24 = (byte *)(uVar38 & 0xffffffff);
  pauVar27 = (undefined1 (*) [16])(param_2 + (longlong)pbVar24 * 0x10);
  uVar21 = movmskps((int)((longlong)pbVar24 * 0x10),auVar166);
  bVar45 = (char)((char)uVar21 << 4) >> 4;
  if (uVar21 == 0xf) {
    auVar264 = *pauVar27;
    iVar22 = *(int *)pauVar27[1];
    auVar242 = pauVar27[2];
    iVar46 = *(int *)pauVar27[3];
    auVar193._0_8_ = auVar264._0_8_;
    auVar193._8_4_ = auVar264._4_4_;
    auVar193._12_4_ = *(undefined4 *)(pauVar27[1] + 4);
    iVar25 = auVar264._0_4_;
    auVar149._0_8_ = CONCAT44(*(undefined4 *)(pauVar27[1] + 8),auVar264._8_4_);
    auVar149._8_4_ = auVar264._12_4_;
    auVar149._12_4_ = *(undefined4 *)(pauVar27[1] + 0xc);
    auVar77._0_8_ = auVar242._0_8_;
    auVar77._8_4_ = auVar242._4_4_;
    auVar77._12_4_ = *(undefined4 *)(pauVar27[3] + 4);
    iVar134 = auVar242._0_4_;
    auVar109._0_8_ = CONCAT44(*(undefined4 *)(pauVar27[3] + 8),auVar242._8_4_);
    auVar109._8_4_ = auVar242._12_4_;
    auVar109._12_4_ = *(undefined4 *)(pauVar27[3] + 0xc);
    auVar192._8_8_ = auVar77._8_8_;
    auVar192._0_8_ = auVar193._8_8_;
    auVar285._8_8_ = auVar109._0_8_;
    auVar285._0_8_ = auVar149._0_8_;
    auVar148._8_8_ = auVar109._8_8_;
    auVar148._0_8_ = auVar149._8_8_;
  }
  else {
    auVar76._0_4_ = ___xmm_00000030000000200000001000000000 & auVar166._0_4_;
    auVar76._4_4_ = _UNK_150b511c4 & auVar166._4_4_;
    auVar76._8_4_ = _UNK_150b511c8 & auVar166._8_4_;
    auVar76._12_4_ = _UNK_150b511cc & auVar166._12_4_;
    lVar23 = extractps(auVar76,1);
    lVar28 = extractps(auVar76,2);
    lVar26 = extractps(auVar76,3);
    iVar25 = *(int *)*pauVar27;
    iVar22 = *(int *)(*pauVar27 + lVar23);
    iVar134 = *(int *)(*pauVar27 + lVar28);
    iVar46 = *(int *)(*pauVar27 + lVar26);
    auVar264 = ___xmm_00000034000000240000001400000004 & auVar166;
    auVar192._4_4_ = *(undefined4 *)(*pauVar27 + auVar264._4_4_);
    auVar192._0_4_ = *(undefined4 *)(*pauVar27 + auVar264._0_4_);
    auVar192._12_4_ = *(undefined4 *)(*pauVar27 + auVar264._12_4_);
    auVar192._8_4_ = *(undefined4 *)(*pauVar27 + auVar264._8_4_);
    auVar264 = ___xmm_00000038000000280000001800000008 & auVar166;
    auVar285._4_4_ = *(undefined4 *)(*pauVar27 + auVar264._4_4_);
    auVar285._0_4_ = *(undefined4 *)(*pauVar27 + auVar264._0_4_);
    auVar285._12_4_ = *(undefined4 *)(*pauVar27 + auVar264._12_4_);
    auVar285._8_4_ = *(undefined4 *)(*pauVar27 + auVar264._8_4_);
    auVar264 = ___xmm_0000003c0000002c0000001c0000000c & auVar166;
    auVar148._4_4_ = *(undefined4 *)(*pauVar27 + auVar264._4_4_);
    auVar148._0_4_ = *(undefined4 *)(*pauVar27 + auVar264._0_4_);
    auVar148._12_4_ = *(undefined4 *)(*pauVar27 + auVar264._12_4_);
    auVar148._8_4_ = *(undefined4 *)(*pauVar27 + auVar264._8_4_);
  }
  auVar194._0_4_ = auVar192._0_4_ << 4;
  auVar194._4_4_ = auVar192._4_4_ << 4;
  auVar194._8_4_ = auVar192._8_4_ << 4;
  auVar194._12_4_ = auVar192._12_4_ << 4;
  auVar242 = auVar166 & auVar194;
  auVar265 = ___xmm_00000004000000040000000400000004 & auVar166;
  auVar256 = ___xmm_00000008000000080000000800000008 & auVar166;
  auVar286._0_4_ = auVar285._0_4_ << 4;
  auVar286._4_4_ = auVar285._4_4_ << 4;
  auVar286._8_4_ = auVar285._8_4_ << 4;
  auVar286._12_4_ = auVar285._12_4_ << 4;
  auVar207 = auVar166 & auVar286;
  auVar208._0_4_ = iVar25 << 4;
  auVar208._4_4_ = iVar22 << 4;
  auVar208._8_4_ = iVar134 << 4;
  auVar208._12_4_ = iVar46 << 4;
  auVar217 = auVar166 & auVar208;
  lVar23 = param_1 + auVar217._0_4_;
  auVar150._0_4_ = auVar148._0_4_ << 4;
  auVar150._4_4_ = auVar148._4_4_ << 4;
  auVar150._8_4_ = auVar148._8_4_ << 4;
  auVar150._12_4_ = auVar148._12_4_ << 4;
  auVar301 = auVar166 & auVar150;
  lVar44 = (longlong)auVar301._0_4_;
  auVar264 = ZEXT416(*(uint *)(param_1 + auVar217._0_4_));
  lVar26 = param_1 + auVar242._0_4_;
  lVar28 = param_1 + auVar242._4_4_;
  lVar29 = param_1 + auVar242._8_4_;
  lVar30 = param_1 + auVar242._12_4_;
  uVar38 = (ulonglong)auVar265._0_4_;
  uVar42 = (ulonglong)auVar265._4_4_;
  uVar35 = (ulonglong)auVar256._0_4_;
  lVar32 = param_1 + auVar207._0_4_;
  lVar33 = param_1 + auVar207._4_4_;
  lVar34 = param_1 + auVar207._8_4_;
  lVar36 = param_1 + auVar207._12_4_;
  lVar37 = param_1 + auVar217._4_4_;
  lVar39 = param_1 + auVar217._8_4_;
  lVar40 = param_1 + auVar217._12_4_;
  lVar41 = param_1 + lVar44;
  lVar43 = param_1 + auVar301._4_4_;
  lVar47 = param_1 + auVar301._8_4_;
  lVar48 = param_1 + auVar301._12_4_;
  bVar49 = (bVar45 & 2) == 0;
  if (bVar49) {
    auVar304 = ZEXT416(*(uint *)(uVar38 + lVar23));
    auVar302 = ZEXT416(*(uint *)(uVar35 + lVar23));
  }
  else {
    auVar264 = insertps(auVar264,*(undefined4 *)(param_1 + auVar217._4_4_),0x10);
    auVar304 = insertps(ZEXT416(*(uint *)(uVar38 + lVar23)),*(undefined4 *)(uVar42 + lVar37),0x10);
    auVar302 = insertps(ZEXT416(*(uint *)(uVar35 + lVar23)),
                        *(undefined4 *)((ulonglong)auVar256._4_4_ + lVar37),0x10);
  }
  uVar31 = (ulonglong)auVar256._4_4_;
  auVar124 = ZEXT416(*(uint *)(param_1 + auVar242._0_4_));
  if (!bVar49) {
    auVar124 = insertps(auVar124,*(undefined4 *)(param_1 + auVar242._4_4_),0x10);
  }
  auVar125 = ZEXT416(*(uint *)(uVar38 + lVar26));
  if (!bVar49) {
    auVar125 = insertps(auVar125,*(undefined4 *)(uVar42 + lVar28),0x10);
  }
  auVar179 = ZEXT416(*(uint *)(uVar35 + lVar26));
  if (!bVar49) {
    auVar179 = insertps(auVar179,*(undefined4 *)(uVar31 + lVar28),0x10);
  }
  auVar180 = ZEXT416(*(uint *)(param_1 + auVar207._0_4_));
  uVar51 = auVar265._8_4_;
  uVar55 = auVar265._12_4_;
  uVar52 = auVar256._8_4_;
  uVar53 = auVar256._12_4_;
  if (bVar49) {
    auVar256 = ZEXT416(*(uint *)(uVar38 + lVar32));
    auVar265 = ZEXT416(*(uint *)(uVar35 + lVar32));
    _local_2c8 = ZEXT416(*(uint *)(param_1 + lVar44));
    auVar305 = ZEXT416(*(uint *)(uVar38 + lVar41));
    auVar243 = ZEXT416(*(uint *)(uVar35 + lVar41));
  }
  else {
    auVar180 = insertps(auVar180,*(undefined4 *)(param_1 + auVar207._4_4_),0x10);
    auVar256 = insertps(ZEXT416(*(uint *)(uVar38 + lVar32)),*(undefined4 *)(uVar42 + lVar33),0x10);
    auVar265 = insertps(ZEXT416(*(uint *)(uVar35 + lVar32)),*(undefined4 *)(uVar31 + lVar33),0x10);
    _local_2c8 = insertps(ZEXT416(*(uint *)(param_1 + lVar44)),
                          *(undefined4 *)(param_1 + auVar301._4_4_),0x10);
    auVar305 = insertps(ZEXT416(*(uint *)(uVar38 + lVar41)),*(undefined4 *)(uVar42 + lVar43),0x10);
    auVar243 = insertps(ZEXT416(*(uint *)(uVar35 + lVar41)),*(undefined4 *)(uVar31 + lVar43),0x10);
  }
  if ((bVar45 & 4) != 0) {
    auVar264 = insertps(auVar264,*(undefined4 *)(param_1 + auVar217._8_4_),0x20);
    auVar304 = insertps(auVar304,*(undefined4 *)((ulonglong)uVar51 + lVar39),0x20);
    auVar302 = insertps(auVar302,*(undefined4 *)((ulonglong)uVar52 + lVar39),0x20);
    auVar124 = insertps(auVar124,*(undefined4 *)(param_1 + auVar242._8_4_),0x20);
    auVar125 = insertps(auVar125,*(undefined4 *)((ulonglong)uVar51 + lVar29),0x20);
    auVar179 = insertps(auVar179,*(undefined4 *)((ulonglong)uVar52 + lVar29),0x20);
    auVar180 = insertps(auVar180,*(undefined4 *)(param_1 + auVar207._8_4_),0x20);
    auVar256 = insertps(auVar256,*(undefined4 *)((ulonglong)uVar51 + lVar34),0x20);
    auVar265 = insertps(auVar265,*(undefined4 *)((ulonglong)uVar52 + lVar34),0x20);
    _local_2c8 = insertps(_local_2c8,*(undefined4 *)(param_1 + auVar301._8_4_),0x20);
    auVar305 = insertps(auVar305,*(undefined4 *)((ulonglong)uVar51 + lVar47),0x20);
    auVar243 = insertps(auVar243,*(undefined4 *)((ulonglong)uVar52 + lVar47),0x20);
  }
  if ((char)bVar45 < '\0') {
    auVar264 = insertps(auVar264,*(undefined4 *)(param_1 + auVar217._12_4_),0x30);
    auVar304 = insertps(auVar304,*(undefined4 *)((ulonglong)uVar55 + lVar40),0x30);
    auVar302 = insertps(auVar302,*(undefined4 *)((ulonglong)uVar53 + lVar40),0x30);
    auVar124 = insertps(auVar124,*(undefined4 *)(param_1 + auVar242._12_4_),0x30);
    auVar125 = insertps(auVar125,*(undefined4 *)((ulonglong)uVar55 + lVar30),0x30);
    auVar179 = insertps(auVar179,*(undefined4 *)((ulonglong)uVar53 + lVar30),0x30);
    auVar180 = insertps(auVar180,*(undefined4 *)(param_1 + auVar207._12_4_),0x30);
  }
  uVar38 = (ulonglong)((uint)__xmm_0000000c0000000c0000000c0000000c & auVar166._0_4_);
  if ((char)bVar45 < '\0') {
    auVar256 = insertps(auVar256,*(undefined4 *)((ulonglong)uVar55 + lVar36),0x30);
  }
  uVar42 = (ulonglong)(__xmm_0000000c0000000c0000000c0000000c._4_4_ & auVar166._4_4_);
  if ((char)bVar45 < '\0') {
    auVar265 = insertps(auVar265,*(undefined4 *)((ulonglong)uVar53 + lVar36),0x30);
  }
  bVar49 = (char)bVar45 < '\0';
  uVar35 = (ulonglong)SUB164(___xmm_0000000c0000000c0000000c0000000c & auVar166,8);
  fVar59 = auVar302._12_4_;
  if (bVar49) {
    _local_2c8 = insertps(_local_2c8,*(undefined4 *)(param_1 + auVar301._12_4_),0x30);
  }
  uVar31 = (ulonglong)SUB164(___xmm_0000000c0000000c0000000c0000000c & auVar166,0xc);
  auVar242 = insertps(ZEXT416(*(uint *)(uVar38 + lVar26)),*(undefined4 *)(uVar42 + lVar28),0x10);
  auVar217 = insertps(ZEXT416(*(uint *)(uVar38 + lVar32)),*(undefined4 *)(uVar42 + lVar33),0x10);
  auVar301 = insertps(ZEXT416(*(uint *)(uVar38 + lVar23)),*(undefined4 *)(uVar42 + lVar37),0x10);
  auVar207 = insertps(ZEXT416(*(uint *)(uVar38 + lVar41)),*(undefined4 *)(uVar42 + lVar43),0x10);
  if (bVar49) {
    auVar305 = insertps(auVar305,*(undefined4 *)((ulonglong)uVar55 + lVar48),0x30);
  }
  auVar242 = insertps(auVar242,*(undefined4 *)(uVar35 + lVar29),0x20);
  auVar217 = insertps(auVar217,*(undefined4 *)(uVar35 + lVar34),0x20);
  auVar301 = insertps(auVar301,*(undefined4 *)(uVar35 + lVar39),0x20);
  auVar207 = insertps(auVar207,*(undefined4 *)(uVar35 + lVar47),0x20);
  if (bVar49) {
    auVar243 = insertps(auVar243,*(undefined4 *)((ulonglong)uVar53 + lVar48),0x30);
  }
  local_398 = auVar124._0_4_;
  fStack_394 = auVar124._4_4_;
  fStack_390 = auVar124._8_4_;
  fStack_38c = auVar124._12_4_;
  local_3b8._0_4_ = auVar264._0_4_;
  auVar244._0_4_ = local_398 - (float)local_3b8._0_4_;
  fVar240 = auVar264._4_4_;
  auVar244._4_4_ = fStack_394 - fVar240;
  fVar245 = auVar264._8_4_;
  auVar244._8_4_ = fStack_390 - fVar245;
  fVar247 = auVar264._12_4_;
  auVar244._12_4_ = fStack_38c - fVar247;
  fVar139 = auVar125._4_4_;
  fVar155 = auVar125._12_4_;
  local_3e8 = auVar304._0_4_;
  fStack_3e4 = auVar304._4_4_;
  fStack_3e0 = auVar304._8_4_;
  fStack_3dc = auVar304._12_4_;
  fVar95 = auVar125._0_4_;
  auVar110._0_4_ = fVar95 - local_3e8;
  auVar110._4_4_ = fVar139 - fStack_3e4;
  fVar99 = auVar125._8_4_;
  auVar110._8_4_ = fVar99 - fStack_3e0;
  auVar110._12_4_ = fVar155 - fStack_3dc;
  local_3f8 = auVar179._0_4_;
  fStack_3f4 = auVar179._4_4_;
  fStack_3f0 = auVar179._8_4_;
  fStack_3ec = auVar179._12_4_;
  local_3a8._0_4_ = auVar302._0_4_;
  auVar126._0_4_ = local_3f8 - (float)local_3a8._0_4_;
  fVar174 = auVar302._4_4_;
  auVar126._4_4_ = fStack_3f4 - fVar174;
  fVar234 = auVar302._8_4_;
  auVar126._8_4_ = fStack_3f0 - fVar234;
  auVar126._12_4_ = fStack_3ec - fVar59;
  auVar151._0_4_ = auVar110._0_4_ * auVar110._0_4_ + auVar244._0_4_ * auVar244._0_4_;
  auVar151._4_4_ = auVar110._4_4_ * auVar110._4_4_ + auVar244._4_4_ * auVar244._4_4_;
  auVar151._8_4_ = auVar110._8_4_ * auVar110._8_4_ + auVar244._8_4_ * auVar244._8_4_;
  auVar151._12_4_ = auVar110._12_4_ * auVar110._12_4_ + auVar244._12_4_ * auVar244._12_4_;
  auVar306._0_4_ = auVar126._0_4_ * auVar126._0_4_ + auVar151._0_4_;
  auVar306._4_4_ = auVar126._4_4_ * auVar126._4_4_ + auVar151._4_4_;
  auVar306._8_4_ = auVar126._8_4_ * auVar126._8_4_ + auVar151._8_4_;
  auVar306._12_4_ = auVar126._12_4_ * auVar126._12_4_ + auVar151._12_4_;
  auVar302 = sqrtps(auVar151,auVar306);
  uVar51 = -(uint)(auVar306._0_4_ <= ___xmm_00800000008000000080000000800000);
  uVar52 = -(uint)(auVar306._4_4_ <= _UNK_1508be494);
  uVar55 = -(uint)(auVar306._8_4_ <= _UNK_1508be498);
  uVar53 = -(uint)(auVar306._12_4_ <= _UNK_1508be49c);
  auVar78._4_4_ = uVar52;
  auVar78._0_4_ = uVar51;
  auVar304 = divps(auVar244,auVar302);
  auVar264 = divps(auVar110,auVar302);
  auVar78._8_4_ = uVar55;
  auVar78._12_4_ = uVar53;
  auVar304 = blendvps(auVar304,___xmm_3f8000003f8000003f8000003f800000,auVar78);
  auVar302 = divps(auVar126,auVar302);
  fVar60 = (float)(~uVar51 & auVar264._0_4_);
  fVar92 = (float)(~uVar52 & auVar264._4_4_);
  fVar90 = (float)(~uVar55 & auVar264._8_4_);
  fVar104 = (float)(~uVar53 & auVar264._12_4_);
  fVar252 = (float)(~uVar51 & auVar302._0_4_);
  fVar253 = (float)(~uVar52 & auVar302._4_4_);
  fVar313 = (float)(~uVar55 & auVar302._8_4_);
  fVar255 = (float)(~uVar53 & auVar302._12_4_);
  local_2d8 = auVar180._0_4_;
  fStack_2d4 = auVar180._4_4_;
  fStack_2d0 = auVar180._8_4_;
  fStack_2cc = auVar180._12_4_;
  fVar178 = (float)local_3b8._0_4_ - local_2d8;
  fVar185 = fVar240 - fStack_2d4;
  fVar186 = fVar245 - fStack_2d0;
  fVar188 = fVar247 - fStack_2cc;
  fVar221 = auVar256._0_4_;
  fVar230 = local_3e8 - fVar221;
  fVar228 = auVar256._4_4_;
  fVar175 = fStack_3e4 - fVar228;
  fVar232 = auVar256._8_4_;
  fVar177 = fStack_3e0 - fVar232;
  fVar236 = auVar256._12_4_;
  fVar238 = fStack_3dc - fVar236;
  fVar190 = auVar265._0_4_;
  fVar117 = (float)local_3a8._0_4_ - fVar190;
  fVar204 = auVar265._4_4_;
  fVar114 = fVar174 - fVar204;
  fVar212 = auVar265._8_4_;
  fVar173 = fVar234 - fVar212;
  fVar214 = auVar265._12_4_;
  fVar156 = fVar59 - fVar214;
  fVar158 = local_398 - local_2d8;
  fVar159 = fStack_394 - fStack_2d4;
  fVar176 = fStack_390 - fStack_2d0;
  fVar223 = fStack_38c - fStack_2cc;
  fVar62 = fVar95 - fVar221;
  fVar93 = fVar139 - fVar228;
  fVar98 = fVar99 - fVar232;
  fVar105 = fVar155 - fVar236;
  fVar116 = local_3f8 - fVar190;
  fVar115 = fStack_3f4 - fVar204;
  fVar142 = fStack_3f0 - fVar212;
  fVar140 = fStack_3ec - fVar214;
  auVar167._0_4_ = fVar158 * fVar230;
  auVar167._4_4_ = fVar159 * fVar175;
  auVar167._8_4_ = fVar176 * fVar177;
  auVar167._12_4_ = fVar223 * fVar238;
  auVar152._0_4_ = fVar178 * fVar62 - auVar167._0_4_;
  auVar152._4_4_ = fVar185 * fVar93 - auVar167._4_4_;
  auVar152._8_4_ = fVar186 * fVar98 - auVar167._8_4_;
  auVar152._12_4_ = fVar188 * fVar105 - auVar167._12_4_;
  auVar195._0_4_ = fVar230 * fVar116 - fVar62 * fVar117;
  auVar195._4_4_ = fVar175 * fVar115 - fVar93 * fVar114;
  auVar195._8_4_ = fVar177 * fVar142 - fVar98 * fVar173;
  auVar195._12_4_ = fVar238 * fVar140 - fVar105 * fVar156;
  auVar127._0_4_ = fVar158 * fVar117 - fVar178 * fVar116;
  auVar127._4_4_ = fVar159 * fVar114 - fVar185 * fVar115;
  auVar127._8_4_ = fVar176 * fVar173 - fVar186 * fVar142;
  auVar127._12_4_ = fVar223 * fVar156 - fVar188 * fVar140;
  auVar79._0_4_ =
       auVar152._0_4_ * auVar152._0_4_ +
       auVar127._0_4_ * auVar127._0_4_ + auVar195._0_4_ * auVar195._0_4_;
  auVar79._4_4_ =
       auVar152._4_4_ * auVar152._4_4_ +
       auVar127._4_4_ * auVar127._4_4_ + auVar195._4_4_ * auVar195._4_4_;
  auVar79._8_4_ =
       auVar152._8_4_ * auVar152._8_4_ +
       auVar127._8_4_ * auVar127._8_4_ + auVar195._8_4_ * auVar195._8_4_;
  auVar79._12_4_ =
       auVar152._12_4_ * auVar152._12_4_ +
       auVar127._12_4_ * auVar127._12_4_ + auVar195._12_4_ * auVar195._12_4_;
  auVar265 = sqrtps(auVar167,auVar79);
  uVar51 = -(uint)(auVar265._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77);
  uVar55 = -(uint)(auVar265._4_4_ <= _UNK_1506895d4);
  uVar54 = -(uint)(auVar265._8_4_ <= _UNK_1506895d8);
  uVar57 = -(uint)(auVar265._12_4_ <= _UNK_1506895dc);
  auVar264 = divps(auVar195,auVar265);
  fVar222 = (float)(~uVar51 & auVar264._0_4_);
  fVar229 = (float)(~uVar55 & auVar264._4_4_);
  fVar233 = (float)(~uVar54 & auVar264._8_4_);
  fVar237 = (float)(~uVar57 & auVar264._12_4_);
  auVar264 = divps(auVar127,auVar265);
  fVar106 = (float)(~uVar51 & auVar264._0_4_);
  fVar113 = (float)(~uVar55 & auVar264._4_4_);
  fVar100 = (float)(~uVar54 & auVar264._8_4_);
  fVar102 = (float)(~uVar57 & auVar264._12_4_);
  auVar264 = divps(auVar152,auVar265);
  fVar189 = (float)(~uVar51 & auVar264._0_4_);
  fVar200 = (float)(~uVar55 & auVar264._4_4_);
  fVar202 = (float)(~uVar54 & auVar264._8_4_);
  fVar203 = (float)(~uVar57 & auVar264._12_4_);
  fVar248 = local_398 - (float)local_2c8._0_4_;
  fVar300 = fStack_394 - (float)local_2c8._4_4_;
  fVar309 = fStack_390 - fStack_2c0;
  fVar312 = fStack_38c - fStack_2bc;
  local_308 = auVar305._0_4_;
  fStack_304 = auVar305._4_4_;
  fStack_300 = auVar305._8_4_;
  fStack_2fc = auVar305._12_4_;
  fVar249 = fVar95 - local_308;
  fVar241 = fVar139 - fStack_304;
  fVar246 = fVar99 - fStack_300;
  fVar254 = fVar155 - fStack_2fc;
  fVar224 = (float)local_3b8._0_4_ - (float)local_2c8._0_4_;
  fVar262 = fVar240 - (float)local_2c8._4_4_;
  fVar271 = fVar245 - fStack_2c0;
  fVar274 = fVar247 - fStack_2bc;
  fVar61 = local_3e8 - local_308;
  fVar89 = fStack_3e4 - fStack_304;
  auVar153._4_4_ = fVar89;
  auVar153._0_4_ = fVar61;
  fVar91 = fStack_3e0 - fStack_300;
  fVar94 = fStack_3dc - fStack_2fc;
  auVar153._8_4_ = fVar91;
  auVar153._12_4_ = fVar94;
  auVar266._0_4_ = fVar248 * fVar61 - fVar224 * fVar249;
  auVar266._4_4_ = fVar300 * fVar89 - fVar262 * fVar241;
  auVar266._8_4_ = fVar309 * fVar91 - fVar271 * fVar246;
  auVar266._12_4_ = fVar312 * fVar94 - fVar274 * fVar254;
  local_348 = auVar243._0_4_;
  fStack_344 = auVar243._4_4_;
  fStack_340 = auVar243._8_4_;
  fStack_33c = auVar243._12_4_;
  fVar316 = local_3f8 - local_348;
  fVar289 = fStack_3f4 - fStack_344;
  fVar293 = fStack_3f0 - fStack_340;
  fVar261 = fStack_3ec - fStack_33c;
  fVar135 = (float)local_3a8._0_4_ - local_348;
  fVar136 = fVar174 - fStack_344;
  fVar143 = fVar234 - fStack_340;
  fVar141 = fVar59 - fStack_33c;
  auVar259._0_4_ = fVar249 * fVar135 - fVar61 * fVar316;
  auVar259._4_4_ = fVar241 * fVar136 - fVar89 * fVar289;
  auVar259._8_4_ = fVar246 * fVar143 - fVar91 * fVar293;
  auVar259._12_4_ = fVar254 * fVar141 - fVar94 * fVar261;
  auVar226._0_4_ = fVar224 * fVar316 - fVar248 * fVar135;
  auVar226._4_4_ = fVar262 * fVar289 - fVar300 * fVar136;
  auVar226._8_4_ = fVar271 * fVar293 - fVar309 * fVar143;
  auVar226._12_4_ = fVar274 * fVar261 - fVar312 * fVar141;
  auVar128._0_4_ =
       auVar266._0_4_ * auVar266._0_4_ +
       auVar226._0_4_ * auVar226._0_4_ + auVar259._0_4_ * auVar259._0_4_;
  auVar128._4_4_ =
       auVar266._4_4_ * auVar266._4_4_ +
       auVar226._4_4_ * auVar226._4_4_ + auVar259._4_4_ * auVar259._4_4_;
  auVar128._8_4_ =
       auVar266._8_4_ * auVar266._8_4_ +
       auVar226._8_4_ * auVar226._8_4_ + auVar259._8_4_ * auVar259._8_4_;
  auVar128._12_4_ =
       auVar266._12_4_ * auVar266._12_4_ +
       auVar226._12_4_ * auVar226._12_4_ + auVar259._12_4_ * auVar259._12_4_;
  auVar256 = sqrtps(auVar153,auVar128);
  uVar52 = -(uint)(auVar256._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77);
  uVar53 = -(uint)(auVar256._4_4_ <= _UNK_1506895d4);
  uVar56 = -(uint)(auVar256._8_4_ <= _UNK_1506895d8);
  uVar58 = -(uint)(auVar256._12_4_ <= _UNK_1506895dc);
  auVar264 = divps(auVar259,auVar256);
  fVar282 = (float)(~uVar52 & auVar264._0_4_);
  fVar206 = (float)(~uVar53 & auVar264._4_4_);
  fVar294 = (float)(~uVar56 & auVar264._8_4_);
  fVar216 = (float)(~uVar58 & auVar264._12_4_);
  auVar264 = divps(auVar226,auVar256);
  fVar137 = (float)(~uVar52 & auVar264._0_4_);
  fVar162 = (float)(~uVar53 & auVar264._4_4_);
  fVar138 = (float)(~uVar56 & auVar264._8_4_);
  fVar157 = (float)(~uVar58 & auVar264._12_4_);
  auVar264 = divps(auVar266,auVar256);
  fVar163 = (float)(~uVar52 & auVar264._0_4_);
  fVar160 = (float)(~uVar53 & auVar264._4_4_);
  fVar161 = (float)(~uVar56 & auVar264._8_4_);
  fVar172 = (float)(~uVar58 & auVar264._12_4_);
  auVar219._0_4_ = fVar189 * fVar163 + fVar106 * fVar137 + fVar222 * fVar282;
  auVar219._4_4_ = fVar200 * fVar160 + fVar113 * fVar162 + fVar229 * fVar206;
  auVar219._8_4_ = fVar202 * fVar161 + fVar100 * fVar138 + fVar233 * fVar294;
  auVar219._12_4_ = fVar203 * fVar172 + fVar102 * fVar157 + fVar237 * fVar216;
  fVar231 = auVar304._0_4_;
  fVar235 = auVar304._4_4_;
  fVar239 = auVar304._8_4_;
  fVar278 = auVar304._12_4_;
  auVar111._0_4_ =
       (fVar106 * fVar282 - fVar222 * fVar137) * fVar252 +
       (fVar222 * fVar163 - fVar189 * fVar282) * fVar60 +
       (fVar189 * fVar137 - fVar106 * fVar163) * fVar231;
  auVar111._4_4_ =
       (fVar113 * fVar206 - fVar229 * fVar162) * fVar253 +
       (fVar229 * fVar160 - fVar200 * fVar206) * fVar92 +
       (fVar200 * fVar162 - fVar113 * fVar160) * fVar235;
  auVar111._8_4_ =
       (fVar100 * fVar294 - fVar233 * fVar138) * fVar313 +
       (fVar233 * fVar161 - fVar202 * fVar294) * fVar90 +
       (fVar202 * fVar138 - fVar100 * fVar161) * fVar239;
  auVar111._12_4_ =
       (fVar102 * fVar216 - fVar237 * fVar157) * fVar255 +
       (fVar237 * fVar172 - fVar203 * fVar216) * fVar104 +
       (fVar203 * fVar157 - fVar102 * fVar172) * fVar278;
  auVar302 = maxps(auVar219,___xmm_bf800000bf800000bf800000bf800000);
  auVar264 = maxps(auVar111,___xmm_bf800000bf800000bf800000bf800000);
  auVar304 = minps(auVar302,___xmm_3f8000003f8000003f8000003f800000);
  auVar302 = minps(auVar264,___xmm_3f8000003f8000003f8000003f800000);
  fVar201 = auVar304._0_4_;
  fVar205 = auVar304._4_4_;
  fVar213 = auVar304._8_4_;
  fVar215 = auVar304._12_4_;
  fVar96 = auVar302._0_4_;
  fVar97 = auVar302._4_4_;
  fVar101 = auVar302._8_4_;
  fVar103 = auVar302._12_4_;
  auVar260._0_4_ = (fVar60 * fVar163 - fVar252 * fVar137) * fVar201 - fVar282 * fVar96;
  auVar260._4_4_ = (fVar92 * fVar160 - fVar253 * fVar162) * fVar205 - fVar206 * fVar97;
  auVar260._8_4_ = (fVar90 * fVar161 - fVar313 * fVar138) * fVar213 - fVar294 * fVar101;
  auVar260._12_4_ = (fVar104 * fVar172 - fVar255 * fVar157) * fVar215 - fVar216 * fVar103;
  auVar80._0_4_ = (fVar252 * fVar282 - fVar231 * fVar163) * fVar201 - fVar137 * fVar96;
  auVar80._4_4_ = (fVar253 * fVar206 - fVar235 * fVar160) * fVar205 - fVar162 * fVar97;
  auVar80._8_4_ = (fVar313 * fVar294 - fVar239 * fVar161) * fVar213 - fVar138 * fVar101;
  auVar80._12_4_ = (fVar255 * fVar216 - fVar278 * fVar172) * fVar215 - fVar157 * fVar103;
  auVar267._0_4_ = (fVar231 * fVar137 - fVar60 * fVar282) * fVar201 - fVar163 * fVar96;
  auVar267._4_4_ = (fVar235 * fVar162 - fVar92 * fVar206) * fVar205 - fVar160 * fVar97;
  auVar267._8_4_ = (fVar239 * fVar138 - fVar90 * fVar294) * fVar213 - fVar161 * fVar101;
  auVar267._12_4_ = (fVar278 * fVar157 - fVar104 * fVar216) * fVar215 - fVar172 * fVar103;
  auVar124 = divps(auVar260,auVar265);
  auVar264 = divps(auVar80,auVar265);
  auVar265 = divps(auVar267,auVar265);
  fVar282 = (float)(~uVar51 & auVar124._0_4_);
  fVar206 = (float)(~uVar55 & auVar124._4_4_);
  fVar294 = (float)(~uVar54 & auVar124._8_4_);
  fVar216 = (float)(~uVar57 & auVar124._12_4_);
  fVar137 = (float)(~uVar51 & auVar264._0_4_);
  fVar162 = (float)(~uVar55 & auVar264._4_4_);
  fVar138 = (float)(~uVar54 & auVar264._8_4_);
  fVar157 = (float)(~uVar57 & auVar264._12_4_);
  fVar163 = (float)(~uVar51 & auVar265._0_4_);
  fVar160 = (float)(~uVar55 & auVar265._4_4_);
  fVar161 = (float)(~uVar54 & auVar265._8_4_);
  fVar172 = (float)(~uVar57 & auVar265._12_4_);
  auVar227._0_4_ = (fVar252 * fVar106 - fVar60 * fVar189) * fVar201 - fVar222 * fVar96;
  auVar227._4_4_ = (fVar253 * fVar113 - fVar92 * fVar200) * fVar205 - fVar229 * fVar97;
  auVar227._8_4_ = (fVar313 * fVar100 - fVar90 * fVar202) * fVar213 - fVar233 * fVar101;
  auVar227._12_4_ = (fVar255 * fVar102 - fVar104 * fVar203) * fVar215 - fVar237 * fVar103;
  auVar268._0_4_ = (fVar231 * fVar189 - fVar252 * fVar222) * fVar201 - fVar106 * fVar96;
  auVar268._4_4_ = (fVar235 * fVar200 - fVar253 * fVar229) * fVar205 - fVar113 * fVar97;
  auVar268._8_4_ = (fVar239 * fVar202 - fVar313 * fVar233) * fVar213 - fVar100 * fVar101;
  auVar268._12_4_ = (fVar278 * fVar203 - fVar255 * fVar237) * fVar215 - fVar102 * fVar103;
  auVar129._0_4_ = (fVar60 * fVar222 - fVar231 * fVar106) * fVar201 - fVar189 * fVar96;
  auVar129._4_4_ = (fVar92 * fVar229 - fVar235 * fVar113) * fVar205 - fVar200 * fVar97;
  auVar129._8_4_ = (fVar90 * fVar233 - fVar239 * fVar100) * fVar213 - fVar202 * fVar101;
  auVar129._12_4_ = (fVar104 * fVar237 - fVar278 * fVar102) * fVar215 - fVar203 * fVar103;
  auVar265 = divps(auVar227,auVar256);
  auVar124 = divps(auVar268,auVar256);
  auVar264 = divps(auVar129,auVar256);
  fVar278 = (float)(~uVar52 & auVar265._0_4_);
  fVar222 = (float)(~uVar53 & auVar265._4_4_);
  fVar229 = (float)(~uVar56 & auVar265._8_4_);
  fVar233 = (float)(~uVar58 & auVar265._12_4_);
  fVar255 = (float)(~uVar52 & auVar124._0_4_);
  fVar290 = (float)(~uVar53 & auVar124._4_4_);
  fVar295 = (float)(~uVar56 & auVar124._8_4_);
  fVar263 = (float)(~uVar58 & auVar124._12_4_);
  fVar189 = (float)(~uVar52 & auVar264._0_4_);
  fVar200 = (float)(~uVar53 & auVar264._4_4_);
  fVar202 = (float)(~uVar56 & auVar264._8_4_);
  fVar203 = (float)(~uVar58 & auVar264._12_4_);
  fVar237 = fVar158 * fVar137 - fVar62 * fVar282;
  fVar252 = fVar159 * fVar162 - fVar93 * fVar206;
  fVar253 = fVar176 * fVar138 - fVar98 * fVar294;
  fVar313 = fVar223 * fVar157 - fVar105 * fVar216;
  fVar60 = fVar62 * fVar163 - fVar116 * fVar137;
  fVar92 = fVar93 * fVar160 - fVar115 * fVar162;
  fVar90 = fVar98 * fVar161 - fVar142 * fVar138;
  fVar104 = fVar105 * fVar172 - fVar140 * fVar157;
  fVar100 = fVar116 * fVar282 - fVar158 * fVar163;
  fVar158 = fVar115 * fVar206 - fVar159 * fVar160;
  fVar159 = fVar142 * fVar294 - fVar176 * fVar161;
  fVar176 = fVar140 * fVar216 - fVar223 * fVar172;
  fVar223 = fVar230 * fVar282 - fVar137 * fVar178;
  fVar231 = fVar175 * fVar206 - fVar162 * fVar185;
  fVar235 = fVar177 * fVar294 - fVar138 * fVar186;
  fVar239 = fVar238 * fVar216 - fVar157 * fVar188;
  fVar62 = fVar117 * fVar137 - fVar163 * fVar230;
  fVar93 = fVar114 * fVar162 - fVar160 * fVar175;
  fVar98 = fVar173 * fVar138 - fVar161 * fVar177;
  fVar105 = fVar156 * fVar157 - fVar172 * fVar238;
  fVar142 = fVar178 * fVar163 - fVar282 * fVar117;
  fVar138 = fVar185 * fVar160 - fVar206 * fVar114;
  fVar140 = fVar186 * fVar161 - fVar294 * fVar173;
  fVar156 = fVar188 * fVar172 - fVar216 * fVar156;
  fVar114 = fVar224 * fVar255 - fVar61 * fVar278;
  fVar115 = fVar262 * fVar290 - fVar89 * fVar222;
  fVar162 = fVar271 * fVar295 - fVar91 * fVar229;
  fVar173 = fVar274 * fVar263 - fVar94 * fVar233;
  fVar61 = fVar61 * fVar189 - fVar135 * fVar255;
  fVar89 = fVar89 * fVar200 - fVar136 * fVar290;
  fVar91 = fVar91 * fVar202 - fVar143 * fVar295;
  fVar94 = fVar94 * fVar203 - fVar141 * fVar263;
  fVar178 = fVar135 * fVar278 - fVar224 * fVar189;
  fVar185 = fVar136 * fVar222 - fVar262 * fVar200;
  fVar186 = fVar143 * fVar229 - fVar271 * fVar202;
  fVar188 = fVar141 * fVar233 - fVar274 * fVar203;
  fVar106 = fVar249 * fVar278 - fVar255 * fVar248;
  fVar113 = fVar241 * fVar222 - fVar290 * fVar300;
  fVar102 = fVar246 * fVar229 - fVar295 * fVar309;
  fVar116 = fVar254 * fVar233 - fVar263 * fVar312;
  fVar163 = fVar316 * fVar255 - fVar189 * fVar249;
  fVar160 = fVar289 * fVar290 - fVar200 * fVar241;
  fVar161 = fVar293 * fVar295 - fVar202 * fVar246;
  fVar172 = fVar261 * fVar263 - fVar203 * fVar254;
  fVar117 = fVar248 * fVar189 - fVar278 * fVar316;
  fVar135 = fVar300 * fVar200 - fVar222 * fVar289;
  fVar137 = fVar309 * fVar202 - fVar229 * fVar293;
  fVar157 = fVar312 * fVar203 - fVar233 * fVar261;
  fVar230 = fVar117 + fVar100;
  fVar175 = fVar135 + fVar158;
  fVar177 = fVar137 + fVar159;
  fVar238 = fVar157 + fVar176;
  fVar136 = (float)((uint)fVar117 ^ __xmm_80000000800000008000000080000000) - fVar178;
  fVar143 = (float)((uint)fVar135 ^ _UNK_150651574) - fVar185;
  fVar141 = (float)((uint)fVar137 ^ _UNK_150651578) - fVar186;
  fVar157 = (float)((uint)fVar157 ^ _UNK_15065157c) - fVar188;
  fVar178 = fVar178 + fVar142;
  fVar185 = fVar185 + fVar138;
  fVar186 = fVar186 + fVar140;
  fVar188 = fVar188 + fVar156;
  fVar142 = (float)((uint)fVar100 ^ __xmm_80000000800000008000000080000000) - fVar142;
  fVar138 = (float)((uint)fVar158 ^ _UNK_150651574) - fVar138;
  fVar140 = (float)((uint)fVar159 ^ _UNK_150651578) - fVar140;
  fVar156 = (float)((uint)fVar176 ^ _UNK_15065157c) - fVar156;
  fVar176 = fVar106 + fVar237;
  fVar189 = fVar113 + fVar252;
  fVar200 = fVar102 + fVar253;
  fVar202 = fVar116 + fVar313;
  fVar106 = (float)((uint)fVar106 ^ __xmm_80000000800000008000000080000000) - fVar114;
  fVar100 = (float)((uint)fVar113 ^ _UNK_150651574) - fVar115;
  fVar117 = (float)((uint)fVar102 ^ _UNK_150651578) - fVar162;
  fVar135 = (float)((uint)fVar116 ^ _UNK_15065157c) - fVar173;
  fVar114 = fVar114 + fVar223;
  fVar115 = fVar115 + fVar231;
  fVar162 = fVar162 + fVar235;
  fVar173 = fVar173 + fVar239;
  fVar223 = (float)((uint)fVar237 ^ __xmm_80000000800000008000000080000000) - fVar223;
  fVar231 = (float)((uint)fVar252 ^ _UNK_150651574) - fVar231;
  fVar235 = (float)((uint)fVar253 ^ _UNK_150651578) - fVar235;
  fVar239 = (float)((uint)fVar313 ^ _UNK_15065157c) - fVar239;
  fVar113 = fVar163 + fVar60;
  fVar102 = fVar160 + fVar92;
  fVar116 = fVar161 + fVar90;
  fVar137 = fVar172 + fVar104;
  fVar158 = (float)((uint)fVar163 ^ __xmm_80000000800000008000000080000000) - fVar61;
  fVar163 = (float)((uint)fVar160 ^ _UNK_150651574) - fVar89;
  fVar159 = (float)((uint)fVar161 ^ _UNK_150651578) - fVar91;
  fVar160 = (float)((uint)fVar172 ^ _UNK_15065157c) - fVar94;
  fVar61 = fVar61 + fVar62;
  fVar89 = fVar89 + fVar93;
  fVar91 = fVar91 + fVar98;
  fVar94 = fVar94 + fVar105;
  fVar62 = (float)((uint)fVar60 ^ __xmm_80000000800000008000000080000000) - fVar62;
  fVar93 = (float)((uint)fVar92 ^ _UNK_150651574) - fVar93;
  fVar98 = (float)((uint)fVar90 ^ _UNK_150651578) - fVar98;
  fVar105 = (float)((uint)fVar104 ^ _UNK_15065157c) - fVar105;
  auVar242 = insertps(auVar242,*(undefined4 *)(uVar31 + lVar30),0x30);
  auVar256 = insertps(auVar217,*(undefined4 *)(uVar31 + lVar36),0x30);
  auVar265 = insertps(auVar301,*(undefined4 *)(uVar31 + lVar40),0x30);
  auVar217 = divps(auVar302,auVar304);
  auVar168._0_4_ = __xmm_80000000800000008000000080000000 ^ (uint)auVar217._0_4_;
  auVar168._4_4_ = _UNK_150651574 ^ (uint)auVar217._4_4_;
  auVar168._8_4_ = _UNK_150651578 ^ (uint)auVar217._8_4_;
  auVar168._12_4_ = _UNK_15065157c ^ (uint)auVar217._12_4_;
  auVar301 = maxps(auVar168,auVar217);
  uVar51 = -(uint)((float)__xmm_3f8000003f8000003f8000003f800000 < auVar301._0_4_);
  uVar52 = -(uint)(__xmm_3f8000003f8000003f8000003f800000._4_4_ < auVar301._4_4_);
  uVar55 = -(uint)(__xmm_3f8000003f8000003f8000003f800000._8_4_ < auVar301._8_4_);
  uVar53 = -(uint)(__xmm_3f8000003f8000003f8000003f800000._12_4_ < auVar301._12_4_);
  auVar81._4_4_ = uVar52;
  auVar81._0_4_ = uVar51;
  auVar81._8_4_ = uVar55;
  auVar81._12_4_ = uVar53;
  auVar181._0_4_ = uVar51 & auVar166._0_4_;
  auVar181._4_4_ = uVar52 & auVar166._4_4_;
  auVar181._8_4_ = uVar55 & auVar166._8_4_;
  auVar181._12_4_ = uVar53 & auVar166._12_4_;
  iVar25 = movmskps((int)lVar40,auVar181);
  auVar207 = insertps(auVar207,*(undefined4 *)(uVar31 + lVar48),0x30);
  auVar264 = ___xmm_3f8000003f8000003f8000003f800000;
  if (iVar25 != 0) {
    auVar264 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar301);
  }
  auVar264 = blendvps(auVar301,auVar264,auVar81);
  fVar60 = auVar264._0_4_;
  fVar92 = auVar264._4_4_;
  fVar90 = auVar264._8_4_;
  fVar104 = auVar264._12_4_;
  fVar161 = fVar60 * fVar60;
  fVar172 = fVar92 * fVar92;
  fVar203 = fVar90 * fVar90;
  fVar282 = fVar104 * fVar104;
  auVar182._0_4_ =
       (((((((___xmm_bb9918b7bb9918b7bb9918b7bb9918b7 * fVar161 +
             ___xmm_3cc6061b3cc6061b3cc6061b3cc6061b) * fVar161 +
            ___xmm_bd732a49bd732a49bd732a49bd732a49) * fVar161 +
           ___xmm_3dcadb2a3dcadb2a3dcadb2a3dcadb2a) * fVar161 +
          ___xmm_be0f8549be0f8549be0f8549be0f8549) * fVar161 +
         ___xmm_3e4c7b543e4c7b543e4c7b543e4c7b54) * fVar161 +
        ___xmm_beaaa8cfbeaaa8cfbeaaa8cfbeaaa8cf) * fVar161 + ___xmm_3f7ffffe3f7ffffe3f7ffffe3f7ffffe
       ) * fVar60;
  auVar182._4_4_ =
       (((((((_UNK_150b51114 * fVar172 + _UNK_150b51124) * fVar172 + _UNK_150b51134) * fVar172 +
           _UNK_150b51144) * fVar172 + _UNK_150b51154) * fVar172 + _UNK_150b51164) * fVar172 +
        _UNK_150b51174) * fVar172 + _UNK_150b51184) * fVar92;
  auVar182._8_4_ =
       (((((((_UNK_150b51118 * fVar203 + _UNK_150b51128) * fVar203 + _UNK_150b51138) * fVar203 +
           _UNK_150b51148) * fVar203 + _UNK_150b51158) * fVar203 + _UNK_150b51168) * fVar203 +
        _UNK_150b51178) * fVar203 + _UNK_150b51188) * fVar90;
  auVar182._12_4_ =
       (((((((_UNK_150b5111c * fVar282 + _UNK_150b5112c) * fVar282 + _UNK_150b5113c) * fVar282 +
           _UNK_150b5114c) * fVar282 + _UNK_150b5115c) * fVar282 + _UNK_150b5116c) * fVar282 +
        _UNK_150b5117c) * fVar282 + _UNK_150b5118c) * fVar104;
  auVar169._0_4_ = ___xmm_3fc90fdb3fc90fdb3fc90fdb3fc90fdb - auVar182._0_4_;
  auVar169._4_4_ = _UNK_150b51194 - auVar182._4_4_;
  auVar169._8_4_ = _UNK_150b51198 - auVar182._8_4_;
  auVar169._12_4_ = _UNK_150b5119c - auVar182._12_4_;
  auVar264 = blendvps(auVar182,auVar169,auVar81);
  auVar82._4_4_ = -(uint)(auVar217._4_4_ < 0.0);
  auVar82._0_4_ = -(uint)(auVar217._0_4_ < 0.0);
  auVar209._0_4_ = __xmm_80000000800000008000000080000000 ^ auVar264._0_4_;
  auVar209._4_4_ = _UNK_150651574 ^ auVar264._4_4_;
  auVar209._8_4_ = _UNK_150651578 ^ auVar264._8_4_;
  auVar209._12_4_ = _UNK_15065157c ^ auVar264._12_4_;
  auVar82._8_4_ = -(uint)(auVar217._8_4_ < 0.0);
  auVar82._12_4_ = -(uint)(auVar217._12_4_ < 0.0);
  auVar183 = blendvps(auVar264,auVar209,auVar82);
  auVar83._4_4_ = -(uint)(fVar97 < 0.0);
  auVar83._0_4_ = -(uint)(fVar96 < 0.0);
  auVar83._8_4_ = -(uint)(fVar101 < 0.0);
  auVar83._12_4_ = -(uint)(fVar103 < 0.0);
  auVar264 = blendvps(___xmm_40490fdb40490fdb40490fdb40490fdb,
                      ___xmm_c0490fdbc0490fdbc0490fdbc0490fdb,auVar83);
  fVar60 = auVar183._0_4_;
  fVar92 = auVar183._4_4_;
  fVar90 = auVar183._8_4_;
  fVar104 = auVar183._12_4_;
  local_428 = auVar265._0_4_;
  fStack_424 = auVar265._4_4_;
  fStack_420 = auVar265._8_4_;
  fStack_41c = auVar265._12_4_;
  local_418 = auVar242._0_4_;
  fStack_414 = auVar242._4_4_;
  fStack_410 = auVar242._8_4_;
  fStack_40c = auVar242._12_4_;
  local_408 = auVar256._0_4_;
  fStack_404 = auVar256._4_4_;
  fStack_400 = auVar256._8_4_;
  fStack_3fc = auVar256._12_4_;
  auVar84._0_4_ =
       (fVar223 * fVar223 + fVar142 * fVar142 + fVar62 * fVar62) * local_408 +
       (fVar114 * fVar114 + fVar178 * fVar178 + fVar61 * fVar61) * local_418 +
       (fVar176 * fVar176 + fVar230 * fVar230 + fVar113 * fVar113) * local_428;
  auVar84._4_4_ =
       (fVar231 * fVar231 + fVar138 * fVar138 + fVar93 * fVar93) * fStack_404 +
       (fVar115 * fVar115 + fVar185 * fVar185 + fVar89 * fVar89) * fStack_414 +
       (fVar189 * fVar189 + fVar175 * fVar175 + fVar102 * fVar102) * fStack_424;
  auVar84._8_4_ =
       (fVar235 * fVar235 + fVar140 * fVar140 + fVar98 * fVar98) * fStack_400 +
       (fVar162 * fVar162 + fVar186 * fVar186 + fVar91 * fVar91) * fStack_410 +
       (fVar200 * fVar200 + fVar177 * fVar177 + fVar116 * fVar116) * fStack_420;
  auVar84._12_4_ =
       (fVar239 * fVar239 + fVar156 * fVar156 + fVar105 * fVar105) * fStack_3fc +
       (fVar173 * fVar173 + fVar188 * fVar188 + fVar94 * fVar94) * fStack_40c +
       (fVar202 * fVar202 + fVar238 * fVar238 + fVar137 * fVar137) * fStack_41c;
  auVar170._0_4_ = fVar136 * fVar136 + fVar158 * fVar158;
  auVar170._4_4_ = fVar143 * fVar143 + fVar163 * fVar163;
  auVar170._8_4_ = fVar141 * fVar141 + fVar159 * fVar159;
  auVar170._12_4_ = fVar157 * fVar157 + fVar160 * fVar160;
  fVar96 = auVar207._0_4_;
  fVar97 = auVar207._4_4_;
  fVar101 = auVar207._8_4_;
  fVar103 = auVar207._12_4_;
  auVar112._0_4_ = (fVar106 * fVar106 + auVar170._0_4_) * fVar96 + auVar84._0_4_;
  auVar112._4_4_ = (fVar100 * fVar100 + auVar170._4_4_) * fVar97 + auVar84._4_4_;
  auVar112._8_4_ = (fVar117 * fVar117 + auVar170._8_4_) * fVar101 + auVar84._8_4_;
  auVar112._12_4_ = (fVar135 * fVar135 + auVar170._12_4_) * fVar103 + auVar84._12_4_;
  if ((~bVar45 & 9) == 0) {
    auVar170 = *(undefined1 (*) [16])(param_3 + (int)(uVar50 << 2));
    auVar84 = ZEXT416(*(uint *)(param_4 + (longlong)pbVar24));
    pbVar24 = param_4;
  }
  else {
    puVar13 = (uint *)(param_3 + (int)(uVar50 << 2));
    if ((uVar21 & 1) != 0) {
      auVar170 = ZEXT416(*puVar13);
    }
    if ((uVar21 & 2) != 0) {
      auVar170 = insertps(auVar170,puVar13[1],0x10);
    }
    if ((uVar21 & 4) != 0) {
      auVar170 = insertps(auVar170,puVar13[2],0x20);
    }
    if ((uVar21 & 8) != 0) {
      auVar170 = insertps(auVar170,puVar13[3],0x30);
    }
    param_4 = param_4 + (longlong)pbVar24;
    if ((uVar21 & 1) != 0) {
      pbVar24 = (byte *)(ulonglong)*param_4;
      auVar84 = ZEXT116(*param_4);
    }
    if ((uVar21 & 2) != 0) {
      auVar183._8_8_ = auVar84._8_8_;
      auVar183._0_8_ = auVar84._0_8_ & 0xffffffffffff00ff | (ulonglong)param_4[1] << 8;
      auVar84 = pblendw(auVar84,auVar183,0xfd);
      pbVar24 = param_4;
    }
    if ((uVar21 & 4) != 0) {
      pbVar24 = (byte *)(ulonglong)auVar84[3];
      auVar217 = pmovzxwd(auVar84,auVar84);
      auVar84._8_8_ = auVar217._8_8_;
      auVar84._0_8_ =
           auVar217._0_8_ & 0xffffffff0000ffff | (ulonglong)param_4[2] << 0x10 |
           (longlong)pbVar24 << 0x18;
    }
    if ((uVar21 & 8) != 0) {
      bVar45 = auVar84[2];
      auVar217 = pmovzxwd(auVar84,auVar84);
      auVar84._8_8_ = auVar217._8_8_;
      auVar84._0_8_ =
           auVar217._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar45 << 0x10 |
           (ulonglong)param_4[3] << 0x18;
      pbVar24 = param_4;
    }
  }
  auVar210._4_4_ = param_6;
  auVar210._0_4_ = param_6;
  auVar210._8_4_ = param_6;
  auVar210._12_4_ = param_6;
  auVar196._4_4_ = param_5;
  auVar196._0_4_ = param_5;
  auVar196._8_4_ = param_5;
  auVar196._12_4_ = param_5;
  auVar217 = pmovzxbd(auVar183,auVar84 & ___xmm_00000000000000000000000001010101);
  auVar85._4_4_ = -auVar217._4_4_;
  auVar85._0_4_ = -auVar217._0_4_;
  auVar85._8_4_ = -auVar217._8_4_;
  auVar85._12_4_ = SUB124(SUB1612((undefined1  [16])0x0,4),8) - auVar217._12_4_;
  auVar217 = blendvps(auVar196,auVar210,auVar85);
  auVar197._0_4_ =
       auVar217._0_4_ *
       (((float)(auVar264._0_4_ & -(uint)(fVar201 < 0.0)) + fVar60) - auVar170._0_4_);
  auVar197._4_4_ =
       auVar217._4_4_ *
       (((float)(auVar264._4_4_ & -(uint)(fVar205 < 0.0)) + fVar92) - auVar170._4_4_);
  auVar197._8_4_ =
       auVar217._8_4_ *
       (((float)(auVar264._8_4_ & -(uint)(fVar213 < 0.0)) + fVar90) - auVar170._8_4_);
  auVar197._12_4_ =
       auVar217._12_4_ *
       (((float)(auVar264._12_4_ & -(uint)(fVar215 < 0.0)) + fVar104) - auVar170._12_4_);
  auVar264 = maxps(auVar197,___xmm_bf490fdbbf490fdbbf490fdbbf490fdb);
  auVar264 = minps(auVar264,___xmm_3f490fdb3f490fdb3f490fdb3f490fdb);
  auVar264 = divps(auVar264,auVar112);
  fVar60 = (float)(-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 < auVar112._0_4_) &
                  auVar264._0_4_);
  fVar92 = (float)(-(uint)(_UNK_1506895d4 < auVar112._4_4_) & auVar264._4_4_);
  fVar90 = (float)(-(uint)(_UNK_1506895d8 < auVar112._8_4_) & auVar264._8_4_);
  fVar104 = (float)(-(uint)(_UNK_1506895dc < auVar112._12_4_) & auVar264._12_4_);
  auVar130._0_4_ = -(uint)(0.0 < local_428 && bVar15);
  auVar130._4_4_ = -(uint)(0.0 < fStack_424 && bVar16);
  auVar130._8_4_ = -(uint)(0.0 < fStack_420 && bVar17);
  auVar130._12_4_ = -(uint)(0.0 < fStack_41c && bVar18);
  iVar22 = movmskps((int)pbVar24,auVar130);
  iVar25 = 0;
  if (iVar22 != 0) {
    bVar45 = (char)((char)iVar22 << 4) >> 4;
    fVar161 = local_428 * fVar60;
    fStack_424 = fStack_424 * fVar92;
    fStack_420 = fStack_420 * fVar90;
    fStack_41c = fStack_41c * fVar104;
    local_3b8._0_4_ = (float)local_3b8._0_4_ - fVar113 * fVar161;
    local_3b8._4_4_ = fVar240 - fVar102 * fStack_424;
    fStack_3b0 = fVar245 - fVar116 * fStack_420;
    fStack_3ac = fVar247 - fVar137 * fStack_41c;
    if ((bVar45 & 1) != 0) {
      *(undefined4 *)(param_1 + auVar208._0_4_) = local_3b8._0_4_;
    }
    if ((bVar45 & 2) != 0) {
      uVar14 = extractps(_local_3b8,1);
      *(undefined8 *)(param_1 + auVar208._4_4_) = uVar14;
    }
    if ((bVar45 & 4) != 0) {
      uVar14 = extractps(_local_3b8,2);
      *(undefined8 *)(param_1 + auVar208._8_4_) = uVar14;
    }
    if ((char)bVar45 < '\0') {
      uVar14 = extractps(_local_3b8,3);
      *(undefined8 *)(param_1 + auVar208._12_4_) = uVar14;
    }
    local_3e8 = local_3e8 - fVar230 * fVar161;
    auVar220._4_4_ = fStack_3e4 - fVar175 * fStack_424;
    auVar220._0_4_ = local_3e8;
    auVar220._8_4_ = fStack_3e0 - fVar177 * fStack_420;
    auVar220._12_4_ = fStack_3dc - fVar238 * fStack_41c;
    if ((bVar45 & 1) != 0) {
      *(float *)(param_1 + 4 + (longlong)auVar208._0_4_) = local_3e8;
    }
    if ((bVar45 & 2) != 0) {
      uVar14 = extractps(auVar220,1);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar208._4_4_) = uVar14;
    }
    if ((bVar45 & 4) != 0) {
      uVar14 = extractps(auVar220,2);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar208._8_4_) = uVar14;
    }
    if ((char)bVar45 < '\0') {
      uVar14 = extractps(auVar220,3);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar208._12_4_) = uVar14;
    }
    local_3a8._0_4_ = (float)local_3a8._0_4_ - fVar176 * fVar161;
    local_3a8._4_4_ = fVar174 - fVar189 * fStack_424;
    fStack_3a0 = fVar234 - fVar200 * fStack_420;
    fStack_39c = fVar59 - fVar202 * fStack_41c;
    if ((bVar45 & 1) != 0) {
      *(undefined4 *)(param_1 + 8 + (longlong)auVar208._0_4_) = local_3a8._0_4_;
    }
    if ((bVar45 & 2) != 0) {
      uVar14 = extractps(_local_3a8,1);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar208._4_4_) = uVar14;
    }
    if ((bVar45 & 4) != 0) {
      uVar14 = extractps(_local_3a8,2);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar208._8_4_) = uVar14;
    }
    if ((char)bVar45 < '\0') {
      uVar14 = extractps(_local_3a8,3);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar208._12_4_) = uVar14;
    }
    if ((bVar45 & 1) != 0) {
      *(float *)(param_1 + 0xc + (longlong)auVar208._0_4_) = local_428;
    }
    if ((bVar45 & 2) != 0) {
      uVar14 = extractps(auVar265,1);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar208._4_4_) = uVar14;
    }
    if ((bVar45 & 4) != 0) {
      uVar14 = extractps(auVar265,2);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar208._8_4_) = uVar14;
    }
    iVar25 = CONCAT31((int3)((uint)iVar22 >> 8),bVar45);
    if ((char)bVar45 < '\0') {
      uVar14 = extractps(auVar265,3);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar208._12_4_) = uVar14;
      iVar25 = auVar208._12_4_;
    }
  }
  auVar86._0_4_ = -(uint)(0.0 < local_418 && bVar15);
  auVar86._4_4_ = -(uint)(0.0 < fStack_414 && bVar16);
  auVar86._8_4_ = -(uint)(0.0 < fStack_410 && bVar17);
  auVar86._12_4_ = -(uint)(0.0 < fStack_40c && bVar18);
  iVar22 = movmskps(iVar25,auVar86);
  iVar25 = 0;
  if (iVar22 != 0) {
    bVar45 = (char)((char)iVar22 << 4) >> 4;
    fVar59 = local_418 * fVar60;
    fStack_414 = fStack_414 * fVar92;
    fStack_410 = fStack_410 * fVar90;
    fStack_40c = fStack_40c * fVar104;
    auVar211._0_4_ = local_398 - fVar61 * fVar59;
    auVar211._4_4_ = fStack_394 - fVar89 * fStack_414;
    auVar211._8_4_ = fStack_390 - fVar91 * fStack_410;
    auVar211._12_4_ = fStack_38c - fVar94 * fStack_40c;
    if ((bVar45 & 1) != 0) {
      *(float *)(param_1 + auVar194._0_4_) = auVar211._0_4_;
    }
    if ((bVar45 & 2) == 0) {
      if ((bVar45 & 4) != 0) goto LAB_140067d06;
LAB_1400677fb:
      if ((char)bVar45 < '\0') goto LAB_140067d1c;
LAB_140067806:
      auVar198._0_4_ = fVar95 - fVar178 * fVar59;
      auVar198._4_4_ = fVar139 - fVar185 * fStack_414;
      auVar198._8_4_ = fVar99 - fVar186 * fStack_410;
      auVar198._12_4_ = fVar155 - fVar188 * fStack_40c;
    }
    else {
      uVar14 = extractps(auVar211,1);
      *(undefined8 *)(param_1 + auVar194._4_4_) = uVar14;
      if ((bVar45 & 4) == 0) goto LAB_1400677fb;
LAB_140067d06:
      uVar14 = extractps(auVar211,2);
      *(undefined8 *)(param_1 + auVar194._8_4_) = uVar14;
      if (-1 < (char)bVar45) goto LAB_140067806;
LAB_140067d1c:
      uVar14 = extractps(auVar211,3);
      *(undefined8 *)(param_1 + auVar194._12_4_) = uVar14;
      auVar198._0_4_ = fVar95 - fVar178 * fVar59;
      auVar198._4_4_ = fVar139 - fVar185 * fStack_414;
      auVar198._8_4_ = fVar99 - fVar186 * fStack_410;
      auVar198._12_4_ = fVar155 - fVar188 * fStack_40c;
    }
    if ((bVar45 & 1) != 0) {
      *(int *)(param_1 + 4 + (longlong)auVar194._0_4_) = auVar198._0_4_;
    }
    if ((bVar45 & 2) != 0) {
      uVar14 = extractps(auVar198,1);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar194._4_4_) = uVar14;
    }
    if ((bVar45 & 4) != 0) {
      uVar14 = extractps(auVar198,2);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar194._8_4_) = uVar14;
    }
    if ((char)bVar45 < '\0') {
      uVar14 = extractps(auVar198,3);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar194._12_4_) = uVar14;
      auVar131._0_4_ = local_3f8 - fVar114 * fVar59;
      auVar131._4_4_ = fStack_3f4 - fVar115 * fStack_414;
      auVar131._8_4_ = fStack_3f0 - fVar162 * fStack_410;
      auVar131._12_4_ = fStack_3ec - fVar173 * fStack_40c;
    }
    else {
      auVar131._0_4_ = local_3f8 - fVar114 * fVar59;
      auVar131._4_4_ = fStack_3f4 - fVar115 * fStack_414;
      auVar131._8_4_ = fStack_3f0 - fVar162 * fStack_410;
      auVar131._12_4_ = fStack_3ec - fVar173 * fStack_40c;
    }
    if ((bVar45 & 1) != 0) {
      *(int *)(param_1 + 8 + (longlong)auVar194._0_4_) = auVar131._0_4_;
    }
    if ((bVar45 & 2) != 0) {
      uVar14 = extractps(auVar131,1);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar194._4_4_) = uVar14;
    }
    if ((bVar45 & 4) != 0) {
      uVar14 = extractps(auVar131,2);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar194._8_4_) = uVar14;
    }
    if ((char)bVar45 < '\0') {
      uVar14 = extractps(auVar131,3);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar194._12_4_) = uVar14;
    }
    if ((bVar45 & 1) != 0) {
      *(float *)(param_1 + 0xc + (longlong)auVar194._0_4_) = local_418;
    }
    if ((bVar45 & 2) != 0) {
      uVar14 = extractps(auVar242,1);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar194._4_4_) = uVar14;
    }
    if ((bVar45 & 4) != 0) {
      uVar14 = extractps(auVar242,2);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar194._8_4_) = uVar14;
    }
    iVar25 = CONCAT31((int3)((uint)iVar22 >> 8),bVar45);
    if ((char)bVar45 < '\0') {
      uVar14 = extractps(auVar242,3);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar194._12_4_) = uVar14;
      iVar25 = auVar194._12_4_;
    }
  }
  auVar132._0_4_ = -(uint)(0.0 < local_408 && bVar15);
  auVar132._4_4_ = -(uint)(0.0 < fStack_404 && bVar16);
  auVar132._8_4_ = -(uint)(0.0 < fStack_400 && bVar17);
  auVar132._12_4_ = -(uint)(0.0 < fStack_3fc && bVar18);
  iVar22 = movmskps(iVar25,auVar132);
  iVar25 = 0;
  if (iVar22 == 0) goto LAB_1400679b8;
  bVar45 = (char)((char)iVar22 << 4) >> 4;
  fVar59 = local_408 * fVar60;
  fStack_404 = fStack_404 * fVar92;
  fStack_400 = fStack_400 * fVar90;
  fStack_3fc = fStack_3fc * fVar104;
  local_2d8 = local_2d8 - fVar62 * fVar59;
  auVar154._4_4_ = fStack_2d4 - fVar93 * fStack_404;
  auVar154._0_4_ = local_2d8;
  auVar154._8_4_ = fStack_2d0 - fVar98 * fStack_400;
  auVar154._12_4_ = fStack_2cc - fVar105 * fStack_3fc;
  if ((bVar45 & 1) != 0) {
    *(float *)(param_1 + auVar286._0_4_) = local_2d8;
  }
  if ((bVar45 & 2) == 0) {
    if ((bVar45 & 4) != 0) goto LAB_140067d87;
LAB_14006791c:
    if ((char)bVar45 < '\0') goto LAB_140067d9e;
LAB_140067928:
    auVar199._0_4_ = fVar221 - fVar142 * fVar59;
    auVar199._4_4_ = fVar228 - fVar138 * fStack_404;
    auVar199._8_4_ = fVar232 - fVar140 * fStack_400;
    auVar199._12_4_ = fVar236 - fVar156 * fStack_3fc;
  }
  else {
    uVar14 = extractps(auVar154,1);
    *(undefined8 *)(param_1 + auVar286._4_4_) = uVar14;
    if ((bVar45 & 4) == 0) goto LAB_14006791c;
LAB_140067d87:
    uVar14 = extractps(auVar154,2);
    *(undefined8 *)(param_1 + auVar286._8_4_) = uVar14;
    if (-1 < (char)bVar45) goto LAB_140067928;
LAB_140067d9e:
    uVar14 = extractps(auVar154,3);
    *(undefined8 *)(param_1 + auVar286._12_4_) = uVar14;
    auVar199._0_4_ = fVar221 - fVar142 * fVar59;
    auVar199._4_4_ = fVar228 - fVar138 * fStack_404;
    auVar199._8_4_ = fVar232 - fVar140 * fStack_400;
    auVar199._12_4_ = fVar236 - fVar156 * fStack_3fc;
  }
  if ((bVar45 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar286._0_4_) = auVar199._0_4_;
  }
  if ((bVar45 & 2) != 0) {
    uVar14 = extractps(auVar199,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar286._4_4_) = uVar14;
  }
  if ((bVar45 & 4) != 0) {
    uVar14 = extractps(auVar199,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar286._8_4_) = uVar14;
  }
  if ((char)bVar45 < '\0') {
    uVar14 = extractps(auVar199,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar286._12_4_) = uVar14;
    auVar184._0_4_ = fVar190 - fVar223 * fVar59;
    auVar184._4_4_ = fVar204 - fVar231 * fStack_404;
    auVar184._8_4_ = fVar212 - fVar235 * fStack_400;
    auVar184._12_4_ = fVar214 - fVar239 * fStack_3fc;
  }
  else {
    auVar184._0_4_ = fVar190 - fVar223 * fVar59;
    auVar184._4_4_ = fVar204 - fVar231 * fStack_404;
    auVar184._8_4_ = fVar212 - fVar235 * fStack_400;
    auVar184._12_4_ = fVar214 - fVar239 * fStack_3fc;
  }
  if ((bVar45 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar286._0_4_) = auVar184._0_4_;
  }
  if ((bVar45 & 2) != 0) {
    uVar14 = extractps(auVar184,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar286._4_4_) = uVar14;
  }
  if ((bVar45 & 4) != 0) {
    uVar14 = extractps(auVar184,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar286._8_4_) = uVar14;
  }
  if ((char)bVar45 < '\0') {
    uVar14 = extractps(auVar184,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar286._12_4_) = uVar14;
  }
  if ((bVar45 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar286._0_4_) = local_408;
  }
  if ((bVar45 & 2) != 0) {
    uVar14 = extractps(auVar256,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar286._4_4_) = uVar14;
  }
  if ((bVar45 & 4) != 0) {
    uVar14 = extractps(auVar256,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar286._8_4_) = uVar14;
  }
  iVar25 = CONCAT31((int3)((uint)iVar22 >> 8),bVar45);
  if ((char)bVar45 < '\0') {
    uVar14 = extractps(auVar256,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar286._12_4_) = uVar14;
    iVar25 = auVar286._12_4_;
  }
LAB_1400679b8:
  auVar87._0_4_ = -(uint)(0.0 < fVar96 && bVar15);
  auVar87._4_4_ = -(uint)(0.0 < fVar97 && bVar16);
  auVar87._8_4_ = -(uint)(0.0 < fVar101 && bVar17);
  auVar87._12_4_ = -(uint)(0.0 < fVar103 && bVar18);
  iVar25 = movmskps(iVar25,auVar87);
  if (iVar25 == 0) {
    return;
  }
  bVar45 = (char)((char)iVar25 << 4) >> 4;
  fVar60 = fVar60 * fVar96;
  fVar92 = fVar92 * fVar97;
  fVar90 = fVar90 * fVar101;
  fVar104 = fVar104 * fVar103;
  auVar171._0_4_ = (float)local_2c8._0_4_ - fVar158 * fVar60;
  auVar171._4_4_ = (float)local_2c8._4_4_ - fVar163 * fVar92;
  auVar171._8_4_ = fStack_2c0 - fVar159 * fVar90;
  auVar171._12_4_ = fStack_2bc - fVar160 * fVar104;
  if ((bVar45 & 1) != 0) {
    *(float *)(param_1 + auVar150._0_4_) = auVar171._0_4_;
  }
  if ((bVar45 & 2) != 0) {
    uVar14 = extractps(auVar171,1);
    *(undefined8 *)(param_1 + auVar150._4_4_) = uVar14;
  }
  if ((bVar45 & 4) != 0) {
    uVar14 = extractps(auVar171,2);
    *(undefined8 *)(param_1 + auVar150._8_4_) = uVar14;
  }
  if ((char)bVar45 < '\0') {
    uVar14 = extractps(auVar171,3);
    *(undefined8 *)(param_1 + auVar150._12_4_) = uVar14;
    auVar133._0_4_ = local_308 - fVar136 * fVar60;
    auVar133._4_4_ = fStack_304 - fVar143 * fVar92;
    auVar133._8_4_ = fStack_300 - fVar141 * fVar90;
    auVar133._12_4_ = fStack_2fc - fVar157 * fVar104;
  }
  else {
    auVar133._0_4_ = local_308 - fVar136 * fVar60;
    auVar133._4_4_ = fStack_304 - fVar143 * fVar92;
    auVar133._8_4_ = fStack_300 - fVar141 * fVar90;
    auVar133._12_4_ = fStack_2fc - fVar157 * fVar104;
  }
  if ((bVar45 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar150._0_4_) = auVar133._0_4_;
  }
  if ((bVar45 & 2) != 0) {
    uVar14 = extractps(auVar133,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar150._4_4_) = uVar14;
  }
  if ((bVar45 & 4) != 0) {
    uVar14 = extractps(auVar133,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar150._8_4_) = uVar14;
  }
  if ((char)bVar45 < '\0') {
    uVar14 = extractps(auVar133,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar150._12_4_) = uVar14;
    auVar88._0_4_ = local_348 - fVar106 * fVar60;
    auVar88._4_4_ = fStack_344 - fVar100 * fVar92;
    auVar88._8_4_ = fStack_340 - fVar117 * fVar90;
    auVar88._12_4_ = fStack_33c - fVar135 * fVar104;
  }
  else {
    auVar88._0_4_ = local_348 - fVar106 * fVar60;
    auVar88._4_4_ = fStack_344 - fVar100 * fVar92;
    auVar88._8_4_ = fStack_340 - fVar117 * fVar90;
    auVar88._12_4_ = fStack_33c - fVar135 * fVar104;
  }
  if ((bVar45 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar150._0_4_) = auVar88._0_4_;
  }
  if ((bVar45 & 2) != 0) {
    uVar14 = extractps(auVar88,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar150._4_4_) = uVar14;
  }
  if ((bVar45 & 4) != 0) {
    uVar14 = extractps(auVar88,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar150._8_4_) = uVar14;
  }
  if ((char)bVar45 < '\0') {
    uVar14 = extractps(auVar88,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar150._12_4_) = uVar14;
  }
  if ((bVar45 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar150._0_4_) = fVar96;
  }
  if ((bVar45 & 2) != 0) {
    uVar14 = extractps(auVar207,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar150._4_4_) = uVar14;
  }
  if ((bVar45 & 4) != 0) {
    uVar14 = extractps(auVar207,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar150._8_4_) = uVar14;
  }
  if ((char)bVar45 < '\0') {
    uVar14 = extractps(auVar207,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar150._12_4_) = uVar14;
  }
  return;
}

// ApplyBendingConstraintsWithMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector4_5D__3E_un_3C_Cunf_3E_un_3C_Cunb_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cuni_sse4 @ 1400680d0

/* WARNING: Removing unreachable block (ram,0x000140069dc8) */
/* WARNING: Removing unreachable block (ram,0x000140069edb) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyBendingConstraintsWithMaps___un_3C_s_5B_unFVector4f_5D__3E_un_3C_s_5B__c_unFIntVector4_5D__3E_un_3C_Cunf_3E_un_3C_Cunb_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cunbun_3C_CunT_3E_un_3C_Cunf_3E_Cuni_sse4
               (longlong param_1,longlong param_2,longlong param_3,byte *param_4,byte param_5,
               longlong param_6,longlong param_7,byte param_8,longlong param_9,longlong param_10,
               uint param_11)

{
  int *piVar1;
  float *pfVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  uint *puVar13;
  undefined8 uVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  byte bVar19;
  int iVar20;
  longlong lVar21;
  byte *pbVar22;
  int iVar23;
  longlong lVar24;
  undefined1 (*pauVar25) [16];
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  byte bVar29;
  uint unaff_ESI;
  int iVar30;
  uint uVar31;
  longlong lVar32;
  longlong lVar33;
  ulonglong uVar34;
  longlong lVar35;
  longlong lVar36;
  byte bVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  longlong lVar42;
  longlong lVar43;
  longlong lVar44;
  longlong lVar45;
  longlong lVar46;
  ulonglong uVar47;
  longlong lVar48;
  longlong lVar49;
  bool bVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  undefined4 uVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar90;
  float fVar91;
  float fVar96;
  float fVar97;
  float fVar101;
  float fVar102;
  undefined1 auVar67 [16];
  float fVar92;
  float fVar98;
  float fVar103;
  float fVar104;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar93;
  float fVar99;
  float fVar105;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar94;
  float fVar106;
  undefined1 auVar79 [16];
  float fVar95;
  float fVar100;
  float fVar107;
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
  float fVar121;
  float fVar122;
  float fVar123;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
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
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  uint uVar144;
  float fVar148;
  undefined1 auVar129 [16];
  float fVar145;
  float fVar146;
  float fVar149;
  float fVar150;
  float fVar151;
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  float fVar147;
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  float fVar152;
  float fVar153;
  float fVar164;
  float fVar165;
  float fVar166;
  float fVar167;
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  float fVar168;
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined4 uVar169;
  float fVar170;
  float fVar171;
  float fVar172;
  float fVar178;
  float fVar179;
  float fVar181;
  float fVar182;
  float fVar184;
  float fVar185;
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  float fVar180;
  float fVar183;
  float fVar186;
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  float fVar191;
  float fVar192;
  float fVar199;
  float fVar201;
  float fVar202;
  undefined1 auVar193 [16];
  float fVar200;
  float fVar204;
  float fVar205;
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  float fVar206;
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  float fVar203;
  float fVar207;
  float fVar208;
  undefined1 auVar198 [16];
  float fVar209;
  float fVar215;
  float fVar216;
  float fVar218;
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  float fVar217;
  float fVar219;
  undefined1 auVar214 [16];
  float fVar220;
  float fVar222;
  float fVar223;
  float fVar234;
  float fVar239;
  undefined1 auVar224 [16];
  float fVar221;
  float fVar235;
  float fVar236;
  float fVar240;
  float fVar241;
  float fVar244;
  float fVar245;
  float fVar246;
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar228 [16];
  undefined1 auVar229 [16];
  float fVar237;
  float fVar238;
  float fVar242;
  float fVar243;
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  undefined1 auVar233 [16];
  float fVar247;
  float fVar255;
  float fVar257;
  undefined1 auVar249 [16];
  float fVar248;
  float fVar256;
  float fVar258;
  undefined1 auVar250 [16];
  undefined1 auVar251 [16];
  undefined1 auVar252 [16];
  undefined1 auVar253 [16];
  undefined1 auVar254 [16];
  float fVar259;
  float fVar264;
  float fVar265;
  undefined1 auVar260 [16];
  float fVar266;
  undefined1 auVar261 [16];
  undefined1 auVar262 [16];
  undefined1 auVar263 [16];
  float fVar267;
  float fVar268;
  float fVar271;
  float fVar272;
  float fVar273;
  undefined1 auVar269 [16];
  undefined1 auVar270 [16];
  float fVar274;
  float fVar280;
  float fVar282;
  undefined1 auVar276 [16];
  float fVar275;
  float fVar281;
  float fVar285;
  float fVar286;
  undefined1 auVar277 [16];
  undefined1 auVar278 [16];
  float fVar283;
  float fVar284;
  float fVar287;
  undefined1 auVar279 [16];
  float fVar288;
  float fVar294;
  float fVar295;
  undefined1 auVar289 [16];
  float fVar296;
  undefined1 auVar290 [16];
  undefined1 auVar291 [16];
  undefined1 auVar292 [16];
  undefined1 auVar293 [16];
  float fVar297;
  float fVar298;
  float fVar299;
  float fVar305;
  float fVar308;
  undefined1 auVar300 [16];
  float fVar306;
  float fVar307;
  float fVar309;
  float fVar310;
  float fVar311;
  float fVar312;
  undefined1 auVar301 [16];
  undefined1 auVar302 [16];
  undefined1 auVar303 [16];
  undefined1 auVar304 [16];
  float fVar313;
  float fVar315;
  float fVar321;
  float fVar323;
  undefined1 auVar316 [16];
  undefined1 auVar317 [16];
  float fVar314;
  float fVar322;
  float fVar324;
  float fVar325;
  undefined1 auVar318 [16];
  undefined1 auVar319 [16];
  undefined1 auVar320 [16];
  undefined1 local_4a8 [8];
  float fStack_4a0;
  float fStack_49c;
  float local_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  float local_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  float local_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float local_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  undefined1 local_408 [8];
  float fStack_400;
  float fStack_3fc;
  undefined1 local_3f8 [8];
  float fStack_3f0;
  float fStack_3ec;
  undefined1 local_3e8 [8];
  float fStack_3e0;
  float fStack_3dc;
  float local_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float local_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  float local_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float local_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  undefined4 local_268;
  undefined4 local_258;
  
  uVar31 = param_11 + 3;
  if (-1 < (int)param_11) {
    uVar31 = param_11;
  }
  if ((int)(uVar31 & 0xfffffffc) < 1) {
    uVar34 = 0;
    if ((int)param_11 < 1) {
      return;
    }
  }
  else {
    uVar47 = 0;
    uVar34 = 0;
    auVar67 = ___xmm_3f8000003f8000003f8000003f800000;
    do {
      auVar279 = ___xmm_3f8000003f8000003f8000003f800000;
      uVar61 = 0;
      if ((param_5 & 1) != 0) {
        uVar61 = *(undefined4 *)(param_6 + uVar34);
      }
      piVar1 = (int *)(param_2 + uVar47 * 4);
      piVar3 = (int *)(param_2 + 0x10 + uVar47 * 4);
      piVar4 = (int *)(param_2 + 0x20 + uVar47 * 4);
      piVar5 = (int *)(param_2 + 0x30 + uVar47 * 4);
      iVar23 = *piVar5;
      iVar20 = piVar5[2];
      uVar169 = 0;
      if ((param_8 & 1) != 0) {
        uVar169 = *(undefined4 *)(param_9 + uVar34);
      }
      lVar45 = (longlong)(piVar1[1] << 4);
      lVar28 = (longlong)(piVar3[1] * 0x10);
      lVar48 = (longlong)(piVar4[1] << 4);
      lVar46 = (longlong)(piVar5[1] << 4);
      auVar316 = insertps(ZEXT416(*(uint *)(param_1 + lVar45)),*(undefined4 *)(param_1 + lVar28),
                          0x10);
      auVar316 = insertps(auVar316,*(undefined4 *)(param_1 + lVar48),0x20);
      auVar317 = insertps(auVar316,*(undefined4 *)(param_1 + lVar46),0x30);
      auVar316 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar45)),
                          *(undefined4 *)(param_1 + 4 + lVar28),0x10);
      auVar316 = insertps(auVar316,*(undefined4 *)(param_1 + 4 + lVar48),0x20);
      auVar300 = insertps(auVar316,*(undefined4 *)(param_1 + 4 + lVar46),0x30);
      auVar316 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar45)),
                          *(undefined4 *)(param_1 + 8 + lVar28),0x10);
      auVar316 = insertps(auVar316,*(undefined4 *)(param_1 + 8 + lVar48),0x20);
      auVar276 = insertps(auVar316,*(undefined4 *)(param_1 + 8 + lVar46),0x30);
      uVar144 = piVar3[2] * 0x10;
      lVar49 = (longlong)(piVar1[2] << 4);
      lVar41 = (longlong)(int)uVar144;
      lVar35 = (longlong)(piVar4[2] << 4);
      lVar38 = (longlong)(iVar20 << 4);
      auVar316 = insertps(ZEXT416(*(uint *)(param_1 + lVar49)),*(undefined4 *)(param_1 + lVar41),
                          0x10);
      auVar316 = insertps(auVar316,*(undefined4 *)(param_1 + lVar35),0x20);
      auVar193 = insertps(auVar316,*(undefined4 *)(param_1 + lVar38),0x30);
      auVar316 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar49)),
                          *(undefined4 *)(param_1 + 4 + lVar41),0x10);
      auVar316 = insertps(auVar316,*(undefined4 *)(param_1 + 4 + lVar35),0x20);
      auVar129 = insertps(auVar316,*(undefined4 *)(param_1 + 4 + lVar38),0x30);
      lVar39 = (longlong)(*piVar1 << 4);
      lVar32 = (longlong)(*piVar3 * 0x10);
      lVar42 = (longlong)(*piVar4 << 4);
      lVar24 = (longlong)(iVar23 << 4);
      auVar316 = insertps(ZEXT416(*(uint *)(param_1 + lVar39)),*(undefined4 *)(param_1 + lVar32),
                          0x10);
      auVar316 = insertps(auVar316,*(undefined4 *)(param_1 + lVar42),0x20);
      auVar316 = insertps(auVar316,*(undefined4 *)(param_1 + lVar24),0x30);
      auVar224 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar39)),
                          *(undefined4 *)(param_1 + 4 + lVar32),0x10);
      auVar224 = insertps(auVar224,*(undefined4 *)(param_1 + 4 + lVar42),0x20);
      auVar224 = insertps(auVar224,*(undefined4 *)(param_1 + 4 + lVar24),0x30);
      auVar249 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar39)),
                          *(undefined4 *)(param_1 + 8 + lVar32),0x10);
      auVar249 = insertps(auVar249,*(undefined4 *)(param_1 + 8 + lVar42),0x20);
      auVar249 = insertps(auVar249,*(undefined4 *)(param_1 + 8 + lVar24),0x30);
      fVar313 = auVar317._0_4_;
      fVar321 = auVar317._4_4_;
      fVar324 = auVar317._12_4_;
      fVar217 = auVar316._0_4_;
      auVar260._0_4_ = fVar313 - fVar217;
      fVar219 = auVar316._4_4_;
      auVar260._4_4_ = fVar321 - fVar219;
      fVar223 = auVar316._8_4_;
      fVar284 = auVar317._8_4_;
      auVar260._8_4_ = fVar284 - fVar223;
      fVar238 = auVar316._12_4_;
      auVar260._12_4_ = fVar324 - fVar238;
      fVar297 = auVar300._0_4_;
      fVar305 = auVar300._4_4_;
      fVar310 = auVar300._12_4_;
      fVar243 = auVar224._0_4_;
      auVar261._0_4_ = fVar297 - fVar243;
      fVar234 = auVar224._4_4_;
      auVar261._4_4_ = fVar305 - fVar234;
      fVar237 = auVar300._8_4_;
      fVar239 = auVar224._8_4_;
      auVar261._8_4_ = fVar237 - fVar239;
      fVar244 = auVar224._12_4_;
      auVar261._12_4_ = fVar310 - fVar244;
      fVar274 = auVar276._0_4_;
      fVar280 = auVar276._4_4_;
      fVar285 = auVar276._12_4_;
      fVar247 = auVar249._0_4_;
      auVar269._0_4_ = fVar274 - fVar247;
      fVar255 = auVar249._4_4_;
      auVar269._4_4_ = fVar280 - fVar255;
      fVar192 = auVar276._8_4_;
      fVar268 = auVar249._8_4_;
      auVar269._8_4_ = fVar192 - fVar268;
      fVar315 = auVar249._12_4_;
      auVar269._12_4_ = fVar285 - fVar315;
      auVar316._0_4_ = auVar260._0_4_ * auVar260._0_4_;
      auVar316._4_4_ = auVar260._4_4_ * auVar260._4_4_;
      auVar316._8_4_ = auVar260._8_4_ * auVar260._8_4_;
      auVar316._12_4_ = auVar260._12_4_ * auVar260._12_4_;
      auVar289._0_4_ =
           auVar269._0_4_ * auVar269._0_4_ + auVar261._0_4_ * auVar261._0_4_ + auVar316._0_4_;
      auVar289._4_4_ =
           auVar269._4_4_ * auVar269._4_4_ + auVar261._4_4_ * auVar261._4_4_ + auVar316._4_4_;
      auVar289._8_4_ =
           auVar269._8_4_ * auVar269._8_4_ + auVar261._8_4_ * auVar261._8_4_ + auVar316._8_4_;
      auVar289._12_4_ =
           auVar269._12_4_ * auVar269._12_4_ + auVar261._12_4_ * auVar261._12_4_ + auVar316._12_4_;
      auVar316 = sqrtps(auVar316,auVar289);
      uVar51 = -(uint)(auVar289._0_4_ <= ___xmm_00800000008000000080000000800000);
      uVar52 = -(uint)(auVar289._4_4_ <= _UNK_1508be494);
      uVar53 = -(uint)(auVar289._8_4_ <= _UNK_1508be498);
      uVar56 = -(uint)(auVar289._12_4_ <= _UNK_1508be49c);
      auVar224._4_4_ = uVar52;
      auVar224._0_4_ = uVar51;
      auVar276 = divps(auVar260,auVar316);
      auVar249 = divps(auVar261,auVar316);
      auVar316 = divps(auVar269,auVar316);
      auVar224._8_4_ = uVar53;
      auVar224._12_4_ = uVar56;
      auVar276 = blendvps(auVar276,auVar67,auVar224);
      fVar62 = (float)(~uVar51 & auVar249._0_4_);
      fVar90 = (float)(~uVar52 & auVar249._4_4_);
      fVar96 = (float)(~uVar53 & auVar249._8_4_);
      fVar101 = (float)(~uVar56 & auVar249._12_4_);
      fVar288 = (float)(~uVar51 & auVar316._0_4_);
      fVar294 = (float)(~uVar52 & auVar316._4_4_);
      fVar295 = (float)(~uVar53 & auVar316._8_4_);
      fVar296 = (float)(~uVar56 & auVar316._12_4_);
      fVar203 = auVar193._0_4_;
      fVar63 = fVar217 - fVar203;
      fVar199 = auVar193._4_4_;
      fVar91 = fVar219 - fVar199;
      fVar287 = auVar193._8_4_;
      fVar97 = fVar223 - fVar287;
      fVar204 = auVar193._12_4_;
      fVar102 = fVar238 - fVar204;
      fVar124 = auVar129._0_4_;
      fVar152 = fVar243 - fVar124;
      fVar153 = auVar129._4_4_;
      fVar164 = fVar234 - fVar153;
      fVar168 = auVar129._8_4_;
      fVar165 = fVar239 - fVar168;
      fVar201 = auVar129._12_4_;
      fVar166 = fVar244 - fVar201;
      fVar170 = fVar313 - fVar203;
      fVar178 = fVar321 - fVar199;
      fVar181 = fVar284 - fVar287;
      fVar184 = fVar324 - fVar204;
      fVar171 = fVar297 - fVar124;
      fVar179 = fVar305 - fVar153;
      fVar182 = fVar237 - fVar168;
      fVar185 = fVar310 - fVar201;
      auVar317._0_4_ = fVar171 * fVar63 - fVar170 * fVar152;
      auVar317._4_4_ = fVar179 * fVar91 - fVar178 * fVar164;
      auVar317._8_4_ = fVar182 * fVar97 - fVar181 * fVar165;
      auVar317._12_4_ = fVar185 * fVar102 - fVar184 * fVar166;
      auVar67 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar49)),
                         *(undefined4 *)(param_1 + 8 + lVar41),0x10);
      auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + 8 + lVar35),0x20);
      auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + 8 + lVar38),0x30);
      fVar66 = auVar67._0_4_;
      fVar125 = fVar247 - fVar66;
      fVar100 = auVar67._4_4_;
      fVar145 = fVar255 - fVar100;
      fVar121 = auVar67._8_4_;
      fVar148 = fVar268 - fVar121;
      fVar127 = auVar67._12_4_;
      fVar150 = fVar315 - fVar127;
      fVar191 = fVar274 - fVar66;
      fVar200 = fVar280 - fVar100;
      fVar202 = fVar192 - fVar121;
      fVar205 = fVar285 - fVar127;
      auVar129._0_4_ = fVar191 * fVar152 - fVar171 * fVar125;
      auVar129._4_4_ = fVar200 * fVar164 - fVar179 * fVar145;
      auVar129._8_4_ = fVar202 * fVar165 - fVar182 * fVar148;
      auVar129._12_4_ = fVar205 * fVar166 - fVar185 * fVar150;
      auVar135._0_4_ = fVar170 * fVar125 - fVar191 * fVar63;
      auVar135._4_4_ = fVar178 * fVar145 - fVar200 * fVar91;
      auVar135._8_4_ = fVar181 * fVar148 - fVar202 * fVar97;
      auVar135._12_4_ = fVar184 * fVar150 - fVar205 * fVar102;
      auVar173._0_4_ =
           auVar317._0_4_ * auVar317._0_4_ +
           auVar135._0_4_ * auVar135._0_4_ + auVar129._0_4_ * auVar129._0_4_;
      auVar173._4_4_ =
           auVar317._4_4_ * auVar317._4_4_ +
           auVar135._4_4_ * auVar135._4_4_ + auVar129._4_4_ * auVar129._4_4_;
      auVar173._8_4_ =
           auVar317._8_4_ * auVar317._8_4_ +
           auVar135._8_4_ * auVar135._8_4_ + auVar129._8_4_ * auVar129._8_4_;
      auVar173._12_4_ =
           auVar317._12_4_ * auVar317._12_4_ +
           auVar135._12_4_ * auVar135._12_4_ + auVar129._12_4_ * auVar129._12_4_;
      auVar224 = sqrtps(auVar173,auVar173);
      uVar51 = -(uint)(auVar224._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77);
      uVar53 = -(uint)(auVar224._4_4_ <= _UNK_1506895d4);
      uVar54 = -(uint)(auVar224._8_4_ <= _UNK_1506895d8);
      uVar57 = -(uint)(auVar224._12_4_ <= _UNK_1506895dc);
      auVar67 = divps(auVar129,auVar224);
      fVar126 = (float)(~uVar51 & auVar67._0_4_);
      fVar146 = (float)(~uVar53 & auVar67._4_4_);
      fVar149 = (float)(~uVar54 & auVar67._8_4_);
      fVar151 = (float)(~uVar57 & auVar67._12_4_);
      auVar67 = divps(auVar135,auVar224);
      fVar64 = (float)(~uVar51 & auVar67._0_4_);
      fVar92 = (float)(~uVar53 & auVar67._4_4_);
      fVar98 = (float)(~uVar54 & auVar67._8_4_);
      fVar103 = (float)(~uVar57 & auVar67._12_4_);
      lVar43 = (longlong)(piVar1[3] << 4);
      lVar40 = (longlong)(piVar3[3] * 0x10);
      lVar33 = (longlong)(piVar4[3] << 4);
      lVar21 = (longlong)(piVar5[3] << 4);
      auVar67 = insertps(ZEXT416(*(uint *)(param_1 + lVar43)),*(undefined4 *)(param_1 + lVar40),0x10
                        );
      auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + lVar33),0x20);
      auVar316 = insertps(auVar67,*(undefined4 *)(param_1 + lVar21),0x30);
      auVar67 = divps(auVar317,auVar224);
      fVar267 = (float)(~uVar51 & auVar67._0_4_);
      fVar271 = (float)(~uVar53 & auVar67._4_4_);
      fVar272 = (float)(~uVar54 & auVar67._8_4_);
      fVar273 = (float)(~uVar57 & auVar67._12_4_);
      auVar67 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar43)),
                         *(undefined4 *)(param_1 + 4 + lVar40),0x10);
      auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + 4 + lVar33),0x20);
      auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + 4 + lVar21),0x30);
      fVar207 = auVar316._0_4_;
      fVar314 = fVar313 - fVar207;
      fVar222 = auVar316._4_4_;
      fVar322 = fVar321 - fVar222;
      fVar128 = auVar316._8_4_;
      fVar323 = fVar284 - fVar128;
      fVar167 = auVar316._12_4_;
      fVar325 = fVar324 - fVar167;
      fVar94 = auVar67._0_4_;
      fVar298 = fVar297 - fVar94;
      fVar106 = auVar67._4_4_;
      fVar306 = fVar305 - fVar106;
      fVar122 = auVar67._8_4_;
      fVar308 = fVar237 - fVar122;
      fVar104 = auVar67._12_4_;
      fVar311 = fVar310 - fVar104;
      fVar209 = fVar217 - fVar207;
      fVar215 = fVar219 - fVar222;
      fVar216 = fVar223 - fVar128;
      fVar218 = fVar238 - fVar167;
      fVar220 = fVar243 - fVar94;
      fVar235 = fVar234 - fVar106;
      fVar240 = fVar239 - fVar122;
      fVar245 = fVar244 - fVar104;
      auVar319._0_4_ = fVar314 * fVar220 - fVar209 * fVar298;
      auVar319._4_4_ = fVar322 * fVar235 - fVar215 * fVar306;
      auVar319._8_4_ = fVar323 * fVar240 - fVar216 * fVar308;
      auVar319._12_4_ = fVar325 * fVar245 - fVar218 * fVar311;
      auVar67 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar43)),
                         *(undefined4 *)(param_1 + 8 + lVar40),0x10);
      auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + 8 + lVar33),0x20);
      auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + 8 + lVar21),0x30);
      fVar95 = auVar67._0_4_;
      fVar275 = fVar274 - fVar95;
      fVar107 = auVar67._4_4_;
      fVar281 = fVar280 - fVar107;
      fVar123 = auVar67._8_4_;
      fVar282 = fVar192 - fVar123;
      fVar147 = auVar67._12_4_;
      fVar286 = fVar285 - fVar147;
      fVar248 = fVar247 - fVar95;
      fVar256 = fVar255 - fVar107;
      fVar257 = fVar268 - fVar123;
      fVar258 = fVar315 - fVar147;
      auVar249._0_4_ = fVar298 * fVar248 - fVar220 * fVar275;
      auVar249._4_4_ = fVar306 * fVar256 - fVar235 * fVar281;
      auVar249._8_4_ = fVar308 * fVar257 - fVar240 * fVar282;
      auVar249._12_4_ = fVar311 * fVar258 - fVar245 * fVar286;
      auVar210._0_4_ = fVar209 * fVar275 - fVar314 * fVar248;
      auVar210._4_4_ = fVar215 * fVar281 - fVar322 * fVar256;
      auVar210._8_4_ = fVar216 * fVar282 - fVar323 * fVar257;
      auVar210._12_4_ = fVar218 * fVar286 - fVar325 * fVar258;
      auVar194._0_4_ = auVar210._0_4_ * auVar210._0_4_ + auVar249._0_4_ * auVar249._0_4_;
      auVar194._4_4_ = auVar210._4_4_ * auVar210._4_4_ + auVar249._4_4_ * auVar249._4_4_;
      auVar194._8_4_ = auVar210._8_4_ * auVar210._8_4_ + auVar249._8_4_ * auVar249._8_4_;
      auVar194._12_4_ = auVar210._12_4_ * auVar210._12_4_ + auVar249._12_4_ * auVar249._12_4_;
      auVar174._0_4_ = auVar319._0_4_ * auVar319._0_4_ + auVar194._0_4_;
      auVar174._4_4_ = auVar319._4_4_ * auVar319._4_4_ + auVar194._4_4_;
      auVar174._8_4_ = auVar319._8_4_ * auVar319._8_4_ + auVar194._8_4_;
      auVar174._12_4_ = auVar319._12_4_ * auVar319._12_4_ + auVar194._12_4_;
      auVar129 = sqrtps(auVar194,auVar174);
      uVar52 = -(uint)(auVar129._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77);
      uVar56 = -(uint)(auVar129._4_4_ <= _UNK_1506895d4);
      uVar55 = -(uint)(auVar129._8_4_ <= _UNK_1506895d8);
      uVar58 = -(uint)(auVar129._12_4_ <= _UNK_1506895dc);
      auVar67 = divps(auVar249,auVar129);
      fVar172 = (float)(~uVar52 & auVar67._0_4_);
      fVar180 = (float)(~uVar56 & auVar67._4_4_);
      fVar183 = (float)(~uVar55 & auVar67._8_4_);
      fVar186 = (float)(~uVar58 & auVar67._12_4_);
      auVar67 = divps(auVar210,auVar129);
      fVar299 = (float)(~uVar52 & auVar67._0_4_);
      fVar307 = (float)(~uVar56 & auVar67._4_4_);
      fVar309 = (float)(~uVar55 & auVar67._8_4_);
      fVar312 = (float)(~uVar58 & auVar67._12_4_);
      auVar67 = divps(auVar319,auVar129);
      fVar221 = (float)(~uVar52 & auVar67._0_4_);
      fVar236 = (float)(~uVar56 & auVar67._4_4_);
      fVar241 = (float)(~uVar55 & auVar67._8_4_);
      fVar246 = (float)(~uVar58 & auVar67._12_4_);
      auVar195._4_4_ = fVar271 * fVar236 + fVar92 * fVar307 + fVar146 * fVar180;
      auVar195._0_4_ = fVar267 * fVar221 + fVar64 * fVar299 + fVar126 * fVar172;
      auVar195._8_4_ = fVar272 * fVar241 + fVar98 * fVar309 + fVar149 * fVar183;
      auVar195._12_4_ = fVar273 * fVar246 + fVar103 * fVar312 + fVar151 * fVar186;
      fVar259 = auVar276._0_4_;
      fVar264 = auVar276._4_4_;
      fVar265 = auVar276._8_4_;
      fVar266 = auVar276._12_4_;
      auVar212._0_4_ =
           (fVar64 * fVar172 - fVar126 * fVar299) * fVar288 +
           (fVar126 * fVar221 - fVar267 * fVar172) * fVar62 +
           (fVar267 * fVar299 - fVar64 * fVar221) * fVar259;
      auVar212._4_4_ =
           (fVar92 * fVar180 - fVar146 * fVar307) * fVar294 +
           (fVar146 * fVar236 - fVar271 * fVar180) * fVar90 +
           (fVar271 * fVar307 - fVar92 * fVar236) * fVar264;
      auVar212._8_4_ =
           (fVar98 * fVar183 - fVar149 * fVar309) * fVar295 +
           (fVar149 * fVar241 - fVar272 * fVar183) * fVar96 +
           (fVar272 * fVar309 - fVar98 * fVar241) * fVar265;
      auVar212._12_4_ =
           (fVar103 * fVar186 - fVar151 * fVar312) * fVar296 +
           (fVar151 * fVar246 - fVar273 * fVar186) * fVar101 +
           (fVar273 * fVar312 - fVar103 * fVar246) * fVar266;
      auVar67 = maxps(auVar195,___xmm_bf800000bf800000bf800000bf800000);
      auVar249 = minps(auVar67,___xmm_3f8000003f8000003f8000003f800000);
      auVar67 = maxps(auVar212,___xmm_bf800000bf800000bf800000bf800000);
      auVar316 = minps(auVar67,___xmm_3f8000003f8000003f8000003f800000);
      fVar283 = auVar249._0_4_;
      fVar208 = auVar249._4_4_;
      fVar242 = auVar249._8_4_;
      fVar206 = auVar249._12_4_;
      fVar65 = auVar316._0_4_;
      fVar93 = auVar316._4_4_;
      fVar99 = auVar316._8_4_;
      fVar105 = auVar316._12_4_;
      auVar277._0_4_ = (fVar62 * fVar221 - fVar288 * fVar299) * fVar283 - fVar172 * fVar65;
      auVar277._4_4_ = (fVar90 * fVar236 - fVar294 * fVar307) * fVar208 - fVar180 * fVar93;
      auVar277._8_4_ = (fVar96 * fVar241 - fVar295 * fVar309) * fVar242 - fVar183 * fVar99;
      auVar277._12_4_ = (fVar101 * fVar246 - fVar296 * fVar312) * fVar206 - fVar186 * fVar105;
      auVar193._0_4_ = (fVar288 * fVar172 - fVar259 * fVar221) * fVar283 - fVar299 * fVar65;
      auVar193._4_4_ = (fVar294 * fVar180 - fVar264 * fVar236) * fVar208 - fVar307 * fVar93;
      auVar193._8_4_ = (fVar295 * fVar183 - fVar265 * fVar241) * fVar242 - fVar309 * fVar99;
      auVar193._12_4_ = (fVar296 * fVar186 - fVar266 * fVar246) * fVar206 - fVar312 * fVar105;
      auVar229._0_4_ = (fVar259 * fVar299 - fVar62 * fVar172) * fVar283 - fVar221 * fVar65;
      auVar229._4_4_ = (fVar264 * fVar307 - fVar90 * fVar180) * fVar208 - fVar236 * fVar93;
      auVar229._8_4_ = (fVar265 * fVar309 - fVar96 * fVar183) * fVar242 - fVar241 * fVar99;
      auVar229._12_4_ = (fVar266 * fVar312 - fVar101 * fVar186) * fVar206 - fVar246 * fVar105;
      auVar276 = divps(auVar277,auVar224);
      auVar67 = divps(auVar193,auVar224);
      auVar224 = divps(auVar229,auVar224);
      fVar299 = (float)(~uVar51 & auVar276._0_4_);
      fVar307 = (float)(~uVar53 & auVar276._4_4_);
      fVar309 = (float)(~uVar54 & auVar276._8_4_);
      fVar312 = (float)(~uVar57 & auVar276._12_4_);
      fVar221 = (float)(~uVar51 & auVar67._0_4_);
      fVar236 = (float)(~uVar53 & auVar67._4_4_);
      fVar241 = (float)(~uVar54 & auVar67._8_4_);
      fVar246 = (float)(~uVar57 & auVar67._12_4_);
      fVar172 = (float)(~uVar51 & auVar224._0_4_);
      fVar180 = (float)(~uVar53 & auVar224._4_4_);
      fVar183 = (float)(~uVar54 & auVar224._8_4_);
      fVar186 = (float)(~uVar57 & auVar224._12_4_);
      auVar276._0_4_ = (fVar288 * fVar64 - fVar62 * fVar267) * fVar283 - fVar126 * fVar65;
      auVar276._4_4_ = (fVar294 * fVar92 - fVar90 * fVar271) * fVar208 - fVar146 * fVar93;
      auVar276._8_4_ = (fVar295 * fVar98 - fVar96 * fVar272) * fVar242 - fVar149 * fVar99;
      auVar276._12_4_ = (fVar296 * fVar103 - fVar101 * fVar273) * fVar206 - fVar151 * fVar105;
      auVar301._0_4_ = (fVar259 * fVar267 - fVar288 * fVar126) * fVar283 - fVar64 * fVar65;
      auVar301._4_4_ = (fVar264 * fVar271 - fVar294 * fVar146) * fVar208 - fVar92 * fVar93;
      auVar301._8_4_ = (fVar265 * fVar272 - fVar295 * fVar149) * fVar242 - fVar98 * fVar99;
      auVar301._12_4_ = (fVar266 * fVar273 - fVar296 * fVar151) * fVar206 - fVar103 * fVar105;
      auVar251._0_4_ = (fVar62 * fVar126 - fVar259 * fVar64) * fVar283 - fVar267 * fVar65;
      auVar251._4_4_ = (fVar90 * fVar146 - fVar264 * fVar92) * fVar208 - fVar271 * fVar93;
      auVar251._8_4_ = (fVar96 * fVar149 - fVar265 * fVar98) * fVar242 - fVar272 * fVar99;
      auVar251._12_4_ = (fVar101 * fVar151 - fVar266 * fVar103) * fVar206 - fVar273 * fVar105;
      auVar67 = divps(auVar276,auVar129);
      auVar193 = divps(auVar301,auVar129);
      auVar224 = divps(auVar251,auVar129);
      fVar259 = (float)(~uVar52 & auVar67._0_4_);
      fVar264 = (float)(~uVar56 & auVar67._4_4_);
      fVar265 = (float)(~uVar55 & auVar67._8_4_);
      fVar266 = (float)(~uVar58 & auVar67._12_4_);
      fVar267 = (float)(~uVar52 & auVar193._0_4_);
      fVar271 = (float)(~uVar56 & auVar193._4_4_);
      fVar272 = (float)(~uVar55 & auVar193._8_4_);
      fVar273 = (float)(~uVar58 & auVar193._12_4_);
      fVar96 = (float)(~uVar52 & auVar224._0_4_);
      fVar98 = (float)(~uVar56 & auVar224._4_4_);
      fVar101 = (float)(~uVar55 & auVar224._8_4_);
      fVar103 = (float)(~uVar58 & auVar224._12_4_);
      fVar126 = fVar170 * fVar221 - fVar171 * fVar299;
      fVar146 = fVar178 * fVar236 - fVar179 * fVar307;
      fVar149 = fVar181 * fVar241 - fVar182 * fVar309;
      fVar151 = fVar184 * fVar246 - fVar185 * fVar312;
      fVar171 = fVar171 * fVar172 - fVar191 * fVar221;
      fVar179 = fVar179 * fVar180 - fVar200 * fVar236;
      fVar182 = fVar182 * fVar183 - fVar202 * fVar241;
      fVar185 = fVar185 * fVar186 - fVar205 * fVar246;
      fVar191 = fVar191 * fVar299 - fVar170 * fVar172;
      fVar200 = fVar200 * fVar307 - fVar178 * fVar180;
      fVar202 = fVar202 * fVar309 - fVar181 * fVar183;
      fVar205 = fVar205 * fVar312 - fVar184 * fVar186;
      fVar62 = fVar152 * fVar299 - fVar221 * fVar63;
      fVar64 = fVar164 * fVar307 - fVar236 * fVar91;
      fVar90 = fVar165 * fVar309 - fVar241 * fVar97;
      fVar92 = fVar166 * fVar312 - fVar246 * fVar102;
      fVar170 = fVar125 * fVar221 - fVar172 * fVar152;
      fVar178 = fVar145 * fVar236 - fVar180 * fVar164;
      fVar181 = fVar148 * fVar241 - fVar183 * fVar165;
      fVar184 = fVar150 * fVar246 - fVar186 * fVar166;
      fVar63 = fVar63 * fVar172 - fVar299 * fVar125;
      fVar91 = fVar91 * fVar180 - fVar307 * fVar145;
      fVar97 = fVar97 * fVar183 - fVar309 * fVar148;
      fVar102 = fVar102 * fVar186 - fVar312 * fVar150;
      fVar152 = fVar209 * fVar267 - fVar220 * fVar259;
      fVar164 = fVar215 * fVar271 - fVar235 * fVar264;
      fVar165 = fVar216 * fVar272 - fVar240 * fVar265;
      fVar166 = fVar218 * fVar273 - fVar245 * fVar266;
      fVar220 = fVar220 * fVar96 - fVar248 * fVar267;
      fVar221 = fVar235 * fVar98 - fVar256 * fVar271;
      fVar235 = fVar240 * fVar101 - fVar257 * fVar272;
      fVar236 = fVar245 * fVar103 - fVar258 * fVar273;
      fVar172 = fVar248 * fVar259 - fVar209 * fVar96;
      fVar180 = fVar256 * fVar264 - fVar215 * fVar98;
      fVar183 = fVar257 * fVar265 - fVar216 * fVar101;
      fVar186 = fVar258 * fVar266 - fVar218 * fVar103;
      fVar248 = fVar298 * fVar259 - fVar267 * fVar314;
      fVar299 = fVar306 * fVar264 - fVar271 * fVar322;
      fVar256 = fVar308 * fVar265 - fVar272 * fVar323;
      fVar307 = fVar311 * fVar266 - fVar273 * fVar325;
      fVar145 = fVar275 * fVar267 - fVar96 * fVar298;
      fVar148 = fVar281 * fVar271 - fVar98 * fVar306;
      fVar150 = fVar282 * fVar272 - fVar101 * fVar308;
      fVar246 = fVar286 * fVar273 - fVar103 * fVar311;
      fVar96 = fVar314 * fVar96 - fVar259 * fVar275;
      fVar98 = fVar322 * fVar98 - fVar264 * fVar281;
      fVar125 = fVar323 * fVar101 - fVar265 * fVar282;
      fVar103 = fVar325 * fVar103 - fVar266 * fVar286;
      fVar209 = fVar145 + fVar171;
      fVar215 = fVar148 + fVar179;
      fVar216 = fVar150 + fVar182;
      fVar218 = fVar246 + fVar185;
      auVar67._4_4_ = _UNK_150651574;
      auVar67._0_4_ = __xmm_80000000800000008000000080000000;
      auVar67._8_4_ = _UNK_150651578;
      auVar67._12_4_ = _UNK_15065157c;
      fVar240 = (float)((uint)fVar145 ^ __xmm_80000000800000008000000080000000) - fVar220;
      fVar241 = (float)((uint)fVar148 ^ _UNK_150651574) - fVar221;
      fVar245 = (float)((uint)fVar150 ^ _UNK_150651578) - fVar235;
      fVar246 = (float)((uint)fVar246 ^ _UNK_15065157c) - fVar236;
      fVar220 = fVar220 + fVar170;
      fVar221 = fVar221 + fVar178;
      fVar235 = fVar235 + fVar181;
      fVar236 = fVar236 + fVar184;
      fVar170 = (float)((uint)fVar171 ^ __xmm_80000000800000008000000080000000) - fVar170;
      fVar178 = (float)((uint)fVar179 ^ _UNK_150651574) - fVar178;
      fVar181 = (float)((uint)fVar182 ^ _UNK_150651578) - fVar181;
      fVar184 = (float)((uint)fVar185 ^ _UNK_15065157c) - fVar184;
      fVar171 = fVar96 + fVar191;
      fVar179 = fVar98 + fVar200;
      fVar182 = fVar125 + fVar202;
      fVar185 = fVar103 + fVar205;
      fVar96 = (float)((uint)fVar96 ^ __xmm_80000000800000008000000080000000) - fVar172;
      fVar101 = (float)((uint)fVar98 ^ _UNK_150651574) - fVar180;
      fVar125 = (float)((uint)fVar125 ^ _UNK_150651578) - fVar183;
      fVar148 = (float)((uint)fVar103 ^ _UNK_15065157c) - fVar186;
      fVar172 = fVar172 + fVar63;
      fVar180 = fVar180 + fVar91;
      fVar183 = fVar183 + fVar97;
      fVar186 = fVar186 + fVar102;
      fVar63 = (float)((uint)fVar191 ^ __xmm_80000000800000008000000080000000) - fVar63;
      fVar91 = (float)((uint)fVar200 ^ _UNK_150651574) - fVar91;
      fVar97 = (float)((uint)fVar202 ^ _UNK_150651578) - fVar97;
      fVar102 = (float)((uint)fVar205 ^ _UNK_15065157c) - fVar102;
      fVar98 = fVar248 + fVar126;
      fVar103 = fVar299 + fVar146;
      fVar145 = fVar256 + fVar149;
      fVar150 = fVar307 + fVar151;
      fVar191 = (float)((uint)fVar248 ^ __xmm_80000000800000008000000080000000) - fVar152;
      fVar200 = (float)((uint)fVar299 ^ _UNK_150651574) - fVar164;
      fVar202 = (float)((uint)fVar256 ^ _UNK_150651578) - fVar165;
      fVar205 = (float)((uint)fVar307 ^ _UNK_15065157c) - fVar166;
      fVar152 = fVar152 + fVar62;
      fVar164 = fVar164 + fVar64;
      fVar165 = fVar165 + fVar90;
      fVar166 = fVar166 + fVar92;
      fVar62 = (float)((uint)fVar126 ^ __xmm_80000000800000008000000080000000) - fVar62;
      fVar64 = (float)((uint)fVar146 ^ _UNK_150651574) - fVar64;
      fVar90 = (float)((uint)fVar149 ^ _UNK_150651578) - fVar90;
      fVar92 = (float)((uint)fVar151 ^ _UNK_15065157c) - fVar92;
      uVar51 = *(uint *)(param_1 + 0xc + lVar45);
      uVar52 = *(uint *)(param_1 + 0xc + lVar28);
      auVar224 = insertps(ZEXT416(uVar51),ZEXT416(uVar52),0x10);
      uVar53 = *(uint *)(param_1 + 0xc + lVar48);
      auVar224 = insertps(auVar224,ZEXT416(uVar53),0x20);
      uVar56 = *(uint *)(param_1 + 0xc + lVar46);
      auVar129 = insertps(auVar224,ZEXT416(uVar56),0x30);
      uVar54 = *(uint *)(param_1 + 0xc + lVar49);
      uVar55 = *(uint *)(param_1 + 0xc + lVar41);
      auVar224 = insertps(ZEXT416(uVar54),ZEXT416(uVar55),0x10);
      uVar57 = *(uint *)(param_1 + 0xc + lVar35);
      auVar224 = insertps(auVar224,ZEXT416(uVar57),0x20);
      uVar58 = *(uint *)(param_1 + 0xc + lVar38);
      auVar193 = insertps(auVar224,ZEXT416(uVar58),0x30);
      uVar59 = *(uint *)(param_1 + 0xc + lVar39);
      uVar60 = *(uint *)(param_1 + 0xc + lVar32);
      auVar224 = insertps(ZEXT416(uVar59),ZEXT416(uVar60),0x10);
      uVar6 = *(uint *)(param_1 + 0xc + lVar42);
      auVar224 = insertps(auVar224,ZEXT416(uVar6),0x20);
      uVar7 = *(uint *)(param_1 + 0xc + lVar24);
      auVar224 = insertps(auVar224,ZEXT416(uVar7),0x30);
      uVar8 = *(uint *)(param_1 + 0xc + lVar43);
      uVar9 = *(uint *)(param_1 + 0xc + lVar40);
      auVar276 = insertps(ZEXT416(uVar8),ZEXT416(uVar9),0x10);
      uVar10 = *(uint *)(param_1 + 0xc + lVar33);
      auVar276 = insertps(auVar276,ZEXT416(uVar10),0x20);
      uVar11 = *(uint *)(param_1 + 0xc + lVar21);
      auVar276 = insertps(auVar276,ZEXT416(uVar11),0x30);
      auVar316 = divps(auVar316,auVar249);
      auVar318._0_4_ = (uint)auVar316._0_4_ ^ __xmm_80000000800000008000000080000000;
      auVar318._4_4_ = (uint)auVar316._4_4_ ^ _UNK_150651574;
      auVar318._8_4_ = (uint)auVar316._8_4_ ^ _UNK_150651578;
      auVar318._12_4_ = (uint)auVar316._12_4_ ^ _UNK_15065157c;
      auVar249 = maxps(auVar318,auVar316);
      auVar300._4_4_ = -(uint)(__xmm_3f8000003f8000003f8000003f800000._4_4_ < auVar249._4_4_);
      auVar300._0_4_ = -(uint)((float)__xmm_3f8000003f8000003f8000003f800000 < auVar249._0_4_);
      auVar300._8_4_ = -(uint)(__xmm_3f8000003f8000003f8000003f800000._8_4_ < auVar249._8_4_);
      auVar300._12_4_ = -(uint)(__xmm_3f8000003f8000003f8000003f800000._12_4_ < auVar249._12_4_);
      iVar30 = movmskps(piVar4[3] << 4,auVar300);
      if (iVar30 != 0) {
        auVar67 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar249);
      }
      auVar67 = blendvps(auVar249,auVar67,auVar300);
      fVar248 = auVar67._0_4_;
      fVar299 = auVar67._4_4_;
      fVar256 = auVar67._8_4_;
      fVar307 = auVar67._12_4_;
      fVar126 = fVar248 * fVar248;
      fVar146 = fVar299 * fVar299;
      fVar149 = fVar256 * fVar256;
      fVar151 = fVar307 * fVar307;
      auVar225._0_4_ =
           (((((((fVar126 * ___xmm_bb9918b7bb9918b7bb9918b7bb9918b7 +
                 ___xmm_3cc6061b3cc6061b3cc6061b3cc6061b) * fVar126 +
                ___xmm_bd732a49bd732a49bd732a49bd732a49) * fVar126 +
               ___xmm_3dcadb2a3dcadb2a3dcadb2a3dcadb2a) * fVar126 +
              ___xmm_be0f8549be0f8549be0f8549be0f8549) * fVar126 +
             ___xmm_3e4c7b543e4c7b543e4c7b543e4c7b54) * fVar126 +
            ___xmm_beaaa8cfbeaaa8cfbeaaa8cfbeaaa8cf) * fVar126 +
           ___xmm_3f7ffffe3f7ffffe3f7ffffe3f7ffffe) * fVar248;
      auVar225._4_4_ =
           (((((((fVar146 * _UNK_150b51114 + _UNK_150b51124) * fVar146 + _UNK_150b51134) * fVar146 +
               _UNK_150b51144) * fVar146 + _UNK_150b51154) * fVar146 + _UNK_150b51164) * fVar146 +
            _UNK_150b51174) * fVar146 + _UNK_150b51184) * fVar299;
      auVar225._8_4_ =
           (((((((fVar149 * _UNK_150b51118 + _UNK_150b51128) * fVar149 + _UNK_150b51138) * fVar149 +
               _UNK_150b51148) * fVar149 + _UNK_150b51158) * fVar149 + _UNK_150b51168) * fVar149 +
            _UNK_150b51178) * fVar149 + _UNK_150b51188) * fVar256;
      auVar225._12_4_ =
           (((((((fVar151 * _UNK_150b5111c + _UNK_150b5112c) * fVar151 + _UNK_150b5113c) * fVar151 +
               _UNK_150b5114c) * fVar151 + _UNK_150b5115c) * fVar151 + _UNK_150b5116c) * fVar151 +
            _UNK_150b5117c) * fVar151 + _UNK_150b5118c) * fVar307;
      auVar290._0_4_ = ___xmm_3fc90fdb3fc90fdb3fc90fdb3fc90fdb - auVar225._0_4_;
      auVar290._4_4_ = _UNK_150b51194 - auVar225._4_4_;
      auVar290._8_4_ = _UNK_150b51198 - auVar225._8_4_;
      auVar290._12_4_ = _UNK_150b5119c - auVar225._12_4_;
      auVar67 = blendvps(auVar225,auVar290,auVar300);
      auVar68._4_4_ = -(uint)(auVar316._4_4_ < 0.0);
      auVar68._0_4_ = -(uint)(auVar316._0_4_ < 0.0);
      auVar291._0_4_ = auVar67._0_4_ ^ __xmm_80000000800000008000000080000000;
      auVar291._4_4_ = auVar67._4_4_ ^ _UNK_150651574;
      auVar291._8_4_ = auVar67._8_4_ ^ _UNK_150651578;
      auVar291._12_4_ = auVar67._12_4_ ^ _UNK_15065157c;
      auVar68._8_4_ = -(uint)(auVar316._8_4_ < 0.0);
      auVar68._12_4_ = -(uint)(auVar316._12_4_ < 0.0);
      auVar249 = blendvps(auVar67,auVar291,auVar68);
      auVar69._4_4_ = -(uint)(fVar93 < 0.0);
      auVar69._0_4_ = -(uint)(fVar65 < 0.0);
      auVar69._8_4_ = -(uint)(fVar99 < 0.0);
      auVar69._12_4_ = -(uint)(fVar105 < 0.0);
      auVar316 = blendvps(___xmm_40490fdb40490fdb40490fdb40490fdb,
                          ___xmm_c0490fdbc0490fdbc0490fdbc0490fdb,auVar69);
      fVar126 = auVar224._0_4_;
      fVar146 = auVar224._4_4_;
      fVar149 = auVar224._8_4_;
      fVar151 = auVar224._12_4_;
      fVar248 = auVar129._0_4_;
      fVar299 = auVar129._4_4_;
      fVar256 = auVar129._8_4_;
      fVar307 = auVar129._12_4_;
      auVar226._0_4_ =
           (fVar152 * fVar152 + fVar172 * fVar172 + fVar220 * fVar220) * fVar248 +
           (fVar98 * fVar98 + fVar171 * fVar171 + fVar209 * fVar209) * fVar126;
      auVar226._4_4_ =
           (fVar164 * fVar164 + fVar180 * fVar180 + fVar221 * fVar221) * fVar299 +
           (fVar103 * fVar103 + fVar179 * fVar179 + fVar215 * fVar215) * fVar146;
      auVar226._8_4_ =
           (fVar165 * fVar165 + fVar183 * fVar183 + fVar235 * fVar235) * fVar256 +
           (fVar145 * fVar145 + fVar182 * fVar182 + fVar216 * fVar216) * fVar149;
      auVar226._12_4_ =
           (fVar166 * fVar166 + fVar186 * fVar186 + fVar236 * fVar236) * fVar307 +
           (fVar150 * fVar150 + fVar185 * fVar185 + fVar218 * fVar218) * fVar151;
      auVar70._0_4_ = fVar170 * fVar170;
      auVar70._4_4_ = fVar178 * fVar178;
      auVar70._8_4_ = fVar181 * fVar181;
      auVar70._12_4_ = fVar184 * fVar184;
      fVar257 = auVar193._0_4_;
      fVar309 = auVar193._4_4_;
      fVar258 = auVar193._8_4_;
      fVar312 = auVar193._12_4_;
      auVar67 = pmovsxbd(auVar70,uVar61);
      auVar71._0_4_ = auVar67._0_4_ << 2;
      auVar71._4_4_ = auVar67._4_4_ * 4;
      auVar71._8_4_ = auVar67._8_4_ << 2;
      auVar71._12_4_ = auVar67._12_4_ << 2;
      auVar67 = insertps(ZEXT416(*(uint *)(param_7 + auVar71._0_4_)),
                         *(undefined4 *)(param_7 + auVar71._4_4_),0x10);
      auVar67 = insertps(auVar67,*(undefined4 *)(param_7 + auVar71._8_4_),0x20);
      auVar129 = insertps(auVar67,*(undefined4 *)(param_7 + auVar71._12_4_),0x30);
      auVar67 = pmovsxbd(auVar71,uVar169);
      auVar224 = insertps(ZEXT416(*(uint *)(param_10 + (auVar67._0_4_ << 2))),
                          *(undefined4 *)(param_10 + auVar67._4_4_ * 4),0x10);
      auVar224 = insertps(auVar224,*(undefined4 *)(param_10 + (auVar67._8_4_ << 2)),0x20);
      auVar67 = insertps(auVar224,*(undefined4 *)(param_10 + (auVar67._12_4_ << 2)),0x30);
      auVar224 = pmovzxbd(auVar226,ZEXT416(*(uint *)(param_4 + uVar34)) &
                                   ___xmm_00000000000000000000000001010101);
      auVar72._4_4_ = -auVar224._4_4_;
      auVar72._0_4_ = -auVar224._0_4_;
      auVar72._8_4_ = -auVar224._8_4_;
      auVar72._12_4_ = SUB124(SUB1612((undefined1  [16])0x0,4),8) - auVar224._12_4_;
      auVar67 = blendvps(auVar129,auVar67,auVar72);
      fVar259 = auVar276._0_4_;
      fVar264 = auVar276._4_4_;
      fVar265 = auVar276._8_4_;
      fVar266 = auVar276._12_4_;
      auVar73._0_4_ =
           (fVar191 * fVar191 + fVar96 * fVar96 + fVar240 * fVar240) * fVar259 +
           (fVar62 * fVar62 + fVar63 * fVar63 + auVar70._0_4_) * fVar257 + auVar226._0_4_;
      auVar73._4_4_ =
           (fVar200 * fVar200 + fVar101 * fVar101 + fVar241 * fVar241) * fVar264 +
           (fVar64 * fVar64 + fVar91 * fVar91 + auVar70._4_4_) * fVar309 + auVar226._4_4_;
      auVar73._8_4_ =
           (fVar202 * fVar202 + fVar125 * fVar125 + fVar245 * fVar245) * fVar265 +
           (fVar90 * fVar90 + fVar97 * fVar97 + auVar70._8_4_) * fVar258 + auVar226._8_4_;
      auVar73._12_4_ =
           (fVar205 * fVar205 + fVar148 * fVar148 + fVar246 * fVar246) * fVar266 +
           (fVar92 * fVar92 + fVar102 * fVar102 + auVar70._12_4_) * fVar312 + auVar226._12_4_;
      pfVar2 = (float *)(param_3 + (uVar47 & 0xffffffff));
      auVar292._0_4_ =
           auVar67._0_4_ *
           (((float)(auVar316._0_4_ & -(uint)(fVar283 < 0.0)) + auVar249._0_4_) - *pfVar2);
      auVar292._4_4_ =
           auVar67._4_4_ *
           (((float)(auVar316._4_4_ & -(uint)(fVar208 < 0.0)) + auVar249._4_4_) - pfVar2[1]);
      auVar292._8_4_ =
           auVar67._8_4_ *
           (((float)(auVar316._8_4_ & -(uint)(fVar242 < 0.0)) + auVar249._8_4_) - pfVar2[2]);
      auVar292._12_4_ =
           auVar67._12_4_ *
           (((float)(auVar316._12_4_ & -(uint)(fVar206 < 0.0)) + auVar249._12_4_) - pfVar2[3]);
      auVar67 = maxps(auVar292,___xmm_bf490fdbbf490fdbbf490fdbbf490fdb);
      auVar67 = minps(auVar67,___xmm_3f490fdb3f490fdb3f490fdb3f490fdb);
      auVar67 = divps(auVar67,auVar73);
      fVar65 = (float)(-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 < auVar73._0_4_) &
                      auVar67._0_4_);
      fVar93 = (float)(-(uint)(_UNK_1506895d4 < auVar73._4_4_) & auVar67._4_4_);
      fVar99 = (float)(-(uint)(_UNK_1506895d8 < auVar73._8_4_) & auVar67._8_4_);
      fVar105 = (float)(-(uint)(_UNK_1506895dc < auVar73._12_4_) & auVar67._12_4_);
      auVar108._4_4_ = -(uint)(0.0 < fVar146);
      auVar108._0_4_ = -(uint)(0.0 < fVar126);
      auVar108._8_4_ = -(uint)(0.0 < fVar149);
      auVar108._12_4_ = -(uint)(0.0 < fVar151);
      iVar30 = movmskps((int)param_3,auVar108);
      unaff_ESI = 0;
      if (iVar30 != 0) {
        bVar29 = (char)((char)iVar30 << 4) >> 4;
        unaff_ESI = CONCAT31((int3)((uint)iVar30 >> 8),bVar29);
        fVar126 = fVar126 * fVar65;
        fVar146 = fVar146 * fVar93;
        fVar149 = fVar149 * fVar99;
        fVar151 = fVar151 * fVar105;
        auVar227._0_4_ = fVar217 - fVar209 * fVar126;
        auVar227._4_4_ = fVar219 - fVar215 * fVar146;
        auVar227._8_4_ = fVar223 - fVar216 * fVar149;
        auVar227._12_4_ = fVar238 - fVar218 * fVar151;
        if ((bVar29 & 1) != 0) {
          *(float *)(param_1 + lVar39) = auVar227._0_4_;
        }
        if ((bVar29 & 2) == 0) {
          if ((bVar29 & 4) != 0) goto LAB_1400692f2;
LAB_140068f1e:
          if ((char)bVar29 < '\0') goto LAB_140069303;
LAB_140068f27:
          auVar130._0_4_ = fVar243 - fVar171 * fVar126;
          auVar130._4_4_ = fVar234 - fVar179 * fVar146;
          auVar130._8_4_ = fVar239 - fVar182 * fVar149;
          auVar130._12_4_ = fVar244 - fVar185 * fVar151;
          if ((bVar29 & 1) != 0) goto LAB_14006931d;
LAB_140068f39:
          if ((bVar29 & 2) != 0) goto LAB_140069332;
LAB_140068f47:
          if ((bVar29 & 4) != 0) goto LAB_140069345;
LAB_140068f51:
          if ((char)bVar29 < '\0') goto LAB_140069356;
LAB_140068f5a:
          auVar109._0_4_ = fVar247 - fVar98 * fVar126;
          auVar109._4_4_ = fVar255 - fVar103 * fVar146;
          auVar109._8_4_ = fVar268 - fVar145 * fVar149;
          auVar109._12_4_ = fVar315 - fVar150 * fVar151;
        }
        else {
          uVar14 = extractps(auVar227,1);
          *(undefined8 *)(param_1 + lVar32) = uVar14;
          if ((bVar29 & 4) == 0) goto LAB_140068f1e;
LAB_1400692f2:
          uVar14 = extractps(auVar227,2);
          *(undefined8 *)(param_1 + lVar42) = uVar14;
          if (-1 < (char)bVar29) goto LAB_140068f27;
LAB_140069303:
          uVar14 = extractps(auVar227,3);
          *(undefined8 *)(param_1 + lVar24) = uVar14;
          auVar130._0_4_ = fVar243 - fVar171 * fVar126;
          auVar130._4_4_ = fVar234 - fVar179 * fVar146;
          auVar130._8_4_ = fVar239 - fVar182 * fVar149;
          auVar130._12_4_ = fVar244 - fVar185 * fVar151;
          if ((bVar29 & 1) == 0) goto LAB_140068f39;
LAB_14006931d:
          *(int *)(param_1 + 4 + lVar39) = auVar130._0_4_;
          if ((bVar29 & 2) == 0) goto LAB_140068f47;
LAB_140069332:
          uVar14 = extractps(auVar130,1);
          *(undefined8 *)(param_1 + 4 + lVar32) = uVar14;
          if ((bVar29 & 4) == 0) goto LAB_140068f51;
LAB_140069345:
          uVar14 = extractps(auVar130,2);
          *(undefined8 *)(param_1 + 4 + lVar42) = uVar14;
          if (-1 < (char)bVar29) goto LAB_140068f5a;
LAB_140069356:
          uVar14 = extractps(auVar130,3);
          *(undefined8 *)(param_1 + 4 + lVar24) = uVar14;
          auVar109._0_4_ = fVar247 - fVar98 * fVar126;
          auVar109._4_4_ = fVar255 - fVar103 * fVar146;
          auVar109._8_4_ = fVar268 - fVar145 * fVar149;
          auVar109._12_4_ = fVar315 - fVar150 * fVar151;
        }
        if ((bVar29 & 1) != 0) {
          *(int *)(param_1 + 8 + lVar39) = auVar109._0_4_;
        }
        if ((bVar29 & 2) != 0) {
          uVar14 = extractps(auVar109,1);
          *(undefined8 *)(param_1 + 8 + lVar32) = uVar14;
        }
        if ((bVar29 & 4) != 0) {
          uVar14 = extractps(auVar109,2);
          *(undefined8 *)(param_1 + 8 + lVar42) = uVar14;
        }
        if ((char)bVar29 < '\0') {
          uVar14 = extractps(auVar109,3);
          *(undefined8 *)(param_1 + 8 + lVar24) = uVar14;
        }
        if ((bVar29 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar39) = uVar59;
        }
        if ((bVar29 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar32) = uVar60;
        }
        if ((bVar29 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar42) = uVar6;
        }
        if ((char)bVar29 < '\0') {
          *(uint *)(param_1 + 0xc + lVar24) = uVar7;
        }
      }
      auVar110._4_4_ = -(uint)(0.0 < fVar299);
      auVar110._0_4_ = -(uint)(0.0 < fVar248);
      auVar110._8_4_ = -(uint)(0.0 < fVar256);
      auVar110._12_4_ = -(uint)(0.0 < fVar307);
      iVar23 = movmskps(iVar23 << 4,auVar110);
      lVar24 = param_10;
      if (iVar23 != 0) {
        bVar29 = (char)((char)iVar23 << 4) >> 4;
        fVar248 = fVar248 * fVar65;
        fVar299 = fVar299 * fVar93;
        fVar256 = fVar256 * fVar99;
        fVar307 = fVar307 * fVar105;
        auVar175._0_4_ = fVar313 - fVar220 * fVar248;
        auVar175._4_4_ = fVar321 - fVar221 * fVar299;
        auVar175._8_4_ = fVar284 - fVar235 * fVar256;
        auVar175._12_4_ = fVar324 - fVar236 * fVar307;
        if ((bVar29 & 1) != 0) {
          *(float *)(param_1 + lVar45) = auVar175._0_4_;
        }
        unaff_ESI = bVar29 & 0xf;
        if ((bVar29 & 2) != 0) {
          uVar14 = extractps(auVar175,1);
          *(undefined8 *)(param_1 + lVar28) = uVar14;
        }
        if ((bVar29 & 4) != 0) {
          uVar14 = extractps(auVar175,2);
          *(undefined8 *)(param_1 + lVar48) = uVar14;
        }
        if ((char)bVar29 < '\0') {
          uVar14 = extractps(auVar175,3);
          *(undefined8 *)(param_1 + lVar46) = uVar14;
          lVar24 = lVar46;
        }
        auVar131._0_4_ = fVar297 - fVar172 * fVar248;
        auVar131._4_4_ = fVar305 - fVar180 * fVar299;
        auVar131._8_4_ = fVar237 - fVar183 * fVar256;
        auVar131._12_4_ = fVar310 - fVar186 * fVar307;
        if ((bVar29 & 1) != 0) {
          *(float *)(param_1 + 4 + lVar45) = auVar131._0_4_;
        }
        if ((bVar29 & 2) != 0) {
          uVar14 = extractps(auVar131,1);
          *(undefined8 *)(param_1 + 4 + lVar28) = uVar14;
        }
        if ((bVar29 & 4) != 0) {
          uVar14 = extractps(auVar131,2);
          *(undefined8 *)(param_1 + 4 + lVar48) = uVar14;
        }
        if ((char)bVar29 < '\0') {
          uVar14 = extractps(auVar131,3);
          *(undefined8 *)(param_1 + 4 + lVar46) = uVar14;
          lVar24 = lVar46;
        }
        auVar111._0_4_ = fVar274 - fVar152 * fVar248;
        auVar111._4_4_ = fVar280 - fVar164 * fVar299;
        auVar111._8_4_ = fVar192 - fVar165 * fVar256;
        auVar111._12_4_ = fVar285 - fVar166 * fVar307;
        if ((bVar29 & 1) != 0) {
          *(float *)(param_1 + 8 + lVar45) = auVar111._0_4_;
        }
        if ((bVar29 & 2) != 0) {
          uVar14 = extractps(auVar111,1);
          *(undefined8 *)(param_1 + 8 + lVar28) = uVar14;
        }
        if ((bVar29 & 4) != 0) {
          uVar14 = extractps(auVar111,2);
          *(undefined8 *)(param_1 + 8 + lVar48) = uVar14;
        }
        if ((char)bVar29 < '\0') {
          uVar14 = extractps(auVar111,3);
          *(undefined8 *)(param_1 + 8 + lVar46) = uVar14;
          lVar24 = lVar46;
        }
        if ((bVar29 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar45) = uVar51;
        }
        if ((bVar29 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar28) = uVar52;
        }
        if ((bVar29 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar48) = uVar53;
        }
        if ((char)bVar29 < '\0') {
          *(uint *)(param_1 + 0xc + lVar46) = uVar56;
          lVar24 = lVar46;
        }
      }
      auVar112._4_4_ = -(uint)(0.0 < fVar309);
      auVar112._0_4_ = -(uint)(0.0 < fVar257);
      auVar112._8_4_ = -(uint)(0.0 < fVar258);
      auVar112._12_4_ = -(uint)(0.0 < fVar312);
      iVar30 = movmskps((int)lVar24,auVar112);
      iVar23 = 0;
      if (iVar30 != 0) {
        bVar29 = (char)((char)iVar30 << 4) >> 4;
        fVar257 = fVar257 * fVar65;
        fVar309 = fVar309 * fVar93;
        fVar258 = fVar258 * fVar99;
        fVar312 = fVar312 * fVar105;
        auVar132._0_4_ = fVar203 - fVar170 * fVar257;
        auVar132._4_4_ = fVar199 - fVar178 * fVar309;
        auVar132._8_4_ = fVar287 - fVar181 * fVar258;
        auVar132._12_4_ = fVar204 - fVar184 * fVar312;
        if ((bVar29 & 1) != 0) {
          *(float *)(param_1 + lVar49) = auVar132._0_4_;
        }
        if ((bVar29 & 2) == 0) {
          if ((bVar29 & 4) != 0) goto LAB_140069571;
LAB_140069139:
          if ((char)bVar29 < '\0') goto LAB_140069581;
LAB_140069141:
          auVar113._0_4_ = fVar124 - fVar63 * fVar257;
          auVar113._4_4_ = fVar153 - fVar91 * fVar309;
          auVar113._8_4_ = fVar168 - fVar97 * fVar258;
          auVar113._12_4_ = fVar201 - fVar102 * fVar312;
        }
        else {
          uVar14 = extractps(auVar132,1);
          *(undefined8 *)(param_1 + lVar41) = uVar14;
          if ((bVar29 & 4) == 0) goto LAB_140069139;
LAB_140069571:
          uVar14 = extractps(auVar132,2);
          *(undefined8 *)(param_1 + lVar35) = uVar14;
          if (-1 < (char)bVar29) goto LAB_140069141;
LAB_140069581:
          uVar14 = extractps(auVar132,3);
          *(undefined8 *)(param_1 + lVar38) = uVar14;
          auVar113._0_4_ = fVar124 - fVar63 * fVar257;
          auVar113._4_4_ = fVar153 - fVar91 * fVar309;
          auVar113._8_4_ = fVar168 - fVar97 * fVar258;
          auVar113._12_4_ = fVar201 - fVar102 * fVar312;
        }
        if ((bVar29 & 1) != 0) {
          *(int *)(param_1 + 4 + lVar49) = auVar113._0_4_;
        }
        if ((bVar29 & 2) != 0) {
          uVar14 = extractps(auVar113,1);
          *(undefined8 *)(param_1 + 4 + lVar41) = uVar14;
        }
        if ((bVar29 & 4) != 0) {
          uVar14 = extractps(auVar113,2);
          *(undefined8 *)(param_1 + 4 + lVar35) = uVar14;
        }
        if ((char)bVar29 < '\0') {
          uVar14 = extractps(auVar113,3);
          *(undefined8 *)(param_1 + 4 + lVar38) = uVar14;
        }
        auVar114._0_4_ = fVar66 - fVar62 * fVar257;
        auVar114._4_4_ = fVar100 - fVar64 * fVar309;
        auVar114._8_4_ = fVar121 - fVar90 * fVar258;
        auVar114._12_4_ = fVar127 - fVar92 * fVar312;
        if ((bVar29 & 1) != 0) {
          *(float *)(param_1 + 8 + lVar49) = auVar114._0_4_;
        }
        if ((bVar29 & 2) != 0) {
          uVar14 = extractps(auVar114,1);
          *(undefined8 *)(param_1 + 8 + lVar41) = uVar14;
        }
        if ((bVar29 & 4) != 0) {
          uVar14 = extractps(auVar114,2);
          *(undefined8 *)(param_1 + 8 + lVar35) = uVar14;
        }
        if ((char)bVar29 < '\0') {
          uVar14 = extractps(auVar114,3);
          *(undefined8 *)(param_1 + 8 + lVar38) = uVar14;
        }
        if ((bVar29 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar49) = uVar54;
        }
        if ((bVar29 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar41) = uVar55;
        }
        if ((bVar29 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar35) = uVar57;
        }
        iVar23 = CONCAT31((int3)((uint)iVar30 >> 8),bVar29);
        unaff_ESI = uVar144;
        if ((char)bVar29 < '\0') {
          *(uint *)(param_1 + 0xc + lVar38) = uVar58;
          iVar23 = iVar20 << 4;
        }
      }
      auVar115._4_4_ = -(uint)(0.0 < fVar264);
      auVar115._0_4_ = -(uint)(0.0 < fVar259);
      auVar115._8_4_ = -(uint)(0.0 < fVar265);
      auVar115._12_4_ = -(uint)(0.0 < fVar266);
      iVar23 = movmskps(iVar23,auVar115);
      if (iVar23 != 0) {
        bVar29 = (char)((char)iVar23 << 4) >> 4;
        fVar259 = fVar259 * fVar65;
        fVar264 = fVar264 * fVar93;
        fVar265 = fVar265 * fVar99;
        fVar266 = fVar266 * fVar105;
        auVar133._0_4_ = fVar207 - fVar240 * fVar259;
        auVar133._4_4_ = fVar222 - fVar241 * fVar264;
        auVar133._8_4_ = fVar128 - fVar245 * fVar265;
        auVar133._12_4_ = fVar167 - fVar246 * fVar266;
        if ((bVar29 & 1) != 0) {
          *(float *)(param_1 + lVar43) = auVar133._0_4_;
        }
        if ((bVar29 & 2) != 0) {
          uVar14 = extractps(auVar133,1);
          *(undefined8 *)(param_1 + lVar40) = uVar14;
        }
        if ((bVar29 & 4) != 0) {
          uVar14 = extractps(auVar133,2);
          *(undefined8 *)(param_1 + lVar33) = uVar14;
        }
        if ((char)bVar29 < '\0') {
          uVar14 = extractps(auVar133,3);
          *(undefined8 *)(param_1 + lVar21) = uVar14;
        }
        auVar116._0_4_ = fVar94 - fVar96 * fVar259;
        auVar116._4_4_ = fVar106 - fVar101 * fVar264;
        auVar116._8_4_ = fVar122 - fVar125 * fVar265;
        auVar116._12_4_ = fVar104 - fVar148 * fVar266;
        if ((bVar29 & 1) == 0) {
          if ((bVar29 & 2) != 0) goto LAB_1400696e1;
LAB_140069272:
          if ((bVar29 & 4) != 0) goto LAB_1400696f4;
LAB_14006927c:
          if ((char)bVar29 < '\0') goto LAB_140069705;
LAB_140069284:
          auVar74._0_4_ = fVar95 - fVar191 * fVar259;
          auVar74._4_4_ = fVar107 - fVar200 * fVar264;
          auVar74._8_4_ = fVar123 - fVar202 * fVar265;
          auVar74._12_4_ = fVar147 - fVar205 * fVar266;
        }
        else {
          *(float *)(param_1 + 4 + lVar43) = auVar116._0_4_;
          if ((bVar29 & 2) == 0) goto LAB_140069272;
LAB_1400696e1:
          uVar14 = extractps(auVar116,1);
          *(undefined8 *)(param_1 + 4 + lVar40) = uVar14;
          if ((bVar29 & 4) == 0) goto LAB_14006927c;
LAB_1400696f4:
          uVar14 = extractps(auVar116,2);
          *(undefined8 *)(param_1 + 4 + lVar33) = uVar14;
          if (-1 < (char)bVar29) goto LAB_140069284;
LAB_140069705:
          uVar14 = extractps(auVar116,3);
          *(undefined8 *)(param_1 + 4 + lVar21) = uVar14;
          auVar74._0_4_ = fVar95 - fVar191 * fVar259;
          auVar74._4_4_ = fVar107 - fVar200 * fVar264;
          auVar74._8_4_ = fVar123 - fVar202 * fVar265;
          auVar74._12_4_ = fVar147 - fVar205 * fVar266;
        }
        if ((bVar29 & 1) != 0) {
          *(int *)(param_1 + 8 + lVar43) = auVar74._0_4_;
        }
        if ((bVar29 & 2) != 0) {
          uVar14 = extractps(auVar74,1);
          *(undefined8 *)(param_1 + 8 + lVar40) = uVar14;
        }
        if ((bVar29 & 4) != 0) {
          uVar14 = extractps(auVar74,2);
          *(undefined8 *)(param_1 + 8 + lVar33) = uVar14;
        }
        if ((char)bVar29 < '\0') {
          uVar14 = extractps(auVar74,3);
          *(undefined8 *)(param_1 + 8 + lVar21) = uVar14;
        }
        if ((bVar29 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar43) = uVar8;
        }
        if ((bVar29 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar40) = uVar9;
        }
        if ((bVar29 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar33) = uVar10;
        }
        if ((char)bVar29 < '\0') {
          *(uint *)(param_1 + 0xc + lVar21) = uVar11;
        }
      }
      uVar34 = uVar34 + 4;
      uVar47 = uVar47 + 0x10;
      auVar67 = auVar279;
    } while ((int)uVar34 < (int)(uVar31 & 0xfffffffc));
    if ((int)param_11 <= (int)uVar34) {
      return;
    }
  }
  uVar51 = (uint)uVar34;
  bVar15 = (int)(uVar51 | (uint)__xmm_00000003000000020000000100000000) < (int)param_11;
  auVar279._0_4_ = -(uint)bVar15;
  bVar16 = (int)(uVar51 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_11;
  auVar279._4_4_ = -(uint)bVar16;
  bVar17 = (int)(uVar51 | _UNK_150631e08) < (int)param_11;
  auVar279._8_4_ = -(uint)bVar17;
  bVar18 = (int)(uVar51 | _UNK_150631e0c) < (int)param_11;
  auVar279._12_4_ = -(uint)bVar18;
  pbVar22 = (byte *)(uVar34 & 0xffffffff);
  pauVar25 = (undefined1 (*) [16])(param_2 + (longlong)pbVar22 * 0x10);
  uVar31 = movmskps(unaff_ESI,auVar279);
  bVar29 = (char)((char)uVar31 << 4) >> 4;
  if (uVar31 == 0xf) {
    auVar67 = *pauVar25;
    auVar316 = pauVar25[2];
    auVar188._0_8_ = auVar67._0_8_;
    auVar188._8_4_ = auVar67._4_4_;
    auVar188._12_4_ = *(undefined4 *)(pauVar25[1] + 4);
    auVar134._4_4_ = *(undefined4 *)pauVar25[1];
    auVar134._0_4_ = auVar67._0_4_;
    auVar155._0_8_ = CONCAT44(*(undefined4 *)(pauVar25[1] + 8),auVar67._8_4_);
    auVar155._8_4_ = auVar67._12_4_;
    auVar155._12_4_ = *(undefined4 *)(pauVar25[1] + 0xc);
    auVar77._0_8_ = auVar316._0_8_;
    auVar77._8_4_ = auVar316._4_4_;
    auVar77._12_4_ = *(undefined4 *)(pauVar25[3] + 4);
    auVar76._8_8_ = auVar77._8_8_;
    auVar76._0_8_ = CONCAT44(*(undefined4 *)pauVar25[3],auVar316._0_4_);
    auVar117._0_8_ = CONCAT44(*(undefined4 *)(pauVar25[3] + 8),auVar316._8_4_);
    auVar117._8_4_ = auVar316._12_4_;
    auVar117._12_4_ = *(undefined4 *)(pauVar25[3] + 0xc);
    auVar134._8_8_ = auVar76._0_8_;
    auVar187._8_8_ = auVar76._8_8_;
    auVar187._0_8_ = auVar188._8_8_;
    auVar196._8_8_ = auVar117._0_8_;
    auVar196._0_8_ = auVar155._0_8_;
    auVar154._8_8_ = auVar117._8_8_;
    auVar154._0_8_ = auVar155._8_8_;
  }
  else {
    auVar75._0_4_ = ___xmm_00000030000000200000001000000000 & auVar279._0_4_;
    auVar75._4_4_ = _UNK_150b511c4 & auVar279._4_4_;
    auVar75._8_4_ = _UNK_150b511c8 & auVar279._8_4_;
    auVar75._12_4_ = _UNK_150b511cc & auVar279._12_4_;
    lVar21 = extractps(auVar75,1);
    lVar28 = extractps(auVar75,2);
    lVar24 = extractps(auVar75,3);
    auVar134._4_4_ = *(undefined4 *)(*pauVar25 + lVar21);
    auVar134._0_4_ = *(undefined4 *)*pauVar25;
    auVar134._12_4_ = *(undefined4 *)(*pauVar25 + lVar24);
    auVar134._8_4_ = *(undefined4 *)(*pauVar25 + lVar28);
    auVar67 = ___xmm_00000034000000240000001400000004 & auVar279;
    auVar187._4_4_ = *(undefined4 *)(*pauVar25 + auVar67._4_4_);
    auVar187._0_4_ = *(undefined4 *)(*pauVar25 + auVar67._0_4_);
    auVar187._12_4_ = *(undefined4 *)(*pauVar25 + auVar67._12_4_);
    auVar187._8_4_ = *(undefined4 *)(*pauVar25 + auVar67._8_4_);
    auVar67 = ___xmm_00000038000000280000001800000008 & auVar279;
    auVar196._4_4_ = *(undefined4 *)(*pauVar25 + auVar67._4_4_);
    auVar196._0_4_ = *(undefined4 *)(*pauVar25 + auVar67._0_4_);
    auVar196._12_4_ = *(undefined4 *)(*pauVar25 + auVar67._12_4_);
    auVar196._8_4_ = *(undefined4 *)(*pauVar25 + auVar67._8_4_);
    auVar76 = ___xmm_0000003c0000002c0000001c0000000c & auVar279;
    auVar154._4_4_ = *(undefined4 *)(*pauVar25 + auVar76._4_4_);
    auVar154._0_4_ = *(undefined4 *)(*pauVar25 + auVar76._0_4_);
    auVar154._12_4_ = *(undefined4 *)(*pauVar25 + auVar76._12_4_);
    auVar154._8_4_ = *(undefined4 *)(*pauVar25 + auVar76._8_4_);
  }
  auVar228 = ZEXT816(0);
  bVar37 = ~bVar29;
  auVar250 = ZEXT816(0);
  if ((param_5 & 1) != 0) {
    if ((bVar37 & 9) == 0) {
      auVar250 = ZEXT416(*(uint *)(pbVar22 + param_6));
    }
    else {
      pbVar12 = pbVar22 + param_6;
      if ((uVar31 & 1) != 0) {
        auVar250 = ZEXT116(*pbVar12);
      }
      if ((uVar31 & 2) != 0) {
        auVar76._8_8_ = auVar250._8_8_;
        auVar76._0_8_ = auVar250._0_8_ | (ulonglong)pbVar12[1] << 8;
        auVar250 = pblendw(auVar250,auVar76,0xfd);
      }
      if ((uVar31 & 4) != 0) {
        auVar67 = pmovzxwd(auVar76,auVar250);
        auVar76._8_8_ = auVar67._8_8_;
        auVar76._0_8_ =
             auVar67._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar12[2] << 0x10 |
             (ulonglong)auVar250[3] << 0x18;
        auVar250 = auVar76;
      }
      if ((uVar31 & 8) != 0) {
        bVar19 = auVar250[2];
        auVar67 = pmovzxwd(auVar250,auVar250);
        auVar250._8_8_ = auVar67._8_8_;
        auVar250._0_8_ =
             auVar67._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar19 << 0x10 |
             (ulonglong)pbVar12[3] << 0x18;
      }
    }
  }
  if ((param_8 & 1) != 0) {
    if ((bVar37 & 9) == 0) {
      auVar228 = ZEXT416(*(uint *)(pbVar22 + param_9));
    }
    else {
      pbVar12 = pbVar22 + param_9;
      if ((uVar31 & 1) != 0) {
        auVar228 = ZEXT116(*pbVar12);
      }
      if ((uVar31 & 2) != 0) {
        auVar76._8_8_ = auVar228._8_8_;
        auVar76._0_8_ = auVar228._0_8_ | (ulonglong)pbVar12[1] << 8;
        auVar228 = pblendw(auVar228,auVar76,0xfd);
      }
      if ((uVar31 & 4) != 0) {
        bVar19 = auVar228[3];
        auVar67 = pmovzxwd(auVar76,auVar228);
        auVar228._8_8_ = auVar67._8_8_;
        auVar228._0_8_ =
             auVar67._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar12[2] << 0x10 |
             (ulonglong)bVar19 << 0x18;
      }
      if ((uVar31 & 8) != 0) {
        bVar19 = auVar228[2];
        auVar67 = pmovzxwd(auVar228,auVar228);
        auVar228._8_8_ = auVar67._8_8_;
        auVar228._0_8_ =
             auVar67._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar19 << 0x10 |
             (ulonglong)pbVar12[3] << 0x18;
      }
    }
  }
  auVar189._0_4_ = auVar187._0_4_ << 4;
  auVar189._4_4_ = auVar187._4_4_ << 4;
  auVar189._8_4_ = auVar187._8_4_ << 4;
  auVar189._12_4_ = auVar187._12_4_ << 4;
  auVar316 = auVar279 & auVar189;
  auVar129 = ___xmm_00000004000000040000000400000004 & auVar279;
  auVar224 = ___xmm_00000008000000080000000800000008 & auVar279;
  auVar197._0_4_ = auVar196._0_4_ << 4;
  auVar197._4_4_ = auVar196._4_4_ << 4;
  auVar197._8_4_ = auVar196._8_4_ << 4;
  auVar197._12_4_ = auVar196._12_4_ << 4;
  auVar249 = auVar279 & auVar197;
  lVar36 = (longlong)auVar249._0_4_;
  auVar211._0_4_ = auVar134._0_4_ << 4;
  auVar211._4_4_ = auVar134._4_4_ << 4;
  auVar211._8_4_ = auVar134._8_4_ << 4;
  auVar211._12_4_ = auVar134._12_4_ << 4;
  auVar193 = auVar279 & auVar211;
  lVar21 = param_1 + auVar193._0_4_;
  auVar156._0_4_ = auVar154._0_4_ << 4;
  auVar156._4_4_ = auVar154._4_4_ << 4;
  auVar156._8_4_ = auVar154._8_4_ << 4;
  auVar156._12_4_ = auVar154._12_4_ << 4;
  auVar276 = auVar279 & auVar156;
  lVar44 = (longlong)auVar276._0_4_;
  auVar67 = ZEXT416(*(uint *)(param_1 + auVar193._0_4_));
  lVar24 = param_1 + auVar316._0_4_;
  lVar28 = param_1 + auVar316._4_4_;
  lVar32 = param_1 + auVar316._8_4_;
  lVar33 = param_1 + auVar316._12_4_;
  uVar27 = (ulonglong)auVar129._0_4_;
  uVar34 = (ulonglong)auVar129._4_4_;
  uVar47 = (ulonglong)auVar224._0_4_;
  lVar35 = param_1 + lVar36;
  lVar38 = param_1 + auVar249._4_4_;
  lVar39 = param_1 + auVar249._8_4_;
  lVar40 = param_1 + auVar249._12_4_;
  lVar41 = param_1 + auVar193._4_4_;
  lVar42 = param_1 + auVar193._8_4_;
  lVar43 = param_1 + auVar193._12_4_;
  lVar45 = param_1 + lVar44;
  lVar46 = param_1 + auVar276._4_4_;
  lVar48 = param_1 + auVar276._8_4_;
  lVar49 = param_1 + auVar276._12_4_;
  bVar50 = (bVar29 & 2) == 0;
  if (!bVar50) {
    auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + auVar193._4_4_),0x10);
  }
  uVar26 = (ulonglong)auVar224._4_4_;
  auVar300 = ZEXT416(*(uint *)(uVar27 + lVar21));
  if (bVar50) {
    auVar317 = ZEXT416(*(uint *)(uVar47 + lVar21));
  }
  else {
    auVar300 = insertps(auVar300,*(undefined4 *)(uVar34 + lVar41),0x10);
    auVar317 = insertps(ZEXT416(*(uint *)(uVar47 + lVar21)),*(undefined4 *)(uVar26 + lVar41),0x10);
  }
  auVar319 = ZEXT416(*(uint *)(param_1 + auVar316._0_4_));
  if (bVar50) {
    _local_4a8 = ZEXT416(*(uint *)(uVar27 + lVar24));
    auVar135 = ZEXT416(*(uint *)(uVar47 + lVar24));
    auVar261 = ZEXT416(*(uint *)(param_1 + lVar36));
    auVar212 = ZEXT416(*(uint *)(uVar27 + lVar35));
    auVar229 = ZEXT416(*(uint *)(uVar47 + lVar35));
    auVar251 = ZEXT416(*(uint *)(param_1 + lVar44));
    _local_3e8 = ZEXT416(*(uint *)(uVar27 + lVar45));
  }
  else {
    auVar319 = insertps(auVar319,*(undefined4 *)(param_1 + auVar316._4_4_),0x10);
    _local_4a8 = insertps(ZEXT416(*(uint *)(uVar27 + lVar24)),*(undefined4 *)(uVar34 + lVar28),0x10)
    ;
    auVar135 = insertps(ZEXT416(*(uint *)(uVar47 + lVar24)),*(undefined4 *)(uVar26 + lVar28),0x10);
    auVar261 = insertps(ZEXT416(*(uint *)(param_1 + lVar36)),
                        *(undefined4 *)(param_1 + auVar249._4_4_),0x10);
    auVar212 = insertps(ZEXT416(*(uint *)(uVar27 + lVar35)),*(undefined4 *)(uVar34 + lVar38),0x10);
    auVar229 = insertps(ZEXT416(*(uint *)(uVar47 + lVar35)),*(undefined4 *)(uVar26 + lVar38),0x10);
    auVar251 = insertps(ZEXT416(*(uint *)(param_1 + lVar44)),
                        *(undefined4 *)(param_1 + auVar276._4_4_),0x10);
    _local_3e8 = insertps(ZEXT416(*(uint *)(uVar27 + lVar45)),*(undefined4 *)(uVar34 + lVar46),0x10)
    ;
  }
  auVar269 = ZEXT416(*(uint *)(uVar47 + lVar45));
  uVar52 = auVar129._8_4_;
  uVar56 = auVar129._12_4_;
  uVar53 = auVar224._8_4_;
  uVar54 = auVar224._12_4_;
  if (!bVar50) {
    auVar269 = insertps(auVar269,*(undefined4 *)(uVar26 + lVar46),0x10);
  }
  if ((bVar29 & 4) != 0) {
    auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + auVar193._8_4_),0x20);
    auVar300 = insertps(auVar300,*(undefined4 *)((ulonglong)uVar52 + lVar42),0x20);
    auVar317 = insertps(auVar317,*(undefined4 *)((ulonglong)uVar53 + lVar42),0x20);
    auVar319 = insertps(auVar319,*(undefined4 *)(param_1 + auVar316._8_4_),0x20);
    _local_4a8 = insertps(_local_4a8,*(undefined4 *)((ulonglong)uVar52 + lVar32),0x20);
    auVar135 = insertps(auVar135,*(undefined4 *)((ulonglong)uVar53 + lVar32),0x20);
    auVar261 = insertps(auVar261,*(undefined4 *)(param_1 + auVar249._8_4_),0x20);
    auVar212 = insertps(auVar212,*(undefined4 *)((ulonglong)uVar52 + lVar39),0x20);
    auVar229 = insertps(auVar229,*(undefined4 *)((ulonglong)uVar53 + lVar39),0x20);
    auVar251 = insertps(auVar251,*(undefined4 *)(param_1 + auVar276._8_4_),0x20);
    _local_3e8 = insertps(_local_3e8,*(undefined4 *)((ulonglong)uVar52 + lVar48),0x20);
    auVar269 = insertps(auVar269,*(undefined4 *)((ulonglong)uVar53 + lVar48),0x20);
  }
  if ((char)bVar29 < '\0') {
    auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + auVar193._12_4_),0x30);
    auVar300 = insertps(auVar300,*(undefined4 *)((ulonglong)uVar56 + lVar43),0x30);
    auVar317 = insertps(auVar317,*(undefined4 *)((ulonglong)uVar54 + lVar43),0x30);
    auVar319 = insertps(auVar319,*(undefined4 *)(param_1 + auVar316._12_4_),0x30);
    _local_4a8 = insertps(_local_4a8,*(undefined4 *)((ulonglong)uVar56 + lVar33),0x30);
    auVar135 = insertps(auVar135,*(undefined4 *)((ulonglong)uVar54 + lVar33),0x30);
    auVar261 = insertps(auVar261,*(undefined4 *)(param_1 + auVar249._12_4_),0x30);
  }
  uVar34 = (ulonglong)((uint)__xmm_0000000c0000000c0000000c0000000c & auVar279._0_4_);
  if ((char)bVar29 < '\0') {
    auVar212 = insertps(auVar212,*(undefined4 *)((ulonglong)uVar56 + lVar40),0x30);
  }
  uVar47 = (ulonglong)(__xmm_0000000c0000000c0000000c0000000c._4_4_ & auVar279._4_4_);
  if ((char)bVar29 < '\0') {
    auVar229 = insertps(auVar229,*(undefined4 *)((ulonglong)uVar54 + lVar40),0x30);
  }
  bVar50 = (char)bVar29 < '\0';
  uVar27 = (ulonglong)SUB164(___xmm_0000000c0000000c0000000c0000000c & auVar279,8);
  if (bVar50) {
    auVar251 = insertps(auVar251,*(undefined4 *)(param_1 + auVar276._12_4_),0x30);
  }
  uVar26 = (ulonglong)SUB164(___xmm_0000000c0000000c0000000c0000000c & auVar279,0xc);
  auVar316 = insertps(ZEXT416(*(uint *)(uVar34 + lVar24)),*(undefined4 *)(uVar47 + lVar28),0x10);
  auVar249 = insertps(ZEXT416(*(uint *)(uVar34 + lVar35)),*(undefined4 *)(uVar47 + lVar38),0x10);
  auVar224 = insertps(ZEXT416(*(uint *)(uVar34 + lVar21)),*(undefined4 *)(uVar47 + lVar41),0x10);
  auVar129 = insertps(ZEXT416(*(uint *)(uVar34 + lVar45)),*(undefined4 *)(uVar47 + lVar46),0x10);
  if (bVar50) {
    _local_3e8 = insertps(_local_3e8,*(undefined4 *)((ulonglong)uVar56 + lVar49),0x30);
  }
  auVar316 = insertps(auVar316,*(undefined4 *)(uVar27 + lVar32),0x20);
  auVar249 = insertps(auVar249,*(undefined4 *)(uVar27 + lVar39),0x20);
  auVar224 = insertps(auVar224,*(undefined4 *)(uVar27 + lVar42),0x20);
  auVar129 = insertps(auVar129,*(undefined4 *)(uVar27 + lVar48),0x20);
  local_478 = auVar300._0_4_;
  fStack_474 = auVar300._4_4_;
  fStack_470 = auVar300._8_4_;
  fStack_46c = auVar300._12_4_;
  if (bVar50) {
    auVar269 = insertps(auVar269,*(undefined4 *)((ulonglong)uVar54 + lVar49),0x30);
  }
  fVar273 = auVar319._4_4_;
  fVar274 = auVar319._12_4_;
  local_388 = auVar67._0_4_;
  fStack_384 = auVar67._4_4_;
  fStack_380 = auVar67._8_4_;
  fStack_37c = auVar67._12_4_;
  local_408._0_4_ = auVar319._0_4_;
  auVar252._0_4_ = (float)local_408._0_4_ - local_388;
  auVar252._4_4_ = fVar273 - fStack_384;
  fVar234 = auVar319._8_4_;
  auVar252._8_4_ = fVar234 - fStack_380;
  auVar252._12_4_ = fVar274 - fStack_37c;
  auVar118._0_4_ = (float)local_4a8._0_4_ - local_478;
  auVar118._4_4_ = (float)local_4a8._4_4_ - fStack_474;
  auVar118._8_4_ = fStack_4a0 - fStack_470;
  auVar118._12_4_ = fStack_49c - fStack_46c;
  local_3f8._0_4_ = auVar135._0_4_;
  fVar104 = auVar135._4_4_;
  fVar124 = auVar135._12_4_;
  fVar179 = auVar317._0_4_;
  auVar136._0_4_ = (float)local_3f8._0_4_ - fVar179;
  fVar182 = auVar317._4_4_;
  auVar136._4_4_ = fVar104 - fVar182;
  fVar93 = auVar135._8_4_;
  fVar186 = auVar317._8_4_;
  auVar136._8_4_ = fVar93 - fVar186;
  fVar199 = auVar317._12_4_;
  auVar136._12_4_ = fVar124 - fVar199;
  auVar157._0_4_ = auVar118._0_4_ * auVar118._0_4_ + auVar252._0_4_ * auVar252._0_4_;
  auVar157._4_4_ = auVar118._4_4_ * auVar118._4_4_ + auVar252._4_4_ * auVar252._4_4_;
  auVar157._8_4_ = auVar118._8_4_ * auVar118._8_4_ + auVar252._8_4_ * auVar252._8_4_;
  auVar157._12_4_ = auVar118._12_4_ * auVar118._12_4_ + auVar252._12_4_ * auVar252._12_4_;
  auVar320._0_4_ = auVar136._0_4_ * auVar136._0_4_ + auVar157._0_4_;
  auVar320._4_4_ = auVar136._4_4_ * auVar136._4_4_ + auVar157._4_4_;
  auVar320._8_4_ = auVar136._8_4_ * auVar136._8_4_ + auVar157._8_4_;
  auVar320._12_4_ = auVar136._12_4_ * auVar136._12_4_ + auVar157._12_4_;
  auVar193 = sqrtps(auVar157,auVar320);
  uVar52 = -(uint)(auVar320._0_4_ <= ___xmm_00800000008000000080000000800000);
  uVar53 = -(uint)(auVar320._4_4_ <= _UNK_1508be494);
  uVar56 = -(uint)(auVar320._8_4_ <= _UNK_1508be498);
  uVar55 = -(uint)(auVar320._12_4_ <= _UNK_1508be49c);
  auVar78._4_4_ = uVar53;
  auVar78._0_4_ = uVar52;
  auVar276 = divps(auVar252,auVar193);
  auVar67 = divps(auVar118,auVar193);
  auVar78._8_4_ = uVar56;
  auVar78._12_4_ = uVar55;
  auVar317 = blendvps(auVar276,___xmm_3f8000003f8000003f8000003f800000,auVar78);
  auVar193 = divps(auVar136,auVar193);
  fVar62 = (float)(~uVar52 & auVar67._0_4_);
  fVar64 = (float)(~uVar53 & auVar67._4_4_);
  fVar90 = (float)(~uVar56 & auVar67._8_4_);
  fVar92 = (float)(~uVar55 & auVar67._12_4_);
  fVar315 = (float)(~uVar52 & auVar193._0_4_);
  fVar312 = (float)(~uVar53 & auVar193._4_4_);
  fVar259 = (float)(~uVar56 & auVar193._8_4_);
  fVar264 = (float)(~uVar55 & auVar193._12_4_);
  fVar239 = auVar261._0_4_;
  fVar63 = local_388 - fVar239;
  fVar244 = auVar261._4_4_;
  fVar94 = fStack_384 - fVar244;
  fVar247 = auVar261._8_4_;
  fVar91 = fStack_380 - fVar247;
  fVar255 = auVar261._12_4_;
  fVar106 = fStack_37c - fVar255;
  fVar202 = auVar212._0_4_;
  fVar153 = local_478 - fVar202;
  fVar204 = auVar212._4_4_;
  fVar145 = fStack_474 - fVar204;
  fVar206 = auVar212._8_4_;
  fVar146 = fStack_470 - fVar206;
  fVar209 = auVar212._12_4_;
  fVar168 = fStack_46c - fVar209;
  fVar215 = auVar229._0_4_;
  fVar180 = fVar179 - fVar215;
  fVar216 = auVar229._4_4_;
  fVar183 = fVar182 - fVar216;
  fVar218 = auVar229._8_4_;
  fVar203 = fVar186 - fVar218;
  fVar220 = auVar229._12_4_;
  fVar200 = fVar199 - fVar220;
  fVar149 = (float)local_408._0_4_ - fVar239;
  fVar150 = fVar273 - fVar244;
  fVar152 = fVar234 - fVar247;
  fVar207 = fVar274 - fVar255;
  fVar240 = (float)local_4a8._0_4_ - fVar202;
  fVar245 = (float)local_4a8._4_4_ - fVar204;
  fVar248 = fStack_4a0 - fVar206;
  fVar256 = fStack_49c - fVar209;
  auVar176._0_4_ = (float)local_3f8._0_4_ - fVar215;
  auVar176._4_4_ = fVar104 - fVar216;
  auVar176._8_4_ = fVar93 - fVar218;
  auVar176._12_4_ = fVar124 - fVar220;
  auVar137._0_4_ = fVar63 * fVar240 - fVar149 * fVar153;
  auVar137._4_4_ = fVar94 * fVar245 - fVar150 * fVar145;
  auVar137._8_4_ = fVar91 * fVar248 - fVar152 * fVar146;
  auVar137._12_4_ = fVar106 * fVar256 - fVar207 * fVar168;
  auVar213._0_4_ = fVar153 * auVar176._0_4_ - fVar240 * fVar180;
  auVar213._4_4_ = fVar145 * auVar176._4_4_ - fVar245 * fVar183;
  auVar213._8_4_ = fVar146 * auVar176._8_4_ - fVar248 * fVar203;
  auVar213._12_4_ = fVar168 * auVar176._12_4_ - fVar256 * fVar200;
  auVar278._0_4_ = fVar149 * fVar180 - fVar63 * auVar176._0_4_;
  auVar278._4_4_ = fVar150 * fVar183 - fVar94 * auVar176._4_4_;
  auVar278._8_4_ = fVar152 * fVar203 - fVar91 * auVar176._8_4_;
  auVar278._12_4_ = fVar207 * fVar200 - fVar106 * auVar176._12_4_;
  auVar79._0_4_ =
       auVar137._0_4_ * auVar137._0_4_ +
       auVar278._0_4_ * auVar278._0_4_ + auVar213._0_4_ * auVar213._0_4_;
  auVar79._4_4_ =
       auVar137._4_4_ * auVar137._4_4_ +
       auVar278._4_4_ * auVar278._4_4_ + auVar213._4_4_ * auVar213._4_4_;
  auVar79._8_4_ =
       auVar137._8_4_ * auVar137._8_4_ +
       auVar278._8_4_ * auVar278._8_4_ + auVar213._8_4_ * auVar213._8_4_;
  auVar79._12_4_ =
       auVar137._12_4_ * auVar137._12_4_ +
       auVar278._12_4_ * auVar278._12_4_ + auVar213._12_4_ * auVar213._12_4_;
  auVar276 = sqrtps(auVar176,auVar79);
  uVar52 = -(uint)(auVar276._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77);
  uVar56 = -(uint)(auVar276._4_4_ <= _UNK_1506895d4);
  uVar57 = -(uint)(auVar276._8_4_ <= _UNK_1506895d8);
  uVar59 = -(uint)(auVar276._12_4_ <= _UNK_1506895dc);
  auVar67 = divps(auVar213,auVar276);
  fVar241 = (float)(~uVar52 & auVar67._0_4_);
  fVar246 = (float)(~uVar56 & auVar67._4_4_);
  fVar299 = (float)(~uVar57 & auVar67._8_4_);
  fVar307 = (float)(~uVar59 & auVar67._12_4_);
  auVar67 = divps(auVar278,auVar276);
  fVar96 = (float)(~uVar52 & auVar67._0_4_);
  fVar121 = (float)(~uVar56 & auVar67._4_4_);
  fVar122 = (float)(~uVar57 & auVar67._8_4_);
  fVar101 = (float)(~uVar59 & auVar67._12_4_);
  auVar67 = divps(auVar137,auVar276);
  fVar222 = (float)(~uVar52 & auVar67._0_4_);
  fVar237 = (float)(~uVar56 & auVar67._4_4_);
  fVar242 = (float)(~uVar57 & auVar67._8_4_);
  fVar205 = (float)(~uVar59 & auVar67._12_4_);
  local_358 = auVar251._0_4_;
  fStack_354 = auVar251._4_4_;
  fStack_350 = auVar251._8_4_;
  fStack_34c = auVar251._12_4_;
  fVar266 = (float)local_408._0_4_ - local_358;
  fVar267 = fVar273 - fStack_354;
  fVar271 = fVar234 - fStack_350;
  fVar272 = fVar274 - fStack_34c;
  fVar165 = (float)local_4a8._0_4_ - (float)local_3e8._0_4_;
  fVar166 = (float)local_4a8._4_4_ - (float)local_3e8._4_4_;
  fVar170 = fStack_4a0 - fStack_3e0;
  fVar172 = fStack_49c - fStack_3dc;
  fVar192 = local_388 - local_358;
  fVar184 = fStack_384 - fStack_354;
  fVar191 = fStack_380 - fStack_350;
  fVar208 = fStack_37c - fStack_34c;
  fVar66 = local_478 - (float)local_3e8._0_4_;
  fVar95 = fStack_474 - (float)local_3e8._4_4_;
  fVar100 = fStack_470 - fStack_3e0;
  fVar107 = fStack_46c - fStack_3dc;
  auVar302._0_4_ = fVar266 * fVar66 - fVar192 * fVar165;
  auVar302._4_4_ = fVar267 * fVar95 - fVar184 * fVar166;
  auVar302._8_4_ = fVar271 * fVar100 - fVar191 * fVar170;
  auVar302._12_4_ = fVar272 * fVar107 - fVar208 * fVar172;
  local_3c8 = auVar269._0_4_;
  fStack_3c4 = auVar269._4_4_;
  fStack_3c0 = auVar269._8_4_;
  fStack_3bc = auVar269._12_4_;
  fVar268 = (float)local_3f8._0_4_ - local_3c8;
  fVar257 = fVar104 - fStack_3c4;
  fVar309 = fVar93 - fStack_3c0;
  fVar258 = fVar124 - fStack_3bc;
  fVar127 = fVar179 - local_3c8;
  fVar147 = fVar182 - fStack_3c4;
  fVar99 = fVar186 - fStack_3c0;
  fVar125 = fVar199 - fStack_3bc;
  auVar80._0_4_ = fVar165 * fVar127 - fVar66 * fVar268;
  auVar80._4_4_ = fVar166 * fVar147 - fVar95 * fVar257;
  auVar80._8_4_ = fVar170 * fVar99 - fVar100 * fVar309;
  auVar80._12_4_ = fVar172 * fVar125 - fVar107 * fVar258;
  auVar198._0_4_ = fVar192 * fVar268 - fVar266 * fVar127;
  auVar198._4_4_ = fVar184 * fVar257 - fVar267 * fVar147;
  auVar198._8_4_ = fVar191 * fVar309 - fVar271 * fVar99;
  auVar198._12_4_ = fVar208 * fVar258 - fVar272 * fVar125;
  auVar138._0_4_ =
       auVar302._0_4_ * auVar302._0_4_ +
       auVar198._0_4_ * auVar198._0_4_ + auVar80._0_4_ * auVar80._0_4_;
  auVar138._4_4_ =
       auVar302._4_4_ * auVar302._4_4_ +
       auVar198._4_4_ * auVar198._4_4_ + auVar80._4_4_ * auVar80._4_4_;
  auVar138._8_4_ =
       auVar302._8_4_ * auVar302._8_4_ +
       auVar198._8_4_ * auVar198._8_4_ + auVar80._8_4_ * auVar80._8_4_;
  auVar138._12_4_ =
       auVar302._12_4_ * auVar302._12_4_ +
       auVar198._12_4_ * auVar198._12_4_ + auVar80._12_4_ * auVar80._12_4_;
  auVar300 = sqrtps(auVar276,auVar138);
  uVar53 = -(uint)(auVar300._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77);
  uVar55 = -(uint)(auVar300._4_4_ <= _UNK_1506895d4);
  uVar58 = -(uint)(auVar300._8_4_ <= _UNK_1506895d8);
  uVar60 = -(uint)(auVar300._12_4_ <= _UNK_1506895dc);
  auVar67 = divps(auVar80,auVar300);
  fVar181 = (float)(~uVar53 & auVar67._0_4_);
  fVar185 = (float)(~uVar55 & auVar67._4_4_);
  fVar283 = (float)(~uVar58 & auVar67._8_4_);
  fVar287 = (float)(~uVar60 & auVar67._12_4_);
  auVar67 = divps(auVar198,auVar300);
  fVar103 = (float)(~uVar53 & auVar67._0_4_);
  fVar65 = (float)(~uVar55 & auVar67._4_4_);
  fVar105 = (float)(~uVar58 & auVar67._8_4_);
  fVar126 = (float)(~uVar60 & auVar67._12_4_);
  auVar67 = divps(auVar302,auVar300);
  fVar148 = (float)(~uVar53 & auVar67._0_4_);
  fVar201 = (float)(~uVar55 & auVar67._4_4_);
  fVar151 = (float)(~uVar58 & auVar67._8_4_);
  fVar164 = (float)(~uVar60 & auVar67._12_4_);
  auVar190._0_4_ = fVar222 * fVar148 + fVar96 * fVar103 + fVar241 * fVar181;
  auVar190._4_4_ = fVar237 * fVar201 + fVar121 * fVar65 + fVar246 * fVar185;
  auVar190._8_4_ = fVar242 * fVar151 + fVar122 * fVar105 + fVar299 * fVar283;
  auVar190._12_4_ = fVar205 * fVar164 + fVar101 * fVar126 + fVar307 * fVar287;
  fVar217 = auVar317._0_4_;
  fVar219 = auVar317._4_4_;
  fVar235 = auVar317._8_4_;
  fVar236 = auVar317._12_4_;
  auVar119._0_4_ =
       (fVar96 * fVar181 - fVar241 * fVar103) * fVar315 +
       (fVar241 * fVar148 - fVar222 * fVar181) * fVar62 +
       (fVar222 * fVar103 - fVar96 * fVar148) * fVar217;
  auVar119._4_4_ =
       (fVar121 * fVar185 - fVar246 * fVar65) * fVar312 +
       (fVar246 * fVar201 - fVar237 * fVar185) * fVar64 +
       (fVar237 * fVar65 - fVar121 * fVar201) * fVar219;
  auVar119._8_4_ =
       (fVar122 * fVar283 - fVar299 * fVar105) * fVar259 +
       (fVar299 * fVar151 - fVar242 * fVar283) * fVar90 +
       (fVar242 * fVar105 - fVar122 * fVar151) * fVar235;
  auVar119._12_4_ =
       (fVar101 * fVar287 - fVar307 * fVar126) * fVar264 +
       (fVar307 * fVar164 - fVar205 * fVar287) * fVar92 +
       (fVar205 * fVar126 - fVar101 * fVar164) * fVar236;
  auVar193 = maxps(auVar190,___xmm_bf800000bf800000bf800000bf800000);
  auVar67 = maxps(auVar119,___xmm_bf800000bf800000bf800000bf800000);
  auVar317 = minps(auVar193,___xmm_3f8000003f8000003f8000003f800000);
  auVar193 = minps(auVar67,___xmm_3f8000003f8000003f8000003f800000);
  fVar128 = auVar317._0_4_;
  fVar167 = auVar317._4_4_;
  fVar171 = auVar317._8_4_;
  fVar178 = auVar317._12_4_;
  fVar97 = auVar193._0_4_;
  fVar98 = auVar193._4_4_;
  fVar123 = auVar193._8_4_;
  fVar102 = auVar193._12_4_;
  auVar293._0_4_ = (fVar62 * fVar148 - fVar315 * fVar103) * fVar128 - fVar181 * fVar97;
  auVar293._4_4_ = (fVar64 * fVar201 - fVar312 * fVar65) * fVar167 - fVar185 * fVar98;
  auVar293._8_4_ = (fVar90 * fVar151 - fVar259 * fVar105) * fVar171 - fVar283 * fVar123;
  auVar293._12_4_ = (fVar92 * fVar164 - fVar264 * fVar126) * fVar178 - fVar287 * fVar102;
  auVar81._0_4_ = (fVar315 * fVar181 - fVar217 * fVar148) * fVar128 - fVar103 * fVar97;
  auVar81._4_4_ = (fVar312 * fVar185 - fVar219 * fVar201) * fVar167 - fVar65 * fVar98;
  auVar81._8_4_ = (fVar259 * fVar283 - fVar235 * fVar151) * fVar171 - fVar105 * fVar123;
  auVar81._12_4_ = (fVar264 * fVar287 - fVar236 * fVar164) * fVar178 - fVar126 * fVar102;
  auVar303._0_4_ = (fVar217 * fVar103 - fVar62 * fVar181) * fVar128 - fVar148 * fVar97;
  auVar303._4_4_ = (fVar219 * fVar65 - fVar64 * fVar185) * fVar167 - fVar201 * fVar98;
  auVar303._8_4_ = (fVar235 * fVar105 - fVar90 * fVar283) * fVar171 - fVar151 * fVar123;
  auVar303._12_4_ = (fVar236 * fVar126 - fVar92 * fVar287) * fVar178 - fVar164 * fVar102;
  auVar319 = divps(auVar293,auVar276);
  auVar67 = divps(auVar81,auVar276);
  auVar276 = divps(auVar303,auVar276);
  fVar223 = (float)(~uVar52 & auVar319._0_4_);
  fVar238 = (float)(~uVar56 & auVar319._4_4_);
  fVar243 = (float)(~uVar57 & auVar319._8_4_);
  fVar221 = (float)(~uVar59 & auVar319._12_4_);
  fVar181 = (float)(~uVar52 & auVar67._0_4_);
  fVar185 = (float)(~uVar56 & auVar67._4_4_);
  fVar283 = (float)(~uVar57 & auVar67._8_4_);
  fVar287 = (float)(~uVar59 & auVar67._12_4_);
  fVar103 = (float)(~uVar52 & auVar276._0_4_);
  fVar65 = (float)(~uVar56 & auVar276._4_4_);
  fVar105 = (float)(~uVar57 & auVar276._8_4_);
  fVar126 = (float)(~uVar59 & auVar276._12_4_);
  auVar177._0_4_ = (fVar315 * fVar96 - fVar62 * fVar222) * fVar128 - fVar241 * fVar97;
  auVar177._4_4_ = (fVar312 * fVar121 - fVar64 * fVar237) * fVar167 - fVar246 * fVar98;
  auVar177._8_4_ = (fVar259 * fVar122 - fVar90 * fVar242) * fVar171 - fVar299 * fVar123;
  auVar177._12_4_ = (fVar264 * fVar101 - fVar92 * fVar205) * fVar178 - fVar307 * fVar102;
  auVar304._0_4_ = (fVar217 * fVar222 - fVar315 * fVar241) * fVar128 - fVar96 * fVar97;
  auVar304._4_4_ = (fVar219 * fVar237 - fVar312 * fVar246) * fVar167 - fVar121 * fVar98;
  auVar304._8_4_ = (fVar235 * fVar242 - fVar259 * fVar299) * fVar171 - fVar122 * fVar123;
  auVar304._12_4_ = (fVar236 * fVar205 - fVar264 * fVar307) * fVar178 - fVar101 * fVar102;
  auVar139._0_4_ = (fVar62 * fVar241 - fVar217 * fVar96) * fVar128 - fVar222 * fVar97;
  auVar139._4_4_ = (fVar64 * fVar246 - fVar219 * fVar121) * fVar167 - fVar237 * fVar98;
  auVar139._8_4_ = (fVar90 * fVar299 - fVar235 * fVar122) * fVar171 - fVar242 * fVar123;
  auVar139._12_4_ = (fVar92 * fVar307 - fVar236 * fVar101) * fVar178 - fVar205 * fVar102;
  auVar276 = divps(auVar177,auVar300);
  auVar319 = divps(auVar304,auVar300);
  auVar67 = divps(auVar139,auVar300);
  fVar235 = (float)(~uVar53 & auVar276._0_4_);
  fVar236 = (float)(~uVar55 & auVar276._4_4_);
  fVar241 = (float)(~uVar58 & auVar276._8_4_);
  fVar246 = (float)(~uVar60 & auVar276._12_4_);
  fVar259 = (float)(~uVar53 & auVar319._0_4_);
  fVar264 = (float)(~uVar55 & auVar319._4_4_);
  fVar284 = (float)(~uVar58 & auVar319._8_4_);
  fVar265 = (float)(~uVar60 & auVar319._12_4_);
  fVar299 = (float)(~uVar53 & auVar67._0_4_);
  fVar307 = (float)(~uVar55 & auVar67._4_4_);
  fVar315 = (float)(~uVar58 & auVar67._8_4_);
  fVar312 = (float)(~uVar60 & auVar67._12_4_);
  fVar148 = fVar149 * fVar181 - fVar240 * fVar223;
  fVar201 = fVar150 * fVar185 - fVar245 * fVar238;
  fVar151 = fVar152 * fVar283 - fVar248 * fVar243;
  fVar164 = fVar207 * fVar287 - fVar256 * fVar221;
  fVar242 = fVar240 * fVar103 - auVar176._0_4_ * fVar181;
  fVar205 = fVar245 * fVar65 - auVar176._4_4_ * fVar185;
  fVar217 = fVar248 * fVar105 - auVar176._8_4_ * fVar283;
  fVar219 = fVar256 * fVar126 - auVar176._12_4_ * fVar287;
  fVar121 = auVar176._0_4_ * fVar223 - fVar149 * fVar103;
  fVar101 = auVar176._4_4_ * fVar238 - fVar150 * fVar65;
  fVar152 = auVar176._8_4_ * fVar243 - fVar152 * fVar105;
  fVar222 = auVar176._12_4_ * fVar221 - fVar207 * fVar126;
  fVar149 = fVar153 * fVar223 - fVar181 * fVar63;
  fVar150 = fVar145 * fVar238 - fVar185 * fVar94;
  fVar207 = fVar146 * fVar243 - fVar283 * fVar91;
  fVar237 = fVar168 * fVar221 - fVar287 * fVar106;
  fVar62 = fVar180 * fVar181 - fVar103 * fVar153;
  fVar64 = fVar183 * fVar185 - fVar65 * fVar145;
  fVar90 = fVar203 * fVar283 - fVar105 * fVar146;
  fVar92 = fVar200 * fVar287 - fVar126 * fVar168;
  fVar103 = fVar63 * fVar103 - fVar223 * fVar180;
  fVar65 = fVar94 * fVar65 - fVar238 * fVar183;
  fVar105 = fVar91 * fVar105 - fVar243 * fVar203;
  fVar126 = fVar106 * fVar126 - fVar221 * fVar200;
  fVar153 = fVar192 * fVar259 - fVar66 * fVar235;
  fVar145 = fVar184 * fVar264 - fVar95 * fVar236;
  fVar146 = fVar191 * fVar284 - fVar100 * fVar241;
  fVar168 = fVar208 * fVar265 - fVar107 * fVar246;
  fVar63 = fVar66 * fVar299 - fVar127 * fVar259;
  fVar66 = fVar95 * fVar307 - fVar147 * fVar264;
  fVar94 = fVar100 * fVar315 - fVar99 * fVar284;
  fVar95 = fVar107 * fVar312 - fVar125 * fVar265;
  fVar91 = fVar127 * fVar235 - fVar192 * fVar299;
  fVar106 = fVar147 * fVar236 - fVar184 * fVar307;
  fVar96 = fVar99 * fVar241 - fVar191 * fVar315;
  fVar122 = fVar125 * fVar246 - fVar208 * fVar312;
  fVar180 = fVar165 * fVar235 - fVar259 * fVar266;
  fVar192 = fVar166 * fVar236 - fVar264 * fVar267;
  fVar181 = fVar170 * fVar241 - fVar284 * fVar271;
  fVar183 = fVar172 * fVar246 - fVar265 * fVar272;
  fVar184 = fVar268 * fVar259 - fVar299 * fVar165;
  fVar185 = fVar257 * fVar264 - fVar307 * fVar166;
  fVar203 = fVar309 * fVar284 - fVar315 * fVar170;
  fVar191 = fVar258 * fVar265 - fVar312 * fVar172;
  fVar100 = fVar266 * fVar299 - fVar235 * fVar268;
  fVar107 = fVar267 * fVar307 - fVar236 * fVar257;
  fVar99 = fVar271 * fVar315 - fVar241 * fVar309;
  fVar125 = fVar272 * fVar312 - fVar246 * fVar258;
  fVar165 = fVar100 + fVar121;
  fVar166 = fVar107 + fVar101;
  fVar170 = fVar99 + fVar152;
  fVar172 = fVar125 + fVar222;
  fVar127 = (float)((uint)fVar100 ^ __xmm_80000000800000008000000080000000) - fVar91;
  fVar147 = (float)((uint)fVar107 ^ _UNK_150651574) - fVar106;
  fVar99 = (float)((uint)fVar99 ^ _UNK_150651578) - fVar96;
  fVar125 = (float)((uint)fVar125 ^ _UNK_15065157c) - fVar122;
  fVar91 = fVar91 + fVar103;
  fVar106 = fVar106 + fVar65;
  fVar96 = fVar96 + fVar105;
  fVar122 = fVar122 + fVar126;
  fVar103 = (float)((uint)fVar121 ^ __xmm_80000000800000008000000080000000) - fVar103;
  fVar65 = (float)((uint)fVar101 ^ _UNK_150651574) - fVar65;
  fVar105 = (float)((uint)fVar152 ^ _UNK_150651578) - fVar105;
  fVar126 = (float)((uint)fVar222 ^ _UNK_15065157c) - fVar126;
  fVar100 = fVar180 + fVar148;
  fVar107 = fVar192 + fVar201;
  fVar121 = fVar181 + fVar151;
  fVar101 = fVar183 + fVar164;
  fVar222 = (float)((uint)fVar180 ^ __xmm_80000000800000008000000080000000) - fVar153;
  fVar180 = (float)((uint)fVar192 ^ _UNK_150651574) - fVar145;
  fVar192 = (float)((uint)fVar181 ^ _UNK_150651578) - fVar146;
  fVar181 = (float)((uint)fVar183 ^ _UNK_15065157c) - fVar168;
  fVar153 = fVar153 + fVar149;
  fVar145 = fVar145 + fVar150;
  fVar146 = fVar146 + fVar207;
  fVar168 = fVar168 + fVar237;
  fVar149 = (float)((uint)fVar148 ^ __xmm_80000000800000008000000080000000) - fVar149;
  fVar150 = (float)((uint)fVar201 ^ _UNK_150651574) - fVar150;
  fVar207 = (float)((uint)fVar151 ^ _UNK_150651578) - fVar207;
  fVar237 = (float)((uint)fVar164 ^ _UNK_15065157c) - fVar237;
  fVar148 = fVar184 + fVar242;
  fVar201 = fVar185 + fVar205;
  fVar151 = fVar203 + fVar217;
  fVar152 = fVar191 + fVar219;
  fVar164 = (float)((uint)fVar184 ^ __xmm_80000000800000008000000080000000) - fVar63;
  fVar183 = (float)((uint)fVar185 ^ _UNK_150651574) - fVar66;
  fVar184 = (float)((uint)fVar203 ^ _UNK_150651578) - fVar94;
  fVar185 = (float)((uint)fVar191 ^ _UNK_15065157c) - fVar95;
  fVar63 = fVar63 + fVar62;
  fVar66 = fVar66 + fVar64;
  fVar94 = fVar94 + fVar90;
  fVar95 = fVar95 + fVar92;
  fVar62 = (float)((uint)fVar242 ^ __xmm_80000000800000008000000080000000) - fVar62;
  fVar64 = (float)((uint)fVar205 ^ _UNK_150651574) - fVar64;
  fVar90 = (float)((uint)fVar217 ^ _UNK_150651578) - fVar90;
  fVar92 = (float)((uint)fVar219 ^ _UNK_15065157c) - fVar92;
  auVar316 = insertps(auVar316,*(undefined4 *)(uVar26 + lVar33),0x30);
  auVar249 = insertps(auVar249,*(undefined4 *)(uVar26 + lVar40),0x30);
  auVar224 = insertps(auVar224,*(undefined4 *)(uVar26 + lVar43),0x30);
  auVar193 = divps(auVar193,auVar317);
  auVar230._0_4_ = __xmm_80000000800000008000000080000000 ^ (uint)auVar193._0_4_;
  auVar230._4_4_ = _UNK_150651574 ^ (uint)auVar193._4_4_;
  auVar230._8_4_ = _UNK_150651578 ^ (uint)auVar193._8_4_;
  auVar230._12_4_ = _UNK_15065157c ^ (uint)auVar193._12_4_;
  auVar276 = maxps(auVar230,auVar193);
  uVar52 = -(uint)((float)__xmm_3f8000003f8000003f8000003f800000 < auVar276._0_4_);
  uVar53 = -(uint)(__xmm_3f8000003f8000003f8000003f800000._4_4_ < auVar276._4_4_);
  uVar56 = -(uint)(__xmm_3f8000003f8000003f8000003f800000._8_4_ < auVar276._8_4_);
  uVar55 = -(uint)(__xmm_3f8000003f8000003f8000003f800000._12_4_ < auVar276._12_4_);
  auVar82._4_4_ = uVar53;
  auVar82._0_4_ = uVar52;
  auVar82._8_4_ = uVar56;
  auVar82._12_4_ = uVar55;
  auVar158._0_4_ = uVar52 & auVar279._0_4_;
  auVar158._4_4_ = uVar53 & auVar279._4_4_;
  auVar158._8_4_ = uVar56 & auVar279._8_4_;
  auVar158._12_4_ = uVar55 & auVar279._12_4_;
  iVar23 = movmskps(uVar54,auVar158);
  auVar129 = insertps(auVar129,*(undefined4 *)(uVar26 + lVar49),0x30);
  auVar67 = ___xmm_3f8000003f8000003f8000003f800000;
  if (iVar23 != 0) {
    auVar67 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar276);
  }
  auVar67 = blendvps(auVar276,auVar67,auVar82);
  fVar203 = auVar67._0_4_;
  fVar191 = auVar67._4_4_;
  fVar283 = auVar67._8_4_;
  fVar200 = auVar67._12_4_;
  fVar208 = fVar203 * fVar203;
  fVar287 = fVar191 * fVar191;
  fVar242 = fVar283 * fVar283;
  fVar205 = fVar200 * fVar200;
  auVar159._0_4_ =
       (((((((___xmm_bb9918b7bb9918b7bb9918b7bb9918b7 * fVar208 +
             ___xmm_3cc6061b3cc6061b3cc6061b3cc6061b) * fVar208 +
            ___xmm_bd732a49bd732a49bd732a49bd732a49) * fVar208 +
           ___xmm_3dcadb2a3dcadb2a3dcadb2a3dcadb2a) * fVar208 +
          ___xmm_be0f8549be0f8549be0f8549be0f8549) * fVar208 +
         ___xmm_3e4c7b543e4c7b543e4c7b543e4c7b54) * fVar208 +
        ___xmm_beaaa8cfbeaaa8cfbeaaa8cfbeaaa8cf) * fVar208 + ___xmm_3f7ffffe3f7ffffe3f7ffffe3f7ffffe
       ) * fVar203;
  auVar159._4_4_ =
       (((((((_UNK_150b51114 * fVar287 + _UNK_150b51124) * fVar287 + _UNK_150b51134) * fVar287 +
           _UNK_150b51144) * fVar287 + _UNK_150b51154) * fVar287 + _UNK_150b51164) * fVar287 +
        _UNK_150b51174) * fVar287 + _UNK_150b51184) * fVar191;
  auVar159._8_4_ =
       (((((((_UNK_150b51118 * fVar242 + _UNK_150b51128) * fVar242 + _UNK_150b51138) * fVar242 +
           _UNK_150b51148) * fVar242 + _UNK_150b51158) * fVar242 + _UNK_150b51168) * fVar242 +
        _UNK_150b51178) * fVar242 + _UNK_150b51188) * fVar283;
  auVar159._12_4_ =
       (((((((_UNK_150b5111c * fVar205 + _UNK_150b5112c) * fVar205 + _UNK_150b5113c) * fVar205 +
           _UNK_150b5114c) * fVar205 + _UNK_150b5115c) * fVar205 + _UNK_150b5116c) * fVar205 +
        _UNK_150b5117c) * fVar205 + _UNK_150b5118c) * fVar200;
  auVar231._0_4_ = ___xmm_3fc90fdb3fc90fdb3fc90fdb3fc90fdb - auVar159._0_4_;
  auVar231._4_4_ = _UNK_150b51194 - auVar159._4_4_;
  auVar231._8_4_ = _UNK_150b51198 - auVar159._8_4_;
  auVar231._12_4_ = _UNK_150b5119c - auVar159._12_4_;
  auVar67 = blendvps(auVar159,auVar231,auVar82);
  auVar83._4_4_ = -(uint)(auVar193._4_4_ < 0.0);
  auVar83._0_4_ = -(uint)(auVar193._0_4_ < 0.0);
  auVar262._0_4_ = __xmm_80000000800000008000000080000000 ^ auVar67._0_4_;
  auVar262._4_4_ = _UNK_150651574 ^ auVar67._4_4_;
  auVar262._8_4_ = _UNK_150651578 ^ auVar67._8_4_;
  auVar262._12_4_ = _UNK_15065157c ^ auVar67._12_4_;
  auVar83._8_4_ = -(uint)(auVar193._8_4_ < 0.0);
  auVar83._12_4_ = -(uint)(auVar193._12_4_ < 0.0);
  auVar193 = blendvps(auVar67,auVar262,auVar83);
  auVar84._4_4_ = -(uint)(fVar98 < 0.0);
  auVar84._0_4_ = -(uint)(fVar97 < 0.0);
  auVar84._8_4_ = -(uint)(fVar123 < 0.0);
  auVar84._12_4_ = -(uint)(fVar102 < 0.0);
  auVar67 = blendvps(___xmm_40490fdb40490fdb40490fdb40490fdb,___xmm_c0490fdbc0490fdbc0490fdbc0490fdb
                     ,auVar84);
  local_488 = auVar224._0_4_;
  fStack_484 = auVar224._4_4_;
  fStack_480 = auVar224._8_4_;
  fStack_47c = auVar224._12_4_;
  local_498 = auVar316._0_4_;
  fStack_494 = auVar316._4_4_;
  fStack_490 = auVar316._8_4_;
  fStack_48c = auVar316._12_4_;
  local_378 = auVar249._0_4_;
  fStack_374 = auVar249._4_4_;
  fStack_370 = auVar249._8_4_;
  fStack_36c = auVar249._12_4_;
  auVar85._0_4_ =
       (fVar149 * fVar149 + fVar103 * fVar103 + fVar62 * fVar62) * local_378 +
       (fVar153 * fVar153 + fVar91 * fVar91 + fVar63 * fVar63) * local_498 +
       (fVar100 * fVar100 + fVar165 * fVar165 + fVar148 * fVar148) * local_488;
  auVar85._4_4_ =
       (fVar150 * fVar150 + fVar65 * fVar65 + fVar64 * fVar64) * fStack_374 +
       (fVar145 * fVar145 + fVar106 * fVar106 + fVar66 * fVar66) * fStack_494 +
       (fVar107 * fVar107 + fVar166 * fVar166 + fVar201 * fVar201) * fStack_484;
  auVar85._8_4_ =
       (fVar207 * fVar207 + fVar105 * fVar105 + fVar90 * fVar90) * fStack_370 +
       (fVar146 * fVar146 + fVar96 * fVar96 + fVar94 * fVar94) * fStack_490 +
       (fVar121 * fVar121 + fVar170 * fVar170 + fVar151 * fVar151) * fStack_480;
  auVar85._12_4_ =
       (fVar237 * fVar237 + fVar126 * fVar126 + fVar92 * fVar92) * fStack_36c +
       (fVar168 * fVar168 + fVar122 * fVar122 + fVar95 * fVar95) * fStack_48c +
       (fVar101 * fVar101 + fVar172 * fVar172 + fVar152 * fVar152) * fStack_47c;
  auVar160._0_4_ = fVar127 * fVar127 + fVar164 * fVar164;
  auVar160._4_4_ = fVar147 * fVar147 + fVar183 * fVar183;
  auVar160._8_4_ = fVar99 * fVar99 + fVar184 * fVar184;
  auVar160._12_4_ = fVar125 * fVar125 + fVar185 * fVar185;
  local_448 = auVar129._0_4_;
  fStack_444 = auVar129._4_4_;
  fStack_440 = auVar129._8_4_;
  fStack_43c = auVar129._12_4_;
  local_268 = auVar250._0_4_;
  auVar276 = pmovsxbd(auVar160,local_268);
  auVar161._0_4_ = auVar276._0_4_ << 2;
  auVar161._4_4_ = auVar276._4_4_ << 2;
  auVar161._8_4_ = auVar276._8_4_ << 2;
  auVar161._12_4_ = auVar276._12_4_ << 2;
  auVar161 = auVar161 & auVar279;
  auVar276 = insertps(ZEXT416(*(uint *)(param_7 + auVar161._0_4_)),
                      *(undefined4 *)(param_7 + auVar161._4_4_),0x10);
  auVar276 = insertps(auVar276,*(undefined4 *)(param_7 + auVar161._8_4_),0x20);
  auVar300 = insertps(auVar276,*(undefined4 *)(param_7 + auVar161._12_4_),0x30);
  local_258 = auVar228._0_4_;
  auVar276 = pmovsxbd(auVar161,local_258);
  auVar162._0_4_ = auVar276._0_4_ << 2;
  auVar162._4_4_ = auVar276._4_4_ << 2;
  auVar162._8_4_ = auVar276._8_4_ << 2;
  auVar162._12_4_ = auVar276._12_4_ << 2;
  auVar163 = auVar162 & auVar279;
  auVar276 = insertps(ZEXT416(*(uint *)(param_10 + auVar163._0_4_)),
                      *(undefined4 *)(param_10 + auVar163._4_4_),0x10);
  auVar276 = insertps(auVar276,*(undefined4 *)(param_10 + auVar163._8_4_),0x20);
  auVar276 = insertps(auVar276,*(undefined4 *)(param_10 + auVar163._12_4_),0x30);
  auVar120._0_4_ = (fVar222 * fVar222 + auVar160._0_4_) * local_448 + auVar85._0_4_;
  auVar120._4_4_ = (fVar180 * fVar180 + auVar160._4_4_) * fStack_444 + auVar85._4_4_;
  auVar120._8_4_ = (fVar192 * fVar192 + auVar160._8_4_) * fStack_440 + auVar85._8_4_;
  auVar120._12_4_ = (fVar181 * fVar181 + auVar160._12_4_) * fStack_43c + auVar85._12_4_;
  if ((bVar37 & 9) == 0) {
    auVar279 = *(undefined1 (*) [16])(param_3 + (int)(uVar51 << 2));
    auVar85 = ZEXT416(*(uint *)(param_4 + (longlong)pbVar22));
    pbVar22 = param_4;
  }
  else {
    puVar13 = (uint *)(param_3 + (int)(uVar51 << 2));
    if ((uVar31 & 1) != 0) {
      auVar279 = ZEXT416(*puVar13);
    }
    if ((uVar31 & 2) != 0) {
      auVar279 = insertps(auVar279,puVar13[1],0x10);
    }
    if ((uVar31 & 4) != 0) {
      auVar279 = insertps(auVar279,puVar13[2],0x20);
    }
    if ((uVar31 & 8) != 0) {
      auVar279 = insertps(auVar279,puVar13[3],0x30);
    }
    param_4 = param_4 + (longlong)pbVar22;
    if ((uVar31 & 1) != 0) {
      pbVar22 = (byte *)(ulonglong)*param_4;
      auVar85 = ZEXT116(*param_4);
    }
    if ((uVar31 & 2) != 0) {
      auVar163._8_8_ = auVar85._8_8_;
      auVar163._0_8_ = auVar85._0_8_ & 0xffffffffffff00ff | (ulonglong)param_4[1] << 8;
      auVar85 = pblendw(auVar85,auVar163,0xfd);
      pbVar22 = param_4;
    }
    if ((uVar31 & 4) != 0) {
      pbVar22 = (byte *)(ulonglong)auVar85[3];
      auVar317 = pmovzxwd(auVar85,auVar85);
      auVar85._8_8_ = auVar317._8_8_;
      auVar85._0_8_ =
           auVar317._0_8_ & 0xffffffff0000ffff | (ulonglong)param_4[2] << 0x10 |
           (longlong)pbVar22 << 0x18;
    }
    if ((uVar31 & 8) != 0) {
      bVar29 = auVar85[2];
      auVar317 = pmovzxwd(auVar85,auVar85);
      auVar85._8_8_ = auVar317._8_8_;
      auVar85._0_8_ =
           auVar317._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar29 << 0x10 |
           (ulonglong)param_4[3] << 0x18;
      pbVar22 = param_4;
    }
  }
  auVar317 = pmovzxbd(auVar163,auVar85 & ___xmm_00000000000000000000000001010101);
  auVar86._4_4_ = -auVar317._4_4_;
  auVar86._0_4_ = -auVar317._0_4_;
  auVar86._8_4_ = -auVar317._8_4_;
  auVar86._12_4_ = SUB124(SUB1612((undefined1  [16])0x0,4),8) - auVar317._12_4_;
  auVar276 = blendvps(auVar300,auVar276,auVar86);
  auVar232._0_4_ =
       auVar276._0_4_ *
       (((float)(auVar67._0_4_ & -(uint)(fVar128 < 0.0)) + auVar193._0_4_) - auVar279._0_4_);
  auVar232._4_4_ =
       auVar276._4_4_ *
       (((float)(auVar67._4_4_ & -(uint)(fVar167 < 0.0)) + auVar193._4_4_) - auVar279._4_4_);
  auVar232._8_4_ =
       auVar276._8_4_ *
       (((float)(auVar67._8_4_ & -(uint)(fVar171 < 0.0)) + auVar193._8_4_) - auVar279._8_4_);
  auVar232._12_4_ =
       auVar276._12_4_ *
       (((float)(auVar67._12_4_ & -(uint)(fVar178 < 0.0)) + auVar193._12_4_) - auVar279._12_4_);
  auVar67 = maxps(auVar232,___xmm_bf490fdbbf490fdbbf490fdbbf490fdb);
  auVar67 = minps(auVar67,___xmm_3f490fdb3f490fdb3f490fdb3f490fdb);
  auVar67 = divps(auVar67,auVar120);
  fVar97 = (float)(-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 < auVar120._0_4_) & auVar67._0_4_
                  );
  fVar98 = (float)(-(uint)(_UNK_1506895d4 < auVar120._4_4_) & auVar67._4_4_);
  fVar123 = (float)(-(uint)(_UNK_1506895d8 < auVar120._8_4_) & auVar67._8_4_);
  fVar102 = (float)(-(uint)(_UNK_1506895dc < auVar120._12_4_) & auVar67._12_4_);
  auVar140._0_4_ = -(uint)(0.0 < local_488 && bVar15);
  auVar140._4_4_ = -(uint)(0.0 < fStack_484 && bVar16);
  auVar140._8_4_ = -(uint)(0.0 < fStack_480 && bVar17);
  auVar140._12_4_ = -(uint)(0.0 < fStack_47c && bVar18);
  iVar20 = movmskps((int)pbVar22,auVar140);
  iVar23 = 0;
  if (iVar20 != 0) {
    bVar29 = (char)((char)iVar20 << 4) >> 4;
    fVar128 = local_488 * fVar97;
    fStack_484 = fStack_484 * fVar98;
    fStack_480 = fStack_480 * fVar123;
    fStack_47c = fStack_47c * fVar102;
    auVar270._0_4_ = local_388 - fVar148 * fVar128;
    auVar270._4_4_ = fStack_384 - fVar201 * fStack_484;
    auVar270._8_4_ = fStack_380 - fVar151 * fStack_480;
    auVar270._12_4_ = fStack_37c - fVar152 * fStack_47c;
    if ((bVar29 & 1) == 0) {
      if ((bVar29 & 2) != 0) goto LAB_14006b346;
LAB_14006aedc:
      if ((bVar29 & 4) != 0) goto LAB_14006b361;
LAB_14006aeec:
      if ((char)bVar29 < '\0') goto LAB_14006b377;
LAB_14006aef7:
      auVar253._0_4_ = local_478 - fVar165 * fVar128;
      auVar253._4_4_ = fStack_474 - fVar166 * fStack_484;
      auVar253._8_4_ = fStack_470 - fVar170 * fStack_480;
      auVar253._12_4_ = fStack_46c - fVar172 * fStack_47c;
      if ((bVar29 & 1) != 0) goto LAB_14006b396;
LAB_14006af04:
      if ((bVar29 & 2) != 0) goto LAB_14006b3b1;
LAB_14006af15:
      if ((bVar29 & 4) != 0) goto LAB_14006b3c6;
LAB_14006af1e:
      if ((char)bVar29 < '\0') goto LAB_14006b3dd;
LAB_14006af29:
      auVar141._0_4_ = fVar179 - fVar100 * fVar128;
      auVar141._4_4_ = fVar182 - fVar107 * fStack_484;
      auVar141._8_4_ = fVar186 - fVar121 * fStack_480;
      auVar141._12_4_ = fVar199 - fVar101 * fStack_47c;
    }
    else {
      *(float *)(param_1 + auVar211._0_4_) = auVar270._0_4_;
      if ((bVar29 & 2) == 0) goto LAB_14006aedc;
LAB_14006b346:
      uVar14 = extractps(auVar270,1);
      *(undefined8 *)(param_1 + auVar211._4_4_) = uVar14;
      if ((bVar29 & 4) == 0) goto LAB_14006aeec;
LAB_14006b361:
      uVar14 = extractps(auVar270,2);
      *(undefined8 *)(param_1 + auVar211._8_4_) = uVar14;
      if (-1 < (char)bVar29) goto LAB_14006aef7;
LAB_14006b377:
      uVar14 = extractps(auVar270,3);
      *(undefined8 *)(param_1 + auVar211._12_4_) = uVar14;
      auVar253._0_4_ = local_478 - fVar165 * fVar128;
      auVar253._4_4_ = fStack_474 - fVar166 * fStack_484;
      auVar253._8_4_ = fStack_470 - fVar170 * fStack_480;
      auVar253._12_4_ = fStack_46c - fVar172 * fStack_47c;
      if ((bVar29 & 1) == 0) goto LAB_14006af04;
LAB_14006b396:
      *(int *)(param_1 + 4 + (longlong)auVar211._0_4_) = auVar253._0_4_;
      if ((bVar29 & 2) == 0) goto LAB_14006af15;
LAB_14006b3b1:
      uVar14 = extractps(auVar253,1);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar211._4_4_) = uVar14;
      if ((bVar29 & 4) == 0) goto LAB_14006af1e;
LAB_14006b3c6:
      uVar14 = extractps(auVar253,2);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar211._8_4_) = uVar14;
      if (-1 < (char)bVar29) goto LAB_14006af29;
LAB_14006b3dd:
      uVar14 = extractps(auVar253,3);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar211._12_4_) = uVar14;
      auVar141._0_4_ = fVar179 - fVar100 * fVar128;
      auVar141._4_4_ = fVar182 - fVar107 * fStack_484;
      auVar141._8_4_ = fVar186 - fVar121 * fStack_480;
      auVar141._12_4_ = fVar199 - fVar101 * fStack_47c;
    }
    if ((bVar29 & 1) != 0) {
      *(int *)(param_1 + 8 + (longlong)auVar211._0_4_) = auVar141._0_4_;
    }
    if ((bVar29 & 2) != 0) {
      uVar14 = extractps(auVar141,1);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar211._4_4_) = uVar14;
    }
    if ((bVar29 & 4) != 0) {
      uVar14 = extractps(auVar141,2);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar211._8_4_) = uVar14;
    }
    if ((char)bVar29 < '\0') {
      uVar14 = extractps(auVar141,3);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar211._12_4_) = uVar14;
    }
    if ((bVar29 & 1) != 0) {
      *(float *)(param_1 + 0xc + (longlong)auVar211._0_4_) = local_488;
    }
    if ((bVar29 & 2) != 0) {
      uVar14 = extractps(auVar224,1);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar211._4_4_) = uVar14;
    }
    if ((bVar29 & 4) != 0) {
      uVar14 = extractps(auVar224,2);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar211._8_4_) = uVar14;
    }
    iVar23 = CONCAT31((int3)((uint)iVar20 >> 8),bVar29);
    if ((char)bVar29 < '\0') {
      uVar14 = extractps(auVar224,3);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar211._12_4_) = uVar14;
      iVar23 = auVar211._12_4_;
    }
  }
  auVar87._0_4_ = -(uint)(0.0 < local_498 && bVar15);
  auVar87._4_4_ = -(uint)(0.0 < fStack_494 && bVar16);
  auVar87._8_4_ = -(uint)(0.0 < fStack_490 && bVar17);
  auVar87._12_4_ = -(uint)(0.0 < fStack_48c && bVar18);
  iVar20 = movmskps(iVar23,auVar87);
  iVar23 = 0;
  if (iVar20 != 0) {
    bVar29 = (char)((char)iVar20 << 4) >> 4;
    fVar100 = local_498 * fVar97;
    fStack_494 = fStack_494 * fVar98;
    fStack_490 = fStack_490 * fVar123;
    fStack_48c = fStack_48c * fVar102;
    local_408._0_4_ = (float)local_408._0_4_ - fVar63 * fVar100;
    local_408._4_4_ = fVar273 - fVar66 * fStack_494;
    fStack_400 = fVar234 - fVar94 * fStack_490;
    fStack_3fc = fVar274 - fVar95 * fStack_48c;
    if ((bVar29 & 1) != 0) {
      *(undefined4 *)(param_1 + auVar189._0_4_) = local_408._0_4_;
    }
    if ((bVar29 & 2) != 0) {
      uVar14 = extractps(_local_408,1);
      *(undefined8 *)(param_1 + auVar189._4_4_) = uVar14;
    }
    if ((bVar29 & 4) != 0) {
      uVar14 = extractps(_local_408,2);
      *(undefined8 *)(param_1 + auVar189._8_4_) = uVar14;
    }
    if ((char)bVar29 < '\0') {
      uVar14 = extractps(_local_408,3);
      *(undefined8 *)(param_1 + auVar189._12_4_) = uVar14;
    }
    local_4a8._0_4_ = (float)local_4a8._0_4_ - fVar91 * fVar100;
    local_4a8._4_4_ = (float)local_4a8._4_4_ - fVar106 * fStack_494;
    fStack_4a0 = fStack_4a0 - fVar96 * fStack_490;
    fStack_49c = fStack_49c - fVar122 * fStack_48c;
    if ((bVar29 & 1) != 0) {
      *(undefined4 *)(param_1 + 4 + (longlong)auVar189._0_4_) = local_4a8._0_4_;
    }
    if ((bVar29 & 2) != 0) {
      uVar14 = extractps(_local_4a8,1);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar189._4_4_) = uVar14;
    }
    if ((bVar29 & 4) != 0) {
      uVar14 = extractps(_local_4a8,2);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar189._8_4_) = uVar14;
    }
    if ((char)bVar29 < '\0') {
      uVar14 = extractps(_local_4a8,3);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar189._12_4_) = uVar14;
    }
    local_3f8._0_4_ = (float)local_3f8._0_4_ - fVar153 * fVar100;
    local_3f8._4_4_ = fVar104 - fVar145 * fStack_494;
    fStack_3f0 = fVar93 - fVar146 * fStack_490;
    fStack_3ec = fVar124 - fVar168 * fStack_48c;
    if ((bVar29 & 1) != 0) {
      *(undefined4 *)(param_1 + 8 + (longlong)auVar189._0_4_) = local_3f8._0_4_;
    }
    if ((bVar29 & 2) != 0) {
      uVar14 = extractps(_local_3f8,1);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar189._4_4_) = uVar14;
    }
    if ((bVar29 & 4) != 0) {
      uVar14 = extractps(_local_3f8,2);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar189._8_4_) = uVar14;
    }
    if ((char)bVar29 < '\0') {
      uVar14 = extractps(_local_3f8,3);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar189._12_4_) = uVar14;
    }
    if ((bVar29 & 1) != 0) {
      *(float *)(param_1 + 0xc + (longlong)auVar189._0_4_) = local_498;
    }
    if ((bVar29 & 2) != 0) {
      uVar14 = extractps(auVar316,1);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar189._4_4_) = uVar14;
    }
    if ((bVar29 & 4) != 0) {
      uVar14 = extractps(auVar316,2);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar189._8_4_) = uVar14;
    }
    iVar23 = CONCAT31((int3)((uint)iVar20 >> 8),bVar29);
    if ((char)bVar29 < '\0') {
      uVar14 = extractps(auVar316,3);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar189._12_4_) = uVar14;
      iVar23 = auVar189._12_4_;
    }
  }
  auVar142._0_4_ = -(uint)(0.0 < local_378 && bVar15);
  auVar142._4_4_ = -(uint)(0.0 < fStack_374 && bVar16);
  auVar142._8_4_ = -(uint)(0.0 < fStack_370 && bVar17);
  auVar142._12_4_ = -(uint)(0.0 < fStack_36c && bVar18);
  iVar20 = movmskps(iVar23,auVar142);
  iVar23 = 0;
  if (iVar20 == 0) goto LAB_14006b1ae;
  bVar29 = (char)((char)iVar20 << 4) >> 4;
  fVar63 = local_378 * fVar97;
  fStack_374 = fStack_374 * fVar98;
  fStack_370 = fStack_370 * fVar123;
  fStack_36c = fStack_36c * fVar102;
  auVar263._0_4_ = fVar239 - fVar62 * fVar63;
  auVar263._4_4_ = fVar244 - fVar64 * fStack_374;
  auVar263._8_4_ = fVar247 - fVar90 * fStack_370;
  auVar263._12_4_ = fVar255 - fVar92 * fStack_36c;
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + auVar197._0_4_) = auVar263._0_4_;
  }
  if ((bVar29 & 2) == 0) {
    if ((bVar29 & 4) != 0) goto LAB_14006b686;
LAB_14006b130:
    if ((char)bVar29 < '\0') goto LAB_14006b69c;
LAB_14006b13b:
    auVar254._0_4_ = fVar202 - fVar103 * fVar63;
    auVar254._4_4_ = fVar204 - fVar65 * fStack_374;
    auVar254._8_4_ = fVar206 - fVar105 * fStack_370;
    auVar254._12_4_ = fVar209 - fVar126 * fStack_36c;
    if ((bVar29 & 1) != 0) goto LAB_14006b6bb;
LAB_14006b148:
    if ((bVar29 & 2) != 0) goto LAB_14006b6ce;
LAB_14006b151:
    if ((bVar29 & 4) != 0) goto LAB_14006b6e3;
LAB_14006b15a:
    if ((char)bVar29 < '\0') goto LAB_14006b6fa;
LAB_14006b165:
    auVar214._0_4_ = fVar215 - fVar149 * fVar63;
    auVar214._4_4_ = fVar216 - fVar150 * fStack_374;
    auVar214._8_4_ = fVar218 - fVar207 * fStack_370;
    auVar214._12_4_ = fVar220 - fVar237 * fStack_36c;
  }
  else {
    uVar14 = extractps(auVar263,1);
    *(undefined8 *)(param_1 + auVar197._4_4_) = uVar14;
    if ((bVar29 & 4) == 0) goto LAB_14006b130;
LAB_14006b686:
    uVar14 = extractps(auVar263,2);
    *(undefined8 *)(param_1 + auVar197._8_4_) = uVar14;
    if (-1 < (char)bVar29) goto LAB_14006b13b;
LAB_14006b69c:
    uVar14 = extractps(auVar263,3);
    *(undefined8 *)(param_1 + auVar197._12_4_) = uVar14;
    auVar254._0_4_ = fVar202 - fVar103 * fVar63;
    auVar254._4_4_ = fVar204 - fVar65 * fStack_374;
    auVar254._8_4_ = fVar206 - fVar105 * fStack_370;
    auVar254._12_4_ = fVar209 - fVar126 * fStack_36c;
    if ((bVar29 & 1) == 0) goto LAB_14006b148;
LAB_14006b6bb:
    *(int *)(param_1 + 4 + (longlong)auVar197._0_4_) = auVar254._0_4_;
    if ((bVar29 & 2) == 0) goto LAB_14006b151;
LAB_14006b6ce:
    uVar14 = extractps(auVar254,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar197._4_4_) = uVar14;
    if ((bVar29 & 4) == 0) goto LAB_14006b15a;
LAB_14006b6e3:
    uVar14 = extractps(auVar254,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar197._8_4_) = uVar14;
    if (-1 < (char)bVar29) goto LAB_14006b165;
LAB_14006b6fa:
    uVar14 = extractps(auVar254,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar197._12_4_) = uVar14;
    auVar214._0_4_ = fVar215 - fVar149 * fVar63;
    auVar214._4_4_ = fVar216 - fVar150 * fStack_374;
    auVar214._8_4_ = fVar218 - fVar207 * fStack_370;
    auVar214._12_4_ = fVar220 - fVar237 * fStack_36c;
  }
  if ((bVar29 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar197._0_4_) = auVar214._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar14 = extractps(auVar214,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar197._4_4_) = uVar14;
  }
  if ((bVar29 & 4) != 0) {
    uVar14 = extractps(auVar214,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar197._8_4_) = uVar14;
  }
  if ((char)bVar29 < '\0') {
    uVar14 = extractps(auVar214,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar197._12_4_) = uVar14;
  }
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar197._0_4_) = local_378;
  }
  if ((bVar29 & 2) != 0) {
    uVar14 = extractps(auVar249,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar197._4_4_) = uVar14;
  }
  if ((bVar29 & 4) != 0) {
    uVar14 = extractps(auVar249,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar197._8_4_) = uVar14;
  }
  iVar23 = CONCAT31((int3)((uint)iVar20 >> 8),bVar29);
  if ((char)bVar29 < '\0') {
    uVar14 = extractps(auVar249,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar197._12_4_) = uVar14;
    iVar23 = auVar197._12_4_;
  }
LAB_14006b1ae:
  auVar88._0_4_ = -(uint)(0.0 < local_448 && bVar15);
  auVar88._4_4_ = -(uint)(0.0 < fStack_444 && bVar16);
  auVar88._8_4_ = -(uint)(0.0 < fStack_440 && bVar17);
  auVar88._12_4_ = -(uint)(0.0 < fStack_43c && bVar18);
  iVar23 = movmskps(iVar23,auVar88);
  if (iVar23 == 0) {
    return;
  }
  bVar29 = (char)((char)iVar23 << 4) >> 4;
  fVar97 = fVar97 * local_448;
  fVar98 = fVar98 * fStack_444;
  fVar123 = fVar123 * fStack_440;
  fVar102 = fVar102 * fStack_43c;
  auVar143._0_4_ = local_358 - fVar164 * fVar97;
  auVar143._4_4_ = fStack_354 - fVar183 * fVar98;
  auVar143._8_4_ = fStack_350 - fVar184 * fVar123;
  auVar143._12_4_ = fStack_34c - fVar185 * fVar102;
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + auVar156._0_4_) = auVar143._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar14 = extractps(auVar143,1);
    *(undefined8 *)(param_1 + auVar156._4_4_) = uVar14;
  }
  if ((bVar29 & 4) != 0) {
    uVar14 = extractps(auVar143,2);
    *(undefined8 *)(param_1 + auVar156._8_4_) = uVar14;
  }
  if ((char)bVar29 < '\0') {
    uVar14 = extractps(auVar143,3);
    *(undefined8 *)(param_1 + auVar156._12_4_) = uVar14;
    auVar89._0_4_ = (float)local_3e8._0_4_ - fVar127 * fVar97;
    auVar89._4_4_ = (float)local_3e8._4_4_ - fVar147 * fVar98;
    auVar89._8_4_ = fStack_3e0 - fVar99 * fVar123;
    auVar89._12_4_ = fStack_3dc - fVar125 * fVar102;
  }
  else {
    auVar89._0_4_ = (float)local_3e8._0_4_ - fVar127 * fVar97;
    auVar89._4_4_ = (float)local_3e8._4_4_ - fVar147 * fVar98;
    auVar89._8_4_ = fStack_3e0 - fVar99 * fVar123;
    auVar89._12_4_ = fStack_3dc - fVar125 * fVar102;
  }
  if ((bVar29 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar156._0_4_) = auVar89._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar14 = extractps(auVar89,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar156._4_4_) = uVar14;
  }
  if ((bVar29 & 4) != 0) {
    uVar14 = extractps(auVar89,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar156._8_4_) = uVar14;
  }
  if ((char)bVar29 < '\0') {
    uVar14 = extractps(auVar89,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar156._12_4_) = uVar14;
    auVar233._0_4_ = local_3c8 - fVar222 * fVar97;
    auVar233._4_4_ = fStack_3c4 - fVar180 * fVar98;
    auVar233._8_4_ = fStack_3c0 - fVar192 * fVar123;
    auVar233._12_4_ = fStack_3bc - fVar181 * fVar102;
  }
  else {
    auVar233._0_4_ = local_3c8 - fVar222 * fVar97;
    auVar233._4_4_ = fStack_3c4 - fVar180 * fVar98;
    auVar233._8_4_ = fStack_3c0 - fVar192 * fVar123;
    auVar233._12_4_ = fStack_3bc - fVar181 * fVar102;
  }
  if ((bVar29 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar156._0_4_) = auVar233._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar14 = extractps(auVar233,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar156._4_4_) = uVar14;
  }
  if ((bVar29 & 4) != 0) {
    uVar14 = extractps(auVar233,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar156._8_4_) = uVar14;
  }
  if ((char)bVar29 < '\0') {
    uVar14 = extractps(auVar233,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar156._12_4_) = uVar14;
  }
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar156._0_4_) = local_448;
  }
  if ((bVar29 & 2) != 0) {
    uVar14 = extractps(auVar129,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar156._4_4_) = uVar14;
  }
  if ((bVar29 & 4) != 0) {
    uVar14 = extractps(auVar129,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar156._8_4_) = uVar14;
  }
  if ((char)bVar29 < '\0') {
    uVar14 = extractps(auVar129,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar156._12_4_) = uVar14;
  }
  return;
}

// InitBendingConstraintsIsBuckled_sse4 @ 14006b930

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InitBendingConstraintsIsBuckled_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,float param_5,
               uint param_6)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  ulonglong uVar7;
  undefined1 (*pauVar8) [16];
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  uint *puVar13;
  byte bVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  float fVar38;
  int iVar39;
  float fVar52;
  float fVar53;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar54;
  undefined1 auVar44 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar55;
  float fVar60;
  int iVar61;
  float fVar62;
  float fVar63;
  int iVar64;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  float fVar65;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  float fVar80;
  float fVar89;
  float fVar90;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar91;
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
  float fVar101;
  float fVar102;
  undefined1 auVar96 [16];
  float fVar103;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  float fVar104;
  float fVar109;
  float fVar111;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  float fVar113;
  undefined1 auVar107 [16];
  float fVar110;
  float fVar112;
  float fVar114;
  undefined1 auVar108 [16];
  float fVar115;
  float fVar119;
  float fVar120;
  float fVar121;
  float fVar122;
  float fVar123;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  float fVar126;
  undefined1 auVar127 [16];
  float fVar128;
  float fVar131;
  float fVar132;
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  float fVar133;
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  float fVar136;
  float fVar140;
  float fVar141;
  float fVar142;
  float fVar143;
  undefined1 auVar137 [16];
  float fVar144;
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  float fVar145;
  float fVar148;
  float fVar149;
  undefined1 auVar146 [16];
  float fVar150;
  undefined1 auVar147 [16];
  float fVar151;
  float fVar156;
  float fVar157;
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  float fVar158;
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 auVar45 [16];
  
  uVar16 = param_6 + 3;
  if (-1 < (int)param_6) {
    uVar16 = param_6;
  }
  uVar16 = uVar16 & 0xfffffffc;
  if ((int)uVar16 < 1) {
    uVar7 = 0;
  }
  else {
    uVar10 = 0;
    auVar43._4_4_ = _UNK_150b51104;
    auVar43._0_4_ = ___xmm_40490fdb40490fdb40490fdb40490fdb;
    auVar43._8_4_ = _UNK_150b51108;
    auVar43._12_4_ = _UNK_150b5110c;
    uVar7 = 0;
    auVar66 = ___xmm_3f8000003f8000003f8000003f800000;
    uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar25 = _UNK_15061cc74;
    uVar28 = _UNK_15061cc78;
    uVar29 = _UNK_15061cc7c;
    do {
      auVar88 = ___xmm_3f8000003f8000003f8000003f800000;
      uVar37 = _UNK_15061cc7c;
      uVar36 = _UNK_15061cc78;
      uVar33 = _UNK_15061cc74;
      uVar32 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      piVar1 = (int *)(param_2 + uVar10 * 4);
      piVar2 = (int *)(param_2 + 0x10 + uVar10 * 4);
      piVar3 = (int *)(param_2 + 0x20 + uVar10 * 4);
      piVar4 = (int *)(param_2 + 0x30 + uVar10 * 4);
      lVar12 = (longlong)(*piVar1 * 3);
      lVar9 = (longlong)(*piVar2 * 3);
      lVar19 = (longlong)(*piVar3 * 3);
      lVar21 = (longlong)(*piVar4 * 3);
      auVar152 = insertps(ZEXT416(*(uint *)(param_1 + lVar12 * 4)),
                          *(undefined4 *)(param_1 + lVar9 * 4),0x10);
      auVar152 = insertps(auVar152,*(undefined4 *)(param_1 + lVar19 * 4),0x20);
      auVar153 = insertps(auVar152,*(undefined4 *)(param_1 + lVar21 * 4),0x30);
      auVar152 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar12 * 4)),
                          *(undefined4 *)(param_1 + 4 + lVar9 * 4),0x10);
      auVar152 = insertps(auVar152,*(undefined4 *)(param_1 + 4 + lVar19 * 4),0x20);
      auVar146 = insertps(auVar152,*(undefined4 *)(param_1 + 4 + lVar21 * 4),0x30);
      auVar152 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar12 * 4)),
                          *(undefined4 *)(param_1 + 8 + lVar9 * 4),0x10);
      auVar152 = insertps(auVar152,*(undefined4 *)(param_1 + 8 + lVar19 * 4),0x20);
      auVar152 = insertps(auVar152,*(undefined4 *)(param_1 + 8 + lVar21 * 4),0x30);
      lVar12 = (longlong)(piVar1[1] * 3);
      lVar9 = (longlong)(piVar2[1] * 3);
      lVar19 = (longlong)(piVar3[1] * 3);
      lVar21 = (longlong)(piVar4[1] * 3);
      auVar72 = insertps(ZEXT416(*(uint *)(param_1 + lVar12 * 4)),
                         *(undefined4 *)(param_1 + lVar9 * 4),0x10);
      auVar72 = insertps(auVar72,*(undefined4 *)(param_1 + lVar19 * 4),0x20);
      auVar72 = insertps(auVar72,*(undefined4 *)(param_1 + lVar21 * 4),0x30);
      auVar105 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar12 * 4)),
                          *(undefined4 *)(param_1 + 4 + lVar9 * 4),0x10);
      auVar105 = insertps(auVar105,*(undefined4 *)(param_1 + 4 + lVar19 * 4),0x20);
      auVar106 = insertps(auVar105,*(undefined4 *)(param_1 + 4 + lVar21 * 4),0x30);
      auVar105 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar12 * 4)),
                          *(undefined4 *)(param_1 + 8 + lVar9 * 4),0x10);
      auVar105 = insertps(auVar105,*(undefined4 *)(param_1 + 8 + lVar19 * 4),0x20);
      auVar137 = insertps(auVar105,*(undefined4 *)(param_1 + 8 + lVar21 * 4),0x30);
      lVar12 = (longlong)(piVar1[2] * 3);
      lVar9 = (longlong)(piVar2[2] * 3);
      lVar19 = (longlong)(piVar3[2] * 3);
      lVar21 = (longlong)(piVar4[2] * 3);
      auVar105 = insertps(ZEXT416(*(uint *)(param_1 + lVar12 * 4)),
                          *(undefined4 *)(param_1 + lVar9 * 4),0x10);
      auVar105 = insertps(auVar105,*(undefined4 *)(param_1 + lVar19 * 4),0x20);
      auVar105 = insertps(auVar105,*(undefined4 *)(param_1 + lVar21 * 4),0x30);
      auVar129 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar12 * 4)),
                          *(undefined4 *)(param_1 + 4 + lVar9 * 4),0x10);
      auVar129 = insertps(auVar129,*(undefined4 *)(param_1 + 4 + lVar19 * 4),0x20);
      auVar130 = insertps(auVar129,*(undefined4 *)(param_1 + 4 + lVar21 * 4),0x30);
      auVar129 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar12 * 4)),
                          *(undefined4 *)(param_1 + 8 + lVar9 * 4),0x10);
      auVar129 = insertps(auVar129,*(undefined4 *)(param_1 + 8 + lVar19 * 4),0x20);
      auVar129 = insertps(auVar129,*(undefined4 *)(param_1 + 8 + lVar21 * 4),0x30);
      puVar13 = (uint *)(param_3 + (uVar10 & 0xffffffff));
      fVar141 = auVar43._0_4_;
      fVar143 = auVar43._4_4_;
      fVar120 = auVar43._8_4_;
      fVar122 = auVar43._12_4_;
      fVar110 = auVar72._0_4_;
      fVar112 = auVar72._4_4_;
      fVar114 = auVar72._12_4_;
      fVar151 = auVar153._0_4_;
      auVar93._0_4_ = fVar110 - fVar151;
      fVar156 = auVar153._4_4_;
      auVar93._4_4_ = fVar112 - fVar156;
      fVar126 = auVar72._8_4_;
      fVar157 = auVar153._8_4_;
      auVar93._8_4_ = fVar126 - fVar157;
      fVar158 = auVar153._12_4_;
      auVar93._12_4_ = fVar114 - fVar158;
      fVar104 = auVar106._0_4_;
      fVar109 = auVar106._4_4_;
      fVar113 = auVar106._12_4_;
      fVar145 = auVar146._0_4_;
      auVar153._0_4_ = fVar104 - fVar145;
      fVar148 = auVar146._4_4_;
      auVar153._4_4_ = fVar109 - fVar148;
      fVar111 = auVar106._8_4_;
      fVar149 = auVar146._8_4_;
      auVar153._8_4_ = fVar111 - fVar149;
      fVar150 = auVar146._12_4_;
      auVar153._12_4_ = fVar113 - fVar150;
      fVar136 = auVar137._0_4_;
      fVar140 = auVar137._4_4_;
      fVar144 = auVar137._12_4_;
      fVar55 = auVar152._0_4_;
      auVar96._0_4_ = fVar136 - fVar55;
      fVar60 = auVar152._4_4_;
      auVar96._4_4_ = fVar140 - fVar60;
      fVar62 = auVar152._8_4_;
      fVar142 = auVar137._8_4_;
      auVar96._8_4_ = fVar142 - fVar62;
      fVar63 = auVar152._12_4_;
      auVar96._12_4_ = fVar144 - fVar63;
      auVar152._0_4_ = auVar93._0_4_ * auVar93._0_4_;
      auVar152._4_4_ = auVar93._4_4_ * auVar93._4_4_;
      auVar152._8_4_ = auVar93._8_4_ * auVar93._8_4_;
      auVar152._12_4_ = auVar93._12_4_ * auVar93._12_4_;
      auVar124._0_4_ =
           auVar96._0_4_ * auVar96._0_4_ + auVar153._0_4_ * auVar153._0_4_ + auVar152._0_4_;
      auVar124._4_4_ =
           auVar96._4_4_ * auVar96._4_4_ + auVar153._4_4_ * auVar153._4_4_ + auVar152._4_4_;
      auVar124._8_4_ =
           auVar96._8_4_ * auVar96._8_4_ + auVar153._8_4_ * auVar153._8_4_ + auVar152._8_4_;
      auVar124._12_4_ =
           auVar96._12_4_ * auVar96._12_4_ + auVar153._12_4_ * auVar153._12_4_ + auVar152._12_4_;
      auVar43 = sqrtps(auVar152,auVar124);
      uVar23 = -(uint)(auVar124._0_4_ <= ___xmm_00800000008000000080000000800000);
      uVar26 = -(uint)(auVar124._4_4_ <= _UNK_1508be494);
      uVar30 = -(uint)(auVar124._8_4_ <= _UNK_1508be498);
      uVar34 = -(uint)(auVar124._12_4_ <= _UNK_1508be49c);
      auVar72._4_4_ = uVar26;
      auVar72._0_4_ = uVar23;
      auVar106 = divps(auVar93,auVar43);
      auVar152 = divps(auVar153,auVar43);
      auVar146 = divps(auVar96,auVar43);
      auVar72._8_4_ = uVar30;
      auVar72._12_4_ = uVar34;
      auVar153 = blendvps(auVar106,auVar66,auVar72);
      fVar95 = fVar151 - auVar105._0_4_;
      fVar101 = fVar156 - auVar105._4_4_;
      fVar102 = fVar157 - auVar105._8_4_;
      fVar103 = fVar158 - auVar105._12_4_;
      fVar65 = fVar145 - auVar130._0_4_;
      fVar69 = fVar148 - auVar130._4_4_;
      fVar70 = fVar149 - auVar130._8_4_;
      fVar71 = fVar150 - auVar130._12_4_;
      fVar38 = fVar110 - auVar105._0_4_;
      fVar52 = fVar112 - auVar105._4_4_;
      fVar53 = fVar126 - auVar105._8_4_;
      fVar54 = fVar114 - auVar105._12_4_;
      fVar80 = fVar104 - auVar130._0_4_;
      fVar89 = fVar109 - auVar130._4_4_;
      fVar90 = fVar111 - auVar130._8_4_;
      fVar91 = fVar113 - auVar130._12_4_;
      fVar115 = fVar55 - auVar129._0_4_;
      fVar119 = fVar60 - auVar129._4_4_;
      fVar121 = fVar62 - auVar129._8_4_;
      fVar123 = fVar63 - auVar129._12_4_;
      fVar128 = fVar136 - auVar129._0_4_;
      fVar131 = fVar140 - auVar129._4_4_;
      fVar132 = fVar142 - auVar129._8_4_;
      fVar133 = fVar144 - auVar129._12_4_;
      auVar97._0_4_ = fVar95 * fVar80 - fVar38 * fVar65;
      auVar97._4_4_ = fVar101 * fVar89 - fVar52 * fVar69;
      auVar97._8_4_ = fVar102 * fVar90 - fVar53 * fVar70;
      auVar97._12_4_ = fVar103 * fVar91 - fVar54 * fVar71;
      lVar21 = (longlong)(piVar1[3] * 3);
      lVar19 = (longlong)(piVar2[3] * 3);
      lVar9 = (longlong)(piVar3[3] * 3);
      lVar12 = (longlong)(piVar4[3] * 3);
      auVar130._0_4_ = fVar65 * fVar128 - fVar80 * fVar115;
      auVar130._4_4_ = fVar69 * fVar131 - fVar89 * fVar119;
      auVar130._8_4_ = fVar70 * fVar132 - fVar90 * fVar121;
      auVar130._12_4_ = fVar71 * fVar133 - fVar91 * fVar123;
      auVar134._0_4_ = fVar38 * fVar115 - fVar128 * fVar95;
      auVar134._4_4_ = fVar52 * fVar119 - fVar131 * fVar101;
      auVar134._8_4_ = fVar53 * fVar121 - fVar132 * fVar102;
      auVar134._12_4_ = fVar54 * fVar123 - fVar133 * fVar103;
      auVar43 = insertps(ZEXT416(*(uint *)(param_1 + lVar21 * 4)),
                         *(undefined4 *)(param_1 + lVar19 * 4),0x10);
      auVar43 = insertps(auVar43,*(undefined4 *)(param_1 + lVar9 * 4),0x20);
      auVar105 = insertps(auVar43,*(undefined4 *)(param_1 + lVar12 * 4),0x30);
      auVar43 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar21 * 4)),
                         *(undefined4 *)(param_1 + 4 + lVar19 * 4),0x10);
      auVar43 = insertps(auVar43,*(undefined4 *)(param_1 + 4 + lVar9 * 4),0x20);
      auVar127._0_4_ =
           auVar97._0_4_ * auVar97._0_4_ +
           auVar134._0_4_ * auVar134._0_4_ + auVar130._0_4_ * auVar130._0_4_;
      auVar127._4_4_ =
           auVar97._4_4_ * auVar97._4_4_ +
           auVar134._4_4_ * auVar134._4_4_ + auVar130._4_4_ * auVar130._4_4_;
      auVar127._8_4_ =
           auVar97._8_4_ * auVar97._8_4_ +
           auVar134._8_4_ * auVar134._8_4_ + auVar130._8_4_ * auVar130._8_4_;
      auVar127._12_4_ =
           auVar97._12_4_ * auVar97._12_4_ +
           auVar134._12_4_ * auVar134._12_4_ + auVar130._12_4_ * auVar130._12_4_;
      auVar106 = sqrtps(auVar127,auVar127);
      auVar66 = divps(auVar130,auVar106);
      auVar129 = divps(auVar134,auVar106);
      auVar72 = divps(auVar97,auVar106);
      uVar24 = -(uint)(auVar106._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77);
      uVar27 = -(uint)(auVar106._4_4_ <= _UNK_1506895d4);
      uVar31 = -(uint)(auVar106._8_4_ <= _UNK_1506895d8);
      uVar35 = -(uint)(auVar106._12_4_ <= _UNK_1506895dc);
      fVar95 = (float)(~uVar24 & auVar66._0_4_);
      fVar101 = (float)(~uVar27 & auVar66._4_4_);
      fVar102 = (float)(~uVar31 & auVar66._8_4_);
      fVar103 = (float)(~uVar35 & auVar66._12_4_);
      auVar43 = insertps(auVar43,*(undefined4 *)(param_1 + 4 + lVar12 * 4),0x30);
      fVar65 = (float)(~uVar24 & auVar129._0_4_);
      fVar69 = (float)(~uVar27 & auVar129._4_4_);
      fVar70 = (float)(~uVar31 & auVar129._8_4_);
      fVar71 = (float)(~uVar35 & auVar129._12_4_);
      auVar66 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar21 * 4)),
                         *(undefined4 *)(param_1 + 8 + lVar19 * 4),0x10);
      fVar80 = (float)(~uVar24 & auVar72._0_4_);
      fVar89 = (float)(~uVar27 & auVar72._4_4_);
      fVar90 = (float)(~uVar31 & auVar72._8_4_);
      fVar91 = (float)(~uVar35 & auVar72._12_4_);
      auVar66 = insertps(auVar66,*(undefined4 *)(param_1 + 8 + lVar9 * 4),0x20);
      auVar137._0_4_ = fVar110 - auVar105._0_4_;
      auVar137._4_4_ = fVar112 - auVar105._4_4_;
      auVar137._8_4_ = fVar126 - auVar105._8_4_;
      auVar137._12_4_ = fVar114 - auVar105._12_4_;
      fVar151 = fVar151 - auVar105._0_4_;
      fVar156 = fVar156 - auVar105._4_4_;
      fVar157 = fVar157 - auVar105._8_4_;
      fVar158 = fVar158 - auVar105._12_4_;
      auVar66 = insertps(auVar66,*(undefined4 *)(param_1 + 8 + lVar12 * 4),0x30);
      fVar104 = fVar104 - auVar43._0_4_;
      fVar109 = fVar109 - auVar43._4_4_;
      fVar111 = fVar111 - auVar43._8_4_;
      fVar113 = fVar113 - auVar43._12_4_;
      fVar145 = fVar145 - auVar43._0_4_;
      fVar148 = fVar148 - auVar43._4_4_;
      fVar149 = fVar149 - auVar43._8_4_;
      fVar150 = fVar150 - auVar43._12_4_;
      fVar136 = fVar136 - auVar66._0_4_;
      fVar140 = fVar140 - auVar66._4_4_;
      fVar142 = fVar142 - auVar66._8_4_;
      fVar144 = fVar144 - auVar66._12_4_;
      fVar55 = fVar55 - auVar66._0_4_;
      fVar60 = fVar60 - auVar66._4_4_;
      fVar62 = fVar62 - auVar66._8_4_;
      fVar63 = fVar63 - auVar66._12_4_;
      auVar66._0_4_ = auVar137._0_4_ * fVar145 - fVar151 * fVar104;
      auVar66._4_4_ = auVar137._4_4_ * fVar148 - fVar156 * fVar109;
      auVar66._8_4_ = auVar137._8_4_ * fVar149 - fVar157 * fVar111;
      auVar66._12_4_ = auVar137._12_4_ * fVar150 - fVar158 * fVar113;
      auVar107._0_4_ = fVar104 * fVar55 - fVar145 * fVar136;
      auVar107._4_4_ = fVar109 * fVar60 - fVar148 * fVar140;
      auVar107._8_4_ = fVar111 * fVar62 - fVar149 * fVar142;
      auVar107._12_4_ = fVar113 * fVar63 - fVar150 * fVar144;
      auVar98._0_4_ = fVar151 * fVar136 - fVar55 * auVar137._0_4_;
      auVar98._4_4_ = fVar156 * fVar140 - fVar60 * auVar137._4_4_;
      auVar98._8_4_ = fVar157 * fVar142 - fVar62 * auVar137._8_4_;
      auVar98._12_4_ = fVar158 * fVar144 - fVar63 * auVar137._12_4_;
      auVar106._0_4_ =
           auVar66._0_4_ * auVar66._0_4_ +
           auVar98._0_4_ * auVar98._0_4_ + auVar107._0_4_ * auVar107._0_4_;
      auVar106._4_4_ =
           auVar66._4_4_ * auVar66._4_4_ +
           auVar98._4_4_ * auVar98._4_4_ + auVar107._4_4_ * auVar107._4_4_;
      auVar106._8_4_ =
           auVar66._8_4_ * auVar66._8_4_ +
           auVar98._8_4_ * auVar98._8_4_ + auVar107._8_4_ * auVar107._8_4_;
      auVar106._12_4_ =
           auVar66._12_4_ * auVar66._12_4_ +
           auVar98._12_4_ * auVar98._12_4_ + auVar107._12_4_ * auVar107._12_4_;
      auVar72 = sqrtps(auVar137,auVar106);
      auVar106 = divps(auVar107,auVar72);
      auVar105 = divps(auVar98,auVar72);
      auVar43 = divps(auVar66,auVar72);
      uVar24 = -(uint)(auVar72._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77);
      uVar27 = -(uint)(auVar72._4_4_ <= _UNK_1506895d4);
      uVar31 = -(uint)(auVar72._8_4_ <= _UNK_1506895d8);
      uVar35 = -(uint)(auVar72._12_4_ <= _UNK_1506895dc);
      fVar38 = (float)(~uVar24 & auVar106._0_4_);
      fVar52 = (float)(~uVar27 & auVar106._4_4_);
      fVar53 = (float)(~uVar31 & auVar106._8_4_);
      fVar54 = (float)(~uVar35 & auVar106._12_4_);
      fVar111 = (float)(~uVar24 & auVar105._0_4_);
      fVar110 = (float)(~uVar27 & auVar105._4_4_);
      fVar112 = (float)(~uVar31 & auVar105._8_4_);
      fVar114 = (float)(~uVar35 & auVar105._12_4_);
      fVar55 = (float)(~uVar24 & auVar43._0_4_);
      fVar60 = (float)(~uVar27 & auVar43._4_4_);
      fVar62 = (float)(~uVar31 & auVar43._8_4_);
      fVar63 = (float)(~uVar35 & auVar43._12_4_);
      auVar129._0_4_ =
           (fVar95 * fVar55 - fVar80 * fVar38) * (float)(~uVar23 & auVar152._0_4_) +
           (fVar80 * fVar111 - fVar65 * fVar55) * auVar153._0_4_ +
           (fVar65 * fVar38 - fVar95 * fVar111) * (float)(~uVar23 & auVar146._0_4_);
      auVar129._4_4_ =
           (fVar101 * fVar60 - fVar89 * fVar52) * (float)(~uVar26 & auVar152._4_4_) +
           (fVar89 * fVar110 - fVar69 * fVar60) * auVar153._4_4_ +
           (fVar69 * fVar52 - fVar101 * fVar110) * (float)(~uVar26 & auVar146._4_4_);
      auVar129._8_4_ =
           (fVar102 * fVar62 - fVar90 * fVar53) * (float)(~uVar30 & auVar152._8_4_) +
           (fVar90 * fVar112 - fVar70 * fVar62) * auVar153._8_4_ +
           (fVar70 * fVar53 - fVar102 * fVar112) * (float)(~uVar30 & auVar146._8_4_);
      auVar129._12_4_ =
           (fVar103 * fVar63 - fVar91 * fVar54) * (float)(~uVar34 & auVar152._12_4_) +
           (fVar91 * fVar114 - fVar71 * fVar63) * auVar153._12_4_ +
           (fVar71 * fVar54 - fVar103 * fVar114) * (float)(~uVar34 & auVar146._12_4_);
      auVar146._0_4_ = fVar55 * fVar80 + fVar111 * fVar65 + fVar38 * fVar95;
      auVar146._4_4_ = fVar60 * fVar89 + fVar110 * fVar69 + fVar52 * fVar101;
      auVar146._8_4_ = fVar62 * fVar90 + fVar112 * fVar70 + fVar53 * fVar102;
      auVar146._12_4_ = fVar63 * fVar91 + fVar114 * fVar71 + fVar54 * fVar103;
      auVar43 = maxps(auVar146,___xmm_bf800000bf800000bf800000bf800000);
      auVar152 = minps(auVar43,___xmm_3f8000003f8000003f8000003f800000);
      auVar43 = maxps(auVar129,___xmm_bf800000bf800000bf800000bf800000);
      auVar66 = minps(auVar43,___xmm_3f8000003f8000003f8000003f800000);
      auVar43 = divps(auVar66,auVar152);
      auVar147._0_4_ = (uint)auVar43._0_4_ ^ __xmm_80000000800000008000000080000000;
      auVar147._4_4_ = (uint)auVar43._4_4_ ^ _UNK_150651574;
      auVar147._8_4_ = (uint)auVar43._8_4_ ^ _UNK_150651578;
      auVar147._12_4_ = (uint)auVar43._12_4_ ^ _UNK_15065157c;
      auVar72 = maxps(auVar147,auVar43);
      auVar105._4_4_ = -(uint)(__xmm_3f8000003f8000003f8000003f800000._4_4_ < auVar72._4_4_);
      auVar105._0_4_ = -(uint)((float)__xmm_3f8000003f8000003f8000003f800000 < auVar72._0_4_);
      auVar105._8_4_ = -(uint)(__xmm_3f8000003f8000003f8000003f800000._8_4_ < auVar72._8_4_);
      auVar105._12_4_ = -(uint)(__xmm_3f8000003f8000003f8000003f800000._12_4_ < auVar72._12_4_);
      iVar11 = movmskps(piVar4[3] * 3,auVar105);
      if (iVar11 != 0) {
        auVar153 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar72);
      }
      auVar72 = blendvps(auVar72,auVar153,auVar105);
      fVar38 = auVar72._0_4_;
      fVar52 = auVar72._4_4_;
      fVar53 = auVar72._8_4_;
      fVar54 = auVar72._12_4_;
      fVar55 = fVar38 * fVar38;
      fVar60 = fVar52 * fVar52;
      fVar62 = fVar53 * fVar53;
      fVar63 = fVar54 * fVar54;
      auVar92._0_4_ =
           (((((((fVar55 * ___xmm_bb9918b7bb9918b7bb9918b7bb9918b7 +
                 ___xmm_3cc6061b3cc6061b3cc6061b3cc6061b) * fVar55 +
                ___xmm_bd732a49bd732a49bd732a49bd732a49) * fVar55 +
               ___xmm_3dcadb2a3dcadb2a3dcadb2a3dcadb2a) * fVar55 +
              ___xmm_be0f8549be0f8549be0f8549be0f8549) * fVar55 +
             ___xmm_3e4c7b543e4c7b543e4c7b543e4c7b54) * fVar55 +
            ___xmm_beaaa8cfbeaaa8cfbeaaa8cfbeaaa8cf) * fVar55 +
           ___xmm_3f7ffffe3f7ffffe3f7ffffe3f7ffffe) * fVar38;
      auVar92._4_4_ =
           (((((((fVar60 * _UNK_150b51114 + _UNK_150b51124) * fVar60 + _UNK_150b51134) * fVar60 +
               _UNK_150b51144) * fVar60 + _UNK_150b51154) * fVar60 + _UNK_150b51164) * fVar60 +
            _UNK_150b51174) * fVar60 + _UNK_150b51184) * fVar52;
      auVar92._8_4_ =
           (((((((fVar62 * _UNK_150b51118 + _UNK_150b51128) * fVar62 + _UNK_150b51138) * fVar62 +
               _UNK_150b51148) * fVar62 + _UNK_150b51158) * fVar62 + _UNK_150b51168) * fVar62 +
            _UNK_150b51178) * fVar62 + _UNK_150b51188) * fVar53;
      auVar92._12_4_ =
           (((((((fVar63 * _UNK_150b5111c + _UNK_150b5112c) * fVar63 + _UNK_150b5113c) * fVar63 +
               _UNK_150b5114c) * fVar63 + _UNK_150b5115c) * fVar63 + _UNK_150b5116c) * fVar63 +
            _UNK_150b5117c) * fVar63 + _UNK_150b5118c) * fVar54;
      auVar81._0_4_ = ___xmm_3fc90fdb3fc90fdb3fc90fdb3fc90fdb - auVar92._0_4_;
      auVar81._4_4_ = _UNK_150b51194 - auVar92._4_4_;
      auVar81._8_4_ = _UNK_150b51198 - auVar92._8_4_;
      auVar81._12_4_ = _UNK_150b5119c - auVar92._12_4_;
      auVar72 = blendvps(auVar92,auVar81,auVar105);
      auVar40._4_4_ = -(uint)(auVar43._4_4_ < 0.0);
      auVar40._0_4_ = -(uint)(auVar43._0_4_ < 0.0);
      auVar82._0_4_ = auVar72._0_4_ ^ __xmm_80000000800000008000000080000000;
      auVar82._4_4_ = auVar72._4_4_ ^ _UNK_150651574;
      auVar82._8_4_ = auVar72._8_4_ ^ _UNK_150651578;
      auVar82._12_4_ = auVar72._12_4_ ^ _UNK_15065157c;
      auVar40._8_4_ = -(uint)(auVar43._8_4_ < 0.0);
      auVar40._12_4_ = -(uint)(auVar43._12_4_ < 0.0);
      auVar72 = blendvps(auVar72,auVar82,auVar40);
      auVar41._4_4_ = -(uint)(auVar66._4_4_ < 0.0);
      auVar41._0_4_ = -(uint)(auVar66._0_4_ < 0.0);
      auVar43._4_4_ = _UNK_150b51104;
      auVar43._0_4_ = ___xmm_40490fdb40490fdb40490fdb40490fdb;
      auVar43._8_4_ = _UNK_150b51108;
      auVar43._12_4_ = _UNK_150b5110c;
      auVar41._8_4_ = -(uint)(auVar66._8_4_ < 0.0);
      auVar41._12_4_ = -(uint)(auVar66._12_4_ < 0.0);
      auVar66 = blendvps(auVar43,___xmm_c0490fdbc0490fdbc0490fdbc0490fdb,auVar41);
      auVar42._4_4_ =
           -(uint)(_UNK_150b51104 -
                   (float)((uint)((float)(auVar66._4_4_ & -(uint)(auVar152._4_4_ < 0.0)) +
                                 auVar72._4_4_) & _UNK_15061cc74) <
                  (fVar143 - (float)(puVar13[1] & uVar25)) * param_5);
      auVar42._0_4_ =
           -(uint)(___xmm_40490fdb40490fdb40490fdb40490fdb -
                   (float)((uint)((float)(auVar66._0_4_ & -(uint)(auVar152._0_4_ < 0.0)) +
                                 auVar72._0_4_) & __xmm_7fffffff7fffffff7fffffff7fffffff) <
                  (fVar141 - (float)(*puVar13 & uVar6)) * param_5);
      auVar42._8_4_ =
           -(uint)(_UNK_150b51108 -
                   (float)((uint)((float)(auVar66._8_4_ & -(uint)(auVar152._8_4_ < 0.0)) +
                                 auVar72._8_4_) & _UNK_15061cc78) <
                  (fVar120 - (float)(puVar13[2] & uVar28)) * param_5);
      auVar42._12_4_ =
           -(uint)(_UNK_150b5110c -
                   (float)((uint)((float)(auVar66._12_4_ & -(uint)(auVar152._12_4_ < 0.0)) +
                                 auVar72._12_4_) & _UNK_15061cc7c) <
                  (fVar122 - (float)(puVar13[3] & uVar29)) * param_5);
      auVar66 = packssdw(auVar42,auVar42);
      auVar66 = packsswb(auVar66,auVar66);
      *(uint *)(param_4 + uVar7) = auVar66._0_4_ & (uint)__xmm_00000000000000000000000001010101;
      uVar7 = uVar7 + 4;
      uVar10 = uVar10 + 0x10;
      auVar66 = auVar88;
      uVar6 = uVar32;
      uVar25 = uVar33;
      uVar28 = uVar36;
      uVar29 = uVar37;
    } while ((int)uVar7 < (int)uVar16);
  }
  uVar6 = (uint)uVar7;
  if ((int)uVar6 < (int)param_6) {
    auVar88._0_4_ =
         -(uint)((int)(uVar6 | (uint)__xmm_00000003000000020000000100000000) < (int)param_6);
    auVar88._4_4_ =
         -(uint)((int)(uVar6 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_6);
    auVar88._8_4_ = -(uint)((int)(uVar6 | _UNK_150631e08) < (int)param_6);
    auVar88._12_4_ = -(uint)((int)(uVar6 | _UNK_150631e0c) < (int)param_6);
    uVar7 = uVar7 & 0xffffffff;
    pauVar8 = (undefined1 (*) [16])(param_2 + uVar7 * 0x10);
    uVar16 = movmskps(uVar16,auVar88);
    bVar14 = (char)((char)uVar16 << 4) >> 4;
    if (uVar16 == 0xf) {
      auVar43 = *pauVar8;
      iVar61 = *(int *)pauVar8[1];
      auVar66 = pauVar8[2];
      iVar64 = *(int *)pauVar8[3];
      auVar74._0_8_ = auVar43._0_8_;
      auVar74._8_4_ = auVar43._4_4_;
      auVar74._12_4_ = *(undefined4 *)(pauVar8[1] + 4);
      iVar11 = auVar43._0_4_;
      auVar84._0_8_ = CONCAT44(*(undefined4 *)(pauVar8[1] + 8),auVar43._8_4_);
      auVar84._8_4_ = auVar43._12_4_;
      auVar84._12_4_ = *(undefined4 *)(pauVar8[1] + 0xc);
      auVar45._0_8_ = auVar66._0_8_;
      auVar45._8_4_ = auVar66._4_4_;
      auVar45._12_4_ = *(undefined4 *)(pauVar8[3] + 4);
      iVar39 = auVar66._0_4_;
      auVar67._0_8_ = CONCAT44(*(undefined4 *)(pauVar8[3] + 8),auVar66._8_4_);
      auVar67._8_4_ = auVar66._12_4_;
      auVar67._12_4_ = *(undefined4 *)(pauVar8[3] + 0xc);
      auVar73._8_8_ = auVar45._8_8_;
      auVar73._0_8_ = auVar74._8_8_;
      auVar116._8_8_ = auVar67._0_8_;
      auVar116._0_8_ = auVar84._0_8_;
      auVar83._8_8_ = auVar67._8_8_;
      auVar83._0_8_ = auVar84._8_8_;
    }
    else {
      auVar44._0_4_ = ___xmm_00000030000000200000001000000000 & auVar88._0_4_;
      auVar44._4_4_ = _UNK_150b511c4 & auVar88._4_4_;
      auVar44._8_4_ = _UNK_150b511c8 & auVar88._8_4_;
      auVar44._12_4_ = _UNK_150b511cc & auVar88._12_4_;
      lVar12 = extractps(auVar44,1);
      lVar19 = extractps(auVar44,2);
      lVar9 = extractps(auVar44,3);
      iVar11 = *(int *)*pauVar8;
      iVar61 = *(int *)(*pauVar8 + lVar12);
      iVar39 = *(int *)(*pauVar8 + lVar19);
      iVar64 = *(int *)(*pauVar8 + lVar9);
      auVar43 = ___xmm_00000034000000240000001400000004 & auVar88;
      auVar73._4_4_ = *(undefined4 *)(*pauVar8 + auVar43._4_4_);
      auVar73._0_4_ = *(undefined4 *)(*pauVar8 + auVar43._0_4_);
      auVar73._12_4_ = *(undefined4 *)(*pauVar8 + auVar43._12_4_);
      auVar73._8_4_ = *(undefined4 *)(*pauVar8 + auVar43._8_4_);
      auVar43 = ___xmm_00000038000000280000001800000008 & auVar88;
      auVar116._4_4_ = *(undefined4 *)(*pauVar8 + auVar43._4_4_);
      auVar116._0_4_ = *(undefined4 *)(*pauVar8 + auVar43._0_4_);
      auVar116._12_4_ = *(undefined4 *)(*pauVar8 + auVar43._12_4_);
      auVar116._8_4_ = *(undefined4 *)(*pauVar8 + auVar43._8_4_);
      auVar43 = ___xmm_0000003c0000002c0000001c0000000c & auVar88;
      auVar83._4_4_ = *(undefined4 *)(*pauVar8 + auVar43._4_4_);
      auVar83._0_4_ = *(undefined4 *)(*pauVar8 + auVar43._0_4_);
      auVar83._12_4_ = *(undefined4 *)(*pauVar8 + auVar43._12_4_);
      auVar83._8_4_ = *(undefined4 *)(*pauVar8 + auVar43._8_4_);
    }
    auVar46._4_4_ = iVar61 * 3;
    auVar46._0_4_ = iVar11 * 3;
    auVar46._8_4_ = iVar39 * 3;
    auVar46._12_4_ = iVar64 * 3;
    auVar46 = auVar46 & auVar88;
    lVar9 = param_1 + (longlong)auVar46._0_4_ * 4;
    lVar12 = param_1 + (longlong)auVar46._4_4_ * 4;
    lVar19 = param_1 + (longlong)auVar46._8_4_ * 4;
    auVar106 = ___xmm_00000004000000040000000400000004 & auVar88;
    uVar22 = (ulonglong)auVar106._4_4_;
    uVar15 = (ulonglong)auVar106._0_4_;
    uVar20 = (ulonglong)auVar106._8_4_;
    auVar43 = insertps(ZEXT416(*(uint *)(uVar15 + lVar9)),*(undefined4 *)(uVar22 + lVar12),0x10);
    auVar43 = insertps(auVar43,*(undefined4 *)(uVar20 + lVar19),0x20);
    auVar137 = ___xmm_00000008000000080000000800000008 & auVar88;
    uVar17 = (ulonglong)auVar137._4_4_;
    uVar10 = (ulonglong)auVar137._0_4_;
    uVar18 = (ulonglong)auVar137._8_4_;
    auVar66 = insertps(ZEXT416(*(uint *)(uVar10 + lVar9)),*(undefined4 *)(uVar17 + lVar12),0x10);
    auVar66 = insertps(auVar66,*(undefined4 *)(uVar18 + lVar19),0x20);
    auVar138._4_4_ = auVar73._4_4_ * 3;
    auVar138._0_4_ = auVar73._0_4_ * 3;
    auVar138._8_4_ = auVar73._8_4_ * 3;
    auVar138._12_4_ = auVar73._12_4_ * 3;
    auVar138 = auVar138 & auVar88;
    lVar9 = param_1 + (longlong)auVar138._0_4_ * 4;
    lVar12 = param_1 + (longlong)auVar138._4_4_ * 4;
    auVar152 = insertps(ZEXT416(*(uint *)(uVar15 + lVar9)),*(undefined4 *)(uVar22 + lVar12),0x10);
    auVar130 = insertps(ZEXT416(*(uint *)(uVar10 + lVar9)),*(undefined4 *)(uVar17 + lVar12),0x10);
    auVar154._4_4_ = auVar116._4_4_ * 3;
    auVar154._0_4_ = auVar116._0_4_ * 3;
    auVar154._8_4_ = auVar116._8_4_ * 3;
    auVar154._12_4_ = auVar116._12_4_ * 3;
    auVar154 = auVar154 & auVar88;
    lVar9 = param_1 + (longlong)auVar154._0_4_ * 4;
    auVar94._4_4_ = auVar83._4_4_ * 3;
    auVar94._0_4_ = auVar83._0_4_ * 3;
    auVar94._8_4_ = auVar83._8_4_ * 3;
    auVar94._12_4_ = auVar83._12_4_ * 3;
    auVar94 = auVar94 & auVar88;
    lVar12 = param_1 + (longlong)auVar94._0_4_ * 4;
    lVar19 = param_1 + (longlong)auVar154._4_4_ * 4;
    auVar153 = insertps(ZEXT416(*(uint *)(uVar15 + lVar9)),*(undefined4 *)(uVar22 + lVar19),0x10);
    auVar129 = insertps(ZEXT416(*(uint *)(uVar10 + lVar9)),*(undefined4 *)(uVar17 + lVar19),0x10);
    lVar9 = param_1 + (longlong)auVar94._4_4_ * 4;
    auVar105 = insertps(ZEXT416(*(uint *)(uVar15 + lVar12)),*(undefined4 *)(uVar22 + lVar9),0x10);
    auVar72 = insertps(ZEXT416(*(uint *)(uVar10 + lVar12)),*(undefined4 *)(uVar17 + lVar9),0x10);
    lVar9 = param_1 + (longlong)auVar138._8_4_ * 4;
    auVar152 = insertps(auVar152,*(undefined4 *)(uVar20 + lVar9),0x20);
    auVar147 = insertps(auVar130,*(undefined4 *)(uVar18 + lVar9),0x20);
    lVar9 = param_1 + (longlong)auVar154._8_4_ * 4;
    auVar146 = insertps(auVar153,*(undefined4 *)(uVar20 + lVar9),0x20);
    auVar153 = insertps(auVar129,*(undefined4 *)(uVar18 + lVar9),0x20);
    lVar9 = param_1 + (longlong)auVar94._8_4_ * 4;
    auVar129 = insertps(auVar105,*(undefined4 *)(uVar20 + lVar9),0x20);
    auVar105 = insertps(auVar72,*(undefined4 *)(uVar18 + lVar9),0x20);
    auVar72 = insertps(ZEXT416(*(uint *)(param_1 + (longlong)auVar46._0_4_ * 4)),
                       *(undefined4 *)(param_1 + (longlong)auVar46._4_4_ * 4),0x10);
    uVar15 = (ulonglong)auVar106._12_4_;
    auVar72 = insertps(auVar72,*(undefined4 *)(param_1 + (longlong)auVar46._8_4_ * 4),0x20);
    lVar9 = param_1 + (longlong)auVar46._12_4_ * 4;
    auVar130 = insertps(auVar72,*(undefined4 *)(param_1 + (longlong)auVar46._12_4_ * 4),0x30);
    auVar43 = insertps(auVar43,*(undefined4 *)(uVar15 + lVar9),0x30);
    uVar10 = (ulonglong)auVar137._12_4_;
    auVar66 = insertps(auVar66,*(undefined4 *)(uVar10 + lVar9),0x30);
    auVar72 = insertps(ZEXT416(*(uint *)(param_1 + (longlong)auVar138._0_4_ * 4)),
                       *(undefined4 *)(param_1 + (longlong)auVar138._4_4_ * 4),0x10);
    auVar72 = insertps(auVar72,*(undefined4 *)(param_1 + (longlong)auVar138._8_4_ * 4),0x20);
    auVar137 = insertps(auVar72,*(undefined4 *)(param_1 + (longlong)auVar138._12_4_ * 4),0x30);
    lVar9 = param_1 + (longlong)auVar138._12_4_ * 4;
    auVar152 = insertps(auVar152,*(undefined4 *)(uVar15 + lVar9),0x30);
    auVar147 = insertps(auVar147,*(undefined4 *)(uVar10 + lVar9),0x30);
    auVar72 = insertps(ZEXT416(*(uint *)(param_1 + (longlong)auVar154._0_4_ * 4)),
                       *(undefined4 *)(param_1 + (longlong)auVar154._4_4_ * 4),0x10);
    auVar72 = insertps(auVar72,*(undefined4 *)(param_1 + (longlong)auVar154._8_4_ * 4),0x20);
    auVar72 = insertps(auVar72,*(undefined4 *)(param_1 + (longlong)auVar154._12_4_ * 4),0x30);
    lVar9 = param_1 + (longlong)auVar154._12_4_ * 4;
    auVar146 = insertps(auVar146,*(undefined4 *)(uVar15 + lVar9),0x30);
    auVar153 = insertps(auVar153,*(undefined4 *)(uVar10 + lVar9),0x30);
    auVar106 = insertps(ZEXT416(*(uint *)(param_1 + (longlong)auVar94._0_4_ * 4)),
                        *(undefined4 *)(param_1 + (longlong)auVar94._4_4_ * 4),0x10);
    auVar106 = insertps(auVar106,*(undefined4 *)(param_1 + (longlong)auVar94._8_4_ * 4),0x20);
    auVar106 = insertps(auVar106,*(undefined4 *)(param_1 + (longlong)auVar94._12_4_ * 4),0x30);
    param_1 = param_1 + (longlong)auVar94._12_4_ * 4;
    auVar129 = insertps(auVar129,*(undefined4 *)(uVar15 + param_1),0x30);
    auVar105 = insertps(auVar105,*(undefined4 *)(uVar10 + param_1),0x30);
    uVar6 = uVar6 << 2;
    if ((~bVar14 & 9) == 0) {
      auVar46 = *(undefined1 (*) [16])(param_3 + (int)uVar6);
      uVar16 = uVar6;
    }
    else {
      puVar13 = (uint *)(param_3 + (int)uVar6);
      if ((uVar16 & 1) != 0) {
        auVar46 = ZEXT416(*puVar13);
      }
      if ((uVar16 & 2) != 0) {
        auVar46 = insertps(auVar46,puVar13[1],0x10);
      }
      if ((uVar16 & 4) != 0) {
        auVar46 = insertps(auVar46,puVar13[2],0x20);
      }
      if ((uVar16 & 8) != 0) {
        auVar46 = insertps(auVar46,puVar13[3],0x30);
      }
    }
    fVar102 = auVar137._0_4_;
    fVar103 = auVar137._4_4_;
    fVar109 = auVar137._12_4_;
    fVar126 = auVar130._0_4_;
    auVar155._0_4_ = fVar102 - fVar126;
    fVar95 = auVar130._4_4_;
    auVar155._4_4_ = fVar103 - fVar95;
    fVar101 = auVar130._8_4_;
    fVar104 = auVar137._8_4_;
    auVar155._8_4_ = fVar104 - fVar101;
    fVar142 = auVar130._12_4_;
    auVar155._12_4_ = fVar109 - fVar142;
    fVar60 = auVar152._0_4_;
    fVar62 = auVar152._4_4_;
    fVar63 = auVar152._12_4_;
    local_148 = auVar43._0_4_;
    fStack_144 = auVar43._4_4_;
    fStack_140 = auVar43._8_4_;
    fStack_13c = auVar43._12_4_;
    auVar56._0_4_ = fVar60 - local_148;
    auVar56._4_4_ = fVar62 - fStack_144;
    fVar53 = auVar152._8_4_;
    auVar56._8_4_ = fVar53 - fStack_140;
    auVar56._12_4_ = fVar63 - fStack_13c;
    auVar117._0_4_ = auVar56._0_4_ * auVar56._0_4_ + auVar155._0_4_ * auVar155._0_4_;
    auVar117._4_4_ = auVar56._4_4_ * auVar56._4_4_ + auVar155._4_4_ * auVar155._4_4_;
    auVar117._8_4_ = auVar56._8_4_ * auVar56._8_4_ + auVar155._8_4_ * auVar155._8_4_;
    auVar117._12_4_ = auVar56._12_4_ * auVar56._12_4_ + auVar155._12_4_ * auVar155._12_4_;
    fVar120 = auVar147._0_4_;
    fVar121 = auVar147._4_4_;
    fVar122 = auVar147._12_4_;
    local_128 = auVar66._0_4_;
    fStack_124 = auVar66._4_4_;
    fStack_120 = auVar66._8_4_;
    fStack_11c = auVar66._12_4_;
    auVar139._0_4_ = fVar120 - local_128;
    auVar139._4_4_ = fVar121 - fStack_124;
    fVar115 = auVar147._8_4_;
    auVar139._8_4_ = fVar115 - fStack_120;
    auVar139._12_4_ = fVar122 - fStack_11c;
    auVar47._0_4_ = auVar139._0_4_ * auVar139._0_4_ + auVar117._0_4_;
    auVar47._4_4_ = auVar139._4_4_ * auVar139._4_4_ + auVar117._4_4_;
    auVar47._8_4_ = auVar139._8_4_ * auVar139._8_4_ + auVar117._8_4_;
    auVar47._12_4_ = auVar139._12_4_ * auVar139._12_4_ + auVar117._12_4_;
    auVar66 = sqrtps(auVar117,auVar47);
    auVar152 = divps(auVar155,auVar66);
    auVar43 = divps(auVar56,auVar66);
    auVar130 = divps(auVar139,auVar66);
    uVar6 = -(uint)(auVar47._0_4_ <= ___xmm_00800000008000000080000000800000);
    uVar28 = -(uint)(auVar47._4_4_ <= _UNK_1508be494);
    uVar32 = -(uint)(auVar47._8_4_ <= _UNK_1508be498);
    uVar36 = -(uint)(auVar47._12_4_ <= _UNK_1508be49c);
    auVar48._4_4_ = uVar28;
    auVar48._0_4_ = uVar6;
    auVar48._8_4_ = uVar32;
    auVar48._12_4_ = uVar36;
    auVar137 = blendvps(auVar152,___xmm_3f8000003f8000003f8000003f800000,auVar48);
    fVar80 = fVar126 - auVar72._0_4_;
    fVar89 = fVar95 - auVar72._4_4_;
    fVar90 = fVar101 - auVar72._8_4_;
    fVar91 = fVar142 - auVar72._12_4_;
    fVar113 = fVar102 - auVar72._0_4_;
    fVar141 = fVar103 - auVar72._4_4_;
    fVar143 = fVar104 - auVar72._8_4_;
    fVar119 = fVar109 - auVar72._12_4_;
    fVar38 = local_148 - auVar146._0_4_;
    fVar52 = fStack_144 - auVar146._4_4_;
    fVar54 = fStack_140 - auVar146._8_4_;
    fVar55 = fStack_13c - auVar146._12_4_;
    fVar65 = fVar60 - auVar146._0_4_;
    fVar69 = fVar62 - auVar146._4_4_;
    fVar111 = fVar53 - auVar146._8_4_;
    fVar70 = fVar63 - auVar146._12_4_;
    auVar135._0_4_ = local_128 - auVar153._0_4_;
    auVar135._4_4_ = fStack_124 - auVar153._4_4_;
    auVar135._8_4_ = fStack_120 - auVar153._8_4_;
    auVar135._12_4_ = fStack_11c - auVar153._12_4_;
    fVar71 = fVar120 - auVar153._0_4_;
    fVar110 = fVar121 - auVar153._4_4_;
    fVar112 = fVar115 - auVar153._8_4_;
    fVar114 = fVar122 - auVar153._12_4_;
    auVar118._0_4_ = fVar80 * fVar65 - fVar113 * fVar38;
    auVar118._4_4_ = fVar89 * fVar69 - fVar141 * fVar52;
    auVar118._8_4_ = fVar90 * fVar111 - fVar143 * fVar54;
    auVar118._12_4_ = fVar91 * fVar70 - fVar119 * fVar55;
    auVar57._0_4_ = fVar38 * fVar71 - fVar65 * auVar135._0_4_;
    auVar57._4_4_ = fVar52 * fVar110 - fVar69 * auVar135._4_4_;
    auVar57._8_4_ = fVar54 * fVar112 - fVar111 * auVar135._8_4_;
    auVar57._12_4_ = fVar55 * fVar114 - fVar70 * auVar135._12_4_;
    auVar125._0_4_ = fVar113 * auVar135._0_4_ - fVar71 * fVar80;
    auVar125._4_4_ = fVar141 * auVar135._4_4_ - fVar110 * fVar89;
    auVar125._8_4_ = fVar143 * auVar135._8_4_ - fVar112 * fVar90;
    auVar125._12_4_ = fVar119 * auVar135._12_4_ - fVar114 * fVar91;
    auVar85._0_4_ =
         auVar118._0_4_ * auVar118._0_4_ +
         auVar125._0_4_ * auVar125._0_4_ + auVar57._0_4_ * auVar57._0_4_;
    auVar85._4_4_ =
         auVar118._4_4_ * auVar118._4_4_ +
         auVar125._4_4_ * auVar125._4_4_ + auVar57._4_4_ * auVar57._4_4_;
    auVar85._8_4_ =
         auVar118._8_4_ * auVar118._8_4_ +
         auVar125._8_4_ * auVar125._8_4_ + auVar57._8_4_ * auVar57._8_4_;
    auVar85._12_4_ =
         auVar118._12_4_ * auVar118._12_4_ +
         auVar125._12_4_ * auVar125._12_4_ + auVar57._12_4_ * auVar57._12_4_;
    auVar153 = sqrtps(auVar135,auVar85);
    auVar66 = divps(auVar57,auVar153);
    auVar72 = divps(auVar125,auVar153);
    auVar152 = divps(auVar118,auVar153);
    uVar25 = -(uint)(auVar153._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77);
    uVar29 = -(uint)(auVar153._4_4_ <= _UNK_1506895d4);
    uVar33 = -(uint)(auVar153._8_4_ <= _UNK_1506895d8);
    uVar37 = -(uint)(auVar153._12_4_ <= _UNK_1506895dc);
    fVar65 = (float)(~uVar25 & auVar66._0_4_);
    fVar69 = (float)(~uVar29 & auVar66._4_4_);
    fVar111 = (float)(~uVar33 & auVar66._8_4_);
    fVar70 = (float)(~uVar37 & auVar66._12_4_);
    fVar113 = (float)(~uVar25 & auVar72._0_4_);
    fVar141 = (float)(~uVar29 & auVar72._4_4_);
    fVar143 = (float)(~uVar33 & auVar72._8_4_);
    fVar119 = (float)(~uVar37 & auVar72._12_4_);
    fVar80 = (float)(~uVar25 & auVar152._0_4_);
    fVar89 = (float)(~uVar29 & auVar152._4_4_);
    fVar90 = (float)(~uVar33 & auVar152._8_4_);
    fVar91 = (float)(~uVar37 & auVar152._12_4_);
    fVar102 = fVar102 - auVar106._0_4_;
    fVar103 = fVar103 - auVar106._4_4_;
    fVar104 = fVar104 - auVar106._8_4_;
    fVar109 = fVar109 - auVar106._12_4_;
    fVar126 = fVar126 - auVar106._0_4_;
    fVar95 = fVar95 - auVar106._4_4_;
    fVar101 = fVar101 - auVar106._8_4_;
    fVar142 = fVar142 - auVar106._12_4_;
    local_138 = auVar129._0_4_;
    fStack_134 = auVar129._4_4_;
    fStack_130 = auVar129._8_4_;
    fStack_12c = auVar129._12_4_;
    local_f8 = auVar105._0_4_;
    fStack_f4 = auVar105._4_4_;
    fStack_f0 = auVar105._8_4_;
    fStack_ec = auVar105._12_4_;
    auVar58._0_4_ = fVar102 * (local_148 - local_138) - fVar126 * (fVar60 - local_138);
    auVar58._4_4_ = fVar103 * (fStack_144 - fStack_134) - fVar95 * (fVar62 - fStack_134);
    auVar58._8_4_ = fVar104 * (fStack_140 - fStack_130) - fVar101 * (fVar53 - fStack_130);
    auVar58._12_4_ = fVar109 * (fStack_13c - fStack_12c) - fVar142 * (fVar63 - fStack_12c);
    auVar75._0_4_ =
         (fVar60 - local_138) * (local_128 - local_f8) -
         (local_148 - local_138) * (fVar120 - local_f8);
    auVar75._4_4_ =
         (fVar62 - fStack_134) * (fStack_124 - fStack_f4) -
         (fStack_144 - fStack_134) * (fVar121 - fStack_f4);
    auVar75._8_4_ =
         (fVar53 - fStack_130) * (fStack_120 - fStack_f0) -
         (fStack_140 - fStack_130) * (fVar115 - fStack_f0);
    auVar75._12_4_ =
         (fVar63 - fStack_12c) * (fStack_11c - fStack_ec) -
         (fStack_13c - fStack_12c) * (fVar122 - fStack_ec);
    auVar108._0_4_ = fVar126 * (fVar120 - local_f8) - (local_128 - local_f8) * fVar102;
    auVar108._4_4_ = fVar95 * (fVar121 - fStack_f4) - (fStack_124 - fStack_f4) * fVar103;
    auVar108._8_4_ = fVar101 * (fVar115 - fStack_f0) - (fStack_120 - fStack_f0) * fVar104;
    auVar108._12_4_ = fVar142 * (fVar122 - fStack_ec) - (fStack_11c - fStack_ec) * fVar109;
    auVar99._0_4_ = auVar108._0_4_ * auVar108._0_4_ + auVar75._0_4_ * auVar75._0_4_;
    auVar99._4_4_ = auVar108._4_4_ * auVar108._4_4_ + auVar75._4_4_ * auVar75._4_4_;
    auVar99._8_4_ = auVar108._8_4_ * auVar108._8_4_ + auVar75._8_4_ * auVar75._8_4_;
    auVar99._12_4_ = auVar108._12_4_ * auVar108._12_4_ + auVar75._12_4_ * auVar75._12_4_;
    auVar68._0_4_ = auVar58._0_4_ * auVar58._0_4_ + auVar99._0_4_;
    auVar68._4_4_ = auVar58._4_4_ * auVar58._4_4_ + auVar99._4_4_;
    auVar68._8_4_ = auVar58._8_4_ * auVar58._8_4_ + auVar99._8_4_;
    auVar68._12_4_ = auVar58._12_4_ * auVar58._12_4_ + auVar99._12_4_;
    auVar72 = sqrtps(auVar99,auVar68);
    auVar152 = divps(auVar75,auVar72);
    auVar105 = divps(auVar108,auVar72);
    auVar66 = divps(auVar58,auVar72);
    uVar25 = -(uint)(auVar72._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77);
    uVar29 = -(uint)(auVar72._4_4_ <= _UNK_1506895d4);
    uVar33 = -(uint)(auVar72._8_4_ <= _UNK_1506895d8);
    uVar37 = -(uint)(auVar72._12_4_ <= _UNK_1506895dc);
    fVar38 = (float)(~uVar25 & auVar152._0_4_);
    fVar52 = (float)(~uVar29 & auVar152._4_4_);
    fVar53 = (float)(~uVar33 & auVar152._8_4_);
    fVar54 = (float)(~uVar37 & auVar152._12_4_);
    fVar55 = (float)(~uVar25 & auVar105._0_4_);
    fVar60 = (float)(~uVar29 & auVar105._4_4_);
    fVar62 = (float)(~uVar33 & auVar105._8_4_);
    fVar63 = (float)(~uVar37 & auVar105._12_4_);
    fVar71 = (float)(~uVar25 & auVar66._0_4_);
    fVar110 = (float)(~uVar29 & auVar66._4_4_);
    fVar112 = (float)(~uVar33 & auVar66._8_4_);
    fVar114 = (float)(~uVar37 & auVar66._12_4_);
    auVar59._0_4_ =
         (fVar65 * fVar71 - fVar80 * fVar38) * (float)(~uVar6 & auVar43._0_4_) +
         (fVar80 * fVar55 - fVar113 * fVar71) * auVar137._0_4_ +
         (fVar113 * fVar38 - fVar65 * fVar55) * (float)(~uVar6 & auVar130._0_4_);
    auVar59._4_4_ =
         (fVar69 * fVar110 - fVar89 * fVar52) * (float)(~uVar28 & auVar43._4_4_) +
         (fVar89 * fVar60 - fVar141 * fVar110) * auVar137._4_4_ +
         (fVar141 * fVar52 - fVar69 * fVar60) * (float)(~uVar28 & auVar130._4_4_);
    auVar59._8_4_ =
         (fVar111 * fVar112 - fVar90 * fVar53) * (float)(~uVar32 & auVar43._8_4_) +
         (fVar90 * fVar62 - fVar143 * fVar112) * auVar137._8_4_ +
         (fVar143 * fVar53 - fVar111 * fVar62) * (float)(~uVar32 & auVar130._8_4_);
    auVar59._12_4_ =
         (fVar70 * fVar114 - fVar91 * fVar54) * (float)(~uVar36 & auVar43._12_4_) +
         (fVar91 * fVar63 - fVar119 * fVar114) * auVar137._12_4_ +
         (fVar119 * fVar54 - fVar70 * fVar63) * (float)(~uVar36 & auVar130._12_4_);
    auVar100._0_4_ = fVar71 * fVar80 + fVar55 * fVar113 + fVar38 * fVar65;
    auVar100._4_4_ = fVar110 * fVar89 + fVar60 * fVar141 + fVar52 * fVar69;
    auVar100._8_4_ = fVar112 * fVar90 + fVar62 * fVar143 + fVar53 * fVar111;
    auVar100._12_4_ = fVar114 * fVar91 + fVar63 * fVar119 + fVar54 * fVar70;
    auVar43 = maxps(auVar100,___xmm_bf800000bf800000bf800000bf800000);
    auVar105 = minps(auVar43,___xmm_3f8000003f8000003f8000003f800000);
    auVar43 = maxps(auVar59,___xmm_bf800000bf800000bf800000bf800000);
    auVar66 = minps(auVar43,___xmm_3f8000003f8000003f8000003f800000);
    auVar152 = divps(auVar66,auVar105);
    auVar76._0_4_ = __xmm_80000000800000008000000080000000 ^ (uint)auVar152._0_4_;
    auVar76._4_4_ = _UNK_150651574 ^ (uint)auVar152._4_4_;
    auVar76._8_4_ = _UNK_150651578 ^ (uint)auVar152._8_4_;
    auVar76._12_4_ = _UNK_15065157c ^ (uint)auVar152._12_4_;
    auVar72 = maxps(auVar76,auVar152);
    uVar6 = -(uint)((float)__xmm_3f8000003f8000003f8000003f800000 < auVar72._0_4_);
    uVar25 = -(uint)(__xmm_3f8000003f8000003f8000003f800000._4_4_ < auVar72._4_4_);
    uVar28 = -(uint)(__xmm_3f8000003f8000003f8000003f800000._8_4_ < auVar72._8_4_);
    uVar29 = -(uint)(__xmm_3f8000003f8000003f8000003f800000._12_4_ < auVar72._12_4_);
    auVar49._4_4_ = uVar25;
    auVar49._0_4_ = uVar6;
    auVar49._8_4_ = uVar28;
    auVar49._12_4_ = uVar29;
    auVar86._0_4_ = auVar88._0_4_ & uVar6;
    auVar86._4_4_ = auVar88._4_4_ & uVar25;
    auVar86._8_4_ = auVar88._8_4_ & uVar28;
    auVar86._12_4_ = auVar88._12_4_ & uVar29;
    iVar11 = movmskps(uVar16,auVar86);
    auVar43 = ___xmm_3f8000003f8000003f8000003f800000;
    if (iVar11 != 0) {
      auVar43 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar72);
    }
    auVar43 = blendvps(auVar72,auVar43,auVar49);
    fVar38 = auVar43._0_4_;
    fVar52 = auVar43._4_4_;
    fVar53 = auVar43._8_4_;
    fVar54 = auVar43._12_4_;
    fVar55 = fVar38 * fVar38;
    fVar60 = fVar52 * fVar52;
    fVar62 = fVar53 * fVar53;
    fVar63 = fVar54 * fVar54;
    auVar87._0_4_ =
         (((((((___xmm_bb9918b7bb9918b7bb9918b7bb9918b7 * fVar55 +
               ___xmm_3cc6061b3cc6061b3cc6061b3cc6061b) * fVar55 +
              ___xmm_bd732a49bd732a49bd732a49bd732a49) * fVar55 +
             ___xmm_3dcadb2a3dcadb2a3dcadb2a3dcadb2a) * fVar55 +
            ___xmm_be0f8549be0f8549be0f8549be0f8549) * fVar55 +
           ___xmm_3e4c7b543e4c7b543e4c7b543e4c7b54) * fVar55 +
          ___xmm_beaaa8cfbeaaa8cfbeaaa8cfbeaaa8cf) * fVar55 +
         ___xmm_3f7ffffe3f7ffffe3f7ffffe3f7ffffe) * fVar38;
    auVar87._4_4_ =
         (((((((_UNK_150b51114 * fVar60 + _UNK_150b51124) * fVar60 + _UNK_150b51134) * fVar60 +
             _UNK_150b51144) * fVar60 + _UNK_150b51154) * fVar60 + _UNK_150b51164) * fVar60 +
          _UNK_150b51174) * fVar60 + _UNK_150b51184) * fVar52;
    auVar87._8_4_ =
         (((((((_UNK_150b51118 * fVar62 + _UNK_150b51128) * fVar62 + _UNK_150b51138) * fVar62 +
             _UNK_150b51148) * fVar62 + _UNK_150b51158) * fVar62 + _UNK_150b51168) * fVar62 +
          _UNK_150b51178) * fVar62 + _UNK_150b51188) * fVar53;
    auVar87._12_4_ =
         (((((((_UNK_150b5111c * fVar63 + _UNK_150b5112c) * fVar63 + _UNK_150b5113c) * fVar63 +
             _UNK_150b5114c) * fVar63 + _UNK_150b5115c) * fVar63 + _UNK_150b5116c) * fVar63 +
          _UNK_150b5117c) * fVar63 + _UNK_150b5118c) * fVar54;
    auVar77._0_4_ = ___xmm_3fc90fdb3fc90fdb3fc90fdb3fc90fdb - auVar87._0_4_;
    auVar77._4_4_ = _UNK_150b51194 - auVar87._4_4_;
    auVar77._8_4_ = _UNK_150b51198 - auVar87._8_4_;
    auVar77._12_4_ = _UNK_150b5119c - auVar87._12_4_;
    auVar43 = blendvps(auVar87,auVar77,auVar49);
    auVar50._4_4_ = -(uint)(auVar152._4_4_ < 0.0);
    auVar50._0_4_ = -(uint)(auVar152._0_4_ < 0.0);
    auVar78._0_4_ = __xmm_80000000800000008000000080000000 ^ auVar43._0_4_;
    auVar78._4_4_ = _UNK_150651574 ^ auVar43._4_4_;
    auVar78._8_4_ = _UNK_150651578 ^ auVar43._8_4_;
    auVar78._12_4_ = _UNK_15065157c ^ auVar43._12_4_;
    auVar50._8_4_ = -(uint)(auVar152._8_4_ < 0.0);
    auVar50._12_4_ = -(uint)(auVar152._12_4_ < 0.0);
    auVar88 = blendvps(auVar43,auVar78,auVar50);
    auVar51._4_4_ = -(uint)(auVar66._4_4_ < 0.0);
    auVar51._0_4_ = -(uint)(auVar66._0_4_ < 0.0);
    auVar5._4_4_ = _UNK_150b51104;
    auVar5._0_4_ = ___xmm_40490fdb40490fdb40490fdb40490fdb;
    auVar5._8_4_ = _UNK_150b51108;
    auVar5._12_4_ = _UNK_150b5110c;
    auVar51._8_4_ = -(uint)(auVar66._8_4_ < 0.0);
    auVar51._12_4_ = -(uint)(auVar66._12_4_ < 0.0);
    auVar43 = blendvps(auVar5,___xmm_c0490fdbc0490fdbc0490fdbc0490fdb,auVar51);
    auVar79._4_4_ =
         -(uint)(_UNK_150b51104 -
                 (float)((uint)((float)(auVar43._4_4_ & -(uint)(auVar105._4_4_ < 0.0)) +
                               auVar88._4_4_) & _UNK_15061cc74) <
                (_UNK_150b51104 - (float)(auVar46._4_4_ & _UNK_15061cc74)) * param_5);
    auVar79._0_4_ =
         -(uint)(___xmm_40490fdb40490fdb40490fdb40490fdb -
                 (float)((uint)((float)(auVar43._0_4_ & -(uint)(auVar105._0_4_ < 0.0)) +
                               auVar88._0_4_) & __xmm_7fffffff7fffffff7fffffff7fffffff) <
                (___xmm_40490fdb40490fdb40490fdb40490fdb -
                (float)(auVar46._0_4_ & __xmm_7fffffff7fffffff7fffffff7fffffff)) * param_5);
    auVar79._8_4_ =
         -(uint)(_UNK_150b51108 -
                 (float)((uint)((float)(auVar43._8_4_ & -(uint)(auVar105._8_4_ < 0.0)) +
                               auVar88._8_4_) & _UNK_15061cc78) <
                (_UNK_150b51108 - (float)(auVar46._8_4_ & _UNK_15061cc78)) * param_5);
    auVar79._12_4_ =
         -(uint)(_UNK_150b5110c -
                 (float)((uint)((float)(auVar43._12_4_ & -(uint)(auVar105._12_4_ < 0.0)) +
                               auVar88._12_4_) & _UNK_15061cc7c) <
                (_UNK_150b5110c - (float)(auVar46._12_4_ & _UNK_15061cc7c)) * param_5);
    auVar43 = packssdw(auVar79,auVar79);
    auVar43 = packsswb(auVar43,auVar43);
    auVar43 = auVar43 & ___xmm_00000000000000000000000001010101;
    if ((bVar14 & 1) != 0) {
      *(char *)(param_4 + uVar7) = auVar43[0];
    }
    if ((bVar14 & 2) != 0) {
      *(char *)(param_4 + 1 + uVar7) = auVar43[1];
    }
    if ((bVar14 & 4) != 0) {
      *(char *)(param_4 + 2 + uVar7) = auVar43[2];
    }
    if ((char)bVar14 < '\0') {
      *(char *)(param_4 + 3 + uVar7) = auVar43[3];
    }
  }
  return;
}

// InitBendingConstraintsIsBuckledWithMaps_sse4 @ 14006c8d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void InitBendingConstraintsIsBuckledWithMaps_sse4
               (longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5
               ,longlong param_6,uint param_7)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  undefined1 (*pauVar8) [16];
  ulonglong uVar9;
  byte bVar10;
  int iVar11;
  ulonglong uVar12;
  byte *pbVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  int unaff_R15D;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  int iVar37;
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
  float fVar51;
  float fVar57;
  int iVar58;
  float fVar59;
  float fVar60;
  int iVar61;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  float fVar65;
  float fVar74;
  float fVar75;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  float fVar76;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar77;
  float fVar82;
  float fVar83;
  float fVar84;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  float fVar85;
  float fVar92;
  float fVar93;
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  float fVar94;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  float fVar95;
  float fVar103;
  float fVar104;
  undefined1 auVar96 [16];
  float fVar105;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  float fVar109;
  float fVar112;
  float fVar113;
  undefined1 auVar110 [16];
  float fVar114;
  undefined1 auVar111 [16];
  float fVar115;
  float fVar119;
  float fVar120;
  undefined1 auVar116 [16];
  float fVar121;
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  float fVar124;
  float fVar130;
  float fVar131;
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  float fVar132;
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  float fVar133;
  float fVar137;
  float fVar138;
  undefined1 auVar134 [16];
  float fVar139;
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  float fVar140;
  float fVar142;
  float fVar143;
  undefined1 auVar141 [16];
  float fVar144;
  float fVar145;
  float fVar146;
  float fVar147;
  float fVar148;
  float fVar149;
  float fVar154;
  float fVar155;
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  float fVar156;
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  uint local_138;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  
  uVar24 = param_7 + 3;
  if (-1 < (int)param_7) {
    uVar24 = param_7;
  }
  if ((int)(uVar24 & 0xfffffffc) < 1) {
    uVar14 = 0;
  }
  else {
    uVar9 = 0;
    uVar14 = 0;
    auVar41 = ___xmm_40490fdb40490fdb40490fdb40490fdb;
    uVar19 = __xmm_7fffffff7fffffff7fffffff7fffffff;
    uVar27 = _UNK_15061cc74;
    uVar28 = _UNK_15061cc78;
    uVar31 = _UNK_15061cc7c;
    do {
      auVar52 = ___xmm_40490fdb40490fdb40490fdb40490fdb;
      uVar6 = _UNK_15061cc7c;
      uVar36 = _UNK_15061cc78;
      uVar35 = _UNK_15061cc74;
      uVar32 = __xmm_7fffffff7fffffff7fffffff7fffffff;
      piVar1 = (int *)(param_2 + uVar9 * 4);
      auVar68 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar9 * 4);
      piVar2 = (int *)(param_2 + 0x20 + uVar9 * 4);
      piVar3 = (int *)(param_2 + 0x30 + uVar9 * 4);
      auVar42 = pmovsxbd(auVar68,*(undefined4 *)(param_5 + uVar14));
      lVar18 = (longlong)(*piVar1 * 3);
      lVar20 = (longlong)(auVar68._0_4_ * 3);
      lVar16 = (longlong)(*piVar2 * 3);
      lVar17 = (longlong)(*piVar3 * 3);
      auVar125 = insertps(ZEXT416(*(uint *)(param_1 + lVar18 * 4)),
                          *(undefined4 *)(param_1 + lVar20 * 4),0x10);
      auVar125 = insertps(auVar125,*(undefined4 *)(param_1 + lVar16 * 4),0x20);
      auVar126 = insertps(auVar125,*(undefined4 *)(param_1 + lVar17 * 4),0x30);
      auVar125 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar18 * 4)),
                          *(undefined4 *)(param_1 + 4 + lVar20 * 4),0x10);
      auVar125 = insertps(auVar125,*(undefined4 *)(param_1 + 4 + lVar16 * 4),0x20);
      auVar87 = insertps(auVar125,*(undefined4 *)(param_1 + 4 + lVar17 * 4),0x30);
      auVar125 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar18 * 4)),
                          *(undefined4 *)(param_1 + 8 + lVar20 * 4),0x10);
      auVar125 = insertps(auVar125,*(undefined4 *)(param_1 + 8 + lVar16 * 4),0x20);
      auVar125 = insertps(auVar125,*(undefined4 *)(param_1 + 8 + lVar17 * 4),0x30);
      lVar18 = (longlong)(piVar1[1] * 3);
      lVar20 = (longlong)(auVar68._4_4_ * 3);
      lVar16 = (longlong)(piVar2[1] * 3);
      lVar17 = (longlong)(piVar3[1] * 3);
      auVar150 = insertps(ZEXT416(*(uint *)(param_1 + lVar18 * 4)),
                          *(undefined4 *)(param_1 + lVar20 * 4),0x10);
      auVar150 = insertps(auVar150,*(undefined4 *)(param_1 + lVar16 * 4),0x20);
      auVar151 = insertps(auVar150,*(undefined4 *)(param_1 + lVar17 * 4),0x30);
      auVar150 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar18 * 4)),
                          *(undefined4 *)(param_1 + 4 + lVar20 * 4),0x10);
      auVar150 = insertps(auVar150,*(undefined4 *)(param_1 + 4 + lVar16 * 4),0x20);
      auVar134 = insertps(auVar150,*(undefined4 *)(param_1 + 4 + lVar17 * 4),0x30);
      auVar150 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar18 * 4)),
                          *(undefined4 *)(param_1 + 8 + lVar20 * 4),0x10);
      auVar150 = insertps(auVar150,*(undefined4 *)(param_1 + 8 + lVar16 * 4),0x20);
      auVar141 = insertps(auVar150,*(undefined4 *)(param_1 + 8 + lVar17 * 4),0x30);
      lVar18 = (longlong)(piVar1[2] * 3);
      lVar20 = (longlong)(auVar68._8_4_ * 3);
      lVar16 = (longlong)(piVar2[2] * 3);
      lVar17 = (longlong)(piVar3[2] * 3);
      auVar150 = insertps(ZEXT416(*(uint *)(param_1 + lVar18 * 4)),
                          *(undefined4 *)(param_1 + lVar20 * 4),0x10);
      auVar150 = insertps(auVar150,*(undefined4 *)(param_1 + lVar16 * 4),0x20);
      auVar116 = insertps(auVar150,*(undefined4 *)(param_1 + lVar17 * 4),0x30);
      auVar150 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar18 * 4)),
                          *(undefined4 *)(param_1 + 4 + lVar20 * 4),0x10);
      auVar150 = insertps(auVar150,*(undefined4 *)(param_1 + 4 + lVar16 * 4),0x20);
      auVar110 = insertps(auVar150,*(undefined4 *)(param_1 + 4 + lVar17 * 4),0x30);
      auVar150 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar18 * 4)),
                          *(undefined4 *)(param_1 + 8 + lVar20 * 4),0x10);
      auVar150 = insertps(auVar150,*(undefined4 *)(param_1 + 8 + lVar16 * 4),0x20);
      auVar106 = insertps(auVar150,*(undefined4 *)(param_1 + 8 + lVar17 * 4),0x30);
      unaff_R15D = piVar1[3] * 3;
      iVar11 = auVar68._12_4_ * 3;
      auVar68 = insertps(ZEXT416(*(uint *)(param_6 + (auVar42._0_4_ << 2))),
                         *(undefined4 *)(param_6 + auVar42._4_4_ * 4),0x10);
      auVar68 = insertps(auVar68,*(undefined4 *)(param_6 + (auVar42._8_4_ << 2)),0x20);
      auVar69 = insertps(auVar68,*(undefined4 *)(param_6 + (auVar42._12_4_ << 2)),0x30);
      puVar7 = (uint *)(param_3 + (uVar9 & 0xffffffff));
      fVar149 = auVar151._0_4_;
      fVar154 = auVar151._4_4_;
      fVar156 = auVar151._12_4_;
      fVar124 = auVar126._0_4_;
      fVar65 = fVar149 - fVar124;
      fVar130 = auVar126._4_4_;
      fVar74 = fVar154 - fVar130;
      auVar96._4_4_ = fVar74;
      auVar96._0_4_ = fVar65;
      fVar155 = auVar151._8_4_;
      fVar131 = auVar126._8_4_;
      fVar75 = fVar155 - fVar131;
      fVar132 = auVar126._12_4_;
      fVar76 = fVar156 - fVar132;
      fVar133 = auVar134._0_4_;
      fVar137 = auVar134._4_4_;
      fVar139 = auVar134._12_4_;
      fVar85 = auVar87._0_4_;
      auVar126._0_4_ = fVar133 - fVar85;
      fVar92 = auVar87._4_4_;
      auVar126._4_4_ = fVar137 - fVar92;
      fVar138 = auVar134._8_4_;
      fVar93 = auVar87._8_4_;
      auVar126._8_4_ = fVar138 - fVar93;
      fVar94 = auVar87._12_4_;
      auVar126._12_4_ = fVar139 - fVar94;
      fVar140 = auVar141._0_4_;
      fVar142 = auVar141._4_4_;
      fVar144 = auVar141._12_4_;
      fVar51 = auVar125._0_4_;
      auVar151._0_4_ = fVar140 - fVar51;
      fVar57 = auVar125._4_4_;
      auVar151._4_4_ = fVar142 - fVar57;
      fVar59 = auVar125._8_4_;
      fVar143 = auVar141._8_4_;
      auVar151._8_4_ = fVar143 - fVar59;
      fVar60 = auVar125._12_4_;
      auVar151._12_4_ = fVar144 - fVar60;
      auVar96._8_4_ = fVar75;
      auVar96._12_4_ = fVar76;
      auVar134._0_4_ = auVar126._0_4_ * auVar126._0_4_ + fVar65 * fVar65;
      auVar134._4_4_ = auVar126._4_4_ * auVar126._4_4_ + fVar74 * fVar74;
      auVar134._8_4_ = auVar126._8_4_ * auVar126._8_4_ + fVar75 * fVar75;
      auVar134._12_4_ = auVar126._12_4_ * auVar126._12_4_ + fVar76 * fVar76;
      auVar68._0_4_ = auVar151._0_4_ * auVar151._0_4_ + auVar134._0_4_;
      auVar68._4_4_ = auVar151._4_4_ * auVar151._4_4_ + auVar134._4_4_;
      auVar68._8_4_ = auVar151._8_4_ * auVar151._8_4_ + auVar134._8_4_;
      auVar68._12_4_ = auVar151._12_4_ * auVar151._12_4_ + auVar134._12_4_;
      auVar125 = sqrtps(auVar134,auVar68);
      uVar22 = -(uint)(auVar68._0_4_ <= ___xmm_00800000008000000080000000800000);
      uVar25 = -(uint)(auVar68._4_4_ <= _UNK_1508be494);
      uVar29 = -(uint)(auVar68._8_4_ <= _UNK_1508be498);
      uVar33 = -(uint)(auVar68._12_4_ <= _UNK_1508be49c);
      auVar42._4_4_ = uVar25;
      auVar42._0_4_ = uVar22;
      auVar42._8_4_ = uVar29;
      auVar42._12_4_ = uVar33;
      auVar87 = divps(auVar96,auVar125);
      auVar68 = divps(auVar126,auVar125);
      auVar125 = divps(auVar151,auVar125);
      auVar150 = blendvps(auVar87,___xmm_3f8000003f8000003f8000003f800000,auVar42);
      fVar77 = fVar124 - auVar116._0_4_;
      fVar82 = fVar130 - auVar116._4_4_;
      fVar83 = fVar131 - auVar116._8_4_;
      fVar84 = fVar132 - auVar116._12_4_;
      fVar65 = fVar85 - auVar110._0_4_;
      fVar74 = fVar92 - auVar110._4_4_;
      fVar75 = fVar93 - auVar110._8_4_;
      fVar76 = fVar94 - auVar110._12_4_;
      fVar95 = fVar149 - auVar116._0_4_;
      fVar103 = fVar154 - auVar116._4_4_;
      fVar104 = fVar155 - auVar116._8_4_;
      fVar105 = fVar156 - auVar116._12_4_;
      fVar115 = fVar133 - auVar110._0_4_;
      fVar119 = fVar137 - auVar110._4_4_;
      fVar120 = fVar138 - auVar110._8_4_;
      fVar121 = fVar139 - auVar110._12_4_;
      fVar109 = fVar51 - auVar106._0_4_;
      fVar112 = fVar57 - auVar106._4_4_;
      fVar113 = fVar59 - auVar106._8_4_;
      fVar114 = fVar60 - auVar106._12_4_;
      fVar145 = fVar140 - auVar106._0_4_;
      fVar146 = fVar142 - auVar106._4_4_;
      fVar147 = fVar143 - auVar106._8_4_;
      fVar148 = fVar144 - auVar106._12_4_;
      auVar116._0_4_ = fVar77 * fVar115 - fVar95 * fVar65;
      auVar116._4_4_ = fVar82 * fVar119 - fVar103 * fVar74;
      auVar116._8_4_ = fVar83 * fVar120 - fVar104 * fVar75;
      auVar116._12_4_ = fVar84 * fVar121 - fVar105 * fVar76;
      lVar20 = (longlong)unaff_R15D;
      lVar17 = (longlong)iVar11;
      lVar18 = (longlong)(piVar2[3] * 3);
      lVar16 = (longlong)(piVar3[3] * 3);
      auVar106._0_4_ = fVar65 * fVar145 - fVar115 * fVar109;
      auVar106._4_4_ = fVar74 * fVar146 - fVar119 * fVar112;
      auVar106._8_4_ = fVar75 * fVar147 - fVar120 * fVar113;
      auVar106._12_4_ = fVar76 * fVar148 - fVar121 * fVar114;
      auVar122._0_4_ = fVar95 * fVar109 - fVar145 * fVar77;
      auVar122._4_4_ = fVar103 * fVar112 - fVar146 * fVar82;
      auVar122._8_4_ = fVar104 * fVar113 - fVar147 * fVar83;
      auVar122._12_4_ = fVar105 * fVar114 - fVar148 * fVar84;
      auVar111._0_4_ = auVar122._0_4_ * auVar122._0_4_ + auVar106._0_4_ * auVar106._0_4_;
      auVar111._4_4_ = auVar122._4_4_ * auVar122._4_4_ + auVar106._4_4_ * auVar106._4_4_;
      auVar111._8_4_ = auVar122._8_4_ * auVar122._8_4_ + auVar106._8_4_ * auVar106._8_4_;
      auVar111._12_4_ = auVar122._12_4_ * auVar122._12_4_ + auVar106._12_4_ * auVar106._12_4_;
      auVar141._0_4_ = auVar116._0_4_ * auVar116._0_4_ + auVar111._0_4_;
      auVar141._4_4_ = auVar116._4_4_ * auVar116._4_4_ + auVar111._4_4_;
      auVar141._8_4_ = auVar116._8_4_ * auVar116._8_4_ + auVar111._8_4_;
      auVar141._12_4_ = auVar116._12_4_ * auVar116._12_4_ + auVar111._12_4_;
      auVar87 = sqrtps(auVar111,auVar141);
      auVar42 = divps(auVar106,auVar87);
      auVar106 = divps(auVar122,auVar87);
      auVar126 = divps(auVar116,auVar87);
      uVar23 = -(uint)(auVar87._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77);
      uVar26 = -(uint)(auVar87._4_4_ <= _UNK_1506895d4);
      uVar30 = -(uint)(auVar87._8_4_ <= _UNK_1506895d8);
      uVar34 = -(uint)(auVar87._12_4_ <= _UNK_1506895dc);
      fVar76 = (float)(~uVar23 & auVar42._0_4_);
      fVar77 = (float)(~uVar26 & auVar42._4_4_);
      fVar82 = (float)(~uVar30 & auVar42._8_4_);
      fVar83 = (float)(~uVar34 & auVar42._12_4_);
      fVar105 = (float)(~uVar23 & auVar106._0_4_);
      fVar109 = (float)(~uVar26 & auVar106._4_4_);
      fVar112 = (float)(~uVar30 & auVar106._8_4_);
      fVar113 = (float)(~uVar34 & auVar106._12_4_);
      auVar42 = insertps(ZEXT416(*(uint *)(param_1 + lVar20 * 4)),
                         *(undefined4 *)(param_1 + lVar17 * 4),0x10);
      auVar42 = insertps(auVar42,*(undefined4 *)(param_1 + lVar18 * 4),0x20);
      auVar87 = insertps(auVar42,*(undefined4 *)(param_1 + lVar16 * 4),0x30);
      auVar42 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar20 * 4)),
                         *(undefined4 *)(param_1 + 4 + lVar17 * 4),0x10);
      auVar42 = insertps(auVar42,*(undefined4 *)(param_1 + 4 + lVar18 * 4),0x20);
      fVar84 = (float)(~uVar23 & auVar126._0_4_);
      fVar95 = (float)(~uVar26 & auVar126._4_4_);
      fVar103 = (float)(~uVar30 & auVar126._8_4_);
      fVar104 = (float)(~uVar34 & auVar126._12_4_);
      auVar42 = insertps(auVar42,*(undefined4 *)(param_1 + 4 + lVar16 * 4),0x30);
      fVar149 = fVar149 - auVar87._0_4_;
      fVar154 = fVar154 - auVar87._4_4_;
      fVar155 = fVar155 - auVar87._8_4_;
      fVar156 = fVar156 - auVar87._12_4_;
      fVar124 = fVar124 - auVar87._0_4_;
      fVar130 = fVar130 - auVar87._4_4_;
      fVar131 = fVar131 - auVar87._8_4_;
      fVar132 = fVar132 - auVar87._12_4_;
      fVar133 = fVar133 - auVar42._0_4_;
      fVar137 = fVar137 - auVar42._4_4_;
      fVar138 = fVar138 - auVar42._8_4_;
      fVar139 = fVar139 - auVar42._12_4_;
      fVar85 = fVar85 - auVar42._0_4_;
      fVar92 = fVar92 - auVar42._4_4_;
      fVar93 = fVar93 - auVar42._8_4_;
      fVar94 = fVar94 - auVar42._12_4_;
      auVar42 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar20 * 4)),
                         *(undefined4 *)(param_1 + 8 + lVar17 * 4),0x10);
      auVar42 = insertps(auVar42,*(undefined4 *)(param_1 + 8 + lVar18 * 4),0x20);
      auVar42 = insertps(auVar42,*(undefined4 *)(param_1 + 8 + lVar16 * 4),0x30);
      fVar140 = fVar140 - auVar42._0_4_;
      fVar142 = fVar142 - auVar42._4_4_;
      fVar143 = fVar143 - auVar42._8_4_;
      fVar144 = fVar144 - auVar42._12_4_;
      fVar51 = fVar51 - auVar42._0_4_;
      fVar57 = fVar57 - auVar42._4_4_;
      fVar59 = fVar59 - auVar42._8_4_;
      fVar60 = fVar60 - auVar42._12_4_;
      auVar127._0_4_ = fVar124 * fVar133;
      auVar127._4_4_ = fVar130 * fVar137;
      auVar127._8_4_ = fVar131 * fVar138;
      auVar127._12_4_ = fVar132 * fVar139;
      auVar152._0_4_ = fVar149 * fVar85 - auVar127._0_4_;
      auVar152._4_4_ = fVar154 * fVar92 - auVar127._4_4_;
      auVar152._8_4_ = fVar155 * fVar93 - auVar127._8_4_;
      auVar152._12_4_ = fVar156 * fVar94 - auVar127._12_4_;
      auVar135._0_4_ = fVar133 * fVar51 - fVar85 * fVar140;
      auVar135._4_4_ = fVar137 * fVar57 - fVar92 * fVar142;
      auVar135._8_4_ = fVar138 * fVar59 - fVar93 * fVar143;
      auVar135._12_4_ = fVar139 * fVar60 - fVar94 * fVar144;
      auVar123._0_4_ = fVar124 * fVar140 - fVar51 * fVar149;
      auVar123._4_4_ = fVar130 * fVar142 - fVar57 * fVar154;
      auVar123._8_4_ = fVar131 * fVar143 - fVar59 * fVar155;
      auVar123._12_4_ = fVar132 * fVar144 - fVar60 * fVar156;
      auVar87._0_4_ =
           auVar152._0_4_ * auVar152._0_4_ +
           auVar123._0_4_ * auVar123._0_4_ + auVar135._0_4_ * auVar135._0_4_;
      auVar87._4_4_ =
           auVar152._4_4_ * auVar152._4_4_ +
           auVar123._4_4_ * auVar123._4_4_ + auVar135._4_4_ * auVar135._4_4_;
      auVar87._8_4_ =
           auVar152._8_4_ * auVar152._8_4_ +
           auVar123._8_4_ * auVar123._8_4_ + auVar135._8_4_ * auVar135._8_4_;
      auVar87._12_4_ =
           auVar152._12_4_ * auVar152._12_4_ +
           auVar123._12_4_ * auVar123._12_4_ + auVar135._12_4_ * auVar135._12_4_;
      auVar87 = sqrtps(auVar127,auVar87);
      auVar106 = divps(auVar135,auVar87);
      auVar42 = divps(auVar123,auVar87);
      auVar134 = divps(auVar152,auVar87);
      uVar23 = -(uint)(auVar87._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77);
      uVar26 = -(uint)(auVar87._4_4_ <= _UNK_1506895d4);
      uVar30 = -(uint)(auVar87._8_4_ <= _UNK_1506895d8);
      uVar34 = -(uint)(auVar87._12_4_ <= _UNK_1506895dc);
      fVar51 = (float)(~uVar23 & auVar106._0_4_);
      fVar57 = (float)(~uVar26 & auVar106._4_4_);
      fVar59 = (float)(~uVar30 & auVar106._8_4_);
      fVar60 = (float)(~uVar34 & auVar106._12_4_);
      fVar65 = (float)(~uVar23 & auVar42._0_4_);
      fVar74 = (float)(~uVar26 & auVar42._4_4_);
      fVar138 = (float)(~uVar30 & auVar42._8_4_);
      fVar75 = (float)(~uVar34 & auVar42._12_4_);
      fVar155 = (float)(~uVar23 & auVar134._0_4_);
      fVar143 = (float)(~uVar26 & auVar134._4_4_);
      fVar85 = (float)(~uVar30 & auVar134._8_4_);
      fVar92 = (float)(~uVar34 & auVar134._12_4_);
      local_148 = auVar150._0_4_;
      fStack_144 = auVar150._4_4_;
      fStack_140 = auVar150._8_4_;
      fStack_13c = auVar150._12_4_;
      auVar150._0_4_ =
           (fVar76 * fVar155 - fVar84 * fVar51) * (float)(~uVar22 & auVar68._0_4_) +
           (fVar84 * fVar65 - fVar105 * fVar155) * local_148 +
           (fVar105 * fVar51 - fVar76 * fVar65) * (float)(~uVar22 & auVar125._0_4_);
      auVar150._4_4_ =
           (fVar77 * fVar143 - fVar95 * fVar57) * (float)(~uVar25 & auVar68._4_4_) +
           (fVar95 * fVar74 - fVar109 * fVar143) * fStack_144 +
           (fVar109 * fVar57 - fVar77 * fVar74) * (float)(~uVar25 & auVar125._4_4_);
      auVar150._8_4_ =
           (fVar82 * fVar85 - fVar103 * fVar59) * (float)(~uVar29 & auVar68._8_4_) +
           (fVar103 * fVar138 - fVar112 * fVar85) * fStack_140 +
           (fVar112 * fVar59 - fVar82 * fVar138) * (float)(~uVar29 & auVar125._8_4_);
      auVar150._12_4_ =
           (fVar83 * fVar92 - fVar104 * fVar60) * (float)(~uVar33 & auVar68._12_4_) +
           (fVar104 * fVar75 - fVar113 * fVar92) * fStack_13c +
           (fVar113 * fVar60 - fVar83 * fVar75) * (float)(~uVar33 & auVar125._12_4_);
      auVar128._0_4_ = fVar155 * fVar84 + fVar65 * fVar105 + fVar51 * fVar76;
      auVar128._4_4_ = fVar143 * fVar95 + fVar74 * fVar109 + fVar57 * fVar77;
      auVar128._8_4_ = fVar85 * fVar103 + fVar138 * fVar112 + fVar59 * fVar82;
      auVar128._12_4_ = fVar92 * fVar104 + fVar75 * fVar113 + fVar60 * fVar83;
      auVar68 = maxps(auVar128,___xmm_bf800000bf800000bf800000bf800000);
      auVar106 = minps(auVar68,___xmm_3f8000003f8000003f8000003f800000);
      auVar68 = maxps(auVar150,___xmm_bf800000bf800000bf800000bf800000);
      auVar68 = minps(auVar68,___xmm_3f8000003f8000003f8000003f800000);
      auVar42 = divps(auVar68,auVar106);
      auVar110._0_4_ = (uint)auVar42._0_4_ ^ __xmm_80000000800000008000000080000000;
      auVar110._4_4_ = (uint)auVar42._4_4_ ^ _UNK_150651574;
      auVar110._8_4_ = (uint)auVar42._8_4_ ^ _UNK_150651578;
      auVar110._12_4_ = (uint)auVar42._12_4_ ^ _UNK_15065157c;
      auVar87 = maxps(auVar110,auVar42);
      auVar125._4_4_ = -(uint)(__xmm_3f8000003f8000003f8000003f800000._4_4_ < auVar87._4_4_);
      auVar125._0_4_ = -(uint)((float)__xmm_3f8000003f8000003f8000003f800000 < auVar87._0_4_);
      auVar125._8_4_ = -(uint)(__xmm_3f8000003f8000003f8000003f800000._8_4_ < auVar87._8_4_);
      auVar125._12_4_ = -(uint)(__xmm_3f8000003f8000003f8000003f800000._12_4_ < auVar87._12_4_);
      iVar11 = movmskps(iVar11,auVar125);
      if (iVar11 != 0) {
        auVar126 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar87);
      }
      auVar87 = blendvps(auVar87,auVar126,auVar125);
      fVar51 = auVar87._0_4_;
      fVar57 = auVar87._4_4_;
      fVar59 = auVar87._8_4_;
      fVar60 = auVar87._12_4_;
      fVar65 = fVar51 * fVar51;
      fVar74 = fVar57 * fVar57;
      fVar138 = fVar59 * fVar59;
      fVar75 = fVar60 * fVar60;
      auVar86._0_4_ =
           (((((((fVar65 * ___xmm_bb9918b7bb9918b7bb9918b7bb9918b7 +
                 ___xmm_3cc6061b3cc6061b3cc6061b3cc6061b) * fVar65 +
                ___xmm_bd732a49bd732a49bd732a49bd732a49) * fVar65 +
               ___xmm_3dcadb2a3dcadb2a3dcadb2a3dcadb2a) * fVar65 +
              ___xmm_be0f8549be0f8549be0f8549be0f8549) * fVar65 +
             ___xmm_3e4c7b543e4c7b543e4c7b543e4c7b54) * fVar65 +
            ___xmm_beaaa8cfbeaaa8cfbeaaa8cfbeaaa8cf) * fVar65 +
           ___xmm_3f7ffffe3f7ffffe3f7ffffe3f7ffffe) * fVar51;
      auVar86._4_4_ =
           (((((((fVar74 * _UNK_150b51114 + _UNK_150b51124) * fVar74 + _UNK_150b51134) * fVar74 +
               _UNK_150b51144) * fVar74 + _UNK_150b51154) * fVar74 + _UNK_150b51164) * fVar74 +
            _UNK_150b51174) * fVar74 + _UNK_150b51184) * fVar57;
      auVar86._8_4_ =
           (((((((fVar138 * _UNK_150b51118 + _UNK_150b51128) * fVar138 + _UNK_150b51138) * fVar138 +
               _UNK_150b51148) * fVar138 + _UNK_150b51158) * fVar138 + _UNK_150b51168) * fVar138 +
            _UNK_150b51178) * fVar138 + _UNK_150b51188) * fVar59;
      auVar86._12_4_ =
           (((((((fVar75 * _UNK_150b5111c + _UNK_150b5112c) * fVar75 + _UNK_150b5113c) * fVar75 +
               _UNK_150b5114c) * fVar75 + _UNK_150b5115c) * fVar75 + _UNK_150b5116c) * fVar75 +
            _UNK_150b5117c) * fVar75 + _UNK_150b5118c) * fVar60;
      auVar66._0_4_ = ___xmm_3fc90fdb3fc90fdb3fc90fdb3fc90fdb - auVar86._0_4_;
      auVar66._4_4_ = _UNK_150b51194 - auVar86._4_4_;
      auVar66._8_4_ = _UNK_150b51198 - auVar86._8_4_;
      auVar66._12_4_ = _UNK_150b5119c - auVar86._12_4_;
      auVar125 = blendvps(auVar86,auVar66,auVar125);
      auVar38._4_4_ = -(uint)(auVar42._4_4_ < 0.0);
      auVar38._0_4_ = -(uint)(auVar42._0_4_ < 0.0);
      auVar67._0_4_ = auVar125._0_4_ ^ __xmm_80000000800000008000000080000000;
      auVar67._4_4_ = auVar125._4_4_ ^ _UNK_150651574;
      auVar67._8_4_ = auVar125._8_4_ ^ _UNK_150651578;
      auVar67._12_4_ = auVar125._12_4_ ^ _UNK_15065157c;
      auVar38._8_4_ = -(uint)(auVar42._8_4_ < 0.0);
      auVar38._12_4_ = -(uint)(auVar42._12_4_ < 0.0);
      auVar42 = blendvps(auVar125,auVar67,auVar38);
      auVar39._4_4_ = -(uint)(auVar68._4_4_ < 0.0);
      auVar39._0_4_ = -(uint)(auVar68._0_4_ < 0.0);
      auVar39._8_4_ = -(uint)(auVar68._8_4_ < 0.0);
      auVar39._12_4_ = -(uint)(auVar68._12_4_ < 0.0);
      auVar68 = blendvps(___xmm_40490fdb40490fdb40490fdb40490fdb,
                         ___xmm_c0490fdbc0490fdbc0490fdbc0490fdb,auVar39);
      auVar40._4_4_ =
           -(uint)(__xmm_40490fdb40490fdb40490fdb40490fdb._4_4_ -
                   (float)((uint)((float)(auVar68._4_4_ & -(uint)(auVar106._4_4_ < 0.0)) +
                                 auVar42._4_4_) & _UNK_15061cc74) <
                  (auVar41._4_4_ - (float)(puVar7[1] & uVar27)) * auVar69._4_4_);
      auVar40._0_4_ =
           -(uint)((float)__xmm_40490fdb40490fdb40490fdb40490fdb -
                   (float)((uint)((float)(auVar68._0_4_ & -(uint)(auVar106._0_4_ < 0.0)) +
                                 auVar42._0_4_) & __xmm_7fffffff7fffffff7fffffff7fffffff) <
                  (auVar41._0_4_ - (float)(*puVar7 & uVar19)) * auVar69._0_4_);
      auVar40._8_4_ =
           -(uint)(__xmm_40490fdb40490fdb40490fdb40490fdb._8_4_ -
                   (float)((uint)((float)(auVar68._8_4_ & -(uint)(auVar106._8_4_ < 0.0)) +
                                 auVar42._8_4_) & _UNK_15061cc78) <
                  (auVar41._8_4_ - (float)(puVar7[2] & uVar28)) * auVar69._8_4_);
      auVar40._12_4_ =
           -(uint)(__xmm_40490fdb40490fdb40490fdb40490fdb._12_4_ -
                   (float)((uint)((float)(auVar68._12_4_ & -(uint)(auVar106._12_4_ < 0.0)) +
                                 auVar42._12_4_) & _UNK_15061cc7c) <
                  (auVar41._12_4_ - (float)(puVar7[3] & uVar31)) * auVar69._12_4_);
      auVar41 = packssdw(auVar40,auVar40);
      auVar41 = packsswb(auVar41,auVar41);
      *(uint *)(param_4 + uVar14) = auVar41._0_4_ & (uint)__xmm_00000000000000000000000001010101;
      uVar14 = uVar14 + 4;
      uVar9 = uVar9 + 0x10;
      auVar41 = auVar52;
      uVar19 = uVar32;
      uVar27 = uVar35;
      uVar28 = uVar36;
      uVar31 = uVar6;
    } while ((int)uVar14 < (int)(uVar24 & 0xfffffffc));
  }
  uVar24 = (uint)uVar14;
  if ((int)param_7 <= (int)uVar24) {
    return;
  }
  auVar41._0_4_ =
       -(uint)((int)(uVar24 | (uint)__xmm_00000003000000020000000100000000) < (int)param_7);
  auVar41._4_4_ =
       -(uint)((int)(uVar24 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_7);
  auVar41._8_4_ = -(uint)((int)(uVar24 | _UNK_150631e08) < (int)param_7);
  auVar41._12_4_ = -(uint)((int)(uVar24 | _UNK_150631e0c) < (int)param_7);
  uVar14 = uVar14 & 0xffffffff;
  pauVar8 = (undefined1 (*) [16])(param_2 + uVar14 * 0x10);
  uVar19 = movmskps(unaff_R15D,auVar41);
  bVar10 = (char)((char)uVar19 << 4) >> 4;
  if (uVar19 == 0xf) {
    auVar68 = *pauVar8;
    iVar58 = *(int *)pauVar8[1];
    auVar52 = pauVar8[2];
    iVar61 = *(int *)pauVar8[3];
    auVar78._0_8_ = auVar68._0_8_;
    auVar78._8_4_ = auVar68._4_4_;
    auVar78._12_4_ = *(undefined4 *)(pauVar8[1] + 4);
    iVar11 = auVar68._0_4_;
    auVar98._0_8_ = CONCAT44(*(undefined4 *)(pauVar8[1] + 8),auVar68._8_4_);
    auVar98._8_4_ = auVar68._12_4_;
    auVar98._12_4_ = *(undefined4 *)(pauVar8[1] + 0xc);
    auVar69._0_8_ = auVar52._0_8_;
    auVar69._8_4_ = auVar52._4_4_;
    auVar69._12_4_ = *(undefined4 *)(pauVar8[3] + 4);
    iVar37 = auVar52._0_4_;
    auVar62._0_8_ = CONCAT44(*(undefined4 *)(pauVar8[3] + 8),auVar52._8_4_);
    auVar62._8_4_ = auVar52._12_4_;
    auVar62._12_4_ = *(undefined4 *)(pauVar8[3] + 0xc);
    auVar52._8_8_ = auVar69._8_8_;
    auVar52._0_8_ = auVar78._8_8_;
    auVar88._8_8_ = auVar62._0_8_;
    auVar88._0_8_ = auVar98._0_8_;
    auVar97._8_8_ = auVar62._8_8_;
    auVar97._0_8_ = auVar98._8_8_;
  }
  else {
    auVar43._0_4_ = ___xmm_00000030000000200000001000000000 & auVar41._0_4_;
    auVar43._4_4_ = _UNK_150b511c4 & auVar41._4_4_;
    auVar43._8_4_ = _UNK_150b511c8 & auVar41._8_4_;
    auVar43._12_4_ = _UNK_150b511cc & auVar41._12_4_;
    lVar18 = extractps(auVar43,1);
    lVar17 = extractps(auVar43,2);
    lVar16 = extractps(auVar43,3);
    iVar11 = *(int *)*pauVar8;
    iVar58 = *(int *)(*pauVar8 + lVar18);
    iVar37 = *(int *)(*pauVar8 + lVar17);
    iVar61 = *(int *)(*pauVar8 + lVar16);
    auVar68 = ___xmm_00000034000000240000001400000004 & auVar41;
    auVar52._4_4_ = *(undefined4 *)(*pauVar8 + auVar68._4_4_);
    auVar52._0_4_ = *(undefined4 *)(*pauVar8 + auVar68._0_4_);
    auVar52._12_4_ = *(undefined4 *)(*pauVar8 + auVar68._12_4_);
    auVar52._8_4_ = *(undefined4 *)(*pauVar8 + auVar68._8_4_);
    auVar68 = ___xmm_00000038000000280000001800000008 & auVar41;
    auVar88._4_4_ = *(undefined4 *)(*pauVar8 + auVar68._4_4_);
    auVar88._0_4_ = *(undefined4 *)(*pauVar8 + auVar68._0_4_);
    auVar88._12_4_ = *(undefined4 *)(*pauVar8 + auVar68._12_4_);
    auVar88._8_4_ = *(undefined4 *)(*pauVar8 + auVar68._8_4_);
    auVar44 = ___xmm_0000003c0000002c0000001c0000000c & auVar41;
    auVar97._4_4_ = *(undefined4 *)(*pauVar8 + auVar44._4_4_);
    auVar97._0_4_ = *(undefined4 *)(*pauVar8 + auVar44._0_4_);
    auVar97._12_4_ = *(undefined4 *)(*pauVar8 + auVar44._12_4_);
    auVar97._8_4_ = *(undefined4 *)(*pauVar8 + auVar44._8_4_);
    pbVar13 = (byte *)(param_5 + uVar14);
    if ((~bVar10 & 9) != 0) {
      if ((uVar19 & 1) != 0) {
        auVar44 = ZEXT116(*pbVar13);
      }
      if ((uVar19 & 2) != 0) {
        auVar64._8_8_ = auVar44._8_8_;
        auVar64._0_8_ = auVar44._0_8_ & 0xffffffffffff00ff | (ulonglong)pbVar13[1] << 8;
        auVar44 = pblendw(auVar44,auVar64,0xfd);
      }
      if ((uVar19 & 4) != 0) {
        bVar4 = auVar44[3];
        auVar68 = pmovzxwd(auVar44,auVar44);
        auVar44._8_8_ = auVar68._8_8_;
        auVar44._0_8_ =
             auVar68._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar13[2] << 0x10 |
             (ulonglong)bVar4 << 0x18;
      }
      if ((uVar19 & 8) == 0) {
        local_138 = auVar44._0_4_;
        bVar5 = false;
      }
      else {
        auVar68 = pmovzxwd(auVar44,auVar44);
        local_138 = auVar68._0_4_ & 0xffff | (uint)auVar44[2] << 0x10 | (uint)pbVar13[3] << 0x18;
        bVar5 = false;
      }
      goto LAB_14006d1b5;
    }
  }
  local_138 = *(uint *)(param_5 + uVar14);
  bVar5 = true;
LAB_14006d1b5:
  auVar129._4_4_ = iVar58 * 3;
  auVar129._0_4_ = iVar11 * 3;
  auVar129._8_4_ = iVar37 * 3;
  auVar129._12_4_ = iVar61 * 3;
  auVar129 = auVar129 & auVar41;
  lVar16 = param_1 + (longlong)auVar129._0_4_ * 4;
  lVar17 = param_1 + (longlong)auVar129._4_4_ * 4;
  auVar125 = ___xmm_00000004000000040000000400000004 & auVar41;
  uVar9 = (ulonglong)auVar125._0_4_;
  uVar21 = (ulonglong)auVar125._4_4_;
  auVar42 = insertps(ZEXT416(*(uint *)(uVar9 + lVar16)),*(undefined4 *)(uVar21 + lVar17),0x10);
  auVar110 = ___xmm_00000008000000080000000800000008 & auVar41;
  uVar12 = (ulonglong)auVar110._0_4_;
  uVar15 = (ulonglong)auVar110._4_4_;
  auVar126 = insertps(ZEXT416(*(uint *)(uVar12 + lVar16)),*(undefined4 *)(uVar15 + lVar17),0x10);
  auVar153._4_4_ = auVar52._4_4_ * 3;
  auVar153._0_4_ = auVar52._0_4_ * 3;
  auVar153._8_4_ = auVar52._8_4_ * 3;
  auVar153._12_4_ = auVar52._12_4_ * 3;
  auVar153 = auVar153 & auVar41;
  lVar16 = param_1 + (longlong)auVar153._0_4_ * 4;
  lVar17 = param_1 + (longlong)auVar153._4_4_ * 4;
  auVar87 = insertps(ZEXT416(*(uint *)(uVar9 + lVar16)),*(undefined4 *)(uVar21 + lVar17),0x10);
  auVar52 = insertps(ZEXT416(*(uint *)(uVar12 + lVar16)),*(undefined4 *)(uVar15 + lVar17),0x10);
  auVar107._4_4_ = auVar88._4_4_ * 3;
  auVar107._0_4_ = auVar88._0_4_ * 3;
  auVar107._8_4_ = auVar88._8_4_ * 3;
  auVar107._12_4_ = auVar88._12_4_ * 3;
  auVar107 = auVar107 & auVar41;
  lVar16 = param_1 + (longlong)auVar107._0_4_ * 4;
  lVar17 = param_1 + (longlong)auVar107._4_4_ * 4;
  auVar69 = insertps(ZEXT416(*(uint *)(uVar9 + lVar16)),*(undefined4 *)(uVar21 + lVar17),0x10);
  auVar106 = insertps(ZEXT416(*(uint *)(uVar12 + lVar16)),*(undefined4 *)(uVar15 + lVar17),0x10);
  auVar89._4_4_ = auVar97._4_4_ * 3;
  auVar89._0_4_ = auVar97._0_4_ * 3;
  auVar89._8_4_ = auVar97._8_4_ * 3;
  auVar89._12_4_ = auVar97._12_4_ * 3;
  auVar89 = auVar89 & auVar41;
  lVar16 = param_1 + (longlong)auVar89._0_4_ * 4;
  lVar17 = param_1 + (longlong)auVar89._4_4_ * 4;
  auVar150 = insertps(ZEXT416(*(uint *)(uVar9 + lVar16)),*(undefined4 *)(uVar21 + lVar17),0x10);
  auVar68 = insertps(ZEXT416(*(uint *)(uVar12 + lVar16)),*(undefined4 *)(uVar15 + lVar17),0x10);
  lVar16 = param_1 + (longlong)auVar129._8_4_ * 4;
  uVar12 = (ulonglong)auVar125._8_4_;
  auVar42 = insertps(auVar42,*(undefined4 *)(uVar12 + lVar16),0x20);
  uVar9 = (ulonglong)auVar110._8_4_;
  auVar126 = insertps(auVar126,*(undefined4 *)(uVar9 + lVar16),0x20);
  lVar16 = param_1 + (longlong)auVar153._8_4_ * 4;
  auVar87 = insertps(auVar87,*(undefined4 *)(uVar12 + lVar16),0x20);
  auVar52 = insertps(auVar52,*(undefined4 *)(uVar9 + lVar16),0x20);
  lVar16 = param_1 + (longlong)auVar107._8_4_ * 4;
  auVar151 = insertps(auVar69,*(undefined4 *)(uVar12 + lVar16),0x20);
  auVar69 = insertps(auVar106,*(undefined4 *)(uVar9 + lVar16),0x20);
  lVar16 = param_1 + (longlong)auVar89._8_4_ * 4;
  auVar150 = insertps(auVar150,*(undefined4 *)(uVar12 + lVar16),0x20);
  auVar68 = insertps(auVar68,*(undefined4 *)(uVar9 + lVar16),0x20);
  auVar106 = insertps(ZEXT416(*(uint *)(param_1 + (longlong)auVar129._0_4_ * 4)),
                      *(undefined4 *)(param_1 + (longlong)auVar129._4_4_ * 4),0x10);
  auVar106 = insertps(auVar106,*(undefined4 *)(param_1 + (longlong)auVar129._8_4_ * 4),0x20);
  uVar12 = (ulonglong)auVar125._12_4_;
  auVar134 = insertps(auVar106,*(undefined4 *)(param_1 + (longlong)auVar129._12_4_ * 4),0x30);
  lVar16 = param_1 + (longlong)auVar129._12_4_ * 4;
  auVar125 = insertps(auVar42,*(undefined4 *)(uVar12 + lVar16),0x30);
  uVar9 = (ulonglong)auVar110._12_4_;
  auVar106 = insertps(auVar126,*(undefined4 *)(uVar9 + lVar16),0x30);
  auVar42 = insertps(ZEXT416(*(uint *)(param_1 + (longlong)auVar153._0_4_ * 4)),
                     *(undefined4 *)(param_1 + (longlong)auVar153._4_4_ * 4),0x10);
  auVar42 = insertps(auVar42,*(undefined4 *)(param_1 + (longlong)auVar153._8_4_ * 4),0x20);
  auVar110 = insertps(auVar42,*(undefined4 *)(param_1 + (longlong)auVar153._12_4_ * 4),0x30);
  lVar16 = param_1 + (longlong)auVar153._12_4_ * 4;
  auVar87 = insertps(auVar87,*(undefined4 *)(uVar12 + lVar16),0x30);
  auVar42 = insertps(auVar52,*(undefined4 *)(uVar9 + lVar16),0x30);
  auVar52 = insertps(ZEXT416(*(uint *)(param_1 + (longlong)auVar107._0_4_ * 4)),
                     *(undefined4 *)(param_1 + (longlong)auVar107._4_4_ * 4),0x10);
  auVar52 = insertps(auVar52,*(undefined4 *)(param_1 + (longlong)auVar107._8_4_ * 4),0x20);
  auVar116 = insertps(auVar52,*(undefined4 *)(param_1 + (longlong)auVar107._12_4_ * 4),0x30);
  lVar16 = param_1 + (longlong)auVar107._12_4_ * 4;
  auVar151 = insertps(auVar151,*(undefined4 *)(uVar12 + lVar16),0x30);
  auVar69 = insertps(auVar69,*(undefined4 *)(uVar9 + lVar16),0x30);
  auVar52 = insertps(ZEXT416(*(uint *)(param_1 + (longlong)auVar89._0_4_ * 4)),
                     *(undefined4 *)(param_1 + (longlong)auVar89._4_4_ * 4),0x10);
  auVar52 = insertps(auVar52,*(undefined4 *)(param_1 + (longlong)auVar89._8_4_ * 4),0x20);
  auVar126 = insertps(auVar52,*(undefined4 *)(param_1 + (longlong)auVar89._12_4_ * 4),0x30);
  param_1 = param_1 + (longlong)auVar89._12_4_ * 4;
  auVar150 = insertps(auVar150,*(undefined4 *)(uVar12 + param_1),0x30);
  auVar68 = insertps(auVar68,*(undefined4 *)(uVar9 + param_1),0x30);
  auVar52 = pmovsxbd(auVar68,local_138);
  auVar45._0_4_ = auVar52._0_4_ << 2;
  auVar45._4_4_ = auVar52._4_4_ << 2;
  auVar45._8_4_ = auVar52._8_4_ << 2;
  auVar45._12_4_ = auVar52._12_4_ << 2;
  auVar45 = auVar45 & auVar41;
  auVar52 = insertps(ZEXT416(*(uint *)(param_6 + auVar45._0_4_)),
                     *(undefined4 *)(param_6 + auVar45._4_4_),0x10);
  auVar52 = insertps(auVar52,*(undefined4 *)(param_6 + auVar45._8_4_),0x20);
  auVar52 = insertps(auVar52,*(undefined4 *)(param_6 + auVar45._12_4_),0x30);
  puVar7 = (uint *)(longlong)(int)(uVar24 << 2);
  if (bVar5) {
    auVar45 = *(undefined1 (*) [16])(param_3 + (longlong)puVar7);
  }
  else {
    puVar7 = (uint *)(param_3 + (longlong)puVar7);
    if ((uVar19 & 1) != 0) {
      auVar45 = ZEXT416(*puVar7);
    }
    if ((uVar19 & 2) != 0) {
      auVar45 = insertps(auVar45,puVar7[1],0x10);
    }
    if ((uVar19 & 4) != 0) {
      auVar45 = insertps(auVar45,puVar7[2],0x20);
    }
    if ((uVar19 & 8) != 0) {
      auVar45 = insertps(auVar45,puVar7[3],0x30);
    }
  }
  fVar120 = auVar110._0_4_;
  fVar121 = auVar110._4_4_;
  fVar124 = auVar110._12_4_;
  fVar113 = auVar134._0_4_;
  auVar70._0_4_ = fVar120 - fVar113;
  fVar114 = auVar134._4_4_;
  auVar70._4_4_ = fVar121 - fVar114;
  fVar155 = auVar110._8_4_;
  fVar115 = auVar134._8_4_;
  auVar70._8_4_ = fVar155 - fVar115;
  fVar119 = auVar134._12_4_;
  auVar70._12_4_ = fVar124 - fVar119;
  fVar77 = auVar87._0_4_;
  fVar82 = auVar87._4_4_;
  fVar143 = auVar87._12_4_;
  fVar74 = auVar125._0_4_;
  auVar53._0_4_ = fVar77 - fVar74;
  fVar138 = auVar125._4_4_;
  auVar53._4_4_ = fVar82 - fVar138;
  fVar59 = auVar87._8_4_;
  fVar75 = auVar125._8_4_;
  auVar53._8_4_ = fVar59 - fVar75;
  fVar76 = auVar125._12_4_;
  auVar53._12_4_ = fVar143 - fVar76;
  auVar90._0_4_ = auVar53._0_4_ * auVar53._0_4_ + auVar70._0_4_ * auVar70._0_4_;
  auVar90._4_4_ = auVar53._4_4_ * auVar53._4_4_ + auVar70._4_4_ * auVar70._4_4_;
  auVar90._8_4_ = auVar53._8_4_ * auVar53._8_4_ + auVar70._8_4_ * auVar70._8_4_;
  auVar90._12_4_ = auVar53._12_4_ * auVar53._12_4_ + auVar70._12_4_ * auVar70._12_4_;
  fVar105 = auVar42._0_4_;
  fVar109 = auVar42._4_4_;
  fVar112 = auVar42._12_4_;
  fVar148 = auVar106._0_4_;
  auVar99._0_4_ = fVar105 - fVar148;
  fVar149 = auVar106._4_4_;
  auVar99._4_4_ = fVar109 - fVar149;
  fVar95 = auVar42._8_4_;
  fVar154 = auVar106._8_4_;
  auVar99._8_4_ = fVar95 - fVar154;
  fVar156 = auVar106._12_4_;
  auVar99._12_4_ = fVar112 - fVar156;
  auVar46._0_4_ = auVar99._0_4_ * auVar99._0_4_ + auVar90._0_4_;
  auVar46._4_4_ = auVar99._4_4_ * auVar99._4_4_ + auVar90._4_4_;
  auVar46._8_4_ = auVar99._8_4_ * auVar99._8_4_ + auVar90._8_4_;
  auVar46._12_4_ = auVar99._12_4_ * auVar99._12_4_ + auVar90._12_4_;
  auVar87 = sqrtps(auVar90,auVar46);
  auVar125 = divps(auVar70,auVar87);
  auVar42 = divps(auVar53,auVar87);
  auVar106 = divps(auVar99,auVar87);
  uVar24 = -(uint)(auVar46._0_4_ <= ___xmm_00800000008000000080000000800000);
  uVar27 = -(uint)(auVar46._4_4_ <= _UNK_1508be494);
  uVar31 = -(uint)(auVar46._8_4_ <= _UNK_1508be498);
  uVar35 = -(uint)(auVar46._12_4_ <= _UNK_1508be49c);
  auVar47._4_4_ = uVar27;
  auVar47._0_4_ = uVar24;
  auVar47._8_4_ = uVar31;
  auVar47._12_4_ = uVar35;
  auVar87 = blendvps(auVar125,___xmm_3f8000003f8000003f8000003f800000,auVar47);
  fVar93 = fVar113 - auVar116._0_4_;
  fVar94 = fVar114 - auVar116._4_4_;
  fVar103 = fVar115 - auVar116._8_4_;
  fVar104 = fVar119 - auVar116._12_4_;
  fVar83 = fVar120 - auVar116._0_4_;
  fVar84 = fVar121 - auVar116._4_4_;
  fVar85 = fVar155 - auVar116._8_4_;
  fVar92 = fVar124 - auVar116._12_4_;
  fVar51 = fVar74 - auVar151._0_4_;
  fVar57 = fVar138 - auVar151._4_4_;
  fVar60 = fVar75 - auVar151._8_4_;
  fVar65 = fVar76 - auVar151._12_4_;
  fVar144 = fVar77 - auVar151._0_4_;
  fVar145 = fVar82 - auVar151._4_4_;
  fVar146 = fVar59 - auVar151._8_4_;
  fVar147 = fVar143 - auVar151._12_4_;
  fVar130 = fVar148 - auVar69._0_4_;
  fVar131 = fVar149 - auVar69._4_4_;
  fVar132 = fVar154 - auVar69._8_4_;
  fVar133 = fVar156 - auVar69._12_4_;
  fVar137 = fVar105 - auVar69._0_4_;
  fVar139 = fVar109 - auVar69._4_4_;
  fVar140 = fVar95 - auVar69._8_4_;
  fVar142 = fVar112 - auVar69._12_4_;
  auVar100._0_4_ = fVar93 * fVar144 - fVar83 * fVar51;
  auVar100._4_4_ = fVar94 * fVar145 - fVar84 * fVar57;
  auVar100._8_4_ = fVar103 * fVar146 - fVar85 * fVar60;
  auVar100._12_4_ = fVar104 * fVar147 - fVar92 * fVar65;
  auVar54._0_4_ = fVar51 * fVar137 - fVar144 * fVar130;
  auVar54._4_4_ = fVar57 * fVar139 - fVar145 * fVar131;
  auVar54._8_4_ = fVar60 * fVar140 - fVar146 * fVar132;
  auVar54._12_4_ = fVar65 * fVar142 - fVar147 * fVar133;
  auVar117._0_4_ = fVar83 * fVar130 - fVar137 * fVar93;
  auVar117._4_4_ = fVar84 * fVar131 - fVar139 * fVar94;
  auVar117._8_4_ = fVar85 * fVar132 - fVar140 * fVar103;
  auVar117._12_4_ = fVar92 * fVar133 - fVar142 * fVar104;
  auVar136._0_4_ = auVar117._0_4_ * auVar117._0_4_ + auVar54._0_4_ * auVar54._0_4_;
  auVar136._4_4_ = auVar117._4_4_ * auVar117._4_4_ + auVar54._4_4_ * auVar54._4_4_;
  auVar136._8_4_ = auVar117._8_4_ * auVar117._8_4_ + auVar54._8_4_ * auVar54._8_4_;
  auVar136._12_4_ = auVar117._12_4_ * auVar117._12_4_ + auVar54._12_4_ * auVar54._12_4_;
  auVar91._0_4_ = auVar100._0_4_ * auVar100._0_4_ + auVar136._0_4_;
  auVar91._4_4_ = auVar100._4_4_ * auVar100._4_4_ + auVar136._4_4_;
  auVar91._8_4_ = auVar100._8_4_ * auVar100._8_4_ + auVar136._8_4_;
  auVar91._12_4_ = auVar100._12_4_ * auVar100._12_4_ + auVar136._12_4_;
  auVar110 = sqrtps(auVar136,auVar91);
  auVar125 = divps(auVar54,auVar110);
  auVar134 = divps(auVar117,auVar110);
  auVar69 = divps(auVar100,auVar110);
  uVar19 = -(uint)(auVar110._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77);
  uVar28 = -(uint)(auVar110._4_4_ <= _UNK_1506895d4);
  uVar32 = -(uint)(auVar110._8_4_ <= _UNK_1506895d8);
  uVar36 = -(uint)(auVar110._12_4_ <= _UNK_1506895dc);
  fVar83 = (float)(~uVar19 & auVar125._0_4_);
  fVar84 = (float)(~uVar28 & auVar125._4_4_);
  fVar85 = (float)(~uVar32 & auVar125._8_4_);
  fVar92 = (float)(~uVar36 & auVar125._12_4_);
  fVar130 = (float)(~uVar19 & auVar134._0_4_);
  fVar131 = (float)(~uVar28 & auVar134._4_4_);
  fVar132 = (float)(~uVar32 & auVar134._8_4_);
  fVar133 = (float)(~uVar36 & auVar134._12_4_);
  fVar93 = (float)(~uVar19 & auVar69._0_4_);
  fVar94 = (float)(~uVar28 & auVar69._4_4_);
  fVar103 = (float)(~uVar32 & auVar69._8_4_);
  fVar104 = (float)(~uVar36 & auVar69._12_4_);
  local_108 = auVar126._0_4_;
  fStack_104 = auVar126._4_4_;
  fStack_100 = auVar126._8_4_;
  fStack_fc = auVar126._12_4_;
  local_118 = auVar150._0_4_;
  fStack_114 = auVar150._4_4_;
  fStack_110 = auVar150._8_4_;
  fStack_10c = auVar150._12_4_;
  local_128 = auVar68._0_4_;
  fStack_124 = auVar68._4_4_;
  fStack_120 = auVar68._8_4_;
  fStack_11c = auVar68._12_4_;
  auVar55._0_4_ =
       (fVar120 - local_108) * (fVar74 - local_118) - (fVar113 - local_108) * (fVar77 - local_118);
  auVar55._4_4_ =
       (fVar121 - fStack_104) * (fVar138 - fStack_114) -
       (fVar114 - fStack_104) * (fVar82 - fStack_114);
  auVar55._8_4_ =
       (fVar155 - fStack_100) * (fVar75 - fStack_110) -
       (fVar115 - fStack_100) * (fVar59 - fStack_110);
  auVar55._12_4_ =
       (fVar124 - fStack_fc) * (fVar76 - fStack_10c) -
       (fVar119 - fStack_fc) * (fVar143 - fStack_10c);
  auVar79._0_4_ =
       (fVar77 - local_118) * (fVar148 - local_128) - (fVar74 - local_118) * (fVar105 - local_128);
  auVar79._4_4_ =
       (fVar82 - fStack_114) * (fVar149 - fStack_124) -
       (fVar138 - fStack_114) * (fVar109 - fStack_124);
  auVar79._8_4_ =
       (fVar59 - fStack_110) * (fVar154 - fStack_120) -
       (fVar75 - fStack_110) * (fVar95 - fStack_120);
  auVar79._12_4_ =
       (fVar143 - fStack_10c) * (fVar156 - fStack_11c) -
       (fVar76 - fStack_10c) * (fVar112 - fStack_11c);
  auVar118._0_4_ =
       (fVar113 - local_108) * (fVar105 - local_128) - (fVar148 - local_128) * (fVar120 - local_108)
  ;
  auVar118._4_4_ =
       (fVar114 - fStack_104) * (fVar109 - fStack_124) -
       (fVar149 - fStack_124) * (fVar121 - fStack_104);
  auVar118._8_4_ =
       (fVar115 - fStack_100) * (fVar95 - fStack_120) -
       (fVar154 - fStack_120) * (fVar155 - fStack_100);
  auVar118._12_4_ =
       (fVar119 - fStack_fc) * (fVar112 - fStack_11c) -
       (fVar156 - fStack_11c) * (fVar124 - fStack_fc);
  auVar101._0_4_ = auVar118._0_4_ * auVar118._0_4_ + auVar79._0_4_ * auVar79._0_4_;
  auVar101._4_4_ = auVar118._4_4_ * auVar118._4_4_ + auVar79._4_4_ * auVar79._4_4_;
  auVar101._8_4_ = auVar118._8_4_ * auVar118._8_4_ + auVar79._8_4_ * auVar79._8_4_;
  auVar101._12_4_ = auVar118._12_4_ * auVar118._12_4_ + auVar79._12_4_ * auVar79._12_4_;
  auVar63._0_4_ = auVar55._0_4_ * auVar55._0_4_ + auVar101._0_4_;
  auVar63._4_4_ = auVar55._4_4_ * auVar55._4_4_ + auVar101._4_4_;
  auVar63._8_4_ = auVar55._8_4_ * auVar55._8_4_ + auVar101._8_4_;
  auVar63._12_4_ = auVar55._12_4_ * auVar55._12_4_ + auVar101._12_4_;
  auVar150 = sqrtps(auVar101,auVar63);
  auVar125 = divps(auVar79,auVar150);
  auVar126 = divps(auVar118,auVar150);
  auVar68 = divps(auVar55,auVar150);
  uVar19 = -(uint)(auVar150._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77);
  uVar28 = -(uint)(auVar150._4_4_ <= _UNK_1506895d4);
  uVar32 = -(uint)(auVar150._8_4_ <= _UNK_1506895d8);
  uVar36 = -(uint)(auVar150._12_4_ <= _UNK_1506895dc);
  fVar51 = (float)(~uVar19 & auVar125._0_4_);
  fVar57 = (float)(~uVar28 & auVar125._4_4_);
  fVar59 = (float)(~uVar32 & auVar125._8_4_);
  fVar60 = (float)(~uVar36 & auVar125._12_4_);
  fVar65 = (float)(~uVar19 & auVar126._0_4_);
  fVar74 = (float)(~uVar28 & auVar126._4_4_);
  fVar138 = (float)(~uVar32 & auVar126._8_4_);
  fVar75 = (float)(~uVar36 & auVar126._12_4_);
  fVar76 = (float)(~uVar19 & auVar68._0_4_);
  fVar155 = (float)(~uVar28 & auVar68._4_4_);
  fVar77 = (float)(~uVar32 & auVar68._8_4_);
  fVar82 = (float)(~uVar36 & auVar68._12_4_);
  auVar56._0_4_ =
       (fVar83 * fVar76 - fVar93 * fVar51) * (float)(~uVar24 & auVar42._0_4_) +
       (fVar93 * fVar65 - fVar130 * fVar76) * auVar87._0_4_ +
       (fVar130 * fVar51 - fVar83 * fVar65) * (float)(~uVar24 & auVar106._0_4_);
  auVar56._4_4_ =
       (fVar84 * fVar155 - fVar94 * fVar57) * (float)(~uVar27 & auVar42._4_4_) +
       (fVar94 * fVar74 - fVar131 * fVar155) * auVar87._4_4_ +
       (fVar131 * fVar57 - fVar84 * fVar74) * (float)(~uVar27 & auVar106._4_4_);
  auVar56._8_4_ =
       (fVar85 * fVar77 - fVar103 * fVar59) * (float)(~uVar31 & auVar42._8_4_) +
       (fVar103 * fVar138 - fVar132 * fVar77) * auVar87._8_4_ +
       (fVar132 * fVar59 - fVar85 * fVar138) * (float)(~uVar31 & auVar106._8_4_);
  auVar56._12_4_ =
       (fVar92 * fVar82 - fVar104 * fVar60) * (float)(~uVar35 & auVar42._12_4_) +
       (fVar104 * fVar75 - fVar133 * fVar82) * auVar87._12_4_ +
       (fVar133 * fVar60 - fVar92 * fVar75) * (float)(~uVar35 & auVar106._12_4_);
  auVar102._0_4_ = fVar76 * fVar93 + fVar65 * fVar130 + fVar51 * fVar83;
  auVar102._4_4_ = fVar155 * fVar94 + fVar74 * fVar131 + fVar57 * fVar84;
  auVar102._8_4_ = fVar77 * fVar103 + fVar138 * fVar132 + fVar59 * fVar85;
  auVar102._12_4_ = fVar82 * fVar104 + fVar75 * fVar133 + fVar60 * fVar92;
  auVar68 = maxps(auVar102,___xmm_bf800000bf800000bf800000bf800000);
  auVar87 = minps(auVar68,___xmm_3f8000003f8000003f8000003f800000);
  auVar68 = maxps(auVar56,___xmm_bf800000bf800000bf800000bf800000);
  auVar68 = minps(auVar68,___xmm_3f8000003f8000003f8000003f800000);
  auVar42 = divps(auVar68,auVar87);
  auVar71._0_4_ = __xmm_80000000800000008000000080000000 ^ (uint)auVar42._0_4_;
  auVar71._4_4_ = _UNK_150651574 ^ (uint)auVar42._4_4_;
  auVar71._8_4_ = _UNK_150651578 ^ (uint)auVar42._8_4_;
  auVar71._12_4_ = _UNK_15065157c ^ (uint)auVar42._12_4_;
  auVar125 = maxps(auVar71,auVar42);
  uVar24 = -(uint)((float)__xmm_3f8000003f8000003f8000003f800000 < auVar125._0_4_);
  uVar19 = -(uint)(__xmm_3f8000003f8000003f8000003f800000._4_4_ < auVar125._4_4_);
  uVar27 = -(uint)(__xmm_3f8000003f8000003f8000003f800000._8_4_ < auVar125._8_4_);
  uVar28 = -(uint)(__xmm_3f8000003f8000003f8000003f800000._12_4_ < auVar125._12_4_);
  auVar48._4_4_ = uVar19;
  auVar48._0_4_ = uVar24;
  auVar48._8_4_ = uVar27;
  auVar48._12_4_ = uVar28;
  auVar80._0_4_ = auVar41._0_4_ & uVar24;
  auVar80._4_4_ = auVar41._4_4_ & uVar19;
  auVar80._8_4_ = auVar41._8_4_ & uVar27;
  auVar80._12_4_ = auVar41._12_4_ & uVar28;
  iVar11 = movmskps((int)puVar7,auVar80);
  auVar41 = ___xmm_3f8000003f8000003f8000003f800000;
  if (iVar11 != 0) {
    auVar41 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar125);
  }
  auVar41 = blendvps(auVar125,auVar41,auVar48);
  fVar51 = auVar41._0_4_;
  fVar57 = auVar41._4_4_;
  fVar59 = auVar41._8_4_;
  fVar60 = auVar41._12_4_;
  fVar65 = fVar51 * fVar51;
  fVar74 = fVar57 * fVar57;
  fVar138 = fVar59 * fVar59;
  fVar75 = fVar60 * fVar60;
  auVar81._0_4_ =
       (((((((___xmm_bb9918b7bb9918b7bb9918b7bb9918b7 * fVar65 +
             ___xmm_3cc6061b3cc6061b3cc6061b3cc6061b) * fVar65 +
            ___xmm_bd732a49bd732a49bd732a49bd732a49) * fVar65 +
           ___xmm_3dcadb2a3dcadb2a3dcadb2a3dcadb2a) * fVar65 +
          ___xmm_be0f8549be0f8549be0f8549be0f8549) * fVar65 +
         ___xmm_3e4c7b543e4c7b543e4c7b543e4c7b54) * fVar65 + ___xmm_beaaa8cfbeaaa8cfbeaaa8cfbeaaa8cf
        ) * fVar65 + ___xmm_3f7ffffe3f7ffffe3f7ffffe3f7ffffe) * fVar51;
  auVar81._4_4_ =
       (((((((_UNK_150b51114 * fVar74 + _UNK_150b51124) * fVar74 + _UNK_150b51134) * fVar74 +
           _UNK_150b51144) * fVar74 + _UNK_150b51154) * fVar74 + _UNK_150b51164) * fVar74 +
        _UNK_150b51174) * fVar74 + _UNK_150b51184) * fVar57;
  auVar81._8_4_ =
       (((((((_UNK_150b51118 * fVar138 + _UNK_150b51128) * fVar138 + _UNK_150b51138) * fVar138 +
           _UNK_150b51148) * fVar138 + _UNK_150b51158) * fVar138 + _UNK_150b51168) * fVar138 +
        _UNK_150b51178) * fVar138 + _UNK_150b51188) * fVar59;
  auVar81._12_4_ =
       (((((((_UNK_150b5111c * fVar75 + _UNK_150b5112c) * fVar75 + _UNK_150b5113c) * fVar75 +
           _UNK_150b5114c) * fVar75 + _UNK_150b5115c) * fVar75 + _UNK_150b5116c) * fVar75 +
        _UNK_150b5117c) * fVar75 + _UNK_150b5118c) * fVar60;
  auVar72._0_4_ = ___xmm_3fc90fdb3fc90fdb3fc90fdb3fc90fdb - auVar81._0_4_;
  auVar72._4_4_ = _UNK_150b51194 - auVar81._4_4_;
  auVar72._8_4_ = _UNK_150b51198 - auVar81._8_4_;
  auVar72._12_4_ = _UNK_150b5119c - auVar81._12_4_;
  auVar41 = blendvps(auVar81,auVar72,auVar48);
  auVar49._4_4_ = -(uint)(auVar42._4_4_ < 0.0);
  auVar49._0_4_ = -(uint)(auVar42._0_4_ < 0.0);
  auVar73._0_4_ = __xmm_80000000800000008000000080000000 ^ auVar41._0_4_;
  auVar73._4_4_ = _UNK_150651574 ^ auVar41._4_4_;
  auVar73._8_4_ = _UNK_150651578 ^ auVar41._8_4_;
  auVar73._12_4_ = _UNK_15065157c ^ auVar41._12_4_;
  auVar49._8_4_ = -(uint)(auVar42._8_4_ < 0.0);
  auVar49._12_4_ = -(uint)(auVar42._12_4_ < 0.0);
  auVar42 = blendvps(auVar41,auVar73,auVar49);
  auVar50._4_4_ = -(uint)(auVar68._4_4_ < 0.0);
  auVar50._0_4_ = -(uint)(auVar68._0_4_ < 0.0);
  auVar50._8_4_ = -(uint)(auVar68._8_4_ < 0.0);
  auVar50._12_4_ = -(uint)(auVar68._12_4_ < 0.0);
  auVar41 = blendvps(___xmm_40490fdb40490fdb40490fdb40490fdb,___xmm_c0490fdbc0490fdbc0490fdbc0490fdb
                     ,auVar50);
  auVar108._4_4_ =
       -(uint)(__xmm_40490fdb40490fdb40490fdb40490fdb._4_4_ -
               (float)((uint)((float)(auVar41._4_4_ & -(uint)(auVar87._4_4_ < 0.0)) + auVar42._4_4_)
                      & _UNK_15061cc74) <
              auVar52._4_4_ *
              (__xmm_40490fdb40490fdb40490fdb40490fdb._4_4_ -
              (float)(auVar45._4_4_ & _UNK_15061cc74)));
  auVar108._0_4_ =
       -(uint)((float)__xmm_40490fdb40490fdb40490fdb40490fdb -
               (float)((uint)((float)(auVar41._0_4_ & -(uint)(auVar87._0_4_ < 0.0)) + auVar42._0_4_)
                      & __xmm_7fffffff7fffffff7fffffff7fffffff) <
              auVar52._0_4_ *
              ((float)__xmm_40490fdb40490fdb40490fdb40490fdb -
              (float)(auVar45._0_4_ & __xmm_7fffffff7fffffff7fffffff7fffffff)));
  auVar108._8_4_ =
       -(uint)(__xmm_40490fdb40490fdb40490fdb40490fdb._8_4_ -
               (float)((uint)((float)(auVar41._8_4_ & -(uint)(auVar87._8_4_ < 0.0)) + auVar42._8_4_)
                      & _UNK_15061cc78) <
              auVar52._8_4_ *
              (__xmm_40490fdb40490fdb40490fdb40490fdb._8_4_ -
              (float)(auVar45._8_4_ & _UNK_15061cc78)));
  auVar108._12_4_ =
       -(uint)(__xmm_40490fdb40490fdb40490fdb40490fdb._12_4_ -
               (float)((uint)((float)(auVar41._12_4_ & -(uint)(auVar87._12_4_ < 0.0)) +
                             auVar42._12_4_) & _UNK_15061cc7c) <
              auVar52._12_4_ *
              (__xmm_40490fdb40490fdb40490fdb40490fdb._12_4_ -
              (float)(auVar45._12_4_ & _UNK_15061cc7c)));
  auVar41 = packssdw(auVar108,auVar108);
  auVar41 = packsswb(auVar41,auVar41);
  auVar41 = auVar41 & ___xmm_00000000000000000000000001010101;
  if ((bVar10 & 1) != 0) {
    *(char *)(param_4 + uVar14) = auVar41[0];
  }
  if ((bVar10 & 2) != 0) {
    *(char *)(param_4 + 1 + uVar14) = auVar41[1];
  }
  if ((bVar10 & 4) != 0) {
    *(char *)(param_4 + 2 + uVar14) = auVar41[2];
  }
  if ((char)bVar10 < '\0') {
    *(char *)(param_4 + 3 + uVar14) = auVar41[3];
  }
  return;
}

// ApplyBendingConstraints_sse4 @ 14006da00

/* WARNING: Removing unreachable block (ram,0x00014006fe38) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyBendingConstraints_sse4
               (longlong param_1,longlong param_2,longlong param_3,byte *param_4,undefined4 param_5,
               undefined4 param_6,uint param_7)

{
  int *piVar1;
  float *pfVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  undefined8 uVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  uint uVar21;
  int iVar22;
  longlong lVar23;
  byte *pbVar24;
  int iVar25;
  longlong lVar26;
  undefined1 (*pauVar27) [16];
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  ulonglong uVar35;
  longlong lVar36;
  longlong lVar37;
  ulonglong uVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  ulonglong uVar42;
  longlong lVar43;
  longlong lVar44;
  byte bVar45;
  int iVar46;
  longlong lVar47;
  longlong lVar48;
  bool bVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar89;
  float fVar90;
  float fVar91;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  float fVar99;
  float fVar100;
  float fVar101;
  float fVar102;
  float fVar103;
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
  float fVar92;
  float fVar93;
  float fVar98;
  float fVar104;
  float fVar105;
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
  float fVar106;
  float fVar113;
  float fVar114;
  undefined1 auVar107 [16];
  float fVar115;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  float fVar116;
  float fVar117;
  int iVar134;
  float fVar135;
  float fVar137;
  float fVar139;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  float fVar140;
  undefined1 auVar127 [16];
  float fVar136;
  float fVar141;
  undefined1 auVar128 [16];
  float fVar138;
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  float fVar142;
  float fVar143;
  float fVar155;
  float fVar156;
  float fVar157;
  float fVar158;
  float fVar159;
  float fVar160;
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
  float fVar161;
  float fVar162;
  float fVar163;
  float fVar172;
  float fVar175;
  undefined1 auVar164 [16];
  float fVar177;
  undefined1 auVar165 [16];
  float fVar173;
  undefined1 auVar166 [16];
  float fVar176;
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  float fVar178;
  float fVar185;
  float fVar186;
  int iVar187;
  float fVar188;
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  float fVar189;
  float fVar190;
  float fVar200;
  float fVar202;
  float fVar203;
  undefined1 auVar191 [16];
  float fVar201;
  float fVar204;
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  float fVar205;
  float fVar206;
  float fVar212;
  float fVar214;
  undefined1 auVar207 [16];
  float fVar213;
  float fVar215;
  float fVar216;
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  float fVar221;
  float fVar222;
  float fVar223;
  float fVar224;
  float fVar228;
  float fVar229;
  float fVar231;
  float fVar232;
  float fVar233;
  float fVar235;
  float fVar236;
  float fVar237;
  undefined1 auVar225 [16];
  float fVar230;
  float fVar234;
  float fVar238;
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  float fVar239;
  float fVar240;
  float fVar245;
  float fVar247;
  undefined1 auVar242 [16];
  float fVar241;
  float fVar246;
  float fVar248;
  undefined1 auVar243 [16];
  undefined1 auVar244 [16];
  float fVar249;
  float fVar252;
  float fVar253;
  undefined1 auVar250 [16];
  float fVar254;
  float fVar255;
  undefined1 auVar251 [16];
  undefined1 auVar256 [16];
  undefined1 auVar257 [16];
  undefined1 auVar258 [16];
  undefined1 auVar259 [16];
  undefined1 auVar260 [16];
  float fVar261;
  float fVar262;
  float fVar263;
  float fVar269;
  float fVar273;
  undefined1 auVar264 [16];
  undefined1 auVar265 [16];
  float fVar270;
  float fVar271;
  float fVar272;
  float fVar274;
  float fVar275;
  float fVar276;
  float fVar277;
  float fVar278;
  float fVar279;
  undefined1 auVar266 [16];
  undefined1 auVar267 [16];
  undefined1 auVar268 [16];
  float fVar280;
  float fVar281;
  float fVar282;
  float fVar287;
  float fVar288;
  float fVar289;
  float fVar290;
  float fVar291;
  float fVar292;
  float fVar293;
  float fVar294;
  float fVar295;
  float fVar296;
  float fVar297;
  undefined1 auVar283 [16];
  undefined1 auVar284 [16];
  undefined1 auVar285 [16];
  undefined1 auVar286 [16];
  float fVar298;
  float fVar307;
  float fVar310;
  float fVar313;
  undefined1 auVar301 [16];
  undefined1 auVar302 [16];
  float fVar299;
  float fVar300;
  float fVar308;
  float fVar309;
  float fVar311;
  float fVar312;
  float fVar314;
  float fVar315;
  float fVar316;
  undefined1 auVar303 [16];
  undefined1 auVar304 [16];
  undefined1 auVar305 [16];
  undefined1 auVar306 [16];
  float local_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  float local_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float local_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float local_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float local_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  undefined1 local_3b8 [8];
  float fStack_3b0;
  float fStack_3ac;
  undefined1 local_3a8 [8];
  float fStack_3a0;
  float fStack_39c;
  float local_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  float local_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  undefined1 local_2c8 [8];
  float fStack_2c0;
  float fStack_2bc;
  float fVar174;
  
  uVar21 = param_7 + 3;
  if (-1 < (int)param_7) {
    uVar21 = param_7;
  }
  if ((int)(uVar21 & 0xfffffffc) < 1) {
    uVar38 = 0;
    if ((int)param_7 < 1) {
      return;
    }
  }
  else {
    uVar42 = 0;
    uVar38 = 0;
    do {
      piVar1 = (int *)(param_2 + uVar42 * 4);
      piVar3 = (int *)(param_2 + 0x10 + uVar42 * 4);
      piVar4 = (int *)(param_2 + 0x20 + uVar42 * 4);
      piVar5 = (int *)(param_2 + 0x30 + uVar42 * 4);
      iVar25 = *piVar5;
      iVar22 = piVar5[2];
      iVar187 = piVar5[1] << 4;
      lVar43 = (longlong)(piVar1[1] << 4);
      lVar28 = (longlong)(piVar3[1] * 0x10);
      lVar32 = (longlong)(piVar4[1] << 4);
      lVar23 = (longlong)iVar187;
      auVar264 = insertps(ZEXT416(*(uint *)(param_1 + lVar43)),*(undefined4 *)(param_1 + lVar28),
                          0x10);
      auVar264 = insertps(auVar264,*(undefined4 *)(param_1 + lVar32),0x20);
      auVar265 = insertps(auVar264,*(undefined4 *)(param_1 + lVar23),0x30);
      auVar264 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar43)),
                          *(undefined4 *)(param_1 + 4 + lVar28),0x10);
      auVar264 = insertps(auVar264,*(undefined4 *)(param_1 + 4 + lVar32),0x20);
      auVar256 = insertps(auVar264,*(undefined4 *)(param_1 + 4 + lVar23),0x30);
      auVar264 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar43)),
                          *(undefined4 *)(param_1 + 8 + lVar28),0x10);
      auVar264 = insertps(auVar264,*(undefined4 *)(param_1 + 8 + lVar32),0x20);
      auVar242 = insertps(auVar264,*(undefined4 *)(param_1 + 8 + lVar23),0x30);
      lVar37 = (longlong)(piVar1[2] << 4);
      lVar34 = (longlong)(piVar3[2] * 0x10);
      lVar41 = (longlong)(piVar4[2] << 4);
      lVar33 = (longlong)(iVar22 << 4);
      auVar264 = insertps(ZEXT416(*(uint *)(param_1 + lVar37)),*(undefined4 *)(param_1 + lVar34),
                          0x10);
      auVar264 = insertps(auVar264,*(undefined4 *)(param_1 + lVar41),0x20);
      auVar217 = insertps(auVar264,*(undefined4 *)(param_1 + lVar33),0x30);
      auVar264 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar37)),
                          *(undefined4 *)(param_1 + 4 + lVar34),0x10);
      auVar264 = insertps(auVar264,*(undefined4 *)(param_1 + 4 + lVar41),0x20);
      auVar207 = insertps(auVar264,*(undefined4 *)(param_1 + 4 + lVar33),0x30);
      iVar134 = *piVar3 * 0x10;
      lVar47 = (longlong)(*piVar1 << 4);
      lVar39 = (longlong)iVar134;
      lVar30 = (longlong)(*piVar4 << 4);
      lVar26 = (longlong)(iVar25 << 4);
      auVar264 = insertps(ZEXT416(*(uint *)(param_1 + lVar47)),*(undefined4 *)(param_1 + lVar39),
                          0x10);
      auVar264 = insertps(auVar264,*(undefined4 *)(param_1 + lVar30),0x20);
      auVar264 = insertps(auVar264,*(undefined4 *)(param_1 + lVar26),0x30);
      auVar301 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar47)),
                          *(undefined4 *)(param_1 + 4 + lVar39),0x10);
      auVar301 = insertps(auVar301,*(undefined4 *)(param_1 + 4 + lVar30),0x20);
      auVar302 = insertps(auVar301,*(undefined4 *)(param_1 + 4 + lVar26),0x30);
      auVar301 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar47)),
                          *(undefined4 *)(param_1 + 8 + lVar39),0x10);
      auVar301 = insertps(auVar301,*(undefined4 *)(param_1 + 8 + lVar30),0x20);
      auVar301 = insertps(auVar301,*(undefined4 *)(param_1 + 8 + lVar26),0x30);
      fVar295 = auVar265._0_4_;
      fVar269 = auVar265._4_4_;
      fVar276 = auVar265._12_4_;
      fVar221 = auVar264._0_4_;
      auVar125._0_4_ = fVar295 - fVar221;
      fVar228 = auVar264._4_4_;
      auVar125._4_4_ = fVar269 - fVar228;
      fVar136 = auVar265._8_4_;
      fVar232 = auVar264._8_4_;
      auVar125._8_4_ = fVar136 - fVar232;
      fVar236 = auVar264._12_4_;
      auVar125._12_4_ = fVar276 - fVar236;
      fVar289 = auVar256._0_4_;
      fVar290 = auVar256._4_4_;
      fVar293 = auVar256._12_4_;
      fVar298 = auVar302._0_4_;
      auVar243._0_4_ = fVar289 - fVar298;
      fVar307 = auVar302._4_4_;
      auVar243._4_4_ = fVar290 - fVar307;
      fVar141 = auVar256._8_4_;
      fVar310 = auVar302._8_4_;
      auVar243._8_4_ = fVar141 - fVar310;
      fVar314 = auVar302._12_4_;
      auVar243._12_4_ = fVar293 - fVar314;
      fVar240 = auVar242._0_4_;
      fVar245 = auVar242._4_4_;
      fVar313 = auVar242._12_4_;
      fVar280 = auVar301._0_4_;
      auVar164._0_4_ = fVar240 - fVar280;
      fVar287 = auVar301._4_4_;
      auVar164._4_4_ = fVar245 - fVar287;
      fVar174 = auVar242._8_4_;
      fVar291 = auVar301._8_4_;
      auVar164._8_4_ = fVar174 - fVar291;
      fVar296 = auVar301._12_4_;
      auVar164._12_4_ = fVar313 - fVar296;
      auVar242._0_4_ = auVar125._0_4_ * auVar125._0_4_;
      auVar242._4_4_ = auVar125._4_4_ * auVar125._4_4_;
      auVar242._8_4_ = auVar125._8_4_ * auVar125._8_4_;
      auVar242._12_4_ = auVar125._12_4_ * auVar125._12_4_;
      auVar250._0_4_ =
           auVar164._0_4_ * auVar164._0_4_ + auVar243._0_4_ * auVar243._0_4_ + auVar242._0_4_;
      auVar250._4_4_ =
           auVar164._4_4_ * auVar164._4_4_ + auVar243._4_4_ * auVar243._4_4_ + auVar242._4_4_;
      auVar250._8_4_ =
           auVar164._8_4_ * auVar164._8_4_ + auVar243._8_4_ * auVar243._8_4_ + auVar242._8_4_;
      auVar250._12_4_ =
           auVar164._12_4_ * auVar164._12_4_ + auVar243._12_4_ * auVar243._12_4_ + auVar242._12_4_;
      auVar264 = sqrtps(auVar242,auVar250);
      uVar50 = -(uint)(auVar250._0_4_ <= ___xmm_00800000008000000080000000800000);
      uVar51 = -(uint)(auVar250._4_4_ <= _UNK_1508be494);
      uVar52 = -(uint)(auVar250._8_4_ <= _UNK_1508be498);
      uVar55 = -(uint)(auVar250._12_4_ <= _UNK_1508be49c);
      auVar256._4_4_ = uVar51;
      auVar256._0_4_ = uVar50;
      auVar242 = divps(auVar125,auVar264);
      auVar265 = divps(auVar243,auVar264);
      auVar264 = divps(auVar164,auVar264);
      auVar256._8_4_ = uVar52;
      auVar256._12_4_ = uVar55;
      auVar242 = blendvps(auVar242,___xmm_3f8000003f8000003f8000003f800000,auVar256);
      fVar59 = (float)(~uVar50 & auVar265._0_4_);
      fVar89 = (float)(~uVar51 & auVar265._4_4_);
      fVar94 = (float)(~uVar52 & auVar265._8_4_);
      fVar99 = (float)(~uVar55 & auVar265._12_4_);
      fVar249 = (float)(~uVar50 & auVar264._0_4_);
      fVar252 = (float)(~uVar51 & auVar264._4_4_);
      fVar253 = (float)(~uVar52 & auVar264._8_4_);
      fVar254 = (float)(~uVar55 & auVar264._12_4_);
      fVar224 = auVar217._0_4_;
      fVar60 = fVar221 - fVar224;
      fVar231 = auVar217._4_4_;
      fVar90 = fVar228 - fVar231;
      fVar235 = auVar217._8_4_;
      fVar95 = fVar232 - fVar235;
      fVar239 = auVar217._12_4_;
      fVar100 = fVar236 - fVar239;
      fVar205 = auVar207._0_4_;
      fVar178 = fVar298 - fVar205;
      fVar212 = auVar207._4_4_;
      fVar185 = fVar307 - fVar212;
      fVar294 = auVar207._8_4_;
      fVar186 = fVar310 - fVar294;
      fVar215 = auVar207._12_4_;
      fVar188 = fVar314 - fVar215;
      fVar142 = fVar295 - fVar224;
      fVar155 = fVar269 - fVar231;
      auVar218._4_4_ = fVar155;
      auVar218._0_4_ = fVar142;
      fVar157 = fVar136 - fVar235;
      fVar159 = fVar276 - fVar239;
      fVar143 = fVar289 - fVar205;
      fVar156 = fVar290 - fVar212;
      fVar158 = fVar141 - fVar294;
      fVar160 = fVar293 - fVar215;
      auVar218._8_4_ = fVar157;
      auVar218._12_4_ = fVar159;
      auVar304._0_4_ = fVar143 * fVar60 - fVar142 * fVar178;
      auVar304._4_4_ = fVar156 * fVar90 - fVar155 * fVar185;
      auVar304._8_4_ = fVar158 * fVar95 - fVar157 * fVar186;
      auVar304._12_4_ = fVar160 * fVar100 - fVar159 * fVar188;
      auVar264 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar37)),
                          *(undefined4 *)(param_1 + 8 + lVar34),0x10);
      auVar264 = insertps(auVar264,*(undefined4 *)(param_1 + 8 + lVar41),0x20);
      auVar264 = insertps(auVar264,*(undefined4 *)(param_1 + 8 + lVar33),0x30);
      fVar62 = auVar264._0_4_;
      fVar161 = fVar280 - fVar62;
      fVar98 = auVar264._4_4_;
      fVar172 = fVar287 - fVar98;
      fVar106 = auVar264._8_4_;
      fVar175 = fVar291 - fVar106;
      fVar101 = auVar264._12_4_;
      fVar177 = fVar296 - fVar101;
      fVar116 = fVar240 - fVar62;
      fVar135 = fVar245 - fVar98;
      fVar137 = fVar174 - fVar106;
      fVar139 = fVar313 - fVar101;
      auVar265._0_4_ = fVar116 * fVar178 - fVar143 * fVar161;
      auVar265._4_4_ = fVar135 * fVar185 - fVar156 * fVar172;
      auVar265._8_4_ = fVar137 * fVar186 - fVar158 * fVar175;
      auVar265._12_4_ = fVar139 * fVar188 - fVar160 * fVar177;
      auVar305._0_4_ = fVar142 * fVar161 - fVar116 * fVar60;
      auVar305._4_4_ = fVar155 * fVar172 - fVar135 * fVar90;
      auVar305._8_4_ = fVar157 * fVar175 - fVar137 * fVar95;
      auVar305._12_4_ = fVar159 * fVar177 - fVar139 * fVar100;
      auVar165._0_4_ =
           auVar304._0_4_ * auVar304._0_4_ +
           auVar305._0_4_ * auVar305._0_4_ + auVar265._0_4_ * auVar265._0_4_;
      auVar165._4_4_ =
           auVar304._4_4_ * auVar304._4_4_ +
           auVar305._4_4_ * auVar305._4_4_ + auVar265._4_4_ * auVar265._4_4_;
      auVar165._8_4_ =
           auVar304._8_4_ * auVar304._8_4_ +
           auVar305._8_4_ * auVar305._8_4_ + auVar265._8_4_ * auVar265._8_4_;
      auVar165._12_4_ =
           auVar304._12_4_ * auVar304._12_4_ +
           auVar305._12_4_ * auVar305._12_4_ + auVar265._12_4_ * auVar265._12_4_;
      auVar301 = sqrtps(auVar218,auVar165);
      uVar50 = -(uint)(auVar301._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77);
      uVar52 = -(uint)(auVar301._4_4_ <= _UNK_1506895d4);
      uVar53 = -(uint)(auVar301._8_4_ <= _UNK_1506895d8);
      uVar56 = -(uint)(auVar301._12_4_ <= _UNK_1506895dc);
      auVar264 = divps(auVar265,auVar301);
      fVar189 = (float)(~uVar50 & auVar264._0_4_);
      fVar200 = (float)(~uVar52 & auVar264._4_4_);
      fVar202 = (float)(~uVar53 & auVar264._8_4_);
      fVar203 = (float)(~uVar56 & auVar264._12_4_);
      auVar264 = divps(auVar305,auVar301);
      fVar61 = (float)(~uVar50 & auVar264._0_4_);
      fVar91 = (float)(~uVar52 & auVar264._4_4_);
      fVar96 = (float)(~uVar53 & auVar264._8_4_);
      fVar102 = (float)(~uVar56 & auVar264._12_4_);
      lVar36 = (longlong)(piVar1[3] << 4);
      lVar29 = (longlong)(piVar3[3] * 0x10);
      lVar40 = (longlong)(piVar4[3] << 4);
      lVar48 = (longlong)(piVar5[3] << 4);
      auVar264 = insertps(ZEXT416(*(uint *)(param_1 + lVar36)),*(undefined4 *)(param_1 + lVar29),
                          0x10);
      auVar264 = insertps(auVar264,*(undefined4 *)(param_1 + lVar40),0x20);
      auVar256 = insertps(auVar264,*(undefined4 *)(param_1 + lVar48),0x30);
      auVar264 = divps(auVar304,auVar301);
      fVar206 = (float)(~uVar50 & auVar264._0_4_);
      fVar213 = (float)(~uVar52 & auVar264._4_4_);
      fVar214 = (float)(~uVar53 & auVar264._8_4_);
      fVar216 = (float)(~uVar56 & auVar264._12_4_);
      auVar264 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar36)),
                          *(undefined4 *)(param_1 + 4 + lVar29),0x10);
      auVar264 = insertps(auVar264,*(undefined4 *)(param_1 + 4 + lVar40),0x20);
      auVar264 = insertps(auVar264,*(undefined4 *)(param_1 + 4 + lVar48),0x30);
      fVar138 = auVar256._0_4_;
      fVar261 = fVar295 - fVar138;
      fVar140 = auVar256._4_4_;
      fVar270 = fVar269 - fVar140;
      fVar163 = auVar256._8_4_;
      fVar273 = fVar136 - fVar163;
      fVar176 = auVar256._12_4_;
      fVar277 = fVar276 - fVar176;
      fVar92 = auVar264._0_4_;
      auVar257._0_4_ = fVar289 - fVar92;
      fVar104 = auVar264._4_4_;
      auVar257._4_4_ = fVar290 - fVar104;
      fVar113 = auVar264._8_4_;
      auVar257._8_4_ = fVar141 - fVar113;
      fVar103 = auVar264._12_4_;
      auVar257._12_4_ = fVar293 - fVar103;
      fVar222 = fVar221 - fVar138;
      fVar229 = fVar228 - fVar140;
      fVar233 = fVar232 - fVar163;
      fVar237 = fVar236 - fVar176;
      fVar299 = fVar298 - fVar92;
      fVar308 = fVar307 - fVar104;
      fVar311 = fVar310 - fVar113;
      fVar315 = fVar314 - fVar103;
      auVar124._0_4_ = fVar261 * fVar299 - fVar222 * auVar257._0_4_;
      auVar124._4_4_ = fVar270 * fVar308 - fVar229 * auVar257._4_4_;
      auVar124._8_4_ = fVar273 * fVar311 - fVar233 * auVar257._8_4_;
      auVar124._12_4_ = fVar277 * fVar315 - fVar237 * auVar257._12_4_;
      auVar264 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar36)),
                          *(undefined4 *)(param_1 + 8 + lVar29),0x10);
      auVar264 = insertps(auVar264,*(undefined4 *)(param_1 + 8 + lVar40),0x20);
      auVar264 = insertps(auVar264,*(undefined4 *)(param_1 + 8 + lVar48),0x30);
      fVar93 = auVar264._0_4_;
      fVar241 = fVar240 - fVar93;
      fVar105 = auVar264._4_4_;
      fVar246 = fVar245 - fVar105;
      fVar97 = auVar264._8_4_;
      fVar247 = fVar174 - fVar97;
      fVar117 = auVar264._12_4_;
      fVar248 = fVar313 - fVar117;
      fVar281 = fVar280 - fVar93;
      fVar288 = fVar287 - fVar105;
      fVar292 = fVar291 - fVar97;
      fVar297 = fVar296 - fVar117;
      auVar207._0_4_ = auVar257._0_4_ * fVar281 - fVar299 * fVar241;
      auVar207._4_4_ = auVar257._4_4_ * fVar288 - fVar308 * fVar246;
      auVar207._8_4_ = auVar257._8_4_ * fVar292 - fVar311 * fVar247;
      auVar207._12_4_ = auVar257._12_4_ * fVar297 - fVar315 * fVar248;
      auVar144._0_4_ = fVar222 * fVar241 - fVar261 * fVar281;
      auVar144._4_4_ = fVar229 * fVar246 - fVar270 * fVar288;
      auVar144._8_4_ = fVar233 * fVar247 - fVar273 * fVar292;
      auVar144._12_4_ = fVar237 * fVar248 - fVar277 * fVar297;
      auVar225._0_4_ =
           auVar124._0_4_ * auVar124._0_4_ +
           auVar144._0_4_ * auVar144._0_4_ + auVar207._0_4_ * auVar207._0_4_;
      auVar225._4_4_ =
           auVar124._4_4_ * auVar124._4_4_ +
           auVar144._4_4_ * auVar144._4_4_ + auVar207._4_4_ * auVar207._4_4_;
      auVar225._8_4_ =
           auVar124._8_4_ * auVar124._8_4_ +
           auVar144._8_4_ * auVar144._8_4_ + auVar207._8_4_ * auVar207._8_4_;
      auVar225._12_4_ =
           auVar124._12_4_ * auVar124._12_4_ +
           auVar144._12_4_ * auVar144._12_4_ + auVar207._12_4_ * auVar207._12_4_;
      auVar256 = sqrtps(auVar257,auVar225);
      uVar51 = -(uint)(auVar256._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77);
      uVar55 = -(uint)(auVar256._4_4_ <= _UNK_1506895d4);
      uVar54 = -(uint)(auVar256._8_4_ <= _UNK_1506895d8);
      uVar57 = -(uint)(auVar256._12_4_ <= _UNK_1506895dc);
      auVar264 = divps(auVar207,auVar256);
      fVar223 = (float)(~uVar51 & auVar264._0_4_);
      fVar230 = (float)(~uVar55 & auVar264._4_4_);
      fVar234 = (float)(~uVar54 & auVar264._8_4_);
      fVar238 = (float)(~uVar57 & auVar264._12_4_);
      auVar264 = divps(auVar144,auVar256);
      fVar300 = (float)(~uVar51 & auVar264._0_4_);
      fVar309 = (float)(~uVar55 & auVar264._4_4_);
      fVar312 = (float)(~uVar54 & auVar264._8_4_);
      fVar316 = (float)(~uVar57 & auVar264._12_4_);
      auVar264 = divps(auVar124,auVar256);
      fVar262 = (float)(~uVar51 & auVar264._0_4_);
      fVar271 = (float)(~uVar55 & auVar264._4_4_);
      fVar274 = (float)(~uVar54 & auVar264._8_4_);
      fVar278 = (float)(~uVar57 & auVar264._12_4_);
      auVar191._0_4_ = fVar206 * fVar262 + fVar61 * fVar300 + fVar189 * fVar223;
      auVar191._4_4_ = fVar213 * fVar271 + fVar91 * fVar309 + fVar200 * fVar230;
      auVar191._8_4_ = fVar214 * fVar274 + fVar96 * fVar312 + fVar202 * fVar234;
      auVar191._12_4_ = fVar216 * fVar278 + fVar102 * fVar316 + fVar203 * fVar238;
      local_2d8 = auVar242._0_4_;
      fStack_2d4 = auVar242._4_4_;
      fStack_2d0 = auVar242._8_4_;
      fStack_2cc = auVar242._12_4_;
      auVar179._0_4_ =
           (fVar61 * fVar223 - fVar189 * fVar300) * fVar249 +
           (fVar189 * fVar262 - fVar206 * fVar223) * fVar59 +
           (fVar206 * fVar300 - fVar61 * fVar262) * local_2d8;
      auVar179._4_4_ =
           (fVar91 * fVar230 - fVar200 * fVar309) * fVar252 +
           (fVar200 * fVar271 - fVar213 * fVar230) * fVar89 +
           (fVar213 * fVar309 - fVar91 * fVar271) * fStack_2d4;
      auVar179._8_4_ =
           (fVar96 * fVar234 - fVar202 * fVar312) * fVar253 +
           (fVar202 * fVar274 - fVar214 * fVar234) * fVar94 +
           (fVar214 * fVar312 - fVar96 * fVar274) * fStack_2d0;
      auVar179._12_4_ =
           (fVar102 * fVar238 - fVar203 * fVar316) * fVar254 +
           (fVar203 * fVar278 - fVar216 * fVar238) * fVar99 +
           (fVar216 * fVar316 - fVar102 * fVar278) * fStack_2cc;
      auVar264 = maxps(auVar191,___xmm_bf800000bf800000bf800000bf800000);
      auVar207 = minps(auVar264,___xmm_3f8000003f8000003f8000003f800000);
      auVar264 = maxps(auVar179,___xmm_bf800000bf800000bf800000bf800000);
      auVar242 = minps(auVar264,___xmm_3f8000003f8000003f8000003f800000);
      fVar190 = auVar207._0_4_;
      fVar201 = auVar207._4_4_;
      fVar282 = auVar207._8_4_;
      fVar204 = auVar207._12_4_;
      fVar114 = auVar242._0_4_;
      fVar115 = auVar242._4_4_;
      fVar162 = auVar242._8_4_;
      fVar173 = auVar242._12_4_;
      auVar258._0_4_ = (fVar59 * fVar262 - fVar249 * fVar300) * fVar190 - fVar223 * fVar114;
      auVar258._4_4_ = (fVar89 * fVar271 - fVar252 * fVar309) * fVar201 - fVar230 * fVar115;
      auVar258._8_4_ = (fVar94 * fVar274 - fVar253 * fVar312) * fVar282 - fVar234 * fVar162;
      auVar258._12_4_ = (fVar99 * fVar278 - fVar254 * fVar316) * fVar204 - fVar238 * fVar173;
      auVar217._0_4_ = (fVar249 * fVar223 - local_2d8 * fVar262) * fVar190 - fVar300 * fVar114;
      auVar217._4_4_ = (fVar252 * fVar230 - fStack_2d4 * fVar271) * fVar201 - fVar309 * fVar115;
      auVar217._8_4_ = (fVar253 * fVar234 - fStack_2d0 * fVar274) * fVar282 - fVar312 * fVar162;
      auVar217._12_4_ = (fVar254 * fVar238 - fStack_2cc * fVar278) * fVar204 - fVar316 * fVar173;
      auVar283._0_4_ = (local_2d8 * fVar300 - fVar59 * fVar223) * fVar190 - fVar262 * fVar114;
      auVar283._4_4_ = (fStack_2d4 * fVar309 - fVar89 * fVar230) * fVar201 - fVar271 * fVar115;
      auVar283._8_4_ = (fStack_2d0 * fVar312 - fVar94 * fVar234) * fVar282 - fVar274 * fVar162;
      auVar283._12_4_ = (fStack_2cc * fVar316 - fVar99 * fVar238) * fVar204 - fVar278 * fVar173;
      auVar265 = divps(auVar258,auVar301);
      auVar264 = divps(auVar217,auVar301);
      auVar217 = divps(auVar283,auVar301);
      fVar262 = (float)(~uVar50 & auVar265._0_4_);
      fVar271 = (float)(~uVar52 & auVar265._4_4_);
      fVar274 = (float)(~uVar53 & auVar265._8_4_);
      fVar278 = (float)(~uVar56 & auVar265._12_4_);
      fVar263 = (float)(~uVar50 & auVar264._0_4_);
      fVar272 = (float)(~uVar52 & auVar264._4_4_);
      fVar275 = (float)(~uVar53 & auVar264._8_4_);
      fVar279 = (float)(~uVar56 & auVar264._12_4_);
      fVar223 = (float)(~uVar50 & auVar217._0_4_);
      fVar230 = (float)(~uVar52 & auVar217._4_4_);
      fVar234 = (float)(~uVar53 & auVar217._8_4_);
      fVar238 = (float)(~uVar56 & auVar217._12_4_);
      auVar301._0_4_ = (fVar249 * fVar61 - fVar59 * fVar206) * fVar190 - fVar189 * fVar114;
      auVar301._4_4_ = (fVar252 * fVar91 - fVar89 * fVar213) * fVar201 - fVar200 * fVar115;
      auVar301._8_4_ = (fVar253 * fVar96 - fVar94 * fVar214) * fVar282 - fVar202 * fVar162;
      auVar301._12_4_ = (fVar254 * fVar102 - fVar99 * fVar216) * fVar204 - fVar203 * fVar173;
      auVar303._0_4_ = (local_2d8 * fVar206 - fVar249 * fVar189) * fVar190 - fVar61 * fVar114;
      auVar303._4_4_ = (fStack_2d4 * fVar213 - fVar252 * fVar200) * fVar201 - fVar91 * fVar115;
      auVar303._8_4_ = (fStack_2d0 * fVar214 - fVar253 * fVar202) * fVar282 - fVar96 * fVar162;
      auVar303._12_4_ = (fStack_2cc * fVar216 - fVar254 * fVar203) * fVar204 - fVar102 * fVar173;
      auVar284._0_4_ = (fVar59 * fVar189 - local_2d8 * fVar61) * fVar190 - fVar206 * fVar114;
      auVar284._4_4_ = (fVar89 * fVar200 - fStack_2d4 * fVar91) * fVar201 - fVar213 * fVar115;
      auVar284._8_4_ = (fVar94 * fVar202 - fStack_2d0 * fVar96) * fVar282 - fVar214 * fVar162;
      auVar284._12_4_ = (fVar99 * fVar203 - fStack_2cc * fVar102) * fVar204 - fVar216 * fVar173;
      auVar264 = divps(auVar301,auVar256);
      auVar265 = divps(auVar303,auVar256);
      auVar256 = divps(auVar284,auVar256);
      fVar309 = (float)(~uVar51 & auVar264._0_4_);
      fVar312 = (float)(~uVar55 & auVar264._4_4_);
      fVar316 = (float)(~uVar54 & auVar264._8_4_);
      fVar255 = (float)(~uVar57 & auVar264._12_4_);
      fVar206 = (float)(~uVar51 & auVar265._0_4_);
      fVar213 = (float)(~uVar55 & auVar265._4_4_);
      fVar214 = (float)(~uVar54 & auVar265._8_4_);
      fVar249 = (float)(~uVar57 & auVar265._12_4_);
      fVar252 = (float)(~uVar51 & auVar256._0_4_);
      fVar253 = (float)(~uVar55 & auVar256._4_4_);
      fVar254 = (float)(~uVar54 & auVar256._8_4_);
      fVar300 = (float)(~uVar57 & auVar256._12_4_);
      fVar189 = fVar142 * fVar263 - fVar143 * fVar262;
      fVar200 = fVar155 * fVar272 - fVar156 * fVar271;
      fVar202 = fVar157 * fVar275 - fVar158 * fVar274;
      fVar203 = fVar159 * fVar279 - fVar160 * fVar278;
      fVar59 = fVar143 * fVar223 - fVar116 * fVar263;
      fVar89 = fVar156 * fVar230 - fVar135 * fVar272;
      fVar94 = fVar158 * fVar234 - fVar137 * fVar275;
      fVar99 = fVar160 * fVar238 - fVar139 * fVar279;
      fVar142 = fVar116 * fVar262 - fVar142 * fVar223;
      fVar155 = fVar135 * fVar271 - fVar155 * fVar230;
      fVar157 = fVar137 * fVar274 - fVar157 * fVar234;
      fVar159 = fVar139 * fVar278 - fVar159 * fVar238;
      fVar116 = fVar178 * fVar262 - fVar263 * fVar60;
      fVar135 = fVar185 * fVar271 - fVar272 * fVar90;
      fVar137 = fVar186 * fVar274 - fVar275 * fVar95;
      fVar139 = fVar188 * fVar278 - fVar279 * fVar100;
      fVar61 = fVar161 * fVar263 - fVar223 * fVar178;
      fVar91 = fVar172 * fVar272 - fVar230 * fVar185;
      fVar96 = fVar175 * fVar275 - fVar234 * fVar186;
      fVar102 = fVar177 * fVar279 - fVar238 * fVar188;
      fVar143 = fVar60 * fVar223 - fVar262 * fVar161;
      fVar156 = fVar90 * fVar230 - fVar271 * fVar172;
      fVar158 = fVar95 * fVar234 - fVar274 * fVar175;
      fVar160 = fVar100 * fVar238 - fVar278 * fVar177;
      fVar161 = fVar222 * fVar206 - fVar299 * fVar309;
      fVar223 = fVar229 * fVar213 - fVar308 * fVar312;
      fVar172 = fVar233 * fVar214 - fVar311 * fVar316;
      fVar230 = fVar237 * fVar249 - fVar315 * fVar255;
      fVar263 = fVar299 * fVar252 - fVar281 * fVar206;
      fVar272 = fVar308 * fVar253 - fVar288 * fVar213;
      fVar275 = fVar311 * fVar254 - fVar292 * fVar214;
      fVar279 = fVar315 * fVar300 - fVar297 * fVar249;
      fVar234 = fVar281 * fVar309 - fVar222 * fVar252;
      fVar238 = fVar288 * fVar312 - fVar229 * fVar253;
      fVar185 = fVar292 * fVar316 - fVar233 * fVar254;
      fVar188 = fVar297 * fVar255 - fVar237 * fVar300;
      fVar60 = auVar257._0_4_ * fVar309 - fVar206 * fVar261;
      fVar90 = auVar257._4_4_ * fVar312 - fVar213 * fVar270;
      fVar95 = auVar257._8_4_ * fVar316 - fVar214 * fVar273;
      fVar100 = auVar257._12_4_ * fVar255 - fVar249 * fVar277;
      fVar206 = fVar241 * fVar206 - fVar252 * auVar257._0_4_;
      fVar213 = fVar246 * fVar213 - fVar253 * auVar257._4_4_;
      fVar216 = fVar247 * fVar214 - fVar254 * auVar257._8_4_;
      fVar271 = fVar248 * fVar249 - fVar300 * auVar257._12_4_;
      fVar175 = fVar261 * fVar252 - fVar309 * fVar241;
      fVar177 = fVar270 * fVar253 - fVar312 * fVar246;
      fVar178 = fVar273 * fVar254 - fVar316 * fVar247;
      fVar186 = fVar277 * fVar300 - fVar255 * fVar248;
      fVar222 = fVar206 + fVar59;
      fVar229 = fVar213 + fVar89;
      fVar233 = fVar216 + fVar94;
      fVar237 = fVar271 + fVar99;
      auVar264._4_4_ = _UNK_150651574;
      auVar264._0_4_ = __xmm_80000000800000008000000080000000;
      auVar264._8_4_ = _UNK_150651578;
      auVar264._12_4_ = _UNK_15065157c;
      fVar206 = (float)((uint)fVar206 ^ __xmm_80000000800000008000000080000000) - fVar263;
      fVar214 = (float)((uint)fVar213 ^ _UNK_150651574) - fVar272;
      fVar262 = (float)((uint)fVar216 ^ _UNK_150651578) - fVar275;
      fVar274 = (float)((uint)fVar271 ^ _UNK_15065157c) - fVar279;
      fVar263 = fVar263 + fVar61;
      fVar272 = fVar272 + fVar91;
      fVar275 = fVar275 + fVar96;
      fVar279 = fVar279 + fVar102;
      fVar61 = (float)((uint)fVar59 ^ __xmm_80000000800000008000000080000000) - fVar61;
      fVar91 = (float)((uint)fVar89 ^ _UNK_150651574) - fVar91;
      fVar96 = (float)((uint)fVar94 ^ _UNK_150651578) - fVar96;
      fVar102 = (float)((uint)fVar99 ^ _UNK_15065157c) - fVar102;
      fVar213 = fVar175 + fVar142;
      fVar216 = fVar177 + fVar155;
      fVar271 = fVar178 + fVar157;
      fVar278 = fVar186 + fVar159;
      fVar94 = (float)((uint)fVar175 ^ __xmm_80000000800000008000000080000000) - fVar234;
      fVar99 = (float)((uint)fVar177 ^ _UNK_150651574) - fVar238;
      fVar175 = (float)((uint)fVar178 ^ _UNK_150651578) - fVar185;
      fVar177 = (float)((uint)fVar186 ^ _UNK_15065157c) - fVar188;
      fVar234 = fVar234 + fVar143;
      fVar238 = fVar238 + fVar156;
      fVar185 = fVar185 + fVar158;
      fVar188 = fVar188 + fVar160;
      fVar143 = (float)((uint)fVar142 ^ __xmm_80000000800000008000000080000000) - fVar143;
      fVar156 = (float)((uint)fVar155 ^ _UNK_150651574) - fVar156;
      fVar158 = (float)((uint)fVar157 ^ _UNK_150651578) - fVar158;
      fVar160 = (float)((uint)fVar159 ^ _UNK_15065157c) - fVar160;
      fVar142 = fVar60 + fVar189;
      fVar155 = fVar90 + fVar200;
      fVar157 = fVar95 + fVar202;
      fVar159 = fVar100 + fVar203;
      fVar59 = (float)((uint)fVar60 ^ __xmm_80000000800000008000000080000000) - fVar161;
      fVar60 = (float)((uint)fVar90 ^ _UNK_150651574) - fVar223;
      fVar89 = (float)((uint)fVar95 ^ _UNK_150651578) - fVar172;
      fVar90 = (float)((uint)fVar100 ^ _UNK_15065157c) - fVar230;
      fVar161 = fVar161 + fVar116;
      fVar223 = fVar223 + fVar135;
      fVar172 = fVar172 + fVar137;
      fVar230 = fVar230 + fVar139;
      fVar116 = (float)((uint)fVar189 ^ __xmm_80000000800000008000000080000000) - fVar116;
      fVar135 = (float)((uint)fVar200 ^ _UNK_150651574) - fVar135;
      fVar137 = (float)((uint)fVar202 ^ _UNK_150651578) - fVar137;
      fVar139 = (float)((uint)fVar203 ^ _UNK_15065157c) - fVar139;
      uVar50 = *(uint *)(param_1 + 0xc + lVar43);
      uVar51 = *(uint *)(param_1 + 0xc + lVar28);
      auVar256 = insertps(ZEXT416(uVar50),ZEXT416(uVar51),0x10);
      uVar52 = *(uint *)(param_1 + 0xc + lVar32);
      auVar256 = insertps(auVar256,ZEXT416(uVar52),0x20);
      uVar55 = *(uint *)(param_1 + 0xc + lVar23);
      auVar265 = insertps(auVar256,ZEXT416(uVar55),0x30);
      uVar53 = *(uint *)(param_1 + 0xc + lVar37);
      uVar54 = *(uint *)(param_1 + 0xc + lVar34);
      auVar256 = insertps(ZEXT416(uVar53),ZEXT416(uVar54),0x10);
      uVar56 = *(uint *)(param_1 + 0xc + lVar41);
      auVar256 = insertps(auVar256,ZEXT416(uVar56),0x20);
      uVar57 = *(uint *)(param_1 + 0xc + lVar33);
      auVar217 = insertps(auVar256,ZEXT416(uVar57),0x30);
      uVar58 = *(uint *)(param_1 + 0xc + lVar47);
      uVar6 = *(uint *)(param_1 + 0xc + lVar39);
      auVar256 = insertps(ZEXT416(uVar58),ZEXT416(uVar6),0x10);
      uVar7 = *(uint *)(param_1 + 0xc + lVar30);
      auVar256 = insertps(auVar256,ZEXT416(uVar7),0x20);
      uVar8 = *(uint *)(param_1 + 0xc + lVar26);
      auVar304 = insertps(auVar256,ZEXT416(uVar8),0x30);
      uVar9 = *(uint *)(param_1 + 0xc + lVar36);
      uVar10 = *(uint *)(param_1 + 0xc + lVar29);
      auVar256 = insertps(ZEXT416(uVar9),ZEXT416(uVar10),0x10);
      uVar11 = *(uint *)(param_1 + 0xc + lVar40);
      auVar256 = insertps(auVar256,ZEXT416(uVar11),0x20);
      uVar12 = *(uint *)(param_1 + 0xc + lVar48);
      auVar301 = insertps(auVar256,ZEXT416(uVar12),0x30);
      auVar242 = divps(auVar242,auVar207);
      auVar180._0_4_ = (uint)auVar242._0_4_ ^ __xmm_80000000800000008000000080000000;
      auVar180._4_4_ = (uint)auVar242._4_4_ ^ _UNK_150651574;
      auVar180._8_4_ = (uint)auVar242._8_4_ ^ _UNK_150651578;
      auVar180._12_4_ = (uint)auVar242._12_4_ ^ _UNK_15065157c;
      auVar256 = maxps(auVar180,auVar242);
      auVar302._4_4_ = -(uint)(__xmm_3f8000003f8000003f8000003f800000._4_4_ < auVar256._4_4_);
      auVar302._0_4_ = -(uint)((float)__xmm_3f8000003f8000003f8000003f800000 < auVar256._0_4_);
      auVar302._8_4_ = -(uint)(__xmm_3f8000003f8000003f8000003f800000._8_4_ < auVar256._8_4_);
      auVar302._12_4_ = -(uint)(__xmm_3f8000003f8000003f8000003f800000._12_4_ < auVar256._12_4_);
      iVar46 = movmskps(piVar5[3] << 4,auVar302);
      if (iVar46 != 0) {
        auVar264 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar256);
      }
      auVar264 = blendvps(auVar256,auVar264,auVar302);
      fVar95 = auVar264._0_4_;
      fVar100 = auVar264._4_4_;
      fVar178 = auVar264._8_4_;
      fVar189 = auVar264._12_4_;
      fVar200 = fVar95 * fVar95;
      fVar186 = fVar100 * fVar100;
      fVar202 = fVar178 * fVar178;
      fVar203 = fVar189 * fVar189;
      auVar251._0_4_ =
           (((((((fVar200 * ___xmm_bb9918b7bb9918b7bb9918b7bb9918b7 +
                 ___xmm_3cc6061b3cc6061b3cc6061b3cc6061b) * fVar200 +
                ___xmm_bd732a49bd732a49bd732a49bd732a49) * fVar200 +
               ___xmm_3dcadb2a3dcadb2a3dcadb2a3dcadb2a) * fVar200 +
              ___xmm_be0f8549be0f8549be0f8549be0f8549) * fVar200 +
             ___xmm_3e4c7b543e4c7b543e4c7b543e4c7b54) * fVar200 +
            ___xmm_beaaa8cfbeaaa8cfbeaaa8cfbeaaa8cf) * fVar200 +
           ___xmm_3f7ffffe3f7ffffe3f7ffffe3f7ffffe) * fVar95;
      auVar251._4_4_ =
           (((((((fVar186 * _UNK_150b51114 + _UNK_150b51124) * fVar186 + _UNK_150b51134) * fVar186 +
               _UNK_150b51144) * fVar186 + _UNK_150b51154) * fVar186 + _UNK_150b51164) * fVar186 +
            _UNK_150b51174) * fVar186 + _UNK_150b51184) * fVar100;
      auVar251._8_4_ =
           (((((((fVar202 * _UNK_150b51118 + _UNK_150b51128) * fVar202 + _UNK_150b51138) * fVar202 +
               _UNK_150b51148) * fVar202 + _UNK_150b51158) * fVar202 + _UNK_150b51168) * fVar202 +
            _UNK_150b51178) * fVar202 + _UNK_150b51188) * fVar178;
      auVar251._12_4_ =
           (((((((fVar203 * _UNK_150b5111c + _UNK_150b5112c) * fVar203 + _UNK_150b5113c) * fVar203 +
               _UNK_150b5114c) * fVar203 + _UNK_150b5115c) * fVar203 + _UNK_150b5116c) * fVar203 +
            _UNK_150b5117c) * fVar203 + _UNK_150b5118c) * fVar189;
      auVar118._0_4_ = ___xmm_3fc90fdb3fc90fdb3fc90fdb3fc90fdb - auVar251._0_4_;
      auVar118._4_4_ = _UNK_150b51194 - auVar251._4_4_;
      auVar118._8_4_ = _UNK_150b51198 - auVar251._8_4_;
      auVar118._12_4_ = _UNK_150b5119c - auVar251._12_4_;
      auVar264 = blendvps(auVar251,auVar118,auVar302);
      auVar63._4_4_ = -(uint)(auVar242._4_4_ < 0.0);
      auVar63._0_4_ = -(uint)(auVar242._0_4_ < 0.0);
      auVar119._0_4_ = auVar264._0_4_ ^ __xmm_80000000800000008000000080000000;
      auVar119._4_4_ = auVar264._4_4_ ^ _UNK_150651574;
      auVar119._8_4_ = auVar264._8_4_ ^ _UNK_150651578;
      auVar119._12_4_ = auVar264._12_4_ ^ _UNK_15065157c;
      auVar63._8_4_ = -(uint)(auVar242._8_4_ < 0.0);
      auVar63._12_4_ = -(uint)(auVar242._12_4_ < 0.0);
      auVar256 = blendvps(auVar264,auVar119,auVar63);
      auVar64._4_4_ = -(uint)(fVar115 < 0.0);
      auVar64._0_4_ = -(uint)(fVar114 < 0.0);
      auVar64._8_4_ = -(uint)(fVar162 < 0.0);
      auVar64._12_4_ = -(uint)(fVar173 < 0.0);
      auVar264 = blendvps(___xmm_40490fdb40490fdb40490fdb40490fdb,
                          ___xmm_c0490fdbc0490fdbc0490fdbc0490fdb,auVar64);
      fVar253 = auVar304._0_4_;
      fVar247 = auVar304._4_4_;
      fVar254 = auVar304._8_4_;
      fVar248 = auVar304._12_4_;
      fVar162 = auVar265._0_4_;
      fVar173 = auVar265._4_4_;
      fVar178 = auVar265._8_4_;
      fVar189 = auVar265._12_4_;
      fVar200 = auVar217._0_4_;
      fVar186 = auVar217._4_4_;
      fVar202 = auVar217._8_4_;
      fVar203 = auVar217._12_4_;
      auVar145._0_4_ = fVar94 * fVar94 + fVar206 * fVar206;
      auVar145._4_4_ = fVar99 * fVar99 + fVar214 * fVar214;
      auVar145._8_4_ = fVar175 * fVar175 + fVar262 * fVar262;
      auVar145._12_4_ = fVar177 * fVar177 + fVar274 * fVar274;
      fVar249 = auVar301._0_4_;
      fVar241 = auVar301._4_4_;
      fVar252 = auVar301._8_4_;
      fVar246 = auVar301._12_4_;
      auVar107._0_4_ =
           (fVar59 * fVar59 + auVar145._0_4_) * fVar249 +
           (fVar116 * fVar116 + fVar143 * fVar143 + fVar61 * fVar61) * fVar200 +
           (fVar161 * fVar161 + fVar234 * fVar234 + fVar263 * fVar263) * fVar162 +
           (fVar142 * fVar142 + fVar213 * fVar213 + fVar222 * fVar222) * fVar253;
      auVar107._4_4_ =
           (fVar60 * fVar60 + auVar145._4_4_) * fVar241 +
           (fVar135 * fVar135 + fVar156 * fVar156 + fVar91 * fVar91) * fVar186 +
           (fVar223 * fVar223 + fVar238 * fVar238 + fVar272 * fVar272) * fVar173 +
           (fVar155 * fVar155 + fVar216 * fVar216 + fVar229 * fVar229) * fVar247;
      auVar107._8_4_ =
           (fVar89 * fVar89 + auVar145._8_4_) * fVar252 +
           (fVar137 * fVar137 + fVar158 * fVar158 + fVar96 * fVar96) * fVar202 +
           (fVar172 * fVar172 + fVar185 * fVar185 + fVar275 * fVar275) * fVar178 +
           (fVar157 * fVar157 + fVar271 * fVar271 + fVar233 * fVar233) * fVar254;
      auVar107._12_4_ =
           (fVar90 * fVar90 + auVar145._12_4_) * fVar246 +
           (fVar139 * fVar139 + fVar160 * fVar160 + fVar102 * fVar102) * fVar203 +
           (fVar230 * fVar230 + fVar188 * fVar188 + fVar279 * fVar279) * fVar189 +
           (fVar159 * fVar159 + fVar278 * fVar278 + fVar237 * fVar237) * fVar248;
      pfVar2 = (float *)(param_3 + (uVar42 & 0xffffffff));
      auVar242 = pmovzxbd(auVar145,ZEXT416(*(uint *)(param_4 + uVar38)) &
                                   ___xmm_00000000000000000000000001010101);
      auVar65._4_4_ = -auVar242._4_4_;
      auVar65._0_4_ = -auVar242._0_4_;
      auVar65._8_4_ = -auVar242._8_4_;
      auVar65._12_4_ = SUB124(SUB1612((undefined1  [16])0x0,4),8) - auVar242._12_4_;
      auVar19._4_4_ = param_5;
      auVar19._0_4_ = param_5;
      auVar19._8_4_ = param_5;
      auVar19._12_4_ = param_5;
      auVar20._4_4_ = param_6;
      auVar20._0_4_ = param_6;
      auVar20._8_4_ = param_6;
      auVar20._12_4_ = param_6;
      auVar242 = blendvps(auVar19,auVar20,auVar65);
      auVar146._0_4_ =
           auVar242._0_4_ *
           (((float)(auVar264._0_4_ & -(uint)(fVar190 < 0.0)) + auVar256._0_4_) - *pfVar2);
      auVar146._4_4_ =
           auVar242._4_4_ *
           (((float)(auVar264._4_4_ & -(uint)(fVar201 < 0.0)) + auVar256._4_4_) - pfVar2[1]);
      auVar146._8_4_ =
           auVar242._8_4_ *
           (((float)(auVar264._8_4_ & -(uint)(fVar282 < 0.0)) + auVar256._8_4_) - pfVar2[2]);
      auVar146._12_4_ =
           auVar242._12_4_ *
           (((float)(auVar264._12_4_ & -(uint)(fVar204 < 0.0)) + auVar256._12_4_) - pfVar2[3]);
      auVar264 = maxps(auVar146,___xmm_bf490fdbbf490fdbbf490fdbbf490fdb);
      auVar264 = minps(auVar264,___xmm_3f490fdb3f490fdb3f490fdb3f490fdb);
      auVar264 = divps(auVar264,auVar107);
      fVar95 = (float)(-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 < auVar107._0_4_) &
                      auVar264._0_4_);
      fVar100 = (float)(-(uint)(_UNK_1506895d4 < auVar107._4_4_) & auVar264._4_4_);
      fVar114 = (float)(-(uint)(_UNK_1506895d8 < auVar107._8_4_) & auVar264._8_4_);
      fVar115 = (float)(-(uint)(_UNK_1506895dc < auVar107._12_4_) & auVar264._12_4_);
      auVar66._4_4_ = -(uint)(0.0 < fVar247);
      auVar66._0_4_ = -(uint)(0.0 < fVar253);
      auVar66._8_4_ = -(uint)(0.0 < fVar254);
      auVar66._12_4_ = -(uint)(0.0 < fVar248);
      iVar46 = movmskps((int)param_4,auVar66);
      if (iVar46 != 0) {
        bVar45 = (char)((char)iVar46 << 4) >> 4;
        fVar253 = fVar253 * fVar95;
        fVar247 = fVar247 * fVar100;
        fVar254 = fVar254 * fVar114;
        fVar248 = fVar248 * fVar115;
        auVar147._0_4_ = fVar221 - fVar222 * fVar253;
        auVar147._4_4_ = fVar228 - fVar229 * fVar247;
        auVar147._8_4_ = fVar232 - fVar233 * fVar254;
        auVar147._12_4_ = fVar236 - fVar237 * fVar248;
        if ((bVar45 & 1) != 0) {
          *(float *)(param_1 + lVar47) = auVar147._0_4_;
        }
        if ((bVar45 & 2) == 0) {
          if ((bVar45 & 4) != 0) goto LAB_14006eae1;
LAB_14006e74f:
          if ((char)bVar45 < '\0') goto LAB_14006eaf1;
LAB_14006e758:
          auVar120._0_4_ = fVar298 - fVar213 * fVar253;
          auVar120._4_4_ = fVar307 - fVar216 * fVar247;
          auVar120._8_4_ = fVar310 - fVar271 * fVar254;
          auVar120._12_4_ = fVar314 - fVar278 * fVar248;
          if ((bVar45 & 1) != 0) goto LAB_14006eb0a;
LAB_14006e76a:
          if ((bVar45 & 2) != 0) goto LAB_14006eb1b;
LAB_14006e774:
          if ((bVar45 & 4) != 0) goto LAB_14006eb2d;
LAB_14006e77e:
          if ((char)bVar45 < '\0') goto LAB_14006eb3e;
LAB_14006e787:
          auVar67._0_4_ = fVar280 - fVar142 * fVar253;
          auVar67._4_4_ = fVar287 - fVar155 * fVar247;
          auVar67._8_4_ = fVar291 - fVar157 * fVar254;
          auVar67._12_4_ = fVar296 - fVar159 * fVar248;
        }
        else {
          uVar14 = extractps(auVar147,1);
          *(undefined8 *)(param_1 + lVar39) = uVar14;
          if ((bVar45 & 4) == 0) goto LAB_14006e74f;
LAB_14006eae1:
          uVar14 = extractps(auVar147,2);
          *(undefined8 *)(param_1 + lVar30) = uVar14;
          if (-1 < (char)bVar45) goto LAB_14006e758;
LAB_14006eaf1:
          uVar14 = extractps(auVar147,3);
          *(undefined8 *)(param_1 + lVar26) = uVar14;
          auVar120._0_4_ = fVar298 - fVar213 * fVar253;
          auVar120._4_4_ = fVar307 - fVar216 * fVar247;
          auVar120._8_4_ = fVar310 - fVar271 * fVar254;
          auVar120._12_4_ = fVar314 - fVar278 * fVar248;
          if ((bVar45 & 1) == 0) goto LAB_14006e76a;
LAB_14006eb0a:
          *(int *)(param_1 + 4 + lVar47) = auVar120._0_4_;
          if ((bVar45 & 2) == 0) goto LAB_14006e774;
LAB_14006eb1b:
          uVar14 = extractps(auVar120,1);
          *(undefined8 *)(param_1 + 4 + lVar39) = uVar14;
          if ((bVar45 & 4) == 0) goto LAB_14006e77e;
LAB_14006eb2d:
          uVar14 = extractps(auVar120,2);
          *(undefined8 *)(param_1 + 4 + lVar30) = uVar14;
          if (-1 < (char)bVar45) goto LAB_14006e787;
LAB_14006eb3e:
          uVar14 = extractps(auVar120,3);
          *(undefined8 *)(param_1 + 4 + lVar26) = uVar14;
          auVar67._0_4_ = fVar280 - fVar142 * fVar253;
          auVar67._4_4_ = fVar287 - fVar155 * fVar247;
          auVar67._8_4_ = fVar291 - fVar157 * fVar254;
          auVar67._12_4_ = fVar296 - fVar159 * fVar248;
        }
        if ((bVar45 & 1) != 0) {
          *(int *)(param_1 + 8 + lVar47) = auVar67._0_4_;
        }
        if ((bVar45 & 2) != 0) {
          uVar14 = extractps(auVar67,1);
          *(undefined8 *)(param_1 + 8 + lVar39) = uVar14;
        }
        if ((bVar45 & 4) != 0) {
          uVar14 = extractps(auVar67,2);
          *(undefined8 *)(param_1 + 8 + lVar30) = uVar14;
        }
        if ((char)bVar45 < '\0') {
          uVar14 = extractps(auVar67,3);
          *(undefined8 *)(param_1 + 8 + lVar26) = uVar14;
        }
        if ((bVar45 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar47) = uVar58;
        }
        if ((bVar45 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar39) = uVar6;
        }
        if ((bVar45 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar30) = uVar7;
        }
        if ((char)bVar45 < '\0') {
          *(uint *)(param_1 + 0xc + lVar26) = uVar8;
        }
      }
      auVar68._4_4_ = -(uint)(0.0 < fVar173);
      auVar68._0_4_ = -(uint)(0.0 < fVar162);
      auVar68._8_4_ = -(uint)(0.0 < fVar178);
      auVar68._12_4_ = -(uint)(0.0 < fVar189);
      iVar25 = movmskps(iVar25 << 4,auVar68);
      if (iVar25 != 0) {
        bVar45 = (char)((char)iVar25 << 4) >> 4;
        fVar162 = fVar162 * fVar95;
        fVar173 = fVar173 * fVar100;
        fVar178 = fVar178 * fVar114;
        fVar189 = fVar189 * fVar115;
        auVar121._0_4_ = fVar295 - fVar263 * fVar162;
        auVar121._4_4_ = fVar269 - fVar272 * fVar173;
        auVar121._8_4_ = fVar136 - fVar275 * fVar178;
        auVar121._12_4_ = fVar276 - fVar279 * fVar189;
        if ((bVar45 & 1) != 0) {
          *(float *)(param_1 + lVar43) = auVar121._0_4_;
        }
        if ((bVar45 & 2) == 0) {
          if ((bVar45 & 4) != 0) goto LAB_14006ec22;
LAB_14006e852:
          if ((char)bVar45 < '\0') goto LAB_14006ec32;
LAB_14006e85a:
          auVar69._0_4_ = fVar289 - fVar234 * fVar162;
          auVar69._4_4_ = fVar290 - fVar238 * fVar173;
          auVar69._8_4_ = fVar141 - fVar185 * fVar178;
          auVar69._12_4_ = fVar293 - fVar188 * fVar189;
        }
        else {
          uVar14 = extractps(auVar121,1);
          *(undefined8 *)(param_1 + lVar28) = uVar14;
          if ((bVar45 & 4) == 0) goto LAB_14006e852;
LAB_14006ec22:
          uVar14 = extractps(auVar121,2);
          *(undefined8 *)(param_1 + lVar32) = uVar14;
          if (-1 < (char)bVar45) goto LAB_14006e85a;
LAB_14006ec32:
          uVar14 = extractps(auVar121,3);
          *(undefined8 *)(param_1 + lVar23) = uVar14;
          auVar69._0_4_ = fVar289 - fVar234 * fVar162;
          auVar69._4_4_ = fVar290 - fVar238 * fVar173;
          auVar69._8_4_ = fVar141 - fVar185 * fVar178;
          auVar69._12_4_ = fVar293 - fVar188 * fVar189;
          iVar134 = iVar187;
        }
        if ((bVar45 & 1) != 0) {
          *(int *)(param_1 + 4 + lVar43) = auVar69._0_4_;
        }
        if ((bVar45 & 2) != 0) {
          uVar14 = extractps(auVar69,1);
          *(undefined8 *)(param_1 + 4 + lVar28) = uVar14;
        }
        if ((bVar45 & 4) != 0) {
          uVar14 = extractps(auVar69,2);
          *(undefined8 *)(param_1 + 4 + lVar32) = uVar14;
        }
        if ((char)bVar45 < '\0') {
          uVar14 = extractps(auVar69,3);
          *(undefined8 *)(param_1 + 4 + lVar23) = uVar14;
          iVar134 = iVar187;
        }
        auVar70._0_4_ = fVar240 - fVar161 * fVar162;
        auVar70._4_4_ = fVar245 - fVar223 * fVar173;
        auVar70._8_4_ = fVar174 - fVar172 * fVar178;
        auVar70._12_4_ = fVar313 - fVar230 * fVar189;
        if ((bVar45 & 1) != 0) {
          *(float *)(param_1 + 8 + lVar43) = auVar70._0_4_;
        }
        if ((bVar45 & 2) != 0) {
          uVar14 = extractps(auVar70,1);
          *(undefined8 *)(param_1 + 8 + lVar28) = uVar14;
        }
        if ((bVar45 & 4) != 0) {
          uVar14 = extractps(auVar70,2);
          *(undefined8 *)(param_1 + 8 + lVar32) = uVar14;
        }
        if ((char)bVar45 < '\0') {
          uVar14 = extractps(auVar70,3);
          *(undefined8 *)(param_1 + 8 + lVar23) = uVar14;
          iVar134 = iVar187;
        }
        if ((bVar45 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar43) = uVar50;
        }
        if ((bVar45 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar28) = uVar51;
        }
        if ((bVar45 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar32) = uVar52;
        }
        if ((char)bVar45 < '\0') {
          *(uint *)(param_1 + 0xc + lVar23) = uVar55;
          iVar134 = iVar187;
        }
      }
      auVar71._4_4_ = -(uint)(0.0 < fVar186);
      auVar71._0_4_ = -(uint)(0.0 < fVar200);
      auVar71._8_4_ = -(uint)(0.0 < fVar202);
      auVar71._12_4_ = -(uint)(0.0 < fVar203);
      iVar134 = movmskps(iVar134,auVar71);
      iVar25 = 0;
      if (iVar134 != 0) {
        bVar45 = (char)((char)iVar134 << 4) >> 4;
        fVar200 = fVar200 * fVar95;
        fVar186 = fVar186 * fVar100;
        fVar202 = fVar202 * fVar114;
        fVar203 = fVar203 * fVar115;
        auVar122._0_4_ = fVar224 - fVar61 * fVar200;
        auVar122._4_4_ = fVar231 - fVar91 * fVar186;
        auVar122._8_4_ = fVar235 - fVar96 * fVar202;
        auVar122._12_4_ = fVar239 - fVar102 * fVar203;
        if ((bVar45 & 1) != 0) {
          *(float *)(param_1 + lVar37) = auVar122._0_4_;
        }
        if ((bVar45 & 2) != 0) {
          uVar14 = extractps(auVar122,1);
          *(undefined8 *)(param_1 + lVar34) = uVar14;
        }
        if ((bVar45 & 4) != 0) {
          uVar14 = extractps(auVar122,2);
          *(undefined8 *)(param_1 + lVar41) = uVar14;
        }
        if ((char)bVar45 < '\0') {
          uVar14 = extractps(auVar122,3);
          *(undefined8 *)(param_1 + lVar33) = uVar14;
        }
        auVar72._0_4_ = fVar205 - fVar143 * fVar200;
        auVar72._4_4_ = fVar212 - fVar156 * fVar186;
        auVar72._8_4_ = fVar294 - fVar158 * fVar202;
        auVar72._12_4_ = fVar215 - fVar160 * fVar203;
        if ((bVar45 & 1) != 0) {
          *(float *)(param_1 + 4 + lVar37) = auVar72._0_4_;
        }
        if ((bVar45 & 2) != 0) {
          uVar14 = extractps(auVar72,1);
          *(undefined8 *)(param_1 + 4 + lVar34) = uVar14;
        }
        if ((bVar45 & 4) != 0) {
          uVar14 = extractps(auVar72,2);
          *(undefined8 *)(param_1 + 4 + lVar41) = uVar14;
        }
        if ((char)bVar45 < '\0') {
          uVar14 = extractps(auVar72,3);
          *(undefined8 *)(param_1 + 4 + lVar33) = uVar14;
        }
        auVar73._0_4_ = fVar62 - fVar116 * fVar200;
        auVar73._4_4_ = fVar98 - fVar135 * fVar186;
        auVar73._8_4_ = fVar106 - fVar137 * fVar202;
        auVar73._12_4_ = fVar101 - fVar139 * fVar203;
        if ((bVar45 & 1) != 0) {
          *(float *)(param_1 + 8 + lVar37) = auVar73._0_4_;
        }
        if ((bVar45 & 2) != 0) {
          uVar14 = extractps(auVar73,1);
          *(undefined8 *)(param_1 + 8 + lVar34) = uVar14;
        }
        if ((bVar45 & 4) != 0) {
          uVar14 = extractps(auVar73,2);
          *(undefined8 *)(param_1 + 8 + lVar41) = uVar14;
        }
        if ((char)bVar45 < '\0') {
          uVar14 = extractps(auVar73,3);
          *(undefined8 *)(param_1 + 8 + lVar33) = uVar14;
        }
        if ((bVar45 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar37) = uVar53;
        }
        if ((bVar45 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar34) = uVar54;
        }
        if ((bVar45 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar41) = uVar56;
        }
        iVar25 = CONCAT31((int3)((uint)iVar134 >> 8),bVar45);
        if ((char)bVar45 < '\0') {
          *(uint *)(param_1 + 0xc + lVar33) = uVar57;
          iVar25 = iVar22 << 4;
        }
      }
      auVar74._4_4_ = -(uint)(0.0 < fVar241);
      auVar74._0_4_ = -(uint)(0.0 < fVar249);
      auVar74._8_4_ = -(uint)(0.0 < fVar252);
      auVar74._12_4_ = -(uint)(0.0 < fVar246);
      iVar25 = movmskps(iVar25,auVar74);
      if (iVar25 != 0) {
        bVar45 = (char)((char)iVar25 << 4) >> 4;
        fVar249 = fVar249 * fVar95;
        fVar241 = fVar241 * fVar100;
        fVar252 = fVar252 * fVar114;
        fVar246 = fVar246 * fVar115;
        auVar123._0_4_ = fVar138 - fVar206 * fVar249;
        auVar123._4_4_ = fVar140 - fVar214 * fVar241;
        auVar123._8_4_ = fVar163 - fVar262 * fVar252;
        auVar123._12_4_ = fVar176 - fVar274 * fVar246;
        if ((bVar45 & 1) != 0) {
          *(float *)(param_1 + lVar36) = auVar123._0_4_;
        }
        if ((bVar45 & 2) != 0) {
          uVar14 = extractps(auVar123,1);
          *(undefined8 *)(param_1 + lVar29) = uVar14;
        }
        if ((bVar45 & 4) != 0) {
          uVar14 = extractps(auVar123,2);
          *(undefined8 *)(param_1 + lVar40) = uVar14;
        }
        if ((char)bVar45 < '\0') {
          uVar14 = extractps(auVar123,3);
          *(undefined8 *)(param_1 + lVar48) = uVar14;
        }
        auVar108._0_4_ = fVar92 - fVar94 * fVar249;
        auVar108._4_4_ = fVar104 - fVar99 * fVar241;
        auVar108._8_4_ = fVar113 - fVar175 * fVar252;
        auVar108._12_4_ = fVar103 - fVar177 * fVar246;
        if ((bVar45 & 1) == 0) {
          if ((bVar45 & 2) != 0) goto LAB_14006eee0;
LAB_14006ea6d:
          if ((bVar45 & 4) != 0) goto LAB_14006eef1;
LAB_14006ea76:
          if ((char)bVar45 < '\0') goto LAB_14006ef02;
LAB_14006ea7e:
          auVar75._0_4_ = fVar93 - fVar59 * fVar249;
          auVar75._4_4_ = fVar105 - fVar60 * fVar241;
          auVar75._8_4_ = fVar97 - fVar89 * fVar252;
          auVar75._12_4_ = fVar117 - fVar90 * fVar246;
        }
        else {
          *(float *)(param_1 + 4 + lVar36) = auVar108._0_4_;
          if ((bVar45 & 2) == 0) goto LAB_14006ea6d;
LAB_14006eee0:
          uVar14 = extractps(auVar108,1);
          *(undefined8 *)(param_1 + 4 + lVar29) = uVar14;
          if ((bVar45 & 4) == 0) goto LAB_14006ea76;
LAB_14006eef1:
          uVar14 = extractps(auVar108,2);
          *(undefined8 *)(param_1 + 4 + lVar40) = uVar14;
          if (-1 < (char)bVar45) goto LAB_14006ea7e;
LAB_14006ef02:
          uVar14 = extractps(auVar108,3);
          *(undefined8 *)(param_1 + 4 + lVar48) = uVar14;
          auVar75._0_4_ = fVar93 - fVar59 * fVar249;
          auVar75._4_4_ = fVar105 - fVar60 * fVar241;
          auVar75._8_4_ = fVar97 - fVar89 * fVar252;
          auVar75._12_4_ = fVar117 - fVar90 * fVar246;
        }
        if ((bVar45 & 1) != 0) {
          *(int *)(param_1 + 8 + lVar36) = auVar75._0_4_;
        }
        if ((bVar45 & 2) != 0) {
          uVar14 = extractps(auVar75,1);
          *(undefined8 *)(param_1 + 8 + lVar29) = uVar14;
        }
        if ((bVar45 & 4) != 0) {
          uVar14 = extractps(auVar75,2);
          *(undefined8 *)(param_1 + 8 + lVar40) = uVar14;
        }
        if ((char)bVar45 < '\0') {
          uVar14 = extractps(auVar75,3);
          *(undefined8 *)(param_1 + 8 + lVar48) = uVar14;
        }
        if ((bVar45 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar36) = uVar9;
        }
        if ((bVar45 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar29) = uVar10;
        }
        if ((bVar45 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar40) = uVar11;
        }
        if ((char)bVar45 < '\0') {
          *(uint *)(param_1 + 0xc + lVar48) = uVar12;
        }
      }
      uVar38 = uVar38 + 4;
      uVar42 = uVar42 + 0x10;
    } while ((int)uVar38 < (int)(uVar21 & 0xfffffffc));
    if ((int)param_7 <= (int)uVar38) {
      return;
    }
  }
  uVar50 = (uint)uVar38;
  bVar15 = (int)(uVar50 | (uint)__xmm_00000003000000020000000100000000) < (int)param_7;
  auVar166._0_4_ = -(uint)bVar15;
  bVar16 = (int)(uVar50 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_7;
  auVar166._4_4_ = -(uint)bVar16;
  bVar17 = (int)(uVar50 | _UNK_150631e08) < (int)param_7;
  auVar166._8_4_ = -(uint)bVar17;
  bVar18 = (int)(uVar50 | _UNK_150631e0c) < (int)param_7;
  auVar166._12_4_ = -(uint)bVar18;
  pbVar24 = (byte *)(uVar38 & 0xffffffff);
  pauVar27 = (undefined1 (*) [16])(param_2 + (longlong)pbVar24 * 0x10);
  uVar21 = movmskps((int)((longlong)pbVar24 * 0x10),auVar166);
  bVar45 = (char)((char)uVar21 << 4) >> 4;
  if (uVar21 == 0xf) {
    auVar264 = *pauVar27;
    iVar22 = *(int *)pauVar27[1];
    auVar242 = pauVar27[2];
    iVar46 = *(int *)pauVar27[3];
    auVar193._0_8_ = auVar264._0_8_;
    auVar193._8_4_ = auVar264._4_4_;
    auVar193._12_4_ = *(undefined4 *)(pauVar27[1] + 4);
    iVar25 = auVar264._0_4_;
    auVar149._0_8_ = CONCAT44(*(undefined4 *)(pauVar27[1] + 8),auVar264._8_4_);
    auVar149._8_4_ = auVar264._12_4_;
    auVar149._12_4_ = *(undefined4 *)(pauVar27[1] + 0xc);
    auVar77._0_8_ = auVar242._0_8_;
    auVar77._8_4_ = auVar242._4_4_;
    auVar77._12_4_ = *(undefined4 *)(pauVar27[3] + 4);
    iVar134 = auVar242._0_4_;
    auVar109._0_8_ = CONCAT44(*(undefined4 *)(pauVar27[3] + 8),auVar242._8_4_);
    auVar109._8_4_ = auVar242._12_4_;
    auVar109._12_4_ = *(undefined4 *)(pauVar27[3] + 0xc);
    auVar192._8_8_ = auVar77._8_8_;
    auVar192._0_8_ = auVar193._8_8_;
    auVar285._8_8_ = auVar109._0_8_;
    auVar285._0_8_ = auVar149._0_8_;
    auVar148._8_8_ = auVar109._8_8_;
    auVar148._0_8_ = auVar149._8_8_;
  }
  else {
    auVar76._0_4_ = ___xmm_00000030000000200000001000000000 & auVar166._0_4_;
    auVar76._4_4_ = _UNK_150b511c4 & auVar166._4_4_;
    auVar76._8_4_ = _UNK_150b511c8 & auVar166._8_4_;
    auVar76._12_4_ = _UNK_150b511cc & auVar166._12_4_;
    lVar23 = extractps(auVar76,1);
    lVar28 = extractps(auVar76,2);
    lVar26 = extractps(auVar76,3);
    iVar25 = *(int *)*pauVar27;
    iVar22 = *(int *)(*pauVar27 + lVar23);
    iVar134 = *(int *)(*pauVar27 + lVar28);
    iVar46 = *(int *)(*pauVar27 + lVar26);
    auVar264 = ___xmm_00000034000000240000001400000004 & auVar166;
    auVar192._4_4_ = *(undefined4 *)(*pauVar27 + auVar264._4_4_);
    auVar192._0_4_ = *(undefined4 *)(*pauVar27 + auVar264._0_4_);
    auVar192._12_4_ = *(undefined4 *)(*pauVar27 + auVar264._12_4_);
    auVar192._8_4_ = *(undefined4 *)(*pauVar27 + auVar264._8_4_);
    auVar264 = ___xmm_00000038000000280000001800000008 & auVar166;
    auVar285._4_4_ = *(undefined4 *)(*pauVar27 + auVar264._4_4_);
    auVar285._0_4_ = *(undefined4 *)(*pauVar27 + auVar264._0_4_);
    auVar285._12_4_ = *(undefined4 *)(*pauVar27 + auVar264._12_4_);
    auVar285._8_4_ = *(undefined4 *)(*pauVar27 + auVar264._8_4_);
    auVar264 = ___xmm_0000003c0000002c0000001c0000000c & auVar166;
    auVar148._4_4_ = *(undefined4 *)(*pauVar27 + auVar264._4_4_);
    auVar148._0_4_ = *(undefined4 *)(*pauVar27 + auVar264._0_4_);
    auVar148._12_4_ = *(undefined4 *)(*pauVar27 + auVar264._12_4_);
    auVar148._8_4_ = *(undefined4 *)(*pauVar27 + auVar264._8_4_);
  }
  auVar194._0_4_ = auVar192._0_4_ << 4;
  auVar194._4_4_ = auVar192._4_4_ << 4;
  auVar194._8_4_ = auVar192._8_4_ << 4;
  auVar194._12_4_ = auVar192._12_4_ << 4;
  auVar242 = auVar166 & auVar194;
  auVar265 = ___xmm_00000004000000040000000400000004 & auVar166;
  auVar256 = ___xmm_00000008000000080000000800000008 & auVar166;
  auVar286._0_4_ = auVar285._0_4_ << 4;
  auVar286._4_4_ = auVar285._4_4_ << 4;
  auVar286._8_4_ = auVar285._8_4_ << 4;
  auVar286._12_4_ = auVar285._12_4_ << 4;
  auVar207 = auVar166 & auVar286;
  auVar208._0_4_ = iVar25 << 4;
  auVar208._4_4_ = iVar22 << 4;
  auVar208._8_4_ = iVar134 << 4;
  auVar208._12_4_ = iVar46 << 4;
  auVar217 = auVar166 & auVar208;
  lVar23 = param_1 + auVar217._0_4_;
  auVar150._0_4_ = auVar148._0_4_ << 4;
  auVar150._4_4_ = auVar148._4_4_ << 4;
  auVar150._8_4_ = auVar148._8_4_ << 4;
  auVar150._12_4_ = auVar148._12_4_ << 4;
  auVar301 = auVar166 & auVar150;
  lVar44 = (longlong)auVar301._0_4_;
  auVar264 = ZEXT416(*(uint *)(param_1 + auVar217._0_4_));
  lVar26 = param_1 + auVar242._0_4_;
  lVar28 = param_1 + auVar242._4_4_;
  lVar29 = param_1 + auVar242._8_4_;
  lVar30 = param_1 + auVar242._12_4_;
  uVar38 = (ulonglong)auVar265._0_4_;
  uVar42 = (ulonglong)auVar265._4_4_;
  uVar35 = (ulonglong)auVar256._0_4_;
  lVar32 = param_1 + auVar207._0_4_;
  lVar33 = param_1 + auVar207._4_4_;
  lVar34 = param_1 + auVar207._8_4_;
  lVar36 = param_1 + auVar207._12_4_;
  lVar37 = param_1 + auVar217._4_4_;
  lVar39 = param_1 + auVar217._8_4_;
  lVar40 = param_1 + auVar217._12_4_;
  lVar41 = param_1 + lVar44;
  lVar43 = param_1 + auVar301._4_4_;
  lVar47 = param_1 + auVar301._8_4_;
  lVar48 = param_1 + auVar301._12_4_;
  bVar49 = (bVar45 & 2) == 0;
  if (bVar49) {
    auVar304 = ZEXT416(*(uint *)(uVar38 + lVar23));
    auVar302 = ZEXT416(*(uint *)(uVar35 + lVar23));
  }
  else {
    auVar264 = insertps(auVar264,*(undefined4 *)(param_1 + auVar217._4_4_),0x10);
    auVar304 = insertps(ZEXT416(*(uint *)(uVar38 + lVar23)),*(undefined4 *)(uVar42 + lVar37),0x10);
    auVar302 = insertps(ZEXT416(*(uint *)(uVar35 + lVar23)),
                        *(undefined4 *)((ulonglong)auVar256._4_4_ + lVar37),0x10);
  }
  uVar31 = (ulonglong)auVar256._4_4_;
  auVar124 = ZEXT416(*(uint *)(param_1 + auVar242._0_4_));
  if (!bVar49) {
    auVar124 = insertps(auVar124,*(undefined4 *)(param_1 + auVar242._4_4_),0x10);
  }
  auVar125 = ZEXT416(*(uint *)(uVar38 + lVar26));
  if (!bVar49) {
    auVar125 = insertps(auVar125,*(undefined4 *)(uVar42 + lVar28),0x10);
  }
  auVar179 = ZEXT416(*(uint *)(uVar35 + lVar26));
  if (!bVar49) {
    auVar179 = insertps(auVar179,*(undefined4 *)(uVar31 + lVar28),0x10);
  }
  auVar180 = ZEXT416(*(uint *)(param_1 + auVar207._0_4_));
  uVar51 = auVar265._8_4_;
  uVar55 = auVar265._12_4_;
  uVar52 = auVar256._8_4_;
  uVar53 = auVar256._12_4_;
  if (bVar49) {
    auVar256 = ZEXT416(*(uint *)(uVar38 + lVar32));
    auVar265 = ZEXT416(*(uint *)(uVar35 + lVar32));
    _local_2c8 = ZEXT416(*(uint *)(param_1 + lVar44));
    auVar305 = ZEXT416(*(uint *)(uVar38 + lVar41));
    auVar243 = ZEXT416(*(uint *)(uVar35 + lVar41));
  }
  else {
    auVar180 = insertps(auVar180,*(undefined4 *)(param_1 + auVar207._4_4_),0x10);
    auVar256 = insertps(ZEXT416(*(uint *)(uVar38 + lVar32)),*(undefined4 *)(uVar42 + lVar33),0x10);
    auVar265 = insertps(ZEXT416(*(uint *)(uVar35 + lVar32)),*(undefined4 *)(uVar31 + lVar33),0x10);
    _local_2c8 = insertps(ZEXT416(*(uint *)(param_1 + lVar44)),
                          *(undefined4 *)(param_1 + auVar301._4_4_),0x10);
    auVar305 = insertps(ZEXT416(*(uint *)(uVar38 + lVar41)),*(undefined4 *)(uVar42 + lVar43),0x10);
    auVar243 = insertps(ZEXT416(*(uint *)(uVar35 + lVar41)),*(undefined4 *)(uVar31 + lVar43),0x10);
  }
  if ((bVar45 & 4) != 0) {
    auVar264 = insertps(auVar264,*(undefined4 *)(param_1 + auVar217._8_4_),0x20);
    auVar304 = insertps(auVar304,*(undefined4 *)((ulonglong)uVar51 + lVar39),0x20);
    auVar302 = insertps(auVar302,*(undefined4 *)((ulonglong)uVar52 + lVar39),0x20);
    auVar124 = insertps(auVar124,*(undefined4 *)(param_1 + auVar242._8_4_),0x20);
    auVar125 = insertps(auVar125,*(undefined4 *)((ulonglong)uVar51 + lVar29),0x20);
    auVar179 = insertps(auVar179,*(undefined4 *)((ulonglong)uVar52 + lVar29),0x20);
    auVar180 = insertps(auVar180,*(undefined4 *)(param_1 + auVar207._8_4_),0x20);
    auVar256 = insertps(auVar256,*(undefined4 *)((ulonglong)uVar51 + lVar34),0x20);
    auVar265 = insertps(auVar265,*(undefined4 *)((ulonglong)uVar52 + lVar34),0x20);
    _local_2c8 = insertps(_local_2c8,*(undefined4 *)(param_1 + auVar301._8_4_),0x20);
    auVar305 = insertps(auVar305,*(undefined4 *)((ulonglong)uVar51 + lVar47),0x20);
    auVar243 = insertps(auVar243,*(undefined4 *)((ulonglong)uVar52 + lVar47),0x20);
  }
  if ((char)bVar45 < '\0') {
    auVar264 = insertps(auVar264,*(undefined4 *)(param_1 + auVar217._12_4_),0x30);
    auVar304 = insertps(auVar304,*(undefined4 *)((ulonglong)uVar55 + lVar40),0x30);
    auVar302 = insertps(auVar302,*(undefined4 *)((ulonglong)uVar53 + lVar40),0x30);
    auVar124 = insertps(auVar124,*(undefined4 *)(param_1 + auVar242._12_4_),0x30);
    auVar125 = insertps(auVar125,*(undefined4 *)((ulonglong)uVar55 + lVar30),0x30);
    auVar179 = insertps(auVar179,*(undefined4 *)((ulonglong)uVar53 + lVar30),0x30);
    auVar180 = insertps(auVar180,*(undefined4 *)(param_1 + auVar207._12_4_),0x30);
  }
  uVar38 = (ulonglong)((uint)__xmm_0000000c0000000c0000000c0000000c & auVar166._0_4_);
  if ((char)bVar45 < '\0') {
    auVar256 = insertps(auVar256,*(undefined4 *)((ulonglong)uVar55 + lVar36),0x30);
  }
  uVar42 = (ulonglong)(__xmm_0000000c0000000c0000000c0000000c._4_4_ & auVar166._4_4_);
  if ((char)bVar45 < '\0') {
    auVar265 = insertps(auVar265,*(undefined4 *)((ulonglong)uVar53 + lVar36),0x30);
  }
  bVar49 = (char)bVar45 < '\0';
  uVar35 = (ulonglong)SUB164(___xmm_0000000c0000000c0000000c0000000c & auVar166,8);
  fVar59 = auVar302._12_4_;
  if (bVar49) {
    _local_2c8 = insertps(_local_2c8,*(undefined4 *)(param_1 + auVar301._12_4_),0x30);
  }
  uVar31 = (ulonglong)SUB164(___xmm_0000000c0000000c0000000c0000000c & auVar166,0xc);
  auVar242 = insertps(ZEXT416(*(uint *)(uVar38 + lVar26)),*(undefined4 *)(uVar42 + lVar28),0x10);
  auVar217 = insertps(ZEXT416(*(uint *)(uVar38 + lVar32)),*(undefined4 *)(uVar42 + lVar33),0x10);
  auVar301 = insertps(ZEXT416(*(uint *)(uVar38 + lVar23)),*(undefined4 *)(uVar42 + lVar37),0x10);
  auVar207 = insertps(ZEXT416(*(uint *)(uVar38 + lVar41)),*(undefined4 *)(uVar42 + lVar43),0x10);
  if (bVar49) {
    auVar305 = insertps(auVar305,*(undefined4 *)((ulonglong)uVar55 + lVar48),0x30);
  }
  auVar242 = insertps(auVar242,*(undefined4 *)(uVar35 + lVar29),0x20);
  auVar217 = insertps(auVar217,*(undefined4 *)(uVar35 + lVar34),0x20);
  auVar301 = insertps(auVar301,*(undefined4 *)(uVar35 + lVar39),0x20);
  auVar207 = insertps(auVar207,*(undefined4 *)(uVar35 + lVar47),0x20);
  if (bVar49) {
    auVar243 = insertps(auVar243,*(undefined4 *)((ulonglong)uVar53 + lVar48),0x30);
  }
  local_398 = auVar124._0_4_;
  fStack_394 = auVar124._4_4_;
  fStack_390 = auVar124._8_4_;
  fStack_38c = auVar124._12_4_;
  local_3b8._0_4_ = auVar264._0_4_;
  auVar244._0_4_ = local_398 - (float)local_3b8._0_4_;
  fVar240 = auVar264._4_4_;
  auVar244._4_4_ = fStack_394 - fVar240;
  fVar245 = auVar264._8_4_;
  auVar244._8_4_ = fStack_390 - fVar245;
  fVar247 = auVar264._12_4_;
  auVar244._12_4_ = fStack_38c - fVar247;
  fVar139 = auVar125._4_4_;
  fVar155 = auVar125._12_4_;
  local_3e8 = auVar304._0_4_;
  fStack_3e4 = auVar304._4_4_;
  fStack_3e0 = auVar304._8_4_;
  fStack_3dc = auVar304._12_4_;
  fVar95 = auVar125._0_4_;
  auVar110._0_4_ = fVar95 - local_3e8;
  auVar110._4_4_ = fVar139 - fStack_3e4;
  fVar99 = auVar125._8_4_;
  auVar110._8_4_ = fVar99 - fStack_3e0;
  auVar110._12_4_ = fVar155 - fStack_3dc;
  local_3f8 = auVar179._0_4_;
  fStack_3f4 = auVar179._4_4_;
  fStack_3f0 = auVar179._8_4_;
  fStack_3ec = auVar179._12_4_;
  local_3a8._0_4_ = auVar302._0_4_;
  auVar126._0_4_ = local_3f8 - (float)local_3a8._0_4_;
  fVar174 = auVar302._4_4_;
  auVar126._4_4_ = fStack_3f4 - fVar174;
  fVar234 = auVar302._8_4_;
  auVar126._8_4_ = fStack_3f0 - fVar234;
  auVar126._12_4_ = fStack_3ec - fVar59;
  auVar151._0_4_ = auVar110._0_4_ * auVar110._0_4_ + auVar244._0_4_ * auVar244._0_4_;
  auVar151._4_4_ = auVar110._4_4_ * auVar110._4_4_ + auVar244._4_4_ * auVar244._4_4_;
  auVar151._8_4_ = auVar110._8_4_ * auVar110._8_4_ + auVar244._8_4_ * auVar244._8_4_;
  auVar151._12_4_ = auVar110._12_4_ * auVar110._12_4_ + auVar244._12_4_ * auVar244._12_4_;
  auVar306._0_4_ = auVar126._0_4_ * auVar126._0_4_ + auVar151._0_4_;
  auVar306._4_4_ = auVar126._4_4_ * auVar126._4_4_ + auVar151._4_4_;
  auVar306._8_4_ = auVar126._8_4_ * auVar126._8_4_ + auVar151._8_4_;
  auVar306._12_4_ = auVar126._12_4_ * auVar126._12_4_ + auVar151._12_4_;
  auVar302 = sqrtps(auVar151,auVar306);
  uVar51 = -(uint)(auVar306._0_4_ <= ___xmm_00800000008000000080000000800000);
  uVar52 = -(uint)(auVar306._4_4_ <= _UNK_1508be494);
  uVar55 = -(uint)(auVar306._8_4_ <= _UNK_1508be498);
  uVar53 = -(uint)(auVar306._12_4_ <= _UNK_1508be49c);
  auVar78._4_4_ = uVar52;
  auVar78._0_4_ = uVar51;
  auVar304 = divps(auVar244,auVar302);
  auVar264 = divps(auVar110,auVar302);
  auVar78._8_4_ = uVar55;
  auVar78._12_4_ = uVar53;
  auVar304 = blendvps(auVar304,___xmm_3f8000003f8000003f8000003f800000,auVar78);
  auVar302 = divps(auVar126,auVar302);
  fVar60 = (float)(~uVar51 & auVar264._0_4_);
  fVar92 = (float)(~uVar52 & auVar264._4_4_);
  fVar90 = (float)(~uVar55 & auVar264._8_4_);
  fVar104 = (float)(~uVar53 & auVar264._12_4_);
  fVar252 = (float)(~uVar51 & auVar302._0_4_);
  fVar253 = (float)(~uVar52 & auVar302._4_4_);
  fVar313 = (float)(~uVar55 & auVar302._8_4_);
  fVar255 = (float)(~uVar53 & auVar302._12_4_);
  local_2d8 = auVar180._0_4_;
  fStack_2d4 = auVar180._4_4_;
  fStack_2d0 = auVar180._8_4_;
  fStack_2cc = auVar180._12_4_;
  fVar178 = (float)local_3b8._0_4_ - local_2d8;
  fVar185 = fVar240 - fStack_2d4;
  fVar186 = fVar245 - fStack_2d0;
  fVar188 = fVar247 - fStack_2cc;
  fVar221 = auVar256._0_4_;
  fVar230 = local_3e8 - fVar221;
  fVar228 = auVar256._4_4_;
  fVar175 = fStack_3e4 - fVar228;
  fVar232 = auVar256._8_4_;
  fVar177 = fStack_3e0 - fVar232;
  fVar236 = auVar256._12_4_;
  fVar238 = fStack_3dc - fVar236;
  fVar190 = auVar265._0_4_;
  fVar117 = (float)local_3a8._0_4_ - fVar190;
  fVar204 = auVar265._4_4_;
  fVar114 = fVar174 - fVar204;
  fVar212 = auVar265._8_4_;
  fVar173 = fVar234 - fVar212;
  fVar214 = auVar265._12_4_;
  fVar156 = fVar59 - fVar214;
  fVar158 = local_398 - local_2d8;
  fVar159 = fStack_394 - fStack_2d4;
  fVar176 = fStack_390 - fStack_2d0;
  fVar223 = fStack_38c - fStack_2cc;
  fVar62 = fVar95 - fVar221;
  fVar93 = fVar139 - fVar228;
  fVar98 = fVar99 - fVar232;
  fVar105 = fVar155 - fVar236;
  fVar116 = local_3f8 - fVar190;
  fVar115 = fStack_3f4 - fVar204;
  fVar142 = fStack_3f0 - fVar212;
  fVar140 = fStack_3ec - fVar214;
  auVar167._0_4_ = fVar158 * fVar230;
  auVar167._4_4_ = fVar159 * fVar175;
  auVar167._8_4_ = fVar176 * fVar177;
  auVar167._12_4_ = fVar223 * fVar238;
  auVar152._0_4_ = fVar178 * fVar62 - auVar167._0_4_;
  auVar152._4_4_ = fVar185 * fVar93 - auVar167._4_4_;
  auVar152._8_4_ = fVar186 * fVar98 - auVar167._8_4_;
  auVar152._12_4_ = fVar188 * fVar105 - auVar167._12_4_;
  auVar195._0_4_ = fVar230 * fVar116 - fVar62 * fVar117;
  auVar195._4_4_ = fVar175 * fVar115 - fVar93 * fVar114;
  auVar195._8_4_ = fVar177 * fVar142 - fVar98 * fVar173;
  auVar195._12_4_ = fVar238 * fVar140 - fVar105 * fVar156;
  auVar127._0_4_ = fVar158 * fVar117 - fVar178 * fVar116;
  auVar127._4_4_ = fVar159 * fVar114 - fVar185 * fVar115;
  auVar127._8_4_ = fVar176 * fVar173 - fVar186 * fVar142;
  auVar127._12_4_ = fVar223 * fVar156 - fVar188 * fVar140;
  auVar79._0_4_ =
       auVar152._0_4_ * auVar152._0_4_ +
       auVar127._0_4_ * auVar127._0_4_ + auVar195._0_4_ * auVar195._0_4_;
  auVar79._4_4_ =
       auVar152._4_4_ * auVar152._4_4_ +
       auVar127._4_4_ * auVar127._4_4_ + auVar195._4_4_ * auVar195._4_4_;
  auVar79._8_4_ =
       auVar152._8_4_ * auVar152._8_4_ +
       auVar127._8_4_ * auVar127._8_4_ + auVar195._8_4_ * auVar195._8_4_;
  auVar79._12_4_ =
       auVar152._12_4_ * auVar152._12_4_ +
       auVar127._12_4_ * auVar127._12_4_ + auVar195._12_4_ * auVar195._12_4_;
  auVar265 = sqrtps(auVar167,auVar79);
  uVar51 = -(uint)(auVar265._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77);
  uVar55 = -(uint)(auVar265._4_4_ <= _UNK_1506895d4);
  uVar54 = -(uint)(auVar265._8_4_ <= _UNK_1506895d8);
  uVar57 = -(uint)(auVar265._12_4_ <= _UNK_1506895dc);
  auVar264 = divps(auVar195,auVar265);
  fVar222 = (float)(~uVar51 & auVar264._0_4_);
  fVar229 = (float)(~uVar55 & auVar264._4_4_);
  fVar233 = (float)(~uVar54 & auVar264._8_4_);
  fVar237 = (float)(~uVar57 & auVar264._12_4_);
  auVar264 = divps(auVar127,auVar265);
  fVar106 = (float)(~uVar51 & auVar264._0_4_);
  fVar113 = (float)(~uVar55 & auVar264._4_4_);
  fVar100 = (float)(~uVar54 & auVar264._8_4_);
  fVar102 = (float)(~uVar57 & auVar264._12_4_);
  auVar264 = divps(auVar152,auVar265);
  fVar189 = (float)(~uVar51 & auVar264._0_4_);
  fVar200 = (float)(~uVar55 & auVar264._4_4_);
  fVar202 = (float)(~uVar54 & auVar264._8_4_);
  fVar203 = (float)(~uVar57 & auVar264._12_4_);
  fVar248 = local_398 - (float)local_2c8._0_4_;
  fVar300 = fStack_394 - (float)local_2c8._4_4_;
  fVar309 = fStack_390 - fStack_2c0;
  fVar312 = fStack_38c - fStack_2bc;
  local_308 = auVar305._0_4_;
  fStack_304 = auVar305._4_4_;
  fStack_300 = auVar305._8_4_;
  fStack_2fc = auVar305._12_4_;
  fVar249 = fVar95 - local_308;
  fVar241 = fVar139 - fStack_304;
  fVar246 = fVar99 - fStack_300;
  fVar254 = fVar155 - fStack_2fc;
  fVar224 = (float)local_3b8._0_4_ - (float)local_2c8._0_4_;
  fVar262 = fVar240 - (float)local_2c8._4_4_;
  fVar271 = fVar245 - fStack_2c0;
  fVar274 = fVar247 - fStack_2bc;
  fVar61 = local_3e8 - local_308;
  fVar89 = fStack_3e4 - fStack_304;
  auVar153._4_4_ = fVar89;
  auVar153._0_4_ = fVar61;
  fVar91 = fStack_3e0 - fStack_300;
  fVar94 = fStack_3dc - fStack_2fc;
  auVar153._8_4_ = fVar91;
  auVar153._12_4_ = fVar94;
  auVar266._0_4_ = fVar248 * fVar61 - fVar224 * fVar249;
  auVar266._4_4_ = fVar300 * fVar89 - fVar262 * fVar241;
  auVar266._8_4_ = fVar309 * fVar91 - fVar271 * fVar246;
  auVar266._12_4_ = fVar312 * fVar94 - fVar274 * fVar254;
  local_348 = auVar243._0_4_;
  fStack_344 = auVar243._4_4_;
  fStack_340 = auVar243._8_4_;
  fStack_33c = auVar243._12_4_;
  fVar316 = local_3f8 - local_348;
  fVar289 = fStack_3f4 - fStack_344;
  fVar293 = fStack_3f0 - fStack_340;
  fVar261 = fStack_3ec - fStack_33c;
  fVar135 = (float)local_3a8._0_4_ - local_348;
  fVar136 = fVar174 - fStack_344;
  fVar143 = fVar234 - fStack_340;
  fVar141 = fVar59 - fStack_33c;
  auVar259._0_4_ = fVar249 * fVar135 - fVar61 * fVar316;
  auVar259._4_4_ = fVar241 * fVar136 - fVar89 * fVar289;
  auVar259._8_4_ = fVar246 * fVar143 - fVar91 * fVar293;
  auVar259._12_4_ = fVar254 * fVar141 - fVar94 * fVar261;
  auVar226._0_4_ = fVar224 * fVar316 - fVar248 * fVar135;
  auVar226._4_4_ = fVar262 * fVar289 - fVar300 * fVar136;
  auVar226._8_4_ = fVar271 * fVar293 - fVar309 * fVar143;
  auVar226._12_4_ = fVar274 * fVar261 - fVar312 * fVar141;
  auVar128._0_4_ =
       auVar266._0_4_ * auVar266._0_4_ +
       auVar226._0_4_ * auVar226._0_4_ + auVar259._0_4_ * auVar259._0_4_;
  auVar128._4_4_ =
       auVar266._4_4_ * auVar266._4_4_ +
       auVar226._4_4_ * auVar226._4_4_ + auVar259._4_4_ * auVar259._4_4_;
  auVar128._8_4_ =
       auVar266._8_4_ * auVar266._8_4_ +
       auVar226._8_4_ * auVar226._8_4_ + auVar259._8_4_ * auVar259._8_4_;
  auVar128._12_4_ =
       auVar266._12_4_ * auVar266._12_4_ +
       auVar226._12_4_ * auVar226._12_4_ + auVar259._12_4_ * auVar259._12_4_;
  auVar256 = sqrtps(auVar153,auVar128);
  uVar52 = -(uint)(auVar256._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77);
  uVar53 = -(uint)(auVar256._4_4_ <= _UNK_1506895d4);
  uVar56 = -(uint)(auVar256._8_4_ <= _UNK_1506895d8);
  uVar58 = -(uint)(auVar256._12_4_ <= _UNK_1506895dc);
  auVar264 = divps(auVar259,auVar256);
  fVar282 = (float)(~uVar52 & auVar264._0_4_);
  fVar206 = (float)(~uVar53 & auVar264._4_4_);
  fVar294 = (float)(~uVar56 & auVar264._8_4_);
  fVar216 = (float)(~uVar58 & auVar264._12_4_);
  auVar264 = divps(auVar226,auVar256);
  fVar137 = (float)(~uVar52 & auVar264._0_4_);
  fVar162 = (float)(~uVar53 & auVar264._4_4_);
  fVar138 = (float)(~uVar56 & auVar264._8_4_);
  fVar157 = (float)(~uVar58 & auVar264._12_4_);
  auVar264 = divps(auVar266,auVar256);
  fVar163 = (float)(~uVar52 & auVar264._0_4_);
  fVar160 = (float)(~uVar53 & auVar264._4_4_);
  fVar161 = (float)(~uVar56 & auVar264._8_4_);
  fVar172 = (float)(~uVar58 & auVar264._12_4_);
  auVar219._0_4_ = fVar189 * fVar163 + fVar106 * fVar137 + fVar222 * fVar282;
  auVar219._4_4_ = fVar200 * fVar160 + fVar113 * fVar162 + fVar229 * fVar206;
  auVar219._8_4_ = fVar202 * fVar161 + fVar100 * fVar138 + fVar233 * fVar294;
  auVar219._12_4_ = fVar203 * fVar172 + fVar102 * fVar157 + fVar237 * fVar216;
  fVar231 = auVar304._0_4_;
  fVar235 = auVar304._4_4_;
  fVar239 = auVar304._8_4_;
  fVar278 = auVar304._12_4_;
  auVar111._0_4_ =
       (fVar106 * fVar282 - fVar222 * fVar137) * fVar252 +
       (fVar222 * fVar163 - fVar189 * fVar282) * fVar60 +
       (fVar189 * fVar137 - fVar106 * fVar163) * fVar231;
  auVar111._4_4_ =
       (fVar113 * fVar206 - fVar229 * fVar162) * fVar253 +
       (fVar229 * fVar160 - fVar200 * fVar206) * fVar92 +
       (fVar200 * fVar162 - fVar113 * fVar160) * fVar235;
  auVar111._8_4_ =
       (fVar100 * fVar294 - fVar233 * fVar138) * fVar313 +
       (fVar233 * fVar161 - fVar202 * fVar294) * fVar90 +
       (fVar202 * fVar138 - fVar100 * fVar161) * fVar239;
  auVar111._12_4_ =
       (fVar102 * fVar216 - fVar237 * fVar157) * fVar255 +
       (fVar237 * fVar172 - fVar203 * fVar216) * fVar104 +
       (fVar203 * fVar157 - fVar102 * fVar172) * fVar278;
  auVar302 = maxps(auVar219,___xmm_bf800000bf800000bf800000bf800000);
  auVar264 = maxps(auVar111,___xmm_bf800000bf800000bf800000bf800000);
  auVar304 = minps(auVar302,___xmm_3f8000003f8000003f8000003f800000);
  auVar302 = minps(auVar264,___xmm_3f8000003f8000003f8000003f800000);
  fVar201 = auVar304._0_4_;
  fVar205 = auVar304._4_4_;
  fVar213 = auVar304._8_4_;
  fVar215 = auVar304._12_4_;
  fVar96 = auVar302._0_4_;
  fVar97 = auVar302._4_4_;
  fVar101 = auVar302._8_4_;
  fVar103 = auVar302._12_4_;
  auVar260._0_4_ = (fVar60 * fVar163 - fVar252 * fVar137) * fVar201 - fVar282 * fVar96;
  auVar260._4_4_ = (fVar92 * fVar160 - fVar253 * fVar162) * fVar205 - fVar206 * fVar97;
  auVar260._8_4_ = (fVar90 * fVar161 - fVar313 * fVar138) * fVar213 - fVar294 * fVar101;
  auVar260._12_4_ = (fVar104 * fVar172 - fVar255 * fVar157) * fVar215 - fVar216 * fVar103;
  auVar80._0_4_ = (fVar252 * fVar282 - fVar231 * fVar163) * fVar201 - fVar137 * fVar96;
  auVar80._4_4_ = (fVar253 * fVar206 - fVar235 * fVar160) * fVar205 - fVar162 * fVar97;
  auVar80._8_4_ = (fVar313 * fVar294 - fVar239 * fVar161) * fVar213 - fVar138 * fVar101;
  auVar80._12_4_ = (fVar255 * fVar216 - fVar278 * fVar172) * fVar215 - fVar157 * fVar103;
  auVar267._0_4_ = (fVar231 * fVar137 - fVar60 * fVar282) * fVar201 - fVar163 * fVar96;
  auVar267._4_4_ = (fVar235 * fVar162 - fVar92 * fVar206) * fVar205 - fVar160 * fVar97;
  auVar267._8_4_ = (fVar239 * fVar138 - fVar90 * fVar294) * fVar213 - fVar161 * fVar101;
  auVar267._12_4_ = (fVar278 * fVar157 - fVar104 * fVar216) * fVar215 - fVar172 * fVar103;
  auVar124 = divps(auVar260,auVar265);
  auVar264 = divps(auVar80,auVar265);
  auVar265 = divps(auVar267,auVar265);
  fVar282 = (float)(~uVar51 & auVar124._0_4_);
  fVar206 = (float)(~uVar55 & auVar124._4_4_);
  fVar294 = (float)(~uVar54 & auVar124._8_4_);
  fVar216 = (float)(~uVar57 & auVar124._12_4_);
  fVar137 = (float)(~uVar51 & auVar264._0_4_);
  fVar162 = (float)(~uVar55 & auVar264._4_4_);
  fVar138 = (float)(~uVar54 & auVar264._8_4_);
  fVar157 = (float)(~uVar57 & auVar264._12_4_);
  fVar163 = (float)(~uVar51 & auVar265._0_4_);
  fVar160 = (float)(~uVar55 & auVar265._4_4_);
  fVar161 = (float)(~uVar54 & auVar265._8_4_);
  fVar172 = (float)(~uVar57 & auVar265._12_4_);
  auVar227._0_4_ = (fVar252 * fVar106 - fVar60 * fVar189) * fVar201 - fVar222 * fVar96;
  auVar227._4_4_ = (fVar253 * fVar113 - fVar92 * fVar200) * fVar205 - fVar229 * fVar97;
  auVar227._8_4_ = (fVar313 * fVar100 - fVar90 * fVar202) * fVar213 - fVar233 * fVar101;
  auVar227._12_4_ = (fVar255 * fVar102 - fVar104 * fVar203) * fVar215 - fVar237 * fVar103;
  auVar268._0_4_ = (fVar231 * fVar189 - fVar252 * fVar222) * fVar201 - fVar106 * fVar96;
  auVar268._4_4_ = (fVar235 * fVar200 - fVar253 * fVar229) * fVar205 - fVar113 * fVar97;
  auVar268._8_4_ = (fVar239 * fVar202 - fVar313 * fVar233) * fVar213 - fVar100 * fVar101;
  auVar268._12_4_ = (fVar278 * fVar203 - fVar255 * fVar237) * fVar215 - fVar102 * fVar103;
  auVar129._0_4_ = (fVar60 * fVar222 - fVar231 * fVar106) * fVar201 - fVar189 * fVar96;
  auVar129._4_4_ = (fVar92 * fVar229 - fVar235 * fVar113) * fVar205 - fVar200 * fVar97;
  auVar129._8_4_ = (fVar90 * fVar233 - fVar239 * fVar100) * fVar213 - fVar202 * fVar101;
  auVar129._12_4_ = (fVar104 * fVar237 - fVar278 * fVar102) * fVar215 - fVar203 * fVar103;
  auVar265 = divps(auVar227,auVar256);
  auVar124 = divps(auVar268,auVar256);
  auVar264 = divps(auVar129,auVar256);
  fVar278 = (float)(~uVar52 & auVar265._0_4_);
  fVar222 = (float)(~uVar53 & auVar265._4_4_);
  fVar229 = (float)(~uVar56 & auVar265._8_4_);
  fVar233 = (float)(~uVar58 & auVar265._12_4_);
  fVar255 = (float)(~uVar52 & auVar124._0_4_);
  fVar290 = (float)(~uVar53 & auVar124._4_4_);
  fVar295 = (float)(~uVar56 & auVar124._8_4_);
  fVar263 = (float)(~uVar58 & auVar124._12_4_);
  fVar189 = (float)(~uVar52 & auVar264._0_4_);
  fVar200 = (float)(~uVar53 & auVar264._4_4_);
  fVar202 = (float)(~uVar56 & auVar264._8_4_);
  fVar203 = (float)(~uVar58 & auVar264._12_4_);
  fVar237 = fVar158 * fVar137 - fVar62 * fVar282;
  fVar252 = fVar159 * fVar162 - fVar93 * fVar206;
  fVar253 = fVar176 * fVar138 - fVar98 * fVar294;
  fVar313 = fVar223 * fVar157 - fVar105 * fVar216;
  fVar60 = fVar62 * fVar163 - fVar116 * fVar137;
  fVar92 = fVar93 * fVar160 - fVar115 * fVar162;
  fVar90 = fVar98 * fVar161 - fVar142 * fVar138;
  fVar104 = fVar105 * fVar172 - fVar140 * fVar157;
  fVar100 = fVar116 * fVar282 - fVar158 * fVar163;
  fVar158 = fVar115 * fVar206 - fVar159 * fVar160;
  fVar159 = fVar142 * fVar294 - fVar176 * fVar161;
  fVar176 = fVar140 * fVar216 - fVar223 * fVar172;
  fVar223 = fVar230 * fVar282 - fVar137 * fVar178;
  fVar231 = fVar175 * fVar206 - fVar162 * fVar185;
  fVar235 = fVar177 * fVar294 - fVar138 * fVar186;
  fVar239 = fVar238 * fVar216 - fVar157 * fVar188;
  fVar62 = fVar117 * fVar137 - fVar163 * fVar230;
  fVar93 = fVar114 * fVar162 - fVar160 * fVar175;
  fVar98 = fVar173 * fVar138 - fVar161 * fVar177;
  fVar105 = fVar156 * fVar157 - fVar172 * fVar238;
  fVar142 = fVar178 * fVar163 - fVar282 * fVar117;
  fVar138 = fVar185 * fVar160 - fVar206 * fVar114;
  fVar140 = fVar186 * fVar161 - fVar294 * fVar173;
  fVar156 = fVar188 * fVar172 - fVar216 * fVar156;
  fVar114 = fVar224 * fVar255 - fVar61 * fVar278;
  fVar115 = fVar262 * fVar290 - fVar89 * fVar222;
  fVar162 = fVar271 * fVar295 - fVar91 * fVar229;
  fVar173 = fVar274 * fVar263 - fVar94 * fVar233;
  fVar61 = fVar61 * fVar189 - fVar135 * fVar255;
  fVar89 = fVar89 * fVar200 - fVar136 * fVar290;
  fVar91 = fVar91 * fVar202 - fVar143 * fVar295;
  fVar94 = fVar94 * fVar203 - fVar141 * fVar263;
  fVar178 = fVar135 * fVar278 - fVar224 * fVar189;
  fVar185 = fVar136 * fVar222 - fVar262 * fVar200;
  fVar186 = fVar143 * fVar229 - fVar271 * fVar202;
  fVar188 = fVar141 * fVar233 - fVar274 * fVar203;
  fVar106 = fVar249 * fVar278 - fVar255 * fVar248;
  fVar113 = fVar241 * fVar222 - fVar290 * fVar300;
  fVar102 = fVar246 * fVar229 - fVar295 * fVar309;
  fVar116 = fVar254 * fVar233 - fVar263 * fVar312;
  fVar163 = fVar316 * fVar255 - fVar189 * fVar249;
  fVar160 = fVar289 * fVar290 - fVar200 * fVar241;
  fVar161 = fVar293 * fVar295 - fVar202 * fVar246;
  fVar172 = fVar261 * fVar263 - fVar203 * fVar254;
  fVar117 = fVar248 * fVar189 - fVar278 * fVar316;
  fVar135 = fVar300 * fVar200 - fVar222 * fVar289;
  fVar137 = fVar309 * fVar202 - fVar229 * fVar293;
  fVar157 = fVar312 * fVar203 - fVar233 * fVar261;
  fVar230 = fVar117 + fVar100;
  fVar175 = fVar135 + fVar158;
  fVar177 = fVar137 + fVar159;
  fVar238 = fVar157 + fVar176;
  fVar136 = (float)((uint)fVar117 ^ __xmm_80000000800000008000000080000000) - fVar178;
  fVar143 = (float)((uint)fVar135 ^ _UNK_150651574) - fVar185;
  fVar141 = (float)((uint)fVar137 ^ _UNK_150651578) - fVar186;
  fVar157 = (float)((uint)fVar157 ^ _UNK_15065157c) - fVar188;
  fVar178 = fVar178 + fVar142;
  fVar185 = fVar185 + fVar138;
  fVar186 = fVar186 + fVar140;
  fVar188 = fVar188 + fVar156;
  fVar142 = (float)((uint)fVar100 ^ __xmm_80000000800000008000000080000000) - fVar142;
  fVar138 = (float)((uint)fVar158 ^ _UNK_150651574) - fVar138;
  fVar140 = (float)((uint)fVar159 ^ _UNK_150651578) - fVar140;
  fVar156 = (float)((uint)fVar176 ^ _UNK_15065157c) - fVar156;
  fVar176 = fVar106 + fVar237;
  fVar189 = fVar113 + fVar252;
  fVar200 = fVar102 + fVar253;
  fVar202 = fVar116 + fVar313;
  fVar106 = (float)((uint)fVar106 ^ __xmm_80000000800000008000000080000000) - fVar114;
  fVar100 = (float)((uint)fVar113 ^ _UNK_150651574) - fVar115;
  fVar117 = (float)((uint)fVar102 ^ _UNK_150651578) - fVar162;
  fVar135 = (float)((uint)fVar116 ^ _UNK_15065157c) - fVar173;
  fVar114 = fVar114 + fVar223;
  fVar115 = fVar115 + fVar231;
  fVar162 = fVar162 + fVar235;
  fVar173 = fVar173 + fVar239;
  fVar223 = (float)((uint)fVar237 ^ __xmm_80000000800000008000000080000000) - fVar223;
  fVar231 = (float)((uint)fVar252 ^ _UNK_150651574) - fVar231;
  fVar235 = (float)((uint)fVar253 ^ _UNK_150651578) - fVar235;
  fVar239 = (float)((uint)fVar313 ^ _UNK_15065157c) - fVar239;
  fVar113 = fVar163 + fVar60;
  fVar102 = fVar160 + fVar92;
  fVar116 = fVar161 + fVar90;
  fVar137 = fVar172 + fVar104;
  fVar158 = (float)((uint)fVar163 ^ __xmm_80000000800000008000000080000000) - fVar61;
  fVar163 = (float)((uint)fVar160 ^ _UNK_150651574) - fVar89;
  fVar159 = (float)((uint)fVar161 ^ _UNK_150651578) - fVar91;
  fVar160 = (float)((uint)fVar172 ^ _UNK_15065157c) - fVar94;
  fVar61 = fVar61 + fVar62;
  fVar89 = fVar89 + fVar93;
  fVar91 = fVar91 + fVar98;
  fVar94 = fVar94 + fVar105;
  fVar62 = (float)((uint)fVar60 ^ __xmm_80000000800000008000000080000000) - fVar62;
  fVar93 = (float)((uint)fVar92 ^ _UNK_150651574) - fVar93;
  fVar98 = (float)((uint)fVar90 ^ _UNK_150651578) - fVar98;
  fVar105 = (float)((uint)fVar104 ^ _UNK_15065157c) - fVar105;
  auVar242 = insertps(auVar242,*(undefined4 *)(uVar31 + lVar30),0x30);
  auVar256 = insertps(auVar217,*(undefined4 *)(uVar31 + lVar36),0x30);
  auVar265 = insertps(auVar301,*(undefined4 *)(uVar31 + lVar40),0x30);
  auVar217 = divps(auVar302,auVar304);
  auVar168._0_4_ = __xmm_80000000800000008000000080000000 ^ (uint)auVar217._0_4_;
  auVar168._4_4_ = _UNK_150651574 ^ (uint)auVar217._4_4_;
  auVar168._8_4_ = _UNK_150651578 ^ (uint)auVar217._8_4_;
  auVar168._12_4_ = _UNK_15065157c ^ (uint)auVar217._12_4_;
  auVar301 = maxps(auVar168,auVar217);
  uVar51 = -(uint)((float)__xmm_3f8000003f8000003f8000003f800000 < auVar301._0_4_);
  uVar52 = -(uint)(__xmm_3f8000003f8000003f8000003f800000._4_4_ < auVar301._4_4_);
  uVar55 = -(uint)(__xmm_3f8000003f8000003f8000003f800000._8_4_ < auVar301._8_4_);
  uVar53 = -(uint)(__xmm_3f8000003f8000003f8000003f800000._12_4_ < auVar301._12_4_);
  auVar81._4_4_ = uVar52;
  auVar81._0_4_ = uVar51;
  auVar81._8_4_ = uVar55;
  auVar81._12_4_ = uVar53;
  auVar181._0_4_ = uVar51 & auVar166._0_4_;
  auVar181._4_4_ = uVar52 & auVar166._4_4_;
  auVar181._8_4_ = uVar55 & auVar166._8_4_;
  auVar181._12_4_ = uVar53 & auVar166._12_4_;
  iVar25 = movmskps((int)lVar40,auVar181);
  auVar207 = insertps(auVar207,*(undefined4 *)(uVar31 + lVar48),0x30);
  auVar264 = ___xmm_3f8000003f8000003f8000003f800000;
  if (iVar25 != 0) {
    auVar264 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar301);
  }
  auVar264 = blendvps(auVar301,auVar264,auVar81);
  fVar60 = auVar264._0_4_;
  fVar92 = auVar264._4_4_;
  fVar90 = auVar264._8_4_;
  fVar104 = auVar264._12_4_;
  fVar161 = fVar60 * fVar60;
  fVar172 = fVar92 * fVar92;
  fVar203 = fVar90 * fVar90;
  fVar282 = fVar104 * fVar104;
  auVar182._0_4_ =
       (((((((___xmm_bb9918b7bb9918b7bb9918b7bb9918b7 * fVar161 +
             ___xmm_3cc6061b3cc6061b3cc6061b3cc6061b) * fVar161 +
            ___xmm_bd732a49bd732a49bd732a49bd732a49) * fVar161 +
           ___xmm_3dcadb2a3dcadb2a3dcadb2a3dcadb2a) * fVar161 +
          ___xmm_be0f8549be0f8549be0f8549be0f8549) * fVar161 +
         ___xmm_3e4c7b543e4c7b543e4c7b543e4c7b54) * fVar161 +
        ___xmm_beaaa8cfbeaaa8cfbeaaa8cfbeaaa8cf) * fVar161 + ___xmm_3f7ffffe3f7ffffe3f7ffffe3f7ffffe
       ) * fVar60;
  auVar182._4_4_ =
       (((((((_UNK_150b51114 * fVar172 + _UNK_150b51124) * fVar172 + _UNK_150b51134) * fVar172 +
           _UNK_150b51144) * fVar172 + _UNK_150b51154) * fVar172 + _UNK_150b51164) * fVar172 +
        _UNK_150b51174) * fVar172 + _UNK_150b51184) * fVar92;
  auVar182._8_4_ =
       (((((((_UNK_150b51118 * fVar203 + _UNK_150b51128) * fVar203 + _UNK_150b51138) * fVar203 +
           _UNK_150b51148) * fVar203 + _UNK_150b51158) * fVar203 + _UNK_150b51168) * fVar203 +
        _UNK_150b51178) * fVar203 + _UNK_150b51188) * fVar90;
  auVar182._12_4_ =
       (((((((_UNK_150b5111c * fVar282 + _UNK_150b5112c) * fVar282 + _UNK_150b5113c) * fVar282 +
           _UNK_150b5114c) * fVar282 + _UNK_150b5115c) * fVar282 + _UNK_150b5116c) * fVar282 +
        _UNK_150b5117c) * fVar282 + _UNK_150b5118c) * fVar104;
  auVar169._0_4_ = ___xmm_3fc90fdb3fc90fdb3fc90fdb3fc90fdb - auVar182._0_4_;
  auVar169._4_4_ = _UNK_150b51194 - auVar182._4_4_;
  auVar169._8_4_ = _UNK_150b51198 - auVar182._8_4_;
  auVar169._12_4_ = _UNK_150b5119c - auVar182._12_4_;
  auVar264 = blendvps(auVar182,auVar169,auVar81);
  auVar82._4_4_ = -(uint)(auVar217._4_4_ < 0.0);
  auVar82._0_4_ = -(uint)(auVar217._0_4_ < 0.0);
  auVar209._0_4_ = __xmm_80000000800000008000000080000000 ^ auVar264._0_4_;
  auVar209._4_4_ = _UNK_150651574 ^ auVar264._4_4_;
  auVar209._8_4_ = _UNK_150651578 ^ auVar264._8_4_;
  auVar209._12_4_ = _UNK_15065157c ^ auVar264._12_4_;
  auVar82._8_4_ = -(uint)(auVar217._8_4_ < 0.0);
  auVar82._12_4_ = -(uint)(auVar217._12_4_ < 0.0);
  auVar183 = blendvps(auVar264,auVar209,auVar82);
  auVar83._4_4_ = -(uint)(fVar97 < 0.0);
  auVar83._0_4_ = -(uint)(fVar96 < 0.0);
  auVar83._8_4_ = -(uint)(fVar101 < 0.0);
  auVar83._12_4_ = -(uint)(fVar103 < 0.0);
  auVar264 = blendvps(___xmm_40490fdb40490fdb40490fdb40490fdb,
                      ___xmm_c0490fdbc0490fdbc0490fdbc0490fdb,auVar83);
  fVar60 = auVar183._0_4_;
  fVar92 = auVar183._4_4_;
  fVar90 = auVar183._8_4_;
  fVar104 = auVar183._12_4_;
  local_428 = auVar265._0_4_;
  fStack_424 = auVar265._4_4_;
  fStack_420 = auVar265._8_4_;
  fStack_41c = auVar265._12_4_;
  local_418 = auVar242._0_4_;
  fStack_414 = auVar242._4_4_;
  fStack_410 = auVar242._8_4_;
  fStack_40c = auVar242._12_4_;
  local_408 = auVar256._0_4_;
  fStack_404 = auVar256._4_4_;
  fStack_400 = auVar256._8_4_;
  fStack_3fc = auVar256._12_4_;
  auVar84._0_4_ =
       (fVar223 * fVar223 + fVar142 * fVar142 + fVar62 * fVar62) * local_408 +
       (fVar114 * fVar114 + fVar178 * fVar178 + fVar61 * fVar61) * local_418 +
       (fVar176 * fVar176 + fVar230 * fVar230 + fVar113 * fVar113) * local_428;
  auVar84._4_4_ =
       (fVar231 * fVar231 + fVar138 * fVar138 + fVar93 * fVar93) * fStack_404 +
       (fVar115 * fVar115 + fVar185 * fVar185 + fVar89 * fVar89) * fStack_414 +
       (fVar189 * fVar189 + fVar175 * fVar175 + fVar102 * fVar102) * fStack_424;
  auVar84._8_4_ =
       (fVar235 * fVar235 + fVar140 * fVar140 + fVar98 * fVar98) * fStack_400 +
       (fVar162 * fVar162 + fVar186 * fVar186 + fVar91 * fVar91) * fStack_410 +
       (fVar200 * fVar200 + fVar177 * fVar177 + fVar116 * fVar116) * fStack_420;
  auVar84._12_4_ =
       (fVar239 * fVar239 + fVar156 * fVar156 + fVar105 * fVar105) * fStack_3fc +
       (fVar173 * fVar173 + fVar188 * fVar188 + fVar94 * fVar94) * fStack_40c +
       (fVar202 * fVar202 + fVar238 * fVar238 + fVar137 * fVar137) * fStack_41c;
  auVar170._0_4_ = fVar136 * fVar136 + fVar158 * fVar158;
  auVar170._4_4_ = fVar143 * fVar143 + fVar163 * fVar163;
  auVar170._8_4_ = fVar141 * fVar141 + fVar159 * fVar159;
  auVar170._12_4_ = fVar157 * fVar157 + fVar160 * fVar160;
  fVar96 = auVar207._0_4_;
  fVar97 = auVar207._4_4_;
  fVar101 = auVar207._8_4_;
  fVar103 = auVar207._12_4_;
  auVar112._0_4_ = (fVar106 * fVar106 + auVar170._0_4_) * fVar96 + auVar84._0_4_;
  auVar112._4_4_ = (fVar100 * fVar100 + auVar170._4_4_) * fVar97 + auVar84._4_4_;
  auVar112._8_4_ = (fVar117 * fVar117 + auVar170._8_4_) * fVar101 + auVar84._8_4_;
  auVar112._12_4_ = (fVar135 * fVar135 + auVar170._12_4_) * fVar103 + auVar84._12_4_;
  if ((~bVar45 & 9) == 0) {
    auVar170 = *(undefined1 (*) [16])(param_3 + (int)(uVar50 << 2));
    auVar84 = ZEXT416(*(uint *)(param_4 + (longlong)pbVar24));
    pbVar24 = param_4;
  }
  else {
    puVar13 = (uint *)(param_3 + (int)(uVar50 << 2));
    if ((uVar21 & 1) != 0) {
      auVar170 = ZEXT416(*puVar13);
    }
    if ((uVar21 & 2) != 0) {
      auVar170 = insertps(auVar170,puVar13[1],0x10);
    }
    if ((uVar21 & 4) != 0) {
      auVar170 = insertps(auVar170,puVar13[2],0x20);
    }
    if ((uVar21 & 8) != 0) {
      auVar170 = insertps(auVar170,puVar13[3],0x30);
    }
    param_4 = param_4 + (longlong)pbVar24;
    if ((uVar21 & 1) != 0) {
      pbVar24 = (byte *)(ulonglong)*param_4;
      auVar84 = ZEXT116(*param_4);
    }
    if ((uVar21 & 2) != 0) {
      auVar183._8_8_ = auVar84._8_8_;
      auVar183._0_8_ = auVar84._0_8_ & 0xffffffffffff00ff | (ulonglong)param_4[1] << 8;
      auVar84 = pblendw(auVar84,auVar183,0xfd);
      pbVar24 = param_4;
    }
    if ((uVar21 & 4) != 0) {
      pbVar24 = (byte *)(ulonglong)auVar84[3];
      auVar217 = pmovzxwd(auVar84,auVar84);
      auVar84._8_8_ = auVar217._8_8_;
      auVar84._0_8_ =
           auVar217._0_8_ & 0xffffffff0000ffff | (ulonglong)param_4[2] << 0x10 |
           (longlong)pbVar24 << 0x18;
    }
    if ((uVar21 & 8) != 0) {
      bVar45 = auVar84[2];
      auVar217 = pmovzxwd(auVar84,auVar84);
      auVar84._8_8_ = auVar217._8_8_;
      auVar84._0_8_ =
           auVar217._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar45 << 0x10 |
           (ulonglong)param_4[3] << 0x18;
      pbVar24 = param_4;
    }
  }
  auVar210._4_4_ = param_6;
  auVar210._0_4_ = param_6;
  auVar210._8_4_ = param_6;
  auVar210._12_4_ = param_6;
  auVar196._4_4_ = param_5;
  auVar196._0_4_ = param_5;
  auVar196._8_4_ = param_5;
  auVar196._12_4_ = param_5;
  auVar217 = pmovzxbd(auVar183,auVar84 & ___xmm_00000000000000000000000001010101);
  auVar85._4_4_ = -auVar217._4_4_;
  auVar85._0_4_ = -auVar217._0_4_;
  auVar85._8_4_ = -auVar217._8_4_;
  auVar85._12_4_ = SUB124(SUB1612((undefined1  [16])0x0,4),8) - auVar217._12_4_;
  auVar217 = blendvps(auVar196,auVar210,auVar85);
  auVar197._0_4_ =
       auVar217._0_4_ *
       (((float)(auVar264._0_4_ & -(uint)(fVar201 < 0.0)) + fVar60) - auVar170._0_4_);
  auVar197._4_4_ =
       auVar217._4_4_ *
       (((float)(auVar264._4_4_ & -(uint)(fVar205 < 0.0)) + fVar92) - auVar170._4_4_);
  auVar197._8_4_ =
       auVar217._8_4_ *
       (((float)(auVar264._8_4_ & -(uint)(fVar213 < 0.0)) + fVar90) - auVar170._8_4_);
  auVar197._12_4_ =
       auVar217._12_4_ *
       (((float)(auVar264._12_4_ & -(uint)(fVar215 < 0.0)) + fVar104) - auVar170._12_4_);
  auVar264 = maxps(auVar197,___xmm_bf490fdbbf490fdbbf490fdbbf490fdb);
  auVar264 = minps(auVar264,___xmm_3f490fdb3f490fdb3f490fdb3f490fdb);
  auVar264 = divps(auVar264,auVar112);
  fVar60 = (float)(-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 < auVar112._0_4_) &
                  auVar264._0_4_);
  fVar92 = (float)(-(uint)(_UNK_1506895d4 < auVar112._4_4_) & auVar264._4_4_);
  fVar90 = (float)(-(uint)(_UNK_1506895d8 < auVar112._8_4_) & auVar264._8_4_);
  fVar104 = (float)(-(uint)(_UNK_1506895dc < auVar112._12_4_) & auVar264._12_4_);
  auVar130._0_4_ = -(uint)(0.0 < local_428 && bVar15);
  auVar130._4_4_ = -(uint)(0.0 < fStack_424 && bVar16);
  auVar130._8_4_ = -(uint)(0.0 < fStack_420 && bVar17);
  auVar130._12_4_ = -(uint)(0.0 < fStack_41c && bVar18);
  iVar22 = movmskps((int)pbVar24,auVar130);
  iVar25 = 0;
  if (iVar22 != 0) {
    bVar45 = (char)((char)iVar22 << 4) >> 4;
    fVar161 = local_428 * fVar60;
    fStack_424 = fStack_424 * fVar92;
    fStack_420 = fStack_420 * fVar90;
    fStack_41c = fStack_41c * fVar104;
    local_3b8._0_4_ = (float)local_3b8._0_4_ - fVar113 * fVar161;
    local_3b8._4_4_ = fVar240 - fVar102 * fStack_424;
    fStack_3b0 = fVar245 - fVar116 * fStack_420;
    fStack_3ac = fVar247 - fVar137 * fStack_41c;
    if ((bVar45 & 1) != 0) {
      *(undefined4 *)(param_1 + auVar208._0_4_) = local_3b8._0_4_;
    }
    if ((bVar45 & 2) != 0) {
      uVar14 = extractps(_local_3b8,1);
      *(undefined8 *)(param_1 + auVar208._4_4_) = uVar14;
    }
    if ((bVar45 & 4) != 0) {
      uVar14 = extractps(_local_3b8,2);
      *(undefined8 *)(param_1 + auVar208._8_4_) = uVar14;
    }
    if ((char)bVar45 < '\0') {
      uVar14 = extractps(_local_3b8,3);
      *(undefined8 *)(param_1 + auVar208._12_4_) = uVar14;
    }
    local_3e8 = local_3e8 - fVar230 * fVar161;
    auVar220._4_4_ = fStack_3e4 - fVar175 * fStack_424;
    auVar220._0_4_ = local_3e8;
    auVar220._8_4_ = fStack_3e0 - fVar177 * fStack_420;
    auVar220._12_4_ = fStack_3dc - fVar238 * fStack_41c;
    if ((bVar45 & 1) != 0) {
      *(float *)(param_1 + 4 + (longlong)auVar208._0_4_) = local_3e8;
    }
    if ((bVar45 & 2) != 0) {
      uVar14 = extractps(auVar220,1);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar208._4_4_) = uVar14;
    }
    if ((bVar45 & 4) != 0) {
      uVar14 = extractps(auVar220,2);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar208._8_4_) = uVar14;
    }
    if ((char)bVar45 < '\0') {
      uVar14 = extractps(auVar220,3);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar208._12_4_) = uVar14;
    }
    local_3a8._0_4_ = (float)local_3a8._0_4_ - fVar176 * fVar161;
    local_3a8._4_4_ = fVar174 - fVar189 * fStack_424;
    fStack_3a0 = fVar234 - fVar200 * fStack_420;
    fStack_39c = fVar59 - fVar202 * fStack_41c;
    if ((bVar45 & 1) != 0) {
      *(undefined4 *)(param_1 + 8 + (longlong)auVar208._0_4_) = local_3a8._0_4_;
    }
    if ((bVar45 & 2) != 0) {
      uVar14 = extractps(_local_3a8,1);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar208._4_4_) = uVar14;
    }
    if ((bVar45 & 4) != 0) {
      uVar14 = extractps(_local_3a8,2);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar208._8_4_) = uVar14;
    }
    if ((char)bVar45 < '\0') {
      uVar14 = extractps(_local_3a8,3);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar208._12_4_) = uVar14;
    }
    if ((bVar45 & 1) != 0) {
      *(float *)(param_1 + 0xc + (longlong)auVar208._0_4_) = local_428;
    }
    if ((bVar45 & 2) != 0) {
      uVar14 = extractps(auVar265,1);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar208._4_4_) = uVar14;
    }
    if ((bVar45 & 4) != 0) {
      uVar14 = extractps(auVar265,2);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar208._8_4_) = uVar14;
    }
    iVar25 = CONCAT31((int3)((uint)iVar22 >> 8),bVar45);
    if ((char)bVar45 < '\0') {
      uVar14 = extractps(auVar265,3);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar208._12_4_) = uVar14;
      iVar25 = auVar208._12_4_;
    }
  }
  auVar86._0_4_ = -(uint)(0.0 < local_418 && bVar15);
  auVar86._4_4_ = -(uint)(0.0 < fStack_414 && bVar16);
  auVar86._8_4_ = -(uint)(0.0 < fStack_410 && bVar17);
  auVar86._12_4_ = -(uint)(0.0 < fStack_40c && bVar18);
  iVar22 = movmskps(iVar25,auVar86);
  iVar25 = 0;
  if (iVar22 != 0) {
    bVar45 = (char)((char)iVar22 << 4) >> 4;
    fVar59 = local_418 * fVar60;
    fStack_414 = fStack_414 * fVar92;
    fStack_410 = fStack_410 * fVar90;
    fStack_40c = fStack_40c * fVar104;
    auVar211._0_4_ = local_398 - fVar61 * fVar59;
    auVar211._4_4_ = fStack_394 - fVar89 * fStack_414;
    auVar211._8_4_ = fStack_390 - fVar91 * fStack_410;
    auVar211._12_4_ = fStack_38c - fVar94 * fStack_40c;
    if ((bVar45 & 1) != 0) {
      *(float *)(param_1 + auVar194._0_4_) = auVar211._0_4_;
    }
    if ((bVar45 & 2) == 0) {
      if ((bVar45 & 4) != 0) goto LAB_140070a46;
LAB_14007053b:
      if ((char)bVar45 < '\0') goto LAB_140070a5c;
LAB_140070546:
      auVar198._0_4_ = fVar95 - fVar178 * fVar59;
      auVar198._4_4_ = fVar139 - fVar185 * fStack_414;
      auVar198._8_4_ = fVar99 - fVar186 * fStack_410;
      auVar198._12_4_ = fVar155 - fVar188 * fStack_40c;
    }
    else {
      uVar14 = extractps(auVar211,1);
      *(undefined8 *)(param_1 + auVar194._4_4_) = uVar14;
      if ((bVar45 & 4) == 0) goto LAB_14007053b;
LAB_140070a46:
      uVar14 = extractps(auVar211,2);
      *(undefined8 *)(param_1 + auVar194._8_4_) = uVar14;
      if (-1 < (char)bVar45) goto LAB_140070546;
LAB_140070a5c:
      uVar14 = extractps(auVar211,3);
      *(undefined8 *)(param_1 + auVar194._12_4_) = uVar14;
      auVar198._0_4_ = fVar95 - fVar178 * fVar59;
      auVar198._4_4_ = fVar139 - fVar185 * fStack_414;
      auVar198._8_4_ = fVar99 - fVar186 * fStack_410;
      auVar198._12_4_ = fVar155 - fVar188 * fStack_40c;
    }
    if ((bVar45 & 1) != 0) {
      *(int *)(param_1 + 4 + (longlong)auVar194._0_4_) = auVar198._0_4_;
    }
    if ((bVar45 & 2) != 0) {
      uVar14 = extractps(auVar198,1);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar194._4_4_) = uVar14;
    }
    if ((bVar45 & 4) != 0) {
      uVar14 = extractps(auVar198,2);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar194._8_4_) = uVar14;
    }
    if ((char)bVar45 < '\0') {
      uVar14 = extractps(auVar198,3);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar194._12_4_) = uVar14;
      auVar131._0_4_ = local_3f8 - fVar114 * fVar59;
      auVar131._4_4_ = fStack_3f4 - fVar115 * fStack_414;
      auVar131._8_4_ = fStack_3f0 - fVar162 * fStack_410;
      auVar131._12_4_ = fStack_3ec - fVar173 * fStack_40c;
    }
    else {
      auVar131._0_4_ = local_3f8 - fVar114 * fVar59;
      auVar131._4_4_ = fStack_3f4 - fVar115 * fStack_414;
      auVar131._8_4_ = fStack_3f0 - fVar162 * fStack_410;
      auVar131._12_4_ = fStack_3ec - fVar173 * fStack_40c;
    }
    if ((bVar45 & 1) != 0) {
      *(int *)(param_1 + 8 + (longlong)auVar194._0_4_) = auVar131._0_4_;
    }
    if ((bVar45 & 2) != 0) {
      uVar14 = extractps(auVar131,1);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar194._4_4_) = uVar14;
    }
    if ((bVar45 & 4) != 0) {
      uVar14 = extractps(auVar131,2);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar194._8_4_) = uVar14;
    }
    if ((char)bVar45 < '\0') {
      uVar14 = extractps(auVar131,3);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar194._12_4_) = uVar14;
    }
    if ((bVar45 & 1) != 0) {
      *(float *)(param_1 + 0xc + (longlong)auVar194._0_4_) = local_418;
    }
    if ((bVar45 & 2) != 0) {
      uVar14 = extractps(auVar242,1);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar194._4_4_) = uVar14;
    }
    if ((bVar45 & 4) != 0) {
      uVar14 = extractps(auVar242,2);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar194._8_4_) = uVar14;
    }
    iVar25 = CONCAT31((int3)((uint)iVar22 >> 8),bVar45);
    if ((char)bVar45 < '\0') {
      uVar14 = extractps(auVar242,3);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar194._12_4_) = uVar14;
      iVar25 = auVar194._12_4_;
    }
  }
  auVar132._0_4_ = -(uint)(0.0 < local_408 && bVar15);
  auVar132._4_4_ = -(uint)(0.0 < fStack_404 && bVar16);
  auVar132._8_4_ = -(uint)(0.0 < fStack_400 && bVar17);
  auVar132._12_4_ = -(uint)(0.0 < fStack_3fc && bVar18);
  iVar22 = movmskps(iVar25,auVar132);
  iVar25 = 0;
  if (iVar22 == 0) goto LAB_1400706f8;
  bVar45 = (char)((char)iVar22 << 4) >> 4;
  fVar59 = local_408 * fVar60;
  fStack_404 = fStack_404 * fVar92;
  fStack_400 = fStack_400 * fVar90;
  fStack_3fc = fStack_3fc * fVar104;
  local_2d8 = local_2d8 - fVar62 * fVar59;
  auVar154._4_4_ = fStack_2d4 - fVar93 * fStack_404;
  auVar154._0_4_ = local_2d8;
  auVar154._8_4_ = fStack_2d0 - fVar98 * fStack_400;
  auVar154._12_4_ = fStack_2cc - fVar105 * fStack_3fc;
  if ((bVar45 & 1) != 0) {
    *(float *)(param_1 + auVar286._0_4_) = local_2d8;
  }
  if ((bVar45 & 2) == 0) {
    if ((bVar45 & 4) != 0) goto LAB_140070ac7;
LAB_14007065c:
    if ((char)bVar45 < '\0') goto LAB_140070ade;
LAB_140070668:
    auVar199._0_4_ = fVar221 - fVar142 * fVar59;
    auVar199._4_4_ = fVar228 - fVar138 * fStack_404;
    auVar199._8_4_ = fVar232 - fVar140 * fStack_400;
    auVar199._12_4_ = fVar236 - fVar156 * fStack_3fc;
  }
  else {
    uVar14 = extractps(auVar154,1);
    *(undefined8 *)(param_1 + auVar286._4_4_) = uVar14;
    if ((bVar45 & 4) == 0) goto LAB_14007065c;
LAB_140070ac7:
    uVar14 = extractps(auVar154,2);
    *(undefined8 *)(param_1 + auVar286._8_4_) = uVar14;
    if (-1 < (char)bVar45) goto LAB_140070668;
LAB_140070ade:
    uVar14 = extractps(auVar154,3);
    *(undefined8 *)(param_1 + auVar286._12_4_) = uVar14;
    auVar199._0_4_ = fVar221 - fVar142 * fVar59;
    auVar199._4_4_ = fVar228 - fVar138 * fStack_404;
    auVar199._8_4_ = fVar232 - fVar140 * fStack_400;
    auVar199._12_4_ = fVar236 - fVar156 * fStack_3fc;
  }
  if ((bVar45 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar286._0_4_) = auVar199._0_4_;
  }
  if ((bVar45 & 2) != 0) {
    uVar14 = extractps(auVar199,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar286._4_4_) = uVar14;
  }
  if ((bVar45 & 4) != 0) {
    uVar14 = extractps(auVar199,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar286._8_4_) = uVar14;
  }
  if ((char)bVar45 < '\0') {
    uVar14 = extractps(auVar199,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar286._12_4_) = uVar14;
    auVar184._0_4_ = fVar190 - fVar223 * fVar59;
    auVar184._4_4_ = fVar204 - fVar231 * fStack_404;
    auVar184._8_4_ = fVar212 - fVar235 * fStack_400;
    auVar184._12_4_ = fVar214 - fVar239 * fStack_3fc;
  }
  else {
    auVar184._0_4_ = fVar190 - fVar223 * fVar59;
    auVar184._4_4_ = fVar204 - fVar231 * fStack_404;
    auVar184._8_4_ = fVar212 - fVar235 * fStack_400;
    auVar184._12_4_ = fVar214 - fVar239 * fStack_3fc;
  }
  if ((bVar45 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar286._0_4_) = auVar184._0_4_;
  }
  if ((bVar45 & 2) != 0) {
    uVar14 = extractps(auVar184,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar286._4_4_) = uVar14;
  }
  if ((bVar45 & 4) != 0) {
    uVar14 = extractps(auVar184,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar286._8_4_) = uVar14;
  }
  if ((char)bVar45 < '\0') {
    uVar14 = extractps(auVar184,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar286._12_4_) = uVar14;
  }
  if ((bVar45 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar286._0_4_) = local_408;
  }
  if ((bVar45 & 2) != 0) {
    uVar14 = extractps(auVar256,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar286._4_4_) = uVar14;
  }
  if ((bVar45 & 4) != 0) {
    uVar14 = extractps(auVar256,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar286._8_4_) = uVar14;
  }
  iVar25 = CONCAT31((int3)((uint)iVar22 >> 8),bVar45);
  if ((char)bVar45 < '\0') {
    uVar14 = extractps(auVar256,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar286._12_4_) = uVar14;
    iVar25 = auVar286._12_4_;
  }
LAB_1400706f8:
  auVar87._0_4_ = -(uint)(0.0 < fVar96 && bVar15);
  auVar87._4_4_ = -(uint)(0.0 < fVar97 && bVar16);
  auVar87._8_4_ = -(uint)(0.0 < fVar101 && bVar17);
  auVar87._12_4_ = -(uint)(0.0 < fVar103 && bVar18);
  iVar25 = movmskps(iVar25,auVar87);
  if (iVar25 == 0) {
    return;
  }
  bVar45 = (char)((char)iVar25 << 4) >> 4;
  fVar60 = fVar60 * fVar96;
  fVar92 = fVar92 * fVar97;
  fVar90 = fVar90 * fVar101;
  fVar104 = fVar104 * fVar103;
  auVar171._0_4_ = (float)local_2c8._0_4_ - fVar158 * fVar60;
  auVar171._4_4_ = (float)local_2c8._4_4_ - fVar163 * fVar92;
  auVar171._8_4_ = fStack_2c0 - fVar159 * fVar90;
  auVar171._12_4_ = fStack_2bc - fVar160 * fVar104;
  if ((bVar45 & 1) != 0) {
    *(float *)(param_1 + auVar150._0_4_) = auVar171._0_4_;
  }
  if ((bVar45 & 2) != 0) {
    uVar14 = extractps(auVar171,1);
    *(undefined8 *)(param_1 + auVar150._4_4_) = uVar14;
  }
  if ((bVar45 & 4) != 0) {
    uVar14 = extractps(auVar171,2);
    *(undefined8 *)(param_1 + auVar150._8_4_) = uVar14;
  }
  if ((char)bVar45 < '\0') {
    uVar14 = extractps(auVar171,3);
    *(undefined8 *)(param_1 + auVar150._12_4_) = uVar14;
    auVar133._0_4_ = local_308 - fVar136 * fVar60;
    auVar133._4_4_ = fStack_304 - fVar143 * fVar92;
    auVar133._8_4_ = fStack_300 - fVar141 * fVar90;
    auVar133._12_4_ = fStack_2fc - fVar157 * fVar104;
  }
  else {
    auVar133._0_4_ = local_308 - fVar136 * fVar60;
    auVar133._4_4_ = fStack_304 - fVar143 * fVar92;
    auVar133._8_4_ = fStack_300 - fVar141 * fVar90;
    auVar133._12_4_ = fStack_2fc - fVar157 * fVar104;
  }
  if ((bVar45 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar150._0_4_) = auVar133._0_4_;
  }
  if ((bVar45 & 2) != 0) {
    uVar14 = extractps(auVar133,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar150._4_4_) = uVar14;
  }
  if ((bVar45 & 4) != 0) {
    uVar14 = extractps(auVar133,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar150._8_4_) = uVar14;
  }
  if ((char)bVar45 < '\0') {
    uVar14 = extractps(auVar133,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar150._12_4_) = uVar14;
    auVar88._0_4_ = local_348 - fVar106 * fVar60;
    auVar88._4_4_ = fStack_344 - fVar100 * fVar92;
    auVar88._8_4_ = fStack_340 - fVar117 * fVar90;
    auVar88._12_4_ = fStack_33c - fVar135 * fVar104;
  }
  else {
    auVar88._0_4_ = local_348 - fVar106 * fVar60;
    auVar88._4_4_ = fStack_344 - fVar100 * fVar92;
    auVar88._8_4_ = fStack_340 - fVar117 * fVar90;
    auVar88._12_4_ = fStack_33c - fVar135 * fVar104;
  }
  if ((bVar45 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar150._0_4_) = auVar88._0_4_;
  }
  if ((bVar45 & 2) != 0) {
    uVar14 = extractps(auVar88,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar150._4_4_) = uVar14;
  }
  if ((bVar45 & 4) != 0) {
    uVar14 = extractps(auVar88,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar150._8_4_) = uVar14;
  }
  if ((char)bVar45 < '\0') {
    uVar14 = extractps(auVar88,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar150._12_4_) = uVar14;
  }
  if ((bVar45 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar150._0_4_) = fVar96;
  }
  if ((bVar45 & 2) != 0) {
    uVar14 = extractps(auVar207,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar150._4_4_) = uVar14;
  }
  if ((bVar45 & 4) != 0) {
    uVar14 = extractps(auVar207,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar150._8_4_) = uVar14;
  }
  if ((char)bVar45 < '\0') {
    uVar14 = extractps(auVar207,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar150._12_4_) = uVar14;
  }
  return;
}

// ApplyBendingConstraintsWithMaps_sse4 @ 140070e10

/* WARNING: Removing unreachable block (ram,0x000140072b08) */
/* WARNING: Removing unreachable block (ram,0x000140072c1b) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyBendingConstraintsWithMaps_sse4
               (longlong param_1,longlong param_2,longlong param_3,byte *param_4,byte param_5,
               longlong param_6,longlong param_7,byte param_8,longlong param_9,longlong param_10,
               uint param_11)

{
  int *piVar1;
  float *pfVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  uint *puVar13;
  undefined8 uVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  byte bVar19;
  int iVar20;
  longlong lVar21;
  byte *pbVar22;
  int iVar23;
  longlong lVar24;
  undefined1 (*pauVar25) [16];
  ulonglong uVar26;
  ulonglong uVar27;
  longlong lVar28;
  byte bVar29;
  uint unaff_ESI;
  int iVar30;
  uint uVar31;
  longlong lVar32;
  longlong lVar33;
  ulonglong uVar34;
  longlong lVar35;
  longlong lVar36;
  byte bVar37;
  longlong lVar38;
  longlong lVar39;
  longlong lVar40;
  longlong lVar41;
  longlong lVar42;
  longlong lVar43;
  longlong lVar44;
  longlong lVar45;
  longlong lVar46;
  ulonglong uVar47;
  longlong lVar48;
  longlong lVar49;
  bool bVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  undefined4 uVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar90;
  float fVar91;
  float fVar96;
  float fVar97;
  float fVar101;
  float fVar102;
  undefined1 auVar67 [16];
  float fVar92;
  float fVar98;
  float fVar103;
  float fVar104;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  float fVar93;
  float fVar99;
  float fVar105;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  float fVar94;
  float fVar106;
  undefined1 auVar79 [16];
  float fVar95;
  float fVar100;
  float fVar107;
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
  float fVar121;
  float fVar122;
  float fVar123;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
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
  float fVar124;
  float fVar125;
  float fVar126;
  float fVar127;
  float fVar128;
  uint uVar144;
  float fVar148;
  undefined1 auVar129 [16];
  float fVar145;
  float fVar146;
  float fVar149;
  float fVar150;
  float fVar151;
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  float fVar147;
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  float fVar152;
  float fVar153;
  float fVar164;
  float fVar165;
  float fVar166;
  float fVar167;
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  float fVar168;
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined4 uVar169;
  float fVar170;
  float fVar171;
  float fVar172;
  float fVar178;
  float fVar179;
  float fVar181;
  float fVar182;
  float fVar184;
  float fVar185;
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  float fVar180;
  float fVar183;
  float fVar186;
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  float fVar191;
  float fVar192;
  float fVar199;
  float fVar201;
  float fVar202;
  undefined1 auVar193 [16];
  float fVar200;
  float fVar204;
  float fVar205;
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  float fVar206;
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  float fVar203;
  float fVar207;
  float fVar208;
  undefined1 auVar198 [16];
  float fVar209;
  float fVar215;
  float fVar216;
  float fVar218;
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  float fVar217;
  float fVar219;
  undefined1 auVar214 [16];
  float fVar220;
  float fVar222;
  float fVar223;
  float fVar234;
  float fVar239;
  undefined1 auVar224 [16];
  float fVar221;
  float fVar235;
  float fVar236;
  float fVar240;
  float fVar241;
  float fVar244;
  float fVar245;
  float fVar246;
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar228 [16];
  undefined1 auVar229 [16];
  float fVar237;
  float fVar238;
  float fVar242;
  float fVar243;
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  undefined1 auVar233 [16];
  float fVar247;
  float fVar255;
  float fVar257;
  undefined1 auVar249 [16];
  float fVar248;
  float fVar256;
  float fVar258;
  undefined1 auVar250 [16];
  undefined1 auVar251 [16];
  undefined1 auVar252 [16];
  undefined1 auVar253 [16];
  undefined1 auVar254 [16];
  float fVar259;
  float fVar264;
  float fVar265;
  undefined1 auVar260 [16];
  float fVar266;
  undefined1 auVar261 [16];
  undefined1 auVar262 [16];
  undefined1 auVar263 [16];
  float fVar267;
  float fVar268;
  float fVar271;
  float fVar272;
  float fVar273;
  undefined1 auVar269 [16];
  undefined1 auVar270 [16];
  float fVar274;
  float fVar280;
  float fVar282;
  undefined1 auVar276 [16];
  float fVar275;
  float fVar281;
  float fVar285;
  float fVar286;
  undefined1 auVar277 [16];
  undefined1 auVar278 [16];
  float fVar283;
  float fVar284;
  float fVar287;
  undefined1 auVar279 [16];
  float fVar288;
  float fVar294;
  float fVar295;
  undefined1 auVar289 [16];
  float fVar296;
  undefined1 auVar290 [16];
  undefined1 auVar291 [16];
  undefined1 auVar292 [16];
  undefined1 auVar293 [16];
  float fVar297;
  float fVar298;
  float fVar299;
  float fVar305;
  float fVar308;
  undefined1 auVar300 [16];
  float fVar306;
  float fVar307;
  float fVar309;
  float fVar310;
  float fVar311;
  float fVar312;
  undefined1 auVar301 [16];
  undefined1 auVar302 [16];
  undefined1 auVar303 [16];
  undefined1 auVar304 [16];
  float fVar313;
  float fVar315;
  float fVar321;
  float fVar323;
  undefined1 auVar316 [16];
  undefined1 auVar317 [16];
  float fVar314;
  float fVar322;
  float fVar324;
  float fVar325;
  undefined1 auVar318 [16];
  undefined1 auVar319 [16];
  undefined1 auVar320 [16];
  undefined1 local_4a8 [8];
  float fStack_4a0;
  float fStack_49c;
  float local_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  float local_488;
  float fStack_484;
  float fStack_480;
  float fStack_47c;
  float local_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float local_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  undefined1 local_408 [8];
  float fStack_400;
  float fStack_3fc;
  undefined1 local_3f8 [8];
  float fStack_3f0;
  float fStack_3ec;
  undefined1 local_3e8 [8];
  float fStack_3e0;
  float fStack_3dc;
  float local_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  float local_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  float local_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float local_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  undefined4 local_268;
  undefined4 local_258;
  
  uVar31 = param_11 + 3;
  if (-1 < (int)param_11) {
    uVar31 = param_11;
  }
  if ((int)(uVar31 & 0xfffffffc) < 1) {
    uVar34 = 0;
    if ((int)param_11 < 1) {
      return;
    }
  }
  else {
    uVar47 = 0;
    uVar34 = 0;
    auVar67 = ___xmm_3f8000003f8000003f8000003f800000;
    do {
      auVar279 = ___xmm_3f8000003f8000003f8000003f800000;
      uVar61 = 0;
      if ((param_5 & 1) != 0) {
        uVar61 = *(undefined4 *)(param_6 + uVar34);
      }
      piVar1 = (int *)(param_2 + uVar47 * 4);
      piVar3 = (int *)(param_2 + 0x10 + uVar47 * 4);
      piVar4 = (int *)(param_2 + 0x20 + uVar47 * 4);
      piVar5 = (int *)(param_2 + 0x30 + uVar47 * 4);
      iVar23 = *piVar5;
      iVar20 = piVar5[2];
      uVar169 = 0;
      if ((param_8 & 1) != 0) {
        uVar169 = *(undefined4 *)(param_9 + uVar34);
      }
      lVar45 = (longlong)(piVar1[1] << 4);
      lVar28 = (longlong)(piVar3[1] * 0x10);
      lVar48 = (longlong)(piVar4[1] << 4);
      lVar46 = (longlong)(piVar5[1] << 4);
      auVar316 = insertps(ZEXT416(*(uint *)(param_1 + lVar45)),*(undefined4 *)(param_1 + lVar28),
                          0x10);
      auVar316 = insertps(auVar316,*(undefined4 *)(param_1 + lVar48),0x20);
      auVar317 = insertps(auVar316,*(undefined4 *)(param_1 + lVar46),0x30);
      auVar316 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar45)),
                          *(undefined4 *)(param_1 + 4 + lVar28),0x10);
      auVar316 = insertps(auVar316,*(undefined4 *)(param_1 + 4 + lVar48),0x20);
      auVar300 = insertps(auVar316,*(undefined4 *)(param_1 + 4 + lVar46),0x30);
      auVar316 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar45)),
                          *(undefined4 *)(param_1 + 8 + lVar28),0x10);
      auVar316 = insertps(auVar316,*(undefined4 *)(param_1 + 8 + lVar48),0x20);
      auVar276 = insertps(auVar316,*(undefined4 *)(param_1 + 8 + lVar46),0x30);
      uVar144 = piVar3[2] * 0x10;
      lVar49 = (longlong)(piVar1[2] << 4);
      lVar41 = (longlong)(int)uVar144;
      lVar35 = (longlong)(piVar4[2] << 4);
      lVar38 = (longlong)(iVar20 << 4);
      auVar316 = insertps(ZEXT416(*(uint *)(param_1 + lVar49)),*(undefined4 *)(param_1 + lVar41),
                          0x10);
      auVar316 = insertps(auVar316,*(undefined4 *)(param_1 + lVar35),0x20);
      auVar193 = insertps(auVar316,*(undefined4 *)(param_1 + lVar38),0x30);
      auVar316 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar49)),
                          *(undefined4 *)(param_1 + 4 + lVar41),0x10);
      auVar316 = insertps(auVar316,*(undefined4 *)(param_1 + 4 + lVar35),0x20);
      auVar129 = insertps(auVar316,*(undefined4 *)(param_1 + 4 + lVar38),0x30);
      lVar39 = (longlong)(*piVar1 << 4);
      lVar32 = (longlong)(*piVar3 * 0x10);
      lVar42 = (longlong)(*piVar4 << 4);
      lVar24 = (longlong)(iVar23 << 4);
      auVar316 = insertps(ZEXT416(*(uint *)(param_1 + lVar39)),*(undefined4 *)(param_1 + lVar32),
                          0x10);
      auVar316 = insertps(auVar316,*(undefined4 *)(param_1 + lVar42),0x20);
      auVar316 = insertps(auVar316,*(undefined4 *)(param_1 + lVar24),0x30);
      auVar224 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar39)),
                          *(undefined4 *)(param_1 + 4 + lVar32),0x10);
      auVar224 = insertps(auVar224,*(undefined4 *)(param_1 + 4 + lVar42),0x20);
      auVar224 = insertps(auVar224,*(undefined4 *)(param_1 + 4 + lVar24),0x30);
      auVar249 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar39)),
                          *(undefined4 *)(param_1 + 8 + lVar32),0x10);
      auVar249 = insertps(auVar249,*(undefined4 *)(param_1 + 8 + lVar42),0x20);
      auVar249 = insertps(auVar249,*(undefined4 *)(param_1 + 8 + lVar24),0x30);
      fVar313 = auVar317._0_4_;
      fVar321 = auVar317._4_4_;
      fVar324 = auVar317._12_4_;
      fVar217 = auVar316._0_4_;
      auVar260._0_4_ = fVar313 - fVar217;
      fVar219 = auVar316._4_4_;
      auVar260._4_4_ = fVar321 - fVar219;
      fVar223 = auVar316._8_4_;
      fVar284 = auVar317._8_4_;
      auVar260._8_4_ = fVar284 - fVar223;
      fVar238 = auVar316._12_4_;
      auVar260._12_4_ = fVar324 - fVar238;
      fVar297 = auVar300._0_4_;
      fVar305 = auVar300._4_4_;
      fVar310 = auVar300._12_4_;
      fVar243 = auVar224._0_4_;
      auVar261._0_4_ = fVar297 - fVar243;
      fVar234 = auVar224._4_4_;
      auVar261._4_4_ = fVar305 - fVar234;
      fVar237 = auVar300._8_4_;
      fVar239 = auVar224._8_4_;
      auVar261._8_4_ = fVar237 - fVar239;
      fVar244 = auVar224._12_4_;
      auVar261._12_4_ = fVar310 - fVar244;
      fVar274 = auVar276._0_4_;
      fVar280 = auVar276._4_4_;
      fVar285 = auVar276._12_4_;
      fVar247 = auVar249._0_4_;
      auVar269._0_4_ = fVar274 - fVar247;
      fVar255 = auVar249._4_4_;
      auVar269._4_4_ = fVar280 - fVar255;
      fVar192 = auVar276._8_4_;
      fVar268 = auVar249._8_4_;
      auVar269._8_4_ = fVar192 - fVar268;
      fVar315 = auVar249._12_4_;
      auVar269._12_4_ = fVar285 - fVar315;
      auVar316._0_4_ = auVar260._0_4_ * auVar260._0_4_;
      auVar316._4_4_ = auVar260._4_4_ * auVar260._4_4_;
      auVar316._8_4_ = auVar260._8_4_ * auVar260._8_4_;
      auVar316._12_4_ = auVar260._12_4_ * auVar260._12_4_;
      auVar289._0_4_ =
           auVar269._0_4_ * auVar269._0_4_ + auVar261._0_4_ * auVar261._0_4_ + auVar316._0_4_;
      auVar289._4_4_ =
           auVar269._4_4_ * auVar269._4_4_ + auVar261._4_4_ * auVar261._4_4_ + auVar316._4_4_;
      auVar289._8_4_ =
           auVar269._8_4_ * auVar269._8_4_ + auVar261._8_4_ * auVar261._8_4_ + auVar316._8_4_;
      auVar289._12_4_ =
           auVar269._12_4_ * auVar269._12_4_ + auVar261._12_4_ * auVar261._12_4_ + auVar316._12_4_;
      auVar316 = sqrtps(auVar316,auVar289);
      uVar51 = -(uint)(auVar289._0_4_ <= ___xmm_00800000008000000080000000800000);
      uVar52 = -(uint)(auVar289._4_4_ <= _UNK_1508be494);
      uVar53 = -(uint)(auVar289._8_4_ <= _UNK_1508be498);
      uVar56 = -(uint)(auVar289._12_4_ <= _UNK_1508be49c);
      auVar224._4_4_ = uVar52;
      auVar224._0_4_ = uVar51;
      auVar276 = divps(auVar260,auVar316);
      auVar249 = divps(auVar261,auVar316);
      auVar316 = divps(auVar269,auVar316);
      auVar224._8_4_ = uVar53;
      auVar224._12_4_ = uVar56;
      auVar276 = blendvps(auVar276,auVar67,auVar224);
      fVar62 = (float)(~uVar51 & auVar249._0_4_);
      fVar90 = (float)(~uVar52 & auVar249._4_4_);
      fVar96 = (float)(~uVar53 & auVar249._8_4_);
      fVar101 = (float)(~uVar56 & auVar249._12_4_);
      fVar288 = (float)(~uVar51 & auVar316._0_4_);
      fVar294 = (float)(~uVar52 & auVar316._4_4_);
      fVar295 = (float)(~uVar53 & auVar316._8_4_);
      fVar296 = (float)(~uVar56 & auVar316._12_4_);
      fVar203 = auVar193._0_4_;
      fVar63 = fVar217 - fVar203;
      fVar199 = auVar193._4_4_;
      fVar91 = fVar219 - fVar199;
      fVar287 = auVar193._8_4_;
      fVar97 = fVar223 - fVar287;
      fVar204 = auVar193._12_4_;
      fVar102 = fVar238 - fVar204;
      fVar124 = auVar129._0_4_;
      fVar152 = fVar243 - fVar124;
      fVar153 = auVar129._4_4_;
      fVar164 = fVar234 - fVar153;
      fVar168 = auVar129._8_4_;
      fVar165 = fVar239 - fVar168;
      fVar201 = auVar129._12_4_;
      fVar166 = fVar244 - fVar201;
      fVar170 = fVar313 - fVar203;
      fVar178 = fVar321 - fVar199;
      fVar181 = fVar284 - fVar287;
      fVar184 = fVar324 - fVar204;
      fVar171 = fVar297 - fVar124;
      fVar179 = fVar305 - fVar153;
      fVar182 = fVar237 - fVar168;
      fVar185 = fVar310 - fVar201;
      auVar317._0_4_ = fVar171 * fVar63 - fVar170 * fVar152;
      auVar317._4_4_ = fVar179 * fVar91 - fVar178 * fVar164;
      auVar317._8_4_ = fVar182 * fVar97 - fVar181 * fVar165;
      auVar317._12_4_ = fVar185 * fVar102 - fVar184 * fVar166;
      auVar67 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar49)),
                         *(undefined4 *)(param_1 + 8 + lVar41),0x10);
      auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + 8 + lVar35),0x20);
      auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + 8 + lVar38),0x30);
      fVar66 = auVar67._0_4_;
      fVar125 = fVar247 - fVar66;
      fVar100 = auVar67._4_4_;
      fVar145 = fVar255 - fVar100;
      fVar121 = auVar67._8_4_;
      fVar148 = fVar268 - fVar121;
      fVar127 = auVar67._12_4_;
      fVar150 = fVar315 - fVar127;
      fVar191 = fVar274 - fVar66;
      fVar200 = fVar280 - fVar100;
      fVar202 = fVar192 - fVar121;
      fVar205 = fVar285 - fVar127;
      auVar129._0_4_ = fVar191 * fVar152 - fVar171 * fVar125;
      auVar129._4_4_ = fVar200 * fVar164 - fVar179 * fVar145;
      auVar129._8_4_ = fVar202 * fVar165 - fVar182 * fVar148;
      auVar129._12_4_ = fVar205 * fVar166 - fVar185 * fVar150;
      auVar135._0_4_ = fVar170 * fVar125 - fVar191 * fVar63;
      auVar135._4_4_ = fVar178 * fVar145 - fVar200 * fVar91;
      auVar135._8_4_ = fVar181 * fVar148 - fVar202 * fVar97;
      auVar135._12_4_ = fVar184 * fVar150 - fVar205 * fVar102;
      auVar173._0_4_ =
           auVar317._0_4_ * auVar317._0_4_ +
           auVar135._0_4_ * auVar135._0_4_ + auVar129._0_4_ * auVar129._0_4_;
      auVar173._4_4_ =
           auVar317._4_4_ * auVar317._4_4_ +
           auVar135._4_4_ * auVar135._4_4_ + auVar129._4_4_ * auVar129._4_4_;
      auVar173._8_4_ =
           auVar317._8_4_ * auVar317._8_4_ +
           auVar135._8_4_ * auVar135._8_4_ + auVar129._8_4_ * auVar129._8_4_;
      auVar173._12_4_ =
           auVar317._12_4_ * auVar317._12_4_ +
           auVar135._12_4_ * auVar135._12_4_ + auVar129._12_4_ * auVar129._12_4_;
      auVar224 = sqrtps(auVar173,auVar173);
      uVar51 = -(uint)(auVar224._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77);
      uVar53 = -(uint)(auVar224._4_4_ <= _UNK_1506895d4);
      uVar54 = -(uint)(auVar224._8_4_ <= _UNK_1506895d8);
      uVar57 = -(uint)(auVar224._12_4_ <= _UNK_1506895dc);
      auVar67 = divps(auVar129,auVar224);
      fVar126 = (float)(~uVar51 & auVar67._0_4_);
      fVar146 = (float)(~uVar53 & auVar67._4_4_);
      fVar149 = (float)(~uVar54 & auVar67._8_4_);
      fVar151 = (float)(~uVar57 & auVar67._12_4_);
      auVar67 = divps(auVar135,auVar224);
      fVar64 = (float)(~uVar51 & auVar67._0_4_);
      fVar92 = (float)(~uVar53 & auVar67._4_4_);
      fVar98 = (float)(~uVar54 & auVar67._8_4_);
      fVar103 = (float)(~uVar57 & auVar67._12_4_);
      lVar43 = (longlong)(piVar1[3] << 4);
      lVar40 = (longlong)(piVar3[3] * 0x10);
      lVar33 = (longlong)(piVar4[3] << 4);
      lVar21 = (longlong)(piVar5[3] << 4);
      auVar67 = insertps(ZEXT416(*(uint *)(param_1 + lVar43)),*(undefined4 *)(param_1 + lVar40),0x10
                        );
      auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + lVar33),0x20);
      auVar316 = insertps(auVar67,*(undefined4 *)(param_1 + lVar21),0x30);
      auVar67 = divps(auVar317,auVar224);
      fVar267 = (float)(~uVar51 & auVar67._0_4_);
      fVar271 = (float)(~uVar53 & auVar67._4_4_);
      fVar272 = (float)(~uVar54 & auVar67._8_4_);
      fVar273 = (float)(~uVar57 & auVar67._12_4_);
      auVar67 = insertps(ZEXT416(*(uint *)(param_1 + 4 + lVar43)),
                         *(undefined4 *)(param_1 + 4 + lVar40),0x10);
      auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + 4 + lVar33),0x20);
      auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + 4 + lVar21),0x30);
      fVar207 = auVar316._0_4_;
      fVar314 = fVar313 - fVar207;
      fVar222 = auVar316._4_4_;
      fVar322 = fVar321 - fVar222;
      fVar128 = auVar316._8_4_;
      fVar323 = fVar284 - fVar128;
      fVar167 = auVar316._12_4_;
      fVar325 = fVar324 - fVar167;
      fVar94 = auVar67._0_4_;
      fVar298 = fVar297 - fVar94;
      fVar106 = auVar67._4_4_;
      fVar306 = fVar305 - fVar106;
      fVar122 = auVar67._8_4_;
      fVar308 = fVar237 - fVar122;
      fVar104 = auVar67._12_4_;
      fVar311 = fVar310 - fVar104;
      fVar209 = fVar217 - fVar207;
      fVar215 = fVar219 - fVar222;
      fVar216 = fVar223 - fVar128;
      fVar218 = fVar238 - fVar167;
      fVar220 = fVar243 - fVar94;
      fVar235 = fVar234 - fVar106;
      fVar240 = fVar239 - fVar122;
      fVar245 = fVar244 - fVar104;
      auVar319._0_4_ = fVar314 * fVar220 - fVar209 * fVar298;
      auVar319._4_4_ = fVar322 * fVar235 - fVar215 * fVar306;
      auVar319._8_4_ = fVar323 * fVar240 - fVar216 * fVar308;
      auVar319._12_4_ = fVar325 * fVar245 - fVar218 * fVar311;
      auVar67 = insertps(ZEXT416(*(uint *)(param_1 + 8 + lVar43)),
                         *(undefined4 *)(param_1 + 8 + lVar40),0x10);
      auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + 8 + lVar33),0x20);
      auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + 8 + lVar21),0x30);
      fVar95 = auVar67._0_4_;
      fVar275 = fVar274 - fVar95;
      fVar107 = auVar67._4_4_;
      fVar281 = fVar280 - fVar107;
      fVar123 = auVar67._8_4_;
      fVar282 = fVar192 - fVar123;
      fVar147 = auVar67._12_4_;
      fVar286 = fVar285 - fVar147;
      fVar248 = fVar247 - fVar95;
      fVar256 = fVar255 - fVar107;
      fVar257 = fVar268 - fVar123;
      fVar258 = fVar315 - fVar147;
      auVar249._0_4_ = fVar298 * fVar248 - fVar220 * fVar275;
      auVar249._4_4_ = fVar306 * fVar256 - fVar235 * fVar281;
      auVar249._8_4_ = fVar308 * fVar257 - fVar240 * fVar282;
      auVar249._12_4_ = fVar311 * fVar258 - fVar245 * fVar286;
      auVar210._0_4_ = fVar209 * fVar275 - fVar314 * fVar248;
      auVar210._4_4_ = fVar215 * fVar281 - fVar322 * fVar256;
      auVar210._8_4_ = fVar216 * fVar282 - fVar323 * fVar257;
      auVar210._12_4_ = fVar218 * fVar286 - fVar325 * fVar258;
      auVar194._0_4_ = auVar210._0_4_ * auVar210._0_4_ + auVar249._0_4_ * auVar249._0_4_;
      auVar194._4_4_ = auVar210._4_4_ * auVar210._4_4_ + auVar249._4_4_ * auVar249._4_4_;
      auVar194._8_4_ = auVar210._8_4_ * auVar210._8_4_ + auVar249._8_4_ * auVar249._8_4_;
      auVar194._12_4_ = auVar210._12_4_ * auVar210._12_4_ + auVar249._12_4_ * auVar249._12_4_;
      auVar174._0_4_ = auVar319._0_4_ * auVar319._0_4_ + auVar194._0_4_;
      auVar174._4_4_ = auVar319._4_4_ * auVar319._4_4_ + auVar194._4_4_;
      auVar174._8_4_ = auVar319._8_4_ * auVar319._8_4_ + auVar194._8_4_;
      auVar174._12_4_ = auVar319._12_4_ * auVar319._12_4_ + auVar194._12_4_;
      auVar129 = sqrtps(auVar194,auVar174);
      uVar52 = -(uint)(auVar129._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77);
      uVar56 = -(uint)(auVar129._4_4_ <= _UNK_1506895d4);
      uVar55 = -(uint)(auVar129._8_4_ <= _UNK_1506895d8);
      uVar58 = -(uint)(auVar129._12_4_ <= _UNK_1506895dc);
      auVar67 = divps(auVar249,auVar129);
      fVar172 = (float)(~uVar52 & auVar67._0_4_);
      fVar180 = (float)(~uVar56 & auVar67._4_4_);
      fVar183 = (float)(~uVar55 & auVar67._8_4_);
      fVar186 = (float)(~uVar58 & auVar67._12_4_);
      auVar67 = divps(auVar210,auVar129);
      fVar299 = (float)(~uVar52 & auVar67._0_4_);
      fVar307 = (float)(~uVar56 & auVar67._4_4_);
      fVar309 = (float)(~uVar55 & auVar67._8_4_);
      fVar312 = (float)(~uVar58 & auVar67._12_4_);
      auVar67 = divps(auVar319,auVar129);
      fVar221 = (float)(~uVar52 & auVar67._0_4_);
      fVar236 = (float)(~uVar56 & auVar67._4_4_);
      fVar241 = (float)(~uVar55 & auVar67._8_4_);
      fVar246 = (float)(~uVar58 & auVar67._12_4_);
      auVar195._4_4_ = fVar271 * fVar236 + fVar92 * fVar307 + fVar146 * fVar180;
      auVar195._0_4_ = fVar267 * fVar221 + fVar64 * fVar299 + fVar126 * fVar172;
      auVar195._8_4_ = fVar272 * fVar241 + fVar98 * fVar309 + fVar149 * fVar183;
      auVar195._12_4_ = fVar273 * fVar246 + fVar103 * fVar312 + fVar151 * fVar186;
      fVar259 = auVar276._0_4_;
      fVar264 = auVar276._4_4_;
      fVar265 = auVar276._8_4_;
      fVar266 = auVar276._12_4_;
      auVar212._0_4_ =
           (fVar64 * fVar172 - fVar126 * fVar299) * fVar288 +
           (fVar126 * fVar221 - fVar267 * fVar172) * fVar62 +
           (fVar267 * fVar299 - fVar64 * fVar221) * fVar259;
      auVar212._4_4_ =
           (fVar92 * fVar180 - fVar146 * fVar307) * fVar294 +
           (fVar146 * fVar236 - fVar271 * fVar180) * fVar90 +
           (fVar271 * fVar307 - fVar92 * fVar236) * fVar264;
      auVar212._8_4_ =
           (fVar98 * fVar183 - fVar149 * fVar309) * fVar295 +
           (fVar149 * fVar241 - fVar272 * fVar183) * fVar96 +
           (fVar272 * fVar309 - fVar98 * fVar241) * fVar265;
      auVar212._12_4_ =
           (fVar103 * fVar186 - fVar151 * fVar312) * fVar296 +
           (fVar151 * fVar246 - fVar273 * fVar186) * fVar101 +
           (fVar273 * fVar312 - fVar103 * fVar246) * fVar266;
      auVar67 = maxps(auVar195,___xmm_bf800000bf800000bf800000bf800000);
      auVar249 = minps(auVar67,___xmm_3f8000003f8000003f8000003f800000);
      auVar67 = maxps(auVar212,___xmm_bf800000bf800000bf800000bf800000);
      auVar316 = minps(auVar67,___xmm_3f8000003f8000003f8000003f800000);
      fVar283 = auVar249._0_4_;
      fVar208 = auVar249._4_4_;
      fVar242 = auVar249._8_4_;
      fVar206 = auVar249._12_4_;
      fVar65 = auVar316._0_4_;
      fVar93 = auVar316._4_4_;
      fVar99 = auVar316._8_4_;
      fVar105 = auVar316._12_4_;
      auVar277._0_4_ = (fVar62 * fVar221 - fVar288 * fVar299) * fVar283 - fVar172 * fVar65;
      auVar277._4_4_ = (fVar90 * fVar236 - fVar294 * fVar307) * fVar208 - fVar180 * fVar93;
      auVar277._8_4_ = (fVar96 * fVar241 - fVar295 * fVar309) * fVar242 - fVar183 * fVar99;
      auVar277._12_4_ = (fVar101 * fVar246 - fVar296 * fVar312) * fVar206 - fVar186 * fVar105;
      auVar193._0_4_ = (fVar288 * fVar172 - fVar259 * fVar221) * fVar283 - fVar299 * fVar65;
      auVar193._4_4_ = (fVar294 * fVar180 - fVar264 * fVar236) * fVar208 - fVar307 * fVar93;
      auVar193._8_4_ = (fVar295 * fVar183 - fVar265 * fVar241) * fVar242 - fVar309 * fVar99;
      auVar193._12_4_ = (fVar296 * fVar186 - fVar266 * fVar246) * fVar206 - fVar312 * fVar105;
      auVar229._0_4_ = (fVar259 * fVar299 - fVar62 * fVar172) * fVar283 - fVar221 * fVar65;
      auVar229._4_4_ = (fVar264 * fVar307 - fVar90 * fVar180) * fVar208 - fVar236 * fVar93;
      auVar229._8_4_ = (fVar265 * fVar309 - fVar96 * fVar183) * fVar242 - fVar241 * fVar99;
      auVar229._12_4_ = (fVar266 * fVar312 - fVar101 * fVar186) * fVar206 - fVar246 * fVar105;
      auVar276 = divps(auVar277,auVar224);
      auVar67 = divps(auVar193,auVar224);
      auVar224 = divps(auVar229,auVar224);
      fVar299 = (float)(~uVar51 & auVar276._0_4_);
      fVar307 = (float)(~uVar53 & auVar276._4_4_);
      fVar309 = (float)(~uVar54 & auVar276._8_4_);
      fVar312 = (float)(~uVar57 & auVar276._12_4_);
      fVar221 = (float)(~uVar51 & auVar67._0_4_);
      fVar236 = (float)(~uVar53 & auVar67._4_4_);
      fVar241 = (float)(~uVar54 & auVar67._8_4_);
      fVar246 = (float)(~uVar57 & auVar67._12_4_);
      fVar172 = (float)(~uVar51 & auVar224._0_4_);
      fVar180 = (float)(~uVar53 & auVar224._4_4_);
      fVar183 = (float)(~uVar54 & auVar224._8_4_);
      fVar186 = (float)(~uVar57 & auVar224._12_4_);
      auVar276._0_4_ = (fVar288 * fVar64 - fVar62 * fVar267) * fVar283 - fVar126 * fVar65;
      auVar276._4_4_ = (fVar294 * fVar92 - fVar90 * fVar271) * fVar208 - fVar146 * fVar93;
      auVar276._8_4_ = (fVar295 * fVar98 - fVar96 * fVar272) * fVar242 - fVar149 * fVar99;
      auVar276._12_4_ = (fVar296 * fVar103 - fVar101 * fVar273) * fVar206 - fVar151 * fVar105;
      auVar301._0_4_ = (fVar259 * fVar267 - fVar288 * fVar126) * fVar283 - fVar64 * fVar65;
      auVar301._4_4_ = (fVar264 * fVar271 - fVar294 * fVar146) * fVar208 - fVar92 * fVar93;
      auVar301._8_4_ = (fVar265 * fVar272 - fVar295 * fVar149) * fVar242 - fVar98 * fVar99;
      auVar301._12_4_ = (fVar266 * fVar273 - fVar296 * fVar151) * fVar206 - fVar103 * fVar105;
      auVar251._0_4_ = (fVar62 * fVar126 - fVar259 * fVar64) * fVar283 - fVar267 * fVar65;
      auVar251._4_4_ = (fVar90 * fVar146 - fVar264 * fVar92) * fVar208 - fVar271 * fVar93;
      auVar251._8_4_ = (fVar96 * fVar149 - fVar265 * fVar98) * fVar242 - fVar272 * fVar99;
      auVar251._12_4_ = (fVar101 * fVar151 - fVar266 * fVar103) * fVar206 - fVar273 * fVar105;
      auVar67 = divps(auVar276,auVar129);
      auVar193 = divps(auVar301,auVar129);
      auVar224 = divps(auVar251,auVar129);
      fVar259 = (float)(~uVar52 & auVar67._0_4_);
      fVar264 = (float)(~uVar56 & auVar67._4_4_);
      fVar265 = (float)(~uVar55 & auVar67._8_4_);
      fVar266 = (float)(~uVar58 & auVar67._12_4_);
      fVar267 = (float)(~uVar52 & auVar193._0_4_);
      fVar271 = (float)(~uVar56 & auVar193._4_4_);
      fVar272 = (float)(~uVar55 & auVar193._8_4_);
      fVar273 = (float)(~uVar58 & auVar193._12_4_);
      fVar96 = (float)(~uVar52 & auVar224._0_4_);
      fVar98 = (float)(~uVar56 & auVar224._4_4_);
      fVar101 = (float)(~uVar55 & auVar224._8_4_);
      fVar103 = (float)(~uVar58 & auVar224._12_4_);
      fVar126 = fVar170 * fVar221 - fVar171 * fVar299;
      fVar146 = fVar178 * fVar236 - fVar179 * fVar307;
      fVar149 = fVar181 * fVar241 - fVar182 * fVar309;
      fVar151 = fVar184 * fVar246 - fVar185 * fVar312;
      fVar171 = fVar171 * fVar172 - fVar191 * fVar221;
      fVar179 = fVar179 * fVar180 - fVar200 * fVar236;
      fVar182 = fVar182 * fVar183 - fVar202 * fVar241;
      fVar185 = fVar185 * fVar186 - fVar205 * fVar246;
      fVar191 = fVar191 * fVar299 - fVar170 * fVar172;
      fVar200 = fVar200 * fVar307 - fVar178 * fVar180;
      fVar202 = fVar202 * fVar309 - fVar181 * fVar183;
      fVar205 = fVar205 * fVar312 - fVar184 * fVar186;
      fVar62 = fVar152 * fVar299 - fVar221 * fVar63;
      fVar64 = fVar164 * fVar307 - fVar236 * fVar91;
      fVar90 = fVar165 * fVar309 - fVar241 * fVar97;
      fVar92 = fVar166 * fVar312 - fVar246 * fVar102;
      fVar170 = fVar125 * fVar221 - fVar172 * fVar152;
      fVar178 = fVar145 * fVar236 - fVar180 * fVar164;
      fVar181 = fVar148 * fVar241 - fVar183 * fVar165;
      fVar184 = fVar150 * fVar246 - fVar186 * fVar166;
      fVar63 = fVar63 * fVar172 - fVar299 * fVar125;
      fVar91 = fVar91 * fVar180 - fVar307 * fVar145;
      fVar97 = fVar97 * fVar183 - fVar309 * fVar148;
      fVar102 = fVar102 * fVar186 - fVar312 * fVar150;
      fVar152 = fVar209 * fVar267 - fVar220 * fVar259;
      fVar164 = fVar215 * fVar271 - fVar235 * fVar264;
      fVar165 = fVar216 * fVar272 - fVar240 * fVar265;
      fVar166 = fVar218 * fVar273 - fVar245 * fVar266;
      fVar220 = fVar220 * fVar96 - fVar248 * fVar267;
      fVar221 = fVar235 * fVar98 - fVar256 * fVar271;
      fVar235 = fVar240 * fVar101 - fVar257 * fVar272;
      fVar236 = fVar245 * fVar103 - fVar258 * fVar273;
      fVar172 = fVar248 * fVar259 - fVar209 * fVar96;
      fVar180 = fVar256 * fVar264 - fVar215 * fVar98;
      fVar183 = fVar257 * fVar265 - fVar216 * fVar101;
      fVar186 = fVar258 * fVar266 - fVar218 * fVar103;
      fVar248 = fVar298 * fVar259 - fVar267 * fVar314;
      fVar299 = fVar306 * fVar264 - fVar271 * fVar322;
      fVar256 = fVar308 * fVar265 - fVar272 * fVar323;
      fVar307 = fVar311 * fVar266 - fVar273 * fVar325;
      fVar145 = fVar275 * fVar267 - fVar96 * fVar298;
      fVar148 = fVar281 * fVar271 - fVar98 * fVar306;
      fVar150 = fVar282 * fVar272 - fVar101 * fVar308;
      fVar246 = fVar286 * fVar273 - fVar103 * fVar311;
      fVar96 = fVar314 * fVar96 - fVar259 * fVar275;
      fVar98 = fVar322 * fVar98 - fVar264 * fVar281;
      fVar125 = fVar323 * fVar101 - fVar265 * fVar282;
      fVar103 = fVar325 * fVar103 - fVar266 * fVar286;
      fVar209 = fVar145 + fVar171;
      fVar215 = fVar148 + fVar179;
      fVar216 = fVar150 + fVar182;
      fVar218 = fVar246 + fVar185;
      auVar67._4_4_ = _UNK_150651574;
      auVar67._0_4_ = __xmm_80000000800000008000000080000000;
      auVar67._8_4_ = _UNK_150651578;
      auVar67._12_4_ = _UNK_15065157c;
      fVar240 = (float)((uint)fVar145 ^ __xmm_80000000800000008000000080000000) - fVar220;
      fVar241 = (float)((uint)fVar148 ^ _UNK_150651574) - fVar221;
      fVar245 = (float)((uint)fVar150 ^ _UNK_150651578) - fVar235;
      fVar246 = (float)((uint)fVar246 ^ _UNK_15065157c) - fVar236;
      fVar220 = fVar220 + fVar170;
      fVar221 = fVar221 + fVar178;
      fVar235 = fVar235 + fVar181;
      fVar236 = fVar236 + fVar184;
      fVar170 = (float)((uint)fVar171 ^ __xmm_80000000800000008000000080000000) - fVar170;
      fVar178 = (float)((uint)fVar179 ^ _UNK_150651574) - fVar178;
      fVar181 = (float)((uint)fVar182 ^ _UNK_150651578) - fVar181;
      fVar184 = (float)((uint)fVar185 ^ _UNK_15065157c) - fVar184;
      fVar171 = fVar96 + fVar191;
      fVar179 = fVar98 + fVar200;
      fVar182 = fVar125 + fVar202;
      fVar185 = fVar103 + fVar205;
      fVar96 = (float)((uint)fVar96 ^ __xmm_80000000800000008000000080000000) - fVar172;
      fVar101 = (float)((uint)fVar98 ^ _UNK_150651574) - fVar180;
      fVar125 = (float)((uint)fVar125 ^ _UNK_150651578) - fVar183;
      fVar148 = (float)((uint)fVar103 ^ _UNK_15065157c) - fVar186;
      fVar172 = fVar172 + fVar63;
      fVar180 = fVar180 + fVar91;
      fVar183 = fVar183 + fVar97;
      fVar186 = fVar186 + fVar102;
      fVar63 = (float)((uint)fVar191 ^ __xmm_80000000800000008000000080000000) - fVar63;
      fVar91 = (float)((uint)fVar200 ^ _UNK_150651574) - fVar91;
      fVar97 = (float)((uint)fVar202 ^ _UNK_150651578) - fVar97;
      fVar102 = (float)((uint)fVar205 ^ _UNK_15065157c) - fVar102;
      fVar98 = fVar248 + fVar126;
      fVar103 = fVar299 + fVar146;
      fVar145 = fVar256 + fVar149;
      fVar150 = fVar307 + fVar151;
      fVar191 = (float)((uint)fVar248 ^ __xmm_80000000800000008000000080000000) - fVar152;
      fVar200 = (float)((uint)fVar299 ^ _UNK_150651574) - fVar164;
      fVar202 = (float)((uint)fVar256 ^ _UNK_150651578) - fVar165;
      fVar205 = (float)((uint)fVar307 ^ _UNK_15065157c) - fVar166;
      fVar152 = fVar152 + fVar62;
      fVar164 = fVar164 + fVar64;
      fVar165 = fVar165 + fVar90;
      fVar166 = fVar166 + fVar92;
      fVar62 = (float)((uint)fVar126 ^ __xmm_80000000800000008000000080000000) - fVar62;
      fVar64 = (float)((uint)fVar146 ^ _UNK_150651574) - fVar64;
      fVar90 = (float)((uint)fVar149 ^ _UNK_150651578) - fVar90;
      fVar92 = (float)((uint)fVar151 ^ _UNK_15065157c) - fVar92;
      uVar51 = *(uint *)(param_1 + 0xc + lVar45);
      uVar52 = *(uint *)(param_1 + 0xc + lVar28);
      auVar224 = insertps(ZEXT416(uVar51),ZEXT416(uVar52),0x10);
      uVar53 = *(uint *)(param_1 + 0xc + lVar48);
      auVar224 = insertps(auVar224,ZEXT416(uVar53),0x20);
      uVar56 = *(uint *)(param_1 + 0xc + lVar46);
      auVar129 = insertps(auVar224,ZEXT416(uVar56),0x30);
      uVar54 = *(uint *)(param_1 + 0xc + lVar49);
      uVar55 = *(uint *)(param_1 + 0xc + lVar41);
      auVar224 = insertps(ZEXT416(uVar54),ZEXT416(uVar55),0x10);
      uVar57 = *(uint *)(param_1 + 0xc + lVar35);
      auVar224 = insertps(auVar224,ZEXT416(uVar57),0x20);
      uVar58 = *(uint *)(param_1 + 0xc + lVar38);
      auVar193 = insertps(auVar224,ZEXT416(uVar58),0x30);
      uVar59 = *(uint *)(param_1 + 0xc + lVar39);
      uVar60 = *(uint *)(param_1 + 0xc + lVar32);
      auVar224 = insertps(ZEXT416(uVar59),ZEXT416(uVar60),0x10);
      uVar6 = *(uint *)(param_1 + 0xc + lVar42);
      auVar224 = insertps(auVar224,ZEXT416(uVar6),0x20);
      uVar7 = *(uint *)(param_1 + 0xc + lVar24);
      auVar224 = insertps(auVar224,ZEXT416(uVar7),0x30);
      uVar8 = *(uint *)(param_1 + 0xc + lVar43);
      uVar9 = *(uint *)(param_1 + 0xc + lVar40);
      auVar276 = insertps(ZEXT416(uVar8),ZEXT416(uVar9),0x10);
      uVar10 = *(uint *)(param_1 + 0xc + lVar33);
      auVar276 = insertps(auVar276,ZEXT416(uVar10),0x20);
      uVar11 = *(uint *)(param_1 + 0xc + lVar21);
      auVar276 = insertps(auVar276,ZEXT416(uVar11),0x30);
      auVar316 = divps(auVar316,auVar249);
      auVar318._0_4_ = (uint)auVar316._0_4_ ^ __xmm_80000000800000008000000080000000;
      auVar318._4_4_ = (uint)auVar316._4_4_ ^ _UNK_150651574;
      auVar318._8_4_ = (uint)auVar316._8_4_ ^ _UNK_150651578;
      auVar318._12_4_ = (uint)auVar316._12_4_ ^ _UNK_15065157c;
      auVar249 = maxps(auVar318,auVar316);
      auVar300._4_4_ = -(uint)(__xmm_3f8000003f8000003f8000003f800000._4_4_ < auVar249._4_4_);
      auVar300._0_4_ = -(uint)((float)__xmm_3f8000003f8000003f8000003f800000 < auVar249._0_4_);
      auVar300._8_4_ = -(uint)(__xmm_3f8000003f8000003f8000003f800000._8_4_ < auVar249._8_4_);
      auVar300._12_4_ = -(uint)(__xmm_3f8000003f8000003f8000003f800000._12_4_ < auVar249._12_4_);
      iVar30 = movmskps(piVar4[3] << 4,auVar300);
      if (iVar30 != 0) {
        auVar67 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar249);
      }
      auVar67 = blendvps(auVar249,auVar67,auVar300);
      fVar248 = auVar67._0_4_;
      fVar299 = auVar67._4_4_;
      fVar256 = auVar67._8_4_;
      fVar307 = auVar67._12_4_;
      fVar126 = fVar248 * fVar248;
      fVar146 = fVar299 * fVar299;
      fVar149 = fVar256 * fVar256;
      fVar151 = fVar307 * fVar307;
      auVar225._0_4_ =
           (((((((fVar126 * ___xmm_bb9918b7bb9918b7bb9918b7bb9918b7 +
                 ___xmm_3cc6061b3cc6061b3cc6061b3cc6061b) * fVar126 +
                ___xmm_bd732a49bd732a49bd732a49bd732a49) * fVar126 +
               ___xmm_3dcadb2a3dcadb2a3dcadb2a3dcadb2a) * fVar126 +
              ___xmm_be0f8549be0f8549be0f8549be0f8549) * fVar126 +
             ___xmm_3e4c7b543e4c7b543e4c7b543e4c7b54) * fVar126 +
            ___xmm_beaaa8cfbeaaa8cfbeaaa8cfbeaaa8cf) * fVar126 +
           ___xmm_3f7ffffe3f7ffffe3f7ffffe3f7ffffe) * fVar248;
      auVar225._4_4_ =
           (((((((fVar146 * _UNK_150b51114 + _UNK_150b51124) * fVar146 + _UNK_150b51134) * fVar146 +
               _UNK_150b51144) * fVar146 + _UNK_150b51154) * fVar146 + _UNK_150b51164) * fVar146 +
            _UNK_150b51174) * fVar146 + _UNK_150b51184) * fVar299;
      auVar225._8_4_ =
           (((((((fVar149 * _UNK_150b51118 + _UNK_150b51128) * fVar149 + _UNK_150b51138) * fVar149 +
               _UNK_150b51148) * fVar149 + _UNK_150b51158) * fVar149 + _UNK_150b51168) * fVar149 +
            _UNK_150b51178) * fVar149 + _UNK_150b51188) * fVar256;
      auVar225._12_4_ =
           (((((((fVar151 * _UNK_150b5111c + _UNK_150b5112c) * fVar151 + _UNK_150b5113c) * fVar151 +
               _UNK_150b5114c) * fVar151 + _UNK_150b5115c) * fVar151 + _UNK_150b5116c) * fVar151 +
            _UNK_150b5117c) * fVar151 + _UNK_150b5118c) * fVar307;
      auVar290._0_4_ = ___xmm_3fc90fdb3fc90fdb3fc90fdb3fc90fdb - auVar225._0_4_;
      auVar290._4_4_ = _UNK_150b51194 - auVar225._4_4_;
      auVar290._8_4_ = _UNK_150b51198 - auVar225._8_4_;
      auVar290._12_4_ = _UNK_150b5119c - auVar225._12_4_;
      auVar67 = blendvps(auVar225,auVar290,auVar300);
      auVar68._4_4_ = -(uint)(auVar316._4_4_ < 0.0);
      auVar68._0_4_ = -(uint)(auVar316._0_4_ < 0.0);
      auVar291._0_4_ = auVar67._0_4_ ^ __xmm_80000000800000008000000080000000;
      auVar291._4_4_ = auVar67._4_4_ ^ _UNK_150651574;
      auVar291._8_4_ = auVar67._8_4_ ^ _UNK_150651578;
      auVar291._12_4_ = auVar67._12_4_ ^ _UNK_15065157c;
      auVar68._8_4_ = -(uint)(auVar316._8_4_ < 0.0);
      auVar68._12_4_ = -(uint)(auVar316._12_4_ < 0.0);
      auVar249 = blendvps(auVar67,auVar291,auVar68);
      auVar69._4_4_ = -(uint)(fVar93 < 0.0);
      auVar69._0_4_ = -(uint)(fVar65 < 0.0);
      auVar69._8_4_ = -(uint)(fVar99 < 0.0);
      auVar69._12_4_ = -(uint)(fVar105 < 0.0);
      auVar316 = blendvps(___xmm_40490fdb40490fdb40490fdb40490fdb,
                          ___xmm_c0490fdbc0490fdbc0490fdbc0490fdb,auVar69);
      fVar126 = auVar224._0_4_;
      fVar146 = auVar224._4_4_;
      fVar149 = auVar224._8_4_;
      fVar151 = auVar224._12_4_;
      fVar248 = auVar129._0_4_;
      fVar299 = auVar129._4_4_;
      fVar256 = auVar129._8_4_;
      fVar307 = auVar129._12_4_;
      auVar226._0_4_ =
           (fVar152 * fVar152 + fVar172 * fVar172 + fVar220 * fVar220) * fVar248 +
           (fVar98 * fVar98 + fVar171 * fVar171 + fVar209 * fVar209) * fVar126;
      auVar226._4_4_ =
           (fVar164 * fVar164 + fVar180 * fVar180 + fVar221 * fVar221) * fVar299 +
           (fVar103 * fVar103 + fVar179 * fVar179 + fVar215 * fVar215) * fVar146;
      auVar226._8_4_ =
           (fVar165 * fVar165 + fVar183 * fVar183 + fVar235 * fVar235) * fVar256 +
           (fVar145 * fVar145 + fVar182 * fVar182 + fVar216 * fVar216) * fVar149;
      auVar226._12_4_ =
           (fVar166 * fVar166 + fVar186 * fVar186 + fVar236 * fVar236) * fVar307 +
           (fVar150 * fVar150 + fVar185 * fVar185 + fVar218 * fVar218) * fVar151;
      auVar70._0_4_ = fVar170 * fVar170;
      auVar70._4_4_ = fVar178 * fVar178;
      auVar70._8_4_ = fVar181 * fVar181;
      auVar70._12_4_ = fVar184 * fVar184;
      fVar257 = auVar193._0_4_;
      fVar309 = auVar193._4_4_;
      fVar258 = auVar193._8_4_;
      fVar312 = auVar193._12_4_;
      auVar67 = pmovsxbd(auVar70,uVar61);
      auVar71._0_4_ = auVar67._0_4_ << 2;
      auVar71._4_4_ = auVar67._4_4_ * 4;
      auVar71._8_4_ = auVar67._8_4_ << 2;
      auVar71._12_4_ = auVar67._12_4_ << 2;
      auVar67 = insertps(ZEXT416(*(uint *)(param_7 + auVar71._0_4_)),
                         *(undefined4 *)(param_7 + auVar71._4_4_),0x10);
      auVar67 = insertps(auVar67,*(undefined4 *)(param_7 + auVar71._8_4_),0x20);
      auVar129 = insertps(auVar67,*(undefined4 *)(param_7 + auVar71._12_4_),0x30);
      auVar67 = pmovsxbd(auVar71,uVar169);
      auVar224 = insertps(ZEXT416(*(uint *)(param_10 + (auVar67._0_4_ << 2))),
                          *(undefined4 *)(param_10 + auVar67._4_4_ * 4),0x10);
      auVar224 = insertps(auVar224,*(undefined4 *)(param_10 + (auVar67._8_4_ << 2)),0x20);
      auVar67 = insertps(auVar224,*(undefined4 *)(param_10 + (auVar67._12_4_ << 2)),0x30);
      auVar224 = pmovzxbd(auVar226,ZEXT416(*(uint *)(param_4 + uVar34)) &
                                   ___xmm_00000000000000000000000001010101);
      auVar72._4_4_ = -auVar224._4_4_;
      auVar72._0_4_ = -auVar224._0_4_;
      auVar72._8_4_ = -auVar224._8_4_;
      auVar72._12_4_ = SUB124(SUB1612((undefined1  [16])0x0,4),8) - auVar224._12_4_;
      auVar67 = blendvps(auVar129,auVar67,auVar72);
      fVar259 = auVar276._0_4_;
      fVar264 = auVar276._4_4_;
      fVar265 = auVar276._8_4_;
      fVar266 = auVar276._12_4_;
      auVar73._0_4_ =
           (fVar191 * fVar191 + fVar96 * fVar96 + fVar240 * fVar240) * fVar259 +
           (fVar62 * fVar62 + fVar63 * fVar63 + auVar70._0_4_) * fVar257 + auVar226._0_4_;
      auVar73._4_4_ =
           (fVar200 * fVar200 + fVar101 * fVar101 + fVar241 * fVar241) * fVar264 +
           (fVar64 * fVar64 + fVar91 * fVar91 + auVar70._4_4_) * fVar309 + auVar226._4_4_;
      auVar73._8_4_ =
           (fVar202 * fVar202 + fVar125 * fVar125 + fVar245 * fVar245) * fVar265 +
           (fVar90 * fVar90 + fVar97 * fVar97 + auVar70._8_4_) * fVar258 + auVar226._8_4_;
      auVar73._12_4_ =
           (fVar205 * fVar205 + fVar148 * fVar148 + fVar246 * fVar246) * fVar266 +
           (fVar92 * fVar92 + fVar102 * fVar102 + auVar70._12_4_) * fVar312 + auVar226._12_4_;
      pfVar2 = (float *)(param_3 + (uVar47 & 0xffffffff));
      auVar292._0_4_ =
           auVar67._0_4_ *
           (((float)(auVar316._0_4_ & -(uint)(fVar283 < 0.0)) + auVar249._0_4_) - *pfVar2);
      auVar292._4_4_ =
           auVar67._4_4_ *
           (((float)(auVar316._4_4_ & -(uint)(fVar208 < 0.0)) + auVar249._4_4_) - pfVar2[1]);
      auVar292._8_4_ =
           auVar67._8_4_ *
           (((float)(auVar316._8_4_ & -(uint)(fVar242 < 0.0)) + auVar249._8_4_) - pfVar2[2]);
      auVar292._12_4_ =
           auVar67._12_4_ *
           (((float)(auVar316._12_4_ & -(uint)(fVar206 < 0.0)) + auVar249._12_4_) - pfVar2[3]);
      auVar67 = maxps(auVar292,___xmm_bf490fdbbf490fdbbf490fdbbf490fdb);
      auVar67 = minps(auVar67,___xmm_3f490fdb3f490fdb3f490fdb3f490fdb);
      auVar67 = divps(auVar67,auVar73);
      fVar65 = (float)(-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 < auVar73._0_4_) &
                      auVar67._0_4_);
      fVar93 = (float)(-(uint)(_UNK_1506895d4 < auVar73._4_4_) & auVar67._4_4_);
      fVar99 = (float)(-(uint)(_UNK_1506895d8 < auVar73._8_4_) & auVar67._8_4_);
      fVar105 = (float)(-(uint)(_UNK_1506895dc < auVar73._12_4_) & auVar67._12_4_);
      auVar108._4_4_ = -(uint)(0.0 < fVar146);
      auVar108._0_4_ = -(uint)(0.0 < fVar126);
      auVar108._8_4_ = -(uint)(0.0 < fVar149);
      auVar108._12_4_ = -(uint)(0.0 < fVar151);
      iVar30 = movmskps((int)param_3,auVar108);
      unaff_ESI = 0;
      if (iVar30 != 0) {
        bVar29 = (char)((char)iVar30 << 4) >> 4;
        unaff_ESI = CONCAT31((int3)((uint)iVar30 >> 8),bVar29);
        fVar126 = fVar126 * fVar65;
        fVar146 = fVar146 * fVar93;
        fVar149 = fVar149 * fVar99;
        fVar151 = fVar151 * fVar105;
        auVar227._0_4_ = fVar217 - fVar209 * fVar126;
        auVar227._4_4_ = fVar219 - fVar215 * fVar146;
        auVar227._8_4_ = fVar223 - fVar216 * fVar149;
        auVar227._12_4_ = fVar238 - fVar218 * fVar151;
        if ((bVar29 & 1) != 0) {
          *(float *)(param_1 + lVar39) = auVar227._0_4_;
        }
        if ((bVar29 & 2) == 0) {
          if ((bVar29 & 4) != 0) goto LAB_140072032;
LAB_140071c5e:
          if ((char)bVar29 < '\0') goto LAB_140072043;
LAB_140071c67:
          auVar130._0_4_ = fVar243 - fVar171 * fVar126;
          auVar130._4_4_ = fVar234 - fVar179 * fVar146;
          auVar130._8_4_ = fVar239 - fVar182 * fVar149;
          auVar130._12_4_ = fVar244 - fVar185 * fVar151;
          if ((bVar29 & 1) != 0) goto LAB_14007205d;
LAB_140071c79:
          if ((bVar29 & 2) != 0) goto LAB_140072072;
LAB_140071c87:
          if ((bVar29 & 4) != 0) goto LAB_140072085;
LAB_140071c91:
          if ((char)bVar29 < '\0') goto LAB_140072096;
LAB_140071c9a:
          auVar109._0_4_ = fVar247 - fVar98 * fVar126;
          auVar109._4_4_ = fVar255 - fVar103 * fVar146;
          auVar109._8_4_ = fVar268 - fVar145 * fVar149;
          auVar109._12_4_ = fVar315 - fVar150 * fVar151;
        }
        else {
          uVar14 = extractps(auVar227,1);
          *(undefined8 *)(param_1 + lVar32) = uVar14;
          if ((bVar29 & 4) == 0) goto LAB_140071c5e;
LAB_140072032:
          uVar14 = extractps(auVar227,2);
          *(undefined8 *)(param_1 + lVar42) = uVar14;
          if (-1 < (char)bVar29) goto LAB_140071c67;
LAB_140072043:
          uVar14 = extractps(auVar227,3);
          *(undefined8 *)(param_1 + lVar24) = uVar14;
          auVar130._0_4_ = fVar243 - fVar171 * fVar126;
          auVar130._4_4_ = fVar234 - fVar179 * fVar146;
          auVar130._8_4_ = fVar239 - fVar182 * fVar149;
          auVar130._12_4_ = fVar244 - fVar185 * fVar151;
          if ((bVar29 & 1) == 0) goto LAB_140071c79;
LAB_14007205d:
          *(int *)(param_1 + 4 + lVar39) = auVar130._0_4_;
          if ((bVar29 & 2) == 0) goto LAB_140071c87;
LAB_140072072:
          uVar14 = extractps(auVar130,1);
          *(undefined8 *)(param_1 + 4 + lVar32) = uVar14;
          if ((bVar29 & 4) == 0) goto LAB_140071c91;
LAB_140072085:
          uVar14 = extractps(auVar130,2);
          *(undefined8 *)(param_1 + 4 + lVar42) = uVar14;
          if (-1 < (char)bVar29) goto LAB_140071c9a;
LAB_140072096:
          uVar14 = extractps(auVar130,3);
          *(undefined8 *)(param_1 + 4 + lVar24) = uVar14;
          auVar109._0_4_ = fVar247 - fVar98 * fVar126;
          auVar109._4_4_ = fVar255 - fVar103 * fVar146;
          auVar109._8_4_ = fVar268 - fVar145 * fVar149;
          auVar109._12_4_ = fVar315 - fVar150 * fVar151;
        }
        if ((bVar29 & 1) != 0) {
          *(int *)(param_1 + 8 + lVar39) = auVar109._0_4_;
        }
        if ((bVar29 & 2) != 0) {
          uVar14 = extractps(auVar109,1);
          *(undefined8 *)(param_1 + 8 + lVar32) = uVar14;
        }
        if ((bVar29 & 4) != 0) {
          uVar14 = extractps(auVar109,2);
          *(undefined8 *)(param_1 + 8 + lVar42) = uVar14;
        }
        if ((char)bVar29 < '\0') {
          uVar14 = extractps(auVar109,3);
          *(undefined8 *)(param_1 + 8 + lVar24) = uVar14;
        }
        if ((bVar29 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar39) = uVar59;
        }
        if ((bVar29 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar32) = uVar60;
        }
        if ((bVar29 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar42) = uVar6;
        }
        if ((char)bVar29 < '\0') {
          *(uint *)(param_1 + 0xc + lVar24) = uVar7;
        }
      }
      auVar110._4_4_ = -(uint)(0.0 < fVar299);
      auVar110._0_4_ = -(uint)(0.0 < fVar248);
      auVar110._8_4_ = -(uint)(0.0 < fVar256);
      auVar110._12_4_ = -(uint)(0.0 < fVar307);
      iVar23 = movmskps(iVar23 << 4,auVar110);
      lVar24 = param_10;
      if (iVar23 != 0) {
        bVar29 = (char)((char)iVar23 << 4) >> 4;
        fVar248 = fVar248 * fVar65;
        fVar299 = fVar299 * fVar93;
        fVar256 = fVar256 * fVar99;
        fVar307 = fVar307 * fVar105;
        auVar175._0_4_ = fVar313 - fVar220 * fVar248;
        auVar175._4_4_ = fVar321 - fVar221 * fVar299;
        auVar175._8_4_ = fVar284 - fVar235 * fVar256;
        auVar175._12_4_ = fVar324 - fVar236 * fVar307;
        if ((bVar29 & 1) != 0) {
          *(float *)(param_1 + lVar45) = auVar175._0_4_;
        }
        unaff_ESI = bVar29 & 0xf;
        if ((bVar29 & 2) != 0) {
          uVar14 = extractps(auVar175,1);
          *(undefined8 *)(param_1 + lVar28) = uVar14;
        }
        if ((bVar29 & 4) != 0) {
          uVar14 = extractps(auVar175,2);
          *(undefined8 *)(param_1 + lVar48) = uVar14;
        }
        if ((char)bVar29 < '\0') {
          uVar14 = extractps(auVar175,3);
          *(undefined8 *)(param_1 + lVar46) = uVar14;
          lVar24 = lVar46;
        }
        auVar131._0_4_ = fVar297 - fVar172 * fVar248;
        auVar131._4_4_ = fVar305 - fVar180 * fVar299;
        auVar131._8_4_ = fVar237 - fVar183 * fVar256;
        auVar131._12_4_ = fVar310 - fVar186 * fVar307;
        if ((bVar29 & 1) != 0) {
          *(float *)(param_1 + 4 + lVar45) = auVar131._0_4_;
        }
        if ((bVar29 & 2) != 0) {
          uVar14 = extractps(auVar131,1);
          *(undefined8 *)(param_1 + 4 + lVar28) = uVar14;
        }
        if ((bVar29 & 4) != 0) {
          uVar14 = extractps(auVar131,2);
          *(undefined8 *)(param_1 + 4 + lVar48) = uVar14;
        }
        if ((char)bVar29 < '\0') {
          uVar14 = extractps(auVar131,3);
          *(undefined8 *)(param_1 + 4 + lVar46) = uVar14;
          lVar24 = lVar46;
        }
        auVar111._0_4_ = fVar274 - fVar152 * fVar248;
        auVar111._4_4_ = fVar280 - fVar164 * fVar299;
        auVar111._8_4_ = fVar192 - fVar165 * fVar256;
        auVar111._12_4_ = fVar285 - fVar166 * fVar307;
        if ((bVar29 & 1) != 0) {
          *(float *)(param_1 + 8 + lVar45) = auVar111._0_4_;
        }
        if ((bVar29 & 2) != 0) {
          uVar14 = extractps(auVar111,1);
          *(undefined8 *)(param_1 + 8 + lVar28) = uVar14;
        }
        if ((bVar29 & 4) != 0) {
          uVar14 = extractps(auVar111,2);
          *(undefined8 *)(param_1 + 8 + lVar48) = uVar14;
        }
        if ((char)bVar29 < '\0') {
          uVar14 = extractps(auVar111,3);
          *(undefined8 *)(param_1 + 8 + lVar46) = uVar14;
          lVar24 = lVar46;
        }
        if ((bVar29 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar45) = uVar51;
        }
        if ((bVar29 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar28) = uVar52;
        }
        if ((bVar29 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar48) = uVar53;
        }
        if ((char)bVar29 < '\0') {
          *(uint *)(param_1 + 0xc + lVar46) = uVar56;
          lVar24 = lVar46;
        }
      }
      auVar112._4_4_ = -(uint)(0.0 < fVar309);
      auVar112._0_4_ = -(uint)(0.0 < fVar257);
      auVar112._8_4_ = -(uint)(0.0 < fVar258);
      auVar112._12_4_ = -(uint)(0.0 < fVar312);
      iVar30 = movmskps((int)lVar24,auVar112);
      iVar23 = 0;
      if (iVar30 != 0) {
        bVar29 = (char)((char)iVar30 << 4) >> 4;
        fVar257 = fVar257 * fVar65;
        fVar309 = fVar309 * fVar93;
        fVar258 = fVar258 * fVar99;
        fVar312 = fVar312 * fVar105;
        auVar132._0_4_ = fVar203 - fVar170 * fVar257;
        auVar132._4_4_ = fVar199 - fVar178 * fVar309;
        auVar132._8_4_ = fVar287 - fVar181 * fVar258;
        auVar132._12_4_ = fVar204 - fVar184 * fVar312;
        if ((bVar29 & 1) != 0) {
          *(float *)(param_1 + lVar49) = auVar132._0_4_;
        }
        if ((bVar29 & 2) == 0) {
          if ((bVar29 & 4) != 0) goto LAB_1400722b1;
LAB_140071e79:
          if ((char)bVar29 < '\0') goto LAB_1400722c1;
LAB_140071e81:
          auVar113._0_4_ = fVar124 - fVar63 * fVar257;
          auVar113._4_4_ = fVar153 - fVar91 * fVar309;
          auVar113._8_4_ = fVar168 - fVar97 * fVar258;
          auVar113._12_4_ = fVar201 - fVar102 * fVar312;
        }
        else {
          uVar14 = extractps(auVar132,1);
          *(undefined8 *)(param_1 + lVar41) = uVar14;
          if ((bVar29 & 4) == 0) goto LAB_140071e79;
LAB_1400722b1:
          uVar14 = extractps(auVar132,2);
          *(undefined8 *)(param_1 + lVar35) = uVar14;
          if (-1 < (char)bVar29) goto LAB_140071e81;
LAB_1400722c1:
          uVar14 = extractps(auVar132,3);
          *(undefined8 *)(param_1 + lVar38) = uVar14;
          auVar113._0_4_ = fVar124 - fVar63 * fVar257;
          auVar113._4_4_ = fVar153 - fVar91 * fVar309;
          auVar113._8_4_ = fVar168 - fVar97 * fVar258;
          auVar113._12_4_ = fVar201 - fVar102 * fVar312;
        }
        if ((bVar29 & 1) != 0) {
          *(int *)(param_1 + 4 + lVar49) = auVar113._0_4_;
        }
        if ((bVar29 & 2) != 0) {
          uVar14 = extractps(auVar113,1);
          *(undefined8 *)(param_1 + 4 + lVar41) = uVar14;
        }
        if ((bVar29 & 4) != 0) {
          uVar14 = extractps(auVar113,2);
          *(undefined8 *)(param_1 + 4 + lVar35) = uVar14;
        }
        if ((char)bVar29 < '\0') {
          uVar14 = extractps(auVar113,3);
          *(undefined8 *)(param_1 + 4 + lVar38) = uVar14;
        }
        auVar114._0_4_ = fVar66 - fVar62 * fVar257;
        auVar114._4_4_ = fVar100 - fVar64 * fVar309;
        auVar114._8_4_ = fVar121 - fVar90 * fVar258;
        auVar114._12_4_ = fVar127 - fVar92 * fVar312;
        if ((bVar29 & 1) != 0) {
          *(float *)(param_1 + 8 + lVar49) = auVar114._0_4_;
        }
        if ((bVar29 & 2) != 0) {
          uVar14 = extractps(auVar114,1);
          *(undefined8 *)(param_1 + 8 + lVar41) = uVar14;
        }
        if ((bVar29 & 4) != 0) {
          uVar14 = extractps(auVar114,2);
          *(undefined8 *)(param_1 + 8 + lVar35) = uVar14;
        }
        if ((char)bVar29 < '\0') {
          uVar14 = extractps(auVar114,3);
          *(undefined8 *)(param_1 + 8 + lVar38) = uVar14;
        }
        if ((bVar29 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar49) = uVar54;
        }
        if ((bVar29 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar41) = uVar55;
        }
        if ((bVar29 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar35) = uVar57;
        }
        iVar23 = CONCAT31((int3)((uint)iVar30 >> 8),bVar29);
        unaff_ESI = uVar144;
        if ((char)bVar29 < '\0') {
          *(uint *)(param_1 + 0xc + lVar38) = uVar58;
          iVar23 = iVar20 << 4;
        }
      }
      auVar115._4_4_ = -(uint)(0.0 < fVar264);
      auVar115._0_4_ = -(uint)(0.0 < fVar259);
      auVar115._8_4_ = -(uint)(0.0 < fVar265);
      auVar115._12_4_ = -(uint)(0.0 < fVar266);
      iVar23 = movmskps(iVar23,auVar115);
      if (iVar23 != 0) {
        bVar29 = (char)((char)iVar23 << 4) >> 4;
        fVar259 = fVar259 * fVar65;
        fVar264 = fVar264 * fVar93;
        fVar265 = fVar265 * fVar99;
        fVar266 = fVar266 * fVar105;
        auVar133._0_4_ = fVar207 - fVar240 * fVar259;
        auVar133._4_4_ = fVar222 - fVar241 * fVar264;
        auVar133._8_4_ = fVar128 - fVar245 * fVar265;
        auVar133._12_4_ = fVar167 - fVar246 * fVar266;
        if ((bVar29 & 1) != 0) {
          *(float *)(param_1 + lVar43) = auVar133._0_4_;
        }
        if ((bVar29 & 2) != 0) {
          uVar14 = extractps(auVar133,1);
          *(undefined8 *)(param_1 + lVar40) = uVar14;
        }
        if ((bVar29 & 4) != 0) {
          uVar14 = extractps(auVar133,2);
          *(undefined8 *)(param_1 + lVar33) = uVar14;
        }
        if ((char)bVar29 < '\0') {
          uVar14 = extractps(auVar133,3);
          *(undefined8 *)(param_1 + lVar21) = uVar14;
        }
        auVar116._0_4_ = fVar94 - fVar96 * fVar259;
        auVar116._4_4_ = fVar106 - fVar101 * fVar264;
        auVar116._8_4_ = fVar122 - fVar125 * fVar265;
        auVar116._12_4_ = fVar104 - fVar148 * fVar266;
        if ((bVar29 & 1) == 0) {
          if ((bVar29 & 2) != 0) goto LAB_140072421;
LAB_140071fb2:
          if ((bVar29 & 4) != 0) goto LAB_140072434;
LAB_140071fbc:
          if ((char)bVar29 < '\0') goto LAB_140072445;
LAB_140071fc4:
          auVar74._0_4_ = fVar95 - fVar191 * fVar259;
          auVar74._4_4_ = fVar107 - fVar200 * fVar264;
          auVar74._8_4_ = fVar123 - fVar202 * fVar265;
          auVar74._12_4_ = fVar147 - fVar205 * fVar266;
        }
        else {
          *(float *)(param_1 + 4 + lVar43) = auVar116._0_4_;
          if ((bVar29 & 2) == 0) goto LAB_140071fb2;
LAB_140072421:
          uVar14 = extractps(auVar116,1);
          *(undefined8 *)(param_1 + 4 + lVar40) = uVar14;
          if ((bVar29 & 4) == 0) goto LAB_140071fbc;
LAB_140072434:
          uVar14 = extractps(auVar116,2);
          *(undefined8 *)(param_1 + 4 + lVar33) = uVar14;
          if (-1 < (char)bVar29) goto LAB_140071fc4;
LAB_140072445:
          uVar14 = extractps(auVar116,3);
          *(undefined8 *)(param_1 + 4 + lVar21) = uVar14;
          auVar74._0_4_ = fVar95 - fVar191 * fVar259;
          auVar74._4_4_ = fVar107 - fVar200 * fVar264;
          auVar74._8_4_ = fVar123 - fVar202 * fVar265;
          auVar74._12_4_ = fVar147 - fVar205 * fVar266;
        }
        if ((bVar29 & 1) != 0) {
          *(int *)(param_1 + 8 + lVar43) = auVar74._0_4_;
        }
        if ((bVar29 & 2) != 0) {
          uVar14 = extractps(auVar74,1);
          *(undefined8 *)(param_1 + 8 + lVar40) = uVar14;
        }
        if ((bVar29 & 4) != 0) {
          uVar14 = extractps(auVar74,2);
          *(undefined8 *)(param_1 + 8 + lVar33) = uVar14;
        }
        if ((char)bVar29 < '\0') {
          uVar14 = extractps(auVar74,3);
          *(undefined8 *)(param_1 + 8 + lVar21) = uVar14;
        }
        if ((bVar29 & 1) != 0) {
          *(uint *)(param_1 + 0xc + lVar43) = uVar8;
        }
        if ((bVar29 & 2) != 0) {
          *(uint *)(param_1 + 0xc + lVar40) = uVar9;
        }
        if ((bVar29 & 4) != 0) {
          *(uint *)(param_1 + 0xc + lVar33) = uVar10;
        }
        if ((char)bVar29 < '\0') {
          *(uint *)(param_1 + 0xc + lVar21) = uVar11;
        }
      }
      uVar34 = uVar34 + 4;
      uVar47 = uVar47 + 0x10;
      auVar67 = auVar279;
    } while ((int)uVar34 < (int)(uVar31 & 0xfffffffc));
    if ((int)param_11 <= (int)uVar34) {
      return;
    }
  }
  uVar51 = (uint)uVar34;
  bVar15 = (int)(uVar51 | (uint)__xmm_00000003000000020000000100000000) < (int)param_11;
  auVar279._0_4_ = -(uint)bVar15;
  bVar16 = (int)(uVar51 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_11;
  auVar279._4_4_ = -(uint)bVar16;
  bVar17 = (int)(uVar51 | _UNK_150631e08) < (int)param_11;
  auVar279._8_4_ = -(uint)bVar17;
  bVar18 = (int)(uVar51 | _UNK_150631e0c) < (int)param_11;
  auVar279._12_4_ = -(uint)bVar18;
  pbVar22 = (byte *)(uVar34 & 0xffffffff);
  pauVar25 = (undefined1 (*) [16])(param_2 + (longlong)pbVar22 * 0x10);
  uVar31 = movmskps(unaff_ESI,auVar279);
  bVar29 = (char)((char)uVar31 << 4) >> 4;
  if (uVar31 == 0xf) {
    auVar67 = *pauVar25;
    auVar316 = pauVar25[2];
    auVar188._0_8_ = auVar67._0_8_;
    auVar188._8_4_ = auVar67._4_4_;
    auVar188._12_4_ = *(undefined4 *)(pauVar25[1] + 4);
    auVar134._4_4_ = *(undefined4 *)pauVar25[1];
    auVar134._0_4_ = auVar67._0_4_;
    auVar155._0_8_ = CONCAT44(*(undefined4 *)(pauVar25[1] + 8),auVar67._8_4_);
    auVar155._8_4_ = auVar67._12_4_;
    auVar155._12_4_ = *(undefined4 *)(pauVar25[1] + 0xc);
    auVar77._0_8_ = auVar316._0_8_;
    auVar77._8_4_ = auVar316._4_4_;
    auVar77._12_4_ = *(undefined4 *)(pauVar25[3] + 4);
    auVar76._8_8_ = auVar77._8_8_;
    auVar76._0_8_ = CONCAT44(*(undefined4 *)pauVar25[3],auVar316._0_4_);
    auVar117._0_8_ = CONCAT44(*(undefined4 *)(pauVar25[3] + 8),auVar316._8_4_);
    auVar117._8_4_ = auVar316._12_4_;
    auVar117._12_4_ = *(undefined4 *)(pauVar25[3] + 0xc);
    auVar134._8_8_ = auVar76._0_8_;
    auVar187._8_8_ = auVar76._8_8_;
    auVar187._0_8_ = auVar188._8_8_;
    auVar196._8_8_ = auVar117._0_8_;
    auVar196._0_8_ = auVar155._0_8_;
    auVar154._8_8_ = auVar117._8_8_;
    auVar154._0_8_ = auVar155._8_8_;
  }
  else {
    auVar75._0_4_ = ___xmm_00000030000000200000001000000000 & auVar279._0_4_;
    auVar75._4_4_ = _UNK_150b511c4 & auVar279._4_4_;
    auVar75._8_4_ = _UNK_150b511c8 & auVar279._8_4_;
    auVar75._12_4_ = _UNK_150b511cc & auVar279._12_4_;
    lVar21 = extractps(auVar75,1);
    lVar28 = extractps(auVar75,2);
    lVar24 = extractps(auVar75,3);
    auVar134._4_4_ = *(undefined4 *)(*pauVar25 + lVar21);
    auVar134._0_4_ = *(undefined4 *)*pauVar25;
    auVar134._12_4_ = *(undefined4 *)(*pauVar25 + lVar24);
    auVar134._8_4_ = *(undefined4 *)(*pauVar25 + lVar28);
    auVar67 = ___xmm_00000034000000240000001400000004 & auVar279;
    auVar187._4_4_ = *(undefined4 *)(*pauVar25 + auVar67._4_4_);
    auVar187._0_4_ = *(undefined4 *)(*pauVar25 + auVar67._0_4_);
    auVar187._12_4_ = *(undefined4 *)(*pauVar25 + auVar67._12_4_);
    auVar187._8_4_ = *(undefined4 *)(*pauVar25 + auVar67._8_4_);
    auVar67 = ___xmm_00000038000000280000001800000008 & auVar279;
    auVar196._4_4_ = *(undefined4 *)(*pauVar25 + auVar67._4_4_);
    auVar196._0_4_ = *(undefined4 *)(*pauVar25 + auVar67._0_4_);
    auVar196._12_4_ = *(undefined4 *)(*pauVar25 + auVar67._12_4_);
    auVar196._8_4_ = *(undefined4 *)(*pauVar25 + auVar67._8_4_);
    auVar76 = ___xmm_0000003c0000002c0000001c0000000c & auVar279;
    auVar154._4_4_ = *(undefined4 *)(*pauVar25 + auVar76._4_4_);
    auVar154._0_4_ = *(undefined4 *)(*pauVar25 + auVar76._0_4_);
    auVar154._12_4_ = *(undefined4 *)(*pauVar25 + auVar76._12_4_);
    auVar154._8_4_ = *(undefined4 *)(*pauVar25 + auVar76._8_4_);
  }
  auVar228 = ZEXT816(0);
  bVar37 = ~bVar29;
  auVar250 = ZEXT816(0);
  if ((param_5 & 1) != 0) {
    if ((bVar37 & 9) == 0) {
      auVar250 = ZEXT416(*(uint *)(pbVar22 + param_6));
    }
    else {
      pbVar12 = pbVar22 + param_6;
      if ((uVar31 & 1) != 0) {
        auVar250 = ZEXT116(*pbVar12);
      }
      if ((uVar31 & 2) != 0) {
        auVar76._8_8_ = auVar250._8_8_;
        auVar76._0_8_ = auVar250._0_8_ | (ulonglong)pbVar12[1] << 8;
        auVar250 = pblendw(auVar250,auVar76,0xfd);
      }
      if ((uVar31 & 4) != 0) {
        auVar67 = pmovzxwd(auVar76,auVar250);
        auVar76._8_8_ = auVar67._8_8_;
        auVar76._0_8_ =
             auVar67._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar12[2] << 0x10 |
             (ulonglong)auVar250[3] << 0x18;
        auVar250 = auVar76;
      }
      if ((uVar31 & 8) != 0) {
        bVar19 = auVar250[2];
        auVar67 = pmovzxwd(auVar250,auVar250);
        auVar250._8_8_ = auVar67._8_8_;
        auVar250._0_8_ =
             auVar67._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar19 << 0x10 |
             (ulonglong)pbVar12[3] << 0x18;
      }
    }
  }
  if ((param_8 & 1) != 0) {
    if ((bVar37 & 9) == 0) {
      auVar228 = ZEXT416(*(uint *)(pbVar22 + param_9));
    }
    else {
      pbVar12 = pbVar22 + param_9;
      if ((uVar31 & 1) != 0) {
        auVar228 = ZEXT116(*pbVar12);
      }
      if ((uVar31 & 2) != 0) {
        auVar76._8_8_ = auVar228._8_8_;
        auVar76._0_8_ = auVar228._0_8_ | (ulonglong)pbVar12[1] << 8;
        auVar228 = pblendw(auVar228,auVar76,0xfd);
      }
      if ((uVar31 & 4) != 0) {
        bVar19 = auVar228[3];
        auVar67 = pmovzxwd(auVar76,auVar228);
        auVar228._8_8_ = auVar67._8_8_;
        auVar228._0_8_ =
             auVar67._0_8_ & 0xffffffff0000ffff | (ulonglong)pbVar12[2] << 0x10 |
             (ulonglong)bVar19 << 0x18;
      }
      if ((uVar31 & 8) != 0) {
        bVar19 = auVar228[2];
        auVar67 = pmovzxwd(auVar228,auVar228);
        auVar228._8_8_ = auVar67._8_8_;
        auVar228._0_8_ =
             auVar67._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar19 << 0x10 |
             (ulonglong)pbVar12[3] << 0x18;
      }
    }
  }
  auVar189._0_4_ = auVar187._0_4_ << 4;
  auVar189._4_4_ = auVar187._4_4_ << 4;
  auVar189._8_4_ = auVar187._8_4_ << 4;
  auVar189._12_4_ = auVar187._12_4_ << 4;
  auVar316 = auVar279 & auVar189;
  auVar129 = ___xmm_00000004000000040000000400000004 & auVar279;
  auVar224 = ___xmm_00000008000000080000000800000008 & auVar279;
  auVar197._0_4_ = auVar196._0_4_ << 4;
  auVar197._4_4_ = auVar196._4_4_ << 4;
  auVar197._8_4_ = auVar196._8_4_ << 4;
  auVar197._12_4_ = auVar196._12_4_ << 4;
  auVar249 = auVar279 & auVar197;
  lVar36 = (longlong)auVar249._0_4_;
  auVar211._0_4_ = auVar134._0_4_ << 4;
  auVar211._4_4_ = auVar134._4_4_ << 4;
  auVar211._8_4_ = auVar134._8_4_ << 4;
  auVar211._12_4_ = auVar134._12_4_ << 4;
  auVar193 = auVar279 & auVar211;
  lVar21 = param_1 + auVar193._0_4_;
  auVar156._0_4_ = auVar154._0_4_ << 4;
  auVar156._4_4_ = auVar154._4_4_ << 4;
  auVar156._8_4_ = auVar154._8_4_ << 4;
  auVar156._12_4_ = auVar154._12_4_ << 4;
  auVar276 = auVar279 & auVar156;
  lVar44 = (longlong)auVar276._0_4_;
  auVar67 = ZEXT416(*(uint *)(param_1 + auVar193._0_4_));
  lVar24 = param_1 + auVar316._0_4_;
  lVar28 = param_1 + auVar316._4_4_;
  lVar32 = param_1 + auVar316._8_4_;
  lVar33 = param_1 + auVar316._12_4_;
  uVar27 = (ulonglong)auVar129._0_4_;
  uVar34 = (ulonglong)auVar129._4_4_;
  uVar47 = (ulonglong)auVar224._0_4_;
  lVar35 = param_1 + lVar36;
  lVar38 = param_1 + auVar249._4_4_;
  lVar39 = param_1 + auVar249._8_4_;
  lVar40 = param_1 + auVar249._12_4_;
  lVar41 = param_1 + auVar193._4_4_;
  lVar42 = param_1 + auVar193._8_4_;
  lVar43 = param_1 + auVar193._12_4_;
  lVar45 = param_1 + lVar44;
  lVar46 = param_1 + auVar276._4_4_;
  lVar48 = param_1 + auVar276._8_4_;
  lVar49 = param_1 + auVar276._12_4_;
  bVar50 = (bVar29 & 2) == 0;
  if (!bVar50) {
    auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + auVar193._4_4_),0x10);
  }
  uVar26 = (ulonglong)auVar224._4_4_;
  auVar300 = ZEXT416(*(uint *)(uVar27 + lVar21));
  if (bVar50) {
    auVar317 = ZEXT416(*(uint *)(uVar47 + lVar21));
  }
  else {
    auVar300 = insertps(auVar300,*(undefined4 *)(uVar34 + lVar41),0x10);
    auVar317 = insertps(ZEXT416(*(uint *)(uVar47 + lVar21)),*(undefined4 *)(uVar26 + lVar41),0x10);
  }
  auVar319 = ZEXT416(*(uint *)(param_1 + auVar316._0_4_));
  if (bVar50) {
    _local_4a8 = ZEXT416(*(uint *)(uVar27 + lVar24));
    auVar135 = ZEXT416(*(uint *)(uVar47 + lVar24));
    auVar261 = ZEXT416(*(uint *)(param_1 + lVar36));
    auVar212 = ZEXT416(*(uint *)(uVar27 + lVar35));
    auVar229 = ZEXT416(*(uint *)(uVar47 + lVar35));
    auVar251 = ZEXT416(*(uint *)(param_1 + lVar44));
    _local_3e8 = ZEXT416(*(uint *)(uVar27 + lVar45));
  }
  else {
    auVar319 = insertps(auVar319,*(undefined4 *)(param_1 + auVar316._4_4_),0x10);
    _local_4a8 = insertps(ZEXT416(*(uint *)(uVar27 + lVar24)),*(undefined4 *)(uVar34 + lVar28),0x10)
    ;
    auVar135 = insertps(ZEXT416(*(uint *)(uVar47 + lVar24)),*(undefined4 *)(uVar26 + lVar28),0x10);
    auVar261 = insertps(ZEXT416(*(uint *)(param_1 + lVar36)),
                        *(undefined4 *)(param_1 + auVar249._4_4_),0x10);
    auVar212 = insertps(ZEXT416(*(uint *)(uVar27 + lVar35)),*(undefined4 *)(uVar34 + lVar38),0x10);
    auVar229 = insertps(ZEXT416(*(uint *)(uVar47 + lVar35)),*(undefined4 *)(uVar26 + lVar38),0x10);
    auVar251 = insertps(ZEXT416(*(uint *)(param_1 + lVar44)),
                        *(undefined4 *)(param_1 + auVar276._4_4_),0x10);
    _local_3e8 = insertps(ZEXT416(*(uint *)(uVar27 + lVar45)),*(undefined4 *)(uVar34 + lVar46),0x10)
    ;
  }
  auVar269 = ZEXT416(*(uint *)(uVar47 + lVar45));
  uVar52 = auVar129._8_4_;
  uVar56 = auVar129._12_4_;
  uVar53 = auVar224._8_4_;
  uVar54 = auVar224._12_4_;
  if (!bVar50) {
    auVar269 = insertps(auVar269,*(undefined4 *)(uVar26 + lVar46),0x10);
  }
  if ((bVar29 & 4) != 0) {
    auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + auVar193._8_4_),0x20);
    auVar300 = insertps(auVar300,*(undefined4 *)((ulonglong)uVar52 + lVar42),0x20);
    auVar317 = insertps(auVar317,*(undefined4 *)((ulonglong)uVar53 + lVar42),0x20);
    auVar319 = insertps(auVar319,*(undefined4 *)(param_1 + auVar316._8_4_),0x20);
    _local_4a8 = insertps(_local_4a8,*(undefined4 *)((ulonglong)uVar52 + lVar32),0x20);
    auVar135 = insertps(auVar135,*(undefined4 *)((ulonglong)uVar53 + lVar32),0x20);
    auVar261 = insertps(auVar261,*(undefined4 *)(param_1 + auVar249._8_4_),0x20);
    auVar212 = insertps(auVar212,*(undefined4 *)((ulonglong)uVar52 + lVar39),0x20);
    auVar229 = insertps(auVar229,*(undefined4 *)((ulonglong)uVar53 + lVar39),0x20);
    auVar251 = insertps(auVar251,*(undefined4 *)(param_1 + auVar276._8_4_),0x20);
    _local_3e8 = insertps(_local_3e8,*(undefined4 *)((ulonglong)uVar52 + lVar48),0x20);
    auVar269 = insertps(auVar269,*(undefined4 *)((ulonglong)uVar53 + lVar48),0x20);
  }
  if ((char)bVar29 < '\0') {
    auVar67 = insertps(auVar67,*(undefined4 *)(param_1 + auVar193._12_4_),0x30);
    auVar300 = insertps(auVar300,*(undefined4 *)((ulonglong)uVar56 + lVar43),0x30);
    auVar317 = insertps(auVar317,*(undefined4 *)((ulonglong)uVar54 + lVar43),0x30);
    auVar319 = insertps(auVar319,*(undefined4 *)(param_1 + auVar316._12_4_),0x30);
    _local_4a8 = insertps(_local_4a8,*(undefined4 *)((ulonglong)uVar56 + lVar33),0x30);
    auVar135 = insertps(auVar135,*(undefined4 *)((ulonglong)uVar54 + lVar33),0x30);
    auVar261 = insertps(auVar261,*(undefined4 *)(param_1 + auVar249._12_4_),0x30);
  }
  uVar34 = (ulonglong)((uint)__xmm_0000000c0000000c0000000c0000000c & auVar279._0_4_);
  if ((char)bVar29 < '\0') {
    auVar212 = insertps(auVar212,*(undefined4 *)((ulonglong)uVar56 + lVar40),0x30);
  }
  uVar47 = (ulonglong)(__xmm_0000000c0000000c0000000c0000000c._4_4_ & auVar279._4_4_);
  if ((char)bVar29 < '\0') {
    auVar229 = insertps(auVar229,*(undefined4 *)((ulonglong)uVar54 + lVar40),0x30);
  }
  bVar50 = (char)bVar29 < '\0';
  uVar27 = (ulonglong)SUB164(___xmm_0000000c0000000c0000000c0000000c & auVar279,8);
  if (bVar50) {
    auVar251 = insertps(auVar251,*(undefined4 *)(param_1 + auVar276._12_4_),0x30);
  }
  uVar26 = (ulonglong)SUB164(___xmm_0000000c0000000c0000000c0000000c & auVar279,0xc);
  auVar316 = insertps(ZEXT416(*(uint *)(uVar34 + lVar24)),*(undefined4 *)(uVar47 + lVar28),0x10);
  auVar249 = insertps(ZEXT416(*(uint *)(uVar34 + lVar35)),*(undefined4 *)(uVar47 + lVar38),0x10);
  auVar224 = insertps(ZEXT416(*(uint *)(uVar34 + lVar21)),*(undefined4 *)(uVar47 + lVar41),0x10);
  auVar129 = insertps(ZEXT416(*(uint *)(uVar34 + lVar45)),*(undefined4 *)(uVar47 + lVar46),0x10);
  if (bVar50) {
    _local_3e8 = insertps(_local_3e8,*(undefined4 *)((ulonglong)uVar56 + lVar49),0x30);
  }
  auVar316 = insertps(auVar316,*(undefined4 *)(uVar27 + lVar32),0x20);
  auVar249 = insertps(auVar249,*(undefined4 *)(uVar27 + lVar39),0x20);
  auVar224 = insertps(auVar224,*(undefined4 *)(uVar27 + lVar42),0x20);
  auVar129 = insertps(auVar129,*(undefined4 *)(uVar27 + lVar48),0x20);
  local_478 = auVar300._0_4_;
  fStack_474 = auVar300._4_4_;
  fStack_470 = auVar300._8_4_;
  fStack_46c = auVar300._12_4_;
  if (bVar50) {
    auVar269 = insertps(auVar269,*(undefined4 *)((ulonglong)uVar54 + lVar49),0x30);
  }
  fVar273 = auVar319._4_4_;
  fVar274 = auVar319._12_4_;
  local_388 = auVar67._0_4_;
  fStack_384 = auVar67._4_4_;
  fStack_380 = auVar67._8_4_;
  fStack_37c = auVar67._12_4_;
  local_408._0_4_ = auVar319._0_4_;
  auVar252._0_4_ = (float)local_408._0_4_ - local_388;
  auVar252._4_4_ = fVar273 - fStack_384;
  fVar234 = auVar319._8_4_;
  auVar252._8_4_ = fVar234 - fStack_380;
  auVar252._12_4_ = fVar274 - fStack_37c;
  auVar118._0_4_ = (float)local_4a8._0_4_ - local_478;
  auVar118._4_4_ = (float)local_4a8._4_4_ - fStack_474;
  auVar118._8_4_ = fStack_4a0 - fStack_470;
  auVar118._12_4_ = fStack_49c - fStack_46c;
  local_3f8._0_4_ = auVar135._0_4_;
  fVar104 = auVar135._4_4_;
  fVar124 = auVar135._12_4_;
  fVar179 = auVar317._0_4_;
  auVar136._0_4_ = (float)local_3f8._0_4_ - fVar179;
  fVar182 = auVar317._4_4_;
  auVar136._4_4_ = fVar104 - fVar182;
  fVar93 = auVar135._8_4_;
  fVar186 = auVar317._8_4_;
  auVar136._8_4_ = fVar93 - fVar186;
  fVar199 = auVar317._12_4_;
  auVar136._12_4_ = fVar124 - fVar199;
  auVar157._0_4_ = auVar118._0_4_ * auVar118._0_4_ + auVar252._0_4_ * auVar252._0_4_;
  auVar157._4_4_ = auVar118._4_4_ * auVar118._4_4_ + auVar252._4_4_ * auVar252._4_4_;
  auVar157._8_4_ = auVar118._8_4_ * auVar118._8_4_ + auVar252._8_4_ * auVar252._8_4_;
  auVar157._12_4_ = auVar118._12_4_ * auVar118._12_4_ + auVar252._12_4_ * auVar252._12_4_;
  auVar320._0_4_ = auVar136._0_4_ * auVar136._0_4_ + auVar157._0_4_;
  auVar320._4_4_ = auVar136._4_4_ * auVar136._4_4_ + auVar157._4_4_;
  auVar320._8_4_ = auVar136._8_4_ * auVar136._8_4_ + auVar157._8_4_;
  auVar320._12_4_ = auVar136._12_4_ * auVar136._12_4_ + auVar157._12_4_;
  auVar193 = sqrtps(auVar157,auVar320);
  uVar52 = -(uint)(auVar320._0_4_ <= ___xmm_00800000008000000080000000800000);
  uVar53 = -(uint)(auVar320._4_4_ <= _UNK_1508be494);
  uVar56 = -(uint)(auVar320._8_4_ <= _UNK_1508be498);
  uVar55 = -(uint)(auVar320._12_4_ <= _UNK_1508be49c);
  auVar78._4_4_ = uVar53;
  auVar78._0_4_ = uVar52;
  auVar276 = divps(auVar252,auVar193);
  auVar67 = divps(auVar118,auVar193);
  auVar78._8_4_ = uVar56;
  auVar78._12_4_ = uVar55;
  auVar317 = blendvps(auVar276,___xmm_3f8000003f8000003f8000003f800000,auVar78);
  auVar193 = divps(auVar136,auVar193);
  fVar62 = (float)(~uVar52 & auVar67._0_4_);
  fVar64 = (float)(~uVar53 & auVar67._4_4_);
  fVar90 = (float)(~uVar56 & auVar67._8_4_);
  fVar92 = (float)(~uVar55 & auVar67._12_4_);
  fVar315 = (float)(~uVar52 & auVar193._0_4_);
  fVar312 = (float)(~uVar53 & auVar193._4_4_);
  fVar259 = (float)(~uVar56 & auVar193._8_4_);
  fVar264 = (float)(~uVar55 & auVar193._12_4_);
  fVar239 = auVar261._0_4_;
  fVar63 = local_388 - fVar239;
  fVar244 = auVar261._4_4_;
  fVar94 = fStack_384 - fVar244;
  fVar247 = auVar261._8_4_;
  fVar91 = fStack_380 - fVar247;
  fVar255 = auVar261._12_4_;
  fVar106 = fStack_37c - fVar255;
  fVar202 = auVar212._0_4_;
  fVar153 = local_478 - fVar202;
  fVar204 = auVar212._4_4_;
  fVar145 = fStack_474 - fVar204;
  fVar206 = auVar212._8_4_;
  fVar146 = fStack_470 - fVar206;
  fVar209 = auVar212._12_4_;
  fVar168 = fStack_46c - fVar209;
  fVar215 = auVar229._0_4_;
  fVar180 = fVar179 - fVar215;
  fVar216 = auVar229._4_4_;
  fVar183 = fVar182 - fVar216;
  fVar218 = auVar229._8_4_;
  fVar203 = fVar186 - fVar218;
  fVar220 = auVar229._12_4_;
  fVar200 = fVar199 - fVar220;
  fVar149 = (float)local_408._0_4_ - fVar239;
  fVar150 = fVar273 - fVar244;
  fVar152 = fVar234 - fVar247;
  fVar207 = fVar274 - fVar255;
  fVar240 = (float)local_4a8._0_4_ - fVar202;
  fVar245 = (float)local_4a8._4_4_ - fVar204;
  fVar248 = fStack_4a0 - fVar206;
  fVar256 = fStack_49c - fVar209;
  auVar176._0_4_ = (float)local_3f8._0_4_ - fVar215;
  auVar176._4_4_ = fVar104 - fVar216;
  auVar176._8_4_ = fVar93 - fVar218;
  auVar176._12_4_ = fVar124 - fVar220;
  auVar137._0_4_ = fVar63 * fVar240 - fVar149 * fVar153;
  auVar137._4_4_ = fVar94 * fVar245 - fVar150 * fVar145;
  auVar137._8_4_ = fVar91 * fVar248 - fVar152 * fVar146;
  auVar137._12_4_ = fVar106 * fVar256 - fVar207 * fVar168;
  auVar213._0_4_ = fVar153 * auVar176._0_4_ - fVar240 * fVar180;
  auVar213._4_4_ = fVar145 * auVar176._4_4_ - fVar245 * fVar183;
  auVar213._8_4_ = fVar146 * auVar176._8_4_ - fVar248 * fVar203;
  auVar213._12_4_ = fVar168 * auVar176._12_4_ - fVar256 * fVar200;
  auVar278._0_4_ = fVar149 * fVar180 - fVar63 * auVar176._0_4_;
  auVar278._4_4_ = fVar150 * fVar183 - fVar94 * auVar176._4_4_;
  auVar278._8_4_ = fVar152 * fVar203 - fVar91 * auVar176._8_4_;
  auVar278._12_4_ = fVar207 * fVar200 - fVar106 * auVar176._12_4_;
  auVar79._0_4_ =
       auVar137._0_4_ * auVar137._0_4_ +
       auVar278._0_4_ * auVar278._0_4_ + auVar213._0_4_ * auVar213._0_4_;
  auVar79._4_4_ =
       auVar137._4_4_ * auVar137._4_4_ +
       auVar278._4_4_ * auVar278._4_4_ + auVar213._4_4_ * auVar213._4_4_;
  auVar79._8_4_ =
       auVar137._8_4_ * auVar137._8_4_ +
       auVar278._8_4_ * auVar278._8_4_ + auVar213._8_4_ * auVar213._8_4_;
  auVar79._12_4_ =
       auVar137._12_4_ * auVar137._12_4_ +
       auVar278._12_4_ * auVar278._12_4_ + auVar213._12_4_ * auVar213._12_4_;
  auVar276 = sqrtps(auVar176,auVar79);
  uVar52 = -(uint)(auVar276._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77);
  uVar56 = -(uint)(auVar276._4_4_ <= _UNK_1506895d4);
  uVar57 = -(uint)(auVar276._8_4_ <= _UNK_1506895d8);
  uVar59 = -(uint)(auVar276._12_4_ <= _UNK_1506895dc);
  auVar67 = divps(auVar213,auVar276);
  fVar241 = (float)(~uVar52 & auVar67._0_4_);
  fVar246 = (float)(~uVar56 & auVar67._4_4_);
  fVar299 = (float)(~uVar57 & auVar67._8_4_);
  fVar307 = (float)(~uVar59 & auVar67._12_4_);
  auVar67 = divps(auVar278,auVar276);
  fVar96 = (float)(~uVar52 & auVar67._0_4_);
  fVar121 = (float)(~uVar56 & auVar67._4_4_);
  fVar122 = (float)(~uVar57 & auVar67._8_4_);
  fVar101 = (float)(~uVar59 & auVar67._12_4_);
  auVar67 = divps(auVar137,auVar276);
  fVar222 = (float)(~uVar52 & auVar67._0_4_);
  fVar237 = (float)(~uVar56 & auVar67._4_4_);
  fVar242 = (float)(~uVar57 & auVar67._8_4_);
  fVar205 = (float)(~uVar59 & auVar67._12_4_);
  local_358 = auVar251._0_4_;
  fStack_354 = auVar251._4_4_;
  fStack_350 = auVar251._8_4_;
  fStack_34c = auVar251._12_4_;
  fVar266 = (float)local_408._0_4_ - local_358;
  fVar267 = fVar273 - fStack_354;
  fVar271 = fVar234 - fStack_350;
  fVar272 = fVar274 - fStack_34c;
  fVar165 = (float)local_4a8._0_4_ - (float)local_3e8._0_4_;
  fVar166 = (float)local_4a8._4_4_ - (float)local_3e8._4_4_;
  fVar170 = fStack_4a0 - fStack_3e0;
  fVar172 = fStack_49c - fStack_3dc;
  fVar192 = local_388 - local_358;
  fVar184 = fStack_384 - fStack_354;
  fVar191 = fStack_380 - fStack_350;
  fVar208 = fStack_37c - fStack_34c;
  fVar66 = local_478 - (float)local_3e8._0_4_;
  fVar95 = fStack_474 - (float)local_3e8._4_4_;
  fVar100 = fStack_470 - fStack_3e0;
  fVar107 = fStack_46c - fStack_3dc;
  auVar302._0_4_ = fVar266 * fVar66 - fVar192 * fVar165;
  auVar302._4_4_ = fVar267 * fVar95 - fVar184 * fVar166;
  auVar302._8_4_ = fVar271 * fVar100 - fVar191 * fVar170;
  auVar302._12_4_ = fVar272 * fVar107 - fVar208 * fVar172;
  local_3c8 = auVar269._0_4_;
  fStack_3c4 = auVar269._4_4_;
  fStack_3c0 = auVar269._8_4_;
  fStack_3bc = auVar269._12_4_;
  fVar268 = (float)local_3f8._0_4_ - local_3c8;
  fVar257 = fVar104 - fStack_3c4;
  fVar309 = fVar93 - fStack_3c0;
  fVar258 = fVar124 - fStack_3bc;
  fVar127 = fVar179 - local_3c8;
  fVar147 = fVar182 - fStack_3c4;
  fVar99 = fVar186 - fStack_3c0;
  fVar125 = fVar199 - fStack_3bc;
  auVar80._0_4_ = fVar165 * fVar127 - fVar66 * fVar268;
  auVar80._4_4_ = fVar166 * fVar147 - fVar95 * fVar257;
  auVar80._8_4_ = fVar170 * fVar99 - fVar100 * fVar309;
  auVar80._12_4_ = fVar172 * fVar125 - fVar107 * fVar258;
  auVar198._0_4_ = fVar192 * fVar268 - fVar266 * fVar127;
  auVar198._4_4_ = fVar184 * fVar257 - fVar267 * fVar147;
  auVar198._8_4_ = fVar191 * fVar309 - fVar271 * fVar99;
  auVar198._12_4_ = fVar208 * fVar258 - fVar272 * fVar125;
  auVar138._0_4_ =
       auVar302._0_4_ * auVar302._0_4_ +
       auVar198._0_4_ * auVar198._0_4_ + auVar80._0_4_ * auVar80._0_4_;
  auVar138._4_4_ =
       auVar302._4_4_ * auVar302._4_4_ +
       auVar198._4_4_ * auVar198._4_4_ + auVar80._4_4_ * auVar80._4_4_;
  auVar138._8_4_ =
       auVar302._8_4_ * auVar302._8_4_ +
       auVar198._8_4_ * auVar198._8_4_ + auVar80._8_4_ * auVar80._8_4_;
  auVar138._12_4_ =
       auVar302._12_4_ * auVar302._12_4_ +
       auVar198._12_4_ * auVar198._12_4_ + auVar80._12_4_ * auVar80._12_4_;
  auVar300 = sqrtps(auVar276,auVar138);
  uVar53 = -(uint)(auVar300._0_4_ <= ___xmm_322bcc77322bcc77322bcc77322bcc77);
  uVar55 = -(uint)(auVar300._4_4_ <= _UNK_1506895d4);
  uVar58 = -(uint)(auVar300._8_4_ <= _UNK_1506895d8);
  uVar60 = -(uint)(auVar300._12_4_ <= _UNK_1506895dc);
  auVar67 = divps(auVar80,auVar300);
  fVar181 = (float)(~uVar53 & auVar67._0_4_);
  fVar185 = (float)(~uVar55 & auVar67._4_4_);
  fVar283 = (float)(~uVar58 & auVar67._8_4_);
  fVar287 = (float)(~uVar60 & auVar67._12_4_);
  auVar67 = divps(auVar198,auVar300);
  fVar103 = (float)(~uVar53 & auVar67._0_4_);
  fVar65 = (float)(~uVar55 & auVar67._4_4_);
  fVar105 = (float)(~uVar58 & auVar67._8_4_);
  fVar126 = (float)(~uVar60 & auVar67._12_4_);
  auVar67 = divps(auVar302,auVar300);
  fVar148 = (float)(~uVar53 & auVar67._0_4_);
  fVar201 = (float)(~uVar55 & auVar67._4_4_);
  fVar151 = (float)(~uVar58 & auVar67._8_4_);
  fVar164 = (float)(~uVar60 & auVar67._12_4_);
  auVar190._0_4_ = fVar222 * fVar148 + fVar96 * fVar103 + fVar241 * fVar181;
  auVar190._4_4_ = fVar237 * fVar201 + fVar121 * fVar65 + fVar246 * fVar185;
  auVar190._8_4_ = fVar242 * fVar151 + fVar122 * fVar105 + fVar299 * fVar283;
  auVar190._12_4_ = fVar205 * fVar164 + fVar101 * fVar126 + fVar307 * fVar287;
  fVar217 = auVar317._0_4_;
  fVar219 = auVar317._4_4_;
  fVar235 = auVar317._8_4_;
  fVar236 = auVar317._12_4_;
  auVar119._0_4_ =
       (fVar96 * fVar181 - fVar241 * fVar103) * fVar315 +
       (fVar241 * fVar148 - fVar222 * fVar181) * fVar62 +
       (fVar222 * fVar103 - fVar96 * fVar148) * fVar217;
  auVar119._4_4_ =
       (fVar121 * fVar185 - fVar246 * fVar65) * fVar312 +
       (fVar246 * fVar201 - fVar237 * fVar185) * fVar64 +
       (fVar237 * fVar65 - fVar121 * fVar201) * fVar219;
  auVar119._8_4_ =
       (fVar122 * fVar283 - fVar299 * fVar105) * fVar259 +
       (fVar299 * fVar151 - fVar242 * fVar283) * fVar90 +
       (fVar242 * fVar105 - fVar122 * fVar151) * fVar235;
  auVar119._12_4_ =
       (fVar101 * fVar287 - fVar307 * fVar126) * fVar264 +
       (fVar307 * fVar164 - fVar205 * fVar287) * fVar92 +
       (fVar205 * fVar126 - fVar101 * fVar164) * fVar236;
  auVar193 = maxps(auVar190,___xmm_bf800000bf800000bf800000bf800000);
  auVar67 = maxps(auVar119,___xmm_bf800000bf800000bf800000bf800000);
  auVar317 = minps(auVar193,___xmm_3f8000003f8000003f8000003f800000);
  auVar193 = minps(auVar67,___xmm_3f8000003f8000003f8000003f800000);
  fVar128 = auVar317._0_4_;
  fVar167 = auVar317._4_4_;
  fVar171 = auVar317._8_4_;
  fVar178 = auVar317._12_4_;
  fVar97 = auVar193._0_4_;
  fVar98 = auVar193._4_4_;
  fVar123 = auVar193._8_4_;
  fVar102 = auVar193._12_4_;
  auVar293._0_4_ = (fVar62 * fVar148 - fVar315 * fVar103) * fVar128 - fVar181 * fVar97;
  auVar293._4_4_ = (fVar64 * fVar201 - fVar312 * fVar65) * fVar167 - fVar185 * fVar98;
  auVar293._8_4_ = (fVar90 * fVar151 - fVar259 * fVar105) * fVar171 - fVar283 * fVar123;
  auVar293._12_4_ = (fVar92 * fVar164 - fVar264 * fVar126) * fVar178 - fVar287 * fVar102;
  auVar81._0_4_ = (fVar315 * fVar181 - fVar217 * fVar148) * fVar128 - fVar103 * fVar97;
  auVar81._4_4_ = (fVar312 * fVar185 - fVar219 * fVar201) * fVar167 - fVar65 * fVar98;
  auVar81._8_4_ = (fVar259 * fVar283 - fVar235 * fVar151) * fVar171 - fVar105 * fVar123;
  auVar81._12_4_ = (fVar264 * fVar287 - fVar236 * fVar164) * fVar178 - fVar126 * fVar102;
  auVar303._0_4_ = (fVar217 * fVar103 - fVar62 * fVar181) * fVar128 - fVar148 * fVar97;
  auVar303._4_4_ = (fVar219 * fVar65 - fVar64 * fVar185) * fVar167 - fVar201 * fVar98;
  auVar303._8_4_ = (fVar235 * fVar105 - fVar90 * fVar283) * fVar171 - fVar151 * fVar123;
  auVar303._12_4_ = (fVar236 * fVar126 - fVar92 * fVar287) * fVar178 - fVar164 * fVar102;
  auVar319 = divps(auVar293,auVar276);
  auVar67 = divps(auVar81,auVar276);
  auVar276 = divps(auVar303,auVar276);
  fVar223 = (float)(~uVar52 & auVar319._0_4_);
  fVar238 = (float)(~uVar56 & auVar319._4_4_);
  fVar243 = (float)(~uVar57 & auVar319._8_4_);
  fVar221 = (float)(~uVar59 & auVar319._12_4_);
  fVar181 = (float)(~uVar52 & auVar67._0_4_);
  fVar185 = (float)(~uVar56 & auVar67._4_4_);
  fVar283 = (float)(~uVar57 & auVar67._8_4_);
  fVar287 = (float)(~uVar59 & auVar67._12_4_);
  fVar103 = (float)(~uVar52 & auVar276._0_4_);
  fVar65 = (float)(~uVar56 & auVar276._4_4_);
  fVar105 = (float)(~uVar57 & auVar276._8_4_);
  fVar126 = (float)(~uVar59 & auVar276._12_4_);
  auVar177._0_4_ = (fVar315 * fVar96 - fVar62 * fVar222) * fVar128 - fVar241 * fVar97;
  auVar177._4_4_ = (fVar312 * fVar121 - fVar64 * fVar237) * fVar167 - fVar246 * fVar98;
  auVar177._8_4_ = (fVar259 * fVar122 - fVar90 * fVar242) * fVar171 - fVar299 * fVar123;
  auVar177._12_4_ = (fVar264 * fVar101 - fVar92 * fVar205) * fVar178 - fVar307 * fVar102;
  auVar304._0_4_ = (fVar217 * fVar222 - fVar315 * fVar241) * fVar128 - fVar96 * fVar97;
  auVar304._4_4_ = (fVar219 * fVar237 - fVar312 * fVar246) * fVar167 - fVar121 * fVar98;
  auVar304._8_4_ = (fVar235 * fVar242 - fVar259 * fVar299) * fVar171 - fVar122 * fVar123;
  auVar304._12_4_ = (fVar236 * fVar205 - fVar264 * fVar307) * fVar178 - fVar101 * fVar102;
  auVar139._0_4_ = (fVar62 * fVar241 - fVar217 * fVar96) * fVar128 - fVar222 * fVar97;
  auVar139._4_4_ = (fVar64 * fVar246 - fVar219 * fVar121) * fVar167 - fVar237 * fVar98;
  auVar139._8_4_ = (fVar90 * fVar299 - fVar235 * fVar122) * fVar171 - fVar242 * fVar123;
  auVar139._12_4_ = (fVar92 * fVar307 - fVar236 * fVar101) * fVar178 - fVar205 * fVar102;
  auVar276 = divps(auVar177,auVar300);
  auVar319 = divps(auVar304,auVar300);
  auVar67 = divps(auVar139,auVar300);
  fVar235 = (float)(~uVar53 & auVar276._0_4_);
  fVar236 = (float)(~uVar55 & auVar276._4_4_);
  fVar241 = (float)(~uVar58 & auVar276._8_4_);
  fVar246 = (float)(~uVar60 & auVar276._12_4_);
  fVar259 = (float)(~uVar53 & auVar319._0_4_);
  fVar264 = (float)(~uVar55 & auVar319._4_4_);
  fVar284 = (float)(~uVar58 & auVar319._8_4_);
  fVar265 = (float)(~uVar60 & auVar319._12_4_);
  fVar299 = (float)(~uVar53 & auVar67._0_4_);
  fVar307 = (float)(~uVar55 & auVar67._4_4_);
  fVar315 = (float)(~uVar58 & auVar67._8_4_);
  fVar312 = (float)(~uVar60 & auVar67._12_4_);
  fVar148 = fVar149 * fVar181 - fVar240 * fVar223;
  fVar201 = fVar150 * fVar185 - fVar245 * fVar238;
  fVar151 = fVar152 * fVar283 - fVar248 * fVar243;
  fVar164 = fVar207 * fVar287 - fVar256 * fVar221;
  fVar242 = fVar240 * fVar103 - auVar176._0_4_ * fVar181;
  fVar205 = fVar245 * fVar65 - auVar176._4_4_ * fVar185;
  fVar217 = fVar248 * fVar105 - auVar176._8_4_ * fVar283;
  fVar219 = fVar256 * fVar126 - auVar176._12_4_ * fVar287;
  fVar121 = auVar176._0_4_ * fVar223 - fVar149 * fVar103;
  fVar101 = auVar176._4_4_ * fVar238 - fVar150 * fVar65;
  fVar152 = auVar176._8_4_ * fVar243 - fVar152 * fVar105;
  fVar222 = auVar176._12_4_ * fVar221 - fVar207 * fVar126;
  fVar149 = fVar153 * fVar223 - fVar181 * fVar63;
  fVar150 = fVar145 * fVar238 - fVar185 * fVar94;
  fVar207 = fVar146 * fVar243 - fVar283 * fVar91;
  fVar237 = fVar168 * fVar221 - fVar287 * fVar106;
  fVar62 = fVar180 * fVar181 - fVar103 * fVar153;
  fVar64 = fVar183 * fVar185 - fVar65 * fVar145;
  fVar90 = fVar203 * fVar283 - fVar105 * fVar146;
  fVar92 = fVar200 * fVar287 - fVar126 * fVar168;
  fVar103 = fVar63 * fVar103 - fVar223 * fVar180;
  fVar65 = fVar94 * fVar65 - fVar238 * fVar183;
  fVar105 = fVar91 * fVar105 - fVar243 * fVar203;
  fVar126 = fVar106 * fVar126 - fVar221 * fVar200;
  fVar153 = fVar192 * fVar259 - fVar66 * fVar235;
  fVar145 = fVar184 * fVar264 - fVar95 * fVar236;
  fVar146 = fVar191 * fVar284 - fVar100 * fVar241;
  fVar168 = fVar208 * fVar265 - fVar107 * fVar246;
  fVar63 = fVar66 * fVar299 - fVar127 * fVar259;
  fVar66 = fVar95 * fVar307 - fVar147 * fVar264;
  fVar94 = fVar100 * fVar315 - fVar99 * fVar284;
  fVar95 = fVar107 * fVar312 - fVar125 * fVar265;
  fVar91 = fVar127 * fVar235 - fVar192 * fVar299;
  fVar106 = fVar147 * fVar236 - fVar184 * fVar307;
  fVar96 = fVar99 * fVar241 - fVar191 * fVar315;
  fVar122 = fVar125 * fVar246 - fVar208 * fVar312;
  fVar180 = fVar165 * fVar235 - fVar259 * fVar266;
  fVar192 = fVar166 * fVar236 - fVar264 * fVar267;
  fVar181 = fVar170 * fVar241 - fVar284 * fVar271;
  fVar183 = fVar172 * fVar246 - fVar265 * fVar272;
  fVar184 = fVar268 * fVar259 - fVar299 * fVar165;
  fVar185 = fVar257 * fVar264 - fVar307 * fVar166;
  fVar203 = fVar309 * fVar284 - fVar315 * fVar170;
  fVar191 = fVar258 * fVar265 - fVar312 * fVar172;
  fVar100 = fVar266 * fVar299 - fVar235 * fVar268;
  fVar107 = fVar267 * fVar307 - fVar236 * fVar257;
  fVar99 = fVar271 * fVar315 - fVar241 * fVar309;
  fVar125 = fVar272 * fVar312 - fVar246 * fVar258;
  fVar165 = fVar100 + fVar121;
  fVar166 = fVar107 + fVar101;
  fVar170 = fVar99 + fVar152;
  fVar172 = fVar125 + fVar222;
  fVar127 = (float)((uint)fVar100 ^ __xmm_80000000800000008000000080000000) - fVar91;
  fVar147 = (float)((uint)fVar107 ^ _UNK_150651574) - fVar106;
  fVar99 = (float)((uint)fVar99 ^ _UNK_150651578) - fVar96;
  fVar125 = (float)((uint)fVar125 ^ _UNK_15065157c) - fVar122;
  fVar91 = fVar91 + fVar103;
  fVar106 = fVar106 + fVar65;
  fVar96 = fVar96 + fVar105;
  fVar122 = fVar122 + fVar126;
  fVar103 = (float)((uint)fVar121 ^ __xmm_80000000800000008000000080000000) - fVar103;
  fVar65 = (float)((uint)fVar101 ^ _UNK_150651574) - fVar65;
  fVar105 = (float)((uint)fVar152 ^ _UNK_150651578) - fVar105;
  fVar126 = (float)((uint)fVar222 ^ _UNK_15065157c) - fVar126;
  fVar100 = fVar180 + fVar148;
  fVar107 = fVar192 + fVar201;
  fVar121 = fVar181 + fVar151;
  fVar101 = fVar183 + fVar164;
  fVar222 = (float)((uint)fVar180 ^ __xmm_80000000800000008000000080000000) - fVar153;
  fVar180 = (float)((uint)fVar192 ^ _UNK_150651574) - fVar145;
  fVar192 = (float)((uint)fVar181 ^ _UNK_150651578) - fVar146;
  fVar181 = (float)((uint)fVar183 ^ _UNK_15065157c) - fVar168;
  fVar153 = fVar153 + fVar149;
  fVar145 = fVar145 + fVar150;
  fVar146 = fVar146 + fVar207;
  fVar168 = fVar168 + fVar237;
  fVar149 = (float)((uint)fVar148 ^ __xmm_80000000800000008000000080000000) - fVar149;
  fVar150 = (float)((uint)fVar201 ^ _UNK_150651574) - fVar150;
  fVar207 = (float)((uint)fVar151 ^ _UNK_150651578) - fVar207;
  fVar237 = (float)((uint)fVar164 ^ _UNK_15065157c) - fVar237;
  fVar148 = fVar184 + fVar242;
  fVar201 = fVar185 + fVar205;
  fVar151 = fVar203 + fVar217;
  fVar152 = fVar191 + fVar219;
  fVar164 = (float)((uint)fVar184 ^ __xmm_80000000800000008000000080000000) - fVar63;
  fVar183 = (float)((uint)fVar185 ^ _UNK_150651574) - fVar66;
  fVar184 = (float)((uint)fVar203 ^ _UNK_150651578) - fVar94;
  fVar185 = (float)((uint)fVar191 ^ _UNK_15065157c) - fVar95;
  fVar63 = fVar63 + fVar62;
  fVar66 = fVar66 + fVar64;
  fVar94 = fVar94 + fVar90;
  fVar95 = fVar95 + fVar92;
  fVar62 = (float)((uint)fVar242 ^ __xmm_80000000800000008000000080000000) - fVar62;
  fVar64 = (float)((uint)fVar205 ^ _UNK_150651574) - fVar64;
  fVar90 = (float)((uint)fVar217 ^ _UNK_150651578) - fVar90;
  fVar92 = (float)((uint)fVar219 ^ _UNK_15065157c) - fVar92;
  auVar316 = insertps(auVar316,*(undefined4 *)(uVar26 + lVar33),0x30);
  auVar249 = insertps(auVar249,*(undefined4 *)(uVar26 + lVar40),0x30);
  auVar224 = insertps(auVar224,*(undefined4 *)(uVar26 + lVar43),0x30);
  auVar193 = divps(auVar193,auVar317);
  auVar230._0_4_ = __xmm_80000000800000008000000080000000 ^ (uint)auVar193._0_4_;
  auVar230._4_4_ = _UNK_150651574 ^ (uint)auVar193._4_4_;
  auVar230._8_4_ = _UNK_150651578 ^ (uint)auVar193._8_4_;
  auVar230._12_4_ = _UNK_15065157c ^ (uint)auVar193._12_4_;
  auVar276 = maxps(auVar230,auVar193);
  uVar52 = -(uint)((float)__xmm_3f8000003f8000003f8000003f800000 < auVar276._0_4_);
  uVar53 = -(uint)(__xmm_3f8000003f8000003f8000003f800000._4_4_ < auVar276._4_4_);
  uVar56 = -(uint)(__xmm_3f8000003f8000003f8000003f800000._8_4_ < auVar276._8_4_);
  uVar55 = -(uint)(__xmm_3f8000003f8000003f8000003f800000._12_4_ < auVar276._12_4_);
  auVar82._4_4_ = uVar53;
  auVar82._0_4_ = uVar52;
  auVar82._8_4_ = uVar56;
  auVar82._12_4_ = uVar55;
  auVar158._0_4_ = uVar52 & auVar279._0_4_;
  auVar158._4_4_ = uVar53 & auVar279._4_4_;
  auVar158._8_4_ = uVar56 & auVar279._8_4_;
  auVar158._12_4_ = uVar55 & auVar279._12_4_;
  iVar23 = movmskps(uVar54,auVar158);
  auVar129 = insertps(auVar129,*(undefined4 *)(uVar26 + lVar49),0x30);
  auVar67 = ___xmm_3f8000003f8000003f8000003f800000;
  if (iVar23 != 0) {
    auVar67 = divps(___xmm_3f8000003f8000003f8000003f800000,auVar276);
  }
  auVar67 = blendvps(auVar276,auVar67,auVar82);
  fVar203 = auVar67._0_4_;
  fVar191 = auVar67._4_4_;
  fVar283 = auVar67._8_4_;
  fVar200 = auVar67._12_4_;
  fVar208 = fVar203 * fVar203;
  fVar287 = fVar191 * fVar191;
  fVar242 = fVar283 * fVar283;
  fVar205 = fVar200 * fVar200;
  auVar159._0_4_ =
       (((((((___xmm_bb9918b7bb9918b7bb9918b7bb9918b7 * fVar208 +
             ___xmm_3cc6061b3cc6061b3cc6061b3cc6061b) * fVar208 +
            ___xmm_bd732a49bd732a49bd732a49bd732a49) * fVar208 +
           ___xmm_3dcadb2a3dcadb2a3dcadb2a3dcadb2a) * fVar208 +
          ___xmm_be0f8549be0f8549be0f8549be0f8549) * fVar208 +
         ___xmm_3e4c7b543e4c7b543e4c7b543e4c7b54) * fVar208 +
        ___xmm_beaaa8cfbeaaa8cfbeaaa8cfbeaaa8cf) * fVar208 + ___xmm_3f7ffffe3f7ffffe3f7ffffe3f7ffffe
       ) * fVar203;
  auVar159._4_4_ =
       (((((((_UNK_150b51114 * fVar287 + _UNK_150b51124) * fVar287 + _UNK_150b51134) * fVar287 +
           _UNK_150b51144) * fVar287 + _UNK_150b51154) * fVar287 + _UNK_150b51164) * fVar287 +
        _UNK_150b51174) * fVar287 + _UNK_150b51184) * fVar191;
  auVar159._8_4_ =
       (((((((_UNK_150b51118 * fVar242 + _UNK_150b51128) * fVar242 + _UNK_150b51138) * fVar242 +
           _UNK_150b51148) * fVar242 + _UNK_150b51158) * fVar242 + _UNK_150b51168) * fVar242 +
        _UNK_150b51178) * fVar242 + _UNK_150b51188) * fVar283;
  auVar159._12_4_ =
       (((((((_UNK_150b5111c * fVar205 + _UNK_150b5112c) * fVar205 + _UNK_150b5113c) * fVar205 +
           _UNK_150b5114c) * fVar205 + _UNK_150b5115c) * fVar205 + _UNK_150b5116c) * fVar205 +
        _UNK_150b5117c) * fVar205 + _UNK_150b5118c) * fVar200;
  auVar231._0_4_ = ___xmm_3fc90fdb3fc90fdb3fc90fdb3fc90fdb - auVar159._0_4_;
  auVar231._4_4_ = _UNK_150b51194 - auVar159._4_4_;
  auVar231._8_4_ = _UNK_150b51198 - auVar159._8_4_;
  auVar231._12_4_ = _UNK_150b5119c - auVar159._12_4_;
  auVar67 = blendvps(auVar159,auVar231,auVar82);
  auVar83._4_4_ = -(uint)(auVar193._4_4_ < 0.0);
  auVar83._0_4_ = -(uint)(auVar193._0_4_ < 0.0);
  auVar262._0_4_ = __xmm_80000000800000008000000080000000 ^ auVar67._0_4_;
  auVar262._4_4_ = _UNK_150651574 ^ auVar67._4_4_;
  auVar262._8_4_ = _UNK_150651578 ^ auVar67._8_4_;
  auVar262._12_4_ = _UNK_15065157c ^ auVar67._12_4_;
  auVar83._8_4_ = -(uint)(auVar193._8_4_ < 0.0);
  auVar83._12_4_ = -(uint)(auVar193._12_4_ < 0.0);
  auVar193 = blendvps(auVar67,auVar262,auVar83);
  auVar84._4_4_ = -(uint)(fVar98 < 0.0);
  auVar84._0_4_ = -(uint)(fVar97 < 0.0);
  auVar84._8_4_ = -(uint)(fVar123 < 0.0);
  auVar84._12_4_ = -(uint)(fVar102 < 0.0);
  auVar67 = blendvps(___xmm_40490fdb40490fdb40490fdb40490fdb,___xmm_c0490fdbc0490fdbc0490fdbc0490fdb
                     ,auVar84);
  local_488 = auVar224._0_4_;
  fStack_484 = auVar224._4_4_;
  fStack_480 = auVar224._8_4_;
  fStack_47c = auVar224._12_4_;
  local_498 = auVar316._0_4_;
  fStack_494 = auVar316._4_4_;
  fStack_490 = auVar316._8_4_;
  fStack_48c = auVar316._12_4_;
  local_378 = auVar249._0_4_;
  fStack_374 = auVar249._4_4_;
  fStack_370 = auVar249._8_4_;
  fStack_36c = auVar249._12_4_;
  auVar85._0_4_ =
       (fVar149 * fVar149 + fVar103 * fVar103 + fVar62 * fVar62) * local_378 +
       (fVar153 * fVar153 + fVar91 * fVar91 + fVar63 * fVar63) * local_498 +
       (fVar100 * fVar100 + fVar165 * fVar165 + fVar148 * fVar148) * local_488;
  auVar85._4_4_ =
       (fVar150 * fVar150 + fVar65 * fVar65 + fVar64 * fVar64) * fStack_374 +
       (fVar145 * fVar145 + fVar106 * fVar106 + fVar66 * fVar66) * fStack_494 +
       (fVar107 * fVar107 + fVar166 * fVar166 + fVar201 * fVar201) * fStack_484;
  auVar85._8_4_ =
       (fVar207 * fVar207 + fVar105 * fVar105 + fVar90 * fVar90) * fStack_370 +
       (fVar146 * fVar146 + fVar96 * fVar96 + fVar94 * fVar94) * fStack_490 +
       (fVar121 * fVar121 + fVar170 * fVar170 + fVar151 * fVar151) * fStack_480;
  auVar85._12_4_ =
       (fVar237 * fVar237 + fVar126 * fVar126 + fVar92 * fVar92) * fStack_36c +
       (fVar168 * fVar168 + fVar122 * fVar122 + fVar95 * fVar95) * fStack_48c +
       (fVar101 * fVar101 + fVar172 * fVar172 + fVar152 * fVar152) * fStack_47c;
  auVar160._0_4_ = fVar127 * fVar127 + fVar164 * fVar164;
  auVar160._4_4_ = fVar147 * fVar147 + fVar183 * fVar183;
  auVar160._8_4_ = fVar99 * fVar99 + fVar184 * fVar184;
  auVar160._12_4_ = fVar125 * fVar125 + fVar185 * fVar185;
  local_448 = auVar129._0_4_;
  fStack_444 = auVar129._4_4_;
  fStack_440 = auVar129._8_4_;
  fStack_43c = auVar129._12_4_;
  local_268 = auVar250._0_4_;
  auVar276 = pmovsxbd(auVar160,local_268);
  auVar161._0_4_ = auVar276._0_4_ << 2;
  auVar161._4_4_ = auVar276._4_4_ << 2;
  auVar161._8_4_ = auVar276._8_4_ << 2;
  auVar161._12_4_ = auVar276._12_4_ << 2;
  auVar161 = auVar161 & auVar279;
  auVar276 = insertps(ZEXT416(*(uint *)(param_7 + auVar161._0_4_)),
                      *(undefined4 *)(param_7 + auVar161._4_4_),0x10);
  auVar276 = insertps(auVar276,*(undefined4 *)(param_7 + auVar161._8_4_),0x20);
  auVar300 = insertps(auVar276,*(undefined4 *)(param_7 + auVar161._12_4_),0x30);
  local_258 = auVar228._0_4_;
  auVar276 = pmovsxbd(auVar161,local_258);
  auVar162._0_4_ = auVar276._0_4_ << 2;
  auVar162._4_4_ = auVar276._4_4_ << 2;
  auVar162._8_4_ = auVar276._8_4_ << 2;
  auVar162._12_4_ = auVar276._12_4_ << 2;
  auVar163 = auVar162 & auVar279;
  auVar276 = insertps(ZEXT416(*(uint *)(param_10 + auVar163._0_4_)),
                      *(undefined4 *)(param_10 + auVar163._4_4_),0x10);
  auVar276 = insertps(auVar276,*(undefined4 *)(param_10 + auVar163._8_4_),0x20);
  auVar276 = insertps(auVar276,*(undefined4 *)(param_10 + auVar163._12_4_),0x30);
  auVar120._0_4_ = (fVar222 * fVar222 + auVar160._0_4_) * local_448 + auVar85._0_4_;
  auVar120._4_4_ = (fVar180 * fVar180 + auVar160._4_4_) * fStack_444 + auVar85._4_4_;
  auVar120._8_4_ = (fVar192 * fVar192 + auVar160._8_4_) * fStack_440 + auVar85._8_4_;
  auVar120._12_4_ = (fVar181 * fVar181 + auVar160._12_4_) * fStack_43c + auVar85._12_4_;
  if ((bVar37 & 9) == 0) {
    auVar279 = *(undefined1 (*) [16])(param_3 + (int)(uVar51 << 2));
    auVar85 = ZEXT416(*(uint *)(param_4 + (longlong)pbVar22));
    pbVar22 = param_4;
  }
  else {
    puVar13 = (uint *)(param_3 + (int)(uVar51 << 2));
    if ((uVar31 & 1) != 0) {
      auVar279 = ZEXT416(*puVar13);
    }
    if ((uVar31 & 2) != 0) {
      auVar279 = insertps(auVar279,puVar13[1],0x10);
    }
    if ((uVar31 & 4) != 0) {
      auVar279 = insertps(auVar279,puVar13[2],0x20);
    }
    if ((uVar31 & 8) != 0) {
      auVar279 = insertps(auVar279,puVar13[3],0x30);
    }
    param_4 = param_4 + (longlong)pbVar22;
    if ((uVar31 & 1) != 0) {
      pbVar22 = (byte *)(ulonglong)*param_4;
      auVar85 = ZEXT116(*param_4);
    }
    if ((uVar31 & 2) != 0) {
      auVar163._8_8_ = auVar85._8_8_;
      auVar163._0_8_ = auVar85._0_8_ & 0xffffffffffff00ff | (ulonglong)param_4[1] << 8;
      auVar85 = pblendw(auVar85,auVar163,0xfd);
      pbVar22 = param_4;
    }
    if ((uVar31 & 4) != 0) {
      pbVar22 = (byte *)(ulonglong)auVar85[3];
      auVar317 = pmovzxwd(auVar85,auVar85);
      auVar85._8_8_ = auVar317._8_8_;
      auVar85._0_8_ =
           auVar317._0_8_ & 0xffffffff0000ffff | (ulonglong)param_4[2] << 0x10 |
           (longlong)pbVar22 << 0x18;
    }
    if ((uVar31 & 8) != 0) {
      bVar29 = auVar85[2];
      auVar317 = pmovzxwd(auVar85,auVar85);
      auVar85._8_8_ = auVar317._8_8_;
      auVar85._0_8_ =
           auVar317._0_8_ & 0xffffffff0000ffff | (ulonglong)bVar29 << 0x10 |
           (ulonglong)param_4[3] << 0x18;
      pbVar22 = param_4;
    }
  }
  auVar317 = pmovzxbd(auVar163,auVar85 & ___xmm_00000000000000000000000001010101);
  auVar86._4_4_ = -auVar317._4_4_;
  auVar86._0_4_ = -auVar317._0_4_;
  auVar86._8_4_ = -auVar317._8_4_;
  auVar86._12_4_ = SUB124(SUB1612((undefined1  [16])0x0,4),8) - auVar317._12_4_;
  auVar276 = blendvps(auVar300,auVar276,auVar86);
  auVar232._0_4_ =
       auVar276._0_4_ *
       (((float)(auVar67._0_4_ & -(uint)(fVar128 < 0.0)) + auVar193._0_4_) - auVar279._0_4_);
  auVar232._4_4_ =
       auVar276._4_4_ *
       (((float)(auVar67._4_4_ & -(uint)(fVar167 < 0.0)) + auVar193._4_4_) - auVar279._4_4_);
  auVar232._8_4_ =
       auVar276._8_4_ *
       (((float)(auVar67._8_4_ & -(uint)(fVar171 < 0.0)) + auVar193._8_4_) - auVar279._8_4_);
  auVar232._12_4_ =
       auVar276._12_4_ *
       (((float)(auVar67._12_4_ & -(uint)(fVar178 < 0.0)) + auVar193._12_4_) - auVar279._12_4_);
  auVar67 = maxps(auVar232,___xmm_bf490fdbbf490fdbbf490fdbbf490fdb);
  auVar67 = minps(auVar67,___xmm_3f490fdb3f490fdb3f490fdb3f490fdb);
  auVar67 = divps(auVar67,auVar120);
  fVar97 = (float)(-(uint)(___xmm_322bcc77322bcc77322bcc77322bcc77 < auVar120._0_4_) & auVar67._0_4_
                  );
  fVar98 = (float)(-(uint)(_UNK_1506895d4 < auVar120._4_4_) & auVar67._4_4_);
  fVar123 = (float)(-(uint)(_UNK_1506895d8 < auVar120._8_4_) & auVar67._8_4_);
  fVar102 = (float)(-(uint)(_UNK_1506895dc < auVar120._12_4_) & auVar67._12_4_);
  auVar140._0_4_ = -(uint)(0.0 < local_488 && bVar15);
  auVar140._4_4_ = -(uint)(0.0 < fStack_484 && bVar16);
  auVar140._8_4_ = -(uint)(0.0 < fStack_480 && bVar17);
  auVar140._12_4_ = -(uint)(0.0 < fStack_47c && bVar18);
  iVar20 = movmskps((int)pbVar22,auVar140);
  iVar23 = 0;
  if (iVar20 != 0) {
    bVar29 = (char)((char)iVar20 << 4) >> 4;
    fVar128 = local_488 * fVar97;
    fStack_484 = fStack_484 * fVar98;
    fStack_480 = fStack_480 * fVar123;
    fStack_47c = fStack_47c * fVar102;
    auVar270._0_4_ = local_388 - fVar148 * fVar128;
    auVar270._4_4_ = fStack_384 - fVar201 * fStack_484;
    auVar270._8_4_ = fStack_380 - fVar151 * fStack_480;
    auVar270._12_4_ = fStack_37c - fVar152 * fStack_47c;
    if ((bVar29 & 1) == 0) {
      if ((bVar29 & 2) != 0) goto LAB_140074086;
LAB_140073c1c:
      if ((bVar29 & 4) != 0) goto LAB_1400740a1;
LAB_140073c2c:
      if ((char)bVar29 < '\0') goto LAB_1400740b7;
LAB_140073c37:
      auVar253._0_4_ = local_478 - fVar165 * fVar128;
      auVar253._4_4_ = fStack_474 - fVar166 * fStack_484;
      auVar253._8_4_ = fStack_470 - fVar170 * fStack_480;
      auVar253._12_4_ = fStack_46c - fVar172 * fStack_47c;
      if ((bVar29 & 1) != 0) goto LAB_1400740d6;
LAB_140073c44:
      if ((bVar29 & 2) != 0) goto LAB_1400740f1;
LAB_140073c55:
      if ((bVar29 & 4) != 0) goto LAB_140074106;
LAB_140073c5e:
      if ((char)bVar29 < '\0') goto LAB_14007411d;
LAB_140073c69:
      auVar141._0_4_ = fVar179 - fVar100 * fVar128;
      auVar141._4_4_ = fVar182 - fVar107 * fStack_484;
      auVar141._8_4_ = fVar186 - fVar121 * fStack_480;
      auVar141._12_4_ = fVar199 - fVar101 * fStack_47c;
    }
    else {
      *(float *)(param_1 + auVar211._0_4_) = auVar270._0_4_;
      if ((bVar29 & 2) == 0) goto LAB_140073c1c;
LAB_140074086:
      uVar14 = extractps(auVar270,1);
      *(undefined8 *)(param_1 + auVar211._4_4_) = uVar14;
      if ((bVar29 & 4) == 0) goto LAB_140073c2c;
LAB_1400740a1:
      uVar14 = extractps(auVar270,2);
      *(undefined8 *)(param_1 + auVar211._8_4_) = uVar14;
      if (-1 < (char)bVar29) goto LAB_140073c37;
LAB_1400740b7:
      uVar14 = extractps(auVar270,3);
      *(undefined8 *)(param_1 + auVar211._12_4_) = uVar14;
      auVar253._0_4_ = local_478 - fVar165 * fVar128;
      auVar253._4_4_ = fStack_474 - fVar166 * fStack_484;
      auVar253._8_4_ = fStack_470 - fVar170 * fStack_480;
      auVar253._12_4_ = fStack_46c - fVar172 * fStack_47c;
      if ((bVar29 & 1) == 0) goto LAB_140073c44;
LAB_1400740d6:
      *(int *)(param_1 + 4 + (longlong)auVar211._0_4_) = auVar253._0_4_;
      if ((bVar29 & 2) == 0) goto LAB_140073c55;
LAB_1400740f1:
      uVar14 = extractps(auVar253,1);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar211._4_4_) = uVar14;
      if ((bVar29 & 4) == 0) goto LAB_140073c5e;
LAB_140074106:
      uVar14 = extractps(auVar253,2);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar211._8_4_) = uVar14;
      if (-1 < (char)bVar29) goto LAB_140073c69;
LAB_14007411d:
      uVar14 = extractps(auVar253,3);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar211._12_4_) = uVar14;
      auVar141._0_4_ = fVar179 - fVar100 * fVar128;
      auVar141._4_4_ = fVar182 - fVar107 * fStack_484;
      auVar141._8_4_ = fVar186 - fVar121 * fStack_480;
      auVar141._12_4_ = fVar199 - fVar101 * fStack_47c;
    }
    if ((bVar29 & 1) != 0) {
      *(int *)(param_1 + 8 + (longlong)auVar211._0_4_) = auVar141._0_4_;
    }
    if ((bVar29 & 2) != 0) {
      uVar14 = extractps(auVar141,1);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar211._4_4_) = uVar14;
    }
    if ((bVar29 & 4) != 0) {
      uVar14 = extractps(auVar141,2);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar211._8_4_) = uVar14;
    }
    if ((char)bVar29 < '\0') {
      uVar14 = extractps(auVar141,3);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar211._12_4_) = uVar14;
    }
    if ((bVar29 & 1) != 0) {
      *(float *)(param_1 + 0xc + (longlong)auVar211._0_4_) = local_488;
    }
    if ((bVar29 & 2) != 0) {
      uVar14 = extractps(auVar224,1);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar211._4_4_) = uVar14;
    }
    if ((bVar29 & 4) != 0) {
      uVar14 = extractps(auVar224,2);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar211._8_4_) = uVar14;
    }
    iVar23 = CONCAT31((int3)((uint)iVar20 >> 8),bVar29);
    if ((char)bVar29 < '\0') {
      uVar14 = extractps(auVar224,3);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar211._12_4_) = uVar14;
      iVar23 = auVar211._12_4_;
    }
  }
  auVar87._0_4_ = -(uint)(0.0 < local_498 && bVar15);
  auVar87._4_4_ = -(uint)(0.0 < fStack_494 && bVar16);
  auVar87._8_4_ = -(uint)(0.0 < fStack_490 && bVar17);
  auVar87._12_4_ = -(uint)(0.0 < fStack_48c && bVar18);
  iVar20 = movmskps(iVar23,auVar87);
  iVar23 = 0;
  if (iVar20 != 0) {
    bVar29 = (char)((char)iVar20 << 4) >> 4;
    fVar100 = local_498 * fVar97;
    fStack_494 = fStack_494 * fVar98;
    fStack_490 = fStack_490 * fVar123;
    fStack_48c = fStack_48c * fVar102;
    local_408._0_4_ = (float)local_408._0_4_ - fVar63 * fVar100;
    local_408._4_4_ = fVar273 - fVar66 * fStack_494;
    fStack_400 = fVar234 - fVar94 * fStack_490;
    fStack_3fc = fVar274 - fVar95 * fStack_48c;
    if ((bVar29 & 1) != 0) {
      *(undefined4 *)(param_1 + auVar189._0_4_) = local_408._0_4_;
    }
    if ((bVar29 & 2) != 0) {
      uVar14 = extractps(_local_408,1);
      *(undefined8 *)(param_1 + auVar189._4_4_) = uVar14;
    }
    if ((bVar29 & 4) != 0) {
      uVar14 = extractps(_local_408,2);
      *(undefined8 *)(param_1 + auVar189._8_4_) = uVar14;
    }
    if ((char)bVar29 < '\0') {
      uVar14 = extractps(_local_408,3);
      *(undefined8 *)(param_1 + auVar189._12_4_) = uVar14;
    }
    local_4a8._0_4_ = (float)local_4a8._0_4_ - fVar91 * fVar100;
    local_4a8._4_4_ = (float)local_4a8._4_4_ - fVar106 * fStack_494;
    fStack_4a0 = fStack_4a0 - fVar96 * fStack_490;
    fStack_49c = fStack_49c - fVar122 * fStack_48c;
    if ((bVar29 & 1) != 0) {
      *(undefined4 *)(param_1 + 4 + (longlong)auVar189._0_4_) = local_4a8._0_4_;
    }
    if ((bVar29 & 2) != 0) {
      uVar14 = extractps(_local_4a8,1);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar189._4_4_) = uVar14;
    }
    if ((bVar29 & 4) != 0) {
      uVar14 = extractps(_local_4a8,2);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar189._8_4_) = uVar14;
    }
    if ((char)bVar29 < '\0') {
      uVar14 = extractps(_local_4a8,3);
      *(undefined8 *)(param_1 + 4 + (longlong)auVar189._12_4_) = uVar14;
    }
    local_3f8._0_4_ = (float)local_3f8._0_4_ - fVar153 * fVar100;
    local_3f8._4_4_ = fVar104 - fVar145 * fStack_494;
    fStack_3f0 = fVar93 - fVar146 * fStack_490;
    fStack_3ec = fVar124 - fVar168 * fStack_48c;
    if ((bVar29 & 1) != 0) {
      *(undefined4 *)(param_1 + 8 + (longlong)auVar189._0_4_) = local_3f8._0_4_;
    }
    if ((bVar29 & 2) != 0) {
      uVar14 = extractps(_local_3f8,1);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar189._4_4_) = uVar14;
    }
    if ((bVar29 & 4) != 0) {
      uVar14 = extractps(_local_3f8,2);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar189._8_4_) = uVar14;
    }
    if ((char)bVar29 < '\0') {
      uVar14 = extractps(_local_3f8,3);
      *(undefined8 *)(param_1 + 8 + (longlong)auVar189._12_4_) = uVar14;
    }
    if ((bVar29 & 1) != 0) {
      *(float *)(param_1 + 0xc + (longlong)auVar189._0_4_) = local_498;
    }
    if ((bVar29 & 2) != 0) {
      uVar14 = extractps(auVar316,1);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar189._4_4_) = uVar14;
    }
    if ((bVar29 & 4) != 0) {
      uVar14 = extractps(auVar316,2);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar189._8_4_) = uVar14;
    }
    iVar23 = CONCAT31((int3)((uint)iVar20 >> 8),bVar29);
    if ((char)bVar29 < '\0') {
      uVar14 = extractps(auVar316,3);
      *(undefined8 *)(param_1 + 0xc + (longlong)auVar189._12_4_) = uVar14;
      iVar23 = auVar189._12_4_;
    }
  }
  auVar142._0_4_ = -(uint)(0.0 < local_378 && bVar15);
  auVar142._4_4_ = -(uint)(0.0 < fStack_374 && bVar16);
  auVar142._8_4_ = -(uint)(0.0 < fStack_370 && bVar17);
  auVar142._12_4_ = -(uint)(0.0 < fStack_36c && bVar18);
  iVar20 = movmskps(iVar23,auVar142);
  iVar23 = 0;
  if (iVar20 == 0) goto LAB_140073eee;
  bVar29 = (char)((char)iVar20 << 4) >> 4;
  fVar63 = local_378 * fVar97;
  fStack_374 = fStack_374 * fVar98;
  fStack_370 = fStack_370 * fVar123;
  fStack_36c = fStack_36c * fVar102;
  auVar263._0_4_ = fVar239 - fVar62 * fVar63;
  auVar263._4_4_ = fVar244 - fVar64 * fStack_374;
  auVar263._8_4_ = fVar247 - fVar90 * fStack_370;
  auVar263._12_4_ = fVar255 - fVar92 * fStack_36c;
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + auVar197._0_4_) = auVar263._0_4_;
  }
  if ((bVar29 & 2) == 0) {
    if ((bVar29 & 4) != 0) goto LAB_1400743c6;
LAB_140073e70:
    if ((char)bVar29 < '\0') goto LAB_1400743dc;
LAB_140073e7b:
    auVar254._0_4_ = fVar202 - fVar103 * fVar63;
    auVar254._4_4_ = fVar204 - fVar65 * fStack_374;
    auVar254._8_4_ = fVar206 - fVar105 * fStack_370;
    auVar254._12_4_ = fVar209 - fVar126 * fStack_36c;
    if ((bVar29 & 1) != 0) goto LAB_1400743fb;
LAB_140073e88:
    if ((bVar29 & 2) != 0) goto LAB_14007440e;
LAB_140073e91:
    if ((bVar29 & 4) != 0) goto LAB_140074423;
LAB_140073e9a:
    if ((char)bVar29 < '\0') goto LAB_14007443a;
LAB_140073ea5:
    auVar214._0_4_ = fVar215 - fVar149 * fVar63;
    auVar214._4_4_ = fVar216 - fVar150 * fStack_374;
    auVar214._8_4_ = fVar218 - fVar207 * fStack_370;
    auVar214._12_4_ = fVar220 - fVar237 * fStack_36c;
  }
  else {
    uVar14 = extractps(auVar263,1);
    *(undefined8 *)(param_1 + auVar197._4_4_) = uVar14;
    if ((bVar29 & 4) == 0) goto LAB_140073e70;
LAB_1400743c6:
    uVar14 = extractps(auVar263,2);
    *(undefined8 *)(param_1 + auVar197._8_4_) = uVar14;
    if (-1 < (char)bVar29) goto LAB_140073e7b;
LAB_1400743dc:
    uVar14 = extractps(auVar263,3);
    *(undefined8 *)(param_1 + auVar197._12_4_) = uVar14;
    auVar254._0_4_ = fVar202 - fVar103 * fVar63;
    auVar254._4_4_ = fVar204 - fVar65 * fStack_374;
    auVar254._8_4_ = fVar206 - fVar105 * fStack_370;
    auVar254._12_4_ = fVar209 - fVar126 * fStack_36c;
    if ((bVar29 & 1) == 0) goto LAB_140073e88;
LAB_1400743fb:
    *(int *)(param_1 + 4 + (longlong)auVar197._0_4_) = auVar254._0_4_;
    if ((bVar29 & 2) == 0) goto LAB_140073e91;
LAB_14007440e:
    uVar14 = extractps(auVar254,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar197._4_4_) = uVar14;
    if ((bVar29 & 4) == 0) goto LAB_140073e9a;
LAB_140074423:
    uVar14 = extractps(auVar254,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar197._8_4_) = uVar14;
    if (-1 < (char)bVar29) goto LAB_140073ea5;
LAB_14007443a:
    uVar14 = extractps(auVar254,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar197._12_4_) = uVar14;
    auVar214._0_4_ = fVar215 - fVar149 * fVar63;
    auVar214._4_4_ = fVar216 - fVar150 * fStack_374;
    auVar214._8_4_ = fVar218 - fVar207 * fStack_370;
    auVar214._12_4_ = fVar220 - fVar237 * fStack_36c;
  }
  if ((bVar29 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar197._0_4_) = auVar214._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar14 = extractps(auVar214,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar197._4_4_) = uVar14;
  }
  if ((bVar29 & 4) != 0) {
    uVar14 = extractps(auVar214,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar197._8_4_) = uVar14;
  }
  if ((char)bVar29 < '\0') {
    uVar14 = extractps(auVar214,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar197._12_4_) = uVar14;
  }
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar197._0_4_) = local_378;
  }
  if ((bVar29 & 2) != 0) {
    uVar14 = extractps(auVar249,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar197._4_4_) = uVar14;
  }
  if ((bVar29 & 4) != 0) {
    uVar14 = extractps(auVar249,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar197._8_4_) = uVar14;
  }
  iVar23 = CONCAT31((int3)((uint)iVar20 >> 8),bVar29);
  if ((char)bVar29 < '\0') {
    uVar14 = extractps(auVar249,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar197._12_4_) = uVar14;
    iVar23 = auVar197._12_4_;
  }
LAB_140073eee:
  auVar88._0_4_ = -(uint)(0.0 < local_448 && bVar15);
  auVar88._4_4_ = -(uint)(0.0 < fStack_444 && bVar16);
  auVar88._8_4_ = -(uint)(0.0 < fStack_440 && bVar17);
  auVar88._12_4_ = -(uint)(0.0 < fStack_43c && bVar18);
  iVar23 = movmskps(iVar23,auVar88);
  if (iVar23 == 0) {
    return;
  }
  bVar29 = (char)((char)iVar23 << 4) >> 4;
  fVar97 = fVar97 * local_448;
  fVar98 = fVar98 * fStack_444;
  fVar123 = fVar123 * fStack_440;
  fVar102 = fVar102 * fStack_43c;
  auVar143._0_4_ = local_358 - fVar164 * fVar97;
  auVar143._4_4_ = fStack_354 - fVar183 * fVar98;
  auVar143._8_4_ = fStack_350 - fVar184 * fVar123;
  auVar143._12_4_ = fStack_34c - fVar185 * fVar102;
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + auVar156._0_4_) = auVar143._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar14 = extractps(auVar143,1);
    *(undefined8 *)(param_1 + auVar156._4_4_) = uVar14;
  }
  if ((bVar29 & 4) != 0) {
    uVar14 = extractps(auVar143,2);
    *(undefined8 *)(param_1 + auVar156._8_4_) = uVar14;
  }
  if ((char)bVar29 < '\0') {
    uVar14 = extractps(auVar143,3);
    *(undefined8 *)(param_1 + auVar156._12_4_) = uVar14;
    auVar89._0_4_ = (float)local_3e8._0_4_ - fVar127 * fVar97;
    auVar89._4_4_ = (float)local_3e8._4_4_ - fVar147 * fVar98;
    auVar89._8_4_ = fStack_3e0 - fVar99 * fVar123;
    auVar89._12_4_ = fStack_3dc - fVar125 * fVar102;
  }
  else {
    auVar89._0_4_ = (float)local_3e8._0_4_ - fVar127 * fVar97;
    auVar89._4_4_ = (float)local_3e8._4_4_ - fVar147 * fVar98;
    auVar89._8_4_ = fStack_3e0 - fVar99 * fVar123;
    auVar89._12_4_ = fStack_3dc - fVar125 * fVar102;
  }
  if ((bVar29 & 1) != 0) {
    *(int *)(param_1 + 4 + (longlong)auVar156._0_4_) = auVar89._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar14 = extractps(auVar89,1);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar156._4_4_) = uVar14;
  }
  if ((bVar29 & 4) != 0) {
    uVar14 = extractps(auVar89,2);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar156._8_4_) = uVar14;
  }
  if ((char)bVar29 < '\0') {
    uVar14 = extractps(auVar89,3);
    *(undefined8 *)(param_1 + 4 + (longlong)auVar156._12_4_) = uVar14;
    auVar233._0_4_ = local_3c8 - fVar222 * fVar97;
    auVar233._4_4_ = fStack_3c4 - fVar180 * fVar98;
    auVar233._8_4_ = fStack_3c0 - fVar192 * fVar123;
    auVar233._12_4_ = fStack_3bc - fVar181 * fVar102;
  }
  else {
    auVar233._0_4_ = local_3c8 - fVar222 * fVar97;
    auVar233._4_4_ = fStack_3c4 - fVar180 * fVar98;
    auVar233._8_4_ = fStack_3c0 - fVar192 * fVar123;
    auVar233._12_4_ = fStack_3bc - fVar181 * fVar102;
  }
  if ((bVar29 & 1) != 0) {
    *(int *)(param_1 + 8 + (longlong)auVar156._0_4_) = auVar233._0_4_;
  }
  if ((bVar29 & 2) != 0) {
    uVar14 = extractps(auVar233,1);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar156._4_4_) = uVar14;
  }
  if ((bVar29 & 4) != 0) {
    uVar14 = extractps(auVar233,2);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar156._8_4_) = uVar14;
  }
  if ((char)bVar29 < '\0') {
    uVar14 = extractps(auVar233,3);
    *(undefined8 *)(param_1 + 8 + (longlong)auVar156._12_4_) = uVar14;
  }
  if ((bVar29 & 1) != 0) {
    *(float *)(param_1 + 0xc + (longlong)auVar156._0_4_) = local_448;
  }
  if ((bVar29 & 2) != 0) {
    uVar14 = extractps(auVar129,1);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar156._4_4_) = uVar14;
  }
  if ((bVar29 & 4) != 0) {
    uVar14 = extractps(auVar129,2);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar156._8_4_) = uVar14;
  }
  if ((char)bVar29 < '\0') {
    uVar14 = extractps(auVar129,3);
    *(undefined8 *)(param_1 + 0xc + (longlong)auVar156._12_4_) = uVar14;
  }
  return;
}


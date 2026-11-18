// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 10

// sha256_block_data_order @ 140dedc80

/* WARNING: Removing unreachable block (ram,0x000140defc48) */
/* WARNING: Removing unreachable block (ram,0x000140defe4e) */
/* WARNING: Removing unreachable block (ram,0x000140defa3a) */
/* WARNING: Removing unreachable block (ram,0x000140def835) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sha256_block_data_order(uint *param_1,undefined1 (*param_2) [16],longlong param_3)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  undefined1 (*pauVar5) [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int iVar14;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  int *piVar46;
  int *piVar47;
  undefined1 auVar50 [60];
  int *piVar51;
  int *piVar52;
  int *piVar53;
  int *piVar54;
  int *piVar55;
  int *piVar56;
  int *piVar57;
  int *piVar58;
  int *piVar59;
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  ulonglong uVar68;
  undefined1 (*pauVar69) [16];
  undefined1 (*pauVar70) [16];
  int *piVar71;
  undefined1 (*pauVar72) [16];
  undefined1 (*pauVar73) [16];
  uint uVar74;
  int iVar75;
  uint uVar76;
  uint uVar77;
  uint uVar78;
  int iVar79;
  uint uVar80;
  uint uVar81;
  uint uVar82;
  uint uVar83;
  uint uVar84;
  uint uVar85;
  uint uVar86;
  uint uVar87;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
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
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 in_ZMM0 [64];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar111 [64];
  undefined1 auVar112 [64];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar115 [64];
  undefined1 auVar116 [64];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 in_ZMM3 [64];
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
  undefined1 auVar131 [32];
  undefined1 auVar132 [32];
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
  undefined1 auVar151 [32];
  undefined1 auVar152 [32];
  undefined1 auVar153 [32];
  undefined1 auVar154 [32];
  undefined1 in_ZMM6 [64];
  uint uVar155;
  uint uVar190;
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [32];
  undefined1 auVar183 [32];
  undefined1 auVar184 [32];
  undefined1 auVar185 [32];
  undefined1 auVar186 [32];
  undefined1 auVar187 [32];
  uint uVar188;
  uint uVar189;
  undefined1 in_ZMM7 [64];
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined1 in_ZMM9 [64];
  undefined1 auStack_290 [400];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  int *piVar48;
  int *piVar49;
  
  auVar113 = _DAT_140def100;
  auVar109 = _DAT_140def0e0;
  if ((_DAT_15540a9f8 & 0x20000000) != 0) {
    auVar111._16_48_ = in_ZMM1._16_48_;
    auVar115._16_48_ = in_ZMM2._16_48_;
    auVar115._12_4_ = param_1[2];
    auVar115._8_4_ = param_1[3];
    auVar183._20_4_ = *param_1;
    auVar183._16_4_ = param_1[1];
    auVar183._24_4_ = param_1[3];
    auVar183._28_4_ = param_1[2];
    auVar115._0_8_ = CONCAT44(param_1[6],param_1[7]);
    auVar183._8_4_ = param_1[5];
    auVar183._0_8_ = auVar115._0_8_;
    auVar183._12_4_ = param_1[4];
    auVar111._0_16_ = auVar183._8_16_;
    do {
      auVar130 = pshufb(*param_2,_DAT_140def0c0);
      pauVar73 = param_2 + 3;
      auVar109._0_4_ = K256 + auVar130._0_4_;
      auVar109._4_4_ = DAT_140deeec4 + auVar130._4_4_;
      auVar109._8_4_ = DAT_140deeec8 + auVar130._8_4_;
      auVar109._12_4_ = DAT_140deeecc + auVar130._12_4_;
      auVar147 = pshufb(param_2[1],_DAT_140def0c0);
      auVar116._16_48_ = auVar115._16_48_;
      auVar150 = sha256rnds2_sha(auVar115._0_16_,auVar111._0_16_,auVar109);
      auVar113._4_4_ = auVar109._12_4_;
      auVar113._0_4_ = auVar109._8_4_;
      auVar113._8_4_ = auVar109._0_4_;
      auVar113._12_4_ = auVar109._0_4_;
      auVar112._16_48_ = auVar111._16_48_;
      auVar109 = sha256rnds2_sha(auVar111._0_16_,auVar150,auVar113);
      auVar181._0_4_ = DAT_140deeee0 + auVar147._0_4_;
      auVar181._4_4_ = DAT_140deeee4 + auVar147._4_4_;
      auVar181._8_4_ = DAT_140deeee8 + auVar147._8_4_;
      auVar181._12_4_ = DAT_140deeeec + auVar147._12_4_;
      auVar149 = pshufb(param_2[2],_DAT_140def0c0);
      auVar113 = sha256rnds2_sha(auVar150,auVar109,auVar181);
      auVar150._4_4_ = auVar181._12_4_;
      auVar150._0_4_ = auVar181._8_4_;
      auVar150._8_4_ = auVar181._0_4_;
      auVar150._12_4_ = auVar181._0_4_;
      param_2 = param_2 + 4;
      auVar181 = sha256msg1_sha(auVar130,auVar147);
      auVar109 = sha256rnds2_sha(auVar109,auVar113,auVar150);
      auVar130._0_4_ = DAT_140deef00 + auVar149._0_4_;
      auVar130._4_4_ = DAT_140deef04 + auVar149._4_4_;
      auVar130._8_4_ = DAT_140deef08 + auVar149._8_4_;
      auVar130._12_4_ = DAT_140deef0c + auVar149._12_4_;
      auVar133 = pshufb(*pauVar73,_DAT_140def0c0);
      auVar113 = sha256rnds2_sha(auVar113,auVar109,auVar130);
      auVar129._4_4_ = auVar130._12_4_;
      auVar129._0_4_ = auVar130._8_4_;
      auVar129._8_4_ = auVar130._0_4_;
      auVar129._12_4_ = auVar130._0_4_;
      auVar117._0_4_ = auVar181._0_4_ + auVar149._4_4_;
      auVar117._4_4_ = auVar181._4_4_ + auVar149._8_4_;
      auVar117._8_4_ = auVar181._8_4_ + auVar149._12_4_;
      auVar117._12_4_ = auVar181._12_4_ + auVar133._0_4_;
      auVar150 = sha256msg1_sha(auVar147,auVar149);
      auVar109 = sha256rnds2_sha(auVar109,auVar113,auVar129);
      auVar147._0_4_ = DAT_140deef20 + auVar133._0_4_;
      auVar147._4_4_ = DAT_140deef24 + auVar133._4_4_;
      auVar147._8_4_ = DAT_140deef28 + auVar133._8_4_;
      auVar147._12_4_ = DAT_140deef2c + auVar133._12_4_;
      auVar181 = sha256msg2_sha(auVar117,auVar133);
      auVar113 = sha256rnds2_sha(auVar113,auVar109,auVar147);
      auVar148._4_4_ = auVar147._12_4_;
      auVar148._0_4_ = auVar147._8_4_;
      auVar148._8_4_ = auVar147._0_4_;
      auVar148._12_4_ = auVar147._0_4_;
      auVar120._0_4_ = auVar150._0_4_ + auVar133._4_4_;
      auVar120._4_4_ = auVar150._4_4_ + auVar133._8_4_;
      auVar120._8_4_ = auVar150._8_4_ + auVar133._12_4_;
      auVar120._12_4_ = auVar150._12_4_ + auVar181._0_4_;
      auVar130 = sha256msg1_sha(auVar149,auVar133);
      auVar109 = sha256rnds2_sha(auVar109,auVar113,auVar148);
      auVar149._0_4_ = DAT_140deef40 + auVar181._0_4_;
      auVar149._4_4_ = DAT_140deef44 + auVar181._4_4_;
      auVar149._8_4_ = DAT_140deef48 + auVar181._8_4_;
      auVar149._12_4_ = DAT_140deef4c + auVar181._12_4_;
      auVar150 = sha256msg2_sha(auVar120,auVar181);
      auVar113 = sha256rnds2_sha(auVar113,auVar109,auVar149);
      auVar180._4_4_ = auVar149._12_4_;
      auVar180._0_4_ = auVar149._8_4_;
      auVar180._8_4_ = auVar149._0_4_;
      auVar180._12_4_ = auVar149._0_4_;
      auVar125._0_4_ = auVar130._0_4_ + auVar181._4_4_;
      auVar125._4_4_ = auVar130._4_4_ + auVar181._8_4_;
      auVar125._8_4_ = auVar130._8_4_ + auVar181._12_4_;
      auVar125._12_4_ = auVar130._12_4_ + auVar150._0_4_;
      auVar129 = sha256msg1_sha(auVar133,auVar181);
      auVar109 = sha256rnds2_sha(auVar109,auVar113,auVar180);
      auVar133._0_4_ = DAT_140deef60 + auVar150._0_4_;
      auVar133._4_4_ = DAT_140deef64 + auVar150._4_4_;
      auVar133._8_4_ = DAT_140deef68 + auVar150._8_4_;
      auVar133._12_4_ = DAT_140deef6c + auVar150._12_4_;
      auVar130 = sha256msg2_sha(auVar125,auVar150);
      auVar113 = sha256rnds2_sha(auVar113,auVar109,auVar133);
      auVar88._4_4_ = auVar133._12_4_;
      auVar88._0_4_ = auVar133._8_4_;
      auVar88._8_4_ = auVar133._0_4_;
      auVar88._12_4_ = auVar133._0_4_;
      auVar134._0_4_ = auVar129._0_4_ + auVar150._4_4_;
      auVar134._4_4_ = auVar129._4_4_ + auVar150._8_4_;
      auVar134._8_4_ = auVar129._8_4_ + auVar150._12_4_;
      auVar134._12_4_ = auVar129._12_4_ + auVar130._0_4_;
      auVar181 = sha256msg1_sha(auVar181,auVar150);
      auVar109 = sha256rnds2_sha(auVar109,auVar113,auVar88);
      auVar89._0_4_ = DAT_140deef80 + auVar130._0_4_;
      auVar89._4_4_ = DAT_140deef84 + auVar130._4_4_;
      auVar89._8_4_ = DAT_140deef88 + auVar130._8_4_;
      auVar89._12_4_ = DAT_140deef8c + auVar130._12_4_;
      auVar129 = sha256msg2_sha(auVar134,auVar130);
      auVar113 = sha256rnds2_sha(auVar113,auVar109,auVar89);
      auVar90._4_4_ = auVar89._12_4_;
      auVar90._0_4_ = auVar89._8_4_;
      auVar90._8_4_ = auVar89._0_4_;
      auVar90._12_4_ = auVar89._0_4_;
      auVar118._0_4_ = auVar181._0_4_ + auVar130._4_4_;
      auVar118._4_4_ = auVar181._4_4_ + auVar130._8_4_;
      auVar118._8_4_ = auVar181._8_4_ + auVar130._12_4_;
      auVar118._12_4_ = auVar181._12_4_ + auVar129._0_4_;
      auVar150 = sha256msg1_sha(auVar150,auVar130);
      auVar109 = sha256rnds2_sha(auVar109,auVar113,auVar90);
      auVar91._0_4_ = DAT_140deefa0 + auVar129._0_4_;
      auVar91._4_4_ = DAT_140deefa4 + auVar129._4_4_;
      auVar91._8_4_ = DAT_140deefa8 + auVar129._8_4_;
      auVar91._12_4_ = DAT_140deefac + auVar129._12_4_;
      auVar181 = sha256msg2_sha(auVar118,auVar129);
      auVar113 = sha256rnds2_sha(auVar113,auVar109,auVar91);
      auVar92._4_4_ = auVar91._12_4_;
      auVar92._0_4_ = auVar91._8_4_;
      auVar92._8_4_ = auVar91._0_4_;
      auVar92._12_4_ = auVar91._0_4_;
      auVar121._0_4_ = auVar150._0_4_ + auVar129._4_4_;
      auVar121._4_4_ = auVar150._4_4_ + auVar129._8_4_;
      auVar121._8_4_ = auVar150._8_4_ + auVar129._12_4_;
      auVar121._12_4_ = auVar150._12_4_ + auVar181._0_4_;
      auVar130 = sha256msg1_sha(auVar130,auVar129);
      auVar109 = sha256rnds2_sha(auVar109,auVar113,auVar92);
      auVar93._0_4_ = _DAT_140deefc0 + auVar181._0_4_;
      auVar93._4_4_ = _UNK_140deefc4 + auVar181._4_4_;
      auVar93._8_4_ = _UNK_140deefc8 + auVar181._8_4_;
      auVar93._12_4_ = _UNK_140deefcc + auVar181._12_4_;
      auVar150 = sha256msg2_sha(auVar121,auVar181);
      auVar113 = sha256rnds2_sha(auVar113,auVar109,auVar93);
      auVar94._4_4_ = auVar93._12_4_;
      auVar94._0_4_ = auVar93._8_4_;
      auVar94._8_4_ = auVar93._0_4_;
      auVar94._12_4_ = auVar93._0_4_;
      auVar126._0_4_ = auVar130._0_4_ + auVar181._4_4_;
      auVar126._4_4_ = auVar130._4_4_ + auVar181._8_4_;
      auVar126._8_4_ = auVar130._8_4_ + auVar181._12_4_;
      auVar126._12_4_ = auVar130._12_4_ + auVar150._0_4_;
      auVar129 = sha256msg1_sha(auVar129,auVar181);
      auVar109 = sha256rnds2_sha(auVar109,auVar113,auVar94);
      auVar95._0_4_ = _DAT_140deefe0 + auVar150._0_4_;
      auVar95._4_4_ = _UNK_140deefe4 + auVar150._4_4_;
      auVar95._8_4_ = _UNK_140deefe8 + auVar150._8_4_;
      auVar95._12_4_ = _UNK_140deefec + auVar150._12_4_;
      auVar130 = sha256msg2_sha(auVar126,auVar150);
      auVar113 = sha256rnds2_sha(auVar113,auVar109,auVar95);
      auVar96._4_4_ = auVar95._12_4_;
      auVar96._0_4_ = auVar95._8_4_;
      auVar96._8_4_ = auVar95._0_4_;
      auVar96._12_4_ = auVar95._0_4_;
      auVar135._0_4_ = auVar129._0_4_ + auVar150._4_4_;
      auVar135._4_4_ = auVar129._4_4_ + auVar150._8_4_;
      auVar135._8_4_ = auVar129._8_4_ + auVar150._12_4_;
      auVar135._12_4_ = auVar129._12_4_ + auVar130._0_4_;
      auVar181 = sha256msg1_sha(auVar181,auVar150);
      auVar109 = sha256rnds2_sha(auVar109,auVar113,auVar96);
      auVar97._0_4_ = _DAT_140def000 + auVar130._0_4_;
      auVar97._4_4_ = _UNK_140def004 + auVar130._4_4_;
      auVar97._8_4_ = _UNK_140def008 + auVar130._8_4_;
      auVar97._12_4_ = _UNK_140def00c + auVar130._12_4_;
      auVar129 = sha256msg2_sha(auVar135,auVar130);
      auVar113 = sha256rnds2_sha(auVar113,auVar109,auVar97);
      auVar98._4_4_ = auVar97._12_4_;
      auVar98._0_4_ = auVar97._8_4_;
      auVar98._8_4_ = auVar97._0_4_;
      auVar98._12_4_ = auVar97._0_4_;
      auVar119._0_4_ = auVar181._0_4_ + auVar130._4_4_;
      auVar119._4_4_ = auVar181._4_4_ + auVar130._8_4_;
      auVar119._8_4_ = auVar181._8_4_ + auVar130._12_4_;
      auVar119._12_4_ = auVar181._12_4_ + auVar129._0_4_;
      auVar150 = sha256msg1_sha(auVar150,auVar130);
      auVar109 = sha256rnds2_sha(auVar109,auVar113,auVar98);
      auVar99._0_4_ = _DAT_140def020 + auVar129._0_4_;
      auVar99._4_4_ = _UNK_140def024 + auVar129._4_4_;
      auVar99._8_4_ = _UNK_140def028 + auVar129._8_4_;
      auVar99._12_4_ = _UNK_140def02c + auVar129._12_4_;
      auVar181 = sha256msg2_sha(auVar119,auVar129);
      auVar113 = sha256rnds2_sha(auVar113,auVar109,auVar99);
      auVar100._4_4_ = auVar99._12_4_;
      auVar100._0_4_ = auVar99._8_4_;
      auVar100._8_4_ = auVar99._0_4_;
      auVar100._12_4_ = auVar99._0_4_;
      auVar122._0_4_ = auVar150._0_4_ + auVar129._4_4_;
      auVar122._4_4_ = auVar150._4_4_ + auVar129._8_4_;
      auVar122._8_4_ = auVar150._8_4_ + auVar129._12_4_;
      auVar122._12_4_ = auVar150._12_4_ + auVar181._0_4_;
      auVar130 = sha256msg1_sha(auVar130,auVar129);
      auVar109 = sha256rnds2_sha(auVar109,auVar113,auVar100);
      auVar101._0_4_ = _DAT_140def040 + auVar181._0_4_;
      auVar101._4_4_ = _UNK_140def044 + auVar181._4_4_;
      auVar101._8_4_ = _UNK_140def048 + auVar181._8_4_;
      auVar101._12_4_ = _UNK_140def04c + auVar181._12_4_;
      auVar150 = sha256msg2_sha(auVar122,auVar181);
      auVar113 = sha256rnds2_sha(auVar113,auVar109,auVar101);
      auVar102._4_4_ = auVar101._12_4_;
      auVar102._0_4_ = auVar101._8_4_;
      auVar102._8_4_ = auVar101._0_4_;
      auVar102._12_4_ = auVar101._0_4_;
      auVar127._0_4_ = auVar130._0_4_ + auVar181._4_4_;
      auVar127._4_4_ = auVar130._4_4_ + auVar181._8_4_;
      auVar127._8_4_ = auVar130._8_4_ + auVar181._12_4_;
      auVar127._12_4_ = auVar130._12_4_ + auVar150._0_4_;
      auVar130 = sha256msg1_sha(auVar129,auVar181);
      auVar109 = sha256rnds2_sha(auVar109,auVar113,auVar102);
      auVar103._0_4_ = _DAT_140def060 + auVar150._0_4_;
      auVar103._4_4_ = _UNK_140def064 + auVar150._4_4_;
      auVar103._8_4_ = _UNK_140def068 + auVar150._8_4_;
      auVar103._12_4_ = _UNK_140def06c + auVar150._12_4_;
      auVar181 = sha256msg2_sha(auVar127,auVar150);
      auVar113 = sha256rnds2_sha(auVar113,auVar109,auVar103);
      auVar104._4_4_ = auVar103._12_4_;
      auVar104._0_4_ = auVar103._8_4_;
      auVar104._8_4_ = auVar103._0_4_;
      auVar104._12_4_ = auVar103._0_4_;
      auVar109 = sha256rnds2_sha(auVar109,auVar113,auVar104);
      auVar136._0_4_ = auVar130._0_4_ + auVar150._4_4_;
      auVar136._4_4_ = auVar130._4_4_ + auVar150._8_4_;
      auVar136._8_4_ = auVar130._8_4_ + auVar150._12_4_;
      auVar136._12_4_ = auVar130._12_4_ + auVar181._0_4_;
      auVar105._0_4_ = _DAT_140def080 + auVar181._0_4_;
      auVar105._4_4_ = _UNK_140def084 + auVar181._4_4_;
      auVar105._8_4_ = _UNK_140def088 + auVar181._8_4_;
      auVar105._12_4_ = _UNK_140def08c + auVar181._12_4_;
      auVar113 = sha256rnds2_sha(auVar113,auVar109,auVar105);
      auVar106._4_4_ = auVar105._12_4_;
      auVar106._0_4_ = auVar105._8_4_;
      auVar106._8_4_ = auVar105._0_4_;
      auVar106._12_4_ = auVar105._0_4_;
      auVar181 = sha256msg2_sha(auVar136,auVar181);
      auVar109 = sha256rnds2_sha(auVar109,auVar113,auVar106);
      auVar107._0_4_ = _DAT_140def0a0 + auVar181._0_4_;
      auVar107._4_4_ = _UNK_140def0a4 + auVar181._4_4_;
      auVar107._8_4_ = _UNK_140def0a8 + auVar181._8_4_;
      auVar107._12_4_ = _UNK_140def0ac + auVar181._12_4_;
      auVar113 = sha256rnds2_sha(auVar113,auVar109,auVar107);
      auVar108._4_4_ = auVar107._12_4_;
      auVar108._0_4_ = auVar107._8_4_;
      auVar108._8_4_ = auVar107._0_4_;
      auVar108._12_4_ = auVar107._0_4_;
      param_3 = param_3 + -1;
      auVar109 = sha256rnds2_sha(auVar109,auVar113,auVar108);
      auVar116._0_4_ = auVar113._0_4_ + auVar115._0_4_;
      auVar116._4_4_ = auVar113._4_4_ + auVar115._4_4_;
      auVar116._8_4_ = auVar113._8_4_ + auVar115._8_4_;
      auVar116._12_4_ = auVar113._12_4_ + auVar115._12_4_;
      auVar112._0_4_ = auVar109._0_4_ + auVar111._0_4_;
      auVar112._4_4_ = auVar109._4_4_ + auVar111._4_4_;
      auVar112._8_4_ = auVar109._8_4_ + auVar111._8_4_;
      auVar112._12_4_ = auVar109._12_4_ + auVar111._12_4_;
      auVar111 = auVar112;
      auVar115 = auVar116;
    } while (param_3 != 0);
    auVar114._4_4_ = auVar116._0_4_;
    auVar114._0_4_ = auVar116._4_4_;
    auVar114._8_4_ = auVar116._12_4_;
    auVar114._12_4_ = auVar116._8_4_;
    auVar154._4_4_ = auVar112._8_4_;
    auVar154._0_4_ = auVar112._12_4_;
    auVar154._8_4_ = auVar112._4_4_;
    auVar154._12_4_ = auVar112._0_4_;
    auVar50._4_56_ = auVar112._8_56_;
    auVar50._0_4_ = auVar112._0_4_;
    auVar110._0_8_ = auVar50._0_8_ << 0x20;
    auVar110._8_4_ = auVar112._12_4_;
    auVar110._12_4_ = auVar112._8_4_;
    auVar154._16_16_ = auVar114;
    *(longlong *)param_1 = auVar110._8_8_;
    *(longlong *)(param_1 + 2) = auVar114._8_8_;
    *(undefined1 (*) [16])(param_1 + 4) = auVar154._8_16_;
    return;
  }
  if ((_DAT_15540a9f8 & 0x128) == 0x128) {
    uVar68 = (ulonglong)auStack_290 & 0xfffffffffffffc00;
    pauVar69 = (undefined1 (*) [16])(uVar68 + 0x1c0);
    *(uint **)(uVar68 + 0x200) = param_1;
    *(undefined1 (**) [16])(uVar68 + 0x208) = param_2;
    *(undefined1 (**) [16])(uVar68 + 0x210) = param_2 + param_3 * 4;
    *(BADSPACEBASE **)(uVar68 + 0x218) = register0x00000020;
    *(undefined1 (*) [16])(uVar68 + 0x220) = in_ZMM6._0_16_;
    *(undefined1 (*) [16])(uVar68 + 0x230) = in_ZMM7._0_16_;
    *(undefined8 *)(uVar68 + 0x240) = unaff_XMM8_Qa;
    *(undefined8 *)(uVar68 + 0x248) = unaff_XMM8_Qb;
    *(undefined1 (*) [16])(uVar68 + 0x250) = in_ZMM9._0_16_;
    pauVar73 = param_2 + 4;
    uVar62 = *param_1;
    uVar63 = param_1[1];
    uVar66 = param_1[2];
    pauVar72 = pauVar73;
    if (pauVar73 == param_2 + param_3 * 4) {
      pauVar72 = (undefined1 (*) [16])(uVar68 + 0x1c0);
    }
    uVar83 = param_1[3];
    uVar84 = param_1[4];
    uVar85 = param_1[5];
    uVar86 = param_1[6];
    uVar64 = param_1[7];
    auVar60._16_16_ = _UNK_140def0f0;
    auVar60._0_16_ = _DAT_140def0e0;
    auVar61._16_16_ = _UNK_140def110;
    auVar61._0_16_ = _DAT_140def100;
    do {
      auVar132._16_16_ = _UNK_140def0d0;
      auVar132._0_16_ = _DAT_140def0c0;
      auVar131._16_16_ = ZEXT116(1) * *pauVar72;
      auVar131._0_16_ = ZEXT116(0) * *pauVar72 | ZEXT116(1) * pauVar73[-4];
      auVar151._16_16_ = ZEXT116(1) * pauVar72[1];
      auVar151._0_16_ = ZEXT116(0) * pauVar72[1] | ZEXT116(1) * pauVar73[-3];
      auVar184 = vpshufb_avx2(auVar131,auVar132);
      auVar152._16_16_ = ZEXT116(1) * pauVar72[2];
      auVar152._0_16_ = ZEXT116(0) * pauVar72[2] | ZEXT116(1) * pauVar73[-2];
      auVar185 = vpshufb_avx2(auVar151,auVar132);
      auVar153._16_16_ = ZEXT116(1) * pauVar72[3];
      auVar153._0_16_ = ZEXT116(0) * pauVar72[3] | ZEXT116(1) * pauVar73[-1];
      auVar186 = vpshufb_avx2(auVar152,auVar132);
      iVar18 = auVar184._4_4_ + DAT_140deeec4;
      iVar22 = auVar184._8_4_ + DAT_140deeec8;
      iVar26 = auVar184._12_4_ + DAT_140deeecc;
      iVar30 = auVar184._16_4_ + DAT_140deeed0;
      iVar34 = auVar184._20_4_ + DAT_140deeed4;
      iVar38 = auVar184._24_4_ + DAT_140deeed8;
      iVar42 = auVar184._28_4_ + DAT_140deeedc;
      auVar187 = vpshufb_avx2(auVar153,auVar132);
      iVar79 = auVar185._0_4_ + DAT_140deeee0;
      iVar19 = auVar185._4_4_ + DAT_140deeee4;
      iVar23 = auVar185._8_4_ + DAT_140deeee8;
      iVar27 = auVar185._12_4_ + DAT_140deeeec;
      iVar31 = auVar185._16_4_ + DAT_140deeef0;
      iVar35 = auVar185._20_4_ + DAT_140deeef4;
      iVar39 = auVar185._24_4_ + DAT_140deeef8;
      iVar43 = auVar185._28_4_ + DAT_140deeefc;
      iVar75 = auVar186._0_4_ + DAT_140deef00;
      iVar20 = auVar186._4_4_ + DAT_140deef04;
      iVar24 = auVar186._8_4_ + DAT_140deef08;
      iVar28 = auVar186._12_4_ + DAT_140deef0c;
      iVar32 = auVar186._16_4_ + DAT_140deef10;
      iVar36 = auVar186._20_4_ + DAT_140deef14;
      iVar40 = auVar186._24_4_ + DAT_140deef18;
      iVar44 = auVar186._28_4_ + DAT_140deef1c;
      iVar14 = auVar187._0_4_ + DAT_140deef20;
      iVar21 = auVar187._4_4_ + DAT_140deef24;
      iVar25 = auVar187._8_4_ + DAT_140deef28;
      iVar29 = auVar187._12_4_ + DAT_140deef2c;
      iVar33 = auVar187._16_4_ + DAT_140deef30;
      iVar37 = auVar187._20_4_ + DAT_140deef34;
      iVar41 = auVar187._24_4_ + DAT_140deef38;
      iVar45 = auVar187._28_4_ + DAT_140deef3c;
      *(int *)*pauVar69 = auVar184._0_4_ + K256;
      *(int *)(*pauVar69 + 4) = iVar18;
      *(int *)(*pauVar69 + 8) = iVar22;
      *(int *)(*pauVar69 + 0xc) = iVar26;
      *(int *)pauVar69[1] = iVar30;
      *(int *)(pauVar69[1] + 4) = iVar34;
      *(int *)(pauVar69[1] + 8) = iVar38;
      *(int *)(pauVar69[1] + 0xc) = iVar42;
      uVar87 = 0;
      *(int *)pauVar69[2] = iVar79;
      *(int *)(pauVar69[2] + 4) = iVar19;
      *(int *)(pauVar69[2] + 8) = iVar23;
      *(int *)(pauVar69[2] + 0xc) = iVar27;
      *(int *)pauVar69[3] = iVar31;
      *(int *)(pauVar69[3] + 4) = iVar35;
      *(int *)(pauVar69[3] + 8) = iVar39;
      *(int *)(pauVar69[3] + 0xc) = iVar43;
      *(int *)pauVar69[-4] = iVar75;
      *(int *)(pauVar69[-4] + 4) = iVar20;
      *(int *)(pauVar69[-4] + 8) = iVar24;
      *(int *)(pauVar69[-4] + 0xc) = iVar28;
      *(int *)pauVar69[-3] = iVar32;
      *(int *)(pauVar69[-3] + 4) = iVar36;
      *(int *)(pauVar69[-3] + 8) = iVar40;
      *(int *)(pauVar69[-3] + 0xc) = iVar44;
      uVar82 = uVar63 ^ uVar66;
      *(int *)pauVar69[-2] = iVar14;
      *(int *)(pauVar69[-2] + 4) = iVar21;
      *(int *)(pauVar69[-2] + 8) = iVar25;
      *(int *)(pauVar69[-2] + 0xc) = iVar29;
      *(int *)pauVar69[-1] = iVar33;
      *(int *)(pauVar69[-1] + 4) = iVar37;
      *(int *)(pauVar69[-1] + 8) = iVar41;
      *(int *)(pauVar69[-1] + 0xc) = iVar45;
      pauVar69 = pauVar69 + -4;
      piVar71 = &DAT_140deef40;
      do {
        pauVar70 = pauVar69;
        auVar183 = vpalignr_avx2(auVar185,auVar184,4);
        auVar154 = vpalignr_avx2(auVar187,auVar186,4);
        uVar62 = uVar62 + uVar87;
        auVar151 = vpsrld_avx2(auVar183,7);
        auVar182 = vpsrld_avx2(auVar183,3);
        iVar79 = uVar64 + *(int *)pauVar70[4] + (uVar85 & uVar84) + (~uVar84 & uVar86) +
                 ((uVar84 >> 0x19 | uVar84 << 7) ^ (uVar84 >> 0xb | uVar84 << 0x15) ^
                 (uVar84 >> 6 | uVar84 << 0x1a));
        auVar131 = vpslld_avx2(auVar183,0xe);
        uVar83 = uVar83 + iVar79;
        auVar183 = vpshufd_avx2(auVar187,0xfa);
        auVar152 = vpsrld_avx2(auVar151,0xb);
        uVar64 = iVar79 + (uVar82 & (uVar62 ^ uVar63) ^ uVar63) +
                 ((uVar62 >> 0xd | uVar62 * 0x80000) ^ (uVar62 >> 0x16 | uVar62 * 0x400) ^
                 (uVar62 >> 2 | uVar62 * 0x40000000));
        auVar132 = vpslld_avx2(auVar131,0xb);
        auVar153 = vpsrld_avx2(auVar183,10);
        iVar79 = uVar86 + *(int *)(pauVar70[4] + 4) + (uVar84 & uVar83) + (~uVar83 & uVar85) +
                 ((uVar83 >> 0x19 | uVar83 * 0x80) ^ (uVar83 >> 0xb | uVar83 * 0x200000) ^
                 (uVar83 >> 6 | uVar83 * 0x4000000));
        auVar132 = auVar182 ^ auVar151 ^ auVar131 ^ auVar152 ^ auVar132;
        uVar66 = uVar66 + iVar79;
        auVar183 = vpsrlq_avx2(auVar183,0x11);
        auVar131 = vpsrlq_avx2(auVar183,2);
        uVar86 = iVar79 + ((uVar62 ^ uVar63) & (uVar64 ^ uVar62) ^ uVar62) +
                 ((uVar64 >> 0xd | uVar64 * 0x80000) ^ (uVar64 >> 0x16 | uVar64 * 0x400) ^
                 (uVar64 >> 2 | uVar64 * 0x40000000));
        auVar183 = vpshufb_avx2(auVar153 ^ auVar183 ^ auVar131,auVar60);
        auVar182._0_4_ = auVar184._0_4_ + auVar154._0_4_ + auVar132._0_4_ + auVar183._0_4_;
        auVar182._4_4_ = auVar184._4_4_ + auVar154._4_4_ + auVar132._4_4_ + auVar183._4_4_;
        auVar182._8_4_ = auVar184._8_4_ + auVar154._8_4_ + auVar132._8_4_ + auVar183._8_4_;
        auVar182._12_4_ = auVar184._12_4_ + auVar154._12_4_ + auVar132._12_4_ + auVar183._12_4_;
        auVar182._16_4_ = auVar184._16_4_ + auVar154._16_4_ + auVar132._16_4_ + auVar183._16_4_;
        auVar182._20_4_ = auVar184._20_4_ + auVar154._20_4_ + auVar132._20_4_ + auVar183._20_4_;
        auVar182._24_4_ = auVar184._24_4_ + auVar154._24_4_ + auVar132._24_4_ + auVar183._24_4_;
        auVar182._28_4_ = auVar184._28_4_ + auVar154._28_4_ + auVar132._28_4_ + auVar183._28_4_;
        iVar79 = uVar85 + *(int *)(pauVar70[4] + 8) + (uVar83 & uVar66) + (~uVar66 & uVar84) +
                 ((uVar66 >> 0x19 | uVar66 * 0x80) ^ (uVar66 >> 0xb | uVar66 * 0x200000) ^
                 (uVar66 >> 6 | uVar66 * 0x4000000));
        auVar183 = vpshufd_avx2(auVar182,0x50);
        uVar63 = uVar63 + iVar79;
        auVar154 = vpsrld_avx2(auVar183,10);
        auVar183 = vpsrlq_avx2(auVar183,0x11);
        auVar184 = vpsrlq_avx2(auVar183,2);
        uVar85 = iVar79 + ((uVar64 ^ uVar62) & (uVar86 ^ uVar64) ^ uVar64) +
                 ((uVar86 >> 0xd | uVar86 * 0x80000) ^ (uVar86 >> 0x16 | uVar86 * 0x400) ^
                 (uVar86 >> 2 | uVar86 * 0x40000000));
        auVar183 = vpshufb_avx2(auVar154 ^ auVar183 ^ auVar184,auVar61);
        auVar184._0_4_ = auVar182._0_4_ + auVar183._0_4_;
        auVar184._4_4_ = auVar182._4_4_ + auVar183._4_4_;
        auVar184._8_4_ = auVar182._8_4_ + auVar183._8_4_;
        auVar184._12_4_ = auVar182._12_4_ + auVar183._12_4_;
        auVar184._16_4_ = auVar182._16_4_ + auVar183._16_4_;
        auVar184._20_4_ = auVar182._20_4_ + auVar183._20_4_;
        auVar184._24_4_ = auVar182._24_4_ + auVar183._24_4_;
        auVar184._28_4_ = auVar182._28_4_ + auVar183._28_4_;
        iVar79 = uVar84 + *(int *)(pauVar70[4] + 0xc) + (uVar66 & uVar63) + (~uVar63 & uVar83) +
                 ((uVar63 >> 0x19 | uVar63 * 0x80) ^ (uVar63 >> 0xb | uVar63 * 0x200000) ^
                 (uVar63 >> 6 | uVar63 * 0x4000000));
        iVar75 = piVar71[1];
        iVar14 = piVar71[2];
        iVar18 = piVar71[3];
        iVar19 = piVar71[4];
        iVar20 = piVar71[5];
        iVar21 = piVar71[6];
        iVar22 = piVar71[7];
        uVar62 = uVar62 + iVar79;
        *(int *)pauVar70[-4] = auVar184._0_4_ + *piVar71;
        *(int *)(pauVar70[-4] + 4) = auVar184._4_4_ + iVar75;
        *(int *)(pauVar70[-4] + 8) = auVar184._8_4_ + iVar14;
        *(int *)(pauVar70[-4] + 0xc) = auVar184._12_4_ + iVar18;
        *(int *)pauVar70[-3] = auVar184._16_4_ + iVar19;
        *(int *)(pauVar70[-3] + 4) = auVar184._20_4_ + iVar20;
        *(int *)(pauVar70[-3] + 8) = auVar184._24_4_ + iVar21;
        *(int *)(pauVar70[-3] + 0xc) = auVar184._28_4_ + iVar22;
        auVar183 = vpalignr_avx2(auVar186,auVar185,4);
        auVar154 = vpalignr_avx2(auVar184,auVar187,4);
        uVar84 = iVar79 + ((uVar86 ^ uVar64) & (uVar85 ^ uVar86) ^ uVar86) +
                 ((uVar85 >> 0xd | uVar85 * 0x80000) ^ (uVar85 >> 0x16 | uVar85 * 0x400) ^
                 (uVar85 >> 2 | uVar85 * 0x40000000));
        auVar151 = vpsrld_avx2(auVar183,7);
        auVar182 = vpsrld_avx2(auVar183,3);
        iVar79 = uVar83 + *(int *)pauVar70[6] + (uVar63 & uVar62) + (~uVar62 & uVar66) +
                 ((uVar62 >> 0x19 | uVar62 * 0x80) ^ (uVar62 >> 0xb | uVar62 * 0x200000) ^
                 (uVar62 >> 6 | uVar62 * 0x4000000));
        auVar131 = vpslld_avx2(auVar183,0xe);
        uVar64 = uVar64 + iVar79;
        auVar183 = vpshufd_avx2(auVar184,0xfa);
        auVar152 = vpsrld_avx2(auVar151,0xb);
        uVar83 = iVar79 + ((uVar85 ^ uVar86) & (uVar84 ^ uVar85) ^ uVar85) +
                 ((uVar84 >> 0xd | uVar84 * 0x80000) ^ (uVar84 >> 0x16 | uVar84 * 0x400) ^
                 (uVar84 >> 2 | uVar84 * 0x40000000));
        auVar132 = vpslld_avx2(auVar131,0xb);
        auVar153 = vpsrld_avx2(auVar183,10);
        iVar79 = uVar66 + *(int *)(pauVar70[6] + 4) + (uVar62 & uVar64) + (~uVar64 & uVar63) +
                 ((uVar64 >> 0x19 | uVar64 * 0x80) ^ (uVar64 >> 0xb | uVar64 * 0x200000) ^
                 (uVar64 >> 6 | uVar64 * 0x4000000));
        auVar132 = auVar182 ^ auVar151 ^ auVar131 ^ auVar152 ^ auVar132;
        uVar86 = uVar86 + iVar79;
        auVar183 = vpsrlq_avx2(auVar183,0x11);
        auVar131 = vpsrlq_avx2(auVar183,2);
        uVar66 = iVar79 + ((uVar84 ^ uVar85) & (uVar83 ^ uVar84) ^ uVar84) +
                 ((uVar83 >> 0xd | uVar83 * 0x80000) ^ (uVar83 >> 0x16 | uVar83 * 0x400) ^
                 (uVar83 >> 2 | uVar83 * 0x40000000));
        auVar183 = vpshufb_avx2(auVar153 ^ auVar183 ^ auVar131,auVar60);
        auVar15._0_4_ = auVar185._0_4_ + auVar154._0_4_ + auVar132._0_4_ + auVar183._0_4_;
        auVar15._4_4_ = auVar185._4_4_ + auVar154._4_4_ + auVar132._4_4_ + auVar183._4_4_;
        auVar15._8_4_ = auVar185._8_4_ + auVar154._8_4_ + auVar132._8_4_ + auVar183._8_4_;
        auVar15._12_4_ = auVar185._12_4_ + auVar154._12_4_ + auVar132._12_4_ + auVar183._12_4_;
        auVar15._16_4_ = auVar185._16_4_ + auVar154._16_4_ + auVar132._16_4_ + auVar183._16_4_;
        auVar15._20_4_ = auVar185._20_4_ + auVar154._20_4_ + auVar132._20_4_ + auVar183._20_4_;
        auVar15._24_4_ = auVar185._24_4_ + auVar154._24_4_ + auVar132._24_4_ + auVar183._24_4_;
        auVar15._28_4_ = auVar185._28_4_ + auVar154._28_4_ + auVar132._28_4_ + auVar183._28_4_;
        iVar79 = uVar63 + *(int *)(pauVar70[6] + 8) + (uVar64 & uVar86) + (~uVar86 & uVar62) +
                 ((uVar86 >> 0x19 | uVar86 * 0x80) ^ (uVar86 >> 0xb | uVar86 * 0x200000) ^
                 (uVar86 >> 6 | uVar86 * 0x4000000));
        auVar183 = vpshufd_avx2(auVar15,0x50);
        uVar85 = uVar85 + iVar79;
        auVar154 = vpsrld_avx2(auVar183,10);
        auVar183 = vpsrlq_avx2(auVar183,0x11);
        auVar185 = vpsrlq_avx2(auVar183,2);
        uVar63 = iVar79 + ((uVar83 ^ uVar84) & (uVar66 ^ uVar83) ^ uVar83) +
                 ((uVar66 >> 0xd | uVar66 * 0x80000) ^ (uVar66 >> 0x16 | uVar66 * 0x400) ^
                 (uVar66 >> 2 | uVar66 * 0x40000000));
        auVar183 = vpshufb_avx2(auVar154 ^ auVar183 ^ auVar185,auVar61);
        auVar185._0_4_ = auVar15._0_4_ + auVar183._0_4_;
        auVar185._4_4_ = auVar15._4_4_ + auVar183._4_4_;
        auVar185._8_4_ = auVar15._8_4_ + auVar183._8_4_;
        auVar185._12_4_ = auVar15._12_4_ + auVar183._12_4_;
        auVar185._16_4_ = auVar15._16_4_ + auVar183._16_4_;
        auVar185._20_4_ = auVar15._20_4_ + auVar183._20_4_;
        auVar185._24_4_ = auVar15._24_4_ + auVar183._24_4_;
        auVar185._28_4_ = auVar15._28_4_ + auVar183._28_4_;
        iVar79 = uVar62 + *(int *)(pauVar70[6] + 0xc) + (uVar86 & uVar85) + (~uVar85 & uVar64) +
                 ((uVar85 >> 0x19 | uVar85 * 0x80) ^ (uVar85 >> 0xb | uVar85 * 0x200000) ^
                 (uVar85 >> 6 | uVar85 * 0x4000000));
        iVar75 = piVar71[9];
        iVar14 = piVar71[10];
        iVar18 = piVar71[0xb];
        iVar19 = piVar71[0xc];
        iVar20 = piVar71[0xd];
        iVar21 = piVar71[0xe];
        iVar22 = piVar71[0xf];
        uVar84 = uVar84 + iVar79;
        *(int *)pauVar70[-2] = auVar185._0_4_ + piVar71[8];
        *(int *)(pauVar70[-2] + 4) = auVar185._4_4_ + iVar75;
        *(int *)(pauVar70[-2] + 8) = auVar185._8_4_ + iVar14;
        *(int *)(pauVar70[-2] + 0xc) = auVar185._12_4_ + iVar18;
        *(int *)pauVar70[-1] = auVar185._16_4_ + iVar19;
        *(int *)(pauVar70[-1] + 4) = auVar185._20_4_ + iVar20;
        *(int *)(pauVar70[-1] + 8) = auVar185._24_4_ + iVar21;
        *(int *)(pauVar70[-1] + 0xc) = auVar185._28_4_ + iVar22;
        pauVar69 = pauVar70 + -8;
        auVar183 = vpalignr_avx2(auVar187,auVar186,4);
        auVar154 = vpalignr_avx2(auVar185,auVar184,4);
        uVar62 = iVar79 + ((uVar66 ^ uVar83) & (uVar63 ^ uVar66) ^ uVar66) +
                 ((uVar63 >> 0xd | uVar63 * 0x80000) ^ (uVar63 >> 0x16 | uVar63 * 0x400) ^
                 (uVar63 >> 2 | uVar63 * 0x40000000));
        auVar151 = vpsrld_avx2(auVar183,7);
        auVar182 = vpsrld_avx2(auVar183,3);
        iVar79 = uVar64 + *(int *)*pauVar70 + (uVar85 & uVar84) + (~uVar84 & uVar86) +
                 ((uVar84 >> 0x19 | uVar84 * 0x80) ^ (uVar84 >> 0xb | uVar84 * 0x200000) ^
                 (uVar84 >> 6 | uVar84 * 0x4000000));
        auVar131 = vpslld_avx2(auVar183,0xe);
        uVar83 = uVar83 + iVar79;
        auVar183 = vpshufd_avx2(auVar185,0xfa);
        auVar152 = vpsrld_avx2(auVar151,0xb);
        uVar64 = iVar79 + ((uVar63 ^ uVar66) & (uVar62 ^ uVar63) ^ uVar63) +
                 ((uVar62 >> 0xd | uVar62 * 0x80000) ^ (uVar62 >> 0x16 | uVar62 * 0x400) ^
                 (uVar62 >> 2 | uVar62 * 0x40000000));
        auVar132 = vpslld_avx2(auVar131,0xb);
        auVar153 = vpsrld_avx2(auVar183,10);
        iVar79 = uVar86 + *(int *)(*pauVar70 + 4) + (uVar84 & uVar83) + (~uVar83 & uVar85) +
                 ((uVar83 >> 0x19 | uVar83 * 0x80) ^ (uVar83 >> 0xb | uVar83 * 0x200000) ^
                 (uVar83 >> 6 | uVar83 * 0x4000000));
        auVar132 = auVar182 ^ auVar151 ^ auVar131 ^ auVar152 ^ auVar132;
        uVar66 = uVar66 + iVar79;
        auVar183 = vpsrlq_avx2(auVar183,0x11);
        auVar131 = vpsrlq_avx2(auVar183,2);
        uVar86 = iVar79 + ((uVar62 ^ uVar63) & (uVar64 ^ uVar62) ^ uVar62) +
                 ((uVar64 >> 0xd | uVar64 * 0x80000) ^ (uVar64 >> 0x16 | uVar64 * 0x400) ^
                 (uVar64 >> 2 | uVar64 * 0x40000000));
        auVar183 = vpshufb_avx2(auVar153 ^ auVar183 ^ auVar131,auVar60);
        auVar16._0_4_ = auVar186._0_4_ + auVar154._0_4_ + auVar132._0_4_ + auVar183._0_4_;
        auVar16._4_4_ = auVar186._4_4_ + auVar154._4_4_ + auVar132._4_4_ + auVar183._4_4_;
        auVar16._8_4_ = auVar186._8_4_ + auVar154._8_4_ + auVar132._8_4_ + auVar183._8_4_;
        auVar16._12_4_ = auVar186._12_4_ + auVar154._12_4_ + auVar132._12_4_ + auVar183._12_4_;
        auVar16._16_4_ = auVar186._16_4_ + auVar154._16_4_ + auVar132._16_4_ + auVar183._16_4_;
        auVar16._20_4_ = auVar186._20_4_ + auVar154._20_4_ + auVar132._20_4_ + auVar183._20_4_;
        auVar16._24_4_ = auVar186._24_4_ + auVar154._24_4_ + auVar132._24_4_ + auVar183._24_4_;
        auVar16._28_4_ = auVar186._28_4_ + auVar154._28_4_ + auVar132._28_4_ + auVar183._28_4_;
        iVar79 = uVar85 + *(int *)(*pauVar70 + 8) + (uVar83 & uVar66) + (~uVar66 & uVar84) +
                 ((uVar66 >> 0x19 | uVar66 * 0x80) ^ (uVar66 >> 0xb | uVar66 * 0x200000) ^
                 (uVar66 >> 6 | uVar66 * 0x4000000));
        auVar183 = vpshufd_avx2(auVar16,0x50);
        uVar63 = uVar63 + iVar79;
        auVar154 = vpsrld_avx2(auVar183,10);
        auVar183 = vpsrlq_avx2(auVar183,0x11);
        auVar186 = vpsrlq_avx2(auVar183,2);
        uVar85 = iVar79 + ((uVar64 ^ uVar62) & (uVar86 ^ uVar64) ^ uVar64) +
                 ((uVar86 >> 0xd | uVar86 * 0x80000) ^ (uVar86 >> 0x16 | uVar86 * 0x400) ^
                 (uVar86 >> 2 | uVar86 * 0x40000000));
        auVar183 = vpshufb_avx2(auVar154 ^ auVar183 ^ auVar186,auVar61);
        auVar186._0_4_ = auVar16._0_4_ + auVar183._0_4_;
        auVar186._4_4_ = auVar16._4_4_ + auVar183._4_4_;
        auVar186._8_4_ = auVar16._8_4_ + auVar183._8_4_;
        auVar186._12_4_ = auVar16._12_4_ + auVar183._12_4_;
        auVar186._16_4_ = auVar16._16_4_ + auVar183._16_4_;
        auVar186._20_4_ = auVar16._20_4_ + auVar183._20_4_;
        auVar186._24_4_ = auVar16._24_4_ + auVar183._24_4_;
        auVar186._28_4_ = auVar16._28_4_ + auVar183._28_4_;
        iVar79 = uVar84 + *(int *)(*pauVar70 + 0xc) + (uVar66 & uVar63) + (~uVar63 & uVar83) +
                 ((uVar63 >> 0x19 | uVar63 * 0x80) ^ (uVar63 >> 0xb | uVar63 * 0x200000) ^
                 (uVar63 >> 6 | uVar63 * 0x4000000));
        iVar75 = piVar71[0x11];
        iVar14 = piVar71[0x12];
        iVar18 = piVar71[0x13];
        iVar19 = piVar71[0x14];
        iVar20 = piVar71[0x15];
        iVar21 = piVar71[0x16];
        iVar22 = piVar71[0x17];
        uVar62 = uVar62 + iVar79;
        *(int *)*pauVar69 = auVar186._0_4_ + piVar71[0x10];
        *(int *)(pauVar70[-8] + 4) = auVar186._4_4_ + iVar75;
        *(int *)(pauVar70[-8] + 8) = auVar186._8_4_ + iVar14;
        *(int *)(pauVar70[-8] + 0xc) = auVar186._12_4_ + iVar18;
        *(int *)pauVar70[-7] = auVar186._16_4_ + iVar19;
        *(int *)(pauVar70[-7] + 4) = auVar186._20_4_ + iVar20;
        *(int *)(pauVar70[-7] + 8) = auVar186._24_4_ + iVar21;
        *(int *)(pauVar70[-7] + 0xc) = auVar186._28_4_ + iVar22;
        auVar183 = vpalignr_avx2(auVar184,auVar187,4);
        auVar154 = vpalignr_avx2(auVar186,auVar185,4);
        uVar84 = iVar79 + ((uVar86 ^ uVar64) & (uVar85 ^ uVar86) ^ uVar86) +
                 ((uVar85 >> 0xd | uVar85 * 0x80000) ^ (uVar85 >> 0x16 | uVar85 * 0x400) ^
                 (uVar85 >> 2 | uVar85 * 0x40000000));
        auVar151 = vpsrld_avx2(auVar183,7);
        auVar182 = vpsrld_avx2(auVar183,3);
        iVar79 = uVar83 + *(int *)pauVar70[2] + (uVar63 & uVar62) + (~uVar62 & uVar66) +
                 ((uVar62 >> 0x19 | uVar62 * 0x80) ^ (uVar62 >> 0xb | uVar62 * 0x200000) ^
                 (uVar62 >> 6 | uVar62 * 0x4000000));
        auVar131 = vpslld_avx2(auVar183,0xe);
        uVar64 = uVar64 + iVar79;
        auVar183 = vpshufd_avx2(auVar186,0xfa);
        auVar152 = vpsrld_avx2(auVar151,0xb);
        uVar83 = iVar79 + ((uVar85 ^ uVar86) & (uVar84 ^ uVar85) ^ uVar85) +
                 ((uVar84 >> 0xd | uVar84 * 0x80000) ^ (uVar84 >> 0x16 | uVar84 * 0x400) ^
                 (uVar84 >> 2 | uVar84 * 0x40000000));
        auVar132 = vpslld_avx2(auVar131,0xb);
        auVar153 = vpsrld_avx2(auVar183,10);
        iVar79 = uVar66 + *(int *)(pauVar70[2] + 4) + (uVar62 & uVar64) + (~uVar64 & uVar63) +
                 ((uVar64 >> 0x19 | uVar64 * 0x80) ^ (uVar64 >> 0xb | uVar64 * 0x200000) ^
                 (uVar64 >> 6 | uVar64 * 0x4000000));
        auVar132 = auVar182 ^ auVar151 ^ auVar131 ^ auVar152 ^ auVar132;
        uVar86 = uVar86 + iVar79;
        auVar183 = vpsrlq_avx2(auVar183,0x11);
        auVar131 = vpsrlq_avx2(auVar183,2);
        uVar66 = iVar79 + ((uVar84 ^ uVar85) & (uVar83 ^ uVar84) ^ uVar84) +
                 ((uVar83 >> 0xd | uVar83 * 0x80000) ^ (uVar83 >> 0x16 | uVar83 * 0x400) ^
                 (uVar83 >> 2 | uVar83 * 0x40000000));
        auVar183 = vpshufb_avx2(auVar153 ^ auVar183 ^ auVar131,auVar60);
        auVar17._0_4_ = auVar187._0_4_ + auVar154._0_4_ + auVar132._0_4_ + auVar183._0_4_;
        auVar17._4_4_ = auVar187._4_4_ + auVar154._4_4_ + auVar132._4_4_ + auVar183._4_4_;
        auVar17._8_4_ = auVar187._8_4_ + auVar154._8_4_ + auVar132._8_4_ + auVar183._8_4_;
        auVar17._12_4_ = auVar187._12_4_ + auVar154._12_4_ + auVar132._12_4_ + auVar183._12_4_;
        auVar17._16_4_ = auVar187._16_4_ + auVar154._16_4_ + auVar132._16_4_ + auVar183._16_4_;
        auVar17._20_4_ = auVar187._20_4_ + auVar154._20_4_ + auVar132._20_4_ + auVar183._20_4_;
        auVar17._24_4_ = auVar187._24_4_ + auVar154._24_4_ + auVar132._24_4_ + auVar183._24_4_;
        auVar17._28_4_ = auVar187._28_4_ + auVar154._28_4_ + auVar132._28_4_ + auVar183._28_4_;
        iVar79 = uVar63 + *(int *)(pauVar70[2] + 8) + (uVar64 & uVar86) + (~uVar86 & uVar62) +
                 ((uVar86 >> 0x19 | uVar86 * 0x80) ^ (uVar86 >> 0xb | uVar86 * 0x200000) ^
                 (uVar86 >> 6 | uVar86 * 0x4000000));
        auVar183 = vpshufd_avx2(auVar17,0x50);
        uVar85 = uVar85 + iVar79;
        auVar154 = vpsrld_avx2(auVar183,10);
        auVar183 = vpsrlq_avx2(auVar183,0x11);
        auVar187 = vpsrlq_avx2(auVar183,2);
        uVar63 = iVar79 + ((uVar83 ^ uVar84) & (uVar66 ^ uVar83) ^ uVar83) +
                 ((uVar66 >> 0xd | uVar66 * 0x80000) ^ (uVar66 >> 0x16 | uVar66 * 0x400) ^
                 (uVar66 >> 2 | uVar66 * 0x40000000));
        auVar183 = vpshufb_avx2(auVar154 ^ auVar183 ^ auVar187,auVar61);
        auVar187._0_4_ = auVar17._0_4_ + auVar183._0_4_;
        auVar187._4_4_ = auVar17._4_4_ + auVar183._4_4_;
        auVar187._8_4_ = auVar17._8_4_ + auVar183._8_4_;
        auVar187._12_4_ = auVar17._12_4_ + auVar183._12_4_;
        auVar187._16_4_ = auVar17._16_4_ + auVar183._16_4_;
        auVar187._20_4_ = auVar17._20_4_ + auVar183._20_4_;
        auVar187._24_4_ = auVar17._24_4_ + auVar183._24_4_;
        auVar187._28_4_ = auVar17._28_4_ + auVar183._28_4_;
        iVar79 = uVar62 + *(int *)(pauVar70[2] + 0xc) + (uVar86 & uVar85) + (~uVar85 & uVar64) +
                 ((uVar85 >> 0x19 | uVar85 * 0x80) ^ (uVar85 >> 0xb | uVar85 * 0x200000) ^
                 (uVar85 >> 6 | uVar85 * 0x4000000));
        uVar82 = uVar63 ^ uVar66;
        iVar75 = piVar71[0x19];
        iVar14 = piVar71[0x1a];
        iVar18 = piVar71[0x1b];
        iVar19 = piVar71[0x1c];
        iVar20 = piVar71[0x1d];
        iVar21 = piVar71[0x1e];
        iVar22 = piVar71[0x1f];
        uVar84 = uVar84 + iVar79;
        uVar87 = (uVar63 >> 0xd | uVar63 * 0x80000) ^ (uVar63 >> 0x16 | uVar63 * 0x400) ^
                 (uVar63 >> 2 | uVar63 * 0x40000000);
        uVar62 = iVar79 + ((uVar66 ^ uVar83) & uVar82 ^ uVar66);
        *(int *)pauVar70[-6] = auVar187._0_4_ + piVar71[0x18];
        *(int *)(pauVar70[-6] + 4) = auVar187._4_4_ + iVar75;
        *(int *)(pauVar70[-6] + 8) = auVar187._8_4_ + iVar14;
        *(int *)(pauVar70[-6] + 0xc) = auVar187._12_4_ + iVar18;
        *(int *)pauVar70[-5] = auVar187._16_4_ + iVar19;
        *(int *)(pauVar70[-5] + 4) = auVar187._20_4_ + iVar20;
        *(int *)(pauVar70[-5] + 8) = auVar187._24_4_ + iVar21;
        *(int *)(pauVar70[-5] + 0xc) = auVar187._28_4_ + iVar22;
        pcVar1 = (char *)((longlong)piVar71 + 0x83);
        piVar71 = piVar71 + 0x20;
      } while (*pcVar1 != '\0');
      uVar62 = uVar62 + uVar87;
      iVar79 = uVar64 + *(int *)pauVar70[-4] + (uVar85 & uVar84) + (~uVar84 & uVar86) +
               ((uVar84 >> 0x19 | uVar84 * 0x80) ^ (uVar84 >> 0xb | uVar84 * 0x200000) ^
               (uVar84 >> 6 | uVar84 * 0x4000000));
      uVar83 = uVar83 + iVar79;
      uVar64 = iVar79 + (uVar82 & (uVar62 ^ uVar63) ^ uVar63) +
               ((uVar62 >> 0xd | uVar62 * 0x80000) ^ (uVar62 >> 0x16 | uVar62 * 0x400) ^
               (uVar62 >> 2 | uVar62 * 0x40000000));
      iVar79 = uVar86 + *(int *)(pauVar70[-4] + 4) + (uVar84 & uVar83) + (~uVar83 & uVar85) +
               ((uVar83 >> 0x19 | uVar83 * 0x80) ^ (uVar83 >> 0xb | uVar83 * 0x200000) ^
               (uVar83 >> 6 | uVar83 * 0x4000000));
      uVar66 = uVar66 + iVar79;
      uVar86 = iVar79 + ((uVar62 ^ uVar63) & (uVar64 ^ uVar62) ^ uVar62) +
               ((uVar64 >> 0xd | uVar64 * 0x80000) ^ (uVar64 >> 0x16 | uVar64 * 0x400) ^
               (uVar64 >> 2 | uVar64 * 0x40000000));
      iVar79 = uVar85 + *(int *)(pauVar70[-4] + 8) + (uVar83 & uVar66) + (~uVar66 & uVar84) +
               ((uVar66 >> 0x19 | uVar66 * 0x80) ^ (uVar66 >> 0xb | uVar66 * 0x200000) ^
               (uVar66 >> 6 | uVar66 * 0x4000000));
      uVar63 = uVar63 + iVar79;
      uVar85 = iVar79 + ((uVar64 ^ uVar62) & (uVar86 ^ uVar64) ^ uVar64) +
               ((uVar86 >> 0xd | uVar86 * 0x80000) ^ (uVar86 >> 0x16 | uVar86 * 0x400) ^
               (uVar86 >> 2 | uVar86 * 0x40000000));
      iVar79 = uVar84 + *(int *)(pauVar70[-4] + 0xc) + (uVar66 & uVar63) + (~uVar63 & uVar83) +
               ((uVar63 >> 0x19 | uVar63 * 0x80) ^ (uVar63 >> 0xb | uVar63 * 0x200000) ^
               (uVar63 >> 6 | uVar63 * 0x4000000));
      uVar62 = uVar62 + iVar79;
      uVar84 = iVar79 + ((uVar86 ^ uVar64) & (uVar85 ^ uVar86) ^ uVar86) +
               ((uVar85 >> 0xd | uVar85 * 0x80000) ^ (uVar85 >> 0x16 | uVar85 * 0x400) ^
               (uVar85 >> 2 | uVar85 * 0x40000000));
      iVar79 = uVar83 + *(int *)pauVar70[-2] + (uVar63 & uVar62) + (~uVar62 & uVar66) +
               ((uVar62 >> 0x19 | uVar62 * 0x80) ^ (uVar62 >> 0xb | uVar62 * 0x200000) ^
               (uVar62 >> 6 | uVar62 * 0x4000000));
      uVar64 = uVar64 + iVar79;
      uVar83 = iVar79 + ((uVar85 ^ uVar86) & (uVar84 ^ uVar85) ^ uVar85) +
               ((uVar84 >> 0xd | uVar84 * 0x80000) ^ (uVar84 >> 0x16 | uVar84 * 0x400) ^
               (uVar84 >> 2 | uVar84 * 0x40000000));
      iVar79 = uVar66 + *(int *)(pauVar70[-2] + 4) + (uVar62 & uVar64) + (~uVar64 & uVar63) +
               ((uVar64 >> 0x19 | uVar64 * 0x80) ^ (uVar64 >> 0xb | uVar64 * 0x200000) ^
               (uVar64 >> 6 | uVar64 * 0x4000000));
      uVar86 = uVar86 + iVar79;
      uVar66 = iVar79 + ((uVar84 ^ uVar85) & (uVar83 ^ uVar84) ^ uVar84) +
               ((uVar83 >> 0xd | uVar83 * 0x80000) ^ (uVar83 >> 0x16 | uVar83 * 0x400) ^
               (uVar83 >> 2 | uVar83 * 0x40000000));
      iVar79 = uVar63 + *(int *)(pauVar70[-2] + 8) + (uVar64 & uVar86) + (~uVar86 & uVar62) +
               ((uVar86 >> 0x19 | uVar86 * 0x80) ^ (uVar86 >> 0xb | uVar86 * 0x200000) ^
               (uVar86 >> 6 | uVar86 * 0x4000000));
      uVar85 = uVar85 + iVar79;
      uVar63 = iVar79 + ((uVar83 ^ uVar84) & (uVar66 ^ uVar83) ^ uVar83) +
               ((uVar66 >> 0xd | uVar66 * 0x80000) ^ (uVar66 >> 0x16 | uVar66 * 0x400) ^
               (uVar66 >> 2 | uVar66 * 0x40000000));
      iVar79 = uVar62 + *(int *)(pauVar70[-2] + 0xc) + (uVar86 & uVar85) + (~uVar85 & uVar64) +
               ((uVar85 >> 0x19 | uVar85 * 0x80) ^ (uVar85 >> 0xb | uVar85 * 0x200000) ^
               (uVar85 >> 6 | uVar85 * 0x4000000));
      uVar84 = uVar84 + iVar79;
      uVar62 = iVar79 + ((uVar66 ^ uVar83) & (uVar63 ^ uVar66) ^ uVar66) +
               ((uVar63 >> 0xd | uVar63 * 0x80000) ^ (uVar63 >> 0x16 | uVar63 * 0x400) ^
               (uVar63 >> 2 | uVar63 * 0x40000000));
      iVar79 = uVar64 + *(int *)*pauVar69 + (uVar85 & uVar84) + (~uVar84 & uVar86) +
               ((uVar84 >> 0x19 | uVar84 * 0x80) ^ (uVar84 >> 0xb | uVar84 * 0x200000) ^
               (uVar84 >> 6 | uVar84 * 0x4000000));
      uVar83 = uVar83 + iVar79;
      uVar64 = iVar79 + ((uVar63 ^ uVar66) & (uVar62 ^ uVar63) ^ uVar63) +
               ((uVar62 >> 0xd | uVar62 * 0x80000) ^ (uVar62 >> 0x16 | uVar62 * 0x400) ^
               (uVar62 >> 2 | uVar62 * 0x40000000));
      iVar79 = uVar86 + *(int *)(pauVar70[-8] + 4) + (uVar84 & uVar83) + (~uVar83 & uVar85) +
               ((uVar83 >> 0x19 | uVar83 * 0x80) ^ (uVar83 >> 0xb | uVar83 * 0x200000) ^
               (uVar83 >> 6 | uVar83 * 0x4000000));
      uVar66 = uVar66 + iVar79;
      uVar86 = iVar79 + ((uVar62 ^ uVar63) & (uVar64 ^ uVar62) ^ uVar62) +
               ((uVar64 >> 0xd | uVar64 * 0x80000) ^ (uVar64 >> 0x16 | uVar64 * 0x400) ^
               (uVar64 >> 2 | uVar64 * 0x40000000));
      iVar79 = uVar85 + *(int *)(pauVar70[-8] + 8) + (uVar83 & uVar66) + (~uVar66 & uVar84) +
               ((uVar66 >> 0x19 | uVar66 * 0x80) ^ (uVar66 >> 0xb | uVar66 * 0x200000) ^
               (uVar66 >> 6 | uVar66 * 0x4000000));
      uVar63 = uVar63 + iVar79;
      uVar85 = iVar79 + ((uVar64 ^ uVar62) & (uVar86 ^ uVar64) ^ uVar64) +
               ((uVar86 >> 0xd | uVar86 * 0x80000) ^ (uVar86 >> 0x16 | uVar86 * 0x400) ^
               (uVar86 >> 2 | uVar86 * 0x40000000));
      iVar79 = uVar84 + *(int *)(pauVar70[-8] + 0xc) + (uVar66 & uVar63) + (~uVar63 & uVar83) +
               ((uVar63 >> 0x19 | uVar63 * 0x80) ^ (uVar63 >> 0xb | uVar63 * 0x200000) ^
               (uVar63 >> 6 | uVar63 * 0x4000000));
      uVar62 = uVar62 + iVar79;
      uVar84 = iVar79 + ((uVar86 ^ uVar64) & (uVar85 ^ uVar86) ^ uVar86) +
               ((uVar85 >> 0xd | uVar85 * 0x80000) ^ (uVar85 >> 0x16 | uVar85 * 0x400) ^
               (uVar85 >> 2 | uVar85 * 0x40000000));
      iVar79 = uVar83 + *(int *)pauVar70[-6] + (uVar63 & uVar62) + (~uVar62 & uVar66) +
               ((uVar62 >> 0x19 | uVar62 * 0x80) ^ (uVar62 >> 0xb | uVar62 * 0x200000) ^
               (uVar62 >> 6 | uVar62 * 0x4000000));
      uVar64 = uVar64 + iVar79;
      uVar83 = iVar79 + ((uVar85 ^ uVar86) & (uVar84 ^ uVar85) ^ uVar85) +
               ((uVar84 >> 0xd | uVar84 * 0x80000) ^ (uVar84 >> 0x16 | uVar84 * 0x400) ^
               (uVar84 >> 2 | uVar84 * 0x40000000));
      iVar79 = uVar66 + *(int *)(pauVar70[-6] + 4) + (uVar62 & uVar64) + (~uVar64 & uVar63) +
               ((uVar64 >> 0x19 | uVar64 * 0x80) ^ (uVar64 >> 0xb | uVar64 * 0x200000) ^
               (uVar64 >> 6 | uVar64 * 0x4000000));
      uVar86 = uVar86 + iVar79;
      uVar66 = iVar79 + ((uVar84 ^ uVar85) & (uVar83 ^ uVar84) ^ uVar84) +
               ((uVar83 >> 0xd | uVar83 * 0x80000) ^ (uVar83 >> 0x16 | uVar83 * 0x400) ^
               (uVar83 >> 2 | uVar83 * 0x40000000));
      iVar79 = uVar63 + *(int *)(pauVar70[-6] + 8) + (uVar64 & uVar86) + (~uVar86 & uVar62) +
               ((uVar86 >> 0x19 | uVar86 * 0x80) ^ (uVar86 >> 0xb | uVar86 * 0x200000) ^
               (uVar86 >> 6 | uVar86 * 0x4000000));
      uVar85 = uVar85 + iVar79;
      uVar63 = iVar79 + ((uVar83 ^ uVar84) & (uVar66 ^ uVar83) ^ uVar83) +
               ((uVar66 >> 0xd | uVar66 * 0x80000) ^ (uVar66 >> 0x16 | uVar66 * 0x400) ^
               (uVar66 >> 2 | uVar66 * 0x40000000));
      iVar79 = uVar62 + *(int *)(pauVar70[-6] + 0xc) + (uVar86 & uVar85) + (~uVar85 & uVar64) +
               ((uVar85 >> 0x19 | uVar85 * 0x80) ^ (uVar85 >> 0xb | uVar85 * 0x200000) ^
               (uVar85 >> 6 | uVar85 * 0x4000000));
      piVar71 = *(int **)pauVar70[0x18];
      pauVar72 = pauVar70 + 0x14;
      iVar75 = iVar79 + ((uVar66 ^ uVar83) & (uVar63 ^ uVar66) ^ uVar66) +
               ((uVar63 >> 0xd | uVar63 * 0x80000) ^ (uVar63 >> 0x16 | uVar63 * 0x400) ^
               (uVar63 >> 2 | uVar63 * 0x40000000)) + *piVar71;
      uVar63 = uVar63 + piVar71[1];
      uVar66 = uVar66 + piVar71[2];
      uVar83 = uVar83 + piVar71[3];
      uVar84 = uVar84 + iVar79 + piVar71[4];
      uVar85 = uVar85 + piVar71[5];
      uVar86 = uVar86 + piVar71[6];
      uVar64 = uVar64 + piVar71[7];
      *piVar71 = iVar75;
      piVar71[1] = uVar63;
      piVar71[2] = uVar66;
      piVar71[3] = uVar83;
      piVar71[4] = uVar84;
      piVar71[5] = uVar85;
      piVar71[6] = uVar86;
      piVar71[7] = uVar64;
      if (pauVar73 == *(undefined1 (**) [16])pauVar70[0x19]) {
        return;
      }
      uVar62 = 0;
      uVar82 = uVar63 ^ uVar66;
      do {
        uVar62 = iVar75 + uVar62;
        iVar79 = uVar64 + *(int *)pauVar72[1] + (uVar85 & uVar84) + (~uVar84 & uVar86) +
                 ((uVar84 >> 0x19 | uVar84 << 7) ^ (uVar84 >> 0xb | uVar84 << 0x15) ^
                 (uVar84 >> 6 | uVar84 << 0x1a));
        uVar83 = uVar83 + iVar79;
        uVar64 = iVar79 + (uVar82 & (uVar62 ^ uVar63) ^ uVar63) +
                 ((uVar62 >> 0xd | uVar62 * 0x80000) ^ (uVar62 >> 0x16 | uVar62 * 0x400) ^
                 (uVar62 >> 2 | uVar62 * 0x40000000));
        iVar79 = uVar86 + *(int *)(pauVar72[1] + 4) + (uVar84 & uVar83) + (~uVar83 & uVar85) +
                 ((uVar83 >> 0x19 | uVar83 * 0x80) ^ (uVar83 >> 0xb | uVar83 * 0x200000) ^
                 (uVar83 >> 6 | uVar83 * 0x4000000));
        uVar66 = uVar66 + iVar79;
        uVar86 = iVar79 + ((uVar62 ^ uVar63) & (uVar64 ^ uVar62) ^ uVar62) +
                 ((uVar64 >> 0xd | uVar64 * 0x80000) ^ (uVar64 >> 0x16 | uVar64 * 0x400) ^
                 (uVar64 >> 2 | uVar64 * 0x40000000));
        iVar79 = uVar85 + *(int *)(pauVar72[1] + 8) + (uVar83 & uVar66) + (~uVar66 & uVar84) +
                 ((uVar66 >> 0x19 | uVar66 * 0x80) ^ (uVar66 >> 0xb | uVar66 * 0x200000) ^
                 (uVar66 >> 6 | uVar66 * 0x4000000));
        uVar63 = uVar63 + iVar79;
        uVar85 = iVar79 + ((uVar64 ^ uVar62) & (uVar86 ^ uVar64) ^ uVar64) +
                 ((uVar86 >> 0xd | uVar86 * 0x80000) ^ (uVar86 >> 0x16 | uVar86 * 0x400) ^
                 (uVar86 >> 2 | uVar86 * 0x40000000));
        iVar79 = uVar84 + *(int *)(pauVar72[1] + 0xc) + (uVar66 & uVar63) + (~uVar63 & uVar83) +
                 ((uVar63 >> 0x19 | uVar63 * 0x80) ^ (uVar63 >> 0xb | uVar63 * 0x200000) ^
                 (uVar63 >> 6 | uVar63 * 0x4000000));
        uVar62 = uVar62 + iVar79;
        uVar84 = iVar79 + ((uVar86 ^ uVar64) & (uVar85 ^ uVar86) ^ uVar86) +
                 ((uVar85 >> 0xd | uVar85 * 0x80000) ^ (uVar85 >> 0x16 | uVar85 * 0x400) ^
                 (uVar85 >> 2 | uVar85 * 0x40000000));
        iVar79 = uVar83 + *(int *)pauVar72[3] + (uVar63 & uVar62) + (~uVar62 & uVar66) +
                 ((uVar62 >> 0x19 | uVar62 * 0x80) ^ (uVar62 >> 0xb | uVar62 * 0x200000) ^
                 (uVar62 >> 6 | uVar62 * 0x4000000));
        uVar64 = uVar64 + iVar79;
        uVar83 = iVar79 + ((uVar85 ^ uVar86) & (uVar84 ^ uVar85) ^ uVar85) +
                 ((uVar84 >> 0xd | uVar84 * 0x80000) ^ (uVar84 >> 0x16 | uVar84 * 0x400) ^
                 (uVar84 >> 2 | uVar84 * 0x40000000));
        iVar79 = uVar66 + *(int *)(pauVar72[3] + 4) + (uVar62 & uVar64) + (~uVar64 & uVar63) +
                 ((uVar64 >> 0x19 | uVar64 * 0x80) ^ (uVar64 >> 0xb | uVar64 * 0x200000) ^
                 (uVar64 >> 6 | uVar64 * 0x4000000));
        uVar86 = uVar86 + iVar79;
        uVar66 = iVar79 + ((uVar84 ^ uVar85) & (uVar83 ^ uVar84) ^ uVar84) +
                 ((uVar83 >> 0xd | uVar83 * 0x80000) ^ (uVar83 >> 0x16 | uVar83 * 0x400) ^
                 (uVar83 >> 2 | uVar83 * 0x40000000));
        iVar79 = uVar63 + *(int *)(pauVar72[3] + 8) + (uVar64 & uVar86) + (~uVar86 & uVar62) +
                 ((uVar86 >> 0x19 | uVar86 * 0x80) ^ (uVar86 >> 0xb | uVar86 * 0x200000) ^
                 (uVar86 >> 6 | uVar86 * 0x4000000));
        uVar85 = uVar85 + iVar79;
        uVar63 = iVar79 + ((uVar83 ^ uVar84) & (uVar66 ^ uVar83) ^ uVar83) +
                 ((uVar66 >> 0xd | uVar66 * 0x80000) ^ (uVar66 >> 0x16 | uVar66 * 0x400) ^
                 (uVar66 >> 2 | uVar66 * 0x40000000));
        iVar75 = uVar62 + *(int *)(pauVar72[3] + 0xc) + (uVar86 & uVar85) + (~uVar85 & uVar64) +
                 ((uVar85 >> 0x19 | uVar85 * 0x80) ^ (uVar85 >> 0xb | uVar85 * 0x200000) ^
                 (uVar85 >> 6 | uVar85 * 0x4000000));
        uVar82 = uVar63 ^ uVar66;
        uVar84 = uVar84 + iVar75;
        uVar62 = (uVar63 >> 0xd | uVar63 * 0x80000) ^ (uVar63 >> 0x16 | uVar63 * 0x400) ^
                 (uVar63 >> 2 | uVar63 * 0x40000000);
        iVar75 = iVar75 + ((uVar66 ^ uVar83) & uVar82 ^ uVar66);
        pauVar72 = pauVar72 + -4;
      } while (pauVar69 <= pauVar72);
      puVar4 = *(uint **)pauVar70[0x18];
      pauVar69 = pauVar70 + 0x14;
      uVar62 = iVar75 + uVar62 + *puVar4;
      uVar63 = uVar63 + puVar4[1];
      uVar66 = uVar66 + puVar4[2];
      uVar83 = uVar83 + puVar4[3];
      uVar84 = uVar84 + puVar4[4];
      uVar85 = uVar85 + puVar4[5];
      pauVar73 = pauVar73 + 8;
      uVar86 = uVar86 + puVar4[6];
      uVar64 = uVar64 + puVar4[7];
      pauVar5 = *(undefined1 (**) [16])pauVar70[0x19];
      *puVar4 = uVar62;
      pauVar72 = pauVar73;
      if (pauVar73 == pauVar5) {
        pauVar72 = pauVar69;
      }
      puVar4[1] = uVar63;
      puVar4[2] = uVar66;
      puVar4[3] = uVar83;
      puVar4[4] = uVar84;
      puVar4[5] = uVar85;
      puVar4[6] = uVar86;
      puVar4[7] = uVar64;
    } while (pauVar73 <= pauVar5);
    return;
  }
  if ((DAT_15540a9f4 & 0x10000200 | OPENSSL_ia32cap_P & 0x40000000) == 0x50000200) {
    pauVar73 = param_2 + param_3 * 4;
    uVar62 = *param_1;
    uVar66 = param_1[1];
    uVar63 = param_1[2];
    uVar64 = param_1[3];
    uVar86 = param_1[4];
    uVar85 = param_1[5];
    uVar84 = param_1[6];
    uVar83 = param_1[7];
    do {
      auVar10 = vpshufb_avx(*param_2,_DAT_140def0c0);
      auVar11 = vpshufb_avx(param_2[1],_DAT_140def0c0);
      auVar12 = vpshufb_avx(param_2[2],_DAT_140def0c0);
      auVar13 = vpshufb_avx(param_2[3],_DAT_140def0c0);
      auStack_100._4_4_ = auVar10._4_4_ + DAT_140deeec4;
      auStack_100._0_4_ = auVar10._0_4_ + K256;
      auStack_100._8_4_ = auVar10._8_4_ + DAT_140deeec8;
      auStack_100._12_4_ = auVar10._12_4_ + DAT_140deeecc;
      auStack_f0._4_4_ = auVar11._4_4_ + DAT_140deeee4;
      auStack_f0._0_4_ = auVar11._0_4_ + DAT_140deeee0;
      auStack_f0._8_4_ = auVar11._8_4_ + DAT_140deeee8;
      auStack_f0._12_4_ = auVar11._12_4_ + DAT_140deeeec;
      auStack_e0._4_4_ = auVar12._4_4_ + DAT_140deef04;
      auStack_e0._0_4_ = auVar12._0_4_ + DAT_140deef00;
      auStack_e0._8_4_ = auVar12._8_4_ + DAT_140deef08;
      auStack_e0._12_4_ = auVar12._12_4_ + DAT_140deef0c;
      uVar82 = uVar66 ^ uVar63;
      auStack_d0._4_4_ = auVar13._4_4_ + DAT_140deef24;
      auStack_d0._0_4_ = auVar13._0_4_ + DAT_140deef20;
      auStack_d0._8_4_ = auVar13._8_4_ + DAT_140deef28;
      auStack_d0._12_4_ = auVar13._12_4_ + DAT_140deef2c;
      piVar71 = &K256;
      do {
        auVar181 = vpalignr_avx(auVar11,auVar10,4);
        auVar150 = vpalignr_avx(auVar13,auVar12,4);
        uVar87 = (uVar86 >> 0xe | uVar86 << 0x12) ^ uVar86;
        auVar147 = vpsrld_avx(auVar181,7);
        uVar65 = (uVar62 >> 9 | uVar62 << 0x17) ^ uVar62;
        uVar87 = (uVar87 >> 5 | uVar87 << 0x1b) ^ uVar86;
        auVar180 = vpsrld_avx(auVar181,3);
        auVar129 = vpslld_avx(auVar181,0xe);
        uVar65 = (uVar65 >> 0xb | uVar65 << 0x15) ^ uVar62;
        iVar79 = uVar83 + auStack_100._0_4_ + ((uVar85 ^ uVar84) & uVar86 ^ uVar84) +
                 (uVar87 >> 6 | uVar87 << 0x1a);
        auVar181 = vpshufd_avx(auVar13,0xfa);
        uVar64 = uVar64 + iVar79;
        auVar148 = vpsrld_avx(auVar147,0xb);
        uVar83 = (uVar65 >> 2 | uVar65 << 0x1e) + iVar79 + (uVar82 & (uVar62 ^ uVar66) ^ uVar66);
        auVar130 = vpslld_avx(auVar129,0xb);
        uVar82 = (uVar64 >> 0xe | uVar64 * 0x40000) ^ uVar64;
        uVar87 = (uVar83 >> 9 | uVar83 * 0x800000) ^ uVar83;
        uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar64;
        auVar149 = vpsrld_avx(auVar181,10);
        auVar130 = auVar180 ^ auVar147 ^ auVar129 ^ auVar148 ^ auVar130;
        auVar181 = vpsrlq_avx(auVar181,0x11);
        uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar83;
        iVar79 = uVar84 + auStack_100._4_4_ + ((uVar86 ^ uVar85) & uVar64 ^ uVar85) +
                 (uVar82 >> 6 | uVar82 << 0x1a);
        uVar63 = uVar63 + iVar79;
        auVar129 = vpsrlq_avx(auVar181,2);
        uVar84 = (uVar87 >> 2 | uVar87 << 0x1e) +
                 iVar79 + ((uVar62 ^ uVar66) & (uVar83 ^ uVar62) ^ uVar62);
        uVar82 = (uVar63 >> 0xe | uVar63 * 0x40000) ^ uVar63;
        auVar181 = vpshufb_avx(auVar149 ^ auVar181 ^ auVar129,auVar109);
        uVar87 = (uVar84 >> 9 | uVar84 * 0x800000) ^ uVar84;
        auVar6._0_4_ = auVar10._0_4_ + auVar150._0_4_ + auVar130._0_4_ + auVar181._0_4_;
        auVar6._4_4_ = auVar10._4_4_ + auVar150._4_4_ + auVar130._4_4_ + auVar181._4_4_;
        auVar6._8_4_ = auVar10._8_4_ + auVar150._8_4_ + auVar130._8_4_ + auVar181._8_4_;
        auVar6._12_4_ = auVar10._12_4_ + auVar150._12_4_ + auVar130._12_4_ + auVar181._12_4_;
        uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar63;
        auVar181 = vpshufd_avx(auVar6,0x50);
        auVar150 = vpsrld_avx(auVar181,10);
        auVar181 = vpsrlq_avx(auVar181,0x11);
        uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar84;
        iVar79 = uVar85 + auStack_100._8_4_ + ((uVar64 ^ uVar86) & uVar63 ^ uVar86) +
                 (uVar82 >> 6 | uVar82 << 0x1a);
        uVar66 = uVar66 + iVar79;
        auVar130 = vpsrlq_avx(auVar181,2);
        uVar85 = (uVar87 >> 2 | uVar87 << 0x1e) +
                 iVar79 + ((uVar83 ^ uVar62) & (uVar84 ^ uVar83) ^ uVar83);
        auVar181 = vpshufb_avx(auVar150 ^ auVar181 ^ auVar130,auVar113);
        uVar82 = (uVar66 >> 0xe | uVar66 * 0x40000) ^ uVar66;
        auVar10._0_4_ = auVar6._0_4_ + auVar181._0_4_;
        auVar10._4_4_ = auVar6._4_4_ + auVar181._4_4_;
        auVar10._8_4_ = auVar6._8_4_ + auVar181._8_4_;
        auVar10._12_4_ = auVar6._12_4_ + auVar181._12_4_;
        uVar87 = (uVar85 >> 9 | uVar85 * 0x800000) ^ uVar85;
        iVar79 = auVar10._0_4_ + piVar71[0x20];
        piVar52 = piVar71 + 0x21;
        piVar53 = piVar71 + 0x22;
        piVar54 = piVar71 + 0x23;
        uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar66;
        uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar85;
        iVar75 = uVar86 + auStack_100._12_4_ + ((uVar63 ^ uVar64) & uVar66 ^ uVar64) +
                 (uVar82 >> 6 | uVar82 << 0x1a);
        uVar62 = uVar62 + iVar75;
        uVar86 = (uVar87 >> 2 | uVar87 << 0x1e) +
                 iVar75 + ((uVar84 ^ uVar83) & (uVar85 ^ uVar84) ^ uVar84);
        auStack_100._4_4_ = auVar10._4_4_ + *piVar52;
        auStack_100._0_4_ = iVar79;
        auStack_100._8_4_ = auVar10._8_4_ + *piVar53;
        auStack_100._12_4_ = auVar10._12_4_ + *piVar54;
        auVar181 = vpalignr_avx(auVar12,auVar11,4);
        auVar150 = vpalignr_avx(auVar10,auVar13,4);
        uVar82 = (uVar62 >> 0xe | uVar62 * 0x40000) ^ uVar62;
        auVar147 = vpsrld_avx(auVar181,7);
        uVar87 = (uVar86 >> 9 | uVar86 * 0x800000) ^ uVar86;
        uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar62;
        auVar180 = vpsrld_avx(auVar181,3);
        auVar129 = vpslld_avx(auVar181,0xe);
        uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar86;
        iVar75 = uVar64 + auStack_f0._0_4_ + ((uVar66 ^ uVar63) & uVar62 ^ uVar63) +
                 (uVar82 >> 6 | uVar82 << 0x1a);
        auVar181 = vpshufd_avx(auVar10,0xfa);
        uVar83 = uVar83 + iVar75;
        auVar148 = vpsrld_avx(auVar147,0xb);
        uVar64 = (uVar87 >> 2 | uVar87 << 0x1e) +
                 iVar75 + ((uVar85 ^ uVar84) & (uVar86 ^ uVar85) ^ uVar85);
        auVar130 = vpslld_avx(auVar129,0xb);
        uVar82 = (uVar83 >> 0xe | uVar83 * 0x40000) ^ uVar83;
        uVar87 = (uVar64 >> 9 | uVar64 * 0x800000) ^ uVar64;
        uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar83;
        auVar149 = vpsrld_avx(auVar181,10);
        auVar130 = auVar180 ^ auVar147 ^ auVar129 ^ auVar148 ^ auVar130;
        auVar181 = vpsrlq_avx(auVar181,0x11);
        uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar64;
        iVar75 = uVar63 + auStack_f0._4_4_ + ((uVar62 ^ uVar66) & uVar83 ^ uVar66) +
                 (uVar82 >> 6 | uVar82 << 0x1a);
        uVar84 = uVar84 + iVar75;
        auVar129 = vpsrlq_avx(auVar181,2);
        uVar63 = (uVar87 >> 2 | uVar87 << 0x1e) +
                 iVar75 + ((uVar86 ^ uVar85) & (uVar64 ^ uVar86) ^ uVar86);
        uVar82 = (uVar84 >> 0xe | uVar84 * 0x40000) ^ uVar84;
        auVar181 = vpshufb_avx(auVar149 ^ auVar181 ^ auVar129,auVar109);
        uVar87 = (uVar63 >> 9 | uVar63 * 0x800000) ^ uVar63;
        auVar7._0_4_ = auVar11._0_4_ + auVar150._0_4_ + auVar130._0_4_ + auVar181._0_4_;
        auVar7._4_4_ = auVar11._4_4_ + auVar150._4_4_ + auVar130._4_4_ + auVar181._4_4_;
        auVar7._8_4_ = auVar11._8_4_ + auVar150._8_4_ + auVar130._8_4_ + auVar181._8_4_;
        auVar7._12_4_ = auVar11._12_4_ + auVar150._12_4_ + auVar130._12_4_ + auVar181._12_4_;
        uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar84;
        auVar181 = vpshufd_avx(auVar7,0x50);
        auVar150 = vpsrld_avx(auVar181,10);
        auVar181 = vpsrlq_avx(auVar181,0x11);
        uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar63;
        iVar75 = uVar66 + auStack_f0._8_4_ + ((uVar83 ^ uVar62) & uVar84 ^ uVar62) +
                 (uVar82 >> 6 | uVar82 << 0x1a);
        uVar85 = uVar85 + iVar75;
        auVar130 = vpsrlq_avx(auVar181,2);
        uVar66 = (uVar87 >> 2 | uVar87 << 0x1e) +
                 iVar75 + ((uVar64 ^ uVar86) & (uVar63 ^ uVar64) ^ uVar64);
        auVar181 = vpshufb_avx(auVar150 ^ auVar181 ^ auVar130,auVar113);
        uVar82 = (uVar85 >> 0xe | uVar85 * 0x40000) ^ uVar85;
        auVar11._0_4_ = auVar7._0_4_ + auVar181._0_4_;
        auVar11._4_4_ = auVar7._4_4_ + auVar181._4_4_;
        auVar11._8_4_ = auVar7._8_4_ + auVar181._8_4_;
        auVar11._12_4_ = auVar7._12_4_ + auVar181._12_4_;
        uVar87 = (uVar66 >> 9 | uVar66 * 0x800000) ^ uVar66;
        piVar2 = piVar71 + 0x28;
        piVar55 = piVar71 + 0x29;
        piVar56 = piVar71 + 0x2a;
        piVar57 = piVar71 + 0x2b;
        uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar85;
        uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar66;
        iVar75 = uVar62 + auStack_f0._12_4_ + ((uVar84 ^ uVar83) & uVar85 ^ uVar83) +
                 (uVar82 >> 6 | uVar82 << 0x1a);
        uVar86 = uVar86 + iVar75;
        uVar62 = (uVar87 >> 2 | uVar87 << 0x1e) +
                 iVar75 + ((uVar63 ^ uVar64) & (uVar66 ^ uVar63) ^ uVar63);
        auStack_f0._4_4_ = auVar11._4_4_ + *piVar55;
        auStack_f0._0_4_ = auVar11._0_4_ + *piVar2;
        auStack_f0._8_4_ = auVar11._8_4_ + *piVar56;
        auStack_f0._12_4_ = auVar11._12_4_ + *piVar57;
        auVar181 = vpalignr_avx(auVar13,auVar12,4);
        auVar150 = vpalignr_avx(auVar11,auVar10,4);
        uVar82 = (uVar86 >> 0xe | uVar86 * 0x40000) ^ uVar86;
        auVar147 = vpsrld_avx(auVar181,7);
        uVar87 = (uVar62 >> 9 | uVar62 * 0x800000) ^ uVar62;
        uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar86;
        auVar180 = vpsrld_avx(auVar181,3);
        auVar129 = vpslld_avx(auVar181,0xe);
        uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar62;
        iVar75 = uVar83 + auStack_e0._0_4_ + ((uVar85 ^ uVar84) & uVar86 ^ uVar84) +
                 (uVar82 >> 6 | uVar82 << 0x1a);
        auVar181 = vpshufd_avx(auVar11,0xfa);
        uVar64 = uVar64 + iVar75;
        auVar148 = vpsrld_avx(auVar147,0xb);
        uVar83 = (uVar87 >> 2 | uVar87 << 0x1e) +
                 iVar75 + ((uVar66 ^ uVar63) & (uVar62 ^ uVar66) ^ uVar66);
        auVar130 = vpslld_avx(auVar129,0xb);
        uVar82 = (uVar64 >> 0xe | uVar64 * 0x40000) ^ uVar64;
        uVar87 = (uVar83 >> 9 | uVar83 * 0x800000) ^ uVar83;
        uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar64;
        auVar149 = vpsrld_avx(auVar181,10);
        auVar130 = auVar180 ^ auVar147 ^ auVar129 ^ auVar148 ^ auVar130;
        auVar181 = vpsrlq_avx(auVar181,0x11);
        uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar83;
        iVar75 = uVar84 + auStack_e0._4_4_ + ((uVar86 ^ uVar85) & uVar64 ^ uVar85) +
                 (uVar82 >> 6 | uVar82 << 0x1a);
        uVar63 = uVar63 + iVar75;
        auVar129 = vpsrlq_avx(auVar181,2);
        uVar84 = (uVar87 >> 2 | uVar87 << 0x1e) +
                 iVar75 + ((uVar62 ^ uVar66) & (uVar83 ^ uVar62) ^ uVar62);
        uVar82 = (uVar63 >> 0xe | uVar63 * 0x40000) ^ uVar63;
        auVar181 = vpshufb_avx(auVar149 ^ auVar181 ^ auVar129,auVar109);
        uVar87 = (uVar84 >> 9 | uVar84 * 0x800000) ^ uVar84;
        auVar8._0_4_ = auVar12._0_4_ + auVar150._0_4_ + auVar130._0_4_ + auVar181._0_4_;
        auVar8._4_4_ = auVar12._4_4_ + auVar150._4_4_ + auVar130._4_4_ + auVar181._4_4_;
        auVar8._8_4_ = auVar12._8_4_ + auVar150._8_4_ + auVar130._8_4_ + auVar181._8_4_;
        auVar8._12_4_ = auVar12._12_4_ + auVar150._12_4_ + auVar130._12_4_ + auVar181._12_4_;
        uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar63;
        auVar181 = vpshufd_avx(auVar8,0x50);
        auVar150 = vpsrld_avx(auVar181,10);
        auVar181 = vpsrlq_avx(auVar181,0x11);
        uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar84;
        iVar75 = uVar85 + auStack_e0._8_4_ + ((uVar64 ^ uVar86) & uVar63 ^ uVar86) +
                 (uVar82 >> 6 | uVar82 << 0x1a);
        uVar66 = uVar66 + iVar75;
        auVar130 = vpsrlq_avx(auVar181,2);
        uVar85 = (uVar87 >> 2 | uVar87 << 0x1e) +
                 iVar75 + ((uVar83 ^ uVar62) & (uVar84 ^ uVar83) ^ uVar83);
        auVar181 = vpshufb_avx(auVar150 ^ auVar181 ^ auVar130,auVar113);
        uVar82 = (uVar66 >> 0xe | uVar66 * 0x40000) ^ uVar66;
        auVar12._0_4_ = auVar8._0_4_ + auVar181._0_4_;
        auVar12._4_4_ = auVar8._4_4_ + auVar181._4_4_;
        auVar12._8_4_ = auVar8._8_4_ + auVar181._8_4_;
        auVar12._12_4_ = auVar8._12_4_ + auVar181._12_4_;
        uVar87 = (uVar85 >> 9 | uVar85 * 0x800000) ^ uVar85;
        piVar3 = piVar71 + 0x30;
        piVar58 = piVar71 + 0x31;
        piVar59 = piVar71 + 0x32;
        piVar46 = piVar71 + 0x33;
        uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar66;
        uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar85;
        iVar75 = uVar86 + auStack_e0._12_4_ + ((uVar63 ^ uVar64) & uVar66 ^ uVar64) +
                 (uVar82 >> 6 | uVar82 << 0x1a);
        uVar62 = uVar62 + iVar75;
        uVar86 = (uVar87 >> 2 | uVar87 << 0x1e) +
                 iVar75 + ((uVar84 ^ uVar83) & (uVar85 ^ uVar84) ^ uVar84);
        auStack_e0._4_4_ = auVar12._4_4_ + *piVar58;
        auStack_e0._0_4_ = auVar12._0_4_ + *piVar3;
        auStack_e0._8_4_ = auVar12._8_4_ + *piVar59;
        auStack_e0._12_4_ = auVar12._12_4_ + *piVar46;
        auVar181 = vpalignr_avx(auVar10,auVar13,4);
        auVar150 = vpalignr_avx(auVar12,auVar11,4);
        uVar82 = (uVar62 >> 0xe | uVar62 * 0x40000) ^ uVar62;
        auVar147 = vpsrld_avx(auVar181,7);
        uVar87 = (uVar86 >> 9 | uVar86 * 0x800000) ^ uVar86;
        uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar62;
        auVar180 = vpsrld_avx(auVar181,3);
        auVar129 = vpslld_avx(auVar181,0xe);
        uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar86;
        iVar75 = uVar64 + auStack_d0._0_4_ + ((uVar66 ^ uVar63) & uVar62 ^ uVar63) +
                 (uVar82 >> 6 | uVar82 << 0x1a);
        auVar181 = vpshufd_avx(auVar12,0xfa);
        uVar83 = uVar83 + iVar75;
        auVar148 = vpsrld_avx(auVar147,0xb);
        uVar64 = (uVar87 >> 2 | uVar87 << 0x1e) +
                 iVar75 + ((uVar85 ^ uVar84) & (uVar86 ^ uVar85) ^ uVar85);
        auVar130 = vpslld_avx(auVar129,0xb);
        uVar82 = (uVar83 >> 0xe | uVar83 * 0x40000) ^ uVar83;
        uVar87 = (uVar64 >> 9 | uVar64 * 0x800000) ^ uVar64;
        uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar83;
        auVar149 = vpsrld_avx(auVar181,10);
        auVar130 = auVar180 ^ auVar147 ^ auVar129 ^ auVar148 ^ auVar130;
        auVar181 = vpsrlq_avx(auVar181,0x11);
        uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar64;
        iVar75 = uVar63 + auStack_d0._4_4_ + ((uVar62 ^ uVar66) & uVar83 ^ uVar66) +
                 (uVar82 >> 6 | uVar82 << 0x1a);
        uVar84 = uVar84 + iVar75;
        auVar129 = vpsrlq_avx(auVar181,2);
        uVar63 = (uVar87 >> 2 | uVar87 << 0x1e) +
                 iVar75 + ((uVar86 ^ uVar85) & (uVar64 ^ uVar86) ^ uVar86);
        uVar82 = (uVar84 >> 0xe | uVar84 * 0x40000) ^ uVar84;
        auVar181 = vpshufb_avx(auVar149 ^ auVar181 ^ auVar129,auVar109);
        uVar87 = (uVar63 >> 9 | uVar63 * 0x800000) ^ uVar63;
        auVar9._0_4_ = auVar13._0_4_ + auVar150._0_4_ + auVar130._0_4_ + auVar181._0_4_;
        auVar9._4_4_ = auVar13._4_4_ + auVar150._4_4_ + auVar130._4_4_ + auVar181._4_4_;
        auVar9._8_4_ = auVar13._8_4_ + auVar150._8_4_ + auVar130._8_4_ + auVar181._8_4_;
        auVar9._12_4_ = auVar13._12_4_ + auVar150._12_4_ + auVar130._12_4_ + auVar181._12_4_;
        uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar84;
        auVar181 = vpshufd_avx(auVar9,0x50);
        auVar150 = vpsrld_avx(auVar181,10);
        auVar181 = vpsrlq_avx(auVar181,0x11);
        uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar63;
        iVar75 = uVar66 + auStack_d0._8_4_ + ((uVar83 ^ uVar62) & uVar84 ^ uVar62) +
                 (uVar82 >> 6 | uVar82 << 0x1a);
        uVar85 = uVar85 + iVar75;
        auVar130 = vpsrlq_avx(auVar181,2);
        uVar66 = (uVar87 >> 2 | uVar87 << 0x1e) +
                 iVar75 + ((uVar64 ^ uVar86) & (uVar63 ^ uVar64) ^ uVar64);
        auVar181 = vpshufb_avx(auVar150 ^ auVar181 ^ auVar130,auVar113);
        uVar82 = (uVar85 >> 0xe | uVar85 * 0x40000) ^ uVar85;
        auVar13._0_4_ = auVar9._0_4_ + auVar181._0_4_;
        auVar13._4_4_ = auVar9._4_4_ + auVar181._4_4_;
        auVar13._8_4_ = auVar9._8_4_ + auVar181._8_4_;
        auVar13._12_4_ = auVar9._12_4_ + auVar181._12_4_;
        uVar65 = (uVar66 >> 9 | uVar66 * 0x800000) ^ uVar66;
        piVar51 = piVar71 + 0x38;
        piVar47 = piVar71 + 0x39;
        piVar48 = piVar71 + 0x3a;
        piVar49 = piVar71 + 0x3b;
        uVar87 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar85;
        uVar82 = uVar66 ^ uVar63;
        uVar65 = (uVar65 >> 0xb | uVar65 << 0x15) ^ uVar66;
        iVar75 = uVar62 + auStack_d0._12_4_ + ((uVar84 ^ uVar83) & uVar85 ^ uVar83) +
                 (uVar87 >> 6 | uVar87 << 0x1a);
        uVar86 = uVar86 + iVar75;
        uVar62 = (uVar65 >> 2 | uVar65 << 0x1e) + iVar75 + ((uVar63 ^ uVar64) & uVar82 ^ uVar63);
        auStack_d0._4_4_ = auVar13._4_4_ + *piVar47;
        auStack_d0._0_4_ = auVar13._0_4_ + *piVar51;
        auStack_d0._8_4_ = auVar13._8_4_ + *piVar48;
        auStack_d0._12_4_ = auVar13._12_4_ + *piVar49;
        pcVar1 = (char *)((longlong)piVar71 + 0x103);
        piVar71 = piVar71 + 0x20;
      } while (*pcVar1 != '\0');
      uVar87 = (uVar86 >> 0xe | uVar86 * 0x40000) ^ uVar86;
      uVar65 = (uVar62 >> 9 | uVar62 * 0x800000) ^ uVar62;
      uVar87 = (uVar87 >> 5 | uVar87 << 0x1b) ^ uVar86;
      uVar65 = (uVar65 >> 0xb | uVar65 << 0x15) ^ uVar62;
      iVar79 = uVar83 + iVar79 + ((uVar85 ^ uVar84) & uVar86 ^ uVar84) +
               (uVar87 >> 6 | uVar87 << 0x1a);
      uVar64 = uVar64 + iVar79;
      uVar83 = (uVar65 >> 2 | uVar65 << 0x1e) + iVar79 + (uVar82 & (uVar62 ^ uVar66) ^ uVar66);
      uVar82 = (uVar64 >> 0xe | uVar64 * 0x40000) ^ uVar64;
      uVar87 = (uVar83 >> 9 | uVar83 * 0x800000) ^ uVar83;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar64;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar83;
      iVar79 = uVar84 + auVar10._4_4_ + *piVar52 + ((uVar86 ^ uVar85) & uVar64 ^ uVar85) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar63 = uVar63 + iVar79;
      uVar84 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar62 ^ uVar66) & (uVar83 ^ uVar62) ^ uVar62);
      uVar82 = (uVar63 >> 0xe | uVar63 * 0x40000) ^ uVar63;
      uVar87 = (uVar84 >> 9 | uVar84 * 0x800000) ^ uVar84;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar63;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar84;
      iVar79 = uVar85 + auVar10._8_4_ + *piVar53 + ((uVar64 ^ uVar86) & uVar63 ^ uVar86) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar66 = uVar66 + iVar79;
      uVar85 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar83 ^ uVar62) & (uVar84 ^ uVar83) ^ uVar83);
      uVar82 = (uVar66 >> 0xe | uVar66 * 0x40000) ^ uVar66;
      uVar87 = (uVar85 >> 9 | uVar85 * 0x800000) ^ uVar85;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar66;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar85;
      iVar79 = uVar86 + auVar10._12_4_ + *piVar54 + ((uVar63 ^ uVar64) & uVar66 ^ uVar64) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar62 = uVar62 + iVar79;
      uVar86 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar84 ^ uVar83) & (uVar85 ^ uVar84) ^ uVar84);
      uVar82 = (uVar62 >> 0xe | uVar62 * 0x40000) ^ uVar62;
      uVar87 = (uVar86 >> 9 | uVar86 * 0x800000) ^ uVar86;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar62;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar86;
      iVar79 = uVar64 + auVar11._0_4_ + *piVar2 + ((uVar66 ^ uVar63) & uVar62 ^ uVar63) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar83 = uVar83 + iVar79;
      uVar64 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar85 ^ uVar84) & (uVar86 ^ uVar85) ^ uVar85);
      uVar82 = (uVar83 >> 0xe | uVar83 * 0x40000) ^ uVar83;
      uVar87 = (uVar64 >> 9 | uVar64 * 0x800000) ^ uVar64;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar83;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar64;
      iVar79 = uVar63 + auVar11._4_4_ + *piVar55 + ((uVar62 ^ uVar66) & uVar83 ^ uVar66) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar84 = uVar84 + iVar79;
      uVar63 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar86 ^ uVar85) & (uVar64 ^ uVar86) ^ uVar86);
      uVar82 = (uVar84 >> 0xe | uVar84 * 0x40000) ^ uVar84;
      uVar87 = (uVar63 >> 9 | uVar63 * 0x800000) ^ uVar63;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar84;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar63;
      iVar79 = uVar66 + auVar11._8_4_ + *piVar56 + ((uVar83 ^ uVar62) & uVar84 ^ uVar62) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar85 = uVar85 + iVar79;
      uVar66 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar64 ^ uVar86) & (uVar63 ^ uVar64) ^ uVar64);
      uVar82 = (uVar85 >> 0xe | uVar85 * 0x40000) ^ uVar85;
      uVar87 = (uVar66 >> 9 | uVar66 * 0x800000) ^ uVar66;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar85;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar66;
      iVar79 = uVar62 + auVar11._12_4_ + *piVar57 + ((uVar84 ^ uVar83) & uVar85 ^ uVar83) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar86 = uVar86 + iVar79;
      uVar62 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar63 ^ uVar64) & (uVar66 ^ uVar63) ^ uVar63);
      uVar82 = (uVar86 >> 0xe | uVar86 * 0x40000) ^ uVar86;
      uVar87 = (uVar62 >> 9 | uVar62 * 0x800000) ^ uVar62;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar86;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar62;
      iVar79 = uVar83 + auVar12._0_4_ + *piVar3 + ((uVar85 ^ uVar84) & uVar86 ^ uVar84) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar64 = uVar64 + iVar79;
      uVar83 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar66 ^ uVar63) & (uVar62 ^ uVar66) ^ uVar66);
      uVar82 = (uVar64 >> 0xe | uVar64 * 0x40000) ^ uVar64;
      uVar87 = (uVar83 >> 9 | uVar83 * 0x800000) ^ uVar83;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar64;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar83;
      iVar79 = uVar84 + auVar12._4_4_ + *piVar58 + ((uVar86 ^ uVar85) & uVar64 ^ uVar85) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar63 = uVar63 + iVar79;
      uVar84 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar62 ^ uVar66) & (uVar83 ^ uVar62) ^ uVar62);
      uVar82 = (uVar63 >> 0xe | uVar63 * 0x40000) ^ uVar63;
      uVar87 = (uVar84 >> 9 | uVar84 * 0x800000) ^ uVar84;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar63;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar84;
      iVar79 = uVar85 + auVar12._8_4_ + *piVar59 + ((uVar64 ^ uVar86) & uVar63 ^ uVar86) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar66 = uVar66 + iVar79;
      uVar85 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar83 ^ uVar62) & (uVar84 ^ uVar83) ^ uVar83);
      uVar82 = (uVar66 >> 0xe | uVar66 * 0x40000) ^ uVar66;
      uVar87 = (uVar85 >> 9 | uVar85 * 0x800000) ^ uVar85;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar66;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar85;
      iVar79 = uVar86 + auVar12._12_4_ + *piVar46 + ((uVar63 ^ uVar64) & uVar66 ^ uVar64) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar62 = uVar62 + iVar79;
      uVar82 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar84 ^ uVar83) & (uVar85 ^ uVar84) ^ uVar84);
      uVar86 = (uVar62 >> 0xe | uVar62 * 0x40000) ^ uVar62;
      uVar87 = (uVar82 >> 9 | uVar82 * 0x800000) ^ uVar82;
      uVar86 = (uVar86 >> 5 | uVar86 << 0x1b) ^ uVar62;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar82;
      iVar79 = uVar64 + auVar13._0_4_ + *piVar51 + ((uVar66 ^ uVar63) & uVar62 ^ uVar63) +
               (uVar86 >> 6 | uVar86 << 0x1a);
      uVar83 = uVar83 + iVar79;
      uVar64 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar85 ^ uVar84) & (uVar82 ^ uVar85) ^ uVar85);
      uVar86 = (uVar83 >> 0xe | uVar83 * 0x40000) ^ uVar83;
      uVar87 = (uVar64 >> 9 | uVar64 * 0x800000) ^ uVar64;
      uVar86 = (uVar86 >> 5 | uVar86 << 0x1b) ^ uVar83;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar64;
      iVar79 = uVar63 + auVar13._4_4_ + *piVar47 + ((uVar62 ^ uVar66) & uVar83 ^ uVar66) +
               (uVar86 >> 6 | uVar86 << 0x1a);
      uVar84 = uVar84 + iVar79;
      uVar63 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar82 ^ uVar85) & (uVar64 ^ uVar82) ^ uVar82);
      uVar86 = (uVar84 >> 0xe | uVar84 * 0x40000) ^ uVar84;
      uVar87 = (uVar63 >> 9 | uVar63 * 0x800000) ^ uVar63;
      uVar86 = (uVar86 >> 5 | uVar86 << 0x1b) ^ uVar84;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar63;
      iVar79 = uVar66 + auVar13._8_4_ + *piVar48 + ((uVar83 ^ uVar62) & uVar84 ^ uVar62) +
               (uVar86 >> 6 | uVar86 << 0x1a);
      uVar85 = uVar85 + iVar79;
      uVar66 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar64 ^ uVar82) & (uVar63 ^ uVar64) ^ uVar64);
      uVar86 = (uVar85 >> 0xe | uVar85 * 0x40000) ^ uVar85;
      uVar87 = (uVar66 >> 9 | uVar66 * 0x800000) ^ uVar66;
      uVar86 = (uVar86 >> 5 | uVar86 << 0x1b) ^ uVar85;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar66;
      iVar79 = uVar62 + auVar13._12_4_ + *piVar49 + ((uVar84 ^ uVar83) & uVar85 ^ uVar83) +
               (uVar86 >> 6 | uVar86 << 0x1a);
      uVar62 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar63 ^ uVar64) & (uVar66 ^ uVar63) ^ uVar63) + *param_1;
      param_2 = param_2 + 4;
      uVar66 = uVar66 + param_1[1];
      uVar63 = uVar63 + param_1[2];
      uVar64 = uVar64 + param_1[3];
      uVar86 = uVar82 + iVar79 + param_1[4];
      uVar85 = uVar85 + param_1[5];
      uVar84 = uVar84 + param_1[6];
      uVar83 = uVar83 + param_1[7];
      *param_1 = uVar62;
      param_1[1] = uVar66;
      param_1[2] = uVar63;
      param_1[3] = uVar64;
      param_1[4] = uVar86;
      param_1[5] = uVar85;
      param_1[6] = uVar84;
      param_1[7] = uVar83;
    } while (param_2 < pauVar73);
    return;
  }
  if ((DAT_15540a9f4 & 0x200) == 0) {
    pauVar73 = param_2 + param_3 * 4;
    uVar62 = *param_1;
    uVar66 = param_1[1];
    uVar63 = param_1[2];
    uVar64 = param_1[3];
    uVar86 = param_1[4];
    uVar85 = param_1[5];
    uVar84 = param_1[6];
    uVar83 = param_1[7];
    do {
      uVar82 = *(uint *)*param_2;
      uStack_c0 = uVar82 >> 0x18 | (uVar82 & 0xff0000) >> 8 | (uVar82 & 0xff00) << 8 |
                  uVar82 << 0x18;
      uVar82 = (uVar86 >> 0xe | uVar86 << 0x12) ^ uVar86;
      uVar87 = (uVar62 >> 9 | uVar62 << 0x17) ^ uVar62;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar86;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar62;
      iVar79 = uStack_c0 + uVar83 + ((uVar85 ^ uVar84) & uVar86 ^ uVar84) + K256 +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar64 = uVar64 + iVar79;
      uVar78 = (uVar66 ^ (uVar66 ^ uVar63) & (uVar62 ^ uVar66)) + iVar79 +
               (uVar87 >> 2 | uVar87 << 0x1e);
      uVar83 = *(uint *)(*param_2 + 4);
      uStack_bc = uVar83 >> 0x18 | (uVar83 & 0xff0000) >> 8 | (uVar83 & 0xff00) << 8 |
                  uVar83 << 0x18;
      uVar83 = (uVar64 >> 0xe | uVar64 * 0x40000) ^ uVar64;
      uVar82 = (uVar78 >> 9 | uVar78 * 0x800000) ^ uVar78;
      uVar83 = (uVar83 >> 5 | uVar83 << 0x1b) ^ uVar64;
      uVar82 = (uVar82 >> 0xb | uVar82 << 0x15) ^ uVar78;
      iVar79 = uStack_bc + uVar84 + ((uVar86 ^ uVar85) & uVar64 ^ uVar85) + DAT_140deeec4 +
               (uVar83 >> 6 | uVar83 << 0x1a);
      uVar63 = uVar63 + iVar79;
      uVar77 = (uVar62 ^ (uVar62 ^ uVar66) & (uVar78 ^ uVar62)) + iVar79 +
               (uVar82 >> 2 | uVar82 << 0x1e);
      uVar84 = *(uint *)(*param_2 + 8);
      uStack_b8 = uVar84 >> 0x18 | (uVar84 & 0xff0000) >> 8 | (uVar84 & 0xff00) << 8 |
                  uVar84 << 0x18;
      uVar84 = (uVar63 >> 0xe | uVar63 * 0x40000) ^ uVar63;
      uVar83 = (uVar77 >> 9 | uVar77 * 0x800000) ^ uVar77;
      uVar84 = (uVar84 >> 5 | uVar84 << 0x1b) ^ uVar63;
      uVar83 = (uVar83 >> 0xb | uVar83 << 0x15) ^ uVar77;
      iVar79 = uStack_b8 + uVar85 + ((uVar64 ^ uVar86) & uVar63 ^ uVar86) + DAT_140deeec8 +
               (uVar84 >> 6 | uVar84 << 0x1a);
      uVar66 = uVar66 + iVar79;
      uVar76 = (uVar78 ^ (uVar78 ^ uVar62) & (uVar77 ^ uVar78)) + iVar79 +
               (uVar83 >> 2 | uVar83 << 0x1e);
      uVar85 = *(uint *)(*param_2 + 0xc);
      uStack_b4 = uVar85 >> 0x18 | (uVar85 & 0xff0000) >> 8 | (uVar85 & 0xff00) << 8 |
                  uVar85 << 0x18;
      uVar85 = (uVar66 >> 0xe | uVar66 * 0x40000) ^ uVar66;
      uVar84 = (uVar76 >> 9 | uVar76 * 0x800000) ^ uVar76;
      uVar85 = (uVar85 >> 5 | uVar85 << 0x1b) ^ uVar66;
      uVar84 = (uVar84 >> 0xb | uVar84 << 0x15) ^ uVar76;
      iVar79 = uStack_b4 + uVar86 + ((uVar63 ^ uVar64) & uVar66 ^ uVar64) + DAT_140deeecc +
               (uVar85 >> 6 | uVar85 << 0x1a);
      uVar62 = uVar62 + iVar79;
      uVar74 = (uVar77 ^ (uVar77 ^ uVar78) & (uVar76 ^ uVar77)) + iVar79 +
               (uVar84 >> 2 | uVar84 << 0x1e);
      uVar86 = *(uint *)param_2[1];
      uStack_b0 = uVar86 >> 0x18 | (uVar86 & 0xff0000) >> 8 | (uVar86 & 0xff00) << 8 |
                  uVar86 << 0x18;
      uVar86 = (uVar62 >> 0xe | uVar62 * 0x40000) ^ uVar62;
      uVar85 = (uVar74 >> 9 | uVar74 * 0x800000) ^ uVar74;
      uVar86 = (uVar86 >> 5 | uVar86 << 0x1b) ^ uVar62;
      uVar85 = (uVar85 >> 0xb | uVar85 << 0x15) ^ uVar74;
      iVar79 = uStack_b0 + uVar64 + ((uVar66 ^ uVar63) & uVar62 ^ uVar63) + DAT_140deeee0 +
               (uVar86 >> 6 | uVar86 << 0x1a);
      uVar78 = uVar78 + iVar79;
      uVar65 = (uVar76 ^ (uVar76 ^ uVar77) & (uVar74 ^ uVar76)) + iVar79 +
               (uVar85 >> 2 | uVar85 << 0x1e);
      uVar64 = *(uint *)(param_2[1] + 4);
      uStack_ac = uVar64 >> 0x18 | (uVar64 & 0xff0000) >> 8 | (uVar64 & 0xff00) << 8 |
                  uVar64 << 0x18;
      uVar64 = (uVar78 >> 0xe | uVar78 * 0x40000) ^ uVar78;
      uVar86 = (uVar65 >> 9 | uVar65 * 0x800000) ^ uVar65;
      uVar64 = (uVar64 >> 5 | uVar64 << 0x1b) ^ uVar78;
      uVar86 = (uVar86 >> 0xb | uVar86 << 0x15) ^ uVar65;
      iVar79 = uStack_ac + uVar63 + ((uVar62 ^ uVar66) & uVar78 ^ uVar66) + DAT_140deeee4 +
               (uVar64 >> 6 | uVar64 << 0x1a);
      uVar77 = uVar77 + iVar79;
      uVar87 = (uVar74 ^ (uVar74 ^ uVar76) & (uVar65 ^ uVar74)) + iVar79 +
               (uVar86 >> 2 | uVar86 << 0x1e);
      uVar63 = *(uint *)(param_2[1] + 8);
      uVar80 = uVar63 >> 0x18 | (uVar63 & 0xff0000) >> 8 | (uVar63 & 0xff00) << 8 | uVar63 << 0x18;
      uVar63 = (uVar77 >> 0xe | uVar77 * 0x40000) ^ uVar77;
      uVar64 = (uVar87 >> 9 | uVar87 * 0x800000) ^ uVar87;
      uVar63 = (uVar63 >> 5 | uVar63 << 0x1b) ^ uVar77;
      uVar64 = (uVar64 >> 0xb | uVar64 << 0x15) ^ uVar87;
      iVar79 = uVar80 + uVar66 + ((uVar78 ^ uVar62) & uVar77 ^ uVar62) + DAT_140deeee8 +
               (uVar63 >> 6 | uVar63 << 0x1a);
      uVar76 = uVar76 + iVar79;
      uVar67 = (uVar65 ^ (uVar65 ^ uVar74) & (uVar87 ^ uVar65)) + iVar79 +
               (uVar64 >> 2 | uVar64 << 0x1e);
      uVar66 = *(uint *)(param_2[1] + 0xc);
      uVar81 = uVar66 >> 0x18 | (uVar66 & 0xff0000) >> 8 | (uVar66 & 0xff00) << 8 | uVar66 << 0x18;
      uVar66 = (uVar76 >> 0xe | uVar76 * 0x40000) ^ uVar76;
      uVar63 = (uVar67 >> 9 | uVar67 * 0x800000) ^ uVar67;
      uVar66 = (uVar66 >> 5 | uVar66 << 0x1b) ^ uVar76;
      uVar63 = (uVar63 >> 0xb | uVar63 << 0x15) ^ uVar67;
      iVar79 = uVar81 + uVar62 + ((uVar77 ^ uVar78) & uVar76 ^ uVar78) + DAT_140deeeec +
               (uVar66 >> 6 | uVar66 << 0x1a);
      uVar74 = uVar74 + iVar79;
      uVar82 = (uVar87 ^ (uVar87 ^ uVar65) & (uVar67 ^ uVar87)) + iVar79 +
               (uVar63 >> 2 | uVar63 << 0x1e);
      uVar62 = *(uint *)param_2[2];
      uStack_a0 = uVar62 >> 0x18 | (uVar62 & 0xff0000) >> 8 | (uVar62 & 0xff00) << 8 |
                  uVar62 << 0x18;
      uVar62 = (uVar74 >> 0xe | uVar74 * 0x40000) ^ uVar74;
      uVar66 = (uVar82 >> 9 | uVar82 * 0x800000) ^ uVar82;
      uVar62 = (uVar62 >> 5 | uVar62 << 0x1b) ^ uVar74;
      uVar66 = (uVar66 >> 0xb | uVar66 << 0x15) ^ uVar82;
      iVar79 = uStack_a0 + uVar78 + ((uVar76 ^ uVar77) & uVar74 ^ uVar77) + DAT_140deef00 +
               (uVar62 >> 6 | uVar62 << 0x1a);
      uVar65 = uVar65 + iVar79;
      uVar83 = (uVar67 ^ (uVar67 ^ uVar87) & (uVar82 ^ uVar67)) + iVar79 +
               (uVar66 >> 2 | uVar66 << 0x1e);
      uVar62 = *(uint *)(param_2[2] + 4);
      uStack_9c = uVar62 >> 0x18 | (uVar62 & 0xff0000) >> 8 | (uVar62 & 0xff00) << 8 |
                  uVar62 << 0x18;
      uVar62 = (uVar65 >> 0xe | uVar65 * 0x40000) ^ uVar65;
      uVar66 = (uVar83 >> 9 | uVar83 * 0x800000) ^ uVar83;
      uVar62 = (uVar62 >> 5 | uVar62 << 0x1b) ^ uVar65;
      uVar66 = (uVar66 >> 0xb | uVar66 << 0x15) ^ uVar83;
      iVar79 = uStack_9c + uVar77 + ((uVar74 ^ uVar76) & uVar65 ^ uVar76) + DAT_140deef04 +
               (uVar62 >> 6 | uVar62 << 0x1a);
      uVar87 = uVar87 + iVar79;
      uVar84 = (uVar82 ^ (uVar82 ^ uVar67) & (uVar83 ^ uVar82)) + iVar79 +
               (uVar66 >> 2 | uVar66 << 0x1e);
      uVar62 = *(uint *)(param_2[2] + 8);
      uStack_98 = uVar62 >> 0x18 | (uVar62 & 0xff0000) >> 8 | (uVar62 & 0xff00) << 8 |
                  uVar62 << 0x18;
      uVar62 = (uVar87 >> 0xe | uVar87 * 0x40000) ^ uVar87;
      uVar66 = (uVar84 >> 9 | uVar84 * 0x800000) ^ uVar84;
      uVar62 = (uVar62 >> 5 | uVar62 << 0x1b) ^ uVar87;
      uVar66 = (uVar66 >> 0xb | uVar66 << 0x15) ^ uVar84;
      iVar79 = uStack_98 + uVar76 + ((uVar65 ^ uVar74) & uVar87 ^ uVar74) + DAT_140deef08 +
               (uVar62 >> 6 | uVar62 << 0x1a);
      uVar67 = uVar67 + iVar79;
      uVar85 = (uVar83 ^ (uVar83 ^ uVar82) & (uVar84 ^ uVar83)) + iVar79 +
               (uVar66 >> 2 | uVar66 << 0x1e);
      uVar62 = *(uint *)(param_2[2] + 0xc);
      uStack_94 = uVar62 >> 0x18 | (uVar62 & 0xff0000) >> 8 | (uVar62 & 0xff00) << 8 |
                  uVar62 << 0x18;
      uVar62 = (uVar67 >> 0xe | uVar67 * 0x40000) ^ uVar67;
      uVar66 = (uVar85 >> 9 | uVar85 * 0x800000) ^ uVar85;
      uVar62 = (uVar62 >> 5 | uVar62 << 0x1b) ^ uVar67;
      uVar66 = (uVar66 >> 0xb | uVar66 << 0x15) ^ uVar85;
      iVar79 = uStack_94 + uVar74 + ((uVar87 ^ uVar65) & uVar67 ^ uVar65) + DAT_140deef0c +
               (uVar62 >> 6 | uVar62 << 0x1a);
      uVar82 = uVar82 + iVar79;
      uVar86 = (uVar84 ^ (uVar84 ^ uVar83) & (uVar85 ^ uVar84)) + iVar79 +
               (uVar66 >> 2 | uVar66 << 0x1e);
      uVar62 = *(uint *)param_2[3];
      uStack_90 = uVar62 >> 0x18 | (uVar62 & 0xff0000) >> 8 | (uVar62 & 0xff00) << 8 |
                  uVar62 << 0x18;
      uVar62 = (uVar82 >> 0xe | uVar82 * 0x40000) ^ uVar82;
      uVar66 = (uVar86 >> 9 | uVar86 * 0x800000) ^ uVar86;
      uVar62 = (uVar62 >> 5 | uVar62 << 0x1b) ^ uVar82;
      uVar66 = (uVar66 >> 0xb | uVar66 << 0x15) ^ uVar86;
      iVar79 = uStack_90 + uVar65 + ((uVar67 ^ uVar87) & uVar82 ^ uVar87) + DAT_140deef20 +
               (uVar62 >> 6 | uVar62 << 0x1a);
      uVar83 = uVar83 + iVar79;
      uVar64 = (uVar85 ^ (uVar85 ^ uVar84) & (uVar86 ^ uVar85)) + iVar79 +
               (uVar66 >> 2 | uVar66 << 0x1e);
      uVar62 = *(uint *)(param_2[3] + 4);
      uStack_8c = uVar62 >> 0x18 | (uVar62 & 0xff0000) >> 8 | (uVar62 & 0xff00) << 8 |
                  uVar62 << 0x18;
      uVar62 = (uVar83 >> 0xe | uVar83 * 0x40000) ^ uVar83;
      uVar66 = (uVar64 >> 9 | uVar64 * 0x800000) ^ uVar64;
      uVar62 = (uVar62 >> 5 | uVar62 << 0x1b) ^ uVar83;
      uVar66 = (uVar66 >> 0xb | uVar66 << 0x15) ^ uVar64;
      iVar79 = uStack_8c + uVar87 + ((uVar82 ^ uVar67) & uVar83 ^ uVar67) + DAT_140deef24 +
               (uVar62 >> 6 | uVar62 << 0x1a);
      uVar84 = uVar84 + iVar79;
      uVar63 = (uVar86 ^ (uVar86 ^ uVar85) & (uVar64 ^ uVar86)) + iVar79 +
               (uVar66 >> 2 | uVar66 << 0x1e);
      uVar62 = *(uint *)(param_2[3] + 8);
      uStack_88 = uVar62 >> 0x18 | (uVar62 & 0xff0000) >> 8 | (uVar62 & 0xff00) << 8 |
                  uVar62 << 0x18;
      uVar62 = (uVar84 >> 0xe | uVar84 * 0x40000) ^ uVar84;
      uVar66 = (uVar63 >> 9 | uVar63 * 0x800000) ^ uVar63;
      uVar62 = (uVar62 >> 5 | uVar62 << 0x1b) ^ uVar84;
      uVar66 = (uVar66 >> 0xb | uVar66 << 0x15) ^ uVar63;
      iVar79 = uStack_88 + uVar67 + ((uVar83 ^ uVar82) & uVar84 ^ uVar82) + DAT_140deef28 +
               (uVar62 >> 6 | uVar62 << 0x1a);
      uVar85 = uVar85 + iVar79;
      uVar66 = (uVar64 ^ (uVar64 ^ uVar86) & (uVar63 ^ uVar64)) + iVar79 +
               (uVar66 >> 2 | uVar66 << 0x1e);
      uVar62 = *(uint *)(param_2[3] + 0xc);
      uStack_84 = uVar62 >> 0x18 | (uVar62 & 0xff0000) >> 8 | (uVar62 & 0xff00) << 8 |
                  uVar62 << 0x18;
      uVar62 = (uVar85 >> 0xe | uVar85 * 0x40000) ^ uVar85;
      uVar87 = (uVar66 >> 9 | uVar66 * 0x800000) ^ uVar66;
      uVar65 = (uVar62 >> 5 | uVar62 << 0x1b) ^ uVar85;
      uVar62 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar66;
      uVar87 = uVar66 ^ uVar63;
      uVar62 = uVar62 >> 2 | uVar62 << 0x1e;
      iVar79 = uStack_84 + uVar82 + ((uVar84 ^ uVar83) & uVar85 ^ uVar83) + DAT_140deef2c +
               (uVar65 >> 6 | uVar65 << 0x1a);
      uVar86 = uVar86 + iVar79;
      iVar79 = (uVar63 ^ (uVar63 ^ uVar64) & uVar87) + iVar79;
      piVar71 = &DAT_140deef40;
      do {
        uVar62 = iVar79 + uVar62;
        uVar82 = (uStack_bc >> 0xb | uStack_bc << 0x15) ^ uStack_bc;
        uVar65 = (uStack_88 >> 2 | uStack_88 << 0x1e) ^ uStack_88;
        uStack_c0 = (uStack_bc >> 3 ^ (uVar82 >> 7 | uVar82 << 0x19)) + uStack_9c + uStack_c0 +
                    ((uVar65 >> 0x11 | uVar65 << 0xf) ^ uStack_88 >> 10);
        uVar82 = (uVar86 >> 0xe | uVar86 << 0x12) ^ uVar86;
        uVar65 = (uVar62 >> 9 | uVar62 * 0x800000) ^ uVar62;
        uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar86;
        uVar65 = (uVar65 >> 0xb | uVar65 << 0x15) ^ uVar62;
        iVar79 = uStack_c0 + uVar83 + ((uVar85 ^ uVar84) & uVar86 ^ uVar84) + *piVar71 +
                 (uVar82 >> 6 | uVar82 << 0x1a);
        uVar64 = uVar64 + iVar79;
        uVar67 = (uVar66 ^ uVar87 & (uVar62 ^ uVar66)) + iVar79 + (uVar65 >> 2 | uVar65 << 0x1e);
        uVar82 = (uStack_b8 >> 0xb | uStack_b8 << 0x15) ^ uStack_b8;
        uVar83 = (uStack_84 >> 2 | uStack_84 << 0x1e) ^ uStack_84;
        uStack_bc = (uStack_b8 >> 3 ^ (uVar82 >> 7 | uVar82 << 0x19)) + uStack_98 + uStack_bc +
                    ((uVar83 >> 0x11 | uVar83 << 0xf) ^ uStack_84 >> 10);
        uVar83 = (uVar64 >> 0xe | uVar64 * 0x40000) ^ uVar64;
        uVar82 = (uVar67 >> 9 | uVar67 * 0x800000) ^ uVar67;
        uVar83 = (uVar83 >> 5 | uVar83 << 0x1b) ^ uVar64;
        uVar82 = (uVar82 >> 0xb | uVar82 << 0x15) ^ uVar67;
        iVar79 = uStack_bc + uVar84 + ((uVar86 ^ uVar85) & uVar64 ^ uVar85) + piVar71[1] +
                 (uVar83 >> 6 | uVar83 << 0x1a);
        uVar63 = uVar63 + iVar79;
        uVar84 = (uVar62 ^ (uVar62 ^ uVar66) & (uVar67 ^ uVar62)) + iVar79 +
                 (uVar82 >> 2 | uVar82 << 0x1e);
        uVar83 = (uStack_b4 >> 0xb | uStack_b4 << 0x15) ^ uStack_b4;
        uVar82 = (uStack_c0 >> 2 | uStack_c0 * 0x40000000) ^ uStack_c0;
        uStack_b8 = (uStack_b4 >> 3 ^ (uVar83 >> 7 | uVar83 << 0x19)) + uStack_94 + uStack_b8 +
                    ((uVar82 >> 0x11 | uVar82 << 0xf) ^ uStack_c0 >> 10);
        uVar83 = (uVar63 >> 0xe | uVar63 * 0x40000) ^ uVar63;
        uVar82 = (uVar84 >> 9 | uVar84 * 0x800000) ^ uVar84;
        uVar83 = (uVar83 >> 5 | uVar83 << 0x1b) ^ uVar63;
        uVar82 = (uVar82 >> 0xb | uVar82 << 0x15) ^ uVar84;
        iVar79 = uStack_b8 + uVar85 + ((uVar64 ^ uVar86) & uVar63 ^ uVar86) + piVar71[2] +
                 (uVar83 >> 6 | uVar83 << 0x1a);
        uVar66 = uVar66 + iVar79;
        uVar65 = (uVar67 ^ (uVar67 ^ uVar62) & (uVar84 ^ uVar67)) + iVar79 +
                 (uVar82 >> 2 | uVar82 << 0x1e);
        uVar83 = (uStack_b0 >> 0xb | uStack_b0 << 0x15) ^ uStack_b0;
        uVar85 = (uStack_bc >> 2 | uStack_bc * 0x40000000) ^ uStack_bc;
        uStack_b4 = (uStack_b0 >> 3 ^ (uVar83 >> 7 | uVar83 << 0x19)) + uStack_90 + uStack_b4 +
                    ((uVar85 >> 0x11 | uVar85 << 0xf) ^ uStack_bc >> 10);
        uVar85 = (uVar66 >> 0xe | uVar66 * 0x40000) ^ uVar66;
        uVar83 = (uVar65 >> 9 | uVar65 * 0x800000) ^ uVar65;
        uVar85 = (uVar85 >> 5 | uVar85 << 0x1b) ^ uVar66;
        uVar83 = (uVar83 >> 0xb | uVar83 << 0x15) ^ uVar65;
        iVar79 = uStack_b4 + uVar86 + ((uVar63 ^ uVar64) & uVar66 ^ uVar64) + piVar71[3] +
                 (uVar85 >> 6 | uVar85 << 0x1a);
        uVar62 = uVar62 + iVar79;
        uVar87 = (uVar84 ^ (uVar84 ^ uVar67) & (uVar65 ^ uVar84)) + iVar79 +
                 (uVar83 >> 2 | uVar83 << 0x1e);
        uVar86 = (uStack_ac >> 0xb | uStack_ac << 0x15) ^ uStack_ac;
        uVar85 = (uStack_b8 >> 2 | uStack_b8 * 0x40000000) ^ uStack_b8;
        uStack_b0 = (uStack_ac >> 3 ^ (uVar86 >> 7 | uVar86 << 0x19)) + uStack_8c + uStack_b0 +
                    ((uVar85 >> 0x11 | uVar85 << 0xf) ^ uStack_b8 >> 10);
        uVar86 = (uVar62 >> 0xe | uVar62 * 0x40000) ^ uVar62;
        uVar85 = (uVar87 >> 9 | uVar87 * 0x800000) ^ uVar87;
        uVar86 = (uVar86 >> 5 | uVar86 << 0x1b) ^ uVar62;
        uVar85 = (uVar85 >> 0xb | uVar85 << 0x15) ^ uVar87;
        iVar79 = uStack_b0 + uVar64 + ((uVar66 ^ uVar63) & uVar62 ^ uVar63) + piVar71[8] +
                 (uVar86 >> 6 | uVar86 << 0x1a);
        uVar67 = uVar67 + iVar79;
        uVar64 = (uVar65 ^ (uVar65 ^ uVar84) & (uVar87 ^ uVar65)) + iVar79 +
                 (uVar85 >> 2 | uVar85 << 0x1e);
        uVar85 = (uVar80 >> 0xb | uVar80 << 0x15) ^ uVar80;
        uVar86 = (uStack_b4 >> 2 | uStack_b4 * 0x40000000) ^ uStack_b4;
        uStack_ac = (uVar80 >> 3 ^ (uVar85 >> 7 | uVar85 << 0x19)) + uStack_88 + uStack_ac +
                    ((uVar86 >> 0x11 | uVar86 << 0xf) ^ uStack_b4 >> 10);
        uVar86 = (uVar67 >> 0xe | uVar67 * 0x40000) ^ uVar67;
        uVar85 = (uVar64 >> 9 | uVar64 * 0x800000) ^ uVar64;
        uVar86 = (uVar86 >> 5 | uVar86 << 0x1b) ^ uVar67;
        uVar85 = (uVar85 >> 0xb | uVar85 << 0x15) ^ uVar64;
        iVar79 = uStack_ac + uVar63 + ((uVar62 ^ uVar66) & uVar67 ^ uVar66) + piVar71[9] +
                 (uVar86 >> 6 | uVar86 << 0x1a);
        uVar84 = uVar84 + iVar79;
        uVar63 = (uVar87 ^ (uVar87 ^ uVar65) & (uVar64 ^ uVar87)) + iVar79 +
                 (uVar85 >> 2 | uVar85 << 0x1e);
        uVar86 = (uVar81 >> 0xb | uVar81 << 0x15) ^ uVar81;
        uVar85 = (uStack_b0 >> 2 | uStack_b0 * 0x40000000) ^ uStack_b0;
        uVar80 = (uVar81 >> 3 ^ (uVar86 >> 7 | uVar86 << 0x19)) + uStack_84 + uVar80 +
                 ((uVar85 >> 0x11 | uVar85 << 0xf) ^ uStack_b0 >> 10);
        uVar86 = (uVar84 >> 0xe | uVar84 * 0x40000) ^ uVar84;
        uVar85 = (uVar63 >> 9 | uVar63 * 0x800000) ^ uVar63;
        uVar86 = (uVar86 >> 5 | uVar86 << 0x1b) ^ uVar84;
        uVar85 = (uVar85 >> 0xb | uVar85 << 0x15) ^ uVar63;
        iVar79 = uVar80 + uVar66 + ((uVar67 ^ uVar62) & uVar84 ^ uVar62) + piVar71[10] +
                 (uVar86 >> 6 | uVar86 << 0x1a);
        uVar65 = uVar65 + iVar79;
        uVar66 = (uVar64 ^ (uVar64 ^ uVar87) & (uVar63 ^ uVar64)) + iVar79 +
                 (uVar85 >> 2 | uVar85 << 0x1e);
        uVar85 = (uStack_a0 >> 0xb | uStack_a0 << 0x15) ^ uStack_a0;
        uVar86 = (uStack_ac >> 2 | uStack_ac * 0x40000000) ^ uStack_ac;
        uVar81 = (uStack_a0 >> 3 ^ (uVar85 >> 7 | uVar85 << 0x19)) + uStack_c0 + uVar81 +
                 ((uVar86 >> 0x11 | uVar86 << 0xf) ^ uStack_ac >> 10);
        uVar86 = (uVar65 >> 0xe | uVar65 * 0x40000) ^ uVar65;
        uVar85 = (uVar66 >> 9 | uVar66 * 0x800000) ^ uVar66;
        uVar86 = (uVar86 >> 5 | uVar86 << 0x1b) ^ uVar65;
        uVar85 = (uVar85 >> 0xb | uVar85 << 0x15) ^ uVar66;
        iVar79 = uVar81 + uVar62 + ((uVar84 ^ uVar67) & uVar65 ^ uVar67) + piVar71[0xb] +
                 (uVar86 >> 6 | uVar86 << 0x1a);
        uVar87 = uVar87 + iVar79;
        uVar82 = (uVar63 ^ (uVar63 ^ uVar64) & (uVar66 ^ uVar63)) + iVar79 +
                 (uVar85 >> 2 | uVar85 << 0x1e);
        uVar62 = (uStack_9c >> 0xb | uStack_9c << 0x15) ^ uStack_9c;
        uVar86 = (uVar80 >> 2 | uVar80 * 0x40000000) ^ uVar80;
        uStack_a0 = (uStack_9c >> 3 ^ (uVar62 >> 7 | uVar62 << 0x19)) + uStack_bc + uStack_a0 +
                    ((uVar86 >> 0x11 | uVar86 << 0xf) ^ uVar80 >> 10);
        uVar62 = (uVar87 >> 0xe | uVar87 * 0x40000) ^ uVar87;
        uVar86 = (uVar82 >> 9 | uVar82 * 0x800000) ^ uVar82;
        uVar62 = (uVar62 >> 5 | uVar62 << 0x1b) ^ uVar87;
        uVar86 = (uVar86 >> 0xb | uVar86 << 0x15) ^ uVar82;
        iVar79 = uStack_a0 + uVar67 + ((uVar65 ^ uVar84) & uVar87 ^ uVar84) + piVar71[0x10] +
                 (uVar62 >> 6 | uVar62 << 0x1a);
        uVar64 = uVar64 + iVar79;
        uVar83 = (uVar66 ^ (uVar66 ^ uVar63) & (uVar82 ^ uVar66)) + iVar79 +
                 (uVar86 >> 2 | uVar86 << 0x1e);
        uVar86 = (uStack_98 >> 0xb | uStack_98 << 0x15) ^ uStack_98;
        uVar62 = (uVar81 >> 2 | uVar81 * 0x40000000) ^ uVar81;
        uStack_9c = (uStack_98 >> 3 ^ (uVar86 >> 7 | uVar86 << 0x19)) + uStack_b8 + uStack_9c +
                    ((uVar62 >> 0x11 | uVar62 << 0xf) ^ uVar81 >> 10);
        uVar62 = (uVar64 >> 0xe | uVar64 * 0x40000) ^ uVar64;
        uVar86 = (uVar83 >> 9 | uVar83 * 0x800000) ^ uVar83;
        uVar62 = (uVar62 >> 5 | uVar62 << 0x1b) ^ uVar64;
        uVar86 = (uVar86 >> 0xb | uVar86 << 0x15) ^ uVar83;
        iVar79 = uStack_9c + uVar84 + ((uVar87 ^ uVar65) & uVar64 ^ uVar65) + piVar71[0x11] +
                 (uVar62 >> 6 | uVar62 << 0x1a);
        uVar63 = uVar63 + iVar79;
        uVar84 = (uVar82 ^ (uVar82 ^ uVar66) & (uVar83 ^ uVar82)) + iVar79 +
                 (uVar86 >> 2 | uVar86 << 0x1e);
        uVar62 = (uStack_94 >> 0xb | uStack_94 << 0x15) ^ uStack_94;
        uVar86 = (uStack_a0 >> 2 | uStack_a0 * 0x40000000) ^ uStack_a0;
        uStack_98 = (uStack_94 >> 3 ^ (uVar62 >> 7 | uVar62 << 0x19)) + uStack_b4 + uStack_98 +
                    ((uVar86 >> 0x11 | uVar86 << 0xf) ^ uStack_a0 >> 10);
        uVar62 = (uVar63 >> 0xe | uVar63 * 0x40000) ^ uVar63;
        uVar86 = (uVar84 >> 9 | uVar84 * 0x800000) ^ uVar84;
        uVar62 = (uVar62 >> 5 | uVar62 << 0x1b) ^ uVar63;
        uVar86 = (uVar86 >> 0xb | uVar86 << 0x15) ^ uVar84;
        iVar79 = uStack_98 + uVar65 + ((uVar64 ^ uVar87) & uVar63 ^ uVar87) + piVar71[0x12] +
                 (uVar62 >> 6 | uVar62 << 0x1a);
        uVar66 = uVar66 + iVar79;
        uVar85 = (uVar83 ^ (uVar83 ^ uVar82) & (uVar84 ^ uVar83)) + iVar79 +
                 (uVar86 >> 2 | uVar86 << 0x1e);
        uVar86 = (uStack_90 >> 0xb | uStack_90 << 0x15) ^ uStack_90;
        uVar62 = (uStack_9c >> 2 | uStack_9c * 0x40000000) ^ uStack_9c;
        uStack_94 = (uStack_90 >> 3 ^ (uVar86 >> 7 | uVar86 << 0x19)) + uStack_b0 + uStack_94 +
                    ((uVar62 >> 0x11 | uVar62 << 0xf) ^ uStack_9c >> 10);
        uVar62 = (uVar66 >> 0xe | uVar66 * 0x40000) ^ uVar66;
        uVar86 = (uVar85 >> 9 | uVar85 * 0x800000) ^ uVar85;
        uVar62 = (uVar62 >> 5 | uVar62 << 0x1b) ^ uVar66;
        uVar86 = (uVar86 >> 0xb | uVar86 << 0x15) ^ uVar85;
        iVar79 = uStack_94 + uVar87 + ((uVar63 ^ uVar64) & uVar66 ^ uVar64) + piVar71[0x13] +
                 (uVar62 >> 6 | uVar62 << 0x1a);
        uVar82 = uVar82 + iVar79;
        uVar86 = (uVar84 ^ (uVar84 ^ uVar83) & (uVar85 ^ uVar84)) + iVar79 +
                 (uVar86 >> 2 | uVar86 << 0x1e);
        uVar62 = (uStack_8c >> 0xb | uStack_8c << 0x15) ^ uStack_8c;
        uVar87 = (uStack_98 >> 2 | uStack_98 * 0x40000000) ^ uStack_98;
        uStack_90 = (uStack_8c >> 3 ^ (uVar62 >> 7 | uVar62 << 0x19)) + uStack_ac + uStack_90 +
                    ((uVar87 >> 0x11 | uVar87 << 0xf) ^ uStack_98 >> 10);
        uVar62 = (uVar82 >> 0xe | uVar82 * 0x40000) ^ uVar82;
        uVar87 = (uVar86 >> 9 | uVar86 * 0x800000) ^ uVar86;
        uVar62 = (uVar62 >> 5 | uVar62 << 0x1b) ^ uVar82;
        uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar86;
        iVar79 = uStack_90 + uVar64 + ((uVar66 ^ uVar63) & uVar82 ^ uVar63) + piVar71[0x18] +
                 (uVar62 >> 6 | uVar62 << 0x1a);
        uVar83 = uVar83 + iVar79;
        uVar64 = (uVar85 ^ (uVar85 ^ uVar84) & (uVar86 ^ uVar85)) + iVar79 +
                 (uVar87 >> 2 | uVar87 << 0x1e);
        uVar87 = (uStack_88 >> 0xb | uStack_88 << 0x15) ^ uStack_88;
        uVar62 = (uStack_94 >> 2 | uStack_94 * 0x40000000) ^ uStack_94;
        uStack_8c = (uStack_88 >> 3 ^ (uVar87 >> 7 | uVar87 << 0x19)) + uVar80 + uStack_8c +
                    ((uVar62 >> 0x11 | uVar62 << 0xf) ^ uStack_94 >> 10);
        uVar62 = (uVar83 >> 0xe | uVar83 * 0x40000) ^ uVar83;
        uVar87 = (uVar64 >> 9 | uVar64 * 0x800000) ^ uVar64;
        uVar62 = (uVar62 >> 5 | uVar62 << 0x1b) ^ uVar83;
        uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar64;
        iVar79 = uStack_8c + uVar63 + ((uVar82 ^ uVar66) & uVar83 ^ uVar66) + piVar71[0x19] +
                 (uVar62 >> 6 | uVar62 << 0x1a);
        uVar84 = uVar84 + iVar79;
        uVar63 = (uVar86 ^ (uVar86 ^ uVar85) & (uVar64 ^ uVar86)) + iVar79 +
                 (uVar87 >> 2 | uVar87 << 0x1e);
        uVar62 = (uStack_84 >> 0xb | uStack_84 << 0x15) ^ uStack_84;
        uVar87 = (uStack_90 >> 2 | uStack_90 * 0x40000000) ^ uStack_90;
        uStack_88 = (uStack_84 >> 3 ^ (uVar62 >> 7 | uVar62 << 0x19)) + uVar81 + uStack_88 +
                    ((uVar87 >> 0x11 | uVar87 << 0xf) ^ uStack_90 >> 10);
        uVar62 = (uVar84 >> 0xe | uVar84 * 0x40000) ^ uVar84;
        uVar87 = (uVar63 >> 9 | uVar63 * 0x800000) ^ uVar63;
        uVar62 = (uVar62 >> 5 | uVar62 << 0x1b) ^ uVar84;
        uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar63;
        iVar79 = uStack_88 + uVar66 + ((uVar83 ^ uVar82) & uVar84 ^ uVar82) + piVar71[0x1a] +
                 (uVar62 >> 6 | uVar62 << 0x1a);
        uVar85 = uVar85 + iVar79;
        uVar66 = (uVar64 ^ (uVar64 ^ uVar86) & (uVar63 ^ uVar64)) + iVar79 +
                 (uVar87 >> 2 | uVar87 << 0x1e);
        uVar87 = (uStack_c0 >> 0xb | uStack_c0 * 0x200000) ^ uStack_c0;
        uVar62 = (uStack_8c >> 2 | uStack_8c * 0x40000000) ^ uStack_8c;
        uStack_84 = (uStack_c0 >> 3 ^ (uVar87 >> 7 | uVar87 << 0x19)) + uStack_a0 + uStack_84 +
                    ((uVar62 >> 0x11 | uVar62 << 0xf) ^ uStack_8c >> 10);
        uVar62 = (uVar85 >> 0xe | uVar85 * 0x40000) ^ uVar85;
        uVar87 = (uVar66 >> 9 | uVar66 * 0x800000) ^ uVar66;
        uVar65 = (uVar62 >> 5 | uVar62 << 0x1b) ^ uVar85;
        uVar62 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar66;
        uVar87 = uVar66 ^ uVar63;
        uVar62 = uVar62 >> 2 | uVar62 << 0x1e;
        iVar79 = uStack_84 + uVar82 + ((uVar84 ^ uVar83) & uVar85 ^ uVar83) + piVar71[0x1b] +
                 (uVar65 >> 6 | uVar65 << 0x1a);
        uVar86 = uVar86 + iVar79;
        iVar79 = (uVar63 ^ (uVar63 ^ uVar64) & uVar87) + iVar79;
        pcVar1 = (char *)((longlong)piVar71 + 0x83);
        piVar71 = piVar71 + 0x20;
      } while (*pcVar1 != '\0');
      param_2 = param_2 + 4;
      uVar62 = iVar79 + uVar62 + *param_1;
      uVar66 = uVar66 + param_1[1];
      uVar63 = uVar63 + param_1[2];
      uVar64 = uVar64 + param_1[3];
      uVar86 = uVar86 + param_1[4];
      uVar85 = uVar85 + param_1[5];
      uVar84 = uVar84 + param_1[6];
      uVar83 = uVar83 + param_1[7];
      *param_1 = uVar62;
      param_1[1] = uVar66;
      param_1[2] = uVar63;
      param_1[3] = uVar64;
      param_1[4] = uVar86;
      param_1[5] = uVar85;
      param_1[6] = uVar84;
      param_1[7] = uVar83;
    } while (param_2 < pauVar73);
    return;
  }
  pauVar73 = param_2 + param_3 * 4;
  uVar62 = *param_1;
  uVar66 = param_1[1];
  uVar63 = param_1[2];
  uVar64 = param_1[3];
  uVar86 = param_1[4];
  uVar85 = param_1[5];
  uVar84 = param_1[6];
  uVar83 = param_1[7];
  do {
    in_ZMM0._0_16_ = pshufb(*param_2,_DAT_140def0c0);
    in_ZMM1._0_16_ = pshufb(param_2[1],_DAT_140def0c0);
    in_ZMM2._0_16_ = pshufb(param_2[2],_DAT_140def0c0);
    auStack_100._0_4_ = K256 + in_ZMM0._0_4_;
    auStack_100._4_4_ = DAT_140deeec4 + in_ZMM0._4_4_;
    auStack_100._8_4_ = DAT_140deeec8 + in_ZMM0._8_4_;
    auStack_100._12_4_ = DAT_140deeecc + in_ZMM0._12_4_;
    in_ZMM3._0_16_ = pshufb(param_2[3],_DAT_140def0c0);
    auStack_f0._0_4_ = DAT_140deeee0 + in_ZMM1._0_4_;
    auStack_f0._4_4_ = DAT_140deeee4 + in_ZMM1._4_4_;
    auStack_f0._8_4_ = DAT_140deeee8 + in_ZMM1._8_4_;
    auStack_f0._12_4_ = DAT_140deeeec + in_ZMM1._12_4_;
    auStack_e0._0_4_ = DAT_140deef00 + in_ZMM2._0_4_;
    auStack_e0._4_4_ = DAT_140deef04 + in_ZMM2._4_4_;
    auStack_e0._8_4_ = DAT_140deef08 + in_ZMM2._8_4_;
    auStack_e0._12_4_ = DAT_140deef0c + in_ZMM2._12_4_;
    auStack_d0._0_4_ = DAT_140deef20 + in_ZMM3._0_4_;
    auStack_d0._4_4_ = DAT_140deef24 + in_ZMM3._4_4_;
    auStack_d0._8_4_ = DAT_140deef28 + in_ZMM3._8_4_;
    auStack_d0._12_4_ = DAT_140deef2c + in_ZMM3._12_4_;
    uVar82 = uVar66 ^ uVar63;
    piVar71 = &K256;
    do {
      uVar87 = (uVar86 >> 0xe | uVar86 << 0x12) ^ uVar86;
      uVar65 = (uVar62 >> 9 | uVar62 << 0x17) ^ uVar62;
      uVar87 = (uVar87 >> 5 | uVar87 << 0x1b) ^ uVar86;
      uVar77 = in_ZMM0._4_4_;
      uVar78 = in_ZMM0._8_4_;
      uVar80 = in_ZMM0._12_4_;
      uVar81 = in_ZMM1._0_4_;
      uVar65 = (uVar65 >> 0xb | uVar65 << 0x15) ^ uVar62;
      iVar79 = uVar83 + auStack_100._0_4_ + ((uVar85 ^ uVar84) & uVar86 ^ uVar84) +
               (uVar87 >> 6 | uVar87 << 0x1a);
      uVar155 = in_ZMM2._4_4_;
      uVar188 = in_ZMM2._8_4_;
      uVar189 = in_ZMM2._12_4_;
      uVar190 = in_ZMM3._0_4_;
      uVar64 = uVar64 + iVar79;
      uVar67 = in_ZMM3._4_4_;
      uVar74 = in_ZMM3._8_4_;
      uVar76 = in_ZMM3._12_4_;
      auVar156._0_8_ = CONCAT44(uVar74,uVar74);
      auVar156._8_4_ = uVar76;
      auVar156._12_4_ = uVar76;
      uVar83 = (uVar65 >> 2 | uVar65 << 0x1e) + iVar79 + (uVar82 & (uVar62 ^ uVar66) ^ uVar66);
      uVar82 = (uVar64 >> 0xe | uVar64 * 0x40000) ^ uVar64;
      uVar87 = (uVar83 >> 9 | uVar83 * 0x800000) ^ uVar83;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar64;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar83;
      auVar157._0_4_ = uVar74 >> 10;
      auVar157._4_4_ = 0;
      auVar157._8_4_ = uVar76 >> 10;
      auVar157._12_4_ = uVar76 >> 10;
      iVar79 = uVar84 + auStack_100._4_4_ + ((uVar86 ^ uVar85) & uVar64 ^ uVar85) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar63 = uVar63 + iVar79;
      auVar137._0_8_ = auVar156._0_8_ >> 0x11;
      auVar137._8_8_ = auVar156._8_8_ >> 0x11;
      uVar84 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar62 ^ uVar66) & (uVar83 ^ uVar62) ^ uVar62);
      auVar158._0_8_ = auVar156._0_8_ >> 0x13;
      auVar158._8_8_ = auVar156._8_8_ >> 0x13;
      uVar82 = (uVar63 >> 0xe | uVar63 * 0x40000) ^ uVar63;
      auVar158 = auVar157 ^ auVar137 ^ auVar158;
      uVar87 = (uVar84 >> 9 | uVar84 * 0x800000) ^ uVar84;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar63;
      in_ZMM0._0_4_ =
           in_ZMM0._0_4_ + uVar155 +
           (uVar77 >> 3 ^ uVar77 >> 7 ^ uVar77 << 0xe ^ uVar77 >> 0x12 ^ uVar77 << 0x19) +
           auVar158._0_4_;
      in_ZMM0._4_4_ =
           uVar77 + uVar188 +
           (uVar78 >> 3 ^ uVar78 >> 7 ^ uVar78 << 0xe ^ uVar78 >> 0x12 ^ uVar78 << 0x19) +
           auVar158._8_4_;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar84;
      iVar79 = uVar85 + auStack_100._8_4_ + ((uVar64 ^ uVar86) & uVar63 ^ uVar86) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      auVar159._0_8_ = CONCAT44(in_ZMM0._0_4_,in_ZMM0._0_4_);
      auVar159._8_4_ = in_ZMM0._4_4_;
      auVar159._12_4_ = in_ZMM0._4_4_;
      uVar66 = uVar66 + iVar79;
      auVar160._0_4_ = in_ZMM0._0_4_ >> 10;
      auVar160._4_4_ = 0;
      auVar160._8_4_ = in_ZMM0._4_4_ >> 10;
      auVar160._12_4_ = in_ZMM0._4_4_ >> 10;
      uVar85 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar83 ^ uVar62) & (uVar84 ^ uVar83) ^ uVar83);
      auVar138._0_8_ = auVar159._0_8_ >> 0x11;
      auVar138._8_8_ = auVar159._8_8_ >> 0x11;
      uVar82 = (uVar66 >> 0xe | uVar66 * 0x40000) ^ uVar66;
      uVar87 = (uVar85 >> 9 | uVar85 * 0x800000) ^ uVar85;
      auVar161._0_8_ = auVar159._0_8_ >> 0x13;
      auVar161._8_8_ = auVar159._8_8_ >> 0x13;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar66;
      auVar161 = auVar160 ^ auVar138 ^ auVar161;
      piVar51 = piVar71 + 0x21;
      piVar52 = piVar71 + 0x22;
      piVar53 = piVar71 + 0x23;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar85;
      iVar79 = uVar86 + auStack_100._12_4_ + ((uVar63 ^ uVar64) & uVar66 ^ uVar64) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      in_ZMM0._8_4_ =
           uVar78 + uVar189 +
           (uVar80 >> 3 ^ uVar80 >> 7 ^ uVar80 << 0xe ^ uVar80 >> 0x12 ^ uVar80 << 0x19) +
           auVar161._0_4_;
      in_ZMM0._12_4_ =
           uVar80 + uVar190 +
           (uVar81 >> 3 ^ uVar81 >> 7 ^ uVar81 << 0xe ^ uVar81 >> 0x12 ^ uVar81 << 0x19) +
           auVar161._8_4_;
      uVar62 = uVar62 + iVar79;
      auStack_100._0_4_ = piVar71[0x20] + in_ZMM0._0_4_;
      uVar86 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar84 ^ uVar83) & (uVar85 ^ uVar84) ^ uVar84);
      auStack_100._4_4_ = *piVar51 + in_ZMM0._4_4_;
      auStack_100._8_4_ = *piVar52 + in_ZMM0._8_4_;
      auStack_100._12_4_ = *piVar53 + in_ZMM0._12_4_;
      uVar82 = (uVar62 >> 0xe | uVar62 * 0x40000) ^ uVar62;
      uVar87 = (uVar86 >> 9 | uVar86 * 0x800000) ^ uVar86;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar62;
      uVar65 = in_ZMM1._4_4_;
      uVar77 = in_ZMM1._8_4_;
      uVar78 = in_ZMM1._12_4_;
      uVar80 = in_ZMM2._0_4_;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar86;
      iVar79 = uVar64 + auStack_f0._0_4_ + ((uVar66 ^ uVar63) & uVar62 ^ uVar63) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar83 = uVar83 + iVar79;
      auVar162._0_8_ = CONCAT44(in_ZMM0._8_4_,in_ZMM0._8_4_);
      auVar162._8_4_ = in_ZMM0._12_4_;
      auVar162._12_4_ = in_ZMM0._12_4_;
      uVar64 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar85 ^ uVar84) & (uVar86 ^ uVar85) ^ uVar85);
      uVar82 = (uVar83 >> 0xe | uVar83 * 0x40000) ^ uVar83;
      uVar87 = (uVar64 >> 9 | uVar64 * 0x800000) ^ uVar64;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar83;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar64;
      auVar163._0_4_ = in_ZMM0._8_4_ >> 10;
      auVar163._4_4_ = 0;
      auVar163._8_4_ = in_ZMM0._12_4_ >> 10;
      auVar163._12_4_ = in_ZMM0._12_4_ >> 10;
      iVar79 = uVar63 + auStack_f0._4_4_ + ((uVar62 ^ uVar66) & uVar83 ^ uVar66) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar84 = uVar84 + iVar79;
      auVar139._0_8_ = auVar162._0_8_ >> 0x11;
      auVar139._8_8_ = auVar162._8_8_ >> 0x11;
      uVar63 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar86 ^ uVar85) & (uVar64 ^ uVar86) ^ uVar86);
      auVar164._0_8_ = auVar162._0_8_ >> 0x13;
      auVar164._8_8_ = auVar162._8_8_ >> 0x13;
      uVar82 = (uVar84 >> 0xe | uVar84 * 0x40000) ^ uVar84;
      auVar164 = auVar163 ^ auVar139 ^ auVar164;
      uVar87 = (uVar63 >> 9 | uVar63 * 0x800000) ^ uVar63;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar84;
      in_ZMM1._0_4_ =
           uVar81 + uVar67 +
           (uVar65 >> 3 ^ uVar65 >> 7 ^ uVar65 << 0xe ^ uVar65 >> 0x12 ^ uVar65 << 0x19) +
           auVar164._0_4_;
      in_ZMM1._4_4_ =
           uVar65 + uVar74 +
           (uVar77 >> 3 ^ uVar77 >> 7 ^ uVar77 << 0xe ^ uVar77 >> 0x12 ^ uVar77 << 0x19) +
           auVar164._8_4_;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar63;
      iVar79 = uVar66 + auStack_f0._8_4_ + ((uVar83 ^ uVar62) & uVar84 ^ uVar62) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      auVar165._0_8_ = CONCAT44(in_ZMM1._0_4_,in_ZMM1._0_4_);
      auVar165._8_4_ = in_ZMM1._4_4_;
      auVar165._12_4_ = in_ZMM1._4_4_;
      uVar85 = uVar85 + iVar79;
      auVar166._0_4_ = in_ZMM1._0_4_ >> 10;
      auVar166._4_4_ = 0;
      auVar166._8_4_ = in_ZMM1._4_4_ >> 10;
      auVar166._12_4_ = in_ZMM1._4_4_ >> 10;
      uVar66 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar64 ^ uVar86) & (uVar63 ^ uVar64) ^ uVar64);
      auVar140._0_8_ = auVar165._0_8_ >> 0x11;
      auVar140._8_8_ = auVar165._8_8_ >> 0x11;
      uVar82 = (uVar85 >> 0xe | uVar85 * 0x40000) ^ uVar85;
      uVar87 = (uVar66 >> 9 | uVar66 * 0x800000) ^ uVar66;
      auVar167._0_8_ = auVar165._0_8_ >> 0x13;
      auVar167._8_8_ = auVar165._8_8_ >> 0x13;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar85;
      auVar167 = auVar166 ^ auVar140 ^ auVar167;
      piVar2 = piVar71 + 0x28;
      piVar54 = piVar71 + 0x29;
      piVar55 = piVar71 + 0x2a;
      piVar56 = piVar71 + 0x2b;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar66;
      iVar79 = uVar62 + auStack_f0._12_4_ + ((uVar84 ^ uVar83) & uVar85 ^ uVar83) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      in_ZMM1._8_4_ =
           uVar77 + uVar76 +
           (uVar78 >> 3 ^ uVar78 >> 7 ^ uVar78 << 0xe ^ uVar78 >> 0x12 ^ uVar78 << 0x19) +
           auVar167._0_4_;
      in_ZMM1._12_4_ =
           uVar78 + in_ZMM0._0_4_ +
           (uVar80 >> 3 ^ uVar80 >> 7 ^ uVar80 << 0xe ^ uVar80 >> 0x12 ^ uVar80 << 0x19) +
           auVar167._8_4_;
      uVar86 = uVar86 + iVar79;
      uVar62 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar63 ^ uVar64) & (uVar66 ^ uVar63) ^ uVar63);
      auStack_f0._4_4_ = *piVar54 + in_ZMM1._4_4_;
      auStack_f0._0_4_ = *piVar2 + in_ZMM1._0_4_;
      auStack_f0._8_4_ = *piVar55 + in_ZMM1._8_4_;
      auStack_f0._12_4_ = *piVar56 + in_ZMM1._12_4_;
      uVar82 = (uVar86 >> 0xe | uVar86 * 0x40000) ^ uVar86;
      uVar87 = (uVar62 >> 9 | uVar62 * 0x800000) ^ uVar62;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar86;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar62;
      iVar79 = uVar83 + auStack_e0._0_4_ + ((uVar85 ^ uVar84) & uVar86 ^ uVar84) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar64 = uVar64 + iVar79;
      auVar168._0_8_ = CONCAT44(in_ZMM1._8_4_,in_ZMM1._8_4_);
      auVar168._8_4_ = in_ZMM1._12_4_;
      auVar168._12_4_ = in_ZMM1._12_4_;
      uVar83 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar66 ^ uVar63) & (uVar62 ^ uVar66) ^ uVar66);
      uVar82 = (uVar64 >> 0xe | uVar64 * 0x40000) ^ uVar64;
      uVar87 = (uVar83 >> 9 | uVar83 * 0x800000) ^ uVar83;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar64;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar83;
      auVar169._0_4_ = in_ZMM1._8_4_ >> 10;
      auVar169._4_4_ = 0;
      auVar169._8_4_ = in_ZMM1._12_4_ >> 10;
      auVar169._12_4_ = in_ZMM1._12_4_ >> 10;
      iVar79 = uVar84 + auStack_e0._4_4_ + ((uVar86 ^ uVar85) & uVar64 ^ uVar85) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar63 = uVar63 + iVar79;
      auVar141._0_8_ = auVar168._0_8_ >> 0x11;
      auVar141._8_8_ = auVar168._8_8_ >> 0x11;
      uVar84 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar62 ^ uVar66) & (uVar83 ^ uVar62) ^ uVar62);
      auVar170._0_8_ = auVar168._0_8_ >> 0x13;
      auVar170._8_8_ = auVar168._8_8_ >> 0x13;
      uVar82 = (uVar63 >> 0xe | uVar63 * 0x40000) ^ uVar63;
      auVar170 = auVar169 ^ auVar141 ^ auVar170;
      uVar87 = (uVar84 >> 9 | uVar84 * 0x800000) ^ uVar84;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar63;
      in_ZMM2._0_4_ =
           uVar80 + in_ZMM0._4_4_ +
           (uVar155 >> 3 ^ uVar155 >> 7 ^ uVar155 << 0xe ^ uVar155 >> 0x12 ^ uVar155 << 0x19) +
           auVar170._0_4_;
      in_ZMM2._4_4_ =
           uVar155 + in_ZMM0._8_4_ +
           (uVar188 >> 3 ^ uVar188 >> 7 ^ uVar188 << 0xe ^ uVar188 >> 0x12 ^ uVar188 << 0x19) +
           auVar170._8_4_;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar84;
      iVar79 = uVar85 + auStack_e0._8_4_ + ((uVar64 ^ uVar86) & uVar63 ^ uVar86) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      auVar171._0_8_ = CONCAT44(in_ZMM2._0_4_,in_ZMM2._0_4_);
      auVar171._8_4_ = in_ZMM2._4_4_;
      auVar171._12_4_ = in_ZMM2._4_4_;
      uVar66 = uVar66 + iVar79;
      auVar172._0_4_ = in_ZMM2._0_4_ >> 10;
      auVar172._4_4_ = 0;
      auVar172._8_4_ = in_ZMM2._4_4_ >> 10;
      auVar172._12_4_ = in_ZMM2._4_4_ >> 10;
      uVar85 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar83 ^ uVar62) & (uVar84 ^ uVar83) ^ uVar83);
      auVar142._0_8_ = auVar171._0_8_ >> 0x11;
      auVar142._8_8_ = auVar171._8_8_ >> 0x11;
      uVar82 = (uVar66 >> 0xe | uVar66 * 0x40000) ^ uVar66;
      uVar87 = (uVar85 >> 9 | uVar85 * 0x800000) ^ uVar85;
      auVar173._0_8_ = auVar171._0_8_ >> 0x13;
      auVar173._8_8_ = auVar171._8_8_ >> 0x13;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar66;
      auVar173 = auVar172 ^ auVar142 ^ auVar173;
      piVar3 = piVar71 + 0x30;
      piVar57 = piVar71 + 0x31;
      piVar58 = piVar71 + 0x32;
      piVar59 = piVar71 + 0x33;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar85;
      iVar79 = uVar86 + auStack_e0._12_4_ + ((uVar63 ^ uVar64) & uVar66 ^ uVar64) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      in_ZMM2._8_4_ =
           uVar188 + in_ZMM0._12_4_ +
           (uVar189 >> 3 ^ uVar189 >> 7 ^ uVar189 << 0xe ^ uVar189 >> 0x12 ^ uVar189 << 0x19) +
           auVar173._0_4_;
      in_ZMM2._12_4_ =
           uVar189 + in_ZMM1._0_4_ +
           (uVar190 >> 3 ^ uVar190 >> 7 ^ uVar190 << 0xe ^ uVar190 >> 0x12 ^ uVar190 << 0x19) +
           auVar173._8_4_;
      uVar62 = uVar62 + iVar79;
      uVar86 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar84 ^ uVar83) & (uVar85 ^ uVar84) ^ uVar84);
      auStack_e0._4_4_ = *piVar57 + in_ZMM2._4_4_;
      auStack_e0._0_4_ = *piVar3 + in_ZMM2._0_4_;
      auStack_e0._8_4_ = *piVar58 + in_ZMM2._8_4_;
      auStack_e0._12_4_ = *piVar59 + in_ZMM2._12_4_;
      uVar82 = (uVar62 >> 0xe | uVar62 * 0x40000) ^ uVar62;
      uVar87 = (uVar86 >> 9 | uVar86 * 0x800000) ^ uVar86;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar62;
      auVar123._0_4_ = uVar67 >> 3;
      auVar123._4_4_ = uVar74 >> 3;
      auVar123._8_4_ = uVar76 >> 3;
      auVar123._12_4_ = in_ZMM0._0_4_ >> 3;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar86;
      iVar79 = uVar64 + auStack_d0._0_4_ + ((uVar66 ^ uVar63) & uVar62 ^ uVar63) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar83 = uVar83 + iVar79;
      auVar143._0_4_ = uVar67 >> 7;
      auVar143._4_4_ = uVar74 >> 7;
      auVar143._8_4_ = uVar76 >> 7;
      auVar143._12_4_ = in_ZMM0._0_4_ >> 7;
      auVar174._0_8_ = CONCAT44(in_ZMM2._8_4_,in_ZMM2._8_4_);
      auVar174._8_4_ = in_ZMM2._12_4_;
      auVar174._12_4_ = in_ZMM2._12_4_;
      uVar64 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar85 ^ uVar84) & (uVar86 ^ uVar85) ^ uVar85);
      auVar128._0_4_ = uVar67 << 0xe;
      auVar128._4_4_ = uVar74 << 0xe;
      auVar128._8_4_ = uVar76 << 0xe;
      auVar128._12_4_ = in_ZMM0._0_4_ * 0x4000;
      uVar82 = (uVar83 >> 0xe | uVar83 * 0x40000) ^ uVar83;
      auVar144._0_4_ = uVar67 >> 0x12;
      auVar144._4_4_ = uVar74 >> 0x12;
      auVar144._8_4_ = uVar76 >> 0x12;
      auVar144._12_4_ = in_ZMM0._0_4_ >> 0x12;
      uVar87 = (uVar64 >> 9 | uVar64 * 0x800000) ^ uVar64;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar83;
      auVar124._0_4_ = uVar67 << 0x19;
      auVar124._4_4_ = uVar74 << 0x19;
      auVar124._8_4_ = uVar76 << 0x19;
      auVar124._12_4_ = in_ZMM0._0_4_ * 0x2000000;
      auVar124 = auVar123 ^ auVar143 ^ auVar128 ^ auVar144 ^ auVar124;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar64;
      auVar175._0_4_ = in_ZMM2._8_4_ >> 10;
      auVar175._4_4_ = 0;
      auVar175._8_4_ = in_ZMM2._12_4_ >> 10;
      auVar175._12_4_ = in_ZMM2._12_4_ >> 10;
      iVar79 = uVar63 + auStack_d0._4_4_ + ((uVar62 ^ uVar66) & uVar83 ^ uVar66) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar84 = uVar84 + iVar79;
      auVar145._0_8_ = auVar174._0_8_ >> 0x11;
      auVar145._8_8_ = auVar174._8_8_ >> 0x11;
      uVar63 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar86 ^ uVar85) & (uVar64 ^ uVar86) ^ uVar86);
      auVar176._0_8_ = auVar174._0_8_ >> 0x13;
      auVar176._8_8_ = auVar174._8_8_ >> 0x13;
      uVar82 = (uVar84 >> 0xe | uVar84 * 0x40000) ^ uVar84;
      auVar176 = auVar175 ^ auVar145 ^ auVar176;
      uVar87 = (uVar63 >> 9 | uVar63 * 0x800000) ^ uVar63;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar84;
      in_ZMM3._0_4_ = uVar190 + in_ZMM1._4_4_ + auVar124._0_4_ + auVar176._0_4_;
      in_ZMM3._4_4_ = uVar67 + in_ZMM1._8_4_ + auVar124._4_4_ + auVar176._8_4_;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar63;
      iVar79 = uVar66 + auStack_d0._8_4_ + ((uVar83 ^ uVar62) & uVar84 ^ uVar62) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      auVar177._0_8_ = CONCAT44(in_ZMM3._0_4_,in_ZMM3._0_4_);
      auVar177._8_4_ = in_ZMM3._4_4_;
      auVar177._12_4_ = in_ZMM3._4_4_;
      uVar85 = uVar85 + iVar79;
      auVar178._0_4_ = in_ZMM3._0_4_ >> 10;
      auVar178._4_4_ = 0;
      auVar178._8_4_ = in_ZMM3._4_4_ >> 10;
      auVar178._12_4_ = in_ZMM3._4_4_ >> 10;
      uVar66 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar64 ^ uVar86) & (uVar63 ^ uVar64) ^ uVar64);
      auVar146._0_8_ = auVar177._0_8_ >> 0x11;
      auVar146._8_8_ = auVar177._8_8_ >> 0x11;
      uVar82 = (uVar85 >> 0xe | uVar85 * 0x40000) ^ uVar85;
      uVar65 = (uVar66 >> 9 | uVar66 * 0x800000) ^ uVar66;
      auVar179._0_8_ = auVar177._0_8_ >> 0x13;
      auVar179._8_8_ = auVar177._8_8_ >> 0x13;
      uVar87 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar85;
      auVar179 = auVar178 ^ auVar146 ^ auVar179;
      uVar82 = uVar66 ^ uVar63;
      uVar65 = (uVar65 >> 0xb | uVar65 << 0x15) ^ uVar66;
      iVar79 = uVar62 + auStack_d0._12_4_ + ((uVar84 ^ uVar83) & uVar85 ^ uVar83) +
               (uVar87 >> 6 | uVar87 << 0x1a);
      in_ZMM3._8_4_ = uVar74 + in_ZMM1._12_4_ + auVar124._8_4_ + auVar179._0_4_;
      in_ZMM3._12_4_ = uVar76 + in_ZMM2._0_4_ + auVar124._12_4_ + auVar179._8_4_;
      uVar86 = uVar86 + iVar79;
      auStack_d0._0_4_ = piVar71[0x38] + in_ZMM3._0_4_;
      auStack_d0._4_4_ = piVar71[0x39] + in_ZMM3._4_4_;
      auStack_d0._8_4_ = piVar71[0x3a] + in_ZMM3._8_4_;
      auStack_d0._12_4_ = piVar71[0x3b] + in_ZMM3._12_4_;
      uVar62 = (uVar65 >> 2 | uVar65 << 0x1e) + iVar79 + ((uVar63 ^ uVar64) & uVar82 ^ uVar63);
      pcVar1 = (char *)((longlong)piVar71 + 0x103);
      piVar71 = piVar71 + 0x20;
    } while (*pcVar1 != '\0');
    uVar87 = (uVar86 >> 0xe | uVar86 * 0x40000) ^ uVar86;
    uVar65 = (uVar62 >> 9 | uVar62 * 0x800000) ^ uVar62;
    uVar87 = (uVar87 >> 5 | uVar87 << 0x1b) ^ uVar86;
    uVar65 = (uVar65 >> 0xb | uVar65 << 0x15) ^ uVar62;
    iVar79 = uVar83 + auStack_100._0_4_ + ((uVar85 ^ uVar84) & uVar86 ^ uVar84) +
             (uVar87 >> 6 | uVar87 << 0x1a);
    uVar64 = uVar64 + iVar79;
    uVar83 = (uVar65 >> 2 | uVar65 << 0x1e) + iVar79 + (uVar82 & (uVar62 ^ uVar66) ^ uVar66);
    uVar82 = (uVar64 >> 0xe | uVar64 * 0x40000) ^ uVar64;
    uVar87 = (uVar83 >> 9 | uVar83 * 0x800000) ^ uVar83;
    uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar64;
    uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar83;
    iVar79 = uVar84 + *piVar51 + in_ZMM0._4_4_ + ((uVar86 ^ uVar85) & uVar64 ^ uVar85) +
             (uVar82 >> 6 | uVar82 << 0x1a);
    uVar63 = uVar63 + iVar79;
    uVar84 = (uVar87 >> 2 | uVar87 << 0x1e) +
             iVar79 + ((uVar62 ^ uVar66) & (uVar83 ^ uVar62) ^ uVar62);
    uVar82 = (uVar63 >> 0xe | uVar63 * 0x40000) ^ uVar63;
    uVar87 = (uVar84 >> 9 | uVar84 * 0x800000) ^ uVar84;
    uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar63;
    uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar84;
    iVar79 = uVar85 + *piVar52 + in_ZMM0._8_4_ + ((uVar64 ^ uVar86) & uVar63 ^ uVar86) +
             (uVar82 >> 6 | uVar82 << 0x1a);
    uVar66 = uVar66 + iVar79;
    uVar85 = (uVar87 >> 2 | uVar87 << 0x1e) +
             iVar79 + ((uVar83 ^ uVar62) & (uVar84 ^ uVar83) ^ uVar83);
    uVar82 = (uVar66 >> 0xe | uVar66 * 0x40000) ^ uVar66;
    uVar87 = (uVar85 >> 9 | uVar85 * 0x800000) ^ uVar85;
    uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar66;
    uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar85;
    iVar79 = uVar86 + *piVar53 + in_ZMM0._12_4_ + ((uVar63 ^ uVar64) & uVar66 ^ uVar64) +
             (uVar82 >> 6 | uVar82 << 0x1a);
    uVar62 = uVar62 + iVar79;
    uVar86 = (uVar87 >> 2 | uVar87 << 0x1e) +
             iVar79 + ((uVar84 ^ uVar83) & (uVar85 ^ uVar84) ^ uVar84);
    uVar82 = (uVar62 >> 0xe | uVar62 * 0x40000) ^ uVar62;
    uVar87 = (uVar86 >> 9 | uVar86 * 0x800000) ^ uVar86;
    uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar62;
    uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar86;
    iVar79 = uVar64 + *piVar2 + in_ZMM1._0_4_ + ((uVar66 ^ uVar63) & uVar62 ^ uVar63) +
             (uVar82 >> 6 | uVar82 << 0x1a);
    uVar83 = uVar83 + iVar79;
    uVar64 = (uVar87 >> 2 | uVar87 << 0x1e) +
             iVar79 + ((uVar85 ^ uVar84) & (uVar86 ^ uVar85) ^ uVar85);
    uVar82 = (uVar83 >> 0xe | uVar83 * 0x40000) ^ uVar83;
    uVar87 = (uVar64 >> 9 | uVar64 * 0x800000) ^ uVar64;
    uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar83;
    uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar64;
    iVar79 = uVar63 + *piVar54 + in_ZMM1._4_4_ + ((uVar62 ^ uVar66) & uVar83 ^ uVar66) +
             (uVar82 >> 6 | uVar82 << 0x1a);
    uVar84 = uVar84 + iVar79;
    uVar63 = (uVar87 >> 2 | uVar87 << 0x1e) +
             iVar79 + ((uVar86 ^ uVar85) & (uVar64 ^ uVar86) ^ uVar86);
    uVar82 = (uVar84 >> 0xe | uVar84 * 0x40000) ^ uVar84;
    uVar87 = (uVar63 >> 9 | uVar63 * 0x800000) ^ uVar63;
    uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar84;
    uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar63;
    iVar79 = uVar66 + *piVar55 + in_ZMM1._8_4_ + ((uVar83 ^ uVar62) & uVar84 ^ uVar62) +
             (uVar82 >> 6 | uVar82 << 0x1a);
    uVar85 = uVar85 + iVar79;
    uVar66 = (uVar87 >> 2 | uVar87 << 0x1e) +
             iVar79 + ((uVar64 ^ uVar86) & (uVar63 ^ uVar64) ^ uVar64);
    uVar82 = (uVar85 >> 0xe | uVar85 * 0x40000) ^ uVar85;
    uVar87 = (uVar66 >> 9 | uVar66 * 0x800000) ^ uVar66;
    uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar85;
    uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar66;
    iVar79 = uVar62 + *piVar56 + in_ZMM1._12_4_ + ((uVar84 ^ uVar83) & uVar85 ^ uVar83) +
             (uVar82 >> 6 | uVar82 << 0x1a);
    uVar86 = uVar86 + iVar79;
    uVar62 = (uVar87 >> 2 | uVar87 << 0x1e) +
             iVar79 + ((uVar63 ^ uVar64) & (uVar66 ^ uVar63) ^ uVar63);
    uVar82 = (uVar86 >> 0xe | uVar86 * 0x40000) ^ uVar86;
    uVar87 = (uVar62 >> 9 | uVar62 * 0x800000) ^ uVar62;
    uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar86;
    uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar62;
    iVar79 = uVar83 + *piVar3 + in_ZMM2._0_4_ + ((uVar85 ^ uVar84) & uVar86 ^ uVar84) +
             (uVar82 >> 6 | uVar82 << 0x1a);
    uVar64 = uVar64 + iVar79;
    uVar83 = (uVar87 >> 2 | uVar87 << 0x1e) +
             iVar79 + ((uVar66 ^ uVar63) & (uVar62 ^ uVar66) ^ uVar66);
    uVar82 = (uVar64 >> 0xe | uVar64 * 0x40000) ^ uVar64;
    uVar87 = (uVar83 >> 9 | uVar83 * 0x800000) ^ uVar83;
    uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar64;
    uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar83;
    iVar79 = uVar84 + *piVar57 + in_ZMM2._4_4_ + ((uVar86 ^ uVar85) & uVar64 ^ uVar85) +
             (uVar82 >> 6 | uVar82 << 0x1a);
    uVar63 = uVar63 + iVar79;
    uVar84 = (uVar87 >> 2 | uVar87 << 0x1e) +
             iVar79 + ((uVar62 ^ uVar66) & (uVar83 ^ uVar62) ^ uVar62);
    uVar82 = (uVar63 >> 0xe | uVar63 * 0x40000) ^ uVar63;
    uVar87 = (uVar84 >> 9 | uVar84 * 0x800000) ^ uVar84;
    uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar63;
    uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar84;
    iVar79 = uVar85 + *piVar58 + in_ZMM2._8_4_ + ((uVar64 ^ uVar86) & uVar63 ^ uVar86) +
             (uVar82 >> 6 | uVar82 << 0x1a);
    uVar66 = uVar66 + iVar79;
    uVar85 = (uVar87 >> 2 | uVar87 << 0x1e) +
             iVar79 + ((uVar83 ^ uVar62) & (uVar84 ^ uVar83) ^ uVar83);
    uVar82 = (uVar66 >> 0xe | uVar66 * 0x40000) ^ uVar66;
    uVar87 = (uVar85 >> 9 | uVar85 * 0x800000) ^ uVar85;
    uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar66;
    uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar85;
    iVar79 = uVar86 + *piVar59 + in_ZMM2._12_4_ + ((uVar63 ^ uVar64) & uVar66 ^ uVar64) +
             (uVar82 >> 6 | uVar82 << 0x1a);
    uVar62 = uVar62 + iVar79;
    uVar82 = (uVar87 >> 2 | uVar87 << 0x1e) +
             iVar79 + ((uVar84 ^ uVar83) & (uVar85 ^ uVar84) ^ uVar84);
    uVar86 = (uVar62 >> 0xe | uVar62 * 0x40000) ^ uVar62;
    uVar87 = (uVar82 >> 9 | uVar82 * 0x800000) ^ uVar82;
    uVar86 = (uVar86 >> 5 | uVar86 << 0x1b) ^ uVar62;
    uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar82;
    iVar79 = uVar64 + auStack_d0._0_4_ + ((uVar66 ^ uVar63) & uVar62 ^ uVar63) +
             (uVar86 >> 6 | uVar86 << 0x1a);
    uVar83 = uVar83 + iVar79;
    uVar64 = (uVar87 >> 2 | uVar87 << 0x1e) +
             iVar79 + ((uVar85 ^ uVar84) & (uVar82 ^ uVar85) ^ uVar85);
    uVar86 = (uVar83 >> 0xe | uVar83 * 0x40000) ^ uVar83;
    uVar87 = (uVar64 >> 9 | uVar64 * 0x800000) ^ uVar64;
    uVar86 = (uVar86 >> 5 | uVar86 << 0x1b) ^ uVar83;
    uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar64;
    iVar79 = uVar63 + auStack_d0._4_4_ + ((uVar62 ^ uVar66) & uVar83 ^ uVar66) +
             (uVar86 >> 6 | uVar86 << 0x1a);
    uVar84 = uVar84 + iVar79;
    uVar63 = (uVar87 >> 2 | uVar87 << 0x1e) +
             iVar79 + ((uVar82 ^ uVar85) & (uVar64 ^ uVar82) ^ uVar82);
    uVar86 = (uVar84 >> 0xe | uVar84 * 0x40000) ^ uVar84;
    uVar87 = (uVar63 >> 9 | uVar63 * 0x800000) ^ uVar63;
    uVar86 = (uVar86 >> 5 | uVar86 << 0x1b) ^ uVar84;
    uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar63;
    iVar79 = uVar66 + auStack_d0._8_4_ + ((uVar83 ^ uVar62) & uVar84 ^ uVar62) +
             (uVar86 >> 6 | uVar86 << 0x1a);
    uVar85 = uVar85 + iVar79;
    uVar66 = (uVar87 >> 2 | uVar87 << 0x1e) +
             iVar79 + ((uVar64 ^ uVar82) & (uVar63 ^ uVar64) ^ uVar64);
    uVar86 = (uVar85 >> 0xe | uVar85 * 0x40000) ^ uVar85;
    uVar87 = (uVar66 >> 9 | uVar66 * 0x800000) ^ uVar66;
    uVar86 = (uVar86 >> 5 | uVar86 << 0x1b) ^ uVar85;
    uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar66;
    iVar79 = uVar62 + auStack_d0._12_4_ + ((uVar84 ^ uVar83) & uVar85 ^ uVar83) +
             (uVar86 >> 6 | uVar86 << 0x1a);
    uVar62 = (uVar87 >> 2 | uVar87 << 0x1e) +
             iVar79 + ((uVar63 ^ uVar64) & (uVar66 ^ uVar63) ^ uVar63) + *param_1;
    param_2 = param_2 + 4;
    uVar66 = uVar66 + param_1[1];
    uVar63 = uVar63 + param_1[2];
    uVar64 = uVar64 + param_1[3];
    uVar86 = uVar82 + iVar79 + param_1[4];
    uVar85 = uVar85 + param_1[5];
    uVar84 = uVar84 + param_1[6];
    uVar83 = uVar83 + param_1[7];
    *param_1 = uVar62;
    param_1[1] = uVar66;
    param_1[2] = uVar63;
    param_1[3] = uVar64;
    param_1[4] = uVar86;
    param_1[5] = uVar85;
    param_1[6] = uVar84;
    param_1[7] = uVar83;
  } while (param_2 < pauVar73);
  return;
}

// L$SEH_begin_sha256_block_data_order @ 140dedc8d

/* WARNING: Removing unreachable block (ram,0x000140defc48) */
/* WARNING: Removing unreachable block (ram,0x000140defe4e) */
/* WARNING: Removing unreachable block (ram,0x000140defa3a) */
/* WARNING: Removing unreachable block (ram,0x000140def835) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L_SEH_begin_sha256_block_data_order(uint *param_1,undefined1 (*param_2) [16],longlong param_3)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  undefined1 (*pauVar5) [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int iVar14;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  int *piVar46;
  int *piVar47;
  undefined1 auVar50 [60];
  int *piVar51;
  int *piVar52;
  int *piVar53;
  int *piVar54;
  int *piVar55;
  int *piVar56;
  int *piVar57;
  int *piVar58;
  int *piVar59;
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  uint uVar62;
  longlong in_RAX;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  ulonglong uVar68;
  undefined1 (*pauVar69) [16];
  undefined1 (*pauVar70) [16];
  int *piVar71;
  undefined1 (*pauVar72) [16];
  undefined1 (*pauVar73) [16];
  uint uVar74;
  int iVar75;
  uint uVar76;
  uint uVar77;
  uint uVar78;
  int iVar79;
  uint uVar80;
  uint uVar81;
  uint uVar82;
  uint uVar83;
  uint uVar84;
  uint uVar85;
  uint uVar86;
  uint uVar87;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
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
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 in_ZMM0 [64];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar111 [64];
  undefined1 auVar112 [64];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar115 [64];
  undefined1 auVar116 [64];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 in_ZMM3 [64];
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
  undefined1 auVar131 [32];
  undefined1 auVar132 [32];
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
  undefined1 auVar151 [32];
  undefined1 auVar152 [32];
  undefined1 auVar153 [32];
  undefined1 auVar154 [32];
  undefined1 in_ZMM6 [64];
  uint uVar155;
  uint uVar190;
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [32];
  undefined1 auVar183 [32];
  undefined1 auVar184 [32];
  undefined1 auVar185 [32];
  undefined1 auVar186 [32];
  undefined1 auVar187 [32];
  uint uVar188;
  uint uVar189;
  undefined1 in_ZMM7 [64];
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined1 in_ZMM9 [64];
  undefined8 unaff_XMM10_Qa;
  undefined8 unaff_XMM10_Qb;
  undefined1 auStack_290 [400];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  int *piVar48;
  int *piVar49;
  
  auVar113 = _DAT_140def100;
  auVar109 = _DAT_140def0e0;
  if ((_DAT_15540a9f8 & 0x20000000) != 0) {
    *(undefined1 (*) [16])(in_RAX + -0x58) = in_ZMM6._0_16_;
    *(undefined1 (*) [16])(in_RAX + -0x48) = in_ZMM7._0_16_;
    *(undefined8 *)(in_RAX + -0x38) = unaff_XMM8_Qa;
    *(undefined8 *)(in_RAX + -0x30) = unaff_XMM8_Qb;
    *(undefined1 (*) [16])(in_RAX + -0x28) = in_ZMM9._0_16_;
    *(undefined8 *)(in_RAX + -0x18) = unaff_XMM10_Qa;
    *(undefined8 *)(in_RAX + -0x10) = unaff_XMM10_Qb;
    auVar111._16_48_ = in_ZMM1._16_48_;
    auVar115._16_48_ = in_ZMM2._16_48_;
    auVar115._12_4_ = param_1[2];
    auVar115._8_4_ = param_1[3];
    auVar183._20_4_ = *param_1;
    auVar183._16_4_ = param_1[1];
    auVar183._24_4_ = param_1[3];
    auVar183._28_4_ = param_1[2];
    auVar115._0_8_ = CONCAT44(param_1[6],param_1[7]);
    auVar183._8_4_ = param_1[5];
    auVar183._0_8_ = auVar115._0_8_;
    auVar183._12_4_ = param_1[4];
    auVar111._0_16_ = auVar183._8_16_;
    do {
      auVar130 = pshufb(*param_2,_DAT_140def0c0);
      pauVar73 = param_2 + 3;
      auVar109._0_4_ = K256 + auVar130._0_4_;
      auVar109._4_4_ = DAT_140deeec4 + auVar130._4_4_;
      auVar109._8_4_ = DAT_140deeec8 + auVar130._8_4_;
      auVar109._12_4_ = DAT_140deeecc + auVar130._12_4_;
      auVar147 = pshufb(param_2[1],_DAT_140def0c0);
      auVar116._16_48_ = auVar115._16_48_;
      auVar150 = sha256rnds2_sha(auVar115._0_16_,auVar111._0_16_,auVar109);
      auVar113._4_4_ = auVar109._12_4_;
      auVar113._0_4_ = auVar109._8_4_;
      auVar113._8_4_ = auVar109._0_4_;
      auVar113._12_4_ = auVar109._0_4_;
      auVar112._16_48_ = auVar111._16_48_;
      auVar109 = sha256rnds2_sha(auVar111._0_16_,auVar150,auVar113);
      auVar181._0_4_ = DAT_140deeee0 + auVar147._0_4_;
      auVar181._4_4_ = DAT_140deeee4 + auVar147._4_4_;
      auVar181._8_4_ = DAT_140deeee8 + auVar147._8_4_;
      auVar181._12_4_ = DAT_140deeeec + auVar147._12_4_;
      auVar149 = pshufb(param_2[2],_DAT_140def0c0);
      auVar113 = sha256rnds2_sha(auVar150,auVar109,auVar181);
      auVar150._4_4_ = auVar181._12_4_;
      auVar150._0_4_ = auVar181._8_4_;
      auVar150._8_4_ = auVar181._0_4_;
      auVar150._12_4_ = auVar181._0_4_;
      param_2 = param_2 + 4;
      auVar181 = sha256msg1_sha(auVar130,auVar147);
      auVar109 = sha256rnds2_sha(auVar109,auVar113,auVar150);
      auVar130._0_4_ = DAT_140deef00 + auVar149._0_4_;
      auVar130._4_4_ = DAT_140deef04 + auVar149._4_4_;
      auVar130._8_4_ = DAT_140deef08 + auVar149._8_4_;
      auVar130._12_4_ = DAT_140deef0c + auVar149._12_4_;
      auVar133 = pshufb(*pauVar73,_DAT_140def0c0);
      auVar113 = sha256rnds2_sha(auVar113,auVar109,auVar130);
      auVar129._4_4_ = auVar130._12_4_;
      auVar129._0_4_ = auVar130._8_4_;
      auVar129._8_4_ = auVar130._0_4_;
      auVar129._12_4_ = auVar130._0_4_;
      auVar117._0_4_ = auVar181._0_4_ + auVar149._4_4_;
      auVar117._4_4_ = auVar181._4_4_ + auVar149._8_4_;
      auVar117._8_4_ = auVar181._8_4_ + auVar149._12_4_;
      auVar117._12_4_ = auVar181._12_4_ + auVar133._0_4_;
      auVar150 = sha256msg1_sha(auVar147,auVar149);
      auVar109 = sha256rnds2_sha(auVar109,auVar113,auVar129);
      auVar147._0_4_ = DAT_140deef20 + auVar133._0_4_;
      auVar147._4_4_ = DAT_140deef24 + auVar133._4_4_;
      auVar147._8_4_ = DAT_140deef28 + auVar133._8_4_;
      auVar147._12_4_ = DAT_140deef2c + auVar133._12_4_;
      auVar181 = sha256msg2_sha(auVar117,auVar133);
      auVar113 = sha256rnds2_sha(auVar113,auVar109,auVar147);
      auVar148._4_4_ = auVar147._12_4_;
      auVar148._0_4_ = auVar147._8_4_;
      auVar148._8_4_ = auVar147._0_4_;
      auVar148._12_4_ = auVar147._0_4_;
      auVar120._0_4_ = auVar150._0_4_ + auVar133._4_4_;
      auVar120._4_4_ = auVar150._4_4_ + auVar133._8_4_;
      auVar120._8_4_ = auVar150._8_4_ + auVar133._12_4_;
      auVar120._12_4_ = auVar150._12_4_ + auVar181._0_4_;
      auVar130 = sha256msg1_sha(auVar149,auVar133);
      auVar109 = sha256rnds2_sha(auVar109,auVar113,auVar148);
      auVar149._0_4_ = DAT_140deef40 + auVar181._0_4_;
      auVar149._4_4_ = DAT_140deef44 + auVar181._4_4_;
      auVar149._8_4_ = DAT_140deef48 + auVar181._8_4_;
      auVar149._12_4_ = DAT_140deef4c + auVar181._12_4_;
      auVar150 = sha256msg2_sha(auVar120,auVar181);
      auVar113 = sha256rnds2_sha(auVar113,auVar109,auVar149);
      auVar180._4_4_ = auVar149._12_4_;
      auVar180._0_4_ = auVar149._8_4_;
      auVar180._8_4_ = auVar149._0_4_;
      auVar180._12_4_ = auVar149._0_4_;
      auVar125._0_4_ = auVar130._0_4_ + auVar181._4_4_;
      auVar125._4_4_ = auVar130._4_4_ + auVar181._8_4_;
      auVar125._8_4_ = auVar130._8_4_ + auVar181._12_4_;
      auVar125._12_4_ = auVar130._12_4_ + auVar150._0_4_;
      auVar129 = sha256msg1_sha(auVar133,auVar181);
      auVar109 = sha256rnds2_sha(auVar109,auVar113,auVar180);
      auVar133._0_4_ = DAT_140deef60 + auVar150._0_4_;
      auVar133._4_4_ = DAT_140deef64 + auVar150._4_4_;
      auVar133._8_4_ = DAT_140deef68 + auVar150._8_4_;
      auVar133._12_4_ = DAT_140deef6c + auVar150._12_4_;
      auVar130 = sha256msg2_sha(auVar125,auVar150);
      auVar113 = sha256rnds2_sha(auVar113,auVar109,auVar133);
      auVar88._4_4_ = auVar133._12_4_;
      auVar88._0_4_ = auVar133._8_4_;
      auVar88._8_4_ = auVar133._0_4_;
      auVar88._12_4_ = auVar133._0_4_;
      auVar134._0_4_ = auVar129._0_4_ + auVar150._4_4_;
      auVar134._4_4_ = auVar129._4_4_ + auVar150._8_4_;
      auVar134._8_4_ = auVar129._8_4_ + auVar150._12_4_;
      auVar134._12_4_ = auVar129._12_4_ + auVar130._0_4_;
      auVar181 = sha256msg1_sha(auVar181,auVar150);
      auVar109 = sha256rnds2_sha(auVar109,auVar113,auVar88);
      auVar89._0_4_ = DAT_140deef80 + auVar130._0_4_;
      auVar89._4_4_ = DAT_140deef84 + auVar130._4_4_;
      auVar89._8_4_ = DAT_140deef88 + auVar130._8_4_;
      auVar89._12_4_ = DAT_140deef8c + auVar130._12_4_;
      auVar129 = sha256msg2_sha(auVar134,auVar130);
      auVar113 = sha256rnds2_sha(auVar113,auVar109,auVar89);
      auVar90._4_4_ = auVar89._12_4_;
      auVar90._0_4_ = auVar89._8_4_;
      auVar90._8_4_ = auVar89._0_4_;
      auVar90._12_4_ = auVar89._0_4_;
      auVar118._0_4_ = auVar181._0_4_ + auVar130._4_4_;
      auVar118._4_4_ = auVar181._4_4_ + auVar130._8_4_;
      auVar118._8_4_ = auVar181._8_4_ + auVar130._12_4_;
      auVar118._12_4_ = auVar181._12_4_ + auVar129._0_4_;
      auVar150 = sha256msg1_sha(auVar150,auVar130);
      auVar109 = sha256rnds2_sha(auVar109,auVar113,auVar90);
      auVar91._0_4_ = DAT_140deefa0 + auVar129._0_4_;
      auVar91._4_4_ = DAT_140deefa4 + auVar129._4_4_;
      auVar91._8_4_ = DAT_140deefa8 + auVar129._8_4_;
      auVar91._12_4_ = DAT_140deefac + auVar129._12_4_;
      auVar181 = sha256msg2_sha(auVar118,auVar129);
      auVar113 = sha256rnds2_sha(auVar113,auVar109,auVar91);
      auVar92._4_4_ = auVar91._12_4_;
      auVar92._0_4_ = auVar91._8_4_;
      auVar92._8_4_ = auVar91._0_4_;
      auVar92._12_4_ = auVar91._0_4_;
      auVar121._0_4_ = auVar150._0_4_ + auVar129._4_4_;
      auVar121._4_4_ = auVar150._4_4_ + auVar129._8_4_;
      auVar121._8_4_ = auVar150._8_4_ + auVar129._12_4_;
      auVar121._12_4_ = auVar150._12_4_ + auVar181._0_4_;
      auVar130 = sha256msg1_sha(auVar130,auVar129);
      auVar109 = sha256rnds2_sha(auVar109,auVar113,auVar92);
      auVar93._0_4_ = _DAT_140deefc0 + auVar181._0_4_;
      auVar93._4_4_ = _UNK_140deefc4 + auVar181._4_4_;
      auVar93._8_4_ = _UNK_140deefc8 + auVar181._8_4_;
      auVar93._12_4_ = _UNK_140deefcc + auVar181._12_4_;
      auVar150 = sha256msg2_sha(auVar121,auVar181);
      auVar113 = sha256rnds2_sha(auVar113,auVar109,auVar93);
      auVar94._4_4_ = auVar93._12_4_;
      auVar94._0_4_ = auVar93._8_4_;
      auVar94._8_4_ = auVar93._0_4_;
      auVar94._12_4_ = auVar93._0_4_;
      auVar126._0_4_ = auVar130._0_4_ + auVar181._4_4_;
      auVar126._4_4_ = auVar130._4_4_ + auVar181._8_4_;
      auVar126._8_4_ = auVar130._8_4_ + auVar181._12_4_;
      auVar126._12_4_ = auVar130._12_4_ + auVar150._0_4_;
      auVar129 = sha256msg1_sha(auVar129,auVar181);
      auVar109 = sha256rnds2_sha(auVar109,auVar113,auVar94);
      auVar95._0_4_ = _DAT_140deefe0 + auVar150._0_4_;
      auVar95._4_4_ = _UNK_140deefe4 + auVar150._4_4_;
      auVar95._8_4_ = _UNK_140deefe8 + auVar150._8_4_;
      auVar95._12_4_ = _UNK_140deefec + auVar150._12_4_;
      auVar130 = sha256msg2_sha(auVar126,auVar150);
      auVar113 = sha256rnds2_sha(auVar113,auVar109,auVar95);
      auVar96._4_4_ = auVar95._12_4_;
      auVar96._0_4_ = auVar95._8_4_;
      auVar96._8_4_ = auVar95._0_4_;
      auVar96._12_4_ = auVar95._0_4_;
      auVar135._0_4_ = auVar129._0_4_ + auVar150._4_4_;
      auVar135._4_4_ = auVar129._4_4_ + auVar150._8_4_;
      auVar135._8_4_ = auVar129._8_4_ + auVar150._12_4_;
      auVar135._12_4_ = auVar129._12_4_ + auVar130._0_4_;
      auVar181 = sha256msg1_sha(auVar181,auVar150);
      auVar109 = sha256rnds2_sha(auVar109,auVar113,auVar96);
      auVar97._0_4_ = _DAT_140def000 + auVar130._0_4_;
      auVar97._4_4_ = _UNK_140def004 + auVar130._4_4_;
      auVar97._8_4_ = _UNK_140def008 + auVar130._8_4_;
      auVar97._12_4_ = _UNK_140def00c + auVar130._12_4_;
      auVar129 = sha256msg2_sha(auVar135,auVar130);
      auVar113 = sha256rnds2_sha(auVar113,auVar109,auVar97);
      auVar98._4_4_ = auVar97._12_4_;
      auVar98._0_4_ = auVar97._8_4_;
      auVar98._8_4_ = auVar97._0_4_;
      auVar98._12_4_ = auVar97._0_4_;
      auVar119._0_4_ = auVar181._0_4_ + auVar130._4_4_;
      auVar119._4_4_ = auVar181._4_4_ + auVar130._8_4_;
      auVar119._8_4_ = auVar181._8_4_ + auVar130._12_4_;
      auVar119._12_4_ = auVar181._12_4_ + auVar129._0_4_;
      auVar150 = sha256msg1_sha(auVar150,auVar130);
      auVar109 = sha256rnds2_sha(auVar109,auVar113,auVar98);
      auVar99._0_4_ = _DAT_140def020 + auVar129._0_4_;
      auVar99._4_4_ = _UNK_140def024 + auVar129._4_4_;
      auVar99._8_4_ = _UNK_140def028 + auVar129._8_4_;
      auVar99._12_4_ = _UNK_140def02c + auVar129._12_4_;
      auVar181 = sha256msg2_sha(auVar119,auVar129);
      auVar113 = sha256rnds2_sha(auVar113,auVar109,auVar99);
      auVar100._4_4_ = auVar99._12_4_;
      auVar100._0_4_ = auVar99._8_4_;
      auVar100._8_4_ = auVar99._0_4_;
      auVar100._12_4_ = auVar99._0_4_;
      auVar122._0_4_ = auVar150._0_4_ + auVar129._4_4_;
      auVar122._4_4_ = auVar150._4_4_ + auVar129._8_4_;
      auVar122._8_4_ = auVar150._8_4_ + auVar129._12_4_;
      auVar122._12_4_ = auVar150._12_4_ + auVar181._0_4_;
      auVar130 = sha256msg1_sha(auVar130,auVar129);
      auVar109 = sha256rnds2_sha(auVar109,auVar113,auVar100);
      auVar101._0_4_ = _DAT_140def040 + auVar181._0_4_;
      auVar101._4_4_ = _UNK_140def044 + auVar181._4_4_;
      auVar101._8_4_ = _UNK_140def048 + auVar181._8_4_;
      auVar101._12_4_ = _UNK_140def04c + auVar181._12_4_;
      auVar150 = sha256msg2_sha(auVar122,auVar181);
      auVar113 = sha256rnds2_sha(auVar113,auVar109,auVar101);
      auVar102._4_4_ = auVar101._12_4_;
      auVar102._0_4_ = auVar101._8_4_;
      auVar102._8_4_ = auVar101._0_4_;
      auVar102._12_4_ = auVar101._0_4_;
      auVar127._0_4_ = auVar130._0_4_ + auVar181._4_4_;
      auVar127._4_4_ = auVar130._4_4_ + auVar181._8_4_;
      auVar127._8_4_ = auVar130._8_4_ + auVar181._12_4_;
      auVar127._12_4_ = auVar130._12_4_ + auVar150._0_4_;
      auVar130 = sha256msg1_sha(auVar129,auVar181);
      auVar109 = sha256rnds2_sha(auVar109,auVar113,auVar102);
      auVar103._0_4_ = _DAT_140def060 + auVar150._0_4_;
      auVar103._4_4_ = _UNK_140def064 + auVar150._4_4_;
      auVar103._8_4_ = _UNK_140def068 + auVar150._8_4_;
      auVar103._12_4_ = _UNK_140def06c + auVar150._12_4_;
      auVar181 = sha256msg2_sha(auVar127,auVar150);
      auVar113 = sha256rnds2_sha(auVar113,auVar109,auVar103);
      auVar104._4_4_ = auVar103._12_4_;
      auVar104._0_4_ = auVar103._8_4_;
      auVar104._8_4_ = auVar103._0_4_;
      auVar104._12_4_ = auVar103._0_4_;
      auVar109 = sha256rnds2_sha(auVar109,auVar113,auVar104);
      auVar136._0_4_ = auVar130._0_4_ + auVar150._4_4_;
      auVar136._4_4_ = auVar130._4_4_ + auVar150._8_4_;
      auVar136._8_4_ = auVar130._8_4_ + auVar150._12_4_;
      auVar136._12_4_ = auVar130._12_4_ + auVar181._0_4_;
      auVar105._0_4_ = _DAT_140def080 + auVar181._0_4_;
      auVar105._4_4_ = _UNK_140def084 + auVar181._4_4_;
      auVar105._8_4_ = _UNK_140def088 + auVar181._8_4_;
      auVar105._12_4_ = _UNK_140def08c + auVar181._12_4_;
      auVar113 = sha256rnds2_sha(auVar113,auVar109,auVar105);
      auVar106._4_4_ = auVar105._12_4_;
      auVar106._0_4_ = auVar105._8_4_;
      auVar106._8_4_ = auVar105._0_4_;
      auVar106._12_4_ = auVar105._0_4_;
      auVar181 = sha256msg2_sha(auVar136,auVar181);
      auVar109 = sha256rnds2_sha(auVar109,auVar113,auVar106);
      auVar107._0_4_ = _DAT_140def0a0 + auVar181._0_4_;
      auVar107._4_4_ = _UNK_140def0a4 + auVar181._4_4_;
      auVar107._8_4_ = _UNK_140def0a8 + auVar181._8_4_;
      auVar107._12_4_ = _UNK_140def0ac + auVar181._12_4_;
      auVar113 = sha256rnds2_sha(auVar113,auVar109,auVar107);
      auVar108._4_4_ = auVar107._12_4_;
      auVar108._0_4_ = auVar107._8_4_;
      auVar108._8_4_ = auVar107._0_4_;
      auVar108._12_4_ = auVar107._0_4_;
      param_3 = param_3 + -1;
      auVar109 = sha256rnds2_sha(auVar109,auVar113,auVar108);
      auVar116._0_4_ = auVar113._0_4_ + auVar115._0_4_;
      auVar116._4_4_ = auVar113._4_4_ + auVar115._4_4_;
      auVar116._8_4_ = auVar113._8_4_ + auVar115._8_4_;
      auVar116._12_4_ = auVar113._12_4_ + auVar115._12_4_;
      auVar112._0_4_ = auVar109._0_4_ + auVar111._0_4_;
      auVar112._4_4_ = auVar109._4_4_ + auVar111._4_4_;
      auVar112._8_4_ = auVar109._8_4_ + auVar111._8_4_;
      auVar112._12_4_ = auVar109._12_4_ + auVar111._12_4_;
      auVar111 = auVar112;
      auVar115 = auVar116;
    } while (param_3 != 0);
    auVar114._4_4_ = auVar116._0_4_;
    auVar114._0_4_ = auVar116._4_4_;
    auVar114._8_4_ = auVar116._12_4_;
    auVar114._12_4_ = auVar116._8_4_;
    auVar154._4_4_ = auVar112._8_4_;
    auVar154._0_4_ = auVar112._12_4_;
    auVar154._8_4_ = auVar112._4_4_;
    auVar154._12_4_ = auVar112._0_4_;
    auVar50._4_56_ = auVar112._8_56_;
    auVar50._0_4_ = auVar112._0_4_;
    auVar110._0_8_ = auVar50._0_8_ << 0x20;
    auVar110._8_4_ = auVar112._12_4_;
    auVar110._12_4_ = auVar112._8_4_;
    auVar154._16_16_ = auVar114;
    *(longlong *)param_1 = auVar110._8_8_;
    *(longlong *)(param_1 + 2) = auVar114._8_8_;
    *(undefined1 (*) [16])(param_1 + 4) = auVar154._8_16_;
    return;
  }
  if ((_DAT_15540a9f8 & 0x128) == 0x128) {
    uVar68 = (ulonglong)auStack_290 & 0xfffffffffffffc00;
    pauVar69 = (undefined1 (*) [16])(uVar68 + 0x1c0);
    *(uint **)(uVar68 + 0x200) = param_1;
    *(undefined1 (**) [16])(uVar68 + 0x208) = param_2;
    *(undefined1 (**) [16])(uVar68 + 0x210) = param_2 + param_3 * 4;
    *(BADSPACEBASE **)(uVar68 + 0x218) = register0x00000020;
    *(undefined1 (*) [16])(uVar68 + 0x220) = in_ZMM6._0_16_;
    *(undefined1 (*) [16])(uVar68 + 0x230) = in_ZMM7._0_16_;
    *(undefined8 *)(uVar68 + 0x240) = unaff_XMM8_Qa;
    *(undefined8 *)(uVar68 + 0x248) = unaff_XMM8_Qb;
    *(undefined1 (*) [16])(uVar68 + 0x250) = in_ZMM9._0_16_;
    pauVar73 = param_2 + 4;
    uVar62 = *param_1;
    uVar63 = param_1[1];
    uVar66 = param_1[2];
    pauVar72 = pauVar73;
    if (pauVar73 == param_2 + param_3 * 4) {
      pauVar72 = (undefined1 (*) [16])(uVar68 + 0x1c0);
    }
    uVar83 = param_1[3];
    uVar84 = param_1[4];
    uVar85 = param_1[5];
    uVar86 = param_1[6];
    uVar64 = param_1[7];
    auVar60._16_16_ = _UNK_140def0f0;
    auVar60._0_16_ = _DAT_140def0e0;
    auVar61._16_16_ = _UNK_140def110;
    auVar61._0_16_ = _DAT_140def100;
    do {
      auVar132._16_16_ = _UNK_140def0d0;
      auVar132._0_16_ = _DAT_140def0c0;
      auVar131._16_16_ = ZEXT116(1) * *pauVar72;
      auVar131._0_16_ = ZEXT116(0) * *pauVar72 | ZEXT116(1) * pauVar73[-4];
      auVar151._16_16_ = ZEXT116(1) * pauVar72[1];
      auVar151._0_16_ = ZEXT116(0) * pauVar72[1] | ZEXT116(1) * pauVar73[-3];
      auVar184 = vpshufb_avx2(auVar131,auVar132);
      auVar152._16_16_ = ZEXT116(1) * pauVar72[2];
      auVar152._0_16_ = ZEXT116(0) * pauVar72[2] | ZEXT116(1) * pauVar73[-2];
      auVar185 = vpshufb_avx2(auVar151,auVar132);
      auVar153._16_16_ = ZEXT116(1) * pauVar72[3];
      auVar153._0_16_ = ZEXT116(0) * pauVar72[3] | ZEXT116(1) * pauVar73[-1];
      auVar186 = vpshufb_avx2(auVar152,auVar132);
      iVar18 = auVar184._4_4_ + DAT_140deeec4;
      iVar22 = auVar184._8_4_ + DAT_140deeec8;
      iVar26 = auVar184._12_4_ + DAT_140deeecc;
      iVar30 = auVar184._16_4_ + DAT_140deeed0;
      iVar34 = auVar184._20_4_ + DAT_140deeed4;
      iVar38 = auVar184._24_4_ + DAT_140deeed8;
      iVar42 = auVar184._28_4_ + DAT_140deeedc;
      auVar187 = vpshufb_avx2(auVar153,auVar132);
      iVar79 = auVar185._0_4_ + DAT_140deeee0;
      iVar19 = auVar185._4_4_ + DAT_140deeee4;
      iVar23 = auVar185._8_4_ + DAT_140deeee8;
      iVar27 = auVar185._12_4_ + DAT_140deeeec;
      iVar31 = auVar185._16_4_ + DAT_140deeef0;
      iVar35 = auVar185._20_4_ + DAT_140deeef4;
      iVar39 = auVar185._24_4_ + DAT_140deeef8;
      iVar43 = auVar185._28_4_ + DAT_140deeefc;
      iVar75 = auVar186._0_4_ + DAT_140deef00;
      iVar20 = auVar186._4_4_ + DAT_140deef04;
      iVar24 = auVar186._8_4_ + DAT_140deef08;
      iVar28 = auVar186._12_4_ + DAT_140deef0c;
      iVar32 = auVar186._16_4_ + DAT_140deef10;
      iVar36 = auVar186._20_4_ + DAT_140deef14;
      iVar40 = auVar186._24_4_ + DAT_140deef18;
      iVar44 = auVar186._28_4_ + DAT_140deef1c;
      iVar14 = auVar187._0_4_ + DAT_140deef20;
      iVar21 = auVar187._4_4_ + DAT_140deef24;
      iVar25 = auVar187._8_4_ + DAT_140deef28;
      iVar29 = auVar187._12_4_ + DAT_140deef2c;
      iVar33 = auVar187._16_4_ + DAT_140deef30;
      iVar37 = auVar187._20_4_ + DAT_140deef34;
      iVar41 = auVar187._24_4_ + DAT_140deef38;
      iVar45 = auVar187._28_4_ + DAT_140deef3c;
      *(int *)*pauVar69 = auVar184._0_4_ + K256;
      *(int *)(*pauVar69 + 4) = iVar18;
      *(int *)(*pauVar69 + 8) = iVar22;
      *(int *)(*pauVar69 + 0xc) = iVar26;
      *(int *)pauVar69[1] = iVar30;
      *(int *)(pauVar69[1] + 4) = iVar34;
      *(int *)(pauVar69[1] + 8) = iVar38;
      *(int *)(pauVar69[1] + 0xc) = iVar42;
      uVar87 = 0;
      *(int *)pauVar69[2] = iVar79;
      *(int *)(pauVar69[2] + 4) = iVar19;
      *(int *)(pauVar69[2] + 8) = iVar23;
      *(int *)(pauVar69[2] + 0xc) = iVar27;
      *(int *)pauVar69[3] = iVar31;
      *(int *)(pauVar69[3] + 4) = iVar35;
      *(int *)(pauVar69[3] + 8) = iVar39;
      *(int *)(pauVar69[3] + 0xc) = iVar43;
      *(int *)pauVar69[-4] = iVar75;
      *(int *)(pauVar69[-4] + 4) = iVar20;
      *(int *)(pauVar69[-4] + 8) = iVar24;
      *(int *)(pauVar69[-4] + 0xc) = iVar28;
      *(int *)pauVar69[-3] = iVar32;
      *(int *)(pauVar69[-3] + 4) = iVar36;
      *(int *)(pauVar69[-3] + 8) = iVar40;
      *(int *)(pauVar69[-3] + 0xc) = iVar44;
      uVar82 = uVar63 ^ uVar66;
      *(int *)pauVar69[-2] = iVar14;
      *(int *)(pauVar69[-2] + 4) = iVar21;
      *(int *)(pauVar69[-2] + 8) = iVar25;
      *(int *)(pauVar69[-2] + 0xc) = iVar29;
      *(int *)pauVar69[-1] = iVar33;
      *(int *)(pauVar69[-1] + 4) = iVar37;
      *(int *)(pauVar69[-1] + 8) = iVar41;
      *(int *)(pauVar69[-1] + 0xc) = iVar45;
      pauVar69 = pauVar69 + -4;
      piVar71 = &DAT_140deef40;
      do {
        pauVar70 = pauVar69;
        auVar183 = vpalignr_avx2(auVar185,auVar184,4);
        auVar154 = vpalignr_avx2(auVar187,auVar186,4);
        uVar62 = uVar62 + uVar87;
        auVar151 = vpsrld_avx2(auVar183,7);
        auVar182 = vpsrld_avx2(auVar183,3);
        iVar79 = uVar64 + *(int *)pauVar70[4] + (uVar85 & uVar84) + (~uVar84 & uVar86) +
                 ((uVar84 >> 0x19 | uVar84 << 7) ^ (uVar84 >> 0xb | uVar84 << 0x15) ^
                 (uVar84 >> 6 | uVar84 << 0x1a));
        auVar131 = vpslld_avx2(auVar183,0xe);
        uVar83 = uVar83 + iVar79;
        auVar183 = vpshufd_avx2(auVar187,0xfa);
        auVar152 = vpsrld_avx2(auVar151,0xb);
        uVar64 = iVar79 + (uVar82 & (uVar62 ^ uVar63) ^ uVar63) +
                 ((uVar62 >> 0xd | uVar62 * 0x80000) ^ (uVar62 >> 0x16 | uVar62 * 0x400) ^
                 (uVar62 >> 2 | uVar62 * 0x40000000));
        auVar132 = vpslld_avx2(auVar131,0xb);
        auVar153 = vpsrld_avx2(auVar183,10);
        iVar79 = uVar86 + *(int *)(pauVar70[4] + 4) + (uVar84 & uVar83) + (~uVar83 & uVar85) +
                 ((uVar83 >> 0x19 | uVar83 * 0x80) ^ (uVar83 >> 0xb | uVar83 * 0x200000) ^
                 (uVar83 >> 6 | uVar83 * 0x4000000));
        auVar132 = auVar182 ^ auVar151 ^ auVar131 ^ auVar152 ^ auVar132;
        uVar66 = uVar66 + iVar79;
        auVar183 = vpsrlq_avx2(auVar183,0x11);
        auVar131 = vpsrlq_avx2(auVar183,2);
        uVar86 = iVar79 + ((uVar62 ^ uVar63) & (uVar64 ^ uVar62) ^ uVar62) +
                 ((uVar64 >> 0xd | uVar64 * 0x80000) ^ (uVar64 >> 0x16 | uVar64 * 0x400) ^
                 (uVar64 >> 2 | uVar64 * 0x40000000));
        auVar183 = vpshufb_avx2(auVar153 ^ auVar183 ^ auVar131,auVar60);
        auVar182._0_4_ = auVar184._0_4_ + auVar154._0_4_ + auVar132._0_4_ + auVar183._0_4_;
        auVar182._4_4_ = auVar184._4_4_ + auVar154._4_4_ + auVar132._4_4_ + auVar183._4_4_;
        auVar182._8_4_ = auVar184._8_4_ + auVar154._8_4_ + auVar132._8_4_ + auVar183._8_4_;
        auVar182._12_4_ = auVar184._12_4_ + auVar154._12_4_ + auVar132._12_4_ + auVar183._12_4_;
        auVar182._16_4_ = auVar184._16_4_ + auVar154._16_4_ + auVar132._16_4_ + auVar183._16_4_;
        auVar182._20_4_ = auVar184._20_4_ + auVar154._20_4_ + auVar132._20_4_ + auVar183._20_4_;
        auVar182._24_4_ = auVar184._24_4_ + auVar154._24_4_ + auVar132._24_4_ + auVar183._24_4_;
        auVar182._28_4_ = auVar184._28_4_ + auVar154._28_4_ + auVar132._28_4_ + auVar183._28_4_;
        iVar79 = uVar85 + *(int *)(pauVar70[4] + 8) + (uVar83 & uVar66) + (~uVar66 & uVar84) +
                 ((uVar66 >> 0x19 | uVar66 * 0x80) ^ (uVar66 >> 0xb | uVar66 * 0x200000) ^
                 (uVar66 >> 6 | uVar66 * 0x4000000));
        auVar183 = vpshufd_avx2(auVar182,0x50);
        uVar63 = uVar63 + iVar79;
        auVar154 = vpsrld_avx2(auVar183,10);
        auVar183 = vpsrlq_avx2(auVar183,0x11);
        auVar184 = vpsrlq_avx2(auVar183,2);
        uVar85 = iVar79 + ((uVar64 ^ uVar62) & (uVar86 ^ uVar64) ^ uVar64) +
                 ((uVar86 >> 0xd | uVar86 * 0x80000) ^ (uVar86 >> 0x16 | uVar86 * 0x400) ^
                 (uVar86 >> 2 | uVar86 * 0x40000000));
        auVar183 = vpshufb_avx2(auVar154 ^ auVar183 ^ auVar184,auVar61);
        auVar184._0_4_ = auVar182._0_4_ + auVar183._0_4_;
        auVar184._4_4_ = auVar182._4_4_ + auVar183._4_4_;
        auVar184._8_4_ = auVar182._8_4_ + auVar183._8_4_;
        auVar184._12_4_ = auVar182._12_4_ + auVar183._12_4_;
        auVar184._16_4_ = auVar182._16_4_ + auVar183._16_4_;
        auVar184._20_4_ = auVar182._20_4_ + auVar183._20_4_;
        auVar184._24_4_ = auVar182._24_4_ + auVar183._24_4_;
        auVar184._28_4_ = auVar182._28_4_ + auVar183._28_4_;
        iVar79 = uVar84 + *(int *)(pauVar70[4] + 0xc) + (uVar66 & uVar63) + (~uVar63 & uVar83) +
                 ((uVar63 >> 0x19 | uVar63 * 0x80) ^ (uVar63 >> 0xb | uVar63 * 0x200000) ^
                 (uVar63 >> 6 | uVar63 * 0x4000000));
        iVar75 = piVar71[1];
        iVar14 = piVar71[2];
        iVar18 = piVar71[3];
        iVar19 = piVar71[4];
        iVar20 = piVar71[5];
        iVar21 = piVar71[6];
        iVar22 = piVar71[7];
        uVar62 = uVar62 + iVar79;
        *(int *)pauVar70[-4] = auVar184._0_4_ + *piVar71;
        *(int *)(pauVar70[-4] + 4) = auVar184._4_4_ + iVar75;
        *(int *)(pauVar70[-4] + 8) = auVar184._8_4_ + iVar14;
        *(int *)(pauVar70[-4] + 0xc) = auVar184._12_4_ + iVar18;
        *(int *)pauVar70[-3] = auVar184._16_4_ + iVar19;
        *(int *)(pauVar70[-3] + 4) = auVar184._20_4_ + iVar20;
        *(int *)(pauVar70[-3] + 8) = auVar184._24_4_ + iVar21;
        *(int *)(pauVar70[-3] + 0xc) = auVar184._28_4_ + iVar22;
        auVar183 = vpalignr_avx2(auVar186,auVar185,4);
        auVar154 = vpalignr_avx2(auVar184,auVar187,4);
        uVar84 = iVar79 + ((uVar86 ^ uVar64) & (uVar85 ^ uVar86) ^ uVar86) +
                 ((uVar85 >> 0xd | uVar85 * 0x80000) ^ (uVar85 >> 0x16 | uVar85 * 0x400) ^
                 (uVar85 >> 2 | uVar85 * 0x40000000));
        auVar151 = vpsrld_avx2(auVar183,7);
        auVar182 = vpsrld_avx2(auVar183,3);
        iVar79 = uVar83 + *(int *)pauVar70[6] + (uVar63 & uVar62) + (~uVar62 & uVar66) +
                 ((uVar62 >> 0x19 | uVar62 * 0x80) ^ (uVar62 >> 0xb | uVar62 * 0x200000) ^
                 (uVar62 >> 6 | uVar62 * 0x4000000));
        auVar131 = vpslld_avx2(auVar183,0xe);
        uVar64 = uVar64 + iVar79;
        auVar183 = vpshufd_avx2(auVar184,0xfa);
        auVar152 = vpsrld_avx2(auVar151,0xb);
        uVar83 = iVar79 + ((uVar85 ^ uVar86) & (uVar84 ^ uVar85) ^ uVar85) +
                 ((uVar84 >> 0xd | uVar84 * 0x80000) ^ (uVar84 >> 0x16 | uVar84 * 0x400) ^
                 (uVar84 >> 2 | uVar84 * 0x40000000));
        auVar132 = vpslld_avx2(auVar131,0xb);
        auVar153 = vpsrld_avx2(auVar183,10);
        iVar79 = uVar66 + *(int *)(pauVar70[6] + 4) + (uVar62 & uVar64) + (~uVar64 & uVar63) +
                 ((uVar64 >> 0x19 | uVar64 * 0x80) ^ (uVar64 >> 0xb | uVar64 * 0x200000) ^
                 (uVar64 >> 6 | uVar64 * 0x4000000));
        auVar132 = auVar182 ^ auVar151 ^ auVar131 ^ auVar152 ^ auVar132;
        uVar86 = uVar86 + iVar79;
        auVar183 = vpsrlq_avx2(auVar183,0x11);
        auVar131 = vpsrlq_avx2(auVar183,2);
        uVar66 = iVar79 + ((uVar84 ^ uVar85) & (uVar83 ^ uVar84) ^ uVar84) +
                 ((uVar83 >> 0xd | uVar83 * 0x80000) ^ (uVar83 >> 0x16 | uVar83 * 0x400) ^
                 (uVar83 >> 2 | uVar83 * 0x40000000));
        auVar183 = vpshufb_avx2(auVar153 ^ auVar183 ^ auVar131,auVar60);
        auVar15._0_4_ = auVar185._0_4_ + auVar154._0_4_ + auVar132._0_4_ + auVar183._0_4_;
        auVar15._4_4_ = auVar185._4_4_ + auVar154._4_4_ + auVar132._4_4_ + auVar183._4_4_;
        auVar15._8_4_ = auVar185._8_4_ + auVar154._8_4_ + auVar132._8_4_ + auVar183._8_4_;
        auVar15._12_4_ = auVar185._12_4_ + auVar154._12_4_ + auVar132._12_4_ + auVar183._12_4_;
        auVar15._16_4_ = auVar185._16_4_ + auVar154._16_4_ + auVar132._16_4_ + auVar183._16_4_;
        auVar15._20_4_ = auVar185._20_4_ + auVar154._20_4_ + auVar132._20_4_ + auVar183._20_4_;
        auVar15._24_4_ = auVar185._24_4_ + auVar154._24_4_ + auVar132._24_4_ + auVar183._24_4_;
        auVar15._28_4_ = auVar185._28_4_ + auVar154._28_4_ + auVar132._28_4_ + auVar183._28_4_;
        iVar79 = uVar63 + *(int *)(pauVar70[6] + 8) + (uVar64 & uVar86) + (~uVar86 & uVar62) +
                 ((uVar86 >> 0x19 | uVar86 * 0x80) ^ (uVar86 >> 0xb | uVar86 * 0x200000) ^
                 (uVar86 >> 6 | uVar86 * 0x4000000));
        auVar183 = vpshufd_avx2(auVar15,0x50);
        uVar85 = uVar85 + iVar79;
        auVar154 = vpsrld_avx2(auVar183,10);
        auVar183 = vpsrlq_avx2(auVar183,0x11);
        auVar185 = vpsrlq_avx2(auVar183,2);
        uVar63 = iVar79 + ((uVar83 ^ uVar84) & (uVar66 ^ uVar83) ^ uVar83) +
                 ((uVar66 >> 0xd | uVar66 * 0x80000) ^ (uVar66 >> 0x16 | uVar66 * 0x400) ^
                 (uVar66 >> 2 | uVar66 * 0x40000000));
        auVar183 = vpshufb_avx2(auVar154 ^ auVar183 ^ auVar185,auVar61);
        auVar185._0_4_ = auVar15._0_4_ + auVar183._0_4_;
        auVar185._4_4_ = auVar15._4_4_ + auVar183._4_4_;
        auVar185._8_4_ = auVar15._8_4_ + auVar183._8_4_;
        auVar185._12_4_ = auVar15._12_4_ + auVar183._12_4_;
        auVar185._16_4_ = auVar15._16_4_ + auVar183._16_4_;
        auVar185._20_4_ = auVar15._20_4_ + auVar183._20_4_;
        auVar185._24_4_ = auVar15._24_4_ + auVar183._24_4_;
        auVar185._28_4_ = auVar15._28_4_ + auVar183._28_4_;
        iVar79 = uVar62 + *(int *)(pauVar70[6] + 0xc) + (uVar86 & uVar85) + (~uVar85 & uVar64) +
                 ((uVar85 >> 0x19 | uVar85 * 0x80) ^ (uVar85 >> 0xb | uVar85 * 0x200000) ^
                 (uVar85 >> 6 | uVar85 * 0x4000000));
        iVar75 = piVar71[9];
        iVar14 = piVar71[10];
        iVar18 = piVar71[0xb];
        iVar19 = piVar71[0xc];
        iVar20 = piVar71[0xd];
        iVar21 = piVar71[0xe];
        iVar22 = piVar71[0xf];
        uVar84 = uVar84 + iVar79;
        *(int *)pauVar70[-2] = auVar185._0_4_ + piVar71[8];
        *(int *)(pauVar70[-2] + 4) = auVar185._4_4_ + iVar75;
        *(int *)(pauVar70[-2] + 8) = auVar185._8_4_ + iVar14;
        *(int *)(pauVar70[-2] + 0xc) = auVar185._12_4_ + iVar18;
        *(int *)pauVar70[-1] = auVar185._16_4_ + iVar19;
        *(int *)(pauVar70[-1] + 4) = auVar185._20_4_ + iVar20;
        *(int *)(pauVar70[-1] + 8) = auVar185._24_4_ + iVar21;
        *(int *)(pauVar70[-1] + 0xc) = auVar185._28_4_ + iVar22;
        pauVar69 = pauVar70 + -8;
        auVar183 = vpalignr_avx2(auVar187,auVar186,4);
        auVar154 = vpalignr_avx2(auVar185,auVar184,4);
        uVar62 = iVar79 + ((uVar66 ^ uVar83) & (uVar63 ^ uVar66) ^ uVar66) +
                 ((uVar63 >> 0xd | uVar63 * 0x80000) ^ (uVar63 >> 0x16 | uVar63 * 0x400) ^
                 (uVar63 >> 2 | uVar63 * 0x40000000));
        auVar151 = vpsrld_avx2(auVar183,7);
        auVar182 = vpsrld_avx2(auVar183,3);
        iVar79 = uVar64 + *(int *)*pauVar70 + (uVar85 & uVar84) + (~uVar84 & uVar86) +
                 ((uVar84 >> 0x19 | uVar84 * 0x80) ^ (uVar84 >> 0xb | uVar84 * 0x200000) ^
                 (uVar84 >> 6 | uVar84 * 0x4000000));
        auVar131 = vpslld_avx2(auVar183,0xe);
        uVar83 = uVar83 + iVar79;
        auVar183 = vpshufd_avx2(auVar185,0xfa);
        auVar152 = vpsrld_avx2(auVar151,0xb);
        uVar64 = iVar79 + ((uVar63 ^ uVar66) & (uVar62 ^ uVar63) ^ uVar63) +
                 ((uVar62 >> 0xd | uVar62 * 0x80000) ^ (uVar62 >> 0x16 | uVar62 * 0x400) ^
                 (uVar62 >> 2 | uVar62 * 0x40000000));
        auVar132 = vpslld_avx2(auVar131,0xb);
        auVar153 = vpsrld_avx2(auVar183,10);
        iVar79 = uVar86 + *(int *)(*pauVar70 + 4) + (uVar84 & uVar83) + (~uVar83 & uVar85) +
                 ((uVar83 >> 0x19 | uVar83 * 0x80) ^ (uVar83 >> 0xb | uVar83 * 0x200000) ^
                 (uVar83 >> 6 | uVar83 * 0x4000000));
        auVar132 = auVar182 ^ auVar151 ^ auVar131 ^ auVar152 ^ auVar132;
        uVar66 = uVar66 + iVar79;
        auVar183 = vpsrlq_avx2(auVar183,0x11);
        auVar131 = vpsrlq_avx2(auVar183,2);
        uVar86 = iVar79 + ((uVar62 ^ uVar63) & (uVar64 ^ uVar62) ^ uVar62) +
                 ((uVar64 >> 0xd | uVar64 * 0x80000) ^ (uVar64 >> 0x16 | uVar64 * 0x400) ^
                 (uVar64 >> 2 | uVar64 * 0x40000000));
        auVar183 = vpshufb_avx2(auVar153 ^ auVar183 ^ auVar131,auVar60);
        auVar16._0_4_ = auVar186._0_4_ + auVar154._0_4_ + auVar132._0_4_ + auVar183._0_4_;
        auVar16._4_4_ = auVar186._4_4_ + auVar154._4_4_ + auVar132._4_4_ + auVar183._4_4_;
        auVar16._8_4_ = auVar186._8_4_ + auVar154._8_4_ + auVar132._8_4_ + auVar183._8_4_;
        auVar16._12_4_ = auVar186._12_4_ + auVar154._12_4_ + auVar132._12_4_ + auVar183._12_4_;
        auVar16._16_4_ = auVar186._16_4_ + auVar154._16_4_ + auVar132._16_4_ + auVar183._16_4_;
        auVar16._20_4_ = auVar186._20_4_ + auVar154._20_4_ + auVar132._20_4_ + auVar183._20_4_;
        auVar16._24_4_ = auVar186._24_4_ + auVar154._24_4_ + auVar132._24_4_ + auVar183._24_4_;
        auVar16._28_4_ = auVar186._28_4_ + auVar154._28_4_ + auVar132._28_4_ + auVar183._28_4_;
        iVar79 = uVar85 + *(int *)(*pauVar70 + 8) + (uVar83 & uVar66) + (~uVar66 & uVar84) +
                 ((uVar66 >> 0x19 | uVar66 * 0x80) ^ (uVar66 >> 0xb | uVar66 * 0x200000) ^
                 (uVar66 >> 6 | uVar66 * 0x4000000));
        auVar183 = vpshufd_avx2(auVar16,0x50);
        uVar63 = uVar63 + iVar79;
        auVar154 = vpsrld_avx2(auVar183,10);
        auVar183 = vpsrlq_avx2(auVar183,0x11);
        auVar186 = vpsrlq_avx2(auVar183,2);
        uVar85 = iVar79 + ((uVar64 ^ uVar62) & (uVar86 ^ uVar64) ^ uVar64) +
                 ((uVar86 >> 0xd | uVar86 * 0x80000) ^ (uVar86 >> 0x16 | uVar86 * 0x400) ^
                 (uVar86 >> 2 | uVar86 * 0x40000000));
        auVar183 = vpshufb_avx2(auVar154 ^ auVar183 ^ auVar186,auVar61);
        auVar186._0_4_ = auVar16._0_4_ + auVar183._0_4_;
        auVar186._4_4_ = auVar16._4_4_ + auVar183._4_4_;
        auVar186._8_4_ = auVar16._8_4_ + auVar183._8_4_;
        auVar186._12_4_ = auVar16._12_4_ + auVar183._12_4_;
        auVar186._16_4_ = auVar16._16_4_ + auVar183._16_4_;
        auVar186._20_4_ = auVar16._20_4_ + auVar183._20_4_;
        auVar186._24_4_ = auVar16._24_4_ + auVar183._24_4_;
        auVar186._28_4_ = auVar16._28_4_ + auVar183._28_4_;
        iVar79 = uVar84 + *(int *)(*pauVar70 + 0xc) + (uVar66 & uVar63) + (~uVar63 & uVar83) +
                 ((uVar63 >> 0x19 | uVar63 * 0x80) ^ (uVar63 >> 0xb | uVar63 * 0x200000) ^
                 (uVar63 >> 6 | uVar63 * 0x4000000));
        iVar75 = piVar71[0x11];
        iVar14 = piVar71[0x12];
        iVar18 = piVar71[0x13];
        iVar19 = piVar71[0x14];
        iVar20 = piVar71[0x15];
        iVar21 = piVar71[0x16];
        iVar22 = piVar71[0x17];
        uVar62 = uVar62 + iVar79;
        *(int *)*pauVar69 = auVar186._0_4_ + piVar71[0x10];
        *(int *)(pauVar70[-8] + 4) = auVar186._4_4_ + iVar75;
        *(int *)(pauVar70[-8] + 8) = auVar186._8_4_ + iVar14;
        *(int *)(pauVar70[-8] + 0xc) = auVar186._12_4_ + iVar18;
        *(int *)pauVar70[-7] = auVar186._16_4_ + iVar19;
        *(int *)(pauVar70[-7] + 4) = auVar186._20_4_ + iVar20;
        *(int *)(pauVar70[-7] + 8) = auVar186._24_4_ + iVar21;
        *(int *)(pauVar70[-7] + 0xc) = auVar186._28_4_ + iVar22;
        auVar183 = vpalignr_avx2(auVar184,auVar187,4);
        auVar154 = vpalignr_avx2(auVar186,auVar185,4);
        uVar84 = iVar79 + ((uVar86 ^ uVar64) & (uVar85 ^ uVar86) ^ uVar86) +
                 ((uVar85 >> 0xd | uVar85 * 0x80000) ^ (uVar85 >> 0x16 | uVar85 * 0x400) ^
                 (uVar85 >> 2 | uVar85 * 0x40000000));
        auVar151 = vpsrld_avx2(auVar183,7);
        auVar182 = vpsrld_avx2(auVar183,3);
        iVar79 = uVar83 + *(int *)pauVar70[2] + (uVar63 & uVar62) + (~uVar62 & uVar66) +
                 ((uVar62 >> 0x19 | uVar62 * 0x80) ^ (uVar62 >> 0xb | uVar62 * 0x200000) ^
                 (uVar62 >> 6 | uVar62 * 0x4000000));
        auVar131 = vpslld_avx2(auVar183,0xe);
        uVar64 = uVar64 + iVar79;
        auVar183 = vpshufd_avx2(auVar186,0xfa);
        auVar152 = vpsrld_avx2(auVar151,0xb);
        uVar83 = iVar79 + ((uVar85 ^ uVar86) & (uVar84 ^ uVar85) ^ uVar85) +
                 ((uVar84 >> 0xd | uVar84 * 0x80000) ^ (uVar84 >> 0x16 | uVar84 * 0x400) ^
                 (uVar84 >> 2 | uVar84 * 0x40000000));
        auVar132 = vpslld_avx2(auVar131,0xb);
        auVar153 = vpsrld_avx2(auVar183,10);
        iVar79 = uVar66 + *(int *)(pauVar70[2] + 4) + (uVar62 & uVar64) + (~uVar64 & uVar63) +
                 ((uVar64 >> 0x19 | uVar64 * 0x80) ^ (uVar64 >> 0xb | uVar64 * 0x200000) ^
                 (uVar64 >> 6 | uVar64 * 0x4000000));
        auVar132 = auVar182 ^ auVar151 ^ auVar131 ^ auVar152 ^ auVar132;
        uVar86 = uVar86 + iVar79;
        auVar183 = vpsrlq_avx2(auVar183,0x11);
        auVar131 = vpsrlq_avx2(auVar183,2);
        uVar66 = iVar79 + ((uVar84 ^ uVar85) & (uVar83 ^ uVar84) ^ uVar84) +
                 ((uVar83 >> 0xd | uVar83 * 0x80000) ^ (uVar83 >> 0x16 | uVar83 * 0x400) ^
                 (uVar83 >> 2 | uVar83 * 0x40000000));
        auVar183 = vpshufb_avx2(auVar153 ^ auVar183 ^ auVar131,auVar60);
        auVar17._0_4_ = auVar187._0_4_ + auVar154._0_4_ + auVar132._0_4_ + auVar183._0_4_;
        auVar17._4_4_ = auVar187._4_4_ + auVar154._4_4_ + auVar132._4_4_ + auVar183._4_4_;
        auVar17._8_4_ = auVar187._8_4_ + auVar154._8_4_ + auVar132._8_4_ + auVar183._8_4_;
        auVar17._12_4_ = auVar187._12_4_ + auVar154._12_4_ + auVar132._12_4_ + auVar183._12_4_;
        auVar17._16_4_ = auVar187._16_4_ + auVar154._16_4_ + auVar132._16_4_ + auVar183._16_4_;
        auVar17._20_4_ = auVar187._20_4_ + auVar154._20_4_ + auVar132._20_4_ + auVar183._20_4_;
        auVar17._24_4_ = auVar187._24_4_ + auVar154._24_4_ + auVar132._24_4_ + auVar183._24_4_;
        auVar17._28_4_ = auVar187._28_4_ + auVar154._28_4_ + auVar132._28_4_ + auVar183._28_4_;
        iVar79 = uVar63 + *(int *)(pauVar70[2] + 8) + (uVar64 & uVar86) + (~uVar86 & uVar62) +
                 ((uVar86 >> 0x19 | uVar86 * 0x80) ^ (uVar86 >> 0xb | uVar86 * 0x200000) ^
                 (uVar86 >> 6 | uVar86 * 0x4000000));
        auVar183 = vpshufd_avx2(auVar17,0x50);
        uVar85 = uVar85 + iVar79;
        auVar154 = vpsrld_avx2(auVar183,10);
        auVar183 = vpsrlq_avx2(auVar183,0x11);
        auVar187 = vpsrlq_avx2(auVar183,2);
        uVar63 = iVar79 + ((uVar83 ^ uVar84) & (uVar66 ^ uVar83) ^ uVar83) +
                 ((uVar66 >> 0xd | uVar66 * 0x80000) ^ (uVar66 >> 0x16 | uVar66 * 0x400) ^
                 (uVar66 >> 2 | uVar66 * 0x40000000));
        auVar183 = vpshufb_avx2(auVar154 ^ auVar183 ^ auVar187,auVar61);
        auVar187._0_4_ = auVar17._0_4_ + auVar183._0_4_;
        auVar187._4_4_ = auVar17._4_4_ + auVar183._4_4_;
        auVar187._8_4_ = auVar17._8_4_ + auVar183._8_4_;
        auVar187._12_4_ = auVar17._12_4_ + auVar183._12_4_;
        auVar187._16_4_ = auVar17._16_4_ + auVar183._16_4_;
        auVar187._20_4_ = auVar17._20_4_ + auVar183._20_4_;
        auVar187._24_4_ = auVar17._24_4_ + auVar183._24_4_;
        auVar187._28_4_ = auVar17._28_4_ + auVar183._28_4_;
        iVar79 = uVar62 + *(int *)(pauVar70[2] + 0xc) + (uVar86 & uVar85) + (~uVar85 & uVar64) +
                 ((uVar85 >> 0x19 | uVar85 * 0x80) ^ (uVar85 >> 0xb | uVar85 * 0x200000) ^
                 (uVar85 >> 6 | uVar85 * 0x4000000));
        uVar82 = uVar63 ^ uVar66;
        iVar75 = piVar71[0x19];
        iVar14 = piVar71[0x1a];
        iVar18 = piVar71[0x1b];
        iVar19 = piVar71[0x1c];
        iVar20 = piVar71[0x1d];
        iVar21 = piVar71[0x1e];
        iVar22 = piVar71[0x1f];
        uVar84 = uVar84 + iVar79;
        uVar87 = (uVar63 >> 0xd | uVar63 * 0x80000) ^ (uVar63 >> 0x16 | uVar63 * 0x400) ^
                 (uVar63 >> 2 | uVar63 * 0x40000000);
        uVar62 = iVar79 + ((uVar66 ^ uVar83) & uVar82 ^ uVar66);
        *(int *)pauVar70[-6] = auVar187._0_4_ + piVar71[0x18];
        *(int *)(pauVar70[-6] + 4) = auVar187._4_4_ + iVar75;
        *(int *)(pauVar70[-6] + 8) = auVar187._8_4_ + iVar14;
        *(int *)(pauVar70[-6] + 0xc) = auVar187._12_4_ + iVar18;
        *(int *)pauVar70[-5] = auVar187._16_4_ + iVar19;
        *(int *)(pauVar70[-5] + 4) = auVar187._20_4_ + iVar20;
        *(int *)(pauVar70[-5] + 8) = auVar187._24_4_ + iVar21;
        *(int *)(pauVar70[-5] + 0xc) = auVar187._28_4_ + iVar22;
        pcVar1 = (char *)((longlong)piVar71 + 0x83);
        piVar71 = piVar71 + 0x20;
      } while (*pcVar1 != '\0');
      uVar62 = uVar62 + uVar87;
      iVar79 = uVar64 + *(int *)pauVar70[-4] + (uVar85 & uVar84) + (~uVar84 & uVar86) +
               ((uVar84 >> 0x19 | uVar84 * 0x80) ^ (uVar84 >> 0xb | uVar84 * 0x200000) ^
               (uVar84 >> 6 | uVar84 * 0x4000000));
      uVar83 = uVar83 + iVar79;
      uVar64 = iVar79 + (uVar82 & (uVar62 ^ uVar63) ^ uVar63) +
               ((uVar62 >> 0xd | uVar62 * 0x80000) ^ (uVar62 >> 0x16 | uVar62 * 0x400) ^
               (uVar62 >> 2 | uVar62 * 0x40000000));
      iVar79 = uVar86 + *(int *)(pauVar70[-4] + 4) + (uVar84 & uVar83) + (~uVar83 & uVar85) +
               ((uVar83 >> 0x19 | uVar83 * 0x80) ^ (uVar83 >> 0xb | uVar83 * 0x200000) ^
               (uVar83 >> 6 | uVar83 * 0x4000000));
      uVar66 = uVar66 + iVar79;
      uVar86 = iVar79 + ((uVar62 ^ uVar63) & (uVar64 ^ uVar62) ^ uVar62) +
               ((uVar64 >> 0xd | uVar64 * 0x80000) ^ (uVar64 >> 0x16 | uVar64 * 0x400) ^
               (uVar64 >> 2 | uVar64 * 0x40000000));
      iVar79 = uVar85 + *(int *)(pauVar70[-4] + 8) + (uVar83 & uVar66) + (~uVar66 & uVar84) +
               ((uVar66 >> 0x19 | uVar66 * 0x80) ^ (uVar66 >> 0xb | uVar66 * 0x200000) ^
               (uVar66 >> 6 | uVar66 * 0x4000000));
      uVar63 = uVar63 + iVar79;
      uVar85 = iVar79 + ((uVar64 ^ uVar62) & (uVar86 ^ uVar64) ^ uVar64) +
               ((uVar86 >> 0xd | uVar86 * 0x80000) ^ (uVar86 >> 0x16 | uVar86 * 0x400) ^
               (uVar86 >> 2 | uVar86 * 0x40000000));
      iVar79 = uVar84 + *(int *)(pauVar70[-4] + 0xc) + (uVar66 & uVar63) + (~uVar63 & uVar83) +
               ((uVar63 >> 0x19 | uVar63 * 0x80) ^ (uVar63 >> 0xb | uVar63 * 0x200000) ^
               (uVar63 >> 6 | uVar63 * 0x4000000));
      uVar62 = uVar62 + iVar79;
      uVar84 = iVar79 + ((uVar86 ^ uVar64) & (uVar85 ^ uVar86) ^ uVar86) +
               ((uVar85 >> 0xd | uVar85 * 0x80000) ^ (uVar85 >> 0x16 | uVar85 * 0x400) ^
               (uVar85 >> 2 | uVar85 * 0x40000000));
      iVar79 = uVar83 + *(int *)pauVar70[-2] + (uVar63 & uVar62) + (~uVar62 & uVar66) +
               ((uVar62 >> 0x19 | uVar62 * 0x80) ^ (uVar62 >> 0xb | uVar62 * 0x200000) ^
               (uVar62 >> 6 | uVar62 * 0x4000000));
      uVar64 = uVar64 + iVar79;
      uVar83 = iVar79 + ((uVar85 ^ uVar86) & (uVar84 ^ uVar85) ^ uVar85) +
               ((uVar84 >> 0xd | uVar84 * 0x80000) ^ (uVar84 >> 0x16 | uVar84 * 0x400) ^
               (uVar84 >> 2 | uVar84 * 0x40000000));
      iVar79 = uVar66 + *(int *)(pauVar70[-2] + 4) + (uVar62 & uVar64) + (~uVar64 & uVar63) +
               ((uVar64 >> 0x19 | uVar64 * 0x80) ^ (uVar64 >> 0xb | uVar64 * 0x200000) ^
               (uVar64 >> 6 | uVar64 * 0x4000000));
      uVar86 = uVar86 + iVar79;
      uVar66 = iVar79 + ((uVar84 ^ uVar85) & (uVar83 ^ uVar84) ^ uVar84) +
               ((uVar83 >> 0xd | uVar83 * 0x80000) ^ (uVar83 >> 0x16 | uVar83 * 0x400) ^
               (uVar83 >> 2 | uVar83 * 0x40000000));
      iVar79 = uVar63 + *(int *)(pauVar70[-2] + 8) + (uVar64 & uVar86) + (~uVar86 & uVar62) +
               ((uVar86 >> 0x19 | uVar86 * 0x80) ^ (uVar86 >> 0xb | uVar86 * 0x200000) ^
               (uVar86 >> 6 | uVar86 * 0x4000000));
      uVar85 = uVar85 + iVar79;
      uVar63 = iVar79 + ((uVar83 ^ uVar84) & (uVar66 ^ uVar83) ^ uVar83) +
               ((uVar66 >> 0xd | uVar66 * 0x80000) ^ (uVar66 >> 0x16 | uVar66 * 0x400) ^
               (uVar66 >> 2 | uVar66 * 0x40000000));
      iVar79 = uVar62 + *(int *)(pauVar70[-2] + 0xc) + (uVar86 & uVar85) + (~uVar85 & uVar64) +
               ((uVar85 >> 0x19 | uVar85 * 0x80) ^ (uVar85 >> 0xb | uVar85 * 0x200000) ^
               (uVar85 >> 6 | uVar85 * 0x4000000));
      uVar84 = uVar84 + iVar79;
      uVar62 = iVar79 + ((uVar66 ^ uVar83) & (uVar63 ^ uVar66) ^ uVar66) +
               ((uVar63 >> 0xd | uVar63 * 0x80000) ^ (uVar63 >> 0x16 | uVar63 * 0x400) ^
               (uVar63 >> 2 | uVar63 * 0x40000000));
      iVar79 = uVar64 + *(int *)*pauVar69 + (uVar85 & uVar84) + (~uVar84 & uVar86) +
               ((uVar84 >> 0x19 | uVar84 * 0x80) ^ (uVar84 >> 0xb | uVar84 * 0x200000) ^
               (uVar84 >> 6 | uVar84 * 0x4000000));
      uVar83 = uVar83 + iVar79;
      uVar64 = iVar79 + ((uVar63 ^ uVar66) & (uVar62 ^ uVar63) ^ uVar63) +
               ((uVar62 >> 0xd | uVar62 * 0x80000) ^ (uVar62 >> 0x16 | uVar62 * 0x400) ^
               (uVar62 >> 2 | uVar62 * 0x40000000));
      iVar79 = uVar86 + *(int *)(pauVar70[-8] + 4) + (uVar84 & uVar83) + (~uVar83 & uVar85) +
               ((uVar83 >> 0x19 | uVar83 * 0x80) ^ (uVar83 >> 0xb | uVar83 * 0x200000) ^
               (uVar83 >> 6 | uVar83 * 0x4000000));
      uVar66 = uVar66 + iVar79;
      uVar86 = iVar79 + ((uVar62 ^ uVar63) & (uVar64 ^ uVar62) ^ uVar62) +
               ((uVar64 >> 0xd | uVar64 * 0x80000) ^ (uVar64 >> 0x16 | uVar64 * 0x400) ^
               (uVar64 >> 2 | uVar64 * 0x40000000));
      iVar79 = uVar85 + *(int *)(pauVar70[-8] + 8) + (uVar83 & uVar66) + (~uVar66 & uVar84) +
               ((uVar66 >> 0x19 | uVar66 * 0x80) ^ (uVar66 >> 0xb | uVar66 * 0x200000) ^
               (uVar66 >> 6 | uVar66 * 0x4000000));
      uVar63 = uVar63 + iVar79;
      uVar85 = iVar79 + ((uVar64 ^ uVar62) & (uVar86 ^ uVar64) ^ uVar64) +
               ((uVar86 >> 0xd | uVar86 * 0x80000) ^ (uVar86 >> 0x16 | uVar86 * 0x400) ^
               (uVar86 >> 2 | uVar86 * 0x40000000));
      iVar79 = uVar84 + *(int *)(pauVar70[-8] + 0xc) + (uVar66 & uVar63) + (~uVar63 & uVar83) +
               ((uVar63 >> 0x19 | uVar63 * 0x80) ^ (uVar63 >> 0xb | uVar63 * 0x200000) ^
               (uVar63 >> 6 | uVar63 * 0x4000000));
      uVar62 = uVar62 + iVar79;
      uVar84 = iVar79 + ((uVar86 ^ uVar64) & (uVar85 ^ uVar86) ^ uVar86) +
               ((uVar85 >> 0xd | uVar85 * 0x80000) ^ (uVar85 >> 0x16 | uVar85 * 0x400) ^
               (uVar85 >> 2 | uVar85 * 0x40000000));
      iVar79 = uVar83 + *(int *)pauVar70[-6] + (uVar63 & uVar62) + (~uVar62 & uVar66) +
               ((uVar62 >> 0x19 | uVar62 * 0x80) ^ (uVar62 >> 0xb | uVar62 * 0x200000) ^
               (uVar62 >> 6 | uVar62 * 0x4000000));
      uVar64 = uVar64 + iVar79;
      uVar83 = iVar79 + ((uVar85 ^ uVar86) & (uVar84 ^ uVar85) ^ uVar85) +
               ((uVar84 >> 0xd | uVar84 * 0x80000) ^ (uVar84 >> 0x16 | uVar84 * 0x400) ^
               (uVar84 >> 2 | uVar84 * 0x40000000));
      iVar79 = uVar66 + *(int *)(pauVar70[-6] + 4) + (uVar62 & uVar64) + (~uVar64 & uVar63) +
               ((uVar64 >> 0x19 | uVar64 * 0x80) ^ (uVar64 >> 0xb | uVar64 * 0x200000) ^
               (uVar64 >> 6 | uVar64 * 0x4000000));
      uVar86 = uVar86 + iVar79;
      uVar66 = iVar79 + ((uVar84 ^ uVar85) & (uVar83 ^ uVar84) ^ uVar84) +
               ((uVar83 >> 0xd | uVar83 * 0x80000) ^ (uVar83 >> 0x16 | uVar83 * 0x400) ^
               (uVar83 >> 2 | uVar83 * 0x40000000));
      iVar79 = uVar63 + *(int *)(pauVar70[-6] + 8) + (uVar64 & uVar86) + (~uVar86 & uVar62) +
               ((uVar86 >> 0x19 | uVar86 * 0x80) ^ (uVar86 >> 0xb | uVar86 * 0x200000) ^
               (uVar86 >> 6 | uVar86 * 0x4000000));
      uVar85 = uVar85 + iVar79;
      uVar63 = iVar79 + ((uVar83 ^ uVar84) & (uVar66 ^ uVar83) ^ uVar83) +
               ((uVar66 >> 0xd | uVar66 * 0x80000) ^ (uVar66 >> 0x16 | uVar66 * 0x400) ^
               (uVar66 >> 2 | uVar66 * 0x40000000));
      iVar79 = uVar62 + *(int *)(pauVar70[-6] + 0xc) + (uVar86 & uVar85) + (~uVar85 & uVar64) +
               ((uVar85 >> 0x19 | uVar85 * 0x80) ^ (uVar85 >> 0xb | uVar85 * 0x200000) ^
               (uVar85 >> 6 | uVar85 * 0x4000000));
      piVar71 = *(int **)pauVar70[0x18];
      pauVar72 = pauVar70 + 0x14;
      iVar75 = iVar79 + ((uVar66 ^ uVar83) & (uVar63 ^ uVar66) ^ uVar66) +
               ((uVar63 >> 0xd | uVar63 * 0x80000) ^ (uVar63 >> 0x16 | uVar63 * 0x400) ^
               (uVar63 >> 2 | uVar63 * 0x40000000)) + *piVar71;
      uVar63 = uVar63 + piVar71[1];
      uVar66 = uVar66 + piVar71[2];
      uVar83 = uVar83 + piVar71[3];
      uVar84 = uVar84 + iVar79 + piVar71[4];
      uVar85 = uVar85 + piVar71[5];
      uVar86 = uVar86 + piVar71[6];
      uVar64 = uVar64 + piVar71[7];
      *piVar71 = iVar75;
      piVar71[1] = uVar63;
      piVar71[2] = uVar66;
      piVar71[3] = uVar83;
      piVar71[4] = uVar84;
      piVar71[5] = uVar85;
      piVar71[6] = uVar86;
      piVar71[7] = uVar64;
      if (pauVar73 == *(undefined1 (**) [16])pauVar70[0x19]) {
        return;
      }
      uVar62 = 0;
      uVar82 = uVar63 ^ uVar66;
      do {
        uVar62 = iVar75 + uVar62;
        iVar79 = uVar64 + *(int *)pauVar72[1] + (uVar85 & uVar84) + (~uVar84 & uVar86) +
                 ((uVar84 >> 0x19 | uVar84 << 7) ^ (uVar84 >> 0xb | uVar84 << 0x15) ^
                 (uVar84 >> 6 | uVar84 << 0x1a));
        uVar83 = uVar83 + iVar79;
        uVar64 = iVar79 + (uVar82 & (uVar62 ^ uVar63) ^ uVar63) +
                 ((uVar62 >> 0xd | uVar62 * 0x80000) ^ (uVar62 >> 0x16 | uVar62 * 0x400) ^
                 (uVar62 >> 2 | uVar62 * 0x40000000));
        iVar79 = uVar86 + *(int *)(pauVar72[1] + 4) + (uVar84 & uVar83) + (~uVar83 & uVar85) +
                 ((uVar83 >> 0x19 | uVar83 * 0x80) ^ (uVar83 >> 0xb | uVar83 * 0x200000) ^
                 (uVar83 >> 6 | uVar83 * 0x4000000));
        uVar66 = uVar66 + iVar79;
        uVar86 = iVar79 + ((uVar62 ^ uVar63) & (uVar64 ^ uVar62) ^ uVar62) +
                 ((uVar64 >> 0xd | uVar64 * 0x80000) ^ (uVar64 >> 0x16 | uVar64 * 0x400) ^
                 (uVar64 >> 2 | uVar64 * 0x40000000));
        iVar79 = uVar85 + *(int *)(pauVar72[1] + 8) + (uVar83 & uVar66) + (~uVar66 & uVar84) +
                 ((uVar66 >> 0x19 | uVar66 * 0x80) ^ (uVar66 >> 0xb | uVar66 * 0x200000) ^
                 (uVar66 >> 6 | uVar66 * 0x4000000));
        uVar63 = uVar63 + iVar79;
        uVar85 = iVar79 + ((uVar64 ^ uVar62) & (uVar86 ^ uVar64) ^ uVar64) +
                 ((uVar86 >> 0xd | uVar86 * 0x80000) ^ (uVar86 >> 0x16 | uVar86 * 0x400) ^
                 (uVar86 >> 2 | uVar86 * 0x40000000));
        iVar79 = uVar84 + *(int *)(pauVar72[1] + 0xc) + (uVar66 & uVar63) + (~uVar63 & uVar83) +
                 ((uVar63 >> 0x19 | uVar63 * 0x80) ^ (uVar63 >> 0xb | uVar63 * 0x200000) ^
                 (uVar63 >> 6 | uVar63 * 0x4000000));
        uVar62 = uVar62 + iVar79;
        uVar84 = iVar79 + ((uVar86 ^ uVar64) & (uVar85 ^ uVar86) ^ uVar86) +
                 ((uVar85 >> 0xd | uVar85 * 0x80000) ^ (uVar85 >> 0x16 | uVar85 * 0x400) ^
                 (uVar85 >> 2 | uVar85 * 0x40000000));
        iVar79 = uVar83 + *(int *)pauVar72[3] + (uVar63 & uVar62) + (~uVar62 & uVar66) +
                 ((uVar62 >> 0x19 | uVar62 * 0x80) ^ (uVar62 >> 0xb | uVar62 * 0x200000) ^
                 (uVar62 >> 6 | uVar62 * 0x4000000));
        uVar64 = uVar64 + iVar79;
        uVar83 = iVar79 + ((uVar85 ^ uVar86) & (uVar84 ^ uVar85) ^ uVar85) +
                 ((uVar84 >> 0xd | uVar84 * 0x80000) ^ (uVar84 >> 0x16 | uVar84 * 0x400) ^
                 (uVar84 >> 2 | uVar84 * 0x40000000));
        iVar79 = uVar66 + *(int *)(pauVar72[3] + 4) + (uVar62 & uVar64) + (~uVar64 & uVar63) +
                 ((uVar64 >> 0x19 | uVar64 * 0x80) ^ (uVar64 >> 0xb | uVar64 * 0x200000) ^
                 (uVar64 >> 6 | uVar64 * 0x4000000));
        uVar86 = uVar86 + iVar79;
        uVar66 = iVar79 + ((uVar84 ^ uVar85) & (uVar83 ^ uVar84) ^ uVar84) +
                 ((uVar83 >> 0xd | uVar83 * 0x80000) ^ (uVar83 >> 0x16 | uVar83 * 0x400) ^
                 (uVar83 >> 2 | uVar83 * 0x40000000));
        iVar79 = uVar63 + *(int *)(pauVar72[3] + 8) + (uVar64 & uVar86) + (~uVar86 & uVar62) +
                 ((uVar86 >> 0x19 | uVar86 * 0x80) ^ (uVar86 >> 0xb | uVar86 * 0x200000) ^
                 (uVar86 >> 6 | uVar86 * 0x4000000));
        uVar85 = uVar85 + iVar79;
        uVar63 = iVar79 + ((uVar83 ^ uVar84) & (uVar66 ^ uVar83) ^ uVar83) +
                 ((uVar66 >> 0xd | uVar66 * 0x80000) ^ (uVar66 >> 0x16 | uVar66 * 0x400) ^
                 (uVar66 >> 2 | uVar66 * 0x40000000));
        iVar75 = uVar62 + *(int *)(pauVar72[3] + 0xc) + (uVar86 & uVar85) + (~uVar85 & uVar64) +
                 ((uVar85 >> 0x19 | uVar85 * 0x80) ^ (uVar85 >> 0xb | uVar85 * 0x200000) ^
                 (uVar85 >> 6 | uVar85 * 0x4000000));
        uVar82 = uVar63 ^ uVar66;
        uVar84 = uVar84 + iVar75;
        uVar62 = (uVar63 >> 0xd | uVar63 * 0x80000) ^ (uVar63 >> 0x16 | uVar63 * 0x400) ^
                 (uVar63 >> 2 | uVar63 * 0x40000000);
        iVar75 = iVar75 + ((uVar66 ^ uVar83) & uVar82 ^ uVar66);
        pauVar72 = pauVar72 + -4;
      } while (pauVar69 <= pauVar72);
      puVar4 = *(uint **)pauVar70[0x18];
      pauVar69 = pauVar70 + 0x14;
      uVar62 = iVar75 + uVar62 + *puVar4;
      uVar63 = uVar63 + puVar4[1];
      uVar66 = uVar66 + puVar4[2];
      uVar83 = uVar83 + puVar4[3];
      uVar84 = uVar84 + puVar4[4];
      uVar85 = uVar85 + puVar4[5];
      pauVar73 = pauVar73 + 8;
      uVar86 = uVar86 + puVar4[6];
      uVar64 = uVar64 + puVar4[7];
      pauVar5 = *(undefined1 (**) [16])pauVar70[0x19];
      *puVar4 = uVar62;
      pauVar72 = pauVar73;
      if (pauVar73 == pauVar5) {
        pauVar72 = pauVar69;
      }
      puVar4[1] = uVar63;
      puVar4[2] = uVar66;
      puVar4[3] = uVar83;
      puVar4[4] = uVar84;
      puVar4[5] = uVar85;
      puVar4[6] = uVar86;
      puVar4[7] = uVar64;
    } while (pauVar73 <= pauVar5);
    return;
  }
  if ((DAT_15540a9f4 & 0x10000200 | OPENSSL_ia32cap_P & 0x40000000) == 0x50000200) {
    pauVar73 = param_2 + param_3 * 4;
    uVar62 = *param_1;
    uVar66 = param_1[1];
    uVar63 = param_1[2];
    uVar64 = param_1[3];
    uVar86 = param_1[4];
    uVar85 = param_1[5];
    uVar84 = param_1[6];
    uVar83 = param_1[7];
    do {
      auVar10 = vpshufb_avx(*param_2,_DAT_140def0c0);
      auVar11 = vpshufb_avx(param_2[1],_DAT_140def0c0);
      auVar12 = vpshufb_avx(param_2[2],_DAT_140def0c0);
      auVar13 = vpshufb_avx(param_2[3],_DAT_140def0c0);
      auStack_100._4_4_ = auVar10._4_4_ + DAT_140deeec4;
      auStack_100._0_4_ = auVar10._0_4_ + K256;
      auStack_100._8_4_ = auVar10._8_4_ + DAT_140deeec8;
      auStack_100._12_4_ = auVar10._12_4_ + DAT_140deeecc;
      auStack_f0._4_4_ = auVar11._4_4_ + DAT_140deeee4;
      auStack_f0._0_4_ = auVar11._0_4_ + DAT_140deeee0;
      auStack_f0._8_4_ = auVar11._8_4_ + DAT_140deeee8;
      auStack_f0._12_4_ = auVar11._12_4_ + DAT_140deeeec;
      auStack_e0._4_4_ = auVar12._4_4_ + DAT_140deef04;
      auStack_e0._0_4_ = auVar12._0_4_ + DAT_140deef00;
      auStack_e0._8_4_ = auVar12._8_4_ + DAT_140deef08;
      auStack_e0._12_4_ = auVar12._12_4_ + DAT_140deef0c;
      uVar82 = uVar66 ^ uVar63;
      auStack_d0._4_4_ = auVar13._4_4_ + DAT_140deef24;
      auStack_d0._0_4_ = auVar13._0_4_ + DAT_140deef20;
      auStack_d0._8_4_ = auVar13._8_4_ + DAT_140deef28;
      auStack_d0._12_4_ = auVar13._12_4_ + DAT_140deef2c;
      piVar71 = &K256;
      do {
        auVar181 = vpalignr_avx(auVar11,auVar10,4);
        auVar150 = vpalignr_avx(auVar13,auVar12,4);
        uVar87 = (uVar86 >> 0xe | uVar86 << 0x12) ^ uVar86;
        auVar147 = vpsrld_avx(auVar181,7);
        uVar65 = (uVar62 >> 9 | uVar62 << 0x17) ^ uVar62;
        uVar87 = (uVar87 >> 5 | uVar87 << 0x1b) ^ uVar86;
        auVar180 = vpsrld_avx(auVar181,3);
        auVar129 = vpslld_avx(auVar181,0xe);
        uVar65 = (uVar65 >> 0xb | uVar65 << 0x15) ^ uVar62;
        iVar79 = uVar83 + auStack_100._0_4_ + ((uVar85 ^ uVar84) & uVar86 ^ uVar84) +
                 (uVar87 >> 6 | uVar87 << 0x1a);
        auVar181 = vpshufd_avx(auVar13,0xfa);
        uVar64 = uVar64 + iVar79;
        auVar148 = vpsrld_avx(auVar147,0xb);
        uVar83 = (uVar65 >> 2 | uVar65 << 0x1e) + iVar79 + (uVar82 & (uVar62 ^ uVar66) ^ uVar66);
        auVar130 = vpslld_avx(auVar129,0xb);
        uVar82 = (uVar64 >> 0xe | uVar64 * 0x40000) ^ uVar64;
        uVar87 = (uVar83 >> 9 | uVar83 * 0x800000) ^ uVar83;
        uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar64;
        auVar149 = vpsrld_avx(auVar181,10);
        auVar130 = auVar180 ^ auVar147 ^ auVar129 ^ auVar148 ^ auVar130;
        auVar181 = vpsrlq_avx(auVar181,0x11);
        uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar83;
        iVar79 = uVar84 + auStack_100._4_4_ + ((uVar86 ^ uVar85) & uVar64 ^ uVar85) +
                 (uVar82 >> 6 | uVar82 << 0x1a);
        uVar63 = uVar63 + iVar79;
        auVar129 = vpsrlq_avx(auVar181,2);
        uVar84 = (uVar87 >> 2 | uVar87 << 0x1e) +
                 iVar79 + ((uVar62 ^ uVar66) & (uVar83 ^ uVar62) ^ uVar62);
        uVar82 = (uVar63 >> 0xe | uVar63 * 0x40000) ^ uVar63;
        auVar181 = vpshufb_avx(auVar149 ^ auVar181 ^ auVar129,auVar109);
        uVar87 = (uVar84 >> 9 | uVar84 * 0x800000) ^ uVar84;
        auVar6._0_4_ = auVar10._0_4_ + auVar150._0_4_ + auVar130._0_4_ + auVar181._0_4_;
        auVar6._4_4_ = auVar10._4_4_ + auVar150._4_4_ + auVar130._4_4_ + auVar181._4_4_;
        auVar6._8_4_ = auVar10._8_4_ + auVar150._8_4_ + auVar130._8_4_ + auVar181._8_4_;
        auVar6._12_4_ = auVar10._12_4_ + auVar150._12_4_ + auVar130._12_4_ + auVar181._12_4_;
        uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar63;
        auVar181 = vpshufd_avx(auVar6,0x50);
        auVar150 = vpsrld_avx(auVar181,10);
        auVar181 = vpsrlq_avx(auVar181,0x11);
        uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar84;
        iVar79 = uVar85 + auStack_100._8_4_ + ((uVar64 ^ uVar86) & uVar63 ^ uVar86) +
                 (uVar82 >> 6 | uVar82 << 0x1a);
        uVar66 = uVar66 + iVar79;
        auVar130 = vpsrlq_avx(auVar181,2);
        uVar85 = (uVar87 >> 2 | uVar87 << 0x1e) +
                 iVar79 + ((uVar83 ^ uVar62) & (uVar84 ^ uVar83) ^ uVar83);
        auVar181 = vpshufb_avx(auVar150 ^ auVar181 ^ auVar130,auVar113);
        uVar82 = (uVar66 >> 0xe | uVar66 * 0x40000) ^ uVar66;
        auVar10._0_4_ = auVar6._0_4_ + auVar181._0_4_;
        auVar10._4_4_ = auVar6._4_4_ + auVar181._4_4_;
        auVar10._8_4_ = auVar6._8_4_ + auVar181._8_4_;
        auVar10._12_4_ = auVar6._12_4_ + auVar181._12_4_;
        uVar87 = (uVar85 >> 9 | uVar85 * 0x800000) ^ uVar85;
        iVar79 = auVar10._0_4_ + piVar71[0x20];
        piVar52 = piVar71 + 0x21;
        piVar53 = piVar71 + 0x22;
        piVar54 = piVar71 + 0x23;
        uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar66;
        uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar85;
        iVar75 = uVar86 + auStack_100._12_4_ + ((uVar63 ^ uVar64) & uVar66 ^ uVar64) +
                 (uVar82 >> 6 | uVar82 << 0x1a);
        uVar62 = uVar62 + iVar75;
        uVar86 = (uVar87 >> 2 | uVar87 << 0x1e) +
                 iVar75 + ((uVar84 ^ uVar83) & (uVar85 ^ uVar84) ^ uVar84);
        auStack_100._4_4_ = auVar10._4_4_ + *piVar52;
        auStack_100._0_4_ = iVar79;
        auStack_100._8_4_ = auVar10._8_4_ + *piVar53;
        auStack_100._12_4_ = auVar10._12_4_ + *piVar54;
        auVar181 = vpalignr_avx(auVar12,auVar11,4);
        auVar150 = vpalignr_avx(auVar10,auVar13,4);
        uVar82 = (uVar62 >> 0xe | uVar62 * 0x40000) ^ uVar62;
        auVar147 = vpsrld_avx(auVar181,7);
        uVar87 = (uVar86 >> 9 | uVar86 * 0x800000) ^ uVar86;
        uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar62;
        auVar180 = vpsrld_avx(auVar181,3);
        auVar129 = vpslld_avx(auVar181,0xe);
        uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar86;
        iVar75 = uVar64 + auStack_f0._0_4_ + ((uVar66 ^ uVar63) & uVar62 ^ uVar63) +
                 (uVar82 >> 6 | uVar82 << 0x1a);
        auVar181 = vpshufd_avx(auVar10,0xfa);
        uVar83 = uVar83 + iVar75;
        auVar148 = vpsrld_avx(auVar147,0xb);
        uVar64 = (uVar87 >> 2 | uVar87 << 0x1e) +
                 iVar75 + ((uVar85 ^ uVar84) & (uVar86 ^ uVar85) ^ uVar85);
        auVar130 = vpslld_avx(auVar129,0xb);
        uVar82 = (uVar83 >> 0xe | uVar83 * 0x40000) ^ uVar83;
        uVar87 = (uVar64 >> 9 | uVar64 * 0x800000) ^ uVar64;
        uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar83;
        auVar149 = vpsrld_avx(auVar181,10);
        auVar130 = auVar180 ^ auVar147 ^ auVar129 ^ auVar148 ^ auVar130;
        auVar181 = vpsrlq_avx(auVar181,0x11);
        uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar64;
        iVar75 = uVar63 + auStack_f0._4_4_ + ((uVar62 ^ uVar66) & uVar83 ^ uVar66) +
                 (uVar82 >> 6 | uVar82 << 0x1a);
        uVar84 = uVar84 + iVar75;
        auVar129 = vpsrlq_avx(auVar181,2);
        uVar63 = (uVar87 >> 2 | uVar87 << 0x1e) +
                 iVar75 + ((uVar86 ^ uVar85) & (uVar64 ^ uVar86) ^ uVar86);
        uVar82 = (uVar84 >> 0xe | uVar84 * 0x40000) ^ uVar84;
        auVar181 = vpshufb_avx(auVar149 ^ auVar181 ^ auVar129,auVar109);
        uVar87 = (uVar63 >> 9 | uVar63 * 0x800000) ^ uVar63;
        auVar7._0_4_ = auVar11._0_4_ + auVar150._0_4_ + auVar130._0_4_ + auVar181._0_4_;
        auVar7._4_4_ = auVar11._4_4_ + auVar150._4_4_ + auVar130._4_4_ + auVar181._4_4_;
        auVar7._8_4_ = auVar11._8_4_ + auVar150._8_4_ + auVar130._8_4_ + auVar181._8_4_;
        auVar7._12_4_ = auVar11._12_4_ + auVar150._12_4_ + auVar130._12_4_ + auVar181._12_4_;
        uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar84;
        auVar181 = vpshufd_avx(auVar7,0x50);
        auVar150 = vpsrld_avx(auVar181,10);
        auVar181 = vpsrlq_avx(auVar181,0x11);
        uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar63;
        iVar75 = uVar66 + auStack_f0._8_4_ + ((uVar83 ^ uVar62) & uVar84 ^ uVar62) +
                 (uVar82 >> 6 | uVar82 << 0x1a);
        uVar85 = uVar85 + iVar75;
        auVar130 = vpsrlq_avx(auVar181,2);
        uVar66 = (uVar87 >> 2 | uVar87 << 0x1e) +
                 iVar75 + ((uVar64 ^ uVar86) & (uVar63 ^ uVar64) ^ uVar64);
        auVar181 = vpshufb_avx(auVar150 ^ auVar181 ^ auVar130,auVar113);
        uVar82 = (uVar85 >> 0xe | uVar85 * 0x40000) ^ uVar85;
        auVar11._0_4_ = auVar7._0_4_ + auVar181._0_4_;
        auVar11._4_4_ = auVar7._4_4_ + auVar181._4_4_;
        auVar11._8_4_ = auVar7._8_4_ + auVar181._8_4_;
        auVar11._12_4_ = auVar7._12_4_ + auVar181._12_4_;
        uVar87 = (uVar66 >> 9 | uVar66 * 0x800000) ^ uVar66;
        piVar2 = piVar71 + 0x28;
        piVar55 = piVar71 + 0x29;
        piVar56 = piVar71 + 0x2a;
        piVar57 = piVar71 + 0x2b;
        uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar85;
        uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar66;
        iVar75 = uVar62 + auStack_f0._12_4_ + ((uVar84 ^ uVar83) & uVar85 ^ uVar83) +
                 (uVar82 >> 6 | uVar82 << 0x1a);
        uVar86 = uVar86 + iVar75;
        uVar62 = (uVar87 >> 2 | uVar87 << 0x1e) +
                 iVar75 + ((uVar63 ^ uVar64) & (uVar66 ^ uVar63) ^ uVar63);
        auStack_f0._4_4_ = auVar11._4_4_ + *piVar55;
        auStack_f0._0_4_ = auVar11._0_4_ + *piVar2;
        auStack_f0._8_4_ = auVar11._8_4_ + *piVar56;
        auStack_f0._12_4_ = auVar11._12_4_ + *piVar57;
        auVar181 = vpalignr_avx(auVar13,auVar12,4);
        auVar150 = vpalignr_avx(auVar11,auVar10,4);
        uVar82 = (uVar86 >> 0xe | uVar86 * 0x40000) ^ uVar86;
        auVar147 = vpsrld_avx(auVar181,7);
        uVar87 = (uVar62 >> 9 | uVar62 * 0x800000) ^ uVar62;
        uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar86;
        auVar180 = vpsrld_avx(auVar181,3);
        auVar129 = vpslld_avx(auVar181,0xe);
        uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar62;
        iVar75 = uVar83 + auStack_e0._0_4_ + ((uVar85 ^ uVar84) & uVar86 ^ uVar84) +
                 (uVar82 >> 6 | uVar82 << 0x1a);
        auVar181 = vpshufd_avx(auVar11,0xfa);
        uVar64 = uVar64 + iVar75;
        auVar148 = vpsrld_avx(auVar147,0xb);
        uVar83 = (uVar87 >> 2 | uVar87 << 0x1e) +
                 iVar75 + ((uVar66 ^ uVar63) & (uVar62 ^ uVar66) ^ uVar66);
        auVar130 = vpslld_avx(auVar129,0xb);
        uVar82 = (uVar64 >> 0xe | uVar64 * 0x40000) ^ uVar64;
        uVar87 = (uVar83 >> 9 | uVar83 * 0x800000) ^ uVar83;
        uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar64;
        auVar149 = vpsrld_avx(auVar181,10);
        auVar130 = auVar180 ^ auVar147 ^ auVar129 ^ auVar148 ^ auVar130;
        auVar181 = vpsrlq_avx(auVar181,0x11);
        uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar83;
        iVar75 = uVar84 + auStack_e0._4_4_ + ((uVar86 ^ uVar85) & uVar64 ^ uVar85) +
                 (uVar82 >> 6 | uVar82 << 0x1a);
        uVar63 = uVar63 + iVar75;
        auVar129 = vpsrlq_avx(auVar181,2);
        uVar84 = (uVar87 >> 2 | uVar87 << 0x1e) +
                 iVar75 + ((uVar62 ^ uVar66) & (uVar83 ^ uVar62) ^ uVar62);
        uVar82 = (uVar63 >> 0xe | uVar63 * 0x40000) ^ uVar63;
        auVar181 = vpshufb_avx(auVar149 ^ auVar181 ^ auVar129,auVar109);
        uVar87 = (uVar84 >> 9 | uVar84 * 0x800000) ^ uVar84;
        auVar8._0_4_ = auVar12._0_4_ + auVar150._0_4_ + auVar130._0_4_ + auVar181._0_4_;
        auVar8._4_4_ = auVar12._4_4_ + auVar150._4_4_ + auVar130._4_4_ + auVar181._4_4_;
        auVar8._8_4_ = auVar12._8_4_ + auVar150._8_4_ + auVar130._8_4_ + auVar181._8_4_;
        auVar8._12_4_ = auVar12._12_4_ + auVar150._12_4_ + auVar130._12_4_ + auVar181._12_4_;
        uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar63;
        auVar181 = vpshufd_avx(auVar8,0x50);
        auVar150 = vpsrld_avx(auVar181,10);
        auVar181 = vpsrlq_avx(auVar181,0x11);
        uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar84;
        iVar75 = uVar85 + auStack_e0._8_4_ + ((uVar64 ^ uVar86) & uVar63 ^ uVar86) +
                 (uVar82 >> 6 | uVar82 << 0x1a);
        uVar66 = uVar66 + iVar75;
        auVar130 = vpsrlq_avx(auVar181,2);
        uVar85 = (uVar87 >> 2 | uVar87 << 0x1e) +
                 iVar75 + ((uVar83 ^ uVar62) & (uVar84 ^ uVar83) ^ uVar83);
        auVar181 = vpshufb_avx(auVar150 ^ auVar181 ^ auVar130,auVar113);
        uVar82 = (uVar66 >> 0xe | uVar66 * 0x40000) ^ uVar66;
        auVar12._0_4_ = auVar8._0_4_ + auVar181._0_4_;
        auVar12._4_4_ = auVar8._4_4_ + auVar181._4_4_;
        auVar12._8_4_ = auVar8._8_4_ + auVar181._8_4_;
        auVar12._12_4_ = auVar8._12_4_ + auVar181._12_4_;
        uVar87 = (uVar85 >> 9 | uVar85 * 0x800000) ^ uVar85;
        piVar3 = piVar71 + 0x30;
        piVar58 = piVar71 + 0x31;
        piVar59 = piVar71 + 0x32;
        piVar46 = piVar71 + 0x33;
        uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar66;
        uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar85;
        iVar75 = uVar86 + auStack_e0._12_4_ + ((uVar63 ^ uVar64) & uVar66 ^ uVar64) +
                 (uVar82 >> 6 | uVar82 << 0x1a);
        uVar62 = uVar62 + iVar75;
        uVar86 = (uVar87 >> 2 | uVar87 << 0x1e) +
                 iVar75 + ((uVar84 ^ uVar83) & (uVar85 ^ uVar84) ^ uVar84);
        auStack_e0._4_4_ = auVar12._4_4_ + *piVar58;
        auStack_e0._0_4_ = auVar12._0_4_ + *piVar3;
        auStack_e0._8_4_ = auVar12._8_4_ + *piVar59;
        auStack_e0._12_4_ = auVar12._12_4_ + *piVar46;
        auVar181 = vpalignr_avx(auVar10,auVar13,4);
        auVar150 = vpalignr_avx(auVar12,auVar11,4);
        uVar82 = (uVar62 >> 0xe | uVar62 * 0x40000) ^ uVar62;
        auVar147 = vpsrld_avx(auVar181,7);
        uVar87 = (uVar86 >> 9 | uVar86 * 0x800000) ^ uVar86;
        uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar62;
        auVar180 = vpsrld_avx(auVar181,3);
        auVar129 = vpslld_avx(auVar181,0xe);
        uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar86;
        iVar75 = uVar64 + auStack_d0._0_4_ + ((uVar66 ^ uVar63) & uVar62 ^ uVar63) +
                 (uVar82 >> 6 | uVar82 << 0x1a);
        auVar181 = vpshufd_avx(auVar12,0xfa);
        uVar83 = uVar83 + iVar75;
        auVar148 = vpsrld_avx(auVar147,0xb);
        uVar64 = (uVar87 >> 2 | uVar87 << 0x1e) +
                 iVar75 + ((uVar85 ^ uVar84) & (uVar86 ^ uVar85) ^ uVar85);
        auVar130 = vpslld_avx(auVar129,0xb);
        uVar82 = (uVar83 >> 0xe | uVar83 * 0x40000) ^ uVar83;
        uVar87 = (uVar64 >> 9 | uVar64 * 0x800000) ^ uVar64;
        uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar83;
        auVar149 = vpsrld_avx(auVar181,10);
        auVar130 = auVar180 ^ auVar147 ^ auVar129 ^ auVar148 ^ auVar130;
        auVar181 = vpsrlq_avx(auVar181,0x11);
        uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar64;
        iVar75 = uVar63 + auStack_d0._4_4_ + ((uVar62 ^ uVar66) & uVar83 ^ uVar66) +
                 (uVar82 >> 6 | uVar82 << 0x1a);
        uVar84 = uVar84 + iVar75;
        auVar129 = vpsrlq_avx(auVar181,2);
        uVar63 = (uVar87 >> 2 | uVar87 << 0x1e) +
                 iVar75 + ((uVar86 ^ uVar85) & (uVar64 ^ uVar86) ^ uVar86);
        uVar82 = (uVar84 >> 0xe | uVar84 * 0x40000) ^ uVar84;
        auVar181 = vpshufb_avx(auVar149 ^ auVar181 ^ auVar129,auVar109);
        uVar87 = (uVar63 >> 9 | uVar63 * 0x800000) ^ uVar63;
        auVar9._0_4_ = auVar13._0_4_ + auVar150._0_4_ + auVar130._0_4_ + auVar181._0_4_;
        auVar9._4_4_ = auVar13._4_4_ + auVar150._4_4_ + auVar130._4_4_ + auVar181._4_4_;
        auVar9._8_4_ = auVar13._8_4_ + auVar150._8_4_ + auVar130._8_4_ + auVar181._8_4_;
        auVar9._12_4_ = auVar13._12_4_ + auVar150._12_4_ + auVar130._12_4_ + auVar181._12_4_;
        uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar84;
        auVar181 = vpshufd_avx(auVar9,0x50);
        auVar150 = vpsrld_avx(auVar181,10);
        auVar181 = vpsrlq_avx(auVar181,0x11);
        uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar63;
        iVar75 = uVar66 + auStack_d0._8_4_ + ((uVar83 ^ uVar62) & uVar84 ^ uVar62) +
                 (uVar82 >> 6 | uVar82 << 0x1a);
        uVar85 = uVar85 + iVar75;
        auVar130 = vpsrlq_avx(auVar181,2);
        uVar66 = (uVar87 >> 2 | uVar87 << 0x1e) +
                 iVar75 + ((uVar64 ^ uVar86) & (uVar63 ^ uVar64) ^ uVar64);
        auVar181 = vpshufb_avx(auVar150 ^ auVar181 ^ auVar130,auVar113);
        uVar82 = (uVar85 >> 0xe | uVar85 * 0x40000) ^ uVar85;
        auVar13._0_4_ = auVar9._0_4_ + auVar181._0_4_;
        auVar13._4_4_ = auVar9._4_4_ + auVar181._4_4_;
        auVar13._8_4_ = auVar9._8_4_ + auVar181._8_4_;
        auVar13._12_4_ = auVar9._12_4_ + auVar181._12_4_;
        uVar65 = (uVar66 >> 9 | uVar66 * 0x800000) ^ uVar66;
        piVar51 = piVar71 + 0x38;
        piVar47 = piVar71 + 0x39;
        piVar48 = piVar71 + 0x3a;
        piVar49 = piVar71 + 0x3b;
        uVar87 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar85;
        uVar82 = uVar66 ^ uVar63;
        uVar65 = (uVar65 >> 0xb | uVar65 << 0x15) ^ uVar66;
        iVar75 = uVar62 + auStack_d0._12_4_ + ((uVar84 ^ uVar83) & uVar85 ^ uVar83) +
                 (uVar87 >> 6 | uVar87 << 0x1a);
        uVar86 = uVar86 + iVar75;
        uVar62 = (uVar65 >> 2 | uVar65 << 0x1e) + iVar75 + ((uVar63 ^ uVar64) & uVar82 ^ uVar63);
        auStack_d0._4_4_ = auVar13._4_4_ + *piVar47;
        auStack_d0._0_4_ = auVar13._0_4_ + *piVar51;
        auStack_d0._8_4_ = auVar13._8_4_ + *piVar48;
        auStack_d0._12_4_ = auVar13._12_4_ + *piVar49;
        pcVar1 = (char *)((longlong)piVar71 + 0x103);
        piVar71 = piVar71 + 0x20;
      } while (*pcVar1 != '\0');
      uVar87 = (uVar86 >> 0xe | uVar86 * 0x40000) ^ uVar86;
      uVar65 = (uVar62 >> 9 | uVar62 * 0x800000) ^ uVar62;
      uVar87 = (uVar87 >> 5 | uVar87 << 0x1b) ^ uVar86;
      uVar65 = (uVar65 >> 0xb | uVar65 << 0x15) ^ uVar62;
      iVar79 = uVar83 + iVar79 + ((uVar85 ^ uVar84) & uVar86 ^ uVar84) +
               (uVar87 >> 6 | uVar87 << 0x1a);
      uVar64 = uVar64 + iVar79;
      uVar83 = (uVar65 >> 2 | uVar65 << 0x1e) + iVar79 + (uVar82 & (uVar62 ^ uVar66) ^ uVar66);
      uVar82 = (uVar64 >> 0xe | uVar64 * 0x40000) ^ uVar64;
      uVar87 = (uVar83 >> 9 | uVar83 * 0x800000) ^ uVar83;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar64;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar83;
      iVar79 = uVar84 + auVar10._4_4_ + *piVar52 + ((uVar86 ^ uVar85) & uVar64 ^ uVar85) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar63 = uVar63 + iVar79;
      uVar84 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar62 ^ uVar66) & (uVar83 ^ uVar62) ^ uVar62);
      uVar82 = (uVar63 >> 0xe | uVar63 * 0x40000) ^ uVar63;
      uVar87 = (uVar84 >> 9 | uVar84 * 0x800000) ^ uVar84;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar63;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar84;
      iVar79 = uVar85 + auVar10._8_4_ + *piVar53 + ((uVar64 ^ uVar86) & uVar63 ^ uVar86) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar66 = uVar66 + iVar79;
      uVar85 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar83 ^ uVar62) & (uVar84 ^ uVar83) ^ uVar83);
      uVar82 = (uVar66 >> 0xe | uVar66 * 0x40000) ^ uVar66;
      uVar87 = (uVar85 >> 9 | uVar85 * 0x800000) ^ uVar85;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar66;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar85;
      iVar79 = uVar86 + auVar10._12_4_ + *piVar54 + ((uVar63 ^ uVar64) & uVar66 ^ uVar64) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar62 = uVar62 + iVar79;
      uVar86 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar84 ^ uVar83) & (uVar85 ^ uVar84) ^ uVar84);
      uVar82 = (uVar62 >> 0xe | uVar62 * 0x40000) ^ uVar62;
      uVar87 = (uVar86 >> 9 | uVar86 * 0x800000) ^ uVar86;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar62;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar86;
      iVar79 = uVar64 + auVar11._0_4_ + *piVar2 + ((uVar66 ^ uVar63) & uVar62 ^ uVar63) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar83 = uVar83 + iVar79;
      uVar64 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar85 ^ uVar84) & (uVar86 ^ uVar85) ^ uVar85);
      uVar82 = (uVar83 >> 0xe | uVar83 * 0x40000) ^ uVar83;
      uVar87 = (uVar64 >> 9 | uVar64 * 0x800000) ^ uVar64;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar83;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar64;
      iVar79 = uVar63 + auVar11._4_4_ + *piVar55 + ((uVar62 ^ uVar66) & uVar83 ^ uVar66) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar84 = uVar84 + iVar79;
      uVar63 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar86 ^ uVar85) & (uVar64 ^ uVar86) ^ uVar86);
      uVar82 = (uVar84 >> 0xe | uVar84 * 0x40000) ^ uVar84;
      uVar87 = (uVar63 >> 9 | uVar63 * 0x800000) ^ uVar63;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar84;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar63;
      iVar79 = uVar66 + auVar11._8_4_ + *piVar56 + ((uVar83 ^ uVar62) & uVar84 ^ uVar62) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar85 = uVar85 + iVar79;
      uVar66 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar64 ^ uVar86) & (uVar63 ^ uVar64) ^ uVar64);
      uVar82 = (uVar85 >> 0xe | uVar85 * 0x40000) ^ uVar85;
      uVar87 = (uVar66 >> 9 | uVar66 * 0x800000) ^ uVar66;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar85;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar66;
      iVar79 = uVar62 + auVar11._12_4_ + *piVar57 + ((uVar84 ^ uVar83) & uVar85 ^ uVar83) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar86 = uVar86 + iVar79;
      uVar62 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar63 ^ uVar64) & (uVar66 ^ uVar63) ^ uVar63);
      uVar82 = (uVar86 >> 0xe | uVar86 * 0x40000) ^ uVar86;
      uVar87 = (uVar62 >> 9 | uVar62 * 0x800000) ^ uVar62;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar86;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar62;
      iVar79 = uVar83 + auVar12._0_4_ + *piVar3 + ((uVar85 ^ uVar84) & uVar86 ^ uVar84) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar64 = uVar64 + iVar79;
      uVar83 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar66 ^ uVar63) & (uVar62 ^ uVar66) ^ uVar66);
      uVar82 = (uVar64 >> 0xe | uVar64 * 0x40000) ^ uVar64;
      uVar87 = (uVar83 >> 9 | uVar83 * 0x800000) ^ uVar83;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar64;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar83;
      iVar79 = uVar84 + auVar12._4_4_ + *piVar58 + ((uVar86 ^ uVar85) & uVar64 ^ uVar85) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar63 = uVar63 + iVar79;
      uVar84 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar62 ^ uVar66) & (uVar83 ^ uVar62) ^ uVar62);
      uVar82 = (uVar63 >> 0xe | uVar63 * 0x40000) ^ uVar63;
      uVar87 = (uVar84 >> 9 | uVar84 * 0x800000) ^ uVar84;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar63;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar84;
      iVar79 = uVar85 + auVar12._8_4_ + *piVar59 + ((uVar64 ^ uVar86) & uVar63 ^ uVar86) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar66 = uVar66 + iVar79;
      uVar85 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar83 ^ uVar62) & (uVar84 ^ uVar83) ^ uVar83);
      uVar82 = (uVar66 >> 0xe | uVar66 * 0x40000) ^ uVar66;
      uVar87 = (uVar85 >> 9 | uVar85 * 0x800000) ^ uVar85;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar66;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar85;
      iVar79 = uVar86 + auVar12._12_4_ + *piVar46 + ((uVar63 ^ uVar64) & uVar66 ^ uVar64) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar62 = uVar62 + iVar79;
      uVar82 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar84 ^ uVar83) & (uVar85 ^ uVar84) ^ uVar84);
      uVar86 = (uVar62 >> 0xe | uVar62 * 0x40000) ^ uVar62;
      uVar87 = (uVar82 >> 9 | uVar82 * 0x800000) ^ uVar82;
      uVar86 = (uVar86 >> 5 | uVar86 << 0x1b) ^ uVar62;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar82;
      iVar79 = uVar64 + auVar13._0_4_ + *piVar51 + ((uVar66 ^ uVar63) & uVar62 ^ uVar63) +
               (uVar86 >> 6 | uVar86 << 0x1a);
      uVar83 = uVar83 + iVar79;
      uVar64 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar85 ^ uVar84) & (uVar82 ^ uVar85) ^ uVar85);
      uVar86 = (uVar83 >> 0xe | uVar83 * 0x40000) ^ uVar83;
      uVar87 = (uVar64 >> 9 | uVar64 * 0x800000) ^ uVar64;
      uVar86 = (uVar86 >> 5 | uVar86 << 0x1b) ^ uVar83;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar64;
      iVar79 = uVar63 + auVar13._4_4_ + *piVar47 + ((uVar62 ^ uVar66) & uVar83 ^ uVar66) +
               (uVar86 >> 6 | uVar86 << 0x1a);
      uVar84 = uVar84 + iVar79;
      uVar63 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar82 ^ uVar85) & (uVar64 ^ uVar82) ^ uVar82);
      uVar86 = (uVar84 >> 0xe | uVar84 * 0x40000) ^ uVar84;
      uVar87 = (uVar63 >> 9 | uVar63 * 0x800000) ^ uVar63;
      uVar86 = (uVar86 >> 5 | uVar86 << 0x1b) ^ uVar84;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar63;
      iVar79 = uVar66 + auVar13._8_4_ + *piVar48 + ((uVar83 ^ uVar62) & uVar84 ^ uVar62) +
               (uVar86 >> 6 | uVar86 << 0x1a);
      uVar85 = uVar85 + iVar79;
      uVar66 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar64 ^ uVar82) & (uVar63 ^ uVar64) ^ uVar64);
      uVar86 = (uVar85 >> 0xe | uVar85 * 0x40000) ^ uVar85;
      uVar87 = (uVar66 >> 9 | uVar66 * 0x800000) ^ uVar66;
      uVar86 = (uVar86 >> 5 | uVar86 << 0x1b) ^ uVar85;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar66;
      iVar79 = uVar62 + auVar13._12_4_ + *piVar49 + ((uVar84 ^ uVar83) & uVar85 ^ uVar83) +
               (uVar86 >> 6 | uVar86 << 0x1a);
      uVar62 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar63 ^ uVar64) & (uVar66 ^ uVar63) ^ uVar63) + *param_1;
      param_2 = param_2 + 4;
      uVar66 = uVar66 + param_1[1];
      uVar63 = uVar63 + param_1[2];
      uVar64 = uVar64 + param_1[3];
      uVar86 = uVar82 + iVar79 + param_1[4];
      uVar85 = uVar85 + param_1[5];
      uVar84 = uVar84 + param_1[6];
      uVar83 = uVar83 + param_1[7];
      *param_1 = uVar62;
      param_1[1] = uVar66;
      param_1[2] = uVar63;
      param_1[3] = uVar64;
      param_1[4] = uVar86;
      param_1[5] = uVar85;
      param_1[6] = uVar84;
      param_1[7] = uVar83;
    } while (param_2 < pauVar73);
    return;
  }
  if ((DAT_15540a9f4 & 0x200) == 0) {
    pauVar73 = param_2 + param_3 * 4;
    uVar62 = *param_1;
    uVar66 = param_1[1];
    uVar63 = param_1[2];
    uVar64 = param_1[3];
    uVar86 = param_1[4];
    uVar85 = param_1[5];
    uVar84 = param_1[6];
    uVar83 = param_1[7];
    do {
      uVar82 = *(uint *)*param_2;
      local_c0 = uVar82 >> 0x18 | (uVar82 & 0xff0000) >> 8 | (uVar82 & 0xff00) << 8 | uVar82 << 0x18
      ;
      uVar82 = (uVar86 >> 0xe | uVar86 << 0x12) ^ uVar86;
      uVar87 = (uVar62 >> 9 | uVar62 << 0x17) ^ uVar62;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar86;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar62;
      iVar79 = local_c0 + uVar83 + ((uVar85 ^ uVar84) & uVar86 ^ uVar84) + K256 +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar64 = uVar64 + iVar79;
      uVar78 = (uVar66 ^ (uVar66 ^ uVar63) & (uVar62 ^ uVar66)) + iVar79 +
               (uVar87 >> 2 | uVar87 << 0x1e);
      uVar83 = *(uint *)(*param_2 + 4);
      local_bc = uVar83 >> 0x18 | (uVar83 & 0xff0000) >> 8 | (uVar83 & 0xff00) << 8 | uVar83 << 0x18
      ;
      uVar83 = (uVar64 >> 0xe | uVar64 * 0x40000) ^ uVar64;
      uVar82 = (uVar78 >> 9 | uVar78 * 0x800000) ^ uVar78;
      uVar83 = (uVar83 >> 5 | uVar83 << 0x1b) ^ uVar64;
      uVar82 = (uVar82 >> 0xb | uVar82 << 0x15) ^ uVar78;
      iVar79 = local_bc + uVar84 + ((uVar86 ^ uVar85) & uVar64 ^ uVar85) + DAT_140deeec4 +
               (uVar83 >> 6 | uVar83 << 0x1a);
      uVar63 = uVar63 + iVar79;
      uVar77 = (uVar62 ^ (uVar62 ^ uVar66) & (uVar78 ^ uVar62)) + iVar79 +
               (uVar82 >> 2 | uVar82 << 0x1e);
      uVar84 = *(uint *)(*param_2 + 8);
      local_b8 = uVar84 >> 0x18 | (uVar84 & 0xff0000) >> 8 | (uVar84 & 0xff00) << 8 | uVar84 << 0x18
      ;
      uVar84 = (uVar63 >> 0xe | uVar63 * 0x40000) ^ uVar63;
      uVar83 = (uVar77 >> 9 | uVar77 * 0x800000) ^ uVar77;
      uVar84 = (uVar84 >> 5 | uVar84 << 0x1b) ^ uVar63;
      uVar83 = (uVar83 >> 0xb | uVar83 << 0x15) ^ uVar77;
      iVar79 = local_b8 + uVar85 + ((uVar64 ^ uVar86) & uVar63 ^ uVar86) + DAT_140deeec8 +
               (uVar84 >> 6 | uVar84 << 0x1a);
      uVar66 = uVar66 + iVar79;
      uVar76 = (uVar78 ^ (uVar78 ^ uVar62) & (uVar77 ^ uVar78)) + iVar79 +
               (uVar83 >> 2 | uVar83 << 0x1e);
      uVar85 = *(uint *)(*param_2 + 0xc);
      local_b4 = uVar85 >> 0x18 | (uVar85 & 0xff0000) >> 8 | (uVar85 & 0xff00) << 8 | uVar85 << 0x18
      ;
      uVar85 = (uVar66 >> 0xe | uVar66 * 0x40000) ^ uVar66;
      uVar84 = (uVar76 >> 9 | uVar76 * 0x800000) ^ uVar76;
      uVar85 = (uVar85 >> 5 | uVar85 << 0x1b) ^ uVar66;
      uVar84 = (uVar84 >> 0xb | uVar84 << 0x15) ^ uVar76;
      iVar79 = local_b4 + uVar86 + ((uVar63 ^ uVar64) & uVar66 ^ uVar64) + DAT_140deeecc +
               (uVar85 >> 6 | uVar85 << 0x1a);
      uVar62 = uVar62 + iVar79;
      uVar74 = (uVar77 ^ (uVar77 ^ uVar78) & (uVar76 ^ uVar77)) + iVar79 +
               (uVar84 >> 2 | uVar84 << 0x1e);
      uVar86 = *(uint *)param_2[1];
      local_b0 = uVar86 >> 0x18 | (uVar86 & 0xff0000) >> 8 | (uVar86 & 0xff00) << 8 | uVar86 << 0x18
      ;
      uVar86 = (uVar62 >> 0xe | uVar62 * 0x40000) ^ uVar62;
      uVar85 = (uVar74 >> 9 | uVar74 * 0x800000) ^ uVar74;
      uVar86 = (uVar86 >> 5 | uVar86 << 0x1b) ^ uVar62;
      uVar85 = (uVar85 >> 0xb | uVar85 << 0x15) ^ uVar74;
      iVar79 = local_b0 + uVar64 + ((uVar66 ^ uVar63) & uVar62 ^ uVar63) + DAT_140deeee0 +
               (uVar86 >> 6 | uVar86 << 0x1a);
      uVar78 = uVar78 + iVar79;
      uVar65 = (uVar76 ^ (uVar76 ^ uVar77) & (uVar74 ^ uVar76)) + iVar79 +
               (uVar85 >> 2 | uVar85 << 0x1e);
      uVar64 = *(uint *)(param_2[1] + 4);
      local_ac = uVar64 >> 0x18 | (uVar64 & 0xff0000) >> 8 | (uVar64 & 0xff00) << 8 | uVar64 << 0x18
      ;
      uVar64 = (uVar78 >> 0xe | uVar78 * 0x40000) ^ uVar78;
      uVar86 = (uVar65 >> 9 | uVar65 * 0x800000) ^ uVar65;
      uVar64 = (uVar64 >> 5 | uVar64 << 0x1b) ^ uVar78;
      uVar86 = (uVar86 >> 0xb | uVar86 << 0x15) ^ uVar65;
      iVar79 = local_ac + uVar63 + ((uVar62 ^ uVar66) & uVar78 ^ uVar66) + DAT_140deeee4 +
               (uVar64 >> 6 | uVar64 << 0x1a);
      uVar77 = uVar77 + iVar79;
      uVar87 = (uVar74 ^ (uVar74 ^ uVar76) & (uVar65 ^ uVar74)) + iVar79 +
               (uVar86 >> 2 | uVar86 << 0x1e);
      uVar63 = *(uint *)(param_2[1] + 8);
      uVar80 = uVar63 >> 0x18 | (uVar63 & 0xff0000) >> 8 | (uVar63 & 0xff00) << 8 | uVar63 << 0x18;
      uVar63 = (uVar77 >> 0xe | uVar77 * 0x40000) ^ uVar77;
      uVar64 = (uVar87 >> 9 | uVar87 * 0x800000) ^ uVar87;
      uVar63 = (uVar63 >> 5 | uVar63 << 0x1b) ^ uVar77;
      uVar64 = (uVar64 >> 0xb | uVar64 << 0x15) ^ uVar87;
      iVar79 = uVar80 + uVar66 + ((uVar78 ^ uVar62) & uVar77 ^ uVar62) + DAT_140deeee8 +
               (uVar63 >> 6 | uVar63 << 0x1a);
      uVar76 = uVar76 + iVar79;
      uVar67 = (uVar65 ^ (uVar65 ^ uVar74) & (uVar87 ^ uVar65)) + iVar79 +
               (uVar64 >> 2 | uVar64 << 0x1e);
      uVar66 = *(uint *)(param_2[1] + 0xc);
      uVar81 = uVar66 >> 0x18 | (uVar66 & 0xff0000) >> 8 | (uVar66 & 0xff00) << 8 | uVar66 << 0x18;
      uVar66 = (uVar76 >> 0xe | uVar76 * 0x40000) ^ uVar76;
      uVar63 = (uVar67 >> 9 | uVar67 * 0x800000) ^ uVar67;
      uVar66 = (uVar66 >> 5 | uVar66 << 0x1b) ^ uVar76;
      uVar63 = (uVar63 >> 0xb | uVar63 << 0x15) ^ uVar67;
      iVar79 = uVar81 + uVar62 + ((uVar77 ^ uVar78) & uVar76 ^ uVar78) + DAT_140deeeec +
               (uVar66 >> 6 | uVar66 << 0x1a);
      uVar74 = uVar74 + iVar79;
      uVar82 = (uVar87 ^ (uVar87 ^ uVar65) & (uVar67 ^ uVar87)) + iVar79 +
               (uVar63 >> 2 | uVar63 << 0x1e);
      uVar62 = *(uint *)param_2[2];
      local_a0 = uVar62 >> 0x18 | (uVar62 & 0xff0000) >> 8 | (uVar62 & 0xff00) << 8 | uVar62 << 0x18
      ;
      uVar62 = (uVar74 >> 0xe | uVar74 * 0x40000) ^ uVar74;
      uVar66 = (uVar82 >> 9 | uVar82 * 0x800000) ^ uVar82;
      uVar62 = (uVar62 >> 5 | uVar62 << 0x1b) ^ uVar74;
      uVar66 = (uVar66 >> 0xb | uVar66 << 0x15) ^ uVar82;
      iVar79 = local_a0 + uVar78 + ((uVar76 ^ uVar77) & uVar74 ^ uVar77) + DAT_140deef00 +
               (uVar62 >> 6 | uVar62 << 0x1a);
      uVar65 = uVar65 + iVar79;
      uVar83 = (uVar67 ^ (uVar67 ^ uVar87) & (uVar82 ^ uVar67)) + iVar79 +
               (uVar66 >> 2 | uVar66 << 0x1e);
      uVar62 = *(uint *)(param_2[2] + 4);
      local_9c = uVar62 >> 0x18 | (uVar62 & 0xff0000) >> 8 | (uVar62 & 0xff00) << 8 | uVar62 << 0x18
      ;
      uVar62 = (uVar65 >> 0xe | uVar65 * 0x40000) ^ uVar65;
      uVar66 = (uVar83 >> 9 | uVar83 * 0x800000) ^ uVar83;
      uVar62 = (uVar62 >> 5 | uVar62 << 0x1b) ^ uVar65;
      uVar66 = (uVar66 >> 0xb | uVar66 << 0x15) ^ uVar83;
      iVar79 = local_9c + uVar77 + ((uVar74 ^ uVar76) & uVar65 ^ uVar76) + DAT_140deef04 +
               (uVar62 >> 6 | uVar62 << 0x1a);
      uVar87 = uVar87 + iVar79;
      uVar84 = (uVar82 ^ (uVar82 ^ uVar67) & (uVar83 ^ uVar82)) + iVar79 +
               (uVar66 >> 2 | uVar66 << 0x1e);
      uVar62 = *(uint *)(param_2[2] + 8);
      local_98 = uVar62 >> 0x18 | (uVar62 & 0xff0000) >> 8 | (uVar62 & 0xff00) << 8 | uVar62 << 0x18
      ;
      uVar62 = (uVar87 >> 0xe | uVar87 * 0x40000) ^ uVar87;
      uVar66 = (uVar84 >> 9 | uVar84 * 0x800000) ^ uVar84;
      uVar62 = (uVar62 >> 5 | uVar62 << 0x1b) ^ uVar87;
      uVar66 = (uVar66 >> 0xb | uVar66 << 0x15) ^ uVar84;
      iVar79 = local_98 + uVar76 + ((uVar65 ^ uVar74) & uVar87 ^ uVar74) + DAT_140deef08 +
               (uVar62 >> 6 | uVar62 << 0x1a);
      uVar67 = uVar67 + iVar79;
      uVar85 = (uVar83 ^ (uVar83 ^ uVar82) & (uVar84 ^ uVar83)) + iVar79 +
               (uVar66 >> 2 | uVar66 << 0x1e);
      uVar62 = *(uint *)(param_2[2] + 0xc);
      local_94 = uVar62 >> 0x18 | (uVar62 & 0xff0000) >> 8 | (uVar62 & 0xff00) << 8 | uVar62 << 0x18
      ;
      uVar62 = (uVar67 >> 0xe | uVar67 * 0x40000) ^ uVar67;
      uVar66 = (uVar85 >> 9 | uVar85 * 0x800000) ^ uVar85;
      uVar62 = (uVar62 >> 5 | uVar62 << 0x1b) ^ uVar67;
      uVar66 = (uVar66 >> 0xb | uVar66 << 0x15) ^ uVar85;
      iVar79 = local_94 + uVar74 + ((uVar87 ^ uVar65) & uVar67 ^ uVar65) + DAT_140deef0c +
               (uVar62 >> 6 | uVar62 << 0x1a);
      uVar82 = uVar82 + iVar79;
      uVar86 = (uVar84 ^ (uVar84 ^ uVar83) & (uVar85 ^ uVar84)) + iVar79 +
               (uVar66 >> 2 | uVar66 << 0x1e);
      uVar62 = *(uint *)param_2[3];
      local_90 = uVar62 >> 0x18 | (uVar62 & 0xff0000) >> 8 | (uVar62 & 0xff00) << 8 | uVar62 << 0x18
      ;
      uVar62 = (uVar82 >> 0xe | uVar82 * 0x40000) ^ uVar82;
      uVar66 = (uVar86 >> 9 | uVar86 * 0x800000) ^ uVar86;
      uVar62 = (uVar62 >> 5 | uVar62 << 0x1b) ^ uVar82;
      uVar66 = (uVar66 >> 0xb | uVar66 << 0x15) ^ uVar86;
      iVar79 = local_90 + uVar65 + ((uVar67 ^ uVar87) & uVar82 ^ uVar87) + DAT_140deef20 +
               (uVar62 >> 6 | uVar62 << 0x1a);
      uVar83 = uVar83 + iVar79;
      uVar64 = (uVar85 ^ (uVar85 ^ uVar84) & (uVar86 ^ uVar85)) + iVar79 +
               (uVar66 >> 2 | uVar66 << 0x1e);
      uVar62 = *(uint *)(param_2[3] + 4);
      local_8c = uVar62 >> 0x18 | (uVar62 & 0xff0000) >> 8 | (uVar62 & 0xff00) << 8 | uVar62 << 0x18
      ;
      uVar62 = (uVar83 >> 0xe | uVar83 * 0x40000) ^ uVar83;
      uVar66 = (uVar64 >> 9 | uVar64 * 0x800000) ^ uVar64;
      uVar62 = (uVar62 >> 5 | uVar62 << 0x1b) ^ uVar83;
      uVar66 = (uVar66 >> 0xb | uVar66 << 0x15) ^ uVar64;
      iVar79 = local_8c + uVar87 + ((uVar82 ^ uVar67) & uVar83 ^ uVar67) + DAT_140deef24 +
               (uVar62 >> 6 | uVar62 << 0x1a);
      uVar84 = uVar84 + iVar79;
      uVar63 = (uVar86 ^ (uVar86 ^ uVar85) & (uVar64 ^ uVar86)) + iVar79 +
               (uVar66 >> 2 | uVar66 << 0x1e);
      uVar62 = *(uint *)(param_2[3] + 8);
      local_88 = uVar62 >> 0x18 | (uVar62 & 0xff0000) >> 8 | (uVar62 & 0xff00) << 8 | uVar62 << 0x18
      ;
      uVar62 = (uVar84 >> 0xe | uVar84 * 0x40000) ^ uVar84;
      uVar66 = (uVar63 >> 9 | uVar63 * 0x800000) ^ uVar63;
      uVar62 = (uVar62 >> 5 | uVar62 << 0x1b) ^ uVar84;
      uVar66 = (uVar66 >> 0xb | uVar66 << 0x15) ^ uVar63;
      iVar79 = local_88 + uVar67 + ((uVar83 ^ uVar82) & uVar84 ^ uVar82) + DAT_140deef28 +
               (uVar62 >> 6 | uVar62 << 0x1a);
      uVar85 = uVar85 + iVar79;
      uVar66 = (uVar64 ^ (uVar64 ^ uVar86) & (uVar63 ^ uVar64)) + iVar79 +
               (uVar66 >> 2 | uVar66 << 0x1e);
      uVar62 = *(uint *)(param_2[3] + 0xc);
      local_84 = uVar62 >> 0x18 | (uVar62 & 0xff0000) >> 8 | (uVar62 & 0xff00) << 8 | uVar62 << 0x18
      ;
      uVar62 = (uVar85 >> 0xe | uVar85 * 0x40000) ^ uVar85;
      uVar87 = (uVar66 >> 9 | uVar66 * 0x800000) ^ uVar66;
      uVar65 = (uVar62 >> 5 | uVar62 << 0x1b) ^ uVar85;
      uVar62 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar66;
      uVar87 = uVar66 ^ uVar63;
      uVar62 = uVar62 >> 2 | uVar62 << 0x1e;
      iVar79 = local_84 + uVar82 + ((uVar84 ^ uVar83) & uVar85 ^ uVar83) + DAT_140deef2c +
               (uVar65 >> 6 | uVar65 << 0x1a);
      uVar86 = uVar86 + iVar79;
      iVar79 = (uVar63 ^ (uVar63 ^ uVar64) & uVar87) + iVar79;
      piVar71 = &DAT_140deef40;
      do {
        uVar62 = iVar79 + uVar62;
        uVar82 = (local_bc >> 0xb | local_bc << 0x15) ^ local_bc;
        uVar65 = (local_88 >> 2 | local_88 << 0x1e) ^ local_88;
        local_c0 = (local_bc >> 3 ^ (uVar82 >> 7 | uVar82 << 0x19)) + local_9c + local_c0 +
                   ((uVar65 >> 0x11 | uVar65 << 0xf) ^ local_88 >> 10);
        uVar82 = (uVar86 >> 0xe | uVar86 << 0x12) ^ uVar86;
        uVar65 = (uVar62 >> 9 | uVar62 * 0x800000) ^ uVar62;
        uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar86;
        uVar65 = (uVar65 >> 0xb | uVar65 << 0x15) ^ uVar62;
        iVar79 = local_c0 + uVar83 + ((uVar85 ^ uVar84) & uVar86 ^ uVar84) + *piVar71 +
                 (uVar82 >> 6 | uVar82 << 0x1a);
        uVar64 = uVar64 + iVar79;
        uVar67 = (uVar66 ^ uVar87 & (uVar62 ^ uVar66)) + iVar79 + (uVar65 >> 2 | uVar65 << 0x1e);
        uVar82 = (local_b8 >> 0xb | local_b8 << 0x15) ^ local_b8;
        uVar83 = (local_84 >> 2 | local_84 << 0x1e) ^ local_84;
        local_bc = (local_b8 >> 3 ^ (uVar82 >> 7 | uVar82 << 0x19)) + local_98 + local_bc +
                   ((uVar83 >> 0x11 | uVar83 << 0xf) ^ local_84 >> 10);
        uVar83 = (uVar64 >> 0xe | uVar64 * 0x40000) ^ uVar64;
        uVar82 = (uVar67 >> 9 | uVar67 * 0x800000) ^ uVar67;
        uVar83 = (uVar83 >> 5 | uVar83 << 0x1b) ^ uVar64;
        uVar82 = (uVar82 >> 0xb | uVar82 << 0x15) ^ uVar67;
        iVar79 = local_bc + uVar84 + ((uVar86 ^ uVar85) & uVar64 ^ uVar85) + piVar71[1] +
                 (uVar83 >> 6 | uVar83 << 0x1a);
        uVar63 = uVar63 + iVar79;
        uVar84 = (uVar62 ^ (uVar62 ^ uVar66) & (uVar67 ^ uVar62)) + iVar79 +
                 (uVar82 >> 2 | uVar82 << 0x1e);
        uVar83 = (local_b4 >> 0xb | local_b4 << 0x15) ^ local_b4;
        uVar82 = (local_c0 >> 2 | local_c0 * 0x40000000) ^ local_c0;
        local_b8 = (local_b4 >> 3 ^ (uVar83 >> 7 | uVar83 << 0x19)) + local_94 + local_b8 +
                   ((uVar82 >> 0x11 | uVar82 << 0xf) ^ local_c0 >> 10);
        uVar83 = (uVar63 >> 0xe | uVar63 * 0x40000) ^ uVar63;
        uVar82 = (uVar84 >> 9 | uVar84 * 0x800000) ^ uVar84;
        uVar83 = (uVar83 >> 5 | uVar83 << 0x1b) ^ uVar63;
        uVar82 = (uVar82 >> 0xb | uVar82 << 0x15) ^ uVar84;
        iVar79 = local_b8 + uVar85 + ((uVar64 ^ uVar86) & uVar63 ^ uVar86) + piVar71[2] +
                 (uVar83 >> 6 | uVar83 << 0x1a);
        uVar66 = uVar66 + iVar79;
        uVar65 = (uVar67 ^ (uVar67 ^ uVar62) & (uVar84 ^ uVar67)) + iVar79 +
                 (uVar82 >> 2 | uVar82 << 0x1e);
        uVar83 = (local_b0 >> 0xb | local_b0 << 0x15) ^ local_b0;
        uVar85 = (local_bc >> 2 | local_bc * 0x40000000) ^ local_bc;
        local_b4 = (local_b0 >> 3 ^ (uVar83 >> 7 | uVar83 << 0x19)) + local_90 + local_b4 +
                   ((uVar85 >> 0x11 | uVar85 << 0xf) ^ local_bc >> 10);
        uVar85 = (uVar66 >> 0xe | uVar66 * 0x40000) ^ uVar66;
        uVar83 = (uVar65 >> 9 | uVar65 * 0x800000) ^ uVar65;
        uVar85 = (uVar85 >> 5 | uVar85 << 0x1b) ^ uVar66;
        uVar83 = (uVar83 >> 0xb | uVar83 << 0x15) ^ uVar65;
        iVar79 = local_b4 + uVar86 + ((uVar63 ^ uVar64) & uVar66 ^ uVar64) + piVar71[3] +
                 (uVar85 >> 6 | uVar85 << 0x1a);
        uVar62 = uVar62 + iVar79;
        uVar87 = (uVar84 ^ (uVar84 ^ uVar67) & (uVar65 ^ uVar84)) + iVar79 +
                 (uVar83 >> 2 | uVar83 << 0x1e);
        uVar86 = (local_ac >> 0xb | local_ac << 0x15) ^ local_ac;
        uVar85 = (local_b8 >> 2 | local_b8 * 0x40000000) ^ local_b8;
        local_b0 = (local_ac >> 3 ^ (uVar86 >> 7 | uVar86 << 0x19)) + local_8c + local_b0 +
                   ((uVar85 >> 0x11 | uVar85 << 0xf) ^ local_b8 >> 10);
        uVar86 = (uVar62 >> 0xe | uVar62 * 0x40000) ^ uVar62;
        uVar85 = (uVar87 >> 9 | uVar87 * 0x800000) ^ uVar87;
        uVar86 = (uVar86 >> 5 | uVar86 << 0x1b) ^ uVar62;
        uVar85 = (uVar85 >> 0xb | uVar85 << 0x15) ^ uVar87;
        iVar79 = local_b0 + uVar64 + ((uVar66 ^ uVar63) & uVar62 ^ uVar63) + piVar71[8] +
                 (uVar86 >> 6 | uVar86 << 0x1a);
        uVar67 = uVar67 + iVar79;
        uVar64 = (uVar65 ^ (uVar65 ^ uVar84) & (uVar87 ^ uVar65)) + iVar79 +
                 (uVar85 >> 2 | uVar85 << 0x1e);
        uVar85 = (uVar80 >> 0xb | uVar80 << 0x15) ^ uVar80;
        uVar86 = (local_b4 >> 2 | local_b4 * 0x40000000) ^ local_b4;
        local_ac = (uVar80 >> 3 ^ (uVar85 >> 7 | uVar85 << 0x19)) + local_88 + local_ac +
                   ((uVar86 >> 0x11 | uVar86 << 0xf) ^ local_b4 >> 10);
        uVar86 = (uVar67 >> 0xe | uVar67 * 0x40000) ^ uVar67;
        uVar85 = (uVar64 >> 9 | uVar64 * 0x800000) ^ uVar64;
        uVar86 = (uVar86 >> 5 | uVar86 << 0x1b) ^ uVar67;
        uVar85 = (uVar85 >> 0xb | uVar85 << 0x15) ^ uVar64;
        iVar79 = local_ac + uVar63 + ((uVar62 ^ uVar66) & uVar67 ^ uVar66) + piVar71[9] +
                 (uVar86 >> 6 | uVar86 << 0x1a);
        uVar84 = uVar84 + iVar79;
        uVar63 = (uVar87 ^ (uVar87 ^ uVar65) & (uVar64 ^ uVar87)) + iVar79 +
                 (uVar85 >> 2 | uVar85 << 0x1e);
        uVar86 = (uVar81 >> 0xb | uVar81 << 0x15) ^ uVar81;
        uVar85 = (local_b0 >> 2 | local_b0 * 0x40000000) ^ local_b0;
        uVar80 = (uVar81 >> 3 ^ (uVar86 >> 7 | uVar86 << 0x19)) + local_84 + uVar80 +
                 ((uVar85 >> 0x11 | uVar85 << 0xf) ^ local_b0 >> 10);
        uVar86 = (uVar84 >> 0xe | uVar84 * 0x40000) ^ uVar84;
        uVar85 = (uVar63 >> 9 | uVar63 * 0x800000) ^ uVar63;
        uVar86 = (uVar86 >> 5 | uVar86 << 0x1b) ^ uVar84;
        uVar85 = (uVar85 >> 0xb | uVar85 << 0x15) ^ uVar63;
        iVar79 = uVar80 + uVar66 + ((uVar67 ^ uVar62) & uVar84 ^ uVar62) + piVar71[10] +
                 (uVar86 >> 6 | uVar86 << 0x1a);
        uVar65 = uVar65 + iVar79;
        uVar66 = (uVar64 ^ (uVar64 ^ uVar87) & (uVar63 ^ uVar64)) + iVar79 +
                 (uVar85 >> 2 | uVar85 << 0x1e);
        uVar85 = (local_a0 >> 0xb | local_a0 << 0x15) ^ local_a0;
        uVar86 = (local_ac >> 2 | local_ac * 0x40000000) ^ local_ac;
        uVar81 = (local_a0 >> 3 ^ (uVar85 >> 7 | uVar85 << 0x19)) + local_c0 + uVar81 +
                 ((uVar86 >> 0x11 | uVar86 << 0xf) ^ local_ac >> 10);
        uVar86 = (uVar65 >> 0xe | uVar65 * 0x40000) ^ uVar65;
        uVar85 = (uVar66 >> 9 | uVar66 * 0x800000) ^ uVar66;
        uVar86 = (uVar86 >> 5 | uVar86 << 0x1b) ^ uVar65;
        uVar85 = (uVar85 >> 0xb | uVar85 << 0x15) ^ uVar66;
        iVar79 = uVar81 + uVar62 + ((uVar84 ^ uVar67) & uVar65 ^ uVar67) + piVar71[0xb] +
                 (uVar86 >> 6 | uVar86 << 0x1a);
        uVar87 = uVar87 + iVar79;
        uVar82 = (uVar63 ^ (uVar63 ^ uVar64) & (uVar66 ^ uVar63)) + iVar79 +
                 (uVar85 >> 2 | uVar85 << 0x1e);
        uVar62 = (local_9c >> 0xb | local_9c << 0x15) ^ local_9c;
        uVar86 = (uVar80 >> 2 | uVar80 * 0x40000000) ^ uVar80;
        local_a0 = (local_9c >> 3 ^ (uVar62 >> 7 | uVar62 << 0x19)) + local_bc + local_a0 +
                   ((uVar86 >> 0x11 | uVar86 << 0xf) ^ uVar80 >> 10);
        uVar62 = (uVar87 >> 0xe | uVar87 * 0x40000) ^ uVar87;
        uVar86 = (uVar82 >> 9 | uVar82 * 0x800000) ^ uVar82;
        uVar62 = (uVar62 >> 5 | uVar62 << 0x1b) ^ uVar87;
        uVar86 = (uVar86 >> 0xb | uVar86 << 0x15) ^ uVar82;
        iVar79 = local_a0 + uVar67 + ((uVar65 ^ uVar84) & uVar87 ^ uVar84) + piVar71[0x10] +
                 (uVar62 >> 6 | uVar62 << 0x1a);
        uVar64 = uVar64 + iVar79;
        uVar83 = (uVar66 ^ (uVar66 ^ uVar63) & (uVar82 ^ uVar66)) + iVar79 +
                 (uVar86 >> 2 | uVar86 << 0x1e);
        uVar86 = (local_98 >> 0xb | local_98 << 0x15) ^ local_98;
        uVar62 = (uVar81 >> 2 | uVar81 * 0x40000000) ^ uVar81;
        local_9c = (local_98 >> 3 ^ (uVar86 >> 7 | uVar86 << 0x19)) + local_b8 + local_9c +
                   ((uVar62 >> 0x11 | uVar62 << 0xf) ^ uVar81 >> 10);
        uVar62 = (uVar64 >> 0xe | uVar64 * 0x40000) ^ uVar64;
        uVar86 = (uVar83 >> 9 | uVar83 * 0x800000) ^ uVar83;
        uVar62 = (uVar62 >> 5 | uVar62 << 0x1b) ^ uVar64;
        uVar86 = (uVar86 >> 0xb | uVar86 << 0x15) ^ uVar83;
        iVar79 = local_9c + uVar84 + ((uVar87 ^ uVar65) & uVar64 ^ uVar65) + piVar71[0x11] +
                 (uVar62 >> 6 | uVar62 << 0x1a);
        uVar63 = uVar63 + iVar79;
        uVar84 = (uVar82 ^ (uVar82 ^ uVar66) & (uVar83 ^ uVar82)) + iVar79 +
                 (uVar86 >> 2 | uVar86 << 0x1e);
        uVar62 = (local_94 >> 0xb | local_94 << 0x15) ^ local_94;
        uVar86 = (local_a0 >> 2 | local_a0 * 0x40000000) ^ local_a0;
        local_98 = (local_94 >> 3 ^ (uVar62 >> 7 | uVar62 << 0x19)) + local_b4 + local_98 +
                   ((uVar86 >> 0x11 | uVar86 << 0xf) ^ local_a0 >> 10);
        uVar62 = (uVar63 >> 0xe | uVar63 * 0x40000) ^ uVar63;
        uVar86 = (uVar84 >> 9 | uVar84 * 0x800000) ^ uVar84;
        uVar62 = (uVar62 >> 5 | uVar62 << 0x1b) ^ uVar63;
        uVar86 = (uVar86 >> 0xb | uVar86 << 0x15) ^ uVar84;
        iVar79 = local_98 + uVar65 + ((uVar64 ^ uVar87) & uVar63 ^ uVar87) + piVar71[0x12] +
                 (uVar62 >> 6 | uVar62 << 0x1a);
        uVar66 = uVar66 + iVar79;
        uVar85 = (uVar83 ^ (uVar83 ^ uVar82) & (uVar84 ^ uVar83)) + iVar79 +
                 (uVar86 >> 2 | uVar86 << 0x1e);
        uVar86 = (local_90 >> 0xb | local_90 << 0x15) ^ local_90;
        uVar62 = (local_9c >> 2 | local_9c * 0x40000000) ^ local_9c;
        local_94 = (local_90 >> 3 ^ (uVar86 >> 7 | uVar86 << 0x19)) + local_b0 + local_94 +
                   ((uVar62 >> 0x11 | uVar62 << 0xf) ^ local_9c >> 10);
        uVar62 = (uVar66 >> 0xe | uVar66 * 0x40000) ^ uVar66;
        uVar86 = (uVar85 >> 9 | uVar85 * 0x800000) ^ uVar85;
        uVar62 = (uVar62 >> 5 | uVar62 << 0x1b) ^ uVar66;
        uVar86 = (uVar86 >> 0xb | uVar86 << 0x15) ^ uVar85;
        iVar79 = local_94 + uVar87 + ((uVar63 ^ uVar64) & uVar66 ^ uVar64) + piVar71[0x13] +
                 (uVar62 >> 6 | uVar62 << 0x1a);
        uVar82 = uVar82 + iVar79;
        uVar86 = (uVar84 ^ (uVar84 ^ uVar83) & (uVar85 ^ uVar84)) + iVar79 +
                 (uVar86 >> 2 | uVar86 << 0x1e);
        uVar62 = (local_8c >> 0xb | local_8c << 0x15) ^ local_8c;
        uVar87 = (local_98 >> 2 | local_98 * 0x40000000) ^ local_98;
        local_90 = (local_8c >> 3 ^ (uVar62 >> 7 | uVar62 << 0x19)) + local_ac + local_90 +
                   ((uVar87 >> 0x11 | uVar87 << 0xf) ^ local_98 >> 10);
        uVar62 = (uVar82 >> 0xe | uVar82 * 0x40000) ^ uVar82;
        uVar87 = (uVar86 >> 9 | uVar86 * 0x800000) ^ uVar86;
        uVar62 = (uVar62 >> 5 | uVar62 << 0x1b) ^ uVar82;
        uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar86;
        iVar79 = local_90 + uVar64 + ((uVar66 ^ uVar63) & uVar82 ^ uVar63) + piVar71[0x18] +
                 (uVar62 >> 6 | uVar62 << 0x1a);
        uVar83 = uVar83 + iVar79;
        uVar64 = (uVar85 ^ (uVar85 ^ uVar84) & (uVar86 ^ uVar85)) + iVar79 +
                 (uVar87 >> 2 | uVar87 << 0x1e);
        uVar87 = (local_88 >> 0xb | local_88 << 0x15) ^ local_88;
        uVar62 = (local_94 >> 2 | local_94 * 0x40000000) ^ local_94;
        local_8c = (local_88 >> 3 ^ (uVar87 >> 7 | uVar87 << 0x19)) + uVar80 + local_8c +
                   ((uVar62 >> 0x11 | uVar62 << 0xf) ^ local_94 >> 10);
        uVar62 = (uVar83 >> 0xe | uVar83 * 0x40000) ^ uVar83;
        uVar87 = (uVar64 >> 9 | uVar64 * 0x800000) ^ uVar64;
        uVar62 = (uVar62 >> 5 | uVar62 << 0x1b) ^ uVar83;
        uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar64;
        iVar79 = local_8c + uVar63 + ((uVar82 ^ uVar66) & uVar83 ^ uVar66) + piVar71[0x19] +
                 (uVar62 >> 6 | uVar62 << 0x1a);
        uVar84 = uVar84 + iVar79;
        uVar63 = (uVar86 ^ (uVar86 ^ uVar85) & (uVar64 ^ uVar86)) + iVar79 +
                 (uVar87 >> 2 | uVar87 << 0x1e);
        uVar62 = (local_84 >> 0xb | local_84 << 0x15) ^ local_84;
        uVar87 = (local_90 >> 2 | local_90 * 0x40000000) ^ local_90;
        local_88 = (local_84 >> 3 ^ (uVar62 >> 7 | uVar62 << 0x19)) + uVar81 + local_88 +
                   ((uVar87 >> 0x11 | uVar87 << 0xf) ^ local_90 >> 10);
        uVar62 = (uVar84 >> 0xe | uVar84 * 0x40000) ^ uVar84;
        uVar87 = (uVar63 >> 9 | uVar63 * 0x800000) ^ uVar63;
        uVar62 = (uVar62 >> 5 | uVar62 << 0x1b) ^ uVar84;
        uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar63;
        iVar79 = local_88 + uVar66 + ((uVar83 ^ uVar82) & uVar84 ^ uVar82) + piVar71[0x1a] +
                 (uVar62 >> 6 | uVar62 << 0x1a);
        uVar85 = uVar85 + iVar79;
        uVar66 = (uVar64 ^ (uVar64 ^ uVar86) & (uVar63 ^ uVar64)) + iVar79 +
                 (uVar87 >> 2 | uVar87 << 0x1e);
        uVar87 = (local_c0 >> 0xb | local_c0 * 0x200000) ^ local_c0;
        uVar62 = (local_8c >> 2 | local_8c * 0x40000000) ^ local_8c;
        local_84 = (local_c0 >> 3 ^ (uVar87 >> 7 | uVar87 << 0x19)) + local_a0 + local_84 +
                   ((uVar62 >> 0x11 | uVar62 << 0xf) ^ local_8c >> 10);
        uVar62 = (uVar85 >> 0xe | uVar85 * 0x40000) ^ uVar85;
        uVar87 = (uVar66 >> 9 | uVar66 * 0x800000) ^ uVar66;
        uVar65 = (uVar62 >> 5 | uVar62 << 0x1b) ^ uVar85;
        uVar62 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar66;
        uVar87 = uVar66 ^ uVar63;
        uVar62 = uVar62 >> 2 | uVar62 << 0x1e;
        iVar79 = local_84 + uVar82 + ((uVar84 ^ uVar83) & uVar85 ^ uVar83) + piVar71[0x1b] +
                 (uVar65 >> 6 | uVar65 << 0x1a);
        uVar86 = uVar86 + iVar79;
        iVar79 = (uVar63 ^ (uVar63 ^ uVar64) & uVar87) + iVar79;
        pcVar1 = (char *)((longlong)piVar71 + 0x83);
        piVar71 = piVar71 + 0x20;
      } while (*pcVar1 != '\0');
      param_2 = param_2 + 4;
      uVar62 = iVar79 + uVar62 + *param_1;
      uVar66 = uVar66 + param_1[1];
      uVar63 = uVar63 + param_1[2];
      uVar64 = uVar64 + param_1[3];
      uVar86 = uVar86 + param_1[4];
      uVar85 = uVar85 + param_1[5];
      uVar84 = uVar84 + param_1[6];
      uVar83 = uVar83 + param_1[7];
      *param_1 = uVar62;
      param_1[1] = uVar66;
      param_1[2] = uVar63;
      param_1[3] = uVar64;
      param_1[4] = uVar86;
      param_1[5] = uVar85;
      param_1[6] = uVar84;
      param_1[7] = uVar83;
    } while (param_2 < pauVar73);
    return;
  }
  pauVar73 = param_2 + param_3 * 4;
  uVar62 = *param_1;
  uVar66 = param_1[1];
  uVar63 = param_1[2];
  uVar64 = param_1[3];
  uVar86 = param_1[4];
  uVar85 = param_1[5];
  uVar84 = param_1[6];
  uVar83 = param_1[7];
  do {
    in_ZMM0._0_16_ = pshufb(*param_2,_DAT_140def0c0);
    in_ZMM1._0_16_ = pshufb(param_2[1],_DAT_140def0c0);
    in_ZMM2._0_16_ = pshufb(param_2[2],_DAT_140def0c0);
    auStack_100._0_4_ = K256 + in_ZMM0._0_4_;
    auStack_100._4_4_ = DAT_140deeec4 + in_ZMM0._4_4_;
    auStack_100._8_4_ = DAT_140deeec8 + in_ZMM0._8_4_;
    auStack_100._12_4_ = DAT_140deeecc + in_ZMM0._12_4_;
    in_ZMM3._0_16_ = pshufb(param_2[3],_DAT_140def0c0);
    auStack_f0._0_4_ = DAT_140deeee0 + in_ZMM1._0_4_;
    auStack_f0._4_4_ = DAT_140deeee4 + in_ZMM1._4_4_;
    auStack_f0._8_4_ = DAT_140deeee8 + in_ZMM1._8_4_;
    auStack_f0._12_4_ = DAT_140deeeec + in_ZMM1._12_4_;
    auStack_e0._0_4_ = DAT_140deef00 + in_ZMM2._0_4_;
    auStack_e0._4_4_ = DAT_140deef04 + in_ZMM2._4_4_;
    auStack_e0._8_4_ = DAT_140deef08 + in_ZMM2._8_4_;
    auStack_e0._12_4_ = DAT_140deef0c + in_ZMM2._12_4_;
    auStack_d0._0_4_ = DAT_140deef20 + in_ZMM3._0_4_;
    auStack_d0._4_4_ = DAT_140deef24 + in_ZMM3._4_4_;
    auStack_d0._8_4_ = DAT_140deef28 + in_ZMM3._8_4_;
    auStack_d0._12_4_ = DAT_140deef2c + in_ZMM3._12_4_;
    uVar82 = uVar66 ^ uVar63;
    piVar71 = &K256;
    do {
      uVar87 = (uVar86 >> 0xe | uVar86 << 0x12) ^ uVar86;
      uVar65 = (uVar62 >> 9 | uVar62 << 0x17) ^ uVar62;
      uVar87 = (uVar87 >> 5 | uVar87 << 0x1b) ^ uVar86;
      uVar77 = in_ZMM0._4_4_;
      uVar78 = in_ZMM0._8_4_;
      uVar80 = in_ZMM0._12_4_;
      uVar81 = in_ZMM1._0_4_;
      uVar65 = (uVar65 >> 0xb | uVar65 << 0x15) ^ uVar62;
      iVar79 = uVar83 + auStack_100._0_4_ + ((uVar85 ^ uVar84) & uVar86 ^ uVar84) +
               (uVar87 >> 6 | uVar87 << 0x1a);
      uVar155 = in_ZMM2._4_4_;
      uVar188 = in_ZMM2._8_4_;
      uVar189 = in_ZMM2._12_4_;
      uVar190 = in_ZMM3._0_4_;
      uVar64 = uVar64 + iVar79;
      uVar67 = in_ZMM3._4_4_;
      uVar74 = in_ZMM3._8_4_;
      uVar76 = in_ZMM3._12_4_;
      auVar156._0_8_ = CONCAT44(uVar74,uVar74);
      auVar156._8_4_ = uVar76;
      auVar156._12_4_ = uVar76;
      uVar83 = (uVar65 >> 2 | uVar65 << 0x1e) + iVar79 + (uVar82 & (uVar62 ^ uVar66) ^ uVar66);
      uVar82 = (uVar64 >> 0xe | uVar64 * 0x40000) ^ uVar64;
      uVar87 = (uVar83 >> 9 | uVar83 * 0x800000) ^ uVar83;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar64;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar83;
      auVar157._0_4_ = uVar74 >> 10;
      auVar157._4_4_ = 0;
      auVar157._8_4_ = uVar76 >> 10;
      auVar157._12_4_ = uVar76 >> 10;
      iVar79 = uVar84 + auStack_100._4_4_ + ((uVar86 ^ uVar85) & uVar64 ^ uVar85) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar63 = uVar63 + iVar79;
      auVar137._0_8_ = auVar156._0_8_ >> 0x11;
      auVar137._8_8_ = auVar156._8_8_ >> 0x11;
      uVar84 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar62 ^ uVar66) & (uVar83 ^ uVar62) ^ uVar62);
      auVar158._0_8_ = auVar156._0_8_ >> 0x13;
      auVar158._8_8_ = auVar156._8_8_ >> 0x13;
      uVar82 = (uVar63 >> 0xe | uVar63 * 0x40000) ^ uVar63;
      auVar158 = auVar157 ^ auVar137 ^ auVar158;
      uVar87 = (uVar84 >> 9 | uVar84 * 0x800000) ^ uVar84;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar63;
      in_ZMM0._0_4_ =
           in_ZMM0._0_4_ + uVar155 +
           (uVar77 >> 3 ^ uVar77 >> 7 ^ uVar77 << 0xe ^ uVar77 >> 0x12 ^ uVar77 << 0x19) +
           auVar158._0_4_;
      in_ZMM0._4_4_ =
           uVar77 + uVar188 +
           (uVar78 >> 3 ^ uVar78 >> 7 ^ uVar78 << 0xe ^ uVar78 >> 0x12 ^ uVar78 << 0x19) +
           auVar158._8_4_;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar84;
      iVar79 = uVar85 + auStack_100._8_4_ + ((uVar64 ^ uVar86) & uVar63 ^ uVar86) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      auVar159._0_8_ = CONCAT44(in_ZMM0._0_4_,in_ZMM0._0_4_);
      auVar159._8_4_ = in_ZMM0._4_4_;
      auVar159._12_4_ = in_ZMM0._4_4_;
      uVar66 = uVar66 + iVar79;
      auVar160._0_4_ = in_ZMM0._0_4_ >> 10;
      auVar160._4_4_ = 0;
      auVar160._8_4_ = in_ZMM0._4_4_ >> 10;
      auVar160._12_4_ = in_ZMM0._4_4_ >> 10;
      uVar85 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar83 ^ uVar62) & (uVar84 ^ uVar83) ^ uVar83);
      auVar138._0_8_ = auVar159._0_8_ >> 0x11;
      auVar138._8_8_ = auVar159._8_8_ >> 0x11;
      uVar82 = (uVar66 >> 0xe | uVar66 * 0x40000) ^ uVar66;
      uVar87 = (uVar85 >> 9 | uVar85 * 0x800000) ^ uVar85;
      auVar161._0_8_ = auVar159._0_8_ >> 0x13;
      auVar161._8_8_ = auVar159._8_8_ >> 0x13;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar66;
      auVar161 = auVar160 ^ auVar138 ^ auVar161;
      piVar51 = piVar71 + 0x21;
      piVar52 = piVar71 + 0x22;
      piVar53 = piVar71 + 0x23;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar85;
      iVar79 = uVar86 + auStack_100._12_4_ + ((uVar63 ^ uVar64) & uVar66 ^ uVar64) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      in_ZMM0._8_4_ =
           uVar78 + uVar189 +
           (uVar80 >> 3 ^ uVar80 >> 7 ^ uVar80 << 0xe ^ uVar80 >> 0x12 ^ uVar80 << 0x19) +
           auVar161._0_4_;
      in_ZMM0._12_4_ =
           uVar80 + uVar190 +
           (uVar81 >> 3 ^ uVar81 >> 7 ^ uVar81 << 0xe ^ uVar81 >> 0x12 ^ uVar81 << 0x19) +
           auVar161._8_4_;
      uVar62 = uVar62 + iVar79;
      auStack_100._0_4_ = piVar71[0x20] + in_ZMM0._0_4_;
      uVar86 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar84 ^ uVar83) & (uVar85 ^ uVar84) ^ uVar84);
      auStack_100._4_4_ = *piVar51 + in_ZMM0._4_4_;
      auStack_100._8_4_ = *piVar52 + in_ZMM0._8_4_;
      auStack_100._12_4_ = *piVar53 + in_ZMM0._12_4_;
      uVar82 = (uVar62 >> 0xe | uVar62 * 0x40000) ^ uVar62;
      uVar87 = (uVar86 >> 9 | uVar86 * 0x800000) ^ uVar86;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar62;
      uVar65 = in_ZMM1._4_4_;
      uVar77 = in_ZMM1._8_4_;
      uVar78 = in_ZMM1._12_4_;
      uVar80 = in_ZMM2._0_4_;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar86;
      iVar79 = uVar64 + auStack_f0._0_4_ + ((uVar66 ^ uVar63) & uVar62 ^ uVar63) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar83 = uVar83 + iVar79;
      auVar162._0_8_ = CONCAT44(in_ZMM0._8_4_,in_ZMM0._8_4_);
      auVar162._8_4_ = in_ZMM0._12_4_;
      auVar162._12_4_ = in_ZMM0._12_4_;
      uVar64 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar85 ^ uVar84) & (uVar86 ^ uVar85) ^ uVar85);
      uVar82 = (uVar83 >> 0xe | uVar83 * 0x40000) ^ uVar83;
      uVar87 = (uVar64 >> 9 | uVar64 * 0x800000) ^ uVar64;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar83;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar64;
      auVar163._0_4_ = in_ZMM0._8_4_ >> 10;
      auVar163._4_4_ = 0;
      auVar163._8_4_ = in_ZMM0._12_4_ >> 10;
      auVar163._12_4_ = in_ZMM0._12_4_ >> 10;
      iVar79 = uVar63 + auStack_f0._4_4_ + ((uVar62 ^ uVar66) & uVar83 ^ uVar66) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar84 = uVar84 + iVar79;
      auVar139._0_8_ = auVar162._0_8_ >> 0x11;
      auVar139._8_8_ = auVar162._8_8_ >> 0x11;
      uVar63 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar86 ^ uVar85) & (uVar64 ^ uVar86) ^ uVar86);
      auVar164._0_8_ = auVar162._0_8_ >> 0x13;
      auVar164._8_8_ = auVar162._8_8_ >> 0x13;
      uVar82 = (uVar84 >> 0xe | uVar84 * 0x40000) ^ uVar84;
      auVar164 = auVar163 ^ auVar139 ^ auVar164;
      uVar87 = (uVar63 >> 9 | uVar63 * 0x800000) ^ uVar63;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar84;
      in_ZMM1._0_4_ =
           uVar81 + uVar67 +
           (uVar65 >> 3 ^ uVar65 >> 7 ^ uVar65 << 0xe ^ uVar65 >> 0x12 ^ uVar65 << 0x19) +
           auVar164._0_4_;
      in_ZMM1._4_4_ =
           uVar65 + uVar74 +
           (uVar77 >> 3 ^ uVar77 >> 7 ^ uVar77 << 0xe ^ uVar77 >> 0x12 ^ uVar77 << 0x19) +
           auVar164._8_4_;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar63;
      iVar79 = uVar66 + auStack_f0._8_4_ + ((uVar83 ^ uVar62) & uVar84 ^ uVar62) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      auVar165._0_8_ = CONCAT44(in_ZMM1._0_4_,in_ZMM1._0_4_);
      auVar165._8_4_ = in_ZMM1._4_4_;
      auVar165._12_4_ = in_ZMM1._4_4_;
      uVar85 = uVar85 + iVar79;
      auVar166._0_4_ = in_ZMM1._0_4_ >> 10;
      auVar166._4_4_ = 0;
      auVar166._8_4_ = in_ZMM1._4_4_ >> 10;
      auVar166._12_4_ = in_ZMM1._4_4_ >> 10;
      uVar66 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar64 ^ uVar86) & (uVar63 ^ uVar64) ^ uVar64);
      auVar140._0_8_ = auVar165._0_8_ >> 0x11;
      auVar140._8_8_ = auVar165._8_8_ >> 0x11;
      uVar82 = (uVar85 >> 0xe | uVar85 * 0x40000) ^ uVar85;
      uVar87 = (uVar66 >> 9 | uVar66 * 0x800000) ^ uVar66;
      auVar167._0_8_ = auVar165._0_8_ >> 0x13;
      auVar167._8_8_ = auVar165._8_8_ >> 0x13;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar85;
      auVar167 = auVar166 ^ auVar140 ^ auVar167;
      piVar2 = piVar71 + 0x28;
      piVar54 = piVar71 + 0x29;
      piVar55 = piVar71 + 0x2a;
      piVar56 = piVar71 + 0x2b;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar66;
      iVar79 = uVar62 + auStack_f0._12_4_ + ((uVar84 ^ uVar83) & uVar85 ^ uVar83) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      in_ZMM1._8_4_ =
           uVar77 + uVar76 +
           (uVar78 >> 3 ^ uVar78 >> 7 ^ uVar78 << 0xe ^ uVar78 >> 0x12 ^ uVar78 << 0x19) +
           auVar167._0_4_;
      in_ZMM1._12_4_ =
           uVar78 + in_ZMM0._0_4_ +
           (uVar80 >> 3 ^ uVar80 >> 7 ^ uVar80 << 0xe ^ uVar80 >> 0x12 ^ uVar80 << 0x19) +
           auVar167._8_4_;
      uVar86 = uVar86 + iVar79;
      uVar62 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar63 ^ uVar64) & (uVar66 ^ uVar63) ^ uVar63);
      auStack_f0._4_4_ = *piVar54 + in_ZMM1._4_4_;
      auStack_f0._0_4_ = *piVar2 + in_ZMM1._0_4_;
      auStack_f0._8_4_ = *piVar55 + in_ZMM1._8_4_;
      auStack_f0._12_4_ = *piVar56 + in_ZMM1._12_4_;
      uVar82 = (uVar86 >> 0xe | uVar86 * 0x40000) ^ uVar86;
      uVar87 = (uVar62 >> 9 | uVar62 * 0x800000) ^ uVar62;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar86;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar62;
      iVar79 = uVar83 + auStack_e0._0_4_ + ((uVar85 ^ uVar84) & uVar86 ^ uVar84) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar64 = uVar64 + iVar79;
      auVar168._0_8_ = CONCAT44(in_ZMM1._8_4_,in_ZMM1._8_4_);
      auVar168._8_4_ = in_ZMM1._12_4_;
      auVar168._12_4_ = in_ZMM1._12_4_;
      uVar83 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar66 ^ uVar63) & (uVar62 ^ uVar66) ^ uVar66);
      uVar82 = (uVar64 >> 0xe | uVar64 * 0x40000) ^ uVar64;
      uVar87 = (uVar83 >> 9 | uVar83 * 0x800000) ^ uVar83;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar64;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar83;
      auVar169._0_4_ = in_ZMM1._8_4_ >> 10;
      auVar169._4_4_ = 0;
      auVar169._8_4_ = in_ZMM1._12_4_ >> 10;
      auVar169._12_4_ = in_ZMM1._12_4_ >> 10;
      iVar79 = uVar84 + auStack_e0._4_4_ + ((uVar86 ^ uVar85) & uVar64 ^ uVar85) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar63 = uVar63 + iVar79;
      auVar141._0_8_ = auVar168._0_8_ >> 0x11;
      auVar141._8_8_ = auVar168._8_8_ >> 0x11;
      uVar84 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar62 ^ uVar66) & (uVar83 ^ uVar62) ^ uVar62);
      auVar170._0_8_ = auVar168._0_8_ >> 0x13;
      auVar170._8_8_ = auVar168._8_8_ >> 0x13;
      uVar82 = (uVar63 >> 0xe | uVar63 * 0x40000) ^ uVar63;
      auVar170 = auVar169 ^ auVar141 ^ auVar170;
      uVar87 = (uVar84 >> 9 | uVar84 * 0x800000) ^ uVar84;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar63;
      in_ZMM2._0_4_ =
           uVar80 + in_ZMM0._4_4_ +
           (uVar155 >> 3 ^ uVar155 >> 7 ^ uVar155 << 0xe ^ uVar155 >> 0x12 ^ uVar155 << 0x19) +
           auVar170._0_4_;
      in_ZMM2._4_4_ =
           uVar155 + in_ZMM0._8_4_ +
           (uVar188 >> 3 ^ uVar188 >> 7 ^ uVar188 << 0xe ^ uVar188 >> 0x12 ^ uVar188 << 0x19) +
           auVar170._8_4_;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar84;
      iVar79 = uVar85 + auStack_e0._8_4_ + ((uVar64 ^ uVar86) & uVar63 ^ uVar86) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      auVar171._0_8_ = CONCAT44(in_ZMM2._0_4_,in_ZMM2._0_4_);
      auVar171._8_4_ = in_ZMM2._4_4_;
      auVar171._12_4_ = in_ZMM2._4_4_;
      uVar66 = uVar66 + iVar79;
      auVar172._0_4_ = in_ZMM2._0_4_ >> 10;
      auVar172._4_4_ = 0;
      auVar172._8_4_ = in_ZMM2._4_4_ >> 10;
      auVar172._12_4_ = in_ZMM2._4_4_ >> 10;
      uVar85 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar83 ^ uVar62) & (uVar84 ^ uVar83) ^ uVar83);
      auVar142._0_8_ = auVar171._0_8_ >> 0x11;
      auVar142._8_8_ = auVar171._8_8_ >> 0x11;
      uVar82 = (uVar66 >> 0xe | uVar66 * 0x40000) ^ uVar66;
      uVar87 = (uVar85 >> 9 | uVar85 * 0x800000) ^ uVar85;
      auVar173._0_8_ = auVar171._0_8_ >> 0x13;
      auVar173._8_8_ = auVar171._8_8_ >> 0x13;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar66;
      auVar173 = auVar172 ^ auVar142 ^ auVar173;
      piVar3 = piVar71 + 0x30;
      piVar57 = piVar71 + 0x31;
      piVar58 = piVar71 + 0x32;
      piVar59 = piVar71 + 0x33;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar85;
      iVar79 = uVar86 + auStack_e0._12_4_ + ((uVar63 ^ uVar64) & uVar66 ^ uVar64) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      in_ZMM2._8_4_ =
           uVar188 + in_ZMM0._12_4_ +
           (uVar189 >> 3 ^ uVar189 >> 7 ^ uVar189 << 0xe ^ uVar189 >> 0x12 ^ uVar189 << 0x19) +
           auVar173._0_4_;
      in_ZMM2._12_4_ =
           uVar189 + in_ZMM1._0_4_ +
           (uVar190 >> 3 ^ uVar190 >> 7 ^ uVar190 << 0xe ^ uVar190 >> 0x12 ^ uVar190 << 0x19) +
           auVar173._8_4_;
      uVar62 = uVar62 + iVar79;
      uVar86 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar84 ^ uVar83) & (uVar85 ^ uVar84) ^ uVar84);
      auStack_e0._4_4_ = *piVar57 + in_ZMM2._4_4_;
      auStack_e0._0_4_ = *piVar3 + in_ZMM2._0_4_;
      auStack_e0._8_4_ = *piVar58 + in_ZMM2._8_4_;
      auStack_e0._12_4_ = *piVar59 + in_ZMM2._12_4_;
      uVar82 = (uVar62 >> 0xe | uVar62 * 0x40000) ^ uVar62;
      uVar87 = (uVar86 >> 9 | uVar86 * 0x800000) ^ uVar86;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar62;
      auVar123._0_4_ = uVar67 >> 3;
      auVar123._4_4_ = uVar74 >> 3;
      auVar123._8_4_ = uVar76 >> 3;
      auVar123._12_4_ = in_ZMM0._0_4_ >> 3;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar86;
      iVar79 = uVar64 + auStack_d0._0_4_ + ((uVar66 ^ uVar63) & uVar62 ^ uVar63) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar83 = uVar83 + iVar79;
      auVar143._0_4_ = uVar67 >> 7;
      auVar143._4_4_ = uVar74 >> 7;
      auVar143._8_4_ = uVar76 >> 7;
      auVar143._12_4_ = in_ZMM0._0_4_ >> 7;
      auVar174._0_8_ = CONCAT44(in_ZMM2._8_4_,in_ZMM2._8_4_);
      auVar174._8_4_ = in_ZMM2._12_4_;
      auVar174._12_4_ = in_ZMM2._12_4_;
      uVar64 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar85 ^ uVar84) & (uVar86 ^ uVar85) ^ uVar85);
      auVar128._0_4_ = uVar67 << 0xe;
      auVar128._4_4_ = uVar74 << 0xe;
      auVar128._8_4_ = uVar76 << 0xe;
      auVar128._12_4_ = in_ZMM0._0_4_ * 0x4000;
      uVar82 = (uVar83 >> 0xe | uVar83 * 0x40000) ^ uVar83;
      auVar144._0_4_ = uVar67 >> 0x12;
      auVar144._4_4_ = uVar74 >> 0x12;
      auVar144._8_4_ = uVar76 >> 0x12;
      auVar144._12_4_ = in_ZMM0._0_4_ >> 0x12;
      uVar87 = (uVar64 >> 9 | uVar64 * 0x800000) ^ uVar64;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar83;
      auVar124._0_4_ = uVar67 << 0x19;
      auVar124._4_4_ = uVar74 << 0x19;
      auVar124._8_4_ = uVar76 << 0x19;
      auVar124._12_4_ = in_ZMM0._0_4_ * 0x2000000;
      auVar124 = auVar123 ^ auVar143 ^ auVar128 ^ auVar144 ^ auVar124;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar64;
      auVar175._0_4_ = in_ZMM2._8_4_ >> 10;
      auVar175._4_4_ = 0;
      auVar175._8_4_ = in_ZMM2._12_4_ >> 10;
      auVar175._12_4_ = in_ZMM2._12_4_ >> 10;
      iVar79 = uVar63 + auStack_d0._4_4_ + ((uVar62 ^ uVar66) & uVar83 ^ uVar66) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      uVar84 = uVar84 + iVar79;
      auVar145._0_8_ = auVar174._0_8_ >> 0x11;
      auVar145._8_8_ = auVar174._8_8_ >> 0x11;
      uVar63 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar86 ^ uVar85) & (uVar64 ^ uVar86) ^ uVar86);
      auVar176._0_8_ = auVar174._0_8_ >> 0x13;
      auVar176._8_8_ = auVar174._8_8_ >> 0x13;
      uVar82 = (uVar84 >> 0xe | uVar84 * 0x40000) ^ uVar84;
      auVar176 = auVar175 ^ auVar145 ^ auVar176;
      uVar87 = (uVar63 >> 9 | uVar63 * 0x800000) ^ uVar63;
      uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar84;
      in_ZMM3._0_4_ = uVar190 + in_ZMM1._4_4_ + auVar124._0_4_ + auVar176._0_4_;
      in_ZMM3._4_4_ = uVar67 + in_ZMM1._8_4_ + auVar124._4_4_ + auVar176._8_4_;
      uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar63;
      iVar79 = uVar66 + auStack_d0._8_4_ + ((uVar83 ^ uVar62) & uVar84 ^ uVar62) +
               (uVar82 >> 6 | uVar82 << 0x1a);
      auVar177._0_8_ = CONCAT44(in_ZMM3._0_4_,in_ZMM3._0_4_);
      auVar177._8_4_ = in_ZMM3._4_4_;
      auVar177._12_4_ = in_ZMM3._4_4_;
      uVar85 = uVar85 + iVar79;
      auVar178._0_4_ = in_ZMM3._0_4_ >> 10;
      auVar178._4_4_ = 0;
      auVar178._8_4_ = in_ZMM3._4_4_ >> 10;
      auVar178._12_4_ = in_ZMM3._4_4_ >> 10;
      uVar66 = (uVar87 >> 2 | uVar87 << 0x1e) +
               iVar79 + ((uVar64 ^ uVar86) & (uVar63 ^ uVar64) ^ uVar64);
      auVar146._0_8_ = auVar177._0_8_ >> 0x11;
      auVar146._8_8_ = auVar177._8_8_ >> 0x11;
      uVar82 = (uVar85 >> 0xe | uVar85 * 0x40000) ^ uVar85;
      uVar65 = (uVar66 >> 9 | uVar66 * 0x800000) ^ uVar66;
      auVar179._0_8_ = auVar177._0_8_ >> 0x13;
      auVar179._8_8_ = auVar177._8_8_ >> 0x13;
      uVar87 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar85;
      auVar179 = auVar178 ^ auVar146 ^ auVar179;
      uVar82 = uVar66 ^ uVar63;
      uVar65 = (uVar65 >> 0xb | uVar65 << 0x15) ^ uVar66;
      iVar79 = uVar62 + auStack_d0._12_4_ + ((uVar84 ^ uVar83) & uVar85 ^ uVar83) +
               (uVar87 >> 6 | uVar87 << 0x1a);
      in_ZMM3._8_4_ = uVar74 + in_ZMM1._12_4_ + auVar124._8_4_ + auVar179._0_4_;
      in_ZMM3._12_4_ = uVar76 + in_ZMM2._0_4_ + auVar124._12_4_ + auVar179._8_4_;
      uVar86 = uVar86 + iVar79;
      auStack_d0._0_4_ = piVar71[0x38] + in_ZMM3._0_4_;
      auStack_d0._4_4_ = piVar71[0x39] + in_ZMM3._4_4_;
      auStack_d0._8_4_ = piVar71[0x3a] + in_ZMM3._8_4_;
      auStack_d0._12_4_ = piVar71[0x3b] + in_ZMM3._12_4_;
      uVar62 = (uVar65 >> 2 | uVar65 << 0x1e) + iVar79 + ((uVar63 ^ uVar64) & uVar82 ^ uVar63);
      pcVar1 = (char *)((longlong)piVar71 + 0x103);
      piVar71 = piVar71 + 0x20;
    } while (*pcVar1 != '\0');
    uVar87 = (uVar86 >> 0xe | uVar86 * 0x40000) ^ uVar86;
    uVar65 = (uVar62 >> 9 | uVar62 * 0x800000) ^ uVar62;
    uVar87 = (uVar87 >> 5 | uVar87 << 0x1b) ^ uVar86;
    uVar65 = (uVar65 >> 0xb | uVar65 << 0x15) ^ uVar62;
    iVar79 = uVar83 + auStack_100._0_4_ + ((uVar85 ^ uVar84) & uVar86 ^ uVar84) +
             (uVar87 >> 6 | uVar87 << 0x1a);
    uVar64 = uVar64 + iVar79;
    uVar83 = (uVar65 >> 2 | uVar65 << 0x1e) + iVar79 + (uVar82 & (uVar62 ^ uVar66) ^ uVar66);
    uVar82 = (uVar64 >> 0xe | uVar64 * 0x40000) ^ uVar64;
    uVar87 = (uVar83 >> 9 | uVar83 * 0x800000) ^ uVar83;
    uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar64;
    uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar83;
    iVar79 = uVar84 + *piVar51 + in_ZMM0._4_4_ + ((uVar86 ^ uVar85) & uVar64 ^ uVar85) +
             (uVar82 >> 6 | uVar82 << 0x1a);
    uVar63 = uVar63 + iVar79;
    uVar84 = (uVar87 >> 2 | uVar87 << 0x1e) +
             iVar79 + ((uVar62 ^ uVar66) & (uVar83 ^ uVar62) ^ uVar62);
    uVar82 = (uVar63 >> 0xe | uVar63 * 0x40000) ^ uVar63;
    uVar87 = (uVar84 >> 9 | uVar84 * 0x800000) ^ uVar84;
    uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar63;
    uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar84;
    iVar79 = uVar85 + *piVar52 + in_ZMM0._8_4_ + ((uVar64 ^ uVar86) & uVar63 ^ uVar86) +
             (uVar82 >> 6 | uVar82 << 0x1a);
    uVar66 = uVar66 + iVar79;
    uVar85 = (uVar87 >> 2 | uVar87 << 0x1e) +
             iVar79 + ((uVar83 ^ uVar62) & (uVar84 ^ uVar83) ^ uVar83);
    uVar82 = (uVar66 >> 0xe | uVar66 * 0x40000) ^ uVar66;
    uVar87 = (uVar85 >> 9 | uVar85 * 0x800000) ^ uVar85;
    uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar66;
    uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar85;
    iVar79 = uVar86 + *piVar53 + in_ZMM0._12_4_ + ((uVar63 ^ uVar64) & uVar66 ^ uVar64) +
             (uVar82 >> 6 | uVar82 << 0x1a);
    uVar62 = uVar62 + iVar79;
    uVar86 = (uVar87 >> 2 | uVar87 << 0x1e) +
             iVar79 + ((uVar84 ^ uVar83) & (uVar85 ^ uVar84) ^ uVar84);
    uVar82 = (uVar62 >> 0xe | uVar62 * 0x40000) ^ uVar62;
    uVar87 = (uVar86 >> 9 | uVar86 * 0x800000) ^ uVar86;
    uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar62;
    uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar86;
    iVar79 = uVar64 + *piVar2 + in_ZMM1._0_4_ + ((uVar66 ^ uVar63) & uVar62 ^ uVar63) +
             (uVar82 >> 6 | uVar82 << 0x1a);
    uVar83 = uVar83 + iVar79;
    uVar64 = (uVar87 >> 2 | uVar87 << 0x1e) +
             iVar79 + ((uVar85 ^ uVar84) & (uVar86 ^ uVar85) ^ uVar85);
    uVar82 = (uVar83 >> 0xe | uVar83 * 0x40000) ^ uVar83;
    uVar87 = (uVar64 >> 9 | uVar64 * 0x800000) ^ uVar64;
    uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar83;
    uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar64;
    iVar79 = uVar63 + *piVar54 + in_ZMM1._4_4_ + ((uVar62 ^ uVar66) & uVar83 ^ uVar66) +
             (uVar82 >> 6 | uVar82 << 0x1a);
    uVar84 = uVar84 + iVar79;
    uVar63 = (uVar87 >> 2 | uVar87 << 0x1e) +
             iVar79 + ((uVar86 ^ uVar85) & (uVar64 ^ uVar86) ^ uVar86);
    uVar82 = (uVar84 >> 0xe | uVar84 * 0x40000) ^ uVar84;
    uVar87 = (uVar63 >> 9 | uVar63 * 0x800000) ^ uVar63;
    uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar84;
    uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar63;
    iVar79 = uVar66 + *piVar55 + in_ZMM1._8_4_ + ((uVar83 ^ uVar62) & uVar84 ^ uVar62) +
             (uVar82 >> 6 | uVar82 << 0x1a);
    uVar85 = uVar85 + iVar79;
    uVar66 = (uVar87 >> 2 | uVar87 << 0x1e) +
             iVar79 + ((uVar64 ^ uVar86) & (uVar63 ^ uVar64) ^ uVar64);
    uVar82 = (uVar85 >> 0xe | uVar85 * 0x40000) ^ uVar85;
    uVar87 = (uVar66 >> 9 | uVar66 * 0x800000) ^ uVar66;
    uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar85;
    uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar66;
    iVar79 = uVar62 + *piVar56 + in_ZMM1._12_4_ + ((uVar84 ^ uVar83) & uVar85 ^ uVar83) +
             (uVar82 >> 6 | uVar82 << 0x1a);
    uVar86 = uVar86 + iVar79;
    uVar62 = (uVar87 >> 2 | uVar87 << 0x1e) +
             iVar79 + ((uVar63 ^ uVar64) & (uVar66 ^ uVar63) ^ uVar63);
    uVar82 = (uVar86 >> 0xe | uVar86 * 0x40000) ^ uVar86;
    uVar87 = (uVar62 >> 9 | uVar62 * 0x800000) ^ uVar62;
    uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar86;
    uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar62;
    iVar79 = uVar83 + *piVar3 + in_ZMM2._0_4_ + ((uVar85 ^ uVar84) & uVar86 ^ uVar84) +
             (uVar82 >> 6 | uVar82 << 0x1a);
    uVar64 = uVar64 + iVar79;
    uVar83 = (uVar87 >> 2 | uVar87 << 0x1e) +
             iVar79 + ((uVar66 ^ uVar63) & (uVar62 ^ uVar66) ^ uVar66);
    uVar82 = (uVar64 >> 0xe | uVar64 * 0x40000) ^ uVar64;
    uVar87 = (uVar83 >> 9 | uVar83 * 0x800000) ^ uVar83;
    uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar64;
    uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar83;
    iVar79 = uVar84 + *piVar57 + in_ZMM2._4_4_ + ((uVar86 ^ uVar85) & uVar64 ^ uVar85) +
             (uVar82 >> 6 | uVar82 << 0x1a);
    uVar63 = uVar63 + iVar79;
    uVar84 = (uVar87 >> 2 | uVar87 << 0x1e) +
             iVar79 + ((uVar62 ^ uVar66) & (uVar83 ^ uVar62) ^ uVar62);
    uVar82 = (uVar63 >> 0xe | uVar63 * 0x40000) ^ uVar63;
    uVar87 = (uVar84 >> 9 | uVar84 * 0x800000) ^ uVar84;
    uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar63;
    uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar84;
    iVar79 = uVar85 + *piVar58 + in_ZMM2._8_4_ + ((uVar64 ^ uVar86) & uVar63 ^ uVar86) +
             (uVar82 >> 6 | uVar82 << 0x1a);
    uVar66 = uVar66 + iVar79;
    uVar85 = (uVar87 >> 2 | uVar87 << 0x1e) +
             iVar79 + ((uVar83 ^ uVar62) & (uVar84 ^ uVar83) ^ uVar83);
    uVar82 = (uVar66 >> 0xe | uVar66 * 0x40000) ^ uVar66;
    uVar87 = (uVar85 >> 9 | uVar85 * 0x800000) ^ uVar85;
    uVar82 = (uVar82 >> 5 | uVar82 << 0x1b) ^ uVar66;
    uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar85;
    iVar79 = uVar86 + *piVar59 + in_ZMM2._12_4_ + ((uVar63 ^ uVar64) & uVar66 ^ uVar64) +
             (uVar82 >> 6 | uVar82 << 0x1a);
    uVar62 = uVar62 + iVar79;
    uVar82 = (uVar87 >> 2 | uVar87 << 0x1e) +
             iVar79 + ((uVar84 ^ uVar83) & (uVar85 ^ uVar84) ^ uVar84);
    uVar86 = (uVar62 >> 0xe | uVar62 * 0x40000) ^ uVar62;
    uVar87 = (uVar82 >> 9 | uVar82 * 0x800000) ^ uVar82;
    uVar86 = (uVar86 >> 5 | uVar86 << 0x1b) ^ uVar62;
    uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar82;
    iVar79 = uVar64 + auStack_d0._0_4_ + ((uVar66 ^ uVar63) & uVar62 ^ uVar63) +
             (uVar86 >> 6 | uVar86 << 0x1a);
    uVar83 = uVar83 + iVar79;
    uVar64 = (uVar87 >> 2 | uVar87 << 0x1e) +
             iVar79 + ((uVar85 ^ uVar84) & (uVar82 ^ uVar85) ^ uVar85);
    uVar86 = (uVar83 >> 0xe | uVar83 * 0x40000) ^ uVar83;
    uVar87 = (uVar64 >> 9 | uVar64 * 0x800000) ^ uVar64;
    uVar86 = (uVar86 >> 5 | uVar86 << 0x1b) ^ uVar83;
    uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar64;
    iVar79 = uVar63 + auStack_d0._4_4_ + ((uVar62 ^ uVar66) & uVar83 ^ uVar66) +
             (uVar86 >> 6 | uVar86 << 0x1a);
    uVar84 = uVar84 + iVar79;
    uVar63 = (uVar87 >> 2 | uVar87 << 0x1e) +
             iVar79 + ((uVar82 ^ uVar85) & (uVar64 ^ uVar82) ^ uVar82);
    uVar86 = (uVar84 >> 0xe | uVar84 * 0x40000) ^ uVar84;
    uVar87 = (uVar63 >> 9 | uVar63 * 0x800000) ^ uVar63;
    uVar86 = (uVar86 >> 5 | uVar86 << 0x1b) ^ uVar84;
    uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar63;
    iVar79 = uVar66 + auStack_d0._8_4_ + ((uVar83 ^ uVar62) & uVar84 ^ uVar62) +
             (uVar86 >> 6 | uVar86 << 0x1a);
    uVar85 = uVar85 + iVar79;
    uVar66 = (uVar87 >> 2 | uVar87 << 0x1e) +
             iVar79 + ((uVar64 ^ uVar82) & (uVar63 ^ uVar64) ^ uVar64);
    uVar86 = (uVar85 >> 0xe | uVar85 * 0x40000) ^ uVar85;
    uVar87 = (uVar66 >> 9 | uVar66 * 0x800000) ^ uVar66;
    uVar86 = (uVar86 >> 5 | uVar86 << 0x1b) ^ uVar85;
    uVar87 = (uVar87 >> 0xb | uVar87 << 0x15) ^ uVar66;
    iVar79 = uVar62 + auStack_d0._12_4_ + ((uVar84 ^ uVar83) & uVar85 ^ uVar83) +
             (uVar86 >> 6 | uVar86 << 0x1a);
    uVar62 = (uVar87 >> 2 | uVar87 << 0x1e) +
             iVar79 + ((uVar63 ^ uVar64) & (uVar66 ^ uVar63) ^ uVar63) + *param_1;
    param_2 = param_2 + 4;
    uVar66 = uVar66 + param_1[1];
    uVar63 = uVar63 + param_1[2];
    uVar64 = uVar64 + param_1[3];
    uVar86 = uVar82 + iVar79 + param_1[4];
    uVar85 = uVar85 + param_1[5];
    uVar84 = uVar84 + param_1[6];
    uVar83 = uVar83 + param_1[7];
    *param_1 = uVar62;
    param_1[1] = uVar66;
    param_1[2] = uVar63;
    param_1[3] = uVar64;
    param_1[4] = uVar86;
    param_1[5] = uVar85;
    param_1[6] = uVar84;
    param_1[7] = uVar83;
  } while (param_2 < pauVar73);
  return;
}

// sha256_block_data_order_shaext @ 140def180

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sha256_block_data_order_shaext(undefined8 *param_1,undefined1 (*param_2) [16],longlong param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [12];
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
  
  auVar31._12_4_ = *(undefined4 *)(param_1 + 1);
  auVar31._8_4_ = *(undefined4 *)((longlong)param_1 + 0xc);
  auVar2._20_4_ = *(undefined4 *)param_1;
  auVar2._16_4_ = *(undefined4 *)((longlong)param_1 + 4);
  auVar2._24_4_ = *(undefined4 *)((longlong)param_1 + 0xc);
  auVar2._28_4_ = *(undefined4 *)(param_1 + 1);
  auVar31._0_8_ = CONCAT44(*(undefined4 *)(param_1 + 3),*(undefined4 *)((longlong)param_1 + 0x1c));
  auVar2._8_4_ = *(undefined4 *)((longlong)param_1 + 0x14);
  auVar2._0_8_ = auVar31._0_8_;
  auVar2._12_4_ = *(undefined4 *)(param_1 + 2);
  auVar30 = auVar2._8_16_;
  do {
    auVar36 = pshufb(*param_2,_DAT_140def0c0);
    pauVar1 = param_2 + 3;
    auVar28._0_4_ = K256 + auVar36._0_4_;
    auVar28._4_4_ = DAT_140deeec4 + auVar36._4_4_;
    auVar28._8_4_ = DAT_140deeec8 + auVar36._8_4_;
    auVar28._12_4_ = DAT_140deeecc + auVar36._12_4_;
    auVar41 = pshufb(param_2[1],_DAT_140def0c0);
    auVar32 = sha256rnds2_sha(auVar31,auVar30,auVar28);
    auVar33._4_4_ = auVar28._12_4_;
    auVar33._0_4_ = auVar28._8_4_;
    auVar33._8_4_ = auVar28._0_4_;
    auVar33._12_4_ = auVar28._0_4_;
    auVar28 = sha256rnds2_sha(auVar30,auVar32,auVar33);
    auVar37._0_4_ = DAT_140deeee0 + auVar41._0_4_;
    auVar37._4_4_ = DAT_140deeee4 + auVar41._4_4_;
    auVar37._8_4_ = DAT_140deeee8 + auVar41._8_4_;
    auVar37._12_4_ = DAT_140deeeec + auVar41._12_4_;
    auVar45 = pshufb(param_2[2],_DAT_140def0c0);
    auVar33 = sha256rnds2_sha(auVar32,auVar28,auVar37);
    auVar32._4_4_ = auVar37._12_4_;
    auVar32._0_4_ = auVar37._8_4_;
    auVar32._8_4_ = auVar37._0_4_;
    auVar32._12_4_ = auVar37._0_4_;
    param_2 = param_2 + 4;
    auVar37 = sha256msg1_sha(auVar36,auVar41);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar32);
    auVar36._0_4_ = DAT_140deef00 + auVar45._0_4_;
    auVar36._4_4_ = DAT_140deef04 + auVar45._4_4_;
    auVar36._8_4_ = DAT_140deef08 + auVar45._8_4_;
    auVar36._12_4_ = DAT_140deef0c + auVar45._12_4_;
    auVar49 = pshufb(*pauVar1,_DAT_140def0c0);
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar36);
    auVar50._4_4_ = auVar36._12_4_;
    auVar50._0_4_ = auVar36._8_4_;
    auVar50._8_4_ = auVar36._0_4_;
    auVar50._12_4_ = auVar36._0_4_;
    auVar38._0_4_ = auVar37._0_4_ + auVar45._4_4_;
    auVar38._4_4_ = auVar37._4_4_ + auVar45._8_4_;
    auVar38._8_4_ = auVar37._8_4_ + auVar45._12_4_;
    auVar38._12_4_ = auVar37._12_4_ + auVar49._0_4_;
    auVar32 = sha256msg1_sha(auVar41,auVar45);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar50);
    auVar41._0_4_ = DAT_140deef20 + auVar49._0_4_;
    auVar41._4_4_ = DAT_140deef24 + auVar49._4_4_;
    auVar41._8_4_ = DAT_140deef28 + auVar49._8_4_;
    auVar41._12_4_ = DAT_140deef2c + auVar49._12_4_;
    auVar37 = sha256msg2_sha(auVar38,auVar49);
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar41);
    auVar5._4_4_ = auVar41._12_4_;
    auVar5._0_4_ = auVar41._8_4_;
    auVar5._8_4_ = auVar41._0_4_;
    auVar5._12_4_ = auVar41._0_4_;
    auVar42._0_4_ = auVar32._0_4_ + auVar49._4_4_;
    auVar42._4_4_ = auVar32._4_4_ + auVar49._8_4_;
    auVar42._8_4_ = auVar32._8_4_ + auVar49._12_4_;
    auVar42._12_4_ = auVar32._12_4_ + auVar37._0_4_;
    auVar36 = sha256msg1_sha(auVar45,auVar49);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar5);
    auVar45._0_4_ = DAT_140deef40 + auVar37._0_4_;
    auVar45._4_4_ = DAT_140deef44 + auVar37._4_4_;
    auVar45._8_4_ = DAT_140deef48 + auVar37._8_4_;
    auVar45._12_4_ = DAT_140deef4c + auVar37._12_4_;
    auVar32 = sha256msg2_sha(auVar42,auVar37);
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar45);
    auVar6._4_4_ = auVar45._12_4_;
    auVar6._0_4_ = auVar45._8_4_;
    auVar6._8_4_ = auVar45._0_4_;
    auVar6._12_4_ = auVar45._0_4_;
    auVar46._0_4_ = auVar36._0_4_ + auVar37._4_4_;
    auVar46._4_4_ = auVar36._4_4_ + auVar37._8_4_;
    auVar46._8_4_ = auVar36._8_4_ + auVar37._12_4_;
    auVar46._12_4_ = auVar36._12_4_ + auVar32._0_4_;
    auVar50 = sha256msg1_sha(auVar49,auVar37);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar6);
    auVar49._0_4_ = DAT_140deef60 + auVar32._0_4_;
    auVar49._4_4_ = DAT_140deef64 + auVar32._4_4_;
    auVar49._8_4_ = DAT_140deef68 + auVar32._8_4_;
    auVar49._12_4_ = DAT_140deef6c + auVar32._12_4_;
    auVar36 = sha256msg2_sha(auVar46,auVar32);
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar49);
    auVar7._4_4_ = auVar49._12_4_;
    auVar7._0_4_ = auVar49._8_4_;
    auVar7._8_4_ = auVar49._0_4_;
    auVar7._12_4_ = auVar49._0_4_;
    auVar51._0_4_ = auVar50._0_4_ + auVar32._4_4_;
    auVar51._4_4_ = auVar50._4_4_ + auVar32._8_4_;
    auVar51._8_4_ = auVar50._8_4_ + auVar32._12_4_;
    auVar51._12_4_ = auVar50._12_4_ + auVar36._0_4_;
    auVar37 = sha256msg1_sha(auVar37,auVar32);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar7);
    auVar8._0_4_ = DAT_140deef80 + auVar36._0_4_;
    auVar8._4_4_ = DAT_140deef84 + auVar36._4_4_;
    auVar8._8_4_ = DAT_140deef88 + auVar36._8_4_;
    auVar8._12_4_ = DAT_140deef8c + auVar36._12_4_;
    auVar50 = sha256msg2_sha(auVar51,auVar36);
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar8);
    auVar9._4_4_ = auVar8._12_4_;
    auVar9._0_4_ = auVar8._8_4_;
    auVar9._8_4_ = auVar8._0_4_;
    auVar9._12_4_ = auVar8._0_4_;
    auVar39._0_4_ = auVar37._0_4_ + auVar36._4_4_;
    auVar39._4_4_ = auVar37._4_4_ + auVar36._8_4_;
    auVar39._8_4_ = auVar37._8_4_ + auVar36._12_4_;
    auVar39._12_4_ = auVar37._12_4_ + auVar50._0_4_;
    auVar32 = sha256msg1_sha(auVar32,auVar36);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar9);
    auVar10._0_4_ = DAT_140deefa0 + auVar50._0_4_;
    auVar10._4_4_ = DAT_140deefa4 + auVar50._4_4_;
    auVar10._8_4_ = DAT_140deefa8 + auVar50._8_4_;
    auVar10._12_4_ = DAT_140deefac + auVar50._12_4_;
    auVar37 = sha256msg2_sha(auVar39,auVar50);
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar10);
    auVar11._4_4_ = auVar10._12_4_;
    auVar11._0_4_ = auVar10._8_4_;
    auVar11._8_4_ = auVar10._0_4_;
    auVar11._12_4_ = auVar10._0_4_;
    auVar43._0_4_ = auVar32._0_4_ + auVar50._4_4_;
    auVar43._4_4_ = auVar32._4_4_ + auVar50._8_4_;
    auVar43._8_4_ = auVar32._8_4_ + auVar50._12_4_;
    auVar43._12_4_ = auVar32._12_4_ + auVar37._0_4_;
    auVar36 = sha256msg1_sha(auVar36,auVar50);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar11);
    auVar12._0_4_ = _DAT_140deefc0 + auVar37._0_4_;
    auVar12._4_4_ = _UNK_140deefc4 + auVar37._4_4_;
    auVar12._8_4_ = _UNK_140deefc8 + auVar37._8_4_;
    auVar12._12_4_ = _UNK_140deefcc + auVar37._12_4_;
    auVar32 = sha256msg2_sha(auVar43,auVar37);
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar12);
    auVar13._4_4_ = auVar12._12_4_;
    auVar13._0_4_ = auVar12._8_4_;
    auVar13._8_4_ = auVar12._0_4_;
    auVar13._12_4_ = auVar12._0_4_;
    auVar47._0_4_ = auVar36._0_4_ + auVar37._4_4_;
    auVar47._4_4_ = auVar36._4_4_ + auVar37._8_4_;
    auVar47._8_4_ = auVar36._8_4_ + auVar37._12_4_;
    auVar47._12_4_ = auVar36._12_4_ + auVar32._0_4_;
    auVar50 = sha256msg1_sha(auVar50,auVar37);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar13);
    auVar14._0_4_ = _DAT_140deefe0 + auVar32._0_4_;
    auVar14._4_4_ = _UNK_140deefe4 + auVar32._4_4_;
    auVar14._8_4_ = _UNK_140deefe8 + auVar32._8_4_;
    auVar14._12_4_ = _UNK_140deefec + auVar32._12_4_;
    auVar36 = sha256msg2_sha(auVar47,auVar32);
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar14);
    auVar15._4_4_ = auVar14._12_4_;
    auVar15._0_4_ = auVar14._8_4_;
    auVar15._8_4_ = auVar14._0_4_;
    auVar15._12_4_ = auVar14._0_4_;
    auVar52._0_4_ = auVar50._0_4_ + auVar32._4_4_;
    auVar52._4_4_ = auVar50._4_4_ + auVar32._8_4_;
    auVar52._8_4_ = auVar50._8_4_ + auVar32._12_4_;
    auVar52._12_4_ = auVar50._12_4_ + auVar36._0_4_;
    auVar37 = sha256msg1_sha(auVar37,auVar32);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar15);
    auVar16._0_4_ = _DAT_140def000 + auVar36._0_4_;
    auVar16._4_4_ = _UNK_140def004 + auVar36._4_4_;
    auVar16._8_4_ = _UNK_140def008 + auVar36._8_4_;
    auVar16._12_4_ = _UNK_140def00c + auVar36._12_4_;
    auVar50 = sha256msg2_sha(auVar52,auVar36);
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar16);
    auVar17._4_4_ = auVar16._12_4_;
    auVar17._0_4_ = auVar16._8_4_;
    auVar17._8_4_ = auVar16._0_4_;
    auVar17._12_4_ = auVar16._0_4_;
    auVar40._0_4_ = auVar37._0_4_ + auVar36._4_4_;
    auVar40._4_4_ = auVar37._4_4_ + auVar36._8_4_;
    auVar40._8_4_ = auVar37._8_4_ + auVar36._12_4_;
    auVar40._12_4_ = auVar37._12_4_ + auVar50._0_4_;
    auVar32 = sha256msg1_sha(auVar32,auVar36);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar17);
    auVar18._0_4_ = _DAT_140def020 + auVar50._0_4_;
    auVar18._4_4_ = _UNK_140def024 + auVar50._4_4_;
    auVar18._8_4_ = _UNK_140def028 + auVar50._8_4_;
    auVar18._12_4_ = _UNK_140def02c + auVar50._12_4_;
    auVar37 = sha256msg2_sha(auVar40,auVar50);
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar18);
    auVar19._4_4_ = auVar18._12_4_;
    auVar19._0_4_ = auVar18._8_4_;
    auVar19._8_4_ = auVar18._0_4_;
    auVar19._12_4_ = auVar18._0_4_;
    auVar44._0_4_ = auVar32._0_4_ + auVar50._4_4_;
    auVar44._4_4_ = auVar32._4_4_ + auVar50._8_4_;
    auVar44._8_4_ = auVar32._8_4_ + auVar50._12_4_;
    auVar44._12_4_ = auVar32._12_4_ + auVar37._0_4_;
    auVar36 = sha256msg1_sha(auVar36,auVar50);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar19);
    auVar20._0_4_ = _DAT_140def040 + auVar37._0_4_;
    auVar20._4_4_ = _UNK_140def044 + auVar37._4_4_;
    auVar20._8_4_ = _UNK_140def048 + auVar37._8_4_;
    auVar20._12_4_ = _UNK_140def04c + auVar37._12_4_;
    auVar32 = sha256msg2_sha(auVar44,auVar37);
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar20);
    auVar21._4_4_ = auVar20._12_4_;
    auVar21._0_4_ = auVar20._8_4_;
    auVar21._8_4_ = auVar20._0_4_;
    auVar21._12_4_ = auVar20._0_4_;
    auVar48._0_4_ = auVar36._0_4_ + auVar37._4_4_;
    auVar48._4_4_ = auVar36._4_4_ + auVar37._8_4_;
    auVar48._8_4_ = auVar36._8_4_ + auVar37._12_4_;
    auVar48._12_4_ = auVar36._12_4_ + auVar32._0_4_;
    auVar36 = sha256msg1_sha(auVar50,auVar37);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar21);
    auVar22._0_4_ = _DAT_140def060 + auVar32._0_4_;
    auVar22._4_4_ = _UNK_140def064 + auVar32._4_4_;
    auVar22._8_4_ = _UNK_140def068 + auVar32._8_4_;
    auVar22._12_4_ = _UNK_140def06c + auVar32._12_4_;
    auVar37 = sha256msg2_sha(auVar48,auVar32);
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar22);
    auVar23._4_4_ = auVar22._12_4_;
    auVar23._0_4_ = auVar22._8_4_;
    auVar23._8_4_ = auVar22._0_4_;
    auVar23._12_4_ = auVar22._0_4_;
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar23);
    auVar53._0_4_ = auVar36._0_4_ + auVar32._4_4_;
    auVar53._4_4_ = auVar36._4_4_ + auVar32._8_4_;
    auVar53._8_4_ = auVar36._8_4_ + auVar32._12_4_;
    auVar53._12_4_ = auVar36._12_4_ + auVar37._0_4_;
    auVar24._0_4_ = _DAT_140def080 + auVar37._0_4_;
    auVar24._4_4_ = _UNK_140def084 + auVar37._4_4_;
    auVar24._8_4_ = _UNK_140def088 + auVar37._8_4_;
    auVar24._12_4_ = _UNK_140def08c + auVar37._12_4_;
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar24);
    auVar25._4_4_ = auVar24._12_4_;
    auVar25._0_4_ = auVar24._8_4_;
    auVar25._8_4_ = auVar24._0_4_;
    auVar25._12_4_ = auVar24._0_4_;
    auVar37 = sha256msg2_sha(auVar53,auVar37);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar25);
    auVar26._0_4_ = _DAT_140def0a0 + auVar37._0_4_;
    auVar26._4_4_ = _UNK_140def0a4 + auVar37._4_4_;
    auVar26._8_4_ = _UNK_140def0a8 + auVar37._8_4_;
    auVar26._12_4_ = _UNK_140def0ac + auVar37._12_4_;
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar26);
    auVar27._4_4_ = auVar26._12_4_;
    auVar27._0_4_ = auVar26._8_4_;
    auVar27._8_4_ = auVar26._0_4_;
    auVar27._12_4_ = auVar26._0_4_;
    param_3 = param_3 + -1;
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar27);
    auVar34._0_4_ = auVar33._0_4_ + auVar31._0_4_;
    auVar34._4_4_ = auVar33._4_4_ + auVar31._4_4_;
    auVar34._8_4_ = auVar33._8_4_ + auVar31._8_4_;
    auVar34._12_4_ = auVar33._12_4_ + auVar31._12_4_;
    auVar29._0_4_ = auVar28._0_4_ + auVar30._0_4_;
    auVar29._4_4_ = auVar28._4_4_ + auVar30._4_4_;
    auVar29._8_4_ = auVar28._8_4_ + auVar30._8_4_;
    auVar29._12_4_ = auVar28._12_4_ + auVar30._12_4_;
    auVar30 = auVar29;
    auVar31 = auVar34;
  } while (param_3 != 0);
  auVar35._4_4_ = auVar34._0_4_;
  auVar35._0_4_ = auVar34._4_4_;
  auVar35._8_4_ = auVar34._12_4_;
  auVar35._12_4_ = auVar34._8_4_;
  auVar3._4_4_ = auVar29._8_4_;
  auVar3._0_4_ = auVar29._12_4_;
  auVar3._8_4_ = auVar29._4_4_;
  auVar3._12_4_ = auVar29._0_4_;
  auVar4._4_8_ = auVar29._8_8_;
  auVar4._0_4_ = auVar29._0_4_;
  auVar30._0_8_ = auVar4._0_8_ << 0x20;
  auVar30._8_4_ = auVar29._12_4_;
  auVar30._12_4_ = auVar29._8_4_;
  auVar3._16_16_ = auVar35;
  *param_1 = auVar30._8_8_;
  param_1[1] = auVar35._8_8_;
  *(undefined1 (*) [16])(param_1 + 2) = auVar3._8_16_;
  return;
}

// L$SEH_begin_sha256_block_data_order_shaext @ 140def18d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L_SEH_begin_sha256_block_data_order_shaext
               (undefined8 *param_1,undefined1 (*param_2) [16],longlong param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [12];
  longlong in_RAX;
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
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  undefined8 unaff_XMM10_Qa;
  undefined8 unaff_XMM10_Qb;
  
  *(undefined8 *)(in_RAX + -0x58) = unaff_XMM6_Qa;
  *(undefined8 *)(in_RAX + -0x50) = unaff_XMM6_Qb;
  *(undefined8 *)(in_RAX + -0x48) = unaff_XMM7_Qa;
  *(undefined8 *)(in_RAX + -0x40) = unaff_XMM7_Qb;
  *(undefined8 *)(in_RAX + -0x38) = unaff_XMM8_Qa;
  *(undefined8 *)(in_RAX + -0x30) = unaff_XMM8_Qb;
  *(undefined8 *)(in_RAX + -0x28) = unaff_XMM9_Qa;
  *(undefined8 *)(in_RAX + -0x20) = unaff_XMM9_Qb;
  *(undefined8 *)(in_RAX + -0x18) = unaff_XMM10_Qa;
  *(undefined8 *)(in_RAX + -0x10) = unaff_XMM10_Qb;
  auVar31._12_4_ = *(undefined4 *)(param_1 + 1);
  auVar31._8_4_ = *(undefined4 *)((longlong)param_1 + 0xc);
  auVar2._20_4_ = *(undefined4 *)param_1;
  auVar2._16_4_ = *(undefined4 *)((longlong)param_1 + 4);
  auVar2._24_4_ = *(undefined4 *)((longlong)param_1 + 0xc);
  auVar2._28_4_ = *(undefined4 *)(param_1 + 1);
  auVar31._0_8_ = CONCAT44(*(undefined4 *)(param_1 + 3),*(undefined4 *)((longlong)param_1 + 0x1c));
  auVar2._8_4_ = *(undefined4 *)((longlong)param_1 + 0x14);
  auVar2._0_8_ = auVar31._0_8_;
  auVar2._12_4_ = *(undefined4 *)(param_1 + 2);
  auVar30 = auVar2._8_16_;
  do {
    auVar36 = pshufb(*param_2,_DAT_140def0c0);
    pauVar1 = param_2 + 3;
    auVar28._0_4_ = K256 + auVar36._0_4_;
    auVar28._4_4_ = DAT_140deeec4 + auVar36._4_4_;
    auVar28._8_4_ = DAT_140deeec8 + auVar36._8_4_;
    auVar28._12_4_ = DAT_140deeecc + auVar36._12_4_;
    auVar41 = pshufb(param_2[1],_DAT_140def0c0);
    auVar32 = sha256rnds2_sha(auVar31,auVar30,auVar28);
    auVar33._4_4_ = auVar28._12_4_;
    auVar33._0_4_ = auVar28._8_4_;
    auVar33._8_4_ = auVar28._0_4_;
    auVar33._12_4_ = auVar28._0_4_;
    auVar28 = sha256rnds2_sha(auVar30,auVar32,auVar33);
    auVar37._0_4_ = DAT_140deeee0 + auVar41._0_4_;
    auVar37._4_4_ = DAT_140deeee4 + auVar41._4_4_;
    auVar37._8_4_ = DAT_140deeee8 + auVar41._8_4_;
    auVar37._12_4_ = DAT_140deeeec + auVar41._12_4_;
    auVar45 = pshufb(param_2[2],_DAT_140def0c0);
    auVar33 = sha256rnds2_sha(auVar32,auVar28,auVar37);
    auVar32._4_4_ = auVar37._12_4_;
    auVar32._0_4_ = auVar37._8_4_;
    auVar32._8_4_ = auVar37._0_4_;
    auVar32._12_4_ = auVar37._0_4_;
    param_2 = param_2 + 4;
    auVar37 = sha256msg1_sha(auVar36,auVar41);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar32);
    auVar36._0_4_ = DAT_140deef00 + auVar45._0_4_;
    auVar36._4_4_ = DAT_140deef04 + auVar45._4_4_;
    auVar36._8_4_ = DAT_140deef08 + auVar45._8_4_;
    auVar36._12_4_ = DAT_140deef0c + auVar45._12_4_;
    auVar49 = pshufb(*pauVar1,_DAT_140def0c0);
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar36);
    auVar50._4_4_ = auVar36._12_4_;
    auVar50._0_4_ = auVar36._8_4_;
    auVar50._8_4_ = auVar36._0_4_;
    auVar50._12_4_ = auVar36._0_4_;
    auVar38._0_4_ = auVar37._0_4_ + auVar45._4_4_;
    auVar38._4_4_ = auVar37._4_4_ + auVar45._8_4_;
    auVar38._8_4_ = auVar37._8_4_ + auVar45._12_4_;
    auVar38._12_4_ = auVar37._12_4_ + auVar49._0_4_;
    auVar32 = sha256msg1_sha(auVar41,auVar45);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar50);
    auVar41._0_4_ = DAT_140deef20 + auVar49._0_4_;
    auVar41._4_4_ = DAT_140deef24 + auVar49._4_4_;
    auVar41._8_4_ = DAT_140deef28 + auVar49._8_4_;
    auVar41._12_4_ = DAT_140deef2c + auVar49._12_4_;
    auVar37 = sha256msg2_sha(auVar38,auVar49);
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar41);
    auVar5._4_4_ = auVar41._12_4_;
    auVar5._0_4_ = auVar41._8_4_;
    auVar5._8_4_ = auVar41._0_4_;
    auVar5._12_4_ = auVar41._0_4_;
    auVar42._0_4_ = auVar32._0_4_ + auVar49._4_4_;
    auVar42._4_4_ = auVar32._4_4_ + auVar49._8_4_;
    auVar42._8_4_ = auVar32._8_4_ + auVar49._12_4_;
    auVar42._12_4_ = auVar32._12_4_ + auVar37._0_4_;
    auVar36 = sha256msg1_sha(auVar45,auVar49);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar5);
    auVar45._0_4_ = DAT_140deef40 + auVar37._0_4_;
    auVar45._4_4_ = DAT_140deef44 + auVar37._4_4_;
    auVar45._8_4_ = DAT_140deef48 + auVar37._8_4_;
    auVar45._12_4_ = DAT_140deef4c + auVar37._12_4_;
    auVar32 = sha256msg2_sha(auVar42,auVar37);
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar45);
    auVar6._4_4_ = auVar45._12_4_;
    auVar6._0_4_ = auVar45._8_4_;
    auVar6._8_4_ = auVar45._0_4_;
    auVar6._12_4_ = auVar45._0_4_;
    auVar46._0_4_ = auVar36._0_4_ + auVar37._4_4_;
    auVar46._4_4_ = auVar36._4_4_ + auVar37._8_4_;
    auVar46._8_4_ = auVar36._8_4_ + auVar37._12_4_;
    auVar46._12_4_ = auVar36._12_4_ + auVar32._0_4_;
    auVar50 = sha256msg1_sha(auVar49,auVar37);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar6);
    auVar49._0_4_ = DAT_140deef60 + auVar32._0_4_;
    auVar49._4_4_ = DAT_140deef64 + auVar32._4_4_;
    auVar49._8_4_ = DAT_140deef68 + auVar32._8_4_;
    auVar49._12_4_ = DAT_140deef6c + auVar32._12_4_;
    auVar36 = sha256msg2_sha(auVar46,auVar32);
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar49);
    auVar7._4_4_ = auVar49._12_4_;
    auVar7._0_4_ = auVar49._8_4_;
    auVar7._8_4_ = auVar49._0_4_;
    auVar7._12_4_ = auVar49._0_4_;
    auVar51._0_4_ = auVar50._0_4_ + auVar32._4_4_;
    auVar51._4_4_ = auVar50._4_4_ + auVar32._8_4_;
    auVar51._8_4_ = auVar50._8_4_ + auVar32._12_4_;
    auVar51._12_4_ = auVar50._12_4_ + auVar36._0_4_;
    auVar37 = sha256msg1_sha(auVar37,auVar32);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar7);
    auVar8._0_4_ = DAT_140deef80 + auVar36._0_4_;
    auVar8._4_4_ = DAT_140deef84 + auVar36._4_4_;
    auVar8._8_4_ = DAT_140deef88 + auVar36._8_4_;
    auVar8._12_4_ = DAT_140deef8c + auVar36._12_4_;
    auVar50 = sha256msg2_sha(auVar51,auVar36);
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar8);
    auVar9._4_4_ = auVar8._12_4_;
    auVar9._0_4_ = auVar8._8_4_;
    auVar9._8_4_ = auVar8._0_4_;
    auVar9._12_4_ = auVar8._0_4_;
    auVar39._0_4_ = auVar37._0_4_ + auVar36._4_4_;
    auVar39._4_4_ = auVar37._4_4_ + auVar36._8_4_;
    auVar39._8_4_ = auVar37._8_4_ + auVar36._12_4_;
    auVar39._12_4_ = auVar37._12_4_ + auVar50._0_4_;
    auVar32 = sha256msg1_sha(auVar32,auVar36);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar9);
    auVar10._0_4_ = DAT_140deefa0 + auVar50._0_4_;
    auVar10._4_4_ = DAT_140deefa4 + auVar50._4_4_;
    auVar10._8_4_ = DAT_140deefa8 + auVar50._8_4_;
    auVar10._12_4_ = DAT_140deefac + auVar50._12_4_;
    auVar37 = sha256msg2_sha(auVar39,auVar50);
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar10);
    auVar11._4_4_ = auVar10._12_4_;
    auVar11._0_4_ = auVar10._8_4_;
    auVar11._8_4_ = auVar10._0_4_;
    auVar11._12_4_ = auVar10._0_4_;
    auVar43._0_4_ = auVar32._0_4_ + auVar50._4_4_;
    auVar43._4_4_ = auVar32._4_4_ + auVar50._8_4_;
    auVar43._8_4_ = auVar32._8_4_ + auVar50._12_4_;
    auVar43._12_4_ = auVar32._12_4_ + auVar37._0_4_;
    auVar36 = sha256msg1_sha(auVar36,auVar50);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar11);
    auVar12._0_4_ = _DAT_140deefc0 + auVar37._0_4_;
    auVar12._4_4_ = _UNK_140deefc4 + auVar37._4_4_;
    auVar12._8_4_ = _UNK_140deefc8 + auVar37._8_4_;
    auVar12._12_4_ = _UNK_140deefcc + auVar37._12_4_;
    auVar32 = sha256msg2_sha(auVar43,auVar37);
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar12);
    auVar13._4_4_ = auVar12._12_4_;
    auVar13._0_4_ = auVar12._8_4_;
    auVar13._8_4_ = auVar12._0_4_;
    auVar13._12_4_ = auVar12._0_4_;
    auVar47._0_4_ = auVar36._0_4_ + auVar37._4_4_;
    auVar47._4_4_ = auVar36._4_4_ + auVar37._8_4_;
    auVar47._8_4_ = auVar36._8_4_ + auVar37._12_4_;
    auVar47._12_4_ = auVar36._12_4_ + auVar32._0_4_;
    auVar50 = sha256msg1_sha(auVar50,auVar37);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar13);
    auVar14._0_4_ = _DAT_140deefe0 + auVar32._0_4_;
    auVar14._4_4_ = _UNK_140deefe4 + auVar32._4_4_;
    auVar14._8_4_ = _UNK_140deefe8 + auVar32._8_4_;
    auVar14._12_4_ = _UNK_140deefec + auVar32._12_4_;
    auVar36 = sha256msg2_sha(auVar47,auVar32);
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar14);
    auVar15._4_4_ = auVar14._12_4_;
    auVar15._0_4_ = auVar14._8_4_;
    auVar15._8_4_ = auVar14._0_4_;
    auVar15._12_4_ = auVar14._0_4_;
    auVar52._0_4_ = auVar50._0_4_ + auVar32._4_4_;
    auVar52._4_4_ = auVar50._4_4_ + auVar32._8_4_;
    auVar52._8_4_ = auVar50._8_4_ + auVar32._12_4_;
    auVar52._12_4_ = auVar50._12_4_ + auVar36._0_4_;
    auVar37 = sha256msg1_sha(auVar37,auVar32);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar15);
    auVar16._0_4_ = _DAT_140def000 + auVar36._0_4_;
    auVar16._4_4_ = _UNK_140def004 + auVar36._4_4_;
    auVar16._8_4_ = _UNK_140def008 + auVar36._8_4_;
    auVar16._12_4_ = _UNK_140def00c + auVar36._12_4_;
    auVar50 = sha256msg2_sha(auVar52,auVar36);
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar16);
    auVar17._4_4_ = auVar16._12_4_;
    auVar17._0_4_ = auVar16._8_4_;
    auVar17._8_4_ = auVar16._0_4_;
    auVar17._12_4_ = auVar16._0_4_;
    auVar40._0_4_ = auVar37._0_4_ + auVar36._4_4_;
    auVar40._4_4_ = auVar37._4_4_ + auVar36._8_4_;
    auVar40._8_4_ = auVar37._8_4_ + auVar36._12_4_;
    auVar40._12_4_ = auVar37._12_4_ + auVar50._0_4_;
    auVar32 = sha256msg1_sha(auVar32,auVar36);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar17);
    auVar18._0_4_ = _DAT_140def020 + auVar50._0_4_;
    auVar18._4_4_ = _UNK_140def024 + auVar50._4_4_;
    auVar18._8_4_ = _UNK_140def028 + auVar50._8_4_;
    auVar18._12_4_ = _UNK_140def02c + auVar50._12_4_;
    auVar37 = sha256msg2_sha(auVar40,auVar50);
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar18);
    auVar19._4_4_ = auVar18._12_4_;
    auVar19._0_4_ = auVar18._8_4_;
    auVar19._8_4_ = auVar18._0_4_;
    auVar19._12_4_ = auVar18._0_4_;
    auVar44._0_4_ = auVar32._0_4_ + auVar50._4_4_;
    auVar44._4_4_ = auVar32._4_4_ + auVar50._8_4_;
    auVar44._8_4_ = auVar32._8_4_ + auVar50._12_4_;
    auVar44._12_4_ = auVar32._12_4_ + auVar37._0_4_;
    auVar36 = sha256msg1_sha(auVar36,auVar50);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar19);
    auVar20._0_4_ = _DAT_140def040 + auVar37._0_4_;
    auVar20._4_4_ = _UNK_140def044 + auVar37._4_4_;
    auVar20._8_4_ = _UNK_140def048 + auVar37._8_4_;
    auVar20._12_4_ = _UNK_140def04c + auVar37._12_4_;
    auVar32 = sha256msg2_sha(auVar44,auVar37);
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar20);
    auVar21._4_4_ = auVar20._12_4_;
    auVar21._0_4_ = auVar20._8_4_;
    auVar21._8_4_ = auVar20._0_4_;
    auVar21._12_4_ = auVar20._0_4_;
    auVar48._0_4_ = auVar36._0_4_ + auVar37._4_4_;
    auVar48._4_4_ = auVar36._4_4_ + auVar37._8_4_;
    auVar48._8_4_ = auVar36._8_4_ + auVar37._12_4_;
    auVar48._12_4_ = auVar36._12_4_ + auVar32._0_4_;
    auVar36 = sha256msg1_sha(auVar50,auVar37);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar21);
    auVar22._0_4_ = _DAT_140def060 + auVar32._0_4_;
    auVar22._4_4_ = _UNK_140def064 + auVar32._4_4_;
    auVar22._8_4_ = _UNK_140def068 + auVar32._8_4_;
    auVar22._12_4_ = _UNK_140def06c + auVar32._12_4_;
    auVar37 = sha256msg2_sha(auVar48,auVar32);
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar22);
    auVar23._4_4_ = auVar22._12_4_;
    auVar23._0_4_ = auVar22._8_4_;
    auVar23._8_4_ = auVar22._0_4_;
    auVar23._12_4_ = auVar22._0_4_;
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar23);
    auVar53._0_4_ = auVar36._0_4_ + auVar32._4_4_;
    auVar53._4_4_ = auVar36._4_4_ + auVar32._8_4_;
    auVar53._8_4_ = auVar36._8_4_ + auVar32._12_4_;
    auVar53._12_4_ = auVar36._12_4_ + auVar37._0_4_;
    auVar24._0_4_ = _DAT_140def080 + auVar37._0_4_;
    auVar24._4_4_ = _UNK_140def084 + auVar37._4_4_;
    auVar24._8_4_ = _UNK_140def088 + auVar37._8_4_;
    auVar24._12_4_ = _UNK_140def08c + auVar37._12_4_;
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar24);
    auVar25._4_4_ = auVar24._12_4_;
    auVar25._0_4_ = auVar24._8_4_;
    auVar25._8_4_ = auVar24._0_4_;
    auVar25._12_4_ = auVar24._0_4_;
    auVar37 = sha256msg2_sha(auVar53,auVar37);
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar25);
    auVar26._0_4_ = _DAT_140def0a0 + auVar37._0_4_;
    auVar26._4_4_ = _UNK_140def0a4 + auVar37._4_4_;
    auVar26._8_4_ = _UNK_140def0a8 + auVar37._8_4_;
    auVar26._12_4_ = _UNK_140def0ac + auVar37._12_4_;
    auVar33 = sha256rnds2_sha(auVar33,auVar28,auVar26);
    auVar27._4_4_ = auVar26._12_4_;
    auVar27._0_4_ = auVar26._8_4_;
    auVar27._8_4_ = auVar26._0_4_;
    auVar27._12_4_ = auVar26._0_4_;
    param_3 = param_3 + -1;
    auVar28 = sha256rnds2_sha(auVar28,auVar33,auVar27);
    auVar34._0_4_ = auVar33._0_4_ + auVar31._0_4_;
    auVar34._4_4_ = auVar33._4_4_ + auVar31._4_4_;
    auVar34._8_4_ = auVar33._8_4_ + auVar31._8_4_;
    auVar34._12_4_ = auVar33._12_4_ + auVar31._12_4_;
    auVar29._0_4_ = auVar28._0_4_ + auVar30._0_4_;
    auVar29._4_4_ = auVar28._4_4_ + auVar30._4_4_;
    auVar29._8_4_ = auVar28._8_4_ + auVar30._8_4_;
    auVar29._12_4_ = auVar28._12_4_ + auVar30._12_4_;
    auVar30 = auVar29;
    auVar31 = auVar34;
  } while (param_3 != 0);
  auVar35._4_4_ = auVar34._0_4_;
  auVar35._0_4_ = auVar34._4_4_;
  auVar35._8_4_ = auVar34._12_4_;
  auVar35._12_4_ = auVar34._8_4_;
  auVar3._4_4_ = auVar29._8_4_;
  auVar3._0_4_ = auVar29._12_4_;
  auVar3._8_4_ = auVar29._4_4_;
  auVar3._12_4_ = auVar29._0_4_;
  auVar4._4_8_ = auVar29._8_8_;
  auVar4._0_4_ = auVar29._0_4_;
  auVar30._0_8_ = auVar4._0_8_ << 0x20;
  auVar30._8_4_ = auVar29._12_4_;
  auVar30._12_4_ = auVar29._8_4_;
  auVar3._16_16_ = auVar35;
  *param_1 = auVar30._8_8_;
  param_1[1] = auVar35._8_8_;
  *(undefined1 (*) [16])(param_1 + 2) = auVar3._8_16_;
  return;
}

// sha256_block_data_order_ssse3 @ 140def540

/* WARNING: Removing unreachable block (ram,0x000140defc48) */
/* WARNING: Removing unreachable block (ram,0x000140defe4e) */
/* WARNING: Removing unreachable block (ram,0x000140defa3a) */
/* WARNING: Removing unreachable block (ram,0x000140def835) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sha256_block_data_order_ssse3(uint *param_1,undefined1 (*param_2) [16],longlong param_3)

{
  char *pcVar1;
  undefined1 (*pauVar2) [16];
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint uVar20;
  uint uVar21;
  undefined1 auVar19 [16];
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  uint uVar35;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
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
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  
  pauVar2 = param_2 + param_3 * 4;
  uVar3 = *param_1;
  uVar6 = param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  uVar15 = param_1[4];
  uVar14 = param_1[5];
  uVar13 = param_1[6];
  uVar12 = param_1[7];
  do {
    auVar16 = pshufb(*param_2,_DAT_140def0c0);
    auVar17 = pshufb(param_2[1],_DAT_140def0c0);
    auVar18 = pshufb(param_2[2],_DAT_140def0c0);
    iStack_100 = K256 + auVar16._0_4_;
    iStack_fc = DAT_140deeec4 + auVar16._4_4_;
    iStack_f8 = DAT_140deeec8 + auVar16._8_4_;
    iStack_f4 = DAT_140deeecc + auVar16._12_4_;
    auVar19 = pshufb(param_2[3],_DAT_140def0c0);
    iStack_f0 = DAT_140deeee0 + auVar17._0_4_;
    iStack_ec = DAT_140deeee4 + auVar17._4_4_;
    iStack_e8 = DAT_140deeee8 + auVar17._8_4_;
    iStack_e4 = DAT_140deeeec + auVar17._12_4_;
    iStack_e0 = DAT_140deef00 + auVar18._0_4_;
    iStack_dc = DAT_140deef04 + auVar18._4_4_;
    iStack_d8 = DAT_140deef08 + auVar18._8_4_;
    iStack_d4 = DAT_140deef0c + auVar18._12_4_;
    iStack_d0 = DAT_140deef20 + auVar19._0_4_;
    iStack_cc = DAT_140deef24 + auVar19._4_4_;
    iStack_c8 = DAT_140deef28 + auVar19._8_4_;
    iStack_c4 = DAT_140deef2c + auVar19._12_4_;
    uVar8 = uVar6 ^ uVar4;
    piVar7 = &K256;
    do {
      uVar10 = (uVar15 >> 0xe | uVar15 << 0x12) ^ uVar15;
      uVar11 = (uVar3 >> 9 | uVar3 << 0x17) ^ uVar3;
      uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar15;
      uVar23 = auVar16._4_4_;
      uVar24 = auVar16._8_4_;
      uVar25 = auVar16._12_4_;
      uVar26 = auVar17._0_4_;
      uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar3;
      iVar9 = uVar12 + iStack_100 + ((uVar14 ^ uVar13) & uVar15 ^ uVar13) +
              (uVar10 >> 6 | uVar10 << 0x1a);
      uVar35 = auVar18._4_4_;
      uVar60 = auVar18._8_4_;
      uVar61 = auVar18._12_4_;
      uVar62 = auVar19._0_4_;
      uVar5 = uVar5 + iVar9;
      uVar20 = auVar19._4_4_;
      uVar21 = auVar19._8_4_;
      uVar22 = auVar19._12_4_;
      auVar36._0_8_ = CONCAT44(uVar21,uVar21);
      auVar36._8_4_ = uVar22;
      auVar36._12_4_ = uVar22;
      uVar12 = (uVar11 >> 2 | uVar11 << 0x1e) + iVar9 + (uVar8 & (uVar3 ^ uVar6) ^ uVar6);
      uVar8 = (uVar5 >> 0xe | uVar5 * 0x40000) ^ uVar5;
      uVar10 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar5;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar12;
      auVar37._0_4_ = uVar21 >> 10;
      auVar37._4_4_ = 0;
      auVar37._8_4_ = uVar22 >> 10;
      auVar37._12_4_ = uVar22 >> 10;
      iVar9 = uVar13 + iStack_fc + ((uVar15 ^ uVar14) & uVar5 ^ uVar14) +
              (uVar8 >> 6 | uVar8 << 0x1a);
      uVar4 = uVar4 + iVar9;
      auVar27._0_8_ = auVar36._0_8_ >> 0x11;
      auVar27._8_8_ = auVar36._8_8_ >> 0x11;
      uVar13 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar3 ^ uVar6) & (uVar12 ^ uVar3) ^ uVar3)
      ;
      auVar38._0_8_ = auVar36._0_8_ >> 0x13;
      auVar38._8_8_ = auVar36._8_8_ >> 0x13;
      uVar8 = (uVar4 >> 0xe | uVar4 * 0x40000) ^ uVar4;
      auVar38 = auVar37 ^ auVar27 ^ auVar38;
      uVar10 = (uVar13 >> 9 | uVar13 * 0x800000) ^ uVar13;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar4;
      auVar16._0_4_ =
           auVar16._0_4_ + uVar35 +
           (uVar23 >> 3 ^ uVar23 >> 7 ^ uVar23 << 0xe ^ uVar23 >> 0x12 ^ uVar23 << 0x19) +
           auVar38._0_4_;
      auVar16._4_4_ =
           uVar23 + uVar60 +
           (uVar24 >> 3 ^ uVar24 >> 7 ^ uVar24 << 0xe ^ uVar24 >> 0x12 ^ uVar24 << 0x19) +
           auVar38._8_4_;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar13;
      iVar9 = uVar14 + iStack_f8 + ((uVar5 ^ uVar15) & uVar4 ^ uVar15) +
              (uVar8 >> 6 | uVar8 << 0x1a);
      auVar39._0_8_ = CONCAT44(auVar16._0_4_,auVar16._0_4_);
      auVar39._8_4_ = auVar16._4_4_;
      auVar39._12_4_ = auVar16._4_4_;
      uVar6 = uVar6 + iVar9;
      auVar40._0_4_ = auVar16._0_4_ >> 10;
      auVar40._4_4_ = 0;
      auVar40._8_4_ = auVar16._4_4_ >> 10;
      auVar40._12_4_ = auVar16._4_4_ >> 10;
      uVar14 = (uVar10 >> 2 | uVar10 << 0x1e) +
               iVar9 + ((uVar12 ^ uVar3) & (uVar13 ^ uVar12) ^ uVar12);
      auVar28._0_8_ = auVar39._0_8_ >> 0x11;
      auVar28._8_8_ = auVar39._8_8_ >> 0x11;
      uVar8 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
      uVar10 = (uVar14 >> 9 | uVar14 * 0x800000) ^ uVar14;
      auVar41._0_8_ = auVar39._0_8_ >> 0x13;
      auVar41._8_8_ = auVar39._8_8_ >> 0x13;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar6;
      auVar41 = auVar40 ^ auVar28 ^ auVar41;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar14;
      iVar9 = uVar15 + iStack_f4 + ((uVar4 ^ uVar5) & uVar6 ^ uVar5) + (uVar8 >> 6 | uVar8 << 0x1a);
      auVar16._8_4_ =
           uVar24 + uVar61 +
           (uVar25 >> 3 ^ uVar25 >> 7 ^ uVar25 << 0xe ^ uVar25 >> 0x12 ^ uVar25 << 0x19) +
           auVar41._0_4_;
      auVar16._12_4_ =
           uVar25 + uVar62 +
           (uVar26 >> 3 ^ uVar26 >> 7 ^ uVar26 << 0xe ^ uVar26 >> 0x12 ^ uVar26 << 0x19) +
           auVar41._8_4_;
      uVar3 = uVar3 + iVar9;
      iStack_100 = piVar7[0x20] + auVar16._0_4_;
      iStack_fc = piVar7[0x21] + auVar16._4_4_;
      iStack_f8 = piVar7[0x22] + auVar16._8_4_;
      iStack_f4 = piVar7[0x23] + auVar16._12_4_;
      uVar15 = (uVar10 >> 2 | uVar10 << 0x1e) +
               iVar9 + ((uVar13 ^ uVar12) & (uVar14 ^ uVar13) ^ uVar13);
      uVar8 = (uVar3 >> 0xe | uVar3 * 0x40000) ^ uVar3;
      uVar10 = (uVar15 >> 9 | uVar15 * 0x800000) ^ uVar15;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar3;
      uVar11 = auVar17._4_4_;
      uVar23 = auVar17._8_4_;
      uVar24 = auVar17._12_4_;
      uVar25 = auVar18._0_4_;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar15;
      iVar9 = uVar5 + iStack_f0 + ((uVar6 ^ uVar4) & uVar3 ^ uVar4) + (uVar8 >> 6 | uVar8 << 0x1a);
      uVar12 = uVar12 + iVar9;
      auVar42._0_8_ = CONCAT44(auVar16._8_4_,auVar16._8_4_);
      auVar42._8_4_ = auVar16._12_4_;
      auVar42._12_4_ = auVar16._12_4_;
      uVar5 = (uVar10 >> 2 | uVar10 << 0x1e) +
              iVar9 + ((uVar14 ^ uVar13) & (uVar15 ^ uVar14) ^ uVar14);
      uVar8 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
      uVar10 = (uVar5 >> 9 | uVar5 * 0x800000) ^ uVar5;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar12;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar5;
      auVar43._0_4_ = auVar16._8_4_ >> 10;
      auVar43._4_4_ = 0;
      auVar43._8_4_ = auVar16._12_4_ >> 10;
      auVar43._12_4_ = auVar16._12_4_ >> 10;
      iVar9 = uVar4 + iStack_ec + ((uVar3 ^ uVar6) & uVar12 ^ uVar6) + (uVar8 >> 6 | uVar8 << 0x1a);
      uVar13 = uVar13 + iVar9;
      auVar29._0_8_ = auVar42._0_8_ >> 0x11;
      auVar29._8_8_ = auVar42._8_8_ >> 0x11;
      uVar4 = (uVar10 >> 2 | uVar10 << 0x1e) +
              iVar9 + ((uVar15 ^ uVar14) & (uVar5 ^ uVar15) ^ uVar15);
      auVar44._0_8_ = auVar42._0_8_ >> 0x13;
      auVar44._8_8_ = auVar42._8_8_ >> 0x13;
      uVar8 = (uVar13 >> 0xe | uVar13 * 0x40000) ^ uVar13;
      auVar44 = auVar43 ^ auVar29 ^ auVar44;
      uVar10 = (uVar4 >> 9 | uVar4 * 0x800000) ^ uVar4;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar13;
      auVar17._0_4_ =
           uVar26 + uVar20 +
           (uVar11 >> 3 ^ uVar11 >> 7 ^ uVar11 << 0xe ^ uVar11 >> 0x12 ^ uVar11 << 0x19) +
           auVar44._0_4_;
      auVar17._4_4_ =
           uVar11 + uVar21 +
           (uVar23 >> 3 ^ uVar23 >> 7 ^ uVar23 << 0xe ^ uVar23 >> 0x12 ^ uVar23 << 0x19) +
           auVar44._8_4_;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar4;
      iVar9 = uVar6 + iStack_e8 + ((uVar12 ^ uVar3) & uVar13 ^ uVar3) + (uVar8 >> 6 | uVar8 << 0x1a)
      ;
      auVar45._0_8_ = CONCAT44(auVar17._0_4_,auVar17._0_4_);
      auVar45._8_4_ = auVar17._4_4_;
      auVar45._12_4_ = auVar17._4_4_;
      uVar14 = uVar14 + iVar9;
      auVar46._0_4_ = auVar17._0_4_ >> 10;
      auVar46._4_4_ = 0;
      auVar46._8_4_ = auVar17._4_4_ >> 10;
      auVar46._12_4_ = auVar17._4_4_ >> 10;
      uVar6 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar5 ^ uVar15) & (uVar4 ^ uVar5) ^ uVar5);
      auVar30._0_8_ = auVar45._0_8_ >> 0x11;
      auVar30._8_8_ = auVar45._8_8_ >> 0x11;
      uVar8 = (uVar14 >> 0xe | uVar14 * 0x40000) ^ uVar14;
      uVar10 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
      auVar47._0_8_ = auVar45._0_8_ >> 0x13;
      auVar47._8_8_ = auVar45._8_8_ >> 0x13;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar14;
      auVar47 = auVar46 ^ auVar30 ^ auVar47;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar6;
      iVar9 = uVar3 + iStack_e4 + ((uVar13 ^ uVar12) & uVar14 ^ uVar12) +
              (uVar8 >> 6 | uVar8 << 0x1a);
      auVar17._8_4_ =
           uVar23 + uVar22 +
           (uVar24 >> 3 ^ uVar24 >> 7 ^ uVar24 << 0xe ^ uVar24 >> 0x12 ^ uVar24 << 0x19) +
           auVar47._0_4_;
      auVar17._12_4_ =
           uVar24 + auVar16._0_4_ +
           (uVar25 >> 3 ^ uVar25 >> 7 ^ uVar25 << 0xe ^ uVar25 >> 0x12 ^ uVar25 << 0x19) +
           auVar47._8_4_;
      uVar15 = uVar15 + iVar9;
      iStack_f0 = piVar7[0x28] + auVar17._0_4_;
      iStack_ec = piVar7[0x29] + auVar17._4_4_;
      iStack_e8 = piVar7[0x2a] + auVar17._8_4_;
      iStack_e4 = piVar7[0x2b] + auVar17._12_4_;
      uVar3 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar4 ^ uVar5) & (uVar6 ^ uVar4) ^ uVar4);
      uVar8 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
      uVar10 = (uVar3 >> 9 | uVar3 * 0x800000) ^ uVar3;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar15;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar3;
      iVar9 = uVar12 + iStack_e0 + ((uVar14 ^ uVar13) & uVar15 ^ uVar13) +
              (uVar8 >> 6 | uVar8 << 0x1a);
      uVar5 = uVar5 + iVar9;
      auVar48._0_8_ = CONCAT44(auVar17._8_4_,auVar17._8_4_);
      auVar48._8_4_ = auVar17._12_4_;
      auVar48._12_4_ = auVar17._12_4_;
      uVar12 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar6 ^ uVar4) & (uVar3 ^ uVar6) ^ uVar6);
      uVar8 = (uVar5 >> 0xe | uVar5 * 0x40000) ^ uVar5;
      uVar10 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar5;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar12;
      auVar49._0_4_ = auVar17._8_4_ >> 10;
      auVar49._4_4_ = 0;
      auVar49._8_4_ = auVar17._12_4_ >> 10;
      auVar49._12_4_ = auVar17._12_4_ >> 10;
      iVar9 = uVar13 + iStack_dc + ((uVar15 ^ uVar14) & uVar5 ^ uVar14) +
              (uVar8 >> 6 | uVar8 << 0x1a);
      uVar4 = uVar4 + iVar9;
      auVar31._0_8_ = auVar48._0_8_ >> 0x11;
      auVar31._8_8_ = auVar48._8_8_ >> 0x11;
      uVar13 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar3 ^ uVar6) & (uVar12 ^ uVar3) ^ uVar3)
      ;
      auVar50._0_8_ = auVar48._0_8_ >> 0x13;
      auVar50._8_8_ = auVar48._8_8_ >> 0x13;
      uVar8 = (uVar4 >> 0xe | uVar4 * 0x40000) ^ uVar4;
      auVar50 = auVar49 ^ auVar31 ^ auVar50;
      uVar10 = (uVar13 >> 9 | uVar13 * 0x800000) ^ uVar13;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar4;
      auVar18._0_4_ =
           uVar25 + auVar16._4_4_ +
           (uVar35 >> 3 ^ uVar35 >> 7 ^ uVar35 << 0xe ^ uVar35 >> 0x12 ^ uVar35 << 0x19) +
           auVar50._0_4_;
      auVar18._4_4_ =
           uVar35 + auVar16._8_4_ +
           (uVar60 >> 3 ^ uVar60 >> 7 ^ uVar60 << 0xe ^ uVar60 >> 0x12 ^ uVar60 << 0x19) +
           auVar50._8_4_;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar13;
      iVar9 = uVar14 + iStack_d8 + ((uVar5 ^ uVar15) & uVar4 ^ uVar15) +
              (uVar8 >> 6 | uVar8 << 0x1a);
      auVar51._0_8_ = CONCAT44(auVar18._0_4_,auVar18._0_4_);
      auVar51._8_4_ = auVar18._4_4_;
      auVar51._12_4_ = auVar18._4_4_;
      uVar6 = uVar6 + iVar9;
      auVar52._0_4_ = auVar18._0_4_ >> 10;
      auVar52._4_4_ = 0;
      auVar52._8_4_ = auVar18._4_4_ >> 10;
      auVar52._12_4_ = auVar18._4_4_ >> 10;
      uVar14 = (uVar10 >> 2 | uVar10 << 0x1e) +
               iVar9 + ((uVar12 ^ uVar3) & (uVar13 ^ uVar12) ^ uVar12);
      auVar32._0_8_ = auVar51._0_8_ >> 0x11;
      auVar32._8_8_ = auVar51._8_8_ >> 0x11;
      uVar8 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
      uVar10 = (uVar14 >> 9 | uVar14 * 0x800000) ^ uVar14;
      auVar53._0_8_ = auVar51._0_8_ >> 0x13;
      auVar53._8_8_ = auVar51._8_8_ >> 0x13;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar6;
      auVar53 = auVar52 ^ auVar32 ^ auVar53;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar14;
      iVar9 = uVar15 + iStack_d4 + ((uVar4 ^ uVar5) & uVar6 ^ uVar5) + (uVar8 >> 6 | uVar8 << 0x1a);
      auVar18._8_4_ =
           uVar60 + auVar16._12_4_ +
           (uVar61 >> 3 ^ uVar61 >> 7 ^ uVar61 << 0xe ^ uVar61 >> 0x12 ^ uVar61 << 0x19) +
           auVar53._0_4_;
      auVar18._12_4_ =
           uVar61 + auVar17._0_4_ +
           (uVar62 >> 3 ^ uVar62 >> 7 ^ uVar62 << 0xe ^ uVar62 >> 0x12 ^ uVar62 << 0x19) +
           auVar53._8_4_;
      uVar3 = uVar3 + iVar9;
      iStack_e0 = piVar7[0x30] + auVar18._0_4_;
      iStack_dc = piVar7[0x31] + auVar18._4_4_;
      iStack_d8 = piVar7[0x32] + auVar18._8_4_;
      iStack_d4 = piVar7[0x33] + auVar18._12_4_;
      uVar15 = (uVar10 >> 2 | uVar10 << 0x1e) +
               iVar9 + ((uVar13 ^ uVar12) & (uVar14 ^ uVar13) ^ uVar13);
      uVar8 = (uVar3 >> 0xe | uVar3 * 0x40000) ^ uVar3;
      uVar10 = (uVar15 >> 9 | uVar15 * 0x800000) ^ uVar15;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar3;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar15;
      iVar9 = uVar5 + iStack_d0 + ((uVar6 ^ uVar4) & uVar3 ^ uVar4) + (uVar8 >> 6 | uVar8 << 0x1a);
      uVar12 = uVar12 + iVar9;
      auVar54._0_8_ = CONCAT44(auVar18._8_4_,auVar18._8_4_);
      auVar54._8_4_ = auVar18._12_4_;
      auVar54._12_4_ = auVar18._12_4_;
      uVar5 = (uVar10 >> 2 | uVar10 << 0x1e) +
              iVar9 + ((uVar14 ^ uVar13) & (uVar15 ^ uVar14) ^ uVar14);
      uVar8 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
      uVar10 = (uVar5 >> 9 | uVar5 * 0x800000) ^ uVar5;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar12;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar5;
      auVar55._0_4_ = auVar18._8_4_ >> 10;
      auVar55._4_4_ = 0;
      auVar55._8_4_ = auVar18._12_4_ >> 10;
      auVar55._12_4_ = auVar18._12_4_ >> 10;
      iVar9 = uVar4 + iStack_cc + ((uVar3 ^ uVar6) & uVar12 ^ uVar6) + (uVar8 >> 6 | uVar8 << 0x1a);
      uVar13 = uVar13 + iVar9;
      auVar33._0_8_ = auVar54._0_8_ >> 0x11;
      auVar33._8_8_ = auVar54._8_8_ >> 0x11;
      uVar4 = (uVar10 >> 2 | uVar10 << 0x1e) +
              iVar9 + ((uVar15 ^ uVar14) & (uVar5 ^ uVar15) ^ uVar15);
      auVar56._0_8_ = auVar54._0_8_ >> 0x13;
      auVar56._8_8_ = auVar54._8_8_ >> 0x13;
      uVar8 = (uVar13 >> 0xe | uVar13 * 0x40000) ^ uVar13;
      auVar56 = auVar55 ^ auVar33 ^ auVar56;
      uVar10 = (uVar4 >> 9 | uVar4 * 0x800000) ^ uVar4;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar13;
      auVar19._0_4_ =
           uVar62 + auVar17._4_4_ +
           (uVar20 >> 3 ^ uVar20 >> 7 ^ uVar20 << 0xe ^ uVar20 >> 0x12 ^ uVar20 << 0x19) +
           auVar56._0_4_;
      auVar19._4_4_ =
           uVar20 + auVar17._8_4_ +
           (uVar21 >> 3 ^ uVar21 >> 7 ^ uVar21 << 0xe ^ uVar21 >> 0x12 ^ uVar21 << 0x19) +
           auVar56._8_4_;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar4;
      iVar9 = uVar6 + iStack_c8 + ((uVar12 ^ uVar3) & uVar13 ^ uVar3) + (uVar8 >> 6 | uVar8 << 0x1a)
      ;
      auVar57._0_8_ = CONCAT44(auVar19._0_4_,auVar19._0_4_);
      auVar57._8_4_ = auVar19._4_4_;
      auVar57._12_4_ = auVar19._4_4_;
      uVar14 = uVar14 + iVar9;
      auVar58._0_4_ = auVar19._0_4_ >> 10;
      auVar58._4_4_ = 0;
      auVar58._8_4_ = auVar19._4_4_ >> 10;
      auVar58._12_4_ = auVar19._4_4_ >> 10;
      uVar6 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar5 ^ uVar15) & (uVar4 ^ uVar5) ^ uVar5);
      auVar34._0_8_ = auVar57._0_8_ >> 0x11;
      auVar34._8_8_ = auVar57._8_8_ >> 0x11;
      uVar8 = (uVar14 >> 0xe | uVar14 * 0x40000) ^ uVar14;
      uVar11 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
      auVar59._0_8_ = auVar57._0_8_ >> 0x13;
      auVar59._8_8_ = auVar57._8_8_ >> 0x13;
      uVar10 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar14;
      auVar59 = auVar58 ^ auVar34 ^ auVar59;
      uVar8 = uVar6 ^ uVar4;
      uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar6;
      iVar9 = uVar3 + iStack_c4 + ((uVar13 ^ uVar12) & uVar14 ^ uVar12) +
              (uVar10 >> 6 | uVar10 << 0x1a);
      auVar19._8_4_ =
           uVar21 + auVar17._12_4_ +
           (uVar22 >> 3 ^ uVar22 >> 7 ^ uVar22 << 0xe ^ uVar22 >> 0x12 ^ uVar22 << 0x19) +
           auVar59._0_4_;
      auVar19._12_4_ =
           uVar22 + auVar18._0_4_ +
           (auVar16._0_4_ >> 3 ^ auVar16._0_4_ >> 7 ^ auVar16._0_4_ * 0x4000 ^ auVar16._0_4_ >> 0x12
           ^ auVar16._0_4_ * 0x2000000) + auVar59._8_4_;
      uVar15 = uVar15 + iVar9;
      iStack_d0 = piVar7[0x38] + auVar19._0_4_;
      iStack_cc = piVar7[0x39] + auVar19._4_4_;
      iStack_c8 = piVar7[0x3a] + auVar19._8_4_;
      iStack_c4 = piVar7[0x3b] + auVar19._12_4_;
      uVar3 = (uVar11 >> 2 | uVar11 << 0x1e) + iVar9 + ((uVar4 ^ uVar5) & uVar8 ^ uVar4);
      pcVar1 = (char *)((longlong)piVar7 + 0x103);
      piVar7 = piVar7 + 0x20;
    } while (*pcVar1 != '\0');
    uVar10 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
    uVar11 = (uVar3 >> 9 | uVar3 * 0x800000) ^ uVar3;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar15;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar3;
    iVar9 = uVar12 + iStack_100 + ((uVar14 ^ uVar13) & uVar15 ^ uVar13) +
            (uVar10 >> 6 | uVar10 << 0x1a);
    uVar5 = uVar5 + iVar9;
    uVar12 = (uVar11 >> 2 | uVar11 << 0x1e) + iVar9 + (uVar8 & (uVar3 ^ uVar6) ^ uVar6);
    uVar8 = (uVar5 >> 0xe | uVar5 * 0x40000) ^ uVar5;
    uVar10 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar5;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar12;
    iVar9 = uVar13 + iStack_fc + ((uVar15 ^ uVar14) & uVar5 ^ uVar14) + (uVar8 >> 6 | uVar8 << 0x1a)
    ;
    uVar4 = uVar4 + iVar9;
    uVar13 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar3 ^ uVar6) & (uVar12 ^ uVar3) ^ uVar3);
    uVar8 = (uVar4 >> 0xe | uVar4 * 0x40000) ^ uVar4;
    uVar10 = (uVar13 >> 9 | uVar13 * 0x800000) ^ uVar13;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar4;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar13;
    iVar9 = uVar14 + iStack_f8 + ((uVar5 ^ uVar15) & uVar4 ^ uVar15) + (uVar8 >> 6 | uVar8 << 0x1a);
    uVar6 = uVar6 + iVar9;
    uVar14 = (uVar10 >> 2 | uVar10 << 0x1e) +
             iVar9 + ((uVar12 ^ uVar3) & (uVar13 ^ uVar12) ^ uVar12);
    uVar8 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
    uVar10 = (uVar14 >> 9 | uVar14 * 0x800000) ^ uVar14;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar6;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar14;
    iVar9 = uVar15 + iStack_f4 + ((uVar4 ^ uVar5) & uVar6 ^ uVar5) + (uVar8 >> 6 | uVar8 << 0x1a);
    uVar3 = uVar3 + iVar9;
    uVar15 = (uVar10 >> 2 | uVar10 << 0x1e) +
             iVar9 + ((uVar13 ^ uVar12) & (uVar14 ^ uVar13) ^ uVar13);
    uVar8 = (uVar3 >> 0xe | uVar3 * 0x40000) ^ uVar3;
    uVar10 = (uVar15 >> 9 | uVar15 * 0x800000) ^ uVar15;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar3;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar15;
    iVar9 = uVar5 + iStack_f0 + ((uVar6 ^ uVar4) & uVar3 ^ uVar4) + (uVar8 >> 6 | uVar8 << 0x1a);
    uVar12 = uVar12 + iVar9;
    uVar5 = (uVar10 >> 2 | uVar10 << 0x1e) +
            iVar9 + ((uVar14 ^ uVar13) & (uVar15 ^ uVar14) ^ uVar14);
    uVar8 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
    uVar10 = (uVar5 >> 9 | uVar5 * 0x800000) ^ uVar5;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar12;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar5;
    iVar9 = uVar4 + iStack_ec + ((uVar3 ^ uVar6) & uVar12 ^ uVar6) + (uVar8 >> 6 | uVar8 << 0x1a);
    uVar13 = uVar13 + iVar9;
    uVar4 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar15 ^ uVar14) & (uVar5 ^ uVar15) ^ uVar15)
    ;
    uVar8 = (uVar13 >> 0xe | uVar13 * 0x40000) ^ uVar13;
    uVar10 = (uVar4 >> 9 | uVar4 * 0x800000) ^ uVar4;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar13;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar4;
    iVar9 = uVar6 + iStack_e8 + ((uVar12 ^ uVar3) & uVar13 ^ uVar3) + (uVar8 >> 6 | uVar8 << 0x1a);
    uVar14 = uVar14 + iVar9;
    uVar6 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar5 ^ uVar15) & (uVar4 ^ uVar5) ^ uVar5);
    uVar8 = (uVar14 >> 0xe | uVar14 * 0x40000) ^ uVar14;
    uVar10 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar14;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar6;
    iVar9 = uVar3 + iStack_e4 + ((uVar13 ^ uVar12) & uVar14 ^ uVar12) + (uVar8 >> 6 | uVar8 << 0x1a)
    ;
    uVar15 = uVar15 + iVar9;
    uVar3 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar4 ^ uVar5) & (uVar6 ^ uVar4) ^ uVar4);
    uVar8 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
    uVar10 = (uVar3 >> 9 | uVar3 * 0x800000) ^ uVar3;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar15;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar3;
    iVar9 = uVar12 + iStack_e0 + ((uVar14 ^ uVar13) & uVar15 ^ uVar13) +
            (uVar8 >> 6 | uVar8 << 0x1a);
    uVar5 = uVar5 + iVar9;
    uVar12 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar6 ^ uVar4) & (uVar3 ^ uVar6) ^ uVar6);
    uVar8 = (uVar5 >> 0xe | uVar5 * 0x40000) ^ uVar5;
    uVar10 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar5;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar12;
    iVar9 = uVar13 + iStack_dc + ((uVar15 ^ uVar14) & uVar5 ^ uVar14) + (uVar8 >> 6 | uVar8 << 0x1a)
    ;
    uVar4 = uVar4 + iVar9;
    uVar13 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar3 ^ uVar6) & (uVar12 ^ uVar3) ^ uVar3);
    uVar8 = (uVar4 >> 0xe | uVar4 * 0x40000) ^ uVar4;
    uVar10 = (uVar13 >> 9 | uVar13 * 0x800000) ^ uVar13;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar4;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar13;
    iVar9 = uVar14 + iStack_d8 + ((uVar5 ^ uVar15) & uVar4 ^ uVar15) + (uVar8 >> 6 | uVar8 << 0x1a);
    uVar6 = uVar6 + iVar9;
    uVar14 = (uVar10 >> 2 | uVar10 << 0x1e) +
             iVar9 + ((uVar12 ^ uVar3) & (uVar13 ^ uVar12) ^ uVar12);
    uVar8 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
    uVar10 = (uVar14 >> 9 | uVar14 * 0x800000) ^ uVar14;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar6;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar14;
    iVar9 = uVar15 + iStack_d4 + ((uVar4 ^ uVar5) & uVar6 ^ uVar5) + (uVar8 >> 6 | uVar8 << 0x1a);
    uVar3 = uVar3 + iVar9;
    uVar8 = (uVar10 >> 2 | uVar10 << 0x1e) +
            iVar9 + ((uVar13 ^ uVar12) & (uVar14 ^ uVar13) ^ uVar13);
    uVar15 = (uVar3 >> 0xe | uVar3 * 0x40000) ^ uVar3;
    uVar10 = (uVar8 >> 9 | uVar8 * 0x800000) ^ uVar8;
    uVar15 = (uVar15 >> 5 | uVar15 << 0x1b) ^ uVar3;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar8;
    iVar9 = uVar5 + iStack_d0 + ((uVar6 ^ uVar4) & uVar3 ^ uVar4) + (uVar15 >> 6 | uVar15 << 0x1a);
    uVar12 = uVar12 + iVar9;
    uVar5 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar14 ^ uVar13) & (uVar8 ^ uVar14) ^ uVar14)
    ;
    uVar15 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
    uVar10 = (uVar5 >> 9 | uVar5 * 0x800000) ^ uVar5;
    uVar15 = (uVar15 >> 5 | uVar15 << 0x1b) ^ uVar12;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar5;
    iVar9 = uVar4 + iStack_cc + ((uVar3 ^ uVar6) & uVar12 ^ uVar6) + (uVar15 >> 6 | uVar15 << 0x1a);
    uVar13 = uVar13 + iVar9;
    uVar4 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar8 ^ uVar14) & (uVar5 ^ uVar8) ^ uVar8);
    uVar15 = (uVar13 >> 0xe | uVar13 * 0x40000) ^ uVar13;
    uVar10 = (uVar4 >> 9 | uVar4 * 0x800000) ^ uVar4;
    uVar15 = (uVar15 >> 5 | uVar15 << 0x1b) ^ uVar13;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar4;
    iVar9 = uVar6 + iStack_c8 + ((uVar12 ^ uVar3) & uVar13 ^ uVar3) + (uVar15 >> 6 | uVar15 << 0x1a)
    ;
    uVar14 = uVar14 + iVar9;
    uVar6 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar5 ^ uVar8) & (uVar4 ^ uVar5) ^ uVar5);
    uVar15 = (uVar14 >> 0xe | uVar14 * 0x40000) ^ uVar14;
    uVar10 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
    uVar15 = (uVar15 >> 5 | uVar15 << 0x1b) ^ uVar14;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar6;
    iVar9 = uVar3 + iStack_c4 + ((uVar13 ^ uVar12) & uVar14 ^ uVar12) +
            (uVar15 >> 6 | uVar15 << 0x1a);
    uVar3 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar4 ^ uVar5) & (uVar6 ^ uVar4) ^ uVar4) +
            *param_1;
    param_2 = param_2 + 4;
    uVar6 = uVar6 + param_1[1];
    uVar4 = uVar4 + param_1[2];
    uVar5 = uVar5 + param_1[3];
    uVar15 = uVar8 + iVar9 + param_1[4];
    uVar14 = uVar14 + param_1[5];
    uVar13 = uVar13 + param_1[6];
    uVar12 = uVar12 + param_1[7];
    *param_1 = uVar3;
    param_1[1] = uVar6;
    param_1[2] = uVar4;
    param_1[3] = uVar5;
    param_1[4] = uVar15;
    param_1[5] = uVar14;
    param_1[6] = uVar13;
    param_1[7] = uVar12;
  } while (param_2 < pauVar2);
  return;
}

// L$SEH_begin_sha256_block_data_order_ssse3 @ 140def54d

/* WARNING: Removing unreachable block (ram,0x000140defc48) */
/* WARNING: Removing unreachable block (ram,0x000140defe4e) */
/* WARNING: Removing unreachable block (ram,0x000140defa3a) */
/* WARNING: Removing unreachable block (ram,0x000140def835) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L_SEH_begin_sha256_block_data_order_ssse3
               (uint *param_1,undefined1 (*param_2) [16],longlong param_3)

{
  char *pcVar1;
  undefined1 (*pauVar2) [16];
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint uVar20;
  uint uVar21;
  undefined1 auVar19 [16];
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  uint uVar35;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
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
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  
  pauVar2 = param_2 + param_3 * 4;
  uVar3 = *param_1;
  uVar6 = param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  uVar15 = param_1[4];
  uVar14 = param_1[5];
  uVar13 = param_1[6];
  uVar12 = param_1[7];
  do {
    auVar16 = pshufb(*param_2,_DAT_140def0c0);
    auVar17 = pshufb(param_2[1],_DAT_140def0c0);
    auVar18 = pshufb(param_2[2],_DAT_140def0c0);
    local_100 = K256 + auVar16._0_4_;
    iStack_fc = DAT_140deeec4 + auVar16._4_4_;
    iStack_f8 = DAT_140deeec8 + auVar16._8_4_;
    iStack_f4 = DAT_140deeecc + auVar16._12_4_;
    auVar19 = pshufb(param_2[3],_DAT_140def0c0);
    local_f0 = DAT_140deeee0 + auVar17._0_4_;
    iStack_ec = DAT_140deeee4 + auVar17._4_4_;
    iStack_e8 = DAT_140deeee8 + auVar17._8_4_;
    iStack_e4 = DAT_140deeeec + auVar17._12_4_;
    local_e0 = DAT_140deef00 + auVar18._0_4_;
    iStack_dc = DAT_140deef04 + auVar18._4_4_;
    iStack_d8 = DAT_140deef08 + auVar18._8_4_;
    iStack_d4 = DAT_140deef0c + auVar18._12_4_;
    local_d0 = DAT_140deef20 + auVar19._0_4_;
    iStack_cc = DAT_140deef24 + auVar19._4_4_;
    iStack_c8 = DAT_140deef28 + auVar19._8_4_;
    iStack_c4 = DAT_140deef2c + auVar19._12_4_;
    uVar8 = uVar6 ^ uVar4;
    piVar7 = &K256;
    do {
      uVar10 = (uVar15 >> 0xe | uVar15 << 0x12) ^ uVar15;
      uVar11 = (uVar3 >> 9 | uVar3 << 0x17) ^ uVar3;
      uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar15;
      uVar23 = auVar16._4_4_;
      uVar24 = auVar16._8_4_;
      uVar25 = auVar16._12_4_;
      uVar26 = auVar17._0_4_;
      uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar3;
      iVar9 = uVar12 + local_100 + ((uVar14 ^ uVar13) & uVar15 ^ uVar13) +
              (uVar10 >> 6 | uVar10 << 0x1a);
      uVar35 = auVar18._4_4_;
      uVar60 = auVar18._8_4_;
      uVar61 = auVar18._12_4_;
      uVar62 = auVar19._0_4_;
      uVar5 = uVar5 + iVar9;
      uVar20 = auVar19._4_4_;
      uVar21 = auVar19._8_4_;
      uVar22 = auVar19._12_4_;
      auVar36._0_8_ = CONCAT44(uVar21,uVar21);
      auVar36._8_4_ = uVar22;
      auVar36._12_4_ = uVar22;
      uVar12 = (uVar11 >> 2 | uVar11 << 0x1e) + iVar9 + (uVar8 & (uVar3 ^ uVar6) ^ uVar6);
      uVar8 = (uVar5 >> 0xe | uVar5 * 0x40000) ^ uVar5;
      uVar10 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar5;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar12;
      auVar37._0_4_ = uVar21 >> 10;
      auVar37._4_4_ = 0;
      auVar37._8_4_ = uVar22 >> 10;
      auVar37._12_4_ = uVar22 >> 10;
      iVar9 = uVar13 + iStack_fc + ((uVar15 ^ uVar14) & uVar5 ^ uVar14) +
              (uVar8 >> 6 | uVar8 << 0x1a);
      uVar4 = uVar4 + iVar9;
      auVar27._0_8_ = auVar36._0_8_ >> 0x11;
      auVar27._8_8_ = auVar36._8_8_ >> 0x11;
      uVar13 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar3 ^ uVar6) & (uVar12 ^ uVar3) ^ uVar3)
      ;
      auVar38._0_8_ = auVar36._0_8_ >> 0x13;
      auVar38._8_8_ = auVar36._8_8_ >> 0x13;
      uVar8 = (uVar4 >> 0xe | uVar4 * 0x40000) ^ uVar4;
      auVar38 = auVar37 ^ auVar27 ^ auVar38;
      uVar10 = (uVar13 >> 9 | uVar13 * 0x800000) ^ uVar13;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar4;
      auVar16._0_4_ =
           auVar16._0_4_ + uVar35 +
           (uVar23 >> 3 ^ uVar23 >> 7 ^ uVar23 << 0xe ^ uVar23 >> 0x12 ^ uVar23 << 0x19) +
           auVar38._0_4_;
      auVar16._4_4_ =
           uVar23 + uVar60 +
           (uVar24 >> 3 ^ uVar24 >> 7 ^ uVar24 << 0xe ^ uVar24 >> 0x12 ^ uVar24 << 0x19) +
           auVar38._8_4_;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar13;
      iVar9 = uVar14 + iStack_f8 + ((uVar5 ^ uVar15) & uVar4 ^ uVar15) +
              (uVar8 >> 6 | uVar8 << 0x1a);
      auVar39._0_8_ = CONCAT44(auVar16._0_4_,auVar16._0_4_);
      auVar39._8_4_ = auVar16._4_4_;
      auVar39._12_4_ = auVar16._4_4_;
      uVar6 = uVar6 + iVar9;
      auVar40._0_4_ = auVar16._0_4_ >> 10;
      auVar40._4_4_ = 0;
      auVar40._8_4_ = auVar16._4_4_ >> 10;
      auVar40._12_4_ = auVar16._4_4_ >> 10;
      uVar14 = (uVar10 >> 2 | uVar10 << 0x1e) +
               iVar9 + ((uVar12 ^ uVar3) & (uVar13 ^ uVar12) ^ uVar12);
      auVar28._0_8_ = auVar39._0_8_ >> 0x11;
      auVar28._8_8_ = auVar39._8_8_ >> 0x11;
      uVar8 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
      uVar10 = (uVar14 >> 9 | uVar14 * 0x800000) ^ uVar14;
      auVar41._0_8_ = auVar39._0_8_ >> 0x13;
      auVar41._8_8_ = auVar39._8_8_ >> 0x13;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar6;
      auVar41 = auVar40 ^ auVar28 ^ auVar41;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar14;
      iVar9 = uVar15 + iStack_f4 + ((uVar4 ^ uVar5) & uVar6 ^ uVar5) + (uVar8 >> 6 | uVar8 << 0x1a);
      auVar16._8_4_ =
           uVar24 + uVar61 +
           (uVar25 >> 3 ^ uVar25 >> 7 ^ uVar25 << 0xe ^ uVar25 >> 0x12 ^ uVar25 << 0x19) +
           auVar41._0_4_;
      auVar16._12_4_ =
           uVar25 + uVar62 +
           (uVar26 >> 3 ^ uVar26 >> 7 ^ uVar26 << 0xe ^ uVar26 >> 0x12 ^ uVar26 << 0x19) +
           auVar41._8_4_;
      uVar3 = uVar3 + iVar9;
      local_100 = piVar7[0x20] + auVar16._0_4_;
      iStack_fc = piVar7[0x21] + auVar16._4_4_;
      iStack_f8 = piVar7[0x22] + auVar16._8_4_;
      iStack_f4 = piVar7[0x23] + auVar16._12_4_;
      uVar15 = (uVar10 >> 2 | uVar10 << 0x1e) +
               iVar9 + ((uVar13 ^ uVar12) & (uVar14 ^ uVar13) ^ uVar13);
      uVar8 = (uVar3 >> 0xe | uVar3 * 0x40000) ^ uVar3;
      uVar10 = (uVar15 >> 9 | uVar15 * 0x800000) ^ uVar15;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar3;
      uVar11 = auVar17._4_4_;
      uVar23 = auVar17._8_4_;
      uVar24 = auVar17._12_4_;
      uVar25 = auVar18._0_4_;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar15;
      iVar9 = uVar5 + local_f0 + ((uVar6 ^ uVar4) & uVar3 ^ uVar4) + (uVar8 >> 6 | uVar8 << 0x1a);
      uVar12 = uVar12 + iVar9;
      auVar42._0_8_ = CONCAT44(auVar16._8_4_,auVar16._8_4_);
      auVar42._8_4_ = auVar16._12_4_;
      auVar42._12_4_ = auVar16._12_4_;
      uVar5 = (uVar10 >> 2 | uVar10 << 0x1e) +
              iVar9 + ((uVar14 ^ uVar13) & (uVar15 ^ uVar14) ^ uVar14);
      uVar8 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
      uVar10 = (uVar5 >> 9 | uVar5 * 0x800000) ^ uVar5;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar12;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar5;
      auVar43._0_4_ = auVar16._8_4_ >> 10;
      auVar43._4_4_ = 0;
      auVar43._8_4_ = auVar16._12_4_ >> 10;
      auVar43._12_4_ = auVar16._12_4_ >> 10;
      iVar9 = uVar4 + iStack_ec + ((uVar3 ^ uVar6) & uVar12 ^ uVar6) + (uVar8 >> 6 | uVar8 << 0x1a);
      uVar13 = uVar13 + iVar9;
      auVar29._0_8_ = auVar42._0_8_ >> 0x11;
      auVar29._8_8_ = auVar42._8_8_ >> 0x11;
      uVar4 = (uVar10 >> 2 | uVar10 << 0x1e) +
              iVar9 + ((uVar15 ^ uVar14) & (uVar5 ^ uVar15) ^ uVar15);
      auVar44._0_8_ = auVar42._0_8_ >> 0x13;
      auVar44._8_8_ = auVar42._8_8_ >> 0x13;
      uVar8 = (uVar13 >> 0xe | uVar13 * 0x40000) ^ uVar13;
      auVar44 = auVar43 ^ auVar29 ^ auVar44;
      uVar10 = (uVar4 >> 9 | uVar4 * 0x800000) ^ uVar4;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar13;
      auVar17._0_4_ =
           uVar26 + uVar20 +
           (uVar11 >> 3 ^ uVar11 >> 7 ^ uVar11 << 0xe ^ uVar11 >> 0x12 ^ uVar11 << 0x19) +
           auVar44._0_4_;
      auVar17._4_4_ =
           uVar11 + uVar21 +
           (uVar23 >> 3 ^ uVar23 >> 7 ^ uVar23 << 0xe ^ uVar23 >> 0x12 ^ uVar23 << 0x19) +
           auVar44._8_4_;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar4;
      iVar9 = uVar6 + iStack_e8 + ((uVar12 ^ uVar3) & uVar13 ^ uVar3) + (uVar8 >> 6 | uVar8 << 0x1a)
      ;
      auVar45._0_8_ = CONCAT44(auVar17._0_4_,auVar17._0_4_);
      auVar45._8_4_ = auVar17._4_4_;
      auVar45._12_4_ = auVar17._4_4_;
      uVar14 = uVar14 + iVar9;
      auVar46._0_4_ = auVar17._0_4_ >> 10;
      auVar46._4_4_ = 0;
      auVar46._8_4_ = auVar17._4_4_ >> 10;
      auVar46._12_4_ = auVar17._4_4_ >> 10;
      uVar6 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar5 ^ uVar15) & (uVar4 ^ uVar5) ^ uVar5);
      auVar30._0_8_ = auVar45._0_8_ >> 0x11;
      auVar30._8_8_ = auVar45._8_8_ >> 0x11;
      uVar8 = (uVar14 >> 0xe | uVar14 * 0x40000) ^ uVar14;
      uVar10 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
      auVar47._0_8_ = auVar45._0_8_ >> 0x13;
      auVar47._8_8_ = auVar45._8_8_ >> 0x13;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar14;
      auVar47 = auVar46 ^ auVar30 ^ auVar47;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar6;
      iVar9 = uVar3 + iStack_e4 + ((uVar13 ^ uVar12) & uVar14 ^ uVar12) +
              (uVar8 >> 6 | uVar8 << 0x1a);
      auVar17._8_4_ =
           uVar23 + uVar22 +
           (uVar24 >> 3 ^ uVar24 >> 7 ^ uVar24 << 0xe ^ uVar24 >> 0x12 ^ uVar24 << 0x19) +
           auVar47._0_4_;
      auVar17._12_4_ =
           uVar24 + auVar16._0_4_ +
           (uVar25 >> 3 ^ uVar25 >> 7 ^ uVar25 << 0xe ^ uVar25 >> 0x12 ^ uVar25 << 0x19) +
           auVar47._8_4_;
      uVar15 = uVar15 + iVar9;
      local_f0 = piVar7[0x28] + auVar17._0_4_;
      iStack_ec = piVar7[0x29] + auVar17._4_4_;
      iStack_e8 = piVar7[0x2a] + auVar17._8_4_;
      iStack_e4 = piVar7[0x2b] + auVar17._12_4_;
      uVar3 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar4 ^ uVar5) & (uVar6 ^ uVar4) ^ uVar4);
      uVar8 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
      uVar10 = (uVar3 >> 9 | uVar3 * 0x800000) ^ uVar3;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar15;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar3;
      iVar9 = uVar12 + local_e0 + ((uVar14 ^ uVar13) & uVar15 ^ uVar13) +
              (uVar8 >> 6 | uVar8 << 0x1a);
      uVar5 = uVar5 + iVar9;
      auVar48._0_8_ = CONCAT44(auVar17._8_4_,auVar17._8_4_);
      auVar48._8_4_ = auVar17._12_4_;
      auVar48._12_4_ = auVar17._12_4_;
      uVar12 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar6 ^ uVar4) & (uVar3 ^ uVar6) ^ uVar6);
      uVar8 = (uVar5 >> 0xe | uVar5 * 0x40000) ^ uVar5;
      uVar10 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar5;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar12;
      auVar49._0_4_ = auVar17._8_4_ >> 10;
      auVar49._4_4_ = 0;
      auVar49._8_4_ = auVar17._12_4_ >> 10;
      auVar49._12_4_ = auVar17._12_4_ >> 10;
      iVar9 = uVar13 + iStack_dc + ((uVar15 ^ uVar14) & uVar5 ^ uVar14) +
              (uVar8 >> 6 | uVar8 << 0x1a);
      uVar4 = uVar4 + iVar9;
      auVar31._0_8_ = auVar48._0_8_ >> 0x11;
      auVar31._8_8_ = auVar48._8_8_ >> 0x11;
      uVar13 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar3 ^ uVar6) & (uVar12 ^ uVar3) ^ uVar3)
      ;
      auVar50._0_8_ = auVar48._0_8_ >> 0x13;
      auVar50._8_8_ = auVar48._8_8_ >> 0x13;
      uVar8 = (uVar4 >> 0xe | uVar4 * 0x40000) ^ uVar4;
      auVar50 = auVar49 ^ auVar31 ^ auVar50;
      uVar10 = (uVar13 >> 9 | uVar13 * 0x800000) ^ uVar13;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar4;
      auVar18._0_4_ =
           uVar25 + auVar16._4_4_ +
           (uVar35 >> 3 ^ uVar35 >> 7 ^ uVar35 << 0xe ^ uVar35 >> 0x12 ^ uVar35 << 0x19) +
           auVar50._0_4_;
      auVar18._4_4_ =
           uVar35 + auVar16._8_4_ +
           (uVar60 >> 3 ^ uVar60 >> 7 ^ uVar60 << 0xe ^ uVar60 >> 0x12 ^ uVar60 << 0x19) +
           auVar50._8_4_;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar13;
      iVar9 = uVar14 + iStack_d8 + ((uVar5 ^ uVar15) & uVar4 ^ uVar15) +
              (uVar8 >> 6 | uVar8 << 0x1a);
      auVar51._0_8_ = CONCAT44(auVar18._0_4_,auVar18._0_4_);
      auVar51._8_4_ = auVar18._4_4_;
      auVar51._12_4_ = auVar18._4_4_;
      uVar6 = uVar6 + iVar9;
      auVar52._0_4_ = auVar18._0_4_ >> 10;
      auVar52._4_4_ = 0;
      auVar52._8_4_ = auVar18._4_4_ >> 10;
      auVar52._12_4_ = auVar18._4_4_ >> 10;
      uVar14 = (uVar10 >> 2 | uVar10 << 0x1e) +
               iVar9 + ((uVar12 ^ uVar3) & (uVar13 ^ uVar12) ^ uVar12);
      auVar32._0_8_ = auVar51._0_8_ >> 0x11;
      auVar32._8_8_ = auVar51._8_8_ >> 0x11;
      uVar8 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
      uVar10 = (uVar14 >> 9 | uVar14 * 0x800000) ^ uVar14;
      auVar53._0_8_ = auVar51._0_8_ >> 0x13;
      auVar53._8_8_ = auVar51._8_8_ >> 0x13;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar6;
      auVar53 = auVar52 ^ auVar32 ^ auVar53;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar14;
      iVar9 = uVar15 + iStack_d4 + ((uVar4 ^ uVar5) & uVar6 ^ uVar5) + (uVar8 >> 6 | uVar8 << 0x1a);
      auVar18._8_4_ =
           uVar60 + auVar16._12_4_ +
           (uVar61 >> 3 ^ uVar61 >> 7 ^ uVar61 << 0xe ^ uVar61 >> 0x12 ^ uVar61 << 0x19) +
           auVar53._0_4_;
      auVar18._12_4_ =
           uVar61 + auVar17._0_4_ +
           (uVar62 >> 3 ^ uVar62 >> 7 ^ uVar62 << 0xe ^ uVar62 >> 0x12 ^ uVar62 << 0x19) +
           auVar53._8_4_;
      uVar3 = uVar3 + iVar9;
      local_e0 = piVar7[0x30] + auVar18._0_4_;
      iStack_dc = piVar7[0x31] + auVar18._4_4_;
      iStack_d8 = piVar7[0x32] + auVar18._8_4_;
      iStack_d4 = piVar7[0x33] + auVar18._12_4_;
      uVar15 = (uVar10 >> 2 | uVar10 << 0x1e) +
               iVar9 + ((uVar13 ^ uVar12) & (uVar14 ^ uVar13) ^ uVar13);
      uVar8 = (uVar3 >> 0xe | uVar3 * 0x40000) ^ uVar3;
      uVar10 = (uVar15 >> 9 | uVar15 * 0x800000) ^ uVar15;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar3;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar15;
      iVar9 = uVar5 + local_d0 + ((uVar6 ^ uVar4) & uVar3 ^ uVar4) + (uVar8 >> 6 | uVar8 << 0x1a);
      uVar12 = uVar12 + iVar9;
      auVar54._0_8_ = CONCAT44(auVar18._8_4_,auVar18._8_4_);
      auVar54._8_4_ = auVar18._12_4_;
      auVar54._12_4_ = auVar18._12_4_;
      uVar5 = (uVar10 >> 2 | uVar10 << 0x1e) +
              iVar9 + ((uVar14 ^ uVar13) & (uVar15 ^ uVar14) ^ uVar14);
      uVar8 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
      uVar10 = (uVar5 >> 9 | uVar5 * 0x800000) ^ uVar5;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar12;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar5;
      auVar55._0_4_ = auVar18._8_4_ >> 10;
      auVar55._4_4_ = 0;
      auVar55._8_4_ = auVar18._12_4_ >> 10;
      auVar55._12_4_ = auVar18._12_4_ >> 10;
      iVar9 = uVar4 + iStack_cc + ((uVar3 ^ uVar6) & uVar12 ^ uVar6) + (uVar8 >> 6 | uVar8 << 0x1a);
      uVar13 = uVar13 + iVar9;
      auVar33._0_8_ = auVar54._0_8_ >> 0x11;
      auVar33._8_8_ = auVar54._8_8_ >> 0x11;
      uVar4 = (uVar10 >> 2 | uVar10 << 0x1e) +
              iVar9 + ((uVar15 ^ uVar14) & (uVar5 ^ uVar15) ^ uVar15);
      auVar56._0_8_ = auVar54._0_8_ >> 0x13;
      auVar56._8_8_ = auVar54._8_8_ >> 0x13;
      uVar8 = (uVar13 >> 0xe | uVar13 * 0x40000) ^ uVar13;
      auVar56 = auVar55 ^ auVar33 ^ auVar56;
      uVar10 = (uVar4 >> 9 | uVar4 * 0x800000) ^ uVar4;
      uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar13;
      auVar19._0_4_ =
           uVar62 + auVar17._4_4_ +
           (uVar20 >> 3 ^ uVar20 >> 7 ^ uVar20 << 0xe ^ uVar20 >> 0x12 ^ uVar20 << 0x19) +
           auVar56._0_4_;
      auVar19._4_4_ =
           uVar20 + auVar17._8_4_ +
           (uVar21 >> 3 ^ uVar21 >> 7 ^ uVar21 << 0xe ^ uVar21 >> 0x12 ^ uVar21 << 0x19) +
           auVar56._8_4_;
      uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar4;
      iVar9 = uVar6 + iStack_c8 + ((uVar12 ^ uVar3) & uVar13 ^ uVar3) + (uVar8 >> 6 | uVar8 << 0x1a)
      ;
      auVar57._0_8_ = CONCAT44(auVar19._0_4_,auVar19._0_4_);
      auVar57._8_4_ = auVar19._4_4_;
      auVar57._12_4_ = auVar19._4_4_;
      uVar14 = uVar14 + iVar9;
      auVar58._0_4_ = auVar19._0_4_ >> 10;
      auVar58._4_4_ = 0;
      auVar58._8_4_ = auVar19._4_4_ >> 10;
      auVar58._12_4_ = auVar19._4_4_ >> 10;
      uVar6 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar5 ^ uVar15) & (uVar4 ^ uVar5) ^ uVar5);
      auVar34._0_8_ = auVar57._0_8_ >> 0x11;
      auVar34._8_8_ = auVar57._8_8_ >> 0x11;
      uVar8 = (uVar14 >> 0xe | uVar14 * 0x40000) ^ uVar14;
      uVar11 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
      auVar59._0_8_ = auVar57._0_8_ >> 0x13;
      auVar59._8_8_ = auVar57._8_8_ >> 0x13;
      uVar10 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar14;
      auVar59 = auVar58 ^ auVar34 ^ auVar59;
      uVar8 = uVar6 ^ uVar4;
      uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar6;
      iVar9 = uVar3 + iStack_c4 + ((uVar13 ^ uVar12) & uVar14 ^ uVar12) +
              (uVar10 >> 6 | uVar10 << 0x1a);
      auVar19._8_4_ =
           uVar21 + auVar17._12_4_ +
           (uVar22 >> 3 ^ uVar22 >> 7 ^ uVar22 << 0xe ^ uVar22 >> 0x12 ^ uVar22 << 0x19) +
           auVar59._0_4_;
      auVar19._12_4_ =
           uVar22 + auVar18._0_4_ +
           (auVar16._0_4_ >> 3 ^ auVar16._0_4_ >> 7 ^ auVar16._0_4_ * 0x4000 ^ auVar16._0_4_ >> 0x12
           ^ auVar16._0_4_ * 0x2000000) + auVar59._8_4_;
      uVar15 = uVar15 + iVar9;
      local_d0 = piVar7[0x38] + auVar19._0_4_;
      iStack_cc = piVar7[0x39] + auVar19._4_4_;
      iStack_c8 = piVar7[0x3a] + auVar19._8_4_;
      iStack_c4 = piVar7[0x3b] + auVar19._12_4_;
      uVar3 = (uVar11 >> 2 | uVar11 << 0x1e) + iVar9 + ((uVar4 ^ uVar5) & uVar8 ^ uVar4);
      pcVar1 = (char *)((longlong)piVar7 + 0x103);
      piVar7 = piVar7 + 0x20;
    } while (*pcVar1 != '\0');
    uVar10 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
    uVar11 = (uVar3 >> 9 | uVar3 * 0x800000) ^ uVar3;
    uVar10 = (uVar10 >> 5 | uVar10 << 0x1b) ^ uVar15;
    uVar11 = (uVar11 >> 0xb | uVar11 << 0x15) ^ uVar3;
    iVar9 = uVar12 + local_100 + ((uVar14 ^ uVar13) & uVar15 ^ uVar13) +
            (uVar10 >> 6 | uVar10 << 0x1a);
    uVar5 = uVar5 + iVar9;
    uVar12 = (uVar11 >> 2 | uVar11 << 0x1e) + iVar9 + (uVar8 & (uVar3 ^ uVar6) ^ uVar6);
    uVar8 = (uVar5 >> 0xe | uVar5 * 0x40000) ^ uVar5;
    uVar10 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar5;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar12;
    iVar9 = uVar13 + iStack_fc + ((uVar15 ^ uVar14) & uVar5 ^ uVar14) + (uVar8 >> 6 | uVar8 << 0x1a)
    ;
    uVar4 = uVar4 + iVar9;
    uVar13 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar3 ^ uVar6) & (uVar12 ^ uVar3) ^ uVar3);
    uVar8 = (uVar4 >> 0xe | uVar4 * 0x40000) ^ uVar4;
    uVar10 = (uVar13 >> 9 | uVar13 * 0x800000) ^ uVar13;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar4;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar13;
    iVar9 = uVar14 + iStack_f8 + ((uVar5 ^ uVar15) & uVar4 ^ uVar15) + (uVar8 >> 6 | uVar8 << 0x1a);
    uVar6 = uVar6 + iVar9;
    uVar14 = (uVar10 >> 2 | uVar10 << 0x1e) +
             iVar9 + ((uVar12 ^ uVar3) & (uVar13 ^ uVar12) ^ uVar12);
    uVar8 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
    uVar10 = (uVar14 >> 9 | uVar14 * 0x800000) ^ uVar14;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar6;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar14;
    iVar9 = uVar15 + iStack_f4 + ((uVar4 ^ uVar5) & uVar6 ^ uVar5) + (uVar8 >> 6 | uVar8 << 0x1a);
    uVar3 = uVar3 + iVar9;
    uVar15 = (uVar10 >> 2 | uVar10 << 0x1e) +
             iVar9 + ((uVar13 ^ uVar12) & (uVar14 ^ uVar13) ^ uVar13);
    uVar8 = (uVar3 >> 0xe | uVar3 * 0x40000) ^ uVar3;
    uVar10 = (uVar15 >> 9 | uVar15 * 0x800000) ^ uVar15;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar3;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar15;
    iVar9 = uVar5 + local_f0 + ((uVar6 ^ uVar4) & uVar3 ^ uVar4) + (uVar8 >> 6 | uVar8 << 0x1a);
    uVar12 = uVar12 + iVar9;
    uVar5 = (uVar10 >> 2 | uVar10 << 0x1e) +
            iVar9 + ((uVar14 ^ uVar13) & (uVar15 ^ uVar14) ^ uVar14);
    uVar8 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
    uVar10 = (uVar5 >> 9 | uVar5 * 0x800000) ^ uVar5;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar12;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar5;
    iVar9 = uVar4 + iStack_ec + ((uVar3 ^ uVar6) & uVar12 ^ uVar6) + (uVar8 >> 6 | uVar8 << 0x1a);
    uVar13 = uVar13 + iVar9;
    uVar4 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar15 ^ uVar14) & (uVar5 ^ uVar15) ^ uVar15)
    ;
    uVar8 = (uVar13 >> 0xe | uVar13 * 0x40000) ^ uVar13;
    uVar10 = (uVar4 >> 9 | uVar4 * 0x800000) ^ uVar4;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar13;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar4;
    iVar9 = uVar6 + iStack_e8 + ((uVar12 ^ uVar3) & uVar13 ^ uVar3) + (uVar8 >> 6 | uVar8 << 0x1a);
    uVar14 = uVar14 + iVar9;
    uVar6 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar5 ^ uVar15) & (uVar4 ^ uVar5) ^ uVar5);
    uVar8 = (uVar14 >> 0xe | uVar14 * 0x40000) ^ uVar14;
    uVar10 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar14;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar6;
    iVar9 = uVar3 + iStack_e4 + ((uVar13 ^ uVar12) & uVar14 ^ uVar12) + (uVar8 >> 6 | uVar8 << 0x1a)
    ;
    uVar15 = uVar15 + iVar9;
    uVar3 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar4 ^ uVar5) & (uVar6 ^ uVar4) ^ uVar4);
    uVar8 = (uVar15 >> 0xe | uVar15 * 0x40000) ^ uVar15;
    uVar10 = (uVar3 >> 9 | uVar3 * 0x800000) ^ uVar3;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar15;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar3;
    iVar9 = uVar12 + local_e0 + ((uVar14 ^ uVar13) & uVar15 ^ uVar13) + (uVar8 >> 6 | uVar8 << 0x1a)
    ;
    uVar5 = uVar5 + iVar9;
    uVar12 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar6 ^ uVar4) & (uVar3 ^ uVar6) ^ uVar6);
    uVar8 = (uVar5 >> 0xe | uVar5 * 0x40000) ^ uVar5;
    uVar10 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar5;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar12;
    iVar9 = uVar13 + iStack_dc + ((uVar15 ^ uVar14) & uVar5 ^ uVar14) + (uVar8 >> 6 | uVar8 << 0x1a)
    ;
    uVar4 = uVar4 + iVar9;
    uVar13 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar3 ^ uVar6) & (uVar12 ^ uVar3) ^ uVar3);
    uVar8 = (uVar4 >> 0xe | uVar4 * 0x40000) ^ uVar4;
    uVar10 = (uVar13 >> 9 | uVar13 * 0x800000) ^ uVar13;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar4;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar13;
    iVar9 = uVar14 + iStack_d8 + ((uVar5 ^ uVar15) & uVar4 ^ uVar15) + (uVar8 >> 6 | uVar8 << 0x1a);
    uVar6 = uVar6 + iVar9;
    uVar14 = (uVar10 >> 2 | uVar10 << 0x1e) +
             iVar9 + ((uVar12 ^ uVar3) & (uVar13 ^ uVar12) ^ uVar12);
    uVar8 = (uVar6 >> 0xe | uVar6 * 0x40000) ^ uVar6;
    uVar10 = (uVar14 >> 9 | uVar14 * 0x800000) ^ uVar14;
    uVar8 = (uVar8 >> 5 | uVar8 << 0x1b) ^ uVar6;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar14;
    iVar9 = uVar15 + iStack_d4 + ((uVar4 ^ uVar5) & uVar6 ^ uVar5) + (uVar8 >> 6 | uVar8 << 0x1a);
    uVar3 = uVar3 + iVar9;
    uVar8 = (uVar10 >> 2 | uVar10 << 0x1e) +
            iVar9 + ((uVar13 ^ uVar12) & (uVar14 ^ uVar13) ^ uVar13);
    uVar15 = (uVar3 >> 0xe | uVar3 * 0x40000) ^ uVar3;
    uVar10 = (uVar8 >> 9 | uVar8 * 0x800000) ^ uVar8;
    uVar15 = (uVar15 >> 5 | uVar15 << 0x1b) ^ uVar3;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar8;
    iVar9 = uVar5 + local_d0 + ((uVar6 ^ uVar4) & uVar3 ^ uVar4) + (uVar15 >> 6 | uVar15 << 0x1a);
    uVar12 = uVar12 + iVar9;
    uVar5 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar14 ^ uVar13) & (uVar8 ^ uVar14) ^ uVar14)
    ;
    uVar15 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
    uVar10 = (uVar5 >> 9 | uVar5 * 0x800000) ^ uVar5;
    uVar15 = (uVar15 >> 5 | uVar15 << 0x1b) ^ uVar12;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar5;
    iVar9 = uVar4 + iStack_cc + ((uVar3 ^ uVar6) & uVar12 ^ uVar6) + (uVar15 >> 6 | uVar15 << 0x1a);
    uVar13 = uVar13 + iVar9;
    uVar4 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar8 ^ uVar14) & (uVar5 ^ uVar8) ^ uVar8);
    uVar15 = (uVar13 >> 0xe | uVar13 * 0x40000) ^ uVar13;
    uVar10 = (uVar4 >> 9 | uVar4 * 0x800000) ^ uVar4;
    uVar15 = (uVar15 >> 5 | uVar15 << 0x1b) ^ uVar13;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar4;
    iVar9 = uVar6 + iStack_c8 + ((uVar12 ^ uVar3) & uVar13 ^ uVar3) + (uVar15 >> 6 | uVar15 << 0x1a)
    ;
    uVar14 = uVar14 + iVar9;
    uVar6 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar5 ^ uVar8) & (uVar4 ^ uVar5) ^ uVar5);
    uVar15 = (uVar14 >> 0xe | uVar14 * 0x40000) ^ uVar14;
    uVar10 = (uVar6 >> 9 | uVar6 * 0x800000) ^ uVar6;
    uVar15 = (uVar15 >> 5 | uVar15 << 0x1b) ^ uVar14;
    uVar10 = (uVar10 >> 0xb | uVar10 << 0x15) ^ uVar6;
    iVar9 = uVar3 + iStack_c4 + ((uVar13 ^ uVar12) & uVar14 ^ uVar12) +
            (uVar15 >> 6 | uVar15 << 0x1a);
    uVar3 = (uVar10 >> 2 | uVar10 << 0x1e) + iVar9 + ((uVar4 ^ uVar5) & (uVar6 ^ uVar4) ^ uVar4) +
            *param_1;
    param_2 = param_2 + 4;
    uVar6 = uVar6 + param_1[1];
    uVar4 = uVar4 + param_1[2];
    uVar5 = uVar5 + param_1[3];
    uVar15 = uVar8 + iVar9 + param_1[4];
    uVar14 = uVar14 + param_1[5];
    uVar13 = uVar13 + param_1[6];
    uVar12 = uVar12 + param_1[7];
    *param_1 = uVar3;
    param_1[1] = uVar6;
    param_1[2] = uVar4;
    param_1[3] = uVar5;
    param_1[4] = uVar15;
    param_1[5] = uVar14;
    param_1[6] = uVar13;
    param_1[7] = uVar12;
  } while (param_2 < pauVar2);
  return;
}

// sha256_block_data_order_avx @ 140df0480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sha256_block_data_order_avx(uint *param_1,undefined1 (*param_2) [16],longlong param_3)

{
  char *pcVar1;
  undefined1 (*pauVar2) [16];
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
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
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  
  auVar8 = _DAT_140def100;
  auVar7 = _DAT_140def0e0;
  pauVar2 = param_2 + param_3 * 4;
  uVar9 = *param_1;
  uVar12 = param_1[1];
  uVar10 = param_1[2];
  uVar11 = param_1[3];
  uVar21 = param_1[4];
  uVar20 = param_1[5];
  uVar19 = param_1[6];
  uVar18 = param_1[7];
  do {
    auVar30 = vpshufb_avx(*param_2,_DAT_140def0c0);
    auVar31 = vpshufb_avx(param_2[1],_DAT_140def0c0);
    auVar32 = vpshufb_avx(param_2[2],_DAT_140def0c0);
    iStack_100 = auVar30._0_4_ + K256;
    iStack_fc = auVar30._4_4_ + DAT_140deeec4;
    iStack_f8 = auVar30._8_4_ + DAT_140deeec8;
    auVar33 = vpshufb_avx(param_2[3],_DAT_140def0c0);
    iStack_f0 = auVar31._0_4_ + DAT_140deeee0;
    iStack_ec = auVar31._4_4_ + DAT_140deeee4;
    iStack_e8 = auVar31._8_4_ + DAT_140deeee8;
    iStack_e0 = auVar32._0_4_ + DAT_140deef00;
    iStack_dc = auVar32._4_4_ + DAT_140deef04;
    iStack_d8 = auVar32._8_4_ + DAT_140deef08;
    iStack_d0 = auVar33._0_4_ + DAT_140deef20;
    iStack_cc = auVar33._4_4_ + DAT_140deef24;
    iStack_c8 = auVar33._8_4_ + DAT_140deef28;
    uVar14 = uVar12 ^ uVar10;
    piVar13 = &K256;
    iStack_f4 = auVar30._12_4_ + DAT_140deeecc;
    iStack_e4 = auVar31._12_4_ + DAT_140deeeec;
    iStack_d4 = auVar32._12_4_ + DAT_140deef0c;
    iStack_c4 = auVar33._12_4_ + DAT_140deef2c;
    do {
      auVar29 = vpalignr_avx(auVar31,auVar30,4);
      auVar27 = vpalignr_avx(auVar33,auVar32,4);
      uVar16 = (uVar21 >> 0xe | uVar21 << 0x12) ^ uVar21;
      auVar24 = vpsrld_avx(auVar29,7);
      uVar17 = (uVar9 >> 9 | uVar9 << 0x17) ^ uVar9;
      uVar16 = (uVar16 >> 5 | uVar16 << 0x1b) ^ uVar21;
      auVar28 = vpsrld_avx(auVar29,3);
      auVar22 = vpslld_avx(auVar29,0xe);
      uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar9;
      iVar15 = uVar18 + iStack_100 + ((uVar20 ^ uVar19) & uVar21 ^ uVar19) +
               (uVar16 >> 6 | uVar16 << 0x1a);
      auVar29 = vpshufd_avx(auVar33,0xfa);
      uVar11 = uVar11 + iVar15;
      auVar25 = vpsrld_avx(auVar24,0xb);
      uVar18 = (uVar17 >> 2 | uVar17 << 0x1e) + iVar15 + (uVar14 & (uVar9 ^ uVar12) ^ uVar12);
      auVar23 = vpslld_avx(auVar22,0xb);
      uVar14 = (uVar11 >> 0xe | uVar11 * 0x40000) ^ uVar11;
      uVar16 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar11;
      auVar26 = vpsrld_avx(auVar29,10);
      auVar23 = auVar28 ^ auVar24 ^ auVar22 ^ auVar25 ^ auVar23;
      auVar29 = vpsrlq_avx(auVar29,0x11);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar18;
      iVar15 = uVar19 + iStack_fc + ((uVar21 ^ uVar20) & uVar11 ^ uVar20) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar10 = uVar10 + iVar15;
      auVar22 = vpsrlq_avx(auVar29,2);
      uVar19 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar9 ^ uVar12) & (uVar18 ^ uVar9) ^ uVar9);
      uVar14 = (uVar10 >> 0xe | uVar10 * 0x40000) ^ uVar10;
      auVar22 = vpshufb_avx(auVar26 ^ auVar29 ^ auVar22,auVar7);
      uVar16 = (uVar19 >> 9 | uVar19 * 0x800000) ^ uVar19;
      auVar29._0_4_ = auVar30._0_4_ + auVar27._0_4_ + auVar23._0_4_ + auVar22._0_4_;
      auVar29._4_4_ = auVar30._4_4_ + auVar27._4_4_ + auVar23._4_4_ + auVar22._4_4_;
      auVar29._8_4_ = auVar30._8_4_ + auVar27._8_4_ + auVar23._8_4_ + auVar22._8_4_;
      auVar29._12_4_ = auVar30._12_4_ + auVar27._12_4_ + auVar23._12_4_ + auVar22._12_4_;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar10;
      auVar30 = vpshufd_avx(auVar29,0x50);
      auVar27 = vpsrld_avx(auVar30,10);
      auVar30 = vpsrlq_avx(auVar30,0x11);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar19;
      iVar15 = uVar20 + iStack_f8 + ((uVar11 ^ uVar21) & uVar10 ^ uVar21) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar12 = uVar12 + iVar15;
      auVar22 = vpsrlq_avx(auVar30,2);
      uVar20 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar18 ^ uVar9) & (uVar19 ^ uVar18) ^ uVar18);
      auVar27 = vpshufb_avx(auVar27 ^ auVar30 ^ auVar22,auVar8);
      uVar14 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
      auVar30._0_4_ = auVar29._0_4_ + auVar27._0_4_;
      auVar30._4_4_ = auVar29._4_4_ + auVar27._4_4_;
      auVar30._8_4_ = auVar29._8_4_ + auVar27._8_4_;
      auVar30._12_4_ = auVar29._12_4_ + auVar27._12_4_;
      uVar16 = (uVar20 >> 9 | uVar20 * 0x800000) ^ uVar20;
      iStack_100 = auVar30._0_4_ + piVar13[0x20];
      iStack_fc = auVar30._4_4_ + piVar13[0x21];
      iStack_f8 = auVar30._8_4_ + piVar13[0x22];
      piVar3 = piVar13 + 0x23;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar12;
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar20;
      iVar15 = uVar21 + iStack_f4 + ((uVar10 ^ uVar11) & uVar12 ^ uVar11) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar9 = uVar9 + iVar15;
      uVar21 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar19 ^ uVar18) & (uVar20 ^ uVar19) ^ uVar19);
      auVar29 = vpalignr_avx(auVar32,auVar31,4);
      auVar22 = vpalignr_avx(auVar30,auVar33,4);
      uVar14 = (uVar9 >> 0xe | uVar9 * 0x40000) ^ uVar9;
      auVar24 = vpsrld_avx(auVar29,7);
      uVar16 = (uVar21 >> 9 | uVar21 * 0x800000) ^ uVar21;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar9;
      auVar28 = vpsrld_avx(auVar29,3);
      auVar27 = vpslld_avx(auVar29,0xe);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar21;
      iVar15 = uVar11 + iStack_f0 + ((uVar12 ^ uVar10) & uVar9 ^ uVar10) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      auVar29 = vpshufd_avx(auVar30,0xfa);
      uVar18 = uVar18 + iVar15;
      auVar25 = vpsrld_avx(auVar24,0xb);
      uVar11 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar20 ^ uVar19) & (uVar21 ^ uVar20) ^ uVar20);
      auVar23 = vpslld_avx(auVar27,0xb);
      uVar14 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
      uVar16 = (uVar11 >> 9 | uVar11 * 0x800000) ^ uVar11;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar18;
      auVar26 = vpsrld_avx(auVar29,10);
      auVar23 = auVar28 ^ auVar24 ^ auVar27 ^ auVar25 ^ auVar23;
      auVar29 = vpsrlq_avx(auVar29,0x11);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar11;
      iVar15 = uVar10 + iStack_ec + ((uVar9 ^ uVar12) & uVar18 ^ uVar12) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar19 = uVar19 + iVar15;
      auVar27 = vpsrlq_avx(auVar29,2);
      uVar10 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar21 ^ uVar20) & (uVar11 ^ uVar21) ^ uVar21);
      uVar14 = (uVar19 >> 0xe | uVar19 * 0x40000) ^ uVar19;
      auVar29 = vpshufb_avx(auVar26 ^ auVar29 ^ auVar27,auVar7);
      uVar16 = (uVar10 >> 9 | uVar10 * 0x800000) ^ uVar10;
      auVar27._0_4_ = auVar31._0_4_ + auVar22._0_4_ + auVar23._0_4_ + auVar29._0_4_;
      auVar27._4_4_ = auVar31._4_4_ + auVar22._4_4_ + auVar23._4_4_ + auVar29._4_4_;
      auVar27._8_4_ = auVar31._8_4_ + auVar22._8_4_ + auVar23._8_4_ + auVar29._8_4_;
      auVar27._12_4_ = auVar31._12_4_ + auVar22._12_4_ + auVar23._12_4_ + auVar29._12_4_;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar19;
      auVar31 = vpshufd_avx(auVar27,0x50);
      auVar29 = vpsrld_avx(auVar31,10);
      auVar31 = vpsrlq_avx(auVar31,0x11);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar10;
      iVar15 = uVar12 + iStack_e8 + ((uVar18 ^ uVar9) & uVar19 ^ uVar9) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar20 = uVar20 + iVar15;
      auVar22 = vpsrlq_avx(auVar31,2);
      uVar12 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar11 ^ uVar21) & (uVar10 ^ uVar11) ^ uVar11);
      auVar29 = vpshufb_avx(auVar29 ^ auVar31 ^ auVar22,auVar8);
      uVar14 = (uVar20 >> 0xe | uVar20 * 0x40000) ^ uVar20;
      auVar31._0_4_ = auVar27._0_4_ + auVar29._0_4_;
      auVar31._4_4_ = auVar27._4_4_ + auVar29._4_4_;
      auVar31._8_4_ = auVar27._8_4_ + auVar29._8_4_;
      auVar31._12_4_ = auVar27._12_4_ + auVar29._12_4_;
      uVar16 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
      iStack_f0 = auVar31._0_4_ + piVar13[0x28];
      iStack_ec = auVar31._4_4_ + piVar13[0x29];
      iStack_e8 = auVar31._8_4_ + piVar13[0x2a];
      piVar4 = piVar13 + 0x2b;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar20;
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar12;
      iVar15 = uVar9 + iStack_e4 + ((uVar19 ^ uVar18) & uVar20 ^ uVar18) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar21 = uVar21 + iVar15;
      uVar9 = (uVar16 >> 2 | uVar16 << 0x1e) +
              iVar15 + ((uVar10 ^ uVar11) & (uVar12 ^ uVar10) ^ uVar10);
      auVar29 = vpalignr_avx(auVar33,auVar32,4);
      auVar27 = vpalignr_avx(auVar31,auVar30,4);
      uVar14 = (uVar21 >> 0xe | uVar21 * 0x40000) ^ uVar21;
      auVar24 = vpsrld_avx(auVar29,7);
      uVar16 = (uVar9 >> 9 | uVar9 * 0x800000) ^ uVar9;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar21;
      auVar28 = vpsrld_avx(auVar29,3);
      auVar22 = vpslld_avx(auVar29,0xe);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar9;
      iVar15 = uVar18 + iStack_e0 + ((uVar20 ^ uVar19) & uVar21 ^ uVar19) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      auVar29 = vpshufd_avx(auVar31,0xfa);
      uVar11 = uVar11 + iVar15;
      auVar25 = vpsrld_avx(auVar24,0xb);
      uVar18 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar12 ^ uVar10) & (uVar9 ^ uVar12) ^ uVar12);
      auVar23 = vpslld_avx(auVar22,0xb);
      uVar14 = (uVar11 >> 0xe | uVar11 * 0x40000) ^ uVar11;
      uVar16 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar11;
      auVar26 = vpsrld_avx(auVar29,10);
      auVar23 = auVar28 ^ auVar24 ^ auVar22 ^ auVar25 ^ auVar23;
      auVar29 = vpsrlq_avx(auVar29,0x11);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar18;
      iVar15 = uVar19 + iStack_dc + ((uVar21 ^ uVar20) & uVar11 ^ uVar20) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar10 = uVar10 + iVar15;
      auVar22 = vpsrlq_avx(auVar29,2);
      uVar19 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar9 ^ uVar12) & (uVar18 ^ uVar9) ^ uVar9);
      uVar14 = (uVar10 >> 0xe | uVar10 * 0x40000) ^ uVar10;
      auVar29 = vpshufb_avx(auVar26 ^ auVar29 ^ auVar22,auVar7);
      uVar16 = (uVar19 >> 9 | uVar19 * 0x800000) ^ uVar19;
      auVar22._0_4_ = auVar32._0_4_ + auVar27._0_4_ + auVar23._0_4_ + auVar29._0_4_;
      auVar22._4_4_ = auVar32._4_4_ + auVar27._4_4_ + auVar23._4_4_ + auVar29._4_4_;
      auVar22._8_4_ = auVar32._8_4_ + auVar27._8_4_ + auVar23._8_4_ + auVar29._8_4_;
      auVar22._12_4_ = auVar32._12_4_ + auVar27._12_4_ + auVar23._12_4_ + auVar29._12_4_;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar10;
      auVar32 = vpshufd_avx(auVar22,0x50);
      auVar29 = vpsrld_avx(auVar32,10);
      auVar32 = vpsrlq_avx(auVar32,0x11);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar19;
      iVar15 = uVar20 + iStack_d8 + ((uVar11 ^ uVar21) & uVar10 ^ uVar21) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar12 = uVar12 + iVar15;
      auVar27 = vpsrlq_avx(auVar32,2);
      uVar20 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar18 ^ uVar9) & (uVar19 ^ uVar18) ^ uVar18);
      auVar29 = vpshufb_avx(auVar29 ^ auVar32 ^ auVar27,auVar8);
      uVar14 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
      auVar32._0_4_ = auVar22._0_4_ + auVar29._0_4_;
      auVar32._4_4_ = auVar22._4_4_ + auVar29._4_4_;
      auVar32._8_4_ = auVar22._8_4_ + auVar29._8_4_;
      auVar32._12_4_ = auVar22._12_4_ + auVar29._12_4_;
      uVar16 = (uVar20 >> 9 | uVar20 * 0x800000) ^ uVar20;
      iStack_e0 = auVar32._0_4_ + piVar13[0x30];
      iStack_dc = auVar32._4_4_ + piVar13[0x31];
      iStack_d8 = auVar32._8_4_ + piVar13[0x32];
      piVar5 = piVar13 + 0x33;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar12;
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar20;
      iVar15 = uVar21 + iStack_d4 + ((uVar10 ^ uVar11) & uVar12 ^ uVar11) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar9 = uVar9 + iVar15;
      uVar21 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar19 ^ uVar18) & (uVar20 ^ uVar19) ^ uVar19);
      auVar29 = vpalignr_avx(auVar30,auVar33,4);
      auVar27 = vpalignr_avx(auVar32,auVar31,4);
      uVar14 = (uVar9 >> 0xe | uVar9 * 0x40000) ^ uVar9;
      auVar24 = vpsrld_avx(auVar29,7);
      uVar16 = (uVar21 >> 9 | uVar21 * 0x800000) ^ uVar21;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar9;
      auVar28 = vpsrld_avx(auVar29,3);
      auVar23 = vpslld_avx(auVar29,0xe);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar21;
      iVar15 = uVar11 + iStack_d0 + ((uVar12 ^ uVar10) & uVar9 ^ uVar10) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      auVar29 = vpshufd_avx(auVar32,0xfa);
      uVar18 = uVar18 + iVar15;
      auVar25 = vpsrld_avx(auVar24,0xb);
      uVar11 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar20 ^ uVar19) & (uVar21 ^ uVar20) ^ uVar20);
      auVar22 = vpslld_avx(auVar23,0xb);
      uVar14 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
      uVar16 = (uVar11 >> 9 | uVar11 * 0x800000) ^ uVar11;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar18;
      auVar26 = vpsrld_avx(auVar29,10);
      auVar22 = auVar28 ^ auVar24 ^ auVar23 ^ auVar25 ^ auVar22;
      auVar29 = vpsrlq_avx(auVar29,0x11);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar11;
      iVar15 = uVar10 + iStack_cc + ((uVar9 ^ uVar12) & uVar18 ^ uVar12) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar19 = uVar19 + iVar15;
      auVar23 = vpsrlq_avx(auVar29,2);
      uVar10 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar21 ^ uVar20) & (uVar11 ^ uVar21) ^ uVar21);
      uVar14 = (uVar19 >> 0xe | uVar19 * 0x40000) ^ uVar19;
      auVar29 = vpshufb_avx(auVar26 ^ auVar29 ^ auVar23,auVar7);
      uVar16 = (uVar10 >> 9 | uVar10 * 0x800000) ^ uVar10;
      auVar23._0_4_ = auVar33._0_4_ + auVar27._0_4_ + auVar22._0_4_ + auVar29._0_4_;
      auVar23._4_4_ = auVar33._4_4_ + auVar27._4_4_ + auVar22._4_4_ + auVar29._4_4_;
      auVar23._8_4_ = auVar33._8_4_ + auVar27._8_4_ + auVar22._8_4_ + auVar29._8_4_;
      auVar23._12_4_ = auVar33._12_4_ + auVar27._12_4_ + auVar22._12_4_ + auVar29._12_4_;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar19;
      auVar33 = vpshufd_avx(auVar23,0x50);
      auVar29 = vpsrld_avx(auVar33,10);
      auVar33 = vpsrlq_avx(auVar33,0x11);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar10;
      iVar15 = uVar12 + iStack_c8 + ((uVar18 ^ uVar9) & uVar19 ^ uVar9) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar20 = uVar20 + iVar15;
      auVar27 = vpsrlq_avx(auVar33,2);
      uVar12 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar11 ^ uVar21) & (uVar10 ^ uVar11) ^ uVar11);
      auVar29 = vpshufb_avx(auVar29 ^ auVar33 ^ auVar27,auVar8);
      uVar14 = (uVar20 >> 0xe | uVar20 * 0x40000) ^ uVar20;
      auVar33._0_4_ = auVar23._0_4_ + auVar29._0_4_;
      auVar33._4_4_ = auVar23._4_4_ + auVar29._4_4_;
      auVar33._8_4_ = auVar23._8_4_ + auVar29._8_4_;
      auVar33._12_4_ = auVar23._12_4_ + auVar29._12_4_;
      uVar17 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
      iStack_d0 = auVar33._0_4_ + piVar13[0x38];
      iStack_cc = auVar33._4_4_ + piVar13[0x39];
      iStack_c8 = auVar33._8_4_ + piVar13[0x3a];
      piVar6 = piVar13 + 0x3b;
      uVar16 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar20;
      uVar14 = uVar12 ^ uVar10;
      uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar12;
      iVar15 = uVar9 + iStack_c4 + ((uVar19 ^ uVar18) & uVar20 ^ uVar18) +
               (uVar16 >> 6 | uVar16 << 0x1a);
      uVar21 = uVar21 + iVar15;
      uVar9 = (uVar17 >> 2 | uVar17 << 0x1e) + iVar15 + ((uVar10 ^ uVar11) & uVar14 ^ uVar10);
      pcVar1 = (char *)((longlong)piVar13 + 0x103);
      piVar13 = piVar13 + 0x20;
      iStack_f4 = auVar30._12_4_ + *piVar3;
      iStack_e4 = auVar31._12_4_ + *piVar4;
      iStack_d4 = auVar32._12_4_ + *piVar5;
      iStack_c4 = auVar33._12_4_ + *piVar6;
    } while (*pcVar1 != '\0');
    uVar16 = (uVar21 >> 0xe | uVar21 * 0x40000) ^ uVar21;
    uVar17 = (uVar9 >> 9 | uVar9 * 0x800000) ^ uVar9;
    uVar16 = (uVar16 >> 5 | uVar16 << 0x1b) ^ uVar21;
    uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar9;
    iVar15 = uVar18 + iStack_100 + ((uVar20 ^ uVar19) & uVar21 ^ uVar19) +
             (uVar16 >> 6 | uVar16 << 0x1a);
    uVar11 = uVar11 + iVar15;
    uVar18 = (uVar17 >> 2 | uVar17 << 0x1e) + iVar15 + (uVar14 & (uVar9 ^ uVar12) ^ uVar12);
    uVar14 = (uVar11 >> 0xe | uVar11 * 0x40000) ^ uVar11;
    uVar16 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar11;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar18;
    iVar15 = uVar19 + iStack_fc + ((uVar21 ^ uVar20) & uVar11 ^ uVar20) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar10 = uVar10 + iVar15;
    uVar19 = (uVar16 >> 2 | uVar16 << 0x1e) + iVar15 + ((uVar9 ^ uVar12) & (uVar18 ^ uVar9) ^ uVar9)
    ;
    uVar14 = (uVar10 >> 0xe | uVar10 * 0x40000) ^ uVar10;
    uVar16 = (uVar19 >> 9 | uVar19 * 0x800000) ^ uVar19;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar10;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar19;
    iVar15 = uVar20 + iStack_f8 + ((uVar11 ^ uVar21) & uVar10 ^ uVar21) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar12 = uVar12 + iVar15;
    uVar20 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar18 ^ uVar9) & (uVar19 ^ uVar18) ^ uVar18);
    uVar14 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
    uVar16 = (uVar20 >> 9 | uVar20 * 0x800000) ^ uVar20;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar12;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar20;
    iVar15 = uVar21 + auVar30._12_4_ + *piVar3 + ((uVar10 ^ uVar11) & uVar12 ^ uVar11) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar9 = uVar9 + iVar15;
    uVar21 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar19 ^ uVar18) & (uVar20 ^ uVar19) ^ uVar19);
    uVar14 = (uVar9 >> 0xe | uVar9 * 0x40000) ^ uVar9;
    uVar16 = (uVar21 >> 9 | uVar21 * 0x800000) ^ uVar21;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar9;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar21;
    iVar15 = uVar11 + iStack_f0 + ((uVar12 ^ uVar10) & uVar9 ^ uVar10) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar18 = uVar18 + iVar15;
    uVar11 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar20 ^ uVar19) & (uVar21 ^ uVar20) ^ uVar20);
    uVar14 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
    uVar16 = (uVar11 >> 9 | uVar11 * 0x800000) ^ uVar11;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar18;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar11;
    iVar15 = uVar10 + iStack_ec + ((uVar9 ^ uVar12) & uVar18 ^ uVar12) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar19 = uVar19 + iVar15;
    uVar10 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar21 ^ uVar20) & (uVar11 ^ uVar21) ^ uVar21);
    uVar14 = (uVar19 >> 0xe | uVar19 * 0x40000) ^ uVar19;
    uVar16 = (uVar10 >> 9 | uVar10 * 0x800000) ^ uVar10;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar19;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar10;
    iVar15 = uVar12 + iStack_e8 + ((uVar18 ^ uVar9) & uVar19 ^ uVar9) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar20 = uVar20 + iVar15;
    uVar12 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar11 ^ uVar21) & (uVar10 ^ uVar11) ^ uVar11);
    uVar14 = (uVar20 >> 0xe | uVar20 * 0x40000) ^ uVar20;
    uVar16 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar20;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar12;
    iVar15 = uVar9 + auVar31._12_4_ + *piVar4 + ((uVar19 ^ uVar18) & uVar20 ^ uVar18) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar21 = uVar21 + iVar15;
    uVar9 = (uVar16 >> 2 | uVar16 << 0x1e) +
            iVar15 + ((uVar10 ^ uVar11) & (uVar12 ^ uVar10) ^ uVar10);
    uVar14 = (uVar21 >> 0xe | uVar21 * 0x40000) ^ uVar21;
    uVar16 = (uVar9 >> 9 | uVar9 * 0x800000) ^ uVar9;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar21;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar9;
    iVar15 = uVar18 + iStack_e0 + ((uVar20 ^ uVar19) & uVar21 ^ uVar19) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar11 = uVar11 + iVar15;
    uVar18 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar12 ^ uVar10) & (uVar9 ^ uVar12) ^ uVar12);
    uVar14 = (uVar11 >> 0xe | uVar11 * 0x40000) ^ uVar11;
    uVar16 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar11;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar18;
    iVar15 = uVar19 + iStack_dc + ((uVar21 ^ uVar20) & uVar11 ^ uVar20) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar10 = uVar10 + iVar15;
    uVar19 = (uVar16 >> 2 | uVar16 << 0x1e) + iVar15 + ((uVar9 ^ uVar12) & (uVar18 ^ uVar9) ^ uVar9)
    ;
    uVar14 = (uVar10 >> 0xe | uVar10 * 0x40000) ^ uVar10;
    uVar16 = (uVar19 >> 9 | uVar19 * 0x800000) ^ uVar19;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar10;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar19;
    iVar15 = uVar20 + iStack_d8 + ((uVar11 ^ uVar21) & uVar10 ^ uVar21) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar12 = uVar12 + iVar15;
    uVar20 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar18 ^ uVar9) & (uVar19 ^ uVar18) ^ uVar18);
    uVar14 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
    uVar16 = (uVar20 >> 9 | uVar20 * 0x800000) ^ uVar20;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar12;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar20;
    iVar15 = uVar21 + auVar32._12_4_ + *piVar5 + ((uVar10 ^ uVar11) & uVar12 ^ uVar11) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar9 = uVar9 + iVar15;
    uVar14 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar19 ^ uVar18) & (uVar20 ^ uVar19) ^ uVar19);
    uVar21 = (uVar9 >> 0xe | uVar9 * 0x40000) ^ uVar9;
    uVar16 = (uVar14 >> 9 | uVar14 * 0x800000) ^ uVar14;
    uVar21 = (uVar21 >> 5 | uVar21 << 0x1b) ^ uVar9;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar14;
    iVar15 = uVar11 + iStack_d0 + ((uVar12 ^ uVar10) & uVar9 ^ uVar10) +
             (uVar21 >> 6 | uVar21 << 0x1a);
    uVar18 = uVar18 + iVar15;
    uVar11 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar20 ^ uVar19) & (uVar14 ^ uVar20) ^ uVar20);
    uVar21 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
    uVar16 = (uVar11 >> 9 | uVar11 * 0x800000) ^ uVar11;
    uVar21 = (uVar21 >> 5 | uVar21 << 0x1b) ^ uVar18;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar11;
    iVar15 = uVar10 + iStack_cc + ((uVar9 ^ uVar12) & uVar18 ^ uVar12) +
             (uVar21 >> 6 | uVar21 << 0x1a);
    uVar19 = uVar19 + iVar15;
    uVar10 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar14 ^ uVar20) & (uVar11 ^ uVar14) ^ uVar14);
    uVar21 = (uVar19 >> 0xe | uVar19 * 0x40000) ^ uVar19;
    uVar16 = (uVar10 >> 9 | uVar10 * 0x800000) ^ uVar10;
    uVar21 = (uVar21 >> 5 | uVar21 << 0x1b) ^ uVar19;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar10;
    iVar15 = uVar12 + iStack_c8 + ((uVar18 ^ uVar9) & uVar19 ^ uVar9) +
             (uVar21 >> 6 | uVar21 << 0x1a);
    uVar20 = uVar20 + iVar15;
    uVar12 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar11 ^ uVar14) & (uVar10 ^ uVar11) ^ uVar11);
    uVar21 = (uVar20 >> 0xe | uVar20 * 0x40000) ^ uVar20;
    uVar16 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
    uVar21 = (uVar21 >> 5 | uVar21 << 0x1b) ^ uVar20;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar12;
    iVar15 = uVar9 + auVar33._12_4_ + *piVar6 + ((uVar19 ^ uVar18) & uVar20 ^ uVar18) +
             (uVar21 >> 6 | uVar21 << 0x1a);
    uVar9 = (uVar16 >> 2 | uVar16 << 0x1e) +
            iVar15 + ((uVar10 ^ uVar11) & (uVar12 ^ uVar10) ^ uVar10) + *param_1;
    param_2 = param_2 + 4;
    uVar12 = uVar12 + param_1[1];
    uVar10 = uVar10 + param_1[2];
    uVar11 = uVar11 + param_1[3];
    uVar21 = uVar14 + iVar15 + param_1[4];
    uVar20 = uVar20 + param_1[5];
    uVar19 = uVar19 + param_1[6];
    uVar18 = uVar18 + param_1[7];
    *param_1 = uVar9;
    param_1[1] = uVar12;
    param_1[2] = uVar10;
    param_1[3] = uVar11;
    param_1[4] = uVar21;
    param_1[5] = uVar20;
    param_1[6] = uVar19;
    param_1[7] = uVar18;
  } while (param_2 < pauVar2);
  return;
}

// L$SEH_begin_sha256_block_data_order_avx @ 140df048d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L_SEH_begin_sha256_block_data_order_avx
               (uint *param_1,undefined1 (*param_2) [16],longlong param_3)

{
  char *pcVar1;
  undefined1 (*pauVar2) [16];
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
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
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  
  auVar8 = _DAT_140def100;
  auVar7 = _DAT_140def0e0;
  pauVar2 = param_2 + param_3 * 4;
  uVar9 = *param_1;
  uVar12 = param_1[1];
  uVar10 = param_1[2];
  uVar11 = param_1[3];
  uVar21 = param_1[4];
  uVar20 = param_1[5];
  uVar19 = param_1[6];
  uVar18 = param_1[7];
  do {
    auVar30 = vpshufb_avx(*param_2,_DAT_140def0c0);
    auVar31 = vpshufb_avx(param_2[1],_DAT_140def0c0);
    auVar32 = vpshufb_avx(param_2[2],_DAT_140def0c0);
    local_100 = auVar30._0_4_ + K256;
    iStack_fc = auVar30._4_4_ + DAT_140deeec4;
    iStack_f8 = auVar30._8_4_ + DAT_140deeec8;
    auVar33 = vpshufb_avx(param_2[3],_DAT_140def0c0);
    local_f0 = auVar31._0_4_ + DAT_140deeee0;
    iStack_ec = auVar31._4_4_ + DAT_140deeee4;
    iStack_e8 = auVar31._8_4_ + DAT_140deeee8;
    local_e0 = auVar32._0_4_ + DAT_140deef00;
    iStack_dc = auVar32._4_4_ + DAT_140deef04;
    iStack_d8 = auVar32._8_4_ + DAT_140deef08;
    local_d0 = auVar33._0_4_ + DAT_140deef20;
    iStack_cc = auVar33._4_4_ + DAT_140deef24;
    iStack_c8 = auVar33._8_4_ + DAT_140deef28;
    uVar14 = uVar12 ^ uVar10;
    piVar13 = &K256;
    iStack_f4 = auVar30._12_4_ + DAT_140deeecc;
    iStack_e4 = auVar31._12_4_ + DAT_140deeeec;
    iStack_d4 = auVar32._12_4_ + DAT_140deef0c;
    iStack_c4 = auVar33._12_4_ + DAT_140deef2c;
    do {
      auVar29 = vpalignr_avx(auVar31,auVar30,4);
      auVar27 = vpalignr_avx(auVar33,auVar32,4);
      uVar16 = (uVar21 >> 0xe | uVar21 << 0x12) ^ uVar21;
      auVar24 = vpsrld_avx(auVar29,7);
      uVar17 = (uVar9 >> 9 | uVar9 << 0x17) ^ uVar9;
      uVar16 = (uVar16 >> 5 | uVar16 << 0x1b) ^ uVar21;
      auVar28 = vpsrld_avx(auVar29,3);
      auVar22 = vpslld_avx(auVar29,0xe);
      uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar9;
      iVar15 = uVar18 + local_100 + ((uVar20 ^ uVar19) & uVar21 ^ uVar19) +
               (uVar16 >> 6 | uVar16 << 0x1a);
      auVar29 = vpshufd_avx(auVar33,0xfa);
      uVar11 = uVar11 + iVar15;
      auVar25 = vpsrld_avx(auVar24,0xb);
      uVar18 = (uVar17 >> 2 | uVar17 << 0x1e) + iVar15 + (uVar14 & (uVar9 ^ uVar12) ^ uVar12);
      auVar23 = vpslld_avx(auVar22,0xb);
      uVar14 = (uVar11 >> 0xe | uVar11 * 0x40000) ^ uVar11;
      uVar16 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar11;
      auVar26 = vpsrld_avx(auVar29,10);
      auVar23 = auVar28 ^ auVar24 ^ auVar22 ^ auVar25 ^ auVar23;
      auVar29 = vpsrlq_avx(auVar29,0x11);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar18;
      iVar15 = uVar19 + iStack_fc + ((uVar21 ^ uVar20) & uVar11 ^ uVar20) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar10 = uVar10 + iVar15;
      auVar22 = vpsrlq_avx(auVar29,2);
      uVar19 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar9 ^ uVar12) & (uVar18 ^ uVar9) ^ uVar9);
      uVar14 = (uVar10 >> 0xe | uVar10 * 0x40000) ^ uVar10;
      auVar22 = vpshufb_avx(auVar26 ^ auVar29 ^ auVar22,auVar7);
      uVar16 = (uVar19 >> 9 | uVar19 * 0x800000) ^ uVar19;
      auVar29._0_4_ = auVar30._0_4_ + auVar27._0_4_ + auVar23._0_4_ + auVar22._0_4_;
      auVar29._4_4_ = auVar30._4_4_ + auVar27._4_4_ + auVar23._4_4_ + auVar22._4_4_;
      auVar29._8_4_ = auVar30._8_4_ + auVar27._8_4_ + auVar23._8_4_ + auVar22._8_4_;
      auVar29._12_4_ = auVar30._12_4_ + auVar27._12_4_ + auVar23._12_4_ + auVar22._12_4_;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar10;
      auVar30 = vpshufd_avx(auVar29,0x50);
      auVar27 = vpsrld_avx(auVar30,10);
      auVar30 = vpsrlq_avx(auVar30,0x11);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar19;
      iVar15 = uVar20 + iStack_f8 + ((uVar11 ^ uVar21) & uVar10 ^ uVar21) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar12 = uVar12 + iVar15;
      auVar22 = vpsrlq_avx(auVar30,2);
      uVar20 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar18 ^ uVar9) & (uVar19 ^ uVar18) ^ uVar18);
      auVar27 = vpshufb_avx(auVar27 ^ auVar30 ^ auVar22,auVar8);
      uVar14 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
      auVar30._0_4_ = auVar29._0_4_ + auVar27._0_4_;
      auVar30._4_4_ = auVar29._4_4_ + auVar27._4_4_;
      auVar30._8_4_ = auVar29._8_4_ + auVar27._8_4_;
      auVar30._12_4_ = auVar29._12_4_ + auVar27._12_4_;
      uVar16 = (uVar20 >> 9 | uVar20 * 0x800000) ^ uVar20;
      local_100 = auVar30._0_4_ + piVar13[0x20];
      iStack_fc = auVar30._4_4_ + piVar13[0x21];
      iStack_f8 = auVar30._8_4_ + piVar13[0x22];
      piVar3 = piVar13 + 0x23;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar12;
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar20;
      iVar15 = uVar21 + iStack_f4 + ((uVar10 ^ uVar11) & uVar12 ^ uVar11) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar9 = uVar9 + iVar15;
      uVar21 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar19 ^ uVar18) & (uVar20 ^ uVar19) ^ uVar19);
      auVar29 = vpalignr_avx(auVar32,auVar31,4);
      auVar22 = vpalignr_avx(auVar30,auVar33,4);
      uVar14 = (uVar9 >> 0xe | uVar9 * 0x40000) ^ uVar9;
      auVar24 = vpsrld_avx(auVar29,7);
      uVar16 = (uVar21 >> 9 | uVar21 * 0x800000) ^ uVar21;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar9;
      auVar28 = vpsrld_avx(auVar29,3);
      auVar27 = vpslld_avx(auVar29,0xe);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar21;
      iVar15 = uVar11 + local_f0 + ((uVar12 ^ uVar10) & uVar9 ^ uVar10) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      auVar29 = vpshufd_avx(auVar30,0xfa);
      uVar18 = uVar18 + iVar15;
      auVar25 = vpsrld_avx(auVar24,0xb);
      uVar11 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar20 ^ uVar19) & (uVar21 ^ uVar20) ^ uVar20);
      auVar23 = vpslld_avx(auVar27,0xb);
      uVar14 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
      uVar16 = (uVar11 >> 9 | uVar11 * 0x800000) ^ uVar11;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar18;
      auVar26 = vpsrld_avx(auVar29,10);
      auVar23 = auVar28 ^ auVar24 ^ auVar27 ^ auVar25 ^ auVar23;
      auVar29 = vpsrlq_avx(auVar29,0x11);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar11;
      iVar15 = uVar10 + iStack_ec + ((uVar9 ^ uVar12) & uVar18 ^ uVar12) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar19 = uVar19 + iVar15;
      auVar27 = vpsrlq_avx(auVar29,2);
      uVar10 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar21 ^ uVar20) & (uVar11 ^ uVar21) ^ uVar21);
      uVar14 = (uVar19 >> 0xe | uVar19 * 0x40000) ^ uVar19;
      auVar29 = vpshufb_avx(auVar26 ^ auVar29 ^ auVar27,auVar7);
      uVar16 = (uVar10 >> 9 | uVar10 * 0x800000) ^ uVar10;
      auVar27._0_4_ = auVar31._0_4_ + auVar22._0_4_ + auVar23._0_4_ + auVar29._0_4_;
      auVar27._4_4_ = auVar31._4_4_ + auVar22._4_4_ + auVar23._4_4_ + auVar29._4_4_;
      auVar27._8_4_ = auVar31._8_4_ + auVar22._8_4_ + auVar23._8_4_ + auVar29._8_4_;
      auVar27._12_4_ = auVar31._12_4_ + auVar22._12_4_ + auVar23._12_4_ + auVar29._12_4_;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar19;
      auVar31 = vpshufd_avx(auVar27,0x50);
      auVar29 = vpsrld_avx(auVar31,10);
      auVar31 = vpsrlq_avx(auVar31,0x11);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar10;
      iVar15 = uVar12 + iStack_e8 + ((uVar18 ^ uVar9) & uVar19 ^ uVar9) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar20 = uVar20 + iVar15;
      auVar22 = vpsrlq_avx(auVar31,2);
      uVar12 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar11 ^ uVar21) & (uVar10 ^ uVar11) ^ uVar11);
      auVar29 = vpshufb_avx(auVar29 ^ auVar31 ^ auVar22,auVar8);
      uVar14 = (uVar20 >> 0xe | uVar20 * 0x40000) ^ uVar20;
      auVar31._0_4_ = auVar27._0_4_ + auVar29._0_4_;
      auVar31._4_4_ = auVar27._4_4_ + auVar29._4_4_;
      auVar31._8_4_ = auVar27._8_4_ + auVar29._8_4_;
      auVar31._12_4_ = auVar27._12_4_ + auVar29._12_4_;
      uVar16 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
      local_f0 = auVar31._0_4_ + piVar13[0x28];
      iStack_ec = auVar31._4_4_ + piVar13[0x29];
      iStack_e8 = auVar31._8_4_ + piVar13[0x2a];
      piVar4 = piVar13 + 0x2b;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar20;
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar12;
      iVar15 = uVar9 + iStack_e4 + ((uVar19 ^ uVar18) & uVar20 ^ uVar18) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar21 = uVar21 + iVar15;
      uVar9 = (uVar16 >> 2 | uVar16 << 0x1e) +
              iVar15 + ((uVar10 ^ uVar11) & (uVar12 ^ uVar10) ^ uVar10);
      auVar29 = vpalignr_avx(auVar33,auVar32,4);
      auVar27 = vpalignr_avx(auVar31,auVar30,4);
      uVar14 = (uVar21 >> 0xe | uVar21 * 0x40000) ^ uVar21;
      auVar24 = vpsrld_avx(auVar29,7);
      uVar16 = (uVar9 >> 9 | uVar9 * 0x800000) ^ uVar9;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar21;
      auVar28 = vpsrld_avx(auVar29,3);
      auVar22 = vpslld_avx(auVar29,0xe);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar9;
      iVar15 = uVar18 + local_e0 + ((uVar20 ^ uVar19) & uVar21 ^ uVar19) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      auVar29 = vpshufd_avx(auVar31,0xfa);
      uVar11 = uVar11 + iVar15;
      auVar25 = vpsrld_avx(auVar24,0xb);
      uVar18 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar12 ^ uVar10) & (uVar9 ^ uVar12) ^ uVar12);
      auVar23 = vpslld_avx(auVar22,0xb);
      uVar14 = (uVar11 >> 0xe | uVar11 * 0x40000) ^ uVar11;
      uVar16 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar11;
      auVar26 = vpsrld_avx(auVar29,10);
      auVar23 = auVar28 ^ auVar24 ^ auVar22 ^ auVar25 ^ auVar23;
      auVar29 = vpsrlq_avx(auVar29,0x11);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar18;
      iVar15 = uVar19 + iStack_dc + ((uVar21 ^ uVar20) & uVar11 ^ uVar20) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar10 = uVar10 + iVar15;
      auVar22 = vpsrlq_avx(auVar29,2);
      uVar19 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar9 ^ uVar12) & (uVar18 ^ uVar9) ^ uVar9);
      uVar14 = (uVar10 >> 0xe | uVar10 * 0x40000) ^ uVar10;
      auVar29 = vpshufb_avx(auVar26 ^ auVar29 ^ auVar22,auVar7);
      uVar16 = (uVar19 >> 9 | uVar19 * 0x800000) ^ uVar19;
      auVar22._0_4_ = auVar32._0_4_ + auVar27._0_4_ + auVar23._0_4_ + auVar29._0_4_;
      auVar22._4_4_ = auVar32._4_4_ + auVar27._4_4_ + auVar23._4_4_ + auVar29._4_4_;
      auVar22._8_4_ = auVar32._8_4_ + auVar27._8_4_ + auVar23._8_4_ + auVar29._8_4_;
      auVar22._12_4_ = auVar32._12_4_ + auVar27._12_4_ + auVar23._12_4_ + auVar29._12_4_;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar10;
      auVar32 = vpshufd_avx(auVar22,0x50);
      auVar29 = vpsrld_avx(auVar32,10);
      auVar32 = vpsrlq_avx(auVar32,0x11);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar19;
      iVar15 = uVar20 + iStack_d8 + ((uVar11 ^ uVar21) & uVar10 ^ uVar21) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar12 = uVar12 + iVar15;
      auVar27 = vpsrlq_avx(auVar32,2);
      uVar20 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar18 ^ uVar9) & (uVar19 ^ uVar18) ^ uVar18);
      auVar29 = vpshufb_avx(auVar29 ^ auVar32 ^ auVar27,auVar8);
      uVar14 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
      auVar32._0_4_ = auVar22._0_4_ + auVar29._0_4_;
      auVar32._4_4_ = auVar22._4_4_ + auVar29._4_4_;
      auVar32._8_4_ = auVar22._8_4_ + auVar29._8_4_;
      auVar32._12_4_ = auVar22._12_4_ + auVar29._12_4_;
      uVar16 = (uVar20 >> 9 | uVar20 * 0x800000) ^ uVar20;
      local_e0 = auVar32._0_4_ + piVar13[0x30];
      iStack_dc = auVar32._4_4_ + piVar13[0x31];
      iStack_d8 = auVar32._8_4_ + piVar13[0x32];
      piVar5 = piVar13 + 0x33;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar12;
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar20;
      iVar15 = uVar21 + iStack_d4 + ((uVar10 ^ uVar11) & uVar12 ^ uVar11) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar9 = uVar9 + iVar15;
      uVar21 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar19 ^ uVar18) & (uVar20 ^ uVar19) ^ uVar19);
      auVar29 = vpalignr_avx(auVar30,auVar33,4);
      auVar27 = vpalignr_avx(auVar32,auVar31,4);
      uVar14 = (uVar9 >> 0xe | uVar9 * 0x40000) ^ uVar9;
      auVar24 = vpsrld_avx(auVar29,7);
      uVar16 = (uVar21 >> 9 | uVar21 * 0x800000) ^ uVar21;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar9;
      auVar28 = vpsrld_avx(auVar29,3);
      auVar23 = vpslld_avx(auVar29,0xe);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar21;
      iVar15 = uVar11 + local_d0 + ((uVar12 ^ uVar10) & uVar9 ^ uVar10) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      auVar29 = vpshufd_avx(auVar32,0xfa);
      uVar18 = uVar18 + iVar15;
      auVar25 = vpsrld_avx(auVar24,0xb);
      uVar11 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar20 ^ uVar19) & (uVar21 ^ uVar20) ^ uVar20);
      auVar22 = vpslld_avx(auVar23,0xb);
      uVar14 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
      uVar16 = (uVar11 >> 9 | uVar11 * 0x800000) ^ uVar11;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar18;
      auVar26 = vpsrld_avx(auVar29,10);
      auVar22 = auVar28 ^ auVar24 ^ auVar23 ^ auVar25 ^ auVar22;
      auVar29 = vpsrlq_avx(auVar29,0x11);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar11;
      iVar15 = uVar10 + iStack_cc + ((uVar9 ^ uVar12) & uVar18 ^ uVar12) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar19 = uVar19 + iVar15;
      auVar23 = vpsrlq_avx(auVar29,2);
      uVar10 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar21 ^ uVar20) & (uVar11 ^ uVar21) ^ uVar21);
      uVar14 = (uVar19 >> 0xe | uVar19 * 0x40000) ^ uVar19;
      auVar29 = vpshufb_avx(auVar26 ^ auVar29 ^ auVar23,auVar7);
      uVar16 = (uVar10 >> 9 | uVar10 * 0x800000) ^ uVar10;
      auVar23._0_4_ = auVar33._0_4_ + auVar27._0_4_ + auVar22._0_4_ + auVar29._0_4_;
      auVar23._4_4_ = auVar33._4_4_ + auVar27._4_4_ + auVar22._4_4_ + auVar29._4_4_;
      auVar23._8_4_ = auVar33._8_4_ + auVar27._8_4_ + auVar22._8_4_ + auVar29._8_4_;
      auVar23._12_4_ = auVar33._12_4_ + auVar27._12_4_ + auVar22._12_4_ + auVar29._12_4_;
      uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar19;
      auVar33 = vpshufd_avx(auVar23,0x50);
      auVar29 = vpsrld_avx(auVar33,10);
      auVar33 = vpsrlq_avx(auVar33,0x11);
      uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar10;
      iVar15 = uVar12 + iStack_c8 + ((uVar18 ^ uVar9) & uVar19 ^ uVar9) +
               (uVar14 >> 6 | uVar14 << 0x1a);
      uVar20 = uVar20 + iVar15;
      auVar27 = vpsrlq_avx(auVar33,2);
      uVar12 = (uVar16 >> 2 | uVar16 << 0x1e) +
               iVar15 + ((uVar11 ^ uVar21) & (uVar10 ^ uVar11) ^ uVar11);
      auVar29 = vpshufb_avx(auVar29 ^ auVar33 ^ auVar27,auVar8);
      uVar14 = (uVar20 >> 0xe | uVar20 * 0x40000) ^ uVar20;
      auVar33._0_4_ = auVar23._0_4_ + auVar29._0_4_;
      auVar33._4_4_ = auVar23._4_4_ + auVar29._4_4_;
      auVar33._8_4_ = auVar23._8_4_ + auVar29._8_4_;
      auVar33._12_4_ = auVar23._12_4_ + auVar29._12_4_;
      uVar17 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
      local_d0 = auVar33._0_4_ + piVar13[0x38];
      iStack_cc = auVar33._4_4_ + piVar13[0x39];
      iStack_c8 = auVar33._8_4_ + piVar13[0x3a];
      piVar6 = piVar13 + 0x3b;
      uVar16 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar20;
      uVar14 = uVar12 ^ uVar10;
      uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar12;
      iVar15 = uVar9 + iStack_c4 + ((uVar19 ^ uVar18) & uVar20 ^ uVar18) +
               (uVar16 >> 6 | uVar16 << 0x1a);
      uVar21 = uVar21 + iVar15;
      uVar9 = (uVar17 >> 2 | uVar17 << 0x1e) + iVar15 + ((uVar10 ^ uVar11) & uVar14 ^ uVar10);
      pcVar1 = (char *)((longlong)piVar13 + 0x103);
      piVar13 = piVar13 + 0x20;
      iStack_f4 = auVar30._12_4_ + *piVar3;
      iStack_e4 = auVar31._12_4_ + *piVar4;
      iStack_d4 = auVar32._12_4_ + *piVar5;
      iStack_c4 = auVar33._12_4_ + *piVar6;
    } while (*pcVar1 != '\0');
    uVar16 = (uVar21 >> 0xe | uVar21 * 0x40000) ^ uVar21;
    uVar17 = (uVar9 >> 9 | uVar9 * 0x800000) ^ uVar9;
    uVar16 = (uVar16 >> 5 | uVar16 << 0x1b) ^ uVar21;
    uVar17 = (uVar17 >> 0xb | uVar17 << 0x15) ^ uVar9;
    iVar15 = uVar18 + local_100 + ((uVar20 ^ uVar19) & uVar21 ^ uVar19) +
             (uVar16 >> 6 | uVar16 << 0x1a);
    uVar11 = uVar11 + iVar15;
    uVar18 = (uVar17 >> 2 | uVar17 << 0x1e) + iVar15 + (uVar14 & (uVar9 ^ uVar12) ^ uVar12);
    uVar14 = (uVar11 >> 0xe | uVar11 * 0x40000) ^ uVar11;
    uVar16 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar11;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar18;
    iVar15 = uVar19 + iStack_fc + ((uVar21 ^ uVar20) & uVar11 ^ uVar20) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar10 = uVar10 + iVar15;
    uVar19 = (uVar16 >> 2 | uVar16 << 0x1e) + iVar15 + ((uVar9 ^ uVar12) & (uVar18 ^ uVar9) ^ uVar9)
    ;
    uVar14 = (uVar10 >> 0xe | uVar10 * 0x40000) ^ uVar10;
    uVar16 = (uVar19 >> 9 | uVar19 * 0x800000) ^ uVar19;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar10;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar19;
    iVar15 = uVar20 + iStack_f8 + ((uVar11 ^ uVar21) & uVar10 ^ uVar21) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar12 = uVar12 + iVar15;
    uVar20 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar18 ^ uVar9) & (uVar19 ^ uVar18) ^ uVar18);
    uVar14 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
    uVar16 = (uVar20 >> 9 | uVar20 * 0x800000) ^ uVar20;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar12;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar20;
    iVar15 = uVar21 + auVar30._12_4_ + *piVar3 + ((uVar10 ^ uVar11) & uVar12 ^ uVar11) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar9 = uVar9 + iVar15;
    uVar21 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar19 ^ uVar18) & (uVar20 ^ uVar19) ^ uVar19);
    uVar14 = (uVar9 >> 0xe | uVar9 * 0x40000) ^ uVar9;
    uVar16 = (uVar21 >> 9 | uVar21 * 0x800000) ^ uVar21;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar9;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar21;
    iVar15 = uVar11 + local_f0 + ((uVar12 ^ uVar10) & uVar9 ^ uVar10) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar18 = uVar18 + iVar15;
    uVar11 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar20 ^ uVar19) & (uVar21 ^ uVar20) ^ uVar20);
    uVar14 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
    uVar16 = (uVar11 >> 9 | uVar11 * 0x800000) ^ uVar11;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar18;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar11;
    iVar15 = uVar10 + iStack_ec + ((uVar9 ^ uVar12) & uVar18 ^ uVar12) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar19 = uVar19 + iVar15;
    uVar10 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar21 ^ uVar20) & (uVar11 ^ uVar21) ^ uVar21);
    uVar14 = (uVar19 >> 0xe | uVar19 * 0x40000) ^ uVar19;
    uVar16 = (uVar10 >> 9 | uVar10 * 0x800000) ^ uVar10;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar19;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar10;
    iVar15 = uVar12 + iStack_e8 + ((uVar18 ^ uVar9) & uVar19 ^ uVar9) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar20 = uVar20 + iVar15;
    uVar12 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar11 ^ uVar21) & (uVar10 ^ uVar11) ^ uVar11);
    uVar14 = (uVar20 >> 0xe | uVar20 * 0x40000) ^ uVar20;
    uVar16 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar20;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar12;
    iVar15 = uVar9 + auVar31._12_4_ + *piVar4 + ((uVar19 ^ uVar18) & uVar20 ^ uVar18) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar21 = uVar21 + iVar15;
    uVar9 = (uVar16 >> 2 | uVar16 << 0x1e) +
            iVar15 + ((uVar10 ^ uVar11) & (uVar12 ^ uVar10) ^ uVar10);
    uVar14 = (uVar21 >> 0xe | uVar21 * 0x40000) ^ uVar21;
    uVar16 = (uVar9 >> 9 | uVar9 * 0x800000) ^ uVar9;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar21;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar9;
    iVar15 = uVar18 + local_e0 + ((uVar20 ^ uVar19) & uVar21 ^ uVar19) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar11 = uVar11 + iVar15;
    uVar18 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar12 ^ uVar10) & (uVar9 ^ uVar12) ^ uVar12);
    uVar14 = (uVar11 >> 0xe | uVar11 * 0x40000) ^ uVar11;
    uVar16 = (uVar18 >> 9 | uVar18 * 0x800000) ^ uVar18;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar11;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar18;
    iVar15 = uVar19 + iStack_dc + ((uVar21 ^ uVar20) & uVar11 ^ uVar20) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar10 = uVar10 + iVar15;
    uVar19 = (uVar16 >> 2 | uVar16 << 0x1e) + iVar15 + ((uVar9 ^ uVar12) & (uVar18 ^ uVar9) ^ uVar9)
    ;
    uVar14 = (uVar10 >> 0xe | uVar10 * 0x40000) ^ uVar10;
    uVar16 = (uVar19 >> 9 | uVar19 * 0x800000) ^ uVar19;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar10;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar19;
    iVar15 = uVar20 + iStack_d8 + ((uVar11 ^ uVar21) & uVar10 ^ uVar21) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar12 = uVar12 + iVar15;
    uVar20 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar18 ^ uVar9) & (uVar19 ^ uVar18) ^ uVar18);
    uVar14 = (uVar12 >> 0xe | uVar12 * 0x40000) ^ uVar12;
    uVar16 = (uVar20 >> 9 | uVar20 * 0x800000) ^ uVar20;
    uVar14 = (uVar14 >> 5 | uVar14 << 0x1b) ^ uVar12;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar20;
    iVar15 = uVar21 + auVar32._12_4_ + *piVar5 + ((uVar10 ^ uVar11) & uVar12 ^ uVar11) +
             (uVar14 >> 6 | uVar14 << 0x1a);
    uVar9 = uVar9 + iVar15;
    uVar14 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar19 ^ uVar18) & (uVar20 ^ uVar19) ^ uVar19);
    uVar21 = (uVar9 >> 0xe | uVar9 * 0x40000) ^ uVar9;
    uVar16 = (uVar14 >> 9 | uVar14 * 0x800000) ^ uVar14;
    uVar21 = (uVar21 >> 5 | uVar21 << 0x1b) ^ uVar9;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar14;
    iVar15 = uVar11 + local_d0 + ((uVar12 ^ uVar10) & uVar9 ^ uVar10) +
             (uVar21 >> 6 | uVar21 << 0x1a);
    uVar18 = uVar18 + iVar15;
    uVar11 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar20 ^ uVar19) & (uVar14 ^ uVar20) ^ uVar20);
    uVar21 = (uVar18 >> 0xe | uVar18 * 0x40000) ^ uVar18;
    uVar16 = (uVar11 >> 9 | uVar11 * 0x800000) ^ uVar11;
    uVar21 = (uVar21 >> 5 | uVar21 << 0x1b) ^ uVar18;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar11;
    iVar15 = uVar10 + iStack_cc + ((uVar9 ^ uVar12) & uVar18 ^ uVar12) +
             (uVar21 >> 6 | uVar21 << 0x1a);
    uVar19 = uVar19 + iVar15;
    uVar10 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar14 ^ uVar20) & (uVar11 ^ uVar14) ^ uVar14);
    uVar21 = (uVar19 >> 0xe | uVar19 * 0x40000) ^ uVar19;
    uVar16 = (uVar10 >> 9 | uVar10 * 0x800000) ^ uVar10;
    uVar21 = (uVar21 >> 5 | uVar21 << 0x1b) ^ uVar19;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar10;
    iVar15 = uVar12 + iStack_c8 + ((uVar18 ^ uVar9) & uVar19 ^ uVar9) +
             (uVar21 >> 6 | uVar21 << 0x1a);
    uVar20 = uVar20 + iVar15;
    uVar12 = (uVar16 >> 2 | uVar16 << 0x1e) +
             iVar15 + ((uVar11 ^ uVar14) & (uVar10 ^ uVar11) ^ uVar11);
    uVar21 = (uVar20 >> 0xe | uVar20 * 0x40000) ^ uVar20;
    uVar16 = (uVar12 >> 9 | uVar12 * 0x800000) ^ uVar12;
    uVar21 = (uVar21 >> 5 | uVar21 << 0x1b) ^ uVar20;
    uVar16 = (uVar16 >> 0xb | uVar16 << 0x15) ^ uVar12;
    iVar15 = uVar9 + auVar33._12_4_ + *piVar6 + ((uVar19 ^ uVar18) & uVar20 ^ uVar18) +
             (uVar21 >> 6 | uVar21 << 0x1a);
    uVar9 = (uVar16 >> 2 | uVar16 << 0x1e) +
            iVar15 + ((uVar10 ^ uVar11) & (uVar12 ^ uVar10) ^ uVar10) + *param_1;
    param_2 = param_2 + 4;
    uVar12 = uVar12 + param_1[1];
    uVar10 = uVar10 + param_1[2];
    uVar11 = uVar11 + param_1[3];
    uVar21 = uVar14 + iVar15 + param_1[4];
    uVar20 = uVar20 + param_1[5];
    uVar19 = uVar19 + param_1[6];
    uVar18 = uVar18 + param_1[7];
    *param_1 = uVar9;
    param_1[1] = uVar12;
    param_1[2] = uVar10;
    param_1[3] = uVar11;
    param_1[4] = uVar21;
    param_1[5] = uVar20;
    param_1[6] = uVar19;
    param_1[7] = uVar18;
  } while (param_2 < pauVar2);
  return;
}

// sha256_block_data_order_avx2 @ 140df1400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sha256_block_data_order_avx2(int *param_1,longlong param_2,longlong param_3)

{
  char *pcVar1;
  undefined1 (*pauVar2) [16];
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  uint uVar35;
  int iVar36;
  int iVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  ulonglong uVar41;
  undefined1 (*pauVar42) [16];
  undefined1 (*pauVar43) [16];
  int *piVar44;
  undefined1 (*pauVar45) [16];
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  undefined1 (*pauVar51) [16];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  undefined1 auStack_290 [608];
  
  uVar41 = (ulonglong)auStack_290 & 0xfffffffffffffc00;
  pauVar2 = (undefined1 (*) [16])(param_2 + param_3 * 0x40);
  pauVar42 = (undefined1 (*) [16])(uVar41 + 0x1c0);
  *(int **)(uVar41 + 0x200) = param_1;
  *(longlong *)(uVar41 + 0x208) = param_2;
  *(undefined1 (**) [16])(uVar41 + 0x210) = pauVar2;
  *(BADSPACEBASE **)(uVar41 + 0x218) = register0x00000020;
  *(undefined8 *)(uVar41 + 0x220) = unaff_XMM6_Qa;
  *(undefined8 *)(uVar41 + 0x228) = unaff_XMM6_Qb;
  *(undefined8 *)(uVar41 + 0x230) = unaff_XMM7_Qa;
  *(undefined8 *)(uVar41 + 0x238) = unaff_XMM7_Qb;
  *(undefined8 *)(uVar41 + 0x240) = unaff_XMM8_Qa;
  *(undefined8 *)(uVar41 + 0x248) = unaff_XMM8_Qb;
  *(undefined8 *)(uVar41 + 0x250) = unaff_XMM9_Qa;
  *(undefined8 *)(uVar41 + 600) = unaff_XMM9_Qb;
  auVar34 = _DAT_140def100;
  auVar33 = _DAT_140def0e0;
  pauVar45 = (undefined1 (*) [16])(param_2 + 0x40);
  iVar36 = *param_1;
  uVar40 = param_1[1];
  uVar38 = param_1[2];
  pauVar51 = pauVar45;
  if (pauVar45 == pauVar2) {
    pauVar51 = (undefined1 (*) [16])(uVar41 + 0x1c0);
  }
  uVar39 = param_1[3];
  uVar47 = param_1[4];
  uVar48 = param_1[5];
  uVar49 = param_1[6];
  uVar50 = param_1[7];
  do {
    auVar58._16_16_ = ZEXT116(1) * *pauVar51;
    auVar58._0_16_ = ZEXT116(0) * *pauVar51 | ZEXT116(1) * pauVar45[-4];
    auVar60._16_16_ = ZEXT116(1) * pauVar51[1];
    auVar60._0_16_ = ZEXT116(0) * pauVar51[1] | ZEXT116(1) * pauVar45[-3];
    auVar59 = vpshufb_avx2(auVar58,_DAT_140def0c0);
    auVar53._16_16_ = ZEXT116(1) * pauVar51[2];
    auVar53._0_16_ = ZEXT116(0) * pauVar51[2] | ZEXT116(1) * pauVar45[-2];
    auVar61 = vpshufb_avx2(auVar60,_DAT_140def0c0);
    auVar52._16_16_ = ZEXT116(1) * pauVar51[3];
    auVar52._0_16_ = ZEXT116(0) * pauVar51[3] | ZEXT116(1) * pauVar45[-1];
    auVar62 = vpshufb_avx2(auVar53,_DAT_140def0c0);
    iVar5 = auVar59._4_4_ + DAT_140deeec4;
    iVar9 = auVar59._8_4_ + DAT_140deeec8;
    iVar13 = auVar59._12_4_ + DAT_140deeecc;
    iVar17 = auVar59._16_4_ + DAT_140deeed0;
    iVar21 = auVar59._20_4_ + DAT_140deeed4;
    iVar25 = auVar59._24_4_ + DAT_140deeed8;
    iVar29 = auVar59._28_4_ + DAT_140deeedc;
    auVar63 = vpshufb_avx2(auVar52,_DAT_140def0c0);
    iVar37 = auVar61._0_4_ + DAT_140deeee0;
    iVar6 = auVar61._4_4_ + DAT_140deeee4;
    iVar10 = auVar61._8_4_ + DAT_140deeee8;
    iVar14 = auVar61._12_4_ + DAT_140deeeec;
    iVar18 = auVar61._16_4_ + DAT_140deeef0;
    iVar22 = auVar61._20_4_ + DAT_140deeef4;
    iVar26 = auVar61._24_4_ + DAT_140deeef8;
    iVar30 = auVar61._28_4_ + DAT_140deeefc;
    iVar3 = auVar62._0_4_ + DAT_140deef00;
    iVar7 = auVar62._4_4_ + DAT_140deef04;
    iVar11 = auVar62._8_4_ + DAT_140deef08;
    iVar15 = auVar62._12_4_ + DAT_140deef0c;
    iVar19 = auVar62._16_4_ + DAT_140deef10;
    iVar23 = auVar62._20_4_ + DAT_140deef14;
    iVar27 = auVar62._24_4_ + DAT_140deef18;
    iVar31 = auVar62._28_4_ + DAT_140deef1c;
    iVar4 = auVar63._0_4_ + DAT_140deef20;
    iVar8 = auVar63._4_4_ + DAT_140deef24;
    iVar12 = auVar63._8_4_ + DAT_140deef28;
    iVar16 = auVar63._12_4_ + DAT_140deef2c;
    iVar20 = auVar63._16_4_ + DAT_140deef30;
    iVar24 = auVar63._20_4_ + DAT_140deef34;
    iVar28 = auVar63._24_4_ + DAT_140deef38;
    iVar32 = auVar63._28_4_ + DAT_140deef3c;
    *(int *)*pauVar42 = auVar59._0_4_ + K256;
    *(int *)(*pauVar42 + 4) = iVar5;
    *(int *)(*pauVar42 + 8) = iVar9;
    *(int *)(*pauVar42 + 0xc) = iVar13;
    *(int *)pauVar42[1] = iVar17;
    *(int *)(pauVar42[1] + 4) = iVar21;
    *(int *)(pauVar42[1] + 8) = iVar25;
    *(int *)(pauVar42[1] + 0xc) = iVar29;
    uVar35 = 0;
    *(int *)pauVar42[2] = iVar37;
    *(int *)(pauVar42[2] + 4) = iVar6;
    *(int *)(pauVar42[2] + 8) = iVar10;
    *(int *)(pauVar42[2] + 0xc) = iVar14;
    *(int *)pauVar42[3] = iVar18;
    *(int *)(pauVar42[3] + 4) = iVar22;
    *(int *)(pauVar42[3] + 8) = iVar26;
    *(int *)(pauVar42[3] + 0xc) = iVar30;
    *(int *)pauVar42[-4] = iVar3;
    *(int *)(pauVar42[-4] + 4) = iVar7;
    *(int *)(pauVar42[-4] + 8) = iVar11;
    *(int *)(pauVar42[-4] + 0xc) = iVar15;
    *(int *)pauVar42[-3] = iVar19;
    *(int *)(pauVar42[-3] + 4) = iVar23;
    *(int *)(pauVar42[-3] + 8) = iVar27;
    *(int *)(pauVar42[-3] + 0xc) = iVar31;
    uVar46 = uVar40 ^ uVar38;
    *(int *)pauVar42[-2] = iVar4;
    *(int *)(pauVar42[-2] + 4) = iVar8;
    *(int *)(pauVar42[-2] + 8) = iVar12;
    *(int *)(pauVar42[-2] + 0xc) = iVar16;
    *(int *)pauVar42[-1] = iVar20;
    *(int *)(pauVar42[-1] + 4) = iVar24;
    *(int *)(pauVar42[-1] + 8) = iVar28;
    *(int *)(pauVar42[-1] + 0xc) = iVar32;
    pauVar2 = pauVar42 + -4;
    piVar44 = &DAT_140deef40;
    do {
      pauVar43 = pauVar2;
      auVar58 = vpalignr_avx2(auVar61,auVar59,4);
      auVar60 = vpalignr_avx2(auVar63,auVar62,4);
      uVar35 = iVar36 + uVar35;
      auVar54 = vpsrld_avx2(auVar58,7);
      auVar57 = vpsrld_avx2(auVar58,3);
      iVar36 = uVar50 + *(int *)pauVar43[4] + (uVar48 & uVar47) + (~uVar47 & uVar49) +
               ((uVar47 >> 0x19 | uVar47 << 7) ^ (uVar47 >> 0xb | uVar47 << 0x15) ^
               (uVar47 >> 6 | uVar47 << 0x1a));
      auVar52 = vpslld_avx2(auVar58,0xe);
      uVar39 = uVar39 + iVar36;
      auVar58 = vpshufd_avx2(auVar63,0xfa);
      auVar55 = vpsrld_avx2(auVar54,0xb);
      uVar50 = iVar36 + (uVar46 & (uVar35 ^ uVar40) ^ uVar40) +
               ((uVar35 >> 0xd | uVar35 * 0x80000) ^ (uVar35 >> 0x16 | uVar35 * 0x400) ^
               (uVar35 >> 2 | uVar35 * 0x40000000));
      auVar53 = vpslld_avx2(auVar52,0xb);
      auVar56 = vpsrld_avx2(auVar58,10);
      iVar36 = uVar49 + *(int *)(pauVar43[4] + 4) + (uVar47 & uVar39) + (~uVar39 & uVar48) +
               ((uVar39 >> 0x19 | uVar39 * 0x80) ^ (uVar39 >> 0xb | uVar39 * 0x200000) ^
               (uVar39 >> 6 | uVar39 * 0x4000000));
      auVar53 = auVar57 ^ auVar54 ^ auVar52 ^ auVar55 ^ auVar53;
      uVar38 = uVar38 + iVar36;
      auVar58 = vpsrlq_avx2(auVar58,0x11);
      auVar52 = vpsrlq_avx2(auVar58,2);
      uVar49 = iVar36 + ((uVar35 ^ uVar40) & (uVar50 ^ uVar35) ^ uVar35) +
               ((uVar50 >> 0xd | uVar50 * 0x80000) ^ (uVar50 >> 0x16 | uVar50 * 0x400) ^
               (uVar50 >> 2 | uVar50 * 0x40000000));
      auVar58 = vpshufb_avx2(auVar56 ^ auVar58 ^ auVar52,auVar33);
      auVar54._0_4_ = auVar59._0_4_ + auVar60._0_4_ + auVar53._0_4_ + auVar58._0_4_;
      auVar54._4_4_ = auVar59._4_4_ + auVar60._4_4_ + auVar53._4_4_ + auVar58._4_4_;
      auVar54._8_4_ = auVar59._8_4_ + auVar60._8_4_ + auVar53._8_4_ + auVar58._8_4_;
      auVar54._12_4_ = auVar59._12_4_ + auVar60._12_4_ + auVar53._12_4_ + auVar58._12_4_;
      auVar54._16_4_ = auVar59._16_4_ + auVar60._16_4_ + auVar53._16_4_ + auVar58._16_4_;
      auVar54._20_4_ = auVar59._20_4_ + auVar60._20_4_ + auVar53._20_4_ + auVar58._20_4_;
      auVar54._24_4_ = auVar59._24_4_ + auVar60._24_4_ + auVar53._24_4_ + auVar58._24_4_;
      auVar54._28_4_ = auVar59._28_4_ + auVar60._28_4_ + auVar53._28_4_ + auVar58._28_4_;
      iVar36 = uVar48 + *(int *)(pauVar43[4] + 8) + (uVar39 & uVar38) + (~uVar38 & uVar47) +
               ((uVar38 >> 0x19 | uVar38 * 0x80) ^ (uVar38 >> 0xb | uVar38 * 0x200000) ^
               (uVar38 >> 6 | uVar38 * 0x4000000));
      auVar59 = vpshufd_avx2(auVar54,0x50);
      uVar40 = uVar40 + iVar36;
      auVar58 = vpsrld_avx2(auVar59,10);
      auVar59 = vpsrlq_avx2(auVar59,0x11);
      auVar60 = vpsrlq_avx2(auVar59,2);
      uVar48 = iVar36 + ((uVar50 ^ uVar35) & (uVar49 ^ uVar50) ^ uVar50) +
               ((uVar49 >> 0xd | uVar49 * 0x80000) ^ (uVar49 >> 0x16 | uVar49 * 0x400) ^
               (uVar49 >> 2 | uVar49 * 0x40000000));
      auVar58 = vpshufb_avx2(auVar58 ^ auVar59 ^ auVar60,auVar34);
      auVar59._0_4_ = auVar54._0_4_ + auVar58._0_4_;
      auVar59._4_4_ = auVar54._4_4_ + auVar58._4_4_;
      auVar59._8_4_ = auVar54._8_4_ + auVar58._8_4_;
      auVar59._12_4_ = auVar54._12_4_ + auVar58._12_4_;
      auVar59._16_4_ = auVar54._16_4_ + auVar58._16_4_;
      auVar59._20_4_ = auVar54._20_4_ + auVar58._20_4_;
      auVar59._24_4_ = auVar54._24_4_ + auVar58._24_4_;
      auVar59._28_4_ = auVar54._28_4_ + auVar58._28_4_;
      iVar36 = uVar47 + *(int *)(pauVar43[4] + 0xc) + (uVar38 & uVar40) + (~uVar40 & uVar39) +
               ((uVar40 >> 0x19 | uVar40 * 0x80) ^ (uVar40 >> 0xb | uVar40 * 0x200000) ^
               (uVar40 >> 6 | uVar40 * 0x4000000));
      iVar37 = piVar44[1];
      iVar3 = piVar44[2];
      iVar4 = piVar44[3];
      iVar5 = piVar44[4];
      iVar6 = piVar44[5];
      iVar7 = piVar44[6];
      iVar8 = piVar44[7];
      uVar35 = uVar35 + iVar36;
      *(int *)pauVar43[-4] = auVar59._0_4_ + *piVar44;
      *(int *)(pauVar43[-4] + 4) = auVar59._4_4_ + iVar37;
      *(int *)(pauVar43[-4] + 8) = auVar59._8_4_ + iVar3;
      *(int *)(pauVar43[-4] + 0xc) = auVar59._12_4_ + iVar4;
      *(int *)pauVar43[-3] = auVar59._16_4_ + iVar5;
      *(int *)(pauVar43[-3] + 4) = auVar59._20_4_ + iVar6;
      *(int *)(pauVar43[-3] + 8) = auVar59._24_4_ + iVar7;
      *(int *)(pauVar43[-3] + 0xc) = auVar59._28_4_ + iVar8;
      auVar58 = vpalignr_avx2(auVar62,auVar61,4);
      auVar60 = vpalignr_avx2(auVar59,auVar63,4);
      uVar47 = iVar36 + ((uVar49 ^ uVar50) & (uVar48 ^ uVar49) ^ uVar49) +
               ((uVar48 >> 0xd | uVar48 * 0x80000) ^ (uVar48 >> 0x16 | uVar48 * 0x400) ^
               (uVar48 >> 2 | uVar48 * 0x40000000));
      auVar54 = vpsrld_avx2(auVar58,7);
      auVar57 = vpsrld_avx2(auVar58,3);
      iVar36 = uVar39 + *(int *)pauVar43[6] + (uVar40 & uVar35) + (~uVar35 & uVar38) +
               ((uVar35 >> 0x19 | uVar35 * 0x80) ^ (uVar35 >> 0xb | uVar35 * 0x200000) ^
               (uVar35 >> 6 | uVar35 * 0x4000000));
      auVar52 = vpslld_avx2(auVar58,0xe);
      uVar50 = uVar50 + iVar36;
      auVar58 = vpshufd_avx2(auVar59,0xfa);
      auVar55 = vpsrld_avx2(auVar54,0xb);
      uVar39 = iVar36 + ((uVar48 ^ uVar49) & (uVar47 ^ uVar48) ^ uVar48) +
               ((uVar47 >> 0xd | uVar47 * 0x80000) ^ (uVar47 >> 0x16 | uVar47 * 0x400) ^
               (uVar47 >> 2 | uVar47 * 0x40000000));
      auVar53 = vpslld_avx2(auVar52,0xb);
      auVar56 = vpsrld_avx2(auVar58,10);
      iVar36 = uVar38 + *(int *)(pauVar43[6] + 4) + (uVar35 & uVar50) + (~uVar50 & uVar40) +
               ((uVar50 >> 0x19 | uVar50 * 0x80) ^ (uVar50 >> 0xb | uVar50 * 0x200000) ^
               (uVar50 >> 6 | uVar50 * 0x4000000));
      auVar53 = auVar57 ^ auVar54 ^ auVar52 ^ auVar55 ^ auVar53;
      uVar49 = uVar49 + iVar36;
      auVar58 = vpsrlq_avx2(auVar58,0x11);
      auVar52 = vpsrlq_avx2(auVar58,2);
      uVar38 = iVar36 + ((uVar47 ^ uVar48) & (uVar39 ^ uVar47) ^ uVar47) +
               ((uVar39 >> 0xd | uVar39 * 0x80000) ^ (uVar39 >> 0x16 | uVar39 * 0x400) ^
               (uVar39 >> 2 | uVar39 * 0x40000000));
      auVar58 = vpshufb_avx2(auVar56 ^ auVar58 ^ auVar52,auVar33);
      auVar55._0_4_ = auVar61._0_4_ + auVar60._0_4_ + auVar53._0_4_ + auVar58._0_4_;
      auVar55._4_4_ = auVar61._4_4_ + auVar60._4_4_ + auVar53._4_4_ + auVar58._4_4_;
      auVar55._8_4_ = auVar61._8_4_ + auVar60._8_4_ + auVar53._8_4_ + auVar58._8_4_;
      auVar55._12_4_ = auVar61._12_4_ + auVar60._12_4_ + auVar53._12_4_ + auVar58._12_4_;
      auVar55._16_4_ = auVar61._16_4_ + auVar60._16_4_ + auVar53._16_4_ + auVar58._16_4_;
      auVar55._20_4_ = auVar61._20_4_ + auVar60._20_4_ + auVar53._20_4_ + auVar58._20_4_;
      auVar55._24_4_ = auVar61._24_4_ + auVar60._24_4_ + auVar53._24_4_ + auVar58._24_4_;
      auVar55._28_4_ = auVar61._28_4_ + auVar60._28_4_ + auVar53._28_4_ + auVar58._28_4_;
      iVar36 = uVar40 + *(int *)(pauVar43[6] + 8) + (uVar50 & uVar49) + (~uVar49 & uVar35) +
               ((uVar49 >> 0x19 | uVar49 * 0x80) ^ (uVar49 >> 0xb | uVar49 * 0x200000) ^
               (uVar49 >> 6 | uVar49 * 0x4000000));
      auVar61 = vpshufd_avx2(auVar55,0x50);
      uVar48 = uVar48 + iVar36;
      auVar58 = vpsrld_avx2(auVar61,10);
      auVar61 = vpsrlq_avx2(auVar61,0x11);
      auVar60 = vpsrlq_avx2(auVar61,2);
      uVar40 = iVar36 + ((uVar39 ^ uVar47) & (uVar38 ^ uVar39) ^ uVar39) +
               ((uVar38 >> 0xd | uVar38 * 0x80000) ^ (uVar38 >> 0x16 | uVar38 * 0x400) ^
               (uVar38 >> 2 | uVar38 * 0x40000000));
      auVar58 = vpshufb_avx2(auVar58 ^ auVar61 ^ auVar60,auVar34);
      auVar61._0_4_ = auVar55._0_4_ + auVar58._0_4_;
      auVar61._4_4_ = auVar55._4_4_ + auVar58._4_4_;
      auVar61._8_4_ = auVar55._8_4_ + auVar58._8_4_;
      auVar61._12_4_ = auVar55._12_4_ + auVar58._12_4_;
      auVar61._16_4_ = auVar55._16_4_ + auVar58._16_4_;
      auVar61._20_4_ = auVar55._20_4_ + auVar58._20_4_;
      auVar61._24_4_ = auVar55._24_4_ + auVar58._24_4_;
      auVar61._28_4_ = auVar55._28_4_ + auVar58._28_4_;
      iVar36 = uVar35 + *(int *)(pauVar43[6] + 0xc) + (uVar49 & uVar48) + (~uVar48 & uVar50) +
               ((uVar48 >> 0x19 | uVar48 * 0x80) ^ (uVar48 >> 0xb | uVar48 * 0x200000) ^
               (uVar48 >> 6 | uVar48 * 0x4000000));
      iVar37 = piVar44[9];
      iVar3 = piVar44[10];
      iVar4 = piVar44[0xb];
      iVar5 = piVar44[0xc];
      iVar6 = piVar44[0xd];
      iVar7 = piVar44[0xe];
      iVar8 = piVar44[0xf];
      uVar47 = uVar47 + iVar36;
      *(int *)pauVar43[-2] = auVar61._0_4_ + piVar44[8];
      *(int *)(pauVar43[-2] + 4) = auVar61._4_4_ + iVar37;
      *(int *)(pauVar43[-2] + 8) = auVar61._8_4_ + iVar3;
      *(int *)(pauVar43[-2] + 0xc) = auVar61._12_4_ + iVar4;
      *(int *)pauVar43[-1] = auVar61._16_4_ + iVar5;
      *(int *)(pauVar43[-1] + 4) = auVar61._20_4_ + iVar6;
      *(int *)(pauVar43[-1] + 8) = auVar61._24_4_ + iVar7;
      *(int *)(pauVar43[-1] + 0xc) = auVar61._28_4_ + iVar8;
      pauVar2 = pauVar43 + -8;
      auVar58 = vpalignr_avx2(auVar63,auVar62,4);
      auVar60 = vpalignr_avx2(auVar61,auVar59,4);
      uVar35 = iVar36 + ((uVar38 ^ uVar39) & (uVar40 ^ uVar38) ^ uVar38) +
               ((uVar40 >> 0xd | uVar40 * 0x80000) ^ (uVar40 >> 0x16 | uVar40 * 0x400) ^
               (uVar40 >> 2 | uVar40 * 0x40000000));
      auVar54 = vpsrld_avx2(auVar58,7);
      auVar57 = vpsrld_avx2(auVar58,3);
      iVar36 = uVar50 + *(int *)*pauVar43 + (uVar48 & uVar47) + (~uVar47 & uVar49) +
               ((uVar47 >> 0x19 | uVar47 * 0x80) ^ (uVar47 >> 0xb | uVar47 * 0x200000) ^
               (uVar47 >> 6 | uVar47 * 0x4000000));
      auVar52 = vpslld_avx2(auVar58,0xe);
      uVar39 = uVar39 + iVar36;
      auVar58 = vpshufd_avx2(auVar61,0xfa);
      auVar55 = vpsrld_avx2(auVar54,0xb);
      uVar50 = iVar36 + ((uVar40 ^ uVar38) & (uVar35 ^ uVar40) ^ uVar40) +
               ((uVar35 >> 0xd | uVar35 * 0x80000) ^ (uVar35 >> 0x16 | uVar35 * 0x400) ^
               (uVar35 >> 2 | uVar35 * 0x40000000));
      auVar53 = vpslld_avx2(auVar52,0xb);
      auVar56 = vpsrld_avx2(auVar58,10);
      iVar36 = uVar49 + *(int *)(*pauVar43 + 4) + (uVar47 & uVar39) + (~uVar39 & uVar48) +
               ((uVar39 >> 0x19 | uVar39 * 0x80) ^ (uVar39 >> 0xb | uVar39 * 0x200000) ^
               (uVar39 >> 6 | uVar39 * 0x4000000));
      auVar53 = auVar57 ^ auVar54 ^ auVar52 ^ auVar55 ^ auVar53;
      uVar38 = uVar38 + iVar36;
      auVar58 = vpsrlq_avx2(auVar58,0x11);
      auVar52 = vpsrlq_avx2(auVar58,2);
      uVar49 = iVar36 + ((uVar35 ^ uVar40) & (uVar50 ^ uVar35) ^ uVar35) +
               ((uVar50 >> 0xd | uVar50 * 0x80000) ^ (uVar50 >> 0x16 | uVar50 * 0x400) ^
               (uVar50 >> 2 | uVar50 * 0x40000000));
      auVar58 = vpshufb_avx2(auVar56 ^ auVar58 ^ auVar52,auVar33);
      auVar56._0_4_ = auVar62._0_4_ + auVar60._0_4_ + auVar53._0_4_ + auVar58._0_4_;
      auVar56._4_4_ = auVar62._4_4_ + auVar60._4_4_ + auVar53._4_4_ + auVar58._4_4_;
      auVar56._8_4_ = auVar62._8_4_ + auVar60._8_4_ + auVar53._8_4_ + auVar58._8_4_;
      auVar56._12_4_ = auVar62._12_4_ + auVar60._12_4_ + auVar53._12_4_ + auVar58._12_4_;
      auVar56._16_4_ = auVar62._16_4_ + auVar60._16_4_ + auVar53._16_4_ + auVar58._16_4_;
      auVar56._20_4_ = auVar62._20_4_ + auVar60._20_4_ + auVar53._20_4_ + auVar58._20_4_;
      auVar56._24_4_ = auVar62._24_4_ + auVar60._24_4_ + auVar53._24_4_ + auVar58._24_4_;
      auVar56._28_4_ = auVar62._28_4_ + auVar60._28_4_ + auVar53._28_4_ + auVar58._28_4_;
      iVar36 = uVar48 + *(int *)(*pauVar43 + 8) + (uVar39 & uVar38) + (~uVar38 & uVar47) +
               ((uVar38 >> 0x19 | uVar38 * 0x80) ^ (uVar38 >> 0xb | uVar38 * 0x200000) ^
               (uVar38 >> 6 | uVar38 * 0x4000000));
      auVar62 = vpshufd_avx2(auVar56,0x50);
      uVar40 = uVar40 + iVar36;
      auVar58 = vpsrld_avx2(auVar62,10);
      auVar62 = vpsrlq_avx2(auVar62,0x11);
      auVar60 = vpsrlq_avx2(auVar62,2);
      uVar48 = iVar36 + ((uVar50 ^ uVar35) & (uVar49 ^ uVar50) ^ uVar50) +
               ((uVar49 >> 0xd | uVar49 * 0x80000) ^ (uVar49 >> 0x16 | uVar49 * 0x400) ^
               (uVar49 >> 2 | uVar49 * 0x40000000));
      auVar58 = vpshufb_avx2(auVar58 ^ auVar62 ^ auVar60,auVar34);
      auVar62._0_4_ = auVar56._0_4_ + auVar58._0_4_;
      auVar62._4_4_ = auVar56._4_4_ + auVar58._4_4_;
      auVar62._8_4_ = auVar56._8_4_ + auVar58._8_4_;
      auVar62._12_4_ = auVar56._12_4_ + auVar58._12_4_;
      auVar62._16_4_ = auVar56._16_4_ + auVar58._16_4_;
      auVar62._20_4_ = auVar56._20_4_ + auVar58._20_4_;
      auVar62._24_4_ = auVar56._24_4_ + auVar58._24_4_;
      auVar62._28_4_ = auVar56._28_4_ + auVar58._28_4_;
      iVar36 = uVar47 + *(int *)(*pauVar43 + 0xc) + (uVar38 & uVar40) + (~uVar40 & uVar39) +
               ((uVar40 >> 0x19 | uVar40 * 0x80) ^ (uVar40 >> 0xb | uVar40 * 0x200000) ^
               (uVar40 >> 6 | uVar40 * 0x4000000));
      iVar37 = piVar44[0x11];
      iVar3 = piVar44[0x12];
      iVar4 = piVar44[0x13];
      iVar5 = piVar44[0x14];
      iVar6 = piVar44[0x15];
      iVar7 = piVar44[0x16];
      iVar8 = piVar44[0x17];
      uVar35 = uVar35 + iVar36;
      *(int *)*pauVar2 = auVar62._0_4_ + piVar44[0x10];
      *(int *)(pauVar43[-8] + 4) = auVar62._4_4_ + iVar37;
      *(int *)(pauVar43[-8] + 8) = auVar62._8_4_ + iVar3;
      *(int *)(pauVar43[-8] + 0xc) = auVar62._12_4_ + iVar4;
      *(int *)pauVar43[-7] = auVar62._16_4_ + iVar5;
      *(int *)(pauVar43[-7] + 4) = auVar62._20_4_ + iVar6;
      *(int *)(pauVar43[-7] + 8) = auVar62._24_4_ + iVar7;
      *(int *)(pauVar43[-7] + 0xc) = auVar62._28_4_ + iVar8;
      auVar58 = vpalignr_avx2(auVar59,auVar63,4);
      auVar60 = vpalignr_avx2(auVar62,auVar61,4);
      uVar47 = iVar36 + ((uVar49 ^ uVar50) & (uVar48 ^ uVar49) ^ uVar49) +
               ((uVar48 >> 0xd | uVar48 * 0x80000) ^ (uVar48 >> 0x16 | uVar48 * 0x400) ^
               (uVar48 >> 2 | uVar48 * 0x40000000));
      auVar54 = vpsrld_avx2(auVar58,7);
      auVar57 = vpsrld_avx2(auVar58,3);
      iVar36 = uVar39 + *(int *)pauVar43[2] + (uVar40 & uVar35) + (~uVar35 & uVar38) +
               ((uVar35 >> 0x19 | uVar35 * 0x80) ^ (uVar35 >> 0xb | uVar35 * 0x200000) ^
               (uVar35 >> 6 | uVar35 * 0x4000000));
      auVar52 = vpslld_avx2(auVar58,0xe);
      uVar50 = uVar50 + iVar36;
      auVar58 = vpshufd_avx2(auVar62,0xfa);
      auVar55 = vpsrld_avx2(auVar54,0xb);
      uVar39 = iVar36 + ((uVar48 ^ uVar49) & (uVar47 ^ uVar48) ^ uVar48) +
               ((uVar47 >> 0xd | uVar47 * 0x80000) ^ (uVar47 >> 0x16 | uVar47 * 0x400) ^
               (uVar47 >> 2 | uVar47 * 0x40000000));
      auVar53 = vpslld_avx2(auVar52,0xb);
      auVar56 = vpsrld_avx2(auVar58,10);
      iVar36 = uVar38 + *(int *)(pauVar43[2] + 4) + (uVar35 & uVar50) + (~uVar50 & uVar40) +
               ((uVar50 >> 0x19 | uVar50 * 0x80) ^ (uVar50 >> 0xb | uVar50 * 0x200000) ^
               (uVar50 >> 6 | uVar50 * 0x4000000));
      auVar53 = auVar57 ^ auVar54 ^ auVar52 ^ auVar55 ^ auVar53;
      uVar49 = uVar49 + iVar36;
      auVar58 = vpsrlq_avx2(auVar58,0x11);
      auVar52 = vpsrlq_avx2(auVar58,2);
      uVar38 = iVar36 + ((uVar47 ^ uVar48) & (uVar39 ^ uVar47) ^ uVar47) +
               ((uVar39 >> 0xd | uVar39 * 0x80000) ^ (uVar39 >> 0x16 | uVar39 * 0x400) ^
               (uVar39 >> 2 | uVar39 * 0x40000000));
      auVar58 = vpshufb_avx2(auVar56 ^ auVar58 ^ auVar52,auVar33);
      auVar57._0_4_ = auVar63._0_4_ + auVar60._0_4_ + auVar53._0_4_ + auVar58._0_4_;
      auVar57._4_4_ = auVar63._4_4_ + auVar60._4_4_ + auVar53._4_4_ + auVar58._4_4_;
      auVar57._8_4_ = auVar63._8_4_ + auVar60._8_4_ + auVar53._8_4_ + auVar58._8_4_;
      auVar57._12_4_ = auVar63._12_4_ + auVar60._12_4_ + auVar53._12_4_ + auVar58._12_4_;
      auVar57._16_4_ = auVar63._16_4_ + auVar60._16_4_ + auVar53._16_4_ + auVar58._16_4_;
      auVar57._20_4_ = auVar63._20_4_ + auVar60._20_4_ + auVar53._20_4_ + auVar58._20_4_;
      auVar57._24_4_ = auVar63._24_4_ + auVar60._24_4_ + auVar53._24_4_ + auVar58._24_4_;
      auVar57._28_4_ = auVar63._28_4_ + auVar60._28_4_ + auVar53._28_4_ + auVar58._28_4_;
      iVar36 = uVar40 + *(int *)(pauVar43[2] + 8) + (uVar50 & uVar49) + (~uVar49 & uVar35) +
               ((uVar49 >> 0x19 | uVar49 * 0x80) ^ (uVar49 >> 0xb | uVar49 * 0x200000) ^
               (uVar49 >> 6 | uVar49 * 0x4000000));
      auVar63 = vpshufd_avx2(auVar57,0x50);
      uVar48 = uVar48 + iVar36;
      auVar58 = vpsrld_avx2(auVar63,10);
      auVar63 = vpsrlq_avx2(auVar63,0x11);
      auVar60 = vpsrlq_avx2(auVar63,2);
      uVar40 = iVar36 + ((uVar39 ^ uVar47) & (uVar38 ^ uVar39) ^ uVar39) +
               ((uVar38 >> 0xd | uVar38 * 0x80000) ^ (uVar38 >> 0x16 | uVar38 * 0x400) ^
               (uVar38 >> 2 | uVar38 * 0x40000000));
      auVar58 = vpshufb_avx2(auVar58 ^ auVar63 ^ auVar60,auVar34);
      auVar63._0_4_ = auVar57._0_4_ + auVar58._0_4_;
      auVar63._4_4_ = auVar57._4_4_ + auVar58._4_4_;
      auVar63._8_4_ = auVar57._8_4_ + auVar58._8_4_;
      auVar63._12_4_ = auVar57._12_4_ + auVar58._12_4_;
      auVar63._16_4_ = auVar57._16_4_ + auVar58._16_4_;
      auVar63._20_4_ = auVar57._20_4_ + auVar58._20_4_;
      auVar63._24_4_ = auVar57._24_4_ + auVar58._24_4_;
      auVar63._28_4_ = auVar57._28_4_ + auVar58._28_4_;
      iVar36 = uVar35 + *(int *)(pauVar43[2] + 0xc) + (uVar49 & uVar48) + (~uVar48 & uVar50) +
               ((uVar48 >> 0x19 | uVar48 * 0x80) ^ (uVar48 >> 0xb | uVar48 * 0x200000) ^
               (uVar48 >> 6 | uVar48 * 0x4000000));
      uVar46 = uVar40 ^ uVar38;
      iVar37 = piVar44[0x19];
      iVar3 = piVar44[0x1a];
      iVar4 = piVar44[0x1b];
      iVar5 = piVar44[0x1c];
      iVar6 = piVar44[0x1d];
      iVar7 = piVar44[0x1e];
      iVar8 = piVar44[0x1f];
      uVar47 = uVar47 + iVar36;
      uVar35 = (uVar40 >> 0xd | uVar40 * 0x80000) ^ (uVar40 >> 0x16 | uVar40 * 0x400) ^
               (uVar40 >> 2 | uVar40 * 0x40000000);
      iVar36 = iVar36 + ((uVar38 ^ uVar39) & uVar46 ^ uVar38);
      *(int *)pauVar43[-6] = auVar63._0_4_ + piVar44[0x18];
      *(int *)(pauVar43[-6] + 4) = auVar63._4_4_ + iVar37;
      *(int *)(pauVar43[-6] + 8) = auVar63._8_4_ + iVar3;
      *(int *)(pauVar43[-6] + 0xc) = auVar63._12_4_ + iVar4;
      *(int *)pauVar43[-5] = auVar63._16_4_ + iVar5;
      *(int *)(pauVar43[-5] + 4) = auVar63._20_4_ + iVar6;
      *(int *)(pauVar43[-5] + 8) = auVar63._24_4_ + iVar7;
      *(int *)(pauVar43[-5] + 0xc) = auVar63._28_4_ + iVar8;
      pcVar1 = (char *)((longlong)piVar44 + 0x83);
      piVar44 = piVar44 + 0x20;
    } while (*pcVar1 != '\0');
    uVar35 = iVar36 + uVar35;
    iVar36 = uVar50 + *(int *)pauVar43[-4] + (uVar48 & uVar47) + (~uVar47 & uVar49) +
             ((uVar47 >> 0x19 | uVar47 * 0x80) ^ (uVar47 >> 0xb | uVar47 * 0x200000) ^
             (uVar47 >> 6 | uVar47 * 0x4000000));
    uVar39 = uVar39 + iVar36;
    uVar50 = iVar36 + (uVar46 & (uVar35 ^ uVar40) ^ uVar40) +
             ((uVar35 >> 0xd | uVar35 * 0x80000) ^ (uVar35 >> 0x16 | uVar35 * 0x400) ^
             (uVar35 >> 2 | uVar35 * 0x40000000));
    iVar36 = uVar49 + *(int *)(pauVar43[-4] + 4) + (uVar47 & uVar39) + (~uVar39 & uVar48) +
             ((uVar39 >> 0x19 | uVar39 * 0x80) ^ (uVar39 >> 0xb | uVar39 * 0x200000) ^
             (uVar39 >> 6 | uVar39 * 0x4000000));
    uVar38 = uVar38 + iVar36;
    uVar49 = iVar36 + ((uVar35 ^ uVar40) & (uVar50 ^ uVar35) ^ uVar35) +
             ((uVar50 >> 0xd | uVar50 * 0x80000) ^ (uVar50 >> 0x16 | uVar50 * 0x400) ^
             (uVar50 >> 2 | uVar50 * 0x40000000));
    iVar36 = uVar48 + *(int *)(pauVar43[-4] + 8) + (uVar39 & uVar38) + (~uVar38 & uVar47) +
             ((uVar38 >> 0x19 | uVar38 * 0x80) ^ (uVar38 >> 0xb | uVar38 * 0x200000) ^
             (uVar38 >> 6 | uVar38 * 0x4000000));
    uVar40 = uVar40 + iVar36;
    uVar48 = iVar36 + ((uVar50 ^ uVar35) & (uVar49 ^ uVar50) ^ uVar50) +
             ((uVar49 >> 0xd | uVar49 * 0x80000) ^ (uVar49 >> 0x16 | uVar49 * 0x400) ^
             (uVar49 >> 2 | uVar49 * 0x40000000));
    iVar36 = uVar47 + *(int *)(pauVar43[-4] + 0xc) + (uVar38 & uVar40) + (~uVar40 & uVar39) +
             ((uVar40 >> 0x19 | uVar40 * 0x80) ^ (uVar40 >> 0xb | uVar40 * 0x200000) ^
             (uVar40 >> 6 | uVar40 * 0x4000000));
    uVar35 = uVar35 + iVar36;
    uVar47 = iVar36 + ((uVar49 ^ uVar50) & (uVar48 ^ uVar49) ^ uVar49) +
             ((uVar48 >> 0xd | uVar48 * 0x80000) ^ (uVar48 >> 0x16 | uVar48 * 0x400) ^
             (uVar48 >> 2 | uVar48 * 0x40000000));
    iVar36 = uVar39 + *(int *)pauVar43[-2] + (uVar40 & uVar35) + (~uVar35 & uVar38) +
             ((uVar35 >> 0x19 | uVar35 * 0x80) ^ (uVar35 >> 0xb | uVar35 * 0x200000) ^
             (uVar35 >> 6 | uVar35 * 0x4000000));
    uVar50 = uVar50 + iVar36;
    uVar39 = iVar36 + ((uVar48 ^ uVar49) & (uVar47 ^ uVar48) ^ uVar48) +
             ((uVar47 >> 0xd | uVar47 * 0x80000) ^ (uVar47 >> 0x16 | uVar47 * 0x400) ^
             (uVar47 >> 2 | uVar47 * 0x40000000));
    iVar36 = uVar38 + *(int *)(pauVar43[-2] + 4) + (uVar35 & uVar50) + (~uVar50 & uVar40) +
             ((uVar50 >> 0x19 | uVar50 * 0x80) ^ (uVar50 >> 0xb | uVar50 * 0x200000) ^
             (uVar50 >> 6 | uVar50 * 0x4000000));
    uVar49 = uVar49 + iVar36;
    uVar38 = iVar36 + ((uVar47 ^ uVar48) & (uVar39 ^ uVar47) ^ uVar47) +
             ((uVar39 >> 0xd | uVar39 * 0x80000) ^ (uVar39 >> 0x16 | uVar39 * 0x400) ^
             (uVar39 >> 2 | uVar39 * 0x40000000));
    iVar36 = uVar40 + *(int *)(pauVar43[-2] + 8) + (uVar50 & uVar49) + (~uVar49 & uVar35) +
             ((uVar49 >> 0x19 | uVar49 * 0x80) ^ (uVar49 >> 0xb | uVar49 * 0x200000) ^
             (uVar49 >> 6 | uVar49 * 0x4000000));
    uVar48 = uVar48 + iVar36;
    uVar40 = iVar36 + ((uVar39 ^ uVar47) & (uVar38 ^ uVar39) ^ uVar39) +
             ((uVar38 >> 0xd | uVar38 * 0x80000) ^ (uVar38 >> 0x16 | uVar38 * 0x400) ^
             (uVar38 >> 2 | uVar38 * 0x40000000));
    iVar36 = uVar35 + *(int *)(pauVar43[-2] + 0xc) + (uVar49 & uVar48) + (~uVar48 & uVar50) +
             ((uVar48 >> 0x19 | uVar48 * 0x80) ^ (uVar48 >> 0xb | uVar48 * 0x200000) ^
             (uVar48 >> 6 | uVar48 * 0x4000000));
    uVar47 = uVar47 + iVar36;
    uVar35 = iVar36 + ((uVar38 ^ uVar39) & (uVar40 ^ uVar38) ^ uVar38) +
             ((uVar40 >> 0xd | uVar40 * 0x80000) ^ (uVar40 >> 0x16 | uVar40 * 0x400) ^
             (uVar40 >> 2 | uVar40 * 0x40000000));
    iVar36 = uVar50 + *(int *)*pauVar2 + (uVar48 & uVar47) + (~uVar47 & uVar49) +
             ((uVar47 >> 0x19 | uVar47 * 0x80) ^ (uVar47 >> 0xb | uVar47 * 0x200000) ^
             (uVar47 >> 6 | uVar47 * 0x4000000));
    uVar39 = uVar39 + iVar36;
    uVar50 = iVar36 + ((uVar40 ^ uVar38) & (uVar35 ^ uVar40) ^ uVar40) +
             ((uVar35 >> 0xd | uVar35 * 0x80000) ^ (uVar35 >> 0x16 | uVar35 * 0x400) ^
             (uVar35 >> 2 | uVar35 * 0x40000000));
    iVar36 = uVar49 + *(int *)(pauVar43[-8] + 4) + (uVar47 & uVar39) + (~uVar39 & uVar48) +
             ((uVar39 >> 0x19 | uVar39 * 0x80) ^ (uVar39 >> 0xb | uVar39 * 0x200000) ^
             (uVar39 >> 6 | uVar39 * 0x4000000));
    uVar38 = uVar38 + iVar36;
    uVar49 = iVar36 + ((uVar35 ^ uVar40) & (uVar50 ^ uVar35) ^ uVar35) +
             ((uVar50 >> 0xd | uVar50 * 0x80000) ^ (uVar50 >> 0x16 | uVar50 * 0x400) ^
             (uVar50 >> 2 | uVar50 * 0x40000000));
    iVar36 = uVar48 + *(int *)(pauVar43[-8] + 8) + (uVar39 & uVar38) + (~uVar38 & uVar47) +
             ((uVar38 >> 0x19 | uVar38 * 0x80) ^ (uVar38 >> 0xb | uVar38 * 0x200000) ^
             (uVar38 >> 6 | uVar38 * 0x4000000));
    uVar40 = uVar40 + iVar36;
    uVar48 = iVar36 + ((uVar50 ^ uVar35) & (uVar49 ^ uVar50) ^ uVar50) +
             ((uVar49 >> 0xd | uVar49 * 0x80000) ^ (uVar49 >> 0x16 | uVar49 * 0x400) ^
             (uVar49 >> 2 | uVar49 * 0x40000000));
    iVar36 = uVar47 + *(int *)(pauVar43[-8] + 0xc) + (uVar38 & uVar40) + (~uVar40 & uVar39) +
             ((uVar40 >> 0x19 | uVar40 * 0x80) ^ (uVar40 >> 0xb | uVar40 * 0x200000) ^
             (uVar40 >> 6 | uVar40 * 0x4000000));
    uVar35 = uVar35 + iVar36;
    uVar47 = iVar36 + ((uVar49 ^ uVar50) & (uVar48 ^ uVar49) ^ uVar49) +
             ((uVar48 >> 0xd | uVar48 * 0x80000) ^ (uVar48 >> 0x16 | uVar48 * 0x400) ^
             (uVar48 >> 2 | uVar48 * 0x40000000));
    iVar36 = uVar39 + *(int *)pauVar43[-6] + (uVar40 & uVar35) + (~uVar35 & uVar38) +
             ((uVar35 >> 0x19 | uVar35 * 0x80) ^ (uVar35 >> 0xb | uVar35 * 0x200000) ^
             (uVar35 >> 6 | uVar35 * 0x4000000));
    uVar50 = uVar50 + iVar36;
    uVar39 = iVar36 + ((uVar48 ^ uVar49) & (uVar47 ^ uVar48) ^ uVar48) +
             ((uVar47 >> 0xd | uVar47 * 0x80000) ^ (uVar47 >> 0x16 | uVar47 * 0x400) ^
             (uVar47 >> 2 | uVar47 * 0x40000000));
    iVar36 = uVar38 + *(int *)(pauVar43[-6] + 4) + (uVar35 & uVar50) + (~uVar50 & uVar40) +
             ((uVar50 >> 0x19 | uVar50 * 0x80) ^ (uVar50 >> 0xb | uVar50 * 0x200000) ^
             (uVar50 >> 6 | uVar50 * 0x4000000));
    uVar49 = uVar49 + iVar36;
    uVar38 = iVar36 + ((uVar47 ^ uVar48) & (uVar39 ^ uVar47) ^ uVar47) +
             ((uVar39 >> 0xd | uVar39 * 0x80000) ^ (uVar39 >> 0x16 | uVar39 * 0x400) ^
             (uVar39 >> 2 | uVar39 * 0x40000000));
    iVar36 = uVar40 + *(int *)(pauVar43[-6] + 8) + (uVar50 & uVar49) + (~uVar49 & uVar35) +
             ((uVar49 >> 0x19 | uVar49 * 0x80) ^ (uVar49 >> 0xb | uVar49 * 0x200000) ^
             (uVar49 >> 6 | uVar49 * 0x4000000));
    uVar48 = uVar48 + iVar36;
    uVar40 = iVar36 + ((uVar39 ^ uVar47) & (uVar38 ^ uVar39) ^ uVar39) +
             ((uVar38 >> 0xd | uVar38 * 0x80000) ^ (uVar38 >> 0x16 | uVar38 * 0x400) ^
             (uVar38 >> 2 | uVar38 * 0x40000000));
    iVar36 = uVar35 + *(int *)(pauVar43[-6] + 0xc) + (uVar49 & uVar48) + (~uVar48 & uVar50) +
             ((uVar48 >> 0x19 | uVar48 * 0x80) ^ (uVar48 >> 0xb | uVar48 * 0x200000) ^
             (uVar48 >> 6 | uVar48 * 0x4000000));
    piVar44 = *(int **)pauVar43[0x18];
    pauVar42 = pauVar43 + 0x14;
    iVar37 = iVar36 + ((uVar38 ^ uVar39) & (uVar40 ^ uVar38) ^ uVar38) +
             ((uVar40 >> 0xd | uVar40 * 0x80000) ^ (uVar40 >> 0x16 | uVar40 * 0x400) ^
             (uVar40 >> 2 | uVar40 * 0x40000000)) + *piVar44;
    uVar40 = uVar40 + piVar44[1];
    uVar38 = uVar38 + piVar44[2];
    uVar39 = uVar39 + piVar44[3];
    uVar47 = uVar47 + iVar36 + piVar44[4];
    uVar48 = uVar48 + piVar44[5];
    uVar49 = uVar49 + piVar44[6];
    uVar50 = uVar50 + piVar44[7];
    *piVar44 = iVar37;
    piVar44[1] = uVar40;
    piVar44[2] = uVar38;
    piVar44[3] = uVar39;
    piVar44[4] = uVar47;
    piVar44[5] = uVar48;
    piVar44[6] = uVar49;
    piVar44[7] = uVar50;
    if (pauVar45 == *(undefined1 (**) [16])pauVar43[0x19]) {
      return;
    }
    uVar35 = 0;
    uVar46 = uVar40 ^ uVar38;
    do {
      uVar35 = iVar37 + uVar35;
      iVar36 = uVar50 + *(int *)pauVar42[1] + (uVar48 & uVar47) + (~uVar47 & uVar49) +
               ((uVar47 >> 0x19 | uVar47 << 7) ^ (uVar47 >> 0xb | uVar47 << 0x15) ^
               (uVar47 >> 6 | uVar47 << 0x1a));
      uVar39 = uVar39 + iVar36;
      uVar50 = iVar36 + (uVar46 & (uVar35 ^ uVar40) ^ uVar40) +
               ((uVar35 >> 0xd | uVar35 * 0x80000) ^ (uVar35 >> 0x16 | uVar35 * 0x400) ^
               (uVar35 >> 2 | uVar35 * 0x40000000));
      iVar36 = uVar49 + *(int *)(pauVar42[1] + 4) + (uVar47 & uVar39) + (~uVar39 & uVar48) +
               ((uVar39 >> 0x19 | uVar39 * 0x80) ^ (uVar39 >> 0xb | uVar39 * 0x200000) ^
               (uVar39 >> 6 | uVar39 * 0x4000000));
      uVar38 = uVar38 + iVar36;
      uVar49 = iVar36 + ((uVar35 ^ uVar40) & (uVar50 ^ uVar35) ^ uVar35) +
               ((uVar50 >> 0xd | uVar50 * 0x80000) ^ (uVar50 >> 0x16 | uVar50 * 0x400) ^
               (uVar50 >> 2 | uVar50 * 0x40000000));
      iVar36 = uVar48 + *(int *)(pauVar42[1] + 8) + (uVar39 & uVar38) + (~uVar38 & uVar47) +
               ((uVar38 >> 0x19 | uVar38 * 0x80) ^ (uVar38 >> 0xb | uVar38 * 0x200000) ^
               (uVar38 >> 6 | uVar38 * 0x4000000));
      uVar40 = uVar40 + iVar36;
      uVar48 = iVar36 + ((uVar50 ^ uVar35) & (uVar49 ^ uVar50) ^ uVar50) +
               ((uVar49 >> 0xd | uVar49 * 0x80000) ^ (uVar49 >> 0x16 | uVar49 * 0x400) ^
               (uVar49 >> 2 | uVar49 * 0x40000000));
      iVar36 = uVar47 + *(int *)(pauVar42[1] + 0xc) + (uVar38 & uVar40) + (~uVar40 & uVar39) +
               ((uVar40 >> 0x19 | uVar40 * 0x80) ^ (uVar40 >> 0xb | uVar40 * 0x200000) ^
               (uVar40 >> 6 | uVar40 * 0x4000000));
      uVar35 = uVar35 + iVar36;
      uVar47 = iVar36 + ((uVar49 ^ uVar50) & (uVar48 ^ uVar49) ^ uVar49) +
               ((uVar48 >> 0xd | uVar48 * 0x80000) ^ (uVar48 >> 0x16 | uVar48 * 0x400) ^
               (uVar48 >> 2 | uVar48 * 0x40000000));
      iVar36 = uVar39 + *(int *)pauVar42[3] + (uVar40 & uVar35) + (~uVar35 & uVar38) +
               ((uVar35 >> 0x19 | uVar35 * 0x80) ^ (uVar35 >> 0xb | uVar35 * 0x200000) ^
               (uVar35 >> 6 | uVar35 * 0x4000000));
      uVar50 = uVar50 + iVar36;
      uVar39 = iVar36 + ((uVar48 ^ uVar49) & (uVar47 ^ uVar48) ^ uVar48) +
               ((uVar47 >> 0xd | uVar47 * 0x80000) ^ (uVar47 >> 0x16 | uVar47 * 0x400) ^
               (uVar47 >> 2 | uVar47 * 0x40000000));
      iVar36 = uVar38 + *(int *)(pauVar42[3] + 4) + (uVar35 & uVar50) + (~uVar50 & uVar40) +
               ((uVar50 >> 0x19 | uVar50 * 0x80) ^ (uVar50 >> 0xb | uVar50 * 0x200000) ^
               (uVar50 >> 6 | uVar50 * 0x4000000));
      uVar49 = uVar49 + iVar36;
      uVar38 = iVar36 + ((uVar47 ^ uVar48) & (uVar39 ^ uVar47) ^ uVar47) +
               ((uVar39 >> 0xd | uVar39 * 0x80000) ^ (uVar39 >> 0x16 | uVar39 * 0x400) ^
               (uVar39 >> 2 | uVar39 * 0x40000000));
      iVar36 = uVar40 + *(int *)(pauVar42[3] + 8) + (uVar50 & uVar49) + (~uVar49 & uVar35) +
               ((uVar49 >> 0x19 | uVar49 * 0x80) ^ (uVar49 >> 0xb | uVar49 * 0x200000) ^
               (uVar49 >> 6 | uVar49 * 0x4000000));
      uVar48 = uVar48 + iVar36;
      uVar40 = iVar36 + ((uVar39 ^ uVar47) & (uVar38 ^ uVar39) ^ uVar39) +
               ((uVar38 >> 0xd | uVar38 * 0x80000) ^ (uVar38 >> 0x16 | uVar38 * 0x400) ^
               (uVar38 >> 2 | uVar38 * 0x40000000));
      iVar37 = uVar35 + *(int *)(pauVar42[3] + 0xc) + (uVar49 & uVar48) + (~uVar48 & uVar50) +
               ((uVar48 >> 0x19 | uVar48 * 0x80) ^ (uVar48 >> 0xb | uVar48 * 0x200000) ^
               (uVar48 >> 6 | uVar48 * 0x4000000));
      uVar46 = uVar40 ^ uVar38;
      uVar47 = uVar47 + iVar37;
      uVar35 = (uVar40 >> 0xd | uVar40 * 0x80000) ^ (uVar40 >> 0x16 | uVar40 * 0x400) ^
               (uVar40 >> 2 | uVar40 * 0x40000000);
      iVar37 = iVar37 + ((uVar38 ^ uVar39) & uVar46 ^ uVar38);
      pauVar42 = pauVar42 + -4;
    } while (pauVar2 <= pauVar42);
    piVar44 = *(int **)pauVar43[0x18];
    pauVar42 = pauVar43 + 0x14;
    iVar36 = iVar37 + uVar35 + *piVar44;
    uVar40 = uVar40 + piVar44[1];
    uVar38 = uVar38 + piVar44[2];
    uVar39 = uVar39 + piVar44[3];
    uVar47 = uVar47 + piVar44[4];
    uVar48 = uVar48 + piVar44[5];
    pauVar45 = pauVar45 + 8;
    uVar49 = uVar49 + piVar44[6];
    uVar50 = uVar50 + piVar44[7];
    pauVar2 = *(undefined1 (**) [16])pauVar43[0x19];
    *piVar44 = iVar36;
    pauVar51 = pauVar45;
    if (pauVar45 == pauVar2) {
      pauVar51 = pauVar42;
    }
    piVar44[1] = uVar40;
    piVar44[2] = uVar38;
    piVar44[3] = uVar39;
    piVar44[4] = uVar47;
    piVar44[5] = uVar48;
    piVar44[6] = uVar49;
    piVar44[7] = uVar50;
  } while (pauVar45 <= pauVar2);
  return;
}

// L$SEH_begin_sha256_block_data_order_avx2 @ 140df140d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L_SEH_begin_sha256_block_data_order_avx2(int *param_1,longlong param_2,longlong param_3)

{
  char *pcVar1;
  undefined1 (*pauVar2) [16];
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  uint uVar35;
  int iVar36;
  int iVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  ulonglong uVar41;
  undefined1 (*pauVar42) [16];
  undefined1 (*pauVar43) [16];
  int *piVar44;
  undefined1 (*pauVar45) [16];
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  undefined1 (*pauVar51) [16];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  undefined1 auStack_290 [608];
  
  uVar41 = (ulonglong)auStack_290 & 0xfffffffffffffc00;
  pauVar2 = (undefined1 (*) [16])(param_2 + param_3 * 0x40);
  pauVar42 = (undefined1 (*) [16])(uVar41 + 0x1c0);
  *(int **)(uVar41 + 0x200) = param_1;
  *(longlong *)(uVar41 + 0x208) = param_2;
  *(undefined1 (**) [16])(uVar41 + 0x210) = pauVar2;
  *(BADSPACEBASE **)(uVar41 + 0x218) = register0x00000020;
  *(undefined8 *)(uVar41 + 0x220) = unaff_XMM6_Qa;
  *(undefined8 *)(uVar41 + 0x228) = unaff_XMM6_Qb;
  *(undefined8 *)(uVar41 + 0x230) = unaff_XMM7_Qa;
  *(undefined8 *)(uVar41 + 0x238) = unaff_XMM7_Qb;
  *(undefined8 *)(uVar41 + 0x240) = unaff_XMM8_Qa;
  *(undefined8 *)(uVar41 + 0x248) = unaff_XMM8_Qb;
  *(undefined8 *)(uVar41 + 0x250) = unaff_XMM9_Qa;
  *(undefined8 *)(uVar41 + 600) = unaff_XMM9_Qb;
  auVar34 = _DAT_140def100;
  auVar33 = _DAT_140def0e0;
  pauVar45 = (undefined1 (*) [16])(param_2 + 0x40);
  iVar36 = *param_1;
  uVar40 = param_1[1];
  uVar38 = param_1[2];
  pauVar51 = pauVar45;
  if (pauVar45 == pauVar2) {
    pauVar51 = (undefined1 (*) [16])(uVar41 + 0x1c0);
  }
  uVar39 = param_1[3];
  uVar47 = param_1[4];
  uVar48 = param_1[5];
  uVar49 = param_1[6];
  uVar50 = param_1[7];
  do {
    auVar58._16_16_ = ZEXT116(1) * *pauVar51;
    auVar58._0_16_ = ZEXT116(0) * *pauVar51 | ZEXT116(1) * pauVar45[-4];
    auVar60._16_16_ = ZEXT116(1) * pauVar51[1];
    auVar60._0_16_ = ZEXT116(0) * pauVar51[1] | ZEXT116(1) * pauVar45[-3];
    auVar59 = vpshufb_avx2(auVar58,_DAT_140def0c0);
    auVar53._16_16_ = ZEXT116(1) * pauVar51[2];
    auVar53._0_16_ = ZEXT116(0) * pauVar51[2] | ZEXT116(1) * pauVar45[-2];
    auVar61 = vpshufb_avx2(auVar60,_DAT_140def0c0);
    auVar52._16_16_ = ZEXT116(1) * pauVar51[3];
    auVar52._0_16_ = ZEXT116(0) * pauVar51[3] | ZEXT116(1) * pauVar45[-1];
    auVar62 = vpshufb_avx2(auVar53,_DAT_140def0c0);
    iVar5 = auVar59._4_4_ + DAT_140deeec4;
    iVar9 = auVar59._8_4_ + DAT_140deeec8;
    iVar13 = auVar59._12_4_ + DAT_140deeecc;
    iVar17 = auVar59._16_4_ + DAT_140deeed0;
    iVar21 = auVar59._20_4_ + DAT_140deeed4;
    iVar25 = auVar59._24_4_ + DAT_140deeed8;
    iVar29 = auVar59._28_4_ + DAT_140deeedc;
    auVar63 = vpshufb_avx2(auVar52,_DAT_140def0c0);
    iVar37 = auVar61._0_4_ + DAT_140deeee0;
    iVar6 = auVar61._4_4_ + DAT_140deeee4;
    iVar10 = auVar61._8_4_ + DAT_140deeee8;
    iVar14 = auVar61._12_4_ + DAT_140deeeec;
    iVar18 = auVar61._16_4_ + DAT_140deeef0;
    iVar22 = auVar61._20_4_ + DAT_140deeef4;
    iVar26 = auVar61._24_4_ + DAT_140deeef8;
    iVar30 = auVar61._28_4_ + DAT_140deeefc;
    iVar3 = auVar62._0_4_ + DAT_140deef00;
    iVar7 = auVar62._4_4_ + DAT_140deef04;
    iVar11 = auVar62._8_4_ + DAT_140deef08;
    iVar15 = auVar62._12_4_ + DAT_140deef0c;
    iVar19 = auVar62._16_4_ + DAT_140deef10;
    iVar23 = auVar62._20_4_ + DAT_140deef14;
    iVar27 = auVar62._24_4_ + DAT_140deef18;
    iVar31 = auVar62._28_4_ + DAT_140deef1c;
    iVar4 = auVar63._0_4_ + DAT_140deef20;
    iVar8 = auVar63._4_4_ + DAT_140deef24;
    iVar12 = auVar63._8_4_ + DAT_140deef28;
    iVar16 = auVar63._12_4_ + DAT_140deef2c;
    iVar20 = auVar63._16_4_ + DAT_140deef30;
    iVar24 = auVar63._20_4_ + DAT_140deef34;
    iVar28 = auVar63._24_4_ + DAT_140deef38;
    iVar32 = auVar63._28_4_ + DAT_140deef3c;
    *(int *)*pauVar42 = auVar59._0_4_ + K256;
    *(int *)(*pauVar42 + 4) = iVar5;
    *(int *)(*pauVar42 + 8) = iVar9;
    *(int *)(*pauVar42 + 0xc) = iVar13;
    *(int *)pauVar42[1] = iVar17;
    *(int *)(pauVar42[1] + 4) = iVar21;
    *(int *)(pauVar42[1] + 8) = iVar25;
    *(int *)(pauVar42[1] + 0xc) = iVar29;
    uVar35 = 0;
    *(int *)pauVar42[2] = iVar37;
    *(int *)(pauVar42[2] + 4) = iVar6;
    *(int *)(pauVar42[2] + 8) = iVar10;
    *(int *)(pauVar42[2] + 0xc) = iVar14;
    *(int *)pauVar42[3] = iVar18;
    *(int *)(pauVar42[3] + 4) = iVar22;
    *(int *)(pauVar42[3] + 8) = iVar26;
    *(int *)(pauVar42[3] + 0xc) = iVar30;
    *(int *)pauVar42[-4] = iVar3;
    *(int *)(pauVar42[-4] + 4) = iVar7;
    *(int *)(pauVar42[-4] + 8) = iVar11;
    *(int *)(pauVar42[-4] + 0xc) = iVar15;
    *(int *)pauVar42[-3] = iVar19;
    *(int *)(pauVar42[-3] + 4) = iVar23;
    *(int *)(pauVar42[-3] + 8) = iVar27;
    *(int *)(pauVar42[-3] + 0xc) = iVar31;
    uVar46 = uVar40 ^ uVar38;
    *(int *)pauVar42[-2] = iVar4;
    *(int *)(pauVar42[-2] + 4) = iVar8;
    *(int *)(pauVar42[-2] + 8) = iVar12;
    *(int *)(pauVar42[-2] + 0xc) = iVar16;
    *(int *)pauVar42[-1] = iVar20;
    *(int *)(pauVar42[-1] + 4) = iVar24;
    *(int *)(pauVar42[-1] + 8) = iVar28;
    *(int *)(pauVar42[-1] + 0xc) = iVar32;
    pauVar2 = pauVar42 + -4;
    piVar44 = &DAT_140deef40;
    do {
      pauVar43 = pauVar2;
      auVar58 = vpalignr_avx2(auVar61,auVar59,4);
      auVar60 = vpalignr_avx2(auVar63,auVar62,4);
      uVar35 = iVar36 + uVar35;
      auVar54 = vpsrld_avx2(auVar58,7);
      auVar57 = vpsrld_avx2(auVar58,3);
      iVar36 = uVar50 + *(int *)pauVar43[4] + (uVar48 & uVar47) + (~uVar47 & uVar49) +
               ((uVar47 >> 0x19 | uVar47 << 7) ^ (uVar47 >> 0xb | uVar47 << 0x15) ^
               (uVar47 >> 6 | uVar47 << 0x1a));
      auVar52 = vpslld_avx2(auVar58,0xe);
      uVar39 = uVar39 + iVar36;
      auVar58 = vpshufd_avx2(auVar63,0xfa);
      auVar55 = vpsrld_avx2(auVar54,0xb);
      uVar50 = iVar36 + (uVar46 & (uVar35 ^ uVar40) ^ uVar40) +
               ((uVar35 >> 0xd | uVar35 * 0x80000) ^ (uVar35 >> 0x16 | uVar35 * 0x400) ^
               (uVar35 >> 2 | uVar35 * 0x40000000));
      auVar53 = vpslld_avx2(auVar52,0xb);
      auVar56 = vpsrld_avx2(auVar58,10);
      iVar36 = uVar49 + *(int *)(pauVar43[4] + 4) + (uVar47 & uVar39) + (~uVar39 & uVar48) +
               ((uVar39 >> 0x19 | uVar39 * 0x80) ^ (uVar39 >> 0xb | uVar39 * 0x200000) ^
               (uVar39 >> 6 | uVar39 * 0x4000000));
      auVar53 = auVar57 ^ auVar54 ^ auVar52 ^ auVar55 ^ auVar53;
      uVar38 = uVar38 + iVar36;
      auVar58 = vpsrlq_avx2(auVar58,0x11);
      auVar52 = vpsrlq_avx2(auVar58,2);
      uVar49 = iVar36 + ((uVar35 ^ uVar40) & (uVar50 ^ uVar35) ^ uVar35) +
               ((uVar50 >> 0xd | uVar50 * 0x80000) ^ (uVar50 >> 0x16 | uVar50 * 0x400) ^
               (uVar50 >> 2 | uVar50 * 0x40000000));
      auVar58 = vpshufb_avx2(auVar56 ^ auVar58 ^ auVar52,auVar33);
      auVar54._0_4_ = auVar59._0_4_ + auVar60._0_4_ + auVar53._0_4_ + auVar58._0_4_;
      auVar54._4_4_ = auVar59._4_4_ + auVar60._4_4_ + auVar53._4_4_ + auVar58._4_4_;
      auVar54._8_4_ = auVar59._8_4_ + auVar60._8_4_ + auVar53._8_4_ + auVar58._8_4_;
      auVar54._12_4_ = auVar59._12_4_ + auVar60._12_4_ + auVar53._12_4_ + auVar58._12_4_;
      auVar54._16_4_ = auVar59._16_4_ + auVar60._16_4_ + auVar53._16_4_ + auVar58._16_4_;
      auVar54._20_4_ = auVar59._20_4_ + auVar60._20_4_ + auVar53._20_4_ + auVar58._20_4_;
      auVar54._24_4_ = auVar59._24_4_ + auVar60._24_4_ + auVar53._24_4_ + auVar58._24_4_;
      auVar54._28_4_ = auVar59._28_4_ + auVar60._28_4_ + auVar53._28_4_ + auVar58._28_4_;
      iVar36 = uVar48 + *(int *)(pauVar43[4] + 8) + (uVar39 & uVar38) + (~uVar38 & uVar47) +
               ((uVar38 >> 0x19 | uVar38 * 0x80) ^ (uVar38 >> 0xb | uVar38 * 0x200000) ^
               (uVar38 >> 6 | uVar38 * 0x4000000));
      auVar59 = vpshufd_avx2(auVar54,0x50);
      uVar40 = uVar40 + iVar36;
      auVar58 = vpsrld_avx2(auVar59,10);
      auVar59 = vpsrlq_avx2(auVar59,0x11);
      auVar60 = vpsrlq_avx2(auVar59,2);
      uVar48 = iVar36 + ((uVar50 ^ uVar35) & (uVar49 ^ uVar50) ^ uVar50) +
               ((uVar49 >> 0xd | uVar49 * 0x80000) ^ (uVar49 >> 0x16 | uVar49 * 0x400) ^
               (uVar49 >> 2 | uVar49 * 0x40000000));
      auVar58 = vpshufb_avx2(auVar58 ^ auVar59 ^ auVar60,auVar34);
      auVar59._0_4_ = auVar54._0_4_ + auVar58._0_4_;
      auVar59._4_4_ = auVar54._4_4_ + auVar58._4_4_;
      auVar59._8_4_ = auVar54._8_4_ + auVar58._8_4_;
      auVar59._12_4_ = auVar54._12_4_ + auVar58._12_4_;
      auVar59._16_4_ = auVar54._16_4_ + auVar58._16_4_;
      auVar59._20_4_ = auVar54._20_4_ + auVar58._20_4_;
      auVar59._24_4_ = auVar54._24_4_ + auVar58._24_4_;
      auVar59._28_4_ = auVar54._28_4_ + auVar58._28_4_;
      iVar36 = uVar47 + *(int *)(pauVar43[4] + 0xc) + (uVar38 & uVar40) + (~uVar40 & uVar39) +
               ((uVar40 >> 0x19 | uVar40 * 0x80) ^ (uVar40 >> 0xb | uVar40 * 0x200000) ^
               (uVar40 >> 6 | uVar40 * 0x4000000));
      iVar37 = piVar44[1];
      iVar3 = piVar44[2];
      iVar4 = piVar44[3];
      iVar5 = piVar44[4];
      iVar6 = piVar44[5];
      iVar7 = piVar44[6];
      iVar8 = piVar44[7];
      uVar35 = uVar35 + iVar36;
      *(int *)pauVar43[-4] = auVar59._0_4_ + *piVar44;
      *(int *)(pauVar43[-4] + 4) = auVar59._4_4_ + iVar37;
      *(int *)(pauVar43[-4] + 8) = auVar59._8_4_ + iVar3;
      *(int *)(pauVar43[-4] + 0xc) = auVar59._12_4_ + iVar4;
      *(int *)pauVar43[-3] = auVar59._16_4_ + iVar5;
      *(int *)(pauVar43[-3] + 4) = auVar59._20_4_ + iVar6;
      *(int *)(pauVar43[-3] + 8) = auVar59._24_4_ + iVar7;
      *(int *)(pauVar43[-3] + 0xc) = auVar59._28_4_ + iVar8;
      auVar58 = vpalignr_avx2(auVar62,auVar61,4);
      auVar60 = vpalignr_avx2(auVar59,auVar63,4);
      uVar47 = iVar36 + ((uVar49 ^ uVar50) & (uVar48 ^ uVar49) ^ uVar49) +
               ((uVar48 >> 0xd | uVar48 * 0x80000) ^ (uVar48 >> 0x16 | uVar48 * 0x400) ^
               (uVar48 >> 2 | uVar48 * 0x40000000));
      auVar54 = vpsrld_avx2(auVar58,7);
      auVar57 = vpsrld_avx2(auVar58,3);
      iVar36 = uVar39 + *(int *)pauVar43[6] + (uVar40 & uVar35) + (~uVar35 & uVar38) +
               ((uVar35 >> 0x19 | uVar35 * 0x80) ^ (uVar35 >> 0xb | uVar35 * 0x200000) ^
               (uVar35 >> 6 | uVar35 * 0x4000000));
      auVar52 = vpslld_avx2(auVar58,0xe);
      uVar50 = uVar50 + iVar36;
      auVar58 = vpshufd_avx2(auVar59,0xfa);
      auVar55 = vpsrld_avx2(auVar54,0xb);
      uVar39 = iVar36 + ((uVar48 ^ uVar49) & (uVar47 ^ uVar48) ^ uVar48) +
               ((uVar47 >> 0xd | uVar47 * 0x80000) ^ (uVar47 >> 0x16 | uVar47 * 0x400) ^
               (uVar47 >> 2 | uVar47 * 0x40000000));
      auVar53 = vpslld_avx2(auVar52,0xb);
      auVar56 = vpsrld_avx2(auVar58,10);
      iVar36 = uVar38 + *(int *)(pauVar43[6] + 4) + (uVar35 & uVar50) + (~uVar50 & uVar40) +
               ((uVar50 >> 0x19 | uVar50 * 0x80) ^ (uVar50 >> 0xb | uVar50 * 0x200000) ^
               (uVar50 >> 6 | uVar50 * 0x4000000));
      auVar53 = auVar57 ^ auVar54 ^ auVar52 ^ auVar55 ^ auVar53;
      uVar49 = uVar49 + iVar36;
      auVar58 = vpsrlq_avx2(auVar58,0x11);
      auVar52 = vpsrlq_avx2(auVar58,2);
      uVar38 = iVar36 + ((uVar47 ^ uVar48) & (uVar39 ^ uVar47) ^ uVar47) +
               ((uVar39 >> 0xd | uVar39 * 0x80000) ^ (uVar39 >> 0x16 | uVar39 * 0x400) ^
               (uVar39 >> 2 | uVar39 * 0x40000000));
      auVar58 = vpshufb_avx2(auVar56 ^ auVar58 ^ auVar52,auVar33);
      auVar55._0_4_ = auVar61._0_4_ + auVar60._0_4_ + auVar53._0_4_ + auVar58._0_4_;
      auVar55._4_4_ = auVar61._4_4_ + auVar60._4_4_ + auVar53._4_4_ + auVar58._4_4_;
      auVar55._8_4_ = auVar61._8_4_ + auVar60._8_4_ + auVar53._8_4_ + auVar58._8_4_;
      auVar55._12_4_ = auVar61._12_4_ + auVar60._12_4_ + auVar53._12_4_ + auVar58._12_4_;
      auVar55._16_4_ = auVar61._16_4_ + auVar60._16_4_ + auVar53._16_4_ + auVar58._16_4_;
      auVar55._20_4_ = auVar61._20_4_ + auVar60._20_4_ + auVar53._20_4_ + auVar58._20_4_;
      auVar55._24_4_ = auVar61._24_4_ + auVar60._24_4_ + auVar53._24_4_ + auVar58._24_4_;
      auVar55._28_4_ = auVar61._28_4_ + auVar60._28_4_ + auVar53._28_4_ + auVar58._28_4_;
      iVar36 = uVar40 + *(int *)(pauVar43[6] + 8) + (uVar50 & uVar49) + (~uVar49 & uVar35) +
               ((uVar49 >> 0x19 | uVar49 * 0x80) ^ (uVar49 >> 0xb | uVar49 * 0x200000) ^
               (uVar49 >> 6 | uVar49 * 0x4000000));
      auVar61 = vpshufd_avx2(auVar55,0x50);
      uVar48 = uVar48 + iVar36;
      auVar58 = vpsrld_avx2(auVar61,10);
      auVar61 = vpsrlq_avx2(auVar61,0x11);
      auVar60 = vpsrlq_avx2(auVar61,2);
      uVar40 = iVar36 + ((uVar39 ^ uVar47) & (uVar38 ^ uVar39) ^ uVar39) +
               ((uVar38 >> 0xd | uVar38 * 0x80000) ^ (uVar38 >> 0x16 | uVar38 * 0x400) ^
               (uVar38 >> 2 | uVar38 * 0x40000000));
      auVar58 = vpshufb_avx2(auVar58 ^ auVar61 ^ auVar60,auVar34);
      auVar61._0_4_ = auVar55._0_4_ + auVar58._0_4_;
      auVar61._4_4_ = auVar55._4_4_ + auVar58._4_4_;
      auVar61._8_4_ = auVar55._8_4_ + auVar58._8_4_;
      auVar61._12_4_ = auVar55._12_4_ + auVar58._12_4_;
      auVar61._16_4_ = auVar55._16_4_ + auVar58._16_4_;
      auVar61._20_4_ = auVar55._20_4_ + auVar58._20_4_;
      auVar61._24_4_ = auVar55._24_4_ + auVar58._24_4_;
      auVar61._28_4_ = auVar55._28_4_ + auVar58._28_4_;
      iVar36 = uVar35 + *(int *)(pauVar43[6] + 0xc) + (uVar49 & uVar48) + (~uVar48 & uVar50) +
               ((uVar48 >> 0x19 | uVar48 * 0x80) ^ (uVar48 >> 0xb | uVar48 * 0x200000) ^
               (uVar48 >> 6 | uVar48 * 0x4000000));
      iVar37 = piVar44[9];
      iVar3 = piVar44[10];
      iVar4 = piVar44[0xb];
      iVar5 = piVar44[0xc];
      iVar6 = piVar44[0xd];
      iVar7 = piVar44[0xe];
      iVar8 = piVar44[0xf];
      uVar47 = uVar47 + iVar36;
      *(int *)pauVar43[-2] = auVar61._0_4_ + piVar44[8];
      *(int *)(pauVar43[-2] + 4) = auVar61._4_4_ + iVar37;
      *(int *)(pauVar43[-2] + 8) = auVar61._8_4_ + iVar3;
      *(int *)(pauVar43[-2] + 0xc) = auVar61._12_4_ + iVar4;
      *(int *)pauVar43[-1] = auVar61._16_4_ + iVar5;
      *(int *)(pauVar43[-1] + 4) = auVar61._20_4_ + iVar6;
      *(int *)(pauVar43[-1] + 8) = auVar61._24_4_ + iVar7;
      *(int *)(pauVar43[-1] + 0xc) = auVar61._28_4_ + iVar8;
      pauVar2 = pauVar43 + -8;
      auVar58 = vpalignr_avx2(auVar63,auVar62,4);
      auVar60 = vpalignr_avx2(auVar61,auVar59,4);
      uVar35 = iVar36 + ((uVar38 ^ uVar39) & (uVar40 ^ uVar38) ^ uVar38) +
               ((uVar40 >> 0xd | uVar40 * 0x80000) ^ (uVar40 >> 0x16 | uVar40 * 0x400) ^
               (uVar40 >> 2 | uVar40 * 0x40000000));
      auVar54 = vpsrld_avx2(auVar58,7);
      auVar57 = vpsrld_avx2(auVar58,3);
      iVar36 = uVar50 + *(int *)*pauVar43 + (uVar48 & uVar47) + (~uVar47 & uVar49) +
               ((uVar47 >> 0x19 | uVar47 * 0x80) ^ (uVar47 >> 0xb | uVar47 * 0x200000) ^
               (uVar47 >> 6 | uVar47 * 0x4000000));
      auVar52 = vpslld_avx2(auVar58,0xe);
      uVar39 = uVar39 + iVar36;
      auVar58 = vpshufd_avx2(auVar61,0xfa);
      auVar55 = vpsrld_avx2(auVar54,0xb);
      uVar50 = iVar36 + ((uVar40 ^ uVar38) & (uVar35 ^ uVar40) ^ uVar40) +
               ((uVar35 >> 0xd | uVar35 * 0x80000) ^ (uVar35 >> 0x16 | uVar35 * 0x400) ^
               (uVar35 >> 2 | uVar35 * 0x40000000));
      auVar53 = vpslld_avx2(auVar52,0xb);
      auVar56 = vpsrld_avx2(auVar58,10);
      iVar36 = uVar49 + *(int *)(*pauVar43 + 4) + (uVar47 & uVar39) + (~uVar39 & uVar48) +
               ((uVar39 >> 0x19 | uVar39 * 0x80) ^ (uVar39 >> 0xb | uVar39 * 0x200000) ^
               (uVar39 >> 6 | uVar39 * 0x4000000));
      auVar53 = auVar57 ^ auVar54 ^ auVar52 ^ auVar55 ^ auVar53;
      uVar38 = uVar38 + iVar36;
      auVar58 = vpsrlq_avx2(auVar58,0x11);
      auVar52 = vpsrlq_avx2(auVar58,2);
      uVar49 = iVar36 + ((uVar35 ^ uVar40) & (uVar50 ^ uVar35) ^ uVar35) +
               ((uVar50 >> 0xd | uVar50 * 0x80000) ^ (uVar50 >> 0x16 | uVar50 * 0x400) ^
               (uVar50 >> 2 | uVar50 * 0x40000000));
      auVar58 = vpshufb_avx2(auVar56 ^ auVar58 ^ auVar52,auVar33);
      auVar56._0_4_ = auVar62._0_4_ + auVar60._0_4_ + auVar53._0_4_ + auVar58._0_4_;
      auVar56._4_4_ = auVar62._4_4_ + auVar60._4_4_ + auVar53._4_4_ + auVar58._4_4_;
      auVar56._8_4_ = auVar62._8_4_ + auVar60._8_4_ + auVar53._8_4_ + auVar58._8_4_;
      auVar56._12_4_ = auVar62._12_4_ + auVar60._12_4_ + auVar53._12_4_ + auVar58._12_4_;
      auVar56._16_4_ = auVar62._16_4_ + auVar60._16_4_ + auVar53._16_4_ + auVar58._16_4_;
      auVar56._20_4_ = auVar62._20_4_ + auVar60._20_4_ + auVar53._20_4_ + auVar58._20_4_;
      auVar56._24_4_ = auVar62._24_4_ + auVar60._24_4_ + auVar53._24_4_ + auVar58._24_4_;
      auVar56._28_4_ = auVar62._28_4_ + auVar60._28_4_ + auVar53._28_4_ + auVar58._28_4_;
      iVar36 = uVar48 + *(int *)(*pauVar43 + 8) + (uVar39 & uVar38) + (~uVar38 & uVar47) +
               ((uVar38 >> 0x19 | uVar38 * 0x80) ^ (uVar38 >> 0xb | uVar38 * 0x200000) ^
               (uVar38 >> 6 | uVar38 * 0x4000000));
      auVar62 = vpshufd_avx2(auVar56,0x50);
      uVar40 = uVar40 + iVar36;
      auVar58 = vpsrld_avx2(auVar62,10);
      auVar62 = vpsrlq_avx2(auVar62,0x11);
      auVar60 = vpsrlq_avx2(auVar62,2);
      uVar48 = iVar36 + ((uVar50 ^ uVar35) & (uVar49 ^ uVar50) ^ uVar50) +
               ((uVar49 >> 0xd | uVar49 * 0x80000) ^ (uVar49 >> 0x16 | uVar49 * 0x400) ^
               (uVar49 >> 2 | uVar49 * 0x40000000));
      auVar58 = vpshufb_avx2(auVar58 ^ auVar62 ^ auVar60,auVar34);
      auVar62._0_4_ = auVar56._0_4_ + auVar58._0_4_;
      auVar62._4_4_ = auVar56._4_4_ + auVar58._4_4_;
      auVar62._8_4_ = auVar56._8_4_ + auVar58._8_4_;
      auVar62._12_4_ = auVar56._12_4_ + auVar58._12_4_;
      auVar62._16_4_ = auVar56._16_4_ + auVar58._16_4_;
      auVar62._20_4_ = auVar56._20_4_ + auVar58._20_4_;
      auVar62._24_4_ = auVar56._24_4_ + auVar58._24_4_;
      auVar62._28_4_ = auVar56._28_4_ + auVar58._28_4_;
      iVar36 = uVar47 + *(int *)(*pauVar43 + 0xc) + (uVar38 & uVar40) + (~uVar40 & uVar39) +
               ((uVar40 >> 0x19 | uVar40 * 0x80) ^ (uVar40 >> 0xb | uVar40 * 0x200000) ^
               (uVar40 >> 6 | uVar40 * 0x4000000));
      iVar37 = piVar44[0x11];
      iVar3 = piVar44[0x12];
      iVar4 = piVar44[0x13];
      iVar5 = piVar44[0x14];
      iVar6 = piVar44[0x15];
      iVar7 = piVar44[0x16];
      iVar8 = piVar44[0x17];
      uVar35 = uVar35 + iVar36;
      *(int *)*pauVar2 = auVar62._0_4_ + piVar44[0x10];
      *(int *)(pauVar43[-8] + 4) = auVar62._4_4_ + iVar37;
      *(int *)(pauVar43[-8] + 8) = auVar62._8_4_ + iVar3;
      *(int *)(pauVar43[-8] + 0xc) = auVar62._12_4_ + iVar4;
      *(int *)pauVar43[-7] = auVar62._16_4_ + iVar5;
      *(int *)(pauVar43[-7] + 4) = auVar62._20_4_ + iVar6;
      *(int *)(pauVar43[-7] + 8) = auVar62._24_4_ + iVar7;
      *(int *)(pauVar43[-7] + 0xc) = auVar62._28_4_ + iVar8;
      auVar58 = vpalignr_avx2(auVar59,auVar63,4);
      auVar60 = vpalignr_avx2(auVar62,auVar61,4);
      uVar47 = iVar36 + ((uVar49 ^ uVar50) & (uVar48 ^ uVar49) ^ uVar49) +
               ((uVar48 >> 0xd | uVar48 * 0x80000) ^ (uVar48 >> 0x16 | uVar48 * 0x400) ^
               (uVar48 >> 2 | uVar48 * 0x40000000));
      auVar54 = vpsrld_avx2(auVar58,7);
      auVar57 = vpsrld_avx2(auVar58,3);
      iVar36 = uVar39 + *(int *)pauVar43[2] + (uVar40 & uVar35) + (~uVar35 & uVar38) +
               ((uVar35 >> 0x19 | uVar35 * 0x80) ^ (uVar35 >> 0xb | uVar35 * 0x200000) ^
               (uVar35 >> 6 | uVar35 * 0x4000000));
      auVar52 = vpslld_avx2(auVar58,0xe);
      uVar50 = uVar50 + iVar36;
      auVar58 = vpshufd_avx2(auVar62,0xfa);
      auVar55 = vpsrld_avx2(auVar54,0xb);
      uVar39 = iVar36 + ((uVar48 ^ uVar49) & (uVar47 ^ uVar48) ^ uVar48) +
               ((uVar47 >> 0xd | uVar47 * 0x80000) ^ (uVar47 >> 0x16 | uVar47 * 0x400) ^
               (uVar47 >> 2 | uVar47 * 0x40000000));
      auVar53 = vpslld_avx2(auVar52,0xb);
      auVar56 = vpsrld_avx2(auVar58,10);
      iVar36 = uVar38 + *(int *)(pauVar43[2] + 4) + (uVar35 & uVar50) + (~uVar50 & uVar40) +
               ((uVar50 >> 0x19 | uVar50 * 0x80) ^ (uVar50 >> 0xb | uVar50 * 0x200000) ^
               (uVar50 >> 6 | uVar50 * 0x4000000));
      auVar53 = auVar57 ^ auVar54 ^ auVar52 ^ auVar55 ^ auVar53;
      uVar49 = uVar49 + iVar36;
      auVar58 = vpsrlq_avx2(auVar58,0x11);
      auVar52 = vpsrlq_avx2(auVar58,2);
      uVar38 = iVar36 + ((uVar47 ^ uVar48) & (uVar39 ^ uVar47) ^ uVar47) +
               ((uVar39 >> 0xd | uVar39 * 0x80000) ^ (uVar39 >> 0x16 | uVar39 * 0x400) ^
               (uVar39 >> 2 | uVar39 * 0x40000000));
      auVar58 = vpshufb_avx2(auVar56 ^ auVar58 ^ auVar52,auVar33);
      auVar57._0_4_ = auVar63._0_4_ + auVar60._0_4_ + auVar53._0_4_ + auVar58._0_4_;
      auVar57._4_4_ = auVar63._4_4_ + auVar60._4_4_ + auVar53._4_4_ + auVar58._4_4_;
      auVar57._8_4_ = auVar63._8_4_ + auVar60._8_4_ + auVar53._8_4_ + auVar58._8_4_;
      auVar57._12_4_ = auVar63._12_4_ + auVar60._12_4_ + auVar53._12_4_ + auVar58._12_4_;
      auVar57._16_4_ = auVar63._16_4_ + auVar60._16_4_ + auVar53._16_4_ + auVar58._16_4_;
      auVar57._20_4_ = auVar63._20_4_ + auVar60._20_4_ + auVar53._20_4_ + auVar58._20_4_;
      auVar57._24_4_ = auVar63._24_4_ + auVar60._24_4_ + auVar53._24_4_ + auVar58._24_4_;
      auVar57._28_4_ = auVar63._28_4_ + auVar60._28_4_ + auVar53._28_4_ + auVar58._28_4_;
      iVar36 = uVar40 + *(int *)(pauVar43[2] + 8) + (uVar50 & uVar49) + (~uVar49 & uVar35) +
               ((uVar49 >> 0x19 | uVar49 * 0x80) ^ (uVar49 >> 0xb | uVar49 * 0x200000) ^
               (uVar49 >> 6 | uVar49 * 0x4000000));
      auVar63 = vpshufd_avx2(auVar57,0x50);
      uVar48 = uVar48 + iVar36;
      auVar58 = vpsrld_avx2(auVar63,10);
      auVar63 = vpsrlq_avx2(auVar63,0x11);
      auVar60 = vpsrlq_avx2(auVar63,2);
      uVar40 = iVar36 + ((uVar39 ^ uVar47) & (uVar38 ^ uVar39) ^ uVar39) +
               ((uVar38 >> 0xd | uVar38 * 0x80000) ^ (uVar38 >> 0x16 | uVar38 * 0x400) ^
               (uVar38 >> 2 | uVar38 * 0x40000000));
      auVar58 = vpshufb_avx2(auVar58 ^ auVar63 ^ auVar60,auVar34);
      auVar63._0_4_ = auVar57._0_4_ + auVar58._0_4_;
      auVar63._4_4_ = auVar57._4_4_ + auVar58._4_4_;
      auVar63._8_4_ = auVar57._8_4_ + auVar58._8_4_;
      auVar63._12_4_ = auVar57._12_4_ + auVar58._12_4_;
      auVar63._16_4_ = auVar57._16_4_ + auVar58._16_4_;
      auVar63._20_4_ = auVar57._20_4_ + auVar58._20_4_;
      auVar63._24_4_ = auVar57._24_4_ + auVar58._24_4_;
      auVar63._28_4_ = auVar57._28_4_ + auVar58._28_4_;
      iVar36 = uVar35 + *(int *)(pauVar43[2] + 0xc) + (uVar49 & uVar48) + (~uVar48 & uVar50) +
               ((uVar48 >> 0x19 | uVar48 * 0x80) ^ (uVar48 >> 0xb | uVar48 * 0x200000) ^
               (uVar48 >> 6 | uVar48 * 0x4000000));
      uVar46 = uVar40 ^ uVar38;
      iVar37 = piVar44[0x19];
      iVar3 = piVar44[0x1a];
      iVar4 = piVar44[0x1b];
      iVar5 = piVar44[0x1c];
      iVar6 = piVar44[0x1d];
      iVar7 = piVar44[0x1e];
      iVar8 = piVar44[0x1f];
      uVar47 = uVar47 + iVar36;
      uVar35 = (uVar40 >> 0xd | uVar40 * 0x80000) ^ (uVar40 >> 0x16 | uVar40 * 0x400) ^
               (uVar40 >> 2 | uVar40 * 0x40000000);
      iVar36 = iVar36 + ((uVar38 ^ uVar39) & uVar46 ^ uVar38);
      *(int *)pauVar43[-6] = auVar63._0_4_ + piVar44[0x18];
      *(int *)(pauVar43[-6] + 4) = auVar63._4_4_ + iVar37;
      *(int *)(pauVar43[-6] + 8) = auVar63._8_4_ + iVar3;
      *(int *)(pauVar43[-6] + 0xc) = auVar63._12_4_ + iVar4;
      *(int *)pauVar43[-5] = auVar63._16_4_ + iVar5;
      *(int *)(pauVar43[-5] + 4) = auVar63._20_4_ + iVar6;
      *(int *)(pauVar43[-5] + 8) = auVar63._24_4_ + iVar7;
      *(int *)(pauVar43[-5] + 0xc) = auVar63._28_4_ + iVar8;
      pcVar1 = (char *)((longlong)piVar44 + 0x83);
      piVar44 = piVar44 + 0x20;
    } while (*pcVar1 != '\0');
    uVar35 = iVar36 + uVar35;
    iVar36 = uVar50 + *(int *)pauVar43[-4] + (uVar48 & uVar47) + (~uVar47 & uVar49) +
             ((uVar47 >> 0x19 | uVar47 * 0x80) ^ (uVar47 >> 0xb | uVar47 * 0x200000) ^
             (uVar47 >> 6 | uVar47 * 0x4000000));
    uVar39 = uVar39 + iVar36;
    uVar50 = iVar36 + (uVar46 & (uVar35 ^ uVar40) ^ uVar40) +
             ((uVar35 >> 0xd | uVar35 * 0x80000) ^ (uVar35 >> 0x16 | uVar35 * 0x400) ^
             (uVar35 >> 2 | uVar35 * 0x40000000));
    iVar36 = uVar49 + *(int *)(pauVar43[-4] + 4) + (uVar47 & uVar39) + (~uVar39 & uVar48) +
             ((uVar39 >> 0x19 | uVar39 * 0x80) ^ (uVar39 >> 0xb | uVar39 * 0x200000) ^
             (uVar39 >> 6 | uVar39 * 0x4000000));
    uVar38 = uVar38 + iVar36;
    uVar49 = iVar36 + ((uVar35 ^ uVar40) & (uVar50 ^ uVar35) ^ uVar35) +
             ((uVar50 >> 0xd | uVar50 * 0x80000) ^ (uVar50 >> 0x16 | uVar50 * 0x400) ^
             (uVar50 >> 2 | uVar50 * 0x40000000));
    iVar36 = uVar48 + *(int *)(pauVar43[-4] + 8) + (uVar39 & uVar38) + (~uVar38 & uVar47) +
             ((uVar38 >> 0x19 | uVar38 * 0x80) ^ (uVar38 >> 0xb | uVar38 * 0x200000) ^
             (uVar38 >> 6 | uVar38 * 0x4000000));
    uVar40 = uVar40 + iVar36;
    uVar48 = iVar36 + ((uVar50 ^ uVar35) & (uVar49 ^ uVar50) ^ uVar50) +
             ((uVar49 >> 0xd | uVar49 * 0x80000) ^ (uVar49 >> 0x16 | uVar49 * 0x400) ^
             (uVar49 >> 2 | uVar49 * 0x40000000));
    iVar36 = uVar47 + *(int *)(pauVar43[-4] + 0xc) + (uVar38 & uVar40) + (~uVar40 & uVar39) +
             ((uVar40 >> 0x19 | uVar40 * 0x80) ^ (uVar40 >> 0xb | uVar40 * 0x200000) ^
             (uVar40 >> 6 | uVar40 * 0x4000000));
    uVar35 = uVar35 + iVar36;
    uVar47 = iVar36 + ((uVar49 ^ uVar50) & (uVar48 ^ uVar49) ^ uVar49) +
             ((uVar48 >> 0xd | uVar48 * 0x80000) ^ (uVar48 >> 0x16 | uVar48 * 0x400) ^
             (uVar48 >> 2 | uVar48 * 0x40000000));
    iVar36 = uVar39 + *(int *)pauVar43[-2] + (uVar40 & uVar35) + (~uVar35 & uVar38) +
             ((uVar35 >> 0x19 | uVar35 * 0x80) ^ (uVar35 >> 0xb | uVar35 * 0x200000) ^
             (uVar35 >> 6 | uVar35 * 0x4000000));
    uVar50 = uVar50 + iVar36;
    uVar39 = iVar36 + ((uVar48 ^ uVar49) & (uVar47 ^ uVar48) ^ uVar48) +
             ((uVar47 >> 0xd | uVar47 * 0x80000) ^ (uVar47 >> 0x16 | uVar47 * 0x400) ^
             (uVar47 >> 2 | uVar47 * 0x40000000));
    iVar36 = uVar38 + *(int *)(pauVar43[-2] + 4) + (uVar35 & uVar50) + (~uVar50 & uVar40) +
             ((uVar50 >> 0x19 | uVar50 * 0x80) ^ (uVar50 >> 0xb | uVar50 * 0x200000) ^
             (uVar50 >> 6 | uVar50 * 0x4000000));
    uVar49 = uVar49 + iVar36;
    uVar38 = iVar36 + ((uVar47 ^ uVar48) & (uVar39 ^ uVar47) ^ uVar47) +
             ((uVar39 >> 0xd | uVar39 * 0x80000) ^ (uVar39 >> 0x16 | uVar39 * 0x400) ^
             (uVar39 >> 2 | uVar39 * 0x40000000));
    iVar36 = uVar40 + *(int *)(pauVar43[-2] + 8) + (uVar50 & uVar49) + (~uVar49 & uVar35) +
             ((uVar49 >> 0x19 | uVar49 * 0x80) ^ (uVar49 >> 0xb | uVar49 * 0x200000) ^
             (uVar49 >> 6 | uVar49 * 0x4000000));
    uVar48 = uVar48 + iVar36;
    uVar40 = iVar36 + ((uVar39 ^ uVar47) & (uVar38 ^ uVar39) ^ uVar39) +
             ((uVar38 >> 0xd | uVar38 * 0x80000) ^ (uVar38 >> 0x16 | uVar38 * 0x400) ^
             (uVar38 >> 2 | uVar38 * 0x40000000));
    iVar36 = uVar35 + *(int *)(pauVar43[-2] + 0xc) + (uVar49 & uVar48) + (~uVar48 & uVar50) +
             ((uVar48 >> 0x19 | uVar48 * 0x80) ^ (uVar48 >> 0xb | uVar48 * 0x200000) ^
             (uVar48 >> 6 | uVar48 * 0x4000000));
    uVar47 = uVar47 + iVar36;
    uVar35 = iVar36 + ((uVar38 ^ uVar39) & (uVar40 ^ uVar38) ^ uVar38) +
             ((uVar40 >> 0xd | uVar40 * 0x80000) ^ (uVar40 >> 0x16 | uVar40 * 0x400) ^
             (uVar40 >> 2 | uVar40 * 0x40000000));
    iVar36 = uVar50 + *(int *)*pauVar2 + (uVar48 & uVar47) + (~uVar47 & uVar49) +
             ((uVar47 >> 0x19 | uVar47 * 0x80) ^ (uVar47 >> 0xb | uVar47 * 0x200000) ^
             (uVar47 >> 6 | uVar47 * 0x4000000));
    uVar39 = uVar39 + iVar36;
    uVar50 = iVar36 + ((uVar40 ^ uVar38) & (uVar35 ^ uVar40) ^ uVar40) +
             ((uVar35 >> 0xd | uVar35 * 0x80000) ^ (uVar35 >> 0x16 | uVar35 * 0x400) ^
             (uVar35 >> 2 | uVar35 * 0x40000000));
    iVar36 = uVar49 + *(int *)(pauVar43[-8] + 4) + (uVar47 & uVar39) + (~uVar39 & uVar48) +
             ((uVar39 >> 0x19 | uVar39 * 0x80) ^ (uVar39 >> 0xb | uVar39 * 0x200000) ^
             (uVar39 >> 6 | uVar39 * 0x4000000));
    uVar38 = uVar38 + iVar36;
    uVar49 = iVar36 + ((uVar35 ^ uVar40) & (uVar50 ^ uVar35) ^ uVar35) +
             ((uVar50 >> 0xd | uVar50 * 0x80000) ^ (uVar50 >> 0x16 | uVar50 * 0x400) ^
             (uVar50 >> 2 | uVar50 * 0x40000000));
    iVar36 = uVar48 + *(int *)(pauVar43[-8] + 8) + (uVar39 & uVar38) + (~uVar38 & uVar47) +
             ((uVar38 >> 0x19 | uVar38 * 0x80) ^ (uVar38 >> 0xb | uVar38 * 0x200000) ^
             (uVar38 >> 6 | uVar38 * 0x4000000));
    uVar40 = uVar40 + iVar36;
    uVar48 = iVar36 + ((uVar50 ^ uVar35) & (uVar49 ^ uVar50) ^ uVar50) +
             ((uVar49 >> 0xd | uVar49 * 0x80000) ^ (uVar49 >> 0x16 | uVar49 * 0x400) ^
             (uVar49 >> 2 | uVar49 * 0x40000000));
    iVar36 = uVar47 + *(int *)(pauVar43[-8] + 0xc) + (uVar38 & uVar40) + (~uVar40 & uVar39) +
             ((uVar40 >> 0x19 | uVar40 * 0x80) ^ (uVar40 >> 0xb | uVar40 * 0x200000) ^
             (uVar40 >> 6 | uVar40 * 0x4000000));
    uVar35 = uVar35 + iVar36;
    uVar47 = iVar36 + ((uVar49 ^ uVar50) & (uVar48 ^ uVar49) ^ uVar49) +
             ((uVar48 >> 0xd | uVar48 * 0x80000) ^ (uVar48 >> 0x16 | uVar48 * 0x400) ^
             (uVar48 >> 2 | uVar48 * 0x40000000));
    iVar36 = uVar39 + *(int *)pauVar43[-6] + (uVar40 & uVar35) + (~uVar35 & uVar38) +
             ((uVar35 >> 0x19 | uVar35 * 0x80) ^ (uVar35 >> 0xb | uVar35 * 0x200000) ^
             (uVar35 >> 6 | uVar35 * 0x4000000));
    uVar50 = uVar50 + iVar36;
    uVar39 = iVar36 + ((uVar48 ^ uVar49) & (uVar47 ^ uVar48) ^ uVar48) +
             ((uVar47 >> 0xd | uVar47 * 0x80000) ^ (uVar47 >> 0x16 | uVar47 * 0x400) ^
             (uVar47 >> 2 | uVar47 * 0x40000000));
    iVar36 = uVar38 + *(int *)(pauVar43[-6] + 4) + (uVar35 & uVar50) + (~uVar50 & uVar40) +
             ((uVar50 >> 0x19 | uVar50 * 0x80) ^ (uVar50 >> 0xb | uVar50 * 0x200000) ^
             (uVar50 >> 6 | uVar50 * 0x4000000));
    uVar49 = uVar49 + iVar36;
    uVar38 = iVar36 + ((uVar47 ^ uVar48) & (uVar39 ^ uVar47) ^ uVar47) +
             ((uVar39 >> 0xd | uVar39 * 0x80000) ^ (uVar39 >> 0x16 | uVar39 * 0x400) ^
             (uVar39 >> 2 | uVar39 * 0x40000000));
    iVar36 = uVar40 + *(int *)(pauVar43[-6] + 8) + (uVar50 & uVar49) + (~uVar49 & uVar35) +
             ((uVar49 >> 0x19 | uVar49 * 0x80) ^ (uVar49 >> 0xb | uVar49 * 0x200000) ^
             (uVar49 >> 6 | uVar49 * 0x4000000));
    uVar48 = uVar48 + iVar36;
    uVar40 = iVar36 + ((uVar39 ^ uVar47) & (uVar38 ^ uVar39) ^ uVar39) +
             ((uVar38 >> 0xd | uVar38 * 0x80000) ^ (uVar38 >> 0x16 | uVar38 * 0x400) ^
             (uVar38 >> 2 | uVar38 * 0x40000000));
    iVar36 = uVar35 + *(int *)(pauVar43[-6] + 0xc) + (uVar49 & uVar48) + (~uVar48 & uVar50) +
             ((uVar48 >> 0x19 | uVar48 * 0x80) ^ (uVar48 >> 0xb | uVar48 * 0x200000) ^
             (uVar48 >> 6 | uVar48 * 0x4000000));
    piVar44 = *(int **)pauVar43[0x18];
    pauVar42 = pauVar43 + 0x14;
    iVar37 = iVar36 + ((uVar38 ^ uVar39) & (uVar40 ^ uVar38) ^ uVar38) +
             ((uVar40 >> 0xd | uVar40 * 0x80000) ^ (uVar40 >> 0x16 | uVar40 * 0x400) ^
             (uVar40 >> 2 | uVar40 * 0x40000000)) + *piVar44;
    uVar40 = uVar40 + piVar44[1];
    uVar38 = uVar38 + piVar44[2];
    uVar39 = uVar39 + piVar44[3];
    uVar47 = uVar47 + iVar36 + piVar44[4];
    uVar48 = uVar48 + piVar44[5];
    uVar49 = uVar49 + piVar44[6];
    uVar50 = uVar50 + piVar44[7];
    *piVar44 = iVar37;
    piVar44[1] = uVar40;
    piVar44[2] = uVar38;
    piVar44[3] = uVar39;
    piVar44[4] = uVar47;
    piVar44[5] = uVar48;
    piVar44[6] = uVar49;
    piVar44[7] = uVar50;
    if (pauVar45 == *(undefined1 (**) [16])pauVar43[0x19]) {
      return;
    }
    uVar35 = 0;
    uVar46 = uVar40 ^ uVar38;
    do {
      uVar35 = iVar37 + uVar35;
      iVar36 = uVar50 + *(int *)pauVar42[1] + (uVar48 & uVar47) + (~uVar47 & uVar49) +
               ((uVar47 >> 0x19 | uVar47 << 7) ^ (uVar47 >> 0xb | uVar47 << 0x15) ^
               (uVar47 >> 6 | uVar47 << 0x1a));
      uVar39 = uVar39 + iVar36;
      uVar50 = iVar36 + (uVar46 & (uVar35 ^ uVar40) ^ uVar40) +
               ((uVar35 >> 0xd | uVar35 * 0x80000) ^ (uVar35 >> 0x16 | uVar35 * 0x400) ^
               (uVar35 >> 2 | uVar35 * 0x40000000));
      iVar36 = uVar49 + *(int *)(pauVar42[1] + 4) + (uVar47 & uVar39) + (~uVar39 & uVar48) +
               ((uVar39 >> 0x19 | uVar39 * 0x80) ^ (uVar39 >> 0xb | uVar39 * 0x200000) ^
               (uVar39 >> 6 | uVar39 * 0x4000000));
      uVar38 = uVar38 + iVar36;
      uVar49 = iVar36 + ((uVar35 ^ uVar40) & (uVar50 ^ uVar35) ^ uVar35) +
               ((uVar50 >> 0xd | uVar50 * 0x80000) ^ (uVar50 >> 0x16 | uVar50 * 0x400) ^
               (uVar50 >> 2 | uVar50 * 0x40000000));
      iVar36 = uVar48 + *(int *)(pauVar42[1] + 8) + (uVar39 & uVar38) + (~uVar38 & uVar47) +
               ((uVar38 >> 0x19 | uVar38 * 0x80) ^ (uVar38 >> 0xb | uVar38 * 0x200000) ^
               (uVar38 >> 6 | uVar38 * 0x4000000));
      uVar40 = uVar40 + iVar36;
      uVar48 = iVar36 + ((uVar50 ^ uVar35) & (uVar49 ^ uVar50) ^ uVar50) +
               ((uVar49 >> 0xd | uVar49 * 0x80000) ^ (uVar49 >> 0x16 | uVar49 * 0x400) ^
               (uVar49 >> 2 | uVar49 * 0x40000000));
      iVar36 = uVar47 + *(int *)(pauVar42[1] + 0xc) + (uVar38 & uVar40) + (~uVar40 & uVar39) +
               ((uVar40 >> 0x19 | uVar40 * 0x80) ^ (uVar40 >> 0xb | uVar40 * 0x200000) ^
               (uVar40 >> 6 | uVar40 * 0x4000000));
      uVar35 = uVar35 + iVar36;
      uVar47 = iVar36 + ((uVar49 ^ uVar50) & (uVar48 ^ uVar49) ^ uVar49) +
               ((uVar48 >> 0xd | uVar48 * 0x80000) ^ (uVar48 >> 0x16 | uVar48 * 0x400) ^
               (uVar48 >> 2 | uVar48 * 0x40000000));
      iVar36 = uVar39 + *(int *)pauVar42[3] + (uVar40 & uVar35) + (~uVar35 & uVar38) +
               ((uVar35 >> 0x19 | uVar35 * 0x80) ^ (uVar35 >> 0xb | uVar35 * 0x200000) ^
               (uVar35 >> 6 | uVar35 * 0x4000000));
      uVar50 = uVar50 + iVar36;
      uVar39 = iVar36 + ((uVar48 ^ uVar49) & (uVar47 ^ uVar48) ^ uVar48) +
               ((uVar47 >> 0xd | uVar47 * 0x80000) ^ (uVar47 >> 0x16 | uVar47 * 0x400) ^
               (uVar47 >> 2 | uVar47 * 0x40000000));
      iVar36 = uVar38 + *(int *)(pauVar42[3] + 4) + (uVar35 & uVar50) + (~uVar50 & uVar40) +
               ((uVar50 >> 0x19 | uVar50 * 0x80) ^ (uVar50 >> 0xb | uVar50 * 0x200000) ^
               (uVar50 >> 6 | uVar50 * 0x4000000));
      uVar49 = uVar49 + iVar36;
      uVar38 = iVar36 + ((uVar47 ^ uVar48) & (uVar39 ^ uVar47) ^ uVar47) +
               ((uVar39 >> 0xd | uVar39 * 0x80000) ^ (uVar39 >> 0x16 | uVar39 * 0x400) ^
               (uVar39 >> 2 | uVar39 * 0x40000000));
      iVar36 = uVar40 + *(int *)(pauVar42[3] + 8) + (uVar50 & uVar49) + (~uVar49 & uVar35) +
               ((uVar49 >> 0x19 | uVar49 * 0x80) ^ (uVar49 >> 0xb | uVar49 * 0x200000) ^
               (uVar49 >> 6 | uVar49 * 0x4000000));
      uVar48 = uVar48 + iVar36;
      uVar40 = iVar36 + ((uVar39 ^ uVar47) & (uVar38 ^ uVar39) ^ uVar39) +
               ((uVar38 >> 0xd | uVar38 * 0x80000) ^ (uVar38 >> 0x16 | uVar38 * 0x400) ^
               (uVar38 >> 2 | uVar38 * 0x40000000));
      iVar37 = uVar35 + *(int *)(pauVar42[3] + 0xc) + (uVar49 & uVar48) + (~uVar48 & uVar50) +
               ((uVar48 >> 0x19 | uVar48 * 0x80) ^ (uVar48 >> 0xb | uVar48 * 0x200000) ^
               (uVar48 >> 6 | uVar48 * 0x4000000));
      uVar46 = uVar40 ^ uVar38;
      uVar47 = uVar47 + iVar37;
      uVar35 = (uVar40 >> 0xd | uVar40 * 0x80000) ^ (uVar40 >> 0x16 | uVar40 * 0x400) ^
               (uVar40 >> 2 | uVar40 * 0x40000000);
      iVar37 = iVar37 + ((uVar38 ^ uVar39) & uVar46 ^ uVar38);
      pauVar42 = pauVar42 + -4;
    } while (pauVar2 <= pauVar42);
    piVar44 = *(int **)pauVar43[0x18];
    pauVar42 = pauVar43 + 0x14;
    iVar36 = iVar37 + uVar35 + *piVar44;
    uVar40 = uVar40 + piVar44[1];
    uVar38 = uVar38 + piVar44[2];
    uVar39 = uVar39 + piVar44[3];
    uVar47 = uVar47 + piVar44[4];
    uVar48 = uVar48 + piVar44[5];
    pauVar45 = pauVar45 + 8;
    uVar49 = uVar49 + piVar44[6];
    uVar50 = uVar50 + piVar44[7];
    pauVar2 = *(undefined1 (**) [16])pauVar43[0x19];
    *piVar44 = iVar36;
    pauVar51 = pauVar45;
    if (pauVar45 == pauVar2) {
      pauVar51 = pauVar42;
    }
    piVar44[1] = uVar40;
    piVar44[2] = uVar38;
    piVar44[3] = uVar39;
    piVar44[4] = uVar47;
    piVar44[5] = uVar48;
    piVar44[6] = uVar49;
    piVar44[7] = uVar50;
  } while (pauVar45 <= pauVar2);
  return;
}


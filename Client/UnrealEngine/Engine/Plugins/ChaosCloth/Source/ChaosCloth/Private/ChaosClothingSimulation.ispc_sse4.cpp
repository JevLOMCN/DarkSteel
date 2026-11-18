// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 2

// GetClothingSimulationData___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_REFs_5B__c_unFTransform_5D_REFs_5B__c_unFVector_5D_CundCuni_sse4 @ 140cc29b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetClothingSimulationData___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_REFs_5B__c_unFTransform_5D_REFs_5B__c_unFVector_5D_CundCuni_sse4
               (longlong param_1,longlong param_2,ulonglong *param_3,double *param_4,double param_5,
               uint param_6,undefined1 (*param_7) [16])

{
  uint *puVar1;
  undefined1 (*pauVar2) [16];
  undefined4 *puVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  byte bVar7;
  longlong lVar8;
  float *pfVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  undefined4 in_R10D;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  uint uVar19;
  float fVar20;
  undefined8 uVar21;
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
  float fVar38;
  undefined8 uVar22;
  float fVar40;
  undefined1 auVar36 [16];
  float fVar41;
  undefined1 auVar45 [12];
  double dVar42;
  undefined1 auVar46 [16];
  double dVar56;
  undefined1 auVar47 [16];
  double dVar43;
  double dVar44;
  double dVar57;
  double dVar58;
  double dVar59;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar55;
  double dVar60;
  undefined1 auVar54 [16];
  double dVar61;
  undefined1 auVar62 [16];
  double dVar72;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  double dVar73;
  double dVar74;
  double dVar82;
  double dVar83;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  double dVar84;
  double dVar88;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  uint uVar89;
  double dVar90;
  uint uVar97;
  uint uVar98;
  uint uVar101;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  double dVar99;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  double dVar100;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  float fVar102;
  float fVar103;
  double dVar104;
  double dVar105;
  double dVar106;
  undefined1 auVar107 [16];
  double dVar114;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  double dVar115;
  double dVar116;
  undefined1 auVar111 [16];
  double dVar117;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  double dVar118;
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  double dVar119;
  double dVar120;
  double dVar126;
  double dVar127;
  double dVar128;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  float fVar129;
  double dVar130;
  undefined1 auVar132 [16];
  double dVar131;
  double dVar136;
  double dVar137;
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  double dVar138;
  double dVar139;
  double dVar141;
  double dVar142;
  undefined1 auVar140 [16];
  double dVar143;
  undefined1 auVar144 [16];
  double dVar150;
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  double dVar151;
  double dVar152;
  double dVar154;
  double dVar155;
  undefined1 auVar153 [16];
  double dVar156;
  double dVar157;
  double dVar159;
  double dVar160;
  undefined1 auVar158 [16];
  double dVar161;
  double dVar162;
  double dVar163;
  double dVar165;
  double dVar166;
  double dVar167;
  undefined1 auVar164 [16];
  double dVar168;
  double dVar169;
  uint local_238;
  uint uStack_234;
  uint local_1b8;
  uint uStack_1b4;
  float fVar37;
  float fVar39;
  
  auVar107 = *param_7;
  iVar13 = movmskps(in_R10D,auVar107);
  dVar161 = (double)param_3[2] * ___xmm_3ff0000000000000bff0000000000000;
  dVar165 = (double)param_3[3] * _UNK_15076b868;
  dVar156 = (double)(*param_3 ^ __xmm_80000000000000008000000000000000);
  dVar159 = (double)(param_3[1] ^ _UNK_15066df78);
  dVar100 = (double)param_3[4];
  dVar117 = (double)param_3[5];
  dVar60 = (double)param_3[6];
  dVar43 = (double)param_3[10];
  dVar73 = (double)param_3[8];
  dVar82 = (double)param_3[9];
  uVar12 = -(uint)((double)(__xmm_7fffffffffffffff7fffffffffffffff & (ulonglong)dVar43) <=
                  ___xmm_3e45798ee2308c3a3e45798ee2308c3a);
  uVar18 = -(uint)(0.0 <= _UNK_150aa88b8);
  uVar15 = -(uint)((double)((ulonglong)dVar73 & __xmm_7fffffffffffffff7fffffffffffffff) <=
                  ___xmm_3e45798ee2308c3a3e45798ee2308c3a);
  uVar19 = -(uint)((double)((ulonglong)dVar82 & _UNK_15061cc88) <= _UNK_150aa88b8);
  auVar123._4_4_ = uVar19;
  auVar123._0_4_ = uVar15;
  auVar123._8_4_ = uVar12;
  auVar123._12_4_ = uVar18;
  auVar148._8_8_ = (double)-(ulonglong)(0.0 <= _UNK_150b51658);
  auVar148._0_8_ = (double)-(ulonglong)(dVar43 <= ___xmm_46c8a6e32246c99c46c8a6e32246c99c);
  auVar62._8_8_ = -(ulonglong)(_UNK_150b51668 <= 0.0);
  auVar62._0_8_ = -(ulonglong)(___xmm_3914c4e977ba1f5c3914c4e977ba1f5c <= dVar43);
  uVar89 = -(uint)(___xmm_3914c4e977ba1f5c3914c4e977ba1f5c <= dVar73 &&
                  dVar73 <= ___xmm_46c8a6e32246c99c46c8a6e32246c99c);
  uVar97 = -(uint)(_UNK_150b51668 <= dVar82 && dVar82 <= _UNK_150b51658);
  uVar98 = (uint)-(ulonglong)(___xmm_3914c4e977ba1f5c3914c4e977ba1f5c <= dVar43) &
           (uint)-(ulonglong)(dVar43 <= ___xmm_46c8a6e32246c99c46c8a6e32246c99c);
  uVar101 = (uint)-(ulonglong)(_UNK_150b51668 <= 0.0) & (uint)-(ulonglong)(0.0 <= _UNK_150b51658);
  auVar62 = pmovsxdq(auVar62,auVar123);
  auVar25._4_4_ = uVar12;
  auVar25._0_4_ = uVar12;
  auVar25._8_4_ = uVar18;
  auVar25._12_4_ = uVar18;
  if (iVar13 == 0xf) {
    uVar12 = -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <
                    (double)((ulonglong)dVar73 & __xmm_7fffffffffffffff7fffffffffffffff));
    uVar18 = -(uint)(_UNK_150aa88b8 < (double)((ulonglong)dVar82 & _UNK_15061cc88));
    uVar15 = -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <
                    (double)(__xmm_7fffffffffffffff7fffffffffffffff & (ulonglong)dVar43));
    auVar108._4_4_ = uVar18;
    auVar108._0_4_ = uVar12;
    auVar108._8_4_ = uVar15;
    auVar108._12_4_ = -(uint)(_UNK_150aa88b8 < 0.0);
    auVar91._0_4_ = uVar89 & uVar12;
    auVar91._4_4_ = uVar97 & uVar18;
    auVar91._8_4_ = uVar98 & uVar15;
    auVar91._12_4_ = uVar101 & -(uint)(_UNK_150aa88b8 < 0.0);
    iVar13 = movmskps((int)param_3,auVar91);
    if (iVar13 == 0) {
      auVar91 = ZEXT816(0);
LAB_140cc36bc:
      auVar111._8_4_ = 0xffffffff;
      auVar111._0_8_ = 0xffffffffffffffff;
      auVar111._12_4_ = 0xffffffff;
      dVar104 = (double)(___xmm_7fcfffffffffffff7fcfffffffffffff -
                        (___xmm_7fe00000000000007fe0000000000000 & (ulonglong)dVar73));
      dVar114 = (double)((longlong)_UNK_150b51628 - (_UNK_150b51678 & (ulonglong)dVar82));
      dVar42 = (double)(___xmm_7fcfffffffffffff7fcfffffffffffff -
                       ((ulonglong)dVar43 & ___xmm_7fe00000000000007fe0000000000000));
      auVar133._0_4_ = (float)(dVar73 * dVar104);
      auVar133._4_4_ = (float)(dVar82 * dVar114);
      fVar102 = (float)(dVar43 * dVar42);
      auVar124._0_8_ = CONCAT44((float)(_UNK_150b51628 * 0.0),fVar102);
      auVar124._8_8_ = 0;
      auVar133._8_8_ = auVar124._0_8_;
      auVar123 = rcpps(auVar124,auVar133);
      auVar111 = auVar111 ^ auVar91;
      dVar42 = (double)((_UNK_15076ba38 - fVar102 * auVar123._8_4_) * auVar123._8_4_) * dVar42;
      dVar56 = (double)((_UNK_15076ba3c - (float)(_UNK_150b51628 * 0.0) * auVar123._12_4_) *
                       auVar123._12_4_) * _UNK_150b51628;
      dVar104 = (double)((___xmm_40000000400000004000000040000000 - auVar133._0_4_ * auVar123._0_4_)
                        * auVar123._0_4_) * dVar104;
      dVar114 = (double)((_UNK_15076ba34 - auVar133._4_4_ * auVar123._4_4_) * auVar123._4_4_) *
                dVar114;
      dVar104 = (___xmm_40000000000000004000000000000000 - dVar73 * dVar104) * dVar104;
      dVar114 = (_UNK_150689698 - dVar82 * dVar114) * dVar114;
      dVar42 = (___xmm_40000000000000004000000000000000 - dVar43 * dVar42) * dVar42;
      dVar56 = (_UNK_150689698 - dVar56 * 0.0) * dVar56;
      auVar146._0_8_ = (___xmm_40000000000000004000000000000000 - dVar43 * dVar42) * dVar42;
      auVar146._8_8_ = (_UNK_150689698 - dVar56 * 0.0) * dVar56;
      auVar93._0_8_ = (___xmm_40000000000000004000000000000000 - dVar73 * dVar104) * dVar104;
      auVar93._8_8_ = (_UNK_150689698 - dVar82 * dVar114) * dVar114;
      auVar30._4_4_ = auVar111._0_4_;
      auVar30._0_4_ = auVar111._0_4_;
      auVar30._8_4_ = auVar111._4_4_;
      auVar30._12_4_ = auVar111._4_4_;
      auVar148 = blendvps(auVar148,auVar93,auVar30);
      auVar31._4_4_ = auVar111._8_4_;
      auVar31._0_4_ = auVar111._8_4_;
      auVar31._8_4_ = auVar111._12_4_;
      auVar31._12_4_ = auVar111._12_4_;
      auVar107 = blendvps(auVar107,auVar146,auVar31);
    }
    else {
      auVar47._0_4_ = (float)dVar73;
      auVar47._4_4_ = (float)dVar82;
      fVar102 = (float)dVar43;
      auVar47._8_4_ = fVar102;
      auVar47._12_4_ = 0;
      auVar107 = rcpps(ZEXT416((uint)fVar102),auVar47);
      dVar42 = (double)((___xmm_40000000400000004000000040000000 - auVar47._0_4_ * auVar107._0_4_) *
                       auVar107._0_4_);
      dVar56 = (double)((_UNK_15076ba34 - auVar47._4_4_ * auVar107._4_4_) * auVar107._4_4_);
      dVar104 = (double)((_UNK_15076ba38 - fVar102 * auVar107._8_4_) * auVar107._8_4_);
      dVar114 = (double)((_UNK_15076ba3c - auVar107._12_4_ * 0.0) * auVar107._12_4_);
      dVar104 = (___xmm_40000000000000004000000000000000 - dVar43 * dVar104) * dVar104;
      dVar114 = (_UNK_150689698 - dVar114 * 0.0) * dVar114;
      dVar42 = (___xmm_40000000000000004000000000000000 - dVar73 * dVar42) * dVar42;
      dVar56 = (_UNK_150689698 - dVar82 * dVar56) * dVar56;
      auVar148._0_8_ = (___xmm_40000000000000004000000000000000 - dVar73 * dVar42) * dVar42;
      auVar148._8_8_ = (_UNK_150689698 - dVar82 * dVar56) * dVar56;
      auVar107._0_8_ = (___xmm_40000000000000004000000000000000 - dVar43 * dVar104) * dVar104;
      auVar107._8_8_ = (_UNK_150689698 - dVar114 * 0.0) * dVar114;
      uVar14 = movmskps(0xf,auVar108);
      if ((char)uVar14 != (char)iVar13) goto LAB_140cc36bc;
    }
    auVar62 = blendvps(auVar148,ZEXT816(0),auVar62);
    auVar107 = blendvps(auVar107,ZEXT816(0),auVar25);
    uVar12 = param_6 + 3;
    if (-1 < (int)param_6) {
      uVar12 = param_6;
    }
    dVar73 = auVar62._0_8_;
    dVar82 = auVar62._8_8_;
    dVar43 = auVar107._0_8_;
    if ((int)(uVar12 & 0xfffffffc) < 1) {
      uVar15 = 0;
      if ((int)param_6 < 1) {
        return;
      }
    }
    else {
      lVar16 = 0x20;
      uVar15 = 0;
      do {
        auVar107 = *(undefined1 (*) [16])(param_1 + -0x20 + lVar16);
        auVar62 = *(undefined1 (*) [16])(param_1 + -0x10 + lVar16);
        pfVar9 = (float *)(param_1 + lVar16);
        auVar25 = insertps(auVar62,auVar107,0x8c);
        auVar148 = *(undefined1 (*) [16])(param_2 + -0x20 + lVar16);
        auVar123 = *(undefined1 (*) [16])(param_2 + -0x10 + lVar16);
        puVar1 = (uint *)(param_2 + lVar16);
        auVar110 = insertps(auVar123,auVar148,0x8c);
        dVar56 = param_4[1];
        dVar42 = param_4[1];
        dVar114 = param_4[2];
        dVar104 = param_4[2];
        dVar74 = ((double)auVar107._0_4_ * param_5 + *param_4) - dVar100;
        dVar84 = ((double)auVar107._12_4_ * param_5 + *param_4) - dVar100;
        dVar44 = ((double)auVar62._8_4_ * param_5 + *param_4) - dVar100;
        dVar57 = ((double)pfVar9[1] * param_5 + *param_4) - dVar100;
        dVar168 = ((double)auVar107._4_4_ * param_5 + dVar56) - dVar117;
        dVar169 = ((double)auVar62._0_4_ * param_5 + dVar42) - dVar117;
        dVar120 = ((double)auVar62._12_4_ * param_5 + dVar56) - dVar117;
        dVar127 = ((double)pfVar9[2] * param_5 + dVar42) - dVar117;
        dVar118 = ((double)auVar25._0_4_ * param_5 + dVar114) - dVar60;
        dVar119 = ((double)auVar25._4_4_ * param_5 + dVar104) - dVar60;
        dVar90 = ((double)*pfVar9 * param_5 + dVar114) - dVar60;
        dVar105 = ((double)pfVar9[3] * param_5 + dVar104) - dVar60;
        dVar154 = dVar156 * dVar168 - dVar159 * dVar74;
        dVar157 = dVar156 * dVar169 - dVar159 * dVar84;
        dVar162 = dVar156 * dVar120 - dVar159 * dVar44;
        dVar166 = dVar156 * dVar127 - dVar159 * dVar57;
        dVar115 = dVar159 * dVar118 - dVar161 * dVar168;
        dVar116 = dVar159 * dVar119 - dVar161 * dVar169;
        dVar58 = dVar159 * dVar90 - dVar161 * dVar120;
        dVar61 = dVar159 * dVar105 - dVar161 * dVar127;
        dVar130 = dVar161 * dVar44 - dVar156 * dVar90;
        dVar136 = dVar161 * dVar57 - dVar156 * dVar105;
        dVar138 = dVar161 * dVar74 - dVar156 * dVar118;
        dVar141 = dVar161 * dVar84 - dVar156 * dVar119;
        dVar115 = dVar115 + dVar115;
        dVar116 = dVar116 + dVar116;
        dVar58 = dVar58 + dVar58;
        dVar61 = dVar61 + dVar61;
        dVar138 = dVar138 + dVar138;
        dVar141 = dVar141 + dVar141;
        dVar130 = dVar130 + dVar130;
        dVar136 = dVar136 + dVar136;
        dVar154 = dVar154 + dVar154;
        dVar157 = dVar157 + dVar157;
        dVar162 = dVar162 + dVar162;
        dVar166 = dVar166 + dVar166;
        dVar139 = (double)(float)(auVar148._0_4_ ^ __xmm_80000000800000008000000080000000);
        dVar142 = (double)(float)(auVar148._12_4_ ^ _UNK_150651574);
        dVar59 = (double)(float)(auVar123._8_4_ ^ _UNK_150651578);
        dVar72 = (double)(float)(puVar1[1] ^ _UNK_15065157c);
        dVar99 = (double)(float)(auVar123._12_4_ ^ _UNK_150651578);
        dVar106 = (double)(float)(puVar1[2] ^ _UNK_15065157c);
        dVar83 = (double)(float)(auVar148._4_4_ ^ __xmm_80000000800000008000000080000000);
        dVar88 = (double)(float)(auVar123._0_4_ ^ _UNK_150651574);
        local_1b8 = auVar110._0_4_;
        uStack_1b4 = auVar110._4_4_;
        dVar126 = (double)(float)(*puVar1 ^ _UNK_150651578);
        dVar128 = (double)(float)(puVar1[3] ^ _UNK_15065157c);
        dVar42 = (double)(float)(local_1b8 ^ __xmm_80000000800000008000000080000000);
        dVar104 = (double)(float)(uStack_1b4 ^ _UNK_150651574);
        dVar151 = dVar156 * dVar83 - dVar159 * dVar139;
        dVar152 = dVar156 * dVar88 - dVar159 * dVar142;
        dVar131 = dVar156 * dVar99 - dVar159 * dVar59;
        dVar137 = dVar156 * dVar106 - dVar159 * dVar72;
        dVar155 = dVar159 * dVar42 - dVar161 * dVar83;
        dVar160 = dVar159 * dVar104 - dVar161 * dVar88;
        dVar56 = dVar159 * dVar126 - dVar161 * dVar99;
        dVar114 = dVar159 * dVar128 - dVar161 * dVar106;
        dVar143 = dVar161 * dVar59 - dVar156 * dVar126;
        dVar150 = dVar161 * dVar72 - dVar156 * dVar128;
        dVar163 = dVar161 * dVar139 - dVar156 * dVar42;
        dVar167 = dVar161 * dVar142 - dVar156 * dVar104;
        dVar155 = dVar155 + dVar155;
        dVar160 = dVar160 + dVar160;
        dVar56 = dVar56 + dVar56;
        dVar114 = dVar114 + dVar114;
        dVar143 = dVar143 + dVar143;
        dVar150 = dVar150 + dVar150;
        dVar163 = dVar163 + dVar163;
        dVar167 = dVar167 + dVar167;
        dVar151 = dVar151 + dVar151;
        dVar152 = dVar152 + dVar152;
        dVar131 = dVar131 + dVar131;
        dVar137 = dVar137 + dVar137;
        auVar50._0_4_ =
             (float)(((dVar159 * dVar154 - dVar138 * dVar161) + dVar165 * dVar115 + dVar74) * dVar73
                    );
        auVar50._4_4_ =
             (float)(((dVar159 * dVar157 - dVar141 * dVar161) + dVar165 * dVar116 + dVar84) * dVar73
                    );
        auVar94._0_4_ =
             (float)(((dVar156 * dVar138 - dVar115 * dVar159) + dVar165 * dVar154 + dVar118) *
                    dVar43);
        auVar94._4_4_ =
             (float)(((dVar156 * dVar141 - dVar116 * dVar159) + dVar165 * dVar157 + dVar119) *
                    dVar43);
        auVar94._8_8_ = 0;
        auVar50._8_4_ = 0;
        auVar50._12_4_ =
             (float)(((dVar161 * dVar115 - dVar154 * dVar156) + dVar165 * dVar138 + dVar168) *
                    dVar82);
        auVar66._4_4_ =
             (float)(((dVar161 * dVar58 - dVar162 * dVar156) + dVar165 * dVar130 + dVar120) * dVar82
                    );
        auVar66._0_4_ =
             (float)(((dVar161 * dVar116 - dVar157 * dVar156) + dVar165 * dVar141 + dVar169) *
                    dVar82);
        auVar66._8_4_ = auVar94._0_4_;
        auVar66._12_4_ = auVar94._4_4_;
        auVar107 = insertps(auVar50,auVar94,0x20);
        puVar3 = (undefined4 *)(param_1 + -0x20 + lVar16);
        *puVar3 = auVar107._0_4_;
        puVar3[1] = auVar107._12_4_;
        puVar3[2] = auVar107._8_4_;
        puVar3[3] = auVar107._4_4_;
        auVar51._0_4_ =
             (float)(((dVar159 * dVar162 - dVar130 * dVar161) + dVar165 * dVar58 + dVar44) * dVar73)
        ;
        auVar51._4_4_ =
             (float)(((dVar159 * dVar166 - dVar136 * dVar161) + dVar165 * dVar61 + dVar57) * dVar73)
        ;
        auVar51._8_8_ = 0;
        auVar107 = insertps(auVar66,auVar51,0x20);
        puVar3 = (undefined4 *)(param_1 + -0x10 + lVar16);
        *puVar3 = auVar107._0_4_;
        puVar3[1] = auVar107._12_4_;
        puVar3[2] = auVar107._8_4_;
        puVar3[3] = auVar107._4_4_;
        pfVar9 = (float *)(param_1 + lVar16);
        *pfVar9 = (float)(((dVar156 * dVar130 - dVar58 * dVar159) + dVar165 * dVar162 + dVar90) *
                         dVar43);
        pfVar9[1] = auVar51._4_4_;
        pfVar9[2] = (float)(((dVar161 * dVar61 - dVar166 * dVar156) + dVar165 * dVar136 + dVar127) *
                           dVar82);
        pfVar9[3] = (float)(((dVar156 * dVar136 - dVar61 * dVar159) + dVar165 * dVar166 + dVar105) *
                           dVar43);
        auVar32._0_4_ =
             (float)(((dVar159 * dVar151 - dVar163 * dVar161) + dVar165 * dVar155 + dVar139) *
                    dVar73);
        auVar32._4_4_ =
             (float)(((dVar159 * dVar152 - dVar167 * dVar161) + dVar165 * dVar160 + dVar142) *
                    dVar73);
        auVar32._8_4_ = 0;
        auVar32._12_4_ =
             (float)(((dVar161 * dVar155 - dVar151 * dVar156) + dVar165 * dVar163 + dVar83) * dVar82
                    );
        auVar77._0_4_ =
             (float)(((dVar156 * dVar163 - dVar155 * dVar159) + dVar165 * dVar151 + dVar42) * dVar43
                    );
        auVar77._4_4_ =
             (float)(((dVar156 * dVar167 - dVar160 * dVar159) + dVar165 * dVar152 + dVar104) *
                    dVar43);
        auVar77._8_8_ = 0;
        auVar52._4_4_ =
             (float)(((dVar161 * dVar56 - dVar131 * dVar156) + dVar165 * dVar143 + dVar99) * dVar82)
        ;
        auVar52._0_4_ =
             (float)(((dVar161 * dVar160 - dVar152 * dVar156) + dVar165 * dVar167 + dVar88) * dVar82
                    );
        auVar52._8_4_ = auVar77._0_4_;
        auVar52._12_4_ = auVar77._4_4_;
        auVar107 = insertps(auVar32,auVar77,0x20);
        puVar3 = (undefined4 *)(param_2 + -0x20 + lVar16);
        *puVar3 = auVar107._0_4_;
        puVar3[1] = auVar107._12_4_;
        puVar3[2] = auVar107._8_4_;
        puVar3[3] = auVar107._4_4_;
        auVar33._0_4_ =
             (float)(((dVar159 * dVar131 - dVar143 * dVar161) + dVar165 * dVar56 + dVar59) * dVar73)
        ;
        auVar33._4_4_ =
             (float)(((dVar159 * dVar137 - dVar150 * dVar161) + dVar165 * dVar114 + dVar72) * dVar73
                    );
        auVar33._8_8_ = 0;
        auVar107 = insertps(auVar52,auVar33,0x20);
        puVar3 = (undefined4 *)(param_2 + -0x10 + lVar16);
        *puVar3 = auVar107._0_4_;
        puVar3[1] = auVar107._12_4_;
        puVar3[2] = auVar107._8_4_;
        puVar3[3] = auVar107._4_4_;
        pfVar9 = (float *)(param_2 + lVar16);
        *pfVar9 = (float)(((dVar156 * dVar143 - dVar56 * dVar159) + dVar165 * dVar131 + dVar126) *
                         dVar43);
        pfVar9[1] = auVar33._4_4_;
        pfVar9[2] = (float)(((dVar161 * dVar114 - dVar137 * dVar156) + dVar165 * dVar150 + dVar106)
                           * dVar82);
        pfVar9[3] = (float)(((dVar156 * dVar150 - dVar114 * dVar159) + dVar165 * dVar137 + dVar128)
                           * dVar43);
        lVar16 = lVar16 + 0x30;
        uVar15 = uVar15 + 4;
      } while ((int)uVar15 < (int)(uVar12 & 0xfffffffc));
      if ((int)param_6 <= (int)uVar15) {
        return;
      }
    }
    auVar67._0_4_ =
         -(uint)((int)(uVar15 | (uint)__xmm_00000003000000020000000100000000) < (int)param_6);
    auVar67._4_4_ =
         -(uint)((int)(uVar15 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_6);
    auVar67._8_4_ = -(uint)((int)(uVar15 | _UNK_150631e08) < (int)param_6);
    auVar67._12_4_ = -(uint)((int)(uVar15 | _UNK_150631e0c) < (int)param_6);
    uVar6 = (ulonglong)uVar15;
    lVar16 = uVar6 * 3;
    pauVar2 = (undefined1 (*) [16])(param_1 + uVar6 * 0xc);
    iVar13 = movmskps(uVar15,auVar67);
    bVar7 = (char)((char)iVar13 << 4) >> 4;
    if (iVar13 == 0xf) {
      auVar107 = *pauVar2;
      auVar62 = pauVar2[1];
      auVar35._0_4_ = auVar107._0_4_;
      auVar148 = insertps(auVar62,auVar107,0x8c);
      auVar35._4_4_ = auVar107._12_4_;
      auVar35._8_4_ = auVar62._8_4_;
      auVar35._12_4_ = *(undefined4 *)(pauVar2[2] + 4);
      auVar53._4_4_ = auVar62._0_4_;
      auVar53._0_4_ = auVar107._4_4_;
      auVar53._8_4_ = auVar62._12_4_;
      auVar53._12_4_ = *(undefined4 *)(pauVar2[2] + 8);
      auVar86._0_8_ = auVar148._0_8_;
      auVar86._8_4_ = *(undefined4 *)pauVar2[2];
      auVar86._12_4_ = *(undefined4 *)(pauVar2[2] + 0xc);
      pfVar9 = (float *)(param_2 + uVar6 * 0xc);
      auVar107 = *(undefined1 (*) [16])(param_2 + uVar6 * 0xc);
      auVar62 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar6 * 0xc);
      puVar3 = (undefined4 *)(param_2 + 0x20 + uVar6 * 0xc);
      auVar134._0_4_ = auVar107._0_4_;
      auVar148 = insertps(auVar62,auVar107,0x8c);
      auVar134._4_4_ = auVar107._12_4_;
      auVar134._8_4_ = auVar62._8_4_;
      auVar134._12_4_ = puVar3[1];
      auVar147._4_4_ = auVar62._0_4_;
      auVar147._0_4_ = auVar107._4_4_;
      auVar147._8_4_ = auVar62._12_4_;
      auVar147._12_4_ = puVar3[2];
      auVar140._0_8_ = auVar148._0_8_;
      auVar140._8_4_ = *puVar3;
      auVar140._12_4_ = puVar3[3];
    }
    else {
      auVar34._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar67._0_4_;
      auVar34._4_4_ = _UNK_150b50da4 & auVar67._4_4_;
      auVar34._8_4_ = _UNK_150b50da8 & auVar67._8_4_;
      auVar34._12_4_ = _UNK_150b50dac & auVar67._12_4_;
      lVar17 = extractps(auVar34,1);
      lVar8 = extractps(auVar34,2);
      lVar10 = extractps(auVar34,3);
      auVar107 = insertps(ZEXT416(*(uint *)*pauVar2),*(undefined4 *)(*pauVar2 + lVar17),0x10);
      auVar107 = insertps(auVar107,*(undefined4 *)(*pauVar2 + lVar8),0x20);
      auVar35 = insertps(auVar107,*(undefined4 *)(*pauVar2 + lVar10),0x30);
      auVar107 = ___xmm_000000280000001c0000001000000004 & auVar67;
      auVar62 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar107._0_4_)),
                         *(undefined4 *)(*pauVar2 + auVar107._4_4_),0x10);
      auVar62 = insertps(auVar62,*(undefined4 *)(*pauVar2 + auVar107._8_4_),0x20);
      auVar53 = insertps(auVar62,*(undefined4 *)(*pauVar2 + auVar107._12_4_),0x30);
      auVar67 = auVar67 & ___xmm_0000002c000000200000001400000008;
      auVar62 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar67._0_4_)),
                         *(undefined4 *)(*pauVar2 + auVar67._4_4_),0x10);
      auVar62 = insertps(auVar62,*(undefined4 *)(*pauVar2 + auVar67._8_4_),0x20);
      auVar86 = insertps(auVar62,*(undefined4 *)(*pauVar2 + auVar67._12_4_),0x30);
      pfVar9 = (float *)(param_2 + uVar6 * 0xc);
      auVar62 = insertps(ZEXT416(*(uint *)(param_2 + uVar6 * 0xc)),
                         *(undefined4 *)(lVar17 + (longlong)pfVar9),0x10);
      auVar62 = insertps(auVar62,*(undefined4 *)(lVar8 + (longlong)pfVar9),0x20);
      auVar134 = insertps(auVar62,*(undefined4 *)(lVar10 + (longlong)pfVar9),0x30);
      auVar62 = insertps(ZEXT416(*(uint *)((ulonglong)auVar107._0_4_ + (longlong)pfVar9)),
                         *(undefined4 *)((ulonglong)auVar107._4_4_ + (longlong)pfVar9),0x10);
      auVar62 = insertps(auVar62,*(undefined4 *)((ulonglong)auVar107._8_4_ + (longlong)pfVar9),0x20)
      ;
      auVar147 = insertps(auVar62,*(undefined4 *)((ulonglong)auVar107._12_4_ + (longlong)pfVar9),
                          0x30);
      auVar107 = insertps(ZEXT416(*(uint *)((ulonglong)auVar67._0_4_ + (longlong)pfVar9)),
                          *(undefined4 *)((ulonglong)auVar67._4_4_ + (longlong)pfVar9),0x10);
      auVar107 = insertps(auVar107,*(undefined4 *)((ulonglong)auVar67._8_4_ + (longlong)pfVar9),0x20
                         );
      auVar140 = insertps(auVar107,*(undefined4 *)((ulonglong)auVar67._12_4_ + (longlong)pfVar9),
                          0x30);
    }
    dVar42 = param_4[1];
    dVar56 = param_4[1];
    dVar114 = param_4[2];
    dVar104 = param_4[2];
    dVar44 = ((double)auVar35._8_4_ * param_5 + *param_4) - dVar100;
    dVar58 = ((double)auVar35._12_4_ * param_5 + *param_4) - dVar100;
    dVar151 = ((double)auVar35._0_4_ * param_5 + *param_4) - dVar100;
    dVar100 = ((double)auVar35._4_4_ * param_5 + *param_4) - dVar100;
    dVar106 = ((double)auVar53._8_4_ * param_5 + dVar42) - dVar117;
    dVar115 = ((double)auVar53._12_4_ * param_5 + dVar56) - dVar117;
    dVar128 = ((double)auVar53._0_4_ * param_5 + dVar42) - dVar117;
    dVar117 = ((double)auVar53._4_4_ * param_5 + dVar56) - dVar117;
    dVar155 = ((double)auVar86._8_4_ * param_5 + dVar114) - dVar60;
    dVar157 = ((double)auVar86._12_4_ * param_5 + dVar104) - dVar60;
    dVar61 = ((double)auVar86._0_4_ * param_5 + dVar114) - dVar60;
    dVar60 = ((double)auVar86._4_4_ * param_5 + dVar104) - dVar60;
    dVar141 = dVar156 * dVar128 - dVar159 * dVar151;
    dVar143 = dVar156 * dVar117 - dVar159 * dVar100;
    dVar160 = dVar156 * dVar106 - dVar159 * dVar44;
    dVar163 = dVar156 * dVar115 - dVar159 * dVar58;
    dVar42 = dVar159 * dVar61 - dVar161 * dVar128;
    dVar104 = dVar159 * dVar60 - dVar161 * dVar117;
    dVar88 = dVar159 * dVar155 - dVar161 * dVar106;
    dVar99 = dVar159 * dVar157 - dVar161 * dVar115;
    dVar130 = dVar161 * dVar151 - dVar156 * dVar61;
    dVar136 = dVar161 * dVar100 - dVar156 * dVar60;
    dVar126 = dVar161 * dVar44 - dVar156 * dVar155;
    dVar127 = dVar161 * dVar58 - dVar156 * dVar157;
    dVar42 = dVar42 + dVar42;
    dVar104 = dVar104 + dVar104;
    dVar88 = dVar88 + dVar88;
    dVar99 = dVar99 + dVar99;
    dVar130 = dVar130 + dVar130;
    dVar136 = dVar136 + dVar136;
    dVar126 = dVar126 + dVar126;
    dVar127 = dVar127 + dVar127;
    dVar141 = dVar141 + dVar141;
    dVar143 = dVar143 + dVar143;
    dVar160 = dVar160 + dVar160;
    dVar163 = dVar163 + dVar163;
    dVar56 = (double)(float)(auVar134._8_4_ ^ _UNK_150651578);
    dVar114 = (double)(float)(auVar134._12_4_ ^ _UNK_15065157c);
    dVar72 = (double)(float)(auVar147._8_4_ ^ _UNK_150651578);
    dVar83 = (double)(float)(auVar147._12_4_ ^ _UNK_15065157c);
    dVar138 = dVar156 * dVar72 - dVar159 * dVar56;
    dVar139 = dVar156 * dVar83 - dVar159 * dVar114;
    dVar116 = (double)(float)(auVar134._0_4_ ^ __xmm_80000000800000008000000080000000);
    dVar118 = (double)(float)(auVar134._4_4_ ^ _UNK_150651574);
    dVar57 = (double)(float)(auVar147._0_4_ ^ __xmm_80000000800000008000000080000000);
    dVar59 = (double)(float)(auVar147._4_4_ ^ _UNK_150651574);
    dVar90 = dVar156 * dVar57 - dVar159 * dVar116;
    dVar105 = dVar156 * dVar59 - dVar159 * dVar118;
    dVar162 = (double)(float)(auVar140._8_4_ ^ _UNK_150651578);
    dVar166 = (double)(float)(auVar140._12_4_ ^ _UNK_15065157c);
    dVar142 = dVar159 * dVar162 - dVar161 * dVar72;
    dVar150 = dVar159 * dVar166 - dVar161 * dVar83;
    dVar131 = (double)(float)(auVar140._0_4_ ^ __xmm_80000000800000008000000080000000);
    dVar137 = (double)(float)(auVar140._4_4_ ^ _UNK_150651574);
    dVar74 = dVar159 * dVar131 - dVar161 * dVar57;
    dVar84 = dVar159 * dVar137 - dVar161 * dVar59;
    dVar119 = dVar161 * dVar56 - dVar156 * dVar162;
    dVar120 = dVar161 * dVar114 - dVar156 * dVar166;
    dVar152 = dVar161 * dVar116 - dVar156 * dVar131;
    dVar154 = dVar161 * dVar118 - dVar156 * dVar137;
    dVar142 = dVar142 + dVar142;
    dVar150 = dVar150 + dVar150;
    dVar74 = dVar74 + dVar74;
    dVar84 = dVar84 + dVar84;
    dVar119 = dVar119 + dVar119;
    dVar120 = dVar120 + dVar120;
    dVar152 = dVar152 + dVar152;
    dVar154 = dVar154 + dVar154;
    dVar138 = dVar138 + dVar138;
    dVar139 = dVar139 + dVar139;
    dVar90 = dVar90 + dVar90;
    dVar105 = dVar105 + dVar105;
    fVar39 = (float)(((dVar159 * dVar163 - dVar127 * dVar161) + dVar165 * dVar99 + dVar58) * dVar73)
    ;
    uVar22 = CONCAT44(fVar39,(float)(((dVar159 * dVar160 - dVar126 * dVar161) +
                                     dVar165 * dVar88 + dVar44) * dVar73));
    fVar129 = (float)(((dVar159 * dVar141 - dVar130 * dVar161) + dVar165 * dVar42 + dVar151) *
                     dVar73);
    auVar96._0_8_ =
         CONCAT44((float)(((dVar159 * dVar143 - dVar136 * dVar161) + dVar165 * dVar104 + dVar100) *
                         dVar73),fVar129);
    auVar96._8_8_ = uVar22;
    fVar38 = (float)(((dVar161 * dVar88 - dVar160 * dVar156) + dVar165 * dVar126 + dVar106) * dVar82
                    );
    fVar40 = (float)(((dVar161 * dVar99 - dVar163 * dVar156) + dVar165 * dVar127 + dVar115) * dVar82
                    );
    auVar149._12_4_ = fVar40;
    auVar149._8_4_ = fVar38;
    auVar149._0_4_ =
         (float)(((dVar161 * dVar42 - dVar141 * dVar156) + dVar165 * dVar130 + dVar128) * dVar82);
    auVar149._4_4_ =
         (float)(((dVar161 * dVar104 - dVar143 * dVar156) + dVar165 * dVar136 + dVar117) * dVar82);
    fVar41 = (float)(((dVar156 * dVar126 - dVar88 * dVar159) + dVar165 * dVar160 + dVar155) * dVar43
                    );
    fVar103 = (float)(((dVar156 * dVar127 - dVar99 * dVar159) + dVar165 * dVar163 + dVar157) *
                     dVar43);
    auVar79._12_4_ = fVar103;
    auVar79._8_4_ = fVar41;
    auVar79._0_4_ =
         (float)(((dVar156 * dVar130 - dVar42 * dVar159) + dVar165 * dVar141 + dVar61) * dVar43);
    auVar79._4_4_ =
         (float)(((dVar156 * dVar136 - dVar104 * dVar159) + dVar165 * dVar143 + dVar60) * dVar43);
    fVar55 = (float)(((dVar159 * dVar90 - dVar152 * dVar161) + dVar165 * dVar74 + dVar116) * dVar73)
    ;
    auVar71._0_8_ =
         CONCAT44((float)(((dVar159 * dVar105 - dVar154 * dVar161) + dVar165 * dVar84 + dVar118) *
                         dVar73),fVar55);
    fVar20 = (float)(((dVar159 * dVar139 - dVar120 * dVar161) + dVar165 * dVar150 + dVar114) *
                    dVar73);
    uVar21 = CONCAT44(fVar20,(float)(((dVar159 * dVar138 - dVar119 * dVar161) +
                                     dVar165 * dVar142 + dVar56) * dVar73));
    auVar54._0_4_ =
         (float)(((dVar161 * dVar74 - dVar90 * dVar156) + dVar165 * dVar152 + dVar57) * dVar82);
    auVar54._4_4_ =
         (float)(((dVar161 * dVar84 - dVar105 * dVar156) + dVar165 * dVar154 + dVar59) * dVar82);
    auVar71._8_8_ = uVar21;
    fVar102 = (float)(((dVar161 * dVar142 - dVar138 * dVar156) + dVar165 * dVar119 + dVar72) *
                     dVar82);
    fVar37 = (float)(((dVar161 * dVar150 - dVar139 * dVar156) + dVar165 * dVar120 + dVar83) * dVar82
                    );
    auVar54._12_4_ = fVar37;
    auVar54._8_4_ = fVar102;
    auVar36._0_4_ =
         (float)(((dVar156 * dVar152 - dVar74 * dVar159) + dVar165 * dVar90 + dVar131) * dVar43);
    auVar36._4_4_ =
         (float)(((dVar156 * dVar154 - dVar84 * dVar159) + dVar165 * dVar105 + dVar137) * dVar43);
    auVar36._12_4_ =
         (float)(((dVar156 * dVar120 - dVar150 * dVar159) + dVar165 * dVar139 + dVar166) * dVar43);
    auVar36._8_4_ =
         (float)(((dVar156 * dVar119 - dVar142 * dVar159) + dVar165 * dVar138 + dVar162) * dVar43);
    if ((~bVar7 & 0xf) == 0) {
      auVar113._8_8_ = uVar22;
      auVar113._0_8_ = auVar96._0_8_;
      auVar107 = insertps(auVar113,auVar149,0x30);
      auVar125._4_4_ = fVar38;
      auVar125._0_4_ = auVar149._4_4_;
      auVar125._8_4_ = auVar79._0_4_;
      auVar125._12_4_ = auVar79._4_4_;
      auVar107 = insertps(auVar107,auVar79,0x20);
      *(int *)*pauVar2 = auVar107._0_4_;
      *(int *)(*pauVar2 + 4) = auVar107._12_4_;
      *(int *)(*pauVar2 + 8) = auVar107._8_4_;
      *(int *)(*pauVar2 + 0xc) = auVar107._4_4_;
      auVar107 = blendps(auVar125,auVar96,4);
      *(int *)pauVar2[1] = auVar107._0_4_;
      *(int *)(pauVar2[1] + 4) = auVar107._12_4_;
      *(int *)(pauVar2[1] + 8) = auVar107._8_4_;
      *(int *)(pauVar2[1] + 0xc) = auVar107._4_4_;
      *(float *)pauVar2[2] = fVar41;
      *(float *)(pauVar2[2] + 4) = fVar39;
      *(float *)(pauVar2[2] + 8) = fVar40;
      *(float *)(pauVar2[2] + 0xc) = fVar103;
      auVar80._8_8_ = uVar21;
      auVar80._0_8_ = auVar71._0_8_;
      auVar107 = insertps(auVar80,auVar54,0x30);
      auVar107 = insertps(auVar107,auVar36,0x20);
      *pfVar9 = auVar107._0_4_;
      pfVar9[1] = auVar107._12_4_;
      pfVar9[2] = auVar107._8_4_;
      pfVar9[3] = auVar107._4_4_;
      auVar81._4_4_ = fVar102;
      auVar81._0_4_ = auVar54._4_4_;
      auVar81._8_4_ = auVar36._0_4_;
      auVar81._12_4_ = auVar36._4_4_;
      auVar107 = blendps(auVar81,auVar71,4);
      puVar3 = (undefined4 *)(param_2 + 0x10 + uVar6 * 0xc);
      *puVar3 = auVar107._0_4_;
      puVar3[1] = auVar107._12_4_;
      puVar3[2] = auVar107._8_4_;
      puVar3[3] = auVar107._4_4_;
      auVar45._4_4_ = auVar54._0_4_;
      auVar45._0_4_ = fVar37;
      auVar45._8_4_ = fVar20;
LAB_140cc50ac:
      puVar3 = (undefined4 *)(param_2 + 0x20 + lVar16 * 4);
      *puVar3 = auVar36._8_4_;
      puVar3[1] = auVar45._8_4_;
      puVar3[2] = auVar45._0_4_;
      puVar3[3] = auVar36._12_4_;
      return;
    }
    if ((bVar7 & 1) != 0) {
      *(float *)*pauVar2 = fVar129;
    }
    if ((bVar7 & 2) != 0) {
      uVar21 = extractps(auVar96,1);
      *(undefined8 *)(*pauVar2 + 0xc) = uVar21;
    }
    if ((bVar7 & 4) != 0) {
      uVar21 = extractps(auVar96,2);
      *(undefined8 *)(pauVar2[1] + 8) = uVar21;
    }
    if ((char)bVar7 < '\0') {
      uVar21 = extractps(auVar96,3);
      *(undefined8 *)(pauVar2[2] + 4) = uVar21;
    }
    if ((bVar7 & 1) != 0) {
      *(float *)(*pauVar2 + 4) = auVar149._0_4_;
    }
    if ((bVar7 & 2) != 0) {
      uVar21 = extractps(auVar149,1);
      *(undefined8 *)pauVar2[1] = uVar21;
    }
    if ((bVar7 & 4) != 0) {
      uVar21 = extractps(auVar149,2);
      *(undefined8 *)(pauVar2[1] + 0xc) = uVar21;
    }
    if ((char)bVar7 < '\0') {
      uVar21 = extractps(auVar149,3);
      *(undefined8 *)(pauVar2[2] + 8) = uVar21;
    }
    if ((bVar7 & 1) != 0) {
      *(float *)(*pauVar2 + 8) = auVar79._0_4_;
    }
    if ((bVar7 & 2) != 0) {
      uVar21 = extractps(auVar79,1);
      *(undefined8 *)(pauVar2[1] + 4) = uVar21;
    }
    if ((bVar7 & 4) != 0) {
      uVar21 = extractps(auVar79,2);
      *(undefined8 *)pauVar2[2] = uVar21;
    }
    if ((char)bVar7 < '\0') {
      uVar21 = extractps(auVar79,3);
      *(undefined8 *)(pauVar2[2] + 0xc) = uVar21;
    }
    if ((bVar7 & 1) != 0) {
      *pfVar9 = fVar55;
    }
    if ((bVar7 & 2) != 0) {
      uVar21 = extractps(auVar71,1);
      *(undefined8 *)(param_2 + 0xc + uVar6 * 0xc) = uVar21;
    }
    if ((bVar7 & 4) != 0) {
      uVar21 = extractps(auVar71,2);
      *(undefined8 *)(param_2 + 0x18 + uVar6 * 0xc) = uVar21;
    }
    bVar5 = bVar7 & 0xf;
    bVar4 = bVar5;
    if (-1 < (char)bVar7) goto joined_r0x000140cc4fdc;
    uVar21 = extractps(auVar71,3);
    *(undefined8 *)(param_2 + 0x24 + uVar6 * 0xc) = uVar21;
  }
  else {
    auVar121._0_4_ = ~uVar15 & auVar107._0_4_;
    auVar121._4_4_ = ~uVar19 & auVar107._4_4_;
    auVar121._8_4_ = ~uVar12 & auVar107._8_4_;
    auVar121._12_4_ = ~uVar18 & auVar107._12_4_;
    auVar110._0_4_ = uVar89 & auVar121._0_4_;
    auVar110._4_4_ = uVar97 & auVar121._4_4_;
    auVar110._8_4_ = uVar98 & auVar121._8_4_;
    auVar110._12_4_ = uVar101 & auVar121._12_4_;
    iVar11 = movmskps((int)param_3,auVar110);
    if (iVar11 == 0) {
      auVar110 = ZEXT816(0);
LAB_140cc2c9a:
      auVar109._8_4_ = 0xffffffff;
      auVar109._0_8_ = 0xffffffffffffffff;
      auVar109._12_4_ = 0xffffffff;
      dVar104 = (double)(___xmm_7fcfffffffffffff7fcfffffffffffff -
                        (___xmm_7fe00000000000007fe0000000000000 & (ulonglong)dVar73));
      dVar114 = (double)((longlong)_UNK_150b51628 - (_UNK_150b51678 & (ulonglong)dVar82));
      dVar42 = (double)(___xmm_7fcfffffffffffff7fcfffffffffffff -
                       ((ulonglong)dVar43 & ___xmm_7fe00000000000007fe0000000000000));
      auVar132._0_4_ = (float)(dVar73 * dVar104);
      auVar132._4_4_ = (float)(dVar82 * dVar114);
      fVar102 = (float)(dVar43 * dVar42);
      auVar122._0_8_ = CONCAT44((float)(_UNK_150b51628 * 0.0),fVar102);
      auVar122._8_8_ = 0;
      auVar132._8_8_ = auVar122._0_8_;
      auVar123 = rcpps(auVar122,auVar132);
      auVar109 = auVar109 ^ auVar110;
      dVar42 = (double)((_UNK_15076ba38 - fVar102 * auVar123._8_4_) * auVar123._8_4_) * dVar42;
      dVar56 = (double)((_UNK_15076ba3c - (float)(_UNK_150b51628 * 0.0) * auVar123._12_4_) *
                       auVar123._12_4_) * _UNK_150b51628;
      dVar104 = (double)((___xmm_40000000400000004000000040000000 - auVar132._0_4_ * auVar123._0_4_)
                        * auVar123._0_4_) * dVar104;
      dVar114 = (double)((_UNK_15076ba34 - auVar132._4_4_ * auVar123._4_4_) * auVar123._4_4_) *
                dVar114;
      dVar104 = (___xmm_40000000000000004000000000000000 - dVar73 * dVar104) * dVar104;
      dVar114 = (_UNK_150689698 - dVar82 * dVar114) * dVar114;
      dVar42 = (___xmm_40000000000000004000000000000000 - dVar43 * dVar42) * dVar42;
      dVar56 = (_UNK_150689698 - dVar56 * 0.0) * dVar56;
      auVar144._0_8_ = (___xmm_40000000000000004000000000000000 - dVar43 * dVar42) * dVar42;
      auVar144._8_8_ = (_UNK_150689698 - dVar56 * 0.0) * dVar56;
      auVar92._0_8_ = (___xmm_40000000000000004000000000000000 - dVar73 * dVar104) * dVar104;
      auVar92._8_8_ = (_UNK_150689698 - dVar82 * dVar114) * dVar114;
      auVar23._4_4_ = auVar109._0_4_;
      auVar23._0_4_ = auVar109._0_4_;
      auVar23._8_4_ = auVar109._4_4_;
      auVar23._12_4_ = auVar109._4_4_;
      auVar148 = blendvps(auVar148,auVar92,auVar23);
      auVar24._4_4_ = auVar109._8_4_;
      auVar24._0_4_ = auVar109._8_4_;
      auVar24._8_4_ = auVar109._12_4_;
      auVar24._12_4_ = auVar109._12_4_;
      auVar107 = blendvps(auVar107,auVar144,auVar24);
    }
    else {
      auVar46._0_4_ = (float)dVar73;
      auVar46._4_4_ = (float)dVar82;
      fVar102 = (float)dVar43;
      auVar46._8_4_ = fVar102;
      auVar46._12_4_ = 0;
      auVar107 = rcpps(ZEXT416((uint)fVar102),auVar46);
      dVar42 = (double)((___xmm_40000000400000004000000040000000 - auVar46._0_4_ * auVar107._0_4_) *
                       auVar107._0_4_);
      dVar56 = (double)((_UNK_15076ba34 - auVar46._4_4_ * auVar107._4_4_) * auVar107._4_4_);
      dVar104 = (double)((_UNK_15076ba38 - fVar102 * auVar107._8_4_) * auVar107._8_4_);
      dVar114 = (double)((_UNK_15076ba3c - auVar107._12_4_ * 0.0) * auVar107._12_4_);
      dVar104 = (___xmm_40000000000000004000000000000000 - dVar43 * dVar104) * dVar104;
      dVar114 = (_UNK_150689698 - dVar114 * 0.0) * dVar114;
      dVar42 = (___xmm_40000000000000004000000000000000 - dVar73 * dVar42) * dVar42;
      dVar56 = (_UNK_150689698 - dVar82 * dVar56) * dVar56;
      auVar148._0_8_ = (___xmm_40000000000000004000000000000000 - dVar73 * dVar42) * dVar42;
      auVar148._8_8_ = (_UNK_150689698 - dVar82 * dVar56) * dVar56;
      auVar107._0_8_ = (___xmm_40000000000000004000000000000000 - dVar43 * dVar104) * dVar104;
      auVar107._8_8_ = (_UNK_150689698 - dVar114 * 0.0) * dVar114;
      uVar14 = movmskps(iVar13,auVar121);
      if ((char)uVar14 != (char)iVar11) goto LAB_140cc2c9a;
    }
    auVar62 = blendvps(auVar148,ZEXT816(0),auVar62);
    auVar107 = blendvps(auVar107,ZEXT816(0),auVar25);
    uVar12 = param_6 + 3;
    if (-1 < (int)param_6) {
      uVar12 = param_6;
    }
    dVar73 = auVar62._0_8_;
    dVar82 = auVar62._8_8_;
    dVar43 = auVar107._0_8_;
    if ((int)(uVar12 & 0xfffffffc) < 1) {
      uVar15 = 0;
      if ((int)param_6 < 1) {
        return;
      }
    }
    else {
      lVar16 = 0x20;
      uVar15 = 0;
      do {
        auVar107 = *(undefined1 (*) [16])(param_1 + -0x20 + lVar16);
        auVar62 = *(undefined1 (*) [16])(param_1 + -0x10 + lVar16);
        pfVar9 = (float *)(param_1 + lVar16);
        auVar25 = insertps(auVar62,auVar107,0x8c);
        auVar148 = *(undefined1 (*) [16])(param_2 + -0x20 + lVar16);
        auVar123 = *(undefined1 (*) [16])(param_2 + -0x10 + lVar16);
        puVar1 = (uint *)(param_2 + lVar16);
        auVar110 = insertps(auVar123,auVar148,0x8c);
        dVar42 = param_4[1];
        dVar56 = param_4[1];
        dVar104 = param_4[2];
        dVar114 = param_4[2];
        dVar84 = ((double)auVar107._0_4_ * param_5 + *param_4) - dVar100;
        dVar88 = ((double)auVar107._12_4_ * param_5 + *param_4) - dVar100;
        dVar143 = ((double)auVar62._8_4_ * param_5 + *param_4) - dVar100;
        dVar150 = ((double)pfVar9[1] * param_5 + *param_4) - dVar100;
        dVar118 = ((double)auVar107._4_4_ * param_5 + dVar42) - dVar117;
        dVar126 = ((double)auVar62._0_4_ * param_5 + dVar56) - dVar117;
        dVar105 = ((double)auVar62._12_4_ * param_5 + dVar42) - dVar117;
        dVar115 = ((double)pfVar9[2] * param_5 + dVar56) - dVar117;
        dVar90 = ((double)auVar25._0_4_ * param_5 + dVar104) - dVar60;
        dVar99 = ((double)auVar25._4_4_ * param_5 + dVar114) - dVar60;
        dVar104 = ((double)*pfVar9 * param_5 + dVar104) - dVar60;
        dVar57 = ((double)pfVar9[3] * param_5 + dVar114) - dVar60;
        dVar138 = dVar156 * dVar118 - dVar159 * dVar84;
        dVar141 = dVar156 * dVar126 - dVar159 * dVar88;
        dVar61 = dVar156 * dVar105 - dVar159 * dVar143;
        dVar72 = dVar156 * dVar115 - dVar159 * dVar150;
        dVar74 = dVar159 * dVar90 - dVar161 * dVar118;
        dVar83 = dVar159 * dVar99 - dVar161 * dVar126;
        dVar151 = dVar159 * dVar104 - dVar161 * dVar105;
        dVar154 = dVar159 * dVar57 - dVar161 * dVar115;
        dVar162 = dVar161 * dVar143 - dVar156 * dVar104;
        dVar166 = dVar161 * dVar150 - dVar156 * dVar57;
        dVar130 = dVar161 * dVar84 - dVar156 * dVar90;
        dVar136 = dVar161 * dVar88 - dVar156 * dVar99;
        dVar74 = dVar74 + dVar74;
        dVar83 = dVar83 + dVar83;
        dVar151 = dVar151 + dVar151;
        dVar154 = dVar154 + dVar154;
        dVar130 = dVar130 + dVar130;
        dVar136 = dVar136 + dVar136;
        dVar162 = dVar162 + dVar162;
        dVar166 = dVar166 + dVar166;
        dVar138 = dVar138 + dVar138;
        dVar141 = dVar141 + dVar141;
        dVar61 = dVar61 + dVar61;
        dVar72 = dVar72 + dVar72;
        dVar119 = (double)(float)(auVar148._0_4_ ^ __xmm_80000000800000008000000080000000);
        dVar127 = (double)(float)(auVar148._12_4_ ^ _UNK_150651574);
        dVar114 = (double)(float)(auVar123._8_4_ ^ _UNK_150651578);
        dVar58 = (double)(float)(puVar1[1] ^ _UNK_15065157c);
        dVar131 = (double)(float)(auVar123._12_4_ ^ _UNK_150651578);
        dVar137 = (double)(float)(puVar1[2] ^ _UNK_15065157c);
        dVar106 = (double)(float)(auVar148._4_4_ ^ __xmm_80000000800000008000000080000000);
        dVar116 = (double)(float)(auVar123._0_4_ ^ _UNK_150651574);
        local_238 = auVar110._0_4_;
        uStack_234 = auVar110._4_4_;
        dVar152 = (double)(float)(*puVar1 ^ _UNK_150651578);
        dVar155 = (double)(float)(puVar1[3] ^ _UNK_15065157c);
        dVar163 = (double)(float)(local_238 ^ __xmm_80000000800000008000000080000000);
        dVar167 = (double)(float)(uStack_234 ^ _UNK_150651574);
        dVar139 = dVar156 * dVar106 - dVar159 * dVar119;
        dVar142 = dVar156 * dVar116 - dVar159 * dVar127;
        dVar120 = dVar156 * dVar131 - dVar159 * dVar114;
        dVar128 = dVar156 * dVar137 - dVar159 * dVar58;
        dVar157 = dVar159 * dVar163 - dVar161 * dVar106;
        dVar160 = dVar159 * dVar167 - dVar161 * dVar116;
        dVar42 = dVar159 * dVar152 - dVar161 * dVar131;
        dVar56 = dVar159 * dVar155 - dVar161 * dVar137;
        dVar44 = dVar161 * dVar114 - dVar156 * dVar152;
        dVar59 = dVar161 * dVar58 - dVar156 * dVar155;
        dVar168 = dVar161 * dVar119 - dVar156 * dVar163;
        dVar169 = dVar161 * dVar127 - dVar156 * dVar167;
        dVar157 = dVar157 + dVar157;
        dVar160 = dVar160 + dVar160;
        dVar42 = dVar42 + dVar42;
        dVar56 = dVar56 + dVar56;
        dVar44 = dVar44 + dVar44;
        dVar59 = dVar59 + dVar59;
        dVar168 = dVar168 + dVar168;
        dVar169 = dVar169 + dVar169;
        dVar139 = dVar139 + dVar139;
        dVar142 = dVar142 + dVar142;
        dVar120 = dVar120 + dVar120;
        dVar128 = dVar128 + dVar128;
        auVar63._0_4_ =
             (float)(((dVar159 * dVar138 - dVar130 * dVar161) + dVar165 * dVar74 + dVar84) * dVar73)
        ;
        auVar63._4_4_ =
             (float)(((dVar159 * dVar141 - dVar136 * dVar161) + dVar165 * dVar83 + dVar88) * dVar73)
        ;
        auVar85._0_4_ =
             (float)(((dVar156 * dVar130 - dVar74 * dVar159) + dVar165 * dVar138 + dVar90) * dVar43)
        ;
        auVar85._4_4_ =
             (float)(((dVar156 * dVar136 - dVar83 * dVar159) + dVar165 * dVar141 + dVar99) * dVar43)
        ;
        auVar85._8_8_ = 0;
        auVar63._8_4_ = 0;
        auVar63._12_4_ =
             (float)(((dVar161 * dVar74 - dVar138 * dVar156) + dVar165 * dVar130 + dVar118) * dVar82
                    );
        auVar75._4_4_ =
             (float)(((dVar161 * dVar151 - dVar61 * dVar156) + dVar165 * dVar162 + dVar105) * dVar82
                    );
        auVar75._0_4_ =
             (float)(((dVar161 * dVar83 - dVar141 * dVar156) + dVar165 * dVar136 + dVar126) * dVar82
                    );
        auVar75._8_4_ = auVar85._0_4_;
        auVar75._12_4_ = auVar85._4_4_;
        auVar107 = insertps(auVar63,auVar85,0x20);
        puVar3 = (undefined4 *)(param_1 + -0x20 + lVar16);
        *puVar3 = auVar107._0_4_;
        puVar3[1] = auVar107._12_4_;
        puVar3[2] = auVar107._8_4_;
        puVar3[3] = auVar107._4_4_;
        auVar64._0_4_ =
             (float)(((dVar159 * dVar61 - dVar162 * dVar161) + dVar165 * dVar151 + dVar143) * dVar73
                    );
        auVar64._4_4_ =
             (float)(((dVar159 * dVar72 - dVar166 * dVar161) + dVar165 * dVar154 + dVar150) * dVar73
                    );
        auVar64._8_8_ = 0;
        auVar107 = insertps(auVar75,auVar64,0x20);
        puVar3 = (undefined4 *)(param_1 + -0x10 + lVar16);
        *puVar3 = auVar107._0_4_;
        puVar3[1] = auVar107._12_4_;
        puVar3[2] = auVar107._8_4_;
        puVar3[3] = auVar107._4_4_;
        pfVar9 = (float *)(param_1 + lVar16);
        *pfVar9 = (float)(((dVar156 * dVar162 - dVar151 * dVar159) + dVar165 * dVar61 + dVar104) *
                         dVar43);
        pfVar9[1] = auVar64._4_4_;
        pfVar9[2] = (float)(((dVar161 * dVar154 - dVar72 * dVar156) + dVar165 * dVar166 + dVar115) *
                           dVar82);
        pfVar9[3] = (float)(((dVar156 * dVar166 - dVar154 * dVar159) + dVar165 * dVar72 + dVar57) *
                           dVar43);
        auVar26._0_4_ =
             (float)(((dVar159 * dVar139 - dVar168 * dVar161) + dVar165 * dVar157 + dVar119) *
                    dVar73);
        auVar26._4_4_ =
             (float)(((dVar159 * dVar142 - dVar169 * dVar161) + dVar165 * dVar160 + dVar127) *
                    dVar73);
        auVar26._8_4_ = 0;
        auVar26._12_4_ =
             (float)(((dVar161 * dVar157 - dVar139 * dVar156) + dVar165 * dVar168 + dVar106) *
                    dVar82);
        auVar76._0_4_ =
             (float)(((dVar156 * dVar168 - dVar157 * dVar159) + dVar165 * dVar139 + dVar163) *
                    dVar43);
        auVar76._4_4_ =
             (float)(((dVar156 * dVar169 - dVar160 * dVar159) + dVar165 * dVar142 + dVar167) *
                    dVar43);
        auVar76._8_8_ = 0;
        auVar48._4_4_ =
             (float)(((dVar161 * dVar42 - dVar120 * dVar156) + dVar165 * dVar44 + dVar131) * dVar82)
        ;
        auVar48._0_4_ =
             (float)(((dVar161 * dVar160 - dVar142 * dVar156) + dVar165 * dVar169 + dVar116) *
                    dVar82);
        auVar48._8_4_ = auVar76._0_4_;
        auVar48._12_4_ = auVar76._4_4_;
        auVar107 = insertps(auVar26,auVar76,0x20);
        puVar3 = (undefined4 *)(param_2 + -0x20 + lVar16);
        *puVar3 = auVar107._0_4_;
        puVar3[1] = auVar107._12_4_;
        puVar3[2] = auVar107._8_4_;
        puVar3[3] = auVar107._4_4_;
        auVar27._0_4_ =
             (float)(((dVar159 * dVar120 - dVar44 * dVar161) + dVar165 * dVar42 + dVar114) * dVar73)
        ;
        auVar27._4_4_ =
             (float)(((dVar159 * dVar128 - dVar59 * dVar161) + dVar165 * dVar56 + dVar58) * dVar73);
        auVar27._8_8_ = 0;
        auVar107 = insertps(auVar48,auVar27,0x20);
        puVar3 = (undefined4 *)(param_2 + -0x10 + lVar16);
        *puVar3 = auVar107._0_4_;
        puVar3[1] = auVar107._12_4_;
        puVar3[2] = auVar107._8_4_;
        puVar3[3] = auVar107._4_4_;
        pfVar9 = (float *)(param_2 + lVar16);
        *pfVar9 = (float)(((dVar156 * dVar44 - dVar42 * dVar159) + dVar165 * dVar120 + dVar152) *
                         dVar43);
        pfVar9[1] = auVar27._4_4_;
        pfVar9[2] = (float)(((dVar161 * dVar56 - dVar128 * dVar156) + dVar165 * dVar59 + dVar137) *
                           dVar82);
        pfVar9[3] = (float)(((dVar156 * dVar59 - dVar56 * dVar159) + dVar165 * dVar128 + dVar155) *
                           dVar43);
        lVar16 = lVar16 + 0x30;
        uVar15 = uVar15 + 4;
      } while ((int)uVar15 < (int)(uVar12 & 0xfffffffc));
      if ((int)param_6 <= (int)uVar15) {
        return;
      }
    }
    auVar65._0_4_ =
         -(uint)((int)(uVar15 | (uint)__xmm_00000003000000020000000100000000) < (int)param_6);
    auVar65._4_4_ =
         -(uint)((int)(uVar15 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_6);
    auVar65._8_4_ = -(uint)((int)(uVar15 | _UNK_150631e08) < (int)param_6);
    auVar65._12_4_ = -(uint)((int)(uVar15 | _UNK_150631e0c) < (int)param_6);
    uVar6 = (ulonglong)uVar15;
    lVar16 = uVar6 * 3;
    pauVar2 = (undefined1 (*) [16])(param_1 + uVar6 * 0xc);
    iVar13 = movmskps(uVar15,auVar65);
    bVar7 = (char)((char)iVar13 << 4) >> 4;
    if (iVar13 == 0xf) {
      auVar107 = *pauVar2;
      auVar62 = pauVar2[1];
      auVar29._0_4_ = auVar107._0_4_;
      auVar148 = insertps(auVar62,auVar107,0x8c);
      auVar29._4_4_ = auVar107._12_4_;
      auVar29._8_4_ = auVar62._8_4_;
      auVar29._12_4_ = *(undefined4 *)(pauVar2[2] + 4);
      auVar49._4_4_ = auVar62._0_4_;
      auVar49._0_4_ = auVar107._4_4_;
      auVar49._8_4_ = auVar62._12_4_;
      auVar49._12_4_ = *(undefined4 *)(pauVar2[2] + 8);
      auVar145._0_8_ = auVar148._0_8_;
      auVar145._8_4_ = *(undefined4 *)pauVar2[2];
      auVar145._12_4_ = *(undefined4 *)(pauVar2[2] + 0xc);
      pfVar9 = (float *)(param_2 + uVar6 * 0xc);
      auVar107 = *(undefined1 (*) [16])(param_2 + uVar6 * 0xc);
      auVar62 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar6 * 0xc);
      puVar3 = (undefined4 *)(param_2 + 0x20 + uVar6 * 0xc);
      auVar153._0_4_ = auVar107._0_4_;
      auVar148 = insertps(auVar62,auVar107,0x8c);
      auVar153._4_4_ = auVar107._12_4_;
      auVar153._8_4_ = auVar62._8_4_;
      auVar153._12_4_ = puVar3[1];
      auVar164._4_4_ = auVar62._0_4_;
      auVar164._0_4_ = auVar107._4_4_;
      auVar164._8_4_ = auVar62._12_4_;
      auVar164._12_4_ = puVar3[2];
      auVar158._0_8_ = auVar148._0_8_;
      auVar158._8_4_ = *puVar3;
      auVar158._12_4_ = puVar3[3];
    }
    else {
      auVar28._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar65._0_4_;
      auVar28._4_4_ = _UNK_150b50da4 & auVar65._4_4_;
      auVar28._8_4_ = _UNK_150b50da8 & auVar65._8_4_;
      auVar28._12_4_ = _UNK_150b50dac & auVar65._12_4_;
      lVar17 = extractps(auVar28,1);
      lVar8 = extractps(auVar28,2);
      lVar10 = extractps(auVar28,3);
      auVar107 = insertps(ZEXT416(*(uint *)*pauVar2),*(undefined4 *)(*pauVar2 + lVar17),0x10);
      auVar107 = insertps(auVar107,*(undefined4 *)(*pauVar2 + lVar8),0x20);
      auVar29 = insertps(auVar107,*(undefined4 *)(*pauVar2 + lVar10),0x30);
      auVar107 = ___xmm_000000280000001c0000001000000004 & auVar65;
      auVar62 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar107._0_4_)),
                         *(undefined4 *)(*pauVar2 + auVar107._4_4_),0x10);
      auVar62 = insertps(auVar62,*(undefined4 *)(*pauVar2 + auVar107._8_4_),0x20);
      auVar49 = insertps(auVar62,*(undefined4 *)(*pauVar2 + auVar107._12_4_),0x30);
      auVar65 = auVar65 & ___xmm_0000002c000000200000001400000008;
      auVar62 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar65._0_4_)),
                         *(undefined4 *)(*pauVar2 + auVar65._4_4_),0x10);
      auVar62 = insertps(auVar62,*(undefined4 *)(*pauVar2 + auVar65._8_4_),0x20);
      auVar145 = insertps(auVar62,*(undefined4 *)(*pauVar2 + auVar65._12_4_),0x30);
      pfVar9 = (float *)(param_2 + uVar6 * 0xc);
      auVar62 = insertps(ZEXT416(*(uint *)(param_2 + uVar6 * 0xc)),
                         *(undefined4 *)(lVar17 + (longlong)pfVar9),0x10);
      auVar62 = insertps(auVar62,*(undefined4 *)(lVar8 + (longlong)pfVar9),0x20);
      auVar153 = insertps(auVar62,*(undefined4 *)(lVar10 + (longlong)pfVar9),0x30);
      auVar62 = insertps(ZEXT416(*(uint *)((ulonglong)auVar107._0_4_ + (longlong)pfVar9)),
                         *(undefined4 *)((ulonglong)auVar107._4_4_ + (longlong)pfVar9),0x10);
      auVar62 = insertps(auVar62,*(undefined4 *)((ulonglong)auVar107._8_4_ + (longlong)pfVar9),0x20)
      ;
      auVar164 = insertps(auVar62,*(undefined4 *)((ulonglong)auVar107._12_4_ + (longlong)pfVar9),
                          0x30);
      auVar107 = insertps(ZEXT416(*(uint *)((ulonglong)auVar65._0_4_ + (longlong)pfVar9)),
                          *(undefined4 *)((ulonglong)auVar65._4_4_ + (longlong)pfVar9),0x10);
      auVar107 = insertps(auVar107,*(undefined4 *)((ulonglong)auVar65._8_4_ + (longlong)pfVar9),0x20
                         );
      auVar158 = insertps(auVar107,*(undefined4 *)((ulonglong)auVar65._12_4_ + (longlong)pfVar9),
                          0x30);
    }
    dVar42 = param_4[1];
    dVar56 = param_4[1];
    dVar104 = param_4[2];
    dVar114 = param_4[2];
    dVar83 = ((double)auVar29._8_4_ * param_5 + *param_4) - dVar100;
    dVar84 = ((double)auVar29._12_4_ * param_5 + *param_4) - dVar100;
    dVar116 = ((double)auVar29._0_4_ * param_5 + *param_4) - dVar100;
    dVar100 = ((double)auVar29._4_4_ * param_5 + *param_4) - dVar100;
    dVar131 = ((double)auVar49._8_4_ * param_5 + dVar42) - dVar117;
    dVar137 = ((double)auVar49._12_4_ * param_5 + dVar56) - dVar117;
    dVar120 = ((double)auVar49._0_4_ * param_5 + dVar42) - dVar117;
    dVar117 = ((double)auVar49._4_4_ * param_5 + dVar56) - dVar117;
    dVar44 = ((double)auVar145._8_4_ * param_5 + dVar104) - dVar60;
    dVar58 = ((double)auVar145._12_4_ * param_5 + dVar114) - dVar60;
    dVar61 = ((double)auVar145._0_4_ * param_5 + dVar104) - dVar60;
    dVar60 = ((double)auVar145._4_4_ * param_5 + dVar114) - dVar60;
    dVar150 = dVar156 * dVar120 - dVar159 * dVar116;
    dVar152 = dVar156 * dVar117 - dVar159 * dVar100;
    dVar155 = dVar156 * dVar131 - dVar159 * dVar83;
    dVar160 = dVar156 * dVar137 - dVar159 * dVar84;
    dVar42 = dVar159 * dVar61 - dVar161 * dVar120;
    dVar104 = dVar159 * dVar60 - dVar161 * dVar117;
    dVar139 = dVar159 * dVar44 - dVar161 * dVar131;
    dVar141 = dVar159 * dVar58 - dVar161 * dVar137;
    dVar126 = dVar161 * dVar116 - dVar156 * dVar61;
    dVar128 = dVar161 * dVar100 - dVar156 * dVar60;
    dVar88 = dVar161 * dVar83 - dVar156 * dVar44;
    dVar99 = dVar161 * dVar84 - dVar156 * dVar58;
    dVar42 = dVar42 + dVar42;
    dVar104 = dVar104 + dVar104;
    dVar139 = dVar139 + dVar139;
    dVar141 = dVar141 + dVar141;
    dVar126 = dVar126 + dVar126;
    dVar128 = dVar128 + dVar128;
    dVar88 = dVar88 + dVar88;
    dVar99 = dVar99 + dVar99;
    dVar150 = dVar150 + dVar150;
    dVar152 = dVar152 + dVar152;
    dVar155 = dVar155 + dVar155;
    dVar160 = dVar160 + dVar160;
    dVar56 = (double)(float)(auVar153._8_4_ ^ _UNK_150651578);
    dVar114 = (double)(float)(auVar153._12_4_ ^ _UNK_15065157c);
    dVar57 = (double)(float)(auVar164._8_4_ ^ _UNK_150651578);
    dVar59 = (double)(float)(auVar164._12_4_ ^ _UNK_15065157c);
    dVar151 = dVar156 * dVar57 - dVar159 * dVar56;
    dVar154 = dVar156 * dVar59 - dVar159 * dVar114;
    dVar136 = (double)(float)(auVar153._0_4_ ^ __xmm_80000000800000008000000080000000);
    dVar138 = (double)(float)(auVar153._4_4_ ^ _UNK_150651574);
    dVar157 = (double)(float)(auVar164._0_4_ ^ __xmm_80000000800000008000000080000000);
    dVar162 = (double)(float)(auVar164._4_4_ ^ _UNK_150651574);
    dVar106 = dVar156 * dVar157 - dVar159 * dVar136;
    dVar115 = dVar156 * dVar162 - dVar159 * dVar138;
    dVar142 = (double)(float)(auVar158._8_4_ ^ _UNK_150651578);
    dVar143 = (double)(float)(auVar158._12_4_ ^ _UNK_15065157c);
    dVar72 = dVar159 * dVar142 - dVar161 * dVar57;
    dVar74 = dVar159 * dVar143 - dVar161 * dVar59;
    dVar118 = (double)(float)(auVar158._0_4_ ^ __xmm_80000000800000008000000080000000);
    dVar119 = (double)(float)(auVar158._4_4_ ^ _UNK_150651574);
    dVar163 = dVar159 * dVar118 - dVar161 * dVar157;
    dVar166 = dVar159 * dVar119 - dVar161 * dVar162;
    dVar127 = dVar161 * dVar56 - dVar156 * dVar142;
    dVar130 = dVar161 * dVar114 - dVar156 * dVar143;
    dVar90 = dVar161 * dVar136 - dVar156 * dVar118;
    dVar105 = dVar161 * dVar138 - dVar156 * dVar119;
    dVar72 = dVar72 + dVar72;
    dVar74 = dVar74 + dVar74;
    dVar163 = dVar163 + dVar163;
    dVar166 = dVar166 + dVar166;
    dVar127 = dVar127 + dVar127;
    dVar130 = dVar130 + dVar130;
    dVar90 = dVar90 + dVar90;
    dVar105 = dVar105 + dVar105;
    dVar151 = dVar151 + dVar151;
    dVar154 = dVar154 + dVar154;
    dVar106 = dVar106 + dVar106;
    dVar115 = dVar115 + dVar115;
    fVar37 = (float)(((dVar159 * dVar160 - dVar99 * dVar161) + dVar165 * dVar141 + dVar84) * dVar73)
    ;
    uVar21 = CONCAT44(fVar37,(float)(((dVar159 * dVar155 - dVar88 * dVar161) +
                                     dVar165 * dVar139 + dVar83) * dVar73));
    fVar129 = (float)(((dVar159 * dVar150 - dVar126 * dVar161) + dVar165 * dVar42 + dVar116) *
                     dVar73);
    auVar135._0_8_ =
         CONCAT44((float)(((dVar159 * dVar152 - dVar128 * dVar161) + dVar165 * dVar104 + dVar100) *
                         dVar73),fVar129);
    auVar135._8_8_ = uVar21;
    fVar102 = (float)(((dVar161 * dVar139 - dVar155 * dVar156) + dVar165 * dVar88 + dVar131) *
                     dVar82);
    fVar38 = (float)(((dVar161 * dVar141 - dVar160 * dVar156) + dVar165 * dVar99 + dVar137) * dVar82
                    );
    auVar87._12_4_ = fVar38;
    auVar87._8_4_ = fVar102;
    auVar87._0_4_ =
         (float)(((dVar161 * dVar42 - dVar150 * dVar156) + dVar165 * dVar126 + dVar120) * dVar82);
    auVar87._4_4_ =
         (float)(((dVar161 * dVar104 - dVar152 * dVar156) + dVar165 * dVar128 + dVar117) * dVar82);
    fVar41 = (float)(((dVar156 * dVar88 - dVar139 * dVar159) + dVar165 * dVar155 + dVar44) * dVar43)
    ;
    fVar55 = (float)(((dVar156 * dVar99 - dVar141 * dVar159) + dVar165 * dVar160 + dVar58) * dVar43)
    ;
    auVar78._12_4_ = fVar55;
    auVar78._8_4_ = fVar41;
    auVar78._0_4_ =
         (float)(((dVar156 * dVar126 - dVar42 * dVar159) + dVar165 * dVar150 + dVar61) * dVar43);
    auVar78._4_4_ =
         (float)(((dVar156 * dVar128 - dVar104 * dVar159) + dVar165 * dVar152 + dVar60) * dVar43);
    fVar103 = (float)(((dVar159 * dVar106 - dVar90 * dVar161) + dVar165 * dVar163 + dVar136) *
                     dVar73);
    auVar112._0_8_ =
         CONCAT44((float)(((dVar159 * dVar115 - dVar105 * dVar161) + dVar165 * dVar166 + dVar138) *
                         dVar73),fVar103);
    fVar39 = (float)(((dVar159 * dVar154 - dVar130 * dVar161) + dVar165 * dVar74 + dVar114) * dVar73
                    );
    uVar22 = CONCAT44(fVar39,(float)(((dVar159 * dVar151 - dVar127 * dVar161) +
                                     dVar165 * dVar72 + dVar56) * dVar73));
    auVar54._0_4_ =
         (float)(((dVar161 * dVar163 - dVar106 * dVar156) + dVar165 * dVar90 + dVar157) * dVar82);
    auVar54._4_4_ =
         (float)(((dVar161 * dVar166 - dVar115 * dVar156) + dVar165 * dVar105 + dVar162) * dVar82);
    auVar112._8_8_ = uVar22;
    fVar20 = (float)(((dVar161 * dVar72 - dVar151 * dVar156) + dVar165 * dVar127 + dVar57) * dVar82)
    ;
    fVar40 = (float)(((dVar161 * dVar74 - dVar154 * dVar156) + dVar165 * dVar130 + dVar59) * dVar82)
    ;
    auVar54._12_4_ = fVar40;
    auVar54._8_4_ = fVar20;
    auVar36._0_4_ =
         (float)(((dVar156 * dVar90 - dVar163 * dVar159) + dVar165 * dVar106 + dVar118) * dVar43);
    auVar36._4_4_ =
         (float)(((dVar156 * dVar105 - dVar166 * dVar159) + dVar165 * dVar115 + dVar119) * dVar43);
    auVar36._12_4_ =
         (float)(((dVar156 * dVar130 - dVar74 * dVar159) + dVar165 * dVar154 + dVar143) * dVar43);
    auVar36._8_4_ =
         (float)(((dVar156 * dVar127 - dVar72 * dVar159) + dVar165 * dVar151 + dVar142) * dVar43);
    if ((~bVar7 & 0xf) == 0) {
      auVar68._8_8_ = uVar21;
      auVar68._0_8_ = auVar135._0_8_;
      auVar107 = insertps(auVar68,auVar87,0x30);
      auVar95._4_4_ = fVar102;
      auVar95._0_4_ = auVar87._4_4_;
      auVar95._8_4_ = auVar78._0_4_;
      auVar95._12_4_ = auVar78._4_4_;
      auVar107 = insertps(auVar107,auVar78,0x20);
      *(int *)*pauVar2 = auVar107._0_4_;
      *(int *)(*pauVar2 + 4) = auVar107._12_4_;
      *(int *)(*pauVar2 + 8) = auVar107._8_4_;
      *(int *)(*pauVar2 + 0xc) = auVar107._4_4_;
      auVar107 = blendps(auVar95,auVar135,4);
      *(int *)pauVar2[1] = auVar107._0_4_;
      *(int *)(pauVar2[1] + 4) = auVar107._12_4_;
      *(int *)(pauVar2[1] + 8) = auVar107._8_4_;
      *(int *)(pauVar2[1] + 0xc) = auVar107._4_4_;
      *(float *)pauVar2[2] = fVar41;
      *(float *)(pauVar2[2] + 4) = fVar37;
      *(float *)(pauVar2[2] + 8) = fVar38;
      *(float *)(pauVar2[2] + 0xc) = fVar55;
      auVar69._8_8_ = uVar22;
      auVar69._0_8_ = auVar112._0_8_;
      auVar107 = insertps(auVar69,auVar54,0x30);
      auVar107 = insertps(auVar107,auVar36,0x20);
      *pfVar9 = auVar107._0_4_;
      pfVar9[1] = auVar107._12_4_;
      pfVar9[2] = auVar107._8_4_;
      pfVar9[3] = auVar107._4_4_;
      auVar70._4_4_ = fVar20;
      auVar70._0_4_ = auVar54._4_4_;
      auVar70._8_4_ = auVar36._0_4_;
      auVar70._12_4_ = auVar36._4_4_;
      auVar107 = blendps(auVar70,auVar112,4);
      puVar3 = (undefined4 *)(param_2 + 0x10 + uVar6 * 0xc);
      *puVar3 = auVar107._0_4_;
      puVar3[1] = auVar107._12_4_;
      puVar3[2] = auVar107._8_4_;
      puVar3[3] = auVar107._4_4_;
      auVar45._4_4_ = auVar54._0_4_;
      auVar45._0_4_ = fVar40;
      auVar45._8_4_ = fVar39;
      goto LAB_140cc50ac;
    }
    if ((bVar7 & 1) != 0) {
      *(float *)*pauVar2 = fVar129;
    }
    if ((bVar7 & 2) != 0) {
      uVar21 = extractps(auVar135,1);
      *(undefined8 *)(*pauVar2 + 0xc) = uVar21;
    }
    if ((bVar7 & 4) != 0) {
      uVar21 = extractps(auVar135,2);
      *(undefined8 *)(pauVar2[1] + 8) = uVar21;
    }
    if ((char)bVar7 < '\0') {
      uVar21 = extractps(auVar135,3);
      *(undefined8 *)(pauVar2[2] + 4) = uVar21;
    }
    if ((bVar7 & 1) != 0) {
      *(float *)(*pauVar2 + 4) = auVar87._0_4_;
    }
    if ((bVar7 & 2) != 0) {
      uVar21 = extractps(auVar87,1);
      *(undefined8 *)pauVar2[1] = uVar21;
    }
    if ((bVar7 & 4) != 0) {
      uVar21 = extractps(auVar87,2);
      *(undefined8 *)(pauVar2[1] + 0xc) = uVar21;
    }
    if ((char)bVar7 < '\0') {
      uVar21 = extractps(auVar87,3);
      *(undefined8 *)(pauVar2[2] + 8) = uVar21;
    }
    if ((bVar7 & 1) != 0) {
      *(float *)(*pauVar2 + 8) = auVar78._0_4_;
    }
    if ((bVar7 & 2) != 0) {
      uVar21 = extractps(auVar78,1);
      *(undefined8 *)(pauVar2[1] + 4) = uVar21;
    }
    if ((bVar7 & 4) != 0) {
      uVar21 = extractps(auVar78,2);
      *(undefined8 *)pauVar2[2] = uVar21;
    }
    if ((char)bVar7 < '\0') {
      uVar21 = extractps(auVar78,3);
      *(undefined8 *)(pauVar2[2] + 0xc) = uVar21;
    }
    if ((bVar7 & 1) != 0) {
      *pfVar9 = fVar103;
    }
    if ((bVar7 & 2) != 0) {
      uVar21 = extractps(auVar112,1);
      *(undefined8 *)(param_2 + 0xc + uVar6 * 0xc) = uVar21;
    }
    if ((bVar7 & 4) != 0) {
      uVar21 = extractps(auVar112,2);
      *(undefined8 *)(param_2 + 0x18 + uVar6 * 0xc) = uVar21;
    }
    bVar5 = bVar7 & 0xf;
    bVar4 = bVar5;
    if (-1 < (char)bVar7) goto joined_r0x000140cc4fdc;
    uVar21 = extractps(auVar112,3);
    *(undefined8 *)(param_2 + 0x24 + uVar6 * 0xc) = uVar21;
  }
  bVar5 = bVar7 & 0xf;
  bVar4 = bVar7;
joined_r0x000140cc4fdc:
  if ((bVar4 & 1) != 0) {
    *(int *)(param_2 + 4 + lVar16 * 4) = auVar54._0_4_;
  }
  if ((bVar5 & 2) != 0) {
    uVar21 = extractps(auVar54,1);
    *(undefined8 *)(param_2 + 0x10 + lVar16 * 4) = uVar21;
  }
  if ((bVar5 & 4) != 0) {
    uVar21 = extractps(auVar54,2);
    *(undefined8 *)(param_2 + 0x1c + lVar16 * 4) = uVar21;
  }
  if ((char)bVar7 < '\0') {
    uVar21 = extractps(auVar54,3);
    *(undefined8 *)(param_2 + 0x28 + lVar16 * 4) = uVar21;
  }
  if ((bVar5 & 1) != 0) {
    *(int *)(param_2 + 8 + lVar16 * 4) = auVar36._0_4_;
  }
  if ((bVar5 & 2) != 0) {
    uVar21 = extractps(auVar36,1);
    *(undefined8 *)(param_2 + 0x14 + lVar16 * 4) = uVar21;
  }
  if ((bVar5 & 4) != 0) {
    uVar21 = extractps(auVar36,2);
    *(undefined8 *)(param_2 + 0x20 + lVar16 * 4) = uVar21;
  }
  if ((char)bVar7 < '\0') {
    uVar21 = extractps(auVar36,3);
    *(undefined8 *)(param_2 + 0x2c + lVar16 * 4) = uVar21;
  }
  return;
}

// GetClothingSimulationData_sse4 @ 140cc52d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void GetClothingSimulationData_sse4
               (longlong param_1,longlong param_2,ulonglong *param_3,double *param_4,double param_5,
               uint param_6)

{
  uint *puVar1;
  undefined1 (*pauVar2) [16];
  undefined4 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  uint uVar28;
  uint uVar29;
  double dVar30;
  ulonglong uVar31;
  byte bVar32;
  float *pfVar33;
  longlong lVar34;
  uint uVar35;
  undefined4 in_R10D;
  int iVar36;
  uint uVar37;
  undefined4 in_R11D;
  undefined4 uVar38;
  longlong lVar39;
  longlong lVar40;
  int iVar41;
  int iVar42;
  float fVar43;
  float fVar44;
  double dVar45;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar61;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar46;
  double dVar47;
  float fVar57;
  float fVar58;
  undefined8 uVar48;
  float fVar60;
  double dVar62;
  undefined1 auVar56 [16];
  double dVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  double dVar70;
  double dVar71;
  double dVar72;
  double dVar73;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  double dVar74;
  undefined1 auVar69 [16];
  float fVar75;
  float fVar76;
  double dVar77;
  undefined1 auVar79 [16];
  double dVar78;
  double dVar85;
  double dVar86;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar84;
  undefined1 auVar83 [16];
  double dVar87;
  double dVar92;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  float fVar93;
  double dVar94;
  double dVar101;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  double dVar95;
  double dVar102;
  undefined1 auVar98 [16];
  float fVar100;
  undefined1 auVar99 [16];
  double dVar103;
  double dVar106;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  float fVar107;
  double dVar108;
  double dVar109;
  double dVar110;
  undefined1 auVar111 [16];
  double dVar114;
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  double dVar115;
  double dVar116;
  float fVar117;
  float fVar118;
  double dVar119;
  double dVar120;
  double dVar121;
  double dVar122;
  undefined1 auVar123 [16];
  double dVar127;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  double dVar128;
  double dVar130;
  undefined1 auVar129 [16];
  double dVar131;
  double dVar132;
  double dVar134;
  double dVar135;
  undefined1 auVar133 [16];
  undefined1 unaff_XMM13 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  double dStack_260;
  uint local_258;
  uint uStack_254;
  double dStack_1e0;
  double dStack_150;
  double dStack_140;
  double dVar7;
  float fVar59;
  
  dVar131 = (double)param_3[2] * ___xmm_3ff0000000000000bff0000000000000;
  dVar134 = (double)param_3[3] * _UNK_15076b868;
  dVar16 = (double)(*param_3 ^ __xmm_80000000000000008000000000000000);
  uVar28 = (uint)param_3[1] ^ _UNK_15066df78;
  uVar29 = *(uint *)((longlong)param_3 + 0xc) ^ _UNK_15066df7c;
  dVar121 = (double)param_3[10];
  auVar50._8_8_ = 0;
  auVar50._0_8_ = dVar121;
  dVar4 = (double)param_3[8];
  dVar74 = (double)param_3[9];
  dVar94 = (double)((ulonglong)dVar4 & __xmm_7fffffffffffffff7fffffffffffffff);
  dVar101 = (double)((ulonglong)dVar74 & _UNK_15061cc88);
  iVar41 = -(uint)((double)(__xmm_7fffffffffffffff7fffffffffffffff & (ulonglong)dVar121) <=
                  ___xmm_3e45798ee2308c3a3e45798ee2308c3a);
  iVar42 = -(uint)(0.0 <= _UNK_150aa88b8);
  auVar136._4_4_ = -(uint)(dVar101 <= _UNK_150aa88b8);
  auVar136._0_4_ = -(uint)(dVar94 <= ___xmm_3e45798ee2308c3a3e45798ee2308c3a);
  auVar136._8_4_ = iVar41;
  auVar136._12_4_ = iVar42;
  uVar35 = -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <
                  (double)(__xmm_7fffffffffffffff7fffffffffffffff & (ulonglong)dVar121));
  auVar96._4_4_ = -(uint)(_UNK_150aa88b8 < dVar101);
  auVar96._0_4_ = -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a < dVar94);
  auVar96._8_4_ = uVar35;
  auVar96._12_4_ = -(uint)(_UNK_150aa88b8 < 0.0);
  auVar111._8_8_ = (double)-(ulonglong)(_UNK_150b51668 <= 0.0);
  auVar111._0_8_ = (double)-(ulonglong)(___xmm_3914c4e977ba1f5c3914c4e977ba1f5c <= dVar121);
  auVar125._0_4_ =
       -(uint)((___xmm_3914c4e977ba1f5c3914c4e977ba1f5c <= dVar4 &&
               dVar4 <= ___xmm_46c8a6e32246c99c46c8a6e32246c99c) &&
              ___xmm_3e45798ee2308c3a3e45798ee2308c3a < dVar94);
  auVar125._4_4_ =
       -(uint)((_UNK_150b51668 <= dVar74 && dVar74 <= _UNK_150b51658) && _UNK_150aa88b8 < dVar101);
  auVar125._8_4_ =
       (uint)-(ulonglong)(___xmm_3914c4e977ba1f5c3914c4e977ba1f5c <= dVar121) &
       -(uint)(dVar121 <= ___xmm_46c8a6e32246c99c46c8a6e32246c99c) & uVar35;
  auVar125._12_4_ =
       (uint)-(ulonglong)(_UNK_150b51668 <= 0.0) & -(uint)(0.0 <= _UNK_150b51658) &
       -(uint)(_UNK_150aa88b8 < 0.0);
  iVar36 = movmskps(in_R10D,auVar125);
  if (iVar36 == 0) {
    auVar125 = ZEXT816(0);
  }
  else {
    auVar113._0_4_ = (float)dVar4;
    auVar113._4_4_ = (float)dVar74;
    fVar107 = (float)dVar121;
    auVar113._8_4_ = fVar107;
    auVar113._12_4_ = 0;
    auVar111 = rcpps(ZEXT416((uint)fVar107),auVar113);
    dVar94 = (double)((___xmm_40000000400000004000000040000000 - auVar113._0_4_ * auVar111._0_4_) *
                     auVar111._0_4_);
    dVar101 = (double)((_UNK_15076ba34 - auVar113._4_4_ * auVar111._4_4_) * auVar111._4_4_);
    dVar108 = (double)((_UNK_15076ba38 - fVar107 * auVar111._8_4_) * auVar111._8_4_);
    dVar114 = (double)((_UNK_15076ba3c - auVar111._12_4_ * 0.0) * auVar111._12_4_);
    dVar108 = (___xmm_40000000000000004000000000000000 - dVar121 * dVar108) * dVar108;
    dVar114 = (_UNK_150689698 - dVar114 * 0.0) * dVar114;
    dVar94 = (___xmm_40000000000000004000000000000000 - dVar4 * dVar94) * dVar94;
    dVar101 = (_UNK_150689698 - dVar74 * dVar101) * dVar101;
    unaff_XMM13._0_8_ = (___xmm_40000000000000004000000000000000 - dVar4 * dVar94) * dVar94;
    unaff_XMM13._8_8_ = (_UNK_150689698 - dVar74 * dVar101) * dVar101;
    auVar111._0_8_ = (___xmm_40000000000000004000000000000000 - dVar121 * dVar108) * dVar108;
    auVar111._8_8_ = (_UNK_150689698 - dVar114 * 0.0) * dVar114;
    uVar38 = movmskps(in_R11D,auVar96);
    if ((char)uVar38 == (char)iVar36) goto LAB_140cc5587;
  }
  auVar97._8_4_ = 0xffffffff;
  auVar97._0_8_ = 0xffffffffffffffff;
  auVar97._12_4_ = 0xffffffff;
  dVar108 = (double)(___xmm_7fcfffffffffffff7fcfffffffffffff -
                    (___xmm_7fe00000000000007fe0000000000000 & (ulonglong)dVar4));
  dVar114 = (double)((longlong)_UNK_150b51628 - (_UNK_150b51678 & (ulonglong)dVar74));
  dVar94 = (double)(___xmm_7fcfffffffffffff7fcfffffffffffff -
                   ((ulonglong)dVar121 & ___xmm_7fe00000000000007fe0000000000000));
  fVar107 = (float)(dVar4 * dVar108);
  fVar43 = (float)(dVar74 * dVar114);
  auVar112._0_4_ = (float)(dVar121 * dVar94);
  auVar112._4_4_ = (float)(_UNK_150b51628 * 0.0);
  auVar112._8_8_ = 0;
  auVar13._4_4_ = fVar43;
  auVar13._0_4_ = fVar107;
  auVar13._8_4_ = auVar112._0_4_;
  auVar13._12_4_ = auVar112._4_4_;
  auVar50 = rcpps(auVar112,auVar13);
  auVar97 = auVar97 ^ auVar125;
  dVar94 = (double)((_UNK_15076ba38 - auVar112._0_4_ * auVar50._8_4_) * auVar50._8_4_) * dVar94;
  dVar101 = (double)((_UNK_15076ba3c - auVar112._4_4_ * auVar50._12_4_) * auVar50._12_4_) *
            _UNK_150b51628;
  dVar108 = (double)((___xmm_40000000400000004000000040000000 - fVar107 * auVar50._0_4_) *
                    auVar50._0_4_) * dVar108;
  dVar114 = (double)((_UNK_15076ba34 - fVar43 * auVar50._4_4_) * auVar50._4_4_) * dVar114;
  dVar108 = (___xmm_40000000000000004000000000000000 - dVar4 * dVar108) * dVar108;
  dVar114 = (_UNK_150689698 - dVar74 * dVar114) * dVar114;
  dVar94 = (___xmm_40000000000000004000000000000000 - dVar121 * dVar94) * dVar94;
  dVar101 = (_UNK_150689698 - dVar101 * 0.0) * dVar101;
  auVar123._0_8_ = (___xmm_40000000000000004000000000000000 - dVar121 * dVar94) * dVar94;
  auVar123._8_8_ = (_UNK_150689698 - dVar101 * 0.0) * dVar101;
  auVar79._0_8_ = (___xmm_40000000000000004000000000000000 - dVar4 * dVar108) * dVar108;
  auVar79._8_8_ = (_UNK_150689698 - dVar74 * dVar114) * dVar114;
  auVar49._4_4_ = auVar97._0_4_;
  auVar49._0_4_ = auVar97._0_4_;
  auVar49._8_4_ = auVar97._4_4_;
  auVar49._12_4_ = auVar97._4_4_;
  unaff_XMM13 = blendvps(unaff_XMM13,auVar79,auVar49);
  auVar50._4_4_ = auVar97._8_4_;
  auVar50._0_4_ = auVar97._8_4_;
  auVar50._8_4_ = auVar97._12_4_;
  auVar50._12_4_ = auVar97._12_4_;
  auVar111 = blendvps(auVar111,auVar123,auVar50);
LAB_140cc5587:
  dVar121 = (double)param_3[4];
  dVar4 = (double)param_3[5];
  dVar74 = (double)param_3[6];
  auVar50 = pmovsxdq(auVar50,auVar136);
  auVar136 = blendvps(unaff_XMM13,ZEXT816(0),auVar50);
  auVar51._4_4_ = iVar41;
  auVar51._0_4_ = iVar41;
  auVar51._8_4_ = iVar42;
  auVar51._12_4_ = iVar42;
  auVar50 = blendvps(auVar111,ZEXT816(0),auVar51);
  uVar35 = param_6 + 3;
  if (-1 < (int)param_6) {
    uVar35 = param_6;
  }
  dVar101 = auVar136._0_8_;
  dVar108 = auVar136._8_8_;
  dVar94 = auVar50._0_8_;
  auVar14._8_4_ = auVar50._0_4_;
  auVar14._0_8_ = dVar94;
  auVar14._12_4_ = auVar50._4_4_;
  auVar8._8_4_ = auVar136._0_4_;
  auVar8._0_8_ = dVar101;
  auVar8._12_4_ = auVar136._4_4_;
  dStack_150 = auVar8._8_8_;
  dStack_140 = auVar14._8_8_;
  if ((int)(uVar35 & 0xfffffffc) < 1) {
    uVar37 = 0;
    if ((int)param_6 < 1) {
      return;
    }
  }
  else {
    lVar39 = 0x20;
    uVar37 = 0;
    do {
      auVar50 = *(undefined1 (*) [16])(param_1 + -0x20 + lVar39);
      auVar136 = *(undefined1 (*) [16])(param_1 + -0x10 + lVar39);
      pfVar33 = (float *)(param_1 + lVar39);
      auVar111 = insertps(auVar136,auVar50,0x8c);
      auVar125 = *(undefined1 (*) [16])(param_2 + -0x20 + lVar39);
      auVar96 = *(undefined1 (*) [16])(param_2 + -0x10 + lVar39);
      puVar1 = (uint *)(param_2 + lVar39);
      auVar113 = insertps(auVar96,auVar125,0x8c);
      dVar5 = param_4[1];
      dVar114 = param_4[1];
      dVar6 = param_4[2];
      dVar7 = param_4[2];
      dVar19 = ((double)auVar50._0_4_ * param_5 + *param_4) - dVar121;
      dVar20 = ((double)auVar50._12_4_ * param_5 + *param_4) - dVar121;
      dVar103 = ((double)auVar136._8_4_ * param_5 + *param_4) - dVar121;
      dVar106 = ((double)pfVar33[1] * param_5 + *param_4) - dVar121;
      dVar122 = ((double)auVar50._4_4_ * param_5 + dVar5) - dVar4;
      dVar127 = ((double)auVar136._0_4_ * param_5 + dVar114) - dVar4;
      dVar119 = ((double)auVar136._12_4_ * param_5 + dVar5) - dVar4;
      dVar120 = ((double)pfVar33[2] * param_5 + dVar114) - dVar4;
      dVar109 = ((double)auVar111._0_4_ * param_5 + dVar6) - dVar74;
      dVar115 = ((double)auVar111._4_4_ * param_5 + dVar7) - dVar74;
      dVar77 = ((double)*pfVar33 * param_5 + dVar6) - dVar74;
      dVar85 = ((double)pfVar33[3] * param_5 + dVar7) - dVar74;
      dVar114 = (double)CONCAT44(uVar29,uVar28);
      dVar5 = (double)CONCAT44(uVar29,uVar28);
      dVar132 = dVar16 * dVar122 - dVar114 * dVar19;
      dVar135 = dVar16 * dVar127 - dVar5 * dVar20;
      dVar128 = dVar16 * dVar119 - dVar114 * dVar103;
      dVar130 = dVar16 * dVar120 - dVar5 * dVar106;
      dVar17 = dVar114 * dVar109 - dVar131 * dVar122;
      dVar18 = dVar5 * dVar115 - dVar131 * dVar127;
      dVar95 = dVar114 * dVar77 - dVar131 * dVar119;
      dVar102 = dVar5 * dVar85 - dVar131 * dVar120;
      dVar22 = dVar131 * dVar103 - dVar16 * dVar77;
      dVar25 = dVar131 * dVar106 - dVar16 * dVar85;
      dVar114 = dVar131 * dVar19 - dVar16 * dVar109;
      dVar7 = dVar131 * dVar20 - dVar16 * dVar115;
      dVar17 = dVar17 + dVar17;
      dVar18 = dVar18 + dVar18;
      dVar95 = dVar95 + dVar95;
      dVar102 = dVar102 + dVar102;
      dVar114 = dVar114 + dVar114;
      dVar7 = dVar7 + dVar7;
      dVar22 = dVar22 + dVar22;
      dVar25 = dVar25 + dVar25;
      dVar132 = dVar132 + dVar132;
      dVar135 = dVar135 + dVar135;
      dVar128 = dVar128 + dVar128;
      dVar130 = dVar130 + dVar130;
      dVar30 = (double)CONCAT44(uVar29,uVar28);
      dVar47 = (double)CONCAT44(uVar29,uVar28);
      dVar63 = (double)(float)(auVar125._0_4_ ^ __xmm_80000000800000008000000080000000);
      dVar70 = (double)(float)(auVar125._12_4_ ^ _UNK_150651574);
      dVar64 = (double)(float)(auVar96._8_4_ ^ _UNK_150651578);
      dVar71 = (double)(float)(puVar1[1] ^ _UNK_15065157c);
      dVar78 = (double)(float)(auVar96._12_4_ ^ _UNK_150651578);
      dVar86 = (double)(float)(puVar1[2] ^ _UNK_15065157c);
      dVar23 = (double)(float)(auVar125._4_4_ ^ __xmm_80000000800000008000000080000000);
      dVar26 = (double)(float)(auVar96._0_4_ ^ _UNK_150651574);
      local_258 = auVar113._0_4_;
      uStack_254 = auVar113._4_4_;
      dVar87 = (double)(float)(*puVar1 ^ _UNK_150651578);
      dVar92 = (double)(float)(puVar1[3] ^ _UNK_15065157c);
      dVar65 = (double)(float)(local_258 ^ __xmm_80000000800000008000000080000000);
      dVar72 = (double)(float)(uStack_254 ^ _UNK_150651574);
      dVar119 = (dVar131 * dVar95 - dVar128 * dVar16) + dVar134 * dVar22 + dVar119;
      dVar5 = (dVar131 * dVar102 - dVar130 * dVar16) + dVar134 * dVar25 + dVar120;
      auVar15._8_4_ = SUB84(dVar5,0);
      auVar15._0_8_ = dVar119;
      auVar15._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
      auVar21._8_4_ = SUB84(dVar26,0);
      auVar21._0_8_ = dVar23;
      auVar21._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
      dVar5 = dVar16 * dVar23 - dVar30 * dVar63;
      dVar6 = dVar16 * dVar26 - dVar47 * dVar70;
      dVar110 = dVar16 * dVar78 - dVar30 * dVar64;
      dVar116 = dVar16 * dVar86 - dVar47 * dVar71;
      dVar24 = dVar30 * dVar65 - dVar131 * dVar23;
      dVar27 = dVar47 * dVar72 - dVar131 * dVar26;
      dVar45 = dVar30 * dVar87 - dVar131 * dVar78;
      dVar61 = dVar47 * dVar92 - dVar131 * dVar86;
      dVar66 = dVar131 * dVar64 - dVar16 * dVar87;
      dVar73 = dVar131 * dVar71 - dVar16 * dVar92;
      dVar26 = dVar131 * dVar63 - dVar16 * dVar65;
      dVar120 = dVar131 * dVar70 - dVar16 * dVar72;
      dVar24 = dVar24 + dVar24;
      dVar27 = dVar27 + dVar27;
      dVar45 = dVar45 + dVar45;
      dVar61 = dVar61 + dVar61;
      dVar66 = dVar66 + dVar66;
      dVar73 = dVar73 + dVar73;
      dVar26 = dVar26 + dVar26;
      dVar120 = dVar120 + dVar120;
      dStack_1e0 = auVar21._8_8_;
      dVar5 = dVar5 + dVar5;
      dVar6 = dVar6 + dVar6;
      dVar110 = dVar110 + dVar110;
      dVar116 = dVar116 + dVar116;
      dVar46 = (double)CONCAT44(uVar29,uVar28);
      dVar62 = (double)CONCAT44(uVar29,uVar28);
      dStack_260 = auVar15._8_8_;
      auVar80._0_4_ =
           (float)(((dVar30 * dVar132 - dVar114 * dVar131) + dVar134 * dVar17 + dVar19) * dVar101);
      auVar80._4_4_ =
           (float)(((dVar47 * dVar135 - dVar7 * dVar131) + dVar134 * dVar18 + dVar20) * dStack_150);
      auVar104._0_4_ =
           (float)(((dVar16 * dVar114 - dVar17 * dVar30) + dVar134 * dVar132 + dVar109) * dVar94);
      auVar104._4_4_ =
           (float)(((dVar16 * dVar7 - dVar18 * dVar47) + dVar134 * dVar135 + dVar115) * dStack_140);
      auVar104._8_8_ = 0;
      auVar80._8_4_ = 0;
      auVar80._12_4_ =
           (float)(((dVar131 * dVar17 - dVar132 * dVar16) + dVar134 * dVar114 + dVar122) * dVar108);
      auVar98._4_4_ = (float)(dVar119 * dVar108);
      auVar98._0_4_ =
           (float)(((dVar131 * dVar18 - dVar135 * dVar16) + dVar134 * dVar7 + dVar127) * dVar108);
      auVar98._8_4_ = auVar104._0_4_;
      auVar98._12_4_ = auVar104._4_4_;
      auVar50 = insertps(auVar80,auVar104,0x20);
      puVar3 = (undefined4 *)(param_1 + -0x20 + lVar39);
      *puVar3 = auVar50._0_4_;
      puVar3[1] = auVar50._12_4_;
      puVar3[2] = auVar50._8_4_;
      puVar3[3] = auVar50._4_4_;
      auVar81._0_4_ =
           (float)(((dVar30 * dVar128 - dVar22 * dVar131) + dVar134 * dVar95 + dVar103) * dVar101);
      auVar81._4_4_ =
           (float)(((dVar47 * dVar130 - dVar25 * dVar131) + dVar134 * dVar102 + dVar106) *
                  dStack_150);
      auVar81._8_8_ = 0;
      auVar50 = insertps(auVar98,auVar81,0x20);
      puVar3 = (undefined4 *)(param_1 + -0x10 + lVar39);
      *puVar3 = auVar50._0_4_;
      puVar3[1] = auVar50._12_4_;
      puVar3[2] = auVar50._8_4_;
      puVar3[3] = auVar50._4_4_;
      pfVar33 = (float *)(param_1 + lVar39);
      *pfVar33 = (float)(((dVar16 * dVar22 - dVar95 * dVar30) + dVar134 * dVar128 + dVar77) * dVar94
                        );
      pfVar33[1] = auVar81._4_4_;
      pfVar33[2] = (float)(dStack_260 * dVar108);
      pfVar33[3] = (float)(((dVar16 * dVar25 - dVar102 * dVar47) + dVar134 * dVar130 + dVar85) *
                          dStack_140);
      auVar52._0_4_ =
           (float)(((dVar46 * dVar5 - dVar26 * dVar131) + dVar134 * dVar24 + dVar63) * dVar101);
      auVar52._4_4_ =
           (float)(((dVar62 * dVar6 - dVar120 * dVar131) + dVar134 * dVar27 + dVar70) * dStack_150);
      auVar52._8_4_ = 0;
      auVar52._12_4_ =
           (float)(((dVar131 * dVar24 - dVar5 * dVar16) + dVar134 * dVar26 + dVar23) * dVar108);
      auVar88._0_4_ =
           (float)(((dVar16 * dVar26 - dVar24 * dVar46) + dVar134 * dVar5 + dVar65) * dVar94);
      auVar88._4_4_ =
           (float)(((dVar16 * dVar120 - dVar27 * dVar62) + dVar134 * dVar6 + dVar72) * dStack_140);
      auVar88._8_8_ = 0;
      auVar67._4_4_ =
           (float)(((dVar131 * dVar45 - dVar110 * dVar16) + dVar134 * dVar66 + dVar78) * dVar108);
      auVar67._0_4_ =
           (float)(((dVar131 * dVar27 - dVar6 * dVar16) + dVar134 * dVar120 + dStack_1e0) * dVar108)
      ;
      auVar67._8_4_ = auVar88._0_4_;
      auVar67._12_4_ = auVar88._4_4_;
      auVar50 = insertps(auVar52,auVar88,0x20);
      puVar3 = (undefined4 *)(param_2 + -0x20 + lVar39);
      *puVar3 = auVar50._0_4_;
      puVar3[1] = auVar50._12_4_;
      puVar3[2] = auVar50._8_4_;
      puVar3[3] = auVar50._4_4_;
      auVar53._0_4_ =
           (float)(((dVar46 * dVar110 - dVar66 * dVar131) + dVar134 * dVar45 + dVar64) * dVar101);
      auVar53._4_4_ =
           (float)(((dVar62 * dVar116 - dVar73 * dVar131) + dVar134 * dVar61 + dVar71) * dStack_150)
      ;
      auVar53._8_8_ = 0;
      auVar50 = insertps(auVar67,auVar53,0x20);
      puVar3 = (undefined4 *)(param_2 + -0x10 + lVar39);
      *puVar3 = auVar50._0_4_;
      puVar3[1] = auVar50._12_4_;
      puVar3[2] = auVar50._8_4_;
      puVar3[3] = auVar50._4_4_;
      pfVar33 = (float *)(param_2 + lVar39);
      *pfVar33 = (float)(((dVar16 * dVar66 - dVar45 * dVar46) + dVar134 * dVar110 + dVar87) * dVar94
                        );
      pfVar33[1] = auVar53._4_4_;
      pfVar33[2] = (float)(((dVar131 * dVar61 - dVar116 * dVar16) + dVar134 * dVar73 + dVar86) *
                          dVar108);
      pfVar33[3] = (float)(((dVar16 * dVar73 - dVar61 * dVar62) + dVar134 * dVar116 + dVar92) *
                          dStack_140);
      lVar39 = lVar39 + 0x30;
      uVar37 = uVar37 + 4;
    } while ((int)uVar37 < (int)(uVar35 & 0xfffffffc));
    if ((int)param_6 <= (int)uVar37) {
      return;
    }
  }
  auVar82._0_4_ =
       -(uint)((int)(uVar37 | (uint)__xmm_00000003000000020000000100000000) < (int)param_6);
  auVar82._4_4_ =
       -(uint)((int)(uVar37 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_6);
  auVar82._8_4_ = -(uint)((int)(uVar37 | _UNK_150631e08) < (int)param_6);
  auVar82._12_4_ = -(uint)((int)(uVar37 | _UNK_150631e0c) < (int)param_6);
  uVar31 = (ulonglong)uVar37;
  pauVar2 = (undefined1 (*) [16])(param_1 + uVar31 * 0xc);
  iVar36 = movmskps(uVar37,auVar82);
  bVar32 = (char)((char)iVar36 << 4) >> 4;
  if (iVar36 == 0xf) {
    auVar50 = *pauVar2;
    auVar136 = pauVar2[1];
    auVar55._0_4_ = auVar50._0_4_;
    auVar125 = insertps(auVar136,auVar50,0x8c);
    auVar55._4_4_ = auVar50._12_4_;
    auVar55._8_4_ = auVar136._8_4_;
    auVar55._12_4_ = *(undefined4 *)(pauVar2[2] + 4);
    auVar68._4_4_ = auVar136._0_4_;
    auVar68._0_4_ = auVar50._4_4_;
    auVar68._8_4_ = auVar136._12_4_;
    auVar68._12_4_ = *(undefined4 *)(pauVar2[2] + 8);
    auVar124._0_8_ = auVar125._0_8_;
    auVar124._8_4_ = *(undefined4 *)pauVar2[2];
    auVar124._12_4_ = *(undefined4 *)(pauVar2[2] + 0xc);
    pfVar33 = (float *)(param_2 + uVar31 * 0xc);
    auVar50 = *(undefined1 (*) [16])(param_2 + uVar31 * 0xc);
    auVar136 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar31 * 0xc);
    puVar3 = (undefined4 *)(param_2 + 0x20 + uVar31 * 0xc);
    auVar129._0_4_ = auVar50._0_4_;
    auVar125 = insertps(auVar136,auVar50,0x8c);
    auVar129._4_4_ = auVar50._12_4_;
    auVar129._8_4_ = auVar136._8_4_;
    auVar129._12_4_ = puVar3[1];
    auVar137._4_4_ = auVar136._0_4_;
    auVar137._0_4_ = auVar50._4_4_;
    auVar137._8_4_ = auVar136._12_4_;
    auVar137._12_4_ = puVar3[2];
    auVar133._0_8_ = auVar125._0_8_;
    auVar133._8_4_ = *puVar3;
    auVar133._12_4_ = puVar3[3];
  }
  else {
    auVar54._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar82._0_4_;
    auVar54._4_4_ = _UNK_150b50da4 & auVar82._4_4_;
    auVar54._8_4_ = _UNK_150b50da8 & auVar82._8_4_;
    auVar54._12_4_ = _UNK_150b50dac & auVar82._12_4_;
    lVar40 = extractps(auVar54,1);
    lVar39 = extractps(auVar54,2);
    lVar34 = extractps(auVar54,3);
    auVar50 = insertps(ZEXT416(*(uint *)*pauVar2),*(undefined4 *)(*pauVar2 + lVar40),0x10);
    auVar50 = insertps(auVar50,*(undefined4 *)(*pauVar2 + lVar39),0x20);
    auVar55 = insertps(auVar50,*(undefined4 *)(*pauVar2 + lVar34),0x30);
    auVar50 = ___xmm_000000280000001c0000001000000004 & auVar82;
    auVar136 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar50._0_4_)),
                        *(undefined4 *)(*pauVar2 + auVar50._4_4_),0x10);
    auVar136 = insertps(auVar136,*(undefined4 *)(*pauVar2 + auVar50._8_4_),0x20);
    auVar68 = insertps(auVar136,*(undefined4 *)(*pauVar2 + auVar50._12_4_),0x30);
    auVar82 = auVar82 & ___xmm_0000002c000000200000001400000008;
    auVar136 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar82._0_4_)),
                        *(undefined4 *)(*pauVar2 + auVar82._4_4_),0x10);
    auVar136 = insertps(auVar136,*(undefined4 *)(*pauVar2 + auVar82._8_4_),0x20);
    auVar124 = insertps(auVar136,*(undefined4 *)(*pauVar2 + auVar82._12_4_),0x30);
    pfVar33 = (float *)(param_2 + uVar31 * 0xc);
    auVar136 = insertps(ZEXT416(*(uint *)(param_2 + uVar31 * 0xc)),
                        *(undefined4 *)(lVar40 + (longlong)pfVar33),0x10);
    auVar136 = insertps(auVar136,*(undefined4 *)(lVar39 + (longlong)pfVar33),0x20);
    auVar129 = insertps(auVar136,*(undefined4 *)(lVar34 + (longlong)pfVar33),0x30);
    auVar136 = insertps(ZEXT416(*(uint *)((ulonglong)auVar50._0_4_ + (longlong)pfVar33)),
                        *(undefined4 *)((ulonglong)auVar50._4_4_ + (longlong)pfVar33),0x10);
    auVar136 = insertps(auVar136,*(undefined4 *)((ulonglong)auVar50._8_4_ + (longlong)pfVar33),0x20)
    ;
    auVar137 = insertps(auVar136,*(undefined4 *)((ulonglong)auVar50._12_4_ + (longlong)pfVar33),0x30
                       );
    auVar50 = insertps(ZEXT416(*(uint *)((ulonglong)auVar82._0_4_ + (longlong)pfVar33)),
                       *(undefined4 *)((ulonglong)auVar82._4_4_ + (longlong)pfVar33),0x10);
    auVar50 = insertps(auVar50,*(undefined4 *)((ulonglong)auVar82._8_4_ + (longlong)pfVar33),0x20);
    auVar133 = insertps(auVar50,*(undefined4 *)((ulonglong)auVar82._12_4_ + (longlong)pfVar33),0x30)
    ;
  }
  dVar5 = param_4[1];
  dVar114 = param_4[1];
  dVar6 = param_4[2];
  dVar7 = param_4[2];
  dVar77 = ((double)auVar55._8_4_ * param_5 + *param_4) - dVar121;
  dVar85 = ((double)auVar55._12_4_ * param_5 + *param_4) - dVar121;
  dVar87 = ((double)auVar55._0_4_ * param_5 + *param_4) - dVar121;
  dVar121 = ((double)auVar55._4_4_ * param_5 + *param_4) - dVar121;
  dVar65 = ((double)auVar68._8_4_ * param_5 + dVar5) - dVar4;
  dVar66 = ((double)auVar68._12_4_ * param_5 + dVar114) - dVar4;
  dVar5 = ((double)auVar68._0_4_ * param_5 + dVar5) - dVar4;
  dVar4 = ((double)auVar68._4_4_ * param_5 + dVar114) - dVar4;
  dVar46 = ((double)auVar124._8_4_ * param_5 + dVar6) - dVar74;
  dVar62 = ((double)auVar124._12_4_ * param_5 + dVar7) - dVar74;
  dVar61 = ((double)auVar124._0_4_ * param_5 + dVar6) - dVar74;
  dVar74 = ((double)auVar124._4_4_ * param_5 + dVar7) - dVar74;
  dVar114 = (double)CONCAT44(uVar29,uVar28);
  dVar7 = (double)CONCAT44(uVar29,uVar28);
  dVar102 = dVar16 * dVar5 - dVar114 * dVar87;
  dVar106 = dVar16 * dVar4 - dVar7 * dVar121;
  dVar18 = dVar16 * dVar65 - dVar114 * dVar77;
  dVar19 = dVar16 * dVar66 - dVar7 * dVar85;
  dVar22 = dVar114 * dVar61 - dVar131 * dVar5;
  dVar23 = dVar7 * dVar74 - dVar131 * dVar4;
  dVar110 = dVar114 * dVar46 - dVar131 * dVar65;
  dVar116 = dVar7 * dVar62 - dVar131 * dVar66;
  dVar70 = dVar131 * dVar87 - dVar16 * dVar61;
  dVar72 = dVar131 * dVar121 - dVar16 * dVar74;
  dVar6 = dVar131 * dVar77 - dVar16 * dVar46;
  dVar119 = dVar131 * dVar85 - dVar16 * dVar62;
  dVar22 = dVar22 + dVar22;
  dVar23 = dVar23 + dVar23;
  dVar110 = dVar110 + dVar110;
  dVar116 = dVar116 + dVar116;
  dVar70 = dVar70 + dVar70;
  dVar72 = dVar72 + dVar72;
  dVar6 = dVar6 + dVar6;
  dVar119 = dVar119 + dVar119;
  dVar102 = dVar102 + dVar102;
  dVar106 = dVar106 + dVar106;
  dVar18 = dVar18 + dVar18;
  dVar19 = dVar19 + dVar19;
  dVar24 = (double)CONCAT44(uVar29,uVar28);
  dVar27 = (double)CONCAT44(uVar29,uVar28);
  dVar78 = (double)(float)(auVar129._8_4_ ^ _UNK_150651578);
  dVar86 = (double)(float)(auVar129._12_4_ ^ _UNK_15065157c);
  dVar47 = (double)(float)(auVar137._8_4_ ^ _UNK_150651578);
  dVar45 = (double)(float)(auVar137._12_4_ ^ _UNK_15065157c);
  dVar115 = dVar16 * dVar47 - dVar24 * dVar78;
  dVar122 = dVar16 * dVar45 - dVar27 * dVar86;
  dVar92 = (double)(float)(auVar129._0_4_ ^ __xmm_80000000800000008000000080000000);
  dVar95 = (double)(float)(auVar129._4_4_ ^ _UNK_150651574);
  dVar17 = (double)(float)(auVar137._0_4_ ^ __xmm_80000000800000008000000080000000);
  dVar26 = (double)(float)(auVar137._4_4_ ^ _UNK_150651574);
  dVar103 = dVar16 * dVar17 - dVar24 * dVar92;
  dVar109 = dVar16 * dVar26 - dVar27 * dVar95;
  dVar120 = (double)(float)(auVar133._8_4_ ^ _UNK_150651578);
  dVar20 = (double)(float)(auVar133._12_4_ ^ _UNK_15065157c);
  dVar71 = dVar24 * dVar120 - dVar131 * dVar47;
  dVar73 = dVar27 * dVar20 - dVar131 * dVar45;
  dVar114 = (double)(float)(auVar133._0_4_ ^ __xmm_80000000800000008000000080000000);
  dVar7 = (double)(float)(auVar133._4_4_ ^ _UNK_150651574);
  dVar127 = dVar24 * dVar114 - dVar131 * dVar17;
  dVar128 = dVar27 * dVar7 - dVar131 * dVar26;
  dVar63 = dVar131 * dVar78 - dVar16 * dVar120;
  dVar64 = dVar131 * dVar86 - dVar16 * dVar20;
  dVar130 = dVar131 * dVar92 - dVar16 * dVar114;
  dVar132 = dVar131 * dVar95 - dVar16 * dVar7;
  dVar71 = dVar71 + dVar71;
  dVar73 = dVar73 + dVar73;
  dVar127 = dVar127 + dVar127;
  dVar128 = dVar128 + dVar128;
  dVar63 = dVar63 + dVar63;
  dVar64 = dVar64 + dVar64;
  dVar130 = dVar130 + dVar130;
  dVar132 = dVar132 + dVar132;
  dVar115 = dVar115 + dVar115;
  dVar122 = dVar122 + dVar122;
  dVar103 = dVar103 + dVar103;
  dVar109 = dVar109 + dVar109;
  dVar25 = (double)CONCAT44(uVar29,uVar28);
  dVar30 = (double)CONCAT44(uVar29,uVar28);
  fVar107 = (float)(((dVar24 * dVar18 - dVar6 * dVar131) + dVar134 * dVar110 + dVar77) * dVar101);
  fVar57 = (float)(((dVar27 * dVar19 - dVar119 * dVar131) + dVar134 * dVar116 + dVar85) * dStack_150
                  );
  auVar99._12_4_ = fVar57;
  auVar99._8_4_ = fVar107;
  fVar117 = (float)(((dVar24 * dVar102 - dVar70 * dVar131) + dVar134 * dVar22 + dVar87) * dVar101);
  fVar118 = (float)(((dVar27 * dVar106 - dVar72 * dVar131) + dVar134 * dVar23 + dVar121) *
                   dStack_150);
  fVar43 = (float)(((dVar131 * dVar110 - dVar18 * dVar16) + dVar134 * dVar6 + dVar65) * dVar108);
  fVar58 = (float)(((dVar131 * dVar116 - dVar19 * dVar16) + dVar134 * dVar119 + dVar66) * dVar108);
  auVar126._12_4_ = fVar58;
  auVar126._8_4_ = fVar43;
  auVar126._0_4_ =
       (float)(((dVar131 * dVar22 - dVar102 * dVar16) + dVar134 * dVar70 + dVar5) * dVar108);
  auVar126._4_4_ =
       (float)(((dVar131 * dVar23 - dVar106 * dVar16) + dVar134 * dVar72 + dVar4) * dVar108);
  fVar75 = (float)(((dVar16 * dVar6 - dVar110 * dVar24) + dVar134 * dVar18 + dVar46) * dVar94);
  fVar84 = (float)(((dVar16 * dVar119 - dVar116 * dVar27) + dVar134 * dVar19 + dVar62) * dStack_140)
  ;
  auVar89._12_4_ = fVar84;
  auVar89._8_4_ = fVar75;
  auVar89._0_4_ =
       (float)(((dVar16 * dVar70 - dVar22 * dVar24) + dVar134 * dVar102 + dVar61) * dVar94);
  auVar89._4_4_ =
       (float)(((dVar16 * dVar72 - dVar23 * dVar27) + dVar134 * dVar106 + dVar74) * dStack_140);
  fVar76 = (float)(((dVar25 * dVar103 - dVar130 * dVar131) + dVar134 * dVar127 + dVar92) * dVar101);
  auVar83._0_8_ =
       CONCAT44((float)(((dVar30 * dVar109 - dVar132 * dVar131) + dVar134 * dVar128 + dVar95) *
                       dStack_150),fVar76);
  fVar59 = (float)(((dVar30 * dVar122 - dVar64 * dVar131) + dVar134 * dVar73 + dVar86) * dStack_150)
  ;
  uVar48 = CONCAT44(fVar59,(float)(((dVar25 * dVar115 - dVar63 * dVar131) +
                                   dVar134 * dVar71 + dVar78) * dVar101));
  auVar69._0_4_ =
       (float)(((dVar131 * dVar127 - dVar103 * dVar16) + dVar134 * dVar130 + dVar17) * dVar108);
  auVar69._4_4_ =
       (float)(((dVar131 * dVar128 - dVar109 * dVar16) + dVar134 * dVar132 + dVar26) * dVar108);
  auVar83._8_8_ = uVar48;
  fVar44 = (float)(((dVar131 * dVar71 - dVar115 * dVar16) + dVar134 * dVar63 + dVar47) * dVar108);
  fVar60 = (float)(((dVar131 * dVar73 - dVar122 * dVar16) + dVar134 * dVar64 + dVar45) * dVar108);
  auVar69._12_4_ = fVar60;
  auVar69._8_4_ = fVar44;
  auVar56._0_4_ =
       (float)(((dVar16 * dVar130 - dVar127 * dVar25) + dVar134 * dVar103 + dVar114) * dVar94);
  auVar56._4_4_ =
       (float)(((dVar16 * dVar132 - dVar128 * dVar30) + dVar134 * dVar109 + dVar7) * dStack_140);
  fVar93 = (float)(((dVar16 * dVar63 - dVar71 * dVar25) + dVar134 * dVar115 + dVar120) * dVar94);
  fVar100 = (float)(((dVar16 * dVar64 - dVar73 * dVar30) + dVar134 * dVar122 + dVar20) * dStack_140)
  ;
  auVar56._12_4_ = fVar100;
  auVar56._8_4_ = fVar93;
  if ((~bVar32 & 0xf) == 0) {
    auVar99._4_4_ = fVar118;
    auVar99._0_4_ = fVar117;
    auVar50 = insertps(auVar99,auVar126,0x30);
    auVar105._4_4_ = fVar43;
    auVar105._0_4_ = auVar126._4_4_;
    auVar105._8_4_ = auVar89._0_4_;
    auVar105._12_4_ = auVar89._4_4_;
    auVar50 = insertps(auVar50,auVar89,0x20);
    *(int *)*pauVar2 = auVar50._0_4_;
    *(int *)(*pauVar2 + 4) = auVar50._12_4_;
    *(int *)(*pauVar2 + 8) = auVar50._8_4_;
    *(int *)(*pauVar2 + 0xc) = auVar50._4_4_;
    auVar12._4_4_ = fVar118;
    auVar12._0_4_ = fVar117;
    auVar12._8_4_ = fVar107;
    auVar12._12_4_ = fVar57;
    auVar50 = blendps(auVar105,auVar12,4);
    *(int *)pauVar2[1] = auVar50._0_4_;
    *(int *)(pauVar2[1] + 4) = auVar50._12_4_;
    *(int *)(pauVar2[1] + 8) = auVar50._8_4_;
    *(int *)(pauVar2[1] + 0xc) = auVar50._4_4_;
    *(float *)pauVar2[2] = fVar75;
    *(float *)(pauVar2[2] + 4) = fVar57;
    *(float *)(pauVar2[2] + 8) = fVar58;
    *(float *)(pauVar2[2] + 0xc) = fVar84;
    auVar90._8_8_ = uVar48;
    auVar90._0_8_ = auVar83._0_8_;
    auVar50 = insertps(auVar90,auVar69,0x30);
    auVar50 = insertps(auVar50,auVar56,0x20);
    *pfVar33 = auVar50._0_4_;
    pfVar33[1] = auVar50._12_4_;
    pfVar33[2] = auVar50._8_4_;
    pfVar33[3] = auVar50._4_4_;
    auVar91._4_4_ = fVar44;
    auVar91._0_4_ = auVar69._4_4_;
    auVar91._8_4_ = auVar56._0_4_;
    auVar91._12_4_ = auVar56._4_4_;
    auVar50 = blendps(auVar91,auVar83,4);
    puVar3 = (undefined4 *)(param_2 + 0x10 + uVar31 * 0xc);
    *puVar3 = auVar50._0_4_;
    puVar3[1] = auVar50._12_4_;
    puVar3[2] = auVar50._8_4_;
    puVar3[3] = auVar50._4_4_;
    pfVar33 = (float *)(param_2 + 0x20 + uVar31 * 0xc);
    *pfVar33 = fVar93;
    pfVar33[1] = fVar59;
    pfVar33[2] = fVar60;
    pfVar33[3] = fVar100;
  }
  else {
    if ((bVar32 & 1) != 0) {
      *(float *)*pauVar2 = fVar117;
    }
    if ((bVar32 & 2) != 0) {
      auVar11._4_4_ = fVar118;
      auVar11._0_4_ = fVar117;
      auVar11._8_4_ = fVar107;
      auVar11._12_4_ = fVar57;
      uVar48 = extractps(auVar11,1);
      *(undefined8 *)(*pauVar2 + 0xc) = uVar48;
    }
    if ((bVar32 & 4) != 0) {
      auVar10._4_4_ = fVar118;
      auVar10._0_4_ = fVar117;
      auVar10._8_4_ = fVar107;
      auVar10._12_4_ = fVar57;
      uVar48 = extractps(auVar10,2);
      *(undefined8 *)(pauVar2[1] + 8) = uVar48;
    }
    if ((char)bVar32 < '\0') {
      auVar9._4_4_ = fVar118;
      auVar9._0_4_ = fVar117;
      auVar9._8_4_ = fVar107;
      auVar9._12_4_ = fVar57;
      uVar48 = extractps(auVar9,3);
      *(undefined8 *)(pauVar2[2] + 4) = uVar48;
    }
    if ((bVar32 & 1) != 0) {
      *(float *)(*pauVar2 + 4) = auVar126._0_4_;
    }
    if ((bVar32 & 2) != 0) {
      uVar48 = extractps(auVar126,1);
      *(undefined8 *)pauVar2[1] = uVar48;
    }
    if ((bVar32 & 4) != 0) {
      uVar48 = extractps(auVar126,2);
      *(undefined8 *)(pauVar2[1] + 0xc) = uVar48;
    }
    if ((char)bVar32 < '\0') {
      uVar48 = extractps(auVar126,3);
      *(undefined8 *)(pauVar2[2] + 8) = uVar48;
    }
    if ((bVar32 & 1) != 0) {
      *(float *)(*pauVar2 + 8) = auVar89._0_4_;
    }
    if ((bVar32 & 2) != 0) {
      uVar48 = extractps(auVar89,1);
      *(undefined8 *)(pauVar2[1] + 4) = uVar48;
    }
    if ((bVar32 & 4) != 0) {
      uVar48 = extractps(auVar89,2);
      *(undefined8 *)pauVar2[2] = uVar48;
    }
    if ((char)bVar32 < '\0') {
      uVar48 = extractps(auVar89,3);
      *(undefined8 *)(pauVar2[2] + 0xc) = uVar48;
    }
    if ((bVar32 & 1) != 0) {
      *pfVar33 = fVar76;
    }
    if ((bVar32 & 2) != 0) {
      uVar48 = extractps(auVar83,1);
      *(undefined8 *)(param_2 + 0xc + uVar31 * 0xc) = uVar48;
    }
    if ((bVar32 & 4) != 0) {
      uVar48 = extractps(auVar83,2);
      *(undefined8 *)(param_2 + 0x18 + uVar31 * 0xc) = uVar48;
    }
    if ((char)bVar32 < '\0') {
      uVar48 = extractps(auVar83,3);
      *(undefined8 *)(param_2 + 0x24 + uVar31 * 0xc) = uVar48;
    }
    if ((bVar32 & 1) != 0) {
      *(float *)(param_2 + 4 + uVar31 * 0xc) = auVar69._0_4_;
    }
    if ((bVar32 & 2) != 0) {
      uVar48 = extractps(auVar69,1);
      *(undefined8 *)(param_2 + 0x10 + uVar31 * 0xc) = uVar48;
    }
    if ((bVar32 & 4) != 0) {
      uVar48 = extractps(auVar69,2);
      *(undefined8 *)(param_2 + 0x1c + uVar31 * 0xc) = uVar48;
    }
    if ((char)bVar32 < '\0') {
      uVar48 = extractps(auVar69,3);
      *(undefined8 *)(param_2 + 0x28 + uVar31 * 0xc) = uVar48;
    }
    if ((bVar32 & 1) != 0) {
      *(float *)(param_2 + 8 + uVar31 * 0xc) = auVar56._0_4_;
    }
    if ((bVar32 & 2) != 0) {
      uVar48 = extractps(auVar56,1);
      *(undefined8 *)(param_2 + 0x14 + uVar31 * 0xc) = uVar48;
    }
    if ((bVar32 & 4) != 0) {
      uVar48 = extractps(auVar56,2);
      *(undefined8 *)(param_2 + 0x20 + uVar31 * 0xc) = uVar48;
    }
    if ((char)bVar32 < '\0') {
      uVar48 = extractps(auVar56,3);
      *(undefined8 *)(param_2 + 0x2c + uVar31 * 0xc) = uVar48;
    }
  }
  return;
}


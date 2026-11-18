// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 4

// TransformClothSimulData___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_REFs_5B__c_unFTransform_5D_CundCuni_sse4 @ 140d32790

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TransformClothSimulData___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_REFs_5B__c_unFTransform_5D_CundCuni_sse4
               (longlong param_1,longlong param_2,ulonglong *param_3,double param_4,uint param_5,
               undefined1 (*param_6) [16])

{
  float *pfVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  undefined1 (*pauVar9) [16];
  byte bVar10;
  int iVar11;
  uint uVar12;
  undefined4 in_R9D;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 *puVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  undefined8 uVar22;
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
  undefined1 auVar36 [16];
  float fVar39;
  double dVar40;
  undefined1 auVar42 [16];
  double dVar52;
  undefined1 auVar43 [16];
  double dVar41;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  float fVar51;
  undefined1 auVar50 [16];
  double dVar53;
  undefined1 auVar55 [16];
  double dVar54;
  double dVar62;
  double dVar63;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  double dVar64;
  undefined1 auVar61 [16];
  double dVar65;
  double dVar66;
  double dVar67;
  double dVar75;
  double dVar76;
  double dVar77;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  uint uVar78;
  double dVar79;
  uint uVar88;
  uint uVar89;
  uint uVar92;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  double dVar80;
  double dVar90;
  double dVar91;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  double dVar93;
  double dVar94;
  double dVar97;
  double dVar98;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  float fVar99;
  double dVar100;
  double dVar101;
  double dVar102;
  undefined1 auVar103 [16];
  double dVar109;
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  double dVar110;
  double dVar111;
  undefined1 auVar107 [16];
  double dVar112;
  undefined1 auVar108 [16];
  double dVar113;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  double dVar114;
  double dVar121;
  double dVar122;
  undefined1 auVar118 [16];
  double dVar123;
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  double dVar124;
  double dVar125;
  double dVar128;
  double dVar129;
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  float fVar130;
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  double dVar134;
  double dVar135;
  double dVar137;
  double dVar138;
  undefined1 auVar136 [16];
  double dVar139;
  double dVar140;
  double dVar141;
  double dVar143;
  double dVar144;
  double dVar145;
  undefined1 auVar142 [16];
  double dVar146;
  double dVar147;
  double dVar148;
  double dVar151;
  double dVar152;
  double dVar153;
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  double dVar154;
  double dVar156;
  undefined1 auVar155 [16];
  double dVar157;
  double dVar159;
  undefined1 auVar158 [16];
  double dStack_290;
  longlong local_288;
  uint local_228;
  uint uStack_224;
  double dStack_200;
  float fVar37;
  
  auVar103 = *param_6;
  iVar13 = movmskps(in_R9D,auVar103);
  dVar146 = (double)param_3[2] * ___xmm_3ff0000000000000bff0000000000000;
  dVar151 = (double)param_3[3] * _UNK_15076b868;
  dVar139 = (double)(*param_3 ^ __xmm_80000000000000008000000000000000);
  dVar143 = (double)(param_3[1] ^ _UNK_15066df78);
  dVar64 = (double)param_3[4];
  dVar112 = (double)param_3[5];
  dVar123 = (double)param_3[6];
  dVar41 = (double)param_3[10];
  dVar65 = (double)param_3[8];
  dVar75 = (double)param_3[9];
  uVar12 = -(uint)((double)(__xmm_7fffffffffffffff7fffffffffffffff & (ulonglong)dVar41) <=
                  ___xmm_3e45798ee2308c3a3e45798ee2308c3a);
  uVar20 = -(uint)(0.0 <= _UNK_150aa88b8);
  uVar15 = -(uint)((double)((ulonglong)dVar65 & __xmm_7fffffffffffffff7fffffffffffffff) <=
                  ___xmm_3e45798ee2308c3a3e45798ee2308c3a);
  uVar21 = -(uint)((double)((ulonglong)dVar75 & _UNK_15061cc88) <= _UNK_150aa88b8);
  auVar117._4_4_ = uVar21;
  auVar117._0_4_ = uVar15;
  auVar117._8_4_ = uVar12;
  auVar117._12_4_ = uVar20;
  auVar127._8_8_ = (double)-(ulonglong)(0.0 <= _UNK_150b51658);
  auVar127._0_8_ = (double)-(ulonglong)(dVar41 <= ___xmm_46c8a6e32246c99c46c8a6e32246c99c);
  auVar55._8_8_ = -(ulonglong)(_UNK_150b51668 <= 0.0);
  auVar55._0_8_ = -(ulonglong)(___xmm_3914c4e977ba1f5c3914c4e977ba1f5c <= dVar41);
  uVar78 = -(uint)(___xmm_3914c4e977ba1f5c3914c4e977ba1f5c <= dVar65 &&
                  dVar65 <= ___xmm_46c8a6e32246c99c46c8a6e32246c99c);
  uVar88 = -(uint)(_UNK_150b51668 <= dVar75 && dVar75 <= _UNK_150b51658);
  uVar89 = (uint)-(ulonglong)(___xmm_3914c4e977ba1f5c3914c4e977ba1f5c <= dVar41) &
           (uint)-(ulonglong)(dVar41 <= ___xmm_46c8a6e32246c99c46c8a6e32246c99c);
  uVar92 = (uint)-(ulonglong)(_UNK_150b51668 <= 0.0) & (uint)-(ulonglong)(0.0 <= _UNK_150b51658);
  auVar55 = pmovsxdq(auVar55,auVar117);
  auVar25._4_4_ = uVar12;
  auVar25._0_4_ = uVar12;
  auVar25._8_4_ = uVar20;
  auVar25._12_4_ = uVar20;
  if (iVar13 != 0xf) {
    auVar115._0_4_ = ~uVar15 & auVar103._0_4_;
    auVar115._4_4_ = ~uVar21 & auVar103._4_4_;
    auVar115._8_4_ = ~uVar12 & auVar103._8_4_;
    auVar115._12_4_ = ~uVar20 & auVar103._12_4_;
    auVar106._0_4_ = uVar78 & auVar115._0_4_;
    auVar106._4_4_ = uVar88 & auVar115._4_4_;
    auVar106._8_4_ = uVar89 & auVar115._8_4_;
    auVar106._12_4_ = uVar92 & auVar115._12_4_;
    iVar11 = movmskps((int)param_3,auVar106);
    if (iVar11 == 0) {
      auVar106 = ZEXT816(0);
LAB_140d32a83:
      auVar105._8_4_ = 0xffffffff;
      auVar105._0_8_ = 0xffffffffffffffff;
      auVar105._12_4_ = 0xffffffff;
      dVar100 = (double)(___xmm_7fcfffffffffffff7fcfffffffffffff -
                        (___xmm_7fe00000000000007fe0000000000000 & (ulonglong)dVar65));
      dVar109 = (double)((longlong)_UNK_150b51628 - (_UNK_150b51678 & (ulonglong)dVar75));
      dVar40 = (double)(___xmm_7fcfffffffffffff7fcfffffffffffff -
                       ((ulonglong)dVar41 & ___xmm_7fe00000000000007fe0000000000000));
      fVar99 = (float)(dVar65 * dVar100);
      fVar37 = (float)(dVar75 * dVar109);
      auVar116._0_4_ = (float)(dVar41 * dVar40);
      auVar116._4_4_ = (float)(_UNK_150b51628 * 0.0);
      auVar116._8_8_ = 0;
      auVar4._4_4_ = fVar37;
      auVar4._0_4_ = fVar99;
      auVar4._8_4_ = auVar116._0_4_;
      auVar4._12_4_ = auVar116._4_4_;
      auVar117 = rcpps(auVar116,auVar4);
      auVar105 = auVar105 ^ auVar106;
      dVar40 = (double)((_UNK_15076ba38 - auVar116._0_4_ * auVar117._8_4_) * auVar117._8_4_) *
               dVar40;
      dVar52 = (double)((_UNK_15076ba3c - auVar116._4_4_ * auVar117._12_4_) * auVar117._12_4_) *
               _UNK_150b51628;
      dVar100 = (double)((___xmm_40000000400000004000000040000000 - fVar99 * auVar117._0_4_) *
                        auVar117._0_4_) * dVar100;
      dVar109 = (double)((_UNK_15076ba34 - fVar37 * auVar117._4_4_) * auVar117._4_4_) * dVar109;
      dVar100 = (___xmm_40000000000000004000000000000000 - dVar65 * dVar100) * dVar100;
      dVar109 = (_UNK_150689698 - dVar75 * dVar109) * dVar109;
      dVar40 = (___xmm_40000000000000004000000000000000 - dVar41 * dVar40) * dVar40;
      dVar52 = (_UNK_150689698 - dVar52 * 0.0) * dVar52;
      auVar131._0_8_ = (___xmm_40000000000000004000000000000000 - dVar41 * dVar40) * dVar40;
      auVar131._8_8_ = (_UNK_150689698 - dVar52 * 0.0) * dVar52;
      auVar82._0_8_ = (___xmm_40000000000000004000000000000000 - dVar65 * dVar100) * dVar100;
      auVar82._8_8_ = (_UNK_150689698 - dVar75 * dVar109) * dVar109;
      auVar23._4_4_ = auVar105._0_4_;
      auVar23._0_4_ = auVar105._0_4_;
      auVar23._8_4_ = auVar105._4_4_;
      auVar23._12_4_ = auVar105._4_4_;
      auVar127 = blendvps(auVar127,auVar82,auVar23);
      auVar24._4_4_ = auVar105._8_4_;
      auVar24._0_4_ = auVar105._8_4_;
      auVar24._8_4_ = auVar105._12_4_;
      auVar24._12_4_ = auVar105._12_4_;
      auVar103 = blendvps(auVar103,auVar131,auVar24);
    }
    else {
      auVar42._0_4_ = (float)dVar65;
      auVar42._4_4_ = (float)dVar75;
      fVar99 = (float)dVar41;
      auVar42._8_4_ = fVar99;
      auVar42._12_4_ = 0;
      auVar103 = rcpps(ZEXT416((uint)fVar99),auVar42);
      dVar40 = (double)((___xmm_40000000400000004000000040000000 - auVar42._0_4_ * auVar103._0_4_) *
                       auVar103._0_4_);
      dVar52 = (double)((_UNK_15076ba34 - auVar42._4_4_ * auVar103._4_4_) * auVar103._4_4_);
      dVar100 = (double)((_UNK_15076ba38 - fVar99 * auVar103._8_4_) * auVar103._8_4_);
      dVar109 = (double)((_UNK_15076ba3c - auVar103._12_4_ * 0.0) * auVar103._12_4_);
      dVar100 = (___xmm_40000000000000004000000000000000 - dVar41 * dVar100) * dVar100;
      dVar109 = (_UNK_150689698 - dVar109 * 0.0) * dVar109;
      dVar40 = (___xmm_40000000000000004000000000000000 - dVar65 * dVar40) * dVar40;
      dVar52 = (_UNK_150689698 - dVar75 * dVar52) * dVar52;
      auVar127._0_8_ = (___xmm_40000000000000004000000000000000 - dVar65 * dVar40) * dVar40;
      auVar127._8_8_ = (_UNK_150689698 - dVar75 * dVar52) * dVar52;
      auVar103._0_8_ = (___xmm_40000000000000004000000000000000 - dVar41 * dVar100) * dVar100;
      auVar103._8_8_ = (_UNK_150689698 - dVar109 * 0.0) * dVar109;
      uVar14 = movmskps(iVar13,auVar115);
      if ((char)uVar14 != (char)iVar11) goto LAB_140d32a83;
    }
    auVar55 = blendvps(auVar127,ZEXT816(0),auVar55);
    auVar103 = blendvps(auVar103,ZEXT816(0),auVar25);
    uVar12 = param_5 + 3;
    if (-1 < (int)param_5) {
      uVar12 = param_5;
    }
    dVar65 = auVar55._0_8_;
    dVar75 = auVar55._8_8_;
    dVar41 = auVar103._0_8_;
    if ((int)(uVar12 & 0xfffffffc) < 1) {
      uVar15 = 0;
      if ((int)param_5 < 1) {
        return;
      }
    }
    else {
      lVar17 = 0x20;
      uVar15 = 0;
      do {
        auVar103 = *(undefined1 (*) [16])(param_1 + -0x20 + lVar17);
        auVar55 = *(undefined1 (*) [16])(param_1 + -0x10 + lVar17);
        pfVar1 = (float *)(param_1 + lVar17);
        auVar25 = insertps(auVar55,auVar103,0x8c);
        auVar127 = *(undefined1 (*) [16])(param_2 + -0x20 + lVar17);
        auVar117 = *(undefined1 (*) [16])(param_2 + -0x10 + lVar17);
        puVar2 = (uint *)(param_2 + lVar17);
        auVar106 = insertps(auVar117,auVar127,0x8c);
        dVar101 = (double)auVar103._0_4_ * param_4 - dVar64;
        dVar110 = (double)auVar103._12_4_ * param_4 - dVar64;
        dVar66 = (double)auVar55._8_4_ * param_4 - dVar64;
        dVar76 = (double)pfVar1[1] * param_4 - dVar64;
        dVar79 = (double)auVar103._4_4_ * param_4 - dVar112;
        dVar90 = (double)auVar55._0_4_ * param_4 - dVar112;
        dVar113 = (double)auVar55._12_4_ * param_4 - dVar112;
        dVar121 = (double)pfVar1[2] * param_4 - dVar112;
        dVar157 = (double)auVar25._0_4_ * param_4 - dVar123;
        dVar159 = (double)auVar25._4_4_ * param_4 - dVar123;
        dVar53 = (double)*pfVar1 * param_4 - dVar123;
        dVar62 = (double)pfVar1[3] * param_4 - dVar123;
        dVar124 = dVar139 * dVar79 - dVar143 * dVar101;
        dVar128 = dVar139 * dVar90 - dVar143 * dVar110;
        dVar140 = dVar139 * dVar113 - dVar143 * dVar66;
        dVar144 = dVar139 * dVar121 - dVar143 * dVar76;
        dVar93 = dVar143 * dVar157 - dVar146 * dVar79;
        dVar97 = dVar143 * dVar159 - dVar146 * dVar90;
        dVar134 = dVar143 * dVar53 - dVar146 * dVar113;
        dVar137 = dVar143 * dVar62 - dVar146 * dVar121;
        dVar54 = dVar146 * dVar66 - dVar139 * dVar53;
        dVar63 = dVar146 * dVar76 - dVar139 * dVar62;
        dVar147 = dVar146 * dVar101 - dVar139 * dVar157;
        dVar152 = dVar146 * dVar110 - dVar139 * dVar159;
        dVar93 = dVar93 + dVar93;
        dVar97 = dVar97 + dVar97;
        dVar134 = dVar134 + dVar134;
        dVar137 = dVar137 + dVar137;
        dVar147 = dVar147 + dVar147;
        dVar152 = dVar152 + dVar152;
        dVar54 = dVar54 + dVar54;
        dVar63 = dVar63 + dVar63;
        dVar124 = dVar124 + dVar124;
        dVar128 = dVar128 + dVar128;
        dVar140 = dVar140 + dVar140;
        dVar144 = dVar144 + dVar144;
        dVar135 = (double)(float)(auVar127._0_4_ ^ __xmm_80000000800000008000000080000000);
        dVar138 = (double)(float)(auVar127._12_4_ ^ _UNK_150651574);
        dVar40 = (double)(float)(auVar117._8_4_ ^ _UNK_150651578);
        dVar100 = (double)(float)(puVar2[1] ^ _UNK_15065157c);
        dVar94 = (double)(float)(auVar117._12_4_ ^ _UNK_150651578);
        dVar98 = (double)(float)(puVar2[2] ^ _UNK_15065157c);
        dVar148 = (double)(float)(auVar127._4_4_ ^ __xmm_80000000800000008000000080000000);
        dVar153 = (double)(float)(auVar117._0_4_ ^ _UNK_150651574);
        local_228 = auVar106._0_4_;
        uStack_224 = auVar106._4_4_;
        dVar114 = (double)(float)(*puVar2 ^ _UNK_150651578);
        dVar122 = (double)(float)(puVar2[3] ^ _UNK_15065157c);
        dVar102 = (double)(float)(local_228 ^ __xmm_80000000800000008000000080000000);
        dVar111 = (double)(float)(uStack_224 ^ _UNK_150651574);
        dVar80 = dVar139 * dVar148 - dVar143 * dVar135;
        dVar91 = dVar139 * dVar153 - dVar143 * dVar138;
        dVar67 = dVar139 * dVar94 - dVar143 * dVar40;
        dVar77 = dVar139 * dVar98 - dVar143 * dVar100;
        dVar141 = dVar143 * dVar102 - dVar146 * dVar148;
        dVar145 = dVar143 * dVar111 - dVar146 * dVar153;
        dVar125 = dVar143 * dVar114 - dVar146 * dVar94;
        dVar129 = dVar143 * dVar122 - dVar146 * dVar98;
        dVar52 = dVar146 * dVar40 - dVar139 * dVar114;
        dVar109 = dVar146 * dVar100 - dVar139 * dVar122;
        dVar154 = dVar146 * dVar135 - dVar139 * dVar102;
        dVar156 = dVar146 * dVar138 - dVar139 * dVar111;
        dVar141 = dVar141 + dVar141;
        dVar145 = dVar145 + dVar145;
        dVar125 = dVar125 + dVar125;
        dVar129 = dVar129 + dVar129;
        dVar52 = dVar52 + dVar52;
        dVar109 = dVar109 + dVar109;
        dVar154 = dVar154 + dVar154;
        dVar156 = dVar156 + dVar156;
        dVar80 = dVar80 + dVar80;
        dVar91 = dVar91 + dVar91;
        dVar67 = dVar67 + dVar67;
        dVar77 = dVar77 + dVar77;
        auVar56._0_4_ =
             (float)(((dVar143 * dVar124 - dVar147 * dVar146) + dVar151 * dVar93 + dVar101) * dVar65
                    );
        auVar56._4_4_ =
             (float)(((dVar143 * dVar128 - dVar152 * dVar146) + dVar151 * dVar97 + dVar110) * dVar65
                    );
        auVar83._0_4_ =
             (float)(((dVar139 * dVar147 - dVar93 * dVar143) + dVar151 * dVar124 + dVar157) * dVar41
                    );
        auVar83._4_4_ =
             (float)(((dVar139 * dVar152 - dVar97 * dVar143) + dVar151 * dVar128 + dVar159) * dVar41
                    );
        auVar83._8_8_ = 0;
        auVar56._8_4_ = 0;
        auVar56._12_4_ =
             (float)(((dVar146 * dVar93 - dVar124 * dVar139) + dVar151 * dVar147 + dVar79) * dVar75)
        ;
        auVar68._4_4_ =
             (float)(((dVar146 * dVar134 - dVar140 * dVar139) + dVar151 * dVar54 + dVar113) * dVar75
                    );
        auVar68._0_4_ =
             (float)(((dVar146 * dVar97 - dVar128 * dVar139) + dVar151 * dVar152 + dVar90) * dVar75)
        ;
        auVar68._8_4_ = auVar83._0_4_;
        auVar68._12_4_ = auVar83._4_4_;
        auVar103 = insertps(auVar56,auVar83,0x20);
        puVar16 = (undefined4 *)(param_1 + -0x20 + lVar17);
        *puVar16 = auVar103._0_4_;
        puVar16[1] = auVar103._12_4_;
        puVar16[2] = auVar103._8_4_;
        puVar16[3] = auVar103._4_4_;
        auVar57._0_4_ =
             (float)(((dVar143 * dVar140 - dVar54 * dVar146) + dVar151 * dVar134 + dVar66) * dVar65)
        ;
        auVar57._4_4_ =
             (float)(((dVar143 * dVar144 - dVar63 * dVar146) + dVar151 * dVar137 + dVar76) * dVar65)
        ;
        auVar57._8_8_ = 0;
        auVar103 = insertps(auVar68,auVar57,0x20);
        puVar16 = (undefined4 *)(param_1 + -0x10 + lVar17);
        *puVar16 = auVar103._0_4_;
        puVar16[1] = auVar103._12_4_;
        puVar16[2] = auVar103._8_4_;
        puVar16[3] = auVar103._4_4_;
        pfVar1 = (float *)(param_1 + lVar17);
        *pfVar1 = (float)(((dVar139 * dVar54 - dVar134 * dVar143) + dVar151 * dVar140 + dVar53) *
                         dVar41);
        pfVar1[1] = auVar57._4_4_;
        pfVar1[2] = (float)(((dVar146 * dVar137 - dVar144 * dVar139) + dVar151 * dVar63 + dVar121) *
                           dVar75);
        pfVar1[3] = (float)(((dVar139 * dVar63 - dVar137 * dVar143) + dVar151 * dVar144 + dVar62) *
                           dVar41);
        auVar26._0_4_ =
             (float)(((dVar143 * dVar80 - dVar154 * dVar146) + dVar151 * dVar141 + dVar135) * dVar65
                    );
        auVar26._4_4_ =
             (float)(((dVar143 * dVar91 - dVar156 * dVar146) + dVar151 * dVar145 + dVar138) * dVar65
                    );
        auVar26._8_4_ = 0;
        auVar26._12_4_ =
             (float)(((dVar146 * dVar141 - dVar80 * dVar139) + dVar151 * dVar154 + dVar148) * dVar75
                    );
        auVar69._0_4_ =
             (float)(((dVar139 * dVar154 - dVar141 * dVar143) + dVar151 * dVar80 + dVar102) * dVar41
                    );
        auVar69._4_4_ =
             (float)(((dVar139 * dVar156 - dVar145 * dVar143) + dVar151 * dVar91 + dVar111) * dVar41
                    );
        auVar69._8_8_ = 0;
        auVar44._4_4_ =
             (float)(((dVar146 * dVar125 - dVar67 * dVar139) + dVar151 * dVar52 + dVar94) * dVar75);
        auVar44._0_4_ =
             (float)(((dVar146 * dVar145 - dVar91 * dVar139) + dVar151 * dVar156 + dVar153) * dVar75
                    );
        auVar44._8_4_ = auVar69._0_4_;
        auVar44._12_4_ = auVar69._4_4_;
        auVar103 = insertps(auVar26,auVar69,0x20);
        puVar16 = (undefined4 *)(param_2 + -0x20 + lVar17);
        *puVar16 = auVar103._0_4_;
        puVar16[1] = auVar103._12_4_;
        puVar16[2] = auVar103._8_4_;
        puVar16[3] = auVar103._4_4_;
        auVar27._0_4_ =
             (float)(((dVar143 * dVar67 - dVar52 * dVar146) + dVar151 * dVar125 + dVar40) * dVar65);
        auVar27._4_4_ =
             (float)(((dVar143 * dVar77 - dVar109 * dVar146) + dVar151 * dVar129 + dVar100) * dVar65
                    );
        auVar27._8_8_ = 0;
        auVar103 = insertps(auVar44,auVar27,0x20);
        puVar16 = (undefined4 *)(param_2 + -0x10 + lVar17);
        *puVar16 = auVar103._0_4_;
        puVar16[1] = auVar103._12_4_;
        puVar16[2] = auVar103._8_4_;
        puVar16[3] = auVar103._4_4_;
        pfVar1 = (float *)(param_2 + lVar17);
        *pfVar1 = (float)(((dVar139 * dVar52 - dVar125 * dVar143) + dVar151 * dVar67 + dVar114) *
                         dVar41);
        pfVar1[1] = auVar27._4_4_;
        pfVar1[2] = (float)(((dVar146 * dVar129 - dVar77 * dVar139) + dVar151 * dVar109 + dVar98) *
                           dVar75);
        pfVar1[3] = (float)(((dVar139 * dVar109 - dVar129 * dVar143) + dVar151 * dVar77 + dVar122) *
                           dVar41);
        lVar17 = lVar17 + 0x30;
        uVar15 = uVar15 + 4;
      } while ((int)uVar15 < (int)(uVar12 & 0xfffffffc));
      if ((int)param_5 <= (int)uVar15) {
        return;
      }
    }
    auVar58._0_4_ =
         -(uint)((int)(uVar15 | (uint)__xmm_00000003000000020000000100000000) < (int)param_5);
    auVar58._4_4_ =
         -(uint)((int)(uVar15 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_5);
    auVar58._8_4_ = -(uint)((int)(uVar15 | _UNK_150631e08) < (int)param_5);
    auVar58._12_4_ = -(uint)((int)(uVar15 | _UNK_150631e0c) < (int)param_5);
    uVar8 = (ulonglong)uVar15;
    local_288 = uVar8 * 3;
    pauVar9 = (undefined1 (*) [16])(param_1 + uVar8 * 0xc);
    iVar13 = movmskps(uVar15,auVar58);
    bVar10 = (char)((char)iVar13 << 4) >> 4;
    if (iVar13 == 0xf) {
      auVar103 = *pauVar9;
      auVar55 = pauVar9[1];
      auVar29._0_4_ = auVar103._0_4_;
      auVar127 = insertps(auVar55,auVar103,0x8c);
      auVar29._4_4_ = auVar103._12_4_;
      auVar29._8_4_ = auVar55._8_4_;
      auVar29._12_4_ = *(undefined4 *)(pauVar9[2] + 4);
      auVar45._4_4_ = auVar55._0_4_;
      auVar45._0_4_ = auVar103._4_4_;
      auVar45._8_4_ = auVar55._12_4_;
      auVar45._12_4_ = *(undefined4 *)(pauVar9[2] + 8);
      auVar126._0_8_ = auVar127._0_8_;
      auVar126._8_4_ = *(undefined4 *)pauVar9[2];
      auVar126._12_4_ = *(undefined4 *)(pauVar9[2] + 0xc);
      puVar16 = (undefined4 *)(param_2 + uVar8 * 0xc);
      auVar103 = *(undefined1 (*) [16])(param_2 + uVar8 * 0xc);
      auVar55 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar8 * 0xc);
      puVar3 = (undefined4 *)(param_2 + 0x20 + uVar8 * 0xc);
      auVar149._0_4_ = auVar103._0_4_;
      auVar127 = insertps(auVar55,auVar103,0x8c);
      auVar149._4_4_ = auVar103._12_4_;
      auVar149._8_4_ = auVar55._8_4_;
      auVar149._12_4_ = puVar3[1];
      auVar158._4_4_ = auVar55._0_4_;
      auVar158._0_4_ = auVar103._4_4_;
      auVar158._8_4_ = auVar55._12_4_;
      auVar158._12_4_ = puVar3[2];
      auVar155._0_8_ = auVar127._0_8_;
      auVar155._8_4_ = *puVar3;
      auVar155._12_4_ = puVar3[3];
    }
    else {
      auVar28._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar58._0_4_;
      auVar28._4_4_ = _UNK_150b50da4 & auVar58._4_4_;
      auVar28._8_4_ = _UNK_150b50da8 & auVar58._8_4_;
      auVar28._12_4_ = _UNK_150b50dac & auVar58._12_4_;
      lVar18 = extractps(auVar28,1);
      lVar19 = extractps(auVar28,2);
      lVar17 = extractps(auVar28,3);
      auVar103 = insertps(ZEXT416(*(uint *)*pauVar9),*(undefined4 *)(*pauVar9 + lVar18),0x10);
      auVar103 = insertps(auVar103,*(undefined4 *)(*pauVar9 + lVar19),0x20);
      auVar29 = insertps(auVar103,*(undefined4 *)(*pauVar9 + lVar17),0x30);
      auVar103 = ___xmm_000000280000001c0000001000000004 & auVar58;
      auVar55 = insertps(ZEXT416(*(uint *)(*pauVar9 + auVar103._0_4_)),
                         *(undefined4 *)(*pauVar9 + auVar103._4_4_),0x10);
      auVar55 = insertps(auVar55,*(undefined4 *)(*pauVar9 + auVar103._8_4_),0x20);
      auVar45 = insertps(auVar55,*(undefined4 *)(*pauVar9 + auVar103._12_4_),0x30);
      auVar58 = auVar58 & ___xmm_0000002c000000200000001400000008;
      auVar55 = insertps(ZEXT416(*(uint *)(*pauVar9 + auVar58._0_4_)),
                         *(undefined4 *)(*pauVar9 + auVar58._4_4_),0x10);
      auVar55 = insertps(auVar55,*(undefined4 *)(*pauVar9 + auVar58._8_4_),0x20);
      auVar126 = insertps(auVar55,*(undefined4 *)(*pauVar9 + auVar58._12_4_),0x30);
      puVar16 = (undefined4 *)(param_2 + uVar8 * 0xc);
      auVar55 = insertps(ZEXT416(*(uint *)(param_2 + uVar8 * 0xc)),
                         *(undefined4 *)(lVar18 + (longlong)puVar16),0x10);
      auVar55 = insertps(auVar55,*(undefined4 *)(lVar19 + (longlong)puVar16),0x20);
      auVar149 = insertps(auVar55,*(undefined4 *)(lVar17 + (longlong)puVar16),0x30);
      auVar55 = insertps(ZEXT416(*(uint *)((ulonglong)auVar103._0_4_ + (longlong)puVar16)),
                         *(undefined4 *)((ulonglong)auVar103._4_4_ + (longlong)puVar16),0x10);
      auVar55 = insertps(auVar55,*(undefined4 *)((ulonglong)auVar103._8_4_ + (longlong)puVar16),0x20
                        );
      auVar158 = insertps(auVar55,*(undefined4 *)((ulonglong)auVar103._12_4_ + (longlong)puVar16),
                          0x30);
      auVar103 = insertps(ZEXT416(*(uint *)((ulonglong)auVar58._0_4_ + (longlong)puVar16)),
                          *(undefined4 *)((ulonglong)auVar58._4_4_ + (longlong)puVar16),0x10);
      auVar103 = insertps(auVar103,*(undefined4 *)((ulonglong)auVar58._8_4_ + (longlong)puVar16),
                          0x20);
      auVar155 = insertps(auVar103,*(undefined4 *)((ulonglong)auVar58._12_4_ + (longlong)puVar16),
                          0x30);
    }
    dVar40 = (double)auVar29._8_4_ * param_4 - dVar64;
    dVar52 = (double)auVar29._12_4_ * param_4 - dVar64;
    dVar66 = (double)auVar29._0_4_ * param_4 - dVar64;
    dVar64 = (double)auVar29._4_4_ * param_4 - dVar64;
    dVar67 = (double)auVar45._8_4_ * param_4 - dVar112;
    dVar76 = (double)auVar45._12_4_ * param_4 - dVar112;
    dVar94 = (double)auVar45._0_4_ * param_4 - dVar112;
    dVar112 = (double)auVar45._4_4_ * param_4 - dVar112;
    dVar62 = (double)auVar126._8_4_ * param_4 - dVar123;
    dVar63 = (double)auVar126._12_4_ * param_4 - dVar123;
    dVar101 = (double)auVar126._0_4_ * param_4 - dVar123;
    dVar123 = (double)auVar126._4_4_ * param_4 - dVar123;
    dVar102 = dVar139 * dVar94 - dVar143 * dVar66;
    dVar113 = dVar139 * dVar112 - dVar143 * dVar64;
    dVar122 = dVar139 * dVar67 - dVar143 * dVar40;
    dVar125 = dVar139 * dVar76 - dVar143 * dVar52;
    dVar141 = dVar143 * dVar101 - dVar146 * dVar94;
    dVar145 = dVar143 * dVar123 - dVar146 * dVar112;
    dVar148 = dVar143 * dVar62 - dVar146 * dVar67;
    dVar153 = dVar143 * dVar63 - dVar146 * dVar76;
    dVar135 = dVar146 * dVar66 - dVar139 * dVar101;
    dVar138 = dVar146 * dVar64 - dVar139 * dVar123;
    dVar80 = dVar146 * dVar40 - dVar139 * dVar62;
    dVar91 = dVar146 * dVar52 - dVar139 * dVar63;
    dVar141 = dVar141 + dVar141;
    dVar145 = dVar145 + dVar145;
    dVar148 = dVar148 + dVar148;
    dVar153 = dVar153 + dVar153;
    dVar135 = dVar135 + dVar135;
    dVar138 = dVar138 + dVar138;
    dVar80 = dVar80 + dVar80;
    dVar91 = dVar91 + dVar91;
    dVar102 = dVar102 + dVar102;
    dVar113 = dVar113 + dVar113;
    dVar122 = dVar122 + dVar122;
    dVar125 = dVar125 + dVar125;
    dVar110 = (double)(float)(auVar149._8_4_ ^ _UNK_150651578);
    dVar114 = (double)(float)(auVar149._12_4_ ^ _UNK_15065157c);
    dVar100 = (double)(float)(auVar158._8_4_ ^ _UNK_150651578);
    dVar53 = (double)(float)(auVar158._12_4_ ^ _UNK_15065157c);
    dVar97 = dVar139 * dVar100 - dVar143 * dVar110;
    dVar98 = dVar139 * dVar53 - dVar143 * dVar114;
    dVar109 = (double)(float)(auVar149._0_4_ ^ __xmm_80000000800000008000000080000000);
    dVar54 = (double)(float)(auVar149._4_4_ ^ _UNK_150651574);
    dVar111 = (double)(float)(auVar158._0_4_ ^ __xmm_80000000800000008000000080000000);
    dVar121 = (double)(float)(auVar158._4_4_ ^ _UNK_150651574);
    dVar77 = dVar139 * dVar111 - dVar143 * dVar109;
    dVar79 = dVar139 * dVar121 - dVar143 * dVar54;
    dVar152 = (double)(float)(auVar155._8_4_ ^ _UNK_150651578);
    dVar154 = (double)(float)(auVar155._12_4_ ^ _UNK_15065157c);
    dVar129 = dVar143 * dVar152 - dVar146 * dVar100;
    dVar134 = dVar143 * dVar154 - dVar146 * dVar53;
    dVar90 = (double)(float)(auVar155._0_4_ ^ __xmm_80000000800000008000000080000000);
    dVar93 = (double)(float)(auVar155._4_4_ ^ _UNK_150651574);
    dVar137 = dVar143 * dVar90 - dVar146 * dVar111;
    dVar140 = dVar143 * dVar93 - dVar146 * dVar121;
    dVar124 = dVar146 * dVar110 - dVar139 * dVar152;
    dVar128 = dVar146 * dVar114 - dVar139 * dVar154;
    dVar144 = dVar146 * dVar109 - dVar139 * dVar90;
    dVar147 = dVar146 * dVar54 - dVar139 * dVar93;
    dVar129 = dVar129 + dVar129;
    dVar134 = dVar134 + dVar134;
    dVar137 = dVar137 + dVar137;
    dVar140 = dVar140 + dVar140;
    dVar124 = dVar124 + dVar124;
    dVar128 = dVar128 + dVar128;
    dVar144 = dVar144 + dVar144;
    dVar147 = dVar147 + dVar147;
    dVar97 = dVar97 + dVar97;
    dVar98 = dVar98 + dVar98;
    dVar77 = dVar77 + dVar77;
    dVar79 = dVar79 + dVar79;
    fVar37 = (float)(((dVar143 * dVar125 - dVar91 * dVar146) + dVar151 * dVar153 + dVar52) * dVar65)
    ;
    uVar22 = CONCAT44(fVar37,(float)(((dVar143 * dVar122 - dVar80 * dVar146) +
                                     dVar151 * dVar148 + dVar40) * dVar65));
    fVar130 = (float)(((dVar143 * dVar102 - dVar135 * dVar146) + dVar151 * dVar141 + dVar66) *
                     dVar65);
    auVar133._0_8_ =
         CONCAT44((float)(((dVar143 * dVar113 - dVar138 * dVar146) + dVar151 * dVar145 + dVar64) *
                         dVar65),fVar130);
    auVar133._8_8_ = uVar22;
    fVar99 = (float)(((dVar146 * dVar148 - dVar122 * dVar139) + dVar151 * dVar80 + dVar67) * dVar75)
    ;
    fVar38 = (float)(((dVar146 * dVar153 - dVar125 * dVar139) + dVar151 * dVar91 + dVar76) * dVar75)
    ;
    auVar86._12_4_ = fVar38;
    auVar86._8_4_ = fVar99;
    auVar86._0_4_ =
         (float)(((dVar146 * dVar141 - dVar102 * dVar139) + dVar151 * dVar135 + dVar94) * dVar75);
    auVar86._4_4_ =
         (float)(((dVar146 * dVar145 - dVar113 * dVar139) + dVar151 * dVar138 + dVar112) * dVar75);
    fVar39 = (float)(((dVar139 * dVar80 - dVar148 * dVar143) + dVar151 * dVar122 + dVar62) * dVar41)
    ;
    fVar51 = (float)(((dVar139 * dVar91 - dVar153 * dVar143) + dVar151 * dVar125 + dVar63) * dVar41)
    ;
    auVar72._12_4_ = fVar51;
    auVar72._8_4_ = fVar39;
    auVar72._0_4_ =
         (float)(((dVar139 * dVar135 - dVar141 * dVar143) + dVar151 * dVar102 + dVar101) * dVar41);
    auVar72._4_4_ =
         (float)(((dVar139 * dVar138 - dVar145 * dVar143) + dVar151 * dVar113 + dVar123) * dVar41);
    auVar61._0_4_ =
         (float)(((dVar143 * dVar77 - dVar144 * dVar146) + dVar151 * dVar137 + dVar109) * dVar65);
    auVar61._4_4_ =
         (float)(((dVar143 * dVar79 - dVar147 * dVar146) + dVar151 * dVar140 + dVar54) * dVar65);
    auVar61._12_4_ =
         (float)(((dVar143 * dVar98 - dVar128 * dVar146) + dVar151 * dVar134 + dVar114) * dVar65);
    auVar61._8_4_ =
         (float)(((dVar143 * dVar97 - dVar124 * dVar146) + dVar151 * dVar129 + dVar110) * dVar65);
    auVar50._0_4_ =
         (float)(((dVar146 * dVar137 - dVar77 * dVar139) + dVar151 * dVar144 + dVar111) * dVar75);
    auVar50._4_4_ =
         (float)(((dVar146 * dVar140 - dVar79 * dVar139) + dVar151 * dVar147 + dVar121) * dVar75);
    auVar50._12_4_ =
         (float)(((dVar146 * dVar134 - dVar98 * dVar139) + dVar151 * dVar128 + dVar53) * dVar75);
    auVar50._8_4_ =
         (float)(((dVar146 * dVar129 - dVar97 * dVar139) + dVar151 * dVar124 + dVar100) * dVar75);
    auVar36._0_4_ =
         (float)(((dVar139 * dVar144 - dVar137 * dVar143) + dVar151 * dVar77 + dVar90) * dVar41);
    auVar36._4_4_ =
         (float)(((dVar139 * dVar147 - dVar140 * dVar143) + dVar151 * dVar79 + dVar93) * dVar41);
    auVar36._12_4_ =
         (float)(((dVar139 * dVar128 - dVar134 * dVar143) + dVar151 * dVar98 + dVar154) * dVar41);
    auVar36._8_4_ =
         (float)(((dVar139 * dVar124 - dVar129 * dVar143) + dVar151 * dVar97 + dVar152) * dVar41);
    if ((~bVar10 & 0xf) == 0) {
      auVar95._8_8_ = uVar22;
      auVar95._0_8_ = auVar133._0_8_;
      auVar103 = insertps(auVar95,auVar86,0x30);
      auVar119._4_4_ = fVar99;
      auVar119._0_4_ = auVar86._4_4_;
      auVar119._8_4_ = auVar72._0_4_;
      auVar119._12_4_ = auVar72._4_4_;
      auVar103 = insertps(auVar103,auVar72,0x20);
      *(int *)*pauVar9 = auVar103._0_4_;
      *(int *)(*pauVar9 + 4) = auVar103._12_4_;
      *(int *)(*pauVar9 + 8) = auVar103._8_4_;
      *(int *)(*pauVar9 + 0xc) = auVar103._4_4_;
      auVar103 = blendps(auVar119,auVar133,4);
      *(int *)pauVar9[1] = auVar103._0_4_;
      *(int *)(pauVar9[1] + 4) = auVar103._12_4_;
      *(int *)(pauVar9[1] + 8) = auVar103._8_4_;
      *(int *)(pauVar9[1] + 0xc) = auVar103._4_4_;
      goto LAB_140d34d23;
    }
    if ((bVar10 & 1) != 0) {
      *(float *)*pauVar9 = fVar130;
    }
    if ((bVar10 & 2) != 0) {
      uVar22 = extractps(auVar133,1);
      *(undefined8 *)(*pauVar9 + 0xc) = uVar22;
    }
    if ((bVar10 & 4) != 0) {
      uVar22 = extractps(auVar133,2);
      *(undefined8 *)(pauVar9[1] + 8) = uVar22;
    }
    if ((char)bVar10 < '\0') {
      uVar22 = extractps(auVar133,3);
      *(undefined8 *)(pauVar9[2] + 4) = uVar22;
    }
    if ((bVar10 & 1) != 0) {
      *(float *)(*pauVar9 + 4) = auVar86._0_4_;
    }
    if ((bVar10 & 2) != 0) {
      uVar22 = extractps(auVar86,1);
      *(undefined8 *)pauVar9[1] = uVar22;
    }
    if ((bVar10 & 4) != 0) {
      uVar22 = extractps(auVar86,2);
      *(undefined8 *)(pauVar9[1] + 0xc) = uVar22;
    }
    if ((char)bVar10 < '\0') {
      uVar22 = extractps(auVar86,3);
      *(undefined8 *)(pauVar9[2] + 8) = uVar22;
    }
    if ((bVar10 & 1) != 0) {
      *(float *)(*pauVar9 + 8) = auVar72._0_4_;
    }
    if ((bVar10 & 2) != 0) {
      uVar22 = extractps(auVar72,1);
      *(undefined8 *)(pauVar9[1] + 4) = uVar22;
    }
    if ((bVar10 & 4) != 0) {
      uVar22 = extractps(auVar72,2);
      *(undefined8 *)pauVar9[2] = uVar22;
    }
    if ((char)bVar10 < '\0') {
      uVar22 = extractps(auVar72,3);
      *(undefined8 *)(pauVar9[2] + 0xc) = uVar22;
    }
    goto joined_r0x000140d34e37;
  }
  uVar12 = -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <
                  (double)((ulonglong)dVar65 & __xmm_7fffffffffffffff7fffffffffffffff));
  uVar20 = -(uint)(_UNK_150aa88b8 < (double)((ulonglong)dVar75 & _UNK_15061cc88));
  uVar15 = -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <
                  (double)(__xmm_7fffffffffffffff7fffffffffffffff & (ulonglong)dVar41));
  auVar104._4_4_ = uVar20;
  auVar104._0_4_ = uVar12;
  auVar104._8_4_ = uVar15;
  auVar104._12_4_ = -(uint)(_UNK_150aa88b8 < 0.0);
  auVar81._0_4_ = uVar78 & uVar12;
  auVar81._4_4_ = uVar88 & uVar20;
  auVar81._8_4_ = uVar89 & uVar15;
  auVar81._12_4_ = uVar92 & -(uint)(_UNK_150aa88b8 < 0.0);
  iVar13 = movmskps((int)param_3,auVar81);
  if (iVar13 == 0) {
    auVar81 = ZEXT816(0);
LAB_140d33475:
    auVar107._8_4_ = 0xffffffff;
    auVar107._0_8_ = 0xffffffffffffffff;
    auVar107._12_4_ = 0xffffffff;
    dVar100 = (double)(___xmm_7fcfffffffffffff7fcfffffffffffff -
                      (___xmm_7fe00000000000007fe0000000000000 & (ulonglong)dVar65));
    dVar109 = (double)((longlong)_UNK_150b51628 - (_UNK_150b51678 & (ulonglong)dVar75));
    dVar40 = (double)(___xmm_7fcfffffffffffff7fcfffffffffffff -
                     ((ulonglong)dVar41 & ___xmm_7fe00000000000007fe0000000000000));
    fVar99 = (float)(dVar65 * dVar100);
    fVar37 = (float)(dVar75 * dVar109);
    auVar118._0_4_ = (float)(dVar41 * dVar40);
    auVar118._4_4_ = (float)(_UNK_150b51628 * 0.0);
    auVar118._8_8_ = 0;
    auVar7._4_4_ = fVar37;
    auVar7._0_4_ = fVar99;
    auVar7._8_4_ = auVar118._0_4_;
    auVar7._12_4_ = auVar118._4_4_;
    auVar117 = rcpps(auVar118,auVar7);
    auVar107 = auVar107 ^ auVar81;
    dVar40 = (double)((_UNK_15076ba38 - auVar118._0_4_ * auVar117._8_4_) * auVar117._8_4_) * dVar40;
    dVar52 = (double)((_UNK_15076ba3c - auVar118._4_4_ * auVar117._12_4_) * auVar117._12_4_) *
             _UNK_150b51628;
    dVar100 = (double)((___xmm_40000000400000004000000040000000 - fVar99 * auVar117._0_4_) *
                      auVar117._0_4_) * dVar100;
    dVar109 = (double)((_UNK_15076ba34 - fVar37 * auVar117._4_4_) * auVar117._4_4_) * dVar109;
    dVar100 = (___xmm_40000000000000004000000000000000 - dVar65 * dVar100) * dVar100;
    dVar109 = (_UNK_150689698 - dVar75 * dVar109) * dVar109;
    dVar40 = (___xmm_40000000000000004000000000000000 - dVar41 * dVar40) * dVar40;
    dVar52 = (_UNK_150689698 - dVar52 * 0.0) * dVar52;
    auVar132._0_8_ = (___xmm_40000000000000004000000000000000 - dVar41 * dVar40) * dVar40;
    auVar132._8_8_ = (_UNK_150689698 - dVar52 * 0.0) * dVar52;
    auVar84._0_8_ = (___xmm_40000000000000004000000000000000 - dVar65 * dVar100) * dVar100;
    auVar84._8_8_ = (_UNK_150689698 - dVar75 * dVar109) * dVar109;
    auVar30._4_4_ = auVar107._0_4_;
    auVar30._0_4_ = auVar107._0_4_;
    auVar30._8_4_ = auVar107._4_4_;
    auVar30._12_4_ = auVar107._4_4_;
    auVar127 = blendvps(auVar127,auVar84,auVar30);
    auVar31._4_4_ = auVar107._8_4_;
    auVar31._0_4_ = auVar107._8_4_;
    auVar31._8_4_ = auVar107._12_4_;
    auVar31._12_4_ = auVar107._12_4_;
    auVar103 = blendvps(auVar103,auVar132,auVar31);
  }
  else {
    auVar43._0_4_ = (float)dVar65;
    auVar43._4_4_ = (float)dVar75;
    fVar99 = (float)dVar41;
    auVar43._8_4_ = fVar99;
    auVar43._12_4_ = 0;
    auVar103 = rcpps(ZEXT416((uint)fVar99),auVar43);
    dVar40 = (double)((___xmm_40000000400000004000000040000000 - auVar43._0_4_ * auVar103._0_4_) *
                     auVar103._0_4_);
    dVar52 = (double)((_UNK_15076ba34 - auVar43._4_4_ * auVar103._4_4_) * auVar103._4_4_);
    dVar100 = (double)((_UNK_15076ba38 - fVar99 * auVar103._8_4_) * auVar103._8_4_);
    dVar109 = (double)((_UNK_15076ba3c - auVar103._12_4_ * 0.0) * auVar103._12_4_);
    dVar100 = (___xmm_40000000000000004000000000000000 - dVar41 * dVar100) * dVar100;
    dVar109 = (_UNK_150689698 - dVar109 * 0.0) * dVar109;
    dVar40 = (___xmm_40000000000000004000000000000000 - dVar65 * dVar40) * dVar40;
    dVar52 = (_UNK_150689698 - dVar75 * dVar52) * dVar52;
    auVar127._0_8_ = (___xmm_40000000000000004000000000000000 - dVar65 * dVar40) * dVar40;
    auVar127._8_8_ = (_UNK_150689698 - dVar75 * dVar52) * dVar52;
    auVar103._0_8_ = (___xmm_40000000000000004000000000000000 - dVar41 * dVar100) * dVar100;
    auVar103._8_8_ = (_UNK_150689698 - dVar109 * 0.0) * dVar109;
    uVar14 = movmskps(0xf,auVar104);
    if ((char)uVar14 != (char)iVar13) goto LAB_140d33475;
  }
  auVar55 = blendvps(auVar127,ZEXT816(0),auVar55);
  auVar103 = blendvps(auVar103,ZEXT816(0),auVar25);
  uVar12 = param_5 + 3;
  if (-1 < (int)param_5) {
    uVar12 = param_5;
  }
  dVar65 = auVar55._0_8_;
  dVar75 = auVar55._8_8_;
  dVar41 = auVar103._0_8_;
  if ((int)(uVar12 & 0xfffffffc) < 1) {
    uVar15 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    lVar17 = 0x20;
    uVar15 = 0;
    do {
      auVar103 = *(undefined1 (*) [16])(param_1 + -0x20 + lVar17);
      auVar55 = *(undefined1 (*) [16])(param_1 + -0x10 + lVar17);
      pfVar1 = (float *)(param_1 + lVar17);
      auVar25 = insertps(auVar55,auVar103,0x8c);
      auVar127 = *(undefined1 (*) [16])(param_2 + -0x20 + lVar17);
      auVar117 = *(undefined1 (*) [16])(param_2 + -0x10 + lVar17);
      puVar2 = (uint *)(param_2 + lVar17);
      auVar106 = insertps(auVar117,auVar127,0x8c);
      dVar52 = (double)auVar103._0_4_ * param_4 - dVar64;
      dVar100 = (double)auVar103._12_4_ * param_4 - dVar64;
      dVar40 = (double)auVar55._8_4_ * param_4 - dVar64;
      dVar109 = (double)pfVar1[1] * param_4 - dVar64;
      dVar152 = (double)auVar103._4_4_ * param_4 - dVar112;
      dVar153 = (double)auVar55._0_4_ * param_4 - dVar112;
      dVar137 = (double)auVar55._12_4_ * param_4 - dVar112;
      dVar140 = (double)pfVar1[2] * param_4 - dVar112;
      dVar154 = (double)auVar25._0_4_ * param_4 - dVar123;
      dVar156 = (double)auVar25._4_4_ * param_4 - dVar123;
      dVar67 = (double)*pfVar1 * param_4 - dVar123;
      dVar79 = (double)pfVar1[3] * param_4 - dVar123;
      dVar124 = dVar139 * dVar152 - dVar143 * dVar52;
      dVar128 = dVar139 * dVar153 - dVar143 * dVar100;
      dVar144 = dVar139 * dVar137 - dVar143 * dVar40;
      dVar147 = dVar139 * dVar140 - dVar143 * dVar109;
      dVar102 = dVar143 * dVar154 - dVar146 * dVar152;
      dVar110 = dVar143 * dVar156 - dVar146 * dVar153;
      dVar113 = dVar143 * dVar67 - dVar146 * dVar137;
      dVar121 = dVar143 * dVar79 - dVar146 * dVar140;
      dVar76 = dVar146 * dVar40 - dVar139 * dVar67;
      dVar80 = dVar146 * dVar109 - dVar139 * dVar79;
      dVar91 = dVar146 * dVar52 - dVar139 * dVar154;
      dVar94 = dVar146 * dVar100 - dVar139 * dVar156;
      dVar102 = dVar102 + dVar102;
      dVar110 = dVar110 + dVar110;
      dVar113 = dVar113 + dVar113;
      dVar121 = dVar121 + dVar121;
      dVar91 = dVar91 + dVar91;
      dVar94 = dVar94 + dVar94;
      dVar76 = dVar76 + dVar76;
      dVar80 = dVar80 + dVar80;
      dVar124 = dVar124 + dVar124;
      dVar128 = dVar128 + dVar128;
      dVar144 = dVar144 + dVar144;
      dVar147 = dVar147 + dVar147;
      dVar114 = (double)(float)(auVar127._0_4_ ^ __xmm_80000000800000008000000080000000);
      dVar122 = (double)(float)(auVar127._12_4_ ^ _UNK_150651574);
      dVar54 = (double)(float)(auVar117._8_4_ ^ _UNK_150651578);
      dVar63 = (double)(float)(puVar2[1] ^ _UNK_15065157c);
      dVar52 = (dVar143 * dVar124 - dVar91 * dVar146) + dVar151 * dVar102 + dVar52;
      dVar100 = (dVar143 * dVar128 - dVar94 * dVar146) + dVar151 * dVar110 + dVar100;
      auVar5._8_4_ = SUB84(dVar100,0);
      auVar5._0_8_ = dVar52;
      auVar5._12_4_ = (int)((ulonglong)dVar100 >> 0x20);
      dVar138 = (double)(float)(auVar117._12_4_ ^ _UNK_150651578);
      dVar141 = (double)(float)(puVar2[2] ^ _UNK_15065157c);
      dVar77 = (double)(float)(auVar127._4_4_ ^ __xmm_80000000800000008000000080000000);
      dVar90 = (double)(float)(auVar117._0_4_ ^ _UNK_150651574);
      local_228 = auVar106._0_4_;
      uStack_224 = auVar106._4_4_;
      dVar100 = (double)(float)(*puVar2 ^ _UNK_150651578);
      dVar53 = (double)(float)(puVar2[3] ^ _UNK_15065157c);
      dVar93 = (double)(float)(local_228 ^ __xmm_80000000800000008000000080000000);
      dVar97 = (double)(float)(uStack_224 ^ _UNK_150651574);
      dVar98 = dVar139 * dVar77 - dVar143 * dVar114;
      dVar101 = dVar139 * dVar90 - dVar143 * dVar122;
      dVar125 = dVar139 * dVar138 - dVar143 * dVar54;
      dVar129 = dVar139 * dVar141 - dVar143 * dVar63;
      dVar145 = dVar143 * dVar93 - dVar146 * dVar77;
      dVar148 = dVar143 * dVar97 - dVar146 * dVar90;
      auVar6._8_4_ = SUB84(dVar53,0);
      auVar6._0_8_ = dVar100;
      auVar6._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
      dVar62 = dVar143 * dVar100 - dVar146 * dVar138;
      dVar66 = dVar143 * dVar53 - dVar146 * dVar141;
      dVar134 = dVar146 * dVar54 - dVar139 * dVar100;
      dVar135 = dVar146 * dVar63 - dVar139 * dVar53;
      dVar53 = dVar146 * dVar114 - dVar139 * dVar93;
      dVar111 = dVar146 * dVar122 - dVar139 * dVar97;
      dVar145 = dVar145 + dVar145;
      dVar148 = dVar148 + dVar148;
      dVar62 = dVar62 + dVar62;
      dVar66 = dVar66 + dVar66;
      dVar134 = dVar134 + dVar134;
      dVar135 = dVar135 + dVar135;
      dVar53 = dVar53 + dVar53;
      dVar111 = dVar111 + dVar111;
      dVar98 = dVar98 + dVar98;
      dVar101 = dVar101 + dVar101;
      dVar125 = dVar125 + dVar125;
      dVar129 = dVar129 + dVar129;
      dStack_200 = auVar6._8_8_;
      dStack_290 = auVar5._8_8_;
      auVar46._0_4_ = (float)(dVar52 * dVar65);
      auVar46._4_4_ = (float)(dStack_290 * dVar65);
      auVar85._0_4_ =
           (float)(((dVar139 * dVar91 - dVar102 * dVar143) + dVar151 * dVar124 + dVar154) * dVar41);
      auVar85._4_4_ =
           (float)(((dVar139 * dVar94 - dVar110 * dVar143) + dVar151 * dVar128 + dVar156) * dVar41);
      auVar85._8_8_ = 0;
      auVar46._8_4_ = 0;
      auVar46._12_4_ =
           (float)(((dVar146 * dVar102 - dVar124 * dVar139) + dVar151 * dVar91 + dVar152) * dVar75);
      auVar70._4_4_ =
           (float)(((dVar146 * dVar113 - dVar144 * dVar139) + dVar151 * dVar76 + dVar137) * dVar75);
      auVar70._0_4_ =
           (float)(((dVar146 * dVar110 - dVar128 * dVar139) + dVar151 * dVar94 + dVar153) * dVar75);
      auVar70._8_4_ = auVar85._0_4_;
      auVar70._12_4_ = auVar85._4_4_;
      auVar103 = insertps(auVar46,auVar85,0x20);
      puVar16 = (undefined4 *)(param_1 + -0x20 + lVar17);
      *puVar16 = auVar103._0_4_;
      puVar16[1] = auVar103._12_4_;
      puVar16[2] = auVar103._8_4_;
      puVar16[3] = auVar103._4_4_;
      auVar47._0_4_ =
           (float)(((dVar143 * dVar144 - dVar76 * dVar146) + dVar151 * dVar113 + dVar40) * dVar65);
      auVar47._4_4_ =
           (float)(((dVar143 * dVar147 - dVar80 * dVar146) + dVar151 * dVar121 + dVar109) * dVar65);
      auVar47._8_8_ = 0;
      auVar103 = insertps(auVar70,auVar47,0x20);
      puVar16 = (undefined4 *)(param_1 + -0x10 + lVar17);
      *puVar16 = auVar103._0_4_;
      puVar16[1] = auVar103._12_4_;
      puVar16[2] = auVar103._8_4_;
      puVar16[3] = auVar103._4_4_;
      pfVar1 = (float *)(param_1 + lVar17);
      *pfVar1 = (float)(((dVar139 * dVar76 - dVar113 * dVar143) + dVar151 * dVar144 + dVar67) *
                       dVar41);
      pfVar1[1] = auVar47._4_4_;
      pfVar1[2] = (float)(((dVar146 * dVar121 - dVar147 * dVar139) + dVar151 * dVar80 + dVar140) *
                         dVar75);
      pfVar1[3] = (float)(((dVar139 * dVar80 - dVar121 * dVar143) + dVar151 * dVar147 + dVar79) *
                         dVar41);
      auVar32._0_4_ =
           (float)(((dVar143 * dVar98 - dVar53 * dVar146) + dVar151 * dVar145 + dVar114) * dVar65);
      auVar32._4_4_ =
           (float)(((dVar143 * dVar101 - dVar111 * dVar146) + dVar151 * dVar148 + dVar122) * dVar65)
      ;
      auVar32._8_4_ = 0;
      auVar32._12_4_ =
           (float)(((dVar146 * dVar145 - dVar98 * dVar139) + dVar151 * dVar53 + dVar77) * dVar75);
      auVar71._0_4_ =
           (float)(((dVar139 * dVar53 - dVar145 * dVar143) + dVar151 * dVar98 + dVar93) * dVar41);
      auVar71._4_4_ =
           (float)(((dVar139 * dVar111 - dVar148 * dVar143) + dVar151 * dVar101 + dVar97) * dVar41);
      auVar71._8_8_ = 0;
      auVar48._4_4_ =
           (float)(((dVar146 * dVar62 - dVar125 * dVar139) + dVar151 * dVar134 + dVar138) * dVar75);
      auVar48._0_4_ =
           (float)(((dVar146 * dVar148 - dVar101 * dVar139) + dVar151 * dVar111 + dVar90) * dVar75);
      auVar48._8_4_ = auVar71._0_4_;
      auVar48._12_4_ = auVar71._4_4_;
      auVar103 = insertps(auVar32,auVar71,0x20);
      puVar16 = (undefined4 *)(param_2 + -0x20 + lVar17);
      *puVar16 = auVar103._0_4_;
      puVar16[1] = auVar103._12_4_;
      puVar16[2] = auVar103._8_4_;
      puVar16[3] = auVar103._4_4_;
      auVar33._0_4_ =
           (float)(((dVar143 * dVar125 - dVar134 * dVar146) + dVar151 * dVar62 + dVar54) * dVar65);
      auVar33._4_4_ =
           (float)(((dVar143 * dVar129 - dVar135 * dVar146) + dVar151 * dVar66 + dVar63) * dVar65);
      auVar33._8_8_ = 0;
      auVar103 = insertps(auVar48,auVar33,0x20);
      puVar16 = (undefined4 *)(param_2 + -0x10 + lVar17);
      *puVar16 = auVar103._0_4_;
      puVar16[1] = auVar103._12_4_;
      puVar16[2] = auVar103._8_4_;
      puVar16[3] = auVar103._4_4_;
      pfVar1 = (float *)(param_2 + lVar17);
      *pfVar1 = (float)(((dVar139 * dVar134 - dVar62 * dVar143) + dVar151 * dVar125 + dVar100) *
                       dVar41);
      pfVar1[1] = auVar33._4_4_;
      pfVar1[2] = (float)(((dVar146 * dVar66 - dVar129 * dVar139) + dVar151 * dVar135 + dVar141) *
                         dVar75);
      pfVar1[3] = (float)(((dVar139 * dVar135 - dVar66 * dVar143) + dVar151 * dVar129 + dStack_200)
                         * dVar41);
      lVar17 = lVar17 + 0x30;
      uVar15 = uVar15 + 4;
    } while ((int)uVar15 < (int)(uVar12 & 0xfffffffc));
    if ((int)param_5 <= (int)uVar15) {
      return;
    }
  }
  auVar59._0_4_ =
       -(uint)((int)(uVar15 | (uint)__xmm_00000003000000020000000100000000) < (int)param_5);
  auVar59._4_4_ =
       -(uint)((int)(uVar15 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_5);
  auVar59._8_4_ = -(uint)((int)(uVar15 | _UNK_150631e08) < (int)param_5);
  auVar59._12_4_ = -(uint)((int)(uVar15 | _UNK_150631e0c) < (int)param_5);
  uVar8 = (ulonglong)uVar15;
  local_288 = uVar8 * 3;
  pauVar9 = (undefined1 (*) [16])(param_1 + uVar8 * 0xc);
  iVar13 = movmskps(uVar15,auVar59);
  bVar10 = (char)((char)iVar13 << 4) >> 4;
  if (iVar13 == 0xf) {
    auVar103 = *pauVar9;
    auVar55 = pauVar9[1];
    auVar35._0_4_ = auVar103._0_4_;
    auVar127 = insertps(auVar55,auVar103,0x8c);
    auVar35._4_4_ = auVar103._12_4_;
    auVar35._8_4_ = auVar55._8_4_;
    auVar35._12_4_ = *(undefined4 *)(pauVar9[2] + 4);
    auVar49._4_4_ = auVar55._0_4_;
    auVar49._0_4_ = auVar103._4_4_;
    auVar49._8_4_ = auVar55._12_4_;
    auVar49._12_4_ = *(undefined4 *)(pauVar9[2] + 8);
    auVar60._0_8_ = auVar127._0_8_;
    auVar60._8_4_ = *(undefined4 *)pauVar9[2];
    auVar60._12_4_ = *(undefined4 *)(pauVar9[2] + 0xc);
    puVar16 = (undefined4 *)(param_2 + uVar8 * 0xc);
    auVar103 = *(undefined1 (*) [16])(param_2 + uVar8 * 0xc);
    auVar55 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar8 * 0xc);
    puVar3 = (undefined4 *)(param_2 + 0x20 + uVar8 * 0xc);
    auVar136._0_4_ = auVar103._0_4_;
    auVar127 = insertps(auVar55,auVar103,0x8c);
    auVar136._4_4_ = auVar103._12_4_;
    auVar136._8_4_ = auVar55._8_4_;
    auVar136._12_4_ = puVar3[1];
    auVar150._4_4_ = auVar55._0_4_;
    auVar150._0_4_ = auVar103._4_4_;
    auVar150._8_4_ = auVar55._12_4_;
    auVar150._12_4_ = puVar3[2];
    auVar142._0_8_ = auVar127._0_8_;
    auVar142._8_4_ = *puVar3;
    auVar142._12_4_ = puVar3[3];
  }
  else {
    auVar34._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar59._0_4_;
    auVar34._4_4_ = _UNK_150b50da4 & auVar59._4_4_;
    auVar34._8_4_ = _UNK_150b50da8 & auVar59._8_4_;
    auVar34._12_4_ = _UNK_150b50dac & auVar59._12_4_;
    lVar18 = extractps(auVar34,1);
    lVar19 = extractps(auVar34,2);
    lVar17 = extractps(auVar34,3);
    auVar103 = insertps(ZEXT416(*(uint *)*pauVar9),*(undefined4 *)(*pauVar9 + lVar18),0x10);
    auVar103 = insertps(auVar103,*(undefined4 *)(*pauVar9 + lVar19),0x20);
    auVar35 = insertps(auVar103,*(undefined4 *)(*pauVar9 + lVar17),0x30);
    auVar103 = ___xmm_000000280000001c0000001000000004 & auVar59;
    auVar55 = insertps(ZEXT416(*(uint *)(*pauVar9 + auVar103._0_4_)),
                       *(undefined4 *)(*pauVar9 + auVar103._4_4_),0x10);
    auVar55 = insertps(auVar55,*(undefined4 *)(*pauVar9 + auVar103._8_4_),0x20);
    auVar49 = insertps(auVar55,*(undefined4 *)(*pauVar9 + auVar103._12_4_),0x30);
    auVar59 = auVar59 & ___xmm_0000002c000000200000001400000008;
    auVar55 = insertps(ZEXT416(*(uint *)(*pauVar9 + auVar59._0_4_)),
                       *(undefined4 *)(*pauVar9 + auVar59._4_4_),0x10);
    auVar55 = insertps(auVar55,*(undefined4 *)(*pauVar9 + auVar59._8_4_),0x20);
    auVar60 = insertps(auVar55,*(undefined4 *)(*pauVar9 + auVar59._12_4_),0x30);
    puVar16 = (undefined4 *)(param_2 + uVar8 * 0xc);
    auVar55 = insertps(ZEXT416(*(uint *)(param_2 + uVar8 * 0xc)),
                       *(undefined4 *)(lVar18 + (longlong)puVar16),0x10);
    auVar55 = insertps(auVar55,*(undefined4 *)(lVar19 + (longlong)puVar16),0x20);
    auVar136 = insertps(auVar55,*(undefined4 *)(lVar17 + (longlong)puVar16),0x30);
    auVar55 = insertps(ZEXT416(*(uint *)((ulonglong)auVar103._0_4_ + (longlong)puVar16)),
                       *(undefined4 *)((ulonglong)auVar103._4_4_ + (longlong)puVar16),0x10);
    auVar55 = insertps(auVar55,*(undefined4 *)((ulonglong)auVar103._8_4_ + (longlong)puVar16),0x20);
    auVar150 = insertps(auVar55,*(undefined4 *)((ulonglong)auVar103._12_4_ + (longlong)puVar16),0x30
                       );
    auVar103 = insertps(ZEXT416(*(uint *)((ulonglong)auVar59._0_4_ + (longlong)puVar16)),
                        *(undefined4 *)((ulonglong)auVar59._4_4_ + (longlong)puVar16),0x10);
    auVar103 = insertps(auVar103,*(undefined4 *)((ulonglong)auVar59._8_4_ + (longlong)puVar16),0x20)
    ;
    auVar142 = insertps(auVar103,*(undefined4 *)((ulonglong)auVar59._12_4_ + (longlong)puVar16),0x30
                       );
  }
  dVar53 = (double)auVar35._8_4_ * param_4 - dVar64;
  dVar62 = (double)auVar35._12_4_ * param_4 - dVar64;
  dVar124 = (double)auVar35._0_4_ * param_4 - dVar64;
  dVar64 = (double)auVar35._4_4_ * param_4 - dVar64;
  dVar40 = (double)auVar49._8_4_ * param_4 - dVar112;
  dVar100 = (double)auVar49._12_4_ * param_4 - dVar112;
  dVar111 = (double)auVar49._0_4_ * param_4 - dVar112;
  dVar112 = (double)auVar49._4_4_ * param_4 - dVar112;
  dVar76 = (double)auVar60._8_4_ * param_4 - dVar123;
  dVar77 = (double)auVar60._12_4_ * param_4 - dVar123;
  dVar93 = (double)auVar60._0_4_ * param_4 - dVar123;
  dVar123 = (double)auVar60._4_4_ * param_4 - dVar123;
  dVar129 = dVar139 * dVar111 - dVar143 * dVar124;
  dVar134 = dVar139 * dVar112 - dVar143 * dVar64;
  dVar141 = dVar139 * dVar40 - dVar143 * dVar53;
  dVar145 = dVar139 * dVar100 - dVar143 * dVar62;
  dVar148 = dVar143 * dVar93 - dVar146 * dVar111;
  dVar153 = dVar143 * dVar123 - dVar146 * dVar112;
  dVar98 = dVar143 * dVar76 - dVar146 * dVar40;
  dVar102 = dVar143 * dVar77 - dVar146 * dVar100;
  dVar135 = dVar146 * dVar124 - dVar139 * dVar93;
  dVar138 = dVar146 * dVar64 - dVar139 * dVar123;
  dVar79 = dVar146 * dVar53 - dVar139 * dVar76;
  dVar90 = dVar146 * dVar62 - dVar139 * dVar77;
  dVar148 = dVar148 + dVar148;
  dVar153 = dVar153 + dVar153;
  dVar98 = dVar98 + dVar98;
  dVar102 = dVar102 + dVar102;
  dVar135 = dVar135 + dVar135;
  dVar138 = dVar138 + dVar138;
  dVar79 = dVar79 + dVar79;
  dVar90 = dVar90 + dVar90;
  dVar129 = dVar129 + dVar129;
  dVar134 = dVar134 + dVar134;
  dVar141 = dVar141 + dVar141;
  dVar145 = dVar145 + dVar145;
  dVar94 = (double)(float)(auVar136._8_4_ ^ _UNK_150651578);
  dVar97 = (double)(float)(auVar136._12_4_ ^ _UNK_15065157c);
  dVar144 = (double)(float)(auVar150._8_4_ ^ _UNK_150651578);
  dVar147 = (double)(float)(auVar150._12_4_ ^ _UNK_15065157c);
  dVar66 = dVar139 * dVar144 - dVar143 * dVar94;
  dVar67 = dVar139 * dVar147 - dVar143 * dVar97;
  dVar152 = (double)(float)(auVar136._0_4_ ^ __xmm_80000000800000008000000080000000);
  dVar154 = (double)(float)(auVar136._4_4_ ^ _UNK_150651574);
  dVar54 = (double)(float)(auVar150._0_4_ ^ __xmm_80000000800000008000000080000000);
  dVar63 = (double)(float)(auVar150._4_4_ ^ _UNK_150651574);
  dVar101 = dVar139 * dVar54 - dVar143 * dVar152;
  dVar110 = dVar139 * dVar63 - dVar143 * dVar154;
  dVar125 = (double)(float)(auVar142._8_4_ ^ _UNK_150651578);
  dVar128 = (double)(float)(auVar142._12_4_ ^ _UNK_15065157c);
  dVar113 = dVar143 * dVar125 - dVar146 * dVar144;
  dVar114 = dVar143 * dVar128 - dVar146 * dVar147;
  dVar52 = (double)(float)(auVar142._0_4_ ^ __xmm_80000000800000008000000080000000);
  dVar109 = (double)(float)(auVar142._4_4_ ^ _UNK_150651574);
  dVar80 = dVar143 * dVar52 - dVar146 * dVar54;
  dVar91 = dVar143 * dVar109 - dVar146 * dVar63;
  dVar121 = dVar146 * dVar94 - dVar139 * dVar125;
  dVar122 = dVar146 * dVar97 - dVar139 * dVar128;
  dVar137 = dVar146 * dVar152 - dVar139 * dVar52;
  dVar140 = dVar146 * dVar154 - dVar139 * dVar109;
  dVar113 = dVar113 + dVar113;
  dVar114 = dVar114 + dVar114;
  dVar80 = dVar80 + dVar80;
  dVar91 = dVar91 + dVar91;
  dVar121 = dVar121 + dVar121;
  dVar122 = dVar122 + dVar122;
  dVar137 = dVar137 + dVar137;
  dVar140 = dVar140 + dVar140;
  dVar66 = dVar66 + dVar66;
  dVar67 = dVar67 + dVar67;
  dVar101 = dVar101 + dVar101;
  dVar110 = dVar110 + dVar110;
  fVar37 = (float)(((dVar143 * dVar145 - dVar90 * dVar146) + dVar151 * dVar102 + dVar62) * dVar65);
  uVar22 = CONCAT44(fVar37,(float)(((dVar143 * dVar141 - dVar79 * dVar146) +
                                   dVar151 * dVar98 + dVar53) * dVar65));
  fVar130 = (float)(((dVar143 * dVar129 - dVar135 * dVar146) + dVar151 * dVar148 + dVar124) * dVar65
                   );
  auVar108._0_8_ =
       CONCAT44((float)(((dVar143 * dVar134 - dVar138 * dVar146) + dVar151 * dVar153 + dVar64) *
                       dVar65),fVar130);
  auVar108._8_8_ = uVar22;
  fVar99 = (float)(((dVar146 * dVar98 - dVar141 * dVar139) + dVar151 * dVar79 + dVar40) * dVar75);
  fVar38 = (float)(((dVar146 * dVar102 - dVar145 * dVar139) + dVar151 * dVar90 + dVar100) * dVar75);
  auVar87._12_4_ = fVar38;
  auVar87._8_4_ = fVar99;
  auVar87._0_4_ =
       (float)(((dVar146 * dVar148 - dVar129 * dVar139) + dVar151 * dVar135 + dVar111) * dVar75);
  auVar87._4_4_ =
       (float)(((dVar146 * dVar153 - dVar134 * dVar139) + dVar151 * dVar138 + dVar112) * dVar75);
  fVar39 = (float)(((dVar139 * dVar79 - dVar98 * dVar143) + dVar151 * dVar141 + dVar76) * dVar41);
  fVar51 = (float)(((dVar139 * dVar90 - dVar102 * dVar143) + dVar151 * dVar145 + dVar77) * dVar41);
  auVar96._12_4_ = fVar51;
  auVar96._8_4_ = fVar39;
  auVar96._0_4_ =
       (float)(((dVar139 * dVar135 - dVar148 * dVar143) + dVar151 * dVar129 + dVar93) * dVar41);
  auVar96._4_4_ =
       (float)(((dVar139 * dVar138 - dVar153 * dVar143) + dVar151 * dVar134 + dVar123) * dVar41);
  auVar61._0_4_ =
       (float)(((dVar143 * dVar101 - dVar137 * dVar146) + dVar151 * dVar80 + dVar152) * dVar65);
  auVar61._4_4_ =
       (float)(((dVar143 * dVar110 - dVar140 * dVar146) + dVar151 * dVar91 + dVar154) * dVar65);
  auVar61._12_4_ =
       (float)(((dVar143 * dVar67 - dVar122 * dVar146) + dVar151 * dVar114 + dVar97) * dVar65);
  auVar61._8_4_ =
       (float)(((dVar143 * dVar66 - dVar121 * dVar146) + dVar151 * dVar113 + dVar94) * dVar65);
  auVar50._0_4_ =
       (float)(((dVar146 * dVar80 - dVar101 * dVar139) + dVar151 * dVar137 + dVar54) * dVar75);
  auVar50._4_4_ =
       (float)(((dVar146 * dVar91 - dVar110 * dVar139) + dVar151 * dVar140 + dVar63) * dVar75);
  auVar50._12_4_ =
       (float)(((dVar146 * dVar114 - dVar67 * dVar139) + dVar151 * dVar122 + dVar147) * dVar75);
  auVar50._8_4_ =
       (float)(((dVar146 * dVar113 - dVar66 * dVar139) + dVar151 * dVar121 + dVar144) * dVar75);
  auVar36._0_4_ =
       (float)(((dVar139 * dVar137 - dVar80 * dVar143) + dVar151 * dVar101 + dVar52) * dVar41);
  auVar36._4_4_ =
       (float)(((dVar139 * dVar140 - dVar91 * dVar143) + dVar151 * dVar110 + dVar109) * dVar41);
  auVar36._12_4_ =
       (float)(((dVar139 * dVar122 - dVar114 * dVar143) + dVar151 * dVar67 + dVar128) * dVar41);
  auVar36._8_4_ =
       (float)(((dVar139 * dVar121 - dVar113 * dVar143) + dVar151 * dVar66 + dVar125) * dVar41);
  if ((~bVar10 & 0xf) == 0) {
    auVar73._8_8_ = uVar22;
    auVar73._0_8_ = auVar108._0_8_;
    auVar103 = insertps(auVar73,auVar87,0x30);
    auVar120._4_4_ = fVar99;
    auVar120._0_4_ = auVar87._4_4_;
    auVar120._8_4_ = auVar96._0_4_;
    auVar120._12_4_ = auVar96._4_4_;
    auVar103 = insertps(auVar103,auVar96,0x20);
    *(int *)*pauVar9 = auVar103._0_4_;
    *(int *)(*pauVar9 + 4) = auVar103._12_4_;
    *(int *)(*pauVar9 + 8) = auVar103._8_4_;
    *(int *)(*pauVar9 + 0xc) = auVar103._4_4_;
    auVar103 = blendps(auVar120,auVar108,4);
    *(int *)pauVar9[1] = auVar103._0_4_;
    *(int *)(pauVar9[1] + 4) = auVar103._12_4_;
    *(int *)(pauVar9[1] + 8) = auVar103._8_4_;
    *(int *)(pauVar9[1] + 0xc) = auVar103._4_4_;
LAB_140d34d23:
    *(float *)pauVar9[2] = fVar39;
    *(float *)(pauVar9[2] + 4) = fVar37;
    *(float *)(pauVar9[2] + 8) = fVar38;
    *(float *)(pauVar9[2] + 0xc) = fVar51;
    auVar103 = insertps(auVar61,auVar50,0x30);
    auVar103 = insertps(auVar103,auVar36,0x20);
    *puVar16 = auVar103._0_4_;
    puVar16[1] = auVar103._12_4_;
    puVar16[2] = auVar103._8_4_;
    puVar16[3] = auVar103._4_4_;
    auVar74._0_8_ = auVar50._4_8_;
    auVar74._8_4_ = auVar36._0_4_;
    auVar74._12_4_ = auVar36._4_4_;
    auVar103 = blendps(auVar74,auVar61,4);
    puVar16 = (undefined4 *)(param_2 + 0x10 + local_288 * 4);
    *puVar16 = auVar103._0_4_;
    puVar16[1] = auVar103._12_4_;
    puVar16[2] = auVar103._8_4_;
    puVar16[3] = auVar103._4_4_;
    puVar16 = (undefined4 *)(param_2 + 0x20 + local_288 * 4);
    *puVar16 = auVar36._8_4_;
    puVar16[1] = auVar61._12_4_;
    puVar16[2] = auVar50._12_4_;
    puVar16[3] = auVar36._12_4_;
    return;
  }
  if ((bVar10 & 1) != 0) {
    *(float *)*pauVar9 = fVar130;
  }
  if ((bVar10 & 2) != 0) {
    uVar22 = extractps(auVar108,1);
    *(undefined8 *)(*pauVar9 + 0xc) = uVar22;
  }
  if ((bVar10 & 4) != 0) {
    uVar22 = extractps(auVar108,2);
    *(undefined8 *)(pauVar9[1] + 8) = uVar22;
  }
  if ((char)bVar10 < '\0') {
    uVar22 = extractps(auVar108,3);
    *(undefined8 *)(pauVar9[2] + 4) = uVar22;
  }
  if ((bVar10 & 1) != 0) {
    *(float *)(*pauVar9 + 4) = auVar87._0_4_;
  }
  if ((bVar10 & 2) != 0) {
    uVar22 = extractps(auVar87,1);
    *(undefined8 *)pauVar9[1] = uVar22;
  }
  if ((bVar10 & 4) != 0) {
    uVar22 = extractps(auVar87,2);
    *(undefined8 *)(pauVar9[1] + 0xc) = uVar22;
  }
  if ((char)bVar10 < '\0') {
    uVar22 = extractps(auVar87,3);
    *(undefined8 *)(pauVar9[2] + 8) = uVar22;
  }
  if ((bVar10 & 1) != 0) {
    *(float *)(*pauVar9 + 8) = auVar96._0_4_;
  }
  if ((bVar10 & 2) != 0) {
    uVar22 = extractps(auVar96,1);
    *(undefined8 *)(pauVar9[1] + 4) = uVar22;
  }
  if ((bVar10 & 4) != 0) {
    uVar22 = extractps(auVar96,2);
    *(undefined8 *)pauVar9[2] = uVar22;
  }
  if ((char)bVar10 < '\0') {
    uVar22 = extractps(auVar96,3);
    *(undefined8 *)(pauVar9[2] + 0xc) = uVar22;
  }
joined_r0x000140d34e37:
  if ((bVar10 & 1) != 0) {
    *puVar16 = auVar61._0_4_;
  }
  if ((bVar10 & 2) != 0) {
    uVar22 = extractps(auVar61,1);
    *(undefined8 *)(param_2 + 0xc + local_288 * 4) = uVar22;
  }
  if ((bVar10 & 4) != 0) {
    uVar22 = extractps(auVar61,2);
    *(undefined8 *)(param_2 + 0x18 + local_288 * 4) = uVar22;
  }
  if ((char)bVar10 < '\0') {
    uVar22 = extractps(auVar61,3);
    *(undefined8 *)(param_2 + 0x24 + local_288 * 4) = uVar22;
  }
  if ((bVar10 & 1) != 0) {
    *(int *)(param_2 + 4 + local_288 * 4) = auVar50._0_4_;
  }
  if ((bVar10 & 2) != 0) {
    uVar22 = extractps(auVar50,1);
    *(undefined8 *)(param_2 + 0x10 + local_288 * 4) = uVar22;
  }
  if ((bVar10 & 4) != 0) {
    uVar22 = extractps(auVar50,2);
    *(undefined8 *)(param_2 + 0x1c + local_288 * 4) = uVar22;
  }
  if ((char)bVar10 < '\0') {
    uVar22 = extractps(auVar50,3);
    *(undefined8 *)(param_2 + 0x28 + local_288 * 4) = uVar22;
  }
  if ((bVar10 & 1) != 0) {
    *(int *)(param_2 + 8 + local_288 * 4) = auVar36._0_4_;
  }
  if ((bVar10 & 2) != 0) {
    uVar22 = extractps(auVar36,1);
    *(undefined8 *)(param_2 + 0x14 + local_288 * 4) = uVar22;
  }
  if ((bVar10 & 4) != 0) {
    uVar22 = extractps(auVar36,2);
    *(undefined8 *)(param_2 + 0x20 + local_288 * 4) = uVar22;
  }
  if ((char)bVar10 < '\0') {
    uVar22 = extractps(auVar36,3);
    *(undefined8 *)(param_2 + 0x2c + local_288 * 4) = uVar22;
  }
  return;
}

// TransformClothSimulDataAndCheckFinite___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_REFs_5B__c_unFTransform_5D_CundCuni_sse4 @ 140d34f80

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
TransformClothSimulDataAndCheckFinite___un_3C_s_5B_unFVector3f_5D__3E_un_3C_s_5B_unFVector3f_5D__3E_REFs_5B__c_unFTransform_5D_CundCuni_sse4
          (longlong param_1,longlong param_2,uint *param_3,double param_4,uint param_5,
          undefined1 (*param_6) [16])

{
  uint *puVar1;
  undefined1 (*pauVar2) [16];
  undefined4 *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
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
  undefined1 auVar20 [12];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  uint uVar23;
  ulonglong uVar24;
  undefined1 *puVar25;
  byte bVar26;
  int iVar27;
  undefined4 in_R9D;
  int iVar28;
  undefined4 uVar29;
  uint uVar30;
  float *pfVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  float fVar35;
  float fVar80;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar81;
  undefined1 auVar41 [16];
  float fVar36;
  float fVar37;
  float fVar82;
  float fVar83;
  float fVar84;
  undefined1 auVar42 [16];
  ulonglong uVar85;
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
  ulonglong uVar86;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  ulonglong uVar87;
  undefined1 auVar59 [16];
  double dVar88;
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
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  double dVar89;
  double dVar107;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  double dVar90;
  double dVar108;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  ulonglong uVar91;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  double dVar109;
  undefined1 auVar112 [16];
  double dVar110;
  double dVar130;
  double dVar131;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  ulonglong uVar132;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  ulonglong uVar111;
  ulonglong uVar133;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  double dVar134;
  double dVar144;
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  double dVar145;
  undefined1 auVar147 [16];
  double dVar155;
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  double dVar146;
  double dVar156;
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  float fVar154;
  double dVar157;
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  uint uVar158;
  double dVar159;
  uint uVar173;
  uint uVar174;
  uint uVar177;
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  double dVar175;
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  double dVar160;
  double dVar176;
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  float fVar178;
  uint uVar179;
  double dVar180;
  uint uVar194;
  undefined1 auVar184 [16];
  double dVar195;
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  double dVar181;
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  double dVar182;
  double dVar183;
  double dVar196;
  double dVar197;
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  double dVar198;
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar204 [16];
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  double dVar199;
  double dVar211;
  double dVar212;
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  float fVar213;
  double dVar214;
  undefined1 auVar215 [16];
  float fVar221;
  undefined1 auVar216 [16];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  double dVar222;
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  double dVar223;
  double dVar227;
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  float fVar228;
  double dVar229;
  double dVar230;
  undefined1 auVar231 [16];
  double dVar236;
  undefined1 auVar232 [16];
  float fVar235;
  double dVar237;
  undefined1 auVar233 [16];
  undefined1 auVar234 [16];
  double dVar238;
  undefined1 auVar240 [16];
  double dVar239;
  double dVar242;
  double dVar243;
  undefined1 auVar241 [16];
  float fVar244;
  double dVar245;
  double dVar246;
  double dVar247;
  double dVar248;
  float fVar252;
  double dVar253;
  undefined1 auVar249 [16];
  double dVar254;
  double dVar255;
  double dVar256;
  undefined1 auVar250 [16];
  undefined1 auVar251 [16];
  float fVar257;
  double dVar258;
  undefined1 unaff_XMM13 [16];
  float fVar260;
  undefined1 auVar259 [16];
  double dVar261;
  float fVar262;
  float fVar263;
  float fVar264;
  float fVar265;
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [8];
  float fStack_240;
  float fStack_23c;
  undefined1 local_218 [8];
  undefined8 uStack_210;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1b8;
  undefined1 auVar79 [15];
  
  auVar68 = *param_6;
  iVar28 = movmskps(in_R9D,auVar68);
  dVar89 = *(double *)(param_3 + 4) * ___xmm_3ff0000000000000bff0000000000000;
  dVar107 = *(double *)(param_3 + 6) * _UNK_15076b868;
  local_1d8 = (double)CONCAT44(param_3[1] ^ __xmm_80000000000000008000000000000000._4_4_,
                               *param_3 ^ (uint)__xmm_80000000000000008000000000000000);
  uStack_1d0 = (double)CONCAT44(param_3[3] ^ _UNK_15066df7c,param_3[2] ^ _UNK_15066df78);
  dVar196 = *(double *)(param_3 + 8);
  dVar88 = *(double *)(param_3 + 10);
  dVar237 = *(double *)(param_3 + 0xc);
  dVar181 = *(double *)(param_3 + 0x14);
  dVar246 = *(double *)(param_3 + 0x10);
  dVar254 = *(double *)(param_3 + 0x12);
  auVar184._0_8_ = (double)(__xmm_7fffffffffffffff7fffffffffffffff & (ulonglong)dVar181);
  auVar184._8_8_ = 0.0;
  uVar23 = -(uint)(auVar184._0_8_ <= ___xmm_3e45798ee2308c3a3e45798ee2308c3a);
  uVar179 = -(uint)(0.0 <= _UNK_150aa88b8);
  uVar30 = -(uint)((double)((ulonglong)dVar246 & __xmm_7fffffffffffffff7fffffffffffffff) <=
                  ___xmm_3e45798ee2308c3a3e45798ee2308c3a);
  uVar194 = -(uint)((double)((ulonglong)dVar254 & _UNK_15061cc88) <= _UNK_150aa88b8);
  auVar202._4_4_ = uVar194;
  auVar202._0_4_ = uVar30;
  auVar202._8_4_ = uVar23;
  auVar202._12_4_ = uVar179;
  auVar112._8_8_ = -(ulonglong)(0.0 <= _UNK_150b51658);
  auVar112._0_8_ = -(ulonglong)(dVar181 <= ___xmm_46c8a6e32246c99c46c8a6e32246c99c);
  uVar158 = -(uint)(___xmm_3914c4e977ba1f5c3914c4e977ba1f5c <= dVar246 &&
                   dVar246 <= ___xmm_46c8a6e32246c99c46c8a6e32246c99c);
  uVar173 = -(uint)(_UNK_150b51668 <= dVar254 && dVar254 <= _UNK_150b51658);
  uVar174 = -(uint)(___xmm_3914c4e977ba1f5c3914c4e977ba1f5c <= dVar181) &
            (uint)-(ulonglong)(dVar181 <= ___xmm_46c8a6e32246c99c46c8a6e32246c99c);
  uVar177 = -(uint)(_UNK_150b51668 <= 0.0) & (uint)-(ulonglong)(0.0 <= _UNK_150b51658);
  auVar112 = pmovsxdq(auVar112,auVar202);
  auVar186._4_4_ = uVar23;
  auVar186._0_4_ = uVar23;
  auVar186._8_4_ = uVar179;
  auVar186._12_4_ = uVar179;
  puVar25 = (undefined1 *)(ulonglong)param_5;
  if (iVar28 == 0xf) {
    uVar23 = -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <
                    (double)((ulonglong)dVar246 & __xmm_7fffffffffffffff7fffffffffffffff));
    uVar30 = -(uint)(_UNK_150aa88b8 < (double)((ulonglong)dVar254 & _UNK_15061cc88));
    auVar188._8_8_ = (double)-(ulonglong)(_UNK_150aa88b8 < 0.0);
    auVar188._0_8_ = (double)-(ulonglong)(___xmm_3e45798ee2308c3a3e45798ee2308c3a < auVar184._0_8_);
    uVar179 = (uint)-(ulonglong)(___xmm_3e45798ee2308c3a3e45798ee2308c3a < auVar184._0_8_);
    uVar194 = (uint)-(ulonglong)(_UNK_150aa88b8 < 0.0);
    auVar148._4_4_ = uVar30;
    auVar148._0_4_ = uVar23;
    auVar148._8_4_ = uVar179;
    auVar148._12_4_ = uVar194;
    auVar162._0_4_ = uVar158 & uVar23;
    auVar162._4_4_ = uVar173 & uVar30;
    auVar162._8_4_ = uVar174 & uVar179;
    auVar162._12_4_ = uVar177 & uVar194;
    iVar28 = movmskps((int)param_3,auVar162);
    if (iVar28 == 0) {
      auVar162 = ZEXT816(0);
LAB_140d35dd6:
      auVar151._8_4_ = 0xffffffff;
      auVar151._0_8_ = 0xffffffffffffffff;
      auVar151._12_4_ = 0xffffffff;
      dVar180 = (double)(___xmm_7fcfffffffffffff7fcfffffffffffff -
                        (___xmm_7fe00000000000007fe0000000000000 & (ulonglong)dVar246));
      dVar195 = (double)((longlong)_UNK_150b51628 - (_UNK_150b51678 & (ulonglong)dVar254));
      dVar145 = (double)(___xmm_7fcfffffffffffff7fcfffffffffffff -
                        ((ulonglong)dVar181 & ___xmm_7fe00000000000007fe0000000000000));
      auVar217._0_4_ = (float)(dVar246 * dVar180);
      auVar217._4_4_ = (float)(dVar254 * dVar195);
      fVar178 = (float)(dVar181 * dVar145);
      auVar205._0_8_ = CONCAT44((float)(_UNK_150b51628 * 0.0),fVar178);
      auVar205._8_8_ = 0;
      auVar217._8_8_ = auVar205._0_8_;
      auVar184 = rcpps(auVar205,auVar217);
      auVar151 = auVar151 ^ auVar162;
      dVar145 = (double)((_UNK_15076ba38 - fVar178 * auVar184._8_4_) * auVar184._8_4_) * dVar145;
      dVar155 = (double)((_UNK_15076ba3c - (float)(_UNK_150b51628 * 0.0) * auVar184._12_4_) *
                        auVar184._12_4_) * _UNK_150b51628;
      dVar180 = (double)((___xmm_40000000400000004000000040000000 - auVar217._0_4_ * auVar184._0_4_)
                        * auVar184._0_4_) * dVar180;
      dVar195 = (double)((_UNK_15076ba34 - auVar217._4_4_ * auVar184._4_4_) * auVar184._4_4_) *
                dVar195;
      dVar180 = (___xmm_40000000000000004000000000000000 - dVar246 * dVar180) * dVar180;
      dVar195 = (_UNK_150689698 - dVar254 * dVar195) * dVar195;
      dVar145 = (___xmm_40000000000000004000000000000000 - dVar181 * dVar145) * dVar145;
      dVar155 = (_UNK_150689698 - dVar155 * 0.0) * dVar155;
      auVar232._0_8_ = (___xmm_40000000000000004000000000000000 - dVar181 * dVar145) * dVar145;
      auVar232._8_8_ = (_UNK_150689698 - dVar155 * 0.0) * dVar155;
      auVar166._0_8_ = (___xmm_40000000000000004000000000000000 - dVar246 * dVar180) * dVar180;
      auVar166._8_8_ = (_UNK_150689698 - dVar254 * dVar195) * dVar195;
      auVar45._4_4_ = auVar151._0_4_;
      auVar45._0_4_ = auVar151._0_4_;
      auVar45._8_4_ = auVar151._4_4_;
      auVar45._12_4_ = auVar151._4_4_;
      auVar68 = blendvps(auVar68,auVar166,auVar45);
      auVar46._4_4_ = auVar151._8_4_;
      auVar46._0_4_ = auVar151._8_4_;
      auVar46._8_4_ = auVar151._12_4_;
      auVar46._12_4_ = auVar151._12_4_;
      auVar188 = blendvps(auVar188,auVar232,auVar46);
    }
    else {
      auVar185._0_4_ = (float)dVar246;
      auVar185._4_4_ = (float)dVar254;
      fVar178 = (float)dVar181;
      auVar185._8_4_ = fVar178;
      auVar185._12_4_ = 0;
      auVar68 = rcpps(ZEXT416((uint)fVar178),auVar185);
      dVar145 = (double)((___xmm_40000000400000004000000040000000 - auVar185._0_4_ * auVar68._0_4_)
                        * auVar68._0_4_);
      dVar155 = (double)((_UNK_15076ba34 - auVar185._4_4_ * auVar68._4_4_) * auVar68._4_4_);
      dVar180 = (double)((_UNK_15076ba38 - fVar178 * auVar68._8_4_) * auVar68._8_4_);
      dVar195 = (double)((_UNK_15076ba3c - auVar68._12_4_ * 0.0) * auVar68._12_4_);
      dVar180 = (___xmm_40000000000000004000000000000000 - dVar181 * dVar180) * dVar180;
      dVar195 = (_UNK_150689698 - dVar195 * 0.0) * dVar195;
      dVar145 = (___xmm_40000000000000004000000000000000 - dVar246 * dVar145) * dVar145;
      dVar155 = (_UNK_150689698 - dVar254 * dVar155) * dVar155;
      auVar68._0_8_ = (___xmm_40000000000000004000000000000000 - dVar246 * dVar145) * dVar145;
      auVar68._8_8_ = (_UNK_150689698 - dVar254 * dVar155) * dVar155;
      auVar188._0_8_ = (___xmm_40000000000000004000000000000000 - dVar181 * dVar180) * dVar180;
      auVar188._8_8_ = (_UNK_150689698 - dVar195 * 0.0) * dVar195;
      uVar29 = movmskps(0xf,auVar148);
      if ((char)uVar29 != (char)iVar28) goto LAB_140d35dd6;
    }
    auVar112 = blendvps(auVar68,ZEXT816(0),auVar112);
    auVar68 = blendvps(auVar188,ZEXT816(0),auVar186);
    uVar23 = param_5 + 3;
    if (-1 < (int)param_5) {
      uVar23 = param_5;
    }
    dVar246 = auVar112._0_8_;
    dVar254 = auVar112._8_8_;
    dVar181 = auVar68._0_8_;
    if ((int)(uVar23 & 0xfffffffc) < 1) {
      uVar30 = 0;
      auVar137._8_4_ = 0xffffffff;
      auVar137._0_8_ = 0xffffffffffffffff;
      auVar137._12_4_ = 0xffffffff;
    }
    else {
      auVar137._8_4_ = 0xffffffff;
      auVar137._0_8_ = 0xffffffffffffffff;
      auVar137._12_4_ = 0xffffffff;
      lVar32 = 0x20;
      uVar30 = 0;
      do {
        auVar68 = *(undefined1 (*) [16])(param_1 + -0x20 + lVar32);
        auVar186 = *(undefined1 (*) [16])(param_1 + -0x10 + lVar32);
        pfVar31 = (float *)(param_1 + lVar32);
        auVar112 = insertps(auVar186,auVar68,0x8c);
        dVar90 = (double)auVar68._0_4_ * param_4 - dVar196;
        dVar108 = (double)auVar68._12_4_ * param_4 - dVar196;
        dVar245 = (double)auVar186._8_4_ * param_4 - dVar196;
        dVar253 = (double)pfVar31[1] * param_4 - dVar196;
        dVar130 = (double)auVar68._4_4_ * param_4 - dVar88;
        dVar131 = (double)auVar186._0_4_ * param_4 - dVar88;
        dVar229 = (double)auVar186._12_4_ * param_4 - dVar88;
        dVar236 = (double)pfVar31[2] * param_4 - dVar88;
        dVar134 = (double)auVar112._0_4_ * param_4 - dVar237;
        dVar146 = (double)auVar112._4_4_ * param_4 - dVar237;
        dVar109 = (double)*pfVar31 * param_4 - dVar237;
        dVar110 = (double)pfVar31[3] * param_4 - dVar237;
        dVar238 = local_1d8 * dVar130 - uStack_1d0 * dVar90;
        dVar242 = local_1d8 * dVar131 - uStack_1d0 * dVar108;
        dVar223 = local_1d8 * dVar229 - uStack_1d0 * dVar245;
        dVar227 = local_1d8 * dVar236 - uStack_1d0 * dVar253;
        dVar159 = uStack_1d0 * dVar134 - dVar89 * dVar130;
        dVar175 = uStack_1d0 * dVar146 - dVar89 * dVar131;
        dVar180 = uStack_1d0 * dVar109 - dVar89 * dVar229;
        dVar195 = uStack_1d0 * dVar110 - dVar89 * dVar236;
        dVar144 = dVar89 * dVar245 - local_1d8 * dVar109;
        dVar156 = dVar89 * dVar253 - local_1d8 * dVar110;
        dVar145 = dVar89 * dVar90 - local_1d8 * dVar134;
        dVar155 = dVar89 * dVar108 - local_1d8 * dVar146;
        dVar159 = dVar159 + dVar159;
        dVar175 = dVar175 + dVar175;
        dVar180 = dVar180 + dVar180;
        dVar195 = dVar195 + dVar195;
        dVar145 = dVar145 + dVar145;
        dVar155 = dVar155 + dVar155;
        dVar144 = dVar144 + dVar144;
        dVar156 = dVar156 + dVar156;
        dVar238 = dVar238 + dVar238;
        dVar242 = dVar242 + dVar242;
        dVar223 = dVar223 + dVar223;
        dVar227 = dVar227 + dVar227;
        local_248._0_4_ =
             (undefined4)
             (((uStack_1d0 * dVar238 - dVar145 * dVar89) + dVar107 * dVar159 + dVar90) * dVar246);
        local_248._4_4_ =
             (undefined4)
             (((uStack_1d0 * dVar242 - dVar155 * dVar89) + dVar107 * dVar175 + dVar108) * dVar246);
        fStack_240 = (float)(((uStack_1d0 * dVar223 - dVar144 * dVar89) +
                             dVar107 * dVar180 + dVar245) * dVar246);
        fStack_23c = (float)(((uStack_1d0 * dVar227 - dVar156 * dVar89) +
                             dVar107 * dVar195 + dVar253) * dVar246);
        fVar213 = (float)(((dVar89 * dVar159 - dVar238 * local_1d8) + dVar107 * dVar145 + dVar130) *
                         dVar254);
        fVar221 = (float)(((dVar89 * dVar175 - dVar242 * local_1d8) + dVar107 * dVar155 + dVar131) *
                         dVar254);
        fVar80 = (float)(((dVar89 * dVar180 - dVar223 * local_1d8) + dVar107 * dVar144 + dVar229) *
                        dVar254);
        fVar81 = (float)(((dVar89 * dVar195 - dVar227 * local_1d8) + dVar107 * dVar156 + dVar236) *
                        dVar254);
        auVar22._8_8_ = dVar181;
        auVar22._0_8_ = dVar181;
        fVar36 = (float)(((local_1d8 * dVar145 - dVar159 * uStack_1d0) + dVar107 * dVar238 + dVar134
                         ) * dVar181);
        fVar37 = (float)(((local_1d8 * dVar155 - dVar175 * uStack_1d0) + dVar107 * dVar242 + dVar146
                         ) * dVar181);
        fVar178 = (float)(((local_1d8 * dVar144 - dVar180 * uStack_1d0) +
                          dVar107 * dVar223 + dVar109) * dVar181);
        fVar35 = (float)(((local_1d8 * dVar156 - dVar195 * uStack_1d0) + dVar107 * dVar227 + dVar110
                         ) * dVar181);
        local_258 = auVar137 & ___xmm_00000000000000000000000001010101;
        if (local_258._0_4_ != 0) {
          local_1b8 = auVar137._0_4_;
          auVar186 = pmovzxbd(auVar22,local_1b8);
          auVar47._0_4_ =
               -(uint)((local_248._0_4_ & __xmm_7f8000007f8000007f8000007f800000) ==
                      __xmm_7f8000007f8000007f8000007f800000);
          auVar47._4_4_ = -(uint)((local_248._4_4_ & _UNK_1506896e4) == _UNK_1506896e4);
          auVar47._8_4_ = -(uint)(((uint)fStack_240 & _UNK_1506896e8) == _UNK_1506896e8);
          auVar47._12_4_ = -(uint)(((uint)fStack_23c & _UNK_1506896ec) == _UNK_1506896ec);
          auVar68 = ~auVar47 & auVar186;
          auVar119._0_4_ = auVar68._0_4_ << 0x1f;
          auVar119._4_4_ = auVar68._4_4_ << 0x1f;
          auVar119._8_4_ = auVar68._8_4_ << 0x1f;
          auVar119._12_4_ = auVar68._12_4_ << 0x1f;
          iVar28 = movmskps(local_258._0_4_,auVar119);
          if (iVar28 != 0) {
            auVar120._0_4_ =
                 -(uint)(((uint)fVar213 & __xmm_7f8000007f8000007f8000007f800000) ==
                        __xmm_7f8000007f8000007f8000007f800000);
            auVar120._4_4_ = -(uint)(((uint)fVar221 & _UNK_1506896e4) == _UNK_1506896e4);
            auVar120._8_4_ = -(uint)(((uint)fVar80 & _UNK_1506896e8) == _UNK_1506896e8);
            auVar120._12_4_ = -(uint)(((uint)fVar81 & _UNK_1506896ec) == _UNK_1506896ec);
            auVar68 = ~auVar47 & ~auVar120 & auVar186;
            auVar99._0_4_ = auVar68._0_4_ << 0x1f;
            auVar99._4_4_ = auVar68._4_4_ << 0x1f;
            auVar99._8_4_ = auVar68._8_4_ << 0x1f;
            auVar99._12_4_ = auVar68._12_4_ << 0x1f;
            iVar28 = movmskps(iVar28,auVar99);
            if (iVar28 != 0) {
              auVar138._0_4_ =
                   -(uint)(((uint)fVar36 & __xmm_7f8000007f8000007f8000007f800000) ==
                          __xmm_7f8000007f8000007f8000007f800000);
              auVar138._4_4_ = -(uint)(((uint)fVar37 & _UNK_1506896e4) == _UNK_1506896e4);
              auVar138._8_4_ = -(uint)(((uint)fVar178 & _UNK_1506896e8) == _UNK_1506896e8);
              auVar138._12_4_ = -(uint)(((uint)fVar35 & _UNK_1506896ec) == _UNK_1506896ec);
              auVar68 = ~auVar138 & auVar68;
            }
          }
          local_258 = pshufb(auVar68,___xmm_0000000000000000000000000c080400);
          local_258 = local_258 & ___xmm_00000000000000000000000001010101;
        }
        auVar68 = *(undefined1 (*) [16])(param_2 + -0x20 + lVar32);
        auVar186 = *(undefined1 (*) [16])(param_2 + -0x10 + lVar32);
        puVar1 = (uint *)(param_2 + lVar32);
        auVar112 = insertps(auVar186,auVar68,0x8c);
        dVar229 = (double)(float)(auVar68._0_4_ ^ __xmm_80000000800000008000000080000000);
        dVar236 = (double)(float)(auVar68._12_4_ ^ _UNK_150651574);
        dVar146 = (double)(float)(auVar186._8_4_ ^ _UNK_150651578);
        dVar156 = (double)(float)(puVar1[1] ^ _UNK_15065157c);
        dVar180 = (double)(float)(auVar68._4_4_ ^ __xmm_80000000800000008000000080000000);
        dVar195 = (double)(float)(auVar186._0_4_ ^ _UNK_150651574);
        dVar245 = (double)(float)(auVar186._12_4_ ^ _UNK_150651578);
        dVar253 = (double)(float)(puVar1[2] ^ _UNK_15065157c);
        dVar130 = (double)(float)(auVar112._0_4_ ^ __xmm_80000000800000008000000080000000);
        dVar131 = (double)(float)(auVar112._4_4_ ^ _UNK_150651574);
        dVar159 = (double)(float)(*puVar1 ^ _UNK_150651578);
        dVar175 = (double)(float)(puVar1[3] ^ _UNK_15065157c);
        dVar90 = local_1d8 * dVar245 - uStack_1d0 * dVar146;
        dVar108 = local_1d8 * dVar253 - uStack_1d0 * dVar156;
        dVar145 = local_1d8 * dVar180 - uStack_1d0 * dVar229;
        dVar155 = local_1d8 * dVar195 - uStack_1d0 * dVar236;
        dVar134 = uStack_1d0 * dVar159 - dVar89 * dVar245;
        dVar144 = uStack_1d0 * dVar175 - dVar89 * dVar253;
        dVar109 = uStack_1d0 * dVar130 - dVar89 * dVar180;
        dVar110 = uStack_1d0 * dVar131 - dVar89 * dVar195;
        dVar223 = dVar89 * dVar146 - local_1d8 * dVar159;
        dVar227 = dVar89 * dVar156 - local_1d8 * dVar175;
        dVar238 = dVar89 * dVar229 - local_1d8 * dVar130;
        dVar242 = dVar89 * dVar236 - local_1d8 * dVar131;
        dVar134 = dVar134 + dVar134;
        dVar144 = dVar144 + dVar144;
        dVar109 = dVar109 + dVar109;
        dVar110 = dVar110 + dVar110;
        dVar223 = dVar223 + dVar223;
        dVar227 = dVar227 + dVar227;
        dVar238 = dVar238 + dVar238;
        dVar242 = dVar242 + dVar242;
        dVar90 = dVar90 + dVar90;
        dVar108 = dVar108 + dVar108;
        dVar145 = dVar145 + dVar145;
        dVar155 = dVar155 + dVar155;
        auVar48._0_8_ =
             CONCAT44((float)(((uStack_1d0 * dVar155 - dVar242 * dVar89) +
                              dVar107 * dVar110 + dVar236) * dVar246),
                      (float)(((uStack_1d0 * dVar145 - dVar238 * dVar89) +
                              dVar107 * dVar109 + dVar229) * dVar246));
        fVar252 = (float)(((uStack_1d0 * dVar108 - dVar227 * dVar89) + dVar107 * dVar144 + dVar156)
                         * dVar246);
        uVar24 = CONCAT44(fVar252,(float)(((uStack_1d0 * dVar90 - dVar223 * dVar89) +
                                          dVar107 * dVar134 + dVar146) * dVar246));
        auVar48._8_8_ = uVar24;
        fVar260 = (float)(((dVar89 * dVar110 - dVar155 * local_1d8) + dVar107 * dVar242 + dVar195) *
                         dVar254);
        auVar189._0_8_ =
             CONCAT44(fVar260,(float)(((dVar89 * dVar109 - dVar145 * local_1d8) +
                                      dVar107 * dVar238 + dVar180) * dVar254));
        fVar84 = (float)(((dVar89 * dVar134 - dVar90 * local_1d8) + dVar107 * dVar223 + dVar245) *
                        dVar254);
        fVar257 = (float)(((dVar89 * dVar144 - dVar108 * local_1d8) + dVar107 * dVar227 + dVar253) *
                         dVar254);
        uVar132 = CONCAT44(fVar257,fVar84);
        auVar189._8_8_ = uVar132;
        fVar154 = (float)(((local_1d8 * dVar238 - dVar109 * uStack_1d0) +
                          dVar107 * dVar145 + dVar130) * dVar181);
        fVar228 = (float)(((local_1d8 * dVar242 - dVar110 * uStack_1d0) +
                          dVar107 * dVar155 + dVar131) * dVar181);
        fVar82 = (float)(((local_1d8 * dVar223 - dVar134 * uStack_1d0) + dVar107 * dVar90 + dVar159)
                        * dVar181);
        fVar83 = (float)(((local_1d8 * dVar227 - dVar144 * uStack_1d0) + dVar107 * dVar108 + dVar175
                         ) * dVar181);
        iVar28 = SUB164(local_258 & ___xmm_00000000000000000000000001010101,0);
        if (iVar28 != 0) {
          auVar68 = pmovzxbd(local_258 & ___xmm_00000000000000000000000001010101,local_258._0_4_);
          uVar87 = CONCAT44(_UNK_1506896e4,__xmm_7f8000007f8000007f8000007f800000);
          auVar18._8_4_ = _UNK_1506896e8;
          auVar18._0_8_ = uVar87;
          auVar18._12_4_ = _UNK_1506896ec;
          uVar85 = auVar18._8_8_;
          auVar121._0_4_ =
               -(uint)((uint)(auVar48._0_8_ & uVar87) == __xmm_7f8000007f8000007f8000007f800000);
          auVar121._4_4_ = -(uint)((uint)((auVar48._0_8_ & uVar87) >> 0x20) == _UNK_1506896e4);
          auVar121._8_4_ = -(uint)((uint)(uVar24 & uVar85) == _UNK_1506896e8);
          auVar121._12_4_ = -(uint)((uint)((uVar24 & uVar85) >> 0x20) == _UNK_1506896ec);
          auVar186 = ~auVar121 & auVar68;
          auVar139._0_4_ = auVar186._0_4_ << 0x1f;
          auVar139._4_4_ = auVar186._4_4_ << 0x1f;
          auVar139._8_4_ = auVar186._8_4_ << 0x1f;
          auVar139._12_4_ = auVar186._12_4_ << 0x1f;
          iVar28 = movmskps(iVar28,auVar139);
          if (iVar28 != 0) {
            uVar132 = uVar132 & uVar85;
            auVar140._0_4_ =
                 -(uint)((uint)(auVar189._0_8_ & uVar87) == __xmm_7f8000007f8000007f8000007f800000);
            auVar140._4_4_ = -(uint)((uint)((auVar189._0_8_ & uVar87) >> 0x20) == _UNK_1506896e4);
            auVar140._8_4_ = -(uint)((uint)uVar132 == _UNK_1506896e8);
            auVar140._12_4_ = -(uint)((uint)(uVar132 >> 0x20) == _UNK_1506896ec);
            auVar186 = ~(auVar121 | auVar140) & auVar68;
            auVar100._0_4_ = auVar186._0_4_ << 0x1f;
            auVar100._4_4_ = auVar186._4_4_ << 0x1f;
            auVar100._8_4_ = auVar186._8_4_ << 0x1f;
            auVar100._12_4_ = auVar186._12_4_ << 0x1f;
            iVar28 = movmskps(iVar28,auVar100);
            if (iVar28 != 0) {
              uVar87 = CONCAT44(fVar228,fVar154) & uVar87;
              uVar85 = CONCAT44(fVar83,fVar82) & uVar85;
              auVar101._0_4_ = -(uint)((uint)uVar87 == __xmm_7f8000007f8000007f8000007f800000);
              auVar101._4_4_ = -(uint)((uint)(uVar87 >> 0x20) == _UNK_1506896e4);
              auVar101._8_4_ = -(uint)((uint)uVar85 == _UNK_1506896e8);
              auVar101._12_4_ = -(uint)((uint)(uVar85 >> 0x20) == _UNK_1506896ec);
              auVar186 = ~auVar101 & auVar186;
            }
          }
          local_258 = pshufb(auVar186,___xmm_0000000000000000000000000c080400);
          local_258 = local_258 & ___xmm_00000000000000000000000001010101;
        }
        auVar137 = local_258 & ___xmm_00000000000000000000000001010101;
        auVar20._4_4_ = fVar221;
        auVar20._0_4_ = fVar213;
        auVar20._8_4_ = fVar80;
        auVar19._12_4_ = fVar81;
        auVar19._0_12_ = auVar20;
        auVar68 = insertps(_local_248,auVar19,0x30);
        auVar21._4_4_ = fVar37;
        auVar21._0_4_ = fVar36;
        auVar21._8_4_ = fVar178;
        auVar21._12_4_ = fVar35;
        auVar117._0_8_ = auVar20._4_8_;
        auVar117._8_4_ = fVar36;
        auVar117._12_4_ = fVar37;
        auVar68 = insertps(auVar68,auVar21,0x20);
        puVar3 = (undefined4 *)(param_1 + -0x20 + lVar32);
        *puVar3 = auVar68._0_4_;
        puVar3[1] = auVar68._12_4_;
        puVar3[2] = auVar68._8_4_;
        puVar3[3] = auVar68._4_4_;
        auVar68 = blendps(auVar117,_local_248,4);
        puVar3 = (undefined4 *)(param_1 + -0x10 + lVar32);
        *puVar3 = auVar68._0_4_;
        puVar3[1] = auVar68._12_4_;
        puVar3[2] = auVar68._8_4_;
        puVar3[3] = auVar68._4_4_;
        pfVar31 = (float *)(param_1 + lVar32);
        *pfVar31 = fVar178;
        pfVar31[1] = fStack_23c;
        pfVar31[2] = fVar81;
        pfVar31[3] = fVar35;
        auVar98._8_8_ = uVar24;
        auVar98._0_8_ = auVar48._0_8_;
        auVar68 = insertps(auVar98,auVar189,0x30);
        auVar118._4_4_ = fVar84;
        auVar118._0_4_ = fVar260;
        auVar118._8_4_ = fVar154;
        auVar118._12_4_ = fVar228;
        auVar11._4_4_ = fVar228;
        auVar11._0_4_ = fVar154;
        auVar11._8_4_ = fVar82;
        auVar11._12_4_ = fVar83;
        auVar68 = insertps(auVar68,auVar11,0x20);
        auVar186._0_4_ = auVar68._0_4_;
        auVar186._8_4_ = auVar68._8_4_;
        auVar186._4_4_ = auVar68._12_4_;
        auVar186._12_4_ = auVar68._4_4_;
        *(undefined1 (*) [16])(param_2 + -0x20 + lVar32) = auVar186;
        auVar68 = blendps(auVar118,auVar48,4);
        puVar3 = (undefined4 *)(param_2 + -0x10 + lVar32);
        *puVar3 = auVar68._0_4_;
        puVar3[1] = auVar68._12_4_;
        puVar3[2] = auVar68._8_4_;
        puVar3[3] = auVar68._4_4_;
        pfVar31 = (float *)(param_2 + lVar32);
        *pfVar31 = fVar82;
        pfVar31[1] = fVar252;
        pfVar31[2] = fVar257;
        pfVar31[3] = fVar83;
        lVar32 = lVar32 + 0x30;
        uVar30 = uVar30 + 4;
      } while ((int)uVar30 < (int)(uVar23 & 0xfffffffc));
    }
    if ((int)uVar30 < (int)param_5) {
      auVar167._0_4_ =
           -(uint)((int)(uVar30 | (uint)__xmm_00000003000000020000000100000000) < (int)param_5);
      auVar167._4_4_ =
           -(uint)((int)(uVar30 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_5);
      auVar167._8_4_ = -(uint)((int)(uVar30 | _UNK_150631e08) < (int)param_5);
      auVar167._12_4_ = -(uint)((int)(uVar30 | _UNK_150631e0c) < (int)param_5);
      uVar24 = (ulonglong)uVar30;
      pauVar2 = (undefined1 (*) [16])(param_1 + uVar24 * 0xc);
      iVar28 = movmskps(uVar30,auVar167);
      if (iVar28 == 0xf) {
        auVar68 = *pauVar2;
        auVar186 = pauVar2[1];
        auVar50._0_4_ = auVar68._0_4_;
        auVar112 = insertps(auVar186,auVar68,0x8c);
        auVar50._4_4_ = auVar68._12_4_;
        auVar50._8_4_ = auVar186._8_4_;
        auVar50._12_4_ = *(undefined4 *)(pauVar2[2] + 4);
        auVar102._4_4_ = auVar186._0_4_;
        auVar102._0_4_ = auVar68._4_4_;
        auVar102._8_4_ = auVar186._12_4_;
        auVar102._12_4_ = *(undefined4 *)(pauVar2[2] + 8);
        auVar141._0_8_ = auVar112._0_8_;
        auVar141._8_4_ = *(undefined4 *)pauVar2[2];
        auVar141._12_4_ = *(undefined4 *)(pauVar2[2] + 0xc);
        pfVar31 = (float *)(param_2 + uVar24 * 0xc);
        auVar68 = *(undefined1 (*) [16])(param_2 + uVar24 * 0xc);
        auVar186 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar24 * 0xc);
        puVar3 = (undefined4 *)(param_2 + 0x20 + uVar24 * 0xc);
        auVar190._0_4_ = auVar68._0_4_;
        auVar112 = insertps(auVar186,auVar68,0x8c);
        auVar190._4_4_ = auVar68._12_4_;
        auVar190._8_4_ = auVar186._8_4_;
        auVar190._12_4_ = puVar3[1];
        auVar206._4_4_ = auVar186._0_4_;
        auVar206._0_4_ = auVar68._4_4_;
        auVar206._8_4_ = auVar186._12_4_;
        auVar206._12_4_ = puVar3[2];
        auVar218._0_8_ = auVar112._0_8_;
        auVar218._8_4_ = *puVar3;
        auVar218._12_4_ = puVar3[3];
        uVar23 = 0xf;
      }
      else {
        auVar49._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar167._0_4_;
        auVar49._4_4_ = _UNK_150b50da4 & auVar167._4_4_;
        auVar49._8_4_ = _UNK_150b50da8 & auVar167._8_4_;
        auVar49._12_4_ = _UNK_150b50dac & auVar167._12_4_;
        lVar33 = extractps(auVar49,1);
        lVar34 = extractps(auVar49,2);
        lVar32 = extractps(auVar49,3);
        auVar68 = insertps(ZEXT416(*(uint *)*pauVar2),*(undefined4 *)(*pauVar2 + lVar33),0x10);
        auVar68 = insertps(auVar68,*(undefined4 *)(*pauVar2 + lVar34),0x20);
        auVar50 = insertps(auVar68,*(undefined4 *)(*pauVar2 + lVar32),0x30);
        auVar68 = ___xmm_000000280000001c0000001000000004 & auVar167;
        auVar186 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar68._0_4_)),
                            *(undefined4 *)(*pauVar2 + auVar68._4_4_),0x10);
        auVar186 = insertps(auVar186,*(undefined4 *)(*pauVar2 + auVar68._8_4_),0x20);
        auVar102 = insertps(auVar186,*(undefined4 *)(*pauVar2 + auVar68._12_4_),0x30);
        auVar186 = ___xmm_0000002c000000200000001400000008 & auVar167;
        uVar23 = auVar186._0_4_;
        auVar112 = insertps(ZEXT416(*(uint *)(*pauVar2 + uVar23)),
                            *(undefined4 *)(*pauVar2 + auVar186._4_4_),0x10);
        auVar112 = insertps(auVar112,*(undefined4 *)(*pauVar2 + auVar186._8_4_),0x20);
        auVar141 = insertps(auVar112,*(undefined4 *)(*pauVar2 + auVar186._12_4_),0x30);
        pfVar31 = (float *)(param_2 + uVar24 * 0xc);
        auVar112 = insertps(ZEXT416(*(uint *)(param_2 + uVar24 * 0xc)),
                            *(undefined4 *)(lVar33 + (longlong)pfVar31),0x10);
        auVar112 = insertps(auVar112,*(undefined4 *)(lVar34 + (longlong)pfVar31),0x20);
        auVar190 = insertps(auVar112,*(undefined4 *)(lVar32 + (longlong)pfVar31),0x30);
        auVar112 = insertps(ZEXT416(*(uint *)((ulonglong)auVar68._0_4_ + (longlong)pfVar31)),
                            *(undefined4 *)((ulonglong)auVar68._4_4_ + (longlong)pfVar31),0x10);
        auVar112 = insertps(auVar112,*(undefined4 *)((ulonglong)auVar68._8_4_ + (longlong)pfVar31),
                            0x20);
        auVar206 = insertps(auVar112,*(undefined4 *)((ulonglong)auVar68._12_4_ + (longlong)pfVar31),
                            0x30);
        auVar68 = insertps(ZEXT416(*(uint *)((ulonglong)uVar23 + (longlong)pfVar31)),
                           *(undefined4 *)((ulonglong)auVar186._4_4_ + (longlong)pfVar31),0x10);
        auVar68 = insertps(auVar68,*(undefined4 *)((ulonglong)auVar186._8_4_ + (longlong)pfVar31),
                           0x20);
        auVar218 = insertps(auVar68,*(undefined4 *)((ulonglong)auVar186._12_4_ + (longlong)pfVar31),
                            0x30);
      }
      dVar199 = (double)auVar50._8_4_ * param_4 - dVar196;
      dVar212 = (double)auVar50._12_4_ * param_4 - dVar196;
      dVar146 = (double)auVar50._0_4_ * param_4 - dVar196;
      dVar196 = (double)auVar50._4_4_ * param_4 - dVar196;
      dVar255 = (double)auVar102._8_4_ * param_4 - dVar88;
      dVar258 = (double)auVar102._12_4_ * param_4 - dVar88;
      dVar90 = (double)auVar102._0_4_ * param_4 - dVar88;
      dVar88 = (double)auVar102._4_4_ * param_4 - dVar88;
      dVar247 = (double)auVar141._8_4_ * param_4 - dVar237;
      dVar248 = (double)auVar141._12_4_ * param_4 - dVar237;
      dVar110 = (double)auVar141._0_4_ * param_4 - dVar237;
      dVar237 = (double)auVar141._4_4_ * param_4 - dVar237;
      dVar175 = local_1d8 * dVar90 - uStack_1d0 * dVar146;
      dVar227 = local_1d8 * dVar88 - uStack_1d0 * dVar196;
      dVar145 = local_1d8 * dVar255 - uStack_1d0 * dVar199;
      dVar180 = local_1d8 * dVar258 - uStack_1d0 * dVar212;
      dVar222 = uStack_1d0 * dVar110 - dVar89 * dVar90;
      dVar239 = uStack_1d0 * dVar237 - dVar89 * dVar88;
      dVar182 = uStack_1d0 * dVar247 - dVar89 * dVar255;
      dVar197 = uStack_1d0 * dVar248 - dVar89 * dVar258;
      dVar242 = dVar89 * dVar146 - local_1d8 * dVar110;
      dVar253 = dVar89 * dVar196 - local_1d8 * dVar237;
      dVar236 = dVar89 * dVar199 - local_1d8 * dVar247;
      dVar238 = dVar89 * dVar212 - local_1d8 * dVar248;
      dVar222 = dVar222 + dVar222;
      dVar239 = dVar239 + dVar239;
      dVar182 = dVar182 + dVar182;
      dVar197 = dVar197 + dVar197;
      dVar242 = dVar242 + dVar242;
      dVar253 = dVar253 + dVar253;
      dVar236 = dVar236 + dVar236;
      dVar238 = dVar238 + dVar238;
      dVar175 = dVar175 + dVar175;
      dVar227 = dVar227 + dVar227;
      dVar145 = dVar145 + dVar145;
      dVar180 = dVar180 + dVar180;
      dVar108 = (double)(float)(auVar190._8_4_ ^ _UNK_150651578);
      dVar109 = (double)(float)(auVar190._12_4_ ^ _UNK_15065157c);
      dVar130 = (double)(float)(auVar206._8_4_ ^ _UNK_150651578);
      dVar134 = (double)(float)(auVar206._12_4_ ^ _UNK_15065157c);
      dVar223 = local_1d8 * dVar130 - uStack_1d0 * dVar108;
      dVar229 = local_1d8 * dVar134 - uStack_1d0 * dVar109;
      dVar131 = (double)(float)(auVar190._0_4_ ^ __xmm_80000000800000008000000080000000);
      dVar144 = (double)(float)(auVar190._4_4_ ^ _UNK_150651574);
      dVar211 = (double)(float)(auVar206._0_4_ ^ __xmm_80000000800000008000000080000000);
      dVar214 = (double)(float)(auVar206._4_4_ ^ _UNK_150651574);
      dVar256 = (double)(float)(auVar218._0_4_ ^ __xmm_80000000800000008000000080000000);
      dVar261 = (double)(float)(auVar218._4_4_ ^ _UNK_150651574);
      dVar160 = local_1d8 * dVar211 - uStack_1d0 * dVar131;
      dVar176 = local_1d8 * dVar214 - uStack_1d0 * dVar144;
      dVar245 = (double)(float)(auVar218._8_4_ ^ _UNK_150651578);
      dVar157 = (double)(float)(auVar218._12_4_ ^ _UNK_15065157c);
      dVar155 = uStack_1d0 * dVar245 - dVar89 * dVar130;
      dVar195 = uStack_1d0 * dVar157 - dVar89 * dVar134;
      dVar183 = uStack_1d0 * dVar256 - dVar89 * dVar211;
      dVar198 = uStack_1d0 * dVar261 - dVar89 * dVar214;
      dVar156 = dVar89 * dVar108 - local_1d8 * dVar245;
      dVar159 = dVar89 * dVar109 - local_1d8 * dVar157;
      dVar230 = dVar89 * dVar131 - local_1d8 * dVar256;
      dVar243 = dVar89 * dVar144 - local_1d8 * dVar261;
      dVar155 = dVar155 + dVar155;
      dVar195 = dVar195 + dVar195;
      dVar183 = dVar183 + dVar183;
      dVar198 = dVar198 + dVar198;
      dVar156 = dVar156 + dVar156;
      dVar159 = dVar159 + dVar159;
      dVar230 = dVar230 + dVar230;
      dVar243 = dVar243 + dVar243;
      dVar223 = dVar223 + dVar223;
      dVar229 = dVar229 + dVar229;
      dVar160 = dVar160 + dVar160;
      dVar176 = dVar176 + dVar176;
      fVar36 = (float)(((uStack_1d0 * dVar180 - dVar238 * dVar89) + dVar107 * dVar197 + dVar212) *
                      dVar246);
      uVar91 = CONCAT44(fVar36,(float)(((uStack_1d0 * dVar145 - dVar236 * dVar89) +
                                       dVar107 * dVar182 + dVar199) * dVar246));
      fVar235 = (float)(((uStack_1d0 * dVar175 - dVar242 * dVar89) + dVar107 * dVar222 + dVar146) *
                       dVar246);
      auVar234._0_8_ =
           CONCAT44((float)(((uStack_1d0 * dVar227 - dVar253 * dVar89) + dVar107 * dVar239 + dVar196
                            ) * dVar246),fVar235);
      auVar170._0_8_ =
           ((local_1d8 * dVar230 - dVar183 * uStack_1d0) + dVar107 * dVar160 + dVar256) * dVar181;
      auVar170._8_8_ =
           ((local_1d8 * dVar243 - dVar198 * uStack_1d0) + dVar107 * dVar176 + dVar261) * dVar181;
      auVar234._8_8_ = uVar91;
      fVar221 = (float)(((dVar89 * dVar182 - dVar145 * local_1d8) + dVar107 * dVar236 + dVar255) *
                       dVar254);
      fVar37 = (float)(((dVar89 * dVar197 - dVar180 * local_1d8) + dVar107 * dVar238 + dVar258) *
                      dVar254);
      auVar103._0_8_ = CONCAT44(fVar37,fVar221);
      auVar103._8_8_ = 0;
      fVar244 = (float)(((dVar89 * dVar222 - dVar175 * local_1d8) + dVar107 * dVar242 + dVar90) *
                       dVar254);
      fVar262 = (float)(((dVar89 * dVar239 - dVar227 * local_1d8) + dVar107 * dVar253 + dVar88) *
                       dVar254);
      auVar251._0_8_ = CONCAT44(fVar262,fVar244);
      fVar82 = (float)(((local_1d8 * dVar236 - dVar182 * uStack_1d0) + dVar107 * dVar145 + dVar247)
                      * dVar181);
      fVar83 = (float)(((local_1d8 * dVar238 - dVar197 * uStack_1d0) + dVar107 * dVar180 + dVar248)
                      * dVar181);
      uVar86 = CONCAT44(fVar83,fVar82);
      auVar251._8_8_ = auVar103._0_8_;
      fVar260 = (float)(((local_1d8 * dVar242 - dVar222 * uStack_1d0) + dVar107 * dVar175 + dVar110)
                       * dVar181);
      fVar154 = (float)(((local_1d8 * dVar253 - dVar239 * uStack_1d0) + dVar107 * dVar227 + dVar237)
                       * dVar181);
      auVar192._0_8_ = CONCAT44(fVar154,fVar260);
      auVar192._8_8_ = uVar86;
      fVar228 = (float)(((uStack_1d0 * dVar160 - dVar230 * dVar89) + dVar107 * dVar183 + dVar131) *
                       dVar246);
      auVar210._0_8_ =
           CONCAT44((float)(((uStack_1d0 * dVar176 - dVar243 * dVar89) + dVar107 * dVar198 + dVar144
                            ) * dVar246),fVar228);
      fVar80 = (float)(((uStack_1d0 * dVar229 - dVar159 * dVar89) + dVar107 * dVar195 + dVar109) *
                      dVar246);
      uVar132 = CONCAT44(fVar80,(float)(((uStack_1d0 * dVar223 - dVar156 * dVar89) +
                                        dVar107 * dVar155 + dVar108) * dVar246));
      bVar26 = (char)((char)iVar28 << 4) >> 4;
      auVar210._8_8_ = uVar132;
      fVar252 = (float)(((dVar89 * dVar183 - dVar160 * local_1d8) + dVar107 * dVar230 + dVar211) *
                       dVar254);
      fVar257 = (float)(((dVar89 * dVar198 - dVar176 * local_1d8) + dVar107 * dVar243 + dVar214) *
                       dVar254);
      auVar153._0_8_ = CONCAT44(fVar257,fVar252);
      fVar178 = (float)(((dVar89 * dVar155 - dVar223 * local_1d8) + dVar107 * dVar156 + dVar130) *
                       dVar254);
      fVar81 = (float)(((dVar89 * dVar195 - dVar229 * local_1d8) + dVar107 * dVar159 + dVar134) *
                      dVar254);
      uVar85 = CONCAT44(fVar81,fVar178);
      fVar84 = (float)auVar170._0_8_;
      auVar143._0_8_ = CONCAT44((float)auVar170._8_8_,fVar84);
      auVar153._8_8_ = uVar85;
      fVar35 = (float)(((local_1d8 * dVar156 - dVar155 * uStack_1d0) + dVar107 * dVar223 + dVar245)
                      * dVar181);
      fVar213 = (float)(((local_1d8 * dVar159 - dVar195 * uStack_1d0) + dVar107 * dVar229 + dVar157)
                       * dVar181);
      uVar87 = CONCAT44(fVar213,fVar35);
      auVar143._8_8_ = uVar87;
      auVar68 = pmovzxbd(auVar170,auVar137);
      auVar112 = auVar68 & auVar167;
      auVar60._0_4_ = auVar112._0_4_ << 0x1f;
      auVar60._4_4_ = auVar112._4_4_ << 0x1f;
      auVar60._8_4_ = auVar112._8_4_ << 0x1f;
      auVar60._12_4_ = auVar112._12_4_ << 0x1f;
      iVar28 = movmskps(uVar23,auVar60);
      auVar186 = auVar103;
      auVar225 = auVar137;
      if (iVar28 != 0) {
        auVar171._0_4_ = (auVar68._0_4_ << 0x1f) >> 0x1f;
        auVar171._4_4_ = (auVar68._4_4_ << 0x1f) >> 0x1f;
        auVar171._8_4_ = (auVar68._8_4_ << 0x1f) >> 0x1f;
        auVar171._12_4_ = (auVar68._12_4_ << 0x1f) >> 0x1f;
        auVar171 = auVar171 & auVar167;
        uVar111 = CONCAT44(_UNK_1506896e4,__xmm_7f8000007f8000007f8000007f800000);
        auVar186._8_4_ = _UNK_1506896e8;
        auVar186._0_8_ = uVar111;
        auVar186._12_4_ = _UNK_1506896ec;
        uVar5 = auVar186._8_8_;
        auVar126._0_4_ =
             -(uint)((uint)(auVar234._0_8_ & uVar111) == __xmm_7f8000007f8000007f8000007f800000);
        auVar126._4_4_ = -(uint)((uint)((auVar234._0_8_ & uVar111) >> 0x20) == _UNK_1506896e4);
        auVar126._8_4_ = -(uint)((uint)(uVar91 & uVar5) == _UNK_1506896e8);
        auVar126._12_4_ = -(uint)((uint)((uVar91 & uVar5) >> 0x20) == _UNK_1506896ec);
        auVar68 = ~auVar126 & auVar112 & ___xmm_00000001000000010000000100000001;
        auVar61._0_4_ = auVar68._0_4_ << 0x1f;
        auVar61._4_4_ = auVar68._4_4_ << 0x1f;
        auVar61._8_4_ = auVar68._8_4_ << 0x1f;
        auVar61._12_4_ = auVar68._12_4_ << 0x1f;
        iVar28 = movmskps(iVar28,auVar61);
        if (iVar28 == 0) {
          auVar69._8_4_ = 0xffffffff;
          auVar69._0_8_ = 0xffffffffffffffff;
          auVar69._12_4_ = 0xffffffff;
          auVar126 = auVar126 ^ auVar69;
          iVar28 = 0;
        }
        else {
          auVar68 = blendvps(auVar171,auVar186,auVar126);
          auVar62._0_4_ =
               -(uint)((uint)(auVar251._0_8_ & uVar111) == __xmm_7f8000007f8000007f8000007f800000);
          auVar62._4_4_ = -(uint)((uint)((auVar251._0_8_ & uVar111) >> 0x20) == _UNK_1506896e4);
          auVar62._8_4_ = -(uint)((uint)(auVar103._0_8_ & uVar5) == _UNK_1506896e8);
          auVar62._12_4_ = -(uint)((uint)((auVar103._0_8_ & uVar5) >> 0x20) == _UNK_1506896ec);
          auVar126 = blendvps(auVar68,auVar186,auVar62);
          auVar68 = auVar112 & ___xmm_00000001000000010000000100000001 & auVar126;
          auVar219._0_4_ = auVar68._0_4_ << 0x1f;
          auVar219._4_4_ = auVar68._4_4_ << 0x1f;
          auVar219._8_4_ = auVar68._8_4_ << 0x1f;
          auVar219._12_4_ = auVar68._12_4_ << 0x1f;
          iVar28 = movmskps(iVar28,auVar219);
          if (iVar28 != 0) {
            auVar127._0_4_ = (auVar126._0_4_ << 0x1f) >> 0x1f;
            auVar127._4_4_ = (auVar126._4_4_ << 0x1f) >> 0x1f;
            auVar127._8_4_ = (auVar126._8_4_ << 0x1f) >> 0x1f;
            auVar127._12_4_ = (auVar126._12_4_ << 0x1f) >> 0x1f;
            uVar86 = uVar86 & uVar5;
            auVar63._0_4_ =
                 -(uint)((uint)(auVar192._0_8_ & uVar111) == __xmm_7f8000007f8000007f8000007f800000)
            ;
            auVar63._4_4_ = -(uint)((uint)((auVar192._0_8_ & uVar111) >> 0x20) == _UNK_1506896e4);
            auVar63._8_4_ = -(uint)((uint)uVar86 == _UNK_1506896e8);
            auVar63._12_4_ = -(uint)((uint)(uVar86 >> 0x20) == _UNK_1506896ec);
            auVar126 = blendvps(auVar127 & auVar171,auVar186,auVar63);
          }
        }
        auVar68 = packssdw(auVar171,auVar171);
        auVar112 = packsswb(auVar68,auVar68);
        auVar68 = pshufb(auVar126,___xmm_0000000000000000000000000c080400);
        auVar68 = psllw(auVar68,7);
        auVar68 = auVar68 & ___xmm_80808080808080808080808080808080;
        auVar79 = SUB1615((undefined1  [16])0x0,1);
        auVar225[0] = -(auVar68[0] < '\0');
        auVar225[1] = -(auVar68[1] < '\0');
        auVar225[2] = -(auVar68[2] < '\0');
        auVar225[3] = -(auVar68[3] < '\0');
        auVar225[4] = -(auVar68[4] < '\0');
        auVar225[5] = -(auVar68[5] < '\0');
        auVar225[6] = -(auVar68[6] < '\0');
        auVar225[7] = -(auVar68[7] < '\0');
        auVar225[8] = -(auVar68[8] < '\0');
        auVar225[9] = -(auVar68[9] < auVar79[8]);
        auVar225[10] = -(auVar68[10] < auVar79[9]);
        auVar225[0xb] = -(auVar68[0xb] < auVar79[10]);
        auVar225[0xc] = -(auVar68[0xc] < auVar79[0xb]);
        auVar225[0xd] = -(auVar68[0xd] < auVar79[0xc]);
        auVar225[0xe] = -(auVar68[0xe] < auVar79[0xd]);
        auVar225[0xf] = -(auVar68[0xf] < auVar79[0xe]);
        auVar225 = auVar225 & auVar112;
        auVar68 = pmovzxbd(auVar112,auVar225);
        auVar112 = auVar68 & auVar167;
        auVar70._0_4_ = auVar112._0_4_ << 0x1f;
        auVar70._4_4_ = auVar112._4_4_ << 0x1f;
        auVar70._8_4_ = auVar112._8_4_ << 0x1f;
        auVar70._12_4_ = auVar112._12_4_ << 0x1f;
        iVar28 = movmskps(iVar28,auVar70);
        if (iVar28 != 0) {
          auVar172._0_4_ = (auVar68._0_4_ << 0x1f) >> 0x1f;
          auVar172._4_4_ = (auVar68._4_4_ << 0x1f) >> 0x1f;
          auVar172._8_4_ = (auVar68._8_4_ << 0x1f) >> 0x1f;
          auVar172._12_4_ = (auVar68._12_4_ << 0x1f) >> 0x1f;
          auVar172 = auVar172 & auVar167;
          auVar128._0_4_ =
               -(uint)((uint)(auVar210._0_8_ & uVar111) == __xmm_7f8000007f8000007f8000007f800000);
          auVar128._4_4_ = -(uint)((uint)((auVar210._0_8_ & uVar111) >> 0x20) == _UNK_1506896e4);
          auVar128._8_4_ = -(uint)((uint)(uVar132 & uVar5) == _UNK_1506896e8);
          auVar128._12_4_ = -(uint)((uint)((uVar132 & uVar5) >> 0x20) == _UNK_1506896ec);
          auVar68 = ~auVar128 & auVar112 & ___xmm_00000001000000010000000100000001;
          auVar71._0_4_ = auVar68._0_4_ << 0x1f;
          auVar71._4_4_ = auVar68._4_4_ << 0x1f;
          auVar71._8_4_ = auVar68._8_4_ << 0x1f;
          auVar71._12_4_ = auVar68._12_4_ << 0x1f;
          iVar28 = movmskps(iVar28,auVar71);
          if (iVar28 == 0) {
            auVar74._8_4_ = 0xffffffff;
            auVar74._0_8_ = 0xffffffffffffffff;
            auVar74._12_4_ = 0xffffffff;
            auVar128 = auVar128 ^ auVar74;
          }
          else {
            auVar68 = blendvps(auVar172,auVar186,auVar128);
            uVar85 = uVar85 & uVar5;
            auVar72._0_4_ =
                 -(uint)((uint)(auVar153._0_8_ & uVar111) == __xmm_7f8000007f8000007f8000007f800000)
            ;
            auVar72._4_4_ = -(uint)((uint)((auVar153._0_8_ & uVar111) >> 0x20) == _UNK_1506896e4);
            auVar72._8_4_ = -(uint)((uint)uVar85 == _UNK_1506896e8);
            auVar72._12_4_ = -(uint)((uint)(uVar85 >> 0x20) == _UNK_1506896ec);
            auVar128 = blendvps(auVar68,auVar186,auVar72);
            auVar68 = auVar112 & ___xmm_00000001000000010000000100000001 & auVar128;
            auVar220._0_4_ = auVar68._0_4_ << 0x1f;
            auVar220._4_4_ = auVar68._4_4_ << 0x1f;
            auVar220._8_4_ = auVar68._8_4_ << 0x1f;
            auVar220._12_4_ = auVar68._12_4_ << 0x1f;
            iVar28 = movmskps(iVar28,auVar220);
            if (iVar28 != 0) {
              auVar129._0_4_ = (auVar128._0_4_ << 0x1f) >> 0x1f;
              auVar129._4_4_ = (auVar128._4_4_ << 0x1f) >> 0x1f;
              auVar129._8_4_ = (auVar128._8_4_ << 0x1f) >> 0x1f;
              auVar129._12_4_ = (auVar128._12_4_ << 0x1f) >> 0x1f;
              uVar87 = uVar87 & uVar5;
              auVar73._0_4_ =
                   -(uint)((uint)(auVar143._0_8_ & uVar111) ==
                          __xmm_7f8000007f8000007f8000007f800000);
              auVar73._4_4_ = -(uint)((uint)((auVar143._0_8_ & uVar111) >> 0x20) == _UNK_1506896e4);
              auVar73._8_4_ = -(uint)((uint)uVar87 == _UNK_1506896e8);
              auVar73._12_4_ = -(uint)((uint)(uVar87 >> 0x20) == _UNK_1506896ec);
              auVar128 = blendvps(auVar129 & auVar172,auVar186,auVar73);
            }
          }
          auVar68 = pshufb(auVar128,___xmm_0000000000000000000000000c080400);
          auVar112 = packssdw(auVar172,auVar172);
          auVar68 = psllw(auVar68,7);
          auVar68 = auVar68 & ___xmm_80808080808080808080808080808080;
          auVar225 = packsswb(auVar112,auVar112);
          auVar79 = SUB1615((undefined1  [16])0x0,1);
          auVar226[0] = -(auVar68[0] < '\0');
          auVar226[1] = -(auVar68[1] < '\0');
          auVar226[2] = -(auVar68[2] < '\0');
          auVar226[3] = -(auVar68[3] < '\0');
          auVar226[4] = -(auVar68[4] < '\0');
          auVar226[5] = -(auVar68[5] < '\0');
          auVar226[6] = -(auVar68[6] < '\0');
          auVar226[7] = -(auVar68[7] < '\0');
          auVar226[8] = -(auVar68[8] < '\0');
          auVar226[9] = -(auVar68[9] < auVar79[8]);
          auVar226[10] = -(auVar68[10] < auVar79[9]);
          auVar226[0xb] = -(auVar68[0xb] < auVar79[10]);
          auVar226[0xc] = -(auVar68[0xc] < auVar79[0xb]);
          auVar226[0xd] = -(auVar68[0xd] < auVar79[0xc]);
          auVar226[0xe] = -(auVar68[0xe] < auVar79[0xd]);
          auVar226[0xf] = -(auVar68[0xf] < auVar79[0xe]);
          auVar225 = auVar226 & auVar225;
        }
      }
      auVar68 = packssdw(auVar167,auVar167);
      auVar68 = packsswb(auVar68,auVar68);
      auVar137 = pblendvb(auVar137,auVar225 & ___xmm_00000000000000000000000001010101,auVar68);
      if ((~bVar26 & 0xf) == 0) {
        auVar75._8_8_ = uVar91;
        auVar75._0_8_ = auVar234._0_8_;
        auVar68 = insertps(auVar75,auVar251,0x30);
        auVar106._4_4_ = fVar221;
        auVar106._0_4_ = fVar262;
        auVar106._8_4_ = fVar260;
        auVar106._12_4_ = fVar154;
        auVar68 = insertps(auVar68,auVar192,0x20);
        *(int *)*pauVar2 = auVar68._0_4_;
        *(int *)(*pauVar2 + 4) = auVar68._12_4_;
        *(int *)(*pauVar2 + 8) = auVar68._8_4_;
        *(int *)(*pauVar2 + 0xc) = auVar68._4_4_;
        auVar68 = blendps(auVar106,auVar234,4);
        auVar186._0_4_ = auVar68._0_4_;
        auVar186._8_4_ = auVar68._8_4_;
        auVar186._4_4_ = auVar68._12_4_;
        auVar186._12_4_ = auVar68._4_4_;
        pauVar2[1] = auVar186;
        *(float *)pauVar2[2] = fVar82;
        *(float *)(pauVar2[2] + 4) = fVar36;
        *(float *)(pauVar2[2] + 8) = fVar37;
        *(float *)(pauVar2[2] + 0xc) = fVar83;
        auVar76._8_8_ = uVar132;
        auVar76._0_8_ = auVar210._0_8_;
        auVar68 = insertps(auVar76,auVar153,0x30);
        auVar68 = insertps(auVar68,auVar143,0x20);
        *pfVar31 = auVar68._0_4_;
        pfVar31[1] = auVar68._12_4_;
        pfVar31[2] = auVar68._8_4_;
        pfVar31[3] = auVar68._4_4_;
        auVar77._4_4_ = fVar178;
        auVar77._0_4_ = fVar257;
        auVar77._8_4_ = fVar84;
        auVar77._12_4_ = (float)auVar170._8_8_;
        auVar68 = blendps(auVar77,auVar210,4);
        puVar3 = (undefined4 *)(param_2 + 0x10 + uVar24 * 0xc);
        *puVar3 = auVar68._0_4_;
        puVar3[1] = auVar68._12_4_;
        puVar3[2] = auVar68._8_4_;
        puVar3[3] = auVar68._4_4_;
        pfVar31 = (float *)(param_2 + 0x20 + uVar24 * 0xc);
        *pfVar31 = fVar35;
        pfVar31[1] = fVar80;
        pfVar31[2] = fVar81;
        pfVar31[3] = fVar213;
        puVar25 = local_268;
      }
      else {
        if ((bVar26 & 1) != 0) {
          *(float *)*pauVar2 = fVar235;
        }
        if ((bVar26 & 2) != 0) {
          uVar4 = extractps(auVar234,1);
          *(undefined8 *)(*pauVar2 + 0xc) = uVar4;
        }
        if ((bVar26 & 4) != 0) {
          uVar4 = extractps(auVar234,2);
          *(undefined8 *)(pauVar2[1] + 8) = uVar4;
        }
        if ((char)bVar26 < '\0') {
          uVar4 = extractps(auVar234,3);
          *(undefined8 *)(pauVar2[2] + 4) = uVar4;
        }
        if ((bVar26 & 1) != 0) {
          *(float *)(*pauVar2 + 4) = fVar244;
        }
        if ((bVar26 & 2) != 0) {
          uVar4 = extractps(auVar251,1);
          *(undefined8 *)pauVar2[1] = uVar4;
        }
        if ((bVar26 & 4) != 0) {
          uVar4 = extractps(auVar251,2);
          *(undefined8 *)(pauVar2[1] + 0xc) = uVar4;
        }
        if ((char)bVar26 < '\0') {
          uVar4 = extractps(auVar251,3);
          *(undefined8 *)(pauVar2[2] + 8) = uVar4;
        }
        if ((bVar26 & 1) != 0) {
          *(float *)(*pauVar2 + 8) = fVar260;
        }
        if ((bVar26 & 2) != 0) {
          uVar4 = extractps(auVar192,1);
          *(undefined8 *)(pauVar2[1] + 4) = uVar4;
        }
        if ((bVar26 & 4) != 0) {
          uVar4 = extractps(auVar192,2);
          *(undefined8 *)pauVar2[2] = uVar4;
        }
        if ((char)bVar26 < '\0') {
          uVar4 = extractps(auVar192,3);
          *(undefined8 *)(pauVar2[2] + 0xc) = uVar4;
        }
        if ((bVar26 & 1) != 0) {
          *pfVar31 = fVar228;
        }
        if ((bVar26 & 2) != 0) {
          uVar4 = extractps(auVar210,1);
          *(undefined8 *)(param_2 + 0xc + uVar24 * 0xc) = uVar4;
        }
        if ((bVar26 & 4) != 0) {
          uVar4 = extractps(auVar210,2);
          *(undefined8 *)(param_2 + 0x18 + uVar24 * 0xc) = uVar4;
        }
        if ((char)bVar26 < '\0') {
          uVar4 = extractps(auVar210,3);
          *(undefined8 *)(param_2 + 0x24 + uVar24 * 0xc) = uVar4;
        }
        if ((bVar26 & 1) != 0) {
          *(float *)(param_2 + 4 + uVar24 * 0xc) = fVar252;
        }
        if ((bVar26 & 2) != 0) {
          uVar4 = extractps(auVar153,1);
          *(undefined8 *)(param_2 + 0x10 + uVar24 * 0xc) = uVar4;
        }
        if ((bVar26 & 4) != 0) {
          uVar4 = extractps(auVar153,2);
          *(undefined8 *)(param_2 + 0x1c + uVar24 * 0xc) = uVar4;
        }
        if ((char)bVar26 < '\0') {
          uVar4 = extractps(auVar153,3);
          *(undefined8 *)(param_2 + 0x28 + uVar24 * 0xc) = uVar4;
        }
        if ((bVar26 & 1) != 0) {
          *(float *)(param_2 + 8 + uVar24 * 0xc) = fVar84;
        }
        if ((bVar26 & 2) != 0) {
          uVar4 = extractps(auVar143,1);
          *(undefined8 *)(param_2 + 0x14 + uVar24 * 0xc) = uVar4;
        }
        if ((bVar26 & 4) != 0) {
          uVar4 = extractps(auVar143,2);
          *(undefined8 *)(param_2 + 0x20 + uVar24 * 0xc) = uVar4;
        }
        puVar25 = local_268;
        if ((char)bVar26 < '\0') {
          uVar4 = extractps(auVar143,3);
          *(undefined8 *)(param_2 + 0x2c + uVar24 * 0xc) = uVar4;
          puVar25 = local_268;
        }
      }
    }
    auVar137 = auVar137 & ___xmm_00000000000000000000000001010101;
    auVar79 = SUB1615((undefined1  [16])0x0,1);
    auVar78[0] = -(auVar137[0] == '\0');
    auVar78[1] = -(auVar137[1] == '\0');
    auVar78[2] = -(auVar137[2] == '\0');
    auVar78[3] = -(auVar137[3] == '\0');
    auVar78[4] = -(auVar137[4] == '\0');
    auVar78[5] = -(auVar137[5] == '\0');
    auVar78[6] = -(auVar137[6] == '\0');
    auVar78[7] = -(auVar137[7] == '\0');
    auVar78[8] = -(auVar137[8] == '\0');
    auVar78[9] = -(auVar79[8] == auVar137[9]);
    auVar78[10] = -(auVar79[9] == auVar137[10]);
    auVar78[0xb] = -(auVar79[10] == auVar137[0xb]);
    auVar78[0xc] = -(auVar79[0xb] == auVar137[0xc]);
    auVar78[0xd] = -(auVar79[0xc] == auVar137[0xd]);
    auVar78[0xe] = -(auVar79[0xd] == auVar137[0xe]);
    auVar78[0xf] = -(auVar79[0xe] == auVar137[0xf]);
    auVar68 = pmovzxbd(auVar186,auVar78);
    goto LAB_140d37faf;
  }
  auVar200._0_4_ = ~uVar30 & auVar68._0_4_;
  auVar200._4_4_ = ~uVar194 & auVar68._4_4_;
  auVar200._8_4_ = ~uVar23 & auVar68._8_4_;
  auVar200._12_4_ = ~uVar179 & auVar68._12_4_;
  auVar161._0_4_ = uVar158 & auVar200._0_4_;
  auVar161._4_4_ = uVar173 & auVar200._4_4_;
  auVar161._8_4_ = uVar174 & auVar200._8_4_;
  auVar161._12_4_ = uVar177 & auVar200._12_4_;
  iVar27 = movmskps((int)param_3,auVar161);
  if (iVar27 == 0) {
    auVar161 = ZEXT816(0);
LAB_140d3527c:
    auVar149._8_4_ = 0xffffffff;
    auVar149._0_8_ = 0xffffffffffffffff;
    auVar149._12_4_ = 0xffffffff;
    dVar180 = (double)(___xmm_7fcfffffffffffff7fcfffffffffffff -
                      (___xmm_7fe00000000000007fe0000000000000 & (ulonglong)dVar246));
    dVar195 = (double)((longlong)_UNK_150b51628 - (_UNK_150b51678 & (ulonglong)dVar254));
    dVar145 = (double)(___xmm_7fcfffffffffffff7fcfffffffffffff -
                      ((ulonglong)dVar181 & ___xmm_7fe00000000000007fe0000000000000));
    auVar215._0_4_ = (float)(dVar246 * dVar180);
    auVar215._4_4_ = (float)(dVar254 * dVar195);
    fVar178 = (float)(dVar181 * dVar145);
    auVar201._0_8_ = CONCAT44((float)(_UNK_150b51628 * 0.0),fVar178);
    auVar201._8_8_ = 0;
    auVar215._8_8_ = auVar201._0_8_;
    auVar202 = rcpps(auVar201,auVar215);
    auVar149 = auVar149 ^ auVar161;
    dVar145 = (double)((_UNK_15076ba38 - fVar178 * auVar202._8_4_) * auVar202._8_4_) * dVar145;
    dVar155 = (double)((_UNK_15076ba3c - (float)(_UNK_150b51628 * 0.0) * auVar202._12_4_) *
                      auVar202._12_4_) * _UNK_150b51628;
    dVar180 = (double)((___xmm_40000000400000004000000040000000 - auVar215._0_4_ * auVar202._0_4_) *
                      auVar202._0_4_) * dVar180;
    dVar195 = (double)((_UNK_15076ba34 - auVar215._4_4_ * auVar202._4_4_) * auVar202._4_4_) *
              dVar195;
    dVar180 = (___xmm_40000000000000004000000000000000 - dVar246 * dVar180) * dVar180;
    dVar195 = (_UNK_150689698 - dVar254 * dVar195) * dVar195;
    dVar145 = (___xmm_40000000000000004000000000000000 - dVar181 * dVar145) * dVar145;
    dVar155 = (_UNK_150689698 - dVar155 * 0.0) * dVar155;
    auVar231._0_8_ = (___xmm_40000000000000004000000000000000 - dVar181 * dVar145) * dVar145;
    auVar231._8_8_ = (_UNK_150689698 - dVar155 * 0.0) * dVar155;
    auVar163._0_8_ = (___xmm_40000000000000004000000000000000 - dVar246 * dVar180) * dVar180;
    auVar163._8_8_ = (_UNK_150689698 - dVar254 * dVar195) * dVar195;
    auVar38._4_4_ = auVar149._0_4_;
    auVar38._0_4_ = auVar149._0_4_;
    auVar38._8_4_ = auVar149._4_4_;
    auVar38._12_4_ = auVar149._4_4_;
    unaff_XMM13 = blendvps(unaff_XMM13,auVar163,auVar38);
    auVar39._4_4_ = auVar149._8_4_;
    auVar39._0_4_ = auVar149._8_4_;
    auVar39._8_4_ = auVar149._12_4_;
    auVar39._12_4_ = auVar149._12_4_;
    auVar184 = blendvps(auVar184,auVar231,auVar39);
  }
  else {
    auVar147._0_4_ = (float)dVar246;
    auVar147._4_4_ = (float)dVar254;
    fVar178 = (float)dVar181;
    auVar147._8_4_ = fVar178;
    auVar147._12_4_ = 0;
    auVar184 = rcpps(ZEXT416((uint)fVar178),auVar147);
    dVar145 = (double)((___xmm_40000000400000004000000040000000 - auVar147._0_4_ * auVar184._0_4_) *
                      auVar184._0_4_);
    dVar155 = (double)((_UNK_15076ba34 - auVar147._4_4_ * auVar184._4_4_) * auVar184._4_4_);
    dVar180 = (double)((_UNK_15076ba38 - fVar178 * auVar184._8_4_) * auVar184._8_4_);
    dVar195 = (double)((_UNK_15076ba3c - auVar184._12_4_ * 0.0) * auVar184._12_4_);
    dVar180 = (___xmm_40000000000000004000000000000000 - dVar181 * dVar180) * dVar180;
    dVar195 = (_UNK_150689698 - dVar195 * 0.0) * dVar195;
    dVar145 = (___xmm_40000000000000004000000000000000 - dVar246 * dVar145) * dVar145;
    dVar155 = (_UNK_150689698 - dVar254 * dVar155) * dVar155;
    unaff_XMM13._0_8_ = (___xmm_40000000000000004000000000000000 - dVar246 * dVar145) * dVar145;
    unaff_XMM13._8_8_ = (_UNK_150689698 - dVar254 * dVar155) * dVar155;
    auVar184._0_8_ = (___xmm_40000000000000004000000000000000 - dVar181 * dVar180) * dVar180;
    auVar184._8_8_ = (_UNK_150689698 - dVar195 * 0.0) * dVar195;
    uVar29 = movmskps(iVar28,auVar200);
    if ((char)uVar29 != (char)iVar27) goto LAB_140d3527c;
  }
  auVar112 = blendvps(unaff_XMM13,ZEXT816(0),auVar112);
  auVar186 = blendvps(auVar184,ZEXT816(0),auVar186);
  uVar23 = param_5 + 3;
  if (-1 < (int)param_5) {
    uVar23 = param_5;
  }
  dVar246 = auVar112._0_8_;
  dVar254 = auVar112._8_8_;
  dVar181 = auVar186._0_8_;
  if ((int)(uVar23 & 0xfffffffc) < 1) {
    uVar30 = 0;
    auVar240._8_4_ = 0xffffffff;
    auVar240._0_8_ = 0xffffffffffffffff;
    auVar240._12_4_ = 0xffffffff;
  }
  else {
    auVar240._8_4_ = 0xffffffff;
    auVar240._0_8_ = 0xffffffffffffffff;
    auVar240._12_4_ = 0xffffffff;
    lVar32 = 0x20;
    uVar30 = 0;
    do {
      auVar186 = *(undefined1 (*) [16])(param_1 + -0x20 + lVar32);
      auVar112 = *(undefined1 (*) [16])(param_1 + -0x10 + lVar32);
      pfVar31 = (float *)(param_1 + lVar32);
      auVar184 = insertps(auVar112,auVar186,0x8c);
      dVar90 = (double)auVar186._0_4_ * param_4 - dVar196;
      dVar108 = (double)auVar186._12_4_ * param_4 - dVar196;
      dVar145 = (double)auVar112._8_4_ * param_4 - dVar196;
      dVar155 = (double)pfVar31[1] * param_4 - dVar196;
      dVar238 = (double)auVar186._4_4_ * param_4 - dVar88;
      dVar242 = (double)auVar112._0_4_ * param_4 - dVar88;
      dVar159 = (double)auVar112._12_4_ * param_4 - dVar88;
      dVar175 = (double)pfVar31[2] * param_4 - dVar88;
      dVar134 = (double)auVar184._0_4_ * param_4 - dVar237;
      dVar144 = (double)auVar184._4_4_ * param_4 - dVar237;
      dVar109 = (double)*pfVar31 * param_4 - dVar237;
      dVar130 = (double)pfVar31[3] * param_4 - dVar237;
      dVar229 = local_1d8 * dVar238 - uStack_1d0 * dVar90;
      dVar236 = local_1d8 * dVar242 - uStack_1d0 * dVar108;
      dVar223 = local_1d8 * dVar159 - uStack_1d0 * dVar145;
      dVar227 = local_1d8 * dVar175 - uStack_1d0 * dVar155;
      dVar110 = uStack_1d0 * dVar134 - dVar89 * dVar238;
      dVar131 = uStack_1d0 * dVar144 - dVar89 * dVar242;
      dVar146 = uStack_1d0 * dVar109 - dVar89 * dVar159;
      dVar156 = uStack_1d0 * dVar130 - dVar89 * dVar175;
      dVar245 = dVar89 * dVar145 - local_1d8 * dVar109;
      dVar253 = dVar89 * dVar155 - local_1d8 * dVar130;
      dVar180 = dVar89 * dVar90 - local_1d8 * dVar134;
      dVar195 = dVar89 * dVar108 - local_1d8 * dVar144;
      dVar110 = dVar110 + dVar110;
      dVar131 = dVar131 + dVar131;
      dVar146 = dVar146 + dVar146;
      dVar156 = dVar156 + dVar156;
      dVar180 = dVar180 + dVar180;
      dVar195 = dVar195 + dVar195;
      dVar245 = dVar245 + dVar245;
      dVar253 = dVar253 + dVar253;
      dVar229 = dVar229 + dVar229;
      dVar236 = dVar236 + dVar236;
      dVar223 = dVar223 + dVar223;
      dVar227 = dVar227 + dVar227;
      dVar145 = dVar107 * dVar146 + dVar145;
      dVar155 = dVar107 * dVar156 + dVar155;
      auVar6._8_4_ = SUB84(dVar155,0);
      auVar6._0_8_ = dVar145;
      auVar6._12_4_ = (int)((ulonglong)dVar155 >> 0x20);
      uStack_210 = auVar6._8_8_;
      fVar213 = (float)(((uStack_1d0 * dVar229 - dVar180 * dVar89) + dVar107 * dVar110 + dVar90) *
                       dVar246);
      fVar221 = (float)(((uStack_1d0 * dVar236 - dVar195 * dVar89) + dVar107 * dVar131 + dVar108) *
                       dVar246);
      fVar178 = (float)(((uStack_1d0 * dVar223 - dVar245 * dVar89) + dVar145) * dVar246);
      fVar80 = (float)(((uStack_1d0 * dVar227 - dVar253 * dVar89) + uStack_210) * dVar246);
      local_218._0_4_ =
           (undefined4)
           (((dVar89 * dVar110 - dVar229 * local_1d8) + dVar107 * dVar180 + dVar238) * dVar254);
      local_218._4_4_ =
           (undefined4)
           (((dVar89 * dVar131 - dVar236 * local_1d8) + dVar107 * dVar195 + dVar242) * dVar254);
      uStack_210._0_4_ =
           (float)(((dVar89 * dVar146 - dVar223 * local_1d8) + dVar107 * dVar245 + dVar159) *
                  dVar254);
      uStack_210._4_4_ =
           (float)(((dVar89 * dVar156 - dVar227 * local_1d8) + dVar107 * dVar253 + dVar175) *
                  dVar254);
      auVar94._0_8_ =
           ((local_1d8 * dVar180 - dVar110 * uStack_1d0) + dVar107 * dVar229 + dVar134) * dVar181;
      auVar94._8_8_ =
           ((local_1d8 * dVar195 - dVar131 * uStack_1d0) + dVar107 * dVar236 + dVar144) * dVar181;
      auVar203._0_4_ = (float)auVar94._0_8_;
      auVar203._4_4_ = (float)auVar94._8_8_;
      fVar35 = (float)(((local_1d8 * dVar245 - dVar146 * uStack_1d0) + dVar107 * dVar223 + dVar109)
                      * dVar181);
      fVar81 = (float)(((local_1d8 * dVar253 - dVar156 * uStack_1d0) + dVar107 * dVar227 + dVar130)
                      * dVar181);
      local_268 = auVar240 & ___xmm_00000000000000000000000001010101;
      if (local_268._0_4_ != 0) {
        local_248._0_4_ = auVar240._0_4_;
        auVar112 = pmovzxbd(auVar94,local_248._0_4_);
        auVar41._0_4_ =
             -(uint)(((uint)fVar213 & __xmm_7f8000007f8000007f8000007f800000) ==
                    __xmm_7f8000007f8000007f8000007f800000);
        auVar41._4_4_ = -(uint)(((uint)fVar221 & _UNK_1506896e4) == _UNK_1506896e4);
        auVar41._8_4_ = -(uint)(((uint)fVar178 & _UNK_1506896e8) == _UNK_1506896e8);
        auVar41._12_4_ = -(uint)(((uint)fVar80 & _UNK_1506896ec) == _UNK_1506896ec);
        auVar186 = ~auVar41 & auVar112;
        auVar113._0_4_ = auVar186._0_4_ << 0x1f;
        auVar113._4_4_ = auVar186._4_4_ << 0x1f;
        auVar113._8_4_ = auVar186._8_4_ << 0x1f;
        auVar113._12_4_ = auVar186._12_4_ << 0x1f;
        iVar28 = movmskps(local_268._0_4_,auVar113);
        if (iVar28 != 0) {
          auVar114._0_4_ =
               -(uint)((local_218._0_4_ & __xmm_7f8000007f8000007f8000007f800000) ==
                      __xmm_7f8000007f8000007f8000007f800000);
          auVar114._4_4_ = -(uint)((local_218._4_4_ & _UNK_1506896e4) == _UNK_1506896e4);
          auVar114._8_4_ = -(uint)(((uint)(float)uStack_210 & _UNK_1506896e8) == _UNK_1506896e8);
          auVar114._12_4_ = -(uint)(((uint)uStack_210._4_4_ & _UNK_1506896ec) == _UNK_1506896ec);
          auVar186 = ~auVar41 & ~auVar114 & auVar112;
          auVar95._0_4_ = auVar186._0_4_ << 0x1f;
          auVar95._4_4_ = auVar186._4_4_ << 0x1f;
          auVar95._8_4_ = auVar186._8_4_ << 0x1f;
          auVar95._12_4_ = auVar186._12_4_ << 0x1f;
          iVar28 = movmskps(iVar28,auVar95);
          if (iVar28 != 0) {
            auVar135._0_4_ =
                 -(uint)(((uint)auVar203._0_4_ & __xmm_7f8000007f8000007f8000007f800000) ==
                        __xmm_7f8000007f8000007f8000007f800000);
            auVar135._4_4_ = -(uint)(((uint)auVar203._4_4_ & _UNK_1506896e4) == _UNK_1506896e4);
            auVar135._8_4_ = -(uint)(((uint)fVar35 & _UNK_1506896e8) == _UNK_1506896e8);
            auVar135._12_4_ = -(uint)(((uint)fVar81 & _UNK_1506896ec) == _UNK_1506896ec);
            auVar186 = ~auVar135 & auVar186;
          }
        }
        local_268 = pshufb(auVar186,___xmm_0000000000000000000000000c080400);
        local_268 = local_268 & ___xmm_00000000000000000000000001010101;
      }
      auVar186 = *(undefined1 (*) [16])(param_2 + -0x20 + lVar32);
      auVar112 = *(undefined1 (*) [16])(param_2 + -0x10 + lVar32);
      puVar1 = (uint *)(param_2 + lVar32);
      auVar184 = insertps(auVar112,auVar186,0x8c);
      dVar223 = (double)(float)(auVar186._0_4_ ^ __xmm_80000000800000008000000080000000);
      dVar227 = (double)(float)(auVar186._12_4_ ^ _UNK_150651574);
      dVar146 = (double)(float)(auVar112._8_4_ ^ _UNK_150651578);
      dVar156 = (double)(float)(puVar1[1] ^ _UNK_15065157c);
      dVar180 = (double)(float)(auVar186._4_4_ ^ __xmm_80000000800000008000000080000000);
      dVar90 = (double)(float)(auVar112._0_4_ ^ _UNK_150651574);
      dVar159 = (double)(float)(auVar112._12_4_ ^ _UNK_150651578);
      dVar175 = (double)(float)(puVar1[2] ^ _UNK_15065157c);
      dVar109 = (double)(float)(auVar184._0_4_ ^ __xmm_80000000800000008000000080000000);
      dVar110 = (double)(float)(auVar184._4_4_ ^ _UNK_150651574);
      dVar229 = (double)(float)(*puVar1 ^ _UNK_150651578);
      dVar236 = (double)(float)(puVar1[3] ^ _UNK_15065157c);
      dVar134 = local_1d8 * dVar159 - uStack_1d0 * dVar146;
      dVar144 = local_1d8 * dVar175 - uStack_1d0 * dVar156;
      dVar238 = local_1d8 * dVar180 - uStack_1d0 * dVar223;
      dVar242 = local_1d8 * dVar90 - uStack_1d0 * dVar227;
      dVar130 = uStack_1d0 * dVar229 - dVar89 * dVar159;
      dVar131 = uStack_1d0 * dVar236 - dVar89 * dVar175;
      dVar195 = uStack_1d0 * dVar109 - dVar89 * dVar180;
      dVar108 = uStack_1d0 * dVar110 - dVar89 * dVar90;
      dVar245 = dVar89 * dVar146 - local_1d8 * dVar229;
      dVar253 = dVar89 * dVar156 - local_1d8 * dVar236;
      dVar145 = dVar89 * dVar223 - local_1d8 * dVar109;
      dVar155 = dVar89 * dVar227 - local_1d8 * dVar110;
      dVar130 = dVar130 + dVar130;
      dVar131 = dVar131 + dVar131;
      dVar195 = dVar195 + dVar195;
      dVar108 = dVar108 + dVar108;
      dVar245 = dVar245 + dVar245;
      dVar253 = dVar253 + dVar253;
      dVar145 = dVar145 + dVar145;
      dVar155 = dVar155 + dVar155;
      dVar134 = dVar134 + dVar134;
      dVar144 = dVar144 + dVar144;
      dVar238 = dVar238 + dVar238;
      dVar242 = dVar242 + dVar242;
      auVar164._0_8_ =
           CONCAT44((float)(((uStack_1d0 * dVar242 - dVar155 * dVar89) + dVar107 * dVar108 + dVar227
                            ) * dVar246),
                    (float)(((uStack_1d0 * dVar238 - dVar145 * dVar89) + dVar107 * dVar195 + dVar223
                            ) * dVar246));
      fVar82 = (float)(((uStack_1d0 * dVar144 - dVar253 * dVar89) + dVar107 * dVar131 + dVar156) *
                      dVar246);
      uVar24 = CONCAT44(fVar82,(float)(((uStack_1d0 * dVar134 - dVar245 * dVar89) +
                                       dVar107 * dVar130 + dVar146) * dVar246));
      auVar164._8_8_ = uVar24;
      fVar252 = (float)(((dVar89 * dVar108 - dVar242 * local_1d8) + dVar107 * dVar155 + dVar90) *
                       dVar254);
      auVar249._0_8_ =
           CONCAT44(fVar252,(float)(((dVar89 * dVar195 - dVar238 * local_1d8) +
                                    dVar107 * dVar145 + dVar180) * dVar254));
      fVar36 = (float)(((dVar89 * dVar130 - dVar134 * local_1d8) + dVar107 * dVar245 + dVar159) *
                      dVar254);
      fVar83 = (float)(((dVar89 * dVar131 - dVar144 * local_1d8) + dVar107 * dVar253 + dVar175) *
                      dVar254);
      uVar132 = CONCAT44(fVar83,fVar36);
      auVar249._8_8_ = uVar132;
      fVar257 = (float)(((local_1d8 * dVar145 - dVar195 * uStack_1d0) + dVar107 * dVar238 + dVar109)
                       * dVar181);
      fVar260 = (float)(((local_1d8 * dVar155 - dVar108 * uStack_1d0) + dVar107 * dVar242 + dVar110)
                       * dVar181);
      auVar259._0_8_ = CONCAT44(fVar260,fVar257);
      fVar37 = (float)(((local_1d8 * dVar245 - dVar130 * uStack_1d0) + dVar107 * dVar134 + dVar229)
                      * dVar181);
      fVar84 = (float)(((local_1d8 * dVar253 - dVar131 * uStack_1d0) + dVar107 * dVar144 + dVar236)
                      * dVar181);
      uVar85 = CONCAT44(fVar84,fVar37);
      auVar259._8_8_ = uVar85;
      iVar28 = SUB164(local_268 & ___xmm_00000000000000000000000001010101,0);
      if (iVar28 != 0) {
        auVar186 = pmovzxbd(local_268 & ___xmm_00000000000000000000000001010101,local_268);
        uVar86 = CONCAT44(_UNK_1506896e4,__xmm_7f8000007f8000007f8000007f800000);
        auVar16._8_4_ = _UNK_1506896e8;
        auVar16._0_8_ = uVar86;
        auVar16._12_4_ = _UNK_1506896ec;
        uVar87 = auVar16._8_8_;
        auVar96._0_4_ =
             -(uint)((uint)(auVar164._0_8_ & uVar86) == __xmm_7f8000007f8000007f8000007f800000);
        auVar96._4_4_ = -(uint)((uint)((auVar164._0_8_ & uVar86) >> 0x20) == _UNK_1506896e4);
        auVar96._8_4_ = -(uint)((uint)(uVar24 & uVar87) == _UNK_1506896e8);
        auVar96._12_4_ = -(uint)((uint)((uVar24 & uVar87) >> 0x20) == _UNK_1506896ec);
        auVar112 = ~auVar96 & auVar186;
        auVar115._0_4_ = auVar112._0_4_ << 0x1f;
        auVar115._4_4_ = auVar112._4_4_ << 0x1f;
        auVar115._8_4_ = auVar112._8_4_ << 0x1f;
        auVar115._12_4_ = auVar112._12_4_ << 0x1f;
        iVar28 = movmskps(iVar28,auVar115);
        if (iVar28 != 0) {
          uVar132 = uVar132 & uVar87;
          auVar116._0_4_ =
               -(uint)((uint)(auVar249._0_8_ & uVar86) == __xmm_7f8000007f8000007f8000007f800000);
          auVar116._4_4_ = -(uint)((uint)((auVar249._0_8_ & uVar86) >> 0x20) == _UNK_1506896e4);
          auVar116._8_4_ = -(uint)((uint)uVar132 == _UNK_1506896e8);
          auVar116._12_4_ = -(uint)((uint)(uVar132 >> 0x20) == _UNK_1506896ec);
          auVar112 = ~(auVar96 | auVar116) & auVar186;
          auVar42._0_4_ = auVar112._0_4_ << 0x1f;
          auVar42._4_4_ = auVar112._4_4_ << 0x1f;
          auVar42._8_4_ = auVar112._8_4_ << 0x1f;
          auVar42._12_4_ = auVar112._12_4_ << 0x1f;
          iVar28 = movmskps(iVar28,auVar42);
          if (iVar28 != 0) {
            uVar85 = uVar85 & uVar87;
            auVar43._0_4_ =
                 -(uint)((uint)(auVar259._0_8_ & uVar86) == __xmm_7f8000007f8000007f8000007f800000);
            auVar43._4_4_ = -(uint)((uint)((auVar259._0_8_ & uVar86) >> 0x20) == _UNK_1506896e4);
            auVar43._8_4_ = -(uint)((uint)uVar85 == _UNK_1506896e8);
            auVar43._12_4_ = -(uint)((uint)(uVar85 >> 0x20) == _UNK_1506896ec);
            auVar112 = ~auVar43 & auVar112;
          }
        }
        local_268 = pshufb(auVar112,___xmm_0000000000000000000000000c080400);
        local_268 = local_268 & ___xmm_00000000000000000000000001010101;
      }
      auVar187._4_4_ = fVar221;
      auVar187._0_4_ = fVar213;
      auVar203._8_4_ = fVar35;
      auVar187._8_4_ = fVar178;
      auVar203._12_4_ = fVar81;
      auVar187._12_4_ = fVar80;
      auVar240 = local_268 & ___xmm_00000000000000000000000001010101;
      auVar186 = insertps(auVar187,_local_218,0x30);
      auVar92._0_8_ = local_218._4_8_;
      auVar92._8_4_ = auVar203._0_4_;
      auVar92._12_4_ = auVar203._4_4_;
      auVar186 = insertps(auVar186,auVar203,0x20);
      puVar3 = (undefined4 *)(param_1 + -0x20 + lVar32);
      *puVar3 = auVar186._0_4_;
      puVar3[1] = auVar186._12_4_;
      puVar3[2] = auVar186._8_4_;
      puVar3[3] = auVar186._4_4_;
      auVar186 = blendps(auVar92,auVar187,4);
      puVar3 = (undefined4 *)(param_1 + -0x10 + lVar32);
      *puVar3 = auVar186._0_4_;
      puVar3[1] = auVar186._12_4_;
      puVar3[2] = auVar186._8_4_;
      puVar3[3] = auVar186._4_4_;
      pfVar31 = (float *)(param_1 + lVar32);
      *pfVar31 = fVar35;
      pfVar31[1] = fVar80;
      pfVar31[2] = uStack_210._4_4_;
      pfVar31[3] = fVar81;
      auVar40._8_8_ = uVar24;
      auVar40._0_8_ = auVar164._0_8_;
      auVar186 = insertps(auVar40,auVar249,0x30);
      auVar93._4_4_ = fVar36;
      auVar93._0_4_ = fVar252;
      auVar93._8_4_ = fVar257;
      auVar93._12_4_ = fVar260;
      auVar186 = insertps(auVar186,auVar259,0x20);
      puVar3 = (undefined4 *)(param_2 + -0x20 + lVar32);
      *puVar3 = auVar186._0_4_;
      puVar3[1] = auVar186._12_4_;
      puVar3[2] = auVar186._8_4_;
      puVar3[3] = auVar186._4_4_;
      auVar186 = blendps(auVar93,auVar164,4);
      puVar3 = (undefined4 *)(param_2 + -0x10 + lVar32);
      *puVar3 = auVar186._0_4_;
      puVar3[1] = auVar186._12_4_;
      puVar3[2] = auVar186._8_4_;
      puVar3[3] = auVar186._4_4_;
      pfVar31 = (float *)(param_2 + lVar32);
      *pfVar31 = fVar37;
      pfVar31[1] = fVar82;
      pfVar31[2] = fVar83;
      pfVar31[3] = fVar84;
      lVar32 = lVar32 + 0x30;
      uVar30 = uVar30 + 4;
    } while ((int)uVar30 < (int)(uVar23 & 0xfffffffc));
  }
  if ((int)uVar30 < (int)param_5) {
    auVar150._0_4_ =
         -(uint)((int)(uVar30 | (uint)__xmm_00000003000000020000000100000000) < (int)param_5);
    auVar150._4_4_ =
         -(uint)((int)(uVar30 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_5);
    auVar150._8_4_ = -(uint)((int)(uVar30 | _UNK_150631e08) < (int)param_5);
    auVar150._12_4_ = -(uint)((int)(uVar30 | _UNK_150631e0c) < (int)param_5);
    uVar24 = (ulonglong)uVar30;
    pauVar2 = (undefined1 (*) [16])(param_1 + uVar24 * 0xc);
    iVar28 = movmskps(uVar30,auVar150);
    if (iVar28 == 0xf) {
      auVar186 = *pauVar2;
      auVar112 = pauVar2[1];
      auVar97._0_4_ = auVar186._0_4_;
      auVar184 = insertps(auVar112,auVar186,0x8c);
      auVar97._4_4_ = auVar186._12_4_;
      auVar97._8_4_ = auVar112._8_4_;
      auVar97._12_4_ = *(undefined4 *)(pauVar2[2] + 4);
      auVar136._4_4_ = auVar112._0_4_;
      auVar136._0_4_ = auVar186._4_4_;
      auVar136._8_4_ = auVar112._12_4_;
      auVar136._12_4_ = *(undefined4 *)(pauVar2[2] + 8);
      auVar165._0_8_ = auVar184._0_8_;
      auVar165._8_4_ = *(undefined4 *)pauVar2[2];
      auVar165._12_4_ = *(undefined4 *)(pauVar2[2] + 0xc);
      pfVar31 = (float *)(param_2 + uVar24 * 0xc);
      auVar186 = *(undefined1 (*) [16])(param_2 + uVar24 * 0xc);
      auVar112 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar24 * 0xc);
      puVar3 = (undefined4 *)(param_2 + 0x20 + uVar24 * 0xc);
      auVar204._0_4_ = auVar186._0_4_;
      auVar184 = insertps(auVar112,auVar186,0x8c);
      auVar204._4_4_ = auVar186._12_4_;
      auVar204._8_4_ = auVar112._8_4_;
      auVar204._12_4_ = puVar3[1];
      auVar216._4_4_ = auVar112._0_4_;
      auVar216._0_4_ = auVar186._4_4_;
      auVar216._8_4_ = auVar112._12_4_;
      auVar216._12_4_ = puVar3[2];
      auVar224._0_8_ = auVar184._0_8_;
      auVar224._8_4_ = *puVar3;
      auVar224._12_4_ = puVar3[3];
      uVar23 = 0xf;
    }
    else {
      auVar44._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar150._0_4_;
      auVar44._4_4_ = _UNK_150b50da4 & auVar150._4_4_;
      auVar44._8_4_ = _UNK_150b50da8 & auVar150._8_4_;
      auVar44._12_4_ = _UNK_150b50dac & auVar150._12_4_;
      lVar33 = extractps(auVar44,1);
      lVar34 = extractps(auVar44,2);
      lVar32 = extractps(auVar44,3);
      auVar186 = insertps(ZEXT416(*(uint *)*pauVar2),*(undefined4 *)(*pauVar2 + lVar33),0x10);
      auVar186 = insertps(auVar186,*(undefined4 *)(*pauVar2 + lVar34),0x20);
      auVar97 = insertps(auVar186,*(undefined4 *)(*pauVar2 + lVar32),0x30);
      auVar186 = ___xmm_000000280000001c0000001000000004 & auVar150;
      auVar112 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar186._0_4_)),
                          *(undefined4 *)(*pauVar2 + auVar186._4_4_),0x10);
      auVar112 = insertps(auVar112,*(undefined4 *)(*pauVar2 + auVar186._8_4_),0x20);
      auVar136 = insertps(auVar112,*(undefined4 *)(*pauVar2 + auVar186._12_4_),0x30);
      auVar112 = ___xmm_0000002c000000200000001400000008 & auVar150;
      uVar23 = auVar112._0_4_;
      auVar184 = insertps(ZEXT416(*(uint *)(*pauVar2 + uVar23)),
                          *(undefined4 *)(*pauVar2 + auVar112._4_4_),0x10);
      auVar184 = insertps(auVar184,*(undefined4 *)(*pauVar2 + auVar112._8_4_),0x20);
      auVar165 = insertps(auVar184,*(undefined4 *)(*pauVar2 + auVar112._12_4_),0x30);
      pfVar31 = (float *)(param_2 + uVar24 * 0xc);
      auVar184 = insertps(ZEXT416(*(uint *)(param_2 + uVar24 * 0xc)),
                          *(undefined4 *)(lVar33 + (longlong)pfVar31),0x10);
      auVar184 = insertps(auVar184,*(undefined4 *)(lVar34 + (longlong)pfVar31),0x20);
      auVar204 = insertps(auVar184,*(undefined4 *)(lVar32 + (longlong)pfVar31),0x30);
      auVar184 = insertps(ZEXT416(*(uint *)((ulonglong)auVar186._0_4_ + (longlong)pfVar31)),
                          *(undefined4 *)((ulonglong)auVar186._4_4_ + (longlong)pfVar31),0x10);
      auVar184 = insertps(auVar184,*(undefined4 *)((ulonglong)auVar186._8_4_ + (longlong)pfVar31),
                          0x20);
      auVar216 = insertps(auVar184,*(undefined4 *)((ulonglong)auVar186._12_4_ + (longlong)pfVar31),
                          0x30);
      auVar186 = insertps(ZEXT416(*(uint *)((ulonglong)uVar23 + (longlong)pfVar31)),
                          *(undefined4 *)((ulonglong)auVar112._4_4_ + (longlong)pfVar31),0x10);
      auVar186 = insertps(auVar186,*(undefined4 *)((ulonglong)auVar112._8_4_ + (longlong)pfVar31),
                          0x20);
      auVar224 = insertps(auVar186,*(undefined4 *)((ulonglong)auVar112._12_4_ + (longlong)pfVar31),
                          0x30);
    }
    dVar110 = (double)auVar97._8_4_ * param_4 - dVar196;
    dVar134 = (double)auVar97._12_4_ * param_4 - dVar196;
    dVar182 = (double)auVar97._0_4_ * param_4 - dVar196;
    dVar196 = (double)auVar97._4_4_ * param_4 - dVar196;
    dVar214 = (double)auVar136._8_4_ * param_4 - dVar88;
    dVar222 = (double)auVar136._12_4_ * param_4 - dVar88;
    dVar145 = (double)auVar136._0_4_ * param_4 - dVar88;
    dVar88 = (double)auVar136._4_4_ * param_4 - dVar88;
    dVar227 = (double)auVar165._8_4_ * param_4 - dVar237;
    dVar236 = (double)auVar165._12_4_ * param_4 - dVar237;
    dVar230 = (double)auVar165._0_4_ * param_4 - dVar237;
    dVar237 = (double)auVar165._4_4_ * param_4 - dVar237;
    dVar258 = local_1d8 * dVar145 - uStack_1d0 * dVar182;
    dVar261 = local_1d8 * dVar88 - uStack_1d0 * dVar196;
    dVar247 = local_1d8 * dVar214 - uStack_1d0 * dVar110;
    dVar255 = local_1d8 * dVar222 - uStack_1d0 * dVar134;
    dVar156 = uStack_1d0 * dVar230 - dVar89 * dVar145;
    dVar175 = uStack_1d0 * dVar237 - dVar89 * dVar88;
    dVar198 = uStack_1d0 * dVar227 - dVar89 * dVar214;
    dVar211 = uStack_1d0 * dVar236 - dVar89 * dVar222;
    dVar130 = dVar89 * dVar182 - local_1d8 * dVar230;
    dVar144 = dVar89 * dVar196 - local_1d8 * dVar237;
    dVar242 = dVar89 * dVar110 - local_1d8 * dVar227;
    dVar253 = dVar89 * dVar134 - local_1d8 * dVar236;
    dVar156 = dVar156 + dVar156;
    dVar175 = dVar175 + dVar175;
    dVar198 = dVar198 + dVar198;
    dVar211 = dVar211 + dVar211;
    dVar130 = dVar130 + dVar130;
    dVar144 = dVar144 + dVar144;
    dVar242 = dVar242 + dVar242;
    dVar253 = dVar253 + dVar253;
    dVar258 = dVar258 + dVar258;
    dVar261 = dVar261 + dVar261;
    dVar247 = dVar247 + dVar247;
    dVar255 = dVar255 + dVar255;
    dVar183 = (double)(float)(auVar204._8_4_ ^ _UNK_150651578);
    dVar197 = (double)(float)(auVar204._12_4_ ^ _UNK_15065157c);
    dVar195 = (double)(float)(auVar216._8_4_ ^ _UNK_150651578);
    dVar108 = (double)(float)(auVar216._12_4_ ^ _UNK_15065157c);
    dVar155 = local_1d8 * dVar195 - uStack_1d0 * dVar183;
    dVar180 = local_1d8 * dVar108 - uStack_1d0 * dVar197;
    dVar90 = (double)(float)(auVar204._0_4_ ^ __xmm_80000000800000008000000080000000);
    dVar109 = (double)(float)(auVar204._4_4_ ^ _UNK_150651574);
    dVar160 = (double)(float)(auVar216._0_4_ ^ __xmm_80000000800000008000000080000000);
    dVar176 = (double)(float)(auVar216._4_4_ ^ _UNK_150651574);
    dVar239 = (double)(float)(auVar224._0_4_ ^ __xmm_80000000800000008000000080000000);
    dVar243 = (double)(float)(auVar224._4_4_ ^ _UNK_150651574);
    dVar248 = local_1d8 * dVar160 - uStack_1d0 * dVar90;
    dVar256 = local_1d8 * dVar176 - uStack_1d0 * dVar109;
    dVar199 = (double)(float)(auVar224._8_4_ ^ _UNK_150651578);
    dVar212 = (double)(float)(auVar224._12_4_ ^ _UNK_15065157c);
    dVar245 = uStack_1d0 * dVar199 - dVar89 * dVar195;
    dVar157 = uStack_1d0 * dVar212 - dVar89 * dVar108;
    dVar229 = uStack_1d0 * dVar239 - dVar89 * dVar160;
    dVar238 = uStack_1d0 * dVar243 - dVar89 * dVar176;
    dVar159 = dVar89 * dVar183 - local_1d8 * dVar199;
    dVar223 = dVar89 * dVar197 - local_1d8 * dVar212;
    dVar131 = dVar89 * dVar90 - local_1d8 * dVar239;
    dVar146 = dVar89 * dVar109 - local_1d8 * dVar243;
    dVar245 = dVar245 + dVar245;
    dVar157 = dVar157 + dVar157;
    dVar229 = dVar229 + dVar229;
    dVar238 = dVar238 + dVar238;
    dVar159 = dVar159 + dVar159;
    dVar223 = dVar223 + dVar223;
    dVar131 = dVar131 + dVar131;
    dVar146 = dVar146 + dVar146;
    dVar155 = dVar155 + dVar155;
    dVar180 = dVar180 + dVar180;
    dVar248 = dVar248 + dVar248;
    dVar256 = dVar256 + dVar256;
    auVar207._0_8_ =
         ((uStack_1d0 * dVar258 - dVar130 * dVar89) + dVar107 * dVar156 + dVar182) * dVar246;
    auVar207._8_8_ =
         ((uStack_1d0 * dVar261 - dVar144 * dVar89) + dVar107 * dVar175 + dVar196) * dVar246;
    fVar178 = (float)(((uStack_1d0 * dVar247 - dVar242 * dVar89) + dVar107 * dVar198 + dVar110) *
                     dVar246);
    fVar213 = (float)(((uStack_1d0 * dVar255 - dVar253 * dVar89) + dVar107 * dVar211 + dVar134) *
                     dVar246);
    fVar262 = (float)auVar207._0_8_;
    fVar263 = (float)auVar207._8_8_;
    fVar35 = (float)(((dVar89 * dVar198 - dVar247 * local_1d8) + dVar107 * dVar242 + dVar214) *
                    dVar254);
    fVar221 = (float)(((dVar89 * dVar211 - dVar255 * local_1d8) + dVar107 * dVar253 + dVar222) *
                     dVar254);
    fVar264 = (float)(((dVar89 * dVar156 - dVar258 * local_1d8) + dVar107 * dVar130 + dVar145) *
                     dVar254);
    fVar265 = (float)(((dVar89 * dVar175 - dVar261 * local_1d8) + dVar107 * dVar144 + dVar88) *
                     dVar254);
    fVar83 = (float)(((local_1d8 * dVar242 - dVar198 * uStack_1d0) + dVar107 * dVar247 + dVar227) *
                    dVar181);
    fVar84 = (float)(((local_1d8 * dVar253 - dVar211 * uStack_1d0) + dVar107 * dVar255 + dVar236) *
                    dVar181);
    uVar86 = CONCAT44(fVar84,fVar83);
    fVar228 = (float)(((local_1d8 * dVar130 - dVar156 * uStack_1d0) + dVar107 * dVar258 + dVar230) *
                     dVar181);
    fVar235 = (float)(((local_1d8 * dVar144 - dVar175 * uStack_1d0) + dVar107 * dVar261 + dVar237) *
                     dVar181);
    auVar233._0_8_ = CONCAT44(fVar235,fVar228);
    auVar233._8_8_ = uVar86;
    fVar244 = (float)(((uStack_1d0 * dVar248 - dVar131 * dVar89) + dVar107 * dVar229 + dVar90) *
                     dVar246);
    auVar250._0_8_ =
         CONCAT44((float)(((uStack_1d0 * dVar256 - dVar146 * dVar89) + dVar107 * dVar238 + dVar109)
                         * dVar246),fVar244);
    fVar36 = (float)(((uStack_1d0 * dVar180 - dVar223 * dVar89) + dVar107 * dVar157 + dVar197) *
                    dVar246);
    uVar132 = CONCAT44(fVar36,(float)(((uStack_1d0 * dVar155 - dVar159 * dVar89) +
                                      dVar107 * dVar245 + dVar183) * dVar246));
    bVar26 = (char)((char)iVar28 << 4) >> 4;
    auVar250._8_8_ = uVar132;
    fVar260 = (float)(((dVar89 * dVar229 - dVar248 * local_1d8) + dVar107 * dVar131 + dVar160) *
                     dVar254);
    fVar154 = (float)(((dVar89 * dVar238 - dVar256 * local_1d8) + dVar107 * dVar146 + dVar176) *
                     dVar254);
    auVar152._0_8_ = CONCAT44(fVar154,fVar260);
    fVar80 = (float)(((dVar89 * dVar245 - dVar155 * local_1d8) + dVar107 * dVar159 + dVar195) *
                    dVar254);
    fVar37 = (float)(((dVar89 * dVar157 - dVar180 * local_1d8) + dVar107 * dVar223 + dVar108) *
                    dVar254);
    uVar85 = CONCAT44(fVar37,fVar80);
    fVar252 = (float)(((local_1d8 * dVar131 - dVar229 * uStack_1d0) + dVar107 * dVar248 + dVar239) *
                     dVar181);
    fVar257 = (float)(((local_1d8 * dVar146 - dVar238 * uStack_1d0) + dVar107 * dVar256 + dVar243) *
                     dVar181);
    auVar142._0_8_ = CONCAT44(fVar257,fVar252);
    auVar152._8_8_ = uVar85;
    fVar81 = (float)(((local_1d8 * dVar159 - dVar245 * uStack_1d0) + dVar107 * dVar155 + dVar199) *
                    dVar181);
    fVar82 = (float)(((local_1d8 * dVar223 - dVar157 * uStack_1d0) + dVar107 * dVar180 + dVar212) *
                    dVar181);
    uVar87 = CONCAT44(fVar82,fVar81);
    auVar142._8_8_ = uVar87;
    auVar112 = pmovzxbd(auVar207,auVar240);
    auVar186 = auVar112 & auVar150;
    auVar51._0_4_ = auVar186._0_4_ << 0x1f;
    auVar51._4_4_ = auVar186._4_4_ << 0x1f;
    auVar51._8_4_ = auVar186._8_4_ << 0x1f;
    auVar51._12_4_ = auVar186._12_4_ << 0x1f;
    iVar28 = movmskps(uVar23,auVar51);
    auVar191 = auVar240;
    if (iVar28 != 0) {
      auVar208._0_4_ = (auVar112._0_4_ << 0x1f) >> 0x1f;
      auVar208._4_4_ = (auVar112._4_4_ << 0x1f) >> 0x1f;
      auVar208._8_4_ = (auVar112._8_4_ << 0x1f) >> 0x1f;
      auVar208._12_4_ = (auVar112._12_4_ << 0x1f) >> 0x1f;
      auVar208 = auVar208 & auVar150;
      uVar5 = CONCAT44(_UNK_1506896e4,__xmm_7f8000007f8000007f8000007f800000);
      auVar17._8_4_ = _UNK_1506896e8;
      auVar17._0_8_ = uVar5;
      auVar17._12_4_ = _UNK_1506896ec;
      uVar91 = auVar17._8_8_;
      uVar111 = CONCAT44(fVar263,fVar262) & uVar5;
      uVar133 = CONCAT44(fVar213,fVar178) & uVar91;
      auVar122._0_4_ = -(uint)((uint)uVar111 == __xmm_7f8000007f8000007f8000007f800000);
      auVar122._4_4_ = -(uint)((uint)(uVar111 >> 0x20) == _UNK_1506896e4);
      auVar122._8_4_ = -(uint)((uint)uVar133 == _UNK_1506896e8);
      auVar122._12_4_ = -(uint)((uint)(uVar133 >> 0x20) == _UNK_1506896ec);
      auVar112 = ~auVar122 & auVar186 & ___xmm_00000001000000010000000100000001;
      auVar52._0_4_ = auVar112._0_4_ << 0x1f;
      auVar52._4_4_ = auVar112._4_4_ << 0x1f;
      auVar52._8_4_ = auVar112._8_4_ << 0x1f;
      auVar52._12_4_ = auVar112._12_4_ << 0x1f;
      iVar28 = movmskps(iVar28,auVar52);
      if (iVar28 == 0) {
        auVar55._8_4_ = 0xffffffff;
        auVar55._0_8_ = 0xffffffffffffffff;
        auVar55._12_4_ = 0xffffffff;
        auVar122 = auVar122 ^ auVar55;
        iVar28 = 0;
      }
      else {
        auVar112 = blendvps(auVar208,auVar17,auVar122);
        uVar111 = CONCAT44(fVar265,fVar264) & uVar5;
        uVar133 = CONCAT44(fVar221,fVar35) & uVar91;
        auVar53._0_4_ = -(uint)((uint)uVar111 == __xmm_7f8000007f8000007f8000007f800000);
        auVar53._4_4_ = -(uint)((uint)(uVar111 >> 0x20) == _UNK_1506896e4);
        auVar53._8_4_ = -(uint)((uint)uVar133 == _UNK_1506896e8);
        auVar53._12_4_ = -(uint)((uint)(uVar133 >> 0x20) == _UNK_1506896ec);
        auVar122 = blendvps(auVar112,auVar17,auVar53);
        auVar186 = auVar186 & ___xmm_00000001000000010000000100000001 & auVar122;
        auVar168._0_4_ = auVar186._0_4_ << 0x1f;
        auVar168._4_4_ = auVar186._4_4_ << 0x1f;
        auVar168._8_4_ = auVar186._8_4_ << 0x1f;
        auVar168._12_4_ = auVar186._12_4_ << 0x1f;
        iVar28 = movmskps(iVar28,auVar168);
        if (iVar28 != 0) {
          auVar123._0_4_ = (auVar122._0_4_ << 0x1f) >> 0x1f;
          auVar123._4_4_ = (auVar122._4_4_ << 0x1f) >> 0x1f;
          auVar123._8_4_ = (auVar122._8_4_ << 0x1f) >> 0x1f;
          auVar123._12_4_ = (auVar122._12_4_ << 0x1f) >> 0x1f;
          uVar86 = uVar86 & uVar91;
          auVar54._0_4_ =
               -(uint)((uint)(auVar233._0_8_ & uVar5) == __xmm_7f8000007f8000007f8000007f800000);
          auVar54._4_4_ = -(uint)((uint)((auVar233._0_8_ & uVar5) >> 0x20) == _UNK_1506896e4);
          auVar54._8_4_ = -(uint)((uint)uVar86 == _UNK_1506896e8);
          auVar54._12_4_ = -(uint)((uint)(uVar86 >> 0x20) == _UNK_1506896ec);
          auVar122 = blendvps(auVar123 & auVar208,auVar17,auVar54);
        }
      }
      auVar186 = packssdw(auVar208,auVar208);
      auVar112 = packsswb(auVar186,auVar186);
      auVar186 = pshufb(auVar122,___xmm_0000000000000000000000000c080400);
      auVar186 = psllw(auVar186,7);
      auVar186 = auVar186 & ___xmm_80808080808080808080808080808080;
      auVar79 = SUB1615((undefined1  [16])0x0,1);
      auVar191[0] = -(auVar186[0] < '\0');
      auVar191[1] = -(auVar186[1] < '\0');
      auVar191[2] = -(auVar186[2] < '\0');
      auVar191[3] = -(auVar186[3] < '\0');
      auVar191[4] = -(auVar186[4] < '\0');
      auVar191[5] = -(auVar186[5] < '\0');
      auVar191[6] = -(auVar186[6] < '\0');
      auVar191[7] = -(auVar186[7] < '\0');
      auVar191[8] = -(auVar186[8] < '\0');
      auVar191[9] = -(auVar186[9] < auVar79[8]);
      auVar191[10] = -(auVar186[10] < auVar79[9]);
      auVar191[0xb] = -(auVar186[0xb] < auVar79[10]);
      auVar191[0xc] = -(auVar186[0xc] < auVar79[0xb]);
      auVar191[0xd] = -(auVar186[0xd] < auVar79[0xc]);
      auVar191[0xe] = -(auVar186[0xe] < auVar79[0xd]);
      auVar191[0xf] = -(auVar186[0xf] < auVar79[0xe]);
      auVar191 = auVar191 & auVar112;
      auVar112 = pmovzxbd(auVar112,auVar191);
      auVar186 = auVar112 & auVar150;
      auVar56._0_4_ = auVar186._0_4_ << 0x1f;
      auVar56._4_4_ = auVar186._4_4_ << 0x1f;
      auVar56._8_4_ = auVar186._8_4_ << 0x1f;
      auVar56._12_4_ = auVar186._12_4_ << 0x1f;
      iVar28 = movmskps(iVar28,auVar56);
      if (iVar28 != 0) {
        auVar209._0_4_ = (auVar112._0_4_ << 0x1f) >> 0x1f;
        auVar209._4_4_ = (auVar112._4_4_ << 0x1f) >> 0x1f;
        auVar209._8_4_ = (auVar112._8_4_ << 0x1f) >> 0x1f;
        auVar209._12_4_ = (auVar112._12_4_ << 0x1f) >> 0x1f;
        auVar209 = auVar209 & auVar150;
        auVar124._0_4_ =
             -(uint)((uint)(auVar250._0_8_ & uVar5) == __xmm_7f8000007f8000007f8000007f800000);
        auVar124._4_4_ = -(uint)((uint)((auVar250._0_8_ & uVar5) >> 0x20) == _UNK_1506896e4);
        auVar124._8_4_ = -(uint)((uint)(uVar132 & uVar91) == _UNK_1506896e8);
        auVar124._12_4_ = -(uint)((uint)((uVar132 & uVar91) >> 0x20) == _UNK_1506896ec);
        auVar112 = ~auVar124 & auVar186 & ___xmm_00000001000000010000000100000001;
        auVar57._0_4_ = auVar112._0_4_ << 0x1f;
        auVar57._4_4_ = auVar112._4_4_ << 0x1f;
        auVar57._8_4_ = auVar112._8_4_ << 0x1f;
        auVar57._12_4_ = auVar112._12_4_ << 0x1f;
        iVar28 = movmskps(iVar28,auVar57);
        if (iVar28 == 0) {
          auVar64._8_4_ = 0xffffffff;
          auVar64._0_8_ = 0xffffffffffffffff;
          auVar64._12_4_ = 0xffffffff;
          auVar124 = auVar124 ^ auVar64;
        }
        else {
          auVar112 = blendvps(auVar209,auVar17,auVar124);
          uVar85 = uVar85 & uVar91;
          auVar58._0_4_ =
               -(uint)((uint)(auVar152._0_8_ & uVar5) == __xmm_7f8000007f8000007f8000007f800000);
          auVar58._4_4_ = -(uint)((uint)((auVar152._0_8_ & uVar5) >> 0x20) == _UNK_1506896e4);
          auVar58._8_4_ = -(uint)((uint)uVar85 == _UNK_1506896e8);
          auVar58._12_4_ = -(uint)((uint)(uVar85 >> 0x20) == _UNK_1506896ec);
          auVar124 = blendvps(auVar112,auVar17,auVar58);
          auVar186 = auVar186 & ___xmm_00000001000000010000000100000001 & auVar124;
          auVar169._0_4_ = auVar186._0_4_ << 0x1f;
          auVar169._4_4_ = auVar186._4_4_ << 0x1f;
          auVar169._8_4_ = auVar186._8_4_ << 0x1f;
          auVar169._12_4_ = auVar186._12_4_ << 0x1f;
          iVar28 = movmskps(iVar28,auVar169);
          if (iVar28 != 0) {
            auVar125._0_4_ = (auVar124._0_4_ << 0x1f) >> 0x1f;
            auVar125._4_4_ = (auVar124._4_4_ << 0x1f) >> 0x1f;
            auVar125._8_4_ = (auVar124._8_4_ << 0x1f) >> 0x1f;
            auVar125._12_4_ = (auVar124._12_4_ << 0x1f) >> 0x1f;
            uVar87 = uVar87 & uVar91;
            auVar59._0_4_ =
                 -(uint)((uint)(auVar142._0_8_ & uVar5) == __xmm_7f8000007f8000007f8000007f800000);
            auVar59._4_4_ = -(uint)((uint)((auVar142._0_8_ & uVar5) >> 0x20) == _UNK_1506896e4);
            auVar59._8_4_ = -(uint)((uint)uVar87 == _UNK_1506896e8);
            auVar59._12_4_ = -(uint)((uint)(uVar87 >> 0x20) == _UNK_1506896ec);
            auVar124 = blendvps(auVar125 & auVar209,auVar17,auVar59);
          }
        }
        auVar186 = pshufb(auVar124,___xmm_0000000000000000000000000c080400);
        auVar112 = packssdw(auVar209,auVar209);
        auVar186 = psllw(auVar186,7);
        auVar186 = auVar186 & ___xmm_80808080808080808080808080808080;
        auVar191 = packsswb(auVar112,auVar112);
        auVar79 = SUB1615((undefined1  [16])0x0,1);
        auVar193[0] = -(auVar186[0] < '\0');
        auVar193[1] = -(auVar186[1] < '\0');
        auVar193[2] = -(auVar186[2] < '\0');
        auVar193[3] = -(auVar186[3] < '\0');
        auVar193[4] = -(auVar186[4] < '\0');
        auVar193[5] = -(auVar186[5] < '\0');
        auVar193[6] = -(auVar186[6] < '\0');
        auVar193[7] = -(auVar186[7] < '\0');
        auVar193[8] = -(auVar186[8] < '\0');
        auVar193[9] = -(auVar186[9] < auVar79[8]);
        auVar193[10] = -(auVar186[10] < auVar79[9]);
        auVar193[0xb] = -(auVar186[0xb] < auVar79[10]);
        auVar193[0xc] = -(auVar186[0xc] < auVar79[0xb]);
        auVar193[0xd] = -(auVar186[0xd] < auVar79[0xc]);
        auVar193[0xe] = -(auVar186[0xe] < auVar79[0xd]);
        auVar193[0xf] = -(auVar186[0xf] < auVar79[0xe]);
        auVar191 = auVar193 & auVar191;
      }
    }
    auVar186 = packssdw(auVar150,auVar150);
    auVar186 = packsswb(auVar186,auVar186);
    auVar240 = pblendvb(auVar240,auVar191 & ___xmm_00000000000000000000000001010101,auVar186);
    if ((~bVar26 & 0xf) == 0) {
      auVar65._4_4_ = fVar263;
      auVar65._0_4_ = fVar262;
      auVar65._8_8_ = CONCAT44(fVar213,fVar178);
      auVar15._4_4_ = fVar265;
      auVar15._0_4_ = fVar264;
      auVar15._8_4_ = fVar35;
      auVar15._12_4_ = fVar221;
      auVar186 = insertps(auVar65,auVar15,0x30);
      auVar104._4_4_ = fVar35;
      auVar104._0_4_ = fVar265;
      auVar104._8_4_ = fVar228;
      auVar104._12_4_ = fVar235;
      auVar186 = insertps(auVar186,auVar233,0x20);
      *(int *)*pauVar2 = auVar186._0_4_;
      *(int *)(*pauVar2 + 4) = auVar186._12_4_;
      *(int *)(*pauVar2 + 8) = auVar186._8_4_;
      *(int *)(*pauVar2 + 0xc) = auVar186._4_4_;
      auVar10._4_4_ = fVar263;
      auVar10._0_4_ = fVar262;
      auVar10._8_4_ = fVar178;
      auVar10._12_4_ = fVar213;
      auVar186 = blendps(auVar104,auVar10,4);
      *(int *)pauVar2[1] = auVar186._0_4_;
      *(int *)(pauVar2[1] + 4) = auVar186._12_4_;
      *(int *)(pauVar2[1] + 8) = auVar186._8_4_;
      *(int *)(pauVar2[1] + 0xc) = auVar186._4_4_;
      *(float *)pauVar2[2] = fVar83;
      *(float *)(pauVar2[2] + 4) = fVar213;
      *(float *)(pauVar2[2] + 8) = fVar221;
      *(float *)(pauVar2[2] + 0xc) = fVar84;
      auVar66._8_8_ = uVar132;
      auVar66._0_8_ = auVar250._0_8_;
      auVar186 = insertps(auVar66,auVar152,0x30);
      auVar186 = insertps(auVar186,auVar142,0x20);
      *pfVar31 = auVar186._0_4_;
      pfVar31[1] = auVar186._12_4_;
      pfVar31[2] = auVar186._8_4_;
      pfVar31[3] = auVar186._4_4_;
      auVar67._4_4_ = fVar80;
      auVar67._0_4_ = fVar154;
      auVar67._8_4_ = fVar252;
      auVar67._12_4_ = fVar257;
      auVar186 = blendps(auVar67,auVar250,4);
      puVar3 = (undefined4 *)(param_2 + 0x10 + uVar24 * 0xc);
      *puVar3 = auVar186._0_4_;
      puVar3[1] = auVar186._12_4_;
      puVar3[2] = auVar186._8_4_;
      puVar3[3] = auVar186._4_4_;
      pfVar31 = (float *)(param_2 + 0x20 + uVar24 * 0xc);
      *pfVar31 = fVar81;
      pfVar31[1] = fVar36;
      pfVar31[2] = fVar37;
      pfVar31[3] = fVar82;
      puVar25 = local_268;
    }
    else {
      if ((bVar26 & 1) != 0) {
        *(float *)*pauVar2 = fVar262;
      }
      if ((bVar26 & 2) != 0) {
        auVar9._4_4_ = fVar263;
        auVar9._0_4_ = fVar262;
        auVar9._8_4_ = fVar178;
        auVar9._12_4_ = fVar213;
        uVar4 = extractps(auVar9,1);
        *(undefined8 *)(*pauVar2 + 0xc) = uVar4;
      }
      if ((bVar26 & 4) != 0) {
        auVar8._4_4_ = fVar263;
        auVar8._0_4_ = fVar262;
        auVar8._8_4_ = fVar178;
        auVar8._12_4_ = fVar213;
        uVar4 = extractps(auVar8,2);
        *(undefined8 *)(pauVar2[1] + 8) = uVar4;
      }
      if ((char)bVar26 < '\0') {
        auVar7._4_4_ = fVar263;
        auVar7._0_4_ = fVar262;
        auVar7._8_4_ = fVar178;
        auVar7._12_4_ = fVar213;
        uVar4 = extractps(auVar7,3);
        *(undefined8 *)(pauVar2[2] + 4) = uVar4;
      }
      if ((bVar26 & 1) != 0) {
        *(float *)(*pauVar2 + 4) = fVar264;
      }
      if ((bVar26 & 2) != 0) {
        auVar14._4_4_ = fVar265;
        auVar14._0_4_ = fVar264;
        auVar14._8_4_ = fVar35;
        auVar14._12_4_ = fVar221;
        uVar4 = extractps(auVar14,1);
        *(undefined8 *)pauVar2[1] = uVar4;
      }
      if ((bVar26 & 4) != 0) {
        auVar13._4_4_ = fVar265;
        auVar13._0_4_ = fVar264;
        auVar13._8_4_ = fVar35;
        auVar13._12_4_ = fVar221;
        uVar4 = extractps(auVar13,2);
        *(undefined8 *)(pauVar2[1] + 0xc) = uVar4;
      }
      if ((char)bVar26 < '\0') {
        auVar12._4_4_ = fVar265;
        auVar12._0_4_ = fVar264;
        auVar12._8_4_ = fVar35;
        auVar12._12_4_ = fVar221;
        uVar4 = extractps(auVar12,3);
        *(undefined8 *)(pauVar2[2] + 8) = uVar4;
      }
      if ((bVar26 & 1) != 0) {
        *(float *)(*pauVar2 + 8) = fVar228;
      }
      if ((bVar26 & 2) != 0) {
        uVar4 = extractps(auVar233,1);
        *(undefined8 *)(pauVar2[1] + 4) = uVar4;
      }
      if ((bVar26 & 4) != 0) {
        uVar4 = extractps(auVar233,2);
        *(undefined8 *)pauVar2[2] = uVar4;
      }
      if ((char)bVar26 < '\0') {
        uVar4 = extractps(auVar233,3);
        *(undefined8 *)(pauVar2[2] + 0xc) = uVar4;
      }
      if ((bVar26 & 1) != 0) {
        *pfVar31 = fVar244;
      }
      if ((bVar26 & 2) != 0) {
        uVar4 = extractps(auVar250,1);
        *(undefined8 *)(param_2 + 0xc + uVar24 * 0xc) = uVar4;
      }
      if ((bVar26 & 4) != 0) {
        uVar4 = extractps(auVar250,2);
        *(undefined8 *)(param_2 + 0x18 + uVar24 * 0xc) = uVar4;
      }
      if ((char)bVar26 < '\0') {
        uVar4 = extractps(auVar250,3);
        *(undefined8 *)(param_2 + 0x24 + uVar24 * 0xc) = uVar4;
      }
      if ((bVar26 & 1) != 0) {
        *(float *)(param_2 + 4 + uVar24 * 0xc) = fVar260;
      }
      if ((bVar26 & 2) != 0) {
        uVar4 = extractps(auVar152,1);
        *(undefined8 *)(param_2 + 0x10 + uVar24 * 0xc) = uVar4;
      }
      if ((bVar26 & 4) != 0) {
        uVar4 = extractps(auVar152,2);
        *(undefined8 *)(param_2 + 0x1c + uVar24 * 0xc) = uVar4;
      }
      if ((char)bVar26 < '\0') {
        uVar4 = extractps(auVar152,3);
        *(undefined8 *)(param_2 + 0x28 + uVar24 * 0xc) = uVar4;
      }
      if ((bVar26 & 1) != 0) {
        *(float *)(param_2 + 8 + uVar24 * 0xc) = fVar252;
      }
      if ((bVar26 & 2) != 0) {
        uVar4 = extractps(auVar142,1);
        *(undefined8 *)(param_2 + 0x14 + uVar24 * 0xc) = uVar4;
      }
      if ((bVar26 & 4) != 0) {
        uVar4 = extractps(auVar142,2);
        *(undefined8 *)(param_2 + 0x20 + uVar24 * 0xc) = uVar4;
      }
      puVar25 = local_268;
      if ((char)bVar26 < '\0') {
        uVar4 = extractps(auVar142,3);
        *(undefined8 *)(param_2 + 0x2c + uVar24 * 0xc) = uVar4;
        puVar25 = local_268;
      }
    }
  }
  auVar240 = auVar240 & ___xmm_00000000000000000000000001010101;
  auVar105._0_4_ = -(uint)(auVar68._0_4_ == 0);
  auVar105._4_4_ = -(uint)(auVar68._4_4_ == 0);
  auVar105._8_4_ = -(uint)(auVar68._8_4_ == 0);
  auVar105._12_4_ = -(uint)(auVar68._12_4_ == 0);
  auVar241[0] = -(auVar240[0] == '\0');
  auVar241[1] = -(auVar240[1] == '\0');
  auVar241[2] = -(auVar240[2] == '\0');
  auVar241[3] = -(auVar240[3] == '\0');
  auVar241[4] = -(auVar240[4] == '\0');
  auVar241[5] = -(auVar240[5] == '\0');
  auVar241[6] = -(auVar240[6] == '\0');
  auVar241[7] = -(auVar240[7] == '\0');
  auVar241[8] = -(auVar240[8] == '\0');
  auVar241[9] = -(auVar240[9] == '\0');
  auVar241[10] = -(auVar240[10] == '\0');
  auVar241[0xb] = -(auVar240[0xb] == '\0');
  auVar241[0xc] = -(auVar240[0xc] == '\0');
  auVar241[0xd] = -(auVar240[0xd] == '\0');
  auVar241[0xe] = -(auVar240[0xe] == '\0');
  auVar241[0xf] = -(auVar240[0xf] == '\0');
  auVar68 = pmovsxbd((undefined1  [16])0x0,auVar241);
  auVar68 = ~auVar105 & auVar68;
LAB_140d37faf:
  return CONCAT71((int7)((ulonglong)puVar25 >> 8),
                  (___xmm_00000001000000010000000100000001 & auVar68) == (undefined1  [16])0x0);
}

// TransformClothSimulData_sse4 @ 140d38030

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TransformClothSimulData_sse4
               (longlong param_1,longlong param_2,ulonglong *param_3,double param_4,uint param_5)

{
  uint *puVar1;
  undefined1 (*pauVar2) [16];
  undefined4 *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  ulonglong uVar7;
  byte bVar8;
  uint uVar9;
  undefined4 in_R9D;
  int iVar10;
  uint uVar11;
  float *pfVar12;
  undefined4 in_R10D;
  undefined4 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  double dVar20;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar21;
  double dVar22;
  undefined1 auVar29 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar23;
  undefined8 uVar24;
  float fVar36;
  undefined8 uVar25;
  float fVar38;
  double dVar42;
  undefined1 auVar34 [16];
  float fVar43;
  double dVar44;
  double dVar51;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar45;
  double dVar46;
  float fVar50;
  double dVar52;
  undefined1 auVar49 [16];
  float fVar53;
  double dVar54;
  double dVar62;
  undefined1 auVar57 [16];
  double dVar55;
  double dVar56;
  double dVar63;
  double dVar64;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  float fVar65;
  double dVar66;
  double dVar73;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar72;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  double dVar74;
  double dVar75;
  double dVar78;
  double dVar79;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  double dVar80;
  undefined1 auVar82 [16];
  double dVar81;
  double dVar84;
  double dVar85;
  double dVar86;
  undefined1 auVar83 [16];
  float fVar87;
  double dVar88;
  undefined1 auVar90 [16];
  double dVar94;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  double dVar89;
  double dVar95;
  undefined1 auVar93 [16];
  double dVar96;
  undefined1 auVar97 [16];
  double dVar98;
  double dVar99;
  double dVar100;
  double dVar101;
  double dVar102;
  double dVar103;
  float fVar104;
  double dVar105;
  undefined1 auVar106 [16];
  double dVar109;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar110 [16];
  double dVar111;
  double dVar112;
  double dVar113;
  double dVar115;
  double dVar116;
  double dVar117;
  undefined1 auVar114 [16];
  double dVar118;
  double dVar119;
  double dVar122;
  double dVar123;
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  double dVar124;
  undefined1 unaff_XMM13 [16];
  undefined1 auVar125 [16];
  double dVar126;
  uint local_238;
  uint uStack_234;
  float fVar35;
  float fVar37;
  
  dVar118 = (double)param_3[2] * ___xmm_3ff0000000000000bff0000000000000;
  dVar122 = (double)param_3[3] * _UNK_15076b868;
  dVar111 = (double)(*param_3 ^ __xmm_80000000000000008000000000000000);
  dVar115 = (double)(param_3[1] ^ _UNK_15066df78);
  dVar86 = (double)param_3[10];
  auVar27._8_8_ = 0;
  auVar27._0_8_ = dVar86;
  dVar103 = (double)param_3[8];
  dVar52 = (double)param_3[9];
  dVar54 = (double)((ulonglong)dVar103 & __xmm_7fffffffffffffff7fffffffffffffff);
  dVar62 = (double)((ulonglong)dVar52 & _UNK_15061cc88);
  iVar17 = -(uint)((double)(__xmm_7fffffffffffffff7fffffffffffffff & (ulonglong)dVar86) <=
                  ___xmm_3e45798ee2308c3a3e45798ee2308c3a);
  iVar18 = -(uint)(0.0 <= _UNK_150aa88b8);
  auVar125._4_4_ = -(uint)(dVar62 <= _UNK_150aa88b8);
  auVar125._0_4_ = -(uint)(dVar54 <= ___xmm_3e45798ee2308c3a3e45798ee2308c3a);
  auVar125._8_4_ = iVar17;
  auVar125._12_4_ = iVar18;
  uVar9 = -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <
                 (double)(__xmm_7fffffffffffffff7fffffffffffffff & (ulonglong)dVar86));
  auVar121._4_4_ = -(uint)(_UNK_150aa88b8 < dVar62);
  auVar121._0_4_ = -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a < dVar54);
  auVar121._8_4_ = uVar9;
  auVar121._12_4_ = -(uint)(_UNK_150aa88b8 < 0.0);
  auVar90._8_8_ = (double)-(ulonglong)(_UNK_150b51668 <= 0.0);
  auVar90._0_8_ = (double)-(ulonglong)(___xmm_3914c4e977ba1f5c3914c4e977ba1f5c <= dVar86);
  auVar29._0_4_ =
       -(uint)((___xmm_3914c4e977ba1f5c3914c4e977ba1f5c <= dVar103 &&
               dVar103 <= ___xmm_46c8a6e32246c99c46c8a6e32246c99c) &&
              ___xmm_3e45798ee2308c3a3e45798ee2308c3a < dVar54);
  auVar29._4_4_ =
       -(uint)((_UNK_150b51668 <= dVar52 && dVar52 <= _UNK_150b51658) && _UNK_150aa88b8 < dVar62);
  auVar29._8_4_ =
       (uint)-(ulonglong)(___xmm_3914c4e977ba1f5c3914c4e977ba1f5c <= dVar86) &
       -(uint)(dVar86 <= ___xmm_46c8a6e32246c99c46c8a6e32246c99c) & uVar9;
  auVar29._12_4_ =
       (uint)-(ulonglong)(_UNK_150b51668 <= 0.0) & -(uint)(0.0 <= _UNK_150b51658) &
       -(uint)(_UNK_150aa88b8 < 0.0);
  iVar10 = movmskps(in_R9D,auVar29);
  if (iVar10 == 0) {
    auVar29 = ZEXT816(0);
  }
  else {
    auVar92._0_4_ = (float)dVar103;
    auVar92._4_4_ = (float)dVar52;
    fVar87 = (float)dVar86;
    auVar92._8_4_ = fVar87;
    auVar92._12_4_ = 0;
    auVar90 = rcpps(ZEXT416((uint)fVar87),auVar92);
    dVar54 = (double)((___xmm_40000000400000004000000040000000 - auVar92._0_4_ * auVar90._0_4_) *
                     auVar90._0_4_);
    dVar62 = (double)((_UNK_15076ba34 - auVar92._4_4_ * auVar90._4_4_) * auVar90._4_4_);
    dVar88 = (double)((_UNK_15076ba38 - fVar87 * auVar90._8_4_) * auVar90._8_4_);
    dVar94 = (double)((_UNK_15076ba3c - auVar90._12_4_ * 0.0) * auVar90._12_4_);
    dVar88 = (___xmm_40000000000000004000000000000000 - dVar86 * dVar88) * dVar88;
    dVar94 = (_UNK_150689698 - dVar94 * 0.0) * dVar94;
    dVar54 = (___xmm_40000000000000004000000000000000 - dVar103 * dVar54) * dVar54;
    dVar62 = (_UNK_150689698 - dVar52 * dVar62) * dVar62;
    unaff_XMM13._0_8_ = (___xmm_40000000000000004000000000000000 - dVar103 * dVar54) * dVar54;
    unaff_XMM13._8_8_ = (_UNK_150689698 - dVar52 * dVar62) * dVar62;
    auVar90._0_8_ = (___xmm_40000000000000004000000000000000 - dVar86 * dVar88) * dVar88;
    auVar90._8_8_ = (_UNK_150689698 - dVar94 * 0.0) * dVar94;
    uVar13 = movmskps(in_R10D,auVar121);
    if ((char)uVar13 == (char)iVar10) goto LAB_140d382ef;
  }
  auVar57._8_4_ = 0xffffffff;
  auVar57._0_8_ = 0xffffffffffffffff;
  auVar57._12_4_ = 0xffffffff;
  dVar88 = (double)(___xmm_7fcfffffffffffff7fcfffffffffffff -
                   (___xmm_7fe00000000000007fe0000000000000 & (ulonglong)dVar103));
  dVar94 = (double)((longlong)_UNK_150b51628 - (_UNK_150b51678 & (ulonglong)dVar52));
  dVar54 = (double)(___xmm_7fcfffffffffffff7fcfffffffffffff -
                   ((ulonglong)dVar86 & ___xmm_7fe00000000000007fe0000000000000));
  auVar97._0_4_ = (float)(dVar103 * dVar88);
  auVar97._4_4_ = (float)(dVar52 * dVar94);
  fVar87 = (float)(dVar86 * dVar54);
  auVar91._0_8_ = CONCAT44((float)(_UNK_150b51628 * 0.0),fVar87);
  auVar91._8_8_ = 0;
  auVar97._8_8_ = auVar91._0_8_;
  auVar27 = rcpps(auVar91,auVar97);
  auVar57 = auVar57 ^ auVar29;
  dVar54 = (double)((_UNK_15076ba38 - fVar87 * auVar27._8_4_) * auVar27._8_4_) * dVar54;
  dVar62 = (double)((_UNK_15076ba3c - (float)(_UNK_150b51628 * 0.0) * auVar27._12_4_) *
                   auVar27._12_4_) * _UNK_150b51628;
  dVar88 = (double)((___xmm_40000000400000004000000040000000 - auVar97._0_4_ * auVar27._0_4_) *
                   auVar27._0_4_) * dVar88;
  dVar94 = (double)((_UNK_15076ba34 - auVar97._4_4_ * auVar27._4_4_) * auVar27._4_4_) * dVar94;
  dVar88 = (___xmm_40000000000000004000000000000000 - dVar103 * dVar88) * dVar88;
  dVar94 = (_UNK_150689698 - dVar52 * dVar94) * dVar94;
  dVar54 = (___xmm_40000000000000004000000000000000 - dVar86 * dVar54) * dVar54;
  dVar62 = (_UNK_150689698 - dVar62 * 0.0) * dVar62;
  auVar106._0_8_ = (___xmm_40000000000000004000000000000000 - dVar86 * dVar54) * dVar54;
  auVar106._8_8_ = (_UNK_150689698 - dVar62 * 0.0) * dVar62;
  auVar82._0_8_ = (___xmm_40000000000000004000000000000000 - dVar103 * dVar88) * dVar88;
  auVar82._8_8_ = (_UNK_150689698 - dVar52 * dVar94) * dVar94;
  auVar26._4_4_ = auVar57._0_4_;
  auVar26._0_4_ = auVar57._0_4_;
  auVar26._8_4_ = auVar57._4_4_;
  auVar26._12_4_ = auVar57._4_4_;
  unaff_XMM13 = blendvps(unaff_XMM13,auVar82,auVar26);
  auVar27._4_4_ = auVar57._8_4_;
  auVar27._0_4_ = auVar57._8_4_;
  auVar27._8_4_ = auVar57._12_4_;
  auVar27._12_4_ = auVar57._12_4_;
  auVar90 = blendvps(auVar90,auVar106,auVar27);
LAB_140d382ef:
  dVar86 = (double)param_3[4];
  dVar103 = (double)param_3[5];
  dVar52 = (double)param_3[6];
  auVar27 = pmovsxdq(auVar27,auVar125);
  auVar125 = blendvps(unaff_XMM13,ZEXT816(0),auVar27);
  auVar28._4_4_ = iVar17;
  auVar28._0_4_ = iVar17;
  auVar28._8_4_ = iVar18;
  auVar28._12_4_ = iVar18;
  auVar27 = blendvps(auVar90,ZEXT816(0),auVar28);
  uVar9 = param_5 + 3;
  if (-1 < (int)param_5) {
    uVar9 = param_5;
  }
  dVar62 = auVar125._0_8_;
  dVar88 = auVar125._8_8_;
  dVar54 = auVar27._0_8_;
  if ((int)(uVar9 & 0xfffffffc) < 1) {
    uVar11 = 0;
    if ((int)param_5 < 1) {
      return;
    }
  }
  else {
    lVar14 = 0x20;
    uVar11 = 0;
    do {
      auVar27 = *(undefined1 (*) [16])(param_1 + -0x20 + lVar14);
      auVar125 = *(undefined1 (*) [16])(param_1 + -0x10 + lVar14);
      pfVar12 = (float *)(param_1 + lVar14);
      auVar29 = insertps(auVar125,auVar27,0x8c);
      auVar121 = *(undefined1 (*) [16])(param_2 + -0x20 + lVar14);
      auVar90 = *(undefined1 (*) [16])(param_2 + -0x10 + lVar14);
      puVar1 = (uint *)(param_2 + lVar14);
      auVar92 = insertps(auVar90,auVar121,0x8c);
      dVar74 = (double)auVar27._0_4_ * param_4 - dVar86;
      dVar78 = (double)auVar27._12_4_ * param_4 - dVar86;
      dVar89 = (double)auVar125._8_4_ * param_4 - dVar86;
      dVar95 = (double)pfVar12[1] * param_4 - dVar86;
      dVar96 = (double)auVar27._4_4_ * param_4 - dVar103;
      dVar98 = (double)auVar125._0_4_ * param_4 - dVar103;
      dVar99 = (double)auVar125._12_4_ * param_4 - dVar103;
      dVar101 = (double)pfVar12[2] * param_4 - dVar103;
      dVar124 = (double)auVar29._0_4_ * param_4 - dVar52;
      dVar126 = (double)auVar29._4_4_ * param_4 - dVar52;
      dVar105 = (double)*pfVar12 * param_4 - dVar52;
      dVar109 = (double)pfVar12[3] * param_4 - dVar52;
      dVar119 = dVar111 * dVar96 - dVar115 * dVar74;
      dVar123 = dVar111 * dVar98 - dVar115 * dVar78;
      dVar66 = dVar111 * dVar99 - dVar115 * dVar89;
      dVar73 = dVar111 * dVar101 - dVar115 * dVar95;
      dVar112 = dVar115 * dVar124 - dVar118 * dVar96;
      dVar116 = dVar115 * dVar126 - dVar118 * dVar98;
      dVar55 = dVar115 * dVar105 - dVar118 * dVar99;
      dVar63 = dVar115 * dVar109 - dVar118 * dVar101;
      dVar23 = dVar118 * dVar89 - dVar111 * dVar105;
      dVar45 = dVar118 * dVar95 - dVar111 * dVar109;
      dVar94 = dVar118 * dVar74 - dVar111 * dVar124;
      dVar5 = dVar118 * dVar78 - dVar111 * dVar126;
      dVar112 = dVar112 + dVar112;
      dVar116 = dVar116 + dVar116;
      dVar55 = dVar55 + dVar55;
      dVar63 = dVar63 + dVar63;
      dVar94 = dVar94 + dVar94;
      dVar5 = dVar5 + dVar5;
      dVar23 = dVar23 + dVar23;
      dVar45 = dVar45 + dVar45;
      dVar119 = dVar119 + dVar119;
      dVar123 = dVar123 + dVar123;
      dVar66 = dVar66 + dVar66;
      dVar73 = dVar73 + dVar73;
      dVar56 = (double)(float)(auVar121._0_4_ ^ __xmm_80000000800000008000000080000000);
      dVar64 = (double)(float)(auVar121._12_4_ ^ _UNK_150651574);
      dVar20 = (double)(float)(auVar90._8_4_ ^ _UNK_150651578);
      dVar39 = (double)(float)(puVar1[1] ^ _UNK_15065157c);
      dVar4 = (double)(float)(auVar90._12_4_ ^ _UNK_150651578);
      dVar6 = (double)(float)(puVar1[2] ^ _UNK_15065157c);
      dVar80 = (double)(float)(auVar121._4_4_ ^ __xmm_80000000800000008000000080000000);
      dVar84 = (double)(float)(auVar90._0_4_ ^ _UNK_150651574);
      local_238 = auVar92._0_4_;
      uStack_234 = auVar92._4_4_;
      dVar21 = (double)(float)(*puVar1 ^ _UNK_150651578);
      dVar40 = (double)(float)(puVar1[3] ^ _UNK_15065157c);
      dVar42 = (double)(float)(local_238 ^ __xmm_80000000800000008000000080000000);
      dVar46 = (double)(float)(uStack_234 ^ _UNK_150651574);
      dVar75 = dVar111 * dVar80 - dVar115 * dVar56;
      dVar79 = dVar111 * dVar84 - dVar115 * dVar64;
      dVar100 = dVar111 * dVar4 - dVar115 * dVar20;
      dVar102 = dVar111 * dVar6 - dVar115 * dVar39;
      dVar81 = dVar115 * dVar42 - dVar118 * dVar80;
      dVar85 = dVar115 * dVar46 - dVar118 * dVar84;
      dVar22 = dVar115 * dVar21 - dVar118 * dVar4;
      dVar41 = dVar115 * dVar40 - dVar118 * dVar6;
      dVar44 = dVar118 * dVar20 - dVar111 * dVar21;
      dVar51 = dVar118 * dVar39 - dVar111 * dVar40;
      dVar113 = dVar118 * dVar56 - dVar111 * dVar42;
      dVar117 = dVar118 * dVar64 - dVar111 * dVar46;
      dVar81 = dVar81 + dVar81;
      dVar85 = dVar85 + dVar85;
      dVar22 = dVar22 + dVar22;
      dVar41 = dVar41 + dVar41;
      dVar44 = dVar44 + dVar44;
      dVar51 = dVar51 + dVar51;
      dVar113 = dVar113 + dVar113;
      dVar117 = dVar117 + dVar117;
      dVar75 = dVar75 + dVar75;
      dVar79 = dVar79 + dVar79;
      dVar100 = dVar100 + dVar100;
      dVar102 = dVar102 + dVar102;
      auVar58._0_4_ =
           (float)(((dVar115 * dVar119 - dVar94 * dVar118) + dVar122 * dVar112 + dVar74) * dVar62);
      auVar58._4_4_ =
           (float)(((dVar115 * dVar123 - dVar5 * dVar118) + dVar122 * dVar116 + dVar78) * dVar62);
      auVar76._0_4_ =
           (float)(((dVar111 * dVar94 - dVar112 * dVar115) + dVar122 * dVar119 + dVar124) * dVar54);
      auVar76._4_4_ =
           (float)(((dVar111 * dVar5 - dVar116 * dVar115) + dVar122 * dVar123 + dVar126) * dVar54);
      auVar76._8_8_ = 0;
      auVar58._8_4_ = 0;
      auVar58._12_4_ =
           (float)(((dVar118 * dVar112 - dVar119 * dVar111) + dVar122 * dVar94 + dVar96) * dVar88);
      auVar67._4_4_ =
           (float)(((dVar118 * dVar55 - dVar66 * dVar111) + dVar122 * dVar23 + dVar99) * dVar88);
      auVar67._0_4_ =
           (float)(((dVar118 * dVar116 - dVar123 * dVar111) + dVar122 * dVar5 + dVar98) * dVar88);
      auVar67._8_4_ = auVar76._0_4_;
      auVar67._12_4_ = auVar76._4_4_;
      auVar27 = insertps(auVar58,auVar76,0x20);
      puVar3 = (undefined4 *)(param_1 + -0x20 + lVar14);
      *puVar3 = auVar27._0_4_;
      puVar3[1] = auVar27._12_4_;
      puVar3[2] = auVar27._8_4_;
      puVar3[3] = auVar27._4_4_;
      auVar59._0_4_ =
           (float)(((dVar115 * dVar66 - dVar23 * dVar118) + dVar122 * dVar55 + dVar89) * dVar62);
      auVar59._4_4_ =
           (float)(((dVar115 * dVar73 - dVar45 * dVar118) + dVar122 * dVar63 + dVar95) * dVar62);
      auVar59._8_8_ = 0;
      auVar27 = insertps(auVar67,auVar59,0x20);
      puVar3 = (undefined4 *)(param_1 + -0x10 + lVar14);
      *puVar3 = auVar27._0_4_;
      puVar3[1] = auVar27._12_4_;
      puVar3[2] = auVar27._8_4_;
      puVar3[3] = auVar27._4_4_;
      pfVar12 = (float *)(param_1 + lVar14);
      *pfVar12 = (float)(((dVar111 * dVar23 - dVar55 * dVar115) + dVar122 * dVar66 + dVar105) *
                        dVar54);
      pfVar12[1] = auVar59._4_4_;
      pfVar12[2] = (float)(((dVar118 * dVar63 - dVar73 * dVar111) + dVar122 * dVar45 + dVar101) *
                          dVar88);
      pfVar12[3] = (float)(((dVar111 * dVar45 - dVar63 * dVar115) + dVar122 * dVar73 + dVar109) *
                          dVar54);
      auVar30._0_4_ =
           (float)(((dVar115 * dVar75 - dVar113 * dVar118) + dVar122 * dVar81 + dVar56) * dVar62);
      auVar30._4_4_ =
           (float)(((dVar115 * dVar79 - dVar117 * dVar118) + dVar122 * dVar85 + dVar64) * dVar62);
      auVar30._8_4_ = 0;
      auVar30._12_4_ =
           (float)(((dVar118 * dVar81 - dVar75 * dVar111) + dVar122 * dVar113 + dVar80) * dVar88);
      auVar68._0_4_ =
           (float)(((dVar111 * dVar113 - dVar81 * dVar115) + dVar122 * dVar75 + dVar42) * dVar54);
      auVar68._4_4_ =
           (float)(((dVar111 * dVar117 - dVar85 * dVar115) + dVar122 * dVar79 + dVar46) * dVar54);
      auVar68._8_8_ = 0;
      auVar47._4_4_ =
           (float)(((dVar118 * dVar22 - dVar100 * dVar111) + dVar122 * dVar44 + dVar4) * dVar88);
      auVar47._0_4_ =
           (float)(((dVar118 * dVar85 - dVar79 * dVar111) + dVar122 * dVar117 + dVar84) * dVar88);
      auVar47._8_4_ = auVar68._0_4_;
      auVar47._12_4_ = auVar68._4_4_;
      auVar27 = insertps(auVar30,auVar68,0x20);
      puVar3 = (undefined4 *)(param_2 + -0x20 + lVar14);
      *puVar3 = auVar27._0_4_;
      puVar3[1] = auVar27._12_4_;
      puVar3[2] = auVar27._8_4_;
      puVar3[3] = auVar27._4_4_;
      auVar31._0_4_ =
           (float)(((dVar115 * dVar100 - dVar44 * dVar118) + dVar122 * dVar22 + dVar20) * dVar62);
      auVar31._4_4_ =
           (float)(((dVar115 * dVar102 - dVar51 * dVar118) + dVar122 * dVar41 + dVar39) * dVar62);
      auVar31._8_8_ = 0;
      auVar27 = insertps(auVar47,auVar31,0x20);
      puVar3 = (undefined4 *)(param_2 + -0x10 + lVar14);
      *puVar3 = auVar27._0_4_;
      puVar3[1] = auVar27._12_4_;
      puVar3[2] = auVar27._8_4_;
      puVar3[3] = auVar27._4_4_;
      pfVar12 = (float *)(param_2 + lVar14);
      *pfVar12 = (float)(((dVar111 * dVar44 - dVar22 * dVar115) + dVar122 * dVar100 + dVar21) *
                        dVar54);
      pfVar12[1] = auVar31._4_4_;
      pfVar12[2] = (float)(((dVar118 * dVar41 - dVar102 * dVar111) + dVar122 * dVar51 + dVar6) *
                          dVar88);
      pfVar12[3] = (float)(((dVar111 * dVar51 - dVar41 * dVar115) + dVar122 * dVar102 + dVar40) *
                          dVar54);
      lVar14 = lVar14 + 0x30;
      uVar11 = uVar11 + 4;
    } while ((int)uVar11 < (int)(uVar9 & 0xfffffffc));
    if ((int)param_5 <= (int)uVar11) {
      return;
    }
  }
  auVar60._0_4_ =
       -(uint)((int)(uVar11 | (uint)__xmm_00000003000000020000000100000000) < (int)param_5);
  auVar60._4_4_ =
       -(uint)((int)(uVar11 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_5);
  auVar60._8_4_ = -(uint)((int)(uVar11 | _UNK_150631e08) < (int)param_5);
  auVar60._12_4_ = -(uint)((int)(uVar11 | _UNK_150631e0c) < (int)param_5);
  uVar7 = (ulonglong)uVar11;
  pauVar2 = (undefined1 (*) [16])(param_1 + uVar7 * 0xc);
  iVar10 = movmskps(uVar11,auVar60);
  bVar8 = (char)((char)iVar10 << 4) >> 4;
  if (iVar10 == 0xf) {
    auVar27 = *pauVar2;
    auVar125 = pauVar2[1];
    auVar33._0_4_ = auVar27._0_4_;
    auVar121 = insertps(auVar125,auVar27,0x8c);
    auVar33._4_4_ = auVar27._12_4_;
    auVar33._8_4_ = auVar125._8_4_;
    auVar33._12_4_ = *(undefined4 *)(pauVar2[2] + 4);
    auVar48._4_4_ = auVar125._0_4_;
    auVar48._0_4_ = auVar27._4_4_;
    auVar48._8_4_ = auVar125._12_4_;
    auVar48._12_4_ = *(undefined4 *)(pauVar2[2] + 8);
    auVar120._0_8_ = auVar121._0_8_;
    auVar120._8_4_ = *(undefined4 *)pauVar2[2];
    auVar120._12_4_ = *(undefined4 *)(pauVar2[2] + 0xc);
    pfVar12 = (float *)(param_2 + uVar7 * 0xc);
    auVar27 = *(undefined1 (*) [16])(param_2 + uVar7 * 0xc);
    auVar125 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar7 * 0xc);
    puVar3 = (undefined4 *)(param_2 + 0x20 + uVar7 * 0xc);
    auVar107._0_4_ = auVar27._0_4_;
    auVar121 = insertps(auVar125,auVar27,0x8c);
    auVar107._4_4_ = auVar27._12_4_;
    auVar107._8_4_ = auVar125._8_4_;
    auVar107._12_4_ = puVar3[1];
    auVar114._4_4_ = auVar125._0_4_;
    auVar114._0_4_ = auVar27._4_4_;
    auVar114._8_4_ = auVar125._12_4_;
    auVar114._12_4_ = puVar3[2];
    auVar110._0_8_ = auVar121._0_8_;
    auVar110._8_4_ = *puVar3;
    auVar110._12_4_ = puVar3[3];
  }
  else {
    auVar32._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar60._0_4_;
    auVar32._4_4_ = _UNK_150b50da4 & auVar60._4_4_;
    auVar32._8_4_ = _UNK_150b50da8 & auVar60._8_4_;
    auVar32._12_4_ = _UNK_150b50dac & auVar60._12_4_;
    lVar15 = extractps(auVar32,1);
    lVar16 = extractps(auVar32,2);
    lVar14 = extractps(auVar32,3);
    auVar27 = insertps(ZEXT416(*(uint *)*pauVar2),*(undefined4 *)(*pauVar2 + lVar15),0x10);
    auVar27 = insertps(auVar27,*(undefined4 *)(*pauVar2 + lVar16),0x20);
    auVar33 = insertps(auVar27,*(undefined4 *)(*pauVar2 + lVar14),0x30);
    auVar27 = ___xmm_000000280000001c0000001000000004 & auVar60;
    auVar125 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar27._0_4_)),
                        *(undefined4 *)(*pauVar2 + auVar27._4_4_),0x10);
    auVar125 = insertps(auVar125,*(undefined4 *)(*pauVar2 + auVar27._8_4_),0x20);
    auVar48 = insertps(auVar125,*(undefined4 *)(*pauVar2 + auVar27._12_4_),0x30);
    auVar60 = auVar60 & ___xmm_0000002c000000200000001400000008;
    auVar125 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar60._0_4_)),
                        *(undefined4 *)(*pauVar2 + auVar60._4_4_),0x10);
    auVar125 = insertps(auVar125,*(undefined4 *)(*pauVar2 + auVar60._8_4_),0x20);
    auVar120 = insertps(auVar125,*(undefined4 *)(*pauVar2 + auVar60._12_4_),0x30);
    pfVar12 = (float *)(param_2 + uVar7 * 0xc);
    auVar125 = insertps(ZEXT416(*(uint *)(param_2 + uVar7 * 0xc)),
                        *(undefined4 *)(lVar15 + (longlong)pfVar12),0x10);
    auVar125 = insertps(auVar125,*(undefined4 *)(lVar16 + (longlong)pfVar12),0x20);
    auVar107 = insertps(auVar125,*(undefined4 *)(lVar14 + (longlong)pfVar12),0x30);
    auVar125 = insertps(ZEXT416(*(uint *)((ulonglong)auVar27._0_4_ + (longlong)pfVar12)),
                        *(undefined4 *)((ulonglong)auVar27._4_4_ + (longlong)pfVar12),0x10);
    auVar125 = insertps(auVar125,*(undefined4 *)((ulonglong)auVar27._8_4_ + (longlong)pfVar12),0x20)
    ;
    auVar114 = insertps(auVar125,*(undefined4 *)((ulonglong)auVar27._12_4_ + (longlong)pfVar12),0x30
                       );
    auVar27 = insertps(ZEXT416(*(uint *)((ulonglong)auVar60._0_4_ + (longlong)pfVar12)),
                       *(undefined4 *)((ulonglong)auVar60._4_4_ + (longlong)pfVar12),0x10);
    auVar27 = insertps(auVar27,*(undefined4 *)((ulonglong)auVar60._8_4_ + (longlong)pfVar12),0x20);
    auVar110 = insertps(auVar27,*(undefined4 *)((ulonglong)auVar60._12_4_ + (longlong)pfVar12),0x30)
    ;
  }
  dVar78 = (double)auVar33._8_4_ * param_4 - dVar86;
  dVar80 = (double)auVar33._12_4_ * param_4 - dVar86;
  dVar73 = (double)auVar33._0_4_ * param_4 - dVar86;
  dVar86 = (double)auVar33._4_4_ * param_4 - dVar86;
  dVar84 = (double)auVar48._8_4_ * param_4 - dVar103;
  dVar85 = (double)auVar48._12_4_ * param_4 - dVar103;
  dVar89 = (double)auVar48._0_4_ * param_4 - dVar103;
  dVar103 = (double)auVar48._4_4_ * param_4 - dVar103;
  dVar51 = (double)auVar120._8_4_ * param_4 - dVar52;
  dVar63 = (double)auVar120._12_4_ * param_4 - dVar52;
  dVar45 = (double)auVar120._0_4_ * param_4 - dVar52;
  dVar52 = (double)auVar120._4_4_ * param_4 - dVar52;
  dVar55 = dVar111 * dVar89 - dVar115 * dVar73;
  dVar64 = dVar111 * dVar103 - dVar115 * dVar86;
  dVar102 = dVar111 * dVar84 - dVar115 * dVar78;
  dVar109 = dVar111 * dVar85 - dVar115 * dVar80;
  dVar94 = dVar115 * dVar45 - dVar118 * dVar89;
  dVar5 = dVar115 * dVar52 - dVar118 * dVar103;
  dVar113 = dVar115 * dVar51 - dVar118 * dVar84;
  dVar117 = dVar115 * dVar63 - dVar118 * dVar85;
  dVar21 = dVar118 * dVar73 - dVar111 * dVar45;
  dVar39 = dVar118 * dVar86 - dVar111 * dVar52;
  dVar98 = dVar118 * dVar78 - dVar111 * dVar51;
  dVar100 = dVar118 * dVar80 - dVar111 * dVar63;
  dVar94 = dVar94 + dVar94;
  dVar5 = dVar5 + dVar5;
  dVar113 = dVar113 + dVar113;
  dVar117 = dVar117 + dVar117;
  dVar21 = dVar21 + dVar21;
  dVar39 = dVar39 + dVar39;
  dVar98 = dVar98 + dVar98;
  dVar100 = dVar100 + dVar100;
  dVar55 = dVar55 + dVar55;
  dVar64 = dVar64 + dVar64;
  dVar102 = dVar102 + dVar102;
  dVar109 = dVar109 + dVar109;
  dVar79 = (double)(float)(auVar107._8_4_ ^ _UNK_150651578);
  dVar81 = (double)(float)(auVar107._12_4_ ^ _UNK_15065157c);
  dVar46 = (double)(float)(auVar114._8_4_ ^ _UNK_150651578);
  dVar20 = (double)(float)(auVar114._12_4_ ^ _UNK_15065157c);
  dVar23 = dVar111 * dVar46 - dVar115 * dVar79;
  dVar42 = dVar111 * dVar20 - dVar115 * dVar81;
  dVar95 = (double)(float)(auVar107._0_4_ ^ __xmm_80000000800000008000000080000000);
  dVar96 = (double)(float)(auVar107._4_4_ ^ _UNK_150651574);
  dVar99 = (double)(float)(auVar114._0_4_ ^ __xmm_80000000800000008000000080000000);
  dVar101 = (double)(float)(auVar114._4_4_ ^ _UNK_150651574);
  dVar56 = dVar111 * dVar99 - dVar115 * dVar95;
  dVar66 = dVar111 * dVar101 - dVar115 * dVar96;
  dVar4 = (double)(float)(auVar110._8_4_ ^ _UNK_150651578);
  dVar6 = (double)(float)(auVar110._12_4_ ^ _UNK_15065157c);
  dVar105 = dVar115 * dVar4 - dVar118 * dVar46;
  dVar112 = dVar115 * dVar6 - dVar118 * dVar20;
  dVar74 = (double)(float)(auVar110._0_4_ ^ __xmm_80000000800000008000000080000000);
  dVar75 = (double)(float)(auVar110._4_4_ ^ _UNK_150651574);
  dVar116 = dVar115 * dVar74 - dVar118 * dVar99;
  dVar119 = dVar115 * dVar75 - dVar118 * dVar101;
  dVar22 = dVar118 * dVar79 - dVar111 * dVar4;
  dVar40 = dVar118 * dVar81 - dVar111 * dVar6;
  dVar41 = dVar118 * dVar95 - dVar111 * dVar74;
  dVar44 = dVar118 * dVar96 - dVar111 * dVar75;
  dVar105 = dVar105 + dVar105;
  dVar112 = dVar112 + dVar112;
  dVar116 = dVar116 + dVar116;
  dVar119 = dVar119 + dVar119;
  dVar22 = dVar22 + dVar22;
  dVar40 = dVar40 + dVar40;
  dVar41 = dVar41 + dVar41;
  dVar44 = dVar44 + dVar44;
  dVar23 = dVar23 + dVar23;
  dVar42 = dVar42 + dVar42;
  dVar56 = dVar56 + dVar56;
  dVar66 = dVar66 + dVar66;
  fVar35 = (float)(((dVar115 * dVar109 - dVar100 * dVar118) + dVar122 * dVar117 + dVar80) * dVar62);
  uVar24 = CONCAT44(fVar35,(float)(((dVar115 * dVar102 - dVar98 * dVar118) +
                                   dVar122 * dVar113 + dVar78) * dVar62));
  fVar104 = (float)(((dVar115 * dVar55 - dVar21 * dVar118) + dVar122 * dVar94 + dVar73) * dVar62);
  auVar108._0_8_ =
       CONCAT44((float)(((dVar115 * dVar64 - dVar39 * dVar118) + dVar122 * dVar5 + dVar86) * dVar62)
                ,fVar104);
  auVar108._8_8_ = uVar24;
  fVar87 = (float)(((dVar118 * dVar113 - dVar102 * dVar111) + dVar122 * dVar98 + dVar84) * dVar88);
  fVar36 = (float)(((dVar118 * dVar117 - dVar109 * dVar111) + dVar122 * dVar100 + dVar85) * dVar88);
  auVar77._12_4_ = fVar36;
  auVar77._8_4_ = fVar87;
  auVar77._0_4_ =
       (float)(((dVar118 * dVar94 - dVar55 * dVar111) + dVar122 * dVar21 + dVar89) * dVar88);
  auVar77._4_4_ =
       (float)(((dVar118 * dVar5 - dVar64 * dVar111) + dVar122 * dVar39 + dVar103) * dVar88);
  fVar43 = (float)(((dVar111 * dVar98 - dVar113 * dVar115) + dVar122 * dVar102 + dVar51) * dVar54);
  fVar50 = (float)(((dVar111 * dVar100 - dVar117 * dVar115) + dVar122 * dVar109 + dVar63) * dVar54);
  auVar93._12_4_ = fVar50;
  auVar93._8_4_ = fVar43;
  auVar93._0_4_ =
       (float)(((dVar111 * dVar21 - dVar94 * dVar115) + dVar122 * dVar55 + dVar45) * dVar54);
  auVar93._4_4_ =
       (float)(((dVar111 * dVar39 - dVar5 * dVar115) + dVar122 * dVar64 + dVar52) * dVar54);
  fVar53 = (float)(((dVar115 * dVar56 - dVar41 * dVar118) + dVar122 * dVar116 + dVar95) * dVar62);
  auVar61._0_8_ =
       CONCAT44((float)(((dVar115 * dVar66 - dVar44 * dVar118) + dVar122 * dVar119 + dVar96) *
                       dVar62),fVar53);
  fVar37 = (float)(((dVar115 * dVar42 - dVar40 * dVar118) + dVar122 * dVar112 + dVar81) * dVar62);
  uVar25 = CONCAT44(fVar37,(float)(((dVar115 * dVar23 - dVar22 * dVar118) +
                                   dVar122 * dVar105 + dVar79) * dVar62));
  auVar49._0_4_ =
       (float)(((dVar118 * dVar116 - dVar56 * dVar111) + dVar122 * dVar41 + dVar99) * dVar88);
  auVar49._4_4_ =
       (float)(((dVar118 * dVar119 - dVar66 * dVar111) + dVar122 * dVar44 + dVar101) * dVar88);
  auVar61._8_8_ = uVar25;
  fVar19 = (float)(((dVar118 * dVar105 - dVar23 * dVar111) + dVar122 * dVar22 + dVar46) * dVar88);
  fVar38 = (float)(((dVar118 * dVar112 - dVar42 * dVar111) + dVar122 * dVar40 + dVar20) * dVar88);
  auVar49._12_4_ = fVar38;
  auVar49._8_4_ = fVar19;
  auVar34._0_4_ =
       (float)(((dVar111 * dVar41 - dVar116 * dVar115) + dVar122 * dVar56 + dVar74) * dVar54);
  auVar34._4_4_ =
       (float)(((dVar111 * dVar44 - dVar119 * dVar115) + dVar122 * dVar66 + dVar75) * dVar54);
  fVar65 = (float)(((dVar111 * dVar22 - dVar105 * dVar115) + dVar122 * dVar23 + dVar4) * dVar54);
  fVar72 = (float)(((dVar111 * dVar40 - dVar112 * dVar115) + dVar122 * dVar42 + dVar6) * dVar54);
  auVar34._12_4_ = fVar72;
  auVar34._8_4_ = fVar65;
  if ((~bVar8 & 0xf) == 0) {
    auVar69._8_8_ = uVar24;
    auVar69._0_8_ = auVar108._0_8_;
    auVar27 = insertps(auVar69,auVar77,0x30);
    auVar83._4_4_ = fVar87;
    auVar83._0_4_ = auVar77._4_4_;
    auVar83._8_4_ = auVar93._0_4_;
    auVar83._12_4_ = auVar93._4_4_;
    auVar27 = insertps(auVar27,auVar93,0x20);
    *(int *)*pauVar2 = auVar27._0_4_;
    *(int *)(*pauVar2 + 4) = auVar27._12_4_;
    *(int *)(*pauVar2 + 8) = auVar27._8_4_;
    *(int *)(*pauVar2 + 0xc) = auVar27._4_4_;
    auVar27 = blendps(auVar83,auVar108,4);
    *(int *)pauVar2[1] = auVar27._0_4_;
    *(int *)(pauVar2[1] + 4) = auVar27._12_4_;
    *(int *)(pauVar2[1] + 8) = auVar27._8_4_;
    *(int *)(pauVar2[1] + 0xc) = auVar27._4_4_;
    *(float *)pauVar2[2] = fVar43;
    *(float *)(pauVar2[2] + 4) = fVar35;
    *(float *)(pauVar2[2] + 8) = fVar36;
    *(float *)(pauVar2[2] + 0xc) = fVar50;
    auVar70._8_8_ = uVar25;
    auVar70._0_8_ = auVar61._0_8_;
    auVar27 = insertps(auVar70,auVar49,0x30);
    auVar27 = insertps(auVar27,auVar34,0x20);
    *pfVar12 = auVar27._0_4_;
    pfVar12[1] = auVar27._12_4_;
    pfVar12[2] = auVar27._8_4_;
    pfVar12[3] = auVar27._4_4_;
    auVar71._4_4_ = fVar19;
    auVar71._0_4_ = auVar49._4_4_;
    auVar71._8_4_ = auVar34._0_4_;
    auVar71._12_4_ = auVar34._4_4_;
    auVar27 = blendps(auVar71,auVar61,4);
    puVar3 = (undefined4 *)(param_2 + 0x10 + uVar7 * 0xc);
    *puVar3 = auVar27._0_4_;
    puVar3[1] = auVar27._12_4_;
    puVar3[2] = auVar27._8_4_;
    puVar3[3] = auVar27._4_4_;
    pfVar12 = (float *)(param_2 + 0x20 + uVar7 * 0xc);
    *pfVar12 = fVar65;
    pfVar12[1] = fVar37;
    pfVar12[2] = fVar38;
    pfVar12[3] = fVar72;
  }
  else {
    if ((bVar8 & 1) != 0) {
      *(float *)*pauVar2 = fVar104;
    }
    if ((bVar8 & 2) != 0) {
      uVar24 = extractps(auVar108,1);
      *(undefined8 *)(*pauVar2 + 0xc) = uVar24;
    }
    if ((bVar8 & 4) != 0) {
      uVar24 = extractps(auVar108,2);
      *(undefined8 *)(pauVar2[1] + 8) = uVar24;
    }
    if ((char)bVar8 < '\0') {
      uVar24 = extractps(auVar108,3);
      *(undefined8 *)(pauVar2[2] + 4) = uVar24;
    }
    if ((bVar8 & 1) != 0) {
      *(float *)(*pauVar2 + 4) = auVar77._0_4_;
    }
    if ((bVar8 & 2) != 0) {
      uVar24 = extractps(auVar77,1);
      *(undefined8 *)pauVar2[1] = uVar24;
    }
    if ((bVar8 & 4) != 0) {
      uVar24 = extractps(auVar77,2);
      *(undefined8 *)(pauVar2[1] + 0xc) = uVar24;
    }
    if ((char)bVar8 < '\0') {
      uVar24 = extractps(auVar77,3);
      *(undefined8 *)(pauVar2[2] + 8) = uVar24;
    }
    if ((bVar8 & 1) != 0) {
      *(float *)(*pauVar2 + 8) = auVar93._0_4_;
    }
    if ((bVar8 & 2) != 0) {
      uVar24 = extractps(auVar93,1);
      *(undefined8 *)(pauVar2[1] + 4) = uVar24;
    }
    if ((bVar8 & 4) != 0) {
      uVar24 = extractps(auVar93,2);
      *(undefined8 *)pauVar2[2] = uVar24;
    }
    if ((char)bVar8 < '\0') {
      uVar24 = extractps(auVar93,3);
      *(undefined8 *)(pauVar2[2] + 0xc) = uVar24;
    }
    if ((bVar8 & 1) != 0) {
      *pfVar12 = fVar53;
    }
    if ((bVar8 & 2) != 0) {
      uVar24 = extractps(auVar61,1);
      *(undefined8 *)(param_2 + 0xc + uVar7 * 0xc) = uVar24;
    }
    if ((bVar8 & 4) != 0) {
      uVar24 = extractps(auVar61,2);
      *(undefined8 *)(param_2 + 0x18 + uVar7 * 0xc) = uVar24;
    }
    if ((char)bVar8 < '\0') {
      uVar24 = extractps(auVar61,3);
      *(undefined8 *)(param_2 + 0x24 + uVar7 * 0xc) = uVar24;
    }
    if ((bVar8 & 1) != 0) {
      *(float *)(param_2 + 4 + uVar7 * 0xc) = auVar49._0_4_;
    }
    if ((bVar8 & 2) != 0) {
      uVar24 = extractps(auVar49,1);
      *(undefined8 *)(param_2 + 0x10 + uVar7 * 0xc) = uVar24;
    }
    if ((bVar8 & 4) != 0) {
      uVar24 = extractps(auVar49,2);
      *(undefined8 *)(param_2 + 0x1c + uVar7 * 0xc) = uVar24;
    }
    if ((char)bVar8 < '\0') {
      uVar24 = extractps(auVar49,3);
      *(undefined8 *)(param_2 + 0x28 + uVar7 * 0xc) = uVar24;
    }
    if ((bVar8 & 1) != 0) {
      *(float *)(param_2 + 8 + uVar7 * 0xc) = auVar34._0_4_;
    }
    if ((bVar8 & 2) != 0) {
      uVar24 = extractps(auVar34,1);
      *(undefined8 *)(param_2 + 0x14 + uVar7 * 0xc) = uVar24;
    }
    if ((bVar8 & 4) != 0) {
      uVar24 = extractps(auVar34,2);
      *(undefined8 *)(param_2 + 0x20 + uVar7 * 0xc) = uVar24;
    }
    if ((char)bVar8 < '\0') {
      uVar24 = extractps(auVar34,3);
      *(undefined8 *)(param_2 + 0x2c + uVar7 * 0xc) = uVar24;
    }
  }
  return;
}

// TransformClothSimulDataAndCheckFinite_sse4 @ 140d395b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
TransformClothSimulDataAndCheckFinite_sse4
          (longlong param_1,longlong param_2,ulonglong *param_3,double param_4,uint param_5)

{
  uint *puVar1;
  undefined1 (*pauVar2) [16];
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
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
  double dVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  ulonglong uVar26;
  undefined1 auVar27 [16];
  uint uVar28;
  ulonglong uVar29;
  byte bVar30;
  undefined4 in_R9D;
  int iVar31;
  uint uVar32;
  float *pfVar33;
  undefined4 in_R10D;
  undefined4 uVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  int iVar38;
  int iVar39;
  float fVar40;
  ulonglong uVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar67;
  float fVar68;
  undefined1 auVar48 [16];
  float fVar41;
  float fVar42;
  float fVar69;
  float fVar70;
  float fVar71;
  undefined1 auVar49 [16];
  ulonglong uVar72;
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
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  double dVar73;
  double dVar83;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  double dVar74;
  undefined1 auVar78 [16];
  double dVar84;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  double dVar85;
  double dVar86;
  double dVar97;
  double dVar98;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  ulonglong uVar99;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  ulonglong uVar87;
  ulonglong uVar100;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  double dVar101;
  double dVar106;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  double dVar107;
  undefined1 auVar108 [16];
  double dVar111;
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  float fVar112;
  double dVar113;
  double dVar114;
  double dVar115;
  double dVar116;
  undefined1 auVar117 [16];
  double dVar120;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  double dVar121;
  double dVar122;
  double dVar123;
  float fVar124;
  float fVar125;
  double dVar126;
  double dVar127;
  undefined1 auVar128 [16];
  double dVar130;
  double dVar131;
  undefined1 auVar129 [16];
  float fVar132;
  float fVar133;
  double dVar134;
  float fVar142;
  double dVar144;
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  double dVar135;
  double dVar136;
  float fVar143;
  double dVar145;
  double dVar146;
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  float fVar147;
  double dVar148;
  undefined1 auVar149 [16];
  float fVar153;
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  float fVar154;
  double dVar155;
  undefined1 auVar152 [16];
  double dVar156;
  double dVar157;
  double dVar158;
  double dVar160;
  undefined1 auVar159 [16];
  double dVar161;
  double dVar162;
  double dVar163;
  double dVar164;
  double dVar165;
  double dVar168;
  double dVar169;
  double dVar170;
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  double dVar171;
  double dVar172;
  double dVar174;
  double dVar175;
  undefined1 auVar173 [16];
  double dVar176;
  double dVar177;
  undefined1 unaff_XMM13 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  double dVar180;
  double dVar181;
  float fVar182;
  float fVar183;
  float fVar184;
  float fVar185;
  float fVar186;
  float fVar187;
  undefined4 local_268 [8];
  undefined1 local_248 [8];
  undefined8 uStack_240;
  undefined1 local_218 [16];
  undefined1 auVar66 [15];
  undefined1 auVar139 [16];
  
  dVar171 = (double)param_3[2] * ___xmm_3ff0000000000000bff0000000000000;
  dVar174 = (double)param_3[3] * _UNK_15076b868;
  dVar163 = (double)(*param_3 ^ __xmm_80000000000000008000000000000000);
  dVar168 = (double)(param_3[1] ^ _UNK_15066df78);
  dVar170 = (double)param_3[10];
  auVar45._8_8_ = 0;
  auVar45._0_8_ = dVar170;
  dVar155 = (double)param_3[8];
  dVar180 = (double)param_3[9];
  dVar73 = (double)((ulonglong)dVar155 & __xmm_7fffffffffffffff7fffffffffffffff);
  dVar83 = (double)((ulonglong)dVar180 & _UNK_15061cc88);
  iVar38 = -(uint)((double)(__xmm_7fffffffffffffff7fffffffffffffff & (ulonglong)dVar170) <=
                  ___xmm_3e45798ee2308c3a3e45798ee2308c3a);
  iVar39 = -(uint)(0.0 <= _UNK_150aa88b8);
  auVar78._4_4_ = -(uint)(dVar83 <= _UNK_150aa88b8);
  auVar78._0_4_ = -(uint)(dVar73 <= ___xmm_3e45798ee2308c3a3e45798ee2308c3a);
  auVar78._8_4_ = iVar38;
  auVar78._12_4_ = iVar39;
  uVar28 = -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <
                  (double)(__xmm_7fffffffffffffff7fffffffffffffff & (ulonglong)dVar170));
  auVar178._4_4_ = -(uint)(_UNK_150aa88b8 < dVar83);
  auVar178._0_4_ = -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a < dVar73);
  auVar178._8_4_ = uVar28;
  auVar178._12_4_ = -(uint)(_UNK_150aa88b8 < 0.0);
  auVar117._8_8_ = (double)-(ulonglong)(_UNK_150b51668 <= 0.0);
  auVar117._0_8_ = (double)-(ulonglong)(___xmm_3914c4e977ba1f5c3914c4e977ba1f5c <= dVar170);
  auVar128._0_4_ =
       -(uint)((___xmm_3914c4e977ba1f5c3914c4e977ba1f5c <= dVar155 &&
               dVar155 <= ___xmm_46c8a6e32246c99c46c8a6e32246c99c) &&
              ___xmm_3e45798ee2308c3a3e45798ee2308c3a < dVar73);
  auVar128._4_4_ =
       -(uint)((_UNK_150b51668 <= dVar180 && dVar180 <= _UNK_150b51658) && _UNK_150aa88b8 < dVar83);
  auVar128._8_4_ =
       (uint)-(ulonglong)(___xmm_3914c4e977ba1f5c3914c4e977ba1f5c <= dVar170) &
       -(uint)(dVar170 <= ___xmm_46c8a6e32246c99c46c8a6e32246c99c) & uVar28;
  auVar128._12_4_ =
       (uint)-(ulonglong)(_UNK_150b51668 <= 0.0) & -(uint)(0.0 <= _UNK_150b51658) &
       -(uint)(_UNK_150aa88b8 < 0.0);
  iVar31 = movmskps(in_R9D,auVar128);
  if (iVar31 == 0) {
    auVar128 = ZEXT816(0);
  }
  else {
    auVar108._0_4_ = (float)dVar155;
    auVar108._4_4_ = (float)dVar180;
    fVar112 = (float)dVar170;
    auVar108._8_4_ = fVar112;
    auVar108._12_4_ = 0;
    auVar117 = rcpps(ZEXT416((uint)fVar112),auVar108);
    dVar73 = (double)((___xmm_40000000400000004000000040000000 - auVar108._0_4_ * auVar117._0_4_) *
                     auVar117._0_4_);
    dVar83 = (double)((_UNK_15076ba34 - auVar108._4_4_ * auVar117._4_4_) * auVar117._4_4_);
    dVar113 = (double)((_UNK_15076ba38 - fVar112 * auVar117._8_4_) * auVar117._8_4_);
    dVar120 = (double)((_UNK_15076ba3c - auVar117._12_4_ * 0.0) * auVar117._12_4_);
    dVar113 = (___xmm_40000000000000004000000000000000 - dVar170 * dVar113) * dVar113;
    dVar120 = (_UNK_150689698 - dVar120 * 0.0) * dVar120;
    dVar73 = (___xmm_40000000000000004000000000000000 - dVar155 * dVar73) * dVar73;
    dVar83 = (_UNK_150689698 - dVar180 * dVar83) * dVar83;
    unaff_XMM13._0_8_ = (___xmm_40000000000000004000000000000000 - dVar155 * dVar73) * dVar73;
    unaff_XMM13._8_8_ = (_UNK_150689698 - dVar180 * dVar83) * dVar83;
    auVar117._0_8_ = (___xmm_40000000000000004000000000000000 - dVar170 * dVar113) * dVar113;
    auVar117._8_8_ = (_UNK_150689698 - dVar120 * 0.0) * dVar120;
    uVar34 = movmskps(in_R10D,auVar178);
    if ((char)uVar34 == (char)iVar31) goto LAB_140d3986e;
  }
  auVar75._8_4_ = 0xffffffff;
  auVar75._0_8_ = 0xffffffffffffffff;
  auVar75._12_4_ = 0xffffffff;
  dVar113 = (double)(___xmm_7fcfffffffffffff7fcfffffffffffff -
                    (___xmm_7fe00000000000007fe0000000000000 & (ulonglong)dVar155));
  dVar120 = (double)((longlong)_UNK_150b51628 - (_UNK_150b51678 & (ulonglong)dVar180));
  dVar73 = (double)(___xmm_7fcfffffffffffff7fcfffffffffffff -
                   ((ulonglong)dVar170 & ___xmm_7fe00000000000007fe0000000000000));
  fVar112 = (float)(dVar155 * dVar113);
  fVar40 = (float)(dVar180 * dVar120);
  auVar118._0_4_ = (float)(dVar170 * dVar73);
  auVar118._4_4_ = (float)(_UNK_150b51628 * 0.0);
  auVar118._8_8_ = 0;
  auVar10._4_4_ = fVar40;
  auVar10._0_4_ = fVar112;
  auVar10._8_4_ = auVar118._0_4_;
  auVar10._12_4_ = auVar118._4_4_;
  auVar45 = rcpps(auVar118,auVar10);
  auVar75 = auVar75 ^ auVar128;
  dVar73 = (double)((_UNK_15076ba38 - auVar118._0_4_ * auVar45._8_4_) * auVar45._8_4_) * dVar73;
  dVar83 = (double)((_UNK_15076ba3c - auVar118._4_4_ * auVar45._12_4_) * auVar45._12_4_) *
           _UNK_150b51628;
  dVar113 = (double)((___xmm_40000000400000004000000040000000 - fVar112 * auVar45._0_4_) *
                    auVar45._0_4_) * dVar113;
  dVar120 = (double)((_UNK_15076ba34 - fVar40 * auVar45._4_4_) * auVar45._4_4_) * dVar120;
  dVar113 = (___xmm_40000000000000004000000000000000 - dVar155 * dVar113) * dVar113;
  dVar120 = (_UNK_150689698 - dVar180 * dVar120) * dVar120;
  dVar73 = (___xmm_40000000000000004000000000000000 - dVar170 * dVar73) * dVar73;
  dVar83 = (_UNK_150689698 - dVar83 * 0.0) * dVar83;
  auVar149._0_8_ = (___xmm_40000000000000004000000000000000 - dVar170 * dVar73) * dVar73;
  auVar149._8_8_ = (_UNK_150689698 - dVar83 * 0.0) * dVar83;
  auVar119._0_8_ = (___xmm_40000000000000004000000000000000 - dVar155 * dVar113) * dVar113;
  auVar119._8_8_ = (_UNK_150689698 - dVar180 * dVar120) * dVar120;
  auVar44._4_4_ = auVar75._0_4_;
  auVar44._0_4_ = auVar75._0_4_;
  auVar44._8_4_ = auVar75._4_4_;
  auVar44._12_4_ = auVar75._4_4_;
  unaff_XMM13 = blendvps(unaff_XMM13,auVar119,auVar44);
  auVar45._4_4_ = auVar75._8_4_;
  auVar45._0_4_ = auVar75._8_4_;
  auVar45._8_4_ = auVar75._12_4_;
  auVar45._12_4_ = auVar75._12_4_;
  auVar117 = blendvps(auVar117,auVar149,auVar45);
LAB_140d3986e:
  dVar170 = (double)param_3[4];
  dVar155 = (double)param_3[5];
  dVar180 = (double)param_3[6];
  auVar45 = pmovsxdq(auVar45,auVar78);
  auVar178 = blendvps(unaff_XMM13,ZEXT816(0),auVar45);
  auVar46._4_4_ = iVar38;
  auVar46._0_4_ = iVar38;
  auVar46._8_4_ = iVar39;
  auVar46._12_4_ = iVar39;
  auVar45 = blendvps(auVar117,ZEXT816(0),auVar46);
  uVar28 = param_5 + 3;
  if (-1 < (int)param_5) {
    uVar28 = param_5;
  }
  dVar83 = auVar178._0_8_;
  dVar113 = auVar178._8_8_;
  dVar73 = auVar45._0_8_;
  if ((int)(uVar28 & 0xfffffffc) < 1) {
    uVar32 = 0;
    auVar179._8_4_ = 0xffffffff;
    auVar179._0_8_ = 0xffffffffffffffff;
    auVar179._12_4_ = 0xffffffff;
  }
  else {
    auVar179._8_4_ = 0xffffffff;
    auVar179._0_8_ = 0xffffffffffffffff;
    auVar179._12_4_ = 0xffffffff;
    lVar35 = 0x20;
    uVar32 = 0;
    do {
      auVar45 = *(undefined1 (*) [16])(param_1 + -0x20 + lVar35);
      auVar178 = *(undefined1 (*) [16])(param_1 + -0x10 + lVar35);
      pfVar33 = (float *)(param_1 + lVar35);
      auVar78 = insertps(auVar178,auVar45,0x8c);
      dVar164 = (double)auVar45._0_4_ * param_4 - dVar170;
      dVar169 = (double)auVar45._12_4_ * param_4 - dVar170;
      dVar114 = (double)auVar178._8_4_ * param_4 - dVar170;
      dVar121 = (double)pfVar33[1] * param_4 - dVar170;
      dVar120 = (double)auVar45._4_4_ * param_4 - dVar155;
      dVar11 = (double)auVar178._0_4_ * param_4 - dVar155;
      dVar22 = (double)auVar178._12_4_ * param_4 - dVar155;
      dVar23 = (double)pfVar33[2] * param_4 - dVar155;
      dVar85 = (double)auVar78._0_4_ * param_4 - dVar180;
      dVar97 = (double)auVar78._4_4_ * param_4 - dVar180;
      dVar101 = (double)*pfVar33 * param_4 - dVar180;
      dVar106 = (double)pfVar33[3] * param_4 - dVar180;
      dVar156 = dVar163 * dVar120 - dVar168 * dVar164;
      dVar160 = dVar163 * dVar11 - dVar168 * dVar169;
      dVar107 = dVar163 * dVar22 - dVar168 * dVar114;
      dVar111 = dVar163 * dVar23 - dVar168 * dVar121;
      dVar74 = dVar168 * dVar85 - dVar171 * dVar120;
      dVar84 = dVar168 * dVar97 - dVar171 * dVar11;
      dVar86 = dVar168 * dVar101 - dVar171 * dVar22;
      dVar98 = dVar168 * dVar106 - dVar171 * dVar23;
      dVar134 = dVar171 * dVar114 - dVar163 * dVar101;
      dVar144 = dVar171 * dVar121 - dVar163 * dVar106;
      dVar172 = dVar171 * dVar164 - dVar163 * dVar85;
      dVar175 = dVar171 * dVar169 - dVar163 * dVar97;
      dVar74 = dVar74 + dVar74;
      dVar84 = dVar84 + dVar84;
      dVar86 = dVar86 + dVar86;
      dVar98 = dVar98 + dVar98;
      dVar172 = dVar172 + dVar172;
      dVar175 = dVar175 + dVar175;
      dVar134 = dVar134 + dVar134;
      dVar144 = dVar144 + dVar144;
      dVar156 = dVar156 + dVar156;
      dVar160 = dVar160 + dVar160;
      dVar107 = dVar107 + dVar107;
      dVar111 = dVar111 + dVar111;
      dVar114 = dVar174 * dVar86 + dVar114;
      dVar121 = dVar174 * dVar98 + dVar121;
      auVar12._8_4_ = SUB84(dVar121,0);
      auVar12._0_8_ = dVar114;
      auVar12._12_4_ = (int)((ulonglong)dVar121 >> 0x20);
      uStack_240 = auVar12._8_8_;
      fVar132 = (float)(((dVar168 * dVar156 - dVar172 * dVar171) + dVar174 * dVar74 + dVar164) *
                       dVar83);
      fVar142 = (float)(((dVar168 * dVar160 - dVar175 * dVar171) + dVar174 * dVar84 + dVar169) *
                       dVar83);
      fVar112 = (float)(((dVar168 * dVar107 - dVar134 * dVar171) + dVar114) * dVar83);
      fVar67 = (float)(((dVar168 * dVar111 - dVar144 * dVar171) + uStack_240) * dVar83);
      local_248._0_4_ =
           (undefined4)
           (((dVar171 * dVar74 - dVar156 * dVar163) + dVar174 * dVar172 + dVar120) * dVar113);
      local_248._4_4_ =
           (undefined4)
           (((dVar171 * dVar84 - dVar160 * dVar163) + dVar174 * dVar175 + dVar11) * dVar113);
      uStack_240._0_4_ =
           (float)(((dVar171 * dVar86 - dVar107 * dVar163) + dVar174 * dVar134 + dVar22) * dVar113);
      uStack_240._4_4_ =
           (float)(((dVar171 * dVar98 - dVar111 * dVar163) + dVar174 * dVar144 + dVar23) * dVar113);
      auVar79._0_8_ =
           ((dVar163 * dVar134 - dVar86 * dVar168) + dVar174 * dVar107 + dVar101) * dVar73;
      auVar79._8_8_ =
           ((dVar163 * dVar144 - dVar98 * dVar168) + dVar174 * dVar111 + dVar106) * dVar73;
      fVar124 = (float)(((dVar163 * dVar172 - dVar74 * dVar168) + dVar174 * dVar156 + dVar85) *
                       dVar73);
      fVar125 = (float)(((dVar163 * dVar175 - dVar84 * dVar168) + dVar174 * dVar160 + dVar97) *
                       dVar73);
      fVar40 = (float)auVar79._0_8_;
      fVar68 = (float)auVar79._8_8_;
      local_218 = auVar179 & ___xmm_00000000000000000000000001010101;
      if (local_218._0_4_ != 0) {
        local_268[0] = auVar179._0_4_;
        auVar178 = pmovzxbd(auVar79,local_268[0]);
        auVar48._0_4_ =
             -(uint)(((uint)fVar132 & __xmm_7f8000007f8000007f8000007f800000) ==
                    __xmm_7f8000007f8000007f8000007f800000);
        auVar48._4_4_ = -(uint)(((uint)fVar142 & _UNK_1506896e4) == _UNK_1506896e4);
        auVar48._8_4_ = -(uint)(((uint)fVar112 & _UNK_1506896e8) == _UNK_1506896e8);
        auVar48._12_4_ = -(uint)(((uint)fVar67 & _UNK_1506896ec) == _UNK_1506896ec);
        auVar45 = ~auVar48 & auVar178;
        auVar88._0_4_ = auVar45._0_4_ << 0x1f;
        auVar88._4_4_ = auVar45._4_4_ << 0x1f;
        auVar88._8_4_ = auVar45._8_4_ << 0x1f;
        auVar88._12_4_ = auVar45._12_4_ << 0x1f;
        iVar31 = movmskps(local_218._0_4_,auVar88);
        if (iVar31 != 0) {
          auVar89._0_4_ =
               -(uint)((local_248._0_4_ & __xmm_7f8000007f8000007f8000007f800000) ==
                      __xmm_7f8000007f8000007f8000007f800000);
          auVar89._4_4_ = -(uint)((local_248._4_4_ & _UNK_1506896e4) == _UNK_1506896e4);
          auVar89._8_4_ = -(uint)(((uint)(float)uStack_240 & _UNK_1506896e8) == _UNK_1506896e8);
          auVar89._12_4_ = -(uint)(((uint)uStack_240._4_4_ & _UNK_1506896ec) == _UNK_1506896ec);
          auVar45 = ~auVar48 & ~auVar89 & auVar178;
          auVar80._0_4_ = auVar45._0_4_ << 0x1f;
          auVar80._4_4_ = auVar45._4_4_ << 0x1f;
          auVar80._8_4_ = auVar45._8_4_ << 0x1f;
          auVar80._12_4_ = auVar45._12_4_ << 0x1f;
          iVar31 = movmskps(iVar31,auVar80);
          if (iVar31 != 0) {
            auVar102._0_4_ =
                 -(uint)(((uint)fVar124 & __xmm_7f8000007f8000007f8000007f800000) ==
                        __xmm_7f8000007f8000007f8000007f800000);
            auVar102._4_4_ = -(uint)(((uint)fVar125 & _UNK_1506896e4) == _UNK_1506896e4);
            auVar102._8_4_ = -(uint)(((uint)fVar40 & _UNK_1506896e8) == _UNK_1506896e8);
            auVar102._12_4_ = -(uint)(((uint)fVar68 & _UNK_1506896ec) == _UNK_1506896ec);
            auVar45 = ~auVar102 & auVar45;
          }
        }
        local_218 = pshufb(auVar45,___xmm_0000000000000000000000000c080400);
        local_218 = local_218 & ___xmm_00000000000000000000000001010101;
      }
      auVar45 = *(undefined1 (*) [16])(param_2 + -0x20 + lVar35);
      auVar178 = *(undefined1 (*) [16])(param_2 + -0x10 + lVar35);
      puVar1 = (uint *)(param_2 + lVar35);
      auVar78 = insertps(auVar178,auVar45,0x8c);
      dVar107 = (double)(float)(auVar45._0_4_ ^ __xmm_80000000800000008000000080000000);
      dVar111 = (double)(float)(auVar45._12_4_ ^ _UNK_150651574);
      dVar164 = (double)(float)(auVar178._8_4_ ^ _UNK_150651578);
      dVar169 = (double)(float)(puVar1[1] ^ _UNK_15065157c);
      dVar101 = (double)(float)(auVar45._4_4_ ^ __xmm_80000000800000008000000080000000);
      dVar106 = (double)(float)(auVar178._0_4_ ^ _UNK_150651574);
      dVar172 = (double)(float)(auVar178._12_4_ ^ _UNK_150651578);
      dVar175 = (double)(float)(puVar1[2] ^ _UNK_15065157c);
      dVar85 = (double)(float)(auVar78._0_4_ ^ __xmm_80000000800000008000000080000000);
      dVar86 = (double)(float)(auVar78._4_4_ ^ _UNK_150651574);
      dVar120 = (double)(float)(*puVar1 ^ _UNK_150651578);
      dVar11 = (double)(float)(puVar1[3] ^ _UNK_15065157c);
      dVar114 = dVar163 * dVar172 - dVar168 * dVar164;
      dVar121 = dVar163 * dVar175 - dVar168 * dVar169;
      dVar134 = dVar163 * dVar101 - dVar168 * dVar107;
      dVar144 = dVar163 * dVar106 - dVar168 * dVar111;
      dVar97 = dVar168 * dVar120 - dVar171 * dVar172;
      dVar98 = dVar168 * dVar11 - dVar171 * dVar175;
      dVar74 = dVar168 * dVar85 - dVar171 * dVar101;
      dVar84 = dVar168 * dVar86 - dVar171 * dVar106;
      dVar156 = dVar171 * dVar164 - dVar163 * dVar120;
      dVar160 = dVar171 * dVar169 - dVar163 * dVar11;
      dVar22 = dVar171 * dVar107 - dVar163 * dVar85;
      dVar23 = dVar171 * dVar111 - dVar163 * dVar86;
      dVar97 = dVar97 + dVar97;
      dVar98 = dVar98 + dVar98;
      dVar74 = dVar74 + dVar74;
      dVar84 = dVar84 + dVar84;
      dVar156 = dVar156 + dVar156;
      dVar160 = dVar160 + dVar160;
      dVar22 = dVar22 + dVar22;
      dVar23 = dVar23 + dVar23;
      dVar114 = dVar114 + dVar114;
      dVar121 = dVar121 + dVar121;
      dVar134 = dVar134 + dVar134;
      dVar144 = dVar144 + dVar144;
      auVar137._0_8_ =
           CONCAT44((float)(((dVar168 * dVar144 - dVar23 * dVar171) + dVar174 * dVar84 + dVar111) *
                           dVar83),
                    (float)(((dVar168 * dVar134 - dVar22 * dVar171) + dVar174 * dVar74 + dVar107) *
                           dVar83));
      fVar69 = (float)(((dVar168 * dVar121 - dVar160 * dVar171) + dVar174 * dVar98 + dVar169) *
                      dVar83);
      uVar29 = CONCAT44(fVar69,(float)(((dVar168 * dVar114 - dVar156 * dVar171) +
                                       dVar174 * dVar97 + dVar164) * dVar83));
      auVar137._8_8_ = uVar29;
      fVar153 = (float)(((dVar171 * dVar84 - dVar144 * dVar163) + dVar174 * dVar23 + dVar106) *
                       dVar113);
      auVar150._0_8_ =
           CONCAT44(fVar153,(float)(((dVar171 * dVar74 - dVar134 * dVar163) +
                                    dVar174 * dVar22 + dVar101) * dVar113));
      fVar41 = (float)(((dVar171 * dVar97 - dVar114 * dVar163) + dVar174 * dVar156 + dVar172) *
                      dVar113);
      fVar70 = (float)(((dVar171 * dVar98 - dVar121 * dVar163) + dVar174 * dVar160 + dVar175) *
                      dVar113);
      uVar99 = CONCAT44(fVar70,fVar41);
      auVar150._8_8_ = uVar99;
      fVar182 = (float)(((dVar163 * dVar22 - dVar74 * dVar168) + dVar174 * dVar134 + dVar85) *
                       dVar73);
      fVar184 = (float)(((dVar163 * dVar23 - dVar84 * dVar168) + dVar174 * dVar144 + dVar86) *
                       dVar73);
      fVar42 = (float)(((dVar163 * dVar156 - dVar97 * dVar168) + dVar174 * dVar114 + dVar120) *
                      dVar73);
      fVar71 = (float)(((dVar163 * dVar160 - dVar98 * dVar168) + dVar174 * dVar121 + dVar11) *
                      dVar73);
      iVar31 = SUB164(local_218 & ___xmm_00000000000000000000000001010101,0);
      if (iVar31 != 0) {
        auVar45 = pmovzxbd(local_218 & ___xmm_00000000000000000000000001010101,local_218);
        uVar43 = CONCAT44(_UNK_1506896e4,__xmm_7f8000007f8000007f8000007f800000);
        auVar24._8_4_ = _UNK_1506896e8;
        auVar24._0_8_ = uVar43;
        auVar24._12_4_ = _UNK_1506896ec;
        uVar72 = auVar24._8_8_;
        auVar81._0_4_ =
             -(uint)((uint)(auVar137._0_8_ & uVar43) == __xmm_7f8000007f8000007f8000007f800000);
        auVar81._4_4_ = -(uint)((uint)((auVar137._0_8_ & uVar43) >> 0x20) == _UNK_1506896e4);
        auVar81._8_4_ = -(uint)((uint)(uVar29 & uVar72) == _UNK_1506896e8);
        auVar81._12_4_ = -(uint)((uint)((uVar29 & uVar72) >> 0x20) == _UNK_1506896ec);
        auVar178 = ~auVar81 & auVar45;
        auVar90._0_4_ = auVar178._0_4_ << 0x1f;
        auVar90._4_4_ = auVar178._4_4_ << 0x1f;
        auVar90._8_4_ = auVar178._8_4_ << 0x1f;
        auVar90._12_4_ = auVar178._12_4_ << 0x1f;
        iVar31 = movmskps(iVar31,auVar90);
        if (iVar31 != 0) {
          uVar99 = uVar99 & uVar72;
          auVar91._0_4_ =
               -(uint)((uint)(auVar150._0_8_ & uVar43) == __xmm_7f8000007f8000007f8000007f800000);
          auVar91._4_4_ = -(uint)((uint)((auVar150._0_8_ & uVar43) >> 0x20) == _UNK_1506896e4);
          auVar91._8_4_ = -(uint)((uint)uVar99 == _UNK_1506896e8);
          auVar91._12_4_ = -(uint)((uint)(uVar99 >> 0x20) == _UNK_1506896ec);
          auVar178 = ~(auVar81 | auVar91) & auVar45;
          auVar49._0_4_ = auVar178._0_4_ << 0x1f;
          auVar49._4_4_ = auVar178._4_4_ << 0x1f;
          auVar49._8_4_ = auVar178._8_4_ << 0x1f;
          auVar49._12_4_ = auVar178._12_4_ << 0x1f;
          iVar31 = movmskps(iVar31,auVar49);
          if (iVar31 != 0) {
            uVar43 = CONCAT44(fVar184,fVar182) & uVar43;
            uVar72 = CONCAT44(fVar71,fVar42) & uVar72;
            auVar50._0_4_ = -(uint)((uint)uVar43 == __xmm_7f8000007f8000007f8000007f800000);
            auVar50._4_4_ = -(uint)((uint)(uVar43 >> 0x20) == _UNK_1506896e4);
            auVar50._8_4_ = -(uint)((uint)uVar72 == _UNK_1506896e8);
            auVar50._12_4_ = -(uint)((uint)(uVar72 >> 0x20) == _UNK_1506896ec);
            auVar178 = ~auVar50 & auVar178;
          }
        }
        local_218 = pshufb(auVar178,___xmm_0000000000000000000000000c080400);
        local_218 = local_218 & ___xmm_00000000000000000000000001010101;
      }
      auVar179 = local_218 & ___xmm_00000000000000000000000001010101;
      auVar27._4_4_ = fVar142;
      auVar27._0_4_ = fVar132;
      auVar27._8_4_ = fVar112;
      auVar27._12_4_ = fVar67;
      auVar45 = insertps(auVar27,_local_248,0x30);
      auVar76._0_8_ = local_248._4_8_;
      auVar76._8_4_ = fVar124;
      auVar76._12_4_ = fVar125;
      auVar5._4_4_ = fVar125;
      auVar5._0_4_ = fVar124;
      auVar5._8_4_ = fVar40;
      auVar5._12_4_ = fVar68;
      auVar45 = insertps(auVar45,auVar5,0x20);
      puVar3 = (undefined4 *)(param_1 + -0x20 + lVar35);
      *puVar3 = auVar45._0_4_;
      puVar3[1] = auVar45._12_4_;
      puVar3[2] = auVar45._8_4_;
      puVar3[3] = auVar45._4_4_;
      auVar45 = blendps(auVar76,auVar27,4);
      puVar3 = (undefined4 *)(param_1 + -0x10 + lVar35);
      *puVar3 = auVar45._0_4_;
      puVar3[1] = auVar45._12_4_;
      puVar3[2] = auVar45._8_4_;
      puVar3[3] = auVar45._4_4_;
      pfVar33 = (float *)(param_1 + lVar35);
      *pfVar33 = fVar40;
      pfVar33[1] = fVar67;
      pfVar33[2] = uStack_240._4_4_;
      pfVar33[3] = fVar68;
      auVar47._8_8_ = uVar29;
      auVar47._0_8_ = auVar137._0_8_;
      auVar45 = insertps(auVar47,auVar150,0x30);
      auVar77._4_4_ = fVar41;
      auVar77._0_4_ = fVar153;
      auVar77._8_4_ = fVar182;
      auVar77._12_4_ = fVar184;
      auVar13._4_4_ = fVar184;
      auVar13._0_4_ = fVar182;
      auVar13._8_4_ = fVar42;
      auVar13._12_4_ = fVar71;
      auVar45 = insertps(auVar45,auVar13,0x20);
      puVar3 = (undefined4 *)(param_2 + -0x20 + lVar35);
      *puVar3 = auVar45._0_4_;
      puVar3[1] = auVar45._12_4_;
      puVar3[2] = auVar45._8_4_;
      puVar3[3] = auVar45._4_4_;
      auVar45 = blendps(auVar77,auVar137,4);
      puVar3 = (undefined4 *)(param_2 + -0x10 + lVar35);
      *puVar3 = auVar45._0_4_;
      puVar3[1] = auVar45._12_4_;
      puVar3[2] = auVar45._8_4_;
      puVar3[3] = auVar45._4_4_;
      pfVar33 = (float *)(param_2 + lVar35);
      *pfVar33 = fVar42;
      pfVar33[1] = fVar69;
      pfVar33[2] = fVar70;
      pfVar33[3] = fVar71;
      lVar35 = lVar35 + 0x30;
      uVar32 = uVar32 + 4;
    } while ((int)uVar32 < (int)(uVar28 & 0xfffffffc));
  }
  if ((int)uVar32 < (int)param_5) {
    auVar138._0_4_ =
         -(uint)((int)(uVar32 | (uint)__xmm_00000003000000020000000100000000) < (int)param_5);
    auVar138._4_4_ =
         -(uint)((int)(uVar32 | __xmm_00000003000000020000000100000000._4_4_) < (int)param_5);
    auVar138._8_4_ = -(uint)((int)(uVar32 | _UNK_150631e08) < (int)param_5);
    auVar138._12_4_ = -(uint)((int)(uVar32 | _UNK_150631e0c) < (int)param_5);
    uVar29 = (ulonglong)uVar32;
    pauVar2 = (undefined1 (*) [16])(param_1 + uVar29 * 0xc);
    iVar31 = movmskps(uVar32,auVar138);
    if (iVar31 == 0xf) {
      auVar45 = *pauVar2;
      auVar178 = pauVar2[1];
      auVar92._0_4_ = auVar45._0_4_;
      auVar78 = insertps(auVar178,auVar45,0x8c);
      auVar92._4_4_ = auVar45._12_4_;
      auVar92._8_4_ = auVar178._8_4_;
      auVar92._12_4_ = *(undefined4 *)(pauVar2[2] + 4);
      auVar103._4_4_ = auVar178._0_4_;
      auVar103._0_4_ = auVar45._4_4_;
      auVar103._8_4_ = auVar178._12_4_;
      auVar103._12_4_ = *(undefined4 *)(pauVar2[2] + 8);
      auVar109._0_8_ = auVar78._0_8_;
      auVar109._8_4_ = *(undefined4 *)pauVar2[2];
      auVar109._12_4_ = *(undefined4 *)(pauVar2[2] + 0xc);
      pfVar33 = (float *)(param_2 + uVar29 * 0xc);
      auVar45 = *(undefined1 (*) [16])(param_2 + uVar29 * 0xc);
      auVar178 = *(undefined1 (*) [16])(param_2 + 0x10 + uVar29 * 0xc);
      puVar3 = (undefined4 *)(param_2 + 0x20 + uVar29 * 0xc);
      auVar151._0_4_ = auVar45._0_4_;
      auVar78 = insertps(auVar178,auVar45,0x8c);
      auVar151._4_4_ = auVar45._12_4_;
      auVar151._8_4_ = auVar178._8_4_;
      auVar151._12_4_ = puVar3[1];
      auVar159._4_4_ = auVar178._0_4_;
      auVar159._0_4_ = auVar45._4_4_;
      auVar159._8_4_ = auVar178._12_4_;
      auVar159._12_4_ = puVar3[2];
      auVar173._0_8_ = auVar78._0_8_;
      auVar173._8_4_ = *puVar3;
      auVar173._12_4_ = puVar3[3];
      uVar28 = 0xf;
    }
    else {
      auVar51._0_4_ = ___xmm_00000024000000180000000c00000000 & auVar138._0_4_;
      auVar51._4_4_ = _UNK_150b50da4 & auVar138._4_4_;
      auVar51._8_4_ = _UNK_150b50da8 & auVar138._8_4_;
      auVar51._12_4_ = _UNK_150b50dac & auVar138._12_4_;
      lVar36 = extractps(auVar51,1);
      lVar37 = extractps(auVar51,2);
      lVar35 = extractps(auVar51,3);
      auVar45 = insertps(ZEXT416(*(uint *)*pauVar2),*(undefined4 *)(*pauVar2 + lVar36),0x10);
      auVar45 = insertps(auVar45,*(undefined4 *)(*pauVar2 + lVar37),0x20);
      auVar92 = insertps(auVar45,*(undefined4 *)(*pauVar2 + lVar35),0x30);
      auVar45 = ___xmm_000000280000001c0000001000000004 & auVar138;
      auVar178 = insertps(ZEXT416(*(uint *)(*pauVar2 + auVar45._0_4_)),
                          *(undefined4 *)(*pauVar2 + auVar45._4_4_),0x10);
      auVar178 = insertps(auVar178,*(undefined4 *)(*pauVar2 + auVar45._8_4_),0x20);
      auVar103 = insertps(auVar178,*(undefined4 *)(*pauVar2 + auVar45._12_4_),0x30);
      auVar178 = ___xmm_0000002c000000200000001400000008 & auVar138;
      uVar28 = auVar178._0_4_;
      auVar78 = insertps(ZEXT416(*(uint *)(*pauVar2 + uVar28)),
                         *(undefined4 *)(*pauVar2 + auVar178._4_4_),0x10);
      auVar78 = insertps(auVar78,*(undefined4 *)(*pauVar2 + auVar178._8_4_),0x20);
      auVar109 = insertps(auVar78,*(undefined4 *)(*pauVar2 + auVar178._12_4_),0x30);
      pfVar33 = (float *)(param_2 + uVar29 * 0xc);
      auVar78 = insertps(ZEXT416(*(uint *)(param_2 + uVar29 * 0xc)),
                         *(undefined4 *)(lVar36 + (longlong)pfVar33),0x10);
      auVar78 = insertps(auVar78,*(undefined4 *)(lVar37 + (longlong)pfVar33),0x20);
      auVar151 = insertps(auVar78,*(undefined4 *)(lVar35 + (longlong)pfVar33),0x30);
      auVar78 = insertps(ZEXT416(*(uint *)((ulonglong)auVar45._0_4_ + (longlong)pfVar33)),
                         *(undefined4 *)((ulonglong)auVar45._4_4_ + (longlong)pfVar33),0x10);
      auVar78 = insertps(auVar78,*(undefined4 *)((ulonglong)auVar45._8_4_ + (longlong)pfVar33),0x20)
      ;
      auVar159 = insertps(auVar78,*(undefined4 *)((ulonglong)auVar45._12_4_ + (longlong)pfVar33),
                          0x30);
      auVar45 = insertps(ZEXT416(*(uint *)((ulonglong)uVar28 + (longlong)pfVar33)),
                         *(undefined4 *)((ulonglong)auVar178._4_4_ + (longlong)pfVar33),0x10);
      auVar45 = insertps(auVar45,*(undefined4 *)((ulonglong)auVar178._8_4_ + (longlong)pfVar33),0x20
                        );
      auVar173 = insertps(auVar45,*(undefined4 *)((ulonglong)auVar178._12_4_ + (longlong)pfVar33),
                          0x30);
    }
    dVar135 = (double)auVar92._8_4_ * param_4 - dVar170;
    dVar145 = (double)auVar92._12_4_ * param_4 - dVar170;
    dVar165 = (double)auVar92._0_4_ * param_4 - dVar170;
    dVar170 = (double)auVar92._4_4_ * param_4 - dVar170;
    dVar156 = (double)auVar103._8_4_ * param_4 - dVar155;
    dVar164 = (double)auVar103._12_4_ * param_4 - dVar155;
    dVar148 = (double)auVar103._0_4_ * param_4 - dVar155;
    dVar155 = (double)auVar103._4_4_ * param_4 - dVar155;
    dVar126 = (double)auVar109._8_4_ * param_4 - dVar180;
    dVar130 = (double)auVar109._12_4_ * param_4 - dVar180;
    dVar176 = (double)auVar109._0_4_ * param_4 - dVar180;
    dVar180 = (double)auVar109._4_4_ * param_4 - dVar180;
    dVar22 = dVar163 * dVar148 - dVar168 * dVar165;
    dVar23 = dVar163 * dVar155 - dVar168 * dVar170;
    dVar157 = dVar163 * dVar156 - dVar168 * dVar135;
    dVar161 = dVar163 * dVar164 - dVar168 * dVar145;
    dVar120 = dVar168 * dVar176 - dVar171 * dVar148;
    dVar114 = dVar168 * dVar180 - dVar171 * dVar155;
    dVar107 = dVar168 * dVar126 - dVar171 * dVar156;
    dVar134 = dVar168 * dVar130 - dVar171 * dVar164;
    dVar74 = dVar171 * dVar165 - dVar163 * dVar176;
    dVar85 = dVar171 * dVar170 - dVar163 * dVar180;
    dVar115 = dVar171 * dVar135 - dVar163 * dVar126;
    dVar122 = dVar171 * dVar145 - dVar163 * dVar130;
    dVar120 = dVar120 + dVar120;
    dVar114 = dVar114 + dVar114;
    dVar107 = dVar107 + dVar107;
    dVar134 = dVar134 + dVar134;
    dVar74 = dVar74 + dVar74;
    dVar85 = dVar85 + dVar85;
    dVar115 = dVar115 + dVar115;
    dVar122 = dVar122 + dVar122;
    dVar22 = dVar22 + dVar22;
    dVar23 = dVar23 + dVar23;
    dVar157 = dVar157 + dVar157;
    dVar161 = dVar161 + dVar161;
    dVar11 = (double)(float)(auVar151._8_4_ ^ _UNK_150651578);
    dVar121 = (double)(float)(auVar151._12_4_ ^ _UNK_15065157c);
    dVar97 = (double)(float)(auVar159._8_4_ ^ _UNK_150651578);
    dVar101 = (double)(float)(auVar159._12_4_ ^ _UNK_15065157c);
    dVar177 = dVar163 * dVar97 - dVar168 * dVar11;
    dVar181 = dVar163 * dVar101 - dVar168 * dVar121;
    dVar158 = (double)(float)(auVar151._0_4_ ^ __xmm_80000000800000008000000080000000);
    dVar162 = (double)(float)(auVar151._4_4_ ^ _UNK_150651574);
    dVar160 = (double)(float)(auVar159._0_4_ ^ __xmm_80000000800000008000000080000000);
    dVar169 = (double)(float)(auVar159._4_4_ ^ _UNK_150651574);
    dVar84 = (double)(float)(auVar173._0_4_ ^ __xmm_80000000800000008000000080000000);
    dVar86 = (double)(float)(auVar173._4_4_ ^ _UNK_150651574);
    dVar136 = dVar163 * dVar160 - dVar168 * dVar158;
    dVar146 = dVar163 * dVar169 - dVar168 * dVar162;
    dVar116 = (double)(float)(auVar173._8_4_ ^ _UNK_150651578);
    dVar123 = (double)(float)(auVar173._12_4_ ^ _UNK_15065157c);
    dVar98 = dVar168 * dVar116 - dVar171 * dVar97;
    dVar106 = dVar168 * dVar123 - dVar171 * dVar101;
    dVar172 = dVar168 * dVar84 - dVar171 * dVar160;
    dVar175 = dVar168 * dVar86 - dVar171 * dVar169;
    dVar127 = dVar171 * dVar11 - dVar163 * dVar116;
    dVar131 = dVar171 * dVar121 - dVar163 * dVar123;
    dVar111 = dVar171 * dVar158 - dVar163 * dVar84;
    dVar144 = dVar171 * dVar162 - dVar163 * dVar86;
    dVar98 = dVar98 + dVar98;
    dVar106 = dVar106 + dVar106;
    dVar172 = dVar172 + dVar172;
    dVar175 = dVar175 + dVar175;
    dVar127 = dVar127 + dVar127;
    dVar131 = dVar131 + dVar131;
    dVar111 = dVar111 + dVar111;
    dVar144 = dVar144 + dVar144;
    dVar177 = dVar177 + dVar177;
    dVar181 = dVar181 + dVar181;
    dVar136 = dVar136 + dVar136;
    dVar146 = dVar146 + dVar146;
    fVar112 = (float)(((dVar168 * dVar157 - dVar115 * dVar171) + dVar174 * dVar107 + dVar135) *
                     dVar83);
    fVar125 = (float)(((dVar168 * dVar161 - dVar122 * dVar171) + dVar174 * dVar134 + dVar145) *
                     dVar83);
    fVar186 = (float)(((dVar168 * dVar22 - dVar74 * dVar171) + dVar174 * dVar120 + dVar165) * dVar83
                     );
    fVar187 = (float)(((dVar168 * dVar23 - dVar85 * dVar171) + dVar174 * dVar114 + dVar170) * dVar83
                     );
    fVar40 = (float)(((dVar171 * dVar107 - dVar157 * dVar163) + dVar174 * dVar115 + dVar156) *
                    dVar113);
    fVar132 = (float)(((dVar171 * dVar134 - dVar161 * dVar163) + dVar174 * dVar122 + dVar164) *
                     dVar113);
    uVar99 = CONCAT44(fVar132,fVar40);
    fVar182 = (float)(((dVar171 * dVar120 - dVar22 * dVar163) + dVar174 * dVar74 + dVar148) *
                     dVar113);
    fVar184 = (float)(((dVar171 * dVar114 - dVar23 * dVar163) + dVar174 * dVar85 + dVar155) *
                     dVar113);
    auVar129._0_8_ = CONCAT44(fVar184,fVar182);
    fVar133 = (float)(((dVar163 * dVar115 - dVar107 * dVar168) + dVar174 * dVar157 + dVar126) *
                     dVar73);
    fVar143 = (float)(((dVar163 * dVar122 - dVar134 * dVar168) + dVar174 * dVar161 + dVar130) *
                     dVar73);
    auVar139._0_8_ = CONCAT44(fVar143,fVar133);
    auVar139._8_8_ = 0;
    auVar129._8_8_ = uVar99;
    fVar69 = (float)(((dVar163 * dVar74 - dVar120 * dVar168) + dVar174 * dVar22 + dVar176) * dVar73)
    ;
    fVar70 = (float)(((dVar163 * dVar85 - dVar114 * dVar168) + dVar174 * dVar23 + dVar180) * dVar73)
    ;
    auVar110._0_8_ = CONCAT44(fVar70,fVar69);
    auVar110._8_8_ = auVar139._0_8_;
    fVar71 = (float)(((dVar168 * dVar136 - dVar111 * dVar171) + dVar174 * dVar172 + dVar158) *
                    dVar83);
    fVar153 = (float)(((dVar168 * dVar146 - dVar144 * dVar171) + dVar174 * dVar175 + dVar162) *
                     dVar83);
    fVar67 = (float)(((dVar168 * dVar177 - dVar127 * dVar171) + dVar174 * dVar98 + dVar11) * dVar83)
    ;
    fVar142 = (float)(((dVar168 * dVar181 - dVar131 * dVar171) + dVar174 * dVar106 + dVar121) *
                     dVar83);
    bVar30 = (char)((char)iVar31 << 4) >> 4;
    fVar183 = (float)(((dVar171 * dVar172 - dVar136 * dVar163) + dVar174 * dVar111 + dVar160) *
                     dVar113);
    fVar185 = (float)(((dVar171 * dVar175 - dVar146 * dVar163) + dVar174 * dVar144 + dVar169) *
                     dVar113);
    fVar68 = (float)(((dVar171 * dVar98 - dVar177 * dVar163) + dVar174 * dVar127 + dVar97) * dVar113
                    );
    fVar41 = (float)(((dVar171 * dVar106 - dVar181 * dVar163) + dVar174 * dVar131 + dVar101) *
                    dVar113);
    fVar147 = (float)(((dVar163 * dVar111 - dVar172 * dVar168) + dVar174 * dVar136 + dVar84) *
                     dVar73);
    fVar154 = (float)(((dVar163 * dVar144 - dVar175 * dVar168) + dVar174 * dVar146 + dVar86) *
                     dVar73);
    auVar152._0_8_ = CONCAT44(fVar154,fVar147);
    fVar124 = (float)(((dVar163 * dVar127 - dVar98 * dVar168) + dVar174 * dVar177 + dVar116) *
                     dVar73);
    fVar42 = (float)(((dVar163 * dVar131 - dVar106 * dVar168) + dVar174 * dVar181 + dVar123) *
                    dVar73);
    uVar72 = CONCAT44(fVar42,fVar124);
    auVar152._8_8_ = uVar72;
    auVar178 = pmovzxbd(auVar139,auVar179);
    auVar45 = auVar178 & auVar138;
    auVar52._0_4_ = auVar45._0_4_ << 0x1f;
    auVar52._4_4_ = auVar45._4_4_ << 0x1f;
    auVar52._8_4_ = auVar45._8_4_ << 0x1f;
    auVar52._12_4_ = auVar45._12_4_ << 0x1f;
    iVar31 = movmskps(uVar28,auVar52);
    auVar166 = auVar179;
    if (iVar31 != 0) {
      auVar140._0_4_ = (auVar178._0_4_ << 0x1f) >> 0x1f;
      auVar140._4_4_ = (auVar178._4_4_ << 0x1f) >> 0x1f;
      auVar140._8_4_ = (auVar178._8_4_ << 0x1f) >> 0x1f;
      auVar140._12_4_ = (auVar178._12_4_ << 0x1f) >> 0x1f;
      auVar140 = auVar140 & auVar138;
      uVar26 = CONCAT44(_UNK_1506896e4,__xmm_7f8000007f8000007f8000007f800000);
      auVar25._8_4_ = _UNK_1506896e8;
      auVar25._0_8_ = uVar26;
      auVar25._12_4_ = _UNK_1506896ec;
      uVar43 = auVar25._8_8_;
      uVar87 = CONCAT44(fVar187,fVar186) & uVar26;
      uVar100 = CONCAT44(fVar125,fVar112) & uVar43;
      auVar93._0_4_ = -(uint)((uint)uVar87 == __xmm_7f8000007f8000007f8000007f800000);
      auVar93._4_4_ = -(uint)((uint)(uVar87 >> 0x20) == _UNK_1506896e4);
      auVar93._8_4_ = -(uint)((uint)uVar100 == _UNK_1506896e8);
      auVar93._12_4_ = -(uint)((uint)(uVar100 >> 0x20) == _UNK_1506896ec);
      auVar178 = ~auVar93 & auVar45 & ___xmm_00000001000000010000000100000001;
      auVar53._0_4_ = auVar178._0_4_ << 0x1f;
      auVar53._4_4_ = auVar178._4_4_ << 0x1f;
      auVar53._8_4_ = auVar178._8_4_ << 0x1f;
      auVar53._12_4_ = auVar178._12_4_ << 0x1f;
      iVar31 = movmskps(iVar31,auVar53);
      if (iVar31 == 0) {
        auVar56._8_4_ = 0xffffffff;
        auVar56._0_8_ = 0xffffffffffffffff;
        auVar56._12_4_ = 0xffffffff;
        auVar93 = auVar93 ^ auVar56;
        iVar31 = 0;
      }
      else {
        auVar178 = blendvps(auVar140,auVar25,auVar93);
        uVar99 = uVar99 & uVar43;
        auVar54._0_4_ =
             -(uint)((uint)(auVar129._0_8_ & uVar26) == __xmm_7f8000007f8000007f8000007f800000);
        auVar54._4_4_ = -(uint)((uint)((auVar129._0_8_ & uVar26) >> 0x20) == _UNK_1506896e4);
        auVar54._8_4_ = -(uint)((uint)uVar99 == _UNK_1506896e8);
        auVar54._12_4_ = -(uint)((uint)(uVar99 >> 0x20) == _UNK_1506896ec);
        auVar93 = blendvps(auVar178,auVar25,auVar54);
        auVar45 = auVar45 & ___xmm_00000001000000010000000100000001 & auVar93;
        auVar104._0_4_ = auVar45._0_4_ << 0x1f;
        auVar104._4_4_ = auVar45._4_4_ << 0x1f;
        auVar104._8_4_ = auVar45._8_4_ << 0x1f;
        auVar104._12_4_ = auVar45._12_4_ << 0x1f;
        iVar31 = movmskps(iVar31,auVar104);
        if (iVar31 != 0) {
          auVar94._0_4_ = (auVar93._0_4_ << 0x1f) >> 0x1f;
          auVar94._4_4_ = (auVar93._4_4_ << 0x1f) >> 0x1f;
          auVar94._8_4_ = (auVar93._8_4_ << 0x1f) >> 0x1f;
          auVar94._12_4_ = (auVar93._12_4_ << 0x1f) >> 0x1f;
          auVar55._0_4_ =
               -(uint)((uint)(auVar110._0_8_ & uVar26) == __xmm_7f8000007f8000007f8000007f800000);
          auVar55._4_4_ = -(uint)((uint)((auVar110._0_8_ & uVar26) >> 0x20) == _UNK_1506896e4);
          auVar55._8_4_ = -(uint)((uint)(auVar139._0_8_ & uVar43) == _UNK_1506896e8);
          auVar55._12_4_ = -(uint)((uint)((auVar139._0_8_ & uVar43) >> 0x20) == _UNK_1506896ec);
          auVar93 = blendvps(auVar94 & auVar140,auVar25,auVar55);
        }
      }
      auVar45 = packssdw(auVar140,auVar140);
      auVar178 = packsswb(auVar45,auVar45);
      auVar45 = pshufb(auVar93,___xmm_0000000000000000000000000c080400);
      auVar45 = psllw(auVar45,7);
      auVar45 = auVar45 & ___xmm_80808080808080808080808080808080;
      auVar66 = SUB1615((undefined1  [16])0x0,1);
      auVar166[0] = -(auVar45[0] < '\0');
      auVar166[1] = -(auVar45[1] < '\0');
      auVar166[2] = -(auVar45[2] < '\0');
      auVar166[3] = -(auVar45[3] < '\0');
      auVar166[4] = -(auVar45[4] < '\0');
      auVar166[5] = -(auVar45[5] < '\0');
      auVar166[6] = -(auVar45[6] < '\0');
      auVar166[7] = -(auVar45[7] < '\0');
      auVar166[8] = -(auVar45[8] < '\0');
      auVar166[9] = -(auVar45[9] < auVar66[8]);
      auVar166[10] = -(auVar45[10] < auVar66[9]);
      auVar166[0xb] = -(auVar45[0xb] < auVar66[10]);
      auVar166[0xc] = -(auVar45[0xc] < auVar66[0xb]);
      auVar166[0xd] = -(auVar45[0xd] < auVar66[0xc]);
      auVar166[0xe] = -(auVar45[0xe] < auVar66[0xd]);
      auVar166[0xf] = -(auVar45[0xf] < auVar66[0xe]);
      auVar166 = auVar166 & auVar178;
      auVar178 = pmovzxbd(auVar178,auVar166);
      auVar45 = auVar178 & auVar138;
      auVar57._0_4_ = auVar45._0_4_ << 0x1f;
      auVar57._4_4_ = auVar45._4_4_ << 0x1f;
      auVar57._8_4_ = auVar45._8_4_ << 0x1f;
      auVar57._12_4_ = auVar45._12_4_ << 0x1f;
      iVar31 = movmskps(iVar31,auVar57);
      if (iVar31 != 0) {
        auVar141._0_4_ = (auVar178._0_4_ << 0x1f) >> 0x1f;
        auVar141._4_4_ = (auVar178._4_4_ << 0x1f) >> 0x1f;
        auVar141._8_4_ = (auVar178._8_4_ << 0x1f) >> 0x1f;
        auVar141._12_4_ = (auVar178._12_4_ << 0x1f) >> 0x1f;
        auVar141 = auVar141 & auVar138;
        uVar99 = CONCAT44(fVar153,fVar71) & uVar26;
        uVar87 = CONCAT44(fVar142,fVar67) & uVar43;
        auVar95._0_4_ = -(uint)((uint)uVar99 == __xmm_7f8000007f8000007f8000007f800000);
        auVar95._4_4_ = -(uint)((uint)(uVar99 >> 0x20) == _UNK_1506896e4);
        auVar95._8_4_ = -(uint)((uint)uVar87 == _UNK_1506896e8);
        auVar95._12_4_ = -(uint)((uint)(uVar87 >> 0x20) == _UNK_1506896ec);
        auVar178 = ~auVar95 & auVar45 & ___xmm_00000001000000010000000100000001;
        auVar58._0_4_ = auVar178._0_4_ << 0x1f;
        auVar58._4_4_ = auVar178._4_4_ << 0x1f;
        auVar58._8_4_ = auVar178._8_4_ << 0x1f;
        auVar58._12_4_ = auVar178._12_4_ << 0x1f;
        iVar31 = movmskps(iVar31,auVar58);
        if (iVar31 == 0) {
          auVar61._8_4_ = 0xffffffff;
          auVar61._0_8_ = 0xffffffffffffffff;
          auVar61._12_4_ = 0xffffffff;
          auVar95 = auVar95 ^ auVar61;
        }
        else {
          auVar178 = blendvps(auVar141,auVar25,auVar95);
          uVar99 = CONCAT44(fVar185,fVar183) & uVar26;
          uVar87 = CONCAT44(fVar41,fVar68) & uVar43;
          auVar59._0_4_ = -(uint)((uint)uVar99 == __xmm_7f8000007f8000007f8000007f800000);
          auVar59._4_4_ = -(uint)((uint)(uVar99 >> 0x20) == _UNK_1506896e4);
          auVar59._8_4_ = -(uint)((uint)uVar87 == _UNK_1506896e8);
          auVar59._12_4_ = -(uint)((uint)(uVar87 >> 0x20) == _UNK_1506896ec);
          auVar95 = blendvps(auVar178,auVar25,auVar59);
          auVar45 = auVar45 & ___xmm_00000001000000010000000100000001 & auVar95;
          auVar105._0_4_ = auVar45._0_4_ << 0x1f;
          auVar105._4_4_ = auVar45._4_4_ << 0x1f;
          auVar105._8_4_ = auVar45._8_4_ << 0x1f;
          auVar105._12_4_ = auVar45._12_4_ << 0x1f;
          iVar31 = movmskps(iVar31,auVar105);
          if (iVar31 != 0) {
            auVar96._0_4_ = (auVar95._0_4_ << 0x1f) >> 0x1f;
            auVar96._4_4_ = (auVar95._4_4_ << 0x1f) >> 0x1f;
            auVar96._8_4_ = (auVar95._8_4_ << 0x1f) >> 0x1f;
            auVar96._12_4_ = (auVar95._12_4_ << 0x1f) >> 0x1f;
            uVar72 = uVar72 & uVar43;
            auVar60._0_4_ =
                 -(uint)((uint)(auVar152._0_8_ & uVar26) == __xmm_7f8000007f8000007f8000007f800000);
            auVar60._4_4_ = -(uint)((uint)((auVar152._0_8_ & uVar26) >> 0x20) == _UNK_1506896e4);
            auVar60._8_4_ = -(uint)((uint)uVar72 == _UNK_1506896e8);
            auVar60._12_4_ = -(uint)((uint)(uVar72 >> 0x20) == _UNK_1506896ec);
            auVar95 = blendvps(auVar96 & auVar141,auVar25,auVar60);
          }
        }
        auVar45 = pshufb(auVar95,___xmm_0000000000000000000000000c080400);
        auVar178 = packssdw(auVar141,auVar141);
        auVar45 = psllw(auVar45,7);
        auVar45 = auVar45 & ___xmm_80808080808080808080808080808080;
        auVar166 = packsswb(auVar178,auVar178);
        auVar66 = SUB1615((undefined1  [16])0x0,1);
        auVar167[0] = -(auVar45[0] < '\0');
        auVar167[1] = -(auVar45[1] < '\0');
        auVar167[2] = -(auVar45[2] < '\0');
        auVar167[3] = -(auVar45[3] < '\0');
        auVar167[4] = -(auVar45[4] < '\0');
        auVar167[5] = -(auVar45[5] < '\0');
        auVar167[6] = -(auVar45[6] < '\0');
        auVar167[7] = -(auVar45[7] < '\0');
        auVar167[8] = -(auVar45[8] < '\0');
        auVar167[9] = -(auVar45[9] < auVar66[8]);
        auVar167[10] = -(auVar45[10] < auVar66[9]);
        auVar167[0xb] = -(auVar45[0xb] < auVar66[10]);
        auVar167[0xc] = -(auVar45[0xc] < auVar66[0xb]);
        auVar167[0xd] = -(auVar45[0xd] < auVar66[0xc]);
        auVar167[0xe] = -(auVar45[0xe] < auVar66[0xd]);
        auVar167[0xf] = -(auVar45[0xf] < auVar66[0xe]);
        auVar166 = auVar167 & auVar166;
      }
    }
    auVar45 = packssdw(auVar138,auVar138);
    auVar45 = packsswb(auVar45,auVar45);
    auVar179 = pblendvb(auVar179,auVar166 & ___xmm_00000000000000000000000001010101,auVar45);
    if ((~bVar30 & 0xf) == 0) {
      auVar62._4_4_ = fVar187;
      auVar62._0_4_ = fVar186;
      auVar62._8_8_ = CONCAT44(fVar125,fVar112);
      auVar45 = insertps(auVar62,auVar129,0x30);
      auVar82._4_4_ = fVar40;
      auVar82._0_4_ = fVar184;
      auVar82._8_4_ = fVar69;
      auVar82._12_4_ = fVar70;
      auVar45 = insertps(auVar45,auVar110,0x20);
      *(int *)*pauVar2 = auVar45._0_4_;
      *(int *)(*pauVar2 + 4) = auVar45._12_4_;
      *(int *)(*pauVar2 + 8) = auVar45._8_4_;
      *(int *)(*pauVar2 + 0xc) = auVar45._4_4_;
      auVar21._4_4_ = fVar187;
      auVar21._0_4_ = fVar186;
      auVar21._8_4_ = fVar112;
      auVar21._12_4_ = fVar125;
      auVar45 = blendps(auVar82,auVar21,4);
      *(int *)pauVar2[1] = auVar45._0_4_;
      *(int *)(pauVar2[1] + 4) = auVar45._12_4_;
      *(int *)(pauVar2[1] + 8) = auVar45._8_4_;
      *(int *)(pauVar2[1] + 0xc) = auVar45._4_4_;
      *(float *)pauVar2[2] = fVar133;
      *(float *)(pauVar2[2] + 4) = fVar125;
      *(float *)(pauVar2[2] + 8) = fVar132;
      *(float *)(pauVar2[2] + 0xc) = fVar143;
      auVar63._4_4_ = fVar153;
      auVar63._0_4_ = fVar71;
      auVar63._8_8_ = CONCAT44(fVar142,fVar67);
      auVar17._4_4_ = fVar185;
      auVar17._0_4_ = fVar183;
      auVar17._8_4_ = fVar68;
      auVar17._12_4_ = fVar41;
      auVar45 = insertps(auVar63,auVar17,0x30);
      auVar45 = insertps(auVar45,auVar152,0x20);
      *pfVar33 = auVar45._0_4_;
      pfVar33[1] = auVar45._12_4_;
      pfVar33[2] = auVar45._8_4_;
      pfVar33[3] = auVar45._4_4_;
      auVar64._4_4_ = fVar68;
      auVar64._0_4_ = fVar185;
      auVar64._8_4_ = fVar147;
      auVar64._12_4_ = fVar154;
      auVar9._4_4_ = fVar153;
      auVar9._0_4_ = fVar71;
      auVar9._8_4_ = fVar67;
      auVar9._12_4_ = fVar142;
      auVar45 = blendps(auVar64,auVar9,4);
      puVar3 = (undefined4 *)(param_2 + 0x10 + uVar29 * 0xc);
      *puVar3 = auVar45._0_4_;
      puVar3[1] = auVar45._12_4_;
      puVar3[2] = auVar45._8_4_;
      puVar3[3] = auVar45._4_4_;
      pfVar33 = (float *)(param_2 + 0x20 + uVar29 * 0xc);
      *pfVar33 = fVar124;
      pfVar33[1] = fVar142;
      pfVar33[2] = fVar41;
      pfVar33[3] = fVar42;
    }
    else {
      if ((bVar30 & 1) != 0) {
        *(float *)*pauVar2 = fVar186;
      }
      if ((bVar30 & 2) != 0) {
        auVar20._4_4_ = fVar187;
        auVar20._0_4_ = fVar186;
        auVar20._8_4_ = fVar112;
        auVar20._12_4_ = fVar125;
        uVar4 = extractps(auVar20,1);
        *(undefined8 *)(*pauVar2 + 0xc) = uVar4;
      }
      if ((bVar30 & 4) != 0) {
        auVar19._4_4_ = fVar187;
        auVar19._0_4_ = fVar186;
        auVar19._8_4_ = fVar112;
        auVar19._12_4_ = fVar125;
        uVar4 = extractps(auVar19,2);
        *(undefined8 *)(pauVar2[1] + 8) = uVar4;
      }
      if ((char)bVar30 < '\0') {
        auVar18._4_4_ = fVar187;
        auVar18._0_4_ = fVar186;
        auVar18._8_4_ = fVar112;
        auVar18._12_4_ = fVar125;
        uVar4 = extractps(auVar18,3);
        *(undefined8 *)(pauVar2[2] + 4) = uVar4;
      }
      if ((bVar30 & 1) != 0) {
        *(float *)(*pauVar2 + 4) = fVar182;
      }
      if ((bVar30 & 2) != 0) {
        uVar4 = extractps(auVar129,1);
        *(undefined8 *)pauVar2[1] = uVar4;
      }
      if ((bVar30 & 4) != 0) {
        uVar4 = extractps(auVar129,2);
        *(undefined8 *)(pauVar2[1] + 0xc) = uVar4;
      }
      if ((char)bVar30 < '\0') {
        uVar4 = extractps(auVar129,3);
        *(undefined8 *)(pauVar2[2] + 8) = uVar4;
      }
      if ((bVar30 & 1) != 0) {
        *(float *)(*pauVar2 + 8) = fVar69;
      }
      if ((bVar30 & 2) != 0) {
        uVar4 = extractps(auVar110,1);
        *(undefined8 *)(pauVar2[1] + 4) = uVar4;
      }
      if ((bVar30 & 4) != 0) {
        uVar4 = extractps(auVar110,2);
        *(undefined8 *)pauVar2[2] = uVar4;
      }
      if ((char)bVar30 < '\0') {
        uVar4 = extractps(auVar110,3);
        *(undefined8 *)(pauVar2[2] + 0xc) = uVar4;
      }
      if ((bVar30 & 1) != 0) {
        *pfVar33 = fVar71;
      }
      if ((bVar30 & 2) != 0) {
        auVar8._4_4_ = fVar153;
        auVar8._0_4_ = fVar71;
        auVar8._8_4_ = fVar67;
        auVar8._12_4_ = fVar142;
        uVar4 = extractps(auVar8,1);
        *(undefined8 *)(param_2 + 0xc + uVar29 * 0xc) = uVar4;
      }
      if ((bVar30 & 4) != 0) {
        auVar7._4_4_ = fVar153;
        auVar7._0_4_ = fVar71;
        auVar7._8_4_ = fVar67;
        auVar7._12_4_ = fVar142;
        uVar4 = extractps(auVar7,2);
        *(undefined8 *)(param_2 + 0x18 + uVar29 * 0xc) = uVar4;
      }
      if ((char)bVar30 < '\0') {
        auVar6._4_4_ = fVar153;
        auVar6._0_4_ = fVar71;
        auVar6._8_4_ = fVar67;
        auVar6._12_4_ = fVar142;
        uVar4 = extractps(auVar6,3);
        *(undefined8 *)(param_2 + 0x24 + uVar29 * 0xc) = uVar4;
      }
      if ((bVar30 & 1) != 0) {
        *(float *)(param_2 + 4 + uVar29 * 0xc) = fVar183;
      }
      if ((bVar30 & 2) != 0) {
        auVar16._4_4_ = fVar185;
        auVar16._0_4_ = fVar183;
        auVar16._8_4_ = fVar68;
        auVar16._12_4_ = fVar41;
        uVar4 = extractps(auVar16,1);
        *(undefined8 *)(param_2 + 0x10 + uVar29 * 0xc) = uVar4;
      }
      if ((bVar30 & 4) != 0) {
        auVar15._4_4_ = fVar185;
        auVar15._0_4_ = fVar183;
        auVar15._8_4_ = fVar68;
        auVar15._12_4_ = fVar41;
        uVar4 = extractps(auVar15,2);
        *(undefined8 *)(param_2 + 0x1c + uVar29 * 0xc) = uVar4;
      }
      if ((char)bVar30 < '\0') {
        auVar14._4_4_ = fVar185;
        auVar14._0_4_ = fVar183;
        auVar14._8_4_ = fVar68;
        auVar14._12_4_ = fVar41;
        uVar4 = extractps(auVar14,3);
        *(undefined8 *)(param_2 + 0x28 + uVar29 * 0xc) = uVar4;
      }
      if ((bVar30 & 1) != 0) {
        *(float *)(param_2 + 8 + uVar29 * 0xc) = fVar147;
      }
      if ((bVar30 & 2) != 0) {
        uVar4 = extractps(auVar152,1);
        *(undefined8 *)(param_2 + 0x14 + uVar29 * 0xc) = uVar4;
      }
      if ((bVar30 & 4) != 0) {
        uVar4 = extractps(auVar152,2);
        *(undefined8 *)(param_2 + 0x20 + uVar29 * 0xc) = uVar4;
      }
      if ((char)bVar30 < '\0') {
        uVar4 = extractps(auVar152,3);
        *(undefined8 *)(param_2 + 0x2c + uVar29 * 0xc) = uVar4;
      }
    }
    param_5 = (uint)local_268;
  }
  auVar179 = auVar179 & ___xmm_00000000000000000000000001010101;
  auVar66 = SUB1615((undefined1  [16])0x0,1);
  auVar65[0] = -(auVar179[0] == '\0');
  auVar65[1] = -(auVar179[1] == '\0');
  auVar65[2] = -(auVar179[2] == '\0');
  auVar65[3] = -(auVar179[3] == '\0');
  auVar65[4] = -(auVar179[4] == '\0');
  auVar65[5] = -(auVar179[5] == '\0');
  auVar65[6] = -(auVar179[6] == '\0');
  auVar65[7] = -(auVar179[7] == '\0');
  auVar65[8] = -(auVar179[8] == '\0');
  auVar65[9] = -(auVar66[8] == auVar179[9]);
  auVar65[10] = -(auVar66[9] == auVar179[10]);
  auVar65[0xb] = -(auVar66[10] == auVar179[0xb]);
  auVar65[0xc] = -(auVar66[0xb] == auVar179[0xc]);
  auVar65[0xd] = -(auVar66[0xc] == auVar179[0xd]);
  auVar65[0xe] = -(auVar66[0xd] == auVar179[0xe]);
  auVar65[0xf] = -(auVar66[0xe] == auVar179[0xf]);
  auVar45 = pmovsxbd(auVar65,auVar65);
  iVar31 = movmskps(param_5,auVar45);
  return CONCAT31((int3)((uint)iVar31 >> 8),iVar31 == 0);
}


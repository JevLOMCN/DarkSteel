// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 13

// ApplyRotationDelta2___un_3C_s_5B_unFPBDJointSolver_5D__3E_REFs_5B__c_unFVector_5D_REFs_5B__c_unFVector_5D__avx2 @ 1409e7350

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyRotationDelta2___un_3C_s_5B_unFPBDJointSolver_5D__3E_REFs_5B__c_unFVector_5D_REFs_5B__c_unFVector_5D__avx2
               (undefined1 (*param_1) [24],double *param_2,double *param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [24];
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar8;
  double dVar9;
  double dVar16;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar48 [32];
  undefined1 auVar50 [32];
  ulonglong uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar61;
  undefined1 auVar55 [32];
  undefined1 auVar57 [32];
  double dVar62;
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  double dVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  double dVar69;
  double dVar70;
  double dVar71;
  double dVar72;
  double dVar73;
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  double dVar81;
  double dVar82;
  double dVar83;
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  double dVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  double dVar97;
  undefined1 auVar98 [16];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar7 [32];
  undefined1 auVar15 [32];
  undefined1 auVar25 [32];
  undefined1 auVar34 [32];
  undefined1 auVar37 [32];
  undefined1 auVar47 [32];
  undefined1 auVar49 [32];
  undefined1 auVar56 [32];
  undefined1 auVar60 [32];
  undefined1 auVar68 [32];
  undefined1 auVar80 [32];
  undefined1 auVar91 [32];
  undefined1 auVar96 [32];
  undefined1 auVar99 [32];
  
  dVar97 = _UNK_150b54438;
  dVar92 = _UNK_150b54430;
  dVar9 = _UNK_150b54428;
  dVar82 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar81 = _UNK_150b54418;
  dVar3 = _UNK_150b54410;
  dVar18 = _UNK_150b54408;
  dVar17 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar16 = _UNK_15076c6f8;
  dVar8 = ___xmm_bff00000000000003ff0000000000000;
  if (0.0 < *(double *)param_1[10]) {
    dVar38 = *param_2;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = *(ulonglong *)(param_1[0x12] + 8);
    auVar19 = vmovhpd_avx(auVar19,*(undefined8 *)param_1[0x12]);
    auVar20._8_8_ = 0;
    auVar20._0_8_ = *(ulonglong *)(param_1[0x11] + 0x10);
    auVar10 = vmovhpd_avx(auVar20,*(undefined8 *)(param_1[0x11] + 8));
    dVar73 = param_2[1];
    dVar71 = param_2[2];
    dVar63 = (___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
              auVar10._0_8_ * dVar71 +
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
             *(double *)param_1[0x12] * dVar73 +
             *(double *)(param_1[0x11] + 8) * 0.0 +
             dVar38 * auVar19._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
             __real_3fe0000000000000 + *(double *)(param_1[0x11] + 8);
    dVar69 = (_UNK_150b54428 * auVar10._8_8_ * dVar71 +
             _UNK_150b54408 * *(double *)(param_1[0x12] + 8) * dVar73 +
             *(double *)(param_1[0x11] + 0x10) * 0.0 + dVar38 * auVar19._8_8_ * _UNK_15076c6f8) *
             __real_3fe0000000000000 + *(double *)(param_1[0x11] + 0x10);
    dVar70 = (_UNK_150b54430 * auVar19._0_8_ * dVar71 +
             _UNK_150b54410 * *(double *)(param_1[0x11] + 8) * dVar73 +
             *(double *)param_1[0x12] * 0.0 +
             dVar38 * auVar10._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
             __real_3fe0000000000000 + *(double *)param_1[0x12];
    dVar73 = (_UNK_150b54438 * auVar19._8_8_ * dVar71 +
             _UNK_150b54418 * *(double *)(param_1[0x11] + 0x10) * dVar73 +
             *(double *)(param_1[0x12] + 8) * 0.0 + dVar38 * auVar10._8_8_ * _UNK_15076c6f8) *
             __real_3fe0000000000000 + *(double *)(param_1[0x12] + 8);
    auVar39._0_8_ = dVar63 * dVar63 + dVar70 * dVar70;
    auVar39._8_8_ = dVar69 * dVar69 + dVar73 * dVar73;
    auVar19 = vshufpd_avx(auVar39,auVar39,1);
    dVar38 = auVar39._0_8_ + auVar19._0_8_;
    auVar52._8_8_ = 0;
    auVar52._0_8_ = __real_3e45798ee2308c3a;
    auVar40._8_8_ = 0;
    auVar40._0_8_ = dVar38;
    auVar19 = vcmpsd_avx(auVar52,auVar40,6);
    uVar51 = ~auVar19._0_8_ & __real_ffffffffffffffff;
    dVar38 = __real_3ff0000000000000 / SQRT(dVar38);
    auVar74._0_8_ =
         (double)(((ulonglong)(dVar63 * dVar38) ^
                  ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) & uVar51)
    ;
    auVar74._8_8_ = (double)(((ulonglong)(dVar69 * dVar38) ^ _UNK_150b54548) & uVar51);
    dVar69 = (double)(((ulonglong)(dVar70 * dVar38) ^ _UNK_150b54550) & uVar51);
    dVar83 = (double)(((ulonglong)(dVar73 * dVar38) ^ _UNK_150b54558) & uVar51);
    auVar55._0_8_ =
         (double)((ulonglong)auVar74._0_8_ ^
                 ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
    auVar55._8_8_ = (double)((ulonglong)auVar74._8_8_ ^ _UNK_150b54548);
    auVar55._16_8_ = (double)((ulonglong)dVar69 ^ _UNK_150b54550);
    auVar55._24_8_ = (double)((ulonglong)dVar83 ^ _UNK_150b54558);
    auVar19 = vshufps_avx(auVar74,auVar74,0x4e);
    auVar20 = auVar55._16_16_;
    auVar10 = vshufps_avx(auVar20,auVar20,0x4e);
    uVar1 = vmovlpd_avx(auVar74);
    *(undefined8 *)(param_1[0x11] + 8) = uVar1;
    uVar1 = vmovlpd_avx(auVar19);
    *(undefined8 *)(param_1[0x11] + 0x10) = uVar1;
    uVar1 = vmovlpd_avx(auVar20);
    *(undefined8 *)param_1[0x12] = uVar1;
    uVar1 = vmovlpd_avx(auVar10);
    *(undefined8 *)(param_1[0x12] + 8) = uVar1;
    auVar19 = *(undefined1 (*) [16])(param_1[1] + 8);
    auVar93._8_8_ = 0;
    auVar93._0_8_ = *(ulonglong *)(param_1[1] + 8);
    uVar1 = *(undefined8 *)(param_1[2] + 8);
    auVar98._8_8_ = uVar1;
    auVar98._0_8_ = uVar1;
    auVar99._16_8_ = uVar1;
    auVar99._0_16_ = auVar98;
    auVar99._24_8_ = uVar1;
    auVar10 = vunpcklpd_avx(auVar93,auVar98);
    auVar31 = vpermpd_avx2(auVar55,0xc9);
    auVar101._16_8_ = *(double *)param_1[2];
    auVar101._0_16_ = auVar19;
    auVar101._24_8_ = 0;
    auVar32 = vblendpd_avx(auVar101,auVar99,8);
    dVar38 = auVar55._0_8_ * SUB168(*(undefined1 (*) [16])(param_1[1] + 0x10),0) -
             auVar31._0_8_ * auVar32._0_8_;
    dVar73 = auVar55._8_8_ * SUB168(*(undefined1 (*) [16])(param_1[1] + 0x10),8) -
             auVar31._8_8_ * auVar32._8_8_;
    dVar71 = auVar55._16_8_ * auVar10._0_8_ - auVar31._16_8_ * auVar32._16_8_;
    dVar63 = auVar55._24_8_ * auVar10._8_8_ - auVar31._24_8_ * auVar32._24_8_;
    auVar88._0_8_ = dVar38 + dVar38;
    auVar88._8_8_ = dVar73 + dVar73;
    auVar88._16_8_ = dVar71 + dVar71;
    auVar88._24_8_ = dVar63 + dVar63;
    auVar32 = vpermpd_avx2(auVar55,0xff);
    auVar31 = vpermpd_avx2(auVar88,0xc9);
    dVar70 = auVar32._0_8_;
    dVar61 = auVar32._8_8_;
    dVar62 = auVar32._16_8_;
    dVar72 = auVar32._24_8_;
    auVar32 = vpermpd_avx2(auVar88,0xd2);
    auVar89._0_8_ = auVar88._0_8_ * auVar74._0_8_;
    auVar89._8_8_ = auVar88._8_8_ * auVar74._8_8_;
    auVar89._16_8_ = auVar88._16_8_ * dVar69;
    auVar89._24_8_ = auVar88._24_8_ * dVar83;
    auVar34 = vpermpd_avx2(auVar89,0xc9);
    auVar90._0_8_ = auVar74._0_8_ * auVar32._0_8_ - auVar34._0_8_;
    auVar90._8_8_ = auVar74._8_8_ * auVar32._8_8_ - auVar34._8_8_;
    auVar90._16_8_ = dVar69 * auVar32._16_8_ - auVar34._16_8_;
    auVar90._24_8_ = dVar83 * auVar32._24_8_ - auVar34._24_8_;
    auVar32 = vpermpd_avx2(auVar90,0xc9);
    auVar84._0_8_ =
         *(double *)(param_1[0xf] + 8) + dVar70 * auVar31._0_8_ + auVar19._0_8_ + auVar32._0_8_;
    auVar84._8_8_ =
         *(double *)(param_1[0xf] + 0x10) + dVar61 * auVar31._8_8_ + auVar19._8_8_ + auVar32._8_8_;
    auVar91._16_8_ =
         *(double *)param_1[0x10] + dVar62 * auVar31._16_8_ + *(double *)param_1[2] + auVar32._16_8_
    ;
    auVar91._0_16_ = auVar84;
    auVar91._24_8_ = dVar72 * auVar31._24_8_ + 0.0 + auVar32._24_8_ + 0.0;
    *(undefined1 (*) [16])(param_1[10] + 0x10) = auVar84;
    uVar1 = vmovlpd_avx(auVar91._16_16_);
    *(undefined8 *)(param_1[0xb] + 8) = uVar1;
    auVar85._8_8_ = 0;
    auVar85._0_8_ = *(ulonglong *)param_1[1];
    auVar19 = vmovhpd_avx(auVar85,*(undefined8 *)(*param_1 + 0x10));
    auVar94._8_8_ = 0;
    auVar94._0_8_ = *(ulonglong *)(*param_1 + 8);
    auVar10 = vmovhpd_avx(auVar94,*(undefined8 *)*param_1);
    dVar73 = *(double *)(*param_1 + 8);
    auVar2 = *param_1;
    dVar38 = *(double *)param_1[1];
    auVar32 = vpermpd_avx2(auVar55,0x55);
    dVar71 = *(double *)param_1[1];
    dVar63 = *(double *)*param_1;
    dVar69 = *(double *)(*param_1 + 8);
    auVar31 = vpermpd_avx2(auVar55,0xaa);
    *(double *)(param_1[0xc] + 0x10) =
         dVar82 * auVar10._0_8_ * auVar31._0_8_ +
         dVar17 * *(double *)(*param_1 + 0x10) * auVar32._0_8_ +
         dVar70 * *(double *)*param_1 + auVar19._0_8_ * auVar74._0_8_ * dVar8;
    *(double *)param_1[0xd] =
         dVar9 * auVar10._8_8_ * auVar31._8_8_ +
         dVar18 * dVar71 * auVar32._8_8_ + dVar61 * dVar73 + auVar19._8_8_ * auVar74._0_8_ * dVar16;
    *(double *)(param_1[0xd] + 8) =
         dVar92 * auVar19._0_8_ * auVar31._16_8_ +
         dVar3 * dVar63 * auVar32._16_8_ +
         dVar62 * auVar2._16_8_ + auVar10._0_8_ * auVar74._0_8_ * dVar8;
    *(double *)(param_1[0xd] + 0x10) =
         dVar97 * auVar19._8_8_ * auVar31._24_8_ +
         dVar81 * dVar69 * auVar32._24_8_ + dVar72 * dVar38 + auVar10._8_8_ * auVar74._0_8_ * dVar16
    ;
    dVar8 = auVar55._0_8_ + auVar55._0_8_;
    dVar16 = auVar55._8_8_ + auVar55._8_8_;
    dVar17 = auVar55._16_8_ + auVar55._16_8_;
    dVar18 = auVar55._24_8_ + auVar55._24_8_;
    auVar31._0_8_ = auVar74._0_8_ * dVar8;
    auVar31._8_8_ = auVar74._0_8_ * dVar16;
    auVar31._16_8_ = auVar74._0_8_ * dVar17;
    auVar31._24_8_ = auVar74._0_8_ * dVar18;
    auVar53._0_8_ = auVar32._0_8_ * dVar8;
    auVar53._8_8_ = auVar32._8_8_ * dVar16;
    auVar56._16_8_ = auVar32._16_8_ * dVar17;
    auVar56._0_16_ = auVar53;
    auVar56._24_8_ = auVar32._24_8_ * dVar18;
    auVar66._0_8_ = dVar8 * dVar70;
    auVar66._8_8_ = dVar16 * dVar61;
    auVar66._16_8_ = dVar17 * dVar62;
    auVar66._24_8_ = dVar18 * dVar72;
    auVar32 = vperm2f128_avx(auVar56,auVar31,0x21);
    auVar32 = vshufpd_avx(auVar32,ZEXT1632(auVar31._16_16_),4);
    auVar10._0_8_ = auVar66._0_8_ + auVar32._0_8_;
    auVar10._8_8_ = auVar66._8_8_ + auVar32._8_8_;
    auVar15._16_8_ = auVar66._16_8_ + auVar32._16_8_;
    auVar15._0_16_ = auVar10;
    auVar15._24_8_ = auVar66._24_8_ + auVar32._24_8_;
    auVar34 = vsubpd_avx(auVar32,auVar66);
    auVar19 = vshufpd_avx(auVar53,auVar53,1);
    auVar32._8_8_ = auVar31._0_8_;
    auVar32._0_8_ = auVar31._0_8_;
    auVar32._16_8_ = auVar31._0_8_;
    auVar32._24_8_ = auVar31._0_8_;
    auVar32 = vblendpd_avx(auVar32,ZEXT1632(auVar19),1);
    auVar31 = vpermpd_avx2(auVar56,0x55);
    auVar31 = vblendpd_avx(ZEXT1632(CONCAT88(auVar55._16_8_ * dVar17,auVar55._16_8_ * dVar17)),
                           auVar31,0xc);
    auVar33._0_8_ = auVar32._0_8_ + auVar31._0_8_;
    auVar33._8_8_ = auVar32._8_8_ + auVar31._8_8_;
    auVar33._16_8_ = auVar32._16_8_ + auVar31._16_8_;
    auVar33._24_8_ = auVar32._24_8_ + auVar31._24_8_;
    auVar45._8_8_ = __real_3ff0000000000000;
    auVar45._0_8_ = __real_3ff0000000000000;
    auVar45._16_8_ = __real_3ff0000000000000;
    auVar45._24_8_ = __real_3ff0000000000000;
    auVar31 = vsubpd_avx(auVar45,auVar33);
    dVar17 = auVar31._0_8_;
    dVar8 = *(double *)param_1[8];
    dVar16 = *(double *)(param_1[8] + 0x10);
    auVar19 = vmovhpd_avx(ZEXT816(0) << 0x40,*(undefined8 *)(param_1[8] + 8));
    auVar32 = vpermpd_avx2(auVar34,0xaa);
    dVar18 = auVar19._0_8_;
    dVar3 = auVar19._8_8_;
    auVar33 = vpermpd_avx2(auVar15,0x55);
    auVar67._0_8_ = auVar33._0_8_ * 0.0 + dVar18 * auVar32._0_8_ + dVar8 * dVar17;
    auVar67._8_8_ = auVar33._8_8_ * 0.0 + dVar3 * auVar32._8_8_ + dVar17 * 0.0;
    auVar67._16_8_ = dVar16 * auVar33._16_8_ + auVar32._16_8_ * 0.0 + dVar17 * 0.0;
    auVar67._24_8_ = auVar33._24_8_ * 0.0 + auVar32._24_8_ * 0.0 + dVar17 * 0.0;
    auVar32 = vpermpd_avx2(auVar15,0xaa);
    auVar33 = vpermpd_avx2(auVar31,0x55);
    dVar17 = auVar34._0_8_;
    auVar57._0_8_ = dVar17 * 0.0 + dVar8 * auVar32._0_8_ + dVar18 * auVar33._0_8_;
    auVar57._8_8_ = dVar17 * 0.0 + auVar32._8_8_ * 0.0 + dVar3 * auVar33._8_8_;
    auVar57._16_8_ = dVar16 * dVar17 + auVar32._16_8_ * 0.0 + auVar33._16_8_ * 0.0;
    auVar57._24_8_ = dVar17 * 0.0 + auVar32._24_8_ * 0.0 + auVar33._24_8_ * 0.0;
    auVar32 = vpermpd_avx2(auVar34,0x55);
    auVar33 = vpermpd_avx2(auVar31,0xaa);
    auVar46._0_8_ = auVar33._0_8_ * 0.0 + auVar32._0_8_ * dVar8 + dVar18 * auVar10._0_8_;
    auVar46._8_8_ = auVar33._8_8_ * 0.0 + auVar32._8_8_ * 0.0 + dVar3 * auVar10._0_8_;
    auVar46._16_8_ = dVar16 * auVar33._16_8_ + auVar32._16_8_ * 0.0 + auVar10._0_8_ * 0.0;
    auVar46._24_8_ = auVar33._24_8_ * 0.0 + auVar32._24_8_ * 0.0 + auVar10._0_8_ * 0.0;
    auVar19 = vunpcklpd_avx(auVar31._0_16_,auVar15._16_16_);
    auVar32 = vblendpd_avx(ZEXT1632(auVar19),auVar32,0xc);
    auVar33 = vpermpd_avx2(auVar67,0x55);
    auVar19 = vblendpd_avx(auVar31._0_16_,auVar34._16_16_,1);
    dVar92 = auVar19._0_8_;
    dVar97 = auVar19._8_8_;
    dVar3 = auVar32._0_8_;
    dVar81 = auVar32._8_8_;
    dVar82 = auVar32._16_8_;
    dVar9 = auVar32._24_8_;
    auVar15 = vpermpd_avx2(auVar67,0xaa);
    auVar19 = vshufpd_avx(auVar10,auVar34._0_16_,1);
    auVar32 = vblendpd_avx(auVar31,ZEXT1632(auVar19),3);
    dVar8 = auVar32._0_8_;
    auVar64._0_8_ = dVar8 * auVar15._0_8_ + dVar3 * auVar67._0_8_ + dVar92 * auVar33._0_8_;
    dVar16 = auVar32._8_8_;
    auVar64._8_8_ = dVar16 * auVar15._8_8_ + dVar81 * auVar67._0_8_ + dVar97 * auVar33._8_8_;
    dVar17 = auVar32._16_8_;
    auVar68._16_8_ =
         dVar17 * auVar15._16_8_ + dVar82 * auVar67._0_8_ + auVar10._0_8_ * auVar33._16_8_;
    auVar68._0_16_ = auVar64;
    dVar18 = auVar32._24_8_;
    auVar68._24_8_ =
         dVar18 * auVar15._24_8_ + dVar9 * auVar67._0_8_ + auVar10._8_8_ * auVar33._24_8_;
    auVar32 = vpermpd_avx2(auVar57,0x55);
    auVar31 = vpermpd_avx2(auVar57,0xaa);
    auVar26._0_8_ = dVar8 * auVar31._0_8_ + dVar3 * auVar57._0_8_ + dVar92 * auVar32._0_8_;
    auVar26._8_8_ = dVar16 * auVar31._8_8_ + dVar81 * auVar57._0_8_ + dVar97 * auVar32._8_8_;
    auVar34._16_8_ =
         dVar17 * auVar31._16_8_ + dVar82 * auVar57._0_8_ + auVar10._0_8_ * auVar32._16_8_;
    auVar34._0_16_ = auVar26;
    auVar34._24_8_ =
         dVar18 * auVar31._24_8_ + dVar9 * auVar57._0_8_ + auVar10._8_8_ * auVar32._24_8_;
    auVar32 = vpermpd_avx2(auVar46,0x55);
    auVar31 = vpermpd_avx2(auVar46,0xaa);
    *(undefined1 (*) [16])param_1[0x18] = auVar64;
    uVar1 = vmovlpd_avx(auVar68._16_16_);
    *(undefined8 *)(param_1[0x18] + 0x10) = uVar1;
    auVar41._0_8_ = dVar8 * auVar31._0_8_ + dVar3 * auVar46._0_8_ + dVar92 * auVar32._0_8_;
    auVar41._8_8_ = dVar16 * auVar31._8_8_ + dVar81 * auVar46._0_8_ + dVar97 * auVar32._8_8_;
    auVar47._16_8_ =
         dVar17 * auVar31._16_8_ + dVar82 * auVar46._0_8_ + auVar10._0_8_ * auVar32._16_8_;
    auVar47._0_16_ = auVar41;
    auVar47._24_8_ =
         dVar18 * auVar31._24_8_ + dVar9 * auVar46._0_8_ + auVar10._8_8_ * auVar32._24_8_;
    *(undefined8 *)param_1[0x19] = 0;
    *(undefined1 (*) [16])(param_1[0x19] + 8) = auVar26;
    uVar1 = vmovlpd_avx(auVar34._16_16_);
    *(undefined8 *)param_1[0x1a] = uVar1;
    *(undefined8 *)(param_1[0x1a] + 8) = 0;
    *(undefined1 (*) [16])(param_1[0x1a] + 0x10) = auVar41;
    uVar1 = vmovlpd_avx(auVar47._16_16_);
    *(undefined8 *)(param_1[0x1b] + 8) = uVar1;
    *(undefined1 (*) [32])(param_1[0x1b] + 0x10) = ZEXT1632(ZEXT816(0));
    *(undefined8 *)param_1[0x1d] = 0x3ff0000000000000;
  }
  dVar97 = _UNK_150b54438;
  dVar92 = _UNK_150b54430;
  dVar9 = _UNK_150b54428;
  dVar82 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar81 = _UNK_150b54418;
  dVar3 = _UNK_150b54410;
  dVar18 = _UNK_150b54408;
  dVar17 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar16 = _UNK_15076c6f8;
  dVar8 = ___xmm_bff00000000000003ff0000000000000;
  if (0.0 < *(double *)(param_1[10] + 8)) {
    dVar38 = *param_3;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = *(ulonglong *)(param_1[0x13] + 0x10);
    auVar19 = vmovhpd_avx(auVar11,*(undefined8 *)(param_1[0x13] + 8));
    auVar12._8_8_ = 0;
    auVar12._0_8_ = *(ulonglong *)param_1[0x13];
    auVar10 = vmovhpd_avx(auVar12,*(undefined8 *)(param_1[0x12] + 0x10));
    dVar73 = param_3[1];
    dVar71 = param_3[2];
    dVar63 = (___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
              auVar10._0_8_ * dVar71 +
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
             *(double *)(param_1[0x13] + 8) * dVar73 +
             *(double *)(param_1[0x12] + 0x10) * 0.0 +
             dVar38 * auVar19._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
             __real_3fe0000000000000 + *(double *)(param_1[0x12] + 0x10);
    dVar69 = (_UNK_150b54428 * auVar10._8_8_ * dVar71 +
             _UNK_150b54408 * *(double *)(param_1[0x13] + 0x10) * dVar73 +
             *(double *)param_1[0x13] * 0.0 + dVar38 * auVar19._8_8_ * _UNK_15076c6f8) *
             __real_3fe0000000000000 + *(double *)param_1[0x13];
    dVar70 = (_UNK_150b54430 * auVar19._0_8_ * dVar71 +
             _UNK_150b54410 * *(double *)(param_1[0x12] + 0x10) * dVar73 +
             *(double *)(param_1[0x13] + 8) * 0.0 +
             dVar38 * auVar10._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
             __real_3fe0000000000000 + *(double *)(param_1[0x13] + 8);
    dVar73 = (_UNK_150b54438 * auVar19._8_8_ * dVar71 +
             _UNK_150b54418 * *(double *)param_1[0x13] * dVar73 +
             *(double *)(param_1[0x13] + 0x10) * 0.0 + dVar38 * auVar10._8_8_ * _UNK_15076c6f8) *
             __real_3fe0000000000000 + *(double *)(param_1[0x13] + 0x10);
    auVar27._0_8_ = dVar63 * dVar63 + dVar70 * dVar70;
    auVar27._8_8_ = dVar69 * dVar69 + dVar73 * dVar73;
    auVar19 = vshufpd_avx(auVar27,auVar27,1);
    dVar38 = auVar27._0_8_ + auVar19._0_8_;
    auVar42._8_8_ = 0;
    auVar42._0_8_ = __real_3e45798ee2308c3a;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = dVar38;
    auVar19 = vcmpsd_avx(auVar42,auVar28,6);
    uVar51 = ~auVar19._0_8_ & __real_ffffffffffffffff;
    dVar38 = __real_3ff0000000000000 / SQRT(dVar38);
    auVar65._0_8_ =
         (double)(((ulonglong)(dVar63 * dVar38) ^
                  ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) & uVar51)
    ;
    auVar65._8_8_ = (double)(((ulonglong)(dVar69 * dVar38) ^ _UNK_150b54548) & uVar51);
    dVar72 = (double)(((ulonglong)(dVar70 * dVar38) ^ _UNK_150b54550) & uVar51);
    dVar83 = (double)(((ulonglong)(dVar73 * dVar38) ^ _UNK_150b54558) & uVar51);
    auVar48._0_8_ =
         (double)((ulonglong)auVar65._0_8_ ^
                 ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
    auVar48._8_8_ = (double)((ulonglong)auVar65._8_8_ ^ _UNK_150b54548);
    auVar48._16_8_ = (double)((ulonglong)dVar72 ^ _UNK_150b54550);
    auVar48._24_8_ = (double)((ulonglong)dVar83 ^ _UNK_150b54558);
    auVar19 = vshufps_avx(auVar65,auVar65,0x4e);
    auVar20 = auVar48._16_16_;
    auVar10 = vshufps_avx(auVar20,auVar20,0x4e);
    uVar1 = vmovlpd_avx(auVar65);
    *(undefined8 *)(param_1[0x12] + 0x10) = uVar1;
    uVar1 = vmovlpd_avx(auVar19);
    *(undefined8 *)param_1[0x13] = uVar1;
    uVar1 = vmovlpd_avx(auVar20);
    *(undefined8 *)(param_1[0x13] + 8) = uVar1;
    uVar1 = vmovlpd_avx(auVar10);
    *(undefined8 *)(param_1[0x13] + 0x10) = uVar1;
    auVar19 = *(undefined1 (*) [16])(param_1[5] + 8);
    auVar86._8_8_ = 0;
    auVar86._0_8_ = *(ulonglong *)(param_1[5] + 8);
    uVar1 = *(undefined8 *)(param_1[6] + 8);
    auVar95._8_8_ = uVar1;
    auVar95._0_8_ = uVar1;
    auVar96._16_8_ = uVar1;
    auVar96._0_16_ = auVar95;
    auVar96._24_8_ = uVar1;
    auVar10 = vunpcklpd_avx(auVar86,auVar95);
    auVar31 = vpermpd_avx2(auVar48,0xc9);
    auVar100._16_8_ = *(double *)param_1[6];
    auVar100._0_16_ = auVar19;
    auVar100._24_8_ = 0;
    auVar32 = vblendpd_avx(auVar100,auVar96,8);
    dVar38 = auVar48._0_8_ * SUB168(*(undefined1 (*) [16])(param_1[5] + 0x10),0) -
             auVar31._0_8_ * auVar32._0_8_;
    dVar73 = auVar48._8_8_ * SUB168(*(undefined1 (*) [16])(param_1[5] + 0x10),8) -
             auVar31._8_8_ * auVar32._8_8_;
    dVar71 = auVar48._16_8_ * auVar10._0_8_ - auVar31._16_8_ * auVar32._16_8_;
    dVar63 = auVar48._24_8_ * auVar10._8_8_ - auVar31._24_8_ * auVar32._24_8_;
    auVar77._0_8_ = dVar38 + dVar38;
    auVar77._8_8_ = dVar73 + dVar73;
    auVar77._16_8_ = dVar71 + dVar71;
    auVar77._24_8_ = dVar63 + dVar63;
    auVar32 = vpermpd_avx2(auVar48,0xff);
    auVar31 = vpermpd_avx2(auVar77,0xc9);
    dVar69 = auVar32._0_8_;
    dVar70 = auVar32._8_8_;
    dVar61 = auVar32._16_8_;
    dVar62 = auVar32._24_8_;
    auVar32 = vpermpd_avx2(auVar77,0xd2);
    auVar78._0_8_ = auVar77._0_8_ * auVar65._0_8_;
    auVar78._8_8_ = auVar77._8_8_ * auVar65._8_8_;
    auVar78._16_8_ = auVar77._16_8_ * dVar72;
    auVar78._24_8_ = auVar77._24_8_ * dVar83;
    auVar34 = vpermpd_avx2(auVar78,0xc9);
    auVar79._0_8_ = auVar65._0_8_ * auVar32._0_8_ - auVar34._0_8_;
    auVar79._8_8_ = auVar65._8_8_ * auVar32._8_8_ - auVar34._8_8_;
    auVar79._16_8_ = dVar72 * auVar32._16_8_ - auVar34._16_8_;
    auVar79._24_8_ = dVar83 * auVar32._24_8_ - auVar34._24_8_;
    auVar32 = vpermpd_avx2(auVar79,0xc9);
    auVar75._0_8_ =
         *(double *)(param_1[0x10] + 8) + dVar69 * auVar31._0_8_ + auVar19._0_8_ + auVar32._0_8_;
    auVar75._8_8_ =
         *(double *)(param_1[0x10] + 0x10) + dVar70 * auVar31._8_8_ + auVar19._8_8_ + auVar32._8_8_;
    auVar80._16_8_ =
         *(double *)param_1[0x11] + dVar61 * auVar31._16_8_ + *(double *)param_1[6] + auVar32._16_8_
    ;
    auVar80._0_16_ = auVar75;
    auVar80._24_8_ = dVar62 * auVar31._24_8_ + 0.0 + auVar32._24_8_ + 0.0;
    *(undefined1 (*) [16])(param_1[0xb] + 0x10) = auVar75;
    uVar1 = vmovlpd_avx(auVar80._16_16_);
    *(undefined8 *)(param_1[0xc] + 8) = uVar1;
    auVar76._8_8_ = 0;
    auVar76._0_8_ = *(ulonglong *)param_1[5];
    auVar19 = vmovhpd_avx(auVar76,*(undefined8 *)(param_1[4] + 0x10));
    auVar87._8_8_ = 0;
    auVar87._0_8_ = *(ulonglong *)(param_1[4] + 8);
    auVar10 = vmovhpd_avx(auVar87,*(undefined8 *)param_1[4]);
    dVar73 = *(double *)(param_1[4] + 8);
    auVar2 = param_1[4];
    dVar38 = *(double *)param_1[5];
    auVar32 = vpermpd_avx2(auVar48,0x55);
    dVar71 = *(double *)param_1[4];
    dVar63 = *(double *)(param_1[4] + 8);
    auVar31 = vpermpd_avx2(auVar48,0xaa);
    *(double *)param_1[0xe] =
         dVar82 * auVar10._0_8_ * auVar31._0_8_ +
         dVar17 * *(double *)(param_1[4] + 0x10) * auVar32._0_8_ +
         dVar69 * *(double *)param_1[4] + auVar19._0_8_ * auVar65._0_8_ * dVar8;
    *(double *)(param_1[0xe] + 8) =
         dVar9 * auVar10._8_8_ * auVar31._8_8_ +
         dVar18 * *(double *)param_1[5] * auVar32._8_8_ +
         dVar70 * dVar73 + auVar19._8_8_ * auVar65._0_8_ * dVar16;
    *(double *)(param_1[0xe] + 0x10) =
         dVar92 * auVar19._0_8_ * auVar31._16_8_ +
         dVar3 * dVar71 * auVar32._16_8_ +
         dVar61 * auVar2._16_8_ + auVar10._0_8_ * auVar65._0_8_ * dVar8;
    *(double *)param_1[0xf] =
         dVar97 * auVar19._8_8_ * auVar31._24_8_ +
         dVar81 * dVar63 * auVar32._24_8_ + dVar62 * dVar38 + auVar10._8_8_ * auVar65._0_8_ * dVar16
    ;
    dVar8 = auVar48._0_8_ + auVar48._0_8_;
    dVar16 = auVar48._8_8_ + auVar48._8_8_;
    dVar17 = auVar48._16_8_ + auVar48._16_8_;
    dVar18 = auVar48._24_8_ + auVar48._24_8_;
    auVar22._0_8_ = dVar8 * auVar65._0_8_;
    auVar22._8_8_ = dVar16 * auVar65._0_8_;
    auVar22._16_8_ = dVar17 * auVar65._0_8_;
    auVar22._24_8_ = dVar18 * auVar65._0_8_;
    auVar43._0_8_ = auVar32._0_8_ * dVar8;
    auVar43._8_8_ = auVar32._8_8_ * dVar16;
    auVar49._16_8_ = auVar32._16_8_ * dVar17;
    auVar49._0_16_ = auVar43;
    auVar49._24_8_ = auVar32._24_8_ * dVar18;
    auVar58._0_8_ = dVar8 * dVar69;
    auVar58._8_8_ = dVar16 * dVar70;
    auVar58._16_8_ = dVar17 * dVar61;
    auVar58._24_8_ = dVar18 * dVar62;
    auVar32 = vperm2f128_avx(auVar49,auVar22,0x21);
    auVar32 = vshufpd_avx(auVar32,ZEXT1632(auVar22._16_16_),4);
    auVar4._0_8_ = auVar58._0_8_ + auVar32._0_8_;
    auVar4._8_8_ = auVar58._8_8_ + auVar32._8_8_;
    auVar7._16_8_ = auVar58._16_8_ + auVar32._16_8_;
    auVar7._0_16_ = auVar4;
    auVar7._24_8_ = auVar58._24_8_ + auVar32._24_8_;
    auVar34 = vsubpd_avx(auVar32,auVar58);
    auVar19 = vshufpd_avx(auVar43,auVar43,1);
    auVar23._8_8_ = auVar22._0_8_;
    auVar23._0_8_ = auVar22._0_8_;
    auVar23._16_8_ = auVar22._0_8_;
    auVar23._24_8_ = auVar22._0_8_;
    auVar32 = vblendpd_avx(auVar23,ZEXT1632(auVar19),1);
    auVar31 = vpermpd_avx2(auVar49,0x55);
    auVar31 = vblendpd_avx(ZEXT1632(CONCAT88(auVar48._16_8_ * dVar17,auVar48._16_8_ * dVar17)),
                           auVar31,0xc);
    auVar24._0_8_ = auVar32._0_8_ + auVar31._0_8_;
    auVar24._8_8_ = auVar32._8_8_ + auVar31._8_8_;
    auVar24._16_8_ = auVar32._16_8_ + auVar31._16_8_;
    auVar24._24_8_ = auVar32._24_8_ + auVar31._24_8_;
    auVar35._8_8_ = __real_3ff0000000000000;
    auVar35._0_8_ = __real_3ff0000000000000;
    auVar35._16_8_ = __real_3ff0000000000000;
    auVar35._24_8_ = __real_3ff0000000000000;
    auVar31 = vsubpd_avx(auVar35,auVar24);
    dVar17 = auVar31._0_8_;
    dVar8 = *(double *)param_1[9];
    dVar16 = *(double *)(param_1[9] + 0x10);
    auVar19 = vmovhpd_avx(ZEXT816(0) << 0x40,*(undefined8 *)(param_1[9] + 8));
    auVar32 = vpermpd_avx2(auVar34,0xaa);
    dVar18 = auVar19._0_8_;
    dVar3 = auVar19._8_8_;
    auVar33 = vpermpd_avx2(auVar7,0x55);
    auVar59._0_8_ = auVar33._0_8_ * 0.0 + dVar18 * auVar32._0_8_ + dVar8 * dVar17;
    auVar59._8_8_ = auVar33._8_8_ * 0.0 + dVar3 * auVar32._8_8_ + dVar17 * 0.0;
    auVar59._16_8_ = dVar16 * auVar33._16_8_ + auVar32._16_8_ * 0.0 + dVar17 * 0.0;
    auVar59._24_8_ = auVar33._24_8_ * 0.0 + auVar32._24_8_ * 0.0 + dVar17 * 0.0;
    auVar32 = vpermpd_avx2(auVar7,0xaa);
    auVar33 = vpermpd_avx2(auVar31,0x55);
    dVar17 = auVar34._0_8_;
    auVar50._0_8_ = dVar17 * 0.0 + dVar8 * auVar32._0_8_ + dVar18 * auVar33._0_8_;
    auVar50._8_8_ = dVar17 * 0.0 + auVar32._8_8_ * 0.0 + dVar3 * auVar33._8_8_;
    auVar50._16_8_ = dVar16 * dVar17 + auVar32._16_8_ * 0.0 + auVar33._16_8_ * 0.0;
    auVar50._24_8_ = dVar17 * 0.0 + auVar32._24_8_ * 0.0 + auVar33._24_8_ * 0.0;
    auVar32 = vpermpd_avx2(auVar34,0x55);
    auVar33 = vpermpd_avx2(auVar31,0xaa);
    auVar36._0_8_ = auVar33._0_8_ * 0.0 + auVar32._0_8_ * dVar8 + dVar18 * auVar4._0_8_;
    auVar36._8_8_ = auVar33._8_8_ * 0.0 + auVar32._8_8_ * 0.0 + dVar3 * auVar4._0_8_;
    auVar36._16_8_ = dVar16 * auVar33._16_8_ + auVar32._16_8_ * 0.0 + auVar4._0_8_ * 0.0;
    auVar36._24_8_ = auVar33._24_8_ * 0.0 + auVar32._24_8_ * 0.0 + auVar4._0_8_ * 0.0;
    auVar19 = vunpcklpd_avx(auVar31._0_16_,auVar7._16_16_);
    auVar32 = vblendpd_avx(ZEXT1632(auVar19),auVar32,0xc);
    auVar33 = vpermpd_avx2(auVar59,0x55);
    auVar19 = vblendpd_avx(auVar31._0_16_,auVar34._16_16_,1);
    dVar92 = auVar19._0_8_;
    dVar97 = auVar19._8_8_;
    dVar3 = auVar32._0_8_;
    dVar81 = auVar32._8_8_;
    dVar82 = auVar32._16_8_;
    dVar9 = auVar32._24_8_;
    auVar15 = vpermpd_avx2(auVar59,0xaa);
    auVar19 = vshufpd_avx(auVar4,auVar34._0_16_,1);
    auVar32 = vblendpd_avx(auVar31,ZEXT1632(auVar19),3);
    dVar8 = auVar32._0_8_;
    auVar54._0_8_ = dVar8 * auVar15._0_8_ + dVar3 * auVar59._0_8_ + dVar92 * auVar33._0_8_;
    dVar16 = auVar32._8_8_;
    auVar54._8_8_ = dVar16 * auVar15._8_8_ + dVar81 * auVar59._0_8_ + dVar97 * auVar33._8_8_;
    dVar17 = auVar32._16_8_;
    auVar60._16_8_ =
         dVar17 * auVar15._16_8_ + dVar82 * auVar59._0_8_ + auVar4._0_8_ * auVar33._16_8_;
    auVar60._0_16_ = auVar54;
    dVar18 = auVar32._24_8_;
    auVar60._24_8_ = dVar18 * auVar15._24_8_ + dVar9 * auVar59._0_8_ + auVar4._8_8_ * auVar33._24_8_
    ;
    auVar32 = vpermpd_avx2(auVar50,0x55);
    auVar31 = vpermpd_avx2(auVar50,0xaa);
    auVar21._0_8_ = dVar8 * auVar31._0_8_ + dVar3 * auVar50._0_8_ + dVar92 * auVar32._0_8_;
    auVar21._8_8_ = dVar16 * auVar31._8_8_ + dVar81 * auVar50._0_8_ + dVar97 * auVar32._8_8_;
    auVar25._16_8_ =
         dVar17 * auVar31._16_8_ + dVar82 * auVar50._0_8_ + auVar4._0_8_ * auVar32._16_8_;
    auVar25._0_16_ = auVar21;
    auVar25._24_8_ = dVar18 * auVar31._24_8_ + dVar9 * auVar50._0_8_ + auVar4._8_8_ * auVar32._24_8_
    ;
    auVar32 = vpermpd_avx2(auVar36,0x55);
    auVar31 = vpermpd_avx2(auVar36,0xaa);
    *(undefined1 (*) [16])(param_1[0x1d] + 8) = auVar54;
    uVar1 = vmovlpd_avx(auVar60._16_16_);
    *(undefined8 *)param_1[0x1e] = uVar1;
    auVar29._0_8_ = dVar8 * auVar31._0_8_ + dVar3 * auVar36._0_8_ + dVar92 * auVar32._0_8_;
    auVar29._8_8_ = dVar16 * auVar31._8_8_ + dVar81 * auVar36._0_8_ + dVar97 * auVar32._8_8_;
    auVar37._16_8_ =
         dVar17 * auVar31._16_8_ + dVar82 * auVar36._0_8_ + auVar4._0_8_ * auVar32._16_8_;
    auVar37._0_16_ = auVar29;
    auVar37._24_8_ = dVar18 * auVar31._24_8_ + dVar9 * auVar36._0_8_ + auVar4._8_8_ * auVar32._24_8_
    ;
    *(undefined8 *)(param_1[0x1e] + 8) = 0;
    *(undefined1 (*) [16])(param_1[0x1e] + 0x10) = auVar21;
    uVar1 = vmovlpd_avx(auVar25._16_16_);
    *(undefined8 *)(param_1[0x1f] + 8) = uVar1;
    *(undefined8 *)(param_1[0x1f] + 0x10) = 0;
    *(undefined1 (*) [16])param_1[0x20] = auVar29;
    uVar1 = vmovlpd_avx(auVar37._16_16_);
    *(undefined8 *)(param_1[0x20] + 0x10) = uVar1;
    *(undefined8 *)param_1[0x21] = 0;
    *(undefined8 *)(param_1[0x21] + 8) = 0;
    *(undefined8 *)(param_1[0x21] + 0x10) = 0;
    *(undefined8 *)param_1[0x22] = 0;
    *(undefined8 *)(param_1[0x22] + 8) = 0x3ff0000000000000;
  }
  dVar8 = *(double *)param_1[0xe];
  dVar16 = *(double *)(param_1[0xe] + 8);
  dVar17 = *(double *)(param_1[0xe] + 0x10);
  dVar18 = *(double *)param_1[0xf];
  dVar3 = *(double *)param_1[0x13];
  dVar81 = *(double *)(param_1[0x13] + 8);
  dVar82 = *(double *)(param_1[0x13] + 0x10);
  auVar13._0_8_ =
       *(double *)(param_1[0x12] + 0x10) * *(double *)(param_1[0x11] + 8) +
       dVar81 * *(double *)param_1[0x12];
  auVar13._8_8_ =
       dVar3 * *(double *)(param_1[0x11] + 0x10) + dVar82 * *(double *)(param_1[0x12] + 8);
  auVar19 = vshufpd_avx(auVar13,auVar13,1);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = auVar13._0_8_ + auVar19._0_8_;
  auVar19 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar14,2);
  auVar30._8_8_ = 0;
  auVar30._0_8_ = __real_3ff0000000000000;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = __real_bff0000000000000;
  auVar19 = vblendvpd_avx(auVar44,auVar30,auVar19);
  dVar9 = auVar19._0_8_;
  *(double *)(param_1[0x12] + 0x10) = *(double *)(param_1[0x12] + 0x10) * dVar9;
  *(double *)param_1[0x13] = dVar3 * dVar9;
  *(double *)(param_1[0x13] + 8) = dVar81 * dVar9;
  *(double *)(param_1[0x13] + 0x10) = dVar82 * dVar9;
  auVar5._0_8_ = dVar8 * *(double *)(param_1[0xc] + 0x10) + dVar17 * *(double *)(param_1[0xd] + 8);
  auVar5._8_8_ = dVar16 * *(double *)param_1[0xd] + dVar18 * *(double *)(param_1[0xd] + 0x10);
  auVar19 = vshufpd_avx(auVar5,auVar5,1);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = auVar5._0_8_ + auVar19._0_8_;
  auVar19 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar6,2);
  auVar19 = vblendvpd_avx(auVar44,auVar30,auVar19);
  dVar3 = auVar19._0_8_;
  *(double *)param_1[0xe] = dVar8 * dVar3;
  *(double *)(param_1[0xe] + 8) = dVar16 * dVar3;
  *(double *)(param_1[0xe] + 0x10) = dVar17 * dVar3;
  *(double *)param_1[0xf] = dVar18 * dVar3;
  return;
}

// ApplyPositionConstraintSoft___un_3C_s_5B_unFPBDJointSolver_5D__3E_CundCundCundCunbREFs_5B__c_unFVector_5D_CundCundREFund_avx2 @ 1409e7cb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPositionConstraintSoft___un_3C_s_5B_unFPBDJointSolver_5D__3E_CundCundCundCunbREFs_5B__c_unFVector_5D_CundCundREFund_avx2
               (undefined1 (*param_1) [24],double param_2,double param_3,double param_4,byte param_5
               ,double *param_6,double param_7,double param_8,double *param_9,
               undefined1 (*param_10) [32])

{
  undefined8 uVar1;
  undefined1 auVar2 [24];
  double dVar3;
  double dVar6;
  double dVar7;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar37;
  double dVar39;
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  double dVar38;
  undefined1 in_ZMM4 [64];
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
  double dVar62;
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  ulonglong uVar63;
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  double dVar83;
  undefined1 auVar74 [32];
  double dVar84;
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar82 [32];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  double dVar100;
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  double dVar101;
  double dVar102;
  undefined1 auVar93 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar98 [32];
  double dVar103;
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
  double dVar134;
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  undefined1 auVar118 [32];
  double dVar135;
  undefined1 auVar120 [32];
  undefined1 auVar121 [32];
  undefined1 auVar122 [32];
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  undefined1 auVar128 [32];
  undefined1 auVar130 [32];
  undefined1 auVar131 [32];
  undefined1 auVar132 [32];
  double dVar136;
  ulonglong uVar137;
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  double dVar161;
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [32];
  undefined1 auVar152 [32];
  undefined1 auVar154 [32];
  undefined1 auVar157 [32];
  undefined1 auVar159 [32];
  double dVar162;
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  double dVar173;
  undefined1 auVar167 [32];
  undefined1 auVar169 [32];
  undefined1 auVar170 [32];
  undefined1 auVar172 [32];
  double dVar174;
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  double dVar182;
  undefined1 auVar177 [32];
  double dVar183;
  undefined1 auVar178 [32];
  undefined1 auVar179 [32];
  undefined1 auVar180 [32];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar190 [32];
  undefined1 auVar191 [32];
  undefined1 auVar192 [32];
  double dVar194;
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [32];
  undefined1 auVar199 [32];
  undefined1 auVar200 [32];
  undefined1 auVar201 [32];
  undefined1 auVar202 [32];
  undefined1 auVar204 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar25 [32];
  undefined1 auVar33 [32];
  undefined1 auVar36 [32];
  undefined1 auVar50 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar61 [32];
  undefined1 auVar77 [32];
  undefined1 auVar81 [32];
  undefined1 auVar92 [32];
  undefined1 auVar94 [32];
  undefined1 auVar97 [32];
  undefined1 auVar99 [32];
  undefined1 auVar119 [32];
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  undefined1 auVar129 [32];
  undefined1 auVar133 [32];
  undefined1 auVar151 [32];
  undefined1 auVar153 [32];
  undefined1 auVar155 [32];
  undefined1 auVar156 [32];
  undefined1 auVar158 [32];
  undefined1 auVar160 [32];
  undefined1 auVar168 [32];
  undefined1 auVar171 [32];
  undefined1 auVar181 [32];
  undefined1 auVar189 [32];
  undefined1 auVar193 [32];
  undefined1 auVar203 [32];
  
  uVar63 = __real_8000000000000000;
  auVar200 = vpcmpeqd_avx2(in_ZMM4._0_32_,in_ZMM4._0_32_);
  auVar200 = auVar200 & ~*param_10;
  auVar150._24_8_ = 0;
  auVar150._0_24_ = *(undefined1 (*) [24])(param_1[10] + 0x10);
  auVar4._24_8_ = 0;
  auVar4._0_24_ = *(undefined1 (*) [24])(param_1[0xf] + 8);
  auVar4 = vsubpd_avx(auVar150,auVar4);
  dVar9 = *param_6;
  dVar161 = param_6[1];
  auVar5 = vpermpd_avx2(auVar4,0xc9);
  dVar136 = param_6[2];
  auVar74._0_8_ = param_6[1] * auVar4._0_8_ - dVar9 * auVar5._0_8_;
  auVar74._8_8_ = param_6[2] * auVar4._8_8_ - dVar161 * auVar5._8_8_;
  auVar74._16_8_ = *param_6 * auVar4._16_8_ - dVar136 * auVar5._16_8_;
  auVar74._24_8_ = auVar4._24_8_ * 0.0 - auVar5._24_8_ * 0.0;
  auVar177._24_8_ = 0;
  auVar177._0_24_ = *(undefined1 (*) [24])(param_1[0xb] + 0x10);
  auVar5._24_8_ = 0;
  auVar5._0_24_ = *(undefined1 (*) [24])(param_1[0x10] + 8);
  auVar4 = vsubpd_avx(auVar177,auVar5);
  auVar5 = vpermpd_avx2(auVar4,0xc9);
  auVar89._0_8_ = param_6[1] * auVar4._0_8_ - dVar9 * auVar5._0_8_;
  auVar89._8_8_ = param_6[2] * auVar4._8_8_ - dVar161 * auVar5._8_8_;
  auVar89._16_8_ = *param_6 * auVar4._16_8_ - dVar136 * auVar5._16_8_;
  auVar89._24_8_ = auVar4._24_8_ * 0.0 - auVar5._24_8_ * 0.0;
  auVar4 = vpermpd_avx2(auVar74,0x55);
  auVar5 = vpermpd_avx2(auVar74,0xaa);
  dVar28 = *(double *)(param_1[0x1a] + 0x10) * auVar74._0_8_ +
           *(double *)param_1[0x18] * auVar4._0_8_ + auVar5._0_8_ * *(double *)(param_1[0x19] + 8);
  dVar37 = *(double *)param_1[0x1b] * auVar74._0_8_ +
           *(double *)(param_1[0x18] + 8) * auVar4._8_8_ +
           auVar5._8_8_ * *(double *)(param_1[0x19] + 0x10);
  dVar38 = *(double *)(param_1[0x1b] + 8) * auVar74._0_8_ +
           *(double *)(param_1[0x18] + 0x10) * auVar4._16_8_ +
           auVar5._16_8_ * *(double *)param_1[0x1a];
  dVar39 = auVar74._0_8_ * 0.0 + auVar4._24_8_ * 0.0 + auVar5._24_8_ * 0.0;
  auVar4 = vpermpd_avx2(auVar89,0x55);
  auVar5 = vpermpd_avx2(auVar89,0xaa);
  dVar3 = *(double *)param_1[0x20] * auVar89._0_8_ +
          *(double *)(param_1[0x1d] + 8) * auVar4._0_8_ +
          auVar5._0_8_ * *(double *)(param_1[0x1e] + 0x10);
  dVar6 = *(double *)(param_1[0x20] + 8) * auVar89._0_8_ +
          *(double *)(param_1[0x1d] + 0x10) * auVar4._8_8_ + auVar5._8_8_ * *(double *)param_1[0x1f]
  ;
  dVar7 = *(double *)(param_1[0x20] + 0x10) * auVar89._0_8_ +
          *(double *)param_1[0x1e] * auVar4._16_8_ + auVar5._16_8_ * *(double *)(param_1[0x1f] + 8);
  dVar8 = auVar89._0_8_ * 0.0 + auVar4._24_8_ * 0.0 + auVar5._24_8_ * 0.0;
  auVar4 = vpermpd_avx2(auVar74,0xc9);
  auVar64._0_8_ = auVar4._0_8_ * dVar28;
  auVar64._8_8_ = auVar4._8_8_ * dVar37;
  auVar109 = vshufpd_avx(auVar64,auVar64,1);
  auVar5 = vpermpd_avx2(auVar89,0xc9);
  auVar65._0_8_ = auVar5._0_8_ * dVar3;
  auVar65._8_8_ = auVar5._8_8_ * dVar6;
  auVar139 = vshufpd_avx(auVar65,auVar65,1);
  dVar103 = *(double *)param_1[10];
  dVar162 = *(double *)(param_1[10] + 8);
  dVar83 = auVar4._16_8_ * dVar38 + auVar109._0_8_ + auVar64._0_8_ + dVar103 + dVar162 +
           auVar5._16_8_ * dVar7 + auVar65._0_8_ + auVar139._0_8_;
  dVar194 = 0.0;
  dVar84 = 0.0;
  if ((((((((SUB321(auVar200 >> 0x1f,0) & 1) == 0 && (SUB321(auVar200 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar200 >> 0x5f,0) & 1) == 0) && SUB321(auVar200 >> 0x7f,0) == '\0') &&
        (SUB321(auVar200 >> 0x9f,0) & 1) == 0) && SUB321(auVar200 >> 0xbf,0) == '\0') &&
      (SUB321(auVar200 >> 0xdf,0) & 1) == 0) && -1 < auVar200[0x1f]) {
    if (__real_3f1a36e2eb1c432d < param_4) {
      auVar200._24_8_ = 0;
      auVar200._0_24_ = *(undefined1 (*) [24])(param_1[0x27] + 8);
      auVar4 = vsubpd_avx(auVar150,auVar200);
      auVar201._24_8_ = 0;
      auVar201._0_24_ = *(undefined1 (*) [24])(param_1[0x28] + 8);
      auVar200 = vsubpd_avx(auVar177,auVar201);
      auVar4 = vsubpd_avx(auVar4,auVar200);
      auVar139._0_8_ = dVar9 * auVar4._0_8_;
      auVar139._8_8_ = dVar161 * auVar4._8_8_;
      auVar109 = vshufpd_avx(auVar139,auVar139,1);
      dVar84 = param_2 * param_8 + dVar136 * auVar4._16_8_ + auVar139._0_8_ + auVar109._0_8_;
    }
    dVar136 = __real_3ff0000000000000;
    if ((param_5 & 1) != 0) {
      dVar136 = __real_3ff0000000000000 / (dVar103 + dVar162);
    }
    dVar9 = dVar136 * param_3 * param_2 * param_2;
    param_2 = dVar136 * param_4 * param_2;
    dVar136 = ((dVar9 * param_7 - dVar84 * param_2) - *param_9) *
              (__real_3ff0000000000000 / (dVar83 * (param_2 + dVar9) + __real_3ff0000000000000)) *
              *(double *)param_1[0x33];
    dVar83 = dVar103 * dVar136;
    dVar9 = param_6[1];
    dVar161 = param_6[2];
    dVar194 = *param_6;
    dVar84 = (double)((ulonglong)dVar162 ^ __real_8000000000000000) * dVar136;
    auVar145._0_8_ = dVar194 * dVar83 + *(double *)(param_1[0xf] + 8);
    auVar145._8_8_ = dVar9 * dVar83 + *(double *)(param_1[0xf] + 0x10);
    auVar156._16_8_ = dVar161 * dVar83 + *(double *)param_1[0x10];
    auVar156._0_16_ = auVar145;
    auVar156._24_8_ = dVar83 * 0.0 + 0.0;
    *(undefined1 (*) [16])(param_1[0xf] + 8) = auVar145;
    uVar1 = vmovlpd_avx(auVar156._16_16_);
    *(undefined8 *)param_1[0x10] = uVar1;
    auVar109._0_8_ = dVar194 * dVar84 + *(double *)(param_1[0x10] + 8);
    auVar109._8_8_ = dVar9 * dVar84 + *(double *)(param_1[0x10] + 0x10);
    auVar124._16_8_ = dVar161 * dVar84 + *(double *)param_1[0x11];
    auVar124._0_16_ = auVar109;
    auVar124._24_8_ = dVar84 * 0.0 + 0.0;
    uVar1 = vmovlpd_avx(auVar109);
    *(undefined8 *)(param_1[0x10] + 8) = uVar1;
    auVar4 = vpermpd_avx2(auVar124,0xe9);
    *(undefined1 (*) [16])(param_1[0x10] + 0x10) = auVar4._0_16_;
    dVar102 = _UNK_150b54438;
    dVar100 = _UNK_150b54430;
    dVar135 = _UNK_150b54428;
    dVar101 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
    dVar62 = _UNK_150b54418;
    dVar194 = _UNK_150b54410;
    dVar161 = _UNK_150b54408;
    dVar9 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
    dVar84 = _UNK_15076c6f8;
    dVar83 = ___xmm_bff00000000000003ff0000000000000;
    if (0.0 < dVar103) {
      auVar95._0_8_ = dVar136 * dVar28;
      auVar95._8_8_ = dVar136 * dVar37;
      auVar95._16_8_ = dVar136 * dVar38;
      auVar95._24_8_ = dVar136 * dVar39;
      auVar69._8_8_ = 0;
      auVar69._0_8_ = *(ulonglong *)(param_1[0x12] + 8);
      auVar109 = vmovhpd_avx(auVar69,*(undefined8 *)param_1[0x12]);
      auVar70._8_8_ = 0;
      auVar70._0_8_ = *(ulonglong *)(param_1[0x11] + 0x10);
      auVar139 = vmovhpd_avx(auVar70,*(undefined8 *)(param_1[0x11] + 8));
      auVar4 = vpermpd_avx2(auVar95,0x55);
      auVar200 = vpermpd_avx2(auVar95,0xaa);
      dVar162 = (___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
                 auVar139._0_8_ * auVar200._0_8_ +
                ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
                *(double *)param_1[0x12] * auVar4._0_8_ +
                *(double *)(param_1[0x11] + 8) * 0.0 +
                auVar95._0_8_ * auVar109._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
                __real_3fe0000000000000 + *(double *)(param_1[0x11] + 8);
      dVar28 = (_UNK_150b54428 * auVar139._8_8_ * auVar200._8_8_ +
               _UNK_150b54408 * *(double *)(param_1[0x12] + 8) * auVar4._8_8_ +
               *(double *)(param_1[0x11] + 0x10) * 0.0 +
               auVar95._0_8_ * auVar109._8_8_ * _UNK_15076c6f8) * __real_3fe0000000000000 +
               *(double *)(param_1[0x11] + 0x10);
      dVar37 = (_UNK_150b54430 * auVar109._0_8_ * auVar200._16_8_ +
               _UNK_150b54410 * *(double *)(param_1[0x11] + 8) * auVar4._16_8_ +
               *(double *)param_1[0x12] * 0.0 +
               auVar95._0_8_ * auVar139._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
               __real_3fe0000000000000 + *(double *)param_1[0x12];
      dVar38 = (_UNK_150b54438 * auVar109._8_8_ * auVar200._24_8_ +
               _UNK_150b54418 * *(double *)(param_1[0x11] + 0x10) * auVar4._24_8_ +
               *(double *)(param_1[0x12] + 8) * 0.0 +
               auVar95._0_8_ * auVar139._8_8_ * _UNK_15076c6f8) * __real_3fe0000000000000 +
               *(double *)(param_1[0x12] + 8);
      auVar110._0_8_ = dVar162 * dVar162 + dVar37 * dVar37;
      auVar110._8_8_ = dVar28 * dVar28 + dVar38 * dVar38;
      auVar109 = vshufpd_avx(auVar110,auVar110,1);
      dVar103 = auVar110._0_8_ + auVar109._0_8_;
      auVar146._8_8_ = 0;
      auVar146._0_8_ = __real_3e45798ee2308c3a;
      auVar111._8_8_ = 0;
      auVar111._0_8_ = dVar103;
      auVar109 = vcmpsd_avx(auVar146,auVar111,6);
      uVar137 = ~auVar109._0_8_ & __real_ffffffffffffffff;
      dVar103 = __real_3ff0000000000000 / SQRT(dVar103);
      dVar174 = (double)(((ulonglong)(dVar162 * dVar103) ^
                         ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) &
                        uVar137);
      dVar162 = (double)(((ulonglong)(dVar28 * dVar103) ^ _UNK_150b54548) & uVar137);
      dVar182 = (double)(((ulonglong)(dVar37 * dVar103) ^ _UNK_150b54550) & uVar137);
      dVar103 = (double)(((ulonglong)(dVar38 * dVar103) ^ _UNK_150b54558) & uVar137);
      auVar157._0_8_ =
           (double)((ulonglong)dVar174 ^
                   ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
      auVar157._8_8_ = (double)((ulonglong)dVar162 ^ _UNK_150b54548);
      auVar157._16_8_ = (double)((ulonglong)dVar182 ^ _UNK_150b54550);
      auVar157._24_8_ = (double)((ulonglong)dVar103 ^ _UNK_150b54558);
      *(undefined1 (*) [32])(param_1[0x11] + 8) = auVar157;
      auVar186._8_8_ = 0;
      auVar186._0_8_ = *(ulonglong *)(param_1[1] + 8);
      uVar1 = *(undefined8 *)(param_1[2] + 8);
      auVar196._8_8_ = uVar1;
      auVar196._0_8_ = uVar1;
      auVar203._16_8_ = uVar1;
      auVar203._0_16_ = auVar196;
      auVar203._24_8_ = uVar1;
      auVar109 = vunpcklpd_avx(auVar186,auVar196);
      auVar200 = vpermpd_avx2(auVar157,0xc9);
      auVar2 = *(undefined1 (*) [24])(param_1[1] + 8);
      auVar204._24_8_ = 0;
      auVar204._0_24_ = auVar2;
      auVar4 = vblendpd_avx(auVar204,auVar203,8);
      dVar28 = auVar157._0_8_ * SUB168(*(undefined1 (*) [16])(param_1[1] + 0x10),0) -
               auVar4._0_8_ * auVar200._0_8_;
      dVar37 = auVar157._8_8_ * SUB168(*(undefined1 (*) [16])(param_1[1] + 0x10),8) -
               auVar4._8_8_ * auVar200._8_8_;
      dVar38 = auVar157._16_8_ * auVar109._0_8_ - auVar4._16_8_ * auVar200._16_8_;
      dVar39 = auVar157._24_8_ * auVar109._8_8_ - auVar4._24_8_ * auVar200._24_8_;
      auVar190._0_8_ = dVar28 + dVar28;
      auVar190._8_8_ = dVar37 + dVar37;
      auVar190._16_8_ = dVar38 + dVar38;
      auVar190._24_8_ = dVar39 + dVar39;
      auVar4 = vpermpd_avx2(auVar157,0xff);
      auVar200 = vpermpd_avx2(auVar190,0xc9);
      dVar39 = auVar4._0_8_;
      dVar134 = auVar4._8_8_;
      dVar183 = auVar4._16_8_;
      dVar173 = auVar4._24_8_;
      auVar4 = vpermpd_avx2(auVar190,0xd2);
      auVar191._0_8_ = auVar190._0_8_ * dVar174;
      auVar191._8_8_ = auVar190._8_8_ * dVar162;
      auVar191._16_8_ = auVar190._16_8_ * dVar182;
      auVar191._24_8_ = auVar190._24_8_ * dVar103;
      auVar5 = vpermpd_avx2(auVar191,0xc9);
      auVar192._0_8_ = dVar174 * auVar4._0_8_ - auVar5._0_8_;
      auVar192._8_8_ = dVar162 * auVar4._8_8_ - auVar5._8_8_;
      auVar192._16_8_ = dVar182 * auVar4._16_8_ - auVar5._16_8_;
      auVar192._24_8_ = dVar103 * auVar4._24_8_ - auVar5._24_8_;
      auVar4 = vpermpd_avx2(auVar192,0xc9);
      auVar187._0_8_ =
           *(double *)(param_1[0xf] + 8) + dVar39 * auVar200._0_8_ + auVar2._0_8_ + auVar4._0_8_;
      auVar187._8_8_ =
           *(double *)(param_1[0xf] + 0x10) + dVar134 * auVar200._8_8_ + auVar2._8_8_ + auVar4._8_8_
      ;
      auVar193._16_8_ =
           *(double *)param_1[0x10] + dVar183 * auVar200._16_8_ + auVar2._16_8_ + auVar4._16_8_;
      auVar193._0_16_ = auVar187;
      auVar193._24_8_ = dVar173 * auVar200._24_8_ + 0.0 + auVar4._24_8_ + 0.0;
      *(undefined1 (*) [16])(param_1[10] + 0x10) = auVar187;
      uVar1 = vmovlpd_avx(auVar193._16_16_);
      *(undefined8 *)(param_1[0xb] + 8) = uVar1;
      auVar188._8_8_ = 0;
      auVar188._0_8_ = *(ulonglong *)(*param_1 + 8);
      auVar109 = vmovhpd_avx(auVar188,*(undefined8 *)*param_1);
      auVar197._8_8_ = 0;
      auVar197._0_8_ = *(ulonglong *)param_1[1];
      auVar139 = vmovhpd_avx(auVar197,*(undefined8 *)(*param_1 + 0x10));
      dVar162 = *(double *)(*param_1 + 8);
      auVar2 = *param_1;
      dVar103 = *(double *)param_1[1];
      auVar4 = vpermpd_avx2(auVar157,0x55);
      dVar28 = *(double *)param_1[1];
      dVar37 = *(double *)*param_1;
      dVar38 = *(double *)(*param_1 + 8);
      auVar200 = vpermpd_avx2(auVar157,0xaa);
      *(double *)(param_1[0xc] + 0x10) =
           dVar101 * auVar109._0_8_ * auVar200._0_8_ +
           dVar9 * *(double *)(*param_1 + 0x10) * auVar4._0_8_ +
           dVar39 * *(double *)*param_1 + auVar139._0_8_ * dVar174 * dVar83;
      *(double *)param_1[0xd] =
           dVar135 * auVar109._8_8_ * auVar200._8_8_ +
           dVar161 * dVar28 * auVar4._8_8_ + dVar134 * dVar162 + auVar139._8_8_ * dVar174 * dVar84;
      *(double *)(param_1[0xd] + 8) =
           dVar100 * auVar139._0_8_ * auVar200._16_8_ +
           dVar194 * dVar37 * auVar4._16_8_ +
           dVar183 * auVar2._16_8_ + auVar109._0_8_ * dVar174 * dVar83;
      *(double *)(param_1[0xd] + 0x10) =
           dVar102 * auVar139._8_8_ * auVar200._24_8_ +
           dVar62 * dVar38 * auVar4._24_8_ + dVar173 * dVar103 + auVar109._8_8_ * dVar174 * dVar84;
      dVar103 = auVar157._0_8_ + auVar157._0_8_;
      dVar162 = auVar157._8_8_ + auVar157._8_8_;
      dVar83 = auVar157._16_8_ + auVar157._16_8_;
      dVar84 = auVar157._24_8_ + auVar157._24_8_;
      auVar125._0_8_ = dVar174 * dVar103;
      auVar125._8_8_ = dVar174 * dVar162;
      auVar125._16_8_ = dVar174 * dVar83;
      auVar125._24_8_ = dVar174 * dVar84;
      auVar147._0_8_ = auVar4._0_8_ * dVar103;
      auVar147._8_8_ = auVar4._8_8_ * dVar162;
      auVar158._16_8_ = auVar4._16_8_ * dVar83;
      auVar158._0_16_ = auVar147;
      auVar158._24_8_ = auVar4._24_8_ * dVar84;
      auVar79._0_8_ = dVar39 * dVar103;
      auVar79._8_8_ = dVar134 * dVar162;
      auVar79._16_8_ = dVar183 * dVar83;
      auVar79._24_8_ = dVar173 * dVar84;
      auVar4 = vperm2f128_avx(auVar158,auVar125,0x21);
      auVar4 = vshufpd_avx(auVar4,ZEXT1632(auVar125._16_16_),4);
      auVar45._0_8_ = auVar4._0_8_ + auVar79._0_8_;
      auVar45._8_8_ = auVar4._8_8_ + auVar79._8_8_;
      auVar56._16_8_ = auVar4._16_8_ + auVar79._16_8_;
      auVar56._0_16_ = auVar45;
      auVar56._24_8_ = auVar4._24_8_ + auVar79._24_8_;
      auVar5 = vsubpd_avx(auVar4,auVar79);
      auVar109 = vshufpd_avx(auVar147,auVar147,1);
      auVar126._8_8_ = auVar125._0_8_;
      auVar126._0_8_ = auVar125._0_8_;
      auVar126._16_8_ = auVar125._0_8_;
      auVar126._24_8_ = auVar125._0_8_;
      auVar4 = vblendpd_avx(auVar126,ZEXT1632(auVar109),1);
      auVar200 = vpermpd_avx2(auVar158,0x55);
      auVar200 = vblendpd_avx(ZEXT1632(CONCAT88(dVar182 * dVar83,dVar182 * dVar83)),auVar200,0xc);
      auVar96._0_8_ = auVar4._0_8_ + auVar200._0_8_;
      auVar96._8_8_ = auVar4._8_8_ + auVar200._8_8_;
      auVar96._16_8_ = auVar4._16_8_ + auVar200._16_8_;
      auVar96._24_8_ = auVar4._24_8_ + auVar200._24_8_;
      auVar127._8_8_ = __real_3ff0000000000000;
      auVar127._0_8_ = __real_3ff0000000000000;
      auVar127._16_8_ = __real_3ff0000000000000;
      auVar127._24_8_ = __real_3ff0000000000000;
      auVar200 = vsubpd_avx(auVar127,auVar96);
      dVar83 = auVar200._0_8_;
      dVar103 = *(double *)param_1[8];
      dVar162 = *(double *)(param_1[8] + 0x10);
      auVar4 = vpermpd_avx2(auVar5,0xaa);
      auVar109 = vmovhpd_avx(ZEXT816(0) << 0x40,*(undefined8 *)(param_1[8] + 8));
      dVar84 = auVar109._0_8_;
      dVar9 = auVar109._8_8_;
      auVar74 = vpermpd_avx2(auVar56,0x55);
      auVar170._0_8_ = auVar74._0_8_ * 0.0 + dVar84 * auVar4._0_8_ + dVar103 * dVar83;
      auVar170._8_8_ = auVar74._8_8_ * 0.0 + dVar9 * auVar4._8_8_ + dVar83 * 0.0;
      auVar170._16_8_ = dVar162 * auVar74._16_8_ + auVar4._16_8_ * 0.0 + dVar83 * 0.0;
      auVar170._24_8_ = auVar74._24_8_ * 0.0 + auVar4._24_8_ * 0.0 + dVar83 * 0.0;
      auVar4 = vpermpd_avx2(auVar56,0xaa);
      auVar74 = vpermpd_avx2(auVar200,0x55);
      dVar83 = auVar5._0_8_;
      auVar159._0_8_ = dVar83 * 0.0 + dVar103 * auVar4._0_8_ + dVar84 * auVar74._0_8_;
      auVar159._8_8_ = dVar83 * 0.0 + auVar4._8_8_ * 0.0 + dVar9 * auVar74._8_8_;
      auVar159._16_8_ = dVar162 * dVar83 + auVar4._16_8_ * 0.0 + auVar74._16_8_ * 0.0;
      auVar159._24_8_ = dVar83 * 0.0 + auVar4._24_8_ * 0.0 + auVar74._24_8_ * 0.0;
      auVar4 = vpermpd_avx2(auVar5,0x55);
      auVar74 = vpermpd_avx2(auVar200,0xaa);
      auVar128._0_8_ = auVar74._0_8_ * 0.0 + auVar4._0_8_ * dVar103 + dVar84 * auVar45._0_8_;
      auVar128._8_8_ = auVar74._8_8_ * 0.0 + auVar4._8_8_ * 0.0 + dVar9 * auVar45._0_8_;
      auVar128._16_8_ = dVar162 * auVar74._16_8_ + auVar4._16_8_ * 0.0 + auVar45._0_8_ * 0.0;
      auVar128._24_8_ = auVar74._24_8_ * 0.0 + auVar4._24_8_ * 0.0 + auVar45._0_8_ * 0.0;
      auVar109 = vunpcklpd_avx(auVar200._0_16_,auVar56._16_16_);
      auVar4 = vblendpd_avx(ZEXT1632(auVar109),auVar4,0xc);
      auVar74 = vpermpd_avx2(auVar170,0x55);
      auVar109 = vblendpd_avx(auVar200._0_16_,auVar5._16_16_,1);
      dVar38 = auVar109._0_8_;
      dVar39 = auVar109._8_8_;
      dVar9 = auVar4._0_8_;
      dVar161 = auVar4._8_8_;
      dVar28 = auVar4._16_8_;
      dVar37 = auVar4._24_8_;
      auVar89 = vpermpd_avx2(auVar170,0xaa);
      auVar109 = vshufpd_avx(auVar45,auVar5._0_16_,1);
      auVar4 = vblendpd_avx(auVar200,ZEXT1632(auVar109),3);
      dVar103 = auVar4._0_8_;
      auVar165._0_8_ = dVar103 * auVar89._0_8_ + dVar9 * auVar170._0_8_ + dVar38 * auVar74._0_8_;
      dVar162 = auVar4._8_8_;
      auVar165._8_8_ = dVar162 * auVar89._8_8_ + dVar161 * auVar170._0_8_ + dVar39 * auVar74._8_8_;
      dVar83 = auVar4._16_8_;
      auVar171._16_8_ =
           dVar83 * auVar89._16_8_ + dVar28 * auVar170._0_8_ + auVar45._0_8_ * auVar74._16_8_;
      auVar171._0_16_ = auVar165;
      dVar84 = auVar4._24_8_;
      auVar171._24_8_ =
           dVar84 * auVar89._24_8_ + dVar37 * auVar170._0_8_ + auVar45._8_8_ * auVar74._24_8_;
      auVar4 = vpermpd_avx2(auVar159,0x55);
      auVar200 = vpermpd_avx2(auVar159,0xaa);
      auVar87._0_8_ = dVar103 * auVar200._0_8_ + dVar9 * auVar159._0_8_ + dVar38 * auVar4._0_8_;
      auVar87._8_8_ = dVar162 * auVar200._8_8_ + dVar161 * auVar159._0_8_ + dVar39 * auVar4._8_8_;
      auVar97._16_8_ =
           dVar83 * auVar200._16_8_ + dVar28 * auVar159._0_8_ + auVar45._0_8_ * auVar4._16_8_;
      auVar97._0_16_ = auVar87;
      auVar97._24_8_ =
           dVar84 * auVar200._24_8_ + dVar37 * auVar159._0_8_ + auVar45._8_8_ * auVar4._24_8_;
      auVar4 = vpermpd_avx2(auVar128,0x55);
      auVar200 = vpermpd_avx2(auVar128,0xaa);
      *(undefined1 (*) [16])param_1[0x18] = auVar165;
      auVar112._0_8_ = dVar103 * auVar200._0_8_ + dVar9 * auVar128._0_8_ + dVar38 * auVar4._0_8_;
      auVar112._8_8_ = dVar162 * auVar200._8_8_ + dVar161 * auVar128._0_8_ + dVar39 * auVar4._8_8_;
      auVar129._16_8_ =
           dVar83 * auVar200._16_8_ + dVar28 * auVar128._0_8_ + auVar45._0_8_ * auVar4._16_8_;
      auVar129._0_16_ = auVar112;
      auVar129._24_8_ =
           dVar84 * auVar200._24_8_ + dVar37 * auVar128._0_8_ + auVar45._8_8_ * auVar4._24_8_;
      uVar1 = vmovlpd_avx(auVar171._16_16_);
      *(undefined8 *)(param_1[0x18] + 0x10) = uVar1;
      *(undefined8 *)param_1[0x19] = 0;
      *(undefined1 (*) [16])(param_1[0x19] + 8) = auVar87;
      uVar1 = vmovlpd_avx(auVar97._16_16_);
      *(undefined8 *)param_1[0x1a] = uVar1;
      *(undefined8 *)(param_1[0x1a] + 8) = 0;
      *(undefined1 (*) [16])(param_1[0x1a] + 0x10) = auVar112;
      uVar1 = vmovlpd_avx(auVar129._16_16_);
      *(undefined8 *)(param_1[0x1b] + 8) = uVar1;
      *(undefined8 *)(param_1[0x1b] + 0x10) = 0;
      *(undefined8 *)param_1[0x1c] = 0;
      *(undefined8 *)(param_1[0x1c] + 8) = 0;
      *(undefined8 *)(param_1[0x1c] + 0x10) = 0;
      *(undefined8 *)param_1[0x1d] = 0x3ff0000000000000;
      dVar162 = *(double *)(param_1[10] + 8);
    }
    dVar194 = _UNK_150b54438;
    dVar39 = _UNK_150b54430;
    dVar38 = _UNK_150b54428;
    dVar37 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
    dVar28 = _UNK_150b54418;
    dVar161 = _UNK_150b54410;
    dVar9 = _UNK_150b54408;
    dVar84 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
    dVar83 = _UNK_15076c6f8;
    dVar103 = ___xmm_bff00000000000003ff0000000000000;
    if (dVar162 <= 0.0) goto LAB_1409e9254;
    dVar162 = (double)((ulonglong)dVar136 ^ uVar63);
    auVar34._0_8_ = dVar162 * dVar3;
    auVar34._8_8_ = dVar162 * dVar6;
    auVar34._16_8_ = dVar162 * dVar7;
    auVar34._24_8_ = dVar162 * dVar8;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = *(ulonglong *)(param_1[0x13] + 0x10);
    auVar109 = vmovhpd_avx(auVar12,*(undefined8 *)(param_1[0x13] + 8));
    auVar22._8_8_ = 0;
    auVar22._0_8_ = *(ulonglong *)param_1[0x13];
    auVar139 = vmovhpd_avx(auVar22,*(undefined8 *)(param_1[0x12] + 0x10));
    auVar4 = vpermpd_avx2(auVar34,0x55);
    auVar200 = vpermpd_avx2(auVar34,0xaa);
    dVar3 = (___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
             auVar200._0_8_ * auVar139._0_8_ +
            ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
            auVar4._0_8_ * *(double *)(param_1[0x13] + 8) +
            *(double *)(param_1[0x12] + 0x10) * 0.0 +
            auVar34._0_8_ * auVar109._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
            __real_3fe0000000000000 + *(double *)(param_1[0x12] + 0x10);
    dVar6 = (_UNK_150b54428 * auVar200._8_8_ * auVar139._8_8_ +
            _UNK_150b54408 * auVar4._8_8_ * *(double *)(param_1[0x13] + 0x10) +
            *(double *)param_1[0x13] * 0.0 + auVar34._0_8_ * auVar109._8_8_ * _UNK_15076c6f8) *
            __real_3fe0000000000000 + *(double *)param_1[0x13];
    dVar7 = (_UNK_150b54430 * auVar200._16_8_ * auVar109._0_8_ +
            _UNK_150b54410 * auVar4._16_8_ * *(double *)(param_1[0x12] + 0x10) +
            *(double *)(param_1[0x13] + 8) * 0.0 +
            auVar34._0_8_ * auVar139._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
            __real_3fe0000000000000 + *(double *)(param_1[0x13] + 8);
    dVar101 = (_UNK_150b54438 * auVar200._24_8_ * auVar109._8_8_ +
              _UNK_150b54418 * auVar4._24_8_ * *(double *)param_1[0x13] +
              *(double *)(param_1[0x13] + 0x10) * 0.0 +
              auVar34._0_8_ * auVar139._8_8_ * _UNK_15076c6f8) * __real_3fe0000000000000 +
              *(double *)(param_1[0x13] + 0x10);
    auVar46._0_8_ = dVar3 * dVar3 + dVar7 * dVar7;
    auVar46._8_8_ = dVar6 * dVar6 + dVar101 * dVar101;
    auVar109 = vshufpd_avx(auVar46,auVar46,1);
    dVar162 = auVar46._0_8_ + auVar109._0_8_;
    auVar71._8_8_ = 0;
    auVar71._0_8_ = __real_3e45798ee2308c3a;
    auVar47._8_8_ = 0;
    auVar47._0_8_ = dVar162;
    auVar109 = vcmpsd_avx(auVar71,auVar47,6);
    uVar63 = ~auVar109._0_8_ & __real_ffffffffffffffff;
    dVar162 = __real_3ff0000000000000 / SQRT(dVar162);
    dVar8 = (double)(((ulonglong)(dVar3 * dVar162) ^
                     ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) &
                    uVar63);
    dVar3 = (double)(((ulonglong)(dVar6 * dVar162) ^ _UNK_150b54548) & uVar63);
    dVar62 = (double)(((ulonglong)(dVar7 * dVar162) ^ _UNK_150b54550) & uVar63);
    dVar162 = (double)(((ulonglong)(dVar101 * dVar162) ^ _UNK_150b54558) & uVar63);
    auVar80._0_8_ =
         (double)((ulonglong)dVar8 ^
                 ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
    auVar80._8_8_ = (double)((ulonglong)dVar3 ^ _UNK_150b54548);
    auVar80._16_8_ = (double)((ulonglong)dVar62 ^ _UNK_150b54550);
    auVar80._24_8_ = (double)((ulonglong)dVar162 ^ _UNK_150b54558);
    *(undefined1 (*) [32])(param_1[0x12] + 0x10) = auVar80;
    auVar113._8_8_ = 0;
    auVar113._0_8_ = *(ulonglong *)(param_1[5] + 8);
    uVar1 = *(undefined8 *)(param_1[6] + 8);
    auVar148._8_8_ = uVar1;
    auVar148._0_8_ = uVar1;
    auVar160._16_8_ = uVar1;
    auVar160._0_16_ = auVar148;
    auVar160._24_8_ = uVar1;
    auVar109 = vunpcklpd_avx(auVar113,auVar148);
    auVar200 = vpermpd_avx2(auVar80,0xc9);
    auVar2 = *(undefined1 (*) [24])(param_1[5] + 8);
    auVar172._24_8_ = 0;
    auVar172._0_24_ = auVar2;
    auVar4 = vblendpd_avx(auVar172,auVar160,8);
    dVar6 = auVar80._0_8_ * SUB168(*(undefined1 (*) [16])(param_1[5] + 0x10),0) -
            auVar4._0_8_ * auVar200._0_8_;
    dVar7 = auVar80._8_8_ * SUB168(*(undefined1 (*) [16])(param_1[5] + 0x10),8) -
            auVar4._8_8_ * auVar200._8_8_;
    dVar101 = auVar80._16_8_ * auVar109._0_8_ - auVar4._16_8_ * auVar200._16_8_;
    dVar135 = auVar80._24_8_ * auVar109._8_8_ - auVar4._24_8_ * auVar200._24_8_;
    auVar130._0_8_ = dVar6 + dVar6;
    auVar130._8_8_ = dVar7 + dVar7;
    auVar130._16_8_ = dVar101 + dVar101;
    auVar130._24_8_ = dVar135 + dVar135;
    auVar4 = vpermpd_avx2(auVar80,0xff);
    auVar200 = vpermpd_avx2(auVar130,0xc9);
    dVar101 = auVar4._0_8_;
    dVar135 = auVar4._8_8_;
    dVar100 = auVar4._16_8_;
    dVar102 = auVar4._24_8_;
    auVar4 = vpermpd_avx2(auVar130,0xd2);
    auVar131._0_8_ = auVar130._0_8_ * dVar8;
    auVar131._8_8_ = auVar130._8_8_ * dVar3;
    auVar131._16_8_ = auVar130._16_8_ * dVar62;
    auVar131._24_8_ = auVar130._24_8_ * dVar162;
    auVar5 = vpermpd_avx2(auVar131,0xc9);
    auVar132._0_8_ = dVar8 * auVar4._0_8_ - auVar5._0_8_;
    auVar132._8_8_ = dVar3 * auVar4._8_8_ - auVar5._8_8_;
    auVar132._16_8_ = dVar62 * auVar4._16_8_ - auVar5._16_8_;
    auVar132._24_8_ = dVar162 * auVar4._24_8_ - auVar5._24_8_;
    auVar4 = vpermpd_avx2(auVar132,0xc9);
    auVar114._0_8_ =
         *(double *)(param_1[0x10] + 8) + dVar101 * auVar200._0_8_ + auVar2._0_8_ + auVar4._0_8_;
    auVar114._8_8_ =
         *(double *)(param_1[0x10] + 0x10) + dVar135 * auVar200._8_8_ + auVar2._8_8_ + auVar4._8_8_;
    auVar133._16_8_ =
         *(double *)param_1[0x11] + dVar100 * auVar200._16_8_ + auVar2._16_8_ + auVar4._16_8_;
    auVar133._0_16_ = auVar114;
    auVar133._24_8_ = dVar102 * auVar200._24_8_ + 0.0 + auVar4._24_8_ + 0.0;
    *(undefined1 (*) [16])(param_1[0xb] + 0x10) = auVar114;
    uVar1 = vmovlpd_avx(auVar133._16_16_);
    *(undefined8 *)(param_1[0xc] + 8) = uVar1;
    auVar149._8_8_ = 0;
    auVar149._0_8_ = *(ulonglong *)(param_1[4] + 8);
    auVar109 = vmovhpd_avx(auVar149,*(undefined8 *)param_1[4]);
    auVar166._8_8_ = 0;
    auVar166._0_8_ = *(ulonglong *)param_1[5];
    auVar139 = vmovhpd_avx(auVar166,*(undefined8 *)(param_1[4] + 0x10));
    dVar3 = *(double *)(param_1[4] + 8);
    auVar2 = param_1[4];
    dVar162 = *(double *)param_1[5];
    auVar4 = vpermpd_avx2(auVar80,0x55);
    dVar6 = *(double *)param_1[4];
    dVar7 = *(double *)(param_1[4] + 8);
    auVar200 = vpermpd_avx2(auVar80,0xaa);
    *(double *)param_1[0xe] =
         dVar37 * auVar109._0_8_ * auVar200._0_8_ +
         dVar84 * *(double *)(param_1[4] + 0x10) * auVar4._0_8_ +
         dVar101 * *(double *)param_1[4] + auVar139._0_8_ * dVar8 * dVar103;
    *(double *)(param_1[0xe] + 8) =
         dVar38 * auVar109._8_8_ * auVar200._8_8_ +
         dVar9 * *(double *)param_1[5] * auVar4._8_8_ +
         dVar135 * dVar3 + auVar139._8_8_ * dVar8 * dVar83;
    *(double *)(param_1[0xe] + 0x10) =
         dVar39 * auVar139._0_8_ * auVar200._16_8_ +
         dVar161 * dVar6 * auVar4._16_8_ +
         dVar100 * auVar2._16_8_ + auVar109._0_8_ * dVar8 * dVar103;
    *(double *)param_1[0xf] =
         dVar194 * auVar139._8_8_ * auVar200._24_8_ +
         dVar28 * dVar7 * auVar4._24_8_ + dVar102 * dVar162 + auVar109._8_8_ * dVar8 * dVar83;
    dVar103 = auVar80._0_8_ + auVar80._0_8_;
    dVar162 = auVar80._8_8_ + auVar80._8_8_;
    dVar83 = auVar80._16_8_ + auVar80._16_8_;
    dVar84 = auVar80._24_8_ + auVar80._24_8_;
    auVar57._0_8_ = dVar8 * dVar103;
    auVar57._8_8_ = dVar8 * dVar162;
    auVar57._16_8_ = dVar8 * dVar83;
    auVar57._24_8_ = dVar8 * dVar84;
    auVar72._0_8_ = auVar4._0_8_ * dVar103;
    auVar72._8_8_ = auVar4._8_8_ * dVar162;
    auVar81._16_8_ = auVar4._16_8_ * dVar83;
    auVar81._0_16_ = auVar72;
    auVar81._24_8_ = auVar4._24_8_ * dVar84;
    auVar27._0_8_ = dVar103 * dVar101;
    auVar27._8_8_ = dVar162 * dVar135;
    auVar27._16_8_ = dVar83 * dVar100;
    auVar27._24_8_ = dVar84 * dVar102;
    auVar4 = vperm2f128_avx(auVar81,auVar57,0x21);
    auVar4 = vshufpd_avx(auVar4,ZEXT1632(auVar57._16_16_),4);
    auVar13._0_8_ = auVar27._0_8_ + auVar4._0_8_;
    auVar13._8_8_ = auVar27._8_8_ + auVar4._8_8_;
    auVar18._16_8_ = auVar27._16_8_ + auVar4._16_8_;
    auVar18._0_16_ = auVar13;
    auVar18._24_8_ = auVar27._24_8_ + auVar4._24_8_;
    auVar5 = vsubpd_avx(auVar4,auVar27);
    auVar109 = vshufpd_avx(auVar72,auVar72,1);
    auVar58._8_8_ = auVar57._0_8_;
    auVar58._0_8_ = auVar57._0_8_;
    auVar58._16_8_ = auVar57._0_8_;
    auVar58._24_8_ = auVar57._0_8_;
    auVar4 = vblendpd_avx(auVar58,ZEXT1632(auVar109),1);
    auVar200 = vpermpd_avx2(auVar81,0x55);
    auVar200 = vblendpd_avx(ZEXT1632(CONCAT88(dVar62 * dVar83,dVar62 * dVar83)),auVar200,0xc);
    auVar35._0_8_ = auVar4._0_8_ + auVar200._0_8_;
    auVar35._8_8_ = auVar4._8_8_ + auVar200._8_8_;
    auVar35._16_8_ = auVar4._16_8_ + auVar200._16_8_;
    auVar35._24_8_ = auVar4._24_8_ + auVar200._24_8_;
    auVar59._8_8_ = __real_3ff0000000000000;
    auVar59._0_8_ = __real_3ff0000000000000;
    auVar59._16_8_ = __real_3ff0000000000000;
    auVar59._24_8_ = __real_3ff0000000000000;
    auVar200 = vsubpd_avx(auVar59,auVar35);
    dVar83 = auVar200._0_8_;
    dVar103 = *(double *)param_1[9];
    dVar162 = *(double *)(param_1[9] + 0x10);
    auVar109 = vmovhpd_avx(ZEXT816(0) << 0x40,*(undefined8 *)(param_1[9] + 8));
    auVar4 = vpermpd_avx2(auVar5,0xaa);
    dVar84 = auVar109._0_8_;
    dVar9 = auVar109._8_8_;
    auVar74 = vpermpd_avx2(auVar18,0x55);
    auVar98._0_8_ = auVar74._0_8_ * 0.0 + dVar84 * auVar4._0_8_ + dVar103 * dVar83;
    auVar98._8_8_ = auVar74._8_8_ * 0.0 + dVar9 * auVar4._8_8_ + dVar83 * 0.0;
    auVar98._16_8_ = dVar162 * auVar74._16_8_ + auVar4._16_8_ * 0.0 + dVar83 * 0.0;
    auVar98._24_8_ = auVar74._24_8_ * 0.0 + auVar4._24_8_ * 0.0 + dVar83 * 0.0;
    auVar4 = vpermpd_avx2(auVar18,0xaa);
    auVar74 = vpermpd_avx2(auVar200,0x55);
    dVar83 = auVar5._0_8_;
    auVar82._0_8_ = dVar83 * 0.0 + dVar103 * auVar4._0_8_ + dVar84 * auVar74._0_8_;
    auVar82._8_8_ = dVar83 * 0.0 + auVar4._8_8_ * 0.0 + dVar9 * auVar74._8_8_;
    auVar82._16_8_ = dVar162 * dVar83 + auVar4._16_8_ * 0.0 + auVar74._16_8_ * 0.0;
    auVar82._24_8_ = dVar83 * 0.0 + auVar4._24_8_ * 0.0 + auVar74._24_8_ * 0.0;
    auVar4 = vpermpd_avx2(auVar5,0x55);
    auVar74 = vpermpd_avx2(auVar200,0xaa);
    auVar60._0_8_ = auVar74._0_8_ * 0.0 + auVar4._0_8_ * dVar103 + dVar84 * auVar13._0_8_;
    auVar60._8_8_ = auVar74._8_8_ * 0.0 + auVar4._8_8_ * 0.0 + dVar9 * auVar13._0_8_;
    auVar60._16_8_ = dVar162 * auVar74._16_8_ + auVar4._16_8_ * 0.0 + auVar13._0_8_ * 0.0;
    auVar60._24_8_ = auVar74._24_8_ * 0.0 + auVar4._24_8_ * 0.0 + auVar13._0_8_ * 0.0;
    auVar109 = vunpcklpd_avx(auVar200._0_16_,auVar18._16_16_);
    auVar4 = vblendpd_avx(ZEXT1632(auVar109),auVar4,0xc);
    auVar74 = vpermpd_avx2(auVar98,0x55);
    auVar109 = vblendpd_avx(auVar200._0_16_,auVar5._16_16_,1);
    dVar7 = auVar109._0_8_;
    dVar8 = auVar109._8_8_;
    dVar9 = auVar4._0_8_;
    dVar161 = auVar4._8_8_;
    dVar3 = auVar4._16_8_;
    dVar6 = auVar4._24_8_;
    auVar89 = vpermpd_avx2(auVar98,0xaa);
    auVar109 = vshufpd_avx(auVar13,auVar5._0_16_,1);
    auVar4 = vblendpd_avx(auVar200,ZEXT1632(auVar109),3);
    dVar103 = auVar4._0_8_;
    auVar88._0_8_ = dVar103 * auVar89._0_8_ + dVar9 * auVar98._0_8_ + dVar7 * auVar74._0_8_;
    dVar162 = auVar4._8_8_;
    auVar88._8_8_ = dVar162 * auVar89._8_8_ + dVar161 * auVar98._0_8_ + dVar8 * auVar74._8_8_;
    dVar83 = auVar4._16_8_;
    auVar99._16_8_ =
         dVar83 * auVar89._16_8_ + dVar3 * auVar98._0_8_ + auVar13._0_8_ * auVar74._16_8_;
    auVar99._0_16_ = auVar88;
    dVar84 = auVar4._24_8_;
    auVar99._24_8_ =
         dVar84 * auVar89._24_8_ + dVar6 * auVar98._0_8_ + auVar13._8_8_ * auVar74._24_8_;
    auVar4 = vpermpd_avx2(auVar82,0x55);
    auVar200 = vpermpd_avx2(auVar82,0xaa);
    auVar30._0_8_ = dVar103 * auVar200._0_8_ + dVar9 * auVar82._0_8_ + dVar7 * auVar4._0_8_;
    auVar30._8_8_ = dVar162 * auVar200._8_8_ + dVar161 * auVar82._0_8_ + dVar8 * auVar4._8_8_;
    auVar36._16_8_ =
         dVar83 * auVar200._16_8_ + dVar3 * auVar82._0_8_ + auVar13._0_8_ * auVar4._16_8_;
    auVar36._0_16_ = auVar30;
    auVar36._24_8_ =
         dVar84 * auVar200._24_8_ + dVar6 * auVar82._0_8_ + auVar13._8_8_ * auVar4._24_8_;
    auVar4 = vpermpd_avx2(auVar60,0x55);
    auVar200 = vpermpd_avx2(auVar60,0xaa);
    *(undefined1 (*) [16])(param_1[0x1d] + 8) = auVar88;
    uVar1 = vmovlpd_avx(auVar99._16_16_);
    *(undefined8 *)param_1[0x1e] = uVar1;
    auVar48._0_8_ = dVar103 * auVar200._0_8_ + dVar9 * auVar60._0_8_ + dVar7 * auVar4._0_8_;
    auVar48._8_8_ = dVar162 * auVar200._8_8_ + dVar161 * auVar60._0_8_ + dVar8 * auVar4._8_8_;
    auVar61._16_8_ =
         dVar83 * auVar200._16_8_ + dVar3 * auVar60._0_8_ + auVar13._0_8_ * auVar4._16_8_;
    auVar61._0_16_ = auVar48;
    auVar61._24_8_ =
         dVar84 * auVar200._24_8_ + dVar6 * auVar60._0_8_ + auVar13._8_8_ * auVar4._24_8_;
    *(undefined8 *)(param_1[0x1e] + 8) = 0;
    *(undefined1 (*) [16])(param_1[0x1e] + 0x10) = auVar30;
    uVar1 = vmovlpd_avx(auVar36._16_16_);
    *(undefined8 *)(param_1[0x1f] + 8) = uVar1;
    *(undefined8 *)(param_1[0x1f] + 0x10) = 0;
    *(undefined1 (*) [16])param_1[0x20] = auVar48;
    uVar1 = vmovlpd_avx(auVar61._16_16_);
    *(undefined8 *)(param_1[0x20] + 0x10) = uVar1;
    *(undefined8 *)param_1[0x21] = 0;
    *(undefined8 *)(param_1[0x21] + 8) = 0;
    *(undefined8 *)(param_1[0x21] + 0x10) = 0;
    *(undefined8 *)param_1[0x22] = 0;
  }
  else {
    if (__real_3f1a36e2eb1c432d < param_4) {
      auVar198._24_8_ = 0;
      auVar198._0_24_ = *(undefined1 (*) [24])(param_1[0x27] + 8);
      auVar4 = vsubpd_avx(auVar150,auVar198);
      auVar199._24_8_ = 0;
      auVar199._0_24_ = *(undefined1 (*) [24])(param_1[0x28] + 8);
      auVar200 = vsubpd_avx(auVar177,auVar199);
      auVar4 = vsubpd_avx(auVar4,auVar200);
      auVar138._0_8_ = dVar9 * auVar4._0_8_;
      auVar138._8_8_ = dVar161 * auVar4._8_8_;
      auVar109 = vshufpd_avx(auVar138,auVar138,1);
      dVar194 = param_2 * param_8 + dVar136 * auVar4._16_8_ + auVar138._0_8_ + auVar109._0_8_;
    }
    dVar136 = __real_3ff0000000000000;
    if ((param_5 & 1) != 0) {
      dVar136 = __real_3ff0000000000000 / (dVar103 + dVar162);
    }
    dVar84 = dVar136 * param_3 * param_2 * param_2;
    param_2 = dVar136 * param_4 * param_2;
    dVar136 = ((dVar84 * param_7 - dVar194 * param_2) - *param_9) *
              (__real_3ff0000000000000 / (dVar83 * (param_2 + dVar84) + __real_3ff0000000000000)) *
              *(double *)param_1[0x33];
    dVar83 = dVar103 * dVar136;
    dVar9 = param_6[1];
    dVar161 = param_6[2];
    dVar194 = *param_6;
    dVar84 = (double)((ulonglong)dVar162 ^ __real_8000000000000000) * dVar136;
    auVar140._0_8_ = dVar194 * dVar83 + *(double *)(param_1[0xf] + 8);
    auVar140._8_8_ = dVar9 * dVar83 + *(double *)(param_1[0xf] + 0x10);
    auVar151._16_8_ = dVar161 * dVar83 + *(double *)param_1[0x10];
    auVar151._0_16_ = auVar140;
    auVar151._24_8_ = dVar83 * 0.0 + 0.0;
    *(undefined1 (*) [16])(param_1[0xf] + 8) = auVar140;
    uVar1 = vmovlpd_avx(auVar151._16_16_);
    *(undefined8 *)param_1[0x10] = uVar1;
    auVar20._0_8_ = dVar194 * dVar84 + *(double *)(param_1[0x10] + 8);
    auVar20._8_8_ = dVar9 * dVar84 + *(double *)(param_1[0x10] + 0x10);
    auVar25._16_8_ = dVar161 * dVar84 + *(double *)param_1[0x11];
    auVar25._0_16_ = auVar20;
    auVar25._24_8_ = dVar84 * 0.0 + 0.0;
    uVar1 = vmovlpd_avx(auVar20);
    *(undefined8 *)(param_1[0x10] + 8) = uVar1;
    auVar4 = vpermpd_avx2(auVar25,0xe9);
    *(undefined1 (*) [16])(param_1[0x10] + 0x10) = auVar4._0_16_;
    dVar102 = _UNK_150b54438;
    dVar100 = _UNK_150b54430;
    dVar135 = _UNK_150b54428;
    dVar101 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
    dVar62 = _UNK_150b54418;
    dVar194 = _UNK_150b54410;
    dVar161 = _UNK_150b54408;
    dVar9 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
    dVar84 = _UNK_15076c6f8;
    dVar83 = ___xmm_bff00000000000003ff0000000000000;
    if (0.0 < dVar103) {
      auVar90._0_8_ = dVar136 * dVar28;
      auVar90._8_8_ = dVar136 * dVar37;
      auVar90._16_8_ = dVar136 * dVar38;
      auVar90._24_8_ = dVar136 * dVar39;
      auVar40._8_8_ = 0;
      auVar40._0_8_ = *(ulonglong *)(param_1[0x12] + 8);
      auVar109 = vmovhpd_avx(auVar40,*(undefined8 *)param_1[0x12]);
      auVar66._8_8_ = 0;
      auVar66._0_8_ = *(ulonglong *)(param_1[0x11] + 0x10);
      auVar139 = vmovhpd_avx(auVar66,*(undefined8 *)(param_1[0x11] + 8));
      auVar4 = vpermpd_avx2(auVar90,0x55);
      auVar200 = vpermpd_avx2(auVar90,0xaa);
      dVar162 = (___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
                 auVar139._0_8_ * auVar200._0_8_ +
                ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
                auVar4._0_8_ * *(double *)param_1[0x12] +
                *(double *)(param_1[0x11] + 8) * 0.0 +
                auVar90._0_8_ * auVar109._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
                __real_3fe0000000000000 + *(double *)(param_1[0x11] + 8);
      dVar28 = (_UNK_150b54428 * auVar139._8_8_ * auVar200._8_8_ +
               _UNK_150b54408 * auVar4._8_8_ * *(double *)(param_1[0x12] + 8) +
               *(double *)(param_1[0x11] + 0x10) * 0.0 +
               auVar90._0_8_ * auVar109._8_8_ * _UNK_15076c6f8) * __real_3fe0000000000000 +
               *(double *)(param_1[0x11] + 0x10);
      dVar37 = (_UNK_150b54430 * auVar109._0_8_ * auVar200._16_8_ +
               _UNK_150b54410 * auVar4._16_8_ * *(double *)(param_1[0x11] + 8) +
               *(double *)param_1[0x12] * 0.0 +
               auVar90._0_8_ * auVar139._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
               __real_3fe0000000000000 + *(double *)param_1[0x12];
      dVar38 = (_UNK_150b54438 * auVar109._8_8_ * auVar200._24_8_ +
               _UNK_150b54418 * auVar4._24_8_ * *(double *)(param_1[0x11] + 0x10) +
               *(double *)(param_1[0x12] + 8) * 0.0 +
               auVar90._0_8_ * auVar139._8_8_ * _UNK_15076c6f8) * __real_3fe0000000000000 +
               *(double *)(param_1[0x12] + 8);
      auVar104._0_8_ = dVar162 * dVar162 + dVar37 * dVar37;
      auVar104._8_8_ = dVar28 * dVar28 + dVar38 * dVar38;
      auVar109 = vshufpd_avx(auVar104,auVar104,1);
      dVar103 = auVar104._0_8_ + auVar109._0_8_;
      auVar141._8_8_ = 0;
      auVar141._0_8_ = __real_3e45798ee2308c3a;
      auVar105._8_8_ = 0;
      auVar105._0_8_ = dVar103;
      auVar109 = vcmpsd_avx(auVar141,auVar105,6);
      uVar137 = ~auVar109._0_8_ & __real_ffffffffffffffff;
      dVar103 = __real_3ff0000000000000 / SQRT(dVar103);
      dVar39 = (double)(((ulonglong)(dVar162 * dVar103) ^
                        ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) &
                       uVar137);
      dVar162 = (double)(((ulonglong)(dVar28 * dVar103) ^ _UNK_150b54548) & uVar137);
      dVar134 = (double)(((ulonglong)(dVar37 * dVar103) ^ _UNK_150b54550) & uVar137);
      dVar103 = (double)(((ulonglong)(dVar38 * dVar103) ^ _UNK_150b54558) & uVar137);
      auVar152._0_8_ =
           (double)((ulonglong)dVar39 ^
                   ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
      auVar152._8_8_ = (double)((ulonglong)dVar162 ^ _UNK_150b54548);
      auVar152._16_8_ = (double)((ulonglong)dVar134 ^ _UNK_150b54550);
      auVar152._24_8_ = (double)((ulonglong)dVar103 ^ _UNK_150b54558);
      *(undefined1 (*) [32])(param_1[0x11] + 8) = auVar152;
      auVar175._8_8_ = 0;
      auVar175._0_8_ = *(ulonglong *)(param_1[1] + 8);
      uVar1 = *(undefined8 *)(param_1[2] + 8);
      auVar184._8_8_ = uVar1;
      auVar184._0_8_ = uVar1;
      auVar189._16_8_ = uVar1;
      auVar189._0_16_ = auVar184;
      auVar189._24_8_ = uVar1;
      auVar109 = vunpcklpd_avx(auVar175,auVar184);
      auVar200 = vpermpd_avx2(auVar152,0xc9);
      auVar2 = *(undefined1 (*) [24])(param_1[1] + 8);
      auVar202._24_8_ = 0;
      auVar202._0_24_ = auVar2;
      auVar4 = vblendpd_avx(auVar202,auVar189,8);
      dVar28 = auVar152._0_8_ * SUB168(*(undefined1 (*) [16])(param_1[1] + 0x10),0) -
               auVar4._0_8_ * auVar200._0_8_;
      dVar37 = auVar152._8_8_ * SUB168(*(undefined1 (*) [16])(param_1[1] + 0x10),8) -
               auVar4._8_8_ * auVar200._8_8_;
      dVar38 = auVar152._16_8_ * auVar109._0_8_ - auVar4._16_8_ * auVar200._16_8_;
      dVar183 = auVar152._24_8_ * auVar109._8_8_ - auVar4._24_8_ * auVar200._24_8_;
      auVar178._0_8_ = dVar28 + dVar28;
      auVar178._8_8_ = dVar37 + dVar37;
      auVar178._16_8_ = dVar38 + dVar38;
      auVar178._24_8_ = dVar183 + dVar183;
      auVar4 = vpermpd_avx2(auVar152,0xff);
      auVar200 = vpermpd_avx2(auVar178,0xc9);
      dVar183 = auVar4._0_8_;
      dVar173 = auVar4._8_8_;
      dVar174 = auVar4._16_8_;
      dVar182 = auVar4._24_8_;
      auVar4 = vpermpd_avx2(auVar178,0xd2);
      auVar179._0_8_ = auVar178._0_8_ * dVar39;
      auVar179._8_8_ = auVar178._8_8_ * dVar162;
      auVar179._16_8_ = auVar178._16_8_ * dVar134;
      auVar179._24_8_ = auVar178._24_8_ * dVar103;
      auVar5 = vpermpd_avx2(auVar179,0xc9);
      auVar180._0_8_ = dVar39 * auVar4._0_8_ - auVar5._0_8_;
      auVar180._8_8_ = dVar162 * auVar4._8_8_ - auVar5._8_8_;
      auVar180._16_8_ = dVar134 * auVar4._16_8_ - auVar5._16_8_;
      auVar180._24_8_ = dVar103 * auVar4._24_8_ - auVar5._24_8_;
      auVar4 = vpermpd_avx2(auVar180,0xc9);
      auVar176._0_8_ =
           *(double *)(param_1[0xf] + 8) + dVar183 * auVar200._0_8_ + auVar2._0_8_ + auVar4._0_8_;
      auVar176._8_8_ =
           *(double *)(param_1[0xf] + 0x10) + dVar173 * auVar200._8_8_ + auVar2._8_8_ + auVar4._8_8_
      ;
      auVar181._16_8_ =
           *(double *)param_1[0x10] + dVar174 * auVar200._16_8_ + auVar2._16_8_ + auVar4._16_8_;
      auVar181._0_16_ = auVar176;
      auVar181._24_8_ = dVar182 * auVar200._24_8_ + 0.0 + auVar4._24_8_ + 0.0;
      *(undefined1 (*) [16])(param_1[10] + 0x10) = auVar176;
      uVar1 = vmovlpd_avx(auVar181._16_16_);
      *(undefined8 *)(param_1[0xb] + 8) = uVar1;
      auVar185._8_8_ = 0;
      auVar185._0_8_ = *(ulonglong *)(*param_1 + 8);
      auVar109 = vmovhpd_avx(auVar185,*(undefined8 *)*param_1);
      auVar195._8_8_ = 0;
      auVar195._0_8_ = *(ulonglong *)param_1[1];
      auVar139 = vmovhpd_avx(auVar195,*(undefined8 *)(*param_1 + 0x10));
      dVar162 = *(double *)(*param_1 + 8);
      auVar2 = *param_1;
      dVar103 = *(double *)param_1[1];
      auVar4 = vpermpd_avx2(auVar152,0x55);
      dVar28 = *(double *)param_1[1];
      dVar37 = *(double *)*param_1;
      dVar38 = *(double *)(*param_1 + 8);
      auVar200 = vpermpd_avx2(auVar152,0xaa);
      *(double *)(param_1[0xc] + 0x10) =
           dVar101 * auVar109._0_8_ * auVar200._0_8_ +
           dVar9 * *(double *)(*param_1 + 0x10) * auVar4._0_8_ +
           dVar183 * *(double *)*param_1 + auVar139._0_8_ * dVar39 * dVar83;
      *(double *)param_1[0xd] =
           dVar135 * auVar109._8_8_ * auVar200._8_8_ +
           dVar161 * dVar28 * auVar4._8_8_ + dVar173 * dVar162 + auVar139._8_8_ * dVar39 * dVar84;
      *(double *)(param_1[0xd] + 8) =
           dVar100 * auVar139._0_8_ * auVar200._16_8_ +
           dVar194 * dVar37 * auVar4._16_8_ +
           dVar174 * auVar2._16_8_ + auVar109._0_8_ * dVar39 * dVar83;
      *(double *)(param_1[0xd] + 0x10) =
           dVar102 * auVar139._8_8_ * auVar200._24_8_ +
           dVar62 * dVar38 * auVar4._24_8_ + dVar182 * dVar103 + auVar109._8_8_ * dVar39 * dVar84;
      dVar103 = auVar152._0_8_ + auVar152._0_8_;
      dVar162 = auVar152._8_8_ + auVar152._8_8_;
      dVar83 = auVar152._16_8_ + auVar152._16_8_;
      dVar84 = auVar152._24_8_ + auVar152._24_8_;
      auVar115._0_8_ = dVar39 * dVar103;
      auVar115._8_8_ = dVar39 * dVar162;
      auVar115._16_8_ = dVar39 * dVar83;
      auVar115._24_8_ = dVar39 * dVar84;
      auVar142._0_8_ = auVar4._0_8_ * dVar103;
      auVar142._8_8_ = auVar4._8_8_ * dVar162;
      auVar153._16_8_ = auVar4._16_8_ * dVar83;
      auVar153._0_16_ = auVar142;
      auVar153._24_8_ = auVar4._24_8_ * dVar84;
      auVar75._0_8_ = dVar183 * dVar103;
      auVar75._8_8_ = dVar173 * dVar162;
      auVar75._16_8_ = dVar174 * dVar83;
      auVar75._24_8_ = dVar182 * dVar84;
      auVar4 = vperm2f128_avx(auVar153,auVar115,0x21);
      auVar4 = vshufpd_avx(auVar4,ZEXT1632(auVar115._16_16_),4);
      auVar41._0_8_ = auVar4._0_8_ + auVar75._0_8_;
      auVar41._8_8_ = auVar4._8_8_ + auVar75._8_8_;
      auVar50._16_8_ = auVar4._16_8_ + auVar75._16_8_;
      auVar50._0_16_ = auVar41;
      auVar50._24_8_ = auVar4._24_8_ + auVar75._24_8_;
      auVar5 = vsubpd_avx(auVar4,auVar75);
      auVar109 = vshufpd_avx(auVar142,auVar142,1);
      auVar116._8_8_ = auVar115._0_8_;
      auVar116._0_8_ = auVar115._0_8_;
      auVar116._16_8_ = auVar115._0_8_;
      auVar116._24_8_ = auVar115._0_8_;
      auVar4 = vblendpd_avx(auVar116,ZEXT1632(auVar109),1);
      auVar200 = vpermpd_avx2(auVar153,0x55);
      auVar200 = vblendpd_avx(ZEXT1632(CONCAT88(dVar134 * dVar83,dVar134 * dVar83)),auVar200,0xc);
      auVar91._0_8_ = auVar4._0_8_ + auVar200._0_8_;
      auVar91._8_8_ = auVar4._8_8_ + auVar200._8_8_;
      auVar91._16_8_ = auVar4._16_8_ + auVar200._16_8_;
      auVar91._24_8_ = auVar4._24_8_ + auVar200._24_8_;
      auVar117._8_8_ = __real_3ff0000000000000;
      auVar117._0_8_ = __real_3ff0000000000000;
      auVar117._16_8_ = __real_3ff0000000000000;
      auVar117._24_8_ = __real_3ff0000000000000;
      auVar200 = vsubpd_avx(auVar117,auVar91);
      dVar83 = auVar200._0_8_;
      dVar103 = *(double *)param_1[8];
      dVar162 = *(double *)(param_1[8] + 0x10);
      auVar109 = vmovhpd_avx(ZEXT816(0) << 0x40,*(undefined8 *)(param_1[8] + 8));
      auVar4 = vpermpd_avx2(auVar5,0xaa);
      dVar84 = auVar109._0_8_;
      dVar9 = auVar109._8_8_;
      auVar74 = vpermpd_avx2(auVar50,0x55);
      auVar167._0_8_ = auVar74._0_8_ * 0.0 + dVar84 * auVar4._0_8_ + dVar103 * dVar83;
      auVar167._8_8_ = auVar74._8_8_ * 0.0 + dVar9 * auVar4._8_8_ + dVar83 * 0.0;
      auVar167._16_8_ = dVar162 * auVar74._16_8_ + auVar4._16_8_ * 0.0 + dVar83 * 0.0;
      auVar167._24_8_ = auVar74._24_8_ * 0.0 + auVar4._24_8_ * 0.0 + dVar83 * 0.0;
      auVar4 = vpermpd_avx2(auVar50,0xaa);
      auVar74 = vpermpd_avx2(auVar200,0x55);
      dVar83 = auVar5._0_8_;
      auVar154._0_8_ = dVar83 * 0.0 + dVar103 * auVar4._0_8_ + dVar84 * auVar74._0_8_;
      auVar154._8_8_ = dVar83 * 0.0 + auVar4._8_8_ * 0.0 + dVar9 * auVar74._8_8_;
      auVar154._16_8_ = dVar162 * dVar83 + auVar4._16_8_ * 0.0 + auVar74._16_8_ * 0.0;
      auVar154._24_8_ = dVar83 * 0.0 + auVar4._24_8_ * 0.0 + auVar74._24_8_ * 0.0;
      auVar4 = vpermpd_avx2(auVar5,0x55);
      auVar74 = vpermpd_avx2(auVar200,0xaa);
      auVar118._0_8_ = auVar74._0_8_ * 0.0 + auVar4._0_8_ * dVar103 + dVar84 * auVar41._0_8_;
      auVar118._8_8_ = auVar74._8_8_ * 0.0 + auVar4._8_8_ * 0.0 + dVar9 * auVar41._0_8_;
      auVar118._16_8_ = dVar162 * auVar74._16_8_ + auVar4._16_8_ * 0.0 + auVar41._0_8_ * 0.0;
      auVar118._24_8_ = auVar74._24_8_ * 0.0 + auVar4._24_8_ * 0.0 + auVar41._0_8_ * 0.0;
      auVar109 = vunpcklpd_avx(auVar200._0_16_,auVar50._16_16_);
      auVar4 = vblendpd_avx(ZEXT1632(auVar109),auVar4,0xc);
      auVar74 = vpermpd_avx2(auVar167,0x55);
      auVar109 = vblendpd_avx(auVar200._0_16_,auVar5._16_16_,1);
      dVar38 = auVar109._0_8_;
      dVar39 = auVar109._8_8_;
      dVar9 = auVar4._0_8_;
      dVar161 = auVar4._8_8_;
      dVar28 = auVar4._16_8_;
      dVar37 = auVar4._24_8_;
      auVar89 = vpermpd_avx2(auVar167,0xaa);
      auVar109 = vshufpd_avx(auVar41,auVar5._0_16_,1);
      auVar4 = vblendpd_avx(auVar200,ZEXT1632(auVar109),3);
      dVar103 = auVar4._0_8_;
      auVar163._0_8_ = dVar103 * auVar89._0_8_ + dVar9 * auVar167._0_8_ + dVar38 * auVar74._0_8_;
      dVar162 = auVar4._8_8_;
      auVar163._8_8_ = dVar162 * auVar89._8_8_ + dVar161 * auVar167._0_8_ + dVar39 * auVar74._8_8_;
      dVar83 = auVar4._16_8_;
      auVar168._16_8_ =
           dVar83 * auVar89._16_8_ + dVar28 * auVar167._0_8_ + auVar41._0_8_ * auVar74._16_8_;
      auVar168._0_16_ = auVar163;
      dVar84 = auVar4._24_8_;
      auVar168._24_8_ =
           dVar84 * auVar89._24_8_ + dVar37 * auVar167._0_8_ + auVar41._8_8_ * auVar74._24_8_;
      auVar4 = vpermpd_avx2(auVar154,0x55);
      auVar200 = vpermpd_avx2(auVar154,0xaa);
      auVar85._0_8_ = dVar103 * auVar200._0_8_ + dVar9 * auVar154._0_8_ + dVar38 * auVar4._0_8_;
      auVar85._8_8_ = dVar162 * auVar200._8_8_ + dVar161 * auVar154._0_8_ + dVar39 * auVar4._8_8_;
      auVar92._16_8_ =
           dVar83 * auVar200._16_8_ + dVar28 * auVar154._0_8_ + auVar41._0_8_ * auVar4._16_8_;
      auVar92._0_16_ = auVar85;
      auVar92._24_8_ =
           dVar84 * auVar200._24_8_ + dVar37 * auVar154._0_8_ + auVar41._8_8_ * auVar4._24_8_;
      auVar4 = vpermpd_avx2(auVar118,0x55);
      auVar200 = vpermpd_avx2(auVar118,0xaa);
      *(undefined1 (*) [16])param_1[0x18] = auVar163;
      uVar1 = vmovlpd_avx(auVar168._16_16_);
      *(undefined8 *)(param_1[0x18] + 0x10) = uVar1;
      auVar106._0_8_ = dVar103 * auVar200._0_8_ + dVar9 * auVar118._0_8_ + dVar38 * auVar4._0_8_;
      auVar106._8_8_ = dVar162 * auVar200._8_8_ + dVar161 * auVar118._0_8_ + dVar39 * auVar4._8_8_;
      auVar119._16_8_ =
           dVar83 * auVar200._16_8_ + dVar28 * auVar118._0_8_ + auVar41._0_8_ * auVar4._16_8_;
      auVar119._0_16_ = auVar106;
      auVar119._24_8_ =
           dVar84 * auVar200._24_8_ + dVar37 * auVar118._0_8_ + auVar41._8_8_ * auVar4._24_8_;
      *(undefined8 *)param_1[0x19] = 0;
      *(undefined1 (*) [16])(param_1[0x19] + 8) = auVar85;
      uVar1 = vmovlpd_avx(auVar92._16_16_);
      *(undefined8 *)param_1[0x1a] = uVar1;
      *(undefined8 *)(param_1[0x1a] + 8) = 0;
      *(undefined1 (*) [16])(param_1[0x1a] + 0x10) = auVar106;
      uVar1 = vmovlpd_avx(auVar119._16_16_);
      *(undefined8 *)(param_1[0x1b] + 8) = uVar1;
      *(undefined8 *)(param_1[0x1b] + 0x10) = 0;
      *(undefined8 *)param_1[0x1c] = 0;
      *(undefined8 *)(param_1[0x1c] + 8) = 0;
      *(undefined8 *)(param_1[0x1c] + 0x10) = 0;
      *(undefined8 *)param_1[0x1d] = 0x3ff0000000000000;
      dVar162 = *(double *)(param_1[10] + 8);
    }
    dVar194 = _UNK_150b54438;
    dVar39 = _UNK_150b54430;
    dVar38 = _UNK_150b54428;
    dVar37 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
    dVar28 = _UNK_150b54418;
    dVar161 = _UNK_150b54410;
    dVar9 = _UNK_150b54408;
    dVar84 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
    dVar83 = _UNK_15076c6f8;
    dVar103 = ___xmm_bff00000000000003ff0000000000000;
    if (dVar162 <= 0.0) goto LAB_1409e9254;
    dVar162 = (double)((ulonglong)dVar136 ^ uVar63);
    auVar31._0_8_ = dVar162 * dVar3;
    auVar31._8_8_ = dVar162 * dVar6;
    auVar31._16_8_ = dVar162 * dVar7;
    auVar31._24_8_ = dVar162 * dVar8;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = *(ulonglong *)(param_1[0x13] + 0x10);
    auVar109 = vmovhpd_avx(auVar10,*(undefined8 *)(param_1[0x13] + 8));
    auVar21._8_8_ = 0;
    auVar21._0_8_ = *(ulonglong *)param_1[0x13];
    auVar139 = vmovhpd_avx(auVar21,*(undefined8 *)(param_1[0x12] + 0x10));
    auVar4 = vpermpd_avx2(auVar31,0x55);
    auVar200 = vpermpd_avx2(auVar31,0xaa);
    dVar3 = (___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
             auVar200._0_8_ * auVar139._0_8_ +
            ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
            auVar4._0_8_ * *(double *)(param_1[0x13] + 8) +
            *(double *)(param_1[0x12] + 0x10) * 0.0 +
            auVar31._0_8_ * auVar109._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
            __real_3fe0000000000000 + *(double *)(param_1[0x12] + 0x10);
    dVar6 = (_UNK_150b54428 * auVar200._8_8_ * auVar139._8_8_ +
            _UNK_150b54408 * auVar4._8_8_ * *(double *)(param_1[0x13] + 0x10) +
            *(double *)param_1[0x13] * 0.0 + auVar31._0_8_ * auVar109._8_8_ * _UNK_15076c6f8) *
            __real_3fe0000000000000 + *(double *)param_1[0x13];
    dVar7 = (_UNK_150b54430 * auVar200._16_8_ * auVar109._0_8_ +
            _UNK_150b54410 * auVar4._16_8_ * *(double *)(param_1[0x12] + 0x10) +
            *(double *)(param_1[0x13] + 8) * 0.0 +
            auVar31._0_8_ * auVar139._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
            __real_3fe0000000000000 + *(double *)(param_1[0x13] + 8);
    dVar101 = (_UNK_150b54438 * auVar200._24_8_ * auVar109._8_8_ +
              _UNK_150b54418 * auVar4._24_8_ * *(double *)param_1[0x13] +
              *(double *)(param_1[0x13] + 0x10) * 0.0 +
              auVar31._0_8_ * auVar139._8_8_ * _UNK_15076c6f8) * __real_3fe0000000000000 +
              *(double *)(param_1[0x13] + 0x10);
    auVar42._0_8_ = dVar3 * dVar3 + dVar7 * dVar7;
    auVar42._8_8_ = dVar6 * dVar6 + dVar101 * dVar101;
    auVar109 = vshufpd_avx(auVar42,auVar42,1);
    dVar162 = auVar42._0_8_ + auVar109._0_8_;
    auVar67._8_8_ = 0;
    auVar67._0_8_ = __real_3e45798ee2308c3a;
    auVar43._8_8_ = 0;
    auVar43._0_8_ = dVar162;
    auVar109 = vcmpsd_avx(auVar67,auVar43,6);
    uVar63 = ~auVar109._0_8_ & __real_ffffffffffffffff;
    dVar162 = __real_3ff0000000000000 / SQRT(dVar162);
    dVar8 = (double)(((ulonglong)(dVar3 * dVar162) ^
                     ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) &
                    uVar63);
    dVar3 = (double)(((ulonglong)(dVar6 * dVar162) ^ _UNK_150b54548) & uVar63);
    dVar62 = (double)(((ulonglong)(dVar7 * dVar162) ^ _UNK_150b54550) & uVar63);
    dVar162 = (double)(((ulonglong)(dVar101 * dVar162) ^ _UNK_150b54558) & uVar63);
    auVar76._0_8_ =
         (double)((ulonglong)dVar8 ^
                 ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
    auVar76._8_8_ = (double)((ulonglong)dVar3 ^ _UNK_150b54548);
    auVar76._16_8_ = (double)((ulonglong)dVar62 ^ _UNK_150b54550);
    auVar76._24_8_ = (double)((ulonglong)dVar162 ^ _UNK_150b54558);
    *(undefined1 (*) [32])(param_1[0x12] + 0x10) = auVar76;
    auVar107._8_8_ = 0;
    auVar107._0_8_ = *(ulonglong *)(param_1[5] + 8);
    uVar1 = *(undefined8 *)(param_1[6] + 8);
    auVar143._8_8_ = uVar1;
    auVar143._0_8_ = uVar1;
    auVar155._16_8_ = uVar1;
    auVar155._0_16_ = auVar143;
    auVar155._24_8_ = uVar1;
    auVar109 = vunpcklpd_avx(auVar107,auVar143);
    auVar200 = vpermpd_avx2(auVar76,0xc9);
    auVar2 = *(undefined1 (*) [24])(param_1[5] + 8);
    auVar169._24_8_ = 0;
    auVar169._0_24_ = auVar2;
    auVar4 = vblendpd_avx(auVar169,auVar155,8);
    dVar6 = auVar76._0_8_ * SUB168(*(undefined1 (*) [16])(param_1[5] + 0x10),0) -
            auVar4._0_8_ * auVar200._0_8_;
    dVar7 = auVar76._8_8_ * SUB168(*(undefined1 (*) [16])(param_1[5] + 0x10),8) -
            auVar4._8_8_ * auVar200._8_8_;
    dVar101 = auVar76._16_8_ * auVar109._0_8_ - auVar4._16_8_ * auVar200._16_8_;
    dVar135 = auVar76._24_8_ * auVar109._8_8_ - auVar4._24_8_ * auVar200._24_8_;
    auVar120._0_8_ = dVar6 + dVar6;
    auVar120._8_8_ = dVar7 + dVar7;
    auVar120._16_8_ = dVar101 + dVar101;
    auVar120._24_8_ = dVar135 + dVar135;
    auVar4 = vpermpd_avx2(auVar76,0xff);
    auVar200 = vpermpd_avx2(auVar120,0xc9);
    dVar101 = auVar4._0_8_;
    dVar135 = auVar4._8_8_;
    dVar100 = auVar4._16_8_;
    dVar102 = auVar4._24_8_;
    auVar4 = vpermpd_avx2(auVar120,0xd2);
    auVar121._0_8_ = auVar120._0_8_ * dVar8;
    auVar121._8_8_ = auVar120._8_8_ * dVar3;
    auVar121._16_8_ = auVar120._16_8_ * dVar62;
    auVar121._24_8_ = auVar120._24_8_ * dVar162;
    auVar5 = vpermpd_avx2(auVar121,0xc9);
    auVar122._0_8_ = dVar8 * auVar4._0_8_ - auVar5._0_8_;
    auVar122._8_8_ = dVar3 * auVar4._8_8_ - auVar5._8_8_;
    auVar122._16_8_ = dVar62 * auVar4._16_8_ - auVar5._16_8_;
    auVar122._24_8_ = dVar162 * auVar4._24_8_ - auVar5._24_8_;
    auVar4 = vpermpd_avx2(auVar122,0xc9);
    auVar108._0_8_ =
         *(double *)(param_1[0x10] + 8) + dVar101 * auVar200._0_8_ + auVar2._0_8_ + auVar4._0_8_;
    auVar108._8_8_ =
         *(double *)(param_1[0x10] + 0x10) + dVar135 * auVar200._8_8_ + auVar2._8_8_ + auVar4._8_8_;
    auVar123._16_8_ =
         *(double *)param_1[0x11] + dVar100 * auVar200._16_8_ + auVar2._16_8_ + auVar4._16_8_;
    auVar123._0_16_ = auVar108;
    auVar123._24_8_ = dVar102 * auVar200._24_8_ + 0.0 + auVar4._24_8_ + 0.0;
    *(undefined1 (*) [16])(param_1[0xb] + 0x10) = auVar108;
    uVar1 = vmovlpd_avx(auVar123._16_16_);
    *(undefined8 *)(param_1[0xc] + 8) = uVar1;
    auVar144._8_8_ = 0;
    auVar144._0_8_ = *(ulonglong *)(param_1[4] + 8);
    auVar109 = vmovhpd_avx(auVar144,*(undefined8 *)param_1[4]);
    auVar164._8_8_ = 0;
    auVar164._0_8_ = *(ulonglong *)param_1[5];
    auVar139 = vmovhpd_avx(auVar164,*(undefined8 *)(param_1[4] + 0x10));
    dVar3 = *(double *)(param_1[4] + 8);
    auVar2 = param_1[4];
    dVar162 = *(double *)param_1[5];
    auVar4 = vpermpd_avx2(auVar76,0x55);
    dVar6 = *(double *)param_1[4];
    dVar7 = *(double *)(param_1[4] + 8);
    auVar200 = vpermpd_avx2(auVar76,0xaa);
    *(double *)param_1[0xe] =
         dVar37 * auVar109._0_8_ * auVar200._0_8_ +
         dVar84 * *(double *)(param_1[4] + 0x10) * auVar4._0_8_ +
         dVar101 * *(double *)param_1[4] + auVar139._0_8_ * dVar8 * dVar103;
    *(double *)(param_1[0xe] + 8) =
         dVar38 * auVar109._8_8_ * auVar200._8_8_ +
         dVar9 * *(double *)param_1[5] * auVar4._8_8_ +
         dVar135 * dVar3 + auVar139._8_8_ * dVar8 * dVar83;
    *(double *)(param_1[0xe] + 0x10) =
         dVar39 * auVar139._0_8_ * auVar200._16_8_ +
         dVar161 * dVar6 * auVar4._16_8_ +
         dVar100 * auVar2._16_8_ + auVar109._0_8_ * dVar8 * dVar103;
    *(double *)param_1[0xf] =
         dVar194 * auVar139._8_8_ * auVar200._24_8_ +
         dVar28 * dVar7 * auVar4._24_8_ + dVar102 * dVar162 + auVar109._8_8_ * dVar8 * dVar83;
    dVar103 = auVar76._0_8_ + auVar76._0_8_;
    dVar162 = auVar76._8_8_ + auVar76._8_8_;
    dVar83 = auVar76._16_8_ + auVar76._16_8_;
    dVar84 = auVar76._24_8_ + auVar76._24_8_;
    auVar51._0_8_ = dVar8 * dVar103;
    auVar51._8_8_ = dVar8 * dVar162;
    auVar51._16_8_ = dVar8 * dVar83;
    auVar51._24_8_ = dVar8 * dVar84;
    auVar68._0_8_ = auVar4._0_8_ * dVar103;
    auVar68._8_8_ = auVar4._8_8_ * dVar162;
    auVar77._16_8_ = auVar4._16_8_ * dVar83;
    auVar77._0_16_ = auVar68;
    auVar77._24_8_ = auVar4._24_8_ * dVar84;
    auVar26._0_8_ = dVar103 * dVar101;
    auVar26._8_8_ = dVar162 * dVar135;
    auVar26._16_8_ = dVar83 * dVar100;
    auVar26._24_8_ = dVar84 * dVar102;
    auVar4 = vperm2f128_avx(auVar77,auVar51,0x21);
    auVar4 = vshufpd_avx(auVar4,ZEXT1632(auVar51._16_16_),4);
    auVar11._0_8_ = auVar26._0_8_ + auVar4._0_8_;
    auVar11._8_8_ = auVar26._8_8_ + auVar4._8_8_;
    auVar17._16_8_ = auVar26._16_8_ + auVar4._16_8_;
    auVar17._0_16_ = auVar11;
    auVar17._24_8_ = auVar26._24_8_ + auVar4._24_8_;
    auVar5 = vsubpd_avx(auVar4,auVar26);
    auVar109 = vshufpd_avx(auVar68,auVar68,1);
    auVar52._8_8_ = auVar51._0_8_;
    auVar52._0_8_ = auVar51._0_8_;
    auVar52._16_8_ = auVar51._0_8_;
    auVar52._24_8_ = auVar51._0_8_;
    auVar4 = vblendpd_avx(auVar52,ZEXT1632(auVar109),1);
    auVar200 = vpermpd_avx2(auVar77,0x55);
    auVar200 = vblendpd_avx(ZEXT1632(CONCAT88(dVar62 * dVar83,dVar62 * dVar83)),auVar200,0xc);
    auVar32._0_8_ = auVar4._0_8_ + auVar200._0_8_;
    auVar32._8_8_ = auVar4._8_8_ + auVar200._8_8_;
    auVar32._16_8_ = auVar4._16_8_ + auVar200._16_8_;
    auVar32._24_8_ = auVar4._24_8_ + auVar200._24_8_;
    auVar53._8_8_ = __real_3ff0000000000000;
    auVar53._0_8_ = __real_3ff0000000000000;
    auVar53._16_8_ = __real_3ff0000000000000;
    auVar53._24_8_ = __real_3ff0000000000000;
    auVar200 = vsubpd_avx(auVar53,auVar32);
    dVar83 = auVar200._0_8_;
    dVar103 = *(double *)param_1[9];
    dVar162 = *(double *)(param_1[9] + 0x10);
    auVar109 = vmovhpd_avx(ZEXT816(0) << 0x40,*(undefined8 *)(param_1[9] + 8));
    auVar4 = vpermpd_avx2(auVar5,0xaa);
    dVar84 = auVar109._0_8_;
    dVar9 = auVar109._8_8_;
    auVar74 = vpermpd_avx2(auVar17,0x55);
    auVar93._0_8_ = auVar74._0_8_ * 0.0 + dVar84 * auVar4._0_8_ + dVar103 * dVar83;
    auVar93._8_8_ = auVar74._8_8_ * 0.0 + dVar9 * auVar4._8_8_ + dVar83 * 0.0;
    auVar93._16_8_ = dVar162 * auVar74._16_8_ + auVar4._16_8_ * 0.0 + dVar83 * 0.0;
    auVar93._24_8_ = auVar74._24_8_ * 0.0 + auVar4._24_8_ * 0.0 + dVar83 * 0.0;
    auVar4 = vpermpd_avx2(auVar17,0xaa);
    auVar74 = vpermpd_avx2(auVar200,0x55);
    dVar83 = auVar5._0_8_;
    auVar78._0_8_ = dVar83 * 0.0 + dVar103 * auVar4._0_8_ + dVar84 * auVar74._0_8_;
    auVar78._8_8_ = dVar83 * 0.0 + auVar4._8_8_ * 0.0 + dVar9 * auVar74._8_8_;
    auVar78._16_8_ = dVar162 * dVar83 + auVar4._16_8_ * 0.0 + auVar74._16_8_ * 0.0;
    auVar78._24_8_ = dVar83 * 0.0 + auVar4._24_8_ * 0.0 + auVar74._24_8_ * 0.0;
    auVar4 = vpermpd_avx2(auVar5,0x55);
    auVar74 = vpermpd_avx2(auVar200,0xaa);
    auVar54._0_8_ = auVar74._0_8_ * 0.0 + auVar4._0_8_ * dVar103 + dVar84 * auVar11._0_8_;
    auVar54._8_8_ = auVar74._8_8_ * 0.0 + auVar4._8_8_ * 0.0 + dVar9 * auVar11._0_8_;
    auVar54._16_8_ = dVar162 * auVar74._16_8_ + auVar4._16_8_ * 0.0 + auVar11._0_8_ * 0.0;
    auVar54._24_8_ = auVar74._24_8_ * 0.0 + auVar4._24_8_ * 0.0 + auVar11._0_8_ * 0.0;
    auVar109 = vunpcklpd_avx(auVar200._0_16_,auVar17._16_16_);
    auVar4 = vblendpd_avx(ZEXT1632(auVar109),auVar4,0xc);
    auVar74 = vpermpd_avx2(auVar93,0x55);
    auVar109 = vblendpd_avx(auVar200._0_16_,auVar5._16_16_,1);
    dVar7 = auVar109._0_8_;
    dVar8 = auVar109._8_8_;
    dVar9 = auVar4._0_8_;
    dVar161 = auVar4._8_8_;
    dVar3 = auVar4._16_8_;
    dVar6 = auVar4._24_8_;
    auVar89 = vpermpd_avx2(auVar93,0xaa);
    auVar109 = vshufpd_avx(auVar11,auVar5._0_16_,1);
    auVar4 = vblendpd_avx(auVar200,ZEXT1632(auVar109),3);
    dVar103 = auVar4._0_8_;
    auVar86._0_8_ = dVar103 * auVar89._0_8_ + dVar9 * auVar93._0_8_ + dVar7 * auVar74._0_8_;
    dVar162 = auVar4._8_8_;
    auVar86._8_8_ = dVar162 * auVar89._8_8_ + dVar161 * auVar93._0_8_ + dVar8 * auVar74._8_8_;
    dVar83 = auVar4._16_8_;
    auVar94._16_8_ =
         dVar83 * auVar89._16_8_ + dVar3 * auVar93._0_8_ + auVar11._0_8_ * auVar74._16_8_;
    auVar94._0_16_ = auVar86;
    dVar84 = auVar4._24_8_;
    auVar94._24_8_ =
         dVar84 * auVar89._24_8_ + dVar6 * auVar93._0_8_ + auVar11._8_8_ * auVar74._24_8_;
    auVar4 = vpermpd_avx2(auVar78,0x55);
    auVar200 = vpermpd_avx2(auVar78,0xaa);
    auVar29._0_8_ = dVar103 * auVar200._0_8_ + dVar9 * auVar78._0_8_ + dVar7 * auVar4._0_8_;
    auVar29._8_8_ = dVar162 * auVar200._8_8_ + dVar161 * auVar78._0_8_ + dVar8 * auVar4._8_8_;
    auVar33._16_8_ =
         dVar83 * auVar200._16_8_ + dVar3 * auVar78._0_8_ + auVar11._0_8_ * auVar4._16_8_;
    auVar33._0_16_ = auVar29;
    auVar33._24_8_ =
         dVar84 * auVar200._24_8_ + dVar6 * auVar78._0_8_ + auVar11._8_8_ * auVar4._24_8_;
    auVar4 = vpermpd_avx2(auVar54,0x55);
    auVar200 = vpermpd_avx2(auVar54,0xaa);
    *(undefined1 (*) [16])(param_1[0x1d] + 8) = auVar86;
    uVar1 = vmovlpd_avx(auVar94._16_16_);
    *(undefined8 *)param_1[0x1e] = uVar1;
    auVar44._0_8_ = dVar103 * auVar200._0_8_ + dVar9 * auVar54._0_8_ + dVar7 * auVar4._0_8_;
    auVar44._8_8_ = dVar162 * auVar200._8_8_ + dVar161 * auVar54._0_8_ + dVar8 * auVar4._8_8_;
    auVar55._16_8_ =
         dVar83 * auVar200._16_8_ + dVar3 * auVar54._0_8_ + auVar11._0_8_ * auVar4._16_8_;
    auVar55._0_16_ = auVar44;
    auVar55._24_8_ =
         dVar84 * auVar200._24_8_ + dVar6 * auVar54._0_8_ + auVar11._8_8_ * auVar4._24_8_;
    *(undefined8 *)(param_1[0x1e] + 8) = 0;
    *(undefined1 (*) [16])(param_1[0x1e] + 0x10) = auVar29;
    uVar1 = vmovlpd_avx(auVar33._16_16_);
    *(undefined8 *)(param_1[0x1f] + 8) = uVar1;
    *(undefined8 *)(param_1[0x1f] + 0x10) = 0;
    *(undefined1 (*) [16])param_1[0x20] = auVar44;
    uVar1 = vmovlpd_avx(auVar55._16_16_);
    *(undefined8 *)(param_1[0x20] + 0x10) = uVar1;
    *(undefined8 *)param_1[0x21] = 0;
    *(undefined8 *)(param_1[0x21] + 8) = 0;
    *(undefined8 *)(param_1[0x21] + 0x10) = 0;
    *(undefined8 *)param_1[0x22] = 0;
  }
  *(undefined8 *)(param_1[0x22] + 8) = 0x3ff0000000000000;
LAB_1409e9254:
  dVar103 = *(double *)param_1[0xe];
  dVar162 = *(double *)(param_1[0xe] + 8);
  dVar83 = *(double *)(param_1[0xe] + 0x10);
  dVar84 = *(double *)param_1[0xf];
  dVar9 = *(double *)param_1[0x13];
  dVar161 = *(double *)(param_1[0x13] + 8);
  dVar3 = *(double *)(param_1[0x13] + 0x10);
  auVar23._0_8_ =
       *(double *)(param_1[0x12] + 0x10) * *(double *)(param_1[0x11] + 8) +
       dVar161 * *(double *)param_1[0x12];
  auVar23._8_8_ = dVar9 * *(double *)(param_1[0x11] + 0x10) + dVar3 * *(double *)(param_1[0x12] + 8)
  ;
  auVar109 = vshufpd_avx(auVar23,auVar23,1);
  auVar24._8_8_ = 0;
  auVar24._0_8_ = auVar23._0_8_ + auVar109._0_8_;
  auVar109 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar24,2);
  auVar49._8_8_ = 0;
  auVar49._0_8_ = __real_3ff0000000000000;
  auVar73._8_8_ = 0;
  auVar73._0_8_ = __real_bff0000000000000;
  auVar109 = vblendvpd_avx(auVar73,auVar49,auVar109);
  dVar6 = auVar109._0_8_;
  *(double *)(param_1[0x12] + 0x10) = *(double *)(param_1[0x12] + 0x10) * dVar6;
  *(double *)param_1[0x13] = dVar9 * dVar6;
  *(double *)(param_1[0x13] + 8) = dVar161 * dVar6;
  *(double *)(param_1[0x13] + 0x10) = dVar3 * dVar6;
  auVar14._0_8_ =
       dVar103 * *(double *)(param_1[0xc] + 0x10) + dVar83 * *(double *)(param_1[0xd] + 8);
  auVar14._8_8_ = dVar162 * *(double *)param_1[0xd] + dVar84 * *(double *)(param_1[0xd] + 0x10);
  auVar109 = vshufpd_avx(auVar14,auVar14,1);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = auVar14._0_8_ + auVar109._0_8_;
  auVar109 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar15,2);
  auVar109 = vblendvpd_avx(auVar73,auVar49,auVar109);
  dVar9 = auVar109._0_8_;
  *(double *)param_1[0xe] = dVar103 * dVar9;
  *(double *)(param_1[0xe] + 8) = dVar162 * dVar9;
  *(double *)(param_1[0xe] + 0x10) = dVar83 * dVar9;
  *(double *)param_1[0xf] = dVar84 * dVar9;
  *param_9 = dVar136 + *param_9;
  auVar16._0_8_ = dVar136 * *param_6 + *(double *)param_1[0x2c];
  auVar16._8_8_ = dVar136 * param_6[1] + *(double *)(param_1[0x2c] + 8);
  auVar19._16_8_ = dVar136 * param_6[2] + *(double *)(param_1[0x2c] + 0x10);
  auVar19._0_16_ = auVar16;
  auVar19._24_8_ = dVar136 * 0.0 + 0.0;
  *(undefined1 (*) [16])param_1[0x2c] = auVar16;
  uVar1 = vmovlpd_avx(auVar19._16_16_);
  *(undefined8 *)(param_1[0x2c] + 0x10) = uVar1;
  return;
}

// ApplyRotationConstraintSoftKD___un_3C_s_5B_unFPBDJointSolver_5D__3E_CuniCuniCundCundCundCunbREFs_5B__c_unFVector_5D_CundCundREFund_avx2 @ 1409e9380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyRotationConstraintSoftKD___un_3C_s_5B_unFPBDJointSolver_5D__3E_CuniCuniCundCundCundCunbREFs_5B__c_unFVector_5D_CundCundREFund_avx2
               (longlong param_1,int param_2,int param_3,double param_4,double param_5,
               double param_6,byte param_7,undefined1 (*param_8) [24],double param_9,double param_10
               ,double *param_11,undefined1 (*param_12) [32])

{
  undefined1 (*pauVar1) [24];
  undefined1 (*pauVar2) [16];
  double *pdVar3;
  double *pdVar4;
  double *pdVar5;
  undefined8 uVar6;
  undefined1 auVar7 [24];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar25;
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [32];
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar50;
  undefined1 auVar46 [32];
  double dVar49;
  double dVar51;
  undefined1 auVar47 [32];
  double dVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar59 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  double dVar63;
  undefined1 in_ZMM5 [64];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  ulonglong uVar72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [32];
  undefined1 auVar85 [16];
  undefined1 auVar84 [32];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  double dVar94;
  double dVar95;
  undefined1 auVar92 [32];
  double dVar96;
  undefined1 auVar97 [16];
  double dVar103;
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  double dVar104;
  undefined1 auVar102 [32];
  undefined1 auVar105 [16];
  undefined1 auVar106 [32];
  double dVar107;
  undefined1 auVar108 [16];
  double dVar110;
  undefined1 auVar109 [32];
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar48 [32];
  undefined1 auVar58 [32];
  undefined1 auVar60 [32];
  undefined1 auVar83 [32];
  undefined1 auVar93 [32];
  undefined1 auVar101 [32];
  
  dVar11 = _UNK_150b54438;
  dVar10 = _UNK_150b54430;
  dVar9 = _UNK_150b54428;
  dVar110 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar107 = _UNK_150b54418;
  dVar96 = _UNK_150b54410;
  dVar50 = _UNK_150b54408;
  dVar49 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar43 = _UNK_15076c6f8;
  dVar51 = ___xmm_bff00000000000003ff0000000000000;
  auVar33 = vpcmpeqd_avx2(in_ZMM5._0_32_,in_ZMM5._0_32_);
  lVar13 = (longlong)param_3;
  lVar12 = lVar13 * 0x80;
  auVar33 = auVar33 & ~*param_12;
  pauVar2 = (undefined1 (*) [16])(param_1 + 0x240 + lVar12);
  auVar26 = *(undefined1 (*) [16])(param_1 + 0x240 + lVar12);
  dVar52 = *(double *)*param_8;
  auVar53._8_8_ = dVar52;
  auVar53._0_8_ = dVar52;
  auVar58._16_8_ = dVar52;
  auVar58._0_16_ = auVar53;
  auVar58._24_8_ = dVar52;
  auVar21 = *(undefined1 (*) [16])(param_1 + 0x260 + lVar12);
  dVar15 = *(double *)(*param_8 + 8);
  auVar86._8_8_ = dVar15;
  auVar86._0_8_ = dVar15;
  auVar85 = *(undefined1 (*) [16])(param_1 + 0x280 + lVar12);
  dVar24 = *(double *)(*param_8 + 0x10);
  auVar98._8_8_ = dVar24;
  auVar98._0_8_ = dVar24;
  auVar98._16_8_ = dVar24;
  auVar98._24_8_ = dVar24;
  auVar44 = vunpcklpd_avx(auVar53,auVar86);
  auVar59 = vblendpd_avx(auVar58,ZEXT1632(auVar44),3);
  auVar59 = vblendpd_avx(auVar59,auVar98,4);
  dVar94 = auVar59._0_8_;
  auVar44._0_8_ =
       dVar94 * (dVar24 * auVar85._0_8_ + dVar52 * auVar26._0_8_ + dVar15 * auVar21._0_8_);
  dVar95 = auVar59._8_8_;
  auVar44._8_8_ =
       dVar95 * (dVar24 * auVar85._8_8_ + dVar52 * auVar26._8_8_ + dVar15 * auVar21._8_8_);
  dVar63 = auVar59._16_8_;
  auVar26 = vshufpd_avx(auVar44,auVar44,1);
  dVar52 = dVar63 * (dVar24 * *(double *)(param_1 + 0x290 + lVar12) +
                    dVar52 * *(double *)(param_1 + 0x250 + lVar12) +
                    dVar15 * *(double *)(param_1 + 0x270 + lVar12)) + auVar44._0_8_ + auVar26._0_8_;
  dVar15 = 0.0;
  if ((((((((SUB321(auVar33 >> 0x1f,0) & 1) == 0 && (SUB321(auVar33 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar33 >> 0x5f,0) & 1) == 0) && SUB321(auVar33 >> 0x7f,0) == '\0') &&
        (SUB321(auVar33 >> 0x9f,0) & 1) == 0) && SUB321(auVar33 >> 0xbf,0) == '\0') &&
      (SUB321(auVar33 >> 0xdf,0) & 1) == 0) && -1 < auVar33[0x1f]) {
    if (__real_3f1a36e2eb1c432d < param_6) {
      pdVar3 = (double *)(param_1 + 0x3e0 + (longlong)param_2 * 0x20);
      dVar15 = *pdVar3;
      dVar24 = pdVar3[1];
      dVar25 = pdVar3[2];
      dVar103 = pdVar3[3];
      pdVar3 = (double *)(param_1 + 0x130 + (longlong)param_2 * 0x20);
      auVar76._0_8_ = dVar25 * pdVar3[2] + dVar15 * *pdVar3;
      auVar76._8_8_ = dVar103 * pdVar3[3] + dVar24 * pdVar3[1];
      auVar26 = vshufpd_avx(auVar76,auVar76,1);
      auVar88._8_8_ = 0;
      auVar88._0_8_ = auVar26._0_8_ + auVar76._0_8_;
      auVar26 = vcmpsd_avx(ZEXT816(0),auVar88,2);
      auVar21._8_8_ = 0;
      auVar21._0_8_ = __real_3ff0000000000000;
      auVar64._8_8_ = 0;
      auVar64._0_8_ = __real_bff0000000000000;
      auVar26 = vblendvpd_avx(auVar64,auVar21,auVar26);
      dVar104 = auVar26._0_8_;
      auVar113._0_8_ = *pdVar3 * dVar104 - dVar15;
      auVar113._8_8_ = pdVar3[1] * dVar104 - dVar24;
      auVar113._16_8_ = pdVar3[2] * dVar104 - dVar25;
      auVar113._24_8_ = pdVar3[3] * dVar104 - dVar103;
      auVar100._0_8_ =
           dVar15 * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
      auVar100._8_8_ = dVar24 * _UNK_150b543c8;
      auVar100._16_8_ = dVar25 * _UNK_150b543d0;
      auVar100._24_8_ = dVar103 * _UNK_150b543d8;
      auVar58 = vpermpd_avx2(auVar113,0xff);
      auVar98 = vpermpd_avx2(auVar100,0xdb);
      auVar32 = vpermpd_avx2(auVar113,0x55);
      auVar40 = vpermpd_avx2(auVar100,0xce);
      auVar41 = vpermpd_avx2(auVar113,0xaa);
      auVar59 = vshufpd_avx(auVar100,auVar100,5);
      pdVar3 = (double *)(param_1 + 0x3e0 + lVar13 * 0x20);
      dVar15 = *pdVar3;
      dVar24 = pdVar3[1];
      dVar25 = pdVar3[2];
      dVar103 = pdVar3[3];
      pdVar3 = (double *)(param_1 + 0x130 + lVar13 * 0x20);
      auVar65._0_8_ = dVar25 * pdVar3[2] + dVar15 * *pdVar3;
      auVar65._8_8_ = dVar103 * pdVar3[3] + dVar24 * pdVar3[1];
      auVar26 = vshufpd_avx(auVar65,auVar65,1);
      auVar66._8_8_ = 0;
      auVar66._0_8_ = auVar26._0_8_ + auVar65._0_8_;
      auVar26 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar66,2);
      auVar89._8_8_ = 0;
      auVar89._0_8_ = __real_bff0000000000000;
      auVar77._8_8_ = 0;
      auVar77._0_8_ = __real_3ff0000000000000;
      auVar26 = vblendvpd_avx(auVar89,auVar77,auVar26);
      dVar104 = auVar26._0_8_;
      auVar68._0_8_ = *pdVar3 * dVar104 - dVar15;
      auVar68._8_8_ = pdVar3[1] * dVar104 - dVar24;
      auVar68._16_8_ = pdVar3[2] * dVar104 - dVar25;
      auVar68._24_8_ = pdVar3[3] * dVar104 - dVar103;
      auVar23._0_8_ =
           dVar15 * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
      auVar23._8_8_ = dVar24 * _UNK_150b543c8;
      auVar23._16_8_ = dVar25 * _UNK_150b543d0;
      auVar23._24_8_ = dVar103 * _UNK_150b543d8;
      auVar42 = vpermpd_avx2(auVar68,0xff);
      auVar46 = vpermpd_avx2(auVar23,0xdb);
      auVar47 = vpermpd_avx2(auVar68,0x55);
      auVar48 = vpermpd_avx2(auVar23,0xce);
      auVar60 = vpermpd_avx2(auVar68,0xaa);
      auVar33 = vshufpd_avx(auVar23,auVar23,5);
      dVar15 = ___ymm_00000000000000003ff00000000000003ff0000000000000bff0000000000000 *
               auVar33._0_8_ * auVar60._0_8_ +
               ___ymm_0000000000000000bff00000000000003ff00000000000003ff0000000000000 *
               auVar48._0_8_ * auVar47._0_8_ +
               auVar23._0_8_ * auVar42._0_8_ +
               ___xmm_bff00000000000003ff0000000000000 * auVar46._0_8_ * auVar68._0_8_;
      dVar24 = _UNK_150b54588 * auVar33._8_8_ * auVar60._8_8_ +
               _UNK_150b54568 * auVar48._8_8_ * auVar47._8_8_ +
               auVar23._8_8_ * auVar42._8_8_ + _UNK_15076c6f8 * auVar46._8_8_ * auVar68._0_8_;
      dVar25 = _UNK_150b54590 * auVar33._16_8_ * auVar60._16_8_ +
               _UNK_150b54570 * auVar48._16_8_ * auVar47._16_8_ +
               auVar23._16_8_ * auVar42._16_8_ +
               ___xmm_bff00000000000003ff0000000000000 * auVar46._16_8_ * auVar68._0_8_;
      auVar85._0_8_ =
           dVar94 * ((___ymm_00000000000000003ff00000000000003ff0000000000000bff0000000000000 *
                      auVar59._0_8_ * auVar41._0_8_ +
                     ___ymm_0000000000000000bff00000000000003ff00000000000003ff0000000000000 *
                     auVar32._0_8_ * auVar40._0_8_ +
                     auVar100._0_8_ * auVar58._0_8_ +
                     auVar98._0_8_ * auVar113._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
                     __real_4000000000000000 - (dVar15 + dVar15));
      auVar85._8_8_ =
           dVar95 * ((_UNK_150b54588 * auVar59._8_8_ * auVar41._8_8_ +
                     _UNK_150b54568 * auVar32._8_8_ * auVar40._8_8_ +
                     auVar100._8_8_ * auVar58._8_8_ +
                     auVar98._8_8_ * auVar113._0_8_ * _UNK_15076c6f8) * __real_4000000000000000 -
                    (dVar24 + dVar24));
      auVar26 = vshufpd_avx(auVar85,auVar85,1);
      dVar15 = param_4 * param_10 +
               dVar63 * ((_UNK_150b54590 * auVar59._16_8_ * auVar41._16_8_ +
                         _UNK_150b54570 * auVar32._16_8_ * auVar40._16_8_ +
                         auVar100._16_8_ * auVar58._16_8_ +
                         auVar98._16_8_ * auVar113._0_8_ * ___xmm_bff00000000000003ff0000000000000)
                         * __real_4000000000000000 - (dVar25 + dVar25)) +
               auVar85._0_8_ + auVar26._0_8_;
      auVar59._24_8_ = 0;
      auVar59._0_24_ = *param_8;
    }
  }
  else if (__real_3f1a36e2eb1c432d < param_6) {
    pdVar3 = (double *)(param_1 + 0x3e0 + (longlong)param_2 * 0x20);
    dVar15 = *pdVar3;
    dVar24 = pdVar3[1];
    dVar25 = pdVar3[2];
    dVar103 = pdVar3[3];
    pdVar3 = (double *)(param_1 + 0x130 + (longlong)param_2 * 0x20);
    auVar16._0_8_ = dVar15 * *pdVar3 + dVar25 * pdVar3[2];
    auVar16._8_8_ = dVar24 * pdVar3[1] + dVar103 * pdVar3[3];
    auVar26 = vshufpd_avx(auVar16,auVar16,1);
    auVar17._8_8_ = 0;
    auVar17._0_8_ = auVar16._0_8_ + auVar26._0_8_;
    auVar26 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar17,2);
    auVar18._8_8_ = 0;
    auVar18._0_8_ = __real_3ff0000000000000;
    auVar73._8_8_ = 0;
    auVar73._0_8_ = __real_bff0000000000000;
    auVar26 = vblendvpd_avx(auVar73,auVar18,auVar26);
    dVar104 = auVar26._0_8_;
    auVar99._0_8_ = *pdVar3 * dVar104 - dVar15;
    auVar99._8_8_ = pdVar3[1] * dVar104 - dVar24;
    auVar99._16_8_ = pdVar3[2] * dVar104 - dVar25;
    auVar99._24_8_ = pdVar3[3] * dVar104 - dVar103;
    auVar30._0_8_ = dVar15 * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000
    ;
    auVar30._8_8_ = dVar24 * _UNK_150b543c8;
    auVar30._16_8_ = dVar25 * _UNK_150b543d0;
    auVar30._24_8_ = dVar103 * _UNK_150b543d8;
    auVar58 = vpermpd_avx2(auVar99,0xff);
    auVar98 = vpermpd_avx2(auVar30,0xdb);
    auVar32 = vpermpd_avx2(auVar99,0x55);
    auVar40 = vpermpd_avx2(auVar30,0xce);
    auVar41 = vpermpd_avx2(auVar99,0xaa);
    auVar59 = vshufpd_avx(auVar30,auVar30,5);
    pdVar3 = (double *)(param_1 + 0x3e0 + lVar13 * 0x20);
    dVar15 = *pdVar3;
    dVar24 = pdVar3[1];
    dVar25 = pdVar3[2];
    dVar103 = pdVar3[3];
    pdVar3 = (double *)(param_1 + 0x130 + lVar13 * 0x20);
    auVar74._0_8_ = dVar15 * *pdVar3 + dVar25 * pdVar3[2];
    auVar74._8_8_ = dVar24 * pdVar3[1] + dVar103 * pdVar3[3];
    auVar26 = vshufpd_avx(auVar74,auVar74,1);
    auVar75._8_8_ = 0;
    auVar75._0_8_ = auVar26._0_8_ + auVar74._0_8_;
    auVar26 = vcmpsd_avx(ZEXT816(0),auVar75,2);
    auVar19._8_8_ = 0;
    auVar19._0_8_ = __real_bff0000000000000;
    auVar87._8_8_ = 0;
    auVar87._0_8_ = __real_3ff0000000000000;
    auVar26 = vblendvpd_avx(auVar19,auVar87,auVar26);
    dVar104 = auVar26._0_8_;
    auVar22._0_8_ = *pdVar3 * dVar104 - dVar15;
    auVar22._8_8_ = pdVar3[1] * dVar104 - dVar24;
    auVar22._16_8_ = pdVar3[2] * dVar104 - dVar25;
    auVar22._24_8_ = pdVar3[3] * dVar104 - dVar103;
    auVar31._0_8_ = dVar15 * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000
    ;
    auVar31._8_8_ = dVar24 * _UNK_150b543c8;
    auVar31._16_8_ = dVar25 * _UNK_150b543d0;
    auVar31._24_8_ = dVar103 * _UNK_150b543d8;
    auVar42 = vpermpd_avx2(auVar22,0xff);
    auVar46 = vpermpd_avx2(auVar31,0xdb);
    auVar47 = vpermpd_avx2(auVar22,0x55);
    auVar48 = vpermpd_avx2(auVar31,0xce);
    auVar60 = vpermpd_avx2(auVar22,0xaa);
    auVar33 = vshufpd_avx(auVar31,auVar31,5);
    dVar15 = ___ymm_00000000000000003ff00000000000003ff0000000000000bff0000000000000 *
             auVar33._0_8_ * auVar60._0_8_ +
             ___ymm_0000000000000000bff00000000000003ff00000000000003ff0000000000000 *
             auVar48._0_8_ * auVar47._0_8_ +
             auVar31._0_8_ * auVar42._0_8_ +
             ___xmm_bff00000000000003ff0000000000000 * auVar46._0_8_ * auVar22._0_8_;
    dVar24 = _UNK_150b54588 * auVar33._8_8_ * auVar60._8_8_ +
             _UNK_150b54568 * auVar48._8_8_ * auVar47._8_8_ +
             auVar31._8_8_ * auVar42._8_8_ + _UNK_15076c6f8 * auVar46._8_8_ * auVar22._0_8_;
    dVar25 = _UNK_150b54590 * auVar33._16_8_ * auVar60._16_8_ +
             _UNK_150b54570 * auVar48._16_8_ * auVar47._16_8_ +
             auVar31._16_8_ * auVar42._16_8_ +
             ___xmm_bff00000000000003ff0000000000000 * auVar46._16_8_ * auVar22._0_8_;
    auVar20._0_8_ =
         dVar94 * ((___ymm_00000000000000003ff00000000000003ff0000000000000bff0000000000000 *
                    auVar41._0_8_ * auVar59._0_8_ +
                   ___ymm_0000000000000000bff00000000000003ff00000000000003ff0000000000000 *
                   auVar40._0_8_ * auVar32._0_8_ +
                   auVar30._0_8_ * auVar58._0_8_ +
                   auVar98._0_8_ * auVar99._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
                   __real_4000000000000000 - (dVar15 + dVar15));
    auVar20._8_8_ =
         dVar95 * ((_UNK_150b54588 * auVar41._8_8_ * auVar59._8_8_ +
                   _UNK_150b54568 * auVar40._8_8_ * auVar32._8_8_ +
                   auVar30._8_8_ * auVar58._8_8_ + auVar98._8_8_ * auVar99._0_8_ * _UNK_15076c6f8) *
                   __real_4000000000000000 - (dVar24 + dVar24));
    auVar26 = vshufpd_avx(auVar20,auVar20,1);
    dVar15 = param_4 * param_10 +
             dVar63 * ((_UNK_150b54590 * auVar41._16_8_ * auVar59._16_8_ +
                       _UNK_150b54570 * auVar40._16_8_ * auVar32._16_8_ +
                       auVar30._16_8_ * auVar58._16_8_ +
                       auVar98._16_8_ * auVar99._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
                       __real_4000000000000000 - (dVar25 + dVar25)) + auVar20._0_8_ + auVar26._0_8_;
    auVar59._24_8_ = 0;
    auVar59._0_24_ = *param_8;
  }
  dVar24 = __real_3ff0000000000000;
  if ((param_7 & 1) != 0) {
    dVar24 = __real_3ff0000000000000 / dVar52;
  }
  auVar67._8_8_ = 0;
  auVar67._0_8_ = __real_3ff0000000000000;
  dVar94 = dVar24 * param_5 * param_4 * param_4;
  param_4 = dVar24 * param_6 * param_4;
  dVar63 = (__real_3ff0000000000000 / (dVar52 * (param_4 + dVar94) + __real_3ff0000000000000)) *
           *(double *)(param_1 + 0x4c8) * ((dVar94 * param_9 - dVar15 * param_4) - *param_11);
  dVar52 = dVar63 * (double)((ulonglong)dVar52 ^ __xmm_80000000000000008000000000000000);
  auVar46._0_8_ = auVar59._0_8_ * dVar52;
  auVar46._8_8_ = auVar59._8_8_ * dVar52;
  auVar46._16_8_ = auVar59._16_8_ * dVar52;
  auVar46._24_8_ = auVar59._24_8_ * dVar52;
  lVar14 = lVar13 * 0x20;
  pdVar3 = (double *)(param_1 + 0x1a0 + lVar14);
  auVar26._8_8_ = 0;
  auVar26._0_8_ = *(ulonglong *)(param_1 + 0x1b8 + lVar14);
  auVar26 = vmovhpd_avx(auVar26,*(undefined8 *)(param_1 + 0x1b0 + lVar14));
  auVar34._8_8_ = 0;
  auVar34._0_8_ = *(ulonglong *)(param_1 + 0x1a8 + lVar14);
  auVar21 = vmovhpd_avx(auVar34,*(undefined8 *)(param_1 + 0x1a0 + lVar14));
  pdVar4 = (double *)(param_1 + 0x1b0 + lVar14);
  pdVar5 = (double *)(param_1 + 0x1a0 + lVar14);
  auVar59 = vpermpd_avx2(auVar46,0x55);
  auVar33 = vpermpd_avx2(auVar46,0xaa);
  dVar15 = (___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
            auVar33._0_8_ * auVar21._0_8_ +
           ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
           auVar59._0_8_ * *pdVar4 +
           *pdVar3 * 0.0 + auVar46._0_8_ * auVar26._0_8_ * ___xmm_bff00000000000003ff0000000000000)
           * __real_3fe0000000000000 + *pdVar3;
  dVar24 = (_UNK_150b54428 * auVar33._8_8_ * auVar21._8_8_ +
           _UNK_150b54408 * auVar59._8_8_ * pdVar4[1] +
           pdVar3[1] * 0.0 + auVar46._0_8_ * auVar26._8_8_ * _UNK_15076c6f8) *
           __real_3fe0000000000000 + pdVar3[1];
  dVar94 = (_UNK_150b54430 * auVar33._16_8_ * auVar26._0_8_ +
           _UNK_150b54410 * auVar59._16_8_ * *pdVar5 +
           pdVar3[2] * 0.0 + auVar46._0_8_ * auVar21._0_8_ * ___xmm_bff00000000000003ff0000000000000
           ) * __real_3fe0000000000000 + pdVar3[2];
  dVar95 = (_UNK_150b54438 * auVar33._24_8_ * auVar26._8_8_ +
           _UNK_150b54418 * auVar59._24_8_ * pdVar5[1] +
           pdVar3[3] * 0.0 + auVar46._0_8_ * auVar21._8_8_ * _UNK_15076c6f8) *
           __real_3fe0000000000000 + pdVar3[3];
  auVar54._0_8_ = dVar15 * dVar15 + dVar94 * dVar94;
  auVar54._8_8_ = dVar24 * dVar24 + dVar95 * dVar95;
  auVar26 = vshufpd_avx(auVar54,auVar54,1);
  dVar52 = auVar54._0_8_ + auVar26._0_8_;
  auVar78._8_8_ = 0;
  auVar78._0_8_ = __real_3e45798ee2308c3a;
  auVar55._8_8_ = 0;
  auVar55._0_8_ = dVar52;
  auVar26 = vcmpsd_avx(auVar78,auVar55,6);
  uVar72 = ~auVar26._0_8_ & __real_ffffffffffffffff;
  dVar52 = __real_3ff0000000000000 / SQRT(dVar52);
  auVar56._0_8_ = (ulonglong)(dVar15 * dVar52) & uVar72;
  auVar56._8_8_ = (ulonglong)(dVar24 * dVar52) & uVar72;
  auVar60._16_8_ = (ulonglong)(dVar94 * dVar52) & uVar72;
  auVar60._0_16_ = auVar56;
  auVar60._24_8_ = (ulonglong)(dVar95 * dVar52) & uVar72;
  auVar82._0_8_ = ~uVar72 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
  auVar82._8_8_ = ~uVar72 & _UNK_150b54548;
  auVar82._16_8_ = ~uVar72 & _UNK_150b54550;
  auVar82._24_8_ = ~uVar72 & _UNK_150b54558;
  auVar85 = auVar60._16_16_ | auVar82._16_16_;
  auVar26 = vshufps_avx(auVar56,auVar56,0x4e);
  auVar21 = vshufps_avx(auVar85,auVar85,0x4e);
  uVar6 = vmovlpd_avx(auVar56);
  *(undefined8 *)(param_1 + 0x1a0 + lVar14) = uVar6;
  uVar6 = vmovlpd_avx(auVar26);
  *(undefined8 *)(param_1 + 0x1a8 + lVar14) = uVar6;
  uVar6 = vmovlpd_avx(auVar85);
  *(undefined8 *)(param_1 + 0x1b0 + lVar14) = uVar6;
  uVar6 = vmovlpd_avx(auVar21);
  *(undefined8 *)(param_1 + 0x1b8 + lVar14) = uVar6;
  auVar57._0_8_ =
       *(double *)(param_1 + 0x1c0) * *(double *)(param_1 + 0x1a0) +
       *(double *)(param_1 + 0x1d0) * *(double *)(param_1 + 0x1b0);
  auVar57._8_8_ =
       *(double *)(param_1 + 0x1c8) * *(double *)(param_1 + 0x1a8) +
       *(double *)(param_1 + 0x1d8) * *(double *)(param_1 + 0x1b8);
  auVar26 = vshufpd_avx(auVar57,auVar57,1);
  auVar79._8_8_ = 0;
  auVar79._0_8_ = auVar57._0_8_ + auVar26._0_8_;
  auVar26 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar79,2);
  auVar80._8_8_ = 0;
  auVar80._0_8_ = __real_bff0000000000000;
  auVar26 = vblendvpd_avx(auVar80,auVar67,auVar26);
  dVar52 = auVar26._0_8_;
  *(double *)(param_1 + 0x1c0) = *(double *)(param_1 + 0x1c0) * dVar52;
  *(double *)(param_1 + 0x1c8) = *(double *)(param_1 + 0x1c8) * dVar52;
  *(double *)(param_1 + 0x1d0) = *(double *)(param_1 + 0x1d0) * dVar52;
  *(double *)(param_1 + 0x1d8) = *(double *)(param_1 + 0x1d8) * dVar52;
  lVar12 = lVar13 * 0x60;
  auVar90._8_8_ = 0;
  auVar90._0_8_ = *(ulonglong *)(param_1 + 0x20 + lVar12);
  uVar6 = *(undefined8 *)(param_1 + 0x38 + lVar12);
  auVar97._8_8_ = uVar6;
  auVar97._0_8_ = uVar6;
  auVar101._16_8_ = uVar6;
  auVar101._0_16_ = auVar97;
  auVar101._24_8_ = uVar6;
  auVar53 = vunpcklpd_avx(auVar90,auVar97);
  auVar26 = *(undefined1 (*) [16])(param_1 + 0x20 + lVar12);
  auVar21 = *(undefined1 (*) [16])(param_1 + 0x28 + lVar12);
  dVar52 = *(double *)(param_1 + 0x1b0 + lVar14);
  auVar85 = *(undefined1 (*) [16])(param_1 + 0x1a0 + lVar14);
  auVar44 = *(undefined1 (*) [16])(param_1 + 0x1a8 + lVar14);
  auVar109._16_8_ = dVar52;
  auVar109._0_16_ = auVar85;
  auVar109._24_8_ = 0;
  dVar15 = *(double *)(param_1 + 0x1b8 + lVar14);
  auVar111._8_8_ = dVar15;
  auVar111._0_8_ = dVar15;
  auVar111._16_8_ = dVar15;
  auVar111._24_8_ = dVar15;
  dVar24 = *(double *)(param_1 + 0x1a0 + lVar14);
  auVar112._16_8_ = dVar24;
  auVar112._0_16_ = auVar44;
  auVar112._24_8_ = 0;
  dVar94 = *(double *)(param_1 + 0x30 + lVar12);
  auVar106._16_8_ = dVar94;
  auVar106._0_16_ = auVar26;
  auVar106._24_8_ = 0;
  auVar59 = vblendpd_avx(auVar112,auVar111,8);
  auVar33 = vblendpd_avx(auVar106,auVar101,8);
  auVar58 = vblendpd_avx(auVar109,auVar111,8);
  dVar95 = auVar21._0_8_ * auVar58._0_8_ - auVar33._0_8_ * auVar59._0_8_;
  dVar25 = auVar21._8_8_ * auVar58._8_8_ - auVar33._8_8_ * auVar59._8_8_;
  dVar103 = auVar53._0_8_ * auVar58._16_8_ - auVar33._16_8_ * auVar59._16_8_;
  dVar104 = auVar53._8_8_ * auVar58._24_8_ - auVar33._24_8_ * auVar59._24_8_;
  auVar92._0_8_ = dVar95 + dVar95;
  auVar92._8_8_ = dVar25 + dVar25;
  auVar92._16_8_ = dVar103 + dVar103;
  auVar92._24_8_ = dVar104 + dVar104;
  auVar59 = vpermpd_avx2(auVar92,0xc9);
  auVar33 = vpermpd_avx2(auVar92,0xd2);
  auVar102._0_8_ = auVar85._0_8_ * auVar33._0_8_ - auVar44._0_8_ * auVar59._0_8_;
  auVar102._8_8_ = auVar85._8_8_ * auVar33._8_8_ - auVar44._8_8_ * auVar59._8_8_;
  auVar102._16_8_ = dVar52 * auVar33._16_8_ - dVar24 * auVar59._16_8_;
  auVar102._24_8_ = auVar33._24_8_ * 0.0 - auVar59._24_8_ * 0.0;
  auVar33 = vpermpd_avx2(auVar102,0xc9);
  pdVar3 = (double *)(param_1 + 0x170 + lVar13 * 0x18);
  auVar91._0_8_ = *pdVar3 + auVar59._0_8_ * dVar15 + auVar26._0_8_ + auVar33._0_8_;
  auVar91._8_8_ = pdVar3[1] + auVar59._8_8_ * dVar15 + auVar26._8_8_ + auVar33._8_8_;
  auVar93._16_8_ =
       *(double *)(param_1 + 0x180 + lVar13 * 0x18) +
       auVar59._16_8_ * dVar15 + dVar94 + auVar33._16_8_;
  auVar93._0_16_ = auVar91;
  auVar93._24_8_ = auVar59._24_8_ * dVar15 + 0.0 + auVar33._24_8_ + 0.0;
  *(undefined1 (*) [16])(param_1 + 0x100 + lVar13 * 0x18) = auVar91;
  uVar6 = vmovlpd_avx(auVar93._16_16_);
  *(undefined8 *)(param_1 + 0x110 + lVar13 * 0x18) = uVar6;
  dVar52 = *(double *)(param_1 + 0x1b8 + lVar14);
  dVar15 = *(double *)(param_1 + 0x1a0 + lVar14);
  auVar105._8_8_ = 0;
  auVar105._0_8_ = *(ulonglong *)(param_1 + 8 + lVar12);
  auVar26 = vmovhpd_avx(auVar105,*(undefined8 *)(param_1 + lVar12));
  auVar108._8_8_ = 0;
  auVar108._0_8_ = *(ulonglong *)(param_1 + 0x18 + lVar12);
  auVar21 = vmovhpd_avx(auVar108,*(undefined8 *)(param_1 + 0x10 + lVar12));
  pauVar1 = (undefined1 (*) [24])(param_1 + lVar12);
  dVar25 = *(double *)(*pauVar1 + 8);
  auVar7 = *pauVar1;
  dVar95 = *(double *)pauVar1[1];
  dVar24 = *(double *)(param_1 + 0x1a8 + lVar14);
  pdVar3 = (double *)(param_1 + 0x10 + lVar12);
  dVar103 = pdVar3[1];
  dVar104 = *(double *)(param_1 + lVar12);
  dVar8 = ((double *)(param_1 + lVar12))[1];
  dVar94 = *(double *)(param_1 + 0x1b0 + lVar14);
  pdVar4 = (double *)(param_1 + 0x130 + lVar14);
  *pdVar4 = dVar110 * auVar26._0_8_ * dVar94 +
            dVar49 * *pdVar3 * dVar24 +
            dVar52 * *(double *)*pauVar1 + dVar15 * auVar21._0_8_ * dVar51;
  pdVar4[1] = dVar9 * auVar26._8_8_ * dVar94 +
              dVar50 * dVar103 * dVar24 + dVar52 * dVar25 + dVar15 * auVar21._8_8_ * dVar43;
  pdVar4[2] = dVar10 * auVar21._0_8_ * dVar94 +
              dVar96 * dVar104 * dVar24 + dVar52 * auVar7._16_8_ + dVar15 * auVar26._0_8_ * dVar51;
  pdVar4[3] = dVar11 * auVar21._8_8_ * dVar94 +
              dVar107 * dVar8 * dVar24 + dVar52 * dVar95 + dVar15 * auVar26._8_8_ * dVar43;
  auVar35._0_8_ =
       *(double *)(param_1 + 0x150) * *(double *)(param_1 + 0x130) +
       *(double *)(param_1 + 0x160) * *(double *)(param_1 + 0x140);
  auVar35._8_8_ =
       *(double *)(param_1 + 0x158) * *(double *)(param_1 + 0x138) +
       *(double *)(param_1 + 0x168) * *(double *)(param_1 + 0x148);
  auVar26 = vshufpd_avx(auVar35,auVar35,1);
  auVar36._8_8_ = 0;
  auVar36._0_8_ = auVar35._0_8_ + auVar26._0_8_;
  auVar26 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar36,2);
  auVar26 = vblendvpd_avx(auVar80,auVar67,auVar26);
  dVar52 = auVar26._0_8_;
  *(double *)(param_1 + 0x150) = *(double *)(param_1 + 0x150) * dVar52;
  *(double *)(param_1 + 0x158) = *(double *)(param_1 + 0x158) * dVar52;
  *(double *)(param_1 + 0x160) = *(double *)(param_1 + 0x160) * dVar52;
  *(double *)(param_1 + 0x168) = *(double *)(param_1 + 0x168) * dVar52;
  dVar52 = *(double *)(param_1 + 0x1a8 + lVar14);
  auVar27._8_8_ = dVar52;
  auVar27._0_8_ = dVar52;
  dVar15 = *(double *)(param_1 + 0x1a0 + lVar14);
  auVar37._8_8_ = dVar15;
  auVar37._0_8_ = dVar15;
  auVar21 = vunpcklpd_avx(auVar37,auVar27);
  auVar26 = *(undefined1 (*) [16])(param_1 + 0x1b0 + lVar14);
  dVar43 = auVar21._0_8_ + auVar21._0_8_;
  dVar49 = auVar21._8_8_ + auVar21._8_8_;
  dVar24 = auVar26._0_8_;
  dVar51 = auVar26._8_8_;
  dVar50 = dVar24 + dVar24;
  dVar51 = dVar51 + dVar51;
  auVar69._0_8_ = dVar15 * dVar43;
  auVar69._8_8_ = dVar15 * dVar49;
  auVar69._16_8_ = dVar15 * dVar50;
  auVar69._24_8_ = dVar15 * dVar51;
  auVar81._0_8_ = dVar52 * dVar43;
  auVar81._8_8_ = dVar52 * dVar49;
  auVar83._16_8_ = dVar52 * dVar50;
  auVar83._0_16_ = auVar81;
  auVar83._24_8_ = dVar52 * dVar51;
  dVar52 = *(double *)(param_1 + 0x1b8 + lVar14);
  dVar15 = (dVar24 + dVar24) * *(double *)(param_1 + 0x1b0 + lVar14);
  auVar40._0_8_ = dVar43 * dVar52;
  auVar40._8_8_ = dVar49 * dVar52;
  auVar40._16_8_ = dVar50 * dVar52;
  auVar40._24_8_ = dVar51 * dVar52;
  auVar59 = vperm2f128_avx(auVar83,auVar69,0x21);
  auVar59 = vshufpd_avx(auVar59,ZEXT1632(auVar69._16_16_),4);
  auVar28._0_8_ = auVar40._0_8_ + auVar59._0_8_;
  auVar28._8_8_ = auVar40._8_8_ + auVar59._8_8_;
  auVar32._16_8_ = auVar40._16_8_ + auVar59._16_8_;
  auVar32._0_16_ = auVar28;
  auVar32._24_8_ = auVar40._24_8_ + auVar59._24_8_;
  auVar58 = vsubpd_avx(auVar59,auVar40);
  auVar26 = vshufpd_avx(auVar81,auVar81,1);
  auVar70._8_8_ = auVar69._0_8_;
  auVar70._0_8_ = auVar69._0_8_;
  auVar70._16_8_ = auVar69._0_8_;
  auVar70._24_8_ = auVar69._0_8_;
  auVar59 = vblendpd_avx(auVar70,ZEXT1632(auVar26),1);
  auVar33 = vpermpd_avx2(auVar83,0x55);
  auVar33 = vblendpd_avx(ZEXT1632(CONCAT88(dVar15,dVar15)),auVar33,0xc);
  auVar47._0_8_ = auVar59._0_8_ + auVar33._0_8_;
  auVar47._8_8_ = auVar59._8_8_ + auVar33._8_8_;
  auVar47._16_8_ = auVar59._16_8_ + auVar33._16_8_;
  auVar47._24_8_ = auVar59._24_8_ + auVar33._24_8_;
  auVar61._8_8_ = __real_3ff0000000000000;
  auVar61._0_8_ = __real_3ff0000000000000;
  auVar61._16_8_ = __real_3ff0000000000000;
  auVar61._24_8_ = __real_3ff0000000000000;
  auVar33 = vsubpd_avx(auVar61,auVar47);
  dVar24 = auVar33._0_8_;
  dVar52 = *(double *)(param_1 + 0xc0 + lVar13 * 0x18);
  dVar15 = *(double *)(param_1 + 0xd0 + lVar13 * 0x18);
  auVar59 = vpermpd_avx2(auVar58,0xaa);
  auVar26 = vmovhpd_avx(ZEXT816(0) << 0x40,*(undefined8 *)(param_1 + 200 + lVar13 * 0x18));
  dVar51 = auVar26._0_8_;
  dVar43 = auVar26._8_8_;
  auVar98 = vpermpd_avx2(auVar32,0x55);
  auVar62._0_8_ = auVar98._0_8_ * 0.0 + dVar51 * auVar59._0_8_ + dVar52 * dVar24;
  auVar62._8_8_ = auVar98._8_8_ * 0.0 + dVar43 * auVar59._8_8_ + dVar24 * 0.0;
  auVar62._16_8_ = dVar15 * auVar98._16_8_ + auVar59._16_8_ * 0.0 + dVar24 * 0.0;
  auVar62._24_8_ = auVar98._24_8_ * 0.0 + auVar59._24_8_ * 0.0 + dVar24 * 0.0;
  auVar59 = vpermpd_avx2(auVar32,0xaa);
  auVar98 = vpermpd_avx2(auVar33,0x55);
  dVar24 = auVar58._0_8_;
  auVar84._0_8_ = dVar24 * 0.0 + dVar52 * auVar59._0_8_ + dVar51 * auVar98._0_8_;
  auVar84._8_8_ = dVar24 * 0.0 + auVar59._8_8_ * 0.0 + dVar43 * auVar98._8_8_;
  auVar84._16_8_ = dVar15 * dVar24 + auVar59._16_8_ * 0.0 + auVar98._16_8_ * 0.0;
  auVar84._24_8_ = dVar24 * 0.0 + auVar59._24_8_ * 0.0 + auVar98._24_8_ * 0.0;
  auVar59 = vpermpd_avx2(auVar58,0x55);
  auVar98 = vpermpd_avx2(auVar33,0xaa);
  auVar71._0_8_ = auVar98._0_8_ * 0.0 + auVar59._0_8_ * dVar52 + dVar51 * auVar28._0_8_;
  auVar71._8_8_ = auVar98._8_8_ * 0.0 + auVar59._8_8_ * 0.0 + dVar43 * auVar28._0_8_;
  auVar71._16_8_ = dVar15 * auVar98._16_8_ + auVar59._16_8_ * 0.0 + auVar28._0_8_ * 0.0;
  auVar71._24_8_ = auVar98._24_8_ * 0.0 + auVar59._24_8_ * 0.0 + auVar28._0_8_ * 0.0;
  auVar26 = vunpcklpd_avx(auVar33._0_16_,auVar32._16_16_);
  auVar59 = vblendpd_avx(ZEXT1632(auVar26),auVar59,0xc);
  auVar98 = vpermpd_avx2(auVar62,0x55);
  auVar26 = vblendpd_avx(auVar33._0_16_,auVar58._16_16_,1);
  dVar107 = auVar26._0_8_;
  dVar110 = auVar26._8_8_;
  dVar43 = auVar59._0_8_;
  dVar49 = auVar59._8_8_;
  dVar50 = auVar59._16_8_;
  dVar96 = auVar59._24_8_;
  auVar32 = vpermpd_avx2(auVar84,0x55);
  auVar40 = vpermpd_avx2(auVar71,0x55);
  auVar26 = vshufpd_avx(auVar28,auVar58._0_16_,1);
  auVar59 = vblendpd_avx(auVar33,ZEXT1632(auVar26),3);
  auVar33 = vpermpd_avx2(auVar62,0xaa);
  dVar52 = auVar59._0_8_;
  auVar38._0_8_ = dVar52 * auVar33._0_8_ + dVar43 * auVar62._0_8_ + dVar107 * auVar98._0_8_;
  dVar15 = auVar59._8_8_;
  auVar38._8_8_ = dVar15 * auVar33._8_8_ + dVar49 * auVar62._0_8_ + dVar110 * auVar98._8_8_;
  dVar24 = auVar59._16_8_;
  auVar41._16_8_ = dVar24 * auVar33._16_8_ + dVar50 * auVar62._0_8_ + auVar28._0_8_ * auVar98._16_8_
  ;
  auVar41._0_16_ = auVar38;
  dVar51 = auVar59._24_8_;
  auVar41._24_8_ = dVar51 * auVar33._24_8_ + dVar96 * auVar62._0_8_ + auVar28._8_8_ * auVar98._24_8_
  ;
  auVar59 = vpermpd_avx2(auVar84,0xaa);
  *pauVar2 = auVar38;
  auVar45._0_8_ = dVar52 * auVar59._0_8_ + dVar43 * auVar84._0_8_ + dVar107 * auVar32._0_8_;
  auVar45._8_8_ = dVar15 * auVar59._8_8_ + dVar49 * auVar84._0_8_ + dVar110 * auVar32._8_8_;
  auVar48._16_8_ = dVar24 * auVar59._16_8_ + dVar50 * auVar84._0_8_ + auVar28._0_8_ * auVar32._16_8_
  ;
  auVar48._0_16_ = auVar45;
  auVar48._24_8_ = dVar51 * auVar59._24_8_ + dVar96 * auVar84._0_8_ + auVar28._8_8_ * auVar32._24_8_
  ;
  uVar6 = vmovlpd_avx(auVar41._16_16_);
  *(undefined8 *)pauVar2[1] = uVar6;
  auVar59 = vpermpd_avx2(auVar71,0xaa);
  *(undefined8 *)(pauVar2[1] + 8) = 0;
  pauVar2[2] = auVar45;
  auVar39._0_8_ = dVar52 * auVar59._0_8_ + dVar43 * auVar71._0_8_ + dVar107 * auVar40._0_8_;
  auVar39._8_8_ = dVar15 * auVar59._8_8_ + dVar49 * auVar71._0_8_ + dVar110 * auVar40._8_8_;
  auVar42._16_8_ = dVar24 * auVar59._16_8_ + dVar50 * auVar71._0_8_ + auVar28._0_8_ * auVar40._16_8_
  ;
  auVar42._0_16_ = auVar39;
  auVar42._24_8_ = dVar51 * auVar59._24_8_ + dVar96 * auVar71._0_8_ + auVar28._8_8_ * auVar40._24_8_
  ;
  uVar6 = vmovlpd_avx(auVar48._16_16_);
  *(undefined8 *)pauVar2[3] = uVar6;
  *(undefined8 *)(pauVar2[3] + 8) = 0;
  pauVar2[4] = auVar39;
  uVar6 = vmovlpd_avx(auVar42._16_16_);
  *(undefined8 *)pauVar2[5] = uVar6;
  *(undefined8 *)(pauVar2[5] + 8) = 0;
  *(undefined8 *)pauVar2[6] = 0;
  *(undefined8 *)(pauVar2[6] + 8) = 0;
  *(undefined8 *)pauVar2[7] = 0;
  *(undefined8 *)(pauVar2[7] + 8) = 0x3ff0000000000000;
  dVar52 = dVar63 * (double)(int)(-(uint)(param_2 != 0) | 1);
  auVar29._0_8_ = dVar52 * *(double *)*param_8 + *(double *)(param_1 + 0x438);
  auVar29._8_8_ = dVar52 * *(double *)(*param_8 + 8) + *(double *)(param_1 + 0x440);
  auVar33._16_8_ = dVar52 * *(double *)(*param_8 + 0x10) + *(double *)(param_1 + 0x448);
  auVar33._0_16_ = auVar29;
  auVar33._24_8_ = dVar52 * 0.0 + 0.0;
  *param_11 = dVar63 + *param_11;
  *(undefined1 (*) [16])(param_1 + 0x438) = auVar29;
  uVar6 = vmovlpd_avx(auVar33._16_16_);
  *(undefined8 *)(param_1 + 0x448) = uVar6;
  return;
}

// ApplyRotationConstraintSoftDD___un_3C_s_5B_unFPBDJointSolver_5D__3E_CundCundCundCunbREFs_5B__c_unFVector_5D_CundCundREFund_avx2 @ 1409e9f00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyRotationConstraintSoftDD___un_3C_s_5B_unFPBDJointSolver_5D__3E_CundCundCundCunbREFs_5B__c_unFVector_5D_CundCundREFund_avx2
               (undefined1 (*param_1) [24],double param_2,undefined8 param_3,double param_4,
               byte param_5,undefined1 (*param_6) [24],double param_7,double param_8,double *param_9
               ,undefined1 (*param_10) [32])

{
  undefined8 uVar1;
  undefined1 auVar2 [24];
  undefined1 auVar3 [24];
  undefined1 auVar4 [24];
  undefined1 auVar5 [24];
  undefined1 auVar6 [24];
  undefined1 auVar7 [24];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar19;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar20;
  undefined1 auVar18 [32];
  double dVar21;
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
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 in_ZMM2 [64];
  double dVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  ulonglong uVar65;
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
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  double dVar94;
  double dVar95;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  double dVar119;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  double dVar120;
  double dVar121;
  double dVar122;
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
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
  undefined1 auVar133 [32];
  undefined1 auVar134 [32];
  undefined1 auVar135 [32];
  undefined1 auVar137 [32];
  undefined1 auVar138 [32];
  undefined1 auVar139 [32];
  undefined1 auVar141 [32];
  double dVar142;
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  double dVar157;
  undefined1 auVar151 [32];
  undefined1 auVar155 [32];
  double dVar158;
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  double dVar176;
  undefined1 auVar163 [32];
  double dVar174;
  double dVar175;
  double dVar177;
  undefined1 auVar164 [32];
  undefined1 auVar165 [32];
  undefined1 auVar166 [32];
  undefined1 auVar167 [32];
  undefined1 auVar169 [32];
  undefined1 auVar170 [32];
  undefined1 auVar171 [32];
  undefined1 auVar172 [32];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [32];
  undefined1 auVar187 [32];
  undefined1 auVar188 [32];
  undefined1 auVar189 [32];
  undefined1 auVar191 [32];
  undefined1 auVar192 [32];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  double dVar204;
  double dVar205;
  double dVar206;
  undefined1 auVar199 [32];
  undefined1 auVar200 [32];
  undefined1 auVar202 [32];
  undefined1 auVar203 [32];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [32];
  double dVar213;
  undefined1 auVar212 [32];
  double dVar214;
  undefined1 auVar215 [16];
  undefined1 auVar216 [16];
  undefined1 auVar217 [32];
  undefined1 auVar17 [32];
  undefined1 auVar42 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar51 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar84 [32];
  undefined1 auVar87 [32];
  undefined1 auVar90 [32];
  undefined1 auVar93 [32];
  undefined1 auVar107 [32];
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  undefined1 auVar118 [32];
  undefined1 auVar136 [32];
  undefined1 auVar140 [32];
  undefined1 auVar149 [32];
  undefined1 auVar150 [32];
  undefined1 auVar152 [32];
  undefined1 auVar153 [32];
  undefined1 auVar154 [32];
  undefined1 auVar156 [32];
  undefined1 auVar168 [32];
  undefined1 auVar173 [32];
  undefined1 auVar190 [32];
  undefined1 auVar193 [32];
  undefined1 auVar198 [32];
  undefined1 auVar201 [32];
  
  dVar157 = _UNK_150b54438;
  dVar142 = _UNK_150b54430;
  dVar214 = _UNK_150b54428;
  dVar213 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar122 = _UNK_150b54418;
  dVar58 = _UNK_150b54410;
  dVar119 = _UNK_150b54408;
  dVar94 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar121 = _UNK_15076c6f8;
  dVar120 = ___xmm_bff00000000000003ff0000000000000;
  auVar53 = vpcmpeqd_avx2(in_ZMM2._0_32_,in_ZMM2._0_32_);
  auVar53 = auVar53 & ~*param_10;
  auVar2 = param_1[0x18];
  dVar95 = *(double *)*param_6;
  auVar10._8_8_ = dVar95;
  auVar10._0_8_ = dVar95;
  auVar17._16_8_ = dVar95;
  auVar17._0_16_ = auVar10;
  auVar17._24_8_ = dVar95;
  auVar3 = *(undefined1 (*) [24])(param_1[0x19] + 8);
  dVar21 = *(double *)(*param_6 + 8);
  auVar123._8_8_ = dVar21;
  auVar123._0_8_ = dVar21;
  auVar4 = *(undefined1 (*) [24])(param_1[0x1a] + 0x10);
  dVar8 = *(double *)(*param_6 + 0x10);
  auVar163._8_8_ = dVar8;
  auVar163._0_8_ = dVar8;
  auVar163._16_8_ = dVar8;
  auVar163._24_8_ = dVar8;
  auVar5 = *(undefined1 (*) [24])(param_1[0x1d] + 8);
  auVar6 = *(undefined1 (*) [24])(param_1[0x1e] + 0x10);
  auVar7 = param_1[0x20];
  auVar10 = vunpcklpd_avx(auVar10,auVar123);
  auVar217 = vblendpd_avx(auVar17,ZEXT1632(auVar10),3);
  auVar217 = vblendpd_avx(auVar217,auVar163,4);
  dVar174 = auVar217._0_8_;
  auVar11._0_8_ = dVar174 * (dVar8 * auVar4._0_8_ + dVar95 * auVar2._0_8_ + auVar3._0_8_ * dVar21);
  dVar176 = auVar217._8_8_;
  auVar11._8_8_ = dVar176 * (dVar8 * auVar4._8_8_ + dVar95 * auVar2._8_8_ + auVar3._8_8_ * dVar21);
  dVar175 = auVar217._16_8_;
  auVar10 = vshufpd_avx(auVar11,auVar11,1);
  dVar158 = dVar175 * (dVar8 * auVar4._16_8_ + dVar95 * auVar2._16_8_ + auVar3._16_8_ * dVar21) +
            auVar11._0_8_ + auVar10._0_8_;
  auVar12._0_8_ = dVar174 * (dVar8 * auVar7._0_8_ + dVar95 * auVar5._0_8_ + auVar6._0_8_ * dVar21);
  auVar12._8_8_ = dVar176 * (dVar8 * auVar7._8_8_ + dVar95 * auVar5._8_8_ + auVar6._8_8_ * dVar21);
  auVar10 = vshufpd_avx(auVar12,auVar12,1);
  dVar95 = dVar175 * (dVar8 * auVar7._16_8_ + dVar95 * auVar5._16_8_ + auVar6._16_8_ * dVar21) +
           auVar12._0_8_ + auVar10._0_8_;
  dVar21 = dVar158 + dVar95;
  dVar8 = 0.0;
  if ((((((((SUB321(auVar53 >> 0x1f,0) & 1) == 0 && (SUB321(auVar53 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar53 >> 0x5f,0) & 1) == 0) && SUB321(auVar53 >> 0x7f,0) == '\0') &&
        (SUB321(auVar53 >> 0x9f,0) & 1) == 0) && SUB321(auVar53 >> 0xbf,0) == '\0') &&
      (SUB321(auVar53 >> 0xdf,0) & 1) == 0) && -1 < auVar53[0x1f]) {
    if (__real_3f1a36e2eb1c432d < param_4) {
      dVar8 = *(double *)(param_1[0x29] + 8);
      dVar19 = *(double *)(param_1[0x29] + 0x10);
      dVar20 = *(double *)param_1[0x2a];
      dVar177 = *(double *)(param_1[0x2a] + 8);
      auVar68._0_8_ =
           dVar20 * *(double *)(param_1[0xd] + 8) + dVar8 * *(double *)(param_1[0xc] + 0x10);
      auVar68._8_8_ = dVar177 * *(double *)(param_1[0xd] + 0x10) + dVar19 * *(double *)param_1[0xd];
      auVar10 = vshufpd_avx(auVar68,auVar68,1);
      auVar69._8_8_ = 0;
      auVar69._0_8_ = auVar10._0_8_ + auVar68._0_8_;
      auVar10 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar69,2);
      auVar125._8_8_ = 0;
      auVar125._0_8_ = __real_3ff0000000000000;
      auVar179._8_8_ = 0;
      auVar179._0_8_ = __real_bff0000000000000;
      auVar10 = vblendvpd_avx(auVar179,auVar125,auVar10);
      dVar9 = auVar10._0_8_;
      auVar81._0_8_ = *(double *)(param_1[0xc] + 0x10) * dVar9 - dVar8;
      auVar81._8_8_ = *(double *)param_1[0xd] * dVar9 - dVar19;
      auVar81._16_8_ = *(double *)(param_1[0xd] + 8) * dVar9 - dVar20;
      auVar81._24_8_ = *(double *)(param_1[0xd] + 0x10) * dVar9 - dVar177;
      auVar38._0_8_ =
           dVar8 * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
      auVar38._8_8_ = dVar19 * _UNK_150b543c8;
      auVar38._16_8_ = dVar20 * _UNK_150b543d0;
      auVar38._24_8_ = dVar177 * _UNK_150b543d8;
      auVar17 = vpermpd_avx2(auVar81,0xff);
      auVar163 = vpermpd_avx2(auVar38,0xdb);
      auVar48 = vpermpd_avx2(auVar81,0x55);
      auVar49 = vpermpd_avx2(auVar38,0xce);
      auVar50 = vpermpd_avx2(auVar81,0xaa);
      auVar217 = vshufpd_avx(auVar38,auVar38,5);
      dVar8 = *(double *)(param_1[0x2a] + 0x10);
      dVar19 = *(double *)param_1[0x2b];
      dVar20 = *(double *)(param_1[0x2b] + 8);
      dVar177 = *(double *)(param_1[0x2b] + 0x10);
      auVar180._0_8_ = *(double *)param_1[0xe] * dVar8 + *(double *)(param_1[0xe] + 0x10) * dVar20;
      auVar180._8_8_ = *(double *)(param_1[0xe] + 8) * dVar19 + *(double *)param_1[0xf] * dVar177;
      auVar10 = vshufpd_avx(auVar180,auVar180,1);
      auVar181._8_8_ = 0;
      auVar181._0_8_ = auVar180._0_8_ + auVar10._0_8_;
      auVar10 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar181,2);
      auVar208._8_8_ = 0;
      auVar208._0_8_ = __real_bff0000000000000;
      auVar216._8_8_ = 0;
      auVar216._0_8_ = __real_3ff0000000000000;
      auVar10 = vblendvpd_avx(auVar208,auVar216,auVar10);
      dVar9 = auVar10._0_8_;
      auVar187._0_8_ = *(double *)param_1[0xe] * dVar9 - dVar8;
      auVar187._8_8_ = *(double *)(param_1[0xe] + 8) * dVar9 - dVar19;
      auVar187._16_8_ = *(double *)(param_1[0xe] + 0x10) * dVar9 - dVar20;
      auVar187._24_8_ = *(double *)param_1[0xf] * dVar9 - dVar177;
      auVar133._0_8_ =
           dVar8 * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
      auVar133._8_8_ = dVar19 * _UNK_150b543c8;
      auVar133._16_8_ = dVar20 * _UNK_150b543d0;
      auVar133._24_8_ = dVar177 * _UNK_150b543d8;
      auVar51 = vpermpd_avx2(auVar187,0xff);
      auVar52 = vpermpd_avx2(auVar133,0xdb);
      auVar54 = vpermpd_avx2(auVar187,0x55);
      auVar55 = vpermpd_avx2(auVar133,0xce);
      auVar88 = vpermpd_avx2(auVar187,0xaa);
      auVar53 = vshufpd_avx(auVar133,auVar133,5);
      dVar8 = ___ymm_00000000000000003ff00000000000003ff0000000000000bff0000000000000 *
              auVar53._0_8_ * auVar88._0_8_ +
              ___ymm_0000000000000000bff00000000000003ff00000000000003ff0000000000000 *
              auVar55._0_8_ * auVar54._0_8_ +
              auVar133._0_8_ * auVar51._0_8_ +
              auVar52._0_8_ * auVar187._0_8_ * ___xmm_bff00000000000003ff0000000000000;
      dVar19 = _UNK_150b54588 * auVar53._8_8_ * auVar88._8_8_ +
               _UNK_150b54568 * auVar55._8_8_ * auVar54._8_8_ +
               auVar133._8_8_ * auVar51._8_8_ + auVar52._8_8_ * auVar187._0_8_ * _UNK_15076c6f8;
      dVar20 = _UNK_150b54590 * auVar53._16_8_ * auVar88._16_8_ +
               _UNK_150b54570 * auVar55._16_8_ * auVar54._16_8_ +
               auVar133._16_8_ * auVar51._16_8_ +
               auVar52._16_8_ * auVar187._0_8_ * ___xmm_bff00000000000003ff0000000000000;
      auVar16._0_8_ =
           ((___ymm_00000000000000003ff00000000000003ff0000000000000bff0000000000000 *
             auVar217._0_8_ * auVar50._0_8_ +
            ___ymm_0000000000000000bff00000000000003ff00000000000003ff0000000000000 *
            auVar49._0_8_ * auVar48._0_8_ +
            auVar38._0_8_ * auVar17._0_8_ +
            auVar163._0_8_ * auVar81._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
            __real_4000000000000000 - (dVar8 + dVar8)) * dVar174;
      auVar16._8_8_ =
           ((_UNK_150b54588 * auVar217._8_8_ * auVar50._8_8_ +
            _UNK_150b54568 * auVar49._8_8_ * auVar48._8_8_ +
            auVar38._8_8_ * auVar17._8_8_ + auVar163._8_8_ * auVar81._0_8_ * _UNK_15076c6f8) *
            __real_4000000000000000 - (dVar19 + dVar19)) * dVar176;
      auVar10 = vshufpd_avx(auVar16,auVar16,1);
      dVar8 = param_2 * param_8 +
              ((_UNK_150b54590 * auVar217._16_8_ * auVar50._16_8_ +
               _UNK_150b54570 * auVar49._16_8_ * auVar48._16_8_ +
               auVar38._16_8_ * auVar17._16_8_ +
               auVar163._16_8_ * auVar81._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
               __real_4000000000000000 - (dVar20 + dVar20)) * dVar175 +
              auVar16._0_8_ + auVar10._0_8_;
      auVar217._24_8_ = 0;
      auVar217._0_24_ = *param_6;
    }
    dVar174 = __real_3ff0000000000000;
    if ((param_5 & 1) != 0) {
      dVar174 = __real_3ff0000000000000 / dVar21;
    }
    dVar176 = in_ZMM2._0_8_ * dVar174 * param_2 * param_2;
    param_2 = dVar174 * param_4 * param_2;
    dVar21 = (__real_3ff0000000000000 / (dVar21 * (param_2 + dVar176) + __real_3ff0000000000000)) *
             *(double *)param_1[0x33] * ((dVar176 * param_7 - param_2 * dVar8) - *param_9);
    if (0.0 < *(double *)param_1[10]) {
      dVar158 = dVar158 * dVar21;
      auVar88._0_8_ = auVar217._0_8_ * dVar158;
      auVar88._8_8_ = auVar217._8_8_ * dVar158;
      auVar88._16_8_ = auVar217._16_8_ * dVar158;
      auVar88._24_8_ = auVar217._24_8_ * dVar158;
      auVar101._8_8_ = 0;
      auVar101._0_8_ = *(ulonglong *)(param_1[0x12] + 8);
      auVar10 = vmovhpd_avx(auVar101,*(undefined8 *)param_1[0x12]);
      auVar129._8_8_ = 0;
      auVar129._0_8_ = *(ulonglong *)(param_1[0x11] + 0x10);
      auVar11 = vmovhpd_avx(auVar129,*(undefined8 *)(param_1[0x11] + 8));
      auVar53 = vpermpd_avx2(auVar88,0x55);
      auVar17 = vpermpd_avx2(auVar88,0xaa);
      dVar158 = (___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
                 auVar17._0_8_ * auVar11._0_8_ +
                ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
                auVar53._0_8_ * *(double *)param_1[0x12] +
                *(double *)(param_1[0x11] + 8) * 0.0 +
                auVar88._0_8_ * auVar10._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
                __real_3fe0000000000000 + *(double *)(param_1[0x11] + 8);
      dVar174 = (_UNK_150b54428 * auVar17._8_8_ * auVar11._8_8_ +
                _UNK_150b54408 * auVar53._8_8_ * *(double *)(param_1[0x12] + 8) +
                *(double *)(param_1[0x11] + 0x10) * 0.0 +
                auVar88._0_8_ * auVar10._8_8_ * _UNK_15076c6f8) * __real_3fe0000000000000 +
                *(double *)(param_1[0x11] + 0x10);
      dVar176 = (_UNK_150b54430 * auVar17._16_8_ * auVar10._0_8_ +
                _UNK_150b54410 * auVar53._16_8_ * *(double *)(param_1[0x11] + 8) +
                *(double *)param_1[0x12] * 0.0 +
                auVar88._0_8_ * auVar11._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
                __real_3fe0000000000000 + *(double *)param_1[0x12];
      dVar177 = (_UNK_150b54438 * auVar17._24_8_ * auVar10._8_8_ +
                _UNK_150b54418 * auVar53._24_8_ * *(double *)(param_1[0x11] + 0x10) +
                *(double *)(param_1[0x12] + 8) * 0.0 +
                auVar88._0_8_ * auVar11._8_8_ * _UNK_15076c6f8) * __real_3fe0000000000000 +
                *(double *)(param_1[0x12] + 8);
      auVar28._0_8_ = dVar158 * dVar158 + dVar176 * dVar176;
      auVar28._8_8_ = dVar174 * dVar174 + dVar177 * dVar177;
      auVar10 = vshufpd_avx(auVar28,auVar28,1);
      dVar8 = auVar28._0_8_ + auVar10._0_8_;
      auVar75._8_8_ = 0;
      auVar75._0_8_ = __real_3e45798ee2308c3a;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = dVar8;
      auVar10 = vcmpsd_avx(auVar75,auVar29,6);
      uVar65 = ~auVar10._0_8_ & __real_ffffffffffffffff;
      dVar8 = __real_3ff0000000000000 / SQRT(dVar8);
      dVar19 = (double)((___ymm_3ff0000000000000000000000000000000000000000000000000000000000000 ^
                        (ulonglong)(dVar158 * dVar8)) & uVar65);
      dVar175 = (double)((_UNK_150b54548 ^ (ulonglong)(dVar174 * dVar8)) & uVar65);
      dVar20 = (double)((_UNK_150b54550 ^ (ulonglong)(dVar176 * dVar8)) & uVar65);
      dVar177 = (double)((_UNK_150b54558 ^ (ulonglong)(dVar177 * dVar8)) & uVar65);
      auVar191._0_8_ =
           (double)((ulonglong)dVar19 ^
                   ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
      auVar191._8_8_ = (double)((ulonglong)dVar175 ^ _UNK_150b54548);
      auVar191._16_8_ = (double)((ulonglong)dVar20 ^ _UNK_150b54550);
      auVar191._24_8_ = (double)((ulonglong)dVar177 ^ _UNK_150b54558);
      *(undefined1 (*) [32])(param_1[0x11] + 8) = auVar191;
      auVar76._8_8_ = 0;
      auVar76._0_8_ = *(ulonglong *)(param_1[1] + 8);
      uVar1 = *(undefined8 *)(param_1[2] + 8);
      auVar196._8_8_ = uVar1;
      auVar196._0_8_ = uVar1;
      auVar201._16_8_ = uVar1;
      auVar201._0_16_ = auVar196;
      auVar201._24_8_ = uVar1;
      auVar10 = vunpcklpd_avx(auVar76,auVar196);
      auVar17 = vpermpd_avx2(auVar191,0xc9);
      auVar2 = *(undefined1 (*) [24])(param_1[1] + 8);
      auVar212._24_8_ = 0;
      auVar212._0_24_ = auVar2;
      auVar53 = vblendpd_avx(auVar212,auVar201,8);
      dVar8 = auVar191._0_8_ * SUB168(*(undefined1 (*) [16])(param_1[1] + 0x10),0) -
              auVar53._0_8_ * auVar17._0_8_;
      dVar158 = auVar191._8_8_ * SUB168(*(undefined1 (*) [16])(param_1[1] + 0x10),8) -
                auVar53._8_8_ * auVar17._8_8_;
      dVar174 = auVar191._16_8_ * auVar10._0_8_ - auVar53._16_8_ * auVar17._16_8_;
      dVar176 = auVar191._24_8_ * auVar10._8_8_ - auVar53._24_8_ * auVar17._24_8_;
      auVar48._0_8_ = dVar8 + dVar8;
      auVar48._8_8_ = dVar158 + dVar158;
      auVar48._16_8_ = dVar174 + dVar174;
      auVar48._24_8_ = dVar176 + dVar176;
      auVar53 = vpermpd_avx2(auVar191,0xff);
      auVar17 = vpermpd_avx2(auVar48,0xc9);
      dVar9 = auVar53._0_8_;
      dVar204 = auVar53._8_8_;
      dVar205 = auVar53._16_8_;
      dVar206 = auVar53._24_8_;
      auVar53 = vpermpd_avx2(auVar48,0xd2);
      auVar49._0_8_ = dVar19 * auVar48._0_8_;
      auVar49._8_8_ = dVar175 * auVar48._8_8_;
      auVar49._16_8_ = dVar20 * auVar48._16_8_;
      auVar49._24_8_ = dVar177 * auVar48._24_8_;
      auVar163 = vpermpd_avx2(auVar49,0xc9);
      auVar50._0_8_ = dVar19 * auVar53._0_8_ - auVar163._0_8_;
      auVar50._8_8_ = dVar175 * auVar53._8_8_ - auVar163._8_8_;
      auVar50._16_8_ = dVar20 * auVar53._16_8_ - auVar163._16_8_;
      auVar50._24_8_ = dVar177 * auVar53._24_8_ - auVar163._24_8_;
      auVar53 = vpermpd_avx2(auVar50,0xc9);
      auVar30._0_8_ =
           *(double *)(param_1[0xf] + 8) + dVar9 * auVar17._0_8_ + auVar2._0_8_ + auVar53._0_8_;
      auVar30._8_8_ =
           *(double *)(param_1[0xf] + 0x10) + dVar204 * auVar17._8_8_ + auVar2._8_8_ + auVar53._8_8_
      ;
      auVar51._16_8_ =
           *(double *)param_1[0x10] + dVar205 * auVar17._16_8_ + auVar2._16_8_ + auVar53._16_8_;
      auVar51._0_16_ = auVar30;
      auVar51._24_8_ = dVar206 * auVar17._24_8_ + 0.0 + auVar53._24_8_ + 0.0;
      *(undefined1 (*) [16])(param_1[10] + 0x10) = auVar30;
      uVar1 = vmovlpd_avx(auVar51._16_16_);
      *(undefined8 *)(param_1[0xb] + 8) = uVar1;
      auVar77._8_8_ = 0;
      auVar77._0_8_ = *(ulonglong *)(*param_1 + 8);
      auVar10 = vmovhpd_avx(auVar77,*(undefined8 *)*param_1);
      auVar210._8_8_ = 0;
      auVar210._0_8_ = *(ulonglong *)param_1[1];
      auVar11 = vmovhpd_avx(auVar210,*(undefined8 *)(*param_1 + 0x10));
      dVar158 = *(double *)(*param_1 + 8);
      auVar2 = *param_1;
      dVar8 = *(double *)param_1[1];
      auVar53 = vpermpd_avx2(auVar191,0x55);
      dVar174 = *(double *)param_1[1];
      dVar176 = *(double *)*param_1;
      dVar175 = *(double *)(*param_1 + 8);
      auVar17 = vpermpd_avx2(auVar191,0xaa);
      *(double *)(param_1[0xc] + 0x10) =
           dVar213 * auVar10._0_8_ * auVar17._0_8_ +
           dVar94 * *(double *)(*param_1 + 0x10) * auVar53._0_8_ +
           dVar9 * *(double *)*param_1 + auVar11._0_8_ * dVar19 * dVar120;
      *(double *)param_1[0xd] =
           dVar214 * auVar10._8_8_ * auVar17._8_8_ +
           dVar119 * dVar174 * auVar53._8_8_ + dVar204 * dVar158 + auVar11._8_8_ * dVar19 * dVar121;
      *(double *)(param_1[0xd] + 8) =
           dVar142 * auVar11._0_8_ * auVar17._16_8_ +
           dVar58 * dVar176 * auVar53._16_8_ +
           dVar205 * auVar2._16_8_ + auVar10._0_8_ * dVar19 * dVar120;
      *(double *)(param_1[0xd] + 0x10) =
           dVar157 * auVar11._8_8_ * auVar17._24_8_ +
           dVar122 * dVar175 * auVar53._24_8_ + dVar206 * dVar8 + auVar10._8_8_ * dVar19 * dVar121;
      dVar8 = auVar191._0_8_ + auVar191._0_8_;
      dVar158 = auVar191._8_8_ + auVar191._8_8_;
      dVar120 = auVar191._16_8_ + auVar191._16_8_;
      dVar121 = auVar191._24_8_ + auVar191._24_8_;
      auVar52._0_8_ = dVar8 * dVar19;
      auVar52._8_8_ = dVar158 * dVar19;
      auVar52._16_8_ = dVar120 * dVar19;
      auVar52._24_8_ = dVar121 * dVar19;
      auVar146._0_8_ = auVar53._0_8_ * dVar8;
      auVar146._8_8_ = auVar53._8_8_ * dVar158;
      auVar153._16_8_ = auVar53._16_8_ * dVar120;
      auVar153._0_16_ = auVar146;
      auVar153._24_8_ = auVar53._24_8_ * dVar121;
      auVar138._0_8_ = dVar9 * dVar8;
      auVar138._8_8_ = dVar204 * dVar158;
      auVar138._16_8_ = dVar205 * dVar120;
      auVar138._24_8_ = dVar206 * dVar121;
      auVar53 = vperm2f128_avx(auVar153,auVar52,0x21);
      auVar53 = vshufpd_avx(auVar53,ZEXT1632(auVar52._16_16_),4);
      auVar102._0_8_ = auVar53._0_8_ + auVar138._0_8_;
      auVar102._8_8_ = auVar53._8_8_ + auVar138._8_8_;
      auVar113._16_8_ = auVar53._16_8_ + auVar138._16_8_;
      auVar113._0_16_ = auVar102;
      auVar113._24_8_ = auVar53._24_8_ + auVar138._24_8_;
      auVar163 = vsubpd_avx(auVar53,auVar138);
      auVar10 = vshufpd_avx(auVar146,auVar146,1);
      auVar53._8_8_ = auVar52._0_8_;
      auVar53._0_8_ = auVar52._0_8_;
      auVar53._16_8_ = auVar52._0_8_;
      auVar53._24_8_ = auVar52._0_8_;
      auVar53 = vblendpd_avx(auVar53,ZEXT1632(auVar10),1);
      auVar17 = vpermpd_avx2(auVar153,0x55);
      auVar17 = vblendpd_avx(ZEXT1632(CONCAT88(dVar20 * dVar120,dVar20 * dVar120)),auVar17,0xc);
      auVar54._0_8_ = auVar53._0_8_ + auVar17._0_8_;
      auVar54._8_8_ = auVar53._8_8_ + auVar17._8_8_;
      auVar54._16_8_ = auVar53._16_8_ + auVar17._16_8_;
      auVar54._24_8_ = auVar53._24_8_ + auVar17._24_8_;
      auVar89._8_8_ = __real_3ff0000000000000;
      auVar89._0_8_ = __real_3ff0000000000000;
      auVar89._16_8_ = __real_3ff0000000000000;
      auVar89._24_8_ = __real_3ff0000000000000;
      auVar17 = vsubpd_avx(auVar89,auVar54);
      dVar120 = auVar17._0_8_;
      dVar8 = *(double *)param_1[8];
      dVar158 = *(double *)(param_1[8] + 0x10);
      auVar10 = vmovhpd_avx(ZEXT816(0) << 0x40,*(undefined8 *)(param_1[8] + 8));
      auVar53 = vpermpd_avx2(auVar163,0xaa);
      dVar121 = auVar10._0_8_;
      dVar94 = auVar10._8_8_;
      auVar48 = vpermpd_avx2(auVar113,0x55);
      auVar202._0_8_ = auVar48._0_8_ * 0.0 + dVar121 * auVar53._0_8_ + dVar8 * dVar120;
      auVar202._8_8_ = auVar48._8_8_ * 0.0 + dVar94 * auVar53._8_8_ + dVar120 * 0.0;
      auVar202._16_8_ = dVar158 * auVar48._16_8_ + auVar53._16_8_ * 0.0 + dVar120 * 0.0;
      auVar202._24_8_ = auVar48._24_8_ * 0.0 + auVar53._24_8_ * 0.0 + dVar120 * 0.0;
      auVar53 = vpermpd_avx2(auVar113,0xaa);
      auVar48 = vpermpd_avx2(auVar17,0x55);
      dVar120 = auVar163._0_8_;
      auVar192._0_8_ = dVar120 * 0.0 + dVar8 * auVar53._0_8_ + dVar121 * auVar48._0_8_;
      auVar192._8_8_ = dVar120 * 0.0 + auVar53._8_8_ * 0.0 + dVar94 * auVar48._8_8_;
      auVar192._16_8_ = dVar158 * dVar120 + auVar53._16_8_ * 0.0 + auVar48._16_8_ * 0.0;
      auVar192._24_8_ = dVar120 * 0.0 + auVar53._24_8_ * 0.0 + auVar48._24_8_ * 0.0;
      auVar53 = vpermpd_avx2(auVar163,0x55);
      auVar48 = vpermpd_avx2(auVar17,0xaa);
      auVar169._0_8_ = auVar48._0_8_ * 0.0 + auVar53._0_8_ * dVar8 + dVar121 * auVar102._0_8_;
      auVar169._8_8_ = auVar48._8_8_ * 0.0 + auVar53._8_8_ * 0.0 + dVar94 * auVar102._0_8_;
      auVar169._16_8_ = dVar158 * auVar48._16_8_ + auVar53._16_8_ * 0.0 + auVar102._0_8_ * 0.0;
      auVar169._24_8_ = auVar48._24_8_ * 0.0 + auVar53._24_8_ * 0.0 + auVar102._0_8_ * 0.0;
      auVar10 = vunpcklpd_avx(auVar17._0_16_,auVar113._16_16_);
      auVar53 = vblendpd_avx(ZEXT1632(auVar10),auVar53,0xc);
      auVar48 = vpermpd_avx2(auVar202,0x55);
      auVar10 = vblendpd_avx(auVar17._0_16_,auVar163._16_16_,1);
      dVar213 = auVar10._0_8_;
      dVar214 = auVar10._8_8_;
      dVar8 = auVar53._0_8_;
      dVar158 = auVar53._8_8_;
      dVar120 = auVar53._16_8_;
      dVar121 = auVar53._24_8_;
      auVar49 = vpermpd_avx2(auVar202,0xaa);
      auVar10 = vshufpd_avx(auVar102,auVar163._0_16_,1);
      auVar53 = vblendpd_avx(auVar17,ZEXT1632(auVar10),3);
      dVar94 = auVar53._0_8_;
      auVar31._0_8_ = dVar94 * auVar49._0_8_ + dVar8 * auVar202._0_8_ + dVar213 * auVar48._0_8_;
      dVar119 = auVar53._8_8_;
      auVar31._8_8_ = dVar119 * auVar49._8_8_ + dVar158 * auVar202._0_8_ + dVar214 * auVar48._8_8_;
      dVar58 = auVar53._16_8_;
      auVar55._16_8_ =
           dVar58 * auVar49._16_8_ + dVar120 * auVar202._0_8_ + auVar102._0_8_ * auVar48._16_8_;
      auVar55._0_16_ = auVar31;
      dVar122 = auVar53._24_8_;
      auVar55._24_8_ =
           dVar122 * auVar49._24_8_ + dVar121 * auVar202._0_8_ + auVar102._8_8_ * auVar48._24_8_;
      auVar53 = vpermpd_avx2(auVar192,0x55);
      auVar17 = vpermpd_avx2(auVar192,0xaa);
      auVar147._0_8_ = dVar94 * auVar17._0_8_ + dVar8 * auVar192._0_8_ + dVar213 * auVar53._0_8_;
      auVar147._8_8_ = dVar119 * auVar17._8_8_ + dVar158 * auVar192._0_8_ + dVar214 * auVar53._8_8_;
      auVar154._16_8_ =
           dVar58 * auVar17._16_8_ + dVar120 * auVar192._0_8_ + auVar102._0_8_ * auVar53._16_8_;
      auVar154._0_16_ = auVar147;
      auVar154._24_8_ =
           dVar122 * auVar17._24_8_ + dVar121 * auVar192._0_8_ + auVar102._8_8_ * auVar53._24_8_;
      auVar53 = vpermpd_avx2(auVar169,0x55);
      auVar17 = vpermpd_avx2(auVar169,0xaa);
      *(undefined1 (*) [16])param_1[0x18] = auVar31;
      uVar1 = vmovlpd_avx(auVar55._16_16_);
      *(undefined8 *)(param_1[0x18] + 0x10) = uVar1;
      auVar78._0_8_ = dVar94 * auVar17._0_8_ + dVar8 * auVar169._0_8_ + dVar213 * auVar53._0_8_;
      auVar78._8_8_ = dVar119 * auVar17._8_8_ + dVar158 * auVar169._0_8_ + dVar214 * auVar53._8_8_;
      auVar90._16_8_ =
           dVar58 * auVar17._16_8_ + dVar120 * auVar169._0_8_ + auVar102._0_8_ * auVar53._16_8_;
      auVar90._0_16_ = auVar78;
      auVar90._24_8_ =
           dVar122 * auVar17._24_8_ + dVar121 * auVar169._0_8_ + auVar102._8_8_ * auVar53._24_8_;
      *(undefined8 *)param_1[0x19] = 0;
      *(undefined1 (*) [16])(param_1[0x19] + 8) = auVar147;
      uVar1 = vmovlpd_avx(auVar154._16_16_);
      *(undefined8 *)param_1[0x1a] = uVar1;
      *(undefined8 *)(param_1[0x1a] + 8) = 0;
      *(undefined1 (*) [16])(param_1[0x1a] + 0x10) = auVar78;
      uVar1 = vmovlpd_avx(auVar90._16_16_);
      *(undefined8 *)(param_1[0x1b] + 8) = uVar1;
      *(undefined1 (*) [32])(param_1[0x1b] + 0x10) = ZEXT1632(ZEXT816(0));
      *(undefined8 *)param_1[0x1d] = 0x3ff0000000000000;
    }
    dVar214 = _UNK_150b54438;
    dVar213 = _UNK_150b54430;
    dVar122 = _UNK_150b54428;
    dVar58 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
    dVar119 = _UNK_150b54418;
    dVar94 = _UNK_150b54410;
    dVar121 = _UNK_150b54408;
    dVar120 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
    dVar158 = _UNK_15076c6f8;
    dVar8 = ___xmm_bff00000000000003ff0000000000000;
    if (*(double *)(param_1[10] + 8) <= 0.0) goto LAB_1409eb5a3;
    dVar95 = dVar21 * (double)((ulonglong)dVar95 ^ __xmm_80000000000000008000000000000000);
    auVar91._0_8_ = auVar217._0_8_ * dVar95;
    auVar91._8_8_ = auVar217._8_8_ * dVar95;
    auVar91._16_8_ = auVar217._16_8_ * dVar95;
    auVar91._24_8_ = auVar217._24_8_ * dVar95;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = *(ulonglong *)(param_1[0x13] + 0x10);
    auVar10 = vmovhpd_avx(auVar32,*(undefined8 *)(param_1[0x13] + 8));
    auVar60._8_8_ = 0;
    auVar60._0_8_ = *(ulonglong *)param_1[0x13];
    auVar11 = vmovhpd_avx(auVar60,*(undefined8 *)(param_1[0x12] + 0x10));
    auVar217 = vpermpd_avx2(auVar91,0x55);
    auVar53 = vpermpd_avx2(auVar91,0xaa);
    dVar142 = (___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
               auVar53._0_8_ * auVar11._0_8_ +
              ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
              auVar217._0_8_ * *(double *)(param_1[0x13] + 8) +
              *(double *)(param_1[0x12] + 0x10) * 0.0 +
              auVar91._0_8_ * auVar10._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
              __real_3fe0000000000000 + *(double *)(param_1[0x12] + 0x10);
    dVar157 = (_UNK_150b54428 * auVar53._8_8_ * auVar11._8_8_ +
              _UNK_150b54408 * auVar217._8_8_ * *(double *)(param_1[0x13] + 0x10) +
              *(double *)param_1[0x13] * 0.0 + auVar91._0_8_ * auVar10._8_8_ * _UNK_15076c6f8) *
              __real_3fe0000000000000 + *(double *)param_1[0x13];
    dVar174 = (_UNK_150b54430 * auVar53._16_8_ * auVar10._0_8_ +
              _UNK_150b54410 * auVar217._16_8_ * *(double *)(param_1[0x12] + 0x10) +
              *(double *)(param_1[0x13] + 8) * 0.0 +
              auVar91._0_8_ * auVar11._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
              __real_3fe0000000000000 + *(double *)(param_1[0x13] + 8);
    dVar19 = (_UNK_150b54438 * auVar53._24_8_ * auVar10._8_8_ +
             _UNK_150b54418 * auVar217._24_8_ * *(double *)param_1[0x13] +
             *(double *)(param_1[0x13] + 0x10) * 0.0 +
             auVar91._0_8_ * auVar11._8_8_ * _UNK_15076c6f8) * __real_3fe0000000000000 +
             *(double *)(param_1[0x13] + 0x10);
    auVar103._0_8_ = dVar142 * dVar142 + dVar174 * dVar174;
    auVar103._8_8_ = dVar157 * dVar157 + dVar19 * dVar19;
    auVar10 = vshufpd_avx(auVar103,auVar103,1);
    dVar95 = auVar103._0_8_ + auVar10._0_8_;
    auVar130._8_8_ = 0;
    auVar130._0_8_ = __real_3e45798ee2308c3a;
    auVar104._8_8_ = 0;
    auVar104._0_8_ = dVar95;
    auVar10 = vcmpsd_avx(auVar130,auVar104,6);
    uVar65 = ~auVar10._0_8_ & __real_ffffffffffffffff;
    dVar95 = __real_3ff0000000000000 / SQRT(dVar95);
    dVar176 = (double)(((ulonglong)(dVar142 * dVar95) ^
                       ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) &
                      uVar65);
    dVar142 = (double)(((ulonglong)(dVar157 * dVar95) ^ _UNK_150b54548) & uVar65);
    dVar175 = (double)(((ulonglong)(dVar174 * dVar95) ^ _UNK_150b54550) & uVar65);
    dVar95 = (double)(((ulonglong)(dVar19 * dVar95) ^ _UNK_150b54558) & uVar65);
    auVar139._0_8_ =
         (double)((ulonglong)dVar176 ^
                 ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
    auVar139._8_8_ = (double)((ulonglong)dVar142 ^ _UNK_150b54548);
    auVar139._16_8_ = (double)((ulonglong)dVar175 ^ _UNK_150b54550);
    auVar139._24_8_ = (double)((ulonglong)dVar95 ^ _UNK_150b54558);
    *(undefined1 (*) [32])(param_1[0x12] + 0x10) = auVar139;
    auVar161._8_8_ = 0;
    auVar161._0_8_ = *(ulonglong *)(param_1[5] + 8);
    uVar1 = *(undefined8 *)(param_1[6] + 8);
    auVar184._8_8_ = uVar1;
    auVar184._0_8_ = uVar1;
    auVar193._16_8_ = uVar1;
    auVar193._0_16_ = auVar184;
    auVar193._24_8_ = uVar1;
    auVar10 = vunpcklpd_avx(auVar161,auVar184);
    auVar53 = vpermpd_avx2(auVar139,0xc9);
    auVar2 = *(undefined1 (*) [24])(param_1[5] + 8);
    auVar203._24_8_ = 0;
    auVar203._0_24_ = auVar2;
    auVar217 = vblendpd_avx(auVar203,auVar193,8);
    dVar157 = auVar139._0_8_ * SUB168(*(undefined1 (*) [16])(param_1[5] + 0x10),0) -
              auVar217._0_8_ * auVar53._0_8_;
    dVar174 = auVar139._8_8_ * SUB168(*(undefined1 (*) [16])(param_1[5] + 0x10),8) -
              auVar217._8_8_ * auVar53._8_8_;
    dVar19 = auVar139._16_8_ * auVar10._0_8_ - auVar217._16_8_ * auVar53._16_8_;
    dVar20 = auVar139._24_8_ * auVar10._8_8_ - auVar217._24_8_ * auVar53._24_8_;
    auVar170._0_8_ = dVar157 + dVar157;
    auVar170._8_8_ = dVar174 + dVar174;
    auVar170._16_8_ = dVar19 + dVar19;
    auVar170._24_8_ = dVar20 + dVar20;
    auVar217 = vpermpd_avx2(auVar139,0xff);
    auVar53 = vpermpd_avx2(auVar170,0xc9);
    dVar19 = auVar217._0_8_;
    dVar20 = auVar217._8_8_;
    dVar177 = auVar217._16_8_;
    dVar9 = auVar217._24_8_;
    auVar217 = vpermpd_avx2(auVar170,0xd2);
    auVar171._0_8_ = auVar170._0_8_ * dVar176;
    auVar171._8_8_ = auVar170._8_8_ * dVar142;
    auVar171._16_8_ = auVar170._16_8_ * dVar175;
    auVar171._24_8_ = auVar170._24_8_ * dVar95;
    auVar17 = vpermpd_avx2(auVar171,0xc9);
    auVar172._0_8_ = dVar176 * auVar217._0_8_ - auVar17._0_8_;
    auVar172._8_8_ = dVar142 * auVar217._8_8_ - auVar17._8_8_;
    auVar172._16_8_ = dVar175 * auVar217._16_8_ - auVar17._16_8_;
    auVar172._24_8_ = dVar95 * auVar217._24_8_ - auVar17._24_8_;
    auVar217 = vpermpd_avx2(auVar172,0xc9);
    auVar162._0_8_ =
         *(double *)(param_1[0x10] + 8) + dVar19 * auVar53._0_8_ + auVar2._0_8_ + auVar217._0_8_;
    auVar162._8_8_ =
         *(double *)(param_1[0x10] + 0x10) + dVar20 * auVar53._8_8_ + auVar2._8_8_ + auVar217._8_8_;
    auVar173._16_8_ =
         *(double *)param_1[0x11] + dVar177 * auVar53._16_8_ + auVar2._16_8_ + auVar217._16_8_;
    auVar173._0_16_ = auVar162;
    auVar173._24_8_ = dVar9 * auVar53._24_8_ + 0.0 + auVar217._24_8_ + 0.0;
    *(undefined1 (*) [16])(param_1[0xb] + 0x10) = auVar162;
    uVar1 = vmovlpd_avx(auVar173._16_16_);
    *(undefined8 *)(param_1[0xc] + 8) = uVar1;
    auVar185._8_8_ = 0;
    auVar185._0_8_ = *(ulonglong *)(param_1[4] + 8);
    auVar10 = vmovhpd_avx(auVar185,*(undefined8 *)param_1[4]);
    auVar197._8_8_ = 0;
    auVar197._0_8_ = *(ulonglong *)param_1[5];
    auVar11 = vmovhpd_avx(auVar197,*(undefined8 *)(param_1[4] + 0x10));
    dVar142 = *(double *)(param_1[4] + 8);
    auVar2 = param_1[4];
    dVar95 = *(double *)param_1[5];
    auVar217 = vpermpd_avx2(auVar139,0x55);
    dVar157 = *(double *)param_1[4];
    dVar174 = *(double *)(param_1[4] + 8);
    auVar53 = vpermpd_avx2(auVar139,0xaa);
    *(double *)param_1[0xe] =
         dVar58 * auVar10._0_8_ * auVar53._0_8_ +
         dVar120 * *(double *)(param_1[4] + 0x10) * auVar217._0_8_ +
         dVar19 * *(double *)param_1[4] + auVar11._0_8_ * dVar176 * dVar8;
    *(double *)(param_1[0xe] + 8) =
         dVar122 * auVar10._8_8_ * auVar53._8_8_ +
         dVar121 * *(double *)param_1[5] * auVar217._8_8_ +
         dVar20 * dVar142 + auVar11._8_8_ * dVar176 * dVar158;
    *(double *)(param_1[0xe] + 0x10) =
         dVar213 * auVar11._0_8_ * auVar53._16_8_ +
         dVar94 * dVar157 * auVar217._16_8_ +
         dVar177 * auVar2._16_8_ + auVar10._0_8_ * dVar176 * dVar8;
    *(double *)param_1[0xf] =
         dVar214 * auVar11._8_8_ * auVar53._24_8_ +
         dVar119 * dVar174 * auVar217._24_8_ + dVar9 * dVar95 + auVar10._8_8_ * dVar176 * dVar158;
    dVar95 = auVar139._0_8_ + auVar139._0_8_;
    dVar8 = auVar139._8_8_ + auVar139._8_8_;
    dVar158 = auVar139._16_8_ + auVar139._16_8_;
    dVar120 = auVar139._24_8_ + auVar139._24_8_;
    auVar114._0_8_ = dVar176 * dVar95;
    auVar114._8_8_ = dVar176 * dVar8;
    auVar114._16_8_ = dVar176 * dVar158;
    auVar114._24_8_ = dVar176 * dVar120;
    auVar131._0_8_ = auVar217._0_8_ * dVar95;
    auVar131._8_8_ = auVar217._8_8_ * dVar8;
    auVar140._16_8_ = auVar217._16_8_ * dVar158;
    auVar140._0_16_ = auVar131;
    auVar140._24_8_ = auVar217._24_8_ * dVar120;
    auVar64._0_8_ = dVar95 * dVar19;
    auVar64._8_8_ = dVar8 * dVar20;
    auVar64._16_8_ = dVar158 * dVar177;
    auVar64._24_8_ = dVar120 * dVar9;
    auVar217 = vperm2f128_avx(auVar140,auVar114,0x21);
    auVar217 = vshufpd_avx(auVar217,ZEXT1632(auVar114._16_16_),4);
    auVar33._0_8_ = auVar64._0_8_ + auVar217._0_8_;
    auVar33._8_8_ = auVar64._8_8_ + auVar217._8_8_;
    auVar56._16_8_ = auVar64._16_8_ + auVar217._16_8_;
    auVar56._0_16_ = auVar33;
    auVar56._24_8_ = auVar64._24_8_ + auVar217._24_8_;
    auVar17 = vsubpd_avx(auVar217,auVar64);
    auVar10 = vshufpd_avx(auVar131,auVar131,1);
    auVar115._8_8_ = auVar114._0_8_;
    auVar115._0_8_ = auVar114._0_8_;
    auVar115._16_8_ = auVar114._0_8_;
    auVar115._24_8_ = auVar114._0_8_;
    auVar217 = vblendpd_avx(auVar115,ZEXT1632(auVar10),1);
    auVar53 = vpermpd_avx2(auVar140,0x55);
    auVar53 = vblendpd_avx(ZEXT1632(CONCAT88(dVar175 * dVar158,dVar175 * dVar158)),auVar53,0xc);
    auVar92._0_8_ = auVar217._0_8_ + auVar53._0_8_;
    auVar92._8_8_ = auVar217._8_8_ + auVar53._8_8_;
    auVar92._16_8_ = auVar217._16_8_ + auVar53._16_8_;
    auVar92._24_8_ = auVar217._24_8_ + auVar53._24_8_;
    auVar116._8_8_ = __real_3ff0000000000000;
    auVar116._0_8_ = __real_3ff0000000000000;
    auVar116._16_8_ = __real_3ff0000000000000;
    auVar116._24_8_ = __real_3ff0000000000000;
    auVar53 = vsubpd_avx(auVar116,auVar92);
    dVar158 = auVar53._0_8_;
    dVar95 = *(double *)param_1[9];
    dVar8 = *(double *)(param_1[9] + 0x10);
    auVar10 = vmovhpd_avx(ZEXT816(0) << 0x40,*(undefined8 *)(param_1[9] + 8));
    auVar217 = vpermpd_avx2(auVar17,0xaa);
    dVar120 = auVar10._0_8_;
    dVar121 = auVar10._8_8_;
    auVar163 = vpermpd_avx2(auVar56,0x55);
    auVar155._0_8_ = auVar163._0_8_ * 0.0 + dVar120 * auVar217._0_8_ + dVar95 * dVar158;
    auVar155._8_8_ = auVar163._8_8_ * 0.0 + dVar121 * auVar217._8_8_ + dVar158 * 0.0;
    auVar155._16_8_ = dVar8 * auVar163._16_8_ + auVar217._16_8_ * 0.0 + dVar158 * 0.0;
    auVar155._24_8_ = auVar163._24_8_ * 0.0 + auVar217._24_8_ * 0.0 + dVar158 * 0.0;
    auVar217 = vpermpd_avx2(auVar56,0xaa);
    auVar163 = vpermpd_avx2(auVar53,0x55);
    dVar158 = auVar17._0_8_;
    auVar141._0_8_ = dVar158 * 0.0 + dVar95 * auVar217._0_8_ + dVar120 * auVar163._0_8_;
    auVar141._8_8_ = dVar158 * 0.0 + auVar217._8_8_ * 0.0 + dVar121 * auVar163._8_8_;
    auVar141._16_8_ = dVar8 * dVar158 + auVar217._16_8_ * 0.0 + auVar163._16_8_ * 0.0;
    auVar141._24_8_ = dVar158 * 0.0 + auVar217._24_8_ * 0.0 + auVar163._24_8_ * 0.0;
    auVar217 = vpermpd_avx2(auVar17,0x55);
    auVar163 = vpermpd_avx2(auVar53,0xaa);
    auVar117._0_8_ = auVar163._0_8_ * 0.0 + auVar217._0_8_ * dVar95 + dVar120 * auVar33._0_8_;
    auVar117._8_8_ = auVar163._8_8_ * 0.0 + auVar217._8_8_ * 0.0 + dVar121 * auVar33._0_8_;
    auVar117._16_8_ = dVar8 * auVar163._16_8_ + auVar217._16_8_ * 0.0 + auVar33._0_8_ * 0.0;
    auVar117._24_8_ = auVar163._24_8_ * 0.0 + auVar217._24_8_ * 0.0 + auVar33._0_8_ * 0.0;
    auVar10 = vunpcklpd_avx(auVar53._0_16_,auVar56._16_16_);
    auVar217 = vblendpd_avx(ZEXT1632(auVar10),auVar217,0xc);
    auVar163 = vpermpd_avx2(auVar155,0x55);
    auVar10 = vblendpd_avx(auVar53._0_16_,auVar17._16_16_,1);
    dVar122 = auVar10._0_8_;
    dVar213 = auVar10._8_8_;
    dVar121 = auVar217._0_8_;
    dVar94 = auVar217._8_8_;
    dVar119 = auVar217._16_8_;
    dVar58 = auVar217._24_8_;
    auVar48 = vpermpd_avx2(auVar155,0xaa);
    auVar10 = vshufpd_avx(auVar33,auVar17._0_16_,1);
    auVar217 = vblendpd_avx(auVar53,ZEXT1632(auVar10),3);
    dVar95 = auVar217._0_8_;
    auVar148._0_8_ = dVar95 * auVar48._0_8_ + dVar121 * auVar155._0_8_ + dVar122 * auVar163._0_8_;
    dVar8 = auVar217._8_8_;
    auVar148._8_8_ = dVar8 * auVar48._8_8_ + dVar94 * auVar155._0_8_ + dVar213 * auVar163._8_8_;
    dVar158 = auVar217._16_8_;
    auVar156._16_8_ =
         dVar158 * auVar48._16_8_ + dVar119 * auVar155._0_8_ + auVar33._0_8_ * auVar163._16_8_;
    auVar156._0_16_ = auVar148;
    dVar120 = auVar217._24_8_;
    auVar156._24_8_ =
         dVar120 * auVar48._24_8_ + dVar58 * auVar155._0_8_ + auVar33._8_8_ * auVar163._24_8_;
    auVar217 = vpermpd_avx2(auVar141,0x55);
    auVar53 = vpermpd_avx2(auVar141,0xaa);
    auVar79._0_8_ = dVar95 * auVar53._0_8_ + dVar121 * auVar141._0_8_ + dVar122 * auVar217._0_8_;
    auVar79._8_8_ = dVar8 * auVar53._8_8_ + dVar94 * auVar141._0_8_ + dVar213 * auVar217._8_8_;
    auVar93._16_8_ =
         dVar158 * auVar53._16_8_ + dVar119 * auVar141._0_8_ + auVar33._0_8_ * auVar217._16_8_;
    auVar93._0_16_ = auVar79;
    auVar93._24_8_ =
         dVar120 * auVar53._24_8_ + dVar58 * auVar141._0_8_ + auVar33._8_8_ * auVar217._24_8_;
    auVar217 = vpermpd_avx2(auVar117,0x55);
    auVar53 = vpermpd_avx2(auVar117,0xaa);
    *(undefined1 (*) [16])(param_1[0x1d] + 8) = auVar148;
    uVar1 = vmovlpd_avx(auVar156._16_16_);
    *(undefined8 *)param_1[0x1e] = uVar1;
    auVar105._0_8_ = dVar95 * auVar53._0_8_ + dVar121 * auVar117._0_8_ + dVar122 * auVar217._0_8_;
    auVar105._8_8_ = dVar8 * auVar53._8_8_ + dVar94 * auVar117._0_8_ + dVar213 * auVar217._8_8_;
    auVar118._16_8_ =
         dVar158 * auVar53._16_8_ + dVar119 * auVar117._0_8_ + auVar33._0_8_ * auVar217._16_8_;
    auVar118._0_16_ = auVar105;
    auVar118._24_8_ =
         dVar120 * auVar53._24_8_ + dVar58 * auVar117._0_8_ + auVar33._8_8_ * auVar217._24_8_;
    *(undefined8 *)(param_1[0x1e] + 8) = 0;
    *(undefined1 (*) [16])(param_1[0x1e] + 0x10) = auVar79;
    uVar1 = vmovlpd_avx(auVar93._16_16_);
    *(undefined8 *)(param_1[0x1f] + 8) = uVar1;
    *(undefined8 *)(param_1[0x1f] + 0x10) = 0;
    *(undefined1 (*) [16])param_1[0x20] = auVar105;
    uVar1 = vmovlpd_avx(auVar118._16_16_);
    *(undefined8 *)(param_1[0x20] + 0x10) = uVar1;
    *(undefined8 *)param_1[0x21] = 0;
    *(undefined8 *)(param_1[0x21] + 8) = 0;
    *(undefined8 *)(param_1[0x21] + 0x10) = 0;
    *(undefined8 *)param_1[0x22] = 0;
  }
  else {
    if (__real_3f1a36e2eb1c432d < param_4) {
      dVar8 = *(double *)(param_1[0x29] + 8);
      dVar19 = *(double *)(param_1[0x29] + 0x10);
      dVar20 = *(double *)param_1[0x2a];
      dVar177 = *(double *)(param_1[0x2a] + 8);
      auVar66._0_8_ =
           dVar8 * *(double *)(param_1[0xc] + 0x10) + dVar20 * *(double *)(param_1[0xd] + 8);
      auVar66._8_8_ = dVar19 * *(double *)param_1[0xd] + dVar177 * *(double *)(param_1[0xd] + 0x10);
      auVar10 = vshufpd_avx(auVar66,auVar66,1);
      auVar67._8_8_ = 0;
      auVar67._0_8_ = auVar66._0_8_ + auVar10._0_8_;
      auVar10 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar67,2);
      auVar124._8_8_ = 0;
      auVar124._0_8_ = __real_3ff0000000000000;
      auVar178._8_8_ = 0;
      auVar178._0_8_ = __real_bff0000000000000;
      auVar10 = vblendvpd_avx(auVar178,auVar124,auVar10);
      dVar9 = auVar10._0_8_;
      auVar80._0_8_ = *(double *)(param_1[0xc] + 0x10) * dVar9 - dVar8;
      auVar80._8_8_ = *(double *)param_1[0xd] * dVar9 - dVar19;
      auVar80._16_8_ = *(double *)(param_1[0xd] + 8) * dVar9 - dVar20;
      auVar80._24_8_ = *(double *)(param_1[0xd] + 0x10) * dVar9 - dVar177;
      auVar37._0_8_ =
           dVar8 * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
      auVar37._8_8_ = dVar19 * _UNK_150b543c8;
      auVar37._16_8_ = dVar20 * _UNK_150b543d0;
      auVar37._24_8_ = dVar177 * _UNK_150b543d8;
      auVar17 = vpermpd_avx2(auVar80,0xff);
      auVar163 = vpermpd_avx2(auVar37,0xdb);
      auVar48 = vpermpd_avx2(auVar80,0x55);
      auVar49 = vpermpd_avx2(auVar37,0xce);
      auVar50 = vpermpd_avx2(auVar80,0xaa);
      auVar217 = vshufpd_avx(auVar37,auVar37,5);
      dVar8 = *(double *)(param_1[0x2a] + 0x10);
      dVar19 = *(double *)param_1[0x2b];
      dVar20 = *(double *)(param_1[0x2b] + 8);
      dVar177 = *(double *)(param_1[0x2b] + 0x10);
      auVar13._0_8_ = dVar20 * *(double *)(param_1[0xe] + 0x10) + dVar8 * *(double *)param_1[0xe];
      auVar13._8_8_ = dVar177 * *(double *)param_1[0xf] + dVar19 * *(double *)(param_1[0xe] + 8);
      auVar10 = vshufpd_avx(auVar13,auVar13,1);
      auVar14._8_8_ = 0;
      auVar14._0_8_ = auVar10._0_8_ + auVar13._0_8_;
      auVar10 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar14,2);
      auVar207._8_8_ = 0;
      auVar207._0_8_ = __real_bff0000000000000;
      auVar215._8_8_ = 0;
      auVar215._0_8_ = __real_3ff0000000000000;
      auVar10 = vblendvpd_avx(auVar207,auVar215,auVar10);
      dVar9 = auVar10._0_8_;
      auVar18._0_8_ = *(double *)param_1[0xe] * dVar9 - dVar8;
      auVar18._8_8_ = *(double *)(param_1[0xe] + 8) * dVar9 - dVar19;
      auVar18._16_8_ = *(double *)(param_1[0xe] + 0x10) * dVar9 - dVar20;
      auVar18._24_8_ = *(double *)param_1[0xf] * dVar9 - dVar177;
      auVar186._0_8_ =
           dVar8 * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
      auVar186._8_8_ = dVar19 * _UNK_150b543c8;
      auVar186._16_8_ = dVar20 * _UNK_150b543d0;
      auVar186._24_8_ = dVar177 * _UNK_150b543d8;
      auVar51 = vpermpd_avx2(auVar18,0xff);
      auVar52 = vpermpd_avx2(auVar186,0xdb);
      auVar54 = vpermpd_avx2(auVar18,0x55);
      auVar55 = vpermpd_avx2(auVar186,0xce);
      auVar88 = vpermpd_avx2(auVar18,0xaa);
      auVar53 = vshufpd_avx(auVar186,auVar186,5);
      dVar8 = ___ymm_00000000000000003ff00000000000003ff0000000000000bff0000000000000 *
              auVar53._0_8_ * auVar88._0_8_ +
              auVar55._0_8_ * auVar54._0_8_ *
              ___ymm_0000000000000000bff00000000000003ff00000000000003ff0000000000000 +
              auVar186._0_8_ * auVar51._0_8_ +
              auVar52._0_8_ * auVar18._0_8_ * ___xmm_bff00000000000003ff0000000000000;
      dVar19 = _UNK_150b54588 * auVar53._8_8_ * auVar88._8_8_ +
               auVar55._8_8_ * auVar54._8_8_ * _UNK_150b54568 +
               auVar186._8_8_ * auVar51._8_8_ + auVar52._8_8_ * auVar18._0_8_ * _UNK_15076c6f8;
      dVar20 = _UNK_150b54590 * auVar53._16_8_ * auVar88._16_8_ +
               auVar55._16_8_ * auVar54._16_8_ * _UNK_150b54570 +
               auVar186._16_8_ * auVar51._16_8_ +
               auVar52._16_8_ * auVar18._0_8_ * ___xmm_bff00000000000003ff0000000000000;
      auVar15._0_8_ =
           ((___ymm_00000000000000003ff00000000000003ff0000000000000bff0000000000000 *
             auVar217._0_8_ * auVar50._0_8_ +
            auVar49._0_8_ * auVar48._0_8_ *
            ___ymm_0000000000000000bff00000000000003ff00000000000003ff0000000000000 +
            auVar37._0_8_ * auVar17._0_8_ +
            auVar163._0_8_ * auVar80._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
            __real_4000000000000000 - (dVar8 + dVar8)) * dVar174;
      auVar15._8_8_ =
           ((_UNK_150b54588 * auVar217._8_8_ * auVar50._8_8_ +
            auVar49._8_8_ * auVar48._8_8_ * _UNK_150b54568 +
            auVar37._8_8_ * auVar17._8_8_ + auVar163._8_8_ * auVar80._0_8_ * _UNK_15076c6f8) *
            __real_4000000000000000 - (dVar19 + dVar19)) * dVar176;
      auVar10 = vshufpd_avx(auVar15,auVar15,1);
      dVar8 = param_2 * param_8 +
              ((_UNK_150b54590 * auVar217._16_8_ * auVar50._16_8_ +
               auVar49._16_8_ * auVar48._16_8_ * _UNK_150b54570 +
               auVar37._16_8_ * auVar17._16_8_ +
               auVar163._16_8_ * auVar80._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
               __real_4000000000000000 - (dVar20 + dVar20)) * dVar175 +
              auVar15._0_8_ + auVar10._0_8_;
      auVar217._24_8_ = 0;
      auVar217._0_24_ = *param_6;
    }
    dVar174 = __real_3ff0000000000000;
    if ((param_5 & 1) != 0) {
      dVar174 = __real_3ff0000000000000 / dVar21;
    }
    dVar176 = in_ZMM2._0_8_ * dVar174 * param_2 * param_2;
    param_2 = dVar174 * param_4 * param_2;
    dVar21 = (__real_3ff0000000000000 / (dVar21 * (param_2 + dVar176) + __real_3ff0000000000000)) *
             *(double *)param_1[0x33] * ((dVar176 * param_7 - param_2 * dVar8) - *param_9);
    if (0.0 < *(double *)param_1[10]) {
      dVar158 = dVar158 * dVar21;
      auVar82._0_8_ = auVar217._0_8_ * dVar158;
      auVar82._8_8_ = auVar217._8_8_ * dVar158;
      auVar82._16_8_ = auVar217._16_8_ * dVar158;
      auVar82._24_8_ = auVar217._24_8_ * dVar158;
      auVar96._8_8_ = 0;
      auVar96._0_8_ = *(ulonglong *)(param_1[0x12] + 8);
      auVar10 = vmovhpd_avx(auVar96,*(undefined8 *)param_1[0x12]);
      auVar126._8_8_ = 0;
      auVar126._0_8_ = *(ulonglong *)(param_1[0x11] + 0x10);
      auVar11 = vmovhpd_avx(auVar126,*(undefined8 *)(param_1[0x11] + 8));
      auVar53 = vpermpd_avx2(auVar82,0x55);
      auVar17 = vpermpd_avx2(auVar82,0xaa);
      dVar158 = (___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
                 auVar17._0_8_ * auVar11._0_8_ +
                ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
                auVar53._0_8_ * *(double *)param_1[0x12] +
                *(double *)(param_1[0x11] + 8) * 0.0 +
                auVar82._0_8_ * auVar10._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
                __real_3fe0000000000000 + *(double *)(param_1[0x11] + 8);
      dVar174 = (_UNK_150b54428 * auVar17._8_8_ * auVar11._8_8_ +
                _UNK_150b54408 * auVar53._8_8_ * *(double *)(param_1[0x12] + 8) +
                *(double *)(param_1[0x11] + 0x10) * 0.0 +
                auVar82._0_8_ * auVar10._8_8_ * _UNK_15076c6f8) * __real_3fe0000000000000 +
                *(double *)(param_1[0x11] + 0x10);
      dVar176 = (_UNK_150b54430 * auVar17._16_8_ * auVar10._0_8_ +
                _UNK_150b54410 * auVar53._16_8_ * *(double *)(param_1[0x11] + 8) +
                *(double *)param_1[0x12] * 0.0 +
                auVar82._0_8_ * auVar11._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
                __real_3fe0000000000000 + *(double *)param_1[0x12];
      dVar177 = (_UNK_150b54438 * auVar17._24_8_ * auVar10._8_8_ +
                _UNK_150b54418 * auVar53._24_8_ * *(double *)(param_1[0x11] + 0x10) +
                *(double *)(param_1[0x12] + 8) * 0.0 +
                auVar82._0_8_ * auVar11._8_8_ * _UNK_15076c6f8) * __real_3fe0000000000000 +
                *(double *)(param_1[0x12] + 8);
      auVar22._0_8_ = dVar158 * dVar158 + dVar176 * dVar176;
      auVar22._8_8_ = dVar174 * dVar174 + dVar177 * dVar177;
      auVar10 = vshufpd_avx(auVar22,auVar22,1);
      dVar8 = auVar22._0_8_ + auVar10._0_8_;
      auVar70._8_8_ = 0;
      auVar70._0_8_ = __real_3e45798ee2308c3a;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = dVar8;
      auVar10 = vcmpsd_avx(auVar70,auVar23,6);
      uVar65 = ~auVar10._0_8_ & __real_ffffffffffffffff;
      dVar8 = __real_3ff0000000000000 / SQRT(dVar8);
      dVar19 = (double)((___ymm_3ff0000000000000000000000000000000000000000000000000000000000000 ^
                        (ulonglong)(dVar158 * dVar8)) & uVar65);
      dVar175 = (double)((_UNK_150b54548 ^ (ulonglong)(dVar174 * dVar8)) & uVar65);
      dVar20 = (double)((_UNK_150b54550 ^ (ulonglong)(dVar176 * dVar8)) & uVar65);
      dVar177 = (double)((_UNK_150b54558 ^ (ulonglong)(dVar177 * dVar8)) & uVar65);
      auVar188._0_8_ =
           (double)((ulonglong)dVar19 ^
                   ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
      auVar188._8_8_ = (double)((ulonglong)dVar175 ^ _UNK_150b54548);
      auVar188._16_8_ = (double)((ulonglong)dVar20 ^ _UNK_150b54550);
      auVar188._24_8_ = (double)((ulonglong)dVar177 ^ _UNK_150b54558);
      *(undefined1 (*) [32])(param_1[0x11] + 8) = auVar188;
      auVar71._8_8_ = 0;
      auVar71._0_8_ = *(ulonglong *)(param_1[1] + 8);
      uVar1 = *(undefined8 *)(param_1[2] + 8);
      auVar194._8_8_ = uVar1;
      auVar194._0_8_ = uVar1;
      auVar198._16_8_ = uVar1;
      auVar198._0_16_ = auVar194;
      auVar198._24_8_ = uVar1;
      auVar10 = vunpcklpd_avx(auVar71,auVar194);
      auVar17 = vpermpd_avx2(auVar188,0xc9);
      auVar2 = *(undefined1 (*) [24])(param_1[1] + 8);
      auVar211._24_8_ = 0;
      auVar211._0_24_ = auVar2;
      auVar53 = vblendpd_avx(auVar211,auVar198,8);
      dVar8 = auVar188._0_8_ * SUB168(*(undefined1 (*) [16])(param_1[1] + 0x10),0) -
              auVar53._0_8_ * auVar17._0_8_;
      dVar158 = auVar188._8_8_ * SUB168(*(undefined1 (*) [16])(param_1[1] + 0x10),8) -
                auVar53._8_8_ * auVar17._8_8_;
      dVar174 = auVar188._16_8_ * auVar10._0_8_ - auVar53._16_8_ * auVar17._16_8_;
      dVar176 = auVar188._24_8_ * auVar10._8_8_ - auVar53._24_8_ * auVar17._24_8_;
      auVar39._0_8_ = dVar8 + dVar8;
      auVar39._8_8_ = dVar158 + dVar158;
      auVar39._16_8_ = dVar174 + dVar174;
      auVar39._24_8_ = dVar176 + dVar176;
      auVar53 = vpermpd_avx2(auVar188,0xff);
      auVar17 = vpermpd_avx2(auVar39,0xc9);
      dVar9 = auVar53._0_8_;
      dVar204 = auVar53._8_8_;
      dVar205 = auVar53._16_8_;
      dVar206 = auVar53._24_8_;
      auVar53 = vpermpd_avx2(auVar39,0xd2);
      auVar40._0_8_ = dVar19 * auVar39._0_8_;
      auVar40._8_8_ = dVar175 * auVar39._8_8_;
      auVar40._16_8_ = dVar20 * auVar39._16_8_;
      auVar40._24_8_ = dVar177 * auVar39._24_8_;
      auVar163 = vpermpd_avx2(auVar40,0xc9);
      auVar41._0_8_ = dVar19 * auVar53._0_8_ - auVar163._0_8_;
      auVar41._8_8_ = dVar175 * auVar53._8_8_ - auVar163._8_8_;
      auVar41._16_8_ = dVar20 * auVar53._16_8_ - auVar163._16_8_;
      auVar41._24_8_ = dVar177 * auVar53._24_8_ - auVar163._24_8_;
      auVar53 = vpermpd_avx2(auVar41,0xc9);
      auVar24._0_8_ =
           *(double *)(param_1[0xf] + 8) + dVar9 * auVar17._0_8_ + auVar2._0_8_ + auVar53._0_8_;
      auVar24._8_8_ =
           *(double *)(param_1[0xf] + 0x10) + dVar204 * auVar17._8_8_ + auVar2._8_8_ + auVar53._8_8_
      ;
      auVar42._16_8_ =
           *(double *)param_1[0x10] + dVar205 * auVar17._16_8_ + auVar2._16_8_ + auVar53._16_8_;
      auVar42._0_16_ = auVar24;
      auVar42._24_8_ = dVar206 * auVar17._24_8_ + 0.0 + auVar53._24_8_ + 0.0;
      *(undefined1 (*) [16])(param_1[10] + 0x10) = auVar24;
      uVar1 = vmovlpd_avx(auVar42._16_16_);
      *(undefined8 *)(param_1[0xb] + 8) = uVar1;
      auVar72._8_8_ = 0;
      auVar72._0_8_ = *(ulonglong *)(*param_1 + 8);
      auVar10 = vmovhpd_avx(auVar72,*(undefined8 *)*param_1);
      auVar209._8_8_ = 0;
      auVar209._0_8_ = *(ulonglong *)param_1[1];
      auVar11 = vmovhpd_avx(auVar209,*(undefined8 *)(*param_1 + 0x10));
      dVar158 = *(double *)(*param_1 + 8);
      auVar2 = *param_1;
      dVar8 = *(double *)param_1[1];
      auVar53 = vpermpd_avx2(auVar188,0x55);
      dVar174 = *(double *)param_1[1];
      dVar176 = *(double *)*param_1;
      dVar175 = *(double *)(*param_1 + 8);
      auVar17 = vpermpd_avx2(auVar188,0xaa);
      *(double *)(param_1[0xc] + 0x10) =
           dVar213 * auVar10._0_8_ * auVar17._0_8_ +
           dVar94 * *(double *)(*param_1 + 0x10) * auVar53._0_8_ +
           dVar9 * *(double *)*param_1 + auVar11._0_8_ * dVar19 * dVar120;
      *(double *)param_1[0xd] =
           dVar214 * auVar10._8_8_ * auVar17._8_8_ +
           dVar119 * dVar174 * auVar53._8_8_ + dVar204 * dVar158 + auVar11._8_8_ * dVar19 * dVar121;
      *(double *)(param_1[0xd] + 8) =
           dVar142 * auVar11._0_8_ * auVar17._16_8_ +
           dVar58 * dVar176 * auVar53._16_8_ +
           dVar205 * auVar2._16_8_ + auVar10._0_8_ * dVar19 * dVar120;
      *(double *)(param_1[0xd] + 0x10) =
           dVar157 * auVar11._8_8_ * auVar17._24_8_ +
           dVar122 * dVar175 * auVar53._24_8_ + dVar206 * dVar8 + auVar10._8_8_ * dVar19 * dVar121;
      dVar8 = auVar188._0_8_ + auVar188._0_8_;
      dVar158 = auVar188._8_8_ + auVar188._8_8_;
      dVar120 = auVar188._16_8_ + auVar188._16_8_;
      dVar121 = auVar188._24_8_ + auVar188._24_8_;
      auVar43._0_8_ = dVar8 * dVar19;
      auVar43._8_8_ = dVar158 * dVar19;
      auVar43._16_8_ = dVar120 * dVar19;
      auVar43._24_8_ = dVar121 * dVar19;
      auVar143._0_8_ = auVar53._0_8_ * dVar8;
      auVar143._8_8_ = auVar53._8_8_ * dVar158;
      auVar149._16_8_ = auVar53._16_8_ * dVar120;
      auVar149._0_16_ = auVar143;
      auVar149._24_8_ = auVar53._24_8_ * dVar121;
      auVar134._0_8_ = dVar9 * dVar8;
      auVar134._8_8_ = dVar204 * dVar158;
      auVar134._16_8_ = dVar205 * dVar120;
      auVar134._24_8_ = dVar206 * dVar121;
      auVar53 = vperm2f128_avx(auVar149,auVar43,0x21);
      auVar53 = vshufpd_avx(auVar53,ZEXT1632(auVar43._16_16_),4);
      auVar97._0_8_ = auVar53._0_8_ + auVar134._0_8_;
      auVar97._8_8_ = auVar53._8_8_ + auVar134._8_8_;
      auVar107._16_8_ = auVar53._16_8_ + auVar134._16_8_;
      auVar107._0_16_ = auVar97;
      auVar107._24_8_ = auVar53._24_8_ + auVar134._24_8_;
      auVar163 = vsubpd_avx(auVar53,auVar134);
      auVar10 = vshufpd_avx(auVar143,auVar143,1);
      auVar44._8_8_ = auVar43._0_8_;
      auVar44._0_8_ = auVar43._0_8_;
      auVar44._16_8_ = auVar43._0_8_;
      auVar44._24_8_ = auVar43._0_8_;
      auVar53 = vblendpd_avx(auVar44,ZEXT1632(auVar10),1);
      auVar17 = vpermpd_avx2(auVar149,0x55);
      auVar17 = vblendpd_avx(ZEXT1632(CONCAT88(dVar20 * dVar120,dVar20 * dVar120)),auVar17,0xc);
      auVar45._0_8_ = auVar53._0_8_ + auVar17._0_8_;
      auVar45._8_8_ = auVar53._8_8_ + auVar17._8_8_;
      auVar45._16_8_ = auVar53._16_8_ + auVar17._16_8_;
      auVar45._24_8_ = auVar53._24_8_ + auVar17._24_8_;
      auVar83._8_8_ = __real_3ff0000000000000;
      auVar83._0_8_ = __real_3ff0000000000000;
      auVar83._16_8_ = __real_3ff0000000000000;
      auVar83._24_8_ = __real_3ff0000000000000;
      auVar17 = vsubpd_avx(auVar83,auVar45);
      dVar120 = auVar17._0_8_;
      dVar8 = *(double *)param_1[8];
      dVar158 = *(double *)(param_1[8] + 0x10);
      auVar10 = vmovhpd_avx(ZEXT816(0) << 0x40,*(undefined8 *)(param_1[8] + 8));
      auVar53 = vpermpd_avx2(auVar163,0xaa);
      dVar121 = auVar10._0_8_;
      dVar94 = auVar10._8_8_;
      auVar48 = vpermpd_avx2(auVar107,0x55);
      auVar199._0_8_ = auVar48._0_8_ * 0.0 + dVar121 * auVar53._0_8_ + dVar8 * dVar120;
      auVar199._8_8_ = auVar48._8_8_ * 0.0 + dVar94 * auVar53._8_8_ + dVar120 * 0.0;
      auVar199._16_8_ = dVar158 * auVar48._16_8_ + auVar53._16_8_ * 0.0 + dVar120 * 0.0;
      auVar199._24_8_ = auVar48._24_8_ * 0.0 + auVar53._24_8_ * 0.0 + dVar120 * 0.0;
      auVar53 = vpermpd_avx2(auVar107,0xaa);
      auVar48 = vpermpd_avx2(auVar17,0x55);
      dVar120 = auVar163._0_8_;
      auVar189._0_8_ = dVar120 * 0.0 + dVar8 * auVar53._0_8_ + dVar121 * auVar48._0_8_;
      auVar189._8_8_ = dVar120 * 0.0 + auVar53._8_8_ * 0.0 + dVar94 * auVar48._8_8_;
      auVar189._16_8_ = dVar158 * dVar120 + auVar53._16_8_ * 0.0 + auVar48._16_8_ * 0.0;
      auVar189._24_8_ = dVar120 * 0.0 + auVar53._24_8_ * 0.0 + auVar48._24_8_ * 0.0;
      auVar53 = vpermpd_avx2(auVar163,0x55);
      auVar48 = vpermpd_avx2(auVar17,0xaa);
      auVar164._0_8_ = auVar48._0_8_ * 0.0 + auVar53._0_8_ * dVar8 + dVar121 * auVar97._0_8_;
      auVar164._8_8_ = auVar48._8_8_ * 0.0 + auVar53._8_8_ * 0.0 + dVar94 * auVar97._0_8_;
      auVar164._16_8_ = dVar158 * auVar48._16_8_ + auVar53._16_8_ * 0.0 + auVar97._0_8_ * 0.0;
      auVar164._24_8_ = auVar48._24_8_ * 0.0 + auVar53._24_8_ * 0.0 + auVar97._0_8_ * 0.0;
      auVar10 = vunpcklpd_avx(auVar17._0_16_,auVar107._16_16_);
      auVar53 = vblendpd_avx(ZEXT1632(auVar10),auVar53,0xc);
      auVar48 = vpermpd_avx2(auVar199,0x55);
      auVar10 = vblendpd_avx(auVar17._0_16_,auVar163._16_16_,1);
      dVar213 = auVar10._0_8_;
      dVar214 = auVar10._8_8_;
      dVar8 = auVar53._0_8_;
      dVar158 = auVar53._8_8_;
      dVar120 = auVar53._16_8_;
      dVar121 = auVar53._24_8_;
      auVar49 = vpermpd_avx2(auVar199,0xaa);
      auVar10 = vshufpd_avx(auVar97,auVar163._0_16_,1);
      auVar53 = vblendpd_avx(auVar17,ZEXT1632(auVar10),3);
      dVar94 = auVar53._0_8_;
      auVar25._0_8_ = dVar94 * auVar49._0_8_ + dVar8 * auVar199._0_8_ + dVar213 * auVar48._0_8_;
      dVar119 = auVar53._8_8_;
      auVar25._8_8_ = dVar119 * auVar49._8_8_ + dVar158 * auVar199._0_8_ + dVar214 * auVar48._8_8_;
      dVar58 = auVar53._16_8_;
      auVar46._16_8_ =
           dVar58 * auVar49._16_8_ + dVar120 * auVar199._0_8_ + auVar97._0_8_ * auVar48._16_8_;
      auVar46._0_16_ = auVar25;
      dVar122 = auVar53._24_8_;
      auVar46._24_8_ =
           dVar122 * auVar49._24_8_ + dVar121 * auVar199._0_8_ + auVar97._8_8_ * auVar48._24_8_;
      auVar53 = vpermpd_avx2(auVar189,0x55);
      auVar17 = vpermpd_avx2(auVar189,0xaa);
      auVar144._0_8_ = dVar94 * auVar17._0_8_ + dVar8 * auVar189._0_8_ + dVar213 * auVar53._0_8_;
      auVar144._8_8_ = dVar119 * auVar17._8_8_ + dVar158 * auVar189._0_8_ + dVar214 * auVar53._8_8_;
      auVar150._16_8_ =
           dVar58 * auVar17._16_8_ + dVar120 * auVar189._0_8_ + auVar97._0_8_ * auVar53._16_8_;
      auVar150._0_16_ = auVar144;
      auVar150._24_8_ =
           dVar122 * auVar17._24_8_ + dVar121 * auVar189._0_8_ + auVar97._8_8_ * auVar53._24_8_;
      auVar53 = vpermpd_avx2(auVar164,0x55);
      auVar17 = vpermpd_avx2(auVar164,0xaa);
      *(undefined1 (*) [16])param_1[0x18] = auVar25;
      uVar1 = vmovlpd_avx(auVar46._16_16_);
      *(undefined8 *)(param_1[0x18] + 0x10) = uVar1;
      auVar73._0_8_ = dVar94 * auVar17._0_8_ + dVar8 * auVar164._0_8_ + dVar213 * auVar53._0_8_;
      auVar73._8_8_ = dVar119 * auVar17._8_8_ + dVar158 * auVar164._0_8_ + dVar214 * auVar53._8_8_;
      auVar84._16_8_ =
           dVar58 * auVar17._16_8_ + dVar120 * auVar164._0_8_ + auVar97._0_8_ * auVar53._16_8_;
      auVar84._0_16_ = auVar73;
      auVar84._24_8_ =
           dVar122 * auVar17._24_8_ + dVar121 * auVar164._0_8_ + auVar97._8_8_ * auVar53._24_8_;
      *(undefined8 *)param_1[0x19] = 0;
      *(undefined1 (*) [16])(param_1[0x19] + 8) = auVar144;
      uVar1 = vmovlpd_avx(auVar150._16_16_);
      *(undefined8 *)param_1[0x1a] = uVar1;
      *(undefined8 *)(param_1[0x1a] + 8) = 0;
      *(undefined1 (*) [16])(param_1[0x1a] + 0x10) = auVar73;
      uVar1 = vmovlpd_avx(auVar84._16_16_);
      *(undefined8 *)(param_1[0x1b] + 8) = uVar1;
      *(undefined1 (*) [32])(param_1[0x1b] + 0x10) = ZEXT1632(ZEXT816(0));
      *(undefined8 *)param_1[0x1d] = 0x3ff0000000000000;
    }
    dVar214 = _UNK_150b54438;
    dVar213 = _UNK_150b54430;
    dVar122 = _UNK_150b54428;
    dVar58 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
    dVar119 = _UNK_150b54418;
    dVar94 = _UNK_150b54410;
    dVar121 = _UNK_150b54408;
    dVar120 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
    dVar158 = _UNK_15076c6f8;
    dVar8 = ___xmm_bff00000000000003ff0000000000000;
    if (*(double *)(param_1[10] + 8) <= 0.0) goto LAB_1409eb5a3;
    dVar95 = dVar21 * (double)((ulonglong)dVar95 ^ __xmm_80000000000000008000000000000000);
    auVar85._0_8_ = auVar217._0_8_ * dVar95;
    auVar85._8_8_ = auVar217._8_8_ * dVar95;
    auVar85._16_8_ = auVar217._16_8_ * dVar95;
    auVar85._24_8_ = auVar217._24_8_ * dVar95;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = *(ulonglong *)(param_1[0x13] + 0x10);
    auVar10 = vmovhpd_avx(auVar26,*(undefined8 *)(param_1[0x13] + 8));
    auVar59._8_8_ = 0;
    auVar59._0_8_ = *(ulonglong *)param_1[0x13];
    auVar11 = vmovhpd_avx(auVar59,*(undefined8 *)(param_1[0x12] + 0x10));
    auVar217 = vpermpd_avx2(auVar85,0x55);
    auVar53 = vpermpd_avx2(auVar85,0xaa);
    dVar142 = (___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
               auVar53._0_8_ * auVar11._0_8_ +
              ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
              auVar217._0_8_ * *(double *)(param_1[0x13] + 8) +
              *(double *)(param_1[0x12] + 0x10) * 0.0 +
              auVar85._0_8_ * auVar10._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
              __real_3fe0000000000000 + *(double *)(param_1[0x12] + 0x10);
    dVar157 = (_UNK_150b54428 * auVar53._8_8_ * auVar11._8_8_ +
              _UNK_150b54408 * auVar217._8_8_ * *(double *)(param_1[0x13] + 0x10) +
              *(double *)param_1[0x13] * 0.0 + auVar85._0_8_ * auVar10._8_8_ * _UNK_15076c6f8) *
              __real_3fe0000000000000 + *(double *)param_1[0x13];
    dVar174 = (_UNK_150b54430 * auVar53._16_8_ * auVar10._0_8_ +
              _UNK_150b54410 * auVar217._16_8_ * *(double *)(param_1[0x12] + 0x10) +
              *(double *)(param_1[0x13] + 8) * 0.0 +
              auVar85._0_8_ * auVar11._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
              __real_3fe0000000000000 + *(double *)(param_1[0x13] + 8);
    dVar19 = (_UNK_150b54438 * auVar53._24_8_ * auVar10._8_8_ +
             _UNK_150b54418 * auVar217._24_8_ * *(double *)param_1[0x13] +
             *(double *)(param_1[0x13] + 0x10) * 0.0 +
             auVar85._0_8_ * auVar11._8_8_ * _UNK_15076c6f8) * __real_3fe0000000000000 +
             *(double *)(param_1[0x13] + 0x10);
    auVar98._0_8_ = dVar142 * dVar142 + dVar174 * dVar174;
    auVar98._8_8_ = dVar157 * dVar157 + dVar19 * dVar19;
    auVar10 = vshufpd_avx(auVar98,auVar98,1);
    dVar95 = auVar98._0_8_ + auVar10._0_8_;
    auVar127._8_8_ = 0;
    auVar127._0_8_ = __real_3e45798ee2308c3a;
    auVar99._8_8_ = 0;
    auVar99._0_8_ = dVar95;
    auVar10 = vcmpsd_avx(auVar127,auVar99,6);
    uVar65 = ~auVar10._0_8_ & __real_ffffffffffffffff;
    dVar95 = __real_3ff0000000000000 / SQRT(dVar95);
    dVar176 = (double)(((ulonglong)(dVar142 * dVar95) ^
                       ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) &
                      uVar65);
    dVar142 = (double)(((ulonglong)(dVar157 * dVar95) ^ _UNK_150b54548) & uVar65);
    dVar175 = (double)(((ulonglong)(dVar174 * dVar95) ^ _UNK_150b54550) & uVar65);
    dVar95 = (double)(((ulonglong)(dVar19 * dVar95) ^ _UNK_150b54558) & uVar65);
    auVar135._0_8_ =
         (double)((ulonglong)dVar176 ^
                 ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
    auVar135._8_8_ = (double)((ulonglong)dVar142 ^ _UNK_150b54548);
    auVar135._16_8_ = (double)((ulonglong)dVar175 ^ _UNK_150b54550);
    auVar135._24_8_ = (double)((ulonglong)dVar95 ^ _UNK_150b54558);
    *(undefined1 (*) [32])(param_1[0x12] + 0x10) = auVar135;
    auVar159._8_8_ = 0;
    auVar159._0_8_ = *(ulonglong *)(param_1[5] + 8);
    uVar1 = *(undefined8 *)(param_1[6] + 8);
    auVar182._8_8_ = uVar1;
    auVar182._0_8_ = uVar1;
    auVar190._16_8_ = uVar1;
    auVar190._0_16_ = auVar182;
    auVar190._24_8_ = uVar1;
    auVar10 = vunpcklpd_avx(auVar159,auVar182);
    auVar53 = vpermpd_avx2(auVar135,0xc9);
    auVar2 = *(undefined1 (*) [24])(param_1[5] + 8);
    auVar200._24_8_ = 0;
    auVar200._0_24_ = auVar2;
    auVar217 = vblendpd_avx(auVar200,auVar190,8);
    dVar157 = auVar135._0_8_ * SUB168(*(undefined1 (*) [16])(param_1[5] + 0x10),0) -
              auVar217._0_8_ * auVar53._0_8_;
    dVar174 = auVar135._8_8_ * SUB168(*(undefined1 (*) [16])(param_1[5] + 0x10),8) -
              auVar217._8_8_ * auVar53._8_8_;
    dVar19 = auVar135._16_8_ * auVar10._0_8_ - auVar217._16_8_ * auVar53._16_8_;
    dVar20 = auVar135._24_8_ * auVar10._8_8_ - auVar217._24_8_ * auVar53._24_8_;
    auVar165._0_8_ = dVar157 + dVar157;
    auVar165._8_8_ = dVar174 + dVar174;
    auVar165._16_8_ = dVar19 + dVar19;
    auVar165._24_8_ = dVar20 + dVar20;
    auVar217 = vpermpd_avx2(auVar135,0xff);
    auVar53 = vpermpd_avx2(auVar165,0xc9);
    dVar19 = auVar217._0_8_;
    dVar20 = auVar217._8_8_;
    dVar177 = auVar217._16_8_;
    dVar9 = auVar217._24_8_;
    auVar217 = vpermpd_avx2(auVar165,0xd2);
    auVar166._0_8_ = auVar165._0_8_ * dVar176;
    auVar166._8_8_ = auVar165._8_8_ * dVar142;
    auVar166._16_8_ = auVar165._16_8_ * dVar175;
    auVar166._24_8_ = auVar165._24_8_ * dVar95;
    auVar17 = vpermpd_avx2(auVar166,0xc9);
    auVar167._0_8_ = dVar176 * auVar217._0_8_ - auVar17._0_8_;
    auVar167._8_8_ = dVar142 * auVar217._8_8_ - auVar17._8_8_;
    auVar167._16_8_ = dVar175 * auVar217._16_8_ - auVar17._16_8_;
    auVar167._24_8_ = dVar95 * auVar217._24_8_ - auVar17._24_8_;
    auVar217 = vpermpd_avx2(auVar167,0xc9);
    auVar160._0_8_ =
         *(double *)(param_1[0x10] + 8) + dVar19 * auVar53._0_8_ + auVar2._0_8_ + auVar217._0_8_;
    auVar160._8_8_ =
         *(double *)(param_1[0x10] + 0x10) + dVar20 * auVar53._8_8_ + auVar2._8_8_ + auVar217._8_8_;
    auVar168._16_8_ =
         *(double *)param_1[0x11] + dVar177 * auVar53._16_8_ + auVar2._16_8_ + auVar217._16_8_;
    auVar168._0_16_ = auVar160;
    auVar168._24_8_ = dVar9 * auVar53._24_8_ + 0.0 + auVar217._24_8_ + 0.0;
    *(undefined1 (*) [16])(param_1[0xb] + 0x10) = auVar160;
    uVar1 = vmovlpd_avx(auVar168._16_16_);
    *(undefined8 *)(param_1[0xc] + 8) = uVar1;
    auVar183._8_8_ = 0;
    auVar183._0_8_ = *(ulonglong *)(param_1[4] + 8);
    auVar10 = vmovhpd_avx(auVar183,*(undefined8 *)param_1[4]);
    auVar195._8_8_ = 0;
    auVar195._0_8_ = *(ulonglong *)param_1[5];
    auVar11 = vmovhpd_avx(auVar195,*(undefined8 *)(param_1[4] + 0x10));
    dVar142 = *(double *)(param_1[4] + 8);
    auVar2 = param_1[4];
    dVar95 = *(double *)param_1[5];
    auVar217 = vpermpd_avx2(auVar135,0x55);
    dVar157 = *(double *)param_1[4];
    dVar174 = *(double *)(param_1[4] + 8);
    auVar53 = vpermpd_avx2(auVar135,0xaa);
    *(double *)param_1[0xe] =
         dVar58 * auVar10._0_8_ * auVar53._0_8_ +
         dVar120 * *(double *)(param_1[4] + 0x10) * auVar217._0_8_ +
         dVar19 * *(double *)param_1[4] + auVar11._0_8_ * dVar176 * dVar8;
    *(double *)(param_1[0xe] + 8) =
         dVar122 * auVar10._8_8_ * auVar53._8_8_ +
         dVar121 * *(double *)param_1[5] * auVar217._8_8_ +
         dVar20 * dVar142 + auVar11._8_8_ * dVar176 * dVar158;
    *(double *)(param_1[0xe] + 0x10) =
         dVar213 * auVar11._0_8_ * auVar53._16_8_ +
         dVar94 * dVar157 * auVar217._16_8_ +
         dVar177 * auVar2._16_8_ + auVar10._0_8_ * dVar176 * dVar8;
    *(double *)param_1[0xf] =
         dVar214 * auVar11._8_8_ * auVar53._24_8_ +
         dVar119 * dVar174 * auVar217._24_8_ + dVar9 * dVar95 + auVar10._8_8_ * dVar176 * dVar158;
    dVar95 = auVar135._0_8_ + auVar135._0_8_;
    dVar8 = auVar135._8_8_ + auVar135._8_8_;
    dVar158 = auVar135._16_8_ + auVar135._16_8_;
    dVar120 = auVar135._24_8_ + auVar135._24_8_;
    auVar108._0_8_ = dVar176 * dVar95;
    auVar108._8_8_ = dVar176 * dVar8;
    auVar108._16_8_ = dVar176 * dVar158;
    auVar108._24_8_ = dVar176 * dVar120;
    auVar128._0_8_ = auVar217._0_8_ * dVar95;
    auVar128._8_8_ = auVar217._8_8_ * dVar8;
    auVar136._16_8_ = auVar217._16_8_ * dVar158;
    auVar136._0_16_ = auVar128;
    auVar136._24_8_ = auVar217._24_8_ * dVar120;
    auVar63._0_8_ = dVar95 * dVar19;
    auVar63._8_8_ = dVar8 * dVar20;
    auVar63._16_8_ = dVar158 * dVar177;
    auVar63._24_8_ = dVar120 * dVar9;
    auVar217 = vperm2f128_avx(auVar136,auVar108,0x21);
    auVar217 = vshufpd_avx(auVar217,ZEXT1632(auVar108._16_16_),4);
    auVar27._0_8_ = auVar63._0_8_ + auVar217._0_8_;
    auVar27._8_8_ = auVar63._8_8_ + auVar217._8_8_;
    auVar47._16_8_ = auVar63._16_8_ + auVar217._16_8_;
    auVar47._0_16_ = auVar27;
    auVar47._24_8_ = auVar63._24_8_ + auVar217._24_8_;
    auVar17 = vsubpd_avx(auVar217,auVar63);
    auVar10 = vshufpd_avx(auVar128,auVar128,1);
    auVar109._8_8_ = auVar108._0_8_;
    auVar109._0_8_ = auVar108._0_8_;
    auVar109._16_8_ = auVar108._0_8_;
    auVar109._24_8_ = auVar108._0_8_;
    auVar217 = vblendpd_avx(auVar109,ZEXT1632(auVar10),1);
    auVar53 = vpermpd_avx2(auVar136,0x55);
    auVar53 = vblendpd_avx(ZEXT1632(CONCAT88(dVar175 * dVar158,dVar175 * dVar158)),auVar53,0xc);
    auVar86._0_8_ = auVar217._0_8_ + auVar53._0_8_;
    auVar86._8_8_ = auVar217._8_8_ + auVar53._8_8_;
    auVar86._16_8_ = auVar217._16_8_ + auVar53._16_8_;
    auVar86._24_8_ = auVar217._24_8_ + auVar53._24_8_;
    auVar110._8_8_ = __real_3ff0000000000000;
    auVar110._0_8_ = __real_3ff0000000000000;
    auVar110._16_8_ = __real_3ff0000000000000;
    auVar110._24_8_ = __real_3ff0000000000000;
    auVar53 = vsubpd_avx(auVar110,auVar86);
    dVar158 = auVar53._0_8_;
    dVar95 = *(double *)param_1[9];
    dVar8 = *(double *)(param_1[9] + 0x10);
    auVar10 = vmovhpd_avx(ZEXT816(0) << 0x40,*(undefined8 *)(param_1[9] + 8));
    auVar217 = vpermpd_avx2(auVar17,0xaa);
    dVar120 = auVar10._0_8_;
    dVar121 = auVar10._8_8_;
    auVar163 = vpermpd_avx2(auVar47,0x55);
    auVar151._0_8_ = auVar163._0_8_ * 0.0 + dVar120 * auVar217._0_8_ + dVar95 * dVar158;
    auVar151._8_8_ = auVar163._8_8_ * 0.0 + dVar121 * auVar217._8_8_ + dVar158 * 0.0;
    auVar151._16_8_ = dVar8 * auVar163._16_8_ + auVar217._16_8_ * 0.0 + dVar158 * 0.0;
    auVar151._24_8_ = auVar163._24_8_ * 0.0 + auVar217._24_8_ * 0.0 + dVar158 * 0.0;
    auVar217 = vpermpd_avx2(auVar47,0xaa);
    auVar163 = vpermpd_avx2(auVar53,0x55);
    dVar158 = auVar17._0_8_;
    auVar137._0_8_ = dVar158 * 0.0 + dVar95 * auVar217._0_8_ + dVar120 * auVar163._0_8_;
    auVar137._8_8_ = dVar158 * 0.0 + auVar217._8_8_ * 0.0 + dVar121 * auVar163._8_8_;
    auVar137._16_8_ = dVar8 * dVar158 + auVar217._16_8_ * 0.0 + auVar163._16_8_ * 0.0;
    auVar137._24_8_ = dVar158 * 0.0 + auVar217._24_8_ * 0.0 + auVar163._24_8_ * 0.0;
    auVar217 = vpermpd_avx2(auVar17,0x55);
    auVar163 = vpermpd_avx2(auVar53,0xaa);
    auVar111._0_8_ = auVar163._0_8_ * 0.0 + auVar217._0_8_ * dVar95 + dVar120 * auVar27._0_8_;
    auVar111._8_8_ = auVar163._8_8_ * 0.0 + auVar217._8_8_ * 0.0 + dVar121 * auVar27._0_8_;
    auVar111._16_8_ = dVar8 * auVar163._16_8_ + auVar217._16_8_ * 0.0 + auVar27._0_8_ * 0.0;
    auVar111._24_8_ = auVar163._24_8_ * 0.0 + auVar217._24_8_ * 0.0 + auVar27._0_8_ * 0.0;
    auVar10 = vunpcklpd_avx(auVar53._0_16_,auVar47._16_16_);
    auVar217 = vblendpd_avx(ZEXT1632(auVar10),auVar217,0xc);
    auVar163 = vpermpd_avx2(auVar151,0x55);
    auVar10 = vblendpd_avx(auVar53._0_16_,auVar17._16_16_,1);
    dVar122 = auVar10._0_8_;
    dVar213 = auVar10._8_8_;
    dVar121 = auVar217._0_8_;
    dVar94 = auVar217._8_8_;
    dVar119 = auVar217._16_8_;
    dVar58 = auVar217._24_8_;
    auVar48 = vpermpd_avx2(auVar151,0xaa);
    auVar10 = vshufpd_avx(auVar27,auVar17._0_16_,1);
    auVar217 = vblendpd_avx(auVar53,ZEXT1632(auVar10),3);
    dVar95 = auVar217._0_8_;
    auVar145._0_8_ = dVar95 * auVar48._0_8_ + dVar121 * auVar151._0_8_ + dVar122 * auVar163._0_8_;
    dVar8 = auVar217._8_8_;
    auVar145._8_8_ = dVar8 * auVar48._8_8_ + dVar94 * auVar151._0_8_ + dVar213 * auVar163._8_8_;
    dVar158 = auVar217._16_8_;
    auVar152._16_8_ =
         dVar158 * auVar48._16_8_ + dVar119 * auVar151._0_8_ + auVar27._0_8_ * auVar163._16_8_;
    auVar152._0_16_ = auVar145;
    dVar120 = auVar217._24_8_;
    auVar152._24_8_ =
         dVar120 * auVar48._24_8_ + dVar58 * auVar151._0_8_ + auVar27._8_8_ * auVar163._24_8_;
    auVar217 = vpermpd_avx2(auVar137,0x55);
    auVar53 = vpermpd_avx2(auVar137,0xaa);
    auVar74._0_8_ = dVar95 * auVar53._0_8_ + dVar121 * auVar137._0_8_ + dVar122 * auVar217._0_8_;
    auVar74._8_8_ = dVar8 * auVar53._8_8_ + dVar94 * auVar137._0_8_ + dVar213 * auVar217._8_8_;
    auVar87._16_8_ =
         dVar158 * auVar53._16_8_ + dVar119 * auVar137._0_8_ + auVar27._0_8_ * auVar217._16_8_;
    auVar87._0_16_ = auVar74;
    auVar87._24_8_ =
         dVar120 * auVar53._24_8_ + dVar58 * auVar137._0_8_ + auVar27._8_8_ * auVar217._24_8_;
    auVar217 = vpermpd_avx2(auVar111,0x55);
    auVar53 = vpermpd_avx2(auVar111,0xaa);
    *(undefined1 (*) [16])(param_1[0x1d] + 8) = auVar145;
    uVar1 = vmovlpd_avx(auVar152._16_16_);
    *(undefined8 *)param_1[0x1e] = uVar1;
    auVar100._0_8_ = dVar95 * auVar53._0_8_ + dVar121 * auVar111._0_8_ + dVar122 * auVar217._0_8_;
    auVar100._8_8_ = dVar8 * auVar53._8_8_ + dVar94 * auVar111._0_8_ + dVar213 * auVar217._8_8_;
    auVar112._16_8_ =
         dVar158 * auVar53._16_8_ + dVar119 * auVar111._0_8_ + auVar27._0_8_ * auVar217._16_8_;
    auVar112._0_16_ = auVar100;
    auVar112._24_8_ =
         dVar120 * auVar53._24_8_ + dVar58 * auVar111._0_8_ + auVar27._8_8_ * auVar217._24_8_;
    *(undefined8 *)(param_1[0x1e] + 8) = 0;
    *(undefined1 (*) [16])(param_1[0x1e] + 0x10) = auVar74;
    uVar1 = vmovlpd_avx(auVar87._16_16_);
    *(undefined8 *)(param_1[0x1f] + 8) = uVar1;
    *(undefined8 *)(param_1[0x1f] + 0x10) = 0;
    *(undefined1 (*) [16])param_1[0x20] = auVar100;
    uVar1 = vmovlpd_avx(auVar112._16_16_);
    *(undefined8 *)(param_1[0x20] + 0x10) = uVar1;
    *(undefined8 *)param_1[0x21] = 0;
    *(undefined8 *)(param_1[0x21] + 8) = 0;
    *(undefined8 *)(param_1[0x21] + 0x10) = 0;
    *(undefined8 *)param_1[0x22] = 0;
  }
  *(undefined8 *)(param_1[0x22] + 8) = 0x3ff0000000000000;
LAB_1409eb5a3:
  dVar95 = *(double *)param_1[0xe];
  dVar8 = *(double *)(param_1[0xe] + 8);
  dVar158 = *(double *)(param_1[0xe] + 0x10);
  dVar120 = *(double *)param_1[0xf];
  dVar121 = *(double *)param_1[0x13];
  dVar94 = *(double *)(param_1[0x13] + 8);
  dVar119 = *(double *)(param_1[0x13] + 0x10);
  auVar61._0_8_ =
       *(double *)(param_1[0x12] + 0x10) * *(double *)(param_1[0x11] + 8) +
       dVar94 * *(double *)param_1[0x12];
  auVar61._8_8_ =
       dVar121 * *(double *)(param_1[0x11] + 0x10) + dVar119 * *(double *)(param_1[0x12] + 8);
  auVar10 = vshufpd_avx(auVar61,auVar61,1);
  auVar62._8_8_ = 0;
  auVar62._0_8_ = auVar61._0_8_ + auVar10._0_8_;
  auVar10 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar62,2);
  auVar106._8_8_ = 0;
  auVar106._0_8_ = __real_3ff0000000000000;
  auVar132._8_8_ = 0;
  auVar132._0_8_ = __real_bff0000000000000;
  auVar10 = vblendvpd_avx(auVar132,auVar106,auVar10);
  dVar58 = auVar10._0_8_;
  *(double *)(param_1[0x12] + 0x10) = *(double *)(param_1[0x12] + 0x10) * dVar58;
  *(double *)param_1[0x13] = dVar121 * dVar58;
  *(double *)(param_1[0x13] + 8) = dVar94 * dVar58;
  *(double *)(param_1[0x13] + 0x10) = dVar119 * dVar58;
  auVar34._0_8_ =
       dVar95 * *(double *)(param_1[0xc] + 0x10) + dVar158 * *(double *)(param_1[0xd] + 8);
  auVar34._8_8_ = dVar8 * *(double *)param_1[0xd] + dVar120 * *(double *)(param_1[0xd] + 0x10);
  auVar10 = vshufpd_avx(auVar34,auVar34,1);
  auVar35._8_8_ = 0;
  auVar35._0_8_ = auVar34._0_8_ + auVar10._0_8_;
  auVar10 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar35,2);
  auVar10 = vblendvpd_avx(auVar132,auVar106,auVar10);
  dVar121 = auVar10._0_8_;
  *(double *)param_1[0xe] = dVar95 * dVar121;
  *(double *)(param_1[0xe] + 8) = dVar8 * dVar121;
  *(double *)(param_1[0xe] + 0x10) = dVar158 * dVar121;
  *(double *)param_1[0xf] = dVar120 * dVar121;
  *param_9 = dVar21 + *param_9;
  auVar36._0_8_ = dVar21 * *(double *)*param_6 + *(double *)param_1[0x2d];
  auVar36._8_8_ = dVar21 * *(double *)(*param_6 + 8) + *(double *)(param_1[0x2d] + 8);
  auVar57._16_8_ = dVar21 * *(double *)(*param_6 + 0x10) + *(double *)(param_1[0x2d] + 0x10);
  auVar57._0_16_ = auVar36;
  auVar57._24_8_ = dVar21 * 0.0 + 0.0;
  *(undefined1 (*) [16])param_1[0x2d] = auVar36;
  uVar1 = vmovlpd_avx(auVar57._16_16_);
  *(undefined8 *)(param_1[0x2d] + 0x10) = uVar1;
  return;
}

// ApplyPointPositionConstraintKD___un_3C_s_5B_unFPBDJointSolver_5D__3E_CuniCuniREFs_5B__c_unFVector_5D_Cund_avx2 @ 1409eb6e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void ApplyPointPositionConstraintKD___un_3C_s_5B_unFPBDJointSolver_5D__3E_CuniCuniREFs_5B__c_unFVector_5D_Cund_avx2
               (longlong param_1,int param_2,int param_3,double *param_4,double param_5,
               undefined1 (*param_6) [32])

{
  undefined1 (*pauVar1) [24];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  ulonglong *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [32];
  undefined1 auVar11 [24];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [16];
  undefined1 auVar15 [32];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar41 [16];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
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
  undefined1 auVar83 [32];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  ulonglong uVar94;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  ulonglong uVar102;
  undefined1 auVar97 [16];
  ulonglong uVar103;
  ulonglong uVar104;
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  double dVar105;
  undefined1 auVar106 [16];
  double dVar112;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  double dVar113;
  double dVar114;
  undefined1 auVar111 [32];
  double dVar115;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [32];
  undefined1 auVar119 [32];
  undefined1 auVar120 [32];
  undefined1 auVar122 [16];
  double dVar127;
  undefined1 auVar123 [32];
  double dVar126;
  double dVar128;
  undefined1 auVar125 [32];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [24];
  undefined1 auVar134 [32];
  undefined1 auVar136 [32];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [32];
  undefined1 auVar141 [32];
  undefined1 auVar145 [16];
  undefined1 auVar144 [32];
  double dVar146;
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  double dVar151;
  undefined1 auVar150 [32];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [32];
  undefined1 auVar157 [32];
  undefined1 auVar158 [32];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [32];
  undefined1 auVar164 [32];
  undefined1 auVar165 [16];
  undefined1 auVar166 [32];
  undefined1 auVar167 [32];
  undefined1 auVar168 [16];
  undefined1 auVar170 [32];
  undefined1 auVar53 [32];
  undefined1 auVar64 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar72 [32];
  undefined1 auVar84 [32];
  undefined1 auVar98 [32];
  undefined1 auVar110 [32];
  undefined1 auVar121 [32];
  undefined1 auVar124 [32];
  undefined1 auVar135 [32];
  undefined1 auVar142 [32];
  undefined1 auVar143 [32];
  undefined1 auVar149 [32];
  undefined1 auVar162 [32];
  undefined1 auVar163 [32];
  undefined1 auVar169 [32];
  
  lVar27 = (longlong)param_3;
  lVar26 = lVar27 * 0x80;
  uVar94 = *(ulonglong *)(param_1 + 0x110 + lVar27 * 0x18);
  auVar40._8_8_ = 0;
  auVar40._0_8_ = uVar94;
  auVar44._16_8_ = uVar94;
  auVar44._0_16_ = *(undefined1 (*) [16])(param_1 + 0x100 + lVar27 * 0x18);
  auVar44._24_8_ = 0;
  dVar115 = *(double *)(param_1 + 0x180 + lVar27 * 0x18);
  auVar41._8_8_ = 0;
  auVar41._0_8_ = dVar115;
  auVar42 = *(undefined1 (*) [16])(param_1 + 0x170 + lVar27 * 0x18);
  auVar161._16_8_ = dVar115;
  auVar161._0_16_ = auVar42;
  auVar161._24_8_ = 0;
  auVar10 = vsubpd_avx(auVar44,auVar161);
  auVar106 = auVar10._0_16_;
  auVar29 = vshufpd_avx(auVar106,auVar106,1);
  auVar40 = vsubpd_avx(auVar40,auVar41);
  dVar127 = auVar40._0_8_;
  auVar85._0_8_ = (ulonglong)dVar127 ^ (ulonglong)__real_8000000000000000;
  auVar85._8_8_ = auVar40._8_8_ ^ (ulonglong)__real_8000000000000000;
  auVar129._0_8_ = (double)(auVar29._0_8_ ^ (ulonglong)__real_8000000000000000);
  auVar129._8_8_ = (double)(auVar29._8_8_ ^ (ulonglong)__real_8000000000000000);
  uVar8 = *(undefined8 *)(param_1 + 0x268 + lVar26);
  auVar165._8_8_ = uVar8;
  auVar165._0_8_ = uVar8;
  auVar167._16_8_ = uVar8;
  auVar167._0_16_ = auVar165;
  auVar167._24_8_ = uVar8;
  dVar105 = *(double *)(param_1 + 0x260 + lVar26);
  auVar168._8_8_ = dVar105;
  auVar168._0_8_ = dVar105;
  auVar169._16_8_ = dVar105;
  auVar169._0_16_ = auVar168;
  auVar169._24_8_ = dVar105;
  uVar8 = *(undefined8 *)(param_1 + 0x288 + lVar26);
  auVar70._8_8_ = uVar8;
  auVar70._0_8_ = uVar8;
  auVar72._16_8_ = uVar8;
  auVar72._0_16_ = auVar70;
  auVar72._24_8_ = uVar8;
  dVar114 = auVar10._0_8_;
  auVar145._0_8_ = (double)((ulonglong)dVar114 ^ (ulonglong)__real_8000000000000000);
  dVar126 = auVar10._8_8_;
  auVar145._8_8_ = (ulonglong)dVar126 ^ (ulonglong)__real_8000000000000000;
  uVar8 = *(undefined8 *)(param_1 + 0x290 + lVar26);
  auVar54._8_8_ = uVar8;
  auVar54._0_8_ = uVar8;
  auVar118 = vpermpd_avx2(auVar10,0xaa);
  auVar41 = vunpcklpd_avx(auVar165,auVar168);
  auVar149 = vpermpd_avx2(auVar10,0x55);
  uVar9 = *(undefined8 *)(param_1 + 0x280 + lVar26);
  auVar95._8_8_ = uVar9;
  auVar95._0_8_ = uVar9;
  auVar98._16_8_ = uVar9;
  auVar98._0_16_ = auVar95;
  auVar98._24_8_ = uVar9;
  auVar30 = vblendpd_avx(auVar98,auVar72,1);
  auVar85 = vunpcklpd_avx(auVar85,auVar40);
  auVar161 = vblendpd_avx(auVar72,auVar167,4);
  auVar72 = vblendpd_avx(ZEXT1632(auVar54),auVar72,4);
  auVar29 = vshufpd_avx(auVar106,auVar145,1);
  dVar112 = *(double *)(param_1 + 0x240 + lVar26);
  auVar89 = vblendpd_avx(auVar98,auVar169,4);
  auVar54 = vunpcklpd_avx(auVar54,auVar70);
  auVar167 = vblendpd_avx(ZEXT1632(auVar54),auVar167,4);
  auVar166 = vblendpd_avx(auVar169,auVar98,1);
  auVar44 = *param_6;
  dVar113 = *(double *)(param_1 + 0xf0 + lVar27 * 8);
  auVar106._0_8_ =
       dVar113 + (auVar149._0_8_ * auVar30._0_8_ - auVar118._0_8_ * auVar41._0_8_) * auVar85._0_8_ +
                 auVar29._0_8_ * (auVar149._0_8_ * auVar72._0_8_ - auVar118._0_8_ * auVar161._0_8_);
  auVar106._8_8_ =
       (auVar149._8_8_ * auVar30._8_8_ - auVar118._8_8_ * auVar41._8_8_) * auVar85._8_8_ +
       auVar29._8_8_ * (auVar149._8_8_ * auVar72._8_8_ - auVar118._8_8_ * auVar161._8_8_) + 0.0;
  auVar140._16_8_ =
       (auVar149._16_8_ * auVar30._16_8_ - auVar118._16_8_ * dVar105) * auVar129._0_8_ +
       dVar114 * (auVar149._16_8_ * auVar72._16_8_ - auVar118._16_8_ * auVar161._16_8_) + 0.0;
  auVar140._0_16_ = auVar106;
  auVar140._24_8_ =
       (auVar149._24_8_ * auVar30._24_8_ - auVar118._24_8_ * dVar105) * auVar129._8_8_ +
       dVar126 * (auVar149._24_8_ * auVar72._24_8_ - auVar118._24_8_ * auVar161._24_8_) + 0.0;
  auVar72 = vpcmpeqd_avx2(ZEXT832((ulonglong)dVar113),ZEXT832((ulonglong)dVar113));
  auVar161 = auVar72 & ~auVar44;
  pauVar2 = (undefined1 (*) [16])(param_1 + 0x100 + lVar27 * 0x18);
  pauVar3 = (undefined1 (*) [16])(param_1 + 0x240 + lVar26);
  auVar29 = vunpcklpd_avx(auVar40,auVar129);
  auVar118._8_8_ = dVar114;
  auVar118._0_8_ = dVar114;
  auVar118._16_8_ = dVar114;
  auVar118._24_8_ = dVar114;
  auVar30 = vblendpd_avx(auVar118,ZEXT1632(auVar145),1);
  dVar105 = *(double *)(param_1 + 0xf0 + lVar27 * 8);
  auVar147._0_8_ =
       *(double *)(param_1 + 0xf0 + lVar27 * 8) +
       (auVar145._0_8_ * auVar89._0_8_ + dVar127 * dVar112) * auVar29._0_8_ +
       auVar30._0_8_ * (dVar127 * auVar166._0_8_ + auVar145._0_8_ * auVar167._0_8_);
  auVar147._8_8_ =
       (auVar145._0_8_ * auVar89._8_8_ + dVar127 * dVar112) * auVar29._8_8_ +
       auVar30._8_8_ * (dVar127 * auVar166._8_8_ + auVar145._0_8_ * auVar167._8_8_) + 0.0;
  auVar149._16_8_ =
       dVar105 + (dVar114 * auVar89._16_8_ + auVar129._0_8_ * dVar112) * auVar129._0_8_ +
                 auVar30._16_8_ * (auVar129._0_8_ * auVar166._16_8_ + dVar114 * auVar167._16_8_);
  auVar149._0_16_ = auVar147;
  auVar149._24_8_ =
       (dVar126 * auVar89._24_8_ + auVar129._8_8_ * dVar112) * auVar129._8_8_ +
       auVar30._24_8_ * (auVar129._8_8_ * auVar166._24_8_ + dVar126 * auVar167._24_8_) + 0.0;
  auVar166._8_8_ = __real_0010000000000000;
  auVar166._0_8_ = __real_0010000000000000;
  auVar166._16_8_ = __real_0010000000000000;
  auVar166._24_8_ = __real_0010000000000000;
  auVar30 = vblendpd_avx(auVar140,auVar166,8);
  auVar89._0_8_ = __real_7fffffffffffffff & auVar30._0_8_;
  auVar89._8_8_ = __real_7fffffffffffffff & auVar30._8_8_;
  auVar89._16_8_ = __real_7fffffffffffffff & auVar30._16_8_;
  auVar89._24_8_ = __real_7fffffffffffffff & auVar30._24_8_;
  auVar30._8_8_ = __real_3e45798ee2308c3a;
  auVar30._0_8_ = __real_3e45798ee2308c3a;
  auVar30._16_8_ = __real_3e45798ee2308c3a;
  auVar30._24_8_ = __real_3e45798ee2308c3a;
  auVar29 = auVar140._16_16_;
  if ((((((((SUB321(auVar161 >> 0x1f,0) & 1) == 0 && (SUB321(auVar161 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar161 >> 0x5f,0) & 1) == 0) && SUB321(auVar161 >> 0x7f,0) == '\0') &&
        (SUB321(auVar161 >> 0x9f,0) & 1) == 0) && SUB321(auVar161 >> 0xbf,0) == '\0') &&
      (SUB321(auVar161 >> 0xdf,0) & 1) == 0) && -1 < auVar161[0x1f]) {
    auVar44 = vcmppd_avx(auVar89,auVar30,6);
    auVar161 = vcmppd_avx(auVar166,auVar30,6);
    auVar44 = vpackssdw_avx2(auVar44,auVar161);
    if ((((((((SUB321(auVar44 >> 0x1f,0) & 1) == 0 && (SUB321(auVar44 >> 0x3f,0) & 1) == 0) &&
            (SUB321(auVar44 >> 0x5f,0) & 1) == 0) && SUB321(auVar44 >> 0x7f,0) == '\0') &&
          (SUB321(auVar44 >> 0x9f,0) & 1) == 0) && SUB321(auVar44 >> 0xbf,0) == '\0') &&
        (SUB321(auVar44 >> 0xdf,0) & 1) == 0) && -1 < auVar44[0x1f]) {
      auVar40 = vshufpd_avx(auVar106,auVar106,1);
      auVar44 = vblendpd_avx(auVar149,auVar166,0xc);
      auVar47._16_16_ = auVar147;
      auVar47._0_16_ = auVar40;
      auVar44 = vshufpd_avx(auVar47,auVar44,0xc);
      auVar48._0_8_ = __real_7fffffffffffffff & auVar44._0_8_;
      auVar48._8_8_ = __real_7fffffffffffffff & auVar44._8_8_;
      auVar48._16_8_ = __real_7fffffffffffffff & auVar44._16_8_;
      auVar48._24_8_ = __real_7fffffffffffffff & auVar44._24_8_;
      auVar44 = vcmppd_avx(auVar48,auVar30,6);
      auVar44 = vpackssdw_avx2(auVar44,ZEXT832(0) << 0x40);
      if ((((((((SUB321(auVar44 >> 0x1f,0) & 1) != 0 || (SUB321(auVar44 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar44 >> 0x5f,0) & 1) != 0) || SUB321(auVar44 >> 0x7f,0) != '\0') ||
            (SUB321(auVar44 >> 0x9f,0) & 1) != 0) || SUB321(auVar44 >> 0xbf,0) != '\0') ||
          (SUB321(auVar44 >> 0xdf,0) & 1) != 0) || auVar44[0x1f] < '\0') goto LAB_1409ebccf;
      auVar44 = vperm2f128_avx(auVar140,auVar166,0x31);
      auVar44 = vblendpd_avx(auVar44,auVar149,6);
      auVar90._0_8_ = __real_7fffffffffffffff & auVar44._0_8_;
      auVar90._8_8_ = __real_7fffffffffffffff & auVar44._8_8_;
      auVar90._16_8_ = __real_7fffffffffffffff & auVar44._16_8_;
      auVar90._24_8_ = __real_7fffffffffffffff & auVar44._24_8_;
      auVar44 = vcmppd_avx(auVar90,auVar30,6);
      auVar44 = vpackssdw_avx2(auVar44,ZEXT832(0) << 0x40);
      if ((((((((SUB321(auVar44 >> 0x1f,0) & 1) != 0 || (SUB321(auVar44 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar44 >> 0x5f,0) & 1) != 0) || SUB321(auVar44 >> 0x7f,0) != '\0') ||
            (SUB321(auVar44 >> 0x9f,0) & 1) != 0) || SUB321(auVar44 >> 0xbf,0) != '\0') ||
          (SUB321(auVar44 >> 0xdf,0) & 1) != 0) || auVar44[0x1f] < '\0') goto LAB_1409ebccf;
      auVar29 = ZEXT816(0) << 0x20;
      auVar153._8_8_ = 0;
      auVar153._0_8_ = __real_3ff0000000000000;
      auVar85 = ZEXT816(0);
      auVar131 = ZEXT816(0);
      auVar145 = ZEXT816(0) << 0x40;
      auVar41 = ZEXT816(0);
      auVar40 = ZEXT816(0) << 0x40;
      auVar138 = auVar153;
      auVar154 = auVar153;
    }
    else {
LAB_1409ebccf:
      auVar44 = vperm2f128_avx(auVar140,auVar149,0x31);
      auVar72 = vunpcklpd_avx(auVar140,auVar44);
      auVar13._8_8_ = _UNK_150b54548;
      auVar13._0_8_ = ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
      auVar13._16_8_ = _UNK_150b54550;
      auVar13._24_8_ = _UNK_150b54558;
      auVar44 = vblendpd_avx(auVar149,auVar13,0xe);
      auVar40 = vshufpd_avx(auVar106,auVar106,1);
      auVar119._16_16_ = auVar147;
      auVar119._0_16_ = auVar40;
      auVar161 = vshufpd_avx(auVar119,ZEXT832(0) << 0x40,4);
      auVar30 = vblendpd_avx(ZEXT1632(auVar40),auVar149,2);
      auVar157._0_8_ = auVar72._0_8_ * auVar44._0_8_ - auVar161._0_8_ * auVar30._0_8_;
      auVar157._8_8_ = auVar72._8_8_ * auVar44._8_8_ - auVar161._8_8_ * auVar30._8_8_;
      auVar157._16_8_ = auVar72._16_8_ * auVar44._16_8_ - auVar161._16_8_ * auVar30._16_8_;
      auVar157._24_8_ = auVar72._24_8_ * auVar44._24_8_ - auVar161._24_8_ * auVar30._24_8_;
      auVar49._8_8_ = auVar147._0_8_;
      auVar49._0_8_ = auVar147._0_8_;
      auVar49._16_8_ = auVar149._16_8_;
      auVar49._24_8_ = auVar149._16_8_;
      auVar44 = vblendpd_avx(ZEXT1632(CONCAT88(__real_3ff0000000000000,__real_3ff0000000000000)),
                             auVar49,0xc);
      auVar30 = vblendpd_avx(ZEXT1632(auVar29),auVar149,2);
      auVar161 = vblendpd_avx(ZEXT832(0) << 0x40,auVar140,0xc);
      auVar161 = vblendpd_avx(auVar161,ZEXT1632(auVar147) << 0x80,10);
      auVar123._0_8_ = auVar44._0_8_ * auVar30._0_8_ + __real_8000000000000000 * auVar161._0_8_;
      auVar123._8_8_ = auVar44._8_8_ * auVar30._8_8_ + __real_8000000000000000 * auVar161._8_8_;
      auVar123._16_8_ = auVar44._16_8_ * auVar30._16_8_ + __real_8000000000000000 * auVar161._16_8_;
      auVar123._24_8_ = auVar44._24_8_ * auVar30._24_8_ + __real_8000000000000000 * auVar161._24_8_;
      auVar40 = vunpcklpd_avx(auVar147,auVar106);
      auVar161 = vpermpd_avx2(ZEXT1632(auVar40),0x50);
      auVar50._16_16_ = auVar147;
      auVar50._0_16_ = auVar29;
      auVar167 = ZEXT832(0) << 0x40;
      auVar30 = vshufpd_avx(auVar50,auVar167,4);
      auVar72 = vpermpd_avx2(auVar140,0x55);
      auVar44 = vunpckhpd_avx(auVar149,auVar167);
      auVar44 = vblendpd_avx(auVar44,auVar140,4);
      auVar160._0_8_ = auVar30._0_8_ * auVar161._0_8_ - auVar72._0_8_ * auVar44._0_8_;
      auVar160._8_8_ = auVar30._8_8_ * auVar161._8_8_ - auVar72._8_8_ * auVar44._8_8_;
      auVar163._16_8_ = auVar30._16_8_ * auVar161._16_8_ - auVar72._16_8_ * auVar44._16_8_;
      auVar163._0_16_ = auVar160;
      auVar163._24_8_ = auVar30._24_8_ * auVar161._24_8_ - auVar72._24_8_ * auVar44._24_8_;
      auVar161 = vpermpd_avx2(auVar157,0xff);
      auVar72 = vpermpd_avx2(auVar157,0x55);
      auVar89 = vpermpd_avx2(auVar157,0xaa);
      auVar91._0_8_ = auVar161._0_8_ * auVar157._0_8_ + auVar89._0_8_ * auVar72._0_8_;
      auVar91._8_8_ = auVar161._8_8_ * auVar157._0_8_ + auVar89._8_8_ * auVar72._8_8_;
      auVar91._16_8_ = auVar161._16_8_ * auVar157._0_8_ + auVar89._16_8_ * auVar72._16_8_;
      auVar91._24_8_ = auVar161._24_8_ * auVar157._0_8_ + auVar89._24_8_ * auVar72._24_8_;
      auVar44 = vpermpd_avx2(auVar123,0xd8);
      auVar35._0_8_ = auVar160._0_8_ * auVar44._0_8_;
      auVar35._8_8_ = auVar160._8_8_ * auVar44._8_8_;
      auVar35._16_8_ = auVar163._16_8_ * auVar44._16_8_;
      auVar35._24_8_ = auVar163._24_8_ * auVar44._24_8_;
      auVar44 = vpermpd_avx2(auVar35,0x4e);
      auVar36._0_8_ = auVar35._0_8_ + auVar44._0_8_;
      auVar36._8_8_ = auVar35._8_8_ + auVar44._8_8_;
      auVar36._16_8_ = auVar35._16_8_ + auVar44._16_8_;
      auVar36._24_8_ = auVar35._24_8_ + auVar44._24_8_;
      auVar44 = vpermpd_avx2(auVar36,0x39);
      auVar37._0_8_ = auVar36._0_8_ + auVar44._0_8_;
      auVar37._8_8_ = auVar36._8_8_ + auVar44._8_8_;
      auVar37._16_8_ = auVar36._16_8_ + auVar44._16_8_;
      auVar37._24_8_ = auVar36._24_8_ + auVar44._24_8_;
      auVar44 = vsubpd_avx(auVar91,auVar37);
      auVar29 = ZEXT816(0) << 0x40;
      if ((auVar44._0_8_ != 0.0) || (NAN(auVar44._0_8_))) {
        auVar38._8_8_ = auVar147._0_8_;
        auVar38._0_8_ = auVar147._0_8_;
        auVar38._16_8_ = auVar147._0_8_;
        auVar38._24_8_ = auVar147._0_8_;
        auVar166 = vblendpd_avx(auVar140,auVar38,0xc);
        auVar149 = vpermpd_avx2(auVar140,0x60);
        auVar169 = vpermpd_avx2(auVar123,0x55);
        auVar65._0_8_ = auVar160._0_8_ * __real_3ff0000000000000;
        auVar65._8_8_ = auVar160._8_8_ * 0.0;
        auVar65._16_8_ = auVar163._16_8_ * 0.0;
        auVar65._24_8_ = auVar163._24_8_ * 0.0;
        auVar47 = vpermpd_avx2(auVar65,0x34);
        auVar48 = vpermpd_avx2(auVar163,100);
        auVar118 = vpermpd_avx2(auVar140,0xd4);
        auVar118 = vblendpd_avx(auVar118,auVar38,8);
        auVar90 = vpermpd_avx2(auVar123,0xcc);
        auVar140 = vpermpd_avx2(auVar140,0xaa);
        auVar134._0_16_ = auVar140._0_16_;
        auVar134._16_16_ = auVar147;
        auVar167 = vblendpd_avx(auVar134,auVar167,5);
        auVar140 = vpermpd_avx2(auVar123,0x66);
        auVar44 = vdivpd_avx(___ymm_3ff0000000000000bff0000000000000bff00000000000003ff0000000000000
                             ,auVar44);
        auVar138._0_8_ =
             (auVar118._0_8_ * auVar161._0_8_ -
             (auVar30._0_8_ * auVar90._0_8_ + auVar167._0_8_ * auVar140._0_8_)) * auVar44._0_8_;
        auVar138._8_8_ =
             (auVar118._8_8_ * auVar161._8_8_ -
             (auVar30._8_8_ * auVar90._8_8_ + auVar167._8_8_ * auVar140._8_8_)) * auVar44._8_8_;
        dVar113 = auVar44._16_8_;
        auVar143._16_8_ =
             (auVar118._16_8_ * auVar161._16_8_ -
             (auVar30._16_8_ * auVar90._16_8_ + auVar167._16_8_ * auVar140._16_8_)) * dVar113;
        auVar143._0_16_ = auVar138;
        dVar127 = auVar44._24_8_;
        auVar143._24_8_ =
             (auVar118._24_8_ * auVar161._24_8_ -
             (auVar30._24_8_ * auVar90._24_8_ + auVar167._24_8_ * auVar140._24_8_)) * dVar127;
        auVar40 = vshufpd_avx(auVar138,auVar138,1);
        auVar145 = auVar143._16_16_;
        auVar153 = vshufpd_avx(auVar145,auVar145,1);
        auVar131._0_8_ =
             (auVar72._16_8_ * 0.0 - (-(auVar48._16_8_ * _DAT_150aa8e90) + auVar47._16_8_)) *
             dVar113;
        auVar131._8_8_ =
             (auVar72._24_8_ * 0.0 - (-(auVar48._24_8_ * _UNK_150aa8e98) + auVar47._24_8_)) *
             dVar127;
        auVar41 = vshufpd_avx(auVar131,auVar131,1);
        auVar29._0_8_ =
             (auVar89._0_8_ * 0.0 -
             (auVar166._0_8_ * auVar123._0_8_ - auVar169._0_8_ * auVar149._0_8_)) * auVar44._0_8_;
        auVar29._8_8_ =
             (auVar89._8_8_ * 0.0 -
             (auVar166._8_8_ * auVar123._0_8_ - auVar169._8_8_ * auVar149._8_8_)) * auVar44._8_8_;
        auVar66._16_8_ =
             (auVar89._16_8_ * 0.0 -
             (auVar166._16_8_ * auVar123._0_8_ - auVar169._16_8_ * auVar149._16_8_)) * dVar113;
        auVar66._0_16_ = auVar29;
        auVar66._24_8_ =
             (auVar89._24_8_ * 0.0 -
             (auVar166._24_8_ * auVar123._0_8_ - auVar169._24_8_ * auVar149._24_8_)) * dVar127;
        auVar29 = vshufpd_avx(auVar29,auVar29,1);
        auVar85 = vshufpd_avx(auVar66._16_16_,auVar66._16_16_,1);
        auVar54 = vshufpd_avx(auVar163._16_16_,auVar163._16_16_,1);
        auVar106 = vshufpd_avx(auVar160,auVar160,1);
        auVar129 = vshufpd_avx(auVar44._16_16_,auVar44._16_16_,1);
        auVar154._8_8_ = 0;
        auVar154._0_8_ =
             (auVar157._0_8_ - (auVar54._0_8_ * 0.0 + auVar106._0_8_ * 0.0)) * auVar129._0_8_;
      }
      else {
        auVar153._8_8_ = 0;
        auVar153._0_8_ = __real_3ff0000000000000;
        auVar85 = ZEXT816(0) << 0x40;
        auVar131 = ZEXT816(0);
        auVar145 = ZEXT816(0) << 0x40;
        auVar41 = ZEXT816(0) << 0x40;
        auVar40 = ZEXT816(0);
        auVar138 = auVar153;
        auVar154 = auVar153;
      }
    }
    auVar29 = vunpcklpd_avx(auVar85,auVar29);
    auVar85 = vunpcklpd_avx(auVar145,auVar138);
    auVar40 = vunpcklpd_avx(auVar153,auVar40);
    dVar113 = param_4[1];
    dVar127 = *param_4;
    dVar128 = param_4[2];
    auVar133._0_8_ =
         param_5 * (auVar29._0_8_ * dVar128 + auVar40._0_8_ * dVar127 + auVar85._0_8_ * dVar113);
    auVar133._8_8_ =
         param_5 * (auVar29._8_8_ * dVar128 + auVar40._8_8_ * dVar127 + auVar85._8_8_ * dVar113);
    auVar133._16_8_ =
         param_5 * (auVar154._0_8_ * dVar128 + auVar41._0_8_ * dVar127 + auVar131._0_8_ * dVar113);
    auVar135._24_8_ =
         param_5 * (auVar154._8_8_ * dVar128 + auVar41._8_8_ * dVar127 + auVar131._8_8_ * dVar113);
    auVar135._0_24_ = auVar133;
    auVar44 = vpermpd_avx2(auVar135,0xc9);
    auVar30 = vpermpd_avx2(auVar10,0xc9);
    auVar51._0_8_ = auVar133._0_8_ * auVar30._0_8_ - auVar44._0_8_ * dVar114;
    auVar51._8_8_ = auVar133._8_8_ * auVar30._8_8_ - auVar44._8_8_ * dVar126;
    auVar51._16_8_ = auVar133._16_8_ * auVar30._16_8_ - auVar44._16_8_ * auVar10._16_8_;
    auVar51._24_8_ = auVar135._24_8_ * auVar30._24_8_ - auVar44._24_8_ * auVar10._24_8_;
    auVar14._8_8_ = dVar112;
    auVar14._0_8_ = dVar112;
    auVar10._16_8_ = dVar112;
    auVar10._0_16_ = auVar14;
    auVar10._24_8_ = dVar112;
    auVar29 = vmovhpd_avx(auVar14,*(undefined8 *)(*pauVar3 + 8));
    auVar44 = vblendpd_avx(auVar10,ZEXT1632(auVar29),3);
    uVar9 = *(undefined8 *)pauVar3[1];
    auVar78._8_8_ = uVar9;
    auVar78._0_8_ = uVar9;
    auVar78._16_8_ = uVar9;
    auVar78._24_8_ = uVar9;
    auVar44 = vblendpd_avx(auVar44,auVar78,4);
    auVar161 = vpermpd_avx2(auVar51,0x55);
    auVar29 = vunpcklpd_avx(auVar168,auVar165);
    auVar72 = vpermpd_avx2(auVar51,0xaa);
    auVar40 = vunpcklpd_avx(auVar95,auVar70);
    auVar30 = vblendpd_avx(auVar98,ZEXT1632(auVar40),3);
    auVar79._8_8_ = uVar8;
    auVar79._0_8_ = uVar8;
    auVar79._16_8_ = uVar8;
    auVar79._24_8_ = uVar8;
    auVar30 = vblendpd_avx(auVar30,auVar79,4);
    auVar80._0_8_ =
         auVar30._0_8_ * auVar51._0_8_ +
         auVar44._0_8_ * auVar161._0_8_ + auVar72._0_8_ * auVar29._0_8_;
    auVar80._8_8_ =
         auVar30._8_8_ * auVar51._0_8_ +
         auVar44._8_8_ * auVar161._8_8_ + auVar72._8_8_ * auVar29._8_8_;
    auVar80._16_8_ =
         auVar30._16_8_ * auVar51._0_8_ +
         auVar44._16_8_ * auVar161._16_8_ + auVar72._16_8_ * *(double *)pauVar3[3];
    auVar80._24_8_ =
         auVar30._24_8_ * auVar51._0_8_ + auVar44._24_8_ * auVar161._24_8_ + auVar72._24_8_ * 0.0;
    auVar39._0_8_ = -(auVar133._0_8_ * dVar105) + auVar42._0_8_;
    auVar39._8_8_ = -(auVar133._8_8_ * dVar105) + auVar42._8_8_;
    auVar39._16_8_ = -(auVar133._16_8_ * dVar105) + dVar115;
    auVar39._24_8_ = -(auVar135._24_8_ * dVar105) + 0.0;
    goto LAB_1409ec136;
  }
  auVar161 = vcmppd_avx(auVar89,auVar30,6);
  auVar89 = vcmppd_avx(auVar166,auVar30,6);
  auVar161 = vpackssdw_avx2(auVar161,auVar89);
  auVar40 = vpackssdw_avx(auVar161._0_16_,auVar161._16_16_);
  auVar41 = vpshufd_avx(auVar40,0xd8);
  auVar161 = vpcmpeqd_avx2(auVar44,ZEXT832(0) << 0x40);
  auVar40 = vpackssdw_avx(SUB3216(auVar161 ^ auVar72,0),SUB3216(auVar161 ^ auVar72,0x10));
  auVar40 = vpand_avx(auVar41,auVar40);
  auVar40 = vpsllw_avx(auVar40,0xf);
  if ((((((((SUB161(auVar40 >> 0xf,0) & 1) == 0 && (SUB161(auVar40 >> 0x1f,0) & 1) == 0) &&
          (SUB161(auVar40 >> 0x2f,0) & 1) == 0) && (SUB161(auVar40 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar40 >> 0x4f,0) & 1) == 0) && (SUB161(auVar40 >> 0x5f,0) & 1) == 0) &&
      (SUB161(auVar40 >> 0x6f,0) & 1) == 0) && -1 < auVar40[0xf]) {
    auVar72 = vpcmpeqd_avx2(ZEXT1632(auVar40),ZEXT1632(auVar40));
    auVar40 = vpackssdw_avx(SUB3216(auVar161 ^ auVar72,0),SUB3216(auVar161 ^ auVar72,0x10));
    auVar41 = vshufpd_avx(auVar106,auVar106,1);
    auVar161 = vblendpd_avx(auVar149,auVar166,0xc);
    auVar73._16_16_ = auVar147;
    auVar73._0_16_ = auVar41;
    auVar161 = vshufpd_avx(auVar73,auVar161,0xc);
    auVar74._0_8_ = __real_7fffffffffffffff & auVar161._0_8_;
    auVar74._8_8_ = __real_7fffffffffffffff & auVar161._8_8_;
    auVar74._16_8_ = __real_7fffffffffffffff & auVar161._16_8_;
    auVar74._24_8_ = __real_7fffffffffffffff & auVar161._24_8_;
    auVar161 = vcmppd_avx(auVar74,auVar30,6);
    auVar161 = vpackssdw_avx2(auVar161,ZEXT832(0) << 0x40);
    auVar41 = vpackssdw_avx(auVar161._0_16_,auVar161._16_16_);
    auVar41 = vpshufd_avx(auVar41,0xd8);
    auVar40 = vpand_avx(auVar41,auVar40);
    auVar40 = vpsllw_avx(auVar40,0xf);
    if ((((((((SUB161(auVar40 >> 0xf,0) & 1) != 0 || (SUB161(auVar40 >> 0x1f,0) & 1) != 0) ||
            (SUB161(auVar40 >> 0x2f,0) & 1) != 0) || (SUB161(auVar40 >> 0x3f,0) & 1) != 0) ||
          (SUB161(auVar40 >> 0x4f,0) & 1) != 0) || (SUB161(auVar40 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar40 >> 0x6f,0) & 1) != 0) || auVar40[0xf] < '\0') goto LAB_1409eba49;
    auVar44 = vpcmpeqd_avx2(auVar44,SUB6432(ZEXT1664((undefined1  [16])0x0),0));
    auVar40 = vpackssdw_avx(SUB3216(auVar44 ^ auVar72,0),SUB3216(auVar44 ^ auVar72,0x10));
    auVar44 = vperm2f128_avx(auVar140,auVar166,0x31);
    auVar44 = vblendpd_avx(auVar44,auVar149,6);
    auVar75._0_8_ = __real_7fffffffffffffff & auVar44._0_8_;
    auVar75._8_8_ = __real_7fffffffffffffff & auVar44._8_8_;
    auVar75._16_8_ = __real_7fffffffffffffff & auVar44._16_8_;
    auVar75._24_8_ = __real_7fffffffffffffff & auVar44._24_8_;
    auVar44 = vcmppd_avx(auVar75,auVar30,6);
    auVar44 = vpackssdw_avx2(auVar44,SUB6432(ZEXT1664((undefined1  [16])0x0),0));
    auVar41 = vpackssdw_avx(auVar44._0_16_,auVar44._16_16_);
    auVar41 = vpshufd_avx(auVar41,0xd8);
    auVar40 = vpand_avx(auVar41,auVar40);
    auVar40 = vpsllw_avx(auVar40,0xf);
    if ((((((((SUB161(auVar40 >> 0xf,0) & 1) != 0 || (SUB161(auVar40 >> 0x1f,0) & 1) != 0) ||
            (SUB161(auVar40 >> 0x2f,0) & 1) != 0) || (SUB161(auVar40 >> 0x3f,0) & 1) != 0) ||
          (SUB161(auVar40 >> 0x4f,0) & 1) != 0) || (SUB161(auVar40 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar40 >> 0x6f,0) & 1) != 0) || auVar40[0xf] < '\0') goto LAB_1409eba49;
    auVar29 = (undefined1  [16])0x0;
LAB_1409ec020:
    auVar155._8_8_ = 0;
    auVar155._0_8_ = __real_3ff0000000000000;
    auVar85 = ZEXT816(0);
    auVar130 = ZEXT816(0);
    auVar145 = ZEXT816(0) << 0x40;
    auVar41 = ZEXT816(0);
    auVar40 = ZEXT816(0) << 0x40;
    auVar137 = auVar155;
    auVar152 = auVar155;
  }
  else {
LAB_1409eba49:
    auVar44 = vperm2f128_avx(auVar140,auVar149,0x31);
    auVar72 = vunpcklpd_avx(auVar140,auVar44);
    auVar12._8_8_ = _UNK_150b54548;
    auVar12._0_8_ = ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
    auVar12._16_8_ = _UNK_150b54550;
    auVar12._24_8_ = _UNK_150b54558;
    auVar44 = vblendpd_avx(auVar149,auVar12,0xe);
    auVar40 = vshufpd_avx(auVar106,auVar106,1);
    auVar76._16_16_ = auVar147;
    auVar76._0_16_ = auVar40;
    auVar89 = ZEXT832(0) << 0x40;
    auVar161 = vshufpd_avx(auVar76,auVar89,4);
    auVar30 = vblendpd_avx(ZEXT1632(auVar40),auVar149,2);
    auVar156._0_8_ = auVar72._0_8_ * auVar44._0_8_ - auVar161._0_8_ * auVar30._0_8_;
    auVar156._8_8_ = auVar72._8_8_ * auVar44._8_8_ - auVar161._8_8_ * auVar30._8_8_;
    auVar156._16_8_ = auVar72._16_8_ * auVar44._16_8_ - auVar161._16_8_ * auVar30._16_8_;
    auVar156._24_8_ = auVar72._24_8_ * auVar44._24_8_ - auVar161._24_8_ * auVar30._24_8_;
    auVar45._8_8_ = auVar147._0_8_;
    auVar45._0_8_ = auVar147._0_8_;
    auVar45._16_8_ = auVar149._16_8_;
    auVar45._24_8_ = auVar149._16_8_;
    auVar44 = vblendpd_avx(ZEXT1632(CONCAT88(__real_3ff0000000000000,__real_3ff0000000000000)),
                           auVar45,0xc);
    auVar30 = vblendpd_avx(ZEXT1632(auVar29),auVar149,2);
    auVar161 = vblendpd_avx(auVar89,auVar140,0xc);
    auVar161 = vblendpd_avx(auVar161,ZEXT1632(auVar147) << 0x80,10);
    auVar170._0_8_ = auVar44._0_8_ * auVar30._0_8_ + auVar161._0_8_ * __real_8000000000000000;
    auVar170._8_8_ = auVar44._8_8_ * auVar30._8_8_ + auVar161._8_8_ * __real_8000000000000000;
    auVar170._16_8_ = auVar44._16_8_ * auVar30._16_8_ + auVar161._16_8_ * __real_8000000000000000;
    auVar170._24_8_ = auVar44._24_8_ * auVar30._24_8_ + auVar161._24_8_ * __real_8000000000000000;
    auVar40 = vunpcklpd_avx(auVar147,auVar106);
    auVar161 = vpermpd_avx2(ZEXT1632(auVar40),0x50);
    auVar46._16_16_ = auVar147;
    auVar46._0_16_ = auVar29;
    auVar30 = vshufpd_avx(auVar46,auVar89,4);
    auVar72 = vpermpd_avx2(auVar140,0x55);
    auVar44 = vunpckhpd_avx(auVar149,auVar89);
    auVar44 = vblendpd_avx(auVar44,auVar140,4);
    auVar159._0_8_ = auVar30._0_8_ * auVar161._0_8_ - auVar72._0_8_ * auVar44._0_8_;
    auVar159._8_8_ = auVar30._8_8_ * auVar161._8_8_ - auVar72._8_8_ * auVar44._8_8_;
    auVar162._16_8_ = auVar30._16_8_ * auVar161._16_8_ - auVar72._16_8_ * auVar44._16_8_;
    auVar162._0_16_ = auVar159;
    auVar162._24_8_ = auVar30._24_8_ * auVar161._24_8_ - auVar72._24_8_ * auVar44._24_8_;
    auVar161 = vpermpd_avx2(auVar156,0xff);
    auVar72 = vpermpd_avx2(auVar156,0x55);
    auVar89 = vpermpd_avx2(auVar156,0xaa);
    auVar63._0_8_ = auVar161._0_8_ * auVar156._0_8_ + auVar72._0_8_ * auVar89._0_8_;
    auVar63._8_8_ = auVar161._8_8_ * auVar156._0_8_ + auVar72._8_8_ * auVar89._8_8_;
    auVar63._16_8_ = auVar161._16_8_ * auVar156._0_8_ + auVar72._16_8_ * auVar89._16_8_;
    auVar63._24_8_ = auVar161._24_8_ * auVar156._0_8_ + auVar72._24_8_ * auVar89._24_8_;
    auVar44 = vpermpd_avx2(auVar170,0xd8);
    auVar31._0_8_ = auVar159._0_8_ * auVar44._0_8_;
    auVar31._8_8_ = auVar159._8_8_ * auVar44._8_8_;
    auVar31._16_8_ = auVar162._16_8_ * auVar44._16_8_;
    auVar31._24_8_ = auVar162._24_8_ * auVar44._24_8_;
    auVar44 = vpermpd_avx2(auVar31,0x4e);
    auVar32._0_8_ = auVar31._0_8_ + auVar44._0_8_;
    auVar32._8_8_ = auVar31._8_8_ + auVar44._8_8_;
    auVar32._16_8_ = auVar31._16_8_ + auVar44._16_8_;
    auVar32._24_8_ = auVar31._24_8_ + auVar44._24_8_;
    auVar44 = vpermpd_avx2(auVar32,0x39);
    auVar33._0_8_ = auVar32._0_8_ + auVar44._0_8_;
    auVar33._8_8_ = auVar32._8_8_ + auVar44._8_8_;
    auVar33._16_8_ = auVar32._16_8_ + auVar44._16_8_;
    auVar33._24_8_ = auVar32._24_8_ + auVar44._24_8_;
    auVar44 = vsubpd_avx(auVar63,auVar33);
    auVar29 = ZEXT816(0) << 0x40;
    if ((auVar44._0_8_ == 0.0) && (!NAN(auVar44._0_8_))) goto LAB_1409ec020;
    auVar34._8_8_ = auVar147._0_8_;
    auVar34._0_8_ = auVar147._0_8_;
    auVar34._16_8_ = auVar147._0_8_;
    auVar34._24_8_ = auVar147._0_8_;
    auVar167 = vblendpd_avx(auVar140,auVar34,0xc);
    auVar149 = vpermpd_avx2(auVar140,0x60);
    auVar169 = vpermpd_avx2(auVar170,0x55);
    auVar77._0_8_ = auVar159._0_8_ * __real_3ff0000000000000;
    auVar77._8_8_ = auVar159._8_8_ * 0.0;
    auVar77._16_8_ = auVar162._16_8_ * 0.0;
    auVar77._24_8_ = auVar162._24_8_ * 0.0;
    auVar47 = vpermpd_avx2(auVar77,0x34);
    auVar48 = vpermpd_avx2(auVar162,100);
    auVar166 = vpermpd_avx2(auVar140,0xd4);
    auVar166 = vblendpd_avx(auVar166,auVar34,8);
    auVar90 = vpermpd_avx2(auVar170,0xcc);
    auVar118 = vpermpd_avx2(auVar140,0xaa);
    auVar141._0_16_ = auVar118._0_16_;
    auVar141._16_16_ = auVar147;
    auVar118 = vblendpd_avx(auVar141,ZEXT832(0) << 0x40,5);
    auVar140 = vpermpd_avx2(auVar170,0x66);
    auVar44 = vdivpd_avx(___ymm_3ff0000000000000bff0000000000000bff00000000000003ff0000000000000,
                         auVar44);
    auVar137._0_8_ =
         (auVar166._0_8_ * auVar161._0_8_ -
         (auVar30._0_8_ * auVar90._0_8_ + auVar140._0_8_ * auVar118._0_8_)) * auVar44._0_8_;
    auVar137._8_8_ =
         (auVar166._8_8_ * auVar161._8_8_ -
         (auVar30._8_8_ * auVar90._8_8_ + auVar140._8_8_ * auVar118._8_8_)) * auVar44._8_8_;
    dVar113 = auVar44._16_8_;
    auVar142._16_8_ =
         (auVar166._16_8_ * auVar161._16_8_ -
         (auVar30._16_8_ * auVar90._16_8_ + auVar140._16_8_ * auVar118._16_8_)) * dVar113;
    auVar142._0_16_ = auVar137;
    dVar127 = auVar44._24_8_;
    auVar142._24_8_ =
         (auVar166._24_8_ * auVar161._24_8_ -
         (auVar30._24_8_ * auVar90._24_8_ + auVar140._24_8_ * auVar118._24_8_)) * dVar127;
    auVar40 = vshufpd_avx(auVar137,auVar137,1);
    auVar145 = auVar142._16_16_;
    auVar155 = vshufpd_avx(auVar145,auVar145,1);
    auVar130._0_8_ =
         (auVar72._16_8_ * 0.0 - (-(auVar48._16_8_ * _DAT_150aa8e90) + auVar47._16_8_)) * dVar113;
    auVar130._8_8_ =
         (auVar72._24_8_ * 0.0 - (-(auVar48._24_8_ * _UNK_150aa8e98) + auVar47._24_8_)) * dVar127;
    auVar41 = vshufpd_avx(auVar130,auVar130,1);
    auVar55._0_8_ =
         (auVar89._0_8_ * 0.0 - (auVar167._0_8_ * auVar170._0_8_ - auVar149._0_8_ * auVar169._0_8_))
         * auVar44._0_8_;
    auVar55._8_8_ =
         (auVar89._8_8_ * 0.0 - (auVar167._8_8_ * auVar170._0_8_ - auVar149._8_8_ * auVar169._8_8_))
         * auVar44._8_8_;
    auVar64._16_8_ =
         (auVar89._16_8_ * 0.0 -
         (auVar167._16_8_ * auVar170._0_8_ - auVar149._16_8_ * auVar169._16_8_)) * dVar113;
    auVar64._0_16_ = auVar55;
    auVar64._24_8_ =
         (auVar89._24_8_ * 0.0 -
         (auVar167._24_8_ * auVar170._0_8_ - auVar149._24_8_ * auVar169._24_8_)) * dVar127;
    auVar29 = vshufpd_avx(auVar55,auVar55,1);
    auVar85 = vshufpd_avx(auVar64._16_16_,auVar64._16_16_,1);
    auVar54 = vshufpd_avx(auVar162._16_16_,auVar162._16_16_,1);
    auVar106 = vshufpd_avx(auVar159,auVar159,1);
    auVar129 = vshufpd_avx(auVar44._16_16_,auVar44._16_16_,1);
    auVar152._8_8_ = 0;
    auVar152._0_8_ =
         (auVar156._0_8_ - (auVar54._0_8_ * 0.0 + auVar106._0_8_ * 0.0)) * auVar129._0_8_;
  }
  auVar29 = vunpcklpd_avx(auVar85,auVar29);
  auVar85 = vunpcklpd_avx(auVar145,auVar137);
  auVar40 = vunpcklpd_avx(auVar155,auVar40);
  dVar113 = param_4[1];
  dVar127 = *param_4;
  dVar128 = param_4[2];
  auVar133._0_8_ =
       param_5 * (auVar29._0_8_ * dVar128 + auVar40._0_8_ * dVar127 + auVar85._0_8_ * dVar113);
  auVar133._8_8_ =
       param_5 * (auVar29._8_8_ * dVar128 + auVar40._8_8_ * dVar127 + auVar85._8_8_ * dVar113);
  auVar133._16_8_ =
       param_5 * (auVar152._0_8_ * dVar128 + auVar41._0_8_ * dVar127 + auVar130._0_8_ * dVar113);
  auVar136._24_8_ =
       param_5 * (auVar152._8_8_ * dVar128 + auVar41._8_8_ * dVar127 + auVar130._8_8_ * dVar113);
  auVar136._0_24_ = auVar133;
  auVar44 = vpermpd_avx2(auVar136,0xc9);
  auVar30 = vpermpd_avx2(auVar10,0xc9);
  auVar52._0_8_ = auVar133._0_8_ * auVar30._0_8_ - auVar44._0_8_ * dVar114;
  auVar52._8_8_ = auVar133._8_8_ * auVar30._8_8_ - auVar44._8_8_ * dVar126;
  auVar52._16_8_ = auVar133._16_8_ * auVar30._16_8_ - auVar44._16_8_ * auVar10._16_8_;
  auVar52._24_8_ = auVar136._24_8_ * auVar30._24_8_ - auVar44._24_8_ * auVar10._24_8_;
  auVar16._8_8_ = dVar112;
  auVar16._0_8_ = dVar112;
  auVar15._16_8_ = dVar112;
  auVar15._0_16_ = auVar16;
  auVar15._24_8_ = dVar112;
  auVar29 = vmovhpd_avx(auVar16,*(undefined8 *)(*pauVar3 + 8));
  auVar44 = vblendpd_avx(auVar15,ZEXT1632(auVar29),3);
  uVar9 = *(undefined8 *)pauVar3[1];
  auVar81._8_8_ = uVar9;
  auVar81._0_8_ = uVar9;
  auVar81._16_8_ = uVar9;
  auVar81._24_8_ = uVar9;
  auVar44 = vblendpd_avx(auVar44,auVar81,4);
  auVar161 = vpermpd_avx2(auVar52,0x55);
  auVar29 = vunpcklpd_avx(auVar168,auVar165);
  auVar72 = vpermpd_avx2(auVar52,0xaa);
  auVar40 = vunpcklpd_avx(auVar95,auVar70);
  auVar30 = vblendpd_avx(auVar98,ZEXT1632(auVar40),3);
  auVar82._8_8_ = uVar8;
  auVar82._0_8_ = uVar8;
  auVar82._16_8_ = uVar8;
  auVar82._24_8_ = uVar8;
  auVar30 = vblendpd_avx(auVar30,auVar82,4);
  auVar80._0_8_ =
       auVar30._0_8_ * auVar52._0_8_ +
       auVar44._0_8_ * auVar161._0_8_ + auVar72._0_8_ * auVar29._0_8_;
  auVar80._8_8_ =
       auVar30._8_8_ * auVar52._0_8_ +
       auVar44._8_8_ * auVar161._8_8_ + auVar72._8_8_ * auVar29._8_8_;
  auVar80._16_8_ =
       auVar30._16_8_ * auVar52._0_8_ +
       auVar44._16_8_ * auVar161._16_8_ + auVar72._16_8_ * *(double *)pauVar3[3];
  auVar80._24_8_ =
       auVar30._24_8_ * auVar52._0_8_ + auVar44._24_8_ * auVar161._24_8_ + auVar72._24_8_ * 0.0;
  auVar39._0_8_ = -(auVar133._0_8_ * dVar105) + auVar42._0_8_;
  auVar39._8_8_ = -(auVar133._8_8_ * dVar105) + auVar42._8_8_;
  auVar39._16_8_ = -(auVar133._16_8_ * dVar105) + dVar115;
  auVar39._24_8_ = -(auVar136._24_8_ * dVar105) + 0.0;
LAB_1409ec136:
  auVar132 = auVar133._0_16_;
  pauVar2[7] = auVar39._0_16_;
  uVar8 = vmovlpd_avx(auVar39._16_16_);
  *(undefined8 *)pauVar2[8] = uVar8;
  dVar25 = _UNK_150b54438;
  dVar24 = _UNK_150b54430;
  dVar23 = _UNK_150b54428;
  dVar22 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar21 = _UNK_150b54418;
  dVar20 = _UNK_150b54410;
  dVar19 = _UNK_150b54408;
  dVar18 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar17 = _UNK_15076c6f8;
  dVar151 = ___xmm_bff00000000000003ff0000000000000;
  lVar28 = lVar27 * 0x20;
  pdVar4 = (double *)(param_1 + 0x1a0 + lVar28);
  dVar115 = auVar80._0_8_;
  auVar56._8_8_ = 0;
  auVar56._0_8_ = *(ulonglong *)(param_1 + 0x1b8 + lVar28);
  auVar42 = vmovhpd_avx(auVar56,*(undefined8 *)(param_1 + 0x1b0 + lVar28));
  auVar57._8_8_ = 0;
  auVar57._0_8_ = *(ulonglong *)(param_1 + 0x1a8 + lVar28);
  auVar29 = vmovhpd_avx(auVar57,*(undefined8 *)(param_1 + 0x1a0 + lVar28));
  auVar44 = vpermpd_avx2(auVar80,0x55);
  pdVar5 = (double *)(param_1 + 0x1b0 + lVar28);
  pdVar6 = (double *)(param_1 + 0x1a0 + lVar28);
  auVar30 = vpermpd_avx2(auVar80,0xaa);
  dVar105 = (___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
             auVar30._0_8_ * auVar29._0_8_ +
            ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
            *pdVar5 * auVar44._0_8_ +
            *pdVar4 * 0.0 + dVar115 * auVar42._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
            __real_3fe0000000000000 + *pdVar4;
  dVar112 = (_UNK_150b54428 * auVar30._8_8_ * auVar29._8_8_ +
            _UNK_150b54408 * pdVar5[1] * auVar44._8_8_ +
            pdVar4[1] * 0.0 + dVar115 * auVar42._8_8_ * _UNK_15076c6f8) * __real_3fe0000000000000 +
            pdVar4[1];
  dVar113 = (_UNK_150b54430 * auVar30._16_8_ * auVar42._0_8_ +
            _UNK_150b54410 * *pdVar6 * auVar44._16_8_ +
            pdVar4[2] * 0.0 + dVar115 * auVar29._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
            __real_3fe0000000000000 + pdVar4[2];
  dVar114 = (_UNK_150b54438 * auVar30._24_8_ * auVar42._8_8_ +
            _UNK_150b54418 * pdVar6[1] * auVar44._24_8_ +
            pdVar4[3] * 0.0 + dVar115 * auVar29._8_8_ * _UNK_15076c6f8) * __real_3fe0000000000000 +
            pdVar4[3];
  auVar86._0_8_ = dVar105 * dVar105 + dVar113 * dVar113;
  auVar86._8_8_ = dVar112 * dVar112 + dVar114 * dVar114;
  auVar42 = vshufpd_avx(auVar86,auVar86,1);
  dVar115 = auVar86._0_8_ + auVar42._0_8_;
  auVar96._8_8_ = 0;
  auVar96._0_8_ = __real_3e45798ee2308c3a;
  auVar87._8_8_ = 0;
  auVar87._0_8_ = dVar115;
  auVar42 = vcmpsd_avx(auVar96,auVar87,6);
  uVar94 = ~auVar42._0_8_ & __real_ffffffffffffffff;
  auVar88._8_8_ = 0;
  auVar88._0_8_ = __real_3ff0000000000000;
  dVar115 = __real_3ff0000000000000 / SQRT(dVar115);
  uVar102 = ~uVar94 & _UNK_150b54548;
  uVar103 = ~uVar94 & _UNK_150b54550;
  uVar104 = ~uVar94 & _UNK_150b54558;
  puVar7 = (ulonglong *)(param_1 + 0x1a0 + lVar28);
  *puVar7 = (ulonglong)(dVar105 * dVar115) & uVar94 |
            ~uVar94 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
  puVar7[1] = (ulonglong)(dVar112 * dVar115) & uVar94 | uVar102;
  puVar7 = (ulonglong *)(param_1 + 0x1b0 + lVar28);
  *puVar7 = (ulonglong)(dVar113 * dVar115) & uVar94 | uVar103;
  puVar7[1] = (ulonglong)(dVar114 * dVar115) & uVar94 | uVar104;
  auVar97._0_8_ =
       *(double *)(param_1 + 0x1c0) * *(double *)(param_1 + 0x1a0) +
       *(double *)(param_1 + 0x1d0) * *(double *)(param_1 + 0x1b0);
  auVar97._8_8_ =
       *(double *)(param_1 + 0x1c8) * *(double *)(param_1 + 0x1a8) +
       *(double *)(param_1 + 0x1d8) * *(double *)(param_1 + 0x1b8);
  auVar42 = vshufpd_avx(auVar97,auVar97,1);
  auVar107._8_8_ = 0;
  auVar107._0_8_ = auVar97._0_8_ + auVar42._0_8_;
  auVar42 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar107,2);
  auVar108._8_8_ = 0;
  auVar108._0_8_ = __real_bff0000000000000;
  auVar42 = vblendvpd_avx(auVar108,auVar88,auVar42);
  dVar115 = auVar42._0_8_;
  *(double *)(param_1 + 0x1c0) = dVar115 * *(double *)(param_1 + 0x1c0);
  *(double *)(param_1 + 0x1c8) = dVar115 * *(double *)(param_1 + 0x1c8);
  *(double *)(param_1 + 0x1d0) = dVar115 * *(double *)(param_1 + 0x1d0);
  *(double *)(param_1 + 0x1d8) = dVar115 * *(double *)(param_1 + 0x1d8);
  lVar26 = lVar27 * 0x60;
  auVar116._8_8_ = 0;
  auVar116._0_8_ = *(ulonglong *)(param_1 + 0x20 + lVar26);
  uVar8 = *(undefined8 *)(param_1 + 0x38 + lVar26);
  auVar122._8_8_ = uVar8;
  auVar122._0_8_ = uVar8;
  auVar124._16_8_ = uVar8;
  auVar124._0_16_ = auVar122;
  auVar124._24_8_ = uVar8;
  auVar85 = vunpcklpd_avx(auVar116,auVar122);
  auVar42 = *(undefined1 (*) [16])(param_1 + 0x20 + lVar26);
  auVar29 = *(undefined1 (*) [16])(param_1 + 0x28 + lVar26);
  dVar115 = *(double *)(param_1 + 0x1b0 + lVar28);
  auVar40 = *(undefined1 (*) [16])(param_1 + 0x1a0 + lVar28);
  auVar41 = *(undefined1 (*) [16])(param_1 + 0x1a8 + lVar28);
  auVar150._16_8_ = dVar115;
  auVar150._0_16_ = auVar40;
  auVar150._24_8_ = 0;
  dVar105 = *(double *)(param_1 + 0x1b8 + lVar28);
  auVar158._8_8_ = dVar105;
  auVar158._0_8_ = dVar105;
  auVar158._16_8_ = dVar105;
  auVar158._24_8_ = dVar105;
  dVar112 = *(double *)(param_1 + 0x1a0 + lVar28);
  auVar164._16_8_ = dVar112;
  auVar164._0_16_ = auVar41;
  auVar164._24_8_ = 0;
  dVar113 = *(double *)(param_1 + 0x30 + lVar26);
  auVar144._16_8_ = dVar113;
  auVar144._0_16_ = auVar42;
  auVar144._24_8_ = 0;
  auVar44 = vblendpd_avx(auVar164,auVar158,8);
  auVar30 = vblendpd_avx(auVar144,auVar124,8);
  auVar161 = vblendpd_avx(auVar150,auVar158,8);
  dVar114 = auVar29._0_8_ * auVar161._0_8_ - auVar30._0_8_ * auVar44._0_8_;
  dVar126 = auVar29._8_8_ * auVar161._8_8_ - auVar30._8_8_ * auVar44._8_8_;
  dVar127 = auVar85._0_8_ * auVar161._16_8_ - auVar30._16_8_ * auVar44._16_8_;
  dVar128 = auVar85._8_8_ * auVar161._24_8_ - auVar30._24_8_ * auVar44._24_8_;
  auVar120._0_8_ = dVar114 + dVar114;
  auVar120._8_8_ = dVar126 + dVar126;
  auVar120._16_8_ = dVar127 + dVar127;
  auVar120._24_8_ = dVar128 + dVar128;
  auVar44 = vpermpd_avx2(auVar120,0xc9);
  auVar30 = vpermpd_avx2(auVar120,0xd2);
  auVar125._0_8_ = auVar40._0_8_ * auVar30._0_8_ - auVar41._0_8_ * auVar44._0_8_;
  auVar125._8_8_ = auVar40._8_8_ * auVar30._8_8_ - auVar41._8_8_ * auVar44._8_8_;
  auVar125._16_8_ = dVar115 * auVar30._16_8_ - dVar112 * auVar44._16_8_;
  auVar125._24_8_ = auVar30._24_8_ * 0.0 - auVar44._24_8_ * 0.0;
  auVar30 = vpermpd_avx2(auVar125,0xc9);
  auVar117._0_8_ = *(double *)pauVar2[7] + auVar44._0_8_ * dVar105 + auVar42._0_8_ + auVar30._0_8_;
  auVar117._8_8_ =
       *(double *)(pauVar2[7] + 8) + auVar44._8_8_ * dVar105 + auVar42._8_8_ + auVar30._8_8_;
  auVar121._16_8_ = *(double *)pauVar2[8] + auVar44._16_8_ * dVar105 + dVar113 + auVar30._16_8_;
  auVar121._0_16_ = auVar117;
  auVar121._24_8_ = auVar44._24_8_ * dVar105 + 0.0 + auVar30._24_8_ + 0.0;
  *pauVar2 = auVar117;
  uVar8 = vmovlpd_avx(auVar121._16_16_);
  *(undefined8 *)pauVar2[1] = uVar8;
  dVar115 = *(double *)(param_1 + 0x1b8 + lVar28);
  dVar105 = *(double *)(param_1 + 0x1a0 + lVar28);
  auVar139._8_8_ = 0;
  auVar139._0_8_ = *(ulonglong *)(param_1 + 0x18 + lVar26);
  auVar42 = vmovhpd_avx(auVar139,*(undefined8 *)(param_1 + 0x10 + lVar26));
  auVar148._8_8_ = 0;
  auVar148._0_8_ = *(ulonglong *)(param_1 + 8 + lVar26);
  auVar29 = vmovhpd_avx(auVar148,*(undefined8 *)(param_1 + lVar26));
  pauVar1 = (undefined1 (*) [24])(param_1 + lVar26);
  dVar126 = *(double *)(*pauVar1 + 8);
  auVar11 = *pauVar1;
  dVar114 = *(double *)pauVar1[1];
  dVar112 = *(double *)(param_1 + 0x1a8 + lVar28);
  pdVar4 = (double *)(param_1 + 0x10 + lVar26);
  dVar127 = pdVar4[1];
  dVar128 = *(double *)(param_1 + lVar26);
  dVar146 = ((double *)(param_1 + lVar26))[1];
  dVar113 = *(double *)(param_1 + 0x1b0 + lVar28);
  pdVar5 = (double *)(param_1 + 0x130 + lVar28);
  *pdVar5 = dVar22 * auVar29._0_8_ * dVar113 +
            dVar18 * *pdVar4 * dVar112 +
            dVar115 * *(double *)*pauVar1 + dVar105 * auVar42._0_8_ * dVar151;
  pdVar5[1] = dVar23 * auVar29._8_8_ * dVar113 +
              dVar19 * dVar127 * dVar112 + dVar115 * dVar126 + dVar105 * auVar42._8_8_ * dVar17;
  pdVar5[2] = dVar24 * auVar42._0_8_ * dVar113 +
              dVar20 * dVar128 * dVar112 +
              dVar115 * auVar11._16_8_ + dVar105 * auVar29._0_8_ * dVar151;
  pdVar5[3] = dVar25 * auVar42._8_8_ * dVar113 +
              dVar21 * dVar146 * dVar112 + dVar115 * dVar114 + dVar105 * auVar29._8_8_ * dVar17;
  auVar58._0_8_ =
       *(double *)(param_1 + 0x150) * *(double *)(param_1 + 0x130) +
       *(double *)(param_1 + 0x160) * *(double *)(param_1 + 0x140);
  auVar58._8_8_ =
       *(double *)(param_1 + 0x158) * *(double *)(param_1 + 0x138) +
       *(double *)(param_1 + 0x168) * *(double *)(param_1 + 0x148);
  auVar42 = vshufpd_avx(auVar58,auVar58,1);
  auVar59._8_8_ = 0;
  auVar59._0_8_ = auVar58._0_8_ + auVar42._0_8_;
  auVar42 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar59,2);
  auVar42 = vblendvpd_avx(auVar108,auVar88,auVar42);
  dVar115 = auVar42._0_8_;
  *(double *)(param_1 + 0x150) = *(double *)(param_1 + 0x150) * dVar115;
  *(double *)(param_1 + 0x158) = *(double *)(param_1 + 0x158) * dVar115;
  *(double *)(param_1 + 0x160) = *(double *)(param_1 + 0x160) * dVar115;
  *(double *)(param_1 + 0x168) = *(double *)(param_1 + 0x168) * dVar115;
  dVar115 = *(double *)(param_1 + 0x1a8 + lVar28);
  auVar42._8_8_ = dVar115;
  auVar42._0_8_ = dVar115;
  dVar105 = *(double *)(param_1 + 0x1a0 + lVar28);
  auVar60._8_8_ = dVar105;
  auVar60._0_8_ = dVar105;
  auVar29 = vunpcklpd_avx(auVar60,auVar42);
  auVar42 = *(undefined1 (*) [16])(param_1 + 0x1b0 + lVar28);
  dVar114 = auVar29._0_8_ + auVar29._0_8_;
  dVar126 = auVar29._8_8_ + auVar29._8_8_;
  dVar112 = auVar42._0_8_;
  dVar113 = auVar42._8_8_;
  dVar127 = dVar112 + dVar112;
  dVar113 = dVar113 + dVar113;
  auVar99._0_8_ = dVar105 * dVar114;
  auVar99._8_8_ = dVar105 * dVar126;
  auVar99._16_8_ = dVar105 * dVar127;
  auVar99._24_8_ = dVar105 * dVar113;
  auVar109._0_8_ = dVar115 * dVar114;
  auVar109._8_8_ = dVar115 * dVar126;
  auVar110._16_8_ = dVar115 * dVar127;
  auVar110._0_16_ = auVar109;
  auVar110._24_8_ = dVar115 * dVar113;
  dVar115 = *(double *)(param_1 + 0x1b8 + lVar28);
  dVar105 = (dVar112 + dVar112) * *(double *)(param_1 + 0x1b0 + lVar28);
  auVar67._0_8_ = dVar114 * dVar115;
  auVar67._8_8_ = dVar126 * dVar115;
  auVar67._16_8_ = dVar127 * dVar115;
  auVar67._24_8_ = dVar113 * dVar115;
  auVar44 = vperm2f128_avx(auVar110,auVar99,0x21);
  auVar44 = vshufpd_avx(auVar44,ZEXT1632(auVar99._16_16_),4);
  auVar43._0_8_ = auVar67._0_8_ + auVar44._0_8_;
  auVar43._8_8_ = auVar67._8_8_ + auVar44._8_8_;
  auVar53._16_8_ = auVar67._16_8_ + auVar44._16_8_;
  auVar53._0_16_ = auVar43;
  auVar53._24_8_ = auVar67._24_8_ + auVar44._24_8_;
  auVar161 = vsubpd_avx(auVar44,auVar67);
  auVar42 = vshufpd_avx(auVar109,auVar109,1);
  auVar100._8_8_ = auVar99._0_8_;
  auVar100._0_8_ = auVar99._0_8_;
  auVar100._16_8_ = auVar99._0_8_;
  auVar100._24_8_ = auVar99._0_8_;
  auVar44 = vblendpd_avx(auVar100,ZEXT1632(auVar42),1);
  auVar30 = vpermpd_avx2(auVar110,0x55);
  auVar30 = vblendpd_avx(ZEXT1632(CONCAT88(dVar105,dVar105)),auVar30,0xc);
  auVar83._0_8_ = auVar44._0_8_ + auVar30._0_8_;
  auVar83._8_8_ = auVar44._8_8_ + auVar30._8_8_;
  auVar83._16_8_ = auVar44._16_8_ + auVar30._16_8_;
  auVar83._24_8_ = auVar44._24_8_ + auVar30._24_8_;
  auVar92._8_8_ = __real_3ff0000000000000;
  auVar92._0_8_ = __real_3ff0000000000000;
  auVar92._16_8_ = __real_3ff0000000000000;
  auVar92._24_8_ = __real_3ff0000000000000;
  auVar30 = vsubpd_avx(auVar92,auVar83);
  dVar112 = auVar30._0_8_;
  dVar115 = *(double *)(param_1 + 0xc0 + lVar27 * 0x18);
  dVar105 = *(double *)(param_1 + 0xd0 + lVar27 * 0x18);
  auVar44 = vpermpd_avx2(auVar161,0xaa);
  auVar42 = vmovhpd_avx(ZEXT816(0) << 0x40,*(undefined8 *)(param_1 + 200 + lVar27 * 0x18));
  dVar113 = auVar42._0_8_;
  dVar114 = auVar42._8_8_;
  auVar72 = vpermpd_avx2(auVar53,0x55);
  auVar93._0_8_ = auVar72._0_8_ * 0.0 + dVar113 * auVar44._0_8_ + dVar115 * dVar112;
  auVar93._8_8_ = auVar72._8_8_ * 0.0 + dVar114 * auVar44._8_8_ + dVar112 * 0.0;
  auVar93._16_8_ = dVar105 * auVar72._16_8_ + auVar44._16_8_ * 0.0 + dVar112 * 0.0;
  auVar93._24_8_ = auVar72._24_8_ * 0.0 + auVar44._24_8_ * 0.0 + dVar112 * 0.0;
  auVar44 = vpermpd_avx2(auVar53,0xaa);
  auVar72 = vpermpd_avx2(auVar30,0x55);
  dVar112 = auVar161._0_8_;
  auVar111._0_8_ = dVar112 * 0.0 + dVar115 * auVar44._0_8_ + dVar113 * auVar72._0_8_;
  auVar111._8_8_ = dVar112 * 0.0 + auVar44._8_8_ * 0.0 + dVar114 * auVar72._8_8_;
  auVar111._16_8_ = dVar105 * dVar112 + auVar44._16_8_ * 0.0 + auVar72._16_8_ * 0.0;
  auVar111._24_8_ = dVar112 * 0.0 + auVar44._24_8_ * 0.0 + auVar72._24_8_ * 0.0;
  auVar44 = vpermpd_avx2(auVar161,0x55);
  auVar72 = vpermpd_avx2(auVar30,0xaa);
  auVar101._0_8_ = auVar72._0_8_ * 0.0 + auVar44._0_8_ * dVar115 + dVar113 * auVar43._0_8_;
  auVar101._8_8_ = auVar72._8_8_ * 0.0 + auVar44._8_8_ * 0.0 + dVar114 * auVar43._0_8_;
  auVar101._16_8_ = dVar105 * auVar72._16_8_ + auVar44._16_8_ * 0.0 + auVar43._0_8_ * 0.0;
  auVar101._24_8_ = auVar72._24_8_ * 0.0 + auVar44._24_8_ * 0.0 + auVar43._0_8_ * 0.0;
  auVar42 = vunpcklpd_avx(auVar30._0_16_,auVar53._16_16_);
  auVar44 = vblendpd_avx(ZEXT1632(auVar42),auVar44,0xc);
  auVar72 = vpermpd_avx2(auVar93,0x55);
  auVar42 = vblendpd_avx(auVar30._0_16_,auVar161._16_16_,1);
  dVar146 = auVar42._0_8_;
  dVar151 = auVar42._8_8_;
  dVar114 = auVar44._0_8_;
  dVar126 = auVar44._8_8_;
  dVar127 = auVar44._16_8_;
  dVar128 = auVar44._24_8_;
  auVar89 = vpermpd_avx2(auVar111,0x55);
  auVar167 = vpermpd_avx2(auVar101,0x55);
  auVar42 = vshufpd_avx(auVar43,auVar161._0_16_,1);
  auVar44 = vblendpd_avx(auVar30,ZEXT1632(auVar42),3);
  auVar30 = vpermpd_avx2(auVar93,0xaa);
  dVar115 = auVar44._0_8_;
  auVar61._0_8_ = dVar115 * auVar30._0_8_ + dVar114 * auVar93._0_8_ + dVar146 * auVar72._0_8_;
  dVar105 = auVar44._8_8_;
  auVar61._8_8_ = dVar105 * auVar30._8_8_ + dVar126 * auVar93._0_8_ + dVar151 * auVar72._8_8_;
  dVar112 = auVar44._16_8_;
  auVar68._16_8_ =
       dVar112 * auVar30._16_8_ + dVar127 * auVar93._0_8_ + auVar43._0_8_ * auVar72._16_8_;
  auVar68._0_16_ = auVar61;
  dVar113 = auVar44._24_8_;
  auVar68._24_8_ =
       dVar113 * auVar30._24_8_ + dVar128 * auVar93._0_8_ + auVar43._8_8_ * auVar72._24_8_;
  auVar44 = vpermpd_avx2(auVar111,0xaa);
  *pauVar3 = auVar61;
  auVar71._0_8_ = dVar115 * auVar44._0_8_ + dVar114 * auVar111._0_8_ + dVar146 * auVar89._0_8_;
  auVar71._8_8_ = dVar105 * auVar44._8_8_ + dVar126 * auVar111._0_8_ + dVar151 * auVar89._8_8_;
  auVar84._16_8_ =
       dVar112 * auVar44._16_8_ + dVar127 * auVar111._0_8_ + auVar43._0_8_ * auVar89._16_8_;
  auVar84._0_16_ = auVar71;
  auVar84._24_8_ =
       dVar113 * auVar44._24_8_ + dVar128 * auVar111._0_8_ + auVar43._8_8_ * auVar89._24_8_;
  uVar8 = vmovlpd_avx(auVar68._16_16_);
  *(undefined8 *)pauVar3[1] = uVar8;
  auVar44 = vpermpd_avx2(auVar101,0xaa);
  *(undefined8 *)(pauVar3[1] + 8) = 0;
  pauVar3[2] = auVar71;
  auVar62._0_8_ = dVar115 * auVar44._0_8_ + dVar114 * auVar101._0_8_ + dVar146 * auVar167._0_8_;
  auVar62._8_8_ = dVar105 * auVar44._8_8_ + dVar126 * auVar101._0_8_ + dVar151 * auVar167._8_8_;
  auVar69._16_8_ =
       dVar112 * auVar44._16_8_ + dVar127 * auVar101._0_8_ + auVar43._0_8_ * auVar167._16_8_;
  auVar69._0_16_ = auVar62;
  auVar69._24_8_ =
       dVar113 * auVar44._24_8_ + dVar128 * auVar101._0_8_ + auVar43._8_8_ * auVar167._24_8_;
  uVar8 = vmovlpd_avx(auVar84._16_16_);
  *(undefined8 *)pauVar3[3] = uVar8;
  *(undefined8 *)(pauVar3[3] + 8) = 0;
  pauVar3[4] = auVar62;
  uVar8 = vmovlpd_avx(auVar69._16_16_);
  *(undefined8 *)pauVar3[5] = uVar8;
  *(undefined8 *)(pauVar3[5] + 8) = 0;
  *(undefined8 *)pauVar3[6] = 0;
  *(undefined8 *)(pauVar3[6] + 8) = 0;
  *(undefined8 *)pauVar3[7] = 0;
  *(undefined8 *)(pauVar3[7] + 8) = 0x3ff0000000000000;
  dVar115 = auVar133._16_8_;
  if (param_2 == 0) {
    auVar42 = vshufpd_avx(auVar132,auVar132,1);
  }
  else {
    auVar132._0_8_ = auVar133._0_8_ ^ (ulonglong)__real_8000000000000000;
    auVar132._8_8_ = auVar133._8_8_ ^ (ulonglong)__real_8000000000000000;
    dVar115 = (double)((ulonglong)dVar115 ^ (ulonglong)__real_8000000000000000);
    auVar42 = vshufps_avx(auVar132,auVar132,0x4e);
  }
  auVar42 = vunpcklpd_avx(auVar132,auVar42);
  *(double *)(param_1 + 0x420) = auVar42._0_8_ + *(double *)(param_1 + 0x420);
  *(double *)(param_1 + 0x428) = auVar42._8_8_ + *(double *)(param_1 + 0x428);
  *(double *)(param_1 + 0x430) = dVar115 + *(double *)(param_1 + 0x430);
  return;
}

// ApplyPointPositionConstraintDD___un_3C_s_5B_unFPBDJointSolver_5D__3E_REFs_5B__c_unFVector_5D_Cund_avx2 @ 1409ec770

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPointPositionConstraintDD___un_3C_s_5B_unFPBDJointSolver_5D__3E_REFs_5B__c_unFVector_5D_Cund_avx2
               (undefined1 (*param_1) [24],double *param_2,double param_3,undefined1 (*param_4) [32]
               )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [24];
  undefined1 auVar5 [24];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [32];
  undefined1 auVar11 [16];
  undefined1 auVar12 [32];
  undefined1 auVar13 [16];
  undefined1 auVar14 [32];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar15 [16];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar16 [16];
  undefined1 auVar27 [32];
  double dVar45;
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar31 [32];
  undefined1 auVar48 [16];
  undefined1 auVar33 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  double dVar46;
  double dVar49;
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  double dVar47;
  undefined1 in_ZMM0 [64];
  double dVar50;
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
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  double dVar114;
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
  undefined1 auVar127 [32];
  undefined1 auVar128 [32];
  undefined1 auVar129 [32];
  undefined1 auVar130 [32];
  undefined1 auVar131 [32];
  undefined1 auVar132 [32];
  undefined1 auVar133 [32];
  undefined1 auVar134 [32];
  undefined1 auVar135 [32];
  undefined1 auVar136 [32];
  undefined1 auVar139 [32];
  undefined1 auVar140 [32];
  undefined1 auVar141 [32];
  undefined1 auVar142 [32];
  undefined1 auVar143 [32];
  undefined1 auVar145 [32];
  undefined1 auVar146 [32];
  undefined1 auVar147 [32];
  ulonglong uVar149;
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  double dVar181;
  undefined1 auVar165 [32];
  undefined1 auVar166 [32];
  undefined1 auVar167 [32];
  undefined1 auVar168 [32];
  undefined1 auVar169 [32];
  undefined1 auVar170 [32];
  undefined1 auVar171 [32];
  undefined1 auVar172 [32];
  undefined1 auVar173 [32];
  undefined1 auVar174 [32];
  undefined1 auVar175 [32];
  undefined1 auVar177 [32];
  undefined1 auVar178 [32];
  undefined1 auVar179 [32];
  double dVar182;
  undefined1 auVar180 [32];
  double dVar183;
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  double dVar215;
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  double dVar216;
  undefined1 auVar199 [32];
  undefined1 auVar200 [32];
  undefined1 auVar202 [32];
  undefined1 auVar203 [32];
  double dVar217;
  undefined1 auVar206 [32];
  undefined1 auVar207 [32];
  undefined1 auVar211 [32];
  undefined1 auVar213 [32];
  double dVar218;
  double dVar219;
  undefined1 auVar220 [16];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 auVar224 [16];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [16];
  undefined1 auVar228 [16];
  undefined1 auVar229 [16];
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  undefined1 auVar233 [16];
  undefined1 auVar234 [16];
  double dVar247;
  undefined1 auVar237 [32];
  undefined1 auVar238 [32];
  undefined1 auVar239 [32];
  undefined1 auVar240 [32];
  undefined1 auVar241 [32];
  undefined1 auVar242 [32];
  undefined1 auVar245 [32];
  undefined1 auVar248 [16];
  undefined1 auVar249 [16];
  undefined1 auVar250 [16];
  undefined1 auVar251 [16];
  undefined1 auVar252 [16];
  undefined1 auVar253 [16];
  undefined1 auVar254 [16];
  undefined1 auVar255 [16];
  undefined1 auVar256 [16];
  undefined1 auVar257 [16];
  undefined1 auVar258 [16];
  undefined1 auVar259 [16];
  undefined1 auVar260 [16];
  undefined1 auVar262 [32];
  undefined1 auVar264 [32];
  undefined1 auVar265 [32];
  undefined1 auVar266 [32];
  undefined1 auVar267 [32];
  undefined1 auVar269 [32];
  undefined1 auVar271 [32];
  undefined1 auVar273 [32];
  undefined1 auVar274 [32];
  undefined1 auVar275 [32];
  undefined1 auVar276 [32];
  double dVar277;
  double dVar278;
  undefined1 auVar279 [16];
  undefined1 auVar280 [16];
  undefined1 auVar281 [16];
  double dVar288;
  undefined1 auVar282 [16];
  double dVar289;
  undefined1 auVar283 [32];
  double dVar287;
  undefined1 auVar284 [32];
  undefined1 auVar286 [32];
  undefined1 auVar290 [16];
  undefined1 auVar291 [16];
  undefined1 auVar292 [16];
  undefined1 auVar293 [16];
  undefined1 auVar294 [16];
  undefined1 auVar295 [16];
  undefined1 auVar296 [16];
  undefined1 auVar298 [32];
  undefined1 auVar300 [32];
  double dVar308;
  undefined1 auVar301 [32];
  undefined1 auVar302 [32];
  undefined1 auVar303 [32];
  undefined1 auVar305 [32];
  double dVar309;
  undefined1 auVar310 [16];
  undefined1 auVar311 [16];
  undefined1 auVar312 [16];
  undefined1 auVar313 [16];
  undefined1 auVar314 [16];
  undefined1 auVar315 [16];
  undefined1 auVar316 [16];
  undefined1 auVar317 [16];
  double dVar328;
  undefined1 auVar319 [32];
  undefined1 auVar320 [32];
  undefined1 auVar322 [32];
  double dVar327;
  undefined1 auVar324 [32];
  undefined1 auVar326 [32];
  undefined1 auVar329 [16];
  undefined1 auVar330 [16];
  undefined1 auVar331 [16];
  undefined1 auVar332 [16];
  undefined1 auVar333 [16];
  undefined1 auVar334 [16];
  undefined1 auVar335 [16];
  undefined1 auVar338 [32];
  undefined1 auVar341 [32];
  undefined1 auVar342 [32];
  undefined1 auVar343 [16];
  undefined1 auVar344 [16];
  undefined1 auVar345 [16];
  undefined1 auVar346 [16];
  undefined1 auVar347 [16];
  undefined1 auVar348 [16];
  undefined1 auVar349 [32];
  undefined1 auVar353 [32];
  undefined1 auVar354 [16];
  undefined1 auVar355 [16];
  undefined1 auVar356 [16];
  undefined1 auVar357 [16];
  undefined1 auVar358 [16];
  undefined1 auVar361 [16];
  undefined1 auVar362 [16];
  undefined1 auVar363 [16];
  undefined1 auVar364 [16];
  undefined1 auVar365 [32];
  undefined1 auVar366 [32];
  undefined1 auVar368 [16];
  undefined1 auVar369 [16];
  undefined1 auVar370 [16];
  undefined1 auVar371 [16];
  undefined1 auVar375 [16];
  undefined1 auVar376 [16];
  undefined1 local_248 [32];
  undefined1 local_168 [32];
  undefined1 local_148 [32];
  undefined1 auVar30 [32];
  undefined1 auVar32 [32];
  undefined1 auVar34 [32];
  undefined1 auVar37 [32];
  undefined1 auVar74 [32];
  undefined1 auVar79 [32];
  undefined1 auVar90 [32];
  undefined1 auVar95 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar107 [32];
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  undefined1 auVar137 [32];
  undefined1 auVar138 [32];
  undefined1 auVar144 [32];
  undefined1 auVar148 [32];
  undefined1 auVar176 [32];
  undefined1 auVar201 [32];
  undefined1 auVar204 [32];
  undefined1 auVar205 [32];
  undefined1 auVar208 [32];
  undefined1 auVar209 [32];
  undefined1 auVar210 [32];
  undefined1 auVar212 [32];
  undefined1 auVar214 [32];
  undefined1 auVar235 [32];
  undefined1 auVar236 [32];
  undefined1 auVar243 [32];
  undefined1 auVar244 [32];
  undefined1 auVar246 [32];
  undefined1 auVar261 [32];
  undefined1 auVar263 [32];
  undefined1 auVar268 [32];
  undefined1 auVar270 [32];
  undefined1 auVar272 [32];
  undefined1 auVar285 [32];
  undefined1 auVar297 [32];
  undefined1 auVar299 [32];
  undefined1 auVar304 [32];
  undefined1 auVar306 [32];
  undefined1 auVar307 [32];
  undefined1 auVar318 [32];
  undefined1 auVar321 [32];
  undefined1 auVar323 [32];
  undefined1 auVar325 [32];
  undefined1 auVar336 [32];
  undefined1 auVar337 [32];
  undefined1 auVar339 [32];
  undefined1 auVar340 [32];
  undefined1 auVar350 [32];
  undefined1 auVar351 [32];
  undefined1 auVar352 [32];
  undefined1 auVar359 [32];
  undefined1 auVar360 [32];
  undefined1 auVar367 [32];
  undefined1 auVar372 [32];
  undefined1 auVar373 [32];
  undefined1 auVar374 [32];
  undefined1 auVar377 [32];
  undefined1 auVar378 [32];
  
  auVar33 = *param_4;
  auVar80 = vpcmpeqd_avx2(in_ZMM0._0_32_,in_ZMM0._0_32_);
  auVar80 = auVar80 & ~auVar33;
  if ((((((((SUB321(auVar80 >> 0x1f,0) & 1) == 0 && (SUB321(auVar80 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar80 >> 0x5f,0) & 1) == 0) && SUB321(auVar80 >> 0x7f,0) == '\0') &&
        (SUB321(auVar80 >> 0x9f,0) & 1) == 0) && SUB321(auVar80 >> 0xbf,0) == '\0') &&
      (SUB321(auVar80 >> 0xdf,0) & 1) == 0) && -1 < auVar80[0x1f]) {
    auVar152._8_8_ = 0;
    auVar152._0_8_ = *(ulonglong *)(param_1[0xb] + 8);
    auVar33._24_8_ = 0;
    auVar33._0_24_ = *(undefined1 (*) [24])(param_1[10] + 0x10);
    auVar186._8_8_ = 0;
    auVar186._0_8_ = *(ulonglong *)param_1[0x10];
    auVar80._24_8_ = 0;
    auVar80._0_24_ = *(undefined1 (*) [24])(param_1[0xf] + 8);
    auVar33 = vsubpd_avx(auVar33,auVar80);
    auVar15 = auVar33._0_16_;
    auVar54 = vshufpd_avx(auVar15,auVar15,1);
    auVar152 = vsubpd_avx(auVar152,auVar186);
    dVar45 = auVar152._0_8_;
    auVar280._0_8_ = (ulonglong)dVar45 ^ (ulonglong)__real_8000000000000000;
    auVar280._8_8_ = auVar152._8_8_ ^ (ulonglong)__real_8000000000000000;
    auVar222._0_8_ = (double)(auVar54._0_8_ ^ (ulonglong)__real_8000000000000000);
    auVar222._8_8_ = (double)(auVar54._8_8_ ^ (ulonglong)__real_8000000000000000);
    auVar81._0_8_ = auVar33._0_8_;
    auVar153._0_8_ = (double)((ulonglong)auVar81._0_8_ ^ (ulonglong)__real_8000000000000000);
    dVar277 = auVar33._8_8_;
    auVar153._8_8_ = (ulonglong)dVar277 ^ (ulonglong)__real_8000000000000000;
    auVar84 = vpermpd_avx2(auVar33,0xaa);
    dVar50 = *(double *)(param_1[0x19] + 8);
    auVar291._8_8_ = dVar50;
    auVar291._0_8_ = dVar50;
    auVar299._16_8_ = dVar50;
    auVar299._0_16_ = auVar291;
    auVar299._24_8_ = dVar50;
    uVar1 = *(undefined8 *)(param_1[0x19] + 0x10);
    auVar250._8_8_ = uVar1;
    auVar250._0_8_ = uVar1;
    auVar263._16_8_ = uVar1;
    auVar263._0_16_ = auVar250;
    auVar263._24_8_ = uVar1;
    auVar19 = vunpcklpd_avx(auVar250,auVar291);
    auVar321 = vpermpd_avx2(auVar33,0x55);
    uVar1 = *(undefined8 *)(param_1[0x1a] + 0x10);
    auVar319._8_8_ = uVar1;
    auVar319._0_8_ = uVar1;
    auVar319._16_8_ = uVar1;
    auVar319._24_8_ = uVar1;
    uVar1 = *(undefined8 *)param_1[0x1b];
    auVar331._8_8_ = uVar1;
    auVar331._0_8_ = uVar1;
    auVar339._16_8_ = uVar1;
    auVar339._0_16_ = auVar331;
    auVar339._24_8_ = uVar1;
    auVar33 = vblendpd_avx(auVar319,auVar339,1);
    auVar186 = vunpcklpd_avx(auVar280,auVar152);
    auVar80 = vblendpd_avx(auVar339,auVar263,4);
    auVar344._8_8_ = *(undefined8 *)(param_1[0x1b] + 8);
    auVar344._0_8_ = *(undefined8 *)(param_1[0x1b] + 8);
    auVar34 = vblendpd_avx(ZEXT1632(auVar344),auVar339,4);
    auVar54 = vshufpd_avx(auVar15,auVar153,1);
    dVar183 = *(double *)param_1[0x18];
    auVar35 = vblendpd_avx(auVar319,auVar299,4);
    auVar250 = vunpcklpd_avx(auVar152,auVar222);
    auVar85 = vblendpd_avx(auVar299,auVar319,1);
    auVar152 = vunpcklpd_avx(auVar344,auVar331);
    auVar133 = vblendpd_avx(ZEXT1632(auVar152),auVar263,4);
    auVar81._8_8_ = auVar81._0_8_;
    auVar81._16_8_ = auVar81._0_8_;
    auVar81._24_8_ = auVar81._0_8_;
    auVar168 = vblendpd_avx(auVar81,ZEXT1632(auVar153),1);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = *(ulonglong *)(param_1[0xc] + 8);
    auVar82._24_8_ = 0;
    auVar82._0_24_ = *(undefined1 (*) [24])(param_1[0xb] + 0x10);
    auVar223._8_8_ = 0;
    auVar223._0_8_ = *(ulonglong *)param_1[0x11];
    auVar200._24_8_ = 0;
    auVar200._0_24_ = *(undefined1 (*) [24])(param_1[0x10] + 8);
    auVar82 = vsubpd_avx(auVar82,auVar200);
    auVar187 = auVar82._0_16_;
    auVar152 = vshufpd_avx(auVar187,auVar187,1);
    auVar15 = vsubpd_avx(auVar15,auVar223);
    dVar181 = auVar15._0_8_;
    auVar48._0_8_ = (ulonglong)dVar181 ^ (ulonglong)__real_8000000000000000;
    auVar48._8_8_ = auVar15._8_8_ ^ (ulonglong)__real_8000000000000000;
    auVar356._0_8_ = (double)(auVar152._0_8_ ^ (ulonglong)__real_8000000000000000);
    auVar356._8_8_ = (double)(auVar152._8_8_ ^ (ulonglong)__real_8000000000000000);
    uVar1 = *(undefined8 *)param_1[0x1f];
    auVar369._8_8_ = uVar1;
    auVar369._0_8_ = uVar1;
    auVar373._16_8_ = uVar1;
    auVar373._0_16_ = auVar369;
    auVar373._24_8_ = uVar1;
    dVar215 = *(double *)(param_1[0x1e] + 0x10);
    auVar376._8_8_ = dVar215;
    auVar376._0_8_ = dVar215;
    auVar378._16_8_ = dVar215;
    auVar378._0_16_ = auVar376;
    auVar378._24_8_ = dVar215;
    uVar1 = *(undefined8 *)(param_1[0x20] + 8);
    auVar345._8_8_ = uVar1;
    auVar345._0_8_ = uVar1;
    auVar351._16_8_ = uVar1;
    auVar351._0_16_ = auVar345;
    auVar351._24_8_ = uVar1;
    auVar320._0_8_ = auVar82._0_8_;
    auVar363._0_8_ = (double)((ulonglong)auVar320._0_8_ ^ (ulonglong)__real_8000000000000000);
    dVar114 = auVar82._8_8_;
    auVar363._8_8_ = (ulonglong)dVar114 ^ (ulonglong)__real_8000000000000000;
    uVar1 = *(undefined8 *)(param_1[0x20] + 0x10);
    auVar16._8_8_ = uVar1;
    auVar16._0_8_ = uVar1;
    auVar319 = vpermpd_avx2(auVar82,0xaa);
    auVar223 = vunpcklpd_avx(auVar369,auVar376);
    auVar339 = vpermpd_avx2(auVar82,0x55);
    uVar2 = *(undefined8 *)param_1[0x20];
    auVar224._8_8_ = uVar2;
    auVar224._0_8_ = uVar2;
    auVar236._16_8_ = uVar2;
    auVar236._0_16_ = auVar224;
    auVar236._24_8_ = uVar2;
    auVar82 = vblendpd_avx(auVar236,auVar351,1);
    auVar48 = vunpcklpd_avx(auVar48,auVar15);
    auVar200 = vblendpd_avx(auVar351,auVar373,4);
    auVar202 = vblendpd_avx(ZEXT1632(auVar16),auVar351,4);
    auVar152 = vshufpd_avx(auVar187,auVar363,1);
    dVar218 = *(double *)(param_1[0x1d] + 8);
    auVar263 = vblendpd_avx(auVar236,auVar378,4);
    auVar16 = vunpcklpd_avx(auVar16,auVar345);
    auVar264 = vblendpd_avx(ZEXT1632(auVar16),auVar373,4);
    auVar299 = vblendpd_avx(auVar378,auVar236,1);
    dVar216 = *(double *)param_1[10];
    auVar83._8_8_ = dVar216;
    auVar83._0_8_ = dVar216;
    auVar83._16_8_ = dVar216;
    auVar83._24_8_ = dVar216;
    auVar187._0_8_ =
         dVar216 + (auVar321._0_8_ * auVar33._0_8_ - auVar84._0_8_ * auVar19._0_8_) * auVar186._0_8_
                   + (auVar321._0_8_ * auVar34._0_8_ - auVar84._0_8_ * auVar80._0_8_) *
                     auVar54._0_8_;
    auVar187._8_8_ =
         (auVar321._8_8_ * auVar33._8_8_ - auVar84._8_8_ * auVar19._8_8_) * auVar186._8_8_ +
         (auVar321._8_8_ * auVar34._8_8_ - auVar84._8_8_ * auVar80._8_8_) * auVar54._8_8_ + 0.0;
    auVar201._16_8_ =
         (auVar321._16_8_ * auVar33._16_8_ - auVar84._16_8_ * dVar50) * auVar222._0_8_ +
         (auVar321._16_8_ * auVar34._16_8_ - auVar84._16_8_ * auVar80._16_8_) * auVar81._0_8_ + 0.0;
    auVar201._0_16_ = auVar187;
    auVar201._24_8_ =
         (auVar321._24_8_ * auVar33._24_8_ - auVar84._24_8_ * dVar50) * auVar222._8_8_ +
         (auVar321._24_8_ * auVar34._24_8_ - auVar84._24_8_ * auVar80._24_8_) * dVar277 + 0.0;
    auVar33 = vpblendd_avx2(auVar83,ZEXT832(0) << 0x40,0xcc);
    auVar84._0_8_ =
         (auVar153._0_8_ * auVar35._0_8_ + dVar45 * dVar183) * auVar250._0_8_ +
         auVar168._0_8_ * (dVar45 * auVar85._0_8_ + auVar153._0_8_ * auVar133._0_8_) + auVar33._0_8_
    ;
    auVar84._8_8_ =
         (auVar153._0_8_ * auVar35._8_8_ + dVar45 * dVar183) * auVar250._8_8_ +
         auVar168._8_8_ * (dVar45 * auVar85._8_8_ + auVar153._0_8_ * auVar133._8_8_) + auVar33._8_8_
    ;
    auVar84._16_8_ =
         (auVar81._0_8_ * auVar35._16_8_ + auVar222._0_8_ * dVar183) * auVar222._0_8_ +
         auVar168._16_8_ * (auVar222._0_8_ * auVar85._16_8_ + auVar81._0_8_ * auVar133._16_8_) +
         auVar33._16_8_;
    auVar84._24_8_ =
         (dVar277 * auVar35._24_8_ + auVar222._8_8_ * dVar183) * auVar222._8_8_ +
         auVar168._24_8_ * (auVar222._8_8_ * auVar85._24_8_ + dVar277 * auVar133._24_8_) +
         auVar33._24_8_;
    dVar50 = *(double *)(param_1[10] + 8);
    auVar133._8_8_ = dVar50;
    auVar133._0_8_ = dVar50;
    auVar133._16_8_ = dVar50;
    auVar133._24_8_ = dVar50;
    auVar19._0_8_ =
         dVar50 + (auVar339._0_8_ * auVar82._0_8_ - auVar319._0_8_ * auVar223._0_8_) * auVar48._0_8_
                  + auVar152._0_8_ *
                    (auVar339._0_8_ * auVar202._0_8_ - auVar319._0_8_ * auVar200._0_8_);
    auVar19._8_8_ =
         (auVar339._8_8_ * auVar82._8_8_ - auVar319._8_8_ * auVar223._8_8_) * auVar48._8_8_ +
         auVar152._8_8_ * (auVar339._8_8_ * auVar202._8_8_ - auVar319._8_8_ * auVar200._8_8_) + 0.0;
    auVar34._16_8_ =
         (auVar339._16_8_ * auVar82._16_8_ - auVar319._16_8_ * dVar215) * auVar356._0_8_ +
         auVar320._0_8_ * (auVar339._16_8_ * auVar202._16_8_ - auVar319._16_8_ * auVar200._16_8_) +
         0.0;
    auVar34._0_16_ = auVar19;
    auVar34._24_8_ =
         (auVar339._24_8_ * auVar82._24_8_ - auVar319._24_8_ * dVar215) * auVar356._8_8_ +
         dVar114 * (auVar339._24_8_ * auVar202._24_8_ - auVar319._24_8_ * auVar200._24_8_) + 0.0;
    auVar54 = vunpcklpd_avx(auVar15,auVar356);
    auVar320._8_8_ = auVar320._0_8_;
    auVar320._16_8_ = auVar320._0_8_;
    auVar320._24_8_ = auVar320._0_8_;
    auVar33 = vblendpd_avx(auVar320,ZEXT1632(auVar363),1);
    auVar80 = vpblendd_avx2(auVar133,ZEXT832(0) << 0x40,0xcc);
    auVar168._0_8_ =
         auVar80._0_8_ +
         (auVar363._0_8_ * auVar263._0_8_ + dVar181 * dVar218) * auVar54._0_8_ +
         auVar33._0_8_ * (dVar181 * auVar299._0_8_ + auVar363._0_8_ * auVar264._0_8_);
    auVar168._8_8_ =
         auVar80._8_8_ +
         (auVar363._0_8_ * auVar263._8_8_ + dVar181 * dVar218) * auVar54._8_8_ +
         auVar33._8_8_ * (dVar181 * auVar299._8_8_ + auVar363._0_8_ * auVar264._8_8_);
    auVar168._16_8_ =
         auVar80._16_8_ +
         (auVar320._0_8_ * auVar263._16_8_ + auVar356._0_8_ * dVar218) * auVar356._0_8_ +
         auVar33._16_8_ * (auVar356._0_8_ * auVar299._16_8_ + auVar320._0_8_ * auVar264._16_8_);
    auVar168._24_8_ =
         auVar80._24_8_ +
         (dVar114 * auVar263._24_8_ + auVar356._8_8_ * dVar218) * auVar356._8_8_ +
         auVar33._24_8_ * (auVar356._8_8_ * auVar299._24_8_ + dVar114 * auVar264._24_8_);
    auVar54 = vshufpd_avx(auVar19,auVar19,1);
    auVar33 = vpermpd_avx2(auVar168,0xd0);
    auVar33 = vblendpd_avx(auVar33,ZEXT1632(auVar54),1);
    auVar54 = vshufpd_avx(auVar187,auVar187,1);
    auVar80 = vpermpd_avx2(auVar84,0xd0);
    auVar80 = vblendpd_avx(auVar80,ZEXT1632(auVar54),1);
    auVar332._0_8_ = auVar187._0_8_ + auVar19._0_8_;
    auVar332._8_8_ = auVar187._8_8_ + auVar19._8_8_;
    auVar340._16_8_ = auVar201._16_8_ + auVar34._16_8_;
    auVar340._0_16_ = auVar332;
    auVar340._24_8_ = auVar201._24_8_ + auVar34._24_8_;
    auVar312._0_8_ = auVar80._0_8_ + auVar33._0_8_;
    auVar312._8_8_ = auVar80._8_8_ + auVar33._8_8_;
    auVar321._16_8_ = auVar80._16_8_ + auVar33._16_8_;
    auVar321._0_16_ = auVar312;
    auVar321._24_8_ = auVar80._24_8_ + auVar33._24_8_;
    auVar33 = vblendpd_avx(auVar168,ZEXT1632(auVar34._16_16_),1);
    auVar80 = vblendpd_avx(auVar84,ZEXT1632(auVar201._16_16_),1);
    auVar54._0_8_ = auVar80._0_8_ + auVar33._0_8_;
    auVar54._8_8_ = auVar80._8_8_ + auVar33._8_8_;
    auVar35._16_8_ = auVar80._16_8_ + auVar33._16_8_;
    auVar35._0_16_ = auVar54;
    auVar35._24_8_ = auVar80._24_8_ + auVar33._24_8_;
    auVar85._8_8_ = __real_0010000000000000;
    auVar85._0_8_ = __real_0010000000000000;
    auVar85._16_8_ = __real_0010000000000000;
    auVar85._24_8_ = __real_0010000000000000;
    auVar33 = vblendpd_avx(auVar340,auVar85,8);
    auVar264._0_8_ = auVar33._0_8_ & __real_7fffffffffffffff;
    auVar264._8_8_ = auVar33._8_8_ & __real_7fffffffffffffff;
    auVar264._16_8_ = auVar33._16_8_ & __real_7fffffffffffffff;
    auVar264._24_8_ = auVar33._24_8_ & __real_7fffffffffffffff;
    auVar202._8_8_ = __real_3e45798ee2308c3a;
    auVar202._0_8_ = __real_3e45798ee2308c3a;
    auVar202._16_8_ = __real_3e45798ee2308c3a;
    auVar202._24_8_ = __real_3e45798ee2308c3a;
    auVar33 = vcmppd_avx(auVar264,auVar202,6);
    auVar80 = ZEXT832(0) << 0x40;
    auVar33 = vpackssdw_avx2(auVar33,auVar80);
    if ((((((((SUB321(auVar33 >> 0x1f,0) & 1) == 0 && (SUB321(auVar33 >> 0x3f,0) & 1) == 0) &&
            (SUB321(auVar33 >> 0x5f,0) & 1) == 0) && SUB321(auVar33 >> 0x7f,0) == '\0') &&
          (SUB321(auVar33 >> 0x9f,0) & 1) == 0) && SUB321(auVar33 >> 0xbf,0) == '\0') &&
        (SUB321(auVar33 >> 0xdf,0) & 1) == 0) && -1 < auVar33[0x1f]) {
      auVar33 = vblendpd_avx(auVar321,auVar85,8);
      auVar265._0_8_ = auVar33._0_8_ & __real_7fffffffffffffff;
      auVar265._8_8_ = auVar33._8_8_ & __real_7fffffffffffffff;
      auVar265._16_8_ = auVar33._16_8_ & __real_7fffffffffffffff;
      auVar265._24_8_ = auVar33._24_8_ & __real_7fffffffffffffff;
      auVar33 = vcmppd_avx(auVar265,auVar202,6);
      auVar33 = vpackssdw_avx2(auVar33,auVar80);
      if ((((((((SUB321(auVar33 >> 0x1f,0) & 1) != 0 || (SUB321(auVar33 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar33 >> 0x5f,0) & 1) != 0) || SUB321(auVar33 >> 0x7f,0) != '\0') ||
            (SUB321(auVar33 >> 0x9f,0) & 1) != 0) || SUB321(auVar33 >> 0xbf,0) != '\0') ||
          (SUB321(auVar33 >> 0xdf,0) & 1) != 0) || auVar33[0x1f] < '\0') goto LAB_1409ed1c4;
      auVar33 = vblendpd_avx(auVar35,auVar85,8);
      auVar86._0_8_ = auVar33._0_8_ & __real_7fffffffffffffff;
      auVar86._8_8_ = auVar33._8_8_ & __real_7fffffffffffffff;
      auVar86._16_8_ = auVar33._16_8_ & __real_7fffffffffffffff;
      auVar86._24_8_ = auVar33._24_8_ & __real_7fffffffffffffff;
      auVar33 = vcmppd_avx(auVar86,auVar202,6);
      auVar33 = vpackssdw_avx2(auVar33,ZEXT832(0) << 0x40);
      if ((((((((SUB321(auVar33 >> 0x1f,0) & 1) != 0 || (SUB321(auVar33 >> 0x3f,0) & 1) != 0) ||
              (SUB321(auVar33 >> 0x5f,0) & 1) != 0) || SUB321(auVar33 >> 0x7f,0) != '\0') ||
            (SUB321(auVar33 >> 0x9f,0) & 1) != 0) || SUB321(auVar33 >> 0xbf,0) != '\0') ||
          (SUB321(auVar33 >> 0xdf,0) & 1) != 0) || auVar33[0x1f] < '\0') goto LAB_1409ed1c4;
LAB_1409edf69:
      auVar15 = ZEXT816(0) << 0x40;
      auVar259._8_8_ = 0;
      auVar259._0_8_ = __real_3ff0000000000000;
      auVar19 = ZEXT816(0);
      auVar370 = ZEXT816(0) << 0x40;
      auVar48 = ZEXT816(0) << 0x40;
      auVar152 = ZEXT816(0) << 0x40;
      auVar54 = ZEXT816(0);
      auVar313 = auVar259;
      auVar251 = auVar259;
    }
    else {
LAB_1409ed1c4:
      auVar33 = vperm2f128_avx(auVar340,auVar35,0x31);
      auVar169._16_16_ = auVar54;
      auVar169._0_16_ = auVar332;
      auVar34 = vunpcklpd_avx(auVar169,auVar33);
      auVar152 = vshufpd_avx(auVar312,auVar312,1);
      auVar7._8_8_ = _UNK_150b54548;
      auVar7._0_8_ = ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
      auVar7._16_8_ = _UNK_150b54550;
      auVar7._24_8_ = _UNK_150b54558;
      auVar33 = vblendpd_avx(ZEXT1632(auVar152),auVar7,0xe);
      auVar152 = vshufpd_avx(auVar332,auVar332,1);
      auVar203._16_16_ = auVar54;
      auVar203._0_16_ = auVar152;
      auVar80 = vshufpd_avx(auVar203,auVar80,4);
      auVar85 = vpermpd_avx2(auVar321,0xe8);
      auVar300._0_8_ = auVar34._0_8_ * auVar33._0_8_ - auVar80._0_8_ * auVar85._0_8_;
      auVar300._8_8_ = auVar34._8_8_ * auVar33._8_8_ - auVar80._8_8_ * auVar85._8_8_;
      auVar300._16_8_ = auVar34._16_8_ * auVar33._16_8_ - auVar80._16_8_ * 0.0;
      auVar300._24_8_ = auVar34._24_8_ * auVar33._24_8_ - auVar80._24_8_ * 0.0;
      auVar170._8_8_ = auVar54._0_8_;
      auVar170._0_8_ = auVar54._0_8_;
      auVar170._16_8_ = auVar35._16_8_;
      auVar170._24_8_ = auVar35._16_8_;
      auVar33 = vblendpd_avx(ZEXT1632(CONCAT88(__real_3ff0000000000000,__real_3ff0000000000000)),
                             auVar170,0xc);
      auVar80 = vperm2f128_avx(auVar35,auVar35,0x28);
      auVar366._0_8_ = auVar33._0_8_ * auVar54._0_8_ + auVar80._0_8_ * __real_8000000000000000;
      auVar366._8_8_ = auVar33._8_8_ * auVar54._8_8_ + auVar80._8_8_ * __real_8000000000000000;
      auVar366._16_8_ = auVar33._16_8_ * 0.0 + auVar80._16_8_ * __real_8000000000000000;
      auVar366._24_8_ = auVar33._24_8_ * 0.0 + auVar80._24_8_ * __real_8000000000000000;
      auVar54 = vshufpd_avx(auVar312,auVar332,1);
      auVar34 = vpermpd_avx2(ZEXT1632(auVar54),0x50);
      auVar80 = vpblendd_avx2(ZEXT832((ulonglong)auVar340._16_8_),auVar321,0x30);
      auVar54 = vshufpd_avx(auVar332,auVar312,1);
      auVar35 = vpermpd_avx2(ZEXT1632(auVar54),0x50);
      auVar33 = vpblendd_avx2(ZEXT832((ulonglong)auVar321._16_8_),auVar340,0x30);
      auVar346._0_8_ = auVar80._0_8_ * auVar34._0_8_ - auVar35._0_8_ * auVar33._0_8_;
      auVar346._8_8_ = auVar80._8_8_ * auVar34._8_8_ - auVar35._8_8_ * auVar33._8_8_;
      auVar352._16_8_ = auVar80._16_8_ * auVar34._16_8_ - auVar35._16_8_ * auVar33._16_8_;
      auVar352._0_16_ = auVar346;
      auVar352._24_8_ = auVar80._24_8_ * auVar34._24_8_ - auVar35._24_8_ * auVar33._24_8_;
      auVar34 = vpermpd_avx2(auVar300,0xff);
      auVar35 = vpermpd_avx2(auVar300,0x55);
      auVar85 = vpermpd_avx2(auVar300,0xaa);
      auVar171._0_8_ = auVar34._0_8_ * auVar300._0_8_ + auVar35._0_8_ * auVar85._0_8_;
      auVar171._8_8_ = auVar34._8_8_ * auVar300._0_8_ + auVar35._8_8_ * auVar85._8_8_;
      auVar171._16_8_ = auVar34._16_8_ * auVar300._0_8_ + auVar35._16_8_ * auVar85._16_8_;
      auVar171._24_8_ = auVar34._24_8_ * auVar300._0_8_ + auVar35._24_8_ * auVar85._24_8_;
      auVar33 = vpermpd_avx2(auVar366,0xd8);
      auVar87._0_8_ = auVar346._0_8_ * auVar33._0_8_;
      auVar87._8_8_ = auVar346._8_8_ * auVar33._8_8_;
      auVar87._16_8_ = auVar352._16_8_ * auVar33._16_8_;
      auVar87._24_8_ = auVar352._24_8_ * auVar33._24_8_;
      auVar33 = vpermpd_avx2(auVar87,0x4e);
      auVar88._0_8_ = auVar87._0_8_ + auVar33._0_8_;
      auVar88._8_8_ = auVar87._8_8_ + auVar33._8_8_;
      auVar88._16_8_ = auVar87._16_8_ + auVar33._16_8_;
      auVar88._24_8_ = auVar87._24_8_ + auVar33._24_8_;
      auVar33 = vpermpd_avx2(auVar88,0x39);
      auVar89._0_8_ = auVar88._0_8_ + auVar33._0_8_;
      auVar89._8_8_ = auVar88._8_8_ + auVar33._8_8_;
      auVar89._16_8_ = auVar88._16_8_ + auVar33._16_8_;
      auVar89._24_8_ = auVar88._24_8_ + auVar33._24_8_;
      auVar33 = vsubpd_avx(auVar171,auVar89);
      if ((auVar33._0_8_ == 0.0) && (!NAN(auVar33._0_8_))) goto LAB_1409edf69;
      auVar54 = vunpcklpd_avx(auVar332,auVar312);
      auVar168 = vpermpd_avx2(ZEXT1632(auVar54),0x60);
      auVar82 = vpermpd_avx2(auVar366,0x55);
      auVar237._0_8_ = auVar346._0_8_ * __real_3ff0000000000000;
      auVar237._8_8_ = auVar346._8_8_ * 0.0;
      auVar237._16_8_ = auVar352._16_8_ * 0.0;
      auVar237._24_8_ = auVar352._24_8_ * 0.0;
      auVar200 = vpermpd_avx2(auVar237,0x34);
      auVar202 = vpermpd_avx2(auVar352,100);
      auVar263 = vpermpd_avx2(auVar366,0xcc);
      auVar133 = vpermpd_avx2(auVar340,0xaa);
      auVar133 = vblendpd_avx(ZEXT832(0) << 0x40,auVar133,2);
      auVar322._8_8_ = auVar312._0_8_;
      auVar322._0_8_ = auVar312._0_8_;
      auVar322._16_8_ = auVar321._16_8_;
      auVar322._24_8_ = auVar321._16_8_;
      auVar133 = vblendpd_avx(auVar133,auVar322,8);
      auVar264 = vpermpd_avx2(auVar366,0x66);
      auVar33 = vdivpd_avx(___ymm_3ff0000000000000bff0000000000000bff00000000000003ff0000000000000,
                           auVar33);
      auVar313._0_8_ =
           (auVar332._0_8_ * auVar34._0_8_ -
           (auVar80._0_8_ * auVar263._0_8_ + auVar264._0_8_ * auVar133._0_8_)) * auVar33._0_8_;
      auVar313._8_8_ =
           (auVar332._8_8_ * auVar34._8_8_ -
           (auVar80._8_8_ * auVar263._8_8_ + auVar264._8_8_ * auVar133._8_8_)) * auVar33._8_8_;
      dVar183 = auVar33._16_8_;
      auVar323._16_8_ =
           (auVar312._0_8_ * auVar34._16_8_ -
           (auVar80._16_8_ * auVar263._16_8_ + auVar264._16_8_ * auVar133._16_8_)) * dVar183;
      auVar323._0_16_ = auVar313;
      dVar215 = auVar33._24_8_;
      auVar323._24_8_ =
           (auVar312._8_8_ * auVar34._24_8_ -
           (auVar80._24_8_ * auVar263._24_8_ + auVar264._24_8_ * auVar133._24_8_)) * dVar215;
      auVar54 = vshufpd_avx(auVar313,auVar313,1);
      auVar48 = auVar323._16_16_;
      auVar259 = vshufpd_avx(auVar48,auVar48,1);
      auVar370._0_8_ =
           (auVar35._16_8_ * 0.0 - (-(auVar202._16_8_ * _DAT_150aa8e90) + auVar200._16_8_)) *
           dVar183;
      auVar370._8_8_ =
           (auVar35._24_8_ * 0.0 - (-(auVar202._24_8_ * _UNK_150aa8e98) + auVar200._24_8_)) *
           dVar215;
      auVar152 = vshufpd_avx(auVar370,auVar370,1);
      auVar56._0_8_ =
           (auVar85._0_8_ * 0.0 - (auVar332._0_8_ * auVar366._0_8_ - auVar168._0_8_ * auVar82._0_8_)
           ) * auVar33._0_8_;
      auVar56._8_8_ =
           (auVar85._8_8_ * 0.0 - (auVar332._8_8_ * auVar366._0_8_ - auVar168._8_8_ * auVar82._8_8_)
           ) * auVar33._8_8_;
      auVar90._16_8_ =
           (auVar85._16_8_ * 0.0 -
           (auVar312._0_8_ * auVar366._0_8_ - auVar168._16_8_ * auVar82._16_8_)) * dVar183;
      auVar90._0_16_ = auVar56;
      auVar90._24_8_ =
           (auVar85._24_8_ * 0.0 -
           (auVar312._8_8_ * auVar366._0_8_ - auVar168._24_8_ * auVar82._24_8_)) * dVar215;
      auVar15 = vshufpd_avx(auVar56,auVar56,1);
      auVar19 = vshufpd_avx(auVar90._16_16_,auVar90._16_16_,1);
      auVar186 = vshufpd_avx(auVar352._16_16_,auVar352._16_16_,1);
      auVar250 = vshufpd_avx(auVar346,auVar346,1);
      auVar223 = vshufpd_avx(auVar33._16_16_,auVar33._16_16_,1);
      auVar251._8_8_ = 0;
      auVar251._0_8_ =
           (auVar300._0_8_ - (auVar186._0_8_ * 0.0 + auVar250._0_8_ * 0.0)) * auVar223._0_8_;
    }
    auVar15 = vunpcklpd_avx(auVar19,auVar15);
    auVar19 = vunpcklpd_avx(auVar48,auVar313);
    auVar54 = vunpcklpd_avx(auVar259,auVar54);
    dVar183 = *param_2;
    dVar215 = param_2[1];
    dVar216 = param_2[2];
    auVar305._0_8_ =
         param_3 * (auVar15._0_8_ * dVar216 + auVar54._0_8_ * dVar183 + auVar19._0_8_ * dVar215);
    auVar305._8_8_ =
         param_3 * (auVar15._8_8_ * dVar216 + auVar54._8_8_ * dVar183 + auVar19._8_8_ * dVar215);
    auVar305._16_8_ =
         param_3 * (auVar251._0_8_ * dVar216 + auVar152._0_8_ * dVar183 + auVar370._0_8_ * dVar215);
    auVar305._24_8_ =
         param_3 * (auVar251._8_8_ * dVar216 + auVar152._8_8_ * dVar183 + auVar370._8_8_ * dVar215);
    dVar183 = *(double *)param_1[10];
    auVar348._8_8_ = 0;
    auVar348._0_8_ = *(ulonglong *)(param_1[10] + 0x10);
    auVar358._8_8_ = 0;
    auVar358._0_8_ = *(ulonglong *)param_1[0xb];
    uVar2 = *(undefined8 *)(param_1[0xb] + 8);
    auVar22._8_8_ = 0;
    auVar22._0_8_ = *(ulonglong *)param_1[0x18];
    auVar260._8_8_ = 0;
    auVar260._0_8_ = *(ulonglong *)(param_1[0x18] + 8);
    dVar215 = *(double *)(param_1[0x18] + 0x10);
    uVar149 = *(ulonglong *)(param_1[0x19] + 8);
    auVar335._8_8_ = 0;
    auVar335._0_8_ = *(ulonglong *)(param_1[0x19] + 0x10);
    dVar216 = *(double *)param_1[0x1a];
    auVar5 = *(undefined1 (*) [24])(param_1[0xf] + 8);
    auVar102._24_8_ = 0;
    auVar102._0_24_ = auVar5;
    auVar192._0_8_ = auVar305._0_8_ * dVar183 + auVar5._0_8_;
    auVar192._8_8_ = auVar305._8_8_ * dVar183 + auVar5._8_8_;
    auVar209._16_8_ = auVar305._16_8_ * dVar183 + auVar5._16_8_;
    auVar209._0_16_ = auVar192;
    auVar209._24_8_ = auVar305._24_8_ * dVar183 + 0.0;
    local_148._24_8_ = 0;
    local_148._0_24_ = *(undefined1 (*) [24])(param_1[0x10] + 8);
    auVar364._0_8_ =
         -(auVar305._0_8_ * dVar50) + *(double *)*(undefined1 (*) [24])(param_1[0x10] + 8);
    auVar364._8_8_ = -(auVar305._8_8_ * dVar50) + *(double *)(param_1[0x10] + 0x10);
    auVar367._16_8_ = -(auVar305._16_8_ * dVar50) + *(double *)param_1[0x11];
    auVar367._0_16_ = auVar364;
    auVar367._24_8_ = -(auVar305._24_8_ * dVar50) + 0.0;
    auVar134._16_16_ = auVar364;
    auVar134._0_16_ = auVar192;
    auVar33 = vshufpd_avx(auVar209,auVar134,2);
    auVar193._8_8_ = 0;
    auVar193._0_8_ = *(ulonglong *)(param_1[0x1a] + 0x10);
    auVar162._8_8_ = 0;
    auVar162._0_8_ = *(ulonglong *)param_1[0x1b];
    dVar50 = *(double *)(param_1[0x1b] + 8);
    auVar5 = *(undefined1 (*) [24])(param_1[0xb] + 0x10);
    auVar11._8_8_ = dVar218;
    auVar11._0_8_ = dVar218;
    auVar54 = vmovhps_avx(auVar11,*(undefined8 *)(param_1[0x1d] + 0x10));
    uVar3 = *(undefined8 *)param_1[0x1e];
    dVar277 = *(double *)(param_1[0x1f] + 8);
    *(undefined1 (*) [32])(param_1[0xf] + 8) = auVar33;
    auVar33 = vpermpd_avx2(auVar367,0xe9);
    *(undefined1 (*) [16])(param_1[0x10] + 0x10) = auVar33._0_16_;
    dVar247 = _UNK_150b54438;
    dVar219 = _UNK_150b54430;
    dVar289 = _UNK_150b54428;
    dVar287 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
    dVar288 = _UNK_150b54418;
    dVar278 = _UNK_150b54410;
    dVar182 = _UNK_150b54408;
    dVar181 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
    dVar114 = _UNK_15076c6f8;
    dVar45 = ___xmm_bff00000000000003ff0000000000000;
    auVar33 = vpermpd_avx2(auVar305,0xc9);
    if (0.0 < dVar183) {
      auVar152 = vunpcklpd_avx(auVar22,auVar260);
      auVar15 = vunpcklpd_avx(auVar348,auVar358);
      auVar135._16_8_ = uVar2;
      auVar135._0_16_ = auVar15;
      auVar135._24_8_ = 0;
      auVar80 = vsubpd_avx(auVar135,auVar102);
      auVar34 = vpermpd_avx2(auVar80,0xc9);
      auVar136._0_8_ = auVar33._0_8_ * auVar80._0_8_ - auVar34._0_8_ * auVar305._0_8_;
      auVar136._8_8_ = auVar33._8_8_ * auVar80._8_8_ - auVar34._8_8_ * auVar305._8_8_;
      auVar136._16_8_ = auVar33._16_8_ * auVar80._16_8_ - auVar34._16_8_ * auVar305._16_8_;
      auVar136._24_8_ = auVar33._24_8_ * auVar80._24_8_ - auVar34._24_8_ * auVar305._24_8_;
      auVar80 = vpermpd_avx2(auVar136,0x55);
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar149;
      auVar15 = vunpcklpd_avx(auVar13,auVar335);
      auVar34 = vpermpd_avx2(auVar136,0xaa);
      auVar19 = vunpcklpd_avx(auVar193,auVar162);
      auVar103._0_8_ =
           auVar19._0_8_ * auVar136._0_8_ +
           auVar152._0_8_ * auVar80._0_8_ + auVar34._0_8_ * auVar15._0_8_;
      auVar103._8_8_ =
           auVar19._8_8_ * auVar136._0_8_ +
           auVar152._8_8_ * auVar80._8_8_ + auVar34._8_8_ * auVar15._8_8_;
      auVar103._16_8_ =
           dVar50 * auVar136._0_8_ + dVar215 * auVar80._16_8_ + auVar34._16_8_ * dVar216;
      auVar103._24_8_ = auVar136._0_8_ * 0.0 + auVar80._24_8_ * 0.0 + auVar34._24_8_ * 0.0;
      auVar117._8_8_ = 0;
      auVar117._0_8_ = *(ulonglong *)(param_1[0x12] + 8);
      auVar152 = vmovhpd_avx(auVar117,*(undefined8 *)param_1[0x12]);
      auVar194._8_8_ = 0;
      auVar194._0_8_ = *(ulonglong *)(param_1[0x11] + 0x10);
      auVar15 = vmovhpd_avx(auVar194,*(undefined8 *)(param_1[0x11] + 8));
      auVar80 = vpermpd_avx2(auVar103,0x55);
      auVar34 = vpermpd_avx2(auVar103,0xaa);
      dVar183 = (___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
                 auVar34._0_8_ * auVar15._0_8_ +
                ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
                auVar80._0_8_ * *(double *)param_1[0x12] +
                *(double *)(param_1[0x11] + 8) * 0.0 +
                ___xmm_bff00000000000003ff0000000000000 * auVar103._0_8_ * auVar152._0_8_) *
                __real_3fe0000000000000 + *(double *)(param_1[0x11] + 8);
      dVar215 = (_UNK_150b54428 * auVar34._8_8_ * auVar15._8_8_ +
                _UNK_150b54408 * auVar80._8_8_ * *(double *)(param_1[0x12] + 8) +
                *(double *)(param_1[0x11] + 0x10) * 0.0 +
                _UNK_15076c6f8 * auVar103._0_8_ * auVar152._8_8_) * __real_3fe0000000000000 +
                *(double *)(param_1[0x11] + 0x10);
      dVar216 = (_UNK_150b54430 * auVar34._16_8_ * auVar152._0_8_ +
                _UNK_150b54410 * auVar80._16_8_ * *(double *)(param_1[0x11] + 8) +
                *(double *)param_1[0x12] * 0.0 +
                ___xmm_bff00000000000003ff0000000000000 * auVar103._0_8_ * auVar15._0_8_) *
                __real_3fe0000000000000 + *(double *)param_1[0x12];
      dVar217 = (_UNK_150b54438 * auVar34._24_8_ * auVar152._8_8_ +
                _UNK_150b54418 * auVar80._24_8_ * *(double *)(param_1[0x11] + 0x10) +
                *(double *)(param_1[0x12] + 8) * 0.0 +
                _UNK_15076c6f8 * auVar103._0_8_ * auVar15._8_8_) * __real_3fe0000000000000 +
                *(double *)(param_1[0x12] + 8);
      auVar23._0_8_ = dVar183 * dVar183 + dVar216 * dVar216;
      auVar23._8_8_ = dVar215 * dVar215 + dVar217 * dVar217;
      auVar152 = vshufpd_avx(auVar23,auVar23,1);
      dVar50 = auVar23._0_8_ + auVar152._0_8_;
      auVar65._8_8_ = 0;
      auVar65._0_8_ = __real_3e45798ee2308c3a;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = dVar50;
      auVar152 = vcmpsd_avx(auVar65,auVar24,6);
      uVar149 = ~auVar152._0_8_ & __real_ffffffffffffffff;
      dVar50 = __real_3ff0000000000000 / SQRT(dVar50);
      dVar309 = (double)(((ulonglong)(dVar183 * dVar50) ^
                         ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) &
                        uVar149);
      dVar327 = (double)(((ulonglong)(dVar215 * dVar50) ^ _UNK_150b54548) & uVar149);
      dVar328 = (double)(((ulonglong)(dVar216 * dVar50) ^ _UNK_150b54550) & uVar149);
      dVar217 = (double)(((ulonglong)(dVar217 * dVar50) ^ _UNK_150b54558) & uVar149);
      auVar353._0_8_ =
           (double)((ulonglong)dVar309 ^
                   ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
      auVar353._8_8_ = (double)((ulonglong)dVar327 ^ _UNK_150b54548);
      auVar353._16_8_ = (double)((ulonglong)dVar328 ^ _UNK_150b54550);
      auVar353._24_8_ = (double)((ulonglong)dVar217 ^ _UNK_150b54558);
      *(undefined1 (*) [32])(param_1[0x11] + 8) = auVar353;
      auVar66._8_8_ = 0;
      auVar66._0_8_ = *(ulonglong *)(param_1[1] + 8);
      uVar2 = *(undefined8 *)(param_1[2] + 8);
      auVar118._8_8_ = uVar2;
      auVar118._0_8_ = uVar2;
      auVar137._16_8_ = uVar2;
      auVar137._0_16_ = auVar118;
      auVar137._24_8_ = uVar2;
      auVar152 = vunpcklpd_avx(auVar66,auVar118);
      auVar34 = vpermpd_avx2(auVar353,0xc9);
      auVar4 = *(undefined1 (*) [24])(param_1[1] + 8);
      auVar179._24_8_ = 0;
      auVar179._0_24_ = auVar4;
      auVar80 = vblendpd_avx(auVar179,auVar137,8);
      dVar50 = auVar353._0_8_ * SUB168(*(undefined1 (*) [16])(param_1[1] + 0x10),0) -
               auVar80._0_8_ * auVar34._0_8_;
      dVar183 = auVar353._8_8_ * SUB168(*(undefined1 (*) [16])(param_1[1] + 0x10),8) -
                auVar80._8_8_ * auVar34._8_8_;
      dVar215 = auVar353._16_8_ * auVar152._0_8_ - auVar80._16_8_ * auVar34._16_8_;
      dVar216 = auVar353._24_8_ * auVar152._8_8_ - auVar80._24_8_ * auVar34._24_8_;
      auVar104._0_8_ = dVar50 + dVar50;
      auVar104._8_8_ = dVar183 + dVar183;
      auVar104._16_8_ = dVar215 + dVar215;
      auVar104._24_8_ = dVar216 + dVar216;
      auVar80 = vpermpd_avx2(auVar353,0xff);
      auVar34 = vpermpd_avx2(auVar104,0xc9);
      dVar308 = auVar80._0_8_;
      dVar46 = auVar80._8_8_;
      dVar47 = auVar80._16_8_;
      dVar49 = auVar80._24_8_;
      auVar80 = vpermpd_avx2(auVar104,0xd2);
      auVar105._0_8_ = dVar309 * auVar104._0_8_;
      auVar105._8_8_ = dVar327 * auVar104._8_8_;
      auVar105._16_8_ = dVar328 * auVar104._16_8_;
      auVar105._24_8_ = dVar217 * auVar104._24_8_;
      auVar35 = vpermpd_avx2(auVar105,0xc9);
      auVar106._0_8_ = dVar309 * auVar80._0_8_ - auVar35._0_8_;
      auVar106._8_8_ = dVar327 * auVar80._8_8_ - auVar35._8_8_;
      auVar106._16_8_ = dVar328 * auVar80._16_8_ - auVar35._16_8_;
      auVar106._24_8_ = dVar217 * auVar80._24_8_ - auVar35._24_8_;
      auVar80 = vpermpd_avx2(auVar106,0xc9);
      auVar67._0_8_ =
           *(double *)(param_1[0xf] + 8) + dVar308 * auVar34._0_8_ + auVar4._0_8_ + auVar80._0_8_;
      auVar67._8_8_ =
           *(double *)(param_1[0xf] + 0x10) + dVar46 * auVar34._8_8_ + auVar4._8_8_ + auVar80._8_8_;
      auVar107._16_8_ =
           *(double *)param_1[0x10] + dVar47 * auVar34._16_8_ + auVar4._16_8_ + auVar80._16_8_;
      auVar107._0_16_ = auVar67;
      auVar107._24_8_ = dVar49 * auVar34._24_8_ + 0.0 + auVar80._24_8_ + 0.0;
      *(undefined1 (*) [16])(param_1[10] + 0x10) = auVar67;
      uVar2 = vmovlpd_avx(auVar107._16_16_);
      *(undefined8 *)(param_1[0xb] + 8) = uVar2;
      auVar119._8_8_ = 0;
      auVar119._0_8_ = *(ulonglong *)(*param_1 + 8);
      auVar152 = vmovhpd_avx(auVar119,*(undefined8 *)*param_1);
      auVar163._8_8_ = 0;
      auVar163._0_8_ = *(ulonglong *)param_1[1];
      auVar15 = vmovhpd_avx(auVar163,*(undefined8 *)(*param_1 + 0x10));
      dVar183 = *(double *)(*param_1 + 8);
      auVar4 = *param_1;
      dVar50 = *(double *)param_1[1];
      auVar80 = vpermpd_avx2(auVar353,0x55);
      dVar215 = *(double *)param_1[1];
      dVar216 = *(double *)*param_1;
      dVar217 = *(double *)(*param_1 + 8);
      auVar34 = vpermpd_avx2(auVar353,0xaa);
      *(double *)(param_1[0xc] + 0x10) =
           dVar287 * auVar152._0_8_ * auVar34._0_8_ +
           dVar181 * *(double *)(*param_1 + 0x10) * auVar80._0_8_ +
           dVar308 * *(double *)*param_1 + dVar45 * auVar15._0_8_ * dVar309;
      *(double *)param_1[0xd] =
           dVar289 * auVar152._8_8_ * auVar34._8_8_ +
           dVar182 * dVar215 * auVar80._8_8_ + dVar46 * dVar183 + dVar114 * auVar15._8_8_ * dVar309;
      *(double *)(param_1[0xd] + 8) =
           dVar219 * auVar15._0_8_ * auVar34._16_8_ +
           dVar278 * dVar216 * auVar80._16_8_ +
           dVar47 * auVar4._16_8_ + dVar45 * auVar152._0_8_ * dVar309;
      *(double *)(param_1[0xd] + 0x10) =
           dVar247 * auVar15._8_8_ * auVar34._24_8_ +
           dVar288 * dVar217 * auVar80._24_8_ + dVar49 * dVar50 + dVar114 * auVar152._8_8_ * dVar309
      ;
      dVar50 = auVar353._0_8_ + auVar353._0_8_;
      dVar183 = auVar353._8_8_ + auVar353._8_8_;
      dVar215 = auVar353._16_8_ + auVar353._16_8_;
      dVar216 = auVar353._24_8_ + auVar353._24_8_;
      auVar108._0_8_ = dVar50 * dVar309;
      auVar108._8_8_ = dVar183 * dVar309;
      auVar108._16_8_ = dVar215 * dVar309;
      auVar108._24_8_ = dVar216 * dVar309;
      auVar195._0_8_ = dVar50 * auVar80._0_8_;
      auVar195._8_8_ = dVar183 * auVar80._8_8_;
      auVar210._16_8_ = dVar215 * auVar80._16_8_;
      auVar210._0_16_ = auVar195;
      auVar210._24_8_ = dVar216 * auVar80._24_8_;
      auVar41._0_8_ = dVar50 * dVar308;
      auVar41._8_8_ = dVar183 * dVar46;
      auVar41._16_8_ = dVar215 * dVar47;
      auVar41._24_8_ = dVar216 * dVar49;
      auVar80 = vperm2f128_avx(auVar210,auVar108,0x21);
      auVar80 = vshufpd_avx(auVar80,ZEXT1632(auVar108._16_16_),4);
      auVar294._0_8_ = auVar41._0_8_ + auVar80._0_8_;
      auVar294._8_8_ = auVar41._8_8_ + auVar80._8_8_;
      auVar306._16_8_ = auVar41._16_8_ + auVar80._16_8_;
      auVar306._0_16_ = auVar294;
      auVar306._24_8_ = auVar41._24_8_ + auVar80._24_8_;
      auVar35 = vsubpd_avx(auVar80,auVar41);
      auVar152 = vshufpd_avx(auVar195,auVar195,1);
      auVar109._8_8_ = auVar108._0_8_;
      auVar109._0_8_ = auVar108._0_8_;
      auVar109._16_8_ = auVar108._0_8_;
      auVar109._24_8_ = auVar108._0_8_;
      auVar80 = vblendpd_avx(auVar109,ZEXT1632(auVar152),1);
      auVar34 = vpermpd_avx2(auVar210,0x55);
      auVar34 = vblendpd_avx(ZEXT1632(CONCAT88(dVar328 * dVar215,dVar328 * dVar215)),auVar34,0xc);
      auVar42._0_8_ = auVar80._0_8_ + auVar34._0_8_;
      auVar42._8_8_ = auVar80._8_8_ + auVar34._8_8_;
      auVar42._16_8_ = auVar80._16_8_ + auVar34._16_8_;
      auVar42._24_8_ = auVar80._24_8_ + auVar34._24_8_;
      auVar110._8_8_ = __real_3ff0000000000000;
      auVar110._0_8_ = __real_3ff0000000000000;
      auVar110._16_8_ = __real_3ff0000000000000;
      auVar110._24_8_ = __real_3ff0000000000000;
      auVar34 = vsubpd_avx(auVar110,auVar42);
      dVar215 = auVar34._0_8_;
      dVar50 = *(double *)param_1[8];
      dVar183 = *(double *)(param_1[8] + 0x10);
      auVar152 = vmovhpd_avx(ZEXT816(0) << 0x40,*(undefined8 *)(param_1[8] + 8));
      auVar80 = vpermpd_avx2(auVar35,0xaa);
      dVar216 = auVar152._0_8_;
      dVar45 = auVar152._8_8_;
      auVar85 = vpermpd_avx2(auVar306,0x55);
      auVar274._0_8_ = auVar85._0_8_ * 0.0 + dVar216 * auVar80._0_8_ + dVar50 * dVar215;
      auVar274._8_8_ = auVar85._8_8_ * 0.0 + dVar45 * auVar80._8_8_ + dVar215 * 0.0;
      auVar274._16_8_ = dVar183 * auVar85._16_8_ + auVar80._16_8_ * 0.0 + dVar215 * 0.0;
      auVar274._24_8_ = auVar85._24_8_ * 0.0 + auVar80._24_8_ * 0.0 + dVar215 * 0.0;
      auVar80 = vpermpd_avx2(auVar306,0xaa);
      auVar85 = vpermpd_avx2(auVar34,0x55);
      dVar215 = auVar35._0_8_;
      auVar211._0_8_ = dVar215 * 0.0 + dVar50 * auVar80._0_8_ + dVar216 * auVar85._0_8_;
      auVar211._8_8_ = dVar215 * 0.0 + auVar80._8_8_ * 0.0 + dVar45 * auVar85._8_8_;
      auVar211._16_8_ = dVar183 * dVar215 + auVar80._16_8_ * 0.0 + auVar85._16_8_ * 0.0;
      auVar211._24_8_ = dVar215 * 0.0 + auVar80._24_8_ * 0.0 + auVar85._24_8_ * 0.0;
      auVar80 = vpermpd_avx2(auVar35,0x55);
      auVar85 = vpermpd_avx2(auVar34,0xaa);
      auVar111._0_8_ = auVar85._0_8_ * 0.0 + auVar80._0_8_ * dVar50 + dVar216 * auVar294._0_8_;
      auVar111._8_8_ = auVar85._8_8_ * 0.0 + auVar80._8_8_ * 0.0 + dVar45 * auVar294._0_8_;
      auVar111._16_8_ = dVar183 * auVar85._16_8_ + auVar80._16_8_ * 0.0 + auVar294._0_8_ * 0.0;
      auVar111._24_8_ = auVar85._24_8_ * 0.0 + auVar80._24_8_ * 0.0 + auVar294._0_8_ * 0.0;
      auVar152 = vunpcklpd_avx(auVar34._0_16_,auVar306._16_16_);
      auVar80 = vblendpd_avx(ZEXT1632(auVar152),auVar80,0xc);
      auVar85 = vpermpd_avx2(auVar274,0x55);
      auVar152 = vblendpd_avx(auVar34._0_16_,auVar35._16_16_,1);
      dVar278 = auVar152._0_8_;
      dVar288 = auVar152._8_8_;
      dVar45 = auVar80._0_8_;
      dVar114 = auVar80._8_8_;
      dVar181 = auVar80._16_8_;
      dVar182 = auVar80._24_8_;
      auVar133 = vpermpd_avx2(auVar274,0xaa);
      auVar152 = vshufpd_avx(auVar294,auVar35._0_16_,1);
      auVar80 = vblendpd_avx(auVar34,ZEXT1632(auVar152),3);
      dVar50 = auVar80._0_8_;
      auVar120._0_8_ = dVar50 * auVar133._0_8_ + dVar45 * auVar274._0_8_ + dVar278 * auVar85._0_8_;
      dVar183 = auVar80._8_8_;
      auVar120._8_8_ = dVar183 * auVar133._8_8_ + dVar114 * auVar274._0_8_ + dVar288 * auVar85._8_8_
      ;
      dVar215 = auVar80._16_8_;
      auVar138._16_8_ =
           dVar215 * auVar133._16_8_ + dVar181 * auVar274._0_8_ + auVar294._0_8_ * auVar85._16_8_;
      auVar138._0_16_ = auVar120;
      dVar216 = auVar80._24_8_;
      auVar138._24_8_ =
           dVar216 * auVar133._24_8_ + dVar182 * auVar274._0_8_ + auVar294._8_8_ * auVar85._24_8_;
      auVar80 = vpermpd_avx2(auVar211,0x55);
      auVar34 = vpermpd_avx2(auVar211,0xaa);
      auVar196._0_8_ = dVar50 * auVar34._0_8_ + dVar45 * auVar211._0_8_ + auVar80._0_8_ * dVar278;
      auVar196._8_8_ = dVar183 * auVar34._8_8_ + dVar114 * auVar211._0_8_ + auVar80._8_8_ * dVar288;
      auVar212._16_8_ =
           dVar215 * auVar34._16_8_ + dVar181 * auVar211._0_8_ + auVar80._16_8_ * auVar294._0_8_;
      auVar212._0_16_ = auVar196;
      auVar212._24_8_ =
           dVar216 * auVar34._24_8_ + dVar182 * auVar211._0_8_ + auVar80._24_8_ * auVar294._8_8_;
      auVar80 = vpermpd_avx2(auVar111,0x55);
      auVar34 = vpermpd_avx2(auVar111,0xaa);
      *(undefined1 (*) [16])param_1[0x18] = auVar120;
      uVar2 = vmovlpd_avx(auVar138._16_16_);
      *(undefined8 *)(param_1[0x18] + 0x10) = uVar2;
      auVar68._0_8_ = dVar50 * auVar34._0_8_ + dVar45 * auVar111._0_8_ + auVar80._0_8_ * dVar278;
      auVar68._8_8_ = dVar183 * auVar34._8_8_ + dVar114 * auVar111._0_8_ + auVar80._8_8_ * dVar288;
      auVar112._16_8_ =
           dVar215 * auVar34._16_8_ + dVar181 * auVar111._0_8_ + auVar80._16_8_ * auVar294._0_8_;
      auVar112._0_16_ = auVar68;
      auVar112._24_8_ =
           dVar216 * auVar34._24_8_ + dVar182 * auVar111._0_8_ + auVar80._24_8_ * auVar294._8_8_;
      *(undefined8 *)param_1[0x19] = 0;
      *(undefined1 (*) [16])(param_1[0x19] + 8) = auVar196;
      uVar2 = vmovlpd_avx(auVar212._16_16_);
      *(undefined8 *)param_1[0x1a] = uVar2;
      *(undefined8 *)(param_1[0x1a] + 8) = 0;
      *(undefined1 (*) [16])(param_1[0x1a] + 0x10) = auVar68;
      uVar2 = vmovlpd_avx(auVar112._16_16_);
      *(undefined8 *)(param_1[0x1b] + 8) = uVar2;
      *(undefined1 (*) [32])(param_1[0x1b] + 0x10) = ZEXT1632(ZEXT816(0));
      *(undefined8 *)param_1[0x1d] = 0x3ff0000000000000;
    }
    dVar288 = _UNK_150b54438;
    dVar278 = _UNK_150b54430;
    dVar182 = _UNK_150b54428;
    dVar181 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
    dVar114 = _UNK_150b54418;
    dVar45 = _UNK_150b54410;
    dVar216 = _UNK_150b54408;
    dVar215 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
    dVar183 = _UNK_15076c6f8;
    dVar50 = ___xmm_bff00000000000003ff0000000000000;
    if (__real_0000000000000000 < *(double *)(param_1[10] + 8)) {
      auVar43._24_8_ = 0;
      auVar43._0_24_ = auVar5;
      auVar80 = vsubpd_avx(auVar43,local_148);
      auVar34 = vpermpd_avx2(auVar80,0xc9);
      auVar152 = vunpcklpd_avx(auVar376,auVar369);
      auVar44._0_8_ = auVar34._0_8_ * auVar305._0_8_ - auVar33._0_8_ * auVar80._0_8_;
      auVar44._8_8_ = auVar34._8_8_ * auVar305._8_8_ - auVar33._8_8_ * auVar80._8_8_;
      auVar44._16_8_ = auVar34._16_8_ * auVar305._16_8_ - auVar33._16_8_ * auVar80._16_8_;
      auVar44._24_8_ = auVar34._24_8_ * auVar305._24_8_ - auVar33._24_8_ * auVar80._24_8_;
      auVar15 = vunpcklpd_avx(auVar224,auVar345);
      auVar12._8_8_ = dVar218;
      auVar12._0_8_ = dVar218;
      auVar12._16_8_ = dVar218;
      auVar12._24_8_ = dVar218;
      auVar33 = vblendpd_avx(ZEXT1632(auVar54),auVar12,0xc);
      auVar14._8_8_ = uVar3;
      auVar14._0_8_ = uVar3;
      auVar14._16_8_ = uVar3;
      auVar14._24_8_ = uVar3;
      auVar33 = vblendpd_avx(auVar33,auVar14,4);
      auVar34 = vpermpd_avx2(auVar44,0xaa);
      auVar35 = vpermpd_avx2(auVar44,0x55);
      auVar80 = vblendpd_avx(auVar236,ZEXT1632(auVar15),3);
      auVar139._8_8_ = uVar1;
      auVar139._0_8_ = uVar1;
      auVar139._16_8_ = uVar1;
      auVar139._24_8_ = uVar1;
      auVar80 = vblendpd_avx(auVar80,auVar139,4);
      auVar140._0_8_ =
           auVar80._0_8_ * auVar44._0_8_ +
           auVar33._0_8_ * auVar35._0_8_ + auVar34._0_8_ * auVar152._0_8_;
      auVar140._8_8_ =
           auVar80._8_8_ * auVar44._0_8_ +
           auVar33._8_8_ * auVar35._8_8_ + auVar34._8_8_ * auVar152._8_8_;
      auVar140._16_8_ =
           auVar80._16_8_ * auVar44._0_8_ +
           auVar33._16_8_ * auVar35._16_8_ + auVar34._16_8_ * dVar277;
      auVar140._24_8_ =
           auVar80._24_8_ * auVar44._0_8_ + auVar33._24_8_ * auVar35._24_8_ + auVar34._24_8_ * 0.0;
      auVar69._8_8_ = 0;
      auVar69._0_8_ = *(ulonglong *)(param_1[0x13] + 0x10);
      auVar54 = vmovhpd_avx(auVar69,*(undefined8 *)(param_1[0x13] + 8));
      auVar164._8_8_ = 0;
      auVar164._0_8_ = *(ulonglong *)param_1[0x13];
      auVar152 = vmovhpd_avx(auVar164,*(undefined8 *)(param_1[0x12] + 0x10));
      auVar33 = vpermpd_avx2(auVar140,0x55);
      auVar80 = vpermpd_avx2(auVar140,0xaa);
      dVar277 = (___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
                 auVar80._0_8_ * auVar152._0_8_ +
                ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
                auVar33._0_8_ * *(double *)(param_1[0x13] + 8) +
                *(double *)(param_1[0x12] + 0x10) * 0.0 +
                auVar140._0_8_ * auVar54._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
                __real_3fe0000000000000 + *(double *)(param_1[0x12] + 0x10);
      dVar287 = (_UNK_150b54428 * auVar80._8_8_ * auVar152._8_8_ +
                _UNK_150b54408 * auVar33._8_8_ * *(double *)(param_1[0x13] + 0x10) +
                *(double *)param_1[0x13] * 0.0 + auVar140._0_8_ * auVar54._8_8_ * _UNK_15076c6f8) *
                __real_3fe0000000000000 + *(double *)param_1[0x13];
      dVar289 = (_UNK_150b54430 * auVar80._16_8_ * auVar54._0_8_ +
                _UNK_150b54410 * auVar33._16_8_ * *(double *)(param_1[0x12] + 0x10) +
                *(double *)(param_1[0x13] + 8) * 0.0 +
                auVar140._0_8_ * auVar152._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
                __real_3fe0000000000000 + *(double *)(param_1[0x13] + 8);
      dVar217 = (_UNK_150b54438 * auVar80._24_8_ * auVar54._8_8_ +
                _UNK_150b54418 * auVar33._24_8_ * *(double *)param_1[0x13] +
                *(double *)(param_1[0x13] + 0x10) * 0.0 +
                auVar140._0_8_ * auVar152._8_8_ * _UNK_15076c6f8) * __real_3fe0000000000000 +
                *(double *)(param_1[0x13] + 0x10);
      auVar121._0_8_ = dVar277 * dVar277 + dVar289 * dVar289;
      auVar121._8_8_ = dVar287 * dVar287 + dVar217 * dVar217;
      auVar54 = vshufpd_avx(auVar121,auVar121,1);
      dVar218 = auVar121._0_8_ + auVar54._0_8_;
      auVar231._8_8_ = 0;
      auVar231._0_8_ = __real_3e45798ee2308c3a;
      auVar122._8_8_ = 0;
      auVar122._0_8_ = dVar218;
      auVar54 = vcmpsd_avx(auVar231,auVar122,6);
      uVar149 = ~auVar54._0_8_ & __real_ffffffffffffffff;
      dVar218 = __real_3ff0000000000000 / SQRT(dVar218);
      dVar219 = (double)(((ulonglong)(dVar277 * dVar218) ^
                         ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) &
                        uVar149);
      dVar277 = (double)(((ulonglong)(dVar287 * dVar218) ^ _UNK_150b54548) & uVar149);
      dVar247 = (double)(((ulonglong)(dVar289 * dVar218) ^ _UNK_150b54550) & uVar149);
      dVar218 = (double)(((ulonglong)(dVar217 * dVar218) ^ _UNK_150b54558) & uVar149);
      auVar275._0_8_ =
           (double)((ulonglong)dVar219 ^
                   ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
      auVar275._8_8_ = (double)((ulonglong)dVar277 ^ _UNK_150b54548);
      auVar275._16_8_ = (double)((ulonglong)dVar247 ^ _UNK_150b54550);
      auVar275._24_8_ = (double)((ulonglong)dVar218 ^ _UNK_150b54558);
      *(undefined1 (*) [32])(param_1[0x12] + 0x10) = auVar275;
      auVar282._8_8_ = 0;
      auVar282._0_8_ = *(ulonglong *)(param_1[5] + 8);
      uVar1 = *(undefined8 *)(param_1[6] + 8);
      auVar295._8_8_ = uVar1;
      auVar295._0_8_ = uVar1;
      auVar307._16_8_ = uVar1;
      auVar307._0_16_ = auVar295;
      auVar307._24_8_ = uVar1;
      auVar54 = vunpcklpd_avx(auVar282,auVar295);
      auVar80 = vpermpd_avx2(auVar275,0xc9);
      auVar5 = *(undefined1 (*) [24])(param_1[5] + 8);
      auVar326._24_8_ = 0;
      auVar326._0_24_ = auVar5;
      auVar33 = vblendpd_avx(auVar326,auVar307,8);
      dVar287 = auVar275._0_8_ * SUB168(*(undefined1 (*) [16])(param_1[5] + 0x10),0) -
                auVar33._0_8_ * auVar80._0_8_;
      dVar289 = auVar275._8_8_ * SUB168(*(undefined1 (*) [16])(param_1[5] + 0x10),8) -
                auVar33._8_8_ * auVar80._8_8_;
      dVar217 = auVar275._16_8_ * auVar54._0_8_ - auVar33._16_8_ * auVar80._16_8_;
      dVar308 = auVar275._24_8_ * auVar54._8_8_ - auVar33._24_8_ * auVar80._24_8_;
      auVar141._0_8_ = dVar287 + dVar287;
      auVar141._8_8_ = dVar289 + dVar289;
      auVar141._16_8_ = dVar217 + dVar217;
      auVar141._24_8_ = dVar308 + dVar308;
      auVar33 = vpermpd_avx2(auVar275,0xff);
      auVar80 = vpermpd_avx2(auVar141,0xc9);
      dVar217 = auVar33._0_8_;
      dVar308 = auVar33._8_8_;
      dVar46 = auVar33._16_8_;
      dVar47 = auVar33._24_8_;
      auVar33 = vpermpd_avx2(auVar141,0xd2);
      auVar142._0_8_ = auVar141._0_8_ * dVar219;
      auVar142._8_8_ = auVar141._8_8_ * dVar277;
      auVar142._16_8_ = auVar141._16_8_ * dVar247;
      auVar142._24_8_ = auVar141._24_8_ * dVar218;
      auVar34 = vpermpd_avx2(auVar142,0xc9);
      auVar143._0_8_ = dVar219 * auVar33._0_8_ - auVar34._0_8_;
      auVar143._8_8_ = dVar277 * auVar33._8_8_ - auVar34._8_8_;
      auVar143._16_8_ = dVar247 * auVar33._16_8_ - auVar34._16_8_;
      auVar143._24_8_ = dVar218 * auVar33._24_8_ - auVar34._24_8_;
      auVar33 = vpermpd_avx2(auVar143,0xc9);
      auVar123._0_8_ =
           *(double *)(param_1[0x10] + 8) + dVar217 * auVar80._0_8_ + auVar5._0_8_ + auVar33._0_8_;
      auVar123._8_8_ =
           *(double *)(param_1[0x10] + 0x10) +
           dVar308 * auVar80._8_8_ + auVar5._8_8_ + auVar33._8_8_;
      auVar144._16_8_ =
           *(double *)param_1[0x11] + dVar46 * auVar80._16_8_ + auVar5._16_8_ + auVar33._16_8_;
      auVar144._0_16_ = auVar123;
      auVar144._24_8_ = dVar47 * auVar80._24_8_ + 0.0 + auVar33._24_8_ + 0.0;
      *(undefined1 (*) [16])(param_1[0xb] + 0x10) = auVar123;
      uVar1 = vmovlpd_avx(auVar144._16_16_);
      *(undefined8 *)(param_1[0xc] + 8) = uVar1;
      auVar296._8_8_ = 0;
      auVar296._0_8_ = *(ulonglong *)(param_1[4] + 8);
      auVar54 = vmovhpd_avx(auVar296,*(undefined8 *)param_1[4]);
      auVar317._8_8_ = 0;
      auVar317._0_8_ = *(ulonglong *)param_1[5];
      auVar152 = vmovhpd_avx(auVar317,*(undefined8 *)(param_1[4] + 0x10));
      dVar277 = *(double *)(param_1[4] + 8);
      auVar5 = param_1[4];
      dVar218 = *(double *)param_1[5];
      auVar33 = vpermpd_avx2(auVar275,0x55);
      dVar287 = *(double *)param_1[4];
      dVar289 = *(double *)(param_1[4] + 8);
      auVar80 = vpermpd_avx2(auVar275,0xaa);
      *(double *)param_1[0xe] =
           dVar181 * auVar54._0_8_ * auVar80._0_8_ +
           dVar215 * *(double *)(param_1[4] + 0x10) * auVar33._0_8_ +
           dVar217 * *(double *)param_1[4] + auVar152._0_8_ * dVar219 * dVar50;
      *(double *)(param_1[0xe] + 8) =
           dVar182 * auVar54._8_8_ * auVar80._8_8_ +
           dVar216 * *(double *)param_1[5] * auVar33._8_8_ +
           dVar308 * dVar277 + auVar152._8_8_ * dVar219 * dVar183;
      *(double *)(param_1[0xe] + 0x10) =
           dVar278 * auVar152._0_8_ * auVar80._16_8_ +
           dVar45 * dVar287 * auVar33._16_8_ +
           dVar46 * auVar5._16_8_ + auVar54._0_8_ * dVar219 * dVar50;
      *(double *)param_1[0xf] =
           dVar288 * auVar152._8_8_ * auVar80._24_8_ +
           dVar114 * dVar289 * auVar33._24_8_ + dVar47 * dVar218 + auVar54._8_8_ * dVar219 * dVar183
      ;
      dVar50 = auVar275._0_8_ + auVar275._0_8_;
      dVar183 = auVar275._8_8_ + auVar275._8_8_;
      dVar215 = auVar275._16_8_ + auVar275._16_8_;
      dVar218 = auVar275._24_8_ + auVar275._24_8_;
      auVar145._0_8_ = dVar50 * dVar219;
      auVar145._8_8_ = dVar183 * dVar219;
      auVar145._16_8_ = dVar215 * dVar219;
      auVar145._24_8_ = dVar218 * dVar219;
      auVar232._0_8_ = auVar33._0_8_ * dVar50;
      auVar232._8_8_ = auVar33._8_8_ * dVar183;
      auVar244._16_8_ = auVar33._16_8_ * dVar215;
      auVar244._0_16_ = auVar232;
      auVar244._24_8_ = auVar33._24_8_ * dVar218;
      auVar180._0_8_ = dVar50 * dVar217;
      auVar180._8_8_ = dVar183 * dVar308;
      auVar180._16_8_ = dVar215 * dVar46;
      auVar180._24_8_ = dVar218 * dVar47;
      auVar33 = vperm2f128_avx(auVar244,auVar145,0x21);
      auVar33 = vshufpd_avx(auVar33,ZEXT1632(auVar145._16_16_),4);
      auVar70._0_8_ = auVar180._0_8_ + auVar33._0_8_;
      auVar70._8_8_ = auVar180._8_8_ + auVar33._8_8_;
      auVar113._16_8_ = auVar180._16_8_ + auVar33._16_8_;
      auVar113._0_16_ = auVar70;
      auVar113._24_8_ = auVar180._24_8_ + auVar33._24_8_;
      auVar34 = vsubpd_avx(auVar33,auVar180);
      auVar54 = vshufpd_avx(auVar232,auVar232,1);
      auVar146._8_8_ = auVar145._0_8_;
      auVar146._0_8_ = auVar145._0_8_;
      auVar146._16_8_ = auVar145._0_8_;
      auVar146._24_8_ = auVar145._0_8_;
      auVar33 = vblendpd_avx(auVar146,ZEXT1632(auVar54),1);
      auVar80 = vpermpd_avx2(auVar244,0x55);
      auVar80 = vblendpd_avx(ZEXT1632(CONCAT88(dVar247 * dVar215,dVar247 * dVar215)),auVar80,0xc);
      auVar147._0_8_ = auVar33._0_8_ + auVar80._0_8_;
      auVar147._8_8_ = auVar33._8_8_ + auVar80._8_8_;
      auVar147._16_8_ = auVar33._16_8_ + auVar80._16_8_;
      auVar147._24_8_ = auVar33._24_8_ + auVar80._24_8_;
      auVar213._8_8_ = __real_3ff0000000000000;
      auVar213._0_8_ = __real_3ff0000000000000;
      auVar213._16_8_ = __real_3ff0000000000000;
      auVar213._24_8_ = __real_3ff0000000000000;
      auVar80 = vsubpd_avx(auVar213,auVar147);
      dVar215 = auVar80._0_8_;
      dVar50 = *(double *)param_1[9];
      dVar183 = *(double *)(param_1[9] + 0x10);
      auVar54 = vmovhpd_avx(ZEXT816(0) << 0x40,*(undefined8 *)(param_1[9] + 8));
      auVar33 = vpermpd_avx2(auVar34,0xaa);
      dVar218 = auVar54._0_8_;
      dVar216 = auVar54._8_8_;
      auVar35 = vpermpd_avx2(auVar113,0x55);
      auVar286._0_8_ = auVar35._0_8_ * 0.0 + dVar218 * auVar33._0_8_ + dVar50 * dVar215;
      auVar286._8_8_ = auVar35._8_8_ * 0.0 + dVar216 * auVar33._8_8_ + dVar215 * 0.0;
      auVar286._16_8_ = dVar183 * auVar35._16_8_ + auVar33._16_8_ * 0.0 + dVar215 * 0.0;
      auVar286._24_8_ = auVar35._24_8_ * 0.0 + auVar33._24_8_ * 0.0 + dVar215 * 0.0;
      auVar33 = vpermpd_avx2(auVar113,0xaa);
      auVar35 = vpermpd_avx2(auVar80,0x55);
      dVar215 = auVar34._0_8_;
      auVar276._0_8_ = dVar215 * 0.0 + dVar50 * auVar33._0_8_ + dVar218 * auVar35._0_8_;
      auVar276._8_8_ = dVar215 * 0.0 + auVar33._8_8_ * 0.0 + dVar216 * auVar35._8_8_;
      auVar276._16_8_ = dVar183 * dVar215 + auVar33._16_8_ * 0.0 + auVar35._16_8_ * 0.0;
      auVar276._24_8_ = dVar215 * 0.0 + auVar33._24_8_ * 0.0 + auVar35._24_8_ * 0.0;
      auVar33 = vpermpd_avx2(auVar34,0x55);
      auVar35 = vpermpd_avx2(auVar80,0xaa);
      auVar245._0_8_ = auVar35._0_8_ * 0.0 + auVar33._0_8_ * dVar50 + dVar218 * auVar70._0_8_;
      auVar245._8_8_ = auVar35._8_8_ * 0.0 + auVar33._8_8_ * 0.0 + dVar216 * auVar70._0_8_;
      auVar245._16_8_ = dVar183 * auVar35._16_8_ + auVar33._16_8_ * 0.0 + auVar70._0_8_ * 0.0;
      auVar245._24_8_ = auVar35._24_8_ * 0.0 + auVar33._24_8_ * 0.0 + auVar70._0_8_ * 0.0;
      auVar54 = vunpcklpd_avx(auVar80._0_16_,auVar113._16_16_);
      auVar33 = vblendpd_avx(ZEXT1632(auVar54),auVar33,0xc);
      auVar35 = vpermpd_avx2(auVar286,0x55);
      auVar54 = vblendpd_avx(auVar80._0_16_,auVar34._16_16_,1);
      dVar181 = auVar54._0_8_;
      dVar182 = auVar54._8_8_;
      dVar216 = auVar33._0_8_;
      dVar277 = auVar33._8_8_;
      dVar45 = auVar33._16_8_;
      dVar114 = auVar33._24_8_;
      auVar85 = vpermpd_avx2(auVar286,0xaa);
      auVar54 = vshufpd_avx(auVar70,auVar34._0_16_,1);
      auVar33 = vblendpd_avx(auVar80,ZEXT1632(auVar54),3);
      dVar50 = auVar33._0_8_;
      auVar124._0_8_ = dVar50 * auVar85._0_8_ + dVar216 * auVar286._0_8_ + dVar181 * auVar35._0_8_;
      dVar183 = auVar33._8_8_;
      auVar124._8_8_ = dVar183 * auVar85._8_8_ + dVar277 * auVar286._0_8_ + dVar182 * auVar35._8_8_;
      dVar215 = auVar33._16_8_;
      auVar148._16_8_ =
           dVar215 * auVar85._16_8_ + dVar45 * auVar286._0_8_ + auVar70._0_8_ * auVar35._16_8_;
      auVar148._0_16_ = auVar124;
      dVar218 = auVar33._24_8_;
      auVar148._24_8_ =
           dVar218 * auVar85._24_8_ + dVar114 * auVar286._0_8_ + auVar70._8_8_ * auVar35._24_8_;
      auVar33 = vpermpd_avx2(auVar276,0x55);
      auVar80 = vpermpd_avx2(auVar276,0xaa);
      auVar197._0_8_ = dVar50 * auVar80._0_8_ + dVar216 * auVar276._0_8_ + dVar181 * auVar33._0_8_;
      auVar197._8_8_ = dVar183 * auVar80._8_8_ + dVar277 * auVar276._0_8_ + dVar182 * auVar33._8_8_;
      auVar214._16_8_ =
           dVar215 * auVar80._16_8_ + dVar45 * auVar276._0_8_ + auVar70._0_8_ * auVar33._16_8_;
      auVar214._0_16_ = auVar197;
      auVar214._24_8_ =
           dVar218 * auVar80._24_8_ + dVar114 * auVar276._0_8_ + auVar70._8_8_ * auVar33._24_8_;
      auVar33 = vpermpd_avx2(auVar245,0x55);
      auVar80 = vpermpd_avx2(auVar245,0xaa);
      *(undefined1 (*) [16])(param_1[0x1d] + 8) = auVar124;
      uVar1 = vmovlpd_avx(auVar148._16_16_);
      *(undefined8 *)param_1[0x1e] = uVar1;
      auVar233._0_8_ = dVar50 * auVar80._0_8_ + dVar216 * auVar245._0_8_ + dVar181 * auVar33._0_8_;
      auVar233._8_8_ = dVar183 * auVar80._8_8_ + dVar277 * auVar245._0_8_ + dVar182 * auVar33._8_8_;
      auVar246._16_8_ =
           dVar215 * auVar80._16_8_ + dVar45 * auVar245._0_8_ + auVar70._0_8_ * auVar33._16_8_;
      auVar246._0_16_ = auVar233;
      auVar246._24_8_ =
           dVar218 * auVar80._24_8_ + dVar114 * auVar245._0_8_ + auVar70._8_8_ * auVar33._24_8_;
      *(undefined8 *)(param_1[0x1e] + 8) = 0;
      *(undefined1 (*) [16])(param_1[0x1e] + 0x10) = auVar197;
      uVar1 = vmovlpd_avx(auVar214._16_16_);
      *(undefined8 *)(param_1[0x1f] + 8) = uVar1;
      *(undefined8 *)(param_1[0x1f] + 0x10) = 0;
      *(undefined1 (*) [16])param_1[0x20] = auVar233;
      uVar1 = vmovlpd_avx(auVar246._16_16_);
      *(undefined8 *)(param_1[0x20] + 0x10) = uVar1;
      *(undefined8 *)param_1[0x21] = 0;
      *(undefined8 *)(param_1[0x21] + 8) = 0;
      *(undefined8 *)(param_1[0x21] + 0x10) = 0;
      *(undefined8 *)param_1[0x22] = 0;
      *(undefined8 *)(param_1[0x22] + 8) = 0x3ff0000000000000;
    }
    dVar50 = *(double *)param_1[0xe];
    dVar183 = *(double *)(param_1[0xe] + 8);
    dVar215 = *(double *)(param_1[0xe] + 0x10);
    dVar218 = *(double *)param_1[0xf];
    dVar216 = *(double *)param_1[0x13];
    dVar277 = *(double *)(param_1[0x13] + 8);
    dVar45 = *(double *)(param_1[0x13] + 0x10);
    auVar125._0_8_ =
         *(double *)(param_1[0x12] + 0x10) * *(double *)(param_1[0x11] + 8) +
         dVar277 * *(double *)param_1[0x12];
    auVar125._8_8_ =
         dVar216 * *(double *)(param_1[0x11] + 0x10) + dVar45 * *(double *)(param_1[0x12] + 8);
    auVar54 = vshufpd_avx(auVar125,auVar125,1);
    auVar126._8_8_ = 0;
    auVar126._0_8_ = auVar125._0_8_ + auVar54._0_8_;
    auVar54 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar126,2);
    auVar198._8_8_ = 0;
    auVar198._0_8_ = __real_3ff0000000000000;
    auVar234._8_8_ = 0;
    auVar234._0_8_ = __real_bff0000000000000;
    auVar54 = vblendvpd_avx(auVar234,auVar198,auVar54);
    dVar114 = auVar54._0_8_;
    *(double *)(param_1[0x12] + 0x10) = *(double *)(param_1[0x12] + 0x10) * dVar114;
    *(double *)param_1[0x13] = dVar216 * dVar114;
    *(double *)(param_1[0x13] + 8) = dVar277 * dVar114;
    *(double *)(param_1[0x13] + 0x10) = dVar45 * dVar114;
    auVar71._0_8_ =
         dVar50 * *(double *)(param_1[0xc] + 0x10) + dVar215 * *(double *)(param_1[0xd] + 8);
    auVar71._8_8_ = dVar183 * *(double *)param_1[0xd] + dVar218 * *(double *)(param_1[0xd] + 0x10);
    auVar54 = vshufpd_avx(auVar71,auVar71,1);
    auVar72._8_8_ = 0;
    auVar72._0_8_ = auVar71._0_8_ + auVar54._0_8_;
    auVar54 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar72,2);
    auVar54 = vblendvpd_avx(auVar234,auVar198,auVar54);
    dVar216 = auVar54._0_8_;
    *(double *)param_1[0xe] = dVar50 * dVar216;
    *(double *)(param_1[0xe] + 8) = dVar183 * dVar216;
    *(double *)(param_1[0xe] + 0x10) = dVar215 * dVar216;
    *(double *)param_1[0xf] = dVar218 * dVar216;
    auVar40._0_8_ = *(double *)param_1[0x2c] + auVar305._0_8_;
    auVar40._8_8_ = *(double *)(param_1[0x2c] + 8) + auVar305._8_8_;
    auVar40._16_8_ = *(double *)(param_1[0x2c] + 0x10) + auVar305._16_8_;
    auVar40._24_8_ = auVar305._24_8_ + 0.0;
    goto LAB_1409eeaf2;
  }
  auVar51._8_8_ = 0;
  auVar51._0_8_ = *(ulonglong *)(param_1[0xb] + 8);
  auVar25._24_8_ = 0;
  auVar25._0_24_ = *(undefined1 (*) [24])(param_1[10] + 0x10);
  auVar150._8_8_ = 0;
  auVar150._0_8_ = *(ulonglong *)param_1[0x10];
  auVar127._24_8_ = 0;
  auVar127._0_24_ = *(undefined1 (*) [24])(param_1[0xf] + 8);
  auVar80 = vsubpd_avx(auVar25,auVar127);
  auVar15 = auVar80._0_16_;
  auVar54 = vshufpd_avx(auVar15,auVar15,1);
  auVar152 = vsubpd_avx(auVar51,auVar150);
  dVar114 = auVar152._0_8_;
  auVar279._0_8_ = (ulonglong)dVar114 ^ (ulonglong)__real_8000000000000000;
  auVar279._8_8_ = auVar152._8_8_ ^ (ulonglong)__real_8000000000000000;
  auVar184._0_8_ = (double)(auVar54._0_8_ ^ (ulonglong)__real_8000000000000000);
  auVar184._8_8_ = (double)(auVar54._8_8_ ^ (ulonglong)__real_8000000000000000);
  auVar26._0_8_ = auVar80._0_8_;
  auVar52._0_8_ = (double)((ulonglong)auVar26._0_8_ ^ (ulonglong)__real_8000000000000000);
  dVar277 = auVar80._8_8_;
  auVar52._8_8_ = (ulonglong)dVar277 ^ (ulonglong)__real_8000000000000000;
  auVar321 = vpermpd_avx2(auVar80,0xaa);
  dVar50 = *(double *)(param_1[0x19] + 8);
  auVar329._8_8_ = dVar50;
  auVar329._0_8_ = dVar50;
  auVar336._16_8_ = dVar50;
  auVar336._0_16_ = auVar329;
  auVar336._24_8_ = dVar50;
  uVar1 = *(undefined8 *)(param_1[0x19] + 0x10);
  auVar220._8_8_ = uVar1;
  auVar220._0_8_ = uVar1;
  auVar235._16_8_ = uVar1;
  auVar235._0_16_ = auVar220;
  auVar235._24_8_ = uVar1;
  auVar19 = vunpcklpd_avx(auVar220,auVar329);
  auVar319 = vpermpd_avx2(auVar80,0x55);
  uVar1 = *(undefined8 *)(param_1[0x1a] + 0x10);
  auVar349._8_8_ = uVar1;
  auVar349._0_8_ = uVar1;
  auVar349._16_8_ = uVar1;
  auVar349._24_8_ = uVar1;
  uVar1 = *(undefined8 *)param_1[0x1b];
  auVar354._8_8_ = uVar1;
  auVar354._0_8_ = uVar1;
  auVar359._16_8_ = uVar1;
  auVar359._0_16_ = auVar354;
  auVar359._24_8_ = uVar1;
  auVar80 = vblendpd_avx(auVar349,auVar359,1);
  auVar186 = vunpcklpd_avx(auVar279,auVar152);
  auVar34 = vblendpd_avx(auVar359,auVar235,4);
  auVar310._8_8_ = *(undefined8 *)(param_1[0x1b] + 8);
  auVar310._0_8_ = *(undefined8 *)(param_1[0x1b] + 8);
  auVar35 = vblendpd_avx(ZEXT1632(auVar310),auVar359,4);
  auVar54 = vshufpd_avx(auVar15,auVar52,1);
  dVar183 = *(double *)param_1[0x18];
  auVar85 = vblendpd_avx(auVar349,auVar336,4);
  auVar250 = vunpcklpd_avx(auVar152,auVar184);
  auVar133 = vblendpd_avx(auVar336,auVar349,1);
  auVar152 = vunpcklpd_avx(auVar310,auVar354);
  auVar168 = vblendpd_avx(ZEXT1632(auVar152),auVar235,4);
  auVar26._8_8_ = auVar26._0_8_;
  auVar26._16_8_ = auVar26._0_8_;
  auVar26._24_8_ = auVar26._0_8_;
  auVar82 = vblendpd_avx(auVar26,ZEXT1632(auVar52),1);
  auVar115._8_8_ = 0;
  auVar115._0_8_ = *(ulonglong *)(param_1[0xc] + 8);
  auVar27._24_8_ = 0;
  auVar27._0_24_ = *(undefined1 (*) [24])(param_1[0xb] + 0x10);
  auVar151._8_8_ = 0;
  auVar151._0_8_ = *(ulonglong *)param_1[0x11];
  auVar73._24_8_ = 0;
  auVar73._0_24_ = *(undefined1 (*) [24])(param_1[0x10] + 8);
  auVar264 = vsubpd_avx(auVar27,auVar73);
  auVar16 = auVar264._0_16_;
  auVar152 = vshufpd_avx(auVar16,auVar16,1);
  auVar15 = vsubpd_avx(auVar115,auVar151);
  uVar1 = *(undefined8 *)param_1[0x1f];
  auVar375._8_8_ = uVar1;
  auVar375._0_8_ = uVar1;
  auVar377._16_8_ = uVar1;
  auVar377._0_16_ = auVar375;
  auVar377._24_8_ = uVar1;
  dVar215 = *(double *)(param_1[0x1e] + 0x10);
  auVar290._8_8_ = dVar215;
  auVar290._0_8_ = dVar215;
  auVar297._16_8_ = dVar215;
  auVar297._0_16_ = auVar290;
  auVar297._24_8_ = dVar215;
  uVar1 = *(undefined8 *)(param_1[0x20] + 8);
  auVar368._8_8_ = uVar1;
  auVar368._0_8_ = uVar1;
  auVar372._16_8_ = uVar1;
  auVar372._0_16_ = auVar368;
  auVar372._24_8_ = uVar1;
  uVar1 = *(undefined8 *)(param_1[0x20] + 0x10);
  auVar221._8_8_ = uVar1;
  auVar221._0_8_ = uVar1;
  auVar339 = vpermpd_avx2(auVar264,0xaa);
  auVar223 = vunpcklpd_avx(auVar375,auVar290);
  auVar81 = vpermpd_avx2(auVar264,0x55);
  uVar2 = *(undefined8 *)param_1[0x20];
  auVar355._8_8_ = uVar2;
  auVar355._0_8_ = uVar2;
  auVar360._16_8_ = uVar2;
  auVar360._0_16_ = auVar355;
  auVar360._24_8_ = uVar2;
  auVar200 = vblendpd_avx(auVar360,auVar372,1);
  auVar202 = vblendpd_avx(auVar372,auVar377,4);
  auVar263 = vblendpd_avx(ZEXT1632(auVar221),auVar372,4);
  dVar181 = auVar15._0_8_;
  auVar116._0_8_ = (ulonglong)dVar181 ^ (ulonglong)__real_8000000000000000;
  auVar116._8_8_ = auVar15._8_8_ ^ (ulonglong)__real_8000000000000000;
  auVar361._0_8_ = (double)(auVar152._0_8_ ^ (ulonglong)__real_8000000000000000);
  auVar361._8_8_ = (double)(auVar152._8_8_ ^ (ulonglong)__real_8000000000000000);
  auVar28._0_8_ = auVar264._0_8_;
  auVar185._0_8_ = (double)((ulonglong)auVar28._0_8_ ^ (ulonglong)__real_8000000000000000);
  dVar45 = auVar264._8_8_;
  auVar185._8_8_ = (ulonglong)dVar45 ^ (ulonglong)__real_8000000000000000;
  auVar48 = vunpcklpd_avx(auVar116,auVar15);
  auVar152 = vshufpd_avx(auVar16,auVar185,1);
  dVar218 = *(double *)(param_1[0x1d] + 8);
  auVar264 = vblendpd_avx(auVar360,auVar297,4);
  auVar16 = vunpcklpd_avx(auVar221,auVar368);
  auVar299 = vblendpd_avx(ZEXT1632(auVar16),auVar377,4);
  auVar84 = vblendpd_avx(auVar297,auVar360,1);
  dVar216 = *(double *)param_1[10];
  auVar128._8_8_ = dVar216;
  auVar128._0_8_ = dVar216;
  auVar128._16_8_ = dVar216;
  auVar128._24_8_ = dVar216;
  auVar248._0_8_ =
       dVar216 + (auVar319._0_8_ * auVar80._0_8_ - auVar19._0_8_ * auVar321._0_8_) * auVar186._0_8_
                 + auVar54._0_8_ * (auVar319._0_8_ * auVar35._0_8_ - auVar321._0_8_ * auVar34._0_8_)
  ;
  auVar248._8_8_ =
       (auVar319._8_8_ * auVar80._8_8_ - auVar19._8_8_ * auVar321._8_8_) * auVar186._8_8_ +
       auVar54._8_8_ * (auVar319._8_8_ * auVar35._8_8_ - auVar321._8_8_ * auVar34._8_8_) + 0.0;
  auVar261._16_8_ =
       (auVar319._16_8_ * auVar80._16_8_ - dVar50 * auVar321._16_8_) * auVar184._0_8_ +
       auVar26._0_8_ * (auVar319._16_8_ * auVar35._16_8_ - auVar321._16_8_ * auVar34._16_8_) + 0.0;
  auVar261._0_16_ = auVar248;
  auVar261._24_8_ =
       (auVar319._24_8_ * auVar80._24_8_ - dVar50 * auVar321._24_8_) * auVar184._8_8_ +
       dVar277 * (auVar319._24_8_ * auVar35._24_8_ - auVar321._24_8_ * auVar34._24_8_) + 0.0;
  auVar80 = vpblendd_avx2(auVar128,ZEXT832(0) << 0x40,0xcc);
  auVar129._0_8_ =
       (auVar52._0_8_ * auVar85._0_8_ + dVar183 * dVar114) * auVar250._0_8_ +
       auVar82._0_8_ * (dVar114 * auVar133._0_8_ + auVar52._0_8_ * auVar168._0_8_) + auVar80._0_8_;
  auVar129._8_8_ =
       (auVar52._0_8_ * auVar85._8_8_ + dVar183 * dVar114) * auVar250._8_8_ +
       auVar82._8_8_ * (dVar114 * auVar133._8_8_ + auVar52._0_8_ * auVar168._8_8_) + auVar80._8_8_;
  auVar129._16_8_ =
       (auVar26._0_8_ * auVar85._16_8_ + dVar183 * auVar184._0_8_) * auVar184._0_8_ +
       auVar82._16_8_ * (auVar184._0_8_ * auVar133._16_8_ + auVar26._0_8_ * auVar168._16_8_) +
       auVar80._16_8_;
  auVar129._24_8_ =
       (dVar277 * auVar85._24_8_ + dVar183 * auVar184._8_8_) * auVar184._8_8_ +
       auVar82._24_8_ * (auVar184._8_8_ * auVar133._24_8_ + dVar277 * auVar168._24_8_) +
       auVar80._24_8_;
  dVar50 = *(double *)(param_1[10] + 8);
  auVar283._8_8_ = dVar50;
  auVar283._0_8_ = dVar50;
  auVar283._16_8_ = dVar50;
  auVar283._24_8_ = dVar50;
  auVar53._0_8_ =
       dVar50 + (auVar81._0_8_ * auVar200._0_8_ - auVar339._0_8_ * auVar223._0_8_) * auVar48._0_8_ +
                auVar152._0_8_ * (auVar81._0_8_ * auVar263._0_8_ - auVar339._0_8_ * auVar202._0_8_);
  auVar53._8_8_ =
       (auVar81._8_8_ * auVar200._8_8_ - auVar339._8_8_ * auVar223._8_8_) * auVar48._8_8_ +
       auVar152._8_8_ * (auVar81._8_8_ * auVar263._8_8_ - auVar339._8_8_ * auVar202._8_8_) + 0.0;
  auVar74._16_8_ =
       (auVar81._16_8_ * auVar200._16_8_ - auVar339._16_8_ * dVar215) * auVar361._0_8_ +
       auVar28._0_8_ * (auVar81._16_8_ * auVar263._16_8_ - auVar339._16_8_ * auVar202._16_8_) + 0.0;
  auVar74._0_16_ = auVar53;
  auVar74._24_8_ =
       (auVar81._24_8_ * auVar200._24_8_ - auVar339._24_8_ * dVar215) * auVar361._8_8_ +
       dVar45 * (auVar81._24_8_ * auVar263._24_8_ - auVar339._24_8_ * auVar202._24_8_) + 0.0;
  auVar54 = vunpcklpd_avx(auVar15,auVar361);
  auVar28._8_8_ = auVar28._0_8_;
  auVar28._16_8_ = auVar28._0_8_;
  auVar28._24_8_ = auVar28._0_8_;
  auVar80 = vblendpd_avx(auVar28,ZEXT1632(auVar185),1);
  auVar34 = vpblendd_avx2(auVar283,ZEXT832(0) << 0x40,0xcc);
  auVar29._0_8_ =
       auVar34._0_8_ +
       (auVar185._0_8_ * auVar264._0_8_ + dVar181 * dVar218) * auVar54._0_8_ +
       auVar80._0_8_ * (dVar181 * auVar84._0_8_ + auVar185._0_8_ * auVar299._0_8_);
  auVar29._8_8_ =
       auVar34._8_8_ +
       (auVar185._0_8_ * auVar264._8_8_ + dVar181 * dVar218) * auVar54._8_8_ +
       auVar80._8_8_ * (dVar181 * auVar84._8_8_ + auVar185._0_8_ * auVar299._8_8_);
  auVar29._16_8_ =
       auVar34._16_8_ +
       (auVar28._0_8_ * auVar264._16_8_ + auVar361._0_8_ * dVar218) * auVar361._0_8_ +
       auVar80._16_8_ * (auVar361._0_8_ * auVar84._16_8_ + auVar28._0_8_ * auVar299._16_8_);
  auVar29._24_8_ =
       auVar34._24_8_ +
       (dVar45 * auVar264._24_8_ + auVar361._8_8_ * dVar218) * auVar361._8_8_ +
       auVar80._24_8_ * (auVar361._8_8_ * auVar84._24_8_ + dVar45 * auVar299._24_8_);
  auVar54 = vshufpd_avx(auVar53,auVar53,1);
  auVar80 = vpermpd_avx2(auVar29,0xd0);
  auVar80 = vblendpd_avx(auVar80,ZEXT1632(auVar54),1);
  auVar54 = vshufpd_avx(auVar248,auVar248,1);
  auVar34 = vpermpd_avx2(auVar129,0xd0);
  auVar34 = vblendpd_avx(auVar34,ZEXT1632(auVar54),1);
  auVar343._0_8_ = auVar248._0_8_ + auVar53._0_8_;
  auVar343._8_8_ = auVar248._8_8_ + auVar53._8_8_;
  auVar350._16_8_ = auVar261._16_8_ + auVar74._16_8_;
  auVar350._0_16_ = auVar343;
  auVar350._24_8_ = auVar261._24_8_ + auVar74._24_8_;
  auVar330._0_8_ = auVar34._0_8_ + auVar80._0_8_;
  auVar330._8_8_ = auVar34._8_8_ + auVar80._8_8_;
  auVar337._16_8_ = auVar34._16_8_ + auVar80._16_8_;
  auVar337._0_16_ = auVar330;
  auVar337._24_8_ = auVar34._24_8_ + auVar80._24_8_;
  auVar80 = vblendpd_avx(auVar29,ZEXT1632(auVar74._16_16_),1);
  auVar34 = vblendpd_avx(auVar129,ZEXT1632(auVar261._16_16_),1);
  auVar17._0_8_ = auVar34._0_8_ + auVar80._0_8_;
  auVar17._8_8_ = auVar34._8_8_ + auVar80._8_8_;
  auVar30._16_8_ = auVar34._16_8_ + auVar80._16_8_;
  auVar30._0_16_ = auVar17;
  auVar30._24_8_ = auVar34._24_8_ + auVar80._24_8_;
  auVar199._8_8_ = __real_0010000000000000;
  auVar199._0_8_ = __real_0010000000000000;
  auVar199._16_8_ = __real_0010000000000000;
  auVar199._24_8_ = __real_0010000000000000;
  auVar80 = vblendpd_avx(auVar350,auVar199,8);
  auVar75._0_8_ = auVar80._0_8_ & __real_7fffffffffffffff;
  auVar75._8_8_ = auVar80._8_8_ & __real_7fffffffffffffff;
  auVar75._16_8_ = auVar80._16_8_ & __real_7fffffffffffffff;
  auVar75._24_8_ = auVar80._24_8_ & __real_7fffffffffffffff;
  auVar365._8_8_ = __real_3e45798ee2308c3a;
  auVar365._0_8_ = __real_3e45798ee2308c3a;
  auVar365._16_8_ = __real_3e45798ee2308c3a;
  auVar365._24_8_ = __real_3e45798ee2308c3a;
  auVar80 = vcmppd_avx(auVar75,auVar365,6);
  auVar34 = ZEXT832(0) << 0x40;
  auVar80 = vpackssdw_avx2(auVar80,auVar34);
  auVar54 = vpackssdw_avx(auVar80._0_16_,auVar80._16_16_);
  auVar80 = vpcmpeqd_avx2(auVar34,auVar33);
  auVar152 = vpackssdw_avx(SUB3216(auVar80 ^ 
                                   ___ymm_ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
                                   ,0),
                           SUB3216(auVar80 ^ 
                                   ___ymm_ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff
                                   ,0x10));
  auVar54 = vpshufd_avx(auVar54,0xd8);
  auVar54 = vpand_avx(auVar54,auVar152);
  auVar54 = vpsllw_avx(auVar54,0xf);
  if ((((((((SUB161(auVar54 >> 0xf,0) & 1) == 0 && (SUB161(auVar54 >> 0x1f,0) & 1) == 0) &&
          (SUB161(auVar54 >> 0x2f,0) & 1) == 0) && (SUB161(auVar54 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar54 >> 0x4f,0) & 1) == 0) && (SUB161(auVar54 >> 0x5f,0) & 1) == 0) &&
      (SUB161(auVar54 >> 0x6f,0) & 1) == 0) && -1 < auVar54[0xf]) {
    auVar35 = vpcmpeqd_avx2(ZEXT1632(auVar54),ZEXT1632(auVar54));
    auVar54 = vpackssdw_avx(SUB3216(auVar80 ^ auVar35,0),SUB3216(auVar80 ^ auVar35,0x10));
    auVar80 = vblendpd_avx(auVar337,auVar199,8);
    auVar165._0_8_ = auVar80._0_8_ & __real_7fffffffffffffff;
    auVar165._8_8_ = auVar80._8_8_ & __real_7fffffffffffffff;
    auVar165._16_8_ = auVar80._16_8_ & __real_7fffffffffffffff;
    auVar165._24_8_ = auVar80._24_8_ & __real_7fffffffffffffff;
    auVar80 = vcmppd_avx(auVar165,auVar365,6);
    auVar80 = vpackssdw_avx2(auVar80,auVar34);
    auVar152 = vpackssdw_avx(auVar80._0_16_,auVar80._16_16_);
    auVar152 = vpshufd_avx(auVar152,0xd8);
    auVar54 = vpand_avx(auVar152,auVar54);
    auVar54 = vpsllw_avx(auVar54,0xf);
    if ((((((((SUB161(auVar54 >> 0xf,0) & 1) != 0 || (SUB161(auVar54 >> 0x1f,0) & 1) != 0) ||
            (SUB161(auVar54 >> 0x2f,0) & 1) != 0) || (SUB161(auVar54 >> 0x3f,0) & 1) != 0) ||
          (SUB161(auVar54 >> 0x4f,0) & 1) != 0) || (SUB161(auVar54 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar54 >> 0x6f,0) & 1) != 0) || auVar54[0xf] < '\0') goto LAB_1409ecc1b;
    auVar33 = vpcmpeqd_avx2(auVar33,SUB6432(ZEXT1664((undefined1  [16])0x0),0));
    auVar54 = vpackssdw_avx(SUB3216(auVar33 ^ auVar35,0),SUB3216(auVar33 ^ auVar35,0x10));
    auVar33 = vblendpd_avx(auVar30,auVar199,8);
    auVar166._0_8_ = auVar33._0_8_ & __real_7fffffffffffffff;
    auVar166._8_8_ = auVar33._8_8_ & __real_7fffffffffffffff;
    auVar166._16_8_ = auVar33._16_8_ & __real_7fffffffffffffff;
    auVar166._24_8_ = auVar33._24_8_ & __real_7fffffffffffffff;
    auVar33 = vcmppd_avx(auVar166,auVar365,6);
    auVar33 = vpackssdw_avx2(auVar33,SUB6432(ZEXT1664((undefined1  [16])0x0),0));
    auVar152 = vpackssdw_avx(auVar33._0_16_,auVar33._16_16_);
    auVar152 = vpshufd_avx(auVar152,0xd8);
    auVar54 = vpand_avx(auVar152,auVar54);
    auVar54 = vpsllw_avx(auVar54,0xf);
    if ((((((((SUB161(auVar54 >> 0xf,0) & 1) != 0 || (SUB161(auVar54 >> 0x1f,0) & 1) != 0) ||
            (SUB161(auVar54 >> 0x2f,0) & 1) != 0) || (SUB161(auVar54 >> 0x3f,0) & 1) != 0) ||
          (SUB161(auVar54 >> 0x4f,0) & 1) != 0) || (SUB161(auVar54 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar54 >> 0x6f,0) & 1) != 0) || auVar54[0xf] < '\0') goto LAB_1409ecc1b;
LAB_1409ed3e3:
    auVar15 = ZEXT816(0) << 0x40;
    auVar252._8_8_ = 0;
    auVar252._0_8_ = __real_3ff0000000000000;
    auVar19 = ZEXT816(0);
    auVar362 = ZEXT816(0) << 0x40;
    auVar48 = ZEXT816(0) << 0x40;
    auVar152 = ZEXT816(0) << 0x40;
    auVar54 = ZEXT816(0) << 0x40;
    auVar18 = auVar252;
    auVar249 = auVar252;
  }
  else {
LAB_1409ecc1b:
    auVar33 = vperm2f128_avx(auVar350,auVar30,0x31);
    auVar130._16_16_ = auVar17;
    auVar130._0_16_ = auVar343;
    auVar35 = vunpcklpd_avx(auVar130,auVar33);
    auVar54 = vshufpd_avx(auVar330,auVar330,1);
    auVar6._8_8_ = _UNK_150b54548;
    auVar6._0_8_ = ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
    auVar6._16_8_ = _UNK_150b54550;
    auVar6._24_8_ = _UNK_150b54558;
    auVar33 = vblendpd_avx(ZEXT1632(auVar54),auVar6,0xe);
    auVar54 = vshufpd_avx(auVar343,auVar343,1);
    auVar167._16_16_ = auVar17;
    auVar167._0_16_ = auVar54;
    auVar80 = vshufpd_avx(auVar167,auVar34,4);
    auVar34 = vpermpd_avx2(auVar337,0xe8);
    auVar298._0_8_ = auVar35._0_8_ * auVar33._0_8_ - auVar80._0_8_ * auVar34._0_8_;
    auVar298._8_8_ = auVar35._8_8_ * auVar33._8_8_ - auVar80._8_8_ * auVar34._8_8_;
    auVar298._16_8_ = auVar35._16_8_ * auVar33._16_8_ - auVar80._16_8_ * 0.0;
    auVar298._24_8_ = auVar35._24_8_ * auVar33._24_8_ - auVar80._24_8_ * 0.0;
    auVar131._8_8_ = auVar17._0_8_;
    auVar131._0_8_ = auVar17._0_8_;
    auVar131._16_8_ = auVar30._16_8_;
    auVar131._24_8_ = auVar30._16_8_;
    auVar33 = vblendpd_avx(ZEXT1632(CONCAT88(__real_3ff0000000000000,__real_3ff0000000000000)),
                           auVar131,0xc);
    auVar80 = vperm2f128_avx(auVar30,auVar30,0x28);
    auVar31._0_8_ = auVar33._0_8_ * auVar17._0_8_ + auVar80._0_8_ * __real_8000000000000000;
    auVar31._8_8_ = auVar33._8_8_ * auVar17._8_8_ + auVar80._8_8_ * __real_8000000000000000;
    auVar31._16_8_ = auVar33._16_8_ * 0.0 + auVar80._16_8_ * __real_8000000000000000;
    auVar31._24_8_ = auVar33._24_8_ * 0.0 + auVar80._24_8_ * __real_8000000000000000;
    auVar54 = vshufpd_avx(auVar330,auVar343,1);
    auVar34 = vpermpd_avx2(ZEXT1632(auVar54),0x50);
    auVar80 = vpblendd_avx2(ZEXT832((ulonglong)auVar350._16_8_),auVar337,0x30);
    auVar54 = vshufpd_avx(auVar343,auVar330,1);
    auVar35 = vpermpd_avx2(ZEXT1632(auVar54),0x50);
    auVar33 = vpblendd_avx2(ZEXT832((ulonglong)auVar337._16_8_),auVar350,0x30);
    auVar311._0_8_ = auVar80._0_8_ * auVar34._0_8_ - auVar35._0_8_ * auVar33._0_8_;
    auVar311._8_8_ = auVar80._8_8_ * auVar34._8_8_ - auVar35._8_8_ * auVar33._8_8_;
    auVar318._16_8_ = auVar80._16_8_ * auVar34._16_8_ - auVar35._16_8_ * auVar33._16_8_;
    auVar318._0_16_ = auVar311;
    auVar318._24_8_ = auVar80._24_8_ * auVar34._24_8_ - auVar35._24_8_ * auVar33._24_8_;
    auVar34 = vpermpd_avx2(auVar298,0xff);
    auVar35 = vpermpd_avx2(auVar298,0x55);
    auVar85 = vpermpd_avx2(auVar298,0xaa);
    auVar132._0_8_ = auVar34._0_8_ * auVar298._0_8_ + auVar35._0_8_ * auVar85._0_8_;
    auVar132._8_8_ = auVar34._8_8_ * auVar298._0_8_ + auVar35._8_8_ * auVar85._8_8_;
    auVar132._16_8_ = auVar34._16_8_ * auVar298._0_8_ + auVar35._16_8_ * auVar85._16_8_;
    auVar132._24_8_ = auVar34._24_8_ * auVar298._0_8_ + auVar35._24_8_ * auVar85._24_8_;
    auVar33 = vpermpd_avx2(auVar31,0xd8);
    auVar76._0_8_ = auVar311._0_8_ * auVar33._0_8_;
    auVar76._8_8_ = auVar311._8_8_ * auVar33._8_8_;
    auVar76._16_8_ = auVar318._16_8_ * auVar33._16_8_;
    auVar76._24_8_ = auVar318._24_8_ * auVar33._24_8_;
    auVar33 = vpermpd_avx2(auVar76,0x4e);
    auVar77._0_8_ = auVar76._0_8_ + auVar33._0_8_;
    auVar77._8_8_ = auVar76._8_8_ + auVar33._8_8_;
    auVar77._16_8_ = auVar76._16_8_ + auVar33._16_8_;
    auVar77._24_8_ = auVar76._24_8_ + auVar33._24_8_;
    auVar33 = vpermpd_avx2(auVar77,0x39);
    auVar78._0_8_ = auVar77._0_8_ + auVar33._0_8_;
    auVar78._8_8_ = auVar77._8_8_ + auVar33._8_8_;
    auVar78._16_8_ = auVar77._16_8_ + auVar33._16_8_;
    auVar78._24_8_ = auVar77._24_8_ + auVar33._24_8_;
    auVar33 = vsubpd_avx(auVar132,auVar78);
    if ((auVar33._0_8_ == 0.0) && (!NAN(auVar33._0_8_))) goto LAB_1409ed3e3;
    auVar54 = vunpcklpd_avx(auVar343,auVar330);
    auVar168 = vpermpd_avx2(ZEXT1632(auVar54),0x60);
    auVar82 = vpermpd_avx2(auVar31,0x55);
    auVar262._0_8_ = auVar311._0_8_ * __real_3ff0000000000000;
    auVar262._8_8_ = auVar311._8_8_ * 0.0;
    auVar262._16_8_ = auVar318._16_8_ * 0.0;
    auVar262._24_8_ = auVar318._24_8_ * 0.0;
    auVar200 = vpermpd_avx2(auVar262,0x34);
    auVar202 = vpermpd_avx2(auVar318,100);
    auVar263 = vpermpd_avx2(auVar31,0xcc);
    auVar133 = vpermpd_avx2(auVar350,0xaa);
    auVar133 = vblendpd_avx(ZEXT832(0) << 0x40,auVar133,2);
    auVar338._8_8_ = auVar330._0_8_;
    auVar338._0_8_ = auVar330._0_8_;
    auVar338._16_8_ = auVar337._16_8_;
    auVar338._24_8_ = auVar337._16_8_;
    auVar133 = vblendpd_avx(auVar133,auVar338,8);
    auVar264 = vpermpd_avx2(auVar31,0x66);
    auVar33 = vdivpd_avx(___ymm_3ff0000000000000bff0000000000000bff00000000000003ff0000000000000,
                         auVar33);
    auVar18._0_8_ =
         (auVar343._0_8_ * auVar34._0_8_ -
         (auVar80._0_8_ * auVar263._0_8_ + auVar133._0_8_ * auVar264._0_8_)) * auVar33._0_8_;
    auVar18._8_8_ =
         (auVar343._8_8_ * auVar34._8_8_ -
         (auVar80._8_8_ * auVar263._8_8_ + auVar133._8_8_ * auVar264._8_8_)) * auVar33._8_8_;
    dVar183 = auVar33._16_8_;
    auVar32._16_8_ =
         (auVar330._0_8_ * auVar34._16_8_ -
         (auVar80._16_8_ * auVar263._16_8_ + auVar133._16_8_ * auVar264._16_8_)) * dVar183;
    auVar32._0_16_ = auVar18;
    dVar215 = auVar33._24_8_;
    auVar32._24_8_ =
         (auVar330._8_8_ * auVar34._24_8_ -
         (auVar80._24_8_ * auVar263._24_8_ + auVar133._24_8_ * auVar264._24_8_)) * dVar215;
    auVar54 = vshufpd_avx(auVar18,auVar18,1);
    auVar48 = auVar32._16_16_;
    auVar252 = vshufpd_avx(auVar48,auVar48,1);
    auVar362._0_8_ =
         (auVar35._16_8_ * 0.0 - (-(auVar202._16_8_ * _DAT_150aa8e90) + auVar200._16_8_)) * dVar183;
    auVar362._8_8_ =
         (auVar35._24_8_ * 0.0 - (-(auVar202._24_8_ * _UNK_150aa8e98) + auVar200._24_8_)) * dVar215;
    auVar152 = vshufpd_avx(auVar362,auVar362,1);
    auVar55._0_8_ =
         (auVar85._0_8_ * 0.0 - (auVar343._0_8_ * auVar31._0_8_ - auVar82._0_8_ * auVar168._0_8_)) *
         auVar33._0_8_;
    auVar55._8_8_ =
         (auVar85._8_8_ * 0.0 - (auVar343._8_8_ * auVar31._0_8_ - auVar82._8_8_ * auVar168._8_8_)) *
         auVar33._8_8_;
    auVar79._16_8_ =
         (auVar85._16_8_ * 0.0 - (auVar330._0_8_ * auVar31._0_8_ - auVar82._16_8_ * auVar168._16_8_)
         ) * dVar183;
    auVar79._0_16_ = auVar55;
    auVar79._24_8_ =
         (auVar85._24_8_ * 0.0 - (auVar330._8_8_ * auVar31._0_8_ - auVar82._24_8_ * auVar168._24_8_)
         ) * dVar215;
    auVar15 = vshufpd_avx(auVar55,auVar55,1);
    auVar19 = vshufpd_avx(auVar79._16_16_,auVar79._16_16_,1);
    auVar186 = vshufpd_avx(auVar318._16_16_,auVar318._16_16_,1);
    auVar250 = vshufpd_avx(auVar311,auVar311,1);
    auVar223 = vshufpd_avx(auVar33._16_16_,auVar33._16_16_,1);
    auVar249._8_8_ = 0;
    auVar249._0_8_ =
         (auVar298._0_8_ - (auVar186._0_8_ * 0.0 + auVar250._0_8_ * 0.0)) * auVar223._0_8_;
  }
  auVar15 = vunpcklpd_avx(auVar19,auVar15);
  auVar19 = vunpcklpd_avx(auVar48,auVar18);
  auVar54 = vunpcklpd_avx(auVar252,auVar54);
  dVar183 = *param_2;
  dVar215 = param_2[1];
  dVar216 = param_2[2];
  auVar36._0_8_ =
       param_3 * (auVar15._0_8_ * dVar216 + auVar54._0_8_ * dVar183 + auVar19._0_8_ * dVar215);
  auVar36._8_8_ =
       param_3 * (auVar15._8_8_ * dVar216 + auVar54._8_8_ * dVar183 + auVar19._8_8_ * dVar215);
  auVar36._16_8_ =
       param_3 * (auVar249._0_8_ * dVar216 + auVar152._0_8_ * dVar183 + auVar362._0_8_ * dVar215);
  auVar36._24_8_ =
       param_3 * (auVar249._8_8_ * dVar216 + auVar152._8_8_ * dVar183 + auVar362._8_8_ * dVar215);
  dVar183 = *(double *)param_1[10];
  auVar333._8_8_ = 0;
  auVar333._0_8_ = *(ulonglong *)(param_1[10] + 0x10);
  auVar347._8_8_ = 0;
  auVar347._0_8_ = *(ulonglong *)param_1[0xb];
  uVar2 = *(undefined8 *)(param_1[0xb] + 8);
  auVar357._8_8_ = 0;
  auVar357._0_8_ = *(ulonglong *)param_1[0x18];
  auVar253._8_8_ = 0;
  auVar253._0_8_ = *(ulonglong *)(param_1[0x18] + 8);
  dVar215 = *(double *)(param_1[0x18] + 0x10);
  uVar149 = *(ulonglong *)(param_1[0x19] + 8);
  auVar314._8_8_ = 0;
  auVar314._0_8_ = *(ulonglong *)(param_1[0x19] + 0x10);
  dVar216 = *(double *)param_1[0x1a];
  auVar5 = *(undefined1 (*) [24])(param_1[0xf] + 8);
  auVar91._24_8_ = 0;
  auVar91._0_24_ = auVar5;
  auVar188._0_8_ = auVar36._0_8_ * dVar183 + auVar5._0_8_;
  auVar188._8_8_ = auVar36._8_8_ * dVar183 + auVar5._8_8_;
  auVar204._16_8_ = auVar36._16_8_ * dVar183 + auVar5._16_8_;
  auVar204._0_16_ = auVar188;
  auVar204._24_8_ = auVar36._24_8_ * dVar183 + 0.0;
  local_248._24_8_ = 0;
  local_248._0_24_ = *(undefined1 (*) [24])(param_1[0x10] + 8);
  auVar371._0_8_ = -(auVar36._0_8_ * dVar50) + *(double *)*(undefined1 (*) [24])(param_1[0x10] + 8);
  auVar371._8_8_ = -(auVar36._8_8_ * dVar50) + *(double *)(param_1[0x10] + 0x10);
  auVar374._16_8_ = -(auVar36._16_8_ * dVar50) + *(double *)param_1[0x11];
  auVar374._0_16_ = auVar371;
  auVar374._24_8_ = -(auVar36._24_8_ * dVar50) + 0.0;
  auVar172._16_16_ = auVar371;
  auVar172._0_16_ = auVar188;
  auVar33 = vshufpd_avx(auVar204,auVar172,2);
  auVar189._8_8_ = 0;
  auVar189._0_8_ = *(ulonglong *)(param_1[0x1a] + 0x10);
  auVar154._8_8_ = 0;
  auVar154._0_8_ = *(ulonglong *)param_1[0x1b];
  dVar50 = *(double *)(param_1[0x1b] + 8);
  auVar5 = *(undefined1 (*) [24])(param_1[0xb] + 0x10);
  auVar9._8_8_ = dVar218;
  auVar9._0_8_ = dVar218;
  auVar54 = vmovhps_avx(auVar9,*(undefined8 *)(param_1[0x1d] + 0x10));
  local_168._8_8_ = *(undefined8 *)param_1[0x1e];
  local_168._0_8_ = local_168._8_8_;
  local_168._16_8_ = local_168._8_8_;
  local_168._24_8_ = local_168._8_8_;
  dVar277 = *(double *)(param_1[0x1f] + 8);
  *(undefined1 (*) [32])(param_1[0xf] + 8) = auVar33;
  auVar33 = vpermpd_avx2(auVar374,0xe9);
  *(undefined1 (*) [16])(param_1[0x10] + 0x10) = auVar33._0_16_;
  dVar247 = _UNK_150b54438;
  dVar219 = _UNK_150b54430;
  dVar289 = _UNK_150b54428;
  dVar287 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar288 = _UNK_150b54418;
  dVar278 = _UNK_150b54410;
  dVar182 = _UNK_150b54408;
  dVar181 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar114 = _UNK_15076c6f8;
  dVar45 = ___xmm_bff00000000000003ff0000000000000;
  auVar33 = vpermpd_avx2(auVar36,0xc9);
  if (0.0 < dVar183) {
    auVar152 = vunpcklpd_avx(auVar357,auVar253);
    auVar15 = vunpcklpd_avx(auVar333,auVar347);
    auVar266._16_8_ = uVar2;
    auVar266._0_16_ = auVar15;
    auVar266._24_8_ = 0;
    auVar80 = vsubpd_avx(auVar266,auVar91);
    auVar34 = vpermpd_avx2(auVar80,0xc9);
    auVar267._0_8_ = auVar33._0_8_ * auVar80._0_8_ - auVar36._0_8_ * auVar34._0_8_;
    auVar267._8_8_ = auVar33._8_8_ * auVar80._8_8_ - auVar36._8_8_ * auVar34._8_8_;
    auVar267._16_8_ = auVar33._16_8_ * auVar80._16_8_ - auVar36._16_8_ * auVar34._16_8_;
    auVar267._24_8_ = auVar33._24_8_ * auVar80._24_8_ - auVar36._24_8_ * auVar34._24_8_;
    auVar80 = vpermpd_avx2(auVar267,0x55);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar149;
    auVar15 = vunpcklpd_avx(auVar8,auVar314);
    auVar34 = vpermpd_avx2(auVar267,0xaa);
    auVar19 = vunpcklpd_avx(auVar189,auVar154);
    auVar173._0_8_ =
         auVar19._0_8_ * auVar267._0_8_ +
         auVar152._0_8_ * auVar80._0_8_ + auVar34._0_8_ * auVar15._0_8_;
    auVar173._8_8_ =
         auVar19._8_8_ * auVar267._0_8_ +
         auVar152._8_8_ * auVar80._8_8_ + auVar34._8_8_ * auVar15._8_8_;
    auVar173._16_8_ = dVar50 * auVar267._0_8_ + dVar215 * auVar80._16_8_ + auVar34._16_8_ * dVar216;
    auVar173._24_8_ = auVar267._0_8_ * 0.0 + auVar80._24_8_ * 0.0 + auVar34._24_8_ * 0.0;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = *(ulonglong *)(param_1[0x12] + 8);
    auVar152 = vmovhpd_avx(auVar20,*(undefined8 *)param_1[0x12]);
    auVar225._8_8_ = 0;
    auVar225._0_8_ = *(ulonglong *)(param_1[0x11] + 0x10);
    auVar15 = vmovhpd_avx(auVar225,*(undefined8 *)(param_1[0x11] + 8));
    auVar80 = vpermpd_avx2(auVar173,0x55);
    auVar34 = vpermpd_avx2(auVar173,0xaa);
    dVar183 = (___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
               auVar34._0_8_ * auVar15._0_8_ +
              ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
              auVar80._0_8_ * *(double *)param_1[0x12] +
              *(double *)(param_1[0x11] + 8) * 0.0 +
              auVar173._0_8_ * auVar152._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
              __real_3fe0000000000000 + *(double *)(param_1[0x11] + 8);
    dVar215 = (_UNK_150b54428 * auVar34._8_8_ * auVar15._8_8_ +
              _UNK_150b54408 * auVar80._8_8_ * *(double *)(param_1[0x12] + 8) +
              *(double *)(param_1[0x11] + 0x10) * 0.0 +
              auVar173._0_8_ * auVar152._8_8_ * _UNK_15076c6f8) * __real_3fe0000000000000 +
              *(double *)(param_1[0x11] + 0x10);
    dVar216 = (_UNK_150b54430 * auVar34._16_8_ * auVar152._0_8_ +
              _UNK_150b54410 * auVar80._16_8_ * *(double *)(param_1[0x11] + 8) +
              *(double *)param_1[0x12] * 0.0 +
              auVar173._0_8_ * auVar15._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
              __real_3fe0000000000000 + *(double *)param_1[0x12];
    dVar217 = (_UNK_150b54438 * auVar34._24_8_ * auVar152._8_8_ +
              _UNK_150b54418 * auVar80._24_8_ * *(double *)(param_1[0x11] + 0x10) +
              *(double *)(param_1[0x12] + 8) * 0.0 + auVar173._0_8_ * auVar15._8_8_ * _UNK_15076c6f8
              ) * __real_3fe0000000000000 + *(double *)(param_1[0x12] + 8);
    auVar57._0_8_ = dVar183 * dVar183 + dVar216 * dVar216;
    auVar57._8_8_ = dVar215 * dVar215 + dVar217 * dVar217;
    auVar152 = vshufpd_avx(auVar57,auVar57,1);
    dVar50 = auVar57._0_8_ + auVar152._0_8_;
    auVar155._8_8_ = 0;
    auVar155._0_8_ = __real_3e45798ee2308c3a;
    auVar58._8_8_ = 0;
    auVar58._0_8_ = dVar50;
    auVar152 = vcmpsd_avx(auVar155,auVar58,6);
    uVar149 = ~auVar152._0_8_ & __real_ffffffffffffffff;
    dVar50 = __real_3ff0000000000000 / SQRT(dVar50);
    dVar309 = (double)(((ulonglong)(dVar183 * dVar50) ^
                       ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) &
                      uVar149);
    dVar327 = (double)(((ulonglong)(dVar215 * dVar50) ^ _UNK_150b54548) & uVar149);
    dVar328 = (double)(((ulonglong)(dVar216 * dVar50) ^ _UNK_150b54550) & uVar149);
    dVar217 = (double)(((ulonglong)(dVar217 * dVar50) ^ _UNK_150b54558) & uVar149);
    auVar341._0_8_ =
         (double)((ulonglong)dVar309 ^
                 ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
    auVar341._8_8_ = (double)((ulonglong)dVar327 ^ _UNK_150b54548);
    auVar341._16_8_ = (double)((ulonglong)dVar328 ^ _UNK_150b54550);
    auVar341._24_8_ = (double)((ulonglong)dVar217 ^ _UNK_150b54558);
    *(undefined1 (*) [32])(param_1[0x11] + 8) = auVar341;
    auVar156._8_8_ = 0;
    auVar156._0_8_ = *(ulonglong *)(param_1[1] + 8);
    uVar2 = *(undefined8 *)(param_1[2] + 8);
    auVar190._8_8_ = uVar2;
    auVar190._0_8_ = uVar2;
    auVar205._16_8_ = uVar2;
    auVar205._0_16_ = auVar190;
    auVar205._24_8_ = uVar2;
    auVar152 = vunpcklpd_avx(auVar156,auVar190);
    auVar34 = vpermpd_avx2(auVar341,0xc9);
    auVar4 = *(undefined1 (*) [24])(param_1[1] + 8);
    auVar238._24_8_ = 0;
    auVar238._0_24_ = auVar4;
    auVar80 = vblendpd_avx(auVar238,auVar205,8);
    dVar50 = auVar341._0_8_ * SUB168(*(undefined1 (*) [16])(param_1[1] + 0x10),0) -
             auVar80._0_8_ * auVar34._0_8_;
    dVar183 = auVar341._8_8_ * SUB168(*(undefined1 (*) [16])(param_1[1] + 0x10),8) -
              auVar80._8_8_ * auVar34._8_8_;
    dVar215 = auVar341._16_8_ * auVar152._0_8_ - auVar80._16_8_ * auVar34._16_8_;
    dVar216 = auVar341._24_8_ * auVar152._8_8_ - auVar80._24_8_ * auVar34._24_8_;
    auVar92._0_8_ = dVar50 + dVar50;
    auVar92._8_8_ = dVar183 + dVar183;
    auVar92._16_8_ = dVar215 + dVar215;
    auVar92._24_8_ = dVar216 + dVar216;
    auVar80 = vpermpd_avx2(auVar341,0xff);
    auVar34 = vpermpd_avx2(auVar92,0xc9);
    dVar308 = auVar80._0_8_;
    dVar46 = auVar80._8_8_;
    dVar47 = auVar80._16_8_;
    dVar49 = auVar80._24_8_;
    auVar80 = vpermpd_avx2(auVar92,0xd2);
    auVar93._0_8_ = dVar309 * auVar92._0_8_;
    auVar93._8_8_ = dVar327 * auVar92._8_8_;
    auVar93._16_8_ = dVar328 * auVar92._16_8_;
    auVar93._24_8_ = dVar217 * auVar92._24_8_;
    auVar35 = vpermpd_avx2(auVar93,0xc9);
    auVar94._0_8_ = dVar309 * auVar80._0_8_ - auVar35._0_8_;
    auVar94._8_8_ = dVar327 * auVar80._8_8_ - auVar35._8_8_;
    auVar94._16_8_ = dVar328 * auVar80._16_8_ - auVar35._16_8_;
    auVar94._24_8_ = dVar217 * auVar80._24_8_ - auVar35._24_8_;
    auVar80 = vpermpd_avx2(auVar94,0xc9);
    auVar59._0_8_ =
         *(double *)(param_1[0xf] + 8) + dVar308 * auVar34._0_8_ + auVar4._0_8_ + auVar80._0_8_;
    auVar59._8_8_ =
         *(double *)(param_1[0xf] + 0x10) + dVar46 * auVar34._8_8_ + auVar4._8_8_ + auVar80._8_8_;
    auVar95._16_8_ =
         *(double *)param_1[0x10] + dVar47 * auVar34._16_8_ + auVar4._16_8_ + auVar80._16_8_;
    auVar95._0_16_ = auVar59;
    auVar95._24_8_ = dVar49 * auVar34._24_8_ + 0.0 + auVar80._24_8_ + 0.0;
    *(undefined1 (*) [16])(param_1[10] + 0x10) = auVar59;
    uVar2 = vmovlpd_avx(auVar95._16_16_);
    *(undefined8 *)(param_1[0xb] + 8) = uVar2;
    auVar157._8_8_ = 0;
    auVar157._0_8_ = *(ulonglong *)(*param_1 + 8);
    auVar152 = vmovhpd_avx(auVar157,*(undefined8 *)*param_1);
    auVar226._8_8_ = 0;
    auVar226._0_8_ = *(ulonglong *)param_1[1];
    auVar15 = vmovhpd_avx(auVar226,*(undefined8 *)(*param_1 + 0x10));
    dVar183 = *(double *)(*param_1 + 8);
    auVar4 = *param_1;
    dVar50 = *(double *)param_1[1];
    auVar80 = vpermpd_avx2(auVar341,0x55);
    dVar215 = *(double *)param_1[1];
    dVar216 = *(double *)*param_1;
    dVar217 = *(double *)(*param_1 + 8);
    auVar34 = vpermpd_avx2(auVar341,0xaa);
    *(double *)(param_1[0xc] + 0x10) =
         dVar287 * auVar152._0_8_ * auVar34._0_8_ +
         dVar181 * *(double *)(*param_1 + 0x10) * auVar80._0_8_ +
         dVar308 * *(double *)*param_1 + auVar15._0_8_ * dVar309 * dVar45;
    *(double *)param_1[0xd] =
         dVar289 * auVar152._8_8_ * auVar34._8_8_ +
         dVar182 * dVar215 * auVar80._8_8_ + dVar46 * dVar183 + auVar15._8_8_ * dVar309 * dVar114;
    *(double *)(param_1[0xd] + 8) =
         dVar219 * auVar15._0_8_ * auVar34._16_8_ +
         dVar278 * dVar216 * auVar80._16_8_ +
         dVar47 * auVar4._16_8_ + auVar152._0_8_ * dVar309 * dVar45;
    *(double *)(param_1[0xd] + 0x10) =
         dVar247 * auVar15._8_8_ * auVar34._24_8_ +
         dVar288 * dVar217 * auVar80._24_8_ + dVar49 * dVar50 + auVar152._8_8_ * dVar309 * dVar114;
    dVar50 = auVar341._0_8_ + auVar341._0_8_;
    dVar183 = auVar341._8_8_ + auVar341._8_8_;
    dVar215 = auVar341._16_8_ + auVar341._16_8_;
    dVar216 = auVar341._24_8_ + auVar341._24_8_;
    auVar96._0_8_ = dVar50 * dVar309;
    auVar96._8_8_ = dVar183 * dVar309;
    auVar96._16_8_ = dVar215 * dVar309;
    auVar96._24_8_ = dVar216 * dVar309;
    auVar254._0_8_ = dVar50 * auVar80._0_8_;
    auVar254._8_8_ = dVar183 * auVar80._8_8_;
    auVar268._16_8_ = dVar215 * auVar80._16_8_;
    auVar268._0_16_ = auVar254;
    auVar268._24_8_ = dVar216 * auVar80._24_8_;
    auVar174._0_8_ = dVar50 * dVar308;
    auVar174._8_8_ = dVar183 * dVar46;
    auVar174._16_8_ = dVar215 * dVar47;
    auVar174._24_8_ = dVar216 * dVar49;
    auVar80 = vperm2f128_avx(auVar268,auVar96,0x21);
    auVar80 = vshufpd_avx(auVar80,ZEXT1632(auVar96._16_16_),4);
    auVar21._0_8_ = auVar174._0_8_ + auVar80._0_8_;
    auVar21._8_8_ = auVar174._8_8_ + auVar80._8_8_;
    auVar37._16_8_ = auVar174._16_8_ + auVar80._16_8_;
    auVar37._0_16_ = auVar21;
    auVar37._24_8_ = auVar174._24_8_ + auVar80._24_8_;
    auVar35 = vsubpd_avx(auVar80,auVar174);
    auVar152 = vshufpd_avx(auVar254,auVar254,1);
    auVar97._8_8_ = auVar96._0_8_;
    auVar97._0_8_ = auVar96._0_8_;
    auVar97._16_8_ = auVar96._0_8_;
    auVar97._24_8_ = auVar96._0_8_;
    auVar80 = vblendpd_avx(auVar97,ZEXT1632(auVar152),1);
    auVar34 = vpermpd_avx2(auVar268,0x55);
    auVar34 = vblendpd_avx(ZEXT1632(CONCAT88(dVar328 * dVar215,dVar328 * dVar215)),auVar34,0xc);
    auVar98._0_8_ = auVar80._0_8_ + auVar34._0_8_;
    auVar98._8_8_ = auVar80._8_8_ + auVar34._8_8_;
    auVar98._16_8_ = auVar80._16_8_ + auVar34._16_8_;
    auVar98._24_8_ = auVar80._24_8_ + auVar34._24_8_;
    auVar175._8_8_ = __real_3ff0000000000000;
    auVar175._0_8_ = __real_3ff0000000000000;
    auVar175._16_8_ = __real_3ff0000000000000;
    auVar175._24_8_ = __real_3ff0000000000000;
    auVar34 = vsubpd_avx(auVar175,auVar98);
    dVar215 = auVar34._0_8_;
    dVar50 = *(double *)param_1[8];
    dVar183 = *(double *)(param_1[8] + 0x10);
    auVar152 = vmovhpd_avx(ZEXT816(0) << 0x40,*(undefined8 *)(param_1[8] + 8));
    auVar80 = vpermpd_avx2(auVar35,0xaa);
    dVar216 = auVar152._0_8_;
    dVar45 = auVar152._8_8_;
    auVar85 = vpermpd_avx2(auVar37,0x55);
    auVar324._0_8_ = auVar85._0_8_ * 0.0 + dVar216 * auVar80._0_8_ + dVar50 * dVar215;
    auVar324._8_8_ = auVar85._8_8_ * 0.0 + dVar45 * auVar80._8_8_ + dVar215 * 0.0;
    auVar324._16_8_ = dVar183 * auVar85._16_8_ + auVar80._16_8_ * 0.0 + dVar215 * 0.0;
    auVar324._24_8_ = auVar85._24_8_ * 0.0 + auVar80._24_8_ * 0.0 + dVar215 * 0.0;
    auVar80 = vpermpd_avx2(auVar37,0xaa);
    auVar85 = vpermpd_avx2(auVar34,0x55);
    dVar215 = auVar35._0_8_;
    auVar269._0_8_ = dVar215 * 0.0 + dVar50 * auVar80._0_8_ + dVar216 * auVar85._0_8_;
    auVar269._8_8_ = dVar215 * 0.0 + auVar80._8_8_ * 0.0 + dVar45 * auVar85._8_8_;
    auVar269._16_8_ = dVar183 * dVar215 + auVar80._16_8_ * 0.0 + auVar85._16_8_ * 0.0;
    auVar269._24_8_ = dVar215 * 0.0 + auVar80._24_8_ * 0.0 + auVar85._24_8_ * 0.0;
    auVar80 = vpermpd_avx2(auVar35,0x55);
    auVar85 = vpermpd_avx2(auVar34,0xaa);
    auVar99._0_8_ = auVar85._0_8_ * 0.0 + auVar80._0_8_ * dVar50 + dVar216 * auVar21._0_8_;
    auVar99._8_8_ = auVar85._8_8_ * 0.0 + auVar80._8_8_ * 0.0 + dVar45 * auVar21._0_8_;
    auVar99._16_8_ = dVar183 * auVar85._16_8_ + auVar80._16_8_ * 0.0 + auVar21._0_8_ * 0.0;
    auVar99._24_8_ = auVar85._24_8_ * 0.0 + auVar80._24_8_ * 0.0 + auVar21._0_8_ * 0.0;
    auVar152 = vunpcklpd_avx(auVar34._0_16_,auVar37._16_16_);
    auVar80 = vblendpd_avx(ZEXT1632(auVar152),auVar80,0xc);
    auVar85 = vpermpd_avx2(auVar324,0x55);
    auVar152 = vblendpd_avx(auVar34._0_16_,auVar35._16_16_,1);
    dVar278 = auVar152._0_8_;
    dVar288 = auVar152._8_8_;
    dVar45 = auVar80._0_8_;
    dVar114 = auVar80._8_8_;
    dVar181 = auVar80._16_8_;
    dVar182 = auVar80._24_8_;
    auVar133 = vpermpd_avx2(auVar324,0xaa);
    auVar152 = vshufpd_avx(auVar21,auVar35._0_16_,1);
    auVar80 = vblendpd_avx(auVar34,ZEXT1632(auVar152),3);
    dVar50 = auVar80._0_8_;
    auVar158._0_8_ = dVar50 * auVar133._0_8_ + dVar45 * auVar324._0_8_ + dVar278 * auVar85._0_8_;
    dVar183 = auVar80._8_8_;
    auVar158._8_8_ = dVar183 * auVar133._8_8_ + dVar114 * auVar324._0_8_ + dVar288 * auVar85._8_8_;
    dVar215 = auVar80._16_8_;
    auVar176._16_8_ =
         dVar215 * auVar133._16_8_ + dVar181 * auVar324._0_8_ + auVar21._0_8_ * auVar85._16_8_;
    auVar176._0_16_ = auVar158;
    dVar216 = auVar80._24_8_;
    auVar176._24_8_ =
         dVar216 * auVar133._24_8_ + dVar182 * auVar324._0_8_ + auVar21._8_8_ * auVar85._24_8_;
    auVar80 = vpermpd_avx2(auVar269,0x55);
    auVar34 = vpermpd_avx2(auVar269,0xaa);
    auVar255._0_8_ = dVar50 * auVar34._0_8_ + dVar45 * auVar269._0_8_ + dVar278 * auVar80._0_8_;
    auVar255._8_8_ = dVar183 * auVar34._8_8_ + dVar114 * auVar269._0_8_ + dVar288 * auVar80._8_8_;
    auVar270._16_8_ =
         dVar215 * auVar34._16_8_ + dVar181 * auVar269._0_8_ + auVar21._0_8_ * auVar80._16_8_;
    auVar270._0_16_ = auVar255;
    auVar270._24_8_ =
         dVar216 * auVar34._24_8_ + dVar182 * auVar269._0_8_ + auVar21._8_8_ * auVar80._24_8_;
    auVar80 = vpermpd_avx2(auVar99,0x55);
    auVar34 = vpermpd_avx2(auVar99,0xaa);
    *(undefined1 (*) [16])param_1[0x18] = auVar158;
    uVar2 = vmovlpd_avx(auVar176._16_16_);
    *(undefined8 *)(param_1[0x18] + 0x10) = uVar2;
    auVar60._0_8_ = dVar50 * auVar34._0_8_ + dVar45 * auVar99._0_8_ + dVar278 * auVar80._0_8_;
    auVar60._8_8_ = dVar183 * auVar34._8_8_ + dVar114 * auVar99._0_8_ + dVar288 * auVar80._8_8_;
    auVar100._16_8_ =
         dVar215 * auVar34._16_8_ + dVar181 * auVar99._0_8_ + auVar21._0_8_ * auVar80._16_8_;
    auVar100._0_16_ = auVar60;
    auVar100._24_8_ =
         dVar216 * auVar34._24_8_ + dVar182 * auVar99._0_8_ + auVar21._8_8_ * auVar80._24_8_;
    *(undefined8 *)param_1[0x19] = 0;
    *(undefined1 (*) [16])(param_1[0x19] + 8) = auVar255;
    uVar2 = vmovlpd_avx(auVar270._16_16_);
    *(undefined8 *)param_1[0x1a] = uVar2;
    *(undefined8 *)(param_1[0x1a] + 8) = 0;
    *(undefined1 (*) [16])(param_1[0x1a] + 0x10) = auVar60;
    uVar2 = vmovlpd_avx(auVar100._16_16_);
    *(undefined8 *)(param_1[0x1b] + 8) = uVar2;
    *(undefined1 (*) [32])(param_1[0x1b] + 0x10) = ZEXT1632(ZEXT816(0));
    *(undefined8 *)param_1[0x1d] = 0x3ff0000000000000;
  }
  dVar288 = _UNK_150b54438;
  dVar278 = _UNK_150b54430;
  dVar182 = _UNK_150b54428;
  dVar181 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar114 = _UNK_150b54418;
  dVar45 = _UNK_150b54410;
  dVar216 = _UNK_150b54408;
  dVar215 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar183 = _UNK_15076c6f8;
  dVar50 = ___xmm_bff00000000000003ff0000000000000;
  if (__real_0000000000000000 < *(double *)(param_1[10] + 8)) {
    auVar38._24_8_ = 0;
    auVar38._0_24_ = auVar5;
    auVar80 = vsubpd_avx(auVar38,local_248);
    auVar34 = vpermpd_avx2(auVar80,0xc9);
    auVar152 = vunpcklpd_avx(auVar290,auVar375);
    auVar39._0_8_ = auVar36._0_8_ * auVar34._0_8_ - auVar33._0_8_ * auVar80._0_8_;
    auVar39._8_8_ = auVar36._8_8_ * auVar34._8_8_ - auVar33._8_8_ * auVar80._8_8_;
    auVar39._16_8_ = auVar36._16_8_ * auVar34._16_8_ - auVar33._16_8_ * auVar80._16_8_;
    auVar39._24_8_ = auVar36._24_8_ * auVar34._24_8_ - auVar33._24_8_ * auVar80._24_8_;
    auVar15 = vunpcklpd_avx(auVar355,auVar368);
    auVar10._8_8_ = dVar218;
    auVar10._0_8_ = dVar218;
    auVar10._16_8_ = dVar218;
    auVar10._24_8_ = dVar218;
    auVar33 = vblendpd_avx(ZEXT1632(auVar54),auVar10,0xc);
    auVar33 = vblendpd_avx(auVar33,local_168,4);
    auVar34 = vpermpd_avx2(auVar39,0xaa);
    auVar35 = vpermpd_avx2(auVar39,0x55);
    auVar80 = vblendpd_avx(auVar360,ZEXT1632(auVar15),3);
    auVar177._8_8_ = uVar1;
    auVar177._0_8_ = uVar1;
    auVar177._16_8_ = uVar1;
    auVar177._24_8_ = uVar1;
    auVar80 = vblendpd_avx(auVar80,auVar177,4);
    auVar206._0_8_ =
         auVar80._0_8_ * auVar39._0_8_ +
         auVar33._0_8_ * auVar35._0_8_ + auVar34._0_8_ * auVar152._0_8_;
    auVar206._8_8_ =
         auVar80._8_8_ * auVar39._0_8_ +
         auVar33._8_8_ * auVar35._8_8_ + auVar34._8_8_ * auVar152._8_8_;
    auVar206._16_8_ =
         auVar80._16_8_ * auVar39._0_8_ + auVar33._16_8_ * auVar35._16_8_ + auVar34._16_8_ * dVar277
    ;
    auVar206._24_8_ =
         auVar80._24_8_ * auVar39._0_8_ + auVar33._24_8_ * auVar35._24_8_ + auVar34._24_8_ * 0.0;
    auVar61._8_8_ = 0;
    auVar61._0_8_ = *(ulonglong *)(param_1[0x13] + 0x10);
    auVar54 = vmovhpd_avx(auVar61,*(undefined8 *)(param_1[0x13] + 8));
    auVar159._8_8_ = 0;
    auVar159._0_8_ = *(ulonglong *)param_1[0x13];
    auVar152 = vmovhpd_avx(auVar159,*(undefined8 *)(param_1[0x12] + 0x10));
    auVar33 = vpermpd_avx2(auVar206,0x55);
    auVar80 = vpermpd_avx2(auVar206,0xaa);
    dVar277 = (___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
               auVar80._0_8_ * auVar152._0_8_ +
              ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
              auVar33._0_8_ * *(double *)(param_1[0x13] + 8) +
              *(double *)(param_1[0x12] + 0x10) * 0.0 +
              auVar206._0_8_ * auVar54._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
              __real_3fe0000000000000 + *(double *)(param_1[0x12] + 0x10);
    dVar287 = (_UNK_150b54428 * auVar80._8_8_ * auVar152._8_8_ +
              _UNK_150b54408 * auVar33._8_8_ * *(double *)(param_1[0x13] + 0x10) +
              *(double *)param_1[0x13] * 0.0 + auVar206._0_8_ * auVar54._8_8_ * _UNK_15076c6f8) *
              __real_3fe0000000000000 + *(double *)param_1[0x13];
    dVar289 = (_UNK_150b54430 * auVar80._16_8_ * auVar54._0_8_ +
              _UNK_150b54410 * auVar33._16_8_ * *(double *)(param_1[0x12] + 0x10) +
              *(double *)(param_1[0x13] + 8) * 0.0 +
              auVar206._0_8_ * auVar152._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
              __real_3fe0000000000000 + *(double *)(param_1[0x13] + 8);
    dVar217 = (_UNK_150b54438 * auVar80._24_8_ * auVar54._8_8_ +
              _UNK_150b54418 * auVar33._24_8_ * *(double *)param_1[0x13] +
              *(double *)(param_1[0x13] + 0x10) * 0.0 +
              auVar206._0_8_ * auVar152._8_8_ * _UNK_15076c6f8) * __real_3fe0000000000000 +
              *(double *)(param_1[0x13] + 0x10);
    auVar227._0_8_ = dVar277 * dVar277 + dVar289 * dVar289;
    auVar227._8_8_ = dVar287 * dVar287 + dVar217 * dVar217;
    auVar54 = vshufpd_avx(auVar227,auVar227,1);
    dVar218 = auVar227._0_8_ + auVar54._0_8_;
    auVar256._8_8_ = 0;
    auVar256._0_8_ = __real_3e45798ee2308c3a;
    auVar228._8_8_ = 0;
    auVar228._0_8_ = dVar218;
    auVar54 = vcmpsd_avx(auVar256,auVar228,6);
    uVar149 = ~auVar54._0_8_ & __real_ffffffffffffffff;
    dVar218 = __real_3ff0000000000000 / SQRT(dVar218);
    dVar219 = (double)(((ulonglong)(dVar277 * dVar218) ^
                       ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) &
                      uVar149);
    dVar277 = (double)(((ulonglong)(dVar287 * dVar218) ^ _UNK_150b54548) & uVar149);
    dVar247 = (double)(((ulonglong)(dVar289 * dVar218) ^ _UNK_150b54550) & uVar149);
    dVar218 = (double)(((ulonglong)(dVar217 * dVar218) ^ _UNK_150b54558) & uVar149);
    auVar271._0_8_ =
         (double)((ulonglong)dVar219 ^
                 ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
    auVar271._8_8_ = (double)((ulonglong)dVar277 ^ _UNK_150b54548);
    auVar271._16_8_ = (double)((ulonglong)dVar247 ^ _UNK_150b54550);
    auVar271._24_8_ = (double)((ulonglong)dVar218 ^ _UNK_150b54558);
    *(undefined1 (*) [32])(param_1[0x12] + 0x10) = auVar271;
    auVar292._8_8_ = 0;
    auVar292._0_8_ = *(ulonglong *)(param_1[5] + 8);
    uVar1 = *(undefined8 *)(param_1[6] + 8);
    auVar315._8_8_ = uVar1;
    auVar315._0_8_ = uVar1;
    auVar325._16_8_ = uVar1;
    auVar325._0_16_ = auVar315;
    auVar325._24_8_ = uVar1;
    auVar54 = vunpcklpd_avx(auVar292,auVar315);
    auVar80 = vpermpd_avx2(auVar271,0xc9);
    auVar5 = *(undefined1 (*) [24])(param_1[5] + 8);
    auVar342._24_8_ = 0;
    auVar342._0_24_ = auVar5;
    auVar33 = vblendpd_avx(auVar342,auVar325,8);
    dVar287 = auVar271._0_8_ * SUB168(*(undefined1 (*) [16])(param_1[5] + 0x10),0) -
              auVar33._0_8_ * auVar80._0_8_;
    dVar289 = auVar271._8_8_ * SUB168(*(undefined1 (*) [16])(param_1[5] + 0x10),8) -
              auVar33._8_8_ * auVar80._8_8_;
    dVar217 = auVar271._16_8_ * auVar54._0_8_ - auVar33._16_8_ * auVar80._16_8_;
    dVar308 = auVar271._24_8_ * auVar54._8_8_ - auVar33._24_8_ * auVar80._24_8_;
    auVar301._0_8_ = dVar287 + dVar287;
    auVar301._8_8_ = dVar289 + dVar289;
    auVar301._16_8_ = dVar217 + dVar217;
    auVar301._24_8_ = dVar308 + dVar308;
    auVar33 = vpermpd_avx2(auVar271,0xff);
    auVar80 = vpermpd_avx2(auVar301,0xc9);
    dVar217 = auVar33._0_8_;
    dVar308 = auVar33._8_8_;
    dVar46 = auVar33._16_8_;
    dVar47 = auVar33._24_8_;
    auVar33 = vpermpd_avx2(auVar301,0xd2);
    auVar302._0_8_ = auVar301._0_8_ * dVar219;
    auVar302._8_8_ = auVar301._8_8_ * dVar277;
    auVar302._16_8_ = auVar301._16_8_ * dVar247;
    auVar302._24_8_ = auVar301._24_8_ * dVar218;
    auVar34 = vpermpd_avx2(auVar302,0xc9);
    auVar303._0_8_ = dVar219 * auVar33._0_8_ - auVar34._0_8_;
    auVar303._8_8_ = dVar277 * auVar33._8_8_ - auVar34._8_8_;
    auVar303._16_8_ = dVar247 * auVar33._16_8_ - auVar34._16_8_;
    auVar303._24_8_ = dVar218 * auVar33._24_8_ - auVar34._24_8_;
    auVar33 = vpermpd_avx2(auVar303,0xc9);
    auVar293._0_8_ =
         *(double *)(param_1[0x10] + 8) + dVar217 * auVar80._0_8_ + auVar5._0_8_ + auVar33._0_8_;
    auVar293._8_8_ =
         *(double *)(param_1[0x10] + 0x10) + dVar308 * auVar80._8_8_ + auVar5._8_8_ + auVar33._8_8_;
    auVar304._16_8_ =
         *(double *)param_1[0x11] + dVar46 * auVar80._16_8_ + auVar5._16_8_ + auVar33._16_8_;
    auVar304._0_16_ = auVar293;
    auVar304._24_8_ = dVar47 * auVar80._24_8_ + 0.0 + auVar33._24_8_ + 0.0;
    *(undefined1 (*) [16])(param_1[0xb] + 0x10) = auVar293;
    uVar1 = vmovlpd_avx(auVar304._16_16_);
    *(undefined8 *)(param_1[0xc] + 8) = uVar1;
    auVar316._8_8_ = 0;
    auVar316._0_8_ = *(ulonglong *)(param_1[4] + 8);
    auVar54 = vmovhpd_avx(auVar316,*(undefined8 *)param_1[4]);
    auVar334._8_8_ = 0;
    auVar334._0_8_ = *(ulonglong *)param_1[5];
    auVar152 = vmovhpd_avx(auVar334,*(undefined8 *)(param_1[4] + 0x10));
    dVar277 = *(double *)(param_1[4] + 8);
    auVar5 = param_1[4];
    dVar218 = *(double *)param_1[5];
    auVar33 = vpermpd_avx2(auVar271,0x55);
    dVar287 = *(double *)param_1[4];
    dVar289 = *(double *)(param_1[4] + 8);
    auVar80 = vpermpd_avx2(auVar271,0xaa);
    *(double *)param_1[0xe] =
         dVar181 * auVar54._0_8_ * auVar80._0_8_ +
         dVar215 * *(double *)(param_1[4] + 0x10) * auVar33._0_8_ +
         dVar217 * *(double *)param_1[4] + auVar152._0_8_ * dVar219 * dVar50;
    *(double *)(param_1[0xe] + 8) =
         dVar182 * auVar54._8_8_ * auVar80._8_8_ +
         dVar216 * *(double *)param_1[5] * auVar33._8_8_ +
         dVar308 * dVar277 + auVar152._8_8_ * dVar219 * dVar183;
    *(double *)(param_1[0xe] + 0x10) =
         dVar278 * auVar152._0_8_ * auVar80._16_8_ +
         dVar45 * dVar287 * auVar33._16_8_ +
         dVar46 * auVar5._16_8_ + auVar54._0_8_ * dVar219 * dVar50;
    *(double *)param_1[0xf] =
         dVar288 * auVar152._8_8_ * auVar80._24_8_ +
         dVar114 * dVar289 * auVar33._24_8_ + dVar47 * dVar218 + auVar54._8_8_ * dVar219 * dVar183;
    dVar50 = auVar271._0_8_ + auVar271._0_8_;
    dVar183 = auVar271._8_8_ + auVar271._8_8_;
    dVar215 = auVar271._16_8_ + auVar271._16_8_;
    dVar218 = auVar271._24_8_ + auVar271._24_8_;
    auVar239._0_8_ = dVar219 * dVar50;
    auVar239._8_8_ = dVar219 * dVar183;
    auVar239._16_8_ = dVar219 * dVar215;
    auVar239._24_8_ = dVar219 * dVar218;
    auVar257._0_8_ = auVar33._0_8_ * dVar50;
    auVar257._8_8_ = auVar33._8_8_ * dVar183;
    auVar272._16_8_ = auVar33._16_8_ * dVar215;
    auVar272._0_16_ = auVar257;
    auVar272._24_8_ = auVar33._24_8_ * dVar218;
    auVar178._0_8_ = dVar50 * dVar217;
    auVar178._8_8_ = dVar183 * dVar308;
    auVar178._16_8_ = dVar215 * dVar46;
    auVar178._24_8_ = dVar218 * dVar47;
    auVar33 = vperm2f128_avx(auVar272,auVar239,0x21);
    auVar33 = vshufpd_avx(auVar33,ZEXT1632(auVar239._16_16_),4);
    auVar62._0_8_ = auVar178._0_8_ + auVar33._0_8_;
    auVar62._8_8_ = auVar178._8_8_ + auVar33._8_8_;
    auVar101._16_8_ = auVar178._16_8_ + auVar33._16_8_;
    auVar101._0_16_ = auVar62;
    auVar101._24_8_ = auVar178._24_8_ + auVar33._24_8_;
    auVar34 = vsubpd_avx(auVar33,auVar178);
    auVar54 = vshufpd_avx(auVar257,auVar257,1);
    auVar240._8_8_ = auVar239._0_8_;
    auVar240._0_8_ = auVar239._0_8_;
    auVar240._16_8_ = auVar239._0_8_;
    auVar240._24_8_ = auVar239._0_8_;
    auVar33 = vblendpd_avx(auVar240,ZEXT1632(auVar54),1);
    auVar80 = vpermpd_avx2(auVar272,0x55);
    auVar80 = vblendpd_avx(ZEXT1632(CONCAT88(dVar247 * dVar215,dVar247 * dVar215)),auVar80,0xc);
    auVar207._0_8_ = auVar33._0_8_ + auVar80._0_8_;
    auVar207._8_8_ = auVar33._8_8_ + auVar80._8_8_;
    auVar207._16_8_ = auVar33._16_8_ + auVar80._16_8_;
    auVar207._24_8_ = auVar33._24_8_ + auVar80._24_8_;
    auVar241._8_8_ = __real_3ff0000000000000;
    auVar241._0_8_ = __real_3ff0000000000000;
    auVar241._16_8_ = __real_3ff0000000000000;
    auVar241._24_8_ = __real_3ff0000000000000;
    auVar80 = vsubpd_avx(auVar241,auVar207);
    dVar215 = auVar80._0_8_;
    dVar50 = *(double *)param_1[9];
    dVar183 = *(double *)(param_1[9] + 0x10);
    auVar54 = vmovhpd_avx(ZEXT816(0) << 0x40,*(undefined8 *)(param_1[9] + 8));
    auVar33 = vpermpd_avx2(auVar34,0xaa);
    dVar218 = auVar54._0_8_;
    dVar216 = auVar54._8_8_;
    auVar35 = vpermpd_avx2(auVar101,0x55);
    auVar284._0_8_ = auVar35._0_8_ * 0.0 + dVar218 * auVar33._0_8_ + dVar50 * dVar215;
    auVar284._8_8_ = auVar35._8_8_ * 0.0 + dVar216 * auVar33._8_8_ + dVar215 * 0.0;
    auVar284._16_8_ = dVar183 * auVar35._16_8_ + auVar33._16_8_ * 0.0 + dVar215 * 0.0;
    auVar284._24_8_ = auVar35._24_8_ * 0.0 + auVar33._24_8_ * 0.0 + dVar215 * 0.0;
    auVar33 = vpermpd_avx2(auVar101,0xaa);
    auVar35 = vpermpd_avx2(auVar80,0x55);
    dVar215 = auVar34._0_8_;
    auVar273._0_8_ = dVar215 * 0.0 + dVar50 * auVar33._0_8_ + dVar218 * auVar35._0_8_;
    auVar273._8_8_ = dVar215 * 0.0 + auVar33._8_8_ * 0.0 + dVar216 * auVar35._8_8_;
    auVar273._16_8_ = dVar183 * dVar215 + auVar33._16_8_ * 0.0 + auVar35._16_8_ * 0.0;
    auVar273._24_8_ = dVar215 * 0.0 + auVar33._24_8_ * 0.0 + auVar35._24_8_ * 0.0;
    auVar33 = vpermpd_avx2(auVar34,0x55);
    auVar35 = vpermpd_avx2(auVar80,0xaa);
    auVar242._0_8_ = auVar35._0_8_ * 0.0 + auVar33._0_8_ * dVar50 + dVar218 * auVar62._0_8_;
    auVar242._8_8_ = auVar35._8_8_ * 0.0 + auVar33._8_8_ * 0.0 + dVar216 * auVar62._0_8_;
    auVar242._16_8_ = dVar183 * auVar35._16_8_ + auVar33._16_8_ * 0.0 + auVar62._0_8_ * 0.0;
    auVar242._24_8_ = auVar35._24_8_ * 0.0 + auVar33._24_8_ * 0.0 + auVar62._0_8_ * 0.0;
    auVar54 = vunpcklpd_avx(auVar80._0_16_,auVar101._16_16_);
    auVar33 = vblendpd_avx(ZEXT1632(auVar54),auVar33,0xc);
    auVar35 = vpermpd_avx2(auVar284,0x55);
    auVar54 = vblendpd_avx(auVar80._0_16_,auVar34._16_16_,1);
    dVar181 = auVar54._0_8_;
    dVar182 = auVar54._8_8_;
    dVar216 = auVar33._0_8_;
    dVar277 = auVar33._8_8_;
    dVar45 = auVar33._16_8_;
    dVar114 = auVar33._24_8_;
    auVar85 = vpermpd_avx2(auVar284,0xaa);
    auVar54 = vshufpd_avx(auVar62,auVar34._0_16_,1);
    auVar33 = vblendpd_avx(auVar80,ZEXT1632(auVar54),3);
    dVar50 = auVar33._0_8_;
    auVar281._0_8_ = dVar50 * auVar85._0_8_ + dVar216 * auVar284._0_8_ + dVar181 * auVar35._0_8_;
    dVar183 = auVar33._8_8_;
    auVar281._8_8_ = dVar183 * auVar85._8_8_ + dVar277 * auVar284._0_8_ + dVar182 * auVar35._8_8_;
    dVar215 = auVar33._16_8_;
    auVar285._16_8_ =
         dVar215 * auVar85._16_8_ + dVar45 * auVar284._0_8_ + auVar62._0_8_ * auVar35._16_8_;
    auVar285._0_16_ = auVar281;
    dVar218 = auVar33._24_8_;
    auVar285._24_8_ =
         dVar218 * auVar85._24_8_ + dVar114 * auVar284._0_8_ + auVar62._8_8_ * auVar35._24_8_;
    auVar33 = vpermpd_avx2(auVar273,0x55);
    auVar80 = vpermpd_avx2(auVar273,0xaa);
    auVar191._0_8_ = dVar50 * auVar80._0_8_ + dVar216 * auVar273._0_8_ + dVar181 * auVar33._0_8_;
    auVar191._8_8_ = dVar183 * auVar80._8_8_ + dVar277 * auVar273._0_8_ + dVar182 * auVar33._8_8_;
    auVar208._16_8_ =
         dVar215 * auVar80._16_8_ + dVar45 * auVar273._0_8_ + auVar62._0_8_ * auVar33._16_8_;
    auVar208._0_16_ = auVar191;
    auVar208._24_8_ =
         dVar218 * auVar80._24_8_ + dVar114 * auVar273._0_8_ + auVar62._8_8_ * auVar33._24_8_;
    auVar33 = vpermpd_avx2(auVar242,0x55);
    auVar80 = vpermpd_avx2(auVar242,0xaa);
    *(undefined1 (*) [16])(param_1[0x1d] + 8) = auVar281;
    uVar1 = vmovlpd_avx(auVar285._16_16_);
    *(undefined8 *)param_1[0x1e] = uVar1;
    auVar229._0_8_ = dVar50 * auVar80._0_8_ + dVar216 * auVar242._0_8_ + dVar181 * auVar33._0_8_;
    auVar229._8_8_ = dVar183 * auVar80._8_8_ + dVar277 * auVar242._0_8_ + dVar182 * auVar33._8_8_;
    auVar243._16_8_ =
         dVar215 * auVar80._16_8_ + dVar45 * auVar242._0_8_ + auVar62._0_8_ * auVar33._16_8_;
    auVar243._0_16_ = auVar229;
    auVar243._24_8_ =
         dVar218 * auVar80._24_8_ + dVar114 * auVar242._0_8_ + auVar62._8_8_ * auVar33._24_8_;
    *(undefined8 *)(param_1[0x1e] + 8) = 0;
    *(undefined1 (*) [16])(param_1[0x1e] + 0x10) = auVar191;
    uVar1 = vmovlpd_avx(auVar208._16_16_);
    *(undefined8 *)(param_1[0x1f] + 8) = uVar1;
    *(undefined8 *)(param_1[0x1f] + 0x10) = 0;
    *(undefined1 (*) [16])param_1[0x20] = auVar229;
    uVar1 = vmovlpd_avx(auVar243._16_16_);
    *(undefined8 *)(param_1[0x20] + 0x10) = uVar1;
    *(undefined8 *)param_1[0x21] = 0;
    *(undefined8 *)(param_1[0x21] + 8) = 0;
    *(undefined8 *)(param_1[0x21] + 0x10) = 0;
    *(undefined8 *)param_1[0x22] = 0;
    *(undefined8 *)(param_1[0x22] + 8) = 0x3ff0000000000000;
  }
  dVar50 = *(double *)param_1[0xe];
  dVar183 = *(double *)(param_1[0xe] + 8);
  dVar215 = *(double *)(param_1[0xe] + 0x10);
  dVar218 = *(double *)param_1[0xf];
  dVar216 = *(double *)param_1[0x13];
  dVar277 = *(double *)(param_1[0x13] + 8);
  dVar45 = *(double *)(param_1[0x13] + 0x10);
  auVar160._0_8_ =
       *(double *)(param_1[0x12] + 0x10) * *(double *)(param_1[0x11] + 8) +
       dVar277 * *(double *)param_1[0x12];
  auVar160._8_8_ =
       dVar216 * *(double *)(param_1[0x11] + 0x10) + dVar45 * *(double *)(param_1[0x12] + 8);
  auVar54 = vshufpd_avx(auVar160,auVar160,1);
  auVar161._8_8_ = 0;
  auVar161._0_8_ = auVar160._0_8_ + auVar54._0_8_;
  auVar54 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar161,2);
  auVar230._8_8_ = 0;
  auVar230._0_8_ = __real_3ff0000000000000;
  auVar258._8_8_ = 0;
  auVar258._0_8_ = __real_bff0000000000000;
  auVar54 = vblendvpd_avx(auVar258,auVar230,auVar54);
  dVar114 = auVar54._0_8_;
  *(double *)(param_1[0x12] + 0x10) = *(double *)(param_1[0x12] + 0x10) * dVar114;
  *(double *)param_1[0x13] = dVar216 * dVar114;
  *(double *)(param_1[0x13] + 8) = dVar277 * dVar114;
  *(double *)(param_1[0x13] + 0x10) = dVar45 * dVar114;
  auVar63._0_8_ =
       dVar50 * *(double *)(param_1[0xc] + 0x10) + dVar215 * *(double *)(param_1[0xd] + 8);
  auVar63._8_8_ = dVar183 * *(double *)param_1[0xd] + dVar218 * *(double *)(param_1[0xd] + 0x10);
  auVar54 = vshufpd_avx(auVar63,auVar63,1);
  auVar64._8_8_ = 0;
  auVar64._0_8_ = auVar63._0_8_ + auVar54._0_8_;
  auVar54 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar64,2);
  auVar54 = vblendvpd_avx(auVar258,auVar230,auVar54);
  dVar216 = auVar54._0_8_;
  *(double *)param_1[0xe] = dVar50 * dVar216;
  *(double *)(param_1[0xe] + 8) = dVar183 * dVar216;
  *(double *)(param_1[0xe] + 0x10) = dVar215 * dVar216;
  *(double *)param_1[0xf] = dVar218 * dVar216;
  auVar40._0_8_ = auVar36._0_8_ + *(double *)param_1[0x2c];
  auVar40._8_8_ = auVar36._8_8_ + *(double *)(param_1[0x2c] + 8);
  auVar40._16_8_ = auVar36._16_8_ + *(double *)(param_1[0x2c] + 0x10);
  auVar40._24_8_ = auVar36._24_8_ + 0.0;
LAB_1409eeaf2:
  *(undefined1 (*) [16])param_1[0x2c] = auVar40._0_16_;
  uVar1 = vmovlpd_avx(auVar40._16_16_);
  *(undefined8 *)(param_1[0x2c] + 0x10) = uVar1;
  return;
}

// SizeofFPBDJointSolver_avx2 @ 1409eeb70

undefined8 SizeofFPBDJointSolver_avx2(void)

{
  return 0x588;
}

// ApplyRotationDelta2_avx2 @ 1409eeb80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyRotationDelta2_avx2(undefined1 (*param_1) [24],double *param_2,double *param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [24];
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar8;
  double dVar9;
  double dVar16;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar48 [32];
  undefined1 auVar50 [32];
  ulonglong uVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar61;
  undefined1 auVar55 [32];
  undefined1 auVar57 [32];
  double dVar62;
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  double dVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  double dVar69;
  double dVar70;
  double dVar71;
  double dVar72;
  double dVar73;
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  double dVar81;
  double dVar82;
  double dVar83;
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  double dVar92;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  double dVar97;
  undefined1 auVar98 [16];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar7 [32];
  undefined1 auVar15 [32];
  undefined1 auVar25 [32];
  undefined1 auVar34 [32];
  undefined1 auVar37 [32];
  undefined1 auVar47 [32];
  undefined1 auVar49 [32];
  undefined1 auVar56 [32];
  undefined1 auVar60 [32];
  undefined1 auVar68 [32];
  undefined1 auVar80 [32];
  undefined1 auVar91 [32];
  undefined1 auVar96 [32];
  undefined1 auVar99 [32];
  
  dVar97 = _UNK_150b54438;
  dVar92 = _UNK_150b54430;
  dVar9 = _UNK_150b54428;
  dVar82 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar81 = _UNK_150b54418;
  dVar3 = _UNK_150b54410;
  dVar18 = _UNK_150b54408;
  dVar17 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar16 = _UNK_15076c6f8;
  dVar8 = ___xmm_bff00000000000003ff0000000000000;
  if (0.0 < *(double *)param_1[10]) {
    dVar38 = *param_2;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = *(ulonglong *)(param_1[0x12] + 8);
    auVar19 = vmovhpd_avx(auVar19,*(undefined8 *)param_1[0x12]);
    auVar20._8_8_ = 0;
    auVar20._0_8_ = *(ulonglong *)(param_1[0x11] + 0x10);
    auVar10 = vmovhpd_avx(auVar20,*(undefined8 *)(param_1[0x11] + 8));
    dVar73 = param_2[1];
    dVar71 = param_2[2];
    dVar63 = (___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
              auVar10._0_8_ * dVar71 +
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
             *(double *)param_1[0x12] * dVar73 +
             *(double *)(param_1[0x11] + 8) * 0.0 +
             dVar38 * auVar19._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
             __real_3fe0000000000000 + *(double *)(param_1[0x11] + 8);
    dVar69 = (_UNK_150b54428 * auVar10._8_8_ * dVar71 +
             _UNK_150b54408 * *(double *)(param_1[0x12] + 8) * dVar73 +
             *(double *)(param_1[0x11] + 0x10) * 0.0 + dVar38 * auVar19._8_8_ * _UNK_15076c6f8) *
             __real_3fe0000000000000 + *(double *)(param_1[0x11] + 0x10);
    dVar70 = (_UNK_150b54430 * auVar19._0_8_ * dVar71 +
             _UNK_150b54410 * *(double *)(param_1[0x11] + 8) * dVar73 +
             *(double *)param_1[0x12] * 0.0 +
             dVar38 * auVar10._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
             __real_3fe0000000000000 + *(double *)param_1[0x12];
    dVar73 = (_UNK_150b54438 * auVar19._8_8_ * dVar71 +
             _UNK_150b54418 * *(double *)(param_1[0x11] + 0x10) * dVar73 +
             *(double *)(param_1[0x12] + 8) * 0.0 + dVar38 * auVar10._8_8_ * _UNK_15076c6f8) *
             __real_3fe0000000000000 + *(double *)(param_1[0x12] + 8);
    auVar39._0_8_ = dVar63 * dVar63 + dVar70 * dVar70;
    auVar39._8_8_ = dVar69 * dVar69 + dVar73 * dVar73;
    auVar19 = vshufpd_avx(auVar39,auVar39,1);
    dVar38 = auVar39._0_8_ + auVar19._0_8_;
    auVar52._8_8_ = 0;
    auVar52._0_8_ = __real_3e45798ee2308c3a;
    auVar40._8_8_ = 0;
    auVar40._0_8_ = dVar38;
    auVar19 = vcmpsd_avx(auVar52,auVar40,6);
    uVar51 = ~auVar19._0_8_ & __real_ffffffffffffffff;
    dVar38 = __real_3ff0000000000000 / SQRT(dVar38);
    auVar74._0_8_ =
         (double)(((ulonglong)(dVar63 * dVar38) ^
                  ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) & uVar51)
    ;
    auVar74._8_8_ = (double)(((ulonglong)(dVar69 * dVar38) ^ _UNK_150b54548) & uVar51);
    dVar69 = (double)(((ulonglong)(dVar70 * dVar38) ^ _UNK_150b54550) & uVar51);
    dVar83 = (double)(((ulonglong)(dVar73 * dVar38) ^ _UNK_150b54558) & uVar51);
    auVar55._0_8_ =
         (double)((ulonglong)auVar74._0_8_ ^
                 ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
    auVar55._8_8_ = (double)((ulonglong)auVar74._8_8_ ^ _UNK_150b54548);
    auVar55._16_8_ = (double)((ulonglong)dVar69 ^ _UNK_150b54550);
    auVar55._24_8_ = (double)((ulonglong)dVar83 ^ _UNK_150b54558);
    auVar19 = vshufps_avx(auVar74,auVar74,0x4e);
    auVar20 = auVar55._16_16_;
    auVar10 = vshufps_avx(auVar20,auVar20,0x4e);
    uVar1 = vmovlpd_avx(auVar74);
    *(undefined8 *)(param_1[0x11] + 8) = uVar1;
    uVar1 = vmovlpd_avx(auVar19);
    *(undefined8 *)(param_1[0x11] + 0x10) = uVar1;
    uVar1 = vmovlpd_avx(auVar20);
    *(undefined8 *)param_1[0x12] = uVar1;
    uVar1 = vmovlpd_avx(auVar10);
    *(undefined8 *)(param_1[0x12] + 8) = uVar1;
    auVar19 = *(undefined1 (*) [16])(param_1[1] + 8);
    auVar93._8_8_ = 0;
    auVar93._0_8_ = *(ulonglong *)(param_1[1] + 8);
    uVar1 = *(undefined8 *)(param_1[2] + 8);
    auVar98._8_8_ = uVar1;
    auVar98._0_8_ = uVar1;
    auVar99._16_8_ = uVar1;
    auVar99._0_16_ = auVar98;
    auVar99._24_8_ = uVar1;
    auVar10 = vunpcklpd_avx(auVar93,auVar98);
    auVar31 = vpermpd_avx2(auVar55,0xc9);
    auVar101._16_8_ = *(double *)param_1[2];
    auVar101._0_16_ = auVar19;
    auVar101._24_8_ = 0;
    auVar32 = vblendpd_avx(auVar101,auVar99,8);
    dVar38 = auVar55._0_8_ * SUB168(*(undefined1 (*) [16])(param_1[1] + 0x10),0) -
             auVar31._0_8_ * auVar32._0_8_;
    dVar73 = auVar55._8_8_ * SUB168(*(undefined1 (*) [16])(param_1[1] + 0x10),8) -
             auVar31._8_8_ * auVar32._8_8_;
    dVar71 = auVar55._16_8_ * auVar10._0_8_ - auVar31._16_8_ * auVar32._16_8_;
    dVar63 = auVar55._24_8_ * auVar10._8_8_ - auVar31._24_8_ * auVar32._24_8_;
    auVar88._0_8_ = dVar38 + dVar38;
    auVar88._8_8_ = dVar73 + dVar73;
    auVar88._16_8_ = dVar71 + dVar71;
    auVar88._24_8_ = dVar63 + dVar63;
    auVar32 = vpermpd_avx2(auVar55,0xff);
    auVar31 = vpermpd_avx2(auVar88,0xc9);
    dVar70 = auVar32._0_8_;
    dVar61 = auVar32._8_8_;
    dVar62 = auVar32._16_8_;
    dVar72 = auVar32._24_8_;
    auVar32 = vpermpd_avx2(auVar88,0xd2);
    auVar89._0_8_ = auVar88._0_8_ * auVar74._0_8_;
    auVar89._8_8_ = auVar88._8_8_ * auVar74._8_8_;
    auVar89._16_8_ = auVar88._16_8_ * dVar69;
    auVar89._24_8_ = auVar88._24_8_ * dVar83;
    auVar34 = vpermpd_avx2(auVar89,0xc9);
    auVar90._0_8_ = auVar74._0_8_ * auVar32._0_8_ - auVar34._0_8_;
    auVar90._8_8_ = auVar74._8_8_ * auVar32._8_8_ - auVar34._8_8_;
    auVar90._16_8_ = dVar69 * auVar32._16_8_ - auVar34._16_8_;
    auVar90._24_8_ = dVar83 * auVar32._24_8_ - auVar34._24_8_;
    auVar32 = vpermpd_avx2(auVar90,0xc9);
    auVar84._0_8_ =
         *(double *)(param_1[0xf] + 8) + dVar70 * auVar31._0_8_ + auVar19._0_8_ + auVar32._0_8_;
    auVar84._8_8_ =
         *(double *)(param_1[0xf] + 0x10) + dVar61 * auVar31._8_8_ + auVar19._8_8_ + auVar32._8_8_;
    auVar91._16_8_ =
         *(double *)param_1[0x10] + dVar62 * auVar31._16_8_ + *(double *)param_1[2] + auVar32._16_8_
    ;
    auVar91._0_16_ = auVar84;
    auVar91._24_8_ = dVar72 * auVar31._24_8_ + 0.0 + auVar32._24_8_ + 0.0;
    *(undefined1 (*) [16])(param_1[10] + 0x10) = auVar84;
    uVar1 = vmovlpd_avx(auVar91._16_16_);
    *(undefined8 *)(param_1[0xb] + 8) = uVar1;
    auVar85._8_8_ = 0;
    auVar85._0_8_ = *(ulonglong *)param_1[1];
    auVar19 = vmovhpd_avx(auVar85,*(undefined8 *)(*param_1 + 0x10));
    auVar94._8_8_ = 0;
    auVar94._0_8_ = *(ulonglong *)(*param_1 + 8);
    auVar10 = vmovhpd_avx(auVar94,*(undefined8 *)*param_1);
    dVar73 = *(double *)(*param_1 + 8);
    auVar2 = *param_1;
    dVar38 = *(double *)param_1[1];
    auVar32 = vpermpd_avx2(auVar55,0x55);
    dVar71 = *(double *)param_1[1];
    dVar63 = *(double *)*param_1;
    dVar69 = *(double *)(*param_1 + 8);
    auVar31 = vpermpd_avx2(auVar55,0xaa);
    *(double *)(param_1[0xc] + 0x10) =
         dVar82 * auVar10._0_8_ * auVar31._0_8_ +
         dVar17 * *(double *)(*param_1 + 0x10) * auVar32._0_8_ +
         dVar70 * *(double *)*param_1 + auVar19._0_8_ * auVar74._0_8_ * dVar8;
    *(double *)param_1[0xd] =
         dVar9 * auVar10._8_8_ * auVar31._8_8_ +
         dVar18 * dVar71 * auVar32._8_8_ + dVar61 * dVar73 + auVar19._8_8_ * auVar74._0_8_ * dVar16;
    *(double *)(param_1[0xd] + 8) =
         dVar92 * auVar19._0_8_ * auVar31._16_8_ +
         dVar3 * dVar63 * auVar32._16_8_ +
         dVar62 * auVar2._16_8_ + auVar10._0_8_ * auVar74._0_8_ * dVar8;
    *(double *)(param_1[0xd] + 0x10) =
         dVar97 * auVar19._8_8_ * auVar31._24_8_ +
         dVar81 * dVar69 * auVar32._24_8_ + dVar72 * dVar38 + auVar10._8_8_ * auVar74._0_8_ * dVar16
    ;
    dVar8 = auVar55._0_8_ + auVar55._0_8_;
    dVar16 = auVar55._8_8_ + auVar55._8_8_;
    dVar17 = auVar55._16_8_ + auVar55._16_8_;
    dVar18 = auVar55._24_8_ + auVar55._24_8_;
    auVar31._0_8_ = auVar74._0_8_ * dVar8;
    auVar31._8_8_ = auVar74._0_8_ * dVar16;
    auVar31._16_8_ = auVar74._0_8_ * dVar17;
    auVar31._24_8_ = auVar74._0_8_ * dVar18;
    auVar53._0_8_ = auVar32._0_8_ * dVar8;
    auVar53._8_8_ = auVar32._8_8_ * dVar16;
    auVar56._16_8_ = auVar32._16_8_ * dVar17;
    auVar56._0_16_ = auVar53;
    auVar56._24_8_ = auVar32._24_8_ * dVar18;
    auVar66._0_8_ = dVar8 * dVar70;
    auVar66._8_8_ = dVar16 * dVar61;
    auVar66._16_8_ = dVar17 * dVar62;
    auVar66._24_8_ = dVar18 * dVar72;
    auVar32 = vperm2f128_avx(auVar56,auVar31,0x21);
    auVar32 = vshufpd_avx(auVar32,ZEXT1632(auVar31._16_16_),4);
    auVar10._0_8_ = auVar66._0_8_ + auVar32._0_8_;
    auVar10._8_8_ = auVar66._8_8_ + auVar32._8_8_;
    auVar15._16_8_ = auVar66._16_8_ + auVar32._16_8_;
    auVar15._0_16_ = auVar10;
    auVar15._24_8_ = auVar66._24_8_ + auVar32._24_8_;
    auVar34 = vsubpd_avx(auVar32,auVar66);
    auVar19 = vshufpd_avx(auVar53,auVar53,1);
    auVar32._8_8_ = auVar31._0_8_;
    auVar32._0_8_ = auVar31._0_8_;
    auVar32._16_8_ = auVar31._0_8_;
    auVar32._24_8_ = auVar31._0_8_;
    auVar32 = vblendpd_avx(auVar32,ZEXT1632(auVar19),1);
    auVar31 = vpermpd_avx2(auVar56,0x55);
    auVar31 = vblendpd_avx(ZEXT1632(CONCAT88(auVar55._16_8_ * dVar17,auVar55._16_8_ * dVar17)),
                           auVar31,0xc);
    auVar33._0_8_ = auVar32._0_8_ + auVar31._0_8_;
    auVar33._8_8_ = auVar32._8_8_ + auVar31._8_8_;
    auVar33._16_8_ = auVar32._16_8_ + auVar31._16_8_;
    auVar33._24_8_ = auVar32._24_8_ + auVar31._24_8_;
    auVar45._8_8_ = __real_3ff0000000000000;
    auVar45._0_8_ = __real_3ff0000000000000;
    auVar45._16_8_ = __real_3ff0000000000000;
    auVar45._24_8_ = __real_3ff0000000000000;
    auVar31 = vsubpd_avx(auVar45,auVar33);
    dVar17 = auVar31._0_8_;
    dVar8 = *(double *)param_1[8];
    dVar16 = *(double *)(param_1[8] + 0x10);
    auVar19 = vmovhpd_avx(ZEXT816(0) << 0x40,*(undefined8 *)(param_1[8] + 8));
    auVar32 = vpermpd_avx2(auVar34,0xaa);
    dVar18 = auVar19._0_8_;
    dVar3 = auVar19._8_8_;
    auVar33 = vpermpd_avx2(auVar15,0x55);
    auVar67._0_8_ = auVar33._0_8_ * 0.0 + dVar18 * auVar32._0_8_ + dVar8 * dVar17;
    auVar67._8_8_ = auVar33._8_8_ * 0.0 + dVar3 * auVar32._8_8_ + dVar17 * 0.0;
    auVar67._16_8_ = dVar16 * auVar33._16_8_ + auVar32._16_8_ * 0.0 + dVar17 * 0.0;
    auVar67._24_8_ = auVar33._24_8_ * 0.0 + auVar32._24_8_ * 0.0 + dVar17 * 0.0;
    auVar32 = vpermpd_avx2(auVar15,0xaa);
    auVar33 = vpermpd_avx2(auVar31,0x55);
    dVar17 = auVar34._0_8_;
    auVar57._0_8_ = dVar17 * 0.0 + dVar8 * auVar32._0_8_ + dVar18 * auVar33._0_8_;
    auVar57._8_8_ = dVar17 * 0.0 + auVar32._8_8_ * 0.0 + dVar3 * auVar33._8_8_;
    auVar57._16_8_ = dVar16 * dVar17 + auVar32._16_8_ * 0.0 + auVar33._16_8_ * 0.0;
    auVar57._24_8_ = dVar17 * 0.0 + auVar32._24_8_ * 0.0 + auVar33._24_8_ * 0.0;
    auVar32 = vpermpd_avx2(auVar34,0x55);
    auVar33 = vpermpd_avx2(auVar31,0xaa);
    auVar46._0_8_ = auVar33._0_8_ * 0.0 + auVar32._0_8_ * dVar8 + dVar18 * auVar10._0_8_;
    auVar46._8_8_ = auVar33._8_8_ * 0.0 + auVar32._8_8_ * 0.0 + dVar3 * auVar10._0_8_;
    auVar46._16_8_ = dVar16 * auVar33._16_8_ + auVar32._16_8_ * 0.0 + auVar10._0_8_ * 0.0;
    auVar46._24_8_ = auVar33._24_8_ * 0.0 + auVar32._24_8_ * 0.0 + auVar10._0_8_ * 0.0;
    auVar19 = vunpcklpd_avx(auVar31._0_16_,auVar15._16_16_);
    auVar32 = vblendpd_avx(ZEXT1632(auVar19),auVar32,0xc);
    auVar33 = vpermpd_avx2(auVar67,0x55);
    auVar19 = vblendpd_avx(auVar31._0_16_,auVar34._16_16_,1);
    dVar92 = auVar19._0_8_;
    dVar97 = auVar19._8_8_;
    dVar3 = auVar32._0_8_;
    dVar81 = auVar32._8_8_;
    dVar82 = auVar32._16_8_;
    dVar9 = auVar32._24_8_;
    auVar15 = vpermpd_avx2(auVar67,0xaa);
    auVar19 = vshufpd_avx(auVar10,auVar34._0_16_,1);
    auVar32 = vblendpd_avx(auVar31,ZEXT1632(auVar19),3);
    dVar8 = auVar32._0_8_;
    auVar64._0_8_ = dVar8 * auVar15._0_8_ + dVar3 * auVar67._0_8_ + dVar92 * auVar33._0_8_;
    dVar16 = auVar32._8_8_;
    auVar64._8_8_ = dVar16 * auVar15._8_8_ + dVar81 * auVar67._0_8_ + dVar97 * auVar33._8_8_;
    dVar17 = auVar32._16_8_;
    auVar68._16_8_ =
         dVar17 * auVar15._16_8_ + dVar82 * auVar67._0_8_ + auVar10._0_8_ * auVar33._16_8_;
    auVar68._0_16_ = auVar64;
    dVar18 = auVar32._24_8_;
    auVar68._24_8_ =
         dVar18 * auVar15._24_8_ + dVar9 * auVar67._0_8_ + auVar10._8_8_ * auVar33._24_8_;
    auVar32 = vpermpd_avx2(auVar57,0x55);
    auVar31 = vpermpd_avx2(auVar57,0xaa);
    auVar26._0_8_ = dVar8 * auVar31._0_8_ + dVar3 * auVar57._0_8_ + dVar92 * auVar32._0_8_;
    auVar26._8_8_ = dVar16 * auVar31._8_8_ + dVar81 * auVar57._0_8_ + dVar97 * auVar32._8_8_;
    auVar34._16_8_ =
         dVar17 * auVar31._16_8_ + dVar82 * auVar57._0_8_ + auVar10._0_8_ * auVar32._16_8_;
    auVar34._0_16_ = auVar26;
    auVar34._24_8_ =
         dVar18 * auVar31._24_8_ + dVar9 * auVar57._0_8_ + auVar10._8_8_ * auVar32._24_8_;
    auVar32 = vpermpd_avx2(auVar46,0x55);
    auVar31 = vpermpd_avx2(auVar46,0xaa);
    *(undefined1 (*) [16])param_1[0x18] = auVar64;
    uVar1 = vmovlpd_avx(auVar68._16_16_);
    *(undefined8 *)(param_1[0x18] + 0x10) = uVar1;
    auVar41._0_8_ = dVar8 * auVar31._0_8_ + dVar3 * auVar46._0_8_ + dVar92 * auVar32._0_8_;
    auVar41._8_8_ = dVar16 * auVar31._8_8_ + dVar81 * auVar46._0_8_ + dVar97 * auVar32._8_8_;
    auVar47._16_8_ =
         dVar17 * auVar31._16_8_ + dVar82 * auVar46._0_8_ + auVar10._0_8_ * auVar32._16_8_;
    auVar47._0_16_ = auVar41;
    auVar47._24_8_ =
         dVar18 * auVar31._24_8_ + dVar9 * auVar46._0_8_ + auVar10._8_8_ * auVar32._24_8_;
    *(undefined8 *)param_1[0x19] = 0;
    *(undefined1 (*) [16])(param_1[0x19] + 8) = auVar26;
    uVar1 = vmovlpd_avx(auVar34._16_16_);
    *(undefined8 *)param_1[0x1a] = uVar1;
    *(undefined8 *)(param_1[0x1a] + 8) = 0;
    *(undefined1 (*) [16])(param_1[0x1a] + 0x10) = auVar41;
    uVar1 = vmovlpd_avx(auVar47._16_16_);
    *(undefined8 *)(param_1[0x1b] + 8) = uVar1;
    *(undefined1 (*) [32])(param_1[0x1b] + 0x10) = ZEXT1632(ZEXT816(0));
    *(undefined8 *)param_1[0x1d] = 0x3ff0000000000000;
  }
  dVar97 = _UNK_150b54438;
  dVar92 = _UNK_150b54430;
  dVar9 = _UNK_150b54428;
  dVar82 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar81 = _UNK_150b54418;
  dVar3 = _UNK_150b54410;
  dVar18 = _UNK_150b54408;
  dVar17 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar16 = _UNK_15076c6f8;
  dVar8 = ___xmm_bff00000000000003ff0000000000000;
  if (0.0 < *(double *)(param_1[10] + 8)) {
    dVar38 = *param_3;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = *(ulonglong *)(param_1[0x13] + 0x10);
    auVar19 = vmovhpd_avx(auVar11,*(undefined8 *)(param_1[0x13] + 8));
    auVar12._8_8_ = 0;
    auVar12._0_8_ = *(ulonglong *)param_1[0x13];
    auVar10 = vmovhpd_avx(auVar12,*(undefined8 *)(param_1[0x12] + 0x10));
    dVar73 = param_3[1];
    dVar71 = param_3[2];
    dVar63 = (___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
              auVar10._0_8_ * dVar71 +
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
             *(double *)(param_1[0x13] + 8) * dVar73 +
             *(double *)(param_1[0x12] + 0x10) * 0.0 +
             dVar38 * auVar19._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
             __real_3fe0000000000000 + *(double *)(param_1[0x12] + 0x10);
    dVar69 = (_UNK_150b54428 * auVar10._8_8_ * dVar71 +
             _UNK_150b54408 * *(double *)(param_1[0x13] + 0x10) * dVar73 +
             *(double *)param_1[0x13] * 0.0 + dVar38 * auVar19._8_8_ * _UNK_15076c6f8) *
             __real_3fe0000000000000 + *(double *)param_1[0x13];
    dVar70 = (_UNK_150b54430 * auVar19._0_8_ * dVar71 +
             _UNK_150b54410 * *(double *)(param_1[0x12] + 0x10) * dVar73 +
             *(double *)(param_1[0x13] + 8) * 0.0 +
             dVar38 * auVar10._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
             __real_3fe0000000000000 + *(double *)(param_1[0x13] + 8);
    dVar73 = (_UNK_150b54438 * auVar19._8_8_ * dVar71 +
             _UNK_150b54418 * *(double *)param_1[0x13] * dVar73 +
             *(double *)(param_1[0x13] + 0x10) * 0.0 + dVar38 * auVar10._8_8_ * _UNK_15076c6f8) *
             __real_3fe0000000000000 + *(double *)(param_1[0x13] + 0x10);
    auVar27._0_8_ = dVar63 * dVar63 + dVar70 * dVar70;
    auVar27._8_8_ = dVar69 * dVar69 + dVar73 * dVar73;
    auVar19 = vshufpd_avx(auVar27,auVar27,1);
    dVar38 = auVar27._0_8_ + auVar19._0_8_;
    auVar42._8_8_ = 0;
    auVar42._0_8_ = __real_3e45798ee2308c3a;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = dVar38;
    auVar19 = vcmpsd_avx(auVar42,auVar28,6);
    uVar51 = ~auVar19._0_8_ & __real_ffffffffffffffff;
    dVar38 = __real_3ff0000000000000 / SQRT(dVar38);
    auVar65._0_8_ =
         (double)(((ulonglong)(dVar63 * dVar38) ^
                  ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) & uVar51)
    ;
    auVar65._8_8_ = (double)(((ulonglong)(dVar69 * dVar38) ^ _UNK_150b54548) & uVar51);
    dVar72 = (double)(((ulonglong)(dVar70 * dVar38) ^ _UNK_150b54550) & uVar51);
    dVar83 = (double)(((ulonglong)(dVar73 * dVar38) ^ _UNK_150b54558) & uVar51);
    auVar48._0_8_ =
         (double)((ulonglong)auVar65._0_8_ ^
                 ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
    auVar48._8_8_ = (double)((ulonglong)auVar65._8_8_ ^ _UNK_150b54548);
    auVar48._16_8_ = (double)((ulonglong)dVar72 ^ _UNK_150b54550);
    auVar48._24_8_ = (double)((ulonglong)dVar83 ^ _UNK_150b54558);
    auVar19 = vshufps_avx(auVar65,auVar65,0x4e);
    auVar20 = auVar48._16_16_;
    auVar10 = vshufps_avx(auVar20,auVar20,0x4e);
    uVar1 = vmovlpd_avx(auVar65);
    *(undefined8 *)(param_1[0x12] + 0x10) = uVar1;
    uVar1 = vmovlpd_avx(auVar19);
    *(undefined8 *)param_1[0x13] = uVar1;
    uVar1 = vmovlpd_avx(auVar20);
    *(undefined8 *)(param_1[0x13] + 8) = uVar1;
    uVar1 = vmovlpd_avx(auVar10);
    *(undefined8 *)(param_1[0x13] + 0x10) = uVar1;
    auVar19 = *(undefined1 (*) [16])(param_1[5] + 8);
    auVar86._8_8_ = 0;
    auVar86._0_8_ = *(ulonglong *)(param_1[5] + 8);
    uVar1 = *(undefined8 *)(param_1[6] + 8);
    auVar95._8_8_ = uVar1;
    auVar95._0_8_ = uVar1;
    auVar96._16_8_ = uVar1;
    auVar96._0_16_ = auVar95;
    auVar96._24_8_ = uVar1;
    auVar10 = vunpcklpd_avx(auVar86,auVar95);
    auVar31 = vpermpd_avx2(auVar48,0xc9);
    auVar100._16_8_ = *(double *)param_1[6];
    auVar100._0_16_ = auVar19;
    auVar100._24_8_ = 0;
    auVar32 = vblendpd_avx(auVar100,auVar96,8);
    dVar38 = auVar48._0_8_ * SUB168(*(undefined1 (*) [16])(param_1[5] + 0x10),0) -
             auVar31._0_8_ * auVar32._0_8_;
    dVar73 = auVar48._8_8_ * SUB168(*(undefined1 (*) [16])(param_1[5] + 0x10),8) -
             auVar31._8_8_ * auVar32._8_8_;
    dVar71 = auVar48._16_8_ * auVar10._0_8_ - auVar31._16_8_ * auVar32._16_8_;
    dVar63 = auVar48._24_8_ * auVar10._8_8_ - auVar31._24_8_ * auVar32._24_8_;
    auVar77._0_8_ = dVar38 + dVar38;
    auVar77._8_8_ = dVar73 + dVar73;
    auVar77._16_8_ = dVar71 + dVar71;
    auVar77._24_8_ = dVar63 + dVar63;
    auVar32 = vpermpd_avx2(auVar48,0xff);
    auVar31 = vpermpd_avx2(auVar77,0xc9);
    dVar69 = auVar32._0_8_;
    dVar70 = auVar32._8_8_;
    dVar61 = auVar32._16_8_;
    dVar62 = auVar32._24_8_;
    auVar32 = vpermpd_avx2(auVar77,0xd2);
    auVar78._0_8_ = auVar77._0_8_ * auVar65._0_8_;
    auVar78._8_8_ = auVar77._8_8_ * auVar65._8_8_;
    auVar78._16_8_ = auVar77._16_8_ * dVar72;
    auVar78._24_8_ = auVar77._24_8_ * dVar83;
    auVar34 = vpermpd_avx2(auVar78,0xc9);
    auVar79._0_8_ = auVar65._0_8_ * auVar32._0_8_ - auVar34._0_8_;
    auVar79._8_8_ = auVar65._8_8_ * auVar32._8_8_ - auVar34._8_8_;
    auVar79._16_8_ = dVar72 * auVar32._16_8_ - auVar34._16_8_;
    auVar79._24_8_ = dVar83 * auVar32._24_8_ - auVar34._24_8_;
    auVar32 = vpermpd_avx2(auVar79,0xc9);
    auVar75._0_8_ =
         *(double *)(param_1[0x10] + 8) + dVar69 * auVar31._0_8_ + auVar19._0_8_ + auVar32._0_8_;
    auVar75._8_8_ =
         *(double *)(param_1[0x10] + 0x10) + dVar70 * auVar31._8_8_ + auVar19._8_8_ + auVar32._8_8_;
    auVar80._16_8_ =
         *(double *)param_1[0x11] + dVar61 * auVar31._16_8_ + *(double *)param_1[6] + auVar32._16_8_
    ;
    auVar80._0_16_ = auVar75;
    auVar80._24_8_ = dVar62 * auVar31._24_8_ + 0.0 + auVar32._24_8_ + 0.0;
    *(undefined1 (*) [16])(param_1[0xb] + 0x10) = auVar75;
    uVar1 = vmovlpd_avx(auVar80._16_16_);
    *(undefined8 *)(param_1[0xc] + 8) = uVar1;
    auVar76._8_8_ = 0;
    auVar76._0_8_ = *(ulonglong *)param_1[5];
    auVar19 = vmovhpd_avx(auVar76,*(undefined8 *)(param_1[4] + 0x10));
    auVar87._8_8_ = 0;
    auVar87._0_8_ = *(ulonglong *)(param_1[4] + 8);
    auVar10 = vmovhpd_avx(auVar87,*(undefined8 *)param_1[4]);
    dVar73 = *(double *)(param_1[4] + 8);
    auVar2 = param_1[4];
    dVar38 = *(double *)param_1[5];
    auVar32 = vpermpd_avx2(auVar48,0x55);
    dVar71 = *(double *)param_1[4];
    dVar63 = *(double *)(param_1[4] + 8);
    auVar31 = vpermpd_avx2(auVar48,0xaa);
    *(double *)param_1[0xe] =
         dVar82 * auVar10._0_8_ * auVar31._0_8_ +
         dVar17 * *(double *)(param_1[4] + 0x10) * auVar32._0_8_ +
         dVar69 * *(double *)param_1[4] + auVar19._0_8_ * auVar65._0_8_ * dVar8;
    *(double *)(param_1[0xe] + 8) =
         dVar9 * auVar10._8_8_ * auVar31._8_8_ +
         dVar18 * *(double *)param_1[5] * auVar32._8_8_ +
         dVar70 * dVar73 + auVar19._8_8_ * auVar65._0_8_ * dVar16;
    *(double *)(param_1[0xe] + 0x10) =
         dVar92 * auVar19._0_8_ * auVar31._16_8_ +
         dVar3 * dVar71 * auVar32._16_8_ +
         dVar61 * auVar2._16_8_ + auVar10._0_8_ * auVar65._0_8_ * dVar8;
    *(double *)param_1[0xf] =
         dVar97 * auVar19._8_8_ * auVar31._24_8_ +
         dVar81 * dVar63 * auVar32._24_8_ + dVar62 * dVar38 + auVar10._8_8_ * auVar65._0_8_ * dVar16
    ;
    dVar8 = auVar48._0_8_ + auVar48._0_8_;
    dVar16 = auVar48._8_8_ + auVar48._8_8_;
    dVar17 = auVar48._16_8_ + auVar48._16_8_;
    dVar18 = auVar48._24_8_ + auVar48._24_8_;
    auVar22._0_8_ = dVar8 * auVar65._0_8_;
    auVar22._8_8_ = dVar16 * auVar65._0_8_;
    auVar22._16_8_ = dVar17 * auVar65._0_8_;
    auVar22._24_8_ = dVar18 * auVar65._0_8_;
    auVar43._0_8_ = auVar32._0_8_ * dVar8;
    auVar43._8_8_ = auVar32._8_8_ * dVar16;
    auVar49._16_8_ = auVar32._16_8_ * dVar17;
    auVar49._0_16_ = auVar43;
    auVar49._24_8_ = auVar32._24_8_ * dVar18;
    auVar58._0_8_ = dVar8 * dVar69;
    auVar58._8_8_ = dVar16 * dVar70;
    auVar58._16_8_ = dVar17 * dVar61;
    auVar58._24_8_ = dVar18 * dVar62;
    auVar32 = vperm2f128_avx(auVar49,auVar22,0x21);
    auVar32 = vshufpd_avx(auVar32,ZEXT1632(auVar22._16_16_),4);
    auVar4._0_8_ = auVar58._0_8_ + auVar32._0_8_;
    auVar4._8_8_ = auVar58._8_8_ + auVar32._8_8_;
    auVar7._16_8_ = auVar58._16_8_ + auVar32._16_8_;
    auVar7._0_16_ = auVar4;
    auVar7._24_8_ = auVar58._24_8_ + auVar32._24_8_;
    auVar34 = vsubpd_avx(auVar32,auVar58);
    auVar19 = vshufpd_avx(auVar43,auVar43,1);
    auVar23._8_8_ = auVar22._0_8_;
    auVar23._0_8_ = auVar22._0_8_;
    auVar23._16_8_ = auVar22._0_8_;
    auVar23._24_8_ = auVar22._0_8_;
    auVar32 = vblendpd_avx(auVar23,ZEXT1632(auVar19),1);
    auVar31 = vpermpd_avx2(auVar49,0x55);
    auVar31 = vblendpd_avx(ZEXT1632(CONCAT88(auVar48._16_8_ * dVar17,auVar48._16_8_ * dVar17)),
                           auVar31,0xc);
    auVar24._0_8_ = auVar32._0_8_ + auVar31._0_8_;
    auVar24._8_8_ = auVar32._8_8_ + auVar31._8_8_;
    auVar24._16_8_ = auVar32._16_8_ + auVar31._16_8_;
    auVar24._24_8_ = auVar32._24_8_ + auVar31._24_8_;
    auVar35._8_8_ = __real_3ff0000000000000;
    auVar35._0_8_ = __real_3ff0000000000000;
    auVar35._16_8_ = __real_3ff0000000000000;
    auVar35._24_8_ = __real_3ff0000000000000;
    auVar31 = vsubpd_avx(auVar35,auVar24);
    dVar17 = auVar31._0_8_;
    dVar8 = *(double *)param_1[9];
    dVar16 = *(double *)(param_1[9] + 0x10);
    auVar19 = vmovhpd_avx(ZEXT816(0) << 0x40,*(undefined8 *)(param_1[9] + 8));
    auVar32 = vpermpd_avx2(auVar34,0xaa);
    dVar18 = auVar19._0_8_;
    dVar3 = auVar19._8_8_;
    auVar33 = vpermpd_avx2(auVar7,0x55);
    auVar59._0_8_ = auVar33._0_8_ * 0.0 + dVar18 * auVar32._0_8_ + dVar8 * dVar17;
    auVar59._8_8_ = auVar33._8_8_ * 0.0 + dVar3 * auVar32._8_8_ + dVar17 * 0.0;
    auVar59._16_8_ = dVar16 * auVar33._16_8_ + auVar32._16_8_ * 0.0 + dVar17 * 0.0;
    auVar59._24_8_ = auVar33._24_8_ * 0.0 + auVar32._24_8_ * 0.0 + dVar17 * 0.0;
    auVar32 = vpermpd_avx2(auVar7,0xaa);
    auVar33 = vpermpd_avx2(auVar31,0x55);
    dVar17 = auVar34._0_8_;
    auVar50._0_8_ = dVar17 * 0.0 + dVar8 * auVar32._0_8_ + dVar18 * auVar33._0_8_;
    auVar50._8_8_ = dVar17 * 0.0 + auVar32._8_8_ * 0.0 + dVar3 * auVar33._8_8_;
    auVar50._16_8_ = dVar16 * dVar17 + auVar32._16_8_ * 0.0 + auVar33._16_8_ * 0.0;
    auVar50._24_8_ = dVar17 * 0.0 + auVar32._24_8_ * 0.0 + auVar33._24_8_ * 0.0;
    auVar32 = vpermpd_avx2(auVar34,0x55);
    auVar33 = vpermpd_avx2(auVar31,0xaa);
    auVar36._0_8_ = auVar33._0_8_ * 0.0 + auVar32._0_8_ * dVar8 + dVar18 * auVar4._0_8_;
    auVar36._8_8_ = auVar33._8_8_ * 0.0 + auVar32._8_8_ * 0.0 + dVar3 * auVar4._0_8_;
    auVar36._16_8_ = dVar16 * auVar33._16_8_ + auVar32._16_8_ * 0.0 + auVar4._0_8_ * 0.0;
    auVar36._24_8_ = auVar33._24_8_ * 0.0 + auVar32._24_8_ * 0.0 + auVar4._0_8_ * 0.0;
    auVar19 = vunpcklpd_avx(auVar31._0_16_,auVar7._16_16_);
    auVar32 = vblendpd_avx(ZEXT1632(auVar19),auVar32,0xc);
    auVar33 = vpermpd_avx2(auVar59,0x55);
    auVar19 = vblendpd_avx(auVar31._0_16_,auVar34._16_16_,1);
    dVar92 = auVar19._0_8_;
    dVar97 = auVar19._8_8_;
    dVar3 = auVar32._0_8_;
    dVar81 = auVar32._8_8_;
    dVar82 = auVar32._16_8_;
    dVar9 = auVar32._24_8_;
    auVar15 = vpermpd_avx2(auVar59,0xaa);
    auVar19 = vshufpd_avx(auVar4,auVar34._0_16_,1);
    auVar32 = vblendpd_avx(auVar31,ZEXT1632(auVar19),3);
    dVar8 = auVar32._0_8_;
    auVar54._0_8_ = dVar8 * auVar15._0_8_ + dVar3 * auVar59._0_8_ + dVar92 * auVar33._0_8_;
    dVar16 = auVar32._8_8_;
    auVar54._8_8_ = dVar16 * auVar15._8_8_ + dVar81 * auVar59._0_8_ + dVar97 * auVar33._8_8_;
    dVar17 = auVar32._16_8_;
    auVar60._16_8_ =
         dVar17 * auVar15._16_8_ + dVar82 * auVar59._0_8_ + auVar4._0_8_ * auVar33._16_8_;
    auVar60._0_16_ = auVar54;
    dVar18 = auVar32._24_8_;
    auVar60._24_8_ = dVar18 * auVar15._24_8_ + dVar9 * auVar59._0_8_ + auVar4._8_8_ * auVar33._24_8_
    ;
    auVar32 = vpermpd_avx2(auVar50,0x55);
    auVar31 = vpermpd_avx2(auVar50,0xaa);
    auVar21._0_8_ = dVar8 * auVar31._0_8_ + dVar3 * auVar50._0_8_ + dVar92 * auVar32._0_8_;
    auVar21._8_8_ = dVar16 * auVar31._8_8_ + dVar81 * auVar50._0_8_ + dVar97 * auVar32._8_8_;
    auVar25._16_8_ =
         dVar17 * auVar31._16_8_ + dVar82 * auVar50._0_8_ + auVar4._0_8_ * auVar32._16_8_;
    auVar25._0_16_ = auVar21;
    auVar25._24_8_ = dVar18 * auVar31._24_8_ + dVar9 * auVar50._0_8_ + auVar4._8_8_ * auVar32._24_8_
    ;
    auVar32 = vpermpd_avx2(auVar36,0x55);
    auVar31 = vpermpd_avx2(auVar36,0xaa);
    *(undefined1 (*) [16])(param_1[0x1d] + 8) = auVar54;
    uVar1 = vmovlpd_avx(auVar60._16_16_);
    *(undefined8 *)param_1[0x1e] = uVar1;
    auVar29._0_8_ = dVar8 * auVar31._0_8_ + dVar3 * auVar36._0_8_ + dVar92 * auVar32._0_8_;
    auVar29._8_8_ = dVar16 * auVar31._8_8_ + dVar81 * auVar36._0_8_ + dVar97 * auVar32._8_8_;
    auVar37._16_8_ =
         dVar17 * auVar31._16_8_ + dVar82 * auVar36._0_8_ + auVar4._0_8_ * auVar32._16_8_;
    auVar37._0_16_ = auVar29;
    auVar37._24_8_ = dVar18 * auVar31._24_8_ + dVar9 * auVar36._0_8_ + auVar4._8_8_ * auVar32._24_8_
    ;
    *(undefined8 *)(param_1[0x1e] + 8) = 0;
    *(undefined1 (*) [16])(param_1[0x1e] + 0x10) = auVar21;
    uVar1 = vmovlpd_avx(auVar25._16_16_);
    *(undefined8 *)(param_1[0x1f] + 8) = uVar1;
    *(undefined8 *)(param_1[0x1f] + 0x10) = 0;
    *(undefined1 (*) [16])param_1[0x20] = auVar29;
    uVar1 = vmovlpd_avx(auVar37._16_16_);
    *(undefined8 *)(param_1[0x20] + 0x10) = uVar1;
    *(undefined8 *)param_1[0x21] = 0;
    *(undefined8 *)(param_1[0x21] + 8) = 0;
    *(undefined8 *)(param_1[0x21] + 0x10) = 0;
    *(undefined8 *)param_1[0x22] = 0;
    *(undefined8 *)(param_1[0x22] + 8) = 0x3ff0000000000000;
  }
  dVar8 = *(double *)param_1[0xe];
  dVar16 = *(double *)(param_1[0xe] + 8);
  dVar17 = *(double *)(param_1[0xe] + 0x10);
  dVar18 = *(double *)param_1[0xf];
  dVar3 = *(double *)param_1[0x13];
  dVar81 = *(double *)(param_1[0x13] + 8);
  dVar82 = *(double *)(param_1[0x13] + 0x10);
  auVar13._0_8_ =
       *(double *)(param_1[0x12] + 0x10) * *(double *)(param_1[0x11] + 8) +
       dVar81 * *(double *)param_1[0x12];
  auVar13._8_8_ =
       dVar3 * *(double *)(param_1[0x11] + 0x10) + dVar82 * *(double *)(param_1[0x12] + 8);
  auVar19 = vshufpd_avx(auVar13,auVar13,1);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = auVar13._0_8_ + auVar19._0_8_;
  auVar19 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar14,2);
  auVar30._8_8_ = 0;
  auVar30._0_8_ = __real_3ff0000000000000;
  auVar44._8_8_ = 0;
  auVar44._0_8_ = __real_bff0000000000000;
  auVar19 = vblendvpd_avx(auVar44,auVar30,auVar19);
  dVar9 = auVar19._0_8_;
  *(double *)(param_1[0x12] + 0x10) = *(double *)(param_1[0x12] + 0x10) * dVar9;
  *(double *)param_1[0x13] = dVar3 * dVar9;
  *(double *)(param_1[0x13] + 8) = dVar81 * dVar9;
  *(double *)(param_1[0x13] + 0x10) = dVar82 * dVar9;
  auVar5._0_8_ = dVar8 * *(double *)(param_1[0xc] + 0x10) + dVar17 * *(double *)(param_1[0xd] + 8);
  auVar5._8_8_ = dVar16 * *(double *)param_1[0xd] + dVar18 * *(double *)(param_1[0xd] + 0x10);
  auVar19 = vshufpd_avx(auVar5,auVar5,1);
  auVar6._8_8_ = 0;
  auVar6._0_8_ = auVar5._0_8_ + auVar19._0_8_;
  auVar19 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar6,2);
  auVar19 = vblendvpd_avx(auVar44,auVar30,auVar19);
  dVar3 = auVar19._0_8_;
  *(double *)param_1[0xe] = dVar8 * dVar3;
  *(double *)(param_1[0xe] + 8) = dVar16 * dVar3;
  *(double *)(param_1[0xe] + 0x10) = dVar17 * dVar3;
  *(double *)param_1[0xf] = dVar18 * dVar3;
  return;
}

// ApplyPositionConstraintSoft_avx2 @ 1409ef4e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPositionConstraintSoft_avx2
               (undefined1 (*param_1) [24],double param_2,double param_3,double param_4,byte param_5
               ,double *param_6,double param_7,double param_8,double *param_9)

{
  double dVar1;
  undefined8 uVar2;
  undefined1 auVar3 [24];
  double dVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [32];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [32];
  double dVar21;
  undefined1 auVar22 [16];
  double dVar29;
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  double dVar28;
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  double dVar30;
  double dVar31;
  double dVar44;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar45;
  double dVar46;
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  ulonglong uVar47;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar59;
  undefined1 auVar54 [32];
  double dVar60;
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar58 [32];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  double dVar68;
  undefined1 auVar66 [32];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  double dVar69;
  double dVar70;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  double dVar86;
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  double dVar87;
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  ulonglong uVar88;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [32];
  undefined1 auVar96 [32];
  undefined1 auVar98 [32];
  double dVar100;
  double dVar101;
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  double dVar110;
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  double dVar109;
  double dVar111;
  undefined1 auVar106 [32];
  undefined1 auVar108 [32];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  double dVar118;
  undefined1 auVar114 [32];
  undefined1 auVar115 [32];
  undefined1 auVar116 [32];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [32];
  double dVar124;
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar27 [32];
  undefined1 auVar38 [32];
  undefined1 auVar43 [32];
  undefined1 auVar57 [32];
  undefined1 auVar65 [32];
  undefined1 auVar67 [32];
  undefined1 auVar81 [32];
  undefined1 auVar85 [32];
  undefined1 auVar95 [32];
  undefined1 auVar97 [32];
  undefined1 auVar99 [32];
  undefined1 auVar107 [32];
  undefined1 auVar117 [32];
  undefined1 auVar121 [32];
  
  uVar47 = __real_8000000000000000;
  auVar6._24_8_ = 0;
  auVar6._0_24_ = *(undefined1 (*) [24])(param_1[10] + 0x10);
  auVar23._24_8_ = 0;
  auVar23._0_24_ = *(undefined1 (*) [24])(param_1[0xf] + 8);
  auVar23 = vsubpd_avx(auVar6,auVar23);
  dVar59 = *param_6;
  dVar60 = param_6[1];
  auVar24 = vpermpd_avx2(auVar23,0xc9);
  dVar1 = param_6[2];
  auVar54._0_8_ = param_6[1] * auVar23._0_8_ - auVar24._0_8_ * dVar59;
  auVar54._8_8_ = param_6[2] * auVar23._8_8_ - auVar24._8_8_ * dVar60;
  auVar54._16_8_ = *param_6 * auVar23._16_8_ - auVar24._16_8_ * dVar1;
  auVar54._24_8_ = auVar23._24_8_ * 0.0 - auVar24._24_8_ * 0.0;
  auVar94._24_8_ = 0;
  auVar94._0_24_ = *(undefined1 (*) [24])(param_1[0xb] + 0x10);
  auVar24._24_8_ = 0;
  auVar24._0_24_ = *(undefined1 (*) [24])(param_1[0x10] + 8);
  auVar23 = vsubpd_avx(auVar94,auVar24);
  auVar24 = vpermpd_avx2(auVar23,0xc9);
  auVar76._0_8_ = param_6[1] * auVar23._0_8_ - dVar59 * auVar24._0_8_;
  auVar76._8_8_ = param_6[2] * auVar23._8_8_ - dVar60 * auVar24._8_8_;
  auVar76._16_8_ = *param_6 * auVar23._16_8_ - dVar1 * auVar24._16_8_;
  auVar76._24_8_ = auVar23._24_8_ * 0.0 - auVar24._24_8_ * 0.0;
  auVar23 = vpermpd_avx2(auVar54,0x55);
  auVar24 = vpermpd_avx2(auVar54,0xaa);
  dVar30 = *(double *)(param_1[0x1a] + 0x10) * auVar54._0_8_ +
           *(double *)param_1[0x18] * auVar23._0_8_ + auVar24._0_8_ * *(double *)(param_1[0x19] + 8)
  ;
  dVar44 = *(double *)param_1[0x1b] * auVar54._0_8_ +
           *(double *)(param_1[0x18] + 8) * auVar23._8_8_ +
           auVar24._8_8_ * *(double *)(param_1[0x19] + 0x10);
  dVar45 = *(double *)(param_1[0x1b] + 8) * auVar54._0_8_ +
           *(double *)(param_1[0x18] + 0x10) * auVar23._16_8_ +
           auVar24._16_8_ * *(double *)param_1[0x1a];
  auVar20 = vpermpd_avx2(auVar76,0x55);
  auVar26 = vpermpd_avx2(auVar76,0xaa);
  dVar21 = *(double *)param_1[0x20] * auVar76._0_8_ +
           *(double *)(param_1[0x1d] + 8) * auVar20._0_8_ +
           auVar26._0_8_ * *(double *)(param_1[0x1e] + 0x10);
  dVar28 = *(double *)(param_1[0x20] + 8) * auVar76._0_8_ +
           *(double *)(param_1[0x1d] + 0x10) * auVar20._8_8_ +
           auVar26._8_8_ * *(double *)param_1[0x1f];
  dVar29 = *(double *)(param_1[0x20] + 0x10) * auVar76._0_8_ +
           *(double *)param_1[0x1e] * auVar20._16_8_ +
           auVar26._16_8_ * *(double *)(param_1[0x1f] + 8);
  auVar13 = vpermpd_avx2(auVar54,0xc9);
  auVar48._0_8_ = auVar13._0_8_ * dVar30;
  auVar48._8_8_ = auVar13._8_8_ * dVar44;
  auVar7 = vshufpd_avx(auVar48,auVar48,1);
  auVar95 = vpermpd_avx2(auVar76,0xc9);
  auVar49._0_8_ = auVar95._0_8_ * dVar21;
  auVar49._8_8_ = auVar95._8_8_ * dVar28;
  auVar89 = vshufpd_avx(auVar49,auVar49,1);
  dVar69 = *(double *)param_1[10];
  dVar101 = *(double *)(param_1[10] + 8);
  dVar100 = 0.0;
  if (__real_3f1a36e2eb1c432d < param_4) {
    auVar104._24_8_ = 0;
    auVar104._0_24_ = *(undefined1 (*) [24])(param_1[0x27] + 8);
    auVar6 = vsubpd_avx(auVar6,auVar104);
    auVar105._24_8_ = 0;
    auVar105._0_24_ = *(undefined1 (*) [24])(param_1[0x28] + 8);
    auVar94 = vsubpd_avx(auVar94,auVar105);
    auVar6 = vsubpd_avx(auVar6,auVar94);
    auVar5._0_8_ = dVar59 * auVar6._0_8_;
    auVar5._8_8_ = dVar60 * auVar6._8_8_;
    auVar32 = vshufpd_avx(auVar5,auVar5,1);
    dVar100 = param_2 * param_8 + dVar1 * auVar6._16_8_ + auVar5._0_8_ + auVar32._0_8_;
  }
  dVar1 = __real_3ff0000000000000;
  if ((param_5 & 1) != 0) {
    dVar1 = __real_3ff0000000000000 / (dVar69 + dVar101);
  }
  dVar59 = dVar1 * param_3 * param_2 * param_2;
  param_2 = dVar1 * param_4 * param_2;
  dVar1 = ((dVar59 * param_7 - dVar100 * param_2) - *param_9) *
          (__real_3ff0000000000000 /
          ((auVar13._16_8_ * dVar45 + auVar7._0_8_ + auVar48._0_8_ + dVar69 + dVar101 +
           auVar95._16_8_ * dVar29 + auVar89._0_8_ + auVar49._0_8_) * (param_2 + dVar59) +
          __real_3ff0000000000000)) * *(double *)param_1[0x33];
  dVar59 = dVar69 * dVar1;
  dVar100 = param_6[1];
  dVar124 = param_6[2];
  dVar16 = *param_6;
  dVar60 = dVar1 * (double)((ulonglong)dVar101 ^ __real_8000000000000000);
  auVar89._0_8_ = dVar16 * dVar59 + *(double *)(param_1[0xf] + 8);
  auVar89._8_8_ = dVar100 * dVar59 + *(double *)(param_1[0xf] + 0x10);
  auVar95._16_8_ = dVar124 * dVar59 + *(double *)param_1[0x10];
  auVar95._0_16_ = auVar89;
  auVar95._24_8_ = dVar59 * 0.0 + 0.0;
  *(undefined1 (*) [16])(param_1[0xf] + 8) = auVar89;
  uVar2 = vmovlpd_avx(auVar95._16_16_);
  *(undefined8 *)param_1[0x10] = uVar2;
  auVar7._0_8_ = dVar16 * dVar60 + *(double *)(param_1[0x10] + 8);
  auVar7._8_8_ = dVar100 * dVar60 + *(double *)(param_1[0x10] + 0x10);
  auVar13._16_8_ = dVar124 * dVar60 + *(double *)param_1[0x11];
  auVar13._0_16_ = auVar7;
  auVar13._24_8_ = dVar60 * 0.0 + 0.0;
  uVar2 = vmovlpd_avx(auVar7);
  *(undefined8 *)(param_1[0x10] + 8) = uVar2;
  auVar13 = vpermpd_avx2(auVar13,0xe9);
  *(undefined1 (*) [16])(param_1[0x10] + 0x10) = auVar13._0_16_;
  dVar87 = _UNK_150b54438;
  dVar68 = _UNK_150b54430;
  dVar46 = _UNK_150b54428;
  dVar31 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar4 = _UNK_150b54418;
  dVar16 = _UNK_150b54410;
  dVar124 = _UNK_150b54408;
  dVar100 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar60 = _UNK_15076c6f8;
  dVar59 = ___xmm_bff00000000000003ff0000000000000;
  if (0.0 < dVar69) {
    auVar63._0_8_ = dVar1 * dVar30;
    auVar63._8_8_ = dVar1 * dVar44;
    auVar63._16_8_ = dVar1 * dVar45;
    auVar63._24_8_ = dVar1 * (auVar54._0_8_ * 0.0 + auVar23._24_8_ * 0.0 + auVar24._24_8_ * 0.0);
    auVar32._8_8_ = 0;
    auVar32._0_8_ = *(ulonglong *)(param_1[0x12] + 8);
    auVar7 = vmovhpd_avx(auVar32,*(undefined8 *)param_1[0x12]);
    auVar50._8_8_ = 0;
    auVar50._0_8_ = *(ulonglong *)(param_1[0x11] + 0x10);
    auVar89 = vmovhpd_avx(auVar50,*(undefined8 *)(param_1[0x11] + 8));
    auVar23 = vpermpd_avx2(auVar63,0x55);
    auVar24 = vpermpd_avx2(auVar63,0xaa);
    dVar101 = (___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
               auVar89._0_8_ * auVar24._0_8_ +
              ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
              auVar23._0_8_ * *(double *)param_1[0x12] +
              *(double *)(param_1[0x11] + 8) * 0.0 +
              auVar63._0_8_ * auVar7._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
              __real_3fe0000000000000 + *(double *)(param_1[0x11] + 8);
    dVar30 = (_UNK_150b54428 * auVar89._8_8_ * auVar24._8_8_ +
             _UNK_150b54408 * auVar23._8_8_ * *(double *)(param_1[0x12] + 8) +
             *(double *)(param_1[0x11] + 0x10) * 0.0 + auVar63._0_8_ * auVar7._8_8_ * _UNK_15076c6f8
             ) * __real_3fe0000000000000 + *(double *)(param_1[0x11] + 0x10);
    dVar44 = (_UNK_150b54430 * auVar7._0_8_ * auVar24._16_8_ +
             _UNK_150b54410 * auVar23._16_8_ * *(double *)(param_1[0x11] + 8) +
             *(double *)param_1[0x12] * 0.0 +
             auVar63._0_8_ * auVar89._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
             __real_3fe0000000000000 + *(double *)param_1[0x12];
    dVar45 = (_UNK_150b54438 * auVar7._8_8_ * auVar24._24_8_ +
             _UNK_150b54418 * auVar23._24_8_ * *(double *)(param_1[0x11] + 0x10) +
             *(double *)(param_1[0x12] + 8) * 0.0 + auVar63._0_8_ * auVar89._8_8_ * _UNK_15076c6f8)
             * __real_3fe0000000000000 + *(double *)(param_1[0x12] + 8);
    auVar71._0_8_ = dVar101 * dVar101 + dVar44 * dVar44;
    auVar71._8_8_ = dVar30 * dVar30 + dVar45 * dVar45;
    auVar7 = vshufpd_avx(auVar71,auVar71,1);
    dVar69 = auVar71._0_8_ + auVar7._0_8_;
    auVar90._8_8_ = 0;
    auVar90._0_8_ = __real_3e45798ee2308c3a;
    auVar72._8_8_ = 0;
    auVar72._0_8_ = dVar69;
    auVar7 = vcmpsd_avx(auVar90,auVar72,6);
    uVar88 = ~auVar7._0_8_ & __real_ffffffffffffffff;
    dVar69 = __real_3ff0000000000000 / SQRT(dVar69);
    dVar70 = (double)(((ulonglong)(dVar101 * dVar69) ^
                      ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) &
                     uVar88);
    dVar101 = (double)(((ulonglong)(dVar30 * dVar69) ^ _UNK_150b54548) & uVar88);
    dVar86 = (double)(((ulonglong)(dVar44 * dVar69) ^ _UNK_150b54550) & uVar88);
    dVar69 = (double)(((ulonglong)(dVar45 * dVar69) ^ _UNK_150b54558) & uVar88);
    auVar96._0_8_ =
         (double)((ulonglong)dVar70 ^
                 ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
    auVar96._8_8_ = (double)((ulonglong)dVar101 ^ _UNK_150b54548);
    auVar96._16_8_ = (double)((ulonglong)dVar86 ^ _UNK_150b54550);
    auVar96._24_8_ = (double)((ulonglong)dVar69 ^ _UNK_150b54558);
    *(undefined1 (*) [32])(param_1[0x11] + 8) = auVar96;
    auVar112._8_8_ = 0;
    auVar112._0_8_ = *(ulonglong *)(param_1[1] + 8);
    uVar2 = *(undefined8 *)(param_1[2] + 8);
    auVar119._8_8_ = uVar2;
    auVar119._0_8_ = uVar2;
    auVar121._16_8_ = uVar2;
    auVar121._0_16_ = auVar119;
    auVar121._24_8_ = uVar2;
    auVar7 = vunpcklpd_avx(auVar112,auVar119);
    auVar24 = vpermpd_avx2(auVar96,0xc9);
    auVar3 = *(undefined1 (*) [24])(param_1[1] + 8);
    auVar123._24_8_ = 0;
    auVar123._0_24_ = auVar3;
    auVar23 = vblendpd_avx(auVar123,auVar121,8);
    dVar30 = auVar96._0_8_ * SUB168(*(undefined1 (*) [16])(param_1[1] + 0x10),0) -
             auVar23._0_8_ * auVar24._0_8_;
    dVar44 = auVar96._8_8_ * SUB168(*(undefined1 (*) [16])(param_1[1] + 0x10),8) -
             auVar23._8_8_ * auVar24._8_8_;
    dVar45 = auVar96._16_8_ * auVar7._0_8_ - auVar23._16_8_ * auVar24._16_8_;
    dVar118 = auVar96._24_8_ * auVar7._8_8_ - auVar23._24_8_ * auVar24._24_8_;
    auVar114._0_8_ = dVar30 + dVar30;
    auVar114._8_8_ = dVar44 + dVar44;
    auVar114._16_8_ = dVar45 + dVar45;
    auVar114._24_8_ = dVar118 + dVar118;
    auVar23 = vpermpd_avx2(auVar96,0xff);
    auVar24 = vpermpd_avx2(auVar114,0xc9);
    dVar118 = auVar23._0_8_;
    dVar109 = auVar23._8_8_;
    dVar110 = auVar23._16_8_;
    dVar111 = auVar23._24_8_;
    auVar23 = vpermpd_avx2(auVar114,0xd2);
    auVar115._0_8_ = auVar114._0_8_ * dVar70;
    auVar115._8_8_ = auVar114._8_8_ * dVar101;
    auVar115._16_8_ = auVar114._16_8_ * dVar86;
    auVar115._24_8_ = auVar114._24_8_ * dVar69;
    auVar13 = vpermpd_avx2(auVar115,0xc9);
    auVar116._0_8_ = dVar70 * auVar23._0_8_ - auVar13._0_8_;
    auVar116._8_8_ = dVar101 * auVar23._8_8_ - auVar13._8_8_;
    auVar116._16_8_ = dVar86 * auVar23._16_8_ - auVar13._16_8_;
    auVar116._24_8_ = dVar69 * auVar23._24_8_ - auVar13._24_8_;
    auVar23 = vpermpd_avx2(auVar116,0xc9);
    auVar113._0_8_ =
         *(double *)(param_1[0xf] + 8) + dVar118 * auVar24._0_8_ + auVar3._0_8_ + auVar23._0_8_;
    auVar113._8_8_ =
         *(double *)(param_1[0xf] + 0x10) + dVar109 * auVar24._8_8_ + auVar3._8_8_ + auVar23._8_8_;
    auVar117._16_8_ =
         *(double *)param_1[0x10] + dVar110 * auVar24._16_8_ + auVar3._16_8_ + auVar23._16_8_;
    auVar117._0_16_ = auVar113;
    auVar117._24_8_ = dVar111 * auVar24._24_8_ + 0.0 + auVar23._24_8_ + 0.0;
    *(undefined1 (*) [16])(param_1[10] + 0x10) = auVar113;
    uVar2 = vmovlpd_avx(auVar117._16_16_);
    *(undefined8 *)(param_1[0xb] + 8) = uVar2;
    auVar120._8_8_ = 0;
    auVar120._0_8_ = *(ulonglong *)(*param_1 + 8);
    auVar7 = vmovhpd_avx(auVar120,*(undefined8 *)*param_1);
    auVar122._8_8_ = 0;
    auVar122._0_8_ = *(ulonglong *)param_1[1];
    auVar89 = vmovhpd_avx(auVar122,*(undefined8 *)(*param_1 + 0x10));
    dVar101 = *(double *)(*param_1 + 8);
    auVar3 = *param_1;
    dVar69 = *(double *)param_1[1];
    auVar23 = vpermpd_avx2(auVar96,0x55);
    dVar30 = *(double *)param_1[1];
    dVar44 = *(double *)*param_1;
    dVar45 = *(double *)(*param_1 + 8);
    auVar24 = vpermpd_avx2(auVar96,0xaa);
    *(double *)(param_1[0xc] + 0x10) =
         dVar31 * auVar7._0_8_ * auVar24._0_8_ +
         dVar100 * *(double *)(*param_1 + 0x10) * auVar23._0_8_ +
         dVar118 * *(double *)*param_1 + auVar89._0_8_ * dVar70 * dVar59;
    *(double *)param_1[0xd] =
         dVar46 * auVar7._8_8_ * auVar24._8_8_ +
         dVar124 * dVar30 * auVar23._8_8_ + dVar109 * dVar101 + auVar89._8_8_ * dVar70 * dVar60;
    *(double *)(param_1[0xd] + 8) =
         dVar68 * auVar89._0_8_ * auVar24._16_8_ +
         dVar16 * dVar44 * auVar23._16_8_ + dVar110 * auVar3._16_8_ + auVar7._0_8_ * dVar70 * dVar59
    ;
    *(double *)(param_1[0xd] + 0x10) =
         dVar87 * auVar89._8_8_ * auVar24._24_8_ +
         dVar4 * dVar45 * auVar23._24_8_ + dVar111 * dVar69 + auVar7._8_8_ * dVar70 * dVar60;
    dVar69 = auVar96._0_8_ + auVar96._0_8_;
    dVar101 = auVar96._8_8_ + auVar96._8_8_;
    dVar59 = auVar96._16_8_ + auVar96._16_8_;
    dVar60 = auVar96._24_8_ + auVar96._24_8_;
    auVar77._0_8_ = dVar70 * dVar69;
    auVar77._8_8_ = dVar70 * dVar101;
    auVar77._16_8_ = dVar70 * dVar59;
    auVar77._24_8_ = dVar70 * dVar60;
    auVar91._0_8_ = auVar23._0_8_ * dVar69;
    auVar91._8_8_ = auVar23._8_8_ * dVar101;
    auVar97._16_8_ = auVar23._16_8_ * dVar59;
    auVar97._0_16_ = auVar91;
    auVar97._24_8_ = auVar23._24_8_ * dVar60;
    auVar55._0_8_ = dVar118 * dVar69;
    auVar55._8_8_ = dVar109 * dVar101;
    auVar55._16_8_ = dVar110 * dVar59;
    auVar55._24_8_ = dVar111 * dVar60;
    auVar23 = vperm2f128_avx(auVar97,auVar77,0x21);
    auVar23 = vshufpd_avx(auVar23,ZEXT1632(auVar77._16_16_),4);
    auVar33._0_8_ = auVar23._0_8_ + auVar55._0_8_;
    auVar33._8_8_ = auVar23._8_8_ + auVar55._8_8_;
    auVar38._16_8_ = auVar23._16_8_ + auVar55._16_8_;
    auVar38._0_16_ = auVar33;
    auVar38._24_8_ = auVar23._24_8_ + auVar55._24_8_;
    auVar13 = vsubpd_avx(auVar23,auVar55);
    auVar7 = vshufpd_avx(auVar91,auVar91,1);
    auVar78._8_8_ = auVar77._0_8_;
    auVar78._0_8_ = auVar77._0_8_;
    auVar78._16_8_ = auVar77._0_8_;
    auVar78._24_8_ = auVar77._0_8_;
    auVar23 = vblendpd_avx(auVar78,ZEXT1632(auVar7),1);
    auVar24 = vpermpd_avx2(auVar97,0x55);
    auVar24 = vblendpd_avx(ZEXT1632(CONCAT88(dVar86 * dVar59,dVar86 * dVar59)),auVar24,0xc);
    auVar64._0_8_ = auVar23._0_8_ + auVar24._0_8_;
    auVar64._8_8_ = auVar23._8_8_ + auVar24._8_8_;
    auVar64._16_8_ = auVar23._16_8_ + auVar24._16_8_;
    auVar64._24_8_ = auVar23._24_8_ + auVar24._24_8_;
    auVar79._8_8_ = __real_3ff0000000000000;
    auVar79._0_8_ = __real_3ff0000000000000;
    auVar79._16_8_ = __real_3ff0000000000000;
    auVar79._24_8_ = __real_3ff0000000000000;
    auVar24 = vsubpd_avx(auVar79,auVar64);
    dVar59 = auVar24._0_8_;
    dVar69 = *(double *)param_1[8];
    dVar101 = *(double *)(param_1[8] + 0x10);
    auVar7 = vmovhpd_avx(ZEXT816(0) << 0x40,*(undefined8 *)(param_1[8] + 8));
    auVar23 = vpermpd_avx2(auVar13,0xaa);
    dVar60 = auVar7._0_8_;
    dVar30 = auVar7._8_8_;
    auVar95 = vpermpd_avx2(auVar38,0x55);
    auVar106._0_8_ = auVar95._0_8_ * 0.0 + dVar60 * auVar23._0_8_ + dVar69 * dVar59;
    auVar106._8_8_ = auVar95._8_8_ * 0.0 + dVar30 * auVar23._8_8_ + dVar59 * 0.0;
    auVar106._16_8_ = dVar101 * auVar95._16_8_ + auVar23._16_8_ * 0.0 + dVar59 * 0.0;
    auVar106._24_8_ = auVar95._24_8_ * 0.0 + auVar23._24_8_ * 0.0 + dVar59 * 0.0;
    auVar23 = vpermpd_avx2(auVar38,0xaa);
    auVar95 = vpermpd_avx2(auVar24,0x55);
    dVar59 = auVar13._0_8_;
    auVar98._0_8_ = dVar59 * 0.0 + dVar69 * auVar23._0_8_ + dVar60 * auVar95._0_8_;
    auVar98._8_8_ = dVar59 * 0.0 + auVar23._8_8_ * 0.0 + dVar30 * auVar95._8_8_;
    auVar98._16_8_ = dVar101 * dVar59 + auVar23._16_8_ * 0.0 + auVar95._16_8_ * 0.0;
    auVar98._24_8_ = dVar59 * 0.0 + auVar23._24_8_ * 0.0 + auVar95._24_8_ * 0.0;
    auVar23 = vpermpd_avx2(auVar13,0x55);
    auVar95 = vpermpd_avx2(auVar24,0xaa);
    auVar80._0_8_ = auVar95._0_8_ * 0.0 + auVar23._0_8_ * dVar69 + dVar60 * auVar33._0_8_;
    auVar80._8_8_ = auVar95._8_8_ * 0.0 + auVar23._8_8_ * 0.0 + dVar30 * auVar33._0_8_;
    auVar80._16_8_ = dVar101 * auVar95._16_8_ + auVar23._16_8_ * 0.0 + auVar33._0_8_ * 0.0;
    auVar80._24_8_ = auVar95._24_8_ * 0.0 + auVar23._24_8_ * 0.0 + auVar33._0_8_ * 0.0;
    auVar7 = vunpcklpd_avx(auVar24._0_16_,auVar38._16_16_);
    auVar23 = vblendpd_avx(ZEXT1632(auVar7),auVar23,0xc);
    auVar95 = vpermpd_avx2(auVar106,0x55);
    auVar7 = vblendpd_avx(auVar24._0_16_,auVar13._16_16_,1);
    dVar124 = auVar7._0_8_;
    dVar16 = auVar7._8_8_;
    dVar30 = auVar23._0_8_;
    dVar44 = auVar23._8_8_;
    dVar45 = auVar23._16_8_;
    dVar100 = auVar23._24_8_;
    auVar6 = vpermpd_avx2(auVar106,0xaa);
    auVar7 = vshufpd_avx(auVar33,auVar13._0_16_,1);
    auVar23 = vblendpd_avx(auVar24,ZEXT1632(auVar7),3);
    dVar69 = auVar23._0_8_;
    auVar102._0_8_ = dVar69 * auVar6._0_8_ + dVar30 * auVar106._0_8_ + dVar124 * auVar95._0_8_;
    dVar101 = auVar23._8_8_;
    auVar102._8_8_ = dVar101 * auVar6._8_8_ + dVar44 * auVar106._0_8_ + dVar16 * auVar95._8_8_;
    dVar59 = auVar23._16_8_;
    auVar107._16_8_ =
         dVar59 * auVar6._16_8_ + dVar45 * auVar106._0_8_ + auVar33._0_8_ * auVar95._16_8_;
    auVar107._0_16_ = auVar102;
    dVar60 = auVar23._24_8_;
    auVar107._24_8_ =
         dVar60 * auVar6._24_8_ + dVar100 * auVar106._0_8_ + auVar33._8_8_ * auVar95._24_8_;
    auVar23 = vpermpd_avx2(auVar98,0x55);
    auVar24 = vpermpd_avx2(auVar98,0xaa);
    auVar61._0_8_ = dVar69 * auVar24._0_8_ + dVar30 * auVar98._0_8_ + dVar124 * auVar23._0_8_;
    auVar61._8_8_ = dVar101 * auVar24._8_8_ + dVar44 * auVar98._0_8_ + dVar16 * auVar23._8_8_;
    auVar65._16_8_ =
         dVar59 * auVar24._16_8_ + dVar45 * auVar98._0_8_ + auVar33._0_8_ * auVar23._16_8_;
    auVar65._0_16_ = auVar61;
    auVar65._24_8_ =
         dVar60 * auVar24._24_8_ + dVar100 * auVar98._0_8_ + auVar33._8_8_ * auVar23._24_8_;
    auVar23 = vpermpd_avx2(auVar80,0x55);
    auVar24 = vpermpd_avx2(auVar80,0xaa);
    *(undefined1 (*) [16])param_1[0x18] = auVar102;
    uVar2 = vmovlpd_avx(auVar107._16_16_);
    *(undefined8 *)(param_1[0x18] + 0x10) = uVar2;
    auVar73._0_8_ = dVar69 * auVar24._0_8_ + dVar30 * auVar80._0_8_ + dVar124 * auVar23._0_8_;
    auVar73._8_8_ = dVar101 * auVar24._8_8_ + dVar44 * auVar80._0_8_ + dVar16 * auVar23._8_8_;
    auVar81._16_8_ =
         dVar59 * auVar24._16_8_ + dVar45 * auVar80._0_8_ + auVar33._0_8_ * auVar23._16_8_;
    auVar81._0_16_ = auVar73;
    auVar81._24_8_ =
         dVar60 * auVar24._24_8_ + dVar100 * auVar80._0_8_ + auVar33._8_8_ * auVar23._24_8_;
    *(undefined8 *)param_1[0x19] = 0;
    *(undefined1 (*) [16])(param_1[0x19] + 8) = auVar61;
    uVar2 = vmovlpd_avx(auVar65._16_16_);
    *(undefined8 *)param_1[0x1a] = uVar2;
    *(undefined8 *)(param_1[0x1a] + 8) = 0;
    *(undefined1 (*) [16])(param_1[0x1a] + 0x10) = auVar73;
    uVar2 = vmovlpd_avx(auVar81._16_16_);
    *(undefined8 *)(param_1[0x1b] + 8) = uVar2;
    *(undefined8 *)(param_1[0x1b] + 0x10) = 0;
    *(undefined8 *)param_1[0x1c] = 0;
    *(undefined8 *)(param_1[0x1c] + 8) = 0;
    *(undefined8 *)(param_1[0x1c] + 0x10) = 0;
    *(undefined8 *)param_1[0x1d] = 0x3ff0000000000000;
    dVar101 = *(double *)(param_1[10] + 8);
  }
  dVar4 = _UNK_150b54438;
  dVar16 = _UNK_150b54430;
  dVar124 = _UNK_150b54428;
  dVar100 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar45 = _UNK_150b54418;
  dVar44 = _UNK_150b54410;
  dVar30 = _UNK_150b54408;
  dVar60 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar59 = _UNK_15076c6f8;
  dVar69 = ___xmm_bff00000000000003ff0000000000000;
  if (0.0 < dVar101) {
    dVar101 = (double)((ulonglong)dVar1 ^ uVar47);
    auVar25._0_8_ = dVar101 * dVar21;
    auVar25._8_8_ = dVar101 * dVar28;
    auVar25._16_8_ = dVar101 * dVar29;
    auVar25._24_8_ = dVar101 * (auVar76._0_8_ * 0.0 + auVar20._24_8_ * 0.0 + auVar26._24_8_ * 0.0);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = *(ulonglong *)(param_1[0x13] + 0x10);
    auVar7 = vmovhpd_avx(auVar8,*(undefined8 *)(param_1[0x13] + 8));
    auVar17._8_8_ = 0;
    auVar17._0_8_ = *(ulonglong *)param_1[0x13];
    auVar89 = vmovhpd_avx(auVar17,*(undefined8 *)(param_1[0x12] + 0x10));
    auVar23 = vpermpd_avx2(auVar25,0x55);
    auVar24 = vpermpd_avx2(auVar25,0xaa);
    dVar21 = (___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
              auVar24._0_8_ * auVar89._0_8_ +
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
             auVar23._0_8_ * *(double *)(param_1[0x13] + 8) +
             *(double *)(param_1[0x12] + 0x10) * 0.0 +
             auVar25._0_8_ * auVar7._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
             __real_3fe0000000000000 + *(double *)(param_1[0x12] + 0x10);
    dVar28 = (_UNK_150b54428 * auVar24._8_8_ * auVar89._8_8_ +
             _UNK_150b54408 * auVar23._8_8_ * *(double *)(param_1[0x13] + 0x10) +
             *(double *)param_1[0x13] * 0.0 + auVar25._0_8_ * auVar7._8_8_ * _UNK_15076c6f8) *
             __real_3fe0000000000000 + *(double *)param_1[0x13];
    dVar29 = (_UNK_150b54430 * auVar24._16_8_ * auVar7._0_8_ +
             _UNK_150b54410 * auVar23._16_8_ * *(double *)(param_1[0x12] + 0x10) +
             *(double *)(param_1[0x13] + 8) * 0.0 +
             auVar25._0_8_ * auVar89._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
             __real_3fe0000000000000 + *(double *)(param_1[0x13] + 8);
    dVar68 = (_UNK_150b54438 * auVar24._24_8_ * auVar7._8_8_ +
             _UNK_150b54418 * auVar23._24_8_ * *(double *)param_1[0x13] +
             *(double *)(param_1[0x13] + 0x10) * 0.0 +
             auVar25._0_8_ * auVar89._8_8_ * _UNK_15076c6f8) * __real_3fe0000000000000 +
             *(double *)(param_1[0x13] + 0x10);
    auVar34._0_8_ = dVar21 * dVar21 + dVar29 * dVar29;
    auVar34._8_8_ = dVar28 * dVar28 + dVar68 * dVar68;
    auVar7 = vshufpd_avx(auVar34,auVar34,1);
    dVar101 = auVar34._0_8_ + auVar7._0_8_;
    auVar51._8_8_ = 0;
    auVar51._0_8_ = __real_3e45798ee2308c3a;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = dVar101;
    auVar7 = vcmpsd_avx(auVar51,auVar35,6);
    uVar47 = ~auVar7._0_8_ & __real_ffffffffffffffff;
    dVar101 = __real_3ff0000000000000 / SQRT(dVar101);
    dVar31 = (double)(((ulonglong)(dVar21 * dVar101) ^
                      ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) &
                     uVar47);
    dVar21 = (double)(((ulonglong)(dVar28 * dVar101) ^ _UNK_150b54548) & uVar47);
    dVar46 = (double)(((ulonglong)(dVar29 * dVar101) ^ _UNK_150b54550) & uVar47);
    dVar101 = (double)(((ulonglong)(dVar68 * dVar101) ^ _UNK_150b54558) & uVar47);
    auVar56._0_8_ =
         (double)((ulonglong)dVar31 ^
                 ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
    auVar56._8_8_ = (double)((ulonglong)dVar21 ^ _UNK_150b54548);
    auVar56._16_8_ = (double)((ulonglong)dVar46 ^ _UNK_150b54550);
    auVar56._24_8_ = (double)((ulonglong)dVar101 ^ _UNK_150b54558);
    *(undefined1 (*) [32])(param_1[0x12] + 0x10) = auVar56;
    auVar74._8_8_ = 0;
    auVar74._0_8_ = *(ulonglong *)(param_1[5] + 8);
    uVar2 = *(undefined8 *)(param_1[6] + 8);
    auVar92._8_8_ = uVar2;
    auVar92._0_8_ = uVar2;
    auVar99._16_8_ = uVar2;
    auVar99._0_16_ = auVar92;
    auVar99._24_8_ = uVar2;
    auVar7 = vunpcklpd_avx(auVar74,auVar92);
    auVar24 = vpermpd_avx2(auVar56,0xc9);
    auVar3 = *(undefined1 (*) [24])(param_1[5] + 8);
    auVar108._24_8_ = 0;
    auVar108._0_24_ = auVar3;
    auVar23 = vblendpd_avx(auVar108,auVar99,8);
    dVar28 = auVar56._0_8_ * SUB168(*(undefined1 (*) [16])(param_1[5] + 0x10),0) -
             auVar23._0_8_ * auVar24._0_8_;
    dVar29 = auVar56._8_8_ * SUB168(*(undefined1 (*) [16])(param_1[5] + 0x10),8) -
             auVar23._8_8_ * auVar24._8_8_;
    dVar68 = auVar56._16_8_ * auVar7._0_8_ - auVar23._16_8_ * auVar24._16_8_;
    dVar87 = auVar56._24_8_ * auVar7._8_8_ - auVar23._24_8_ * auVar24._24_8_;
    auVar82._0_8_ = dVar28 + dVar28;
    auVar82._8_8_ = dVar29 + dVar29;
    auVar82._16_8_ = dVar68 + dVar68;
    auVar82._24_8_ = dVar87 + dVar87;
    auVar23 = vpermpd_avx2(auVar56,0xff);
    auVar24 = vpermpd_avx2(auVar82,0xc9);
    dVar68 = auVar23._0_8_;
    dVar87 = auVar23._8_8_;
    dVar70 = auVar23._16_8_;
    dVar86 = auVar23._24_8_;
    auVar23 = vpermpd_avx2(auVar82,0xd2);
    auVar83._0_8_ = auVar82._0_8_ * dVar31;
    auVar83._8_8_ = auVar82._8_8_ * dVar21;
    auVar83._16_8_ = auVar82._16_8_ * dVar46;
    auVar83._24_8_ = auVar82._24_8_ * dVar101;
    auVar20 = vpermpd_avx2(auVar83,0xc9);
    auVar84._0_8_ = dVar31 * auVar23._0_8_ - auVar20._0_8_;
    auVar84._8_8_ = dVar21 * auVar23._8_8_ - auVar20._8_8_;
    auVar84._16_8_ = dVar46 * auVar23._16_8_ - auVar20._16_8_;
    auVar84._24_8_ = dVar101 * auVar23._24_8_ - auVar20._24_8_;
    auVar23 = vpermpd_avx2(auVar84,0xc9);
    auVar75._0_8_ =
         *(double *)(param_1[0x10] + 8) + dVar68 * auVar24._0_8_ + auVar3._0_8_ + auVar23._0_8_;
    auVar75._8_8_ =
         *(double *)(param_1[0x10] + 0x10) + dVar87 * auVar24._8_8_ + auVar3._8_8_ + auVar23._8_8_;
    auVar85._16_8_ =
         *(double *)param_1[0x11] + dVar70 * auVar24._16_8_ + auVar3._16_8_ + auVar23._16_8_;
    auVar85._0_16_ = auVar75;
    auVar85._24_8_ = dVar86 * auVar24._24_8_ + 0.0 + auVar23._24_8_ + 0.0;
    *(undefined1 (*) [16])(param_1[0xb] + 0x10) = auVar75;
    uVar2 = vmovlpd_avx(auVar85._16_16_);
    *(undefined8 *)(param_1[0xc] + 8) = uVar2;
    auVar93._8_8_ = 0;
    auVar93._0_8_ = *(ulonglong *)(param_1[4] + 8);
    auVar7 = vmovhpd_avx(auVar93,*(undefined8 *)param_1[4]);
    auVar103._8_8_ = 0;
    auVar103._0_8_ = *(ulonglong *)param_1[5];
    auVar89 = vmovhpd_avx(auVar103,*(undefined8 *)(param_1[4] + 0x10));
    dVar21 = *(double *)(param_1[4] + 8);
    auVar3 = param_1[4];
    dVar101 = *(double *)param_1[5];
    auVar23 = vpermpd_avx2(auVar56,0x55);
    dVar28 = *(double *)param_1[4];
    dVar29 = *(double *)(param_1[4] + 8);
    auVar24 = vpermpd_avx2(auVar56,0xaa);
    *(double *)param_1[0xe] =
         dVar100 * auVar7._0_8_ * auVar24._0_8_ +
         dVar60 * *(double *)(param_1[4] + 0x10) * auVar23._0_8_ +
         dVar68 * *(double *)param_1[4] + auVar89._0_8_ * dVar31 * dVar69;
    *(double *)(param_1[0xe] + 8) =
         dVar124 * auVar7._8_8_ * auVar24._8_8_ +
         dVar30 * *(double *)param_1[5] * auVar23._8_8_ +
         dVar87 * dVar21 + auVar89._8_8_ * dVar31 * dVar59;
    *(double *)(param_1[0xe] + 0x10) =
         dVar16 * auVar89._0_8_ * auVar24._16_8_ +
         dVar44 * dVar28 * auVar23._16_8_ + dVar70 * auVar3._16_8_ + auVar7._0_8_ * dVar31 * dVar69;
    *(double *)param_1[0xf] =
         dVar4 * auVar89._8_8_ * auVar24._24_8_ +
         dVar45 * dVar29 * auVar23._24_8_ + dVar86 * dVar101 + auVar7._8_8_ * dVar31 * dVar59;
    dVar69 = auVar56._0_8_ + auVar56._0_8_;
    dVar101 = auVar56._8_8_ + auVar56._8_8_;
    dVar59 = auVar56._16_8_ + auVar56._16_8_;
    dVar60 = auVar56._24_8_ + auVar56._24_8_;
    auVar39._0_8_ = dVar31 * dVar69;
    auVar39._8_8_ = dVar31 * dVar101;
    auVar39._16_8_ = dVar31 * dVar59;
    auVar39._24_8_ = dVar31 * dVar60;
    auVar52._0_8_ = auVar23._0_8_ * dVar69;
    auVar52._8_8_ = auVar23._8_8_ * dVar101;
    auVar57._16_8_ = auVar23._16_8_ * dVar59;
    auVar57._0_16_ = auVar52;
    auVar57._24_8_ = auVar23._24_8_ * dVar60;
    auVar20._0_8_ = dVar69 * dVar68;
    auVar20._8_8_ = dVar101 * dVar87;
    auVar20._16_8_ = dVar59 * dVar70;
    auVar20._24_8_ = dVar60 * dVar86;
    auVar23 = vperm2f128_avx(auVar57,auVar39,0x21);
    auVar23 = vshufpd_avx(auVar23,ZEXT1632(auVar39._16_16_),4);
    auVar9._0_8_ = auVar20._0_8_ + auVar23._0_8_;
    auVar9._8_8_ = auVar20._8_8_ + auVar23._8_8_;
    auVar14._16_8_ = auVar20._16_8_ + auVar23._16_8_;
    auVar14._0_16_ = auVar9;
    auVar14._24_8_ = auVar20._24_8_ + auVar23._24_8_;
    auVar20 = vsubpd_avx(auVar23,auVar20);
    auVar7 = vshufpd_avx(auVar52,auVar52,1);
    auVar40._8_8_ = auVar39._0_8_;
    auVar40._0_8_ = auVar39._0_8_;
    auVar40._16_8_ = auVar39._0_8_;
    auVar40._24_8_ = auVar39._0_8_;
    auVar23 = vblendpd_avx(auVar40,ZEXT1632(auVar7),1);
    auVar24 = vpermpd_avx2(auVar57,0x55);
    auVar24 = vblendpd_avx(ZEXT1632(CONCAT88(dVar46 * dVar59,dVar46 * dVar59)),auVar24,0xc);
    auVar26._0_8_ = auVar23._0_8_ + auVar24._0_8_;
    auVar26._8_8_ = auVar23._8_8_ + auVar24._8_8_;
    auVar26._16_8_ = auVar23._16_8_ + auVar24._16_8_;
    auVar26._24_8_ = auVar23._24_8_ + auVar24._24_8_;
    auVar41._8_8_ = __real_3ff0000000000000;
    auVar41._0_8_ = __real_3ff0000000000000;
    auVar41._16_8_ = __real_3ff0000000000000;
    auVar41._24_8_ = __real_3ff0000000000000;
    auVar24 = vsubpd_avx(auVar41,auVar26);
    dVar59 = auVar24._0_8_;
    dVar69 = *(double *)param_1[9];
    dVar101 = *(double *)(param_1[9] + 0x10);
    auVar7 = vmovhpd_avx(ZEXT816(0) << 0x40,*(undefined8 *)(param_1[9] + 8));
    auVar23 = vpermpd_avx2(auVar20,0xaa);
    dVar60 = auVar7._0_8_;
    dVar21 = auVar7._8_8_;
    auVar26 = vpermpd_avx2(auVar14,0x55);
    auVar66._0_8_ = auVar26._0_8_ * 0.0 + dVar60 * auVar23._0_8_ + dVar69 * dVar59;
    auVar66._8_8_ = auVar26._8_8_ * 0.0 + dVar21 * auVar23._8_8_ + dVar59 * 0.0;
    auVar66._16_8_ = dVar101 * auVar26._16_8_ + auVar23._16_8_ * 0.0 + dVar59 * 0.0;
    auVar66._24_8_ = auVar26._24_8_ * 0.0 + auVar23._24_8_ * 0.0 + dVar59 * 0.0;
    auVar23 = vpermpd_avx2(auVar14,0xaa);
    auVar26 = vpermpd_avx2(auVar24,0x55);
    dVar59 = auVar20._0_8_;
    auVar58._0_8_ = dVar59 * 0.0 + dVar69 * auVar23._0_8_ + dVar60 * auVar26._0_8_;
    auVar58._8_8_ = dVar59 * 0.0 + auVar23._8_8_ * 0.0 + dVar21 * auVar26._8_8_;
    auVar58._16_8_ = dVar101 * dVar59 + auVar23._16_8_ * 0.0 + auVar26._16_8_ * 0.0;
    auVar58._24_8_ = dVar59 * 0.0 + auVar23._24_8_ * 0.0 + auVar26._24_8_ * 0.0;
    auVar23 = vpermpd_avx2(auVar20,0x55);
    auVar26 = vpermpd_avx2(auVar24,0xaa);
    auVar42._0_8_ = auVar26._0_8_ * 0.0 + auVar23._0_8_ * dVar69 + dVar60 * auVar9._0_8_;
    auVar42._8_8_ = auVar26._8_8_ * 0.0 + auVar23._8_8_ * 0.0 + dVar21 * auVar9._0_8_;
    auVar42._16_8_ = dVar101 * auVar26._16_8_ + auVar23._16_8_ * 0.0 + auVar9._0_8_ * 0.0;
    auVar42._24_8_ = auVar26._24_8_ * 0.0 + auVar23._24_8_ * 0.0 + auVar9._0_8_ * 0.0;
    auVar7 = vunpcklpd_avx(auVar24._0_16_,auVar14._16_16_);
    auVar23 = vblendpd_avx(ZEXT1632(auVar7),auVar23,0xc);
    auVar26 = vpermpd_avx2(auVar66,0x55);
    auVar7 = vblendpd_avx(auVar24._0_16_,auVar20._16_16_,1);
    dVar44 = auVar7._0_8_;
    dVar45 = auVar7._8_8_;
    dVar21 = auVar23._0_8_;
    dVar28 = auVar23._8_8_;
    dVar29 = auVar23._16_8_;
    dVar30 = auVar23._24_8_;
    auVar13 = vpermpd_avx2(auVar66,0xaa);
    auVar7 = vshufpd_avx(auVar9,auVar20._0_16_,1);
    auVar23 = vblendpd_avx(auVar24,ZEXT1632(auVar7),3);
    dVar69 = auVar23._0_8_;
    auVar62._0_8_ = dVar69 * auVar13._0_8_ + dVar21 * auVar66._0_8_ + dVar44 * auVar26._0_8_;
    dVar101 = auVar23._8_8_;
    auVar62._8_8_ = dVar101 * auVar13._8_8_ + dVar28 * auVar66._0_8_ + dVar45 * auVar26._8_8_;
    dVar59 = auVar23._16_8_;
    auVar67._16_8_ =
         dVar59 * auVar13._16_8_ + dVar29 * auVar66._0_8_ + auVar9._0_8_ * auVar26._16_8_;
    auVar67._0_16_ = auVar62;
    dVar60 = auVar23._24_8_;
    auVar67._24_8_ =
         dVar60 * auVar13._24_8_ + dVar30 * auVar66._0_8_ + auVar9._8_8_ * auVar26._24_8_;
    auVar23 = vpermpd_avx2(auVar58,0x55);
    auVar24 = vpermpd_avx2(auVar58,0xaa);
    auVar22._0_8_ = dVar69 * auVar24._0_8_ + dVar21 * auVar58._0_8_ + dVar44 * auVar23._0_8_;
    auVar22._8_8_ = dVar101 * auVar24._8_8_ + dVar28 * auVar58._0_8_ + dVar45 * auVar23._8_8_;
    auVar27._16_8_ =
         dVar59 * auVar24._16_8_ + dVar29 * auVar58._0_8_ + auVar9._0_8_ * auVar23._16_8_;
    auVar27._0_16_ = auVar22;
    auVar27._24_8_ =
         dVar60 * auVar24._24_8_ + dVar30 * auVar58._0_8_ + auVar9._8_8_ * auVar23._24_8_;
    auVar23 = vpermpd_avx2(auVar42,0x55);
    auVar24 = vpermpd_avx2(auVar42,0xaa);
    *(undefined1 (*) [16])(param_1[0x1d] + 8) = auVar62;
    uVar2 = vmovlpd_avx(auVar67._16_16_);
    *(undefined8 *)param_1[0x1e] = uVar2;
    auVar36._0_8_ = dVar69 * auVar24._0_8_ + dVar21 * auVar42._0_8_ + dVar44 * auVar23._0_8_;
    auVar36._8_8_ = dVar101 * auVar24._8_8_ + dVar28 * auVar42._0_8_ + dVar45 * auVar23._8_8_;
    auVar43._16_8_ =
         dVar59 * auVar24._16_8_ + dVar29 * auVar42._0_8_ + auVar9._0_8_ * auVar23._16_8_;
    auVar43._0_16_ = auVar36;
    auVar43._24_8_ =
         dVar60 * auVar24._24_8_ + dVar30 * auVar42._0_8_ + auVar9._8_8_ * auVar23._24_8_;
    *(undefined8 *)(param_1[0x1e] + 8) = 0;
    *(undefined1 (*) [16])(param_1[0x1e] + 0x10) = auVar22;
    uVar2 = vmovlpd_avx(auVar27._16_16_);
    *(undefined8 *)(param_1[0x1f] + 8) = uVar2;
    *(undefined8 *)(param_1[0x1f] + 0x10) = 0;
    *(undefined1 (*) [16])param_1[0x20] = auVar36;
    uVar2 = vmovlpd_avx(auVar43._16_16_);
    *(undefined8 *)(param_1[0x20] + 0x10) = uVar2;
    *(undefined8 *)param_1[0x21] = 0;
    *(undefined8 *)(param_1[0x21] + 8) = 0;
    *(undefined8 *)(param_1[0x21] + 0x10) = 0;
    *(undefined8 *)param_1[0x22] = 0;
    *(undefined8 *)(param_1[0x22] + 8) = 0x3ff0000000000000;
  }
  dVar69 = *(double *)param_1[0xe];
  dVar101 = *(double *)(param_1[0xe] + 8);
  dVar59 = *(double *)(param_1[0xe] + 0x10);
  dVar60 = *(double *)param_1[0xf];
  dVar21 = *(double *)param_1[0x13];
  dVar28 = *(double *)(param_1[0x13] + 8);
  dVar29 = *(double *)(param_1[0x13] + 0x10);
  auVar18._0_8_ =
       *(double *)(param_1[0x12] + 0x10) * *(double *)(param_1[0x11] + 8) +
       dVar28 * *(double *)param_1[0x12];
  auVar18._8_8_ =
       dVar21 * *(double *)(param_1[0x11] + 0x10) + dVar29 * *(double *)(param_1[0x12] + 8);
  auVar7 = vshufpd_avx(auVar18,auVar18,1);
  auVar19._8_8_ = 0;
  auVar19._0_8_ = auVar18._0_8_ + auVar7._0_8_;
  auVar7 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar19,2);
  auVar37._8_8_ = 0;
  auVar37._0_8_ = __real_3ff0000000000000;
  auVar53._8_8_ = 0;
  auVar53._0_8_ = __real_bff0000000000000;
  auVar7 = vblendvpd_avx(auVar53,auVar37,auVar7);
  dVar30 = auVar7._0_8_;
  *(double *)(param_1[0x12] + 0x10) = *(double *)(param_1[0x12] + 0x10) * dVar30;
  *(double *)param_1[0x13] = dVar21 * dVar30;
  *(double *)(param_1[0x13] + 8) = dVar28 * dVar30;
  *(double *)(param_1[0x13] + 0x10) = dVar29 * dVar30;
  auVar10._0_8_ = dVar69 * *(double *)(param_1[0xc] + 0x10) + dVar59 * *(double *)(param_1[0xd] + 8)
  ;
  auVar10._8_8_ = dVar101 * *(double *)param_1[0xd] + dVar60 * *(double *)(param_1[0xd] + 0x10);
  auVar7 = vshufpd_avx(auVar10,auVar10,1);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = auVar10._0_8_ + auVar7._0_8_;
  auVar7 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar11,2);
  auVar7 = vblendvpd_avx(auVar53,auVar37,auVar7);
  dVar21 = auVar7._0_8_;
  *(double *)param_1[0xe] = dVar69 * dVar21;
  *(double *)(param_1[0xe] + 8) = dVar101 * dVar21;
  *(double *)(param_1[0xe] + 0x10) = dVar59 * dVar21;
  *(double *)param_1[0xf] = dVar60 * dVar21;
  *param_9 = dVar1 + *param_9;
  auVar12._0_8_ = dVar1 * *param_6 + *(double *)param_1[0x2c];
  auVar12._8_8_ = dVar1 * param_6[1] + *(double *)(param_1[0x2c] + 8);
  auVar15._16_8_ = dVar1 * param_6[2] + *(double *)(param_1[0x2c] + 0x10);
  auVar15._0_16_ = auVar12;
  auVar15._24_8_ = dVar1 * 0.0 + 0.0;
  *(undefined1 (*) [16])param_1[0x2c] = auVar12;
  uVar2 = vmovlpd_avx(auVar15._16_16_);
  *(undefined8 *)(param_1[0x2c] + 0x10) = uVar2;
  return;
}

// ApplyRotationConstraintSoftKD_avx2 @ 1409f01d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyRotationConstraintSoftKD_avx2
               (longlong param_1,int param_2,int param_3,double param_4,double param_5,
               double param_6,byte param_7,undefined1 (*param_8) [24],double param_9,double param_10
               ,double *param_11)

{
  undefined1 (*pauVar1) [24];
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  undefined8 uVar5;
  undefined1 auVar6 [24];
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  double dVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar25;
  undefined1 auVar23 [16];
  double dVar26;
  undefined1 auVar24 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [32];
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar54;
  double dVar55;
  double dVar56;
  undefined1 auVar52 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  double dVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  ulonglong uVar69;
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [32];
  undefined1 auVar78 [16];
  undefined1 auVar77 [32];
  double dVar79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  double dVar86;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [32];
  double dVar87;
  undefined1 auVar88 [16];
  double dVar91;
  double dVar92;
  double dVar93;
  undefined1 auVar90 [32];
  undefined1 auVar94 [16];
  undefined1 auVar95 [32];
  double dVar96;
  undefined1 auVar97 [16];
  double dVar99;
  undefined1 auVar98 [32];
  undefined1 auVar100 [16];
  undefined1 auVar101 [32];
  undefined1 auVar102 [16];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar53 [32];
  undefined1 auVar65 [32];
  undefined1 auVar76 [32];
  undefined1 auVar85 [32];
  undefined1 auVar89 [32];
  
  dVar13 = _UNK_150b54438;
  dVar12 = _UNK_150b54430;
  dVar11 = _UNK_150b54428;
  dVar99 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar96 = _UNK_150b54418;
  dVar87 = _UNK_150b54410;
  dVar55 = _UNK_150b54408;
  dVar54 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar47 = _UNK_15076c6f8;
  dVar56 = ___xmm_bff00000000000003ff0000000000000;
  lVar16 = (longlong)param_3;
  lVar14 = lVar16 * 0x80;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = *(ulonglong *)(param_1 + 0x240 + lVar14);
  auVar70._8_8_ = 0;
  auVar70._0_8_ = *(ulonglong *)(param_1 + 0x260 + lVar14);
  auVar78._8_8_ = 0;
  auVar78._0_8_ = *(ulonglong *)(param_1 + 0x280 + lVar14);
  dVar60 = *(double *)*param_8;
  auVar102._8_8_ = 0;
  auVar102._0_8_ = dVar60;
  dVar79 = *(double *)(*param_8 + 8);
  auVar100._8_8_ = 0;
  auVar100._0_8_ = dVar79;
  dVar86 = *(double *)(*param_8 + 0x10);
  if (param_6 <= __real_3f1a36e2eb1c432d) {
    auVar100 = vunpcklpd_avx(auVar102,auVar100);
    auVar28._8_8_ = dVar86;
    auVar28._0_8_ = dVar86;
    auVar28._16_8_ = dVar86;
    auVar28._24_8_ = dVar86;
    auVar27 = vblendpd_avx(ZEXT1632(auVar100),auVar28,4);
    auVar6 = auVar27._0_24_;
    dVar18 = 0.0;
  }
  else {
    pdVar2 = (double *)(param_1 + 0x3e0 + (longlong)param_2 * 0x20);
    dVar18 = *pdVar2;
    dVar25 = pdVar2[1];
    dVar26 = pdVar2[2];
    dVar91 = pdVar2[3];
    pdVar2 = (double *)(param_1 + 0x130 + (longlong)param_2 * 0x20);
    auVar19._0_8_ = *pdVar2 * dVar18 + pdVar2[2] * dVar26;
    auVar19._8_8_ = pdVar2[1] * dVar25 + pdVar2[3] * dVar91;
    auVar23 = vshufpd_avx(auVar19,auVar19,1);
    auVar20._8_8_ = 0;
    auVar20._0_8_ = auVar19._0_8_ + auVar23._0_8_;
    auVar23 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar20,2);
    auVar21._8_8_ = 0;
    auVar21._0_8_ = __real_3ff0000000000000;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = __real_bff0000000000000;
    auVar23 = vblendvpd_avx(auVar30,auVar21,auVar23);
    dVar92 = auVar23._0_8_;
    auVar104._0_8_ = *pdVar2 * dVar92 - dVar18;
    auVar104._8_8_ = pdVar2[1] * dVar92 - dVar25;
    auVar104._16_8_ = pdVar2[2] * dVar92 - dVar26;
    auVar104._24_8_ = pdVar2[3] * dVar92 - dVar91;
    auVar105._0_8_ =
         dVar18 * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
    auVar105._8_8_ = dVar25 * _UNK_150b543c8;
    auVar105._16_8_ = dVar26 * _UNK_150b543d0;
    auVar105._24_8_ = dVar91 * _UNK_150b543d8;
    auVar44 = vpermpd_avx2(auVar105,0xdb);
    pdVar2 = (double *)(param_1 + 0x3e0 + lVar16 * 0x20);
    dVar18 = *pdVar2;
    dVar25 = pdVar2[1];
    dVar26 = pdVar2[2];
    dVar91 = pdVar2[3];
    pdVar2 = (double *)(param_1 + 0x130 + lVar16 * 0x20);
    auVar80._0_8_ = dVar18 * *pdVar2 + dVar26 * pdVar2[2];
    auVar80._8_8_ = dVar25 * pdVar2[1] + dVar91 * pdVar2[3];
    auVar23 = vshufpd_avx(auVar80,auVar80,1);
    auVar81._8_8_ = 0;
    auVar81._0_8_ = auVar80._0_8_ + auVar23._0_8_;
    auVar23 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar81,2);
    auVar38 = vpermpd_avx2(auVar104,0xff);
    auVar22._8_8_ = 0;
    auVar22._0_8_ = __real_3ff0000000000000;
    auVar23 = vblendvpd_avx(auVar30,auVar22,auVar23);
    auVar52 = vpermpd_avx2(auVar104,0x55);
    auVar45 = vpermpd_avx2(auVar105,0xce);
    dVar92 = auVar23._0_8_;
    auVar24._0_8_ = *pdVar2 * dVar92 - dVar18;
    auVar24._8_8_ = pdVar2[1] * dVar92 - dVar25;
    auVar24._16_8_ = pdVar2[2] * dVar92 - dVar26;
    auVar24._24_8_ = pdVar2[3] * dVar92 - dVar91;
    auVar36._0_8_ = dVar18 * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000
    ;
    auVar36._8_8_ = dVar25 * _UNK_150b543c8;
    auVar36._16_8_ = dVar26 * _UNK_150b543d0;
    auVar36._24_8_ = dVar91 * _UNK_150b543d8;
    auVar28 = vpermpd_avx2(auVar36,0xdb);
    auVar37 = vpermpd_avx2(auVar24,0xff);
    auVar46 = vpermpd_avx2(auVar24,0x55);
    auVar53 = vpermpd_avx2(auVar36,0xce);
    auVar57 = vpermpd_avx2(auVar104,0xaa);
    auVar39 = vshufpd_avx(auVar105,auVar105,5);
    auVar58 = vpermpd_avx2(auVar24,0xaa);
    auVar27 = vshufpd_avx(auVar36,auVar36,5);
    dVar18 = ___ymm_00000000000000003ff00000000000003ff0000000000000bff0000000000000 *
             auVar27._0_8_ * auVar58._0_8_ +
             ___ymm_0000000000000000bff00000000000003ff00000000000003ff0000000000000 *
             auVar53._0_8_ * auVar46._0_8_ +
             auVar36._0_8_ * auVar37._0_8_ +
             auVar28._0_8_ * auVar24._0_8_ * ___xmm_bff00000000000003ff0000000000000;
    dVar25 = _UNK_150b54588 * auVar27._8_8_ * auVar58._8_8_ +
             _UNK_150b54568 * auVar53._8_8_ * auVar46._8_8_ +
             auVar36._8_8_ * auVar37._8_8_ + auVar28._8_8_ * auVar24._0_8_ * _UNK_15076c6f8;
    dVar26 = _UNK_150b54590 * auVar27._16_8_ * auVar58._16_8_ +
             _UNK_150b54570 * auVar53._16_8_ * auVar46._16_8_ +
             auVar36._16_8_ * auVar37._16_8_ +
             auVar28._16_8_ * auVar24._0_8_ * ___xmm_bff00000000000003ff0000000000000;
    auVar100 = vunpcklpd_avx(auVar102,auVar100);
    auVar37._8_8_ = dVar86;
    auVar37._0_8_ = dVar86;
    auVar37._16_8_ = dVar86;
    auVar37._24_8_ = dVar86;
    auVar28 = vblendpd_avx(ZEXT1632(auVar100),auVar37,4);
    auVar6 = auVar28._0_24_;
    auVar23._0_8_ =
         auVar28._0_8_ *
         ((___ymm_00000000000000003ff00000000000003ff0000000000000bff0000000000000 *
           auVar39._0_8_ * auVar57._0_8_ +
          ___ymm_0000000000000000bff00000000000003ff00000000000003ff0000000000000 *
          auVar45._0_8_ * auVar52._0_8_ +
          auVar105._0_8_ * auVar38._0_8_ +
          auVar44._0_8_ * auVar104._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
          __real_4000000000000000 - (dVar18 + dVar18));
    auVar23._8_8_ =
         auVar28._8_8_ *
         ((_UNK_150b54588 * auVar39._8_8_ * auVar57._8_8_ +
          _UNK_150b54568 * auVar45._8_8_ * auVar52._8_8_ +
          auVar105._8_8_ * auVar38._8_8_ + auVar44._8_8_ * auVar104._0_8_ * _UNK_15076c6f8) *
          __real_4000000000000000 - (dVar25 + dVar25));
    auVar100 = vshufpd_avx(auVar23,auVar23,1);
    auVar27._24_8_ = 0;
    auVar27._0_24_ = *param_8;
    dVar18 = param_4 * param_10 +
             auVar28._16_8_ *
             ((_UNK_150b54590 * auVar39._16_8_ * auVar57._16_8_ +
              _UNK_150b54570 * auVar45._16_8_ * auVar52._16_8_ +
              auVar105._16_8_ * auVar38._16_8_ +
              auVar44._16_8_ * auVar104._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
              __real_4000000000000000 - (dVar26 + dVar26)) + auVar23._0_8_ + auVar100._0_8_;
  }
  lVar15 = lVar14 + param_1;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = *(ulonglong *)(param_1 + 0x248 + lVar14);
  auVar29 = vunpcklpd_avx(auVar29,auVar8);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = *(ulonglong *)(param_1 + 0x268 + lVar14);
  auVar70 = vunpcklpd_avx(auVar70,auVar9);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = *(ulonglong *)(param_1 + 0x288 + lVar14);
  auVar78 = vunpcklpd_avx(auVar78,auVar10);
  auVar31._0_8_ =
       auVar6._0_8_ * (auVar78._0_8_ * dVar86 + auVar29._0_8_ * dVar60 + dVar79 * auVar70._0_8_);
  auVar31._8_8_ =
       auVar6._8_8_ * (auVar78._8_8_ * dVar86 + auVar29._8_8_ * dVar60 + dVar79 * auVar70._8_8_);
  auVar29 = vshufpd_avx(auVar31,auVar31,1);
  dVar60 = auVar6._16_8_ *
           (*(double *)(param_1 + 0x290 + lVar14) * dVar86 +
           *(double *)(param_1 + 0x250 + lVar14) * dVar60 +
           dVar79 * *(double *)(param_1 + 0x270 + lVar14)) + auVar31._0_8_ + auVar29._0_8_;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = __real_3ff0000000000000;
  dVar79 = __real_3ff0000000000000;
  if ((param_7 & 1) != 0) {
    dVar79 = __real_3ff0000000000000 / dVar60;
  }
  dVar86 = dVar79 * param_5 * param_4 * param_4;
  param_4 = param_6 * dVar79 * param_4;
  dVar26 = (__real_3ff0000000000000 / (dVar60 * (param_4 + dVar86) + __real_3ff0000000000000)) *
           *(double *)(param_1 + 0x4c8) * ((dVar86 * param_9 - dVar18 * param_4) - *param_11);
  dVar60 = dVar26 * (double)((ulonglong)dVar60 ^ __xmm_80000000000000008000000000000000);
  auVar57._0_8_ = auVar27._0_8_ * dVar60;
  auVar57._8_8_ = auVar27._8_8_ * dVar60;
  auVar57._16_8_ = auVar27._16_8_ * dVar60;
  auVar57._24_8_ = auVar27._24_8_ * dVar60;
  lVar17 = lVar16 * 0x20;
  pdVar2 = (double *)(param_1 + 0x1a0 + lVar17);
  auVar40._8_8_ = 0;
  auVar40._0_8_ = *(ulonglong *)(param_1 + 0x1b8 + lVar17);
  auVar29 = vmovhpd_avx(auVar40,*(undefined8 *)(param_1 + 0x1b0 + lVar17));
  auVar48._8_8_ = 0;
  auVar48._0_8_ = *(ulonglong *)(param_1 + 0x1a8 + lVar17);
  auVar70 = vmovhpd_avx(auVar48,*(undefined8 *)(param_1 + 0x1a0 + lVar17));
  pdVar3 = (double *)(param_1 + 0x1b0 + lVar17);
  pdVar4 = (double *)(param_1 + 0x1a0 + lVar17);
  auVar27 = vpermpd_avx2(auVar57,0x55);
  auVar28 = vpermpd_avx2(auVar57,0xaa);
  dVar79 = (___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
            auVar28._0_8_ * auVar70._0_8_ +
           ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
           auVar27._0_8_ * *pdVar3 +
           *pdVar2 * 0.0 + auVar57._0_8_ * auVar29._0_8_ * ___xmm_bff00000000000003ff0000000000000)
           * __real_3fe0000000000000 + *pdVar2;
  dVar86 = (_UNK_150b54428 * auVar28._8_8_ * auVar70._8_8_ +
           _UNK_150b54408 * auVar27._8_8_ * pdVar3[1] +
           pdVar2[1] * 0.0 + auVar57._0_8_ * auVar29._8_8_ * _UNK_15076c6f8) *
           __real_3fe0000000000000 + pdVar2[1];
  dVar18 = (_UNK_150b54430 * auVar28._16_8_ * auVar29._0_8_ +
           _UNK_150b54410 * auVar27._16_8_ * *pdVar4 +
           pdVar2[2] * 0.0 + auVar57._0_8_ * auVar70._0_8_ * ___xmm_bff00000000000003ff0000000000000
           ) * __real_3fe0000000000000 + pdVar2[2];
  dVar25 = (_UNK_150b54438 * auVar28._24_8_ * auVar29._8_8_ +
           _UNK_150b54418 * auVar27._24_8_ * pdVar4[1] +
           pdVar2[3] * 0.0 + auVar57._0_8_ * auVar70._8_8_ * _UNK_15076c6f8) *
           __real_3fe0000000000000 + pdVar2[3];
  auVar61._0_8_ = dVar79 * dVar79 + dVar18 * dVar18;
  auVar61._8_8_ = dVar86 * dVar86 + dVar25 * dVar25;
  auVar29 = vshufpd_avx(auVar61,auVar61,1);
  dVar60 = auVar61._0_8_ + auVar29._0_8_;
  auVar71._8_8_ = 0;
  auVar71._0_8_ = __real_3e45798ee2308c3a;
  auVar62._8_8_ = 0;
  auVar62._0_8_ = dVar60;
  auVar29 = vcmpsd_avx(auVar71,auVar62,6);
  uVar69 = ~auVar29._0_8_ & __real_ffffffffffffffff;
  dVar60 = __real_3ff0000000000000 / SQRT(dVar60);
  auVar63._0_8_ = (ulonglong)(dVar79 * dVar60) & uVar69;
  auVar63._8_8_ = (ulonglong)(dVar86 * dVar60) & uVar69;
  auVar65._16_8_ = (ulonglong)(dVar18 * dVar60) & uVar69;
  auVar65._0_16_ = auVar63;
  auVar65._24_8_ = (ulonglong)(dVar25 * dVar60) & uVar69;
  auVar75._0_8_ = ~uVar69 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
  auVar75._8_8_ = ~uVar69 & _UNK_150b54548;
  auVar75._16_8_ = ~uVar69 & _UNK_150b54550;
  auVar75._24_8_ = ~uVar69 & _UNK_150b54558;
  auVar78 = auVar65._16_16_ | auVar75._16_16_;
  auVar29 = vshufps_avx(auVar63,auVar63,0x4e);
  auVar70 = vshufps_avx(auVar78,auVar78,0x4e);
  uVar5 = vmovlpd_avx(auVar63);
  *(undefined8 *)(param_1 + 0x1a0 + lVar17) = uVar5;
  uVar5 = vmovlpd_avx(auVar29);
  *(undefined8 *)(param_1 + 0x1a8 + lVar17) = uVar5;
  uVar5 = vmovlpd_avx(auVar78);
  *(undefined8 *)(param_1 + 0x1b0 + lVar17) = uVar5;
  uVar5 = vmovlpd_avx(auVar70);
  *(undefined8 *)(param_1 + 0x1b8 + lVar17) = uVar5;
  auVar64._0_8_ =
       *(double *)(param_1 + 0x1c0) * *(double *)(param_1 + 0x1a0) +
       *(double *)(param_1 + 0x1d0) * *(double *)(param_1 + 0x1b0);
  auVar64._8_8_ =
       *(double *)(param_1 + 0x1c8) * *(double *)(param_1 + 0x1a8) +
       *(double *)(param_1 + 0x1d8) * *(double *)(param_1 + 0x1b8);
  auVar29 = vshufpd_avx(auVar64,auVar64,1);
  auVar72._8_8_ = 0;
  auVar72._0_8_ = auVar64._0_8_ + auVar29._0_8_;
  auVar29 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar72,2);
  auVar73._8_8_ = 0;
  auVar73._0_8_ = __real_bff0000000000000;
  auVar29 = vblendvpd_avx(auVar73,auVar32,auVar29);
  dVar60 = auVar29._0_8_;
  *(double *)(param_1 + 0x1c0) = *(double *)(param_1 + 0x1c0) * dVar60;
  *(double *)(param_1 + 0x1c8) = *(double *)(param_1 + 0x1c8) * dVar60;
  *(double *)(param_1 + 0x1d0) = *(double *)(param_1 + 0x1d0) * dVar60;
  *(double *)(param_1 + 0x1d8) = *(double *)(param_1 + 0x1d8) * dVar60;
  lVar14 = lVar16 * 0x60;
  auVar82._8_8_ = 0;
  auVar82._0_8_ = *(ulonglong *)(param_1 + 0x20 + lVar14);
  uVar5 = *(undefined8 *)(param_1 + 0x38 + lVar14);
  auVar88._8_8_ = uVar5;
  auVar88._0_8_ = uVar5;
  auVar89._16_8_ = uVar5;
  auVar89._0_16_ = auVar88;
  auVar89._24_8_ = uVar5;
  auVar102 = vunpcklpd_avx(auVar82,auVar88);
  auVar29 = *(undefined1 (*) [16])(param_1 + 0x20 + lVar14);
  auVar70 = *(undefined1 (*) [16])(param_1 + 0x28 + lVar14);
  dVar60 = *(double *)(param_1 + 0x1b0 + lVar17);
  auVar78 = *(undefined1 (*) [16])(param_1 + 0x1a0 + lVar17);
  auVar100 = *(undefined1 (*) [16])(param_1 + 0x1a8 + lVar17);
  auVar98._16_8_ = dVar60;
  auVar98._0_16_ = auVar78;
  auVar98._24_8_ = 0;
  dVar79 = *(double *)(param_1 + 0x1b8 + lVar17);
  auVar101._8_8_ = dVar79;
  auVar101._0_8_ = dVar79;
  auVar101._16_8_ = dVar79;
  auVar101._24_8_ = dVar79;
  dVar86 = *(double *)(param_1 + 0x1a0 + lVar17);
  auVar103._16_8_ = dVar86;
  auVar103._0_16_ = auVar100;
  auVar103._24_8_ = 0;
  dVar18 = *(double *)(param_1 + 0x30 + lVar14);
  auVar95._16_8_ = dVar18;
  auVar95._0_16_ = auVar29;
  auVar95._24_8_ = 0;
  auVar27 = vblendpd_avx(auVar103,auVar101,8);
  auVar28 = vblendpd_avx(auVar95,auVar89,8);
  auVar39 = vblendpd_avx(auVar98,auVar101,8);
  dVar25 = auVar70._0_8_ * auVar39._0_8_ - auVar28._0_8_ * auVar27._0_8_;
  dVar91 = auVar70._8_8_ * auVar39._8_8_ - auVar28._8_8_ * auVar27._8_8_;
  dVar92 = auVar102._0_8_ * auVar39._16_8_ - auVar28._16_8_ * auVar27._16_8_;
  dVar93 = auVar102._8_8_ * auVar39._24_8_ - auVar28._24_8_ * auVar27._24_8_;
  auVar84._0_8_ = dVar25 + dVar25;
  auVar84._8_8_ = dVar91 + dVar91;
  auVar84._16_8_ = dVar92 + dVar92;
  auVar84._24_8_ = dVar93 + dVar93;
  auVar27 = vpermpd_avx2(auVar84,0xc9);
  auVar28 = vpermpd_avx2(auVar84,0xd2);
  auVar90._0_8_ = auVar78._0_8_ * auVar28._0_8_ - auVar100._0_8_ * auVar27._0_8_;
  auVar90._8_8_ = auVar78._8_8_ * auVar28._8_8_ - auVar100._8_8_ * auVar27._8_8_;
  auVar90._16_8_ = dVar60 * auVar28._16_8_ - dVar86 * auVar27._16_8_;
  auVar90._24_8_ = auVar28._24_8_ * 0.0 - auVar27._24_8_ * 0.0;
  auVar28 = vpermpd_avx2(auVar90,0xc9);
  pdVar2 = (double *)(param_1 + 0x170 + lVar16 * 0x18);
  auVar83._0_8_ = *pdVar2 + auVar27._0_8_ * dVar79 + auVar29._0_8_ + auVar28._0_8_;
  auVar83._8_8_ = pdVar2[1] + auVar27._8_8_ * dVar79 + auVar29._8_8_ + auVar28._8_8_;
  auVar85._16_8_ =
       *(double *)(param_1 + 0x180 + lVar16 * 0x18) +
       auVar27._16_8_ * dVar79 + dVar18 + auVar28._16_8_;
  auVar85._0_16_ = auVar83;
  auVar85._24_8_ = auVar27._24_8_ * dVar79 + 0.0 + auVar28._24_8_ + 0.0;
  *(undefined1 (*) [16])(param_1 + 0x100 + lVar16 * 0x18) = auVar83;
  uVar5 = vmovlpd_avx(auVar85._16_16_);
  *(undefined8 *)(param_1 + 0x110 + lVar16 * 0x18) = uVar5;
  dVar60 = *(double *)(param_1 + 0x1b8 + lVar17);
  dVar79 = *(double *)(param_1 + 0x1a0 + lVar17);
  auVar94._8_8_ = 0;
  auVar94._0_8_ = *(ulonglong *)(param_1 + 8 + lVar14);
  auVar29 = vmovhpd_avx(auVar94,*(undefined8 *)(param_1 + lVar14));
  auVar97._8_8_ = 0;
  auVar97._0_8_ = *(ulonglong *)(param_1 + 0x18 + lVar14);
  auVar70 = vmovhpd_avx(auVar97,*(undefined8 *)(param_1 + 0x10 + lVar14));
  pauVar1 = (undefined1 (*) [24])(param_1 + lVar14);
  dVar91 = *(double *)(*pauVar1 + 8);
  auVar6 = *pauVar1;
  dVar25 = *(double *)pauVar1[1];
  dVar86 = *(double *)(param_1 + 0x1a8 + lVar17);
  pdVar2 = (double *)(param_1 + 0x10 + lVar14);
  dVar92 = pdVar2[1];
  dVar93 = *(double *)(param_1 + lVar14);
  dVar7 = ((double *)(param_1 + lVar14))[1];
  dVar18 = *(double *)(param_1 + 0x1b0 + lVar17);
  pdVar3 = (double *)(param_1 + 0x130 + lVar17);
  *pdVar3 = dVar99 * auVar29._0_8_ * dVar18 +
            dVar54 * *pdVar2 * dVar86 +
            dVar60 * *(double *)*pauVar1 + dVar79 * auVar70._0_8_ * dVar56;
  pdVar3[1] = dVar11 * auVar29._8_8_ * dVar18 +
              dVar55 * dVar92 * dVar86 + dVar60 * dVar91 + dVar79 * auVar70._8_8_ * dVar47;
  pdVar3[2] = dVar12 * auVar70._0_8_ * dVar18 +
              dVar87 * dVar93 * dVar86 + dVar60 * auVar6._16_8_ + dVar79 * auVar29._0_8_ * dVar56;
  pdVar3[3] = dVar13 * auVar70._8_8_ * dVar18 +
              dVar96 * dVar7 * dVar86 + dVar60 * dVar25 + dVar79 * auVar29._8_8_ * dVar47;
  auVar49._0_8_ =
       *(double *)(param_1 + 0x150) * *(double *)(param_1 + 0x130) +
       *(double *)(param_1 + 0x160) * *(double *)(param_1 + 0x140);
  auVar49._8_8_ =
       *(double *)(param_1 + 0x158) * *(double *)(param_1 + 0x138) +
       *(double *)(param_1 + 0x168) * *(double *)(param_1 + 0x148);
  auVar29 = vshufpd_avx(auVar49,auVar49,1);
  auVar50._8_8_ = 0;
  auVar50._0_8_ = auVar49._0_8_ + auVar29._0_8_;
  auVar29 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar50,2);
  auVar29 = vblendvpd_avx(auVar73,auVar32,auVar29);
  dVar60 = auVar29._0_8_;
  *(double *)(param_1 + 0x150) = *(double *)(param_1 + 0x150) * dVar60;
  *(double *)(param_1 + 0x158) = *(double *)(param_1 + 0x158) * dVar60;
  *(double *)(param_1 + 0x160) = *(double *)(param_1 + 0x160) * dVar60;
  *(double *)(param_1 + 0x168) = *(double *)(param_1 + 0x168) * dVar60;
  dVar60 = *(double *)(param_1 + 0x1a8 + lVar17);
  auVar33._8_8_ = dVar60;
  auVar33._0_8_ = dVar60;
  dVar79 = *(double *)(param_1 + 0x1a0 + lVar17);
  auVar41._8_8_ = dVar79;
  auVar41._0_8_ = dVar79;
  auVar70 = vunpcklpd_avx(auVar41,auVar33);
  auVar29 = *(undefined1 (*) [16])(param_1 + 0x1b0 + lVar17);
  dVar47 = auVar70._0_8_ + auVar70._0_8_;
  dVar54 = auVar70._8_8_ + auVar70._8_8_;
  dVar86 = auVar29._0_8_;
  dVar56 = auVar29._8_8_;
  dVar55 = dVar86 + dVar86;
  dVar56 = dVar56 + dVar56;
  auVar66._0_8_ = dVar79 * dVar47;
  auVar66._8_8_ = dVar79 * dVar54;
  auVar66._16_8_ = dVar79 * dVar55;
  auVar66._24_8_ = dVar79 * dVar56;
  auVar74._0_8_ = dVar60 * dVar47;
  auVar74._8_8_ = dVar60 * dVar54;
  auVar76._16_8_ = dVar60 * dVar55;
  auVar76._0_16_ = auVar74;
  auVar76._24_8_ = dVar60 * dVar56;
  dVar60 = *(double *)(param_1 + 0x1b8 + lVar17);
  dVar79 = (dVar86 + dVar86) * *(double *)(param_1 + 0x1b0 + lVar17);
  auVar44._0_8_ = dVar47 * dVar60;
  auVar44._8_8_ = dVar54 * dVar60;
  auVar44._16_8_ = dVar55 * dVar60;
  auVar44._24_8_ = dVar56 * dVar60;
  auVar27 = vperm2f128_avx(auVar76,auVar66,0x21);
  auVar27 = vshufpd_avx(auVar27,ZEXT1632(auVar66._16_16_),4);
  auVar34._0_8_ = auVar44._0_8_ + auVar27._0_8_;
  auVar34._8_8_ = auVar44._8_8_ + auVar27._8_8_;
  auVar38._16_8_ = auVar44._16_8_ + auVar27._16_8_;
  auVar38._0_16_ = auVar34;
  auVar38._24_8_ = auVar44._24_8_ + auVar27._24_8_;
  auVar39 = vsubpd_avx(auVar27,auVar44);
  auVar29 = vshufpd_avx(auVar74,auVar74,1);
  auVar67._8_8_ = auVar66._0_8_;
  auVar67._0_8_ = auVar66._0_8_;
  auVar67._16_8_ = auVar66._0_8_;
  auVar67._24_8_ = auVar66._0_8_;
  auVar27 = vblendpd_avx(auVar67,ZEXT1632(auVar29),1);
  auVar28 = vpermpd_avx2(auVar76,0x55);
  auVar28 = vblendpd_avx(ZEXT1632(CONCAT88(dVar79,dVar79)),auVar28,0xc);
  auVar52._0_8_ = auVar27._0_8_ + auVar28._0_8_;
  auVar52._8_8_ = auVar27._8_8_ + auVar28._8_8_;
  auVar52._16_8_ = auVar27._16_8_ + auVar28._16_8_;
  auVar52._24_8_ = auVar27._24_8_ + auVar28._24_8_;
  auVar58._8_8_ = __real_3ff0000000000000;
  auVar58._0_8_ = __real_3ff0000000000000;
  auVar58._16_8_ = __real_3ff0000000000000;
  auVar58._24_8_ = __real_3ff0000000000000;
  auVar28 = vsubpd_avx(auVar58,auVar52);
  dVar86 = auVar28._0_8_;
  dVar60 = *(double *)(param_1 + 0xc0 + lVar16 * 0x18);
  dVar79 = *(double *)(param_1 + 0xd0 + lVar16 * 0x18);
  auVar27 = vpermpd_avx2(auVar39,0xaa);
  auVar29 = vmovhpd_avx(ZEXT816(0) << 0x40,*(undefined8 *)(param_1 + 200 + lVar16 * 0x18));
  dVar56 = auVar29._0_8_;
  dVar47 = auVar29._8_8_;
  auVar44 = vpermpd_avx2(auVar38,0x55);
  auVar59._0_8_ = auVar44._0_8_ * 0.0 + dVar56 * auVar27._0_8_ + dVar60 * dVar86;
  auVar59._8_8_ = auVar44._8_8_ * 0.0 + dVar47 * auVar27._8_8_ + dVar86 * 0.0;
  auVar59._16_8_ = dVar79 * auVar44._16_8_ + auVar27._16_8_ * 0.0 + dVar86 * 0.0;
  auVar59._24_8_ = auVar44._24_8_ * 0.0 + auVar27._24_8_ * 0.0 + dVar86 * 0.0;
  auVar27 = vpermpd_avx2(auVar38,0xaa);
  auVar44 = vpermpd_avx2(auVar28,0x55);
  dVar86 = auVar39._0_8_;
  auVar77._0_8_ = dVar86 * 0.0 + dVar60 * auVar27._0_8_ + dVar56 * auVar44._0_8_;
  auVar77._8_8_ = dVar86 * 0.0 + auVar27._8_8_ * 0.0 + dVar47 * auVar44._8_8_;
  auVar77._16_8_ = dVar79 * dVar86 + auVar27._16_8_ * 0.0 + auVar44._16_8_ * 0.0;
  auVar77._24_8_ = dVar86 * 0.0 + auVar27._24_8_ * 0.0 + auVar44._24_8_ * 0.0;
  auVar27 = vpermpd_avx2(auVar39,0x55);
  auVar44 = vpermpd_avx2(auVar28,0xaa);
  auVar68._0_8_ = auVar44._0_8_ * 0.0 + auVar27._0_8_ * dVar60 + dVar56 * auVar34._0_8_;
  auVar68._8_8_ = auVar44._8_8_ * 0.0 + auVar27._8_8_ * 0.0 + dVar47 * auVar34._0_8_;
  auVar68._16_8_ = dVar79 * auVar44._16_8_ + auVar27._16_8_ * 0.0 + auVar34._0_8_ * 0.0;
  auVar68._24_8_ = auVar44._24_8_ * 0.0 + auVar27._24_8_ * 0.0 + auVar34._0_8_ * 0.0;
  auVar29 = vunpcklpd_avx(auVar28._0_16_,auVar38._16_16_);
  auVar27 = vblendpd_avx(ZEXT1632(auVar29),auVar27,0xc);
  auVar44 = vpermpd_avx2(auVar59,0x55);
  auVar29 = vblendpd_avx(auVar28._0_16_,auVar39._16_16_,1);
  dVar96 = auVar29._0_8_;
  dVar99 = auVar29._8_8_;
  dVar47 = auVar27._0_8_;
  dVar54 = auVar27._8_8_;
  dVar55 = auVar27._16_8_;
  dVar87 = auVar27._24_8_;
  auVar38 = vpermpd_avx2(auVar77,0x55);
  auVar52 = vpermpd_avx2(auVar68,0x55);
  auVar29 = vshufpd_avx(auVar34,auVar39._0_16_,1);
  auVar27 = vblendpd_avx(auVar28,ZEXT1632(auVar29),3);
  auVar28 = vpermpd_avx2(auVar59,0xaa);
  dVar60 = auVar27._0_8_;
  auVar42._0_8_ = dVar60 * auVar28._0_8_ + dVar47 * auVar59._0_8_ + dVar96 * auVar44._0_8_;
  dVar79 = auVar27._8_8_;
  auVar42._8_8_ = dVar79 * auVar28._8_8_ + dVar54 * auVar59._0_8_ + dVar99 * auVar44._8_8_;
  dVar86 = auVar27._16_8_;
  auVar45._16_8_ = dVar86 * auVar28._16_8_ + dVar55 * auVar59._0_8_ + auVar34._0_8_ * auVar44._16_8_
  ;
  auVar45._0_16_ = auVar42;
  dVar56 = auVar27._24_8_;
  auVar45._24_8_ = dVar56 * auVar28._24_8_ + dVar87 * auVar59._0_8_ + auVar34._8_8_ * auVar44._24_8_
  ;
  auVar27 = vpermpd_avx2(auVar77,0xaa);
  *(undefined1 (*) [16])(lVar15 + 0x240) = auVar42;
  auVar51._0_8_ = dVar60 * auVar27._0_8_ + dVar47 * auVar77._0_8_ + dVar96 * auVar38._0_8_;
  auVar51._8_8_ = dVar79 * auVar27._8_8_ + dVar54 * auVar77._0_8_ + dVar99 * auVar38._8_8_;
  auVar53._16_8_ = dVar86 * auVar27._16_8_ + dVar55 * auVar77._0_8_ + auVar34._0_8_ * auVar38._16_8_
  ;
  auVar53._0_16_ = auVar51;
  auVar53._24_8_ = dVar56 * auVar27._24_8_ + dVar87 * auVar77._0_8_ + auVar34._8_8_ * auVar38._24_8_
  ;
  uVar5 = vmovlpd_avx(auVar45._16_16_);
  *(undefined8 *)(lVar15 + 0x250) = uVar5;
  auVar27 = vpermpd_avx2(auVar68,0xaa);
  *(undefined8 *)(lVar15 + 600) = 0;
  *(undefined1 (*) [16])(lVar15 + 0x260) = auVar51;
  auVar43._0_8_ = dVar60 * auVar27._0_8_ + dVar47 * auVar68._0_8_ + dVar96 * auVar52._0_8_;
  auVar43._8_8_ = dVar79 * auVar27._8_8_ + dVar54 * auVar68._0_8_ + dVar99 * auVar52._8_8_;
  auVar46._16_8_ = dVar86 * auVar27._16_8_ + dVar55 * auVar68._0_8_ + auVar34._0_8_ * auVar52._16_8_
  ;
  auVar46._0_16_ = auVar43;
  auVar46._24_8_ = dVar56 * auVar27._24_8_ + dVar87 * auVar68._0_8_ + auVar34._8_8_ * auVar52._24_8_
  ;
  uVar5 = vmovlpd_avx(auVar53._16_16_);
  *(undefined8 *)(lVar15 + 0x270) = uVar5;
  *(undefined8 *)(lVar15 + 0x278) = 0;
  *(undefined1 (*) [16])(lVar15 + 0x280) = auVar43;
  uVar5 = vmovlpd_avx(auVar46._16_16_);
  *(undefined8 *)(lVar15 + 0x290) = uVar5;
  *(undefined8 *)(lVar15 + 0x298) = 0;
  *(undefined8 *)(lVar15 + 0x2a0) = 0;
  *(undefined8 *)(lVar15 + 0x2a8) = 0;
  *(undefined8 *)(lVar15 + 0x2b0) = 0;
  *(undefined8 *)(lVar15 + 0x2b8) = 0x3ff0000000000000;
  dVar60 = dVar26 * (double)(int)(-(uint)(param_2 != 0) | 1);
  auVar35._0_8_ = dVar60 * *(double *)*param_8 + *(double *)(param_1 + 0x438);
  auVar35._8_8_ = dVar60 * *(double *)(*param_8 + 8) + *(double *)(param_1 + 0x440);
  auVar39._16_8_ = dVar60 * *(double *)(*param_8 + 0x10) + *(double *)(param_1 + 0x448);
  auVar39._0_16_ = auVar35;
  auVar39._24_8_ = dVar60 * 0.0 + 0.0;
  *param_11 = dVar26 + *param_11;
  *(undefined1 (*) [16])(param_1 + 0x438) = auVar35;
  uVar5 = vmovlpd_avx(auVar39._16_16_);
  *(undefined8 *)(param_1 + 0x448) = uVar5;
  return;
}

// ApplyRotationConstraintSoftDD_avx2 @ 1409f0c10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyRotationConstraintSoftDD_avx2
               (undefined1 (*param_1) [24],double param_2,double param_3,double param_4,byte param_5
               ,undefined1 (*param_6) [24],double param_7,double param_8,double *param_9)

{
  undefined8 uVar1;
  undefined1 auVar2 [24];
  undefined1 auVar3 [24];
  undefined1 auVar4 [24];
  undefined1 auVar5 [24];
  undefined1 auVar6 [24];
  undefined1 auVar7 [24];
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  double dVar15;
  undefined1 auVar12 [16];
  double dVar16;
  undefined1 auVar14 [32];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [32];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar41;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  double dVar73;
  double dVar74;
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar72 [32];
  double dVar75;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [32];
  double dVar84;
  double dVar85;
  undefined1 auVar82 [32];
  ulonglong uVar86;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  double dVar101;
  undefined1 auVar95 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  double dVar102;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  double dVar110;
  double dVar111;
  double dVar112;
  undefined1 auVar105 [32];
  double dVar109;
  double dVar113;
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  double dVar118;
  double dVar119;
  double dVar120;
  undefined1 auVar116 [32];
  undefined1 auVar117 [32];
  double dVar121;
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  double dVar125;
  undefined1 auVar126 [16];
  undefined1 auVar127 [32];
  double dVar128;
  undefined1 auVar129 [32];
  undefined1 auVar130 [32];
  undefined1 auVar13 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar30 [32];
  undefined1 auVar40 [32];
  undefined1 auVar54 [32];
  undefined1 auVar58 [32];
  undefined1 auVar63 [32];
  undefined1 auVar71 [32];
  undefined1 auVar81 [32];
  undefined1 auVar83 [32];
  undefined1 auVar94 [32];
  undefined1 auVar96 [32];
  undefined1 auVar100 [32];
  undefined1 auVar108 [32];
  undefined1 auVar124 [32];
  
  dVar84 = _UNK_150b54438;
  dVar75 = _UNK_150b54430;
  dVar128 = _UNK_150b54428;
  dVar125 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar121 = _UNK_150b54418;
  dVar24 = _UNK_150b54410;
  dVar112 = _UNK_150b54408;
  dVar110 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar74 = _UNK_15076c6f8;
  dVar73 = ___xmm_bff00000000000003ff0000000000000;
  auVar2 = param_1[0x18];
  dVar41 = *(double *)*param_6;
  auVar9._8_8_ = dVar41;
  auVar9._0_8_ = dVar41;
  auVar13._16_8_ = dVar41;
  auVar13._0_16_ = auVar9;
  auVar13._24_8_ = dVar41;
  auVar3 = *(undefined1 (*) [24])(param_1[0x19] + 8);
  dVar8 = *(double *)(*param_6 + 8);
  auVar64._8_8_ = dVar8;
  auVar64._0_8_ = dVar8;
  auVar4 = *(undefined1 (*) [24])(param_1[0x1a] + 0x10);
  dVar15 = *(double *)(*param_6 + 0x10);
  auVar36._8_8_ = dVar15;
  auVar36._0_8_ = dVar15;
  auVar36._16_8_ = dVar15;
  auVar36._24_8_ = dVar15;
  auVar5 = *(undefined1 (*) [24])(param_1[0x1d] + 8);
  auVar6 = *(undefined1 (*) [24])(param_1[0x1e] + 0x10);
  auVar7 = param_1[0x20];
  auVar9 = vunpcklpd_avx(auVar9,auVar64);
  auVar130 = vblendpd_avx(auVar13,ZEXT1632(auVar9),3);
  auVar130 = vblendpd_avx(auVar130,auVar36,4);
  dVar109 = auVar130._0_8_;
  auVar10._0_8_ = dVar109 * (dVar15 * auVar4._0_8_ + dVar41 * auVar2._0_8_ + auVar3._0_8_ * dVar8);
  dVar111 = auVar130._8_8_;
  auVar10._8_8_ = dVar111 * (dVar15 * auVar4._8_8_ + dVar41 * auVar2._8_8_ + auVar3._8_8_ * dVar8);
  dVar113 = auVar130._16_8_;
  auVar9 = vshufpd_avx(auVar10,auVar10,1);
  dVar102 = dVar113 * (dVar15 * auVar4._16_8_ + dVar41 * auVar2._16_8_ + auVar3._16_8_ * dVar8) +
            auVar10._0_8_ + auVar9._0_8_;
  auVar11._0_8_ = dVar109 * (dVar15 * auVar7._0_8_ + dVar41 * auVar5._0_8_ + auVar6._0_8_ * dVar8);
  auVar11._8_8_ = dVar111 * (dVar15 * auVar7._8_8_ + dVar41 * auVar5._8_8_ + auVar6._8_8_ * dVar8);
  auVar9 = vshufpd_avx(auVar11,auVar11,1);
  dVar41 = dVar113 * (dVar15 * auVar7._16_8_ + dVar41 * auVar5._16_8_ + auVar6._16_8_ * dVar8) +
           auVar11._0_8_ + auVar9._0_8_;
  dVar8 = 0.0;
  if (__real_3f1a36e2eb1c432d < param_4) {
    dVar8 = *(double *)(param_1[0x29] + 8);
    dVar15 = *(double *)(param_1[0x29] + 0x10);
    dVar16 = *(double *)param_1[0x2a];
    dVar101 = *(double *)(param_1[0x2a] + 8);
    auVar76._0_8_ =
         dVar16 * *(double *)(param_1[0xd] + 8) + dVar8 * *(double *)(param_1[0xc] + 0x10);
    auVar76._8_8_ = dVar101 * *(double *)(param_1[0xd] + 0x10) + dVar15 * *(double *)param_1[0xd];
    auVar9 = vshufpd_avx(auVar76,auVar76,1);
    auVar87._8_8_ = 0;
    auVar87._0_8_ = auVar9._0_8_ + auVar76._0_8_;
    auVar9 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar87,2);
    auVar32._8_8_ = 0;
    auVar32._0_8_ = __real_3ff0000000000000;
    auVar88._8_8_ = 0;
    auVar88._0_8_ = __real_bff0000000000000;
    auVar9 = vblendvpd_avx(auVar88,auVar32,auVar9);
    dVar119 = auVar9._0_8_;
    auVar129._0_8_ = *(double *)(param_1[0xc] + 0x10) * dVar119 - dVar8;
    auVar129._8_8_ = *(double *)param_1[0xd] * dVar119 - dVar15;
    auVar129._16_8_ = *(double *)(param_1[0xd] + 8) * dVar119 - dVar16;
    auVar129._24_8_ = *(double *)(param_1[0xd] + 0x10) * dVar119 - dVar101;
    auVar105._0_8_ = dVar8 * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000
    ;
    auVar105._8_8_ = dVar15 * _UNK_150b543c8;
    auVar105._16_8_ = dVar16 * _UNK_150b543d0;
    auVar105._24_8_ = dVar101 * _UNK_150b543d8;
    auVar36 = vpermpd_avx2(auVar129,0xff);
    auVar50 = vpermpd_avx2(auVar105,0xdb);
    auVar51 = vpermpd_avx2(auVar129,0x55);
    auVar30 = vpermpd_avx2(auVar105,0xce);
    auVar52 = vpermpd_avx2(auVar129,0xaa);
    auVar130 = vshufpd_avx(auVar105,auVar105,5);
    dVar8 = *(double *)(param_1[0x2a] + 0x10);
    dVar15 = *(double *)param_1[0x2b];
    dVar16 = *(double *)(param_1[0x2b] + 8);
    dVar101 = *(double *)(param_1[0x2b] + 0x10);
    auVar33._0_8_ = dVar8 * *(double *)param_1[0xe] + dVar16 * *(double *)(param_1[0xe] + 0x10);
    auVar33._8_8_ = dVar15 * *(double *)(param_1[0xe] + 8) + dVar101 * *(double *)param_1[0xf];
    auVar9 = vshufpd_avx(auVar33,auVar33,1);
    auVar34._8_8_ = 0;
    auVar34._0_8_ = auVar33._0_8_ + auVar9._0_8_;
    auVar9 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar34,2);
    auVar77._8_8_ = 0;
    auVar77._0_8_ = __real_3ff0000000000000;
    auVar9 = vblendvpd_avx(auVar88,auVar77,auVar9);
    dVar119 = auVar9._0_8_;
    auVar37._0_8_ = *(double *)param_1[0xe] * dVar119 - dVar8;
    auVar37._8_8_ = *(double *)(param_1[0xe] + 8) * dVar119 - dVar15;
    auVar37._16_8_ = *(double *)(param_1[0xe] + 0x10) * dVar119 - dVar16;
    auVar37._24_8_ = *(double *)param_1[0xf] * dVar119 - dVar101;
    auVar14._0_8_ = ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000 * dVar8;
    auVar14._8_8_ = _UNK_150b543c8 * dVar15;
    auVar14._16_8_ = _UNK_150b543d0 * dVar16;
    auVar14._24_8_ = _UNK_150b543d8 * dVar101;
    auVar53 = vpermpd_avx2(auVar37,0xff);
    auVar54 = vpermpd_avx2(auVar14,0xdb);
    auVar55 = vpermpd_avx2(auVar37,0x55);
    auVar56 = vpermpd_avx2(auVar14,0xce);
    auVar57 = vpermpd_avx2(auVar37,0xaa);
    auVar13 = vshufpd_avx(auVar14,auVar14,5);
    dVar8 = ___ymm_00000000000000003ff00000000000003ff0000000000000bff0000000000000 *
            auVar13._0_8_ * auVar57._0_8_ +
            ___ymm_0000000000000000bff00000000000003ff00000000000003ff0000000000000 *
            auVar56._0_8_ * auVar55._0_8_ +
            auVar14._0_8_ * auVar53._0_8_ +
            ___xmm_bff00000000000003ff0000000000000 * auVar54._0_8_ * auVar37._0_8_;
    dVar15 = _UNK_150b54588 * auVar13._8_8_ * auVar57._8_8_ +
             _UNK_150b54568 * auVar56._8_8_ * auVar55._8_8_ +
             auVar14._8_8_ * auVar53._8_8_ + _UNK_15076c6f8 * auVar54._8_8_ * auVar37._0_8_;
    dVar16 = _UNK_150b54590 * auVar13._16_8_ * auVar57._16_8_ +
             _UNK_150b54570 * auVar56._16_8_ * auVar55._16_8_ +
             auVar14._16_8_ * auVar53._16_8_ +
             ___xmm_bff00000000000003ff0000000000000 * auVar54._16_8_ * auVar37._0_8_;
    auVar12._0_8_ =
         dVar109 * ((___ymm_00000000000000003ff00000000000003ff0000000000000bff0000000000000 *
                     auVar130._0_8_ * auVar52._0_8_ +
                    ___ymm_0000000000000000bff00000000000003ff00000000000003ff0000000000000 *
                    auVar51._0_8_ * auVar30._0_8_ +
                    auVar105._0_8_ * auVar36._0_8_ +
                    auVar50._0_8_ * auVar129._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
                    __real_4000000000000000 - (dVar8 + dVar8));
    auVar12._8_8_ =
         dVar111 * ((_UNK_150b54588 * auVar130._8_8_ * auVar52._8_8_ +
                    _UNK_150b54568 * auVar51._8_8_ * auVar30._8_8_ +
                    auVar105._8_8_ * auVar36._8_8_ + auVar50._8_8_ * auVar129._0_8_ * _UNK_15076c6f8
                    ) * __real_4000000000000000 - (dVar15 + dVar15));
    auVar9 = vshufpd_avx(auVar12,auVar12,1);
    dVar8 = param_2 * param_8 +
            dVar113 * ((_UNK_150b54590 * auVar130._16_8_ * auVar52._16_8_ +
                       _UNK_150b54570 * auVar51._16_8_ * auVar30._16_8_ +
                       auVar105._16_8_ * auVar36._16_8_ +
                       auVar50._16_8_ * auVar129._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
                       __real_4000000000000000 - (dVar16 + dVar16)) + auVar12._0_8_ + auVar9._0_8_;
    auVar130._24_8_ = 0;
    auVar130._0_24_ = *param_6;
  }
  dVar15 = dVar102 + dVar41;
  dVar109 = __real_3ff0000000000000;
  if ((param_5 & 1) != 0) {
    dVar109 = __real_3ff0000000000000 / dVar15;
  }
  dVar111 = dVar109 * param_3 * param_2 * param_2;
  param_2 = dVar109 * param_4 * param_2;
  dVar8 = (__real_3ff0000000000000 / (dVar15 * (param_2 + dVar111) + __real_3ff0000000000000)) *
          *(double *)param_1[0x33] * ((dVar111 * param_7 - param_2 * dVar8) - *param_9);
  if (0.0 < *(double *)param_1[10]) {
    dVar102 = dVar102 * dVar8;
    auVar50._0_8_ = auVar130._0_8_ * dVar102;
    auVar50._8_8_ = auVar130._8_8_ * dVar102;
    auVar50._16_8_ = auVar130._16_8_ * dVar102;
    auVar50._24_8_ = auVar130._24_8_ * dVar102;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = *(ulonglong *)(param_1[0x12] + 8);
    auVar9 = vmovhpd_avx(auVar25,*(undefined8 *)param_1[0x12]);
    auVar65._8_8_ = 0;
    auVar65._0_8_ = *(ulonglong *)(param_1[0x11] + 0x10);
    auVar10 = vmovhpd_avx(auVar65,*(undefined8 *)(param_1[0x11] + 8));
    auVar13 = vpermpd_avx2(auVar50,0x55);
    auVar36 = vpermpd_avx2(auVar50,0xaa);
    dVar102 = (___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
               auVar36._0_8_ * auVar10._0_8_ +
              ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
              auVar13._0_8_ * *(double *)param_1[0x12] +
              *(double *)(param_1[0x11] + 8) * 0.0 +
              auVar50._0_8_ * auVar9._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
              __real_3fe0000000000000 + *(double *)(param_1[0x11] + 8);
    dVar109 = (_UNK_150b54428 * auVar36._8_8_ * auVar10._8_8_ +
              _UNK_150b54408 * auVar13._8_8_ * *(double *)(param_1[0x12] + 8) +
              *(double *)(param_1[0x11] + 0x10) * 0.0 +
              auVar50._0_8_ * auVar9._8_8_ * _UNK_15076c6f8) * __real_3fe0000000000000 +
              *(double *)(param_1[0x11] + 0x10);
    dVar111 = (_UNK_150b54430 * auVar36._16_8_ * auVar9._0_8_ +
              _UNK_150b54410 * auVar13._16_8_ * *(double *)(param_1[0x11] + 8) +
              *(double *)param_1[0x12] * 0.0 +
              auVar50._0_8_ * auVar10._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
              __real_3fe0000000000000 + *(double *)param_1[0x12];
    dVar113 = (_UNK_150b54438 * auVar36._24_8_ * auVar9._8_8_ +
              _UNK_150b54418 * auVar13._24_8_ * *(double *)(param_1[0x11] + 0x10) +
              *(double *)(param_1[0x12] + 8) * 0.0 + auVar50._0_8_ * auVar10._8_8_ * _UNK_15076c6f8)
              * __real_3fe0000000000000 + *(double *)(param_1[0x12] + 8);
    auVar42._0_8_ = dVar111 * dVar111 + dVar102 * dVar102;
    auVar42._8_8_ = dVar113 * dVar113 + dVar109 * dVar109;
    auVar9 = vshufpd_avx(auVar42,auVar42,1);
    dVar15 = auVar9._0_8_ + auVar42._0_8_;
    auVar89._8_8_ = 0;
    auVar89._0_8_ = __real_3e45798ee2308c3a;
    auVar43._8_8_ = 0;
    auVar43._0_8_ = dVar15;
    auVar9 = vcmpsd_avx(auVar89,auVar43,6);
    uVar86 = ~auVar9._0_8_ & __real_ffffffffffffffff;
    dVar15 = __real_3ff0000000000000 / SQRT(dVar15);
    dVar16 = (double)(uVar86 & (
                               ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000
                               ^ (ulonglong)(dVar102 * dVar15)));
    dVar102 = (double)(uVar86 & (_UNK_150b54548 ^ (ulonglong)(dVar109 * dVar15)));
    dVar101 = (double)(uVar86 & (_UNK_150b54550 ^ (ulonglong)(dVar111 * dVar15)));
    dVar15 = (double)(uVar86 & (_UNK_150b54558 ^ (ulonglong)(dVar113 * dVar15)));
    auVar106._0_8_ =
         (double)((ulonglong)dVar16 ^
                 ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
    auVar106._8_8_ = (double)((ulonglong)dVar102 ^ _UNK_150b54548);
    auVar106._16_8_ = (double)((ulonglong)dVar101 ^ _UNK_150b54550);
    auVar106._24_8_ = (double)((ulonglong)dVar15 ^ _UNK_150b54558);
    *(undefined1 (*) [32])(param_1[0x11] + 8) = auVar106;
    auVar114._8_8_ = 0;
    auVar114._0_8_ = *(ulonglong *)(param_1[1] + 8);
    uVar1 = *(undefined8 *)(param_1[2] + 8);
    auVar122._8_8_ = uVar1;
    auVar122._0_8_ = uVar1;
    auVar124._16_8_ = uVar1;
    auVar124._0_16_ = auVar122;
    auVar124._24_8_ = uVar1;
    auVar9 = vunpcklpd_avx(auVar114,auVar122);
    auVar36 = vpermpd_avx2(auVar106,0xc9);
    auVar2 = *(undefined1 (*) [24])(param_1[1] + 8);
    auVar127._24_8_ = 0;
    auVar127._0_24_ = auVar2;
    auVar13 = vblendpd_avx(auVar127,auVar124,8);
    dVar109 = auVar106._0_8_ * SUB168(*(undefined1 (*) [16])(param_1[1] + 0x10),0) -
              auVar13._0_8_ * auVar36._0_8_;
    dVar111 = auVar106._8_8_ * SUB168(*(undefined1 (*) [16])(param_1[1] + 0x10),8) -
              auVar13._8_8_ * auVar36._8_8_;
    dVar113 = auVar106._16_8_ * auVar9._0_8_ - auVar13._16_8_ * auVar36._16_8_;
    dVar119 = auVar106._24_8_ * auVar9._8_8_ - auVar13._24_8_ * auVar36._24_8_;
    auVar51._0_8_ = dVar109 + dVar109;
    auVar51._8_8_ = dVar111 + dVar111;
    auVar51._16_8_ = dVar113 + dVar113;
    auVar51._24_8_ = dVar119 + dVar119;
    auVar13 = vpermpd_avx2(auVar106,0xff);
    auVar36 = vpermpd_avx2(auVar51,0xc9);
    dVar119 = auVar13._0_8_;
    dVar85 = auVar13._8_8_;
    dVar118 = auVar13._16_8_;
    dVar120 = auVar13._24_8_;
    auVar13 = vpermpd_avx2(auVar51,0xd2);
    auVar52._0_8_ = dVar16 * auVar51._0_8_;
    auVar52._8_8_ = dVar102 * auVar51._8_8_;
    auVar52._16_8_ = dVar101 * auVar51._16_8_;
    auVar52._24_8_ = dVar15 * auVar51._24_8_;
    auVar50 = vpermpd_avx2(auVar52,0xc9);
    auVar53._0_8_ = dVar16 * auVar13._0_8_ - auVar50._0_8_;
    auVar53._8_8_ = dVar102 * auVar13._8_8_ - auVar50._8_8_;
    auVar53._16_8_ = dVar101 * auVar13._16_8_ - auVar50._16_8_;
    auVar53._24_8_ = dVar15 * auVar13._24_8_ - auVar50._24_8_;
    auVar13 = vpermpd_avx2(auVar53,0xc9);
    auVar44._0_8_ =
         *(double *)(param_1[0xf] + 8) + dVar119 * auVar36._0_8_ + auVar2._0_8_ + auVar13._0_8_;
    auVar44._8_8_ =
         *(double *)(param_1[0xf] + 0x10) + dVar85 * auVar36._8_8_ + auVar2._8_8_ + auVar13._8_8_;
    auVar54._16_8_ =
         *(double *)param_1[0x10] + dVar118 * auVar36._16_8_ + auVar2._16_8_ + auVar13._16_8_;
    auVar54._0_16_ = auVar44;
    auVar54._24_8_ = dVar120 * auVar36._24_8_ + 0.0 + auVar13._24_8_ + 0.0;
    *(undefined1 (*) [16])(param_1[10] + 0x10) = auVar44;
    uVar1 = vmovlpd_avx(auVar54._16_16_);
    *(undefined8 *)(param_1[0xb] + 8) = uVar1;
    auVar123._8_8_ = 0;
    auVar123._0_8_ = *(ulonglong *)(*param_1 + 8);
    auVar9 = vmovhpd_avx(auVar123,*(undefined8 *)*param_1);
    auVar126._8_8_ = 0;
    auVar126._0_8_ = *(ulonglong *)param_1[1];
    auVar10 = vmovhpd_avx(auVar126,*(undefined8 *)(*param_1 + 0x10));
    dVar102 = *(double *)(*param_1 + 8);
    auVar2 = *param_1;
    dVar15 = *(double *)param_1[1];
    auVar13 = vpermpd_avx2(auVar106,0x55);
    dVar109 = *(double *)param_1[1];
    dVar111 = *(double *)*param_1;
    dVar113 = *(double *)(*param_1 + 8);
    auVar36 = vpermpd_avx2(auVar106,0xaa);
    *(double *)(param_1[0xc] + 0x10) =
         dVar125 * auVar9._0_8_ * auVar36._0_8_ +
         dVar110 * *(double *)(*param_1 + 0x10) * auVar13._0_8_ +
         dVar119 * *(double *)*param_1 + auVar10._0_8_ * dVar16 * dVar73;
    *(double *)param_1[0xd] =
         dVar128 * auVar9._8_8_ * auVar36._8_8_ +
         dVar112 * dVar109 * auVar13._8_8_ + dVar85 * dVar102 + auVar10._8_8_ * dVar16 * dVar74;
    *(double *)(param_1[0xd] + 8) =
         dVar75 * auVar10._0_8_ * auVar36._16_8_ +
         dVar24 * dVar111 * auVar13._16_8_ +
         dVar118 * auVar2._16_8_ + auVar9._0_8_ * dVar16 * dVar73;
    *(double *)(param_1[0xd] + 0x10) =
         dVar84 * auVar10._8_8_ * auVar36._24_8_ +
         dVar121 * dVar113 * auVar13._24_8_ + dVar120 * dVar15 + auVar9._8_8_ * dVar16 * dVar74;
    dVar15 = auVar106._0_8_ + auVar106._0_8_;
    dVar102 = auVar106._8_8_ + auVar106._8_8_;
    dVar73 = auVar106._16_8_ + auVar106._16_8_;
    dVar74 = auVar106._24_8_ + auVar106._24_8_;
    auVar55._0_8_ = dVar15 * dVar16;
    auVar55._8_8_ = dVar102 * dVar16;
    auVar55._16_8_ = dVar73 * dVar16;
    auVar55._24_8_ = dVar74 * dVar16;
    auVar90._0_8_ = auVar13._0_8_ * dVar15;
    auVar90._8_8_ = auVar13._8_8_ * dVar102;
    auVar94._16_8_ = auVar13._16_8_ * dVar73;
    auVar94._0_16_ = auVar90;
    auVar94._24_8_ = auVar13._24_8_ * dVar74;
    auVar69._0_8_ = dVar119 * dVar15;
    auVar69._8_8_ = dVar85 * dVar102;
    auVar69._16_8_ = dVar118 * dVar73;
    auVar69._24_8_ = dVar120 * dVar74;
    auVar13 = vperm2f128_avx(auVar94,auVar55,0x21);
    auVar13 = vshufpd_avx(auVar13,ZEXT1632(auVar55._16_16_),4);
    auVar26._0_8_ = auVar13._0_8_ + auVar69._0_8_;
    auVar26._8_8_ = auVar13._8_8_ + auVar69._8_8_;
    auVar30._16_8_ = auVar13._16_8_ + auVar69._16_8_;
    auVar30._0_16_ = auVar26;
    auVar30._24_8_ = auVar13._24_8_ + auVar69._24_8_;
    auVar50 = vsubpd_avx(auVar13,auVar69);
    auVar9 = vshufpd_avx(auVar90,auVar90,1);
    auVar56._8_8_ = auVar55._0_8_;
    auVar56._0_8_ = auVar55._0_8_;
    auVar56._16_8_ = auVar55._0_8_;
    auVar56._24_8_ = auVar55._0_8_;
    auVar13 = vblendpd_avx(auVar56,ZEXT1632(auVar9),1);
    auVar36 = vpermpd_avx2(auVar94,0x55);
    auVar36 = vblendpd_avx(ZEXT1632(CONCAT88(dVar101 * dVar73,dVar101 * dVar73)),auVar36,0xc);
    auVar57._0_8_ = auVar13._0_8_ + auVar36._0_8_;
    auVar57._8_8_ = auVar13._8_8_ + auVar36._8_8_;
    auVar57._16_8_ = auVar13._16_8_ + auVar36._16_8_;
    auVar57._24_8_ = auVar13._24_8_ + auVar36._24_8_;
    auVar80._8_8_ = __real_3ff0000000000000;
    auVar80._0_8_ = __real_3ff0000000000000;
    auVar80._16_8_ = __real_3ff0000000000000;
    auVar80._24_8_ = __real_3ff0000000000000;
    auVar36 = vsubpd_avx(auVar80,auVar57);
    dVar73 = auVar36._0_8_;
    dVar15 = *(double *)param_1[8];
    dVar102 = *(double *)(param_1[8] + 0x10);
    auVar9 = vmovhpd_avx(ZEXT816(0) << 0x40,*(undefined8 *)(param_1[8] + 8));
    auVar13 = vpermpd_avx2(auVar50,0xaa);
    dVar74 = auVar9._0_8_;
    dVar110 = auVar9._8_8_;
    auVar51 = vpermpd_avx2(auVar30,0x55);
    auVar116._0_8_ = auVar51._0_8_ * 0.0 + dVar74 * auVar13._0_8_ + dVar15 * dVar73;
    auVar116._8_8_ = auVar51._8_8_ * 0.0 + dVar110 * auVar13._8_8_ + dVar73 * 0.0;
    auVar116._16_8_ = dVar102 * auVar51._16_8_ + auVar13._16_8_ * 0.0 + dVar73 * 0.0;
    auVar116._24_8_ = auVar51._24_8_ * 0.0 + auVar13._24_8_ * 0.0 + dVar73 * 0.0;
    auVar13 = vpermpd_avx2(auVar30,0xaa);
    auVar51 = vpermpd_avx2(auVar36,0x55);
    dVar73 = auVar50._0_8_;
    auVar107._0_8_ = dVar73 * 0.0 + dVar15 * auVar13._0_8_ + dVar74 * auVar51._0_8_;
    auVar107._8_8_ = dVar73 * 0.0 + auVar13._8_8_ * 0.0 + dVar110 * auVar51._8_8_;
    auVar107._16_8_ = dVar102 * dVar73 + auVar13._16_8_ * 0.0 + auVar51._16_8_ * 0.0;
    auVar107._24_8_ = dVar73 * 0.0 + auVar13._24_8_ * 0.0 + auVar51._24_8_ * 0.0;
    auVar13 = vpermpd_avx2(auVar50,0x55);
    auVar51 = vpermpd_avx2(auVar36,0xaa);
    auVar95._0_8_ = auVar51._0_8_ * 0.0 + auVar13._0_8_ * dVar15 + dVar74 * auVar26._0_8_;
    auVar95._8_8_ = auVar51._8_8_ * 0.0 + auVar13._8_8_ * 0.0 + dVar110 * auVar26._0_8_;
    auVar95._16_8_ = dVar102 * auVar51._16_8_ + auVar13._16_8_ * 0.0 + auVar26._0_8_ * 0.0;
    auVar95._24_8_ = auVar51._24_8_ * 0.0 + auVar13._24_8_ * 0.0 + auVar26._0_8_ * 0.0;
    auVar9 = vunpcklpd_avx(auVar36._0_16_,auVar30._16_16_);
    auVar13 = vblendpd_avx(ZEXT1632(auVar9),auVar13,0xc);
    auVar51 = vpermpd_avx2(auVar116,0x55);
    auVar9 = vblendpd_avx(auVar36._0_16_,auVar50._16_16_,1);
    dVar125 = auVar9._0_8_;
    dVar128 = auVar9._8_8_;
    dVar110 = auVar13._0_8_;
    dVar112 = auVar13._8_8_;
    dVar24 = auVar13._16_8_;
    dVar121 = auVar13._24_8_;
    auVar30 = vpermpd_avx2(auVar116,0xaa);
    auVar9 = vshufpd_avx(auVar26,auVar50._0_16_,1);
    auVar13 = vblendpd_avx(auVar36,ZEXT1632(auVar9),3);
    dVar15 = auVar13._0_8_;
    auVar45._0_8_ = dVar15 * auVar30._0_8_ + dVar110 * auVar116._0_8_ + dVar125 * auVar51._0_8_;
    dVar102 = auVar13._8_8_;
    auVar45._8_8_ = dVar102 * auVar30._8_8_ + dVar112 * auVar116._0_8_ + dVar128 * auVar51._8_8_;
    dVar73 = auVar13._16_8_;
    auVar58._16_8_ =
         dVar73 * auVar30._16_8_ + dVar24 * auVar116._0_8_ + auVar26._0_8_ * auVar51._16_8_;
    auVar58._0_16_ = auVar45;
    dVar74 = auVar13._24_8_;
    auVar58._24_8_ =
         dVar74 * auVar30._24_8_ + dVar121 * auVar116._0_8_ + auVar26._8_8_ * auVar51._24_8_;
    auVar13 = vpermpd_avx2(auVar107,0x55);
    auVar36 = vpermpd_avx2(auVar107,0xaa);
    auVar78._0_8_ = dVar15 * auVar36._0_8_ + dVar110 * auVar107._0_8_ + dVar125 * auVar13._0_8_;
    auVar78._8_8_ = dVar102 * auVar36._8_8_ + dVar112 * auVar107._0_8_ + dVar128 * auVar13._8_8_;
    auVar81._16_8_ =
         dVar73 * auVar36._16_8_ + dVar24 * auVar107._0_8_ + auVar26._0_8_ * auVar13._16_8_;
    auVar81._0_16_ = auVar78;
    auVar81._24_8_ =
         dVar74 * auVar36._24_8_ + dVar121 * auVar107._0_8_ + auVar26._8_8_ * auVar13._24_8_;
    auVar13 = vpermpd_avx2(auVar95,0x55);
    auVar36 = vpermpd_avx2(auVar95,0xaa);
    *(undefined1 (*) [16])param_1[0x18] = auVar45;
    uVar1 = vmovlpd_avx(auVar58._16_16_);
    *(undefined8 *)(param_1[0x18] + 0x10) = uVar1;
    auVar91._0_8_ = dVar15 * auVar36._0_8_ + dVar110 * auVar95._0_8_ + dVar125 * auVar13._0_8_;
    auVar91._8_8_ = dVar102 * auVar36._8_8_ + dVar112 * auVar95._0_8_ + dVar128 * auVar13._8_8_;
    auVar96._16_8_ =
         dVar73 * auVar36._16_8_ + dVar24 * auVar95._0_8_ + auVar26._0_8_ * auVar13._16_8_;
    auVar96._0_16_ = auVar91;
    auVar96._24_8_ =
         dVar74 * auVar36._24_8_ + dVar121 * auVar95._0_8_ + auVar26._8_8_ * auVar13._24_8_;
    *(undefined8 *)param_1[0x19] = 0;
    *(undefined1 (*) [16])(param_1[0x19] + 8) = auVar78;
    uVar1 = vmovlpd_avx(auVar81._16_16_);
    *(undefined8 *)param_1[0x1a] = uVar1;
    *(undefined8 *)(param_1[0x1a] + 8) = 0;
    *(undefined1 (*) [16])(param_1[0x1a] + 0x10) = auVar91;
    uVar1 = vmovlpd_avx(auVar96._16_16_);
    *(undefined8 *)(param_1[0x1b] + 8) = uVar1;
    *(undefined1 (*) [32])(param_1[0x1b] + 0x10) = ZEXT1632(ZEXT816(0));
    *(undefined8 *)param_1[0x1d] = 0x3ff0000000000000;
  }
  dVar128 = _UNK_150b54438;
  dVar125 = _UNK_150b54430;
  dVar121 = _UNK_150b54428;
  dVar24 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar112 = _UNK_150b54418;
  dVar110 = _UNK_150b54410;
  dVar74 = _UNK_150b54408;
  dVar73 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar102 = _UNK_15076c6f8;
  dVar15 = ___xmm_bff00000000000003ff0000000000000;
  if (0.0 < *(double *)(param_1[10] + 8)) {
    dVar41 = dVar8 * (double)((ulonglong)dVar41 ^ __xmm_80000000000000008000000000000000);
    auVar38._0_8_ = auVar130._0_8_ * dVar41;
    auVar38._8_8_ = auVar130._8_8_ * dVar41;
    auVar38._16_8_ = auVar130._16_8_ * dVar41;
    auVar38._24_8_ = auVar130._24_8_ * dVar41;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = *(ulonglong *)(param_1[0x13] + 0x10);
    auVar9 = vmovhpd_avx(auVar17,*(undefined8 *)(param_1[0x13] + 8));
    auVar27._8_8_ = 0;
    auVar27._0_8_ = *(ulonglong *)param_1[0x13];
    auVar10 = vmovhpd_avx(auVar27,*(undefined8 *)(param_1[0x12] + 0x10));
    auVar130 = vpermpd_avx2(auVar38,0x55);
    auVar13 = vpermpd_avx2(auVar38,0xaa);
    dVar75 = (___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
              auVar13._0_8_ * auVar10._0_8_ +
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
             auVar130._0_8_ * *(double *)(param_1[0x13] + 8) +
             *(double *)(param_1[0x12] + 0x10) * 0.0 +
             auVar38._0_8_ * auVar9._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
             __real_3fe0000000000000 + *(double *)(param_1[0x12] + 0x10);
    dVar84 = (_UNK_150b54428 * auVar13._8_8_ * auVar10._8_8_ +
             _UNK_150b54408 * auVar130._8_8_ * *(double *)(param_1[0x13] + 0x10) +
             *(double *)param_1[0x13] * 0.0 + auVar38._0_8_ * auVar9._8_8_ * _UNK_15076c6f8) *
             __real_3fe0000000000000 + *(double *)param_1[0x13];
    dVar109 = (_UNK_150b54430 * auVar13._16_8_ * auVar9._0_8_ +
              _UNK_150b54410 * auVar130._16_8_ * *(double *)(param_1[0x12] + 0x10) +
              *(double *)(param_1[0x13] + 8) * 0.0 +
              auVar38._0_8_ * auVar10._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
              __real_3fe0000000000000 + *(double *)(param_1[0x13] + 8);
    dVar16 = (_UNK_150b54438 * auVar13._24_8_ * auVar9._8_8_ +
             _UNK_150b54418 * auVar130._24_8_ * *(double *)param_1[0x13] +
             *(double *)(param_1[0x13] + 0x10) * 0.0 +
             auVar38._0_8_ * auVar10._8_8_ * _UNK_15076c6f8) * __real_3fe0000000000000 +
             *(double *)(param_1[0x13] + 0x10);
    auVar46._0_8_ = dVar75 * dVar75 + dVar109 * dVar109;
    auVar46._8_8_ = dVar84 * dVar84 + dVar16 * dVar16;
    auVar9 = vshufpd_avx(auVar46,auVar46,1);
    dVar41 = auVar46._0_8_ + auVar9._0_8_;
    auVar66._8_8_ = 0;
    auVar66._0_8_ = __real_3e45798ee2308c3a;
    auVar47._8_8_ = 0;
    auVar47._0_8_ = dVar41;
    auVar9 = vcmpsd_avx(auVar66,auVar47,6);
    uVar86 = ~auVar9._0_8_ & __real_ffffffffffffffff;
    dVar41 = __real_3ff0000000000000 / SQRT(dVar41);
    dVar111 = (double)(((ulonglong)(dVar75 * dVar41) ^
                       ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) &
                      uVar86);
    dVar75 = (double)(((ulonglong)(dVar84 * dVar41) ^ _UNK_150b54548) & uVar86);
    dVar113 = (double)(((ulonglong)(dVar109 * dVar41) ^ _UNK_150b54550) & uVar86);
    dVar41 = (double)(((ulonglong)(dVar16 * dVar41) ^ _UNK_150b54558) & uVar86);
    auVar70._0_8_ =
         (double)((ulonglong)dVar111 ^
                 ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
    auVar70._8_8_ = (double)((ulonglong)dVar75 ^ _UNK_150b54548);
    auVar70._16_8_ = (double)((ulonglong)dVar113 ^ _UNK_150b54550);
    auVar70._24_8_ = (double)((ulonglong)dVar41 ^ _UNK_150b54558);
    *(undefined1 (*) [32])(param_1[0x12] + 0x10) = auVar70;
    auVar92._8_8_ = 0;
    auVar92._0_8_ = *(ulonglong *)(param_1[5] + 8);
    uVar1 = *(undefined8 *)(param_1[6] + 8);
    auVar103._8_8_ = uVar1;
    auVar103._0_8_ = uVar1;
    auVar108._16_8_ = uVar1;
    auVar108._0_16_ = auVar103;
    auVar108._24_8_ = uVar1;
    auVar9 = vunpcklpd_avx(auVar92,auVar103);
    auVar13 = vpermpd_avx2(auVar70,0xc9);
    auVar2 = *(undefined1 (*) [24])(param_1[5] + 8);
    auVar117._24_8_ = 0;
    auVar117._0_24_ = auVar2;
    auVar130 = vblendpd_avx(auVar117,auVar108,8);
    dVar84 = auVar70._0_8_ * SUB168(*(undefined1 (*) [16])(param_1[5] + 0x10),0) -
             auVar130._0_8_ * auVar13._0_8_;
    dVar109 = auVar70._8_8_ * SUB168(*(undefined1 (*) [16])(param_1[5] + 0x10),8) -
              auVar130._8_8_ * auVar13._8_8_;
    dVar16 = auVar70._16_8_ * auVar9._0_8_ - auVar130._16_8_ * auVar13._16_8_;
    dVar101 = auVar70._24_8_ * auVar9._8_8_ - auVar130._24_8_ * auVar13._24_8_;
    auVar97._0_8_ = dVar84 + dVar84;
    auVar97._8_8_ = dVar109 + dVar109;
    auVar97._16_8_ = dVar16 + dVar16;
    auVar97._24_8_ = dVar101 + dVar101;
    auVar130 = vpermpd_avx2(auVar70,0xff);
    auVar13 = vpermpd_avx2(auVar97,0xc9);
    dVar16 = auVar130._0_8_;
    dVar101 = auVar130._8_8_;
    dVar119 = auVar130._16_8_;
    dVar85 = auVar130._24_8_;
    auVar130 = vpermpd_avx2(auVar97,0xd2);
    auVar98._0_8_ = auVar97._0_8_ * dVar111;
    auVar98._8_8_ = auVar97._8_8_ * dVar75;
    auVar98._16_8_ = auVar97._16_8_ * dVar113;
    auVar98._24_8_ = auVar97._24_8_ * dVar41;
    auVar36 = vpermpd_avx2(auVar98,0xc9);
    auVar99._0_8_ = dVar111 * auVar130._0_8_ - auVar36._0_8_;
    auVar99._8_8_ = dVar75 * auVar130._8_8_ - auVar36._8_8_;
    auVar99._16_8_ = dVar113 * auVar130._16_8_ - auVar36._16_8_;
    auVar99._24_8_ = dVar41 * auVar130._24_8_ - auVar36._24_8_;
    auVar130 = vpermpd_avx2(auVar99,0xc9);
    auVar93._0_8_ =
         *(double *)(param_1[0x10] + 8) + dVar16 * auVar13._0_8_ + auVar2._0_8_ + auVar130._0_8_;
    auVar93._8_8_ =
         *(double *)(param_1[0x10] + 0x10) + dVar101 * auVar13._8_8_ + auVar2._8_8_ + auVar130._8_8_
    ;
    auVar100._16_8_ =
         *(double *)param_1[0x11] + dVar119 * auVar13._16_8_ + auVar2._16_8_ + auVar130._16_8_;
    auVar100._0_16_ = auVar93;
    auVar100._24_8_ = dVar85 * auVar13._24_8_ + 0.0 + auVar130._24_8_ + 0.0;
    *(undefined1 (*) [16])(param_1[0xb] + 0x10) = auVar93;
    uVar1 = vmovlpd_avx(auVar100._16_16_);
    *(undefined8 *)(param_1[0xc] + 8) = uVar1;
    auVar104._8_8_ = 0;
    auVar104._0_8_ = *(ulonglong *)(param_1[4] + 8);
    auVar9 = vmovhpd_avx(auVar104,*(undefined8 *)param_1[4]);
    auVar115._8_8_ = 0;
    auVar115._0_8_ = *(ulonglong *)param_1[5];
    auVar10 = vmovhpd_avx(auVar115,*(undefined8 *)(param_1[4] + 0x10));
    dVar75 = *(double *)(param_1[4] + 8);
    auVar2 = param_1[4];
    dVar41 = *(double *)param_1[5];
    auVar130 = vpermpd_avx2(auVar70,0x55);
    dVar84 = *(double *)param_1[4];
    dVar109 = *(double *)(param_1[4] + 8);
    auVar13 = vpermpd_avx2(auVar70,0xaa);
    *(double *)param_1[0xe] =
         dVar24 * auVar9._0_8_ * auVar13._0_8_ +
         dVar73 * *(double *)(param_1[4] + 0x10) * auVar130._0_8_ +
         dVar16 * *(double *)param_1[4] + auVar10._0_8_ * dVar111 * dVar15;
    *(double *)(param_1[0xe] + 8) =
         dVar121 * auVar9._8_8_ * auVar13._8_8_ +
         dVar74 * *(double *)param_1[5] * auVar130._8_8_ +
         dVar101 * dVar75 + auVar10._8_8_ * dVar111 * dVar102;
    *(double *)(param_1[0xe] + 0x10) =
         dVar125 * auVar10._0_8_ * auVar13._16_8_ +
         dVar110 * dVar84 * auVar130._16_8_ +
         dVar119 * auVar2._16_8_ + auVar9._0_8_ * dVar111 * dVar15;
    *(double *)param_1[0xf] =
         dVar128 * auVar10._8_8_ * auVar13._24_8_ +
         dVar112 * dVar109 * auVar130._24_8_ + dVar85 * dVar41 + auVar9._8_8_ * dVar111 * dVar102;
    dVar41 = auVar70._0_8_ + auVar70._0_8_;
    dVar15 = auVar70._8_8_ + auVar70._8_8_;
    dVar102 = auVar70._16_8_ + auVar70._16_8_;
    dVar73 = auVar70._24_8_ + auVar70._24_8_;
    auVar59._0_8_ = dVar111 * dVar41;
    auVar59._8_8_ = dVar111 * dVar15;
    auVar59._16_8_ = dVar111 * dVar102;
    auVar59._24_8_ = dVar111 * dVar73;
    auVar67._0_8_ = auVar130._0_8_ * dVar41;
    auVar67._8_8_ = auVar130._8_8_ * dVar15;
    auVar71._16_8_ = auVar130._16_8_ * dVar102;
    auVar71._0_16_ = auVar67;
    auVar71._24_8_ = auVar130._24_8_ * dVar73;
    auVar31._0_8_ = dVar41 * dVar16;
    auVar31._8_8_ = dVar15 * dVar101;
    auVar31._16_8_ = dVar102 * dVar119;
    auVar31._24_8_ = dVar73 * dVar85;
    auVar130 = vperm2f128_avx(auVar71,auVar59,0x21);
    auVar130 = vshufpd_avx(auVar130,ZEXT1632(auVar59._16_16_),4);
    auVar18._0_8_ = auVar31._0_8_ + auVar130._0_8_;
    auVar18._8_8_ = auVar31._8_8_ + auVar130._8_8_;
    auVar22._16_8_ = auVar31._16_8_ + auVar130._16_8_;
    auVar22._0_16_ = auVar18;
    auVar22._24_8_ = auVar31._24_8_ + auVar130._24_8_;
    auVar36 = vsubpd_avx(auVar130,auVar31);
    auVar9 = vshufpd_avx(auVar67,auVar67,1);
    auVar60._8_8_ = auVar59._0_8_;
    auVar60._0_8_ = auVar59._0_8_;
    auVar60._16_8_ = auVar59._0_8_;
    auVar60._24_8_ = auVar59._0_8_;
    auVar130 = vblendpd_avx(auVar60,ZEXT1632(auVar9),1);
    auVar13 = vpermpd_avx2(auVar71,0x55);
    auVar13 = vblendpd_avx(ZEXT1632(CONCAT88(dVar113 * dVar102,dVar113 * dVar102)),auVar13,0xc);
    auVar39._0_8_ = auVar130._0_8_ + auVar13._0_8_;
    auVar39._8_8_ = auVar130._8_8_ + auVar13._8_8_;
    auVar39._16_8_ = auVar130._16_8_ + auVar13._16_8_;
    auVar39._24_8_ = auVar130._24_8_ + auVar13._24_8_;
    auVar61._8_8_ = __real_3ff0000000000000;
    auVar61._0_8_ = __real_3ff0000000000000;
    auVar61._16_8_ = __real_3ff0000000000000;
    auVar61._24_8_ = __real_3ff0000000000000;
    auVar13 = vsubpd_avx(auVar61,auVar39);
    dVar102 = auVar13._0_8_;
    dVar41 = *(double *)param_1[9];
    dVar15 = *(double *)(param_1[9] + 0x10);
    auVar9 = vmovhpd_avx(ZEXT816(0) << 0x40,*(undefined8 *)(param_1[9] + 8));
    auVar130 = vpermpd_avx2(auVar36,0xaa);
    dVar73 = auVar9._0_8_;
    dVar74 = auVar9._8_8_;
    auVar50 = vpermpd_avx2(auVar22,0x55);
    auVar82._0_8_ = auVar50._0_8_ * 0.0 + dVar73 * auVar130._0_8_ + dVar41 * dVar102;
    auVar82._8_8_ = auVar50._8_8_ * 0.0 + dVar74 * auVar130._8_8_ + dVar102 * 0.0;
    auVar82._16_8_ = dVar15 * auVar50._16_8_ + auVar130._16_8_ * 0.0 + dVar102 * 0.0;
    auVar82._24_8_ = auVar50._24_8_ * 0.0 + auVar130._24_8_ * 0.0 + dVar102 * 0.0;
    auVar130 = vpermpd_avx2(auVar22,0xaa);
    auVar50 = vpermpd_avx2(auVar13,0x55);
    dVar102 = auVar36._0_8_;
    auVar72._0_8_ = dVar102 * 0.0 + dVar41 * auVar130._0_8_ + dVar73 * auVar50._0_8_;
    auVar72._8_8_ = dVar102 * 0.0 + auVar130._8_8_ * 0.0 + dVar74 * auVar50._8_8_;
    auVar72._16_8_ = dVar15 * dVar102 + auVar130._16_8_ * 0.0 + auVar50._16_8_ * 0.0;
    auVar72._24_8_ = dVar102 * 0.0 + auVar130._24_8_ * 0.0 + auVar50._24_8_ * 0.0;
    auVar130 = vpermpd_avx2(auVar36,0x55);
    auVar50 = vpermpd_avx2(auVar13,0xaa);
    auVar62._0_8_ = auVar50._0_8_ * 0.0 + auVar130._0_8_ * dVar41 + dVar73 * auVar18._0_8_;
    auVar62._8_8_ = auVar50._8_8_ * 0.0 + auVar130._8_8_ * 0.0 + dVar74 * auVar18._0_8_;
    auVar62._16_8_ = dVar15 * auVar50._16_8_ + auVar130._16_8_ * 0.0 + auVar18._0_8_ * 0.0;
    auVar62._24_8_ = auVar50._24_8_ * 0.0 + auVar130._24_8_ * 0.0 + auVar18._0_8_ * 0.0;
    auVar9 = vunpcklpd_avx(auVar13._0_16_,auVar22._16_16_);
    auVar130 = vblendpd_avx(ZEXT1632(auVar9),auVar130,0xc);
    auVar50 = vpermpd_avx2(auVar82,0x55);
    auVar9 = vblendpd_avx(auVar13._0_16_,auVar36._16_16_,1);
    dVar121 = auVar9._0_8_;
    dVar125 = auVar9._8_8_;
    dVar74 = auVar130._0_8_;
    dVar110 = auVar130._8_8_;
    dVar112 = auVar130._16_8_;
    dVar24 = auVar130._24_8_;
    auVar51 = vpermpd_avx2(auVar82,0xaa);
    auVar9 = vshufpd_avx(auVar18,auVar36._0_16_,1);
    auVar130 = vblendpd_avx(auVar13,ZEXT1632(auVar9),3);
    dVar41 = auVar130._0_8_;
    auVar79._0_8_ = dVar41 * auVar51._0_8_ + dVar74 * auVar82._0_8_ + dVar121 * auVar50._0_8_;
    dVar15 = auVar130._8_8_;
    auVar79._8_8_ = dVar15 * auVar51._8_8_ + dVar110 * auVar82._0_8_ + dVar125 * auVar50._8_8_;
    dVar102 = auVar130._16_8_;
    auVar83._16_8_ =
         dVar102 * auVar51._16_8_ + dVar112 * auVar82._0_8_ + auVar18._0_8_ * auVar50._16_8_;
    auVar83._0_16_ = auVar79;
    dVar73 = auVar130._24_8_;
    auVar83._24_8_ =
         dVar73 * auVar51._24_8_ + dVar24 * auVar82._0_8_ + auVar18._8_8_ * auVar50._24_8_;
    auVar130 = vpermpd_avx2(auVar72,0x55);
    auVar13 = vpermpd_avx2(auVar72,0xaa);
    auVar35._0_8_ = dVar41 * auVar13._0_8_ + dVar74 * auVar72._0_8_ + dVar121 * auVar130._0_8_;
    auVar35._8_8_ = dVar15 * auVar13._8_8_ + dVar110 * auVar72._0_8_ + dVar125 * auVar130._8_8_;
    auVar40._16_8_ =
         dVar102 * auVar13._16_8_ + dVar112 * auVar72._0_8_ + auVar18._0_8_ * auVar130._16_8_;
    auVar40._0_16_ = auVar35;
    auVar40._24_8_ =
         dVar73 * auVar13._24_8_ + dVar24 * auVar72._0_8_ + auVar18._8_8_ * auVar130._24_8_;
    auVar130 = vpermpd_avx2(auVar62,0x55);
    auVar13 = vpermpd_avx2(auVar62,0xaa);
    *(undefined1 (*) [16])(param_1[0x1d] + 8) = auVar79;
    uVar1 = vmovlpd_avx(auVar83._16_16_);
    *(undefined8 *)param_1[0x1e] = uVar1;
    auVar48._0_8_ = dVar41 * auVar13._0_8_ + dVar74 * auVar62._0_8_ + dVar121 * auVar130._0_8_;
    auVar48._8_8_ = dVar15 * auVar13._8_8_ + dVar110 * auVar62._0_8_ + dVar125 * auVar130._8_8_;
    auVar63._16_8_ =
         dVar102 * auVar13._16_8_ + dVar112 * auVar62._0_8_ + auVar18._0_8_ * auVar130._16_8_;
    auVar63._0_16_ = auVar48;
    auVar63._24_8_ =
         dVar73 * auVar13._24_8_ + dVar24 * auVar62._0_8_ + auVar18._8_8_ * auVar130._24_8_;
    *(undefined8 *)(param_1[0x1e] + 8) = 0;
    *(undefined1 (*) [16])(param_1[0x1e] + 0x10) = auVar35;
    uVar1 = vmovlpd_avx(auVar40._16_16_);
    *(undefined8 *)(param_1[0x1f] + 8) = uVar1;
    *(undefined8 *)(param_1[0x1f] + 0x10) = 0;
    *(undefined1 (*) [16])param_1[0x20] = auVar48;
    uVar1 = vmovlpd_avx(auVar63._16_16_);
    *(undefined8 *)(param_1[0x20] + 0x10) = uVar1;
    *(undefined8 *)param_1[0x21] = 0;
    *(undefined8 *)(param_1[0x21] + 8) = 0;
    *(undefined8 *)(param_1[0x21] + 0x10) = 0;
    *(undefined8 *)param_1[0x22] = 0;
    *(undefined8 *)(param_1[0x22] + 8) = 0x3ff0000000000000;
  }
  dVar41 = *(double *)param_1[0xe];
  dVar15 = *(double *)(param_1[0xe] + 8);
  dVar102 = *(double *)(param_1[0xe] + 0x10);
  dVar73 = *(double *)param_1[0xf];
  dVar74 = *(double *)param_1[0x13];
  dVar110 = *(double *)(param_1[0x13] + 8);
  dVar112 = *(double *)(param_1[0x13] + 0x10);
  auVar28._0_8_ =
       *(double *)(param_1[0x12] + 0x10) * *(double *)(param_1[0x11] + 8) +
       dVar110 * *(double *)param_1[0x12];
  auVar28._8_8_ =
       dVar74 * *(double *)(param_1[0x11] + 0x10) + dVar112 * *(double *)(param_1[0x12] + 8);
  auVar9 = vshufpd_avx(auVar28,auVar28,1);
  auVar29._8_8_ = 0;
  auVar29._0_8_ = auVar28._0_8_ + auVar9._0_8_;
  auVar9 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar29,2);
  auVar49._8_8_ = 0;
  auVar49._0_8_ = __real_3ff0000000000000;
  auVar68._8_8_ = 0;
  auVar68._0_8_ = __real_bff0000000000000;
  auVar9 = vblendvpd_avx(auVar68,auVar49,auVar9);
  dVar24 = auVar9._0_8_;
  *(double *)(param_1[0x12] + 0x10) = *(double *)(param_1[0x12] + 0x10) * dVar24;
  *(double *)param_1[0x13] = dVar74 * dVar24;
  *(double *)(param_1[0x13] + 8) = dVar110 * dVar24;
  *(double *)(param_1[0x13] + 0x10) = dVar112 * dVar24;
  auVar19._0_8_ =
       dVar41 * *(double *)(param_1[0xc] + 0x10) + dVar102 * *(double *)(param_1[0xd] + 8);
  auVar19._8_8_ = dVar15 * *(double *)param_1[0xd] + dVar73 * *(double *)(param_1[0xd] + 0x10);
  auVar9 = vshufpd_avx(auVar19,auVar19,1);
  auVar20._8_8_ = 0;
  auVar20._0_8_ = auVar19._0_8_ + auVar9._0_8_;
  auVar9 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar20,2);
  auVar9 = vblendvpd_avx(auVar68,auVar49,auVar9);
  dVar74 = auVar9._0_8_;
  *(double *)param_1[0xe] = dVar41 * dVar74;
  *(double *)(param_1[0xe] + 8) = dVar15 * dVar74;
  *(double *)(param_1[0xe] + 0x10) = dVar102 * dVar74;
  *(double *)param_1[0xf] = dVar73 * dVar74;
  *param_9 = dVar8 + *param_9;
  auVar21._0_8_ = dVar8 * *(double *)*param_6 + *(double *)param_1[0x2d];
  auVar21._8_8_ = dVar8 * *(double *)(*param_6 + 8) + *(double *)(param_1[0x2d] + 8);
  auVar23._16_8_ = dVar8 * *(double *)(*param_6 + 0x10) + *(double *)(param_1[0x2d] + 0x10);
  auVar23._0_16_ = auVar21;
  auVar23._24_8_ = dVar8 * 0.0 + 0.0;
  *(undefined1 (*) [16])param_1[0x2d] = auVar21;
  uVar1 = vmovlpd_avx(auVar23._16_16_);
  *(undefined8 *)(param_1[0x2d] + 0x10) = uVar1;
  return;
}

// ApplyPointPositionConstraintKD_avx2 @ 1409f1910

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPointPositionConstraintKD_avx2
               (longlong param_1,int param_2,int param_3,double *param_4,double param_5)

{
  undefined1 (*pauVar1) [24];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  double *pdVar4;
  double *pdVar5;
  double *pdVar6;
  ulonglong *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [32];
  undefined1 auVar11 [24];
  undefined1 auVar12 [32];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [32];
  undefined1 auVar25 [16];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar35 [16];
  undefined1 auVar42 [32];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  ulonglong uVar82;
  undefined1 auVar83 [16];
  ulonglong uVar88;
  undefined1 auVar84 [16];
  ulonglong uVar89;
  ulonglong uVar90;
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar87 [32];
  double dVar91;
  undefined1 auVar92 [16];
  double dVar99;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  double dVar100;
  double dVar101;
  undefined1 auVar98 [32];
  double dVar102;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [32];
  undefined1 auVar107 [16];
  double dVar114;
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  double dVar113;
  double dVar115;
  undefined1 auVar112 [32];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [32];
  undefined1 auVar119 [32];
  undefined1 auVar121 [32];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  double dVar122;
  double dVar128;
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar132 [32];
  undefined1 auVar133 [16];
  undefined1 auVar135 [32];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar140 [32];
  undefined1 auVar32 [32];
  undefined1 auVar43 [32];
  undefined1 auVar51 [32];
  undefined1 auVar60 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar68 [32];
  undefined1 auVar73 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar106 [32];
  undefined1 auVar111 [32];
  undefined1 auVar120 [32];
  undefined1 auVar131 [32];
  undefined1 auVar134 [32];
  undefined1 auVar139 [32];
  
  lVar23 = (longlong)param_3;
  uVar82 = *(ulonglong *)(param_1 + 0x110 + lVar23 * 0x18);
  auVar35._8_8_ = 0;
  auVar35._0_8_ = uVar82;
  auVar28._16_8_ = uVar82;
  auVar28._0_16_ = *(undefined1 (*) [16])(param_1 + 0x100 + lVar23 * 0x18);
  auVar28._24_8_ = 0;
  dVar102 = *(double *)(param_1 + 0x180 + lVar23 * 0x18);
  auVar33._8_8_ = 0;
  auVar33._0_8_ = dVar102;
  auVar44 = *(undefined1 (*) [16])(param_1 + 0x170 + lVar23 * 0x18);
  auVar46._16_8_ = dVar102;
  auVar46._0_16_ = auVar44;
  auVar46._24_8_ = 0;
  auVar28 = vsubpd_avx(auVar28,auVar46);
  auVar25 = auVar28._0_16_;
  auVar138 = vshufpd_avx(auVar25,auVar25,1);
  auVar33 = vsubpd_avx(auVar35,auVar33);
  lVar22 = lVar23 * 0x80;
  dVar101 = auVar33._0_8_;
  auVar74._0_8_ = (ulonglong)dVar101 ^ (ulonglong)__real_8000000000000000;
  auVar74._8_8_ = auVar33._8_8_ ^ (ulonglong)__real_8000000000000000;
  auVar129._0_8_ = (double)(auVar138._0_8_ ^ (ulonglong)__real_8000000000000000);
  auVar129._8_8_ = (double)(auVar138._8_8_ ^ (ulonglong)__real_8000000000000000);
  uVar8 = *(undefined8 *)(param_1 + 0x268 + lVar22);
  auVar65._8_8_ = uVar8;
  auVar65._0_8_ = uVar8;
  auVar31._16_8_ = uVar8;
  auVar31._0_16_ = auVar65;
  auVar31._24_8_ = uVar8;
  dVar91 = *(double *)(param_1 + 0x260 + lVar22);
  auVar137._8_8_ = dVar91;
  auVar137._0_8_ = dVar91;
  auVar139._16_8_ = dVar91;
  auVar139._0_16_ = auVar137;
  auVar139._24_8_ = dVar91;
  uVar8 = *(undefined8 *)(param_1 + 0x288 + lVar22);
  auVar52._8_8_ = uVar8;
  auVar52._0_8_ = uVar8;
  auVar60._16_8_ = uVar8;
  auVar60._0_16_ = auVar52;
  auVar60._24_8_ = uVar8;
  auVar29._0_8_ = auVar28._0_8_;
  auVar34._0_8_ = (double)((ulonglong)auVar29._0_8_ ^ (ulonglong)__real_8000000000000000);
  dVar100 = auVar28._8_8_;
  auVar34._8_8_ = (ulonglong)dVar100 ^ (ulonglong)__real_8000000000000000;
  uVar8 = *(undefined8 *)(param_1 + 0x290 + lVar22);
  auVar136._8_8_ = uVar8;
  auVar136._0_8_ = uVar8;
  auVar131 = vpermpd_avx2(auVar28,0xaa);
  auVar35 = vunpcklpd_avx(auVar65,auVar137);
  auVar108 = vpermpd_avx2(auVar28,0x55);
  uVar9 = *(undefined8 *)(param_1 + 0x280 + lVar22);
  auVar92._8_8_ = uVar9;
  auVar92._0_8_ = uVar9;
  auVar96._16_8_ = uVar9;
  auVar96._0_16_ = auVar92;
  auVar96._24_8_ = uVar9;
  auVar28 = vblendpd_avx(auVar96,auVar60,1);
  auVar74 = vunpcklpd_avx(auVar74,auVar33);
  auVar30 = vblendpd_avx(auVar60,auVar31,4);
  auVar37 = vblendpd_avx(ZEXT1632(auVar136),auVar60,4);
  auVar138 = vshufpd_avx(auVar25,auVar34,1);
  dVar99 = *(double *)(param_1 + 0x240 + lVar22);
  auVar60 = vblendpd_avx(auVar96,auVar139,4);
  auVar25 = vunpcklpd_avx(auVar136,auVar52);
  auVar31 = vblendpd_avx(ZEXT1632(auVar25),auVar31,4);
  auVar78 = vblendpd_avx(auVar139,auVar96,1);
  auVar25._0_8_ =
       *(double *)(param_1 + 0xf0 + lVar23 * 8) +
       (auVar108._0_8_ * auVar28._0_8_ - auVar131._0_8_ * auVar35._0_8_) * auVar74._0_8_ +
       (auVar108._0_8_ * auVar37._0_8_ - auVar30._0_8_ * auVar131._0_8_) * auVar138._0_8_;
  auVar25._8_8_ =
       (auVar108._8_8_ * auVar28._8_8_ - auVar131._8_8_ * auVar35._8_8_) * auVar74._8_8_ +
       (auVar108._8_8_ * auVar37._8_8_ - auVar30._8_8_ * auVar131._8_8_) * auVar138._8_8_ + 0.0;
  auVar118._16_8_ =
       (auVar108._16_8_ * auVar28._16_8_ - auVar131._16_8_ * dVar91) * auVar129._0_8_ +
       (auVar108._16_8_ * auVar37._16_8_ - auVar30._16_8_ * auVar131._16_8_) * auVar29._0_8_ + 0.0;
  auVar118._0_16_ = auVar25;
  auVar118._24_8_ =
       (auVar108._24_8_ * auVar28._24_8_ - auVar131._24_8_ * dVar91) * auVar129._8_8_ +
       (auVar108._24_8_ * auVar37._24_8_ - auVar30._24_8_ * auVar131._24_8_) * dVar100 + 0.0;
  dVar91 = *(double *)(param_1 + 0xf0 + lVar23 * 8);
  auVar138 = vunpcklpd_avx(auVar33,auVar129);
  auVar29._8_8_ = auVar29._0_8_;
  auVar29._16_8_ = auVar29._0_8_;
  auVar29._24_8_ = auVar29._0_8_;
  auVar28 = vblendpd_avx(auVar29,ZEXT1632(auVar34),1);
  auVar130._0_8_ =
       *(double *)(param_1 + 0xf0 + lVar23 * 8) +
       (auVar34._0_8_ * auVar60._0_8_ + dVar99 * dVar101) * auVar138._0_8_ +
       (dVar101 * auVar78._0_8_ + auVar34._0_8_ * auVar31._0_8_) * auVar28._0_8_;
  auVar130._8_8_ =
       (auVar34._0_8_ * auVar60._8_8_ + dVar99 * dVar101) * auVar138._8_8_ +
       (dVar101 * auVar78._8_8_ + auVar34._0_8_ * auVar31._8_8_) * auVar28._8_8_ + 0.0;
  auVar131._16_8_ =
       dVar91 + (auVar29._0_8_ * auVar60._16_8_ + dVar99 * auVar129._0_8_) * auVar129._0_8_ +
                (auVar129._0_8_ * auVar78._16_8_ + auVar29._0_8_ * auVar31._16_8_) * auVar28._16_8_;
  auVar131._0_16_ = auVar130;
  auVar131._24_8_ =
       (dVar100 * auVar60._24_8_ + dVar99 * auVar129._8_8_) * auVar129._8_8_ +
       (auVar129._8_8_ * auVar78._24_8_ + dVar100 * auVar31._24_8_) * auVar28._24_8_ + 0.0;
  auVar37._8_8_ = __real_0010000000000000;
  auVar37._0_8_ = __real_0010000000000000;
  auVar37._16_8_ = __real_0010000000000000;
  auVar37._24_8_ = __real_0010000000000000;
  auVar28 = vblendpd_avx(auVar118,auVar37,8);
  auVar30._0_8_ = auVar28._0_8_ & __real_7fffffffffffffff;
  auVar30._8_8_ = auVar28._8_8_ & __real_7fffffffffffffff;
  auVar30._16_8_ = auVar28._16_8_ & __real_7fffffffffffffff;
  auVar30._24_8_ = auVar28._24_8_ & __real_7fffffffffffffff;
  auVar78._8_8_ = __real_3e45798ee2308c3a;
  auVar78._0_8_ = __real_3e45798ee2308c3a;
  auVar78._16_8_ = __real_3e45798ee2308c3a;
  auVar78._24_8_ = __real_3e45798ee2308c3a;
  auVar28 = vcmppd_avx(auVar30,auVar78,6);
  auVar28 = vpackssdw_avx2(auVar28,ZEXT832(0) << 0x40);
  pauVar2 = (undefined1 (*) [16])(param_1 + 0x100 + lVar23 * 0x18);
  pauVar3 = (undefined1 (*) [16])(param_1 + 0x240 + lVar22);
  if ((((((((SUB321(auVar28 >> 0x1f,0) & 1) == 0 && (SUB321(auVar28 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar28 >> 0x5f,0) & 1) == 0) && SUB321(auVar28 >> 0x7f,0) == '\0') &&
        (SUB321(auVar28 >> 0x9f,0) & 1) == 0) && SUB321(auVar28 >> 0xbf,0) == '\0') &&
      (SUB321(auVar28 >> 0xdf,0) & 1) == 0) && -1 < auVar28[0x1f]) {
    auVar138 = vshufpd_avx(auVar25,auVar25,1);
    auVar28 = vblendpd_avx(auVar131,auVar37,0xc);
    auVar108._16_16_ = auVar130;
    auVar108._0_16_ = auVar138;
    auVar28 = vshufpd_avx(auVar108,auVar28,0xc);
    auVar109._0_8_ = auVar28._0_8_ & __real_7fffffffffffffff;
    auVar109._8_8_ = auVar28._8_8_ & __real_7fffffffffffffff;
    auVar109._16_8_ = auVar28._16_8_ & __real_7fffffffffffffff;
    auVar109._24_8_ = auVar28._24_8_ & __real_7fffffffffffffff;
    auVar28 = vcmppd_avx(auVar109,auVar78,6);
    auVar28 = vpackssdw_avx2(auVar28,ZEXT832(0) << 0x40);
    if ((((((((SUB321(auVar28 >> 0x1f,0) & 1) == 0 && (SUB321(auVar28 >> 0x3f,0) & 1) == 0) &&
            (SUB321(auVar28 >> 0x5f,0) & 1) == 0) && SUB321(auVar28 >> 0x7f,0) == '\0') &&
          (SUB321(auVar28 >> 0x9f,0) & 1) == 0) && SUB321(auVar28 >> 0xbf,0) == '\0') &&
        (SUB321(auVar28 >> 0xdf,0) & 1) == 0) && -1 < auVar28[0x1f]) {
      auVar28 = vperm2f128_avx(auVar118,auVar37,0x31);
      auVar28 = vblendpd_avx(auVar28,auVar131,6);
      auVar38._0_8_ = auVar28._0_8_ & __real_7fffffffffffffff;
      auVar38._8_8_ = auVar28._8_8_ & __real_7fffffffffffffff;
      auVar38._16_8_ = auVar28._16_8_ & __real_7fffffffffffffff;
      auVar38._24_8_ = auVar28._24_8_ & __real_7fffffffffffffff;
      auVar28 = vcmppd_avx(auVar38,auVar78,6);
      auVar28 = vpackssdw_avx2(auVar28,ZEXT832(0) << 0x40);
      if ((((((((SUB321(auVar28 >> 0x1f,0) & 1) == 0 && (SUB321(auVar28 >> 0x3f,0) & 1) == 0) &&
              (SUB321(auVar28 >> 0x5f,0) & 1) == 0) && SUB321(auVar28 >> 0x7f,0) == '\0') &&
            (SUB321(auVar28 >> 0x9f,0) & 1) == 0) && SUB321(auVar28 >> 0xbf,0) == '\0') &&
          (SUB321(auVar28 >> 0xdf,0) & 1) == 0) && -1 < auVar28[0x1f]) {
        auVar35 = ZEXT816(0) << 0x20;
        auVar123._8_8_ = 0;
        auVar123._0_8_ = __real_3ff0000000000000;
        auVar74 = ZEXT816(0);
        auVar26 = ZEXT816(0);
        auVar25 = ZEXT816(0) << 0x40;
        auVar33 = ZEXT816(0);
        auVar138 = ZEXT816(0) << 0x40;
        auVar116 = auVar123;
        auVar124 = auVar123;
        goto LAB_1409f1e17;
      }
    }
  }
  auVar28 = vperm2f128_avx(auVar118,auVar131,0x31);
  auVar60 = vunpcklpd_avx(auVar118,auVar28);
  auVar10._8_8_ = _UNK_150b54548;
  auVar10._0_8_ = ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
  auVar10._16_8_ = _UNK_150b54550;
  auVar10._24_8_ = _UNK_150b54558;
  auVar28 = vblendpd_avx(auVar131,auVar10,0xe);
  auVar138 = vshufpd_avx(auVar25,auVar25,1);
  auVar110._16_16_ = auVar130;
  auVar110._0_16_ = auVar138;
  auVar31 = ZEXT832(0) << 0x40;
  auVar37 = vshufpd_avx(auVar110,auVar31,4);
  auVar30 = vblendpd_avx(ZEXT1632(auVar138),auVar131,2);
  auVar126._0_8_ = auVar60._0_8_ * auVar28._0_8_ - auVar37._0_8_ * auVar30._0_8_;
  auVar126._8_8_ = auVar60._8_8_ * auVar28._8_8_ - auVar37._8_8_ * auVar30._8_8_;
  auVar126._16_8_ = auVar60._16_8_ * auVar28._16_8_ - auVar37._16_8_ * auVar30._16_8_;
  auVar126._24_8_ = auVar60._24_8_ * auVar28._24_8_ - auVar37._24_8_ * auVar30._24_8_;
  auVar47._8_8_ = auVar130._0_8_;
  auVar47._0_8_ = auVar130._0_8_;
  auVar47._16_8_ = auVar131._16_8_;
  auVar47._24_8_ = auVar131._16_8_;
  auVar28 = vblendpd_avx(ZEXT1632(CONCAT88(__real_3ff0000000000000,__real_3ff0000000000000)),auVar47
                         ,0xc);
  auVar30 = vblendpd_avx(ZEXT1632(auVar118._16_16_),auVar131,2);
  auVar37 = vblendpd_avx(auVar31,auVar118,0xc);
  auVar37 = vblendpd_avx(auVar37,ZEXT1632(auVar130) << 0x80,10);
  auVar140._0_8_ = auVar28._0_8_ * auVar30._0_8_ + auVar37._0_8_ * __real_8000000000000000;
  auVar140._8_8_ = auVar28._8_8_ * auVar30._8_8_ + auVar37._8_8_ * __real_8000000000000000;
  auVar140._16_8_ = auVar28._16_8_ * auVar30._16_8_ + auVar37._16_8_ * __real_8000000000000000;
  auVar140._24_8_ = auVar28._24_8_ * auVar30._24_8_ + auVar37._24_8_ * __real_8000000000000000;
  auVar138 = vunpcklpd_avx(auVar130,auVar25);
  auVar37 = vpermpd_avx2(ZEXT1632(auVar138),0x50);
  auVar48._16_16_ = auVar130;
  auVar48._0_16_ = auVar118._16_16_;
  auVar30 = vshufpd_avx(auVar48,auVar31,4);
  auVar60 = vpermpd_avx2(auVar118,0x55);
  auVar28 = vunpckhpd_avx(auVar131,auVar31);
  auVar28 = vblendpd_avx(auVar28,auVar118,4);
  auVar133._0_8_ = auVar30._0_8_ * auVar37._0_8_ - auVar60._0_8_ * auVar28._0_8_;
  auVar133._8_8_ = auVar30._8_8_ * auVar37._8_8_ - auVar60._8_8_ * auVar28._8_8_;
  auVar134._16_8_ = auVar30._16_8_ * auVar37._16_8_ - auVar60._16_8_ * auVar28._16_8_;
  auVar134._0_16_ = auVar133;
  auVar134._24_8_ = auVar30._24_8_ * auVar37._24_8_ - auVar60._24_8_ * auVar28._24_8_;
  auVar37 = vpermpd_avx2(auVar126,0xff);
  auVar60 = vpermpd_avx2(auVar126,0x55);
  auVar31 = vpermpd_avx2(auVar126,0xaa);
  auVar79._0_8_ = auVar37._0_8_ * auVar126._0_8_ + auVar31._0_8_ * auVar60._0_8_;
  auVar79._8_8_ = auVar37._8_8_ * auVar126._0_8_ + auVar31._8_8_ * auVar60._8_8_;
  auVar79._16_8_ = auVar37._16_8_ * auVar126._0_8_ + auVar31._16_8_ * auVar60._16_8_;
  auVar79._24_8_ = auVar37._24_8_ * auVar126._0_8_ + auVar31._24_8_ * auVar60._24_8_;
  auVar28 = vpermpd_avx2(auVar140,0xd8);
  auVar39._0_8_ = auVar133._0_8_ * auVar28._0_8_;
  auVar39._8_8_ = auVar133._8_8_ * auVar28._8_8_;
  auVar39._16_8_ = auVar134._16_8_ * auVar28._16_8_;
  auVar39._24_8_ = auVar134._24_8_ * auVar28._24_8_;
  auVar28 = vpermpd_avx2(auVar39,0x4e);
  auVar40._0_8_ = auVar28._0_8_ + auVar39._0_8_;
  auVar40._8_8_ = auVar28._8_8_ + auVar39._8_8_;
  auVar40._16_8_ = auVar28._16_8_ + auVar39._16_8_;
  auVar40._24_8_ = auVar28._24_8_ + auVar39._24_8_;
  auVar28 = vpermpd_avx2(auVar40,0x39);
  auVar41._0_8_ = auVar28._0_8_ + auVar40._0_8_;
  auVar41._8_8_ = auVar28._8_8_ + auVar40._8_8_;
  auVar41._16_8_ = auVar28._16_8_ + auVar40._16_8_;
  auVar41._24_8_ = auVar28._24_8_ + auVar40._24_8_;
  auVar28 = vsubpd_avx(auVar79,auVar41);
  auVar35 = ZEXT816(0) << 0x40;
  if ((auVar28._0_8_ != 0.0) || (NAN(auVar28._0_8_))) {
    auVar42._8_8_ = auVar130._0_8_;
    auVar42._0_8_ = auVar130._0_8_;
    auVar42._16_8_ = auVar130._0_8_;
    auVar42._24_8_ = auVar130._0_8_;
    auVar78 = vblendpd_avx(auVar118,auVar42,0xc);
    auVar29 = vpermpd_avx2(auVar118,0x60);
    auVar139 = vpermpd_avx2(auVar140,0x55);
    auVar61._0_8_ = auVar133._0_8_ * __real_3ff0000000000000;
    auVar61._8_8_ = auVar133._8_8_ * 0.0;
    auVar61._16_8_ = auVar134._16_8_ * 0.0;
    auVar61._24_8_ = auVar134._24_8_ * 0.0;
    auVar109 = vpermpd_avx2(auVar61,0x34);
    auVar38 = vpermpd_avx2(auVar134,100);
    auVar131 = vpermpd_avx2(auVar118,0xd4);
    auVar131 = vblendpd_avx(auVar131,auVar42,8);
    auVar10 = vpermpd_avx2(auVar140,0xcc);
    auVar108 = vpermpd_avx2(auVar118,0xaa);
    auVar119._0_16_ = auVar108._0_16_;
    auVar119._16_16_ = auVar130;
    auVar108 = vblendpd_avx(auVar119,ZEXT832(0) << 0x40,5);
    auVar118 = vpermpd_avx2(auVar140,0x66);
    auVar28 = vdivpd_avx(___ymm_3ff0000000000000bff0000000000000bff00000000000003ff0000000000000,
                         auVar28);
    auVar116._0_8_ =
         (auVar131._0_8_ * auVar37._0_8_ -
         (auVar30._0_8_ * auVar10._0_8_ + auVar118._0_8_ * auVar108._0_8_)) * auVar28._0_8_;
    auVar116._8_8_ =
         (auVar131._8_8_ * auVar37._8_8_ -
         (auVar30._8_8_ * auVar10._8_8_ + auVar118._8_8_ * auVar108._8_8_)) * auVar28._8_8_;
    dVar100 = auVar28._16_8_;
    auVar120._16_8_ =
         (auVar131._16_8_ * auVar37._16_8_ -
         (auVar30._16_8_ * auVar10._16_8_ + auVar118._16_8_ * auVar108._16_8_)) * dVar100;
    auVar120._0_16_ = auVar116;
    dVar101 = auVar28._24_8_;
    auVar120._24_8_ =
         (auVar131._24_8_ * auVar37._24_8_ -
         (auVar30._24_8_ * auVar10._24_8_ + auVar118._24_8_ * auVar108._24_8_)) * dVar101;
    auVar138 = vshufpd_avx(auVar116,auVar116,1);
    auVar25 = auVar120._16_16_;
    auVar123 = vshufpd_avx(auVar25,auVar25,1);
    auVar26._0_8_ =
         (auVar60._16_8_ * 0.0 - (-(auVar38._16_8_ * _DAT_150aa8e90) + auVar109._16_8_)) * dVar100;
    auVar26._8_8_ =
         (auVar60._24_8_ * 0.0 - (-(auVar38._24_8_ * _UNK_150aa8e98) + auVar109._24_8_)) * dVar101;
    auVar33 = vshufpd_avx(auVar26,auVar26,1);
    auVar66._0_8_ =
         (auVar31._0_8_ * 0.0 - (auVar78._0_8_ * auVar140._0_8_ - auVar29._0_8_ * auVar139._0_8_)) *
         auVar28._0_8_;
    auVar66._8_8_ =
         (auVar31._8_8_ * 0.0 - (auVar78._8_8_ * auVar140._0_8_ - auVar29._8_8_ * auVar139._8_8_)) *
         auVar28._8_8_;
    auVar68._16_8_ =
         (auVar31._16_8_ * 0.0 -
         (auVar78._16_8_ * auVar140._0_8_ - auVar29._16_8_ * auVar139._16_8_)) * dVar100;
    auVar68._0_16_ = auVar66;
    auVar68._24_8_ =
         (auVar31._24_8_ * 0.0 -
         (auVar78._24_8_ * auVar140._0_8_ - auVar29._24_8_ * auVar139._24_8_)) * dVar101;
    auVar35 = vshufpd_avx(auVar66,auVar66,1);
    auVar74 = vshufpd_avx(auVar68._16_16_,auVar68._16_16_,1);
    auVar34 = vshufpd_avx(auVar134._16_16_,auVar134._16_16_,1);
    auVar129 = vshufpd_avx(auVar133,auVar133,1);
    auVar130 = vshufpd_avx(auVar28._16_16_,auVar28._16_16_,1);
    auVar124._8_8_ = 0;
    auVar124._0_8_ =
         (auVar126._0_8_ - (auVar34._0_8_ * 0.0 + auVar129._0_8_ * 0.0)) * auVar130._0_8_;
  }
  else {
    auVar123._8_8_ = 0;
    auVar123._0_8_ = __real_3ff0000000000000;
    auVar74 = ZEXT816(0) << 0x40;
    auVar26 = ZEXT816(0) << 0x40;
    auVar25 = ZEXT816(0) << 0x40;
    auVar33 = ZEXT816(0) << 0x40;
    auVar138 = ZEXT816(0) << 0x40;
    auVar116 = auVar123;
    auVar124 = auVar123;
  }
LAB_1409f1e17:
  auVar35 = vunpcklpd_avx(auVar74,auVar35);
  auVar74 = vunpcklpd_avx(auVar25,auVar116);
  auVar138 = vunpcklpd_avx(auVar123,auVar138);
  dVar100 = param_4[1];
  dVar101 = *param_4;
  dVar113 = param_4[2];
  auVar27._0_8_ =
       param_5 * (auVar35._0_8_ * dVar113 + auVar138._0_8_ * dVar101 + auVar74._0_8_ * dVar100);
  auVar27._8_8_ =
       param_5 * (auVar35._8_8_ * dVar113 + auVar138._8_8_ * dVar101 + auVar74._8_8_ * dVar100);
  auVar32._16_8_ =
       param_5 * (auVar124._0_8_ * dVar113 + auVar33._0_8_ * dVar101 + auVar26._0_8_ * dVar100);
  auVar32._0_16_ = auVar27;
  auVar32._24_8_ =
       param_5 * (auVar124._8_8_ * dVar113 + auVar33._8_8_ * dVar101 + auVar26._8_8_ * dVar100);
  auVar49._16_8_ = uVar82;
  auVar49._0_16_ = *pauVar2;
  auVar49._24_8_ = 0;
  auVar28 = vsubpd_avx(auVar49,auVar46);
  auVar30 = vpermpd_avx2(auVar32,0xc9);
  auVar37 = vpermpd_avx2(auVar28,0xc9);
  auVar50._0_8_ = auVar27._0_8_ * auVar37._0_8_ - auVar30._0_8_ * auVar28._0_8_;
  auVar50._8_8_ = auVar27._8_8_ * auVar37._8_8_ - auVar30._8_8_ * auVar28._8_8_;
  auVar50._16_8_ = auVar32._16_8_ * auVar37._16_8_ - auVar30._16_8_ * auVar28._16_8_;
  auVar50._24_8_ = auVar32._24_8_ * auVar37._24_8_ - auVar30._24_8_ * auVar28._24_8_;
  auVar138._8_8_ = dVar99;
  auVar138._0_8_ = dVar99;
  auVar12._16_8_ = dVar99;
  auVar12._0_16_ = auVar138;
  auVar12._24_8_ = dVar99;
  auVar138 = vmovhpd_avx(auVar138,*(undefined8 *)(*pauVar3 + 8));
  auVar28 = vblendpd_avx(auVar12,ZEXT1632(auVar138),3);
  uVar9 = *(undefined8 *)pauVar3[1];
  auVar69._8_8_ = uVar9;
  auVar69._0_8_ = uVar9;
  auVar69._16_8_ = uVar9;
  auVar69._24_8_ = uVar9;
  auVar28 = vblendpd_avx(auVar28,auVar69,4);
  auVar37 = vpermpd_avx2(auVar50,0x55);
  auVar138 = vunpcklpd_avx(auVar137,auVar65);
  auVar60 = vpermpd_avx2(auVar50,0xaa);
  auVar33 = vunpcklpd_avx(auVar92,auVar52);
  auVar30 = vblendpd_avx(auVar96,ZEXT1632(auVar33),3);
  auVar70._8_8_ = uVar8;
  auVar70._0_8_ = uVar8;
  auVar70._16_8_ = uVar8;
  auVar70._24_8_ = uVar8;
  auVar30 = vblendpd_avx(auVar30,auVar70,4);
  auVar71._0_8_ =
       auVar30._0_8_ * auVar50._0_8_ +
       auVar28._0_8_ * auVar37._0_8_ + auVar60._0_8_ * auVar138._0_8_;
  auVar71._8_8_ =
       auVar30._8_8_ * auVar50._0_8_ +
       auVar28._8_8_ * auVar37._8_8_ + auVar60._8_8_ * auVar138._8_8_;
  auVar71._16_8_ =
       auVar30._16_8_ * auVar50._0_8_ +
       auVar28._16_8_ * auVar37._16_8_ + auVar60._16_8_ * *(double *)pauVar3[3];
  auVar71._24_8_ =
       auVar30._24_8_ * auVar50._0_8_ + auVar28._24_8_ * auVar37._24_8_ + auVar60._24_8_ * 0.0;
  auVar36._0_8_ = -(auVar27._0_8_ * dVar91) + auVar44._0_8_;
  auVar36._8_8_ = -(auVar27._8_8_ * dVar91) + auVar44._8_8_;
  auVar43._16_8_ = -(auVar32._16_8_ * dVar91) + dVar102;
  auVar43._0_16_ = auVar36;
  auVar43._24_8_ = -(auVar32._24_8_ * dVar91) + 0.0;
  pauVar2[7] = auVar36;
  uVar8 = vmovlpd_avx(auVar43._16_16_);
  *(undefined8 *)pauVar2[8] = uVar8;
  dVar21 = _UNK_150b54438;
  dVar20 = _UNK_150b54430;
  dVar19 = _UNK_150b54428;
  dVar18 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar17 = _UNK_150b54418;
  dVar16 = _UNK_150b54410;
  dVar15 = _UNK_150b54408;
  dVar14 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar13 = _UNK_15076c6f8;
  dVar128 = ___xmm_bff00000000000003ff0000000000000;
  lVar24 = lVar23 * 0x20;
  pdVar4 = (double *)(param_1 + 0x1a0 + lVar24);
  auVar53._8_8_ = 0;
  auVar53._0_8_ = *(ulonglong *)(param_1 + 0x1b8 + lVar24);
  auVar44 = vmovhpd_avx(auVar53,*(undefined8 *)(param_1 + 0x1b0 + lVar24));
  auVar54._8_8_ = 0;
  auVar54._0_8_ = *(ulonglong *)(param_1 + 0x1a8 + lVar24);
  auVar138 = vmovhpd_avx(auVar54,*(undefined8 *)(param_1 + 0x1a0 + lVar24));
  auVar28 = vpermpd_avx2(auVar71,0x55);
  pdVar5 = (double *)(param_1 + 0x1b0 + lVar24);
  pdVar6 = (double *)(param_1 + 0x1a0 + lVar24);
  auVar30 = vpermpd_avx2(auVar71,0xaa);
  dVar91 = (___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
            auVar30._0_8_ * auVar138._0_8_ +
           ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
           *pdVar5 * auVar28._0_8_ +
           *pdVar4 * 0.0 + auVar71._0_8_ * auVar44._0_8_ * ___xmm_bff00000000000003ff0000000000000)
           * __real_3fe0000000000000 + *pdVar4;
  dVar99 = (_UNK_150b54428 * auVar30._8_8_ * auVar138._8_8_ +
           _UNK_150b54408 * pdVar5[1] * auVar28._8_8_ +
           pdVar4[1] * 0.0 + auVar71._0_8_ * auVar44._8_8_ * _UNK_15076c6f8) *
           __real_3fe0000000000000 + pdVar4[1];
  dVar100 = (_UNK_150b54430 * auVar30._16_8_ * auVar44._0_8_ +
            _UNK_150b54410 * *pdVar6 * auVar28._16_8_ +
            pdVar4[2] * 0.0 +
            auVar71._0_8_ * auVar138._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
            __real_3fe0000000000000 + pdVar4[2];
  dVar101 = (_UNK_150b54438 * auVar30._24_8_ * auVar44._8_8_ +
            _UNK_150b54418 * pdVar6[1] * auVar28._24_8_ +
            pdVar4[3] * 0.0 + auVar71._0_8_ * auVar138._8_8_ * _UNK_15076c6f8) *
            __real_3fe0000000000000 + pdVar4[3];
  auVar75._0_8_ = dVar91 * dVar91 + dVar100 * dVar100;
  auVar75._8_8_ = dVar99 * dVar99 + dVar101 * dVar101;
  auVar44 = vshufpd_avx(auVar75,auVar75,1);
  dVar102 = auVar75._0_8_ + auVar44._0_8_;
  auVar83._8_8_ = 0;
  auVar83._0_8_ = __real_3e45798ee2308c3a;
  auVar76._8_8_ = 0;
  auVar76._0_8_ = dVar102;
  auVar44 = vcmpsd_avx(auVar83,auVar76,6);
  uVar82 = ~auVar44._0_8_ & __real_ffffffffffffffff;
  auVar77._8_8_ = 0;
  auVar77._0_8_ = __real_3ff0000000000000;
  dVar102 = __real_3ff0000000000000 / SQRT(dVar102);
  uVar88 = ~uVar82 & _UNK_150b54548;
  uVar89 = ~uVar82 & _UNK_150b54550;
  uVar90 = ~uVar82 & _UNK_150b54558;
  puVar7 = (ulonglong *)(param_1 + 0x1a0 + lVar24);
  *puVar7 = (ulonglong)(dVar102 * dVar91) & uVar82 |
            ~uVar82 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
  puVar7[1] = (ulonglong)(dVar102 * dVar99) & uVar82 | uVar88;
  puVar7 = (ulonglong *)(param_1 + 0x1b0 + lVar24);
  *puVar7 = (ulonglong)(dVar102 * dVar100) & uVar82 | uVar89;
  puVar7[1] = (ulonglong)(dVar102 * dVar101) & uVar82 | uVar90;
  auVar84._0_8_ =
       *(double *)(param_1 + 0x1c0) * *(double *)(param_1 + 0x1a0) +
       *(double *)(param_1 + 0x1d0) * *(double *)(param_1 + 0x1b0);
  auVar84._8_8_ =
       *(double *)(param_1 + 0x1c8) * *(double *)(param_1 + 0x1a8) +
       *(double *)(param_1 + 0x1d8) * *(double *)(param_1 + 0x1b8);
  auVar44 = vshufpd_avx(auVar84,auVar84,1);
  auVar93._8_8_ = 0;
  auVar93._0_8_ = auVar84._0_8_ + auVar44._0_8_;
  auVar44 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar93,2);
  auVar94._8_8_ = 0;
  auVar94._0_8_ = __real_bff0000000000000;
  auVar44 = vblendvpd_avx(auVar94,auVar77,auVar44);
  dVar102 = auVar44._0_8_;
  *(double *)(param_1 + 0x1c0) = *(double *)(param_1 + 0x1c0) * dVar102;
  *(double *)(param_1 + 0x1c8) = *(double *)(param_1 + 0x1c8) * dVar102;
  *(double *)(param_1 + 0x1d0) = *(double *)(param_1 + 0x1d0) * dVar102;
  *(double *)(param_1 + 0x1d8) = *(double *)(param_1 + 0x1d8) * dVar102;
  lVar22 = lVar23 * 0x60;
  auVar103._8_8_ = 0;
  auVar103._0_8_ = *(ulonglong *)(param_1 + 0x20 + lVar22);
  uVar8 = *(undefined8 *)(param_1 + 0x38 + lVar22);
  auVar107._8_8_ = uVar8;
  auVar107._0_8_ = uVar8;
  auVar111._16_8_ = uVar8;
  auVar111._0_16_ = auVar107;
  auVar111._24_8_ = uVar8;
  auVar74 = vunpcklpd_avx(auVar103,auVar107);
  auVar44 = *(undefined1 (*) [16])(param_1 + 0x20 + lVar22);
  auVar138 = *(undefined1 (*) [16])(param_1 + 0x28 + lVar22);
  dVar102 = *(double *)(param_1 + 0x1b0 + lVar24);
  auVar33 = *(undefined1 (*) [16])(param_1 + 0x1a0 + lVar24);
  auVar35 = *(undefined1 (*) [16])(param_1 + 0x1a8 + lVar24);
  auVar127._16_8_ = dVar102;
  auVar127._0_16_ = auVar33;
  auVar127._24_8_ = 0;
  dVar91 = *(double *)(param_1 + 0x1b8 + lVar24);
  auVar132._8_8_ = dVar91;
  auVar132._0_8_ = dVar91;
  auVar132._16_8_ = dVar91;
  auVar132._24_8_ = dVar91;
  dVar99 = *(double *)(param_1 + 0x1a0 + lVar24);
  auVar135._16_8_ = dVar99;
  auVar135._0_16_ = auVar35;
  auVar135._24_8_ = 0;
  dVar100 = *(double *)(param_1 + 0x30 + lVar22);
  auVar121._16_8_ = dVar100;
  auVar121._0_16_ = auVar44;
  auVar121._24_8_ = 0;
  auVar28 = vblendpd_avx(auVar135,auVar132,8);
  auVar30 = vblendpd_avx(auVar121,auVar111,8);
  auVar37 = vblendpd_avx(auVar127,auVar132,8);
  dVar101 = auVar138._0_8_ * auVar37._0_8_ - auVar30._0_8_ * auVar28._0_8_;
  dVar113 = auVar138._8_8_ * auVar37._8_8_ - auVar30._8_8_ * auVar28._8_8_;
  dVar114 = auVar74._0_8_ * auVar37._16_8_ - auVar30._16_8_ * auVar28._16_8_;
  dVar115 = auVar74._8_8_ * auVar37._24_8_ - auVar30._24_8_ * auVar28._24_8_;
  auVar105._0_8_ = dVar101 + dVar101;
  auVar105._8_8_ = dVar113 + dVar113;
  auVar105._16_8_ = dVar114 + dVar114;
  auVar105._24_8_ = dVar115 + dVar115;
  auVar28 = vpermpd_avx2(auVar105,0xc9);
  auVar30 = vpermpd_avx2(auVar105,0xd2);
  auVar112._0_8_ = auVar33._0_8_ * auVar30._0_8_ - auVar35._0_8_ * auVar28._0_8_;
  auVar112._8_8_ = auVar33._8_8_ * auVar30._8_8_ - auVar35._8_8_ * auVar28._8_8_;
  auVar112._16_8_ = dVar102 * auVar30._16_8_ - dVar99 * auVar28._16_8_;
  auVar112._24_8_ = auVar30._24_8_ * 0.0 - auVar28._24_8_ * 0.0;
  auVar30 = vpermpd_avx2(auVar112,0xc9);
  auVar104._0_8_ = *(double *)pauVar2[7] + auVar28._0_8_ * dVar91 + auVar44._0_8_ + auVar30._0_8_;
  auVar104._8_8_ =
       *(double *)(pauVar2[7] + 8) + auVar28._8_8_ * dVar91 + auVar44._8_8_ + auVar30._8_8_;
  auVar106._16_8_ = *(double *)pauVar2[8] + auVar28._16_8_ * dVar91 + dVar100 + auVar30._16_8_;
  auVar106._0_16_ = auVar104;
  auVar106._24_8_ = auVar28._24_8_ * dVar91 + 0.0 + auVar30._24_8_ + 0.0;
  *pauVar2 = auVar104;
  uVar8 = vmovlpd_avx(auVar106._16_16_);
  *(undefined8 *)pauVar2[1] = uVar8;
  dVar102 = *(double *)(param_1 + 0x1b8 + lVar24);
  dVar91 = *(double *)(param_1 + 0x1a0 + lVar24);
  auVar117._8_8_ = 0;
  auVar117._0_8_ = *(ulonglong *)(param_1 + 0x18 + lVar22);
  auVar44 = vmovhpd_avx(auVar117,*(undefined8 *)(param_1 + 0x10 + lVar22));
  auVar125._8_8_ = 0;
  auVar125._0_8_ = *(ulonglong *)(param_1 + 8 + lVar22);
  auVar138 = vmovhpd_avx(auVar125,*(undefined8 *)(param_1 + lVar22));
  pauVar1 = (undefined1 (*) [24])(param_1 + lVar22);
  dVar113 = *(double *)(*pauVar1 + 8);
  auVar11 = *pauVar1;
  dVar101 = *(double *)pauVar1[1];
  dVar99 = *(double *)(param_1 + 0x1a8 + lVar24);
  pdVar4 = (double *)(param_1 + 0x10 + lVar22);
  dVar114 = pdVar4[1];
  dVar115 = *(double *)(param_1 + lVar22);
  dVar122 = ((double *)(param_1 + lVar22))[1];
  dVar100 = *(double *)(param_1 + 0x1b0 + lVar24);
  pdVar5 = (double *)(param_1 + 0x130 + lVar24);
  *pdVar5 = dVar18 * auVar138._0_8_ * dVar100 +
            dVar14 * *pdVar4 * dVar99 +
            dVar102 * *(double *)*pauVar1 + dVar91 * auVar44._0_8_ * dVar128;
  pdVar5[1] = dVar19 * auVar138._8_8_ * dVar100 +
              dVar15 * dVar114 * dVar99 + dVar102 * dVar113 + dVar91 * auVar44._8_8_ * dVar13;
  pdVar5[2] = dVar20 * auVar44._0_8_ * dVar100 +
              dVar16 * dVar115 * dVar99 +
              dVar102 * auVar11._16_8_ + dVar91 * auVar138._0_8_ * dVar128;
  pdVar5[3] = dVar21 * auVar44._8_8_ * dVar100 +
              dVar17 * dVar122 * dVar99 + dVar102 * dVar101 + dVar91 * auVar138._8_8_ * dVar13;
  auVar55._0_8_ =
       *(double *)(param_1 + 0x150) * *(double *)(param_1 + 0x130) +
       *(double *)(param_1 + 0x160) * *(double *)(param_1 + 0x140);
  auVar55._8_8_ =
       *(double *)(param_1 + 0x158) * *(double *)(param_1 + 0x138) +
       *(double *)(param_1 + 0x168) * *(double *)(param_1 + 0x148);
  auVar44 = vshufpd_avx(auVar55,auVar55,1);
  auVar56._8_8_ = 0;
  auVar56._0_8_ = auVar55._0_8_ + auVar44._0_8_;
  auVar44 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar56,2);
  auVar44 = vblendvpd_avx(auVar94,auVar77,auVar44);
  dVar102 = auVar44._0_8_;
  *(double *)(param_1 + 0x150) = *(double *)(param_1 + 0x150) * dVar102;
  *(double *)(param_1 + 0x158) = *(double *)(param_1 + 0x158) * dVar102;
  *(double *)(param_1 + 0x160) = *(double *)(param_1 + 0x160) * dVar102;
  *(double *)(param_1 + 0x168) = *(double *)(param_1 + 0x168) * dVar102;
  dVar102 = *(double *)(param_1 + 0x1a8 + lVar24);
  auVar44._8_8_ = dVar102;
  auVar44._0_8_ = dVar102;
  dVar91 = *(double *)(param_1 + 0x1a0 + lVar24);
  auVar57._8_8_ = dVar91;
  auVar57._0_8_ = dVar91;
  auVar138 = vunpcklpd_avx(auVar57,auVar44);
  auVar44 = *(undefined1 (*) [16])(param_1 + 0x1b0 + lVar24);
  dVar101 = auVar138._0_8_ + auVar138._0_8_;
  dVar113 = auVar138._8_8_ + auVar138._8_8_;
  dVar99 = auVar44._0_8_;
  dVar100 = auVar44._8_8_;
  dVar114 = dVar99 + dVar99;
  dVar100 = dVar100 + dVar100;
  auVar85._0_8_ = dVar91 * dVar101;
  auVar85._8_8_ = dVar91 * dVar113;
  auVar85._16_8_ = dVar91 * dVar114;
  auVar85._24_8_ = dVar91 * dVar100;
  auVar95._0_8_ = dVar102 * dVar101;
  auVar95._8_8_ = dVar102 * dVar113;
  auVar97._16_8_ = dVar102 * dVar114;
  auVar97._0_16_ = auVar95;
  auVar97._24_8_ = dVar102 * dVar100;
  dVar102 = *(double *)(param_1 + 0x1b8 + lVar24);
  dVar91 = (dVar99 + dVar99) * *(double *)(param_1 + 0x1b0 + lVar24);
  auVar62._0_8_ = dVar101 * dVar102;
  auVar62._8_8_ = dVar113 * dVar102;
  auVar62._16_8_ = dVar114 * dVar102;
  auVar62._24_8_ = dVar100 * dVar102;
  auVar28 = vperm2f128_avx(auVar97,auVar85,0x21);
  auVar28 = vshufpd_avx(auVar28,ZEXT1632(auVar85._16_16_),4);
  auVar45._0_8_ = auVar62._0_8_ + auVar28._0_8_;
  auVar45._8_8_ = auVar62._8_8_ + auVar28._8_8_;
  auVar51._16_8_ = auVar62._16_8_ + auVar28._16_8_;
  auVar51._0_16_ = auVar45;
  auVar51._24_8_ = auVar62._24_8_ + auVar28._24_8_;
  auVar37 = vsubpd_avx(auVar28,auVar62);
  auVar44 = vshufpd_avx(auVar95,auVar95,1);
  auVar86._8_8_ = auVar85._0_8_;
  auVar86._0_8_ = auVar85._0_8_;
  auVar86._16_8_ = auVar85._0_8_;
  auVar86._24_8_ = auVar85._0_8_;
  auVar28 = vblendpd_avx(auVar86,ZEXT1632(auVar44),1);
  auVar30 = vpermpd_avx2(auVar97,0x55);
  auVar30 = vblendpd_avx(ZEXT1632(CONCAT88(dVar91,dVar91)),auVar30,0xc);
  auVar72._0_8_ = auVar28._0_8_ + auVar30._0_8_;
  auVar72._8_8_ = auVar28._8_8_ + auVar30._8_8_;
  auVar72._16_8_ = auVar28._16_8_ + auVar30._16_8_;
  auVar72._24_8_ = auVar28._24_8_ + auVar30._24_8_;
  auVar80._8_8_ = __real_3ff0000000000000;
  auVar80._0_8_ = __real_3ff0000000000000;
  auVar80._16_8_ = __real_3ff0000000000000;
  auVar80._24_8_ = __real_3ff0000000000000;
  auVar30 = vsubpd_avx(auVar80,auVar72);
  dVar99 = auVar30._0_8_;
  dVar102 = *(double *)(param_1 + 0xc0 + lVar23 * 0x18);
  dVar91 = *(double *)(param_1 + 0xd0 + lVar23 * 0x18);
  auVar28 = vpermpd_avx2(auVar37,0xaa);
  auVar44 = vmovhpd_avx(ZEXT816(0) << 0x40,*(undefined8 *)(param_1 + 200 + lVar23 * 0x18));
  dVar100 = auVar44._0_8_;
  dVar101 = auVar44._8_8_;
  auVar60 = vpermpd_avx2(auVar51,0x55);
  auVar81._0_8_ = auVar60._0_8_ * 0.0 + dVar100 * auVar28._0_8_ + dVar102 * dVar99;
  auVar81._8_8_ = auVar60._8_8_ * 0.0 + dVar101 * auVar28._8_8_ + dVar99 * 0.0;
  auVar81._16_8_ = dVar91 * auVar60._16_8_ + auVar28._16_8_ * 0.0 + dVar99 * 0.0;
  auVar81._24_8_ = auVar60._24_8_ * 0.0 + auVar28._24_8_ * 0.0 + dVar99 * 0.0;
  auVar28 = vpermpd_avx2(auVar51,0xaa);
  auVar60 = vpermpd_avx2(auVar30,0x55);
  dVar99 = auVar37._0_8_;
  auVar98._0_8_ = dVar99 * 0.0 + dVar102 * auVar28._0_8_ + dVar100 * auVar60._0_8_;
  auVar98._8_8_ = dVar99 * 0.0 + auVar28._8_8_ * 0.0 + dVar101 * auVar60._8_8_;
  auVar98._16_8_ = dVar91 * dVar99 + auVar28._16_8_ * 0.0 + auVar60._16_8_ * 0.0;
  auVar98._24_8_ = dVar99 * 0.0 + auVar28._24_8_ * 0.0 + auVar60._24_8_ * 0.0;
  auVar28 = vpermpd_avx2(auVar37,0x55);
  auVar60 = vpermpd_avx2(auVar30,0xaa);
  auVar87._0_8_ = auVar60._0_8_ * 0.0 + auVar28._0_8_ * dVar102 + dVar100 * auVar45._0_8_;
  auVar87._8_8_ = auVar60._8_8_ * 0.0 + auVar28._8_8_ * 0.0 + dVar101 * auVar45._0_8_;
  auVar87._16_8_ = dVar91 * auVar60._16_8_ + auVar28._16_8_ * 0.0 + auVar45._0_8_ * 0.0;
  auVar87._24_8_ = auVar60._24_8_ * 0.0 + auVar28._24_8_ * 0.0 + auVar45._0_8_ * 0.0;
  auVar44 = vunpcklpd_avx(auVar30._0_16_,auVar51._16_16_);
  auVar28 = vblendpd_avx(ZEXT1632(auVar44),auVar28,0xc);
  auVar60 = vpermpd_avx2(auVar81,0x55);
  auVar44 = vblendpd_avx(auVar30._0_16_,auVar37._16_16_,1);
  dVar122 = auVar44._0_8_;
  dVar128 = auVar44._8_8_;
  dVar101 = auVar28._0_8_;
  dVar113 = auVar28._8_8_;
  dVar114 = auVar28._16_8_;
  dVar115 = auVar28._24_8_;
  auVar31 = vpermpd_avx2(auVar98,0x55);
  auVar78 = vpermpd_avx2(auVar87,0x55);
  auVar44 = vshufpd_avx(auVar45,auVar37._0_16_,1);
  auVar28 = vblendpd_avx(auVar30,ZEXT1632(auVar44),3);
  auVar30 = vpermpd_avx2(auVar81,0xaa);
  dVar102 = auVar28._0_8_;
  auVar58._0_8_ = dVar102 * auVar30._0_8_ + dVar101 * auVar81._0_8_ + dVar122 * auVar60._0_8_;
  dVar91 = auVar28._8_8_;
  auVar58._8_8_ = dVar91 * auVar30._8_8_ + dVar113 * auVar81._0_8_ + dVar128 * auVar60._8_8_;
  dVar99 = auVar28._16_8_;
  auVar63._16_8_ =
       dVar99 * auVar30._16_8_ + dVar114 * auVar81._0_8_ + auVar45._0_8_ * auVar60._16_8_;
  auVar63._0_16_ = auVar58;
  dVar100 = auVar28._24_8_;
  auVar63._24_8_ =
       dVar100 * auVar30._24_8_ + dVar115 * auVar81._0_8_ + auVar45._8_8_ * auVar60._24_8_;
  auVar28 = vpermpd_avx2(auVar98,0xaa);
  *pauVar3 = auVar58;
  auVar67._0_8_ = dVar102 * auVar28._0_8_ + dVar101 * auVar98._0_8_ + dVar122 * auVar31._0_8_;
  auVar67._8_8_ = dVar91 * auVar28._8_8_ + dVar113 * auVar98._0_8_ + dVar128 * auVar31._8_8_;
  auVar73._16_8_ =
       dVar99 * auVar28._16_8_ + dVar114 * auVar98._0_8_ + auVar45._0_8_ * auVar31._16_8_;
  auVar73._0_16_ = auVar67;
  auVar73._24_8_ =
       dVar100 * auVar28._24_8_ + dVar115 * auVar98._0_8_ + auVar45._8_8_ * auVar31._24_8_;
  uVar8 = vmovlpd_avx(auVar63._16_16_);
  *(undefined8 *)pauVar3[1] = uVar8;
  auVar28 = vpermpd_avx2(auVar87,0xaa);
  *(undefined8 *)(pauVar3[1] + 8) = 0;
  pauVar3[2] = auVar67;
  auVar59._0_8_ = dVar102 * auVar28._0_8_ + dVar101 * auVar87._0_8_ + dVar122 * auVar78._0_8_;
  auVar59._8_8_ = dVar91 * auVar28._8_8_ + dVar113 * auVar87._0_8_ + dVar128 * auVar78._8_8_;
  auVar64._16_8_ =
       dVar99 * auVar28._16_8_ + dVar114 * auVar87._0_8_ + auVar45._0_8_ * auVar78._16_8_;
  auVar64._0_16_ = auVar59;
  auVar64._24_8_ =
       dVar100 * auVar28._24_8_ + dVar115 * auVar87._0_8_ + auVar45._8_8_ * auVar78._24_8_;
  uVar8 = vmovlpd_avx(auVar73._16_16_);
  *(undefined8 *)pauVar3[3] = uVar8;
  *(undefined8 *)(pauVar3[3] + 8) = 0;
  pauVar3[4] = auVar59;
  uVar8 = vmovlpd_avx(auVar64._16_16_);
  *(undefined8 *)pauVar3[5] = uVar8;
  *(undefined8 *)(pauVar3[5] + 8) = 0;
  *(undefined8 *)pauVar3[6] = 0;
  *(undefined8 *)(pauVar3[6] + 8) = 0;
  *(undefined8 *)pauVar3[7] = 0;
  *(undefined8 *)(pauVar3[7] + 8) = 0x3ff0000000000000;
  if (param_2 == 0) {
    auVar44 = vshufpd_avx(auVar27,auVar27,1);
  }
  else {
    auVar27._0_8_ = (double)((ulonglong)auVar27._0_8_ ^ (ulonglong)__real_8000000000000000);
    auVar27._8_8_ = (double)((ulonglong)auVar27._8_8_ ^ (ulonglong)__real_8000000000000000);
    auVar32._16_8_ = (double)((ulonglong)auVar32._16_8_ ^ (ulonglong)__real_8000000000000000);
    auVar44 = vshufps_avx(auVar27,auVar27,0x4e);
  }
  auVar44 = vunpcklpd_avx(auVar27,auVar44);
  *(double *)(param_1 + 0x420) = auVar44._0_8_ + *(double *)(param_1 + 0x420);
  *(double *)(param_1 + 0x428) = auVar44._8_8_ + *(double *)(param_1 + 0x428);
  *(double *)(param_1 + 0x430) = auVar32._16_8_ + *(double *)(param_1 + 0x430);
  return;
}

// ApplyPointPositionConstraintDD_avx2 @ 1409f2550

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPointPositionConstraintDD_avx2(undefined1 (*param_1) [24],double *param_2,double param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [24];
  undefined1 auVar5 [24];
  undefined1 auVar6 [32];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [24];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar13;
  undefined1 auVar20 [16];
  undefined1 auVar14 [16];
  double dVar33;
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar26 [32];
  double dVar32;
  double dVar34;
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  ulonglong uVar35;
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
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  double dVar69;
  double dVar70;
  double dVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  double dVar97;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  double dVar98;
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  double dVar99;
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar95 [32];
  double dVar100;
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  double dVar113;
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  double dVar114;
  undefined1 auVar112 [32];
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
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  undefined1 auVar130 [32];
  undefined1 auVar132 [32];
  double dVar134;
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  double dVar147;
  undefined1 auVar143 [32];
  undefined1 auVar145 [32];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  double dVar148;
  double dVar158;
  undefined1 auVar152 [32];
  undefined1 auVar153 [32];
  undefined1 auVar154 [32];
  double dVar157;
  undefined1 auVar155 [32];
  undefined1 auVar156 [32];
  double dVar159;
  undefined1 auVar160 [16];
  double dVar163;
  undefined1 auVar161 [16];
  double dVar164;
  undefined1 auVar162 [32];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar170 [32];
  undefined1 auVar171 [32];
  undefined1 auVar172 [32];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [32];
  undefined1 auVar180 [32];
  undefined1 auVar182 [32];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar192 [32];
  undefined1 auVar193 [16];
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar198 [32];
  undefined1 auVar199 [16];
  undefined1 auVar200 [16];
  undefined1 auVar201 [16];
  double dVar204;
  undefined1 auVar205 [16];
  double dVar207;
  double dVar208;
  undefined1 auVar25 [32];
  undefined1 auVar31 [32];
  undefined1 auVar49 [32];
  undefined1 auVar55 [32];
  undefined1 auVar62 [32];
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar92 [32];
  undefined1 auVar96 [32];
  undefined1 auVar128 [32];
  undefined1 auVar129 [32];
  undefined1 auVar131 [32];
  undefined1 auVar133 [32];
  undefined1 auVar141 [32];
  undefined1 auVar142 [32];
  undefined1 auVar144 [32];
  undefined1 auVar146 [32];
  undefined1 auVar169 [32];
  undefined1 auVar173 [32];
  undefined1 auVar174 [32];
  undefined1 auVar179 [32];
  undefined1 auVar181 [32];
  undefined1 auVar186 [32];
  undefined1 auVar187 [32];
  undefined1 auVar191 [32];
  undefined1 auVar196 [32];
  undefined1 auVar197 [32];
  undefined1 auVar202 [32];
  undefined1 auVar203 [32];
  undefined1 auVar206 [32];
  
  auVar36._8_8_ = 0;
  auVar36._0_8_ = *(ulonglong *)(param_1[0xb] + 8);
  auVar21._24_8_ = 0;
  auVar21._0_24_ = *(undefined1 (*) [24])(param_1[10] + 0x10);
  auVar115._8_8_ = 0;
  auVar115._0_8_ = *(ulonglong *)param_1[0x10];
  auVar104._24_8_ = 0;
  auVar104._0_24_ = *(undefined1 (*) [24])(param_1[0xf] + 8);
  auVar21 = vsubpd_avx(auVar21,auVar104);
  auVar14 = auVar21._0_16_;
  auVar16 = vshufpd_avx(auVar14,auVar14,1);
  auVar36 = vsubpd_avx(auVar36,auVar115);
  dVar100 = auVar36._0_8_;
  auVar160._0_8_ = (ulonglong)dVar100 ^ (ulonglong)__real_8000000000000000;
  auVar160._8_8_ = auVar36._8_8_ ^ (ulonglong)__real_8000000000000000;
  auVar116._0_8_ = (double)(auVar16._0_8_ ^ (ulonglong)__real_8000000000000000);
  auVar116._8_8_ = (double)(auVar16._8_8_ ^ (ulonglong)__real_8000000000000000);
  auVar22._0_8_ = auVar21._0_8_;
  auVar37._0_8_ = (double)((ulonglong)auVar22._0_8_ ^ (ulonglong)__real_8000000000000000);
  dVar148 = auVar21._8_8_;
  auVar37._8_8_ = (ulonglong)dVar148 ^ (ulonglong)__real_8000000000000000;
  auVar107 = vpermpd_avx2(auVar21,0xaa);
  dVar13 = *(double *)(param_1[0x19] + 8);
  auVar165._8_8_ = dVar13;
  auVar165._0_8_ = dVar13;
  auVar169._16_8_ = dVar13;
  auVar169._0_16_ = auVar165;
  auVar169._24_8_ = dVar13;
  uVar1 = *(undefined8 *)(param_1[0x19] + 0x10);
  auVar135._8_8_ = uVar1;
  auVar135._0_8_ = uVar1;
  auVar141._16_8_ = uVar1;
  auVar141._0_16_ = auVar135;
  auVar141._24_8_ = uVar1;
  auVar39 = vunpcklpd_avx(auVar135,auVar165);
  auVar170 = vpermpd_avx2(auVar21,0x55);
  uVar1 = *(undefined8 *)(param_1[0x1a] + 0x10);
  auVar178._8_8_ = uVar1;
  auVar178._0_8_ = uVar1;
  auVar178._16_8_ = uVar1;
  auVar178._24_8_ = uVar1;
  uVar1 = *(undefined8 *)param_1[0x1b];
  auVar183._8_8_ = uVar1;
  auVar183._0_8_ = uVar1;
  auVar186._16_8_ = uVar1;
  auVar186._0_16_ = auVar183;
  auVar186._24_8_ = uVar1;
  auVar21 = vblendpd_avx(auVar178,auVar186,1);
  auVar115 = vunpcklpd_avx(auVar160,auVar36);
  auVar50 = vblendpd_avx(auVar186,auVar141,4);
  auVar188._8_8_ = *(undefined8 *)(param_1[0x1b] + 8);
  auVar188._0_8_ = *(undefined8 *)(param_1[0x1b] + 8);
  auVar24 = vblendpd_avx(ZEXT1632(auVar188),auVar186,4);
  auVar16 = vshufpd_avx(auVar14,auVar37,1);
  dVar69 = *(double *)param_1[0x18];
  auVar25 = vblendpd_avx(auVar178,auVar169,4);
  auVar135 = vunpcklpd_avx(auVar36,auVar116);
  auVar49 = vblendpd_avx(auVar169,auVar178,1);
  auVar36 = vunpcklpd_avx(auVar188,auVar183);
  auVar83 = vblendpd_avx(ZEXT1632(auVar36),auVar141,4);
  auVar22._8_8_ = auVar22._0_8_;
  auVar22._16_8_ = auVar22._0_8_;
  auVar22._24_8_ = auVar22._0_8_;
  auVar104 = vblendpd_avx(auVar22,ZEXT1632(auVar37),1);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = *(ulonglong *)(param_1[0xc] + 8);
  auVar23._24_8_ = 0;
  auVar23._0_24_ = *(undefined1 (*) [24])(param_1[0xb] + 0x10);
  auVar117._8_8_ = 0;
  auVar117._0_8_ = *(ulonglong *)param_1[0x11];
  auVar105._24_8_ = 0;
  auVar105._0_24_ = *(undefined1 (*) [24])(param_1[0x10] + 8);
  auVar141 = vsubpd_avx(auVar23,auVar105);
  auVar160 = auVar141._0_16_;
  auVar36 = vshufpd_avx(auVar160,auVar160,1);
  auVar14 = vsubpd_avx(auVar14,auVar117);
  uVar1 = *(undefined8 *)param_1[0x1f];
  auVar199._8_8_ = uVar1;
  auVar199._0_8_ = uVar1;
  auVar202._16_8_ = uVar1;
  auVar202._0_16_ = auVar199;
  auVar202._24_8_ = uVar1;
  dVar97 = *(double *)(param_1[0x1e] + 0x10);
  auVar205._8_8_ = dVar97;
  auVar205._0_8_ = dVar97;
  auVar206._16_8_ = dVar97;
  auVar206._0_16_ = auVar205;
  auVar206._24_8_ = dVar97;
  uVar1 = *(undefined8 *)(param_1[0x20] + 8);
  auVar194._8_8_ = uVar1;
  auVar194._0_8_ = uVar1;
  auVar196._16_8_ = uVar1;
  auVar196._0_16_ = auVar194;
  auVar196._24_8_ = uVar1;
  uVar1 = *(undefined8 *)(param_1[0x20] + 0x10);
  auVar72._8_8_ = uVar1;
  auVar72._0_8_ = uVar1;
  auVar178 = vpermpd_avx2(auVar141,0xaa);
  auVar117 = vunpcklpd_avx(auVar199,auVar205);
  auVar179 = vpermpd_avx2(auVar141,0x55);
  uVar2 = *(undefined8 *)param_1[0x20];
  auVar136._8_8_ = uVar2;
  auVar136._0_8_ = uVar2;
  auVar142._16_8_ = uVar2;
  auVar142._0_16_ = auVar136;
  auVar142._24_8_ = uVar2;
  auVar23 = vblendpd_avx(auVar142,auVar196,1);
  auVar105 = vblendpd_avx(auVar196,auVar202,4);
  auVar126 = vblendpd_avx(ZEXT1632(auVar72),auVar196,4);
  dVar114 = auVar14._0_8_;
  auVar38._0_8_ = (ulonglong)dVar114 ^ (ulonglong)__real_8000000000000000;
  auVar38._8_8_ = auVar14._8_8_ ^ (ulonglong)__real_8000000000000000;
  auVar118._0_8_ = (double)(auVar36._0_8_ ^ (ulonglong)__real_8000000000000000);
  auVar118._8_8_ = (double)(auVar36._8_8_ ^ (ulonglong)__real_8000000000000000);
  dVar71 = auVar141._0_8_;
  auVar15._0_8_ = (double)((ulonglong)dVar71 ^ (ulonglong)__real_8000000000000000);
  dVar113 = auVar141._8_8_;
  auVar15._8_8_ = (ulonglong)dVar113 ^ (ulonglong)__real_8000000000000000;
  auVar38 = vunpcklpd_avx(auVar38,auVar14);
  auVar36 = vshufpd_avx(auVar160,auVar15,1);
  dVar70 = *(double *)(param_1[0x1d] + 8);
  auVar141 = vblendpd_avx(auVar142,auVar206,4);
  auVar72 = vunpcklpd_avx(auVar72,auVar194);
  auVar152 = vblendpd_avx(ZEXT1632(auVar72),auVar202,4);
  auVar169 = vblendpd_avx(auVar206,auVar142,1);
  dVar98 = *(double *)param_1[10];
  auVar106._8_8_ = dVar98;
  auVar106._0_8_ = dVar98;
  auVar106._16_8_ = dVar98;
  auVar106._24_8_ = dVar98;
  auVar195._0_8_ =
       dVar98 + (auVar170._0_8_ * auVar21._0_8_ - auVar107._0_8_ * auVar39._0_8_) * auVar115._0_8_ +
                (auVar170._0_8_ * auVar24._0_8_ - auVar107._0_8_ * auVar50._0_8_) * auVar16._0_8_;
  auVar195._8_8_ =
       (auVar170._8_8_ * auVar21._8_8_ - auVar107._8_8_ * auVar39._8_8_) * auVar115._8_8_ +
       (auVar170._8_8_ * auVar24._8_8_ - auVar107._8_8_ * auVar50._8_8_) * auVar16._8_8_ + 0.0;
  auVar197._16_8_ =
       (auVar170._16_8_ * auVar21._16_8_ - auVar107._16_8_ * dVar13) * auVar116._0_8_ +
       (auVar170._16_8_ * auVar24._16_8_ - auVar107._16_8_ * auVar50._16_8_) * auVar22._0_8_ + 0.0;
  auVar197._0_16_ = auVar195;
  auVar197._24_8_ =
       (auVar170._24_8_ * auVar21._24_8_ - auVar107._24_8_ * dVar13) * auVar116._8_8_ +
       (auVar170._24_8_ * auVar24._24_8_ - auVar107._24_8_ * auVar50._24_8_) * dVar148 + 0.0;
  auVar186 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
  auVar21 = vpblendd_avx2(auVar106,auVar186,0xcc);
  auVar107._0_8_ =
       (auVar37._0_8_ * auVar25._0_8_ + dVar100 * dVar69) * auVar135._0_8_ +
       auVar104._0_8_ * (dVar100 * auVar49._0_8_ + auVar37._0_8_ * auVar83._0_8_) + auVar21._0_8_;
  auVar107._8_8_ =
       (auVar37._0_8_ * auVar25._8_8_ + dVar100 * dVar69) * auVar135._8_8_ +
       auVar104._8_8_ * (dVar100 * auVar49._8_8_ + auVar37._0_8_ * auVar83._8_8_) + auVar21._8_8_;
  auVar107._16_8_ =
       (auVar22._0_8_ * auVar25._16_8_ + auVar116._0_8_ * dVar69) * auVar116._0_8_ +
       auVar104._16_8_ * (auVar116._0_8_ * auVar49._16_8_ + auVar22._0_8_ * auVar83._16_8_) +
       auVar21._16_8_;
  auVar107._24_8_ =
       (dVar148 * auVar25._24_8_ + auVar116._8_8_ * dVar69) * auVar116._8_8_ +
       auVar104._24_8_ * (auVar116._8_8_ * auVar49._24_8_ + dVar148 * auVar83._24_8_) +
       auVar21._24_8_;
  dVar13 = *(double *)(param_1[10] + 8);
  auVar83._8_8_ = dVar13;
  auVar83._0_8_ = dVar13;
  auVar83._16_8_ = dVar13;
  auVar83._24_8_ = dVar13;
  auVar39._0_8_ =
       dVar13 + (auVar179._0_8_ * auVar23._0_8_ - auVar178._0_8_ * auVar117._0_8_) * auVar38._0_8_ +
                auVar36._0_8_ * (auVar179._0_8_ * auVar126._0_8_ - auVar178._0_8_ * auVar105._0_8_);
  auVar39._8_8_ =
       (auVar179._8_8_ * auVar23._8_8_ - auVar178._8_8_ * auVar117._8_8_) * auVar38._8_8_ +
       auVar36._8_8_ * (auVar179._8_8_ * auVar126._8_8_ - auVar178._8_8_ * auVar105._8_8_) + 0.0;
  auVar49._16_8_ =
       (auVar179._16_8_ * auVar23._16_8_ - auVar178._16_8_ * dVar97) * auVar118._0_8_ +
       dVar71 * (auVar179._16_8_ * auVar126._16_8_ - auVar178._16_8_ * auVar105._16_8_) + 0.0;
  auVar49._0_16_ = auVar39;
  auVar49._24_8_ =
       (auVar179._24_8_ * auVar23._24_8_ - auVar178._24_8_ * dVar97) * auVar118._8_8_ +
       dVar113 * (auVar179._24_8_ * auVar126._24_8_ - auVar178._24_8_ * auVar105._24_8_) + 0.0;
  auVar16 = vunpcklpd_avx(auVar14,auVar118);
  auVar170._8_8_ = dVar71;
  auVar170._0_8_ = dVar71;
  auVar170._16_8_ = dVar71;
  auVar170._24_8_ = dVar71;
  auVar21 = vblendpd_avx(auVar170,ZEXT1632(auVar15),1);
  auVar50 = vpblendd_avx2(auVar83,auVar186,0xcc);
  auVar24._0_8_ =
       auVar50._0_8_ +
       (auVar15._0_8_ * auVar141._0_8_ + dVar70 * dVar114) * auVar16._0_8_ +
       auVar21._0_8_ * (dVar114 * auVar169._0_8_ + auVar152._0_8_ * auVar15._0_8_);
  auVar24._8_8_ =
       auVar50._8_8_ +
       (auVar15._0_8_ * auVar141._8_8_ + dVar70 * dVar114) * auVar16._8_8_ +
       auVar21._8_8_ * (dVar114 * auVar169._8_8_ + auVar152._8_8_ * auVar15._0_8_);
  auVar24._16_8_ =
       auVar50._16_8_ +
       (dVar71 * auVar141._16_8_ + dVar70 * auVar118._0_8_) * auVar118._0_8_ +
       auVar21._16_8_ * (auVar118._0_8_ * auVar169._16_8_ + auVar152._16_8_ * dVar71);
  auVar24._24_8_ =
       auVar50._24_8_ +
       (dVar113 * auVar141._24_8_ + dVar70 * auVar118._8_8_) * auVar118._8_8_ +
       auVar21._24_8_ * (auVar118._8_8_ * auVar169._24_8_ + auVar152._24_8_ * dVar113);
  auVar16 = vshufpd_avx(auVar39,auVar39,1);
  auVar21 = vpermpd_avx2(auVar24,0xd0);
  auVar21 = vblendpd_avx(auVar21,ZEXT1632(auVar16),1);
  auVar16 = vshufpd_avx(auVar195,auVar195,1);
  auVar50 = vpermpd_avx2(auVar107,0xd0);
  auVar50 = vblendpd_avx(auVar50,ZEXT1632(auVar16),1);
  auVar184._0_8_ = auVar195._0_8_ + auVar39._0_8_;
  auVar184._8_8_ = auVar195._8_8_ + auVar39._8_8_;
  auVar187._16_8_ = auVar197._16_8_ + auVar49._16_8_;
  auVar187._0_16_ = auVar184;
  auVar187._24_8_ = auVar197._24_8_ + auVar49._24_8_;
  auVar175._0_8_ = auVar50._0_8_ + auVar21._0_8_;
  auVar175._8_8_ = auVar50._8_8_ + auVar21._8_8_;
  auVar179._16_8_ = auVar50._16_8_ + auVar21._16_8_;
  auVar179._0_16_ = auVar175;
  auVar179._24_8_ = auVar50._24_8_ + auVar21._24_8_;
  auVar21 = vblendpd_avx(auVar24,ZEXT1632(auVar49._16_16_),1);
  auVar50 = vblendpd_avx(auVar107,ZEXT1632(auVar197._16_16_),1);
  auVar16._0_8_ = auVar50._0_8_ + auVar21._0_8_;
  auVar16._8_8_ = auVar50._8_8_ + auVar21._8_8_;
  auVar25._16_8_ = auVar50._16_8_ + auVar21._16_8_;
  auVar25._0_16_ = auVar16;
  auVar25._24_8_ = auVar50._24_8_ + auVar21._24_8_;
  auVar50._8_8_ = __real_0010000000000000;
  auVar50._0_8_ = __real_0010000000000000;
  auVar50._16_8_ = __real_0010000000000000;
  auVar50._24_8_ = __real_0010000000000000;
  auVar21 = vblendpd_avx(auVar187,auVar50,8);
  auVar152._0_8_ = auVar21._0_8_ & __real_7fffffffffffffff;
  auVar152._8_8_ = auVar21._8_8_ & __real_7fffffffffffffff;
  auVar152._16_8_ = auVar21._16_8_ & __real_7fffffffffffffff;
  auVar152._24_8_ = auVar21._24_8_ & __real_7fffffffffffffff;
  auVar126._8_8_ = __real_3e45798ee2308c3a;
  auVar126._0_8_ = __real_3e45798ee2308c3a;
  auVar126._16_8_ = __real_3e45798ee2308c3a;
  auVar126._24_8_ = __real_3e45798ee2308c3a;
  auVar21 = vcmppd_avx(auVar152,auVar126,6);
  auVar21 = vpackssdw_avx2(auVar21,auVar186);
  if ((((((((SUB321(auVar21 >> 0x1f,0) & 1) == 0 && (SUB321(auVar21 >> 0x3f,0) & 1) == 0) &&
          (SUB321(auVar21 >> 0x5f,0) & 1) == 0) && SUB321(auVar21 >> 0x7f,0) == '\0') &&
        (SUB321(auVar21 >> 0x9f,0) & 1) == 0) && SUB321(auVar21 >> 0xbf,0) == '\0') &&
      (SUB321(auVar21 >> 0xdf,0) & 1) == 0) && -1 < auVar21[0x1f]) {
    auVar21 = vblendpd_avx(auVar179,auVar50,8);
    auVar153._0_8_ = auVar21._0_8_ & __real_7fffffffffffffff;
    auVar153._8_8_ = auVar21._8_8_ & __real_7fffffffffffffff;
    auVar153._16_8_ = auVar21._16_8_ & __real_7fffffffffffffff;
    auVar153._24_8_ = auVar21._24_8_ & __real_7fffffffffffffff;
    auVar21 = vcmppd_avx(auVar153,auVar126,6);
    auVar21 = vpackssdw_avx2(auVar21,auVar186);
    if ((((((((SUB321(auVar21 >> 0x1f,0) & 1) != 0 || (SUB321(auVar21 >> 0x3f,0) & 1) != 0) ||
            (SUB321(auVar21 >> 0x5f,0) & 1) != 0) || SUB321(auVar21 >> 0x7f,0) != '\0') ||
          (SUB321(auVar21 >> 0x9f,0) & 1) != 0) || SUB321(auVar21 >> 0xbf,0) != '\0') ||
        (SUB321(auVar21 >> 0xdf,0) & 1) != 0) || auVar21[0x1f] < '\0') goto LAB_1409f2947;
    auVar21 = vblendpd_avx(auVar25,auVar50,8);
    auVar51._0_8_ = auVar21._0_8_ & __real_7fffffffffffffff;
    auVar51._8_8_ = auVar21._8_8_ & __real_7fffffffffffffff;
    auVar51._16_8_ = auVar21._16_8_ & __real_7fffffffffffffff;
    auVar51._24_8_ = auVar21._24_8_ & __real_7fffffffffffffff;
    auVar21 = vcmppd_avx(auVar51,auVar126,6);
    auVar21 = vpackssdw_avx2(auVar21,ZEXT832(0) << 0x40);
    if ((((((((SUB321(auVar21 >> 0x1f,0) & 1) != 0 || (SUB321(auVar21 >> 0x3f,0) & 1) != 0) ||
            (SUB321(auVar21 >> 0x5f,0) & 1) != 0) || SUB321(auVar21 >> 0x7f,0) != '\0') ||
          (SUB321(auVar21 >> 0x9f,0) & 1) != 0) || SUB321(auVar21 >> 0xbf,0) != '\0') ||
        (SUB321(auVar21 >> 0xdf,0) & 1) != 0) || auVar21[0x1f] < '\0') goto LAB_1409f2947;
  }
  else {
LAB_1409f2947:
    auVar21 = vperm2f128_avx(auVar187,auVar25,0x31);
    auVar108._16_16_ = auVar16;
    auVar108._0_16_ = auVar184;
    auVar24 = vunpcklpd_avx(auVar108,auVar21);
    auVar36 = vshufpd_avx(auVar175,auVar175,1);
    auVar6._8_8_ = _UNK_150b54548;
    auVar6._0_8_ = ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
    auVar6._16_8_ = _UNK_150b54550;
    auVar6._24_8_ = _UNK_150b54558;
    auVar21 = vblendpd_avx(ZEXT1632(auVar36),auVar6,0xe);
    auVar36 = vshufpd_avx(auVar184,auVar184,1);
    auVar127._16_16_ = auVar16;
    auVar127._0_16_ = auVar36;
    auVar50 = vshufpd_avx(auVar127,auVar186,4);
    auVar49 = vpermpd_avx2(auVar179,0xe8);
    auVar171._0_8_ = auVar24._0_8_ * auVar21._0_8_ - auVar50._0_8_ * auVar49._0_8_;
    auVar171._8_8_ = auVar24._8_8_ * auVar21._8_8_ - auVar50._8_8_ * auVar49._8_8_;
    auVar171._16_8_ = auVar24._16_8_ * auVar21._16_8_ - auVar50._16_8_ * 0.0;
    auVar171._24_8_ = auVar24._24_8_ * auVar21._24_8_ - auVar50._24_8_ * 0.0;
    auVar109._8_8_ = auVar16._0_8_;
    auVar109._0_8_ = auVar16._0_8_;
    auVar109._16_8_ = auVar25._16_8_;
    auVar109._24_8_ = auVar25._16_8_;
    auVar21 = vblendpd_avx(ZEXT1632(CONCAT88(__real_3ff0000000000000,__real_3ff0000000000000)),
                           auVar109,0xc);
    auVar50 = vperm2f128_avx(auVar25,auVar25,0x28);
    auVar198._0_8_ = auVar21._0_8_ * auVar16._0_8_ + auVar50._0_8_ * __real_8000000000000000;
    auVar198._8_8_ = auVar21._8_8_ * auVar16._8_8_ + auVar50._8_8_ * __real_8000000000000000;
    auVar198._16_8_ = auVar21._16_8_ * 0.0 + auVar50._16_8_ * __real_8000000000000000;
    auVar198._24_8_ = auVar21._24_8_ * 0.0 + auVar50._24_8_ * __real_8000000000000000;
    auVar16 = vshufpd_avx(auVar175,auVar184,1);
    auVar24 = vpermpd_avx2(ZEXT1632(auVar16),0x50);
    auVar50 = vpblendd_avx2(ZEXT832((ulonglong)auVar187._16_8_),auVar179,0x30);
    auVar16 = vshufpd_avx(auVar184,auVar175,1);
    auVar25 = vpermpd_avx2(ZEXT1632(auVar16),0x50);
    auVar21 = vpblendd_avx2(ZEXT832((ulonglong)auVar179._16_8_),auVar187,0x30);
    auVar189._0_8_ = auVar50._0_8_ * auVar24._0_8_ - auVar25._0_8_ * auVar21._0_8_;
    auVar189._8_8_ = auVar50._8_8_ * auVar24._8_8_ - auVar25._8_8_ * auVar21._8_8_;
    auVar191._16_8_ = auVar50._16_8_ * auVar24._16_8_ - auVar25._16_8_ * auVar21._16_8_;
    auVar191._0_16_ = auVar189;
    auVar191._24_8_ = auVar50._24_8_ * auVar24._24_8_ - auVar25._24_8_ * auVar21._24_8_;
    auVar24 = vpermpd_avx2(auVar171,0xff);
    auVar25 = vpermpd_avx2(auVar171,0x55);
    auVar49 = vpermpd_avx2(auVar171,0xaa);
    auVar110._0_8_ = auVar24._0_8_ * auVar171._0_8_ + auVar25._0_8_ * auVar49._0_8_;
    auVar110._8_8_ = auVar24._8_8_ * auVar171._0_8_ + auVar25._8_8_ * auVar49._8_8_;
    auVar110._16_8_ = auVar24._16_8_ * auVar171._0_8_ + auVar25._16_8_ * auVar49._16_8_;
    auVar110._24_8_ = auVar24._24_8_ * auVar171._0_8_ + auVar25._24_8_ * auVar49._24_8_;
    auVar21 = vpermpd_avx2(auVar198,0xd8);
    auVar52._0_8_ = auVar189._0_8_ * auVar21._0_8_;
    auVar52._8_8_ = auVar189._8_8_ * auVar21._8_8_;
    auVar52._16_8_ = auVar191._16_8_ * auVar21._16_8_;
    auVar52._24_8_ = auVar191._24_8_ * auVar21._24_8_;
    auVar21 = vpermpd_avx2(auVar52,0x4e);
    auVar53._0_8_ = auVar52._0_8_ + auVar21._0_8_;
    auVar53._8_8_ = auVar52._8_8_ + auVar21._8_8_;
    auVar53._16_8_ = auVar52._16_8_ + auVar21._16_8_;
    auVar53._24_8_ = auVar52._24_8_ + auVar21._24_8_;
    auVar21 = vpermpd_avx2(auVar53,0x39);
    auVar54._0_8_ = auVar53._0_8_ + auVar21._0_8_;
    auVar54._8_8_ = auVar53._8_8_ + auVar21._8_8_;
    auVar54._16_8_ = auVar53._16_8_ + auVar21._16_8_;
    auVar54._24_8_ = auVar53._24_8_ + auVar21._24_8_;
    auVar21 = vsubpd_avx(auVar110,auVar54);
    if ((auVar21._0_8_ != 0.0) || (NAN(auVar21._0_8_))) {
      auVar16 = vunpcklpd_avx(auVar184,auVar175);
      auVar104 = vpermpd_avx2(ZEXT1632(auVar16),0x60);
      auVar23 = vpermpd_avx2(auVar198,0x55);
      auVar143._0_8_ = auVar189._0_8_ * __real_3ff0000000000000;
      auVar143._8_8_ = auVar189._8_8_ * 0.0;
      auVar143._16_8_ = auVar191._16_8_ * 0.0;
      auVar143._24_8_ = auVar191._24_8_ * 0.0;
      auVar105 = vpermpd_avx2(auVar143,0x34);
      auVar126 = vpermpd_avx2(auVar191,100);
      auVar141 = vpermpd_avx2(auVar198,0xcc);
      auVar83 = vpermpd_avx2(auVar187,0xaa);
      auVar83 = vblendpd_avx(ZEXT832(0) << 0x40,auVar83,2);
      auVar180._8_8_ = auVar175._0_8_;
      auVar180._0_8_ = auVar175._0_8_;
      auVar180._16_8_ = auVar179._16_8_;
      auVar180._24_8_ = auVar179._16_8_;
      auVar83 = vblendpd_avx(auVar83,auVar180,8);
      auVar152 = vpermpd_avx2(auVar198,0x66);
      auVar21 = vdivpd_avx(___ymm_3ff0000000000000bff0000000000000bff00000000000003ff0000000000000,
                           auVar21);
      auVar176._0_8_ =
           (auVar184._0_8_ * auVar24._0_8_ -
           (auVar50._0_8_ * auVar141._0_8_ + auVar152._0_8_ * auVar83._0_8_)) * auVar21._0_8_;
      auVar176._8_8_ =
           (auVar184._8_8_ * auVar24._8_8_ -
           (auVar50._8_8_ * auVar141._8_8_ + auVar152._8_8_ * auVar83._8_8_)) * auVar21._8_8_;
      dVar69 = auVar21._16_8_;
      auVar181._16_8_ =
           (auVar175._0_8_ * auVar24._16_8_ -
           (auVar50._16_8_ * auVar141._16_8_ + auVar152._16_8_ * auVar83._16_8_)) * dVar69;
      auVar181._0_16_ = auVar176;
      dVar97 = auVar21._24_8_;
      auVar181._24_8_ =
           (auVar175._8_8_ * auVar24._24_8_ -
           (auVar50._24_8_ * auVar141._24_8_ + auVar152._24_8_ * auVar83._24_8_)) * dVar97;
      auVar16 = vshufpd_avx(auVar176,auVar176,1);
      auVar38 = auVar181._16_16_;
      auVar150 = vshufpd_avx(auVar38,auVar38,1);
      auVar200._0_8_ =
           (auVar25._16_8_ * 0.0 - (-(auVar126._16_8_ * _DAT_150aa8e90) + auVar105._16_8_)) * dVar69
      ;
      auVar200._8_8_ =
           (auVar25._24_8_ * 0.0 - (-(auVar126._24_8_ * _UNK_150aa8e98) + auVar105._24_8_)) * dVar97
      ;
      auVar36 = vshufpd_avx(auVar200,auVar200,1);
      auVar40._0_8_ =
           (auVar49._0_8_ * 0.0 - (auVar184._0_8_ * auVar198._0_8_ - auVar104._0_8_ * auVar23._0_8_)
           ) * auVar21._0_8_;
      auVar40._8_8_ =
           (auVar49._8_8_ * 0.0 - (auVar184._8_8_ * auVar198._0_8_ - auVar104._8_8_ * auVar23._8_8_)
           ) * auVar21._8_8_;
      auVar55._16_8_ =
           (auVar49._16_8_ * 0.0 -
           (auVar175._0_8_ * auVar198._0_8_ - auVar104._16_8_ * auVar23._16_8_)) * dVar69;
      auVar55._0_16_ = auVar40;
      auVar55._24_8_ =
           (auVar49._24_8_ * 0.0 -
           (auVar175._8_8_ * auVar198._0_8_ - auVar104._24_8_ * auVar23._24_8_)) * dVar97;
      auVar14 = vshufpd_avx(auVar40,auVar40,1);
      auVar39 = vshufpd_avx(auVar55._16_16_,auVar55._16_16_,1);
      auVar115 = vshufpd_avx(auVar191._16_16_,auVar191._16_16_,1);
      auVar135 = vshufpd_avx(auVar189,auVar189,1);
      auVar117 = vshufpd_avx(auVar21._16_16_,auVar21._16_16_,1);
      auVar149._8_8_ = 0;
      auVar149._0_8_ =
           (auVar171._0_8_ - (auVar115._0_8_ * 0.0 + auVar135._0_8_ * 0.0)) * auVar117._0_8_;
      goto LAB_1409f2b8b;
    }
  }
  auVar14 = ZEXT816(0) << 0x40;
  auVar150._8_8_ = 0;
  auVar150._0_8_ = __real_3ff0000000000000;
  auVar39 = ZEXT816(0) << 0x40;
  auVar200 = ZEXT816(0) << 0x40;
  auVar38 = ZEXT816(0) << 0x40;
  auVar36 = ZEXT816(0) << 0x40;
  auVar16 = ZEXT816(0) << 0x40;
  auVar176 = auVar150;
  auVar149 = auVar150;
LAB_1409f2b8b:
  auVar14 = vunpcklpd_avx(auVar39,auVar14);
  auVar39 = vunpcklpd_avx(auVar38,auVar176);
  auVar16 = vunpcklpd_avx(auVar150,auVar16);
  dVar69 = *param_2;
  dVar97 = param_2[1];
  dVar98 = param_2[2];
  auVar172._0_8_ =
       param_3 * (auVar14._0_8_ * dVar98 + auVar16._0_8_ * dVar69 + auVar39._0_8_ * dVar97);
  auVar172._8_8_ =
       param_3 * (auVar14._8_8_ * dVar98 + auVar16._8_8_ * dVar69 + auVar39._8_8_ * dVar97);
  auVar172._16_8_ =
       param_3 * (auVar149._0_8_ * dVar98 + auVar36._0_8_ * dVar69 + auVar200._0_8_ * dVar97);
  auVar172._24_8_ =
       param_3 * (auVar149._8_8_ * dVar98 + auVar36._8_8_ * dVar69 + auVar200._8_8_ * dVar97);
  dVar69 = *(double *)param_1[10];
  auVar190._8_8_ = 0;
  auVar190._0_8_ = *(ulonglong *)(param_1[10] + 0x10);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = *(ulonglong *)param_1[0xb];
  uVar2 = *(undefined8 *)(param_1[0xb] + 8);
  auVar193._8_8_ = 0;
  auVar193._0_8_ = *(ulonglong *)param_1[0x18];
  auVar151._8_8_ = 0;
  auVar151._0_8_ = *(ulonglong *)(param_1[0x18] + 8);
  dVar97 = *(double *)(param_1[0x18] + 0x10);
  uVar35 = *(ulonglong *)(param_1[0x19] + 8);
  auVar185._8_8_ = 0;
  auVar185._0_8_ = *(ulonglong *)(param_1[0x19] + 0x10);
  dVar98 = *(double *)param_1[0x1a];
  auVar12 = *(undefined1 (*) [24])(param_1[0x10] + 8);
  auVar5 = *(undefined1 (*) [24])(param_1[0xf] + 8);
  auVar56._24_8_ = 0;
  auVar56._0_24_ = auVar5;
  auVar119._0_8_ = auVar172._0_8_ * dVar69 + auVar5._0_8_;
  auVar119._8_8_ = auVar172._8_8_ * dVar69 + auVar5._8_8_;
  auVar128._16_8_ = auVar172._16_8_ * dVar69 + auVar5._16_8_;
  auVar128._0_16_ = auVar119;
  auVar128._24_8_ = auVar172._24_8_ * dVar69 + 0.0;
  auVar201._0_8_ = -(auVar172._0_8_ * dVar13) + *(double *)*(undefined1 (*) [24])(param_1[0x10] + 8)
  ;
  auVar201._8_8_ = -(auVar172._8_8_ * dVar13) + *(double *)(param_1[0x10] + 0x10);
  auVar203._16_8_ = -(auVar172._16_8_ * dVar13) + *(double *)param_1[0x11];
  auVar203._0_16_ = auVar201;
  auVar203._24_8_ = -(auVar172._24_8_ * dVar13) + 0.0;
  auVar84._16_16_ = auVar201;
  auVar84._0_16_ = auVar119;
  auVar21 = vshufpd_avx(auVar128,auVar84,2);
  auVar120._8_8_ = 0;
  auVar120._0_8_ = *(ulonglong *)(param_1[0x1a] + 0x10);
  auVar101._8_8_ = 0;
  auVar101._0_8_ = *(ulonglong *)param_1[0x1b];
  dVar13 = *(double *)(param_1[0x1b] + 8);
  auVar5 = *(undefined1 (*) [24])(param_1[0xb] + 0x10);
  auVar8._8_8_ = dVar70;
  auVar8._0_8_ = dVar70;
  auVar16 = vmovhps_avx(auVar8,*(undefined8 *)(param_1[0x1d] + 0x10));
  uVar3 = *(undefined8 *)param_1[0x1e];
  dVar148 = *(double *)(param_1[0x1f] + 8);
  *(undefined1 (*) [32])(param_1[0xf] + 8) = auVar21;
  auVar21 = vpermpd_avx2(auVar203,0xe9);
  *(undefined1 (*) [16])(param_1[0x10] + 0x10) = auVar21._0_16_;
  dVar147 = _UNK_150b54438;
  dVar134 = _UNK_150b54430;
  dVar158 = _UNK_150b54428;
  dVar157 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar163 = _UNK_150b54418;
  dVar159 = _UNK_150b54410;
  dVar114 = _UNK_150b54408;
  dVar113 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar71 = _UNK_15076c6f8;
  dVar100 = ___xmm_bff00000000000003ff0000000000000;
  auVar21 = vpermpd_avx2(auVar172,0xc9);
  if (0.0 < dVar69) {
    auVar36 = vunpcklpd_avx(auVar193,auVar151);
    auVar14 = vunpcklpd_avx(auVar190,auVar17);
    auVar26._16_8_ = uVar2;
    auVar26._0_16_ = auVar14;
    auVar26._24_8_ = 0;
    auVar50 = vsubpd_avx(auVar26,auVar56);
    auVar24 = vpermpd_avx2(auVar50,0xc9);
    auVar57._0_8_ = auVar21._0_8_ * auVar50._0_8_ - auVar24._0_8_ * auVar172._0_8_;
    auVar57._8_8_ = auVar21._8_8_ * auVar50._8_8_ - auVar24._8_8_ * auVar172._8_8_;
    auVar57._16_8_ = auVar21._16_8_ * auVar50._16_8_ - auVar24._16_8_ * auVar172._16_8_;
    auVar57._24_8_ = auVar21._24_8_ * auVar50._24_8_ - auVar24._24_8_ * auVar172._24_8_;
    auVar50 = vpermpd_avx2(auVar57,0x55);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar35;
    auVar14 = vunpcklpd_avx(auVar7,auVar185);
    auVar24 = vpermpd_avx2(auVar57,0xaa);
    auVar39 = vunpcklpd_avx(auVar120,auVar101);
    auVar58._0_8_ =
         auVar39._0_8_ * auVar57._0_8_ +
         auVar36._0_8_ * auVar50._0_8_ + auVar24._0_8_ * auVar14._0_8_;
    auVar58._8_8_ =
         auVar39._8_8_ * auVar57._0_8_ +
         auVar36._8_8_ * auVar50._8_8_ + auVar24._8_8_ * auVar14._8_8_;
    auVar58._16_8_ = dVar13 * auVar57._0_8_ + dVar97 * auVar50._16_8_ + auVar24._16_8_ * dVar98;
    auVar58._24_8_ = auVar57._0_8_ * 0.0 + auVar50._24_8_ * 0.0 + auVar24._24_8_ * 0.0;
    auVar73._8_8_ = 0;
    auVar73._0_8_ = *(ulonglong *)(param_1[0x12] + 8);
    auVar36 = vmovhpd_avx(auVar73,*(undefined8 *)param_1[0x12]);
    auVar121._8_8_ = 0;
    auVar121._0_8_ = *(ulonglong *)(param_1[0x11] + 0x10);
    auVar14 = vmovhpd_avx(auVar121,*(undefined8 *)(param_1[0x11] + 8));
    auVar50 = vpermpd_avx2(auVar58,0x55);
    auVar24 = vpermpd_avx2(auVar58,0xaa);
    dVar69 = (___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
              auVar24._0_8_ * auVar14._0_8_ +
             ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
             auVar50._0_8_ * *(double *)param_1[0x12] +
             *(double *)(param_1[0x11] + 8) * 0.0 +
             ___xmm_bff00000000000003ff0000000000000 * auVar58._0_8_ * auVar36._0_8_) *
             __real_3fe0000000000000 + *(double *)(param_1[0x11] + 8);
    dVar97 = (_UNK_150b54428 * auVar24._8_8_ * auVar14._8_8_ +
             _UNK_150b54408 * auVar50._8_8_ * *(double *)(param_1[0x12] + 8) +
             *(double *)(param_1[0x11] + 0x10) * 0.0 +
             _UNK_15076c6f8 * auVar58._0_8_ * auVar36._8_8_) * __real_3fe0000000000000 +
             *(double *)(param_1[0x11] + 0x10);
    dVar98 = (_UNK_150b54430 * auVar24._16_8_ * auVar36._0_8_ +
             _UNK_150b54410 * auVar50._16_8_ * *(double *)(param_1[0x11] + 8) +
             *(double *)param_1[0x12] * 0.0 +
             ___xmm_bff00000000000003ff0000000000000 * auVar58._0_8_ * auVar14._0_8_) *
             __real_3fe0000000000000 + *(double *)param_1[0x12];
    dVar99 = (_UNK_150b54438 * auVar24._24_8_ * auVar36._8_8_ +
             _UNK_150b54418 * auVar50._24_8_ * *(double *)(param_1[0x11] + 0x10) +
             *(double *)(param_1[0x12] + 8) * 0.0 + _UNK_15076c6f8 * auVar58._0_8_ * auVar14._8_8_)
             * __real_3fe0000000000000 + *(double *)(param_1[0x12] + 8);
    auVar18._0_8_ = dVar69 * dVar69 + dVar98 * dVar98;
    auVar18._8_8_ = dVar97 * dVar97 + dVar99 * dVar99;
    auVar36 = vshufpd_avx(auVar18,auVar18,1);
    dVar13 = auVar18._0_8_ + auVar36._0_8_;
    auVar41._8_8_ = 0;
    auVar41._0_8_ = __real_3e45798ee2308c3a;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = dVar13;
    auVar36 = vcmpsd_avx(auVar41,auVar19,6);
    uVar35 = ~auVar36._0_8_ & __real_ffffffffffffffff;
    dVar13 = __real_3ff0000000000000 / SQRT(dVar13);
    dVar204 = (double)(((ulonglong)(dVar69 * dVar13) ^
                       ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) &
                      uVar35);
    dVar207 = (double)(((ulonglong)(dVar97 * dVar13) ^ _UNK_150b54548) & uVar35);
    dVar208 = (double)(((ulonglong)(dVar98 * dVar13) ^ _UNK_150b54550) & uVar35);
    dVar99 = (double)(((ulonglong)(dVar99 * dVar13) ^ _UNK_150b54558) & uVar35);
    auVar192._0_8_ =
         (double)((ulonglong)dVar204 ^
                 ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
    auVar192._8_8_ = (double)((ulonglong)dVar207 ^ _UNK_150b54548);
    auVar192._16_8_ = (double)((ulonglong)dVar208 ^ _UNK_150b54550);
    auVar192._24_8_ = (double)((ulonglong)dVar99 ^ _UNK_150b54558);
    *(undefined1 (*) [32])(param_1[0x11] + 8) = auVar192;
    auVar42._8_8_ = 0;
    auVar42._0_8_ = *(ulonglong *)(param_1[1] + 8);
    uVar2 = *(undefined8 *)(param_1[2] + 8);
    auVar74._8_8_ = uVar2;
    auVar74._0_8_ = uVar2;
    auVar85._16_8_ = uVar2;
    auVar85._0_16_ = auVar74;
    auVar85._24_8_ = uVar2;
    auVar36 = vunpcklpd_avx(auVar42,auVar74);
    auVar24 = vpermpd_avx2(auVar192,0xc9);
    auVar4 = *(undefined1 (*) [24])(param_1[1] + 8);
    auVar111._24_8_ = 0;
    auVar111._0_24_ = auVar4;
    auVar50 = vblendpd_avx(auVar111,auVar85,8);
    dVar13 = auVar192._0_8_ * SUB168(*(undefined1 (*) [16])(param_1[1] + 0x10),0) -
             auVar50._0_8_ * auVar24._0_8_;
    dVar69 = auVar192._8_8_ * SUB168(*(undefined1 (*) [16])(param_1[1] + 0x10),8) -
             auVar50._8_8_ * auVar24._8_8_;
    dVar97 = auVar192._16_8_ * auVar36._0_8_ - auVar50._16_8_ * auVar24._16_8_;
    dVar98 = auVar192._24_8_ * auVar36._8_8_ - auVar50._24_8_ * auVar24._24_8_;
    auVar59._0_8_ = dVar13 + dVar13;
    auVar59._8_8_ = dVar69 + dVar69;
    auVar59._16_8_ = dVar97 + dVar97;
    auVar59._24_8_ = dVar98 + dVar98;
    auVar50 = vpermpd_avx2(auVar192,0xff);
    auVar24 = vpermpd_avx2(auVar59,0xc9);
    dVar164 = auVar50._0_8_;
    dVar32 = auVar50._8_8_;
    dVar33 = auVar50._16_8_;
    dVar34 = auVar50._24_8_;
    auVar50 = vpermpd_avx2(auVar59,0xd2);
    auVar60._0_8_ = dVar204 * auVar59._0_8_;
    auVar60._8_8_ = dVar207 * auVar59._8_8_;
    auVar60._16_8_ = dVar208 * auVar59._16_8_;
    auVar60._24_8_ = dVar99 * auVar59._24_8_;
    auVar25 = vpermpd_avx2(auVar60,0xc9);
    auVar61._0_8_ = dVar204 * auVar50._0_8_ - auVar25._0_8_;
    auVar61._8_8_ = dVar207 * auVar50._8_8_ - auVar25._8_8_;
    auVar61._16_8_ = dVar208 * auVar50._16_8_ - auVar25._16_8_;
    auVar61._24_8_ = dVar99 * auVar50._24_8_ - auVar25._24_8_;
    auVar50 = vpermpd_avx2(auVar61,0xc9);
    auVar43._0_8_ =
         *(double *)(param_1[0xf] + 8) + dVar164 * auVar24._0_8_ + auVar4._0_8_ + auVar50._0_8_;
    auVar43._8_8_ =
         *(double *)(param_1[0xf] + 0x10) + dVar32 * auVar24._8_8_ + auVar4._8_8_ + auVar50._8_8_;
    auVar62._16_8_ =
         *(double *)param_1[0x10] + dVar33 * auVar24._16_8_ + auVar4._16_8_ + auVar50._16_8_;
    auVar62._0_16_ = auVar43;
    auVar62._24_8_ = dVar34 * auVar24._24_8_ + 0.0 + auVar50._24_8_ + 0.0;
    *(undefined1 (*) [16])(param_1[10] + 0x10) = auVar43;
    uVar2 = vmovlpd_avx(auVar62._16_16_);
    *(undefined8 *)(param_1[0xb] + 8) = uVar2;
    auVar75._8_8_ = 0;
    auVar75._0_8_ = *(ulonglong *)(*param_1 + 8);
    auVar36 = vmovhpd_avx(auVar75,*(undefined8 *)*param_1);
    auVar102._8_8_ = 0;
    auVar102._0_8_ = *(ulonglong *)param_1[1];
    auVar14 = vmovhpd_avx(auVar102,*(undefined8 *)(*param_1 + 0x10));
    dVar69 = *(double *)(*param_1 + 8);
    auVar4 = *param_1;
    dVar13 = *(double *)param_1[1];
    auVar50 = vpermpd_avx2(auVar192,0x55);
    dVar97 = *(double *)param_1[1];
    dVar98 = *(double *)*param_1;
    dVar99 = *(double *)(*param_1 + 8);
    auVar24 = vpermpd_avx2(auVar192,0xaa);
    *(double *)(param_1[0xc] + 0x10) =
         dVar157 * auVar36._0_8_ * auVar24._0_8_ +
         dVar113 * *(double *)(*param_1 + 0x10) * auVar50._0_8_ +
         dVar164 * *(double *)*param_1 + dVar100 * auVar14._0_8_ * dVar204;
    *(double *)param_1[0xd] =
         dVar158 * auVar36._8_8_ * auVar24._8_8_ +
         dVar114 * dVar97 * auVar50._8_8_ + dVar32 * dVar69 + dVar71 * auVar14._8_8_ * dVar204;
    *(double *)(param_1[0xd] + 8) =
         dVar134 * auVar14._0_8_ * auVar24._16_8_ +
         dVar159 * dVar98 * auVar50._16_8_ +
         dVar33 * auVar4._16_8_ + dVar100 * auVar36._0_8_ * dVar204;
    *(double *)(param_1[0xd] + 0x10) =
         dVar147 * auVar14._8_8_ * auVar24._24_8_ +
         dVar163 * dVar99 * auVar50._24_8_ + dVar34 * dVar13 + dVar71 * auVar36._8_8_ * dVar204;
    dVar13 = auVar192._0_8_ + auVar192._0_8_;
    dVar69 = auVar192._8_8_ + auVar192._8_8_;
    dVar97 = auVar192._16_8_ + auVar192._16_8_;
    dVar98 = auVar192._24_8_ + auVar192._24_8_;
    auVar63._0_8_ = dVar13 * dVar204;
    auVar63._8_8_ = dVar69 * dVar204;
    auVar63._16_8_ = dVar97 * dVar204;
    auVar63._24_8_ = dVar98 * dVar204;
    auVar122._0_8_ = dVar13 * auVar50._0_8_;
    auVar122._8_8_ = dVar69 * auVar50._8_8_;
    auVar129._16_8_ = dVar97 * auVar50._16_8_;
    auVar129._0_16_ = auVar122;
    auVar129._24_8_ = dVar98 * auVar50._24_8_;
    auVar27._0_8_ = dVar13 * dVar164;
    auVar27._8_8_ = dVar69 * dVar32;
    auVar27._16_8_ = dVar97 * dVar33;
    auVar27._24_8_ = dVar98 * dVar34;
    auVar50 = vperm2f128_avx(auVar129,auVar63,0x21);
    auVar50 = vshufpd_avx(auVar50,ZEXT1632(auVar63._16_16_),4);
    auVar166._0_8_ = auVar27._0_8_ + auVar50._0_8_;
    auVar166._8_8_ = auVar27._8_8_ + auVar50._8_8_;
    auVar173._16_8_ = auVar27._16_8_ + auVar50._16_8_;
    auVar173._0_16_ = auVar166;
    auVar173._24_8_ = auVar27._24_8_ + auVar50._24_8_;
    auVar25 = vsubpd_avx(auVar50,auVar27);
    auVar36 = vshufpd_avx(auVar122,auVar122,1);
    auVar64._8_8_ = auVar63._0_8_;
    auVar64._0_8_ = auVar63._0_8_;
    auVar64._16_8_ = auVar63._0_8_;
    auVar64._24_8_ = auVar63._0_8_;
    auVar50 = vblendpd_avx(auVar64,ZEXT1632(auVar36),1);
    auVar24 = vpermpd_avx2(auVar129,0x55);
    auVar24 = vblendpd_avx(ZEXT1632(CONCAT88(dVar208 * dVar97,dVar208 * dVar97)),auVar24,0xc);
    auVar28._0_8_ = auVar50._0_8_ + auVar24._0_8_;
    auVar28._8_8_ = auVar50._8_8_ + auVar24._8_8_;
    auVar28._16_8_ = auVar50._16_8_ + auVar24._16_8_;
    auVar28._24_8_ = auVar50._24_8_ + auVar24._24_8_;
    auVar65._8_8_ = __real_3ff0000000000000;
    auVar65._0_8_ = __real_3ff0000000000000;
    auVar65._16_8_ = __real_3ff0000000000000;
    auVar65._24_8_ = __real_3ff0000000000000;
    auVar24 = vsubpd_avx(auVar65,auVar28);
    dVar97 = auVar24._0_8_;
    dVar13 = *(double *)param_1[8];
    dVar69 = *(double *)(param_1[8] + 0x10);
    auVar36 = vmovhpd_avx(ZEXT816(0) << 0x40,*(undefined8 *)(param_1[8] + 8));
    auVar50 = vpermpd_avx2(auVar25,0xaa);
    dVar98 = auVar36._0_8_;
    dVar100 = auVar36._8_8_;
    auVar49 = vpermpd_avx2(auVar173,0x55);
    auVar154._0_8_ = auVar49._0_8_ * 0.0 + dVar98 * auVar50._0_8_ + dVar13 * dVar97;
    auVar154._8_8_ = auVar49._8_8_ * 0.0 + dVar100 * auVar50._8_8_ + dVar97 * 0.0;
    auVar154._16_8_ = dVar69 * auVar49._16_8_ + auVar50._16_8_ * 0.0 + dVar97 * 0.0;
    auVar154._24_8_ = auVar49._24_8_ * 0.0 + auVar50._24_8_ * 0.0 + dVar97 * 0.0;
    auVar50 = vpermpd_avx2(auVar173,0xaa);
    auVar49 = vpermpd_avx2(auVar24,0x55);
    dVar97 = auVar25._0_8_;
    auVar130._0_8_ = dVar97 * 0.0 + dVar13 * auVar50._0_8_ + dVar98 * auVar49._0_8_;
    auVar130._8_8_ = dVar97 * 0.0 + auVar50._8_8_ * 0.0 + dVar100 * auVar49._8_8_;
    auVar130._16_8_ = dVar69 * dVar97 + auVar50._16_8_ * 0.0 + auVar49._16_8_ * 0.0;
    auVar130._24_8_ = dVar97 * 0.0 + auVar50._24_8_ * 0.0 + auVar49._24_8_ * 0.0;
    auVar50 = vpermpd_avx2(auVar25,0x55);
    auVar49 = vpermpd_avx2(auVar24,0xaa);
    auVar66._0_8_ = auVar49._0_8_ * 0.0 + auVar50._0_8_ * dVar13 + dVar98 * auVar166._0_8_;
    auVar66._8_8_ = auVar49._8_8_ * 0.0 + auVar50._8_8_ * 0.0 + dVar100 * auVar166._0_8_;
    auVar66._16_8_ = dVar69 * auVar49._16_8_ + auVar50._16_8_ * 0.0 + auVar166._0_8_ * 0.0;
    auVar66._24_8_ = auVar49._24_8_ * 0.0 + auVar50._24_8_ * 0.0 + auVar166._0_8_ * 0.0;
    auVar36 = vunpcklpd_avx(auVar24._0_16_,auVar173._16_16_);
    auVar50 = vblendpd_avx(ZEXT1632(auVar36),auVar50,0xc);
    auVar49 = vpermpd_avx2(auVar154,0x55);
    auVar36 = vblendpd_avx(auVar24._0_16_,auVar25._16_16_,1);
    dVar159 = auVar36._0_8_;
    dVar163 = auVar36._8_8_;
    dVar100 = auVar50._0_8_;
    dVar71 = auVar50._8_8_;
    dVar113 = auVar50._16_8_;
    dVar114 = auVar50._24_8_;
    auVar83 = vpermpd_avx2(auVar154,0xaa);
    auVar36 = vshufpd_avx(auVar166,auVar25._0_16_,1);
    auVar50 = vblendpd_avx(auVar24,ZEXT1632(auVar36),3);
    dVar13 = auVar50._0_8_;
    auVar76._0_8_ = dVar13 * auVar83._0_8_ + dVar100 * auVar154._0_8_ + dVar159 * auVar49._0_8_;
    dVar69 = auVar50._8_8_;
    auVar76._8_8_ = dVar69 * auVar83._8_8_ + dVar71 * auVar154._0_8_ + dVar163 * auVar49._8_8_;
    dVar97 = auVar50._16_8_;
    auVar86._16_8_ =
         dVar97 * auVar83._16_8_ + dVar113 * auVar154._0_8_ + auVar166._0_8_ * auVar49._16_8_;
    auVar86._0_16_ = auVar76;
    dVar98 = auVar50._24_8_;
    auVar86._24_8_ =
         dVar98 * auVar83._24_8_ + dVar114 * auVar154._0_8_ + auVar166._8_8_ * auVar49._24_8_;
    auVar50 = vpermpd_avx2(auVar130,0x55);
    auVar24 = vpermpd_avx2(auVar130,0xaa);
    auVar123._0_8_ = dVar13 * auVar24._0_8_ + dVar100 * auVar130._0_8_ + auVar50._0_8_ * dVar159;
    auVar123._8_8_ = dVar69 * auVar24._8_8_ + dVar71 * auVar130._0_8_ + auVar50._8_8_ * dVar163;
    auVar131._16_8_ =
         dVar97 * auVar24._16_8_ + dVar113 * auVar130._0_8_ + auVar50._16_8_ * auVar166._0_8_;
    auVar131._0_16_ = auVar123;
    auVar131._24_8_ =
         dVar98 * auVar24._24_8_ + dVar114 * auVar130._0_8_ + auVar50._24_8_ * auVar166._8_8_;
    auVar50 = vpermpd_avx2(auVar66,0x55);
    auVar24 = vpermpd_avx2(auVar66,0xaa);
    *(undefined1 (*) [16])param_1[0x18] = auVar76;
    uVar2 = vmovlpd_avx(auVar86._16_16_);
    *(undefined8 *)(param_1[0x18] + 0x10) = uVar2;
    auVar44._0_8_ = dVar13 * auVar24._0_8_ + dVar100 * auVar66._0_8_ + auVar50._0_8_ * dVar159;
    auVar44._8_8_ = dVar69 * auVar24._8_8_ + dVar71 * auVar66._0_8_ + auVar50._8_8_ * dVar163;
    auVar67._16_8_ =
         dVar97 * auVar24._16_8_ + dVar113 * auVar66._0_8_ + auVar50._16_8_ * auVar166._0_8_;
    auVar67._0_16_ = auVar44;
    auVar67._24_8_ =
         dVar98 * auVar24._24_8_ + dVar114 * auVar66._0_8_ + auVar50._24_8_ * auVar166._8_8_;
    *(undefined8 *)param_1[0x19] = 0;
    *(undefined1 (*) [16])(param_1[0x19] + 8) = auVar123;
    uVar2 = vmovlpd_avx(auVar131._16_16_);
    *(undefined8 *)param_1[0x1a] = uVar2;
    *(undefined8 *)(param_1[0x1a] + 8) = 0;
    *(undefined1 (*) [16])(param_1[0x1a] + 0x10) = auVar44;
    uVar2 = vmovlpd_avx(auVar67._16_16_);
    *(undefined8 *)(param_1[0x1b] + 8) = uVar2;
    *(undefined1 (*) [32])(param_1[0x1b] + 0x10) = ZEXT1632(ZEXT816(0));
    *(undefined8 *)param_1[0x1d] = 0x3ff0000000000000;
  }
  dVar163 = _UNK_150b54438;
  dVar159 = _UNK_150b54430;
  dVar114 = _UNK_150b54428;
  dVar113 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar71 = _UNK_150b54418;
  dVar100 = _UNK_150b54410;
  dVar98 = _UNK_150b54408;
  dVar97 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar69 = _UNK_15076c6f8;
  dVar13 = ___xmm_bff00000000000003ff0000000000000;
  if (__real_0000000000000000 < *(double *)(param_1[10] + 8)) {
    auVar29._24_8_ = 0;
    auVar29._0_24_ = auVar5;
    auVar11._24_8_ = 0;
    auVar11._0_24_ = auVar12;
    auVar50 = vsubpd_avx(auVar29,auVar11);
    auVar24 = vpermpd_avx2(auVar50,0xc9);
    auVar36 = vunpcklpd_avx(auVar205,auVar199);
    auVar30._0_8_ = auVar24._0_8_ * auVar172._0_8_ - auVar21._0_8_ * auVar50._0_8_;
    auVar30._8_8_ = auVar24._8_8_ * auVar172._8_8_ - auVar21._8_8_ * auVar50._8_8_;
    auVar30._16_8_ = auVar24._16_8_ * auVar172._16_8_ - auVar21._16_8_ * auVar50._16_8_;
    auVar30._24_8_ = auVar24._24_8_ * auVar172._24_8_ - auVar21._24_8_ * auVar50._24_8_;
    auVar14 = vunpcklpd_avx(auVar136,auVar194);
    auVar9._8_8_ = dVar70;
    auVar9._0_8_ = dVar70;
    auVar9._16_8_ = dVar70;
    auVar9._24_8_ = dVar70;
    auVar21 = vblendpd_avx(ZEXT1632(auVar16),auVar9,0xc);
    auVar10._8_8_ = uVar3;
    auVar10._0_8_ = uVar3;
    auVar10._16_8_ = uVar3;
    auVar10._24_8_ = uVar3;
    auVar21 = vblendpd_avx(auVar21,auVar10,4);
    auVar24 = vpermpd_avx2(auVar30,0xaa);
    auVar25 = vpermpd_avx2(auVar30,0x55);
    auVar50 = vblendpd_avx(auVar142,ZEXT1632(auVar14),3);
    auVar87._8_8_ = uVar1;
    auVar87._0_8_ = uVar1;
    auVar87._16_8_ = uVar1;
    auVar87._24_8_ = uVar1;
    auVar50 = vblendpd_avx(auVar50,auVar87,4);
    auVar88._0_8_ =
         auVar50._0_8_ * auVar30._0_8_ +
         auVar21._0_8_ * auVar25._0_8_ + auVar24._0_8_ * auVar36._0_8_;
    auVar88._8_8_ =
         auVar50._8_8_ * auVar30._0_8_ +
         auVar21._8_8_ * auVar25._8_8_ + auVar24._8_8_ * auVar36._8_8_;
    auVar88._16_8_ =
         auVar50._16_8_ * auVar30._0_8_ + auVar21._16_8_ * auVar25._16_8_ + auVar24._16_8_ * dVar148
    ;
    auVar88._24_8_ =
         auVar50._24_8_ * auVar30._0_8_ + auVar21._24_8_ * auVar25._24_8_ + auVar24._24_8_ * 0.0;
    auVar45._8_8_ = 0;
    auVar45._0_8_ = *(ulonglong *)(param_1[0x13] + 0x10);
    auVar16 = vmovhpd_avx(auVar45,*(undefined8 *)(param_1[0x13] + 8));
    auVar103._8_8_ = 0;
    auVar103._0_8_ = *(ulonglong *)param_1[0x13];
    auVar36 = vmovhpd_avx(auVar103,*(undefined8 *)(param_1[0x12] + 0x10));
    auVar21 = vpermpd_avx2(auVar88,0x55);
    auVar50 = vpermpd_avx2(auVar88,0xaa);
    dVar148 = (___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
               auVar50._0_8_ * auVar36._0_8_ +
              ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 *
              auVar21._0_8_ * *(double *)(param_1[0x13] + 8) +
              *(double *)(param_1[0x12] + 0x10) * 0.0 +
              auVar88._0_8_ * auVar16._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
              __real_3fe0000000000000 + *(double *)(param_1[0x12] + 0x10);
    dVar157 = (_UNK_150b54428 * auVar50._8_8_ * auVar36._8_8_ +
              _UNK_150b54408 * auVar21._8_8_ * *(double *)(param_1[0x13] + 0x10) +
              *(double *)param_1[0x13] * 0.0 + auVar88._0_8_ * auVar16._8_8_ * _UNK_15076c6f8) *
              __real_3fe0000000000000 + *(double *)param_1[0x13];
    dVar158 = (_UNK_150b54430 * auVar50._16_8_ * auVar16._0_8_ +
              _UNK_150b54410 * auVar21._16_8_ * *(double *)(param_1[0x12] + 0x10) +
              *(double *)(param_1[0x13] + 8) * 0.0 +
              auVar88._0_8_ * auVar36._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
              __real_3fe0000000000000 + *(double *)(param_1[0x13] + 8);
    dVar99 = (_UNK_150b54438 * auVar50._24_8_ * auVar16._8_8_ +
             _UNK_150b54418 * auVar21._24_8_ * *(double *)param_1[0x13] +
             *(double *)(param_1[0x13] + 0x10) * 0.0 +
             auVar88._0_8_ * auVar36._8_8_ * _UNK_15076c6f8) * __real_3fe0000000000000 +
             *(double *)(param_1[0x13] + 0x10);
    auVar77._0_8_ = dVar148 * dVar148 + dVar158 * dVar158;
    auVar77._8_8_ = dVar157 * dVar157 + dVar99 * dVar99;
    auVar16 = vshufpd_avx(auVar77,auVar77,1);
    dVar70 = auVar77._0_8_ + auVar16._0_8_;
    auVar137._8_8_ = 0;
    auVar137._0_8_ = __real_3e45798ee2308c3a;
    auVar78._8_8_ = 0;
    auVar78._0_8_ = dVar70;
    auVar16 = vcmpsd_avx(auVar137,auVar78,6);
    uVar35 = ~auVar16._0_8_ & __real_ffffffffffffffff;
    dVar70 = __real_3ff0000000000000 / SQRT(dVar70);
    dVar134 = (double)(((ulonglong)(dVar148 * dVar70) ^
                       ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) &
                      uVar35);
    dVar148 = (double)(((ulonglong)(dVar157 * dVar70) ^ _UNK_150b54548) & uVar35);
    dVar147 = (double)(((ulonglong)(dVar158 * dVar70) ^ _UNK_150b54550) & uVar35);
    dVar70 = (double)(((ulonglong)(dVar99 * dVar70) ^ _UNK_150b54558) & uVar35);
    auVar155._0_8_ =
         (double)((ulonglong)dVar134 ^
                 ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
    auVar155._8_8_ = (double)((ulonglong)dVar148 ^ _UNK_150b54548);
    auVar155._16_8_ = (double)((ulonglong)dVar147 ^ _UNK_150b54550);
    auVar155._24_8_ = (double)((ulonglong)dVar70 ^ _UNK_150b54558);
    *(undefined1 (*) [32])(param_1[0x12] + 0x10) = auVar155;
    auVar161._8_8_ = 0;
    auVar161._0_8_ = *(ulonglong *)(param_1[5] + 8);
    uVar1 = *(undefined8 *)(param_1[6] + 8);
    auVar167._8_8_ = uVar1;
    auVar167._0_8_ = uVar1;
    auVar174._16_8_ = uVar1;
    auVar174._0_16_ = auVar167;
    auVar174._24_8_ = uVar1;
    auVar16 = vunpcklpd_avx(auVar161,auVar167);
    auVar50 = vpermpd_avx2(auVar155,0xc9);
    auVar5 = *(undefined1 (*) [24])(param_1[5] + 8);
    auVar182._24_8_ = 0;
    auVar182._0_24_ = auVar5;
    auVar21 = vblendpd_avx(auVar182,auVar174,8);
    dVar157 = auVar155._0_8_ * SUB168(*(undefined1 (*) [16])(param_1[5] + 0x10),0) -
              auVar21._0_8_ * auVar50._0_8_;
    dVar158 = auVar155._8_8_ * SUB168(*(undefined1 (*) [16])(param_1[5] + 0x10),8) -
              auVar21._8_8_ * auVar50._8_8_;
    dVar99 = auVar155._16_8_ * auVar16._0_8_ - auVar21._16_8_ * auVar50._16_8_;
    dVar164 = auVar155._24_8_ * auVar16._8_8_ - auVar21._24_8_ * auVar50._24_8_;
    auVar89._0_8_ = dVar157 + dVar157;
    auVar89._8_8_ = dVar158 + dVar158;
    auVar89._16_8_ = dVar99 + dVar99;
    auVar89._24_8_ = dVar164 + dVar164;
    auVar21 = vpermpd_avx2(auVar155,0xff);
    auVar50 = vpermpd_avx2(auVar89,0xc9);
    dVar99 = auVar21._0_8_;
    dVar164 = auVar21._8_8_;
    dVar32 = auVar21._16_8_;
    dVar33 = auVar21._24_8_;
    auVar21 = vpermpd_avx2(auVar89,0xd2);
    auVar90._0_8_ = auVar89._0_8_ * dVar134;
    auVar90._8_8_ = auVar89._8_8_ * dVar148;
    auVar90._16_8_ = auVar89._16_8_ * dVar147;
    auVar90._24_8_ = auVar89._24_8_ * dVar70;
    auVar24 = vpermpd_avx2(auVar90,0xc9);
    auVar91._0_8_ = dVar134 * auVar21._0_8_ - auVar24._0_8_;
    auVar91._8_8_ = dVar148 * auVar21._8_8_ - auVar24._8_8_;
    auVar91._16_8_ = dVar147 * auVar21._16_8_ - auVar24._16_8_;
    auVar91._24_8_ = dVar70 * auVar21._24_8_ - auVar24._24_8_;
    auVar21 = vpermpd_avx2(auVar91,0xc9);
    auVar79._0_8_ =
         *(double *)(param_1[0x10] + 8) + dVar99 * auVar50._0_8_ + auVar5._0_8_ + auVar21._0_8_;
    auVar79._8_8_ =
         *(double *)(param_1[0x10] + 0x10) + dVar164 * auVar50._8_8_ + auVar5._8_8_ + auVar21._8_8_;
    auVar92._16_8_ =
         *(double *)param_1[0x11] + dVar32 * auVar50._16_8_ + auVar5._16_8_ + auVar21._16_8_;
    auVar92._0_16_ = auVar79;
    auVar92._24_8_ = dVar33 * auVar50._24_8_ + 0.0 + auVar21._24_8_ + 0.0;
    *(undefined1 (*) [16])(param_1[0xb] + 0x10) = auVar79;
    uVar1 = vmovlpd_avx(auVar92._16_16_);
    *(undefined8 *)(param_1[0xc] + 8) = uVar1;
    auVar168._8_8_ = 0;
    auVar168._0_8_ = *(ulonglong *)(param_1[4] + 8);
    auVar16 = vmovhpd_avx(auVar168,*(undefined8 *)param_1[4]);
    auVar177._8_8_ = 0;
    auVar177._0_8_ = *(ulonglong *)param_1[5];
    auVar36 = vmovhpd_avx(auVar177,*(undefined8 *)(param_1[4] + 0x10));
    dVar148 = *(double *)(param_1[4] + 8);
    auVar5 = param_1[4];
    dVar70 = *(double *)param_1[5];
    auVar21 = vpermpd_avx2(auVar155,0x55);
    dVar157 = *(double *)param_1[4];
    dVar158 = *(double *)(param_1[4] + 8);
    auVar50 = vpermpd_avx2(auVar155,0xaa);
    *(double *)param_1[0xe] =
         dVar113 * auVar16._0_8_ * auVar50._0_8_ +
         dVar97 * *(double *)(param_1[4] + 0x10) * auVar21._0_8_ +
         dVar99 * *(double *)param_1[4] + auVar36._0_8_ * dVar134 * dVar13;
    *(double *)(param_1[0xe] + 8) =
         dVar114 * auVar16._8_8_ * auVar50._8_8_ +
         dVar98 * *(double *)param_1[5] * auVar21._8_8_ +
         dVar164 * dVar148 + auVar36._8_8_ * dVar134 * dVar69;
    *(double *)(param_1[0xe] + 0x10) =
         dVar159 * auVar36._0_8_ * auVar50._16_8_ +
         dVar100 * dVar157 * auVar21._16_8_ +
         dVar32 * auVar5._16_8_ + auVar16._0_8_ * dVar134 * dVar13;
    *(double *)param_1[0xf] =
         dVar163 * auVar36._8_8_ * auVar50._24_8_ +
         dVar71 * dVar158 * auVar21._24_8_ + dVar33 * dVar70 + auVar16._8_8_ * dVar134 * dVar69;
    dVar13 = auVar155._0_8_ + auVar155._0_8_;
    dVar69 = auVar155._8_8_ + auVar155._8_8_;
    dVar97 = auVar155._16_8_ + auVar155._16_8_;
    dVar70 = auVar155._24_8_ + auVar155._24_8_;
    auVar93._0_8_ = dVar13 * dVar134;
    auVar93._8_8_ = dVar69 * dVar134;
    auVar93._16_8_ = dVar97 * dVar134;
    auVar93._24_8_ = dVar70 * dVar134;
    auVar138._0_8_ = auVar21._0_8_ * dVar13;
    auVar138._8_8_ = auVar21._8_8_ * dVar69;
    auVar144._16_8_ = auVar21._16_8_ * dVar97;
    auVar144._0_16_ = auVar138;
    auVar144._24_8_ = auVar21._24_8_ * dVar70;
    auVar112._0_8_ = dVar13 * dVar99;
    auVar112._8_8_ = dVar69 * dVar164;
    auVar112._16_8_ = dVar97 * dVar32;
    auVar112._24_8_ = dVar70 * dVar33;
    auVar21 = vperm2f128_avx(auVar144,auVar93,0x21);
    auVar21 = vshufpd_avx(auVar21,ZEXT1632(auVar93._16_16_),4);
    auVar46._0_8_ = auVar112._0_8_ + auVar21._0_8_;
    auVar46._8_8_ = auVar112._8_8_ + auVar21._8_8_;
    auVar68._16_8_ = auVar112._16_8_ + auVar21._16_8_;
    auVar68._0_16_ = auVar46;
    auVar68._24_8_ = auVar112._24_8_ + auVar21._24_8_;
    auVar24 = vsubpd_avx(auVar21,auVar112);
    auVar16 = vshufpd_avx(auVar138,auVar138,1);
    auVar94._8_8_ = auVar93._0_8_;
    auVar94._0_8_ = auVar93._0_8_;
    auVar94._16_8_ = auVar93._0_8_;
    auVar94._24_8_ = auVar93._0_8_;
    auVar21 = vblendpd_avx(auVar94,ZEXT1632(auVar16),1);
    auVar50 = vpermpd_avx2(auVar144,0x55);
    auVar50 = vblendpd_avx(ZEXT1632(CONCAT88(dVar147 * dVar97,dVar147 * dVar97)),auVar50,0xc);
    auVar95._0_8_ = auVar21._0_8_ + auVar50._0_8_;
    auVar95._8_8_ = auVar21._8_8_ + auVar50._8_8_;
    auVar95._16_8_ = auVar21._16_8_ + auVar50._16_8_;
    auVar95._24_8_ = auVar21._24_8_ + auVar50._24_8_;
    auVar132._8_8_ = __real_3ff0000000000000;
    auVar132._0_8_ = __real_3ff0000000000000;
    auVar132._16_8_ = __real_3ff0000000000000;
    auVar132._24_8_ = __real_3ff0000000000000;
    auVar50 = vsubpd_avx(auVar132,auVar95);
    dVar97 = auVar50._0_8_;
    dVar13 = *(double *)param_1[9];
    dVar69 = *(double *)(param_1[9] + 0x10);
    auVar16 = vmovhpd_avx(ZEXT816(0) << 0x40,*(undefined8 *)(param_1[9] + 8));
    auVar21 = vpermpd_avx2(auVar24,0xaa);
    dVar70 = auVar16._0_8_;
    dVar98 = auVar16._8_8_;
    auVar25 = vpermpd_avx2(auVar68,0x55);
    auVar162._0_8_ = auVar25._0_8_ * 0.0 + dVar70 * auVar21._0_8_ + dVar13 * dVar97;
    auVar162._8_8_ = auVar25._8_8_ * 0.0 + dVar98 * auVar21._8_8_ + dVar97 * 0.0;
    auVar162._16_8_ = dVar69 * auVar25._16_8_ + auVar21._16_8_ * 0.0 + dVar97 * 0.0;
    auVar162._24_8_ = auVar25._24_8_ * 0.0 + auVar21._24_8_ * 0.0 + dVar97 * 0.0;
    auVar21 = vpermpd_avx2(auVar68,0xaa);
    auVar25 = vpermpd_avx2(auVar50,0x55);
    dVar97 = auVar24._0_8_;
    auVar156._0_8_ = dVar97 * 0.0 + dVar13 * auVar21._0_8_ + dVar70 * auVar25._0_8_;
    auVar156._8_8_ = dVar97 * 0.0 + auVar21._8_8_ * 0.0 + dVar98 * auVar25._8_8_;
    auVar156._16_8_ = dVar69 * dVar97 + auVar21._16_8_ * 0.0 + auVar25._16_8_ * 0.0;
    auVar156._24_8_ = dVar97 * 0.0 + auVar21._24_8_ * 0.0 + auVar25._24_8_ * 0.0;
    auVar21 = vpermpd_avx2(auVar24,0x55);
    auVar25 = vpermpd_avx2(auVar50,0xaa);
    auVar145._0_8_ = auVar25._0_8_ * 0.0 + auVar21._0_8_ * dVar13 + dVar70 * auVar46._0_8_;
    auVar145._8_8_ = auVar25._8_8_ * 0.0 + auVar21._8_8_ * 0.0 + dVar98 * auVar46._0_8_;
    auVar145._16_8_ = dVar69 * auVar25._16_8_ + auVar21._16_8_ * 0.0 + auVar46._0_8_ * 0.0;
    auVar145._24_8_ = auVar25._24_8_ * 0.0 + auVar21._24_8_ * 0.0 + auVar46._0_8_ * 0.0;
    auVar16 = vunpcklpd_avx(auVar50._0_16_,auVar68._16_16_);
    auVar21 = vblendpd_avx(ZEXT1632(auVar16),auVar21,0xc);
    auVar25 = vpermpd_avx2(auVar162,0x55);
    auVar16 = vblendpd_avx(auVar50._0_16_,auVar24._16_16_,1);
    dVar113 = auVar16._0_8_;
    dVar114 = auVar16._8_8_;
    dVar98 = auVar21._0_8_;
    dVar148 = auVar21._8_8_;
    dVar100 = auVar21._16_8_;
    dVar71 = auVar21._24_8_;
    auVar49 = vpermpd_avx2(auVar162,0xaa);
    auVar16 = vshufpd_avx(auVar46,auVar24._0_16_,1);
    auVar21 = vblendpd_avx(auVar50,ZEXT1632(auVar16),3);
    dVar13 = auVar21._0_8_;
    auVar80._0_8_ = dVar13 * auVar49._0_8_ + dVar98 * auVar162._0_8_ + dVar113 * auVar25._0_8_;
    dVar69 = auVar21._8_8_;
    auVar80._8_8_ = dVar69 * auVar49._8_8_ + dVar148 * auVar162._0_8_ + dVar114 * auVar25._8_8_;
    dVar97 = auVar21._16_8_;
    auVar96._16_8_ =
         dVar97 * auVar49._16_8_ + dVar100 * auVar162._0_8_ + auVar46._0_8_ * auVar25._16_8_;
    auVar96._0_16_ = auVar80;
    dVar70 = auVar21._24_8_;
    auVar96._24_8_ =
         dVar70 * auVar49._24_8_ + dVar71 * auVar162._0_8_ + auVar46._8_8_ * auVar25._24_8_;
    auVar21 = vpermpd_avx2(auVar156,0x55);
    auVar50 = vpermpd_avx2(auVar156,0xaa);
    auVar124._0_8_ = dVar13 * auVar50._0_8_ + dVar98 * auVar156._0_8_ + dVar113 * auVar21._0_8_;
    auVar124._8_8_ = dVar69 * auVar50._8_8_ + dVar148 * auVar156._0_8_ + dVar114 * auVar21._8_8_;
    auVar133._16_8_ =
         dVar97 * auVar50._16_8_ + dVar100 * auVar156._0_8_ + auVar46._0_8_ * auVar21._16_8_;
    auVar133._0_16_ = auVar124;
    auVar133._24_8_ =
         dVar70 * auVar50._24_8_ + dVar71 * auVar156._0_8_ + auVar46._8_8_ * auVar21._24_8_;
    auVar21 = vpermpd_avx2(auVar145,0x55);
    auVar50 = vpermpd_avx2(auVar145,0xaa);
    *(undefined1 (*) [16])(param_1[0x1d] + 8) = auVar80;
    uVar1 = vmovlpd_avx(auVar96._16_16_);
    *(undefined8 *)param_1[0x1e] = uVar1;
    auVar139._0_8_ = dVar13 * auVar50._0_8_ + dVar98 * auVar145._0_8_ + dVar113 * auVar21._0_8_;
    auVar139._8_8_ = dVar69 * auVar50._8_8_ + dVar148 * auVar145._0_8_ + dVar114 * auVar21._8_8_;
    auVar146._16_8_ =
         dVar97 * auVar50._16_8_ + dVar100 * auVar145._0_8_ + auVar46._0_8_ * auVar21._16_8_;
    auVar146._0_16_ = auVar139;
    auVar146._24_8_ =
         dVar70 * auVar50._24_8_ + dVar71 * auVar145._0_8_ + auVar46._8_8_ * auVar21._24_8_;
    *(undefined8 *)(param_1[0x1e] + 8) = 0;
    *(undefined1 (*) [16])(param_1[0x1e] + 0x10) = auVar124;
    uVar1 = vmovlpd_avx(auVar133._16_16_);
    *(undefined8 *)(param_1[0x1f] + 8) = uVar1;
    *(undefined8 *)(param_1[0x1f] + 0x10) = 0;
    *(undefined1 (*) [16])param_1[0x20] = auVar139;
    uVar1 = vmovlpd_avx(auVar146._16_16_);
    *(undefined8 *)(param_1[0x20] + 0x10) = uVar1;
    *(undefined8 *)param_1[0x21] = 0;
    *(undefined8 *)(param_1[0x21] + 8) = 0;
    *(undefined8 *)(param_1[0x21] + 0x10) = 0;
    *(undefined8 *)param_1[0x22] = 0;
    *(undefined8 *)(param_1[0x22] + 8) = 0x3ff0000000000000;
  }
  dVar13 = *(double *)param_1[0xe];
  dVar69 = *(double *)(param_1[0xe] + 8);
  dVar97 = *(double *)(param_1[0xe] + 0x10);
  dVar70 = *(double *)param_1[0xf];
  dVar98 = *(double *)param_1[0x13];
  dVar148 = *(double *)(param_1[0x13] + 8);
  dVar100 = *(double *)(param_1[0x13] + 0x10);
  auVar81._0_8_ =
       *(double *)(param_1[0x12] + 0x10) * *(double *)(param_1[0x11] + 8) +
       dVar148 * *(double *)param_1[0x12];
  auVar81._8_8_ =
       dVar98 * *(double *)(param_1[0x11] + 0x10) + dVar100 * *(double *)(param_1[0x12] + 8);
  auVar16 = vshufpd_avx(auVar81,auVar81,1);
  auVar82._8_8_ = 0;
  auVar82._0_8_ = auVar81._0_8_ + auVar16._0_8_;
  auVar16 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar82,2);
  auVar125._8_8_ = 0;
  auVar125._0_8_ = __real_3ff0000000000000;
  auVar140._8_8_ = 0;
  auVar140._0_8_ = __real_bff0000000000000;
  auVar16 = vblendvpd_avx(auVar140,auVar125,auVar16);
  dVar71 = auVar16._0_8_;
  *(double *)(param_1[0x12] + 0x10) = *(double *)(param_1[0x12] + 0x10) * dVar71;
  *(double *)param_1[0x13] = dVar98 * dVar71;
  *(double *)(param_1[0x13] + 8) = dVar148 * dVar71;
  *(double *)(param_1[0x13] + 0x10) = dVar100 * dVar71;
  auVar47._0_8_ = dVar13 * *(double *)(param_1[0xc] + 0x10) + dVar97 * *(double *)(param_1[0xd] + 8)
  ;
  auVar47._8_8_ = dVar69 * *(double *)param_1[0xd] + dVar70 * *(double *)(param_1[0xd] + 0x10);
  auVar16 = vshufpd_avx(auVar47,auVar47,1);
  auVar48._8_8_ = 0;
  auVar48._0_8_ = auVar47._0_8_ + auVar16._0_8_;
  auVar16 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar48,2);
  auVar16 = vblendvpd_avx(auVar140,auVar125,auVar16);
  dVar98 = auVar16._0_8_;
  *(double *)param_1[0xe] = dVar13 * dVar98;
  *(double *)(param_1[0xe] + 8) = dVar69 * dVar98;
  *(double *)(param_1[0xe] + 0x10) = dVar97 * dVar98;
  *(double *)param_1[0xf] = dVar70 * dVar98;
  auVar20._0_8_ = *(double *)param_1[0x2c] + auVar172._0_8_;
  auVar20._8_8_ = *(double *)(param_1[0x2c] + 8) + auVar172._8_8_;
  auVar31._16_8_ = *(double *)(param_1[0x2c] + 0x10) + auVar172._16_8_;
  auVar31._0_16_ = auVar20;
  auVar31._24_8_ = auVar172._24_8_ + 0.0;
  *(undefined1 (*) [16])param_1[0x2c] = auVar20;
  uVar1 = vmovlpd_avx(auVar31._16_16_);
  *(undefined8 *)(param_1[0x2c] + 0x10) = uVar1;
  return;
}


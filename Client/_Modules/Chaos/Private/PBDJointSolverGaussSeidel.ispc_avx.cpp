// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 13

// ApplyRotationDelta2___un_3C_s_5B_unFPBDJointSolver_5D__3E_REFs_5B__c_unFVector_5D_REFs_5B__c_unFVector_5D__avx @ 1409f3770

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyRotationDelta2___un_3C_s_5B_unFPBDJointSolver_5D__3E_REFs_5B__c_unFVector_5D_REFs_5B__c_unFVector_5D__avx
               (double *param_1,double *param_2,double *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar38;
  double dVar42;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar43;
  undefined1 auVar41 [32];
  double dVar44;
  double dVar45;
  double dVar56;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar57;
  double dVar58;
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  double dVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  ulonglong uVar76;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar84 [32];
  double dVar85;
  double dVar86;
  undefined1 auVar87 [16];
  double dVar89;
  undefined1 auVar88 [32];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [32];
  undefined1 auVar94 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [32];
  undefined1 auVar101 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  double dVar109;
  double dVar112;
  undefined1 auVar110 [16];
  undefined1 auVar111 [32];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar29 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar93 [32];
  undefined1 auVar95 [32];
  undefined1 auVar100 [32];
  undefined1 auVar102 [32];
  
  dVar89 = _UNK_150b54438;
  dVar86 = _UNK_150b54430;
  dVar44 = _UNK_150b54428;
  dVar43 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar42 = _UNK_150b54418;
  dVar38 = _UNK_150b54410;
  dVar21 = _UNK_150b54408;
  dVar20 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar19 = _UNK_15076c6f8;
  dVar6 = ___xmm_bff00000000000003ff0000000000000;
  if (0.0 < param_1[0x1e]) {
    dVar45 = param_1[0x34];
    dVar59 = *param_2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = param_1[0x37];
    auVar7 = vmovhpd_avx(auVar7,param_1[0x36]);
    auVar22._8_8_ = 0;
    auVar22._0_8_ = param_1[0x35];
    auVar9 = vmovhps_avx(auVar22,param_1[0x34]);
    dVar58 = param_2[1];
    dVar85 = param_2[2];
    dVar45 = dVar45 + (auVar9._0_8_ * dVar85 *
                       ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
                      dVar58 * param_1[0x36] *
                      ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
                      dVar45 * 0.0 + auVar7._0_8_ * dVar59 * ___xmm_bff00000000000003ff0000000000000
                      ) * ___ymm_3fe00000000000003fe00000000000003fe00000000000003fe0000000000000;
    dVar56 = param_1[0x35] +
             (auVar9._8_8_ * dVar85 * _UNK_150b54428 +
             dVar58 * param_1[0x37] * _UNK_150b54408 +
             param_1[0x35] * 0.0 + auVar7._8_8_ * dVar59 * _UNK_15076c6f8) * _UNK_150aa8f28;
    dVar57 = param_1[0x36] +
             (auVar7._0_8_ * dVar85 * _UNK_150b54430 +
             dVar58 * param_1[0x34] * _UNK_150b54410 +
             param_1[0x36] * 0.0 + auVar9._0_8_ * dVar59 * ___xmm_bff00000000000003ff0000000000000)
             * _UNK_150aa8f30;
    dVar58 = param_1[0x37] +
             (auVar7._8_8_ * dVar85 * _UNK_150b54438 +
             dVar58 * param_1[0x35] * _UNK_150b54418 +
             param_1[0x37] * 0.0 + auVar9._8_8_ * dVar59 * _UNK_15076c6f8) * _UNK_150aa8f38;
    auVar60._0_8_ = dVar45 * dVar45 + dVar57 * dVar57;
    auVar60._8_8_ = dVar56 * dVar56 + dVar58 * dVar58;
    auVar7 = vshufpd_avx(auVar60,auVar60,1);
    dVar59 = auVar60._0_8_ + auVar7._0_8_;
    auVar77._8_8_ = 0;
    auVar77._0_8_ = __real_3e45798ee2308c3a;
    auVar61._8_8_ = 0;
    auVar61._0_8_ = dVar59;
    auVar7 = vcmpsd_avx(auVar77,auVar61,6);
    uVar76 = ~auVar7._0_8_ & __real_ffffffffffffffff;
    dVar59 = __real_3ff0000000000000 / SQRT(dVar59);
    auVar78._0_8_ =
         (double)(((ulonglong)(dVar45 * dVar59) ^
                  ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) & uVar76)
    ;
    auVar78._8_8_ = (double)(((ulonglong)(dVar56 * dVar59) ^ _UNK_150b54548) & uVar76);
    auVar82._16_8_ = (double)(((ulonglong)(dVar57 * dVar59) ^ _UNK_150b54550) & uVar76);
    auVar82._0_16_ = auVar78;
    auVar82._24_8_ = (double)(((ulonglong)(dVar58 * dVar59) ^ _UNK_150b54558) & uVar76);
    auVar69._0_8_ =
         (double)((ulonglong)auVar78._0_8_ ^
                 ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
    auVar69._8_8_ = (double)((ulonglong)auVar78._8_8_ ^ _UNK_150b54548);
    auVar69._16_8_ = (double)((ulonglong)auVar82._16_8_ ^ _UNK_150b54550);
    auVar69._24_8_ = (double)((ulonglong)auVar82._24_8_ ^ _UNK_150b54558);
    auVar7 = vshufps_avx(auVar78,auVar78,0x4e);
    auVar8 = auVar69._16_16_;
    auVar9 = vshufps_avx(auVar8,auVar8,0x4e);
    dVar59 = (double)vmovlpd_avx(auVar78);
    param_1[0x34] = dVar59;
    dVar59 = (double)vmovlpd_avx(auVar7);
    param_1[0x35] = dVar59;
    dVar59 = (double)vmovlpd_avx(auVar8);
    param_1[0x36] = dVar59;
    dVar59 = (double)vmovlpd_avx(auVar9);
    param_1[0x37] = dVar59;
    auVar87._8_8_ = 0;
    auVar87._0_8_ = param_1[4];
    auVar7 = vmovhps_avx(auVar87,param_1[7]);
    auVar88._0_8_ = SUB168(*(undefined1 (*) [16])(param_1 + 5),0) * auVar69._0_8_;
    auVar88._8_8_ = SUB168(*(undefined1 (*) [16])(param_1 + 5),8) * auVar69._8_8_;
    auVar88._16_8_ = auVar7._0_8_ * auVar69._16_8_;
    auVar88._24_8_ = auVar7._8_8_ * auVar69._24_8_;
    auVar15 = vperm2f128_avx(auVar69,auVar69,0x11);
    auVar105._16_16_ = auVar78;
    auVar105._0_16_ = auVar78;
    auVar29 = vshufpd_avx(auVar105,auVar15,9);
    auVar99._0_8_ = param_1[4] * auVar29._0_8_;
    auVar99._8_8_ = param_1[5] * auVar29._8_8_;
    auVar99._16_8_ = param_1[6] * auVar29._16_8_;
    auVar99._24_8_ = param_1[7] * auVar29._24_8_;
    auVar29 = vsubpd_avx(auVar88,auVar99);
    auVar97._0_8_ = auVar29._0_8_ + auVar29._0_8_;
    auVar97._8_8_ = auVar29._8_8_ + auVar29._8_8_;
    auVar100._16_8_ = auVar29._16_8_ + auVar29._16_8_;
    auVar100._0_16_ = auVar97;
    auVar100._24_8_ = auVar29._24_8_ + auVar29._24_8_;
    auVar29 = vshufpd_avx(auVar15,auVar15,0xf);
    auVar107._16_16_ = auVar97;
    auVar107._0_16_ = auVar97;
    auVar11 = vshufpd_avx(auVar107,ZEXT1632(auVar100._16_16_),1);
    dVar85 = auVar29._0_8_;
    dVar45 = auVar29._8_8_;
    dVar56 = auVar29._16_8_;
    dVar57 = auVar29._24_8_;
    auVar111._0_8_ = auVar97._0_8_ * auVar78._0_8_;
    auVar111._8_8_ = auVar97._8_8_ * auVar78._8_8_;
    auVar111._16_8_ = auVar100._16_8_ * auVar82._16_8_;
    auVar111._24_8_ = auVar100._24_8_ * auVar82._24_8_;
    auVar29 = vshufpd_avx(auVar105,ZEXT1632(auVar82._16_16_),1);
    auVar101._0_8_ = auVar97._0_8_ * auVar29._0_8_;
    auVar101._8_8_ = auVar97._8_8_ * auVar29._8_8_;
    auVar101._16_8_ = auVar100._16_8_ * auVar29._16_8_;
    auVar101._24_8_ = auVar100._24_8_ * auVar29._24_8_;
    auVar29 = vperm2f128_avx(auVar111,auVar111,1);
    auVar29 = vshufpd_avx(auVar29,auVar111,4);
    auVar29 = vsubpd_avx(auVar101,auVar29);
    auVar98._0_8_ = param_1[0x2e] + param_1[4] + dVar85 * auVar11._0_8_ + auVar29._0_8_;
    auVar98._8_8_ = param_1[0x2f] + param_1[5] + dVar45 * auVar11._8_8_ + auVar29._8_8_;
    auVar102._16_8_ = param_1[0x30] + param_1[6] + dVar56 * auVar11._16_8_ + auVar29._16_8_;
    auVar102._0_16_ = auVar98;
    auVar102._24_8_ = dVar57 * auVar11._24_8_ + 0.0 + auVar29._24_8_ + 0.0;
    *(undefined1 (*) [16])(param_1 + 0x20) = auVar98;
    dVar59 = (double)vmovlps_avx(auVar102._16_16_);
    param_1[0x22] = dVar59;
    auVar8 = vshufps_avx(auVar78,auVar78,0x44);
    auVar113._8_8_ = 0;
    auVar113._0_8_ = param_1[3];
    auVar9 = vmovhps_avx(auVar113,param_1[2]);
    auVar115._8_8_ = 0;
    auVar115._0_8_ = param_1[1];
    auVar7 = vmovhpd_avx(auVar115,*param_1);
    dVar109 = auVar8._0_8_;
    dVar112 = auVar8._8_8_;
    auVar8 = vshufps_avx(auVar78,auVar78,0xee);
    dVar59 = auVar8._0_8_;
    dVar58 = auVar8._8_8_;
    param_1[0x26] =
         auVar7._0_8_ * auVar15._0_8_ * dVar43 +
         param_1[2] * dVar59 * dVar20 + *param_1 * dVar85 + dVar109 * auVar9._0_8_ * dVar6;
    param_1[0x27] =
         auVar7._8_8_ * auVar15._0_8_ * dVar44 +
         param_1[3] * dVar58 * dVar21 + param_1[1] * dVar45 + dVar112 * auVar9._8_8_ * dVar19;
    param_1[0x28] =
         auVar9._0_8_ * auVar15._16_8_ * dVar86 +
         *param_1 * dVar59 * dVar38 + param_1[2] * dVar56 + dVar109 * auVar7._0_8_ * dVar6;
    param_1[0x29] =
         auVar9._8_8_ * auVar15._16_8_ * dVar89 +
         param_1[1] * dVar58 * dVar42 + param_1[3] * dVar57 + dVar112 * auVar7._8_8_ * dVar19;
    dVar6 = auVar69._0_8_ + auVar69._0_8_;
    dVar19 = auVar69._8_8_ + auVar69._8_8_;
    dVar20 = auVar69._16_8_ + auVar69._16_8_;
    dVar21 = auVar69._24_8_ + auVar69._24_8_;
    auVar70._0_8_ = dVar109 * dVar6;
    auVar70._8_8_ = dVar112 * dVar19;
    auVar70._16_8_ = dVar109 * dVar20;
    auVar70._24_8_ = dVar112 * dVar21;
    auVar23._0_8_ = dVar6 * dVar59;
    auVar23._8_8_ = dVar19 * dVar58;
    auVar29._16_8_ = dVar20 * dVar59;
    auVar29._0_16_ = auVar23;
    auVar29._24_8_ = dVar21 * dVar58;
    auVar11._0_8_ = dVar85 * dVar6;
    auVar11._8_8_ = dVar45 * dVar19;
    auVar11._16_8_ = dVar56 * dVar20;
    auVar11._24_8_ = dVar57 * dVar21;
    auVar29 = vperm2f128_avx(auVar29,auVar70,0x21);
    auVar29 = vshufpd_avx(auVar29,ZEXT1632(auVar70._16_16_),4);
    auVar34._0_8_ = auVar11._0_8_ + auVar29._0_8_;
    auVar34._8_8_ = auVar11._8_8_ + auVar29._8_8_;
    auVar36._16_8_ = auVar11._16_8_ + auVar29._16_8_;
    auVar36._0_16_ = auVar34;
    auVar36._24_8_ = auVar11._24_8_ + auVar29._24_8_;
    auVar15 = vsubpd_avx(auVar29,auVar11);
    auVar7 = vshufpd_avx(auVar23,auVar23,1);
    auVar24._8_8_ = auVar70._0_8_;
    auVar24._0_8_ = auVar70._0_8_;
    auVar30._16_16_ = auVar24;
    auVar30._0_16_ = auVar24;
    auVar29 = vblendpd_avx(auVar30,ZEXT1632(auVar7),1);
    auVar12._16_16_ = auVar7;
    auVar12._0_16_ = ZEXT816(0);
    auVar11 = vblendpd_avx(ZEXT1632(CONCAT88(auVar69._16_8_ * dVar20,auVar69._16_8_ * dVar20)),
                           auVar12,0xc);
    auVar13._0_8_ = auVar29._0_8_ + auVar11._0_8_;
    auVar13._8_8_ = auVar29._8_8_ + auVar11._8_8_;
    auVar13._16_8_ = auVar29._16_8_ + auVar11._16_8_;
    auVar13._24_8_ = auVar29._24_8_ + auVar11._24_8_;
    auVar31._8_8_ = __real_3ff0000000000000;
    auVar31._0_8_ = __real_3ff0000000000000;
    auVar31._16_8_ = __real_3ff0000000000000;
    auVar31._24_8_ = __real_3ff0000000000000;
    auVar11 = vsubpd_avx(auVar31,auVar13);
    dVar20 = auVar11._0_8_;
    dVar6 = param_1[0x18];
    dVar19 = param_1[0x1a];
    auVar29 = vperm2f128_avx(auVar15,auVar15,0x11);
    auVar22 = ZEXT816(0) << 0x40;
    auVar7 = vmovhpd_avx(auVar22,param_1[0x19]);
    dVar21 = auVar7._0_8_;
    dVar38 = auVar7._8_8_;
    auVar7 = vshufpd_avx(auVar34,auVar34,3);
    dVar42 = SUB168(ZEXT816(0),4);
    auVar79._0_8_ = auVar7._0_8_ * 0.0 + dVar21 * auVar29._0_8_ + dVar6 * dVar20;
    auVar79._8_8_ = dVar42 * auVar7._8_8_ + dVar38 * auVar29._0_8_ + dVar20 * 0.0;
    auVar83._16_8_ = dVar19 * auVar7._0_8_ + auVar29._16_8_ * 0.0 + dVar20 * 0.0;
    auVar83._0_16_ = auVar79;
    auVar83._24_8_ = auVar7._8_8_ * 0.0 + auVar29._16_8_ * 0.0 + dVar20 * 0.0;
    auVar29 = vperm2f128_avx(auVar36,auVar36,0x11);
    auVar24 = auVar11._0_16_;
    auVar7 = vshufpd_avx(auVar24,auVar24,3);
    dVar20 = auVar15._0_8_;
    auVar62._0_8_ = dVar20 * 0.0 + dVar6 * auVar29._0_8_ + dVar21 * auVar7._0_8_;
    auVar62._8_8_ = dVar42 * dVar20 + auVar29._0_8_ * 0.0 + dVar38 * auVar7._8_8_;
    auVar71._16_8_ = dVar19 * dVar20 + auVar29._16_8_ * 0.0 + auVar7._0_8_ * 0.0;
    auVar71._0_16_ = auVar62;
    auVar71._24_8_ = dVar20 * 0.0 + auVar29._16_8_ * 0.0 + auVar7._8_8_ * 0.0;
    auVar23 = auVar15._0_16_;
    auVar7 = vshufpd_avx(auVar23,auVar23,3);
    auVar29 = vperm2f128_avx(auVar11,auVar11,0x11);
    auVar8._0_8_ = auVar29._0_8_ * 0.0 + dVar21 * auVar34._0_8_ + dVar6 * auVar7._0_8_;
    auVar8._8_8_ = dVar42 * auVar29._0_8_ + dVar38 * auVar34._0_8_ + auVar7._8_8_ * 0.0;
    auVar14._16_8_ = dVar19 * auVar29._16_8_ + auVar34._0_8_ * 0.0 + auVar7._0_8_ * 0.0;
    auVar14._0_16_ = auVar8;
    auVar14._24_8_ = auVar29._16_8_ * 0.0 + auVar34._0_8_ * 0.0 + auVar7._8_8_ * 0.0;
    auVar9 = vunpcklpd_avx(auVar24,auVar36._16_16_);
    auVar7 = vshufpd_avx(auVar23,auVar23,1);
    auVar103._16_16_ = auVar7;
    auVar103._0_16_ = ZEXT816(0);
    auVar29 = vblendpd_avx(ZEXT1632(auVar9),auVar103,0xc);
    dVar38 = auVar29._0_8_;
    dVar42 = auVar29._8_8_;
    dVar43 = auVar29._16_8_;
    dVar44 = auVar29._24_8_;
    auVar9 = vshufpd_avx(auVar79,auVar79,3);
    auVar7 = vblendpd_avx(auVar24,auVar15._16_16_,1);
    dVar86 = auVar7._0_8_;
    dVar89 = auVar7._8_8_;
    auVar15 = vperm2f128_avx(auVar83,auVar83,0x11);
    auVar7 = vshufpd_avx(auVar34,auVar23,1);
    auVar29 = vblendpd_avx(auVar11,ZEXT1632(auVar7),3);
    dVar6 = auVar29._0_8_;
    dVar19 = auVar29._8_8_;
    dVar20 = auVar29._16_8_;
    dVar21 = auVar29._24_8_;
    auVar35._0_8_ = dVar38 * auVar79._0_8_ + dVar86 * auVar9._0_8_ + dVar6 * auVar15._0_8_;
    auVar35._8_8_ = dVar42 * auVar79._0_8_ + dVar89 * auVar9._8_8_ + dVar19 * auVar15._0_8_;
    auVar37._16_8_ = dVar43 * auVar79._0_8_ + auVar34._0_8_ * auVar9._0_8_ + dVar20 * auVar15._16_8_
    ;
    auVar37._0_16_ = auVar35;
    auVar37._24_8_ = dVar44 * auVar79._0_8_ + auVar34._8_8_ * auVar9._8_8_ + dVar21 * auVar15._16_8_
    ;
    auVar7 = vshufpd_avx(auVar62,auVar62,3);
    auVar29 = vperm2f128_avx(auVar71,auVar71,0x11);
    auVar63._0_8_ = dVar6 * auVar29._0_8_ + dVar86 * auVar7._0_8_ + dVar38 * auVar62._0_8_;
    auVar63._8_8_ = dVar19 * auVar29._0_8_ + dVar89 * auVar7._8_8_ + dVar42 * auVar62._0_8_;
    auVar72._16_8_ = dVar20 * auVar29._16_8_ + auVar34._0_8_ * auVar7._0_8_ + dVar43 * auVar62._0_8_
    ;
    auVar72._0_16_ = auVar63;
    auVar72._24_8_ = dVar21 * auVar29._16_8_ + auVar34._8_8_ * auVar7._8_8_ + dVar44 * auVar62._0_8_
    ;
    auVar7 = vshufpd_avx(auVar8,auVar8,3);
    auVar29 = vperm2f128_avx(auVar14,auVar14,0x11);
    auVar9._0_8_ = dVar38 * auVar8._0_8_ + dVar86 * auVar7._0_8_ + dVar6 * auVar29._0_8_;
    auVar9._8_8_ = dVar42 * auVar8._0_8_ + dVar89 * auVar7._8_8_ + dVar19 * auVar29._0_8_;
    auVar15._16_8_ = dVar43 * auVar8._0_8_ + auVar34._0_8_ * auVar7._0_8_ + dVar20 * auVar29._16_8_;
    auVar15._0_16_ = auVar9;
    auVar15._24_8_ = dVar44 * auVar8._0_8_ + auVar34._8_8_ * auVar7._8_8_ + dVar21 * auVar29._16_8_;
    *(undefined1 (*) [16])(param_1 + 0x48) = auVar35;
    dVar6 = (double)vmovlps_avx(auVar37._16_16_);
    param_1[0x4a] = dVar6;
    param_1[0x4b] = 0.0;
    *(undefined1 (*) [16])(param_1 + 0x4c) = auVar63;
    dVar6 = (double)vmovlpd_avx(auVar72._16_16_);
    param_1[0x4e] = dVar6;
    param_1[0x4f] = 0.0;
    *(undefined1 (*) [16])(param_1 + 0x50) = auVar9;
    dVar6 = (double)vmovlpd_avx(auVar15._16_16_);
    param_1[0x52] = dVar6;
    *(undefined1 (*) [16])(param_1 + 0x55) = auVar22;
    *(undefined1 (*) [16])(param_1 + 0x53) = auVar22;
    param_1[0x57] = 1.0;
  }
  dVar89 = _UNK_150b54438;
  dVar86 = _UNK_150b54430;
  dVar44 = _UNK_150b54428;
  dVar43 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar42 = _UNK_150b54418;
  dVar38 = _UNK_150b54410;
  dVar21 = _UNK_150b54408;
  dVar20 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar19 = _UNK_15076c6f8;
  dVar6 = ___xmm_bff00000000000003ff0000000000000;
  if (0.0 < param_1[0x1f]) {
    dVar45 = param_1[0x38];
    dVar59 = *param_3;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_1[0x3b];
    auVar7 = vmovhpd_avx(auVar1,param_1[0x3a]);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = param_1[0x39];
    auVar9 = vmovhps_avx(auVar10,param_1[0x38]);
    dVar58 = param_3[1];
    dVar85 = param_3[2];
    dVar45 = dVar45 + (auVar9._0_8_ * dVar85 *
                       ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
                      dVar58 * param_1[0x3a] *
                      ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
                      dVar45 * 0.0 + auVar7._0_8_ * dVar59 * ___xmm_bff00000000000003ff0000000000000
                      ) * ___ymm_3fe00000000000003fe00000000000003fe00000000000003fe0000000000000;
    dVar56 = param_1[0x39] +
             (auVar9._8_8_ * dVar85 * _UNK_150b54428 +
             dVar58 * param_1[0x3b] * _UNK_150b54408 +
             param_1[0x39] * 0.0 + auVar7._8_8_ * dVar59 * _UNK_15076c6f8) * _UNK_150aa8f28;
    dVar57 = param_1[0x3a] +
             (auVar7._0_8_ * dVar85 * _UNK_150b54430 +
             dVar58 * param_1[0x38] * _UNK_150b54410 +
             param_1[0x3a] * 0.0 + auVar9._0_8_ * dVar59 * ___xmm_bff00000000000003ff0000000000000)
             * _UNK_150aa8f30;
    dVar58 = param_1[0x3b] +
             (auVar7._8_8_ * dVar85 * _UNK_150b54438 +
             dVar58 * param_1[0x39] * _UNK_150b54418 +
             param_1[0x3b] * 0.0 + auVar9._8_8_ * dVar59 * _UNK_15076c6f8) * _UNK_150aa8f38;
    auVar46._0_8_ = dVar45 * dVar45 + dVar57 * dVar57;
    auVar46._8_8_ = dVar56 * dVar56 + dVar58 * dVar58;
    auVar7 = vshufpd_avx(auVar46,auVar46,1);
    dVar59 = auVar46._0_8_ + auVar7._0_8_;
    auVar64._8_8_ = 0;
    auVar64._0_8_ = __real_3e45798ee2308c3a;
    auVar47._8_8_ = 0;
    auVar47._0_8_ = dVar59;
    auVar7 = vcmpsd_avx(auVar64,auVar47,6);
    uVar76 = ~auVar7._0_8_ & __real_ffffffffffffffff;
    dVar59 = __real_3ff0000000000000 / SQRT(dVar59);
    auVar65._0_8_ =
         (double)(((ulonglong)(dVar45 * dVar59) ^
                  ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) & uVar76)
    ;
    auVar65._8_8_ = (double)(((ulonglong)(dVar56 * dVar59) ^ _UNK_150b54548) & uVar76);
    auVar73._16_8_ = (double)(((ulonglong)(dVar57 * dVar59) ^ _UNK_150b54550) & uVar76);
    auVar73._0_16_ = auVar65;
    auVar73._24_8_ = (double)(((ulonglong)(dVar58 * dVar59) ^ _UNK_150b54558) & uVar76);
    auVar51._0_8_ =
         (double)((ulonglong)auVar65._0_8_ ^
                 ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
    auVar51._8_8_ = (double)((ulonglong)auVar65._8_8_ ^ _UNK_150b54548);
    auVar51._16_8_ = (double)((ulonglong)auVar73._16_8_ ^ _UNK_150b54550);
    auVar51._24_8_ = (double)((ulonglong)auVar73._24_8_ ^ _UNK_150b54558);
    auVar7 = vshufps_avx(auVar65,auVar65,0x4e);
    auVar8 = auVar51._16_16_;
    auVar9 = vshufps_avx(auVar8,auVar8,0x4e);
    dVar59 = (double)vmovlpd_avx(auVar65);
    param_1[0x38] = dVar59;
    dVar59 = (double)vmovlpd_avx(auVar7);
    param_1[0x39] = dVar59;
    dVar59 = (double)vmovlpd_avx(auVar8);
    param_1[0x3a] = dVar59;
    dVar59 = (double)vmovlpd_avx(auVar9);
    param_1[0x3b] = dVar59;
    auVar80._8_8_ = 0;
    auVar80._0_8_ = param_1[0x10];
    auVar7 = vmovhps_avx(auVar80,param_1[0x13]);
    auVar84._0_8_ = SUB168(*(undefined1 (*) [16])(param_1 + 0x11),0) * auVar51._0_8_;
    auVar84._8_8_ = SUB168(*(undefined1 (*) [16])(param_1 + 0x11),8) * auVar51._8_8_;
    auVar84._16_8_ = auVar7._0_8_ * auVar51._16_8_;
    auVar84._24_8_ = auVar7._8_8_ * auVar51._24_8_;
    auVar15 = vperm2f128_avx(auVar51,auVar51,0x11);
    auVar104._16_16_ = auVar65;
    auVar104._0_16_ = auVar65;
    auVar29 = vshufpd_avx(auVar104,auVar15,9);
    auVar92._0_8_ = param_1[0x10] * auVar29._0_8_;
    auVar92._8_8_ = param_1[0x11] * auVar29._8_8_;
    auVar92._16_8_ = param_1[0x12] * auVar29._16_8_;
    auVar92._24_8_ = param_1[0x13] * auVar29._24_8_;
    auVar29 = vsubpd_avx(auVar84,auVar92);
    auVar90._0_8_ = auVar29._0_8_ + auVar29._0_8_;
    auVar90._8_8_ = auVar29._8_8_ + auVar29._8_8_;
    auVar93._16_8_ = auVar29._16_8_ + auVar29._16_8_;
    auVar93._0_16_ = auVar90;
    auVar93._24_8_ = auVar29._24_8_ + auVar29._24_8_;
    auVar29 = vshufpd_avx(auVar15,auVar15,0xf);
    auVar106._16_16_ = auVar90;
    auVar106._0_16_ = auVar90;
    auVar11 = vshufpd_avx(auVar106,ZEXT1632(auVar93._16_16_),1);
    dVar58 = auVar29._0_8_;
    dVar45 = auVar29._8_8_;
    dVar109 = auVar29._16_8_;
    dVar112 = auVar29._24_8_;
    auVar108._0_8_ = auVar90._0_8_ * auVar65._0_8_;
    auVar108._8_8_ = auVar90._8_8_ * auVar65._8_8_;
    auVar108._16_8_ = auVar93._16_8_ * auVar73._16_8_;
    auVar108._24_8_ = auVar93._24_8_ * auVar73._24_8_;
    auVar29 = vshufpd_avx(auVar104,ZEXT1632(auVar73._16_16_),1);
    auVar94._0_8_ = auVar90._0_8_ * auVar29._0_8_;
    auVar94._8_8_ = auVar90._8_8_ * auVar29._8_8_;
    auVar94._16_8_ = auVar93._16_8_ * auVar29._16_8_;
    auVar94._24_8_ = auVar93._24_8_ * auVar29._24_8_;
    auVar29 = vperm2f128_avx(auVar108,auVar108,1);
    auVar29 = vshufpd_avx(auVar29,auVar108,4);
    auVar29 = vsubpd_avx(auVar94,auVar29);
    auVar91._0_8_ = param_1[0x31] + param_1[0x10] + auVar11._0_8_ * dVar58 + auVar29._0_8_;
    auVar91._8_8_ = param_1[0x32] + param_1[0x11] + auVar11._8_8_ * dVar45 + auVar29._8_8_;
    auVar95._16_8_ = param_1[0x33] + param_1[0x12] + auVar11._16_8_ * dVar109 + auVar29._16_8_;
    auVar95._0_16_ = auVar91;
    auVar95._24_8_ = auVar11._24_8_ * dVar112 + 0.0 + auVar29._24_8_ + 0.0;
    *(undefined1 (*) [16])(param_1 + 0x23) = auVar91;
    dVar59 = (double)vmovlps_avx(auVar95._16_16_);
    param_1[0x25] = dVar59;
    auVar8 = vshufps_avx(auVar65,auVar65,0x44);
    auVar110._8_8_ = 0;
    auVar110._0_8_ = param_1[0xf];
    auVar7 = vmovhpd_avx(auVar110,param_1[0xe]);
    auVar114._8_8_ = 0;
    auVar114._0_8_ = param_1[0xd];
    auVar9 = vmovhps_avx(auVar114,param_1[0xc]);
    dVar59 = auVar8._0_8_;
    dVar56 = auVar8._8_8_;
    auVar8 = vshufps_avx(auVar65,auVar65,0xee);
    dVar85 = auVar8._0_8_;
    dVar57 = auVar8._8_8_;
    param_1[0x2a] =
         auVar9._0_8_ * auVar15._0_8_ * dVar43 +
         param_1[0xe] * dVar85 * dVar20 + param_1[0xc] * dVar58 + auVar7._0_8_ * dVar59 * dVar6;
    param_1[0x2b] =
         auVar9._8_8_ * auVar15._0_8_ * dVar44 +
         param_1[0xf] * dVar57 * dVar21 + param_1[0xd] * dVar45 + auVar7._8_8_ * dVar56 * dVar19;
    param_1[0x2c] =
         auVar7._0_8_ * auVar15._16_8_ * dVar86 +
         param_1[0xc] * dVar85 * dVar38 + param_1[0xe] * dVar109 + auVar9._0_8_ * dVar59 * dVar6;
    param_1[0x2d] =
         auVar7._8_8_ * auVar15._16_8_ * dVar89 +
         param_1[0xd] * dVar57 * dVar42 + param_1[0xf] * dVar112 + auVar9._8_8_ * dVar56 * dVar19;
    dVar6 = auVar51._0_8_ + auVar51._0_8_;
    dVar19 = auVar51._8_8_ + auVar51._8_8_;
    dVar20 = auVar51._16_8_ + auVar51._16_8_;
    dVar21 = auVar51._24_8_ + auVar51._24_8_;
    auVar52._0_8_ = dVar59 * dVar6;
    auVar52._8_8_ = dVar56 * dVar19;
    auVar52._16_8_ = dVar59 * dVar20;
    auVar52._24_8_ = dVar56 * dVar21;
    auVar66._0_8_ = dVar6 * dVar85;
    auVar66._8_8_ = dVar19 * dVar57;
    auVar74._16_8_ = dVar20 * dVar85;
    auVar74._0_16_ = auVar66;
    auVar74._24_8_ = dVar21 * dVar57;
    auVar16._0_8_ = dVar6 * dVar58;
    auVar16._8_8_ = dVar19 * dVar45;
    auVar16._16_8_ = dVar20 * dVar109;
    auVar16._24_8_ = dVar21 * dVar112;
    auVar29 = vperm2f128_avx(auVar74,auVar52,0x21);
    auVar29 = vshufpd_avx(auVar29,ZEXT1632(auVar52._16_16_),4);
    auVar25._0_8_ = auVar16._0_8_ + auVar29._0_8_;
    auVar25._8_8_ = auVar16._8_8_ + auVar29._8_8_;
    auVar32._16_8_ = auVar16._16_8_ + auVar29._16_8_;
    auVar32._0_16_ = auVar25;
    auVar32._24_8_ = auVar16._24_8_ + auVar29._24_8_;
    auVar15 = vsubpd_avx(auVar29,auVar16);
    auVar7 = vshufpd_avx(auVar66,auVar66,1);
    auVar48._8_8_ = auVar52._0_8_;
    auVar48._0_8_ = auVar52._0_8_;
    auVar53._16_16_ = auVar48;
    auVar53._0_16_ = auVar48;
    auVar29 = vblendpd_avx(auVar53,ZEXT1632(auVar7),1);
    auVar17._16_16_ = auVar7;
    auVar17._0_16_ = ZEXT816(0);
    auVar11 = vblendpd_avx(ZEXT1632(CONCAT88(auVar51._16_8_ * dVar20,auVar51._16_8_ * dVar20)),
                           auVar17,0xc);
    auVar18._0_8_ = auVar29._0_8_ + auVar11._0_8_;
    auVar18._8_8_ = auVar29._8_8_ + auVar11._8_8_;
    auVar18._16_8_ = auVar29._16_8_ + auVar11._16_8_;
    auVar18._24_8_ = auVar29._24_8_ + auVar11._24_8_;
    auVar41._8_8_ = __real_3ff0000000000000;
    auVar41._0_8_ = __real_3ff0000000000000;
    auVar41._16_8_ = __real_3ff0000000000000;
    auVar41._24_8_ = __real_3ff0000000000000;
    auVar11 = vsubpd_avx(auVar41,auVar18);
    dVar20 = auVar11._0_8_;
    dVar6 = param_1[0x1b];
    dVar19 = param_1[0x1d];
    auVar29 = vperm2f128_avx(auVar15,auVar15,0x11);
    auVar8 = ZEXT816(0) << 0x40;
    auVar7 = vmovhpd_avx(auVar8,param_1[0x1c]);
    dVar21 = auVar7._0_8_;
    dVar38 = auVar7._8_8_;
    auVar7 = vshufpd_avx(auVar25,auVar25,3);
    auVar67._0_8_ = auVar7._0_8_ * 0.0 + dVar21 * auVar29._0_8_ + dVar6 * dVar20;
    auVar67._8_8_ = auVar7._8_8_ * 0.0 + dVar38 * auVar29._0_8_ + dVar20 * 0.0;
    auVar75._16_8_ = auVar7._0_8_ * dVar19 + auVar29._16_8_ * 0.0 + dVar20 * 0.0;
    auVar75._0_16_ = auVar67;
    auVar75._24_8_ = auVar7._8_8_ * 0.0 + auVar29._16_8_ * 0.0 + dVar20 * 0.0;
    auVar29 = vperm2f128_avx(auVar32,auVar32,0x11);
    auVar23 = auVar11._0_16_;
    auVar7 = vshufpd_avx(auVar23,auVar23,3);
    dVar20 = auVar15._0_8_;
    auVar49._0_8_ = dVar20 * 0.0 + dVar21 * auVar7._0_8_ + dVar6 * auVar29._0_8_;
    auVar49._8_8_ = dVar20 * 0.0 + dVar38 * auVar7._8_8_ + auVar29._0_8_ * 0.0;
    auVar54._16_8_ = dVar20 * dVar19 + auVar7._0_8_ * 0.0 + auVar29._16_8_ * 0.0;
    auVar54._0_16_ = auVar49;
    auVar54._24_8_ = dVar20 * 0.0 + auVar7._8_8_ * 0.0 + auVar29._16_8_ * 0.0;
    auVar22 = auVar15._0_16_;
    auVar7 = vshufpd_avx(auVar22,auVar22,3);
    auVar29 = vperm2f128_avx(auVar11,auVar11,0x11);
    auVar2._0_8_ = dVar21 * auVar25._0_8_ + auVar7._0_8_ * dVar6 + auVar29._0_8_ * 0.0;
    auVar2._8_8_ = dVar38 * auVar25._0_8_ + auVar7._8_8_ * 0.0 + auVar29._0_8_ * 0.0;
    auVar4._16_8_ = auVar25._0_8_ * 0.0 + auVar7._0_8_ * 0.0 + auVar29._16_8_ * dVar19;
    auVar4._0_16_ = auVar2;
    auVar4._24_8_ = auVar25._0_8_ * 0.0 + auVar7._8_8_ * 0.0 + auVar29._16_8_ * 0.0;
    auVar9 = vunpcklpd_avx(auVar23,auVar32._16_16_);
    auVar7 = vshufpd_avx(auVar22,auVar22,1);
    auVar96._16_16_ = auVar7;
    auVar96._0_16_ = auVar2;
    auVar29 = vblendpd_avx(ZEXT1632(auVar9),auVar96,0xc);
    dVar6 = auVar29._0_8_;
    dVar19 = auVar29._8_8_;
    dVar20 = auVar29._16_8_;
    dVar21 = auVar29._24_8_;
    auVar9 = vshufpd_avx(auVar67,auVar67,3);
    auVar7 = vblendpd_avx(auVar23,auVar15._16_16_,1);
    dVar86 = auVar7._0_8_;
    dVar89 = auVar7._8_8_;
    auVar15 = vperm2f128_avx(auVar75,auVar75,0x11);
    auVar7 = vshufpd_avx(auVar25,auVar22,1);
    auVar29 = vblendpd_avx(auVar11,ZEXT1632(auVar7),3);
    dVar38 = auVar29._0_8_;
    dVar42 = auVar29._8_8_;
    dVar43 = auVar29._16_8_;
    dVar44 = auVar29._24_8_;
    auVar26._0_8_ = auVar67._0_8_ * dVar6 + dVar86 * auVar9._0_8_ + dVar38 * auVar15._0_8_;
    auVar26._8_8_ = auVar67._0_8_ * dVar19 + dVar89 * auVar9._8_8_ + dVar42 * auVar15._0_8_;
    auVar33._16_8_ = auVar67._0_8_ * dVar20 + auVar25._0_8_ * auVar9._0_8_ + dVar43 * auVar15._16_8_
    ;
    auVar33._0_16_ = auVar26;
    auVar33._24_8_ = auVar67._0_8_ * dVar21 + auVar25._8_8_ * auVar9._8_8_ + dVar44 * auVar15._16_8_
    ;
    auVar7 = vshufpd_avx(auVar49,auVar49,3);
    auVar29 = vperm2f128_avx(auVar54,auVar54,0x11);
    auVar50._0_8_ = dVar38 * auVar29._0_8_ + dVar86 * auVar7._0_8_ + dVar6 * auVar49._0_8_;
    auVar50._8_8_ = dVar42 * auVar29._0_8_ + dVar89 * auVar7._8_8_ + dVar19 * auVar49._0_8_;
    auVar55._16_8_ = dVar43 * auVar29._16_8_ + auVar25._0_8_ * auVar7._0_8_ + dVar20 * auVar49._0_8_
    ;
    auVar55._0_16_ = auVar50;
    auVar55._24_8_ = dVar44 * auVar29._16_8_ + auVar25._8_8_ * auVar7._8_8_ + dVar21 * auVar49._0_8_
    ;
    auVar7 = vshufpd_avx(auVar2,auVar2,3);
    auVar29 = vperm2f128_avx(auVar4,auVar4,0x11);
    auVar3._0_8_ = dVar38 * auVar29._0_8_ + dVar86 * auVar7._0_8_ + auVar2._0_8_ * dVar6;
    auVar3._8_8_ = dVar42 * auVar29._0_8_ + dVar89 * auVar7._8_8_ + auVar2._0_8_ * dVar19;
    auVar5._16_8_ = dVar43 * auVar29._16_8_ + auVar25._0_8_ * auVar7._0_8_ + auVar2._0_8_ * dVar20;
    auVar5._0_16_ = auVar3;
    auVar5._24_8_ = dVar44 * auVar29._16_8_ + auVar25._8_8_ * auVar7._8_8_ + auVar2._0_8_ * dVar21;
    *(undefined1 (*) [16])(param_1 + 0x58) = auVar26;
    dVar6 = (double)vmovlpd_avx(auVar33._16_16_);
    param_1[0x5a] = dVar6;
    param_1[0x5b] = 0.0;
    *(undefined1 (*) [16])(param_1 + 0x5c) = auVar50;
    dVar6 = (double)vmovlpd_avx(auVar55._16_16_);
    param_1[0x5e] = dVar6;
    param_1[0x5f] = 0.0;
    *(undefined1 (*) [16])(param_1 + 0x60) = auVar3;
    dVar6 = (double)vmovlps_avx(auVar5._16_16_);
    param_1[0x62] = dVar6;
    *(undefined1 (*) [16])(param_1 + 0x65) = auVar8;
    *(undefined1 (*) [16])(param_1 + 99) = auVar8;
    param_1[0x67] = 1.0;
  }
  auVar39._0_8_ = param_1[0x38] * param_1[0x34] + param_1[0x3a] * param_1[0x36];
  auVar39._8_8_ = param_1[0x39] * param_1[0x35] + param_1[0x3b] * param_1[0x37];
  auVar7 = vshufpd_avx(auVar39,auVar39,1);
  auVar40._8_8_ = 0;
  auVar40._0_8_ = auVar39._0_8_ + auVar7._0_8_;
  auVar7 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar40,2);
  auVar68._8_8_ = 0;
  auVar68._0_8_ = __real_3ff0000000000000;
  auVar81._8_8_ = 0;
  auVar81._0_8_ = __real_bff0000000000000;
  auVar7 = vblendvpd_avx(auVar81,auVar68,auVar7);
  dVar6 = auVar7._0_8_;
  param_1[0x38] = param_1[0x38] * dVar6;
  param_1[0x39] = param_1[0x39] * dVar6;
  param_1[0x3a] = param_1[0x3a] * dVar6;
  param_1[0x3b] = param_1[0x3b] * dVar6;
  auVar27._0_8_ = param_1[0x2a] * param_1[0x26] + param_1[0x2c] * param_1[0x28];
  auVar27._8_8_ = param_1[0x2b] * param_1[0x27] + param_1[0x2d] * param_1[0x29];
  auVar7 = vshufpd_avx(auVar27,auVar27,1);
  auVar28._8_8_ = 0;
  auVar28._0_8_ = auVar27._0_8_ + auVar7._0_8_;
  auVar7 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar28,2);
  auVar7 = vblendvpd_avx(auVar81,auVar68,auVar7);
  dVar6 = auVar7._0_8_;
  param_1[0x2a] = param_1[0x2a] * dVar6;
  param_1[0x2b] = param_1[0x2b] * dVar6;
  param_1[0x2c] = param_1[0x2c] * dVar6;
  param_1[0x2d] = param_1[0x2d] * dVar6;
  return;
}

// ApplyPositionConstraintSoft___un_3C_s_5B_unFPBDJointSolver_5D__3E_CundCundCundCunbREFs_5B__c_unFVector_5D_CundCundREFund_avx @ 1409f4330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPositionConstraintSoft___un_3C_s_5B_unFPBDJointSolver_5D__3E_CundCundCundCunbREFs_5B__c_unFVector_5D_CundCundREFund_avx
               (double *param_1,double param_2,double param_3,double param_4,byte param_5,
               double *param_6,double param_7,double param_8,double *param_9,
               undefined1 (*param_10) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar18;
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  double dVar19;
  double dVar20;
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
  double dVar61;
  double dVar62;
  double dVar64;
  undefined1 auVar37 [32];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  double dVar63;
  double dVar65;
  undefined1 auVar42 [32];
  undefined1 auVar44 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar54 [32];
  undefined1 auVar56 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [32];
  undefined1 auVar79 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar84 [32];
  undefined1 auVar70 [16];
  undefined1 auVar85 [32];
  undefined1 auVar87 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar92 [32];
  double dVar93;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar103 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  double dVar112;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  double dVar124;
  double dVar125;
  double dVar126;
  undefined1 auVar118 [32];
  undefined1 auVar119 [32];
  undefined1 auVar121 [32];
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
  undefined1 auVar137 [32];
  undefined1 auVar138 [32];
  undefined1 auVar139 [32];
  undefined1 in_ZMM6 [64];
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
  undefined1 auVar154 [32];
  undefined1 auVar155 [32];
  undefined1 auVar160 [32];
  undefined1 auVar161 [32];
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
  double dVar182;
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  double dVar190;
  undefined1 auVar186 [16];
  double dVar191;
  undefined1 auVar187 [32];
  undefined1 auVar188 [32];
  double dVar192;
  undefined1 auVar189 [32];
  double dVar193;
  undefined1 auVar194 [16];
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [32];
  undefined1 auVar202 [32];
  undefined1 auVar203 [32];
  undefined1 auVar205 [32];
  undefined1 auVar207 [16];
  ulonglong uVar206;
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [32];
  undefined1 auVar214 [32];
  undefined1 auVar217 [32];
  undefined1 auVar220 [32];
  undefined1 auVar221 [16];
  undefined1 auVar222 [16];
  undefined1 auVar223 [16];
  undefined1 auVar224 [32];
  undefined1 auVar225 [32];
  undefined1 auVar226 [32];
  undefined1 auVar227 [32];
  undefined1 auVar228 [32];
  undefined1 auVar229 [32];
  double dVar230;
  undefined1 auVar231 [16];
  undefined1 auVar232 [16];
  undefined1 auVar233 [16];
  undefined1 auVar234 [16];
  undefined1 auVar235 [32];
  undefined1 auVar236 [32];
  undefined1 auVar237 [32];
  undefined1 auVar238 [32];
  undefined1 auVar239 [32];
  undefined1 auVar240 [32];
  double dVar241;
  double dVar246;
  undefined1 auVar242 [16];
  undefined1 auVar243 [16];
  undefined1 auVar244 [32];
  undefined1 auVar245 [32];
  undefined1 auVar247 [16];
  undefined1 auVar248 [16];
  undefined1 auVar249 [32];
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar36 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar43 [32];
  undefined1 auVar45 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar53 [32];
  undefined1 auVar55 [32];
  undefined1 auVar57 [32];
  undefined1 auVar60 [32];
  undefined1 auVar78 [32];
  undefined1 auVar80 [32];
  undefined1 auVar83 [32];
  undefined1 auVar86 [32];
  undefined1 auVar88 [32];
  undefined1 auVar91 [32];
  undefined1 auVar102 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 auVar120 [32];
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  undefined1 auVar152 [32];
  undefined1 auVar153 [32];
  undefined1 auVar156 [32];
  undefined1 auVar157 [32];
  undefined1 auVar158 [32];
  undefined1 auVar159 [32];
  undefined1 auVar162 [32];
  undefined1 auVar173 [32];
  undefined1 auVar174 [32];
  undefined1 auVar175 [32];
  undefined1 auVar176 [32];
  undefined1 auVar177 [32];
  undefined1 auVar178 [32];
  undefined1 auVar179 [32];
  undefined1 auVar180 [32];
  undefined1 auVar181 [32];
  undefined1 auVar201 [32];
  undefined1 auVar204 [32];
  undefined1 auVar215 [32];
  undefined1 auVar216 [32];
  undefined1 auVar218 [32];
  undefined1 auVar219 [32];
  
  uVar206 = __real_8000000000000000;
  auVar97 = vpcmpeqd_avx(in_ZMM6._0_16_,in_ZMM6._0_16_);
  auVar113 = vpcmpgtd_avx(param_10[1],auVar97);
  auVar97 = vpcmpgtd_avx(*param_10,auVar97);
  auVar97 = vpor_avx(auVar97,auVar113);
  auVar113._8_8_ = 0;
  auVar113._0_8_ = param_1[0x22];
  auVar187._24_8_ = 0;
  auVar187._0_24_ = *(undefined1 (*) [24])(param_1 + 0x20);
  auVar132._8_8_ = 0;
  auVar132._0_8_ = param_1[0x30];
  auVar7._24_8_ = 0;
  auVar7._0_24_ = *(undefined1 (*) [24])(param_1 + 0x2e);
  auVar7 = vsubpd_avx(auVar187,auVar7);
  dVar62 = *param_6;
  dVar64 = param_6[1];
  auVar213._0_8_ = param_6[1] * auVar7._0_8_;
  auVar213._8_8_ = param_6[2] * auVar7._8_8_;
  auVar213._16_8_ = *param_6 * auVar7._16_8_;
  auVar213._24_8_ = auVar7._24_8_ * 0.0;
  auVar8._0_16_ = auVar7._0_16_;
  auVar8._16_16_ = auVar8._0_16_;
  auVar113 = vsubpd_avx(auVar113,auVar132);
  auVar7 = vshufpd_avx(auVar8,ZEXT1632(auVar113),1);
  dVar20 = param_6[2];
  auVar9._0_8_ = dVar62 * auVar7._0_8_;
  auVar9._8_8_ = dVar64 * auVar7._8_8_;
  auVar9._16_8_ = dVar20 * auVar7._16_8_;
  auVar9._24_8_ = auVar7._24_8_ * 0.0;
  auVar8 = vsubpd_avx(auVar213,auVar9);
  auVar70._8_8_ = 0;
  auVar70._0_8_ = param_1[0x25];
  auVar214._24_8_ = 0;
  auVar214._0_24_ = *(undefined1 (*) [24])(param_1 + 0x23);
  auVar140._8_8_ = 0;
  auVar140._0_8_ = param_1[0x33];
  auVar10._24_8_ = 0;
  auVar10._0_24_ = *(undefined1 (*) [24])(param_1 + 0x31);
  auVar7 = vsubpd_avx(auVar214,auVar10);
  auVar224._0_8_ = param_6[1] * auVar7._0_8_;
  auVar224._8_8_ = param_6[2] * auVar7._8_8_;
  auVar224._16_8_ = *param_6 * auVar7._16_8_;
  auVar224._24_8_ = auVar7._24_8_ * 0.0;
  auVar11._0_16_ = auVar7._0_16_;
  auVar11._16_16_ = auVar11._0_16_;
  auVar113 = vsubpd_avx(auVar70,auVar140);
  auVar7 = vshufpd_avx(auVar11,ZEXT1632(auVar113),1);
  auVar12._0_8_ = dVar62 * auVar7._0_8_;
  auVar12._8_8_ = dVar64 * auVar7._8_8_;
  auVar12._16_8_ = dVar20 * auVar7._16_8_;
  auVar12._24_8_ = auVar7._24_8_ * 0.0;
  auVar9 = vsubpd_avx(auVar224,auVar12);
  auVar70 = auVar8._0_16_;
  auVar113 = vshufpd_avx(auVar70,auVar70,3);
  auVar7 = vperm2f128_avx(auVar8,auVar8,0x11);
  dVar193 = auVar8._0_8_;
  dVar112 = auVar113._0_8_ * param_1[0x48] + auVar7._0_8_ * param_1[0x4c] + dVar193 * param_1[0x50];
  dVar124 = auVar113._8_8_ * param_1[0x49] + auVar7._0_8_ * param_1[0x4d] + dVar193 * param_1[0x51];
  dVar125 = auVar113._0_8_ * param_1[0x4a] + auVar7._16_8_ * param_1[0x4e] + dVar193 * param_1[0x52]
  ;
  dVar126 = auVar113._8_8_ * 0.0 + auVar7._16_8_ * 0.0 + dVar193 * 0.0;
  auVar132 = auVar9._0_16_;
  auVar113 = vshufpd_avx(auVar132,auVar132,3);
  auVar7 = vperm2f128_avx(auVar9,auVar9,0x11);
  dVar193 = auVar9._0_8_;
  auVar1._0_8_ = dVar193 * param_1[0x60] +
                 auVar7._0_8_ * param_1[0x5c] + auVar113._0_8_ * param_1[0x58];
  auVar1._8_8_ = dVar193 * param_1[0x61] +
                 auVar7._0_8_ * param_1[0x5d] + auVar113._8_8_ * param_1[0x59];
  dVar18 = dVar193 * param_1[0x62] + auVar7._16_8_ * param_1[0x5e] + auVar113._0_8_ * param_1[0x5a];
  dVar19 = dVar193 * 0.0 + auVar7._16_8_ * 0.0 + auVar113._8_8_ * 0.0;
  auVar225._16_16_ = auVar70;
  auVar225._0_16_ = auVar70;
  auVar7 = vshufpd_avx(auVar225,ZEXT1632(auVar8._16_16_),1);
  auVar127._0_8_ = auVar7._0_8_ * dVar112;
  auVar127._8_8_ = auVar7._8_8_ * dVar124;
  auVar113 = vshufpd_avx(auVar127,auVar127,1);
  auVar137._16_16_ = auVar132;
  auVar137._0_16_ = auVar132;
  auVar8 = vshufpd_avx(auVar137,ZEXT1632(auVar9._16_16_),1);
  auVar128._0_8_ = auVar8._0_8_ * auVar1._0_8_;
  auVar128._8_8_ = auVar8._8_8_ * auVar1._8_8_;
  auVar70 = vshufpd_avx(auVar128,auVar128,1);
  dVar193 = param_1[0x1e];
  dVar182 = param_1[0x1f];
  dVar61 = auVar7._16_8_ * dVar125 + auVar113._0_8_ + auVar127._0_8_ + dVar193 + dVar182 +
           auVar8._16_8_ * dVar18 + auVar128._0_8_ + auVar70._0_8_;
  dVar230 = 0.0;
  if ((((SUB161(auVar97 >> 0x1f,0) & 1) == 0 && (SUB161(auVar97 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar97 >> 0x5f,0) & 1) == 0) && -1 < auVar97[0xf]) {
    if (__real_3f1a36e2eb1c432d < param_4) {
      auVar237._24_8_ = 0;
      auVar237._0_24_ = *(undefined1 (*) [24])(param_1 + 0x76);
      auVar7 = vsubpd_avx(auVar187,auVar237);
      auVar238._24_8_ = 0;
      auVar238._0_24_ = *(undefined1 (*) [24])(param_1 + 0x79);
      auVar8 = vsubpd_avx(auVar214,auVar238);
      auVar7 = vsubpd_avx(auVar7,auVar8);
      auVar184._0_8_ = dVar62 * auVar7._0_8_;
      auVar184._8_8_ = dVar64 * auVar7._8_8_;
      auVar97 = vshufpd_avx(auVar184,auVar184,1);
      dVar230 = param_8 * param_2 + dVar20 * auVar7._16_8_ + auVar184._0_8_ + auVar97._0_8_;
    }
    dVar20 = __real_3ff0000000000000;
    if ((param_5 & 1) != 0) {
      dVar20 = __real_3ff0000000000000 / (dVar193 + dVar182);
    }
    dVar62 = dVar20 * param_3 * param_2 * param_2;
    param_2 = dVar20 * param_4 * param_2;
    dVar230 = ((dVar62 * param_7 - dVar230 * param_2) - *param_9) *
              (__real_3ff0000000000000 / (__real_3ff0000000000000 + dVar61 * (param_2 + dVar62))) *
              param_1[0x99];
    dVar20 = dVar193 * dVar230;
    dVar62 = param_6[1];
    dVar64 = param_6[2];
    dVar93 = *param_6;
    dVar61 = dVar230 * (double)((ulonglong)dVar182 ^ __real_8000000000000000);
    auVar169._0_8_ = dVar93 * dVar20 + param_1[0x2e];
    auVar169._8_8_ = dVar62 * dVar20 + param_1[0x2f];
    auVar178._16_8_ = dVar64 * dVar20 + param_1[0x30];
    auVar178._0_16_ = auVar169;
    auVar178._24_8_ = dVar20 * 0.0 + 0.0;
    *(undefined1 (*) [16])(param_1 + 0x2e) = auVar169;
    dVar20 = (double)vmovlps_avx(auVar178._16_16_);
    param_1[0x30] = dVar20;
    auVar97._0_8_ = param_1[0x31] + dVar93 * dVar61;
    auVar97._8_8_ = param_1[0x32] + dVar62 * dVar61;
    auVar106._16_8_ = param_1[0x33] + dVar64 * dVar61;
    auVar106._0_16_ = auVar97;
    auVar106._24_8_ = dVar61 * 0.0 + 0.0;
    dVar20 = (double)vmovlpd_avx(auVar97);
    param_1[0x31] = dVar20;
    auVar97 = vshufpd_avx(auVar97,auVar106._16_16_,1);
    *(undefined1 (*) [16])(param_1 + 0x32) = auVar97;
    dVar192 = _UNK_150b54438;
    dVar191 = _UNK_150b54430;
    dVar190 = _UNK_150b54428;
    dVar65 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
    dVar63 = _UNK_150b54418;
    dVar93 = _UNK_150b54410;
    dVar64 = _UNK_150b54408;
    dVar62 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
    dVar61 = _UNK_15076c6f8;
    dVar20 = ___xmm_bff00000000000003ff0000000000000;
    if (0.0 < dVar193) {
      auVar146._0_8_ = dVar230 * dVar112;
      auVar146._8_8_ = dVar230 * dVar124;
      auVar157._16_8_ = dVar230 * dVar125;
      auVar157._0_16_ = auVar146;
      auVar157._24_8_ = dVar230 * dVar126;
      dVar182 = param_1[0x34];
      auVar222._8_8_ = 0;
      auVar222._0_8_ = param_1[0x37];
      auVar97 = vmovhps_avx(auVar222,param_1[0x36]);
      auVar233._8_8_ = 0;
      auVar233._0_8_ = param_1[0x35];
      auVar113 = vmovhps_avx(auVar233,param_1[0x34]);
      auVar70 = vshufpd_avx(auVar146,auVar146,3);
      auVar7 = vperm2f128_avx(auVar157,auVar157,0x11);
      dVar182 = dVar182 + (auVar113._0_8_ * auVar7._0_8_ *
                           ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
                          auVar70._0_8_ * param_1[0x36] *
                          ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
                          dVar182 * 0.0 +
                          auVar146._0_8_ * auVar97._0_8_ * ___xmm_bff00000000000003ff0000000000000)
                          * ___ymm_3fe00000000000003fe00000000000003fe00000000000003fe0000000000000;
      dVar112 = param_1[0x35] +
                (auVar113._8_8_ * auVar7._0_8_ * _UNK_150b54428 +
                auVar70._8_8_ * param_1[0x37] * _UNK_150b54408 +
                param_1[0x35] * 0.0 + auVar146._0_8_ * auVar97._8_8_ * _UNK_15076c6f8) *
                _UNK_150aa8f28;
      dVar124 = param_1[0x36] +
                (auVar97._0_8_ * auVar7._16_8_ * _UNK_150b54430 +
                auVar70._0_8_ * param_1[0x34] * _UNK_150b54410 +
                param_1[0x36] * 0.0 +
                auVar146._0_8_ * auVar113._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
                _UNK_150aa8f30;
      dVar125 = param_1[0x37] +
                (auVar97._8_8_ * auVar7._16_8_ * _UNK_150b54438 +
                auVar70._8_8_ * param_1[0x35] * _UNK_150b54418 +
                param_1[0x37] * 0.0 + auVar146._0_8_ * auVar113._8_8_ * _UNK_15076c6f8) *
                _UNK_150aa8f38;
      auVar197._0_8_ = dVar182 * dVar182 + dVar124 * dVar124;
      auVar197._8_8_ = dVar112 * dVar112 + dVar125 * dVar125;
      auVar97 = vshufpd_avx(auVar197,auVar197,1);
      dVar193 = auVar197._0_8_ + auVar97._0_8_;
      auVar210._8_8_ = 0;
      auVar210._0_8_ = __real_3e45798ee2308c3a;
      auVar198._8_8_ = 0;
      auVar198._0_8_ = dVar193;
      auVar97 = vcmpsd_avx(auVar210,auVar198,6);
      uVar206 = ~auVar97._0_8_ & __real_ffffffffffffffff;
      dVar193 = __real_3ff0000000000000 / SQRT(dVar193);
      auVar211._0_8_ =
           (double)(((ulonglong)(dVar182 * dVar193) ^
                    ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) &
                   uVar206);
      auVar211._8_8_ = (double)(((ulonglong)(dVar112 * dVar193) ^ _UNK_150b54548) & uVar206);
      auVar218._16_8_ = (double)(((ulonglong)(dVar124 * dVar193) ^ _UNK_150b54550) & uVar206);
      auVar218._0_16_ = auVar211;
      auVar218._24_8_ = (double)(((ulonglong)(dVar125 * dVar193) ^ _UNK_150b54558) & uVar206);
      auVar203._0_8_ =
           (double)((ulonglong)auVar211._0_8_ ^
                   ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
      auVar203._8_8_ = (double)((ulonglong)auVar211._8_8_ ^ _UNK_150b54548);
      auVar203._16_8_ = (double)((ulonglong)auVar218._16_8_ ^ _UNK_150b54550);
      auVar203._24_8_ = (double)((ulonglong)auVar218._24_8_ ^ _UNK_150b54558);
      *(undefined1 (*) [16])(param_1 + 0x34) = auVar211;
      *(undefined1 (*) [16])(param_1 + 0x36) = auVar203._16_16_;
      auVar223._8_8_ = 0;
      auVar223._0_8_ = param_1[4];
      auVar97 = vmovhps_avx(auVar223,param_1[7]);
      auVar228._0_8_ = SUB168(*(undefined1 (*) [16])(param_1 + 5),0) * auVar203._0_8_;
      auVar228._8_8_ = SUB168(*(undefined1 (*) [16])(param_1 + 5),8) * auVar203._8_8_;
      auVar228._16_8_ = auVar97._0_8_ * auVar203._16_8_;
      auVar228._24_8_ = auVar97._8_8_ * auVar203._24_8_;
      auVar245._16_16_ = auVar211;
      auVar245._0_16_ = auVar211;
      auVar9 = vperm2f128_avx(auVar203,auVar203,0x11);
      auVar7 = vshufpd_avx(auVar245,auVar9,9);
      auVar85._0_8_ = auVar7._0_8_ * param_1[4];
      auVar85._8_8_ = auVar7._8_8_ * param_1[5];
      auVar85._16_8_ = auVar7._16_8_ * param_1[6];
      auVar85._24_8_ = auVar7._24_8_ * param_1[7];
      auVar7 = vsubpd_avx(auVar228,auVar85);
      auVar71._0_8_ = auVar7._0_8_ + auVar7._0_8_;
      auVar71._8_8_ = auVar7._8_8_ + auVar7._8_8_;
      auVar86._16_8_ = auVar7._16_8_ + auVar7._16_8_;
      auVar86._0_16_ = auVar71;
      auVar86._24_8_ = auVar7._24_8_ + auVar7._24_8_;
      auVar7 = vshufpd_avx(auVar9,auVar9,0xf);
      auVar107._16_16_ = auVar71;
      auVar107._0_16_ = auVar71;
      auVar8 = vshufpd_avx(auVar107,ZEXT1632(auVar86._16_16_),1);
      dVar112 = auVar7._0_8_;
      dVar124 = auVar7._8_8_;
      dVar125 = auVar7._16_8_;
      dVar126 = auVar7._24_8_;
      auVar108._0_8_ = auVar211._0_8_ * auVar71._0_8_;
      auVar108._8_8_ = auVar211._8_8_ * auVar71._8_8_;
      auVar108._16_8_ = auVar218._16_8_ * auVar86._16_8_;
      auVar108._24_8_ = auVar218._24_8_ * auVar86._24_8_;
      auVar7 = vshufpd_avx(auVar245,ZEXT1632(auVar218._16_16_),1);
      auVar87._0_8_ = auVar7._0_8_ * auVar71._0_8_;
      auVar87._8_8_ = auVar7._8_8_ * auVar71._8_8_;
      auVar87._16_8_ = auVar7._16_8_ * auVar86._16_8_;
      auVar87._24_8_ = auVar7._24_8_ * auVar86._24_8_;
      auVar7 = vperm2f128_avx(auVar108,auVar108,1);
      auVar7 = vshufpd_avx(auVar7,auVar108,4);
      auVar7 = vsubpd_avx(auVar87,auVar7);
      auVar28._0_8_ = param_1[0x2e] + param_1[4] + dVar112 * auVar8._0_8_ + auVar7._0_8_;
      auVar28._8_8_ = param_1[0x2f] + param_1[5] + dVar124 * auVar8._8_8_ + auVar7._8_8_;
      auVar49._16_8_ = param_1[0x30] + param_1[6] + dVar125 * auVar8._16_8_ + auVar7._16_8_;
      auVar49._0_16_ = auVar28;
      auVar49._24_8_ = dVar126 * auVar8._24_8_ + 0.0 + auVar7._24_8_ + 0.0;
      *(undefined1 (*) [16])(param_1 + 0x20) = auVar28;
      dVar193 = (double)vmovlps_avx(auVar49._16_16_);
      param_1[0x22] = dVar193;
      auVar70 = vshufps_avx(auVar211,auVar211,0x44);
      auVar98._8_8_ = 0;
      auVar98._0_8_ = param_1[1];
      auVar113 = vmovhps_avx(auVar98,*param_1);
      auVar248._8_8_ = 0;
      auVar248._0_8_ = param_1[3];
      auVar97 = vmovhpd_avx(auVar248,param_1[2]);
      dVar241 = auVar70._0_8_;
      dVar246 = auVar70._8_8_;
      auVar70 = vshufps_avx(auVar211,auVar211,0xee);
      dVar193 = auVar70._0_8_;
      dVar182 = auVar70._8_8_;
      param_1[0x26] =
           auVar113._0_8_ * auVar9._0_8_ * dVar65 +
           param_1[2] * dVar193 * dVar62 + *param_1 * dVar112 + dVar20 * dVar241 * auVar97._0_8_;
      param_1[0x27] =
           auVar113._8_8_ * auVar9._0_8_ * dVar190 +
           param_1[3] * dVar182 * dVar64 + param_1[1] * dVar124 + dVar61 * dVar246 * auVar97._8_8_;
      param_1[0x28] =
           auVar97._0_8_ * auVar9._16_8_ * dVar191 +
           *param_1 * dVar193 * dVar93 + param_1[2] * dVar125 + dVar20 * dVar241 * auVar113._0_8_;
      param_1[0x29] =
           auVar97._8_8_ * auVar9._16_8_ * dVar192 +
           param_1[1] * dVar182 * dVar63 + param_1[3] * dVar126 + dVar61 * dVar246 * auVar113._8_8_;
      dVar20 = auVar203._0_8_ + auVar203._0_8_;
      dVar61 = auVar203._8_8_ + auVar203._8_8_;
      dVar62 = auVar203._16_8_ + auVar203._16_8_;
      dVar64 = auVar203._24_8_ + auVar203._24_8_;
      auVar121._0_8_ = dVar241 * dVar20;
      auVar121._8_8_ = dVar246 * dVar61;
      auVar121._16_8_ = dVar241 * dVar62;
      auVar121._24_8_ = dVar246 * dVar64;
      auVar72._0_8_ = dVar20 * dVar193;
      auVar72._8_8_ = dVar61 * dVar182;
      auVar88._16_8_ = dVar62 * dVar193;
      auVar88._0_16_ = auVar72;
      auVar88._24_8_ = dVar64 * dVar182;
      auVar50._0_8_ = dVar112 * dVar20;
      auVar50._8_8_ = dVar124 * dVar61;
      auVar50._16_8_ = dVar125 * dVar62;
      auVar50._24_8_ = dVar126 * dVar64;
      auVar7 = vperm2f128_avx(auVar88,auVar121,0x21);
      auVar7 = vshufpd_avx(auVar7,ZEXT1632(auVar121._16_16_),4);
      auVar147._0_8_ = auVar50._0_8_ + auVar7._0_8_;
      auVar147._8_8_ = auVar50._8_8_ + auVar7._8_8_;
      auVar158._16_8_ = auVar50._16_8_ + auVar7._16_8_;
      auVar158._0_16_ = auVar147;
      auVar158._24_8_ = auVar50._24_8_ + auVar7._24_8_;
      auVar9 = vsubpd_avx(auVar7,auVar50);
      auVar97 = vshufpd_avx(auVar72,auVar72,1);
      auVar73._8_8_ = auVar121._0_8_;
      auVar73._0_8_ = auVar121._0_8_;
      auVar89._16_16_ = auVar73;
      auVar89._0_16_ = auVar73;
      auVar7 = vblendpd_avx(auVar89,ZEXT1632(auVar97),1);
      auVar51._16_16_ = auVar97;
      auVar51._0_16_ = auVar1;
      auVar8 = vblendpd_avx(ZEXT1632(CONCAT88(auVar218._16_8_ * dVar62,auVar218._16_8_ * dVar62)),
                            auVar51,0xc);
      auVar52._0_8_ = auVar7._0_8_ + auVar8._0_8_;
      auVar52._8_8_ = auVar7._8_8_ + auVar8._8_8_;
      auVar52._16_8_ = auVar7._16_8_ + auVar8._16_8_;
      auVar52._24_8_ = auVar7._24_8_ + auVar8._24_8_;
      auVar90._8_8_ = __real_3ff0000000000000;
      auVar90._0_8_ = __real_3ff0000000000000;
      auVar90._16_8_ = __real_3ff0000000000000;
      auVar90._24_8_ = __real_3ff0000000000000;
      auVar8 = vsubpd_avx(auVar90,auVar52);
      dVar62 = auVar8._0_8_;
      dVar20 = param_1[0x18];
      dVar193 = param_1[0x1a];
      auVar7 = vperm2f128_avx(auVar9,auVar9,0x11);
      auVar70 = ZEXT816(0) << 0x40;
      auVar97 = vmovhpd_avx(auVar70,param_1[0x19]);
      dVar182 = auVar97._0_8_;
      dVar61 = auVar97._8_8_;
      auVar97 = vshufpd_avx(auVar147,auVar147,3);
      auVar212._0_8_ = auVar97._0_8_ * 0.0 + dVar182 * auVar7._0_8_ + dVar20 * dVar62;
      auVar212._8_8_ = auVar97._8_8_ * 0.0 + dVar61 * auVar7._0_8_ + dVar62 * 0.0;
      auVar219._16_8_ = dVar193 * auVar97._0_8_ + auVar7._16_8_ * 0.0 + dVar62 * 0.0;
      auVar219._0_16_ = auVar212;
      auVar219._24_8_ = auVar97._8_8_ * 0.0 + auVar7._16_8_ * 0.0 + dVar62 * 0.0;
      auVar7 = vperm2f128_avx(auVar158,auVar158,0x11);
      auVar127 = auVar8._0_16_;
      auVar97 = vshufpd_avx(auVar127,auVar127,3);
      dVar62 = auVar9._0_8_;
      auVar199._0_8_ = dVar62 * 0.0 + dVar20 * auVar7._0_8_ + dVar182 * auVar97._0_8_;
      auVar199._8_8_ = dVar62 * 0.0 + auVar7._0_8_ * 0.0 + dVar61 * auVar97._8_8_;
      auVar204._16_8_ = dVar193 * dVar62 + auVar7._16_8_ * 0.0 + auVar97._0_8_ * 0.0;
      auVar204._0_16_ = auVar199;
      auVar204._24_8_ = dVar62 * 0.0 + auVar7._16_8_ * 0.0 + auVar97._8_8_ * 0.0;
      auVar132 = auVar9._0_16_;
      auVar97 = vshufpd_avx(auVar132,auVar132,3);
      auVar7 = vperm2f128_avx(auVar8,auVar8,0x11);
      auVar116._0_8_ = dVar20 * auVar97._0_8_ + dVar182 * auVar147._0_8_ + auVar7._0_8_ * 0.0;
      auVar116._8_8_ = auVar97._8_8_ * 0.0 + dVar61 * auVar147._0_8_ + auVar7._0_8_ * 0.0;
      auVar122._16_8_ = auVar97._0_8_ * 0.0 + auVar147._0_8_ * 0.0 + dVar193 * auVar7._16_8_;
      auVar122._0_16_ = auVar116;
      auVar122._24_8_ = auVar97._8_8_ * 0.0 + auVar147._0_8_ * 0.0 + auVar7._16_8_ * 0.0;
      auVar113 = vunpcklpd_avx(auVar127,auVar158._16_16_);
      auVar97 = vshufpd_avx(auVar132,auVar132,1);
      auVar109._16_16_ = auVar97;
      auVar109._0_16_ = auVar1;
      auVar7 = vblendpd_avx(ZEXT1632(auVar113),auVar109,0xc);
      dVar62 = auVar7._0_8_;
      dVar64 = auVar7._8_8_;
      dVar112 = auVar7._16_8_;
      dVar124 = auVar7._24_8_;
      auVar113 = vshufpd_avx(auVar212,auVar212,3);
      auVar97 = vblendpd_avx(auVar127,auVar9._16_16_,1);
      dVar125 = auVar97._0_8_;
      dVar126 = auVar97._8_8_;
      auVar97 = vshufpd_avx(auVar147,auVar132,1);
      auVar9 = vperm2f128_avx(auVar219,auVar219,0x11);
      auVar7 = vblendpd_avx(auVar8,ZEXT1632(auVar97),3);
      dVar20 = auVar7._0_8_;
      dVar193 = auVar7._8_8_;
      dVar182 = auVar7._16_8_;
      dVar61 = auVar7._24_8_;
      auVar148._0_8_ = dVar20 * auVar9._0_8_ + dVar62 * auVar212._0_8_ + dVar125 * auVar113._0_8_;
      auVar148._8_8_ = dVar193 * auVar9._0_8_ + dVar64 * auVar212._0_8_ + dVar126 * auVar113._8_8_;
      auVar159._16_8_ =
           dVar182 * auVar9._16_8_ + dVar112 * auVar212._0_8_ + auVar147._0_8_ * auVar113._0_8_;
      auVar159._0_16_ = auVar148;
      auVar159._24_8_ =
           dVar61 * auVar9._16_8_ + dVar124 * auVar212._0_8_ + auVar147._8_8_ * auVar113._8_8_;
      auVar97 = vshufpd_avx(auVar199,auVar199,3);
      auVar7 = vperm2f128_avx(auVar204,auVar204,0x11);
      auVar29._0_8_ = dVar20 * auVar7._0_8_ + dVar62 * auVar199._0_8_ + dVar125 * auVar97._0_8_;
      auVar29._8_8_ = dVar193 * auVar7._0_8_ + dVar64 * auVar199._0_8_ + dVar126 * auVar97._8_8_;
      auVar53._16_8_ =
           dVar182 * auVar7._16_8_ + dVar112 * auVar199._0_8_ + auVar147._0_8_ * auVar97._0_8_;
      auVar53._0_16_ = auVar29;
      auVar53._24_8_ =
           dVar61 * auVar7._16_8_ + dVar124 * auVar199._0_8_ + auVar147._8_8_ * auVar97._8_8_;
      auVar97 = vshufpd_avx(auVar116,auVar116,3);
      auVar7 = vperm2f128_avx(auVar122,auVar122,0x11);
      auVar74._0_8_ = dVar20 * auVar7._0_8_ + dVar125 * auVar97._0_8_ + dVar62 * auVar116._0_8_;
      auVar74._8_8_ = dVar193 * auVar7._0_8_ + dVar126 * auVar97._8_8_ + dVar64 * auVar116._0_8_;
      auVar91._16_8_ =
           dVar182 * auVar7._16_8_ + auVar147._0_8_ * auVar97._0_8_ + dVar112 * auVar116._0_8_;
      auVar91._0_16_ = auVar74;
      auVar91._24_8_ =
           dVar61 * auVar7._16_8_ + auVar147._8_8_ * auVar97._8_8_ + dVar124 * auVar116._0_8_;
      *(undefined1 (*) [16])(param_1 + 0x48) = auVar148;
      dVar20 = (double)vmovlpd_avx(auVar159._16_16_);
      param_1[0x4a] = dVar20;
      param_1[0x4b] = 0.0;
      *(undefined1 (*) [16])(param_1 + 0x4c) = auVar29;
      dVar20 = (double)vmovlps_avx(auVar53._16_16_);
      param_1[0x4e] = dVar20;
      param_1[0x4f] = 0.0;
      *(undefined1 (*) [16])(param_1 + 0x50) = auVar74;
      uVar206 = __real_8000000000000000;
      dVar20 = (double)vmovlpd_avx(auVar91._16_16_);
      param_1[0x52] = dVar20;
      *(undefined1 (*) [16])(param_1 + 0x55) = auVar70;
      *(undefined1 (*) [16])(param_1 + 0x53) = auVar70;
      param_1[0x57] = 1.0;
      dVar182 = param_1[0x1f];
    }
    dVar93 = _UNK_150b54438;
    dVar126 = _UNK_150b54430;
    dVar125 = _UNK_150b54428;
    dVar124 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
    dVar112 = _UNK_150b54418;
    dVar64 = _UNK_150b54410;
    dVar62 = _UNK_150b54408;
    dVar61 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
    dVar193 = _UNK_15076c6f8;
    dVar20 = ___xmm_bff00000000000003ff0000000000000;
    if (dVar182 <= 0.0) goto LAB_1409f5ddf;
    auVar117._0_8_ = (double)((ulonglong)dVar230 ^ uVar206) * auVar1._0_8_;
    auVar117._8_8_ = (double)((ulonglong)dVar230 ^ uVar206) * auVar1._8_8_;
    auVar123._16_8_ = (double)((ulonglong)dVar230 ^ uVar206) * dVar18;
    auVar123._0_16_ = auVar117;
    auVar123._24_8_ = (double)((ulonglong)dVar230 ^ uVar206) * dVar19;
    dVar18 = param_1[0x38];
    auVar99._8_8_ = 0;
    auVar99._0_8_ = param_1[0x3b];
    auVar97 = vmovhps_avx(auVar99,param_1[0x3a]);
    auVar186._8_8_ = 0;
    auVar186._0_8_ = param_1[0x39];
    auVar113 = vmovhps_avx(auVar186,param_1[0x38]);
    auVar70 = vshufpd_avx(auVar117,auVar117,3);
    auVar7 = vperm2f128_avx(auVar123,auVar123,0x11);
    dVar18 = dVar18 + (auVar7._0_8_ * auVar113._0_8_ *
                       ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
                      auVar70._0_8_ * param_1[0x3a] *
                      ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
                      auVar117._0_8_ * auVar97._0_8_ * ___xmm_bff00000000000003ff0000000000000 +
                      dVar18 * 0.0) *
                      ___ymm_3fe00000000000003fe00000000000003fe00000000000003fe0000000000000;
    dVar19 = param_1[0x39] +
             (auVar7._0_8_ * auVar113._8_8_ * _UNK_150b54428 +
             auVar70._8_8_ * param_1[0x3b] * _UNK_150b54408 +
             auVar117._0_8_ * auVar97._8_8_ * _UNK_15076c6f8 + param_1[0x39] * 0.0) * _UNK_150aa8f28
    ;
    dVar63 = param_1[0x3a] +
             (auVar7._16_8_ * auVar97._0_8_ * _UNK_150b54430 +
             auVar70._0_8_ * param_1[0x38] * _UNK_150b54410 +
             auVar117._0_8_ * auVar113._0_8_ * ___xmm_bff00000000000003ff0000000000000 +
             param_1[0x3a] * 0.0) * _UNK_150aa8f30;
    dVar65 = param_1[0x3b] +
             (auVar7._16_8_ * auVar97._8_8_ * _UNK_150b54438 +
             auVar70._8_8_ * param_1[0x39] * _UNK_150b54418 +
             auVar117._0_8_ * auVar113._8_8_ * _UNK_15076c6f8 + param_1[0x3b] * 0.0) *
             _UNK_150aa8f38;
    auVar133._0_8_ = dVar18 * dVar18 + dVar63 * dVar63;
    auVar133._8_8_ = dVar19 * dVar19 + dVar65 * dVar65;
    auVar97 = vshufpd_avx(auVar133,auVar133,1);
    dVar182 = auVar133._0_8_ + auVar97._0_8_;
    auVar149._8_8_ = 0;
    auVar149._0_8_ = __real_3e45798ee2308c3a;
    auVar134._8_8_ = 0;
    auVar134._0_8_ = dVar182;
    auVar97 = vcmpsd_avx(auVar149,auVar134,6);
    uVar206 = ~auVar97._0_8_ & __real_ffffffffffffffff;
    dVar182 = __real_3ff0000000000000 / SQRT(dVar182);
    auVar170._0_8_ =
         (double)(((ulonglong)(dVar18 * dVar182) ^
                  ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) & uVar206
                 );
    auVar170._8_8_ = (double)(((ulonglong)(dVar19 * dVar182) ^ _UNK_150b54548) & uVar206);
    auVar179._16_8_ = (double)(((ulonglong)(dVar63 * dVar182) ^ _UNK_150b54550) & uVar206);
    auVar179._0_16_ = auVar170;
    auVar179._24_8_ = (double)(((ulonglong)(dVar65 * dVar182) ^ _UNK_150b54558) & uVar206);
    auVar160._0_8_ =
         (double)((ulonglong)auVar170._0_8_ ^
                 ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
    auVar160._8_8_ = (double)((ulonglong)auVar170._8_8_ ^ _UNK_150b54548);
    auVar160._16_8_ = (double)((ulonglong)auVar179._16_8_ ^ _UNK_150b54550);
    auVar160._24_8_ = (double)((ulonglong)auVar179._24_8_ ^ _UNK_150b54558);
    *(undefined1 (*) [16])(param_1 + 0x38) = auVar170;
    *(undefined1 (*) [16])(param_1 + 0x3a) = auVar160._16_16_;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = param_1[0x10];
    auVar97 = vmovhps_avx(auVar30,param_1[0x13]);
    auVar54._0_8_ = SUB168(*(undefined1 (*) [16])(param_1 + 0x11),0) * auVar160._0_8_;
    auVar54._8_8_ = SUB168(*(undefined1 (*) [16])(param_1 + 0x11),8) * auVar160._8_8_;
    auVar54._16_8_ = auVar97._0_8_ * auVar160._16_8_;
    auVar54._24_8_ = auVar97._8_8_ * auVar160._24_8_;
    auVar220._16_16_ = auVar170;
    auVar220._0_16_ = auVar170;
    auVar9 = vperm2f128_avx(auVar160,auVar160,0x11);
    auVar7 = vshufpd_avx(auVar220,auVar9,9);
    auVar189._0_8_ = param_1[0x10] * auVar7._0_8_;
    auVar189._8_8_ = param_1[0x11] * auVar7._8_8_;
    auVar189._16_8_ = param_1[0x12] * auVar7._16_8_;
    auVar189._24_8_ = param_1[0x13] * auVar7._24_8_;
    auVar7 = vsubpd_avx(auVar54,auVar189);
    auVar31._0_8_ = auVar7._0_8_ + auVar7._0_8_;
    auVar31._8_8_ = auVar7._8_8_ + auVar7._8_8_;
    auVar55._16_8_ = auVar7._16_8_ + auVar7._16_8_;
    auVar55._0_16_ = auVar31;
    auVar55._24_8_ = auVar7._24_8_ + auVar7._24_8_;
    auVar7 = vshufpd_avx(auVar9,auVar9,0xf);
    auVar229._16_16_ = auVar31;
    auVar229._0_16_ = auVar31;
    auVar8 = vshufpd_avx(auVar229,ZEXT1632(auVar55._16_16_),1);
    dVar65 = auVar7._0_8_;
    dVar190 = auVar7._8_8_;
    dVar191 = auVar7._16_8_;
    dVar192 = auVar7._24_8_;
    auVar240._0_8_ = auVar170._0_8_ * auVar31._0_8_;
    auVar240._8_8_ = auVar170._8_8_ * auVar31._8_8_;
    auVar240._16_8_ = auVar179._16_8_ * auVar55._16_8_;
    auVar240._24_8_ = auVar179._24_8_ * auVar55._24_8_;
    auVar7 = vshufpd_avx(auVar220,ZEXT1632(auVar179._16_16_),1);
    auVar56._0_8_ = auVar7._0_8_ * auVar31._0_8_;
    auVar56._8_8_ = auVar7._8_8_ * auVar31._8_8_;
    auVar56._16_8_ = auVar7._16_8_ * auVar55._16_8_;
    auVar56._24_8_ = auVar7._24_8_ * auVar55._24_8_;
    auVar7 = vperm2f128_avx(auVar240,auVar240,1);
    auVar7 = vshufpd_avx(auVar7,auVar240,4);
    auVar7 = vsubpd_avx(auVar56,auVar7);
    auVar32._0_8_ = param_1[0x31] + param_1[0x10] + dVar65 * auVar8._0_8_ + auVar7._0_8_;
    auVar32._8_8_ = param_1[0x32] + param_1[0x11] + dVar190 * auVar8._8_8_ + auVar7._8_8_;
    auVar57._16_8_ = param_1[0x33] + param_1[0x12] + dVar191 * auVar8._16_8_ + auVar7._16_8_;
    auVar57._0_16_ = auVar32;
    auVar57._24_8_ = dVar192 * auVar8._24_8_ + 0.0 + auVar7._24_8_ + 0.0;
    *(undefined1 (*) [16])(param_1 + 0x23) = auVar32;
    dVar182 = (double)vmovlps_avx(auVar57._16_16_);
    param_1[0x25] = dVar182;
    auVar70 = vshufps_avx(auVar170,auVar170,0x44);
    auVar234._8_8_ = 0;
    auVar234._0_8_ = param_1[0xd];
    auVar97 = vmovhpd_avx(auVar234,param_1[0xc]);
    auVar243._8_8_ = 0;
    auVar243._0_8_ = param_1[0xf];
    auVar113 = vmovhpd_avx(auVar243,param_1[0xe]);
    dVar182 = auVar70._0_8_;
    dVar18 = auVar70._8_8_;
    auVar70 = vshufps_avx(auVar170,auVar170,0xee);
    dVar19 = auVar70._0_8_;
    dVar63 = auVar70._8_8_;
    param_1[0x2a] =
         auVar97._0_8_ * auVar9._0_8_ * dVar124 +
         dVar19 * param_1[0xe] * dVar61 + param_1[0xc] * dVar65 + auVar113._0_8_ * dVar182 * dVar20;
    param_1[0x2b] =
         auVar97._8_8_ * auVar9._0_8_ * dVar125 +
         dVar63 * param_1[0xf] * dVar62 + param_1[0xd] * dVar190 + auVar113._8_8_ * dVar18 * dVar193
    ;
    param_1[0x2c] =
         auVar113._0_8_ * auVar9._16_8_ * dVar126 +
         dVar19 * param_1[0xc] * dVar64 + param_1[0xe] * dVar191 + auVar97._0_8_ * dVar182 * dVar20;
    param_1[0x2d] =
         auVar113._8_8_ * auVar9._16_8_ * dVar93 +
         dVar63 * param_1[0xd] * dVar112 + param_1[0xf] * dVar192 + auVar97._8_8_ * dVar18 * dVar193
    ;
    dVar20 = auVar160._0_8_ + auVar160._0_8_;
    dVar193 = auVar160._8_8_ + auVar160._8_8_;
    dVar61 = auVar160._16_8_ + auVar160._16_8_;
    dVar62 = auVar160._24_8_ + auVar160._24_8_;
    auVar161._0_8_ = dVar182 * dVar20;
    auVar161._8_8_ = dVar18 * dVar193;
    auVar161._16_8_ = dVar182 * dVar61;
    auVar161._24_8_ = dVar18 * dVar62;
    auVar171._0_8_ = dVar19 * dVar20;
    auVar171._8_8_ = dVar63 * dVar193;
    auVar180._16_8_ = dVar19 * dVar61;
    auVar180._0_16_ = auVar171;
    auVar180._24_8_ = dVar63 * dVar62;
    auVar58._0_8_ = dVar65 * dVar20;
    auVar58._8_8_ = dVar190 * dVar193;
    auVar58._16_8_ = dVar191 * dVar61;
    auVar58._24_8_ = dVar192 * dVar62;
    auVar7 = vperm2f128_avx(auVar180,auVar161,0x21);
    auVar7 = vshufpd_avx(auVar7,ZEXT1632(auVar161._16_16_),4);
    auVar100._0_8_ = auVar58._0_8_ + auVar7._0_8_;
    auVar100._8_8_ = auVar58._8_8_ + auVar7._8_8_;
    auVar110._16_8_ = auVar58._16_8_ + auVar7._16_8_;
    auVar110._0_16_ = auVar100;
    auVar110._24_8_ = auVar58._24_8_ + auVar7._24_8_;
    auVar9 = vsubpd_avx(auVar7,auVar58);
    auVar97 = vshufpd_avx(auVar171,auVar171,1);
    auVar135._8_8_ = auVar161._0_8_;
    auVar135._0_8_ = auVar161._0_8_;
    auVar139._16_16_ = auVar135;
    auVar139._0_16_ = auVar135;
    auVar7 = vblendpd_avx(auVar139,ZEXT1632(auVar97),1);
    auVar8 = vblendpd_avx(ZEXT1632(CONCAT88(auVar179._16_8_ * dVar61,auVar179._16_8_ * dVar61)),
                          ZEXT1632(auVar97) << 0x80,0xc);
    auVar59._0_8_ = auVar7._0_8_ + auVar8._0_8_;
    auVar59._8_8_ = auVar7._8_8_ + auVar8._8_8_;
    auVar59._16_8_ = auVar7._16_8_ + auVar8._16_8_;
    auVar59._24_8_ = auVar7._24_8_ + auVar8._24_8_;
    auVar92._8_8_ = __real_3ff0000000000000;
    auVar92._0_8_ = __real_3ff0000000000000;
    auVar92._16_8_ = __real_3ff0000000000000;
    auVar92._24_8_ = __real_3ff0000000000000;
    auVar8 = vsubpd_avx(auVar92,auVar59);
    dVar182 = auVar8._0_8_;
    dVar20 = param_1[0x1b];
    dVar193 = param_1[0x1d];
    auVar7 = vperm2f128_avx(auVar9,auVar9,0x11);
    auVar70 = ZEXT816(0) << 0x40;
    auVar97 = vmovhpd_avx(auVar70,param_1[0x1c]);
    dVar61 = auVar97._0_8_;
    dVar62 = auVar97._8_8_;
    auVar97 = vshufpd_avx(auVar100,auVar100,3);
    auVar172._0_8_ = auVar97._0_8_ * 0.0 + dVar61 * auVar7._0_8_ + dVar20 * dVar182;
    auVar172._8_8_ = auVar97._8_8_ * 0.0 + dVar62 * auVar7._0_8_ + dVar182 * 0.0;
    auVar181._16_8_ = auVar97._0_8_ * dVar193 + auVar7._16_8_ * 0.0 + dVar182 * 0.0;
    auVar181._0_16_ = auVar172;
    auVar181._24_8_ = auVar97._8_8_ * 0.0 + auVar7._16_8_ * 0.0 + dVar182 * 0.0;
    auVar7 = vperm2f128_avx(auVar110,auVar110,0x11);
    auVar132 = auVar8._0_16_;
    auVar97 = vshufpd_avx(auVar132,auVar132,3);
    dVar182 = auVar9._0_8_;
    auVar150._0_8_ = dVar182 * 0.0 + dVar20 * auVar7._0_8_ + dVar61 * auVar97._0_8_;
    auVar150._8_8_ = dVar182 * 0.0 + auVar7._0_8_ * 0.0 + dVar62 * auVar97._8_8_;
    auVar162._16_8_ = dVar193 * dVar182 + auVar7._16_8_ * 0.0 + auVar97._0_8_ * 0.0;
    auVar162._0_16_ = auVar150;
    auVar162._24_8_ = dVar182 * 0.0 + auVar7._16_8_ * 0.0 + auVar97._8_8_ * 0.0;
    auVar1 = auVar9._0_16_;
    auVar97 = vshufpd_avx(auVar1,auVar1,3);
    auVar7 = vperm2f128_avx(auVar8,auVar8,0x11);
    auVar4._0_8_ = dVar61 * auVar100._0_8_ + dVar20 * auVar97._0_8_ + auVar7._0_8_ * 0.0;
    auVar4._8_8_ = dVar62 * auVar100._0_8_ + auVar97._8_8_ * 0.0 + auVar7._0_8_ * 0.0;
    auVar15._16_8_ = auVar100._0_8_ * 0.0 + auVar97._0_8_ * 0.0 + auVar7._16_8_ * dVar193;
    auVar15._0_16_ = auVar4;
    auVar15._24_8_ = auVar100._0_8_ * 0.0 + auVar97._8_8_ * 0.0 + auVar7._16_8_ * 0.0;
    auVar113 = vunpcklpd_avx(auVar132,auVar110._16_16_);
    auVar97 = vshufpd_avx(auVar1,auVar1,1);
    auVar205._16_16_ = auVar97;
    auVar205._0_16_ = auVar4;
    auVar7 = vblendpd_avx(ZEXT1632(auVar113),auVar205,0xc);
    dVar62 = auVar7._0_8_;
    dVar64 = auVar7._8_8_;
    dVar18 = auVar7._16_8_;
    dVar19 = auVar7._24_8_;
    auVar113 = vshufpd_avx(auVar172,auVar172,3);
    auVar97 = vblendpd_avx(auVar132,auVar9._16_16_,1);
    dVar112 = auVar97._0_8_;
    dVar124 = auVar97._8_8_;
    auVar97 = vshufpd_avx(auVar100,auVar1,1);
    auVar9 = vperm2f128_avx(auVar181,auVar181,0x11);
    auVar7 = vblendpd_avx(auVar8,ZEXT1632(auVar97),3);
    dVar20 = auVar7._0_8_;
    dVar193 = auVar7._8_8_;
    dVar182 = auVar7._16_8_;
    dVar61 = auVar7._24_8_;
    auVar101._0_8_ = dVar20 * auVar9._0_8_ + dVar112 * auVar113._0_8_ + dVar62 * auVar172._0_8_;
    auVar101._8_8_ = dVar193 * auVar9._0_8_ + dVar124 * auVar113._8_8_ + dVar64 * auVar172._0_8_;
    auVar111._16_8_ =
         dVar182 * auVar9._16_8_ + auVar100._0_8_ * auVar113._0_8_ + dVar18 * auVar172._0_8_;
    auVar111._0_16_ = auVar101;
    auVar111._24_8_ =
         dVar61 * auVar9._16_8_ + auVar100._8_8_ * auVar113._8_8_ + dVar19 * auVar172._0_8_;
    auVar97 = vshufpd_avx(auVar150,auVar150,3);
    auVar7 = vperm2f128_avx(auVar162,auVar162,0x11);
    auVar33._0_8_ = dVar20 * auVar7._0_8_ + dVar62 * auVar150._0_8_ + dVar112 * auVar97._0_8_;
    auVar33._8_8_ = dVar193 * auVar7._0_8_ + dVar64 * auVar150._0_8_ + dVar124 * auVar97._8_8_;
    auVar60._16_8_ =
         dVar182 * auVar7._16_8_ + dVar18 * auVar150._0_8_ + auVar100._0_8_ * auVar97._0_8_;
    auVar60._0_16_ = auVar33;
    auVar60._24_8_ =
         dVar61 * auVar7._16_8_ + dVar19 * auVar150._0_8_ + auVar100._8_8_ * auVar97._8_8_;
    auVar97 = vshufpd_avx(auVar4,auVar4,3);
    auVar7 = vperm2f128_avx(auVar15,auVar15,0x11);
    auVar5._0_8_ = dVar20 * auVar7._0_8_ + dVar62 * auVar4._0_8_ + dVar112 * auVar97._0_8_;
    auVar5._8_8_ = dVar193 * auVar7._0_8_ + dVar64 * auVar4._0_8_ + dVar124 * auVar97._8_8_;
    auVar16._16_8_ =
         dVar182 * auVar7._16_8_ + dVar18 * auVar4._0_8_ + auVar100._0_8_ * auVar97._0_8_;
    auVar16._0_16_ = auVar5;
    auVar16._24_8_ = dVar61 * auVar7._16_8_ + dVar19 * auVar4._0_8_ + auVar100._8_8_ * auVar97._8_8_
    ;
    *(undefined1 (*) [16])(param_1 + 0x58) = auVar101;
    dVar20 = (double)vmovlpd_avx(auVar111._16_16_);
    param_1[0x5a] = dVar20;
    param_1[0x5b] = 0.0;
    *(undefined1 (*) [16])(param_1 + 0x5c) = auVar33;
    dVar20 = (double)vmovlpd_avx(auVar60._16_16_);
    param_1[0x5e] = dVar20;
    param_1[0x5f] = 0.0;
    *(undefined1 (*) [16])(param_1 + 0x60) = auVar5;
    dVar20 = (double)vmovlpd_avx(auVar16._16_16_);
    param_1[0x62] = dVar20;
    *(undefined1 (*) [16])(param_1 + 0x65) = auVar70;
    *(undefined1 (*) [16])(param_1 + 99) = auVar70;
  }
  else {
    if (__real_3f1a36e2eb1c432d < param_4) {
      auVar235._24_8_ = 0;
      auVar235._0_24_ = *(undefined1 (*) [24])(param_1 + 0x76);
      auVar7 = vsubpd_avx(auVar187,auVar235);
      auVar236._24_8_ = 0;
      auVar236._0_24_ = *(undefined1 (*) [24])(param_1 + 0x79);
      auVar8 = vsubpd_avx(auVar214,auVar236);
      auVar7 = vsubpd_avx(auVar7,auVar8);
      auVar183._0_8_ = dVar62 * auVar7._0_8_;
      auVar183._8_8_ = dVar64 * auVar7._8_8_;
      auVar97 = vshufpd_avx(auVar183,auVar183,1);
      dVar230 = param_8 * param_2 + dVar20 * auVar7._16_8_ + auVar183._0_8_ + auVar97._0_8_;
    }
    dVar20 = __real_3ff0000000000000;
    if ((param_5 & 1) != 0) {
      dVar20 = __real_3ff0000000000000 / (dVar193 + dVar182);
    }
    dVar62 = dVar20 * param_3 * param_2 * param_2;
    param_2 = dVar20 * param_4 * param_2;
    dVar230 = ((dVar62 * param_7 - dVar230 * param_2) - *param_9) *
              (__real_3ff0000000000000 / (__real_3ff0000000000000 + dVar61 * (param_2 + dVar62))) *
              param_1[0x99];
    dVar20 = dVar193 * dVar230;
    dVar62 = param_6[1];
    dVar64 = param_6[2];
    dVar93 = *param_6;
    dVar61 = dVar230 * (double)((ulonglong)dVar182 ^ __real_8000000000000000);
    auVar163._0_8_ = dVar93 * dVar20 + param_1[0x2e];
    auVar163._8_8_ = dVar62 * dVar20 + param_1[0x2f];
    auVar173._16_8_ = dVar64 * dVar20 + param_1[0x30];
    auVar173._0_16_ = auVar163;
    auVar173._24_8_ = dVar20 * 0.0 + 0.0;
    *(undefined1 (*) [16])(param_1 + 0x2e) = auVar163;
    dVar20 = (double)vmovlps_avx(auVar173._16_16_);
    param_1[0x30] = dVar20;
    auVar94._0_8_ = param_1[0x31] + dVar93 * dVar61;
    auVar94._8_8_ = param_1[0x32] + dVar62 * dVar61;
    auVar102._16_8_ = param_1[0x33] + dVar64 * dVar61;
    auVar102._0_16_ = auVar94;
    auVar102._24_8_ = dVar61 * 0.0 + 0.0;
    dVar20 = (double)vmovlpd_avx(auVar94);
    param_1[0x31] = dVar20;
    auVar97 = vshufpd_avx(auVar94,auVar102._16_16_,1);
    *(undefined1 (*) [16])(param_1 + 0x32) = auVar97;
    dVar192 = _UNK_150b54438;
    dVar191 = _UNK_150b54430;
    dVar190 = _UNK_150b54428;
    dVar65 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
    dVar63 = _UNK_150b54418;
    dVar93 = _UNK_150b54410;
    dVar64 = _UNK_150b54408;
    dVar62 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
    dVar61 = _UNK_15076c6f8;
    dVar20 = ___xmm_bff00000000000003ff0000000000000;
    if (0.0 < dVar193) {
      auVar164._0_8_ = dVar230 * dVar112;
      auVar164._8_8_ = dVar230 * dVar124;
      auVar174._16_8_ = dVar230 * dVar125;
      auVar174._0_16_ = auVar164;
      auVar174._24_8_ = dVar230 * dVar126;
      dVar182 = param_1[0x34];
      auVar141._8_8_ = 0;
      auVar141._0_8_ = param_1[0x37];
      auVar97 = vmovhps_avx(auVar141,param_1[0x36]);
      auVar231._8_8_ = 0;
      auVar231._0_8_ = param_1[0x35];
      auVar113 = vmovhps_avx(auVar231,param_1[0x34]);
      auVar70 = vshufpd_avx(auVar164,auVar164,3);
      auVar7 = vperm2f128_avx(auVar174,auVar174,0x11);
      dVar182 = dVar182 + (auVar7._0_8_ * auVar113._0_8_ *
                           ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
                          auVar70._0_8_ * param_1[0x36] *
                          ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
                          dVar182 * 0.0 +
                          auVar164._0_8_ * auVar97._0_8_ * ___xmm_bff00000000000003ff0000000000000)
                          * ___ymm_3fe00000000000003fe00000000000003fe00000000000003fe0000000000000;
      dVar112 = param_1[0x35] +
                (auVar7._0_8_ * auVar113._8_8_ * _UNK_150b54428 +
                auVar70._8_8_ * param_1[0x37] * _UNK_150b54408 +
                param_1[0x35] * 0.0 + auVar164._0_8_ * auVar97._8_8_ * _UNK_15076c6f8) *
                _UNK_150aa8f28;
      dVar124 = param_1[0x36] +
                (auVar7._16_8_ * auVar97._0_8_ * _UNK_150b54430 +
                auVar70._0_8_ * param_1[0x34] * _UNK_150b54410 +
                param_1[0x36] * 0.0 +
                auVar164._0_8_ * auVar113._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
                _UNK_150aa8f30;
      dVar125 = param_1[0x37] +
                (auVar7._16_8_ * auVar97._8_8_ * _UNK_150b54438 +
                auVar70._8_8_ * param_1[0x35] * _UNK_150b54418 +
                param_1[0x37] * 0.0 + auVar164._0_8_ * auVar113._8_8_ * _UNK_15076c6f8) *
                _UNK_150aa8f38;
      auVar194._0_8_ = dVar182 * dVar182 + dVar124 * dVar124;
      auVar194._8_8_ = dVar112 * dVar112 + dVar125 * dVar125;
      auVar97 = vshufpd_avx(auVar194,auVar194,1);
      dVar193 = auVar194._0_8_ + auVar97._0_8_;
      auVar207._8_8_ = 0;
      auVar207._0_8_ = __real_3e45798ee2308c3a;
      auVar195._8_8_ = 0;
      auVar195._0_8_ = dVar193;
      auVar97 = vcmpsd_avx(auVar207,auVar195,6);
      uVar206 = ~auVar97._0_8_ & __real_ffffffffffffffff;
      dVar193 = __real_3ff0000000000000 / SQRT(dVar193);
      auVar208._0_8_ =
           (double)(((ulonglong)(dVar182 * dVar193) ^
                    ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) &
                   uVar206);
      auVar208._8_8_ = (double)(((ulonglong)(dVar112 * dVar193) ^ _UNK_150b54548) & uVar206);
      auVar215._16_8_ = (double)(((ulonglong)(dVar124 * dVar193) ^ _UNK_150b54550) & uVar206);
      auVar215._0_16_ = auVar208;
      auVar215._24_8_ = (double)(((ulonglong)(dVar125 * dVar193) ^ _UNK_150b54558) & uVar206);
      auVar200._0_8_ =
           (double)((ulonglong)auVar208._0_8_ ^
                   ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
      auVar200._8_8_ = (double)((ulonglong)auVar208._8_8_ ^ _UNK_150b54548);
      auVar200._16_8_ = (double)((ulonglong)auVar215._16_8_ ^ _UNK_150b54550);
      auVar200._24_8_ = (double)((ulonglong)auVar215._24_8_ ^ _UNK_150b54558);
      *(undefined1 (*) [16])(param_1 + 0x34) = auVar208;
      *(undefined1 (*) [16])(param_1 + 0x36) = auVar200._16_16_;
      auVar221._8_8_ = 0;
      auVar221._0_8_ = param_1[4];
      auVar97 = vmovhps_avx(auVar221,param_1[7]);
      auVar226._0_8_ = SUB168(*(undefined1 (*) [16])(param_1 + 5),0) * auVar200._0_8_;
      auVar226._8_8_ = SUB168(*(undefined1 (*) [16])(param_1 + 5),8) * auVar200._8_8_;
      auVar226._16_8_ = auVar97._0_8_ * auVar200._16_8_;
      auVar226._24_8_ = auVar97._8_8_ * auVar200._24_8_;
      auVar244._16_16_ = auVar208;
      auVar244._0_16_ = auVar208;
      auVar9 = vperm2f128_avx(auVar200,auVar200,0x11);
      auVar7 = vshufpd_avx(auVar244,auVar9,9);
      auVar77._0_8_ = auVar7._0_8_ * param_1[4];
      auVar77._8_8_ = auVar7._8_8_ * param_1[5];
      auVar77._16_8_ = auVar7._16_8_ * param_1[6];
      auVar77._24_8_ = auVar7._24_8_ * param_1[7];
      auVar7 = vsubpd_avx(auVar226,auVar77);
      auVar66._0_8_ = auVar7._0_8_ + auVar7._0_8_;
      auVar66._8_8_ = auVar7._8_8_ + auVar7._8_8_;
      auVar78._16_8_ = auVar7._16_8_ + auVar7._16_8_;
      auVar78._0_16_ = auVar66;
      auVar78._24_8_ = auVar7._24_8_ + auVar7._24_8_;
      auVar7 = vshufpd_avx(auVar9,auVar9,0xf);
      auVar249._16_16_ = auVar66;
      auVar249._0_16_ = auVar66;
      auVar8 = vshufpd_avx(auVar249,ZEXT1632(auVar78._16_16_),1);
      dVar112 = auVar7._0_8_;
      dVar124 = auVar7._8_8_;
      dVar125 = auVar7._16_8_;
      dVar126 = auVar7._24_8_;
      auVar118._0_8_ = auVar208._0_8_ * auVar66._0_8_;
      auVar118._8_8_ = auVar208._8_8_ * auVar66._8_8_;
      auVar118._16_8_ = auVar215._16_8_ * auVar78._16_8_;
      auVar118._24_8_ = auVar215._24_8_ * auVar78._24_8_;
      auVar7 = vshufpd_avx(auVar244,ZEXT1632(auVar215._16_16_),1);
      auVar79._0_8_ = auVar7._0_8_ * auVar66._0_8_;
      auVar79._8_8_ = auVar7._8_8_ * auVar66._8_8_;
      auVar79._16_8_ = auVar7._16_8_ * auVar78._16_8_;
      auVar79._24_8_ = auVar7._24_8_ * auVar78._24_8_;
      auVar7 = vperm2f128_avx(auVar118,auVar118,1);
      auVar7 = vshufpd_avx(auVar7,auVar118,4);
      auVar7 = vsubpd_avx(auVar79,auVar7);
      auVar21._0_8_ = param_1[0x2e] + param_1[4] + dVar112 * auVar8._0_8_ + auVar7._0_8_;
      auVar21._8_8_ = param_1[0x2f] + param_1[5] + dVar124 * auVar8._8_8_ + auVar7._8_8_;
      auVar36._16_8_ = param_1[0x30] + param_1[6] + dVar125 * auVar8._16_8_ + auVar7._16_8_;
      auVar36._0_16_ = auVar21;
      auVar36._24_8_ = dVar126 * auVar8._24_8_ + 0.0 + auVar7._24_8_ + 0.0;
      *(undefined1 (*) [16])(param_1 + 0x20) = auVar21;
      dVar193 = (double)vmovlps_avx(auVar36._16_16_);
      param_1[0x22] = dVar193;
      auVar70 = vshufps_avx(auVar208,auVar208,0x44);
      auVar114._8_8_ = 0;
      auVar114._0_8_ = param_1[1];
      auVar113 = vmovhps_avx(auVar114,*param_1);
      auVar247._8_8_ = 0;
      auVar247._0_8_ = param_1[3];
      auVar97 = vmovhpd_avx(auVar247,param_1[2]);
      dVar241 = auVar70._0_8_;
      dVar246 = auVar70._8_8_;
      auVar70 = vshufps_avx(auVar208,auVar208,0xee);
      dVar193 = auVar70._0_8_;
      dVar182 = auVar70._8_8_;
      param_1[0x26] =
           dVar65 * auVar113._0_8_ * auVar9._0_8_ +
           param_1[2] * dVar193 * dVar62 + dVar112 * *param_1 + dVar241 * auVar97._0_8_ * dVar20;
      param_1[0x27] =
           dVar190 * auVar113._8_8_ * auVar9._0_8_ +
           param_1[3] * dVar182 * dVar64 + dVar124 * param_1[1] + dVar246 * auVar97._8_8_ * dVar61;
      param_1[0x28] =
           dVar191 * auVar97._0_8_ * auVar9._16_8_ +
           *param_1 * dVar193 * dVar93 + dVar125 * param_1[2] + dVar241 * auVar113._0_8_ * dVar20;
      param_1[0x29] =
           dVar192 * auVar97._8_8_ * auVar9._16_8_ +
           param_1[1] * dVar182 * dVar63 + dVar126 * param_1[3] + dVar246 * auVar113._8_8_ * dVar61;
      dVar20 = auVar200._0_8_ + auVar200._0_8_;
      dVar61 = auVar200._8_8_ + auVar200._8_8_;
      dVar62 = auVar200._16_8_ + auVar200._16_8_;
      dVar64 = auVar200._24_8_ + auVar200._24_8_;
      auVar119._0_8_ = dVar241 * dVar20;
      auVar119._8_8_ = dVar246 * dVar61;
      auVar119._16_8_ = dVar241 * dVar62;
      auVar119._24_8_ = dVar246 * dVar64;
      auVar67._0_8_ = dVar20 * dVar193;
      auVar67._8_8_ = dVar61 * dVar182;
      auVar80._16_8_ = dVar62 * dVar193;
      auVar80._0_16_ = auVar67;
      auVar80._24_8_ = dVar64 * dVar182;
      auVar37._0_8_ = dVar112 * dVar20;
      auVar37._8_8_ = dVar124 * dVar61;
      auVar37._16_8_ = dVar125 * dVar62;
      auVar37._24_8_ = dVar126 * dVar64;
      auVar7 = vperm2f128_avx(auVar80,auVar119,0x21);
      auVar7 = vshufpd_avx(auVar7,ZEXT1632(auVar119._16_16_),4);
      auVar142._0_8_ = auVar37._0_8_ + auVar7._0_8_;
      auVar142._8_8_ = auVar37._8_8_ + auVar7._8_8_;
      auVar152._16_8_ = auVar37._16_8_ + auVar7._16_8_;
      auVar152._0_16_ = auVar142;
      auVar152._24_8_ = auVar37._24_8_ + auVar7._24_8_;
      auVar9 = vsubpd_avx(auVar7,auVar37);
      auVar97 = vshufpd_avx(auVar67,auVar67,1);
      auVar68._8_8_ = auVar119._0_8_;
      auVar68._0_8_ = auVar119._0_8_;
      auVar81._16_16_ = auVar68;
      auVar81._0_16_ = auVar68;
      auVar7 = vblendpd_avx(auVar81,ZEXT1632(auVar97),1);
      auVar38._16_16_ = auVar97;
      auVar38._0_16_ = auVar1;
      auVar8 = vblendpd_avx(ZEXT1632(CONCAT88(auVar215._16_8_ * dVar62,auVar215._16_8_ * dVar62)),
                            auVar38,0xc);
      auVar39._0_8_ = auVar7._0_8_ + auVar8._0_8_;
      auVar39._8_8_ = auVar7._8_8_ + auVar8._8_8_;
      auVar39._16_8_ = auVar7._16_8_ + auVar8._16_8_;
      auVar39._24_8_ = auVar7._24_8_ + auVar8._24_8_;
      auVar82._8_8_ = __real_3ff0000000000000;
      auVar82._0_8_ = __real_3ff0000000000000;
      auVar82._16_8_ = __real_3ff0000000000000;
      auVar82._24_8_ = __real_3ff0000000000000;
      auVar8 = vsubpd_avx(auVar82,auVar39);
      dVar182 = auVar8._0_8_;
      dVar20 = param_1[0x18];
      dVar193 = param_1[0x1a];
      auVar7 = vperm2f128_avx(auVar9,auVar9,0x11);
      auVar70 = ZEXT816(0) << 0x40;
      auVar97 = vmovhpd_avx(auVar70,param_1[0x19]);
      dVar61 = auVar97._0_8_;
      dVar62 = auVar97._8_8_;
      auVar97 = vshufpd_avx(auVar142,auVar142,3);
      auVar209._0_8_ = auVar97._0_8_ * 0.0 + dVar61 * auVar7._0_8_ + dVar20 * dVar182;
      auVar209._8_8_ = auVar97._8_8_ * 0.0 + dVar62 * auVar7._0_8_ + dVar182 * 0.0;
      auVar216._16_8_ = dVar193 * auVar97._0_8_ + auVar7._16_8_ * 0.0 + dVar182 * 0.0;
      auVar216._0_16_ = auVar209;
      auVar216._24_8_ = auVar97._8_8_ * 0.0 + auVar7._16_8_ * 0.0 + dVar182 * 0.0;
      auVar7 = vperm2f128_avx(auVar152,auVar152,0x11);
      auVar127 = auVar8._0_16_;
      auVar97 = vshufpd_avx(auVar127,auVar127,3);
      dVar182 = auVar9._0_8_;
      auVar196._0_8_ = dVar182 * 0.0 + dVar20 * auVar7._0_8_ + dVar61 * auVar97._0_8_;
      auVar196._8_8_ = dVar182 * 0.0 + auVar7._0_8_ * 0.0 + dVar62 * auVar97._8_8_;
      auVar201._16_8_ = dVar193 * dVar182 + auVar7._16_8_ * 0.0 + auVar97._0_8_ * 0.0;
      auVar201._0_16_ = auVar196;
      auVar201._24_8_ = dVar182 * 0.0 + auVar7._16_8_ * 0.0 + auVar97._8_8_ * 0.0;
      auVar132 = auVar9._0_16_;
      auVar97 = vshufpd_avx(auVar132,auVar132,3);
      auVar7 = vperm2f128_avx(auVar8,auVar8,0x11);
      auVar115._0_8_ = dVar20 * auVar97._0_8_ + dVar61 * auVar142._0_8_ + auVar7._0_8_ * 0.0;
      auVar115._8_8_ = auVar97._8_8_ * 0.0 + dVar62 * auVar142._0_8_ + auVar7._0_8_ * 0.0;
      auVar120._16_8_ = auVar97._0_8_ * 0.0 + auVar142._0_8_ * 0.0 + dVar193 * auVar7._16_8_;
      auVar120._0_16_ = auVar115;
      auVar120._24_8_ = auVar97._8_8_ * 0.0 + auVar142._0_8_ * 0.0 + auVar7._16_8_ * 0.0;
      auVar113 = vunpcklpd_avx(auVar127,auVar152._16_16_);
      auVar97 = vshufpd_avx(auVar132,auVar132,1);
      auVar103._16_16_ = auVar97;
      auVar103._0_16_ = auVar1;
      auVar7 = vblendpd_avx(ZEXT1632(auVar113),auVar103,0xc);
      dVar62 = auVar7._0_8_;
      dVar64 = auVar7._8_8_;
      dVar112 = auVar7._16_8_;
      dVar124 = auVar7._24_8_;
      auVar113 = vshufpd_avx(auVar209,auVar209,3);
      auVar97 = vblendpd_avx(auVar127,auVar9._16_16_,1);
      dVar125 = auVar97._0_8_;
      dVar126 = auVar97._8_8_;
      auVar97 = vshufpd_avx(auVar142,auVar132,1);
      auVar9 = vperm2f128_avx(auVar216,auVar216,0x11);
      auVar7 = vblendpd_avx(auVar8,ZEXT1632(auVar97),3);
      dVar20 = auVar7._0_8_;
      dVar193 = auVar7._8_8_;
      dVar182 = auVar7._16_8_;
      dVar61 = auVar7._24_8_;
      auVar143._0_8_ = dVar20 * auVar9._0_8_ + dVar62 * auVar209._0_8_ + dVar125 * auVar113._0_8_;
      auVar143._8_8_ = dVar193 * auVar9._0_8_ + dVar64 * auVar209._0_8_ + dVar126 * auVar113._8_8_;
      auVar153._16_8_ =
           dVar182 * auVar9._16_8_ + dVar112 * auVar209._0_8_ + auVar142._0_8_ * auVar113._0_8_;
      auVar153._0_16_ = auVar143;
      auVar153._24_8_ =
           dVar61 * auVar9._16_8_ + dVar124 * auVar209._0_8_ + auVar142._8_8_ * auVar113._8_8_;
      auVar97 = vshufpd_avx(auVar196,auVar196,3);
      auVar7 = vperm2f128_avx(auVar201,auVar201,0x11);
      auVar22._0_8_ = dVar20 * auVar7._0_8_ + dVar62 * auVar196._0_8_ + dVar125 * auVar97._0_8_;
      auVar22._8_8_ = dVar193 * auVar7._0_8_ + dVar64 * auVar196._0_8_ + dVar126 * auVar97._8_8_;
      auVar40._16_8_ =
           dVar182 * auVar7._16_8_ + dVar112 * auVar196._0_8_ + auVar142._0_8_ * auVar97._0_8_;
      auVar40._0_16_ = auVar22;
      auVar40._24_8_ =
           dVar61 * auVar7._16_8_ + dVar124 * auVar196._0_8_ + auVar142._8_8_ * auVar97._8_8_;
      auVar97 = vshufpd_avx(auVar115,auVar115,3);
      auVar7 = vperm2f128_avx(auVar120,auVar120,0x11);
      auVar69._0_8_ = dVar20 * auVar7._0_8_ + dVar125 * auVar97._0_8_ + dVar62 * auVar115._0_8_;
      auVar69._8_8_ = dVar193 * auVar7._0_8_ + dVar126 * auVar97._8_8_ + dVar64 * auVar115._0_8_;
      auVar83._16_8_ =
           dVar182 * auVar7._16_8_ + auVar142._0_8_ * auVar97._0_8_ + dVar112 * auVar115._0_8_;
      auVar83._0_16_ = auVar69;
      auVar83._24_8_ =
           dVar61 * auVar7._16_8_ + auVar142._8_8_ * auVar97._8_8_ + dVar124 * auVar115._0_8_;
      *(undefined1 (*) [16])(param_1 + 0x48) = auVar143;
      dVar20 = (double)vmovlpd_avx(auVar153._16_16_);
      param_1[0x4a] = dVar20;
      param_1[0x4b] = 0.0;
      *(undefined1 (*) [16])(param_1 + 0x4c) = auVar22;
      dVar20 = (double)vmovlps_avx(auVar40._16_16_);
      param_1[0x4e] = dVar20;
      param_1[0x4f] = 0.0;
      *(undefined1 (*) [16])(param_1 + 0x50) = auVar69;
      uVar206 = __real_8000000000000000;
      dVar20 = (double)vmovlpd_avx(auVar83._16_16_);
      param_1[0x52] = dVar20;
      *(undefined1 (*) [16])(param_1 + 0x55) = auVar70;
      *(undefined1 (*) [16])(param_1 + 0x53) = auVar70;
      param_1[0x57] = 1.0;
      dVar182 = param_1[0x1f];
    }
    dVar93 = _UNK_150b54438;
    dVar126 = _UNK_150b54430;
    dVar125 = _UNK_150b54428;
    dVar124 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
    dVar112 = _UNK_150b54418;
    dVar64 = _UNK_150b54410;
    dVar62 = _UNK_150b54408;
    dVar61 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
    dVar193 = _UNK_15076c6f8;
    dVar20 = ___xmm_bff00000000000003ff0000000000000;
    if (dVar182 <= 0.0) goto LAB_1409f5ddf;
    auVar23._0_8_ = (double)((ulonglong)dVar230 ^ uVar206) * auVar1._0_8_;
    auVar23._8_8_ = (double)((ulonglong)dVar230 ^ uVar206) * auVar1._8_8_;
    auVar41._16_8_ = (double)((ulonglong)dVar230 ^ uVar206) * dVar18;
    auVar41._0_16_ = auVar23;
    auVar41._24_8_ = (double)((ulonglong)dVar230 ^ uVar206) * dVar19;
    dVar18 = param_1[0x38];
    auVar165._8_8_ = 0;
    auVar165._0_8_ = param_1[0x3b];
    auVar97 = vmovhps_avx(auVar165,param_1[0x3a]);
    auVar185._8_8_ = 0;
    auVar185._0_8_ = param_1[0x39];
    auVar113 = vmovhps_avx(auVar185,param_1[0x38]);
    auVar70 = vshufpd_avx(auVar23,auVar23,3);
    auVar7 = vperm2f128_avx(auVar41,auVar41,0x11);
    dVar18 = dVar18 + (auVar7._0_8_ * auVar113._0_8_ *
                       ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
                      auVar70._0_8_ * param_1[0x3a] *
                      ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
                      auVar97._0_8_ * auVar23._0_8_ * ___xmm_bff00000000000003ff0000000000000 +
                      dVar18 * 0.0) *
                      ___ymm_3fe00000000000003fe00000000000003fe00000000000003fe0000000000000;
    dVar19 = param_1[0x39] +
             (auVar7._0_8_ * auVar113._8_8_ * _UNK_150b54428 +
             auVar70._8_8_ * param_1[0x3b] * _UNK_150b54408 +
             auVar97._8_8_ * auVar23._0_8_ * _UNK_15076c6f8 + param_1[0x39] * 0.0) * _UNK_150aa8f28;
    dVar63 = param_1[0x3a] +
             (auVar7._16_8_ * auVar97._0_8_ * _UNK_150b54430 +
             auVar70._0_8_ * param_1[0x38] * _UNK_150b54410 +
             auVar113._0_8_ * auVar23._0_8_ * ___xmm_bff00000000000003ff0000000000000 +
             param_1[0x3a] * 0.0) * _UNK_150aa8f30;
    dVar65 = param_1[0x3b] +
             (auVar7._16_8_ * auVar97._8_8_ * _UNK_150b54438 +
             auVar70._8_8_ * param_1[0x39] * _UNK_150b54418 +
             auVar113._8_8_ * auVar23._0_8_ * _UNK_15076c6f8 + param_1[0x3b] * 0.0) * _UNK_150aa8f38
    ;
    auVar129._0_8_ = dVar18 * dVar18 + dVar63 * dVar63;
    auVar129._8_8_ = dVar19 * dVar19 + dVar65 * dVar65;
    auVar97 = vshufpd_avx(auVar129,auVar129,1);
    dVar182 = auVar129._0_8_ + auVar97._0_8_;
    auVar144._8_8_ = 0;
    auVar144._0_8_ = __real_3e45798ee2308c3a;
    auVar130._8_8_ = 0;
    auVar130._0_8_ = dVar182;
    auVar97 = vcmpsd_avx(auVar144,auVar130,6);
    uVar206 = ~auVar97._0_8_ & __real_ffffffffffffffff;
    dVar182 = __real_3ff0000000000000 / SQRT(dVar182);
    auVar166._0_8_ =
         (double)(((ulonglong)(dVar18 * dVar182) ^
                  ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) & uVar206
                 );
    auVar166._8_8_ = (double)(((ulonglong)(dVar19 * dVar182) ^ _UNK_150b54548) & uVar206);
    auVar175._16_8_ = (double)(((ulonglong)(dVar63 * dVar182) ^ _UNK_150b54550) & uVar206);
    auVar175._0_16_ = auVar166;
    auVar175._24_8_ = (double)(((ulonglong)(dVar65 * dVar182) ^ _UNK_150b54558) & uVar206);
    auVar154._0_8_ =
         (double)((ulonglong)auVar166._0_8_ ^
                 ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
    auVar154._8_8_ = (double)((ulonglong)auVar166._8_8_ ^ _UNK_150b54548);
    auVar154._16_8_ = (double)((ulonglong)auVar175._16_8_ ^ _UNK_150b54550);
    auVar154._24_8_ = (double)((ulonglong)auVar175._24_8_ ^ _UNK_150b54558);
    *(undefined1 (*) [16])(param_1 + 0x38) = auVar166;
    *(undefined1 (*) [16])(param_1 + 0x3a) = auVar154._16_16_;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = param_1[0x10];
    auVar97 = vmovhps_avx(auVar24,param_1[0x13]);
    auVar42._0_8_ = SUB168(*(undefined1 (*) [16])(param_1 + 0x11),0) * auVar154._0_8_;
    auVar42._8_8_ = SUB168(*(undefined1 (*) [16])(param_1 + 0x11),8) * auVar154._8_8_;
    auVar42._16_8_ = auVar97._0_8_ * auVar154._16_8_;
    auVar42._24_8_ = auVar97._8_8_ * auVar154._24_8_;
    auVar217._16_16_ = auVar166;
    auVar217._0_16_ = auVar166;
    auVar9 = vperm2f128_avx(auVar154,auVar154,0x11);
    auVar7 = vshufpd_avx(auVar217,auVar9,9);
    auVar188._0_8_ = param_1[0x10] * auVar7._0_8_;
    auVar188._8_8_ = param_1[0x11] * auVar7._8_8_;
    auVar188._16_8_ = param_1[0x12] * auVar7._16_8_;
    auVar188._24_8_ = param_1[0x13] * auVar7._24_8_;
    auVar7 = vsubpd_avx(auVar42,auVar188);
    auVar25._0_8_ = auVar7._0_8_ + auVar7._0_8_;
    auVar25._8_8_ = auVar7._8_8_ + auVar7._8_8_;
    auVar43._16_8_ = auVar7._16_8_ + auVar7._16_8_;
    auVar43._0_16_ = auVar25;
    auVar43._24_8_ = auVar7._24_8_ + auVar7._24_8_;
    auVar7 = vshufpd_avx(auVar9,auVar9,0xf);
    auVar227._16_16_ = auVar25;
    auVar227._0_16_ = auVar25;
    auVar8 = vshufpd_avx(auVar227,ZEXT1632(auVar43._16_16_),1);
    dVar65 = auVar7._0_8_;
    dVar190 = auVar7._8_8_;
    dVar191 = auVar7._16_8_;
    dVar192 = auVar7._24_8_;
    auVar239._0_8_ = auVar166._0_8_ * auVar25._0_8_;
    auVar239._8_8_ = auVar166._8_8_ * auVar25._8_8_;
    auVar239._16_8_ = auVar175._16_8_ * auVar43._16_8_;
    auVar239._24_8_ = auVar175._24_8_ * auVar43._24_8_;
    auVar7 = vshufpd_avx(auVar217,ZEXT1632(auVar175._16_16_),1);
    auVar44._0_8_ = auVar7._0_8_ * auVar25._0_8_;
    auVar44._8_8_ = auVar7._8_8_ * auVar25._8_8_;
    auVar44._16_8_ = auVar7._16_8_ * auVar43._16_8_;
    auVar44._24_8_ = auVar7._24_8_ * auVar43._24_8_;
    auVar7 = vperm2f128_avx(auVar239,auVar239,1);
    auVar7 = vshufpd_avx(auVar7,auVar239,4);
    auVar7 = vsubpd_avx(auVar44,auVar7);
    auVar26._0_8_ = param_1[0x31] + param_1[0x10] + dVar65 * auVar8._0_8_ + auVar7._0_8_;
    auVar26._8_8_ = param_1[0x32] + param_1[0x11] + dVar190 * auVar8._8_8_ + auVar7._8_8_;
    auVar45._16_8_ = param_1[0x33] + param_1[0x12] + dVar191 * auVar8._16_8_ + auVar7._16_8_;
    auVar45._0_16_ = auVar26;
    auVar45._24_8_ = dVar192 * auVar8._24_8_ + 0.0 + auVar7._24_8_ + 0.0;
    *(undefined1 (*) [16])(param_1 + 0x23) = auVar26;
    dVar182 = (double)vmovlps_avx(auVar45._16_16_);
    param_1[0x25] = dVar182;
    auVar70 = vshufps_avx(auVar166,auVar166,0x44);
    auVar232._8_8_ = 0;
    auVar232._0_8_ = param_1[0xd];
    auVar97 = vmovhpd_avx(auVar232,param_1[0xc]);
    auVar242._8_8_ = 0;
    auVar242._0_8_ = param_1[0xf];
    auVar113 = vmovhpd_avx(auVar242,param_1[0xe]);
    dVar182 = auVar70._0_8_;
    dVar18 = auVar70._8_8_;
    auVar70 = vshufps_avx(auVar166,auVar166,0xee);
    dVar19 = auVar70._0_8_;
    dVar63 = auVar70._8_8_;
    param_1[0x2a] =
         auVar97._0_8_ * auVar9._0_8_ * dVar124 +
         dVar19 * param_1[0xe] * dVar61 + param_1[0xc] * dVar65 + auVar113._0_8_ * dVar182 * dVar20;
    param_1[0x2b] =
         auVar97._8_8_ * auVar9._0_8_ * dVar125 +
         dVar63 * param_1[0xf] * dVar62 + param_1[0xd] * dVar190 + auVar113._8_8_ * dVar18 * dVar193
    ;
    param_1[0x2c] =
         auVar113._0_8_ * auVar9._16_8_ * dVar126 +
         dVar19 * param_1[0xc] * dVar64 + param_1[0xe] * dVar191 + auVar97._0_8_ * dVar182 * dVar20;
    param_1[0x2d] =
         auVar113._8_8_ * auVar9._16_8_ * dVar93 +
         dVar63 * param_1[0xd] * dVar112 + param_1[0xf] * dVar192 + auVar97._8_8_ * dVar18 * dVar193
    ;
    dVar20 = auVar154._0_8_ + auVar154._0_8_;
    dVar193 = auVar154._8_8_ + auVar154._8_8_;
    dVar61 = auVar154._16_8_ + auVar154._16_8_;
    dVar62 = auVar154._24_8_ + auVar154._24_8_;
    auVar155._0_8_ = dVar182 * dVar20;
    auVar155._8_8_ = dVar18 * dVar193;
    auVar155._16_8_ = dVar182 * dVar61;
    auVar155._24_8_ = dVar18 * dVar62;
    auVar167._0_8_ = dVar19 * dVar20;
    auVar167._8_8_ = dVar63 * dVar193;
    auVar176._16_8_ = dVar19 * dVar61;
    auVar176._0_16_ = auVar167;
    auVar176._24_8_ = dVar63 * dVar62;
    auVar46._0_8_ = dVar65 * dVar20;
    auVar46._8_8_ = dVar190 * dVar193;
    auVar46._16_8_ = dVar191 * dVar61;
    auVar46._24_8_ = dVar192 * dVar62;
    auVar7 = vperm2f128_avx(auVar176,auVar155,0x21);
    auVar7 = vshufpd_avx(auVar7,ZEXT1632(auVar155._16_16_),4);
    auVar95._0_8_ = auVar46._0_8_ + auVar7._0_8_;
    auVar95._8_8_ = auVar46._8_8_ + auVar7._8_8_;
    auVar104._16_8_ = auVar46._16_8_ + auVar7._16_8_;
    auVar104._0_16_ = auVar95;
    auVar104._24_8_ = auVar46._24_8_ + auVar7._24_8_;
    auVar9 = vsubpd_avx(auVar7,auVar46);
    auVar97 = vshufpd_avx(auVar167,auVar167,1);
    auVar131._8_8_ = auVar155._0_8_;
    auVar131._0_8_ = auVar155._0_8_;
    auVar138._16_16_ = auVar131;
    auVar138._0_16_ = auVar131;
    auVar7 = vblendpd_avx(auVar138,ZEXT1632(auVar97),1);
    auVar8 = vblendpd_avx(ZEXT1632(CONCAT88(auVar175._16_8_ * dVar61,auVar175._16_8_ * dVar61)),
                          ZEXT1632(auVar97) << 0x80,0xc);
    auVar47._0_8_ = auVar7._0_8_ + auVar8._0_8_;
    auVar47._8_8_ = auVar7._8_8_ + auVar8._8_8_;
    auVar47._16_8_ = auVar7._16_8_ + auVar8._16_8_;
    auVar47._24_8_ = auVar7._24_8_ + auVar8._24_8_;
    auVar84._8_8_ = __real_3ff0000000000000;
    auVar84._0_8_ = __real_3ff0000000000000;
    auVar84._16_8_ = __real_3ff0000000000000;
    auVar84._24_8_ = __real_3ff0000000000000;
    auVar8 = vsubpd_avx(auVar84,auVar47);
    dVar182 = auVar8._0_8_;
    dVar20 = param_1[0x1b];
    dVar193 = param_1[0x1d];
    auVar7 = vperm2f128_avx(auVar9,auVar9,0x11);
    auVar70 = ZEXT816(0) << 0x40;
    auVar97 = vmovhpd_avx(auVar70,param_1[0x1c]);
    dVar61 = auVar97._0_8_;
    dVar62 = auVar97._8_8_;
    auVar97 = vshufpd_avx(auVar95,auVar95,3);
    auVar168._0_8_ = auVar97._0_8_ * 0.0 + dVar61 * auVar7._0_8_ + dVar20 * dVar182;
    auVar168._8_8_ = auVar97._8_8_ * 0.0 + dVar62 * auVar7._0_8_ + dVar182 * 0.0;
    auVar177._16_8_ = auVar97._0_8_ * dVar193 + auVar7._16_8_ * 0.0 + dVar182 * 0.0;
    auVar177._0_16_ = auVar168;
    auVar177._24_8_ = auVar97._8_8_ * 0.0 + auVar7._16_8_ * 0.0 + dVar182 * 0.0;
    auVar7 = vperm2f128_avx(auVar104,auVar104,0x11);
    auVar132 = auVar8._0_16_;
    auVar97 = vshufpd_avx(auVar132,auVar132,3);
    dVar182 = auVar9._0_8_;
    auVar145._0_8_ = dVar182 * 0.0 + dVar20 * auVar7._0_8_ + dVar61 * auVar97._0_8_;
    auVar145._8_8_ = dVar182 * 0.0 + auVar7._0_8_ * 0.0 + dVar62 * auVar97._8_8_;
    auVar156._16_8_ = dVar193 * dVar182 + auVar7._16_8_ * 0.0 + auVar97._0_8_ * 0.0;
    auVar156._0_16_ = auVar145;
    auVar156._24_8_ = dVar182 * 0.0 + auVar7._16_8_ * 0.0 + auVar97._8_8_ * 0.0;
    auVar1 = auVar9._0_16_;
    auVar97 = vshufpd_avx(auVar1,auVar1,3);
    auVar7 = vperm2f128_avx(auVar8,auVar8,0x11);
    auVar2._0_8_ = dVar61 * auVar95._0_8_ + dVar20 * auVar97._0_8_ + auVar7._0_8_ * 0.0;
    auVar2._8_8_ = dVar62 * auVar95._0_8_ + auVar97._8_8_ * 0.0 + auVar7._0_8_ * 0.0;
    auVar13._16_8_ = auVar95._0_8_ * 0.0 + auVar97._0_8_ * 0.0 + auVar7._16_8_ * dVar193;
    auVar13._0_16_ = auVar2;
    auVar13._24_8_ = auVar95._0_8_ * 0.0 + auVar97._8_8_ * 0.0 + auVar7._16_8_ * 0.0;
    auVar113 = vunpcklpd_avx(auVar132,auVar104._16_16_);
    auVar97 = vshufpd_avx(auVar1,auVar1,1);
    auVar202._16_16_ = auVar97;
    auVar202._0_16_ = auVar2;
    auVar7 = vblendpd_avx(ZEXT1632(auVar113),auVar202,0xc);
    dVar62 = auVar7._0_8_;
    dVar64 = auVar7._8_8_;
    dVar18 = auVar7._16_8_;
    dVar19 = auVar7._24_8_;
    auVar113 = vshufpd_avx(auVar168,auVar168,3);
    auVar97 = vblendpd_avx(auVar132,auVar9._16_16_,1);
    dVar112 = auVar97._0_8_;
    dVar124 = auVar97._8_8_;
    auVar97 = vshufpd_avx(auVar95,auVar1,1);
    auVar9 = vperm2f128_avx(auVar177,auVar177,0x11);
    auVar7 = vblendpd_avx(auVar8,ZEXT1632(auVar97),3);
    dVar20 = auVar7._0_8_;
    dVar193 = auVar7._8_8_;
    dVar182 = auVar7._16_8_;
    dVar61 = auVar7._24_8_;
    auVar96._0_8_ = dVar20 * auVar9._0_8_ + dVar112 * auVar113._0_8_ + dVar62 * auVar168._0_8_;
    auVar96._8_8_ = dVar193 * auVar9._0_8_ + dVar124 * auVar113._8_8_ + dVar64 * auVar168._0_8_;
    auVar105._16_8_ =
         dVar182 * auVar9._16_8_ + auVar95._0_8_ * auVar113._0_8_ + dVar18 * auVar168._0_8_;
    auVar105._0_16_ = auVar96;
    auVar105._24_8_ =
         dVar61 * auVar9._16_8_ + auVar95._8_8_ * auVar113._8_8_ + dVar19 * auVar168._0_8_;
    auVar97 = vshufpd_avx(auVar145,auVar145,3);
    auVar7 = vperm2f128_avx(auVar156,auVar156,0x11);
    auVar27._0_8_ = dVar20 * auVar7._0_8_ + dVar62 * auVar145._0_8_ + dVar112 * auVar97._0_8_;
    auVar27._8_8_ = dVar193 * auVar7._0_8_ + dVar64 * auVar145._0_8_ + dVar124 * auVar97._8_8_;
    auVar48._16_8_ =
         dVar182 * auVar7._16_8_ + dVar18 * auVar145._0_8_ + auVar95._0_8_ * auVar97._0_8_;
    auVar48._0_16_ = auVar27;
    auVar48._24_8_ =
         dVar61 * auVar7._16_8_ + dVar19 * auVar145._0_8_ + auVar95._8_8_ * auVar97._8_8_;
    auVar97 = vshufpd_avx(auVar2,auVar2,3);
    auVar7 = vperm2f128_avx(auVar13,auVar13,0x11);
    auVar3._0_8_ = dVar20 * auVar7._0_8_ + dVar62 * auVar2._0_8_ + dVar112 * auVar97._0_8_;
    auVar3._8_8_ = dVar193 * auVar7._0_8_ + dVar64 * auVar2._0_8_ + dVar124 * auVar97._8_8_;
    auVar14._16_8_ = dVar182 * auVar7._16_8_ + dVar18 * auVar2._0_8_ + auVar95._0_8_ * auVar97._0_8_
    ;
    auVar14._0_16_ = auVar3;
    auVar14._24_8_ = dVar61 * auVar7._16_8_ + dVar19 * auVar2._0_8_ + auVar95._8_8_ * auVar97._8_8_;
    *(undefined1 (*) [16])(param_1 + 0x58) = auVar96;
    dVar20 = (double)vmovlpd_avx(auVar105._16_16_);
    param_1[0x5a] = dVar20;
    param_1[0x5b] = 0.0;
    *(undefined1 (*) [16])(param_1 + 0x5c) = auVar27;
    dVar20 = (double)vmovlpd_avx(auVar48._16_16_);
    param_1[0x5e] = dVar20;
    param_1[0x5f] = 0.0;
    *(undefined1 (*) [16])(param_1 + 0x60) = auVar3;
    dVar20 = (double)vmovlpd_avx(auVar14._16_16_);
    param_1[0x62] = dVar20;
    *(undefined1 (*) [16])(param_1 + 0x65) = auVar70;
    *(undefined1 (*) [16])(param_1 + 99) = auVar70;
  }
  param_1[0x67] = 1.0;
LAB_1409f5ddf:
  auVar75._0_8_ = param_1[0x38] * param_1[0x34] + param_1[0x3a] * param_1[0x36];
  auVar75._8_8_ = param_1[0x39] * param_1[0x35] + param_1[0x3b] * param_1[0x37];
  auVar97 = vshufpd_avx(auVar75,auVar75,1);
  auVar76._8_8_ = 0;
  auVar76._0_8_ = auVar75._0_8_ + auVar97._0_8_;
  auVar97 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar76,2);
  auVar136._8_8_ = 0;
  auVar136._0_8_ = __real_3ff0000000000000;
  auVar151._8_8_ = 0;
  auVar151._0_8_ = __real_bff0000000000000;
  auVar97 = vblendvpd_avx(auVar151,auVar136,auVar97);
  dVar20 = auVar97._0_8_;
  param_1[0x38] = param_1[0x38] * dVar20;
  param_1[0x39] = param_1[0x39] * dVar20;
  param_1[0x3a] = param_1[0x3a] * dVar20;
  param_1[0x3b] = param_1[0x3b] * dVar20;
  auVar34._0_8_ = param_1[0x2a] * param_1[0x26] + param_1[0x2c] * param_1[0x28];
  auVar34._8_8_ = param_1[0x2b] * param_1[0x27] + param_1[0x2d] * param_1[0x29];
  auVar97 = vshufpd_avx(auVar34,auVar34,1);
  auVar35._8_8_ = 0;
  auVar35._0_8_ = auVar34._0_8_ + auVar97._0_8_;
  auVar97 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar35,2);
  auVar97 = vblendvpd_avx(auVar151,auVar136,auVar97);
  dVar20 = auVar97._0_8_;
  param_1[0x2a] = param_1[0x2a] * dVar20;
  param_1[0x2b] = param_1[0x2b] * dVar20;
  param_1[0x2c] = param_1[0x2c] * dVar20;
  param_1[0x2d] = param_1[0x2d] * dVar20;
  *param_9 = dVar230 + *param_9;
  auVar6._0_8_ = dVar230 * *param_6 + param_1[0x84];
  auVar6._8_8_ = dVar230 * param_6[1] + param_1[0x85];
  auVar17._16_8_ = dVar230 * param_6[2] + param_1[0x86];
  auVar17._0_16_ = auVar6;
  auVar17._24_8_ = dVar230 * 0.0 + 0.0;
  *(undefined1 (*) [16])(param_1 + 0x84) = auVar6;
  dVar20 = (double)vmovlps_avx(auVar17._16_16_);
  param_1[0x86] = dVar20;
  return;
}

// ApplyRotationConstraintSoftKD___un_3C_s_5B_unFPBDJointSolver_5D__3E_CuniCuniCundCundCundCunbREFs_5B__c_unFVector_5D_CundCundREFund_avx @ 1409f5f40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyRotationConstraintSoftKD___un_3C_s_5B_unFPBDJointSolver_5D__3E_CuniCuniCundCundCundCunbREFs_5B__c_unFVector_5D_CundCundREFund_avx
               (longlong param_1,int param_2,int param_3,double param_4,double param_5,
               double param_6,byte param_7,undefined1 (*param_8) [24],double param_9,double param_10
               ,double *param_11,undefined1 (*param_12) [16])

{
  undefined1 (*pauVar1) [16];
  double *pdVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar26;
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  double dVar25;
  double dVar27;
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [32];
  undefined1 auVar39 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar49;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar50;
  undefined1 auVar54 [16];
  double dVar57;
  double dVar59;
  undefined1 auVar56 [32];
  double dVar58;
  undefined1 in_ZMM4 [64];
  double dVar60;
  undefined1 auVar61 [16];
  double dVar67;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  double dVar68;
  undefined1 auVar64 [32];
  undefined1 auVar66 [32];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  double dVar80;
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [32];
  undefined1 auVar90 [16];
  undefined1 auVar92 [16];
  ulonglong uVar91;
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar101 [32];
  double dVar103;
  double dVar104;
  double dVar105;
  double dVar106;
  double dVar112;
  undefined1 auVar107 [16];
  double dVar113;
  double dVar114;
  double dVar115;
  undefined1 auVar108 [32];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  undefined1 auVar111 [32];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [32];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar24 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar55 [32];
  undefined1 auVar65 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar100 [32];
  undefined1 auVar102 [32];
  
  dVar5 = _UNK_150b54438;
  dVar4 = _UNK_150b54430;
  dVar113 = _UNK_150b54428;
  dVar106 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar103 = _UNK_150b54418;
  dVar58 = _UNK_150b54410;
  dVar57 = _UNK_150b54408;
  dVar49 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar59 = _UNK_15076c6f8;
  dVar50 = ___xmm_bff00000000000003ff0000000000000;
  auVar17 = vpcmpeqd_avx(in_ZMM4._0_16_,in_ZMM4._0_16_);
  auVar15 = vpcmpgtd_avx(param_12[1],auVar17);
  auVar17 = vpcmpgtd_avx(*param_12,auVar17);
  auVar13 = vpor_avx(auVar17,auVar15);
  lVar7 = (longlong)param_3;
  lVar6 = lVar7 * 0x80;
  pauVar1 = (undefined1 (*) [16])(param_1 + 0x240 + lVar6);
  auVar17 = *(undefined1 (*) [16])(param_1 + 0x240 + lVar6);
  dVar80 = *(double *)*param_8;
  auVar54._8_8_ = dVar80;
  auVar54._0_8_ = dVar80;
  auVar15 = *(undefined1 (*) [16])(param_1 + 0x260 + lVar6);
  dVar27 = *(double *)(*param_8 + 8);
  auVar61._8_8_ = dVar27;
  auVar61._0_8_ = dVar27;
  auVar90 = *(undefined1 (*) [16])(param_1 + 0x280 + lVar6);
  dVar9 = *(double *)(*param_8 + 0x10);
  auVar69._8_8_ = dVar9;
  auVar69._0_8_ = dVar9;
  auVar61 = vunpcklpd_avx(auVar54,auVar61);
  auVar54 = vblendpd_avx(auVar54,auVar69,1);
  auVar64._16_16_ = auVar54;
  auVar64._0_16_ = auVar61;
  dVar60 = auVar61._0_8_;
  auVar10._0_8_ = dVar60 * (auVar17._0_8_ * dVar80 + auVar15._0_8_ * dVar27 + auVar90._0_8_ * dVar9)
  ;
  dVar67 = auVar61._8_8_;
  auVar10._8_8_ = dVar67 * (auVar17._8_8_ * dVar80 + auVar15._8_8_ * dVar27 + auVar90._8_8_ * dVar9)
  ;
  dVar68 = auVar54._0_8_;
  auVar17 = vshufpd_avx(auVar10,auVar10,1);
  dVar80 = dVar68 * (*(double *)(param_1 + 0x250 + lVar6) * dVar80 +
                     *(double *)(param_1 + 0x270 + lVar6) * dVar27 +
                    *(double *)(param_1 + 0x290 + lVar6) * dVar9) + auVar10._0_8_ + auVar17._0_8_;
  dVar27 = 0.0;
  if ((((SUB161(auVar13 >> 0x1f,0) & 1) == 0 && (SUB161(auVar13 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar13 >> 0x5f,0) & 1) == 0) && -1 < auVar13[0xf]) {
    if (__real_3f1a36e2eb1c432d < param_6) {
      lVar6 = (longlong)param_2 * 0x20;
      auVar17 = *(undefined1 (*) [16])(param_1 + 0x3f0 + lVar6);
      auVar15 = *(undefined1 (*) [16])(param_1 + 0x3e0 + lVar6);
      auVar76._16_16_ = auVar17;
      auVar76._0_16_ = auVar15;
      pdVar2 = (double *)(param_1 + 0x130 + lVar6);
      dVar27 = *pdVar2;
      dVar9 = pdVar2[1];
      pdVar2 = (double *)(param_1 + 0x140 + lVar6);
      dVar25 = *pdVar2;
      dVar26 = pdVar2[1];
      auVar13._0_8_ = auVar15._0_8_ * dVar27 + dVar25 * auVar17._0_8_;
      auVar13._8_8_ = auVar15._8_8_ * dVar9 + dVar26 * auVar17._8_8_;
      auVar90 = vshufpd_avx(auVar13,auVar13,1);
      auVar14._8_8_ = 0;
      auVar14._0_8_ = auVar13._0_8_ + auVar90._0_8_;
      auVar90 = vcmpsd_avx(ZEXT816(0),auVar14,2);
      auVar120._8_8_ = 0;
      auVar120._0_8_ = __real_3ff0000000000000;
      auVar124._8_8_ = 0;
      auVar124._0_8_ = __real_bff0000000000000;
      auVar90 = vblendvpd_avx(auVar124,auVar120,auVar90);
      dVar105 = auVar90._0_8_;
      auVar21._0_8_ = dVar27 * dVar105;
      auVar21._8_8_ = dVar9 * dVar105;
      auVar21._16_8_ = dVar25 * dVar105;
      auVar21._24_8_ = dVar26 * dVar105;
      auVar22 = vsubpd_avx(auVar21,auVar76);
      auVar97._0_8_ =
           auVar15._0_8_ * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
      auVar97._8_8_ = auVar15._8_8_ * _UNK_150b543c8;
      auVar97._16_8_ = auVar17._0_8_ * _UNK_150b543d0;
      auVar97._24_8_ = auVar17._8_8_ * _UNK_150b543d8;
      auVar23 = vperm2f128_avx(auVar22,auVar22,0x11);
      lVar6 = lVar7 * 0x20;
      auVar17 = *(undefined1 (*) [16])(param_1 + 0x3f0 + lVar6);
      auVar15 = *(undefined1 (*) [16])(param_1 + 0x3e0 + lVar6);
      pdVar2 = (double *)(param_1 + 0x130 + lVar6);
      dVar27 = *pdVar2;
      dVar9 = pdVar2[1];
      pdVar2 = (double *)(param_1 + 0x140 + lVar6);
      dVar25 = *pdVar2;
      dVar26 = pdVar2[1];
      auVar71._0_8_ = auVar15._0_8_ * dVar27 + auVar17._0_8_ * dVar25;
      auVar71._8_8_ = auVar15._8_8_ * dVar9 + auVar17._8_8_ * dVar26;
      auVar90 = vshufpd_avx(auVar71,auVar71,1);
      auVar64 = vshufpd_avx(auVar23,auVar23,0xf);
      auVar72._8_8_ = 0;
      auVar72._0_8_ = auVar71._0_8_ + auVar90._0_8_;
      auVar90 = vcmpsd_avx(ZEXT816(0),auVar72,2);
      dVar114 = auVar22._0_8_;
      auVar90 = vblendvpd_avx(auVar124,auVar120,auVar90);
      auVar40 = vperm2f128_avx(auVar97,auVar97,1);
      auVar21 = vshufpd_avx(auVar40,auVar40,5);
      auVar54 = vshufpd_avx(auVar22._0_16_,auVar22._0_16_,3);
      auVar22 = vshufpd_avx(auVar97,auVar97,5);
      dVar105 = auVar22._0_8_ * auVar23._0_8_ *
                ___ymm_00000000000000003ff00000000000003ff0000000000000bff0000000000000 +
                auVar40._0_8_ * auVar54._0_8_ *
                ___ymm_0000000000000000bff00000000000003ff00000000000003ff0000000000000 +
                auVar21._0_8_ * dVar114 * ___xmm_bff00000000000003ff0000000000000 +
                auVar97._0_8_ * auVar64._0_8_;
      dVar104 = auVar22._8_8_ * auVar23._0_8_ * _UNK_150b54588 +
                auVar40._8_8_ * auVar54._8_8_ * _UNK_150b54568 +
                auVar21._8_8_ * dVar114 * _UNK_15076c6f8 + auVar97._8_8_ * auVar64._8_8_;
      dVar112 = auVar22._16_8_ * auVar23._16_8_ * _UNK_150b54590 +
                auVar40._16_8_ * auVar54._0_8_ * _UNK_150b54570 +
                auVar21._16_8_ * dVar114 * ___xmm_bff00000000000003ff0000000000000 +
                auVar97._16_8_ * auVar64._16_8_;
      dVar114 = auVar22._24_8_ * auVar23._16_8_ * _UNK_150b54598 +
                auVar40._24_8_ * auVar54._8_8_ * _UNK_150b54578 +
                auVar21._24_8_ * dVar114 * _UNK_15076c6f8 + auVar97._24_8_ * auVar64._24_8_;
      auVar87._16_16_ = auVar17;
      auVar87._0_16_ = auVar15;
      dVar115 = auVar90._0_8_;
      auVar22._0_8_ = dVar27 * dVar115;
      auVar22._8_8_ = dVar9 * dVar115;
      auVar22._16_8_ = dVar25 * dVar115;
      auVar22._24_8_ = dVar26 * dVar115;
      auVar22 = vsubpd_avx(auVar22,auVar87);
      auVar39._0_8_ =
           auVar15._0_8_ * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
      auVar39._8_8_ = auVar15._8_8_ * _UNK_150b543c8;
      auVar39._16_8_ = auVar17._0_8_ * _UNK_150b543d0;
      auVar39._24_8_ = auVar17._8_8_ * _UNK_150b543d8;
      dVar27 = auVar22._0_8_;
      auVar23 = vperm2f128_avx(auVar39,auVar39,1);
      auVar64 = vshufpd_avx(auVar23,auVar23,5);
      auVar40 = vperm2f128_avx(auVar22,auVar22,0x11);
      auVar21 = vshufpd_avx(auVar40,auVar40,0xf);
      auVar17 = vshufpd_avx(auVar22._0_16_,auVar22._0_16_,3);
      auVar22 = vshufpd_avx(auVar39,auVar39,5);
      dVar9 = ___ymm_00000000000000003ff00000000000003ff0000000000000bff0000000000000 *
              auVar22._0_8_ * auVar40._0_8_ +
              ___ymm_0000000000000000bff00000000000003ff00000000000003ff0000000000000 *
              auVar23._0_8_ * auVar17._0_8_ +
              auVar39._0_8_ * auVar21._0_8_ +
              auVar64._0_8_ * dVar27 * ___xmm_bff00000000000003ff0000000000000;
      dVar25 = _UNK_150b54588 * auVar22._8_8_ * auVar40._0_8_ +
               _UNK_150b54568 * auVar23._8_8_ * auVar17._8_8_ +
               auVar39._8_8_ * auVar21._8_8_ + auVar64._8_8_ * dVar27 * _UNK_15076c6f8;
      dVar26 = _UNK_150b54590 * auVar22._16_8_ * auVar40._16_8_ +
               _UNK_150b54570 * auVar23._16_8_ * auVar17._0_8_ +
               auVar39._16_8_ * auVar21._16_8_ +
               auVar64._16_8_ * dVar27 * ___xmm_bff00000000000003ff0000000000000;
      dVar27 = _UNK_150b54598 * auVar22._24_8_ * auVar40._16_8_ +
               _UNK_150b54578 * auVar23._24_8_ * auVar17._8_8_ +
               auVar39._24_8_ * auVar21._24_8_ + auVar64._24_8_ * dVar27 * _UNK_15076c6f8;
      auVar40._0_8_ = dVar105 + dVar105;
      auVar40._8_8_ = dVar104 + dVar104;
      auVar40._16_8_ = dVar112 + dVar112;
      auVar40._24_8_ = dVar114 + dVar114;
      auVar23._0_8_ = dVar9 + dVar9;
      auVar23._8_8_ = dVar25 + dVar25;
      auVar23._16_8_ = dVar26 + dVar26;
      auVar23._24_8_ = dVar27 + dVar27;
      auVar64 = vsubpd_avx(auVar40,auVar23);
      auVar15._0_8_ = dVar60 * auVar64._0_8_;
      auVar15._8_8_ = dVar67 * auVar64._8_8_;
      auVar17 = vshufpd_avx(auVar15,auVar15,1);
      dVar27 = param_4 * param_10 + dVar68 * auVar64._16_8_ + auVar15._0_8_ + auVar17._0_8_;
      auVar64._24_8_ = 0;
      auVar64._0_24_ = *param_8;
    }
    dVar9 = __real_3ff0000000000000;
    if ((param_7 & 1) != 0) {
      dVar9 = __real_3ff0000000000000 / dVar80;
    }
    dVar60 = dVar9 * param_5 * param_4 * param_4;
    param_4 = param_6 * dVar9 * param_4;
    dVar27 = (__real_3ff0000000000000 / (dVar80 * (param_4 + dVar60) + __real_3ff0000000000000)) *
             *(double *)(param_1 + 0x4c8) * ((param_9 * dVar60 - param_4 * dVar27) - *param_11);
  }
  else {
    if (__real_3f1a36e2eb1c432d < param_6) {
      lVar6 = (longlong)param_2 * 0x20;
      auVar17 = *(undefined1 (*) [16])(param_1 + 0x3f0 + lVar6);
      auVar15 = *(undefined1 (*) [16])(param_1 + 0x3e0 + lVar6);
      auVar75._16_16_ = auVar17;
      auVar75._0_16_ = auVar15;
      pdVar2 = (double *)(param_1 + 0x130 + lVar6);
      dVar27 = *pdVar2;
      dVar9 = pdVar2[1];
      pdVar2 = (double *)(param_1 + 0x140 + lVar6);
      dVar25 = *pdVar2;
      dVar26 = pdVar2[1];
      auVar11._0_8_ = auVar15._0_8_ * dVar27 + dVar25 * auVar17._0_8_;
      auVar11._8_8_ = auVar15._8_8_ * dVar9 + dVar26 * auVar17._8_8_;
      auVar90 = vshufpd_avx(auVar11,auVar11,1);
      auVar12._8_8_ = 0;
      auVar12._0_8_ = auVar11._0_8_ + auVar90._0_8_;
      auVar90 = vcmpsd_avx(ZEXT816(0),auVar12,2);
      auVar119._8_8_ = 0;
      auVar119._0_8_ = __real_3ff0000000000000;
      auVar123._8_8_ = 0;
      auVar123._0_8_ = __real_bff0000000000000;
      auVar90 = vblendvpd_avx(auVar123,auVar119,auVar90);
      dVar105 = auVar90._0_8_;
      auVar18._0_8_ = dVar27 * dVar105;
      auVar18._8_8_ = dVar9 * dVar105;
      auVar18._16_8_ = dVar25 * dVar105;
      auVar18._24_8_ = dVar26 * dVar105;
      auVar22 = vsubpd_avx(auVar18,auVar75);
      auVar96._0_8_ =
           auVar15._0_8_ * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
      auVar96._8_8_ = auVar15._8_8_ * _UNK_150b543c8;
      auVar96._16_8_ = auVar17._0_8_ * _UNK_150b543d0;
      auVar96._24_8_ = auVar17._8_8_ * _UNK_150b543d8;
      auVar23 = vperm2f128_avx(auVar22,auVar22,0x11);
      lVar6 = lVar7 * 0x20;
      auVar17 = *(undefined1 (*) [16])(param_1 + 0x3f0 + lVar6);
      auVar15 = *(undefined1 (*) [16])(param_1 + 0x3e0 + lVar6);
      pdVar2 = (double *)(param_1 + 0x130 + lVar6);
      dVar27 = *pdVar2;
      dVar9 = pdVar2[1];
      pdVar2 = (double *)(param_1 + 0x140 + lVar6);
      dVar25 = *pdVar2;
      dVar26 = pdVar2[1];
      auVar28._0_8_ = auVar15._0_8_ * dVar27 + auVar17._0_8_ * dVar25;
      auVar28._8_8_ = auVar15._8_8_ * dVar9 + auVar17._8_8_ * dVar26;
      auVar90 = vshufpd_avx(auVar28,auVar28,1);
      auVar64 = vshufpd_avx(auVar23,auVar23,0xf);
      auVar29._8_8_ = 0;
      auVar29._0_8_ = auVar28._0_8_ + auVar90._0_8_;
      auVar90 = vcmpsd_avx(ZEXT816(0),auVar29,2);
      dVar105 = auVar22._0_8_;
      auVar90 = vblendvpd_avx(auVar123,auVar119,auVar90);
      auVar40 = vperm2f128_avx(auVar96,auVar96,1);
      auVar21 = vshufpd_avx(auVar40,auVar40,5);
      auVar54 = vshufpd_avx(auVar22._0_16_,auVar22._0_16_,3);
      auVar22 = vshufpd_avx(auVar96,auVar96,5);
      dVar104 = auVar22._0_8_ * auVar23._0_8_ *
                ___ymm_00000000000000003ff00000000000003ff0000000000000bff0000000000000 +
                auVar40._0_8_ * auVar54._0_8_ *
                ___ymm_0000000000000000bff00000000000003ff00000000000003ff0000000000000 +
                auVar21._0_8_ * dVar105 * ___xmm_bff00000000000003ff0000000000000 +
                auVar96._0_8_ * auVar64._0_8_;
      dVar112 = auVar22._8_8_ * auVar23._0_8_ * _UNK_150b54588 +
                auVar40._8_8_ * auVar54._8_8_ * _UNK_150b54568 +
                auVar21._8_8_ * dVar105 * _UNK_15076c6f8 + auVar96._8_8_ * auVar64._8_8_;
      dVar114 = auVar22._16_8_ * auVar23._16_8_ * _UNK_150b54590 +
                auVar40._16_8_ * auVar54._0_8_ * _UNK_150b54570 +
                auVar21._16_8_ * dVar105 * ___xmm_bff00000000000003ff0000000000000 +
                auVar96._16_8_ * auVar64._16_8_;
      dVar115 = auVar22._24_8_ * auVar23._16_8_ * _UNK_150b54598 +
                auVar40._24_8_ * auVar54._8_8_ * _UNK_150b54578 +
                auVar21._24_8_ * dVar105 * _UNK_15076c6f8 + auVar96._24_8_ * auVar64._24_8_;
      auVar38._16_16_ = auVar17;
      auVar38._0_16_ = auVar15;
      dVar105 = auVar90._0_8_;
      auVar19._0_8_ = dVar27 * dVar105;
      auVar19._8_8_ = dVar9 * dVar105;
      auVar19._16_8_ = dVar25 * dVar105;
      auVar19._24_8_ = dVar26 * dVar105;
      auVar22 = vsubpd_avx(auVar19,auVar38);
      auVar32._0_8_ =
           auVar15._0_8_ * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
      auVar32._8_8_ = auVar15._8_8_ * _UNK_150b543c8;
      auVar32._16_8_ = auVar17._0_8_ * _UNK_150b543d0;
      auVar32._24_8_ = auVar17._8_8_ * _UNK_150b543d8;
      dVar27 = auVar22._0_8_;
      auVar23 = vperm2f128_avx(auVar32,auVar32,1);
      auVar64 = vshufpd_avx(auVar23,auVar23,5);
      auVar40 = vperm2f128_avx(auVar22,auVar22,0x11);
      auVar21 = vshufpd_avx(auVar40,auVar40,0xf);
      auVar17 = vshufpd_avx(auVar22._0_16_,auVar22._0_16_,3);
      auVar22 = vshufpd_avx(auVar32,auVar32,5);
      dVar9 = ___ymm_00000000000000003ff00000000000003ff0000000000000bff0000000000000 *
              auVar22._0_8_ * auVar40._0_8_ +
              ___ymm_0000000000000000bff00000000000003ff00000000000003ff0000000000000 *
              auVar23._0_8_ * auVar17._0_8_ +
              auVar21._0_8_ * auVar32._0_8_ +
              ___xmm_bff00000000000003ff0000000000000 * auVar64._0_8_ * dVar27;
      dVar25 = _UNK_150b54588 * auVar22._8_8_ * auVar40._0_8_ +
               _UNK_150b54568 * auVar23._8_8_ * auVar17._8_8_ +
               auVar21._8_8_ * auVar32._8_8_ + _UNK_15076c6f8 * auVar64._8_8_ * dVar27;
      dVar26 = _UNK_150b54590 * auVar22._16_8_ * auVar40._16_8_ +
               _UNK_150b54570 * auVar23._16_8_ * auVar17._0_8_ +
               auVar21._16_8_ * auVar32._16_8_ +
               ___xmm_bff00000000000003ff0000000000000 * auVar64._16_8_ * dVar27;
      dVar27 = _UNK_150b54598 * auVar22._24_8_ * auVar40._16_8_ +
               _UNK_150b54578 * auVar23._24_8_ * auVar17._8_8_ +
               auVar21._24_8_ * auVar32._24_8_ + _UNK_15076c6f8 * auVar64._24_8_ * dVar27;
      auVar33._0_8_ = dVar104 + dVar104;
      auVar33._8_8_ = dVar112 + dVar112;
      auVar33._16_8_ = dVar114 + dVar114;
      auVar33._24_8_ = dVar115 + dVar115;
      auVar20._0_8_ = dVar9 + dVar9;
      auVar20._8_8_ = dVar25 + dVar25;
      auVar20._16_8_ = dVar26 + dVar26;
      auVar20._24_8_ = dVar27 + dVar27;
      auVar64 = vsubpd_avx(auVar33,auVar20);
      auVar90._0_8_ = dVar60 * auVar64._0_8_;
      auVar90._8_8_ = dVar67 * auVar64._8_8_;
      auVar17 = vshufpd_avx(auVar90,auVar90,1);
      dVar27 = param_4 * param_10 + dVar68 * auVar64._16_8_ + auVar90._0_8_ + auVar17._0_8_;
      auVar64._24_8_ = 0;
      auVar64._0_24_ = *param_8;
    }
    dVar9 = __real_3ff0000000000000;
    if ((param_7 & 1) != 0) {
      dVar9 = __real_3ff0000000000000 / dVar80;
    }
    dVar60 = dVar9 * param_5 * param_4 * param_4;
    param_4 = param_6 * dVar9 * param_4;
    dVar27 = (__real_3ff0000000000000 / (dVar80 * (param_4 + dVar60) + __real_3ff0000000000000)) *
             *(double *)(param_1 + 0x4c8) * ((param_9 * dVar60 - param_4 * dVar27) - *param_11);
  }
  auVar70._8_8_ = 0;
  auVar70._0_8_ = __real_3ff0000000000000;
  dVar80 = dVar27 * (double)((ulonglong)dVar80 ^ __xmm_80000000000000008000000000000000);
  auVar51._0_8_ = auVar64._0_8_ * dVar80;
  auVar51._8_8_ = auVar64._8_8_ * dVar80;
  auVar55._16_8_ = auVar64._16_8_ * dVar80;
  auVar55._0_16_ = auVar51;
  auVar55._24_8_ = auVar64._24_8_ * dVar80;
  lVar8 = lVar7 * 0x20;
  auVar17 = *(undefined1 (*) [16])(param_1 + 0x1a0 + lVar8);
  auVar15 = *(undefined1 (*) [16])(param_1 + 0x1b0 + lVar8);
  dVar80 = auVar17._0_8_;
  dVar60 = auVar17._8_8_;
  dVar68 = auVar15._0_8_;
  dVar25 = auVar15._8_8_;
  auVar107._8_8_ = 0;
  auVar107._0_8_ = *(ulonglong *)(param_1 + 0x1b8 + lVar8);
  auVar17 = vmovhps_avx(auVar107,*(undefined8 *)(param_1 + 0x1b0 + lVar8));
  auVar116._8_8_ = 0;
  auVar116._0_8_ = *(ulonglong *)(param_1 + 0x1a8 + lVar8);
  auVar15 = vmovhps_avx(auVar116,*(undefined8 *)(param_1 + 0x1a0 + lVar8));
  auVar90 = vshufpd_avx(auVar51,auVar51,3);
  auVar64 = vperm2f128_avx(auVar55,auVar55,0x11);
  dVar9 = dVar80 + (auVar15._0_8_ * auVar64._0_8_ *
                    ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
                   dVar80 * 0.0 +
                   auVar17._0_8_ * auVar51._0_8_ * ___xmm_bff00000000000003ff0000000000000 +
                   auVar90._0_8_ * dVar68 *
                   ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000) *
                   ___ymm_3fe00000000000003fe00000000000003fe00000000000003fe0000000000000;
  dVar67 = dVar60 + (auVar15._8_8_ * auVar64._0_8_ * _UNK_150b54428 +
                    dVar60 * 0.0 + auVar17._8_8_ * auVar51._0_8_ * _UNK_15076c6f8 +
                    auVar90._8_8_ * dVar25 * _UNK_150b54408) * _UNK_150aa8f28;
  dVar68 = dVar68 + (auVar17._0_8_ * auVar64._16_8_ * _UNK_150b54430 +
                    dVar68 * 0.0 +
                    auVar15._0_8_ * auVar51._0_8_ * ___xmm_bff00000000000003ff0000000000000 +
                    auVar90._0_8_ * dVar80 * _UNK_150b54410) * _UNK_150aa8f30;
  dVar25 = dVar25 + (auVar17._8_8_ * auVar64._16_8_ * _UNK_150b54438 +
                    dVar25 * 0.0 + auVar15._8_8_ * auVar51._0_8_ * _UNK_15076c6f8 +
                    auVar90._8_8_ * dVar60 * _UNK_150b54418) * _UNK_150aa8f38;
  auVar81._0_8_ = dVar68 * dVar68 + dVar9 * dVar9;
  auVar81._8_8_ = dVar25 * dVar25 + dVar67 * dVar67;
  auVar17 = vshufpd_avx(auVar81,auVar81,1);
  dVar80 = auVar17._0_8_ + auVar81._0_8_;
  auVar92._8_8_ = 0;
  auVar92._0_8_ = __real_3e45798ee2308c3a;
  auVar82._8_8_ = 0;
  auVar82._0_8_ = dVar80;
  auVar17 = vcmpsd_avx(auVar92,auVar82,6);
  uVar91 = ~auVar17._0_8_ & __real_ffffffffffffffff;
  dVar80 = __real_3ff0000000000000 / SQRT(dVar80);
  auVar98._0_8_ = ~uVar91 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
  auVar98._8_8_ = ~uVar91 & _UNK_150b54548;
  auVar98._16_8_ = ~uVar91 & _UNK_150b54550;
  auVar98._24_8_ = ~uVar91 & _UNK_150b54558;
  auVar62._0_8_ = (ulonglong)(dVar9 * dVar80) & uVar91;
  auVar62._8_8_ = (ulonglong)(dVar67 * dVar80) & uVar91;
  auVar65._16_8_ = (ulonglong)(dVar68 * dVar80) & uVar91;
  auVar65._0_16_ = auVar62;
  auVar65._24_8_ = (ulonglong)(dVar25 * dVar80) & uVar91;
  auVar90 = auVar98._16_16_ | auVar65._16_16_;
  auVar17 = vshufps_avx(auVar62,auVar62,0x4e);
  auVar15 = vshufps_avx(auVar90,auVar90,0x4e);
  uVar3 = vmovlpd_avx(auVar62);
  *(undefined8 *)(param_1 + 0x1a0 + lVar8) = uVar3;
  uVar3 = vmovlpd_avx(auVar17);
  *(undefined8 *)(param_1 + 0x1a8 + lVar8) = uVar3;
  uVar3 = vmovlps_avx(auVar90);
  *(undefined8 *)(param_1 + 0x1b0 + lVar8) = uVar3;
  uVar3 = vmovlps_avx(auVar15);
  *(undefined8 *)(param_1 + 0x1b8 + lVar8) = uVar3;
  auVar63._0_8_ =
       *(double *)(param_1 + 0x1c0) * *(double *)(param_1 + 0x1a0) +
       *(double *)(param_1 + 0x1d0) * *(double *)(param_1 + 0x1b0);
  auVar63._8_8_ =
       *(double *)(param_1 + 0x1c8) * *(double *)(param_1 + 0x1a8) +
       *(double *)(param_1 + 0x1d8) * *(double *)(param_1 + 0x1b8);
  auVar17 = vshufpd_avx(auVar63,auVar63,1);
  auVar83._8_8_ = 0;
  auVar83._0_8_ = auVar63._0_8_ + auVar17._0_8_;
  auVar17 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar83,2);
  auVar84._8_8_ = 0;
  auVar84._0_8_ = __real_bff0000000000000;
  auVar17 = vblendvpd_avx(auVar84,auVar70,auVar17);
  dVar80 = auVar17._0_8_;
  *(double *)(param_1 + 0x1c0) = *(double *)(param_1 + 0x1c0) * dVar80;
  *(double *)(param_1 + 0x1c8) = *(double *)(param_1 + 0x1c8) * dVar80;
  *(double *)(param_1 + 0x1d0) = *(double *)(param_1 + 0x1d0) * dVar80;
  *(double *)(param_1 + 0x1d8) = *(double *)(param_1 + 0x1d8) * dVar80;
  lVar6 = lVar7 * 0x60;
  auVar93._8_8_ = 0;
  auVar93._0_8_ = *(ulonglong *)(param_1 + 0x20 + lVar6);
  auVar54 = vmovhps_avx(auVar93,*(undefined8 *)(param_1 + 0x38 + lVar6));
  pdVar2 = (double *)(param_1 + 0x20 + lVar6);
  dVar105 = *pdVar2;
  dVar104 = pdVar2[1];
  auVar17 = *(undefined1 (*) [16])(param_1 + 0x28 + lVar6);
  auVar15 = *(undefined1 (*) [16])(param_1 + 0x1a0 + lVar8);
  auVar90 = *(undefined1 (*) [16])(param_1 + 0x1a8 + lVar8);
  dVar80 = *(double *)(param_1 + 0x1b0 + lVar8);
  auVar121._8_8_ = 0;
  auVar121._0_8_ = dVar80;
  dVar9 = *(double *)(param_1 + 0x1b8 + lVar8);
  auVar126._8_8_ = dVar9;
  auVar126._0_8_ = dVar9;
  auVar13 = vunpcklpd_avx(auVar121,auVar126);
  dVar67 = auVar15._0_8_;
  auVar99._0_8_ = auVar17._0_8_ * dVar67;
  dVar25 = auVar15._8_8_;
  auVar99._8_8_ = auVar17._8_8_ * dVar25;
  auVar99._16_8_ = auVar54._0_8_ * auVar13._0_8_;
  auVar99._24_8_ = auVar54._8_8_ * auVar13._8_8_;
  dVar60 = *(double *)(param_1 + 0x1a0 + lVar8);
  auVar117._8_8_ = 0;
  auVar117._0_8_ = dVar60;
  auVar17 = vunpcklpd_avx(auVar117,auVar126);
  pdVar2 = (double *)(param_1 + 0x30 + lVar6);
  dVar68 = auVar90._0_8_;
  auVar108._0_8_ = dVar105 * dVar68;
  dVar26 = auVar90._8_8_;
  auVar108._8_8_ = dVar104 * dVar26;
  auVar108._16_8_ = *pdVar2 * auVar17._0_8_;
  auVar108._24_8_ = pdVar2[1] * auVar17._8_8_;
  auVar64 = vsubpd_avx(auVar99,auVar108);
  auVar94._0_8_ = auVar64._0_8_ + auVar64._0_8_;
  auVar94._8_8_ = auVar64._8_8_ + auVar64._8_8_;
  auVar100._16_8_ = auVar64._16_8_ + auVar64._16_8_;
  auVar100._0_16_ = auVar94;
  auVar100._24_8_ = auVar64._24_8_ + auVar64._24_8_;
  auVar109._16_16_ = auVar94;
  auVar109._0_16_ = auVar94;
  auVar64 = vshufpd_avx(auVar109,ZEXT1632(auVar100._16_16_),1);
  auVar21 = vperm2f128_avx(auVar100,auVar100,1);
  auVar21 = vshufpd_avx(auVar21,auVar100,4);
  auVar101._0_8_ = dVar67 * auVar21._0_8_;
  auVar101._8_8_ = dVar25 * auVar21._8_8_;
  auVar101._16_8_ = dVar80 * auVar21._16_8_;
  auVar101._24_8_ = auVar21._24_8_ * 0.0;
  auVar110._0_8_ = dVar68 * auVar64._0_8_;
  auVar110._8_8_ = dVar26 * auVar64._8_8_;
  auVar110._16_8_ = dVar60 * auVar64._16_8_;
  auVar110._24_8_ = auVar64._24_8_ * 0.0;
  auVar21 = vsubpd_avx(auVar101,auVar110);
  auVar111._16_16_ = auVar21._0_16_;
  auVar111._0_16_ = auVar21._0_16_;
  auVar21 = vshufpd_avx(auVar111,ZEXT1632(auVar21._16_16_),1);
  pdVar2 = (double *)(param_1 + 0x170 + lVar7 * 0x18);
  auVar95._0_8_ = *pdVar2 + dVar105 + dVar9 * auVar64._0_8_ + auVar21._0_8_;
  auVar95._8_8_ = pdVar2[1] + dVar104 + dVar9 * auVar64._8_8_ + auVar21._8_8_;
  auVar102._16_8_ =
       *(double *)(param_1 + 0x180 + lVar7 * 0x18) +
       *(double *)(param_1 + 0x30 + lVar6) + dVar9 * auVar64._16_8_ + auVar21._16_8_;
  auVar102._0_16_ = auVar95;
  auVar102._24_8_ = dVar9 * auVar64._24_8_ + 0.0 + auVar21._24_8_ + 0.0;
  *(undefined1 (*) [16])(param_1 + 0x100 + lVar7 * 0x18) = auVar95;
  uVar3 = vmovlps_avx(auVar102._16_16_);
  *(undefined8 *)(param_1 + 0x110 + lVar7 * 0x18) = uVar3;
  dVar80 = *(double *)(param_1 + 0x1b8 + lVar8);
  auVar17 = *(undefined1 (*) [16])(param_1 + 0x10 + lVar6);
  dVar9 = *(double *)(param_1 + 0x1a0 + lVar8);
  auVar125._8_8_ = 0;
  auVar125._0_8_ = *(ulonglong *)(param_1 + 8 + lVar6);
  auVar15 = vmovhps_avx(auVar125,*(undefined8 *)(param_1 + lVar6));
  dVar68 = SUB168(*(undefined1 (*) [16])(param_1 + lVar6),0);
  dVar25 = SUB168(*(undefined1 (*) [16])(param_1 + lVar6),8);
  dVar26 = auVar17._0_8_;
  dVar105 = auVar17._8_8_;
  auVar122._8_8_ = 0;
  auVar122._0_8_ = *(ulonglong *)(param_1 + 0x18 + lVar6);
  auVar17 = vmovhps_avx(auVar122,*(undefined8 *)(param_1 + 0x10 + lVar6));
  dVar60 = *(double *)(param_1 + 0x1a8 + lVar8);
  dVar67 = *(double *)(param_1 + 0x1b0 + lVar8);
  pdVar2 = (double *)(param_1 + 0x130 + lVar8);
  *pdVar2 = auVar15._0_8_ * dVar67 * dVar106 +
            dVar26 * dVar60 * dVar49 + dVar80 * dVar68 + dVar9 * auVar17._0_8_ * dVar50;
  pdVar2[1] = auVar15._8_8_ * dVar67 * dVar113 +
              dVar105 * dVar60 * dVar57 + dVar80 * dVar25 + dVar9 * auVar17._8_8_ * dVar59;
  pdVar2 = (double *)(param_1 + 0x140 + lVar8);
  *pdVar2 = auVar17._0_8_ * dVar67 * dVar4 +
            dVar68 * dVar60 * dVar58 + dVar80 * dVar26 + dVar9 * auVar15._0_8_ * dVar50;
  pdVar2[1] = auVar17._8_8_ * dVar67 * dVar5 +
              dVar25 * dVar60 * dVar103 + dVar80 * dVar105 + dVar9 * auVar15._8_8_ * dVar59;
  auVar52._0_8_ =
       *(double *)(param_1 + 0x150) * *(double *)(param_1 + 0x130) +
       *(double *)(param_1 + 0x160) * *(double *)(param_1 + 0x140);
  auVar52._8_8_ =
       *(double *)(param_1 + 0x158) * *(double *)(param_1 + 0x138) +
       *(double *)(param_1 + 0x168) * *(double *)(param_1 + 0x148);
  auVar17 = vshufpd_avx(auVar52,auVar52,1);
  auVar53._8_8_ = 0;
  auVar53._0_8_ = auVar17._0_8_ + auVar52._0_8_;
  auVar17 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar53,2);
  auVar17 = vblendvpd_avx(auVar84,auVar70,auVar17);
  dVar80 = auVar17._0_8_;
  *(double *)(param_1 + 0x150) = *(double *)(param_1 + 0x150) * dVar80;
  *(double *)(param_1 + 0x158) = *(double *)(param_1 + 0x158) * dVar80;
  *(double *)(param_1 + 0x160) = *(double *)(param_1 + 0x160) * dVar80;
  *(double *)(param_1 + 0x168) = *(double *)(param_1 + 0x168) * dVar80;
  dVar80 = *(double *)(param_1 + 0x1a0 + lVar8);
  auVar36._8_8_ = dVar80;
  auVar36._0_8_ = dVar80;
  dVar9 = *(double *)(param_1 + 0x1a8 + lVar8);
  auVar44._8_8_ = dVar9;
  auVar44._0_8_ = dVar9;
  auVar15 = vunpcklpd_avx(auVar36,auVar44);
  auVar17 = *(undefined1 (*) [16])(param_1 + 0x1b0 + lVar8);
  dVar49 = auVar15._0_8_ + auVar15._0_8_;
  dVar57 = auVar15._8_8_ + auVar15._8_8_;
  dVar50 = auVar17._0_8_;
  dVar59 = auVar17._8_8_;
  dVar58 = dVar50 + dVar50;
  dVar59 = dVar59 + dVar59;
  auVar41._0_8_ = dVar80 * dVar49;
  auVar41._8_8_ = dVar80 * dVar57;
  auVar41._16_8_ = dVar80 * dVar58;
  auVar41._24_8_ = dVar80 * dVar59;
  dVar80 = *(double *)(param_1 + 0x1b8 + lVar8);
  auVar85._0_8_ = dVar9 * dVar49;
  auVar85._8_8_ = dVar9 * dVar57;
  auVar88._16_8_ = dVar9 * dVar58;
  auVar88._0_16_ = auVar85;
  auVar88._24_8_ = dVar9 * dVar59;
  auVar56._0_8_ = dVar49 * dVar80;
  auVar56._8_8_ = dVar57 * dVar80;
  auVar56._16_8_ = dVar58 * dVar80;
  auVar56._24_8_ = dVar59 * dVar80;
  dVar80 = (dVar50 + dVar50) * *(double *)(param_1 + 0x1b0 + lVar8);
  auVar64 = vperm2f128_avx(auVar88,auVar41,0x21);
  auVar64 = vshufpd_avx(auVar64,ZEXT1632(auVar41._16_16_),4);
  auVar45._0_8_ = auVar56._0_8_ + auVar64._0_8_;
  auVar45._8_8_ = auVar56._8_8_ + auVar64._8_8_;
  auVar47._16_8_ = auVar56._16_8_ + auVar64._16_8_;
  auVar47._0_16_ = auVar45;
  auVar47._24_8_ = auVar56._24_8_ + auVar64._24_8_;
  auVar22 = vsubpd_avx(auVar64,auVar56);
  auVar17 = vshufpd_avx(auVar85,auVar85,1);
  auVar37._8_8_ = auVar41._0_8_;
  auVar37._0_8_ = auVar41._0_8_;
  auVar42._16_16_ = auVar37;
  auVar42._0_16_ = auVar37;
  auVar64 = vblendpd_avx(auVar42,ZEXT1632(auVar17),1);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = dVar27;
  auVar77._16_16_ = auVar17;
  auVar77._0_16_ = auVar16;
  auVar21 = vblendpd_avx(ZEXT1632(CONCAT88(dVar80,dVar80)),auVar77,0xc);
  auVar43._0_8_ = auVar64._0_8_ + auVar21._0_8_;
  auVar43._8_8_ = auVar64._8_8_ + auVar21._8_8_;
  auVar43._16_8_ = auVar64._16_8_ + auVar21._16_8_;
  auVar43._24_8_ = auVar64._24_8_ + auVar21._24_8_;
  auVar66._8_8_ = __real_3ff0000000000000;
  auVar66._0_8_ = __real_3ff0000000000000;
  auVar66._16_8_ = __real_3ff0000000000000;
  auVar66._24_8_ = __real_3ff0000000000000;
  auVar21 = vsubpd_avx(auVar66,auVar43);
  dVar50 = auVar21._0_8_;
  dVar80 = *(double *)(param_1 + 0xc0 + lVar7 * 0x18);
  dVar9 = *(double *)(param_1 + 0xd0 + lVar7 * 0x18);
  auVar64 = vperm2f128_avx(auVar22,auVar22,0x11);
  auVar90 = ZEXT816(0) << 0x40;
  auVar17 = vmovhpd_avx(auVar90,*(undefined8 *)(param_1 + 200 + lVar7 * 0x18));
  dVar59 = auVar17._0_8_;
  dVar49 = auVar17._8_8_;
  auVar17 = vshufpd_avx(auVar45,auVar45,3);
  auVar86._0_8_ = auVar17._0_8_ * 0.0 + dVar59 * auVar64._0_8_ + dVar80 * dVar50;
  auVar86._8_8_ = auVar17._8_8_ * 0.0 + dVar49 * auVar64._0_8_ + dVar50 * 0.0;
  auVar89._16_8_ = auVar17._0_8_ * dVar9 + auVar64._16_8_ * 0.0 + dVar50 * 0.0;
  auVar89._0_16_ = auVar86;
  auVar89._24_8_ = auVar17._8_8_ * 0.0 + auVar64._16_8_ * 0.0 + dVar50 * 0.0;
  auVar64 = vperm2f128_avx(auVar47,auVar47,0x11);
  auVar13 = auVar21._0_16_;
  auVar17 = vshufpd_avx(auVar13,auVar13,3);
  dVar50 = auVar22._0_8_;
  auVar73._0_8_ = dVar50 * 0.0 + dVar59 * auVar17._0_8_ + dVar80 * auVar64._0_8_;
  auVar73._8_8_ = dVar50 * 0.0 + dVar49 * auVar17._8_8_ + auVar64._0_8_ * 0.0;
  auVar78._16_8_ = dVar50 * dVar9 + auVar17._0_8_ * 0.0 + auVar64._16_8_ * 0.0;
  auVar78._0_16_ = auVar73;
  auVar78._24_8_ = dVar50 * 0.0 + auVar17._8_8_ * 0.0 + auVar64._16_8_ * 0.0;
  auVar54 = auVar22._0_16_;
  auVar17 = vshufpd_avx(auVar54,auVar54,3);
  auVar64 = vperm2f128_avx(auVar21,auVar21,0x11);
  auVar30._0_8_ = dVar80 * auVar17._0_8_ + dVar59 * auVar45._0_8_ + auVar64._0_8_ * 0.0;
  auVar30._8_8_ = auVar17._8_8_ * 0.0 + dVar49 * auVar45._0_8_ + auVar64._0_8_ * 0.0;
  auVar34._16_8_ = auVar17._0_8_ * 0.0 + auVar45._0_8_ * 0.0 + auVar64._16_8_ * dVar9;
  auVar34._0_16_ = auVar30;
  auVar34._24_8_ = auVar17._8_8_ * 0.0 + auVar45._0_8_ * 0.0 + auVar64._16_8_ * 0.0;
  auVar15 = vunpcklpd_avx(auVar13,auVar47._16_16_);
  auVar17 = vshufpd_avx(auVar54,auVar54,1);
  auVar118._16_16_ = auVar17;
  auVar118._0_16_ = auVar16;
  auVar64 = vblendpd_avx(ZEXT1632(auVar15),auVar118,0xc);
  dVar49 = auVar64._0_8_;
  dVar57 = auVar64._8_8_;
  dVar58 = auVar64._16_8_;
  dVar103 = auVar64._24_8_;
  auVar15 = vshufpd_avx(auVar86,auVar86,3);
  auVar17 = vblendpd_avx(auVar13,auVar22._16_16_,1);
  dVar106 = auVar17._0_8_;
  dVar113 = auVar17._8_8_;
  auVar22 = vperm2f128_avx(auVar89,auVar89,0x11);
  auVar17 = vshufpd_avx(auVar45,auVar54,1);
  auVar64 = vblendpd_avx(auVar21,ZEXT1632(auVar17),3);
  dVar80 = auVar64._0_8_;
  dVar9 = auVar64._8_8_;
  dVar50 = auVar64._16_8_;
  dVar59 = auVar64._24_8_;
  auVar46._0_8_ = dVar49 * auVar86._0_8_ + dVar106 * auVar15._0_8_ + dVar80 * auVar22._0_8_;
  auVar46._8_8_ = dVar57 * auVar86._0_8_ + dVar113 * auVar15._8_8_ + dVar9 * auVar22._0_8_;
  auVar48._16_8_ = dVar58 * auVar86._0_8_ + auVar45._0_8_ * auVar15._0_8_ + dVar50 * auVar22._16_8_;
  auVar48._0_16_ = auVar46;
  auVar48._24_8_ = dVar103 * auVar86._0_8_ + auVar45._8_8_ * auVar15._8_8_ + dVar59 * auVar22._16_8_
  ;
  auVar17 = vshufpd_avx(auVar73,auVar73,3);
  auVar64 = vperm2f128_avx(auVar78,auVar78,0x11);
  auVar74._0_8_ = dVar80 * auVar64._0_8_ + dVar106 * auVar17._0_8_ + dVar49 * auVar73._0_8_;
  auVar74._8_8_ = dVar9 * auVar64._0_8_ + dVar113 * auVar17._8_8_ + dVar57 * auVar73._0_8_;
  auVar79._16_8_ = dVar50 * auVar64._16_8_ + auVar45._0_8_ * auVar17._0_8_ + dVar58 * auVar73._0_8_;
  auVar79._0_16_ = auVar74;
  auVar79._24_8_ = dVar59 * auVar64._16_8_ + auVar45._8_8_ * auVar17._8_8_ + dVar103 * auVar73._0_8_
  ;
  auVar17 = vshufpd_avx(auVar30,auVar30,3);
  auVar64 = vperm2f128_avx(auVar34,auVar34,0x11);
  auVar31._0_8_ = dVar49 * auVar30._0_8_ + dVar106 * auVar17._0_8_ + dVar80 * auVar64._0_8_;
  auVar31._8_8_ = dVar57 * auVar30._0_8_ + dVar113 * auVar17._8_8_ + dVar9 * auVar64._0_8_;
  auVar35._16_8_ = dVar58 * auVar30._0_8_ + auVar45._0_8_ * auVar17._0_8_ + dVar50 * auVar64._16_8_;
  auVar35._0_16_ = auVar31;
  auVar35._24_8_ = dVar103 * auVar30._0_8_ + auVar45._8_8_ * auVar17._8_8_ + dVar59 * auVar64._16_8_
  ;
  *pauVar1 = auVar46;
  uVar3 = vmovlps_avx(auVar48._16_16_);
  *(undefined8 *)pauVar1[1] = uVar3;
  *(undefined8 *)(pauVar1[1] + 8) = 0;
  pauVar1[2] = auVar74;
  uVar3 = vmovlps_avx(auVar79._16_16_);
  *(undefined8 *)pauVar1[3] = uVar3;
  *(undefined8 *)(pauVar1[3] + 8) = 0;
  pauVar1[4] = auVar31;
  uVar3 = vmovlps_avx(auVar35._16_16_);
  *(undefined8 *)pauVar1[5] = uVar3;
  *(undefined1 (*) [16])(pauVar1[6] + 8) = auVar90;
  *(undefined1 (*) [16])(pauVar1[5] + 8) = auVar90;
  *(undefined8 *)(pauVar1[7] + 8) = 0x3ff0000000000000;
  *param_11 = dVar27 + *param_11;
  dVar27 = dVar27 * (double)(int)(-(uint)(param_2 != 0) | 1);
  auVar17._0_8_ = dVar27 * *(double *)*param_8 + *(double *)(param_1 + 0x438);
  auVar17._8_8_ = dVar27 * *(double *)(*param_8 + 8) + *(double *)(param_1 + 0x440);
  auVar24._16_8_ = dVar27 * *(double *)(*param_8 + 0x10) + *(double *)(param_1 + 0x448);
  auVar24._0_16_ = auVar17;
  auVar24._24_8_ = dVar27 * 0.0 + 0.0;
  *(undefined1 (*) [16])(param_1 + 0x438) = auVar17;
  uVar3 = vmovlps_avx(auVar24._16_16_);
  *(undefined8 *)(param_1 + 0x448) = uVar3;
  return;
}

// ApplyRotationConstraintSoftDD___un_3C_s_5B_unFPBDJointSolver_5D__3E_CundCundCundCunbREFs_5B__c_unFVector_5D_CundCundREFund_avx @ 1409f6d30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyRotationConstraintSoftDD___un_3C_s_5B_unFPBDJointSolver_5D__3E_CundCundCundCunbREFs_5B__c_unFVector_5D_CundCundREFund_avx
               (double *param_1,double param_2,double param_3,double param_4,byte param_5,
               undefined1 (*param_6) [24],double param_7,double param_8,double *param_9,
               undefined1 (*param_10) [16])

{
  undefined1 auVar1 [24];
  undefined1 auVar2 [24];
  undefined1 auVar3 [24];
  undefined1 auVar4 [24];
  undefined1 auVar5 [24];
  undefined1 auVar6 [24];
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
  double dVar33;
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  double dVar32;
  double dVar34;
  undefined1 auVar23 [32];
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar76;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar78;
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  double dVar80;
  undefined1 auVar56 [32];
  undefined1 auVar58 [32];
  double dVar77;
  double dVar79;
  double dVar81;
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar66 [32];
  undefined1 auVar68 [32];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
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
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [32];
  undefined1 auVar100 [32];
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
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [32];
  undefined1 auVar121 [32];
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  undefined1 in_ZMM4 [64];
  double dVar131;
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  double dVar132;
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [32];
  double dVar143;
  undefined1 auVar140 [32];
  undefined1 auVar142 [32];
  double dVar144;
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
  undefined1 auVar158 [32];
  undefined1 auVar159 [32];
  undefined1 auVar160 [32];
  undefined1 auVar163 [32];
  undefined1 auVar164 [32];
  undefined1 auVar165 [32];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  ulonglong uVar182;
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [32];
  undefined1 auVar191 [32];
  double dVar193;
  undefined1 auVar192 [32];
  double dVar194;
  undefined1 auVar195 [16];
  undefined1 auVar196 [16];
  undefined1 auVar197 [16];
  undefined1 auVar198 [16];
  undefined1 auVar199 [16];
  undefined1 auVar200 [32];
  double dVar204;
  undefined1 auVar202 [32];
  undefined1 auVar205 [16];
  undefined1 auVar206 [16];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar215 [32];
  undefined1 auVar216 [32];
  undefined1 auVar218 [32];
  undefined1 auVar221 [32];
  undefined1 auVar222 [32];
  undefined1 auVar224 [32];
  undefined1 auVar225 [16];
  undefined1 auVar226 [16];
  undefined1 auVar227 [32];
  undefined1 auVar228 [32];
  undefined1 auVar229 [32];
  undefined1 auVar231 [32];
  undefined1 auVar232 [32];
  undefined1 auVar233 [32];
  double dVar235;
  double dVar240;
  double dVar242;
  undefined1 auVar236 [32];
  double dVar243;
  undefined1 auVar237 [32];
  double dVar241;
  undefined1 auVar238 [32];
  undefined1 auVar239 [32];
  undefined1 auVar244 [16];
  undefined1 auVar245 [16];
  undefined1 auVar246 [32];
  undefined1 auVar247 [32];
  undefined1 auVar248 [32];
  undefined1 auVar249 [32];
  undefined1 auVar250 [16];
  undefined1 auVar251 [16];
  undefined1 auVar252 [16];
  undefined1 auVar253 [16];
  undefined1 auVar254 [32];
  undefined1 auVar255 [32];
  undefined1 auVar256 [16];
  undefined1 auVar257 [16];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar55 [32];
  undefined1 auVar57 [32];
  undefined1 auVar59 [32];
  undefined1 auVar63 [32];
  undefined1 auVar67 [32];
  undefined1 auVar69 [32];
  undefined1 auVar73 [32];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [32];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar120 [32];
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  undefined1 auVar128 [32];
  undefined1 auVar129 [32];
  undefined1 auVar130 [32];
  undefined1 auVar141 [32];
  undefined1 auVar157 [32];
  undefined1 auVar161 [32];
  undefined1 auVar162 [32];
  undefined1 auVar166 [32];
  undefined1 auVar176 [32];
  undefined1 auVar177 [32];
  undefined1 auVar178 [32];
  undefined1 auVar179 [32];
  undefined1 auVar180 [32];
  undefined1 auVar181 [32];
  undefined1 auVar201 [32];
  undefined1 auVar203 [32];
  undefined1 auVar213 [32];
  undefined1 auVar214 [32];
  undefined1 auVar217 [32];
  undefined1 auVar219 [32];
  undefined1 auVar220 [32];
  undefined1 auVar223 [32];
  undefined1 auVar230 [32];
  undefined1 auVar234 [32];
  
  dVar143 = _UNK_150b54438;
  dVar132 = _UNK_150b54430;
  dVar241 = _UNK_150b54428;
  dVar204 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar194 = _UNK_150b54418;
  dVar193 = _UNK_150b54410;
  dVar81 = _UNK_150b54408;
  dVar79 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar77 = _UNK_15076c6f8;
  dVar37 = ___xmm_bff00000000000003ff0000000000000;
  auVar7 = vpcmpeqd_avx(in_ZMM4._0_16_,in_ZMM4._0_16_);
  auVar13 = vpcmpgtd_avx(param_10[1],auVar7);
  auVar7 = vpcmpgtd_avx(*param_10,auVar7);
  auVar13 = vpor_avx(auVar7,auVar13);
  auVar1 = *(undefined1 (*) [24])(param_1 + 0x48);
  dVar144 = *(double *)*param_6;
  auVar7._8_8_ = dVar144;
  auVar7._0_8_ = dVar144;
  auVar2 = *(undefined1 (*) [24])(param_1 + 0x4c);
  dVar35 = *(double *)(*param_6 + 8);
  auVar135._8_8_ = dVar35;
  auVar135._0_8_ = dVar35;
  auVar3 = *(undefined1 (*) [24])(param_1 + 0x50);
  dVar131 = *(double *)(*param_6 + 0x10);
  auVar145._8_8_ = dVar131;
  auVar145._0_8_ = dVar131;
  auVar4 = *(undefined1 (*) [24])(param_1 + 0x58);
  auVar5 = *(undefined1 (*) [24])(param_1 + 0x5c);
  auVar6 = *(undefined1 (*) [24])(param_1 + 0x60);
  auVar9 = vunpcklpd_avx(auVar7,auVar135);
  auVar7 = vblendpd_avx(auVar7,auVar145,1);
  auVar190._16_16_ = auVar7;
  auVar190._0_16_ = auVar9;
  dVar76 = auVar9._0_8_;
  auVar8._0_8_ = dVar76 * (auVar1._0_8_ * dVar144 + auVar2._0_8_ * dVar35 + auVar3._0_8_ * dVar131);
  dVar78 = auVar9._8_8_;
  auVar8._8_8_ = dVar78 * (auVar1._8_8_ * dVar144 + auVar2._8_8_ * dVar35 + auVar3._8_8_ * dVar131);
  dVar80 = auVar7._0_8_;
  auVar7 = vshufpd_avx(auVar8,auVar8,1);
  dVar36 = dVar80 * (auVar1._16_8_ * dVar144 + auVar2._16_8_ * dVar35 + auVar3._16_8_ * dVar131) +
           auVar8._0_8_ + auVar7._0_8_;
  auVar9._0_8_ = dVar76 * (dVar144 * auVar4._0_8_ + dVar35 * auVar5._0_8_ + dVar131 * auVar6._0_8_);
  auVar9._8_8_ = dVar78 * (dVar144 * auVar4._8_8_ + dVar35 * auVar5._8_8_ + dVar131 * auVar6._8_8_);
  auVar7 = vshufpd_avx(auVar9,auVar9,1);
  dVar144 = dVar80 * (dVar144 * auVar4._16_8_ + dVar35 * auVar5._16_8_ + dVar131 * auVar6._16_8_) +
            auVar9._0_8_ + auVar7._0_8_;
  dVar35 = dVar36 + dVar144;
  dVar131 = 0.0;
  if ((((SUB161(auVar13 >> 0x1f,0) & 1) == 0 && (SUB161(auVar13 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar13 >> 0x5f,0) & 1) == 0) && -1 < auVar13[0xf]) {
    if (__real_3f1a36e2eb1c432d < param_4) {
      auVar190 = *(undefined1 (*) [32])(param_1 + 0x7c);
      auVar13._0_8_ =
           *(double *)*(undefined1 (*) [32])(param_1 + 0x7c) * param_1[0x26] +
           param_1[0x28] * SUB168(*(undefined1 (*) [16])(param_1 + 0x7e),0);
      auVar13._8_8_ =
           param_1[0x7d] * param_1[0x27] +
           param_1[0x29] * SUB168(*(undefined1 (*) [16])(param_1 + 0x7e),8);
      auVar7 = vshufpd_avx(auVar13,auVar13,1);
      auVar14._8_8_ = 0;
      auVar14._0_8_ = auVar13._0_8_ + auVar7._0_8_;
      auVar7 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar14,2);
      auVar105._8_8_ = 0;
      auVar105._0_8_ = __real_3ff0000000000000;
      auVar134._8_8_ = 0;
      auVar134._0_8_ = __real_bff0000000000000;
      auVar7 = vblendvpd_avx(auVar134,auVar105,auVar7);
      dVar131 = auVar7._0_8_;
      auVar24._0_8_ = param_1[0x26] * dVar131;
      auVar24._8_8_ = param_1[0x27] * dVar131;
      auVar24._16_8_ = param_1[0x28] * dVar131;
      auVar24._24_8_ = param_1[0x29] * dVar131;
      auVar26 = vsubpd_avx(auVar24,auVar190);
      auVar237._0_8_ =
           auVar190._0_8_ * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
      auVar237._8_8_ = auVar190._8_8_ * _UNK_150b543c8;
      auVar237._16_8_ = auVar190._16_8_ * _UNK_150b543d0;
      auVar237._24_8_ = auVar190._24_8_ * _UNK_150b543d8;
      auVar53 = vperm2f128_avx(auVar26,auVar26,0x11);
      auVar66 = *(undefined1 (*) [32])(param_1 + 0x80);
      auVar40._0_8_ =
           *(double *)*(undefined1 (*) [32])(param_1 + 0x80) * param_1[0x2a] +
           param_1[0x2c] * SUB168(*(undefined1 (*) [16])(param_1 + 0x82),0);
      auVar40._8_8_ =
           param_1[0x81] * param_1[0x2b] +
           param_1[0x2d] * SUB168(*(undefined1 (*) [16])(param_1 + 0x82),8);
      auVar7 = vshufpd_avx(auVar40,auVar40,1);
      auVar190 = vshufpd_avx(auVar53,auVar53,0xf);
      auVar41._8_8_ = 0;
      auVar41._0_8_ = auVar7._0_8_ + auVar40._0_8_;
      auVar7 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar41,2);
      dVar131 = auVar26._0_8_;
      auVar7 = vblendvpd_avx(auVar134,auVar105,auVar7);
      auVar54 = vperm2f128_avx(auVar237,auVar237,1);
      auVar24 = vshufpd_avx(auVar54,auVar54,5);
      auVar13 = vshufpd_avx(auVar26._0_16_,auVar26._0_16_,3);
      auVar26 = vshufpd_avx(auVar237,auVar237,5);
      dVar235 = auVar26._0_8_ * auVar53._0_8_ *
                ___ymm_00000000000000003ff00000000000003ff0000000000000bff0000000000000 +
                auVar54._0_8_ * auVar13._0_8_ *
                ___ymm_0000000000000000bff00000000000003ff00000000000003ff0000000000000 +
                auVar237._0_8_ * auVar190._0_8_ +
                auVar24._0_8_ * dVar131 * ___xmm_bff00000000000003ff0000000000000;
      dVar240 = auVar26._8_8_ * auVar53._0_8_ * _UNK_150b54588 +
                auVar54._8_8_ * auVar13._8_8_ * _UNK_150b54568 +
                auVar237._8_8_ * auVar190._8_8_ + auVar24._8_8_ * dVar131 * _UNK_15076c6f8;
      dVar242 = auVar26._16_8_ * auVar53._16_8_ * _UNK_150b54590 +
                auVar54._16_8_ * auVar13._0_8_ * _UNK_150b54570 +
                auVar237._16_8_ * auVar190._16_8_ +
                auVar24._16_8_ * dVar131 * ___xmm_bff00000000000003ff0000000000000;
      dVar243 = auVar26._24_8_ * auVar53._16_8_ * _UNK_150b54598 +
                auVar54._24_8_ * auVar13._8_8_ * _UNK_150b54578 +
                auVar237._24_8_ * auVar190._24_8_ + auVar24._24_8_ * dVar131 * _UNK_15076c6f8;
      dVar131 = auVar7._0_8_;
      auVar53._0_8_ = param_1[0x2a] * dVar131;
      auVar53._8_8_ = param_1[0x2b] * dVar131;
      auVar53._16_8_ = param_1[0x2c] * dVar131;
      auVar53._24_8_ = param_1[0x2d] * dVar131;
      auVar26 = vsubpd_avx(auVar53,auVar66);
      auVar25._0_8_ =
           auVar66._0_8_ * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
      auVar25._8_8_ = auVar66._8_8_ * _UNK_150b543c8;
      auVar25._16_8_ = auVar66._16_8_ * _UNK_150b543d0;
      auVar25._24_8_ = auVar66._24_8_ * _UNK_150b543d8;
      dVar34 = auVar26._0_8_;
      auVar53 = vperm2f128_avx(auVar25,auVar25,1);
      auVar190 = vshufpd_avx(auVar53,auVar53,5);
      auVar54 = vperm2f128_avx(auVar26,auVar26,0x11);
      auVar24 = vshufpd_avx(auVar54,auVar54,0xf);
      auVar7 = vshufpd_avx(auVar26._0_16_,auVar26._0_16_,3);
      auVar26 = vshufpd_avx(auVar25,auVar25,5);
      dVar131 = auVar26._0_8_ * auVar54._0_8_ *
                ___ymm_00000000000000003ff00000000000003ff0000000000000bff0000000000000 +
                ___ymm_0000000000000000bff00000000000003ff00000000000003ff0000000000000 *
                auVar53._0_8_ * auVar7._0_8_ +
                auVar24._0_8_ * auVar25._0_8_ +
                auVar190._0_8_ * dVar34 * ___xmm_bff00000000000003ff0000000000000;
      dVar32 = auVar26._8_8_ * auVar54._0_8_ * _UNK_150b54588 +
               _UNK_150b54568 * auVar53._8_8_ * auVar7._8_8_ +
               auVar24._8_8_ * auVar25._8_8_ + auVar190._8_8_ * dVar34 * _UNK_15076c6f8;
      dVar33 = auVar26._16_8_ * auVar54._16_8_ * _UNK_150b54590 +
               _UNK_150b54570 * auVar53._16_8_ * auVar7._0_8_ +
               auVar24._16_8_ * auVar25._16_8_ +
               auVar190._16_8_ * dVar34 * ___xmm_bff00000000000003ff0000000000000;
      dVar34 = auVar26._24_8_ * auVar54._16_8_ * _UNK_150b54598 +
               _UNK_150b54578 * auVar53._24_8_ * auVar7._8_8_ +
               auVar24._24_8_ * auVar25._24_8_ + auVar190._24_8_ * dVar34 * _UNK_15076c6f8;
      auVar54._0_8_ = dVar235 + dVar235;
      auVar54._8_8_ = dVar240 + dVar240;
      auVar54._16_8_ = dVar242 + dVar242;
      auVar54._24_8_ = dVar243 + dVar243;
      auVar26._0_8_ = dVar131 + dVar131;
      auVar26._8_8_ = dVar32 + dVar32;
      auVar26._16_8_ = dVar33 + dVar33;
      auVar26._24_8_ = dVar34 + dVar34;
      auVar190 = vsubpd_avx(auVar54,auVar26);
      auVar15._0_8_ = auVar190._0_8_ * dVar76;
      auVar15._8_8_ = auVar190._8_8_ * dVar78;
      auVar7 = vshufpd_avx(auVar15,auVar15,1);
      dVar131 = param_2 * param_8 + auVar190._16_8_ * dVar80 + auVar15._0_8_ + auVar7._0_8_;
      auVar190._24_8_ = 0;
      auVar190._0_24_ = *param_6;
    }
    dVar76 = __real_3ff0000000000000;
    if ((param_5 & 1) != 0) {
      dVar76 = __real_3ff0000000000000 / dVar35;
    }
    dVar78 = param_3 * dVar76 * param_2 * param_2;
    param_2 = dVar76 * param_4 * param_2;
    dVar35 = (__real_3ff0000000000000 / (dVar35 * (param_2 + dVar78) + __real_3ff0000000000000)) *
             param_1[0x99] * ((param_7 * dVar78 - param_2 * dVar131) - *param_9);
    if (0.0 < param_1[0x1e]) {
      dVar36 = dVar36 * dVar35;
      auVar112._0_8_ = auVar190._0_8_ * dVar36;
      auVar112._8_8_ = auVar190._8_8_ * dVar36;
      auVar124._16_8_ = auVar190._16_8_ * dVar36;
      auVar124._0_16_ = auVar112;
      auVar124._24_8_ = auVar190._24_8_ * dVar36;
      dVar36 = param_1[0x34];
      auVar151._8_8_ = 0;
      auVar151._0_8_ = param_1[0x37];
      auVar7 = vmovhps_avx(auVar151,param_1[0x36]);
      auVar209._8_8_ = 0;
      auVar209._0_8_ = param_1[0x35];
      auVar13 = vmovhps_avx(auVar209,param_1[0x34]);
      auVar9 = vshufpd_avx(auVar112,auVar112,3);
      auVar24 = vperm2f128_avx(auVar124,auVar124,0x11);
      dVar36 = dVar36 + (auVar24._0_8_ * auVar13._0_8_ *
                         ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
                        auVar9._0_8_ * param_1[0x36] *
                        ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
                        auVar112._0_8_ * auVar7._0_8_ * ___xmm_bff00000000000003ff0000000000000 +
                        dVar36 * 0.0) *
                        ___ymm_3fe00000000000003fe00000000000003fe00000000000003fe0000000000000;
      dVar76 = param_1[0x35] +
               (auVar24._0_8_ * auVar13._8_8_ * _UNK_150b54428 +
               auVar9._8_8_ * param_1[0x37] * _UNK_150b54408 +
               auVar112._0_8_ * auVar7._8_8_ * _UNK_15076c6f8 + param_1[0x35] * 0.0) *
               _UNK_150aa8f28;
      dVar78 = param_1[0x36] +
               (auVar24._16_8_ * auVar7._0_8_ * _UNK_150b54430 +
               auVar9._0_8_ * param_1[0x34] * _UNK_150b54410 +
               auVar112._0_8_ * auVar13._0_8_ * ___xmm_bff00000000000003ff0000000000000 +
               param_1[0x36] * 0.0) * _UNK_150aa8f30;
      dVar80 = param_1[0x37] +
               (auVar24._16_8_ * auVar7._8_8_ * _UNK_150b54438 +
               auVar9._8_8_ * param_1[0x35] * _UNK_150b54418 +
               auVar112._0_8_ * auVar13._8_8_ * _UNK_15076c6f8 + param_1[0x37] * 0.0) *
               _UNK_150aa8f38;
      auVar113._0_8_ = dVar78 * dVar78 + dVar36 * dVar36;
      auVar113._8_8_ = dVar80 * dVar80 + dVar76 * dVar76;
      auVar7 = vshufpd_avx(auVar113,auVar113,1);
      dVar131 = auVar7._0_8_ + auVar113._0_8_;
      auVar187._8_8_ = 0;
      auVar187._0_8_ = __real_3e45798ee2308c3a;
      auVar114._8_8_ = 0;
      auVar114._0_8_ = dVar131;
      auVar7 = vcmpsd_avx(auVar187,auVar114,6);
      uVar182 = ~auVar7._0_8_ & __real_ffffffffffffffff;
      dVar131 = __real_3ff0000000000000 / SQRT(dVar131);
      auVar210._0_8_ =
           (double)(uVar182 &
                   ((ulonglong)(dVar36 * dVar131) ^
                   ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000));
      auVar210._8_8_ = (double)(uVar182 & ((ulonglong)(dVar76 * dVar131) ^ _UNK_150b54548));
      auVar219._16_8_ = (double)(uVar182 & ((ulonglong)(dVar78 * dVar131) ^ _UNK_150b54550));
      auVar219._0_16_ = auVar210;
      auVar219._24_8_ = (double)(uVar182 & ((ulonglong)(dVar80 * dVar131) ^ _UNK_150b54558));
      auVar202._0_8_ =
           (double)((ulonglong)auVar210._0_8_ ^
                   ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
      auVar202._8_8_ = (double)((ulonglong)auVar210._8_8_ ^ _UNK_150b54548);
      auVar202._16_8_ = (double)((ulonglong)auVar219._16_8_ ^ _UNK_150b54550);
      auVar202._24_8_ = (double)((ulonglong)auVar219._24_8_ ^ _UNK_150b54558);
      *(undefined1 (*) [16])(param_1 + 0x34) = auVar210;
      *(undefined1 (*) [16])(param_1 + 0x36) = auVar202._16_16_;
      auVar47._8_8_ = 0;
      auVar47._0_8_ = param_1[4];
      auVar7 = vmovhps_avx(auVar47,param_1[7]);
      auVar66._0_8_ = auVar202._0_8_ * SUB168(*(undefined1 (*) [16])(param_1 + 5),0);
      auVar66._8_8_ = auVar202._8_8_ * SUB168(*(undefined1 (*) [16])(param_1 + 5),8);
      auVar66._16_8_ = auVar202._16_8_ * auVar7._0_8_;
      auVar66._24_8_ = auVar202._24_8_ * auVar7._8_8_;
      auVar125._16_16_ = auVar210;
      auVar125._0_16_ = auVar210;
      auVar53 = vperm2f128_avx(auVar202,auVar202,0x11);
      auVar24 = vshufpd_avx(auVar125,auVar53,9);
      auVar231._0_8_ = param_1[4] * auVar24._0_8_;
      auVar231._8_8_ = param_1[5] * auVar24._8_8_;
      auVar231._16_8_ = param_1[6] * auVar24._16_8_;
      auVar231._24_8_ = param_1[7] * auVar24._24_8_;
      auVar24 = vsubpd_avx(auVar66,auVar231);
      auVar48._0_8_ = auVar24._0_8_ + auVar24._0_8_;
      auVar48._8_8_ = auVar24._8_8_ + auVar24._8_8_;
      auVar67._16_8_ = auVar24._16_8_ + auVar24._16_8_;
      auVar67._0_16_ = auVar48;
      auVar67._24_8_ = auVar24._24_8_ + auVar24._24_8_;
      auVar24 = vshufpd_avx(auVar53,auVar53,0xf);
      auVar248._16_16_ = auVar48;
      auVar248._0_16_ = auVar48;
      auVar26 = vshufpd_avx(auVar248,ZEXT1632(auVar67._16_16_),1);
      dVar80 = auVar24._0_8_;
      dVar32 = auVar24._8_8_;
      dVar33 = auVar24._16_8_;
      dVar34 = auVar24._24_8_;
      auVar255._0_8_ = auVar210._0_8_ * auVar48._0_8_;
      auVar255._8_8_ = auVar210._8_8_ * auVar48._8_8_;
      auVar255._16_8_ = auVar219._16_8_ * auVar67._16_8_;
      auVar255._24_8_ = auVar219._24_8_ * auVar67._24_8_;
      auVar24 = vshufpd_avx(auVar125,ZEXT1632(auVar219._16_16_),1);
      auVar68._0_8_ = auVar48._0_8_ * auVar24._0_8_;
      auVar68._8_8_ = auVar48._8_8_ * auVar24._8_8_;
      auVar68._16_8_ = auVar67._16_8_ * auVar24._16_8_;
      auVar68._24_8_ = auVar67._24_8_ * auVar24._24_8_;
      auVar24 = vperm2f128_avx(auVar255,auVar255,1);
      auVar24 = vshufpd_avx(auVar24,auVar255,4);
      auVar24 = vsubpd_avx(auVar68,auVar24);
      auVar49._0_8_ = param_1[0x2e] + param_1[4] + dVar80 * auVar26._0_8_ + auVar24._0_8_;
      auVar49._8_8_ = param_1[0x2f] + param_1[5] + dVar32 * auVar26._8_8_ + auVar24._8_8_;
      auVar69._16_8_ = param_1[0x30] + param_1[6] + dVar33 * auVar26._16_8_ + auVar24._16_8_;
      auVar69._0_16_ = auVar49;
      auVar69._24_8_ = dVar34 * auVar26._24_8_ + 0.0 + auVar24._24_8_ + 0.0;
      *(undefined1 (*) [16])(param_1 + 0x20) = auVar49;
      dVar131 = (double)vmovlps_avx(auVar69._16_16_);
      param_1[0x22] = dVar131;
      auVar9 = vshufps_avx(auVar210,auVar210,0x44);
      auVar252._8_8_ = 0;
      auVar252._0_8_ = param_1[1];
      auVar7 = vmovhpd_avx(auVar252,*param_1);
      auVar257._8_8_ = 0;
      auVar257._0_8_ = param_1[3];
      auVar13 = vmovhpd_avx(auVar257,param_1[2]);
      dVar131 = auVar9._0_8_;
      dVar76 = auVar9._8_8_;
      auVar9 = vshufps_avx(auVar210,auVar210,0xee);
      dVar36 = auVar9._0_8_;
      dVar78 = auVar9._8_8_;
      param_1[0x26] =
           auVar7._0_8_ * auVar53._0_8_ * dVar204 +
           param_1[2] * dVar36 * dVar79 + dVar80 * *param_1 + auVar13._0_8_ * dVar131 * dVar37;
      param_1[0x27] =
           auVar7._8_8_ * auVar53._0_8_ * dVar241 +
           param_1[3] * dVar78 * dVar81 + dVar32 * param_1[1] + auVar13._8_8_ * dVar76 * dVar77;
      param_1[0x28] =
           auVar13._0_8_ * auVar53._16_8_ * dVar132 +
           *param_1 * dVar36 * dVar193 + dVar33 * param_1[2] + auVar7._0_8_ * dVar131 * dVar37;
      param_1[0x29] =
           auVar13._8_8_ * auVar53._16_8_ * dVar143 +
           param_1[1] * dVar78 * dVar194 + dVar34 * param_1[3] + auVar7._8_8_ * dVar76 * dVar77;
      dVar37 = auVar202._0_8_ + auVar202._0_8_;
      dVar77 = auVar202._8_8_ + auVar202._8_8_;
      dVar79 = auVar202._16_8_ + auVar202._16_8_;
      dVar81 = auVar202._24_8_ + auVar202._24_8_;
      auVar126._0_8_ = dVar37 * dVar131;
      auVar126._8_8_ = dVar77 * dVar76;
      auVar126._16_8_ = dVar79 * dVar131;
      auVar126._24_8_ = dVar81 * dVar76;
      auVar136._0_8_ = dVar37 * dVar36;
      auVar136._8_8_ = dVar77 * dVar78;
      auVar141._16_8_ = dVar79 * dVar36;
      auVar141._0_16_ = auVar136;
      auVar141._24_8_ = dVar81 * dVar78;
      auVar70._0_8_ = dVar80 * dVar37;
      auVar70._8_8_ = dVar32 * dVar77;
      auVar70._16_8_ = dVar33 * dVar79;
      auVar70._24_8_ = dVar34 * dVar81;
      auVar24 = vperm2f128_avx(auVar141,auVar126,0x21);
      auVar24 = vshufpd_avx(auVar24,ZEXT1632(auVar126._16_16_),4);
      auVar152._0_8_ = auVar70._0_8_ + auVar24._0_8_;
      auVar152._8_8_ = auVar70._8_8_ + auVar24._8_8_;
      auVar162._16_8_ = auVar70._16_8_ + auVar24._16_8_;
      auVar162._0_16_ = auVar152;
      auVar162._24_8_ = auVar70._24_8_ + auVar24._24_8_;
      auVar53 = vsubpd_avx(auVar24,auVar70);
      auVar7 = vshufpd_avx(auVar136,auVar136,1);
      auVar115._8_8_ = auVar126._0_8_;
      auVar115._0_8_ = auVar126._0_8_;
      auVar127._16_16_ = auVar115;
      auVar127._0_16_ = auVar115;
      auVar24 = vblendpd_avx(auVar127,ZEXT1632(auVar7),1);
      auVar71._16_16_ = auVar7;
      auVar71._0_16_ = ZEXT816(0);
      auVar26 = vblendpd_avx(ZEXT1632(CONCAT88(auVar219._16_8_ * dVar79,auVar219._16_8_ * dVar79)),
                             auVar71,0xc);
      auVar72._0_8_ = auVar24._0_8_ + auVar26._0_8_;
      auVar72._8_8_ = auVar24._8_8_ + auVar26._8_8_;
      auVar72._16_8_ = auVar24._16_8_ + auVar26._16_8_;
      auVar72._24_8_ = auVar24._24_8_ + auVar26._24_8_;
      auVar100._8_8_ = __real_3ff0000000000000;
      auVar100._0_8_ = __real_3ff0000000000000;
      auVar100._16_8_ = __real_3ff0000000000000;
      auVar100._24_8_ = __real_3ff0000000000000;
      auVar26 = vsubpd_avx(auVar100,auVar72);
      dVar79 = auVar26._0_8_;
      dVar131 = param_1[0x18];
      dVar36 = param_1[0x1a];
      auVar24 = vperm2f128_avx(auVar53,auVar53,0x11);
      auVar9 = ZEXT816(0) << 0x40;
      auVar7 = vmovhpd_avx(auVar9,param_1[0x19]);
      dVar37 = auVar7._0_8_;
      dVar77 = auVar7._8_8_;
      auVar7 = vshufpd_avx(auVar152,auVar152,3);
      auVar211._0_8_ = auVar7._0_8_ * 0.0 + auVar24._0_8_ * dVar37 + dVar131 * dVar79;
      auVar211._8_8_ = auVar7._8_8_ * 0.0 + auVar24._0_8_ * dVar77 + dVar79 * 0.0;
      auVar220._16_8_ = auVar7._0_8_ * dVar36 + auVar24._16_8_ * 0.0 + dVar79 * 0.0;
      auVar220._0_16_ = auVar211;
      auVar220._24_8_ = auVar7._8_8_ * 0.0 + auVar24._16_8_ * 0.0 + dVar79 * 0.0;
      auVar24 = vperm2f128_avx(auVar162,auVar162,0x11);
      auVar135 = auVar26._0_16_;
      auVar7 = vshufpd_avx(auVar135,auVar135,3);
      dVar79 = auVar53._0_8_;
      auVar198._0_8_ = dVar79 * 0.0 + auVar7._0_8_ * dVar37 + dVar131 * auVar24._0_8_;
      auVar198._8_8_ = dVar79 * 0.0 + auVar7._8_8_ * dVar77 + auVar24._0_8_ * 0.0;
      auVar203._16_8_ = dVar79 * dVar36 + auVar7._0_8_ * 0.0 + auVar24._16_8_ * 0.0;
      auVar203._0_16_ = auVar198;
      auVar203._24_8_ = dVar79 * 0.0 + auVar7._8_8_ * 0.0 + auVar24._16_8_ * 0.0;
      auVar8 = auVar53._0_16_;
      auVar7 = vshufpd_avx(auVar8,auVar8,3);
      auVar24 = vperm2f128_avx(auVar26,auVar26,0x11);
      auVar87._0_8_ = dVar131 * auVar7._0_8_ + auVar152._0_8_ * dVar37 + auVar24._0_8_ * 0.0;
      auVar87._8_8_ = auVar7._8_8_ * 0.0 + auVar152._0_8_ * dVar77 + auVar24._0_8_ * 0.0;
      auVar101._16_8_ = auVar7._0_8_ * 0.0 + auVar152._0_8_ * 0.0 + dVar36 * auVar24._16_8_;
      auVar101._0_16_ = auVar87;
      auVar101._24_8_ = auVar7._8_8_ * 0.0 + auVar152._0_8_ * 0.0 + auVar24._16_8_ * 0.0;
      auVar13 = vunpcklpd_avx(auVar135,auVar162._16_16_);
      auVar7 = vshufpd_avx(auVar8,auVar8,1);
      auVar232._16_16_ = auVar7;
      auVar232._0_16_ = ZEXT816(0);
      auVar24 = vblendpd_avx(ZEXT1632(auVar13),auVar232,0xc);
      dVar79 = auVar24._0_8_;
      dVar81 = auVar24._8_8_;
      dVar193 = auVar24._16_8_;
      dVar194 = auVar24._24_8_;
      auVar13 = vshufpd_avx(auVar211,auVar211,3);
      auVar7 = vblendpd_avx(auVar135,auVar53._16_16_,1);
      dVar204 = auVar7._0_8_;
      dVar241 = auVar7._8_8_;
      auVar7 = vshufpd_avx(auVar152,auVar8,1);
      auVar53 = vperm2f128_avx(auVar220,auVar220,0x11);
      auVar24 = vblendpd_avx(auVar26,ZEXT1632(auVar7),3);
      dVar131 = auVar24._0_8_;
      dVar36 = auVar24._8_8_;
      dVar37 = auVar24._16_8_;
      dVar77 = auVar24._24_8_;
      auVar116._0_8_ = dVar131 * auVar53._0_8_ + dVar79 * auVar211._0_8_ + dVar204 * auVar13._0_8_;
      auVar116._8_8_ = dVar36 * auVar53._0_8_ + dVar81 * auVar211._0_8_ + dVar241 * auVar13._8_8_;
      auVar128._16_8_ =
           dVar37 * auVar53._16_8_ + dVar193 * auVar211._0_8_ + auVar152._0_8_ * auVar13._0_8_;
      auVar128._0_16_ = auVar116;
      auVar128._24_8_ =
           dVar77 * auVar53._16_8_ + dVar194 * auVar211._0_8_ + auVar152._8_8_ * auVar13._8_8_;
      auVar7 = vshufpd_avx(auVar198,auVar198,3);
      auVar24 = vperm2f128_avx(auVar203,auVar203,0x11);
      auVar50._0_8_ = dVar131 * auVar24._0_8_ + dVar79 * auVar198._0_8_ + dVar204 * auVar7._0_8_;
      auVar50._8_8_ = dVar36 * auVar24._0_8_ + dVar81 * auVar198._0_8_ + dVar241 * auVar7._8_8_;
      auVar73._16_8_ =
           dVar37 * auVar24._16_8_ + dVar193 * auVar198._0_8_ + auVar152._0_8_ * auVar7._0_8_;
      auVar73._0_16_ = auVar50;
      auVar73._24_8_ =
           dVar77 * auVar24._16_8_ + dVar194 * auVar198._0_8_ + auVar152._8_8_ * auVar7._8_8_;
      auVar7 = vshufpd_avx(auVar87,auVar87,3);
      auVar24 = vperm2f128_avx(auVar101,auVar101,0x11);
      auVar88._0_8_ = dVar131 * auVar24._0_8_ + dVar204 * auVar7._0_8_ + dVar79 * auVar87._0_8_;
      auVar88._8_8_ = dVar36 * auVar24._0_8_ + dVar241 * auVar7._8_8_ + dVar81 * auVar87._0_8_;
      auVar102._16_8_ =
           dVar37 * auVar24._16_8_ + auVar152._0_8_ * auVar7._0_8_ + dVar193 * auVar87._0_8_;
      auVar102._0_16_ = auVar88;
      auVar102._24_8_ =
           dVar77 * auVar24._16_8_ + auVar152._8_8_ * auVar7._8_8_ + dVar194 * auVar87._0_8_;
      *(undefined1 (*) [16])(param_1 + 0x48) = auVar116;
      dVar131 = (double)vmovlpd_avx(auVar128._16_16_);
      param_1[0x4a] = dVar131;
      param_1[0x4b] = 0.0;
      *(undefined1 (*) [16])(param_1 + 0x4c) = auVar50;
      dVar131 = (double)vmovlps_avx(auVar73._16_16_);
      param_1[0x4e] = dVar131;
      param_1[0x4f] = 0.0;
      *(undefined1 (*) [16])(param_1 + 0x50) = auVar88;
      dVar131 = (double)vmovlpd_avx(auVar102._16_16_);
      param_1[0x52] = dVar131;
      *(undefined1 (*) [16])(param_1 + 0x55) = auVar9;
      *(undefined1 (*) [16])(param_1 + 0x53) = auVar9;
      param_1[0x57] = 1.0;
    }
    dVar241 = _UNK_150b54438;
    dVar204 = _UNK_150b54430;
    dVar194 = _UNK_150b54428;
    dVar193 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
    dVar81 = _UNK_150b54418;
    dVar79 = _UNK_150b54410;
    dVar77 = _UNK_150b54408;
    dVar37 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
    dVar36 = _UNK_15076c6f8;
    dVar131 = ___xmm_bff00000000000003ff0000000000000;
    if (param_1[0x1f] <= 0.0) goto LAB_1409f8907;
    dVar144 = dVar35 * (double)((ulonglong)dVar144 ^ __xmm_80000000000000008000000000000000);
    auVar117._0_8_ = auVar190._0_8_ * dVar144;
    auVar117._8_8_ = auVar190._8_8_ * dVar144;
    auVar129._16_8_ = auVar190._16_8_ * dVar144;
    auVar129._0_16_ = auVar117;
    auVar129._24_8_ = auVar190._24_8_ * dVar144;
    dVar132 = param_1[0x38];
    auVar89._8_8_ = 0;
    auVar89._0_8_ = param_1[0x3b];
    auVar7 = vmovhps_avx(auVar89,param_1[0x3a]);
    auVar199._8_8_ = 0;
    auVar199._0_8_ = param_1[0x39];
    auVar13 = vmovhps_avx(auVar199,param_1[0x38]);
    auVar9 = vshufpd_avx(auVar117,auVar117,3);
    auVar190 = vperm2f128_avx(auVar129,auVar129,0x11);
    dVar132 = dVar132 + (auVar190._0_8_ * auVar13._0_8_ *
                         ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
                        auVar9._0_8_ * param_1[0x3a] *
                        ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
                        auVar117._0_8_ * auVar7._0_8_ * ___xmm_bff00000000000003ff0000000000000 +
                        dVar132 * 0.0) *
                        ___ymm_3fe00000000000003fe00000000000003fe00000000000003fe0000000000000;
    dVar143 = param_1[0x39] +
              (auVar190._0_8_ * auVar13._8_8_ * _UNK_150b54428 +
              auVar9._8_8_ * param_1[0x3b] * _UNK_150b54408 +
              auVar117._0_8_ * auVar7._8_8_ * _UNK_15076c6f8 + param_1[0x39] * 0.0) * _UNK_150aa8f28
    ;
    dVar76 = param_1[0x3a] +
             (auVar190._16_8_ * auVar7._0_8_ * _UNK_150b54430 +
             auVar9._0_8_ * param_1[0x38] * _UNK_150b54410 +
             auVar117._0_8_ * auVar13._0_8_ * ___xmm_bff00000000000003ff0000000000000 +
             param_1[0x3a] * 0.0) * _UNK_150aa8f30;
    dVar78 = param_1[0x3b] +
             (auVar190._16_8_ * auVar7._8_8_ * _UNK_150b54438 +
             auVar9._8_8_ * param_1[0x39] * _UNK_150b54418 +
             auVar117._0_8_ * auVar13._8_8_ * _UNK_15076c6f8 + param_1[0x3b] * 0.0) * _UNK_150aa8f38
    ;
    auVar153._0_8_ = dVar132 * dVar132 + dVar76 * dVar76;
    auVar153._8_8_ = dVar143 * dVar143 + dVar78 * dVar78;
    auVar7 = vshufpd_avx(auVar153,auVar153,1);
    dVar144 = auVar153._0_8_ + auVar7._0_8_;
    auVar171._8_8_ = 0;
    auVar171._0_8_ = __real_3e45798ee2308c3a;
    auVar154._8_8_ = 0;
    auVar154._0_8_ = dVar144;
    auVar7 = vcmpsd_avx(auVar171,auVar154,6);
    uVar182 = ~auVar7._0_8_ & __real_ffffffffffffffff;
    dVar144 = __real_3ff0000000000000 / SQRT(dVar144);
    auVar172._0_8_ =
         (double)(((ulonglong)(dVar132 * dVar144) ^
                  ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) & uVar182
                 );
    auVar172._8_8_ = (double)(((ulonglong)(dVar143 * dVar144) ^ _UNK_150b54548) & uVar182);
    auVar179._16_8_ = (double)(((ulonglong)(dVar76 * dVar144) ^ _UNK_150b54550) & uVar182);
    auVar179._0_16_ = auVar172;
    auVar179._24_8_ = (double)(((ulonglong)(dVar78 * dVar144) ^ _UNK_150b54558) & uVar182);
    auVar163._0_8_ =
         (double)((ulonglong)auVar172._0_8_ ^
                 ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
    auVar163._8_8_ = (double)((ulonglong)auVar172._8_8_ ^ _UNK_150b54548);
    auVar163._16_8_ = (double)((ulonglong)auVar179._16_8_ ^ _UNK_150b54550);
    auVar163._24_8_ = (double)((ulonglong)auVar179._24_8_ ^ _UNK_150b54558);
    *(undefined1 (*) [16])(param_1 + 0x38) = auVar172;
    *(undefined1 (*) [16])(param_1 + 0x3a) = auVar163._16_16_;
    auVar188._8_8_ = 0;
    auVar188._0_8_ = param_1[0x10];
    auVar7 = vmovhps_avx(auVar188,param_1[0x13]);
    auVar192._0_8_ = SUB168(*(undefined1 (*) [16])(param_1 + 0x11),0) * auVar163._0_8_;
    auVar192._8_8_ = SUB168(*(undefined1 (*) [16])(param_1 + 0x11),8) * auVar163._8_8_;
    auVar192._16_8_ = auVar7._0_8_ * auVar163._16_8_;
    auVar192._24_8_ = auVar7._8_8_ * auVar163._24_8_;
    auVar221._16_16_ = auVar172;
    auVar221._0_16_ = auVar172;
    auVar26 = vperm2f128_avx(auVar163,auVar163,0x11);
    auVar190 = vshufpd_avx(auVar221,auVar26,9);
    auVar233._0_8_ = param_1[0x10] * auVar190._0_8_;
    auVar233._8_8_ = param_1[0x11] * auVar190._8_8_;
    auVar233._16_8_ = param_1[0x12] * auVar190._16_8_;
    auVar233._24_8_ = param_1[0x13] * auVar190._24_8_;
    auVar190 = vsubpd_avx(auVar192,auVar233);
    auVar226._0_8_ = auVar190._0_8_ + auVar190._0_8_;
    auVar226._8_8_ = auVar190._8_8_ + auVar190._8_8_;
    auVar234._16_8_ = auVar190._16_8_ + auVar190._16_8_;
    auVar234._0_16_ = auVar226;
    auVar234._24_8_ = auVar190._24_8_ + auVar190._24_8_;
    auVar190 = vshufpd_avx(auVar26,auVar26,0xf);
    auVar239._16_16_ = auVar226;
    auVar239._0_16_ = auVar226;
    auVar24 = vshufpd_avx(auVar239,ZEXT1632(auVar234._16_16_),1);
    dVar78 = auVar190._0_8_;
    dVar80 = auVar190._8_8_;
    dVar32 = auVar190._16_8_;
    dVar33 = auVar190._24_8_;
    auVar249._0_8_ = auVar226._0_8_ * auVar172._0_8_;
    auVar249._8_8_ = auVar226._8_8_ * auVar172._8_8_;
    auVar249._16_8_ = auVar234._16_8_ * auVar179._16_8_;
    auVar249._24_8_ = auVar234._24_8_ * auVar179._24_8_;
    auVar190 = vshufpd_avx(auVar221,ZEXT1632(auVar179._16_16_),1);
    auVar222._0_8_ = auVar226._0_8_ * auVar190._0_8_;
    auVar222._8_8_ = auVar226._8_8_ * auVar190._8_8_;
    auVar222._16_8_ = auVar234._16_8_ * auVar190._16_8_;
    auVar222._24_8_ = auVar234._24_8_ * auVar190._24_8_;
    auVar190 = vperm2f128_avx(auVar249,auVar249,1);
    auVar190 = vshufpd_avx(auVar190,auVar249,4);
    auVar190 = vsubpd_avx(auVar222,auVar190);
    auVar212._0_8_ = param_1[0x31] + param_1[0x10] + dVar78 * auVar24._0_8_ + auVar190._0_8_;
    auVar212._8_8_ = param_1[0x32] + param_1[0x11] + dVar80 * auVar24._8_8_ + auVar190._8_8_;
    auVar223._16_8_ = param_1[0x33] + param_1[0x12] + dVar32 * auVar24._16_8_ + auVar190._16_8_;
    auVar223._0_16_ = auVar212;
    auVar223._24_8_ = dVar33 * auVar24._24_8_ + 0.0 + auVar190._24_8_ + 0.0;
    *(undefined1 (*) [16])(param_1 + 0x23) = auVar212;
    dVar144 = (double)vmovlps_avx(auVar223._16_16_);
    param_1[0x25] = dVar144;
    auVar9 = vshufps_avx(auVar172,auVar172,0x44);
    auVar245._8_8_ = 0;
    auVar245._0_8_ = param_1[0xd];
    auVar7 = vmovhpd_avx(auVar245,param_1[0xc]);
    auVar253._8_8_ = 0;
    auVar253._0_8_ = param_1[0xf];
    auVar13 = vmovhpd_avx(auVar253,param_1[0xe]);
    dVar144 = auVar9._0_8_;
    dVar143 = auVar9._8_8_;
    auVar9 = vshufps_avx(auVar172,auVar172,0xee);
    dVar132 = auVar9._0_8_;
    dVar76 = auVar9._8_8_;
    param_1[0x2a] =
         auVar7._0_8_ * auVar26._0_8_ * dVar193 +
         param_1[0xe] * dVar132 * dVar37 + param_1[0xc] * dVar78 + auVar13._0_8_ * dVar144 * dVar131
    ;
    param_1[0x2b] =
         auVar7._8_8_ * auVar26._0_8_ * dVar194 +
         param_1[0xf] * dVar76 * dVar77 + param_1[0xd] * dVar80 + auVar13._8_8_ * dVar143 * dVar36;
    param_1[0x2c] =
         auVar13._0_8_ * auVar26._16_8_ * dVar204 +
         param_1[0xc] * dVar132 * dVar79 + param_1[0xe] * dVar32 + auVar7._0_8_ * dVar144 * dVar131;
    param_1[0x2d] =
         auVar13._8_8_ * auVar26._16_8_ * dVar241 +
         param_1[0xd] * dVar76 * dVar81 + param_1[0xf] * dVar33 + auVar7._8_8_ * dVar143 * dVar36;
    dVar131 = auVar163._0_8_ + auVar163._0_8_;
    dVar36 = auVar163._8_8_ + auVar163._8_8_;
    dVar37 = auVar163._16_8_ + auVar163._16_8_;
    dVar77 = auVar163._24_8_ + auVar163._24_8_;
    auVar164._0_8_ = dVar144 * dVar131;
    auVar164._8_8_ = dVar143 * dVar36;
    auVar164._16_8_ = dVar144 * dVar37;
    auVar164._24_8_ = dVar143 * dVar77;
    auVar173._0_8_ = dVar131 * dVar132;
    auVar173._8_8_ = dVar36 * dVar76;
    auVar180._16_8_ = dVar37 * dVar132;
    auVar180._0_16_ = auVar173;
    auVar180._24_8_ = dVar77 * dVar76;
    auVar74._0_8_ = dVar78 * dVar131;
    auVar74._8_8_ = dVar80 * dVar36;
    auVar74._16_8_ = dVar32 * dVar37;
    auVar74._24_8_ = dVar33 * dVar77;
    auVar190 = vperm2f128_avx(auVar180,auVar164,0x21);
    auVar190 = vshufpd_avx(auVar190,ZEXT1632(auVar164._16_16_),4);
    auVar90._0_8_ = auVar74._0_8_ + auVar190._0_8_;
    auVar90._8_8_ = auVar74._8_8_ + auVar190._8_8_;
    auVar103._16_8_ = auVar74._16_8_ + auVar190._16_8_;
    auVar103._0_16_ = auVar90;
    auVar103._24_8_ = auVar74._24_8_ + auVar190._24_8_;
    auVar26 = vsubpd_avx(auVar190,auVar74);
    auVar7 = vshufpd_avx(auVar173,auVar173,1);
    auVar155._8_8_ = auVar164._0_8_;
    auVar155._0_8_ = auVar164._0_8_;
    auVar165._16_16_ = auVar155;
    auVar165._0_16_ = auVar155;
    auVar190 = vblendpd_avx(auVar165,ZEXT1632(auVar7),1);
    auVar24 = vblendpd_avx(ZEXT1632(CONCAT88(auVar179._16_8_ * dVar37,auVar179._16_8_ * dVar37)),
                           ZEXT1632(auVar7) << 0x80,0xc);
    auVar75._0_8_ = auVar190._0_8_ + auVar24._0_8_;
    auVar75._8_8_ = auVar190._8_8_ + auVar24._8_8_;
    auVar75._16_8_ = auVar190._16_8_ + auVar24._16_8_;
    auVar75._24_8_ = auVar190._24_8_ + auVar24._24_8_;
    auVar142._8_8_ = __real_3ff0000000000000;
    auVar142._0_8_ = __real_3ff0000000000000;
    auVar142._16_8_ = __real_3ff0000000000000;
    auVar142._24_8_ = __real_3ff0000000000000;
    auVar24 = vsubpd_avx(auVar142,auVar75);
    dVar36 = auVar24._0_8_;
    dVar144 = param_1[0x1b];
    dVar131 = param_1[0x1d];
    auVar190 = vperm2f128_avx(auVar26,auVar26,0x11);
    auVar9 = ZEXT816(0) << 0x40;
    auVar7 = vmovhpd_avx(auVar9,param_1[0x1c]);
    dVar37 = auVar7._0_8_;
    dVar77 = auVar7._8_8_;
    auVar7 = vshufpd_avx(auVar90,auVar90,3);
    auVar174._0_8_ = auVar7._0_8_ * 0.0 + dVar37 * auVar190._0_8_ + dVar144 * dVar36;
    auVar174._8_8_ = auVar7._8_8_ * 0.0 + dVar77 * auVar190._0_8_ + dVar36 * 0.0;
    auVar181._16_8_ = auVar7._0_8_ * dVar131 + auVar190._16_8_ * 0.0 + dVar36 * 0.0;
    auVar181._0_16_ = auVar174;
    auVar181._24_8_ = auVar7._8_8_ * 0.0 + auVar190._16_8_ * 0.0 + dVar36 * 0.0;
    auVar190 = vperm2f128_avx(auVar103,auVar103,0x11);
    auVar135 = auVar24._0_16_;
    auVar7 = vshufpd_avx(auVar135,auVar135,3);
    dVar36 = auVar26._0_8_;
    auVar156._0_8_ = dVar36 * 0.0 + dVar37 * auVar7._0_8_ + dVar144 * auVar190._0_8_;
    auVar156._8_8_ = dVar36 * 0.0 + dVar77 * auVar7._8_8_ + auVar190._0_8_ * 0.0;
    auVar166._16_8_ = dVar36 * dVar131 + auVar7._0_8_ * 0.0 + auVar190._16_8_ * 0.0;
    auVar166._0_16_ = auVar156;
    auVar166._24_8_ = dVar36 * 0.0 + auVar7._8_8_ * 0.0 + auVar190._16_8_ * 0.0;
    auVar8 = auVar26._0_16_;
    auVar7 = vshufpd_avx(auVar8,auVar8,3);
    auVar190 = vperm2f128_avx(auVar24,auVar24,0x11);
    auVar18._0_8_ = dVar144 * auVar7._0_8_ + dVar37 * auVar90._0_8_ + auVar190._0_8_ * 0.0;
    auVar18._8_8_ = auVar7._8_8_ * 0.0 + dVar77 * auVar90._0_8_ + auVar190._0_8_ * 0.0;
    auVar29._16_8_ = auVar7._0_8_ * 0.0 + auVar90._0_8_ * 0.0 + auVar190._16_8_ * dVar131;
    auVar29._0_16_ = auVar18;
    auVar29._24_8_ = auVar7._8_8_ * 0.0 + auVar90._0_8_ * 0.0 + auVar190._16_8_ * 0.0;
    auVar13 = vunpcklpd_avx(auVar135,auVar103._16_16_);
    auVar7 = vshufpd_avx(auVar8,auVar8,1);
    auVar224._16_16_ = auVar7;
    auVar224._0_16_ = auVar18;
    auVar190 = vblendpd_avx(ZEXT1632(auVar13),auVar224,0xc);
    dVar77 = auVar190._0_8_;
    dVar79 = auVar190._8_8_;
    dVar81 = auVar190._16_8_;
    dVar193 = auVar190._24_8_;
    auVar13 = vshufpd_avx(auVar174,auVar174,3);
    auVar7 = vblendpd_avx(auVar135,auVar26._16_16_,1);
    dVar194 = auVar7._0_8_;
    dVar204 = auVar7._8_8_;
    auVar7 = vshufpd_avx(auVar90,auVar8,1);
    auVar26 = vperm2f128_avx(auVar181,auVar181,0x11);
    auVar190 = vblendpd_avx(auVar24,ZEXT1632(auVar7),3);
    dVar144 = auVar190._0_8_;
    dVar131 = auVar190._8_8_;
    dVar36 = auVar190._16_8_;
    dVar37 = auVar190._24_8_;
    auVar91._0_8_ = dVar77 * auVar174._0_8_ + dVar194 * auVar13._0_8_ + dVar144 * auVar26._0_8_;
    auVar91._8_8_ = dVar79 * auVar174._0_8_ + dVar204 * auVar13._8_8_ + dVar131 * auVar26._0_8_;
    auVar104._16_8_ =
         dVar81 * auVar174._0_8_ + auVar90._0_8_ * auVar13._0_8_ + dVar36 * auVar26._16_8_;
    auVar104._0_16_ = auVar91;
    auVar104._24_8_ =
         dVar193 * auVar174._0_8_ + auVar90._8_8_ * auVar13._8_8_ + dVar37 * auVar26._16_8_;
    auVar7 = vshufpd_avx(auVar156,auVar156,3);
    auVar190 = vperm2f128_avx(auVar166,auVar166,0x11);
    auVar118._0_8_ = dVar144 * auVar190._0_8_ + dVar77 * auVar156._0_8_ + dVar194 * auVar7._0_8_;
    auVar118._8_8_ = dVar131 * auVar190._0_8_ + dVar79 * auVar156._0_8_ + dVar204 * auVar7._8_8_;
    auVar130._16_8_ =
         dVar36 * auVar190._16_8_ + dVar81 * auVar156._0_8_ + auVar90._0_8_ * auVar7._0_8_;
    auVar130._0_16_ = auVar118;
    auVar130._24_8_ =
         dVar37 * auVar190._16_8_ + dVar193 * auVar156._0_8_ + auVar90._8_8_ * auVar7._8_8_;
    auVar7 = vshufpd_avx(auVar18,auVar18,3);
    auVar190 = vperm2f128_avx(auVar29,auVar29,0x11);
    auVar19._0_8_ = dVar144 * auVar190._0_8_ + dVar77 * auVar18._0_8_ + dVar194 * auVar7._0_8_;
    auVar19._8_8_ = dVar131 * auVar190._0_8_ + dVar79 * auVar18._0_8_ + dVar204 * auVar7._8_8_;
    auVar30._16_8_ =
         dVar36 * auVar190._16_8_ + dVar81 * auVar18._0_8_ + auVar90._0_8_ * auVar7._0_8_;
    auVar30._0_16_ = auVar19;
    auVar30._24_8_ =
         dVar37 * auVar190._16_8_ + dVar193 * auVar18._0_8_ + auVar90._8_8_ * auVar7._8_8_;
    *(undefined1 (*) [16])(param_1 + 0x58) = auVar91;
    dVar144 = (double)vmovlps_avx(auVar104._16_16_);
    param_1[0x5a] = dVar144;
    param_1[0x5b] = 0.0;
    *(undefined1 (*) [16])(param_1 + 0x5c) = auVar118;
    dVar144 = (double)vmovlpd_avx(auVar130._16_16_);
    param_1[0x5e] = dVar144;
    param_1[0x5f] = 0.0;
    *(undefined1 (*) [16])(param_1 + 0x60) = auVar19;
    dVar144 = (double)vmovlpd_avx(auVar30._16_16_);
    param_1[0x62] = dVar144;
    *(undefined1 (*) [16])(param_1 + 0x65) = auVar9;
    *(undefined1 (*) [16])(param_1 + 99) = auVar9;
  }
  else {
    if (__real_3f1a36e2eb1c432d < param_4) {
      auVar190 = *(undefined1 (*) [32])(param_1 + 0x7c);
      auVar10._0_8_ =
           *(double *)*(undefined1 (*) [32])(param_1 + 0x7c) * param_1[0x26] +
           param_1[0x28] * SUB168(*(undefined1 (*) [16])(param_1 + 0x7e),0);
      auVar10._8_8_ =
           param_1[0x7d] * param_1[0x27] +
           param_1[0x29] * SUB168(*(undefined1 (*) [16])(param_1 + 0x7e),8);
      auVar7 = vshufpd_avx(auVar10,auVar10,1);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = auVar10._0_8_ + auVar7._0_8_;
      auVar7 = vcmpsd_avx(ZEXT816(0),auVar11,2);
      auVar183._8_8_ = 0;
      auVar183._0_8_ = __real_3ff0000000000000;
      auVar133._8_8_ = 0;
      auVar133._0_8_ = __real_bff0000000000000;
      auVar7 = vblendvpd_avx(auVar133,auVar183,auVar7);
      dVar131 = auVar7._0_8_;
      auVar21._0_8_ = param_1[0x26] * dVar131;
      auVar21._8_8_ = param_1[0x27] * dVar131;
      auVar21._16_8_ = param_1[0x28] * dVar131;
      auVar21._24_8_ = param_1[0x29] * dVar131;
      auVar26 = vsubpd_avx(auVar21,auVar190);
      auVar236._0_8_ =
           auVar190._0_8_ * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
      auVar236._8_8_ = auVar190._8_8_ * _UNK_150b543c8;
      auVar236._16_8_ = auVar190._16_8_ * _UNK_150b543d0;
      auVar236._24_8_ = auVar190._24_8_ * _UNK_150b543d8;
      auVar53 = vperm2f128_avx(auVar26,auVar26,0x11);
      auVar66 = *(undefined1 (*) [32])(param_1 + 0x80);
      auVar38._0_8_ =
           param_1[0x2a] * *(double *)*(undefined1 (*) [32])(param_1 + 0x80) +
           param_1[0x2c] * SUB168(*(undefined1 (*) [16])(param_1 + 0x82),0);
      auVar38._8_8_ =
           param_1[0x2b] * param_1[0x81] +
           param_1[0x2d] * SUB168(*(undefined1 (*) [16])(param_1 + 0x82),8);
      auVar7 = vshufpd_avx(auVar38,auVar38,1);
      auVar190 = vshufpd_avx(auVar53,auVar53,0xf);
      auVar39._8_8_ = 0;
      auVar39._0_8_ = auVar7._0_8_ + auVar38._0_8_;
      auVar7 = vcmpsd_avx(ZEXT816(0),auVar39,2);
      dVar131 = auVar26._0_8_;
      auVar7 = vblendvpd_avx(auVar133,auVar183,auVar7);
      auVar54 = vperm2f128_avx(auVar236,auVar236,1);
      auVar24 = vshufpd_avx(auVar54,auVar54,5);
      auVar13 = vshufpd_avx(auVar26._0_16_,auVar26._0_16_,3);
      auVar26 = vshufpd_avx(auVar236,auVar236,5);
      dVar235 = auVar26._0_8_ * auVar53._0_8_ *
                ___ymm_00000000000000003ff00000000000003ff0000000000000bff0000000000000 +
                auVar54._0_8_ * auVar13._0_8_ *
                ___ymm_0000000000000000bff00000000000003ff00000000000003ff0000000000000 +
                auVar236._0_8_ * auVar190._0_8_ +
                ___xmm_bff00000000000003ff0000000000000 * auVar24._0_8_ * dVar131;
      dVar240 = auVar26._8_8_ * auVar53._0_8_ * _UNK_150b54588 +
                auVar54._8_8_ * auVar13._8_8_ * _UNK_150b54568 +
                auVar236._8_8_ * auVar190._8_8_ + _UNK_15076c6f8 * auVar24._8_8_ * dVar131;
      dVar242 = auVar26._16_8_ * auVar53._16_8_ * _UNK_150b54590 +
                auVar54._16_8_ * auVar13._0_8_ * _UNK_150b54570 +
                auVar236._16_8_ * auVar190._16_8_ +
                ___xmm_bff00000000000003ff0000000000000 * auVar24._16_8_ * dVar131;
      dVar243 = auVar26._24_8_ * auVar53._16_8_ * _UNK_150b54598 +
                auVar54._24_8_ * auVar13._8_8_ * _UNK_150b54578 +
                auVar236._24_8_ * auVar190._24_8_ + _UNK_15076c6f8 * auVar24._24_8_ * dVar131;
      dVar131 = auVar7._0_8_;
      auVar51._0_8_ = param_1[0x2a] * dVar131;
      auVar51._8_8_ = param_1[0x2b] * dVar131;
      auVar51._16_8_ = param_1[0x2c] * dVar131;
      auVar51._24_8_ = param_1[0x2d] * dVar131;
      auVar26 = vsubpd_avx(auVar51,auVar66);
      auVar22._0_8_ =
           auVar66._0_8_ * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
      auVar22._8_8_ = auVar66._8_8_ * _UNK_150b543c8;
      auVar22._16_8_ = auVar66._16_8_ * _UNK_150b543d0;
      auVar22._24_8_ = auVar66._24_8_ * _UNK_150b543d8;
      dVar34 = auVar26._0_8_;
      auVar53 = vperm2f128_avx(auVar22,auVar22,1);
      auVar190 = vshufpd_avx(auVar53,auVar53,5);
      auVar54 = vperm2f128_avx(auVar26,auVar26,0x11);
      auVar24 = vshufpd_avx(auVar54,auVar54,0xf);
      auVar7 = vshufpd_avx(auVar26._0_16_,auVar26._0_16_,3);
      auVar26 = vshufpd_avx(auVar22,auVar22,5);
      dVar131 = ___ymm_00000000000000003ff00000000000003ff0000000000000bff0000000000000 *
                auVar26._0_8_ * auVar54._0_8_ +
                auVar53._0_8_ * auVar7._0_8_ *
                ___ymm_0000000000000000bff00000000000003ff00000000000003ff0000000000000 +
                auVar24._0_8_ * auVar22._0_8_ +
                ___xmm_bff00000000000003ff0000000000000 * auVar190._0_8_ * dVar34;
      dVar32 = _UNK_150b54588 * auVar26._8_8_ * auVar54._0_8_ +
               auVar53._8_8_ * auVar7._8_8_ * _UNK_150b54568 +
               auVar24._8_8_ * auVar22._8_8_ + _UNK_15076c6f8 * auVar190._8_8_ * dVar34;
      dVar33 = _UNK_150b54590 * auVar26._16_8_ * auVar54._16_8_ +
               auVar53._16_8_ * auVar7._0_8_ * _UNK_150b54570 +
               auVar24._16_8_ * auVar22._16_8_ +
               ___xmm_bff00000000000003ff0000000000000 * auVar190._16_8_ * dVar34;
      dVar34 = _UNK_150b54598 * auVar26._24_8_ * auVar54._16_8_ +
               auVar53._24_8_ * auVar7._8_8_ * _UNK_150b54578 +
               auVar24._24_8_ * auVar22._24_8_ + _UNK_15076c6f8 * auVar190._24_8_ * dVar34;
      auVar52._0_8_ = dVar235 + dVar235;
      auVar52._8_8_ = dVar240 + dVar240;
      auVar52._16_8_ = dVar242 + dVar242;
      auVar52._24_8_ = dVar243 + dVar243;
      auVar23._0_8_ = dVar131 + dVar131;
      auVar23._8_8_ = dVar32 + dVar32;
      auVar23._16_8_ = dVar33 + dVar33;
      auVar23._24_8_ = dVar34 + dVar34;
      auVar190 = vsubpd_avx(auVar52,auVar23);
      auVar12._0_8_ = auVar190._0_8_ * dVar76;
      auVar12._8_8_ = auVar190._8_8_ * dVar78;
      auVar7 = vshufpd_avx(auVar12,auVar12,1);
      dVar131 = param_2 * param_8 + auVar190._16_8_ * dVar80 + auVar12._0_8_ + auVar7._0_8_;
      auVar190._24_8_ = 0;
      auVar190._0_24_ = *param_6;
    }
    dVar76 = __real_3ff0000000000000;
    if ((param_5 & 1) != 0) {
      dVar76 = __real_3ff0000000000000 / dVar35;
    }
    dVar78 = param_3 * dVar76 * param_2 * param_2;
    param_2 = dVar76 * param_4 * param_2;
    dVar35 = (__real_3ff0000000000000 / (dVar35 * (param_2 + dVar78) + __real_3ff0000000000000)) *
             param_1[0x99] * ((param_7 * dVar78 - param_2 * dVar131) - *param_9);
    if (0.0 < param_1[0x1e]) {
      dVar36 = dVar36 * dVar35;
      auVar42._0_8_ = auVar190._0_8_ * dVar36;
      auVar42._8_8_ = auVar190._8_8_ * dVar36;
      auVar55._16_8_ = auVar190._16_8_ * dVar36;
      auVar55._0_16_ = auVar42;
      auVar55._24_8_ = auVar190._24_8_ * dVar36;
      dVar36 = param_1[0x34];
      auVar195._8_8_ = 0;
      auVar195._0_8_ = param_1[0x37];
      auVar7 = vmovhps_avx(auVar195,param_1[0x36]);
      auVar205._8_8_ = 0;
      auVar205._0_8_ = param_1[0x35];
      auVar13 = vmovhps_avx(auVar205,param_1[0x34]);
      auVar9 = vshufpd_avx(auVar42,auVar42,3);
      auVar24 = vperm2f128_avx(auVar55,auVar55,0x11);
      dVar36 = dVar36 + (dVar36 * 0.0 +
                         auVar7._0_8_ * auVar42._0_8_ * ___xmm_bff00000000000003ff0000000000000 +
                         auVar9._0_8_ * param_1[0x36] *
                         ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
                        auVar24._0_8_ * auVar13._0_8_ *
                        ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000) *
                        ___ymm_3fe00000000000003fe00000000000003fe00000000000003fe0000000000000;
      dVar76 = param_1[0x35] +
               (param_1[0x35] * 0.0 + auVar7._8_8_ * auVar42._0_8_ * _UNK_15076c6f8 +
                auVar9._8_8_ * param_1[0x37] * _UNK_150b54408 +
               auVar24._0_8_ * auVar13._8_8_ * _UNK_150b54428) * _UNK_150aa8f28;
      dVar78 = param_1[0x36] +
               (param_1[0x36] * 0.0 +
                auVar13._0_8_ * auVar42._0_8_ * ___xmm_bff00000000000003ff0000000000000 +
                auVar9._0_8_ * param_1[0x34] * _UNK_150b54410 +
               auVar24._16_8_ * auVar7._0_8_ * _UNK_150b54430) * _UNK_150aa8f30;
      dVar80 = param_1[0x37] +
               (param_1[0x37] * 0.0 + auVar13._8_8_ * auVar42._0_8_ * _UNK_15076c6f8 +
                auVar9._8_8_ * param_1[0x35] * _UNK_150b54418 +
               auVar24._16_8_ * auVar7._8_8_ * _UNK_150b54438) * _UNK_150aa8f38;
      auVar106._0_8_ = dVar78 * dVar78 + dVar36 * dVar36;
      auVar106._8_8_ = dVar80 * dVar80 + dVar76 * dVar76;
      auVar7 = vshufpd_avx(auVar106,auVar106,1);
      dVar131 = auVar7._0_8_ + auVar106._0_8_;
      auVar184._8_8_ = 0;
      auVar184._0_8_ = __real_3e45798ee2308c3a;
      auVar107._8_8_ = 0;
      auVar107._0_8_ = dVar131;
      auVar7 = vcmpsd_avx(auVar184,auVar107,6);
      uVar182 = ~auVar7._0_8_ & __real_ffffffffffffffff;
      dVar131 = __real_3ff0000000000000 / SQRT(dVar131);
      auVar206._0_8_ =
           (double)(uVar182 &
                   ((ulonglong)(dVar36 * dVar131) ^
                   ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000));
      auVar206._8_8_ = (double)(uVar182 & ((ulonglong)(dVar76 * dVar131) ^ _UNK_150b54548));
      auVar213._16_8_ = (double)(uVar182 & ((ulonglong)(dVar78 * dVar131) ^ _UNK_150b54550));
      auVar213._0_16_ = auVar206;
      auVar213._24_8_ = (double)(uVar182 & ((ulonglong)(dVar80 * dVar131) ^ _UNK_150b54558));
      auVar200._0_8_ =
           (double)((ulonglong)auVar206._0_8_ ^
                   ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
      auVar200._8_8_ = (double)((ulonglong)auVar206._8_8_ ^ _UNK_150b54548);
      auVar200._16_8_ = (double)((ulonglong)auVar213._16_8_ ^ _UNK_150b54550);
      auVar200._24_8_ = (double)((ulonglong)auVar213._24_8_ ^ _UNK_150b54558);
      *(undefined1 (*) [16])(param_1 + 0x34) = auVar206;
      *(undefined1 (*) [16])(param_1 + 0x36) = auVar200._16_16_;
      auVar43._8_8_ = 0;
      auVar43._0_8_ = param_1[4];
      auVar7 = vmovhps_avx(auVar43,param_1[7]);
      auVar56._0_8_ = auVar200._0_8_ * SUB168(*(undefined1 (*) [16])(param_1 + 5),0);
      auVar56._8_8_ = auVar200._8_8_ * SUB168(*(undefined1 (*) [16])(param_1 + 5),8);
      auVar56._16_8_ = auVar200._16_8_ * auVar7._0_8_;
      auVar56._24_8_ = auVar200._24_8_ * auVar7._8_8_;
      auVar119._16_16_ = auVar206;
      auVar119._0_16_ = auVar206;
      auVar53 = vperm2f128_avx(auVar200,auVar200,0x11);
      auVar24 = vshufpd_avx(auVar119,auVar53,9);
      auVar227._0_8_ = param_1[4] * auVar24._0_8_;
      auVar227._8_8_ = param_1[5] * auVar24._8_8_;
      auVar227._16_8_ = param_1[6] * auVar24._16_8_;
      auVar227._24_8_ = param_1[7] * auVar24._24_8_;
      auVar24 = vsubpd_avx(auVar56,auVar227);
      auVar44._0_8_ = auVar24._0_8_ + auVar24._0_8_;
      auVar44._8_8_ = auVar24._8_8_ + auVar24._8_8_;
      auVar57._16_8_ = auVar24._16_8_ + auVar24._16_8_;
      auVar57._0_16_ = auVar44;
      auVar57._24_8_ = auVar24._24_8_ + auVar24._24_8_;
      auVar24 = vshufpd_avx(auVar53,auVar53,0xf);
      auVar246._16_16_ = auVar44;
      auVar246._0_16_ = auVar44;
      auVar26 = vshufpd_avx(auVar246,ZEXT1632(auVar57._16_16_),1);
      dVar76 = auVar24._0_8_;
      dVar78 = auVar24._8_8_;
      dVar80 = auVar24._16_8_;
      dVar32 = auVar24._24_8_;
      auVar254._0_8_ = auVar206._0_8_ * auVar44._0_8_;
      auVar254._8_8_ = auVar206._8_8_ * auVar44._8_8_;
      auVar254._16_8_ = auVar213._16_8_ * auVar57._16_8_;
      auVar254._24_8_ = auVar213._24_8_ * auVar57._24_8_;
      auVar24 = vshufpd_avx(auVar119,ZEXT1632(auVar213._16_16_),1);
      auVar58._0_8_ = auVar44._0_8_ * auVar24._0_8_;
      auVar58._8_8_ = auVar44._8_8_ * auVar24._8_8_;
      auVar58._16_8_ = auVar57._16_8_ * auVar24._16_8_;
      auVar58._24_8_ = auVar57._24_8_ * auVar24._24_8_;
      auVar24 = vperm2f128_avx(auVar254,auVar254,1);
      auVar24 = vshufpd_avx(auVar24,auVar254,4);
      auVar24 = vsubpd_avx(auVar58,auVar24);
      auVar45._0_8_ = param_1[0x2e] + param_1[4] + dVar76 * auVar26._0_8_ + auVar24._0_8_;
      auVar45._8_8_ = param_1[0x2f] + param_1[5] + dVar78 * auVar26._8_8_ + auVar24._8_8_;
      auVar59._16_8_ = param_1[0x30] + param_1[6] + dVar80 * auVar26._16_8_ + auVar24._16_8_;
      auVar59._0_16_ = auVar45;
      auVar59._24_8_ = dVar32 * auVar26._24_8_ + 0.0 + auVar24._24_8_ + 0.0;
      *(undefined1 (*) [16])(param_1 + 0x20) = auVar45;
      dVar131 = (double)vmovlps_avx(auVar59._16_16_);
      param_1[0x22] = dVar131;
      auVar9 = vshufps_avx(auVar206,auVar206,0x44);
      auVar250._8_8_ = 0;
      auVar250._0_8_ = param_1[1];
      auVar7 = vmovhpd_avx(auVar250,*param_1);
      auVar256._8_8_ = 0;
      auVar256._0_8_ = param_1[3];
      auVar13 = vmovhpd_avx(auVar256,param_1[2]);
      dVar33 = auVar9._0_8_;
      dVar34 = auVar9._8_8_;
      auVar9 = vshufps_avx(auVar206,auVar206,0xee);
      dVar131 = auVar9._0_8_;
      dVar36 = auVar9._8_8_;
      param_1[0x26] =
           auVar7._0_8_ * auVar53._0_8_ * dVar204 +
           param_1[2] * dVar131 * dVar79 + dVar76 * *param_1 + dVar33 * auVar13._0_8_ * dVar37;
      param_1[0x27] =
           auVar7._8_8_ * auVar53._0_8_ * dVar241 +
           param_1[3] * dVar36 * dVar81 + dVar78 * param_1[1] + dVar34 * auVar13._8_8_ * dVar77;
      param_1[0x28] =
           auVar13._0_8_ * auVar53._16_8_ * dVar132 +
           *param_1 * dVar131 * dVar193 + dVar80 * param_1[2] + dVar33 * auVar7._0_8_ * dVar37;
      param_1[0x29] =
           auVar13._8_8_ * auVar53._16_8_ * dVar143 +
           param_1[1] * dVar36 * dVar194 + dVar32 * param_1[3] + dVar34 * auVar7._8_8_ * dVar77;
      dVar37 = auVar200._0_8_ + auVar200._0_8_;
      dVar77 = auVar200._8_8_ + auVar200._8_8_;
      dVar79 = auVar200._16_8_ + auVar200._16_8_;
      dVar81 = auVar200._24_8_ + auVar200._24_8_;
      auVar139._0_8_ = dVar33 * dVar37;
      auVar139._8_8_ = dVar34 * dVar77;
      auVar139._16_8_ = dVar33 * dVar79;
      auVar139._24_8_ = dVar34 * dVar81;
      auVar108._0_8_ = dVar37 * dVar131;
      auVar108._8_8_ = dVar77 * dVar36;
      auVar120._16_8_ = dVar79 * dVar131;
      auVar120._0_16_ = auVar108;
      auVar120._24_8_ = dVar81 * dVar36;
      auVar60._0_8_ = dVar76 * dVar37;
      auVar60._8_8_ = dVar78 * dVar77;
      auVar60._16_8_ = dVar80 * dVar79;
      auVar60._24_8_ = dVar32 * dVar81;
      auVar24 = vperm2f128_avx(auVar120,auVar139,0x21);
      auVar24 = vshufpd_avx(auVar24,ZEXT1632(auVar139._16_16_),4);
      auVar146._0_8_ = auVar60._0_8_ + auVar24._0_8_;
      auVar146._8_8_ = auVar60._8_8_ + auVar24._8_8_;
      auVar157._16_8_ = auVar60._16_8_ + auVar24._16_8_;
      auVar157._0_16_ = auVar146;
      auVar157._24_8_ = auVar60._24_8_ + auVar24._24_8_;
      auVar53 = vsubpd_avx(auVar24,auVar60);
      auVar7 = vshufpd_avx(auVar108,auVar108,1);
      auVar109._8_8_ = auVar139._0_8_;
      auVar109._0_8_ = auVar139._0_8_;
      auVar121._16_16_ = auVar109;
      auVar121._0_16_ = auVar109;
      auVar24 = vblendpd_avx(auVar121,ZEXT1632(auVar7),1);
      auVar61._16_16_ = auVar7;
      auVar61._0_16_ = ZEXT816(0);
      auVar26 = vblendpd_avx(ZEXT1632(CONCAT88(auVar213._16_8_ * dVar79,auVar213._16_8_ * dVar79)),
                             auVar61,0xc);
      auVar62._0_8_ = auVar24._0_8_ + auVar26._0_8_;
      auVar62._8_8_ = auVar24._8_8_ + auVar26._8_8_;
      auVar62._16_8_ = auVar24._16_8_ + auVar26._16_8_;
      auVar62._24_8_ = auVar24._24_8_ + auVar26._24_8_;
      auVar94._8_8_ = __real_3ff0000000000000;
      auVar94._0_8_ = __real_3ff0000000000000;
      auVar94._16_8_ = __real_3ff0000000000000;
      auVar94._24_8_ = __real_3ff0000000000000;
      auVar26 = vsubpd_avx(auVar94,auVar62);
      dVar37 = auVar26._0_8_;
      dVar131 = param_1[0x18];
      dVar36 = param_1[0x1a];
      auVar24 = vperm2f128_avx(auVar53,auVar53,0x11);
      auVar9 = ZEXT816(0) << 0x40;
      auVar7 = vmovhpd_avx(auVar9,param_1[0x19]);
      dVar77 = auVar7._0_8_;
      dVar79 = auVar7._8_8_;
      auVar7 = vshufpd_avx(auVar146,auVar146,3);
      auVar207._0_8_ = auVar7._0_8_ * 0.0 + dVar77 * auVar24._0_8_ + dVar131 * dVar37;
      auVar207._8_8_ = auVar7._8_8_ * 0.0 + dVar79 * auVar24._0_8_ + dVar37 * 0.0;
      auVar214._16_8_ = auVar7._0_8_ * dVar36 + auVar24._16_8_ * 0.0 + dVar37 * 0.0;
      auVar214._0_16_ = auVar207;
      auVar214._24_8_ = auVar7._8_8_ * 0.0 + auVar24._16_8_ * 0.0 + dVar37 * 0.0;
      auVar24 = vperm2f128_avx(auVar157,auVar157,0x11);
      auVar135 = auVar26._0_16_;
      auVar7 = vshufpd_avx(auVar135,auVar135,3);
      dVar37 = auVar53._0_8_;
      auVar196._0_8_ = dVar37 * 0.0 + dVar77 * auVar7._0_8_ + dVar131 * auVar24._0_8_;
      auVar196._8_8_ = dVar37 * 0.0 + dVar79 * auVar7._8_8_ + auVar24._0_8_ * 0.0;
      auVar201._16_8_ = dVar37 * dVar36 + auVar7._0_8_ * 0.0 + auVar24._16_8_ * 0.0;
      auVar201._0_16_ = auVar196;
      auVar201._24_8_ = dVar37 * 0.0 + auVar7._8_8_ * 0.0 + auVar24._16_8_ * 0.0;
      auVar8 = auVar53._0_16_;
      auVar7 = vshufpd_avx(auVar8,auVar8,3);
      auVar24 = vperm2f128_avx(auVar26,auVar26,0x11);
      auVar82._0_8_ = dVar131 * auVar7._0_8_ + dVar77 * auVar146._0_8_ + auVar24._0_8_ * 0.0;
      auVar82._8_8_ = auVar7._8_8_ * 0.0 + dVar79 * auVar146._0_8_ + auVar24._0_8_ * 0.0;
      auVar95._16_8_ = auVar7._0_8_ * 0.0 + auVar146._0_8_ * 0.0 + dVar36 * auVar24._16_8_;
      auVar95._0_16_ = auVar82;
      auVar95._24_8_ = auVar7._8_8_ * 0.0 + auVar146._0_8_ * 0.0 + auVar24._16_8_ * 0.0;
      auVar13 = vunpcklpd_avx(auVar135,auVar157._16_16_);
      auVar7 = vshufpd_avx(auVar8,auVar8,1);
      auVar228._16_16_ = auVar7;
      auVar228._0_16_ = ZEXT816(0);
      auVar24 = vblendpd_avx(ZEXT1632(auVar13),auVar228,0xc);
      dVar79 = auVar24._0_8_;
      dVar81 = auVar24._8_8_;
      dVar193 = auVar24._16_8_;
      dVar194 = auVar24._24_8_;
      auVar13 = vshufpd_avx(auVar207,auVar207,3);
      auVar7 = vblendpd_avx(auVar135,auVar53._16_16_,1);
      dVar204 = auVar7._0_8_;
      dVar241 = auVar7._8_8_;
      auVar7 = vshufpd_avx(auVar146,auVar8,1);
      auVar53 = vperm2f128_avx(auVar214,auVar214,0x11);
      auVar24 = vblendpd_avx(auVar26,ZEXT1632(auVar7),3);
      dVar131 = auVar24._0_8_;
      dVar36 = auVar24._8_8_;
      dVar37 = auVar24._16_8_;
      dVar77 = auVar24._24_8_;
      auVar110._0_8_ = dVar131 * auVar53._0_8_ + dVar79 * auVar207._0_8_ + dVar204 * auVar13._0_8_;
      auVar110._8_8_ = dVar36 * auVar53._0_8_ + dVar81 * auVar207._0_8_ + dVar241 * auVar13._8_8_;
      auVar122._16_8_ =
           dVar37 * auVar53._16_8_ + dVar193 * auVar207._0_8_ + auVar146._0_8_ * auVar13._0_8_;
      auVar122._0_16_ = auVar110;
      auVar122._24_8_ =
           dVar77 * auVar53._16_8_ + dVar194 * auVar207._0_8_ + auVar146._8_8_ * auVar13._8_8_;
      auVar7 = vshufpd_avx(auVar196,auVar196,3);
      auVar24 = vperm2f128_avx(auVar201,auVar201,0x11);
      auVar46._0_8_ = dVar131 * auVar24._0_8_ + dVar79 * auVar196._0_8_ + dVar204 * auVar7._0_8_;
      auVar46._8_8_ = dVar36 * auVar24._0_8_ + dVar81 * auVar196._0_8_ + dVar241 * auVar7._8_8_;
      auVar63._16_8_ =
           dVar37 * auVar24._16_8_ + dVar193 * auVar196._0_8_ + auVar146._0_8_ * auVar7._0_8_;
      auVar63._0_16_ = auVar46;
      auVar63._24_8_ =
           dVar77 * auVar24._16_8_ + dVar194 * auVar196._0_8_ + auVar146._8_8_ * auVar7._8_8_;
      auVar7 = vshufpd_avx(auVar82,auVar82,3);
      auVar24 = vperm2f128_avx(auVar95,auVar95,0x11);
      auVar83._0_8_ = dVar131 * auVar24._0_8_ + dVar204 * auVar7._0_8_ + dVar79 * auVar82._0_8_;
      auVar83._8_8_ = dVar36 * auVar24._0_8_ + dVar241 * auVar7._8_8_ + dVar81 * auVar82._0_8_;
      auVar96._16_8_ =
           dVar37 * auVar24._16_8_ + auVar146._0_8_ * auVar7._0_8_ + dVar193 * auVar82._0_8_;
      auVar96._0_16_ = auVar83;
      auVar96._24_8_ =
           dVar77 * auVar24._16_8_ + auVar146._8_8_ * auVar7._8_8_ + dVar194 * auVar82._0_8_;
      *(undefined1 (*) [16])(param_1 + 0x48) = auVar110;
      dVar131 = (double)vmovlpd_avx(auVar122._16_16_);
      param_1[0x4a] = dVar131;
      param_1[0x4b] = 0.0;
      *(undefined1 (*) [16])(param_1 + 0x4c) = auVar46;
      dVar131 = (double)vmovlps_avx(auVar63._16_16_);
      param_1[0x4e] = dVar131;
      param_1[0x4f] = 0.0;
      *(undefined1 (*) [16])(param_1 + 0x50) = auVar83;
      dVar131 = (double)vmovlpd_avx(auVar96._16_16_);
      param_1[0x52] = dVar131;
      *(undefined1 (*) [16])(param_1 + 0x55) = auVar9;
      *(undefined1 (*) [16])(param_1 + 0x53) = auVar9;
      param_1[0x57] = 1.0;
    }
    dVar241 = _UNK_150b54438;
    dVar204 = _UNK_150b54430;
    dVar194 = _UNK_150b54428;
    dVar193 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
    dVar81 = _UNK_150b54418;
    dVar79 = _UNK_150b54410;
    dVar77 = _UNK_150b54408;
    dVar37 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
    dVar36 = _UNK_15076c6f8;
    dVar131 = ___xmm_bff00000000000003ff0000000000000;
    if (param_1[0x1f] <= 0.0) goto LAB_1409f8907;
    dVar144 = dVar35 * (double)((ulonglong)dVar144 ^ __xmm_80000000000000008000000000000000);
    auVar84._0_8_ = auVar190._0_8_ * dVar144;
    auVar84._8_8_ = auVar190._8_8_ * dVar144;
    auVar97._16_8_ = auVar190._16_8_ * dVar144;
    auVar97._0_16_ = auVar84;
    auVar97._24_8_ = auVar190._24_8_ * dVar144;
    dVar132 = param_1[0x38];
    auVar185._8_8_ = 0;
    auVar185._0_8_ = param_1[0x3b];
    auVar7 = vmovhps_avx(auVar185,param_1[0x3a]);
    auVar197._8_8_ = 0;
    auVar197._0_8_ = param_1[0x39];
    auVar13 = vmovhps_avx(auVar197,param_1[0x38]);
    auVar9 = vshufpd_avx(auVar84,auVar84,3);
    auVar190 = vperm2f128_avx(auVar97,auVar97,0x11);
    dVar132 = dVar132 + (auVar190._0_8_ * auVar13._0_8_ *
                         ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
                        auVar9._0_8_ * param_1[0x3a] *
                        ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
                        auVar7._0_8_ * auVar84._0_8_ * ___xmm_bff00000000000003ff0000000000000 +
                        dVar132 * 0.0) *
                        ___ymm_3fe00000000000003fe00000000000003fe00000000000003fe0000000000000;
    dVar143 = param_1[0x39] +
              (auVar190._0_8_ * auVar13._8_8_ * _UNK_150b54428 +
              auVar9._8_8_ * param_1[0x3b] * _UNK_150b54408 +
              auVar7._8_8_ * auVar84._0_8_ * _UNK_15076c6f8 + param_1[0x39] * 0.0) * _UNK_150aa8f28;
    dVar76 = param_1[0x3a] +
             (auVar190._16_8_ * auVar7._0_8_ * _UNK_150b54430 +
             auVar9._0_8_ * param_1[0x38] * _UNK_150b54410 +
             auVar13._0_8_ * auVar84._0_8_ * ___xmm_bff00000000000003ff0000000000000 +
             param_1[0x3a] * 0.0) * _UNK_150aa8f30;
    dVar78 = param_1[0x3b] +
             (auVar190._16_8_ * auVar7._8_8_ * _UNK_150b54438 +
             auVar9._8_8_ * param_1[0x39] * _UNK_150b54418 +
             auVar13._8_8_ * auVar84._0_8_ * _UNK_15076c6f8 + param_1[0x3b] * 0.0) * _UNK_150aa8f38;
    auVar147._0_8_ = dVar132 * dVar132 + dVar76 * dVar76;
    auVar147._8_8_ = dVar143 * dVar143 + dVar78 * dVar78;
    auVar7 = vshufpd_avx(auVar147,auVar147,1);
    dVar144 = auVar147._0_8_ + auVar7._0_8_;
    auVar167._8_8_ = 0;
    auVar167._0_8_ = __real_3e45798ee2308c3a;
    auVar148._8_8_ = 0;
    auVar148._0_8_ = dVar144;
    auVar7 = vcmpsd_avx(auVar167,auVar148,6);
    uVar182 = ~auVar7._0_8_ & __real_ffffffffffffffff;
    dVar144 = __real_3ff0000000000000 / SQRT(dVar144);
    auVar168._0_8_ =
         (double)(((ulonglong)(dVar132 * dVar144) ^
                  ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) & uVar182
                 );
    auVar168._8_8_ = (double)(((ulonglong)(dVar143 * dVar144) ^ _UNK_150b54548) & uVar182);
    auVar176._16_8_ = (double)(((ulonglong)(dVar76 * dVar144) ^ _UNK_150b54550) & uVar182);
    auVar176._0_16_ = auVar168;
    auVar176._24_8_ = (double)(((ulonglong)(dVar78 * dVar144) ^ _UNK_150b54558) & uVar182);
    auVar158._0_8_ =
         (double)((ulonglong)auVar168._0_8_ ^
                 ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
    auVar158._8_8_ = (double)((ulonglong)auVar168._8_8_ ^ _UNK_150b54548);
    auVar158._16_8_ = (double)((ulonglong)auVar176._16_8_ ^ _UNK_150b54550);
    auVar158._24_8_ = (double)((ulonglong)auVar176._24_8_ ^ _UNK_150b54558);
    *(undefined1 (*) [16])(param_1 + 0x38) = auVar168;
    *(undefined1 (*) [16])(param_1 + 0x3a) = auVar158._16_16_;
    auVar186._8_8_ = 0;
    auVar186._0_8_ = param_1[0x10];
    auVar7 = vmovhps_avx(auVar186,param_1[0x13]);
    auVar191._0_8_ = SUB168(*(undefined1 (*) [16])(param_1 + 0x11),0) * auVar158._0_8_;
    auVar191._8_8_ = SUB168(*(undefined1 (*) [16])(param_1 + 0x11),8) * auVar158._8_8_;
    auVar191._16_8_ = auVar7._0_8_ * auVar158._16_8_;
    auVar191._24_8_ = auVar7._8_8_ * auVar158._24_8_;
    auVar215._16_16_ = auVar168;
    auVar215._0_16_ = auVar168;
    auVar26 = vperm2f128_avx(auVar158,auVar158,0x11);
    auVar190 = vshufpd_avx(auVar215,auVar26,9);
    auVar229._0_8_ = param_1[0x10] * auVar190._0_8_;
    auVar229._8_8_ = param_1[0x11] * auVar190._8_8_;
    auVar229._16_8_ = param_1[0x12] * auVar190._16_8_;
    auVar229._24_8_ = param_1[0x13] * auVar190._24_8_;
    auVar190 = vsubpd_avx(auVar191,auVar229);
    auVar225._0_8_ = auVar190._0_8_ + auVar190._0_8_;
    auVar225._8_8_ = auVar190._8_8_ + auVar190._8_8_;
    auVar230._16_8_ = auVar190._16_8_ + auVar190._16_8_;
    auVar230._0_16_ = auVar225;
    auVar230._24_8_ = auVar190._24_8_ + auVar190._24_8_;
    auVar190 = vshufpd_avx(auVar26,auVar26,0xf);
    auVar238._16_16_ = auVar225;
    auVar238._0_16_ = auVar225;
    auVar24 = vshufpd_avx(auVar238,ZEXT1632(auVar230._16_16_),1);
    dVar78 = auVar190._0_8_;
    dVar80 = auVar190._8_8_;
    dVar32 = auVar190._16_8_;
    dVar33 = auVar190._24_8_;
    auVar247._0_8_ = auVar225._0_8_ * auVar168._0_8_;
    auVar247._8_8_ = auVar225._8_8_ * auVar168._8_8_;
    auVar247._16_8_ = auVar230._16_8_ * auVar176._16_8_;
    auVar247._24_8_ = auVar230._24_8_ * auVar176._24_8_;
    auVar190 = vshufpd_avx(auVar215,ZEXT1632(auVar176._16_16_),1);
    auVar216._0_8_ = auVar225._0_8_ * auVar190._0_8_;
    auVar216._8_8_ = auVar225._8_8_ * auVar190._8_8_;
    auVar216._16_8_ = auVar230._16_8_ * auVar190._16_8_;
    auVar216._24_8_ = auVar230._24_8_ * auVar190._24_8_;
    auVar190 = vperm2f128_avx(auVar247,auVar247,1);
    auVar190 = vshufpd_avx(auVar190,auVar247,4);
    auVar190 = vsubpd_avx(auVar216,auVar190);
    auVar208._0_8_ = param_1[0x31] + param_1[0x10] + dVar78 * auVar24._0_8_ + auVar190._0_8_;
    auVar208._8_8_ = param_1[0x32] + param_1[0x11] + dVar80 * auVar24._8_8_ + auVar190._8_8_;
    auVar217._16_8_ = param_1[0x33] + param_1[0x12] + dVar32 * auVar24._16_8_ + auVar190._16_8_;
    auVar217._0_16_ = auVar208;
    auVar217._24_8_ = dVar33 * auVar24._24_8_ + 0.0 + auVar190._24_8_ + 0.0;
    *(undefined1 (*) [16])(param_1 + 0x23) = auVar208;
    dVar144 = (double)vmovlps_avx(auVar217._16_16_);
    param_1[0x25] = dVar144;
    auVar9 = vshufps_avx(auVar168,auVar168,0x44);
    auVar244._8_8_ = 0;
    auVar244._0_8_ = param_1[0xd];
    auVar7 = vmovhpd_avx(auVar244,param_1[0xc]);
    auVar251._8_8_ = 0;
    auVar251._0_8_ = param_1[0xf];
    auVar13 = vmovhpd_avx(auVar251,param_1[0xe]);
    dVar144 = auVar9._0_8_;
    dVar143 = auVar9._8_8_;
    auVar9 = vshufps_avx(auVar168,auVar168,0xee);
    dVar132 = auVar9._0_8_;
    dVar76 = auVar9._8_8_;
    param_1[0x2a] =
         auVar7._0_8_ * auVar26._0_8_ * dVar193 +
         param_1[0xe] * dVar132 * dVar37 + param_1[0xc] * dVar78 + auVar13._0_8_ * dVar144 * dVar131
    ;
    param_1[0x2b] =
         auVar7._8_8_ * auVar26._0_8_ * dVar194 +
         param_1[0xf] * dVar76 * dVar77 + param_1[0xd] * dVar80 + auVar13._8_8_ * dVar143 * dVar36;
    param_1[0x2c] =
         auVar13._0_8_ * auVar26._16_8_ * dVar204 +
         param_1[0xc] * dVar132 * dVar79 + param_1[0xe] * dVar32 + auVar7._0_8_ * dVar144 * dVar131;
    param_1[0x2d] =
         auVar13._8_8_ * auVar26._16_8_ * dVar241 +
         param_1[0xd] * dVar76 * dVar81 + param_1[0xf] * dVar33 + auVar7._8_8_ * dVar143 * dVar36;
    dVar131 = auVar158._0_8_ + auVar158._0_8_;
    dVar36 = auVar158._8_8_ + auVar158._8_8_;
    dVar37 = auVar158._16_8_ + auVar158._16_8_;
    dVar77 = auVar158._24_8_ + auVar158._24_8_;
    auVar159._0_8_ = dVar144 * dVar131;
    auVar159._8_8_ = dVar143 * dVar36;
    auVar159._16_8_ = dVar144 * dVar37;
    auVar159._24_8_ = dVar143 * dVar77;
    auVar169._0_8_ = dVar131 * dVar132;
    auVar169._8_8_ = dVar36 * dVar76;
    auVar177._16_8_ = dVar37 * dVar132;
    auVar177._0_16_ = auVar169;
    auVar177._24_8_ = dVar77 * dVar76;
    auVar64._0_8_ = dVar78 * dVar131;
    auVar64._8_8_ = dVar80 * dVar36;
    auVar64._16_8_ = dVar32 * dVar37;
    auVar64._24_8_ = dVar33 * dVar77;
    auVar190 = vperm2f128_avx(auVar177,auVar159,0x21);
    auVar190 = vshufpd_avx(auVar190,ZEXT1632(auVar159._16_16_),4);
    auVar85._0_8_ = auVar64._0_8_ + auVar190._0_8_;
    auVar85._8_8_ = auVar64._8_8_ + auVar190._8_8_;
    auVar98._16_8_ = auVar64._16_8_ + auVar190._16_8_;
    auVar98._0_16_ = auVar85;
    auVar98._24_8_ = auVar64._24_8_ + auVar190._24_8_;
    auVar26 = vsubpd_avx(auVar190,auVar64);
    auVar7 = vshufpd_avx(auVar169,auVar169,1);
    auVar149._8_8_ = auVar159._0_8_;
    auVar149._0_8_ = auVar159._0_8_;
    auVar160._16_16_ = auVar149;
    auVar160._0_16_ = auVar149;
    auVar190 = vblendpd_avx(auVar160,ZEXT1632(auVar7),1);
    auVar24 = vblendpd_avx(ZEXT1632(CONCAT88(auVar176._16_8_ * dVar37,auVar176._16_8_ * dVar37)),
                           ZEXT1632(auVar7) << 0x80,0xc);
    auVar65._0_8_ = auVar190._0_8_ + auVar24._0_8_;
    auVar65._8_8_ = auVar190._8_8_ + auVar24._8_8_;
    auVar65._16_8_ = auVar190._16_8_ + auVar24._16_8_;
    auVar65._24_8_ = auVar190._24_8_ + auVar24._24_8_;
    auVar140._8_8_ = __real_3ff0000000000000;
    auVar140._0_8_ = __real_3ff0000000000000;
    auVar140._16_8_ = __real_3ff0000000000000;
    auVar140._24_8_ = __real_3ff0000000000000;
    auVar24 = vsubpd_avx(auVar140,auVar65);
    dVar36 = auVar24._0_8_;
    dVar144 = param_1[0x1b];
    dVar131 = param_1[0x1d];
    auVar190 = vperm2f128_avx(auVar26,auVar26,0x11);
    auVar9 = ZEXT816(0) << 0x40;
    auVar7 = vmovhpd_avx(auVar9,param_1[0x1c]);
    dVar37 = auVar7._0_8_;
    dVar77 = auVar7._8_8_;
    auVar7 = vshufpd_avx(auVar85,auVar85,3);
    auVar170._0_8_ = auVar7._0_8_ * 0.0 + dVar37 * auVar190._0_8_ + dVar144 * dVar36;
    auVar170._8_8_ = auVar7._8_8_ * 0.0 + dVar77 * auVar190._0_8_ + dVar36 * 0.0;
    auVar178._16_8_ = auVar7._0_8_ * dVar131 + auVar190._16_8_ * 0.0 + dVar36 * 0.0;
    auVar178._0_16_ = auVar170;
    auVar178._24_8_ = auVar7._8_8_ * 0.0 + auVar190._16_8_ * 0.0 + dVar36 * 0.0;
    auVar190 = vperm2f128_avx(auVar98,auVar98,0x11);
    auVar135 = auVar24._0_16_;
    auVar7 = vshufpd_avx(auVar135,auVar135,3);
    dVar36 = auVar26._0_8_;
    auVar150._0_8_ = dVar36 * 0.0 + dVar37 * auVar7._0_8_ + dVar144 * auVar190._0_8_;
    auVar150._8_8_ = dVar36 * 0.0 + dVar77 * auVar7._8_8_ + auVar190._0_8_ * 0.0;
    auVar161._16_8_ = dVar36 * dVar131 + auVar7._0_8_ * 0.0 + auVar190._16_8_ * 0.0;
    auVar161._0_16_ = auVar150;
    auVar161._24_8_ = dVar36 * 0.0 + auVar7._8_8_ * 0.0 + auVar190._16_8_ * 0.0;
    auVar8 = auVar26._0_16_;
    auVar7 = vshufpd_avx(auVar8,auVar8,3);
    auVar190 = vperm2f128_avx(auVar24,auVar24,0x11);
    auVar16._0_8_ = dVar144 * auVar7._0_8_ + dVar37 * auVar85._0_8_ + auVar190._0_8_ * 0.0;
    auVar16._8_8_ = auVar7._8_8_ * 0.0 + dVar77 * auVar85._0_8_ + auVar190._0_8_ * 0.0;
    auVar27._16_8_ = auVar7._0_8_ * 0.0 + auVar85._0_8_ * 0.0 + auVar190._16_8_ * dVar131;
    auVar27._0_16_ = auVar16;
    auVar27._24_8_ = auVar7._8_8_ * 0.0 + auVar85._0_8_ * 0.0 + auVar190._16_8_ * 0.0;
    auVar13 = vunpcklpd_avx(auVar135,auVar98._16_16_);
    auVar7 = vshufpd_avx(auVar8,auVar8,1);
    auVar218._16_16_ = auVar7;
    auVar218._0_16_ = auVar16;
    auVar190 = vblendpd_avx(ZEXT1632(auVar13),auVar218,0xc);
    dVar77 = auVar190._0_8_;
    dVar79 = auVar190._8_8_;
    dVar81 = auVar190._16_8_;
    dVar193 = auVar190._24_8_;
    auVar13 = vshufpd_avx(auVar170,auVar170,3);
    auVar7 = vblendpd_avx(auVar135,auVar26._16_16_,1);
    dVar194 = auVar7._0_8_;
    dVar204 = auVar7._8_8_;
    auVar7 = vshufpd_avx(auVar85,auVar8,1);
    auVar26 = vperm2f128_avx(auVar178,auVar178,0x11);
    auVar190 = vblendpd_avx(auVar24,ZEXT1632(auVar7),3);
    dVar144 = auVar190._0_8_;
    dVar131 = auVar190._8_8_;
    dVar36 = auVar190._16_8_;
    dVar37 = auVar190._24_8_;
    auVar86._0_8_ = dVar77 * auVar170._0_8_ + dVar194 * auVar13._0_8_ + dVar144 * auVar26._0_8_;
    auVar86._8_8_ = dVar79 * auVar170._0_8_ + dVar204 * auVar13._8_8_ + dVar131 * auVar26._0_8_;
    auVar99._16_8_ =
         dVar81 * auVar170._0_8_ + auVar85._0_8_ * auVar13._0_8_ + dVar36 * auVar26._16_8_;
    auVar99._0_16_ = auVar86;
    auVar99._24_8_ =
         dVar193 * auVar170._0_8_ + auVar85._8_8_ * auVar13._8_8_ + dVar37 * auVar26._16_8_;
    auVar7 = vshufpd_avx(auVar150,auVar150,3);
    auVar190 = vperm2f128_avx(auVar161,auVar161,0x11);
    auVar111._0_8_ = dVar144 * auVar190._0_8_ + dVar77 * auVar150._0_8_ + dVar194 * auVar7._0_8_;
    auVar111._8_8_ = dVar131 * auVar190._0_8_ + dVar79 * auVar150._0_8_ + dVar204 * auVar7._8_8_;
    auVar123._16_8_ =
         dVar36 * auVar190._16_8_ + dVar81 * auVar150._0_8_ + auVar85._0_8_ * auVar7._0_8_;
    auVar123._0_16_ = auVar111;
    auVar123._24_8_ =
         dVar37 * auVar190._16_8_ + dVar193 * auVar150._0_8_ + auVar85._8_8_ * auVar7._8_8_;
    auVar7 = vshufpd_avx(auVar16,auVar16,3);
    auVar190 = vperm2f128_avx(auVar27,auVar27,0x11);
    auVar17._0_8_ = dVar144 * auVar190._0_8_ + dVar77 * auVar16._0_8_ + dVar194 * auVar7._0_8_;
    auVar17._8_8_ = dVar131 * auVar190._0_8_ + dVar79 * auVar16._0_8_ + dVar204 * auVar7._8_8_;
    auVar28._16_8_ =
         dVar36 * auVar190._16_8_ + dVar81 * auVar16._0_8_ + auVar85._0_8_ * auVar7._0_8_;
    auVar28._0_16_ = auVar17;
    auVar28._24_8_ =
         dVar37 * auVar190._16_8_ + dVar193 * auVar16._0_8_ + auVar85._8_8_ * auVar7._8_8_;
    *(undefined1 (*) [16])(param_1 + 0x58) = auVar86;
    dVar144 = (double)vmovlps_avx(auVar99._16_16_);
    param_1[0x5a] = dVar144;
    param_1[0x5b] = 0.0;
    *(undefined1 (*) [16])(param_1 + 0x5c) = auVar111;
    dVar144 = (double)vmovlpd_avx(auVar123._16_16_);
    param_1[0x5e] = dVar144;
    param_1[0x5f] = 0.0;
    *(undefined1 (*) [16])(param_1 + 0x60) = auVar17;
    dVar144 = (double)vmovlpd_avx(auVar28._16_16_);
    param_1[0x62] = dVar144;
    *(undefined1 (*) [16])(param_1 + 0x65) = auVar9;
    *(undefined1 (*) [16])(param_1 + 99) = auVar9;
  }
  param_1[0x67] = 1.0;
LAB_1409f8907:
  auVar137._0_8_ = param_1[0x38] * param_1[0x34] + param_1[0x3a] * param_1[0x36];
  auVar137._8_8_ = param_1[0x39] * param_1[0x35] + param_1[0x3b] * param_1[0x37];
  auVar7 = vshufpd_avx(auVar137,auVar137,1);
  auVar138._8_8_ = 0;
  auVar138._0_8_ = auVar137._0_8_ + auVar7._0_8_;
  auVar7 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar138,2);
  auVar175._8_8_ = 0;
  auVar175._0_8_ = __real_3ff0000000000000;
  auVar189._8_8_ = 0;
  auVar189._0_8_ = __real_bff0000000000000;
  auVar7 = vblendvpd_avx(auVar189,auVar175,auVar7);
  dVar144 = auVar7._0_8_;
  param_1[0x38] = param_1[0x38] * dVar144;
  param_1[0x39] = param_1[0x39] * dVar144;
  param_1[0x3a] = param_1[0x3a] * dVar144;
  param_1[0x3b] = param_1[0x3b] * dVar144;
  auVar92._0_8_ = param_1[0x2a] * param_1[0x26] + param_1[0x2c] * param_1[0x28];
  auVar92._8_8_ = param_1[0x2b] * param_1[0x27] + param_1[0x2d] * param_1[0x29];
  auVar7 = vshufpd_avx(auVar92,auVar92,1);
  auVar93._8_8_ = 0;
  auVar93._0_8_ = auVar92._0_8_ + auVar7._0_8_;
  auVar7 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar93,2);
  auVar7 = vblendvpd_avx(auVar189,auVar175,auVar7);
  dVar144 = auVar7._0_8_;
  param_1[0x2a] = param_1[0x2a] * dVar144;
  param_1[0x2b] = param_1[0x2b] * dVar144;
  param_1[0x2c] = param_1[0x2c] * dVar144;
  param_1[0x2d] = param_1[0x2d] * dVar144;
  *param_9 = dVar35 + *param_9;
  auVar20._0_8_ = dVar35 * *(double *)*param_6 + param_1[0x87];
  auVar20._8_8_ = dVar35 * *(double *)(*param_6 + 8) + param_1[0x88];
  auVar31._16_8_ = dVar35 * *(double *)(*param_6 + 0x10) + param_1[0x89];
  auVar31._0_16_ = auVar20;
  auVar31._24_8_ = dVar35 * 0.0 + 0.0;
  *(undefined1 (*) [16])(param_1 + 0x87) = auVar20;
  dVar144 = (double)vmovlps_avx(auVar31._16_16_);
  param_1[0x89] = dVar144;
  return;
}

// ApplyPointPositionConstraintKD___un_3C_s_5B_unFPBDJointSolver_5D__3E_CuniCuniREFs_5B__c_unFVector_5D_Cund_avx @ 1409f8a80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPointPositionConstraintKD___un_3C_s_5B_unFPBDJointSolver_5D__3E_CuniCuniREFs_5B__c_unFVector_5D_Cund_avx
               (longlong param_1,int param_2,int param_3,double *param_4,double param_5,
               undefined1 (*param_6) [32])

{
  double *pdVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  ulonglong *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [32];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar42 [16];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar39 [32];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 in_ZMM1 [64];
  double dVar61;
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  double dVar92;
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar84 [32];
  undefined1 auVar87 [32];
  double dVar91;
  double dVar93;
  undefined1 auVar88 [32];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  double dVar106;
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar104 [32];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  double dVar113;
  undefined1 auVar114 [16];
  double dVar141;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [32];
  undefined1 auVar119 [32];
  undefined1 auVar120 [32];
  undefined1 auVar121 [32];
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
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
  undefined1 auVar137 [32];
  undefined1 auVar138 [32];
  ulonglong uVar142;
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  double dVar149;
  ulonglong uVar164;
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  ulonglong uVar165;
  undefined1 auVar158 [32];
  undefined1 auVar159 [32];
  ulonglong uVar166;
  undefined1 auVar160 [32];
  undefined1 auVar162 [32];
  double dVar167;
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [32];
  undefined1 auVar171 [32];
  undefined1 auVar173 [32];
  undefined1 auVar174 [32];
  double dVar176;
  double dVar191;
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar187 [32];
  undefined1 auVar192 [16];
  undefined1 auVar193 [16];
  undefined1 auVar194 [32];
  undefined1 auVar196 [32];
  undefined1 auVar197 [32];
  undefined1 auVar198 [32];
  undefined1 auVar199 [32];
  undefined1 auVar200 [32];
  double dVar201;
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  double dVar207;
  undefined1 auVar204 [16];
  undefined1 auVar206 [32];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [32];
  undefined1 auVar211 [16];
  undefined1 auVar212 [16];
  undefined1 auVar213 [16];
  undefined1 auVar214 [16];
  double local_168;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  undefined1 local_148 [16];
  double dStack_138;
  double dStack_130;
  undefined1 auVar30 [32];
  undefined1 auVar38 [32];
  undefined1 auVar40 [32];
  undefined1 auVar41 [32];
  undefined1 auVar78 [32];
  undefined1 auVar79 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar103 [32];
  undefined1 auVar105 [32];
  undefined1 auVar139 [32];
  undefined1 auVar140 [32];
  undefined1 auVar148 [32];
  undefined1 auVar161 [32];
  undefined1 auVar163 [32];
  undefined1 auVar172 [32];
  undefined1 auVar175 [32];
  undefined1 auVar186 [32];
  undefined1 auVar188 [32];
  undefined1 auVar184 [24];
  undefined1 auVar185 [24];
  undefined1 auVar189 [32];
  undefined1 auVar190 [32];
  undefined1 auVar195 [32];
  undefined1 auVar205 [32];
  
  auVar66 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
  auVar169 = vpcmpgtd_avx(*(undefined1 (*) [16])(*param_6 + 0x10),auVar66);
  auVar179 = SUB3216(*param_6,0);
  auVar66 = vpcmpgtd_avx(auVar179,auVar66);
  auVar66 = vpor_avx(auVar66,auVar169);
  lVar18 = (longlong)param_3;
  lVar17 = lVar18 * 0x80;
  uVar142 = *(ulonglong *)(param_1 + 0x110 + lVar18 * 0x18);
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar142;
  auVar46._16_8_ = uVar142;
  auVar46._0_16_ = *(undefined1 (*) [16])(param_1 + 0x100 + lVar18 * 0x18);
  auVar46._24_8_ = 0;
  uVar142 = *(ulonglong *)(param_1 + 0x180 + lVar18 * 0x18);
  auVar62._8_8_ = 0;
  auVar62._0_8_ = uVar142;
  auVar210._16_8_ = uVar142;
  auVar210._0_16_ = *(undefined1 (*) [16])(param_1 + 0x170 + lVar18 * 0x18);
  auVar210._24_8_ = 0;
  auVar6 = vsubpd_avx(auVar46,auVar210);
  auVar143 = auVar6._0_16_;
  auVar169 = vshufpd_avx(auVar143,auVar143,1);
  auVar21 = vsubpd_avx(auVar21,auVar62);
  dVar167 = auVar21._0_8_;
  auVar63._0_8_ = (ulonglong)dVar167 ^ __real_8000000000000000;
  auVar63._8_8_ = auVar21._8_8_ ^ __real_8000000000000000;
  auVar43._0_8_ = (double)(auVar169._0_8_ ^ __real_8000000000000000);
  auVar43._8_8_ = (double)(auVar169._8_8_ ^ __real_8000000000000000);
  dVar149 = *(double *)(param_1 + 0x260 + lVar17);
  auVar211._8_8_ = 0;
  auVar211._0_8_ = dVar149;
  auVar184._16_8_ = *(double *)(param_1 + 0x268 + lVar17);
  auVar214._8_8_ = 0;
  auVar214._0_8_ = auVar184._16_8_;
  dVar61 = *(double *)(param_1 + 0x288 + lVar17);
  auVar202._8_8_ = dVar61;
  auVar202._0_8_ = dVar61;
  dVar106 = auVar6._0_8_;
  auVar20._0_8_ = (ulonglong)dVar106 ^ __real_8000000000000000;
  dVar113 = auVar6._8_8_;
  auVar20._8_8_ = (ulonglong)dVar113 ^ __real_8000000000000000;
  dVar91 = *(double *)(param_1 + 0x290 + lVar17);
  auVar107._8_8_ = dVar91;
  auVar107._0_8_ = dVar91;
  auVar46 = vperm2f128_avx(auVar6,auVar6,0x11);
  dVar93 = auVar46._0_8_;
  dVar141 = auVar46._16_8_;
  auVar169 = vunpcklpd_avx(auVar214,auVar211);
  auVar158._0_8_ = dVar93 * auVar169._0_8_;
  auVar158._8_8_ = dVar93 * auVar169._8_8_;
  auVar158._16_8_ = dVar141 * dVar149;
  auVar158._24_8_ = dVar141 * 0.0;
  auVar169 = vshufpd_avx(auVar143,auVar143,3);
  dVar92 = *(double *)(param_1 + 0x280 + lVar17);
  auVar94._8_8_ = dVar92;
  auVar94._0_8_ = dVar92;
  auVar62 = vunpcklpd_avx(auVar202,auVar94);
  dVar176 = auVar169._0_8_;
  auVar194._0_8_ = dVar176 * auVar62._0_8_;
  dVar191 = auVar169._8_8_;
  auVar194._8_8_ = dVar191 * auVar62._8_8_;
  auVar194._16_8_ = dVar176 * dVar92;
  auVar194._24_8_ = dVar191 * dVar92;
  auVar46 = vsubpd_avx(auVar194,auVar158);
  auVar62 = vunpcklpd_avx(auVar63,auVar21);
  auVar118._0_8_ = dVar93 * dVar61;
  auVar118._8_8_ = dVar93 * dVar61;
  auVar118._16_8_ = dVar141 * auVar184._16_8_;
  auVar118._24_8_ = dVar141 * 0.0;
  auVar159._0_8_ = dVar176 * dVar91;
  auVar159._8_8_ = dVar191 * dVar91;
  auVar159._16_8_ = dVar176 * dVar61;
  auVar159._24_8_ = dVar191 * dVar61;
  auVar71 = vsubpd_avx(auVar159,auVar118);
  auVar169 = vshufpd_avx(auVar143,auVar20,1);
  auVar192._0_8_ =
       *(double *)(param_1 + 0xf0 + lVar18 * 8) +
       auVar62._0_8_ * auVar46._0_8_ + auVar169._0_8_ * auVar71._0_8_;
  auVar192._8_8_ = auVar62._8_8_ * auVar46._8_8_ + auVar169._8_8_ * auVar71._8_8_ + 0.0;
  auVar195._16_8_ = auVar43._0_8_ * auVar46._16_8_ + dVar106 * auVar71._16_8_ + 0.0;
  auVar195._0_16_ = auVar192;
  auVar195._24_8_ = auVar43._8_8_ * auVar46._24_8_ + dVar113 * auVar71._24_8_ + 0.0;
  dVar61 = *(double *)(param_1 + 0x240 + lVar17);
  auVar169 = vshufps_avx(auVar20,auVar20,0x44);
  auVar21 = vunpcklpd_avx(auVar21,auVar43);
  auVar62 = vunpcklpd_avx(auVar94,auVar211);
  auVar63 = vunpcklpd_avx(auVar107,auVar202);
  pauVar2 = (undefined1 (*) [16])(param_1 + 0x100 + lVar18 * 0x18);
  pauVar3 = (undefined1 (*) [16])(param_1 + 0x240 + lVar17);
  auVar42._8_8_ = dVar106;
  auVar42._0_8_ = dVar106;
  auVar119._16_16_ = auVar42;
  auVar119._0_16_ = auVar42;
  auVar46 = vblendpd_avx(auVar119,ZEXT1632(auVar20),1);
  dVar91 = *(double *)(param_1 + 0xf0 + lVar18 * 8);
  auVar71 = vblendpd_avx(auVar195,
                         ___ymm_0010000000000000000000000000000000000000000000000000000000000000,8);
  auVar203._0_8_ =
       *(double *)(param_1 + 0xf0 + lVar18 * 8) +
       auVar21._0_8_ * (dVar61 * dVar167 + auVar169._0_8_ * dVar92) +
       auVar46._0_8_ * (dVar167 * auVar62._0_8_ + auVar169._0_8_ * auVar63._0_8_);
  auVar203._8_8_ =
       auVar21._8_8_ * (dVar61 * dVar167 + auVar169._8_8_ * dVar92) +
       auVar46._8_8_ * (dVar167 * auVar62._8_8_ + auVar169._8_8_ * auVar63._8_8_) + 0.0;
  auVar205._16_8_ =
       dVar91 + auVar43._0_8_ * (dVar61 * auVar43._0_8_ + dVar106 * dVar149) +
                auVar46._16_8_ * (auVar43._0_8_ * dVar149 + dVar106 * auVar184._16_8_);
  auVar205._0_16_ = auVar203;
  auVar205._24_8_ =
       auVar43._8_8_ * (dVar61 * auVar43._8_8_ + dVar113 * 0.0) +
       auVar46._24_8_ * (auVar43._8_8_ * 0.0 + dVar113 * 0.0) + 0.0;
  auVar26._8_8_ = __real_0010000000000000;
  auVar26._0_8_ = __real_0010000000000000;
  auVar26._16_8_ = __real_0010000000000000;
  auVar26._24_8_ = __real_0010000000000000;
  auVar47._0_8_ =
       auVar71._0_8_ & ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
  auVar47._8_8_ = auVar71._8_8_ & _UNK_150aa8f48;
  auVar47._16_8_ = auVar71._16_8_ & _UNK_150aa8f50;
  auVar47._24_8_ = auVar71._24_8_ & _UNK_150aa8f58;
  auVar71._8_8_ = __real_3e45798ee2308c3a;
  auVar71._0_8_ = __real_3e45798ee2308c3a;
  auVar71._16_8_ = __real_3e45798ee2308c3a;
  auVar71._24_8_ = __real_3e45798ee2308c3a;
  auVar46 = vcmppd_avx(auVar47,auVar71,6);
  auVar169 = auVar195._16_16_;
  if ((((SUB161(auVar66 >> 0x1f,0) & 1) == 0 && (SUB161(auVar66 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar66 >> 0x5f,0) & 1) == 0) && -1 < auVar66[0xf]) {
    auVar71 = vcmppd_avx(auVar26,auVar71,6);
    auVar66 = vpor_avx(auVar46._16_16_,auVar71._16_16_);
    auVar66 = vpackssdw_avx(auVar46._0_16_ | auVar71._0_16_,auVar66);
    if ((((SUB161(auVar66 >> 0x1f,0) & 1) == 0 && (SUB161(auVar66 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar66 >> 0x5f,0) & 1) == 0) && -1 < auVar66[0xf]) {
      auVar66 = vshufpd_avx(auVar192,auVar192,1);
      auVar31._16_16_ = auVar203;
      auVar31._0_16_ = auVar66;
      auVar46 = vblendpd_avx(auVar205,
                             ___ymm_0010000000000000000000000000000000000000000000000000000000000000
                             ,0xc);
      auVar46 = vshufpd_avx(auVar31,auVar46,0xc);
      auVar32._0_8_ =
           auVar46._0_8_ & ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
      auVar32._8_8_ = auVar46._8_8_ & _UNK_150aa8f48;
      auVar32._16_8_ = auVar46._16_8_ & _UNK_150aa8f50;
      auVar32._24_8_ = auVar46._24_8_ & _UNK_150aa8f58;
      auVar46 = vcmppd_avx(auVar32,
                           ___ymm_3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a,6
                          );
      auVar66 = vpackssdw_avx(auVar46._0_16_,auVar46._16_16_);
      if ((((SUB161(auVar66 >> 0x1f,0) & 1) != 0 || (SUB161(auVar66 >> 0x3f,0) & 1) != 0) ||
          (SUB161(auVar66 >> 0x5f,0) & 1) != 0) || auVar66[0xf] < '\0') goto LAB_1409f912a;
      auVar46 = vperm2f128_avx(auVar195,
                               ___ymm_0010000000000000000000000000000000000000000000000000000000000000
                               ,0x31);
      auVar46 = vblendpd_avx(auVar46,auVar205,6);
      auVar33._0_8_ =
           auVar46._0_8_ & ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
      auVar33._8_8_ = auVar46._8_8_ & _UNK_150aa8f48;
      auVar33._16_8_ = auVar46._16_8_ & _UNK_150aa8f50;
      auVar33._24_8_ = auVar46._24_8_ & _UNK_150aa8f58;
      auVar46 = vcmppd_avx(auVar33,
                           ___ymm_3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a,6
                          );
      auVar66 = vpackssdw_avx(auVar46._0_16_,auVar46._16_16_);
      if ((((SUB161(auVar66 >> 0x1f,0) & 1) != 0 || (SUB161(auVar66 >> 0x3f,0) & 1) != 0) ||
          (SUB161(auVar66 >> 0x5f,0) & 1) != 0) || auVar66[0xf] < '\0') goto LAB_1409f912a;
      auVar66 = ZEXT816(0) << 0x40;
      auVar152._8_8_ = 0;
      auVar152._0_8_ = __real_3ff0000000000000;
      auVar62 = ZEXT816(0);
      auVar180 = ZEXT816(0) << 0x40;
      auVar42 = ZEXT816(0) << 0x40;
      auVar21 = ZEXT816(0);
      auVar169 = ZEXT816(0) << 0x40;
      auVar23 = auVar152;
      auVar153 = auVar152;
    }
    else {
LAB_1409f912a:
      auVar46 = vperm2f128_avx(auVar195,auVar205,0x31);
      auVar71 = vunpcklpd_avx(auVar195,auVar46);
      auVar8._8_8_ = _UNK_150b54548;
      auVar8._0_8_ = ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
      auVar8._16_8_ = _UNK_150b54550;
      auVar8._24_8_ = _UNK_150b54558;
      auVar46 = vblendpd_avx(auVar205,auVar8,0xe);
      auVar34._0_8_ = auVar71._0_8_ * auVar46._0_8_;
      auVar34._8_8_ = auVar71._8_8_ * auVar46._8_8_;
      auVar34._16_8_ = auVar71._16_8_ * auVar46._16_8_;
      auVar34._24_8_ = auVar71._24_8_ * auVar46._24_8_;
      auVar66 = vshufpd_avx(auVar192,auVar192,1);
      auVar21 = ZEXT816(0);
      auVar80._16_16_ = auVar203;
      auVar80._0_16_ = auVar66;
      auVar71 = vshufpd_avx(auVar80,ZEXT1632(auVar21),4);
      auVar46 = vblendpd_avx(ZEXT1632(auVar66),auVar205,2);
      auVar51._0_8_ = auVar71._0_8_ * auVar46._0_8_;
      auVar51._8_8_ = auVar71._8_8_ * auVar46._8_8_;
      auVar51._16_8_ = auVar71._16_8_ * auVar46._16_8_;
      auVar51._24_8_ = auVar71._24_8_ * auVar46._24_8_;
      auVar81._8_8_ = auVar203._0_8_;
      auVar81._0_8_ = auVar203._0_8_;
      auVar81._16_8_ = auVar205._16_8_;
      auVar81._24_8_ = auVar205._16_8_;
      auVar46 = vblendpd_avx(auVar81,
                             ___ymm_000000000000000000000000000000003ff00000000000003ff0000000000000
                             ,3);
      auVar47 = vsubpd_avx(auVar34,auVar51);
      auVar71 = vblendpd_avx(ZEXT1632(auVar169),auVar205,2);
      auVar26 = vblendpd_avx(ZEXT1632(auVar21),auVar195,0xc);
      auVar129._16_16_ = auVar203;
      auVar129._0_16_ = auVar21;
      auVar26 = vblendpd_avx(auVar26,auVar129,10);
      auVar179._0_8_ =
           auVar46._0_8_ * auVar71._0_8_ +
           auVar26._0_8_ * ___ymm_8000000000000000800000000000000080000000000000008000000000000000;
      auVar179._8_8_ = auVar46._8_8_ * auVar71._8_8_ + auVar26._8_8_ * _UNK_150b513e8;
      auVar188._16_8_ = auVar46._16_8_ * auVar71._16_8_ + auVar26._16_8_ * _UNK_150b513f0;
      auVar188._0_16_ = auVar179;
      auVar188._24_8_ = auVar46._24_8_ * auVar71._24_8_ + auVar26._24_8_ * _UNK_150b513f8;
      auVar35._16_16_ = auVar203;
      auVar35._0_16_ = auVar169;
      auVar119 = ZEXT1632(auVar21);
      auVar71 = vshufpd_avx(auVar35,auVar119,4);
      auVar52._0_8_ = auVar203._0_8_ * auVar71._0_8_;
      auVar52._8_8_ = auVar203._0_8_ * auVar71._8_8_;
      auVar52._16_8_ = auVar192._0_8_ * auVar71._16_8_;
      auVar52._24_8_ = auVar192._0_8_ * auVar71._24_8_;
      auVar66 = vshufpd_avx(auVar192,auVar192,3);
      auVar46 = vunpckhpd_avx(auVar205,auVar119);
      auVar46 = vblendpd_avx(auVar46,auVar195,4);
      auVar82._0_8_ = auVar66._0_8_ * auVar46._0_8_;
      auVar82._8_8_ = auVar66._8_8_ * auVar46._8_8_;
      auVar82._16_8_ = auVar66._0_8_ * auVar46._16_8_;
      auVar82._24_8_ = auVar66._8_8_ * auVar46._24_8_;
      auVar118 = vsubpd_avx(auVar52,auVar82);
      dVar149 = auVar47._0_8_;
      auVar26 = vperm2f128_avx(auVar47,auVar47,0x11);
      auVar46 = vshufpd_avx(auVar26,auVar26,0xf);
      auVar21 = auVar47._0_16_;
      auVar66 = vshufpd_avx(auVar21,auVar21,3);
      auVar83._0_8_ = dVar149 * auVar46._0_8_ + auVar66._0_8_ * auVar26._0_8_;
      auVar83._8_8_ = dVar149 * auVar46._8_8_ + auVar66._8_8_ * auVar26._0_8_;
      auVar83._16_8_ = dVar149 * auVar46._16_8_ + auVar66._0_8_ * auVar26._16_8_;
      auVar83._24_8_ = dVar149 * auVar46._24_8_ + auVar66._8_8_ * auVar26._16_8_;
      auVar130._16_16_ = auVar179;
      auVar130._0_16_ = auVar179;
      auVar26 = vperm2f128_avx(auVar188,auVar188,0x11);
      auVar26 = vshufpd_avx(auVar130,auVar26,0xc);
      auVar184._16_8_ = auVar118._0_8_;
      auVar131._0_8_ = auVar184._16_8_ * auVar26._0_8_;
      dVar92 = auVar118._8_8_;
      auVar131._8_8_ = dVar92 * auVar26._8_8_;
      dVar93 = auVar118._16_8_;
      auVar131._16_8_ = dVar93 * auVar26._16_8_;
      dVar141 = auVar118._24_8_;
      auVar131._24_8_ = dVar141 * auVar26._24_8_;
      auVar26 = vperm2f128_avx(auVar131,auVar131,1);
      auVar132._0_8_ = auVar131._0_8_ + auVar26._0_8_;
      auVar132._8_8_ = auVar131._8_8_ + auVar26._8_8_;
      auVar132._16_8_ = auVar131._16_8_ + auVar26._16_8_;
      auVar132._24_8_ = auVar131._24_8_ + auVar26._24_8_;
      auVar26 = vperm2f128_avx(auVar132,auVar132,1);
      auVar26 = vshufpd_avx(auVar132,auVar26,5);
      auVar133._0_8_ = auVar132._0_8_ + auVar26._0_8_;
      auVar133._8_8_ = auVar132._8_8_ + auVar26._8_8_;
      auVar133._16_8_ = auVar132._16_8_ + auVar26._16_8_;
      auVar133._24_8_ = auVar132._24_8_ + auVar26._24_8_;
      auVar26 = vsubpd_avx(auVar83,auVar133);
      auVar66 = ZEXT816(0) << 0x40;
      if ((auVar26._0_8_ != 0.0) || (NAN(auVar26._0_8_))) {
        auVar84._0_8_ = dVar149 * 0.0;
        auVar84._8_8_ = dVar149 * 0.0;
        auVar84._16_8_ = auVar47._16_8_ * 0.0;
        auVar84._24_8_ = auVar47._16_8_ * 0.0;
        auVar158 = vperm2f128_avx(auVar84,auVar84,0x11);
        auVar134._24_8_ = auVar203._0_8_;
        auVar134._16_8_ = auVar203._0_8_;
        auVar134._0_16_ = auVar169;
        auVar47 = vblendpd_avx(auVar195,auVar134,0xc);
        auVar135._0_8_ = auVar179._0_8_ * auVar47._0_8_;
        auVar135._8_8_ = auVar179._0_8_ * auVar47._8_8_;
        auVar135._16_8_ = auVar179._0_8_ * auVar47._16_8_;
        auVar135._24_8_ = auVar179._0_8_ * auVar47._24_8_;
        auVar36._16_16_ = auVar179;
        auVar36._0_16_ = auVar179;
        auVar173._0_8_ = auVar192._0_8_ * auVar179._0_8_;
        auVar173._8_8_ = auVar192._0_8_ * auVar179._8_8_;
        auVar173._16_8_ = auVar192._0_8_ * auVar179._0_8_;
        auVar173._24_8_ = auVar192._8_8_ * auVar179._8_8_;
        auVar47 = vsubpd_avx(auVar135,auVar173);
        auVar194 = vsubpd_avx(auVar158,auVar47);
        auVar66 = vshufpd_avx(auVar21,auVar21,3);
        local_148._8_8_ = auVar66._8_8_ * 0.0;
        local_148._0_8_ = auVar66._0_8_ * 0.0;
        auVar66._0_8_ = auVar184._16_8_ * __real_3ff0000000000000;
        auVar66._8_8_ = dVar92 * 0.0;
        auVar85._16_8_ = dVar93 * 0.0;
        auVar85._0_16_ = auVar66;
        auVar85._24_8_ = dVar141 * 0.0;
        auVar174._16_16_ = auVar66;
        auVar174._0_16_ = auVar179;
        auVar159 = vshufpd_avx(auVar85,auVar174,4);
        auVar169._0_8_ =
             auVar184._16_8_ *
             ___ymm_00000000000000003ff000000000000000000000000000000000000000000000;
        auVar169._8_8_ = dVar92 * _UNK_150aa8e88;
        auVar175._16_8_ = dVar93 * _DAT_150aa8e90;
        auVar175._0_16_ = auVar169;
        auVar175._24_8_ = dVar141 * _UNK_150aa8e98;
        auVar136._16_16_ = auVar169;
        auVar136._0_16_ = auVar179;
        auVar47 = vblendpd_avx(auVar175,auVar136,8);
        auVar66 = vshufpd_avx(auVar192,auVar203,1);
        auVar53._0_8_ = auVar192._0_8_ * auVar46._0_8_;
        auVar53._8_8_ = auVar192._8_8_ * auVar46._8_8_;
        auVar53._16_8_ = auVar66._0_8_ * auVar46._16_8_;
        auVar53._24_8_ = auVar66._8_8_ * auVar46._24_8_;
        auVar158 = vperm2f128_avx(auVar188,auVar188,0x11);
        auVar46 = vblendpd_avx(auVar36,auVar158,10);
        auVar196._8_8_ = auVar195._16_8_;
        auVar196._0_8_ = auVar195._16_8_;
        auVar196._16_16_ = auVar203;
        auVar119 = vblendpd_avx(auVar196,auVar119,5);
        auVar158 = vblendpd_avx(auVar158,auVar36,10);
        auVar37._0_8_ = auVar46._0_8_ * auVar71._0_8_ + auVar119._0_8_ * auVar158._0_8_;
        auVar37._8_8_ = auVar46._8_8_ * auVar71._8_8_ + auVar119._8_8_ * auVar158._8_8_;
        auVar37._16_8_ = auVar46._16_8_ * auVar71._16_8_ + auVar119._16_8_ * auVar158._16_8_;
        auVar37._24_8_ = auVar46._24_8_ * auVar71._24_8_ + auVar119._24_8_ * auVar158._24_8_;
        auVar71 = vsubpd_avx(auVar53,auVar37);
        auVar46 = vdivpd_avx(___ymm_3ff0000000000000bff0000000000000bff00000000000003ff0000000000000
                             ,auVar26);
        auVar23._0_8_ = auVar71._0_8_ * auVar46._0_8_;
        auVar23._8_8_ = auVar71._8_8_ * auVar46._8_8_;
        auVar184._16_8_ = auVar46._16_8_;
        auVar38._16_8_ = auVar71._16_8_ * auVar184._16_8_;
        auVar38._0_16_ = auVar23;
        dVar92 = auVar46._24_8_;
        auVar38._24_8_ = auVar71._24_8_ * dVar92;
        auVar169 = vshufpd_avx(auVar23,auVar23,1);
        auVar42 = auVar38._16_16_;
        auVar152 = vshufpd_avx(auVar42,auVar42,1);
        auVar66 = vsubpd_avx(auVar159._16_16_,auVar47._16_16_);
        auVar66 = vsubpd_avx(local_148,auVar66);
        auVar180._0_8_ = auVar66._0_8_ * auVar184._16_8_;
        auVar180._8_8_ = auVar66._8_8_ * dVar92;
        auVar21 = vshufpd_avx(auVar180,auVar180,1);
        local_168 = auVar194._0_8_;
        dStack_160 = auVar194._8_8_;
        dStack_158 = auVar194._16_8_;
        dStack_150 = auVar194._24_8_;
        auVar67._0_8_ = auVar46._0_8_ * local_168;
        auVar67._8_8_ = auVar46._8_8_ * dStack_160;
        auVar86._16_8_ = auVar184._16_8_ * dStack_158;
        auVar86._0_16_ = auVar67;
        auVar86._24_8_ = dVar92 * dStack_150;
        auVar66 = vshufpd_avx(auVar67,auVar67,1);
        auVar62 = vshufpd_avx(auVar86._16_16_,auVar86._16_16_,1);
        auVar63 = vshufpd_avx(auVar118._16_16_,auVar118._16_16_,1);
        auVar20 = vshufpd_avx(auVar118._0_16_,auVar118._0_16_,1);
        auVar43 = vshufpd_avx(auVar46._16_16_,auVar46._16_16_,1);
        auVar153._8_8_ = 0;
        auVar153._0_8_ = (dVar149 - (auVar63._0_8_ * 0.0 + auVar20._0_8_ * 0.0)) * auVar43._0_8_;
      }
      else {
        auVar152._8_8_ = 0;
        auVar152._0_8_ = __real_3ff0000000000000;
        auVar62 = ZEXT816(0) << 0x40;
        auVar180 = ZEXT816(0) << 0x40;
        auVar42 = ZEXT816(0) << 0x40;
        auVar21 = ZEXT816(0);
        auVar169 = ZEXT816(0) << 0x40;
        auVar23 = auVar152;
        auVar153 = auVar152;
      }
    }
    auVar66 = vunpcklpd_avx(auVar62,auVar66);
    auVar62 = vunpcklpd_avx(auVar42,auVar23);
    auVar169 = vunpcklpd_avx(auVar152,auVar169);
    dVar149 = *param_4;
    auVar184._16_8_ = param_4[1];
    dVar92 = param_4[2];
    auVar182._0_8_ =
         param_5 * (auVar169._0_8_ * dVar149 + auVar62._0_8_ * auVar184._16_8_ +
                   auVar66._0_8_ * dVar92);
    auVar182._8_8_ =
         param_5 * (auVar169._8_8_ * dVar149 + auVar62._8_8_ * auVar184._16_8_ +
                   auVar66._8_8_ * dVar92);
    auVar185._16_8_ =
         param_5 * (auVar21._0_8_ * dVar149 + auVar180._0_8_ * auVar184._16_8_ +
                   auVar153._0_8_ * dVar92);
    auVar185._0_16_ = auVar182;
    auVar190._24_8_ =
         param_5 * (auVar21._8_8_ * dVar149 + auVar180._8_8_ * auVar184._16_8_ +
                   auVar153._8_8_ * dVar92);
    auVar190._0_24_ = auVar185;
    auVar39._0_8_ = auVar182._0_8_ * dVar91;
    auVar39._8_8_ = auVar182._8_8_ * dVar91;
    auVar39._16_8_ = auVar185._16_8_ * dVar91;
    auVar39._24_8_ = auVar190._24_8_ * dVar91;
    auVar56._16_16_ = auVar182;
    auVar56._0_16_ = auVar182;
    auVar46 = vshufpd_avx(auVar56,ZEXT1632(auVar190._16_16_),1);
    auVar137._16_16_ = auVar143;
    auVar137._0_16_ = auVar143;
    auVar71 = vshufpd_avx(auVar137,ZEXT1632(auVar6._16_16_),1);
    auVar88._0_8_ = auVar182._0_8_ * auVar71._0_8_;
    auVar88._8_8_ = auVar182._8_8_ * auVar71._8_8_;
    auVar88._16_8_ = auVar185._16_8_ * auVar71._16_8_;
    auVar88._24_8_ = auVar190._24_8_ * auVar71._24_8_;
    auVar57._0_8_ = auVar46._0_8_ * dVar106;
    auVar57._8_8_ = auVar46._8_8_ * dVar113;
    auVar57._16_8_ = auVar46._16_8_ * auVar6._16_8_;
    auVar57._24_8_ = auVar46._24_8_ * auVar6._24_8_;
    auVar71 = vsubpd_avx(auVar88,auVar57);
    dVar149 = auVar71._0_8_;
    auVar143._8_8_ = dVar61;
    auVar143._0_8_ = dVar61;
    auVar6._16_8_ = dVar61;
    auVar6._0_16_ = auVar143;
    auVar6._24_8_ = dVar61;
    auVar66 = vmovhpd_avx(auVar143,*(undefined8 *)(*pauVar3 + 8));
    uVar5 = *(undefined8 *)pauVar3[1];
    auVar138._8_8_ = uVar5;
    auVar138._0_8_ = uVar5;
    auVar138._16_8_ = uVar5;
    auVar138._24_8_ = uVar5;
    auVar46 = vblendpd_avx(auVar6,ZEXT1632(auVar66),3);
    auVar46 = vblendpd_avx(auVar46,auVar138,4);
    auVar66 = vshufpd_avx(auVar71._0_16_,auVar71._0_16_,3);
    auVar169 = vunpcklpd_avx(auVar211,auVar214);
    auVar71 = vperm2f128_avx(auVar71,auVar71,0x11);
    dVar61 = auVar46._0_8_ * auVar66._0_8_ + auVar71._0_8_ * auVar169._0_8_;
    dVar91 = auVar46._8_8_ * auVar66._8_8_ + auVar71._0_8_ * auVar169._8_8_;
    dVar92 = auVar46._16_8_ * auVar66._0_8_ + auVar71._16_8_ * *(double *)pauVar3[3];
    dVar93 = auVar46._24_8_ * auVar66._8_8_ + auVar71._16_8_ * 0.0;
    auVar169 = vunpcklpd_avx(auVar94,auVar202);
    auVar66 = vblendps_avx((undefined1  [16])0x0,auVar107,3);
    auVar102._16_16_ = auVar66;
    auVar102._0_16_ = auVar169;
    auVar184._16_8_ = auVar185._16_8_;
    goto LAB_1409f965a;
  }
  auVar66 = vpackssdw_avx(auVar46._0_16_,auVar46._16_16_);
  auVar46 = vcmppd_avx(auVar26,auVar71,6);
  auVar21 = vpackssdw_avx(auVar46._0_16_,auVar46._16_16_);
  auVar66 = vpackssdw_avx(auVar66,auVar21);
  auVar63 = SUB3216(*param_6,0x10);
  auVar62 = vpcmpeqd_avx(auVar63,(undefined1  [16])0x0);
  auVar21 = vpcmpeqd_avx(auVar179,(undefined1  [16])0x0);
  auVar21 = vpackssdw_avx(auVar21,auVar62);
  auVar66 = vpandn_avx(auVar21,auVar66);
  if ((((((((((((((((SUB161(auVar66 >> 7,0) & 1) == 0 && (SUB161(auVar66 >> 0xf,0) & 1) == 0) &&
                  (SUB161(auVar66 >> 0x17,0) & 1) == 0) && (SUB161(auVar66 >> 0x1f,0) & 1) == 0) &&
                (SUB161(auVar66 >> 0x27,0) & 1) == 0) && (SUB161(auVar66 >> 0x2f,0) & 1) == 0) &&
              (SUB161(auVar66 >> 0x37,0) & 1) == 0) && (SUB161(auVar66 >> 0x3f,0) & 1) == 0) &&
            (SUB161(auVar66 >> 0x47,0) & 1) == 0) && (SUB161(auVar66 >> 0x4f,0) & 1) == 0) &&
          (SUB161(auVar66 >> 0x57,0) & 1) == 0) && (SUB161(auVar66 >> 0x5f,0) & 1) == 0) &&
        (SUB161(auVar66 >> 0x67,0) & 1) == 0) && (SUB161(auVar66 >> 0x6f,0) & 1) == 0) &&
      (SUB161(auVar66 >> 0x77,0) & 1) == 0) && -1 < auVar66[0xf]) {
    auVar66 = vpcmpeqd_avx(auVar179,(undefined1  [16])0x0);
    auVar66 = vpackssdw_avx(auVar66,auVar62);
    auVar21 = vshufpd_avx(auVar192,auVar192,1);
    auVar46 = vblendpd_avx(auVar205,
                           ___ymm_0010000000000000000000000000000000000000000000000000000000000000,
                           0xc);
    auVar120._16_16_ = auVar203;
    auVar120._0_16_ = auVar21;
    auVar46 = vshufpd_avx(auVar120,auVar46,0xc);
    auVar121._0_8_ =
         auVar46._0_8_ & ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
    auVar121._8_8_ = auVar46._8_8_ & _UNK_150aa8f48;
    auVar121._16_8_ = auVar46._16_8_ & _UNK_150aa8f50;
    auVar121._24_8_ = auVar46._24_8_ & _UNK_150aa8f58;
    auVar46 = vcmppd_avx(auVar121,
                         ___ymm_3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a,6);
    auVar21 = vpackssdw_avx(auVar46._0_16_,auVar46._16_16_);
    auVar21 = vpackssdw_avx(auVar21,(undefined1  [16])0x0);
    auVar66 = vpandn_avx(auVar66,auVar21);
    if ((((((((((((((((SUB161(auVar66 >> 7,0) & 1) != 0 || (SUB161(auVar66 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar66 >> 0x17,0) & 1) != 0) || (SUB161(auVar66 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar66 >> 0x27,0) & 1) != 0) || (SUB161(auVar66 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar66 >> 0x37,0) & 1) != 0) || (SUB161(auVar66 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar66 >> 0x47,0) & 1) != 0) || (SUB161(auVar66 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar66 >> 0x57,0) & 1) != 0) || (SUB161(auVar66 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar66 >> 0x67,0) & 1) != 0) || (SUB161(auVar66 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar66 >> 0x77,0) & 1) != 0) || auVar66[0xf] < '\0') goto LAB_1409f8dfc;
    auVar66 = vpcmpeqd_avx(auVar63,(undefined1  [16])0x0);
    auVar21 = vpcmpeqd_avx(auVar179,(undefined1  [16])0x0);
    auVar46 = vperm2f128_avx(auVar195,
                             ___ymm_0010000000000000000000000000000000000000000000000000000000000000
                             ,0x31);
    auVar66 = vpackssdw_avx(auVar21,auVar66);
    auVar46 = vblendpd_avx(auVar46,auVar205,6);
    auVar72._0_8_ =
         auVar46._0_8_ & ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
    auVar72._8_8_ = auVar46._8_8_ & _UNK_150aa8f48;
    auVar72._16_8_ = auVar46._16_8_ & _UNK_150aa8f50;
    auVar72._24_8_ = auVar46._24_8_ & _UNK_150aa8f58;
    auVar46 = vcmppd_avx(auVar72,
                         ___ymm_3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a,6);
    auVar21 = vpackssdw_avx(auVar46._0_16_,auVar46._16_16_);
    auVar21 = vpackssdw_avx(auVar21,(undefined1  [16])0x0);
    auVar66 = vpandn_avx(auVar66,auVar21);
    if ((((((((((((((((SUB161(auVar66 >> 7,0) & 1) != 0 || (SUB161(auVar66 >> 0xf,0) & 1) != 0) ||
                    (SUB161(auVar66 >> 0x17,0) & 1) != 0) || (SUB161(auVar66 >> 0x1f,0) & 1) != 0)
                  || (SUB161(auVar66 >> 0x27,0) & 1) != 0) || (SUB161(auVar66 >> 0x2f,0) & 1) != 0)
                || (SUB161(auVar66 >> 0x37,0) & 1) != 0) || (SUB161(auVar66 >> 0x3f,0) & 1) != 0) ||
              (SUB161(auVar66 >> 0x47,0) & 1) != 0) || (SUB161(auVar66 >> 0x4f,0) & 1) != 0) ||
            (SUB161(auVar66 >> 0x57,0) & 1) != 0) || (SUB161(auVar66 >> 0x5f,0) & 1) != 0) ||
          (SUB161(auVar66 >> 0x67,0) & 1) != 0) || (SUB161(auVar66 >> 0x6f,0) & 1) != 0) ||
        (SUB161(auVar66 >> 0x77,0) & 1) != 0) || auVar66[0xf] < '\0') goto LAB_1409f8dfc;
    auVar66 = ZEXT816(0) << 0x40;
    auVar150._8_8_ = 0;
    auVar150._0_8_ = __real_3ff0000000000000;
    auVar62 = ZEXT816(0);
    auVar178 = ZEXT816(0) << 0x40;
    auVar42 = ZEXT816(0) << 0x40;
    auVar21 = ZEXT816(0);
    auVar169 = ZEXT816(0) << 0x40;
    auVar22 = auVar150;
    auVar151 = auVar150;
  }
  else {
LAB_1409f8dfc:
    auVar46 = vperm2f128_avx(auVar195,auVar205,0x31);
    auVar71 = vunpcklpd_avx(auVar195,auVar46);
    auVar7._8_8_ = _UNK_150b54548;
    auVar7._0_8_ = ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
    auVar7._16_8_ = _UNK_150b54550;
    auVar7._24_8_ = _UNK_150b54558;
    auVar46 = vblendpd_avx(auVar205,auVar7,0xe);
    auVar27._0_8_ = auVar71._0_8_ * auVar46._0_8_;
    auVar27._8_8_ = auVar71._8_8_ * auVar46._8_8_;
    auVar27._16_8_ = auVar71._16_8_ * auVar46._16_8_;
    auVar27._24_8_ = auVar71._24_8_ * auVar46._24_8_;
    auVar66 = vshufpd_avx(auVar192,auVar192,1);
    auVar21 = ZEXT816(0);
    auVar73._16_16_ = auVar203;
    auVar73._0_16_ = auVar66;
    auVar71 = vshufpd_avx(auVar73,ZEXT1632(auVar21),4);
    auVar46 = vblendpd_avx(ZEXT1632(auVar66),auVar205,2);
    auVar48._0_8_ = auVar71._0_8_ * auVar46._0_8_;
    auVar48._8_8_ = auVar71._8_8_ * auVar46._8_8_;
    auVar48._16_8_ = auVar71._16_8_ * auVar46._16_8_;
    auVar48._24_8_ = auVar71._24_8_ * auVar46._24_8_;
    auVar74._8_8_ = auVar203._0_8_;
    auVar74._0_8_ = auVar203._0_8_;
    auVar74._16_8_ = auVar205._16_8_;
    auVar74._24_8_ = auVar205._16_8_;
    auVar46 = vblendpd_avx(auVar74,
                           ___ymm_000000000000000000000000000000003ff00000000000003ff0000000000000,3
                          );
    auVar47 = vsubpd_avx(auVar27,auVar48);
    auVar71 = vblendpd_avx(ZEXT1632(auVar169),auVar205,2);
    auVar26 = vblendpd_avx(ZEXT1632(auVar21),auVar195,0xc);
    auVar122._16_16_ = auVar203;
    auVar122._0_16_ = auVar21;
    auVar26 = vblendpd_avx(auVar26,auVar122,10);
    auVar177._0_8_ =
         auVar46._0_8_ * auVar71._0_8_ +
         auVar26._0_8_ * ___ymm_8000000000000000800000000000000080000000000000008000000000000000;
    auVar177._8_8_ = auVar46._8_8_ * auVar71._8_8_ + auVar26._8_8_ * _UNK_150b513e8;
    auVar186._16_8_ = auVar46._16_8_ * auVar71._16_8_ + auVar26._16_8_ * _UNK_150b513f0;
    auVar186._0_16_ = auVar177;
    auVar186._24_8_ = auVar46._24_8_ * auVar71._24_8_ + auVar26._24_8_ * _UNK_150b513f8;
    auVar28._16_16_ = auVar203;
    auVar28._0_16_ = auVar169;
    auVar119 = ZEXT1632(auVar21);
    auVar71 = vshufpd_avx(auVar28,auVar119,4);
    auVar49._0_8_ = auVar203._0_8_ * auVar71._0_8_;
    auVar49._8_8_ = auVar203._0_8_ * auVar71._8_8_;
    auVar49._16_8_ = auVar192._0_8_ * auVar71._16_8_;
    auVar49._24_8_ = auVar192._0_8_ * auVar71._24_8_;
    auVar66 = vshufpd_avx(auVar192,auVar192,3);
    auVar46 = vunpckhpd_avx(auVar205,auVar119);
    auVar46 = vblendpd_avx(auVar46,auVar195,4);
    auVar75._0_8_ = auVar66._0_8_ * auVar46._0_8_;
    auVar75._8_8_ = auVar66._8_8_ * auVar46._8_8_;
    auVar75._16_8_ = auVar66._0_8_ * auVar46._16_8_;
    auVar75._24_8_ = auVar66._8_8_ * auVar46._24_8_;
    auVar118 = vsubpd_avx(auVar49,auVar75);
    dVar149 = auVar47._0_8_;
    auVar26 = vperm2f128_avx(auVar47,auVar47,0x11);
    auVar46 = vshufpd_avx(auVar26,auVar26,0xf);
    auVar169 = auVar47._0_16_;
    auVar66 = vshufpd_avx(auVar169,auVar169,3);
    auVar76._0_8_ = dVar149 * auVar46._0_8_ + auVar66._0_8_ * auVar26._0_8_;
    auVar76._8_8_ = dVar149 * auVar46._8_8_ + auVar66._8_8_ * auVar26._0_8_;
    auVar76._16_8_ = dVar149 * auVar46._16_8_ + auVar66._0_8_ * auVar26._16_8_;
    auVar76._24_8_ = dVar149 * auVar46._24_8_ + auVar66._8_8_ * auVar26._16_8_;
    auVar123._16_16_ = auVar177;
    auVar123._0_16_ = auVar177;
    auVar26 = vperm2f128_avx(auVar186,auVar186,0x11);
    auVar26 = vshufpd_avx(auVar123,auVar26,0xc);
    auVar184._16_8_ = auVar118._0_8_;
    auVar124._0_8_ = auVar184._16_8_ * auVar26._0_8_;
    dVar92 = auVar118._8_8_;
    auVar124._8_8_ = dVar92 * auVar26._8_8_;
    dVar93 = auVar118._16_8_;
    auVar124._16_8_ = dVar93 * auVar26._16_8_;
    dVar141 = auVar118._24_8_;
    auVar124._24_8_ = dVar141 * auVar26._24_8_;
    auVar26 = vperm2f128_avx(auVar124,auVar124,1);
    auVar125._0_8_ = auVar124._0_8_ + auVar26._0_8_;
    auVar125._8_8_ = auVar124._8_8_ + auVar26._8_8_;
    auVar125._16_8_ = auVar124._16_8_ + auVar26._16_8_;
    auVar125._24_8_ = auVar124._24_8_ + auVar26._24_8_;
    auVar26 = vperm2f128_avx(auVar125,auVar125,1);
    auVar26 = vshufpd_avx(auVar125,auVar26,5);
    auVar126._0_8_ = auVar125._0_8_ + auVar26._0_8_;
    auVar126._8_8_ = auVar125._8_8_ + auVar26._8_8_;
    auVar126._16_8_ = auVar125._16_8_ + auVar26._16_8_;
    auVar126._24_8_ = auVar125._24_8_ + auVar26._24_8_;
    auVar26 = vsubpd_avx(auVar76,auVar126);
    auVar66 = ZEXT816(0) << 0x40;
    if ((auVar26._0_8_ != 0.0) || (NAN(auVar26._0_8_))) {
      auVar77._0_8_ = dVar149 * 0.0;
      auVar77._8_8_ = dVar149 * 0.0;
      auVar77._16_8_ = auVar47._16_8_ * 0.0;
      auVar77._24_8_ = auVar47._16_8_ * 0.0;
      auVar158 = vperm2f128_avx(auVar77,auVar77,0x11);
      auVar127._24_8_ = auVar203._0_8_;
      auVar127._16_8_ = auVar203._0_8_;
      auVar21 = auVar71._0_16_;
      auVar127._0_16_ = auVar21;
      auVar47 = vblendpd_avx(auVar195,auVar127,0xc);
      auVar128._0_8_ = auVar177._0_8_ * auVar47._0_8_;
      auVar128._8_8_ = auVar177._0_8_ * auVar47._8_8_;
      auVar128._16_8_ = auVar177._0_8_ * auVar47._16_8_;
      auVar128._24_8_ = auVar177._0_8_ * auVar47._24_8_;
      auVar99._16_16_ = auVar177;
      auVar99._0_16_ = auVar177;
      auVar170._0_8_ = auVar192._0_8_ * auVar177._0_8_;
      auVar170._8_8_ = auVar192._0_8_ * auVar177._8_8_;
      auVar170._16_8_ = auVar192._0_8_ * auVar177._0_8_;
      auVar170._24_8_ = auVar192._8_8_ * auVar177._8_8_;
      auVar47 = vsubpd_avx(auVar128,auVar170);
      auVar194 = vsubpd_avx(auVar158,auVar47);
      auVar66 = vshufpd_avx(auVar169,auVar169,3);
      auVar114._0_8_ = auVar66._0_8_ * 0.0;
      auVar114._8_8_ = auVar66._8_8_ * 0.0;
      auVar64._0_8_ = auVar184._16_8_ * __real_3ff0000000000000;
      auVar64._8_8_ = dVar92 * 0.0;
      auVar78._16_8_ = dVar93 * 0.0;
      auVar78._0_16_ = auVar64;
      auVar78._24_8_ = dVar141 * 0.0;
      auVar171._16_16_ = auVar64;
      auVar171._0_16_ = auVar21;
      auVar159 = vshufpd_avx(auVar78,auVar171,4);
      auVar168._0_8_ =
           auVar184._16_8_ * ___ymm_00000000000000003ff000000000000000000000000000000000000000000000
      ;
      auVar168._8_8_ = dVar92 * _UNK_150aa8e88;
      auVar172._16_8_ = dVar93 * _DAT_150aa8e90;
      auVar172._0_16_ = auVar168;
      auVar172._24_8_ = dVar141 * _UNK_150aa8e98;
      auVar111._16_16_ = auVar168;
      auVar111._0_16_ = auVar21;
      auVar47 = vblendpd_avx(auVar172,auVar111,8);
      auVar66 = vshufpd_avx(auVar192,auVar203,1);
      auVar50._0_8_ = auVar192._0_8_ * auVar46._0_8_;
      auVar50._8_8_ = auVar192._8_8_ * auVar46._8_8_;
      auVar50._16_8_ = auVar66._0_8_ * auVar46._16_8_;
      auVar50._24_8_ = auVar66._8_8_ * auVar46._24_8_;
      auVar158 = vperm2f128_avx(auVar186,auVar186,0x11);
      auVar46 = vblendpd_avx(auVar99,auVar158,10);
      auVar187._8_8_ = auVar195._16_8_;
      auVar187._0_8_ = auVar195._16_8_;
      auVar187._16_16_ = auVar203;
      auVar119 = vblendpd_avx(auVar187,auVar119,5);
      auVar158 = vblendpd_avx(auVar158,auVar99,10);
      auVar29._0_8_ = auVar46._0_8_ * auVar71._0_8_ + auVar119._0_8_ * auVar158._0_8_;
      auVar29._8_8_ = auVar46._8_8_ * auVar71._8_8_ + auVar119._8_8_ * auVar158._8_8_;
      auVar29._16_8_ = auVar46._16_8_ * auVar71._16_8_ + auVar119._16_8_ * auVar158._16_8_;
      auVar29._24_8_ = auVar46._24_8_ * auVar71._24_8_ + auVar119._24_8_ * auVar158._24_8_;
      auVar71 = vsubpd_avx(auVar50,auVar29);
      auVar46 = vdivpd_avx(___ymm_3ff0000000000000bff0000000000000bff00000000000003ff0000000000000,
                           auVar26);
      auVar22._0_8_ = auVar71._0_8_ * auVar46._0_8_;
      auVar22._8_8_ = auVar71._8_8_ * auVar46._8_8_;
      auVar184._16_8_ = auVar46._16_8_;
      auVar30._16_8_ = auVar71._16_8_ * auVar184._16_8_;
      auVar30._0_16_ = auVar22;
      dVar92 = auVar46._24_8_;
      auVar30._24_8_ = auVar71._24_8_ * dVar92;
      auVar169 = vshufpd_avx(auVar22,auVar22,1);
      auVar42 = auVar30._16_16_;
      auVar150 = vshufpd_avx(auVar42,auVar42,1);
      auVar66 = vsubpd_avx(auVar159._16_16_,auVar47._16_16_);
      auVar66 = vsubpd_avx(auVar114,auVar66);
      auVar178._0_8_ = auVar66._0_8_ * auVar184._16_8_;
      auVar178._8_8_ = auVar66._8_8_ * dVar92;
      auVar21 = vshufpd_avx(auVar178,auVar178,1);
      local_148._0_8_ = auVar194._0_8_;
      local_148._8_8_ = auVar194._8_8_;
      dStack_138 = auVar194._16_8_;
      dStack_130 = auVar194._24_8_;
      auVar65._0_8_ = auVar46._0_8_ * (double)local_148._0_8_;
      auVar65._8_8_ = auVar46._8_8_ * (double)local_148._8_8_;
      auVar79._16_8_ = auVar184._16_8_ * dStack_138;
      auVar79._0_16_ = auVar65;
      auVar79._24_8_ = dVar92 * dStack_130;
      auVar66 = vshufpd_avx(auVar65,auVar65,1);
      auVar62 = vshufpd_avx(auVar79._16_16_,auVar79._16_16_,1);
      auVar63 = vshufpd_avx(auVar118._16_16_,auVar118._16_16_,1);
      auVar20 = vshufpd_avx(auVar118._0_16_,auVar118._0_16_,1);
      auVar43 = vshufpd_avx(auVar46._16_16_,auVar46._16_16_,1);
      auVar151._8_8_ = 0;
      auVar151._0_8_ = (dVar149 - (auVar63._0_8_ * 0.0 + auVar20._0_8_ * 0.0)) * auVar43._0_8_;
    }
    else {
      auVar150._8_8_ = 0;
      auVar150._0_8_ = __real_3ff0000000000000;
      auVar62 = ZEXT816(0) << 0x40;
      auVar178 = ZEXT816(0) << 0x40;
      auVar42 = ZEXT816(0) << 0x40;
      auVar21 = ZEXT816(0);
      auVar169 = ZEXT816(0) << 0x40;
      auVar22 = auVar150;
      auVar151 = auVar150;
    }
  }
  auVar66 = vunpcklpd_avx(auVar62,auVar66);
  auVar62 = vunpcklpd_avx(auVar42,auVar22);
  auVar169 = vunpcklpd_avx(auVar150,auVar169);
  dVar149 = *param_4;
  dVar92 = param_4[1];
  dVar93 = param_4[2];
  auVar181._0_8_ =
       param_5 * (auVar169._0_8_ * dVar149 + auVar62._0_8_ * dVar92 + auVar66._0_8_ * dVar93);
  auVar181._8_8_ =
       param_5 * (auVar169._8_8_ * dVar149 + auVar62._8_8_ * dVar92 + auVar66._8_8_ * dVar93);
  auVar184._16_8_ =
       param_5 * (auVar21._0_8_ * dVar149 + auVar178._0_8_ * dVar92 + auVar151._0_8_ * dVar93);
  auVar184._0_16_ = auVar181;
  auVar189._24_8_ =
       param_5 * (auVar21._8_8_ * dVar149 + auVar178._8_8_ * dVar92 + auVar151._8_8_ * dVar93);
  auVar189._0_24_ = auVar184;
  auVar39._0_8_ = auVar181._0_8_ * dVar91;
  auVar39._8_8_ = auVar181._8_8_ * dVar91;
  auVar39._16_8_ = auVar184._16_8_ * dVar91;
  auVar39._24_8_ = auVar189._24_8_ * dVar91;
  auVar54._16_16_ = auVar181;
  auVar54._0_16_ = auVar181;
  auVar46 = vshufpd_avx(auVar54,ZEXT1632(auVar189._16_16_),1);
  auVar100._16_16_ = auVar143;
  auVar100._0_16_ = auVar143;
  auVar71 = vshufpd_avx(auVar100,ZEXT1632(auVar6._16_16_),1);
  auVar87._0_8_ = auVar181._0_8_ * auVar71._0_8_;
  auVar87._8_8_ = auVar181._8_8_ * auVar71._8_8_;
  auVar87._16_8_ = auVar184._16_8_ * auVar71._16_8_;
  auVar87._24_8_ = auVar189._24_8_ * auVar71._24_8_;
  auVar55._0_8_ = auVar46._0_8_ * dVar106;
  auVar55._8_8_ = auVar46._8_8_ * dVar113;
  auVar55._16_8_ = auVar46._16_8_ * auVar6._16_8_;
  auVar55._24_8_ = auVar46._24_8_ * auVar6._24_8_;
  auVar71 = vsubpd_avx(auVar87,auVar55);
  dVar149 = auVar71._0_8_;
  auVar10._8_8_ = dVar61;
  auVar10._0_8_ = dVar61;
  auVar9._16_8_ = dVar61;
  auVar9._0_16_ = auVar10;
  auVar9._24_8_ = dVar61;
  auVar66 = vmovhpd_avx(auVar10,*(undefined8 *)(*pauVar3 + 8));
  uVar5 = *(undefined8 *)pauVar3[1];
  auVar101._8_8_ = uVar5;
  auVar101._0_8_ = uVar5;
  auVar101._16_8_ = uVar5;
  auVar101._24_8_ = uVar5;
  auVar46 = vblendpd_avx(auVar9,ZEXT1632(auVar66),3);
  auVar46 = vblendpd_avx(auVar46,auVar101,4);
  auVar66 = vshufpd_avx(auVar71._0_16_,auVar71._0_16_,3);
  auVar169 = vunpcklpd_avx(auVar211,auVar214);
  auVar71 = vperm2f128_avx(auVar71,auVar71,0x11);
  dVar61 = auVar46._0_8_ * auVar66._0_8_ + auVar71._0_8_ * auVar169._0_8_;
  dVar91 = auVar46._8_8_ * auVar66._8_8_ + auVar71._0_8_ * auVar169._8_8_;
  dVar92 = auVar46._16_8_ * auVar66._0_8_ + auVar71._16_8_ * *(double *)pauVar3[3];
  dVar93 = auVar46._24_8_ * auVar66._8_8_ + auVar71._16_8_ * 0.0;
  auVar169 = vunpcklpd_avx(auVar94,auVar202);
  auVar66 = vblendpd_avx((undefined1  [16])0x0,auVar107,1);
  auVar102._16_16_ = auVar66;
  auVar102._0_16_ = auVar169;
  auVar185 = auVar184;
LAB_1409f965a:
  auVar183 = auVar185._0_16_;
  auVar95._0_8_ = dVar61 + dVar149 * auVar102._0_8_;
  auVar95._8_8_ = dVar91 + dVar149 * auVar102._8_8_;
  auVar103._16_8_ = dVar92 + dVar149 * auVar102._16_8_;
  auVar103._0_16_ = auVar95;
  auVar103._24_8_ = dVar93 + dVar149 * auVar102._24_8_;
  auVar46 = vsubpd_avx(auVar210,auVar39);
  pauVar2[7] = auVar46._0_16_;
  uVar5 = vmovlps_avx(auVar46._16_16_);
  *(undefined8 *)pauVar2[8] = uVar5;
  dVar16 = _UNK_150b54438;
  dVar15 = _UNK_150b54430;
  dVar14 = _UNK_150b54428;
  dVar13 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar12 = _UNK_150b54418;
  dVar11 = _UNK_150b54410;
  dVar191 = _UNK_150b54408;
  dVar176 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar167 = _UNK_15076c6f8;
  dVar113 = ___xmm_bff00000000000003ff0000000000000;
  lVar19 = lVar18 * 0x20;
  auVar66 = *(undefined1 (*) [16])(param_1 + 0x1a0 + lVar19);
  auVar169 = *(undefined1 (*) [16])(param_1 + 0x1b0 + lVar19);
  dVar149 = auVar66._0_8_;
  dVar61 = auVar66._8_8_;
  dVar91 = auVar169._0_8_;
  dVar92 = auVar169._8_8_;
  auVar154._8_8_ = 0;
  auVar154._0_8_ = *(ulonglong *)(param_1 + 0x1b8 + lVar19);
  auVar66 = vmovhps_avx(auVar154,*(undefined8 *)(param_1 + 0x1b0 + lVar19));
  auVar193._8_8_ = 0;
  auVar193._0_8_ = *(ulonglong *)(param_1 + 0x1a8 + lVar19);
  auVar169 = vmovhps_avx(auVar193,*(undefined8 *)(param_1 + 0x1a0 + lVar19));
  auVar21 = vshufpd_avx(auVar95,auVar95,3);
  auVar46 = vperm2f128_avx(auVar103,auVar103,0x11);
  dVar93 = dVar149 + (auVar46._0_8_ * auVar169._0_8_ *
                      ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
                     auVar21._0_8_ * dVar91 *
                     ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
                     auVar66._0_8_ * auVar95._0_8_ * ___xmm_bff00000000000003ff0000000000000 +
                     dVar149 * 0.0) *
                     ___ymm_3fe00000000000003fe00000000000003fe00000000000003fe0000000000000;
  dVar141 = dVar61 + (auVar46._0_8_ * auVar169._8_8_ * _UNK_150b54428 +
                     auVar21._8_8_ * dVar92 * _UNK_150b54408 +
                     auVar66._8_8_ * auVar95._0_8_ * _UNK_15076c6f8 + dVar61 * 0.0) * _UNK_150aa8f28
  ;
  dVar91 = dVar91 + (auVar46._16_8_ * auVar66._0_8_ * _UNK_150b54430 +
                    auVar21._0_8_ * dVar149 * _UNK_150b54410 +
                    auVar169._0_8_ * auVar95._0_8_ * ___xmm_bff00000000000003ff0000000000000 +
                    dVar91 * 0.0) * _UNK_150aa8f30;
  dVar92 = dVar92 + (auVar46._16_8_ * auVar66._8_8_ * _UNK_150b54438 +
                    auVar21._8_8_ * dVar61 * _UNK_150b54418 +
                    auVar169._8_8_ * auVar95._0_8_ * _UNK_15076c6f8 + dVar92 * 0.0) * _UNK_150aa8f38
  ;
  auVar108._0_8_ = dVar93 * dVar93 + dVar91 * dVar91;
  auVar108._8_8_ = dVar141 * dVar141 + dVar92 * dVar92;
  auVar66 = vshufpd_avx(auVar108,auVar108,1);
  dVar149 = auVar108._0_8_ + auVar66._0_8_;
  auVar144._8_8_ = 0;
  auVar144._0_8_ = __real_3e45798ee2308c3a;
  auVar109._8_8_ = 0;
  auVar109._0_8_ = dVar149;
  auVar66 = vcmpsd_avx(auVar144,auVar109,6);
  uVar142 = ~auVar66._0_8_ & __real_ffffffffffffffff;
  auVar110._8_8_ = 0;
  auVar110._0_8_ = __real_3ff0000000000000;
  dVar149 = __real_3ff0000000000000 / SQRT(dVar149);
  uVar164 = ~uVar142 & _UNK_150b54548;
  uVar165 = ~uVar142 & _UNK_150b54550;
  uVar166 = ~uVar142 & _UNK_150b54558;
  puVar4 = (ulonglong *)(param_1 + 0x1a0 + lVar19);
  *puVar4 = (ulonglong)(dVar93 * dVar149) & uVar142 |
            ~uVar142 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
  puVar4[1] = (ulonglong)(dVar141 * dVar149) & uVar142 | uVar164;
  puVar4 = (ulonglong *)(param_1 + 0x1b0 + lVar19);
  *puVar4 = (ulonglong)(dVar91 * dVar149) & uVar142 | uVar165;
  puVar4[1] = (ulonglong)(dVar92 * dVar149) & uVar142 | uVar166;
  auVar115._0_8_ =
       *(double *)(param_1 + 0x1c0) * *(double *)(param_1 + 0x1a0) +
       *(double *)(param_1 + 0x1d0) * *(double *)(param_1 + 0x1b0);
  auVar115._8_8_ =
       *(double *)(param_1 + 0x1c8) * *(double *)(param_1 + 0x1a8) +
       *(double *)(param_1 + 0x1d8) * *(double *)(param_1 + 0x1b8);
  auVar66 = vshufpd_avx(auVar115,auVar115,1);
  auVar145._8_8_ = 0;
  auVar145._0_8_ = auVar115._0_8_ + auVar66._0_8_;
  auVar66 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar145,2);
  auVar146._8_8_ = 0;
  auVar146._0_8_ = __real_bff0000000000000;
  auVar66 = vblendvpd_avx(auVar146,auVar110,auVar66);
  dVar149 = auVar66._0_8_;
  *(double *)(param_1 + 0x1c0) = dVar149 * *(double *)(param_1 + 0x1c0);
  *(double *)(param_1 + 0x1c8) = dVar149 * *(double *)(param_1 + 0x1c8);
  *(double *)(param_1 + 0x1d0) = *(double *)(param_1 + 0x1d0) * dVar149;
  *(double *)(param_1 + 0x1d8) = *(double *)(param_1 + 0x1d8) * dVar149;
  lVar17 = lVar18 * 0x60;
  auVar155._8_8_ = 0;
  auVar155._0_8_ = *(ulonglong *)(param_1 + 0x20 + lVar17);
  auVar62 = vmovhps_avx(auVar155,*(undefined8 *)(param_1 + 0x38 + lVar17));
  pdVar1 = (double *)(param_1 + 0x20 + lVar17);
  dVar141 = *pdVar1;
  dVar106 = pdVar1[1];
  auVar66 = *(undefined1 (*) [16])(param_1 + 0x28 + lVar17);
  auVar169 = *(undefined1 (*) [16])(param_1 + 0x1a0 + lVar19);
  auVar21 = *(undefined1 (*) [16])(param_1 + 0x1a8 + lVar19);
  dVar149 = *(double *)(param_1 + 0x1b0 + lVar19);
  auVar208._8_8_ = 0;
  auVar208._0_8_ = dVar149;
  dVar61 = *(double *)(param_1 + 0x1b8 + lVar19);
  auVar212._8_8_ = dVar61;
  auVar212._0_8_ = dVar61;
  auVar63 = vunpcklpd_avx(auVar208,auVar212);
  dVar201 = auVar169._0_8_;
  auVar160._0_8_ = dVar201 * auVar66._0_8_;
  dVar207 = auVar169._8_8_;
  auVar160._8_8_ = dVar207 * auVar66._8_8_;
  auVar160._16_8_ = auVar63._0_8_ * auVar62._0_8_;
  auVar160._24_8_ = auVar63._8_8_ * auVar62._8_8_;
  dVar91 = *(double *)(param_1 + 0x1a0 + lVar19);
  auVar204._8_8_ = 0;
  auVar204._0_8_ = dVar91;
  auVar66 = vunpcklpd_avx(auVar204,auVar212);
  pdVar1 = (double *)(param_1 + 0x30 + lVar17);
  dVar92 = auVar21._0_8_;
  auVar197._0_8_ = dVar141 * dVar92;
  dVar93 = auVar21._8_8_;
  auVar197._8_8_ = dVar106 * dVar93;
  auVar197._16_8_ = *pdVar1 * auVar66._0_8_;
  auVar197._24_8_ = pdVar1[1] * auVar66._8_8_;
  auVar46 = vsubpd_avx(auVar160,auVar197);
  auVar156._0_8_ = auVar46._0_8_ + auVar46._0_8_;
  auVar156._8_8_ = auVar46._8_8_ + auVar46._8_8_;
  auVar161._16_8_ = auVar46._16_8_ + auVar46._16_8_;
  auVar161._0_16_ = auVar156;
  auVar161._24_8_ = auVar46._24_8_ + auVar46._24_8_;
  auVar198._16_16_ = auVar156;
  auVar198._0_16_ = auVar156;
  auVar46 = vshufpd_avx(auVar198,ZEXT1632(auVar161._16_16_),1);
  auVar71 = vperm2f128_avx(auVar161,auVar161,1);
  auVar71 = vshufpd_avx(auVar71,auVar161,4);
  auVar162._0_8_ = dVar201 * auVar71._0_8_;
  auVar162._8_8_ = dVar207 * auVar71._8_8_;
  auVar162._16_8_ = dVar149 * auVar71._16_8_;
  auVar162._24_8_ = auVar71._24_8_ * 0.0;
  auVar199._0_8_ = dVar92 * auVar46._0_8_;
  auVar199._8_8_ = dVar93 * auVar46._8_8_;
  auVar199._16_8_ = dVar91 * auVar46._16_8_;
  auVar199._24_8_ = auVar46._24_8_ * 0.0;
  auVar71 = vsubpd_avx(auVar162,auVar199);
  auVar200._16_16_ = auVar71._0_16_;
  auVar200._0_16_ = auVar71._0_16_;
  auVar71 = vshufpd_avx(auVar200,ZEXT1632(auVar71._16_16_),1);
  auVar157._0_8_ = *(double *)pauVar2[7] + dVar141 + dVar61 * auVar46._0_8_ + auVar71._0_8_;
  auVar157._8_8_ = *(double *)(pauVar2[7] + 8) + dVar106 + dVar61 * auVar46._8_8_ + auVar71._8_8_;
  auVar163._16_8_ =
       *(double *)pauVar2[8] +
       *(double *)(param_1 + 0x30 + lVar17) + dVar61 * auVar46._16_8_ + auVar71._16_8_;
  auVar163._0_16_ = auVar157;
  auVar163._24_8_ = dVar61 * auVar46._24_8_ + 0.0 + auVar71._24_8_ + 0.0;
  *pauVar2 = auVar157;
  uVar5 = vmovlps_avx(auVar163._16_16_);
  *(undefined8 *)pauVar2[1] = uVar5;
  dVar149 = *(double *)(param_1 + 0x1b8 + lVar19);
  auVar66 = *(undefined1 (*) [16])(param_1 + 0x10 + lVar17);
  dVar93 = SUB168(*(undefined1 (*) [16])(param_1 + lVar17),0);
  dVar141 = SUB168(*(undefined1 (*) [16])(param_1 + lVar17),8);
  dVar106 = auVar66._0_8_;
  dVar201 = auVar66._8_8_;
  dVar61 = *(double *)(param_1 + 0x1a0 + lVar19);
  auVar209._8_8_ = 0;
  auVar209._0_8_ = *(ulonglong *)(param_1 + 0x18 + lVar17);
  auVar66 = vmovhps_avx(auVar209,*(undefined8 *)(param_1 + 0x10 + lVar17));
  auVar213._8_8_ = 0;
  auVar213._0_8_ = *(ulonglong *)(param_1 + 8 + lVar17);
  auVar169 = vmovhps_avx(auVar213,*(undefined8 *)(param_1 + lVar17));
  dVar91 = *(double *)(param_1 + 0x1a8 + lVar19);
  dVar92 = *(double *)(param_1 + 0x1b0 + lVar19);
  pdVar1 = (double *)(param_1 + 0x130 + lVar19);
  *pdVar1 = auVar169._0_8_ * dVar92 * dVar13 +
            dVar106 * dVar91 * dVar176 + dVar93 * dVar149 + dVar61 * auVar66._0_8_ * dVar113;
  pdVar1[1] = auVar169._8_8_ * dVar92 * dVar14 +
              dVar201 * dVar91 * dVar191 + dVar141 * dVar149 + dVar61 * auVar66._8_8_ * dVar167;
  pdVar1 = (double *)(param_1 + 0x140 + lVar19);
  *pdVar1 = auVar66._0_8_ * dVar92 * dVar15 +
            dVar93 * dVar91 * dVar11 + dVar106 * dVar149 + dVar61 * auVar169._0_8_ * dVar113;
  pdVar1[1] = auVar66._8_8_ * dVar92 * dVar16 +
              dVar141 * dVar91 * dVar12 + dVar201 * dVar149 + dVar61 * auVar169._8_8_ * dVar167;
  auVar96._0_8_ =
       *(double *)(param_1 + 0x150) * *(double *)(param_1 + 0x130) +
       *(double *)(param_1 + 0x160) * *(double *)(param_1 + 0x140);
  auVar96._8_8_ =
       *(double *)(param_1 + 0x158) * *(double *)(param_1 + 0x138) +
       *(double *)(param_1 + 0x168) * *(double *)(param_1 + 0x148);
  auVar66 = vshufpd_avx(auVar96,auVar96,1);
  auVar97._8_8_ = 0;
  auVar97._0_8_ = auVar96._0_8_ + auVar66._0_8_;
  auVar66 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar97,2);
  auVar66 = vblendvpd_avx(auVar146,auVar110,auVar66);
  dVar149 = auVar66._0_8_;
  *(double *)(param_1 + 0x150) = *(double *)(param_1 + 0x150) * dVar149;
  *(double *)(param_1 + 0x158) = *(double *)(param_1 + 0x158) * dVar149;
  *(double *)(param_1 + 0x160) = *(double *)(param_1 + 0x160) * dVar149;
  *(double *)(param_1 + 0x168) = *(double *)(param_1 + 0x168) * dVar149;
  dVar149 = *(double *)(param_1 + 0x1a0 + lVar19);
  auVar44._8_8_ = dVar149;
  auVar44._0_8_ = dVar149;
  dVar61 = *(double *)(param_1 + 0x1a8 + lVar19);
  auVar68._8_8_ = dVar61;
  auVar68._0_8_ = dVar61;
  auVar169 = vunpcklpd_avx(auVar44,auVar68);
  auVar66 = *(undefined1 (*) [16])(param_1 + 0x1b0 + lVar19);
  dVar93 = auVar169._0_8_ + auVar169._0_8_;
  dVar141 = auVar169._8_8_ + auVar169._8_8_;
  dVar91 = auVar66._0_8_;
  dVar92 = auVar66._8_8_;
  dVar106 = dVar91 + dVar91;
  dVar92 = dVar92 + dVar92;
  auVar58._0_8_ = dVar149 * dVar93;
  auVar58._8_8_ = dVar149 * dVar141;
  auVar58._16_8_ = dVar149 * dVar106;
  auVar58._24_8_ = dVar149 * dVar92;
  auVar116._0_8_ = dVar61 * dVar93;
  auVar116._8_8_ = dVar61 * dVar141;
  auVar139._16_8_ = dVar61 * dVar106;
  auVar139._0_16_ = auVar116;
  auVar139._24_8_ = dVar61 * dVar92;
  dVar149 = *(double *)(param_1 + 0x1b8 + lVar19);
  auVar104._0_8_ = dVar93 * dVar149;
  auVar104._8_8_ = dVar141 * dVar149;
  auVar104._16_8_ = dVar106 * dVar149;
  auVar104._24_8_ = dVar92 * dVar149;
  dVar149 = (dVar91 + dVar91) * *(double *)(param_1 + 0x1b0 + lVar19);
  auVar46 = vperm2f128_avx(auVar139,auVar58,0x21);
  auVar46 = vshufpd_avx(auVar46,ZEXT1632(auVar58._16_16_),4);
  auVar69._0_8_ = auVar104._0_8_ + auVar46._0_8_;
  auVar69._8_8_ = auVar104._8_8_ + auVar46._8_8_;
  auVar89._16_8_ = auVar104._16_8_ + auVar46._16_8_;
  auVar89._0_16_ = auVar69;
  auVar89._24_8_ = auVar104._24_8_ + auVar46._24_8_;
  auVar6 = vsubpd_avx(auVar46,auVar104);
  auVar66 = vshufpd_avx(auVar116,auVar116,1);
  auVar45._8_8_ = auVar58._0_8_;
  auVar45._0_8_ = auVar58._0_8_;
  auVar59._16_16_ = auVar45;
  auVar59._0_16_ = auVar45;
  auVar46 = vblendpd_avx(auVar59,ZEXT1632(auVar66),1);
  auVar71 = vblendpd_avx(ZEXT1632(CONCAT88(dVar149,dVar149)),ZEXT1632(auVar66) << 0x80,0xc);
  auVar60._0_8_ = auVar46._0_8_ + auVar71._0_8_;
  auVar60._8_8_ = auVar46._8_8_ + auVar71._8_8_;
  auVar60._16_8_ = auVar46._16_8_ + auVar71._16_8_;
  auVar60._24_8_ = auVar46._24_8_ + auVar71._24_8_;
  auVar112._8_8_ = __real_3ff0000000000000;
  auVar112._0_8_ = __real_3ff0000000000000;
  auVar112._16_8_ = __real_3ff0000000000000;
  auVar112._24_8_ = __real_3ff0000000000000;
  auVar71 = vsubpd_avx(auVar112,auVar60);
  dVar91 = auVar71._0_8_;
  dVar149 = *(double *)(param_1 + 0xc0 + lVar18 * 0x18);
  dVar61 = *(double *)(param_1 + 0xd0 + lVar18 * 0x18);
  auVar46 = vperm2f128_avx(auVar6,auVar6,0x11);
  auVar21 = ZEXT816(0) << 0x40;
  auVar66 = vmovhpd_avx(auVar21,*(undefined8 *)(param_1 + 200 + lVar18 * 0x18));
  dVar92 = auVar66._0_8_;
  dVar93 = auVar66._8_8_;
  auVar66 = vshufpd_avx(auVar69,auVar69,3);
  auVar147._0_8_ = auVar66._0_8_ * 0.0 + dVar92 * auVar46._0_8_ + dVar149 * dVar91;
  auVar147._8_8_ = auVar66._8_8_ * 0.0 + dVar93 * auVar46._0_8_ + dVar91 * 0.0;
  auVar148._16_8_ = auVar66._0_8_ * dVar61 + auVar46._16_8_ * 0.0 + dVar91 * 0.0;
  auVar148._0_16_ = auVar147;
  auVar148._24_8_ = auVar66._8_8_ * 0.0 + auVar46._16_8_ * 0.0 + dVar91 * 0.0;
  auVar46 = vperm2f128_avx(auVar89,auVar89,0x11);
  auVar63 = auVar71._0_16_;
  auVar66 = vshufpd_avx(auVar63,auVar63,3);
  dVar91 = auVar6._0_8_;
  auVar117._0_8_ = dVar91 * 0.0 + dVar92 * auVar66._0_8_ + dVar149 * auVar46._0_8_;
  auVar117._8_8_ = dVar91 * 0.0 + dVar93 * auVar66._8_8_ + auVar46._0_8_ * 0.0;
  auVar140._16_8_ = dVar91 * dVar61 + auVar66._0_8_ * 0.0 + auVar46._16_8_ * 0.0;
  auVar140._0_16_ = auVar117;
  auVar140._24_8_ = dVar91 * 0.0 + auVar66._8_8_ * 0.0 + auVar46._16_8_ * 0.0;
  auVar62 = auVar6._0_16_;
  auVar66 = vshufpd_avx(auVar62,auVar62,3);
  auVar46 = vperm2f128_avx(auVar71,auVar71,0x11);
  auVar24._0_8_ = dVar92 * auVar69._0_8_ + auVar66._0_8_ * dVar149 + auVar46._0_8_ * 0.0;
  auVar24._8_8_ = dVar93 * auVar69._0_8_ + auVar66._8_8_ * 0.0 + auVar46._0_8_ * 0.0;
  auVar40._16_8_ = auVar69._0_8_ * 0.0 + auVar66._0_8_ * 0.0 + auVar46._16_8_ * dVar61;
  auVar40._0_16_ = auVar24;
  auVar40._24_8_ = auVar69._0_8_ * 0.0 + auVar66._8_8_ * 0.0 + auVar46._16_8_ * 0.0;
  auVar169 = vunpcklpd_avx(auVar63,auVar89._16_16_);
  auVar66 = vshufpd_avx(auVar62,auVar62,1);
  auVar206._16_16_ = auVar66;
  auVar206._0_16_ = auVar24;
  auVar46 = vblendpd_avx(ZEXT1632(auVar169),auVar206,0xc);
  dVar149 = auVar46._0_8_;
  dVar61 = auVar46._8_8_;
  dVar91 = auVar46._16_8_;
  dVar92 = auVar46._24_8_;
  auVar169 = vshufpd_avx(auVar147,auVar147,3);
  auVar66 = vblendpd_avx(auVar63,auVar6._16_16_,1);
  dVar167 = auVar66._0_8_;
  dVar176 = auVar66._8_8_;
  auVar66 = vshufpd_avx(auVar69,auVar62,1);
  auVar6 = vperm2f128_avx(auVar148,auVar148,0x11);
  auVar46 = vblendpd_avx(auVar71,ZEXT1632(auVar66),3);
  dVar93 = auVar46._0_8_;
  dVar141 = auVar46._8_8_;
  dVar106 = auVar46._16_8_;
  dVar113 = auVar46._24_8_;
  auVar70._0_8_ = auVar147._0_8_ * dVar149 + dVar167 * auVar169._0_8_ + dVar93 * auVar6._0_8_;
  auVar70._8_8_ = auVar147._0_8_ * dVar61 + dVar176 * auVar169._8_8_ + dVar141 * auVar6._0_8_;
  auVar90._16_8_ =
       auVar147._0_8_ * dVar91 + auVar69._0_8_ * auVar169._0_8_ + dVar106 * auVar6._16_8_;
  auVar90._0_16_ = auVar70;
  auVar90._24_8_ =
       auVar147._0_8_ * dVar92 + auVar69._8_8_ * auVar169._8_8_ + dVar113 * auVar6._16_8_;
  auVar66 = vshufpd_avx(auVar117,auVar117,3);
  auVar46 = vperm2f128_avx(auVar140,auVar140,0x11);
  auVar98._0_8_ = dVar93 * auVar46._0_8_ + dVar149 * auVar117._0_8_ + dVar167 * auVar66._0_8_;
  auVar98._8_8_ = dVar141 * auVar46._0_8_ + dVar61 * auVar117._0_8_ + dVar176 * auVar66._8_8_;
  auVar105._16_8_ =
       dVar106 * auVar46._16_8_ + dVar91 * auVar117._0_8_ + auVar69._0_8_ * auVar66._0_8_;
  auVar105._0_16_ = auVar98;
  auVar105._24_8_ =
       dVar113 * auVar46._16_8_ + dVar92 * auVar117._0_8_ + auVar69._8_8_ * auVar66._8_8_;
  auVar66 = vshufpd_avx(auVar24,auVar24,3);
  auVar46 = vperm2f128_avx(auVar40,auVar40,0x11);
  auVar25._0_8_ = dVar93 * auVar46._0_8_ + dVar149 * auVar24._0_8_ + dVar167 * auVar66._0_8_;
  auVar25._8_8_ = dVar141 * auVar46._0_8_ + dVar61 * auVar24._0_8_ + dVar176 * auVar66._8_8_;
  auVar41._16_8_ = dVar106 * auVar46._16_8_ + dVar91 * auVar24._0_8_ + auVar69._0_8_ * auVar66._0_8_
  ;
  auVar41._0_16_ = auVar25;
  auVar41._24_8_ = dVar113 * auVar46._16_8_ + dVar92 * auVar24._0_8_ + auVar69._8_8_ * auVar66._8_8_
  ;
  *pauVar3 = auVar70;
  uVar5 = vmovlps_avx(auVar90._16_16_);
  *(undefined8 *)pauVar3[1] = uVar5;
  *(undefined8 *)(pauVar3[1] + 8) = 0;
  pauVar3[2] = auVar98;
  uVar5 = vmovlps_avx(auVar105._16_16_);
  *(undefined8 *)pauVar3[3] = uVar5;
  *(undefined8 *)(pauVar3[3] + 8) = 0;
  pauVar3[4] = auVar25;
  uVar5 = vmovlps_avx(auVar41._16_16_);
  *(undefined8 *)pauVar3[5] = uVar5;
  *(undefined1 (*) [16])(pauVar3[6] + 8) = auVar21;
  *(undefined1 (*) [16])(pauVar3[5] + 8) = auVar21;
  *(undefined8 *)(pauVar3[7] + 8) = 0x3ff0000000000000;
  if (param_2 == 0) {
    auVar66 = vshufpd_avx(auVar183,auVar183,1);
  }
  else {
    auVar183._0_8_ =
         auVar185._0_8_ ^
         (ulonglong)___ymm_8000000000000000800000000000000080000000000000008000000000000000;
    auVar183._8_8_ = auVar185._8_8_ ^ (ulonglong)_UNK_150b513e8;
    auVar184._16_8_ = (double)(auVar185._16_8_ ^ (ulonglong)_UNK_150b513f0);
    auVar66 = vshufps_avx(auVar183,auVar183,0x4e);
  }
  auVar66 = vunpcklpd_avx(auVar183,auVar66);
  *(double *)(param_1 + 0x420) = auVar66._0_8_ + *(double *)(param_1 + 0x420);
  *(double *)(param_1 + 0x428) = auVar66._8_8_ + *(double *)(param_1 + 0x428);
  *(double *)(param_1 + 0x430) = auVar184._16_8_ + *(double *)(param_1 + 0x430);
  return;
}

// ApplyPointPositionConstraintDD___un_3C_s_5B_unFPBDJointSolver_5D__3E_REFs_5B__c_unFVector_5D_Cund_avx @ 1409f9de0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPointPositionConstraintDD___un_3C_s_5B_unFPBDJointSolver_5D__3E_REFs_5B__c_unFVector_5D_Cund_avx
               (double *param_1,double *param_2,double param_3,undefined1 (*param_4) [32])

{
  undefined1 auVar1 [24];
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [32];
  undefined1 auVar8 [16];
  undefined1 auVar9 [32];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [32];
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar95;
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
  double dVar97;
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar57 [32];
  undefined1 auVar58 [32];
  undefined1 auVar59 [32];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  double dVar99;
  undefined1 auVar63 [32];
  undefined1 auVar65 [32];
  double dVar96;
  double dVar98;
  double dVar100;
  undefined1 auVar67 [32];
  undefined1 auVar68 [32];
  undefined1 auVar69 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  double dVar101;
  undefined1 auVar76 [32];
  undefined1 auVar78 [32];
  double dVar102;
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar88 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar92 [32];
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
  undefined1 auVar129 [32];
  undefined1 auVar130 [32];
  undefined1 auVar131 [32];
  undefined1 auVar132 [32];
  undefined1 auVar133 [32];
  undefined1 auVar134 [32];
  undefined1 auVar135 [32];
  undefined1 auVar136 [32];
  undefined1 auVar137 [32];
  undefined1 auVar138 [32];
  undefined1 auVar139 [32];
  undefined1 auVar140 [32];
  undefined1 auVar141 [32];
  undefined1 auVar143 [32];
  undefined1 auVar144 [32];
  undefined1 auVar145 [32];
  undefined1 auVar146 [32];
  undefined1 auVar147 [32];
  undefined1 auVar148 [32];
  undefined1 auVar149 [32];
  undefined1 auVar150 [32];
  undefined1 auVar153 [32];
  undefined1 auVar155 [32];
  undefined1 auVar156 [32];
  undefined1 auVar159 [32];
  undefined1 auVar160 [32];
  undefined1 auVar161 [32];
  undefined1 auVar162 [32];
  undefined1 auVar163 [32];
  undefined1 auVar164 [32];
  undefined1 auVar165 [32];
  undefined1 auVar166 [32];
  undefined1 auVar167 [32];
  undefined1 auVar168 [32];
  undefined1 auVar170 [32];
  undefined1 in_ZMM1 [64];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  ulonglong uVar173;
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  double dVar174;
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  undefined1 auVar187 [32];
  undefined1 auVar188 [32];
  undefined1 auVar189 [32];
  undefined1 auVar190 [32];
  undefined1 auVar191 [32];
  undefined1 auVar192 [32];
  undefined1 auVar193 [32];
  undefined1 auVar194 [32];
  undefined1 auVar195 [32];
  undefined1 auVar196 [32];
  undefined1 auVar197 [32];
  undefined1 auVar198 [32];
  undefined1 auVar199 [32];
  undefined1 auVar200 [32];
  undefined1 auVar201 [32];
  undefined1 auVar203 [32];
  undefined1 auVar204 [32];
  undefined1 auVar205 [32];
  undefined1 auVar207 [32];
  undefined1 auVar209 [32];
  undefined1 auVar211 [32];
  undefined1 auVar213 [32];
  undefined1 auVar215 [32];
  undefined1 auVar216 [32];
  double dVar217;
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  double dVar255;
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
  undefined1 auVar234 [32];
  undefined1 auVar235 [32];
  undefined1 auVar236 [32];
  undefined1 auVar237 [32];
  undefined1 auVar239 [32];
  undefined1 auVar240 [32];
  undefined1 auVar241 [32];
  undefined1 auVar242 [32];
  undefined1 auVar243 [32];
  undefined1 auVar244 [32];
  undefined1 auVar245 [32];
  undefined1 auVar249 [32];
  undefined1 auVar250 [32];
  undefined1 auVar252 [32];
  undefined1 auVar256 [16];
  undefined1 auVar257 [16];
  undefined1 auVar258 [16];
  undefined1 auVar259 [16];
  undefined1 auVar260 [16];
  undefined1 auVar261 [16];
  undefined1 auVar262 [16];
  undefined1 auVar263 [16];
  undefined1 auVar264 [16];
  undefined1 auVar265 [16];
  undefined1 auVar266 [32];
  undefined1 auVar267 [32];
  undefined1 auVar268 [32];
  undefined1 auVar269 [32];
  undefined1 auVar270 [32];
  undefined1 auVar271 [32];
  undefined1 auVar273 [32];
  undefined1 auVar276 [32];
  undefined1 auVar277 [32];
  undefined1 auVar278 [32];
  undefined1 auVar279 [32];
  undefined1 auVar284 [16];
  undefined1 auVar285 [16];
  undefined1 auVar286 [16];
  undefined1 auVar287 [16];
  undefined1 auVar288 [16];
  undefined1 auVar289 [16];
  double dVar282;
  double dVar314;
  undefined1 auVar290 [16];
  undefined1 auVar291 [16];
  double dVar283;
  undefined1 auVar292 [16];
  undefined1 auVar293 [16];
  undefined1 auVar294 [16];
  undefined1 auVar295 [16];
  undefined1 auVar296 [16];
  undefined1 auVar297 [16];
  undefined1 auVar298 [16];
  undefined1 auVar299 [16];
  undefined1 auVar300 [32];
  undefined1 auVar301 [32];
  undefined1 auVar302 [32];
  undefined1 auVar305 [32];
  undefined1 auVar306 [32];
  undefined1 auVar307 [32];
  undefined1 auVar308 [32];
  undefined1 auVar309 [32];
  undefined1 auVar310 [32];
  undefined1 auVar313 [32];
  undefined1 auVar315 [16];
  undefined1 auVar316 [16];
  undefined1 auVar317 [16];
  undefined1 auVar318 [16];
  undefined1 auVar319 [16];
  undefined1 auVar320 [16];
  undefined1 auVar321 [16];
  undefined1 auVar322 [16];
  undefined1 auVar323 [16];
  undefined1 auVar324 [16];
  undefined1 auVar325 [16];
  undefined1 auVar326 [16];
  undefined1 auVar327 [16];
  double dVar340;
  undefined1 auVar329 [32];
  undefined1 auVar330 [32];
  undefined1 auVar332 [32];
  double dVar341;
  undefined1 auVar334 [32];
  undefined1 auVar335 [32];
  undefined1 auVar337 [32];
  undefined1 auVar338 [32];
  undefined1 auVar342 [16];
  undefined1 auVar343 [16];
  undefined1 auVar344 [16];
  undefined1 auVar345 [16];
  undefined1 auVar346 [16];
  undefined1 auVar347 [16];
  undefined1 auVar348 [16];
  undefined1 auVar349 [16];
  undefined1 auVar350 [16];
  undefined1 auVar351 [16];
  undefined1 auVar352 [16];
  undefined1 auVar353 [16];
  undefined1 auVar354 [16];
  undefined1 auVar355 [16];
  undefined1 auVar356 [32];
  undefined1 auVar357 [32];
  undefined1 auVar359 [32];
  undefined1 auVar360 [32];
  undefined1 auVar365 [32];
  double dVar370;
  undefined1 auVar371 [16];
  undefined1 auVar372 [16];
  undefined1 auVar373 [16];
  undefined1 auVar374 [16];
  undefined1 auVar375 [16];
  undefined1 auVar376 [16];
  undefined1 auVar377 [16];
  undefined1 auVar378 [16];
  undefined1 auVar380 [32];
  undefined1 auVar381 [32];
  undefined1 auVar383 [32];
  undefined1 auVar384 [16];
  undefined1 auVar385 [16];
  undefined1 auVar386 [16];
  undefined1 auVar387 [16];
  undefined1 auVar388 [16];
  undefined1 auVar389 [16];
  undefined1 auVar390 [16];
  undefined1 auVar391 [16];
  undefined1 auVar392 [16];
  undefined1 auVar394 [32];
  undefined1 auVar397 [32];
  undefined1 auVar400 [32];
  undefined1 auVar402 [32];
  undefined1 auVar403 [16];
  undefined1 auVar404 [16];
  undefined1 auVar405 [16];
  undefined1 auVar406 [16];
  undefined1 auVar407 [16];
  undefined1 auVar409 [32];
  undefined1 auVar411 [32];
  undefined1 auVar412 [32];
  undefined1 auVar413 [32];
  undefined1 auVar414 [16];
  undefined1 auVar415 [16];
  undefined1 auVar416 [16];
  undefined1 auVar417 [16];
  undefined1 auVar418 [16];
  undefined1 auVar421 [32];
  undefined1 auVar422 [32];
  undefined1 auVar423 [16];
  undefined1 auVar424 [16];
  undefined1 auVar425 [16];
  undefined1 auVar426 [16];
  undefined1 auVar427 [16];
  undefined1 auVar428 [16];
  undefined1 auVar429 [16];
  undefined1 auVar430 [16];
  undefined1 auVar431 [32];
  undefined1 auVar432 [32];
  undefined1 auVar433 [32];
  undefined1 auVar434 [16];
  undefined1 auVar435 [16];
  undefined1 auVar436 [16];
  undefined1 auVar437 [16];
  undefined1 auVar438 [16];
  undefined1 auVar439 [16];
  undefined1 auVar440 [16];
  undefined1 auVar441 [32];
  undefined1 auVar442 [32];
  undefined1 auVar443 [16];
  undefined1 auVar444 [16];
  undefined1 auVar445 [16];
  undefined1 auVar446 [16];
  undefined1 auVar447 [16];
  undefined1 auVar448 [16];
  undefined1 auVar450 [32];
  undefined1 auVar452 [16];
  undefined1 auVar453 [16];
  undefined1 auVar454 [32];
  undefined1 auVar455 [32];
  undefined1 local_288 [16];
  double dStack_278;
  double dStack_270;
  undefined1 local_268 [16];
  double dStack_258;
  double dStack_250;
  undefined1 local_1a8 [16];
  undefined1 local_148 [16];
  double dStack_138;
  double dStack_130;
  undefined1 auVar48 [32];
  undefined1 auVar56 [32];
  undefined1 auVar64 [32];
  undefined1 auVar66 [32];
  undefined1 auVar70 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar77 [32];
  undefined1 auVar79 [32];
  undefined1 auVar83 [32];
  undefined1 auVar87 [32];
  undefined1 auVar89 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar142 [32];
  undefined1 auVar151 [32];
  undefined1 auVar152 [32];
  undefined1 auVar154 [32];
  undefined1 auVar157 [32];
  undefined1 auVar158 [32];
  undefined1 auVar169 [32];
  undefined1 auVar171 [32];
  undefined1 auVar172 [32];
  undefined1 auVar202 [32];
  undefined1 auVar206 [32];
  undefined1 auVar208 [32];
  undefined1 auVar210 [32];
  undefined1 auVar212 [32];
  undefined1 auVar214 [32];
  undefined1 auVar238 [32];
  undefined1 auVar246 [32];
  undefined1 auVar247 [32];
  undefined1 auVar248 [32];
  undefined1 auVar251 [32];
  undefined1 auVar253 [32];
  undefined1 auVar254 [32];
  undefined1 auVar272 [32];
  undefined1 auVar274 [32];
  undefined1 auVar275 [32];
  undefined1 auVar280 [32];
  undefined1 auVar281 [32];
  undefined1 auVar303 [32];
  undefined1 auVar304 [32];
  undefined1 auVar311 [32];
  undefined1 auVar312 [32];
  undefined1 auVar328 [32];
  undefined1 auVar331 [32];
  undefined1 auVar333 [32];
  undefined1 auVar336 [32];
  undefined1 auVar339 [32];
  undefined1 auVar358 [32];
  undefined1 auVar361 [32];
  undefined1 auVar362 [32];
  undefined1 auVar363 [32];
  undefined1 auVar364 [32];
  undefined1 auVar366 [32];
  undefined1 auVar367 [32];
  undefined1 auVar368 [32];
  undefined1 auVar369 [32];
  undefined1 auVar379 [32];
  undefined1 auVar382 [32];
  undefined1 auVar393 [32];
  undefined1 auVar395 [32];
  undefined1 auVar396 [32];
  undefined1 auVar398 [32];
  undefined1 auVar399 [32];
  undefined1 auVar401 [32];
  undefined1 auVar408 [32];
  undefined1 auVar410 [32];
  undefined1 auVar419 [32];
  undefined1 auVar420 [32];
  undefined1 auVar449 [32];
  undefined1 auVar451 [32];
  
  auVar259 = vpcmpeqd_avx(in_ZMM1._0_16_,in_ZMM1._0_16_);
  auVar23 = vpcmpgtd_avx(*(undefined1 (*) [16])(*param_4 + 0x10),auVar259);
  auVar108 = SUB3216(*param_4,0);
  auVar259 = vpcmpgtd_avx(auVar108,auVar259);
  auVar259 = vpor_avx(auVar259,auVar23);
  if ((((SUB161(auVar259 >> 0x1f,0) & 1) == 0 && (SUB161(auVar259 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar259 >> 0x5f,0) & 1) == 0) && -1 < auVar259[0xf]) {
    auVar23._8_8_ = 0;
    auVar23._0_8_ = param_1[0x22];
    auVar57._24_8_ = 0;
    auVar57._0_24_ = *(undefined1 (*) [24])(param_1 + 0x20);
    auVar258._8_8_ = 0;
    auVar258._0_8_ = param_1[0x30];
    auVar138._24_8_ = 0;
    auVar138._0_24_ = *(undefined1 (*) [24])(param_1 + 0x2e);
    auVar57 = vsubpd_avx(auVar57,auVar138);
    auVar108 = auVar57._0_16_;
    auVar259 = vshufpd_avx(auVar108,auVar108,1);
    auVar17 = vsubpd_avx(auVar23,auVar258);
    dVar217 = auVar17._0_8_;
    auVar343._0_8_ = (ulonglong)dVar217 ^ __real_8000000000000000;
    auVar343._8_8_ = auVar17._8_8_ ^ __real_8000000000000000;
    auVar373._0_8_ = (double)(auVar259._0_8_ ^ __real_8000000000000000);
    auVar373._8_8_ = (double)(auVar259._8_8_ ^ __real_8000000000000000);
    auVar109._0_8_ = auVar57._0_8_;
    auVar223._0_8_ = (ulonglong)auVar109._0_8_ ^ __real_8000000000000000;
    dVar102 = auVar57._8_8_;
    auVar223._8_8_ = (ulonglong)dVar102 ^ __real_8000000000000000;
    auVar57 = vperm2f128_avx(auVar57,auVar57,0x11);
    dVar98 = auVar57._0_8_;
    dVar100 = auVar57._16_8_;
    dVar16 = param_1[0x4c];
    auVar387._8_8_ = 0;
    auVar387._0_8_ = dVar16;
    dVar103 = param_1[0x4d];
    auVar259._8_8_ = 0;
    auVar259._0_8_ = dVar103;
    auVar259 = vmovlhps_avx(auVar259,auVar387);
    auVar431._0_8_ = auVar259._0_8_ * dVar98;
    auVar431._8_8_ = auVar259._8_8_ * dVar98;
    auVar431._16_8_ = dVar16 * dVar100;
    auVar431._24_8_ = dVar100 * 0.0;
    auVar23 = vshufpd_avx(auVar108,auVar108,3);
    dVar283 = param_1[0x51];
    auVar405._8_8_ = dVar283;
    auVar405._0_8_ = dVar283;
    dVar96 = param_1[0x50];
    auVar417._8_8_ = dVar96;
    auVar417._0_8_ = dVar96;
    auVar259 = vmovlhps_avx(auVar405,auVar417);
    dVar255 = auVar23._0_8_;
    auVar450._0_8_ = dVar255 * auVar259._0_8_;
    dVar282 = auVar23._8_8_;
    auVar450._8_8_ = dVar282 * auVar259._8_8_;
    auVar450._16_8_ = dVar255 * dVar96;
    auVar450._24_8_ = dVar282 * dVar96;
    auVar57 = vsubpd_avx(auVar450,auVar431);
    auVar23 = vunpcklpd_avx(auVar343,auVar17);
    auVar58._0_8_ = dVar283 * dVar98;
    auVar58._8_8_ = dVar283 * dVar98;
    auVar58._16_8_ = dVar103 * dVar100;
    auVar58._24_8_ = dVar100 * 0.0;
    dVar98 = param_1[0x52];
    auVar425._8_8_ = dVar98;
    auVar425._0_8_ = dVar98;
    auVar442._0_8_ = dVar255 * dVar98;
    auVar442._8_8_ = dVar282 * dVar98;
    auVar442._16_8_ = dVar255 * dVar283;
    auVar442._24_8_ = dVar282 * dVar283;
    auVar58 = vsubpd_avx(auVar442,auVar58);
    auVar259 = vshufpd_avx(auVar108,auVar223,1);
    local_288._0_8_ = param_1[0x1e] + auVar57._0_8_ * auVar23._0_8_ + auVar259._0_8_ * auVar58._0_8_
    ;
    local_288._8_8_ = auVar57._8_8_ * auVar23._8_8_ + auVar259._8_8_ * auVar58._8_8_ + 0.0;
    dStack_278 = auVar57._16_8_ * auVar373._0_8_ + auVar109._0_8_ * auVar58._16_8_ + 0.0;
    dStack_270 = auVar57._24_8_ * auVar373._8_8_ + dVar102 * auVar58._24_8_ + 0.0;
    dVar283 = param_1[0x48];
    auVar108 = vshufps_avx(auVar223,auVar223,0x44);
    auVar17 = vunpcklpd_avx(auVar17,auVar373);
    auVar259 = vmovlhps_avx(auVar417,auVar387);
    auVar23 = vmovlhps_avx(auVar425,auVar405);
    auVar109._8_8_ = auVar109._0_8_;
    auVar139._16_16_ = auVar109;
    auVar139._0_16_ = auVar109;
    auVar57 = vblendpd_avx(auVar139,ZEXT1632(auVar223),1);
    auVar374._0_8_ =
         param_1[0x1e] +
         auVar17._0_8_ * (dVar217 * dVar283 + auVar108._0_8_ * dVar96) +
         auVar57._0_8_ * (dVar217 * auVar259._0_8_ + auVar108._0_8_ * auVar23._0_8_);
    auVar374._8_8_ =
         auVar17._8_8_ * (dVar217 * dVar283 + auVar108._8_8_ * dVar96) +
         auVar57._8_8_ * (dVar217 * auVar259._8_8_ + auVar108._8_8_ * auVar23._8_8_) + 0.0;
    auVar379._16_8_ =
         param_1[0x1e] +
         auVar373._0_8_ * (auVar373._0_8_ * dVar283 + auVar109._0_8_ * dVar16) +
         auVar57._16_8_ * (auVar373._0_8_ * dVar16 + auVar109._0_8_ * dVar103);
    auVar379._0_16_ = auVar374;
    auVar379._24_8_ =
         auVar373._8_8_ * (auVar373._8_8_ * dVar283 + dVar102 * 0.0) +
         auVar57._24_8_ * (auVar373._8_8_ * 0.0 + dVar102 * 0.0) + 0.0;
    auVar108._8_8_ = 0;
    auVar108._0_8_ = param_1[0x25];
    auVar140._24_8_ = 0;
    auVar140._0_24_ = *(undefined1 (*) [24])(param_1 + 0x23);
    auVar317._8_8_ = 0;
    auVar317._0_8_ = param_1[0x33];
    auVar267._24_8_ = 0;
    auVar267._0_24_ = *(undefined1 (*) [24])(param_1 + 0x31);
    auVar57 = vsubpd_avx(auVar140,auVar267);
    auVar109 = auVar57._0_16_;
    auVar259 = vshufpd_avx(auVar109,auVar109,1);
    auVar23 = vsubpd_avx(auVar108,auVar317);
    dVar174 = auVar23._0_8_;
    auVar17._0_8_ = (ulonglong)dVar174 ^ __real_8000000000000000;
    auVar17._8_8_ = auVar23._8_8_ ^ __real_8000000000000000;
    auVar418._0_8_ = (double)(auVar259._0_8_ ^ __real_8000000000000000);
    auVar418._8_8_ = (double)(auVar259._8_8_ ^ __real_8000000000000000);
    dVar16 = param_1[0x5d];
    auVar436._8_8_ = 0;
    auVar436._0_8_ = dVar16;
    dVar103 = param_1[0x5c];
    auVar445._8_8_ = 0;
    auVar445._0_8_ = dVar103;
    dVar283 = param_1[0x61];
    auVar426._8_8_ = dVar283;
    auVar426._0_8_ = dVar283;
    dVar282 = auVar57._0_8_;
    auVar286._0_8_ = (ulonglong)dVar282 ^ __real_8000000000000000;
    dVar314 = auVar57._8_8_;
    auVar286._8_8_ = (ulonglong)dVar314 ^ __real_8000000000000000;
    auVar57 = vperm2f128_avx(auVar57,auVar57,0x11);
    dVar100 = auVar57._0_8_;
    dVar102 = auVar57._16_8_;
    auVar259 = vunpcklpd_avx(auVar436,auVar445);
    auVar268._0_8_ = dVar100 * auVar259._0_8_;
    auVar268._8_8_ = dVar100 * auVar259._8_8_;
    auVar268._16_8_ = dVar102 * dVar103;
    auVar268._24_8_ = dVar102 * 0.0;
    auVar259 = vshufpd_avx(auVar109,auVar109,3);
    dVar96 = param_1[0x60];
    auVar22._8_8_ = dVar96;
    auVar22._0_8_ = dVar96;
    auVar108 = vunpcklpd_avx(auVar426,auVar22);
    dVar217 = auVar259._0_8_;
    auVar360._0_8_ = dVar217 * auVar108._0_8_;
    dVar255 = auVar259._8_8_;
    auVar360._8_8_ = dVar255 * auVar108._8_8_;
    auVar360._16_8_ = dVar217 * dVar96;
    auVar360._24_8_ = dVar255 * dVar96;
    auVar57 = vsubpd_avx(auVar360,auVar268);
    dVar98 = param_1[0x62];
    auVar453._8_8_ = dVar98;
    auVar453._0_8_ = dVar98;
    auVar108 = vunpcklpd_avx(auVar17,auVar23);
    auVar141._0_8_ = dVar100 * dVar283;
    auVar141._8_8_ = dVar100 * dVar283;
    auVar141._16_8_ = dVar102 * dVar16;
    auVar141._24_8_ = dVar102 * 0.0;
    auVar269._0_8_ = dVar217 * dVar98;
    auVar269._8_8_ = dVar255 * dVar98;
    auVar269._16_8_ = dVar217 * dVar283;
    auVar269._24_8_ = dVar255 * dVar283;
    auVar58 = vsubpd_avx(auVar269,auVar141);
    auVar259 = vshufpd_avx(auVar109,auVar286,1);
    auVar344._0_8_ = param_1[0x1f] + auVar108._0_8_ * auVar57._0_8_ + auVar259._0_8_ * auVar58._0_8_
    ;
    auVar344._8_8_ = auVar108._8_8_ * auVar57._8_8_ + auVar259._8_8_ * auVar58._8_8_ + 0.0;
    auVar361._16_8_ = auVar418._0_8_ * auVar57._16_8_ + dVar282 * auVar58._16_8_ + 0.0;
    auVar361._0_16_ = auVar344;
    auVar361._24_8_ = auVar418._8_8_ * auVar57._24_8_ + dVar314 * auVar58._24_8_ + 0.0;
    dVar283 = param_1[0x58];
    auVar259 = vshufps_avx(auVar286,auVar286,0x44);
    auVar23 = vunpcklpd_avx(auVar23,auVar418);
    auVar108 = vunpcklpd_avx(auVar22,auVar445);
    auVar17 = vunpcklpd_avx(auVar453,auVar426);
    auVar175._8_8_ = dVar282;
    auVar175._0_8_ = dVar282;
    auVar195._16_16_ = auVar175;
    auVar195._0_16_ = auVar175;
    auVar57 = vblendpd_avx(auVar195,ZEXT1632(auVar286),1);
    auVar110._0_8_ =
         param_1[0x1f] +
         auVar23._0_8_ * (auVar259._0_8_ * dVar96 + dVar174 * dVar283) +
         auVar57._0_8_ * (dVar174 * auVar108._0_8_ + auVar259._0_8_ * auVar17._0_8_);
    auVar110._8_8_ =
         auVar23._8_8_ * (auVar259._8_8_ * dVar96 + dVar174 * dVar283) +
         auVar57._8_8_ * (dVar174 * auVar108._8_8_ + auVar259._8_8_ * auVar17._8_8_) + 0.0;
    auVar142._16_8_ =
         param_1[0x1f] +
         auVar418._0_8_ * (dVar282 * dVar103 + auVar418._0_8_ * dVar283) +
         auVar57._16_8_ * (auVar418._0_8_ * dVar103 + dVar282 * dVar16);
    auVar142._0_16_ = auVar110;
    auVar142._24_8_ =
         auVar418._8_8_ * (dVar314 * 0.0 + auVar418._8_8_ * dVar283) +
         auVar57._24_8_ * (auVar418._8_8_ * 0.0 + dVar314 * 0.0) + 0.0;
    auVar259 = vshufpd_avx(auVar344,auVar344,1);
    auVar23 = vshufpd_avx(auVar110,auVar110,1);
    auVar239._16_16_ = auVar23;
    auVar239._0_16_ = auVar23;
    auVar57 = vblendpd_avx(auVar239,ZEXT1632(auVar259),1);
    auVar259 = vshufpd_avx(local_288,local_288,1);
    auVar23 = vshufpd_avx(auVar374,auVar374,1);
    auVar270._16_16_ = auVar23;
    auVar270._0_16_ = auVar23;
    auVar58 = vblendpd_avx(auVar270,ZEXT1632(auVar259),1);
    auVar388._0_8_ = auVar58._0_8_ + auVar57._0_8_;
    auVar388._8_8_ = auVar58._8_8_ + auVar57._8_8_;
    auVar396._16_8_ = auVar58._16_8_ + auVar57._16_8_;
    auVar396._0_16_ = auVar388;
    auVar396._24_8_ = auVar58._24_8_ + auVar57._24_8_;
    auVar57 = vblendpd_avx(auVar142,ZEXT1632(auVar361._16_16_),1);
    auVar406._0_8_ = (double)local_288._0_8_ + auVar344._0_8_;
    auVar406._8_8_ = (double)local_288._8_8_ + auVar344._8_8_;
    auVar410._16_8_ = dStack_278 + auVar361._16_8_;
    auVar410._0_16_ = auVar406;
    auVar410._24_8_ = dStack_270 + auVar361._24_8_;
    auVar58 = vblendpd_avx(auVar379,ZEXT1632(local_288._16_16_),1);
    auVar287._0_8_ = auVar58._0_8_ + auVar57._0_8_;
    auVar287._8_8_ = auVar58._8_8_ + auVar57._8_8_;
    auVar304._16_8_ = auVar58._16_8_ + auVar57._16_8_;
    auVar304._0_16_ = auVar287;
    auVar304._24_8_ = auVar58._24_8_ + auVar57._24_8_;
    auVar57 = vblendpd_avx(auVar410,
                           ___ymm_0010000000000000000000000000000000000000000000000000000000000000,8
                          );
    auVar59._0_8_ =
         auVar57._0_8_ & ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
    auVar59._8_8_ = auVar57._8_8_ & _UNK_150aa8f48;
    auVar59._16_8_ = auVar57._16_8_ & _UNK_150aa8f50;
    auVar59._24_8_ = auVar57._24_8_ & _UNK_150aa8f58;
    auVar57 = vcmppd_avx(auVar59,
                         ___ymm_3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a,6);
    auVar259 = vpackssdw_avx(auVar57._0_16_,auVar57._16_16_);
    dVar16 = param_1[0x1f];
    if ((((SUB161(auVar259 >> 0x1f,0) & 1) == 0 && (SUB161(auVar259 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar259 >> 0x5f,0) & 1) == 0) && -1 < auVar259[0xf]) {
      auVar57 = vblendpd_avx(auVar396,
                             ___ymm_0010000000000000000000000000000000000000000000000000000000000000
                             ,8);
      auVar60._0_8_ =
           auVar57._0_8_ & ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
      auVar60._8_8_ = auVar57._8_8_ & _UNK_150aa8f48;
      auVar60._16_8_ = auVar57._16_8_ & _UNK_150aa8f50;
      auVar60._24_8_ = auVar57._24_8_ & _UNK_150aa8f58;
      auVar57 = vcmppd_avx(auVar60,
                           ___ymm_3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a,6
                          );
      auVar259 = vpackssdw_avx(auVar57._0_16_,auVar57._16_16_);
      if ((((SUB161(auVar259 >> 0x1f,0) & 1) != 0 || (SUB161(auVar259 >> 0x3f,0) & 1) != 0) ||
          (SUB161(auVar259 >> 0x5f,0) & 1) != 0) || auVar259[0xf] < '\0') goto LAB_1409fa946;
      auVar57 = vblendpd_avx(auVar304,
                             ___ymm_0010000000000000000000000000000000000000000000000000000000000000
                             ,8);
      auVar61._0_8_ =
           auVar57._0_8_ & ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
      auVar61._8_8_ = auVar57._8_8_ & _UNK_150aa8f48;
      auVar61._16_8_ = auVar57._16_8_ & _UNK_150aa8f50;
      auVar61._24_8_ = auVar57._24_8_ & _UNK_150aa8f58;
      auVar57 = vcmppd_avx(auVar61,
                           ___ymm_3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a,6
                          );
      auVar259 = vpackssdw_avx(auVar57._0_16_,auVar57._16_16_);
      if ((((SUB161(auVar259 >> 0x1f,0) & 1) != 0 || (SUB161(auVar259 >> 0x3f,0) & 1) != 0) ||
          (SUB161(auVar259 >> 0x5f,0) & 1) != 0) || auVar259[0xf] < '\0') goto LAB_1409fa946;
LAB_1409fb925:
      auVar108 = ZEXT816(0);
      auVar31._8_8_ = 0;
      auVar31._0_8_ = __real_3ff0000000000000;
      auVar17 = ZEXT816(0) << 0x40;
      auVar288 = ZEXT816(0);
      auVar223 = ZEXT816(0) << 0x40;
      auVar23 = ZEXT816(0) << 0x40;
      auVar259 = ZEXT816(0) << 0x40;
      auVar389 = auVar31;
      auVar24 = auVar31;
    }
    else {
LAB_1409fa946:
      auVar57 = vperm2f128_avx(auVar410,auVar304,0x31);
      auVar143._16_16_ = auVar287;
      auVar143._0_16_ = auVar406;
      auVar58 = vunpcklpd_avx(auVar143,auVar57);
      auVar259 = vshufpd_avx(auVar388,auVar388,1);
      auVar3._8_8_ = _UNK_150b54548;
      auVar3._0_8_ = ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
      auVar3._16_8_ = _UNK_150b54550;
      auVar3._24_8_ = _UNK_150b54558;
      auVar57 = vblendpd_avx(ZEXT1632(auVar259),auVar3,0xe);
      auVar62._0_8_ = auVar58._0_8_ * auVar57._0_8_;
      auVar62._8_8_ = auVar58._8_8_ * auVar57._8_8_;
      auVar62._16_8_ = auVar58._16_8_ * auVar57._16_8_;
      auVar62._24_8_ = auVar58._24_8_ * auVar57._24_8_;
      auVar259 = vshufpd_avx(auVar406,auVar406,1);
      auVar144._16_16_ = auVar287;
      auVar144._0_16_ = auVar259;
      auVar57 = vshufpd_avx(auVar144,ZEXT1632(ZEXT816(0)),4);
      auVar259 = vunpcklpd_avx(auVar388,auVar396._16_16_);
      auVar145._0_8_ = auVar57._0_8_ * auVar259._0_8_;
      auVar145._8_8_ = auVar57._8_8_ * auVar259._8_8_;
      auVar145._16_8_ = auVar57._16_8_ * 0.0;
      auVar145._24_8_ = auVar57._24_8_ * 0.0;
      auVar138 = vsubpd_avx(auVar62,auVar145);
      auVar146._8_8_ = auVar287._0_8_;
      auVar146._0_8_ = auVar287._0_8_;
      auVar146._16_8_ = auVar304._16_8_;
      auVar146._24_8_ = auVar304._16_8_;
      auVar57 = vblendpd_avx(auVar146,
                             ___ymm_000000000000000000000000000000003ff00000000000003ff0000000000000
                             ,3);
      auVar58 = vperm2f128_avx(auVar304,auVar304,0x28);
      auVar446._0_8_ =
           auVar57._0_8_ * auVar287._0_8_ +
           auVar58._0_8_ * ___ymm_8000000000000000800000000000000080000000000000008000000000000000;
      auVar446._8_8_ = auVar57._8_8_ * auVar287._8_8_ + auVar58._8_8_ * _UNK_150b513e8;
      auVar451._16_8_ = auVar57._16_8_ * 0.0 + auVar58._16_8_ * _UNK_150b513f0;
      auVar451._0_16_ = auVar446;
      auVar451._24_8_ = auVar57._24_8_ * 0.0 + auVar58._24_8_ * _UNK_150b513f8;
      auVar147._16_16_ = auVar406;
      auVar147._0_16_ = auVar388;
      auVar58 = vshufpd_avx(auVar147,auVar147,3);
      auVar57 = vblendpd_avx(ZEXT832((ulonglong)auVar410._16_8_),auVar396,4);
      auVar148._0_8_ = auVar58._0_8_ * auVar57._0_8_;
      auVar148._8_8_ = auVar58._8_8_ * auVar57._8_8_;
      auVar148._16_8_ = auVar58._16_8_ * auVar57._16_8_;
      auVar148._24_8_ = auVar58._24_8_ * auVar57._24_8_;
      auVar240._16_16_ = auVar388;
      auVar240._0_16_ = auVar406;
      auVar59 = vshufpd_avx(auVar240,auVar240,3);
      auVar58 = vblendpd_avx(ZEXT832((ulonglong)auVar396._16_8_),auVar410,4);
      auVar196._0_8_ = auVar59._0_8_ * auVar58._0_8_;
      auVar196._8_8_ = auVar59._8_8_ * auVar58._8_8_;
      auVar196._16_8_ = auVar59._16_8_ * auVar58._16_8_;
      auVar196._24_8_ = auVar59._24_8_ * auVar58._24_8_;
      auVar139 = vsubpd_avx(auVar148,auVar196);
      dVar103 = auVar138._0_8_;
      auVar59 = vperm2f128_avx(auVar138,auVar138,0x11);
      auVar58 = vshufpd_avx(auVar59,auVar59,0xf);
      auVar23 = auVar138._0_16_;
      auVar259 = vshufpd_avx(auVar23,auVar23,3);
      auVar149._0_8_ = dVar103 * auVar58._0_8_ + auVar259._0_8_ * auVar59._0_8_;
      auVar149._8_8_ = dVar103 * auVar58._8_8_ + auVar259._8_8_ * auVar59._0_8_;
      auVar149._16_8_ = dVar103 * auVar58._16_8_ + auVar259._0_8_ * auVar59._16_8_;
      auVar149._24_8_ = dVar103 * auVar58._24_8_ + auVar259._8_8_ * auVar59._16_8_;
      auVar197._16_16_ = auVar446;
      auVar197._0_16_ = auVar446;
      auVar59 = vperm2f128_avx(auVar451,auVar451,0x11);
      auVar59 = vshufpd_avx(auVar197,auVar59,0xc);
      dVar96 = auVar139._0_8_;
      auVar198._0_8_ = dVar96 * auVar59._0_8_;
      dVar98 = auVar139._8_8_;
      auVar198._8_8_ = dVar98 * auVar59._8_8_;
      dVar100 = auVar139._16_8_;
      auVar198._16_8_ = dVar100 * auVar59._16_8_;
      dVar102 = auVar139._24_8_;
      auVar198._24_8_ = dVar102 * auVar59._24_8_;
      auVar59 = vperm2f128_avx(auVar198,auVar198,1);
      auVar199._0_8_ = auVar198._0_8_ + auVar59._0_8_;
      auVar199._8_8_ = auVar198._8_8_ + auVar59._8_8_;
      auVar199._16_8_ = auVar198._16_8_ + auVar59._16_8_;
      auVar199._24_8_ = auVar198._24_8_ + auVar59._24_8_;
      auVar59 = vperm2f128_avx(auVar199,auVar199,1);
      auVar59 = vshufpd_avx(auVar199,auVar59,5);
      auVar200._0_8_ = auVar199._0_8_ + auVar59._0_8_;
      auVar200._8_8_ = auVar199._8_8_ + auVar59._8_8_;
      auVar200._16_8_ = auVar199._16_8_ + auVar59._16_8_;
      auVar200._24_8_ = auVar199._24_8_ + auVar59._24_8_;
      auVar59 = vsubpd_avx(auVar149,auVar200);
      if ((auVar59._0_8_ == 0.0) && (!NAN(auVar59._0_8_))) goto LAB_1409fb925;
      auVar150._0_8_ = dVar103 * 0.0;
      auVar150._8_8_ = dVar103 * 0.0;
      auVar150._16_8_ = auVar138._16_8_ * 0.0;
      auVar150._24_8_ = auVar138._16_8_ * 0.0;
      auVar140 = vperm2f128_avx(auVar150,auVar150,0x11);
      auVar271._0_8_ = auVar406._0_8_ * auVar446._0_8_;
      auVar271._8_8_ = auVar406._8_8_ * auVar446._0_8_;
      auVar271._16_8_ = auVar388._0_8_ * auVar446._0_8_;
      auVar271._24_8_ = auVar388._8_8_ * auVar446._0_8_;
      auVar411._16_16_ = auVar446;
      auVar411._0_16_ = auVar446;
      auVar329._0_8_ = auVar446._0_8_ * auVar406._0_8_;
      auVar329._8_8_ = auVar446._8_8_ * auVar406._0_8_;
      auVar329._16_8_ = auVar446._0_8_ * auVar388._0_8_;
      auVar329._24_8_ = auVar446._8_8_ * auVar388._0_8_;
      auVar138 = vsubpd_avx(auVar271,auVar329);
      auVar195 = vsubpd_avx(auVar140,auVar138);
      auVar259 = vshufpd_avx(auVar23,auVar23,3);
      auVar111._0_8_ = auVar259._0_8_ * 0.0;
      auVar111._8_8_ = auVar259._8_8_ * 0.0;
      auVar260._0_8_ = dVar96 * __real_3ff0000000000000;
      auVar260._8_8_ = dVar98 * 0.0;
      auVar272._16_8_ = dVar100 * 0.0;
      auVar272._0_16_ = auVar260;
      auVar272._24_8_ = dVar102 * 0.0;
      auVar330._16_16_ = auVar260;
      auVar330._0_16_ = auVar23;
      auVar142 = vshufpd_avx(auVar272,auVar330,4);
      auVar318._0_8_ =
           dVar96 * ___ymm_00000000000000003ff000000000000000000000000000000000000000000000;
      auVar318._8_8_ = dVar98 * _UNK_150aa8e88;
      auVar331._16_8_ = dVar100 * _DAT_150aa8e90;
      auVar331._0_16_ = auVar318;
      auVar331._24_8_ = dVar102 * _UNK_150aa8e98;
      auVar380._16_16_ = auVar318;
      auVar380._0_16_ = auVar23;
      auVar138 = vblendpd_avx(auVar331,auVar380,8);
      auVar201._0_8_ = auVar406._0_8_ * auVar58._0_8_;
      auVar201._8_8_ = auVar406._8_8_ * auVar58._8_8_;
      auVar201._16_8_ = auVar388._0_8_ * auVar58._16_8_;
      auVar201._24_8_ = auVar388._8_8_ * auVar58._24_8_;
      auVar141 = vperm2f128_avx(auVar451,auVar451,0x11);
      auVar58 = vblendpd_avx(auVar411,auVar141,10);
      auVar140 = vunpcklpd_avx(ZEXT1632(ZEXT816(0)),ZEXT1632(auVar410._16_16_));
      auVar397._8_8_ = auVar388._0_8_;
      auVar397._0_8_ = auVar388._0_8_;
      auVar397._16_8_ = auVar396._16_8_;
      auVar397._24_8_ = auVar396._16_8_;
      auVar140 = vblendpd_avx(auVar140,auVar397,8);
      auVar141 = vblendpd_avx(auVar141,auVar411,10);
      auVar305._0_8_ = auVar58._0_8_ * auVar57._0_8_ + auVar140._0_8_ * auVar141._0_8_;
      auVar305._8_8_ = auVar58._8_8_ * auVar57._8_8_ + auVar140._8_8_ * auVar141._8_8_;
      auVar305._16_8_ = auVar58._16_8_ * auVar57._16_8_ + auVar140._16_8_ * auVar141._16_8_;
      auVar305._24_8_ = auVar58._24_8_ * auVar57._24_8_ + auVar140._24_8_ * auVar141._24_8_;
      auVar58 = vsubpd_avx(auVar201,auVar305);
      auVar57 = vdivpd_avx(___ymm_3ff0000000000000bff0000000000000bff00000000000003ff0000000000000,
                           auVar59);
      auVar389._0_8_ = auVar58._0_8_ * auVar57._0_8_;
      auVar389._8_8_ = auVar58._8_8_ * auVar57._8_8_;
      dVar96 = auVar57._16_8_;
      auVar398._16_8_ = auVar58._16_8_ * dVar96;
      auVar398._0_16_ = auVar389;
      dVar98 = auVar57._24_8_;
      auVar398._24_8_ = auVar58._24_8_ * dVar98;
      auVar259 = vshufpd_avx(auVar389,auVar389,1);
      auVar223 = auVar398._16_16_;
      auVar31 = vshufpd_avx(auVar223,auVar223,1);
      auVar23 = vsubpd_avx(auVar142._16_16_,auVar138._16_16_);
      auVar23 = vsubpd_avx(auVar111,auVar23);
      auVar288._0_8_ = auVar23._0_8_ * dVar96;
      auVar288._8_8_ = auVar23._8_8_ * dVar98;
      auVar23 = vshufpd_avx(auVar288,auVar288,1);
      auVar112._0_8_ = auVar195._0_8_ * auVar57._0_8_;
      auVar112._8_8_ = auVar195._8_8_ * auVar57._8_8_;
      auVar151._16_8_ = auVar195._16_8_ * dVar96;
      auVar151._0_16_ = auVar112;
      auVar151._24_8_ = auVar195._24_8_ * dVar98;
      auVar108 = vshufpd_avx(auVar112,auVar112,1);
      auVar17 = vshufpd_avx(auVar151._16_16_,auVar151._16_16_,1);
      auVar109 = vshufpd_avx(auVar139._16_16_,auVar139._16_16_,1);
      auVar110 = vshufpd_avx(auVar139._0_16_,auVar139._0_16_,1);
      auVar175 = vshufpd_avx(auVar57._16_16_,auVar57._16_16_,1);
      auVar24._8_8_ = 0;
      auVar24._0_8_ = (dVar103 - (auVar109._0_8_ * 0.0 + auVar110._0_8_ * 0.0)) * auVar175._0_8_;
    }
    auVar108 = vunpcklpd_avx(auVar17,auVar108);
    auVar17 = vunpcklpd_avx(auVar223,auVar389);
    auVar259 = vunpcklpd_avx(auVar31,auVar259);
    dVar103 = *param_2;
    dVar96 = param_2[1];
    dVar98 = param_2[2];
    auVar32._0_8_ =
         param_3 * (auVar259._0_8_ * dVar103 + auVar17._0_8_ * dVar96 + auVar108._0_8_ * dVar98);
    auVar32._8_8_ =
         param_3 * (auVar259._8_8_ * dVar103 + auVar17._8_8_ * dVar96 + auVar108._8_8_ * dVar98);
    dStack_258 = param_3 * (auVar23._0_8_ * dVar103 + auVar288._0_8_ * dVar96 +
                           auVar24._0_8_ * dVar98);
    local_268 = auVar32;
    dStack_250 = param_3 * (auVar23._8_8_ * dVar103 + auVar288._8_8_ * dVar96 +
                           auVar24._8_8_ * dVar98);
    dVar103 = param_1[0x1e];
    auVar162._0_8_ = dVar16 * auVar32._0_8_;
    auVar162._8_8_ = dVar16 * auVar32._8_8_;
    auVar162._16_8_ = dVar16 * dStack_258;
    auVar162._24_8_ = dVar16 * dStack_250;
    auVar350._8_8_ = 0;
    auVar350._0_8_ = param_1[0x20];
    auVar407._8_8_ = 0;
    auVar407._0_8_ = param_1[0x21];
    auVar448._8_8_ = 0;
    auVar448._0_8_ = param_1[0x48];
    auVar439._8_8_ = 0;
    auVar439._0_8_ = param_1[0x49];
    auVar276._16_16_ = auVar32;
    auVar276._0_16_ = auVar32;
    auVar57 = vshufpd_avx(auVar276,ZEXT1632(local_268._16_16_),1);
    auVar1 = *(undefined1 (*) [24])(param_1 + 0x2e);
    auVar277._24_8_ = 0;
    auVar277._0_24_ = auVar1;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = param_1[0x33];
    auVar310._16_8_ = param_1[0x33];
    auVar310._0_16_ = *(undefined1 (*) [16])(param_1 + 0x31);
    auVar310._24_8_ = 0;
    auVar34._0_8_ = dVar103 * auVar32._0_8_ + auVar1._0_8_;
    auVar34._8_8_ = dVar103 * auVar32._8_8_ + auVar1._8_8_;
    auVar75._16_8_ = dVar103 * dStack_258 + auVar1._16_8_;
    auVar75._0_16_ = auVar34;
    auVar75._24_8_ = dVar103 * dStack_250 + 0.0;
    auVar227._8_8_ = 0;
    auVar227._0_8_ = param_1[0x50];
    auVar429._8_8_ = 0;
    auVar429._0_8_ = param_1[0x51];
    auVar8._8_8_ = dVar283;
    auVar8._0_8_ = dVar283;
    auVar259 = vmovhps_avx(auVar8,param_1[0x59]);
    dVar16 = param_1[0x5a];
    *(undefined1 (*) [16])(param_1 + 0x2e) = auVar34;
    auVar58 = vsubpd_avx(auVar310,auVar162);
    auVar23 = vunpcklpd_avx(auVar75._16_16_,auVar58._0_16_);
    *(undefined1 (*) [16])(param_1 + 0x30) = auVar23;
    auVar23 = vshufpd_avx(auVar58._0_16_,auVar58._16_16_,1);
    *(undefined1 (*) [16])(param_1 + 0x32) = auVar23;
    dVar15 = _UNK_150b54438;
    dVar174 = _UNK_150b54430;
    dVar314 = _UNK_150b54428;
    dVar282 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
    dVar255 = _UNK_150b54418;
    dVar217 = _UNK_150b54410;
    dVar102 = _UNK_150b54408;
    dVar100 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
    dVar98 = _UNK_15076c6f8;
    dVar96 = ___xmm_bff00000000000003ff0000000000000;
    local_288._0_8_ = auVar57._0_8_;
    local_288._8_8_ = auVar57._8_8_;
    dStack_278 = auVar57._16_8_;
    dStack_270 = auVar57._24_8_;
    if (0.0 < dVar103) {
      auVar108 = vunpcklpd_avx(auVar448,auVar439);
      auVar23 = vunpcklpd_avx(auVar350,auVar407);
      auVar163._16_8_ = param_1[0x22];
      auVar163._0_16_ = auVar23;
      auVar163._24_8_ = 0;
      auVar57 = vsubpd_avx(auVar163,auVar277);
      auVar278._0_8_ = auVar57._0_8_ * (double)local_288._0_8_;
      auVar278._8_8_ = auVar57._8_8_ * (double)local_288._8_8_;
      auVar278._16_8_ = auVar57._16_8_ * dStack_278;
      auVar278._24_8_ = auVar57._24_8_ * dStack_270;
      auVar365._16_16_ = auVar57._0_16_;
      auVar365._0_16_ = auVar57._0_16_;
      auVar57 = vshufpd_avx(auVar365,ZEXT1632(auVar57._16_16_),1);
      auVar164._0_8_ = auVar57._0_8_ * auVar32._0_8_;
      auVar164._8_8_ = auVar57._8_8_ * auVar32._8_8_;
      auVar164._16_8_ = auVar57._16_8_ * dStack_258;
      auVar164._24_8_ = auVar57._24_8_ * dStack_250;
      auVar57 = vsubpd_avx(auVar278,auVar164);
      auVar23 = vshufpd_avx(auVar57._0_16_,auVar57._0_16_,3);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = param_1[0x4c];
      auVar10._8_8_ = 0;
      auVar10._0_8_ = param_1[0x4d];
      auVar17 = vunpcklpd_avx(auVar5,auVar10);
      auVar58 = vperm2f128_avx(auVar57,auVar57,0x11);
      auVar109 = vunpcklpd_avx(auVar227,auVar429);
      dVar103 = auVar57._0_8_;
      auVar228._0_8_ =
           auVar108._0_8_ * auVar23._0_8_ + auVar58._0_8_ * auVar17._0_8_ + dVar103 * auVar109._0_8_
      ;
      auVar228._8_8_ =
           auVar108._8_8_ * auVar23._8_8_ + auVar58._0_8_ * auVar17._8_8_ + dVar103 * auVar109._8_8_
      ;
      auVar248._16_8_ =
           param_1[0x4a] * auVar23._0_8_ + auVar58._16_8_ * param_1[0x4e] + dVar103 * param_1[0x52];
      auVar248._0_16_ = auVar228;
      auVar248._24_8_ = auVar23._8_8_ * 0.0 + auVar58._16_8_ * 0.0 + dVar103 * 0.0;
      dVar95 = param_1[0x34];
      auVar293._8_8_ = 0;
      auVar293._0_8_ = param_1[0x37];
      auVar23 = vmovhps_avx(auVar293,param_1[0x36]);
      auVar351._8_8_ = 0;
      auVar351._0_8_ = param_1[0x35];
      auVar108 = vmovhps_avx(auVar351,param_1[0x34]);
      auVar17 = vshufpd_avx(auVar228,auVar228,3);
      auVar57 = vperm2f128_avx(auVar248,auVar248,0x11);
      dVar95 = dVar95 + (___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
                         auVar57._0_8_ * auVar108._0_8_ +
                        auVar17._0_8_ * param_1[0x36] *
                        ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
                        dVar95 * 0.0 +
                        ___xmm_bff00000000000003ff0000000000000 * auVar23._0_8_ * auVar228._0_8_) *
                        ___ymm_3fe00000000000003fe00000000000003fe00000000000003fe0000000000000;
      dVar97 = param_1[0x35] +
               (_UNK_150b54428 * auVar57._0_8_ * auVar108._8_8_ +
               auVar17._8_8_ * param_1[0x37] * _UNK_150b54408 +
               param_1[0x35] * 0.0 + _UNK_15076c6f8 * auVar23._8_8_ * auVar228._0_8_) *
               _UNK_150aa8f28;
      dVar99 = param_1[0x36] +
               (_UNK_150b54430 * auVar57._16_8_ * auVar23._0_8_ +
               auVar17._0_8_ * param_1[0x34] * _UNK_150b54410 +
               param_1[0x36] * 0.0 +
               ___xmm_bff00000000000003ff0000000000000 * auVar108._0_8_ * auVar228._0_8_) *
               _UNK_150aa8f30;
      dVar101 = param_1[0x37] +
                (_UNK_150b54438 * auVar57._16_8_ * auVar23._8_8_ +
                auVar17._8_8_ * param_1[0x35] * _UNK_150b54418 +
                param_1[0x37] * 0.0 + _UNK_15076c6f8 * auVar108._8_8_ * auVar228._0_8_) *
                _UNK_150aa8f38;
      auVar121._0_8_ = dVar95 * dVar95 + dVar99 * dVar99;
      auVar121._8_8_ = dVar97 * dVar97 + dVar101 * dVar101;
      auVar23 = vshufpd_avx(auVar121,auVar121,1);
      dVar103 = auVar121._0_8_ + auVar23._0_8_;
      auVar229._8_8_ = 0;
      auVar229._0_8_ = __real_3e45798ee2308c3a;
      auVar122._8_8_ = 0;
      auVar122._0_8_ = dVar103;
      auVar23 = vcmpsd_avx(auVar229,auVar122,6);
      uVar173 = ~auVar23._0_8_ & __real_ffffffffffffffff;
      dVar103 = __real_3ff0000000000000 / SQRT(dVar103);
      auVar294._0_8_ =
           (double)(((ulonglong)(dVar95 * dVar103) ^
                    ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) &
                   uVar173);
      auVar294._8_8_ = (double)(((ulonglong)(dVar97 * dVar103) ^ _UNK_150b54548) & uVar173);
      auVar311._16_8_ = (double)(((ulonglong)(dVar99 * dVar103) ^ _UNK_150b54550) & uVar173);
      auVar311._0_16_ = auVar294;
      auVar311._24_8_ = (double)(((ulonglong)(dVar101 * dVar103) ^ _UNK_150b54558) & uVar173);
      auVar455._0_8_ =
           (double)((ulonglong)auVar294._0_8_ ^
                   ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
      auVar455._8_8_ = (double)((ulonglong)auVar294._8_8_ ^ _UNK_150b54548);
      auVar455._16_8_ = (double)((ulonglong)auVar311._16_8_ ^ _UNK_150b54550);
      auVar455._24_8_ = (double)((ulonglong)auVar311._24_8_ ^ _UNK_150b54558);
      *(undefined1 (*) [16])(param_1 + 0x34) = auVar294;
      *(undefined1 (*) [16])(param_1 + 0x36) = auVar455._16_16_;
      auVar35._8_8_ = 0;
      auVar35._0_8_ = param_1[4];
      auVar23 = vmovhps_avx(auVar35,param_1[7]);
      auVar76._0_8_ = auVar455._0_8_ * SUB168(*(undefined1 (*) [16])(param_1 + 5),0);
      auVar76._8_8_ = auVar455._8_8_ * SUB168(*(undefined1 (*) [16])(param_1 + 5),8);
      auVar76._16_8_ = auVar455._16_8_ * auVar23._0_8_;
      auVar76._24_8_ = auVar455._24_8_ * auVar23._8_8_;
      auVar165._16_16_ = auVar294;
      auVar165._0_16_ = auVar294;
      auVar59 = vperm2f128_avx(auVar455,auVar455,0x11);
      auVar57 = vshufpd_avx(auVar165,auVar59,9);
      auVar249._0_8_ = param_1[4] * auVar57._0_8_;
      auVar249._8_8_ = param_1[5] * auVar57._8_8_;
      auVar249._16_8_ = param_1[6] * auVar57._16_8_;
      auVar249._24_8_ = param_1[7] * auVar57._24_8_;
      auVar57 = vsubpd_avx(auVar76,auVar249);
      auVar36._0_8_ = auVar57._0_8_ + auVar57._0_8_;
      auVar36._8_8_ = auVar57._8_8_ + auVar57._8_8_;
      auVar77._16_8_ = auVar57._16_8_ + auVar57._16_8_;
      auVar77._0_16_ = auVar36;
      auVar77._24_8_ = auVar57._24_8_ + auVar57._24_8_;
      auVar57 = vshufpd_avx(auVar59,auVar59,0xf);
      auVar250._16_16_ = auVar36;
      auVar250._0_16_ = auVar36;
      auVar58 = vshufpd_avx(auVar250,ZEXT1632(auVar77._16_16_),1);
      dVar101 = auVar57._0_8_;
      dVar340 = auVar57._8_8_;
      dVar341 = auVar57._16_8_;
      dVar370 = auVar57._24_8_;
      auVar279._0_8_ = auVar36._0_8_ * auVar294._0_8_;
      auVar279._8_8_ = auVar36._8_8_ * auVar294._8_8_;
      auVar279._16_8_ = auVar77._16_8_ * auVar311._16_8_;
      auVar279._24_8_ = auVar77._24_8_ * auVar311._24_8_;
      auVar57 = vshufpd_avx(auVar165,ZEXT1632(auVar311._16_16_),1);
      auVar78._0_8_ = auVar36._0_8_ * auVar57._0_8_;
      auVar78._8_8_ = auVar36._8_8_ * auVar57._8_8_;
      auVar78._16_8_ = auVar77._16_8_ * auVar57._16_8_;
      auVar78._24_8_ = auVar77._24_8_ * auVar57._24_8_;
      auVar57 = vperm2f128_avx(auVar279,auVar279,1);
      auVar57 = vshufpd_avx(auVar57,auVar279,4);
      auVar57 = vsubpd_avx(auVar78,auVar57);
      auVar37._0_8_ = param_1[0x2e] + param_1[4] + dVar101 * auVar58._0_8_ + auVar57._0_8_;
      auVar37._8_8_ = param_1[0x2f] + param_1[5] + dVar340 * auVar58._8_8_ + auVar57._8_8_;
      auVar79._16_8_ = param_1[0x30] + param_1[6] + dVar341 * auVar58._16_8_ + auVar57._16_8_;
      auVar79._0_16_ = auVar37;
      auVar79._24_8_ = dVar370 * auVar58._24_8_ + 0.0 + auVar57._24_8_ + 0.0;
      *(undefined1 (*) [16])(param_1 + 0x20) = auVar37;
      dVar103 = (double)vmovlps_avx(auVar79._16_16_);
      param_1[0x22] = dVar103;
      auVar17 = vshufps_avx(auVar294,auVar294,0x44);
      auVar263._8_8_ = 0;
      auVar263._0_8_ = param_1[1];
      auVar23 = vmovhps_avx(auVar263,*param_1);
      auVar324._8_8_ = 0;
      auVar324._0_8_ = param_1[3];
      auVar108 = vmovhps_avx(auVar324,param_1[2]);
      dVar103 = auVar17._0_8_;
      dVar97 = auVar17._8_8_;
      auVar17 = vshufps_avx(auVar294,auVar294,0xee);
      dVar95 = auVar17._0_8_;
      dVar99 = auVar17._8_8_;
      param_1[0x26] =
           dVar282 * auVar23._0_8_ * auVar59._0_8_ +
           *param_1 * dVar101 + auVar108._0_8_ * dVar103 * dVar96 + param_1[2] * dVar95 * dVar100;
      param_1[0x27] =
           dVar314 * auVar23._8_8_ * auVar59._0_8_ +
           param_1[1] * dVar340 + auVar108._8_8_ * dVar97 * dVar98 + param_1[3] * dVar99 * dVar102;
      param_1[0x28] =
           dVar174 * auVar108._0_8_ * auVar59._16_8_ +
           param_1[2] * dVar341 + auVar23._0_8_ * dVar103 * dVar96 + *param_1 * dVar95 * dVar217;
      param_1[0x29] =
           dVar15 * auVar108._8_8_ * auVar59._16_8_ +
           param_1[3] * dVar370 + auVar23._8_8_ * dVar97 * dVar98 + param_1[1] * dVar99 * dVar255;
      dVar96 = auVar455._0_8_ + auVar455._0_8_;
      dVar98 = auVar455._8_8_ + auVar455._8_8_;
      dVar100 = auVar455._16_8_ + auVar455._16_8_;
      dVar102 = auVar455._24_8_ + auVar455._24_8_;
      auVar166._0_8_ = dVar96 * dVar103;
      auVar166._8_8_ = dVar98 * dVar97;
      auVar166._16_8_ = dVar100 * dVar103;
      auVar166._24_8_ = dVar102 * dVar97;
      auVar230._0_8_ = dVar96 * dVar95;
      auVar230._8_8_ = dVar98 * dVar99;
      auVar251._16_8_ = dVar100 * dVar95;
      auVar251._0_16_ = auVar230;
      auVar251._24_8_ = dVar102 * dVar99;
      auVar80._0_8_ = dVar96 * dVar101;
      auVar80._8_8_ = dVar98 * dVar340;
      auVar80._16_8_ = dVar100 * dVar341;
      auVar80._24_8_ = dVar102 * dVar370;
      auVar57 = vperm2f128_avx(auVar251,auVar166,0x21);
      auVar57 = vshufpd_avx(auVar57,ZEXT1632(auVar166._16_16_),4);
      auVar392._0_8_ = auVar80._0_8_ + auVar57._0_8_;
      auVar392._8_8_ = auVar80._8_8_ + auVar57._8_8_;
      auVar401._16_8_ = auVar80._16_8_ + auVar57._16_8_;
      auVar401._0_16_ = auVar392;
      auVar401._24_8_ = auVar80._24_8_ + auVar57._24_8_;
      auVar59 = vsubpd_avx(auVar57,auVar80);
      auVar23 = vshufpd_avx(auVar230,auVar230,1);
      auVar123._8_8_ = auVar166._0_8_;
      auVar123._0_8_ = auVar166._0_8_;
      auVar167._16_16_ = auVar123;
      auVar167._0_16_ = auVar123;
      auVar57 = vblendpd_avx(auVar167,ZEXT1632(auVar23),1);
      auVar81._16_16_ = auVar23;
      auVar81._0_16_ = auVar23;
      auVar58 = vblendpd_avx(ZEXT1632(CONCAT88(auVar311._16_8_ * dVar100,auVar311._16_8_ * dVar100))
                             ,auVar81,0xc);
      auVar82._0_8_ = auVar57._0_8_ + auVar58._0_8_;
      auVar82._8_8_ = auVar57._8_8_ + auVar58._8_8_;
      auVar82._16_8_ = auVar57._16_8_ + auVar58._16_8_;
      auVar82._24_8_ = auVar57._24_8_ + auVar58._24_8_;
      auVar168._8_8_ = __real_3ff0000000000000;
      auVar168._0_8_ = __real_3ff0000000000000;
      auVar168._16_8_ = __real_3ff0000000000000;
      auVar168._24_8_ = __real_3ff0000000000000;
      auVar58 = vsubpd_avx(auVar168,auVar82);
      dVar102 = auVar58._0_8_;
      dVar103 = param_1[0x18];
      dVar96 = param_1[0x1a];
      auVar57 = vperm2f128_avx(auVar59,auVar59,0x11);
      auVar17 = ZEXT816(0);
      auVar23 = vmovhpd_avx(auVar17,param_1[0x19]);
      dVar98 = auVar23._0_8_;
      dVar100 = auVar23._8_8_;
      auVar23 = vshufpd_avx(auVar392,auVar392,3);
      auVar377._0_8_ = auVar23._0_8_ * 0.0 + dVar98 * auVar57._0_8_ + dVar103 * dVar102;
      auVar377._8_8_ = auVar23._8_8_ * 0.0 + dVar100 * auVar57._0_8_ + dVar102 * 0.0;
      auVar382._16_8_ = dVar96 * auVar23._0_8_ + auVar57._16_8_ * 0.0 + dVar102 * 0.0;
      auVar382._0_16_ = auVar377;
      auVar382._24_8_ = auVar23._8_8_ * 0.0 + auVar57._16_8_ * 0.0 + dVar102 * 0.0;
      auVar57 = vperm2f128_avx(auVar401,auVar401,0x11);
      auVar110 = auVar58._0_16_;
      auVar23 = vshufpd_avx(auVar110,auVar110,3);
      dVar102 = auVar59._0_8_;
      auVar352._0_8_ = dVar102 * 0.0 + dVar103 * auVar57._0_8_ + dVar98 * auVar23._0_8_;
      auVar352._8_8_ = dVar102 * 0.0 + auVar57._0_8_ * 0.0 + dVar100 * auVar23._8_8_;
      auVar366._16_8_ = dVar96 * dVar102 + auVar57._16_8_ * 0.0 + auVar23._0_8_ * 0.0;
      auVar366._0_16_ = auVar352;
      auVar366._24_8_ = dVar102 * 0.0 + auVar57._16_8_ * 0.0 + auVar23._8_8_ * 0.0;
      auVar109 = auVar59._0_16_;
      auVar23 = vshufpd_avx(auVar109,auVar109,3);
      auVar57 = vperm2f128_avx(auVar58,auVar58,0x11);
      auVar295._0_8_ = dVar103 * auVar23._0_8_ + dVar98 * auVar392._0_8_ + auVar57._0_8_ * 0.0;
      auVar295._8_8_ = auVar23._8_8_ * 0.0 + dVar100 * auVar392._0_8_ + auVar57._0_8_ * 0.0;
      auVar312._16_8_ = auVar23._0_8_ * 0.0 + auVar392._0_8_ * 0.0 + dVar96 * auVar57._16_8_;
      auVar312._0_16_ = auVar295;
      auVar312._24_8_ = auVar23._8_8_ * 0.0 + auVar392._0_8_ * 0.0 + auVar57._16_8_ * 0.0;
      auVar252._8_8_ = auVar377._0_8_;
      auVar252._0_8_ = auVar377._0_8_;
      auVar108 = vunpcklpd_avx(auVar110,auVar401._16_16_);
      auVar23 = vshufpd_avx(auVar109,auVar109,1);
      auVar252._16_16_ = auVar23;
      auVar57 = vblendpd_avx(ZEXT1632(auVar108),auVar252,0xc);
      dVar103 = auVar57._0_8_;
      dVar96 = auVar57._8_8_;
      dVar98 = auVar57._16_8_;
      dVar100 = auVar57._24_8_;
      auVar108 = vshufpd_avx(auVar377,auVar377,3);
      auVar23 = vblendpd_avx(auVar110,auVar59._16_16_,1);
      dVar102 = auVar23._0_8_;
      dVar217 = auVar23._8_8_;
      auVar23 = vshufpd_avx(auVar392,auVar109,1);
      auVar59 = vperm2f128_avx(auVar382,auVar382,0x11);
      auVar57 = vblendpd_avx(auVar58,ZEXT1632(auVar23),3);
      dVar255 = auVar57._0_8_;
      dVar282 = auVar57._8_8_;
      dVar314 = auVar57._16_8_;
      dVar174 = auVar57._24_8_;
      auVar264._0_8_ = dVar255 * auVar59._0_8_ + dVar103 * auVar377._0_8_ + dVar102 * auVar108._0_8_
      ;
      auVar264._8_8_ = dVar282 * auVar59._0_8_ + dVar96 * auVar377._0_8_ + dVar217 * auVar108._8_8_;
      auVar280._16_8_ =
           dVar314 * auVar59._16_8_ + dVar98 * auVar377._0_8_ + auVar392._0_8_ * auVar108._0_8_;
      auVar280._0_16_ = auVar264;
      auVar280._24_8_ =
           dVar174 * auVar59._16_8_ + dVar100 * auVar377._0_8_ + auVar392._8_8_ * auVar108._8_8_;
      auVar23 = vshufpd_avx(auVar352,auVar352,3);
      auVar57 = vperm2f128_avx(auVar366,auVar366,0x11);
      auVar38._0_8_ = dVar255 * auVar57._0_8_ + dVar103 * auVar352._0_8_ + dVar102 * auVar23._0_8_;
      auVar38._8_8_ = dVar282 * auVar57._0_8_ + dVar96 * auVar352._0_8_ + dVar217 * auVar23._8_8_;
      auVar83._16_8_ =
           dVar314 * auVar57._16_8_ + dVar98 * auVar352._0_8_ + auVar392._0_8_ * auVar23._0_8_;
      auVar83._0_16_ = auVar38;
      auVar83._24_8_ =
           dVar174 * auVar57._16_8_ + dVar100 * auVar352._0_8_ + auVar392._8_8_ * auVar23._8_8_;
      auVar23 = vshufpd_avx(auVar295,auVar295,3);
      auVar57 = vperm2f128_avx(auVar312,auVar312,0x11);
      auVar124._0_8_ = dVar255 * auVar57._0_8_ + dVar103 * auVar295._0_8_ + dVar102 * auVar23._0_8_;
      auVar124._8_8_ = dVar282 * auVar57._0_8_ + dVar96 * auVar295._0_8_ + dVar217 * auVar23._8_8_;
      auVar169._16_8_ =
           dVar314 * auVar57._16_8_ + dVar98 * auVar295._0_8_ + auVar392._0_8_ * auVar23._0_8_;
      auVar169._0_16_ = auVar124;
      auVar169._24_8_ =
           dVar174 * auVar57._16_8_ + dVar100 * auVar295._0_8_ + auVar392._8_8_ * auVar23._8_8_;
      *(undefined1 (*) [16])(param_1 + 0x48) = auVar264;
      dVar103 = (double)vmovlpd_avx(auVar280._16_16_);
      param_1[0x4a] = dVar103;
      param_1[0x4b] = 0.0;
      *(undefined1 (*) [16])(param_1 + 0x4c) = auVar38;
      dVar103 = (double)vmovlps_avx(auVar83._16_16_);
      param_1[0x4e] = dVar103;
      param_1[0x4f] = 0.0;
      *(undefined1 (*) [16])(param_1 + 0x50) = auVar124;
      dVar103 = (double)vmovlpd_avx(auVar169._16_16_);
      param_1[0x52] = dVar103;
      *(undefined1 (*) [16])(param_1 + 0x55) = auVar17;
      *(undefined1 (*) [16])(param_1 + 0x53) = auVar17;
      param_1[0x57] = 1.0;
    }
    dVar174 = _UNK_150b54438;
    dVar314 = _UNK_150b54430;
    dVar282 = _UNK_150b54428;
    dVar255 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
    dVar217 = _UNK_150b54418;
    dVar102 = _UNK_150b54410;
    dVar100 = _UNK_150b54408;
    dVar98 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
    dVar96 = _UNK_15076c6f8;
    dVar103 = ___xmm_bff00000000000003ff0000000000000;
    if (param_1[0x1f] <= 0.0) goto LAB_1409fc6ac;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = param_1[0x25];
    auVar84._24_8_ = 0;
    auVar84._0_24_ = *(undefined1 (*) [24])(param_1 + 0x23);
    auVar58 = vsubpd_avx(auVar84,auVar310);
    auVar23 = vsubpd_avx(auVar12,auVar33);
    auVar215._16_16_ = auVar58._0_16_;
    auVar215._0_16_ = auVar58._0_16_;
    auVar57 = vshufpd_avx(auVar215,ZEXT1632(auVar23),1);
    auVar170._0_8_ = auVar57._0_8_ * auVar32._0_8_;
    auVar170._8_8_ = auVar57._8_8_ * auVar32._8_8_;
    auVar170._16_8_ = auVar57._16_8_ * dStack_258;
    auVar170._24_8_ = auVar57._24_8_ * dStack_250;
    auVar85._0_8_ = auVar58._0_8_ * (double)local_288._0_8_;
    auVar85._8_8_ = auVar58._8_8_ * (double)local_288._8_8_;
    auVar85._16_8_ = auVar58._16_8_ * dStack_278;
    auVar85._24_8_ = auVar58._24_8_ * dStack_270;
    auVar58 = vsubpd_avx(auVar170,auVar85);
    auVar23 = vshufpd_avx(auVar58._0_16_,auVar58._0_16_,3);
    auVar108 = vunpcklpd_avx(auVar445,auVar436);
    auVar9._8_8_ = dVar283;
    auVar9._0_8_ = dVar283;
    auVar9._16_8_ = dVar283;
    auVar9._24_8_ = dVar283;
    auVar57 = vblendpd_avx(ZEXT1632(auVar259),auVar9,0xc);
    auVar14._8_8_ = dVar16;
    auVar14._0_8_ = dVar16;
    auVar14._16_8_ = dVar16;
    auVar14._24_8_ = dVar16;
    auVar57 = vblendpd_avx(auVar57,auVar14,4);
    auVar59 = vperm2f128_avx(auVar58,auVar58,0x11);
    auVar17 = vunpcklpd_avx(auVar22,auVar426);
    dVar16 = auVar58._0_8_;
    auVar259 = vblendps_avx((undefined1  [16])0x0,auVar453,3);
    auVar265._0_8_ =
         auVar57._0_8_ * auVar23._0_8_ + auVar59._0_8_ * auVar108._0_8_ + dVar16 * auVar17._0_8_;
    auVar265._8_8_ =
         auVar57._8_8_ * auVar23._8_8_ + auVar59._0_8_ * auVar108._8_8_ + dVar16 * auVar17._8_8_;
    auVar281._16_8_ =
         auVar57._16_8_ * auVar23._0_8_ + auVar59._16_8_ * param_1[0x5e] + dVar16 * auVar259._0_8_;
    auVar281._0_16_ = auVar265;
    auVar281._24_8_ =
         auVar57._24_8_ * auVar23._8_8_ + auVar59._16_8_ * 0.0 + dVar16 * auVar259._8_8_;
    dVar283 = param_1[0x38];
    auVar231._8_8_ = 0;
    auVar231._0_8_ = param_1[0x3b];
    auVar259 = vmovhps_avx(auVar231,param_1[0x3a]);
    auVar378._8_8_ = 0;
    auVar378._0_8_ = param_1[0x39];
    auVar23 = vmovhps_avx(auVar378,param_1[0x38]);
    auVar108 = vshufpd_avx(auVar265,auVar265,3);
    auVar57 = vperm2f128_avx(auVar281,auVar281,0x11);
    dVar283 = dVar283 + (auVar57._0_8_ * auVar23._0_8_ *
                         ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
                        auVar108._0_8_ * param_1[0x3a] *
                        ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
                        auVar265._0_8_ * auVar259._0_8_ * ___xmm_bff00000000000003ff0000000000000 +
                        dVar283 * 0.0) *
                        ___ymm_3fe00000000000003fe00000000000003fe00000000000003fe0000000000000;
    dVar15 = param_1[0x39] +
             (auVar57._0_8_ * auVar23._8_8_ * _UNK_150b54428 +
             auVar108._8_8_ * param_1[0x3b] * _UNK_150b54408 +
             auVar265._0_8_ * auVar259._8_8_ * _UNK_15076c6f8 + param_1[0x39] * 0.0) *
             _UNK_150aa8f28;
    dVar95 = param_1[0x3a] +
             (auVar57._16_8_ * auVar259._0_8_ * _UNK_150b54430 +
             auVar108._0_8_ * param_1[0x38] * _UNK_150b54410 +
             auVar265._0_8_ * auVar23._0_8_ * ___xmm_bff00000000000003ff0000000000000 +
             param_1[0x3a] * 0.0) * _UNK_150aa8f30;
    dVar97 = param_1[0x3b] +
             (auVar57._16_8_ * auVar259._8_8_ * _UNK_150b54438 +
             auVar108._8_8_ * param_1[0x39] * _UNK_150b54418 +
             auVar265._0_8_ * auVar23._8_8_ * _UNK_15076c6f8 + param_1[0x3b] * 0.0) * _UNK_150aa8f38
    ;
    auVar296._0_8_ = dVar283 * dVar283 + dVar95 * dVar95;
    auVar296._8_8_ = dVar15 * dVar15 + dVar97 * dVar97;
    auVar259 = vshufpd_avx(auVar296,auVar296,1);
    dVar16 = auVar296._0_8_ + auVar259._0_8_;
    auVar325._8_8_ = 0;
    auVar325._0_8_ = __real_3e45798ee2308c3a;
    auVar297._8_8_ = 0;
    auVar297._0_8_ = dVar16;
    auVar259 = vcmpsd_avx(auVar325,auVar297,6);
    uVar173 = ~auVar259._0_8_ & __real_ffffffffffffffff;
    dVar16 = __real_3ff0000000000000 / SQRT(dVar16);
    auVar353._0_8_ =
         (double)(((ulonglong)(dVar283 * dVar16) ^
                  ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) & uVar173
                 );
    auVar353._8_8_ = (double)(((ulonglong)(dVar15 * dVar16) ^ _UNK_150b54548) & uVar173);
    auVar367._16_8_ = (double)(((ulonglong)(dVar95 * dVar16) ^ _UNK_150b54550) & uVar173);
    auVar367._0_16_ = auVar353;
    auVar367._24_8_ = (double)(((ulonglong)(dVar97 * dVar16) ^ _UNK_150b54558) & uVar173);
    auVar337._0_8_ =
         (double)((ulonglong)auVar353._0_8_ ^
                 ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
    auVar337._8_8_ = (double)((ulonglong)auVar353._8_8_ ^ _UNK_150b54548);
    auVar337._16_8_ = (double)((ulonglong)auVar367._16_8_ ^ _UNK_150b54550);
    auVar337._24_8_ = (double)((ulonglong)auVar367._24_8_ ^ _UNK_150b54558);
    *(undefined1 (*) [16])(param_1 + 0x38) = auVar353;
    *(undefined1 (*) [16])(param_1 + 0x3a) = auVar337._16_16_;
    auVar39._8_8_ = 0;
    auVar39._0_8_ = param_1[0x10];
    auVar259 = vmovhps_avx(auVar39,param_1[0x13]);
    auVar86._0_8_ = SUB168(*(undefined1 (*) [16])(param_1 + 0x11),0) * auVar337._0_8_;
    auVar86._8_8_ = SUB168(*(undefined1 (*) [16])(param_1 + 0x11),8) * auVar337._8_8_;
    auVar86._16_8_ = auVar259._0_8_ * auVar337._16_8_;
    auVar86._24_8_ = auVar259._8_8_ * auVar337._24_8_;
    auVar413._16_16_ = auVar353;
    auVar413._0_16_ = auVar353;
    auVar59 = vperm2f128_avx(auVar337,auVar337,0x11);
    auVar57 = vshufpd_avx(auVar413,auVar59,9);
    auVar383._0_8_ = param_1[0x10] * auVar57._0_8_;
    auVar383._8_8_ = param_1[0x11] * auVar57._8_8_;
    auVar383._16_8_ = param_1[0x12] * auVar57._16_8_;
    auVar383._24_8_ = param_1[0x13] * auVar57._24_8_;
    auVar57 = vsubpd_avx(auVar86,auVar383);
    auVar40._0_8_ = auVar57._0_8_ + auVar57._0_8_;
    auVar40._8_8_ = auVar57._8_8_ + auVar57._8_8_;
    auVar87._16_8_ = auVar57._16_8_ + auVar57._16_8_;
    auVar87._0_16_ = auVar40;
    auVar87._24_8_ = auVar57._24_8_ + auVar57._24_8_;
    auVar57 = vshufpd_avx(auVar59,auVar59,0xf);
    auVar422._16_16_ = auVar40;
    auVar422._0_16_ = auVar40;
    auVar58 = vshufpd_avx(auVar422,ZEXT1632(auVar87._16_16_),1);
    dVar97 = auVar57._0_8_;
    dVar99 = auVar57._8_8_;
    dVar101 = auVar57._16_8_;
    dVar340 = auVar57._24_8_;
    auVar433._0_8_ = auVar40._0_8_ * auVar353._0_8_;
    auVar433._8_8_ = auVar40._8_8_ * auVar353._8_8_;
    auVar433._16_8_ = auVar87._16_8_ * auVar367._16_8_;
    auVar433._24_8_ = auVar87._24_8_ * auVar367._24_8_;
    auVar57 = vshufpd_avx(auVar413,ZEXT1632(auVar367._16_16_),1);
    auVar88._0_8_ = auVar57._0_8_ * auVar40._0_8_;
    auVar88._8_8_ = auVar57._8_8_ * auVar40._8_8_;
    auVar88._16_8_ = auVar57._16_8_ * auVar87._16_8_;
    auVar88._24_8_ = auVar57._24_8_ * auVar87._24_8_;
    auVar57 = vperm2f128_avx(auVar433,auVar433,1);
    auVar57 = vshufpd_avx(auVar57,auVar433,4);
    auVar57 = vsubpd_avx(auVar88,auVar57);
    auVar41._0_8_ = param_1[0x31] + param_1[0x10] + dVar97 * auVar58._0_8_ + auVar57._0_8_;
    auVar41._8_8_ = param_1[0x32] + param_1[0x11] + dVar99 * auVar58._8_8_ + auVar57._8_8_;
    auVar89._16_8_ = param_1[0x33] + param_1[0x12] + dVar101 * auVar58._16_8_ + auVar57._16_8_;
    auVar89._0_16_ = auVar41;
    auVar89._24_8_ = dVar340 * auVar58._24_8_ + 0.0 + auVar57._24_8_ + 0.0;
    *(undefined1 (*) [16])(param_1 + 0x23) = auVar41;
    dVar16 = (double)vmovlps_avx(auVar89._16_16_);
    param_1[0x25] = dVar16;
    auVar108 = vshufps_avx(auVar353,auVar353,0x44);
    auVar430._8_8_ = 0;
    auVar430._0_8_ = param_1[0xd];
    auVar259 = vmovhpd_avx(auVar430,param_1[0xc]);
    auVar440._8_8_ = 0;
    auVar440._0_8_ = param_1[0xf];
    auVar23 = vmovhpd_avx(auVar440,param_1[0xe]);
    dVar16 = auVar108._0_8_;
    dVar15 = auVar108._8_8_;
    auVar108 = vshufps_avx(auVar353,auVar353,0xee);
    dVar283 = auVar108._0_8_;
    dVar95 = auVar108._8_8_;
    param_1[0x2a] =
         auVar259._0_8_ * auVar59._0_8_ * dVar255 +
         param_1[0xe] * dVar283 * dVar98 + param_1[0xc] * dVar97 + auVar23._0_8_ * dVar16 * dVar103;
    param_1[0x2b] =
         auVar259._8_8_ * auVar59._0_8_ * dVar282 +
         param_1[0xf] * dVar95 * dVar100 + param_1[0xd] * dVar99 + auVar23._8_8_ * dVar15 * dVar96;
    param_1[0x2c] =
         auVar23._0_8_ * auVar59._16_8_ * dVar314 +
         param_1[0xc] * dVar283 * dVar102 +
         param_1[0xe] * dVar101 + auVar259._0_8_ * dVar16 * dVar103;
    param_1[0x2d] =
         auVar23._8_8_ * auVar59._16_8_ * dVar174 +
         param_1[0xd] * dVar95 * dVar217 + param_1[0xf] * dVar340 + auVar259._8_8_ * dVar15 * dVar96
    ;
    dVar103 = auVar337._0_8_ + auVar337._0_8_;
    dVar96 = auVar337._8_8_ + auVar337._8_8_;
    dVar98 = auVar337._16_8_ + auVar337._16_8_;
    dVar100 = auVar337._24_8_ + auVar337._24_8_;
    auVar338._0_8_ = dVar16 * dVar103;
    auVar338._8_8_ = dVar15 * dVar96;
    auVar338._16_8_ = dVar16 * dVar98;
    auVar338._24_8_ = dVar15 * dVar100;
    auVar354._0_8_ = dVar103 * dVar283;
    auVar354._8_8_ = dVar96 * dVar95;
    auVar368._16_8_ = dVar98 * dVar283;
    auVar368._0_16_ = auVar354;
    auVar368._24_8_ = dVar100 * dVar95;
    auVar90._0_8_ = dVar97 * dVar103;
    auVar90._8_8_ = dVar99 * dVar96;
    auVar90._16_8_ = dVar101 * dVar98;
    auVar90._24_8_ = dVar340 * dVar100;
    auVar57 = vperm2f128_avx(auVar368,auVar338,0x21);
    auVar57 = vshufpd_avx(auVar57,ZEXT1632(auVar338._16_16_),4);
    auVar232._0_8_ = auVar90._0_8_ + auVar57._0_8_;
    auVar232._8_8_ = auVar90._8_8_ + auVar57._8_8_;
    auVar253._16_8_ = auVar90._16_8_ + auVar57._16_8_;
    auVar253._0_16_ = auVar232;
    auVar253._24_8_ = auVar90._24_8_ + auVar57._24_8_;
    auVar59 = vsubpd_avx(auVar57,auVar90);
    auVar259 = vshufpd_avx(auVar354,auVar354,1);
    auVar298._8_8_ = auVar338._0_8_;
    auVar298._0_8_ = auVar338._0_8_;
    auVar313._16_16_ = auVar298;
    auVar313._0_16_ = auVar298;
    auVar57 = vblendpd_avx(auVar313,ZEXT1632(auVar259),1);
    auVar91._16_16_ = auVar259;
    auVar91._0_16_ = auVar259;
    auVar58 = vblendpd_avx(ZEXT1632(CONCAT88(auVar367._16_8_ * dVar98,auVar367._16_8_ * dVar98)),
                           auVar91,0xc);
    auVar92._0_8_ = auVar57._0_8_ + auVar58._0_8_;
    auVar92._8_8_ = auVar57._8_8_ + auVar58._8_8_;
    auVar92._16_8_ = auVar57._16_8_ + auVar58._16_8_;
    auVar92._24_8_ = auVar57._24_8_ + auVar58._24_8_;
    auVar216._8_8_ = __real_3ff0000000000000;
    auVar216._0_8_ = __real_3ff0000000000000;
    auVar216._16_8_ = __real_3ff0000000000000;
    auVar216._24_8_ = __real_3ff0000000000000;
    auVar58 = vsubpd_avx(auVar216,auVar92);
    dVar283 = auVar58._0_8_;
    dVar16 = param_1[0x1b];
    dVar103 = param_1[0x1d];
    auVar57 = vperm2f128_avx(auVar59,auVar59,0x11);
    auVar108 = ZEXT816(0) << 0x40;
    auVar259 = vmovhpd_avx(auVar108,param_1[0x1c]);
    dVar96 = auVar259._0_8_;
    dVar98 = auVar259._8_8_;
    auVar259 = vshufpd_avx(auVar232,auVar232,3);
    auVar355._0_8_ = auVar259._0_8_ * 0.0 + dVar96 * auVar57._0_8_ + dVar16 * dVar283;
    auVar355._8_8_ = auVar259._8_8_ * 0.0 + dVar98 * auVar57._0_8_ + dVar283 * 0.0;
    auVar369._16_8_ = dVar103 * auVar259._0_8_ + auVar57._16_8_ * 0.0 + dVar283 * 0.0;
    auVar369._0_16_ = auVar355;
    auVar369._24_8_ = auVar259._8_8_ * 0.0 + auVar57._16_8_ * 0.0 + dVar283 * 0.0;
    auVar57 = vperm2f128_avx(auVar253,auVar253,0x11);
    auVar22 = auVar58._0_16_;
    auVar259 = vshufpd_avx(auVar22,auVar22,3);
    dVar283 = auVar59._0_8_;
    auVar326._0_8_ = dVar283 * 0.0 + dVar16 * auVar57._0_8_ + dVar96 * auVar259._0_8_;
    auVar326._8_8_ = dVar283 * 0.0 + auVar57._0_8_ * 0.0 + dVar98 * auVar259._8_8_;
    auVar339._16_8_ = dVar103 * dVar283 + auVar57._16_8_ * 0.0 + auVar259._0_8_ * 0.0;
    auVar339._0_16_ = auVar326;
    auVar339._24_8_ = dVar283 * 0.0 + auVar57._16_8_ * 0.0 + auVar259._8_8_ * 0.0;
    auVar17 = auVar59._0_16_;
    auVar259 = vshufpd_avx(auVar17,auVar17,3);
    auVar57 = vperm2f128_avx(auVar58,auVar58,0x11);
    auVar125._0_8_ = dVar96 * auVar232._0_8_ + dVar16 * auVar259._0_8_ + auVar57._0_8_ * 0.0;
    auVar125._8_8_ = dVar98 * auVar232._0_8_ + auVar259._8_8_ * 0.0 + auVar57._0_8_ * 0.0;
    auVar171._16_8_ = auVar232._0_8_ * 0.0 + auVar259._0_8_ * 0.0 + auVar57._16_8_ * dVar103;
    auVar171._0_16_ = auVar125;
    auVar171._24_8_ = auVar232._0_8_ * 0.0 + auVar259._8_8_ * 0.0 + auVar57._16_8_ * 0.0;
    auVar402._8_8_ = auVar355._0_8_;
    auVar402._0_8_ = auVar355._0_8_;
    auVar23 = vunpcklpd_avx(auVar22,auVar253._16_16_);
    auVar259 = vshufpd_avx(auVar17,auVar17,1);
    auVar402._16_16_ = auVar259;
    auVar57 = vblendpd_avx(ZEXT1632(auVar23),auVar402,0xc);
    dVar98 = auVar57._0_8_;
    dVar100 = auVar57._8_8_;
    dVar102 = auVar57._16_8_;
    dVar217 = auVar57._24_8_;
    auVar23 = vshufpd_avx(auVar355,auVar355,3);
    auVar259 = vblendpd_avx(auVar22,auVar59._16_16_,1);
    dVar255 = auVar259._0_8_;
    dVar282 = auVar259._8_8_;
    auVar259 = vshufpd_avx(auVar232,auVar17,1);
    auVar59 = vperm2f128_avx(auVar369,auVar369,0x11);
    auVar57 = vblendpd_avx(auVar58,ZEXT1632(auVar259),3);
    dVar16 = auVar57._0_8_;
    dVar103 = auVar57._8_8_;
    dVar283 = auVar57._16_8_;
    dVar96 = auVar57._24_8_;
    auVar233._0_8_ = dVar16 * auVar59._0_8_ + dVar255 * auVar23._0_8_ + dVar98 * auVar355._0_8_;
    auVar233._8_8_ = dVar103 * auVar59._0_8_ + dVar282 * auVar23._8_8_ + dVar100 * auVar355._0_8_;
    auVar254._16_8_ =
         dVar283 * auVar59._16_8_ + auVar232._0_8_ * auVar23._0_8_ + dVar102 * auVar355._0_8_;
    auVar254._0_16_ = auVar233;
    auVar254._24_8_ =
         dVar96 * auVar59._16_8_ + auVar232._8_8_ * auVar23._8_8_ + dVar217 * auVar355._0_8_;
    auVar259 = vshufpd_avx(auVar326,auVar326,3);
    auVar57 = vperm2f128_avx(auVar339,auVar339,0x11);
    auVar42._0_8_ = dVar16 * auVar57._0_8_ + dVar98 * auVar326._0_8_ + dVar255 * auVar259._0_8_;
    auVar42._8_8_ = dVar103 * auVar57._0_8_ + dVar100 * auVar326._0_8_ + dVar282 * auVar259._8_8_;
    auVar93._16_8_ =
         dVar283 * auVar57._16_8_ + dVar102 * auVar326._0_8_ + auVar232._0_8_ * auVar259._0_8_;
    auVar93._0_16_ = auVar42;
    auVar93._24_8_ =
         dVar96 * auVar57._16_8_ + dVar217 * auVar326._0_8_ + auVar232._8_8_ * auVar259._8_8_;
    auVar259 = vshufpd_avx(auVar125,auVar125,3);
    auVar57 = vperm2f128_avx(auVar171,auVar171,0x11);
    auVar126._0_8_ = dVar16 * auVar57._0_8_ + dVar98 * auVar125._0_8_ + dVar255 * auVar259._0_8_;
    auVar126._8_8_ = dVar103 * auVar57._0_8_ + dVar100 * auVar125._0_8_ + dVar282 * auVar259._8_8_;
    auVar172._16_8_ =
         dVar283 * auVar57._16_8_ + dVar102 * auVar125._0_8_ + auVar232._0_8_ * auVar259._0_8_;
    auVar172._0_16_ = auVar126;
    auVar172._24_8_ =
         dVar96 * auVar57._16_8_ + dVar217 * auVar125._0_8_ + auVar232._8_8_ * auVar259._8_8_;
    *(undefined1 (*) [16])(param_1 + 0x58) = auVar233;
    dVar16 = (double)vmovlpd_avx(auVar254._16_16_);
    param_1[0x5a] = dVar16;
    param_1[0x5b] = 0.0;
    *(undefined1 (*) [16])(param_1 + 0x5c) = auVar42;
    dVar16 = (double)vmovlps_avx(auVar93._16_16_);
    param_1[0x5e] = dVar16;
    param_1[0x5f] = 0.0;
    *(undefined1 (*) [16])(param_1 + 0x60) = auVar126;
    dVar16 = (double)vmovlpd_avx(auVar172._16_16_);
    param_1[0x62] = dVar16;
    *(undefined1 (*) [16])(param_1 + 0x65) = auVar108;
    *(undefined1 (*) [16])(param_1 + 99) = auVar108;
  }
  else {
    auVar104._8_8_ = 0;
    auVar104._0_8_ = param_1[0x22];
    auVar44._24_8_ = 0;
    auVar44._0_24_ = *(undefined1 (*) [24])(param_1 + 0x20);
    auVar218._8_8_ = 0;
    auVar218._0_8_ = param_1[0x30];
    auVar187._24_8_ = 0;
    auVar187._0_24_ = *(undefined1 (*) [24])(param_1 + 0x2e);
    auVar57 = vsubpd_avx(auVar44,auVar187);
    auVar17 = auVar57._0_16_;
    auVar259 = vshufpd_avx(auVar17,auVar17,1);
    auVar22 = vsubpd_avx(auVar104,auVar218);
    dVar217 = auVar22._0_8_;
    auVar315._0_8_ = (ulonglong)dVar217 ^ __real_8000000000000000;
    auVar315._8_8_ = auVar22._8_8_ ^ __real_8000000000000000;
    auVar384._0_8_ = (double)(auVar259._0_8_ ^ __real_8000000000000000);
    auVar384._8_8_ = (double)(auVar259._8_8_ ^ __real_8000000000000000);
    auVar18._0_8_ = auVar57._0_8_;
    auVar105._0_8_ = (ulonglong)auVar18._0_8_ ^ __real_8000000000000000;
    dVar102 = auVar57._8_8_;
    auVar105._8_8_ = (ulonglong)dVar102 ^ __real_8000000000000000;
    auVar57 = vperm2f128_avx(auVar57,auVar57,0x11);
    dVar98 = auVar57._0_8_;
    dVar100 = auVar57._16_8_;
    dVar16 = param_1[0x4c];
    auVar403._8_8_ = 0;
    auVar403._0_8_ = dVar16;
    dVar103 = param_1[0x4d];
    auVar219._8_8_ = 0;
    auVar219._0_8_ = dVar103;
    auVar259 = vmovlhps_avx(auVar219,auVar403);
    auVar356._0_8_ = dVar98 * auVar259._0_8_;
    auVar356._8_8_ = dVar98 * auVar259._8_8_;
    auVar356._16_8_ = dVar100 * dVar16;
    auVar356._24_8_ = dVar100 * 0.0;
    auVar23 = vshufpd_avx(auVar17,auVar17,3);
    dVar283 = param_1[0x51];
    auVar414._8_8_ = dVar283;
    auVar414._0_8_ = dVar283;
    dVar96 = param_1[0x50];
    auVar423._8_8_ = dVar96;
    auVar423._0_8_ = dVar96;
    auVar259 = vmovlhps_avx(auVar414,auVar423);
    dVar255 = auVar23._0_8_;
    auVar441._0_8_ = dVar255 * auVar259._0_8_;
    dVar282 = auVar23._8_8_;
    auVar441._8_8_ = dVar282 * auVar259._8_8_;
    auVar441._16_8_ = dVar255 * dVar96;
    auVar441._24_8_ = dVar282 * dVar96;
    auVar57 = vsubpd_avx(auVar441,auVar356);
    auVar23 = vunpcklpd_avx(auVar315,auVar22);
    auVar188._0_8_ = dVar98 * dVar283;
    auVar188._8_8_ = dVar98 * dVar283;
    auVar188._16_8_ = dVar100 * dVar103;
    auVar188._24_8_ = dVar100 * 0.0;
    dVar98 = param_1[0x52];
    auVar434._8_8_ = dVar98;
    auVar434._0_8_ = dVar98;
    auVar357._0_8_ = dVar255 * dVar98;
    auVar357._8_8_ = dVar282 * dVar98;
    auVar357._16_8_ = dVar255 * dVar283;
    auVar357._24_8_ = dVar282 * dVar283;
    auVar58 = vsubpd_avx(auVar357,auVar188);
    auVar259 = vshufpd_avx(auVar17,auVar105,1);
    auVar342._0_8_ = param_1[0x1e] + auVar23._0_8_ * auVar57._0_8_ + auVar259._0_8_ * auVar58._0_8_;
    auVar342._8_8_ = auVar23._8_8_ * auVar57._8_8_ + auVar259._8_8_ * auVar58._8_8_ + 0.0;
    auVar358._16_8_ = auVar384._0_8_ * auVar57._16_8_ + auVar18._0_8_ * auVar58._16_8_ + 0.0;
    auVar358._0_16_ = auVar342;
    auVar358._24_8_ = auVar384._8_8_ * auVar57._24_8_ + dVar102 * auVar58._24_8_ + 0.0;
    dVar283 = param_1[0x48];
    auVar17 = vshufps_avx(auVar105,auVar105,0x44);
    auVar22 = vunpcklpd_avx(auVar22,auVar384);
    auVar259 = vmovlhps_avx(auVar423,auVar403);
    auVar23 = vmovlhps_avx(auVar434,auVar414);
    auVar18._8_8_ = auVar18._0_8_;
    auVar45._16_16_ = auVar18;
    auVar45._0_16_ = auVar18;
    auVar57 = vblendpd_avx(auVar45,ZEXT1632(auVar105),1);
    auVar415._0_8_ =
         param_1[0x1e] +
         auVar22._0_8_ * (dVar283 * dVar217 + auVar17._0_8_ * dVar96) +
         auVar57._0_8_ * (dVar217 * auVar259._0_8_ + auVar17._0_8_ * auVar23._0_8_);
    auVar415._8_8_ =
         auVar22._8_8_ * (dVar283 * dVar217 + auVar17._8_8_ * dVar96) +
         auVar57._8_8_ * (dVar217 * auVar259._8_8_ + auVar17._8_8_ * auVar23._8_8_) + 0.0;
    auVar419._16_8_ =
         param_1[0x1e] +
         auVar384._0_8_ * (dVar283 * auVar384._0_8_ + auVar18._0_8_ * dVar16) +
         auVar57._16_8_ * (auVar384._0_8_ * dVar16 + auVar18._0_8_ * dVar103);
    auVar419._0_16_ = auVar415;
    auVar419._24_8_ =
         auVar384._8_8_ * (dVar283 * auVar384._8_8_ + dVar102 * 0.0) +
         auVar57._24_8_ * (auVar384._8_8_ * 0.0 + dVar102 * 0.0) + 0.0;
    auVar106._8_8_ = 0;
    auVar106._0_8_ = param_1[0x25];
    auVar46._24_8_ = 0;
    auVar46._0_24_ = *(undefined1 (*) [24])(param_1 + 0x23);
    auVar220._8_8_ = 0;
    auVar220._0_8_ = param_1[0x33];
    auVar189._24_8_ = 0;
    auVar189._0_24_ = *(undefined1 (*) [24])(param_1 + 0x31);
    auVar57 = vsubpd_avx(auVar46,auVar189);
    auVar22 = auVar57._0_16_;
    auVar259 = vshufpd_avx(auVar22,auVar22,1);
    auVar23 = vsubpd_avx(auVar106,auVar220);
    dVar174 = auVar23._0_8_;
    auVar107._0_8_ = (ulonglong)dVar174 ^ __real_8000000000000000;
    auVar107._8_8_ = auVar23._8_8_ ^ __real_8000000000000000;
    auVar424._0_8_ = (double)(auVar259._0_8_ ^ __real_8000000000000000);
    auVar424._8_8_ = (double)(auVar259._8_8_ ^ __real_8000000000000000);
    dVar16 = param_1[0x5d];
    auVar443._8_8_ = 0;
    auVar443._0_8_ = dVar16;
    dVar103 = param_1[0x5c];
    auVar452._8_8_ = 0;
    auVar452._0_8_ = dVar103;
    dVar283 = param_1[0x61];
    auVar435._8_8_ = dVar283;
    auVar435._0_8_ = dVar283;
    dVar282 = auVar57._0_8_;
    auVar256._0_8_ = (ulonglong)dVar282 ^ __real_8000000000000000;
    dVar314 = auVar57._8_8_;
    auVar256._8_8_ = (ulonglong)dVar314 ^ __real_8000000000000000;
    auVar57 = vperm2f128_avx(auVar57,auVar57,0x11);
    dVar100 = auVar57._0_8_;
    dVar102 = auVar57._16_8_;
    auVar259 = vunpcklpd_avx(auVar443,auVar452);
    auVar190._0_8_ = dVar100 * auVar259._0_8_;
    auVar190._8_8_ = dVar100 * auVar259._8_8_;
    auVar190._16_8_ = dVar102 * dVar103;
    auVar190._24_8_ = dVar102 * 0.0;
    auVar259 = vshufpd_avx(auVar22,auVar22,3);
    dVar96 = param_1[0x60];
    auVar371._8_8_ = dVar96;
    auVar371._0_8_ = dVar96;
    auVar17 = vunpcklpd_avx(auVar435,auVar371);
    dVar217 = auVar259._0_8_;
    auVar300._0_8_ = dVar217 * auVar17._0_8_;
    dVar255 = auVar259._8_8_;
    auVar300._8_8_ = dVar255 * auVar17._8_8_;
    auVar300._16_8_ = dVar217 * dVar96;
    auVar300._24_8_ = dVar255 * dVar96;
    auVar57 = vsubpd_avx(auVar300,auVar190);
    dVar98 = param_1[0x62];
    auVar284._8_8_ = dVar98;
    auVar284._0_8_ = dVar98;
    auVar17 = vunpcklpd_avx(auVar107,auVar23);
    auVar47._0_8_ = dVar100 * dVar283;
    auVar47._8_8_ = dVar100 * dVar283;
    auVar47._16_8_ = dVar102 * dVar16;
    auVar47._24_8_ = dVar102 * 0.0;
    auVar191._0_8_ = dVar217 * dVar98;
    auVar191._8_8_ = dVar255 * dVar98;
    auVar191._16_8_ = dVar217 * dVar283;
    auVar191._24_8_ = dVar255 * dVar283;
    auVar58 = vsubpd_avx(auVar191,auVar47);
    auVar259 = vshufpd_avx(auVar22,auVar256,1);
    auVar316._0_8_ = auVar17._0_8_ * auVar57._0_8_ + auVar259._0_8_ * auVar58._0_8_ + param_1[0x1f];
    auVar316._8_8_ = auVar17._8_8_ * auVar57._8_8_ + auVar259._8_8_ * auVar58._8_8_ + 0.0;
    auVar328._16_8_ = auVar424._0_8_ * auVar57._16_8_ + dVar282 * auVar58._16_8_ + 0.0;
    auVar328._0_16_ = auVar316;
    auVar328._24_8_ = auVar424._8_8_ * auVar57._24_8_ + dVar314 * auVar58._24_8_ + 0.0;
    dVar283 = param_1[0x58];
    auVar259 = vshufps_avx(auVar256,auVar256,0x44);
    auVar23 = vunpcklpd_avx(auVar23,auVar424);
    auVar17 = vunpcklpd_avx(auVar371,auVar452);
    auVar22 = vunpcklpd_avx(auVar284,auVar435);
    auVar221._8_8_ = dVar282;
    auVar221._0_8_ = dVar282;
    auVar234._16_16_ = auVar221;
    auVar234._0_16_ = auVar221;
    auVar57 = vblendpd_avx(auVar234,ZEXT1632(auVar256),1);
    auVar19._0_8_ =
         param_1[0x1f] +
         auVar23._0_8_ * (auVar259._0_8_ * dVar96 + dVar174 * dVar283) +
         auVar57._0_8_ * (dVar174 * auVar17._0_8_ + auVar259._0_8_ * auVar22._0_8_);
    auVar19._8_8_ =
         auVar23._8_8_ * (auVar259._8_8_ * dVar96 + dVar174 * dVar283) +
         auVar57._8_8_ * (dVar174 * auVar17._8_8_ + auVar259._8_8_ * auVar22._8_8_) + 0.0;
    auVar48._16_8_ =
         param_1[0x1f] +
         auVar424._0_8_ * (dVar282 * dVar103 + auVar424._0_8_ * dVar283) +
         auVar57._16_8_ * (auVar424._0_8_ * dVar103 + dVar282 * dVar16);
    auVar48._0_16_ = auVar19;
    auVar48._24_8_ =
         auVar424._8_8_ * (dVar314 * 0.0 + auVar424._8_8_ * dVar283) +
         auVar57._24_8_ * (auVar424._8_8_ * 0.0 + dVar314 * 0.0) + 0.0;
    auVar404._0_8_ = auVar342._0_8_ + auVar316._0_8_;
    auVar404._8_8_ = auVar342._8_8_ + auVar316._8_8_;
    auVar408._16_8_ = auVar358._16_8_ + auVar328._16_8_;
    auVar408._0_16_ = auVar404;
    auVar408._24_8_ = auVar358._24_8_ + auVar328._24_8_;
    auVar259 = vshufpd_avx(auVar316,auVar316,1);
    auVar23 = vshufpd_avx(auVar19,auVar19,1);
    auVar192._16_16_ = auVar23;
    auVar192._0_16_ = auVar23;
    auVar57 = vblendpd_avx(auVar192,ZEXT1632(auVar259),1);
    auVar259 = vshufpd_avx(auVar342,auVar342,1);
    auVar23 = vshufpd_avx(auVar415,auVar415,1);
    auVar235._16_16_ = auVar23;
    auVar235._0_16_ = auVar23;
    auVar58 = vblendpd_avx(auVar235,ZEXT1632(auVar259),1);
    auVar385._0_8_ = auVar58._0_8_ + auVar57._0_8_;
    auVar385._8_8_ = auVar58._8_8_ + auVar57._8_8_;
    auVar393._16_8_ = auVar58._16_8_ + auVar57._16_8_;
    auVar393._0_16_ = auVar385;
    auVar393._24_8_ = auVar58._24_8_ + auVar57._24_8_;
    auVar57 = vblendpd_avx(auVar48,ZEXT1632(auVar328._16_16_),1);
    auVar58 = vblendpd_avx(auVar419,ZEXT1632(auVar358._16_16_),1);
    auVar416._0_8_ = auVar58._0_8_ + auVar57._0_8_;
    auVar416._8_8_ = auVar58._8_8_ + auVar57._8_8_;
    auVar420._16_8_ = auVar58._16_8_ + auVar57._16_8_;
    auVar420._0_16_ = auVar416;
    auVar420._24_8_ = auVar58._24_8_ + auVar57._24_8_;
    auVar57 = vblendpd_avx(auVar408,
                           ___ymm_0010000000000000000000000000000000000000000000000000000000000000,8
                          );
    auVar49._0_8_ =
         auVar57._0_8_ & ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
    auVar49._8_8_ = auVar57._8_8_ & _UNK_150aa8f48;
    auVar49._16_8_ = auVar57._16_8_ & _UNK_150aa8f50;
    auVar49._24_8_ = auVar57._24_8_ & _UNK_150aa8f58;
    auVar57 = vcmppd_avx(auVar49,
                         ___ymm_3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a,6);
    auVar259 = vpackssdw_avx(auVar57._0_16_,auVar57._16_16_);
    auVar259 = vpackssdw_avx(auVar259,(undefined1  [16])0x0);
    auVar22 = SUB3216(*param_4,0x10);
    auVar17 = vpcmpeqd_avx(auVar22,(undefined1  [16])0x0);
    auVar23 = vpcmpeqd_avx(auVar108,(undefined1  [16])0x0);
    auVar23 = vpackssdw_avx(auVar23,auVar17);
    auVar259 = vpandn_avx(auVar23,auVar259);
    dVar16 = param_1[0x1f];
    if ((((((((((((((((SUB161(auVar259 >> 7,0) & 1) == 0 && (SUB161(auVar259 >> 0xf,0) & 1) == 0) &&
                    (SUB161(auVar259 >> 0x17,0) & 1) == 0) && (SUB161(auVar259 >> 0x1f,0) & 1) == 0)
                  && (SUB161(auVar259 >> 0x27,0) & 1) == 0) && (SUB161(auVar259 >> 0x2f,0) & 1) == 0
                 ) && (SUB161(auVar259 >> 0x37,0) & 1) == 0) &&
               (SUB161(auVar259 >> 0x3f,0) & 1) == 0) && (SUB161(auVar259 >> 0x47,0) & 1) == 0) &&
             (SUB161(auVar259 >> 0x4f,0) & 1) == 0) && (SUB161(auVar259 >> 0x57,0) & 1) == 0) &&
           (SUB161(auVar259 >> 0x5f,0) & 1) == 0) && (SUB161(auVar259 >> 0x67,0) & 1) == 0) &&
         (SUB161(auVar259 >> 0x6f,0) & 1) == 0) && (SUB161(auVar259 >> 0x77,0) & 1) == 0) &&
        -1 < auVar259[0xf]) {
      auVar259 = vpcmpeqd_avx(auVar108,(undefined1  [16])0x0);
      auVar259 = vpackssdw_avx(auVar259,auVar17);
      auVar57 = vblendpd_avx(auVar393,
                             ___ymm_0010000000000000000000000000000000000000000000000000000000000000
                             ,8);
      auVar236._0_8_ =
           auVar57._0_8_ & ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
      auVar236._8_8_ = auVar57._8_8_ & _UNK_150aa8f48;
      auVar236._16_8_ = auVar57._16_8_ & _UNK_150aa8f50;
      auVar236._24_8_ = auVar57._24_8_ & _UNK_150aa8f58;
      auVar57 = vcmppd_avx(auVar236,
                           ___ymm_3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a,6
                          );
      auVar23 = vpackssdw_avx(auVar57._0_16_,auVar57._16_16_);
      auVar23 = vpackssdw_avx(auVar23,(undefined1  [16])0x0);
      auVar259 = vpandn_avx(auVar259,auVar23);
      if ((((((((((((((((SUB161(auVar259 >> 7,0) & 1) != 0 || (SUB161(auVar259 >> 0xf,0) & 1) != 0)
                      || (SUB161(auVar259 >> 0x17,0) & 1) != 0) ||
                     (SUB161(auVar259 >> 0x1f,0) & 1) != 0) || (SUB161(auVar259 >> 0x27,0) & 1) != 0
                    ) || (SUB161(auVar259 >> 0x2f,0) & 1) != 0) ||
                  (SUB161(auVar259 >> 0x37,0) & 1) != 0) || (SUB161(auVar259 >> 0x3f,0) & 1) != 0)
                || (SUB161(auVar259 >> 0x47,0) & 1) != 0) || (SUB161(auVar259 >> 0x4f,0) & 1) != 0)
              || (SUB161(auVar259 >> 0x57,0) & 1) != 0) || (SUB161(auVar259 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar259 >> 0x67,0) & 1) != 0) || (SUB161(auVar259 >> 0x6f,0) & 1) != 0) ||
          (SUB161(auVar259 >> 0x77,0) & 1) != 0) || auVar259[0xf] < '\0') goto LAB_1409fa2d0;
      auVar259 = vpcmpeqd_avx(auVar22,(undefined1  [16])0x0);
      auVar23 = vpcmpeqd_avx(auVar108,(undefined1  [16])0x0);
      auVar259 = vpackssdw_avx(auVar23,auVar259);
      auVar57 = vblendpd_avx(auVar420,
                             ___ymm_0010000000000000000000000000000000000000000000000000000000000000
                             ,8);
      auVar193._0_8_ =
           auVar57._0_8_ & ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
      auVar193._8_8_ = auVar57._8_8_ & _UNK_150aa8f48;
      auVar193._16_8_ = auVar57._16_8_ & _UNK_150aa8f50;
      auVar193._24_8_ = auVar57._24_8_ & _UNK_150aa8f58;
      auVar57 = vcmppd_avx(auVar193,
                           ___ymm_3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a,6
                          );
      auVar23 = vpackssdw_avx(auVar57._0_16_,auVar57._16_16_);
      auVar23 = vpackssdw_avx(auVar23,(undefined1  [16])0x0);
      auVar259 = vpandn_avx(auVar259,auVar23);
      if ((((((((((((((((SUB161(auVar259 >> 7,0) & 1) != 0 || (SUB161(auVar259 >> 0xf,0) & 1) != 0)
                      || (SUB161(auVar259 >> 0x17,0) & 1) != 0) ||
                     (SUB161(auVar259 >> 0x1f,0) & 1) != 0) || (SUB161(auVar259 >> 0x27,0) & 1) != 0
                    ) || (SUB161(auVar259 >> 0x2f,0) & 1) != 0) ||
                  (SUB161(auVar259 >> 0x37,0) & 1) != 0) || (SUB161(auVar259 >> 0x3f,0) & 1) != 0)
                || (SUB161(auVar259 >> 0x47,0) & 1) != 0) || (SUB161(auVar259 >> 0x4f,0) & 1) != 0)
              || (SUB161(auVar259 >> 0x57,0) & 1) != 0) || (SUB161(auVar259 >> 0x5f,0) & 1) != 0) ||
            (SUB161(auVar259 >> 0x67,0) & 1) != 0) || (SUB161(auVar259 >> 0x6f,0) & 1) != 0) ||
          (SUB161(auVar259 >> 0x77,0) & 1) != 0) || auVar259[0xf] < '\0') goto LAB_1409fa2d0;
LAB_1409fabac:
      auVar108 = ZEXT816(0);
      auVar375._8_8_ = 0;
      auVar375._0_8_ = __real_3ff0000000000000;
      auVar17 = ZEXT816(0);
      auVar257 = ZEXT816(0);
      auVar175 = ZEXT816(0) << 0x40;
      auVar23 = ZEXT816(0) << 0x40;
      auVar259 = ZEXT816(0) << 0x40;
      auVar386 = auVar375;
      auVar372 = auVar375;
    }
    else {
LAB_1409fa2d0:
      auVar57 = vperm2f128_avx(auVar408,auVar420,0x31);
      auVar129._16_16_ = auVar416;
      auVar129._0_16_ = auVar404;
      auVar58 = vunpcklpd_avx(auVar129,auVar57);
      auVar259 = vshufpd_avx(auVar385,auVar385,1);
      auVar2._8_8_ = _UNK_150b54548;
      auVar2._0_8_ = ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
      auVar2._16_8_ = _UNK_150b54550;
      auVar2._24_8_ = _UNK_150b54558;
      auVar57 = vblendpd_avx(ZEXT1632(auVar259),auVar2,0xe);
      auVar50._0_8_ = auVar58._0_8_ * auVar57._0_8_;
      auVar50._8_8_ = auVar58._8_8_ * auVar57._8_8_;
      auVar50._16_8_ = auVar58._16_8_ * auVar57._16_8_;
      auVar50._24_8_ = auVar58._24_8_ * auVar57._24_8_;
      auVar259 = vshufpd_avx(auVar404,auVar404,1);
      auVar130._16_16_ = auVar416;
      auVar130._0_16_ = auVar259;
      auVar57 = vshufpd_avx(auVar130,ZEXT1632(ZEXT816(0)),4);
      auVar259 = vunpcklpd_avx(auVar385,auVar393._16_16_);
      auVar131._0_8_ = auVar57._0_8_ * auVar259._0_8_;
      auVar131._8_8_ = auVar57._8_8_ * auVar259._8_8_;
      auVar131._16_8_ = auVar57._16_8_ * 0.0;
      auVar131._24_8_ = auVar57._24_8_ * 0.0;
      auVar138 = vsubpd_avx(auVar50,auVar131);
      auVar51._8_8_ = auVar416._0_8_;
      auVar51._0_8_ = auVar416._0_8_;
      auVar51._16_8_ = auVar420._16_8_;
      auVar51._24_8_ = auVar420._16_8_;
      auVar57 = vblendpd_avx(auVar51,
                             ___ymm_000000000000000000000000000000003ff00000000000003ff0000000000000
                             ,3);
      auVar58 = vperm2f128_avx(auVar420,auVar420,0x28);
      auVar444._0_8_ =
           auVar57._0_8_ * auVar416._0_8_ +
           auVar58._0_8_ * ___ymm_8000000000000000800000000000000080000000000000008000000000000000;
      auVar444._8_8_ = auVar57._8_8_ * auVar416._8_8_ + auVar58._8_8_ * _UNK_150b513e8;
      auVar449._16_8_ = auVar57._16_8_ * 0.0 + auVar58._16_8_ * _UNK_150b513f0;
      auVar449._0_16_ = auVar444;
      auVar449._24_8_ = auVar57._24_8_ * 0.0 + auVar58._24_8_ * _UNK_150b513f8;
      auVar52._16_16_ = auVar404;
      auVar52._0_16_ = auVar385;
      auVar58 = vshufpd_avx(auVar52,auVar52,3);
      auVar57 = vblendpd_avx(ZEXT832((ulonglong)auVar408._16_8_),auVar393,4);
      auVar53._0_8_ = auVar58._0_8_ * auVar57._0_8_;
      auVar53._8_8_ = auVar58._8_8_ * auVar57._8_8_;
      auVar53._16_8_ = auVar58._16_8_ * auVar57._16_8_;
      auVar53._24_8_ = auVar58._24_8_ * auVar57._24_8_;
      auVar132._16_16_ = auVar385;
      auVar132._0_16_ = auVar404;
      auVar59 = vshufpd_avx(auVar132,auVar132,3);
      auVar58 = vblendpd_avx(ZEXT832((ulonglong)auVar393._16_8_),auVar408,4);
      auVar133._0_8_ = auVar59._0_8_ * auVar58._0_8_;
      auVar133._8_8_ = auVar59._8_8_ * auVar58._8_8_;
      auVar133._16_8_ = auVar59._16_8_ * auVar58._16_8_;
      auVar133._24_8_ = auVar59._24_8_ * auVar58._24_8_;
      auVar139 = vsubpd_avx(auVar53,auVar133);
      dVar103 = auVar138._0_8_;
      auVar59 = vperm2f128_avx(auVar138,auVar138,0x11);
      auVar58 = vshufpd_avx(auVar59,auVar59,0xf);
      auVar23 = auVar138._0_16_;
      auVar259 = vshufpd_avx(auVar23,auVar23,3);
      auVar54._0_8_ = dVar103 * auVar58._0_8_ + auVar259._0_8_ * auVar59._0_8_;
      auVar54._8_8_ = dVar103 * auVar58._8_8_ + auVar259._8_8_ * auVar59._0_8_;
      auVar54._16_8_ = dVar103 * auVar58._16_8_ + auVar259._0_8_ * auVar59._16_8_;
      auVar54._24_8_ = dVar103 * auVar58._24_8_ + auVar259._8_8_ * auVar59._16_8_;
      auVar134._16_16_ = auVar444;
      auVar134._0_16_ = auVar444;
      auVar59 = vperm2f128_avx(auVar449,auVar449,0x11);
      auVar59 = vshufpd_avx(auVar134,auVar59,0xc);
      dVar96 = auVar139._0_8_;
      auVar135._0_8_ = dVar96 * auVar59._0_8_;
      dVar98 = auVar139._8_8_;
      auVar135._8_8_ = dVar98 * auVar59._8_8_;
      dVar100 = auVar139._16_8_;
      auVar135._16_8_ = dVar100 * auVar59._16_8_;
      dVar102 = auVar139._24_8_;
      auVar135._24_8_ = dVar102 * auVar59._24_8_;
      auVar59 = vperm2f128_avx(auVar135,auVar135,1);
      auVar136._0_8_ = auVar135._0_8_ + auVar59._0_8_;
      auVar136._8_8_ = auVar135._8_8_ + auVar59._8_8_;
      auVar136._16_8_ = auVar135._16_8_ + auVar59._16_8_;
      auVar136._24_8_ = auVar135._24_8_ + auVar59._24_8_;
      auVar59 = vperm2f128_avx(auVar136,auVar136,1);
      auVar59 = vshufpd_avx(auVar136,auVar59,5);
      auVar137._0_8_ = auVar136._0_8_ + auVar59._0_8_;
      auVar137._8_8_ = auVar136._8_8_ + auVar59._8_8_;
      auVar137._16_8_ = auVar136._16_8_ + auVar59._16_8_;
      auVar137._24_8_ = auVar136._24_8_ + auVar59._24_8_;
      auVar59 = vsubpd_avx(auVar54,auVar137);
      if ((auVar59._0_8_ == 0.0) && (!NAN(auVar59._0_8_))) goto LAB_1409fabac;
      auVar55._0_8_ = dVar103 * 0.0;
      auVar55._8_8_ = dVar103 * 0.0;
      auVar55._16_8_ = auVar138._16_8_ * 0.0;
      auVar55._24_8_ = auVar138._16_8_ * 0.0;
      auVar140 = vperm2f128_avx(auVar55,auVar55,0x11);
      auVar237._0_8_ = auVar404._0_8_ * auVar444._0_8_;
      auVar237._8_8_ = auVar404._8_8_ * auVar444._0_8_;
      auVar237._16_8_ = auVar385._0_8_ * auVar444._0_8_;
      auVar237._24_8_ = auVar385._8_8_ * auVar444._0_8_;
      auVar409._16_16_ = auVar444;
      auVar409._0_16_ = auVar444;
      auVar301._0_8_ = auVar444._0_8_ * auVar404._0_8_;
      auVar301._8_8_ = auVar444._8_8_ * auVar404._0_8_;
      auVar301._16_8_ = auVar444._0_8_ * auVar385._0_8_;
      auVar301._24_8_ = auVar444._8_8_ * auVar385._0_8_;
      auVar138 = vsubpd_avx(auVar237,auVar301);
      auVar195 = vsubpd_avx(auVar140,auVar138);
      auVar259 = vshufpd_avx(auVar23,auVar23,3);
      auVar20._0_8_ = auVar259._0_8_ * 0.0;
      auVar20._8_8_ = auVar259._8_8_ * 0.0;
      auVar222._0_8_ = dVar96 * __real_3ff0000000000000;
      auVar222._8_8_ = dVar98 * 0.0;
      auVar238._16_8_ = dVar100 * 0.0;
      auVar238._0_16_ = auVar222;
      auVar238._24_8_ = dVar102 * 0.0;
      auVar302._16_16_ = auVar222;
      auVar302._0_16_ = auVar20;
      auVar142 = vshufpd_avx(auVar238,auVar302,4);
      auVar285._0_8_ =
           dVar96 * ___ymm_00000000000000003ff000000000000000000000000000000000000000000000;
      auVar285._8_8_ = dVar98 * _UNK_150aa8e88;
      auVar303._16_8_ = dVar100 * _DAT_150aa8e90;
      auVar303._0_16_ = auVar285;
      auVar303._24_8_ = dVar102 * _UNK_150aa8e98;
      auVar359._16_16_ = auVar285;
      auVar359._0_16_ = auVar20;
      auVar138 = vblendpd_avx(auVar303,auVar359,8);
      auVar194._0_8_ = auVar404._0_8_ * auVar58._0_8_;
      auVar194._8_8_ = auVar404._8_8_ * auVar58._8_8_;
      auVar194._16_8_ = auVar385._0_8_ * auVar58._16_8_;
      auVar194._24_8_ = auVar385._8_8_ * auVar58._24_8_;
      auVar141 = vperm2f128_avx(auVar449,auVar449,0x11);
      auVar58 = vblendpd_avx(auVar409,auVar141,10);
      auVar140 = vunpcklpd_avx(ZEXT1632(ZEXT816(0)),ZEXT1632(auVar408._16_16_));
      auVar394._8_8_ = auVar385._0_8_;
      auVar394._0_8_ = auVar385._0_8_;
      auVar394._16_8_ = auVar393._16_8_;
      auVar394._24_8_ = auVar393._16_8_;
      auVar140 = vblendpd_avx(auVar140,auVar394,8);
      auVar141 = vblendpd_avx(auVar141,auVar409,10);
      auVar266._0_8_ = auVar57._0_8_ * auVar58._0_8_ + auVar140._0_8_ * auVar141._0_8_;
      auVar266._8_8_ = auVar57._8_8_ * auVar58._8_8_ + auVar140._8_8_ * auVar141._8_8_;
      auVar266._16_8_ = auVar57._16_8_ * auVar58._16_8_ + auVar140._16_8_ * auVar141._16_8_;
      auVar266._24_8_ = auVar57._24_8_ * auVar58._24_8_ + auVar140._24_8_ * auVar141._24_8_;
      auVar58 = vsubpd_avx(auVar194,auVar266);
      auVar57 = vdivpd_avx(___ymm_3ff0000000000000bff0000000000000bff00000000000003ff0000000000000,
                           auVar59);
      auVar386._0_8_ = auVar58._0_8_ * auVar57._0_8_;
      auVar386._8_8_ = auVar58._8_8_ * auVar57._8_8_;
      dVar96 = auVar57._16_8_;
      auVar395._16_8_ = auVar58._16_8_ * dVar96;
      auVar395._0_16_ = auVar386;
      dVar98 = auVar57._24_8_;
      auVar395._24_8_ = auVar58._24_8_ * dVar98;
      auVar259 = vshufpd_avx(auVar386,auVar386,1);
      auVar175 = auVar395._16_16_;
      auVar375 = vshufpd_avx(auVar175,auVar175,1);
      auVar23 = vsubpd_avx(auVar142._16_16_,auVar138._16_16_);
      auVar23 = vsubpd_avx(auVar20,auVar23);
      auVar257._0_8_ = auVar23._0_8_ * dVar96;
      auVar257._8_8_ = auVar23._8_8_ * dVar98;
      auVar23 = vshufpd_avx(auVar257,auVar257,1);
      auVar21._0_8_ = auVar195._0_8_ * auVar57._0_8_;
      auVar21._8_8_ = auVar195._8_8_ * auVar57._8_8_;
      auVar56._16_8_ = auVar195._16_8_ * dVar96;
      auVar56._0_16_ = auVar21;
      auVar56._24_8_ = auVar195._24_8_ * dVar98;
      auVar108 = vshufpd_avx(auVar21,auVar21,1);
      auVar17 = vshufpd_avx(auVar56._16_16_,auVar56._16_16_,1);
      auVar22 = vshufpd_avx(auVar139._16_16_,auVar139._16_16_,1);
      auVar109 = vshufpd_avx(auVar139._0_16_,auVar139._0_16_,1);
      auVar110 = vshufpd_avx(auVar57._16_16_,auVar57._16_16_,1);
      auVar372._8_8_ = 0;
      auVar372._0_8_ = (dVar103 - (auVar22._0_8_ * 0.0 + auVar109._0_8_ * 0.0)) * auVar110._0_8_;
    }
    auVar108 = vunpcklpd_avx(auVar17,auVar108);
    auVar17 = vunpcklpd_avx(auVar175,auVar386);
    auVar259 = vunpcklpd_avx(auVar375,auVar259);
    dVar103 = *param_2;
    dVar96 = param_2[1];
    dVar98 = param_2[2];
    auVar176._0_8_ =
         param_3 * (auVar259._0_8_ * dVar103 + auVar17._0_8_ * dVar96 + auVar108._0_8_ * dVar98);
    auVar176._8_8_ =
         param_3 * (auVar259._8_8_ * dVar103 + auVar17._8_8_ * dVar96 + auVar108._8_8_ * dVar98);
    dStack_258 = param_3 * (auVar23._0_8_ * dVar103 + auVar257._0_8_ * dVar96 +
                           auVar372._0_8_ * dVar98);
    local_268 = auVar176;
    dStack_250 = param_3 * (auVar23._8_8_ * dVar103 + auVar257._8_8_ * dVar96 +
                           auVar372._8_8_ * dVar98);
    dVar103 = param_1[0x1e];
    auVar306._0_8_ = dVar16 * auVar176._0_8_;
    auVar306._8_8_ = dVar16 * auVar176._8_8_;
    auVar306._16_8_ = dVar16 * dStack_258;
    auVar306._24_8_ = dVar16 * dStack_250;
    auVar319._8_8_ = 0;
    auVar319._0_8_ = param_1[0x20];
    auVar390._8_8_ = 0;
    auVar390._0_8_ = param_1[0x21];
    auVar447._8_8_ = 0;
    auVar447._0_8_ = param_1[0x48];
    auVar437._8_8_ = 0;
    auVar437._0_8_ = param_1[0x49];
    auVar241._16_16_ = auVar176;
    auVar241._0_16_ = auVar176;
    auVar57 = vshufpd_avx(auVar241,ZEXT1632(local_268._16_16_),1);
    auVar1 = *(undefined1 (*) [24])(param_1 + 0x2e);
    auVar242._24_8_ = 0;
    auVar242._0_24_ = auVar1;
    auVar273._16_8_ = param_1[0x33];
    auVar273._0_16_ = *(undefined1 (*) [16])(param_1 + 0x31);
    auVar273._24_8_ = 0;
    auVar177._0_8_ = dVar103 * auVar176._0_8_ + auVar1._0_8_;
    auVar177._8_8_ = dVar103 * auVar176._8_8_ + auVar1._8_8_;
    auVar202._16_8_ = dVar103 * dStack_258 + auVar1._16_8_;
    auVar202._0_16_ = auVar177;
    auVar202._24_8_ = dVar103 * dStack_250 + 0.0;
    auVar113._8_8_ = 0;
    auVar113._0_8_ = param_1[0x50];
    auVar427._8_8_ = 0;
    auVar427._0_8_ = param_1[0x51];
    auVar6._8_8_ = dVar283;
    auVar6._0_8_ = dVar283;
    auVar259 = vmovhps_avx(auVar6,param_1[0x59]);
    local_1a8._8_8_ = 0;
    local_1a8._0_8_ = param_1[0x25];
    local_148._8_8_ = param_1[0x5a];
    local_148._0_8_ = local_148._8_8_;
    dStack_138 = (double)local_148._8_8_;
    dStack_130 = (double)local_148._8_8_;
    *(undefined1 (*) [16])(param_1 + 0x2e) = auVar177;
    auVar58 = vsubpd_avx(auVar273,auVar306);
    auVar23 = vunpcklpd_avx(auVar202._16_16_,auVar58._0_16_);
    *(undefined1 (*) [16])(param_1 + 0x30) = auVar23;
    auVar23 = vshufpd_avx(auVar58._0_16_,auVar58._16_16_,1);
    *(undefined1 (*) [16])(param_1 + 0x32) = auVar23;
    dVar174 = _UNK_150b54438;
    dVar314 = _UNK_150b54430;
    dVar282 = _UNK_150b54428;
    dVar255 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
    dVar217 = _UNK_150b54418;
    dVar102 = _UNK_150b54410;
    dVar100 = _UNK_150b54408;
    dVar98 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
    dVar96 = _UNK_15076c6f8;
    dVar16 = ___xmm_bff00000000000003ff0000000000000;
    local_288._0_8_ = auVar57._0_8_;
    local_288._8_8_ = auVar57._8_8_;
    dStack_278 = auVar57._16_8_;
    dStack_270 = auVar57._24_8_;
    if (0.0 < dVar103) {
      auVar108 = vunpcklpd_avx(auVar447,auVar437);
      auVar23 = vunpcklpd_avx(auVar319,auVar390);
      auVar307._16_8_ = param_1[0x22];
      auVar307._0_16_ = auVar23;
      auVar307._24_8_ = 0;
      auVar57 = vsubpd_avx(auVar307,auVar242);
      auVar308._0_8_ = auVar57._0_8_ * (double)local_288._0_8_;
      auVar308._8_8_ = auVar57._8_8_ * (double)local_288._8_8_;
      auVar308._16_8_ = auVar57._16_8_ * dStack_278;
      auVar308._24_8_ = auVar57._24_8_ * dStack_270;
      auVar332._16_16_ = auVar57._0_16_;
      auVar332._0_16_ = auVar57._0_16_;
      auVar57 = vshufpd_avx(auVar332,ZEXT1632(auVar57._16_16_),1);
      auVar243._0_8_ = auVar57._0_8_ * auVar176._0_8_;
      auVar243._8_8_ = auVar57._8_8_ * auVar176._8_8_;
      auVar243._16_8_ = auVar57._16_8_ * dStack_258;
      auVar243._24_8_ = auVar57._24_8_ * dStack_250;
      auVar57 = vsubpd_avx(auVar308,auVar243);
      auVar23 = vshufpd_avx(auVar57._0_16_,auVar57._0_16_,3);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = param_1[0x4c];
      auVar4._8_8_ = 0;
      auVar4._0_8_ = param_1[0x4d];
      auVar17 = vunpcklpd_avx(auVar11,auVar4);
      auVar58 = vperm2f128_avx(auVar57,auVar57,0x11);
      auVar22 = vunpcklpd_avx(auVar113,auVar427);
      dVar103 = auVar57._0_8_;
      auVar114._0_8_ =
           auVar108._0_8_ * auVar23._0_8_ + auVar58._0_8_ * auVar17._0_8_ + dVar103 * auVar22._0_8_;
      auVar114._8_8_ =
           auVar108._8_8_ * auVar23._8_8_ + auVar58._0_8_ * auVar17._8_8_ + dVar103 * auVar22._8_8_;
      auVar152._16_8_ =
           param_1[0x4a] * auVar23._0_8_ + auVar58._16_8_ * param_1[0x4e] + dVar103 * param_1[0x52];
      auVar152._0_16_ = auVar114;
      auVar152._24_8_ = auVar23._8_8_ * 0.0 + auVar58._16_8_ * 0.0 + dVar103 * 0.0;
      dVar15 = param_1[0x34];
      auVar320._8_8_ = 0;
      auVar320._0_8_ = param_1[0x37];
      auVar23 = vmovhps_avx(auVar320,param_1[0x36]);
      auVar345._8_8_ = 0;
      auVar345._0_8_ = param_1[0x35];
      auVar108 = vmovhps_avx(auVar345,param_1[0x34]);
      auVar17 = vshufpd_avx(auVar114,auVar114,3);
      auVar57 = vperm2f128_avx(auVar152,auVar152,0x11);
      dVar15 = dVar15 + (___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
                         auVar57._0_8_ * auVar108._0_8_ +
                        auVar17._0_8_ * param_1[0x36] *
                        ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
                        dVar15 * 0.0 +
                        ___xmm_bff00000000000003ff0000000000000 * auVar114._0_8_ * auVar23._0_8_) *
                        ___ymm_3fe00000000000003fe00000000000003fe00000000000003fe0000000000000;
      dVar95 = param_1[0x35] +
               (_UNK_150b54428 * auVar57._0_8_ * auVar108._8_8_ +
               auVar17._8_8_ * param_1[0x37] * _UNK_150b54408 +
               param_1[0x35] * 0.0 + _UNK_15076c6f8 * auVar114._0_8_ * auVar23._8_8_) *
               _UNK_150aa8f28;
      dVar97 = param_1[0x36] +
               (_UNK_150b54430 * auVar57._16_8_ * auVar23._0_8_ +
               auVar17._0_8_ * param_1[0x34] * _UNK_150b54410 +
               param_1[0x36] * 0.0 +
               ___xmm_bff00000000000003ff0000000000000 * auVar114._0_8_ * auVar108._0_8_) *
               _UNK_150aa8f30;
      dVar99 = param_1[0x37] +
               (_UNK_150b54438 * auVar57._16_8_ * auVar23._8_8_ +
               auVar17._8_8_ * param_1[0x35] * _UNK_150b54418 +
               param_1[0x37] * 0.0 + _UNK_15076c6f8 * auVar114._0_8_ * auVar108._8_8_) *
               _UNK_150aa8f38;
      auVar115._0_8_ = dVar15 * dVar15 + dVar97 * dVar97;
      auVar115._8_8_ = dVar95 * dVar95 + dVar99 * dVar99;
      auVar23 = vshufpd_avx(auVar115,auVar115,1);
      dVar103 = auVar115._0_8_ + auVar23._0_8_;
      auVar178._8_8_ = 0;
      auVar178._0_8_ = __real_3e45798ee2308c3a;
      auVar116._8_8_ = 0;
      auVar116._0_8_ = dVar103;
      auVar23 = vcmpsd_avx(auVar178,auVar116,6);
      uVar173 = ~auVar23._0_8_ & __real_ffffffffffffffff;
      dVar103 = __real_3ff0000000000000 / SQRT(dVar103);
      auVar261._0_8_ =
           (double)(((ulonglong)(dVar15 * dVar103) ^
                    ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) &
                   uVar173);
      auVar261._8_8_ = (double)(((ulonglong)(dVar95 * dVar103) ^ _UNK_150b54548) & uVar173);
      auVar274._16_8_ = (double)(((ulonglong)(dVar97 * dVar103) ^ _UNK_150b54550) & uVar173);
      auVar274._0_16_ = auVar261;
      auVar274._24_8_ = (double)(((ulonglong)(dVar99 * dVar103) ^ _UNK_150b54558) & uVar173);
      auVar454._0_8_ =
           (double)((ulonglong)auVar261._0_8_ ^
                   ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
      auVar454._8_8_ = (double)((ulonglong)auVar261._8_8_ ^ _UNK_150b54548);
      auVar454._16_8_ = (double)((ulonglong)auVar274._16_8_ ^ _UNK_150b54550);
      auVar454._24_8_ = (double)((ulonglong)auVar274._24_8_ ^ _UNK_150b54558);
      *(undefined1 (*) [16])(param_1 + 0x34) = auVar261;
      *(undefined1 (*) [16])(param_1 + 0x36) = auVar454._16_16_;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = param_1[4];
      auVar23 = vmovhps_avx(auVar25,param_1[7]);
      auVar63._0_8_ = auVar454._0_8_ * SUB168(*(undefined1 (*) [16])(param_1 + 5),0);
      auVar63._8_8_ = auVar454._8_8_ * SUB168(*(undefined1 (*) [16])(param_1 + 5),8);
      auVar63._16_8_ = auVar454._16_8_ * auVar23._0_8_;
      auVar63._24_8_ = auVar454._24_8_ * auVar23._8_8_;
      auVar153._16_16_ = auVar261;
      auVar153._0_16_ = auVar261;
      auVar59 = vperm2f128_avx(auVar454,auVar454,0x11);
      auVar57 = vshufpd_avx(auVar153,auVar59,9);
      auVar203._0_8_ = param_1[4] * auVar57._0_8_;
      auVar203._8_8_ = param_1[5] * auVar57._8_8_;
      auVar203._16_8_ = param_1[6] * auVar57._16_8_;
      auVar203._24_8_ = param_1[7] * auVar57._24_8_;
      auVar57 = vsubpd_avx(auVar63,auVar203);
      auVar26._0_8_ = auVar57._0_8_ + auVar57._0_8_;
      auVar26._8_8_ = auVar57._8_8_ + auVar57._8_8_;
      auVar64._16_8_ = auVar57._16_8_ + auVar57._16_8_;
      auVar64._0_16_ = auVar26;
      auVar64._24_8_ = auVar57._24_8_ + auVar57._24_8_;
      auVar57 = vshufpd_avx(auVar59,auVar59,0xf);
      auVar204._16_16_ = auVar26;
      auVar204._0_16_ = auVar26;
      auVar58 = vshufpd_avx(auVar204,ZEXT1632(auVar64._16_16_),1);
      dVar99 = auVar57._0_8_;
      dVar101 = auVar57._8_8_;
      dVar340 = auVar57._16_8_;
      dVar341 = auVar57._24_8_;
      auVar244._0_8_ = auVar26._0_8_ * auVar261._0_8_;
      auVar244._8_8_ = auVar26._8_8_ * auVar261._8_8_;
      auVar244._16_8_ = auVar64._16_8_ * auVar274._16_8_;
      auVar244._24_8_ = auVar64._24_8_ * auVar274._24_8_;
      auVar57 = vshufpd_avx(auVar153,ZEXT1632(auVar274._16_16_),1);
      auVar65._0_8_ = auVar26._0_8_ * auVar57._0_8_;
      auVar65._8_8_ = auVar26._8_8_ * auVar57._8_8_;
      auVar65._16_8_ = auVar64._16_8_ * auVar57._16_8_;
      auVar65._24_8_ = auVar64._24_8_ * auVar57._24_8_;
      auVar57 = vperm2f128_avx(auVar244,auVar244,1);
      auVar57 = vshufpd_avx(auVar57,auVar244,4);
      auVar57 = vsubpd_avx(auVar65,auVar57);
      auVar27._0_8_ = param_1[0x2e] + param_1[4] + dVar99 * auVar58._0_8_ + auVar57._0_8_;
      auVar27._8_8_ = param_1[0x2f] + param_1[5] + dVar101 * auVar58._8_8_ + auVar57._8_8_;
      auVar66._16_8_ = param_1[0x30] + param_1[6] + dVar340 * auVar58._16_8_ + auVar57._16_8_;
      auVar66._0_16_ = auVar27;
      auVar66._24_8_ = dVar341 * auVar58._24_8_ + 0.0 + auVar57._24_8_ + 0.0;
      *(undefined1 (*) [16])(param_1 + 0x20) = auVar27;
      dVar103 = (double)vmovlps_avx(auVar66._16_16_);
      param_1[0x22] = dVar103;
      auVar17 = vshufps_avx(auVar261,auVar261,0x44);
      auVar224._8_8_ = 0;
      auVar224._0_8_ = param_1[1];
      auVar23 = vmovhps_avx(auVar224,*param_1);
      auVar289._8_8_ = 0;
      auVar289._0_8_ = param_1[3];
      auVar108 = vmovhps_avx(auVar289,param_1[2]);
      dVar103 = auVar17._0_8_;
      dVar95 = auVar17._8_8_;
      auVar17 = vshufps_avx(auVar261,auVar261,0xee);
      dVar15 = auVar17._0_8_;
      dVar97 = auVar17._8_8_;
      param_1[0x26] =
           dVar255 * auVar23._0_8_ * auVar59._0_8_ +
           *param_1 * dVar99 + auVar108._0_8_ * dVar103 * dVar16 + param_1[2] * dVar15 * dVar98;
      param_1[0x27] =
           dVar282 * auVar23._8_8_ * auVar59._0_8_ +
           param_1[1] * dVar101 + auVar108._8_8_ * dVar95 * dVar96 + param_1[3] * dVar97 * dVar100;
      param_1[0x28] =
           dVar314 * auVar108._0_8_ * auVar59._16_8_ +
           param_1[2] * dVar340 + auVar23._0_8_ * dVar103 * dVar16 + *param_1 * dVar15 * dVar102;
      param_1[0x29] =
           dVar174 * auVar108._8_8_ * auVar59._16_8_ +
           param_1[3] * dVar341 + auVar23._8_8_ * dVar95 * dVar96 + param_1[1] * dVar97 * dVar217;
      dVar16 = auVar454._0_8_ + auVar454._0_8_;
      dVar96 = auVar454._8_8_ + auVar454._8_8_;
      dVar98 = auVar454._16_8_ + auVar454._16_8_;
      dVar100 = auVar454._24_8_ + auVar454._24_8_;
      auVar205._0_8_ = dVar16 * dVar103;
      auVar205._8_8_ = dVar96 * dVar95;
      auVar205._16_8_ = dVar98 * dVar103;
      auVar205._24_8_ = dVar100 * dVar95;
      auVar117._0_8_ = dVar16 * dVar15;
      auVar117._8_8_ = dVar96 * dVar97;
      auVar154._16_8_ = dVar98 * dVar15;
      auVar154._0_16_ = auVar117;
      auVar154._24_8_ = dVar100 * dVar97;
      auVar67._0_8_ = dVar16 * dVar99;
      auVar67._8_8_ = dVar96 * dVar101;
      auVar67._16_8_ = dVar98 * dVar340;
      auVar67._24_8_ = dVar100 * dVar341;
      auVar57 = vperm2f128_avx(auVar154,auVar205,0x21);
      auVar57 = vshufpd_avx(auVar57,ZEXT1632(auVar205._16_16_),4);
      auVar391._0_8_ = auVar67._0_8_ + auVar57._0_8_;
      auVar391._8_8_ = auVar67._8_8_ + auVar57._8_8_;
      auVar399._16_8_ = auVar67._16_8_ + auVar57._16_8_;
      auVar399._0_16_ = auVar391;
      auVar399._24_8_ = auVar67._24_8_ + auVar57._24_8_;
      auVar59 = vsubpd_avx(auVar57,auVar67);
      auVar23 = vshufpd_avx(auVar117,auVar117,1);
      auVar118._8_8_ = auVar205._0_8_;
      auVar118._0_8_ = auVar205._0_8_;
      auVar155._16_16_ = auVar118;
      auVar155._0_16_ = auVar118;
      auVar57 = vblendpd_avx(auVar155,ZEXT1632(auVar23),1);
      auVar68._16_16_ = auVar23;
      auVar68._0_16_ = auVar23;
      auVar58 = vblendpd_avx(ZEXT1632(CONCAT88(auVar274._16_8_ * dVar98,auVar274._16_8_ * dVar98)),
                             auVar68,0xc);
      auVar69._0_8_ = auVar57._0_8_ + auVar58._0_8_;
      auVar69._8_8_ = auVar57._8_8_ + auVar58._8_8_;
      auVar69._16_8_ = auVar57._16_8_ + auVar58._16_8_;
      auVar69._24_8_ = auVar57._24_8_ + auVar58._24_8_;
      auVar156._8_8_ = __real_3ff0000000000000;
      auVar156._0_8_ = __real_3ff0000000000000;
      auVar156._16_8_ = __real_3ff0000000000000;
      auVar156._24_8_ = __real_3ff0000000000000;
      auVar58 = vsubpd_avx(auVar156,auVar69);
      dVar100 = auVar58._0_8_;
      dVar16 = param_1[0x18];
      dVar103 = param_1[0x1a];
      auVar57 = vperm2f128_avx(auVar59,auVar59,0x11);
      auVar17 = ZEXT816(0) << 0x40;
      auVar23 = vmovhpd_avx(auVar17,param_1[0x19]);
      dVar96 = auVar23._0_8_;
      dVar98 = auVar23._8_8_;
      auVar23 = vshufpd_avx(auVar391,auVar391,3);
      auVar119._0_8_ = auVar23._0_8_ * 0.0 + dVar96 * auVar57._0_8_ + dVar16 * dVar100;
      auVar119._8_8_ = auVar23._8_8_ * 0.0 + dVar98 * auVar57._0_8_ + dVar100 * 0.0;
      auVar157._16_8_ = dVar103 * auVar23._0_8_ + auVar57._16_8_ * 0.0 + dVar100 * 0.0;
      auVar157._0_16_ = auVar119;
      auVar157._24_8_ = auVar23._8_8_ * 0.0 + auVar57._16_8_ * 0.0 + dVar100 * 0.0;
      auVar57 = vperm2f128_avx(auVar399,auVar399,0x11);
      auVar109 = auVar58._0_16_;
      auVar23 = vshufpd_avx(auVar109,auVar109,3);
      dVar100 = auVar59._0_8_;
      auVar321._0_8_ = dVar100 * 0.0 + dVar16 * auVar57._0_8_ + dVar96 * auVar23._0_8_;
      auVar321._8_8_ = dVar100 * 0.0 + auVar57._0_8_ * 0.0 + dVar98 * auVar23._8_8_;
      auVar333._16_8_ = dVar103 * dVar100 + auVar57._16_8_ * 0.0 + auVar23._0_8_ * 0.0;
      auVar333._0_16_ = auVar321;
      auVar333._24_8_ = dVar100 * 0.0 + auVar57._16_8_ * 0.0 + auVar23._8_8_ * 0.0;
      auVar22 = auVar59._0_16_;
      auVar23 = vshufpd_avx(auVar22,auVar22,3);
      auVar57 = vperm2f128_avx(auVar58,auVar58,0x11);
      auVar262._0_8_ = dVar16 * auVar23._0_8_ + dVar96 * auVar391._0_8_ + auVar57._0_8_ * 0.0;
      auVar262._8_8_ = auVar23._8_8_ * 0.0 + dVar98 * auVar391._0_8_ + auVar57._0_8_ * 0.0;
      auVar275._16_8_ = auVar23._0_8_ * 0.0 + auVar391._0_8_ * 0.0 + dVar103 * auVar57._16_8_;
      auVar275._0_16_ = auVar262;
      auVar275._24_8_ = auVar23._8_8_ * 0.0 + auVar391._0_8_ * 0.0 + auVar57._16_8_ * 0.0;
      auVar108 = vunpcklpd_avx(auVar109,auVar399._16_16_);
      auVar23 = vshufpd_avx(auVar22,auVar22,1);
      auVar245._16_16_ = auVar23;
      auVar245._0_16_ = auVar108;
      auVar57 = vblendpd_avx(ZEXT1632(auVar108),auVar245,0xc);
      dVar16 = auVar57._0_8_;
      dVar103 = auVar57._8_8_;
      dVar96 = auVar57._16_8_;
      dVar98 = auVar57._24_8_;
      auVar108 = vshufpd_avx(auVar119,auVar119,3);
      auVar23 = vblendpd_avx(auVar109,auVar59._16_16_,1);
      dVar282 = auVar23._0_8_;
      dVar314 = auVar23._8_8_;
      auVar23 = vshufpd_avx(auVar391,auVar22,1);
      auVar59 = vperm2f128_avx(auVar157,auVar157,0x11);
      auVar57 = vblendpd_avx(auVar58,ZEXT1632(auVar23),3);
      dVar100 = auVar57._0_8_;
      dVar102 = auVar57._8_8_;
      dVar217 = auVar57._16_8_;
      dVar255 = auVar57._24_8_;
      auVar120._0_8_ = dVar100 * auVar59._0_8_ + dVar16 * auVar119._0_8_ + dVar282 * auVar108._0_8_;
      auVar120._8_8_ = dVar102 * auVar59._0_8_ + dVar103 * auVar119._0_8_ + dVar314 * auVar108._8_8_
      ;
      auVar158._16_8_ =
           dVar217 * auVar59._16_8_ + dVar96 * auVar119._0_8_ + auVar391._0_8_ * auVar108._0_8_;
      auVar158._0_16_ = auVar120;
      auVar158._24_8_ =
           dVar255 * auVar59._16_8_ + dVar98 * auVar119._0_8_ + auVar391._8_8_ * auVar108._8_8_;
      auVar23 = vshufpd_avx(auVar321,auVar321,3);
      auVar57 = vperm2f128_avx(auVar333,auVar333,0x11);
      auVar179._0_8_ = dVar100 * auVar57._0_8_ + auVar23._0_8_ * dVar282 + dVar16 * auVar321._0_8_;
      auVar179._8_8_ = dVar102 * auVar57._0_8_ + auVar23._8_8_ * dVar314 + dVar103 * auVar321._0_8_;
      auVar206._16_8_ =
           dVar217 * auVar57._16_8_ + auVar23._0_8_ * auVar391._0_8_ + dVar96 * auVar321._0_8_;
      auVar206._0_16_ = auVar179;
      auVar206._24_8_ =
           dVar255 * auVar57._16_8_ + auVar23._8_8_ * auVar391._8_8_ + dVar98 * auVar321._0_8_;
      auVar23 = vshufpd_avx(auVar262,auVar262,3);
      auVar57 = vperm2f128_avx(auVar275,auVar275,0x11);
      auVar28._0_8_ = dVar100 * auVar57._0_8_ + dVar16 * auVar262._0_8_ + dVar282 * auVar23._0_8_;
      auVar28._8_8_ = dVar102 * auVar57._0_8_ + dVar103 * auVar262._0_8_ + dVar314 * auVar23._8_8_;
      auVar70._16_8_ =
           dVar217 * auVar57._16_8_ + dVar96 * auVar262._0_8_ + auVar391._0_8_ * auVar23._0_8_;
      auVar70._0_16_ = auVar28;
      auVar70._24_8_ =
           dVar255 * auVar57._16_8_ + dVar98 * auVar262._0_8_ + auVar391._8_8_ * auVar23._8_8_;
      *(undefined1 (*) [16])(param_1 + 0x48) = auVar120;
      dVar16 = (double)vmovlps_avx(auVar158._16_16_);
      param_1[0x4a] = dVar16;
      param_1[0x4b] = 0.0;
      *(undefined1 (*) [16])(param_1 + 0x4c) = auVar179;
      dVar16 = (double)vmovlpd_avx(auVar206._16_16_);
      param_1[0x4e] = dVar16;
      param_1[0x4f] = 0.0;
      *(undefined1 (*) [16])(param_1 + 0x50) = auVar28;
      dVar16 = (double)vmovlps_avx(auVar70._16_16_);
      param_1[0x52] = dVar16;
      *(undefined1 (*) [16])(param_1 + 0x55) = auVar17;
      *(undefined1 (*) [16])(param_1 + 0x53) = auVar17;
      param_1[0x57] = 1.0;
    }
    dVar314 = _UNK_150b54438;
    dVar282 = _UNK_150b54430;
    dVar255 = _UNK_150b54428;
    dVar217 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
    dVar102 = _UNK_150b54418;
    dVar100 = _UNK_150b54410;
    dVar98 = _UNK_150b54408;
    dVar96 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
    dVar103 = _UNK_15076c6f8;
    dVar16 = ___xmm_bff00000000000003ff0000000000000;
    if (param_1[0x1f] <= 0.0) goto LAB_1409fc6ac;
    auVar71._16_8_ = param_1[0x25];
    auVar71._0_16_ = *(undefined1 (*) [16])(param_1 + 0x23);
    auVar71._24_8_ = 0;
    auVar58 = vsubpd_avx(auVar71,auVar273);
    auVar13._8_8_ = 0;
    auVar13._0_8_ = param_1[0x33];
    auVar23 = vsubpd_avx(local_1a8,auVar13);
    auVar207._16_16_ = auVar58._0_16_;
    auVar207._0_16_ = auVar58._0_16_;
    auVar57 = vshufpd_avx(auVar207,ZEXT1632(auVar23),1);
    auVar159._0_8_ = auVar57._0_8_ * auVar176._0_8_;
    auVar159._8_8_ = auVar57._8_8_ * auVar176._8_8_;
    auVar159._16_8_ = auVar57._16_8_ * dStack_258;
    auVar159._24_8_ = auVar57._24_8_ * dStack_250;
    auVar72._0_8_ = auVar58._0_8_ * (double)local_288._0_8_;
    auVar72._8_8_ = auVar58._8_8_ * (double)local_288._8_8_;
    auVar72._16_8_ = auVar58._16_8_ * dStack_278;
    auVar72._24_8_ = auVar58._24_8_ * dStack_270;
    auVar58 = vsubpd_avx(auVar159,auVar72);
    auVar23 = vshufpd_avx(auVar58._0_16_,auVar58._0_16_,3);
    auVar108 = vunpcklpd_avx(auVar452,auVar443);
    auVar7._8_8_ = dVar283;
    auVar7._0_8_ = dVar283;
    auVar7._16_8_ = dVar283;
    auVar7._24_8_ = dVar283;
    auVar57 = vblendpd_avx(ZEXT1632(auVar259),auVar7,0xc);
    auVar57 = vblendpd_avx(auVar57,_local_148,4);
    auVar59 = vperm2f128_avx(auVar58,auVar58,0x11);
    auVar17 = vunpcklpd_avx(auVar371,auVar435);
    dVar283 = auVar58._0_8_;
    auVar259 = vblendps_avx((undefined1  [16])0x0,auVar284,3);
    auVar180._0_8_ =
         auVar57._0_8_ * auVar23._0_8_ + auVar59._0_8_ * auVar108._0_8_ + dVar283 * auVar17._0_8_;
    auVar180._8_8_ =
         auVar57._8_8_ * auVar23._8_8_ + auVar59._0_8_ * auVar108._8_8_ + dVar283 * auVar17._8_8_;
    auVar208._16_8_ =
         auVar57._16_8_ * auVar23._0_8_ + auVar59._16_8_ * param_1[0x5e] + dVar283 * auVar259._0_8_;
    auVar208._0_16_ = auVar180;
    auVar208._24_8_ =
         auVar57._24_8_ * auVar23._8_8_ + auVar59._16_8_ * 0.0 + dVar283 * auVar259._8_8_;
    dVar174 = param_1[0x38];
    auVar346._8_8_ = 0;
    auVar346._0_8_ = param_1[0x3b];
    auVar259 = vmovhps_avx(auVar346,param_1[0x3a]);
    auVar376._8_8_ = 0;
    auVar376._0_8_ = param_1[0x39];
    auVar23 = vmovhps_avx(auVar376,param_1[0x38]);
    auVar108 = vshufpd_avx(auVar180,auVar180,3);
    auVar57 = vperm2f128_avx(auVar208,auVar208,0x11);
    dVar174 = dVar174 + (auVar57._0_8_ * auVar23._0_8_ *
                         ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
                        auVar108._0_8_ * param_1[0x3a] *
                        ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
                        auVar259._0_8_ * auVar180._0_8_ * ___xmm_bff00000000000003ff0000000000000 +
                        dVar174 * 0.0) *
                        ___ymm_3fe00000000000003fe00000000000003fe00000000000003fe0000000000000;
    dVar15 = param_1[0x39] +
             (auVar57._0_8_ * auVar23._8_8_ * _UNK_150b54428 +
             auVar108._8_8_ * param_1[0x3b] * _UNK_150b54408 +
             auVar259._8_8_ * auVar180._0_8_ * _UNK_15076c6f8 + param_1[0x39] * 0.0) *
             _UNK_150aa8f28;
    dVar95 = param_1[0x3a] +
             (auVar57._16_8_ * auVar259._0_8_ * _UNK_150b54430 +
             auVar108._0_8_ * param_1[0x38] * _UNK_150b54410 +
             auVar23._0_8_ * auVar180._0_8_ * ___xmm_bff00000000000003ff0000000000000 +
             param_1[0x3a] * 0.0) * _UNK_150aa8f30;
    dVar97 = param_1[0x3b] +
             (auVar57._16_8_ * auVar259._8_8_ * _UNK_150b54438 +
             auVar108._8_8_ * param_1[0x39] * _UNK_150b54418 +
             auVar23._8_8_ * auVar180._0_8_ * _UNK_15076c6f8 + param_1[0x3b] * 0.0) * _UNK_150aa8f38
    ;
    auVar290._0_8_ = dVar174 * dVar174 + dVar95 * dVar95;
    auVar290._8_8_ = dVar15 * dVar15 + dVar97 * dVar97;
    auVar259 = vshufpd_avx(auVar290,auVar290,1);
    dVar283 = auVar290._0_8_ + auVar259._0_8_;
    auVar322._8_8_ = 0;
    auVar322._0_8_ = __real_3e45798ee2308c3a;
    auVar291._8_8_ = 0;
    auVar291._0_8_ = dVar283;
    auVar259 = vcmpsd_avx(auVar322,auVar291,6);
    uVar173 = ~auVar259._0_8_ & __real_ffffffffffffffff;
    dVar283 = __real_3ff0000000000000 / SQRT(dVar283);
    auVar347._0_8_ =
         (double)(((ulonglong)(dVar174 * dVar283) ^
                  ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) & uVar173
                 );
    auVar347._8_8_ = (double)(((ulonglong)(dVar15 * dVar283) ^ _UNK_150b54548) & uVar173);
    auVar362._16_8_ = (double)(((ulonglong)(dVar95 * dVar283) ^ _UNK_150b54550) & uVar173);
    auVar362._0_16_ = auVar347;
    auVar362._24_8_ = (double)(((ulonglong)(dVar97 * dVar283) ^ _UNK_150b54558) & uVar173);
    auVar334._0_8_ =
         (double)((ulonglong)auVar347._0_8_ ^
                 ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
    auVar334._8_8_ = (double)((ulonglong)auVar347._8_8_ ^ _UNK_150b54548);
    auVar334._16_8_ = (double)((ulonglong)auVar362._16_8_ ^ _UNK_150b54550);
    auVar334._24_8_ = (double)((ulonglong)auVar362._24_8_ ^ _UNK_150b54558);
    *(undefined1 (*) [16])(param_1 + 0x38) = auVar347;
    *(undefined1 (*) [16])(param_1 + 0x3a) = auVar334._16_16_;
    auVar181._8_8_ = 0;
    auVar181._0_8_ = param_1[0x10];
    auVar259 = vmovhps_avx(auVar181,param_1[0x13]);
    auVar209._0_8_ = SUB168(*(undefined1 (*) [16])(param_1 + 0x11),0) * auVar334._0_8_;
    auVar209._8_8_ = SUB168(*(undefined1 (*) [16])(param_1 + 0x11),8) * auVar334._8_8_;
    auVar209._16_8_ = auVar259._0_8_ * auVar334._16_8_;
    auVar209._24_8_ = auVar259._8_8_ * auVar334._24_8_;
    auVar412._16_16_ = auVar347;
    auVar412._0_16_ = auVar347;
    auVar59 = vperm2f128_avx(auVar334,auVar334,0x11);
    auVar57 = vshufpd_avx(auVar412,auVar59,9);
    auVar381._0_8_ = param_1[0x10] * auVar57._0_8_;
    auVar381._8_8_ = param_1[0x11] * auVar57._8_8_;
    auVar381._16_8_ = param_1[0x12] * auVar57._16_8_;
    auVar381._24_8_ = param_1[0x13] * auVar57._24_8_;
    auVar57 = vsubpd_avx(auVar209,auVar381);
    auVar182._0_8_ = auVar57._0_8_ + auVar57._0_8_;
    auVar182._8_8_ = auVar57._8_8_ + auVar57._8_8_;
    auVar210._16_8_ = auVar57._16_8_ + auVar57._16_8_;
    auVar210._0_16_ = auVar182;
    auVar210._24_8_ = auVar57._24_8_ + auVar57._24_8_;
    auVar57 = vshufpd_avx(auVar59,auVar59,0xf);
    auVar421._16_16_ = auVar182;
    auVar421._0_16_ = auVar182;
    auVar58 = vshufpd_avx(auVar421,ZEXT1632(auVar210._16_16_),1);
    dVar97 = auVar57._0_8_;
    dVar99 = auVar57._8_8_;
    dVar101 = auVar57._16_8_;
    dVar340 = auVar57._24_8_;
    auVar432._0_8_ = auVar182._0_8_ * auVar347._0_8_;
    auVar432._8_8_ = auVar182._8_8_ * auVar347._8_8_;
    auVar432._16_8_ = auVar210._16_8_ * auVar362._16_8_;
    auVar432._24_8_ = auVar210._24_8_ * auVar362._24_8_;
    auVar57 = vshufpd_avx(auVar412,ZEXT1632(auVar362._16_16_),1);
    auVar211._0_8_ = auVar57._0_8_ * auVar182._0_8_;
    auVar211._8_8_ = auVar57._8_8_ * auVar182._8_8_;
    auVar211._16_8_ = auVar57._16_8_ * auVar210._16_8_;
    auVar211._24_8_ = auVar57._24_8_ * auVar210._24_8_;
    auVar57 = vperm2f128_avx(auVar432,auVar432,1);
    auVar57 = vshufpd_avx(auVar57,auVar432,4);
    auVar57 = vsubpd_avx(auVar211,auVar57);
    auVar183._0_8_ = param_1[0x31] + param_1[0x10] + dVar97 * auVar58._0_8_ + auVar57._0_8_;
    auVar183._8_8_ = param_1[0x32] + param_1[0x11] + dVar99 * auVar58._8_8_ + auVar57._8_8_;
    auVar212._16_8_ = param_1[0x33] + param_1[0x12] + dVar101 * auVar58._16_8_ + auVar57._16_8_;
    auVar212._0_16_ = auVar183;
    auVar212._24_8_ = dVar340 * auVar58._24_8_ + 0.0 + auVar57._24_8_ + 0.0;
    *(undefined1 (*) [16])(param_1 + 0x23) = auVar183;
    dVar283 = (double)vmovlps_avx(auVar212._16_16_);
    param_1[0x25] = dVar283;
    auVar108 = vshufps_avx(auVar347,auVar347,0x44);
    auVar428._8_8_ = 0;
    auVar428._0_8_ = param_1[0xd];
    auVar259 = vmovhpd_avx(auVar428,param_1[0xc]);
    auVar438._8_8_ = 0;
    auVar438._0_8_ = param_1[0xf];
    auVar23 = vmovhpd_avx(auVar438,param_1[0xe]);
    dVar283 = auVar108._0_8_;
    dVar15 = auVar108._8_8_;
    auVar108 = vshufps_avx(auVar347,auVar347,0xee);
    dVar174 = auVar108._0_8_;
    dVar95 = auVar108._8_8_;
    param_1[0x2a] =
         auVar259._0_8_ * auVar59._0_8_ * dVar217 +
         param_1[0xe] * dVar174 * dVar96 + param_1[0xc] * dVar97 + auVar23._0_8_ * dVar283 * dVar16;
    param_1[0x2b] =
         auVar259._8_8_ * auVar59._0_8_ * dVar255 +
         param_1[0xf] * dVar95 * dVar98 + param_1[0xd] * dVar99 + auVar23._8_8_ * dVar15 * dVar103;
    param_1[0x2c] =
         auVar23._0_8_ * auVar59._16_8_ * dVar282 +
         param_1[0xc] * dVar174 * dVar100 +
         param_1[0xe] * dVar101 + auVar259._0_8_ * dVar283 * dVar16;
    param_1[0x2d] =
         auVar23._8_8_ * auVar59._16_8_ * dVar314 +
         param_1[0xd] * dVar95 * dVar102 +
         param_1[0xf] * dVar340 + auVar259._8_8_ * dVar15 * dVar103;
    dVar16 = auVar334._0_8_ + auVar334._0_8_;
    dVar103 = auVar334._8_8_ + auVar334._8_8_;
    dVar96 = auVar334._16_8_ + auVar334._16_8_;
    dVar98 = auVar334._24_8_ + auVar334._24_8_;
    auVar335._0_8_ = dVar283 * dVar16;
    auVar335._8_8_ = dVar15 * dVar103;
    auVar335._16_8_ = dVar283 * dVar96;
    auVar335._24_8_ = dVar15 * dVar98;
    auVar348._0_8_ = dVar16 * dVar174;
    auVar348._8_8_ = dVar103 * dVar95;
    auVar363._16_8_ = dVar96 * dVar174;
    auVar363._0_16_ = auVar348;
    auVar363._24_8_ = dVar98 * dVar95;
    auVar160._0_8_ = dVar97 * dVar16;
    auVar160._8_8_ = dVar99 * dVar103;
    auVar160._16_8_ = dVar101 * dVar96;
    auVar160._24_8_ = dVar340 * dVar98;
    auVar57 = vperm2f128_avx(auVar363,auVar335,0x21);
    auVar57 = vshufpd_avx(auVar57,ZEXT1632(auVar335._16_16_),4);
    auVar225._0_8_ = auVar160._0_8_ + auVar57._0_8_;
    auVar225._8_8_ = auVar160._8_8_ + auVar57._8_8_;
    auVar246._16_8_ = auVar160._16_8_ + auVar57._16_8_;
    auVar246._0_16_ = auVar225;
    auVar246._24_8_ = auVar160._24_8_ + auVar57._24_8_;
    auVar59 = vsubpd_avx(auVar57,auVar160);
    auVar259 = vshufpd_avx(auVar348,auVar348,1);
    auVar292._8_8_ = auVar335._0_8_;
    auVar292._0_8_ = auVar335._0_8_;
    auVar309._16_16_ = auVar292;
    auVar309._0_16_ = auVar292;
    auVar57 = vblendpd_avx(auVar309,ZEXT1632(auVar259),1);
    auVar58 = vblendpd_avx(ZEXT1632(CONCAT88(auVar362._16_8_ * dVar96,auVar362._16_8_ * dVar96)),
                           ZEXT1632(auVar259) << 0x80,0xc);
    auVar161._0_8_ = auVar57._0_8_ + auVar58._0_8_;
    auVar161._8_8_ = auVar57._8_8_ + auVar58._8_8_;
    auVar161._16_8_ = auVar57._16_8_ + auVar58._16_8_;
    auVar161._24_8_ = auVar57._24_8_ + auVar58._24_8_;
    auVar213._8_8_ = __real_3ff0000000000000;
    auVar213._0_8_ = __real_3ff0000000000000;
    auVar213._16_8_ = __real_3ff0000000000000;
    auVar213._24_8_ = __real_3ff0000000000000;
    auVar58 = vsubpd_avx(auVar213,auVar161);
    dVar283 = auVar58._0_8_;
    dVar16 = param_1[0x1b];
    dVar103 = param_1[0x1d];
    auVar57 = vperm2f128_avx(auVar59,auVar59,0x11);
    auVar108 = ZEXT816(0) << 0x40;
    auVar259 = vmovhpd_avx(auVar108,param_1[0x1c]);
    dVar96 = auVar259._0_8_;
    dVar98 = auVar259._8_8_;
    auVar259 = vshufpd_avx(auVar225,auVar225,3);
    auVar349._0_8_ = auVar259._0_8_ * 0.0 + dVar96 * auVar57._0_8_ + dVar16 * dVar283;
    auVar349._8_8_ = auVar259._8_8_ * 0.0 + dVar98 * auVar57._0_8_ + dVar283 * 0.0;
    auVar364._16_8_ = dVar103 * auVar259._0_8_ + auVar57._16_8_ * 0.0 + dVar283 * 0.0;
    auVar364._0_16_ = auVar349;
    auVar364._24_8_ = auVar259._8_8_ * 0.0 + auVar57._16_8_ * 0.0 + dVar283 * 0.0;
    auVar57 = vperm2f128_avx(auVar246,auVar246,0x11);
    auVar22 = auVar58._0_16_;
    auVar259 = vshufpd_avx(auVar22,auVar22,3);
    dVar283 = auVar59._0_8_;
    auVar323._0_8_ = dVar283 * 0.0 + dVar16 * auVar57._0_8_ + dVar96 * auVar259._0_8_;
    auVar323._8_8_ = dVar283 * 0.0 + auVar57._0_8_ * 0.0 + dVar98 * auVar259._8_8_;
    auVar336._16_8_ = dVar103 * dVar283 + auVar57._16_8_ * 0.0 + auVar259._0_8_ * 0.0;
    auVar336._0_16_ = auVar323;
    auVar336._24_8_ = dVar283 * 0.0 + auVar57._16_8_ * 0.0 + auVar259._8_8_ * 0.0;
    auVar17 = auVar59._0_16_;
    auVar259 = vshufpd_avx(auVar17,auVar17,3);
    auVar57 = vperm2f128_avx(auVar58,auVar58,0x11);
    auVar29._0_8_ = dVar96 * auVar225._0_8_ + dVar16 * auVar259._0_8_ + auVar57._0_8_ * 0.0;
    auVar29._8_8_ = dVar98 * auVar225._0_8_ + auVar259._8_8_ * 0.0 + auVar57._0_8_ * 0.0;
    auVar73._16_8_ = auVar225._0_8_ * 0.0 + auVar259._0_8_ * 0.0 + auVar57._16_8_ * dVar103;
    auVar73._0_16_ = auVar29;
    auVar73._24_8_ = auVar225._0_8_ * 0.0 + auVar259._8_8_ * 0.0 + auVar57._16_8_ * 0.0;
    auVar23 = vunpcklpd_avx(auVar22,auVar246._16_16_);
    auVar259 = vshufpd_avx(auVar17,auVar17,1);
    auVar400._16_16_ = auVar259;
    auVar400._0_16_ = auVar29;
    auVar57 = vblendpd_avx(ZEXT1632(auVar23),auVar400,0xc);
    dVar98 = auVar57._0_8_;
    dVar100 = auVar57._8_8_;
    dVar102 = auVar57._16_8_;
    dVar217 = auVar57._24_8_;
    auVar23 = vshufpd_avx(auVar349,auVar349,3);
    auVar259 = vblendpd_avx(auVar22,auVar59._16_16_,1);
    dVar255 = auVar259._0_8_;
    dVar282 = auVar259._8_8_;
    auVar259 = vshufpd_avx(auVar225,auVar17,1);
    auVar59 = vperm2f128_avx(auVar364,auVar364,0x11);
    auVar57 = vblendpd_avx(auVar58,ZEXT1632(auVar259),3);
    dVar16 = auVar57._0_8_;
    dVar103 = auVar57._8_8_;
    dVar283 = auVar57._16_8_;
    dVar96 = auVar57._24_8_;
    auVar226._0_8_ = dVar16 * auVar59._0_8_ + dVar255 * auVar23._0_8_ + dVar98 * auVar349._0_8_;
    auVar226._8_8_ = dVar103 * auVar59._0_8_ + dVar282 * auVar23._8_8_ + dVar100 * auVar349._0_8_;
    auVar247._16_8_ =
         dVar283 * auVar59._16_8_ + auVar225._0_8_ * auVar23._0_8_ + dVar102 * auVar349._0_8_;
    auVar247._0_16_ = auVar226;
    auVar247._24_8_ =
         dVar96 * auVar59._16_8_ + auVar225._8_8_ * auVar23._8_8_ + dVar217 * auVar349._0_8_;
    auVar259 = vshufpd_avx(auVar323,auVar323,3);
    auVar57 = vperm2f128_avx(auVar336,auVar336,0x11);
    auVar184._0_8_ = dVar16 * auVar57._0_8_ + dVar98 * auVar323._0_8_ + dVar255 * auVar259._0_8_;
    auVar184._8_8_ = dVar103 * auVar57._0_8_ + dVar100 * auVar323._0_8_ + dVar282 * auVar259._8_8_;
    auVar214._16_8_ =
         dVar283 * auVar57._16_8_ + dVar102 * auVar323._0_8_ + auVar225._0_8_ * auVar259._0_8_;
    auVar214._0_16_ = auVar184;
    auVar214._24_8_ =
         dVar96 * auVar57._16_8_ + dVar217 * auVar323._0_8_ + auVar225._8_8_ * auVar259._8_8_;
    auVar259 = vshufpd_avx(auVar29,auVar29,3);
    auVar57 = vperm2f128_avx(auVar73,auVar73,0x11);
    auVar30._0_8_ = dVar16 * auVar57._0_8_ + dVar98 * auVar29._0_8_ + dVar255 * auVar259._0_8_;
    auVar30._8_8_ = dVar103 * auVar57._0_8_ + dVar100 * auVar29._0_8_ + dVar282 * auVar259._8_8_;
    auVar74._16_8_ =
         dVar283 * auVar57._16_8_ + dVar102 * auVar29._0_8_ + auVar225._0_8_ * auVar259._0_8_;
    auVar74._0_16_ = auVar30;
    auVar74._24_8_ =
         dVar96 * auVar57._16_8_ + dVar217 * auVar29._0_8_ + auVar225._8_8_ * auVar259._8_8_;
    *(undefined1 (*) [16])(param_1 + 0x58) = auVar226;
    dVar16 = (double)vmovlpd_avx(auVar247._16_16_);
    param_1[0x5a] = dVar16;
    param_1[0x5b] = 0.0;
    *(undefined1 (*) [16])(param_1 + 0x5c) = auVar184;
    dVar16 = (double)vmovlpd_avx(auVar214._16_16_);
    param_1[0x5e] = dVar16;
    param_1[0x5f] = 0.0;
    *(undefined1 (*) [16])(param_1 + 0x60) = auVar30;
    dVar16 = (double)vmovlpd_avx(auVar74._16_16_);
    param_1[0x62] = dVar16;
    *(undefined1 (*) [16])(param_1 + 0x65) = auVar108;
    *(undefined1 (*) [16])(param_1 + 99) = auVar108;
  }
  param_1[0x67] = 1.0;
LAB_1409fc6ac:
  auVar185._0_8_ = param_1[0x38] * param_1[0x34] + param_1[0x3a] * param_1[0x36];
  auVar185._8_8_ = param_1[0x39] * param_1[0x35] + param_1[0x3b] * param_1[0x37];
  auVar259 = vshufpd_avx(auVar185,auVar185,1);
  auVar186._8_8_ = 0;
  auVar186._0_8_ = auVar185._0_8_ + auVar259._0_8_;
  auVar259 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar186,2);
  auVar299._8_8_ = 0;
  auVar299._0_8_ = __real_3ff0000000000000;
  auVar327._8_8_ = 0;
  auVar327._0_8_ = __real_bff0000000000000;
  auVar259 = vblendvpd_avx(auVar327,auVar299,auVar259);
  dVar16 = auVar259._0_8_;
  param_1[0x38] = param_1[0x38] * dVar16;
  param_1[0x39] = param_1[0x39] * dVar16;
  param_1[0x3a] = param_1[0x3a] * dVar16;
  param_1[0x3b] = param_1[0x3b] * dVar16;
  auVar127._0_8_ = param_1[0x2a] * param_1[0x26] + param_1[0x2c] * param_1[0x28];
  auVar127._8_8_ = param_1[0x2b] * param_1[0x27] + param_1[0x2d] * param_1[0x29];
  auVar259 = vshufpd_avx(auVar127,auVar127,1);
  auVar128._8_8_ = 0;
  auVar128._0_8_ = auVar127._0_8_ + auVar259._0_8_;
  auVar259 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar128,2);
  auVar259 = vblendvpd_avx(auVar327,auVar299,auVar259);
  dVar16 = auVar259._0_8_;
  param_1[0x2a] = param_1[0x2a] * dVar16;
  param_1[0x2b] = param_1[0x2b] * dVar16;
  param_1[0x2c] = param_1[0x2c] * dVar16;
  param_1[0x2d] = param_1[0x2d] * dVar16;
  auVar43._0_8_ = param_1[0x84] + (double)local_268._0_8_;
  auVar43._8_8_ = param_1[0x85] + (double)local_268._8_8_;
  auVar94._16_8_ = param_1[0x86] + dStack_258;
  auVar94._0_16_ = auVar43;
  auVar94._24_8_ = dStack_250 + 0.0;
  *(undefined1 (*) [16])(param_1 + 0x84) = auVar43;
  dVar16 = (double)vmovlps_avx(auVar94._16_16_);
  param_1[0x86] = dVar16;
  return;
}

// SizeofFPBDJointSolver_avx @ 1409fc800

undefined8 SizeofFPBDJointSolver_avx(void)

{
  return 0x588;
}

// ApplyRotationDelta2_avx @ 1409fc810

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyRotationDelta2_avx(double *param_1,double *param_2,double *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [32];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar38;
  double dVar42;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar43;
  undefined1 auVar41 [32];
  double dVar44;
  double dVar45;
  double dVar56;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar57;
  double dVar58;
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  double dVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [32];
  undefined1 auVar70 [32];
  ulonglong uVar76;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar84 [32];
  double dVar85;
  double dVar86;
  undefined1 auVar87 [16];
  double dVar89;
  undefined1 auVar88 [32];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [32];
  undefined1 auVar94 [32];
  undefined1 auVar96 [32];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [32];
  undefined1 auVar101 [32];
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  double dVar109;
  double dVar112;
  undefined1 auVar110 [16];
  undefined1 auVar111 [32];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar29 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar36 [32];
  undefined1 auVar37 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar93 [32];
  undefined1 auVar95 [32];
  undefined1 auVar100 [32];
  undefined1 auVar102 [32];
  
  dVar89 = _UNK_150b54438;
  dVar86 = _UNK_150b54430;
  dVar44 = _UNK_150b54428;
  dVar43 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar42 = _UNK_150b54418;
  dVar38 = _UNK_150b54410;
  dVar21 = _UNK_150b54408;
  dVar20 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar19 = _UNK_15076c6f8;
  dVar6 = ___xmm_bff00000000000003ff0000000000000;
  if (0.0 < param_1[0x1e]) {
    dVar45 = param_1[0x34];
    dVar59 = *param_2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = param_1[0x37];
    auVar7 = vmovhpd_avx(auVar7,param_1[0x36]);
    auVar22._8_8_ = 0;
    auVar22._0_8_ = param_1[0x35];
    auVar9 = vmovhps_avx(auVar22,param_1[0x34]);
    dVar58 = param_2[1];
    dVar85 = param_2[2];
    dVar45 = dVar45 + (auVar9._0_8_ * dVar85 *
                       ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
                      dVar58 * param_1[0x36] *
                      ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
                      dVar45 * 0.0 + auVar7._0_8_ * dVar59 * ___xmm_bff00000000000003ff0000000000000
                      ) * ___ymm_3fe00000000000003fe00000000000003fe00000000000003fe0000000000000;
    dVar56 = param_1[0x35] +
             (auVar9._8_8_ * dVar85 * _UNK_150b54428 +
             dVar58 * param_1[0x37] * _UNK_150b54408 +
             param_1[0x35] * 0.0 + auVar7._8_8_ * dVar59 * _UNK_15076c6f8) * _UNK_150aa8f28;
    dVar57 = param_1[0x36] +
             (auVar7._0_8_ * dVar85 * _UNK_150b54430 +
             dVar58 * param_1[0x34] * _UNK_150b54410 +
             param_1[0x36] * 0.0 + auVar9._0_8_ * dVar59 * ___xmm_bff00000000000003ff0000000000000)
             * _UNK_150aa8f30;
    dVar58 = param_1[0x37] +
             (auVar7._8_8_ * dVar85 * _UNK_150b54438 +
             dVar58 * param_1[0x35] * _UNK_150b54418 +
             param_1[0x37] * 0.0 + auVar9._8_8_ * dVar59 * _UNK_15076c6f8) * _UNK_150aa8f38;
    auVar60._0_8_ = dVar45 * dVar45 + dVar57 * dVar57;
    auVar60._8_8_ = dVar56 * dVar56 + dVar58 * dVar58;
    auVar7 = vshufpd_avx(auVar60,auVar60,1);
    dVar59 = auVar60._0_8_ + auVar7._0_8_;
    auVar77._8_8_ = 0;
    auVar77._0_8_ = __real_3e45798ee2308c3a;
    auVar61._8_8_ = 0;
    auVar61._0_8_ = dVar59;
    auVar7 = vcmpsd_avx(auVar77,auVar61,6);
    uVar76 = ~auVar7._0_8_ & __real_ffffffffffffffff;
    dVar59 = __real_3ff0000000000000 / SQRT(dVar59);
    auVar78._0_8_ =
         (double)(((ulonglong)(dVar45 * dVar59) ^
                  ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) & uVar76)
    ;
    auVar78._8_8_ = (double)(((ulonglong)(dVar56 * dVar59) ^ _UNK_150b54548) & uVar76);
    auVar82._16_8_ = (double)(((ulonglong)(dVar57 * dVar59) ^ _UNK_150b54550) & uVar76);
    auVar82._0_16_ = auVar78;
    auVar82._24_8_ = (double)(((ulonglong)(dVar58 * dVar59) ^ _UNK_150b54558) & uVar76);
    auVar69._0_8_ =
         (double)((ulonglong)auVar78._0_8_ ^
                 ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
    auVar69._8_8_ = (double)((ulonglong)auVar78._8_8_ ^ _UNK_150b54548);
    auVar69._16_8_ = (double)((ulonglong)auVar82._16_8_ ^ _UNK_150b54550);
    auVar69._24_8_ = (double)((ulonglong)auVar82._24_8_ ^ _UNK_150b54558);
    auVar7 = vshufps_avx(auVar78,auVar78,0x4e);
    auVar8 = auVar69._16_16_;
    auVar9 = vshufps_avx(auVar8,auVar8,0x4e);
    dVar59 = (double)vmovlpd_avx(auVar78);
    param_1[0x34] = dVar59;
    dVar59 = (double)vmovlpd_avx(auVar7);
    param_1[0x35] = dVar59;
    dVar59 = (double)vmovlpd_avx(auVar8);
    param_1[0x36] = dVar59;
    dVar59 = (double)vmovlpd_avx(auVar9);
    param_1[0x37] = dVar59;
    auVar87._8_8_ = 0;
    auVar87._0_8_ = param_1[4];
    auVar7 = vmovhps_avx(auVar87,param_1[7]);
    auVar88._0_8_ = SUB168(*(undefined1 (*) [16])(param_1 + 5),0) * auVar69._0_8_;
    auVar88._8_8_ = SUB168(*(undefined1 (*) [16])(param_1 + 5),8) * auVar69._8_8_;
    auVar88._16_8_ = auVar7._0_8_ * auVar69._16_8_;
    auVar88._24_8_ = auVar7._8_8_ * auVar69._24_8_;
    auVar15 = vperm2f128_avx(auVar69,auVar69,0x11);
    auVar105._16_16_ = auVar78;
    auVar105._0_16_ = auVar78;
    auVar29 = vshufpd_avx(auVar105,auVar15,9);
    auVar99._0_8_ = param_1[4] * auVar29._0_8_;
    auVar99._8_8_ = param_1[5] * auVar29._8_8_;
    auVar99._16_8_ = param_1[6] * auVar29._16_8_;
    auVar99._24_8_ = param_1[7] * auVar29._24_8_;
    auVar29 = vsubpd_avx(auVar88,auVar99);
    auVar97._0_8_ = auVar29._0_8_ + auVar29._0_8_;
    auVar97._8_8_ = auVar29._8_8_ + auVar29._8_8_;
    auVar100._16_8_ = auVar29._16_8_ + auVar29._16_8_;
    auVar100._0_16_ = auVar97;
    auVar100._24_8_ = auVar29._24_8_ + auVar29._24_8_;
    auVar29 = vshufpd_avx(auVar15,auVar15,0xf);
    auVar107._16_16_ = auVar97;
    auVar107._0_16_ = auVar97;
    auVar11 = vshufpd_avx(auVar107,ZEXT1632(auVar100._16_16_),1);
    dVar85 = auVar29._0_8_;
    dVar45 = auVar29._8_8_;
    dVar56 = auVar29._16_8_;
    dVar57 = auVar29._24_8_;
    auVar111._0_8_ = auVar97._0_8_ * auVar78._0_8_;
    auVar111._8_8_ = auVar97._8_8_ * auVar78._8_8_;
    auVar111._16_8_ = auVar100._16_8_ * auVar82._16_8_;
    auVar111._24_8_ = auVar100._24_8_ * auVar82._24_8_;
    auVar29 = vshufpd_avx(auVar105,ZEXT1632(auVar82._16_16_),1);
    auVar101._0_8_ = auVar97._0_8_ * auVar29._0_8_;
    auVar101._8_8_ = auVar97._8_8_ * auVar29._8_8_;
    auVar101._16_8_ = auVar100._16_8_ * auVar29._16_8_;
    auVar101._24_8_ = auVar100._24_8_ * auVar29._24_8_;
    auVar29 = vperm2f128_avx(auVar111,auVar111,1);
    auVar29 = vshufpd_avx(auVar29,auVar111,4);
    auVar29 = vsubpd_avx(auVar101,auVar29);
    auVar98._0_8_ = param_1[0x2e] + param_1[4] + dVar85 * auVar11._0_8_ + auVar29._0_8_;
    auVar98._8_8_ = param_1[0x2f] + param_1[5] + dVar45 * auVar11._8_8_ + auVar29._8_8_;
    auVar102._16_8_ = param_1[0x30] + param_1[6] + dVar56 * auVar11._16_8_ + auVar29._16_8_;
    auVar102._0_16_ = auVar98;
    auVar102._24_8_ = dVar57 * auVar11._24_8_ + 0.0 + auVar29._24_8_ + 0.0;
    *(undefined1 (*) [16])(param_1 + 0x20) = auVar98;
    dVar59 = (double)vmovlps_avx(auVar102._16_16_);
    param_1[0x22] = dVar59;
    auVar8 = vshufps_avx(auVar78,auVar78,0x44);
    auVar113._8_8_ = 0;
    auVar113._0_8_ = param_1[3];
    auVar9 = vmovhps_avx(auVar113,param_1[2]);
    auVar115._8_8_ = 0;
    auVar115._0_8_ = param_1[1];
    auVar7 = vmovhpd_avx(auVar115,*param_1);
    dVar109 = auVar8._0_8_;
    dVar112 = auVar8._8_8_;
    auVar8 = vshufps_avx(auVar78,auVar78,0xee);
    dVar59 = auVar8._0_8_;
    dVar58 = auVar8._8_8_;
    param_1[0x26] =
         auVar7._0_8_ * auVar15._0_8_ * dVar43 +
         param_1[2] * dVar59 * dVar20 + *param_1 * dVar85 + dVar109 * auVar9._0_8_ * dVar6;
    param_1[0x27] =
         auVar7._8_8_ * auVar15._0_8_ * dVar44 +
         param_1[3] * dVar58 * dVar21 + param_1[1] * dVar45 + dVar112 * auVar9._8_8_ * dVar19;
    param_1[0x28] =
         auVar9._0_8_ * auVar15._16_8_ * dVar86 +
         *param_1 * dVar59 * dVar38 + param_1[2] * dVar56 + dVar109 * auVar7._0_8_ * dVar6;
    param_1[0x29] =
         auVar9._8_8_ * auVar15._16_8_ * dVar89 +
         param_1[1] * dVar58 * dVar42 + param_1[3] * dVar57 + dVar112 * auVar7._8_8_ * dVar19;
    dVar6 = auVar69._0_8_ + auVar69._0_8_;
    dVar19 = auVar69._8_8_ + auVar69._8_8_;
    dVar20 = auVar69._16_8_ + auVar69._16_8_;
    dVar21 = auVar69._24_8_ + auVar69._24_8_;
    auVar70._0_8_ = dVar109 * dVar6;
    auVar70._8_8_ = dVar112 * dVar19;
    auVar70._16_8_ = dVar109 * dVar20;
    auVar70._24_8_ = dVar112 * dVar21;
    auVar23._0_8_ = dVar6 * dVar59;
    auVar23._8_8_ = dVar19 * dVar58;
    auVar29._16_8_ = dVar20 * dVar59;
    auVar29._0_16_ = auVar23;
    auVar29._24_8_ = dVar21 * dVar58;
    auVar11._0_8_ = dVar85 * dVar6;
    auVar11._8_8_ = dVar45 * dVar19;
    auVar11._16_8_ = dVar56 * dVar20;
    auVar11._24_8_ = dVar57 * dVar21;
    auVar29 = vperm2f128_avx(auVar29,auVar70,0x21);
    auVar29 = vshufpd_avx(auVar29,ZEXT1632(auVar70._16_16_),4);
    auVar34._0_8_ = auVar11._0_8_ + auVar29._0_8_;
    auVar34._8_8_ = auVar11._8_8_ + auVar29._8_8_;
    auVar36._16_8_ = auVar11._16_8_ + auVar29._16_8_;
    auVar36._0_16_ = auVar34;
    auVar36._24_8_ = auVar11._24_8_ + auVar29._24_8_;
    auVar15 = vsubpd_avx(auVar29,auVar11);
    auVar7 = vshufpd_avx(auVar23,auVar23,1);
    auVar24._8_8_ = auVar70._0_8_;
    auVar24._0_8_ = auVar70._0_8_;
    auVar30._16_16_ = auVar24;
    auVar30._0_16_ = auVar24;
    auVar29 = vblendpd_avx(auVar30,ZEXT1632(auVar7),1);
    auVar12._16_16_ = auVar7;
    auVar12._0_16_ = ZEXT816(0);
    auVar11 = vblendpd_avx(ZEXT1632(CONCAT88(auVar69._16_8_ * dVar20,auVar69._16_8_ * dVar20)),
                           auVar12,0xc);
    auVar13._0_8_ = auVar29._0_8_ + auVar11._0_8_;
    auVar13._8_8_ = auVar29._8_8_ + auVar11._8_8_;
    auVar13._16_8_ = auVar29._16_8_ + auVar11._16_8_;
    auVar13._24_8_ = auVar29._24_8_ + auVar11._24_8_;
    auVar31._8_8_ = __real_3ff0000000000000;
    auVar31._0_8_ = __real_3ff0000000000000;
    auVar31._16_8_ = __real_3ff0000000000000;
    auVar31._24_8_ = __real_3ff0000000000000;
    auVar11 = vsubpd_avx(auVar31,auVar13);
    dVar20 = auVar11._0_8_;
    dVar6 = param_1[0x18];
    dVar19 = param_1[0x1a];
    auVar29 = vperm2f128_avx(auVar15,auVar15,0x11);
    auVar22 = ZEXT816(0) << 0x40;
    auVar7 = vmovhpd_avx(auVar22,param_1[0x19]);
    dVar21 = auVar7._0_8_;
    dVar38 = auVar7._8_8_;
    auVar7 = vshufpd_avx(auVar34,auVar34,3);
    dVar42 = SUB168(ZEXT816(0),4);
    auVar79._0_8_ = auVar7._0_8_ * 0.0 + dVar21 * auVar29._0_8_ + dVar6 * dVar20;
    auVar79._8_8_ = dVar42 * auVar7._8_8_ + dVar38 * auVar29._0_8_ + dVar20 * 0.0;
    auVar83._16_8_ = dVar19 * auVar7._0_8_ + auVar29._16_8_ * 0.0 + dVar20 * 0.0;
    auVar83._0_16_ = auVar79;
    auVar83._24_8_ = auVar7._8_8_ * 0.0 + auVar29._16_8_ * 0.0 + dVar20 * 0.0;
    auVar29 = vperm2f128_avx(auVar36,auVar36,0x11);
    auVar24 = auVar11._0_16_;
    auVar7 = vshufpd_avx(auVar24,auVar24,3);
    dVar20 = auVar15._0_8_;
    auVar62._0_8_ = dVar20 * 0.0 + dVar6 * auVar29._0_8_ + dVar21 * auVar7._0_8_;
    auVar62._8_8_ = dVar42 * dVar20 + auVar29._0_8_ * 0.0 + dVar38 * auVar7._8_8_;
    auVar71._16_8_ = dVar19 * dVar20 + auVar29._16_8_ * 0.0 + auVar7._0_8_ * 0.0;
    auVar71._0_16_ = auVar62;
    auVar71._24_8_ = dVar20 * 0.0 + auVar29._16_8_ * 0.0 + auVar7._8_8_ * 0.0;
    auVar23 = auVar15._0_16_;
    auVar7 = vshufpd_avx(auVar23,auVar23,3);
    auVar29 = vperm2f128_avx(auVar11,auVar11,0x11);
    auVar8._0_8_ = auVar29._0_8_ * 0.0 + dVar21 * auVar34._0_8_ + dVar6 * auVar7._0_8_;
    auVar8._8_8_ = dVar42 * auVar29._0_8_ + dVar38 * auVar34._0_8_ + auVar7._8_8_ * 0.0;
    auVar14._16_8_ = dVar19 * auVar29._16_8_ + auVar34._0_8_ * 0.0 + auVar7._0_8_ * 0.0;
    auVar14._0_16_ = auVar8;
    auVar14._24_8_ = auVar29._16_8_ * 0.0 + auVar34._0_8_ * 0.0 + auVar7._8_8_ * 0.0;
    auVar9 = vunpcklpd_avx(auVar24,auVar36._16_16_);
    auVar7 = vshufpd_avx(auVar23,auVar23,1);
    auVar103._16_16_ = auVar7;
    auVar103._0_16_ = ZEXT816(0);
    auVar29 = vblendpd_avx(ZEXT1632(auVar9),auVar103,0xc);
    dVar38 = auVar29._0_8_;
    dVar42 = auVar29._8_8_;
    dVar43 = auVar29._16_8_;
    dVar44 = auVar29._24_8_;
    auVar9 = vshufpd_avx(auVar79,auVar79,3);
    auVar7 = vblendpd_avx(auVar24,auVar15._16_16_,1);
    dVar86 = auVar7._0_8_;
    dVar89 = auVar7._8_8_;
    auVar15 = vperm2f128_avx(auVar83,auVar83,0x11);
    auVar7 = vshufpd_avx(auVar34,auVar23,1);
    auVar29 = vblendpd_avx(auVar11,ZEXT1632(auVar7),3);
    dVar6 = auVar29._0_8_;
    dVar19 = auVar29._8_8_;
    dVar20 = auVar29._16_8_;
    dVar21 = auVar29._24_8_;
    auVar35._0_8_ = dVar38 * auVar79._0_8_ + dVar86 * auVar9._0_8_ + dVar6 * auVar15._0_8_;
    auVar35._8_8_ = dVar42 * auVar79._0_8_ + dVar89 * auVar9._8_8_ + dVar19 * auVar15._0_8_;
    auVar37._16_8_ = dVar43 * auVar79._0_8_ + auVar34._0_8_ * auVar9._0_8_ + dVar20 * auVar15._16_8_
    ;
    auVar37._0_16_ = auVar35;
    auVar37._24_8_ = dVar44 * auVar79._0_8_ + auVar34._8_8_ * auVar9._8_8_ + dVar21 * auVar15._16_8_
    ;
    auVar7 = vshufpd_avx(auVar62,auVar62,3);
    auVar29 = vperm2f128_avx(auVar71,auVar71,0x11);
    auVar63._0_8_ = dVar6 * auVar29._0_8_ + dVar86 * auVar7._0_8_ + dVar38 * auVar62._0_8_;
    auVar63._8_8_ = dVar19 * auVar29._0_8_ + dVar89 * auVar7._8_8_ + dVar42 * auVar62._0_8_;
    auVar72._16_8_ = dVar20 * auVar29._16_8_ + auVar34._0_8_ * auVar7._0_8_ + dVar43 * auVar62._0_8_
    ;
    auVar72._0_16_ = auVar63;
    auVar72._24_8_ = dVar21 * auVar29._16_8_ + auVar34._8_8_ * auVar7._8_8_ + dVar44 * auVar62._0_8_
    ;
    auVar7 = vshufpd_avx(auVar8,auVar8,3);
    auVar29 = vperm2f128_avx(auVar14,auVar14,0x11);
    auVar9._0_8_ = dVar38 * auVar8._0_8_ + dVar86 * auVar7._0_8_ + dVar6 * auVar29._0_8_;
    auVar9._8_8_ = dVar42 * auVar8._0_8_ + dVar89 * auVar7._8_8_ + dVar19 * auVar29._0_8_;
    auVar15._16_8_ = dVar43 * auVar8._0_8_ + auVar34._0_8_ * auVar7._0_8_ + dVar20 * auVar29._16_8_;
    auVar15._0_16_ = auVar9;
    auVar15._24_8_ = dVar44 * auVar8._0_8_ + auVar34._8_8_ * auVar7._8_8_ + dVar21 * auVar29._16_8_;
    *(undefined1 (*) [16])(param_1 + 0x48) = auVar35;
    dVar6 = (double)vmovlps_avx(auVar37._16_16_);
    param_1[0x4a] = dVar6;
    param_1[0x4b] = 0.0;
    *(undefined1 (*) [16])(param_1 + 0x4c) = auVar63;
    dVar6 = (double)vmovlpd_avx(auVar72._16_16_);
    param_1[0x4e] = dVar6;
    param_1[0x4f] = 0.0;
    *(undefined1 (*) [16])(param_1 + 0x50) = auVar9;
    dVar6 = (double)vmovlpd_avx(auVar15._16_16_);
    param_1[0x52] = dVar6;
    *(undefined1 (*) [16])(param_1 + 0x55) = auVar22;
    *(undefined1 (*) [16])(param_1 + 0x53) = auVar22;
    param_1[0x57] = 1.0;
  }
  dVar89 = _UNK_150b54438;
  dVar86 = _UNK_150b54430;
  dVar44 = _UNK_150b54428;
  dVar43 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar42 = _UNK_150b54418;
  dVar38 = _UNK_150b54410;
  dVar21 = _UNK_150b54408;
  dVar20 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar19 = _UNK_15076c6f8;
  dVar6 = ___xmm_bff00000000000003ff0000000000000;
  if (0.0 < param_1[0x1f]) {
    dVar45 = param_1[0x38];
    dVar59 = *param_3;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_1[0x3b];
    auVar7 = vmovhpd_avx(auVar1,param_1[0x3a]);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = param_1[0x39];
    auVar9 = vmovhps_avx(auVar10,param_1[0x38]);
    dVar58 = param_3[1];
    dVar85 = param_3[2];
    dVar45 = dVar45 + (auVar9._0_8_ * dVar85 *
                       ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
                      dVar58 * param_1[0x3a] *
                      ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
                      dVar45 * 0.0 + auVar7._0_8_ * dVar59 * ___xmm_bff00000000000003ff0000000000000
                      ) * ___ymm_3fe00000000000003fe00000000000003fe00000000000003fe0000000000000;
    dVar56 = param_1[0x39] +
             (auVar9._8_8_ * dVar85 * _UNK_150b54428 +
             dVar58 * param_1[0x3b] * _UNK_150b54408 +
             param_1[0x39] * 0.0 + auVar7._8_8_ * dVar59 * _UNK_15076c6f8) * _UNK_150aa8f28;
    dVar57 = param_1[0x3a] +
             (auVar7._0_8_ * dVar85 * _UNK_150b54430 +
             dVar58 * param_1[0x38] * _UNK_150b54410 +
             param_1[0x3a] * 0.0 + auVar9._0_8_ * dVar59 * ___xmm_bff00000000000003ff0000000000000)
             * _UNK_150aa8f30;
    dVar58 = param_1[0x3b] +
             (auVar7._8_8_ * dVar85 * _UNK_150b54438 +
             dVar58 * param_1[0x39] * _UNK_150b54418 +
             param_1[0x3b] * 0.0 + auVar9._8_8_ * dVar59 * _UNK_15076c6f8) * _UNK_150aa8f38;
    auVar46._0_8_ = dVar45 * dVar45 + dVar57 * dVar57;
    auVar46._8_8_ = dVar56 * dVar56 + dVar58 * dVar58;
    auVar7 = vshufpd_avx(auVar46,auVar46,1);
    dVar59 = auVar46._0_8_ + auVar7._0_8_;
    auVar64._8_8_ = 0;
    auVar64._0_8_ = __real_3e45798ee2308c3a;
    auVar47._8_8_ = 0;
    auVar47._0_8_ = dVar59;
    auVar7 = vcmpsd_avx(auVar64,auVar47,6);
    uVar76 = ~auVar7._0_8_ & __real_ffffffffffffffff;
    dVar59 = __real_3ff0000000000000 / SQRT(dVar59);
    auVar65._0_8_ =
         (double)(((ulonglong)(dVar45 * dVar59) ^
                  ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) & uVar76)
    ;
    auVar65._8_8_ = (double)(((ulonglong)(dVar56 * dVar59) ^ _UNK_150b54548) & uVar76);
    auVar73._16_8_ = (double)(((ulonglong)(dVar57 * dVar59) ^ _UNK_150b54550) & uVar76);
    auVar73._0_16_ = auVar65;
    auVar73._24_8_ = (double)(((ulonglong)(dVar58 * dVar59) ^ _UNK_150b54558) & uVar76);
    auVar51._0_8_ =
         (double)((ulonglong)auVar65._0_8_ ^
                 ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
    auVar51._8_8_ = (double)((ulonglong)auVar65._8_8_ ^ _UNK_150b54548);
    auVar51._16_8_ = (double)((ulonglong)auVar73._16_8_ ^ _UNK_150b54550);
    auVar51._24_8_ = (double)((ulonglong)auVar73._24_8_ ^ _UNK_150b54558);
    auVar7 = vshufps_avx(auVar65,auVar65,0x4e);
    auVar8 = auVar51._16_16_;
    auVar9 = vshufps_avx(auVar8,auVar8,0x4e);
    dVar59 = (double)vmovlpd_avx(auVar65);
    param_1[0x38] = dVar59;
    dVar59 = (double)vmovlpd_avx(auVar7);
    param_1[0x39] = dVar59;
    dVar59 = (double)vmovlpd_avx(auVar8);
    param_1[0x3a] = dVar59;
    dVar59 = (double)vmovlpd_avx(auVar9);
    param_1[0x3b] = dVar59;
    auVar80._8_8_ = 0;
    auVar80._0_8_ = param_1[0x10];
    auVar7 = vmovhps_avx(auVar80,param_1[0x13]);
    auVar84._0_8_ = SUB168(*(undefined1 (*) [16])(param_1 + 0x11),0) * auVar51._0_8_;
    auVar84._8_8_ = SUB168(*(undefined1 (*) [16])(param_1 + 0x11),8) * auVar51._8_8_;
    auVar84._16_8_ = auVar7._0_8_ * auVar51._16_8_;
    auVar84._24_8_ = auVar7._8_8_ * auVar51._24_8_;
    auVar15 = vperm2f128_avx(auVar51,auVar51,0x11);
    auVar104._16_16_ = auVar65;
    auVar104._0_16_ = auVar65;
    auVar29 = vshufpd_avx(auVar104,auVar15,9);
    auVar92._0_8_ = param_1[0x10] * auVar29._0_8_;
    auVar92._8_8_ = param_1[0x11] * auVar29._8_8_;
    auVar92._16_8_ = param_1[0x12] * auVar29._16_8_;
    auVar92._24_8_ = param_1[0x13] * auVar29._24_8_;
    auVar29 = vsubpd_avx(auVar84,auVar92);
    auVar90._0_8_ = auVar29._0_8_ + auVar29._0_8_;
    auVar90._8_8_ = auVar29._8_8_ + auVar29._8_8_;
    auVar93._16_8_ = auVar29._16_8_ + auVar29._16_8_;
    auVar93._0_16_ = auVar90;
    auVar93._24_8_ = auVar29._24_8_ + auVar29._24_8_;
    auVar29 = vshufpd_avx(auVar15,auVar15,0xf);
    auVar106._16_16_ = auVar90;
    auVar106._0_16_ = auVar90;
    auVar11 = vshufpd_avx(auVar106,ZEXT1632(auVar93._16_16_),1);
    dVar58 = auVar29._0_8_;
    dVar45 = auVar29._8_8_;
    dVar109 = auVar29._16_8_;
    dVar112 = auVar29._24_8_;
    auVar108._0_8_ = auVar90._0_8_ * auVar65._0_8_;
    auVar108._8_8_ = auVar90._8_8_ * auVar65._8_8_;
    auVar108._16_8_ = auVar93._16_8_ * auVar73._16_8_;
    auVar108._24_8_ = auVar93._24_8_ * auVar73._24_8_;
    auVar29 = vshufpd_avx(auVar104,ZEXT1632(auVar73._16_16_),1);
    auVar94._0_8_ = auVar90._0_8_ * auVar29._0_8_;
    auVar94._8_8_ = auVar90._8_8_ * auVar29._8_8_;
    auVar94._16_8_ = auVar93._16_8_ * auVar29._16_8_;
    auVar94._24_8_ = auVar93._24_8_ * auVar29._24_8_;
    auVar29 = vperm2f128_avx(auVar108,auVar108,1);
    auVar29 = vshufpd_avx(auVar29,auVar108,4);
    auVar29 = vsubpd_avx(auVar94,auVar29);
    auVar91._0_8_ = param_1[0x31] + param_1[0x10] + auVar11._0_8_ * dVar58 + auVar29._0_8_;
    auVar91._8_8_ = param_1[0x32] + param_1[0x11] + auVar11._8_8_ * dVar45 + auVar29._8_8_;
    auVar95._16_8_ = param_1[0x33] + param_1[0x12] + auVar11._16_8_ * dVar109 + auVar29._16_8_;
    auVar95._0_16_ = auVar91;
    auVar95._24_8_ = auVar11._24_8_ * dVar112 + 0.0 + auVar29._24_8_ + 0.0;
    *(undefined1 (*) [16])(param_1 + 0x23) = auVar91;
    dVar59 = (double)vmovlps_avx(auVar95._16_16_);
    param_1[0x25] = dVar59;
    auVar8 = vshufps_avx(auVar65,auVar65,0x44);
    auVar110._8_8_ = 0;
    auVar110._0_8_ = param_1[0xf];
    auVar7 = vmovhpd_avx(auVar110,param_1[0xe]);
    auVar114._8_8_ = 0;
    auVar114._0_8_ = param_1[0xd];
    auVar9 = vmovhps_avx(auVar114,param_1[0xc]);
    dVar59 = auVar8._0_8_;
    dVar56 = auVar8._8_8_;
    auVar8 = vshufps_avx(auVar65,auVar65,0xee);
    dVar85 = auVar8._0_8_;
    dVar57 = auVar8._8_8_;
    param_1[0x2a] =
         auVar9._0_8_ * auVar15._0_8_ * dVar43 +
         param_1[0xe] * dVar85 * dVar20 + param_1[0xc] * dVar58 + auVar7._0_8_ * dVar59 * dVar6;
    param_1[0x2b] =
         auVar9._8_8_ * auVar15._0_8_ * dVar44 +
         param_1[0xf] * dVar57 * dVar21 + param_1[0xd] * dVar45 + auVar7._8_8_ * dVar56 * dVar19;
    param_1[0x2c] =
         auVar7._0_8_ * auVar15._16_8_ * dVar86 +
         param_1[0xc] * dVar85 * dVar38 + param_1[0xe] * dVar109 + auVar9._0_8_ * dVar59 * dVar6;
    param_1[0x2d] =
         auVar7._8_8_ * auVar15._16_8_ * dVar89 +
         param_1[0xd] * dVar57 * dVar42 + param_1[0xf] * dVar112 + auVar9._8_8_ * dVar56 * dVar19;
    dVar6 = auVar51._0_8_ + auVar51._0_8_;
    dVar19 = auVar51._8_8_ + auVar51._8_8_;
    dVar20 = auVar51._16_8_ + auVar51._16_8_;
    dVar21 = auVar51._24_8_ + auVar51._24_8_;
    auVar52._0_8_ = dVar59 * dVar6;
    auVar52._8_8_ = dVar56 * dVar19;
    auVar52._16_8_ = dVar59 * dVar20;
    auVar52._24_8_ = dVar56 * dVar21;
    auVar66._0_8_ = dVar6 * dVar85;
    auVar66._8_8_ = dVar19 * dVar57;
    auVar74._16_8_ = dVar20 * dVar85;
    auVar74._0_16_ = auVar66;
    auVar74._24_8_ = dVar21 * dVar57;
    auVar16._0_8_ = dVar6 * dVar58;
    auVar16._8_8_ = dVar19 * dVar45;
    auVar16._16_8_ = dVar20 * dVar109;
    auVar16._24_8_ = dVar21 * dVar112;
    auVar29 = vperm2f128_avx(auVar74,auVar52,0x21);
    auVar29 = vshufpd_avx(auVar29,ZEXT1632(auVar52._16_16_),4);
    auVar25._0_8_ = auVar16._0_8_ + auVar29._0_8_;
    auVar25._8_8_ = auVar16._8_8_ + auVar29._8_8_;
    auVar32._16_8_ = auVar16._16_8_ + auVar29._16_8_;
    auVar32._0_16_ = auVar25;
    auVar32._24_8_ = auVar16._24_8_ + auVar29._24_8_;
    auVar15 = vsubpd_avx(auVar29,auVar16);
    auVar7 = vshufpd_avx(auVar66,auVar66,1);
    auVar48._8_8_ = auVar52._0_8_;
    auVar48._0_8_ = auVar52._0_8_;
    auVar53._16_16_ = auVar48;
    auVar53._0_16_ = auVar48;
    auVar29 = vblendpd_avx(auVar53,ZEXT1632(auVar7),1);
    auVar17._16_16_ = auVar7;
    auVar17._0_16_ = ZEXT816(0);
    auVar11 = vblendpd_avx(ZEXT1632(CONCAT88(auVar51._16_8_ * dVar20,auVar51._16_8_ * dVar20)),
                           auVar17,0xc);
    auVar18._0_8_ = auVar29._0_8_ + auVar11._0_8_;
    auVar18._8_8_ = auVar29._8_8_ + auVar11._8_8_;
    auVar18._16_8_ = auVar29._16_8_ + auVar11._16_8_;
    auVar18._24_8_ = auVar29._24_8_ + auVar11._24_8_;
    auVar41._8_8_ = __real_3ff0000000000000;
    auVar41._0_8_ = __real_3ff0000000000000;
    auVar41._16_8_ = __real_3ff0000000000000;
    auVar41._24_8_ = __real_3ff0000000000000;
    auVar11 = vsubpd_avx(auVar41,auVar18);
    dVar20 = auVar11._0_8_;
    dVar6 = param_1[0x1b];
    dVar19 = param_1[0x1d];
    auVar29 = vperm2f128_avx(auVar15,auVar15,0x11);
    auVar8 = ZEXT816(0) << 0x40;
    auVar7 = vmovhpd_avx(auVar8,param_1[0x1c]);
    dVar21 = auVar7._0_8_;
    dVar38 = auVar7._8_8_;
    auVar7 = vshufpd_avx(auVar25,auVar25,3);
    auVar67._0_8_ = auVar7._0_8_ * 0.0 + dVar21 * auVar29._0_8_ + dVar6 * dVar20;
    auVar67._8_8_ = auVar7._8_8_ * 0.0 + dVar38 * auVar29._0_8_ + dVar20 * 0.0;
    auVar75._16_8_ = auVar7._0_8_ * dVar19 + auVar29._16_8_ * 0.0 + dVar20 * 0.0;
    auVar75._0_16_ = auVar67;
    auVar75._24_8_ = auVar7._8_8_ * 0.0 + auVar29._16_8_ * 0.0 + dVar20 * 0.0;
    auVar29 = vperm2f128_avx(auVar32,auVar32,0x11);
    auVar23 = auVar11._0_16_;
    auVar7 = vshufpd_avx(auVar23,auVar23,3);
    dVar20 = auVar15._0_8_;
    auVar49._0_8_ = dVar20 * 0.0 + dVar21 * auVar7._0_8_ + dVar6 * auVar29._0_8_;
    auVar49._8_8_ = dVar20 * 0.0 + dVar38 * auVar7._8_8_ + auVar29._0_8_ * 0.0;
    auVar54._16_8_ = dVar20 * dVar19 + auVar7._0_8_ * 0.0 + auVar29._16_8_ * 0.0;
    auVar54._0_16_ = auVar49;
    auVar54._24_8_ = dVar20 * 0.0 + auVar7._8_8_ * 0.0 + auVar29._16_8_ * 0.0;
    auVar22 = auVar15._0_16_;
    auVar7 = vshufpd_avx(auVar22,auVar22,3);
    auVar29 = vperm2f128_avx(auVar11,auVar11,0x11);
    auVar2._0_8_ = dVar21 * auVar25._0_8_ + auVar7._0_8_ * dVar6 + auVar29._0_8_ * 0.0;
    auVar2._8_8_ = dVar38 * auVar25._0_8_ + auVar7._8_8_ * 0.0 + auVar29._0_8_ * 0.0;
    auVar4._16_8_ = auVar25._0_8_ * 0.0 + auVar7._0_8_ * 0.0 + auVar29._16_8_ * dVar19;
    auVar4._0_16_ = auVar2;
    auVar4._24_8_ = auVar25._0_8_ * 0.0 + auVar7._8_8_ * 0.0 + auVar29._16_8_ * 0.0;
    auVar9 = vunpcklpd_avx(auVar23,auVar32._16_16_);
    auVar7 = vshufpd_avx(auVar22,auVar22,1);
    auVar96._16_16_ = auVar7;
    auVar96._0_16_ = auVar2;
    auVar29 = vblendpd_avx(ZEXT1632(auVar9),auVar96,0xc);
    dVar6 = auVar29._0_8_;
    dVar19 = auVar29._8_8_;
    dVar20 = auVar29._16_8_;
    dVar21 = auVar29._24_8_;
    auVar9 = vshufpd_avx(auVar67,auVar67,3);
    auVar7 = vblendpd_avx(auVar23,auVar15._16_16_,1);
    dVar86 = auVar7._0_8_;
    dVar89 = auVar7._8_8_;
    auVar15 = vperm2f128_avx(auVar75,auVar75,0x11);
    auVar7 = vshufpd_avx(auVar25,auVar22,1);
    auVar29 = vblendpd_avx(auVar11,ZEXT1632(auVar7),3);
    dVar38 = auVar29._0_8_;
    dVar42 = auVar29._8_8_;
    dVar43 = auVar29._16_8_;
    dVar44 = auVar29._24_8_;
    auVar26._0_8_ = auVar67._0_8_ * dVar6 + dVar86 * auVar9._0_8_ + dVar38 * auVar15._0_8_;
    auVar26._8_8_ = auVar67._0_8_ * dVar19 + dVar89 * auVar9._8_8_ + dVar42 * auVar15._0_8_;
    auVar33._16_8_ = auVar67._0_8_ * dVar20 + auVar25._0_8_ * auVar9._0_8_ + dVar43 * auVar15._16_8_
    ;
    auVar33._0_16_ = auVar26;
    auVar33._24_8_ = auVar67._0_8_ * dVar21 + auVar25._8_8_ * auVar9._8_8_ + dVar44 * auVar15._16_8_
    ;
    auVar7 = vshufpd_avx(auVar49,auVar49,3);
    auVar29 = vperm2f128_avx(auVar54,auVar54,0x11);
    auVar50._0_8_ = dVar38 * auVar29._0_8_ + dVar86 * auVar7._0_8_ + dVar6 * auVar49._0_8_;
    auVar50._8_8_ = dVar42 * auVar29._0_8_ + dVar89 * auVar7._8_8_ + dVar19 * auVar49._0_8_;
    auVar55._16_8_ = dVar43 * auVar29._16_8_ + auVar25._0_8_ * auVar7._0_8_ + dVar20 * auVar49._0_8_
    ;
    auVar55._0_16_ = auVar50;
    auVar55._24_8_ = dVar44 * auVar29._16_8_ + auVar25._8_8_ * auVar7._8_8_ + dVar21 * auVar49._0_8_
    ;
    auVar7 = vshufpd_avx(auVar2,auVar2,3);
    auVar29 = vperm2f128_avx(auVar4,auVar4,0x11);
    auVar3._0_8_ = dVar38 * auVar29._0_8_ + dVar86 * auVar7._0_8_ + auVar2._0_8_ * dVar6;
    auVar3._8_8_ = dVar42 * auVar29._0_8_ + dVar89 * auVar7._8_8_ + auVar2._0_8_ * dVar19;
    auVar5._16_8_ = dVar43 * auVar29._16_8_ + auVar25._0_8_ * auVar7._0_8_ + auVar2._0_8_ * dVar20;
    auVar5._0_16_ = auVar3;
    auVar5._24_8_ = dVar44 * auVar29._16_8_ + auVar25._8_8_ * auVar7._8_8_ + auVar2._0_8_ * dVar21;
    *(undefined1 (*) [16])(param_1 + 0x58) = auVar26;
    dVar6 = (double)vmovlpd_avx(auVar33._16_16_);
    param_1[0x5a] = dVar6;
    param_1[0x5b] = 0.0;
    *(undefined1 (*) [16])(param_1 + 0x5c) = auVar50;
    dVar6 = (double)vmovlpd_avx(auVar55._16_16_);
    param_1[0x5e] = dVar6;
    param_1[0x5f] = 0.0;
    *(undefined1 (*) [16])(param_1 + 0x60) = auVar3;
    dVar6 = (double)vmovlps_avx(auVar5._16_16_);
    param_1[0x62] = dVar6;
    *(undefined1 (*) [16])(param_1 + 0x65) = auVar8;
    *(undefined1 (*) [16])(param_1 + 99) = auVar8;
    param_1[0x67] = 1.0;
  }
  auVar39._0_8_ = param_1[0x38] * param_1[0x34] + param_1[0x3a] * param_1[0x36];
  auVar39._8_8_ = param_1[0x39] * param_1[0x35] + param_1[0x3b] * param_1[0x37];
  auVar7 = vshufpd_avx(auVar39,auVar39,1);
  auVar40._8_8_ = 0;
  auVar40._0_8_ = auVar39._0_8_ + auVar7._0_8_;
  auVar7 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar40,2);
  auVar68._8_8_ = 0;
  auVar68._0_8_ = __real_3ff0000000000000;
  auVar81._8_8_ = 0;
  auVar81._0_8_ = __real_bff0000000000000;
  auVar7 = vblendvpd_avx(auVar81,auVar68,auVar7);
  dVar6 = auVar7._0_8_;
  param_1[0x38] = param_1[0x38] * dVar6;
  param_1[0x39] = param_1[0x39] * dVar6;
  param_1[0x3a] = param_1[0x3a] * dVar6;
  param_1[0x3b] = param_1[0x3b] * dVar6;
  auVar27._0_8_ = param_1[0x2a] * param_1[0x26] + param_1[0x2c] * param_1[0x28];
  auVar27._8_8_ = param_1[0x2b] * param_1[0x27] + param_1[0x2d] * param_1[0x29];
  auVar7 = vshufpd_avx(auVar27,auVar27,1);
  auVar28._8_8_ = 0;
  auVar28._0_8_ = auVar27._0_8_ + auVar7._0_8_;
  auVar7 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar28,2);
  auVar7 = vblendvpd_avx(auVar81,auVar68,auVar7);
  dVar6 = auVar7._0_8_;
  param_1[0x2a] = param_1[0x2a] * dVar6;
  param_1[0x2b] = param_1[0x2b] * dVar6;
  param_1[0x2c] = param_1[0x2c] * dVar6;
  param_1[0x2d] = param_1[0x2d] * dVar6;
  return;
}

// ApplyPositionConstraintSoft_avx @ 1409fd3d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPositionConstraintSoft_avx
               (double *param_1,double param_2,double param_3,double param_4,byte param_5,
               double *param_6,double param_7,double param_8,double *param_9)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [32];
  double dVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar30;
  double dVar31;
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  double dVar32;
  undefined1 auVar22 [32];
  undefined1 auVar24 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [32];
  undefined1 auVar43 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar56 [32];
  undefined1 auVar57 [32];
  double dVar58;
  undefined1 auVar59 [16];
  double dVar68;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  double dVar69;
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  double dVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  double dVar81;
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  double dVar80;
  undefined1 auVar77 [32];
  undefined1 auVar78 [32];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar89 [32];
  double dVar90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [32];
  undefined1 auVar110 [32];
  double dVar115;
  undefined1 auVar116 [16];
  double dVar119;
  double dVar120;
  undefined1 auVar117 [32];
  undefined1 auVar118 [32];
  double dVar121;
  double dVar122;
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  undefined1 auVar129 [32];
  double dVar130;
  ulonglong uVar131;
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [32];
  undefined1 auVar136 [32];
  undefined1 auVar139 [32];
  undefined1 auVar140 [16];
  undefined1 auVar141 [32];
  double dVar143;
  undefined1 auVar142 [32];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  double dVar147;
  undefined1 auVar146 [32];
  double dVar148;
  double dVar151;
  undefined1 auVar149 [16];
  undefined1 auVar150 [32];
  undefined1 auVar152 [16];
  undefined1 auVar153 [32];
  undefined1 auVar7 [32];
  undefined1 auVar16 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar23 [32];
  undefined1 auVar25 [32];
  undefined1 auVar29 [32];
  undefined1 auVar42 [32];
  undefined1 auVar44 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar55 [32];
  undefined1 auVar66 [32];
  undefined1 auVar67 [32];
  undefined1 auVar79 [32];
  undefined1 auVar88 [32];
  undefined1 auVar99 [32];
  undefined1 auVar100 [32];
  undefined1 auVar103 [32];
  undefined1 auVar111 [32];
  undefined1 auVar112 [32];
  undefined1 auVar113 [32];
  undefined1 auVar114 [32];
  undefined1 auVar128 [32];
  undefined1 auVar137 [32];
  undefined1 auVar138 [32];
  
  uVar131 = __real_8000000000000000;
  auVar59._8_8_ = 0;
  auVar59._0_8_ = param_1[0x22];
  auVar6._24_8_ = 0;
  auVar6._0_24_ = *(undefined1 (*) [24])(param_1 + 0x20);
  auVar52._8_8_ = 0;
  auVar52._0_8_ = param_1[0x30];
  auVar75._24_8_ = 0;
  auVar75._0_24_ = *(undefined1 (*) [24])(param_1 + 0x2e);
  auVar63 = vsubpd_avx(auVar6,auVar75);
  dVar30 = *param_6;
  dVar31 = param_6[1];
  auVar109._0_8_ = param_6[1] * auVar63._0_8_;
  auVar109._8_8_ = param_6[2] * auVar63._8_8_;
  auVar109._16_8_ = *param_6 * auVar63._16_8_;
  auVar109._24_8_ = auVar63._24_8_ * 0.0;
  auVar76._0_16_ = auVar63._0_16_;
  auVar76._16_16_ = auVar76._0_16_;
  auVar59 = vsubpd_avx(auVar59,auVar52);
  auVar63 = vshufpd_avx(auVar76,ZEXT1632(auVar59),1);
  dVar8 = param_6[2];
  auVar62._0_8_ = auVar63._0_8_ * dVar30;
  auVar62._8_8_ = auVar63._8_8_ * dVar31;
  auVar62._16_8_ = auVar63._16_8_ * dVar8;
  auVar62._24_8_ = auVar63._24_8_ * 0.0;
  auVar62 = vsubpd_avx(auVar109,auVar62);
  auVar71._8_8_ = 0;
  auVar71._0_8_ = param_1[0x25];
  auVar110._24_8_ = 0;
  auVar110._0_24_ = *(undefined1 (*) [24])(param_1 + 0x23);
  auVar74._8_8_ = 0;
  auVar74._0_8_ = param_1[0x33];
  auVar63._24_8_ = 0;
  auVar63._0_24_ = *(undefined1 (*) [24])(param_1 + 0x31);
  auVar63 = vsubpd_avx(auVar110,auVar63);
  auVar117._0_8_ = param_6[1] * auVar63._0_8_;
  auVar117._8_8_ = param_6[2] * auVar63._8_8_;
  auVar117._16_8_ = *param_6 * auVar63._16_8_;
  auVar117._24_8_ = auVar63._24_8_ * 0.0;
  auVar64._0_16_ = auVar63._0_16_;
  auVar64._16_16_ = auVar64._0_16_;
  auVar59 = vsubpd_avx(auVar71,auVar74);
  auVar63 = vshufpd_avx(auVar64,ZEXT1632(auVar59),1);
  auVar65._0_8_ = dVar30 * auVar63._0_8_;
  auVar65._8_8_ = dVar31 * auVar63._8_8_;
  auVar65._16_8_ = dVar8 * auVar63._16_8_;
  auVar65._24_8_ = auVar63._24_8_ * 0.0;
  auVar64 = vsubpd_avx(auVar117,auVar65);
  auVar52 = auVar62._0_16_;
  auVar59 = vshufpd_avx(auVar52,auVar52,3);
  auVar65 = vperm2f128_avx(auVar62,auVar62,0x11);
  dVar90 = auVar62._0_8_;
  dVar70 = auVar59._0_8_ * param_1[0x48] + auVar65._0_8_ * param_1[0x4c] + dVar90 * param_1[0x50];
  dVar80 = auVar59._8_8_ * param_1[0x49] + auVar65._0_8_ * param_1[0x4d] + dVar90 * param_1[0x51];
  dVar81 = auVar59._0_8_ * param_1[0x4a] + auVar65._16_8_ * param_1[0x4e] + dVar90 * param_1[0x52];
  auVar74 = auVar64._0_16_;
  auVar71 = vshufpd_avx(auVar74,auVar74,3);
  auVar75 = vperm2f128_avx(auVar64,auVar64,0x11);
  dVar32 = auVar64._0_8_;
  dVar58 = dVar32 * param_1[0x60] + auVar75._0_8_ * param_1[0x5c] + auVar71._0_8_ * param_1[0x58];
  dVar68 = dVar32 * param_1[0x61] + auVar75._0_8_ * param_1[0x5d] + auVar71._8_8_ * param_1[0x59];
  dVar69 = dVar32 * param_1[0x62] + auVar75._16_8_ * param_1[0x5e] + auVar71._0_8_ * param_1[0x5a];
  auVar126._16_16_ = auVar52;
  auVar126._0_16_ = auVar52;
  auVar63 = vshufpd_avx(auVar126,ZEXT1632(auVar62._16_16_),1);
  auVar86._0_8_ = auVar63._0_8_ * dVar70;
  auVar86._8_8_ = auVar63._8_8_ * dVar80;
  auVar52 = vshufpd_avx(auVar86,auVar86,1);
  auVar98._16_16_ = auVar74;
  auVar98._0_16_ = auVar74;
  auVar62 = vshufpd_avx(auVar98,ZEXT1632(auVar64._16_16_),1);
  auVar91._0_8_ = auVar62._0_8_ * dVar58;
  auVar91._8_8_ = auVar62._8_8_ * dVar68;
  auVar74 = vshufpd_avx(auVar91,auVar91,1);
  dVar122 = param_1[0x1e];
  dVar115 = param_1[0x1f];
  dVar130 = 0.0;
  if (__real_3f1a36e2eb1c432d < param_4) {
    auVar135._24_8_ = 0;
    auVar135._0_24_ = *(undefined1 (*) [24])(param_1 + 0x76);
    auVar64 = vsubpd_avx(auVar6,auVar135);
    auVar136._24_8_ = 0;
    auVar136._0_24_ = *(undefined1 (*) [24])(param_1 + 0x79);
    auVar6 = vsubpd_avx(auVar110,auVar136);
    auVar64 = vsubpd_avx(auVar64,auVar6);
    auVar3._0_8_ = dVar30 * auVar64._0_8_;
    auVar3._8_8_ = dVar31 * auVar64._8_8_;
    auVar4 = vshufpd_avx(auVar3,auVar3,1);
    dVar130 = param_2 * param_8 + dVar8 * auVar64._16_8_ + auVar3._0_8_ + auVar4._0_8_;
  }
  dVar8 = __real_3ff0000000000000;
  if ((param_5 & 1) != 0) {
    dVar8 = __real_3ff0000000000000 / (dVar122 + dVar115);
  }
  dVar30 = dVar8 * param_3 * param_2 * param_2;
  param_2 = dVar8 * param_4 * param_2;
  dVar130 = ((dVar30 * param_7 - dVar130 * param_2) - *param_9) *
            (__real_3ff0000000000000 /
            ((auVar63._16_8_ * dVar81 + auVar52._0_8_ + auVar86._0_8_ + dVar122 + dVar115 +
             auVar62._16_8_ * dVar69 + auVar74._0_8_ + auVar91._0_8_) * (param_2 + dVar30) +
            __real_3ff0000000000000)) * param_1[0x99];
  dVar8 = dVar122 * dVar130;
  dVar31 = param_6[1];
  dVar147 = param_6[2];
  dVar50 = *param_6;
  dVar30 = dVar130 * (double)((ulonglong)dVar115 ^ __real_8000000000000000);
  auVar82._0_8_ = param_1[0x2e] + dVar50 * dVar8;
  auVar82._8_8_ = param_1[0x2f] + dVar31 * dVar8;
  auVar88._16_8_ = param_1[0x30] + dVar147 * dVar8;
  auVar88._0_16_ = auVar82;
  auVar88._24_8_ = dVar8 * 0.0 + 0.0;
  *(undefined1 (*) [16])(param_1 + 0x2e) = auVar82;
  dVar8 = (double)vmovlps_avx(auVar88._16_16_);
  param_1[0x30] = dVar8;
  auVar51._0_8_ = dVar50 * dVar30 + param_1[0x31];
  auVar51._8_8_ = dVar31 * dVar30 + param_1[0x32];
  auVar55._16_8_ = dVar147 * dVar30 + param_1[0x33];
  auVar55._0_16_ = auVar51;
  auVar55._24_8_ = dVar30 * 0.0 + 0.0;
  dVar8 = (double)vmovlpd_avx(auVar51);
  param_1[0x31] = dVar8;
  auVar52 = vshufpd_avx(auVar51,auVar55._16_16_,1);
  *(undefined1 (*) [16])(param_1 + 0x32) = auVar52;
  dVar2 = _UNK_150b54438;
  dVar1 = _UNK_150b54430;
  dVar121 = _UNK_150b54428;
  dVar120 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar119 = _UNK_150b54418;
  dVar50 = _UNK_150b54410;
  dVar147 = _UNK_150b54408;
  dVar31 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar30 = _UNK_15076c6f8;
  dVar8 = ___xmm_bff00000000000003ff0000000000000;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar130;
  if (0.0 < dVar122) {
    auVar104._0_8_ = dVar130 * dVar70;
    auVar104._8_8_ = dVar130 * dVar80;
    auVar111._16_8_ = dVar130 * dVar81;
    auVar111._0_16_ = auVar104;
    auVar111._24_8_ = dVar130 * (auVar59._8_8_ * 0.0 + auVar65._16_8_ * 0.0 + dVar90 * 0.0);
    dVar115 = param_1[0x34];
    auVar92._8_8_ = 0;
    auVar92._0_8_ = param_1[0x37];
    auVar59 = vmovhps_avx(auVar92,param_1[0x36]);
    auVar144._8_8_ = 0;
    auVar144._0_8_ = param_1[0x35];
    auVar52 = vmovhps_avx(auVar144,param_1[0x34]);
    auVar74 = vshufpd_avx(auVar104,auVar104,3);
    auVar63 = vperm2f128_avx(auVar111,auVar111,0x11);
    dVar115 = dVar115 + (auVar63._0_8_ * auVar52._0_8_ *
                         ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
                        auVar74._0_8_ * param_1[0x36] *
                        ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
                        dVar115 * 0.0 +
                        auVar104._0_8_ * auVar59._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
                        ___ymm_3fe00000000000003fe00000000000003fe00000000000003fe0000000000000;
    dVar70 = param_1[0x35] +
             (auVar63._0_8_ * auVar52._8_8_ * _UNK_150b54428 +
             auVar74._8_8_ * param_1[0x37] * _UNK_150b54408 +
             param_1[0x35] * 0.0 + auVar104._0_8_ * auVar59._8_8_ * _UNK_15076c6f8) * _UNK_150aa8f28
    ;
    dVar80 = param_1[0x36] +
             (auVar63._16_8_ * auVar59._0_8_ * _UNK_150b54430 +
             auVar74._0_8_ * param_1[0x34] * _UNK_150b54410 +
             param_1[0x36] * 0.0 +
             auVar104._0_8_ * auVar52._0_8_ * ___xmm_bff00000000000003ff0000000000000) *
             _UNK_150aa8f30;
    dVar81 = param_1[0x37] +
             (auVar63._16_8_ * auVar59._8_8_ * _UNK_150b54438 +
             auVar74._8_8_ * param_1[0x35] * _UNK_150b54418 +
             param_1[0x37] * 0.0 + auVar104._0_8_ * auVar52._8_8_ * _UNK_15076c6f8) * _UNK_150aa8f38
    ;
    auVar123._0_8_ = dVar115 * dVar115 + dVar80 * dVar80;
    auVar123._8_8_ = dVar70 * dVar70 + dVar81 * dVar81;
    auVar59 = vshufpd_avx(auVar123,auVar123,1);
    dVar122 = auVar123._0_8_ + auVar59._0_8_;
    auVar132._8_8_ = 0;
    auVar132._0_8_ = __real_3e45798ee2308c3a;
    auVar124._8_8_ = 0;
    auVar124._0_8_ = dVar122;
    auVar59 = vcmpsd_avx(auVar132,auVar124,6);
    uVar131 = ~auVar59._0_8_ & __real_ffffffffffffffff;
    dVar122 = __real_3ff0000000000000 / SQRT(dVar122);
    auVar133._0_8_ =
         (double)(((ulonglong)(dVar115 * dVar122) ^
                  ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) & uVar131
                 );
    auVar133._8_8_ = (double)(((ulonglong)(dVar70 * dVar122) ^ _UNK_150b54548) & uVar131);
    auVar137._16_8_ = (double)(((ulonglong)(dVar80 * dVar122) ^ _UNK_150b54550) & uVar131);
    auVar137._0_16_ = auVar133;
    auVar137._24_8_ = (double)(((ulonglong)(dVar81 * dVar122) ^ _UNK_150b54558) & uVar131);
    auVar127._0_8_ =
         (double)((ulonglong)auVar133._0_8_ ^
                 ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
    auVar127._8_8_ = (double)((ulonglong)auVar133._8_8_ ^ _UNK_150b54548);
    auVar127._16_8_ = (double)((ulonglong)auVar137._16_8_ ^ _UNK_150b54550);
    auVar127._24_8_ = (double)((ulonglong)auVar137._24_8_ ^ _UNK_150b54558);
    *(undefined1 (*) [16])(param_1 + 0x34) = auVar133;
    *(undefined1 (*) [16])(param_1 + 0x36) = auVar127._16_16_;
    auVar140._8_8_ = 0;
    auVar140._0_8_ = param_1[4];
    auVar59 = vmovhps_avx(auVar140,param_1[7]);
    auVar141._0_8_ = SUB168(*(undefined1 (*) [16])(param_1 + 5),0) * auVar127._0_8_;
    auVar141._8_8_ = SUB168(*(undefined1 (*) [16])(param_1 + 5),8) * auVar127._8_8_;
    auVar141._16_8_ = auVar59._0_8_ * auVar127._16_8_;
    auVar141._24_8_ = auVar59._8_8_ * auVar127._24_8_;
    auVar150._16_16_ = auVar133;
    auVar150._0_16_ = auVar133;
    auVar64 = vperm2f128_avx(auVar127,auVar127,0x11);
    auVar63 = vshufpd_avx(auVar150,auVar64,9);
    auVar41._0_8_ = auVar63._0_8_ * param_1[4];
    auVar41._8_8_ = auVar63._8_8_ * param_1[5];
    auVar41._16_8_ = auVar63._16_8_ * param_1[6];
    auVar41._24_8_ = auVar63._24_8_ * param_1[7];
    auVar63 = vsubpd_avx(auVar141,auVar41);
    auVar33._0_8_ = auVar63._0_8_ + auVar63._0_8_;
    auVar33._8_8_ = auVar63._8_8_ + auVar63._8_8_;
    auVar42._16_8_ = auVar63._16_8_ + auVar63._16_8_;
    auVar42._0_16_ = auVar33;
    auVar42._24_8_ = auVar63._24_8_ + auVar63._24_8_;
    auVar63 = vshufpd_avx(auVar64,auVar64,0xf);
    auVar153._16_16_ = auVar33;
    auVar153._0_16_ = auVar33;
    auVar62 = vshufpd_avx(auVar153,ZEXT1632(auVar42._16_16_),1);
    dVar80 = auVar63._0_8_;
    dVar81 = auVar63._8_8_;
    dVar90 = auVar63._16_8_;
    dVar143 = auVar63._24_8_;
    auVar77._0_8_ = auVar133._0_8_ * auVar33._0_8_;
    auVar77._8_8_ = auVar133._8_8_ * auVar33._8_8_;
    auVar77._16_8_ = auVar137._16_8_ * auVar42._16_8_;
    auVar77._24_8_ = auVar137._24_8_ * auVar42._24_8_;
    auVar63 = vshufpd_avx(auVar150,ZEXT1632(auVar137._16_16_),1);
    auVar43._0_8_ = auVar63._0_8_ * auVar33._0_8_;
    auVar43._8_8_ = auVar63._8_8_ * auVar33._8_8_;
    auVar43._16_8_ = auVar63._16_8_ * auVar42._16_8_;
    auVar43._24_8_ = auVar63._24_8_ * auVar42._24_8_;
    auVar63 = vperm2f128_avx(auVar77,auVar77,1);
    auVar63 = vshufpd_avx(auVar63,auVar77,4);
    auVar63 = vsubpd_avx(auVar43,auVar63);
    auVar9._0_8_ = param_1[0x2e] + param_1[4] + dVar80 * auVar62._0_8_ + auVar63._0_8_;
    auVar9._8_8_ = param_1[0x2f] + param_1[5] + dVar81 * auVar62._8_8_ + auVar63._8_8_;
    auVar16._16_8_ = param_1[0x30] + param_1[6] + dVar90 * auVar62._16_8_ + auVar63._16_8_;
    auVar16._0_16_ = auVar9;
    auVar16._24_8_ = dVar143 * auVar62._24_8_ + 0.0 + auVar63._24_8_ + 0.0;
    *(undefined1 (*) [16])(param_1 + 0x20) = auVar9;
    dVar122 = (double)vmovlps_avx(auVar16._16_16_);
    param_1[0x22] = dVar122;
    auVar74 = vshufps_avx(auVar133,auVar133,0x44);
    auVar72._8_8_ = 0;
    auVar72._0_8_ = param_1[1];
    auVar52 = vmovhps_avx(auVar72,*param_1);
    auVar152._8_8_ = 0;
    auVar152._0_8_ = param_1[3];
    auVar59 = vmovhpd_avx(auVar152,param_1[2]);
    dVar148 = auVar74._0_8_;
    dVar151 = auVar74._8_8_;
    auVar74 = vshufps_avx(auVar133,auVar133,0xee);
    dVar122 = auVar74._0_8_;
    dVar115 = auVar74._8_8_;
    param_1[0x26] =
         dVar120 * auVar52._0_8_ * auVar64._0_8_ +
         param_1[2] * dVar122 * dVar31 + dVar80 * *param_1 + dVar148 * auVar59._0_8_ * dVar8;
    param_1[0x27] =
         dVar121 * auVar52._8_8_ * auVar64._0_8_ +
         param_1[3] * dVar115 * dVar147 + dVar81 * param_1[1] + dVar151 * auVar59._8_8_ * dVar30;
    param_1[0x28] =
         dVar1 * auVar59._0_8_ * auVar64._16_8_ +
         *param_1 * dVar122 * dVar50 + dVar90 * param_1[2] + dVar148 * auVar52._0_8_ * dVar8;
    param_1[0x29] =
         dVar2 * auVar59._8_8_ * auVar64._16_8_ +
         param_1[1] * dVar115 * dVar119 + dVar143 * param_1[3] + dVar151 * auVar52._8_8_ * dVar30;
    dVar8 = auVar127._0_8_ + auVar127._0_8_;
    dVar30 = auVar127._8_8_ + auVar127._8_8_;
    dVar31 = auVar127._16_8_ + auVar127._16_8_;
    dVar70 = auVar127._24_8_ + auVar127._24_8_;
    auVar78._0_8_ = dVar148 * dVar8;
    auVar78._8_8_ = dVar151 * dVar30;
    auVar78._16_8_ = dVar148 * dVar31;
    auVar78._24_8_ = dVar151 * dVar70;
    auVar34._0_8_ = dVar8 * dVar122;
    auVar34._8_8_ = dVar30 * dVar115;
    auVar44._16_8_ = dVar31 * dVar122;
    auVar44._0_16_ = auVar34;
    auVar44._24_8_ = dVar70 * dVar115;
    auVar17._0_8_ = dVar80 * dVar8;
    auVar17._8_8_ = dVar81 * dVar30;
    auVar17._16_8_ = dVar90 * dVar31;
    auVar17._24_8_ = dVar143 * dVar70;
    auVar63 = vperm2f128_avx(auVar44,auVar78,0x21);
    auVar63 = vshufpd_avx(auVar63,ZEXT1632(auVar78._16_16_),4);
    auVar93._0_8_ = auVar17._0_8_ + auVar63._0_8_;
    auVar93._8_8_ = auVar17._8_8_ + auVar63._8_8_;
    auVar99._16_8_ = auVar17._16_8_ + auVar63._16_8_;
    auVar99._0_16_ = auVar93;
    auVar99._24_8_ = auVar17._24_8_ + auVar63._24_8_;
    auVar64 = vsubpd_avx(auVar63,auVar17);
    auVar59 = vshufpd_avx(auVar34,auVar34,1);
    auVar35._8_8_ = auVar78._0_8_;
    auVar35._0_8_ = auVar78._0_8_;
    auVar45._16_16_ = auVar35;
    auVar45._0_16_ = auVar35;
    auVar63 = vblendpd_avx(auVar45,ZEXT1632(auVar59),1);
    auVar18._16_16_ = auVar59;
    auVar18._0_16_ = auVar4;
    auVar62 = vblendpd_avx(ZEXT1632(CONCAT88(auVar137._16_8_ * dVar31,auVar137._16_8_ * dVar31)),
                           auVar18,0xc);
    auVar19._0_8_ = auVar63._0_8_ + auVar62._0_8_;
    auVar19._8_8_ = auVar63._8_8_ + auVar62._8_8_;
    auVar19._16_8_ = auVar63._16_8_ + auVar62._16_8_;
    auVar19._24_8_ = auVar63._24_8_ + auVar62._24_8_;
    auVar46._8_8_ = __real_3ff0000000000000;
    auVar46._0_8_ = __real_3ff0000000000000;
    auVar46._16_8_ = __real_3ff0000000000000;
    auVar46._24_8_ = __real_3ff0000000000000;
    auVar62 = vsubpd_avx(auVar46,auVar19);
    dVar115 = auVar62._0_8_;
    dVar8 = param_1[0x18];
    dVar122 = param_1[0x1a];
    auVar63 = vperm2f128_avx(auVar64,auVar64,0x11);
    auVar74 = ZEXT816(0) << 0x40;
    auVar59 = vmovhpd_avx(auVar74,param_1[0x19]);
    dVar30 = auVar59._0_8_;
    dVar31 = auVar59._8_8_;
    auVar59 = vshufpd_avx(auVar93,auVar93,3);
    auVar134._0_8_ = auVar59._0_8_ * 0.0 + dVar30 * auVar63._0_8_ + dVar8 * dVar115;
    auVar134._8_8_ = auVar59._8_8_ * 0.0 + dVar31 * auVar63._0_8_ + dVar115 * 0.0;
    auVar138._16_8_ = dVar122 * auVar59._0_8_ + auVar63._16_8_ * 0.0 + dVar115 * 0.0;
    auVar138._0_16_ = auVar134;
    auVar138._24_8_ = auVar59._8_8_ * 0.0 + auVar63._16_8_ * 0.0 + dVar115 * 0.0;
    auVar63 = vperm2f128_avx(auVar99,auVar99,0x11);
    auVar91 = auVar62._0_16_;
    auVar59 = vshufpd_avx(auVar91,auVar91,3);
    dVar115 = auVar64._0_8_;
    auVar125._0_8_ = dVar115 * 0.0 + dVar8 * auVar63._0_8_ + dVar30 * auVar59._0_8_;
    auVar125._8_8_ = dVar115 * 0.0 + auVar63._0_8_ * 0.0 + dVar31 * auVar59._8_8_;
    auVar128._16_8_ = dVar122 * dVar115 + auVar63._16_8_ * 0.0 + auVar59._0_8_ * 0.0;
    auVar128._0_16_ = auVar125;
    auVar128._24_8_ = dVar115 * 0.0 + auVar63._16_8_ * 0.0 + auVar59._8_8_ * 0.0;
    auVar86 = auVar64._0_16_;
    auVar59 = vshufpd_avx(auVar86,auVar86,3);
    auVar63 = vperm2f128_avx(auVar62,auVar62,0x11);
    auVar73._0_8_ = dVar8 * auVar59._0_8_ + dVar30 * auVar93._0_8_ + auVar63._0_8_ * 0.0;
    auVar73._8_8_ = auVar59._8_8_ * 0.0 + dVar31 * auVar93._0_8_ + auVar63._0_8_ * 0.0;
    auVar79._16_8_ = auVar59._0_8_ * 0.0 + auVar93._0_8_ * 0.0 + dVar122 * auVar63._16_8_;
    auVar79._0_16_ = auVar73;
    auVar79._24_8_ = auVar59._8_8_ * 0.0 + auVar93._0_8_ * 0.0 + auVar63._16_8_ * 0.0;
    auVar52 = vunpcklpd_avx(auVar91,auVar99._16_16_);
    auVar59 = vshufpd_avx(auVar86,auVar86,1);
    auVar56._16_16_ = auVar59;
    auVar56._0_16_ = auVar4;
    auVar63 = vblendpd_avx(ZEXT1632(auVar52),auVar56,0xc);
    dVar31 = auVar63._0_8_;
    dVar70 = auVar63._8_8_;
    dVar80 = auVar63._16_8_;
    dVar81 = auVar63._24_8_;
    auVar52 = vshufpd_avx(auVar134,auVar134,3);
    auVar59 = vblendpd_avx(auVar91,auVar64._16_16_,1);
    dVar90 = auVar59._0_8_;
    dVar147 = auVar59._8_8_;
    auVar59 = vshufpd_avx(auVar93,auVar86,1);
    auVar64 = vperm2f128_avx(auVar138,auVar138,0x11);
    auVar63 = vblendpd_avx(auVar62,ZEXT1632(auVar59),3);
    dVar8 = auVar63._0_8_;
    dVar122 = auVar63._8_8_;
    dVar115 = auVar63._16_8_;
    dVar30 = auVar63._24_8_;
    auVar94._0_8_ = dVar8 * auVar64._0_8_ + dVar31 * auVar134._0_8_ + dVar90 * auVar52._0_8_;
    auVar94._8_8_ = dVar122 * auVar64._0_8_ + dVar70 * auVar134._0_8_ + dVar147 * auVar52._8_8_;
    auVar100._16_8_ =
         dVar115 * auVar64._16_8_ + dVar80 * auVar134._0_8_ + auVar93._0_8_ * auVar52._0_8_;
    auVar100._0_16_ = auVar94;
    auVar100._24_8_ =
         dVar30 * auVar64._16_8_ + dVar81 * auVar134._0_8_ + auVar93._8_8_ * auVar52._8_8_;
    auVar59 = vshufpd_avx(auVar125,auVar125,3);
    auVar63 = vperm2f128_avx(auVar128,auVar128,0x11);
    auVar10._0_8_ = dVar8 * auVar63._0_8_ + dVar31 * auVar125._0_8_ + dVar90 * auVar59._0_8_;
    auVar10._8_8_ = dVar122 * auVar63._0_8_ + dVar70 * auVar125._0_8_ + dVar147 * auVar59._8_8_;
    auVar20._16_8_ =
         dVar115 * auVar63._16_8_ + dVar80 * auVar125._0_8_ + auVar93._0_8_ * auVar59._0_8_;
    auVar20._0_16_ = auVar10;
    auVar20._24_8_ =
         dVar30 * auVar63._16_8_ + dVar81 * auVar125._0_8_ + auVar93._8_8_ * auVar59._8_8_;
    auVar59 = vshufpd_avx(auVar73,auVar73,3);
    auVar63 = vperm2f128_avx(auVar79,auVar79,0x11);
    auVar36._0_8_ = dVar8 * auVar63._0_8_ + dVar90 * auVar59._0_8_ + dVar31 * auVar73._0_8_;
    auVar36._8_8_ = dVar122 * auVar63._0_8_ + dVar147 * auVar59._8_8_ + dVar70 * auVar73._0_8_;
    auVar47._16_8_ =
         dVar115 * auVar63._16_8_ + auVar93._0_8_ * auVar59._0_8_ + dVar80 * auVar73._0_8_;
    auVar47._0_16_ = auVar36;
    auVar47._24_8_ =
         dVar30 * auVar63._16_8_ + auVar93._8_8_ * auVar59._8_8_ + dVar81 * auVar73._0_8_;
    *(undefined1 (*) [16])(param_1 + 0x48) = auVar94;
    dVar8 = (double)vmovlpd_avx(auVar100._16_16_);
    param_1[0x4a] = dVar8;
    param_1[0x4b] = 0.0;
    *(undefined1 (*) [16])(param_1 + 0x4c) = auVar10;
    dVar8 = (double)vmovlps_avx(auVar20._16_16_);
    param_1[0x4e] = dVar8;
    param_1[0x4f] = 0.0;
    *(undefined1 (*) [16])(param_1 + 0x50) = auVar36;
    uVar131 = __real_8000000000000000;
    dVar8 = (double)vmovlpd_avx(auVar47._16_16_);
    param_1[0x52] = dVar8;
    *(undefined1 (*) [16])(param_1 + 0x55) = auVar74;
    *(undefined1 (*) [16])(param_1 + 0x53) = auVar74;
    param_1[0x57] = 1.0;
    dVar115 = param_1[0x1f];
  }
  dVar50 = _UNK_150b54438;
  dVar147 = _UNK_150b54430;
  dVar90 = _UNK_150b54428;
  dVar81 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar80 = _UNK_150b54418;
  dVar70 = _UNK_150b54410;
  dVar31 = _UNK_150b54408;
  dVar30 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar122 = _UNK_15076c6f8;
  dVar8 = ___xmm_bff00000000000003ff0000000000000;
  if (0.0 < dVar115) {
    auVar11._0_8_ = (double)((ulonglong)dVar130 ^ uVar131) * dVar58;
    auVar11._8_8_ = (double)((ulonglong)dVar130 ^ uVar131) * dVar68;
    auVar21._16_8_ = (double)((ulonglong)dVar130 ^ uVar131) * dVar69;
    auVar21._0_16_ = auVar11;
    auVar21._24_8_ =
         (double)((ulonglong)dVar130 ^ uVar131) *
         (dVar32 * 0.0 + auVar75._16_8_ * 0.0 + auVar71._8_8_ * 0.0);
    dVar58 = param_1[0x38];
    auVar105._8_8_ = 0;
    auVar105._0_8_ = param_1[0x3b];
    auVar59 = vmovhps_avx(auVar105,param_1[0x3a]);
    auVar116._8_8_ = 0;
    auVar116._0_8_ = param_1[0x39];
    auVar71 = vmovhps_avx(auVar116,param_1[0x38]);
    auVar52 = vshufpd_avx(auVar11,auVar11,3);
    auVar63 = vperm2f128_avx(auVar21,auVar21,0x11);
    dVar58 = dVar58 + (auVar63._0_8_ * auVar71._0_8_ *
                       ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
                      auVar52._0_8_ * param_1[0x3a] *
                      ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
                      auVar59._0_8_ * auVar11._0_8_ * ___xmm_bff00000000000003ff0000000000000 +
                      dVar58 * 0.0) *
                      ___ymm_3fe00000000000003fe00000000000003fe00000000000003fe0000000000000;
    dVar68 = param_1[0x39] +
             (auVar63._0_8_ * auVar71._8_8_ * _UNK_150b54428 +
             auVar52._8_8_ * param_1[0x3b] * _UNK_150b54408 +
             auVar59._8_8_ * auVar11._0_8_ * _UNK_15076c6f8 + param_1[0x39] * 0.0) * _UNK_150aa8f28;
    dVar69 = param_1[0x3a] +
             (auVar63._16_8_ * auVar59._0_8_ * _UNK_150b54430 +
             auVar52._0_8_ * param_1[0x38] * _UNK_150b54410 +
             auVar71._0_8_ * auVar11._0_8_ * ___xmm_bff00000000000003ff0000000000000 +
             param_1[0x3a] * 0.0) * _UNK_150aa8f30;
    dVar32 = param_1[0x3b] +
             (auVar63._16_8_ * auVar59._8_8_ * _UNK_150b54438 +
             auVar52._8_8_ * param_1[0x39] * _UNK_150b54418 +
             auVar71._8_8_ * auVar11._0_8_ * _UNK_15076c6f8 + param_1[0x3b] * 0.0) * _UNK_150aa8f38;
    auVar83._0_8_ = dVar58 * dVar58 + dVar69 * dVar69;
    auVar83._8_8_ = dVar68 * dVar68 + dVar32 * dVar32;
    auVar59 = vshufpd_avx(auVar83,auVar83,1);
    dVar115 = auVar83._0_8_ + auVar59._0_8_;
    auVar95._8_8_ = 0;
    auVar95._0_8_ = __real_3e45798ee2308c3a;
    auVar84._8_8_ = 0;
    auVar84._0_8_ = dVar115;
    auVar59 = vcmpsd_avx(auVar95,auVar84,6);
    uVar131 = ~auVar59._0_8_ & __real_ffffffffffffffff;
    dVar115 = __real_3ff0000000000000 / SQRT(dVar115);
    auVar106._0_8_ =
         (double)(((ulonglong)(dVar58 * dVar115) ^
                  ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) & uVar131
                 );
    auVar106._8_8_ = (double)(((ulonglong)(dVar68 * dVar115) ^ _UNK_150b54548) & uVar131);
    auVar112._16_8_ = (double)(((ulonglong)(dVar69 * dVar115) ^ _UNK_150b54550) & uVar131);
    auVar112._0_16_ = auVar106;
    auVar112._24_8_ = (double)(((ulonglong)(dVar32 * dVar115) ^ _UNK_150b54558) & uVar131);
    auVar101._0_8_ =
         (double)((ulonglong)auVar106._0_8_ ^
                 ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
    auVar101._8_8_ = (double)((ulonglong)auVar106._8_8_ ^ _UNK_150b54548);
    auVar101._16_8_ = (double)((ulonglong)auVar112._16_8_ ^ _UNK_150b54550);
    auVar101._24_8_ = (double)((ulonglong)auVar112._24_8_ ^ _UNK_150b54558);
    *(undefined1 (*) [16])(param_1 + 0x38) = auVar106;
    *(undefined1 (*) [16])(param_1 + 0x3a) = auVar101._16_16_;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = param_1[0x10];
    auVar59 = vmovhps_avx(auVar12,param_1[0x13]);
    auVar22._0_8_ = SUB168(*(undefined1 (*) [16])(param_1 + 0x11),0) * auVar101._0_8_;
    auVar22._8_8_ = SUB168(*(undefined1 (*) [16])(param_1 + 0x11),8) * auVar101._8_8_;
    auVar22._16_8_ = auVar59._0_8_ * auVar101._16_8_;
    auVar22._24_8_ = auVar59._8_8_ * auVar101._24_8_;
    auVar139._16_16_ = auVar106;
    auVar139._0_16_ = auVar106;
    auVar64 = vperm2f128_avx(auVar101,auVar101,0x11);
    auVar63 = vshufpd_avx(auVar139,auVar64,9);
    auVar118._0_8_ = param_1[0x10] * auVar63._0_8_;
    auVar118._8_8_ = param_1[0x11] * auVar63._8_8_;
    auVar118._16_8_ = param_1[0x12] * auVar63._16_8_;
    auVar118._24_8_ = param_1[0x13] * auVar63._24_8_;
    auVar63 = vsubpd_avx(auVar22,auVar118);
    auVar13._0_8_ = auVar63._0_8_ + auVar63._0_8_;
    auVar13._8_8_ = auVar63._8_8_ + auVar63._8_8_;
    auVar23._16_8_ = auVar63._16_8_ + auVar63._16_8_;
    auVar23._0_16_ = auVar13;
    auVar23._24_8_ = auVar63._24_8_ + auVar63._24_8_;
    auVar63 = vshufpd_avx(auVar64,auVar64,0xf);
    auVar142._16_16_ = auVar13;
    auVar142._0_16_ = auVar13;
    auVar62 = vshufpd_avx(auVar142,ZEXT1632(auVar23._16_16_),1);
    dVar32 = auVar63._0_8_;
    dVar119 = auVar63._8_8_;
    dVar120 = auVar63._16_8_;
    dVar121 = auVar63._24_8_;
    auVar146._0_8_ = auVar106._0_8_ * auVar13._0_8_;
    auVar146._8_8_ = auVar106._8_8_ * auVar13._8_8_;
    auVar146._16_8_ = auVar112._16_8_ * auVar23._16_8_;
    auVar146._24_8_ = auVar112._24_8_ * auVar23._24_8_;
    auVar63 = vshufpd_avx(auVar139,ZEXT1632(auVar112._16_16_),1);
    auVar24._0_8_ = auVar63._0_8_ * auVar13._0_8_;
    auVar24._8_8_ = auVar63._8_8_ * auVar13._8_8_;
    auVar24._16_8_ = auVar63._16_8_ * auVar23._16_8_;
    auVar24._24_8_ = auVar63._24_8_ * auVar23._24_8_;
    auVar63 = vperm2f128_avx(auVar146,auVar146,1);
    auVar63 = vshufpd_avx(auVar63,auVar146,4);
    auVar63 = vsubpd_avx(auVar24,auVar63);
    auVar14._0_8_ = param_1[0x31] + param_1[0x10] + dVar32 * auVar62._0_8_ + auVar63._0_8_;
    auVar14._8_8_ = param_1[0x32] + param_1[0x11] + dVar119 * auVar62._8_8_ + auVar63._8_8_;
    auVar25._16_8_ = param_1[0x33] + param_1[0x12] + dVar120 * auVar62._16_8_ + auVar63._16_8_;
    auVar25._0_16_ = auVar14;
    auVar25._24_8_ = dVar121 * auVar62._24_8_ + 0.0 + auVar63._24_8_ + 0.0;
    *(undefined1 (*) [16])(param_1 + 0x23) = auVar14;
    dVar115 = (double)vmovlps_avx(auVar25._16_16_);
    param_1[0x25] = dVar115;
    auVar52 = vshufps_avx(auVar106,auVar106,0x44);
    auVar145._8_8_ = 0;
    auVar145._0_8_ = param_1[0xd];
    auVar59 = vmovhpd_avx(auVar145,param_1[0xc]);
    auVar149._8_8_ = 0;
    auVar149._0_8_ = param_1[0xf];
    auVar71 = vmovhpd_avx(auVar149,param_1[0xe]);
    dVar115 = auVar52._0_8_;
    dVar58 = auVar52._8_8_;
    auVar52 = vshufps_avx(auVar106,auVar106,0xee);
    dVar68 = auVar52._0_8_;
    dVar69 = auVar52._8_8_;
    param_1[0x2a] =
         auVar59._0_8_ * auVar64._0_8_ * dVar81 +
         dVar68 * param_1[0xe] * dVar30 + param_1[0xc] * dVar32 + auVar71._0_8_ * dVar115 * dVar8;
    param_1[0x2b] =
         auVar59._8_8_ * auVar64._0_8_ * dVar90 +
         dVar69 * param_1[0xf] * dVar31 + param_1[0xd] * dVar119 + auVar71._8_8_ * dVar58 * dVar122;
    param_1[0x2c] =
         auVar71._0_8_ * auVar64._16_8_ * dVar147 +
         dVar68 * param_1[0xc] * dVar70 + param_1[0xe] * dVar120 + auVar59._0_8_ * dVar115 * dVar8;
    param_1[0x2d] =
         auVar71._8_8_ * auVar64._16_8_ * dVar50 +
         dVar69 * param_1[0xd] * dVar80 + param_1[0xf] * dVar121 + auVar59._8_8_ * dVar58 * dVar122;
    dVar8 = auVar101._0_8_ + auVar101._0_8_;
    dVar122 = auVar101._8_8_ + auVar101._8_8_;
    dVar30 = auVar101._16_8_ + auVar101._16_8_;
    dVar31 = auVar101._24_8_ + auVar101._24_8_;
    auVar102._0_8_ = dVar115 * dVar8;
    auVar102._8_8_ = dVar58 * dVar122;
    auVar102._16_8_ = dVar115 * dVar30;
    auVar102._24_8_ = dVar58 * dVar31;
    auVar107._0_8_ = dVar68 * dVar8;
    auVar107._8_8_ = dVar69 * dVar122;
    auVar113._16_8_ = dVar68 * dVar30;
    auVar113._0_16_ = auVar107;
    auVar113._24_8_ = dVar69 * dVar31;
    auVar26._0_8_ = dVar32 * dVar8;
    auVar26._8_8_ = dVar119 * dVar122;
    auVar26._16_8_ = dVar120 * dVar30;
    auVar26._24_8_ = dVar121 * dVar31;
    auVar63 = vperm2f128_avx(auVar113,auVar102,0x21);
    auVar63 = vshufpd_avx(auVar63,ZEXT1632(auVar102._16_16_),4);
    auVar60._0_8_ = auVar26._0_8_ + auVar63._0_8_;
    auVar60._8_8_ = auVar26._8_8_ + auVar63._8_8_;
    auVar66._16_8_ = auVar26._16_8_ + auVar63._16_8_;
    auVar66._0_16_ = auVar60;
    auVar66._24_8_ = auVar26._24_8_ + auVar63._24_8_;
    auVar64 = vsubpd_avx(auVar63,auVar26);
    auVar59 = vshufpd_avx(auVar107,auVar107,1);
    auVar85._8_8_ = auVar102._0_8_;
    auVar85._0_8_ = auVar102._0_8_;
    auVar89._16_16_ = auVar85;
    auVar89._0_16_ = auVar85;
    auVar63 = vblendpd_avx(auVar89,ZEXT1632(auVar59),1);
    auVar27._16_16_ = auVar59;
    auVar27._0_16_ = auVar4;
    auVar62 = vblendpd_avx(ZEXT1632(CONCAT88(auVar112._16_8_ * dVar30,auVar112._16_8_ * dVar30)),
                           auVar27,0xc);
    auVar28._0_8_ = auVar63._0_8_ + auVar62._0_8_;
    auVar28._8_8_ = auVar63._8_8_ + auVar62._8_8_;
    auVar28._16_8_ = auVar63._16_8_ + auVar62._16_8_;
    auVar28._24_8_ = auVar63._24_8_ + auVar62._24_8_;
    auVar57._8_8_ = __real_3ff0000000000000;
    auVar57._0_8_ = __real_3ff0000000000000;
    auVar57._16_8_ = __real_3ff0000000000000;
    auVar57._24_8_ = __real_3ff0000000000000;
    auVar62 = vsubpd_avx(auVar57,auVar28);
    dVar115 = auVar62._0_8_;
    dVar8 = param_1[0x1b];
    dVar122 = param_1[0x1d];
    auVar63 = vperm2f128_avx(auVar64,auVar64,0x11);
    auVar52 = ZEXT816(0) << 0x40;
    auVar59 = vmovhpd_avx(auVar52,param_1[0x1c]);
    dVar30 = auVar59._0_8_;
    dVar31 = auVar59._8_8_;
    auVar59 = vshufpd_avx(auVar60,auVar60,3);
    auVar108._0_8_ = auVar59._0_8_ * 0.0 + dVar30 * auVar63._0_8_ + dVar8 * dVar115;
    auVar108._8_8_ = auVar59._8_8_ * 0.0 + dVar31 * auVar63._0_8_ + dVar115 * 0.0;
    auVar114._16_8_ = auVar59._0_8_ * dVar122 + auVar63._16_8_ * 0.0 + dVar115 * 0.0;
    auVar114._0_16_ = auVar108;
    auVar114._24_8_ = auVar59._8_8_ * 0.0 + auVar63._16_8_ * 0.0 + dVar115 * 0.0;
    auVar63 = vperm2f128_avx(auVar66,auVar66,0x11);
    auVar86 = auVar62._0_16_;
    auVar59 = vshufpd_avx(auVar86,auVar86,3);
    dVar115 = auVar64._0_8_;
    auVar96._0_8_ = dVar115 * 0.0 + dVar8 * auVar63._0_8_ + dVar30 * auVar59._0_8_;
    auVar96._8_8_ = dVar115 * 0.0 + auVar63._0_8_ * 0.0 + dVar31 * auVar59._8_8_;
    auVar103._16_8_ = dVar122 * dVar115 + auVar63._16_8_ * 0.0 + auVar59._0_8_ * 0.0;
    auVar103._0_16_ = auVar96;
    auVar103._24_8_ = dVar115 * 0.0 + auVar63._16_8_ * 0.0 + auVar59._8_8_ * 0.0;
    auVar74 = auVar64._0_16_;
    auVar59 = vshufpd_avx(auVar74,auVar74,3);
    auVar63 = vperm2f128_avx(auVar62,auVar62,0x11);
    auVar37._0_8_ = dVar30 * auVar60._0_8_ + dVar8 * auVar59._0_8_ + auVar63._0_8_ * 0.0;
    auVar37._8_8_ = dVar31 * auVar60._0_8_ + auVar59._8_8_ * 0.0 + auVar63._0_8_ * 0.0;
    auVar48._16_8_ = auVar60._0_8_ * 0.0 + auVar59._0_8_ * 0.0 + auVar63._16_8_ * dVar122;
    auVar48._0_16_ = auVar37;
    auVar48._24_8_ = auVar60._0_8_ * 0.0 + auVar59._8_8_ * 0.0 + auVar63._16_8_ * 0.0;
    auVar71 = vunpcklpd_avx(auVar86,auVar66._16_16_);
    auVar59 = vshufpd_avx(auVar74,auVar74,1);
    auVar129._16_16_ = auVar59;
    auVar129._0_16_ = auVar4;
    auVar63 = vblendpd_avx(ZEXT1632(auVar71),auVar129,0xc);
    dVar31 = auVar63._0_8_;
    dVar58 = auVar63._8_8_;
    dVar68 = auVar63._16_8_;
    dVar69 = auVar63._24_8_;
    auVar71 = vshufpd_avx(auVar108,auVar108,3);
    auVar59 = vblendpd_avx(auVar86,auVar64._16_16_,1);
    dVar70 = auVar59._0_8_;
    dVar80 = auVar59._8_8_;
    auVar59 = vshufpd_avx(auVar60,auVar74,1);
    auVar64 = vperm2f128_avx(auVar114,auVar114,0x11);
    auVar63 = vblendpd_avx(auVar62,ZEXT1632(auVar59),3);
    dVar8 = auVar63._0_8_;
    dVar122 = auVar63._8_8_;
    dVar115 = auVar63._16_8_;
    dVar30 = auVar63._24_8_;
    auVar61._0_8_ = dVar8 * auVar64._0_8_ + dVar70 * auVar71._0_8_ + dVar31 * auVar108._0_8_;
    auVar61._8_8_ = dVar122 * auVar64._0_8_ + dVar80 * auVar71._8_8_ + dVar58 * auVar108._0_8_;
    auVar67._16_8_ =
         dVar115 * auVar64._16_8_ + auVar60._0_8_ * auVar71._0_8_ + dVar68 * auVar108._0_8_;
    auVar67._0_16_ = auVar61;
    auVar67._24_8_ =
         dVar30 * auVar64._16_8_ + auVar60._8_8_ * auVar71._8_8_ + dVar69 * auVar108._0_8_;
    auVar59 = vshufpd_avx(auVar96,auVar96,3);
    auVar63 = vperm2f128_avx(auVar103,auVar103,0x11);
    auVar15._0_8_ = dVar8 * auVar63._0_8_ + dVar31 * auVar96._0_8_ + dVar70 * auVar59._0_8_;
    auVar15._8_8_ = dVar122 * auVar63._0_8_ + dVar58 * auVar96._0_8_ + dVar80 * auVar59._8_8_;
    auVar29._16_8_ =
         dVar115 * auVar63._16_8_ + dVar68 * auVar96._0_8_ + auVar60._0_8_ * auVar59._0_8_;
    auVar29._0_16_ = auVar15;
    auVar29._24_8_ =
         dVar30 * auVar63._16_8_ + dVar69 * auVar96._0_8_ + auVar60._8_8_ * auVar59._8_8_;
    auVar59 = vshufpd_avx(auVar37,auVar37,3);
    auVar63 = vperm2f128_avx(auVar48,auVar48,0x11);
    auVar38._0_8_ = dVar8 * auVar63._0_8_ + dVar31 * auVar37._0_8_ + dVar70 * auVar59._0_8_;
    auVar38._8_8_ = dVar122 * auVar63._0_8_ + dVar58 * auVar37._0_8_ + dVar80 * auVar59._8_8_;
    auVar49._16_8_ =
         dVar115 * auVar63._16_8_ + dVar68 * auVar37._0_8_ + auVar60._0_8_ * auVar59._0_8_;
    auVar49._0_16_ = auVar38;
    auVar49._24_8_ =
         dVar30 * auVar63._16_8_ + dVar69 * auVar37._0_8_ + auVar60._8_8_ * auVar59._8_8_;
    *(undefined1 (*) [16])(param_1 + 0x58) = auVar61;
    dVar8 = (double)vmovlpd_avx(auVar67._16_16_);
    param_1[0x5a] = dVar8;
    param_1[0x5b] = 0.0;
    *(undefined1 (*) [16])(param_1 + 0x5c) = auVar15;
    dVar8 = (double)vmovlps_avx(auVar29._16_16_);
    param_1[0x5e] = dVar8;
    param_1[0x5f] = 0.0;
    *(undefined1 (*) [16])(param_1 + 0x60) = auVar38;
    dVar8 = (double)vmovlpd_avx(auVar49._16_16_);
    param_1[0x62] = dVar8;
    *(undefined1 (*) [16])(param_1 + 0x65) = auVar52;
    *(undefined1 (*) [16])(param_1 + 99) = auVar52;
    param_1[0x67] = 1.0;
  }
  auVar53._0_8_ = param_1[0x38] * param_1[0x34] + param_1[0x3a] * param_1[0x36];
  auVar53._8_8_ = param_1[0x39] * param_1[0x35] + param_1[0x3b] * param_1[0x37];
  auVar59 = vshufpd_avx(auVar53,auVar53,1);
  auVar54._8_8_ = 0;
  auVar54._0_8_ = auVar53._0_8_ + auVar59._0_8_;
  auVar59 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar54,2);
  auVar87._8_8_ = 0;
  auVar87._0_8_ = __real_3ff0000000000000;
  auVar97._8_8_ = 0;
  auVar97._0_8_ = __real_bff0000000000000;
  auVar59 = vblendvpd_avx(auVar97,auVar87,auVar59);
  dVar8 = auVar59._0_8_;
  param_1[0x38] = param_1[0x38] * dVar8;
  param_1[0x39] = param_1[0x39] * dVar8;
  param_1[0x3a] = param_1[0x3a] * dVar8;
  param_1[0x3b] = param_1[0x3b] * dVar8;
  auVar39._0_8_ = param_1[0x2a] * param_1[0x26] + param_1[0x2c] * param_1[0x28];
  auVar39._8_8_ = param_1[0x2b] * param_1[0x27] + param_1[0x2d] * param_1[0x29];
  auVar59 = vshufpd_avx(auVar39,auVar39,1);
  auVar40._8_8_ = 0;
  auVar40._0_8_ = auVar39._0_8_ + auVar59._0_8_;
  auVar59 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar40,2);
  auVar59 = vblendvpd_avx(auVar97,auVar87,auVar59);
  dVar8 = auVar59._0_8_;
  param_1[0x2a] = param_1[0x2a] * dVar8;
  param_1[0x2b] = param_1[0x2b] * dVar8;
  param_1[0x2c] = param_1[0x2c] * dVar8;
  param_1[0x2d] = param_1[0x2d] * dVar8;
  *param_9 = dVar130 + *param_9;
  auVar5._0_8_ = dVar130 * *param_6 + param_1[0x84];
  auVar5._8_8_ = dVar130 * param_6[1] + param_1[0x85];
  auVar7._16_8_ = dVar130 * param_6[2] + param_1[0x86];
  auVar7._0_16_ = auVar5;
  auVar7._24_8_ = dVar130 * 0.0 + 0.0;
  *(undefined1 (*) [16])(param_1 + 0x84) = auVar5;
  dVar8 = (double)vmovlps_avx(auVar7._16_16_);
  param_1[0x86] = dVar8;
  return;
}

// ApplyRotationConstraintSoftKD_avx @ 1409fe3b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyRotationConstraintSoftKD_avx
               (longlong param_1,int param_2,int param_3,double param_4,double param_5,
               double param_6,byte param_7,undefined1 (*param_8) [24],double param_9,double param_10
               ,double *param_11)

{
  double *pdVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [24];
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar25;
  undefined1 auVar21 [32];
  double dVar24;
  double dVar26;
  undefined1 auVar22 [32];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [24];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  double dVar49;
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar56;
  undefined1 auVar53 [32];
  double dVar55;
  double dVar57;
  undefined1 auVar54 [32];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar63 [32];
  double dVar64;
  double dVar65;
  double dVar74;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  double dVar75;
  double dVar76;
  undefined1 auVar71 [32];
  double dVar77;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar89 [16];
  ulonglong uVar90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [32];
  undefined1 auVar96 [32];
  undefined1 auVar98 [32];
  double dVar100;
  double dVar101;
  undefined1 auVar102 [16];
  double dVar107;
  undefined1 auVar103 [32];
  undefined1 auVar104 [32];
  undefined1 auVar105 [32];
  undefined1 auVar106 [32];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [32];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  double dVar113;
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [32];
  undefined1 auVar23 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined1 auVar62 [32];
  undefined1 auVar70 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar97 [32];
  undefined1 auVar99 [32];
  
  dVar9 = _UNK_150b54438;
  dVar8 = _UNK_150b54430;
  dVar7 = _UNK_150b54428;
  dVar107 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar101 = _UNK_150b54418;
  dVar100 = _UNK_150b54410;
  dVar56 = _UNK_150b54408;
  dVar55 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar49 = _UNK_15076c6f8;
  dVar57 = ___xmm_bff00000000000003ff0000000000000;
  lVar12 = (longlong)param_3;
  lVar11 = lVar12 * 0x80;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = *(ulonglong *)(param_1 + 0x240 + lVar11);
  auVar78._8_8_ = 0;
  auVar78._0_8_ = *(ulonglong *)(param_1 + 0x260 + lVar11);
  auVar61._8_8_ = 0;
  auVar61._0_8_ = *(ulonglong *)(param_1 + 0x268 + lVar11);
  auVar89._8_8_ = 0;
  auVar89._0_8_ = *(ulonglong *)(param_1 + 0x280 + lVar11);
  auVar52._8_8_ = 0;
  auVar52._0_8_ = *(ulonglong *)(param_1 + 0x288 + lVar11);
  dVar77 = *(double *)*param_8;
  dVar65 = *(double *)(*param_8 + 8);
  dVar50 = *(double *)(*param_8 + 0x10);
  if (param_6 <= __real_3f1a36e2eb1c432d) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = dVar65;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = dVar77;
    auVar3 = vunpcklpd_avx(auVar18,auVar3);
    auVar40._16_8_ = dVar50;
    auVar40._0_16_ = auVar3;
    dVar14 = 0.0;
    auVar6 = auVar40;
  }
  else {
    lVar10 = (longlong)param_2 * 0x20;
    auVar3 = *(undefined1 (*) [16])(param_1 + 0x3f0 + lVar10);
    auVar18 = *(undefined1 (*) [16])(param_1 + 0x3e0 + lVar10);
    auVar85._16_16_ = auVar3;
    auVar85._0_16_ = auVar18;
    pdVar1 = (double *)(param_1 + 0x130 + lVar10);
    dVar14 = *pdVar1;
    dVar24 = pdVar1[1];
    pdVar1 = (double *)(param_1 + 0x140 + lVar10);
    dVar25 = *pdVar1;
    dVar26 = pdVar1[1];
    auVar15._0_8_ = auVar18._0_8_ * dVar14 + dVar25 * auVar3._0_8_;
    auVar15._8_8_ = auVar18._8_8_ * dVar24 + dVar26 * auVar3._8_8_;
    auVar4 = vshufpd_avx(auVar15,auVar15,1);
    auVar16._8_8_ = 0;
    auVar16._0_8_ = auVar15._0_8_ + auVar4._0_8_;
    auVar4 = vcmpsd_avx(ZEXT816(0),auVar16,2);
    auVar28._8_8_ = 0;
    auVar28._0_8_ = __real_3ff0000000000000;
    auVar51._8_8_ = 0;
    auVar51._0_8_ = __real_bff0000000000000;
    auVar4 = vblendvpd_avx(auVar51,auVar28,auVar4);
    dVar76 = auVar4._0_8_;
    auVar21._0_8_ = dVar14 * dVar76;
    auVar21._8_8_ = dVar24 * dVar76;
    auVar21._16_8_ = dVar25 * dVar76;
    auVar21._24_8_ = dVar26 * dVar76;
    auVar32 = vsubpd_avx(auVar21,auVar85);
    auVar119._0_8_ =
         auVar18._0_8_ * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
    auVar119._8_8_ = auVar18._8_8_ * _UNK_150b543c8;
    auVar119._16_8_ = auVar3._0_8_ * _UNK_150b543d0;
    auVar119._24_8_ = auVar3._8_8_ * _UNK_150b543d8;
    auVar85 = vperm2f128_avx(auVar32,auVar32,0x11);
    lVar10 = lVar12 * 0x20;
    auVar3 = *(undefined1 (*) [16])(param_1 + 0x3f0 + lVar10);
    auVar18 = *(undefined1 (*) [16])(param_1 + 0x3e0 + lVar10);
    pdVar1 = (double *)(param_1 + 0x130 + lVar10);
    dVar14 = *pdVar1;
    dVar24 = pdVar1[1];
    pdVar1 = (double *)(param_1 + 0x140 + lVar10);
    dVar25 = *pdVar1;
    dVar26 = pdVar1[1];
    auVar111._0_8_ = dVar14 * auVar18._0_8_ + dVar25 * auVar3._0_8_;
    auVar111._8_8_ = dVar24 * auVar18._8_8_ + dVar26 * auVar3._8_8_;
    auVar4 = vshufpd_avx(auVar111,auVar111,1);
    auVar21 = vshufpd_avx(auVar85,auVar85,0xf);
    auVar112._8_8_ = 0;
    auVar112._0_8_ = auVar111._0_8_ + auVar4._0_8_;
    auVar4 = vcmpsd_avx(ZEXT816(0),auVar112,2);
    dVar76 = auVar32._0_8_;
    auVar114._8_8_ = 0;
    auVar114._0_8_ = __real_3ff0000000000000;
    auVar4 = vblendvpd_avx(auVar51,auVar114,auVar4);
    auVar86 = vperm2f128_avx(auVar119,auVar119,1);
    auVar22 = vshufpd_avx(auVar86,auVar86,5);
    auVar15 = vshufpd_avx(auVar32._0_16_,auVar32._0_16_,3);
    auVar32 = vshufpd_avx(auVar119,auVar119,5);
    dVar64 = auVar32._0_8_ * auVar85._0_8_ *
             ___ymm_00000000000000003ff00000000000003ff0000000000000bff0000000000000 +
             auVar119._0_8_ * auVar21._0_8_ +
             dVar76 * auVar22._0_8_ * ___xmm_bff00000000000003ff0000000000000 +
             auVar86._0_8_ * auVar15._0_8_ *
             ___ymm_0000000000000000bff00000000000003ff00000000000003ff0000000000000;
    dVar74 = auVar32._8_8_ * auVar85._0_8_ * _UNK_150b54588 +
             auVar119._8_8_ * auVar21._8_8_ + dVar76 * auVar22._8_8_ * _UNK_15076c6f8 +
             auVar86._8_8_ * auVar15._8_8_ * _UNK_150b54568;
    dVar75 = auVar32._16_8_ * auVar85._16_8_ * _UNK_150b54590 +
             auVar119._16_8_ * auVar21._16_8_ +
             dVar76 * auVar22._16_8_ * ___xmm_bff00000000000003ff0000000000000 +
             auVar86._16_8_ * auVar15._0_8_ * _UNK_150b54570;
    dVar76 = auVar32._24_8_ * auVar85._16_8_ * _UNK_150b54598 +
             auVar119._24_8_ * auVar21._24_8_ + dVar76 * auVar22._24_8_ * _UNK_15076c6f8 +
             auVar86._24_8_ * auVar15._8_8_ * _UNK_150b54578;
    auVar32._16_16_ = auVar3;
    auVar32._0_16_ = auVar18;
    dVar113 = auVar4._0_8_;
    auVar86._0_8_ = dVar113 * dVar14;
    auVar86._8_8_ = dVar113 * dVar24;
    auVar86._16_8_ = dVar113 * dVar25;
    auVar86._24_8_ = dVar113 * dVar26;
    auVar32 = vsubpd_avx(auVar86,auVar32);
    auVar33._0_8_ =
         auVar18._0_8_ * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
    auVar33._8_8_ = auVar18._8_8_ * _UNK_150b543c8;
    auVar33._16_8_ = auVar3._0_8_ * _UNK_150b543d0;
    auVar33._24_8_ = auVar3._8_8_ * _UNK_150b543d8;
    dVar26 = auVar32._0_8_;
    auVar85 = vperm2f128_avx(auVar33,auVar33,1);
    auVar21 = vshufpd_avx(auVar85,auVar85,5);
    auVar86 = vperm2f128_avx(auVar32,auVar32,0x11);
    auVar22 = vshufpd_avx(auVar86,auVar86,0xf);
    auVar3 = vshufpd_avx(auVar32._0_16_,auVar32._0_16_,3);
    auVar32 = vshufpd_avx(auVar33,auVar33,5);
    auVar53._0_8_ = dVar64 + dVar64;
    auVar53._8_8_ = dVar74 + dVar74;
    auVar53._16_8_ = dVar75 + dVar75;
    auVar53._24_8_ = dVar76 + dVar76;
    dVar14 = auVar32._0_8_ * auVar86._0_8_ *
             ___ymm_00000000000000003ff00000000000003ff0000000000000bff0000000000000 +
             auVar85._0_8_ * auVar3._0_8_ *
             ___ymm_0000000000000000bff00000000000003ff00000000000003ff0000000000000 +
             auVar22._0_8_ * auVar33._0_8_ +
             auVar21._0_8_ * dVar26 * ___xmm_bff00000000000003ff0000000000000;
    dVar24 = auVar32._8_8_ * auVar86._0_8_ * _UNK_150b54588 +
             auVar85._8_8_ * auVar3._8_8_ * _UNK_150b54568 +
             auVar22._8_8_ * auVar33._8_8_ + auVar21._8_8_ * dVar26 * _UNK_15076c6f8;
    dVar25 = auVar32._16_8_ * auVar86._16_8_ * _UNK_150b54590 +
             auVar85._16_8_ * auVar3._0_8_ * _UNK_150b54570 +
             auVar22._16_8_ * auVar33._16_8_ +
             auVar21._16_8_ * dVar26 * ___xmm_bff00000000000003ff0000000000000;
    dVar26 = auVar32._24_8_ * auVar86._16_8_ * _UNK_150b54598 +
             auVar85._24_8_ * auVar3._8_8_ * _UNK_150b54578 +
             auVar22._24_8_ * auVar33._24_8_ + auVar21._24_8_ * dVar26 * _UNK_15076c6f8;
    auVar22._0_8_ = dVar14 + dVar14;
    auVar22._8_8_ = dVar24 + dVar24;
    auVar22._16_8_ = dVar25 + dVar25;
    auVar22._24_8_ = dVar26 + dVar26;
    auVar21 = vsubpd_avx(auVar53,auVar22);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = dVar65;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = dVar77;
    auVar3 = vunpcklpd_avx(auVar36,auVar4);
    auVar40._16_8_ = dVar50;
    auVar40._0_16_ = auVar3;
    auVar17._0_8_ = auVar3._0_8_ * auVar21._0_8_;
    auVar17._8_8_ = auVar3._8_8_ * auVar21._8_8_;
    auVar3 = vshufpd_avx(auVar17,auVar17,1);
    dVar14 = param_4 * param_10 + dVar50 * auVar21._16_8_ + auVar17._0_8_ + auVar3._0_8_;
    auVar6 = *param_8;
  }
  lVar10 = lVar11 + param_1;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = *(ulonglong *)(param_1 + 0x248 + lVar11);
  auVar3 = vunpcklpd_avx(auVar27,auVar5);
  auVar27 = vmovlhps_avx(auVar78,auVar61);
  auVar78 = vmovlhps_avx(auVar89,auVar52);
  auVar29._0_8_ =
       auVar40._0_8_ * (auVar3._0_8_ * dVar77 + auVar27._0_8_ * dVar65 + auVar78._0_8_ * dVar50);
  auVar29._8_8_ =
       auVar40._8_8_ * (auVar3._8_8_ * dVar77 + auVar27._8_8_ * dVar65 + auVar78._8_8_ * dVar50);
  auVar27 = vshufpd_avx(auVar29,auVar29,1);
  dVar77 = auVar40._16_8_ *
           (*(double *)(param_1 + 0x250 + lVar11) * dVar77 +
            *(double *)(param_1 + 0x270 + lVar11) * dVar65 +
           *(double *)(param_1 + 0x290 + lVar11) * dVar50) + auVar29._0_8_ + auVar27._0_8_;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = __real_3ff0000000000000;
  dVar65 = __real_3ff0000000000000;
  if ((param_7 & 1) != 0) {
    dVar65 = __real_3ff0000000000000 / dVar77;
  }
  dVar50 = dVar65 * param_5 * param_4 * param_4;
  param_4 = param_6 * dVar65 * param_4;
  dVar64 = (__real_3ff0000000000000 / (dVar77 * (param_4 + dVar50) + __real_3ff0000000000000)) *
           *(double *)(param_1 + 0x4c8) * ((dVar50 * param_9 - dVar14 * param_4) - *param_11);
  dVar77 = dVar64 * (double)((ulonglong)dVar77 ^ __xmm_80000000000000008000000000000000);
  auVar58._0_8_ = auVar6._0_8_ * dVar77;
  auVar58._8_8_ = auVar6._8_8_ * dVar77;
  auVar62._16_8_ = auVar6._16_8_ * dVar77;
  auVar62._0_16_ = auVar58;
  auVar62._24_8_ = dVar77 * 0.0;
  lVar13 = lVar12 * 0x20;
  auVar27 = *(undefined1 (*) [16])(param_1 + 0x1a0 + lVar13);
  auVar78 = *(undefined1 (*) [16])(param_1 + 0x1b0 + lVar13);
  dVar77 = auVar27._0_8_;
  dVar50 = auVar27._8_8_;
  dVar24 = auVar78._0_8_;
  dVar25 = auVar78._8_8_;
  auVar102._8_8_ = 0;
  auVar102._0_8_ = *(ulonglong *)(param_1 + 0x1b8 + lVar13);
  auVar27 = vmovhps_avx(auVar102,*(undefined8 *)(param_1 + 0x1b0 + lVar13));
  auVar108._8_8_ = 0;
  auVar108._0_8_ = *(ulonglong *)(param_1 + 0x1a8 + lVar13);
  auVar78 = vmovhps_avx(auVar108,*(undefined8 *)(param_1 + 0x1a0 + lVar13));
  auVar89 = vshufpd_avx(auVar58,auVar58,3);
  auVar21 = vperm2f128_avx(auVar62,auVar62,0x11);
  dVar65 = dVar77 + (auVar78._0_8_ * auVar21._0_8_ *
                     ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
                    dVar77 * 0.0 +
                    auVar27._0_8_ * auVar58._0_8_ * ___xmm_bff00000000000003ff0000000000000 +
                    auVar89._0_8_ * dVar24 *
                    ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000) *
                    ___ymm_3fe00000000000003fe00000000000003fe00000000000003fe0000000000000;
  dVar14 = dVar50 + (auVar78._8_8_ * auVar21._0_8_ * _UNK_150b54428 +
                    dVar50 * 0.0 + auVar27._8_8_ * auVar58._0_8_ * _UNK_15076c6f8 +
                    auVar89._8_8_ * dVar25 * _UNK_150b54408) * _UNK_150aa8f28;
  dVar24 = dVar24 + (auVar27._0_8_ * auVar21._16_8_ * _UNK_150b54430 +
                    dVar24 * 0.0 +
                    auVar78._0_8_ * auVar58._0_8_ * ___xmm_bff00000000000003ff0000000000000 +
                    auVar89._0_8_ * dVar77 * _UNK_150b54410) * _UNK_150aa8f30;
  dVar25 = dVar25 + (auVar27._8_8_ * auVar21._16_8_ * _UNK_150b54438 +
                    dVar25 * 0.0 + auVar78._8_8_ * auVar58._0_8_ * _UNK_15076c6f8 +
                    auVar89._8_8_ * dVar50 * _UNK_150b54418) * _UNK_150aa8f38;
  auVar79._0_8_ = dVar24 * dVar24 + dVar65 * dVar65;
  auVar79._8_8_ = dVar25 * dVar25 + dVar14 * dVar14;
  auVar27 = vshufpd_avx(auVar79,auVar79,1);
  dVar77 = auVar27._0_8_ + auVar79._0_8_;
  auVar91._8_8_ = 0;
  auVar91._0_8_ = __real_3e45798ee2308c3a;
  auVar80._8_8_ = 0;
  auVar80._0_8_ = dVar77;
  auVar27 = vcmpsd_avx(auVar91,auVar80,6);
  uVar90 = ~auVar27._0_8_ & __real_ffffffffffffffff;
  dVar77 = __real_3ff0000000000000 / SQRT(dVar77);
  auVar95._0_8_ = ~uVar90 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
  auVar95._8_8_ = ~uVar90 & _UNK_150b54548;
  auVar95._16_8_ = ~uVar90 & _UNK_150b54550;
  auVar95._24_8_ = ~uVar90 & _UNK_150b54558;
  auVar66._0_8_ = (ulonglong)(dVar65 * dVar77) & uVar90;
  auVar66._8_8_ = (ulonglong)(dVar14 * dVar77) & uVar90;
  auVar70._16_8_ = (ulonglong)(dVar24 * dVar77) & uVar90;
  auVar70._0_16_ = auVar66;
  auVar70._24_8_ = (ulonglong)(dVar25 * dVar77) & uVar90;
  auVar89 = auVar95._16_16_ | auVar70._16_16_;
  auVar27 = vshufps_avx(auVar66,auVar66,0x4e);
  auVar78 = vshufps_avx(auVar89,auVar89,0x4e);
  uVar2 = vmovlpd_avx(auVar66);
  *(undefined8 *)(param_1 + 0x1a0 + lVar13) = uVar2;
  uVar2 = vmovlpd_avx(auVar27);
  *(undefined8 *)(param_1 + 0x1a8 + lVar13) = uVar2;
  uVar2 = vmovlps_avx(auVar89);
  *(undefined8 *)(param_1 + 0x1b0 + lVar13) = uVar2;
  uVar2 = vmovlps_avx(auVar78);
  *(undefined8 *)(param_1 + 0x1b8 + lVar13) = uVar2;
  auVar67._0_8_ =
       *(double *)(param_1 + 0x1c0) * *(double *)(param_1 + 0x1a0) +
       *(double *)(param_1 + 0x1d0) * *(double *)(param_1 + 0x1b0);
  auVar67._8_8_ =
       *(double *)(param_1 + 0x1c8) * *(double *)(param_1 + 0x1a8) +
       *(double *)(param_1 + 0x1d8) * *(double *)(param_1 + 0x1b8);
  auVar27 = vshufpd_avx(auVar67,auVar67,1);
  auVar81._8_8_ = 0;
  auVar81._0_8_ = auVar67._0_8_ + auVar27._0_8_;
  auVar27 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar81,2);
  auVar82._8_8_ = 0;
  auVar82._0_8_ = __real_bff0000000000000;
  auVar27 = vblendvpd_avx(auVar82,auVar37,auVar27);
  dVar77 = auVar27._0_8_;
  *(double *)(param_1 + 0x1c0) = *(double *)(param_1 + 0x1c0) * dVar77;
  *(double *)(param_1 + 0x1c8) = *(double *)(param_1 + 0x1c8) * dVar77;
  *(double *)(param_1 + 0x1d0) = *(double *)(param_1 + 0x1d0) * dVar77;
  *(double *)(param_1 + 0x1d8) = *(double *)(param_1 + 0x1d8) * dVar77;
  lVar11 = lVar12 * 0x60;
  auVar92._8_8_ = 0;
  auVar92._0_8_ = *(ulonglong *)(param_1 + 0x20 + lVar11);
  auVar52 = vmovhps_avx(auVar92,*(undefined8 *)(param_1 + 0x38 + lVar11));
  pdVar1 = (double *)(param_1 + 0x20 + lVar11);
  dVar76 = *pdVar1;
  dVar74 = pdVar1[1];
  auVar27 = *(undefined1 (*) [16])(param_1 + 0x28 + lVar11);
  auVar78 = *(undefined1 (*) [16])(param_1 + 0x1a0 + lVar13);
  auVar89 = *(undefined1 (*) [16])(param_1 + 0x1a8 + lVar13);
  dVar77 = *(double *)(param_1 + 0x1b0 + lVar13);
  auVar115._8_8_ = 0;
  auVar115._0_8_ = dVar77;
  dVar65 = *(double *)(param_1 + 0x1b8 + lVar13);
  auVar118._8_8_ = dVar65;
  auVar118._0_8_ = dVar65;
  auVar61 = vunpcklpd_avx(auVar115,auVar118);
  dVar14 = auVar78._0_8_;
  auVar96._0_8_ = auVar27._0_8_ * dVar14;
  dVar25 = auVar78._8_8_;
  auVar96._8_8_ = auVar27._8_8_ * dVar25;
  auVar96._16_8_ = auVar52._0_8_ * auVar61._0_8_;
  auVar96._24_8_ = auVar52._8_8_ * auVar61._8_8_;
  dVar50 = *(double *)(param_1 + 0x1a0 + lVar13);
  auVar109._8_8_ = 0;
  auVar109._0_8_ = dVar50;
  auVar27 = vunpcklpd_avx(auVar109,auVar118);
  pdVar1 = (double *)(param_1 + 0x30 + lVar11);
  dVar24 = auVar89._0_8_;
  auVar103._0_8_ = dVar76 * dVar24;
  dVar26 = auVar89._8_8_;
  auVar103._8_8_ = dVar74 * dVar26;
  auVar103._16_8_ = *pdVar1 * auVar27._0_8_;
  auVar103._24_8_ = pdVar1[1] * auVar27._8_8_;
  auVar21 = vsubpd_avx(auVar96,auVar103);
  auVar93._0_8_ = auVar21._0_8_ + auVar21._0_8_;
  auVar93._8_8_ = auVar21._8_8_ + auVar21._8_8_;
  auVar97._16_8_ = auVar21._16_8_ + auVar21._16_8_;
  auVar97._0_16_ = auVar93;
  auVar97._24_8_ = auVar21._24_8_ + auVar21._24_8_;
  auVar104._16_16_ = auVar93;
  auVar104._0_16_ = auVar93;
  auVar21 = vshufpd_avx(auVar104,ZEXT1632(auVar97._16_16_),1);
  auVar22 = vperm2f128_avx(auVar97,auVar97,1);
  auVar22 = vshufpd_avx(auVar22,auVar97,4);
  auVar98._0_8_ = dVar14 * auVar22._0_8_;
  auVar98._8_8_ = dVar25 * auVar22._8_8_;
  auVar98._16_8_ = dVar77 * auVar22._16_8_;
  auVar98._24_8_ = auVar22._24_8_ * 0.0;
  auVar105._0_8_ = dVar24 * auVar21._0_8_;
  auVar105._8_8_ = dVar26 * auVar21._8_8_;
  auVar105._16_8_ = dVar50 * auVar21._16_8_;
  auVar105._24_8_ = auVar21._24_8_ * 0.0;
  auVar22 = vsubpd_avx(auVar98,auVar105);
  auVar106._16_16_ = auVar22._0_16_;
  auVar106._0_16_ = auVar22._0_16_;
  auVar22 = vshufpd_avx(auVar106,ZEXT1632(auVar22._16_16_),1);
  pdVar1 = (double *)(param_1 + 0x170 + lVar12 * 0x18);
  auVar94._0_8_ = *pdVar1 + dVar76 + dVar65 * auVar21._0_8_ + auVar22._0_8_;
  auVar94._8_8_ = pdVar1[1] + dVar74 + dVar65 * auVar21._8_8_ + auVar22._8_8_;
  auVar99._16_8_ =
       *(double *)(param_1 + 0x180 + lVar12 * 0x18) +
       *(double *)(param_1 + 0x30 + lVar11) + dVar65 * auVar21._16_8_ + auVar22._16_8_;
  auVar99._0_16_ = auVar94;
  auVar99._24_8_ = dVar65 * auVar21._24_8_ + 0.0 + auVar22._24_8_ + 0.0;
  *(undefined1 (*) [16])(param_1 + 0x100 + lVar12 * 0x18) = auVar94;
  uVar2 = vmovlps_avx(auVar99._16_16_);
  *(undefined8 *)(param_1 + 0x110 + lVar12 * 0x18) = uVar2;
  dVar77 = *(double *)(param_1 + 0x1b8 + lVar13);
  auVar27 = *(undefined1 (*) [16])(param_1 + 0x10 + lVar11);
  dVar65 = *(double *)(param_1 + 0x1a0 + lVar13);
  auVar117._8_8_ = 0;
  auVar117._0_8_ = *(ulonglong *)(param_1 + 8 + lVar11);
  auVar78 = vmovhps_avx(auVar117,*(undefined8 *)(param_1 + lVar11));
  dVar24 = SUB168(*(undefined1 (*) [16])(param_1 + lVar11),0);
  dVar25 = SUB168(*(undefined1 (*) [16])(param_1 + lVar11),8);
  dVar26 = auVar27._0_8_;
  dVar76 = auVar27._8_8_;
  auVar116._8_8_ = 0;
  auVar116._0_8_ = *(ulonglong *)(param_1 + 0x18 + lVar11);
  auVar27 = vmovhps_avx(auVar116,*(undefined8 *)(param_1 + 0x10 + lVar11));
  dVar50 = *(double *)(param_1 + 0x1a8 + lVar13);
  dVar14 = *(double *)(param_1 + 0x1b0 + lVar13);
  pdVar1 = (double *)(param_1 + 0x130 + lVar13);
  *pdVar1 = auVar78._0_8_ * dVar14 * dVar107 +
            dVar26 * dVar50 * dVar55 + dVar77 * dVar24 + dVar65 * auVar27._0_8_ * dVar57;
  pdVar1[1] = auVar78._8_8_ * dVar14 * dVar7 +
              dVar76 * dVar50 * dVar56 + dVar77 * dVar25 + dVar65 * auVar27._8_8_ * dVar49;
  pdVar1 = (double *)(param_1 + 0x140 + lVar13);
  *pdVar1 = auVar27._0_8_ * dVar14 * dVar8 +
            dVar24 * dVar50 * dVar100 + dVar77 * dVar26 + dVar65 * auVar78._0_8_ * dVar57;
  pdVar1[1] = auVar27._8_8_ * dVar14 * dVar9 +
              dVar25 * dVar50 * dVar101 + dVar77 * dVar76 + dVar65 * auVar78._8_8_ * dVar49;
  auVar59._0_8_ =
       *(double *)(param_1 + 0x150) * *(double *)(param_1 + 0x130) +
       *(double *)(param_1 + 0x160) * *(double *)(param_1 + 0x140);
  auVar59._8_8_ =
       *(double *)(param_1 + 0x158) * *(double *)(param_1 + 0x138) +
       *(double *)(param_1 + 0x168) * *(double *)(param_1 + 0x148);
  auVar27 = vshufpd_avx(auVar59,auVar59,1);
  auVar60._8_8_ = 0;
  auVar60._0_8_ = auVar27._0_8_ + auVar59._0_8_;
  auVar27 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar60,2);
  auVar27 = vblendvpd_avx(auVar82,auVar37,auVar27);
  dVar77 = auVar27._0_8_;
  *(double *)(param_1 + 0x150) = *(double *)(param_1 + 0x150) * dVar77;
  *(double *)(param_1 + 0x158) = *(double *)(param_1 + 0x158) * dVar77;
  *(double *)(param_1 + 0x160) = *(double *)(param_1 + 0x160) * dVar77;
  *(double *)(param_1 + 0x168) = *(double *)(param_1 + 0x168) * dVar77;
  dVar77 = *(double *)(param_1 + 0x1a0 + lVar13);
  auVar38._8_8_ = dVar77;
  auVar38._0_8_ = dVar77;
  dVar65 = *(double *)(param_1 + 0x1a8 + lVar13);
  auVar44._8_8_ = dVar65;
  auVar44._0_8_ = dVar65;
  auVar78 = vunpcklpd_avx(auVar38,auVar44);
  auVar27 = *(undefined1 (*) [16])(param_1 + 0x1b0 + lVar13);
  dVar49 = auVar78._0_8_ + auVar78._0_8_;
  dVar55 = auVar78._8_8_ + auVar78._8_8_;
  dVar50 = auVar27._0_8_;
  dVar57 = auVar27._8_8_;
  dVar56 = dVar50 + dVar50;
  dVar57 = dVar57 + dVar57;
  auVar41._0_8_ = dVar77 * dVar49;
  auVar41._8_8_ = dVar77 * dVar55;
  auVar41._16_8_ = dVar77 * dVar56;
  auVar41._24_8_ = dVar77 * dVar57;
  dVar77 = *(double *)(param_1 + 0x1b8 + lVar13);
  auVar83._0_8_ = dVar65 * dVar49;
  auVar83._8_8_ = dVar65 * dVar55;
  auVar87._16_8_ = dVar65 * dVar56;
  auVar87._0_16_ = auVar83;
  auVar87._24_8_ = dVar65 * dVar57;
  auVar54._0_8_ = dVar49 * dVar77;
  auVar54._8_8_ = dVar55 * dVar77;
  auVar54._16_8_ = dVar56 * dVar77;
  auVar54._24_8_ = dVar57 * dVar77;
  dVar77 = (dVar50 + dVar50) * *(double *)(param_1 + 0x1b0 + lVar13);
  auVar21 = vperm2f128_avx(auVar87,auVar41,0x21);
  auVar21 = vshufpd_avx(auVar21,ZEXT1632(auVar41._16_16_),4);
  auVar45._0_8_ = auVar54._0_8_ + auVar21._0_8_;
  auVar45._8_8_ = auVar54._8_8_ + auVar21._8_8_;
  auVar47._16_8_ = auVar54._16_8_ + auVar21._16_8_;
  auVar47._0_16_ = auVar45;
  auVar47._24_8_ = auVar54._24_8_ + auVar21._24_8_;
  auVar32 = vsubpd_avx(auVar21,auVar54);
  auVar27 = vshufpd_avx(auVar83,auVar83,1);
  auVar39._8_8_ = auVar41._0_8_;
  auVar39._0_8_ = auVar41._0_8_;
  auVar42._16_16_ = auVar39;
  auVar42._0_16_ = auVar39;
  auVar21 = vblendpd_avx(auVar42,ZEXT1632(auVar27),1);
  auVar19._8_8_ = 0;
  auVar19._0_8_ = dVar64;
  auVar71._16_16_ = auVar27;
  auVar71._0_16_ = auVar19;
  auVar22 = vblendpd_avx(ZEXT1632(CONCAT88(dVar77,dVar77)),auVar71,0xc);
  auVar43._0_8_ = auVar21._0_8_ + auVar22._0_8_;
  auVar43._8_8_ = auVar21._8_8_ + auVar22._8_8_;
  auVar43._16_8_ = auVar21._16_8_ + auVar22._16_8_;
  auVar43._24_8_ = auVar21._24_8_ + auVar22._24_8_;
  auVar63._8_8_ = __real_3ff0000000000000;
  auVar63._0_8_ = __real_3ff0000000000000;
  auVar63._16_8_ = __real_3ff0000000000000;
  auVar63._24_8_ = __real_3ff0000000000000;
  auVar22 = vsubpd_avx(auVar63,auVar43);
  dVar50 = auVar22._0_8_;
  dVar77 = *(double *)(param_1 + 0xc0 + lVar12 * 0x18);
  dVar65 = *(double *)(param_1 + 0xd0 + lVar12 * 0x18);
  auVar21 = vperm2f128_avx(auVar32,auVar32,0x11);
  auVar89 = ZEXT816(0) << 0x40;
  auVar27 = vmovhpd_avx(auVar89,*(undefined8 *)(param_1 + 200 + lVar12 * 0x18));
  dVar57 = auVar27._0_8_;
  dVar49 = auVar27._8_8_;
  auVar27 = vshufpd_avx(auVar45,auVar45,3);
  auVar84._0_8_ = auVar27._0_8_ * 0.0 + dVar57 * auVar21._0_8_ + dVar77 * dVar50;
  auVar84._8_8_ = auVar27._8_8_ * 0.0 + dVar49 * auVar21._0_8_ + dVar50 * 0.0;
  auVar88._16_8_ = auVar27._0_8_ * dVar65 + auVar21._16_8_ * 0.0 + dVar50 * 0.0;
  auVar88._0_16_ = auVar84;
  auVar88._24_8_ = auVar27._8_8_ * 0.0 + auVar21._16_8_ * 0.0 + dVar50 * 0.0;
  auVar21 = vperm2f128_avx(auVar47,auVar47,0x11);
  auVar61 = auVar22._0_16_;
  auVar27 = vshufpd_avx(auVar61,auVar61,3);
  dVar50 = auVar32._0_8_;
  auVar68._0_8_ = dVar50 * 0.0 + dVar57 * auVar27._0_8_ + dVar77 * auVar21._0_8_;
  auVar68._8_8_ = dVar50 * 0.0 + dVar49 * auVar27._8_8_ + auVar21._0_8_ * 0.0;
  auVar72._16_8_ = dVar50 * dVar65 + auVar27._0_8_ * 0.0 + auVar21._16_8_ * 0.0;
  auVar72._0_16_ = auVar68;
  auVar72._24_8_ = dVar50 * 0.0 + auVar27._8_8_ * 0.0 + auVar21._16_8_ * 0.0;
  auVar52 = auVar32._0_16_;
  auVar27 = vshufpd_avx(auVar52,auVar52,3);
  auVar21 = vperm2f128_avx(auVar22,auVar22,0x11);
  auVar30._0_8_ = dVar77 * auVar27._0_8_ + dVar57 * auVar45._0_8_ + auVar21._0_8_ * 0.0;
  auVar30._8_8_ = auVar27._8_8_ * 0.0 + dVar49 * auVar45._0_8_ + auVar21._0_8_ * 0.0;
  auVar34._16_8_ = auVar27._0_8_ * 0.0 + auVar45._0_8_ * 0.0 + auVar21._16_8_ * dVar65;
  auVar34._0_16_ = auVar30;
  auVar34._24_8_ = auVar27._8_8_ * 0.0 + auVar45._0_8_ * 0.0 + auVar21._16_8_ * 0.0;
  auVar78 = vunpcklpd_avx(auVar61,auVar47._16_16_);
  auVar27 = vshufpd_avx(auVar52,auVar52,1);
  auVar110._16_16_ = auVar27;
  auVar110._0_16_ = auVar19;
  auVar21 = vblendpd_avx(ZEXT1632(auVar78),auVar110,0xc);
  dVar49 = auVar21._0_8_;
  dVar55 = auVar21._8_8_;
  dVar56 = auVar21._16_8_;
  dVar100 = auVar21._24_8_;
  auVar78 = vshufpd_avx(auVar84,auVar84,3);
  auVar27 = vblendpd_avx(auVar61,auVar32._16_16_,1);
  dVar101 = auVar27._0_8_;
  dVar107 = auVar27._8_8_;
  auVar32 = vperm2f128_avx(auVar88,auVar88,0x11);
  auVar27 = vshufpd_avx(auVar45,auVar52,1);
  auVar21 = vblendpd_avx(auVar22,ZEXT1632(auVar27),3);
  dVar77 = auVar21._0_8_;
  dVar65 = auVar21._8_8_;
  dVar50 = auVar21._16_8_;
  dVar57 = auVar21._24_8_;
  auVar46._0_8_ = dVar49 * auVar84._0_8_ + dVar101 * auVar78._0_8_ + dVar77 * auVar32._0_8_;
  auVar46._8_8_ = dVar55 * auVar84._0_8_ + dVar107 * auVar78._8_8_ + dVar65 * auVar32._0_8_;
  auVar48._16_8_ = dVar56 * auVar84._0_8_ + auVar45._0_8_ * auVar78._0_8_ + dVar50 * auVar32._16_8_;
  auVar48._0_16_ = auVar46;
  auVar48._24_8_ = dVar100 * auVar84._0_8_ + auVar45._8_8_ * auVar78._8_8_ + dVar57 * auVar32._16_8_
  ;
  auVar27 = vshufpd_avx(auVar68,auVar68,3);
  auVar21 = vperm2f128_avx(auVar72,auVar72,0x11);
  auVar69._0_8_ = dVar77 * auVar21._0_8_ + dVar101 * auVar27._0_8_ + dVar49 * auVar68._0_8_;
  auVar69._8_8_ = dVar65 * auVar21._0_8_ + dVar107 * auVar27._8_8_ + dVar55 * auVar68._0_8_;
  auVar73._16_8_ = dVar50 * auVar21._16_8_ + auVar45._0_8_ * auVar27._0_8_ + dVar56 * auVar68._0_8_;
  auVar73._0_16_ = auVar69;
  auVar73._24_8_ = dVar57 * auVar21._16_8_ + auVar45._8_8_ * auVar27._8_8_ + dVar100 * auVar68._0_8_
  ;
  auVar27 = vshufpd_avx(auVar30,auVar30,3);
  auVar21 = vperm2f128_avx(auVar34,auVar34,0x11);
  auVar31._0_8_ = dVar49 * auVar30._0_8_ + dVar101 * auVar27._0_8_ + dVar77 * auVar21._0_8_;
  auVar31._8_8_ = dVar55 * auVar30._0_8_ + dVar107 * auVar27._8_8_ + dVar65 * auVar21._0_8_;
  auVar35._16_8_ = dVar56 * auVar30._0_8_ + auVar45._0_8_ * auVar27._0_8_ + dVar50 * auVar21._16_8_;
  auVar35._0_16_ = auVar31;
  auVar35._24_8_ = dVar100 * auVar30._0_8_ + auVar45._8_8_ * auVar27._8_8_ + dVar57 * auVar21._16_8_
  ;
  *(undefined1 (*) [16])(lVar10 + 0x240) = auVar46;
  uVar2 = vmovlps_avx(auVar48._16_16_);
  *(undefined8 *)(lVar10 + 0x250) = uVar2;
  *(undefined8 *)(lVar10 + 600) = 0;
  *(undefined1 (*) [16])(lVar10 + 0x260) = auVar69;
  uVar2 = vmovlps_avx(auVar73._16_16_);
  *(undefined8 *)(lVar10 + 0x270) = uVar2;
  *(undefined8 *)(lVar10 + 0x278) = 0;
  *(undefined1 (*) [16])(lVar10 + 0x280) = auVar31;
  uVar2 = vmovlps_avx(auVar35._16_16_);
  *(undefined8 *)(lVar10 + 0x290) = uVar2;
  *(undefined1 (*) [16])(lVar10 + 0x2a8) = auVar89;
  *(undefined1 (*) [16])(lVar10 + 0x298) = auVar89;
  *(undefined8 *)(lVar10 + 0x2b8) = 0x3ff0000000000000;
  *param_11 = dVar64 + *param_11;
  dVar64 = dVar64 * (double)(int)(-(uint)(param_2 != 0) | 1);
  auVar20._0_8_ = dVar64 * *(double *)*param_8 + *(double *)(param_1 + 0x438);
  auVar20._8_8_ = dVar64 * *(double *)(*param_8 + 8) + *(double *)(param_1 + 0x440);
  auVar23._16_8_ = dVar64 * *(double *)(*param_8 + 0x10) + *(double *)(param_1 + 0x448);
  auVar23._0_16_ = auVar20;
  auVar23._24_8_ = dVar64 * 0.0 + 0.0;
  *(undefined1 (*) [16])(param_1 + 0x438) = auVar20;
  uVar2 = vmovlps_avx(auVar23._16_16_);
  *(undefined8 *)(param_1 + 0x448) = uVar2;
  return;
}

// ApplyRotationConstraintSoftDD_avx @ 1409feff0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyRotationConstraintSoftDD_avx
               (double *param_1,double param_2,double param_3,double param_4,byte param_5,
               undefined1 (*param_6) [24],double param_7,double param_8,double *param_9)

{
  undefined1 auVar1 [24];
  undefined1 auVar2 [24];
  undefined1 auVar3 [24];
  undefined1 auVar4 [24];
  undefined1 auVar5 [24];
  undefined1 auVar6 [24];
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar35;
  double dVar36;
  double dVar37;
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [32];
  undefined1 auVar48 [16];
  double dVar47;
  double dVar67;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar66;
  double dVar68;
  double dVar70;
  undefined1 auVar56 [32];
  double dVar69;
  double dVar71;
  undefined1 auVar58 [32];
  undefined1 auVar60 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  double dVar72;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [32];
  double dVar82;
  undefined1 auVar81 [32];
  double dVar83;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar92 [32];
  undefined1 auVar93 [32];
  undefined1 auVar94 [32];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  ulonglong uVar104;
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [32];
  double dVar111;
  double dVar112;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  double dVar120;
  undefined1 auVar118 [32];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar127 [32];
  undefined1 auVar128 [32];
  undefined1 auVar130 [32];
  undefined1 auVar131 [16];
  undefined1 auVar132 [32];
  undefined1 auVar133 [32];
  undefined1 auVar134 [32];
  undefined1 auVar135 [32];
  undefined1 auVar136 [32];
  double dVar139;
  undefined1 auVar138 [32];
  undefined1 auVar140 [16];
  undefined1 auVar141 [32];
  double dVar143;
  undefined1 auVar142 [32];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [32];
  undefined1 auVar147 [32];
  undefined1 auVar148 [16];
  undefined1 auVar149 [32];
  undefined1 auVar18 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar44 [32];
  undefined1 auVar45 [32];
  undefined1 auVar46 [32];
  undefined1 auVar57 [32];
  undefined1 auVar59 [32];
  undefined1 auVar61 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [32];
  undefined1 auVar80 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar95 [32];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar103 [32];
  undefined1 auVar119 [32];
  undefined1 auVar125 [32];
  undefined1 auVar126 [32];
  undefined1 auVar129 [32];
  undefined1 auVar137 [32];
  
  dVar82 = _UNK_150b54438;
  dVar72 = _UNK_150b54430;
  dVar139 = _UNK_150b54428;
  dVar120 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar112 = _UNK_150b54418;
  dVar111 = _UNK_150b54410;
  dVar37 = _UNK_150b54408;
  dVar36 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar35 = _UNK_15076c6f8;
  dVar23 = ___xmm_bff00000000000003ff0000000000000;
  auVar1 = *(undefined1 (*) [24])(param_1 + 0x48);
  dVar83 = *(double *)*param_6;
  auVar8._8_8_ = dVar83;
  auVar8._0_8_ = dVar83;
  auVar2 = *(undefined1 (*) [24])(param_1 + 0x4c);
  dVar7 = *(double *)(*param_6 + 8);
  auVar54._8_8_ = dVar7;
  auVar54._0_8_ = dVar7;
  auVar3 = *(undefined1 (*) [24])(param_1 + 0x50);
  dVar66 = *(double *)(*param_6 + 0x10);
  auVar76._8_8_ = dVar66;
  auVar76._0_8_ = dVar66;
  auVar4 = *(undefined1 (*) [24])(param_1 + 0x58);
  auVar5 = *(undefined1 (*) [24])(param_1 + 0x5c);
  auVar6 = *(undefined1 (*) [24])(param_1 + 0x60);
  auVar10 = vunpcklpd_avx(auVar8,auVar54);
  auVar8 = vblendpd_avx(auVar8,auVar76,1);
  auVar132._16_16_ = auVar8;
  auVar132._0_16_ = auVar10;
  dVar67 = auVar10._0_8_;
  auVar9._0_8_ = dVar67 * (auVar1._0_8_ * dVar83 + auVar2._0_8_ * dVar7 + auVar3._0_8_ * dVar66);
  dVar69 = auVar10._8_8_;
  auVar9._8_8_ = dVar69 * (auVar1._8_8_ * dVar83 + auVar2._8_8_ * dVar7 + auVar3._8_8_ * dVar66);
  dVar71 = auVar8._0_8_;
  auVar8 = vshufpd_avx(auVar9,auVar9,1);
  dVar47 = dVar71 * (auVar1._16_8_ * dVar83 + auVar2._16_8_ * dVar7 + auVar3._16_8_ * dVar66) +
           auVar9._0_8_ + auVar8._0_8_;
  auVar10._0_8_ = dVar67 * (auVar6._0_8_ * dVar66 + auVar5._0_8_ * dVar7 + dVar83 * auVar4._0_8_);
  auVar10._8_8_ = dVar69 * (auVar6._8_8_ * dVar66 + auVar5._8_8_ * dVar7 + dVar83 * auVar4._8_8_);
  auVar8 = vshufpd_avx(auVar10,auVar10,1);
  dVar83 = dVar71 * (auVar6._16_8_ * dVar66 + auVar5._16_8_ * dVar7 + dVar83 * auVar4._16_8_) +
           auVar10._0_8_ + auVar8._0_8_;
  dVar7 = 0.0;
  if (__real_3f1a36e2eb1c432d < param_4) {
    auVar132 = *(undefined1 (*) [32])(param_1 + 0x7c);
    auVar105._0_8_ =
         *(double *)*(undefined1 (*) [32])(param_1 + 0x7c) * param_1[0x26] +
         SUB168(*(undefined1 (*) [16])(param_1 + 0x7e),0) * param_1[0x28];
    auVar105._8_8_ =
         param_1[0x7d] * param_1[0x27] +
         SUB168(*(undefined1 (*) [16])(param_1 + 0x7e),8) * param_1[0x29];
    auVar8 = vshufpd_avx(auVar105,auVar105,1);
    auVar113._8_8_ = 0;
    auVar113._0_8_ = auVar105._0_8_ + auVar8._0_8_;
    auVar8 = vcmpsd_avx(ZEXT816(0),auVar113,2);
    auVar114._8_8_ = 0;
    auVar114._0_8_ = __real_3ff0000000000000;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = __real_bff0000000000000;
    auVar8 = vblendvpd_avx(auVar24,auVar114,auVar8);
    dVar7 = auVar8._0_8_;
    auVar133._0_8_ = param_1[0x26] * dVar7;
    auVar133._8_8_ = param_1[0x27] * dVar7;
    auVar133._16_8_ = param_1[0x28] * dVar7;
    auVar133._24_8_ = param_1[0x29] * dVar7;
    auVar17 = vsubpd_avx(auVar133,auVar132);
    auVar146._0_8_ =
         auVar132._0_8_ * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
    auVar146._8_8_ = auVar132._8_8_ * _UNK_150b543c8;
    auVar146._16_8_ = auVar132._16_8_ * _UNK_150b543d0;
    auVar146._24_8_ = auVar132._24_8_ * _UNK_150b543d8;
    auVar133 = vperm2f128_avx(auVar17,auVar17,0x11);
    auVar132 = vshufpd_avx(auVar133,auVar133,0xf);
    dVar70 = auVar17._0_8_;
    auVar27 = vperm2f128_avx(auVar146,auVar146,1);
    auVar16 = vshufpd_avx(auVar27,auVar27,5);
    auVar8 = vshufpd_avx(auVar17._0_16_,auVar17._0_16_,3);
    auVar17 = vshufpd_avx(auVar146,auVar146,5);
    dVar7 = ___ymm_00000000000000003ff00000000000003ff0000000000000bff0000000000000 *
            auVar17._0_8_ * auVar133._0_8_ +
            ___ymm_0000000000000000bff00000000000003ff00000000000003ff0000000000000 *
            auVar8._0_8_ * auVar27._0_8_ +
            auVar16._0_8_ * dVar70 * ___xmm_bff00000000000003ff0000000000000 +
            auVar146._0_8_ * auVar132._0_8_;
    dVar66 = _UNK_150b54588 * auVar17._8_8_ * auVar133._0_8_ +
             _UNK_150b54568 * auVar8._8_8_ * auVar27._8_8_ +
             auVar16._8_8_ * dVar70 * _UNK_15076c6f8 + auVar146._8_8_ * auVar132._8_8_;
    dVar68 = _UNK_150b54590 * auVar17._16_8_ * auVar133._16_8_ +
             _UNK_150b54570 * auVar8._0_8_ * auVar27._16_8_ +
             auVar16._16_8_ * dVar70 * ___xmm_bff00000000000003ff0000000000000 +
             auVar146._16_8_ * auVar132._16_8_;
    dVar70 = _UNK_150b54598 * auVar17._24_8_ * auVar133._16_8_ +
             _UNK_150b54578 * auVar8._8_8_ * auVar27._24_8_ +
             auVar16._24_8_ * dVar70 * _UNK_15076c6f8 + auVar146._24_8_ * auVar132._24_8_;
    auVar149._0_8_ = dVar7 + dVar7;
    auVar149._8_8_ = dVar66 + dVar66;
    auVar149._16_8_ = dVar68 + dVar68;
    auVar149._24_8_ = dVar70 + dVar70;
    auVar132 = *(undefined1 (*) [32])(param_1 + 0x80);
    auVar11._0_8_ =
         *(double *)*(undefined1 (*) [32])(param_1 + 0x80) * param_1[0x2a] +
         SUB168(*(undefined1 (*) [16])(param_1 + 0x82),0) * param_1[0x2c];
    auVar11._8_8_ =
         param_1[0x81] * param_1[0x2b] +
         SUB168(*(undefined1 (*) [16])(param_1 + 0x82),8) * param_1[0x2d];
    auVar8 = vshufpd_avx(auVar11,auVar11,1);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = auVar11._0_8_ + auVar8._0_8_;
    auVar8 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar12,2);
    auVar8 = vblendvpd_avx(auVar24,auVar114,auVar8);
    dVar7 = auVar8._0_8_;
    auVar16._0_8_ = param_1[0x2a] * dVar7;
    auVar16._8_8_ = param_1[0x2b] * dVar7;
    auVar16._16_8_ = param_1[0x2c] * dVar7;
    auVar16._24_8_ = param_1[0x2d] * dVar7;
    auVar17 = vsubpd_avx(auVar16,auVar132);
    auVar56._0_8_ =
         auVar132._0_8_ * ___ymm_3ff0000000000000bff0000000000000bff0000000000000bff0000000000000;
    auVar56._8_8_ = auVar132._8_8_ * _UNK_150b543c8;
    auVar56._16_8_ = auVar132._16_8_ * _UNK_150b543d0;
    auVar56._24_8_ = auVar132._24_8_ * _UNK_150b543d8;
    auVar133 = vperm2f128_avx(auVar17,auVar17,0x11);
    auVar132 = vshufpd_avx(auVar133,auVar133,0xf);
    dVar7 = auVar17._0_8_;
    auVar27 = vperm2f128_avx(auVar56,auVar56,1);
    auVar16 = vshufpd_avx(auVar27,auVar27,5);
    auVar8 = vshufpd_avx(auVar17._0_16_,auVar17._0_16_,3);
    auVar17 = vshufpd_avx(auVar56,auVar56,5);
    dVar66 = ___ymm_00000000000000003ff00000000000003ff0000000000000bff0000000000000 *
             auVar17._0_8_ * auVar133._0_8_ +
             ___ymm_0000000000000000bff00000000000003ff00000000000003ff0000000000000 *
             auVar27._0_8_ * auVar8._0_8_ +
             auVar56._0_8_ * auVar132._0_8_ +
             ___xmm_bff00000000000003ff0000000000000 * auVar16._0_8_ * dVar7;
    dVar68 = _UNK_150b54588 * auVar17._8_8_ * auVar133._0_8_ +
             _UNK_150b54568 * auVar27._8_8_ * auVar8._8_8_ +
             auVar56._8_8_ * auVar132._8_8_ + _UNK_15076c6f8 * auVar16._8_8_ * dVar7;
    dVar70 = _UNK_150b54590 * auVar17._16_8_ * auVar133._16_8_ +
             _UNK_150b54570 * auVar27._16_8_ * auVar8._0_8_ +
             auVar56._16_8_ * auVar132._16_8_ +
             ___xmm_bff00000000000003ff0000000000000 * auVar16._16_8_ * dVar7;
    dVar7 = _UNK_150b54598 * auVar17._24_8_ * auVar133._16_8_ +
            _UNK_150b54578 * auVar27._24_8_ * auVar8._8_8_ +
            auVar56._24_8_ * auVar132._24_8_ + _UNK_15076c6f8 * auVar16._24_8_ * dVar7;
    auVar17._0_8_ = dVar66 + dVar66;
    auVar17._8_8_ = dVar68 + dVar68;
    auVar17._16_8_ = dVar70 + dVar70;
    auVar17._24_8_ = dVar7 + dVar7;
    auVar132 = vsubpd_avx(auVar149,auVar17);
    auVar13._0_8_ = auVar132._0_8_ * dVar67;
    auVar13._8_8_ = auVar132._8_8_ * dVar69;
    auVar8 = vshufpd_avx(auVar13,auVar13,1);
    dVar7 = param_2 * param_8 + auVar132._16_8_ * dVar71 + auVar13._0_8_ + auVar8._0_8_;
    auVar132._24_8_ = 0;
    auVar132._0_24_ = *param_6;
  }
  dVar66 = dVar47 + dVar83;
  dVar67 = __real_3ff0000000000000;
  if ((param_5 & 1) != 0) {
    dVar67 = __real_3ff0000000000000 / dVar66;
  }
  dVar69 = dVar67 * param_3 * param_2 * param_2;
  param_2 = dVar67 * param_4 * param_2;
  dVar7 = (__real_3ff0000000000000 / (__real_3ff0000000000000 + dVar66 * (param_2 + dVar69))) *
          param_1[0x99] * ((dVar69 * param_7 - param_2 * dVar7) - *param_9);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = dVar7;
  if (0.0 < param_1[0x1e]) {
    dVar47 = dVar47 * dVar7;
    auVar48._0_8_ = auVar132._0_8_ * dVar47;
    auVar48._8_8_ = auVar132._8_8_ * dVar47;
    auVar57._16_8_ = auVar132._16_8_ * dVar47;
    auVar57._0_16_ = auVar48;
    auVar57._24_8_ = auVar132._24_8_ * dVar47;
    dVar47 = param_1[0x34];
    auVar115._8_8_ = 0;
    auVar115._0_8_ = param_1[0x37];
    auVar8 = vmovhps_avx(auVar115,param_1[0x36]);
    auVar121._8_8_ = 0;
    auVar121._0_8_ = param_1[0x35];
    auVar10 = vmovhps_avx(auVar121,param_1[0x34]);
    auVar9 = vshufpd_avx(auVar48,auVar48,3);
    auVar16 = vperm2f128_avx(auVar57,auVar57,0x11);
    dVar47 = dVar47 + (auVar16._0_8_ * auVar10._0_8_ *
                       ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
                      auVar9._0_8_ * param_1[0x36] *
                      ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
                      auVar8._0_8_ * auVar48._0_8_ * ___xmm_bff00000000000003ff0000000000000 +
                      dVar47 * 0.0) *
                      ___ymm_3fe00000000000003fe00000000000003fe00000000000003fe0000000000000;
    dVar67 = param_1[0x35] +
             (auVar16._0_8_ * auVar10._8_8_ * _UNK_150b54428 +
             auVar9._8_8_ * param_1[0x37] * _UNK_150b54408 +
             auVar8._8_8_ * auVar48._0_8_ * _UNK_15076c6f8 + param_1[0x35] * 0.0) * _UNK_150aa8f28;
    dVar69 = param_1[0x36] +
             (auVar16._16_8_ * auVar8._0_8_ * _UNK_150b54430 +
             auVar9._0_8_ * param_1[0x34] * _UNK_150b54410 +
             auVar10._0_8_ * auVar48._0_8_ * ___xmm_bff00000000000003ff0000000000000 +
             param_1[0x36] * 0.0) * _UNK_150aa8f30;
    dVar71 = param_1[0x37] +
             (auVar16._16_8_ * auVar8._8_8_ * _UNK_150b54438 +
             auVar9._8_8_ * param_1[0x35] * _UNK_150b54418 +
             auVar10._8_8_ * auVar48._0_8_ * _UNK_15076c6f8 + param_1[0x37] * 0.0) * _UNK_150aa8f38;
    auVar73._0_8_ = dVar69 * dVar69 + dVar47 * dVar47;
    auVar73._8_8_ = dVar71 * dVar71 + dVar67 * dVar67;
    auVar8 = vshufpd_avx(auVar73,auVar73,1);
    dVar66 = auVar8._0_8_ + auVar73._0_8_;
    auVar106._8_8_ = 0;
    auVar106._0_8_ = __real_3e45798ee2308c3a;
    auVar74._8_8_ = 0;
    auVar74._0_8_ = dVar66;
    auVar8 = vcmpsd_avx(auVar106,auVar74,6);
    uVar104 = ~auVar8._0_8_ & __real_ffffffffffffffff;
    dVar66 = __real_3ff0000000000000 / SQRT(dVar66);
    auVar122._0_8_ =
         (double)(uVar104 &
                 ((ulonglong)(dVar47 * dVar66) ^
                 ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000));
    auVar122._8_8_ = (double)(uVar104 & ((ulonglong)(dVar67 * dVar66) ^ _UNK_150b54548));
    auVar125._16_8_ = (double)(uVar104 & ((ulonglong)(dVar69 * dVar66) ^ _UNK_150b54550));
    auVar125._0_16_ = auVar122;
    auVar125._24_8_ = (double)(uVar104 & ((ulonglong)(dVar71 * dVar66) ^ _UNK_150b54558));
    auVar118._0_8_ =
         (double)((ulonglong)auVar122._0_8_ ^
                 ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
    auVar118._8_8_ = (double)((ulonglong)auVar122._8_8_ ^ _UNK_150b54548);
    auVar118._16_8_ = (double)((ulonglong)auVar125._16_8_ ^ _UNK_150b54550);
    auVar118._24_8_ = (double)((ulonglong)auVar125._24_8_ ^ _UNK_150b54558);
    *(undefined1 (*) [16])(param_1 + 0x34) = auVar122;
    *(undefined1 (*) [16])(param_1 + 0x36) = auVar118._16_16_;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = param_1[4];
    auVar8 = vmovhps_avx(auVar49,param_1[7]);
    auVar58._0_8_ = auVar118._0_8_ * SUB168(*(undefined1 (*) [16])(param_1 + 5),0);
    auVar58._8_8_ = auVar118._8_8_ * SUB168(*(undefined1 (*) [16])(param_1 + 5),8);
    auVar58._16_8_ = auVar118._16_8_ * auVar8._0_8_;
    auVar58._24_8_ = auVar118._24_8_ * auVar8._8_8_;
    auVar79._16_16_ = auVar122;
    auVar79._0_16_ = auVar122;
    auVar133 = vperm2f128_avx(auVar118,auVar118,0x11);
    auVar16 = vshufpd_avx(auVar79,auVar133,9);
    auVar134._0_8_ = param_1[4] * auVar16._0_8_;
    auVar134._8_8_ = param_1[5] * auVar16._8_8_;
    auVar134._16_8_ = param_1[6] * auVar16._16_8_;
    auVar134._24_8_ = param_1[7] * auVar16._24_8_;
    auVar16 = vsubpd_avx(auVar58,auVar134);
    auVar50._0_8_ = auVar16._0_8_ + auVar16._0_8_;
    auVar50._8_8_ = auVar16._8_8_ + auVar16._8_8_;
    auVar59._16_8_ = auVar16._16_8_ + auVar16._16_8_;
    auVar59._0_16_ = auVar50;
    auVar59._24_8_ = auVar16._24_8_ + auVar16._24_8_;
    auVar16 = vshufpd_avx(auVar133,auVar133,0xf);
    auVar141._16_16_ = auVar50;
    auVar141._0_16_ = auVar50;
    auVar17 = vshufpd_avx(auVar141,ZEXT1632(auVar59._16_16_),1);
    dVar67 = auVar16._0_8_;
    dVar69 = auVar16._8_8_;
    dVar71 = auVar16._16_8_;
    dVar68 = auVar16._24_8_;
    auVar147._0_8_ = auVar122._0_8_ * auVar50._0_8_;
    auVar147._8_8_ = auVar122._8_8_ * auVar50._8_8_;
    auVar147._16_8_ = auVar125._16_8_ * auVar59._16_8_;
    auVar147._24_8_ = auVar125._24_8_ * auVar59._24_8_;
    auVar16 = vshufpd_avx(auVar79,ZEXT1632(auVar125._16_16_),1);
    auVar60._0_8_ = auVar50._0_8_ * auVar16._0_8_;
    auVar60._8_8_ = auVar50._8_8_ * auVar16._8_8_;
    auVar60._16_8_ = auVar59._16_8_ * auVar16._16_8_;
    auVar60._24_8_ = auVar59._24_8_ * auVar16._24_8_;
    auVar16 = vperm2f128_avx(auVar147,auVar147,1);
    auVar16 = vshufpd_avx(auVar16,auVar147,4);
    auVar16 = vsubpd_avx(auVar60,auVar16);
    auVar51._0_8_ = param_1[0x2e] + param_1[4] + dVar67 * auVar17._0_8_ + auVar16._0_8_;
    auVar51._8_8_ = param_1[0x2f] + param_1[5] + dVar69 * auVar17._8_8_ + auVar16._8_8_;
    auVar61._16_8_ = param_1[0x30] + param_1[6] + dVar71 * auVar17._16_8_ + auVar16._16_8_;
    auVar61._0_16_ = auVar51;
    auVar61._24_8_ = dVar68 * auVar17._24_8_ + 0.0 + auVar16._24_8_ + 0.0;
    *(undefined1 (*) [16])(param_1 + 0x20) = auVar51;
    dVar66 = (double)vmovlps_avx(auVar61._16_16_);
    param_1[0x22] = dVar66;
    auVar9 = vshufps_avx(auVar122,auVar122,0x44);
    auVar144._8_8_ = 0;
    auVar144._0_8_ = param_1[1];
    auVar8 = vmovhpd_avx(auVar144,*param_1);
    auVar148._8_8_ = 0;
    auVar148._0_8_ = param_1[3];
    auVar10 = vmovhpd_avx(auVar148,param_1[2]);
    dVar70 = auVar9._0_8_;
    dVar143 = auVar9._8_8_;
    auVar9 = vshufps_avx(auVar122,auVar122,0xee);
    dVar66 = auVar9._0_8_;
    dVar47 = auVar9._8_8_;
    param_1[0x26] =
         auVar8._0_8_ * auVar133._0_8_ * dVar120 +
         param_1[2] * dVar66 * dVar36 + dVar67 * *param_1 + dVar70 * auVar10._0_8_ * dVar23;
    param_1[0x27] =
         auVar8._8_8_ * auVar133._0_8_ * dVar139 +
         param_1[3] * dVar47 * dVar37 + dVar69 * param_1[1] + dVar143 * auVar10._8_8_ * dVar35;
    param_1[0x28] =
         auVar10._0_8_ * auVar133._16_8_ * dVar72 +
         *param_1 * dVar66 * dVar111 + dVar71 * param_1[2] + dVar70 * auVar8._0_8_ * dVar23;
    param_1[0x29] =
         auVar10._8_8_ * auVar133._16_8_ * dVar82 +
         param_1[1] * dVar47 * dVar112 + dVar68 * param_1[3] + dVar143 * auVar8._8_8_ * dVar35;
    dVar23 = auVar118._0_8_ + auVar118._0_8_;
    dVar35 = auVar118._8_8_ + auVar118._8_8_;
    dVar36 = auVar118._16_8_ + auVar118._16_8_;
    dVar37 = auVar118._24_8_ + auVar118._24_8_;
    auVar62._0_8_ = dVar70 * dVar23;
    auVar62._8_8_ = dVar143 * dVar35;
    auVar62._16_8_ = dVar70 * dVar36;
    auVar62._24_8_ = dVar143 * dVar37;
    auVar75._0_8_ = dVar23 * dVar66;
    auVar75._8_8_ = dVar35 * dVar47;
    auVar80._16_8_ = dVar36 * dVar66;
    auVar80._0_16_ = auVar75;
    auVar80._24_8_ = dVar37 * dVar47;
    auVar27._0_8_ = dVar67 * dVar23;
    auVar27._8_8_ = dVar69 * dVar35;
    auVar27._16_8_ = dVar71 * dVar36;
    auVar27._24_8_ = dVar68 * dVar37;
    auVar16 = vperm2f128_avx(auVar80,auVar62,0x21);
    auVar16 = vshufpd_avx(auVar16,ZEXT1632(auVar62._16_16_),4);
    auVar84._0_8_ = auVar27._0_8_ + auVar16._0_8_;
    auVar84._8_8_ = auVar27._8_8_ + auVar16._8_8_;
    auVar90._16_8_ = auVar27._16_8_ + auVar16._16_8_;
    auVar90._0_16_ = auVar84;
    auVar90._24_8_ = auVar27._24_8_ + auVar16._24_8_;
    auVar133 = vsubpd_avx(auVar16,auVar27);
    auVar8 = vshufpd_avx(auVar75,auVar75,1);
    auVar52._8_8_ = auVar62._0_8_;
    auVar52._0_8_ = auVar62._0_8_;
    auVar63._16_16_ = auVar52;
    auVar63._0_16_ = auVar52;
    auVar16 = vblendpd_avx(auVar63,ZEXT1632(auVar8),1);
    auVar28._16_16_ = auVar8;
    auVar28._0_16_ = auVar14;
    auVar17 = vblendpd_avx(ZEXT1632(CONCAT88(auVar125._16_8_ * dVar36,auVar125._16_8_ * dVar36)),
                           auVar28,0xc);
    auVar29._0_8_ = auVar16._0_8_ + auVar17._0_8_;
    auVar29._8_8_ = auVar16._8_8_ + auVar17._8_8_;
    auVar29._16_8_ = auVar16._16_8_ + auVar17._16_8_;
    auVar29._24_8_ = auVar16._24_8_ + auVar17._24_8_;
    auVar43._8_8_ = __real_3ff0000000000000;
    auVar43._0_8_ = __real_3ff0000000000000;
    auVar43._16_8_ = __real_3ff0000000000000;
    auVar43._24_8_ = __real_3ff0000000000000;
    auVar17 = vsubpd_avx(auVar43,auVar29);
    dVar23 = auVar17._0_8_;
    dVar66 = param_1[0x18];
    dVar47 = param_1[0x1a];
    auVar16 = vperm2f128_avx(auVar133,auVar133,0x11);
    auVar9 = ZEXT816(0) << 0x40;
    auVar8 = vmovhpd_avx(auVar9,param_1[0x19]);
    dVar35 = auVar8._0_8_;
    dVar36 = auVar8._8_8_;
    auVar8 = vshufpd_avx(auVar84,auVar84,3);
    auVar123._0_8_ = auVar8._0_8_ * 0.0 + dVar35 * auVar16._0_8_ + dVar66 * dVar23;
    auVar123._8_8_ = auVar8._8_8_ * 0.0 + dVar36 * auVar16._0_8_ + dVar23 * 0.0;
    auVar126._16_8_ = dVar47 * auVar8._0_8_ + auVar16._16_8_ * 0.0 + dVar23 * 0.0;
    auVar126._0_16_ = auVar123;
    auVar126._24_8_ = auVar8._8_8_ * 0.0 + auVar16._16_8_ * 0.0 + dVar23 * 0.0;
    auVar16 = vperm2f128_avx(auVar90,auVar90,0x11);
    auVar76 = auVar17._0_16_;
    auVar8 = vshufpd_avx(auVar76,auVar76,3);
    dVar23 = auVar133._0_8_;
    auVar116._0_8_ = dVar23 * 0.0 + dVar66 * auVar16._0_8_ + dVar35 * auVar8._0_8_;
    auVar116._8_8_ = dVar23 * 0.0 + auVar16._0_8_ * 0.0 + dVar36 * auVar8._8_8_;
    auVar119._16_8_ = dVar47 * dVar23 + auVar16._16_8_ * 0.0 + auVar8._0_8_ * 0.0;
    auVar119._0_16_ = auVar116;
    auVar119._24_8_ = dVar23 * 0.0 + auVar16._16_8_ * 0.0 + auVar8._8_8_ * 0.0;
    auVar54 = auVar133._0_16_;
    auVar8 = vshufpd_avx(auVar54,auVar54,3);
    auVar16 = vperm2f128_avx(auVar17,auVar17,0x11);
    auVar25._0_8_ = dVar66 * auVar8._0_8_ + dVar35 * auVar84._0_8_ + auVar16._0_8_ * 0.0;
    auVar25._8_8_ = auVar8._8_8_ * 0.0 + dVar36 * auVar84._0_8_ + auVar16._0_8_ * 0.0;
    auVar30._16_8_ = auVar8._0_8_ * 0.0 + auVar84._0_8_ * 0.0 + dVar47 * auVar16._16_8_;
    auVar30._0_16_ = auVar25;
    auVar30._24_8_ = auVar8._8_8_ * 0.0 + auVar84._0_8_ * 0.0 + auVar16._16_8_ * 0.0;
    auVar10 = vunpcklpd_avx(auVar76,auVar90._16_16_);
    auVar8 = vshufpd_avx(auVar54,auVar54,1);
    auVar135._16_16_ = auVar8;
    auVar135._0_16_ = auVar14;
    auVar16 = vblendpd_avx(ZEXT1632(auVar10),auVar135,0xc);
    dVar36 = auVar16._0_8_;
    dVar37 = auVar16._8_8_;
    dVar111 = auVar16._16_8_;
    dVar112 = auVar16._24_8_;
    auVar10 = vshufpd_avx(auVar123,auVar123,3);
    auVar8 = vblendpd_avx(auVar76,auVar133._16_16_,1);
    dVar120 = auVar8._0_8_;
    dVar139 = auVar8._8_8_;
    auVar8 = vshufpd_avx(auVar84,auVar54,1);
    auVar133 = vperm2f128_avx(auVar126,auVar126,0x11);
    auVar16 = vblendpd_avx(auVar17,ZEXT1632(auVar8),3);
    dVar66 = auVar16._0_8_;
    dVar47 = auVar16._8_8_;
    dVar23 = auVar16._16_8_;
    dVar35 = auVar16._24_8_;
    auVar85._0_8_ = dVar66 * auVar133._0_8_ + dVar36 * auVar123._0_8_ + dVar120 * auVar10._0_8_;
    auVar85._8_8_ = dVar47 * auVar133._0_8_ + dVar37 * auVar123._0_8_ + dVar139 * auVar10._8_8_;
    auVar91._16_8_ =
         dVar23 * auVar133._16_8_ + dVar111 * auVar123._0_8_ + auVar84._0_8_ * auVar10._0_8_;
    auVar91._0_16_ = auVar85;
    auVar91._24_8_ =
         dVar35 * auVar133._16_8_ + dVar112 * auVar123._0_8_ + auVar84._8_8_ * auVar10._8_8_;
    auVar8 = vshufpd_avx(auVar116,auVar116,3);
    auVar16 = vperm2f128_avx(auVar119,auVar119,0x11);
    auVar53._0_8_ = dVar66 * auVar16._0_8_ + dVar36 * auVar116._0_8_ + dVar120 * auVar8._0_8_;
    auVar53._8_8_ = dVar47 * auVar16._0_8_ + dVar37 * auVar116._0_8_ + dVar139 * auVar8._8_8_;
    auVar64._16_8_ =
         dVar23 * auVar16._16_8_ + dVar111 * auVar116._0_8_ + auVar84._0_8_ * auVar8._0_8_;
    auVar64._0_16_ = auVar53;
    auVar64._24_8_ =
         dVar35 * auVar16._16_8_ + dVar112 * auVar116._0_8_ + auVar84._8_8_ * auVar8._8_8_;
    auVar8 = vshufpd_avx(auVar25,auVar25,3);
    auVar16 = vperm2f128_avx(auVar30,auVar30,0x11);
    auVar26._0_8_ = dVar66 * auVar16._0_8_ + dVar120 * auVar8._0_8_ + dVar36 * auVar25._0_8_;
    auVar26._8_8_ = dVar47 * auVar16._0_8_ + dVar139 * auVar8._8_8_ + dVar37 * auVar25._0_8_;
    auVar31._16_8_ =
         dVar23 * auVar16._16_8_ + auVar84._0_8_ * auVar8._0_8_ + dVar111 * auVar25._0_8_;
    auVar31._0_16_ = auVar26;
    auVar31._24_8_ =
         dVar35 * auVar16._16_8_ + auVar84._8_8_ * auVar8._8_8_ + dVar112 * auVar25._0_8_;
    *(undefined1 (*) [16])(param_1 + 0x48) = auVar85;
    dVar66 = (double)vmovlps_avx(auVar91._16_16_);
    param_1[0x4a] = dVar66;
    param_1[0x4b] = 0.0;
    *(undefined1 (*) [16])(param_1 + 0x4c) = auVar53;
    dVar66 = (double)vmovlpd_avx(auVar64._16_16_);
    param_1[0x4e] = dVar66;
    param_1[0x4f] = 0.0;
    *(undefined1 (*) [16])(param_1 + 0x50) = auVar26;
    dVar66 = (double)vmovlpd_avx(auVar31._16_16_);
    param_1[0x52] = dVar66;
    *(undefined1 (*) [16])(param_1 + 0x55) = auVar9;
    *(undefined1 (*) [16])(param_1 + 0x53) = auVar9;
    param_1[0x57] = 1.0;
  }
  dVar139 = _UNK_150b54438;
  dVar120 = _UNK_150b54430;
  dVar112 = _UNK_150b54428;
  dVar111 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar37 = _UNK_150b54418;
  dVar36 = _UNK_150b54410;
  dVar35 = _UNK_150b54408;
  dVar23 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar47 = _UNK_15076c6f8;
  dVar66 = ___xmm_bff00000000000003ff0000000000000;
  if (0.0 < param_1[0x1f]) {
    dVar83 = dVar7 * (double)((ulonglong)dVar83 ^ __xmm_80000000000000008000000000000000);
    auVar38._0_8_ = auVar132._0_8_ * dVar83;
    auVar38._8_8_ = auVar132._8_8_ * dVar83;
    auVar44._16_8_ = auVar132._16_8_ * dVar83;
    auVar44._0_16_ = auVar38;
    auVar44._24_8_ = auVar132._24_8_ * dVar83;
    dVar72 = param_1[0x38];
    auVar107._8_8_ = 0;
    auVar107._0_8_ = param_1[0x3b];
    auVar8 = vmovhps_avx(auVar107,param_1[0x3a]);
    auVar117._8_8_ = 0;
    auVar117._0_8_ = param_1[0x39];
    auVar10 = vmovhps_avx(auVar117,param_1[0x38]);
    auVar9 = vshufpd_avx(auVar38,auVar38,3);
    auVar132 = vperm2f128_avx(auVar44,auVar44,0x11);
    dVar72 = dVar72 + (auVar132._0_8_ * auVar10._0_8_ *
                       ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
                      auVar9._0_8_ * param_1[0x3a] *
                      ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
                      auVar8._0_8_ * auVar38._0_8_ * ___xmm_bff00000000000003ff0000000000000 +
                      dVar72 * 0.0) *
                      ___ymm_3fe00000000000003fe00000000000003fe00000000000003fe0000000000000;
    dVar82 = param_1[0x39] +
             (auVar132._0_8_ * auVar10._8_8_ * _UNK_150b54428 +
             auVar9._8_8_ * param_1[0x3b] * _UNK_150b54408 +
             auVar8._8_8_ * auVar38._0_8_ * _UNK_15076c6f8 + param_1[0x39] * 0.0) * _UNK_150aa8f28;
    dVar67 = param_1[0x3a] +
             (auVar132._16_8_ * auVar8._0_8_ * _UNK_150b54430 +
             auVar9._0_8_ * param_1[0x38] * _UNK_150b54410 +
             auVar10._0_8_ * auVar38._0_8_ * ___xmm_bff00000000000003ff0000000000000 +
             param_1[0x3a] * 0.0) * _UNK_150aa8f30;
    dVar69 = param_1[0x3b] +
             (auVar132._16_8_ * auVar8._8_8_ * _UNK_150b54438 +
             auVar9._8_8_ * param_1[0x39] * _UNK_150b54418 +
             auVar10._8_8_ * auVar38._0_8_ * _UNK_15076c6f8 + param_1[0x3b] * 0.0) * _UNK_150aa8f38;
    auVar86._0_8_ = dVar72 * dVar72 + dVar67 * dVar67;
    auVar86._8_8_ = dVar82 * dVar82 + dVar69 * dVar69;
    auVar8 = vshufpd_avx(auVar86,auVar86,1);
    dVar83 = auVar86._0_8_ + auVar8._0_8_;
    auVar96._8_8_ = 0;
    auVar96._0_8_ = __real_3e45798ee2308c3a;
    auVar87._8_8_ = 0;
    auVar87._0_8_ = dVar83;
    auVar8 = vcmpsd_avx(auVar96,auVar87,6);
    uVar104 = ~auVar8._0_8_ & __real_ffffffffffffffff;
    dVar83 = __real_3ff0000000000000 / SQRT(dVar83);
    auVar97._0_8_ =
         (double)(((ulonglong)(dVar72 * dVar83) ^
                  ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) & uVar104
                 );
    auVar97._8_8_ = (double)(((ulonglong)(dVar82 * dVar83) ^ _UNK_150b54548) & uVar104);
    auVar101._16_8_ = (double)(((ulonglong)(dVar67 * dVar83) ^ _UNK_150b54550) & uVar104);
    auVar101._0_16_ = auVar97;
    auVar101._24_8_ = (double)(((ulonglong)(dVar69 * dVar83) ^ _UNK_150b54558) & uVar104);
    auVar92._0_8_ =
         (double)((ulonglong)auVar97._0_8_ ^
                 ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
    auVar92._8_8_ = (double)((ulonglong)auVar97._8_8_ ^ _UNK_150b54548);
    auVar92._16_8_ = (double)((ulonglong)auVar101._16_8_ ^ _UNK_150b54550);
    auVar92._24_8_ = (double)((ulonglong)auVar101._24_8_ ^ _UNK_150b54558);
    *(undefined1 (*) [16])(param_1 + 0x38) = auVar97;
    *(undefined1 (*) [16])(param_1 + 0x3a) = auVar92._16_16_;
    auVar108._8_8_ = 0;
    auVar108._0_8_ = param_1[0x10];
    auVar8 = vmovhps_avx(auVar108,param_1[0x13]);
    auVar110._0_8_ = SUB168(*(undefined1 (*) [16])(param_1 + 0x11),0) * auVar92._0_8_;
    auVar110._8_8_ = SUB168(*(undefined1 (*) [16])(param_1 + 0x11),8) * auVar92._8_8_;
    auVar110._16_8_ = auVar8._0_8_ * auVar92._16_8_;
    auVar110._24_8_ = auVar8._8_8_ * auVar92._24_8_;
    auVar127._16_16_ = auVar97;
    auVar127._0_16_ = auVar97;
    auVar17 = vperm2f128_avx(auVar92,auVar92,0x11);
    auVar132 = vshufpd_avx(auVar127,auVar17,9);
    auVar136._0_8_ = param_1[0x10] * auVar132._0_8_;
    auVar136._8_8_ = param_1[0x11] * auVar132._8_8_;
    auVar136._16_8_ = param_1[0x12] * auVar132._16_8_;
    auVar136._24_8_ = param_1[0x13] * auVar132._24_8_;
    auVar132 = vsubpd_avx(auVar110,auVar136);
    auVar131._0_8_ = auVar132._0_8_ + auVar132._0_8_;
    auVar131._8_8_ = auVar132._8_8_ + auVar132._8_8_;
    auVar137._16_8_ = auVar132._16_8_ + auVar132._16_8_;
    auVar137._0_16_ = auVar131;
    auVar137._24_8_ = auVar132._24_8_ + auVar132._24_8_;
    auVar132 = vshufpd_avx(auVar17,auVar17,0xf);
    auVar138._16_16_ = auVar131;
    auVar138._0_16_ = auVar131;
    auVar16 = vshufpd_avx(auVar138,ZEXT1632(auVar137._16_16_),1);
    dVar69 = auVar132._0_8_;
    dVar71 = auVar132._8_8_;
    dVar68 = auVar132._16_8_;
    dVar70 = auVar132._24_8_;
    auVar142._0_8_ = auVar131._0_8_ * auVar97._0_8_;
    auVar142._8_8_ = auVar131._8_8_ * auVar97._8_8_;
    auVar142._16_8_ = auVar137._16_8_ * auVar101._16_8_;
    auVar142._24_8_ = auVar137._24_8_ * auVar101._24_8_;
    auVar132 = vshufpd_avx(auVar127,ZEXT1632(auVar101._16_16_),1);
    auVar128._0_8_ = auVar131._0_8_ * auVar132._0_8_;
    auVar128._8_8_ = auVar131._8_8_ * auVar132._8_8_;
    auVar128._16_8_ = auVar137._16_8_ * auVar132._16_8_;
    auVar128._24_8_ = auVar137._24_8_ * auVar132._24_8_;
    auVar132 = vperm2f128_avx(auVar142,auVar142,1);
    auVar132 = vshufpd_avx(auVar132,auVar142,4);
    auVar132 = vsubpd_avx(auVar128,auVar132);
    auVar124._0_8_ = param_1[0x31] + param_1[0x10] + dVar69 * auVar16._0_8_ + auVar132._0_8_;
    auVar124._8_8_ = param_1[0x32] + param_1[0x11] + dVar71 * auVar16._8_8_ + auVar132._8_8_;
    auVar129._16_8_ = param_1[0x33] + param_1[0x12] + dVar68 * auVar16._16_8_ + auVar132._16_8_;
    auVar129._0_16_ = auVar124;
    auVar129._24_8_ = dVar70 * auVar16._24_8_ + 0.0 + auVar132._24_8_ + 0.0;
    *(undefined1 (*) [16])(param_1 + 0x23) = auVar124;
    dVar83 = (double)vmovlps_avx(auVar129._16_16_);
    param_1[0x25] = dVar83;
    auVar9 = vshufps_avx(auVar97,auVar97,0x44);
    auVar140._8_8_ = 0;
    auVar140._0_8_ = param_1[0xd];
    auVar8 = vmovhpd_avx(auVar140,param_1[0xc]);
    auVar145._8_8_ = 0;
    auVar145._0_8_ = param_1[0xf];
    auVar10 = vmovhpd_avx(auVar145,param_1[0xe]);
    dVar83 = auVar9._0_8_;
    dVar82 = auVar9._8_8_;
    auVar9 = vshufps_avx(auVar97,auVar97,0xee);
    dVar72 = auVar9._0_8_;
    dVar67 = auVar9._8_8_;
    param_1[0x2a] =
         auVar8._0_8_ * auVar17._0_8_ * dVar111 +
         param_1[0xe] * dVar72 * dVar23 + param_1[0xc] * dVar69 + auVar10._0_8_ * dVar83 * dVar66;
    param_1[0x2b] =
         auVar8._8_8_ * auVar17._0_8_ * dVar112 +
         param_1[0xf] * dVar67 * dVar35 + param_1[0xd] * dVar71 + auVar10._8_8_ * dVar82 * dVar47;
    param_1[0x2c] =
         auVar10._0_8_ * auVar17._16_8_ * dVar120 +
         param_1[0xc] * dVar72 * dVar36 + param_1[0xe] * dVar68 + auVar8._0_8_ * dVar83 * dVar66;
    param_1[0x2d] =
         auVar10._8_8_ * auVar17._16_8_ * dVar139 +
         param_1[0xd] * dVar67 * dVar37 + param_1[0xf] * dVar70 + auVar8._8_8_ * dVar82 * dVar47;
    dVar66 = auVar92._0_8_ + auVar92._0_8_;
    dVar47 = auVar92._8_8_ + auVar92._8_8_;
    dVar23 = auVar92._16_8_ + auVar92._16_8_;
    dVar35 = auVar92._24_8_ + auVar92._24_8_;
    auVar93._0_8_ = dVar83 * dVar66;
    auVar93._8_8_ = dVar82 * dVar47;
    auVar93._16_8_ = dVar83 * dVar23;
    auVar93._24_8_ = dVar82 * dVar35;
    auVar98._0_8_ = dVar66 * dVar72;
    auVar98._8_8_ = dVar47 * dVar67;
    auVar102._16_8_ = dVar23 * dVar72;
    auVar102._0_16_ = auVar98;
    auVar102._24_8_ = dVar35 * dVar67;
    auVar32._0_8_ = dVar69 * dVar66;
    auVar32._8_8_ = dVar71 * dVar47;
    auVar32._16_8_ = dVar68 * dVar23;
    auVar32._24_8_ = dVar70 * dVar35;
    auVar132 = vperm2f128_avx(auVar102,auVar93,0x21);
    auVar132 = vshufpd_avx(auVar132,ZEXT1632(auVar93._16_16_),4);
    auVar39._0_8_ = auVar32._0_8_ + auVar132._0_8_;
    auVar39._8_8_ = auVar32._8_8_ + auVar132._8_8_;
    auVar45._16_8_ = auVar32._16_8_ + auVar132._16_8_;
    auVar45._0_16_ = auVar39;
    auVar45._24_8_ = auVar32._24_8_ + auVar132._24_8_;
    auVar17 = vsubpd_avx(auVar132,auVar32);
    auVar8 = vshufpd_avx(auVar98,auVar98,1);
    auVar88._8_8_ = auVar93._0_8_;
    auVar88._0_8_ = auVar93._0_8_;
    auVar94._16_16_ = auVar88;
    auVar94._0_16_ = auVar88;
    auVar132 = vblendpd_avx(auVar94,ZEXT1632(auVar8),1);
    auVar33._16_16_ = auVar8;
    auVar33._0_16_ = auVar14;
    auVar16 = vblendpd_avx(ZEXT1632(CONCAT88(auVar101._16_8_ * dVar23,auVar101._16_8_ * dVar23)),
                           auVar33,0xc);
    auVar34._0_8_ = auVar132._0_8_ + auVar16._0_8_;
    auVar34._8_8_ = auVar132._8_8_ + auVar16._8_8_;
    auVar34._16_8_ = auVar132._16_8_ + auVar16._16_8_;
    auVar34._24_8_ = auVar132._24_8_ + auVar16._24_8_;
    auVar81._8_8_ = __real_3ff0000000000000;
    auVar81._0_8_ = __real_3ff0000000000000;
    auVar81._16_8_ = __real_3ff0000000000000;
    auVar81._24_8_ = __real_3ff0000000000000;
    auVar16 = vsubpd_avx(auVar81,auVar34);
    dVar47 = auVar16._0_8_;
    dVar83 = param_1[0x1b];
    dVar66 = param_1[0x1d];
    auVar132 = vperm2f128_avx(auVar17,auVar17,0x11);
    auVar9 = ZEXT816(0) << 0x40;
    auVar8 = vmovhpd_avx(auVar9,param_1[0x1c]);
    dVar23 = auVar8._0_8_;
    dVar35 = auVar8._8_8_;
    auVar8 = vshufpd_avx(auVar39,auVar39,3);
    auVar99._0_8_ = auVar8._0_8_ * 0.0 + dVar23 * auVar132._0_8_ + dVar83 * dVar47;
    auVar99._8_8_ = auVar8._8_8_ * 0.0 + dVar35 * auVar132._0_8_ + dVar47 * 0.0;
    auVar103._16_8_ = auVar8._0_8_ * dVar66 + auVar132._16_8_ * 0.0 + dVar47 * 0.0;
    auVar103._0_16_ = auVar99;
    auVar103._24_8_ = auVar8._8_8_ * 0.0 + auVar132._16_8_ * 0.0 + dVar47 * 0.0;
    auVar132 = vperm2f128_avx(auVar45,auVar45,0x11);
    auVar76 = auVar16._0_16_;
    auVar8 = vshufpd_avx(auVar76,auVar76,3);
    dVar47 = auVar17._0_8_;
    auVar89._0_8_ = dVar47 * 0.0 + dVar23 * auVar8._0_8_ + dVar83 * auVar132._0_8_;
    auVar89._8_8_ = dVar47 * 0.0 + dVar35 * auVar8._8_8_ + auVar132._0_8_ * 0.0;
    auVar95._16_8_ = dVar47 * dVar66 + auVar8._0_8_ * 0.0 + auVar132._16_8_ * 0.0;
    auVar95._0_16_ = auVar89;
    auVar95._24_8_ = dVar47 * 0.0 + auVar8._8_8_ * 0.0 + auVar132._16_8_ * 0.0;
    auVar54 = auVar17._0_16_;
    auVar8 = vshufpd_avx(auVar54,auVar54,3);
    auVar132 = vperm2f128_avx(auVar16,auVar16,0x11);
    auVar19._0_8_ = dVar83 * auVar8._0_8_ + dVar23 * auVar39._0_8_ + auVar132._0_8_ * 0.0;
    auVar19._8_8_ = auVar8._8_8_ * 0.0 + dVar35 * auVar39._0_8_ + auVar132._0_8_ * 0.0;
    auVar21._16_8_ = auVar8._0_8_ * 0.0 + auVar39._0_8_ * 0.0 + auVar132._16_8_ * dVar66;
    auVar21._0_16_ = auVar19;
    auVar21._24_8_ = auVar8._8_8_ * 0.0 + auVar39._0_8_ * 0.0 + auVar132._16_8_ * 0.0;
    auVar10 = vunpcklpd_avx(auVar76,auVar45._16_16_);
    auVar8 = vshufpd_avx(auVar54,auVar54,1);
    auVar130._16_16_ = auVar8;
    auVar130._0_16_ = auVar14;
    auVar132 = vblendpd_avx(ZEXT1632(auVar10),auVar130,0xc);
    dVar35 = auVar132._0_8_;
    dVar36 = auVar132._8_8_;
    dVar37 = auVar132._16_8_;
    dVar111 = auVar132._24_8_;
    auVar10 = vshufpd_avx(auVar99,auVar99,3);
    auVar8 = vblendpd_avx(auVar76,auVar17._16_16_,1);
    dVar112 = auVar8._0_8_;
    dVar120 = auVar8._8_8_;
    auVar8 = vshufpd_avx(auVar39,auVar54,1);
    auVar17 = vperm2f128_avx(auVar103,auVar103,0x11);
    auVar132 = vblendpd_avx(auVar16,ZEXT1632(auVar8),3);
    dVar83 = auVar132._0_8_;
    dVar66 = auVar132._8_8_;
    dVar47 = auVar132._16_8_;
    dVar23 = auVar132._24_8_;
    auVar40._0_8_ = dVar35 * auVar99._0_8_ + dVar112 * auVar10._0_8_ + dVar83 * auVar17._0_8_;
    auVar40._8_8_ = dVar36 * auVar99._0_8_ + dVar120 * auVar10._8_8_ + dVar66 * auVar17._0_8_;
    auVar46._16_8_ =
         dVar37 * auVar99._0_8_ + auVar39._0_8_ * auVar10._0_8_ + dVar47 * auVar17._16_8_;
    auVar46._0_16_ = auVar40;
    auVar46._24_8_ =
         dVar111 * auVar99._0_8_ + auVar39._8_8_ * auVar10._8_8_ + dVar23 * auVar17._16_8_;
    auVar8 = vshufpd_avx(auVar89,auVar89,3);
    auVar132 = vperm2f128_avx(auVar95,auVar95,0x11);
    auVar55._0_8_ = dVar83 * auVar132._0_8_ + dVar35 * auVar89._0_8_ + dVar112 * auVar8._0_8_;
    auVar55._8_8_ = dVar66 * auVar132._0_8_ + dVar36 * auVar89._0_8_ + dVar120 * auVar8._8_8_;
    auVar65._16_8_ =
         dVar47 * auVar132._16_8_ + dVar37 * auVar89._0_8_ + auVar39._0_8_ * auVar8._0_8_;
    auVar65._0_16_ = auVar55;
    auVar65._24_8_ =
         dVar23 * auVar132._16_8_ + dVar111 * auVar89._0_8_ + auVar39._8_8_ * auVar8._8_8_;
    auVar8 = vshufpd_avx(auVar19,auVar19,3);
    auVar132 = vperm2f128_avx(auVar21,auVar21,0x11);
    auVar20._0_8_ = dVar83 * auVar132._0_8_ + dVar35 * auVar19._0_8_ + dVar112 * auVar8._0_8_;
    auVar20._8_8_ = dVar66 * auVar132._0_8_ + dVar36 * auVar19._0_8_ + dVar120 * auVar8._8_8_;
    auVar22._16_8_ =
         dVar47 * auVar132._16_8_ + dVar37 * auVar19._0_8_ + auVar39._0_8_ * auVar8._0_8_;
    auVar22._0_16_ = auVar20;
    auVar22._24_8_ =
         dVar23 * auVar132._16_8_ + dVar111 * auVar19._0_8_ + auVar39._8_8_ * auVar8._8_8_;
    *(undefined1 (*) [16])(param_1 + 0x58) = auVar40;
    dVar83 = (double)vmovlps_avx(auVar46._16_16_);
    param_1[0x5a] = dVar83;
    param_1[0x5b] = 0.0;
    *(undefined1 (*) [16])(param_1 + 0x5c) = auVar55;
    dVar83 = (double)vmovlpd_avx(auVar65._16_16_);
    param_1[0x5e] = dVar83;
    param_1[0x5f] = 0.0;
    *(undefined1 (*) [16])(param_1 + 0x60) = auVar20;
    dVar83 = (double)vmovlpd_avx(auVar22._16_16_);
    param_1[0x62] = dVar83;
    *(undefined1 (*) [16])(param_1 + 0x65) = auVar9;
    *(undefined1 (*) [16])(param_1 + 99) = auVar9;
    param_1[0x67] = 1.0;
  }
  auVar77._0_8_ = param_1[0x38] * param_1[0x34] + param_1[0x3a] * param_1[0x36];
  auVar77._8_8_ = param_1[0x39] * param_1[0x35] + param_1[0x3b] * param_1[0x37];
  auVar8 = vshufpd_avx(auVar77,auVar77,1);
  auVar78._8_8_ = 0;
  auVar78._0_8_ = auVar77._0_8_ + auVar8._0_8_;
  auVar8 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar78,2);
  auVar100._8_8_ = 0;
  auVar100._0_8_ = __real_3ff0000000000000;
  auVar109._8_8_ = 0;
  auVar109._0_8_ = __real_bff0000000000000;
  auVar8 = vblendvpd_avx(auVar109,auVar100,auVar8);
  dVar83 = auVar8._0_8_;
  param_1[0x38] = param_1[0x38] * dVar83;
  param_1[0x39] = param_1[0x39] * dVar83;
  param_1[0x3a] = param_1[0x3a] * dVar83;
  param_1[0x3b] = param_1[0x3b] * dVar83;
  auVar41._0_8_ = param_1[0x2a] * param_1[0x26] + param_1[0x2c] * param_1[0x28];
  auVar41._8_8_ = param_1[0x2b] * param_1[0x27] + param_1[0x2d] * param_1[0x29];
  auVar8 = vshufpd_avx(auVar41,auVar41,1);
  auVar42._8_8_ = 0;
  auVar42._0_8_ = auVar41._0_8_ + auVar8._0_8_;
  auVar8 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar42,2);
  auVar8 = vblendvpd_avx(auVar109,auVar100,auVar8);
  dVar83 = auVar8._0_8_;
  param_1[0x2a] = param_1[0x2a] * dVar83;
  param_1[0x2b] = param_1[0x2b] * dVar83;
  param_1[0x2c] = param_1[0x2c] * dVar83;
  param_1[0x2d] = param_1[0x2d] * dVar83;
  *param_9 = dVar7 + *param_9;
  auVar15._0_8_ = dVar7 * *(double *)*param_6 + param_1[0x87];
  auVar15._8_8_ = dVar7 * *(double *)(*param_6 + 8) + param_1[0x88];
  auVar18._16_8_ = dVar7 * *(double *)(*param_6 + 0x10) + param_1[0x89];
  auVar18._0_16_ = auVar15;
  auVar18._24_8_ = dVar7 * 0.0 + 0.0;
  *(undefined1 (*) [16])(param_1 + 0x87) = auVar15;
  dVar83 = (double)vmovlps_avx(auVar18._16_16_);
  param_1[0x89] = dVar83;
  return;
}

// ApplyPointPositionConstraintKD_avx @ 140a00000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPointPositionConstraintKD_avx
               (longlong param_1,int param_2,int param_3,double *param_4,double param_5)

{
  double *pdVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  ulonglong *puVar4;
  undefined8 uVar5;
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auVar20 [16];
  double dVar36;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar33 [32];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [32];
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [32];
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auVar53 [32];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [32];
  undefined1 auVar61 [32];
  undefined1 auVar62 [32];
  undefined1 auVar63 [32];
  undefined1 auVar64 [32];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [32];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined1 auVar73 [32];
  undefined1 auVar74 [32];
  undefined1 auVar75 [32];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined1 auVar79 [32];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  double dVar95;
  undefined1 auVar87 [32];
  undefined1 auVar88 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar91 [32];
  undefined1 auVar93 [32];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  double dVar105;
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [32];
  undefined1 auVar102 [32];
  undefined1 auVar104 [32];
  double dVar106;
  undefined1 auVar107 [16];
  double dVar114;
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  double dVar115;
  double dVar116;
  undefined1 auVar112 [32];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  ulonglong uVar117;
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
  double dVar127;
  undefined1 auVar129 [16];
  double dVar128;
  ulonglong uVar138;
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  ulonglong uVar139;
  undefined1 auVar133 [32];
  ulonglong uVar140;
  undefined1 auVar134 [32];
  undefined1 auVar136 [32];
  double dVar141;
  double dVar149;
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar145 [32];
  undefined1 auVar146 [32];
  undefined1 auVar147 [32];
  undefined1 auVar148 [32];
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [32];
  undefined1 auVar154 [32];
  undefined1 auVar155 [32];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  double local_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  undefined1 auVar32 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar45 [32];
  undefined1 auVar54 [32];
  undefined1 auVar55 [32];
  undefined1 auVar78 [32];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auVar92 [32];
  undefined1 auVar94 [32];
  undefined1 auVar103 [32];
  undefined1 auVar111 [32];
  undefined1 auVar113 [32];
  undefined1 auVar126 [32];
  undefined1 auVar135 [32];
  undefined1 auVar137 [32];
  undefined1 auVar144 [32];
  undefined1 auVar153 [32];
  
  lVar18 = (longlong)param_3;
  uVar117 = *(ulonglong *)(param_1 + 0x110 + lVar18 * 0x18);
  auVar56._8_8_ = 0;
  auVar56._0_8_ = uVar117;
  auVar25._16_8_ = uVar117;
  auVar25._0_16_ = *(undefined1 (*) [16])(param_1 + 0x100 + lVar18 * 0x18);
  auVar25._24_8_ = 0;
  uVar138 = *(ulonglong *)(param_1 + 0x180 + lVar18 * 0x18);
  auVar38._8_8_ = 0;
  auVar38._0_8_ = uVar138;
  auVar155._16_8_ = uVar138;
  auVar155._0_16_ = *(undefined1 (*) [16])(param_1 + 0x170 + lVar18 * 0x18);
  auVar155._24_8_ = 0;
  auVar25 = vsubpd_avx(auVar25,auVar155);
  auVar20 = auVar25._0_16_;
  auVar66 = vshufpd_avx(auVar20,auVar20,1);
  auVar38 = vsubpd_avx(auVar56,auVar38);
  lVar17 = lVar18 * 0x80;
  dVar127 = auVar38._0_8_;
  auVar96._0_8_ = (ulonglong)dVar127 ^ __real_8000000000000000;
  auVar96._8_8_ = auVar38._8_8_ ^ __real_8000000000000000;
  auVar65._0_8_ = (double)(auVar66._0_8_ ^ __real_8000000000000000);
  auVar65._8_8_ = (double)(auVar66._8_8_ ^ __real_8000000000000000);
  dVar128 = *(double *)(param_1 + 0x260 + lVar17);
  auVar82._8_8_ = 0;
  auVar82._0_8_ = dVar128;
  dVar105 = *(double *)(param_1 + 0x268 + lVar17);
  auVar159._8_8_ = 0;
  auVar159._0_8_ = dVar105;
  dVar115 = *(double *)(param_1 + 0x288 + lVar17);
  auVar156._8_8_ = dVar115;
  auVar156._0_8_ = dVar115;
  auVar21._0_8_ = auVar25._0_8_;
  auVar37._0_8_ = (ulonglong)auVar21._0_8_ ^ __real_8000000000000000;
  dVar36 = auVar25._8_8_;
  auVar37._8_8_ = (ulonglong)dVar36 ^ __real_8000000000000000;
  dVar116 = *(double *)(param_1 + 0x290 + lVar17);
  auVar57._8_8_ = dVar116;
  auVar57._0_8_ = dVar116;
  auVar25 = vperm2f128_avx(auVar25,auVar25,0x11);
  dVar114 = auVar25._0_8_;
  dVar95 = auVar25._16_8_;
  auVar66 = vunpcklpd_avx(auVar159,auVar82);
  auVar123._0_8_ = dVar114 * auVar66._0_8_;
  auVar123._8_8_ = dVar114 * auVar66._8_8_;
  auVar123._16_8_ = dVar95 * dVar128;
  auVar123._24_8_ = dVar95 * 0.0;
  auVar66 = vshufpd_avx(auVar20,auVar20,3);
  dVar106 = *(double *)(param_1 + 0x280 + lVar17);
  auVar107._8_8_ = dVar106;
  auVar107._0_8_ = dVar106;
  auVar56 = vunpcklpd_avx(auVar156,auVar107);
  dVar141 = auVar66._0_8_;
  auVar152._0_8_ = dVar141 * auVar56._0_8_;
  dVar149 = auVar66._8_8_;
  auVar152._8_8_ = dVar149 * auVar56._8_8_;
  auVar152._16_8_ = dVar141 * dVar106;
  auVar152._24_8_ = dVar149 * dVar106;
  auVar25 = vsubpd_avx(auVar152,auVar123);
  auVar56 = vunpcklpd_avx(auVar96,auVar38);
  auVar41._0_8_ = dVar115 * dVar114;
  auVar41._8_8_ = dVar115 * dVar114;
  auVar41._16_8_ = dVar105 * dVar95;
  auVar41._24_8_ = dVar95 * 0.0;
  auVar124._0_8_ = dVar141 * dVar116;
  auVar124._8_8_ = dVar149 * dVar116;
  auVar124._16_8_ = dVar141 * dVar115;
  auVar124._24_8_ = dVar149 * dVar115;
  auVar26 = vsubpd_avx(auVar124,auVar41);
  auVar66 = vshufpd_avx(auVar20,auVar37,1);
  auVar142._0_8_ =
       *(double *)(param_1 + 0xf0 + lVar18 * 8) +
       auVar25._0_8_ * auVar56._0_8_ + auVar66._0_8_ * auVar26._0_8_;
  auVar142._8_8_ = auVar25._8_8_ * auVar56._8_8_ + auVar66._8_8_ * auVar26._8_8_ + 0.0;
  auVar144._16_8_ = auVar25._16_8_ * auVar65._0_8_ + auVar21._0_8_ * auVar26._16_8_ + 0.0;
  auVar144._0_16_ = auVar142;
  auVar144._24_8_ = auVar25._24_8_ * auVar65._8_8_ + dVar36 * auVar26._24_8_ + 0.0;
  dVar115 = *(double *)(param_1 + 0x240 + lVar17);
  auVar66 = vshufps_avx(auVar37,auVar37,0x44);
  auVar38 = vunpcklpd_avx(auVar38,auVar65);
  auVar56 = vunpcklpd_avx(auVar107,auVar82);
  auVar20 = vunpcklpd_avx(auVar57,auVar156);
  auVar21._8_8_ = auVar21._0_8_;
  auVar26._16_16_ = auVar21;
  auVar26._0_16_ = auVar21;
  auVar25 = vblendpd_avx(auVar26,ZEXT1632(auVar37),1);
  dVar116 = *(double *)(param_1 + 0xf0 + lVar18 * 8);
  auVar150._0_8_ =
       *(double *)(param_1 + 0xf0 + lVar18 * 8) +
       (dVar106 * auVar66._0_8_ + dVar115 * dVar127) * auVar38._0_8_ +
       auVar25._0_8_ * (auVar56._0_8_ * dVar127 + auVar20._0_8_ * auVar66._0_8_);
  auVar150._8_8_ =
       (dVar106 * auVar66._8_8_ + dVar115 * dVar127) * auVar38._8_8_ +
       auVar25._8_8_ * (auVar56._8_8_ * dVar127 + auVar20._8_8_ * auVar66._8_8_) + 0.0;
  auVar153._16_8_ =
       dVar116 + (dVar128 * auVar21._0_8_ + dVar115 * auVar65._0_8_) * auVar65._0_8_ +
                 auVar25._16_8_ * (dVar128 * auVar65._0_8_ + dVar105 * auVar21._0_8_);
  auVar153._0_16_ = auVar150;
  auVar153._24_8_ =
       (dVar36 * 0.0 + dVar115 * auVar65._8_8_) * auVar65._8_8_ +
       auVar25._24_8_ * (auVar65._8_8_ * 0.0 + dVar36 * 0.0) + 0.0;
  auVar25 = vblendpd_avx(auVar144,
                         ___ymm_0010000000000000000000000000000000000000000000000000000000000000,8);
  auVar27._0_8_ =
       auVar25._0_8_ & ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
  auVar27._8_8_ = auVar25._8_8_ & _UNK_150aa8f48;
  auVar27._16_8_ = auVar25._16_8_ & _UNK_150aa8f50;
  auVar27._24_8_ = auVar25._24_8_ & _UNK_150aa8f58;
  auVar25 = vcmppd_avx(auVar27,
                       ___ymm_3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a,6);
  auVar66 = vpackssdw_avx(auVar25._0_16_,auVar25._16_16_);
  pauVar2 = (undefined1 (*) [16])(param_1 + 0x100 + lVar18 * 0x18);
  pauVar3 = (undefined1 (*) [16])(param_1 + 0x240 + lVar17);
  if ((((SUB161(auVar66 >> 0x1f,0) & 1) == 0 && (SUB161(auVar66 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar66 >> 0x5f,0) & 1) == 0) && -1 < auVar66[0xf]) {
    auVar66 = vshufpd_avx(auVar142,auVar142,1);
    auVar28._16_16_ = auVar150;
    auVar28._0_16_ = auVar66;
    auVar25 = vblendpd_avx(auVar153,
                           ___ymm_0010000000000000000000000000000000000000000000000000000000000000,
                           0xc);
    auVar25 = vshufpd_avx(auVar28,auVar25,0xc);
    auVar29._0_8_ =
         auVar25._0_8_ & ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
    auVar29._8_8_ = auVar25._8_8_ & _UNK_150aa8f48;
    auVar29._16_8_ = auVar25._16_8_ & _UNK_150aa8f50;
    auVar29._24_8_ = auVar25._24_8_ & _UNK_150aa8f58;
    auVar25 = vcmppd_avx(auVar29,
                         ___ymm_3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a,6);
    auVar66 = vpackssdw_avx(auVar25._0_16_,auVar25._16_16_);
    if ((((SUB161(auVar66 >> 0x1f,0) & 1) == 0 && (SUB161(auVar66 >> 0x3f,0) & 1) == 0) &&
        (SUB161(auVar66 >> 0x5f,0) & 1) == 0) && -1 < auVar66[0xf]) {
      auVar25 = vperm2f128_avx(auVar144,
                               ___ymm_0010000000000000000000000000000000000000000000000000000000000000
                               ,0x31);
      auVar25 = vblendpd_avx(auVar25,auVar153,6);
      auVar30._0_8_ =
           auVar25._0_8_ & ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
      auVar30._8_8_ = auVar25._8_8_ & _UNK_150aa8f48;
      auVar30._16_8_ = auVar25._16_8_ & _UNK_150aa8f50;
      auVar30._24_8_ = auVar25._24_8_ & _UNK_150aa8f58;
      auVar25 = vcmppd_avx(auVar30,
                           ___ymm_3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a,6
                          );
      auVar66 = vpackssdw_avx(auVar25._0_16_,auVar25._16_16_);
      if ((((SUB161(auVar66 >> 0x1f,0) & 1) == 0 && (SUB161(auVar66 >> 0x3f,0) & 1) == 0) &&
          (SUB161(auVar66 >> 0x5f,0) & 1) == 0) && -1 < auVar66[0xf]) {
        auVar56 = ZEXT816(0) << 0x40;
        auVar20._8_8_ = 0;
        auVar20._0_8_ = __real_3ff0000000000000;
        auVar21 = ZEXT816(0);
        auVar47 = ZEXT816(0);
        auVar37 = ZEXT816(0) << 0x40;
        auVar38 = ZEXT816(0);
        auVar66 = ZEXT816(0) << 0x40;
        auVar23 = auVar20;
        auVar40 = auVar20;
        goto LAB_140a005bf;
      }
    }
  }
  auVar25 = vperm2f128_avx(auVar144,auVar153,0x31);
  auVar26 = vunpcklpd_avx(auVar144,auVar25);
  auVar6._8_8_ = _UNK_150b54548;
  auVar6._0_8_ = ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
  auVar6._16_8_ = _UNK_150b54550;
  auVar6._24_8_ = _UNK_150b54558;
  auVar25 = vblendpd_avx(auVar153,auVar6,0xe);
  auVar31._0_8_ = auVar26._0_8_ * auVar25._0_8_;
  auVar31._8_8_ = auVar26._8_8_ * auVar25._8_8_;
  auVar31._16_8_ = auVar26._16_8_ * auVar25._16_8_;
  auVar31._24_8_ = auVar26._24_8_ * auVar25._24_8_;
  auVar66 = vshufpd_avx(auVar142,auVar142,1);
  auVar38 = ZEXT816(0);
  auVar50._16_16_ = auVar150;
  auVar50._0_16_ = auVar66;
  auVar26 = vshufpd_avx(auVar50,ZEXT1632(auVar38),4);
  auVar25 = vblendpd_avx(ZEXT1632(auVar66),auVar153,2);
  auVar42._0_8_ = auVar26._0_8_ * auVar25._0_8_;
  auVar42._8_8_ = auVar26._8_8_ * auVar25._8_8_;
  auVar42._16_8_ = auVar26._16_8_ * auVar25._16_8_;
  auVar42._24_8_ = auVar26._24_8_ * auVar25._24_8_;
  auVar51._8_8_ = auVar150._0_8_;
  auVar51._0_8_ = auVar150._0_8_;
  auVar51._16_8_ = auVar153._16_8_;
  auVar51._24_8_ = auVar153._16_8_;
  auVar25 = vblendpd_avx(auVar51,
                         ___ymm_000000000000000000000000000000003ff00000000000003ff0000000000000,3);
  auVar41 = vsubpd_avx(auVar31,auVar42);
  auVar26 = vblendpd_avx(ZEXT1632(auVar144._16_16_),auVar153,2);
  auVar27 = vblendpd_avx(ZEXT1632(auVar38),auVar144,0xc);
  auVar70._16_16_ = auVar150;
  auVar70._0_16_ = auVar38;
  auVar27 = vblendpd_avx(auVar27,auVar70,10);
  auVar22._0_8_ =
       auVar25._0_8_ * auVar26._0_8_ +
       auVar27._0_8_ * ___ymm_8000000000000000800000000000000080000000000000008000000000000000;
  auVar22._8_8_ = auVar25._8_8_ * auVar26._8_8_ + auVar27._8_8_ * _UNK_150b513e8;
  auVar32._16_8_ = auVar25._16_8_ * auVar26._16_8_ + auVar27._16_8_ * _UNK_150b513f0;
  auVar32._0_16_ = auVar22;
  auVar32._24_8_ = auVar25._24_8_ * auVar26._24_8_ + auVar27._24_8_ * _UNK_150b513f8;
  auVar52._16_16_ = auVar150;
  auVar52._0_16_ = auVar144._16_16_;
  auVar124 = ZEXT1632(auVar38);
  auVar26 = vshufpd_avx(auVar52,auVar124,4);
  auVar43._0_8_ = auVar150._0_8_ * auVar26._0_8_;
  auVar43._8_8_ = auVar150._0_8_ * auVar26._8_8_;
  auVar43._16_8_ = auVar142._0_8_ * auVar26._16_8_;
  auVar43._24_8_ = auVar142._0_8_ * auVar26._24_8_;
  auVar66 = vshufpd_avx(auVar142,auVar142,3);
  auVar25 = vunpckhpd_avx(auVar153,auVar124);
  auVar25 = vblendpd_avx(auVar25,auVar144,4);
  auVar71._0_8_ = auVar66._0_8_ * auVar25._0_8_;
  auVar71._8_8_ = auVar66._8_8_ * auVar25._8_8_;
  auVar71._16_8_ = auVar66._0_8_ * auVar25._16_8_;
  auVar71._24_8_ = auVar66._8_8_ * auVar25._24_8_;
  auVar123 = vsubpd_avx(auVar43,auVar71);
  dVar128 = auVar41._0_8_;
  auVar27 = vperm2f128_avx(auVar41,auVar41,0x11);
  auVar25 = vshufpd_avx(auVar27,auVar27,0xf);
  auVar38 = auVar41._0_16_;
  auVar66 = vshufpd_avx(auVar38,auVar38,3);
  auVar44._0_8_ = auVar25._0_8_ * dVar128 + auVar66._0_8_ * auVar27._0_8_;
  auVar44._8_8_ = auVar25._8_8_ * dVar128 + auVar66._8_8_ * auVar27._0_8_;
  auVar44._16_8_ = auVar25._16_8_ * dVar128 + auVar66._0_8_ * auVar27._16_8_;
  auVar44._24_8_ = auVar25._24_8_ * dVar128 + auVar66._8_8_ * auVar27._16_8_;
  auVar72._16_16_ = auVar22;
  auVar72._0_16_ = auVar22;
  auVar27 = vperm2f128_avx(auVar32,auVar32,0x11);
  auVar27 = vshufpd_avx(auVar72,auVar27,0xc);
  dVar105 = auVar123._0_8_;
  auVar73._0_8_ = dVar105 * auVar27._0_8_;
  dVar106 = auVar123._8_8_;
  auVar73._8_8_ = dVar106 * auVar27._8_8_;
  dVar114 = auVar123._16_8_;
  auVar73._16_8_ = dVar114 * auVar27._16_8_;
  dVar95 = auVar123._24_8_;
  auVar73._24_8_ = dVar95 * auVar27._24_8_;
  auVar27 = vperm2f128_avx(auVar73,auVar73,1);
  auVar74._0_8_ = auVar73._0_8_ + auVar27._0_8_;
  auVar74._8_8_ = auVar73._8_8_ + auVar27._8_8_;
  auVar74._16_8_ = auVar73._16_8_ + auVar27._16_8_;
  auVar74._24_8_ = auVar73._24_8_ + auVar27._24_8_;
  auVar27 = vperm2f128_avx(auVar74,auVar74,1);
  auVar27 = vshufpd_avx(auVar74,auVar27,5);
  auVar75._0_8_ = auVar74._0_8_ + auVar27._0_8_;
  auVar75._8_8_ = auVar74._8_8_ + auVar27._8_8_;
  auVar75._16_8_ = auVar74._16_8_ + auVar27._16_8_;
  auVar75._24_8_ = auVar74._24_8_ + auVar27._24_8_;
  auVar27 = vsubpd_avx(auVar44,auVar75);
  auVar56 = ZEXT816(0) << 0x40;
  if ((auVar27._0_8_ != 0.0) || (NAN(auVar27._0_8_))) {
    auVar76._0_8_ = dVar128 * 0.0;
    auVar76._8_8_ = dVar128 * 0.0;
    auVar76._16_8_ = auVar41._16_8_ * 0.0;
    auVar76._24_8_ = auVar41._16_8_ * 0.0;
    auVar152 = vperm2f128_avx(auVar76,auVar76,0x11);
    auVar101._24_8_ = auVar150._0_8_;
    auVar101._16_8_ = auVar150._0_8_;
    auVar101._0_16_ = auVar22;
    auVar41 = vblendpd_avx(auVar144,auVar101,0xc);
    auVar102._0_8_ = auVar22._0_8_ * auVar41._0_8_;
    auVar102._8_8_ = auVar22._0_8_ * auVar41._8_8_;
    auVar102._16_8_ = auVar22._0_8_ * auVar41._16_8_;
    auVar102._24_8_ = auVar22._0_8_ * auVar41._24_8_;
    auVar60._16_16_ = auVar22;
    auVar60._0_16_ = auVar22;
    auVar125._0_8_ = auVar142._0_8_ * auVar22._0_8_;
    auVar125._8_8_ = auVar142._0_8_ * auVar22._8_8_;
    auVar125._16_8_ = auVar142._0_8_ * auVar22._0_8_;
    auVar125._24_8_ = auVar142._8_8_ * auVar22._8_8_;
    auVar41 = vsubpd_avx(auVar102,auVar125);
    auVar153 = vsubpd_avx(auVar152,auVar41);
    auVar66 = vshufpd_avx(auVar38,auVar38,3);
    auVar118._0_8_ = auVar66._0_8_ * 0.0;
    auVar118._8_8_ = auVar66._8_8_ * 0.0;
    auVar97._0_8_ = dVar105 * __real_3ff0000000000000;
    auVar97._8_8_ = dVar106 * 0.0;
    auVar103._16_8_ = dVar114 * 0.0;
    auVar103._0_16_ = auVar97;
    auVar103._24_8_ = dVar95 * 0.0;
    auVar77._16_16_ = auVar97;
    auVar77._0_16_ = auVar22;
    auVar152 = vshufpd_avx(auVar103,auVar77,4);
    auVar66._0_8_ =
         dVar105 * ___ymm_00000000000000003ff000000000000000000000000000000000000000000000;
    auVar66._8_8_ = dVar106 * _UNK_150aa8e88;
    auVar78._16_8_ = dVar114 * _DAT_150aa8e90;
    auVar78._0_16_ = auVar66;
    auVar78._24_8_ = dVar95 * _UNK_150aa8e98;
    auVar87._16_16_ = auVar66;
    auVar87._0_16_ = auVar22;
    auVar41 = vblendpd_avx(auVar78,auVar87,8);
    auVar66 = vshufpd_avx(auVar142,auVar150,1);
    auVar88._0_8_ = auVar25._0_8_ * auVar142._0_8_;
    auVar88._8_8_ = auVar25._8_8_ * auVar142._8_8_;
    auVar88._16_8_ = auVar25._16_8_ * auVar66._0_8_;
    auVar88._24_8_ = auVar25._24_8_ * auVar66._8_8_;
    auVar28 = vperm2f128_avx(auVar32,auVar32,0x11);
    auVar25 = vblendpd_avx(auVar60,auVar28,10);
    auVar133._8_8_ = auVar144._16_8_;
    auVar133._0_8_ = auVar144._16_8_;
    auVar133._16_16_ = auVar150;
    auVar124 = vblendpd_avx(auVar133,auVar124,5);
    auVar144 = vblendpd_avx(auVar28,auVar60,10);
    auVar33._0_8_ = auVar25._0_8_ * auVar26._0_8_ + auVar124._0_8_ * auVar144._0_8_;
    auVar33._8_8_ = auVar25._8_8_ * auVar26._8_8_ + auVar124._8_8_ * auVar144._8_8_;
    auVar33._16_8_ = auVar25._16_8_ * auVar26._16_8_ + auVar124._16_8_ * auVar144._16_8_;
    auVar33._24_8_ = auVar25._24_8_ * auVar26._24_8_ + auVar124._24_8_ * auVar144._24_8_;
    auVar26 = vsubpd_avx(auVar88,auVar33);
    auVar25 = vdivpd_avx(___ymm_3ff0000000000000bff0000000000000bff00000000000003ff0000000000000,
                         auVar27);
    auVar23._0_8_ = auVar26._0_8_ * auVar25._0_8_;
    auVar23._8_8_ = auVar26._8_8_ * auVar25._8_8_;
    dVar105 = auVar25._16_8_;
    auVar34._16_8_ = auVar26._16_8_ * dVar105;
    auVar34._0_16_ = auVar23;
    dVar106 = auVar25._24_8_;
    auVar34._24_8_ = auVar26._24_8_ * dVar106;
    auVar66 = vshufpd_avx(auVar23,auVar23,1);
    auVar37 = auVar34._16_16_;
    auVar20 = vshufpd_avx(auVar37,auVar37,1);
    auVar38 = vsubpd_avx(auVar152._16_16_,auVar41._16_16_);
    auVar38 = vsubpd_avx(auVar118,auVar38);
    auVar47._0_8_ = auVar38._0_8_ * dVar105;
    auVar47._8_8_ = auVar38._8_8_ * dVar106;
    auVar38 = vshufpd_avx(auVar47,auVar47,1);
    local_108 = auVar153._0_8_;
    dStack_100 = auVar153._8_8_;
    dStack_f8 = auVar153._16_8_;
    dStack_f0 = auVar153._24_8_;
    auVar39._0_8_ = auVar25._0_8_ * local_108;
    auVar39._8_8_ = auVar25._8_8_ * dStack_100;
    auVar45._16_8_ = dVar105 * dStack_f8;
    auVar45._0_16_ = auVar39;
    auVar45._24_8_ = dVar106 * dStack_f0;
    auVar56 = vshufpd_avx(auVar39,auVar39,1);
    auVar21 = vshufpd_avx(auVar45._16_16_,auVar45._16_16_,1);
    auVar65 = vshufpd_avx(auVar123._16_16_,auVar123._16_16_,1);
    auVar96 = vshufpd_avx(auVar123._0_16_,auVar123._0_16_,1);
    auVar142 = vshufpd_avx(auVar25._16_16_,auVar25._16_16_,1);
    auVar40._8_8_ = 0;
    auVar40._0_8_ = (dVar128 - (auVar65._0_8_ * 0.0 + auVar96._0_8_ * 0.0)) * auVar142._0_8_;
  }
  else {
    auVar20._8_8_ = 0;
    auVar20._0_8_ = __real_3ff0000000000000;
    auVar21 = ZEXT816(0) << 0x40;
    auVar47 = ZEXT816(0) << 0x40;
    auVar37 = ZEXT816(0) << 0x40;
    auVar38 = ZEXT816(0);
    auVar66 = ZEXT816(0) << 0x40;
    auVar23 = auVar20;
    auVar40 = auVar20;
  }
LAB_140a005bf:
  auVar56 = vunpcklpd_avx(auVar21,auVar56);
  auVar21 = vunpcklpd_avx(auVar37,auVar23);
  auVar66 = vunpcklpd_avx(auVar20,auVar66);
  dVar128 = *param_4;
  dVar105 = param_4[1];
  dVar106 = param_4[2];
  auVar24._0_8_ =
       param_5 * (auVar66._0_8_ * dVar128 + auVar21._0_8_ * dVar105 + auVar56._0_8_ * dVar106);
  auVar24._8_8_ =
       param_5 * (auVar66._8_8_ * dVar128 + auVar21._8_8_ * dVar105 + auVar56._8_8_ * dVar106);
  auVar35._16_8_ =
       param_5 * (auVar38._0_8_ * dVar128 + auVar47._0_8_ * dVar105 + auVar40._0_8_ * dVar106);
  auVar35._0_16_ = auVar24;
  auVar35._24_8_ =
       param_5 * (auVar38._8_8_ * dVar128 + auVar47._8_8_ * dVar105 + auVar40._8_8_ * dVar106);
  auVar53._0_8_ = dVar116 * auVar24._0_8_;
  auVar53._8_8_ = dVar116 * auVar24._8_8_;
  auVar53._16_8_ = dVar116 * auVar35._16_8_;
  auVar53._24_8_ = dVar116 * auVar35._24_8_;
  auVar46._16_8_ = uVar117;
  auVar46._0_16_ = *pauVar2;
  auVar46._24_8_ = 0;
  auVar27 = vsubpd_avx(auVar46,auVar155);
  auVar79._16_16_ = auVar24;
  auVar79._0_16_ = auVar24;
  auVar25 = vshufpd_avx(auVar79,ZEXT1632(auVar35._16_16_),1);
  auVar89._16_16_ = auVar27._0_16_;
  auVar89._0_16_ = auVar27._0_16_;
  auVar26 = vshufpd_avx(auVar89,ZEXT1632(auVar27._16_16_),1);
  auVar90._0_8_ = auVar24._0_8_ * auVar26._0_8_;
  auVar90._8_8_ = auVar24._8_8_ * auVar26._8_8_;
  auVar90._16_8_ = auVar35._16_8_ * auVar26._16_8_;
  auVar90._24_8_ = auVar35._24_8_ * auVar26._24_8_;
  auVar61._0_8_ = auVar25._0_8_ * auVar27._0_8_;
  auVar61._8_8_ = auVar25._8_8_ * auVar27._8_8_;
  auVar61._16_8_ = auVar25._16_8_ * auVar27._16_8_;
  auVar61._24_8_ = auVar25._24_8_ * auVar27._24_8_;
  auVar26 = vsubpd_avx(auVar90,auVar61);
  auVar8._8_8_ = dVar115;
  auVar8._0_8_ = dVar115;
  auVar7._16_8_ = dVar115;
  auVar7._0_16_ = auVar8;
  auVar7._24_8_ = dVar115;
  auVar66 = vmovhpd_avx(auVar8,*(undefined8 *)(*pauVar3 + 8));
  uVar5 = *(undefined8 *)pauVar3[1];
  auVar91._8_8_ = uVar5;
  auVar91._0_8_ = uVar5;
  auVar91._16_8_ = uVar5;
  auVar91._24_8_ = uVar5;
  auVar25 = vblendpd_avx(auVar7,ZEXT1632(auVar66),3);
  auVar25 = vblendpd_avx(auVar25,auVar91,4);
  auVar38 = vshufpd_avx(auVar26._0_16_,auVar26._0_16_,3);
  auVar56 = vunpcklpd_avx(auVar82,auVar159);
  auVar27 = vperm2f128_avx(auVar26,auVar26,0x11);
  auVar20 = vunpcklpd_avx(auVar107,auVar156);
  auVar66 = vblendps_avx((undefined1  [16])0x0,auVar57,3);
  dVar128 = auVar26._0_8_;
  auVar83._0_8_ =
       auVar25._0_8_ * auVar38._0_8_ + auVar27._0_8_ * auVar56._0_8_ + dVar128 * auVar20._0_8_;
  auVar83._8_8_ =
       auVar25._8_8_ * auVar38._8_8_ + auVar27._0_8_ * auVar56._8_8_ + dVar128 * auVar20._8_8_;
  auVar92._16_8_ =
       auVar25._16_8_ * auVar38._0_8_ + auVar27._16_8_ * *(double *)pauVar3[3] +
       dVar128 * auVar66._0_8_;
  auVar92._0_16_ = auVar83;
  auVar92._24_8_ = auVar25._24_8_ * auVar38._8_8_ + auVar27._16_8_ * 0.0 + dVar128 * auVar66._8_8_;
  auVar25 = vsubpd_avx(auVar155,auVar53);
  pauVar2[7] = auVar25._0_16_;
  uVar5 = vmovlps_avx(auVar25._16_16_);
  *(undefined8 *)pauVar2[8] = uVar5;
  dVar16 = _UNK_150b54438;
  dVar15 = _UNK_150b54430;
  dVar14 = _UNK_150b54428;
  dVar13 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar12 = _UNK_150b54418;
  dVar11 = _UNK_150b54410;
  dVar10 = _UNK_150b54408;
  dVar9 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar149 = _UNK_15076c6f8;
  dVar141 = ___xmm_bff00000000000003ff0000000000000;
  lVar19 = lVar18 * 0x20;
  auVar66 = *(undefined1 (*) [16])(param_1 + 0x1a0 + lVar19);
  auVar38 = *(undefined1 (*) [16])(param_1 + 0x1b0 + lVar19);
  dVar128 = auVar66._0_8_;
  dVar105 = auVar66._8_8_;
  dVar115 = auVar38._0_8_;
  dVar116 = auVar38._8_8_;
  auVar129._8_8_ = 0;
  auVar129._0_8_ = *(ulonglong *)(param_1 + 0x1b8 + lVar19);
  auVar66 = vmovhps_avx(auVar129,*(undefined8 *)(param_1 + 0x1b0 + lVar19));
  auVar143._8_8_ = 0;
  auVar143._0_8_ = *(ulonglong *)(param_1 + 0x1a8 + lVar19);
  auVar38 = vmovhps_avx(auVar143,*(undefined8 *)(param_1 + 0x1a0 + lVar19));
  auVar56 = vshufpd_avx(auVar83,auVar83,3);
  auVar25 = vperm2f128_avx(auVar92,auVar92,0x11);
  dVar106 = dVar128 + (auVar38._0_8_ * auVar25._0_8_ *
                       ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
                      dVar128 * 0.0 +
                      auVar66._0_8_ * auVar83._0_8_ * ___xmm_bff00000000000003ff0000000000000 +
                      auVar56._0_8_ * dVar115 *
                      ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000) *
                      ___ymm_3fe00000000000003fe00000000000003fe00000000000003fe0000000000000;
  dVar114 = dVar105 + (auVar38._8_8_ * auVar25._0_8_ * _UNK_150b54428 +
                      dVar105 * 0.0 + auVar66._8_8_ * auVar83._0_8_ * _UNK_15076c6f8 +
                      auVar56._8_8_ * dVar116 * _UNK_150b54408) * _UNK_150aa8f28;
  dVar115 = dVar115 + (auVar66._0_8_ * auVar25._16_8_ * _UNK_150b54430 +
                      dVar115 * 0.0 +
                      auVar38._0_8_ * auVar83._0_8_ * ___xmm_bff00000000000003ff0000000000000 +
                      auVar56._0_8_ * dVar128 * _UNK_150b54410) * _UNK_150aa8f30;
  dVar116 = dVar116 + (auVar66._8_8_ * auVar25._16_8_ * _UNK_150b54438 +
                      dVar116 * 0.0 + auVar38._8_8_ * auVar83._0_8_ * _UNK_15076c6f8 +
                      auVar56._8_8_ * dVar105 * _UNK_150b54418) * _UNK_150aa8f38;
  auVar98._0_8_ = dVar115 * dVar115 + dVar106 * dVar106;
  auVar98._8_8_ = dVar116 * dVar116 + dVar114 * dVar114;
  auVar66 = vshufpd_avx(auVar98,auVar98,1);
  dVar128 = auVar66._0_8_ + auVar98._0_8_;
  auVar119._8_8_ = 0;
  auVar119._0_8_ = __real_3e45798ee2308c3a;
  auVar99._8_8_ = 0;
  auVar99._0_8_ = dVar128;
  auVar66 = vcmpsd_avx(auVar119,auVar99,6);
  uVar117 = ~auVar66._0_8_ & __real_ffffffffffffffff;
  auVar100._8_8_ = 0;
  auVar100._0_8_ = __real_3ff0000000000000;
  dVar128 = __real_3ff0000000000000 / SQRT(dVar128);
  uVar138 = ~uVar117 & _UNK_150b54548;
  uVar139 = ~uVar117 & _UNK_150b54550;
  uVar140 = ~uVar117 & _UNK_150b54558;
  puVar4 = (ulonglong *)(param_1 + 0x1a0 + lVar19);
  *puVar4 = ~uVar117 & ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000 |
            uVar117 & (ulonglong)(dVar128 * dVar106);
  puVar4[1] = uVar138 | uVar117 & (ulonglong)(dVar128 * dVar114);
  puVar4 = (ulonglong *)(param_1 + 0x1b0 + lVar19);
  *puVar4 = uVar139 | uVar117 & (ulonglong)(dVar128 * dVar115);
  puVar4[1] = uVar140 | uVar117 & (ulonglong)(dVar128 * dVar116);
  auVar108._0_8_ =
       *(double *)(param_1 + 0x1c0) * *(double *)(param_1 + 0x1a0) +
       *(double *)(param_1 + 0x1d0) * *(double *)(param_1 + 0x1b0);
  auVar108._8_8_ =
       *(double *)(param_1 + 0x1c8) * *(double *)(param_1 + 0x1a8) +
       *(double *)(param_1 + 0x1d8) * *(double *)(param_1 + 0x1b8);
  auVar66 = vshufpd_avx(auVar108,auVar108,1);
  auVar120._8_8_ = 0;
  auVar120._0_8_ = auVar66._0_8_ + auVar108._0_8_;
  auVar66 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar120,2);
  auVar121._8_8_ = 0;
  auVar121._0_8_ = __real_bff0000000000000;
  auVar66 = vblendvpd_avx(auVar121,auVar100,auVar66);
  dVar128 = auVar66._0_8_;
  *(double *)(param_1 + 0x1c0) = *(double *)(param_1 + 0x1c0) * dVar128;
  *(double *)(param_1 + 0x1c8) = *(double *)(param_1 + 0x1c8) * dVar128;
  *(double *)(param_1 + 0x1d0) = *(double *)(param_1 + 0x1d0) * dVar128;
  *(double *)(param_1 + 0x1d8) = *(double *)(param_1 + 0x1d8) * dVar128;
  lVar17 = lVar18 * 0x60;
  auVar130._8_8_ = 0;
  auVar130._0_8_ = *(ulonglong *)(param_1 + 0x20 + lVar17);
  auVar20 = vmovhps_avx(auVar130,*(undefined8 *)(param_1 + 0x38 + lVar17));
  pdVar1 = (double *)(param_1 + 0x20 + lVar17);
  dVar36 = *pdVar1;
  dVar127 = pdVar1[1];
  auVar66 = *(undefined1 (*) [16])(param_1 + 0x28 + lVar17);
  auVar38 = *(undefined1 (*) [16])(param_1 + 0x1a0 + lVar19);
  auVar56 = *(undefined1 (*) [16])(param_1 + 0x1a8 + lVar19);
  dVar128 = *(double *)(param_1 + 0x1b0 + lVar19);
  auVar157._8_8_ = 0;
  auVar157._0_8_ = dVar128;
  dVar105 = *(double *)(param_1 + 0x1b8 + lVar19);
  auVar160._8_8_ = dVar105;
  auVar160._0_8_ = dVar105;
  auVar21 = vunpcklpd_avx(auVar157,auVar160);
  dVar116 = auVar38._0_8_;
  auVar134._0_8_ = auVar66._0_8_ * dVar116;
  dVar114 = auVar38._8_8_;
  auVar134._8_8_ = auVar66._8_8_ * dVar114;
  auVar134._16_8_ = auVar20._0_8_ * auVar21._0_8_;
  auVar134._24_8_ = auVar20._8_8_ * auVar21._8_8_;
  dVar115 = *(double *)(param_1 + 0x1a0 + lVar19);
  auVar151._8_8_ = 0;
  auVar151._0_8_ = dVar115;
  auVar66 = vunpcklpd_avx(auVar151,auVar160);
  pdVar1 = (double *)(param_1 + 0x30 + lVar17);
  dVar106 = auVar56._0_8_;
  auVar145._0_8_ = dVar36 * dVar106;
  dVar95 = auVar56._8_8_;
  auVar145._8_8_ = dVar127 * dVar95;
  auVar145._16_8_ = *pdVar1 * auVar66._0_8_;
  auVar145._24_8_ = pdVar1[1] * auVar66._8_8_;
  auVar25 = vsubpd_avx(auVar134,auVar145);
  auVar131._0_8_ = auVar25._0_8_ + auVar25._0_8_;
  auVar131._8_8_ = auVar25._8_8_ + auVar25._8_8_;
  auVar135._16_8_ = auVar25._16_8_ + auVar25._16_8_;
  auVar135._0_16_ = auVar131;
  auVar135._24_8_ = auVar25._24_8_ + auVar25._24_8_;
  auVar146._16_16_ = auVar131;
  auVar146._0_16_ = auVar131;
  auVar25 = vshufpd_avx(auVar146,ZEXT1632(auVar135._16_16_),1);
  auVar26 = vperm2f128_avx(auVar135,auVar135,1);
  auVar26 = vshufpd_avx(auVar26,auVar135,4);
  auVar136._0_8_ = dVar116 * auVar26._0_8_;
  auVar136._8_8_ = dVar114 * auVar26._8_8_;
  auVar136._16_8_ = dVar128 * auVar26._16_8_;
  auVar136._24_8_ = auVar26._24_8_ * 0.0;
  auVar147._0_8_ = dVar106 * auVar25._0_8_;
  auVar147._8_8_ = dVar95 * auVar25._8_8_;
  auVar147._16_8_ = dVar115 * auVar25._16_8_;
  auVar147._24_8_ = auVar25._24_8_ * 0.0;
  auVar26 = vsubpd_avx(auVar136,auVar147);
  auVar148._16_16_ = auVar26._0_16_;
  auVar148._0_16_ = auVar26._0_16_;
  auVar26 = vshufpd_avx(auVar148,ZEXT1632(auVar26._16_16_),1);
  auVar132._0_8_ = *(double *)pauVar2[7] + dVar36 + dVar105 * auVar25._0_8_ + auVar26._0_8_;
  auVar132._8_8_ = *(double *)(pauVar2[7] + 8) + dVar127 + dVar105 * auVar25._8_8_ + auVar26._8_8_;
  auVar137._16_8_ =
       *(double *)pauVar2[8] +
       *(double *)(param_1 + 0x30 + lVar17) + dVar105 * auVar25._16_8_ + auVar26._16_8_;
  auVar137._0_16_ = auVar132;
  auVar137._24_8_ = dVar105 * auVar25._24_8_ + 0.0 + auVar26._24_8_ + 0.0;
  *pauVar2 = auVar132;
  uVar5 = vmovlps_avx(auVar137._16_16_);
  *(undefined8 *)pauVar2[1] = uVar5;
  dVar128 = *(double *)(param_1 + 0x1b8 + lVar19);
  auVar66 = *(undefined1 (*) [16])(param_1 + 0x10 + lVar17);
  dVar106 = SUB168(*(undefined1 (*) [16])(param_1 + lVar17),0);
  dVar114 = SUB168(*(undefined1 (*) [16])(param_1 + lVar17),8);
  dVar95 = auVar66._0_8_;
  dVar36 = auVar66._8_8_;
  dVar105 = *(double *)(param_1 + 0x1a0 + lVar19);
  auVar158._8_8_ = 0;
  auVar158._0_8_ = *(ulonglong *)(param_1 + 0x18 + lVar17);
  auVar66 = vmovhps_avx(auVar158,*(undefined8 *)(param_1 + 0x10 + lVar17));
  auVar161._8_8_ = 0;
  auVar161._0_8_ = *(ulonglong *)(param_1 + 8 + lVar17);
  auVar38 = vmovhps_avx(auVar161,*(undefined8 *)(param_1 + lVar17));
  dVar115 = *(double *)(param_1 + 0x1a8 + lVar19);
  dVar116 = *(double *)(param_1 + 0x1b0 + lVar19);
  pdVar1 = (double *)(param_1 + 0x130 + lVar19);
  *pdVar1 = auVar38._0_8_ * dVar116 * dVar13 +
            dVar95 * dVar115 * dVar9 + dVar128 * dVar106 + dVar105 * auVar66._0_8_ * dVar141;
  pdVar1[1] = auVar38._8_8_ * dVar116 * dVar14 +
              dVar36 * dVar115 * dVar10 + dVar128 * dVar114 + dVar105 * auVar66._8_8_ * dVar149;
  pdVar1 = (double *)(param_1 + 0x140 + lVar19);
  *pdVar1 = auVar66._0_8_ * dVar116 * dVar15 +
            dVar106 * dVar115 * dVar11 + dVar128 * dVar95 + dVar105 * auVar38._0_8_ * dVar141;
  pdVar1[1] = auVar66._8_8_ * dVar116 * dVar16 +
              dVar114 * dVar115 * dVar12 + dVar128 * dVar36 + dVar105 * auVar38._8_8_ * dVar149;
  auVar84._0_8_ =
       *(double *)(param_1 + 0x150) * *(double *)(param_1 + 0x130) +
       *(double *)(param_1 + 0x160) * *(double *)(param_1 + 0x140);
  auVar84._8_8_ =
       *(double *)(param_1 + 0x158) * *(double *)(param_1 + 0x138) +
       *(double *)(param_1 + 0x168) * *(double *)(param_1 + 0x148);
  auVar66 = vshufpd_avx(auVar84,auVar84,1);
  auVar85._8_8_ = 0;
  auVar85._0_8_ = auVar66._0_8_ + auVar84._0_8_;
  auVar66 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar85,2);
  auVar66 = vblendvpd_avx(auVar121,auVar100,auVar66);
  dVar128 = auVar66._0_8_;
  *(double *)(param_1 + 0x150) = *(double *)(param_1 + 0x150) * dVar128;
  *(double *)(param_1 + 0x158) = *(double *)(param_1 + 0x158) * dVar128;
  *(double *)(param_1 + 0x160) = *(double *)(param_1 + 0x160) * dVar128;
  *(double *)(param_1 + 0x168) = *(double *)(param_1 + 0x168) * dVar128;
  dVar128 = *(double *)(param_1 + 0x1a0 + lVar19);
  auVar58._8_8_ = dVar128;
  auVar58._0_8_ = dVar128;
  dVar105 = *(double *)(param_1 + 0x1a8 + lVar19);
  auVar67._8_8_ = dVar105;
  auVar67._0_8_ = dVar105;
  auVar38 = vunpcklpd_avx(auVar58,auVar67);
  auVar66 = *(undefined1 (*) [16])(param_1 + 0x1b0 + lVar19);
  dVar106 = auVar38._0_8_ + auVar38._0_8_;
  dVar114 = auVar38._8_8_ + auVar38._8_8_;
  dVar115 = auVar66._0_8_;
  dVar116 = auVar66._8_8_;
  dVar95 = dVar115 + dVar115;
  dVar116 = dVar116 + dVar116;
  auVar62._0_8_ = dVar128 * dVar106;
  auVar62._8_8_ = dVar128 * dVar114;
  auVar62._16_8_ = dVar128 * dVar95;
  auVar62._24_8_ = dVar128 * dVar116;
  auVar109._0_8_ = dVar105 * dVar106;
  auVar109._8_8_ = dVar105 * dVar114;
  auVar111._16_8_ = dVar105 * dVar95;
  auVar111._0_16_ = auVar109;
  auVar111._24_8_ = dVar105 * dVar116;
  dVar128 = *(double *)(param_1 + 0x1b8 + lVar19);
  auVar93._0_8_ = dVar106 * dVar128;
  auVar93._8_8_ = dVar114 * dVar128;
  auVar93._16_8_ = dVar95 * dVar128;
  auVar93._24_8_ = dVar116 * dVar128;
  dVar128 = (dVar115 + dVar115) * *(double *)(param_1 + 0x1b0 + lVar19);
  auVar25 = vperm2f128_avx(auVar111,auVar62,0x21);
  auVar25 = vshufpd_avx(auVar25,ZEXT1632(auVar62._16_16_),4);
  auVar68._0_8_ = auVar25._0_8_ + auVar93._0_8_;
  auVar68._8_8_ = auVar25._8_8_ + auVar93._8_8_;
  auVar80._16_8_ = auVar25._16_8_ + auVar93._16_8_;
  auVar80._0_16_ = auVar68;
  auVar80._24_8_ = auVar25._24_8_ + auVar93._24_8_;
  auVar27 = vsubpd_avx(auVar25,auVar93);
  auVar66 = vshufpd_avx(auVar109,auVar109,1);
  auVar59._8_8_ = auVar62._0_8_;
  auVar59._0_8_ = auVar62._0_8_;
  auVar63._16_16_ = auVar59;
  auVar63._0_16_ = auVar59;
  auVar25 = vblendpd_avx(auVar63,ZEXT1632(auVar66),1);
  auVar112._16_16_ = auVar66;
  auVar112._0_16_ = auVar24;
  auVar26 = vblendpd_avx(ZEXT1632(CONCAT88(dVar128,dVar128)),auVar112,0xc);
  auVar64._0_8_ = auVar25._0_8_ + auVar26._0_8_;
  auVar64._8_8_ = auVar25._8_8_ + auVar26._8_8_;
  auVar64._16_8_ = auVar25._16_8_ + auVar26._16_8_;
  auVar64._24_8_ = auVar25._24_8_ + auVar26._24_8_;
  auVar104._8_8_ = __real_3ff0000000000000;
  auVar104._0_8_ = __real_3ff0000000000000;
  auVar104._16_8_ = __real_3ff0000000000000;
  auVar104._24_8_ = __real_3ff0000000000000;
  auVar26 = vsubpd_avx(auVar104,auVar64);
  dVar115 = auVar26._0_8_;
  dVar128 = *(double *)(param_1 + 0xc0 + lVar18 * 0x18);
  dVar105 = *(double *)(param_1 + 0xd0 + lVar18 * 0x18);
  auVar25 = vperm2f128_avx(auVar27,auVar27,0x11);
  auVar56 = ZEXT816(0) << 0x40;
  auVar66 = vmovhpd_avx(auVar56,*(undefined8 *)(param_1 + 200 + lVar18 * 0x18));
  dVar116 = auVar66._0_8_;
  dVar106 = auVar66._8_8_;
  auVar66 = vshufpd_avx(auVar68,auVar68,3);
  auVar122._0_8_ = dVar116 * auVar25._0_8_ + dVar128 * dVar115 + auVar66._0_8_ * 0.0;
  auVar122._8_8_ = dVar106 * auVar25._0_8_ + dVar115 * 0.0 + auVar66._8_8_ * 0.0;
  auVar126._16_8_ = auVar25._16_8_ * 0.0 + dVar115 * 0.0 + auVar66._0_8_ * dVar105;
  auVar126._0_16_ = auVar122;
  auVar126._24_8_ = auVar25._16_8_ * 0.0 + dVar115 * 0.0 + auVar66._8_8_ * 0.0;
  auVar25 = vperm2f128_avx(auVar80,auVar80,0x11);
  auVar21 = auVar26._0_16_;
  auVar66 = vshufpd_avx(auVar21,auVar21,3);
  dVar115 = auVar27._0_8_;
  auVar110._0_8_ = dVar115 * 0.0 + dVar116 * auVar66._0_8_ + dVar128 * auVar25._0_8_;
  auVar110._8_8_ = dVar115 * 0.0 + dVar106 * auVar66._8_8_ + auVar25._0_8_ * 0.0;
  auVar113._16_8_ = dVar115 * dVar105 + auVar66._0_8_ * 0.0 + auVar25._16_8_ * 0.0;
  auVar113._0_16_ = auVar110;
  auVar113._24_8_ = dVar115 * 0.0 + auVar66._8_8_ * 0.0 + auVar25._16_8_ * 0.0;
  auVar20 = auVar27._0_16_;
  auVar66 = vshufpd_avx(auVar20,auVar20,3);
  auVar25 = vperm2f128_avx(auVar26,auVar26,0x11);
  auVar48._0_8_ = dVar128 * auVar66._0_8_ + dVar116 * auVar68._0_8_ + auVar25._0_8_ * 0.0;
  auVar48._8_8_ = auVar66._8_8_ * 0.0 + dVar106 * auVar68._0_8_ + auVar25._0_8_ * 0.0;
  auVar54._16_8_ = auVar66._0_8_ * 0.0 + auVar68._0_8_ * 0.0 + auVar25._16_8_ * dVar105;
  auVar54._0_16_ = auVar48;
  auVar54._24_8_ = auVar66._8_8_ * 0.0 + auVar68._0_8_ * 0.0 + auVar25._16_8_ * 0.0;
  auVar38 = vunpcklpd_avx(auVar21,auVar80._16_16_);
  auVar66 = vshufpd_avx(auVar20,auVar20,1);
  auVar154._16_16_ = auVar66;
  auVar154._0_16_ = auVar24;
  auVar25 = vblendpd_avx(ZEXT1632(auVar38),auVar154,0xc);
  dVar106 = auVar25._0_8_;
  dVar114 = auVar25._8_8_;
  dVar95 = auVar25._16_8_;
  dVar36 = auVar25._24_8_;
  auVar38 = vshufpd_avx(auVar122,auVar122,3);
  auVar66 = vblendpd_avx(auVar21,auVar27._16_16_,1);
  dVar127 = auVar66._0_8_;
  dVar141 = auVar66._8_8_;
  auVar66 = vshufpd_avx(auVar68,auVar20,1);
  auVar27 = vperm2f128_avx(auVar126,auVar126,0x11);
  auVar25 = vblendpd_avx(auVar26,ZEXT1632(auVar66),3);
  dVar128 = auVar25._0_8_;
  dVar105 = auVar25._8_8_;
  dVar115 = auVar25._16_8_;
  dVar116 = auVar25._24_8_;
  auVar69._0_8_ = dVar106 * auVar122._0_8_ + dVar127 * auVar38._0_8_ + dVar128 * auVar27._0_8_;
  auVar69._8_8_ = dVar114 * auVar122._0_8_ + dVar141 * auVar38._8_8_ + dVar105 * auVar27._0_8_;
  auVar81._16_8_ =
       dVar95 * auVar122._0_8_ + auVar68._0_8_ * auVar38._0_8_ + dVar115 * auVar27._16_8_;
  auVar81._0_16_ = auVar69;
  auVar81._24_8_ =
       dVar36 * auVar122._0_8_ + auVar68._8_8_ * auVar38._8_8_ + dVar116 * auVar27._16_8_;
  auVar66 = vshufpd_avx(auVar110,auVar110,3);
  auVar25 = vperm2f128_avx(auVar113,auVar113,0x11);
  auVar86._0_8_ = dVar128 * auVar25._0_8_ + dVar127 * auVar66._0_8_ + dVar106 * auVar110._0_8_;
  auVar86._8_8_ = dVar105 * auVar25._0_8_ + dVar141 * auVar66._8_8_ + dVar114 * auVar110._0_8_;
  auVar94._16_8_ =
       dVar115 * auVar25._16_8_ + auVar68._0_8_ * auVar66._0_8_ + dVar95 * auVar110._0_8_;
  auVar94._0_16_ = auVar86;
  auVar94._24_8_ =
       dVar116 * auVar25._16_8_ + auVar68._8_8_ * auVar66._8_8_ + dVar36 * auVar110._0_8_;
  auVar66 = vshufpd_avx(auVar48,auVar48,3);
  auVar25 = vperm2f128_avx(auVar54,auVar54,0x11);
  auVar49._0_8_ = dVar128 * auVar25._0_8_ + dVar127 * auVar66._0_8_ + dVar106 * auVar48._0_8_;
  auVar49._8_8_ = dVar105 * auVar25._0_8_ + dVar141 * auVar66._8_8_ + dVar114 * auVar48._0_8_;
  auVar55._16_8_ = dVar115 * auVar25._16_8_ + auVar68._0_8_ * auVar66._0_8_ + dVar95 * auVar48._0_8_
  ;
  auVar55._0_16_ = auVar49;
  auVar55._24_8_ = dVar116 * auVar25._16_8_ + auVar68._8_8_ * auVar66._8_8_ + dVar36 * auVar48._0_8_
  ;
  *pauVar3 = auVar69;
  uVar5 = vmovlps_avx(auVar81._16_16_);
  *(undefined8 *)pauVar3[1] = uVar5;
  *(undefined8 *)(pauVar3[1] + 8) = 0;
  pauVar3[2] = auVar86;
  uVar5 = vmovlps_avx(auVar94._16_16_);
  *(undefined8 *)pauVar3[3] = uVar5;
  *(undefined8 *)(pauVar3[3] + 8) = 0;
  pauVar3[4] = auVar49;
  uVar5 = vmovlps_avx(auVar55._16_16_);
  *(undefined8 *)pauVar3[5] = uVar5;
  *(undefined1 (*) [16])(pauVar3[6] + 8) = auVar56;
  *(undefined1 (*) [16])(pauVar3[5] + 8) = auVar56;
  *(undefined8 *)(pauVar3[7] + 8) = 0x3ff0000000000000;
  if (param_2 == 0) {
    auVar66 = vshufpd_avx(auVar24,auVar24,1);
  }
  else {
    auVar24._0_8_ =
         (double)((ulonglong)auVar24._0_8_ ^
                 (ulonglong)___ymm_8000000000000000800000000000000080000000000000008000000000000000)
    ;
    auVar24._8_8_ = (double)((ulonglong)auVar24._8_8_ ^ (ulonglong)_UNK_150b513e8);
    auVar35._16_8_ = (double)((ulonglong)auVar35._16_8_ ^ (ulonglong)_UNK_150b513f0);
    auVar66 = vshufps_avx(auVar24,auVar24,0x4e);
  }
  auVar66 = vunpcklpd_avx(auVar24,auVar66);
  *(double *)(param_1 + 0x420) = auVar66._0_8_ + *(double *)(param_1 + 0x420);
  *(double *)(param_1 + 0x428) = auVar66._8_8_ + *(double *)(param_1 + 0x428);
  *(double *)(param_1 + 0x430) = auVar35._16_8_ + *(double *)(param_1 + 0x430);
  return;
}

// ApplyPointPositionConstraintDD_avx @ 140a00e40

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPointPositionConstraintDD_avx(double *param_1,double *param_2,double param_3)

{
  undefined1 auVar1 [24];
  undefined1 auVar2 [32];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar51;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar53;
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [32];
  undefined1 auVar33 [32];
  undefined1 auVar34 [32];
  undefined1 auVar35 [32];
  undefined1 auVar36 [32];
  double dVar55;
  undefined1 auVar38 [32];
  undefined1 auVar40 [32];
  double dVar52;
  double dVar54;
  double dVar56;
  undefined1 auVar42 [32];
  undefined1 auVar43 [32];
  undefined1 auVar44 [32];
  undefined1 auVar46 [32];
  undefined1 auVar47 [32];
  double dVar57;
  double dVar58;
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
  double dVar101;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar81 [32];
  undefined1 auVar82 [32];
  undefined1 auVar83 [32];
  undefined1 auVar87 [32];
  undefined1 auVar89 [32];
  undefined1 auVar90 [32];
  undefined1 auVar92 [32];
  undefined1 auVar94 [32];
  undefined1 auVar96 [32];
  undefined1 auVar98 [32];
  undefined1 auVar99 [32];
  undefined1 auVar102 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [32];
  undefined1 auVar103 [16];
  undefined1 auVar107 [32];
  undefined1 auVar108 [32];
  ulonglong uVar109;
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [32];
  undefined1 auVar118 [32];
  undefined1 auVar119 [32];
  undefined1 auVar120 [32];
  undefined1 auVar121 [32];
  undefined1 auVar122 [32];
  undefined1 auVar123 [32];
  undefined1 auVar124 [32];
  undefined1 auVar125 [32];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  double dVar146;
  double dVar147;
  undefined1 auVar134 [32];
  undefined1 auVar135 [32];
  undefined1 auVar136 [32];
  undefined1 auVar137 [32];
  undefined1 auVar138 [32];
  undefined1 auVar139 [32];
  undefined1 auVar140 [32];
  undefined1 auVar141 [32];
  undefined1 auVar142 [32];
  undefined1 auVar143 [32];
  undefined1 auVar144 [32];
  undefined1 auVar145 [32];
  double dVar148;
  double dVar149;
  undefined1 auVar150 [16];
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [32];
  undefined1 auVar161 [32];
  undefined1 auVar162 [32];
  undefined1 auVar165 [32];
  double dVar166;
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  double dVar183;
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [32];
  undefined1 auVar175 [32];
  undefined1 auVar177 [32];
  undefined1 auVar178 [32];
  undefined1 auVar179 [32];
  undefined1 auVar180 [32];
  undefined1 auVar181 [32];
  undefined1 auVar184 [16];
  undefined1 auVar185 [16];
  undefined1 auVar186 [16];
  double dVar198;
  undefined1 auVar187 [16];
  undefined1 auVar188 [16];
  undefined1 auVar189 [16];
  undefined1 auVar190 [16];
  undefined1 auVar191 [16];
  double dVar199;
  undefined1 auVar193 [32];
  double dVar200;
  undefined1 auVar201 [16];
  undefined1 auVar202 [16];
  undefined1 auVar203 [16];
  undefined1 auVar205 [32];
  undefined1 auVar206 [32];
  undefined1 auVar207 [16];
  undefined1 auVar208 [16];
  undefined1 auVar209 [16];
  undefined1 auVar210 [16];
  undefined1 auVar211 [16];
  undefined1 auVar213 [32];
  undefined1 auVar216 [32];
  undefined1 auVar217 [16];
  undefined1 auVar218 [16];
  undefined1 auVar219 [16];
  undefined1 auVar220 [16];
  undefined1 auVar222 [32];
  undefined1 auVar223 [32];
  undefined1 auVar225 [32];
  undefined1 auVar226 [16];
  undefined1 auVar227 [32];
  undefined1 auVar228 [32];
  undefined1 auVar229 [16];
  undefined1 auVar230 [16];
  undefined1 auVar231 [16];
  undefined1 auVar232 [32];
  undefined1 auVar233 [32];
  undefined1 auVar234 [32];
  undefined1 auVar235 [16];
  undefined1 auVar236 [16];
  undefined1 auVar237 [16];
  undefined1 auVar238 [32];
  undefined1 auVar239 [16];
  undefined1 auVar240 [16];
  undefined1 auVar241 [16];
  undefined1 auVar242 [32];
  undefined1 auVar244 [16];
  undefined1 auVar245 [32];
  double local_238;
  double dStack_230;
  double dStack_228;
  double dStack_220;
  undefined1 auVar27 [32];
  undefined1 auVar37 [32];
  undefined1 auVar39 [32];
  undefined1 auVar41 [32];
  undefined1 auVar45 [32];
  undefined1 auVar48 [32];
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined1 auVar80 [32];
  undefined1 auVar84 [32];
  undefined1 auVar85 [32];
  undefined1 auVar86 [32];
  undefined1 auVar88 [32];
  undefined1 auVar91 [32];
  undefined1 auVar93 [32];
  undefined1 auVar95 [32];
  undefined1 auVar97 [32];
  undefined1 auVar100 [32];
  undefined1 auVar126 [32];
  undefined1 auVar127 [32];
  undefined1 auVar128 [32];
  undefined1 auVar129 [32];
  undefined1 auVar160 [32];
  undefined1 auVar163 [32];
  undefined1 auVar164 [32];
  undefined1 auVar176 [32];
  undefined1 auVar182 [32];
  undefined1 auVar192 [32];
  undefined1 auVar194 [32];
  undefined1 auVar195 [32];
  undefined1 auVar196 [32];
  undefined1 auVar197 [32];
  undefined1 auVar204 [32];
  undefined1 auVar212 [32];
  undefined1 auVar214 [32];
  undefined1 auVar215 [32];
  undefined1 auVar221 [32];
  undefined1 auVar224 [32];
  undefined1 auVar243 [32];
  
  auVar61._8_8_ = 0;
  auVar61._0_8_ = param_1[0x22];
  auVar24._24_8_ = 0;
  auVar24._0_24_ = *(undefined1 (*) [24])(param_1 + 0x20);
  auVar130._8_8_ = 0;
  auVar130._0_8_ = param_1[0x30];
  auVar117._24_8_ = 0;
  auVar117._0_24_ = *(undefined1 (*) [24])(param_1 + 0x2e);
  auVar24 = vsubpd_avx(auVar24,auVar117);
  auVar11 = auVar24._0_16_;
  auVar131 = vshufpd_avx(auVar11,auVar11,1);
  auVar103 = vsubpd_avx(auVar61,auVar130);
  dVar146 = auVar103._0_8_;
  auVar59._0_8_ = (ulonglong)dVar146 ^ __real_8000000000000000;
  auVar59._8_8_ = auVar103._8_8_ ^ __real_8000000000000000;
  auVar167._0_8_ = (double)(auVar131._0_8_ ^ __real_8000000000000000);
  auVar167._8_8_ = (double)(auVar131._8_8_ ^ __real_8000000000000000);
  auVar12._0_8_ = auVar24._0_8_;
  auVar110._0_8_ = (ulonglong)auVar12._0_8_ ^ __real_8000000000000000;
  dVar56 = auVar24._8_8_;
  auVar110._8_8_ = (ulonglong)dVar56 ^ __real_8000000000000000;
  auVar24 = vperm2f128_avx(auVar24,auVar24,0x11);
  dVar52 = auVar24._0_8_;
  dVar54 = auVar24._16_8_;
  dVar149 = param_1[0x4c];
  auVar201._8_8_ = 0;
  auVar201._0_8_ = dVar149;
  dVar57 = param_1[0x4d];
  auVar131._8_8_ = 0;
  auVar131._0_8_ = dVar57;
  auVar131 = vmovlhps_avx(auVar131,auVar201);
  auVar232._0_8_ = dVar52 * auVar131._0_8_;
  auVar232._8_8_ = dVar52 * auVar131._8_8_;
  auVar232._16_8_ = dVar54 * dVar149;
  auVar232._24_8_ = dVar54 * 0.0;
  auVar61 = vshufpd_avx(auVar11,auVar11,3);
  dVar58 = param_1[0x51];
  auVar207._8_8_ = dVar58;
  auVar207._0_8_ = dVar58;
  dVar10 = param_1[0x50];
  auVar217._8_8_ = dVar10;
  auVar217._0_8_ = dVar10;
  auVar131 = vmovlhps_avx(auVar207,auVar217);
  dVar147 = auVar61._0_8_;
  auVar242._0_8_ = dVar147 * auVar131._0_8_;
  dVar148 = auVar61._8_8_;
  auVar242._8_8_ = dVar148 * auVar131._8_8_;
  auVar242._16_8_ = dVar147 * dVar10;
  auVar242._24_8_ = dVar148 * dVar10;
  auVar24 = vsubpd_avx(auVar242,auVar232);
  auVar61 = vunpcklpd_avx(auVar59,auVar103);
  auVar233._0_8_ = dVar52 * dVar58;
  auVar233._8_8_ = dVar52 * dVar58;
  auVar233._16_8_ = dVar54 * dVar57;
  auVar233._24_8_ = dVar54 * 0.0;
  dVar52 = param_1[0x52];
  auVar226._8_8_ = dVar52;
  auVar226._0_8_ = dVar52;
  auVar238._0_8_ = dVar147 * dVar52;
  auVar238._8_8_ = dVar148 * dVar52;
  auVar238._16_8_ = dVar147 * dVar58;
  auVar238._24_8_ = dVar148 * dVar58;
  auVar25 = vsubpd_avx(auVar238,auVar233);
  auVar131 = vshufpd_avx(auVar11,auVar110,1);
  auVar60._0_8_ = param_1[0x1e] + auVar131._0_8_ * auVar25._0_8_ + auVar24._0_8_ * auVar61._0_8_;
  auVar60._8_8_ = auVar131._8_8_ * auVar25._8_8_ + auVar24._8_8_ * auVar61._8_8_ + 0.0;
  auVar80._16_8_ = auVar12._0_8_ * auVar25._16_8_ + auVar24._16_8_ * auVar167._0_8_ + 0.0;
  auVar80._0_16_ = auVar60;
  auVar80._24_8_ = dVar56 * auVar25._24_8_ + auVar24._24_8_ * auVar167._8_8_ + 0.0;
  dVar58 = param_1[0x48];
  auVar11 = vshufps_avx(auVar110,auVar110,0x44);
  auVar103 = vunpcklpd_avx(auVar103,auVar167);
  auVar131 = vmovlhps_avx(auVar217,auVar201);
  auVar61 = vmovlhps_avx(auVar226,auVar207);
  auVar12._8_8_ = auVar12._0_8_;
  auVar25._16_16_ = auVar12;
  auVar25._0_16_ = auVar12;
  auVar24 = vblendpd_avx(auVar25,ZEXT1632(auVar110),1);
  auVar202._0_8_ =
       param_1[0x1e] +
       (auVar11._0_8_ * dVar10 + dVar146 * dVar58) * auVar103._0_8_ +
       auVar24._0_8_ * (dVar146 * auVar131._0_8_ + auVar11._0_8_ * auVar61._0_8_);
  auVar202._8_8_ =
       (auVar11._8_8_ * dVar10 + dVar146 * dVar58) * auVar103._8_8_ +
       auVar24._8_8_ * (dVar146 * auVar131._8_8_ + auVar11._8_8_ * auVar61._8_8_) + 0.0;
  auVar204._16_8_ =
       param_1[0x1e] +
       (auVar12._0_8_ * dVar149 + auVar167._0_8_ * dVar58) * auVar167._0_8_ +
       auVar24._16_8_ * (auVar167._0_8_ * dVar149 + auVar12._0_8_ * dVar57);
  auVar204._0_16_ = auVar202;
  auVar204._24_8_ =
       (dVar56 * 0.0 + auVar167._8_8_ * dVar58) * auVar167._8_8_ +
       auVar24._24_8_ * (auVar167._8_8_ * 0.0 + dVar56 * 0.0) + 0.0;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_1[0x25];
  auVar26._24_8_ = 0;
  auVar26._0_24_ = *(undefined1 (*) [24])(param_1 + 0x23);
  auVar150._8_8_ = 0;
  auVar150._0_8_ = param_1[0x33];
  auVar134._24_8_ = 0;
  auVar134._0_24_ = *(undefined1 (*) [24])(param_1 + 0x31);
  auVar24 = vsubpd_avx(auVar26,auVar134);
  auVar12 = auVar24._0_16_;
  auVar131 = vshufpd_avx(auVar12,auVar12,1);
  auVar61 = vsubpd_avx(auVar11,auVar150);
  dVar148 = auVar61._0_8_;
  auVar103._0_8_ = (ulonglong)dVar148 ^ __real_8000000000000000;
  auVar103._8_8_ = auVar61._8_8_ ^ __real_8000000000000000;
  auVar218._0_8_ = (double)(auVar131._0_8_ ^ __real_8000000000000000);
  auVar218._8_8_ = (double)(auVar131._8_8_ ^ __real_8000000000000000);
  dVar149 = param_1[0x5d];
  auVar229._8_8_ = 0;
  auVar229._0_8_ = dVar149;
  dVar57 = param_1[0x5c];
  auVar235._8_8_ = 0;
  auVar235._0_8_ = dVar57;
  dVar58 = param_1[0x61];
  auVar102._8_8_ = dVar58;
  auVar102._0_8_ = dVar58;
  auVar25 = vperm2f128_avx(auVar24,auVar24,0x11);
  dVar54 = auVar25._0_8_;
  dVar56 = auVar25._16_8_;
  auVar131 = vunpcklpd_avx(auVar229,auVar235);
  auVar135._0_8_ = dVar54 * auVar131._0_8_;
  auVar135._8_8_ = dVar54 * auVar131._8_8_;
  auVar135._16_8_ = dVar56 * dVar57;
  auVar135._24_8_ = dVar56 * 0.0;
  auVar131 = vshufpd_avx(auVar12,auVar12,3);
  dVar10 = param_1[0x60];
  auVar244._8_8_ = dVar10;
  auVar244._0_8_ = dVar10;
  auVar11 = vunpcklpd_avx(auVar102,auVar244);
  dVar146 = auVar131._0_8_;
  auVar227._0_8_ = auVar11._0_8_ * dVar146;
  dVar147 = auVar131._8_8_;
  auVar227._8_8_ = auVar11._8_8_ * dVar147;
  auVar227._16_8_ = dVar10 * dVar146;
  auVar227._24_8_ = dVar10 * dVar147;
  auVar25 = vsubpd_avx(auVar227,auVar135);
  dVar52 = param_1[0x62];
  auVar239._8_8_ = dVar52;
  auVar239._0_8_ = dVar52;
  auVar11 = vunpcklpd_avx(auVar103,auVar61);
  auVar136._0_8_ = dVar54 * dVar58;
  auVar136._8_8_ = dVar54 * dVar58;
  auVar136._16_8_ = dVar56 * dVar149;
  auVar136._24_8_ = dVar56 * 0.0;
  auVar174._0_8_ = dVar146 * dVar52;
  auVar174._8_8_ = dVar147 * dVar52;
  auVar174._16_8_ = dVar146 * dVar58;
  auVar174._24_8_ = dVar147 * dVar58;
  dVar52 = auVar24._0_8_;
  auVar13._0_8_ = (ulonglong)dVar52 ^ __real_8000000000000000;
  dVar54 = auVar24._8_8_;
  auVar13._8_8_ = (ulonglong)dVar54 ^ __real_8000000000000000;
  auVar24 = vsubpd_avx(auVar174,auVar136);
  auVar131 = vshufpd_avx(auVar12,auVar13,1);
  auVar184._0_8_ = param_1[0x1f] + auVar11._0_8_ * auVar25._0_8_ + auVar131._0_8_ * auVar24._0_8_;
  auVar184._8_8_ = auVar11._8_8_ * auVar25._8_8_ + auVar131._8_8_ * auVar24._8_8_ + 0.0;
  auVar192._16_8_ = auVar218._0_8_ * auVar25._16_8_ + dVar52 * auVar24._16_8_ + 0.0;
  auVar192._0_16_ = auVar184;
  auVar192._24_8_ = auVar218._8_8_ * auVar25._24_8_ + dVar54 * auVar24._24_8_ + 0.0;
  auVar131 = vshufps_avx(auVar13,auVar13,0x44);
  dVar58 = param_1[0x58];
  auVar61 = vunpcklpd_avx(auVar61,auVar218);
  auVar11 = vunpcklpd_avx(auVar244,auVar235);
  auVar103 = vunpcklpd_avx(auVar239,auVar102);
  auVar132._8_8_ = dVar52;
  auVar132._0_8_ = dVar52;
  auVar137._16_16_ = auVar132;
  auVar137._0_16_ = auVar132;
  auVar24 = vblendpd_avx(auVar137,ZEXT1632(auVar13),1);
  auVar14._0_8_ =
       param_1[0x1f] +
       auVar61._0_8_ * (dVar58 * dVar148 + auVar131._0_8_ * dVar10) +
       auVar24._0_8_ * (dVar148 * auVar11._0_8_ + auVar131._0_8_ * auVar103._0_8_);
  auVar14._8_8_ =
       auVar61._8_8_ * (dVar58 * dVar148 + auVar131._8_8_ * dVar10) +
       auVar24._8_8_ * (dVar148 * auVar11._8_8_ + auVar131._8_8_ * auVar103._8_8_) + 0.0;
  auVar27._16_8_ =
       param_1[0x1f] +
       auVar218._0_8_ * (dVar58 * auVar218._0_8_ + dVar52 * dVar57) +
       auVar24._16_8_ * (auVar218._0_8_ * dVar57 + dVar52 * dVar149);
  auVar27._0_16_ = auVar14;
  auVar27._24_8_ =
       auVar218._8_8_ * (dVar58 * auVar218._8_8_ + dVar54 * 0.0) +
       auVar24._24_8_ * (auVar218._8_8_ * 0.0 + dVar54 * 0.0) + 0.0;
  auVar131 = vshufpd_avx(auVar184,auVar184,1);
  auVar61 = vshufpd_avx(auVar14,auVar14,1);
  auVar138._16_16_ = auVar61;
  auVar138._0_16_ = auVar61;
  auVar24 = vblendpd_avx(auVar138,ZEXT1632(auVar131),1);
  auVar131 = vshufpd_avx(auVar60,auVar60,1);
  auVar61 = vshufpd_avx(auVar202,auVar202,1);
  auVar159._16_16_ = auVar61;
  auVar159._0_16_ = auVar61;
  auVar25 = vblendpd_avx(auVar159,ZEXT1632(auVar131),1);
  auVar208._0_8_ = auVar25._0_8_ + auVar24._0_8_;
  auVar208._8_8_ = auVar25._8_8_ + auVar24._8_8_;
  auVar212._16_8_ = auVar25._16_8_ + auVar24._16_8_;
  auVar212._0_16_ = auVar208;
  auVar212._24_8_ = auVar25._24_8_ + auVar24._24_8_;
  auVar24 = vblendpd_avx(auVar27,ZEXT1632(auVar192._16_16_),1);
  auVar219._0_8_ = auVar60._0_8_ + auVar184._0_8_;
  auVar219._8_8_ = auVar60._8_8_ + auVar184._8_8_;
  auVar221._16_8_ = auVar80._16_8_ + auVar192._16_8_;
  auVar221._0_16_ = auVar219;
  auVar221._24_8_ = auVar80._24_8_ + auVar192._24_8_;
  auVar25 = vblendpd_avx(auVar204,ZEXT1632(auVar80._16_16_),1);
  auVar151._0_8_ = auVar25._0_8_ + auVar24._0_8_;
  auVar151._8_8_ = auVar25._8_8_ + auVar24._8_8_;
  auVar160._16_8_ = auVar25._16_8_ + auVar24._16_8_;
  auVar160._0_16_ = auVar151;
  auVar160._24_8_ = auVar25._24_8_ + auVar24._24_8_;
  auVar24 = vblendpd_avx(auVar221,
                         ___ymm_0010000000000000000000000000000000000000000000000000000000000000,8);
  auVar28._0_8_ =
       auVar24._0_8_ & ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
  auVar28._8_8_ = auVar24._8_8_ & _UNK_150aa8f48;
  auVar28._16_8_ = auVar24._16_8_ & _UNK_150aa8f50;
  auVar28._24_8_ = auVar24._24_8_ & _UNK_150aa8f58;
  auVar24 = vcmppd_avx(auVar28,
                       ___ymm_3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a,6);
  auVar131 = vpackssdw_avx(auVar24._0_16_,auVar24._16_16_);
  dVar149 = param_1[0x1f];
  if ((((SUB161(auVar131 >> 0x1f,0) & 1) == 0 && (SUB161(auVar131 >> 0x3f,0) & 1) == 0) &&
      (SUB161(auVar131 >> 0x5f,0) & 1) == 0) && -1 < auVar131[0xf]) {
    auVar24 = vblendpd_avx(auVar212,
                           ___ymm_0010000000000000000000000000000000000000000000000000000000000000,8
                          );
    auVar29._0_8_ =
         auVar24._0_8_ & ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
    auVar29._8_8_ = auVar24._8_8_ & _UNK_150aa8f48;
    auVar29._16_8_ = auVar24._16_8_ & _UNK_150aa8f50;
    auVar29._24_8_ = auVar24._24_8_ & _UNK_150aa8f58;
    auVar24 = vcmppd_avx(auVar29,
                         ___ymm_3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a,6);
    auVar131 = vpackssdw_avx(auVar24._0_16_,auVar24._16_16_);
    if ((((SUB161(auVar131 >> 0x1f,0) & 1) != 0 || (SUB161(auVar131 >> 0x3f,0) & 1) != 0) ||
        (SUB161(auVar131 >> 0x5f,0) & 1) != 0) || auVar131[0xf] < '\0') goto LAB_140a012b8;
    auVar24 = vblendpd_avx(auVar160,
                           ___ymm_0010000000000000000000000000000000000000000000000000000000000000,8
                          );
    auVar30._0_8_ =
         auVar24._0_8_ & ___ymm_7fffffffffffffff7fffffffffffffff7fffffffffffffff7fffffffffffffff;
    auVar30._8_8_ = auVar24._8_8_ & _UNK_150aa8f48;
    auVar30._16_8_ = auVar24._16_8_ & _UNK_150aa8f50;
    auVar30._24_8_ = auVar24._24_8_ & _UNK_150aa8f58;
    auVar24 = vcmppd_avx(auVar30,
                         ___ymm_3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a3e45798ee2308c3a,6);
    auVar131 = vpackssdw_avx(auVar24._0_16_,auVar24._16_16_);
    if ((((SUB161(auVar131 >> 0x1f,0) & 1) != 0 || (SUB161(auVar131 >> 0x3f,0) & 1) != 0) ||
        (SUB161(auVar131 >> 0x5f,0) & 1) != 0) || auVar131[0xf] < '\0') goto LAB_140a012b8;
  }
  else {
LAB_140a012b8:
    auVar24 = vperm2f128_avx(auVar221,auVar160,0x31);
    auVar81._16_16_ = auVar151;
    auVar81._0_16_ = auVar219;
    auVar25 = vunpcklpd_avx(auVar81,auVar24);
    auVar131 = vshufpd_avx(auVar208,auVar208,1);
    auVar2._8_8_ = _UNK_150b54548;
    auVar2._0_8_ = ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000;
    auVar2._16_8_ = _UNK_150b54550;
    auVar2._24_8_ = _UNK_150b54558;
    auVar24 = vblendpd_avx(ZEXT1632(auVar131),auVar2,0xe);
    auVar31._0_8_ = auVar25._0_8_ * auVar24._0_8_;
    auVar31._8_8_ = auVar25._8_8_ * auVar24._8_8_;
    auVar31._16_8_ = auVar25._16_8_ * auVar24._16_8_;
    auVar31._24_8_ = auVar25._24_8_ * auVar24._24_8_;
    auVar131 = vshufpd_avx(auVar219,auVar219,1);
    auVar82._16_16_ = auVar151;
    auVar82._0_16_ = auVar131;
    auVar24 = vshufpd_avx(auVar82,ZEXT832(0),4);
    auVar131 = vunpcklpd_avx(auVar208,auVar212._16_16_);
    auVar83._0_8_ = auVar24._0_8_ * auVar131._0_8_;
    auVar83._8_8_ = auVar24._8_8_ * auVar131._8_8_;
    auVar83._16_8_ = auVar24._16_8_ * 0.0;
    auVar83._24_8_ = auVar24._24_8_ * 0.0;
    auVar27 = vsubpd_avx(auVar31,auVar83);
    auVar32._8_8_ = auVar151._0_8_;
    auVar32._0_8_ = auVar151._0_8_;
    auVar32._16_8_ = auVar160._16_8_;
    auVar32._24_8_ = auVar160._16_8_;
    auVar24 = vblendpd_avx(auVar32,
                           ___ymm_000000000000000000000000000000003ff00000000000003ff0000000000000,3
                          );
    auVar25 = vperm2f128_avx(auVar160,auVar160,0x28);
    auVar240._0_8_ =
         auVar24._0_8_ * auVar151._0_8_ +
         auVar25._0_8_ * ___ymm_8000000000000000800000000000000080000000000000008000000000000000;
    auVar240._8_8_ = auVar24._8_8_ * auVar151._8_8_ + auVar25._8_8_ * _UNK_150b513e8;
    auVar243._16_8_ = auVar24._16_8_ * 0.0 + auVar25._16_8_ * _UNK_150b513f0;
    auVar243._0_16_ = auVar240;
    auVar243._24_8_ = auVar24._24_8_ * 0.0 + auVar25._24_8_ * _UNK_150b513f8;
    auVar33._16_16_ = auVar219;
    auVar33._0_16_ = auVar208;
    auVar25 = vshufpd_avx(auVar33,auVar33,3);
    auVar24 = vblendpd_avx(ZEXT832((ulonglong)auVar221._16_8_),auVar212,4);
    auVar34._0_8_ = auVar25._0_8_ * auVar24._0_8_;
    auVar34._8_8_ = auVar25._8_8_ * auVar24._8_8_;
    auVar34._16_8_ = auVar25._16_8_ * auVar24._16_8_;
    auVar34._24_8_ = auVar25._24_8_ * auVar24._24_8_;
    auVar139._16_16_ = auVar208;
    auVar139._0_16_ = auVar219;
    auVar26 = vshufpd_avx(auVar139,auVar139,3);
    auVar25 = vblendpd_avx(ZEXT832((ulonglong)auVar212._16_8_),auVar221,4);
    auVar118._0_8_ = auVar26._0_8_ * auVar25._0_8_;
    auVar118._8_8_ = auVar26._8_8_ * auVar25._8_8_;
    auVar118._16_8_ = auVar26._16_8_ * auVar25._16_8_;
    auVar118._24_8_ = auVar26._24_8_ * auVar25._24_8_;
    auVar28 = vsubpd_avx(auVar34,auVar118);
    dVar57 = auVar27._0_8_;
    auVar26 = vperm2f128_avx(auVar27,auVar27,0x11);
    auVar25 = vshufpd_avx(auVar26,auVar26,0xf);
    auVar61 = auVar27._0_16_;
    auVar131 = vshufpd_avx(auVar61,auVar61,3);
    auVar35._0_8_ = dVar57 * auVar25._0_8_ + auVar131._0_8_ * auVar26._0_8_;
    auVar35._8_8_ = dVar57 * auVar25._8_8_ + auVar131._8_8_ * auVar26._0_8_;
    auVar35._16_8_ = dVar57 * auVar25._16_8_ + auVar131._0_8_ * auVar26._16_8_;
    auVar35._24_8_ = dVar57 * auVar25._24_8_ + auVar131._8_8_ * auVar26._16_8_;
    auVar119._16_16_ = auVar240;
    auVar119._0_16_ = auVar240;
    auVar26 = vperm2f128_avx(auVar243,auVar243,0x11);
    auVar26 = vshufpd_avx(auVar119,auVar26,0xc);
    dVar10 = auVar28._0_8_;
    auVar120._0_8_ = dVar10 * auVar26._0_8_;
    dVar52 = auVar28._8_8_;
    auVar120._8_8_ = dVar52 * auVar26._8_8_;
    dVar54 = auVar28._16_8_;
    auVar120._16_8_ = dVar54 * auVar26._16_8_;
    dVar56 = auVar28._24_8_;
    auVar120._24_8_ = dVar56 * auVar26._24_8_;
    auVar26 = vperm2f128_avx(auVar120,auVar120,1);
    auVar121._0_8_ = auVar120._0_8_ + auVar26._0_8_;
    auVar121._8_8_ = auVar120._8_8_ + auVar26._8_8_;
    auVar121._16_8_ = auVar120._16_8_ + auVar26._16_8_;
    auVar121._24_8_ = auVar120._24_8_ + auVar26._24_8_;
    auVar26 = vperm2f128_avx(auVar121,auVar121,1);
    auVar26 = vshufpd_avx(auVar121,auVar26,5);
    auVar122._0_8_ = auVar121._0_8_ + auVar26._0_8_;
    auVar122._8_8_ = auVar121._8_8_ + auVar26._8_8_;
    auVar122._16_8_ = auVar121._16_8_ + auVar26._16_8_;
    auVar122._24_8_ = auVar121._24_8_ + auVar26._24_8_;
    auVar26 = vsubpd_avx(auVar35,auVar122);
    if ((auVar26._0_8_ != 0.0) || (NAN(auVar26._0_8_))) {
      auVar36._0_8_ = dVar57 * 0.0;
      auVar36._8_8_ = dVar57 * 0.0;
      auVar36._16_8_ = auVar27._16_8_ * 0.0;
      auVar36._24_8_ = auVar27._16_8_ * 0.0;
      auVar80 = vperm2f128_avx(auVar36,auVar36,0x11);
      auVar175._0_8_ = auVar219._0_8_ * auVar240._0_8_;
      auVar175._8_8_ = auVar219._8_8_ * auVar240._0_8_;
      auVar175._16_8_ = auVar208._0_8_ * auVar240._0_8_;
      auVar175._24_8_ = auVar208._8_8_ * auVar240._0_8_;
      auVar205._16_16_ = auVar240;
      auVar205._0_16_ = auVar240;
      auVar222._0_8_ = auVar219._0_8_ * auVar240._0_8_;
      auVar222._8_8_ = auVar219._0_8_ * auVar240._8_8_;
      auVar222._16_8_ = auVar208._0_8_ * auVar240._0_8_;
      auVar222._24_8_ = auVar208._0_8_ * auVar240._8_8_;
      auVar27 = vsubpd_avx(auVar175,auVar222);
      auVar135 = vsubpd_avx(auVar80,auVar27);
      auVar131 = vshufpd_avx(auVar61,auVar61,3);
      auVar15._0_8_ = auVar131._0_8_ * 0.0;
      auVar15._8_8_ = auVar131._8_8_ * 0.0;
      auVar168._0_8_ = dVar10 * __real_3ff0000000000000;
      auVar168._8_8_ = dVar52 * 0.0;
      auVar176._16_8_ = dVar54 * 0.0;
      auVar176._0_16_ = auVar168;
      auVar176._24_8_ = dVar56 * 0.0;
      auVar223._16_16_ = auVar168;
      auVar223._0_16_ = auVar15;
      auVar134 = vshufpd_avx(auVar176,auVar223,4);
      auVar220._0_8_ =
           dVar10 * ___ymm_00000000000000003ff000000000000000000000000000000000000000000000;
      auVar220._8_8_ = dVar52 * _UNK_150aa8e88;
      auVar224._16_8_ = dVar54 * _DAT_150aa8e90;
      auVar224._0_16_ = auVar220;
      auVar224._24_8_ = dVar56 * _UNK_150aa8e98;
      auVar106._16_16_ = auVar220;
      auVar106._0_16_ = auVar15;
      auVar27 = vblendpd_avx(auVar224,auVar106,8);
      auVar140._0_8_ = auVar219._0_8_ * auVar25._0_8_;
      auVar140._8_8_ = auVar219._8_8_ * auVar25._8_8_;
      auVar140._16_8_ = auVar208._0_8_ * auVar25._16_8_;
      auVar140._24_8_ = auVar208._8_8_ * auVar25._24_8_;
      auVar117 = vperm2f128_avx(auVar243,auVar243,0x11);
      auVar25 = vblendpd_avx(auVar205,auVar117,10);
      auVar80 = vunpcklpd_avx(ZEXT832(0),ZEXT1632(auVar221._16_16_));
      auVar213._8_8_ = auVar208._0_8_;
      auVar213._0_8_ = auVar208._0_8_;
      auVar213._16_8_ = auVar212._16_8_;
      auVar213._24_8_ = auVar212._16_8_;
      auVar80 = vblendpd_avx(auVar80,auVar213,8);
      auVar117 = vblendpd_avx(auVar117,auVar205,10);
      auVar161._0_8_ = auVar25._0_8_ * auVar24._0_8_ + auVar80._0_8_ * auVar117._0_8_;
      auVar161._8_8_ = auVar25._8_8_ * auVar24._8_8_ + auVar80._8_8_ * auVar117._8_8_;
      auVar161._16_8_ = auVar25._16_8_ * auVar24._16_8_ + auVar80._16_8_ * auVar117._16_8_;
      auVar161._24_8_ = auVar25._24_8_ * auVar24._24_8_ + auVar80._24_8_ * auVar117._24_8_;
      auVar25 = vsubpd_avx(auVar140,auVar161);
      auVar24 = vdivpd_avx(___ymm_3ff0000000000000bff0000000000000bff00000000000003ff0000000000000,
                           auVar26);
      auVar209._0_8_ = auVar25._0_8_ * auVar24._0_8_;
      auVar209._8_8_ = auVar25._8_8_ * auVar24._8_8_;
      dVar10 = auVar24._16_8_;
      auVar214._16_8_ = auVar25._16_8_ * dVar10;
      auVar214._0_16_ = auVar209;
      dVar52 = auVar24._24_8_;
      auVar214._24_8_ = auVar25._24_8_ * dVar52;
      auVar131 = vshufpd_avx(auVar209,auVar209,1);
      auVar59 = auVar214._16_16_;
      auVar63 = vshufpd_avx(auVar59,auVar59,1);
      auVar61 = vsubpd_avx(auVar134._16_16_,auVar27._16_16_);
      auVar61 = vsubpd_avx(auVar15,auVar61);
      auVar152._0_8_ = auVar61._0_8_ * dVar10;
      auVar152._8_8_ = auVar61._8_8_ * dVar52;
      auVar61 = vshufpd_avx(auVar152,auVar152,1);
      auVar16._0_8_ = auVar135._0_8_ * auVar24._0_8_;
      auVar16._8_8_ = auVar135._8_8_ * auVar24._8_8_;
      auVar37._16_8_ = auVar135._16_8_ * dVar10;
      auVar37._0_16_ = auVar16;
      auVar37._24_8_ = auVar135._24_8_ * dVar52;
      auVar11 = vshufpd_avx(auVar16,auVar16,1);
      auVar103 = vshufpd_avx(auVar37._16_16_,auVar37._16_16_,1);
      auVar12 = vshufpd_avx(auVar28._16_16_,auVar28._16_16_,1);
      auVar13 = vshufpd_avx(auVar28._0_16_,auVar28._0_16_,1);
      auVar14 = vshufpd_avx(auVar24._16_16_,auVar24._16_16_,1);
      auVar62._8_8_ = 0;
      auVar62._0_8_ = (dVar57 - (auVar12._0_8_ * 0.0 + auVar13._0_8_ * 0.0)) * auVar14._0_8_;
      goto LAB_140a01546;
    }
  }
  auVar11 = ZEXT816(0);
  auVar63._8_8_ = 0;
  auVar63._0_8_ = __real_3ff0000000000000;
  auVar103 = ZEXT816(0);
  auVar152 = ZEXT816(0);
  auVar59 = ZEXT816(0) << 0x40;
  auVar61 = ZEXT816(0) << 0x40;
  auVar131 = ZEXT816(0) << 0x40;
  auVar209 = auVar63;
  auVar62 = auVar63;
LAB_140a01546:
  auVar11 = vunpcklpd_avx(auVar103,auVar11);
  auVar103 = vunpcklpd_avx(auVar59,auVar209);
  auVar131 = vunpcklpd_avx(auVar63,auVar131);
  dVar57 = *param_2;
  dVar10 = param_2[1];
  dVar52 = param_2[2];
  auVar64._0_8_ =
       param_3 * (auVar131._0_8_ * dVar57 + auVar103._0_8_ * dVar10 + auVar11._0_8_ * dVar52);
  auVar64._8_8_ =
       param_3 * (auVar131._8_8_ * dVar57 + auVar103._8_8_ * dVar10 + auVar11._8_8_ * dVar52);
  auVar84._16_8_ =
       param_3 * (auVar61._0_8_ * dVar57 + auVar152._0_8_ * dVar10 + auVar62._0_8_ * dVar52);
  auVar84._0_16_ = auVar64;
  auVar84._24_8_ =
       param_3 * (auVar61._8_8_ * dVar57 + auVar152._8_8_ * dVar10 + auVar62._8_8_ * dVar52);
  dVar57 = param_1[0x1e];
  auVar177._0_8_ = dVar149 * auVar64._0_8_;
  auVar177._8_8_ = dVar149 * auVar64._8_8_;
  auVar177._16_8_ = dVar149 * auVar84._16_8_;
  auVar177._24_8_ = dVar149 * auVar84._24_8_;
  auVar185._8_8_ = 0;
  auVar185._0_8_ = param_1[0x20];
  auVar210._8_8_ = 0;
  auVar210._0_8_ = param_1[0x21];
  auVar241._8_8_ = 0;
  auVar241._0_8_ = param_1[0x48];
  auVar236._8_8_ = 0;
  auVar236._0_8_ = param_1[0x49];
  auVar141._16_16_ = auVar64;
  auVar141._0_16_ = auVar64;
  auVar24 = vshufpd_avx(auVar141,ZEXT1632(auVar84._16_16_),1);
  auVar1 = *(undefined1 (*) [24])(param_1 + 0x2e);
  auVar142._24_8_ = 0;
  auVar142._0_24_ = auVar1;
  auVar65._8_8_ = 0;
  auVar65._0_8_ = param_1[0x33];
  auVar162._16_8_ = param_1[0x33];
  auVar162._0_16_ = *(undefined1 (*) [16])(param_1 + 0x31);
  auVar162._24_8_ = 0;
  auVar66._0_8_ = dVar57 * auVar64._0_8_ + auVar1._0_8_;
  auVar66._8_8_ = dVar57 * auVar64._8_8_ + auVar1._8_8_;
  auVar85._16_8_ = dVar57 * auVar84._16_8_ + auVar1._16_8_;
  auVar85._0_16_ = auVar66;
  auVar85._24_8_ = dVar57 * auVar84._24_8_ + 0.0;
  auVar111._8_8_ = 0;
  auVar111._0_8_ = param_1[0x50];
  auVar230._8_8_ = 0;
  auVar230._0_8_ = param_1[0x51];
  auVar6._8_8_ = dVar58;
  auVar6._0_8_ = dVar58;
  auVar131 = vmovhps_avx(auVar6,param_1[0x59]);
  dVar149 = param_1[0x5a];
  *(undefined1 (*) [16])(param_1 + 0x2e) = auVar66;
  auVar25 = vsubpd_avx(auVar162,auVar177);
  auVar61 = vunpcklpd_avx(auVar85._16_16_,auVar25._0_16_);
  *(undefined1 (*) [16])(param_1 + 0x30) = auVar61;
  auVar61 = vshufpd_avx(auVar25._0_16_,auVar25._16_16_,1);
  *(undefined1 (*) [16])(param_1 + 0x32) = auVar61;
  dVar101 = _UNK_150b54438;
  dVar183 = _UNK_150b54430;
  dVar166 = _UNK_150b54428;
  dVar148 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar147 = _UNK_150b54418;
  dVar146 = _UNK_150b54410;
  dVar56 = _UNK_150b54408;
  dVar54 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar52 = _UNK_15076c6f8;
  dVar10 = ___xmm_bff00000000000003ff0000000000000;
  local_238 = auVar24._0_8_;
  dStack_230 = auVar24._8_8_;
  dStack_228 = auVar24._16_8_;
  dStack_220 = auVar24._24_8_;
  if (0.0 < dVar57) {
    auVar11 = vunpcklpd_avx(auVar241,auVar236);
    auVar61 = vunpcklpd_avx(auVar185,auVar210);
    auVar178._16_8_ = param_1[0x22];
    auVar178._0_16_ = auVar61;
    auVar178._24_8_ = 0;
    auVar24 = vsubpd_avx(auVar178,auVar142);
    auVar179._0_8_ = auVar24._0_8_ * local_238;
    auVar179._8_8_ = auVar24._8_8_ * dStack_230;
    auVar179._16_8_ = auVar24._16_8_ * dStack_228;
    auVar179._24_8_ = auVar24._24_8_ * dStack_220;
    auVar193._16_16_ = auVar24._0_16_;
    auVar193._0_16_ = auVar24._0_16_;
    auVar24 = vshufpd_avx(auVar193,ZEXT1632(auVar24._16_16_),1);
    auVar143._0_8_ = auVar24._0_8_ * auVar64._0_8_;
    auVar143._8_8_ = auVar24._8_8_ * auVar64._8_8_;
    auVar143._16_8_ = auVar24._16_8_ * auVar84._16_8_;
    auVar143._24_8_ = auVar24._24_8_ * auVar84._24_8_;
    auVar24 = vsubpd_avx(auVar179,auVar143);
    auVar61 = vshufpd_avx(auVar24._0_16_,auVar24._0_16_,3);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = param_1[0x4c];
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_1[0x4d];
    auVar103 = vunpcklpd_avx(auVar4,auVar3);
    auVar25 = vperm2f128_avx(auVar24,auVar24,0x11);
    auVar12 = vunpcklpd_avx(auVar111,auVar230);
    dVar57 = auVar24._0_8_;
    auVar67._0_8_ =
         auVar11._0_8_ * auVar61._0_8_ + auVar25._0_8_ * auVar103._0_8_ + dVar57 * auVar12._0_8_;
    auVar67._8_8_ =
         auVar11._8_8_ * auVar61._8_8_ + auVar25._0_8_ * auVar103._8_8_ + dVar57 * auVar12._8_8_;
    auVar86._16_8_ =
         param_1[0x4a] * auVar61._0_8_ + auVar25._16_8_ * param_1[0x4e] + dVar57 * param_1[0x52];
    auVar86._0_16_ = auVar67;
    auVar86._24_8_ = auVar61._8_8_ * 0.0 + auVar25._16_8_ * 0.0 + dVar57 * 0.0;
    dVar9 = param_1[0x34];
    auVar169._8_8_ = 0;
    auVar169._0_8_ = param_1[0x37];
    auVar61 = vmovhps_avx(auVar169,param_1[0x36]);
    auVar186._8_8_ = 0;
    auVar186._0_8_ = param_1[0x35];
    auVar11 = vmovhps_avx(auVar186,param_1[0x34]);
    auVar103 = vshufpd_avx(auVar67,auVar67,3);
    auVar24 = vperm2f128_avx(auVar86,auVar86,0x11);
    dVar9 = dVar9 + (___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 *
                     auVar24._0_8_ * auVar11._0_8_ +
                    auVar103._0_8_ * param_1[0x36] *
                    ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
                    dVar9 * 0.0 +
                    ___xmm_bff00000000000003ff0000000000000 * auVar61._0_8_ * auVar67._0_8_) *
                    ___ymm_3fe00000000000003fe00000000000003fe00000000000003fe0000000000000;
    dVar51 = param_1[0x35] +
             (_UNK_150b54428 * auVar24._0_8_ * auVar11._8_8_ +
             auVar103._8_8_ * param_1[0x37] * _UNK_150b54408 +
             param_1[0x35] * 0.0 + _UNK_15076c6f8 * auVar61._8_8_ * auVar67._0_8_) * _UNK_150aa8f28;
    dVar53 = param_1[0x36] +
             (_UNK_150b54430 * auVar24._16_8_ * auVar61._0_8_ +
             auVar103._0_8_ * param_1[0x34] * _UNK_150b54410 +
             param_1[0x36] * 0.0 +
             ___xmm_bff00000000000003ff0000000000000 * auVar11._0_8_ * auVar67._0_8_) *
             _UNK_150aa8f30;
    dVar55 = param_1[0x37] +
             (_UNK_150b54438 * auVar24._16_8_ * auVar61._8_8_ +
             auVar103._8_8_ * param_1[0x35] * _UNK_150b54418 +
             param_1[0x37] * 0.0 + _UNK_15076c6f8 * auVar11._8_8_ * auVar67._0_8_) * _UNK_150aa8f38;
    auVar68._0_8_ = dVar9 * dVar9 + dVar53 * dVar53;
    auVar68._8_8_ = dVar51 * dVar51 + dVar55 * dVar55;
    auVar61 = vshufpd_avx(auVar68,auVar68,1);
    dVar57 = auVar68._0_8_ + auVar61._0_8_;
    auVar112._8_8_ = 0;
    auVar112._0_8_ = __real_3e45798ee2308c3a;
    auVar69._8_8_ = 0;
    auVar69._0_8_ = dVar57;
    auVar61 = vcmpsd_avx(auVar112,auVar69,6);
    uVar109 = ~auVar61._0_8_ & __real_ffffffffffffffff;
    dVar57 = __real_3ff0000000000000 / SQRT(dVar57);
    auVar153._0_8_ =
         (double)(((ulonglong)(dVar9 * dVar57) ^
                  ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) & uVar109
                 );
    auVar153._8_8_ = (double)(((ulonglong)(dVar51 * dVar57) ^ _UNK_150b54548) & uVar109);
    auVar163._16_8_ = (double)(((ulonglong)(dVar53 * dVar57) ^ _UNK_150b54550) & uVar109);
    auVar163._0_16_ = auVar153;
    auVar163._24_8_ = (double)(((ulonglong)(dVar55 * dVar57) ^ _UNK_150b54558) & uVar109);
    auVar245._0_8_ =
         (double)((ulonglong)auVar153._0_8_ ^
                 ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
    auVar245._8_8_ = (double)((ulonglong)auVar153._8_8_ ^ _UNK_150b54548);
    auVar245._16_8_ = (double)((ulonglong)auVar163._16_8_ ^ _UNK_150b54550);
    auVar245._24_8_ = (double)((ulonglong)auVar163._24_8_ ^ _UNK_150b54558);
    *(undefined1 (*) [16])(param_1 + 0x34) = auVar153;
    *(undefined1 (*) [16])(param_1 + 0x36) = auVar245._16_16_;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = param_1[4];
    auVar61 = vmovhps_avx(auVar17,param_1[7]);
    auVar38._0_8_ = auVar245._0_8_ * SUB168(*(undefined1 (*) [16])(param_1 + 5),0);
    auVar38._8_8_ = auVar245._8_8_ * SUB168(*(undefined1 (*) [16])(param_1 + 5),8);
    auVar38._16_8_ = auVar245._16_8_ * auVar61._0_8_;
    auVar38._24_8_ = auVar245._24_8_ * auVar61._8_8_;
    auVar87._16_16_ = auVar153;
    auVar87._0_16_ = auVar153;
    auVar26 = vperm2f128_avx(auVar245,auVar245,0x11);
    auVar24 = vshufpd_avx(auVar87,auVar26,9);
    auVar123._0_8_ = param_1[4] * auVar24._0_8_;
    auVar123._8_8_ = param_1[5] * auVar24._8_8_;
    auVar123._16_8_ = param_1[6] * auVar24._16_8_;
    auVar123._24_8_ = param_1[7] * auVar24._24_8_;
    auVar24 = vsubpd_avx(auVar38,auVar123);
    auVar18._0_8_ = auVar24._0_8_ + auVar24._0_8_;
    auVar18._8_8_ = auVar24._8_8_ + auVar24._8_8_;
    auVar39._16_8_ = auVar24._16_8_ + auVar24._16_8_;
    auVar39._0_16_ = auVar18;
    auVar39._24_8_ = auVar24._24_8_ + auVar24._24_8_;
    auVar24 = vshufpd_avx(auVar26,auVar26,0xf);
    auVar124._16_16_ = auVar18;
    auVar124._0_16_ = auVar18;
    auVar25 = vshufpd_avx(auVar124,ZEXT1632(auVar39._16_16_),1);
    dVar55 = auVar24._0_8_;
    dVar198 = auVar24._8_8_;
    dVar199 = auVar24._16_8_;
    dVar200 = auVar24._24_8_;
    auVar144._0_8_ = auVar18._0_8_ * auVar153._0_8_;
    auVar144._8_8_ = auVar18._8_8_ * auVar153._8_8_;
    auVar144._16_8_ = auVar39._16_8_ * auVar163._16_8_;
    auVar144._24_8_ = auVar39._24_8_ * auVar163._24_8_;
    auVar24 = vshufpd_avx(auVar87,ZEXT1632(auVar163._16_16_),1);
    auVar40._0_8_ = auVar18._0_8_ * auVar24._0_8_;
    auVar40._8_8_ = auVar18._8_8_ * auVar24._8_8_;
    auVar40._16_8_ = auVar39._16_8_ * auVar24._16_8_;
    auVar40._24_8_ = auVar39._24_8_ * auVar24._24_8_;
    auVar24 = vperm2f128_avx(auVar144,auVar144,1);
    auVar24 = vshufpd_avx(auVar24,auVar144,4);
    auVar24 = vsubpd_avx(auVar40,auVar24);
    auVar19._0_8_ = param_1[0x2e] + param_1[4] + dVar55 * auVar25._0_8_ + auVar24._0_8_;
    auVar19._8_8_ = param_1[0x2f] + param_1[5] + dVar198 * auVar25._8_8_ + auVar24._8_8_;
    auVar41._16_8_ = param_1[0x30] + param_1[6] + dVar199 * auVar25._16_8_ + auVar24._16_8_;
    auVar41._0_16_ = auVar19;
    auVar41._24_8_ = dVar200 * auVar25._24_8_ + 0.0 + auVar24._24_8_ + 0.0;
    *(undefined1 (*) [16])(param_1 + 0x20) = auVar19;
    dVar57 = (double)vmovlps_avx(auVar41._16_16_);
    param_1[0x22] = dVar57;
    auVar103 = vshufps_avx(auVar153,auVar153,0x44);
    auVar133._8_8_ = 0;
    auVar133._0_8_ = param_1[1];
    auVar61 = vmovhps_avx(auVar133,*param_1);
    auVar170._8_8_ = 0;
    auVar170._0_8_ = param_1[3];
    auVar11 = vmovhps_avx(auVar170,param_1[2]);
    dVar57 = auVar103._0_8_;
    dVar51 = auVar103._8_8_;
    auVar103 = vshufps_avx(auVar153,auVar153,0xee);
    dVar9 = auVar103._0_8_;
    dVar53 = auVar103._8_8_;
    param_1[0x26] =
         dVar148 * auVar61._0_8_ * auVar26._0_8_ +
         *param_1 * dVar55 + auVar11._0_8_ * dVar57 * dVar10 + param_1[2] * dVar9 * dVar54;
    param_1[0x27] =
         dVar166 * auVar61._8_8_ * auVar26._0_8_ +
         param_1[1] * dVar198 + auVar11._8_8_ * dVar51 * dVar52 + param_1[3] * dVar53 * dVar56;
    param_1[0x28] =
         dVar183 * auVar11._0_8_ * auVar26._16_8_ +
         param_1[2] * dVar199 + auVar61._0_8_ * dVar57 * dVar10 + *param_1 * dVar9 * dVar146;
    param_1[0x29] =
         dVar101 * auVar11._8_8_ * auVar26._16_8_ +
         param_1[3] * dVar200 + auVar61._8_8_ * dVar51 * dVar52 + param_1[1] * dVar53 * dVar147;
    dVar10 = auVar245._0_8_ + auVar245._0_8_;
    dVar52 = auVar245._8_8_ + auVar245._8_8_;
    dVar54 = auVar245._16_8_ + auVar245._16_8_;
    dVar56 = auVar245._24_8_ + auVar245._24_8_;
    auVar125._0_8_ = dVar10 * dVar57;
    auVar125._8_8_ = dVar52 * dVar51;
    auVar125._16_8_ = dVar54 * dVar57;
    auVar125._24_8_ = dVar56 * dVar51;
    auVar70._0_8_ = dVar10 * dVar9;
    auVar70._8_8_ = dVar52 * dVar53;
    auVar88._16_8_ = dVar54 * dVar9;
    auVar88._0_16_ = auVar70;
    auVar88._24_8_ = dVar56 * dVar53;
    auVar42._0_8_ = dVar10 * dVar55;
    auVar42._8_8_ = dVar52 * dVar198;
    auVar42._16_8_ = dVar54 * dVar199;
    auVar42._24_8_ = dVar56 * dVar200;
    auVar24 = vperm2f128_avx(auVar88,auVar125,0x21);
    auVar24 = vshufpd_avx(auVar24,ZEXT1632(auVar125._16_16_),4);
    auVar211._0_8_ = auVar42._0_8_ + auVar24._0_8_;
    auVar211._8_8_ = auVar42._8_8_ + auVar24._8_8_;
    auVar215._16_8_ = auVar42._16_8_ + auVar24._16_8_;
    auVar215._0_16_ = auVar211;
    auVar215._24_8_ = auVar42._24_8_ + auVar24._24_8_;
    auVar26 = vsubpd_avx(auVar24,auVar42);
    auVar61 = vshufpd_avx(auVar70,auVar70,1);
    auVar71._8_8_ = auVar125._0_8_;
    auVar71._0_8_ = auVar125._0_8_;
    auVar89._16_16_ = auVar71;
    auVar89._0_16_ = auVar71;
    auVar24 = vblendpd_avx(auVar89,ZEXT1632(auVar61),1);
    auVar43._16_16_ = auVar61;
    auVar43._0_16_ = auVar61;
    auVar25 = vblendpd_avx(ZEXT1632(CONCAT88(auVar163._16_8_ * dVar54,auVar163._16_8_ * dVar54)),
                           auVar43,0xc);
    auVar44._0_8_ = auVar24._0_8_ + auVar25._0_8_;
    auVar44._8_8_ = auVar24._8_8_ + auVar25._8_8_;
    auVar44._16_8_ = auVar24._16_8_ + auVar25._16_8_;
    auVar44._24_8_ = auVar24._24_8_ + auVar25._24_8_;
    auVar90._8_8_ = __real_3ff0000000000000;
    auVar90._0_8_ = __real_3ff0000000000000;
    auVar90._16_8_ = __real_3ff0000000000000;
    auVar90._24_8_ = __real_3ff0000000000000;
    auVar25 = vsubpd_avx(auVar90,auVar44);
    dVar56 = auVar25._0_8_;
    dVar57 = param_1[0x18];
    dVar10 = param_1[0x1a];
    auVar24 = vperm2f128_avx(auVar26,auVar26,0x11);
    auVar103 = ZEXT816(0) << 0x40;
    auVar61 = vmovhpd_avx(auVar103,param_1[0x19]);
    dVar52 = auVar61._0_8_;
    dVar54 = auVar61._8_8_;
    auVar61 = vshufpd_avx(auVar211,auVar211,3);
    auVar113._0_8_ = auVar61._0_8_ * 0.0 + dVar52 * auVar24._0_8_ + dVar57 * dVar56;
    auVar113._8_8_ = auVar61._8_8_ * 0.0 + dVar54 * auVar24._0_8_ + dVar56 * 0.0;
    auVar126._16_8_ = dVar10 * auVar61._0_8_ + auVar24._16_8_ * 0.0 + dVar56 * 0.0;
    auVar126._0_16_ = auVar113;
    auVar126._24_8_ = auVar61._8_8_ * 0.0 + auVar24._16_8_ * 0.0 + dVar56 * 0.0;
    auVar24 = vperm2f128_avx(auVar215,auVar215,0x11);
    auVar13 = auVar25._0_16_;
    auVar61 = vshufpd_avx(auVar13,auVar13,3);
    dVar56 = auVar26._0_8_;
    auVar187._0_8_ = dVar56 * 0.0 + dVar57 * auVar24._0_8_ + dVar52 * auVar61._0_8_;
    auVar187._8_8_ = dVar56 * 0.0 + auVar24._0_8_ * 0.0 + dVar54 * auVar61._8_8_;
    auVar194._16_8_ = dVar10 * dVar56 + auVar24._16_8_ * 0.0 + auVar61._0_8_ * 0.0;
    auVar194._0_16_ = auVar187;
    auVar194._24_8_ = dVar56 * 0.0 + auVar24._16_8_ * 0.0 + auVar61._8_8_ * 0.0;
    auVar12 = auVar26._0_16_;
    auVar61 = vshufpd_avx(auVar12,auVar12,3);
    auVar24 = vperm2f128_avx(auVar25,auVar25,0x11);
    auVar154._0_8_ = dVar57 * auVar61._0_8_ + dVar52 * auVar211._0_8_ + auVar24._0_8_ * 0.0;
    auVar154._8_8_ = auVar61._8_8_ * 0.0 + dVar54 * auVar211._0_8_ + auVar24._0_8_ * 0.0;
    auVar164._16_8_ = auVar61._0_8_ * 0.0 + auVar211._0_8_ * 0.0 + dVar10 * auVar24._16_8_;
    auVar164._0_16_ = auVar154;
    auVar164._24_8_ = auVar61._8_8_ * 0.0 + auVar211._0_8_ * 0.0 + auVar24._16_8_ * 0.0;
    auVar11 = vunpcklpd_avx(auVar13,auVar215._16_16_);
    auVar61 = vshufpd_avx(auVar12,auVar12,1);
    auVar145._16_16_ = auVar61;
    auVar145._0_16_ = auVar11;
    auVar24 = vblendpd_avx(ZEXT1632(auVar11),auVar145,0xc);
    dVar57 = auVar24._0_8_;
    dVar10 = auVar24._8_8_;
    dVar52 = auVar24._16_8_;
    dVar54 = auVar24._24_8_;
    auVar11 = vshufpd_avx(auVar113,auVar113,3);
    auVar61 = vblendpd_avx(auVar13,auVar26._16_16_,1);
    dVar166 = auVar61._0_8_;
    dVar183 = auVar61._8_8_;
    auVar61 = vshufpd_avx(auVar211,auVar12,1);
    auVar26 = vperm2f128_avx(auVar126,auVar126,0x11);
    auVar24 = vblendpd_avx(auVar25,ZEXT1632(auVar61),3);
    dVar56 = auVar24._0_8_;
    dVar146 = auVar24._8_8_;
    dVar147 = auVar24._16_8_;
    dVar148 = auVar24._24_8_;
    auVar114._0_8_ = dVar56 * auVar26._0_8_ + dVar57 * auVar113._0_8_ + dVar166 * auVar11._0_8_;
    auVar114._8_8_ = dVar146 * auVar26._0_8_ + dVar10 * auVar113._0_8_ + dVar183 * auVar11._8_8_;
    auVar127._16_8_ =
         dVar147 * auVar26._16_8_ + dVar52 * auVar113._0_8_ + auVar211._0_8_ * auVar11._0_8_;
    auVar127._0_16_ = auVar114;
    auVar127._24_8_ =
         dVar148 * auVar26._16_8_ + dVar54 * auVar113._0_8_ + auVar211._8_8_ * auVar11._8_8_;
    auVar61 = vshufpd_avx(auVar187,auVar187,3);
    auVar24 = vperm2f128_avx(auVar194,auVar194,0x11);
    auVar72._0_8_ = dVar56 * auVar24._0_8_ + auVar61._0_8_ * dVar166 + dVar57 * auVar187._0_8_;
    auVar72._8_8_ = dVar146 * auVar24._0_8_ + auVar61._8_8_ * dVar183 + dVar10 * auVar187._0_8_;
    auVar91._16_8_ =
         dVar147 * auVar24._16_8_ + auVar61._0_8_ * auVar211._0_8_ + dVar52 * auVar187._0_8_;
    auVar91._0_16_ = auVar72;
    auVar91._24_8_ =
         dVar148 * auVar24._16_8_ + auVar61._8_8_ * auVar211._8_8_ + dVar54 * auVar187._0_8_;
    auVar61 = vshufpd_avx(auVar154,auVar154,3);
    auVar24 = vperm2f128_avx(auVar164,auVar164,0x11);
    auVar20._0_8_ = dVar56 * auVar24._0_8_ + dVar57 * auVar154._0_8_ + dVar166 * auVar61._0_8_;
    auVar20._8_8_ = dVar146 * auVar24._0_8_ + dVar10 * auVar154._0_8_ + dVar183 * auVar61._8_8_;
    auVar45._16_8_ =
         dVar147 * auVar24._16_8_ + dVar52 * auVar154._0_8_ + auVar211._0_8_ * auVar61._0_8_;
    auVar45._0_16_ = auVar20;
    auVar45._24_8_ =
         dVar148 * auVar24._16_8_ + dVar54 * auVar154._0_8_ + auVar211._8_8_ * auVar61._8_8_;
    *(undefined1 (*) [16])(param_1 + 0x48) = auVar114;
    dVar57 = (double)vmovlpd_avx(auVar127._16_16_);
    param_1[0x4a] = dVar57;
    param_1[0x4b] = 0.0;
    *(undefined1 (*) [16])(param_1 + 0x4c) = auVar72;
    dVar57 = (double)vmovlpd_avx(auVar91._16_16_);
    param_1[0x4e] = dVar57;
    param_1[0x4f] = 0.0;
    *(undefined1 (*) [16])(param_1 + 0x50) = auVar20;
    dVar57 = (double)vmovlps_avx(auVar45._16_16_);
    param_1[0x52] = dVar57;
    *(undefined1 (*) [16])(param_1 + 0x55) = auVar103;
    *(undefined1 (*) [16])(param_1 + 0x53) = auVar103;
    param_1[0x57] = 1.0;
  }
  dVar183 = _UNK_150b54438;
  dVar166 = _UNK_150b54430;
  dVar148 = _UNK_150b54428;
  dVar147 = ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000;
  dVar146 = _UNK_150b54418;
  dVar56 = _UNK_150b54410;
  dVar54 = _UNK_150b54408;
  dVar52 = ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000;
  dVar10 = _UNK_15076c6f8;
  dVar57 = ___xmm_bff00000000000003ff0000000000000;
  if (0.0 < param_1[0x1f]) {
    auVar5._8_8_ = 0;
    auVar5._0_8_ = param_1[0x25];
    auVar46._16_8_ = param_1[0x25];
    auVar46._0_16_ = *(undefined1 (*) [16])(param_1 + 0x23);
    auVar46._24_8_ = 0;
    auVar25 = vsubpd_avx(auVar46,auVar162);
    auVar61 = vsubpd_avx(auVar5,auVar65);
    auVar107._16_16_ = auVar25._0_16_;
    auVar107._0_16_ = auVar25._0_16_;
    auVar24 = vshufpd_avx(auVar107,ZEXT1632(auVar61),1);
    auVar92._0_8_ = auVar24._0_8_ * auVar64._0_8_;
    auVar92._8_8_ = auVar24._8_8_ * auVar64._8_8_;
    auVar92._16_8_ = auVar24._16_8_ * auVar84._16_8_;
    auVar92._24_8_ = auVar24._24_8_ * auVar84._24_8_;
    auVar47._0_8_ = auVar25._0_8_ * local_238;
    auVar47._8_8_ = auVar25._8_8_ * dStack_230;
    auVar47._16_8_ = auVar25._16_8_ * dStack_228;
    auVar47._24_8_ = auVar25._24_8_ * dStack_220;
    auVar25 = vsubpd_avx(auVar92,auVar47);
    auVar61 = vshufpd_avx(auVar25._0_16_,auVar25._0_16_,3);
    auVar11 = vunpcklpd_avx(auVar235,auVar229);
    auVar7._8_8_ = dVar58;
    auVar7._0_8_ = dVar58;
    auVar7._16_8_ = dVar58;
    auVar7._24_8_ = dVar58;
    auVar24 = vblendpd_avx(ZEXT1632(auVar131),auVar7,0xc);
    auVar8._8_8_ = dVar149;
    auVar8._0_8_ = dVar149;
    auVar8._16_8_ = dVar149;
    auVar8._24_8_ = dVar149;
    auVar24 = vblendpd_avx(auVar24,auVar8,4);
    auVar26 = vperm2f128_avx(auVar25,auVar25,0x11);
    auVar103 = vunpcklpd_avx(auVar244,auVar102);
    dVar149 = auVar25._0_8_;
    auVar131 = vblendps_avx((undefined1  [16])0x0,auVar239,3);
    auVar73._0_8_ =
         auVar24._0_8_ * auVar61._0_8_ + auVar26._0_8_ * auVar11._0_8_ + dVar149 * auVar103._0_8_;
    auVar73._8_8_ =
         auVar24._8_8_ * auVar61._8_8_ + auVar26._0_8_ * auVar11._8_8_ + dVar149 * auVar103._8_8_;
    auVar93._16_8_ =
         auVar24._16_8_ * auVar61._0_8_ + auVar26._16_8_ * param_1[0x5e] + dVar149 * auVar131._0_8_;
    auVar93._0_16_ = auVar73;
    auVar93._24_8_ =
         auVar24._24_8_ * auVar61._8_8_ + auVar26._16_8_ * 0.0 + dVar149 * auVar131._8_8_;
    dVar58 = param_1[0x38];
    auVar188._8_8_ = 0;
    auVar188._0_8_ = param_1[0x3b];
    auVar131 = vmovhps_avx(auVar188,param_1[0x3a]);
    auVar203._8_8_ = 0;
    auVar203._0_8_ = param_1[0x39];
    auVar61 = vmovhps_avx(auVar203,param_1[0x38]);
    auVar11 = vshufpd_avx(auVar73,auVar73,3);
    auVar24 = vperm2f128_avx(auVar93,auVar93,0x11);
    dVar58 = dVar58 + (auVar24._0_8_ * auVar61._0_8_ *
                       ___ymm_bff00000000000003ff00000000000003ff0000000000000bff0000000000000 +
                      auVar11._0_8_ * param_1[0x3a] *
                      ___ymm_bff0000000000000bff00000000000003ff00000000000003ff0000000000000 +
                      auVar131._0_8_ * auVar73._0_8_ * ___xmm_bff00000000000003ff0000000000000 +
                      dVar58 * 0.0) *
                      ___ymm_3fe00000000000003fe00000000000003fe00000000000003fe0000000000000;
    dVar101 = param_1[0x39] +
              (auVar24._0_8_ * auVar61._8_8_ * _UNK_150b54428 +
              auVar11._8_8_ * param_1[0x3b] * _UNK_150b54408 +
              auVar131._8_8_ * auVar73._0_8_ * _UNK_15076c6f8 + param_1[0x39] * 0.0) *
              _UNK_150aa8f28;
    dVar9 = param_1[0x3a] +
            (auVar24._16_8_ * auVar131._0_8_ * _UNK_150b54430 +
            auVar11._0_8_ * param_1[0x38] * _UNK_150b54410 +
            auVar61._0_8_ * auVar73._0_8_ * ___xmm_bff00000000000003ff0000000000000 +
            param_1[0x3a] * 0.0) * _UNK_150aa8f30;
    dVar51 = param_1[0x3b] +
             (auVar24._16_8_ * auVar131._8_8_ * _UNK_150b54438 +
             auVar11._8_8_ * param_1[0x39] * _UNK_150b54418 +
             auVar61._8_8_ * auVar73._0_8_ * _UNK_15076c6f8 + param_1[0x3b] * 0.0) * _UNK_150aa8f38;
    auVar155._0_8_ = dVar58 * dVar58 + dVar9 * dVar9;
    auVar155._8_8_ = dVar101 * dVar101 + dVar51 * dVar51;
    auVar131 = vshufpd_avx(auVar155,auVar155,1);
    dVar149 = auVar155._0_8_ + auVar131._0_8_;
    auVar171._8_8_ = 0;
    auVar171._0_8_ = __real_3e45798ee2308c3a;
    auVar156._8_8_ = 0;
    auVar156._0_8_ = dVar149;
    auVar131 = vcmpsd_avx(auVar171,auVar156,6);
    uVar109 = ~auVar131._0_8_ & __real_ffffffffffffffff;
    dVar149 = __real_3ff0000000000000 / SQRT(dVar149);
    auVar189._0_8_ =
         (double)(((ulonglong)(dVar58 * dVar149) ^
                  ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000) & uVar109
                 );
    auVar189._8_8_ = (double)(((ulonglong)(dVar101 * dVar149) ^ _UNK_150b54548) & uVar109);
    auVar195._16_8_ = (double)(((ulonglong)(dVar9 * dVar149) ^ _UNK_150b54550) & uVar109);
    auVar195._0_16_ = auVar189;
    auVar195._24_8_ = (double)(((ulonglong)(dVar51 * dVar149) ^ _UNK_150b54558) & uVar109);
    auVar180._0_8_ =
         (double)((ulonglong)auVar189._0_8_ ^
                 ___ymm_3ff0000000000000000000000000000000000000000000000000000000000000);
    auVar180._8_8_ = (double)((ulonglong)auVar189._8_8_ ^ _UNK_150b54548);
    auVar180._16_8_ = (double)((ulonglong)auVar195._16_8_ ^ _UNK_150b54550);
    auVar180._24_8_ = (double)((ulonglong)auVar195._24_8_ ^ _UNK_150b54558);
    *(undefined1 (*) [16])(param_1 + 0x38) = auVar189;
    *(undefined1 (*) [16])(param_1 + 0x3a) = auVar180._16_16_;
    auVar74._8_8_ = 0;
    auVar74._0_8_ = param_1[0x10];
    auVar131 = vmovhps_avx(auVar74,param_1[0x13]);
    auVar94._0_8_ = SUB168(*(undefined1 (*) [16])(param_1 + 0x11),0) * auVar180._0_8_;
    auVar94._8_8_ = SUB168(*(undefined1 (*) [16])(param_1 + 0x11),8) * auVar180._8_8_;
    auVar94._16_8_ = auVar131._0_8_ * auVar180._16_8_;
    auVar94._24_8_ = auVar131._8_8_ * auVar180._24_8_;
    auVar225._16_16_ = auVar189;
    auVar225._0_16_ = auVar189;
    auVar26 = vperm2f128_avx(auVar180,auVar180,0x11);
    auVar24 = vshufpd_avx(auVar225,auVar26,9);
    auVar206._0_8_ = param_1[0x10] * auVar24._0_8_;
    auVar206._8_8_ = param_1[0x11] * auVar24._8_8_;
    auVar206._16_8_ = param_1[0x12] * auVar24._16_8_;
    auVar206._24_8_ = param_1[0x13] * auVar24._24_8_;
    auVar24 = vsubpd_avx(auVar94,auVar206);
    auVar75._0_8_ = auVar24._0_8_ + auVar24._0_8_;
    auVar75._8_8_ = auVar24._8_8_ + auVar24._8_8_;
    auVar95._16_8_ = auVar24._16_8_ + auVar24._16_8_;
    auVar95._0_16_ = auVar75;
    auVar95._24_8_ = auVar24._24_8_ + auVar24._24_8_;
    auVar24 = vshufpd_avx(auVar26,auVar26,0xf);
    auVar228._16_16_ = auVar75;
    auVar228._0_16_ = auVar75;
    auVar25 = vshufpd_avx(auVar228,ZEXT1632(auVar95._16_16_),1);
    dVar51 = auVar24._0_8_;
    dVar53 = auVar24._8_8_;
    dVar55 = auVar24._16_8_;
    dVar198 = auVar24._24_8_;
    auVar234._0_8_ = auVar75._0_8_ * auVar189._0_8_;
    auVar234._8_8_ = auVar75._8_8_ * auVar189._8_8_;
    auVar234._16_8_ = auVar95._16_8_ * auVar195._16_8_;
    auVar234._24_8_ = auVar95._24_8_ * auVar195._24_8_;
    auVar24 = vshufpd_avx(auVar225,ZEXT1632(auVar195._16_16_),1);
    auVar96._0_8_ = auVar24._0_8_ * auVar75._0_8_;
    auVar96._8_8_ = auVar24._8_8_ * auVar75._8_8_;
    auVar96._16_8_ = auVar24._16_8_ * auVar95._16_8_;
    auVar96._24_8_ = auVar24._24_8_ * auVar95._24_8_;
    auVar24 = vperm2f128_avx(auVar234,auVar234,1);
    auVar24 = vshufpd_avx(auVar24,auVar234,4);
    auVar24 = vsubpd_avx(auVar96,auVar24);
    auVar76._0_8_ = param_1[0x31] + param_1[0x10] + dVar51 * auVar25._0_8_ + auVar24._0_8_;
    auVar76._8_8_ = param_1[0x32] + param_1[0x11] + dVar53 * auVar25._8_8_ + auVar24._8_8_;
    auVar97._16_8_ = param_1[0x33] + param_1[0x12] + dVar55 * auVar25._16_8_ + auVar24._16_8_;
    auVar97._0_16_ = auVar76;
    auVar97._24_8_ = dVar198 * auVar25._24_8_ + 0.0 + auVar24._24_8_ + 0.0;
    *(undefined1 (*) [16])(param_1 + 0x23) = auVar76;
    dVar149 = (double)vmovlps_avx(auVar97._16_16_);
    param_1[0x25] = dVar149;
    auVar11 = vshufps_avx(auVar189,auVar189,0x44);
    auVar231._8_8_ = 0;
    auVar231._0_8_ = param_1[0xd];
    auVar131 = vmovhpd_avx(auVar231,param_1[0xc]);
    auVar237._8_8_ = 0;
    auVar237._0_8_ = param_1[0xf];
    auVar61 = vmovhpd_avx(auVar237,param_1[0xe]);
    dVar149 = auVar11._0_8_;
    dVar101 = auVar11._8_8_;
    auVar11 = vshufps_avx(auVar189,auVar189,0xee);
    dVar58 = auVar11._0_8_;
    dVar9 = auVar11._8_8_;
    param_1[0x2a] =
         auVar131._0_8_ * auVar26._0_8_ * dVar147 +
         param_1[0xe] * dVar58 * dVar52 + param_1[0xc] * dVar51 + auVar61._0_8_ * dVar149 * dVar57;
    param_1[0x2b] =
         auVar131._8_8_ * auVar26._0_8_ * dVar148 +
         param_1[0xf] * dVar9 * dVar54 + param_1[0xd] * dVar53 + auVar61._8_8_ * dVar101 * dVar10;
    param_1[0x2c] =
         auVar61._0_8_ * auVar26._16_8_ * dVar166 +
         param_1[0xc] * dVar58 * dVar56 + param_1[0xe] * dVar55 + auVar131._0_8_ * dVar149 * dVar57;
    param_1[0x2d] =
         auVar61._8_8_ * auVar26._16_8_ * dVar183 +
         param_1[0xd] * dVar9 * dVar146 + param_1[0xf] * dVar198 + auVar131._8_8_ * dVar101 * dVar10
    ;
    dVar57 = auVar180._0_8_ + auVar180._0_8_;
    dVar10 = auVar180._8_8_ + auVar180._8_8_;
    dVar52 = auVar180._16_8_ + auVar180._16_8_;
    dVar54 = auVar180._24_8_ + auVar180._24_8_;
    auVar181._0_8_ = dVar149 * dVar57;
    auVar181._8_8_ = dVar101 * dVar10;
    auVar181._16_8_ = dVar149 * dVar52;
    auVar181._24_8_ = dVar101 * dVar54;
    auVar190._0_8_ = dVar57 * dVar58;
    auVar190._8_8_ = dVar10 * dVar9;
    auVar196._16_8_ = dVar52 * dVar58;
    auVar196._0_16_ = auVar190;
    auVar196._24_8_ = dVar54 * dVar9;
    auVar98._0_8_ = dVar51 * dVar57;
    auVar98._8_8_ = dVar53 * dVar10;
    auVar98._16_8_ = dVar55 * dVar52;
    auVar98._24_8_ = dVar198 * dVar54;
    auVar24 = vperm2f128_avx(auVar196,auVar181,0x21);
    auVar24 = vshufpd_avx(auVar24,ZEXT1632(auVar181._16_16_),4);
    auVar115._0_8_ = auVar98._0_8_ + auVar24._0_8_;
    auVar115._8_8_ = auVar98._8_8_ + auVar24._8_8_;
    auVar128._16_8_ = auVar98._16_8_ + auVar24._16_8_;
    auVar128._0_16_ = auVar115;
    auVar128._24_8_ = auVar98._24_8_ + auVar24._24_8_;
    auVar26 = vsubpd_avx(auVar24,auVar98);
    auVar131 = vshufpd_avx(auVar190,auVar190,1);
    auVar157._8_8_ = auVar181._0_8_;
    auVar157._0_8_ = auVar181._0_8_;
    auVar165._16_16_ = auVar157;
    auVar165._0_16_ = auVar157;
    auVar24 = vblendpd_avx(auVar165,ZEXT1632(auVar131),1);
    auVar25 = vblendpd_avx(ZEXT1632(CONCAT88(auVar195._16_8_ * dVar52,auVar195._16_8_ * dVar52)),
                           ZEXT1632(auVar131) << 0x80,0xc);
    auVar99._0_8_ = auVar24._0_8_ + auVar25._0_8_;
    auVar99._8_8_ = auVar24._8_8_ + auVar25._8_8_;
    auVar99._16_8_ = auVar24._16_8_ + auVar25._16_8_;
    auVar99._24_8_ = auVar24._24_8_ + auVar25._24_8_;
    auVar108._8_8_ = __real_3ff0000000000000;
    auVar108._0_8_ = __real_3ff0000000000000;
    auVar108._16_8_ = __real_3ff0000000000000;
    auVar108._24_8_ = __real_3ff0000000000000;
    auVar25 = vsubpd_avx(auVar108,auVar99);
    dVar58 = auVar25._0_8_;
    dVar149 = param_1[0x1b];
    dVar57 = param_1[0x1d];
    auVar24 = vperm2f128_avx(auVar26,auVar26,0x11);
    auVar11 = ZEXT816(0) << 0x40;
    auVar131 = vmovhpd_avx(auVar11,param_1[0x1c]);
    dVar10 = auVar131._0_8_;
    dVar52 = auVar131._8_8_;
    auVar131 = vshufpd_avx(auVar115,auVar115,3);
    auVar191._0_8_ = auVar131._0_8_ * 0.0 + dVar10 * auVar24._0_8_ + dVar149 * dVar58;
    auVar191._8_8_ = auVar131._8_8_ * 0.0 + dVar52 * auVar24._0_8_ + dVar58 * 0.0;
    auVar197._16_8_ = dVar57 * auVar131._0_8_ + auVar24._16_8_ * 0.0 + dVar58 * 0.0;
    auVar197._0_16_ = auVar191;
    auVar197._24_8_ = auVar131._8_8_ * 0.0 + auVar24._16_8_ * 0.0 + dVar58 * 0.0;
    auVar24 = vperm2f128_avx(auVar128,auVar128,0x11);
    auVar12 = auVar25._0_16_;
    auVar131 = vshufpd_avx(auVar12,auVar12,3);
    dVar58 = auVar26._0_8_;
    auVar172._0_8_ = dVar58 * 0.0 + dVar149 * auVar24._0_8_ + dVar10 * auVar131._0_8_;
    auVar172._8_8_ = dVar58 * 0.0 + auVar24._0_8_ * 0.0 + dVar52 * auVar131._8_8_;
    auVar182._16_8_ = dVar57 * dVar58 + auVar24._16_8_ * 0.0 + auVar131._0_8_ * 0.0;
    auVar182._0_16_ = auVar172;
    auVar182._24_8_ = dVar58 * 0.0 + auVar24._16_8_ * 0.0 + auVar131._8_8_ * 0.0;
    auVar103 = auVar26._0_16_;
    auVar131 = vshufpd_avx(auVar103,auVar103,3);
    auVar24 = vperm2f128_avx(auVar25,auVar25,0x11);
    auVar21._0_8_ = dVar10 * auVar115._0_8_ + dVar149 * auVar131._0_8_ + auVar24._0_8_ * 0.0;
    auVar21._8_8_ = dVar52 * auVar115._0_8_ + auVar131._8_8_ * 0.0 + auVar24._0_8_ * 0.0;
    auVar48._16_8_ = auVar115._0_8_ * 0.0 + auVar131._0_8_ * 0.0 + auVar24._16_8_ * dVar57;
    auVar48._0_16_ = auVar21;
    auVar48._24_8_ = auVar115._0_8_ * 0.0 + auVar131._8_8_ * 0.0 + auVar24._16_8_ * 0.0;
    auVar61 = vunpcklpd_avx(auVar12,auVar128._16_16_);
    auVar131 = vshufpd_avx(auVar103,auVar103,1);
    auVar216._16_16_ = auVar131;
    auVar216._0_16_ = auVar21;
    auVar24 = vblendpd_avx(ZEXT1632(auVar61),auVar216,0xc);
    dVar52 = auVar24._0_8_;
    dVar54 = auVar24._8_8_;
    dVar56 = auVar24._16_8_;
    dVar146 = auVar24._24_8_;
    auVar61 = vshufpd_avx(auVar191,auVar191,3);
    auVar131 = vblendpd_avx(auVar12,auVar26._16_16_,1);
    dVar147 = auVar131._0_8_;
    dVar148 = auVar131._8_8_;
    auVar131 = vshufpd_avx(auVar115,auVar103,1);
    auVar26 = vperm2f128_avx(auVar197,auVar197,0x11);
    auVar24 = vblendpd_avx(auVar25,ZEXT1632(auVar131),3);
    dVar149 = auVar24._0_8_;
    dVar57 = auVar24._8_8_;
    dVar58 = auVar24._16_8_;
    dVar10 = auVar24._24_8_;
    auVar116._0_8_ = dVar149 * auVar26._0_8_ + dVar147 * auVar61._0_8_ + dVar52 * auVar191._0_8_;
    auVar116._8_8_ = dVar57 * auVar26._0_8_ + dVar148 * auVar61._8_8_ + dVar54 * auVar191._0_8_;
    auVar129._16_8_ =
         dVar58 * auVar26._16_8_ + auVar115._0_8_ * auVar61._0_8_ + dVar56 * auVar191._0_8_;
    auVar129._0_16_ = auVar116;
    auVar129._24_8_ =
         dVar10 * auVar26._16_8_ + auVar115._8_8_ * auVar61._8_8_ + dVar146 * auVar191._0_8_;
    auVar131 = vshufpd_avx(auVar172,auVar172,3);
    auVar24 = vperm2f128_avx(auVar182,auVar182,0x11);
    auVar77._0_8_ = dVar149 * auVar24._0_8_ + dVar52 * auVar172._0_8_ + dVar147 * auVar131._0_8_;
    auVar77._8_8_ = dVar57 * auVar24._0_8_ + dVar54 * auVar172._0_8_ + dVar148 * auVar131._8_8_;
    auVar100._16_8_ =
         dVar58 * auVar24._16_8_ + dVar56 * auVar172._0_8_ + auVar115._0_8_ * auVar131._0_8_;
    auVar100._0_16_ = auVar77;
    auVar100._24_8_ =
         dVar10 * auVar24._16_8_ + dVar146 * auVar172._0_8_ + auVar115._8_8_ * auVar131._8_8_;
    auVar131 = vshufpd_avx(auVar21,auVar21,3);
    auVar24 = vperm2f128_avx(auVar48,auVar48,0x11);
    auVar22._0_8_ = dVar149 * auVar24._0_8_ + dVar52 * auVar21._0_8_ + dVar147 * auVar131._0_8_;
    auVar22._8_8_ = dVar57 * auVar24._0_8_ + dVar54 * auVar21._0_8_ + dVar148 * auVar131._8_8_;
    auVar49._16_8_ =
         dVar58 * auVar24._16_8_ + dVar56 * auVar21._0_8_ + auVar115._0_8_ * auVar131._0_8_;
    auVar49._0_16_ = auVar22;
    auVar49._24_8_ =
         dVar10 * auVar24._16_8_ + dVar146 * auVar21._0_8_ + auVar115._8_8_ * auVar131._8_8_;
    *(undefined1 (*) [16])(param_1 + 0x58) = auVar116;
    dVar149 = (double)vmovlpd_avx(auVar129._16_16_);
    param_1[0x5a] = dVar149;
    param_1[0x5b] = 0.0;
    *(undefined1 (*) [16])(param_1 + 0x5c) = auVar77;
    dVar149 = (double)vmovlpd_avx(auVar100._16_16_);
    param_1[0x5e] = dVar149;
    param_1[0x5f] = 0.0;
    *(undefined1 (*) [16])(param_1 + 0x60) = auVar22;
    dVar149 = (double)vmovlpd_avx(auVar49._16_16_);
    param_1[0x62] = dVar149;
    *(undefined1 (*) [16])(param_1 + 0x65) = auVar11;
    *(undefined1 (*) [16])(param_1 + 99) = auVar11;
    param_1[0x67] = 1.0;
  }
  auVar104._0_8_ = param_1[0x38] * param_1[0x34] + param_1[0x3a] * param_1[0x36];
  auVar104._8_8_ = param_1[0x39] * param_1[0x35] + param_1[0x3b] * param_1[0x37];
  auVar131 = vshufpd_avx(auVar104,auVar104,1);
  auVar105._8_8_ = 0;
  auVar105._0_8_ = auVar104._0_8_ + auVar131._0_8_;
  auVar131 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar105,2);
  auVar158._8_8_ = 0;
  auVar158._0_8_ = __real_3ff0000000000000;
  auVar173._8_8_ = 0;
  auVar173._0_8_ = __real_bff0000000000000;
  auVar131 = vblendvpd_avx(auVar173,auVar158,auVar131);
  dVar149 = auVar131._0_8_;
  param_1[0x38] = param_1[0x38] * dVar149;
  param_1[0x39] = param_1[0x39] * dVar149;
  param_1[0x3a] = param_1[0x3a] * dVar149;
  param_1[0x3b] = param_1[0x3b] * dVar149;
  auVar78._0_8_ = param_1[0x2a] * param_1[0x26] + param_1[0x2c] * param_1[0x28];
  auVar78._8_8_ = param_1[0x2b] * param_1[0x27] + param_1[0x2d] * param_1[0x29];
  auVar131 = vshufpd_avx(auVar78,auVar78,1);
  auVar79._8_8_ = 0;
  auVar79._0_8_ = auVar78._0_8_ + auVar131._0_8_;
  auVar131 = vcmpsd_avx(ZEXT816(0) << 0x40,auVar79,2);
  auVar131 = vblendvpd_avx(auVar173,auVar158,auVar131);
  dVar149 = auVar131._0_8_;
  param_1[0x2a] = param_1[0x2a] * dVar149;
  param_1[0x2b] = param_1[0x2b] * dVar149;
  param_1[0x2c] = param_1[0x2c] * dVar149;
  param_1[0x2d] = param_1[0x2d] * dVar149;
  auVar23._0_8_ = param_1[0x84] + auVar64._0_8_;
  auVar23._8_8_ = param_1[0x85] + auVar64._8_8_;
  auVar50._16_8_ = param_1[0x86] + auVar84._16_8_;
  auVar50._0_16_ = auVar23;
  auVar50._24_8_ = auVar84._24_8_ + 0.0;
  *(undefined1 (*) [16])(param_1 + 0x84) = auVar23;
  dVar149 = (double)vmovlps_avx(auVar50._16_16_);
  param_1[0x86] = dVar149;
  return;
}


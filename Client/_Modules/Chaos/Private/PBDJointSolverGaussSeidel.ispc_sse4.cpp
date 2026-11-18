// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 13

// ApplyRotationDelta2___un_3C_s_5B_unFPBDJointSolver_5D__3E_REFs_5B__c_unFVector_5D_REFs_5B__c_unFVector_5D__sse4 @ 140a02400

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyRotationDelta2___un_3C_s_5B_unFPBDJointSolver_5D__3E_REFs_5B__c_unFVector_5D_REFs_5B__c_unFVector_5D__sse4
               (double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar29;
  double dVar30;
  undefined1 auVar28 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar34;
  undefined1 auVar33 [16];
  undefined4 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dStack_f0;
  double dStack_d0;
  double dVar3;
  
  dVar18 = _UNK_15076c6f8;
  dVar20 = ___xmm_bff00000000000003ff0000000000000;
  dVar21 = _UNK_15076b868;
  dVar24 = ___xmm_3ff0000000000000bff0000000000000;
  dVar19 = __real_3ff0000000000000;
  if (0.0 < param_1[0x1e]) {
    dVar22 = param_1[0x36];
    dVar25 = param_1[0x37];
    dVar13 = param_1[0x34];
    dVar23 = param_1[0x35];
    dVar1 = param_2[1];
    dVar17 = param_2[1];
    dVar2 = param_2[2];
    dVar3 = param_2[2];
    dVar26 = (param_1[0x35] * dVar2 * ___xmm_3ff0000000000000bff0000000000000 +
             dVar22 * dVar1 +
             *param_2 * param_1[0x37] * ___xmm_bff00000000000003ff0000000000000 + dVar13 * 0.0) *
             ___xmm_3fe00000000000003fe0000000000000 + dVar13;
    dVar29 = (param_1[0x34] * dVar3 * _UNK_15076b868 +
             dVar25 * dVar17 + *param_2 * param_1[0x36] * _UNK_15076c6f8 + dVar23 * 0.0) *
             _UNK_150689678 + dVar23;
    dVar22 = (param_1[0x37] * dVar2 * ___xmm_bff00000000000003ff0000000000000 +
             ((*param_2 * param_1[0x35] * ___xmm_bff00000000000003ff0000000000000 + dVar22 * 0.0) -
             dVar1 * dVar13)) * ___xmm_3fe00000000000003fe0000000000000 + dVar22;
    dVar25 = (param_1[0x36] * dVar3 * _UNK_15076c6f8 +
             ((*param_2 * param_1[0x34] * _UNK_15076c6f8 + dVar25 * 0.0) - dVar17 * dVar23)) *
             _UNK_150689678 + dVar25;
    dVar17 = dVar29 * dVar29 + dVar25 * dVar25 + dVar26 * dVar26 + dVar22 * dVar22;
    uVar5 = ~-(ulonglong)(dVar17 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
    dVar17 = __real_3ff0000000000000 / SQRT(dVar17);
    dVar27 = (double)((ulonglong)(dVar26 * dVar17) & uVar5);
    dVar30 = (double)((ulonglong)(dVar29 * dVar17) & uVar5);
    dVar22 = (double)(((ulonglong)(dVar22 * dVar17) ^ ___xmm_3ff00000000000000000000000000000) &
                     uVar5);
    dVar3 = (double)(___xmm_3ff00000000000000000000000000000 ^ (ulonglong)dVar22);
    dVar25 = (double)(_UNK_15061cbc8 ^ ((ulonglong)(dVar25 * dVar17) ^ _UNK_15061cbc8) & uVar5);
    param_1[0x34] = dVar27;
    param_1[0x35] = dVar30;
    param_1[0x36] = dVar3;
    param_1[0x37] = dVar25;
    auVar36._8_8_ = dVar30;
    auVar36._0_8_ = dVar27;
    auVar11._8_4_ = SUB84(dVar25,0);
    auVar11._0_8_ = dVar3;
    auVar11._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
    auVar37 = blendpd(auVar36,auVar11,2);
    dVar17 = param_1[4] * dVar3 - auVar37._0_8_ * param_1[6];
    dVar1 = param_1[5] * dVar27 - dVar30 * param_1[4];
    dVar2 = param_1[6] * dVar30 - dVar3 * param_1[5];
    dVar17 = dVar17 + dVar17;
    dVar1 = dVar1 + dVar1;
    dVar2 = dVar2 + dVar2;
    param_1[0x20] = (dVar1 * dVar30 - dVar17 * dVar22) + dVar2 * dVar25 + param_1[4] + param_1[0x2e]
    ;
    param_1[0x21] = (dVar2 * dVar22 - dVar1 * dVar27) + dVar17 * dVar25 + param_1[5] + param_1[0x2f]
    ;
    param_1[0x22] = dVar25 * dVar1 + param_1[6] + (dVar17 * dVar27 - dVar2 * dVar30) + param_1[0x30]
    ;
    dVar29 = _UNK_150689688;
    dVar26 = ___xmm_3ff00000000000003ff0000000000000;
    param_1[0x26] =
         param_1[1] * dVar3 * dVar24 +
         param_1[2] * dVar30 + param_1[3] * dVar27 * dVar20 + *param_1 * dVar25;
    param_1[0x27] =
         *param_1 * dVar3 * dVar21 +
         param_1[3] * dVar30 + param_1[2] * dVar27 * dVar18 + param_1[1] * dVar25;
    param_1[0x28] =
         param_1[3] * dVar3 * dVar20 +
         ((param_1[1] * dVar27 * dVar20 + param_1[2] * dVar25) - *param_1 * dVar30);
    param_1[0x29] =
         param_1[2] * dVar3 * dVar18 +
         ((*param_1 * dVar27 * dVar18 + param_1[3] * dVar25) - param_1[1] * dVar30);
    dVar20 = dVar30 + dVar30;
    dVar24 = dVar3 + dVar3;
    dVar21 = dVar27 * (dVar27 + dVar27);
    dVar2 = dVar27 * dVar20;
    dVar18 = (dVar27 + dVar27) * dVar25;
    dVar23 = dVar25 * dVar24 + dVar2;
    dVar22 = dVar18 + dVar30 * dVar24;
    dVar13 = dVar20 * dVar25 + dVar24 * dVar27;
    dVar18 = dVar30 * dVar24 - dVar18;
    dVar17 = dVar24 * dVar27 - dVar20 * dVar25;
    dVar1 = dVar2 - dVar25 * dVar24;
    dVar2 = dVar2 - dVar25 * (dVar25 + dVar25);
    auVar31._0_8_ = dVar26 - (dVar24 * dVar3 + dVar30 * dVar20);
    auVar31._8_8_ = dVar29 - (dVar24 * dVar3 + dVar21);
    dVar19 = dVar19 - (dVar30 * dVar20 + dVar21);
    dVar24 = param_1[0x18];
    dVar21 = param_1[0x1a];
    dVar20 = param_1[0x19];
    auVar9._8_4_ = SUB84(dVar2,0);
    auVar9._0_8_ = dVar1;
    auVar9._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    auVar32 = blendpd(auVar31,auVar9,1);
    dVar3 = dVar13 * 0.0 + dVar1 * 0.0 + auVar31._0_8_ * dVar24;
    dVar25 = dVar13 * 0.0 + dVar1 * dVar20 + auVar31._0_8_ * 0.0;
    dVar1 = dVar21 * dVar13 + dVar1 * 0.0 + auVar31._0_8_ * ___xmm_00000000000000000000000000000000;
    auVar37._8_4_ = SUB84(dVar18,0);
    auVar37._0_8_ = dVar13;
    auVar37._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    dVar26 = dVar18 * __real_0000000000000000 + auVar31._8_8_ * 0.0 + dVar23 * dVar24;
    dVar29 = dVar18 * __real_0000000000000000 + dVar20 * auVar31._8_8_ + dVar23 * 0.0;
    dVar2 = dVar21 * dVar18 + auVar31._8_8_ * 0.0 + dVar23 * 0.0;
    dVar18 = dVar19 * __real_0000000000000000 + dVar22 * 0.0 + dVar24 * dVar17;
    dVar20 = dVar19 * __real_0000000000000000 + dVar22 * dVar20 + dVar17 * 0.0;
    dVar30 = auVar32._0_8_;
    dVar34 = auVar32._8_8_;
    dVar27 = dVar21 * dVar19 + dVar22 * ___xmm_00000000000000000000000000000000 + dVar17 * 0.0;
    dStack_f0 = auVar37._8_8_;
    dVar21 = dVar1 * dStack_f0 + dVar34 * dVar25 + dVar3 * dVar23;
    dVar24 = dVar2 * dStack_f0 + dVar34 * dVar29 + dVar26 * dVar23;
    auVar12._8_4_ = SUB84(dVar21,0);
    auVar12._0_8_ = dVar1 * dVar13 + dVar30 * dVar25 + dVar3 * auVar31._0_8_;
    auVar12._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x48) = auVar12;
    param_1[0x4a] = dVar1 * dVar19 + dVar25 * dVar22 + dVar17 * dVar3;
    param_1[0x4b] = 0.0;
    auVar32._8_4_ = SUB84(dVar24,0);
    auVar32._0_8_ = dVar2 * dVar13 + dVar30 * dVar29 + dVar26 * auVar31._0_8_;
    auVar32._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x4c) = auVar32;
    param_1[0x4e] = dVar2 * dVar19 + dVar29 * dVar22 + dVar17 * dVar26;
    param_1[0x4f] = 0.0;
    param_1[0x50] = dVar27 * dVar13 + dVar30 * dVar20 + dVar18 * auVar31._0_8_;
    param_1[0x51] = dVar27 * dStack_f0 + dVar34 * dVar20 + dVar18 * dVar23;
    param_1[0x52] = dVar27 * dVar19 + dVar20 * dVar22 + dVar17 * dVar18;
    param_1[0x55] = 0.0;
    param_1[0x56] = 0.0;
    param_1[0x53] = 0.0;
    param_1[0x54] = 0.0;
    param_1[0x57] = 1.0;
  }
  dVar20 = _UNK_15076c6f8;
  dVar21 = ___xmm_bff00000000000003ff0000000000000;
  dVar24 = _UNK_15076b868;
  dVar19 = ___xmm_3ff0000000000000bff0000000000000;
  if (0.0 < param_1[0x1f]) {
    dVar3 = param_1[0x3a];
    dVar22 = param_1[0x3b];
    dVar25 = param_1[0x38];
    dVar13 = param_1[0x39];
    dVar17 = param_3[1];
    dVar18 = param_3[1];
    dVar1 = param_3[2];
    dVar2 = param_3[2];
    dVar23 = (param_1[0x39] * dVar1 * ___xmm_3ff0000000000000bff0000000000000 +
             dVar3 * dVar17 +
             *param_3 * param_1[0x3b] * ___xmm_bff00000000000003ff0000000000000 + dVar25 * 0.0) *
             ___xmm_3fe00000000000003fe0000000000000 + dVar25;
    dVar26 = (param_1[0x38] * dVar2 * _UNK_15076b868 +
             dVar22 * dVar18 + *param_3 * param_1[0x3a] * _UNK_15076c6f8 + dVar13 * 0.0) *
             _UNK_150689678 + dVar13;
    dVar3 = (param_1[0x3b] * dVar1 * ___xmm_bff00000000000003ff0000000000000 +
            ((*param_3 * param_1[0x39] * ___xmm_bff00000000000003ff0000000000000 + dVar3 * 0.0) -
            dVar17 * dVar25)) * ___xmm_3fe00000000000003fe0000000000000 + dVar3;
    dVar22 = (param_1[0x3a] * dVar2 * _UNK_15076c6f8 +
             ((*param_3 * param_1[0x38] * _UNK_15076c6f8 + dVar22 * 0.0) - dVar18 * dVar13)) *
             _UNK_150689678 + dVar22;
    dVar18 = dVar26 * dVar26 + dVar22 * dVar22 + dVar23 * dVar23 + dVar3 * dVar3;
    uVar5 = ~-(ulonglong)(dVar18 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
    dVar18 = __real_3ff0000000000000 / SQRT(dVar18);
    dVar23 = (double)((ulonglong)(dVar23 * dVar18) & uVar5);
    dVar27 = (double)((ulonglong)(dVar26 * dVar18) & uVar5);
    dVar17 = (double)(((ulonglong)(dVar3 * dVar18) ^ ___xmm_3ff00000000000000000000000000000) &
                     uVar5);
    dVar2 = (double)(___xmm_3ff00000000000000000000000000000 ^ (ulonglong)dVar17);
    dVar3 = (double)(_UNK_15061cbc8 ^ ((ulonglong)(dVar22 * dVar18) ^ _UNK_15061cbc8) & uVar5);
    uVar35 = (undefined4)((ulonglong)dVar3 >> 0x20);
    auVar33._8_4_ = SUB84(dVar3,0);
    auVar33._0_8_ = dVar3;
    auVar33._12_4_ = uVar35;
    param_1[0x38] = dVar23;
    param_1[0x39] = dVar27;
    param_1[0x3a] = dVar2;
    param_1[0x3b] = dVar3;
    auVar38._8_8_ = dVar27;
    auVar38._0_8_ = dVar23;
    auVar10._8_4_ = SUB84(dVar3,0);
    auVar10._0_8_ = dVar2;
    auVar10._12_4_ = uVar35;
    auVar37 = blendpd(auVar38,auVar10,2);
    dVar18 = param_1[0x10] * dVar2 - auVar37._0_8_ * param_1[0x12];
    dVar1 = param_1[0x11] * dVar23 - dVar27 * param_1[0x10];
    dVar22 = param_1[0x12] * dVar27 - dVar2 * param_1[0x11];
    dVar18 = dVar18 + dVar18;
    dVar1 = dVar1 + dVar1;
    dVar22 = dVar22 + dVar22;
    dVar30 = auVar33._8_8_;
    param_1[0x23] =
         (dVar1 * dVar27 - dVar18 * dVar17) + dVar22 * dVar3 + param_1[0x10] + param_1[0x31];
    param_1[0x24] =
         (dVar22 * dVar17 - dVar1 * dVar23) + dVar18 * dVar30 + param_1[0x11] + param_1[0x32];
    param_1[0x25] =
         dVar3 * dVar1 + param_1[0x12] + (dVar18 * dVar23 - dVar22 * dVar27) + param_1[0x33];
    dVar13 = _UNK_150689688;
    dVar25 = ___xmm_3ff00000000000003ff0000000000000;
    dVar18 = param_1[0xe] * dVar2 * dVar20 +
             ((param_1[0xc] * dVar23 * dVar20 + param_1[0xf] * dVar30) - param_1[0xd] * dVar27);
    param_1[0x2a] =
         param_1[0xd] * dVar2 * dVar19 +
         param_1[0xe] * dVar27 + param_1[0xf] * dVar23 * dVar21 + param_1[0xc] * dVar3;
    param_1[0x2b] =
         param_1[0xc] * dVar2 * dVar24 +
         param_1[0xf] * dVar27 + param_1[0xe] * dVar23 * dVar20 + param_1[0xd] * dVar30;
    auVar14._8_4_ = SUB84(dVar18,0);
    auVar14._0_8_ =
         param_1[0xf] * dVar2 * dVar21 +
         ((param_1[0xd] * dVar23 * dVar21 + param_1[0xe] * dVar3) - param_1[0xc] * dVar27);
    auVar14._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x2c) = auVar14;
    dVar21 = dVar27 + dVar27;
    dVar19 = dVar2 + dVar2;
    dVar24 = dVar23 * (dVar23 + dVar23);
    dVar1 = dVar23 * dVar21;
    dVar20 = (dVar23 + dVar23) * dVar3;
    dVar22 = dVar3 * dVar19 + dVar1;
    dVar26 = dVar20 + dVar27 * dVar19;
    dVar29 = dVar21 * dVar30 + dVar19 * dVar23;
    dVar20 = dVar27 * dVar19 - dVar20;
    dVar18 = dVar19 * dVar23 - dVar21 * dVar30;
    dVar17 = dVar1 - dVar3 * dVar19;
    dVar1 = dVar1 - dVar30 * (dVar3 + dVar3);
    auVar28._0_8_ = dVar25 - (dVar19 * dVar2 + dVar27 * dVar21);
    auVar28._8_8_ = dVar13 - (dVar19 * dVar2 + dVar24);
    dVar27 = __real_3ff0000000000000 - (dVar27 * dVar21 + dVar24);
    dVar19 = param_1[0x1b];
    dVar24 = param_1[0x1d];
    dVar21 = param_1[0x1c];
    auVar8._8_4_ = SUB84(dVar1,0);
    auVar8._0_8_ = dVar17;
    auVar8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    auVar37 = blendpd(auVar28,auVar8,1);
    dVar3 = dVar29 * 0.0 + dVar17 * 0.0 + auVar28._0_8_ * dVar19;
    dVar25 = dVar29 * 0.0 + dVar17 * dVar21 + auVar28._0_8_ * 0.0;
    dVar17 = dVar24 * dVar29 +
             dVar17 * 0.0 + auVar28._0_8_ * ___xmm_00000000000000000000000000000000;
    auVar15._8_4_ = SUB84(dVar22,0);
    auVar15._0_8_ = auVar28._0_8_;
    auVar15._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
    dVar13 = dVar20 * 0.0 + auVar28._8_8_ * 0.0 + dVar22 * dVar19;
    dVar23 = dVar20 * 0.0 + dVar21 * auVar28._8_8_ + dVar22 * 0.0;
    dVar2 = dVar24 * dVar20 + auVar28._8_8_ * 0.0 + dVar22 * 0.0;
    dVar1 = dVar27 * 0.0 + dVar26 * 0.0 + dVar19 * dVar18;
    dVar21 = dVar27 * 0.0 + dVar26 * dVar21 + dVar18 * 0.0;
    dVar22 = auVar37._0_8_;
    dVar30 = auVar37._8_8_;
    dVar24 = dVar24 * dVar27 + dVar26 * ___xmm_00000000000000000000000000000000 + dVar18 * 0.0;
    dStack_d0 = auVar15._8_8_;
    dVar19 = dVar2 * dVar20 + dVar30 * dVar23 + dVar13 * dStack_d0;
    param_1[0x58] = dVar17 * dVar29 + dVar22 * dVar25 + dVar3 * auVar28._0_8_;
    param_1[0x59] = dVar17 * dVar20 + dVar30 * dVar25 + dVar3 * dStack_d0;
    param_1[0x5a] = dVar17 * dVar27 + dVar25 * dVar26 + dVar18 * dVar3;
    param_1[0x5b] = 0.0;
    auVar4._8_4_ = SUB84(dVar19,0);
    auVar4._0_8_ = dVar2 * dVar29 + dVar22 * dVar23 + dVar13 * auVar28._0_8_;
    auVar4._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x5c) = auVar4;
    param_1[0x5e] = dVar2 * dVar27 + dVar23 * dVar26 + dVar18 * dVar13;
    param_1[0x5f] = 0.0;
    param_1[0x60] = dVar24 * dVar29 + dVar22 * dVar21 + dVar1 * auVar28._0_8_;
    param_1[0x61] = dVar24 * dVar20 + dVar30 * dVar21 + dVar1 * dStack_d0;
    param_1[0x62] = dVar24 * dVar27 + dVar21 * dVar26 + dVar18 * dVar1;
    param_1[0x65] = 0.0;
    param_1[0x66] = 0.0;
    param_1[99] = 0.0;
    param_1[100] = 0.0;
    param_1[0x67] = 1.0;
  }
  uVar5 = __real_bff0000000000000;
  dVar20 = __real_3ff0000000000000;
  uVar16 = -(ulonglong)
            (0.0 <= param_1[0x35] * param_1[0x39] + param_1[0x37] * param_1[0x3b] +
                    param_1[0x34] * param_1[0x38] + param_1[0x36] * param_1[0x3a]);
  dVar21 = (double)(~uVar16 & __real_bff0000000000000 | uVar16 & (ulonglong)__real_3ff0000000000000)
  ;
  dVar24 = param_1[0x3b] * dVar21;
  dVar19 = param_1[0x39] * dVar21;
  auVar6._8_4_ = SUB84(dVar19,0);
  auVar6._0_8_ = param_1[0x38] * dVar21;
  auVar6._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x38) = auVar6;
  auVar7._8_4_ = SUB84(dVar24,0);
  auVar7._0_8_ = param_1[0x3a] * dVar21;
  auVar7._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x3a) = auVar7;
  uVar16 = -(ulonglong)
            (0.0 <= param_1[0x27] * param_1[0x2b] + param_1[0x29] * param_1[0x2d] +
                    param_1[0x26] * param_1[0x2a] + param_1[0x28] * param_1[0x2c]);
  dVar19 = (double)(~uVar16 & uVar5 | (ulonglong)dVar20 & uVar16);
  param_1[0x2a] = param_1[0x2a] * dVar19;
  param_1[0x2b] = param_1[0x2b] * dVar19;
  param_1[0x2c] = param_1[0x2c] * dVar19;
  param_1[0x2d] = param_1[0x2d] * dVar19;
  return;
}

// ApplyPositionConstraintSoft___un_3C_s_5B_unFPBDJointSolver_5D__3E_CundCundCundCunbREFs_5B__c_unFVector_5D_CundCundREFund_sse4 @ 140a03250

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPositionConstraintSoft___un_3C_s_5B_unFPBDJointSolver_5D__3E_CundCundCundCunbREFs_5B__c_unFVector_5D_CundCundREFund_sse4
               (double *param_1,double param_2,double param_3,double param_4,byte param_5,
               double *param_6,double param_7,double param_8,double *param_9,
               undefined1 (*param_10) [16])

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
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
  double dVar22;
  double dVar23;
  undefined4 in_R8D;
  int iVar24;
  ulonglong uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar31;
  undefined1 auVar29 [16];
  double dVar32;
  undefined1 auVar30 [16];
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined4 uVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar56;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar57;
  double dVar58;
  double dVar59;
  double dVar60;
  double dVar64;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined4 uVar65;
  undefined4 uVar66;
  undefined4 uVar67;
  double dStack_110;
  double dStack_100;
  double dStack_d0;
  double dStack_b0;
  
  uVar67 = _UNK_15066df7c;
  uVar66 = _UNK_15066df78;
  uVar65 = __xmm_80000000000000008000000000000000._4_4_;
  uVar49 = (undefined4)__xmm_80000000000000008000000000000000;
  iVar24 = movmskps(in_R8D,*param_10);
  dVar51 = param_1[0x22];
  dVar36 = param_1[0x20];
  dVar32 = param_1[0x21];
  dVar60 = *param_6;
  dVar59 = param_6[1];
  dVar1 = param_6[2];
  dVar26 = (dVar36 - param_1[0x2e]) * param_6[1] - (dVar32 - param_1[0x2f]) * dVar60;
  dVar42 = (dVar32 - param_1[0x2f]) * param_6[2] - (dVar51 - param_1[0x30]) * dVar59;
  dVar34 = (dVar51 - param_1[0x30]) * *param_6 - (dVar36 - param_1[0x2e]) * dVar1;
  dVar2 = param_1[0x25];
  dVar64 = param_1[0x23];
  dVar57 = param_1[0x24];
  dVar50 = param_6[1] * (dVar64 - param_1[0x31]) - (dVar57 - param_1[0x32]) * dVar60;
  dVar56 = param_6[2] * (dVar57 - param_1[0x32]) - (dVar2 - param_1[0x33]) * dVar59;
  dVar58 = *param_6 * (dVar2 - param_1[0x33]) - dVar1 * (dVar64 - param_1[0x31]);
  dVar35 = dVar26 * param_1[0x50] + dVar34 * param_1[0x4c] + dVar42 * param_1[0x48];
  dVar31 = dVar26 * param_1[0x51] + dVar34 * param_1[0x4d] + dVar42 * param_1[0x49];
  dVar28 = param_1[0x52] * dVar26 + param_1[0x4e] * dVar34 + param_1[0x4a] * dVar42;
  dVar22 = dVar50 * param_1[0x60] + dVar58 * param_1[0x5c] + dVar56 * param_1[0x58];
  dVar23 = dVar50 * param_1[0x61] + dVar58 * param_1[0x5d] + dVar56 * param_1[0x59];
  dVar33 = param_1[0x62] * dVar50 + param_1[0x5e] * dVar58 + param_1[0x5a] * dVar56;
  auVar38._8_4_ = SUB84(dVar23,0);
  auVar38._0_8_ = dVar22;
  auVar38._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
  dVar52 = param_1[0x1e];
  dVar27 = param_1[0x1f];
  dVar23 = dVar34 * dVar31 + dVar42 * dVar35 + dVar26 * dVar28 + dVar52 + dVar27 +
           dVar58 * dVar23 + dVar56 * dVar22 + dVar50 * dVar33;
  dVar34 = 0.0;
  dStack_d0 = auVar38._8_8_;
  if (iVar24 == 0xf) {
    if (__real_3f1a36e2eb1c432d < param_4) {
      dVar34 = dVar59 * ((dVar32 - param_1[0x77]) - (dVar57 - param_1[0x7a])) +
               dVar60 * ((dVar36 - param_1[0x76]) - (dVar64 - param_1[0x79])) +
               dVar1 * ((dVar51 - param_1[0x78]) - (dVar2 - param_1[0x7b])) + param_8 * param_2;
    }
    dVar51 = __real_3ff0000000000000;
    if ((param_5 & 1) != 0) {
      dVar51 = __real_3ff0000000000000 / (dVar52 + dVar27);
    }
    dVar1 = param_3 * dVar51 * param_2 * param_2;
    param_2 = param_4 * dVar51 * param_2;
    dVar2 = ((dVar1 * param_7 - dVar34 * param_2) - *param_9) *
            (__real_3ff0000000000000 / (dVar23 * (param_2 + dVar1) + __real_3ff0000000000000)) *
            param_1[0x99];
    dVar26 = dVar52 * dVar2;
    dVar51 = param_6[2];
    dVar23 = *param_6;
    dVar34 = param_6[1];
    dVar42 = (double)((ulonglong)dVar27 ^
                     CONCAT44(__xmm_80000000000000008000000000000000._4_4_,
                              (undefined4)__xmm_80000000000000008000000000000000)) * dVar2;
    dVar1 = param_1[0x2f] + dVar26 * dVar34;
    auVar6._8_4_ = SUB84(dVar1,0);
    auVar6._0_8_ = param_1[0x2e] + dVar26 * dVar23;
    auVar6._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x2e) = auVar6;
    param_1[0x30] = dVar26 * dVar51 + param_1[0x30];
    param_1[0x31] = param_1[0x31] + dVar42 * dVar23;
    param_1[0x32] = param_1[0x32] + dVar42 * dVar34;
    param_1[0x33] = dVar42 * dVar51 + param_1[0x33];
    dVar26 = _UNK_15076c6f8;
    dVar34 = ___xmm_bff00000000000003ff0000000000000;
    dVar23 = _UNK_15076b868;
    dVar1 = ___xmm_3ff0000000000000bff0000000000000;
    dVar51 = __real_3ff0000000000000;
    auVar20._8_4_ = SUB84(dVar2,0);
    auVar20._0_8_ = dVar2;
    auVar20._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    dStack_110 = dVar2;
    if (0.0 < dVar52) {
      dVar35 = dVar35 * dVar2;
      dVar31 = dVar31 * dVar2;
      dVar52 = param_1[0x36];
      dVar27 = param_1[0x37];
      dVar42 = param_1[0x34];
      dVar36 = param_1[0x35];
      dVar28 = dVar28 * dVar2;
      dVar32 = (param_1[0x35] * dVar28 * ___xmm_3ff0000000000000bff0000000000000 +
               dVar31 * dVar52 +
               dVar35 * param_1[0x37] * ___xmm_bff00000000000003ff0000000000000 + dVar42 * 0.0) *
               ___xmm_3fe00000000000003fe0000000000000 + dVar42;
      dVar60 = (param_1[0x34] * dVar28 * _UNK_15076b868 +
               dVar31 * dVar27 + dVar35 * param_1[0x36] * _UNK_15076c6f8 + dVar36 * 0.0) *
               _UNK_150689678 + dVar36;
      dVar52 = (param_1[0x37] * dVar28 * ___xmm_bff00000000000003ff0000000000000 +
               ((dVar35 * param_1[0x35] * ___xmm_bff00000000000003ff0000000000000 + dVar52 * 0.0) -
               dVar31 * dVar42)) * ___xmm_3fe00000000000003fe0000000000000 + dVar52;
      dVar27 = (param_1[0x36] * dVar28 * _UNK_15076c6f8 +
               ((dVar35 * param_1[0x34] * _UNK_15076c6f8 + dVar27 * 0.0) - dVar31 * dVar36)) *
               _UNK_150689678 + dVar27;
      dVar35 = dVar60 * dVar60 + dVar27 * dVar27 + dVar32 * dVar32 + dVar52 * dVar52;
      uVar9 = ~-(ulonglong)(dVar35 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
      dVar31 = __real_3ff0000000000000 / SQRT(dVar35);
      dVar28 = (double)((ulonglong)(dVar32 * dVar31) & uVar9);
      dVar60 = (double)((ulonglong)(dVar60 * dVar31) & uVar9);
      dVar35 = (double)(((ulonglong)(dVar52 * dVar31) ^ ___xmm_3ff00000000000000000000000000000) &
                       uVar9);
      auVar46._0_8_ = (double)(___xmm_3ff00000000000000000000000000000 ^ (ulonglong)dVar35);
      auVar46._8_8_ =
           (double)(_UNK_15061cbc8 ^ ((ulonglong)(dVar27 * dVar31) ^ _UNK_15061cbc8) & uVar9);
      param_1[0x34] = dVar28;
      param_1[0x35] = dVar60;
      *(undefined1 (*) [16])(param_1 + 0x36) = auVar46;
      dVar32 = _UNK_150689688;
      dVar36 = ___xmm_3ff00000000000003ff0000000000000;
      auVar40._8_8_ = dVar60;
      auVar40._0_8_ = dVar28;
      auVar38 = blendpd(auVar40,auVar46,2);
      dVar31 = param_1[4] * auVar46._0_8_ - param_1[6] * auVar38._0_8_;
      dVar52 = param_1[5] * dVar28 - dVar60 * param_1[4];
      dVar27 = param_1[6] * dVar60 - auVar46._0_8_ * param_1[5];
      dVar31 = dVar31 + dVar31;
      dVar52 = dVar52 + dVar52;
      dVar27 = dVar27 + dVar27;
      param_1[0x20] =
           param_1[0x2e] + (dVar52 * dVar60 - dVar31 * dVar35) + dVar27 * auVar46._8_8_ + param_1[4]
      ;
      param_1[0x21] =
           param_1[0x2f] + (dVar27 * dVar35 - dVar52 * dVar28) + dVar31 * auVar46._8_8_ + param_1[5]
      ;
      param_1[0x22] =
           auVar46._8_8_ * dVar52 + param_1[6] + (dVar31 * dVar28 - dVar27 * dVar60) + param_1[0x30]
      ;
      auVar30._8_4_ = SUB84(dVar28,0);
      auVar30._0_8_ = dVar28;
      auVar30._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
      dVar42 = auVar30._8_8_;
      auVar55._8_4_ = SUB84(auVar46._0_8_,0);
      auVar55._0_8_ = auVar46._0_8_;
      auVar55._12_4_ = (int)((ulonglong)auVar46._0_8_ >> 0x20);
      param_1[0x26] =
           param_1[1] * auVar46._0_8_ * dVar1 +
           param_1[2] * dVar60 + param_1[3] * dVar28 * dVar34 + *param_1 * auVar46._8_8_;
      param_1[0x27] =
           *param_1 * auVar55._8_8_ * dVar23 +
           param_1[3] * dVar60 + param_1[2] * dVar42 * dVar26 + param_1[1] * auVar46._8_8_;
      param_1[0x28] =
           param_1[3] * auVar46._0_8_ * dVar34 +
           ((param_1[1] * dVar28 * dVar34 + param_1[2] * auVar46._8_8_) - *param_1 * dVar60);
      param_1[0x29] =
           param_1[2] * auVar55._8_8_ * dVar26 +
           ((*param_1 * dVar42 * dVar26 + param_1[3] * auVar46._8_8_) - param_1[1] * dVar60);
      uVar67 = _UNK_15066df7c;
      uVar66 = _UNK_15066df78;
      uVar65 = __xmm_80000000000000008000000000000000._4_4_;
      uVar49 = (undefined4)__xmm_80000000000000008000000000000000;
      dVar1 = dVar60 + dVar60;
      dVar27 = auVar46._0_8_ + auVar46._0_8_;
      dVar52 = dVar28 * (dVar28 + dVar28);
      dVar42 = dVar42 * dVar1;
      dVar35 = (dVar28 + dVar28) * auVar46._8_8_;
      dVar23 = auVar46._8_8_ * dVar27 + dVar42;
      dVar64 = dVar35 + dVar60 * dVar27;
      dVar57 = dVar1 * auVar46._8_8_ + dVar27 * dVar28;
      dVar35 = dVar60 * dVar27 - dVar35;
      dVar31 = dVar27 * dVar28 - dVar1 * auVar46._8_8_;
      dVar28 = dVar42 - auVar46._8_8_ * dVar27;
      dVar42 = dVar42 - auVar46._8_8_ * (auVar46._8_8_ + auVar46._8_8_);
      dVar36 = dVar36 - (dVar27 * auVar46._0_8_ + dVar60 * dVar1);
      dVar32 = dVar32 - (dVar27 * auVar46._0_8_ + dVar52);
      dVar51 = dVar51 - (dVar60 * dVar1 + dVar52);
      auVar62._8_8_ = dVar32;
      auVar62._0_8_ = dVar36;
      dVar1 = param_1[0x18];
      dVar52 = param_1[0x1a];
      dVar27 = param_1[0x19];
      auVar21._8_4_ = SUB84(dVar42,0);
      auVar21._0_8_ = dVar28;
      auVar21._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
      auVar38 = blendpd(auVar62,auVar21,1);
      dVar26 = dVar57 * 0.0 + dVar28 * 0.0 + dVar36 * dVar1;
      dVar42 = dVar57 * 0.0 + dVar28 * dVar27 + dVar36 * 0.0;
      dVar28 = dVar52 * dVar57 + dVar28 * 0.0 + dVar36 * ___xmm_00000000000000000000000000000000;
      dVar60 = dVar35 * __real_0000000000000000 + dVar32 * 0.0 + dVar23 * dVar1;
      dVar59 = dVar35 * __real_0000000000000000 + dVar27 * dVar32 + dVar23 * 0.0;
      dVar34 = dVar52 * dVar35 + dVar32 * 0.0 + dVar23 * 0.0;
      dVar1 = dVar51 * __real_0000000000000000 + dVar64 * 0.0 + dVar1 * dVar31;
      dVar27 = dVar51 * __real_0000000000000000 + dVar64 * dVar27 + dVar31 * 0.0;
      auVar7._8_4_ = SUB84(dVar26,0);
      auVar7._0_8_ = dVar26;
      auVar7._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
      dVar32 = auVar38._0_8_;
      dVar50 = auVar38._8_8_;
      dVar52 = dVar52 * dVar51 + dVar64 * ___xmm_00000000000000000000000000000000 + dVar31 * 0.0;
      dStack_100 = auVar7._8_8_;
      dStack_110 = auVar20._8_8_;
      param_1[0x48] = dVar28 * dVar57 + dVar32 * dVar42 + dVar26 * dVar36;
      param_1[0x49] = dVar28 * dVar35 + dVar50 * dVar42 + dStack_100 * dVar23;
      param_1[0x4a] = dVar28 * dVar51 + dVar42 * dVar64 + dVar31 * dVar26;
      param_1[0x4b] = 0.0;
      param_1[0x4c] = dVar34 * dVar57 + dVar32 * dVar59 + dVar60 * dVar36;
      param_1[0x4d] = dVar34 * dVar35 + dVar50 * dVar59 + dVar60 * dVar23;
      param_1[0x4e] = dVar34 * dVar51 + dVar59 * dVar64 + dVar31 * dVar60;
      param_1[0x4f] = 0.0;
      param_1[0x50] = dVar52 * dVar57 + dVar32 * dVar27 + dVar1 * dVar36;
      param_1[0x51] = dVar52 * dVar35 + dVar50 * dVar27 + dVar1 * dVar23;
      param_1[0x52] = dVar52 * dVar51 + dVar27 * dVar64 + dVar31 * dVar1;
      param_1[0x55] = 0.0;
      param_1[0x56] = 0.0;
      param_1[0x53] = 0.0;
      param_1[0x54] = 0.0;
      param_1[0x57] = 1.0;
      dVar27 = param_1[0x1f];
    }
    dVar23 = _UNK_15076c6f8;
    dVar28 = ___xmm_bff00000000000003ff0000000000000;
    dVar31 = _UNK_15076b868;
    dVar35 = ___xmm_3ff0000000000000bff0000000000000;
    dVar52 = _UNK_150689688;
    dVar1 = ___xmm_3ff00000000000003ff0000000000000;
    dVar51 = __real_3ff0000000000000;
    if (dVar27 <= 0.0) goto LAB_140a051d1;
    dVar34 = (double)(CONCAT44(uVar65,uVar49) ^ (ulonglong)dVar2);
    dVar33 = dVar33 * dVar34;
    dVar34 = dVar34 * dVar22;
    dStack_d0 = (double)(CONCAT44(uVar67,uVar66) ^ (ulonglong)dStack_110) * dStack_d0;
    dVar26 = param_1[0x3a];
    dVar42 = param_1[0x3b];
    dVar36 = param_1[0x38];
    dVar32 = param_1[0x39];
    dVar27 = (param_1[0x39] * dVar33 * ___xmm_3ff0000000000000bff0000000000000 +
             dStack_d0 * dVar26 +
             dVar34 * param_1[0x3b] * ___xmm_bff00000000000003ff0000000000000 + dVar36 * 0.0) *
             ___xmm_3fe00000000000003fe0000000000000 + dVar36;
    dVar22 = (param_1[0x38] * dVar33 * _UNK_15076b868 +
             dStack_d0 * dVar42 + dVar34 * param_1[0x3a] * _UNK_15076c6f8 + dVar32 * 0.0) *
             _UNK_150689678 + dVar32;
    dVar26 = (param_1[0x3b] * dVar33 * ___xmm_bff00000000000003ff0000000000000 +
             ((dVar34 * param_1[0x39] * ___xmm_bff00000000000003ff0000000000000 + dVar26 * 0.0) -
             dStack_d0 * dVar36)) * ___xmm_3fe00000000000003fe0000000000000 + dVar26;
    dVar42 = (param_1[0x3a] * dVar33 * _UNK_15076c6f8 +
             ((dVar34 * param_1[0x38] * _UNK_15076c6f8 + dVar42 * 0.0) - dStack_d0 * dVar32)) *
             _UNK_150689678 + dVar42;
    dVar33 = dVar22 * dVar22 + dVar42 * dVar42 + dVar27 * dVar27 + dVar26 * dVar26;
    uVar9 = ~-(ulonglong)(dVar33 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
    dVar36 = __real_3ff0000000000000 / SQRT(dVar33);
    dVar33 = (double)((ulonglong)(dVar27 * dVar36) & uVar9);
    dVar34 = (double)((ulonglong)(dVar22 * dVar36) & uVar9);
    uVar49 = (undefined4)((ulonglong)dVar34 >> 0x20);
    dVar26 = (double)(((ulonglong)(dVar26 * dVar36) ^ ___xmm_3ff00000000000000000000000000000) &
                     uVar9);
    auVar63._0_8_ = (double)(___xmm_3ff00000000000000000000000000000 ^ (ulonglong)dVar26);
    auVar63._8_8_ =
         (double)(_UNK_15061cbc8 ^ ((ulonglong)(dVar42 * dVar36) ^ _UNK_15061cbc8) & uVar9);
    auVar13._8_4_ = SUB84(dVar34,0);
    auVar13._0_8_ = dVar33;
    auVar13._12_4_ = uVar49;
    *(undefined1 (*) [16])(param_1 + 0x38) = auVar13;
    *(undefined1 (*) [16])(param_1 + 0x3a) = auVar63;
    auVar14._8_4_ = SUB84(dVar34,0);
    auVar14._0_8_ = dVar33;
    auVar14._12_4_ = uVar49;
    auVar41._8_8_ = dVar34;
    auVar41._0_8_ = dVar33;
    auVar38 = blendpd(auVar41,auVar63,2);
    dVar42 = param_1[0x10] * auVar63._0_8_ - param_1[0x12] * auVar38._0_8_;
    dVar27 = param_1[0x11] * dVar33 - auVar14._8_8_ * param_1[0x10];
    dVar22 = param_1[0x12] * dVar34 - auVar63._0_8_ * param_1[0x11];
    dVar42 = dVar42 + dVar42;
    dVar27 = dVar27 + dVar27;
    dVar22 = dVar22 + dVar22;
    param_1[0x23] =
         param_1[0x31] +
         (dVar27 * dVar34 - dVar42 * dVar26) + dVar22 * auVar63._8_8_ + param_1[0x10];
    param_1[0x24] =
         param_1[0x32] +
         (dVar22 * dVar26 - dVar27 * dVar33) + dVar42 * auVar63._8_8_ + param_1[0x11];
    param_1[0x25] =
         auVar63._8_8_ * dVar27 + param_1[0x12] + (dVar42 * dVar33 - dVar22 * dVar34) +
         param_1[0x33];
    auVar47._8_4_ = SUB84(auVar63._0_8_,0);
    auVar47._0_8_ = auVar63._0_8_;
    auVar47._12_4_ = (int)((ulonglong)auVar63._0_8_ >> 0x20);
    param_1[0x2a] =
         param_1[0xd] * auVar63._0_8_ * dVar35 +
         param_1[0xe] * dVar34 + param_1[0xf] * dVar33 * dVar28 + param_1[0xc] * auVar63._8_8_;
    param_1[0x2b] =
         param_1[0xc] * auVar47._8_8_ * dVar31 +
         param_1[0xf] * dVar34 + param_1[0xe] * dVar33 * dVar23 + param_1[0xd] * auVar63._8_8_;
    param_1[0x2c] =
         param_1[0xf] * auVar63._0_8_ * dVar28 +
         ((param_1[0xd] * dVar33 * dVar28 + param_1[0xe] * auVar63._8_8_) - param_1[0xc] * dVar34);
    param_1[0x2d] =
         param_1[0xe] * auVar47._8_8_ * dVar23 +
         ((param_1[0xc] * dVar33 * dVar23 + param_1[0xf] * auVar63._8_8_) - param_1[0xd] * dVar34);
    dVar36 = dVar34 + dVar34;
    dVar32 = auVar63._0_8_ + auVar63._0_8_;
    dVar27 = dVar33 * (dVar33 + dVar33);
    dVar31 = dVar33 * dVar36;
    dVar28 = (dVar33 + dVar33) * auVar63._8_8_;
    dVar42 = auVar63._8_8_ * dVar32 + dVar31;
    dVar23 = dVar28 + dVar34 * dVar32;
    dVar26 = dVar36 * auVar63._8_8_ + dVar32 * dVar33;
    dVar28 = dVar34 * dVar32 - dVar28;
    dVar22 = dVar32 * dVar33 - dVar36 * auVar63._8_8_;
    dVar35 = dVar31 - auVar63._8_8_ * dVar32;
    dVar31 = dVar31 - auVar63._8_8_ * (auVar63._8_8_ + auVar63._8_8_);
    auVar48._0_8_ = dVar1 - (dVar32 * auVar63._0_8_ + dVar34 * dVar36);
    auVar48._8_8_ = dVar52 - (dVar32 * auVar63._0_8_ + dVar27);
    dVar51 = dVar51 - (dVar34 * dVar36 + dVar27);
    dVar1 = param_1[0x1b];
    dVar52 = param_1[0x1d];
    dVar27 = param_1[0x1c];
    auVar8._8_4_ = SUB84(dVar31,0);
    auVar8._0_8_ = dVar35;
    auVar8._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
    auVar38 = blendpd(auVar48,auVar8,1);
    dVar33 = dVar26 * 0.0 + dVar35 * 0.0 + auVar48._0_8_ * dVar1;
    dVar34 = dVar26 * 0.0 + dVar35 * dVar27 + auVar48._0_8_ * 0.0;
    dVar64 = dVar52 * dVar26 +
             dVar35 * 0.0 + auVar48._0_8_ * ___xmm_00000000000000000000000000000000;
    dVar36 = dVar28 * 0.0 + auVar48._8_8_ * 0.0 + dVar42 * dVar1;
    dVar32 = dVar28 * 0.0 + dVar27 * auVar48._8_8_ + dVar42 * 0.0;
    dVar31 = dVar52 * dVar28 + auVar48._8_8_ * 0.0 + dVar42 * 0.0;
    dVar35 = dVar51 * 0.0 + dVar23 * 0.0 + dVar1 * dVar22;
    dVar27 = dVar51 * 0.0 + dVar23 * dVar27 + dVar22 * 0.0;
    dVar60 = auVar38._0_8_;
    dVar59 = auVar38._8_8_;
    dVar52 = dVar52 * dVar51 + dVar23 * ___xmm_00000000000000000000000000000000 + dVar22 * 0.0;
    dVar1 = dVar64 * dVar28 + dVar59 * dVar34 + dVar33 * dVar42;
    auVar17._8_4_ = SUB84(dVar1,0);
    auVar17._0_8_ = dVar64 * dVar26 + dVar60 * dVar34 + dVar33 * auVar48._0_8_;
    auVar17._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x58) = auVar17;
    param_1[0x5a] = dVar64 * dVar51 + dVar34 * dVar23 + dVar22 * dVar33;
    param_1[0x5b] = 0.0;
    param_1[0x5c] = dVar31 * dVar26 + dVar60 * dVar32 + dVar36 * auVar48._0_8_;
    param_1[0x5d] = dVar31 * dVar28 + dVar59 * dVar32 + dVar36 * dVar42;
    param_1[0x5e] = dVar31 * dVar51 + dVar32 * dVar23 + dVar22 * dVar36;
    param_1[0x5f] = 0.0;
    param_1[0x60] = dVar52 * dVar26 + dVar60 * dVar27 + dVar35 * auVar48._0_8_;
    param_1[0x61] = dVar52 * dVar28 + dVar59 * dVar27 + dVar35 * dVar42;
    param_1[0x62] = dVar52 * dVar51 + dVar27 * dVar23 + dVar22 * dVar35;
    param_1[0x65] = 0.0;
    param_1[0x66] = 0.0;
    param_1[99] = 0.0;
    param_1[100] = 0.0;
  }
  else {
    if (__real_3f1a36e2eb1c432d < param_4) {
      dVar34 = dVar59 * ((dVar32 - param_1[0x77]) - (dVar57 - param_1[0x7a])) +
               dVar60 * ((dVar36 - param_1[0x76]) - (dVar64 - param_1[0x79])) +
               dVar1 * ((dVar51 - param_1[0x78]) - (dVar2 - param_1[0x7b])) + param_8 * param_2;
    }
    dVar51 = __real_3ff0000000000000;
    if ((param_5 & 1) != 0) {
      dVar51 = __real_3ff0000000000000 / (dVar52 + dVar27);
    }
    dVar1 = param_3 * dVar51 * param_2 * param_2;
    param_2 = param_4 * dVar51 * param_2;
    dVar2 = ((dVar1 * param_7 - dVar34 * param_2) - *param_9) *
            (__real_3ff0000000000000 / (dVar23 * (param_2 + dVar1) + __real_3ff0000000000000)) *
            param_1[0x99];
    dVar26 = dVar52 * dVar2;
    dVar51 = param_6[2];
    dVar23 = *param_6;
    dVar34 = param_6[1];
    dVar42 = (double)((ulonglong)dVar27 ^
                     CONCAT44(__xmm_80000000000000008000000000000000._4_4_,
                              (undefined4)__xmm_80000000000000008000000000000000)) * dVar2;
    dVar1 = param_1[0x2f] + dVar26 * dVar34;
    auVar3._8_4_ = SUB84(dVar1,0);
    auVar3._0_8_ = param_1[0x2e] + dVar26 * dVar23;
    auVar3._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x2e) = auVar3;
    param_1[0x30] = dVar26 * dVar51 + param_1[0x30];
    param_1[0x31] = param_1[0x31] + dVar42 * dVar23;
    param_1[0x32] = param_1[0x32] + dVar42 * dVar34;
    param_1[0x33] = dVar42 * dVar51 + param_1[0x33];
    dVar36 = _UNK_15076c6f8;
    dVar42 = ___xmm_bff00000000000003ff0000000000000;
    dVar26 = _UNK_15076b868;
    dVar34 = ___xmm_3ff0000000000000bff0000000000000;
    dVar23 = _UNK_150689688;
    dVar1 = ___xmm_3ff00000000000003ff0000000000000;
    dVar51 = __real_3ff0000000000000;
    auVar18._8_4_ = SUB84(dVar2,0);
    auVar18._0_8_ = dVar2;
    auVar18._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    dStack_110 = dVar2;
    if (0.0 < dVar52) {
      dVar35 = dVar35 * dVar2;
      dVar31 = dVar31 * dVar2;
      dVar52 = param_1[0x36];
      dVar32 = param_1[0x37];
      dVar27 = param_1[0x34];
      dVar60 = param_1[0x35];
      dVar28 = dVar28 * dVar2;
      dVar59 = (param_1[0x35] * dVar28 * ___xmm_3ff0000000000000bff0000000000000 +
               dVar31 * dVar52 +
               dVar35 * param_1[0x37] * ___xmm_bff00000000000003ff0000000000000 + dVar27 * 0.0) *
               ___xmm_3fe00000000000003fe0000000000000 + dVar27;
      dVar64 = (param_1[0x34] * dVar28 * _UNK_15076b868 +
               dVar31 * dVar32 + dVar35 * param_1[0x36] * _UNK_15076c6f8 + dVar60 * 0.0) *
               _UNK_150689678 + dVar60;
      dVar52 = (param_1[0x37] * dVar28 * ___xmm_bff00000000000003ff0000000000000 +
               ((dVar35 * param_1[0x35] * ___xmm_bff00000000000003ff0000000000000 + dVar52 * 0.0) -
               dVar31 * dVar27)) * ___xmm_3fe00000000000003fe0000000000000 + dVar52;
      dVar32 = (param_1[0x36] * dVar28 * _UNK_15076c6f8 +
               ((dVar35 * param_1[0x34] * _UNK_15076c6f8 + dVar32 * 0.0) - dVar31 * dVar60)) *
               _UNK_150689678 + dVar32;
      dVar27 = dVar64 * dVar64 + dVar32 * dVar32 + dVar59 * dVar59 + dVar52 * dVar52;
      uVar9 = ~-(ulonglong)(dVar27 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
      dVar35 = __real_3ff0000000000000 / SQRT(dVar27);
      dVar60 = (double)((ulonglong)(dVar59 * dVar35) & uVar9);
      dVar59 = (double)((ulonglong)(dVar64 * dVar35) & uVar9);
      dVar27 = (double)(((ulonglong)(dVar52 * dVar35) ^ ___xmm_3ff00000000000000000000000000000) &
                       uVar9);
      auVar43._0_8_ = (double)(___xmm_3ff00000000000000000000000000000 ^ (ulonglong)dVar27);
      auVar43._8_8_ =
           (double)(_UNK_15061cbc8 ^ ((ulonglong)(dVar32 * dVar35) ^ _UNK_15061cbc8) & uVar9);
      param_1[0x34] = dVar60;
      param_1[0x35] = dVar59;
      *(undefined1 (*) [16])(param_1 + 0x36) = auVar43;
      auVar37._8_8_ = dVar59;
      auVar37._0_8_ = dVar60;
      auVar38 = blendpd(auVar37,auVar43,2);
      dVar52 = param_1[4] * auVar43._0_8_ - param_1[6] * auVar38._0_8_;
      dVar35 = param_1[5] * dVar60 - dVar59 * param_1[4];
      dVar31 = param_1[6] * dVar59 - auVar43._0_8_ * param_1[5];
      dVar52 = dVar52 + dVar52;
      dVar35 = dVar35 + dVar35;
      dVar31 = dVar31 + dVar31;
      param_1[0x20] =
           param_1[0x2e] + (dVar35 * dVar59 - dVar52 * dVar27) + dVar31 * auVar43._8_8_ + param_1[4]
      ;
      param_1[0x21] =
           param_1[0x2f] + (dVar31 * dVar27 - dVar35 * dVar60) + dVar52 * auVar43._8_8_ + param_1[5]
      ;
      param_1[0x22] =
           auVar43._8_8_ * dVar35 + param_1[6] + (dVar52 * dVar60 - dVar31 * dVar59) + param_1[0x30]
      ;
      auVar29._8_4_ = SUB84(dVar60,0);
      auVar29._0_8_ = dVar60;
      auVar29._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
      dVar32 = auVar29._8_8_;
      auVar53._8_4_ = SUB84(auVar43._0_8_,0);
      auVar53._0_8_ = auVar43._0_8_;
      auVar53._12_4_ = (int)((ulonglong)auVar43._0_8_ >> 0x20);
      param_1[0x26] =
           param_1[1] * auVar43._0_8_ * dVar34 +
           param_1[2] * dVar59 + param_1[3] * dVar60 * dVar42 + *param_1 * auVar43._8_8_;
      param_1[0x27] =
           *param_1 * auVar53._8_8_ * dVar26 +
           param_1[3] * dVar59 + param_1[2] * dVar32 * dVar36 + param_1[1] * auVar43._8_8_;
      param_1[0x28] =
           param_1[3] * auVar43._0_8_ * dVar42 +
           ((param_1[1] * dVar60 * dVar42 + param_1[2] * auVar43._8_8_) - *param_1 * dVar59);
      param_1[0x29] =
           param_1[2] * auVar53._8_8_ * dVar36 +
           ((*param_1 * dVar32 * dVar36 + param_1[3] * auVar43._8_8_) - param_1[1] * dVar59);
      uVar67 = _UNK_15066df7c;
      uVar66 = _UNK_15066df78;
      uVar65 = __xmm_80000000000000008000000000000000._4_4_;
      uVar49 = (undefined4)__xmm_80000000000000008000000000000000;
      dVar52 = dVar59 + dVar59;
      dVar36 = auVar43._0_8_ + auVar43._0_8_;
      dVar27 = dVar60 * (dVar60 + dVar60);
      dVar32 = dVar32 * dVar52;
      dVar35 = (dVar60 + dVar60) * auVar43._8_8_;
      dVar42 = auVar43._8_8_ * dVar36 + dVar32;
      dVar28 = dVar35 + dVar59 * dVar36;
      dVar34 = dVar52 * auVar43._8_8_ + dVar36 * dVar60;
      dVar35 = dVar59 * dVar36 - dVar35;
      dVar31 = dVar36 * dVar60 - dVar52 * auVar43._8_8_;
      dVar26 = dVar32 - auVar43._8_8_ * dVar36;
      dVar32 = dVar32 - auVar43._8_8_ * (auVar43._8_8_ + auVar43._8_8_);
      auVar54._0_8_ = dVar1 - (dVar36 * auVar43._0_8_ + dVar59 * dVar52);
      auVar54._8_8_ = dVar23 - (dVar36 * auVar43._0_8_ + dVar27);
      dVar51 = dVar51 - (dVar59 * dVar52 + dVar27);
      dVar1 = param_1[0x18];
      dVar52 = param_1[0x1a];
      dVar27 = param_1[0x19];
      auVar19._8_4_ = SUB84(dVar32,0);
      auVar19._0_8_ = dVar26;
      auVar19._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
      auVar38 = blendpd(auVar54,auVar19,1);
      dVar32 = dVar34 * 0.0 + dVar26 * 0.0 + auVar54._0_8_ * dVar1;
      dVar60 = dVar34 * 0.0 + dVar26 * dVar27 + auVar54._0_8_ * 0.0;
      dVar23 = dVar52 * dVar34 +
               dVar26 * 0.0 + auVar54._0_8_ * ___xmm_00000000000000000000000000000000;
      dVar59 = dVar35 * __real_0000000000000000 + auVar54._8_8_ * 0.0 + dVar42 * dVar1;
      dVar64 = dVar35 * __real_0000000000000000 + dVar27 * auVar54._8_8_ + dVar42 * 0.0;
      dVar36 = dVar52 * dVar35 + auVar54._8_8_ * 0.0 + dVar42 * 0.0;
      dVar1 = dVar51 * __real_0000000000000000 + dVar28 * 0.0 + dVar1 * dVar31;
      dVar27 = dVar51 * __real_0000000000000000 + dVar28 * dVar27 + dVar31 * 0.0;
      dVar57 = auVar38._0_8_;
      dVar50 = auVar38._8_8_;
      auVar4._8_4_ = SUB84(dVar50 * dVar27,0);
      auVar4._0_8_ = dVar57 * dVar27;
      auVar4._12_4_ = (int)((ulonglong)(dVar50 * dVar27) >> 0x20);
      dVar26 = dVar52 * dVar51 + dVar28 * ___xmm_00000000000000000000000000000000 + dVar31 * 0.0;
      dVar52 = dVar23 * dVar35 + dVar50 * dVar60 + dVar32 * dVar42;
      dStack_b0 = auVar4._8_8_;
      dStack_110 = auVar18._8_8_;
      auVar15._8_4_ = SUB84(dVar52,0);
      auVar15._0_8_ = dVar23 * dVar34 + dVar57 * dVar60 + dVar32 * auVar54._0_8_;
      auVar15._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0x48) = auVar15;
      param_1[0x4a] = dVar23 * dVar51 + dVar60 * dVar28 + dVar31 * dVar32;
      param_1[0x4b] = 0.0;
      param_1[0x4c] = dVar36 * dVar34 + dVar57 * dVar64 + dVar59 * auVar54._0_8_;
      param_1[0x4d] = dVar36 * dVar35 + dVar50 * dVar64 + dVar59 * dVar42;
      param_1[0x4e] = dVar36 * dVar51 + dVar64 * dVar28 + dVar31 * dVar59;
      param_1[0x4f] = 0.0;
      param_1[0x50] = dVar26 * dVar34 + dVar57 * dVar27 + dVar1 * auVar54._0_8_;
      param_1[0x51] = dVar26 * dVar35 + dStack_b0 + dVar1 * dVar42;
      param_1[0x52] = dVar26 * dVar51 + dVar27 * dVar28 + dVar31 * dVar1;
      param_1[0x55] = 0.0;
      param_1[0x56] = 0.0;
      param_1[0x53] = 0.0;
      param_1[0x54] = 0.0;
      param_1[0x57] = 1.0;
      dVar27 = param_1[0x1f];
    }
    dVar23 = _UNK_15076c6f8;
    dVar28 = ___xmm_bff00000000000003ff0000000000000;
    dVar31 = _UNK_15076b868;
    dVar35 = ___xmm_3ff0000000000000bff0000000000000;
    dVar52 = _UNK_150689688;
    dVar1 = ___xmm_3ff00000000000003ff0000000000000;
    dVar51 = __real_3ff0000000000000;
    if (dVar27 <= 0.0) goto LAB_140a051d1;
    dVar34 = (double)(CONCAT44(uVar65,uVar49) ^ (ulonglong)dVar2);
    dVar33 = dVar33 * dVar34;
    dVar34 = dVar34 * dVar22;
    dStack_d0 = (double)(CONCAT44(uVar67,uVar66) ^ (ulonglong)dStack_110) * dStack_d0;
    dVar26 = param_1[0x3a];
    dVar42 = param_1[0x3b];
    dVar36 = param_1[0x38];
    dVar32 = param_1[0x39];
    dVar27 = (param_1[0x39] * dVar33 * ___xmm_3ff0000000000000bff0000000000000 +
             dStack_d0 * dVar26 +
             dVar34 * param_1[0x3b] * ___xmm_bff00000000000003ff0000000000000 + dVar36 * 0.0) *
             ___xmm_3fe00000000000003fe0000000000000 + dVar36;
    dVar22 = (param_1[0x38] * dVar33 * _UNK_15076b868 +
             dStack_d0 * dVar42 + dVar34 * param_1[0x3a] * _UNK_15076c6f8 + dVar32 * 0.0) *
             _UNK_150689678 + dVar32;
    dVar26 = (param_1[0x3b] * dVar33 * ___xmm_bff00000000000003ff0000000000000 +
             ((dVar34 * param_1[0x39] * ___xmm_bff00000000000003ff0000000000000 + dVar26 * 0.0) -
             dStack_d0 * dVar36)) * ___xmm_3fe00000000000003fe0000000000000 + dVar26;
    dVar42 = (param_1[0x3a] * dVar33 * _UNK_15076c6f8 +
             ((dVar34 * param_1[0x38] * _UNK_15076c6f8 + dVar42 * 0.0) - dStack_d0 * dVar32)) *
             _UNK_150689678 + dVar42;
    dVar33 = dVar22 * dVar22 + dVar42 * dVar42 + dVar27 * dVar27 + dVar26 * dVar26;
    uVar9 = ~-(ulonglong)(dVar33 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
    dVar36 = __real_3ff0000000000000 / SQRT(dVar33);
    dVar33 = (double)((ulonglong)(dVar27 * dVar36) & uVar9);
    dVar34 = (double)((ulonglong)(dVar22 * dVar36) & uVar9);
    uVar49 = (undefined4)((ulonglong)dVar34 >> 0x20);
    dVar26 = (double)(((ulonglong)(dVar26 * dVar36) ^ ___xmm_3ff00000000000000000000000000000) &
                     uVar9);
    auVar61._0_8_ = (double)(___xmm_3ff00000000000000000000000000000 ^ (ulonglong)dVar26);
    auVar61._8_8_ =
         (double)(_UNK_15061cbc8 ^ ((ulonglong)(dVar42 * dVar36) ^ _UNK_15061cbc8) & uVar9);
    auVar10._8_4_ = SUB84(dVar34,0);
    auVar10._0_8_ = dVar33;
    auVar10._12_4_ = uVar49;
    *(undefined1 (*) [16])(param_1 + 0x38) = auVar10;
    *(undefined1 (*) [16])(param_1 + 0x3a) = auVar61;
    auVar11._8_4_ = SUB84(dVar34,0);
    auVar11._0_8_ = dVar33;
    auVar11._12_4_ = uVar49;
    auVar39._8_8_ = dVar34;
    auVar39._0_8_ = dVar33;
    auVar38 = blendpd(auVar39,auVar61,2);
    dVar42 = param_1[0x10] * auVar61._0_8_ - param_1[0x12] * auVar38._0_8_;
    dVar27 = param_1[0x11] * dVar33 - auVar11._8_8_ * param_1[0x10];
    dVar22 = param_1[0x12] * dVar34 - auVar61._0_8_ * param_1[0x11];
    dVar42 = dVar42 + dVar42;
    dVar27 = dVar27 + dVar27;
    dVar22 = dVar22 + dVar22;
    param_1[0x23] =
         param_1[0x31] +
         (dVar27 * dVar34 - dVar42 * dVar26) + dVar22 * auVar61._8_8_ + param_1[0x10];
    param_1[0x24] =
         param_1[0x32] +
         (dVar22 * dVar26 - dVar27 * dVar33) + dVar42 * auVar61._8_8_ + param_1[0x11];
    param_1[0x25] =
         auVar61._8_8_ * dVar27 + param_1[0x12] + (dVar42 * dVar33 - dVar22 * dVar34) +
         param_1[0x33];
    auVar44._8_4_ = SUB84(auVar61._0_8_,0);
    auVar44._0_8_ = auVar61._0_8_;
    auVar44._12_4_ = (int)((ulonglong)auVar61._0_8_ >> 0x20);
    param_1[0x2a] =
         param_1[0xd] * auVar61._0_8_ * dVar35 +
         param_1[0xe] * dVar34 + param_1[0xf] * dVar33 * dVar28 + param_1[0xc] * auVar61._8_8_;
    param_1[0x2b] =
         param_1[0xc] * auVar44._8_8_ * dVar31 +
         param_1[0xf] * dVar34 + param_1[0xe] * dVar33 * dVar23 + param_1[0xd] * auVar61._8_8_;
    param_1[0x2c] =
         param_1[0xf] * auVar61._0_8_ * dVar28 +
         ((param_1[0xd] * dVar33 * dVar28 + param_1[0xe] * auVar61._8_8_) - param_1[0xc] * dVar34);
    param_1[0x2d] =
         param_1[0xe] * auVar44._8_8_ * dVar23 +
         ((param_1[0xc] * dVar33 * dVar23 + param_1[0xf] * auVar61._8_8_) - param_1[0xd] * dVar34);
    dVar36 = dVar34 + dVar34;
    dVar32 = auVar61._0_8_ + auVar61._0_8_;
    dVar27 = dVar33 * (dVar33 + dVar33);
    dVar31 = dVar33 * dVar36;
    dVar28 = (dVar33 + dVar33) * auVar61._8_8_;
    dVar42 = auVar61._8_8_ * dVar32 + dVar31;
    dVar23 = dVar28 + dVar34 * dVar32;
    dVar26 = dVar36 * auVar61._8_8_ + dVar32 * dVar33;
    dVar28 = dVar34 * dVar32 - dVar28;
    dVar22 = dVar32 * dVar33 - dVar36 * auVar61._8_8_;
    dVar35 = dVar31 - auVar61._8_8_ * dVar32;
    dVar31 = dVar31 - auVar61._8_8_ * (auVar61._8_8_ + auVar61._8_8_);
    auVar45._0_8_ = dVar1 - (dVar32 * auVar61._0_8_ + dVar34 * dVar36);
    auVar45._8_8_ = dVar52 - (dVar32 * auVar61._0_8_ + dVar27);
    dVar51 = dVar51 - (dVar34 * dVar36 + dVar27);
    dVar1 = param_1[0x1b];
    dVar52 = param_1[0x1d];
    dVar27 = param_1[0x1c];
    auVar5._8_4_ = SUB84(dVar31,0);
    auVar5._0_8_ = dVar35;
    auVar5._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
    auVar38 = blendpd(auVar45,auVar5,1);
    dVar33 = dVar26 * 0.0 + dVar35 * 0.0 + auVar45._0_8_ * dVar1;
    dVar34 = dVar26 * 0.0 + dVar35 * dVar27 + auVar45._0_8_ * 0.0;
    dVar64 = dVar52 * dVar26 +
             dVar35 * 0.0 + auVar45._0_8_ * ___xmm_00000000000000000000000000000000;
    dVar36 = dVar28 * 0.0 + auVar45._8_8_ * 0.0 + dVar42 * dVar1;
    dVar32 = dVar28 * 0.0 + dVar27 * auVar45._8_8_ + dVar42 * 0.0;
    dVar31 = dVar52 * dVar28 + auVar45._8_8_ * 0.0 + dVar42 * 0.0;
    dVar35 = dVar51 * 0.0 + dVar23 * 0.0 + dVar1 * dVar22;
    dVar27 = dVar51 * 0.0 + dVar23 * dVar27 + dVar22 * 0.0;
    dVar60 = auVar38._0_8_;
    dVar59 = auVar38._8_8_;
    dVar52 = dVar52 * dVar51 + dVar23 * ___xmm_00000000000000000000000000000000 + dVar22 * 0.0;
    dVar1 = dVar64 * dVar28 + dVar59 * dVar34 + dVar33 * dVar42;
    auVar16._8_4_ = SUB84(dVar1,0);
    auVar16._0_8_ = dVar64 * dVar26 + dVar60 * dVar34 + dVar33 * auVar45._0_8_;
    auVar16._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x58) = auVar16;
    param_1[0x5a] = dVar64 * dVar51 + dVar34 * dVar23 + dVar22 * dVar33;
    param_1[0x5b] = 0.0;
    param_1[0x5c] = dVar31 * dVar26 + dVar60 * dVar32 + dVar36 * auVar45._0_8_;
    param_1[0x5d] = dVar31 * dVar28 + dVar59 * dVar32 + dVar36 * dVar42;
    param_1[0x5e] = dVar31 * dVar51 + dVar32 * dVar23 + dVar22 * dVar36;
    param_1[0x5f] = 0.0;
    param_1[0x60] = dVar52 * dVar26 + dVar60 * dVar27 + dVar35 * auVar45._0_8_;
    param_1[0x61] = dVar52 * dVar28 + dVar59 * dVar27 + dVar35 * dVar42;
    param_1[0x62] = dVar52 * dVar51 + dVar27 * dVar23 + dVar22 * dVar35;
    param_1[0x65] = 0.0;
    param_1[0x66] = 0.0;
    param_1[99] = 0.0;
    param_1[100] = 0.0;
  }
  param_1[0x67] = 1.0;
  dStack_110 = dVar2;
LAB_140a051d1:
  uVar9 = __real_bff0000000000000;
  dVar1 = __real_3ff0000000000000;
  uVar25 = -(ulonglong)
            (0.0 <= param_1[0x35] * param_1[0x39] + param_1[0x37] * param_1[0x3b] +
                    param_1[0x34] * param_1[0x38] + param_1[0x36] * param_1[0x3a]);
  dVar51 = (double)(~uVar25 & __real_bff0000000000000 | uVar25 & (ulonglong)__real_3ff0000000000000)
  ;
  param_1[0x38] = param_1[0x38] * dVar51;
  param_1[0x39] = param_1[0x39] * dVar51;
  param_1[0x3a] = param_1[0x3a] * dVar51;
  param_1[0x3b] = param_1[0x3b] * dVar51;
  uVar25 = -(ulonglong)
            (0.0 <= param_1[0x27] * param_1[0x2b] + param_1[0x29] * param_1[0x2d] +
                    param_1[0x26] * param_1[0x2a] + param_1[0x28] * param_1[0x2c]);
  dVar1 = (double)(~uVar25 & uVar9 | (ulonglong)dVar1 & uVar25);
  dVar51 = param_1[0x2d] * dVar1;
  param_1[0x2a] = param_1[0x2a] * dVar1;
  param_1[0x2b] = param_1[0x2b] * dVar1;
  auVar12._8_4_ = SUB84(dVar51,0);
  auVar12._0_8_ = param_1[0x2c] * dVar1;
  auVar12._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x2c) = auVar12;
  *param_9 = *param_9 + dVar2;
  dVar1 = param_6[1];
  dVar51 = param_6[2];
  param_1[0x84] = param_1[0x84] + dVar2 * *param_6;
  param_1[0x85] = param_1[0x85] + dStack_110 * dVar1;
  param_1[0x86] = dVar2 * dVar51 + param_1[0x86];
  return;
}

// ApplyRotationConstraintSoftKD___un_3C_s_5B_unFPBDJointSolver_5D__3E_CuniCuniCundCundCundCunbREFs_5B__c_unFVector_5D_CundCundREFund_sse4 @ 140a05360

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyRotationConstraintSoftKD___un_3C_s_5B_unFPBDJointSolver_5D__3E_CuniCuniCundCundCundCunbREFs_5B__c_unFVector_5D_CundCundREFund_sse4
               (longlong param_1,int param_2,int param_3,double param_4,double param_5,
               double param_6,byte param_7,double *param_8,double param_9,double param_10,
               double *param_11,undefined1 (*param_12) [16])

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined4 unaff_ESI;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  double dVar19;
  double dVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar23;
  ulonglong uVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar43;
  double dVar44;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined4 uVar45;
  undefined4 uVar46;
  
  dVar12 = _UNK_15076c6f8;
  dVar31 = ___xmm_bff00000000000003ff0000000000000;
  dVar11 = _UNK_15076b868;
  dVar9 = ___xmm_3ff0000000000000bff0000000000000;
  dVar40 = __real_3ff0000000000000;
  iVar14 = movmskps(unaff_ESI,*param_12);
  lVar17 = (longlong)param_3;
  lVar16 = lVar17 * 0x80;
  dVar20 = *param_8;
  dVar19 = param_8[1];
  pdVar1 = (double *)(param_1 + 0x240 + lVar16);
  pdVar2 = (double *)(param_1 + 0x260 + lVar16);
  pdVar3 = (double *)(param_1 + 0x280 + lVar16);
  pdVar4 = (double *)(param_1 + 0x240 + lVar16);
  dVar26 = param_8[2];
  uVar45 = SUB84(dVar26,0);
  uVar46 = (undefined4)((ulonglong)dVar26 >> 0x20);
  dVar35 = *param_8;
  dVar36 = param_8[1];
  dVar20 = (dVar26 * pdVar3[1] + dVar19 * pdVar2[1] + pdVar1[1] * dVar20) * dVar36 +
           (dVar26 * *pdVar3 + dVar19 * *pdVar2 + *pdVar1 * dVar20) * dVar35 +
           (*(double *)(param_1 + 0x290 + lVar16) * dVar26 +
           dVar19 * *(double *)(param_1 + 0x270 + lVar16) +
           dVar20 * *(double *)(param_1 + 0x250 + lVar16)) * dVar26;
  dVar19 = 0.0;
  if (iVar14 == 0xf) {
    if (param_6 <= __real_3f1a36e2eb1c432d) goto LAB_140a05a50;
    lVar16 = (longlong)param_2 * 0x20;
    pdVar1 = (double *)(param_1 + 0x3e0 + lVar16);
    dVar13 = *pdVar1;
    dVar39 = pdVar1[1];
    pdVar1 = (double *)(param_1 + 0x3f0 + lVar16);
    dVar19 = *pdVar1;
    dVar10 = pdVar1[1];
    pdVar1 = (double *)(param_1 + 0x130 + lVar16);
    dVar22 = *pdVar1;
    dVar27 = pdVar1[1];
    pdVar1 = (double *)(param_1 + 0x140 + lVar16);
    dVar44 = *pdVar1;
    dVar30 = pdVar1[1];
    uVar18 = -(ulonglong)
              (0.0 <= dVar39 * dVar27 + dVar10 * dVar30 + dVar13 * dVar22 + dVar19 * dVar44);
    dVar32 = (double)(~uVar18 & __real_bff0000000000000 |
                     uVar18 & (ulonglong)__real_3ff0000000000000);
    dVar22 = dVar22 * dVar32 - dVar13;
    dVar27 = dVar27 * dVar32 - dVar39;
    dVar25 = dVar44 * dVar32 - dVar19;
    dVar28 = dVar30 * dVar32 - dVar10;
    dVar19 = dVar19 * ___xmm_3ff0000000000000bff0000000000000;
    dVar10 = dVar10 * _UNK_15076b868;
    dVar44 = (dVar19 * dVar27 +
             (dVar10 * dVar22 * ___xmm_bff00000000000003ff0000000000000 - dVar13 * dVar28)) -
             dVar39 * dVar25 * ___xmm_3ff0000000000000bff0000000000000;
    dVar30 = (dVar10 * dVar27 + (dVar19 * dVar22 * _UNK_15076c6f8 - dVar39 * dVar28)) -
             dVar13 * dVar25 * _UNK_15076b868;
    lVar15 = lVar17 * 0x20;
    pdVar1 = (double *)(param_1 + 0x3f0 + lVar15);
    dVar32 = *pdVar1;
    dVar37 = pdVar1[1];
    pdVar1 = (double *)(param_1 + 0x140 + lVar15);
    dVar39 = *pdVar1;
    dVar29 = pdVar1[1];
    pdVar1 = (double *)(param_1 + 0x3e0 + lVar15);
    dVar23 = *pdVar1;
    dVar43 = pdVar1[1];
    pdVar1 = (double *)(param_1 + 0x130 + lVar15);
    dVar33 = *pdVar1;
    dVar34 = pdVar1[1];
    uVar18 = -(ulonglong)
              (0.0 <= dVar43 * dVar34 + dVar37 * dVar29 + dVar23 * dVar33 + dVar32 * dVar39);
    dVar13 = (double)(~uVar18 & __real_bff0000000000000 |
                     (ulonglong)__real_3ff0000000000000 & uVar18);
    dVar33 = dVar33 * dVar13 - dVar23;
    dVar34 = dVar34 * dVar13 - dVar43;
    dVar38 = dVar39 * dVar13 - dVar32;
    dVar29 = dVar29 * dVar13 - dVar37;
    dVar32 = dVar32 * ___xmm_3ff0000000000000bff0000000000000;
    dVar37 = dVar37 * _UNK_15076b868;
    dVar13 = (dVar32 * dVar34 +
             (dVar37 * dVar33 * ___xmm_bff00000000000003ff0000000000000 - dVar23 * dVar29)) -
             dVar43 * dVar38 * ___xmm_3ff0000000000000bff0000000000000;
    dVar39 = (dVar37 * dVar34 + (dVar32 * dVar33 * _UNK_15076c6f8 - dVar43 * dVar29)) -
             dVar23 * dVar38 * _UNK_15076b868;
    dVar13 = (dVar44 + dVar44) - (dVar13 + dVar13);
    dVar39 = (dVar30 + dVar30) - (dVar39 + dVar39);
    dVar44 = dVar37 * dVar38 +
             dVar34 * *(double *)(param_1 + 0x3e0 + lVar15) +
             (dVar29 * dVar32 - dVar33 * *(double *)(param_1 + 1000 + lVar15));
    dVar19 = dVar10 * dVar25 +
             dVar27 * *(double *)(param_1 + 0x3e0 + lVar16) +
             (dVar28 * dVar19 - dVar22 * *(double *)(param_1 + 1000 + lVar16));
    dVar19 = (dVar19 + dVar19) - (dVar44 + dVar44);
  }
  else {
    dVar19 = 0.0;
    if (param_6 <= __real_3f1a36e2eb1c432d) goto LAB_140a05a50;
    lVar16 = (longlong)param_2 * 0x20;
    pdVar1 = (double *)(param_1 + 0x3e0 + lVar16);
    dVar22 = *pdVar1;
    dVar27 = pdVar1[1];
    pdVar1 = (double *)(param_1 + 0x3f0 + lVar16);
    dVar19 = *pdVar1;
    dVar10 = pdVar1[1];
    pdVar1 = (double *)(param_1 + 0x130 + lVar16);
    dVar13 = *pdVar1;
    dVar39 = pdVar1[1];
    pdVar1 = (double *)(param_1 + 0x140 + lVar16);
    dVar32 = *pdVar1;
    dVar37 = pdVar1[1];
    uVar18 = -(ulonglong)
              (0.0 <= dVar27 * dVar39 + dVar10 * dVar37 + dVar22 * dVar13 + dVar19 * dVar32);
    dVar29 = (double)(~uVar18 & __real_bff0000000000000 |
                     uVar18 & (ulonglong)__real_3ff0000000000000);
    dVar44 = dVar13 * dVar29 - dVar22;
    dVar30 = dVar39 * dVar29 - dVar27;
    dVar25 = dVar32 * dVar29 - dVar19;
    dVar28 = dVar37 * dVar29 - dVar10;
    dVar19 = dVar19 * ___xmm_3ff0000000000000bff0000000000000;
    dVar10 = dVar10 * _UNK_15076b868;
    dVar29 = (dVar19 * dVar30 +
             (dVar10 * dVar44 * ___xmm_bff00000000000003ff0000000000000 - dVar22 * dVar28)) -
             dVar27 * dVar25 * ___xmm_3ff0000000000000bff0000000000000;
    dVar23 = (dVar10 * dVar30 + (dVar19 * dVar44 * _UNK_15076c6f8 - dVar27 * dVar28)) -
             dVar22 * dVar25 * _UNK_15076b868;
    lVar15 = lVar17 * 0x20;
    pdVar1 = (double *)(param_1 + 0x3f0 + lVar15);
    dVar22 = *pdVar1;
    dVar27 = pdVar1[1];
    pdVar1 = (double *)(param_1 + 0x140 + lVar15);
    dVar39 = *pdVar1;
    dVar43 = pdVar1[1];
    pdVar1 = (double *)(param_1 + 0x3e0 + lVar15);
    dVar33 = *pdVar1;
    dVar34 = pdVar1[1];
    pdVar1 = (double *)(param_1 + 0x130 + lVar15);
    dVar32 = *pdVar1;
    dVar37 = pdVar1[1];
    uVar18 = -(ulonglong)
              (0.0 <= dVar34 * dVar37 + dVar27 * dVar43 + dVar33 * dVar32 + dVar22 * dVar39);
    dVar13 = (double)(~uVar18 & __real_bff0000000000000 |
                     (ulonglong)__real_3ff0000000000000 & uVar18);
    dVar32 = dVar32 * dVar13 - dVar33;
    dVar37 = dVar37 * dVar13 - dVar34;
    dVar38 = dVar39 * dVar13 - dVar22;
    dVar43 = dVar43 * dVar13 - dVar27;
    dVar22 = dVar22 * ___xmm_3ff0000000000000bff0000000000000;
    dVar27 = dVar27 * _UNK_15076b868;
    dVar13 = (dVar22 * dVar37 +
             (dVar27 * dVar32 * ___xmm_bff00000000000003ff0000000000000 - dVar33 * dVar43)) -
             dVar34 * dVar38 * ___xmm_3ff0000000000000bff0000000000000;
    dVar39 = (dVar27 * dVar37 + (dVar22 * dVar32 * _UNK_15076c6f8 - dVar34 * dVar43)) -
             dVar33 * dVar38 * _UNK_15076b868;
    dVar13 = (dVar29 + dVar29) - (dVar13 + dVar13);
    dVar39 = (dVar23 + dVar23) - (dVar39 + dVar39);
    dVar22 = dVar27 * dVar38 +
             dVar37 * *(double *)(param_1 + 0x3e0 + lVar15) +
             (dVar43 * dVar22 - dVar32 * *(double *)(param_1 + 1000 + lVar15));
    dVar19 = dVar10 * dVar25 +
             dVar30 * *(double *)(param_1 + 0x3e0 + lVar16) +
             (dVar28 * dVar19 - dVar44 * *(double *)(param_1 + 1000 + lVar16));
    dVar19 = (dVar19 + dVar19) - (dVar22 + dVar22);
  }
  dVar19 = dVar36 * dVar39 + dVar35 * dVar13 + dVar19 * dVar26 + param_10 * param_4;
  uVar45 = SUB84(param_8[2],0);
  uVar46 = (undefined4)((ulonglong)param_8[2] >> 0x20);
  dVar35 = *param_8;
  dVar36 = param_8[1];
LAB_140a05a50:
  dVar26 = __real_3ff0000000000000;
  if ((param_7 & 1) != 0) {
    dVar26 = __real_3ff0000000000000 / dVar20;
  }
  dVar10 = param_5 * dVar26 * param_4 * param_4;
  param_4 = param_6 * dVar26 * param_4;
  dVar23 = ((dVar10 * param_9 - param_4 * dVar19) - *param_11) *
           (__real_3ff0000000000000 / ((param_4 + dVar10) * dVar20 + __real_3ff0000000000000)) *
           *(double *)(param_1 + 0x4c8);
  dVar22 = (double)((ulonglong)dVar20 ^ __xmm_80000000000000008000000000000000) * dVar23;
  dVar35 = dVar35 * dVar22;
  dVar36 = dVar36 * dVar22;
  lVar15 = lVar17 * 0x20;
  pdVar1 = (double *)(param_1 + 0x1b0 + lVar15);
  dVar39 = *pdVar1;
  dVar44 = pdVar1[1];
  pdVar1 = (double *)(param_1 + 0x1a0 + lVar15);
  dVar30 = *pdVar1;
  dVar32 = pdVar1[1];
  dVar20 = *(double *)(param_1 + 0x1b8 + lVar15);
  dVar19 = *(double *)(param_1 + 0x1b0 + lVar15);
  dVar26 = *(double *)(param_1 + 0x1a8 + lVar15);
  dVar10 = *(double *)(param_1 + 0x1a0 + lVar15);
  dVar22 = (double)CONCAT44(uVar46,uVar45) * dVar22;
  dVar27 = (dVar26 * dVar22 * ___xmm_3ff0000000000000bff0000000000000 +
           dVar36 * dVar39 +
           dVar35 * dVar20 * ___xmm_bff00000000000003ff0000000000000 + dVar30 * 0.0) *
           ___xmm_3fe00000000000003fe0000000000000 + dVar30;
  dVar13 = (dVar10 * dVar22 * _UNK_15076b868 +
           dVar36 * dVar44 + dVar35 * dVar19 * _UNK_15076c6f8 + dVar32 * 0.0) * _UNK_150689678 +
           dVar32;
  dVar39 = (dVar20 * dVar22 * ___xmm_bff00000000000003ff0000000000000 +
           ((dVar35 * dVar26 * ___xmm_bff00000000000003ff0000000000000 + dVar39 * 0.0) -
           dVar36 * dVar30)) * ___xmm_3fe00000000000003fe0000000000000 + dVar39;
  dVar44 = (dVar19 * dVar22 * _UNK_15076c6f8 +
           ((dVar35 * dVar10 * _UNK_15076c6f8 + dVar44 * 0.0) - dVar36 * dVar32)) * _UNK_150689678 +
           dVar44;
  dVar20 = dVar13 * dVar13 + dVar44 * dVar44 + dVar27 * dVar27 + dVar39 * dVar39;
  uVar18 = ~-(ulonglong)(dVar20 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
  dVar20 = __real_3ff0000000000000 / SQRT(dVar20);
  uVar21 = ~uVar18 & ___xmm_3ff00000000000000000000000000000;
  uVar24 = ~uVar18 & _UNK_15061cbc8;
  *(ulonglong *)(param_1 + 0x1a0 + lVar15) = (ulonglong)(dVar27 * dVar20) & uVar18;
  *(ulonglong *)(param_1 + 0x1a8 + lVar15) = (ulonglong)(dVar13 * dVar20) & uVar18;
  *(ulonglong *)(param_1 + 0x1b0 + lVar15) = uVar21 | (ulonglong)(dVar39 * dVar20) & uVar18;
  *(ulonglong *)(param_1 + 0x1b8 + lVar15) = uVar24 | (ulonglong)(dVar44 * dVar20) & uVar18;
  uVar18 = __real_bff0000000000000;
  uVar21 = -(ulonglong)
            (0.0 <= *(double *)(param_1 + 0x1a8) * *(double *)(param_1 + 0x1c8) +
                    *(double *)(param_1 + 0x1b8) * *(double *)(param_1 + 0x1d8) +
                    *(double *)(param_1 + 0x1a0) * *(double *)(param_1 + 0x1c0) +
                    *(double *)(param_1 + 0x1b0) * *(double *)(param_1 + 0x1d0));
  dVar20 = (double)(~uVar21 & __real_bff0000000000000 | uVar21 & (ulonglong)dVar40);
  *(double *)(param_1 + 0x1c0) = *(double *)(param_1 + 0x1c0) * dVar20;
  *(double *)(param_1 + 0x1c8) = *(double *)(param_1 + 0x1c8) * dVar20;
  *(double *)(param_1 + 0x1d0) = *(double *)(param_1 + 0x1d0) * dVar20;
  *(double *)(param_1 + 0x1d8) = *(double *)(param_1 + 0x1d8) * dVar20;
  dVar29 = _UNK_150689688;
  dVar32 = ___xmm_3ff00000000000003ff0000000000000;
  lVar16 = lVar17 * 0x60;
  dVar20 = *(double *)(param_1 + 0x1b8 + lVar15);
  pdVar1 = (double *)(param_1 + 0x1a0 + lVar15);
  dVar35 = *pdVar1;
  dVar36 = pdVar1[1];
  pdVar1 = (double *)(param_1 + 0x1a8 + lVar15);
  dVar10 = *pdVar1;
  dVar22 = pdVar1[1];
  pdVar1 = (double *)(param_1 + 0x20 + lVar16);
  dVar27 = *pdVar1;
  dVar13 = pdVar1[1];
  pdVar1 = (double *)(param_1 + 0x28 + lVar16);
  dVar19 = *(double *)(param_1 + 0x1a0 + lVar15);
  dVar30 = *(double *)(param_1 + 0x1b0 + lVar15) * *(double *)(param_1 + 0x20 + lVar16) -
           dVar19 * *(double *)(param_1 + 0x30 + lVar16);
  dVar39 = *pdVar1 * dVar35 - dVar27 * dVar10;
  dVar44 = pdVar1[1] * dVar36 - dVar13 * dVar22;
  dVar39 = dVar39 + dVar39;
  dVar44 = dVar44 + dVar44;
  dVar30 = dVar30 + dVar30;
  dVar26 = *(double *)(param_1 + 0x30 + lVar16);
  pdVar1 = (double *)(param_1 + 0x170 + lVar17 * 0x18);
  dVar19 = pdVar1[1] +
           (dVar44 * *(double *)(param_1 + 0x1b0 + lVar15) - dVar19 * dVar39) +
           dVar20 * dVar30 + dVar13;
  auVar42._8_4_ = SUB84(dVar19,0);
  auVar42._0_8_ = *pdVar1 + (dVar39 * dVar36 - dVar30 * dVar22) + dVar20 * dVar44 + dVar27;
  auVar42._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x100 + lVar17 * 0x18) = auVar42;
  *(double *)(param_1 + 0x110 + lVar17 * 0x18) =
       dVar39 * dVar20 + dVar26 + (dVar30 * dVar35 - dVar44 * dVar10) +
       *(double *)(param_1 + 0x180 + lVar17 * 0x18);
  pdVar1 = (double *)(param_1 + 0x1b8 + lVar15);
  dVar20 = *pdVar1;
  dVar19 = *pdVar1;
  pdVar1 = (double *)(param_1 + 0x10 + lVar16);
  dVar43 = *pdVar1;
  dVar33 = pdVar1[1];
  dVar34 = *(double *)(param_1 + lVar16);
  dVar25 = ((double *)(param_1 + lVar16))[1];
  dVar26 = *(double *)(param_1 + 0x18 + lVar16);
  dVar35 = *(double *)(param_1 + 0x10 + lVar16);
  pdVar1 = (double *)(param_1 + 0x1a0 + lVar15);
  dVar36 = *pdVar1;
  dVar10 = *pdVar1;
  dVar22 = *(double *)(param_1 + 8 + lVar16);
  dVar27 = *(double *)(param_1 + lVar16);
  pdVar1 = (double *)(param_1 + 0x1a8 + lVar15);
  dVar39 = *pdVar1;
  dVar13 = *pdVar1;
  pdVar1 = (double *)(param_1 + 0x1b0 + lVar15);
  dVar30 = *pdVar1;
  dVar44 = *pdVar1;
  dVar37 = dVar35 * dVar44 * dVar12 +
           ((dVar10 * dVar27 * dVar12 + dVar19 * dVar33) - dVar25 * dVar13);
  pdVar1 = (double *)(param_1 + 0x130 + lVar15);
  *pdVar1 = dVar22 * dVar30 * dVar9 + dVar43 * dVar39 + dVar36 * dVar26 * dVar31 + dVar20 * dVar34;
  pdVar1[1] = dVar27 * dVar44 * dVar11 +
              dVar33 * dVar13 + dVar10 * dVar35 * dVar12 + dVar19 * dVar25;
  auVar5._8_4_ = SUB84(dVar37,0);
  auVar5._0_8_ = dVar26 * dVar30 * dVar31 +
                 ((dVar36 * dVar22 * dVar31 + dVar20 * dVar43) - dVar34 * dVar39);
  auVar5._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x140 + lVar15) = auVar5;
  uVar21 = -(ulonglong)
            (0.0 <= *(double *)(param_1 + 0x138) * *(double *)(param_1 + 0x158) +
                    *(double *)(param_1 + 0x148) * *(double *)(param_1 + 0x168) +
                    *(double *)(param_1 + 0x130) * *(double *)(param_1 + 0x150) +
                    *(double *)(param_1 + 0x140) * *(double *)(param_1 + 0x160));
  dVar20 = (double)(~uVar21 & uVar18 | uVar21 & (ulonglong)dVar40);
  *(double *)(param_1 + 0x150) = *(double *)(param_1 + 0x150) * dVar20;
  *(double *)(param_1 + 0x158) = *(double *)(param_1 + 0x158) * dVar20;
  *(double *)(param_1 + 0x160) = *(double *)(param_1 + 0x160) * dVar20;
  *(double *)(param_1 + 0x168) = *(double *)(param_1 + 0x168) * dVar20;
  pdVar1 = (double *)(param_1 + 0x1b0 + lVar15);
  dVar31 = *pdVar1;
  dVar10 = pdVar1[1];
  pdVar1 = (double *)(param_1 + 0x1a0 + lVar15);
  dVar22 = *pdVar1;
  dVar44 = pdVar1[1];
  dVar22 = dVar22 + dVar22;
  dVar44 = dVar44 + dVar44;
  dVar31 = dVar31 + dVar31;
  dVar20 = *(double *)(param_1 + 0x1a0 + lVar15);
  dVar19 = *(double *)(param_1 + 0x1a8 + lVar15);
  dVar9 = dVar20 * dVar22;
  dVar11 = dVar20 * dVar44;
  dVar36 = dVar19 * dVar44;
  dVar19 = dVar19 * dVar31;
  pdVar1 = (double *)(param_1 + 0x1b8 + lVar15);
  dVar35 = *pdVar1;
  dVar26 = *pdVar1;
  dVar22 = dVar22 * dVar35;
  dVar44 = dVar44 * dVar26;
  dVar27 = *(double *)(param_1 + 0x1b0 + lVar15) * dVar31;
  dVar35 = dVar31 * dVar35;
  dVar12 = dVar35 + dVar11;
  dVar13 = dVar22 + dVar19;
  dVar39 = dVar44 + dVar20 * dVar31;
  dVar19 = dVar19 - dVar22;
  dVar44 = dVar20 * dVar31 - dVar44;
  dVar35 = dVar11 - dVar35;
  dVar11 = dVar11 - (dVar10 + dVar10) * dVar26;
  dVar32 = dVar32 - (dVar27 + dVar36);
  dVar29 = dVar29 - (dVar27 + dVar9);
  dVar40 = dVar40 - (dVar36 + dVar9);
  auVar41._8_8_ = dVar29;
  auVar41._0_8_ = dVar32;
  dVar20 = *(double *)(param_1 + 0xc0 + lVar17 * 0x18);
  dVar26 = *(double *)(param_1 + 0xd0 + lVar17 * 0x18);
  dVar36 = *(double *)(param_1 + 200 + lVar17 * 0x18);
  auVar8._8_4_ = SUB84(dVar11,0);
  auVar8._0_8_ = dVar35;
  auVar8._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  auVar42 = blendpd(auVar41,auVar8,1);
  dVar11 = dVar39 * 0.0 + dVar35 * 0.0 + dVar32 * dVar20;
  dVar31 = dVar39 * 0.0 + dVar35 * dVar36 + dVar32 * 0.0;
  dVar35 = dVar26 * dVar39 + dVar35 * 0.0 + dVar32 * 0.0;
  dVar22 = dVar19 * 0.0 + dVar29 * 0.0 + dVar12 * dVar20;
  dVar27 = dVar19 * 0.0 + dVar36 * dVar29 + dVar12 * 0.0;
  dVar10 = dVar26 * dVar19 + dVar29 * 0.0 + dVar12 * 0.0;
  dVar9 = dVar40 * 0.0 + dVar13 * 0.0 + dVar20 * dVar44;
  dVar36 = dVar40 * 0.0 + dVar13 * dVar36 + dVar44 * 0.0;
  dVar30 = auVar42._0_8_;
  dVar37 = auVar42._8_8_;
  dVar26 = dVar26 * dVar40 +
           dVar13 * ___xmm_00000000000000000000000000000000 +
           dVar44 * ___xmm_00000000000000000000000000000000;
  dVar20 = dVar10 * dVar19 + dVar37 * dVar27 + dVar22 * dVar12;
  *pdVar4 = dVar35 * dVar39 + dVar30 * dVar31 + dVar11 * dVar32;
  pdVar4[1] = dVar35 * dVar19 + dVar37 * dVar31 + dVar11 * dVar12;
  pdVar4[2] = dVar35 * dVar40 + dVar31 * dVar13 + dVar44 * dVar11;
  pdVar4[3] = 0.0;
  auVar6._8_4_ = SUB84(dVar20,0);
  auVar6._0_8_ = dVar10 * dVar39 + dVar30 * dVar27 + dVar22 * dVar32;
  auVar6._12_4_ = (int)((ulonglong)dVar20 >> 0x20);
  *(undefined1 (*) [16])(pdVar4 + 4) = auVar6;
  pdVar4[6] = dVar10 * dVar40 + dVar27 * dVar13 + dVar44 * dVar22;
  pdVar4[7] = 0.0;
  pdVar4[8] = dVar26 * dVar39 + dVar30 * dVar36 + dVar9 * dVar32;
  pdVar4[9] = dVar26 * dVar19 + dVar37 * dVar36 + dVar9 * dVar12;
  pdVar4[10] = dVar26 * dVar40 + dVar36 * dVar13 + dVar44 * dVar9;
  pdVar4[0xd] = 0.0;
  pdVar4[0xe] = 0.0;
  pdVar4[0xb] = 0.0;
  pdVar4[0xc] = 0.0;
  pdVar4[0xf] = 1.0;
  *param_11 = *param_11 + dVar23;
  dVar23 = (double)(int)(-(uint)(param_2 != 0) | 1) * dVar23;
  dVar19 = *(double *)(param_1 + 0x440) + param_8[1] * dVar23;
  dVar20 = param_8[2];
  auVar7._8_4_ = SUB84(dVar19,0);
  auVar7._0_8_ = *(double *)(param_1 + 0x438) + *param_8 * dVar23;
  auVar7._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x438) = auVar7;
  *(double *)(param_1 + 0x448) = dVar23 * dVar20 + *(double *)(param_1 + 0x448);
  return;
}

// ApplyRotationConstraintSoftDD___un_3C_s_5B_unFPBDJointSolver_5D__3E_CundCundCundCunbREFs_5B__c_unFVector_5D_CundCundREFund_sse4 @ 140a06330

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyRotationConstraintSoftDD___un_3C_s_5B_unFPBDJointSolver_5D__3E_CundCundCundCunbREFs_5B__c_unFVector_5D_CundCundREFund_sse4
               (double *param_1,double param_2,double param_3,double param_4,byte param_5,
               undefined1 (*param_6) [16],double param_7,double param_8,double *param_9,
               undefined1 (*param_10) [16])

{
  double dVar1;
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
  double dVar17;
  double dVar18;
  undefined4 in_R9D;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar33;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar45;
  double dVar46;
  double dVar47;
  undefined1 auVar44 [16];
  double dVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar56;
  double dVar58;
  undefined1 auVar57 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  double dVar62;
  double dVar63;
  double dVar64;
  undefined1 auVar65 [16];
  double dVar66;
  undefined4 uVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  
  dVar26 = _UNK_15076c6f8;
  dVar27 = ___xmm_bff00000000000003ff0000000000000;
  dVar47 = _UNK_15076b868;
  dVar35 = ___xmm_3ff0000000000000bff0000000000000;
  dVar29 = _UNK_150689688;
  dVar36 = ___xmm_3ff00000000000003ff0000000000000;
  dVar28 = __real_3ff0000000000000;
  iVar19 = movmskps(in_R9D,*param_10);
  dVar1 = *(double *)*param_6;
  dVar22 = *(double *)(*param_6 + 8);
  dVar40 = *(double *)param_6[1];
  uVar73 = SUB84(dVar40,0);
  uVar74 = (undefined4)((ulonglong)dVar40 >> 0x20);
  auVar50 = *param_6;
  dVar63 = auVar50._0_8_;
  uVar69 = auVar50._0_4_;
  uVar70 = auVar50._4_4_;
  dVar25 = auVar50._8_8_;
  uVar71 = auVar50._8_4_;
  uVar72 = auVar50._12_4_;
  dVar62 = (param_1[0x51] * dVar40 + param_1[0x4d] * dVar22 + param_1[0x49] * dVar1) * dVar25 +
           (param_1[0x50] * dVar40 + param_1[0x4c] * dVar22 + param_1[0x48] * dVar1) * dVar63 +
           (param_1[0x52] * dVar40 + param_1[0x4e] * dVar22 + param_1[0x4a] * dVar1) * dVar40;
  dVar22 = (param_1[0x61] * dVar40 + param_1[0x5d] * dVar22 + param_1[0x59] * dVar1) * dVar25 +
           (param_1[0x60] * dVar40 + param_1[0x5c] * dVar22 + param_1[0x58] * dVar1) * dVar63 +
           (param_1[0x62] * dVar40 + dVar22 * param_1[0x5e] + dVar1 * param_1[0x5a]) * dVar40;
  dVar1 = dVar62 + dVar22;
  dVar23 = 0.0;
  if (iVar19 == 0xf) {
    if (__real_3f1a36e2eb1c432d < param_4) {
      dVar42 = param_1[0x7c];
      dVar34 = param_1[0x7d];
      dVar46 = param_1[0x7e];
      dVar48 = param_1[0x7f];
      uVar20 = -(ulonglong)
                (0.0 <= dVar34 * param_1[0x27] + dVar48 * param_1[0x29] +
                        dVar42 * param_1[0x26] + dVar46 * param_1[0x28]);
      dVar23 = (double)(~uVar20 & __real_bff0000000000000 |
                       uVar20 & (ulonglong)__real_3ff0000000000000);
      dVar17 = param_1[0x26] * dVar23 - dVar42;
      dVar18 = param_1[0x27] * dVar23 - dVar34;
      dVar39 = param_1[0x28] * dVar23 - dVar46;
      dVar45 = param_1[0x29] * dVar23 - dVar48;
      dVar46 = dVar46 * ___xmm_3ff0000000000000bff0000000000000;
      dVar48 = dVar48 * _UNK_15076b868;
      dVar56 = (dVar46 * dVar18 +
               (dVar48 * dVar17 * ___xmm_bff00000000000003ff0000000000000 - dVar42 * dVar45)) -
               dVar34 * dVar39 * ___xmm_3ff0000000000000bff0000000000000;
      dVar58 = (dVar48 * dVar18 + (dVar46 * dVar17 * _UNK_15076c6f8 - dVar34 * dVar45)) -
               dVar42 * dVar39 * _UNK_15076b868;
      dVar43 = param_1[0x82];
      dVar24 = param_1[0x83];
      dVar42 = param_1[0x80];
      dVar33 = param_1[0x81];
      uVar20 = -(ulonglong)
                (0.0 <= dVar33 * param_1[0x2b] + dVar24 * param_1[0x2d] +
                        dVar42 * param_1[0x2a] + dVar43 * param_1[0x2c]);
      dVar23 = (double)(~uVar20 & __real_bff0000000000000 |
                       (ulonglong)__real_3ff0000000000000 & uVar20);
      dVar34 = param_1[0x2a] * dVar23 - dVar42;
      dVar41 = param_1[0x2b] * dVar23 - dVar33;
      dVar64 = param_1[0x2c] * dVar23 - dVar43;
      dVar66 = param_1[0x2d] * dVar23 - dVar24;
      dVar43 = dVar43 * ___xmm_3ff0000000000000bff0000000000000;
      dVar24 = dVar24 * _UNK_15076b868;
      dVar23 = (dVar43 * dVar41 +
               (dVar24 * dVar34 * ___xmm_bff00000000000003ff0000000000000 - dVar42 * dVar66)) -
               dVar33 * dVar64 * ___xmm_3ff0000000000000bff0000000000000;
      dVar42 = (dVar24 * dVar41 + (dVar43 * dVar34 * _UNK_15076c6f8 - dVar33 * dVar66)) -
               dVar42 * dVar64 * _UNK_15076b868;
      dVar41 = dVar24 * dVar64 + dVar41 * param_1[0x80] + (dVar66 * dVar43 - dVar34 * param_1[0x81])
      ;
      dVar34 = dVar48 * dVar39 + dVar18 * param_1[0x7c] + (dVar45 * dVar46 - dVar17 * param_1[0x7d])
      ;
      dVar23 = dVar25 * ((dVar58 + dVar58) - (dVar42 + dVar42)) +
               dVar63 * ((dVar56 + dVar56) - (dVar23 + dVar23)) +
               ((dVar34 + dVar34) - (dVar41 + dVar41)) * dVar40 + param_8 * param_2;
      uVar73 = (undefined4)*(undefined8 *)param_6[1];
      uVar74 = (undefined4)((ulonglong)*(undefined8 *)param_6[1] >> 0x20);
      uVar69 = *(undefined4 *)*param_6;
      uVar70 = *(undefined4 *)(*param_6 + 4);
      uVar71 = *(undefined4 *)(*param_6 + 8);
      uVar72 = *(undefined4 *)(*param_6 + 0xc);
    }
    dVar40 = __real_3ff0000000000000;
    if ((param_5 & 1) != 0) {
      dVar40 = __real_3ff0000000000000 / dVar1;
    }
    dVar63 = param_3 * dVar40 * param_2 * param_2;
    param_2 = param_4 * dVar40 * param_2;
    dVar1 = ((dVar63 * param_7 - param_2 * dVar23) - *param_9) *
            (__real_3ff0000000000000 / (dVar1 * (param_2 + dVar63) + __real_3ff0000000000000)) *
            param_1[0x99];
    if (0.0 < param_1[0x1e]) {
      dVar62 = dVar62 * dVar1;
      dVar41 = dVar62 * (double)CONCAT44(uVar70,uVar69);
      dVar46 = dVar62 * (double)CONCAT44(uVar72,uVar71);
      dVar25 = param_1[0x36];
      dVar23 = param_1[0x37];
      dVar42 = param_1[0x34];
      dVar34 = param_1[0x35];
      dVar62 = dVar62 * (double)CONCAT44(uVar74,uVar73);
      dVar40 = (param_1[0x35] * dVar62 * ___xmm_3ff0000000000000bff0000000000000 +
               dVar46 * dVar25 +
               dVar41 * param_1[0x37] * ___xmm_bff00000000000003ff0000000000000 + dVar42 * 0.0) *
               ___xmm_3fe00000000000003fe0000000000000 + dVar42;
      dVar63 = (param_1[0x34] * dVar62 * _UNK_15076b868 +
               dVar46 * dVar23 + dVar41 * param_1[0x36] * _UNK_15076c6f8 + dVar34 * 0.0) *
               _UNK_150689678 + dVar34;
      dVar25 = (param_1[0x37] * dVar62 * ___xmm_bff00000000000003ff0000000000000 +
               ((dVar41 * param_1[0x35] * ___xmm_bff00000000000003ff0000000000000 + dVar25 * 0.0) -
               dVar46 * dVar42)) * ___xmm_3fe00000000000003fe0000000000000 + dVar25;
      dVar23 = (param_1[0x36] * dVar62 * _UNK_15076c6f8 +
               ((dVar41 * param_1[0x34] * _UNK_15076c6f8 + dVar23 * 0.0) - dVar46 * dVar34)) *
               _UNK_150689678 + dVar23;
      dVar62 = dVar63 * dVar63 + dVar23 * dVar23 + dVar40 * dVar40 + dVar25 * dVar25;
      uVar20 = ~-(ulonglong)(dVar62 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
      dVar42 = __real_3ff0000000000000 / SQRT(dVar62);
      dVar40 = (double)((ulonglong)(dVar40 * dVar42) & uVar20);
      dVar63 = (double)((ulonglong)(dVar63 * dVar42) & uVar20);
      uVar67 = SUB84(dVar63,0);
      uVar68 = (undefined4)((ulonglong)dVar63 >> 0x20);
      dVar25 = (double)(((ulonglong)(dVar25 * dVar42) ^ ___xmm_3ff00000000000000000000000000000) &
                       uVar20);
      dVar62 = (double)(___xmm_3ff00000000000000000000000000000 ^ (ulonglong)dVar25);
      dVar23 = (double)(_UNK_15061cbc8 ^ ((ulonglong)(dVar23 * dVar42) ^ _UNK_15061cbc8) & uVar20);
      uVar75 = (undefined4)((ulonglong)dVar23 >> 0x20);
      auVar50._8_4_ = uVar67;
      auVar50._0_8_ = dVar40;
      auVar50._12_4_ = uVar68;
      *(undefined1 (*) [16])(param_1 + 0x34) = auVar50;
      auVar15._8_4_ = SUB84(dVar23,0);
      auVar15._0_8_ = dVar62;
      auVar15._12_4_ = uVar75;
      *(undefined1 (*) [16])(param_1 + 0x36) = auVar15;
      auVar8._8_4_ = uVar67;
      auVar8._0_8_ = dVar40;
      auVar8._12_4_ = uVar68;
      auVar53._8_8_ = dVar63;
      auVar53._0_8_ = dVar40;
      auVar16._8_4_ = SUB84(dVar23,0);
      auVar16._0_8_ = dVar62;
      auVar16._12_4_ = uVar75;
      auVar50 = blendpd(auVar53,auVar16,2);
      dVar41 = param_1[4] * dVar62 - param_1[6] * auVar50._0_8_;
      dVar42 = param_1[5] * dVar40 - auVar8._8_8_ * param_1[4];
      dVar34 = param_1[6] * dVar63 - dVar62 * param_1[5];
      dVar41 = dVar41 + dVar41;
      dVar42 = dVar42 + dVar42;
      dVar34 = dVar34 + dVar34;
      param_1[0x20] =
           param_1[0x2e] + (dVar42 * dVar63 - dVar41 * dVar25) + dVar34 * dVar23 + param_1[4];
      param_1[0x21] =
           param_1[0x2f] + (dVar34 * dVar25 - dVar42 * dVar40) + dVar41 * dVar23 + param_1[5];
      param_1[0x22] =
           dVar23 * dVar42 + param_1[6] + (dVar41 * dVar40 - dVar34 * dVar63) + param_1[0x30];
      auVar31._8_4_ = SUB84(dVar40,0);
      auVar31._0_8_ = dVar40;
      auVar31._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
      dVar42 = auVar31._8_8_;
      auVar38._8_4_ = uVar67;
      auVar38._0_8_ = dVar63;
      auVar38._12_4_ = uVar68;
      auVar61._8_4_ = SUB84(dVar62,0);
      auVar61._0_8_ = dVar62;
      auVar61._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
      param_1[0x26] =
           param_1[1] * dVar62 * dVar35 +
           param_1[2] * dVar63 + param_1[3] * dVar40 * dVar27 + *param_1 * dVar23;
      param_1[0x27] =
           *param_1 * auVar61._8_8_ * dVar47 +
           param_1[3] * auVar38._8_8_ + param_1[2] * dVar42 * dVar26 + param_1[1] * dVar23;
      param_1[0x28] =
           param_1[3] * dVar62 * dVar27 +
           ((param_1[1] * dVar40 * dVar27 + param_1[2] * dVar23) - *param_1 * dVar63);
      param_1[0x29] =
           param_1[2] * auVar61._8_8_ * dVar26 +
           ((*param_1 * dVar42 * dVar26 + param_1[3] * dVar23) - param_1[1] * auVar38._8_8_);
      dVar47 = dVar63 + dVar63;
      dVar27 = dVar62 + dVar62;
      dVar25 = dVar40 * (dVar40 + dVar40);
      dVar42 = dVar42 * dVar47;
      dVar34 = (dVar40 + dVar40) * dVar23;
      dVar35 = dVar23 * dVar27 + dVar42;
      dVar64 = dVar34 + dVar63 * dVar27;
      dVar66 = dVar47 * dVar23 + dVar27 * dVar40;
      dVar34 = dVar63 * dVar27 - dVar34;
      dVar41 = dVar27 * dVar40 - dVar47 * dVar23;
      auVar32._0_8_ = dVar42 - dVar23 * dVar27;
      auVar32._8_8_ = dVar42 - dVar23 * (dVar23 + dVar23);
      dVar36 = dVar36 - (dVar27 * dVar62 + dVar63 * dVar47);
      dVar29 = dVar29 - (dVar27 * dVar62 + dVar25);
      dVar28 = dVar28 - (dVar63 * dVar47 + dVar25);
      auVar44._8_8_ = dVar29;
      auVar44._0_8_ = dVar36;
      dVar40 = param_1[0x18];
      dVar63 = param_1[0x1a];
      dVar25 = param_1[0x19];
      auVar50 = blendpd(auVar44,auVar32,1);
      dVar62 = auVar50._0_8_;
      dVar42 = auVar50._8_8_;
      dVar27 = dVar66 * 0.0 + auVar32._0_8_ * 0.0 + dVar36 * dVar40;
      dVar26 = dVar66 * 0.0 + auVar32._0_8_ * dVar25 + dVar36 * 0.0;
      dVar47 = dVar63 * dVar66 +
               auVar32._0_8_ * 0.0 + dVar36 * ___xmm_00000000000000000000000000000000;
      dVar46 = dVar34 * __real_0000000000000000 + dVar29 * 0.0 + dVar35 * dVar40;
      dVar48 = dVar34 * __real_0000000000000000 + dVar25 * dVar29 + dVar35 * 0.0;
      dVar29 = dVar63 * dVar34 + dVar29 * 0.0 + dVar35 * 0.0;
      dVar23 = dVar28 * __real_0000000000000000 + dVar64 * 0.0 + dVar40 * dVar41;
      dVar25 = dVar28 * __real_0000000000000000 + dVar64 * dVar25 + dVar41 * 0.0;
      dVar40 = dVar63 * dVar28 + dVar64 * ___xmm_00000000000000000000000000000000 + dVar41 * 0.0;
      param_1[0x48] = dVar47 * dVar66 + dVar62 * dVar26 + dVar27 * dVar36;
      param_1[0x49] = dVar47 * dVar34 + dVar42 * dVar26 + dVar27 * dVar35;
      param_1[0x4a] = dVar47 * dVar28 + dVar26 * dVar64 + dVar41 * dVar27;
      param_1[0x4b] = 0.0;
      param_1[0x4c] = dVar29 * dVar66 + dVar62 * dVar48 + dVar46 * dVar36;
      param_1[0x4d] = dVar29 * dVar34 + dVar42 * dVar48 + dVar46 * dVar35;
      param_1[0x4e] = dVar29 * dVar28 + dVar48 * dVar64 + dVar41 * dVar46;
      param_1[0x4f] = 0.0;
      param_1[0x50] = dVar40 * dVar66 + dVar62 * dVar25 + dVar23 * dVar36;
      param_1[0x51] = dVar40 * dVar34 + dVar42 * dVar25 + dVar23 * dVar35;
      param_1[0x52] = dVar40 * dVar28 + dVar25 * dVar64 + dVar41 * dVar23;
      param_1[0x55] = 0.0;
      param_1[0x56] = 0.0;
      param_1[0x53] = 0.0;
      param_1[0x54] = 0.0;
      param_1[0x57] = 1.0;
    }
    dVar35 = _UNK_15076c6f8;
    dVar29 = ___xmm_bff00000000000003ff0000000000000;
    dVar36 = _UNK_15076b868;
    dVar28 = ___xmm_3ff0000000000000bff0000000000000;
    dVar25 = _UNK_150689688;
    dVar63 = ___xmm_3ff00000000000003ff0000000000000;
    dVar40 = __real_3ff0000000000000;
    if (param_1[0x1f] <= 0.0) goto LAB_140a08576;
    dVar26 = (double)((ulonglong)dVar22 ^ __xmm_80000000000000008000000000000000) * dVar1;
    dVar23 = (double)CONCAT44(uVar74,uVar73) * dVar26;
    dVar27 = (double)CONCAT44(uVar70,uVar69) * dVar26;
    dVar26 = (double)CONCAT44(uVar72,uVar71) * dVar26;
    dVar22 = param_1[0x3a];
    dVar47 = param_1[0x3b];
    dVar62 = param_1[0x38];
    dVar42 = param_1[0x39];
    dVar34 = (param_1[0x39] * dVar23 * ___xmm_3ff0000000000000bff0000000000000 +
             dVar26 * dVar22 +
             dVar27 * param_1[0x3b] * ___xmm_bff00000000000003ff0000000000000 + dVar62 * 0.0) *
             ___xmm_3fe00000000000003fe0000000000000 + dVar62;
    dVar41 = (param_1[0x38] * dVar23 * _UNK_15076b868 +
             dVar26 * dVar47 + dVar27 * param_1[0x3a] * _UNK_15076c6f8 + dVar42 * 0.0) *
             _UNK_150689678 + dVar42;
    dVar22 = (param_1[0x3b] * dVar23 * ___xmm_bff00000000000003ff0000000000000 +
             ((dVar27 * param_1[0x39] * ___xmm_bff00000000000003ff0000000000000 + dVar22 * 0.0) -
             dVar26 * dVar62)) * ___xmm_3fe00000000000003fe0000000000000 + dVar22;
    dVar47 = (param_1[0x3a] * dVar23 * _UNK_15076c6f8 +
             ((dVar27 * param_1[0x38] * _UNK_15076c6f8 + dVar47 * 0.0) - dVar26 * dVar42)) *
             _UNK_150689678 + dVar47;
    dVar27 = dVar41 * dVar41 + dVar47 * dVar47 + dVar34 * dVar34 + dVar22 * dVar22;
    uVar20 = ~-(ulonglong)(dVar27 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
    dVar26 = __real_3ff0000000000000 / SQRT(dVar27);
    dVar42 = (double)((ulonglong)(dVar34 * dVar26) & uVar20);
    dVar34 = (double)((ulonglong)(dVar41 * dVar26) & uVar20);
    dVar22 = (double)(((ulonglong)(dVar22 * dVar26) ^ ___xmm_3ff00000000000000000000000000000) &
                     uVar20);
    dVar27 = (double)(___xmm_3ff00000000000000000000000000000 ^ (ulonglong)dVar22);
    dVar26 = (double)(_UNK_15061cbc8 ^ ((ulonglong)(dVar47 * dVar26) ^ _UNK_15061cbc8) & uVar20);
    uVar69 = (undefined4)((ulonglong)dVar26 >> 0x20);
    param_1[0x38] = dVar42;
    param_1[0x39] = dVar34;
    auVar9._8_4_ = SUB84(dVar26,0);
    auVar9._0_8_ = dVar27;
    auVar9._12_4_ = uVar69;
    *(undefined1 (*) [16])(param_1 + 0x3a) = auVar9;
    auVar54._8_8_ = dVar34;
    auVar54._0_8_ = dVar42;
    auVar10._8_4_ = SUB84(dVar26,0);
    auVar10._0_8_ = dVar27;
    auVar10._12_4_ = uVar69;
    auVar50 = blendpd(auVar54,auVar10,2);
    dVar47 = param_1[0x10] * dVar27 - param_1[0x12] * auVar50._0_8_;
    dVar23 = param_1[0x11] * dVar42 - dVar34 * param_1[0x10];
    dVar62 = param_1[0x12] * dVar34 - dVar27 * param_1[0x11];
    dVar47 = dVar47 + dVar47;
    dVar23 = dVar23 + dVar23;
    dVar62 = dVar62 + dVar62;
    param_1[0x23] =
         param_1[0x31] + (dVar23 * dVar34 - dVar47 * dVar22) + dVar62 * dVar26 + param_1[0x10];
    param_1[0x24] =
         param_1[0x32] + (dVar62 * dVar22 - dVar23 * dVar42) + dVar47 * dVar26 + param_1[0x11];
    param_1[0x25] =
         dVar26 * dVar23 + param_1[0x12] + (dVar47 * dVar42 - dVar62 * dVar34) + param_1[0x33];
    auVar55._8_4_ = SUB84(dVar27,0);
    auVar55._0_8_ = dVar27;
    auVar55._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
    param_1[0x2a] =
         param_1[0xd] * dVar27 * dVar28 +
         param_1[0xe] * dVar34 + param_1[0xf] * dVar42 * dVar29 + param_1[0xc] * dVar26;
    param_1[0x2b] =
         param_1[0xc] * auVar55._8_8_ * dVar36 +
         param_1[0xf] * dVar34 + param_1[0xe] * dVar42 * dVar35 + param_1[0xd] * dVar26;
    param_1[0x2c] =
         param_1[0xf] * dVar27 * dVar29 +
         ((param_1[0xd] * dVar42 * dVar29 + param_1[0xe] * dVar26) - param_1[0xc] * dVar34);
    param_1[0x2d] =
         param_1[0xe] * auVar55._8_8_ * dVar35 +
         ((param_1[0xc] * dVar42 * dVar35 + param_1[0xf] * dVar26) - param_1[0xd] * dVar34);
    dVar28 = dVar34 + dVar34;
    dVar36 = dVar27 + dVar27;
    dVar22 = dVar42 * (dVar42 + dVar42);
    dVar23 = dVar42 * dVar28;
    dVar29 = (dVar42 + dVar42) * dVar26;
    dVar62 = dVar26 * dVar36 + dVar23;
    dVar46 = dVar29 + dVar34 * dVar36;
    dVar48 = dVar28 * dVar26 + dVar36 * dVar42;
    dVar29 = dVar34 * dVar36 - dVar29;
    dVar35 = dVar36 * dVar42 - dVar28 * dVar26;
    dVar47 = dVar23 - dVar26 * dVar36;
    dVar23 = dVar23 - dVar26 * (dVar26 + dVar26);
    dVar63 = dVar63 - (dVar36 * dVar27 + dVar34 * dVar28);
    dVar25 = dVar25 - (dVar36 * dVar27 + dVar22);
    dVar40 = dVar40 - (dVar34 * dVar28 + dVar22);
    auVar57._8_8_ = dVar25;
    auVar57._0_8_ = dVar63;
    dVar22 = param_1[0x1b];
    dVar28 = param_1[0x1d];
    dVar36 = param_1[0x1c];
    auVar11._8_4_ = SUB84(dVar23,0);
    auVar11._0_8_ = dVar47;
    auVar11._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
    auVar50 = blendpd(auVar57,auVar11,1);
    dVar26 = dVar48 * 0.0 + dVar47 * 0.0 + dVar63 * dVar22;
    dVar23 = dVar48 * 0.0 + dVar47 * dVar36 + dVar63 * 0.0;
    dVar47 = dVar28 * dVar48 + dVar47 * 0.0 + dVar63 * ___xmm_00000000000000000000000000000000;
    dVar42 = dVar29 * 0.0 + dVar25 * 0.0 + dVar62 * dVar22;
    dVar34 = dVar29 * 0.0 + dVar36 * dVar25 + dVar62 * 0.0;
    dVar27 = dVar28 * dVar29 + dVar25 * 0.0 + dVar62 * 0.0;
    dVar22 = dVar40 * 0.0 + dVar46 * 0.0 + dVar22 * dVar35;
    dVar25 = dVar40 * 0.0 + dVar46 * dVar36 + dVar35 * 0.0;
    dVar36 = auVar50._0_8_;
    dVar41 = auVar50._8_8_;
    dVar28 = dVar28 * dVar40 + dVar46 * ___xmm_00000000000000000000000000000000 + dVar35 * 0.0;
    param_1[0x58] = dVar47 * dVar48 + dVar36 * dVar23 + dVar26 * dVar63;
    param_1[0x59] = dVar47 * dVar29 + dVar41 * dVar23 + dVar26 * dVar62;
    param_1[0x5a] = dVar47 * dVar40 + dVar23 * dVar46 + dVar35 * dVar26;
    param_1[0x5b] = 0.0;
    param_1[0x5c] = dVar27 * dVar48 + dVar36 * dVar34 + dVar42 * dVar63;
    param_1[0x5d] = dVar27 * dVar29 + dVar41 * dVar34 + dVar42 * dVar62;
    param_1[0x5e] = dVar27 * dVar40 + dVar34 * dVar46 + dVar35 * dVar42;
    param_1[0x5f] = 0.0;
    param_1[0x60] = dVar28 * dVar48 + dVar36 * dVar25 + dVar22 * dVar63;
    param_1[0x61] = dVar28 * dVar29 + dVar41 * dVar25 + dVar22 * dVar62;
    param_1[0x62] = dVar28 * dVar40 + dVar25 * dVar46 + dVar35 * dVar22;
    param_1[0x65] = 0.0;
    param_1[0x66] = 0.0;
    param_1[99] = 0.0;
    param_1[100] = 0.0;
  }
  else {
    if (__real_3f1a36e2eb1c432d < param_4) {
      dVar42 = param_1[0x7c];
      dVar34 = param_1[0x7d];
      dVar46 = param_1[0x7e];
      dVar48 = param_1[0x7f];
      uVar20 = -(ulonglong)
                (0.0 <= dVar34 * param_1[0x27] + dVar48 * param_1[0x29] +
                        dVar42 * param_1[0x26] + dVar46 * param_1[0x28]);
      dVar23 = (double)(~uVar20 & __real_bff0000000000000 |
                       uVar20 & (ulonglong)__real_3ff0000000000000);
      dVar17 = param_1[0x26] * dVar23 - dVar42;
      dVar18 = param_1[0x27] * dVar23 - dVar34;
      dVar39 = param_1[0x28] * dVar23 - dVar46;
      dVar45 = param_1[0x29] * dVar23 - dVar48;
      dVar46 = dVar46 * ___xmm_3ff0000000000000bff0000000000000;
      dVar48 = dVar48 * _UNK_15076b868;
      dVar56 = (dVar46 * dVar18 +
               (dVar48 * dVar17 * ___xmm_bff00000000000003ff0000000000000 - dVar42 * dVar45)) -
               dVar34 * dVar39 * ___xmm_3ff0000000000000bff0000000000000;
      dVar58 = (dVar48 * dVar18 + (dVar46 * dVar17 * _UNK_15076c6f8 - dVar34 * dVar45)) -
               dVar42 * dVar39 * _UNK_15076b868;
      dVar64 = param_1[0x82];
      dVar66 = param_1[0x83];
      dVar42 = param_1[0x80];
      dVar43 = param_1[0x81];
      uVar20 = -(ulonglong)
                (0.0 <= dVar43 * param_1[0x2b] + dVar66 * param_1[0x2d] +
                        dVar42 * param_1[0x2a] + dVar64 * param_1[0x2c]);
      dVar23 = (double)(~uVar20 & __real_bff0000000000000 |
                       (ulonglong)__real_3ff0000000000000 & uVar20);
      dVar24 = param_1[0x2a] * dVar23 - dVar42;
      dVar33 = param_1[0x2b] * dVar23 - dVar43;
      dVar34 = param_1[0x2c] * dVar23 - dVar64;
      dVar41 = param_1[0x2d] * dVar23 - dVar66;
      dVar64 = dVar64 * ___xmm_3ff0000000000000bff0000000000000;
      dVar66 = dVar66 * _UNK_15076b868;
      dVar23 = (dVar64 * dVar33 +
               (dVar66 * dVar24 * ___xmm_bff00000000000003ff0000000000000 - dVar42 * dVar41)) -
               dVar43 * dVar34 * ___xmm_3ff0000000000000bff0000000000000;
      dVar42 = (dVar66 * dVar33 + (dVar64 * dVar24 * _UNK_15076c6f8 - dVar43 * dVar41)) -
               dVar42 * dVar34 * _UNK_15076b868;
      dVar41 = dVar66 * dVar34 + dVar33 * param_1[0x80] + (dVar41 * dVar64 - dVar24 * param_1[0x81])
      ;
      dVar34 = dVar48 * dVar39 + dVar18 * param_1[0x7c] + (dVar45 * dVar46 - dVar17 * param_1[0x7d])
      ;
      dVar23 = dVar25 * ((dVar58 + dVar58) - (dVar42 + dVar42)) +
               dVar63 * ((dVar56 + dVar56) - (dVar23 + dVar23)) +
               ((dVar34 + dVar34) - (dVar41 + dVar41)) * dVar40 + param_8 * param_2;
      uVar73 = (undefined4)*(undefined8 *)param_6[1];
      uVar74 = (undefined4)((ulonglong)*(undefined8 *)param_6[1] >> 0x20);
      uVar69 = *(undefined4 *)*param_6;
      uVar70 = *(undefined4 *)(*param_6 + 4);
      uVar71 = *(undefined4 *)(*param_6 + 8);
      uVar72 = *(undefined4 *)(*param_6 + 0xc);
    }
    dVar40 = __real_3ff0000000000000;
    if ((param_5 & 1) != 0) {
      dVar40 = __real_3ff0000000000000 / dVar1;
    }
    dVar63 = param_3 * dVar40 * param_2 * param_2;
    param_2 = param_4 * dVar40 * param_2;
    dVar1 = ((dVar63 * param_7 - param_2 * dVar23) - *param_9) *
            (__real_3ff0000000000000 / (dVar1 * (param_2 + dVar63) + __real_3ff0000000000000)) *
            param_1[0x99];
    if (0.0 < param_1[0x1e]) {
      dVar62 = dVar62 * dVar1;
      dVar41 = dVar62 * (double)CONCAT44(uVar70,uVar69);
      dVar46 = dVar62 * (double)CONCAT44(uVar72,uVar71);
      dVar25 = param_1[0x36];
      dVar23 = param_1[0x37];
      dVar42 = param_1[0x34];
      dVar34 = param_1[0x35];
      dVar62 = dVar62 * (double)CONCAT44(uVar74,uVar73);
      dVar40 = (param_1[0x35] * dVar62 * ___xmm_3ff0000000000000bff0000000000000 +
               dVar46 * dVar25 +
               dVar41 * param_1[0x37] * ___xmm_bff00000000000003ff0000000000000 + dVar42 * 0.0) *
               ___xmm_3fe00000000000003fe0000000000000 + dVar42;
      dVar63 = (param_1[0x34] * dVar62 * _UNK_15076b868 +
               dVar46 * dVar23 + dVar41 * param_1[0x36] * _UNK_15076c6f8 + dVar34 * 0.0) *
               _UNK_150689678 + dVar34;
      dVar25 = (param_1[0x37] * dVar62 * ___xmm_bff00000000000003ff0000000000000 +
               ((dVar41 * param_1[0x35] * ___xmm_bff00000000000003ff0000000000000 + dVar25 * 0.0) -
               dVar46 * dVar42)) * ___xmm_3fe00000000000003fe0000000000000 + dVar25;
      dVar23 = (param_1[0x36] * dVar62 * _UNK_15076c6f8 +
               ((dVar41 * param_1[0x34] * _UNK_15076c6f8 + dVar23 * 0.0) - dVar46 * dVar34)) *
               _UNK_150689678 + dVar23;
      dVar62 = dVar63 * dVar63 + dVar23 * dVar23 + dVar40 * dVar40 + dVar25 * dVar25;
      uVar20 = ~-(ulonglong)(dVar62 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
      dVar42 = __real_3ff0000000000000 / SQRT(dVar62);
      dVar40 = (double)((ulonglong)(dVar40 * dVar42) & uVar20);
      dVar63 = (double)((ulonglong)(dVar63 * dVar42) & uVar20);
      uVar67 = SUB84(dVar63,0);
      uVar68 = (undefined4)((ulonglong)dVar63 >> 0x20);
      dVar25 = (double)(((ulonglong)(dVar25 * dVar42) ^ ___xmm_3ff00000000000000000000000000000) &
                       uVar20);
      dVar62 = (double)(___xmm_3ff00000000000000000000000000000 ^ (ulonglong)dVar25);
      dVar42 = (double)(_UNK_15061cbc8 ^ ((ulonglong)(dVar23 * dVar42) ^ _UNK_15061cbc8) & uVar20);
      uVar75 = (undefined4)((ulonglong)dVar42 >> 0x20);
      auVar3._8_4_ = uVar67;
      auVar3._0_8_ = dVar40;
      auVar3._12_4_ = uVar68;
      *(undefined1 (*) [16])(param_1 + 0x34) = auVar3;
      auVar13._8_4_ = SUB84(dVar42,0);
      auVar13._0_8_ = dVar62;
      auVar13._12_4_ = uVar75;
      *(undefined1 (*) [16])(param_1 + 0x36) = auVar13;
      auVar4._8_4_ = uVar67;
      auVar4._0_8_ = dVar40;
      auVar4._12_4_ = uVar68;
      auVar49._8_8_ = dVar63;
      auVar49._0_8_ = dVar40;
      auVar14._8_4_ = SUB84(dVar42,0);
      auVar14._0_8_ = dVar62;
      auVar14._12_4_ = uVar75;
      auVar50 = blendpd(auVar49,auVar14,2);
      dVar23 = param_1[4] * dVar62 - param_1[6] * auVar50._0_8_;
      dVar34 = param_1[5] * dVar40 - auVar4._8_8_ * param_1[4];
      dVar41 = param_1[6] * dVar63 - dVar62 * param_1[5];
      dVar23 = dVar23 + dVar23;
      dVar34 = dVar34 + dVar34;
      dVar41 = dVar41 + dVar41;
      param_1[0x20] =
           param_1[0x2e] + (dVar34 * dVar63 - dVar23 * dVar25) + dVar41 * dVar42 + param_1[4];
      param_1[0x21] =
           param_1[0x2f] + (dVar41 * dVar25 - dVar34 * dVar40) + dVar23 * dVar42 + param_1[5];
      param_1[0x22] =
           dVar42 * dVar34 + param_1[6] + (dVar23 * dVar40 - dVar41 * dVar63) + param_1[0x30];
      auVar30._8_4_ = SUB84(dVar40,0);
      auVar30._0_8_ = dVar40;
      auVar30._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
      dVar23 = auVar30._8_8_;
      auVar37._8_4_ = uVar67;
      auVar37._0_8_ = dVar63;
      auVar37._12_4_ = uVar68;
      auVar59._8_4_ = SUB84(dVar62,0);
      auVar59._0_8_ = dVar62;
      auVar59._12_4_ = (int)((ulonglong)dVar62 >> 0x20);
      param_1[0x26] =
           param_1[1] * dVar62 * dVar35 +
           param_1[2] * dVar63 + param_1[3] * dVar40 * dVar27 + *param_1 * dVar42;
      param_1[0x27] =
           *param_1 * auVar59._8_8_ * dVar47 +
           param_1[3] * auVar37._8_8_ + param_1[2] * dVar23 * dVar26 + param_1[1] * dVar42;
      param_1[0x28] =
           param_1[3] * dVar62 * dVar27 +
           ((param_1[1] * dVar40 * dVar27 + param_1[2] * dVar42) - *param_1 * dVar63);
      param_1[0x29] =
           param_1[2] * auVar59._8_8_ * dVar26 +
           ((*param_1 * dVar23 * dVar26 + param_1[3] * dVar42) - param_1[1] * auVar37._8_8_);
      dVar46 = dVar63 + dVar63;
      dVar48 = dVar62 + dVar62;
      dVar25 = dVar40 * (dVar40 + dVar40);
      dVar23 = dVar23 * dVar46;
      dVar34 = (dVar40 + dVar40) * dVar42;
      dVar47 = dVar42 * dVar48 + dVar23;
      dVar27 = dVar34 + dVar63 * dVar48;
      dVar26 = dVar46 * dVar42 + dVar48 * dVar40;
      dVar34 = dVar63 * dVar48 - dVar34;
      dVar41 = dVar48 * dVar40 - dVar46 * dVar42;
      dVar35 = dVar23 - dVar42 * dVar48;
      dVar23 = dVar23 - dVar42 * (dVar42 + dVar42);
      auVar65._0_8_ = dVar36 - (dVar48 * dVar62 + dVar63 * dVar46);
      auVar65._8_8_ = dVar29 - (dVar48 * dVar62 + dVar25);
      dVar28 = dVar28 - (dVar63 * dVar46 + dVar25);
      dVar40 = param_1[0x18];
      dVar63 = param_1[0x1a];
      dVar25 = param_1[0x19];
      auVar12._8_4_ = SUB84(dVar23,0);
      auVar12._0_8_ = dVar35;
      auVar12._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
      auVar50 = blendpd(auVar65,auVar12,1);
      dVar23 = dVar26 * 0.0 + dVar35 * 0.0 + auVar65._0_8_ * dVar40;
      dVar62 = dVar26 * 0.0 + dVar35 * dVar25 + auVar65._0_8_ * 0.0;
      dVar36 = dVar63 * dVar26 +
               dVar35 * 0.0 + auVar65._0_8_ * ___xmm_00000000000000000000000000000000;
      dVar42 = dVar34 * __real_0000000000000000 + auVar65._8_8_ * 0.0 + dVar47 * dVar40;
      dVar46 = dVar34 * __real_0000000000000000 + dVar25 * auVar65._8_8_ + dVar47 * 0.0;
      dVar29 = dVar63 * dVar34 + auVar65._8_8_ * 0.0 + dVar47 * 0.0;
      dVar35 = dVar28 * __real_0000000000000000 + dVar27 * 0.0 + dVar40 * dVar41;
      dVar25 = dVar28 * __real_0000000000000000 + dVar27 * dVar25 + dVar41 * 0.0;
      dVar48 = auVar50._0_8_;
      dVar64 = auVar50._8_8_;
      dVar63 = dVar63 * dVar28 + dVar27 * 0.0 + dVar41 * 0.0;
      dVar40 = dVar36 * dVar34 + dVar64 * dVar62 + dVar23 * dVar47;
      auVar2._8_4_ = SUB84(dVar40,0);
      auVar2._0_8_ = dVar36 * dVar26 + dVar48 * dVar62 + dVar23 * auVar65._0_8_;
      auVar2._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0x48) = auVar2;
      param_1[0x4a] = dVar36 * dVar28 + dVar62 * dVar27 + dVar41 * dVar23;
      param_1[0x4b] = 0.0;
      param_1[0x4c] = dVar29 * dVar26 + dVar48 * dVar46 + dVar42 * auVar65._0_8_;
      param_1[0x4d] = dVar29 * dVar34 + dVar64 * dVar46 + dVar42 * dVar47;
      param_1[0x4e] = dVar29 * dVar28 + dVar46 * dVar27 + dVar41 * dVar42;
      param_1[0x4f] = 0.0;
      param_1[0x50] = dVar63 * dVar26 + dVar48 * dVar25 + dVar35 * auVar65._0_8_;
      param_1[0x51] = dVar63 * dVar34 + dVar64 * dVar25 + dVar35 * dVar47;
      param_1[0x52] = dVar63 * dVar28 + dVar25 * dVar27 + dVar41 * dVar35;
      param_1[0x55] = 0.0;
      param_1[0x56] = 0.0;
      param_1[0x53] = 0.0;
      param_1[0x54] = 0.0;
      param_1[0x57] = 1.0;
    }
    dVar35 = _UNK_15076c6f8;
    dVar29 = ___xmm_bff00000000000003ff0000000000000;
    dVar36 = _UNK_15076b868;
    dVar28 = ___xmm_3ff0000000000000bff0000000000000;
    dVar25 = _UNK_150689688;
    dVar63 = ___xmm_3ff00000000000003ff0000000000000;
    dVar40 = __real_3ff0000000000000;
    if (param_1[0x1f] <= 0.0) goto LAB_140a08576;
    dVar26 = (double)((ulonglong)dVar22 ^ __xmm_80000000000000008000000000000000) * dVar1;
    dVar23 = (double)CONCAT44(uVar74,uVar73) * dVar26;
    dVar27 = (double)CONCAT44(uVar70,uVar69) * dVar26;
    dVar26 = (double)CONCAT44(uVar72,uVar71) * dVar26;
    dVar22 = param_1[0x3a];
    dVar47 = param_1[0x3b];
    dVar62 = param_1[0x38];
    dVar42 = param_1[0x39];
    dVar34 = (param_1[0x39] * dVar23 * ___xmm_3ff0000000000000bff0000000000000 +
             dVar26 * dVar22 +
             dVar27 * param_1[0x3b] * ___xmm_bff00000000000003ff0000000000000 + dVar62 * 0.0) *
             ___xmm_3fe00000000000003fe0000000000000 + dVar62;
    dVar41 = (param_1[0x38] * dVar23 * _UNK_15076b868 +
             dVar26 * dVar47 + dVar27 * param_1[0x3a] * _UNK_15076c6f8 + dVar42 * 0.0) *
             _UNK_150689678 + dVar42;
    dVar22 = (param_1[0x3b] * dVar23 * ___xmm_bff00000000000003ff0000000000000 +
             ((dVar27 * param_1[0x39] * ___xmm_bff00000000000003ff0000000000000 + dVar22 * 0.0) -
             dVar26 * dVar62)) * ___xmm_3fe00000000000003fe0000000000000 + dVar22;
    dVar47 = (param_1[0x3a] * dVar23 * _UNK_15076c6f8 +
             ((dVar27 * param_1[0x38] * _UNK_15076c6f8 + dVar47 * 0.0) - dVar26 * dVar42)) *
             _UNK_150689678 + dVar47;
    dVar27 = dVar41 * dVar41 + dVar47 * dVar47 + dVar34 * dVar34 + dVar22 * dVar22;
    uVar20 = ~-(ulonglong)(dVar27 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
    dVar26 = __real_3ff0000000000000 / SQRT(dVar27);
    dVar42 = (double)((ulonglong)(dVar34 * dVar26) & uVar20);
    dVar34 = (double)((ulonglong)(dVar41 * dVar26) & uVar20);
    dVar22 = (double)(((ulonglong)(dVar22 * dVar26) ^ ___xmm_3ff00000000000000000000000000000) &
                     uVar20);
    dVar27 = (double)(___xmm_3ff00000000000000000000000000000 ^ (ulonglong)dVar22);
    dVar47 = (double)(_UNK_15061cbc8 ^ ((ulonglong)(dVar47 * dVar26) ^ _UNK_15061cbc8) & uVar20);
    uVar69 = (undefined4)((ulonglong)dVar47 >> 0x20);
    param_1[0x38] = dVar42;
    param_1[0x39] = dVar34;
    auVar5._8_4_ = SUB84(dVar47,0);
    auVar5._0_8_ = dVar27;
    auVar5._12_4_ = uVar69;
    *(undefined1 (*) [16])(param_1 + 0x3a) = auVar5;
    auVar51._8_8_ = dVar34;
    auVar51._0_8_ = dVar42;
    auVar6._8_4_ = SUB84(dVar47,0);
    auVar6._0_8_ = dVar27;
    auVar6._12_4_ = uVar69;
    auVar50 = blendpd(auVar51,auVar6,2);
    dVar26 = param_1[0x10] * dVar27 - param_1[0x12] * auVar50._0_8_;
    dVar23 = param_1[0x11] * dVar42 - dVar34 * param_1[0x10];
    dVar62 = param_1[0x12] * dVar34 - dVar27 * param_1[0x11];
    dVar26 = dVar26 + dVar26;
    dVar23 = dVar23 + dVar23;
    dVar62 = dVar62 + dVar62;
    param_1[0x23] =
         param_1[0x31] + (dVar23 * dVar34 - dVar26 * dVar22) + dVar62 * dVar47 + param_1[0x10];
    param_1[0x24] =
         param_1[0x32] + (dVar62 * dVar22 - dVar23 * dVar42) + dVar26 * dVar47 + param_1[0x11];
    param_1[0x25] =
         dVar47 * dVar23 + param_1[0x12] + (dVar26 * dVar42 - dVar62 * dVar34) + param_1[0x33];
    auVar52._8_4_ = SUB84(dVar27,0);
    auVar52._0_8_ = dVar27;
    auVar52._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
    param_1[0x2a] =
         param_1[0xd] * dVar27 * dVar28 +
         param_1[0xe] * dVar34 + param_1[0xf] * dVar42 * dVar29 + param_1[0xc] * dVar47;
    param_1[0x2b] =
         param_1[0xc] * auVar52._8_8_ * dVar36 +
         param_1[0xf] * dVar34 + param_1[0xe] * dVar42 * dVar35 + param_1[0xd] * dVar47;
    param_1[0x2c] =
         param_1[0xf] * dVar27 * dVar29 +
         ((param_1[0xd] * dVar42 * dVar29 + param_1[0xe] * dVar47) - param_1[0xc] * dVar34);
    param_1[0x2d] =
         param_1[0xe] * auVar52._8_8_ * dVar35 +
         ((param_1[0xc] * dVar42 * dVar35 + param_1[0xf] * dVar47) - param_1[0xd] * dVar34);
    dVar23 = dVar34 + dVar34;
    dVar62 = dVar27 + dVar27;
    dVar22 = dVar42 * (dVar42 + dVar42);
    dVar35 = dVar42 * dVar23;
    dVar28 = (dVar42 + dVar42) * dVar47;
    dVar26 = dVar47 * dVar62 + dVar35;
    dVar41 = dVar28 + dVar34 * dVar62;
    dVar46 = dVar23 * dVar47 + dVar62 * dVar42;
    dVar28 = dVar34 * dVar62 - dVar28;
    dVar36 = dVar62 * dVar42 - dVar23 * dVar47;
    dVar29 = dVar35 - dVar47 * dVar62;
    dVar35 = dVar35 - dVar47 * (dVar47 + dVar47);
    auVar60._0_8_ = dVar63 - (dVar62 * dVar27 + dVar34 * dVar23);
    auVar60._8_8_ = dVar25 - (dVar62 * dVar27 + dVar22);
    dVar40 = dVar40 - (dVar34 * dVar23 + dVar22);
    dVar22 = param_1[0x1b];
    dVar63 = param_1[0x1d];
    dVar25 = param_1[0x1c];
    auVar7._8_4_ = SUB84(dVar35,0);
    auVar7._0_8_ = dVar29;
    auVar7._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
    auVar50 = blendpd(auVar60,auVar7,1);
    dVar47 = dVar46 * 0.0 + dVar29 * 0.0 + auVar60._0_8_ * dVar22;
    dVar27 = dVar46 * 0.0 + dVar29 * dVar25 + auVar60._0_8_ * 0.0;
    dVar29 = dVar63 * dVar46 +
             dVar29 * 0.0 + auVar60._0_8_ * ___xmm_00000000000000000000000000000000;
    dVar23 = dVar28 * 0.0 + auVar60._8_8_ * 0.0 + dVar26 * dVar22;
    dVar62 = dVar28 * 0.0 + dVar25 * auVar60._8_8_ + dVar26 * 0.0;
    dVar35 = dVar63 * dVar28 + auVar60._8_8_ * 0.0 + dVar26 * 0.0;
    dVar22 = dVar40 * 0.0 + dVar41 * 0.0 + dVar22 * dVar36;
    dVar25 = dVar40 * 0.0 + dVar41 * dVar25 + dVar36 * 0.0;
    dVar42 = auVar50._0_8_;
    dVar34 = auVar50._8_8_;
    dVar63 = dVar63 * dVar40 + dVar41 * ___xmm_00000000000000000000000000000000 + dVar36 * 0.0;
    param_1[0x58] = dVar29 * dVar46 + dVar42 * dVar27 + dVar47 * auVar60._0_8_;
    param_1[0x59] = dVar29 * dVar28 + dVar34 * dVar27 + dVar47 * dVar26;
    param_1[0x5a] = dVar29 * dVar40 + dVar27 * dVar41 + dVar36 * dVar47;
    param_1[0x5b] = 0.0;
    param_1[0x5c] = dVar35 * dVar46 + dVar42 * dVar62 + dVar23 * auVar60._0_8_;
    param_1[0x5d] = dVar35 * dVar28 + dVar34 * dVar62 + dVar23 * dVar26;
    param_1[0x5e] = dVar35 * dVar40 + dVar62 * dVar41 + dVar36 * dVar23;
    param_1[0x5f] = 0.0;
    param_1[0x60] = dVar63 * dVar46 + dVar42 * dVar25 + dVar22 * auVar60._0_8_;
    param_1[0x61] = dVar63 * dVar28 + dVar34 * dVar25 + dVar22 * dVar26;
    param_1[0x62] = dVar63 * dVar40 + dVar25 * dVar41 + dVar36 * dVar22;
    param_1[0x65] = 0.0;
    param_1[0x66] = 0.0;
    param_1[99] = 0.0;
    param_1[100] = 0.0;
  }
  param_1[0x67] = 1.0;
LAB_140a08576:
  uVar20 = __real_bff0000000000000;
  dVar22 = __real_3ff0000000000000;
  uVar21 = -(ulonglong)
            (0.0 <= param_1[0x35] * param_1[0x39] + param_1[0x37] * param_1[0x3b] +
                    param_1[0x34] * param_1[0x38] + param_1[0x36] * param_1[0x3a]);
  dVar40 = (double)(~uVar21 & __real_bff0000000000000 | uVar21 & (ulonglong)__real_3ff0000000000000)
  ;
  param_1[0x38] = param_1[0x38] * dVar40;
  param_1[0x39] = param_1[0x39] * dVar40;
  param_1[0x3a] = param_1[0x3a] * dVar40;
  param_1[0x3b] = param_1[0x3b] * dVar40;
  uVar21 = -(ulonglong)
            (0.0 <= param_1[0x27] * param_1[0x2b] + param_1[0x29] * param_1[0x2d] +
                    param_1[0x26] * param_1[0x2a] + param_1[0x28] * param_1[0x2c]);
  dVar22 = (double)(~uVar21 & uVar20 | (ulonglong)dVar22 & uVar21);
  param_1[0x2a] = param_1[0x2a] * dVar22;
  param_1[0x2b] = param_1[0x2b] * dVar22;
  param_1[0x2c] = param_1[0x2c] * dVar22;
  param_1[0x2d] = param_1[0x2d] * dVar22;
  *param_9 = *param_9 + dVar1;
  dVar40 = *(double *)(*param_6 + 8);
  dVar22 = *(double *)param_6[1];
  param_1[0x87] = param_1[0x87] + *(double *)*param_6 * dVar1;
  param_1[0x88] = param_1[0x88] + dVar40 * dVar1;
  param_1[0x89] = dVar1 * dVar22 + param_1[0x89];
  return;
}

// ApplyPointPositionConstraintKD___un_3C_s_5B_unFPBDJointSolver_5D__3E_CuniCuniREFs_5B__c_unFVector_5D_Cund_sse4 @ 140a08710

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPointPositionConstraintKD___un_3C_s_5B_unFPBDJointSolver_5D__3E_CuniCuniREFs_5B__c_unFVector_5D_Cund_sse4
               (longlong param_1,int param_2,int param_3,double *param_4,double param_5,
               undefined1 (*param_6) [16])

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  ulonglong *puVar4;
  double dVar5;
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
  longlong lVar19;
  undefined4 unaff_ESI;
  int iVar20;
  longlong lVar21;
  longlong lVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  ulonglong uVar27;
  double dVar28;
  double dVar31;
  undefined1 auVar29 [16];
  ulonglong uVar32;
  double dVar33;
  undefined1 auVar30 [16];
  ulonglong uVar34;
  double dVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  double dVar43;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar44;
  double dVar45;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar54;
  double dVar55;
  uint uVar58;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar59;
  double dVar60;
  undefined1 auVar61 [16];
  double dVar62;
  double dVar63;
  double dVar64;
  undefined1 auVar65 [16];
  double dVar66;
  double dVar68;
  double dVar69;
  undefined1 auVar67 [16];
  double dVar70;
  double dVar71;
  double dVar72;
  double dVar74;
  undefined1 auVar73 [16];
  double dVar75;
  double dVar79;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  double dVar80;
  double dVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined4 uVar84;
  undefined4 uVar85;
  double local_1e8;
  double local_1d8;
  double dStack_1d0;
  double local_1b8;
  double local_1a8;
  double local_198;
  double dStack_140;
  
  lVar21 = (longlong)param_3;
  lVar19 = lVar21 * 0x80;
  dVar26 = *(double *)(param_1 + 0x180 + lVar21 * 0x18);
  pdVar1 = (double *)(param_1 + 0x100 + lVar21 * 0x18);
  pdVar2 = (double *)(param_1 + 0x170 + lVar21 * 0x18);
  dVar35 = *pdVar2;
  dVar44 = pdVar2[1];
  dVar75 = *pdVar1 - dVar35;
  dVar79 = pdVar1[1] - dVar44;
  dVar70 = *(double *)(param_1 + 0x110 + lVar21 * 0x18) - dVar26;
  dVar25 = *(double *)(param_1 + 0x268 + lVar19);
  dVar55 = *(double *)(param_1 + 0x260 + lVar19);
  dVar45 = *(double *)(param_1 + 0x288 + lVar19);
  dVar60 = *(double *)(param_1 + 0x290 + lVar19);
  dVar5 = *(double *)(param_1 + 0x280 + lVar19);
  dVar80 = (double)((ulonglong)dVar75 ^ (ulonglong)__xmm_80000000000000008000000000000000);
  dVar42 = *(double *)(param_1 + 0x240 + lVar19);
  auVar38._8_4_ = SUB84(dVar80,0);
  auVar38._0_8_ = dVar80;
  auVar38._12_4_ = (int)((ulonglong)dVar80 >> 0x20);
  dVar43 = *(double *)(param_1 + 0xf0 + lVar21 * 8);
  auVar78._0_8_ =
       dVar79 * (dVar60 * dVar79 - dVar45 * dVar70) +
       (double)((ulonglong)dVar70 ^ (ulonglong)__xmm_80000000000000008000000000000000) *
       (dVar45 * dVar79 - dVar25 * dVar70) + dVar43;
  dVar28 = dVar80 * (dVar60 * dVar79 - dVar45 * dVar70) +
           dVar70 * (dVar5 * dVar79 - dVar55 * dVar70) + 0.0;
  auVar82._0_8_ =
       dVar80 * (dVar60 * dVar80 + dVar5 * dVar70) + dVar70 * (dVar5 * dVar80 + dVar70 * dVar42) +
       dVar43;
  auVar82._8_8_ =
       dVar75 * (dVar45 * auVar38._8_8_ + dVar55 * dVar70) +
       (double)((ulonglong)dVar79 ^ (ulonglong)__xmm_80000000000000008000000000000000) *
       (dVar5 * auVar38._8_8_ + dVar70 * dVar42) + 0.0;
  auVar38 = *param_6;
  iVar20 = movmskps(unaff_ESI,auVar38);
  pdVar1 = (double *)(param_1 + 0x100 + lVar21 * 0x18);
  pdVar2 = (double *)(param_1 + 0x240 + lVar19);
  dVar80 = ((dVar79 * dVar45 - dVar70 * dVar25) * dVar75 -
           (dVar79 * dVar5 - dVar70 * dVar55) * dVar79) + 0.0;
  dVar43 = ((dVar79 * 0.0 - dVar70 * dVar25) * dVar79 - (dVar79 * 0.0 - dVar70 * dVar55) * dVar79) +
           0.0;
  uVar84 = SUB84(dVar43,0);
  uVar85 = (undefined4)((ulonglong)dVar43 >> 0x20);
  dVar43 = *(double *)(param_1 + 0xf0 + lVar21 * 8);
  auVar40._0_8_ =
       ((dVar75 * dVar25 - dVar79 * dVar55) * dVar75 - (dVar75 * dVar55 - dVar42 * dVar79) * dVar79)
       + dVar43;
  auVar40._8_8_ =
       ((dVar79 * 0.0 - dVar79 * 0.0) * dVar79 - (dVar79 * 0.0 - dVar42 * dVar79) * dVar79) + 0.0;
  uVar27 = __xmm_7fffffffffffffff7fffffffffffffff;
  uVar32 = __xmm_7fffffffffffffff7fffffffffffffff._8_8_;
  uVar58 = (uint)((ulonglong)auVar82._8_8_ >> 0x20);
  if (iVar20 == 0xf) {
    auVar48._4_4_ = -(uint)(_UNK_150aa88b8 < (double)((ulonglong)dVar28 & uVar32));
    auVar48._0_4_ =
         -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <
                (double)((ulonglong)auVar78._0_8_ & uVar27));
    auVar48._8_4_ =
         -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a < (double)((ulonglong)dVar80 & uVar27));
    auVar48._12_4_ = -(uint)(_UNK_150aa88b8 < (double)(__real_0010000000000000 & uVar32));
    iVar20 = movmskps(0xf,auVar48);
    dVar81 = __real_3ff0000000000000;
    dVar24 = __real_3ff0000000000000;
    if ((iVar20 == 0) &&
       (auVar61._0_8_ =
             (double)CONCAT44(uVar58 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(auVar82._8_8_,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
       , auVar61._8_4_ = _UNK_150b547c8 & __xmm_7fffffffffffffff7fffffffffffffff._8_4_,
       auVar61._12_4_ = _UNK_150b547cc & __xmm_7fffffffffffffff7fffffffffffffff._12_4_,
       auVar53._4_4_ = -(uint)(_UNK_150aa88b8 < (double)((ulonglong)auVar82._0_8_ & uVar32)),
       auVar53._0_4_ =
            -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a < (double)((ulonglong)dVar28 & uVar27)),
       auVar53._8_4_ = -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a < auVar61._0_8_),
       auVar53._12_4_ = -(uint)(_UNK_150aa88b8 < auVar61._8_8_), iVar20 = movmskps(0,auVar53),
       iVar20 == 0)) {
      auVar49._8_8_ = auVar82._8_8_;
      auVar49._0_8_ = auVar82._0_8_;
      auVar83._8_4_ = uVar84;
      auVar83._0_8_ = dVar80;
      auVar83._12_4_ = uVar85;
      auVar38 = blendpd(auVar49,auVar83,1);
      auVar18._8_4_ = _UNK_150b547c8;
      auVar18._0_8_ = ___xmm_00100000000000000000000000000000;
      auVar18._12_4_ = _UNK_150b547cc;
      auVar48 = blendpd(auVar18,auVar40,1);
      auVar50._4_4_ = -(uint)(_UNK_150aa88b8 < (double)(auVar38._8_8_ & uVar32));
      auVar50._0_4_ =
           -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a < (double)(auVar38._0_8_ & uVar27));
      auVar50._8_4_ =
           -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a < (double)(auVar48._0_8_ & uVar27));
      auVar50._12_4_ = -(uint)(_UNK_150aa88b8 < (double)(auVar48._8_8_ & uVar32));
      iVar20 = movmskps(0,auVar50);
      if (iVar20 != 0) goto LAB_140a096b7;
      local_1a8 = 0.0;
      dVar33 = 0.0;
      local_198 = 0.0;
      dVar63 = 0.0;
      local_1b8 = __real_3ff0000000000000;
      dVar72 = 0.0;
      dVar66 = 0.0;
    }
    else {
LAB_140a096b7:
      dVar59 = auVar82._0_8_ * auVar78._0_8_ - dVar28 * dVar28;
      dVar64 = dVar80 * 0.0 - auVar82._8_8_ * 0.0;
      dVar69 = auVar82._8_8_ * __xmm_80000000000000008000000000000000 + dVar80 * 0.0;
      dVar54 = _UNK_15066df78 * 0.0 + __real_3ff0000000000000 * auVar40._0_8_;
      auVar73._8_8_ = auVar82._8_8_;
      auVar73._0_8_ = auVar82._0_8_;
      auVar12._8_4_ = uVar84;
      auVar12._0_8_ = dVar80;
      auVar12._12_4_ = uVar85;
      auVar38 = blendpd(auVar73,auVar12,1);
      dVar68 = auVar38._0_8_;
      dVar71 = auVar38._8_8_;
      dVar62 = __xmm_80000000000000008000000000000000 * dVar68 + auVar40._0_8_ * 0.0;
      dVar23 = _UNK_15066df78 * dVar71 + auVar40._0_8_ * 0.0;
      auVar52._0_8_ = auVar78._0_8_ * auVar82._8_8_ - dVar28 * dVar80;
      auVar52._8_8_ = auVar78._0_8_ * 0.0 - dVar28 * 0.0;
      dVar74 = auVar82._0_8_ * dVar80 - dVar28 * auVar82._8_8_;
      dVar31 = auVar82._0_8_ * 0.0 - dVar28 * 0.0;
      dVar33 = dVar80 * dVar74 + auVar82._8_8_ * auVar52._0_8_;
      dVar72 = dVar62 * dVar31 + dVar23 * auVar52._8_8_;
      auVar77._0_8_ = (dVar69 * dVar64 + dVar59 * dVar54) - (dVar72 + dVar33);
      auVar77._8_8_ = (dVar69 * dVar64 + dVar59 * dVar54) - (dVar33 + dVar72);
      dVar33 = 0.0;
      local_1a8 = 0.0;
      local_198 = 0.0;
      dVar63 = 0.0;
      local_1b8 = __real_3ff0000000000000;
      dVar72 = 0.0;
      dVar66 = 0.0;
      if ((auVar77._0_8_ != 0.0) || (NAN(auVar77._0_8_))) {
        auVar41._0_8_ = dVar74 * 0.0;
        auVar41._8_8_ = dVar31 * 0.0;
        auVar48 = blendpd(auVar41,auVar52,1);
        auVar30._8_8_ = dVar23;
        auVar30._0_8_ = dVar62;
        auVar40 = blendpd(auVar30,auVar38,1);
        auVar83 = blendpd(auVar82,ZEXT816(0),1);
        auVar10._8_4_ = SUB84(dVar23,0);
        auVar10._0_8_ = dVar62;
        auVar10._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
        auVar61 = blendpd(auVar38,auVar10,1);
        auVar16._8_8_ = _UNK_15076c6f8;
        auVar16._0_8_ = ___xmm_bff00000000000003ff0000000000000;
        auVar53 = divpd(auVar16,auVar77);
        auVar14._8_8_ = _UNK_15076b868;
        auVar14._0_8_ = ___xmm_3ff0000000000000bff0000000000000;
        auVar38 = divpd(auVar14,auVar77);
        local_1b8 = (auVar78._0_8_ * dVar54 - (auVar61._0_8_ * 0.0 + dVar80 * auVar40._0_8_)) *
                    auVar53._0_8_;
        dVar33 = (dVar28 * dVar54 - (dVar80 * auVar61._8_8_ + auVar40._8_8_ * 0.0)) * auVar53._8_8_;
        local_1a8 = auVar53._8_8_ * (dVar69 * 0.0 - (dVar68 * dVar28 - auVar78._0_8_ * dVar71));
        dVar72 = (dVar28 * dVar54 - (auVar61._0_8_ * auVar83._0_8_ + auVar82._8_8_ * auVar40._0_8_))
                 * auVar38._0_8_;
        auVar78._0_8_ = auVar38._8_8_;
        dVar63 = (dVar64 * 0.0 - (auVar52._8_8_ * 0.0 - auVar48._0_8_)) * auVar38._0_8_;
        dVar66 = (dVar64 * 0.0 - (dVar74 - auVar48._8_8_)) * auVar78._0_8_;
        local_198 = (dVar69 * 0.0 - (auVar82._0_8_ * dVar68 - dVar28 * dVar71)) * auVar78._0_8_;
        dVar81 = (auVar82._0_8_ * dVar54 - (auVar61._8_8_ * auVar83._8_8_ + auVar40._8_8_ * 0.0)) *
                 auVar78._0_8_;
        dVar24 = auVar78._0_8_ * (dVar59 - (dVar31 * 0.0 + auVar52._8_8_ * 0.0));
      }
    }
    auVar78._0_8_ = *param_4;
    dVar28 = param_4[1];
    dVar80 = param_4[2];
    local_1d8 = param_5 * (dVar80 * local_198 + dVar28 * dVar72 + auVar78._0_8_ * dVar81);
    dStack_1d0 = param_5 * (dVar80 * local_1a8 + dVar28 * local_1b8 + auVar78._0_8_ * dVar33);
    local_1e8 = (dVar24 * dVar80 + dVar63 * dVar28 + dVar66 * auVar78._0_8_) * param_5;
    dVar24 = dVar79 * local_1d8 - dStack_1d0 * dVar75;
    dVar79 = dVar70 * dStack_1d0 - local_1e8 * dVar79;
    dVar70 = local_1e8 * dVar75 - local_1d8 * dVar70;
    dVar75 = dVar24 * dVar5 + dVar70 * dVar55 + dVar42 * dVar79;
    dVar33 = dVar24 * dVar45 + dVar70 * dVar25 + pdVar2[1] * dVar79;
    dVar25 = pdVar2[6];
    dVar55 = pdVar2[2];
    pdVar1[0xe] = dVar35 - dVar43 * local_1d8;
    pdVar1[0xf] = dVar44 - dVar43 * dStack_1d0;
    pdVar1[0x10] = dVar26 - dVar43 * local_1e8;
    dVar74 = _UNK_15076c6f8;
    dVar72 = ___xmm_bff00000000000003ff0000000000000;
    dVar23 = _UNK_15076b868;
    dVar62 = ___xmm_3ff0000000000000bff0000000000000;
    dVar81 = __real_3ff0000000000000;
    lVar22 = lVar21 * 0x20;
    pdVar3 = (double *)(param_1 + 0x1b0 + lVar22);
    dVar43 = *pdVar3;
    auVar78._0_8_ = pdVar3[1];
    pdVar3 = (double *)(param_1 + 0x1a0 + lVar22);
    dVar28 = *pdVar3;
    dVar80 = pdVar3[1];
    dVar26 = *(double *)(param_1 + 0x1b8 + lVar22);
    dVar45 = *(double *)(param_1 + 0x1b0 + lVar22);
    dVar5 = *(double *)(param_1 + 0x1a8 + lVar22);
    dVar42 = *(double *)(param_1 + 0x1a0 + lVar22);
    dVar25 = dVar24 * dVar60 + dVar79 * dVar55 + dVar70 * dVar25;
    dVar55 = (dVar5 * dVar25 * ___xmm_3ff0000000000000bff0000000000000 +
             dVar33 * dVar43 +
             dVar75 * dVar26 * ___xmm_bff00000000000003ff0000000000000 + dVar28 * 0.0) *
             ___xmm_3fe00000000000003fe0000000000000 + dVar28;
    dVar60 = (dVar42 * dVar25 * _UNK_15076b868 +
             dVar33 * auVar78._0_8_ + dVar75 * dVar45 * _UNK_15076c6f8 + dVar80 * 0.0) *
             _UNK_150689678 + dVar80;
    dVar43 = (dVar26 * dVar25 * ___xmm_bff00000000000003ff0000000000000 +
             ((dVar75 * dVar5 * ___xmm_bff00000000000003ff0000000000000 + dVar43 * 0.0) -
             dVar33 * dVar28)) * ___xmm_3fe00000000000003fe0000000000000 + dVar43;
    auVar78._0_8_ =
         (dVar45 * dVar25 * _UNK_15076c6f8 +
         ((dVar75 * dVar42 * _UNK_15076c6f8 + auVar78._0_8_ * 0.0) - dVar33 * dVar80)) *
         _UNK_150689678 + auVar78._0_8_;
    dVar26 = dVar60 * dVar60 + auVar78._0_8_ * auVar78._0_8_ + dVar55 * dVar55 + dVar43 * dVar43;
    uVar34 = ~-(ulonglong)(dVar26 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
    dVar26 = __real_3ff0000000000000 / SQRT(dVar26);
    uVar27 = ~uVar34 & ___xmm_3ff00000000000000000000000000000;
    uVar32 = ~uVar34 & _UNK_15061cbc8;
    puVar4 = (ulonglong *)(param_1 + 0x1a0 + lVar22);
    *puVar4 = (ulonglong)(dVar55 * dVar26) & uVar34;
    puVar4[1] = (ulonglong)(dVar60 * dVar26) & uVar34;
    puVar4 = (ulonglong *)(param_1 + 0x1b0 + lVar22);
    *puVar4 = uVar27 | (ulonglong)(dVar43 * dVar26) & uVar34;
    puVar4[1] = uVar32 | (ulonglong)(auVar78._0_8_ * dVar26) & uVar34;
    uVar27 = __real_bff0000000000000;
    uVar32 = -(ulonglong)
              (0.0 <= *(double *)(param_1 + 0x1a8) * *(double *)(param_1 + 0x1c8) +
                      *(double *)(param_1 + 0x1b8) * *(double *)(param_1 + 0x1d8) +
                      *(double *)(param_1 + 0x1a0) * *(double *)(param_1 + 0x1c0) +
                      *(double *)(param_1 + 0x1b0) * *(double *)(param_1 + 0x1d0));
    dVar26 = (double)(~uVar32 & __real_bff0000000000000 | uVar32 & (ulonglong)dVar81);
    *(double *)(param_1 + 0x1c0) = *(double *)(param_1 + 0x1c0) * dVar26;
    *(double *)(param_1 + 0x1c8) = *(double *)(param_1 + 0x1c8) * dVar26;
    *(double *)(param_1 + 0x1d0) = *(double *)(param_1 + 0x1d0) * dVar26;
    *(double *)(param_1 + 0x1d8) = *(double *)(param_1 + 0x1d8) * dVar26;
    dVar33 = _UNK_150689688;
    dVar24 = ___xmm_3ff00000000000003ff0000000000000;
    lVar19 = lVar21 * 0x60;
    dVar26 = *(double *)(param_1 + 0x1b8 + lVar22);
    pdVar3 = (double *)(param_1 + 0x1a0 + lVar22);
    dVar60 = *pdVar3;
    dVar5 = pdVar3[1];
    pdVar3 = (double *)(param_1 + 0x1a8 + lVar22);
    dVar42 = *pdVar3;
    dVar43 = pdVar3[1];
    pdVar3 = (double *)(param_1 + 0x20 + lVar19);
    auVar78._0_8_ = *pdVar3;
    dVar28 = pdVar3[1];
    pdVar3 = (double *)(param_1 + 0x28 + lVar19);
    dVar25 = *(double *)(param_1 + 0x1a0 + lVar22);
    dVar80 = *(double *)(param_1 + 0x1b0 + lVar22) * *(double *)(param_1 + 0x20 + lVar19) -
             dVar25 * *(double *)(param_1 + 0x30 + lVar19);
    dVar35 = *pdVar3 * dVar60 - auVar78._0_8_ * dVar42;
    dVar44 = pdVar3[1] * dVar5 - dVar28 * dVar43;
    dVar35 = dVar35 + dVar35;
    dVar44 = dVar44 + dVar44;
    dVar80 = dVar80 + dVar80;
    dVar55 = *(double *)(param_1 + 0x1b0 + lVar22);
    dVar45 = *(double *)(param_1 + 0x30 + lVar19);
    *pdVar1 = pdVar1[0xe] + (dVar35 * dVar5 - dVar80 * dVar43) + dVar26 * dVar44 + auVar78._0_8_;
    pdVar1[1] = pdVar1[0xf] + (dVar44 * dVar55 - dVar25 * dVar35) + dVar26 * dVar80 + dVar28;
    pdVar1[2] = dVar35 * dVar26 + dVar45 + (dVar80 * dVar60 - dVar44 * dVar42) + pdVar1[0x10];
    pdVar1 = (double *)(param_1 + 0x1b8 + lVar22);
    dVar25 = *pdVar1;
    dVar26 = *pdVar1;
    dVar44 = *(double *)(param_1 + lVar19);
    dVar70 = ((double *)(param_1 + lVar19))[1];
    pdVar1 = (double *)(param_1 + 0x10 + lVar19);
    dVar75 = *pdVar1;
    dVar79 = pdVar1[1];
    pdVar1 = (double *)(param_1 + 0x1a0 + lVar22);
    dVar55 = *pdVar1;
    dVar45 = *pdVar1;
    dVar60 = *(double *)(param_1 + 8 + lVar19);
    dVar5 = *(double *)(param_1 + lVar19);
    dVar42 = *(double *)(param_1 + 0x18 + lVar19);
    dVar43 = *(double *)(param_1 + 0x10 + lVar19);
    pdVar1 = (double *)(param_1 + 0x1a8 + lVar22);
    auVar78._0_8_ = *pdVar1;
    dVar28 = *pdVar1;
    pdVar1 = (double *)(param_1 + 0x1b0 + lVar22);
    dVar80 = *pdVar1;
    dVar35 = *pdVar1;
    pdVar1 = (double *)(param_1 + 0x130 + lVar22);
    *pdVar1 = dVar60 * dVar80 * dVar62 +
              dVar75 * auVar78._0_8_ + dVar55 * dVar42 * dVar72 + dVar25 * dVar44;
    pdVar1[1] = dVar5 * dVar35 * dVar23 +
                dVar79 * dVar28 + dVar45 * dVar43 * dVar74 + dVar26 * dVar70;
    pdVar1 = (double *)(param_1 + 0x140 + lVar22);
    *pdVar1 = dVar42 * dVar80 * dVar72 +
              ((dVar55 * dVar60 * dVar72 + dVar25 * dVar75) - dVar44 * auVar78._0_8_);
    pdVar1[1] = dVar43 * dVar35 * dVar74 +
                ((dVar45 * dVar5 * dVar74 + dVar26 * dVar79) - dVar70 * dVar28);
    uVar32 = -(ulonglong)
              (0.0 <= *(double *)(param_1 + 0x138) * *(double *)(param_1 + 0x158) +
                      *(double *)(param_1 + 0x148) * *(double *)(param_1 + 0x168) +
                      *(double *)(param_1 + 0x130) * *(double *)(param_1 + 0x150) +
                      *(double *)(param_1 + 0x140) * *(double *)(param_1 + 0x160));
    dVar26 = (double)(~uVar32 & uVar27 | uVar32 & (ulonglong)dVar81);
    *(double *)(param_1 + 0x150) = *(double *)(param_1 + 0x150) * dVar26;
    *(double *)(param_1 + 0x158) = *(double *)(param_1 + 0x158) * dVar26;
    *(double *)(param_1 + 0x160) = *(double *)(param_1 + 0x160) * dVar26;
    *(double *)(param_1 + 0x168) = *(double *)(param_1 + 0x168) * dVar26;
    pdVar1 = (double *)(param_1 + 0x1b0 + lVar22);
    dVar43 = *pdVar1;
    auVar78._0_8_ = pdVar1[1];
    pdVar1 = (double *)(param_1 + 0x1a0 + lVar22);
    dVar28 = *pdVar1;
    dVar80 = pdVar1[1];
    dVar28 = dVar28 + dVar28;
    dVar80 = dVar80 + dVar80;
    dVar43 = dVar43 + dVar43;
    dVar25 = *(double *)(param_1 + 0x1a0 + lVar22);
    dVar26 = *(double *)(param_1 + 0x1a8 + lVar22);
    dVar60 = dVar25 * dVar28;
    dVar5 = dVar25 * dVar80;
    dVar35 = dVar26 * dVar80;
    dVar26 = dVar26 * dVar43;
    pdVar1 = (double *)(param_1 + 0x1b8 + lVar22);
    dVar45 = *pdVar1;
    dVar55 = *pdVar1;
    dVar28 = dVar28 * dVar45;
    dVar80 = dVar80 * dVar55;
    dVar44 = *(double *)(param_1 + 0x1b0 + lVar22) * dVar43;
    dVar45 = dVar43 * dVar45;
    dVar42 = dVar45 + dVar5;
    dVar72 = dVar28 + dVar26;
    dVar74 = dVar80 + dVar25 * dVar43;
    dVar26 = dVar26 - dVar28;
    dVar80 = dVar25 * dVar43 - dVar80;
    dVar45 = dVar5 - dVar45;
    dVar5 = dVar5 - (auVar78._0_8_ + auVar78._0_8_) * dVar55;
    auVar78._0_8_ = dVar24 - (dVar44 + dVar35);
    auVar78._8_8_ = dVar33 - (dVar44 + dVar60);
    dVar81 = dVar81 - (dVar35 + dVar60);
    dVar25 = *(double *)(param_1 + 0xc0 + lVar21 * 0x18);
    dVar55 = *(double *)(param_1 + 0xd0 + lVar21 * 0x18);
    auVar7._8_4_ = SUB84(dVar5,0);
    auVar7._0_8_ = dVar45;
    auVar7._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    auVar38 = blendpd(auVar78,auVar7,1);
    dVar60 = *(double *)(param_1 + 200 + lVar21 * 0x18);
    dVar44 = dVar74 * 0.0 + dVar45 * 0.0 + auVar78._0_8_ * dVar25;
    dVar33 = dVar74 * 0.0 + dVar45 * dVar60 + auVar78._0_8_ * 0.0;
    dVar45 = dVar55 * dVar74 + dVar45 * 0.0 + auVar78._0_8_ * 0.0;
    dVar62 = dVar26 * 0.0 + auVar78._8_8_ * 0.0 + dVar42 * dVar25;
    dVar23 = dVar26 * 0.0 + dVar60 * auVar78._8_8_ + dVar42 * 0.0;
    dVar5 = dVar55 * dVar26 + auVar78._8_8_ * 0.0 + dVar42 * 0.0;
    dVar70 = dVar81 * 0.0 + dVar72 * 0.0 + dVar25 * dVar80;
    dVar24 = dVar81 * 0.0 + dVar72 * dVar60 + dVar80 * 0.0;
    dVar31 = auVar38._0_8_;
    dVar69 = auVar38._8_8_;
    dVar75 = dVar80 * dVar70;
    dVar60 = dVar31 * dVar24;
    dVar43 = dVar69 * dVar24;
    dVar24 = dVar24 * dVar72;
    dVar79 = dVar55 * dVar81 + dVar72 * ___xmm_00000000000000000000000000000000 + dVar80 * 0.0;
    dVar28 = dVar45 * dVar74 + dVar31 * dVar33 + dVar44 * auVar78._0_8_;
    dVar35 = dVar45 * dVar26 + dVar69 * dVar33 + dVar44 * dVar42;
    dVar25 = dVar45 * dVar81 + dVar33 * dVar72 + dVar80 * dVar44;
    dVar45 = dVar5 * dVar74 + dVar31 * dVar23 + dVar62 * auVar78._0_8_;
    dVar44 = dVar5 * dVar26 + dVar69 * dVar23 + dVar62 * dVar42;
    dVar55 = dVar5 * dVar81 + dVar23 * dVar72 + dVar80 * dVar62;
    goto LAB_140a0a223;
  }
  auVar46._4_4_ = -(uint)(_UNK_150aa88b8 < (double)((ulonglong)dVar28 & uVar32));
  auVar46._0_4_ =
       -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a < (double)((ulonglong)auVar78._0_8_ & uVar27)
              );
  auVar46._8_4_ =
       -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a < (double)((ulonglong)dVar80 & uVar27));
  auVar46._12_4_ = -(uint)(_UNK_150aa88b8 < (double)(__real_0010000000000000 & uVar32));
  auVar36._0_4_ = -(uint)(auVar38._0_4_ == 0);
  auVar36._4_4_ = -(uint)(auVar38._4_4_ == 0);
  auVar36._8_4_ = -(uint)(auVar38._8_4_ == 0);
  auVar36._12_4_ = -(uint)(auVar38._12_4_ == 0);
  iVar20 = movmskps(iVar20,~auVar36 & auVar46);
  auVar47._8_8_ = auVar82._8_8_;
  auVar47._0_8_ = auVar82._0_8_;
  auVar11._8_4_ = uVar84;
  auVar11._0_8_ = dVar80;
  auVar11._12_4_ = uVar85;
  auVar48 = blendpd(auVar47,auVar11,1);
  dVar33 = auVar48._0_8_;
  dVar62 = auVar48._8_8_;
  dVar81 = __real_3ff0000000000000;
  dVar24 = __real_3ff0000000000000;
  if (iVar20 == 0) {
    auVar51._0_4_ = -(uint)(auVar38._0_4_ == 0);
    auVar51._4_4_ = -(uint)(auVar38._4_4_ == 0);
    auVar51._8_4_ = -(uint)(auVar38._8_4_ == 0);
    auVar51._12_4_ = -(uint)(auVar38._12_4_ == 0);
    auVar56._0_8_ =
         (double)CONCAT44(uVar58 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          SUB84(auVar82._8_8_,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar56._8_4_ = _UNK_150b547c8 & __xmm_7fffffffffffffff7fffffffffffffff._8_4_;
    auVar56._12_4_ = _UNK_150b547cc & __xmm_7fffffffffffffff7fffffffffffffff._12_4_;
    auVar37._4_4_ = -(uint)(_UNK_150aa88b8 < (double)((ulonglong)auVar82._0_8_ & uVar32));
    auVar37._0_4_ =
         -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a < (double)((ulonglong)dVar28 & uVar27));
    auVar37._8_4_ = -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a < auVar56._0_8_);
    auVar37._12_4_ = -(uint)(_UNK_150aa88b8 < auVar56._8_8_);
    iVar20 = movmskps(0,~auVar51 & auVar37);
    if (iVar20 != 0) goto LAB_140a08aba;
    auVar17._8_4_ = _UNK_150b547c8;
    auVar17._0_8_ = ___xmm_00100000000000000000000000000000;
    auVar17._12_4_ = _UNK_150b547cc;
    auVar38 = blendpd(auVar17,auVar40,1);
    auVar57._4_4_ = -(uint)(_UNK_150aa88b8 < (double)((ulonglong)dVar62 & uVar32));
    auVar57._0_4_ =
         -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a < (double)((ulonglong)dVar33 & uVar27));
    auVar57._8_4_ =
         -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a < (double)(auVar38._0_8_ & uVar27));
    auVar57._12_4_ = -(uint)(_UNK_150aa88b8 < (double)(auVar38._8_8_ & uVar32));
    iVar20 = movmskps(0,~auVar51 & auVar57);
    if (iVar20 != 0) goto LAB_140a08aba;
    local_1a8 = 0.0;
    local_198 = 0.0;
    dVar31 = 0.0;
    local_1b8 = __real_3ff0000000000000;
    dVar71 = 0.0;
    dVar69 = 0.0;
    dVar23 = 0.0;
  }
  else {
LAB_140a08aba:
    dVar66 = auVar82._0_8_ * auVar78._0_8_ - dVar28 * dVar28;
    dVar68 = dVar80 * 0.0 - auVar82._8_8_ * 0.0;
    dVar54 = auVar82._8_8_ * __xmm_80000000000000008000000000000000 + dVar80 * 0.0;
    dVar59 = _UNK_15066df78 * 0.0 + __real_3ff0000000000000 * auVar40._0_8_;
    dVar69 = 0.0;
    auVar65._0_8_ = __xmm_80000000000000008000000000000000 * dVar33 + auVar40._0_8_ * 0.0;
    auVar65._8_8_ = _UNK_15066df78 * dVar62 + auVar40._0_8_ * 0.0;
    auVar8._8_4_ = SUB84(auVar78._0_8_,0);
    auVar8._0_8_ = auVar78._0_8_;
    auVar8._12_4_ = (int)((ulonglong)auVar78._0_8_ >> 0x20);
    dVar72 = auVar78._0_8_ * auVar82._8_8_ - dVar28 * dVar80;
    dVar74 = auVar78._0_8_ * 0.0 - dVar28 * 0.0;
    dVar63 = auVar82._0_8_ * dVar80 - dVar28 * auVar82._8_8_;
    dVar64 = auVar82._0_8_ * 0.0 - dVar28 * 0.0;
    dVar23 = dVar80 * dVar63 + auVar82._8_8_ * dVar72;
    dVar31 = auVar65._0_8_ * dVar64 + auVar65._8_8_ * dVar74;
    auVar76._0_8_ = (dVar54 * dVar68 + dVar66 * dVar59) - (dVar31 + dVar23);
    auVar76._8_8_ = (dVar54 * dVar68 + dVar66 * dVar59) - (dVar23 + dVar31);
    local_1a8 = 0.0;
    local_198 = 0.0;
    dVar31 = 0.0;
    local_1b8 = __real_3ff0000000000000;
    dVar71 = 0.0;
    dVar23 = 0.0;
    if ((auVar76._0_8_ != 0.0) || (NAN(auVar76._0_8_))) {
      dStack_140 = auVar8._8_8_;
      auVar39._0_8_ = dVar63 * 0.0;
      auVar39._8_8_ = dVar64 * 0.0;
      auVar9._8_4_ = SUB84(dVar74,0);
      auVar9._0_8_ = dVar72;
      auVar9._12_4_ = (int)((ulonglong)dVar74 >> 0x20);
      auVar40 = blendpd(auVar39,auVar9,1);
      auVar29._8_8_ = auVar65._8_8_;
      auVar29._0_8_ = auVar65._0_8_;
      auVar38 = blendpd(auVar29,auVar48,1);
      auVar83 = blendpd(auVar82,ZEXT816(0),1);
      auVar48 = blendpd(auVar48,auVar65,1);
      auVar15._8_8_ = _UNK_15076c6f8;
      auVar15._0_8_ = ___xmm_bff00000000000003ff0000000000000;
      auVar53 = divpd(auVar15,auVar76);
      auVar13._8_8_ = _UNK_15076b868;
      auVar13._0_8_ = ___xmm_3ff0000000000000bff0000000000000;
      auVar61 = divpd(auVar13,auVar76);
      local_1b8 = (auVar78._0_8_ * dVar59 - (auVar48._0_8_ * 0.0 + dVar80 * auVar38._0_8_)) *
                  auVar53._0_8_;
      dVar23 = (dVar28 * dVar59 - (dVar80 * auVar48._8_8_ + auVar38._8_8_ * 0.0)) * auVar53._8_8_;
      local_1a8 = auVar53._8_8_ * (dVar54 * 0.0 - (dVar33 * dVar28 - dStack_140 * dVar62));
      dVar71 = (dVar28 * dVar59 - (auVar48._0_8_ * auVar83._0_8_ + auVar82._8_8_ * auVar38._0_8_)) *
               auVar61._0_8_;
      auVar78._0_8_ = auVar61._8_8_;
      dVar31 = (dVar68 * 0.0 - (dVar74 * 0.0 - auVar40._0_8_)) * auVar61._0_8_;
      dVar69 = (dVar68 * 0.0 - (dVar63 - auVar40._8_8_)) * auVar78._0_8_;
      local_198 = (dVar54 * 0.0 - (auVar82._0_8_ * dVar33 - dVar28 * dVar62)) * auVar78._0_8_;
      dVar81 = (auVar82._0_8_ * dVar59 - (auVar48._8_8_ * auVar83._8_8_ + auVar38._8_8_ * 0.0)) *
               auVar78._0_8_;
      dVar24 = auVar78._0_8_ * (dVar66 - (dVar64 * 0.0 + dVar74 * 0.0));
    }
  }
  auVar78._0_8_ = *param_4;
  dVar28 = param_4[1];
  dVar80 = param_4[2];
  local_1d8 = param_5 * (dVar80 * local_198 + dVar28 * dVar71 + auVar78._0_8_ * dVar81);
  dStack_1d0 = param_5 * (dVar80 * local_1a8 + dVar28 * local_1b8 + auVar78._0_8_ * dVar23);
  local_1e8 = (dVar24 * dVar80 + dVar31 * dVar28 + dVar69 * auVar78._0_8_) * param_5;
  dVar24 = dVar79 * local_1d8 - dStack_1d0 * dVar75;
  dVar79 = dVar70 * dStack_1d0 - local_1e8 * dVar79;
  dVar70 = local_1e8 * dVar75 - local_1d8 * dVar70;
  dVar75 = dVar24 * dVar5 + dVar70 * dVar55 + dVar42 * dVar79;
  dVar62 = dVar24 * dVar45 + dVar70 * dVar25 + pdVar2[1] * dVar79;
  dVar25 = pdVar2[6];
  dVar55 = pdVar2[2];
  pdVar1[0xe] = dVar35 - dVar43 * local_1d8;
  pdVar1[0xf] = dVar44 - dVar43 * dStack_1d0;
  pdVar1[0x10] = dVar26 - dVar43 * local_1e8;
  dVar74 = _UNK_15076c6f8;
  dVar72 = ___xmm_bff00000000000003ff0000000000000;
  dVar23 = _UNK_15076b868;
  dVar33 = ___xmm_3ff0000000000000bff0000000000000;
  dVar81 = __real_3ff0000000000000;
  lVar22 = lVar21 * 0x20;
  pdVar3 = (double *)(param_1 + 0x1b0 + lVar22);
  dVar43 = *pdVar3;
  auVar78._0_8_ = pdVar3[1];
  pdVar3 = (double *)(param_1 + 0x1a0 + lVar22);
  dVar28 = *pdVar3;
  dVar80 = pdVar3[1];
  dVar26 = *(double *)(param_1 + 0x1b8 + lVar22);
  dVar45 = *(double *)(param_1 + 0x1b0 + lVar22);
  dVar5 = *(double *)(param_1 + 0x1a8 + lVar22);
  dVar42 = *(double *)(param_1 + 0x1a0 + lVar22);
  dVar25 = dVar24 * dVar60 + dVar79 * dVar55 + dVar70 * dVar25;
  dVar55 = (dVar5 * dVar25 * ___xmm_3ff0000000000000bff0000000000000 +
           dVar62 * dVar43 +
           dVar75 * dVar26 * ___xmm_bff00000000000003ff0000000000000 + dVar28 * 0.0) *
           ___xmm_3fe00000000000003fe0000000000000 + dVar28;
  dVar60 = (dVar42 * dVar25 * _UNK_15076b868 +
           dVar62 * auVar78._0_8_ + dVar75 * dVar45 * _UNK_15076c6f8 + dVar80 * 0.0) *
           _UNK_150689678 + dVar80;
  dVar43 = (dVar26 * dVar25 * ___xmm_bff00000000000003ff0000000000000 +
           ((dVar75 * dVar5 * ___xmm_bff00000000000003ff0000000000000 + dVar43 * 0.0) -
           dVar62 * dVar28)) * ___xmm_3fe00000000000003fe0000000000000 + dVar43;
  auVar78._0_8_ =
       (dVar45 * dVar25 * _UNK_15076c6f8 +
       ((dVar75 * dVar42 * _UNK_15076c6f8 + auVar78._0_8_ * 0.0) - dVar62 * dVar80)) *
       _UNK_150689678 + auVar78._0_8_;
  dVar26 = dVar60 * dVar60 + auVar78._0_8_ * auVar78._0_8_ + dVar55 * dVar55 + dVar43 * dVar43;
  uVar34 = ~-(ulonglong)(dVar26 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
  dVar26 = __real_3ff0000000000000 / SQRT(dVar26);
  uVar27 = ~uVar34 & ___xmm_3ff00000000000000000000000000000;
  uVar32 = ~uVar34 & _UNK_15061cbc8;
  puVar4 = (ulonglong *)(param_1 + 0x1a0 + lVar22);
  *puVar4 = (ulonglong)(dVar55 * dVar26) & uVar34;
  puVar4[1] = (ulonglong)(dVar60 * dVar26) & uVar34;
  puVar4 = (ulonglong *)(param_1 + 0x1b0 + lVar22);
  *puVar4 = uVar27 | (ulonglong)(dVar43 * dVar26) & uVar34;
  puVar4[1] = uVar32 | (ulonglong)(auVar78._0_8_ * dVar26) & uVar34;
  uVar27 = __real_bff0000000000000;
  uVar32 = -(ulonglong)
            (0.0 <= *(double *)(param_1 + 0x1a8) * *(double *)(param_1 + 0x1c8) +
                    *(double *)(param_1 + 0x1b8) * *(double *)(param_1 + 0x1d8) +
                    *(double *)(param_1 + 0x1a0) * *(double *)(param_1 + 0x1c0) +
                    *(double *)(param_1 + 0x1b0) * *(double *)(param_1 + 0x1d0));
  dVar26 = (double)(~uVar32 & __real_bff0000000000000 | uVar32 & (ulonglong)dVar81);
  *(double *)(param_1 + 0x1c0) = *(double *)(param_1 + 0x1c0) * dVar26;
  *(double *)(param_1 + 0x1c8) = *(double *)(param_1 + 0x1c8) * dVar26;
  *(double *)(param_1 + 0x1d0) = *(double *)(param_1 + 0x1d0) * dVar26;
  *(double *)(param_1 + 0x1d8) = *(double *)(param_1 + 0x1d8) * dVar26;
  dVar62 = _UNK_150689688;
  auVar78._0_8_ = ___xmm_3ff00000000000003ff0000000000000;
  lVar19 = lVar21 * 0x60;
  dVar26 = *(double *)(param_1 + 0x1b8 + lVar22);
  pdVar3 = (double *)(param_1 + 0x1a0 + lVar22);
  dVar60 = *pdVar3;
  dVar5 = pdVar3[1];
  pdVar3 = (double *)(param_1 + 0x1a8 + lVar22);
  dVar42 = *pdVar3;
  dVar43 = pdVar3[1];
  pdVar3 = (double *)(param_1 + 0x20 + lVar19);
  dVar28 = *pdVar3;
  dVar80 = pdVar3[1];
  pdVar3 = (double *)(param_1 + 0x28 + lVar19);
  dVar25 = *(double *)(param_1 + 0x1a0 + lVar22);
  dVar35 = *(double *)(param_1 + 0x1b0 + lVar22) * *(double *)(param_1 + 0x20 + lVar19) -
           dVar25 * *(double *)(param_1 + 0x30 + lVar19);
  dVar44 = *pdVar3 * dVar60 - dVar28 * dVar42;
  dVar70 = pdVar3[1] * dVar5 - dVar80 * dVar43;
  dVar44 = dVar44 + dVar44;
  dVar70 = dVar70 + dVar70;
  dVar35 = dVar35 + dVar35;
  dVar55 = *(double *)(param_1 + 0x1b0 + lVar22);
  dVar45 = *(double *)(param_1 + 0x30 + lVar19);
  *pdVar1 = pdVar1[0xe] + (dVar44 * dVar5 - dVar35 * dVar43) + dVar26 * dVar70 + dVar28;
  pdVar1[1] = pdVar1[0xf] + (dVar70 * dVar55 - dVar25 * dVar44) + dVar26 * dVar35 + dVar80;
  pdVar1[2] = dVar44 * dVar26 + dVar45 + (dVar35 * dVar60 - dVar70 * dVar42) + pdVar1[0x10];
  pdVar1 = (double *)(param_1 + 0x1b8 + lVar22);
  dVar26 = *pdVar1;
  dVar25 = *pdVar1;
  dVar70 = *(double *)(param_1 + lVar19);
  dVar75 = ((double *)(param_1 + lVar19))[1];
  pdVar1 = (double *)(param_1 + 0x10 + lVar19);
  dVar79 = *pdVar1;
  dVar24 = pdVar1[1];
  pdVar1 = (double *)(param_1 + 0x1a0 + lVar22);
  dVar45 = *pdVar1;
  dVar55 = *pdVar1;
  dVar60 = *(double *)(param_1 + 8 + lVar19);
  dVar5 = *(double *)(param_1 + lVar19);
  dVar42 = *(double *)(param_1 + 0x18 + lVar19);
  dVar43 = *(double *)(param_1 + 0x10 + lVar19);
  pdVar1 = (double *)(param_1 + 0x1a8 + lVar22);
  dVar80 = *pdVar1;
  dVar28 = *pdVar1;
  pdVar1 = (double *)(param_1 + 0x1b0 + lVar22);
  dVar44 = *pdVar1;
  dVar35 = *pdVar1;
  pdVar1 = (double *)(param_1 + 0x130 + lVar22);
  *pdVar1 = dVar60 * dVar44 * dVar33 + dVar79 * dVar80 + dVar45 * dVar42 * dVar72 + dVar26 * dVar70;
  pdVar1[1] = dVar5 * dVar35 * dVar23 + dVar24 * dVar28 + dVar55 * dVar43 * dVar74 + dVar25 * dVar75
  ;
  pdVar1 = (double *)(param_1 + 0x140 + lVar22);
  *pdVar1 = dVar42 * dVar44 * dVar72 +
            ((dVar45 * dVar60 * dVar72 + dVar26 * dVar79) - dVar70 * dVar80);
  pdVar1[1] = dVar43 * dVar35 * dVar74 +
              ((dVar55 * dVar5 * dVar74 + dVar25 * dVar24) - dVar75 * dVar28);
  uVar32 = -(ulonglong)
            (0.0 <= *(double *)(param_1 + 0x138) * *(double *)(param_1 + 0x158) +
                    *(double *)(param_1 + 0x148) * *(double *)(param_1 + 0x168) +
                    *(double *)(param_1 + 0x130) * *(double *)(param_1 + 0x150) +
                    *(double *)(param_1 + 0x140) * *(double *)(param_1 + 0x160));
  dVar26 = (double)(~uVar32 & uVar27 | uVar32 & (ulonglong)dVar81);
  *(double *)(param_1 + 0x150) = *(double *)(param_1 + 0x150) * dVar26;
  *(double *)(param_1 + 0x158) = *(double *)(param_1 + 0x158) * dVar26;
  *(double *)(param_1 + 0x160) = *(double *)(param_1 + 0x160) * dVar26;
  *(double *)(param_1 + 0x168) = *(double *)(param_1 + 0x168) * dVar26;
  pdVar1 = (double *)(param_1 + 0x1b0 + lVar22);
  dVar43 = *pdVar1;
  dVar28 = pdVar1[1];
  pdVar1 = (double *)(param_1 + 0x1a0 + lVar22);
  dVar80 = *pdVar1;
  dVar33 = pdVar1[1];
  dVar80 = dVar80 + dVar80;
  dVar33 = dVar33 + dVar33;
  dVar43 = dVar43 + dVar43;
  dVar25 = *(double *)(param_1 + 0x1a0 + lVar22);
  dVar26 = *(double *)(param_1 + 0x1a8 + lVar22);
  dVar60 = dVar25 * dVar80;
  dVar5 = dVar25 * dVar33;
  dVar35 = dVar26 * dVar33;
  dVar26 = dVar26 * dVar43;
  pdVar1 = (double *)(param_1 + 0x1b8 + lVar22);
  dVar55 = *pdVar1;
  dVar45 = *pdVar1;
  dVar80 = dVar80 * dVar55;
  dVar33 = dVar33 * dVar45;
  dVar44 = *(double *)(param_1 + 0x1b0 + lVar22) * dVar43;
  dVar55 = dVar43 * dVar55;
  dVar42 = dVar55 + dVar5;
  dVar72 = dVar80 + dVar26;
  dVar74 = dVar33 + dVar25 * dVar43;
  dVar26 = dVar26 - dVar80;
  dVar33 = dVar25 * dVar43 - dVar33;
  dVar55 = dVar5 - dVar55;
  dVar5 = dVar5 - (dVar28 + dVar28) * dVar45;
  auVar78._0_8_ = auVar78._0_8_ - (dVar44 + dVar35);
  dVar62 = dVar62 - (dVar44 + dVar60);
  dVar81 = dVar81 - (dVar35 + dVar60);
  auVar67._8_8_ = dVar62;
  auVar67._0_8_ = auVar78._0_8_;
  dVar25 = *(double *)(param_1 + 0xc0 + lVar21 * 0x18);
  dVar45 = *(double *)(param_1 + 0xd0 + lVar21 * 0x18);
  auVar6._8_4_ = SUB84(dVar5,0);
  auVar6._0_8_ = dVar55;
  auVar6._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  auVar38 = blendpd(auVar67,auVar6,1);
  dVar60 = *(double *)(param_1 + 200 + lVar21 * 0x18);
  dVar80 = dVar74 * 0.0 + dVar55 * 0.0 + auVar78._0_8_ * dVar25;
  dVar44 = dVar74 * 0.0 + dVar55 * dVar60 + auVar78._0_8_ * 0.0;
  dVar55 = dVar45 * dVar74 + dVar55 * 0.0 + auVar78._0_8_ * 0.0;
  dVar31 = dVar26 * 0.0 + dVar62 * 0.0 + dVar42 * dVar25;
  dVar69 = dVar26 * 0.0 + dVar60 * dVar62 + dVar42 * 0.0;
  dVar5 = dVar45 * dVar26 + dVar62 * 0.0 + dVar42 * 0.0;
  dVar70 = dVar81 * 0.0 + dVar72 * 0.0 + dVar25 * dVar33;
  dVar24 = dVar81 * 0.0 + dVar72 * dVar60 + dVar33 * 0.0;
  dVar62 = auVar38._0_8_;
  dVar23 = auVar38._8_8_;
  dVar75 = dVar33 * dVar70;
  dVar60 = dVar62 * dVar24;
  dVar43 = dVar23 * dVar24;
  dVar24 = dVar24 * dVar72;
  dVar79 = dVar45 * dVar81 + dVar72 * ___xmm_00000000000000000000000000000000 + dVar33 * 0.0;
  dVar28 = dVar55 * dVar74 + dVar62 * dVar44 + dVar80 * auVar78._0_8_;
  dVar35 = dVar55 * dVar26 + dVar23 * dVar44 + dVar80 * dVar42;
  dVar25 = dVar55 * dVar81 + dVar44 * dVar72 + dVar33 * dVar80;
  dVar45 = dVar5 * dVar74 + dVar62 * dVar69 + dVar31 * auVar78._0_8_;
  dVar44 = dVar5 * dVar26 + dVar23 * dVar69 + dVar31 * dVar42;
  dVar55 = dVar5 * dVar81 + dVar69 * dVar72 + dVar33 * dVar31;
LAB_140a0a223:
  *pdVar2 = dVar28;
  pdVar2[1] = dVar35;
  pdVar2[2] = dVar25;
  pdVar2[3] = 0.0;
  pdVar2[4] = dVar45;
  pdVar2[5] = dVar44;
  pdVar2[6] = dVar55;
  pdVar2[7] = 0.0;
  pdVar2[8] = dVar79 * dVar74 + dVar60 + dVar70 * auVar78._0_8_;
  pdVar2[9] = dVar79 * dVar26 + dVar43 + dVar70 * dVar42;
  pdVar2[10] = dVar79 * dVar81 + dVar24 + dVar75;
  pdVar2[0xd] = 0.0;
  pdVar2[0xe] = 0.0;
  pdVar2[0xb] = 0.0;
  pdVar2[0xc] = 0.0;
  pdVar2[0xf] = 1.0;
  if (param_2 != 0) {
    local_1e8 = (double)((ulonglong)local_1e8 ^ (ulonglong)__xmm_80000000000000008000000000000000);
    local_1d8 = (double)((ulonglong)local_1d8 ^ (ulonglong)__xmm_80000000000000008000000000000000);
    dStack_1d0 = (double)((ulonglong)dStack_1d0 ^ (ulonglong)_UNK_15066df78);
  }
  *(double *)(param_1 + 0x420) = *(double *)(param_1 + 0x420) + local_1d8;
  *(double *)(param_1 + 0x428) = *(double *)(param_1 + 0x428) + dStack_1d0;
  *(double *)(param_1 + 0x430) = local_1e8 + *(double *)(param_1 + 0x430);
  return;
}

// ApplyPointPositionConstraintDD___un_3C_s_5B_unFPBDJointSolver_5D__3E_REFs_5B__c_unFVector_5D_Cund_sse4 @ 140a0a3c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPointPositionConstraintDD___un_3C_s_5B_unFPBDJointSolver_5D__3E_REFs_5B__c_unFVector_5D_Cund_sse4
               (double *param_1,double *param_2,double param_3,undefined1 (*param_4) [16])

{
  undefined1 auVar1 [16];
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
  undefined4 in_EAX;
  int iVar21;
  ulonglong uVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar38;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar39;
  double dVar40;
  undefined1 auVar42 [16];
  ulonglong uVar41;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  undefined1 auVar50 [16];
  double dVar52;
  undefined1 auVar51 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar60;
  undefined1 auVar59 [16];
  double dVar61;
  double dVar69;
  undefined1 auVar62 [16];
  double dVar70;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  double dVar71;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  double dVar78;
  double dVar79;
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  double dVar89;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined4 uVar90;
  undefined4 uVar91;
  double dVar92;
  double dVar93;
  double dVar94;
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  double dVar100;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  double dVar101;
  double dVar102;
  double dVar104;
  undefined1 auVar103 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 local_208 [12];
  undefined4 uStack_1fc;
  double dStack_1f0;
  undefined1 local_1e8 [12];
  undefined4 uStack_1dc;
  int local_1c8;
  int iStack_1c4;
  undefined8 uStack_1c0;
  double dStack_190;
  
  auVar73 = *param_4;
  iVar21 = movmskps(in_EAX,auVar73);
  if (iVar21 == 0xf) {
    dVar38 = param_1[0x20] - param_1[0x2e];
    dVar39 = param_1[0x21] - param_1[0x2f];
    dVar52 = param_1[0x22] - param_1[0x30];
    dVar28 = param_1[0x4d];
    dVar23 = param_1[0x4c];
    dVar79 = param_1[0x50];
    dVar30 = param_1[0x51];
    dVar78 = param_1[0x52];
    dVar71 = (double)((ulonglong)dVar38 ^ (ulonglong)__xmm_80000000000000008000000000000000);
    dVar92 = (dVar39 * dVar30 - dVar52 * dVar28) * dVar38 -
             (dVar39 * dVar79 - dVar52 * dVar23) * dVar39;
    dVar49 = (dVar39 * 0.0 - dVar52 * dVar28) * dVar39 - (dVar39 * 0.0 - dVar52 * dVar23) * dVar39;
    auVar73._8_4_ = SUB84(dVar49,0);
    auVar73._0_8_ = dVar92;
    auVar73._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
    dVar49 = param_1[0x48];
    dVar101 = param_1[0x1e];
    dVar104 = dVar71 * (dVar78 * dVar39 - dVar30 * dVar52) +
              dVar52 * (dVar79 * dVar39 - dVar23 * dVar52) + 0.0;
    auVar75._0_8_ =
         dVar71 * (dVar78 * dVar71 + dVar79 * dVar52) + dVar52 * (dVar79 * dVar71 + dVar52 * dVar49)
         + dVar101;
    auVar75._8_8_ =
         dVar38 * (dVar30 * dVar71 + dVar23 * dVar52) +
         (double)((ulonglong)dVar39 ^ (ulonglong)__xmm_80000000000000008000000000000000) *
         (dVar79 * dVar71 + dVar52 * param_1[0x48]) + 0.0;
    dVar27 = param_1[0x23] - param_1[0x31];
    dVar24 = param_1[0x24] - param_1[0x32];
    dVar29 = param_1[0x25] - param_1[0x33];
    dVar79 = param_1[0x5d];
    dVar71 = param_1[0x5c];
    dVar32 = param_1[0x61];
    dVar25 = param_1[0x60];
    dVar31 = param_1[0x62];
    dVar69 = (double)((ulonglong)__xmm_80000000000000008000000000000000 ^ (ulonglong)dVar27);
    local_208._0_8_ = param_1[0x58];
    auVar106._8_4_ = SUB84(dVar69,0);
    auVar106._0_8_ = dVar69;
    auVar106._12_4_ = (int)((ulonglong)dVar69 >> 0x20);
    stack0xfffffffffffffe20 = auVar73._8_8_;
    auVar96._0_8_ = dVar92 + 0.0;
    auVar96._8_8_ = stack0xfffffffffffffe20 + 0.0;
    dVar40 = dVar69 * (dVar31 * dVar24 - dVar32 * dVar29) +
             dVar29 * (dVar25 * dVar24 - dVar71 * dVar29) + 0.0;
    auVar98._0_8_ =
         dVar69 * (dVar31 * dVar69 + dVar25 * dVar29) +
         dVar29 * (dVar25 * dVar69 + dVar29 * (double)local_208._0_8_) + param_1[0x1f];
    auVar98._8_8_ =
         dVar27 * (dVar32 * auVar106._8_8_ + dVar71 * dVar29) +
         (double)((ulonglong)dVar24 ^ (ulonglong)__xmm_80000000000000008000000000000000) *
         (dVar25 * auVar106._8_8_ + dVar29 * (double)local_208._0_8_) + 0.0;
    dVar92 = param_1[0x1f];
    auVar43._0_8_ =
         ((dVar24 * dVar32 - dVar29 * dVar79) * dVar27 -
         (dVar24 * dVar25 - dVar29 * dVar71) * dVar24) + 0.0;
    auVar43._8_8_ =
         ((dVar24 * 0.0 - dVar29 * dVar79) * dVar24 - (dVar24 * 0.0 - dVar29 * dVar71) * dVar24) +
         0.0;
    dVar38 = ((dVar27 * dVar79 - dVar24 * dVar71) * dVar27 -
             (dVar27 * dVar71 - (double)local_208._0_8_ * dVar24) * dVar24) + dVar92 +
             ((dVar28 * dVar38 - dVar39 * dVar23) * dVar38 -
             (dVar38 * dVar23 - dVar49 * dVar39) * dVar39) + dVar101;
    dVar27 = dVar39 * (dVar78 * dVar39 - dVar30 * dVar52) +
             (double)((ulonglong)dVar52 ^ (ulonglong)__xmm_80000000000000008000000000000000) *
             (dVar30 * dVar39 - dVar28 * dVar52) + dVar101 +
             dVar24 * (dVar31 * dVar24 - dVar32 * dVar29) +
             (double)((ulonglong)dVar29 ^ (ulonglong)__xmm_80000000000000008000000000000000) *
             (dVar32 * dVar24 - dVar79 * dVar29) + param_1[0x1f];
    dVar24 = dVar104 + dVar40;
    dVar104 = dVar104 + dVar40;
    dVar28 = auVar75._0_8_ + auVar98._0_8_;
    auVar73 = blendpd(auVar75,auVar96,1);
    dVar30 = auVar96._0_8_ + auVar43._0_8_;
    dVar23 = auVar75._8_8_ + auVar98._8_8_;
    auVar96 = blendpd(auVar98,auVar43,1);
    auVar77._0_8_ = auVar73._0_8_ + auVar96._0_8_;
    auVar77._8_8_ = auVar73._8_8_ + auVar96._8_8_;
    auVar54._4_4_ = -(uint)(_UNK_150aa88b8 < (double)((ulonglong)dVar24 & _UNK_15061cc88));
    auVar54._0_4_ =
         -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <
                (double)((ulonglong)dVar27 & __xmm_7fffffffffffffff7fffffffffffffff));
    auVar54._8_4_ =
         -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <
                (double)((ulonglong)dVar30 & __xmm_7fffffffffffffff7fffffffffffffff));
    auVar54._12_4_ = -(uint)(_UNK_150aa88b8 < (double)(__real_0010000000000000 & _UNK_15061cc88));
    iVar21 = movmskps(0xf,auVar54);
    dVar49 = __real_3ff0000000000000;
    dVar101 = __real_3ff0000000000000;
    dVar78 = __real_3ff0000000000000;
    if (((iVar21 == 0) &&
        (auVar58._4_4_ = -(uint)(_UNK_150aa88b8 < (double)((ulonglong)dVar28 & _UNK_15061cc88)),
        auVar58._0_4_ =
             -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <
                    (double)((ulonglong)dVar104 & __xmm_7fffffffffffffff7fffffffffffffff)),
        auVar58._8_4_ =
             -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <
                    (double)((ulonglong)dVar23 & __xmm_7fffffffffffffff7fffffffffffffff)),
        auVar58._12_4_ =
             -(uint)(_UNK_150aa88b8 < (double)(__real_0010000000000000 & _UNK_15061cc88)),
        iVar21 = movmskps(0,auVar58), iVar21 == 0)) &&
       (auVar46._4_4_ =
             -(uint)(_UNK_150aa88b8 < (double)(_UNK_15061cc88 & (ulonglong)auVar77._8_8_)),
       auVar46._0_4_ =
            -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <
                   (double)(__xmm_7fffffffffffffff7fffffffffffffff & (ulonglong)auVar77._0_8_)),
       auVar46._8_4_ =
            -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <
                   (double)((ulonglong)dVar38 & __xmm_7fffffffffffffff7fffffffffffffff)),
       auVar46._12_4_ = -(uint)(_UNK_150aa88b8 < (double)(__real_0010000000000000 & _UNK_15061cc88))
       , iVar21 = movmskps(0,auVar46), iVar21 == 0)) {
      dVar39 = 0.0;
      dVar69 = 0.0;
      dVar38 = 0.0;
      dVar29 = 0.0;
      dVar40 = 0.0;
      dVar52 = 0.0;
    }
    else {
      dVar100 = dVar28 * dVar27 - dVar104 * dVar24;
      dVar60 = dVar30 * 0.0 - dVar23 * 0.0;
      dVar94 = auVar77._0_8_ * 0.0 - auVar77._8_8_ * 0.0;
      dVar61 = __real_3ff0000000000000 * dVar38 - 0.0;
      dVar39 = 0.0;
      auVar85._0_8_ = __xmm_80000000000000008000000000000000 * auVar77._0_8_ + dVar38 * 0.0;
      auVar85._8_8_ = _UNK_15066df78 * auVar77._8_8_ + dVar38 * 0.0;
      dVar70 = dVar27 * dVar23 - dVar104 * dVar30;
      dVar93 = dVar27 * 0.0 - dVar104 * 0.0;
      dVar89 = dVar28 * dVar30 - dVar24 * dVar23;
      dVar102 = dVar28 * 0.0 - dVar24 * 0.0;
      dVar52 = auVar77._0_8_ * dVar89 + auVar77._8_8_ * dVar70;
      dVar29 = auVar85._0_8_ * dVar102 + auVar85._8_8_ * dVar93;
      auVar65._0_8_ = (dVar94 * dVar60 + dVar100 * dVar61) - (dVar29 + dVar52);
      auVar65._8_8_ = (dVar94 * dVar60 + dVar100 * dVar61) - (dVar52 + dVar29);
      dVar69 = 0.0;
      dVar38 = 0.0;
      dVar29 = 0.0;
      dVar40 = 0.0;
      dVar52 = 0.0;
      if ((auVar65._0_8_ != 0.0) || (NAN(auVar65._0_8_))) {
        auVar47._0_8_ = dVar89 * 0.0;
        auVar47._8_8_ = dVar102 * 0.0;
        auVar12._8_4_ = SUB84(dVar93,0);
        auVar12._0_8_ = dVar70;
        auVar12._12_4_ = (int)((ulonglong)dVar93 >> 0x20);
        auVar43 = blendpd(auVar47,auVar12,1);
        auVar36._8_8_ = auVar85._8_8_;
        auVar36._0_8_ = auVar85._0_8_;
        auVar73 = blendpd(auVar36,auVar77,1);
        auVar54 = blendpd(auVar77,auVar85,1);
        auVar18._8_8_ = _UNK_15076c6f8;
        auVar18._0_8_ = ___xmm_bff00000000000003ff0000000000000;
        auVar96 = divpd(auVar18,auVar65);
        auVar16._8_8_ = _UNK_15076b868;
        auVar16._0_8_ = ___xmm_3ff0000000000000bff0000000000000;
        auVar75 = divpd(auVar16,auVar65);
        dVar52 = (dVar24 * dVar61 - (dVar30 * auVar54._8_8_ + auVar73._8_8_ * 0.0)) * auVar96._8_8_;
        dVar39 = auVar96._8_8_ * (dVar94 * 0.0 - (dVar24 * auVar77._0_8_ - dVar27 * auVar77._8_8_));
        dVar29 = (dVar104 * dVar61 - (auVar54._0_8_ * 0.0 + dVar23 * auVar73._0_8_)) * auVar75._0_8_
        ;
        dVar78 = auVar75._8_8_;
        dVar38 = (dVar60 * 0.0 - (dVar93 * 0.0 - auVar43._0_8_)) * auVar75._0_8_;
        dVar40 = (dVar60 * 0.0 - (dVar89 - auVar43._8_8_)) * dVar78;
        dVar69 = (dVar94 * 0.0 - (auVar77._0_8_ * dVar28 - dVar104 * auVar77._8_8_)) * dVar78;
        dVar49 = (dVar27 * dVar61 - (auVar54._0_8_ * 0.0 + dVar30 * auVar73._0_8_)) * auVar96._0_8_;
        dVar101 = dVar78 * (dVar100 - (dVar102 * 0.0 + dVar93 * 0.0));
        dVar78 = (dVar28 * dVar61 - (auVar54._8_8_ * dVar23 + auVar73._8_8_ * 0.0)) * dVar78;
      }
    }
    dVar28 = *param_2;
    dVar23 = param_2[1];
    dVar30 = param_2[2];
    local_1e8._0_8_ = param_3 * (dVar30 * dVar69 + dVar23 * dVar29 + dVar28 * dVar78);
    register0x00001348 = param_3 * (dVar30 * dVar39 + dVar23 * dVar49 + dVar28 * dVar52);
    param_3 = (dVar101 * dVar30 + dVar38 * dVar23 + dVar40 * dVar28) * param_3;
    dVar28 = param_1[0x1e];
    dVar23 = param_1[0x30];
    local_208._8_4_ = SUB84(param_1[0x59],0);
    uStack_1fc = (int)((ulonglong)param_1[0x59] >> 0x20);
    dVar49 = param_1[0x2e];
    dVar101 = param_1[0x2f];
    dVar30 = param_1[0x33];
    dVar104 = param_1[0x31];
    dVar27 = param_1[0x32];
    param_1[0x2e] = dVar28 * (double)local_1e8._0_8_ + dVar49;
    param_1[0x2f] = dVar28 * register0x00001348 + dVar101;
    param_1[0x30] = dVar28 * param_3 + dVar23;
    param_1[0x31] = dVar104 - dVar92 * (double)local_1e8._0_8_;
    param_1[0x32] = dVar27 - dVar92 * register0x00001348;
    param_1[0x33] = dVar30 - dVar92 * param_3;
    dVar39 = _UNK_15076c6f8;
    dVar38 = ___xmm_bff00000000000003ff0000000000000;
    dVar29 = _UNK_15076b868;
    dVar52 = ___xmm_3ff0000000000000bff0000000000000;
    dVar24 = _UNK_150689688;
    dVar92 = ___xmm_3ff00000000000003ff0000000000000;
    dVar78 = __real_3ff0000000000000;
    if (0.0 < dVar28) {
      dVar23 = param_1[0x22] - dVar23;
      dVar49 = param_1[0x20] - dVar49;
      dVar101 = param_1[0x21] - dVar101;
      dVar89 = register0x00001348 * dVar49 - dVar101 * (double)local_1e8._0_8_;
      dVar102 = param_3 * dVar101 - dVar23 * register0x00001348;
      dVar94 = (double)local_1e8._0_8_ * dVar23 - param_3 * dVar49;
      dVar40 = dVar89 * param_1[0x50] + dVar94 * param_1[0x4c] + param_1[0x48] * dVar102;
      dVar69 = dVar89 * param_1[0x51] + dVar94 * param_1[0x4d] + param_1[0x49] * dVar102;
      dVar28 = param_1[0x36];
      dVar23 = param_1[0x37];
      dVar49 = param_1[0x34];
      dVar101 = param_1[0x35];
      dVar94 = dVar89 * param_1[0x52] + param_1[0x4a] * dVar102 + dVar94 * param_1[0x4e];
      dVar89 = (param_1[0x35] * dVar94 * ___xmm_3ff0000000000000bff0000000000000 +
               dVar69 * dVar28 +
               dVar40 * param_1[0x37] * ___xmm_bff00000000000003ff0000000000000 + dVar49 * 0.0) *
               ___xmm_3fe00000000000003fe0000000000000 + dVar49;
      dVar102 = (param_1[0x34] * dVar94 * _UNK_15076b868 +
                dVar69 * dVar23 + dVar40 * param_1[0x36] * _UNK_15076c6f8 + dVar101 * 0.0) *
                _UNK_150689678 + dVar101;
      dVar28 = (param_1[0x37] * dVar94 * ___xmm_bff00000000000003ff0000000000000 +
               ((dVar40 * param_1[0x35] * ___xmm_bff00000000000003ff0000000000000 + dVar28 * 0.0) -
               dVar69 * dVar49)) * ___xmm_3fe00000000000003fe0000000000000 + dVar28;
      dVar23 = (param_1[0x36] * dVar94 * _UNK_15076c6f8 +
               ((dVar40 * param_1[0x34] * _UNK_15076c6f8 + dVar23 * 0.0) - dVar69 * dVar101)) *
               _UNK_150689678 + dVar23;
      dVar49 = dVar102 * dVar102 + dVar23 * dVar23 + dVar89 * dVar89 + dVar28 * dVar28;
      uVar41 = ~-(ulonglong)(dVar49 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
      dVar49 = __real_3ff0000000000000 / SQRT(dVar49);
      dVar69 = (double)((ulonglong)(dVar89 * dVar49) & uVar41);
      dVar89 = (double)((ulonglong)(dVar102 * dVar49) & uVar41);
      dVar101 = (double)(((ulonglong)(dVar28 * dVar49) ^ ___xmm_3ff00000000000000000000000000000) &
                        uVar41);
      auVar107._0_8_ = (double)(___xmm_3ff00000000000000000000000000000 ^ (ulonglong)dVar101);
      auVar107._8_8_ =
           (double)(_UNK_15061cbc8 ^ ((ulonglong)(dVar23 * dVar49) ^ _UNK_15061cbc8) & uVar41);
      param_1[0x34] = dVar69;
      param_1[0x35] = dVar89;
      *(undefined1 (*) [16])(param_1 + 0x36) = auVar107;
      auVar66._8_8_ = dVar89;
      auVar66._0_8_ = dVar69;
      auVar73 = blendpd(auVar66,auVar107,2);
      dVar40 = param_1[4] * auVar107._0_8_ - param_1[6] * auVar73._0_8_;
      dVar28 = param_1[5] * dVar69 - dVar89 * param_1[4];
      dVar23 = param_1[6] * dVar89 - auVar107._0_8_ * param_1[5];
      dVar40 = dVar40 + dVar40;
      dVar28 = dVar28 + dVar28;
      dVar23 = dVar23 + dVar23;
      auVar37._8_4_ = SUB84(auVar107._8_8_,0);
      auVar37._0_8_ = auVar107._8_8_;
      auVar37._12_4_ = (int)((ulonglong)auVar107._8_8_ >> 0x20);
      dVar49 = auVar37._8_8_;
      param_1[0x20] =
           param_1[0x2e] +
           (dVar28 * dVar89 - dVar40 * dVar101) + dVar23 * auVar107._8_8_ + param_1[4];
      param_1[0x21] =
           param_1[0x2f] + (dVar23 * dVar101 - dVar28 * dVar69) + dVar40 * dVar49 + param_1[5];
      param_1[0x22] =
           auVar107._8_8_ * dVar28 + param_1[6] + (dVar40 * dVar69 - dVar23 * dVar89) +
           param_1[0x30];
      auVar86._8_4_ = SUB84(dVar69,0);
      auVar86._0_8_ = dVar69;
      auVar86._12_4_ = (int)((ulonglong)dVar69 >> 0x20);
      dVar102 = auVar86._8_8_;
      auVar67._8_4_ = SUB84(auVar107._0_8_,0);
      auVar67._0_8_ = auVar107._0_8_;
      auVar67._12_4_ = (int)((ulonglong)auVar107._0_8_ >> 0x20);
      param_1[0x26] =
           param_1[1] * auVar107._0_8_ * dVar52 +
           param_1[2] * dVar89 + param_1[3] * dVar69 * dVar38 + *param_1 * auVar107._8_8_;
      param_1[0x27] =
           *param_1 * auVar67._8_8_ * dVar29 +
           param_1[3] * dVar89 + param_1[2] * dVar102 * dVar39 + param_1[1] * dVar49;
      param_1[0x28] =
           param_1[3] * auVar107._0_8_ * dVar38 +
           ((param_1[1] * dVar69 * dVar38 + param_1[2] * auVar107._8_8_) - *param_1 * dVar89);
      param_1[0x29] =
           param_1[2] * auVar67._8_8_ * dVar39 +
           ((*param_1 * dVar102 * dVar39 + param_1[3] * dVar49) - param_1[1] * dVar89);
      dVar28 = dVar89 + dVar89;
      dVar23 = auVar107._0_8_ + auVar107._0_8_;
      dVar39 = dVar69 * (dVar69 + dVar69);
      dVar102 = dVar102 * dVar28;
      dVar101 = (dVar69 + dVar69) * auVar107._8_8_;
      dVar40 = auVar107._8_8_ * dVar23 + dVar102;
      dVar29 = dVar101 + dVar89 * dVar23;
      dVar38 = dVar28 * dVar49 + dVar23 * dVar69;
      dVar101 = dVar89 * dVar23 - dVar101;
      dVar52 = dVar23 * dVar69 - dVar28 * dVar49;
      auVar87._0_8_ = dVar102 - auVar107._8_8_ * dVar23;
      auVar87._8_8_ = dVar102 - dVar49 * (auVar107._8_8_ + auVar107._8_8_);
      auVar103._0_8_ = dVar92 - (dVar23 * auVar107._0_8_ + dVar89 * dVar28);
      auVar103._8_8_ = dVar24 - (dVar23 * auVar107._0_8_ + dVar39);
      dVar78 = dVar78 - (dVar89 * dVar28 + dVar39);
      dVar28 = param_1[0x18];
      dVar23 = param_1[0x1a];
      dVar49 = param_1[0x19];
      auVar73 = blendpd(auVar103,auVar87,1);
      dVar89 = dVar38 * 0.0 + auVar87._0_8_ * 0.0 + auVar103._0_8_ * dVar28;
      dVar102 = dVar38 * 0.0 + auVar87._0_8_ * dVar49 + auVar103._0_8_ * 0.0;
      dVar70 = dVar23 * dVar38 +
               auVar87._0_8_ * 0.0 + auVar103._0_8_ * ___xmm_00000000000000000000000000000000;
      dVar92 = dVar101 * 0.0 + auVar103._8_8_ * 0.0 + dVar40 * dVar28;
      dVar24 = dVar101 * 0.0 + dVar49 * auVar103._8_8_ + dVar40 * 0.0;
      dVar69 = dVar23 * dVar101 + auVar103._8_8_ * 0.0 + dVar40 * 0.0;
      dVar39 = dVar78 * 0.0 + dVar29 * 0.0 + dVar28 * dVar52;
      dVar49 = dVar78 * 0.0 + dVar29 * dVar49 + dVar52 * 0.0;
      dVar94 = auVar73._0_8_;
      dVar61 = auVar73._8_8_;
      dVar28 = dVar23 * dVar78 + dVar29 * ___xmm_00000000000000000000000000000000 + dVar52 * 0.0;
      param_1[0x48] = dVar70 * dVar38 + dVar94 * dVar102 + dVar89 * auVar103._0_8_;
      param_1[0x49] = dVar70 * dVar101 + dVar61 * dVar102 + dVar89 * dVar40;
      param_1[0x4a] = dVar70 * dVar78 + dVar102 * dVar29 + dVar52 * dVar89;
      param_1[0x4b] = 0.0;
      param_1[0x4c] = dVar69 * dVar38 + dVar94 * dVar24 + dVar92 * auVar103._0_8_;
      param_1[0x4d] = dVar69 * dVar101 + dVar61 * dVar24 + dVar92 * dVar40;
      param_1[0x4e] = dVar69 * dVar78 + dVar24 * dVar29 + dVar52 * dVar92;
      param_1[0x4f] = 0.0;
      param_1[0x50] = dVar28 * dVar38 + dVar94 * dVar49 + dVar39 * auVar103._0_8_;
      param_1[0x51] = dVar28 * dVar101 + dVar61 * dVar49 + dVar39 * dVar40;
      param_1[0x52] = dVar28 * dVar78 + dVar49 * dVar29 + dVar52 * dVar39;
      param_1[0x55] = 0.0;
      param_1[0x56] = 0.0;
      param_1[0x53] = 0.0;
      param_1[0x54] = 0.0;
      param_1[0x57] = 1.0;
    }
    dVar24 = _UNK_15076c6f8;
    dVar92 = ___xmm_bff00000000000003ff0000000000000;
    dVar101 = _UNK_15076b868;
    dVar49 = ___xmm_3ff0000000000000bff0000000000000;
    dVar78 = _UNK_150689688;
    dVar23 = ___xmm_3ff00000000000003ff0000000000000;
    dVar28 = __real_3ff0000000000000;
    if (__real_0000000000000000 < param_1[0x1f]) {
      dVar104 = param_1[0x23] - dVar104;
      dVar27 = param_1[0x24] - dVar27;
      dVar30 = param_1[0x25] - dVar30;
      dVar52 = dVar27 * (double)local_1e8._0_8_ - register0x00001348 * dVar104;
      dVar27 = dVar30 * register0x00001348 - param_3 * dVar27;
      dVar30 = param_3 * dVar104 - dVar30 * (double)local_1e8._0_8_;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = dVar31;
      auVar73 = blendpd(_local_1e8,auVar20,1);
      dVar31 = dVar52 * dVar25 + (double)local_208._0_8_ * dVar27 + dVar30 * dVar71;
      dVar104 = dVar52 * dVar32 + stack0xfffffffffffffe00 * dVar27 + dVar30 * dVar79;
      dVar25 = auVar73._0_8_ * dVar52 + dVar30 * param_1[0x5e] + param_1[0x5a] * dVar27;
      dVar79 = param_1[0x3a];
      dVar30 = param_1[0x3b];
      dVar71 = param_1[0x38];
      dVar32 = param_1[0x39];
      dVar27 = (param_1[0x39] * dVar25 * ___xmm_3ff0000000000000bff0000000000000 +
               dVar104 * dVar79 +
               dVar31 * param_1[0x3b] * ___xmm_bff00000000000003ff0000000000000 + dVar71 * 0.0) *
               ___xmm_3fe00000000000003fe0000000000000 + dVar71;
      dVar29 = (param_1[0x38] * dVar25 * _UNK_15076b868 +
               dVar104 * dVar30 + dVar31 * param_1[0x3a] * _UNK_15076c6f8 + dVar32 * 0.0) *
               _UNK_150689678 + dVar32;
      dVar79 = (param_1[0x3b] * dVar25 * ___xmm_bff00000000000003ff0000000000000 +
               ((dVar31 * param_1[0x39] * ___xmm_bff00000000000003ff0000000000000 + dVar79 * 0.0) -
               dVar104 * dVar71)) * ___xmm_3fe00000000000003fe0000000000000 + dVar79;
      dVar30 = (param_1[0x3a] * dVar25 * _UNK_15076c6f8 +
               ((dVar31 * param_1[0x38] * _UNK_15076c6f8 + dVar30 * 0.0) - dVar104 * dVar32)) *
               _UNK_150689678 + dVar30;
      dVar71 = dVar29 * dVar29 + dVar30 * dVar30 + dVar27 * dVar27 + dVar79 * dVar79;
      uVar41 = ~-(ulonglong)(dVar71 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
      dVar71 = __real_3ff0000000000000 / SQRT(dVar71);
      dVar52 = (double)((ulonglong)(dVar27 * dVar71) & uVar41);
      dVar29 = (double)((ulonglong)(dVar29 * dVar71) & uVar41);
      dVar31 = (double)(((ulonglong)(dVar79 * dVar71) ^ ___xmm_3ff00000000000000000000000000000) &
                       uVar41);
      dVar79 = (double)(___xmm_3ff00000000000000000000000000000 ^ (ulonglong)dVar31);
      dVar30 = (double)(_UNK_15061cbc8 ^ ((ulonglong)(dVar30 * dVar71) ^ _UNK_15061cbc8) & uVar41);
      uVar90 = SUB84(dVar30,0);
      uVar91 = (undefined4)((ulonglong)dVar30 >> 0x20);
      param_1[0x38] = dVar52;
      param_1[0x39] = dVar29;
      auVar5._8_4_ = uVar90;
      auVar5._0_8_ = dVar79;
      auVar5._12_4_ = uVar91;
      *(undefined1 (*) [16])(param_1 + 0x3a) = auVar5;
      auVar51._8_8_ = dVar29;
      auVar51._0_8_ = dVar52;
      auVar6._8_4_ = uVar90;
      auVar6._0_8_ = dVar79;
      auVar6._12_4_ = uVar91;
      auVar73 = blendpd(auVar51,auVar6,2);
      dVar25 = param_1[0x10] * dVar79 - param_1[0x12] * auVar73._0_8_;
      dVar71 = param_1[0x11] * dVar52 - dVar29 * param_1[0x10];
      dVar32 = param_1[0x12] * dVar29 - dVar79 * param_1[0x11];
      dVar25 = dVar25 + dVar25;
      dVar71 = dVar71 + dVar71;
      dVar32 = dVar32 + dVar32;
      auVar99._8_4_ = uVar90;
      auVar99._0_8_ = dVar30;
      auVar99._12_4_ = uVar91;
      dVar38 = auVar99._8_8_;
      param_1[0x23] =
           param_1[0x31] + (dVar71 * dVar29 - dVar25 * dVar31) + dVar32 * dVar30 + param_1[0x10];
      param_1[0x24] =
           param_1[0x32] + (dVar32 * dVar31 - dVar71 * dVar52) + dVar25 * dVar38 + param_1[0x11];
      param_1[0x25] =
           dVar30 * dVar71 + param_1[0x12] + (dVar25 * dVar52 - dVar32 * dVar29) + param_1[0x33];
      auVar48._8_4_ = SUB84(dVar52,0);
      auVar48._0_8_ = dVar52;
      auVar48._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
      dVar25 = auVar48._8_8_;
      auVar88._8_4_ = SUB84(dVar29,0);
      auVar88._0_8_ = dVar29;
      auVar88._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
      auVar59._8_4_ = SUB84(dVar79,0);
      auVar59._0_8_ = dVar79;
      auVar59._12_4_ = (int)((ulonglong)dVar79 >> 0x20);
      param_1[0x2a] =
           param_1[0xd] * dVar79 * dVar49 +
           param_1[0xe] * dVar29 + param_1[0xf] * dVar52 * dVar92 + param_1[0xc] * dVar30;
      param_1[0x2b] =
           param_1[0xc] * auVar59._8_8_ * dVar101 +
           param_1[0xf] * auVar88._8_8_ + param_1[0xe] * dVar25 * dVar24 + param_1[0xd] * dVar38;
      param_1[0x2c] =
           param_1[0xf] * dVar79 * dVar92 +
           ((param_1[0xd] * dVar52 * dVar92 + param_1[0xe] * dVar30) - param_1[0xc] * dVar29);
      param_1[0x2d] =
           param_1[0xe] * auVar59._8_8_ * dVar24 +
           ((param_1[0xc] * dVar25 * dVar24 + param_1[0xf] * dVar38) - param_1[0xd] * auVar88._8_8_)
      ;
      dVar49 = dVar29 + dVar29;
      dVar92 = dVar79 + dVar79;
      dVar27 = dVar52 * (dVar52 + dVar52);
      dVar25 = dVar25 * dVar49;
      dVar104 = (dVar52 + dVar52) * dVar30;
      dVar31 = dVar30 * dVar92 + dVar25;
      dVar101 = dVar104 + dVar29 * dVar92;
      dVar71 = dVar49 * dVar38 + dVar92 * dVar52;
      dVar104 = dVar29 * dVar92 - dVar104;
      dVar52 = dVar92 * dVar52 - dVar49 * dVar38;
      dVar32 = dVar25 - dVar30 * dVar92;
      dVar25 = dVar25 - dVar38 * (dVar30 + dVar30);
      dVar23 = dVar23 - (dVar92 * dVar79 + dVar29 * dVar49);
      dVar78 = dVar78 - (dVar92 * dVar79 + dVar27);
      dVar28 = dVar28 - (dVar29 * dVar49 + dVar27);
      auVar68._8_8_ = dVar78;
      auVar68._0_8_ = dVar23;
      dVar79 = param_1[0x1b];
      dVar30 = param_1[0x1d];
      dVar49 = param_1[0x1c];
      auVar7._8_4_ = SUB84(dVar25,0);
      auVar7._0_8_ = dVar32;
      auVar7._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
      auVar73 = blendpd(auVar68,auVar7,1);
      dVar38 = dVar71 * 0.0 + dVar32 * 0.0 + dVar23 * dVar79;
      dVar39 = dVar71 * 0.0 + dVar32 * dVar49 + dVar23 * 0.0;
      dVar32 = dVar30 * dVar71 + dVar32 * 0.0 + dVar23 * ___xmm_00000000000000000000000000000000;
      dVar25 = dVar104 * 0.0 + dVar78 * 0.0 + dVar31 * dVar79;
      dVar92 = dVar104 * 0.0 + dVar49 * dVar78 + dVar31 * 0.0;
      dVar29 = dVar30 * dVar104 + dVar78 * 0.0 + dVar31 * 0.0;
      dVar78 = dVar28 * 0.0 + dVar101 * 0.0 + dVar79 * dVar52;
      dVar49 = dVar28 * 0.0 + dVar101 * dVar49 + dVar52 * 0.0;
      dVar27 = auVar73._0_8_;
      dVar24 = auVar73._8_8_;
      dVar30 = dVar30 * dVar28 + dVar101 * ___xmm_00000000000000000000000000000000 + dVar52 * 0.0;
      dVar79 = dVar32 * dVar104 + dVar24 * dVar39 + dVar38 * dVar31;
      auVar4._8_4_ = SUB84(dVar79,0);
      auVar4._0_8_ = dVar32 * dVar71 + dVar27 * dVar39 + dVar38 * dVar23;
      auVar4._12_4_ = (int)((ulonglong)dVar79 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0x58) = auVar4;
      param_1[0x5a] = dVar32 * dVar28 + dVar39 * dVar101 + dVar52 * dVar38;
      param_1[0x5b] = 0.0;
      param_1[0x5c] = dVar29 * dVar71 + dVar27 * dVar92 + dVar25 * dVar23;
      param_1[0x5d] = dVar29 * dVar104 + dVar24 * dVar92 + dVar25 * dVar31;
      param_1[0x5e] = dVar29 * dVar28 + dVar92 * dVar101 + dVar52 * dVar25;
      param_1[0x5f] = 0.0;
      param_1[0x60] = dVar30 * dVar71 + dVar27 * dVar49 + dVar78 * dVar23;
      param_1[0x61] = dVar30 * dVar104 + dVar24 * dVar49 + dVar78 * dVar31;
      param_1[0x62] = dVar30 * dVar28 + dVar49 * dVar101 + dVar52 * dVar78;
      param_1[0x65] = 0.0;
      param_1[0x66] = 0.0;
      param_1[99] = 0.0;
      param_1[100] = 0.0;
      param_1[0x67] = 1.0;
    }
    uVar41 = __real_bff0000000000000;
    dVar28 = __real_3ff0000000000000;
    uVar22 = -(ulonglong)
              (0.0 <= param_1[0x35] * param_1[0x39] + param_1[0x37] * param_1[0x3b] +
                      param_1[0x34] * param_1[0x38] + param_1[0x36] * param_1[0x3a]);
    dVar23 = (double)(~uVar22 & __real_bff0000000000000 |
                     uVar22 & (ulonglong)__real_3ff0000000000000);
    param_1[0x38] = param_1[0x38] * dVar23;
    param_1[0x39] = param_1[0x39] * dVar23;
    param_1[0x3a] = param_1[0x3a] * dVar23;
    param_1[0x3b] = param_1[0x3b] * dVar23;
    uVar22 = -(ulonglong)
              (0.0 <= param_1[0x27] * param_1[0x2b] + param_1[0x29] * param_1[0x2d] +
                      param_1[0x26] * param_1[0x2a] + param_1[0x28] * param_1[0x2c]);
    dVar28 = (double)(~uVar22 & uVar41 | (ulonglong)dVar28 & uVar22);
    param_1[0x2a] = param_1[0x2a] * dVar28;
    param_1[0x2b] = param_1[0x2b] * dVar28;
    param_1[0x2c] = param_1[0x2c] * dVar28;
    param_1[0x2d] = param_1[0x2d] * dVar28;
    param_1[0x84] = (double)local_1e8._0_8_ + param_1[0x84];
    param_1[0x85] = register0x00001348 + param_1[0x85];
    param_1[0x86] = param_3 + param_1[0x86];
  }
  else {
    dVar104 = param_1[0x20] - param_1[0x2e];
    dVar27 = param_1[0x21] - param_1[0x2f];
    dVar39 = param_1[0x22] - param_1[0x30];
    dVar28 = param_1[0x4d];
    dVar23 = param_1[0x4c];
    dVar79 = param_1[0x50];
    dVar30 = param_1[0x51];
    dVar78 = param_1[0x52];
    dVar71 = (double)((ulonglong)dVar104 ^ (ulonglong)__xmm_80000000000000008000000000000000);
    dVar52 = (dVar27 * dVar30 - dVar39 * dVar28) * dVar104 -
             (dVar27 * dVar79 - dVar39 * dVar23) * dVar27;
    dVar49 = (dVar27 * 0.0 - dVar39 * dVar28) * dVar27 - (dVar27 * 0.0 - dVar39 * dVar23) * dVar27;
    auVar13._8_4_ = SUB84(dVar49,0);
    auVar13._0_8_ = dVar52;
    auVar13._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
    dVar49 = param_1[0x48];
    dVar101 = param_1[0x1e];
    dVar24 = dVar71 * (dVar78 * dVar27 - dVar30 * dVar39) +
             dVar39 * (dVar79 * dVar27 - dVar23 * dVar39) + 0.0;
    auVar72._0_8_ =
         dVar71 * (dVar78 * dVar71 + dVar79 * dVar39) + dVar39 * (dVar79 * dVar71 + dVar39 * dVar49)
         + dVar101;
    auVar72._8_8_ =
         dVar104 * (dVar30 * dVar71 + dVar23 * dVar39) +
         (double)((ulonglong)dVar27 ^ (ulonglong)__xmm_80000000000000008000000000000000) *
         (dVar79 * dVar71 + dVar39 * param_1[0x48]) + 0.0;
    dVar29 = param_1[0x23] - param_1[0x31];
    dVar38 = param_1[0x24] - param_1[0x32];
    dVar40 = param_1[0x25] - param_1[0x33];
    dVar79 = param_1[0x5d];
    dVar71 = param_1[0x5c];
    dVar32 = param_1[0x61];
    dVar25 = param_1[0x60];
    dVar31 = param_1[0x62];
    dVar92 = (double)((ulonglong)__xmm_80000000000000008000000000000000 ^ (ulonglong)dVar29);
    local_1e8._0_8_ = param_1[0x58];
    auVar105._8_4_ = SUB84(dVar92,0);
    auVar105._0_8_ = dVar92;
    auVar105._12_4_ = (int)((ulonglong)dVar92 >> 0x20);
    local_1c8 = auVar73._0_4_;
    iStack_1c4 = auVar73._4_4_;
    uStack_1c0._0_4_ = auVar73._8_4_;
    uStack_1c0._4_4_ = auVar73._12_4_;
    dStack_1f0 = auVar13._8_8_;
    dVar52 = dVar52 + 0.0;
    dVar69 = dVar92 * (dVar31 * dVar38 - dVar32 * dVar40) +
             dVar40 * (dVar25 * dVar38 - dVar71 * dVar40) + 0.0;
    auVar95._0_8_ =
         dVar92 * (dVar31 * dVar92 + dVar25 * dVar40) +
         dVar40 * (dVar25 * dVar92 + dVar40 * (double)local_1e8._0_8_) + param_1[0x1f];
    auVar95._8_8_ =
         dVar29 * (dVar32 * auVar105._8_8_ + dVar71 * dVar40) +
         (double)((ulonglong)dVar38 ^ (ulonglong)__xmm_80000000000000008000000000000000) *
         (dVar25 * auVar105._8_8_ + dVar40 * (double)local_1e8._0_8_) + 0.0;
    dVar92 = param_1[0x1f];
    auVar50._0_8_ =
         ((dVar38 * dVar32 - dVar40 * dVar79) * dVar29 -
         (dVar38 * dVar25 - dVar40 * dVar71) * dVar38) + 0.0;
    auVar50._8_8_ =
         ((dVar38 * 0.0 - dVar40 * dVar79) * dVar38 - (dVar38 * 0.0 - dVar40 * dVar71) * dVar38) +
         0.0;
    dVar29 = ((dVar29 * dVar79 - dVar38 * dVar71) * dVar29 -
             (dVar29 * dVar71 - (double)local_1e8._0_8_ * dVar38) * dVar38) + dVar92 +
             ((dVar28 * dVar104 - dVar27 * dVar23) * dVar104 -
             (dVar104 * dVar23 - dVar49 * dVar27) * dVar27) + dVar101;
    dVar101 = dVar27 * (dVar78 * dVar27 - dVar30 * dVar39) +
              (double)((ulonglong)dVar39 ^ (ulonglong)__xmm_80000000000000008000000000000000) *
              (dVar30 * dVar27 - dVar28 * dVar39) + dVar101 +
              dVar38 * (dVar31 * dVar38 - dVar32 * dVar40) +
              (double)((ulonglong)dVar40 ^ (ulonglong)__xmm_80000000000000008000000000000000) *
              (dVar32 * dVar38 - dVar79 * dVar40) + param_1[0x1f];
    dVar104 = dVar24 + dVar69;
    dVar24 = dVar24 + dVar69;
    dVar23 = auVar72._0_8_ + auVar95._0_8_;
    auVar10._8_4_ = SUB84(dStack_1f0 + 0.0,0);
    auVar10._0_8_ = dVar52;
    auVar10._12_4_ = (int)((ulonglong)(dStack_1f0 + 0.0) >> 0x20);
    auVar73 = blendpd(auVar72,auVar10,1);
    dVar52 = dVar52 + auVar50._0_8_;
    dVar28 = auVar72._8_8_ + auVar95._8_8_;
    auVar96 = blendpd(auVar95,auVar50,1);
    auVar74._0_8_ = auVar73._0_8_ + auVar96._0_8_;
    auVar74._8_8_ = auVar73._8_8_ + auVar96._8_8_;
    auVar53._4_4_ = -(uint)(_UNK_150aa88b8 < (double)((ulonglong)dVar104 & _UNK_15061cc88));
    auVar53._0_4_ =
         -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <
                (double)((ulonglong)dVar101 & __xmm_7fffffffffffffff7fffffffffffffff));
    auVar53._8_4_ =
         -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <
                (double)((ulonglong)dVar52 & __xmm_7fffffffffffffff7fffffffffffffff));
    auVar53._12_4_ = -(uint)(_UNK_150aa88b8 < (double)(__real_0010000000000000 & _UNK_15061cc88));
    auVar26._0_4_ = -(uint)(local_1c8 == 0);
    auVar26._4_4_ = -(uint)(iStack_1c4 == 0);
    auVar26._8_4_ = -(uint)((int)uStack_1c0 == 0);
    auVar26._12_4_ = -(uint)(uStack_1c0._4_4_ == 0);
    iVar21 = movmskps(iVar21,~auVar26 & auVar53);
    dVar78 = __real_3ff0000000000000;
    dVar49 = __real_3ff0000000000000;
    dVar30 = __real_3ff0000000000000;
    if (((iVar21 == 0) &&
        (auVar62._4_4_ = -(uint)(_UNK_150aa88b8 < (double)((ulonglong)dVar23 & _UNK_15061cc88)),
        auVar62._0_4_ =
             -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <
                    (double)((ulonglong)dVar24 & __xmm_7fffffffffffffff7fffffffffffffff)),
        auVar62._8_4_ =
             -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <
                    (double)((ulonglong)dVar28 & __xmm_7fffffffffffffff7fffffffffffffff)),
        auVar62._12_4_ =
             -(uint)(_UNK_150aa88b8 < (double)(__real_0010000000000000 & _UNK_15061cc88)),
        iVar21 = movmskps(0,~auVar26 & auVar62), iVar21 == 0)) &&
       (auVar80._0_4_ = -(uint)(local_1c8 == 0), auVar80._4_4_ = -(uint)(iStack_1c4 == 0),
       auVar80._8_4_ = -(uint)((int)uStack_1c0 == 0),
       auVar80._12_4_ = -(uint)(uStack_1c0._4_4_ == 0),
       auVar33._4_4_ = -(uint)(_UNK_150aa88b8 < (double)(_UNK_15061cc88 & (ulonglong)auVar74._8_8_))
       , auVar33._0_4_ =
              -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <
                     (double)(__xmm_7fffffffffffffff7fffffffffffffff & (ulonglong)auVar74._0_8_)),
       auVar33._8_4_ =
            -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <
                   (double)((ulonglong)dVar29 & __xmm_7fffffffffffffff7fffffffffffffff)),
       auVar33._12_4_ = -(uint)(_UNK_150aa88b8 < (double)(__real_0010000000000000 & _UNK_15061cc88))
       , iVar21 = movmskps(0,~auVar80 & auVar33), iVar21 == 0)) {
      dVar38 = 0.0;
      dVar40 = 0.0;
      dVar23 = 0.0;
      dVar29 = 0.0;
      dVar27 = 0.0;
      dVar39 = 0.0;
    }
    else {
      dVar61 = dVar23 * dVar101 - dVar24 * dVar104;
      dVar70 = dVar52 * 0.0 - dVar28 * 0.0;
      dVar69 = auVar74._0_8_ * 0.0 - auVar74._8_8_ * 0.0;
      dVar89 = __real_3ff0000000000000 * dVar29 - 0.0;
      dVar38 = 0.0;
      auVar81._0_8_ = __xmm_80000000000000008000000000000000 * auVar74._0_8_ + dVar29 * 0.0;
      auVar81._8_8_ = _UNK_15066df78 * auVar74._8_8_ + dVar29 * 0.0;
      dVar102 = dVar101 * dVar28 - dVar24 * dVar52;
      dVar94 = dVar101 * 0.0 - dVar24 * 0.0;
      dVar93 = dVar23 * dVar52 - dVar104 * dVar28;
      dVar100 = dVar23 * 0.0 - dVar104 * 0.0;
      auVar8._8_4_ = SUB84(dVar23,0);
      auVar8._0_8_ = dVar24;
      auVar8._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
      dVar23 = auVar74._0_8_ * dVar93 + auVar74._8_8_ * dVar102;
      dVar27 = auVar81._0_8_ * dVar100 + auVar81._8_8_ * dVar94;
      auVar63._0_8_ = (dVar69 * dVar70 + dVar61 * dVar89) - (dVar27 + dVar23);
      auVar63._8_8_ = (dVar69 * dVar70 + dVar61 * dVar89) - (dVar23 + dVar27);
      dVar40 = 0.0;
      dVar23 = 0.0;
      dVar29 = 0.0;
      dVar27 = 0.0;
      dVar39 = 0.0;
      if ((auVar63._0_8_ != 0.0) || (NAN(auVar63._0_8_))) {
        uStack_1c0 = auVar8._8_8_;
        auVar42._0_8_ = dVar93 * 0.0;
        auVar42._8_8_ = dVar100 * 0.0;
        auVar11._8_4_ = SUB84(dVar94,0);
        auVar11._0_8_ = dVar102;
        auVar11._12_4_ = (int)((ulonglong)dVar94 >> 0x20);
        auVar96 = blendpd(auVar42,auVar11,1);
        auVar34._8_8_ = auVar81._8_8_;
        auVar34._0_8_ = auVar81._0_8_;
        auVar73 = blendpd(auVar34,auVar74,1);
        auVar75 = blendpd(auVar74,auVar81,1);
        auVar17._8_8_ = _UNK_15076c6f8;
        auVar17._0_8_ = ___xmm_bff00000000000003ff0000000000000;
        auVar43 = divpd(auVar17,auVar63);
        auVar15._8_8_ = _UNK_15076b868;
        auVar15._0_8_ = ___xmm_3ff0000000000000bff0000000000000;
        auVar54 = divpd(auVar15,auVar63);
        dVar39 = (dVar104 * dVar89 - (dVar52 * auVar75._8_8_ + auVar73._8_8_ * 0.0)) * auVar43._8_8_
        ;
        dVar38 = auVar43._8_8_ *
                 (dVar69 * 0.0 - (dVar104 * auVar74._0_8_ - dVar101 * auVar74._8_8_));
        dVar29 = (dVar24 * dVar89 - (auVar75._0_8_ * 0.0 + dVar28 * auVar73._0_8_)) * auVar54._0_8_;
        dVar30 = auVar54._8_8_;
        dVar23 = (dVar70 * 0.0 - (dVar94 * 0.0 - auVar96._0_8_)) * auVar54._0_8_;
        dVar27 = (dVar70 * 0.0 - (dVar93 - auVar96._8_8_)) * dVar30;
        dVar40 = (dVar69 * 0.0 - (auVar74._0_8_ * uStack_1c0 - dVar24 * auVar74._8_8_)) * dVar30;
        dVar78 = dVar30 * (dVar61 - (dVar100 * 0.0 + dVar94 * 0.0));
        dVar49 = (dVar101 * dVar89 - (auVar75._0_8_ * 0.0 + dVar52 * auVar73._0_8_)) * auVar43._0_8_
        ;
        dVar30 = (uStack_1c0 * dVar89 - (auVar75._8_8_ * dVar28 + auVar73._8_8_ * 0.0)) * dVar30;
      }
    }
    dVar28 = *param_2;
    dVar101 = param_2[1];
    dVar104 = param_2[2];
    local_208._0_8_ = param_3 * (dVar104 * dVar40 + dVar101 * dVar29 + dVar28 * dVar30);
    register0x00001388 = param_3 * (dVar104 * dVar38 + dVar101 * dVar49 + dVar28 * dVar39);
    param_3 = (dVar78 * dVar104 + dVar23 * dVar101 + dVar27 * dVar28) * param_3;
    dVar28 = param_1[0x1e];
    dVar23 = param_1[0x30];
    local_1e8._8_4_ = SUB84(param_1[0x59],0);
    uStack_1dc = (int)((ulonglong)param_1[0x59] >> 0x20);
    dVar49 = param_1[0x2e];
    dVar101 = param_1[0x2f];
    dVar30 = param_1[0x33];
    dVar104 = param_1[0x32];
    param_1[0x2e] = dVar28 * (double)local_208._0_8_ + dVar49;
    param_1[0x2f] = dVar28 * register0x00001388 + dVar101;
    dVar78 = param_1[0x31] - dVar92 * (double)local_208._0_8_;
    auVar9._8_4_ = SUB84(dVar78,0);
    auVar9._0_8_ = dVar28 * param_3 + dVar23;
    auVar9._12_4_ = (int)((ulonglong)dVar78 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x30) = auVar9;
    param_1[0x32] = dVar104 - dVar92 * register0x00001388;
    param_1[0x33] = dVar30 - dVar92 * param_3;
    dVar38 = _UNK_15076c6f8;
    dVar29 = ___xmm_bff00000000000003ff0000000000000;
    dVar52 = _UNK_15076b868;
    dVar24 = ___xmm_3ff0000000000000bff0000000000000;
    dVar27 = _UNK_150689688;
    dVar92 = ___xmm_3ff00000000000003ff0000000000000;
    dVar78 = __real_3ff0000000000000;
    if (0.0 < dVar28) {
      dVar23 = param_1[0x22] - dVar23;
      dVar49 = param_1[0x20] - dVar49;
      dVar101 = param_1[0x21] - dVar101;
      dVar69 = register0x00001388 * dVar49 - dVar101 * (double)local_208._0_8_;
      dVar89 = param_3 * dVar101 - dVar23 * register0x00001388;
      dVar102 = (double)local_208._0_8_ * dVar23 - param_3 * dVar49;
      dVar39 = dVar69 * param_1[0x50] + dVar102 * param_1[0x4c] + param_1[0x48] * dVar89;
      dVar40 = dVar69 * param_1[0x51] + dVar102 * param_1[0x4d] + param_1[0x49] * dVar89;
      dVar28 = param_1[0x36];
      dVar23 = param_1[0x37];
      dVar49 = param_1[0x34];
      dVar101 = param_1[0x35];
      dVar102 = dVar69 * param_1[0x52] + param_1[0x4a] * dVar89 + dVar102 * param_1[0x4e];
      dVar69 = (param_1[0x35] * dVar102 * ___xmm_3ff0000000000000bff0000000000000 +
               dVar40 * dVar28 +
               dVar39 * param_1[0x37] * ___xmm_bff00000000000003ff0000000000000 + dVar49 * 0.0) *
               ___xmm_3fe00000000000003fe0000000000000 + dVar49;
      dVar89 = (param_1[0x34] * dVar102 * _UNK_15076b868 +
               dVar40 * dVar23 + dVar39 * param_1[0x36] * _UNK_15076c6f8 + dVar101 * 0.0) *
               _UNK_150689678 + dVar101;
      dVar28 = (param_1[0x37] * dVar102 * ___xmm_bff00000000000003ff0000000000000 +
               ((dVar39 * param_1[0x35] * ___xmm_bff00000000000003ff0000000000000 + dVar28 * 0.0) -
               dVar40 * dVar49)) * ___xmm_3fe00000000000003fe0000000000000 + dVar28;
      dVar23 = (param_1[0x36] * dVar102 * _UNK_15076c6f8 +
               ((dVar39 * param_1[0x34] * _UNK_15076c6f8 + dVar23 * 0.0) - dVar40 * dVar101)) *
               _UNK_150689678 + dVar23;
      dVar49 = dVar89 * dVar89 + dVar23 * dVar23 + dVar69 * dVar69 + dVar28 * dVar28;
      uVar41 = ~-(ulonglong)(dVar49 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
      dVar49 = __real_3ff0000000000000 / SQRT(dVar49);
      dVar40 = (double)((ulonglong)(dVar69 * dVar49) & uVar41);
      dVar69 = (double)((ulonglong)(dVar89 * dVar49) & uVar41);
      dVar28 = (double)(((ulonglong)(dVar28 * dVar49) ^ ___xmm_3ff00000000000000000000000000000) &
                       uVar41);
      auVar35._0_8_ = (double)(___xmm_3ff00000000000000000000000000000 ^ (ulonglong)dVar28);
      auVar35._8_8_ =
           (double)(_UNK_15061cbc8 ^ ((ulonglong)(dVar23 * dVar49) ^ _UNK_15061cbc8) & uVar41);
      param_1[0x34] = dVar40;
      param_1[0x35] = dVar69;
      *(undefined1 (*) [16])(param_1 + 0x36) = auVar35;
      auVar64._8_8_ = dVar69;
      auVar64._0_8_ = dVar40;
      auVar73 = blendpd(auVar64,auVar35,2);
      dVar23 = param_1[4] * auVar35._0_8_ - param_1[6] * auVar73._0_8_;
      dVar101 = param_1[5] * dVar40 - dVar69 * param_1[4];
      dVar39 = param_1[6] * dVar69 - auVar35._0_8_ * param_1[5];
      dVar23 = dVar23 + dVar23;
      dVar101 = dVar101 + dVar101;
      dVar39 = dVar39 + dVar39;
      auVar44._8_4_ = SUB84(auVar35._8_8_,0);
      auVar44._0_8_ = auVar35._8_8_;
      auVar44._12_4_ = (int)((ulonglong)auVar35._8_8_ >> 0x20);
      dVar49 = auVar44._8_8_;
      param_1[0x20] =
           param_1[0x2e] +
           (dVar101 * dVar69 - dVar23 * dVar28) + dVar39 * auVar35._8_8_ + param_1[4];
      param_1[0x21] =
           param_1[0x2f] + (dVar39 * dVar28 - dVar101 * dVar40) + dVar23 * dVar49 + param_1[5];
      param_1[0x22] =
           auVar35._8_8_ * dVar101 + param_1[6] + (dVar23 * dVar40 - dVar39 * dVar69) +
           param_1[0x30];
      auVar82._8_4_ = SUB84(dVar40,0);
      auVar82._0_8_ = dVar40;
      auVar82._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
      dVar39 = auVar82._8_8_;
      auVar76._8_4_ = SUB84(auVar35._0_8_,0);
      auVar76._0_8_ = auVar35._0_8_;
      auVar76._12_4_ = (int)((ulonglong)auVar35._0_8_ >> 0x20);
      param_1[0x26] =
           param_1[1] * auVar35._0_8_ * dVar24 +
           param_1[2] * dVar69 + param_1[3] * dVar40 * dVar29 + *param_1 * auVar35._8_8_;
      param_1[0x27] =
           *param_1 * auVar76._8_8_ * dVar52 +
           param_1[3] * dVar69 + param_1[2] * dVar39 * dVar38 + param_1[1] * dVar49;
      param_1[0x28] =
           param_1[3] * auVar35._0_8_ * dVar29 +
           ((param_1[1] * dVar40 * dVar29 + param_1[2] * auVar35._8_8_) - *param_1 * dVar69);
      param_1[0x29] =
           param_1[2] * auVar76._8_8_ * dVar38 +
           ((*param_1 * dVar39 * dVar38 + param_1[3] * dVar49) - param_1[1] * dVar69);
      dVar28 = dVar69 + dVar69;
      dVar23 = auVar35._0_8_ + auVar35._0_8_;
      dVar101 = dVar40 * (dVar40 + dVar40);
      dVar39 = dVar39 * dVar28;
      dVar24 = (dVar40 + dVar40) * auVar35._8_8_;
      dVar29 = auVar35._8_8_ * dVar23 + dVar39;
      dVar89 = dVar24 + dVar69 * dVar23;
      dVar102 = dVar28 * dVar49 + dVar23 * dVar40;
      dVar24 = dVar69 * dVar23 - dVar24;
      dVar52 = dVar23 * dVar40 - dVar28 * dVar49;
      auVar83._0_8_ = dVar39 - auVar35._8_8_ * dVar23;
      auVar83._8_8_ = dVar39 - dVar49 * (auVar35._8_8_ + auVar35._8_8_);
      auVar45._0_8_ = dVar92 - (dVar23 * auVar35._0_8_ + dVar69 * dVar28);
      auVar45._8_8_ = dVar27 - (dVar23 * auVar35._0_8_ + dVar101);
      dVar78 = dVar78 - (dVar69 * dVar28 + dVar101);
      dVar28 = param_1[0x18];
      dVar23 = param_1[0x1a];
      dVar49 = param_1[0x19];
      auVar73 = blendpd(auVar45,auVar83,1);
      dVar39 = dVar102 * 0.0 + auVar83._0_8_ * 0.0 + auVar45._0_8_ * dVar28;
      dVar40 = dVar102 * 0.0 + auVar83._0_8_ * dVar49 + auVar45._0_8_ * 0.0;
      dVar69 = dVar23 * dVar102 +
               auVar83._0_8_ * 0.0 + auVar45._0_8_ * ___xmm_00000000000000000000000000000000;
      auVar14._8_4_ = SUB84(dVar29,0);
      auVar14._0_8_ = auVar45._0_8_;
      auVar14._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
      dVar101 = dVar24 * 0.0 + auVar45._8_8_ * 0.0 + dVar29 * dVar28;
      dVar92 = dVar24 * 0.0 + dVar49 * auVar45._8_8_ + dVar29 * 0.0;
      dVar38 = dVar23 * dVar24 + auVar45._8_8_ * 0.0 + dVar29 * 0.0;
      dVar28 = dVar78 * 0.0 + dVar89 * 0.0 + dVar28 * dVar52;
      dVar49 = dVar78 * 0.0 + dVar89 * dVar49 + dVar52 * 0.0;
      dVar27 = auVar73._0_8_;
      dVar29 = auVar73._8_8_;
      dVar23 = dVar23 * dVar78 + dVar89 * ___xmm_00000000000000000000000000000000 + dVar52 * 0.0;
      dStack_190 = auVar14._8_8_;
      param_1[0x48] = dVar69 * dVar102 + dVar27 * dVar40 + dVar39 * auVar45._0_8_;
      param_1[0x49] = dVar69 * dVar24 + dVar29 * dVar40 + dVar39 * dStack_190;
      param_1[0x4a] = dVar69 * dVar78 + dVar40 * dVar89 + dVar52 * dVar39;
      param_1[0x4b] = 0.0;
      param_1[0x4c] = dVar38 * dVar102 + dVar27 * dVar92 + dVar101 * auVar45._0_8_;
      param_1[0x4d] = dVar38 * dVar24 + dVar29 * dVar92 + dVar101 * dStack_190;
      param_1[0x4e] = dVar38 * dVar78 + dVar92 * dVar89 + dVar52 * dVar101;
      param_1[0x4f] = 0.0;
      param_1[0x50] = dVar23 * dVar102 + dVar27 * dVar49 + dVar28 * auVar45._0_8_;
      param_1[0x51] = dVar23 * dVar24 + dVar29 * dVar49 + dVar28 * dStack_190;
      param_1[0x52] = dVar23 * dVar78 + dVar49 * dVar89 + dVar52 * dVar28;
      param_1[0x55] = 0.0;
      param_1[0x56] = 0.0;
      param_1[0x53] = 0.0;
      param_1[0x54] = 0.0;
      param_1[0x57] = 1.0;
    }
    dVar27 = _UNK_15076c6f8;
    dVar92 = ___xmm_bff00000000000003ff0000000000000;
    dVar101 = _UNK_15076b868;
    dVar49 = ___xmm_3ff0000000000000bff0000000000000;
    dVar78 = _UNK_150689688;
    dVar23 = ___xmm_3ff00000000000003ff0000000000000;
    dVar28 = __real_3ff0000000000000;
    if (__real_0000000000000000 < param_1[0x1f]) {
      dVar29 = param_1[0x23] - param_1[0x31];
      dVar104 = param_1[0x24] - dVar104;
      dVar30 = param_1[0x25] - dVar30;
      dVar24 = dVar104 * (double)local_208._0_8_ - register0x00001388 * dVar29;
      dVar52 = dVar30 * register0x00001388 - param_3 * dVar104;
      dVar30 = param_3 * dVar29 - dVar30 * (double)local_208._0_8_;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = dVar31;
      auVar73 = blendpd(_local_208,auVar19,1);
      dVar31 = dVar24 * dVar25 + (double)local_1e8._0_8_ * dVar52 + dVar30 * dVar71;
      dVar104 = dVar24 * dVar32 + stack0xfffffffffffffe20 * dVar52 + dVar30 * dVar79;
      dVar25 = auVar73._0_8_ * dVar24 + dVar30 * param_1[0x5e] + param_1[0x5a] * dVar52;
      dVar79 = param_1[0x3a];
      dVar30 = param_1[0x3b];
      dVar71 = param_1[0x38];
      dVar32 = param_1[0x39];
      dVar24 = (param_1[0x39] * dVar25 * ___xmm_3ff0000000000000bff0000000000000 +
               dVar104 * dVar79 +
               dVar31 * param_1[0x3b] * ___xmm_bff00000000000003ff0000000000000 + dVar71 * 0.0) *
               ___xmm_3fe00000000000003fe0000000000000 + dVar71;
      dVar52 = (param_1[0x38] * dVar25 * _UNK_15076b868 +
               dVar104 * dVar30 + dVar31 * param_1[0x3a] * _UNK_15076c6f8 + dVar32 * 0.0) *
               _UNK_150689678 + dVar32;
      dVar79 = (param_1[0x3b] * dVar25 * ___xmm_bff00000000000003ff0000000000000 +
               ((dVar31 * param_1[0x39] * ___xmm_bff00000000000003ff0000000000000 + dVar79 * 0.0) -
               dVar104 * dVar71)) * ___xmm_3fe00000000000003fe0000000000000 + dVar79;
      dVar30 = (param_1[0x3a] * dVar25 * _UNK_15076c6f8 +
               ((dVar31 * param_1[0x38] * _UNK_15076c6f8 + dVar30 * 0.0) - dVar104 * dVar32)) *
               _UNK_150689678 + dVar30;
      dVar71 = dVar52 * dVar52 + dVar30 * dVar30 + dVar24 * dVar24 + dVar79 * dVar79;
      uVar41 = ~-(ulonglong)(dVar71 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
      dVar71 = __real_3ff0000000000000 / SQRT(dVar71);
      dVar31 = (double)((ulonglong)(dVar24 * dVar71) & uVar41);
      dVar104 = (double)((ulonglong)(dVar52 * dVar71) & uVar41);
      dVar24 = (double)(((ulonglong)(dVar79 * dVar71) ^ ___xmm_3ff00000000000000000000000000000) &
                       uVar41);
      dVar79 = (double)(___xmm_3ff00000000000000000000000000000 ^ (ulonglong)dVar24);
      dVar30 = (double)(_UNK_15061cbc8 ^ ((ulonglong)(dVar30 * dVar71) ^ _UNK_15061cbc8) & uVar41);
      uVar90 = (undefined4)((ulonglong)dVar30 >> 0x20);
      param_1[0x38] = dVar31;
      param_1[0x39] = dVar104;
      auVar1._8_4_ = SUB84(dVar30,0);
      auVar1._0_8_ = dVar79;
      auVar1._12_4_ = uVar90;
      *(undefined1 (*) [16])(param_1 + 0x3a) = auVar1;
      auVar55._8_8_ = dVar104;
      auVar55._0_8_ = dVar31;
      auVar2._8_4_ = SUB84(dVar30,0);
      auVar2._0_8_ = dVar79;
      auVar2._12_4_ = uVar90;
      auVar73 = blendpd(auVar55,auVar2,2);
      dVar71 = param_1[0x10] * dVar79 - param_1[0x12] * auVar73._0_8_;
      dVar32 = param_1[0x11] * dVar31 - dVar104 * param_1[0x10];
      dVar25 = param_1[0x12] * dVar104 - dVar79 * param_1[0x11];
      dVar71 = dVar71 + dVar71;
      dVar32 = dVar32 + dVar32;
      dVar25 = dVar25 + dVar25;
      param_1[0x23] =
           param_1[0x31] + (dVar32 * dVar104 - dVar71 * dVar24) + dVar25 * dVar30 + param_1[0x10];
      param_1[0x24] =
           param_1[0x32] + (dVar25 * dVar24 - dVar32 * dVar31) + dVar71 * dVar30 + param_1[0x11];
      param_1[0x25] =
           dVar30 * dVar32 + param_1[0x12] + (dVar71 * dVar31 - dVar25 * dVar104) + param_1[0x33];
      auVar97._8_4_ = SUB84(dVar31,0);
      auVar97._0_8_ = dVar31;
      auVar97._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
      dVar71 = auVar97._8_8_;
      auVar84._8_4_ = SUB84(dVar104,0);
      auVar84._0_8_ = dVar104;
      auVar84._12_4_ = (int)((ulonglong)dVar104 >> 0x20);
      auVar56._8_4_ = SUB84(dVar79,0);
      auVar56._0_8_ = dVar79;
      auVar56._12_4_ = (int)((ulonglong)dVar79 >> 0x20);
      param_1[0x2a] =
           param_1[0xd] * dVar79 * dVar49 +
           param_1[0xe] * dVar104 + param_1[0xf] * dVar31 * dVar92 + param_1[0xc] * dVar30;
      param_1[0x2b] =
           param_1[0xc] * auVar56._8_8_ * dVar101 +
           param_1[0xf] * auVar84._8_8_ + param_1[0xe] * dVar71 * dVar27 + param_1[0xd] * dVar30;
      param_1[0x2c] =
           param_1[0xf] * dVar79 * dVar92 +
           ((param_1[0xd] * dVar31 * dVar92 + param_1[0xe] * dVar30) - param_1[0xc] * dVar104);
      param_1[0x2d] =
           param_1[0xe] * auVar56._8_8_ * dVar27 +
           ((param_1[0xc] * dVar71 * dVar27 + param_1[0xf] * dVar30) - param_1[0xd] * auVar84._8_8_)
      ;
      dVar101 = dVar104 + dVar104;
      dVar25 = dVar79 + dVar79;
      dVar24 = dVar31 * (dVar31 + dVar31);
      dVar71 = dVar71 * dVar101;
      dVar32 = (dVar31 + dVar31) * dVar30;
      dVar52 = dVar30 * dVar25 + dVar71;
      dVar92 = dVar32 + dVar104 * dVar25;
      dVar27 = dVar101 * dVar30 + dVar25 * dVar31;
      dVar32 = dVar104 * dVar25 - dVar32;
      dVar31 = dVar25 * dVar31 - dVar101 * dVar30;
      dVar49 = dVar71 - dVar30 * dVar25;
      dVar71 = dVar71 - dVar30 * (dVar30 + dVar30);
      auVar57._0_8_ = dVar23 - (dVar25 * dVar79 + dVar104 * dVar101);
      auVar57._8_8_ = dVar78 - (dVar25 * dVar79 + dVar24);
      dVar28 = dVar28 - (dVar104 * dVar101 + dVar24);
      dVar23 = param_1[0x1b];
      dVar79 = param_1[0x1d];
      dVar30 = param_1[0x1c];
      auVar3._8_4_ = SUB84(dVar71,0);
      auVar3._0_8_ = dVar49;
      auVar3._12_4_ = (int)((ulonglong)dVar71 >> 0x20);
      auVar73 = blendpd(auVar57,auVar3,1);
      dVar24 = dVar27 * 0.0 + dVar49 * 0.0 + auVar57._0_8_ * dVar23;
      dVar29 = dVar27 * 0.0 + dVar49 * dVar30 + auVar57._0_8_ * 0.0;
      dVar78 = dVar79 * dVar27 +
               dVar49 * 0.0 + auVar57._0_8_ * ___xmm_00000000000000000000000000000000;
      dVar49 = dVar32 * 0.0 + auVar57._8_8_ * 0.0 + dVar52 * dVar23;
      dVar101 = dVar32 * 0.0 + dVar30 * auVar57._8_8_ + dVar52 * 0.0;
      dVar104 = dVar79 * dVar32 + auVar57._8_8_ * 0.0 + dVar52 * 0.0;
      dVar23 = dVar28 * 0.0 + dVar92 * 0.0 + dVar23 * dVar31;
      dVar30 = dVar28 * 0.0 + dVar92 * dVar30 + dVar31 * 0.0;
      dVar71 = auVar73._0_8_;
      dVar25 = auVar73._8_8_;
      dVar79 = dVar79 * dVar28 + dVar92 * ___xmm_00000000000000000000000000000000 + dVar31 * 0.0;
      param_1[0x58] = dVar78 * dVar27 + dVar71 * dVar29 + dVar24 * auVar57._0_8_;
      param_1[0x59] = dVar78 * dVar32 + dVar25 * dVar29 + dVar24 * dVar52;
      param_1[0x5a] = dVar78 * dVar28 + dVar29 * dVar92 + dVar31 * dVar24;
      param_1[0x5b] = 0.0;
      param_1[0x5c] = dVar104 * dVar27 + dVar71 * dVar101 + dVar49 * auVar57._0_8_;
      param_1[0x5d] = dVar104 * dVar32 + dVar25 * dVar101 + dVar49 * dVar52;
      param_1[0x5e] = dVar104 * dVar28 + dVar101 * dVar92 + dVar31 * dVar49;
      param_1[0x5f] = 0.0;
      param_1[0x60] = dVar79 * dVar27 + dVar71 * dVar30 + dVar23 * auVar57._0_8_;
      param_1[0x61] = dVar79 * dVar32 + dVar25 * dVar30 + dVar23 * dVar52;
      param_1[0x62] = dVar79 * dVar28 + dVar30 * dVar92 + dVar31 * dVar23;
      param_1[0x65] = 0.0;
      param_1[0x66] = 0.0;
      param_1[99] = 0.0;
      param_1[100] = 0.0;
      param_1[0x67] = 1.0;
    }
    uVar41 = __real_bff0000000000000;
    dVar28 = __real_3ff0000000000000;
    uVar22 = -(ulonglong)
              (0.0 <= param_1[0x35] * param_1[0x39] + param_1[0x37] * param_1[0x3b] +
                      param_1[0x34] * param_1[0x38] + param_1[0x36] * param_1[0x3a]);
    dVar23 = (double)(~uVar22 & __real_bff0000000000000 |
                     uVar22 & (ulonglong)__real_3ff0000000000000);
    param_1[0x38] = param_1[0x38] * dVar23;
    param_1[0x39] = param_1[0x39] * dVar23;
    param_1[0x3a] = param_1[0x3a] * dVar23;
    param_1[0x3b] = param_1[0x3b] * dVar23;
    uVar22 = -(ulonglong)
              (0.0 <= param_1[0x27] * param_1[0x2b] + param_1[0x29] * param_1[0x2d] +
                      param_1[0x26] * param_1[0x2a] + param_1[0x28] * param_1[0x2c]);
    dVar28 = (double)(~uVar22 & uVar41 | (ulonglong)dVar28 & uVar22);
    param_1[0x2a] = param_1[0x2a] * dVar28;
    param_1[0x2b] = param_1[0x2b] * dVar28;
    param_1[0x2c] = param_1[0x2c] * dVar28;
    param_1[0x2d] = param_1[0x2d] * dVar28;
    param_1[0x84] = (double)local_208._0_8_ + param_1[0x84];
    param_1[0x85] = register0x00001388 + param_1[0x85];
    param_1[0x86] = param_3 + param_1[0x86];
  }
  return;
}

// SizeofFPBDJointSolver_sse4 @ 140a0d730

undefined8 SizeofFPBDJointSolver_sse4(void)

{
  return 0x588;
}

// ApplyRotationDelta2_sse4 @ 140a0d740

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyRotationDelta2_sse4(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar29;
  double dVar30;
  undefined1 auVar28 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar34;
  undefined1 auVar33 [16];
  undefined4 uVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dStack_f0;
  double dStack_d0;
  double dVar3;
  
  dVar18 = _UNK_15076c6f8;
  dVar20 = ___xmm_bff00000000000003ff0000000000000;
  dVar21 = _UNK_15076b868;
  dVar24 = ___xmm_3ff0000000000000bff0000000000000;
  dVar19 = __real_3ff0000000000000;
  if (0.0 < param_1[0x1e]) {
    dVar22 = param_1[0x36];
    dVar25 = param_1[0x37];
    dVar13 = param_1[0x34];
    dVar23 = param_1[0x35];
    dVar1 = param_2[1];
    dVar17 = param_2[1];
    dVar2 = param_2[2];
    dVar3 = param_2[2];
    dVar26 = (param_1[0x35] * dVar2 * ___xmm_3ff0000000000000bff0000000000000 +
             dVar22 * dVar1 +
             *param_2 * param_1[0x37] * ___xmm_bff00000000000003ff0000000000000 + dVar13 * 0.0) *
             ___xmm_3fe00000000000003fe0000000000000 + dVar13;
    dVar29 = (param_1[0x34] * dVar3 * _UNK_15076b868 +
             dVar25 * dVar17 + *param_2 * param_1[0x36] * _UNK_15076c6f8 + dVar23 * 0.0) *
             _UNK_150689678 + dVar23;
    dVar22 = (param_1[0x37] * dVar2 * ___xmm_bff00000000000003ff0000000000000 +
             ((*param_2 * param_1[0x35] * ___xmm_bff00000000000003ff0000000000000 + dVar22 * 0.0) -
             dVar1 * dVar13)) * ___xmm_3fe00000000000003fe0000000000000 + dVar22;
    dVar25 = (param_1[0x36] * dVar3 * _UNK_15076c6f8 +
             ((*param_2 * param_1[0x34] * _UNK_15076c6f8 + dVar25 * 0.0) - dVar17 * dVar23)) *
             _UNK_150689678 + dVar25;
    dVar17 = dVar29 * dVar29 + dVar25 * dVar25 + dVar26 * dVar26 + dVar22 * dVar22;
    uVar5 = ~-(ulonglong)(dVar17 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
    dVar17 = __real_3ff0000000000000 / SQRT(dVar17);
    dVar27 = (double)((ulonglong)(dVar26 * dVar17) & uVar5);
    dVar30 = (double)((ulonglong)(dVar29 * dVar17) & uVar5);
    dVar22 = (double)(((ulonglong)(dVar22 * dVar17) ^ ___xmm_3ff00000000000000000000000000000) &
                     uVar5);
    dVar3 = (double)(___xmm_3ff00000000000000000000000000000 ^ (ulonglong)dVar22);
    dVar25 = (double)(_UNK_15061cbc8 ^ ((ulonglong)(dVar25 * dVar17) ^ _UNK_15061cbc8) & uVar5);
    param_1[0x34] = dVar27;
    param_1[0x35] = dVar30;
    param_1[0x36] = dVar3;
    param_1[0x37] = dVar25;
    auVar36._8_8_ = dVar30;
    auVar36._0_8_ = dVar27;
    auVar11._8_4_ = SUB84(dVar25,0);
    auVar11._0_8_ = dVar3;
    auVar11._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
    auVar37 = blendpd(auVar36,auVar11,2);
    dVar17 = param_1[4] * dVar3 - auVar37._0_8_ * param_1[6];
    dVar1 = param_1[5] * dVar27 - dVar30 * param_1[4];
    dVar2 = param_1[6] * dVar30 - dVar3 * param_1[5];
    dVar17 = dVar17 + dVar17;
    dVar1 = dVar1 + dVar1;
    dVar2 = dVar2 + dVar2;
    param_1[0x20] = (dVar1 * dVar30 - dVar17 * dVar22) + dVar2 * dVar25 + param_1[4] + param_1[0x2e]
    ;
    param_1[0x21] = (dVar2 * dVar22 - dVar1 * dVar27) + dVar17 * dVar25 + param_1[5] + param_1[0x2f]
    ;
    param_1[0x22] = dVar25 * dVar1 + param_1[6] + (dVar17 * dVar27 - dVar2 * dVar30) + param_1[0x30]
    ;
    dVar29 = _UNK_150689688;
    dVar26 = ___xmm_3ff00000000000003ff0000000000000;
    param_1[0x26] =
         param_1[1] * dVar3 * dVar24 +
         param_1[2] * dVar30 + param_1[3] * dVar27 * dVar20 + *param_1 * dVar25;
    param_1[0x27] =
         *param_1 * dVar3 * dVar21 +
         param_1[3] * dVar30 + param_1[2] * dVar27 * dVar18 + param_1[1] * dVar25;
    param_1[0x28] =
         param_1[3] * dVar3 * dVar20 +
         ((param_1[1] * dVar27 * dVar20 + param_1[2] * dVar25) - *param_1 * dVar30);
    param_1[0x29] =
         param_1[2] * dVar3 * dVar18 +
         ((*param_1 * dVar27 * dVar18 + param_1[3] * dVar25) - param_1[1] * dVar30);
    dVar20 = dVar30 + dVar30;
    dVar24 = dVar3 + dVar3;
    dVar21 = dVar27 * (dVar27 + dVar27);
    dVar2 = dVar27 * dVar20;
    dVar18 = (dVar27 + dVar27) * dVar25;
    dVar23 = dVar25 * dVar24 + dVar2;
    dVar22 = dVar18 + dVar30 * dVar24;
    dVar13 = dVar20 * dVar25 + dVar24 * dVar27;
    dVar18 = dVar30 * dVar24 - dVar18;
    dVar17 = dVar24 * dVar27 - dVar20 * dVar25;
    dVar1 = dVar2 - dVar25 * dVar24;
    dVar2 = dVar2 - dVar25 * (dVar25 + dVar25);
    auVar31._0_8_ = dVar26 - (dVar24 * dVar3 + dVar30 * dVar20);
    auVar31._8_8_ = dVar29 - (dVar24 * dVar3 + dVar21);
    dVar19 = dVar19 - (dVar30 * dVar20 + dVar21);
    dVar24 = param_1[0x18];
    dVar21 = param_1[0x1a];
    dVar20 = param_1[0x19];
    auVar9._8_4_ = SUB84(dVar2,0);
    auVar9._0_8_ = dVar1;
    auVar9._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    auVar32 = blendpd(auVar31,auVar9,1);
    dVar3 = dVar13 * 0.0 + dVar1 * 0.0 + auVar31._0_8_ * dVar24;
    dVar25 = dVar13 * 0.0 + dVar1 * dVar20 + auVar31._0_8_ * 0.0;
    dVar1 = dVar21 * dVar13 + dVar1 * 0.0 + auVar31._0_8_ * ___xmm_00000000000000000000000000000000;
    auVar37._8_4_ = SUB84(dVar18,0);
    auVar37._0_8_ = dVar13;
    auVar37._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    dVar26 = dVar18 * __real_0000000000000000 + auVar31._8_8_ * 0.0 + dVar23 * dVar24;
    dVar29 = dVar18 * __real_0000000000000000 + dVar20 * auVar31._8_8_ + dVar23 * 0.0;
    dVar2 = dVar21 * dVar18 + auVar31._8_8_ * 0.0 + dVar23 * 0.0;
    dVar18 = dVar19 * __real_0000000000000000 + dVar22 * 0.0 + dVar24 * dVar17;
    dVar20 = dVar19 * __real_0000000000000000 + dVar22 * dVar20 + dVar17 * 0.0;
    dVar30 = auVar32._0_8_;
    dVar34 = auVar32._8_8_;
    dVar27 = dVar21 * dVar19 + dVar22 * ___xmm_00000000000000000000000000000000 + dVar17 * 0.0;
    dStack_f0 = auVar37._8_8_;
    dVar21 = dVar1 * dStack_f0 + dVar34 * dVar25 + dVar3 * dVar23;
    dVar24 = dVar2 * dStack_f0 + dVar34 * dVar29 + dVar26 * dVar23;
    auVar12._8_4_ = SUB84(dVar21,0);
    auVar12._0_8_ = dVar1 * dVar13 + dVar30 * dVar25 + dVar3 * auVar31._0_8_;
    auVar12._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x48) = auVar12;
    param_1[0x4a] = dVar1 * dVar19 + dVar25 * dVar22 + dVar17 * dVar3;
    param_1[0x4b] = 0.0;
    auVar32._8_4_ = SUB84(dVar24,0);
    auVar32._0_8_ = dVar2 * dVar13 + dVar30 * dVar29 + dVar26 * auVar31._0_8_;
    auVar32._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x4c) = auVar32;
    param_1[0x4e] = dVar2 * dVar19 + dVar29 * dVar22 + dVar17 * dVar26;
    param_1[0x4f] = 0.0;
    param_1[0x50] = dVar27 * dVar13 + dVar30 * dVar20 + dVar18 * auVar31._0_8_;
    param_1[0x51] = dVar27 * dStack_f0 + dVar34 * dVar20 + dVar18 * dVar23;
    param_1[0x52] = dVar27 * dVar19 + dVar20 * dVar22 + dVar17 * dVar18;
    param_1[0x55] = 0.0;
    param_1[0x56] = 0.0;
    param_1[0x53] = 0.0;
    param_1[0x54] = 0.0;
    param_1[0x57] = 1.0;
  }
  dVar20 = _UNK_15076c6f8;
  dVar21 = ___xmm_bff00000000000003ff0000000000000;
  dVar24 = _UNK_15076b868;
  dVar19 = ___xmm_3ff0000000000000bff0000000000000;
  if (0.0 < param_1[0x1f]) {
    dVar3 = param_1[0x3a];
    dVar22 = param_1[0x3b];
    dVar25 = param_1[0x38];
    dVar13 = param_1[0x39];
    dVar17 = param_3[1];
    dVar18 = param_3[1];
    dVar1 = param_3[2];
    dVar2 = param_3[2];
    dVar23 = (param_1[0x39] * dVar1 * ___xmm_3ff0000000000000bff0000000000000 +
             dVar3 * dVar17 +
             *param_3 * param_1[0x3b] * ___xmm_bff00000000000003ff0000000000000 + dVar25 * 0.0) *
             ___xmm_3fe00000000000003fe0000000000000 + dVar25;
    dVar26 = (param_1[0x38] * dVar2 * _UNK_15076b868 +
             dVar22 * dVar18 + *param_3 * param_1[0x3a] * _UNK_15076c6f8 + dVar13 * 0.0) *
             _UNK_150689678 + dVar13;
    dVar3 = (param_1[0x3b] * dVar1 * ___xmm_bff00000000000003ff0000000000000 +
            ((*param_3 * param_1[0x39] * ___xmm_bff00000000000003ff0000000000000 + dVar3 * 0.0) -
            dVar17 * dVar25)) * ___xmm_3fe00000000000003fe0000000000000 + dVar3;
    dVar22 = (param_1[0x3a] * dVar2 * _UNK_15076c6f8 +
             ((*param_3 * param_1[0x38] * _UNK_15076c6f8 + dVar22 * 0.0) - dVar18 * dVar13)) *
             _UNK_150689678 + dVar22;
    dVar18 = dVar26 * dVar26 + dVar22 * dVar22 + dVar23 * dVar23 + dVar3 * dVar3;
    uVar5 = ~-(ulonglong)(dVar18 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
    dVar18 = __real_3ff0000000000000 / SQRT(dVar18);
    dVar23 = (double)((ulonglong)(dVar23 * dVar18) & uVar5);
    dVar27 = (double)((ulonglong)(dVar26 * dVar18) & uVar5);
    dVar17 = (double)(((ulonglong)(dVar3 * dVar18) ^ ___xmm_3ff00000000000000000000000000000) &
                     uVar5);
    dVar2 = (double)(___xmm_3ff00000000000000000000000000000 ^ (ulonglong)dVar17);
    dVar3 = (double)(_UNK_15061cbc8 ^ ((ulonglong)(dVar22 * dVar18) ^ _UNK_15061cbc8) & uVar5);
    uVar35 = (undefined4)((ulonglong)dVar3 >> 0x20);
    auVar33._8_4_ = SUB84(dVar3,0);
    auVar33._0_8_ = dVar3;
    auVar33._12_4_ = uVar35;
    param_1[0x38] = dVar23;
    param_1[0x39] = dVar27;
    param_1[0x3a] = dVar2;
    param_1[0x3b] = dVar3;
    auVar38._8_8_ = dVar27;
    auVar38._0_8_ = dVar23;
    auVar10._8_4_ = SUB84(dVar3,0);
    auVar10._0_8_ = dVar2;
    auVar10._12_4_ = uVar35;
    auVar37 = blendpd(auVar38,auVar10,2);
    dVar18 = param_1[0x10] * dVar2 - auVar37._0_8_ * param_1[0x12];
    dVar1 = param_1[0x11] * dVar23 - dVar27 * param_1[0x10];
    dVar22 = param_1[0x12] * dVar27 - dVar2 * param_1[0x11];
    dVar18 = dVar18 + dVar18;
    dVar1 = dVar1 + dVar1;
    dVar22 = dVar22 + dVar22;
    dVar30 = auVar33._8_8_;
    param_1[0x23] =
         (dVar1 * dVar27 - dVar18 * dVar17) + dVar22 * dVar3 + param_1[0x10] + param_1[0x31];
    param_1[0x24] =
         (dVar22 * dVar17 - dVar1 * dVar23) + dVar18 * dVar30 + param_1[0x11] + param_1[0x32];
    param_1[0x25] =
         dVar3 * dVar1 + param_1[0x12] + (dVar18 * dVar23 - dVar22 * dVar27) + param_1[0x33];
    dVar13 = _UNK_150689688;
    dVar25 = ___xmm_3ff00000000000003ff0000000000000;
    dVar18 = param_1[0xe] * dVar2 * dVar20 +
             ((param_1[0xc] * dVar23 * dVar20 + param_1[0xf] * dVar30) - param_1[0xd] * dVar27);
    param_1[0x2a] =
         param_1[0xd] * dVar2 * dVar19 +
         param_1[0xe] * dVar27 + param_1[0xf] * dVar23 * dVar21 + param_1[0xc] * dVar3;
    param_1[0x2b] =
         param_1[0xc] * dVar2 * dVar24 +
         param_1[0xf] * dVar27 + param_1[0xe] * dVar23 * dVar20 + param_1[0xd] * dVar30;
    auVar14._8_4_ = SUB84(dVar18,0);
    auVar14._0_8_ =
         param_1[0xf] * dVar2 * dVar21 +
         ((param_1[0xd] * dVar23 * dVar21 + param_1[0xe] * dVar3) - param_1[0xc] * dVar27);
    auVar14._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x2c) = auVar14;
    dVar21 = dVar27 + dVar27;
    dVar19 = dVar2 + dVar2;
    dVar24 = dVar23 * (dVar23 + dVar23);
    dVar1 = dVar23 * dVar21;
    dVar20 = (dVar23 + dVar23) * dVar3;
    dVar22 = dVar3 * dVar19 + dVar1;
    dVar26 = dVar20 + dVar27 * dVar19;
    dVar29 = dVar21 * dVar30 + dVar19 * dVar23;
    dVar20 = dVar27 * dVar19 - dVar20;
    dVar18 = dVar19 * dVar23 - dVar21 * dVar30;
    dVar17 = dVar1 - dVar3 * dVar19;
    dVar1 = dVar1 - dVar30 * (dVar3 + dVar3);
    auVar28._0_8_ = dVar25 - (dVar19 * dVar2 + dVar27 * dVar21);
    auVar28._8_8_ = dVar13 - (dVar19 * dVar2 + dVar24);
    dVar27 = __real_3ff0000000000000 - (dVar27 * dVar21 + dVar24);
    dVar19 = param_1[0x1b];
    dVar24 = param_1[0x1d];
    dVar21 = param_1[0x1c];
    auVar8._8_4_ = SUB84(dVar1,0);
    auVar8._0_8_ = dVar17;
    auVar8._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    auVar37 = blendpd(auVar28,auVar8,1);
    dVar3 = dVar29 * 0.0 + dVar17 * 0.0 + auVar28._0_8_ * dVar19;
    dVar25 = dVar29 * 0.0 + dVar17 * dVar21 + auVar28._0_8_ * 0.0;
    dVar17 = dVar24 * dVar29 +
             dVar17 * 0.0 + auVar28._0_8_ * ___xmm_00000000000000000000000000000000;
    auVar15._8_4_ = SUB84(dVar22,0);
    auVar15._0_8_ = auVar28._0_8_;
    auVar15._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
    dVar13 = dVar20 * 0.0 + auVar28._8_8_ * 0.0 + dVar22 * dVar19;
    dVar23 = dVar20 * 0.0 + dVar21 * auVar28._8_8_ + dVar22 * 0.0;
    dVar2 = dVar24 * dVar20 + auVar28._8_8_ * 0.0 + dVar22 * 0.0;
    dVar1 = dVar27 * 0.0 + dVar26 * 0.0 + dVar19 * dVar18;
    dVar21 = dVar27 * 0.0 + dVar26 * dVar21 + dVar18 * 0.0;
    dVar22 = auVar37._0_8_;
    dVar30 = auVar37._8_8_;
    dVar24 = dVar24 * dVar27 + dVar26 * ___xmm_00000000000000000000000000000000 + dVar18 * 0.0;
    dStack_d0 = auVar15._8_8_;
    dVar19 = dVar2 * dVar20 + dVar30 * dVar23 + dVar13 * dStack_d0;
    param_1[0x58] = dVar17 * dVar29 + dVar22 * dVar25 + dVar3 * auVar28._0_8_;
    param_1[0x59] = dVar17 * dVar20 + dVar30 * dVar25 + dVar3 * dStack_d0;
    param_1[0x5a] = dVar17 * dVar27 + dVar25 * dVar26 + dVar18 * dVar3;
    param_1[0x5b] = 0.0;
    auVar4._8_4_ = SUB84(dVar19,0);
    auVar4._0_8_ = dVar2 * dVar29 + dVar22 * dVar23 + dVar13 * auVar28._0_8_;
    auVar4._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x5c) = auVar4;
    param_1[0x5e] = dVar2 * dVar27 + dVar23 * dVar26 + dVar18 * dVar13;
    param_1[0x5f] = 0.0;
    param_1[0x60] = dVar24 * dVar29 + dVar22 * dVar21 + dVar1 * auVar28._0_8_;
    param_1[0x61] = dVar24 * dVar20 + dVar30 * dVar21 + dVar1 * dStack_d0;
    param_1[0x62] = dVar24 * dVar27 + dVar21 * dVar26 + dVar18 * dVar1;
    param_1[0x65] = 0.0;
    param_1[0x66] = 0.0;
    param_1[99] = 0.0;
    param_1[100] = 0.0;
    param_1[0x67] = 1.0;
  }
  uVar5 = __real_bff0000000000000;
  dVar20 = __real_3ff0000000000000;
  uVar16 = -(ulonglong)
            (0.0 <= param_1[0x35] * param_1[0x39] + param_1[0x37] * param_1[0x3b] +
                    param_1[0x34] * param_1[0x38] + param_1[0x36] * param_1[0x3a]);
  dVar21 = (double)(~uVar16 & __real_bff0000000000000 | uVar16 & (ulonglong)__real_3ff0000000000000)
  ;
  dVar24 = param_1[0x3b] * dVar21;
  dVar19 = param_1[0x39] * dVar21;
  auVar6._8_4_ = SUB84(dVar19,0);
  auVar6._0_8_ = param_1[0x38] * dVar21;
  auVar6._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x38) = auVar6;
  auVar7._8_4_ = SUB84(dVar24,0);
  auVar7._0_8_ = param_1[0x3a] * dVar21;
  auVar7._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x3a) = auVar7;
  uVar16 = -(ulonglong)
            (0.0 <= param_1[0x27] * param_1[0x2b] + param_1[0x29] * param_1[0x2d] +
                    param_1[0x26] * param_1[0x2a] + param_1[0x28] * param_1[0x2c]);
  dVar19 = (double)(~uVar16 & uVar5 | (ulonglong)dVar20 & uVar16);
  param_1[0x2a] = param_1[0x2a] * dVar19;
  param_1[0x2b] = param_1[0x2b] * dVar19;
  param_1[0x2c] = param_1[0x2c] * dVar19;
  param_1[0x2d] = param_1[0x2d] * dVar19;
  return;
}

// ApplyPositionConstraintSoft_sse4 @ 140a0e590

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPositionConstraintSoft_sse4
               (double *param_1,double param_2,double param_3,double param_4,byte param_5,
               double *param_6,double param_7,double param_8,double *param_9)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  ulonglong uVar15;
  double dVar16;
  double dVar18;
  undefined1 auVar17 [16];
  ulonglong uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar37;
  double dVar38;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 uVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  double dVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  double dStack_120;
  double dStack_e0;
  
  uVar49 = _UNK_15066df7c;
  uVar48 = _UNK_15066df78;
  uVar47 = __xmm_80000000000000008000000000000000._4_4_;
  uVar39 = (undefined4)__xmm_80000000000000008000000000000000;
  dVar22 = param_1[0x22] - param_1[0x30];
  dVar31 = param_1[0x20] - param_1[0x2e];
  dVar37 = param_1[0x21] - param_1[0x2f];
  dVar26 = *param_6;
  dVar33 = param_6[1];
  dVar40 = param_6[2];
  dVar18 = dVar31 * param_6[1] - dVar37 * dVar26;
  dVar20 = dVar37 * param_6[2] - dVar22 * dVar33;
  dVar37 = dVar22 * *param_6 - dVar31 * dVar40;
  dVar23 = param_1[0x25] - param_1[0x33];
  dVar22 = param_1[0x23] - param_1[0x31];
  dVar31 = param_1[0x24] - param_1[0x32];
  dVar11 = param_6[1] * dVar22 - dVar31 * dVar26;
  dVar25 = param_6[2] * dVar31 - dVar23 * dVar33;
  dVar16 = *param_6 * dVar23 - dVar40 * dVar22;
  dVar23 = dVar18 * param_1[0x50] + dVar37 * param_1[0x4c] + dVar20 * param_1[0x48];
  dVar24 = dVar18 * param_1[0x51] + dVar37 * param_1[0x4d] + dVar20 * param_1[0x49];
  dVar43 = param_1[0x52] * dVar18 + param_1[0x4e] * dVar37 + param_1[0x4a] * dVar20;
  dVar14 = dVar11 * param_1[0x60] + dVar16 * param_1[0x5c] + dVar25 * param_1[0x58];
  dVar27 = dVar11 * param_1[0x61] + dVar16 * param_1[0x5d] + dVar25 * param_1[0x59];
  dVar21 = param_1[0x62] * dVar11 + param_1[0x5e] * dVar16 + param_1[0x5a] * dVar25;
  auVar35._8_4_ = SUB84(dVar27,0);
  auVar35._0_8_ = dVar14;
  auVar35._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
  dVar22 = param_1[0x1e];
  dVar31 = param_1[0x1f];
  uVar50 = SUB84(dVar31,0);
  uVar51 = (undefined4)((ulonglong)dVar31 >> 0x20);
  dVar32 = 0.0;
  if (__real_3f1a36e2eb1c432d < param_4) {
    dVar32 = dVar33 * ((param_1[0x21] - param_1[0x77]) - (param_1[0x24] - param_1[0x7a])) +
             dVar26 * ((param_1[0x20] - param_1[0x76]) - (param_1[0x23] - param_1[0x79])) +
             dVar40 * ((param_1[0x22] - param_1[0x78]) - (param_1[0x25] - param_1[0x7b])) +
             param_8 * param_2;
  }
  dVar40 = __real_3ff0000000000000;
  if ((param_5 & 1) != 0) {
    dVar40 = __real_3ff0000000000000 / (dVar22 + dVar31);
  }
  dVar26 = param_3 * dVar40 * param_2 * param_2;
  param_2 = param_4 * dVar40 * param_2;
  dVar37 = ((dVar26 * param_7 - dVar32 * param_2) - *param_9) *
           (__real_3ff0000000000000 /
           ((dVar37 * dVar24 + dVar20 * dVar23 + dVar18 * dVar43 + dVar22 + dVar31 +
            dVar16 * dVar27 + dVar25 * dVar14 + dVar11 * dVar21) * (param_2 + dVar26) +
           __real_3ff0000000000000)) * param_1[0x99];
  dVar16 = dVar22 * dVar37;
  dVar40 = param_6[2];
  dVar11 = *param_6;
  dVar25 = param_6[1];
  dVar31 = (double)((ulonglong)dVar31 ^
                   CONCAT44(__xmm_80000000000000008000000000000000._4_4_,
                            (undefined4)__xmm_80000000000000008000000000000000)) * dVar37;
  param_1[0x2e] = param_1[0x2e] + dVar16 * dVar11;
  param_1[0x2f] = param_1[0x2f] + dVar16 * dVar25;
  param_1[0x30] = dVar16 * dVar40 + param_1[0x30];
  param_1[0x31] = param_1[0x31] + dVar31 * dVar11;
  param_1[0x32] = param_1[0x32] + dVar31 * dVar25;
  param_1[0x33] = dVar31 * dVar40 + param_1[0x33];
  dVar27 = _UNK_15076c6f8;
  dVar16 = ___xmm_bff00000000000003ff0000000000000;
  dVar25 = _UNK_15076b868;
  dVar11 = ___xmm_3ff0000000000000bff0000000000000;
  dVar40 = __real_3ff0000000000000;
  auVar29._8_4_ = SUB84(dVar37,0);
  auVar29._0_8_ = dVar37;
  auVar29._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
  dStack_120 = auVar29._8_8_;
  dVar31 = dVar37;
  if (0.0 < dVar22) {
    dVar23 = dVar23 * dVar37;
    dVar24 = dVar24 * dVar37;
    dVar18 = param_1[0x36];
    dVar20 = param_1[0x37];
    dVar26 = param_1[0x34];
    dVar33 = param_1[0x35];
    dVar43 = dVar43 * dVar37;
    dVar22 = (param_1[0x35] * dVar43 * ___xmm_3ff0000000000000bff0000000000000 +
             dVar24 * dVar18 +
             dVar23 * param_1[0x37] * ___xmm_bff00000000000003ff0000000000000 + dVar26 * 0.0) *
             ___xmm_3fe00000000000003fe0000000000000 + dVar26;
    dVar31 = (param_1[0x34] * dVar43 * _UNK_15076b868 +
             dVar24 * dVar20 + dVar23 * param_1[0x36] * _UNK_15076c6f8 + dVar33 * 0.0) *
             _UNK_150689678 + dVar33;
    dVar18 = (param_1[0x37] * dVar43 * ___xmm_bff00000000000003ff0000000000000 +
             ((dVar23 * param_1[0x35] * ___xmm_bff00000000000003ff0000000000000 + dVar18 * 0.0) -
             dVar24 * dVar26)) * ___xmm_3fe00000000000003fe0000000000000 + dVar18;
    dVar20 = (param_1[0x36] * dVar43 * _UNK_15076c6f8 +
             ((dVar23 * param_1[0x34] * _UNK_15076c6f8 + dVar20 * 0.0) - dVar24 * dVar33)) *
             _UNK_150689678 + dVar20;
    dVar23 = dVar31 * dVar31 + dVar20 * dVar20 + dVar22 * dVar22 + dVar18 * dVar18;
    uVar19 = ~-(ulonglong)(dVar23 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
    dVar24 = __real_3ff0000000000000 / SQRT(dVar23);
    dVar22 = (double)((ulonglong)(dVar22 * dVar24) & uVar19);
    dVar31 = (double)((ulonglong)(dVar31 * dVar24) & uVar19);
    uVar39 = SUB84(dVar31,0);
    uVar47 = (undefined4)((ulonglong)dVar31 >> 0x20);
    dVar23 = (double)(((ulonglong)(dVar18 * dVar24) ^ ___xmm_3ff00000000000000000000000000000) &
                     uVar19);
    dVar26 = (double)(___xmm_3ff00000000000000000000000000000 ^ (ulonglong)dVar23);
    dVar33 = (double)(_UNK_15061cbc8 ^ ((ulonglong)(dVar20 * dVar24) ^ _UNK_15061cbc8) & uVar19);
    uVar48 = (undefined4)((ulonglong)dVar33 >> 0x20);
    auVar5._8_4_ = uVar39;
    auVar5._0_8_ = dVar22;
    auVar5._12_4_ = uVar47;
    *(undefined1 (*) [16])(param_1 + 0x34) = auVar5;
    auVar12._8_4_ = SUB84(dVar33,0);
    auVar12._0_8_ = dVar26;
    auVar12._12_4_ = uVar48;
    *(undefined1 (*) [16])(param_1 + 0x36) = auVar12;
    auVar6._8_4_ = uVar39;
    auVar6._0_8_ = dVar22;
    auVar6._12_4_ = uVar47;
    auVar28._8_8_ = dVar31;
    auVar28._0_8_ = dVar22;
    auVar13._8_4_ = SUB84(dVar33,0);
    auVar13._0_8_ = dVar26;
    auVar13._12_4_ = uVar48;
    auVar29 = blendpd(auVar28,auVar13,2);
    dVar20 = param_1[4] * dVar26 - param_1[6] * auVar29._0_8_;
    dVar24 = param_1[5] * dVar22 - auVar6._8_8_ * param_1[4];
    dVar18 = param_1[6] * dVar31 - dVar26 * param_1[5];
    dVar20 = dVar20 + dVar20;
    dVar24 = dVar24 + dVar24;
    dVar18 = dVar18 + dVar18;
    param_1[0x20] =
         param_1[0x2e] + (dVar24 * dVar31 - dVar20 * dVar23) + dVar18 * dVar33 + param_1[4];
    param_1[0x21] =
         param_1[0x2f] + (dVar18 * dVar23 - dVar24 * dVar22) + dVar20 * dVar33 + param_1[5];
    param_1[0x22] =
         dVar33 * dVar24 + param_1[6] + (dVar20 * dVar22 - dVar18 * dVar31) + param_1[0x30];
    auVar30._8_4_ = SUB84(dVar22,0);
    auVar30._0_8_ = dVar22;
    auVar30._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
    dVar18 = auVar30._8_8_;
    auVar17._8_4_ = uVar39;
    auVar17._0_8_ = dVar31;
    auVar17._12_4_ = uVar47;
    param_1[0x26] =
         param_1[1] * dVar26 * dVar11 +
         param_1[2] * dVar31 + param_1[3] * dVar22 * dVar16 + *param_1 * dVar33;
    param_1[0x27] =
         *param_1 * dVar26 * dVar25 +
         param_1[3] * auVar17._8_8_ + param_1[2] * dVar18 * dVar27 + param_1[1] * dVar33;
    param_1[0x28] =
         param_1[3] * dVar26 * dVar16 +
         ((param_1[1] * dVar22 * dVar16 + param_1[2] * dVar33) - *param_1 * dVar31);
    param_1[0x29] =
         param_1[2] * dVar26 * dVar27 +
         ((*param_1 * dVar18 * dVar27 + param_1[3] * dVar33) - param_1[1] * auVar17._8_8_);
    uVar49 = _UNK_15066df7c;
    uVar48 = _UNK_15066df78;
    uVar47 = __xmm_80000000000000008000000000000000._4_4_;
    uVar39 = (undefined4)__xmm_80000000000000008000000000000000;
    dVar23 = dVar31 + dVar31;
    dVar25 = dVar26 + dVar26;
    dVar16 = dVar22 * (dVar22 + dVar22);
    dVar18 = dVar18 * dVar23;
    dVar32 = (dVar22 + dVar22) * dVar33;
    dVar24 = dVar33 * dVar25 + dVar18;
    dVar27 = dVar32 + dVar31 * dVar25;
    dVar20 = dVar23 * dVar33 + dVar25 * dVar22;
    dVar32 = dVar31 * dVar25 - dVar32;
    dVar43 = dVar25 * dVar22 - dVar23 * dVar33;
    dVar11 = dVar18 - dVar33 * dVar25;
    dVar18 = dVar18 - dVar33 * (dVar33 + dVar33);
    auVar45._0_8_ = ___xmm_3ff00000000000003ff0000000000000 - (dVar25 * dVar26 + dVar31 * dVar23);
    auVar45._8_8_ = _UNK_150689688 - (dVar25 * dVar26 + dVar16);
    dVar40 = dVar40 - (dVar31 * dVar23 + dVar16);
    dVar22 = param_1[0x18];
    dVar31 = param_1[0x1a];
    dVar23 = param_1[0x19];
    auVar10._8_4_ = SUB84(dVar18,0);
    auVar10._0_8_ = dVar11;
    auVar10._12_4_ = (int)((ulonglong)dVar18 >> 0x20);
    auVar29 = blendpd(auVar45,auVar10,1);
    dVar25 = dVar20 * 0.0 + dVar11 * 0.0 + auVar45._0_8_ * dVar22;
    dVar16 = dVar20 * 0.0 + dVar11 * dVar23 + auVar45._0_8_ * 0.0;
    dVar11 = dVar31 * dVar20 +
             dVar11 * 0.0 + auVar45._0_8_ * ___xmm_00000000000000000000000000000000;
    dVar33 = dVar32 * __real_0000000000000000 + auVar45._8_8_ * 0.0 + dVar24 * dVar22;
    dVar38 = dVar32 * __real_0000000000000000 + dVar23 * auVar45._8_8_ + dVar24 * 0.0;
    dVar18 = dVar31 * dVar32 + auVar45._8_8_ * 0.0 + dVar24 * 0.0;
    dVar26 = dVar40 * __real_0000000000000000 + dVar27 * 0.0 + dVar22 * dVar43;
    dVar23 = dVar40 * __real_0000000000000000 + dVar27 * dVar23 + dVar43 * 0.0;
    dVar44 = auVar29._0_8_;
    dVar46 = auVar29._8_8_;
    dVar31 = dVar31 * dVar40 + dVar27 * ___xmm_00000000000000000000000000000000 + dVar43 * 0.0;
    dVar22 = dVar11 * dVar32 + dVar46 * dVar16 + dVar25 * dVar24;
    auVar4._8_4_ = SUB84(dVar22,0);
    auVar4._0_8_ = dVar11 * dVar20 + dVar44 * dVar16 + dVar25 * auVar45._0_8_;
    auVar4._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x48) = auVar4;
    param_1[0x4a] = dVar11 * dVar40 + dVar16 * dVar27 + dVar43 * dVar25;
    param_1[0x4b] = 0.0;
    param_1[0x4c] = dVar18 * dVar20 + dVar44 * dVar38 + dVar33 * auVar45._0_8_;
    param_1[0x4d] = dVar18 * dVar32 + dVar46 * dVar38 + dVar33 * dVar24;
    param_1[0x4e] = dVar18 * dVar40 + dVar38 * dVar27 + dVar43 * dVar33;
    param_1[0x4f] = 0.0;
    param_1[0x50] = dVar31 * dVar20 + dVar44 * dVar23 + dVar26 * auVar45._0_8_;
    param_1[0x51] = dVar31 * dVar32 + dVar46 * dVar23 + dVar26 * dVar24;
    param_1[0x52] = dVar31 * dVar40 + dVar23 * dVar27 + dVar43 * dVar26;
    param_1[0x55] = 0.0;
    param_1[0x56] = 0.0;
    param_1[0x53] = 0.0;
    param_1[0x54] = 0.0;
    param_1[0x57] = 1.0;
    uVar50 = SUB84(param_1[0x1f],0);
    uVar51 = (undefined4)((ulonglong)param_1[0x1f] >> 0x20);
    dVar31 = dStack_120;
  }
  dVar11 = _UNK_15076c6f8;
  dVar24 = ___xmm_bff00000000000003ff0000000000000;
  dVar23 = _UNK_15076b868;
  dVar22 = ___xmm_3ff0000000000000bff0000000000000;
  dVar40 = __real_3ff0000000000000;
  if (0.0 <= (double)CONCAT44(uVar51,uVar50) && (double)CONCAT44(uVar51,uVar50) != 0.0) {
    dVar27 = (double)(CONCAT44(uVar47,uVar39) ^ (ulonglong)dVar37);
    dVar21 = dVar21 * dVar27;
    dStack_e0 = auVar35._8_8_;
    dVar27 = dVar27 * dVar14;
    dStack_e0 = (double)(CONCAT44(uVar49,uVar48) ^ (ulonglong)dVar31) * dStack_e0;
    dVar16 = param_1[0x3a];
    dVar14 = param_1[0x3b];
    dVar18 = param_1[0x38];
    dVar20 = param_1[0x39];
    dVar31 = (param_1[0x39] * dVar21 * ___xmm_3ff0000000000000bff0000000000000 +
             dStack_e0 * dVar16 +
             dVar27 * param_1[0x3b] * ___xmm_bff00000000000003ff0000000000000 + dVar18 * 0.0) *
             ___xmm_3fe00000000000003fe0000000000000 + dVar18;
    dVar25 = (param_1[0x38] * dVar21 * _UNK_15076b868 +
             dStack_e0 * dVar14 + dVar27 * param_1[0x3a] * _UNK_15076c6f8 + dVar20 * 0.0) *
             _UNK_150689678 + dVar20;
    dVar16 = (param_1[0x3b] * dVar21 * ___xmm_bff00000000000003ff0000000000000 +
             ((dVar27 * param_1[0x39] * ___xmm_bff00000000000003ff0000000000000 + dVar16 * 0.0) -
             dStack_e0 * dVar18)) * ___xmm_3fe00000000000003fe0000000000000 + dVar16;
    dVar14 = (param_1[0x3a] * dVar21 * _UNK_15076c6f8 +
             ((dVar27 * param_1[0x38] * _UNK_15076c6f8 + dVar14 * 0.0) - dStack_e0 * dVar20)) *
             _UNK_150689678 + dVar14;
    dVar21 = dVar25 * dVar25 + dVar14 * dVar14 + dVar31 * dVar31 + dVar16 * dVar16;
    uVar19 = ~-(ulonglong)(dVar21 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
    dVar27 = __real_3ff0000000000000 / SQRT(dVar21);
    dVar31 = (double)((ulonglong)(dVar31 * dVar27) & uVar19);
    dVar21 = (double)((ulonglong)(dVar25 * dVar27) & uVar19);
    uVar39 = (undefined4)((ulonglong)dVar21 >> 0x20);
    dVar25 = (double)(((ulonglong)(dVar16 * dVar27) ^ ___xmm_3ff00000000000000000000000000000) &
                     uVar19);
    dVar16 = (double)(___xmm_3ff00000000000000000000000000000 ^ (ulonglong)dVar25);
    dVar14 = (double)(_UNK_15061cbc8 ^ ((ulonglong)(dVar14 * dVar27) ^ _UNK_15061cbc8) & uVar19);
    uVar47 = (undefined4)((ulonglong)dVar14 >> 0x20);
    auVar1._8_4_ = SUB84(dVar21,0);
    auVar1._0_8_ = dVar31;
    auVar1._12_4_ = uVar39;
    *(undefined1 (*) [16])(param_1 + 0x38) = auVar1;
    auVar7._8_4_ = SUB84(dVar14,0);
    auVar7._0_8_ = dVar16;
    auVar7._12_4_ = uVar47;
    *(undefined1 (*) [16])(param_1 + 0x3a) = auVar7;
    auVar2._8_4_ = SUB84(dVar21,0);
    auVar2._0_8_ = dVar31;
    auVar2._12_4_ = uVar39;
    auVar34._8_8_ = dVar21;
    auVar34._0_8_ = dVar31;
    auVar8._8_4_ = SUB84(dVar14,0);
    auVar8._0_8_ = dVar16;
    auVar8._12_4_ = uVar47;
    auVar35 = blendpd(auVar34,auVar8,2);
    dVar27 = param_1[0x10] * dVar16 - param_1[0x12] * auVar35._0_8_;
    dVar18 = param_1[0x11] * dVar31 - auVar2._8_8_ * param_1[0x10];
    dVar20 = param_1[0x12] * dVar21 - dVar16 * param_1[0x11];
    dVar27 = dVar27 + dVar27;
    dVar18 = dVar18 + dVar18;
    dVar20 = dVar20 + dVar20;
    param_1[0x23] =
         param_1[0x31] + (dVar18 * dVar21 - dVar27 * dVar25) + dVar20 * dVar14 + param_1[0x10];
    param_1[0x24] =
         param_1[0x32] + (dVar20 * dVar25 - dVar18 * dVar31) + dVar27 * dVar14 + param_1[0x11];
    param_1[0x25] =
         dVar14 * dVar18 + param_1[0x12] + (dVar27 * dVar31 - dVar20 * dVar21) + param_1[0x33];
    auVar41._8_4_ = SUB84(dVar31,0);
    auVar41._0_8_ = dVar31;
    auVar41._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
    dVar27 = auVar41._8_8_;
    auVar36._8_4_ = SUB84(dVar16,0);
    auVar36._0_8_ = dVar16;
    auVar36._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    param_1[0x2a] =
         param_1[0xd] * dVar16 * dVar22 +
         param_1[0xe] * dVar21 + param_1[0xf] * dVar31 * dVar24 + param_1[0xc] * dVar14;
    param_1[0x2b] =
         param_1[0xc] * auVar36._8_8_ * dVar23 +
         param_1[0xf] * dVar21 + param_1[0xe] * dVar27 * dVar11 + param_1[0xd] * dVar14;
    param_1[0x2c] =
         param_1[0xf] * dVar16 * dVar24 +
         ((param_1[0xd] * dVar31 * dVar24 + param_1[0xe] * dVar14) - param_1[0xc] * dVar21);
    param_1[0x2d] =
         param_1[0xe] * auVar36._8_8_ * dVar11 +
         ((param_1[0xc] * dVar27 * dVar11 + param_1[0xf] * dVar14) - param_1[0xd] * dVar21);
    dVar22 = dVar21 + dVar21;
    dVar23 = dVar16 + dVar16;
    dVar20 = dVar31 * (dVar31 + dVar31);
    dVar27 = dVar27 * dVar22;
    dVar24 = (dVar31 + dVar31) * dVar14;
    dVar18 = dVar14 * dVar23 + dVar27;
    dVar32 = dVar24 + dVar21 * dVar23;
    dVar43 = dVar22 * dVar14 + dVar23 * dVar31;
    dVar24 = dVar21 * dVar23 - dVar24;
    dVar11 = dVar23 * dVar31 - dVar22 * dVar14;
    dVar25 = dVar27 - dVar14 * dVar23;
    dVar27 = dVar27 - dVar14 * (dVar14 + dVar14);
    auVar42._0_8_ = ___xmm_3ff00000000000003ff0000000000000 - (dVar23 * dVar16 + dVar21 * dVar22);
    auVar42._8_8_ = _UNK_150689688 - (dVar23 * dVar16 + dVar20);
    dVar40 = dVar40 - (dVar21 * dVar22 + dVar20);
    dVar22 = param_1[0x1b];
    dVar31 = param_1[0x1d];
    dVar23 = param_1[0x1c];
    auVar9._8_4_ = SUB84(dVar27,0);
    auVar9._0_8_ = dVar25;
    auVar9._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
    auVar35 = blendpd(auVar42,auVar9,1);
    dVar16 = dVar43 * 0.0 + dVar25 * 0.0 + auVar42._0_8_ * dVar22;
    dVar14 = dVar43 * 0.0 + dVar25 * dVar23 + auVar42._0_8_ * 0.0;
    dVar21 = dVar31 * dVar43 +
             dVar25 * 0.0 + auVar42._0_8_ * ___xmm_00000000000000000000000000000000;
    dVar27 = dVar24 * 0.0 + auVar42._8_8_ * 0.0 + dVar18 * dVar22;
    dVar20 = dVar24 * 0.0 + dVar23 * auVar42._8_8_ + dVar18 * 0.0;
    dVar25 = dVar31 * dVar24 + auVar42._8_8_ * 0.0 + dVar18 * 0.0;
    dVar22 = dVar40 * 0.0 + dVar32 * 0.0 + dVar22 * dVar11;
    dVar23 = dVar40 * 0.0 + dVar32 * dVar23 + dVar11 * 0.0;
    dVar26 = auVar35._0_8_;
    dVar33 = auVar35._8_8_;
    dVar31 = dVar31 * dVar40 + dVar32 * ___xmm_00000000000000000000000000000000 + dVar11 * 0.0;
    param_1[0x58] = dVar21 * dVar43 + dVar26 * dVar14 + dVar16 * auVar42._0_8_;
    param_1[0x59] = dVar21 * dVar24 + dVar33 * dVar14 + dVar16 * dVar18;
    param_1[0x5a] = dVar21 * dVar40 + dVar14 * dVar32 + dVar11 * dVar16;
    param_1[0x5b] = 0.0;
    param_1[0x5c] = dVar25 * dVar43 + dVar26 * dVar20 + dVar27 * auVar42._0_8_;
    param_1[0x5d] = dVar25 * dVar24 + dVar33 * dVar20 + dVar27 * dVar18;
    param_1[0x5e] = dVar25 * dVar40 + dVar20 * dVar32 + dVar11 * dVar27;
    param_1[0x5f] = 0.0;
    param_1[0x60] = dVar31 * dVar43 + dVar26 * dVar23 + dVar22 * auVar42._0_8_;
    param_1[0x61] = dVar31 * dVar24 + dVar33 * dVar23 + dVar22 * dVar18;
    param_1[0x62] = dVar31 * dVar40 + dVar23 * dVar32 + dVar11 * dVar22;
    param_1[0x65] = 0.0;
    param_1[0x66] = 0.0;
    param_1[99] = 0.0;
    param_1[100] = 0.0;
    param_1[0x67] = 1.0;
    dVar31 = dStack_120;
  }
  uVar19 = __real_bff0000000000000;
  dVar22 = __real_3ff0000000000000;
  uVar15 = -(ulonglong)
            (0.0 <= param_1[0x35] * param_1[0x39] + param_1[0x37] * param_1[0x3b] +
                    param_1[0x34] * param_1[0x38] + param_1[0x36] * param_1[0x3a]);
  dVar40 = (double)(~uVar15 & __real_bff0000000000000 | uVar15 & (ulonglong)__real_3ff0000000000000)
  ;
  param_1[0x38] = param_1[0x38] * dVar40;
  param_1[0x39] = param_1[0x39] * dVar40;
  param_1[0x3a] = param_1[0x3a] * dVar40;
  param_1[0x3b] = param_1[0x3b] * dVar40;
  uVar15 = -(ulonglong)
            (0.0 <= param_1[0x27] * param_1[0x2b] + param_1[0x29] * param_1[0x2d] +
                    param_1[0x26] * param_1[0x2a] + param_1[0x28] * param_1[0x2c]);
  dVar22 = (double)(~uVar15 & uVar19 | (ulonglong)dVar22 & uVar15);
  dVar40 = param_1[0x2d] * dVar22;
  param_1[0x2a] = param_1[0x2a] * dVar22;
  param_1[0x2b] = param_1[0x2b] * dVar22;
  auVar3._8_4_ = SUB84(dVar40,0);
  auVar3._0_8_ = param_1[0x2c] * dVar22;
  auVar3._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x2c) = auVar3;
  *param_9 = *param_9 + dVar37;
  dVar22 = param_6[1];
  dVar40 = param_6[2];
  param_1[0x84] = param_1[0x84] + dVar37 * *param_6;
  param_1[0x85] = param_1[0x85] + dVar31 * dVar22;
  param_1[0x86] = dVar37 * dVar40 + param_1[0x86];
  return;
}

// ApplyRotationConstraintSoftKD_sse4 @ 140a0f820

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyRotationConstraintSoftKD_sse4
               (longlong param_1,int param_2,int param_3,double param_4,double param_5,
               double param_6,byte param_7,double *param_8,double param_9,double param_10,
               double *param_11)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  ulonglong uVar24;
  double dVar25;
  double dVar26;
  ulonglong uVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  double local_158;
  double dStack_120;
  
  dVar28 = _UNK_15076c6f8;
  dVar10 = ___xmm_bff00000000000003ff0000000000000;
  dVar11 = _UNK_15076b868;
  dVar35 = ___xmm_3ff0000000000000bff0000000000000;
  dVar39 = __real_3ff0000000000000;
  lVar19 = (longlong)param_3;
  lVar18 = lVar19 * 0x80;
  dVar23 = *param_8;
  uVar45 = SUB84(dVar23,0);
  uVar46 = (undefined4)((ulonglong)dVar23 >> 0x20);
  dVar38 = param_8[1];
  dVar41 = param_8[2];
  if (param_6 <= __real_3f1a36e2eb1c432d) {
    uVar47 = SUB84(dVar38,0);
    uVar48 = (undefined4)((ulonglong)dVar38 >> 0x20);
    dVar12 = 0.0;
    local_158 = dVar41;
  }
  else {
    lVar17 = (longlong)param_2 * 0x20;
    pdVar1 = (double *)(param_1 + 0x3e0 + lVar17);
    dVar22 = *pdVar1;
    dVar42 = pdVar1[1];
    pdVar1 = (double *)(param_1 + 0x3f0 + lVar17);
    dVar21 = *pdVar1;
    dVar26 = pdVar1[1];
    pdVar1 = (double *)(param_1 + 0x130 + lVar17);
    dVar31 = *pdVar1;
    dVar14 = pdVar1[1];
    pdVar1 = (double *)(param_1 + 0x140 + lVar17);
    dVar30 = *pdVar1;
    dVar25 = pdVar1[1];
    uVar20 = -(ulonglong)
              (0.0 <= dVar42 * dVar14 + dVar26 * dVar25 + dVar22 * dVar31 + dVar21 * dVar30);
    dVar12 = (double)(~uVar20 & __real_bff0000000000000 |
                     uVar20 & (ulonglong)__real_3ff0000000000000);
    dVar34 = dVar31 * dVar12 - dVar22;
    dVar36 = dVar14 * dVar12 - dVar42;
    dVar33 = dVar30 * dVar12 - dVar21;
    dVar25 = dVar25 * dVar12 - dVar26;
    dVar21 = dVar21 * ___xmm_3ff0000000000000bff0000000000000;
    dVar26 = dVar26 * _UNK_15076b868;
    dVar14 = (dVar21 * dVar36 +
             (dVar26 * dVar34 * ___xmm_bff00000000000003ff0000000000000 - dVar22 * dVar25)) -
             dVar42 * dVar33 * ___xmm_3ff0000000000000bff0000000000000;
    dVar30 = (dVar26 * dVar36 + (dVar21 * dVar34 * _UNK_15076c6f8 - dVar42 * dVar25)) -
             dVar22 * dVar33 * _UNK_15076b868;
    lVar16 = lVar19 * 0x20;
    pdVar1 = (double *)(param_1 + 0x3e0 + lVar16);
    dVar32 = *pdVar1;
    dVar15 = pdVar1[1];
    pdVar1 = (double *)(param_1 + 0x3f0 + lVar16);
    dVar12 = *pdVar1;
    dVar22 = pdVar1[1];
    pdVar1 = (double *)(param_1 + 0x130 + lVar16);
    dVar42 = *pdVar1;
    dVar31 = pdVar1[1];
    pdVar1 = (double *)(param_1 + 0x140 + lVar16);
    dVar37 = *pdVar1;
    dVar40 = pdVar1[1];
    uVar20 = -(ulonglong)
              (0.0 <= dVar15 * dVar31 + dVar22 * dVar40 + dVar32 * dVar42 + dVar12 * dVar37);
    dVar29 = (double)(~uVar20 & __real_bff0000000000000 |
                     (ulonglong)__real_3ff0000000000000 & uVar20);
    dVar42 = dVar42 * dVar29 - dVar32;
    dVar31 = dVar31 * dVar29 - dVar15;
    dVar37 = dVar37 * dVar29 - dVar12;
    dVar40 = dVar40 * dVar29 - dVar22;
    dVar12 = dVar12 * ___xmm_3ff0000000000000bff0000000000000;
    dVar22 = dVar22 * _UNK_15076b868;
    dVar29 = (dVar12 * dVar31 +
             (dVar22 * dVar42 * ___xmm_bff00000000000003ff0000000000000 - dVar32 * dVar40)) -
             dVar15 * dVar37 * ___xmm_3ff0000000000000bff0000000000000;
    dVar32 = (dVar22 * dVar31 + (dVar12 * dVar42 * _UNK_15076c6f8 - dVar15 * dVar40)) -
             dVar32 * dVar37 * _UNK_15076b868;
    dVar12 = dVar22 * dVar37 +
             dVar31 * *(double *)(param_1 + 0x3e0 + lVar16) +
             (dVar40 * dVar12 - dVar42 * *(double *)(param_1 + 1000 + lVar16));
    dVar22 = dVar26 * dVar33 +
             dVar36 * *(double *)(param_1 + 0x3e0 + lVar17) +
             (dVar25 * dVar21 - dVar34 * *(double *)(param_1 + 1000 + lVar17));
    dVar12 = ((dVar30 + dVar30) - (dVar32 + dVar32)) * dVar38 +
             ((dVar14 + dVar14) - (dVar29 + dVar29)) * dVar23 +
             ((dVar22 + dVar22) - (dVar12 + dVar12)) * dVar41 + param_10 * param_4;
    uVar45 = *(undefined4 *)param_8;
    uVar46 = *(undefined4 *)((longlong)param_8 + 4);
    uVar47 = *(undefined4 *)(param_8 + 1);
    uVar48 = *(undefined4 *)((longlong)param_8 + 0xc);
    local_158 = param_8[2];
  }
  pdVar1 = (double *)(param_1 + 0x240 + lVar18);
  dVar38 = (dVar41 * *(double *)(param_1 + 0x288 + lVar18) +
           dVar38 * *(double *)(param_1 + 0x268 + lVar18) +
           dVar23 * *(double *)(param_1 + 0x248 + lVar18)) * dVar38 +
           (dVar41 * *(double *)(param_1 + 0x280 + lVar18) +
           dVar38 * *(double *)(param_1 + 0x260 + lVar18) +
           dVar23 * *(double *)(param_1 + 0x240 + lVar18)) * dVar23 +
           (*(double *)(param_1 + 0x250 + lVar18) * dVar23 +
            *(double *)(param_1 + 0x270 + lVar18) * dVar38 +
           *(double *)(param_1 + 0x290 + lVar18) * dVar41) * dVar41;
  dVar23 = __real_3ff0000000000000;
  if ((param_7 & 1) != 0) {
    dVar23 = __real_3ff0000000000000 / dVar38;
  }
  dVar41 = param_5 * dVar23 * param_4 * param_4;
  param_4 = param_6 * dVar23 * param_4;
  dVar40 = ((dVar41 * param_9 - param_4 * dVar12) - *param_11) *
           (__real_3ff0000000000000 / ((param_4 + dVar41) * dVar38 + __real_3ff0000000000000)) *
           *(double *)(param_1 + 0x4c8);
  dVar22 = (double)((ulonglong)dVar38 ^ __xmm_80000000000000008000000000000000) * dVar40;
  dVar31 = (double)CONCAT44(uVar46,uVar45) * dVar22;
  dVar14 = (double)CONCAT44(uVar48,uVar47) * dVar22;
  lVar16 = lVar19 * 0x20;
  pdVar2 = (double *)(param_1 + 0x1b0 + lVar16);
  dVar30 = *pdVar2;
  dVar33 = pdVar2[1];
  pdVar2 = (double *)(param_1 + 0x1a0 + lVar16);
  dVar25 = *pdVar2;
  dVar29 = pdVar2[1];
  dVar23 = *(double *)(param_1 + 0x1b8 + lVar16);
  dVar38 = *(double *)(param_1 + 0x1b0 + lVar16);
  dVar41 = *(double *)(param_1 + 0x1a8 + lVar16);
  dVar12 = *(double *)(param_1 + 0x1a0 + lVar16);
  local_158 = local_158 * dVar22;
  dVar22 = (dVar41 * local_158 * ___xmm_3ff0000000000000bff0000000000000 +
           dVar14 * dVar30 +
           dVar31 * dVar23 * ___xmm_bff00000000000003ff0000000000000 + dVar25 * 0.0) *
           ___xmm_3fe00000000000003fe0000000000000 + dVar25;
  dVar42 = (dVar12 * local_158 * _UNK_15076b868 +
           dVar14 * dVar33 + dVar31 * dVar38 * _UNK_15076c6f8 + dVar29 * 0.0) * _UNK_150689678 +
           dVar29;
  dVar30 = (dVar23 * local_158 * ___xmm_bff00000000000003ff0000000000000 +
           ((dVar31 * dVar41 * ___xmm_bff00000000000003ff0000000000000 + dVar30 * 0.0) -
           dVar14 * dVar25)) * ___xmm_3fe00000000000003fe0000000000000 + dVar30;
  dVar33 = (dVar38 * local_158 * _UNK_15076c6f8 +
           ((dVar31 * dVar12 * _UNK_15076c6f8 + dVar33 * 0.0) - dVar14 * dVar29)) * _UNK_150689678 +
           dVar33;
  dVar23 = dVar42 * dVar42 + dVar33 * dVar33 + dVar22 * dVar22 + dVar30 * dVar30;
  uVar20 = ~-(ulonglong)(dVar23 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
  dVar23 = __real_3ff0000000000000 / SQRT(dVar23);
  uVar24 = ~uVar20 & ___xmm_3ff00000000000000000000000000000;
  uVar27 = ~uVar20 & _UNK_15061cbc8;
  *(ulonglong *)(param_1 + 0x1a0 + lVar16) = (ulonglong)(dVar22 * dVar23) & uVar20;
  *(ulonglong *)(param_1 + 0x1a8 + lVar16) = (ulonglong)(dVar42 * dVar23) & uVar20;
  *(ulonglong *)(param_1 + 0x1b0 + lVar16) = uVar24 | (ulonglong)(dVar30 * dVar23) & uVar20;
  *(ulonglong *)(param_1 + 0x1b8 + lVar16) = uVar27 | (ulonglong)(dVar33 * dVar23) & uVar20;
  uVar20 = __real_bff0000000000000;
  uVar24 = -(ulonglong)
            (0.0 <= *(double *)(param_1 + 0x1a8) * *(double *)(param_1 + 0x1c8) +
                    *(double *)(param_1 + 0x1b8) * *(double *)(param_1 + 0x1d8) +
                    *(double *)(param_1 + 0x1a0) * *(double *)(param_1 + 0x1c0) +
                    *(double *)(param_1 + 0x1b0) * *(double *)(param_1 + 0x1d0));
  dVar38 = (double)(~uVar24 & __real_bff0000000000000 | uVar24 & (ulonglong)dVar39);
  dVar23 = *(double *)(param_1 + 0x1c8) * dVar38;
  auVar6._8_4_ = SUB84(dVar23,0);
  auVar6._0_8_ = *(double *)(param_1 + 0x1c0) * dVar38;
  auVar6._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x1c0) = auVar6;
  *(double *)(param_1 + 0x1d0) = *(double *)(param_1 + 0x1d0) * dVar38;
  *(double *)(param_1 + 0x1d8) = *(double *)(param_1 + 0x1d8) * dVar38;
  dVar21 = _UNK_150689688;
  dVar29 = ___xmm_3ff00000000000003ff0000000000000;
  lVar18 = lVar19 * 0x60;
  dVar23 = *(double *)(param_1 + 0x1b8 + lVar16);
  dVar38 = *(double *)(param_1 + 0x1b0 + lVar16);
  pdVar2 = (double *)(param_1 + 0x1a0 + lVar16);
  dVar14 = *pdVar2;
  dVar30 = pdVar2[1];
  pdVar2 = (double *)(param_1 + 0x1a8 + lVar16);
  dVar33 = *pdVar2;
  dVar25 = pdVar2[1];
  pdVar2 = (double *)(param_1 + 0x20 + lVar18);
  dVar26 = *pdVar2;
  dVar32 = pdVar2[1];
  pdVar2 = (double *)(param_1 + 0x28 + lVar18);
  dVar41 = *(double *)(param_1 + 0x1a0 + lVar16);
  dVar37 = *(double *)(param_1 + 0x1b0 + lVar16) * *(double *)(param_1 + 0x20 + lVar18) -
           dVar41 * *(double *)(param_1 + 0x30 + lVar18);
  dVar42 = *pdVar2 * dVar14 - dVar26 * dVar33;
  dVar31 = pdVar2[1] * dVar30 - dVar32 * dVar25;
  dVar42 = dVar42 + dVar42;
  dVar31 = dVar31 + dVar31;
  dVar37 = dVar37 + dVar37;
  dVar12 = *(double *)(param_1 + 0x30 + lVar18);
  pdVar2 = (double *)(param_1 + 0x170 + lVar19 * 0x18);
  dVar15 = pdVar2[1];
  dVar22 = *(double *)(param_1 + 0x180 + lVar19 * 0x18);
  pdVar3 = (double *)(param_1 + 0x100 + lVar19 * 0x18);
  *pdVar3 = *pdVar2 + (dVar42 * dVar30 - dVar37 * dVar25) + dVar23 * dVar31 + dVar26;
  pdVar3[1] = dVar15 + (dVar31 * dVar38 - dVar41 * dVar42) + dVar23 * dVar37 + dVar32;
  *(double *)(param_1 + 0x110 + lVar19 * 0x18) =
       dVar42 * dVar23 + dVar12 + (dVar37 * dVar14 - dVar31 * dVar33) + dVar22;
  pdVar2 = (double *)(param_1 + 0x1b8 + lVar16);
  dVar38 = *pdVar2;
  dVar23 = *pdVar2;
  pdVar2 = (double *)(param_1 + 0x10 + lVar18);
  dVar26 = *pdVar2;
  dVar32 = pdVar2[1];
  dVar15 = *(double *)(param_1 + lVar18);
  dVar37 = ((double *)(param_1 + lVar18))[1];
  dVar41 = *(double *)(param_1 + 0x18 + lVar18);
  dVar12 = *(double *)(param_1 + 0x10 + lVar18);
  pdVar2 = (double *)(param_1 + 0x1a0 + lVar16);
  dVar42 = *pdVar2;
  dVar22 = *pdVar2;
  dVar31 = *(double *)(param_1 + 8 + lVar18);
  pdVar2 = (double *)(param_1 + 0x1a8 + lVar16);
  dVar30 = *pdVar2;
  dVar14 = *pdVar2;
  pdVar2 = (double *)(param_1 + 0x1b0 + lVar16);
  dVar33 = *pdVar2;
  dVar25 = *pdVar2;
  dVar11 = *(double *)(param_1 + lVar18) * dVar25 * dVar11 +
           dVar32 * dVar14 + dVar22 * dVar12 * dVar28 + dVar23 * dVar37;
  dVar23 = dVar12 * dVar25 * dVar28 +
           ((dVar22 * *(double *)(param_1 + lVar18) * dVar28 + dVar23 * dVar32) - dVar37 * dVar14);
  auVar7._8_4_ = SUB84(dVar11,0);
  auVar7._0_8_ = dVar31 * dVar33 * dVar35 +
                 dVar26 * dVar30 + dVar42 * dVar41 * dVar10 + dVar38 * dVar15;
  auVar7._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x130 + lVar16) = auVar7;
  auVar44._8_4_ = SUB84(dVar23,0);
  auVar44._0_8_ =
       dVar41 * dVar33 * dVar10 + ((dVar42 * dVar31 * dVar10 + dVar38 * dVar26) - dVar15 * dVar30);
  auVar44._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x140 + lVar16) = auVar44;
  uVar24 = -(ulonglong)
            (0.0 <= *(double *)(param_1 + 0x138) * *(double *)(param_1 + 0x158) +
                    *(double *)(param_1 + 0x148) * *(double *)(param_1 + 0x168) +
                    *(double *)(param_1 + 0x130) * *(double *)(param_1 + 0x150) +
                    *(double *)(param_1 + 0x140) * *(double *)(param_1 + 0x160));
  dVar38 = (double)(~uVar24 & uVar20 | uVar24 & (ulonglong)dVar39);
  dVar23 = *(double *)(param_1 + 0x158) * dVar38;
  auVar8._8_4_ = SUB84(dVar23,0);
  auVar8._0_8_ = *(double *)(param_1 + 0x150) * dVar38;
  auVar8._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x150) = auVar8;
  *(double *)(param_1 + 0x160) = *(double *)(param_1 + 0x160) * dVar38;
  *(double *)(param_1 + 0x168) = *(double *)(param_1 + 0x168) * dVar38;
  pdVar2 = (double *)(param_1 + 0x1b0 + lVar16);
  dVar31 = *pdVar2;
  dVar33 = pdVar2[1];
  pdVar2 = (double *)(param_1 + 0x1a0 + lVar16);
  dVar25 = *pdVar2;
  dVar28 = pdVar2[1];
  dVar25 = dVar25 + dVar25;
  dVar28 = dVar28 + dVar28;
  dVar31 = dVar31 + dVar31;
  dVar23 = *(double *)(param_1 + 0x1a0 + lVar16);
  dVar38 = *(double *)(param_1 + 0x1a8 + lVar16);
  dVar12 = dVar23 * dVar25;
  dVar22 = dVar23 * dVar28;
  dVar11 = dVar38 * dVar28;
  dVar38 = dVar38 * dVar31;
  pdVar2 = (double *)(param_1 + 0x1b8 + lVar16);
  dVar41 = *pdVar2;
  dVar35 = *pdVar2;
  dVar25 = dVar25 * dVar41;
  dVar28 = dVar28 * dVar35;
  dVar10 = *(double *)(param_1 + 0x1b0 + lVar16) * dVar31;
  dVar41 = dVar31 * dVar41;
  dVar42 = dVar41 + dVar22;
  dVar14 = dVar25 + dVar38;
  dVar30 = dVar28 + dVar23 * dVar31;
  dVar38 = dVar38 - dVar25;
  dVar28 = dVar23 * dVar31 - dVar28;
  dVar41 = dVar22 - dVar41;
  dVar22 = dVar22 - (dVar33 + dVar33) * dVar35;
  dVar29 = dVar29 - (dVar10 + dVar11);
  dVar21 = dVar21 - (dVar10 + dVar12);
  dVar39 = dVar39 - (dVar11 + dVar12);
  auVar43._8_8_ = dVar21;
  auVar43._0_8_ = dVar29;
  dVar23 = *(double *)(param_1 + 0xc0 + lVar19 * 0x18);
  dVar35 = *(double *)(param_1 + 0xd0 + lVar19 * 0x18);
  dVar11 = *(double *)(param_1 + 200 + lVar19 * 0x18);
  auVar13._8_4_ = SUB84(dVar22,0);
  auVar13._0_8_ = dVar41;
  auVar13._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
  auVar44 = blendpd(auVar43,auVar13,1);
  dVar25 = dVar30 * 0.0 + dVar41 * 0.0 + dVar29 * dVar23;
  dVar26 = dVar30 * 0.0 + dVar41 * dVar11 + dVar29 * 0.0;
  dVar41 = dVar35 * dVar30 + dVar41 * 0.0 + dVar29 * 0.0;
  auVar9._8_4_ = SUB84(dVar42,0);
  auVar9._0_8_ = dVar29;
  auVar9._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
  dVar22 = dVar38 * 0.0 + dVar21 * 0.0 + dVar42 * dVar23;
  dVar31 = dVar38 * 0.0 + dVar11 * dVar21 + dVar42 * 0.0;
  dVar12 = dVar35 * dVar38 + dVar21 * 0.0 + dVar42 * 0.0;
  dVar10 = dVar39 * 0.0 + dVar14 * 0.0 + dVar23 * dVar28;
  dVar11 = dVar39 * 0.0 + dVar14 * dVar11 + dVar28 * 0.0;
  dVar42 = auVar44._0_8_;
  dVar33 = auVar44._8_8_;
  dVar35 = dVar35 * dVar39 +
           dVar14 * ___xmm_00000000000000000000000000000000 +
           dVar28 * ___xmm_00000000000000000000000000000000;
  dStack_120 = auVar9._8_8_;
  dVar23 = dVar12 * dVar38 + dVar33 * dVar31 + dVar22 * dStack_120;
  *pdVar1 = dVar41 * dVar30 + dVar42 * dVar26 + dVar25 * dVar29;
  pdVar1[1] = dVar41 * dVar38 + dVar33 * dVar26 + dVar25 * dStack_120;
  pdVar1[2] = dVar41 * dVar39 + dVar26 * dVar14 + dVar28 * dVar25;
  pdVar1[3] = 0.0;
  auVar4._8_4_ = SUB84(dVar23,0);
  auVar4._0_8_ = dVar12 * dVar30 + dVar42 * dVar31 + dVar22 * dVar29;
  auVar4._12_4_ = (int)((ulonglong)dVar23 >> 0x20);
  *(undefined1 (*) [16])(pdVar1 + 4) = auVar4;
  pdVar1[6] = dVar12 * dVar39 + dVar31 * dVar14 + dVar28 * dVar22;
  pdVar1[7] = 0.0;
  pdVar1[8] = dVar35 * dVar30 + dVar42 * dVar11 + dVar10 * dVar29;
  pdVar1[9] = dVar35 * dVar38 + dVar33 * dVar11 + dVar10 * dStack_120;
  pdVar1[10] = dVar35 * dVar39 + dVar11 * dVar14 + dVar28 * dVar10;
  pdVar1[0xd] = 0.0;
  pdVar1[0xe] = 0.0;
  pdVar1[0xb] = 0.0;
  pdVar1[0xc] = 0.0;
  pdVar1[0xf] = 1.0;
  *param_11 = *param_11 + dVar40;
  dVar40 = (double)(int)(-(uint)(param_2 != 0) | 1) * dVar40;
  dVar38 = *(double *)(param_1 + 0x440) + param_8[1] * dVar40;
  dVar23 = param_8[2];
  auVar5._8_4_ = SUB84(dVar38,0);
  auVar5._0_8_ = *(double *)(param_1 + 0x438) + *param_8 * dVar40;
  auVar5._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x438) = auVar5;
  *(double *)(param_1 + 0x448) = dVar40 * dVar23 + *(double *)(param_1 + 0x448);
  return;
}

// ApplyRotationConstraintSoftDD_sse4 @ 140a10600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyRotationConstraintSoftDD_sse4
               (double *param_1,double param_2,double param_3,double param_4,byte param_5,
               undefined1 (*param_6) [16],double param_7,double param_8,double *param_9)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar43;
  undefined1 auVar40 [16];
  double dVar44;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  
  dVar6 = _UNK_15076c6f8;
  dVar4 = ___xmm_bff00000000000003ff0000000000000;
  dVar3 = _UNK_15076b868;
  dVar17 = ___xmm_3ff0000000000000bff0000000000000;
  dVar34 = __real_3ff0000000000000;
  dVar16 = *(double *)*param_6;
  dVar13 = *(double *)(*param_6 + 8);
  dVar15 = *(double *)param_6[1];
  uVar50 = SUB84(dVar15,0);
  uVar51 = (undefined4)((ulonglong)dVar15 >> 0x20);
  auVar28 = *param_6;
  dVar33 = auVar28._0_8_;
  uVar45 = auVar28._0_4_;
  uVar46 = auVar28._4_4_;
  dVar14 = auVar28._8_8_;
  uVar47 = auVar28._8_4_;
  uVar48 = auVar28._12_4_;
  dVar23 = (param_1[0x51] * dVar15 + param_1[0x4d] * dVar13 + param_1[0x49] * dVar16) * dVar14 +
           (param_1[0x50] * dVar15 + param_1[0x4c] * dVar13 + param_1[0x48] * dVar16) * dVar33 +
           (param_1[0x52] * dVar15 + param_1[0x4e] * dVar13 + param_1[0x4a] * dVar16) * dVar15;
  dVar16 = (param_1[0x61] * dVar15 + param_1[0x5d] * dVar13 + param_1[0x59] * dVar16) * dVar14 +
           (param_1[0x60] * dVar15 + param_1[0x5c] * dVar13 + param_1[0x58] * dVar16) * dVar33 +
           (param_1[0x62] * dVar15 + dVar13 * param_1[0x5e] + dVar16 * param_1[0x5a]) * dVar15;
  dVar13 = 0.0;
  if (__real_3f1a36e2eb1c432d < param_4) {
    dVar38 = param_1[0x7c];
    dVar43 = param_1[0x7d];
    dVar13 = param_1[0x7e];
    dVar19 = param_1[0x7f];
    uVar11 = -(ulonglong)
              (0.0 <= dVar43 * param_1[0x27] + dVar19 * param_1[0x29] +
                      dVar38 * param_1[0x26] + dVar13 * param_1[0x28]);
    dVar37 = (double)(~uVar11 & __real_bff0000000000000 |
                     uVar11 & (ulonglong)__real_3ff0000000000000);
    dVar22 = param_1[0x26] * dVar37 - dVar38;
    dVar26 = param_1[0x27] * dVar37 - dVar43;
    dVar20 = param_1[0x28] * dVar37 - dVar13;
    dVar24 = param_1[0x29] * dVar37 - dVar19;
    dVar13 = dVar13 * ___xmm_3ff0000000000000bff0000000000000;
    dVar19 = dVar19 * _UNK_15076b868;
    dVar44 = (dVar13 * dVar26 +
             (dVar19 * dVar22 * ___xmm_bff00000000000003ff0000000000000 - dVar38 * dVar24)) -
             dVar43 * dVar20 * ___xmm_3ff0000000000000bff0000000000000;
    dVar9 = (dVar19 * dVar26 + (dVar13 * dVar22 * _UNK_15076c6f8 - dVar43 * dVar24)) -
            dVar38 * dVar20 * _UNK_15076b868;
    dVar32 = param_1[0x82];
    dVar39 = param_1[0x83];
    dVar25 = param_1[0x80];
    dVar10 = param_1[0x81];
    uVar11 = -(ulonglong)
              (0.0 <= dVar10 * param_1[0x2b] + dVar39 * param_1[0x2d] +
                      dVar25 * param_1[0x2a] + dVar32 * param_1[0x2c]);
    dVar38 = (double)(~uVar11 & __real_bff0000000000000 |
                     (ulonglong)__real_3ff0000000000000 & uVar11);
    dVar43 = param_1[0x2a] * dVar38 - dVar25;
    dVar31 = param_1[0x2b] * dVar38 - dVar10;
    dVar37 = param_1[0x2c] * dVar38 - dVar32;
    dVar38 = param_1[0x2d] * dVar38 - dVar39;
    dVar32 = dVar32 * ___xmm_3ff0000000000000bff0000000000000;
    dVar39 = dVar39 * _UNK_15076b868;
    dVar21 = (dVar32 * dVar31 +
             (dVar39 * dVar43 * ___xmm_bff00000000000003ff0000000000000 - dVar25 * dVar38)) -
             dVar10 * dVar37 * ___xmm_3ff0000000000000bff0000000000000;
    dVar25 = (dVar39 * dVar31 + (dVar32 * dVar43 * _UNK_15076c6f8 - dVar10 * dVar38)) -
             dVar25 * dVar37 * _UNK_15076b868;
    dVar37 = dVar39 * dVar37 + dVar31 * param_1[0x80] + (dVar38 * dVar32 - dVar43 * param_1[0x81]);
    dVar13 = dVar19 * dVar20 + dVar26 * param_1[0x7c] + (dVar24 * dVar13 - dVar22 * param_1[0x7d]);
    dVar13 = dVar14 * ((dVar9 + dVar9) - (dVar25 + dVar25)) +
             dVar33 * ((dVar44 + dVar44) - (dVar21 + dVar21)) +
             ((dVar13 + dVar13) - (dVar37 + dVar37)) * dVar15 + param_8 * param_2;
    uVar50 = (undefined4)*(undefined8 *)param_6[1];
    uVar51 = (undefined4)((ulonglong)*(undefined8 *)param_6[1] >> 0x20);
    uVar45 = *(undefined4 *)*param_6;
    uVar46 = *(undefined4 *)(*param_6 + 4);
    uVar47 = *(undefined4 *)(*param_6 + 8);
    uVar48 = *(undefined4 *)(*param_6 + 0xc);
  }
  dVar33 = dVar23 + dVar16;
  dVar15 = __real_3ff0000000000000;
  if ((param_5 & 1) != 0) {
    dVar15 = __real_3ff0000000000000 / dVar33;
  }
  dVar14 = param_3 * dVar15 * param_2 * param_2;
  param_2 = param_4 * dVar15 * param_2;
  dVar13 = ((dVar14 * param_7 - param_2 * dVar13) - *param_9) *
           (__real_3ff0000000000000 / (dVar33 * (param_2 + dVar14) + __real_3ff0000000000000)) *
           param_1[0x99];
  if (0.0 < param_1[0x1e]) {
    dVar23 = dVar23 * dVar13;
    dVar22 = dVar23 * (double)CONCAT44(uVar46,uVar45);
    dVar26 = dVar23 * (double)CONCAT44(uVar48,uVar47);
    dVar15 = param_1[0x36];
    dVar33 = param_1[0x37];
    dVar14 = param_1[0x34];
    dVar19 = param_1[0x35];
    dVar23 = dVar23 * (double)CONCAT44(uVar51,uVar50);
    dVar37 = (param_1[0x35] * dVar23 * ___xmm_3ff0000000000000bff0000000000000 +
             dVar26 * dVar15 +
             dVar22 * param_1[0x37] * ___xmm_bff00000000000003ff0000000000000 + dVar14 * 0.0) *
             ___xmm_3fe00000000000003fe0000000000000 + dVar14;
    dVar43 = (param_1[0x34] * dVar23 * _UNK_15076b868 +
             dVar26 * dVar33 + dVar22 * param_1[0x36] * _UNK_15076c6f8 + dVar19 * 0.0) *
             _UNK_150689678 + dVar19;
    dVar15 = (param_1[0x37] * dVar23 * ___xmm_bff00000000000003ff0000000000000 +
             ((dVar22 * param_1[0x35] * ___xmm_bff00000000000003ff0000000000000 + dVar15 * 0.0) -
             dVar26 * dVar14)) * ___xmm_3fe00000000000003fe0000000000000 + dVar15;
    dVar33 = (param_1[0x36] * dVar23 * _UNK_15076c6f8 +
             ((dVar22 * param_1[0x34] * _UNK_15076c6f8 + dVar33 * 0.0) - dVar26 * dVar19)) *
             _UNK_150689678 + dVar33;
    dVar14 = dVar43 * dVar43 + dVar33 * dVar33 + dVar37 * dVar37 + dVar15 * dVar15;
    uVar11 = ~-(ulonglong)(dVar14 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
    dVar23 = __real_3ff0000000000000 / SQRT(dVar14);
    dVar38 = (double)((ulonglong)(dVar37 * dVar23) & uVar11);
    dVar43 = (double)((ulonglong)(dVar43 * dVar23) & uVar11);
    dVar14 = (double)(((ulonglong)(dVar15 * dVar23) ^ ___xmm_3ff00000000000000000000000000000) &
                     uVar11);
    dVar37 = (double)(___xmm_3ff00000000000000000000000000000 ^ (ulonglong)dVar14);
    dVar26 = (double)(_UNK_15061cbc8 ^ ((ulonglong)(dVar33 * dVar23) ^ _UNK_15061cbc8) & uVar11);
    uVar49 = (undefined4)((ulonglong)dVar26 >> 0x20);
    param_1[0x34] = dVar38;
    param_1[0x35] = dVar43;
    auVar7._8_4_ = SUB84(dVar26,0);
    auVar7._0_8_ = dVar37;
    auVar7._12_4_ = uVar49;
    *(undefined1 (*) [16])(param_1 + 0x36) = auVar7;
    auVar27._8_8_ = dVar43;
    auVar27._0_8_ = dVar38;
    auVar8._8_4_ = SUB84(dVar26,0);
    auVar8._0_8_ = dVar37;
    auVar8._12_4_ = uVar49;
    auVar28 = blendpd(auVar27,auVar8,2);
    dVar23 = param_1[4] * dVar37 - param_1[6] * auVar28._0_8_;
    dVar15 = param_1[5] * dVar38 - dVar43 * param_1[4];
    dVar33 = param_1[6] * dVar43 - dVar37 * param_1[5];
    dVar23 = dVar23 + dVar23;
    dVar15 = dVar15 + dVar15;
    dVar33 = dVar33 + dVar33;
    param_1[0x20] =
         param_1[0x2e] + (dVar15 * dVar43 - dVar23 * dVar14) + dVar33 * dVar26 + param_1[4];
    param_1[0x21] =
         param_1[0x2f] + (dVar33 * dVar14 - dVar15 * dVar38) + dVar23 * dVar26 + param_1[5];
    param_1[0x22] =
         dVar26 * dVar15 + param_1[6] + (dVar23 * dVar38 - dVar33 * dVar43) + param_1[0x30];
    auVar18._8_4_ = SUB84(dVar38,0);
    auVar18._0_8_ = dVar38;
    auVar18._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
    dVar19 = auVar18._8_8_;
    auVar35._8_4_ = SUB84(dVar37,0);
    auVar35._0_8_ = dVar37;
    auVar35._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
    param_1[0x26] =
         param_1[1] * dVar37 * dVar17 +
         param_1[2] * dVar43 + param_1[3] * dVar38 * dVar4 + *param_1 * dVar26;
    param_1[0x27] =
         *param_1 * auVar35._8_8_ * dVar3 +
         param_1[3] * dVar43 + param_1[2] * dVar19 * dVar6 + param_1[1] * dVar26;
    param_1[0x28] =
         param_1[3] * dVar37 * dVar4 +
         ((param_1[1] * dVar38 * dVar4 + param_1[2] * dVar26) - *param_1 * dVar43);
    param_1[0x29] =
         param_1[2] * auVar35._8_8_ * dVar6 +
         ((*param_1 * dVar19 * dVar6 + param_1[3] * dVar26) - param_1[1] * dVar43);
    dVar33 = dVar43 + dVar43;
    dVar14 = dVar37 + dVar37;
    dVar15 = dVar38 * (dVar38 + dVar38);
    dVar19 = dVar19 * dVar33;
    dVar23 = (dVar38 + dVar38) * dVar26;
    dVar22 = dVar26 * dVar14 + dVar19;
    dVar3 = dVar23 + dVar43 * dVar14;
    dVar4 = dVar33 * dVar26 + dVar14 * dVar38;
    dVar23 = dVar43 * dVar14 - dVar23;
    dVar17 = dVar14 * dVar38 - dVar33 * dVar26;
    dVar6 = dVar19 - dVar26 * dVar14;
    dVar19 = dVar19 - dVar26 * (dVar26 + dVar26);
    dVar26 = ___xmm_3ff00000000000003ff0000000000000 - (dVar14 * dVar37 + dVar43 * dVar33);
    dVar37 = _UNK_150689688 - (dVar14 * dVar37 + dVar15);
    dVar34 = dVar34 - (dVar43 * dVar33 + dVar15);
    auVar40._8_8_ = dVar37;
    auVar40._0_8_ = dVar26;
    dVar15 = param_1[0x18];
    dVar33 = param_1[0x1a];
    dVar14 = param_1[0x19];
    auVar5._8_4_ = SUB84(dVar19,0);
    auVar5._0_8_ = dVar6;
    auVar5._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
    auVar28 = blendpd(auVar40,auVar5,1);
    dVar38 = dVar4 * 0.0 + dVar6 * 0.0 + dVar26 * dVar15;
    dVar43 = dVar4 * 0.0 + dVar6 * dVar14 + dVar26 * 0.0;
    dVar6 = dVar33 * dVar4 + dVar6 * 0.0 + dVar26 * ___xmm_00000000000000000000000000000000;
    dVar31 = dVar23 * __real_0000000000000000 + dVar37 * 0.0 + dVar22 * dVar15;
    dVar32 = dVar23 * __real_0000000000000000 + dVar14 * dVar37 + dVar22 * 0.0;
    dVar19 = dVar33 * dVar23 + dVar37 * 0.0 + dVar22 * 0.0;
    dVar15 = dVar34 * __real_0000000000000000 + dVar3 * 0.0 + dVar15 * dVar17;
    dVar14 = dVar34 * __real_0000000000000000 + dVar3 * dVar14 + dVar17 * 0.0;
    dVar39 = auVar28._0_8_;
    dVar44 = auVar28._8_8_;
    dVar37 = dVar33 * dVar34 + dVar3 * ___xmm_00000000000000000000000000000000 + dVar17 * 0.0;
    dVar33 = dVar6 * dVar23 + dVar44 * dVar43 + dVar38 * dVar22;
    auVar28._8_4_ = SUB84(dVar33,0);
    auVar28._0_8_ = dVar6 * dVar4 + dVar39 * dVar43 + dVar38 * dVar26;
    auVar28._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x48) = auVar28;
    param_1[0x4a] = dVar6 * dVar34 + dVar43 * dVar3 + dVar17 * dVar38;
    param_1[0x4b] = 0.0;
    param_1[0x4c] = dVar19 * dVar4 + dVar39 * dVar32 + dVar31 * dVar26;
    param_1[0x4d] = dVar19 * dVar23 + dVar44 * dVar32 + dVar31 * dVar22;
    param_1[0x4e] = dVar19 * dVar34 + dVar32 * dVar3 + dVar17 * dVar31;
    param_1[0x4f] = 0.0;
    param_1[0x50] = dVar37 * dVar4 + dVar39 * dVar14 + dVar15 * dVar26;
    param_1[0x51] = dVar37 * dVar23 + dVar44 * dVar14 + dVar15 * dVar22;
    param_1[0x52] = dVar37 * dVar34 + dVar14 * dVar3 + dVar17 * dVar15;
    param_1[0x55] = 0.0;
    param_1[0x56] = 0.0;
    param_1[0x53] = 0.0;
    param_1[0x54] = 0.0;
    param_1[0x57] = 1.0;
  }
  dVar3 = _UNK_15076c6f8;
  dVar17 = ___xmm_bff00000000000003ff0000000000000;
  dVar34 = _UNK_15076b868;
  dVar23 = ___xmm_3ff0000000000000bff0000000000000;
  dVar14 = _UNK_150689688;
  dVar33 = ___xmm_3ff00000000000003ff0000000000000;
  dVar15 = __real_3ff0000000000000;
  if (0.0 < param_1[0x1f]) {
    dVar16 = (double)((ulonglong)dVar16 ^ __xmm_80000000000000008000000000000000) * dVar13;
    dVar22 = (double)CONCAT44(uVar51,uVar50) * dVar16;
    dVar6 = (double)CONCAT44(uVar46,uVar45) * dVar16;
    dVar16 = (double)CONCAT44(uVar48,uVar47) * dVar16;
    dVar4 = param_1[0x3a];
    dVar19 = param_1[0x3b];
    dVar26 = param_1[0x38];
    dVar37 = param_1[0x39];
    dVar38 = (param_1[0x39] * dVar22 * ___xmm_3ff0000000000000bff0000000000000 +
             dVar16 * dVar4 +
             dVar6 * param_1[0x3b] * ___xmm_bff00000000000003ff0000000000000 + dVar26 * 0.0) *
             ___xmm_3fe00000000000003fe0000000000000 + dVar26;
    dVar43 = (param_1[0x38] * dVar22 * _UNK_15076b868 +
             dVar16 * dVar19 + dVar6 * param_1[0x3a] * _UNK_15076c6f8 + dVar37 * 0.0) *
             _UNK_150689678 + dVar37;
    dVar4 = (param_1[0x3b] * dVar22 * ___xmm_bff00000000000003ff0000000000000 +
            ((dVar6 * param_1[0x39] * ___xmm_bff00000000000003ff0000000000000 + dVar4 * 0.0) -
            dVar16 * dVar26)) * ___xmm_3fe00000000000003fe0000000000000 + dVar4;
    dVar19 = (param_1[0x3a] * dVar22 * _UNK_15076c6f8 +
             ((dVar6 * param_1[0x38] * _UNK_15076c6f8 + dVar19 * 0.0) - dVar16 * dVar37)) *
             _UNK_150689678 + dVar19;
    dVar16 = dVar43 * dVar43 + dVar19 * dVar19 + dVar38 * dVar38 + dVar4 * dVar4;
    uVar11 = ~-(ulonglong)(dVar16 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
    dVar16 = __real_3ff0000000000000 / SQRT(dVar16);
    dVar26 = (double)((ulonglong)(dVar38 * dVar16) & uVar11);
    dVar37 = (double)((ulonglong)(dVar43 * dVar16) & uVar11);
    dVar6 = (double)(((ulonglong)(dVar4 * dVar16) ^ ___xmm_3ff00000000000000000000000000000) &
                    uVar11);
    auVar41._0_8_ = (double)(___xmm_3ff00000000000000000000000000000 ^ (ulonglong)dVar6);
    auVar41._8_8_ =
         (double)(_UNK_15061cbc8 ^ ((ulonglong)(dVar19 * dVar16) ^ _UNK_15061cbc8) & uVar11);
    param_1[0x38] = dVar26;
    param_1[0x39] = dVar37;
    *(undefined1 (*) [16])(param_1 + 0x3a) = auVar41;
    auVar29._8_8_ = dVar37;
    auVar29._0_8_ = dVar26;
    auVar28 = blendpd(auVar29,auVar41,2);
    dVar19 = param_1[0x10] * auVar41._0_8_ - param_1[0x12] * auVar28._0_8_;
    dVar16 = param_1[0x11] * dVar26 - dVar37 * param_1[0x10];
    dVar4 = param_1[0x12] * dVar37 - auVar41._0_8_ * param_1[0x11];
    dVar19 = dVar19 + dVar19;
    dVar16 = dVar16 + dVar16;
    dVar4 = dVar4 + dVar4;
    param_1[0x23] =
         param_1[0x31] + (dVar16 * dVar37 - dVar19 * dVar6) + dVar4 * auVar41._8_8_ + param_1[0x10];
    param_1[0x24] =
         param_1[0x32] + (dVar4 * dVar6 - dVar16 * dVar26) + dVar19 * auVar41._8_8_ + param_1[0x11];
    param_1[0x25] =
         auVar41._8_8_ * dVar16 + param_1[0x12] + (dVar19 * dVar26 - dVar4 * dVar37) + param_1[0x33]
    ;
    auVar30._8_4_ = SUB84(auVar41._0_8_,0);
    auVar30._0_8_ = auVar41._0_8_;
    auVar30._12_4_ = (int)((ulonglong)auVar41._0_8_ >> 0x20);
    dVar16 = param_1[0xe] * auVar30._8_8_ * dVar3 +
             ((param_1[0xc] * dVar26 * dVar3 + param_1[0xf] * auVar41._8_8_) - param_1[0xd] * dVar37
             );
    param_1[0x2a] =
         param_1[0xd] * auVar41._0_8_ * dVar23 +
         param_1[0xe] * dVar37 + param_1[0xf] * dVar26 * dVar17 + param_1[0xc] * auVar41._8_8_;
    param_1[0x2b] =
         param_1[0xc] * auVar30._8_8_ * dVar34 +
         param_1[0xf] * dVar37 + param_1[0xe] * dVar26 * dVar3 + param_1[0xd] * auVar41._8_8_;
    auVar1._8_4_ = SUB84(dVar16,0);
    auVar1._0_8_ = param_1[0xf] * auVar41._0_8_ * dVar17 +
                   ((param_1[0xd] * dVar26 * dVar17 + param_1[0xe] * auVar41._8_8_) -
                   param_1[0xc] * dVar37);
    auVar1._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x2c) = auVar1;
    dVar22 = dVar37 + dVar37;
    dVar16 = auVar41._0_8_ + auVar41._0_8_;
    dVar4 = dVar26 * (dVar26 + dVar26);
    dVar19 = dVar26 * dVar22;
    dVar17 = (dVar26 + dVar26) * auVar41._8_8_;
    dVar6 = auVar41._8_8_ * dVar16 + dVar19;
    dVar23 = dVar17 + dVar37 * dVar16;
    dVar34 = dVar22 * auVar41._8_8_ + dVar16 * dVar26;
    dVar17 = dVar37 * dVar16 - dVar17;
    dVar3 = dVar16 * dVar26 - dVar22 * auVar41._8_8_;
    auVar42._0_8_ = dVar19 - auVar41._8_8_ * dVar16;
    auVar42._8_8_ = dVar19 - auVar41._8_8_ * (auVar41._8_8_ + auVar41._8_8_);
    auVar36._0_8_ = dVar33 - (dVar16 * auVar41._0_8_ + dVar37 * dVar22);
    auVar36._8_8_ = dVar14 - (dVar16 * auVar41._0_8_ + dVar4);
    dVar15 = dVar15 - (dVar37 * dVar22 + dVar4);
    dVar16 = param_1[0x1b];
    dVar33 = param_1[0x1d];
    dVar14 = param_1[0x1c];
    auVar28 = blendpd(auVar36,auVar42,1);
    dVar22 = dVar34 * 0.0 + auVar42._0_8_ * 0.0 + auVar36._0_8_ * dVar16;
    dVar26 = dVar34 * 0.0 + auVar42._0_8_ * dVar14 + auVar36._0_8_ * 0.0;
    dVar32 = dVar33 * dVar34 +
             auVar42._0_8_ * 0.0 + auVar36._0_8_ * ___xmm_00000000000000000000000000000000;
    dVar37 = dVar17 * 0.0 + auVar36._8_8_ * 0.0 + dVar6 * dVar16;
    dVar38 = dVar17 * 0.0 + dVar14 * auVar36._8_8_ + dVar6 * 0.0;
    dVar19 = dVar33 * dVar17 + auVar36._8_8_ * 0.0 + dVar6 * 0.0;
    dVar4 = dVar15 * 0.0 + dVar23 * 0.0 + dVar16 * dVar3;
    dVar14 = dVar15 * 0.0 + dVar23 * dVar14 + dVar3 * 0.0;
    dVar43 = auVar28._0_8_;
    dVar31 = auVar28._8_8_;
    dVar33 = dVar33 * dVar15 + dVar23 * ___xmm_00000000000000000000000000000000 + dVar3 * 0.0;
    dVar16 = dVar32 * dVar17 + dVar31 * dVar26 + dVar22 * dVar6;
    auVar2._8_4_ = SUB84(dVar16,0);
    auVar2._0_8_ = dVar32 * dVar34 + dVar43 * dVar26 + dVar22 * auVar36._0_8_;
    auVar2._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x58) = auVar2;
    param_1[0x5a] = dVar32 * dVar15 + dVar26 * dVar23 + dVar3 * dVar22;
    param_1[0x5b] = 0.0;
    param_1[0x5c] = dVar19 * dVar34 + dVar43 * dVar38 + dVar37 * auVar36._0_8_;
    param_1[0x5d] = dVar19 * dVar17 + dVar31 * dVar38 + dVar37 * dVar6;
    param_1[0x5e] = dVar19 * dVar15 + dVar38 * dVar23 + dVar3 * dVar37;
    param_1[0x5f] = 0.0;
    param_1[0x60] = dVar33 * dVar34 + dVar43 * dVar14 + dVar4 * auVar36._0_8_;
    param_1[0x61] = dVar33 * dVar17 + dVar31 * dVar14 + dVar4 * dVar6;
    param_1[0x62] = dVar33 * dVar15 + dVar14 * dVar23 + dVar3 * dVar4;
    param_1[0x65] = 0.0;
    param_1[0x66] = 0.0;
    param_1[99] = 0.0;
    param_1[100] = 0.0;
    param_1[0x67] = 1.0;
  }
  uVar11 = __real_bff0000000000000;
  dVar15 = __real_3ff0000000000000;
  uVar12 = -(ulonglong)
            (0.0 <= param_1[0x35] * param_1[0x39] + param_1[0x37] * param_1[0x3b] +
                    param_1[0x34] * param_1[0x38] + param_1[0x36] * param_1[0x3a]);
  dVar16 = (double)(~uVar12 & __real_bff0000000000000 | uVar12 & (ulonglong)__real_3ff0000000000000)
  ;
  param_1[0x38] = param_1[0x38] * dVar16;
  param_1[0x39] = param_1[0x39] * dVar16;
  param_1[0x3a] = param_1[0x3a] * dVar16;
  param_1[0x3b] = param_1[0x3b] * dVar16;
  uVar12 = -(ulonglong)
            (0.0 <= param_1[0x27] * param_1[0x2b] + param_1[0x29] * param_1[0x2d] +
                    param_1[0x26] * param_1[0x2a] + param_1[0x28] * param_1[0x2c]);
  dVar16 = (double)(~uVar12 & uVar11 | (ulonglong)dVar15 & uVar12);
  param_1[0x2a] = param_1[0x2a] * dVar16;
  param_1[0x2b] = param_1[0x2b] * dVar16;
  param_1[0x2c] = param_1[0x2c] * dVar16;
  param_1[0x2d] = param_1[0x2d] * dVar16;
  *param_9 = *param_9 + dVar13;
  dVar15 = *(double *)(*param_6 + 8);
  dVar16 = *(double *)param_6[1];
  param_1[0x87] = param_1[0x87] + *(double *)*param_6 * dVar13;
  param_1[0x88] = param_1[0x88] + dVar15 * dVar13;
  param_1[0x89] = dVar13 * dVar16 + param_1[0x89];
  return;
}

// ApplyPointPositionConstraintKD_sse4 @ 140a11960

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPointPositionConstraintKD_sse4
               (longlong param_1,int param_2,int param_3,double *param_4,double param_5)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
  ulonglong *puVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined4 unaff_ESI;
  int iVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  double dVar33;
  double dVar34;
  ulonglong uVar35;
  double dVar36;
  double dVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar47;
  undefined1 auVar46 [16];
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  undefined1 auVar53 [16];
  double dVar57;
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar58;
  undefined1 auVar59 [16];
  double dVar61;
  undefined1 auVar60 [16];
  double dVar62;
  undefined4 uVar63;
  undefined4 uVar64;
  double dVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  double dVar68;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  double local_1c8;
  double local_1b8;
  double dStack_140;
  
  lVar31 = (longlong)param_3;
  dVar65 = *(double *)(param_1 + 0x110 + lVar31 * 0x18);
  dVar5 = *(double *)(param_1 + 0x180 + lVar31 * 0x18);
  pdVar1 = (double *)(param_1 + 0x100 + lVar31 * 0x18);
  pdVar2 = (double *)(param_1 + 0x170 + lVar31 * 0x18);
  dVar42 = *pdVar2;
  dVar51 = pdVar2[1];
  dVar43 = *pdVar1 - dVar42;
  dVar47 = pdVar1[1] - dVar51;
  dVar33 = dVar65 - dVar5;
  lVar30 = lVar31 * 0x80;
  dVar52 = *(double *)(param_1 + 0x268 + lVar30);
  dVar6 = *(double *)(param_1 + 0x260 + lVar30);
  dVar7 = *(double *)(param_1 + 0x288 + lVar30);
  dVar8 = *(double *)(param_1 + 0x280 + lVar30);
  dVar9 = *(double *)(param_1 + 0x290 + lVar30);
  dVar68 = (double)((ulonglong)dVar43 ^ (ulonglong)__xmm_80000000000000008000000000000000);
  dVar58 = *(double *)(param_1 + 0x240 + lVar30);
  dVar61 = *(double *)(param_1 + 0xf0 + lVar31 * 8);
  dVar36 = dVar47 * (dVar9 * dVar47 - dVar7 * dVar33) +
           (double)((ulonglong)dVar33 ^ (ulonglong)__xmm_80000000000000008000000000000000) *
           (dVar7 * dVar47 - dVar52 * dVar33) + dVar61;
  dVar40 = dVar68 * (dVar9 * dVar47 - dVar7 * dVar33) + dVar33 * (dVar8 * dVar47 - dVar6 * dVar33) +
           0.0;
  dVar23 = ((dVar47 * dVar7 - dVar33 * dVar52) * dVar43 - (dVar47 * dVar8 - dVar33 * dVar6) * dVar47
           ) + 0.0;
  dVar41 = ((dVar47 * 0.0 - dVar33 * dVar52) * dVar47 - (dVar47 * 0.0 - dVar33 * dVar6) * dVar47) +
           0.0;
  auVar69._0_8_ =
       dVar68 * (dVar9 * dVar68 + dVar8 * dVar33) + dVar33 * (dVar8 * dVar68 + dVar33 * dVar58) +
       dVar61;
  auVar69._8_8_ =
       dVar43 * (dVar7 * dVar68 + dVar6 * dVar33) +
       (double)((ulonglong)dVar47 ^ (ulonglong)__xmm_80000000000000008000000000000000) *
       (dVar8 * dVar68 + dVar33 * dVar58) + 0.0;
  uVar17 = __xmm_7fffffffffffffff7fffffffffffffff;
  uVar35 = __xmm_7fffffffffffffff7fffffffffffffff._8_8_;
  auVar46._4_4_ = -(uint)(_UNK_150aa88b8 < (double)((ulonglong)dVar40 & uVar35));
  auVar46._0_4_ =
       -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a < (double)((ulonglong)dVar36 & uVar17));
  auVar46._8_4_ =
       -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a < (double)((ulonglong)dVar23 & uVar17));
  auVar46._12_4_ = -(uint)(_UNK_150aa88b8 < (double)(__real_0010000000000000 & uVar35));
  iVar29 = movmskps(unaff_ESI,auVar46);
  pdVar1 = (double *)(param_1 + 0x100 + lVar31 * 0x18);
  pdVar2 = (double *)(param_1 + 0x240 + lVar30);
  dVar61 = *(double *)(param_1 + 0xf0 + lVar31 * 8);
  auVar56._0_8_ =
       ((dVar43 * dVar52 - dVar47 * dVar6) * dVar43 - (dVar43 * dVar6 - dVar58 * dVar47) * dVar47) +
       dVar61;
  auVar56._8_8_ =
       ((dVar47 * 0.0 - dVar47 * 0.0) * dVar47 - (dVar47 * 0.0 - dVar58 * dVar47) * dVar47) + 0.0;
  auVar59._8_8_ = auVar69._8_8_;
  auVar59._0_8_ = auVar69._0_8_;
  auVar66._8_4_ = SUB84(dVar41,0);
  auVar66._0_8_ = dVar23;
  auVar66._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
  auVar66 = blendpd(auVar59,auVar66,1);
  dVar47 = auVar66._0_8_;
  dVar68 = auVar66._8_8_;
  dVar33 = __real_3ff0000000000000;
  dVar43 = __real_3ff0000000000000;
  dVar41 = __real_3ff0000000000000;
  if ((iVar29 == 0) &&
     (auVar70._0_8_ =
           (double)CONCAT44((uint)((ulonglong)auVar69._8_8_ >> 0x20) &
                            __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                            SUB84(auVar69._8_8_,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff),
     auVar70._8_4_ = _UNK_150b547c8 & __xmm_7fffffffffffffff7fffffffffffffff._8_4_,
     auVar70._12_4_ = _UNK_150b547cc & __xmm_7fffffffffffffff7fffffffffffffff._12_4_,
     auVar67._4_4_ = -(uint)(_UNK_150aa88b8 < (double)((ulonglong)auVar69._0_8_ & uVar35)),
     auVar67._0_4_ =
          -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a < (double)((ulonglong)dVar40 & uVar17)),
     auVar67._8_4_ = -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a < auVar70._0_8_),
     auVar67._12_4_ = -(uint)(_UNK_150aa88b8 < auVar70._8_8_), iVar29 = movmskps(0,auVar67),
     iVar29 == 0)) {
    auVar28._8_4_ = _UNK_150b547c8;
    auVar28._0_8_ = ___xmm_00100000000000000000000000000000;
    auVar28._12_4_ = _UNK_150b547cc;
    auVar46 = blendpd(auVar28,auVar56,1);
    auVar53._4_4_ = -(uint)(_UNK_150aa88b8 < (double)((ulonglong)dVar68 & uVar35));
    auVar53._0_4_ =
         -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a < (double)((ulonglong)dVar47 & uVar17));
    auVar53._8_4_ =
         -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a < (double)(auVar46._0_8_ & uVar17));
    auVar53._12_4_ = -(uint)(_UNK_150aa88b8 < (double)(auVar46._8_8_ & uVar35));
    iVar29 = movmskps(0,auVar53);
    if (iVar29 == 0) {
      dVar34 = 0.0;
      local_1c8 = 0.0;
      local_1b8 = 0.0;
      dVar62 = 0.0;
      dVar37 = 0.0;
      dVar19 = 0.0;
      goto LAB_140a11fc0;
    }
  }
  dVar50 = auVar69._0_8_ * dVar36 - dVar40 * dVar40;
  dVar57 = dVar23 * 0.0 - auVar69._8_8_ * 0.0;
  dVar24 = auVar69._8_8_ * __xmm_80000000000000008000000000000000 + dVar23 * 0.0;
  dVar25 = _UNK_15066df78 * 0.0 + __real_3ff0000000000000 * auVar56._0_8_;
  dVar19 = 0.0;
  dVar21 = __xmm_80000000000000008000000000000000 * dVar47 + auVar56._0_8_ * 0.0;
  dVar22 = _UNK_15066df78 * dVar68 + auVar56._0_8_ * 0.0;
  auVar10._8_4_ = SUB84(dVar36,0);
  auVar10._0_8_ = dVar36;
  auVar10._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
  dVar49 = dVar36 * auVar69._8_8_ - dVar40 * dVar23;
  dVar45 = dVar36 * 0.0 - dVar40 * 0.0;
  dVar44 = auVar69._0_8_ * dVar23 - dVar40 * auVar69._8_8_;
  dVar48 = auVar69._0_8_ * 0.0 - dVar40 * 0.0;
  dVar34 = dVar23 * dVar44 + auVar69._8_8_ * dVar49;
  dVar37 = dVar21 * dVar48 + dVar22 * dVar45;
  dVar16 = (dVar24 * dVar57 + dVar50 * dVar25) - (dVar37 + dVar34);
  dVar34 = (dVar24 * dVar57 + dVar50 * dVar25) - (dVar34 + dVar37);
  uVar63 = SUB84(dVar34,0);
  uVar64 = (undefined4)((ulonglong)dVar34 >> 0x20);
  dVar34 = 0.0;
  local_1c8 = 0.0;
  local_1b8 = 0.0;
  dVar62 = 0.0;
  dVar37 = 0.0;
  if ((dVar16 != 0.0) || (NAN(dVar16))) {
    dStack_140 = auVar10._8_8_;
    auVar54._0_8_ = dVar44 * 0.0;
    auVar54._8_8_ = dVar48 * 0.0;
    auVar11._8_4_ = SUB84(dVar45,0);
    auVar11._0_8_ = dVar49;
    auVar11._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
    auVar46 = blendpd(auVar54,auVar11,1);
    auVar55._8_8_ = dVar22;
    auVar55._0_8_ = dVar21;
    auVar56 = blendpd(auVar55,auVar66,1);
    auVar70 = blendpd(auVar69,ZEXT816(0),1);
    auVar20._8_4_ = SUB84(dVar22,0);
    auVar20._0_8_ = dVar21;
    auVar20._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
    auVar67 = blendpd(auVar66,auVar20,1);
    auVar27._8_8_ = _UNK_15076c6f8;
    auVar27._0_8_ = ___xmm_bff00000000000003ff0000000000000;
    auVar12._8_4_ = uVar63;
    auVar12._0_8_ = dVar16;
    auVar12._12_4_ = uVar64;
    auVar66 = divpd(auVar27,auVar12);
    auVar26._8_8_ = _UNK_15076b868;
    auVar26._0_8_ = ___xmm_3ff0000000000000bff0000000000000;
    auVar13._8_4_ = uVar63;
    auVar13._0_8_ = dVar16;
    auVar13._12_4_ = uVar64;
    auVar59 = divpd(auVar26,auVar13);
    dVar19 = (dVar40 * dVar25 - (dVar23 * auVar67._8_8_ + auVar56._8_8_ * 0.0)) * auVar66._8_8_;
    local_1c8 = auVar66._8_8_ * (dVar24 * 0.0 - (dVar47 * dVar40 - dStack_140 * dVar68));
    dVar34 = (dVar40 * dVar25 - (auVar67._0_8_ * auVar70._0_8_ + auVar69._8_8_ * auVar56._0_8_)) *
             auVar59._0_8_;
    dVar41 = auVar59._8_8_;
    dVar62 = (dVar57 * 0.0 - (dVar45 * 0.0 - auVar46._0_8_)) * auVar59._0_8_;
    dVar37 = (dVar57 * 0.0 - (dVar44 - auVar46._8_8_)) * dVar41;
    local_1b8 = (dVar24 * 0.0 - (auVar69._0_8_ * dVar47 - dVar40 * dVar68)) * dVar41;
    dVar33 = (dVar36 * dVar25 - (auVar67._0_8_ * 0.0 + dVar23 * auVar56._0_8_)) * auVar66._0_8_;
    dVar43 = dVar41 * (dVar50 - (dVar48 * 0.0 + dVar45 * 0.0));
    dVar41 = (auVar69._0_8_ * dVar25 - (auVar67._8_8_ * auVar70._8_8_ + auVar56._8_8_ * 0.0)) *
             dVar41;
  }
LAB_140a11fc0:
  dVar36 = *param_4;
  dVar40 = param_4[1];
  dVar23 = param_4[2];
  dVar45 = param_5 * (dVar23 * local_1b8 + dVar40 * dVar34 + dVar36 * dVar41);
  dVar49 = param_5 * (dVar23 * local_1c8 + dVar40 * dVar33 + dVar36 * dVar19);
  param_5 = (dVar43 * dVar23 + dVar62 * dVar40 + dVar37 * dVar36) * param_5;
  dVar65 = dVar65 - dVar5;
  dVar36 = (pdVar1[1] - dVar51) * dVar45 - dVar49 * (*pdVar1 - dVar42);
  dVar40 = dVar65 * dVar49 - param_5 * (pdVar1[1] - dVar51);
  dVar47 = param_5 * (*pdVar1 - dVar42) - dVar65 * dVar45;
  dVar33 = dVar36 * dVar8 + dVar47 * dVar6 + dVar58 * dVar40;
  dVar43 = dVar36 * dVar7 + dVar47 * dVar52 + pdVar2[1] * dVar40;
  dVar51 = dVar51 - dVar61 * dVar49;
  dVar65 = pdVar2[2];
  dVar52 = pdVar2[6];
  auVar14._8_4_ = SUB84(dVar51,0);
  auVar14._0_8_ = dVar42 - dVar61 * dVar45;
  auVar14._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
  *(undefined1 (*) [16])(pdVar1 + 0xe) = auVar14;
  pdVar1[0x10] = dVar5 - dVar61 * param_5;
  dVar62 = _UNK_15076c6f8;
  dVar37 = ___xmm_bff00000000000003ff0000000000000;
  dVar34 = _UNK_15076b868;
  dVar19 = ___xmm_3ff0000000000000bff0000000000000;
  dVar23 = __real_3ff0000000000000;
  lVar32 = lVar31 * 0x20;
  pdVar3 = (double *)(param_1 + 0x1b0 + lVar32);
  dVar58 = *pdVar3;
  dVar61 = pdVar3[1];
  pdVar3 = (double *)(param_1 + 0x1a0 + lVar32);
  dVar51 = *pdVar3;
  dVar41 = pdVar3[1];
  dVar5 = *(double *)(param_1 + 0x1b8 + lVar32);
  dVar6 = *(double *)(param_1 + 0x1b0 + lVar32);
  dVar7 = *(double *)(param_1 + 0x1a8 + lVar32);
  dVar8 = *(double *)(param_1 + 0x1a0 + lVar32);
  dVar65 = dVar36 * dVar9 + dVar47 * dVar52 + dVar40 * dVar65;
  dVar52 = (dVar7 * dVar65 * ___xmm_3ff0000000000000bff0000000000000 +
           dVar43 * dVar58 + dVar33 * dVar5 * ___xmm_bff00000000000003ff0000000000000 + dVar51 * 0.0
           ) * ___xmm_3fe00000000000003fe0000000000000 + dVar51;
  dVar9 = (dVar8 * dVar65 * _UNK_15076b868 +
          dVar43 * dVar61 + dVar33 * dVar6 * _UNK_15076c6f8 + dVar41 * 0.0) * _UNK_150689678 +
          dVar41;
  dVar58 = (dVar5 * dVar65 * ___xmm_bff00000000000003ff0000000000000 +
           ((dVar33 * dVar7 * ___xmm_bff00000000000003ff0000000000000 + dVar58 * 0.0) -
           dVar43 * dVar51)) * ___xmm_3fe00000000000003fe0000000000000 + dVar58;
  dVar61 = (dVar6 * dVar65 * _UNK_15076c6f8 +
           ((dVar33 * dVar8 * _UNK_15076c6f8 + dVar61 * 0.0) - dVar43 * dVar41)) * _UNK_150689678 +
           dVar61;
  dVar65 = dVar9 * dVar9 + dVar61 * dVar61 + dVar52 * dVar52 + dVar58 * dVar58;
  uVar39 = ~-(ulonglong)(dVar65 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
  dVar65 = __real_3ff0000000000000 / SQRT(dVar65);
  uVar17 = (ulonglong)(dVar9 * dVar65) & uVar39;
  uVar35 = ~uVar39 & ___xmm_3ff00000000000000000000000000000;
  uVar38 = ~uVar39 & _UNK_15061cbc8;
  auVar15._8_4_ = (int)uVar17;
  auVar15._0_8_ = (ulonglong)(dVar52 * dVar65) & uVar39;
  auVar15._12_4_ = (int)(uVar17 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x1a0 + lVar32) = auVar15;
  puVar4 = (ulonglong *)(param_1 + 0x1b0 + lVar32);
  *puVar4 = uVar35 | (ulonglong)(dVar58 * dVar65) & uVar39;
  puVar4[1] = uVar38 | (ulonglong)(dVar61 * dVar65) & uVar39;
  uVar17 = __real_bff0000000000000;
  uVar35 = -(ulonglong)
            (0.0 <= *(double *)(param_1 + 0x1a8) * *(double *)(param_1 + 0x1c8) +
                    *(double *)(param_1 + 0x1b8) * *(double *)(param_1 + 0x1d8) +
                    *(double *)(param_1 + 0x1a0) * *(double *)(param_1 + 0x1c0) +
                    *(double *)(param_1 + 0x1b0) * *(double *)(param_1 + 0x1d0));
  dVar65 = (double)(~uVar35 & __real_bff0000000000000 | uVar35 & (ulonglong)dVar23);
  *(double *)(param_1 + 0x1c0) = *(double *)(param_1 + 0x1c0) * dVar65;
  *(double *)(param_1 + 0x1c8) = *(double *)(param_1 + 0x1c8) * dVar65;
  *(double *)(param_1 + 0x1d0) = *(double *)(param_1 + 0x1d0) * dVar65;
  *(double *)(param_1 + 0x1d8) = *(double *)(param_1 + 0x1d8) * dVar65;
  dVar68 = _UNK_150689688;
  dVar47 = ___xmm_3ff00000000000003ff0000000000000;
  lVar30 = lVar31 * 0x60;
  dVar65 = *(double *)(param_1 + 0x1b8 + lVar32);
  pdVar3 = (double *)(param_1 + 0x1a0 + lVar32);
  dVar7 = *pdVar3;
  dVar8 = pdVar3[1];
  pdVar3 = (double *)(param_1 + 0x1a8 + lVar32);
  dVar9 = *pdVar3;
  dVar58 = pdVar3[1];
  pdVar3 = (double *)(param_1 + 0x20 + lVar30);
  dVar61 = *pdVar3;
  dVar51 = pdVar3[1];
  pdVar3 = (double *)(param_1 + 0x28 + lVar30);
  dVar5 = *(double *)(param_1 + 0x1a0 + lVar32);
  dVar36 = *(double *)(param_1 + 0x1b0 + lVar32) * *(double *)(param_1 + 0x20 + lVar30) -
           dVar5 * *(double *)(param_1 + 0x30 + lVar30);
  dVar40 = *pdVar3 * dVar7 - dVar61 * dVar9;
  dVar41 = pdVar3[1] * dVar8 - dVar51 * dVar58;
  dVar40 = dVar40 + dVar40;
  dVar41 = dVar41 + dVar41;
  dVar36 = dVar36 + dVar36;
  dVar52 = *(double *)(param_1 + 0x1b0 + lVar32);
  dVar6 = *(double *)(param_1 + 0x30 + lVar30);
  *pdVar1 = pdVar1[0xe] + (dVar40 * dVar8 - dVar36 * dVar58) + dVar65 * dVar41 + dVar61;
  pdVar1[1] = pdVar1[0xf] + (dVar41 * dVar52 - dVar5 * dVar40) + dVar65 * dVar36 + dVar51;
  pdVar1[2] = dVar40 * dVar65 + dVar6 + (dVar36 * dVar7 - dVar41 * dVar9) + pdVar1[0x10];
  pdVar1 = (double *)(param_1 + 0x1b8 + lVar32);
  dVar65 = *pdVar1;
  dVar5 = *pdVar1;
  dVar41 = *(double *)(param_1 + lVar30);
  dVar42 = ((double *)(param_1 + lVar30))[1];
  pdVar1 = (double *)(param_1 + 0x10 + lVar30);
  dVar33 = *pdVar1;
  dVar43 = pdVar1[1];
  pdVar1 = (double *)(param_1 + 0x1a0 + lVar32);
  dVar52 = *pdVar1;
  dVar6 = *pdVar1;
  dVar7 = *(double *)(param_1 + 8 + lVar30);
  dVar8 = *(double *)(param_1 + lVar30);
  dVar9 = *(double *)(param_1 + 0x18 + lVar30);
  dVar58 = *(double *)(param_1 + 0x10 + lVar30);
  pdVar1 = (double *)(param_1 + 0x1a8 + lVar32);
  dVar61 = *pdVar1;
  dVar51 = *pdVar1;
  pdVar1 = (double *)(param_1 + 0x1b0 + lVar32);
  dVar36 = *pdVar1;
  dVar40 = *pdVar1;
  pdVar1 = (double *)(param_1 + 0x130 + lVar32);
  *pdVar1 = dVar7 * dVar36 * dVar19 + dVar33 * dVar61 + dVar52 * dVar9 * dVar37 + dVar65 * dVar41;
  pdVar1[1] = dVar8 * dVar40 * dVar34 + dVar43 * dVar51 + dVar6 * dVar58 * dVar62 + dVar5 * dVar42;
  pdVar1 = (double *)(param_1 + 0x140 + lVar32);
  *pdVar1 = dVar9 * dVar36 * dVar37 +
            ((dVar52 * dVar7 * dVar37 + dVar65 * dVar33) - dVar41 * dVar61);
  pdVar1[1] = dVar58 * dVar40 * dVar62 +
              ((dVar6 * dVar8 * dVar62 + dVar5 * dVar43) - dVar42 * dVar51);
  uVar35 = -(ulonglong)
            (0.0 <= *(double *)(param_1 + 0x138) * *(double *)(param_1 + 0x158) +
                    *(double *)(param_1 + 0x148) * *(double *)(param_1 + 0x168) +
                    *(double *)(param_1 + 0x130) * *(double *)(param_1 + 0x150) +
                    *(double *)(param_1 + 0x140) * *(double *)(param_1 + 0x160));
  dVar65 = (double)(~uVar35 & uVar17 | uVar35 & (ulonglong)dVar23);
  *(double *)(param_1 + 0x150) = *(double *)(param_1 + 0x150) * dVar65;
  *(double *)(param_1 + 0x158) = *(double *)(param_1 + 0x158) * dVar65;
  *(double *)(param_1 + 0x160) = *(double *)(param_1 + 0x160) * dVar65;
  *(double *)(param_1 + 0x168) = *(double *)(param_1 + 0x168) * dVar65;
  pdVar1 = (double *)(param_1 + 0x1b0 + lVar32);
  dVar51 = *pdVar1;
  dVar40 = pdVar1[1];
  pdVar1 = (double *)(param_1 + 0x1a0 + lVar32);
  dVar41 = *pdVar1;
  dVar58 = pdVar1[1];
  dVar41 = dVar41 + dVar41;
  dVar58 = dVar58 + dVar58;
  dVar51 = dVar51 + dVar51;
  dVar65 = *(double *)(param_1 + 0x1a0 + lVar32);
  dVar5 = *(double *)(param_1 + 0x1a8 + lVar32);
  dVar7 = dVar65 * dVar41;
  dVar61 = dVar65 * dVar58;
  dVar42 = dVar5 * dVar58;
  dVar5 = dVar5 * dVar51;
  pdVar1 = (double *)(param_1 + 0x1b8 + lVar32);
  dVar52 = *pdVar1;
  dVar6 = *pdVar1;
  dVar41 = dVar41 * dVar52;
  dVar58 = dVar58 * dVar6;
  dVar33 = *(double *)(param_1 + 0x1b0 + lVar32) * dVar51;
  dVar52 = dVar51 * dVar52;
  dVar36 = dVar52 + dVar61;
  dVar8 = dVar41 + dVar5;
  dVar9 = dVar58 + dVar65 * dVar51;
  dVar5 = dVar5 - dVar41;
  dVar58 = dVar65 * dVar51 - dVar58;
  dVar52 = dVar61 - dVar52;
  dVar61 = dVar61 - (dVar40 + dVar40) * dVar6;
  dVar47 = dVar47 - (dVar33 + dVar42);
  dVar68 = dVar68 - (dVar33 + dVar7);
  dVar23 = dVar23 - (dVar42 + dVar7);
  auVar60._8_8_ = dVar68;
  auVar60._0_8_ = dVar47;
  dVar65 = *(double *)(param_1 + 0xc0 + lVar31 * 0x18);
  dVar6 = *(double *)(param_1 + 0xd0 + lVar31 * 0x18);
  auVar18._8_4_ = SUB84(dVar61,0);
  auVar18._0_8_ = dVar52;
  auVar18._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
  auVar66 = blendpd(auVar60,auVar18,1);
  dVar7 = *(double *)(param_1 + 200 + lVar31 * 0x18);
  dVar61 = dVar9 * 0.0 + dVar52 * 0.0 + dVar47 * dVar65;
  dVar51 = dVar9 * 0.0 + dVar52 * dVar7 + dVar47 * 0.0;
  dVar52 = dVar6 * dVar9 + dVar52 * 0.0 + dVar47 * 0.0;
  dVar33 = dVar5 * 0.0 + dVar68 * 0.0 + dVar36 * dVar65;
  dVar43 = dVar5 * 0.0 + dVar7 * dVar68 + dVar36 * 0.0;
  dVar40 = dVar6 * dVar5 + dVar68 * 0.0 + dVar36 * 0.0;
  dVar65 = dVar23 * 0.0 + dVar8 * 0.0 + dVar65 * dVar58;
  dVar7 = dVar23 * 0.0 + dVar8 * dVar7 + dVar58 * 0.0;
  dVar41 = auVar66._0_8_;
  dVar42 = auVar66._8_8_;
  dVar6 = dVar6 * dVar23 +
          dVar8 * ___xmm_00000000000000000000000000000000 +
          dVar58 * ___xmm_00000000000000000000000000000000;
  *pdVar2 = dVar52 * dVar9 + dVar41 * dVar51 + dVar61 * dVar47;
  pdVar2[1] = dVar52 * dVar5 + dVar42 * dVar51 + dVar61 * dVar36;
  pdVar2[2] = dVar52 * dVar23 + dVar51 * dVar8 + dVar58 * dVar61;
  pdVar2[3] = 0.0;
  pdVar2[4] = dVar40 * dVar9 + dVar41 * dVar43 + dVar33 * dVar47;
  pdVar2[5] = dVar40 * dVar5 + dVar42 * dVar43 + dVar33 * dVar36;
  pdVar2[6] = dVar40 * dVar23 + dVar43 * dVar8 + dVar58 * dVar33;
  pdVar2[7] = 0.0;
  pdVar2[8] = dVar6 * dVar9 + dVar41 * dVar7 + dVar65 * dVar47;
  pdVar2[9] = dVar6 * dVar5 + dVar42 * dVar7 + dVar65 * dVar36;
  pdVar2[10] = dVar6 * dVar23 + dVar7 * dVar8 + dVar58 * dVar65;
  pdVar2[0xd] = 0.0;
  pdVar2[0xe] = 0.0;
  pdVar2[0xb] = 0.0;
  pdVar2[0xc] = 0.0;
  pdVar2[0xf] = 1.0;
  if (param_2 != 0) {
    param_5 = (double)((ulonglong)param_5 ^ (ulonglong)__xmm_80000000000000008000000000000000);
    dVar45 = (double)((ulonglong)dVar45 ^ (ulonglong)__xmm_80000000000000008000000000000000);
    dVar49 = (double)((ulonglong)dVar49 ^ (ulonglong)_UNK_15066df78);
  }
  *(double *)(param_1 + 0x420) = *(double *)(param_1 + 0x420) + dVar45;
  *(double *)(param_1 + 0x428) = *(double *)(param_1 + 0x428) + dVar49;
  *(double *)(param_1 + 0x430) = param_5 + *(double *)(param_1 + 0x430);
  return;
}

// ApplyPointPositionConstraintDD_sse4 @ 140a129b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ApplyPointPositionConstraintDD_sse4(double *param_1,double *param_2,double param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined4 in_EAX;
  int iVar19;
  ulonglong uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar31;
  double dVar32;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  ulonglong uVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar42;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar53;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar54;
  double dVar58;
  undefined1 auVar55 [16];
  double dVar59;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  double dVar60;
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
  double dStack_1f0;
  double dStack_1e0;
  double dStack_1c0;
  double dStack_1a0;
  double local_188;
  undefined8 uStack_180;
  double dStack_100;
  
  dVar25 = param_1[0x20] - param_1[0x2e];
  dVar31 = param_1[0x21] - param_1[0x2f];
  dVar34 = param_1[0x22] - param_1[0x30];
  dVar21 = param_1[0x4d];
  dVar45 = param_1[0x4c];
  dVar24 = param_1[0x50];
  dVar23 = param_1[0x51];
  dVar22 = param_1[0x52];
  dVar60 = (double)((ulonglong)dVar25 ^ (ulonglong)__xmm_80000000000000008000000000000000);
  dVar27 = (dVar31 * dVar23 - dVar34 * dVar21) * dVar25 -
           (dVar31 * dVar24 - dVar34 * dVar45) * dVar31;
  dVar11 = (dVar31 * 0.0 - dVar34 * dVar21) * dVar31 - (dVar31 * 0.0 - dVar34 * dVar45) * dVar31;
  auVar68._8_4_ = SUB84(dVar11,0);
  auVar68._0_8_ = dVar27;
  auVar68._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  dVar11 = param_1[0x48];
  dVar43 = param_1[0x1e];
  dVar46 = dVar31 * (dVar22 * dVar31 - dVar23 * dVar34) +
           (double)((ulonglong)dVar34 ^ (ulonglong)__xmm_80000000000000008000000000000000) *
           (dVar23 * dVar31 - dVar21 * dVar34) + dVar43;
  dVar33 = dVar60 * (dVar22 * dVar31 - dVar23 * dVar34) +
           dVar34 * (dVar24 * dVar31 - dVar45 * dVar34) + 0.0;
  auVar62._8_4_ = SUB84(dVar33,0);
  auVar62._0_8_ = dVar46;
  auVar62._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
  auVar61._0_8_ =
       dVar60 * (dVar22 * dVar60 + dVar24 * dVar34) + dVar34 * (dVar24 * dVar60 + dVar34 * dVar11) +
       dVar43;
  auVar61._8_8_ =
       dVar25 * (dVar23 * dVar60 + dVar45 * dVar34) +
       (double)((ulonglong)dVar31 ^ (ulonglong)__xmm_80000000000000008000000000000000) *
       (dVar24 * dVar60 + dVar34 * param_1[0x48]) + 0.0;
  dVar26 = param_1[0x23] - param_1[0x31];
  dVar32 = param_1[0x24] - param_1[0x32];
  dVar35 = param_1[0x25] - param_1[0x33];
  dVar24 = param_1[0x5d];
  dVar23 = param_1[0x5c];
  dVar22 = param_1[0x61];
  dVar33 = param_1[0x60];
  dVar34 = param_1[0x62];
  dVar60 = (double)((ulonglong)__xmm_80000000000000008000000000000000 ^ (ulonglong)dVar26);
  local_188 = param_1[0x58];
  dStack_1e0 = auVar62._8_8_;
  dVar58 = dVar60 * (dVar34 * dVar32 - dVar22 * dVar35) +
           dVar35 * (dVar33 * dVar32 - dVar23 * dVar35) + 0.0;
  auVar67._0_8_ =
       dVar60 * (dVar34 * dVar60 + dVar33 * dVar35) +
       dVar35 * (dVar33 * dVar60 + dVar35 * local_188) + param_1[0x1f];
  auVar67._8_8_ =
       dVar26 * (dVar22 * dVar60 + dVar23 * dVar35) +
       (double)((ulonglong)dVar32 ^ (ulonglong)__xmm_80000000000000008000000000000000) *
       (dVar33 * dVar60 + dVar35 * local_188) + 0.0;
  dVar60 = param_1[0x1f];
  dVar31 = ((dVar26 * dVar24 - dVar32 * dVar23) * dVar26 -
           (dVar26 * dVar23 - local_188 * dVar32) * dVar32) + dVar60 +
           ((dVar21 * dVar25 - dVar31 * dVar45) * dVar25 -
           (dVar25 * dVar45 - dVar11 * dVar31) * dVar31) + dVar43;
  dVar46 = dVar46 + dVar32 * (dVar34 * dVar32 - dVar22 * dVar35) +
                    (double)((ulonglong)dVar35 ^ (ulonglong)__xmm_80000000000000008000000000000000)
                    * (dVar22 * dVar32 - dVar24 * dVar35) + param_1[0x1f];
  dVar45 = dStack_1e0 + dVar58;
  dVar58 = dStack_1e0 + dVar58;
  dVar21 = auVar61._0_8_ + auVar67._0_8_;
  dStack_1f0 = auVar68._8_8_;
  auVar39._0_8_ = dVar27 + 0.0;
  auVar39._8_8_ = dStack_1f0 + 0.0;
  auVar64._0_8_ =
       ((dVar32 * dVar22 - dVar35 * dVar24) * dVar26 - (dVar32 * dVar33 - dVar35 * dVar23) * dVar32)
       + 0.0;
  auVar64._8_8_ =
       ((dVar32 * 0.0 - dVar35 * dVar24) * dVar32 - (dVar32 * 0.0 - dVar35 * dVar23) * dVar32) + 0.0
  ;
  auVar62 = blendpd(auVar61,auVar39,1);
  dVar43 = auVar39._0_8_ + auVar64._0_8_;
  dVar11 = auVar61._8_8_ + auVar67._8_8_;
  auVar68 = blendpd(auVar67,auVar64,1);
  auVar63._0_8_ = auVar62._0_8_ + auVar68._0_8_;
  auVar63._8_8_ = auVar62._8_8_ + auVar68._8_8_;
  auVar69._4_4_ = -(uint)(_UNK_150aa88b8 < (double)((ulonglong)dVar45 & _UNK_15061cc88));
  auVar69._0_4_ =
       -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <
              (double)((ulonglong)dVar46 & __xmm_7fffffffffffffff7fffffffffffffff));
  auVar69._8_4_ =
       -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <
              (double)((ulonglong)dVar43 & __xmm_7fffffffffffffff7fffffffffffffff));
  auVar69._12_4_ = -(uint)(_UNK_150aa88b8 < (double)(__real_0010000000000000 & _UNK_15061cc88));
  iVar19 = movmskps(in_EAX,auVar69);
  dVar25 = __real_3ff0000000000000;
  dVar26 = __real_3ff0000000000000;
  dVar27 = __real_3ff0000000000000;
  if (((iVar19 == 0) &&
      (auVar55._4_4_ = -(uint)(_UNK_150aa88b8 < (double)((ulonglong)dVar21 & _UNK_15061cc88)),
      auVar55._0_4_ =
           -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <
                  (double)((ulonglong)dVar58 & __xmm_7fffffffffffffff7fffffffffffffff)),
      auVar55._8_4_ =
           -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <
                  (double)((ulonglong)dVar11 & __xmm_7fffffffffffffff7fffffffffffffff)),
      auVar55._12_4_ = -(uint)(_UNK_150aa88b8 < (double)(__real_0010000000000000 & _UNK_15061cc88)),
      iVar19 = movmskps(0,auVar55), iVar19 == 0)) &&
     (auVar28._4_4_ = -(uint)(_UNK_150aa88b8 < (double)(_UNK_15061cc88 & (ulonglong)auVar63._8_8_)),
     auVar28._0_4_ =
          -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <
                 (double)(__xmm_7fffffffffffffff7fffffffffffffff & (ulonglong)auVar63._0_8_)),
     auVar28._8_4_ =
          -(uint)(___xmm_3e45798ee2308c3a3e45798ee2308c3a <
                 (double)((ulonglong)dVar31 & __xmm_7fffffffffffffff7fffffffffffffff)),
     auVar28._12_4_ = -(uint)(_UNK_150aa88b8 < (double)(__real_0010000000000000 & _UNK_15061cc88)),
     iVar19 = movmskps(0,auVar28), iVar19 == 0)) {
    dVar35 = 0.0;
    dVar21 = 0.0;
    dVar48 = 0.0;
    dVar31 = 0.0;
    dVar32 = 0.0;
    dVar45 = 0.0;
  }
  else {
    dVar54 = dVar21 * dVar46 - dVar58 * dVar45;
    dVar59 = dVar43 * 0.0 - dVar11 * 0.0;
    dVar42 = auVar63._0_8_ * 0.0 - auVar63._8_8_ * 0.0;
    dVar53 = __real_3ff0000000000000 * dVar31 - 0.0;
    dVar35 = 0.0;
    dVar49 = __xmm_80000000000000008000000000000000 * auVar63._0_8_ + dVar31 * 0.0;
    dVar36 = _UNK_15066df78 * auVar63._8_8_ + dVar31 * 0.0;
    dVar13 = dVar46 * dVar11 - dVar58 * dVar43;
    dVar14 = dVar46 * 0.0 - dVar58 * 0.0;
    dVar47 = dVar21 * dVar43 - dVar45 * dVar11;
    dVar44 = dVar21 * 0.0 - dVar45 * 0.0;
    auVar7._8_4_ = SUB84(dVar21,0);
    auVar7._0_8_ = dVar58;
    auVar7._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
    dVar21 = auVar63._0_8_ * dVar47 + auVar63._8_8_ * dVar13;
    dVar31 = dVar49 * dVar44 + dVar36 * dVar14;
    auVar56._0_8_ = (dVar42 * dVar59 + dVar54 * dVar53) - (dVar31 + dVar21);
    auVar56._8_8_ = (dVar42 * dVar59 + dVar54 * dVar53) - (dVar21 + dVar31);
    dVar21 = 0.0;
    dVar48 = 0.0;
    dVar31 = 0.0;
    dVar32 = 0.0;
    auVar8._8_4_ = SUB84(dVar45,0);
    auVar8._0_8_ = dVar46;
    auVar8._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
    dVar45 = 0.0;
    if ((auVar56._0_8_ != 0.0) || (NAN(auVar56._0_8_))) {
      dStack_100 = auVar8._8_8_;
      dStack_1e0 = auVar7._8_8_;
      auVar38._0_8_ = dVar47 * 0.0;
      auVar38._8_8_ = dVar44 * 0.0;
      auVar12._8_4_ = SUB84(dVar14,0);
      auVar12._0_8_ = dVar13;
      auVar12._12_4_ = (int)((ulonglong)dVar14 >> 0x20);
      auVar68 = blendpd(auVar38,auVar12,1);
      auVar29._8_8_ = dVar36;
      auVar29._0_8_ = dVar49;
      auVar62 = blendpd(auVar29,auVar63,1);
      auVar3._8_4_ = SUB84(dVar36,0);
      auVar3._0_8_ = dVar49;
      auVar3._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
      auVar64 = blendpd(auVar63,auVar3,1);
      auVar17._8_8_ = _UNK_15076c6f8;
      auVar17._0_8_ = ___xmm_bff00000000000003ff0000000000000;
      auVar39 = divpd(auVar17,auVar56);
      auVar16._8_8_ = _UNK_15076b868;
      auVar16._0_8_ = ___xmm_3ff0000000000000bff0000000000000;
      auVar69 = divpd(auVar16,auVar56);
      dVar45 = (dStack_100 * dVar53 - (dVar43 * auVar64._8_8_ + auVar62._8_8_ * 0.0)) *
               auVar39._8_8_;
      dVar35 = auVar39._8_8_ *
               (dVar42 * 0.0 - (dStack_100 * auVar63._0_8_ - dVar46 * auVar63._8_8_));
      dVar31 = (dVar58 * dVar53 - (auVar64._0_8_ * 0.0 + dVar11 * auVar62._0_8_)) * auVar69._0_8_;
      dVar27 = auVar69._8_8_;
      dVar48 = (dVar59 * 0.0 - (dVar14 * 0.0 - auVar68._0_8_)) * auVar69._0_8_;
      dVar32 = (dVar59 * 0.0 - (dVar47 - auVar68._8_8_)) * dVar27;
      dVar21 = (dVar42 * 0.0 - (auVar63._0_8_ * dStack_1e0 - dVar58 * auVar63._8_8_)) * dVar27;
      dVar25 = (dVar46 * dVar53 - (auVar64._0_8_ * 0.0 + dVar43 * auVar62._0_8_)) * auVar39._0_8_;
      dVar26 = dVar27 * (dVar54 - (dVar44 * 0.0 + dVar14 * 0.0));
      dVar27 = (dStack_1e0 * dVar53 - (auVar64._8_8_ * dVar11 + auVar62._8_8_ * 0.0)) * dVar27;
    }
  }
  dVar11 = *param_2;
  dVar43 = param_2[1];
  dVar46 = param_2[2];
  dVar58 = param_3 * (dVar46 * dVar21 + dVar43 * dVar31 + dVar11 * dVar27);
  dVar27 = param_3 * (dVar46 * dVar35 + dVar43 * dVar25 + dVar11 * dVar45);
  param_3 = (dVar26 * dVar46 + dVar48 * dVar43 + dVar32 * dVar11) * param_3;
  dVar21 = param_1[0x1e];
  dVar45 = param_1[0x30];
  uStack_180._0_4_ = SUB84(param_1[0x59],0);
  uStack_180._4_4_ = (int)((ulonglong)param_1[0x59] >> 0x20);
  dVar43 = param_1[0x2e];
  dVar46 = param_1[0x2f];
  dVar25 = param_1[0x32];
  param_1[0x2e] = dVar21 * dVar58 + dVar43;
  param_1[0x2f] = dVar21 * dVar27 + dVar46;
  dVar11 = param_1[0x31] - dVar60 * dVar58;
  auVar9._8_4_ = SUB84(dVar11,0);
  auVar9._0_8_ = dVar21 * param_3 + dVar45;
  auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x30) = auVar9;
  dVar11 = param_1[0x33] - dVar60 * param_3;
  auVar4._8_4_ = SUB84(dVar11,0);
  auVar4._0_8_ = dVar25 - dVar60 * dVar27;
  auVar4._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x32) = auVar4;
  dVar48 = _UNK_15076c6f8;
  dVar35 = ___xmm_bff00000000000003ff0000000000000;
  dVar32 = _UNK_15076b868;
  dVar31 = ___xmm_3ff0000000000000bff0000000000000;
  dVar26 = _UNK_150689688;
  dVar60 = ___xmm_3ff00000000000003ff0000000000000;
  dVar11 = __real_3ff0000000000000;
  auVar1._8_4_ = SUB84(dVar27,0);
  auVar1._0_8_ = dVar58;
  auVar1._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
  dStack_1e0 = auVar1._8_8_;
  dStack_1c0 = param_3;
  if (0.0 < dVar21) {
    dVar45 = param_1[0x22] - dVar45;
    dVar43 = param_1[0x20] - dVar43;
    dVar46 = param_1[0x21] - dVar46;
    auVar5._8_4_ = SUB84(param_3,0);
    auVar5._0_8_ = dVar27;
    auVar5._12_4_ = (int)((ulonglong)param_3 >> 0x20);
    dStack_1c0 = auVar5._8_8_;
    dVar21 = dVar27 * dVar43 - dVar46 * dVar58;
    dVar46 = dStack_1c0 * dVar46 - dVar45 * dStack_1e0;
    dVar45 = dVar58 * dVar45 - param_3 * dVar43;
    dVar36 = dVar21 * param_1[0x50] + dVar45 * param_1[0x4c] + param_1[0x48] * dVar46;
    dVar42 = dVar21 * param_1[0x51] + dVar45 * param_1[0x4d] + param_1[0x49] * dVar46;
    dVar43 = param_1[0x36];
    dVar47 = param_1[0x37];
    dVar44 = param_1[0x34];
    dVar49 = param_1[0x35];
    dVar21 = dVar21 * param_1[0x52] + param_1[0x4a] * dVar46 + dVar45 * param_1[0x4e];
    dVar46 = (param_1[0x35] * dVar21 * ___xmm_3ff0000000000000bff0000000000000 +
             dVar42 * dVar43 +
             dVar36 * param_1[0x37] * ___xmm_bff00000000000003ff0000000000000 + dVar44 * 0.0) *
             ___xmm_3fe00000000000003fe0000000000000 + dVar44;
    dVar53 = (param_1[0x34] * dVar21 * _UNK_15076b868 +
             dVar42 * dVar47 + dVar36 * param_1[0x36] * _UNK_15076c6f8 + dVar49 * 0.0) *
             _UNK_150689678 + dVar49;
    dVar43 = (param_1[0x37] * dVar21 * ___xmm_bff00000000000003ff0000000000000 +
             ((dVar36 * param_1[0x35] * ___xmm_bff00000000000003ff0000000000000 + dVar43 * 0.0) -
             dVar42 * dVar44)) * ___xmm_3fe00000000000003fe0000000000000 + dVar43;
    dVar47 = (param_1[0x36] * dVar21 * _UNK_15076c6f8 +
             ((dVar36 * param_1[0x34] * _UNK_15076c6f8 + dVar47 * 0.0) - dVar42 * dVar49)) *
             _UNK_150689678 + dVar47;
    dVar21 = dVar53 * dVar53 + dVar47 * dVar47 + dVar46 * dVar46 + dVar43 * dVar43;
    uVar37 = ~-(ulonglong)(dVar21 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
    dVar45 = __real_3ff0000000000000 / SQRT(dVar21);
    dVar49 = (double)((ulonglong)(dVar46 * dVar45) & uVar37);
    dVar36 = (double)((ulonglong)(dVar53 * dVar45) & uVar37);
    dVar21 = (double)(((ulonglong)(dVar43 * dVar45) ^ ___xmm_3ff00000000000000000000000000000) &
                     uVar37);
    auVar30._0_8_ = (double)(___xmm_3ff00000000000000000000000000000 ^ (ulonglong)dVar21);
    auVar30._8_8_ =
         (double)(_UNK_15061cbc8 ^ ((ulonglong)(dVar47 * dVar45) ^ _UNK_15061cbc8) & uVar37);
    param_1[0x34] = dVar49;
    param_1[0x35] = dVar36;
    *(undefined1 (*) [16])(param_1 + 0x36) = auVar30;
    auVar57._8_8_ = dVar36;
    auVar57._0_8_ = dVar49;
    auVar62 = blendpd(auVar57,auVar30,2);
    dVar45 = param_1[4] * auVar30._0_8_ - param_1[6] * auVar62._0_8_;
    dVar46 = param_1[5] * dVar49 - dVar36 * param_1[4];
    dVar47 = param_1[6] * dVar36 - auVar30._0_8_ * param_1[5];
    dVar45 = dVar45 + dVar45;
    dVar46 = dVar46 + dVar46;
    dVar47 = dVar47 + dVar47;
    auVar40._8_4_ = SUB84(auVar30._8_8_,0);
    auVar40._0_8_ = auVar30._8_8_;
    auVar40._12_4_ = (int)((ulonglong)auVar30._8_8_ >> 0x20);
    dVar43 = auVar40._8_8_;
    param_1[0x20] =
         param_1[0x2e] + (dVar46 * dVar36 - dVar45 * dVar21) + dVar47 * auVar30._8_8_ + param_1[4];
    param_1[0x21] =
         param_1[0x2f] + (dVar47 * dVar21 - dVar46 * dVar49) + dVar45 * dVar43 + param_1[5];
    param_1[0x22] =
         auVar30._8_8_ * dVar46 + param_1[6] + (dVar45 * dVar49 - dVar47 * dVar36) + param_1[0x30];
    param_1[0x26] =
         param_1[1] * auVar30._0_8_ * dVar31 +
         param_1[2] * dVar36 + param_1[3] * dVar49 * dVar35 + *param_1 * auVar30._8_8_;
    param_1[0x27] =
         *param_1 * auVar30._0_8_ * dVar32 +
         param_1[3] * dVar36 + param_1[2] * dVar49 * dVar48 + param_1[1] * dVar43;
    param_1[0x28] =
         param_1[3] * auVar30._0_8_ * dVar35 +
         ((param_1[1] * dVar49 * dVar35 + param_1[2] * auVar30._8_8_) - *param_1 * dVar36);
    param_1[0x29] =
         param_1[2] * auVar30._0_8_ * dVar48 +
         ((*param_1 * dVar49 * dVar48 + param_1[3] * dVar43) - param_1[1] * dVar36);
    dVar45 = dVar36 + dVar36;
    dVar42 = auVar30._0_8_ + auVar30._0_8_;
    dVar21 = dVar49 * (dVar49 + dVar49);
    dVar31 = dVar49 * dVar45;
    dVar32 = (dVar49 + dVar49) * auVar30._8_8_;
    dVar44 = auVar30._8_8_ * dVar42 + dVar31;
    dVar48 = dVar32 + dVar36 * dVar42;
    dVar47 = dVar45 * dVar43 + dVar42 * dVar49;
    dVar32 = dVar36 * dVar42 - dVar32;
    dVar35 = dVar42 * dVar49 - dVar45 * dVar43;
    dVar46 = dVar31 - auVar30._8_8_ * dVar42;
    dVar31 = dVar31 - dVar43 * (auVar30._8_8_ + auVar30._8_8_);
    auVar41._0_8_ = dVar60 - (dVar42 * auVar30._0_8_ + dVar36 * dVar45);
    auVar41._8_8_ = dVar26 - (dVar42 * auVar30._0_8_ + dVar21);
    dVar11 = dVar11 - (dVar36 * dVar45 + dVar21);
    dVar21 = param_1[0x18];
    dVar45 = param_1[0x1a];
    dVar43 = param_1[0x19];
    auVar6._8_4_ = SUB84(dVar31,0);
    auVar6._0_8_ = dVar46;
    auVar6._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
    auVar62 = blendpd(auVar41,auVar6,1);
    dVar60 = dVar47 * 0.0 + dVar46 * 0.0 + auVar41._0_8_ * dVar21;
    dVar26 = dVar47 * 0.0 + dVar46 * dVar43 + auVar41._0_8_ * 0.0;
    dVar53 = dVar45 * dVar47 +
             dVar46 * 0.0 + auVar41._0_8_ * ___xmm_00000000000000000000000000000000;
    auVar15._8_4_ = SUB84(dVar44,0);
    auVar15._0_8_ = auVar41._0_8_;
    auVar15._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
    dVar46 = dVar32 * 0.0 + auVar41._8_8_ * 0.0 + dVar44 * dVar21;
    dVar31 = dVar32 * 0.0 + dVar43 * auVar41._8_8_ + dVar44 * 0.0;
    dVar42 = dVar45 * dVar32 + auVar41._8_8_ * 0.0 + dVar44 * 0.0;
    dVar21 = dVar11 * 0.0 + dVar48 * 0.0 + dVar21 * dVar35;
    dVar43 = dVar11 * 0.0 + dVar48 * dVar43 + dVar35 * 0.0;
    dVar49 = auVar62._0_8_;
    dVar36 = auVar62._8_8_;
    dVar44 = dVar45 * dVar11 + dVar48 * ___xmm_00000000000000000000000000000000 + dVar35 * 0.0;
    dStack_1a0 = auVar15._8_8_;
    dVar45 = dVar53 * dVar32 + dVar36 * dVar26 + dVar60 * dStack_1a0;
    auVar10._8_4_ = SUB84(dVar45,0);
    auVar10._0_8_ = dVar53 * dVar47 + dVar49 * dVar26 + dVar60 * auVar41._0_8_;
    auVar10._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x48) = auVar10;
    param_1[0x4a] = dVar53 * dVar11 + dVar26 * dVar48 + dVar35 * dVar60;
    param_1[0x4b] = 0.0;
    param_1[0x4c] = dVar42 * dVar47 + dVar49 * dVar31 + dVar46 * auVar41._0_8_;
    param_1[0x4d] = dVar42 * dVar32 + dVar36 * dVar31 + dVar46 * dStack_1a0;
    param_1[0x4e] = dVar42 * dVar11 + dVar31 * dVar48 + dVar35 * dVar46;
    param_1[0x4f] = 0.0;
    param_1[0x50] = dVar44 * dVar47 + dVar49 * dVar43 + dVar21 * auVar41._0_8_;
    param_1[0x51] = dVar44 * dVar32 + dVar36 * dVar43 + dVar21 * dStack_1a0;
    param_1[0x52] = dVar44 * dVar11 + dVar43 * dVar48 + dVar35 * dVar21;
    param_1[0x55] = 0.0;
    param_1[0x56] = 0.0;
    param_1[0x53] = 0.0;
    param_1[0x54] = 0.0;
    param_1[0x57] = 1.0;
  }
  dVar26 = _UNK_15076c6f8;
  dVar46 = ___xmm_bff00000000000003ff0000000000000;
  dVar60 = _UNK_15076b868;
  dVar43 = ___xmm_3ff0000000000000bff0000000000000;
  dVar11 = _UNK_150689688;
  dVar45 = ___xmm_3ff00000000000003ff0000000000000;
  dVar21 = __real_3ff0000000000000;
  if (__real_0000000000000000 < param_1[0x1f]) {
    dVar48 = param_1[0x23] - param_1[0x31];
    dVar25 = param_1[0x24] - dVar25;
    dVar31 = param_1[0x25] - param_1[0x33];
    dVar32 = dVar25 * dVar58 - dVar27 * dVar48;
    dVar35 = dVar31 * dStack_1e0 - dStack_1c0 * dVar25;
    dVar31 = param_3 * dVar48 - dVar31 * dVar58;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = dVar34;
    auVar62 = blendpd(auVar1,auVar18,1);
    dVar27 = dVar32 * dVar33 + local_188 * dVar35 + dVar31 * dVar23;
    dVar25 = dVar32 * dVar22 + uStack_180 * dVar35 + dVar31 * dVar24;
    dVar34 = auVar62._0_8_ * dVar32 + dVar31 * param_1[0x5e] + param_1[0x5a] * dVar35;
    dVar24 = param_1[0x3a];
    dVar23 = param_1[0x3b];
    dVar22 = param_1[0x38];
    dVar33 = param_1[0x39];
    dVar31 = (param_1[0x39] * dVar34 * ___xmm_3ff0000000000000bff0000000000000 +
             dVar25 * dVar24 +
             dVar27 * param_1[0x3b] * ___xmm_bff00000000000003ff0000000000000 + dVar22 * 0.0) *
             ___xmm_3fe00000000000003fe0000000000000 + dVar22;
    dVar32 = (param_1[0x38] * dVar34 * _UNK_15076b868 +
             dVar25 * dVar23 + dVar27 * param_1[0x3a] * _UNK_15076c6f8 + dVar33 * 0.0) *
             _UNK_150689678 + dVar33;
    dVar24 = (param_1[0x3b] * dVar34 * ___xmm_bff00000000000003ff0000000000000 +
             ((dVar27 * param_1[0x39] * ___xmm_bff00000000000003ff0000000000000 + dVar24 * 0.0) -
             dVar25 * dVar22)) * ___xmm_3fe00000000000003fe0000000000000 + dVar24;
    dVar23 = (param_1[0x3a] * dVar34 * _UNK_15076c6f8 +
             ((dVar27 * param_1[0x38] * _UNK_15076c6f8 + dVar23 * 0.0) - dVar25 * dVar33)) *
             _UNK_150689678 + dVar23;
    dVar22 = dVar32 * dVar32 + dVar23 * dVar23 + dVar31 * dVar31 + dVar24 * dVar24;
    uVar37 = ~-(ulonglong)(dVar22 < __real_3e45798ee2308c3a) & __real_ffffffffffffffff;
    dVar22 = __real_3ff0000000000000 / SQRT(dVar22);
    dVar34 = (double)((ulonglong)(dVar31 * dVar22) & uVar37);
    dVar27 = (double)((ulonglong)(dVar32 * dVar22) & uVar37);
    dVar24 = (double)(((ulonglong)(dVar24 * dVar22) ^ ___xmm_3ff00000000000000000000000000000) &
                     uVar37);
    auVar65._0_8_ = (double)(___xmm_3ff00000000000000000000000000000 ^ (ulonglong)dVar24);
    auVar65._8_8_ =
         (double)(_UNK_15061cbc8 ^ ((ulonglong)(dVar23 * dVar22) ^ _UNK_15061cbc8) & uVar37);
    param_1[0x38] = dVar34;
    param_1[0x39] = dVar27;
    *(undefined1 (*) [16])(param_1 + 0x3a) = auVar65;
    auVar50._8_8_ = dVar27;
    auVar50._0_8_ = dVar34;
    auVar62 = blendpd(auVar50,auVar65,2);
    dVar23 = param_1[0x10] * auVar65._0_8_ - param_1[0x12] * auVar62._0_8_;
    dVar22 = param_1[0x11] * dVar34 - dVar27 * param_1[0x10];
    dVar33 = param_1[0x12] * dVar27 - auVar65._0_8_ * param_1[0x11];
    dVar23 = dVar23 + dVar23;
    dVar22 = dVar22 + dVar22;
    dVar33 = dVar33 + dVar33;
    param_1[0x23] =
         param_1[0x31] +
         (dVar22 * dVar27 - dVar23 * dVar24) + dVar33 * auVar65._8_8_ + param_1[0x10];
    param_1[0x24] =
         param_1[0x32] +
         (dVar33 * dVar24 - dVar22 * dVar34) + dVar23 * auVar65._8_8_ + param_1[0x11];
    param_1[0x25] =
         auVar65._8_8_ * dVar22 + param_1[0x12] + (dVar23 * dVar34 - dVar33 * dVar27) +
         param_1[0x33];
    auVar70._8_4_ = SUB84(dVar34,0);
    auVar70._0_8_ = dVar34;
    auVar70._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
    dVar25 = auVar70._8_8_;
    auVar51._8_4_ = SUB84(auVar65._0_8_,0);
    auVar51._0_8_ = auVar65._0_8_;
    auVar51._12_4_ = (int)((ulonglong)auVar65._0_8_ >> 0x20);
    param_1[0x2a] =
         param_1[0xd] * auVar65._0_8_ * dVar43 +
         param_1[0xe] * dVar27 + param_1[0xf] * dVar34 * dVar46 + param_1[0xc] * auVar65._8_8_;
    param_1[0x2b] =
         param_1[0xc] * auVar51._8_8_ * dVar60 +
         param_1[0xf] * dVar27 + param_1[0xe] * dVar25 * dVar26 + param_1[0xd] * auVar65._8_8_;
    param_1[0x2c] =
         param_1[0xf] * auVar65._0_8_ * dVar46 +
         ((param_1[0xd] * dVar34 * dVar46 + param_1[0xe] * auVar65._8_8_) - param_1[0xc] * dVar27);
    param_1[0x2d] =
         param_1[0xe] * auVar51._8_8_ * dVar26 +
         ((param_1[0xc] * dVar25 * dVar26 + param_1[0xf] * auVar65._8_8_) - param_1[0xd] * dVar27);
    dVar24 = dVar27 + dVar27;
    dVar23 = auVar65._0_8_ + auVar65._0_8_;
    dVar60 = dVar34 * (dVar34 + dVar34);
    dVar25 = dVar25 * dVar24;
    dVar33 = (dVar34 + dVar34) * auVar65._8_8_;
    dVar35 = auVar65._8_8_ * dVar23 + dVar25;
    dVar22 = dVar33 + dVar27 * dVar23;
    dVar43 = dVar24 * auVar65._8_8_ + dVar23 * dVar34;
    dVar33 = dVar27 * dVar23 - dVar33;
    dVar34 = dVar23 * dVar34 - dVar24 * auVar65._8_8_;
    auVar66._0_8_ = dVar25 - auVar65._8_8_ * dVar23;
    auVar66._8_8_ = dVar25 - auVar65._8_8_ * (auVar65._8_8_ + auVar65._8_8_);
    auVar52._0_8_ = dVar45 - (dVar23 * auVar65._0_8_ + dVar27 * dVar24);
    auVar52._8_8_ = dVar11 - (dVar23 * auVar65._0_8_ + dVar60);
    dVar21 = dVar21 - (dVar27 * dVar24 + dVar60);
    dVar45 = param_1[0x1b];
    dVar24 = param_1[0x1d];
    dVar23 = param_1[0x1c];
    auVar62 = blendpd(auVar52,auVar66,1);
    dVar60 = dVar43 * 0.0 + auVar66._0_8_ * 0.0 + auVar52._0_8_ * dVar45;
    dVar46 = dVar43 * 0.0 + auVar66._0_8_ * dVar23 + auVar52._0_8_ * 0.0;
    dVar32 = dVar24 * dVar43 +
             auVar66._0_8_ * 0.0 + auVar52._0_8_ * ___xmm_00000000000000000000000000000000;
    dVar27 = dVar33 * 0.0 + auVar52._8_8_ * 0.0 + dVar35 * dVar45;
    dVar25 = dVar33 * 0.0 + dVar23 * auVar52._8_8_ + dVar35 * 0.0;
    dVar48 = dVar24 * dVar33 + auVar52._8_8_ * 0.0 + dVar35 * 0.0;
    dVar11 = dVar21 * 0.0 + dVar22 * 0.0 + dVar45 * dVar34;
    dVar23 = dVar21 * 0.0 + dVar22 * dVar23 + dVar34 * 0.0;
    dVar26 = auVar62._0_8_;
    dVar31 = auVar62._8_8_;
    dVar24 = dVar24 * dVar21 + dVar22 * ___xmm_00000000000000000000000000000000 + dVar34 * 0.0;
    dVar45 = dVar32 * dVar33 + dVar31 * dVar46 + dVar60 * dVar35;
    auVar2._8_4_ = SUB84(dVar45,0);
    auVar2._0_8_ = dVar32 * dVar43 + dVar26 * dVar46 + dVar60 * auVar52._0_8_;
    auVar2._12_4_ = (int)((ulonglong)dVar45 >> 0x20);
    *(undefined1 (*) [16])(param_1 + 0x58) = auVar2;
    param_1[0x5a] = dVar32 * dVar21 + dVar46 * dVar22 + dVar34 * dVar60;
    param_1[0x5b] = 0.0;
    param_1[0x5c] = dVar48 * dVar43 + dVar26 * dVar25 + dVar27 * auVar52._0_8_;
    param_1[0x5d] = dVar48 * dVar33 + dVar31 * dVar25 + dVar27 * dVar35;
    param_1[0x5e] = dVar48 * dVar21 + dVar25 * dVar22 + dVar34 * dVar27;
    param_1[0x5f] = 0.0;
    param_1[0x60] = dVar24 * dVar43 + dVar26 * dVar23 + dVar11 * auVar52._0_8_;
    param_1[0x61] = dVar24 * dVar33 + dVar31 * dVar23 + dVar11 * dVar35;
    param_1[0x62] = dVar24 * dVar21 + dVar23 * dVar22 + dVar34 * dVar11;
    param_1[0x65] = 0.0;
    param_1[0x66] = 0.0;
    param_1[99] = 0.0;
    param_1[100] = 0.0;
    param_1[0x67] = 1.0;
  }
  uVar37 = __real_bff0000000000000;
  dVar21 = __real_3ff0000000000000;
  uVar20 = -(ulonglong)
            (0.0 <= param_1[0x35] * param_1[0x39] + param_1[0x37] * param_1[0x3b] +
                    param_1[0x34] * param_1[0x38] + param_1[0x36] * param_1[0x3a]);
  dVar45 = (double)(~uVar20 & __real_bff0000000000000 | uVar20 & (ulonglong)__real_3ff0000000000000)
  ;
  param_1[0x38] = param_1[0x38] * dVar45;
  param_1[0x39] = param_1[0x39] * dVar45;
  param_1[0x3a] = param_1[0x3a] * dVar45;
  param_1[0x3b] = param_1[0x3b] * dVar45;
  uVar20 = -(ulonglong)
            (0.0 <= param_1[0x27] * param_1[0x2b] + param_1[0x29] * param_1[0x2d] +
                    param_1[0x26] * param_1[0x2a] + param_1[0x28] * param_1[0x2c]);
  dVar21 = (double)(~uVar20 & uVar37 | (ulonglong)dVar21 & uVar20);
  param_1[0x2a] = param_1[0x2a] * dVar21;
  param_1[0x2b] = param_1[0x2b] * dVar21;
  param_1[0x2c] = param_1[0x2c] * dVar21;
  param_1[0x2d] = param_1[0x2d] * dVar21;
  param_1[0x84] = dVar58 + param_1[0x84];
  param_1[0x85] = dStack_1e0 + param_1[0x85];
  param_1[0x86] = param_3 + param_1[0x86];
  return;
}


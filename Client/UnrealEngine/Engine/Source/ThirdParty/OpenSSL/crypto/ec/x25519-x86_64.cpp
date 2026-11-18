// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 21

// x25519_fe51_mul @ 140e5dd80

void x25519_fe51_mul(undefined8 param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
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
  
  uVar1 = *param_3;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *param_2;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar1;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *param_2;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_3[1];
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2[1];
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_3[4] * 0x13;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_2[2];
  auVar16._8_8_ = 0;
  auVar16._0_8_ = param_3[4] * 0x13;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2[2];
  auVar17._8_8_ = 0;
  auVar17._0_8_ = param_3[3] * 0x13;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_2[3];
  auVar18._8_8_ = 0;
  auVar18._0_8_ = param_3[3] * 0x13;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_2[3];
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_3[2] * 0x13;
  auVar2 = auVar4 * auVar15 + auVar2 * auVar13 + auVar6 * auVar17 + auVar8 * auVar19;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_2[4];
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_3[2] * 0x13;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_2[4];
  auVar21._8_8_ = 0;
  auVar21._0_8_ = param_3[1] * 0x13;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_2[1];
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar1;
  auVar3 = auVar3 * auVar14 + auVar5 * auVar16 + auVar7 * auVar18 + auVar9 * auVar20 +
           auVar11 * auVar22;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_2[4];
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar1;
  L_reduce51(auVar2._8_8_ + SUB168(auVar10 * auVar21,8) +
             (ulonglong)CARRY8(auVar2._0_8_,SUB168(auVar10 * auVar21,0)),SUB168(auVar12 * auVar23,8)
             ,auVar3._0_8_,auVar3._8_8_);
  return;
}

// L$SEH_begin_x25519_fe51_mul @ 140e5dd8d

void L_SEH_begin_x25519_fe51_mul(undefined8 param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
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
  
  uVar1 = *param_3;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *param_2;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar1;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *param_2;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = param_3[1];
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2[1];
  auVar15._8_8_ = 0;
  auVar15._0_8_ = param_3[4] * 0x13;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_2[2];
  auVar16._8_8_ = 0;
  auVar16._0_8_ = param_3[4] * 0x13;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2[2];
  auVar17._8_8_ = 0;
  auVar17._0_8_ = param_3[3] * 0x13;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = param_2[3];
  auVar18._8_8_ = 0;
  auVar18._0_8_ = param_3[3] * 0x13;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = param_2[3];
  auVar19._8_8_ = 0;
  auVar19._0_8_ = param_3[2] * 0x13;
  auVar2 = auVar4 * auVar15 + auVar2 * auVar13 + auVar6 * auVar17 + auVar8 * auVar19;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_2[4];
  auVar20._8_8_ = 0;
  auVar20._0_8_ = param_3[2] * 0x13;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_2[4];
  auVar21._8_8_ = 0;
  auVar21._0_8_ = param_3[1] * 0x13;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_2[1];
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar1;
  auVar3 = auVar3 * auVar14 + auVar5 * auVar16 + auVar7 * auVar18 + auVar9 * auVar20 +
           auVar11 * auVar22;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_2[4];
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar1;
  L_reduce51(auVar2._8_8_ + SUB168(auVar10 * auVar21,8) +
             (ulonglong)CARRY8(auVar2._0_8_,SUB168(auVar10 * auVar21,0)),SUB168(auVar12 * auVar23,8)
             ,auVar3._0_8_,auVar3._8_8_);
  return;
}

// x25519_fe51_sqr @ 140e5df40

void x25519_fe51_sqr(undefined8 param_1,ulonglong *param_2)

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
  ulonglong uVar13;
  
  uVar13 = *param_2;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar13;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar13;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2[1];
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar13 * 2;
  uVar13 = param_2[3] * 0x13;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2[1] * 2;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_2[4] * 0x13;
  auVar1 = auVar3 * auVar9 + auVar1 * auVar7;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2[3];
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar13;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar13;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_2[2] * 2;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2[2] * 2;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_2[4] * 0x13;
  auVar2 = auVar2 * auVar8 + auVar4 * auVar10 + auVar6 * auVar12;
  L_reduce51(auVar1._8_8_ + SUB168(auVar5 * auVar11,8) +
             (ulonglong)CARRY8(auVar1._0_8_,SUB168(auVar5 * auVar11,0)),SUB168(auVar6 * auVar12,8),
             auVar2._0_8_,auVar2._8_8_);
  return;
}

// L$SEH_begin_x25519_fe51_sqr @ 140e5df4d

void L_SEH_begin_x25519_fe51_sqr(undefined8 param_1,ulonglong *param_2)

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
  ulonglong uVar13;
  
  uVar13 = *param_2;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar13;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar13;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2[1];
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar13 * 2;
  uVar13 = param_2[3] * 0x13;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2[1] * 2;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = param_2[4] * 0x13;
  auVar1 = auVar3 * auVar9 + auVar1 * auVar7;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2[3];
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar13;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar13;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_2[2] * 2;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2[2] * 2;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_2[4] * 0x13;
  auVar2 = auVar2 * auVar8 + auVar4 * auVar10 + auVar6 * auVar12;
  L_reduce51(auVar1._8_8_ + SUB168(auVar5 * auVar11,8) +
             (ulonglong)CARRY8(auVar1._0_8_,SUB168(auVar5 * auVar11,0)),SUB168(auVar6 * auVar12,8),
             auVar2._0_8_,auVar2._8_8_);
  return;
}

// L$reduce51 @ 140e5e060

void L_reduce51(longlong param_1,undefined8 param_2,ulonglong param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong unaff_RBX;
  ulonglong *unaff_RDI;
  ulonglong uVar2;
  ulonglong in_R10;
  longlong in_R11;
  ulonglong uVar3;
  ulonglong unaff_R12;
  ulonglong uVar4;
  longlong unaff_R13;
  ulonglong uVar5;
  ulonglong unaff_R14;
  ulonglong uVar6;
  longlong unaff_R15;
  
  uVar3 = in_R11 << 0xd | in_R10 >> 0x33;
  uVar4 = unaff_R12 + uVar3;
  uVar1 = param_1 << 0xd | unaff_RBX >> 0x33;
  uVar2 = param_3 + uVar1;
  uVar5 = (unaff_R13 + (ulonglong)CARRY8(unaff_R12,uVar3)) * 0x2000 | uVar4 >> 0x33;
  uVar6 = unaff_R14 + uVar5;
  uVar3 = (in_R10 & 0x7ffffffffffff) +
          ((param_4 + (ulonglong)CARRY8(param_3,uVar1)) * 0x2000 | uVar2 >> 0x33);
  uVar1 = (unaff_RBX & 0x7ffffffffffff) +
          ((unaff_R15 + (ulonglong)CARRY8(unaff_R14,uVar5)) * 0x2000 | uVar6 >> 0x33) * 0x13;
  *unaff_RDI = uVar1 & 0x7ffffffffffff;
  unaff_RDI[1] = (uVar2 & 0x7ffffffffffff) + (uVar1 >> 0x33);
  unaff_RDI[2] = uVar3 & 0x7ffffffffffff;
  unaff_RDI[3] = (uVar4 & 0x7ffffffffffff) + (uVar3 >> 0x33);
  unaff_RDI[4] = uVar6 & 0x7ffffffffffff;
  return;
}

// x25519_fe51_mul121666 @ 140e5e140

void x25519_fe51_mul121666(undefined8 param_1,ulonglong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2[1];
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2[4];
  L_reduce51(SUB168(ZEXT816(0x1db42) * auVar1,8),SUB168(ZEXT816(0x1db42) * auVar3,8),
             SUB168(ZEXT816(0x1db42) * auVar2,0),SUB168(ZEXT816(0x1db42) * auVar2,8));
  return;
}

// L$SEH_begin_x25519_fe51_mul121666 @ 140e5e14d

void L_SEH_begin_x25519_fe51_mul121666(undefined8 param_1,ulonglong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2[1];
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2[4];
  L_reduce51(SUB168(ZEXT816(0x1db42) * auVar1,8),SUB168(ZEXT816(0x1db42) * auVar3,8),
             SUB168(ZEXT816(0x1db42) * auVar2,0),SUB168(ZEXT816(0x1db42) * auVar2,8));
  return;
}

// x25519_fe64_eligible @ 140e5e1c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint x25519_fe64_eligible(void)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((_DAT_15540a9f8 & 0x80100) == 0x80100) {
    uVar1 = _DAT_15540a9f8 & 0x80100;
  }
  return uVar1;
}

// x25519_fe64_mul @ 140e5e1e0

void x25519_fe64_mul(undefined8 param_1,ulonglong *param_2,ulonglong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *param_3;
  L_reduce64(param_3[1],0x26,SUB168(auVar1 * auVar2,0),
             *param_2 * param_3[1] + SUB168(auVar1 * auVar2,8) + param_2[1] * *param_3);
  return;
}

// L$SEH_begin_x25519_fe64_mul @ 140e5e1ed

void L_SEH_begin_x25519_fe64_mul(undefined8 param_1,ulonglong *param_2,ulonglong *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = *param_3;
  L_reduce64(param_3[1],0x26,SUB168(auVar1 * auVar2,0),
             *param_2 * param_3[1] + SUB168(auVar1 * auVar2,8) + param_2[1] * *param_3);
  return;
}

// x25519_fe64_sqr @ 140e5e360

void x25519_fe64_sqr(undefined8 param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  unkint9 Var5;
  unkint9 Var6;
  unkint9 Var7;
  unkint9 Var8;
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
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar1;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar1;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar1;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar2;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar1;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar3;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar1;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar4;
  Var5 = (unkuint9)SUB168(auVar12 * auVar19,0) + (unkuint9)SUB168(auVar11 * auVar18,8) +
         (unkuint9)
         ((char)((unkuint9)SUB168(auVar11 * auVar18,0) + (unkuint9)SUB168(auVar10 * auVar17,8) +
                 (unkuint9)0 >> 0x40) != '\0');
  Var6 = (unkuint9)SUB168(auVar12 * auVar19,8) + (unkuint9)0 +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar2;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar3;
  Var6 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar13 * auVar20,8) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar2;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar4;
  Var7 = (unkuint9)SUB168(auVar14 * auVar21,8) + (unkuint9)0 +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar3;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar4;
  Var8 = (unkuint9)SUB168(auVar15 * auVar22,8) + (unkuint9)0 +
         (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
  L_reduce64(uVar2,0x26,SUB168(auVar9 * auVar16,0),
             SUB168(auVar10 * auVar17,0) * 2 + (ulonglong)((char)((unkuint9)Var8 >> 0x40) != '\0') +
             SUB168(auVar9 * auVar16,8) +
             (ulonglong)
             ((char)((unkuint9)(ulonglong)Var8 + (unkuint9)0 +
                     (unkuint9)
                     ((char)((unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar15 * auVar22,0) +
                             (unkuint9)
                             ((char)((unkuint9)(ulonglong)Var6 +
                                     (unkuint9)SUB168(auVar14 * auVar21,0) +
                                     (unkuint9)
                                     ((char)((unkuint9)(ulonglong)Var5 +
                                             (unkuint9)SUB168(auVar13 * auVar20,0) + (unkuint9)0 >>
                                            0x40) != '\0') >> 0x40) != '\0') >> 0x40) != '\0') >>
                    0x40) != '\0'));
  return;
}

// L$SEH_begin_x25519_fe64_sqr @ 140e5e36d

void L_SEH_begin_x25519_fe64_sqr(undefined8 param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  unkint9 Var5;
  unkint9 Var6;
  unkint9 Var7;
  unkint9 Var8;
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
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar1;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar1;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar1;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar2;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar1;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar3;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = uVar1;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar4;
  Var5 = (unkuint9)SUB168(auVar12 * auVar19,0) + (unkuint9)SUB168(auVar11 * auVar18,8) +
         (unkuint9)
         ((char)((unkuint9)SUB168(auVar11 * auVar18,0) + (unkuint9)SUB168(auVar10 * auVar17,8) +
                 (unkuint9)0 >> 0x40) != '\0');
  Var6 = (unkuint9)SUB168(auVar12 * auVar19,8) + (unkuint9)0 +
         (unkuint9)((char)((unkuint9)Var5 >> 0x40) != '\0');
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar2;
  auVar20._8_8_ = 0;
  auVar20._0_8_ = uVar3;
  Var6 = (unkuint9)(ulonglong)Var6 + (unkuint9)SUB168(auVar13 * auVar20,8) +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar2;
  auVar21._8_8_ = 0;
  auVar21._0_8_ = uVar4;
  Var7 = (unkuint9)SUB168(auVar14 * auVar21,8) + (unkuint9)0 +
         (unkuint9)((char)((unkuint9)Var6 >> 0x40) != '\0');
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar3;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar4;
  Var8 = (unkuint9)SUB168(auVar15 * auVar22,8) + (unkuint9)0 +
         (unkuint9)((char)((unkuint9)Var7 >> 0x40) != '\0');
  L_reduce64(uVar2,0x26,SUB168(auVar9 * auVar16,0),
             SUB168(auVar10 * auVar17,0) * 2 + (ulonglong)((char)((unkuint9)Var8 >> 0x40) != '\0') +
             SUB168(auVar9 * auVar16,8) +
             (ulonglong)
             ((char)((unkuint9)(ulonglong)Var8 + (unkuint9)0 +
                     (unkuint9)
                     ((char)((unkuint9)(ulonglong)Var7 + (unkuint9)SUB168(auVar15 * auVar22,0) +
                             (unkuint9)
                             ((char)((unkuint9)(ulonglong)Var6 +
                                     (unkuint9)SUB168(auVar14 * auVar21,0) +
                                     (unkuint9)
                                     ((char)((unkuint9)(ulonglong)Var5 +
                                             (unkuint9)SUB168(auVar13 * auVar20,0) + (unkuint9)0 >>
                                            0x40) != '\0') >> 0x40) != '\0') >> 0x40) != '\0') >>
                    0x40) != '\0'));
  return;
}

// L$reduce64 @ 140e5e480

void L_reduce64(undefined8 param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  unkint9 Var9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  longlong unaff_RDI;
  ulonglong in_R10;
  ulonglong in_R11;
  ulonglong unaff_R12;
  ulonglong unaff_R13;
  ulonglong unaff_R14;
  ulonglong unaff_R15;
  byte in_CF;
  byte in_OF;
  longlong *local_res10;
  unkint9 Var8;
  
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_2;
  auVar14._8_8_ = 0;
  auVar14._0_8_ = unaff_R12;
  Var8 = (unkuint9)param_3 + (unkuint9)SUB168(auVar10 * auVar14,0) + (unkuint9)in_CF;
  uVar4 = (ulonglong)Var8;
  Var9 = (unkuint9)param_4 + (unkuint9)SUB168(auVar10 * auVar14,8) + (unkuint9)in_OF;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = param_2;
  auVar15._8_8_ = 0;
  auVar15._0_8_ = unaff_R13;
  Var8 = (unkuint9)(ulonglong)Var9 + (unkuint9)SUB168(auVar11 * auVar15,0) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  uVar5 = (ulonglong)Var8;
  Var9 = (unkuint9)in_R10 + (unkuint9)SUB168(auVar11 * auVar15,8) +
         (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
  auVar12._8_8_ = 0;
  auVar12._0_8_ = param_2;
  auVar16._8_8_ = 0;
  auVar16._0_8_ = unaff_R14;
  Var8 = (unkuint9)(ulonglong)Var9 + (unkuint9)SUB168(auVar12 * auVar16,0) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  uVar6 = (ulonglong)Var8;
  Var9 = (unkuint9)in_R11 + (unkuint9)SUB168(auVar12 * auVar16,8) +
         (unkuint9)((char)((unkuint9)Var9 >> 0x40) != '\0');
  auVar13._8_8_ = 0;
  auVar13._0_8_ = param_2;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = unaff_R15;
  Var8 = (unkuint9)(ulonglong)Var9 + (unkuint9)SUB168(auVar13 * auVar17,0) +
         (unkuint9)((char)((unkuint9)Var8 >> 0x40) != '\0');
  uVar7 = (ulonglong)Var8;
  param_2 = (SUB168(auVar13 * auVar17,8) + unaff_RDI * 2 +
             (ulonglong)((char)((unkuint9)Var9 >> 0x40) != '\0') +
            (ulonglong)((char)((unkuint9)Var8 >> 0x40) != '\0')) * param_2;
  uVar1 = (ulonglong)CARRY8(uVar4,param_2);
  uVar2 = (ulonglong)CARRY8(uVar5,uVar1);
  uVar3 = (ulonglong)CARRY8(uVar6,uVar2);
  local_res10[1] = uVar5 + uVar1;
  local_res10[2] = uVar6 + uVar2;
  local_res10[3] = uVar7 + uVar3;
  *local_res10 = uVar4 + param_2 + (-(ulonglong)CARRY8(uVar7,uVar3) & 0x26);
  return;
}

// x25519_fe64_mul121666 @ 140e5e540

void x25519_fe64_mul121666(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *param_2;
  uVar7 = SUB168(ZEXT816(0x1db42) * auVar3,0);
  uVar10 = SUB168(ZEXT816(0x1db42) * auVar3,8);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2[1];
  uVar1 = SUB168(ZEXT816(0x1db42) * auVar4,0);
  uVar8 = SUB168(ZEXT816(0x1db42) * auVar4,8);
  uVar12 = uVar1 + uVar10;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_2[2];
  uVar2 = SUB168(ZEXT816(0x1db42) * auVar5,0);
  uVar11 = SUB168(ZEXT816(0x1db42) * auVar5,8);
  uVar1 = (ulonglong)CARRY8(uVar1,uVar10);
  uVar10 = uVar2 + uVar8;
  uVar13 = uVar10 + uVar1;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2[3];
  uVar9 = SUB168(ZEXT816(0x1db42) * auVar6,0);
  uVar1 = (ulonglong)(CARRY8(uVar2,uVar8) || CARRY8(uVar10,uVar1));
  uVar10 = uVar9 + uVar11;
  uVar8 = uVar10 + uVar1;
  uVar9 = (SUB168(ZEXT816(0x1db42) * auVar6,8) +
          (ulonglong)(CARRY8(uVar9,uVar11) || CARRY8(uVar10,uVar1))) * 0x26;
  uVar1 = (ulonglong)CARRY8(uVar7,uVar9);
  uVar10 = (ulonglong)CARRY8(uVar12,uVar1);
  uVar2 = (ulonglong)CARRY8(uVar13,uVar10);
  param_1[1] = uVar12 + uVar1;
  param_1[2] = uVar13 + uVar10;
  param_1[3] = uVar8 + uVar2;
  *param_1 = uVar7 + uVar9 + (-(ulonglong)CARRY8(uVar8,uVar2) & 0x26);
  return;
}

// L$SEH_begin_x25519_fe64_mul121666 @ 140e5e54d

void L_SEH_begin_x25519_fe64_mul121666(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  auVar3._8_8_ = 0;
  auVar3._0_8_ = *param_2;
  uVar7 = SUB168(ZEXT816(0x1db42) * auVar3,0);
  uVar10 = SUB168(ZEXT816(0x1db42) * auVar3,8);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2[1];
  uVar1 = SUB168(ZEXT816(0x1db42) * auVar4,0);
  uVar8 = SUB168(ZEXT816(0x1db42) * auVar4,8);
  uVar12 = uVar1 + uVar10;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_2[2];
  uVar2 = SUB168(ZEXT816(0x1db42) * auVar5,0);
  uVar11 = SUB168(ZEXT816(0x1db42) * auVar5,8);
  uVar1 = (ulonglong)CARRY8(uVar1,uVar10);
  uVar10 = uVar2 + uVar8;
  uVar13 = uVar10 + uVar1;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_2[3];
  uVar9 = SUB168(ZEXT816(0x1db42) * auVar6,0);
  uVar1 = (ulonglong)(CARRY8(uVar2,uVar8) || CARRY8(uVar10,uVar1));
  uVar10 = uVar9 + uVar11;
  uVar8 = uVar10 + uVar1;
  uVar9 = (SUB168(ZEXT816(0x1db42) * auVar6,8) +
          (ulonglong)(CARRY8(uVar9,uVar11) || CARRY8(uVar10,uVar1))) * 0x26;
  uVar1 = (ulonglong)CARRY8(uVar7,uVar9);
  uVar10 = (ulonglong)CARRY8(uVar12,uVar1);
  uVar2 = (ulonglong)CARRY8(uVar13,uVar10);
  param_1[1] = uVar12 + uVar1;
  param_1[2] = uVar13 + uVar10;
  param_1[3] = uVar8 + uVar2;
  *param_1 = uVar7 + uVar9 + (-(ulonglong)CARRY8(uVar8,uVar2) & 0x26);
  return;
}

// x25519_fe64_add @ 140e5e5c0

void x25519_fe64_add(longlong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar4 = *param_2 + *param_3;
  uVar1 = (ulonglong)CARRY8(*param_2,*param_3);
  uVar2 = param_2[1] + param_3[1];
  uVar5 = uVar2 + uVar1;
  uVar1 = (ulonglong)(CARRY8(param_2[1],param_3[1]) || CARRY8(uVar2,uVar1));
  uVar2 = param_2[2] + param_3[2];
  uVar6 = uVar2 + uVar1;
  uVar1 = (ulonglong)(CARRY8(param_2[2],param_3[2]) || CARRY8(uVar2,uVar1));
  uVar2 = param_2[3] + param_3[3];
  uVar7 = uVar2 + uVar1;
  uVar3 = -(ulonglong)(CARRY8(param_2[3],param_3[3]) || CARRY8(uVar2,uVar1)) & 0x26;
  uVar1 = (ulonglong)CARRY8(uVar4,uVar3);
  uVar2 = (ulonglong)CARRY8(uVar5,uVar1);
  param_1[1] = uVar5 + uVar1;
  uVar1 = (ulonglong)CARRY8(uVar6,uVar2);
  param_1[2] = uVar6 + uVar2;
  param_1[3] = uVar7 + uVar1;
  *param_1 = uVar4 + uVar3 + (-(ulonglong)CARRY8(uVar7,uVar1) & 0x26);
  return;
}

// L$SEH_begin_x25519_fe64_add @ 140e5e5cd

void L_SEH_begin_x25519_fe64_add(longlong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar4 = *param_2 + *param_3;
  uVar1 = (ulonglong)CARRY8(*param_2,*param_3);
  uVar2 = param_2[1] + param_3[1];
  uVar5 = uVar2 + uVar1;
  uVar1 = (ulonglong)(CARRY8(param_2[1],param_3[1]) || CARRY8(uVar2,uVar1));
  uVar2 = param_2[2] + param_3[2];
  uVar6 = uVar2 + uVar1;
  uVar1 = (ulonglong)(CARRY8(param_2[2],param_3[2]) || CARRY8(uVar2,uVar1));
  uVar2 = param_2[3] + param_3[3];
  uVar7 = uVar2 + uVar1;
  uVar3 = -(ulonglong)(CARRY8(param_2[3],param_3[3]) || CARRY8(uVar2,uVar1)) & 0x26;
  uVar1 = (ulonglong)CARRY8(uVar4,uVar3);
  uVar2 = (ulonglong)CARRY8(uVar5,uVar1);
  param_1[1] = uVar5 + uVar1;
  uVar1 = (ulonglong)CARRY8(uVar6,uVar2);
  param_1[2] = uVar6 + uVar2;
  param_1[3] = uVar7 + uVar1;
  *param_1 = uVar4 + uVar3 + (-(ulonglong)CARRY8(uVar7,uVar1) & 0x26);
  return;
}

// x25519_fe64_sub @ 140e5e640

void x25519_fe64_sub(longlong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar4 = *param_2 - *param_3;
  uVar1 = (ulonglong)(*param_2 < *param_3);
  uVar2 = param_2[1] - param_3[1];
  uVar5 = uVar2 - uVar1;
  uVar1 = (ulonglong)(param_2[1] < param_3[1] || uVar2 < uVar1);
  uVar2 = param_2[2] - param_3[2];
  uVar6 = uVar2 - uVar1;
  uVar1 = (ulonglong)(param_2[2] < param_3[2] || uVar2 < uVar1);
  uVar2 = param_2[3] - param_3[3];
  uVar7 = uVar2 - uVar1;
  uVar3 = -(ulonglong)(param_2[3] < param_3[3] || uVar2 < uVar1) & 0x26;
  uVar1 = (ulonglong)(uVar4 < uVar3);
  uVar2 = (ulonglong)(uVar5 < uVar1);
  param_1[1] = uVar5 - uVar1;
  uVar1 = (ulonglong)(uVar6 < uVar2);
  param_1[2] = uVar6 - uVar2;
  param_1[3] = uVar7 - uVar1;
  *param_1 = (uVar4 - uVar3) - (-(ulonglong)(uVar7 < uVar1) & 0x26);
  return;
}

// L$SEH_begin_x25519_fe64_sub @ 140e5e64d

void L_SEH_begin_x25519_fe64_sub(longlong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar4 = *param_2 - *param_3;
  uVar1 = (ulonglong)(*param_2 < *param_3);
  uVar2 = param_2[1] - param_3[1];
  uVar5 = uVar2 - uVar1;
  uVar1 = (ulonglong)(param_2[1] < param_3[1] || uVar2 < uVar1);
  uVar2 = param_2[2] - param_3[2];
  uVar6 = uVar2 - uVar1;
  uVar1 = (ulonglong)(param_2[2] < param_3[2] || uVar2 < uVar1);
  uVar2 = param_2[3] - param_3[3];
  uVar7 = uVar2 - uVar1;
  uVar3 = -(ulonglong)(param_2[3] < param_3[3] || uVar2 < uVar1) & 0x26;
  uVar1 = (ulonglong)(uVar4 < uVar3);
  uVar2 = (ulonglong)(uVar5 < uVar1);
  param_1[1] = uVar5 - uVar1;
  uVar1 = (ulonglong)(uVar6 < uVar2);
  param_1[2] = uVar6 - uVar2;
  param_1[3] = uVar7 - uVar1;
  *param_1 = (uVar4 - uVar3) - (-(ulonglong)(uVar7 < uVar1) & 0x26);
  return;
}

// x25519_fe64_tobytes @ 140e5e6c0

void x25519_fe64_tobytes(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar7 = ((longlong)param_2[3] >> 0x3f & 0x13U) + 0x13;
  uVar4 = *param_2 + uVar7;
  uVar7 = (ulonglong)CARRY8(*param_2,uVar7);
  uVar5 = param_2[1] + uVar7;
  uVar7 = (ulonglong)CARRY8(param_2[1],uVar7);
  uVar6 = param_2[2] + uVar7;
  uVar2 = (param_2[3] & 0x7fffffffffffffff) + (ulonglong)CARRY8(param_2[2],uVar7);
  uVar3 = ~((longlong)uVar2 >> 0x3f) & 0x13;
  uVar7 = (ulonglong)(uVar4 < uVar3);
  uVar1 = (ulonglong)(uVar5 < uVar7);
  *param_1 = uVar4 - uVar3;
  param_1[1] = uVar5 - uVar7;
  param_1[2] = uVar6 - uVar1;
  param_1[3] = (uVar2 & 0x7fffffffffffffff) - (ulonglong)(uVar6 < uVar1);
  return;
}

// L$SEH_begin_x25519_fe64_tobytes @ 140e5e6cd

void L_SEH_begin_x25519_fe64_tobytes(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar7 = ((longlong)param_2[3] >> 0x3f & 0x13U) + 0x13;
  uVar4 = *param_2 + uVar7;
  uVar7 = (ulonglong)CARRY8(*param_2,uVar7);
  uVar5 = param_2[1] + uVar7;
  uVar7 = (ulonglong)CARRY8(param_2[1],uVar7);
  uVar6 = param_2[2] + uVar7;
  uVar2 = (param_2[3] & 0x7fffffffffffffff) + (ulonglong)CARRY8(param_2[2],uVar7);
  uVar3 = ~((longlong)uVar2 >> 0x3f) & 0x13;
  uVar7 = (ulonglong)(uVar4 < uVar3);
  uVar1 = (ulonglong)(uVar5 < uVar7);
  *param_1 = uVar4 - uVar3;
  param_1[1] = uVar5 - uVar7;
  param_1[2] = uVar6 - uVar1;
  param_1[3] = (uVar2 & 0x7fffffffffffffff) - (ulonglong)(uVar6 < uVar1);
  return;
}


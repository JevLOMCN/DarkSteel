// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 46

// _aesni_encrypt2 @ 140df3ae0

undefined8 _aesni_encrypt2(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int in_EAX;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint in_XMM2_Dc;
  uint in_XMM2_Dd;
  undefined1 auVar15 [16];
  uint in_XMM3_Dc;
  uint in_XMM3_Dd;
  undefined1 auVar16 [16];
  
  uVar5 = (ulonglong)(uint)(in_EAX << 4);
  uVar11 = param_1[4];
  uVar12 = param_1[5];
  uVar13 = param_1[6];
  uVar14 = param_1[7];
  auVar15._0_4_ = (uint)param_3 ^ *param_1;
  auVar15._4_4_ = (uint)((ulonglong)param_3 >> 0x20) ^ param_1[1];
  auVar15._8_4_ = in_XMM2_Dc ^ param_1[2];
  auVar15._12_4_ = in_XMM2_Dd ^ param_1[3];
  auVar16._0_4_ = (uint)param_4 ^ *param_1;
  auVar16._4_4_ = (uint)((ulonglong)param_4 >> 0x20) ^ param_1[1];
  auVar16._8_4_ = in_XMM3_Dc ^ param_1[2];
  auVar16._12_4_ = in_XMM3_Dd ^ param_1[3];
  uVar7 = param_1[8];
  uVar8 = param_1[9];
  uVar9 = param_1[10];
  uVar10 = param_1[0xb];
  lVar6 = 0x10 - uVar5;
  do {
    auVar1._4_4_ = uVar12;
    auVar1._0_4_ = uVar11;
    auVar1._8_4_ = uVar13;
    auVar1._12_4_ = uVar14;
    auVar15 = aesenc(auVar15,auVar1);
    auVar4._4_4_ = uVar12;
    auVar4._0_4_ = uVar11;
    auVar4._8_4_ = uVar13;
    auVar4._12_4_ = uVar14;
    auVar16 = aesenc(auVar16,auVar4);
    auVar1 = *(undefined1 (*) [16])((longlong)param_1 + lVar6 + uVar5 + 0x20);
    uVar11 = auVar1._0_4_;
    uVar12 = auVar1._4_4_;
    uVar13 = auVar1._8_4_;
    uVar14 = auVar1._12_4_;
    lVar6 = lVar6 + 0x20;
    auVar2._4_4_ = uVar8;
    auVar2._0_4_ = uVar7;
    auVar2._8_4_ = uVar9;
    auVar2._12_4_ = uVar10;
    auVar15 = aesenc(auVar15,auVar2);
    auVar3._4_4_ = uVar8;
    auVar3._0_4_ = uVar7;
    auVar3._8_4_ = uVar9;
    auVar3._12_4_ = uVar10;
    auVar16 = aesenc(auVar16,auVar3);
    auVar2 = *(undefined1 (*) [16])((longlong)param_1 + lVar6 + uVar5 + 0x10);
    uVar7 = auVar2._0_4_;
    uVar8 = auVar2._4_4_;
    uVar9 = auVar2._8_4_;
    uVar10 = auVar2._12_4_;
  } while (lVar6 != 0);
  auVar15 = aesenc(auVar15,auVar1);
  auVar16 = aesenc(auVar16,auVar1);
  aesenclast(auVar15,auVar2);
  aesenclast(auVar16,auVar2);
  return auVar2._0_8_;
}

// _aesni_decrypt2 @ 140df3b40

undefined8 _aesni_decrypt2(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int in_EAX;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint in_XMM2_Dc;
  uint in_XMM2_Dd;
  undefined1 auVar15 [16];
  uint in_XMM3_Dc;
  uint in_XMM3_Dd;
  undefined1 auVar16 [16];
  
  uVar5 = (ulonglong)(uint)(in_EAX << 4);
  uVar11 = param_1[4];
  uVar12 = param_1[5];
  uVar13 = param_1[6];
  uVar14 = param_1[7];
  auVar15._0_4_ = (uint)param_3 ^ *param_1;
  auVar15._4_4_ = (uint)((ulonglong)param_3 >> 0x20) ^ param_1[1];
  auVar15._8_4_ = in_XMM2_Dc ^ param_1[2];
  auVar15._12_4_ = in_XMM2_Dd ^ param_1[3];
  auVar16._0_4_ = (uint)param_4 ^ *param_1;
  auVar16._4_4_ = (uint)((ulonglong)param_4 >> 0x20) ^ param_1[1];
  auVar16._8_4_ = in_XMM3_Dc ^ param_1[2];
  auVar16._12_4_ = in_XMM3_Dd ^ param_1[3];
  uVar7 = param_1[8];
  uVar8 = param_1[9];
  uVar9 = param_1[10];
  uVar10 = param_1[0xb];
  lVar6 = 0x10 - uVar5;
  do {
    auVar1._4_4_ = uVar12;
    auVar1._0_4_ = uVar11;
    auVar1._8_4_ = uVar13;
    auVar1._12_4_ = uVar14;
    auVar15 = aesdec(auVar15,auVar1);
    auVar4._4_4_ = uVar12;
    auVar4._0_4_ = uVar11;
    auVar4._8_4_ = uVar13;
    auVar4._12_4_ = uVar14;
    auVar16 = aesdec(auVar16,auVar4);
    auVar1 = *(undefined1 (*) [16])((longlong)param_1 + lVar6 + uVar5 + 0x20);
    uVar11 = auVar1._0_4_;
    uVar12 = auVar1._4_4_;
    uVar13 = auVar1._8_4_;
    uVar14 = auVar1._12_4_;
    lVar6 = lVar6 + 0x20;
    auVar2._4_4_ = uVar8;
    auVar2._0_4_ = uVar7;
    auVar2._8_4_ = uVar9;
    auVar2._12_4_ = uVar10;
    auVar15 = aesdec(auVar15,auVar2);
    auVar3._4_4_ = uVar8;
    auVar3._0_4_ = uVar7;
    auVar3._8_4_ = uVar9;
    auVar3._12_4_ = uVar10;
    auVar16 = aesdec(auVar16,auVar3);
    auVar2 = *(undefined1 (*) [16])((longlong)param_1 + lVar6 + uVar5 + 0x10);
    uVar7 = auVar2._0_4_;
    uVar8 = auVar2._4_4_;
    uVar9 = auVar2._8_4_;
    uVar10 = auVar2._12_4_;
  } while (lVar6 != 0);
  auVar15 = aesdec(auVar15,auVar1);
  auVar16 = aesdec(auVar16,auVar1);
  aesdeclast(auVar15,auVar2);
  aesdeclast(auVar16,auVar2);
  return auVar2._0_8_;
}

// _aesni_encrypt3 @ 140df3ba0

undefined8 _aesni_encrypt3(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int in_EAX;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint in_XMM2_Dc;
  uint in_XMM2_Dd;
  undefined1 auVar17 [16];
  uint in_XMM3_Dc;
  uint in_XMM3_Dd;
  undefined1 auVar18 [16];
  uint in_XMM4_Da;
  uint in_XMM4_Db;
  uint in_XMM4_Dc;
  uint in_XMM4_Dd;
  undefined1 auVar19 [16];
  
  uVar9 = *param_1;
  uVar10 = param_1[1];
  uVar11 = param_1[2];
  uVar12 = param_1[3];
  uVar7 = (ulonglong)(uint)(in_EAX << 4);
  uVar13 = param_1[4];
  uVar14 = param_1[5];
  uVar15 = param_1[6];
  uVar16 = param_1[7];
  auVar17._0_4_ = (uint)param_3 ^ uVar9;
  auVar17._4_4_ = (uint)((ulonglong)param_3 >> 0x20) ^ uVar10;
  auVar17._8_4_ = in_XMM2_Dc ^ uVar11;
  auVar17._12_4_ = in_XMM2_Dd ^ uVar12;
  auVar18._0_4_ = (uint)param_4 ^ uVar9;
  auVar18._4_4_ = (uint)((ulonglong)param_4 >> 0x20) ^ uVar10;
  auVar18._8_4_ = in_XMM3_Dc ^ uVar11;
  auVar18._12_4_ = in_XMM3_Dd ^ uVar12;
  auVar19._0_4_ = in_XMM4_Da ^ uVar9;
  auVar19._4_4_ = in_XMM4_Db ^ uVar10;
  auVar19._8_4_ = in_XMM4_Dc ^ uVar11;
  auVar19._12_4_ = in_XMM4_Dd ^ uVar12;
  uVar9 = param_1[8];
  uVar10 = param_1[9];
  uVar11 = param_1[10];
  uVar12 = param_1[0xb];
  lVar8 = 0x10 - uVar7;
  do {
    auVar1._4_4_ = uVar14;
    auVar1._0_4_ = uVar13;
    auVar1._8_4_ = uVar15;
    auVar1._12_4_ = uVar16;
    auVar17 = aesenc(auVar17,auVar1);
    auVar5._4_4_ = uVar14;
    auVar5._0_4_ = uVar13;
    auVar5._8_4_ = uVar15;
    auVar5._12_4_ = uVar16;
    auVar18 = aesenc(auVar18,auVar5);
    auVar6._4_4_ = uVar14;
    auVar6._0_4_ = uVar13;
    auVar6._8_4_ = uVar15;
    auVar6._12_4_ = uVar16;
    auVar19 = aesenc(auVar19,auVar6);
    auVar1 = *(undefined1 (*) [16])((longlong)param_1 + lVar8 + uVar7 + 0x20);
    uVar13 = auVar1._0_4_;
    uVar14 = auVar1._4_4_;
    uVar15 = auVar1._8_4_;
    uVar16 = auVar1._12_4_;
    lVar8 = lVar8 + 0x20;
    auVar2._4_4_ = uVar10;
    auVar2._0_4_ = uVar9;
    auVar2._8_4_ = uVar11;
    auVar2._12_4_ = uVar12;
    auVar17 = aesenc(auVar17,auVar2);
    auVar3._4_4_ = uVar10;
    auVar3._0_4_ = uVar9;
    auVar3._8_4_ = uVar11;
    auVar3._12_4_ = uVar12;
    auVar18 = aesenc(auVar18,auVar3);
    auVar4._4_4_ = uVar10;
    auVar4._0_4_ = uVar9;
    auVar4._8_4_ = uVar11;
    auVar4._12_4_ = uVar12;
    auVar19 = aesenc(auVar19,auVar4);
    auVar2 = *(undefined1 (*) [16])((longlong)param_1 + lVar8 + uVar7 + 0x10);
    uVar9 = auVar2._0_4_;
    uVar10 = auVar2._4_4_;
    uVar11 = auVar2._8_4_;
    uVar12 = auVar2._12_4_;
  } while (lVar8 != 0);
  auVar17 = aesenc(auVar17,auVar1);
  auVar18 = aesenc(auVar18,auVar1);
  auVar19 = aesenc(auVar19,auVar1);
  aesenclast(auVar17,auVar2);
  aesenclast(auVar18,auVar2);
  aesenclast(auVar19,auVar2);
  return auVar2._0_8_;
}

// _aesni_decrypt3 @ 140df3c10

undefined8 _aesni_decrypt3(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  int in_EAX;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint in_XMM2_Dc;
  uint in_XMM2_Dd;
  undefined1 auVar17 [16];
  uint in_XMM3_Dc;
  uint in_XMM3_Dd;
  undefined1 auVar18 [16];
  uint in_XMM4_Da;
  uint in_XMM4_Db;
  uint in_XMM4_Dc;
  uint in_XMM4_Dd;
  undefined1 auVar19 [16];
  
  uVar9 = *param_1;
  uVar10 = param_1[1];
  uVar11 = param_1[2];
  uVar12 = param_1[3];
  uVar7 = (ulonglong)(uint)(in_EAX << 4);
  uVar13 = param_1[4];
  uVar14 = param_1[5];
  uVar15 = param_1[6];
  uVar16 = param_1[7];
  auVar17._0_4_ = (uint)param_3 ^ uVar9;
  auVar17._4_4_ = (uint)((ulonglong)param_3 >> 0x20) ^ uVar10;
  auVar17._8_4_ = in_XMM2_Dc ^ uVar11;
  auVar17._12_4_ = in_XMM2_Dd ^ uVar12;
  auVar18._0_4_ = (uint)param_4 ^ uVar9;
  auVar18._4_4_ = (uint)((ulonglong)param_4 >> 0x20) ^ uVar10;
  auVar18._8_4_ = in_XMM3_Dc ^ uVar11;
  auVar18._12_4_ = in_XMM3_Dd ^ uVar12;
  auVar19._0_4_ = in_XMM4_Da ^ uVar9;
  auVar19._4_4_ = in_XMM4_Db ^ uVar10;
  auVar19._8_4_ = in_XMM4_Dc ^ uVar11;
  auVar19._12_4_ = in_XMM4_Dd ^ uVar12;
  uVar9 = param_1[8];
  uVar10 = param_1[9];
  uVar11 = param_1[10];
  uVar12 = param_1[0xb];
  lVar8 = 0x10 - uVar7;
  do {
    auVar1._4_4_ = uVar14;
    auVar1._0_4_ = uVar13;
    auVar1._8_4_ = uVar15;
    auVar1._12_4_ = uVar16;
    auVar17 = aesdec(auVar17,auVar1);
    auVar5._4_4_ = uVar14;
    auVar5._0_4_ = uVar13;
    auVar5._8_4_ = uVar15;
    auVar5._12_4_ = uVar16;
    auVar18 = aesdec(auVar18,auVar5);
    auVar6._4_4_ = uVar14;
    auVar6._0_4_ = uVar13;
    auVar6._8_4_ = uVar15;
    auVar6._12_4_ = uVar16;
    auVar19 = aesdec(auVar19,auVar6);
    auVar1 = *(undefined1 (*) [16])((longlong)param_1 + lVar8 + uVar7 + 0x20);
    uVar13 = auVar1._0_4_;
    uVar14 = auVar1._4_4_;
    uVar15 = auVar1._8_4_;
    uVar16 = auVar1._12_4_;
    lVar8 = lVar8 + 0x20;
    auVar2._4_4_ = uVar10;
    auVar2._0_4_ = uVar9;
    auVar2._8_4_ = uVar11;
    auVar2._12_4_ = uVar12;
    auVar17 = aesdec(auVar17,auVar2);
    auVar3._4_4_ = uVar10;
    auVar3._0_4_ = uVar9;
    auVar3._8_4_ = uVar11;
    auVar3._12_4_ = uVar12;
    auVar18 = aesdec(auVar18,auVar3);
    auVar4._4_4_ = uVar10;
    auVar4._0_4_ = uVar9;
    auVar4._8_4_ = uVar11;
    auVar4._12_4_ = uVar12;
    auVar19 = aesdec(auVar19,auVar4);
    auVar2 = *(undefined1 (*) [16])((longlong)param_1 + lVar8 + uVar7 + 0x10);
    uVar9 = auVar2._0_4_;
    uVar10 = auVar2._4_4_;
    uVar11 = auVar2._8_4_;
    uVar12 = auVar2._12_4_;
  } while (lVar8 != 0);
  auVar17 = aesdec(auVar17,auVar1);
  auVar18 = aesdec(auVar18,auVar1);
  auVar19 = aesdec(auVar19,auVar1);
  aesdeclast(auVar17,auVar2);
  aesdeclast(auVar18,auVar2);
  aesdeclast(auVar19,auVar2);
  return auVar2._0_8_;
}

// _aesni_encrypt4 @ 140df3c80

undefined8 _aesni_encrypt4(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int in_EAX;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint in_XMM2_Dc;
  uint in_XMM2_Dd;
  undefined1 auVar19 [16];
  uint in_XMM3_Dc;
  uint in_XMM3_Dd;
  undefined1 auVar20 [16];
  uint in_XMM4_Da;
  uint in_XMM4_Db;
  uint in_XMM4_Dc;
  uint in_XMM4_Dd;
  undefined1 auVar21 [16];
  uint in_XMM5_Da;
  uint in_XMM5_Db;
  uint in_XMM5_Dc;
  uint in_XMM5_Dd;
  undefined1 auVar22 [16];
  
  uVar11 = *param_1;
  uVar12 = param_1[1];
  uVar13 = param_1[2];
  uVar14 = param_1[3];
  uVar9 = (ulonglong)(uint)(in_EAX << 4);
  uVar15 = param_1[4];
  uVar16 = param_1[5];
  uVar17 = param_1[6];
  uVar18 = param_1[7];
  auVar19._0_4_ = (uint)param_3 ^ uVar11;
  auVar19._4_4_ = (uint)((ulonglong)param_3 >> 0x20) ^ uVar12;
  auVar19._8_4_ = in_XMM2_Dc ^ uVar13;
  auVar19._12_4_ = in_XMM2_Dd ^ uVar14;
  auVar20._0_4_ = (uint)param_4 ^ uVar11;
  auVar20._4_4_ = (uint)((ulonglong)param_4 >> 0x20) ^ uVar12;
  auVar20._8_4_ = in_XMM3_Dc ^ uVar13;
  auVar20._12_4_ = in_XMM3_Dd ^ uVar14;
  auVar21._0_4_ = in_XMM4_Da ^ uVar11;
  auVar21._4_4_ = in_XMM4_Db ^ uVar12;
  auVar21._8_4_ = in_XMM4_Dc ^ uVar13;
  auVar21._12_4_ = in_XMM4_Dd ^ uVar14;
  auVar22._0_4_ = in_XMM5_Da ^ uVar11;
  auVar22._4_4_ = in_XMM5_Db ^ uVar12;
  auVar22._8_4_ = in_XMM5_Dc ^ uVar13;
  auVar22._12_4_ = in_XMM5_Dd ^ uVar14;
  uVar11 = param_1[8];
  uVar12 = param_1[9];
  uVar13 = param_1[10];
  uVar14 = param_1[0xb];
  lVar10 = 0x10 - uVar9;
  do {
    auVar1._4_4_ = uVar16;
    auVar1._0_4_ = uVar15;
    auVar1._8_4_ = uVar17;
    auVar1._12_4_ = uVar18;
    auVar19 = aesenc(auVar19,auVar1);
    auVar6._4_4_ = uVar16;
    auVar6._0_4_ = uVar15;
    auVar6._8_4_ = uVar17;
    auVar6._12_4_ = uVar18;
    auVar20 = aesenc(auVar20,auVar6);
    auVar7._4_4_ = uVar16;
    auVar7._0_4_ = uVar15;
    auVar7._8_4_ = uVar17;
    auVar7._12_4_ = uVar18;
    auVar21 = aesenc(auVar21,auVar7);
    auVar8._4_4_ = uVar16;
    auVar8._0_4_ = uVar15;
    auVar8._8_4_ = uVar17;
    auVar8._12_4_ = uVar18;
    auVar22 = aesenc(auVar22,auVar8);
    auVar1 = *(undefined1 (*) [16])((longlong)param_1 + lVar10 + uVar9 + 0x20);
    uVar15 = auVar1._0_4_;
    uVar16 = auVar1._4_4_;
    uVar17 = auVar1._8_4_;
    uVar18 = auVar1._12_4_;
    lVar10 = lVar10 + 0x20;
    auVar2._4_4_ = uVar12;
    auVar2._0_4_ = uVar11;
    auVar2._8_4_ = uVar13;
    auVar2._12_4_ = uVar14;
    auVar19 = aesenc(auVar19,auVar2);
    auVar3._4_4_ = uVar12;
    auVar3._0_4_ = uVar11;
    auVar3._8_4_ = uVar13;
    auVar3._12_4_ = uVar14;
    auVar20 = aesenc(auVar20,auVar3);
    auVar4._4_4_ = uVar12;
    auVar4._0_4_ = uVar11;
    auVar4._8_4_ = uVar13;
    auVar4._12_4_ = uVar14;
    auVar21 = aesenc(auVar21,auVar4);
    auVar5._4_4_ = uVar12;
    auVar5._0_4_ = uVar11;
    auVar5._8_4_ = uVar13;
    auVar5._12_4_ = uVar14;
    auVar22 = aesenc(auVar22,auVar5);
    auVar2 = *(undefined1 (*) [16])((longlong)param_1 + lVar10 + uVar9 + 0x10);
    uVar11 = auVar2._0_4_;
    uVar12 = auVar2._4_4_;
    uVar13 = auVar2._8_4_;
    uVar14 = auVar2._12_4_;
  } while (lVar10 != 0);
  auVar19 = aesenc(auVar19,auVar1);
  auVar20 = aesenc(auVar20,auVar1);
  auVar21 = aesenc(auVar21,auVar1);
  auVar22 = aesenc(auVar22,auVar1);
  aesenclast(auVar19,auVar2);
  aesenclast(auVar20,auVar2);
  aesenclast(auVar21,auVar2);
  aesenclast(auVar22,auVar2);
  return auVar2._0_8_;
}

// _aesni_decrypt4 @ 140df3d10

undefined8 _aesni_decrypt4(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int in_EAX;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint in_XMM2_Dc;
  uint in_XMM2_Dd;
  undefined1 auVar19 [16];
  uint in_XMM3_Dc;
  uint in_XMM3_Dd;
  undefined1 auVar20 [16];
  uint in_XMM4_Da;
  uint in_XMM4_Db;
  uint in_XMM4_Dc;
  uint in_XMM4_Dd;
  undefined1 auVar21 [16];
  uint in_XMM5_Da;
  uint in_XMM5_Db;
  uint in_XMM5_Dc;
  uint in_XMM5_Dd;
  undefined1 auVar22 [16];
  
  uVar11 = *param_1;
  uVar12 = param_1[1];
  uVar13 = param_1[2];
  uVar14 = param_1[3];
  uVar9 = (ulonglong)(uint)(in_EAX << 4);
  uVar15 = param_1[4];
  uVar16 = param_1[5];
  uVar17 = param_1[6];
  uVar18 = param_1[7];
  auVar19._0_4_ = (uint)param_3 ^ uVar11;
  auVar19._4_4_ = (uint)((ulonglong)param_3 >> 0x20) ^ uVar12;
  auVar19._8_4_ = in_XMM2_Dc ^ uVar13;
  auVar19._12_4_ = in_XMM2_Dd ^ uVar14;
  auVar20._0_4_ = (uint)param_4 ^ uVar11;
  auVar20._4_4_ = (uint)((ulonglong)param_4 >> 0x20) ^ uVar12;
  auVar20._8_4_ = in_XMM3_Dc ^ uVar13;
  auVar20._12_4_ = in_XMM3_Dd ^ uVar14;
  auVar21._0_4_ = in_XMM4_Da ^ uVar11;
  auVar21._4_4_ = in_XMM4_Db ^ uVar12;
  auVar21._8_4_ = in_XMM4_Dc ^ uVar13;
  auVar21._12_4_ = in_XMM4_Dd ^ uVar14;
  auVar22._0_4_ = in_XMM5_Da ^ uVar11;
  auVar22._4_4_ = in_XMM5_Db ^ uVar12;
  auVar22._8_4_ = in_XMM5_Dc ^ uVar13;
  auVar22._12_4_ = in_XMM5_Dd ^ uVar14;
  uVar11 = param_1[8];
  uVar12 = param_1[9];
  uVar13 = param_1[10];
  uVar14 = param_1[0xb];
  lVar10 = 0x10 - uVar9;
  do {
    auVar1._4_4_ = uVar16;
    auVar1._0_4_ = uVar15;
    auVar1._8_4_ = uVar17;
    auVar1._12_4_ = uVar18;
    auVar19 = aesdec(auVar19,auVar1);
    auVar6._4_4_ = uVar16;
    auVar6._0_4_ = uVar15;
    auVar6._8_4_ = uVar17;
    auVar6._12_4_ = uVar18;
    auVar20 = aesdec(auVar20,auVar6);
    auVar7._4_4_ = uVar16;
    auVar7._0_4_ = uVar15;
    auVar7._8_4_ = uVar17;
    auVar7._12_4_ = uVar18;
    auVar21 = aesdec(auVar21,auVar7);
    auVar8._4_4_ = uVar16;
    auVar8._0_4_ = uVar15;
    auVar8._8_4_ = uVar17;
    auVar8._12_4_ = uVar18;
    auVar22 = aesdec(auVar22,auVar8);
    auVar1 = *(undefined1 (*) [16])((longlong)param_1 + lVar10 + uVar9 + 0x20);
    uVar15 = auVar1._0_4_;
    uVar16 = auVar1._4_4_;
    uVar17 = auVar1._8_4_;
    uVar18 = auVar1._12_4_;
    lVar10 = lVar10 + 0x20;
    auVar2._4_4_ = uVar12;
    auVar2._0_4_ = uVar11;
    auVar2._8_4_ = uVar13;
    auVar2._12_4_ = uVar14;
    auVar19 = aesdec(auVar19,auVar2);
    auVar3._4_4_ = uVar12;
    auVar3._0_4_ = uVar11;
    auVar3._8_4_ = uVar13;
    auVar3._12_4_ = uVar14;
    auVar20 = aesdec(auVar20,auVar3);
    auVar4._4_4_ = uVar12;
    auVar4._0_4_ = uVar11;
    auVar4._8_4_ = uVar13;
    auVar4._12_4_ = uVar14;
    auVar21 = aesdec(auVar21,auVar4);
    auVar5._4_4_ = uVar12;
    auVar5._0_4_ = uVar11;
    auVar5._8_4_ = uVar13;
    auVar5._12_4_ = uVar14;
    auVar22 = aesdec(auVar22,auVar5);
    auVar2 = *(undefined1 (*) [16])((longlong)param_1 + lVar10 + uVar9 + 0x10);
    uVar11 = auVar2._0_4_;
    uVar12 = auVar2._4_4_;
    uVar13 = auVar2._8_4_;
    uVar14 = auVar2._12_4_;
  } while (lVar10 != 0);
  auVar19 = aesdec(auVar19,auVar1);
  auVar20 = aesdec(auVar20,auVar1);
  auVar21 = aesdec(auVar21,auVar1);
  auVar22 = aesdec(auVar22,auVar1);
  aesdeclast(auVar19,auVar2);
  aesdeclast(auVar20,auVar2);
  aesdeclast(auVar21,auVar2);
  aesdeclast(auVar22,auVar2);
  return auVar2._0_8_;
}

// _aesni_encrypt6 @ 140df3da0

undefined8 _aesni_encrypt6(undefined1 (*param_1) [16],undefined8 param_2,undefined8 param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  int in_EAX;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint in_XMM2_Dc;
  uint in_XMM2_Dd;
  undefined1 auVar13 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  auVar22 = *param_1;
  uVar3 = (ulonglong)(uint)(in_EAX << 4);
  auVar16 = param_1[1];
  uVar9 = auVar16._0_4_;
  uVar10 = auVar16._4_4_;
  uVar11 = auVar16._8_4_;
  uVar12 = auVar16._12_4_;
  auVar13._0_4_ = (uint)param_3 ^ auVar22._0_4_;
  auVar13._4_4_ = (uint)((ulonglong)param_3 >> 0x20) ^ auVar22._4_4_;
  auVar13._8_4_ = in_XMM2_Dc ^ auVar22._8_4_;
  auVar13._12_4_ = in_XMM2_Dd ^ auVar22._12_4_;
  auVar13 = aesenc(auVar13,auVar16);
  auVar14 = aesenc(in_XMM3 ^ auVar22,auVar16);
  auVar18 = in_XMM5 ^ auVar22;
  auVar20 = unaff_XMM6 ^ auVar22;
  auVar16 = aesenc(in_XMM4 ^ auVar22,auVar16);
  auVar22 = unaff_XMM7 ^ auVar22;
  pauVar1 = param_1 + 2;
  uVar5 = *(undefined4 *)*pauVar1;
  uVar6 = *(undefined4 *)(*pauVar1 + 4);
  uVar7 = *(undefined4 *)(*pauVar1 + 8);
  uVar8 = *(undefined4 *)(*pauVar1 + 0xc);
  lVar4 = 0x10 - uVar3;
  while( true ) {
    auVar2._4_4_ = uVar10;
    auVar2._0_4_ = uVar9;
    auVar2._8_4_ = uVar11;
    auVar2._12_4_ = uVar12;
    auVar19 = aesenc(auVar18,auVar2);
    auVar15._4_4_ = uVar10;
    auVar15._0_4_ = uVar9;
    auVar15._8_4_ = uVar11;
    auVar15._12_4_ = uVar12;
    auVar21 = aesenc(auVar20,auVar15);
    auVar17._4_4_ = uVar10;
    auVar17._0_4_ = uVar9;
    auVar17._8_4_ = uVar11;
    auVar17._12_4_ = uVar12;
    auVar23 = aesenc(auVar22,auVar17);
    auVar2 = *(undefined1 (*) [16])(param_1[2] + lVar4 + uVar3);
    uVar9 = auVar2._0_4_;
    uVar10 = auVar2._4_4_;
    uVar11 = auVar2._8_4_;
    uVar12 = auVar2._12_4_;
    auVar22._4_4_ = uVar6;
    auVar22._0_4_ = uVar5;
    auVar22._8_4_ = uVar7;
    auVar22._12_4_ = uVar8;
    auVar13 = aesenc(auVar13,auVar22);
    auVar18._4_4_ = uVar6;
    auVar18._0_4_ = uVar5;
    auVar18._8_4_ = uVar7;
    auVar18._12_4_ = uVar8;
    auVar15 = aesenc(auVar14,auVar18);
    auVar14._4_4_ = uVar6;
    auVar14._0_4_ = uVar5;
    auVar14._8_4_ = uVar7;
    auVar14._12_4_ = uVar8;
    auVar17 = aesenc(auVar16,auVar14);
    auVar16._4_4_ = uVar6;
    auVar16._0_4_ = uVar5;
    auVar16._8_4_ = uVar7;
    auVar16._12_4_ = uVar8;
    auVar18 = aesenc(auVar19,auVar16);
    auVar20._4_4_ = uVar6;
    auVar20._0_4_ = uVar5;
    auVar20._8_4_ = uVar7;
    auVar20._12_4_ = uVar8;
    auVar20 = aesenc(auVar21,auVar20);
    auVar19._4_4_ = uVar6;
    auVar19._0_4_ = uVar5;
    auVar19._8_4_ = uVar7;
    auVar19._12_4_ = uVar8;
    auVar22 = aesenc(auVar23,auVar19);
    auVar16 = *(undefined1 (*) [16])(param_1[3] + uVar3 + lVar4);
    uVar5 = auVar16._0_4_;
    uVar6 = auVar16._4_4_;
    uVar7 = auVar16._8_4_;
    uVar8 = auVar16._12_4_;
    if (lVar4 + 0x20 == 0) break;
    auVar13 = aesenc(auVar13,auVar2);
    auVar14 = aesenc(auVar15,auVar2);
    auVar16 = aesenc(auVar17,auVar2);
    lVar4 = lVar4 + 0x20;
  }
  auVar13 = aesenc(auVar13,auVar2);
  auVar14 = aesenc(auVar15,auVar2);
  auVar19 = aesenc(auVar17,auVar2);
  auVar18 = aesenc(auVar18,auVar2);
  auVar20 = aesenc(auVar20,auVar2);
  auVar22 = aesenc(auVar22,auVar2);
  aesenclast(auVar13,auVar16);
  aesenclast(auVar14,auVar16);
  aesenclast(auVar19,auVar16);
  aesenclast(auVar18,auVar16);
  aesenclast(auVar20,auVar16);
  aesenclast(auVar22,auVar16);
  return auVar16._0_8_;
}

// L$enc_loop6 @ 140df3df0

undefined8 L_enc_loop6(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong in_RAX;
  longlong in_RCX;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  undefined1 in_XMM2 [16];
  undefined1 auVar10 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar11 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar12 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar13 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar14 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  uVar9 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar8 = (undefined4)param_2;
  uVar7 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar6 = (undefined4)param_1;
  do {
    auVar16._4_4_ = uVar9;
    auVar16._0_4_ = uVar8;
    auVar16._8_4_ = in_XMM1_Dc;
    auVar16._12_4_ = in_XMM1_Dd;
    auVar10 = aesenc(in_XMM2,auVar16);
    auVar15._4_4_ = uVar9;
    auVar15._0_4_ = uVar8;
    auVar15._8_4_ = in_XMM1_Dc;
    auVar15._12_4_ = in_XMM1_Dd;
    auVar11 = aesenc(in_XMM3,auVar15);
    auVar2._4_4_ = uVar9;
    auVar2._0_4_ = uVar8;
    auVar2._8_4_ = in_XMM1_Dc;
    auVar2._12_4_ = in_XMM1_Dd;
    auVar12 = aesenc(in_XMM4,auVar2);
    auVar3._4_4_ = uVar9;
    auVar3._0_4_ = uVar8;
    auVar3._8_4_ = in_XMM1_Dc;
    auVar3._12_4_ = in_XMM1_Dd;
    auVar13 = aesenc(in_XMM5,auVar3);
    auVar4._4_4_ = uVar9;
    auVar4._0_4_ = uVar8;
    auVar4._8_4_ = in_XMM1_Dc;
    auVar4._12_4_ = in_XMM1_Dd;
    auVar14 = aesenc(unaff_XMM6,auVar4);
    auVar5._4_4_ = uVar9;
    auVar5._0_4_ = uVar8;
    auVar5._8_4_ = in_XMM1_Dc;
    auVar5._12_4_ = in_XMM1_Dd;
    auVar15 = aesenc(unaff_XMM7,auVar5);
    auVar16 = *(undefined1 (*) [16])(in_RCX + in_RAX);
    uVar8 = auVar16._0_4_;
    uVar9 = auVar16._4_4_;
    in_XMM1_Dc = auVar16._8_4_;
    in_XMM1_Dd = auVar16._12_4_;
    in_RAX = in_RAX + 0x20;
    auVar1._4_4_ = uVar7;
    auVar1._0_4_ = uVar6;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    in_XMM2 = aesenc(auVar10,auVar1);
    auVar10._4_4_ = uVar7;
    auVar10._0_4_ = uVar6;
    auVar10._8_4_ = in_XMM0_Dc;
    auVar10._12_4_ = in_XMM0_Dd;
    in_XMM3 = aesenc(auVar11,auVar10);
    auVar11._4_4_ = uVar7;
    auVar11._0_4_ = uVar6;
    auVar11._8_4_ = in_XMM0_Dc;
    auVar11._12_4_ = in_XMM0_Dd;
    in_XMM4 = aesenc(auVar12,auVar11);
    auVar12._4_4_ = uVar7;
    auVar12._0_4_ = uVar6;
    auVar12._8_4_ = in_XMM0_Dc;
    auVar12._12_4_ = in_XMM0_Dd;
    in_XMM5 = aesenc(auVar13,auVar12);
    auVar13._4_4_ = uVar7;
    auVar13._0_4_ = uVar6;
    auVar13._8_4_ = in_XMM0_Dc;
    auVar13._12_4_ = in_XMM0_Dd;
    unaff_XMM6 = aesenc(auVar14,auVar13);
    auVar14._4_4_ = uVar7;
    auVar14._0_4_ = uVar6;
    auVar14._8_4_ = in_XMM0_Dc;
    auVar14._12_4_ = in_XMM0_Dd;
    unaff_XMM7 = aesenc(auVar15,auVar14);
    auVar1 = *(undefined1 (*) [16])(in_RCX + -0x10 + in_RAX);
    uVar6 = auVar1._0_4_;
    uVar7 = auVar1._4_4_;
    in_XMM0_Dc = auVar1._8_4_;
    in_XMM0_Dd = auVar1._12_4_;
  } while (in_RAX != 0);
  auVar10 = aesenc(in_XMM2,auVar16);
  auVar11 = aesenc(in_XMM3,auVar16);
  auVar12 = aesenc(in_XMM4,auVar16);
  auVar13 = aesenc(in_XMM5,auVar16);
  auVar14 = aesenc(unaff_XMM6,auVar16);
  auVar16 = aesenc(unaff_XMM7,auVar16);
  aesenclast(auVar10,auVar1);
  aesenclast(auVar11,auVar1);
  aesenclast(auVar12,auVar1);
  aesenclast(auVar13,auVar1);
  aesenclast(auVar14,auVar1);
  aesenclast(auVar16,auVar1);
  return auVar1._0_8_;
}

// _aesni_decrypt6 @ 140df3e80

undefined8 _aesni_decrypt6(undefined1 (*param_1) [16],undefined8 param_2,undefined8 param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  int in_EAX;
  ulonglong uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint in_XMM2_Dc;
  uint in_XMM2_Dd;
  undefined1 auVar13 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  
  auVar22 = *param_1;
  uVar3 = (ulonglong)(uint)(in_EAX << 4);
  auVar16 = param_1[1];
  uVar9 = auVar16._0_4_;
  uVar10 = auVar16._4_4_;
  uVar11 = auVar16._8_4_;
  uVar12 = auVar16._12_4_;
  auVar13._0_4_ = (uint)param_3 ^ auVar22._0_4_;
  auVar13._4_4_ = (uint)((ulonglong)param_3 >> 0x20) ^ auVar22._4_4_;
  auVar13._8_4_ = in_XMM2_Dc ^ auVar22._8_4_;
  auVar13._12_4_ = in_XMM2_Dd ^ auVar22._12_4_;
  auVar13 = aesdec(auVar13,auVar16);
  auVar14 = aesdec(in_XMM3 ^ auVar22,auVar16);
  auVar18 = in_XMM5 ^ auVar22;
  auVar20 = unaff_XMM6 ^ auVar22;
  auVar16 = aesdec(in_XMM4 ^ auVar22,auVar16);
  auVar22 = unaff_XMM7 ^ auVar22;
  pauVar1 = param_1 + 2;
  uVar5 = *(undefined4 *)*pauVar1;
  uVar6 = *(undefined4 *)(*pauVar1 + 4);
  uVar7 = *(undefined4 *)(*pauVar1 + 8);
  uVar8 = *(undefined4 *)(*pauVar1 + 0xc);
  lVar4 = 0x10 - uVar3;
  while( true ) {
    auVar2._4_4_ = uVar10;
    auVar2._0_4_ = uVar9;
    auVar2._8_4_ = uVar11;
    auVar2._12_4_ = uVar12;
    auVar19 = aesdec(auVar18,auVar2);
    auVar15._4_4_ = uVar10;
    auVar15._0_4_ = uVar9;
    auVar15._8_4_ = uVar11;
    auVar15._12_4_ = uVar12;
    auVar21 = aesdec(auVar20,auVar15);
    auVar17._4_4_ = uVar10;
    auVar17._0_4_ = uVar9;
    auVar17._8_4_ = uVar11;
    auVar17._12_4_ = uVar12;
    auVar23 = aesdec(auVar22,auVar17);
    auVar2 = *(undefined1 (*) [16])(param_1[2] + lVar4 + uVar3);
    uVar9 = auVar2._0_4_;
    uVar10 = auVar2._4_4_;
    uVar11 = auVar2._8_4_;
    uVar12 = auVar2._12_4_;
    auVar22._4_4_ = uVar6;
    auVar22._0_4_ = uVar5;
    auVar22._8_4_ = uVar7;
    auVar22._12_4_ = uVar8;
    auVar13 = aesdec(auVar13,auVar22);
    auVar18._4_4_ = uVar6;
    auVar18._0_4_ = uVar5;
    auVar18._8_4_ = uVar7;
    auVar18._12_4_ = uVar8;
    auVar15 = aesdec(auVar14,auVar18);
    auVar14._4_4_ = uVar6;
    auVar14._0_4_ = uVar5;
    auVar14._8_4_ = uVar7;
    auVar14._12_4_ = uVar8;
    auVar17 = aesdec(auVar16,auVar14);
    auVar16._4_4_ = uVar6;
    auVar16._0_4_ = uVar5;
    auVar16._8_4_ = uVar7;
    auVar16._12_4_ = uVar8;
    auVar18 = aesdec(auVar19,auVar16);
    auVar20._4_4_ = uVar6;
    auVar20._0_4_ = uVar5;
    auVar20._8_4_ = uVar7;
    auVar20._12_4_ = uVar8;
    auVar20 = aesdec(auVar21,auVar20);
    auVar19._4_4_ = uVar6;
    auVar19._0_4_ = uVar5;
    auVar19._8_4_ = uVar7;
    auVar19._12_4_ = uVar8;
    auVar22 = aesdec(auVar23,auVar19);
    auVar16 = *(undefined1 (*) [16])(param_1[3] + uVar3 + lVar4);
    uVar5 = auVar16._0_4_;
    uVar6 = auVar16._4_4_;
    uVar7 = auVar16._8_4_;
    uVar8 = auVar16._12_4_;
    if (lVar4 + 0x20 == 0) break;
    auVar13 = aesdec(auVar13,auVar2);
    auVar14 = aesdec(auVar15,auVar2);
    auVar16 = aesdec(auVar17,auVar2);
    lVar4 = lVar4 + 0x20;
  }
  auVar13 = aesdec(auVar13,auVar2);
  auVar14 = aesdec(auVar15,auVar2);
  auVar19 = aesdec(auVar17,auVar2);
  auVar18 = aesdec(auVar18,auVar2);
  auVar20 = aesdec(auVar20,auVar2);
  auVar22 = aesdec(auVar22,auVar2);
  aesdeclast(auVar13,auVar16);
  aesdeclast(auVar14,auVar16);
  aesdeclast(auVar19,auVar16);
  aesdeclast(auVar18,auVar16);
  aesdeclast(auVar20,auVar16);
  aesdeclast(auVar22,auVar16);
  return auVar16._0_8_;
}

// _aesni_encrypt8 @ 140df3f60

undefined8
_aesni_encrypt8(undefined1 (*param_1) [16],undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 (*pauVar1) [16];
  int in_EAX;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint in_XMM2_Dc;
  uint in_XMM2_Dd;
  undefined1 auVar12 [16];
  uint in_XMM3_Dc;
  uint in_XMM3_Dd;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  auVar26 = *param_1;
  uVar2 = (ulonglong)(uint)(in_EAX << 4);
  auVar14 = param_1[1];
  uVar8 = auVar14._0_4_;
  uVar9 = auVar14._4_4_;
  uVar10 = auVar14._8_4_;
  uVar11 = auVar14._12_4_;
  auVar12._0_4_ = (uint)param_3 ^ auVar26._0_4_;
  auVar12._4_4_ = (uint)((ulonglong)param_3 >> 0x20) ^ auVar26._4_4_;
  auVar12._8_4_ = in_XMM2_Dc ^ auVar26._8_4_;
  auVar12._12_4_ = in_XMM2_Dd ^ auVar26._12_4_;
  auVar13._0_4_ = (uint)param_4 ^ auVar26._0_4_;
  auVar13._4_4_ = (uint)((ulonglong)param_4 >> 0x20) ^ auVar26._4_4_;
  auVar13._8_4_ = in_XMM3_Dc ^ auVar26._8_4_;
  auVar13._12_4_ = in_XMM3_Dd ^ auVar26._12_4_;
  auVar16 = in_XMM4 ^ auVar26;
  auVar18 = in_XMM5 ^ auVar26;
  auVar20 = unaff_XMM6 ^ auVar26;
  auVar12 = aesenc(auVar12,auVar14);
  auVar22 = unaff_XMM7 ^ auVar26;
  auVar24 = unaff_XMM8 ^ auVar26;
  auVar14 = aesenc(auVar13,auVar14);
  auVar26 = unaff_XMM9 ^ auVar26;
  pauVar1 = param_1 + 2;
  uVar4 = *(undefined4 *)*pauVar1;
  uVar5 = *(undefined4 *)(*pauVar1 + 4);
  uVar6 = *(undefined4 *)(*pauVar1 + 8);
  uVar7 = *(undefined4 *)(*pauVar1 + 0xc);
  lVar3 = 0x10 - uVar2;
  while( true ) {
    auVar15._4_4_ = uVar9;
    auVar15._0_4_ = uVar8;
    auVar15._8_4_ = uVar10;
    auVar15._12_4_ = uVar11;
    auVar17 = aesenc(auVar16,auVar15);
    auVar19._4_4_ = uVar9;
    auVar19._0_4_ = uVar8;
    auVar19._8_4_ = uVar10;
    auVar19._12_4_ = uVar11;
    auVar19 = aesenc(auVar18,auVar19);
    auVar21._4_4_ = uVar9;
    auVar21._0_4_ = uVar8;
    auVar21._8_4_ = uVar10;
    auVar21._12_4_ = uVar11;
    auVar21 = aesenc(auVar20,auVar21);
    auVar23._4_4_ = uVar9;
    auVar23._0_4_ = uVar8;
    auVar23._8_4_ = uVar10;
    auVar23._12_4_ = uVar11;
    auVar23 = aesenc(auVar22,auVar23);
    auVar25._4_4_ = uVar9;
    auVar25._0_4_ = uVar8;
    auVar25._8_4_ = uVar10;
    auVar25._12_4_ = uVar11;
    auVar25 = aesenc(auVar24,auVar25);
    auVar27._4_4_ = uVar9;
    auVar27._0_4_ = uVar8;
    auVar27._8_4_ = uVar10;
    auVar27._12_4_ = uVar11;
    auVar27 = aesenc(auVar26,auVar27);
    auVar13 = *(undefined1 (*) [16])(param_1[2] + lVar3 + uVar2);
    uVar8 = auVar13._0_4_;
    uVar9 = auVar13._4_4_;
    uVar10 = auVar13._8_4_;
    uVar11 = auVar13._12_4_;
    auVar26._4_4_ = uVar5;
    auVar26._0_4_ = uVar4;
    auVar26._8_4_ = uVar6;
    auVar26._12_4_ = uVar7;
    auVar12 = aesenc(auVar12,auVar26);
    auVar16._4_4_ = uVar5;
    auVar16._0_4_ = uVar4;
    auVar16._8_4_ = uVar6;
    auVar16._12_4_ = uVar7;
    auVar15 = aesenc(auVar14,auVar16);
    auVar14._4_4_ = uVar5;
    auVar14._0_4_ = uVar4;
    auVar14._8_4_ = uVar6;
    auVar14._12_4_ = uVar7;
    auVar16 = aesenc(auVar17,auVar14);
    auVar18._4_4_ = uVar5;
    auVar18._0_4_ = uVar4;
    auVar18._8_4_ = uVar6;
    auVar18._12_4_ = uVar7;
    auVar18 = aesenc(auVar19,auVar18);
    auVar20._4_4_ = uVar5;
    auVar20._0_4_ = uVar4;
    auVar20._8_4_ = uVar6;
    auVar20._12_4_ = uVar7;
    auVar20 = aesenc(auVar21,auVar20);
    auVar22._4_4_ = uVar5;
    auVar22._0_4_ = uVar4;
    auVar22._8_4_ = uVar6;
    auVar22._12_4_ = uVar7;
    auVar22 = aesenc(auVar23,auVar22);
    auVar24._4_4_ = uVar5;
    auVar24._0_4_ = uVar4;
    auVar24._8_4_ = uVar6;
    auVar24._12_4_ = uVar7;
    auVar24 = aesenc(auVar25,auVar24);
    auVar17._4_4_ = uVar5;
    auVar17._0_4_ = uVar4;
    auVar17._8_4_ = uVar6;
    auVar17._12_4_ = uVar7;
    auVar26 = aesenc(auVar27,auVar17);
    auVar14 = *(undefined1 (*) [16])(param_1[3] + uVar2 + lVar3);
    uVar4 = auVar14._0_4_;
    uVar5 = auVar14._4_4_;
    uVar6 = auVar14._8_4_;
    uVar7 = auVar14._12_4_;
    if (lVar3 + 0x20 == 0) break;
    auVar12 = aesenc(auVar12,auVar13);
    auVar14 = aesenc(auVar15,auVar13);
    lVar3 = lVar3 + 0x20;
  }
  auVar12 = aesenc(auVar12,auVar13);
  auVar17 = aesenc(auVar15,auVar13);
  auVar16 = aesenc(auVar16,auVar13);
  auVar18 = aesenc(auVar18,auVar13);
  auVar20 = aesenc(auVar20,auVar13);
  auVar22 = aesenc(auVar22,auVar13);
  auVar24 = aesenc(auVar24,auVar13);
  auVar26 = aesenc(auVar26,auVar13);
  aesenclast(auVar12,auVar14);
  aesenclast(auVar17,auVar14);
  aesenclast(auVar16,auVar14);
  aesenclast(auVar18,auVar14);
  aesenclast(auVar20,auVar14);
  aesenclast(auVar22,auVar14);
  aesenclast(auVar24,auVar14);
  aesenclast(auVar26,auVar14);
  return auVar14._0_8_;
}

// L$enc_loop8_enter @ 140df3fda

undefined8 L_enc_loop8_enter(undefined8 param_1)

{
  undefined1 auVar1 [16];
  longlong in_RAX;
  longlong in_RCX;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined1 in_XMM2 [16];
  undefined1 auVar4 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar5 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar6 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar7 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar8 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar9 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar10 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  uVar3 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar2 = (undefined4)param_1;
  while( true ) {
    auVar12 = *(undefined1 (*) [16])(in_RCX + in_RAX);
    in_RAX = in_RAX + 0x20;
    auVar1._4_4_ = uVar3;
    auVar1._0_4_ = uVar2;
    auVar1._8_4_ = in_XMM0_Dc;
    auVar1._12_4_ = in_XMM0_Dd;
    auVar4 = aesenc(in_XMM2,auVar1);
    auVar5._4_4_ = uVar3;
    auVar5._0_4_ = uVar2;
    auVar5._8_4_ = in_XMM0_Dc;
    auVar5._12_4_ = in_XMM0_Dd;
    auVar5 = aesenc(in_XMM3,auVar5);
    auVar6._4_4_ = uVar3;
    auVar6._0_4_ = uVar2;
    auVar6._8_4_ = in_XMM0_Dc;
    auVar6._12_4_ = in_XMM0_Dd;
    auVar6 = aesenc(in_XMM4,auVar6);
    auVar7._4_4_ = uVar3;
    auVar7._0_4_ = uVar2;
    auVar7._8_4_ = in_XMM0_Dc;
    auVar7._12_4_ = in_XMM0_Dd;
    auVar7 = aesenc(in_XMM5,auVar7);
    auVar8._4_4_ = uVar3;
    auVar8._0_4_ = uVar2;
    auVar8._8_4_ = in_XMM0_Dc;
    auVar8._12_4_ = in_XMM0_Dd;
    auVar8 = aesenc(unaff_XMM6,auVar8);
    auVar9._4_4_ = uVar3;
    auVar9._0_4_ = uVar2;
    auVar9._8_4_ = in_XMM0_Dc;
    auVar9._12_4_ = in_XMM0_Dd;
    auVar9 = aesenc(unaff_XMM7,auVar9);
    auVar10._4_4_ = uVar3;
    auVar10._0_4_ = uVar2;
    auVar10._8_4_ = in_XMM0_Dc;
    auVar10._12_4_ = in_XMM0_Dd;
    auVar10 = aesenc(unaff_XMM8,auVar10);
    auVar11._4_4_ = uVar3;
    auVar11._0_4_ = uVar2;
    auVar11._8_4_ = in_XMM0_Dc;
    auVar11._12_4_ = in_XMM0_Dd;
    auVar11 = aesenc(unaff_XMM9,auVar11);
    auVar1 = *(undefined1 (*) [16])(in_RCX + -0x10 + in_RAX);
    uVar2 = auVar1._0_4_;
    uVar3 = auVar1._4_4_;
    in_XMM0_Dc = auVar1._8_4_;
    in_XMM0_Dd = auVar1._12_4_;
    if (in_RAX == 0) break;
    in_XMM2 = aesenc(auVar4,auVar12);
    in_XMM3 = aesenc(auVar5,auVar12);
    in_XMM4 = aesenc(auVar6,auVar12);
    in_XMM5 = aesenc(auVar7,auVar12);
    unaff_XMM6 = aesenc(auVar8,auVar12);
    unaff_XMM7 = aesenc(auVar9,auVar12);
    unaff_XMM8 = aesenc(auVar10,auVar12);
    unaff_XMM9 = aesenc(auVar11,auVar12);
  }
  auVar4 = aesenc(auVar4,auVar12);
  auVar5 = aesenc(auVar5,auVar12);
  auVar6 = aesenc(auVar6,auVar12);
  auVar7 = aesenc(auVar7,auVar12);
  auVar8 = aesenc(auVar8,auVar12);
  auVar9 = aesenc(auVar9,auVar12);
  auVar10 = aesenc(auVar10,auVar12);
  auVar12 = aesenc(auVar11,auVar12);
  aesenclast(auVar4,auVar1);
  aesenclast(auVar5,auVar1);
  aesenclast(auVar6,auVar1);
  aesenclast(auVar7,auVar1);
  aesenclast(auVar8,auVar1);
  aesenclast(auVar9,auVar1);
  aesenclast(auVar10,auVar1);
  aesenclast(auVar12,auVar1);
  return auVar1._0_8_;
}

// _aesni_decrypt8 @ 140df4070

undefined8
_aesni_decrypt8(undefined1 (*param_1) [16],undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 (*pauVar1) [16];
  int in_EAX;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint in_XMM2_Dc;
  uint in_XMM2_Dd;
  undefined1 auVar12 [16];
  uint in_XMM3_Dc;
  uint in_XMM3_Dd;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  auVar26 = *param_1;
  uVar2 = (ulonglong)(uint)(in_EAX << 4);
  auVar14 = param_1[1];
  uVar8 = auVar14._0_4_;
  uVar9 = auVar14._4_4_;
  uVar10 = auVar14._8_4_;
  uVar11 = auVar14._12_4_;
  auVar12._0_4_ = (uint)param_3 ^ auVar26._0_4_;
  auVar12._4_4_ = (uint)((ulonglong)param_3 >> 0x20) ^ auVar26._4_4_;
  auVar12._8_4_ = in_XMM2_Dc ^ auVar26._8_4_;
  auVar12._12_4_ = in_XMM2_Dd ^ auVar26._12_4_;
  auVar13._0_4_ = (uint)param_4 ^ auVar26._0_4_;
  auVar13._4_4_ = (uint)((ulonglong)param_4 >> 0x20) ^ auVar26._4_4_;
  auVar13._8_4_ = in_XMM3_Dc ^ auVar26._8_4_;
  auVar13._12_4_ = in_XMM3_Dd ^ auVar26._12_4_;
  auVar16 = in_XMM4 ^ auVar26;
  auVar18 = in_XMM5 ^ auVar26;
  auVar20 = unaff_XMM6 ^ auVar26;
  auVar12 = aesdec(auVar12,auVar14);
  auVar22 = unaff_XMM7 ^ auVar26;
  auVar24 = unaff_XMM8 ^ auVar26;
  auVar14 = aesdec(auVar13,auVar14);
  auVar26 = unaff_XMM9 ^ auVar26;
  pauVar1 = param_1 + 2;
  uVar4 = *(undefined4 *)*pauVar1;
  uVar5 = *(undefined4 *)(*pauVar1 + 4);
  uVar6 = *(undefined4 *)(*pauVar1 + 8);
  uVar7 = *(undefined4 *)(*pauVar1 + 0xc);
  lVar3 = 0x10 - uVar2;
  while( true ) {
    auVar15._4_4_ = uVar9;
    auVar15._0_4_ = uVar8;
    auVar15._8_4_ = uVar10;
    auVar15._12_4_ = uVar11;
    auVar17 = aesdec(auVar16,auVar15);
    auVar19._4_4_ = uVar9;
    auVar19._0_4_ = uVar8;
    auVar19._8_4_ = uVar10;
    auVar19._12_4_ = uVar11;
    auVar19 = aesdec(auVar18,auVar19);
    auVar21._4_4_ = uVar9;
    auVar21._0_4_ = uVar8;
    auVar21._8_4_ = uVar10;
    auVar21._12_4_ = uVar11;
    auVar21 = aesdec(auVar20,auVar21);
    auVar23._4_4_ = uVar9;
    auVar23._0_4_ = uVar8;
    auVar23._8_4_ = uVar10;
    auVar23._12_4_ = uVar11;
    auVar23 = aesdec(auVar22,auVar23);
    auVar25._4_4_ = uVar9;
    auVar25._0_4_ = uVar8;
    auVar25._8_4_ = uVar10;
    auVar25._12_4_ = uVar11;
    auVar25 = aesdec(auVar24,auVar25);
    auVar27._4_4_ = uVar9;
    auVar27._0_4_ = uVar8;
    auVar27._8_4_ = uVar10;
    auVar27._12_4_ = uVar11;
    auVar27 = aesdec(auVar26,auVar27);
    auVar13 = *(undefined1 (*) [16])(param_1[2] + lVar3 + uVar2);
    uVar8 = auVar13._0_4_;
    uVar9 = auVar13._4_4_;
    uVar10 = auVar13._8_4_;
    uVar11 = auVar13._12_4_;
    auVar26._4_4_ = uVar5;
    auVar26._0_4_ = uVar4;
    auVar26._8_4_ = uVar6;
    auVar26._12_4_ = uVar7;
    auVar12 = aesdec(auVar12,auVar26);
    auVar16._4_4_ = uVar5;
    auVar16._0_4_ = uVar4;
    auVar16._8_4_ = uVar6;
    auVar16._12_4_ = uVar7;
    auVar15 = aesdec(auVar14,auVar16);
    auVar14._4_4_ = uVar5;
    auVar14._0_4_ = uVar4;
    auVar14._8_4_ = uVar6;
    auVar14._12_4_ = uVar7;
    auVar16 = aesdec(auVar17,auVar14);
    auVar18._4_4_ = uVar5;
    auVar18._0_4_ = uVar4;
    auVar18._8_4_ = uVar6;
    auVar18._12_4_ = uVar7;
    auVar18 = aesdec(auVar19,auVar18);
    auVar20._4_4_ = uVar5;
    auVar20._0_4_ = uVar4;
    auVar20._8_4_ = uVar6;
    auVar20._12_4_ = uVar7;
    auVar20 = aesdec(auVar21,auVar20);
    auVar22._4_4_ = uVar5;
    auVar22._0_4_ = uVar4;
    auVar22._8_4_ = uVar6;
    auVar22._12_4_ = uVar7;
    auVar22 = aesdec(auVar23,auVar22);
    auVar24._4_4_ = uVar5;
    auVar24._0_4_ = uVar4;
    auVar24._8_4_ = uVar6;
    auVar24._12_4_ = uVar7;
    auVar24 = aesdec(auVar25,auVar24);
    auVar17._4_4_ = uVar5;
    auVar17._0_4_ = uVar4;
    auVar17._8_4_ = uVar6;
    auVar17._12_4_ = uVar7;
    auVar26 = aesdec(auVar27,auVar17);
    auVar14 = *(undefined1 (*) [16])(param_1[3] + uVar2 + lVar3);
    uVar4 = auVar14._0_4_;
    uVar5 = auVar14._4_4_;
    uVar6 = auVar14._8_4_;
    uVar7 = auVar14._12_4_;
    if (lVar3 + 0x20 == 0) break;
    auVar12 = aesdec(auVar12,auVar13);
    auVar14 = aesdec(auVar15,auVar13);
    lVar3 = lVar3 + 0x20;
  }
  auVar12 = aesdec(auVar12,auVar13);
  auVar17 = aesdec(auVar15,auVar13);
  auVar16 = aesdec(auVar16,auVar13);
  auVar18 = aesdec(auVar18,auVar13);
  auVar20 = aesdec(auVar20,auVar13);
  auVar22 = aesdec(auVar22,auVar13);
  auVar24 = aesdec(auVar24,auVar13);
  auVar26 = aesdec(auVar26,auVar13);
  aesdeclast(auVar12,auVar14);
  aesdeclast(auVar17,auVar14);
  aesdeclast(auVar16,auVar14);
  aesdeclast(auVar18,auVar14);
  aesdeclast(auVar20,auVar14);
  aesdeclast(auVar22,auVar14);
  aesdeclast(auVar24,auVar14);
  aesdeclast(auVar26,auVar14);
  return auVar14._0_8_;
}

// aesni_ecb_encrypt @ 140df4180

void aesni_ecb_encrypt(uint *param_1,undefined1 (*param_2) [16],ulonglong param_3,uint *param_4,
                      int param_5)

{
  uint *puVar1;
  uint uVar2;
  undefined1 (*pauVar3) [16];
  ulonglong uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar11;
  undefined8 uVar12;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar10;
  uint uVar13;
  undefined1 auVar9 [16];
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  param_3 = param_3 & 0xfffffffffffffff0;
  if (param_3 != 0) {
    uVar2 = param_4[0x3c];
    uVar5 = *param_4;
    uVar4 = (ulonglong)uVar2;
    if (param_5 == 0) {
      if (0x7f < param_3) {
        uVar6 = *(undefined8 *)param_1;
        uVar12 = *(undefined8 *)(param_1 + 2);
        uVar14 = *(undefined8 *)(param_1 + 4);
        uVar15 = *(undefined8 *)(param_1 + 6);
        uVar16 = *(undefined8 *)(param_1 + 8);
        uVar17 = *(undefined8 *)(param_1 + 10);
        uVar18 = *(undefined8 *)(param_1 + 0xc);
        uVar19 = *(undefined8 *)(param_1 + 0xe);
        uVar20 = *(undefined8 *)(param_1 + 0x10);
        uVar21 = *(undefined8 *)(param_1 + 0x12);
        uVar22 = *(undefined8 *)(param_1 + 0x14);
        uVar23 = *(undefined8 *)(param_1 + 0x16);
        uVar24 = *(undefined8 *)(param_1 + 0x18);
        uVar25 = *(undefined8 *)(param_1 + 0x1a);
        uVar26 = *(undefined8 *)(param_1 + 0x1c);
        uVar27 = *(undefined8 *)(param_1 + 0x1e);
        puVar1 = param_1;
        while( true ) {
          param_1 = puVar1 + 0x20;
          param_3 = param_3 - 0x80;
          _aesni_decrypt8(uVar5);
          uVar5 = *param_4;
          if (param_3 < 0x80) break;
          *(undefined8 *)*param_2 = uVar6;
          *(undefined8 *)(*param_2 + 8) = uVar12;
          uVar6 = *(undefined8 *)param_1;
          uVar12 = *(undefined8 *)(puVar1 + 0x22);
          *(undefined8 *)param_2[1] = uVar14;
          *(undefined8 *)(param_2[1] + 8) = uVar15;
          uVar14 = *(undefined8 *)(puVar1 + 0x24);
          uVar15 = *(undefined8 *)(puVar1 + 0x26);
          *(undefined8 *)param_2[2] = uVar16;
          *(undefined8 *)(param_2[2] + 8) = uVar17;
          uVar16 = *(undefined8 *)(puVar1 + 0x28);
          uVar17 = *(undefined8 *)(puVar1 + 0x2a);
          *(undefined8 *)param_2[3] = uVar18;
          *(undefined8 *)(param_2[3] + 8) = uVar19;
          uVar18 = *(undefined8 *)(puVar1 + 0x2c);
          uVar19 = *(undefined8 *)(puVar1 + 0x2e);
          *(undefined8 *)param_2[4] = uVar20;
          *(undefined8 *)(param_2[4] + 8) = uVar21;
          uVar20 = *(undefined8 *)(puVar1 + 0x30);
          uVar21 = *(undefined8 *)(puVar1 + 0x32);
          *(undefined8 *)param_2[5] = uVar22;
          *(undefined8 *)(param_2[5] + 8) = uVar23;
          uVar22 = *(undefined8 *)(puVar1 + 0x34);
          uVar23 = *(undefined8 *)(puVar1 + 0x36);
          *(undefined8 *)param_2[6] = uVar24;
          *(undefined8 *)(param_2[6] + 8) = uVar25;
          uVar24 = *(undefined8 *)(puVar1 + 0x38);
          uVar25 = *(undefined8 *)(puVar1 + 0x3a);
          *(undefined8 *)param_2[7] = uVar26;
          *(undefined8 *)(param_2[7] + 8) = uVar27;
          param_2 = param_2 + 8;
          uVar26 = *(undefined8 *)(puVar1 + 0x3c);
          uVar27 = *(undefined8 *)(puVar1 + 0x3e);
          puVar1 = param_1;
        }
        *(undefined8 *)*param_2 = uVar6;
        *(undefined8 *)(*param_2 + 8) = uVar12;
        *(undefined8 *)param_2[1] = uVar14;
        *(undefined8 *)(param_2[1] + 8) = uVar15;
        uVar2 = (uint)uVar4;
        *(undefined8 *)param_2[2] = uVar16;
        *(undefined8 *)(param_2[2] + 8) = uVar17;
        *(undefined8 *)param_2[3] = uVar18;
        *(undefined8 *)(param_2[3] + 8) = uVar19;
        *(undefined8 *)param_2[4] = uVar20;
        *(undefined8 *)(param_2[4] + 8) = uVar21;
        *(undefined8 *)param_2[5] = uVar22;
        *(undefined8 *)(param_2[5] + 8) = uVar23;
        *(undefined8 *)param_2[6] = uVar24;
        *(undefined8 *)(param_2[6] + 8) = uVar25;
        *(undefined8 *)param_2[7] = uVar26;
        *(undefined8 *)(param_2[7] + 8) = uVar27;
        param_2 = param_2 + 8;
        if (param_3 == 0) {
          return;
        }
      }
      uVar5 = *param_1;
      uVar10 = param_1[1];
      uVar11 = param_1[2];
      uVar13 = param_1[3];
      if (param_3 < 0x20) {
        auVar8 = *(undefined1 (*) [16])(param_4 + 4);
        pauVar3 = (undefined1 (*) [16])(param_4 + 8);
        auVar9._0_4_ = uVar5 ^ *param_4;
        auVar9._4_4_ = uVar10 ^ param_4[1];
        auVar9._8_4_ = uVar11 ^ param_4[2];
        auVar9._12_4_ = uVar13 ^ param_4[3];
        do {
          auVar9 = aesdec(auVar9,auVar8);
          uVar2 = uVar2 - 1;
          auVar8 = *pauVar3;
          pauVar3 = pauVar3 + 1;
        } while (uVar2 != 0);
        auVar8 = aesdeclast(auVar9,auVar8);
        *param_2 = auVar8;
      }
      else {
        uVar6 = *(undefined8 *)(param_1 + 4);
        uVar12 = *(undefined8 *)(param_1 + 6);
        if (param_3 == 0x20) {
          _aesni_decrypt2();
          *(uint *)*param_2 = uVar5;
          *(uint *)(*param_2 + 4) = uVar10;
          *(uint *)(*param_2 + 8) = uVar11;
          *(uint *)(*param_2 + 0xc) = uVar13;
          *(undefined8 *)param_2[1] = uVar6;
          *(undefined8 *)(param_2[1] + 8) = uVar12;
        }
        else {
          uVar14 = *(undefined8 *)(param_1 + 8);
          uVar15 = *(undefined8 *)(param_1 + 10);
          if (param_3 < 0x40) {
            _aesni_decrypt3();
            *(uint *)*param_2 = uVar5;
            *(uint *)(*param_2 + 4) = uVar10;
            *(uint *)(*param_2 + 8) = uVar11;
            *(uint *)(*param_2 + 0xc) = uVar13;
            *(undefined8 *)param_2[1] = uVar6;
            *(undefined8 *)(param_2[1] + 8) = uVar12;
            *(undefined8 *)param_2[2] = uVar14;
            *(undefined8 *)(param_2[2] + 8) = uVar15;
          }
          else {
            uVar16 = *(undefined8 *)(param_1 + 0xc);
            uVar17 = *(undefined8 *)(param_1 + 0xe);
            if (param_3 == 0x40) {
              _aesni_decrypt4();
              *(uint *)*param_2 = uVar5;
              *(uint *)(*param_2 + 4) = uVar10;
              *(uint *)(*param_2 + 8) = uVar11;
              *(uint *)(*param_2 + 0xc) = uVar13;
              *(undefined8 *)param_2[1] = uVar6;
              *(undefined8 *)(param_2[1] + 8) = uVar12;
              *(undefined8 *)param_2[2] = uVar14;
              *(undefined8 *)(param_2[2] + 8) = uVar15;
              *(undefined8 *)param_2[3] = uVar16;
              *(undefined8 *)(param_2[3] + 8) = uVar17;
            }
            else {
              uVar18 = *(undefined8 *)(param_1 + 0x10);
              uVar19 = *(undefined8 *)(param_1 + 0x12);
              if (param_3 < 0x60) {
                _aesni_decrypt6();
                *(uint *)*param_2 = uVar5;
                *(uint *)(*param_2 + 4) = uVar10;
                *(uint *)(*param_2 + 8) = uVar11;
                *(uint *)(*param_2 + 0xc) = uVar13;
                *(undefined8 *)param_2[1] = uVar6;
                *(undefined8 *)(param_2[1] + 8) = uVar12;
                *(undefined8 *)param_2[2] = uVar14;
                *(undefined8 *)(param_2[2] + 8) = uVar15;
                *(undefined8 *)param_2[3] = uVar16;
                *(undefined8 *)(param_2[3] + 8) = uVar17;
                *(undefined8 *)param_2[4] = uVar18;
                *(undefined8 *)(param_2[4] + 8) = uVar19;
              }
              else {
                uVar20 = *(undefined8 *)(param_1 + 0x14);
                uVar21 = *(undefined8 *)(param_1 + 0x16);
                if (param_3 == 0x60) {
                  _aesni_decrypt6();
                  *(uint *)*param_2 = uVar5;
                  *(uint *)(*param_2 + 4) = uVar10;
                  *(uint *)(*param_2 + 8) = uVar11;
                  *(uint *)(*param_2 + 0xc) = uVar13;
                  *(undefined8 *)param_2[1] = uVar6;
                  *(undefined8 *)(param_2[1] + 8) = uVar12;
                  *(undefined8 *)param_2[2] = uVar14;
                  *(undefined8 *)(param_2[2] + 8) = uVar15;
                  *(undefined8 *)param_2[3] = uVar16;
                  *(undefined8 *)(param_2[3] + 8) = uVar17;
                  *(undefined8 *)param_2[4] = uVar18;
                  *(undefined8 *)(param_2[4] + 8) = uVar19;
                  *(undefined8 *)param_2[5] = uVar20;
                  *(undefined8 *)(param_2[5] + 8) = uVar21;
                }
                else {
                  uVar22 = *(undefined8 *)(param_1 + 0x18);
                  uVar23 = *(undefined8 *)(param_1 + 0x1a);
                  _aesni_decrypt8(*param_4);
                  *(uint *)*param_2 = uVar5;
                  *(uint *)(*param_2 + 4) = uVar10;
                  *(uint *)(*param_2 + 8) = uVar11;
                  *(uint *)(*param_2 + 0xc) = uVar13;
                  *(undefined8 *)param_2[1] = uVar6;
                  *(undefined8 *)(param_2[1] + 8) = uVar12;
                  *(undefined8 *)param_2[2] = uVar14;
                  *(undefined8 *)(param_2[2] + 8) = uVar15;
                  *(undefined8 *)param_2[3] = uVar16;
                  *(undefined8 *)(param_2[3] + 8) = uVar17;
                  *(undefined8 *)param_2[4] = uVar18;
                  *(undefined8 *)(param_2[4] + 8) = uVar19;
                  *(undefined8 *)param_2[5] = uVar20;
                  *(undefined8 *)(param_2[5] + 8) = uVar21;
                  *(undefined8 *)param_2[6] = uVar22;
                  *(undefined8 *)(param_2[6] + 8) = uVar23;
                }
              }
            }
          }
        }
      }
    }
    else {
      if (0x7f < param_3) {
        uVar6 = *(undefined8 *)param_1;
        uVar12 = *(undefined8 *)(param_1 + 2);
        uVar14 = *(undefined8 *)(param_1 + 4);
        uVar15 = *(undefined8 *)(param_1 + 6);
        uVar16 = *(undefined8 *)(param_1 + 8);
        uVar17 = *(undefined8 *)(param_1 + 10);
        uVar18 = *(undefined8 *)(param_1 + 0xc);
        uVar19 = *(undefined8 *)(param_1 + 0xe);
        uVar20 = *(undefined8 *)(param_1 + 0x10);
        uVar21 = *(undefined8 *)(param_1 + 0x12);
        uVar22 = *(undefined8 *)(param_1 + 0x14);
        uVar23 = *(undefined8 *)(param_1 + 0x16);
        uVar24 = *(undefined8 *)(param_1 + 0x18);
        uVar25 = *(undefined8 *)(param_1 + 0x1a);
        uVar26 = *(undefined8 *)(param_1 + 0x1c);
        uVar27 = *(undefined8 *)(param_1 + 0x1e);
        puVar1 = param_1;
        while( true ) {
          param_1 = puVar1 + 0x20;
          param_3 = param_3 - 0x80;
          _aesni_encrypt8(param_4);
          if (param_3 < 0x80) break;
          *(undefined8 *)*param_2 = uVar6;
          *(undefined8 *)(*param_2 + 8) = uVar12;
          uVar6 = *(undefined8 *)param_1;
          uVar12 = *(undefined8 *)(puVar1 + 0x22);
          *(undefined8 *)param_2[1] = uVar14;
          *(undefined8 *)(param_2[1] + 8) = uVar15;
          uVar14 = *(undefined8 *)(puVar1 + 0x24);
          uVar15 = *(undefined8 *)(puVar1 + 0x26);
          *(undefined8 *)param_2[2] = uVar16;
          *(undefined8 *)(param_2[2] + 8) = uVar17;
          uVar16 = *(undefined8 *)(puVar1 + 0x28);
          uVar17 = *(undefined8 *)(puVar1 + 0x2a);
          *(undefined8 *)param_2[3] = uVar18;
          *(undefined8 *)(param_2[3] + 8) = uVar19;
          uVar18 = *(undefined8 *)(puVar1 + 0x2c);
          uVar19 = *(undefined8 *)(puVar1 + 0x2e);
          *(undefined8 *)param_2[4] = uVar20;
          *(undefined8 *)(param_2[4] + 8) = uVar21;
          uVar20 = *(undefined8 *)(puVar1 + 0x30);
          uVar21 = *(undefined8 *)(puVar1 + 0x32);
          *(undefined8 *)param_2[5] = uVar22;
          *(undefined8 *)(param_2[5] + 8) = uVar23;
          uVar22 = *(undefined8 *)(puVar1 + 0x34);
          uVar23 = *(undefined8 *)(puVar1 + 0x36);
          *(undefined8 *)param_2[6] = uVar24;
          *(undefined8 *)(param_2[6] + 8) = uVar25;
          uVar24 = *(undefined8 *)(puVar1 + 0x38);
          uVar25 = *(undefined8 *)(puVar1 + 0x3a);
          *(undefined8 *)param_2[7] = uVar26;
          *(undefined8 *)(param_2[7] + 8) = uVar27;
          param_2 = param_2 + 8;
          uVar26 = *(undefined8 *)(puVar1 + 0x3c);
          uVar27 = *(undefined8 *)(puVar1 + 0x3e);
          puVar1 = param_1;
        }
        *(undefined8 *)*param_2 = uVar6;
        *(undefined8 *)(*param_2 + 8) = uVar12;
        *(undefined8 *)param_2[1] = uVar14;
        *(undefined8 *)(param_2[1] + 8) = uVar15;
        uVar2 = (uint)uVar4;
        *(undefined8 *)param_2[2] = uVar16;
        *(undefined8 *)(param_2[2] + 8) = uVar17;
        *(undefined8 *)param_2[3] = uVar18;
        *(undefined8 *)(param_2[3] + 8) = uVar19;
        *(undefined8 *)param_2[4] = uVar20;
        *(undefined8 *)(param_2[4] + 8) = uVar21;
        *(undefined8 *)param_2[5] = uVar22;
        *(undefined8 *)(param_2[5] + 8) = uVar23;
        *(undefined8 *)param_2[6] = uVar24;
        *(undefined8 *)(param_2[6] + 8) = uVar25;
        *(undefined8 *)param_2[7] = uVar26;
        *(undefined8 *)(param_2[7] + 8) = uVar27;
        param_2 = param_2 + 8;
        if (param_3 == 0) {
          return;
        }
      }
      uVar5 = *param_1;
      uVar10 = param_1[1];
      uVar11 = param_1[2];
      uVar13 = param_1[3];
      if (param_3 < 0x20) {
        auVar8 = *(undefined1 (*) [16])(param_4 + 4);
        pauVar3 = (undefined1 (*) [16])(param_4 + 8);
        auVar7._0_4_ = uVar5 ^ *param_4;
        auVar7._4_4_ = uVar10 ^ param_4[1];
        auVar7._8_4_ = uVar11 ^ param_4[2];
        auVar7._12_4_ = uVar13 ^ param_4[3];
        do {
          auVar7 = aesenc(auVar7,auVar8);
          uVar2 = uVar2 - 1;
          auVar8 = *pauVar3;
          pauVar3 = pauVar3 + 1;
        } while (uVar2 != 0);
        auVar8 = aesenclast(auVar7,auVar8);
        *param_2 = auVar8;
      }
      else {
        uVar6 = *(undefined8 *)(param_1 + 4);
        uVar12 = *(undefined8 *)(param_1 + 6);
        if (param_3 == 0x20) {
          _aesni_encrypt2();
          *(uint *)*param_2 = uVar5;
          *(uint *)(*param_2 + 4) = uVar10;
          *(uint *)(*param_2 + 8) = uVar11;
          *(uint *)(*param_2 + 0xc) = uVar13;
          *(undefined8 *)param_2[1] = uVar6;
          *(undefined8 *)(param_2[1] + 8) = uVar12;
        }
        else {
          uVar14 = *(undefined8 *)(param_1 + 8);
          uVar15 = *(undefined8 *)(param_1 + 10);
          if (param_3 < 0x40) {
            _aesni_encrypt3();
            *(uint *)*param_2 = uVar5;
            *(uint *)(*param_2 + 4) = uVar10;
            *(uint *)(*param_2 + 8) = uVar11;
            *(uint *)(*param_2 + 0xc) = uVar13;
            *(undefined8 *)param_2[1] = uVar6;
            *(undefined8 *)(param_2[1] + 8) = uVar12;
            *(undefined8 *)param_2[2] = uVar14;
            *(undefined8 *)(param_2[2] + 8) = uVar15;
          }
          else {
            uVar16 = *(undefined8 *)(param_1 + 0xc);
            uVar17 = *(undefined8 *)(param_1 + 0xe);
            if (param_3 == 0x40) {
              _aesni_encrypt4();
              *(uint *)*param_2 = uVar5;
              *(uint *)(*param_2 + 4) = uVar10;
              *(uint *)(*param_2 + 8) = uVar11;
              *(uint *)(*param_2 + 0xc) = uVar13;
              *(undefined8 *)param_2[1] = uVar6;
              *(undefined8 *)(param_2[1] + 8) = uVar12;
              *(undefined8 *)param_2[2] = uVar14;
              *(undefined8 *)(param_2[2] + 8) = uVar15;
              *(undefined8 *)param_2[3] = uVar16;
              *(undefined8 *)(param_2[3] + 8) = uVar17;
            }
            else {
              uVar18 = *(undefined8 *)(param_1 + 0x10);
              uVar19 = *(undefined8 *)(param_1 + 0x12);
              if (param_3 < 0x60) {
                _aesni_encrypt6();
                *(uint *)*param_2 = uVar5;
                *(uint *)(*param_2 + 4) = uVar10;
                *(uint *)(*param_2 + 8) = uVar11;
                *(uint *)(*param_2 + 0xc) = uVar13;
                *(undefined8 *)param_2[1] = uVar6;
                *(undefined8 *)(param_2[1] + 8) = uVar12;
                *(undefined8 *)param_2[2] = uVar14;
                *(undefined8 *)(param_2[2] + 8) = uVar15;
                *(undefined8 *)param_2[3] = uVar16;
                *(undefined8 *)(param_2[3] + 8) = uVar17;
                *(undefined8 *)param_2[4] = uVar18;
                *(undefined8 *)(param_2[4] + 8) = uVar19;
              }
              else {
                uVar20 = *(undefined8 *)(param_1 + 0x14);
                uVar21 = *(undefined8 *)(param_1 + 0x16);
                if (param_3 == 0x60) {
                  _aesni_encrypt6();
                  *(uint *)*param_2 = uVar5;
                  *(uint *)(*param_2 + 4) = uVar10;
                  *(uint *)(*param_2 + 8) = uVar11;
                  *(uint *)(*param_2 + 0xc) = uVar13;
                  *(undefined8 *)param_2[1] = uVar6;
                  *(undefined8 *)(param_2[1] + 8) = uVar12;
                  *(undefined8 *)param_2[2] = uVar14;
                  *(undefined8 *)(param_2[2] + 8) = uVar15;
                  *(undefined8 *)param_2[3] = uVar16;
                  *(undefined8 *)(param_2[3] + 8) = uVar17;
                  *(undefined8 *)param_2[4] = uVar18;
                  *(undefined8 *)(param_2[4] + 8) = uVar19;
                  *(undefined8 *)param_2[5] = uVar20;
                  *(undefined8 *)(param_2[5] + 8) = uVar21;
                }
                else {
                  uVar22 = *(undefined8 *)(param_1 + 0x18);
                  uVar23 = *(undefined8 *)(param_1 + 0x1a);
                  _aesni_encrypt8();
                  *(uint *)*param_2 = uVar5;
                  *(uint *)(*param_2 + 4) = uVar10;
                  *(uint *)(*param_2 + 8) = uVar11;
                  *(uint *)(*param_2 + 0xc) = uVar13;
                  *(undefined8 *)param_2[1] = uVar6;
                  *(undefined8 *)(param_2[1] + 8) = uVar12;
                  *(undefined8 *)param_2[2] = uVar14;
                  *(undefined8 *)(param_2[2] + 8) = uVar15;
                  *(undefined8 *)param_2[3] = uVar16;
                  *(undefined8 *)(param_2[3] + 8) = uVar17;
                  *(undefined8 *)param_2[4] = uVar18;
                  *(undefined8 *)(param_2[4] + 8) = uVar19;
                  *(undefined8 *)param_2[5] = uVar20;
                  *(undefined8 *)(param_2[5] + 8) = uVar21;
                  *(undefined8 *)param_2[6] = uVar22;
                  *(undefined8 *)(param_2[6] + 8) = uVar23;
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

// L$SEH_begin_aesni_ecb_encrypt @ 140df418d

void L_SEH_begin_aesni_ecb_encrypt
               (uint *param_1,undefined1 (*param_2) [16],ulonglong param_3,uint *param_4,int param_5
               )

{
  uint *puVar1;
  uint uVar2;
  undefined1 (*pauVar3) [16];
  ulonglong uVar4;
  uint uVar5;
  undefined8 uVar6;
  uint uVar11;
  undefined8 uVar12;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar10;
  uint uVar13;
  undefined1 auVar9 [16];
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  param_3 = param_3 & 0xfffffffffffffff0;
  if (param_3 != 0) {
    uVar2 = param_4[0x3c];
    uVar5 = *param_4;
    uVar4 = (ulonglong)uVar2;
    if (param_5 == 0) {
      if (0x7f < param_3) {
        uVar6 = *(undefined8 *)param_1;
        uVar12 = *(undefined8 *)(param_1 + 2);
        uVar14 = *(undefined8 *)(param_1 + 4);
        uVar15 = *(undefined8 *)(param_1 + 6);
        uVar16 = *(undefined8 *)(param_1 + 8);
        uVar17 = *(undefined8 *)(param_1 + 10);
        uVar18 = *(undefined8 *)(param_1 + 0xc);
        uVar19 = *(undefined8 *)(param_1 + 0xe);
        uVar20 = *(undefined8 *)(param_1 + 0x10);
        uVar21 = *(undefined8 *)(param_1 + 0x12);
        uVar22 = *(undefined8 *)(param_1 + 0x14);
        uVar23 = *(undefined8 *)(param_1 + 0x16);
        uVar24 = *(undefined8 *)(param_1 + 0x18);
        uVar25 = *(undefined8 *)(param_1 + 0x1a);
        uVar26 = *(undefined8 *)(param_1 + 0x1c);
        uVar27 = *(undefined8 *)(param_1 + 0x1e);
        puVar1 = param_1;
        while( true ) {
          param_1 = puVar1 + 0x20;
          param_3 = param_3 - 0x80;
          _aesni_decrypt8(uVar5);
          uVar5 = *param_4;
          if (param_3 < 0x80) break;
          *(undefined8 *)*param_2 = uVar6;
          *(undefined8 *)(*param_2 + 8) = uVar12;
          uVar6 = *(undefined8 *)param_1;
          uVar12 = *(undefined8 *)(puVar1 + 0x22);
          *(undefined8 *)param_2[1] = uVar14;
          *(undefined8 *)(param_2[1] + 8) = uVar15;
          uVar14 = *(undefined8 *)(puVar1 + 0x24);
          uVar15 = *(undefined8 *)(puVar1 + 0x26);
          *(undefined8 *)param_2[2] = uVar16;
          *(undefined8 *)(param_2[2] + 8) = uVar17;
          uVar16 = *(undefined8 *)(puVar1 + 0x28);
          uVar17 = *(undefined8 *)(puVar1 + 0x2a);
          *(undefined8 *)param_2[3] = uVar18;
          *(undefined8 *)(param_2[3] + 8) = uVar19;
          uVar18 = *(undefined8 *)(puVar1 + 0x2c);
          uVar19 = *(undefined8 *)(puVar1 + 0x2e);
          *(undefined8 *)param_2[4] = uVar20;
          *(undefined8 *)(param_2[4] + 8) = uVar21;
          uVar20 = *(undefined8 *)(puVar1 + 0x30);
          uVar21 = *(undefined8 *)(puVar1 + 0x32);
          *(undefined8 *)param_2[5] = uVar22;
          *(undefined8 *)(param_2[5] + 8) = uVar23;
          uVar22 = *(undefined8 *)(puVar1 + 0x34);
          uVar23 = *(undefined8 *)(puVar1 + 0x36);
          *(undefined8 *)param_2[6] = uVar24;
          *(undefined8 *)(param_2[6] + 8) = uVar25;
          uVar24 = *(undefined8 *)(puVar1 + 0x38);
          uVar25 = *(undefined8 *)(puVar1 + 0x3a);
          *(undefined8 *)param_2[7] = uVar26;
          *(undefined8 *)(param_2[7] + 8) = uVar27;
          param_2 = param_2 + 8;
          uVar26 = *(undefined8 *)(puVar1 + 0x3c);
          uVar27 = *(undefined8 *)(puVar1 + 0x3e);
          puVar1 = param_1;
        }
        *(undefined8 *)*param_2 = uVar6;
        *(undefined8 *)(*param_2 + 8) = uVar12;
        *(undefined8 *)param_2[1] = uVar14;
        *(undefined8 *)(param_2[1] + 8) = uVar15;
        uVar2 = (uint)uVar4;
        *(undefined8 *)param_2[2] = uVar16;
        *(undefined8 *)(param_2[2] + 8) = uVar17;
        *(undefined8 *)param_2[3] = uVar18;
        *(undefined8 *)(param_2[3] + 8) = uVar19;
        *(undefined8 *)param_2[4] = uVar20;
        *(undefined8 *)(param_2[4] + 8) = uVar21;
        *(undefined8 *)param_2[5] = uVar22;
        *(undefined8 *)(param_2[5] + 8) = uVar23;
        *(undefined8 *)param_2[6] = uVar24;
        *(undefined8 *)(param_2[6] + 8) = uVar25;
        *(undefined8 *)param_2[7] = uVar26;
        *(undefined8 *)(param_2[7] + 8) = uVar27;
        param_2 = param_2 + 8;
        if (param_3 == 0) {
          return;
        }
      }
      uVar5 = *param_1;
      uVar10 = param_1[1];
      uVar11 = param_1[2];
      uVar13 = param_1[3];
      if (param_3 < 0x20) {
        auVar8 = *(undefined1 (*) [16])(param_4 + 4);
        pauVar3 = (undefined1 (*) [16])(param_4 + 8);
        auVar9._0_4_ = uVar5 ^ *param_4;
        auVar9._4_4_ = uVar10 ^ param_4[1];
        auVar9._8_4_ = uVar11 ^ param_4[2];
        auVar9._12_4_ = uVar13 ^ param_4[3];
        do {
          auVar9 = aesdec(auVar9,auVar8);
          uVar2 = uVar2 - 1;
          auVar8 = *pauVar3;
          pauVar3 = pauVar3 + 1;
        } while (uVar2 != 0);
        auVar8 = aesdeclast(auVar9,auVar8);
        *param_2 = auVar8;
      }
      else {
        uVar6 = *(undefined8 *)(param_1 + 4);
        uVar12 = *(undefined8 *)(param_1 + 6);
        if (param_3 == 0x20) {
          _aesni_decrypt2();
          *(uint *)*param_2 = uVar5;
          *(uint *)(*param_2 + 4) = uVar10;
          *(uint *)(*param_2 + 8) = uVar11;
          *(uint *)(*param_2 + 0xc) = uVar13;
          *(undefined8 *)param_2[1] = uVar6;
          *(undefined8 *)(param_2[1] + 8) = uVar12;
        }
        else {
          uVar14 = *(undefined8 *)(param_1 + 8);
          uVar15 = *(undefined8 *)(param_1 + 10);
          if (param_3 < 0x40) {
            _aesni_decrypt3();
            *(uint *)*param_2 = uVar5;
            *(uint *)(*param_2 + 4) = uVar10;
            *(uint *)(*param_2 + 8) = uVar11;
            *(uint *)(*param_2 + 0xc) = uVar13;
            *(undefined8 *)param_2[1] = uVar6;
            *(undefined8 *)(param_2[1] + 8) = uVar12;
            *(undefined8 *)param_2[2] = uVar14;
            *(undefined8 *)(param_2[2] + 8) = uVar15;
          }
          else {
            uVar16 = *(undefined8 *)(param_1 + 0xc);
            uVar17 = *(undefined8 *)(param_1 + 0xe);
            if (param_3 == 0x40) {
              _aesni_decrypt4();
              *(uint *)*param_2 = uVar5;
              *(uint *)(*param_2 + 4) = uVar10;
              *(uint *)(*param_2 + 8) = uVar11;
              *(uint *)(*param_2 + 0xc) = uVar13;
              *(undefined8 *)param_2[1] = uVar6;
              *(undefined8 *)(param_2[1] + 8) = uVar12;
              *(undefined8 *)param_2[2] = uVar14;
              *(undefined8 *)(param_2[2] + 8) = uVar15;
              *(undefined8 *)param_2[3] = uVar16;
              *(undefined8 *)(param_2[3] + 8) = uVar17;
            }
            else {
              uVar18 = *(undefined8 *)(param_1 + 0x10);
              uVar19 = *(undefined8 *)(param_1 + 0x12);
              if (param_3 < 0x60) {
                _aesni_decrypt6();
                *(uint *)*param_2 = uVar5;
                *(uint *)(*param_2 + 4) = uVar10;
                *(uint *)(*param_2 + 8) = uVar11;
                *(uint *)(*param_2 + 0xc) = uVar13;
                *(undefined8 *)param_2[1] = uVar6;
                *(undefined8 *)(param_2[1] + 8) = uVar12;
                *(undefined8 *)param_2[2] = uVar14;
                *(undefined8 *)(param_2[2] + 8) = uVar15;
                *(undefined8 *)param_2[3] = uVar16;
                *(undefined8 *)(param_2[3] + 8) = uVar17;
                *(undefined8 *)param_2[4] = uVar18;
                *(undefined8 *)(param_2[4] + 8) = uVar19;
              }
              else {
                uVar20 = *(undefined8 *)(param_1 + 0x14);
                uVar21 = *(undefined8 *)(param_1 + 0x16);
                if (param_3 == 0x60) {
                  _aesni_decrypt6();
                  *(uint *)*param_2 = uVar5;
                  *(uint *)(*param_2 + 4) = uVar10;
                  *(uint *)(*param_2 + 8) = uVar11;
                  *(uint *)(*param_2 + 0xc) = uVar13;
                  *(undefined8 *)param_2[1] = uVar6;
                  *(undefined8 *)(param_2[1] + 8) = uVar12;
                  *(undefined8 *)param_2[2] = uVar14;
                  *(undefined8 *)(param_2[2] + 8) = uVar15;
                  *(undefined8 *)param_2[3] = uVar16;
                  *(undefined8 *)(param_2[3] + 8) = uVar17;
                  *(undefined8 *)param_2[4] = uVar18;
                  *(undefined8 *)(param_2[4] + 8) = uVar19;
                  *(undefined8 *)param_2[5] = uVar20;
                  *(undefined8 *)(param_2[5] + 8) = uVar21;
                }
                else {
                  uVar22 = *(undefined8 *)(param_1 + 0x18);
                  uVar23 = *(undefined8 *)(param_1 + 0x1a);
                  _aesni_decrypt8(*param_4);
                  *(uint *)*param_2 = uVar5;
                  *(uint *)(*param_2 + 4) = uVar10;
                  *(uint *)(*param_2 + 8) = uVar11;
                  *(uint *)(*param_2 + 0xc) = uVar13;
                  *(undefined8 *)param_2[1] = uVar6;
                  *(undefined8 *)(param_2[1] + 8) = uVar12;
                  *(undefined8 *)param_2[2] = uVar14;
                  *(undefined8 *)(param_2[2] + 8) = uVar15;
                  *(undefined8 *)param_2[3] = uVar16;
                  *(undefined8 *)(param_2[3] + 8) = uVar17;
                  *(undefined8 *)param_2[4] = uVar18;
                  *(undefined8 *)(param_2[4] + 8) = uVar19;
                  *(undefined8 *)param_2[5] = uVar20;
                  *(undefined8 *)(param_2[5] + 8) = uVar21;
                  *(undefined8 *)param_2[6] = uVar22;
                  *(undefined8 *)(param_2[6] + 8) = uVar23;
                }
              }
            }
          }
        }
      }
    }
    else {
      if (0x7f < param_3) {
        uVar6 = *(undefined8 *)param_1;
        uVar12 = *(undefined8 *)(param_1 + 2);
        uVar14 = *(undefined8 *)(param_1 + 4);
        uVar15 = *(undefined8 *)(param_1 + 6);
        uVar16 = *(undefined8 *)(param_1 + 8);
        uVar17 = *(undefined8 *)(param_1 + 10);
        uVar18 = *(undefined8 *)(param_1 + 0xc);
        uVar19 = *(undefined8 *)(param_1 + 0xe);
        uVar20 = *(undefined8 *)(param_1 + 0x10);
        uVar21 = *(undefined8 *)(param_1 + 0x12);
        uVar22 = *(undefined8 *)(param_1 + 0x14);
        uVar23 = *(undefined8 *)(param_1 + 0x16);
        uVar24 = *(undefined8 *)(param_1 + 0x18);
        uVar25 = *(undefined8 *)(param_1 + 0x1a);
        uVar26 = *(undefined8 *)(param_1 + 0x1c);
        uVar27 = *(undefined8 *)(param_1 + 0x1e);
        puVar1 = param_1;
        while( true ) {
          param_1 = puVar1 + 0x20;
          param_3 = param_3 - 0x80;
          _aesni_encrypt8(param_4);
          if (param_3 < 0x80) break;
          *(undefined8 *)*param_2 = uVar6;
          *(undefined8 *)(*param_2 + 8) = uVar12;
          uVar6 = *(undefined8 *)param_1;
          uVar12 = *(undefined8 *)(puVar1 + 0x22);
          *(undefined8 *)param_2[1] = uVar14;
          *(undefined8 *)(param_2[1] + 8) = uVar15;
          uVar14 = *(undefined8 *)(puVar1 + 0x24);
          uVar15 = *(undefined8 *)(puVar1 + 0x26);
          *(undefined8 *)param_2[2] = uVar16;
          *(undefined8 *)(param_2[2] + 8) = uVar17;
          uVar16 = *(undefined8 *)(puVar1 + 0x28);
          uVar17 = *(undefined8 *)(puVar1 + 0x2a);
          *(undefined8 *)param_2[3] = uVar18;
          *(undefined8 *)(param_2[3] + 8) = uVar19;
          uVar18 = *(undefined8 *)(puVar1 + 0x2c);
          uVar19 = *(undefined8 *)(puVar1 + 0x2e);
          *(undefined8 *)param_2[4] = uVar20;
          *(undefined8 *)(param_2[4] + 8) = uVar21;
          uVar20 = *(undefined8 *)(puVar1 + 0x30);
          uVar21 = *(undefined8 *)(puVar1 + 0x32);
          *(undefined8 *)param_2[5] = uVar22;
          *(undefined8 *)(param_2[5] + 8) = uVar23;
          uVar22 = *(undefined8 *)(puVar1 + 0x34);
          uVar23 = *(undefined8 *)(puVar1 + 0x36);
          *(undefined8 *)param_2[6] = uVar24;
          *(undefined8 *)(param_2[6] + 8) = uVar25;
          uVar24 = *(undefined8 *)(puVar1 + 0x38);
          uVar25 = *(undefined8 *)(puVar1 + 0x3a);
          *(undefined8 *)param_2[7] = uVar26;
          *(undefined8 *)(param_2[7] + 8) = uVar27;
          param_2 = param_2 + 8;
          uVar26 = *(undefined8 *)(puVar1 + 0x3c);
          uVar27 = *(undefined8 *)(puVar1 + 0x3e);
          puVar1 = param_1;
        }
        *(undefined8 *)*param_2 = uVar6;
        *(undefined8 *)(*param_2 + 8) = uVar12;
        *(undefined8 *)param_2[1] = uVar14;
        *(undefined8 *)(param_2[1] + 8) = uVar15;
        uVar2 = (uint)uVar4;
        *(undefined8 *)param_2[2] = uVar16;
        *(undefined8 *)(param_2[2] + 8) = uVar17;
        *(undefined8 *)param_2[3] = uVar18;
        *(undefined8 *)(param_2[3] + 8) = uVar19;
        *(undefined8 *)param_2[4] = uVar20;
        *(undefined8 *)(param_2[4] + 8) = uVar21;
        *(undefined8 *)param_2[5] = uVar22;
        *(undefined8 *)(param_2[5] + 8) = uVar23;
        *(undefined8 *)param_2[6] = uVar24;
        *(undefined8 *)(param_2[6] + 8) = uVar25;
        *(undefined8 *)param_2[7] = uVar26;
        *(undefined8 *)(param_2[7] + 8) = uVar27;
        param_2 = param_2 + 8;
        if (param_3 == 0) {
          return;
        }
      }
      uVar5 = *param_1;
      uVar10 = param_1[1];
      uVar11 = param_1[2];
      uVar13 = param_1[3];
      if (param_3 < 0x20) {
        auVar8 = *(undefined1 (*) [16])(param_4 + 4);
        pauVar3 = (undefined1 (*) [16])(param_4 + 8);
        auVar7._0_4_ = uVar5 ^ *param_4;
        auVar7._4_4_ = uVar10 ^ param_4[1];
        auVar7._8_4_ = uVar11 ^ param_4[2];
        auVar7._12_4_ = uVar13 ^ param_4[3];
        do {
          auVar7 = aesenc(auVar7,auVar8);
          uVar2 = uVar2 - 1;
          auVar8 = *pauVar3;
          pauVar3 = pauVar3 + 1;
        } while (uVar2 != 0);
        auVar8 = aesenclast(auVar7,auVar8);
        *param_2 = auVar8;
      }
      else {
        uVar6 = *(undefined8 *)(param_1 + 4);
        uVar12 = *(undefined8 *)(param_1 + 6);
        if (param_3 == 0x20) {
          _aesni_encrypt2();
          *(uint *)*param_2 = uVar5;
          *(uint *)(*param_2 + 4) = uVar10;
          *(uint *)(*param_2 + 8) = uVar11;
          *(uint *)(*param_2 + 0xc) = uVar13;
          *(undefined8 *)param_2[1] = uVar6;
          *(undefined8 *)(param_2[1] + 8) = uVar12;
        }
        else {
          uVar14 = *(undefined8 *)(param_1 + 8);
          uVar15 = *(undefined8 *)(param_1 + 10);
          if (param_3 < 0x40) {
            _aesni_encrypt3();
            *(uint *)*param_2 = uVar5;
            *(uint *)(*param_2 + 4) = uVar10;
            *(uint *)(*param_2 + 8) = uVar11;
            *(uint *)(*param_2 + 0xc) = uVar13;
            *(undefined8 *)param_2[1] = uVar6;
            *(undefined8 *)(param_2[1] + 8) = uVar12;
            *(undefined8 *)param_2[2] = uVar14;
            *(undefined8 *)(param_2[2] + 8) = uVar15;
          }
          else {
            uVar16 = *(undefined8 *)(param_1 + 0xc);
            uVar17 = *(undefined8 *)(param_1 + 0xe);
            if (param_3 == 0x40) {
              _aesni_encrypt4();
              *(uint *)*param_2 = uVar5;
              *(uint *)(*param_2 + 4) = uVar10;
              *(uint *)(*param_2 + 8) = uVar11;
              *(uint *)(*param_2 + 0xc) = uVar13;
              *(undefined8 *)param_2[1] = uVar6;
              *(undefined8 *)(param_2[1] + 8) = uVar12;
              *(undefined8 *)param_2[2] = uVar14;
              *(undefined8 *)(param_2[2] + 8) = uVar15;
              *(undefined8 *)param_2[3] = uVar16;
              *(undefined8 *)(param_2[3] + 8) = uVar17;
            }
            else {
              uVar18 = *(undefined8 *)(param_1 + 0x10);
              uVar19 = *(undefined8 *)(param_1 + 0x12);
              if (param_3 < 0x60) {
                _aesni_encrypt6();
                *(uint *)*param_2 = uVar5;
                *(uint *)(*param_2 + 4) = uVar10;
                *(uint *)(*param_2 + 8) = uVar11;
                *(uint *)(*param_2 + 0xc) = uVar13;
                *(undefined8 *)param_2[1] = uVar6;
                *(undefined8 *)(param_2[1] + 8) = uVar12;
                *(undefined8 *)param_2[2] = uVar14;
                *(undefined8 *)(param_2[2] + 8) = uVar15;
                *(undefined8 *)param_2[3] = uVar16;
                *(undefined8 *)(param_2[3] + 8) = uVar17;
                *(undefined8 *)param_2[4] = uVar18;
                *(undefined8 *)(param_2[4] + 8) = uVar19;
              }
              else {
                uVar20 = *(undefined8 *)(param_1 + 0x14);
                uVar21 = *(undefined8 *)(param_1 + 0x16);
                if (param_3 == 0x60) {
                  _aesni_encrypt6();
                  *(uint *)*param_2 = uVar5;
                  *(uint *)(*param_2 + 4) = uVar10;
                  *(uint *)(*param_2 + 8) = uVar11;
                  *(uint *)(*param_2 + 0xc) = uVar13;
                  *(undefined8 *)param_2[1] = uVar6;
                  *(undefined8 *)(param_2[1] + 8) = uVar12;
                  *(undefined8 *)param_2[2] = uVar14;
                  *(undefined8 *)(param_2[2] + 8) = uVar15;
                  *(undefined8 *)param_2[3] = uVar16;
                  *(undefined8 *)(param_2[3] + 8) = uVar17;
                  *(undefined8 *)param_2[4] = uVar18;
                  *(undefined8 *)(param_2[4] + 8) = uVar19;
                  *(undefined8 *)param_2[5] = uVar20;
                  *(undefined8 *)(param_2[5] + 8) = uVar21;
                }
                else {
                  uVar22 = *(undefined8 *)(param_1 + 0x18);
                  uVar23 = *(undefined8 *)(param_1 + 0x1a);
                  _aesni_encrypt8();
                  *(uint *)*param_2 = uVar5;
                  *(uint *)(*param_2 + 4) = uVar10;
                  *(uint *)(*param_2 + 8) = uVar11;
                  *(uint *)(*param_2 + 0xc) = uVar13;
                  *(undefined8 *)param_2[1] = uVar6;
                  *(undefined8 *)(param_2[1] + 8) = uVar12;
                  *(undefined8 *)param_2[2] = uVar14;
                  *(undefined8 *)(param_2[2] + 8) = uVar15;
                  *(undefined8 *)param_2[3] = uVar16;
                  *(undefined8 *)(param_2[3] + 8) = uVar17;
                  *(undefined8 *)param_2[4] = uVar18;
                  *(undefined8 *)(param_2[4] + 8) = uVar19;
                  *(undefined8 *)param_2[5] = uVar20;
                  *(undefined8 *)(param_2[5] + 8) = uVar21;
                  *(undefined8 *)param_2[6] = uVar22;
                  *(undefined8 *)(param_2[6] + 8) = uVar23;
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

// aesni_ccm64_encrypt_blocks @ 140df4750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void aesni_ccm64_encrypt_blocks
               (uint *param_1,uint *param_2,longlong param_3,uint *param_4,
               undefined1 (*param_5) [16],undefined1 (*param_6) [16])

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  lVar7 = _UNK_140df8368;
  lVar6 = _L_increment64;
  auVar5 = _L_bswap_mask;
  auVar11 = *param_5;
  uVar8 = (ulonglong)(param_4[0x3c] << 4);
  auVar13 = *param_6;
  auVar14 = pshufb(auVar11,_L_bswap_mask);
  do {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    auVar10._0_4_ = auVar11._0_4_ ^ *param_4;
    auVar10._4_4_ = auVar11._4_4_ ^ param_4[1];
    auVar10._8_4_ = auVar11._8_4_ ^ param_4[2];
    auVar10._12_4_ = auVar11._12_4_ ^ param_4[3];
    auVar11 = *(undefined1 (*) [16])(param_4 + 4);
    auVar12._0_4_ = auVar13._0_4_ ^ *param_4 ^ uVar1;
    auVar12._4_4_ = auVar13._4_4_ ^ param_4[1] ^ uVar2;
    auVar12._8_4_ = auVar13._8_4_ ^ param_4[2] ^ uVar3;
    auVar12._12_4_ = auVar13._12_4_ ^ param_4[3] ^ uVar4;
    auVar13 = *(undefined1 (*) [16])(param_4 + 8);
    lVar9 = 0x10 - uVar8;
    do {
      auVar10 = aesenc(auVar10,auVar11);
      auVar12 = aesenc(auVar12,auVar11);
      auVar11 = *(undefined1 (*) [16])((longlong)param_4 + lVar9 + uVar8 + 0x20);
      lVar9 = lVar9 + 0x20;
      auVar10 = aesenc(auVar10,auVar13);
      auVar12 = aesenc(auVar12,auVar13);
      auVar13 = *(undefined1 (*) [16])((longlong)param_4 + lVar9 + uVar8 + 0x10);
    } while (lVar9 != 0);
    auVar10 = aesenc(auVar10,auVar11);
    auVar12 = aesenc(auVar12,auVar11);
    lVar9 = auVar14._8_8_;
    auVar14._0_8_ = auVar14._0_8_ + lVar6;
    auVar14._8_8_ = lVar9 + lVar7;
    param_3 = param_3 + -1;
    auVar11 = aesenclast(auVar10,auVar13);
    auVar13 = aesenclast(auVar12,auVar13);
    param_1 = param_1 + 4;
    *param_2 = uVar1 ^ auVar11._0_4_;
    param_2[1] = uVar2 ^ auVar11._4_4_;
    param_2[2] = uVar3 ^ auVar11._8_4_;
    param_2[3] = uVar4 ^ auVar11._12_4_;
    auVar11 = pshufb(auVar14,auVar5);
    param_2 = param_2 + 4;
  } while (param_3 != 0);
  *param_6 = auVar13;
  return;
}

// L$SEH_begin_aesni_ccm64_encrypt_blocks @ 140df475d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L_SEH_begin_aesni_ccm64_encrypt_blocks
               (uint *param_1,uint *param_2,longlong param_3,uint *param_4,
               undefined1 (*param_5) [16],undefined1 (*param_6) [16])

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  lVar7 = _UNK_140df8368;
  lVar6 = _L_increment64;
  auVar5 = _L_bswap_mask;
  auVar11 = *param_5;
  uVar8 = (ulonglong)(param_4[0x3c] << 4);
  auVar13 = *param_6;
  auVar14 = pshufb(auVar11,_L_bswap_mask);
  do {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    auVar10._0_4_ = auVar11._0_4_ ^ *param_4;
    auVar10._4_4_ = auVar11._4_4_ ^ param_4[1];
    auVar10._8_4_ = auVar11._8_4_ ^ param_4[2];
    auVar10._12_4_ = auVar11._12_4_ ^ param_4[3];
    auVar11 = *(undefined1 (*) [16])(param_4 + 4);
    auVar12._0_4_ = auVar13._0_4_ ^ *param_4 ^ uVar1;
    auVar12._4_4_ = auVar13._4_4_ ^ param_4[1] ^ uVar2;
    auVar12._8_4_ = auVar13._8_4_ ^ param_4[2] ^ uVar3;
    auVar12._12_4_ = auVar13._12_4_ ^ param_4[3] ^ uVar4;
    auVar13 = *(undefined1 (*) [16])(param_4 + 8);
    lVar9 = 0x10 - uVar8;
    do {
      auVar10 = aesenc(auVar10,auVar11);
      auVar12 = aesenc(auVar12,auVar11);
      auVar11 = *(undefined1 (*) [16])((longlong)param_4 + lVar9 + uVar8 + 0x20);
      lVar9 = lVar9 + 0x20;
      auVar10 = aesenc(auVar10,auVar13);
      auVar12 = aesenc(auVar12,auVar13);
      auVar13 = *(undefined1 (*) [16])((longlong)param_4 + lVar9 + uVar8 + 0x10);
    } while (lVar9 != 0);
    auVar10 = aesenc(auVar10,auVar11);
    auVar12 = aesenc(auVar12,auVar11);
    lVar9 = auVar14._8_8_;
    auVar14._0_8_ = auVar14._0_8_ + lVar6;
    auVar14._8_8_ = lVar9 + lVar7;
    param_3 = param_3 + -1;
    auVar11 = aesenclast(auVar10,auVar13);
    auVar13 = aesenclast(auVar12,auVar13);
    param_1 = param_1 + 4;
    *param_2 = uVar1 ^ auVar11._0_4_;
    param_2[1] = uVar2 ^ auVar11._4_4_;
    param_2[2] = uVar3 ^ auVar11._8_4_;
    param_2[3] = uVar4 ^ auVar11._12_4_;
    auVar11 = pshufb(auVar14,auVar5);
    param_2 = param_2 + 4;
  } while (param_3 != 0);
  *param_6 = auVar13;
  return;
}

// aesni_ccm64_decrypt_blocks @ 140df48a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void aesni_ccm64_decrypt_blocks
               (uint *param_1,uint *param_2,longlong param_3,uint *param_4,
               undefined1 (*param_5) [16],undefined1 (*param_6) [16])

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 (*pauVar6) [16];
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  lVar2 = _UNK_140df8368;
  lVar1 = _L_increment64;
  auVar12 = _L_bswap_mask;
  auVar10 = *param_5;
  auVar11 = *param_6;
  auVar13 = pshufb(auVar10,_L_bswap_mask);
  auVar8 = *(undefined1 (*) [16])(param_4 + 4);
  pauVar6 = (undefined1 (*) [16])(param_4 + 8);
  auVar9._0_4_ = auVar10._0_4_ ^ *param_4;
  auVar9._4_4_ = auVar10._4_4_ ^ param_4[1];
  auVar9._8_4_ = auVar10._8_4_ ^ param_4[2];
  auVar9._12_4_ = auVar10._12_4_ ^ param_4[3];
  uVar3 = param_4[0x3c];
  do {
    auVar9 = aesenc(auVar9,auVar8);
    uVar3 = uVar3 - 1;
    auVar8 = *pauVar6;
    pauVar6 = pauVar6 + 1;
  } while (uVar3 != 0);
  auVar10 = aesenclast(auVar9,auVar8);
  uVar7 = (ulonglong)(param_4[0x3c] << 4);
  uVar3 = *param_1;
  uVar14 = param_1[1];
  uVar15 = param_1[2];
  uVar16 = param_1[3];
  auVar8._0_8_ = auVar13._0_8_ + _L_increment64;
  auVar8._8_8_ = auVar13._8_8_ + _UNK_140df8368;
  while( true ) {
    uVar3 = uVar3 ^ auVar10._0_4_;
    uVar14 = uVar14 ^ auVar10._4_4_;
    uVar15 = uVar15 ^ auVar10._8_4_;
    uVar16 = uVar16 ^ auVar10._12_4_;
    *param_2 = uVar3;
    param_2[1] = uVar14;
    param_2[2] = uVar15;
    param_2[3] = uVar16;
    param_2 = param_2 + 4;
    auVar10 = pshufb(auVar8,auVar12);
    param_3 = param_3 + -1;
    if (param_3 == 0) break;
    auVar9 = *(undefined1 (*) [16])(param_4 + 4);
    auVar13._0_4_ = auVar10._0_4_ ^ *param_4;
    auVar13._4_4_ = auVar10._4_4_ ^ param_4[1];
    auVar13._8_4_ = auVar10._8_4_ ^ param_4[2];
    auVar13._12_4_ = auVar10._12_4_ ^ param_4[3];
    auVar10._0_4_ = auVar11._0_4_ ^ uVar3 ^ *param_4;
    auVar10._4_4_ = auVar11._4_4_ ^ uVar14 ^ param_4[1];
    auVar10._8_4_ = auVar11._8_4_ ^ uVar15 ^ param_4[2];
    auVar10._12_4_ = auVar11._12_4_ ^ uVar16 ^ param_4[3];
    auVar11 = *(undefined1 (*) [16])(param_4 + 8);
    lVar5 = 0x10 - uVar7;
    do {
      auVar13 = aesenc(auVar13,auVar9);
      auVar10 = aesenc(auVar10,auVar9);
      auVar9 = *(undefined1 (*) [16])((longlong)param_4 + lVar5 + uVar7 + 0x20);
      lVar5 = lVar5 + 0x20;
      auVar13 = aesenc(auVar13,auVar11);
      auVar10 = aesenc(auVar10,auVar11);
      auVar11 = *(undefined1 (*) [16])((longlong)param_4 + lVar5 + uVar7 + 0x10);
    } while (lVar5 != 0);
    uVar3 = param_1[4];
    uVar14 = param_1[5];
    uVar15 = param_1[6];
    uVar16 = param_1[7];
    lVar5 = auVar8._8_8_;
    auVar8._0_8_ = auVar8._0_8_ + lVar1;
    auVar8._8_8_ = lVar5 + lVar2;
    auVar13 = aesenc(auVar13,auVar9);
    auVar9 = aesenc(auVar10,auVar9);
    auVar10 = aesenclast(auVar13,auVar11);
    auVar11 = aesenclast(auVar9,auVar11);
    param_1 = param_1 + 4;
  }
  uVar4 = param_4[0x3c];
  auVar10 = *(undefined1 (*) [16])(param_4 + 4);
  pauVar6 = (undefined1 (*) [16])(param_4 + 8);
  auVar12._0_4_ = auVar11._0_4_ ^ uVar3 ^ *param_4;
  auVar12._4_4_ = auVar11._4_4_ ^ uVar14 ^ param_4[1];
  auVar12._8_4_ = auVar11._8_4_ ^ uVar15 ^ param_4[2];
  auVar12._12_4_ = auVar11._12_4_ ^ uVar16 ^ param_4[3];
  do {
    auVar12 = aesenc(auVar12,auVar10);
    uVar4 = uVar4 - 1;
    auVar10 = *pauVar6;
    pauVar6 = pauVar6 + 1;
  } while (uVar4 != 0);
  auVar10 = aesenclast(auVar12,auVar10);
  *param_6 = auVar10;
  return;
}

// L$SEH_begin_aesni_ccm64_decrypt_blocks @ 140df48ad

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L_SEH_begin_aesni_ccm64_decrypt_blocks
               (uint *param_1,uint *param_2,longlong param_3,uint *param_4,
               undefined1 (*param_5) [16],undefined1 (*param_6) [16])

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 (*pauVar6) [16];
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  lVar2 = _UNK_140df8368;
  lVar1 = _L_increment64;
  auVar12 = _L_bswap_mask;
  auVar10 = *param_5;
  auVar11 = *param_6;
  auVar13 = pshufb(auVar10,_L_bswap_mask);
  auVar8 = *(undefined1 (*) [16])(param_4 + 4);
  pauVar6 = (undefined1 (*) [16])(param_4 + 8);
  auVar9._0_4_ = auVar10._0_4_ ^ *param_4;
  auVar9._4_4_ = auVar10._4_4_ ^ param_4[1];
  auVar9._8_4_ = auVar10._8_4_ ^ param_4[2];
  auVar9._12_4_ = auVar10._12_4_ ^ param_4[3];
  uVar3 = param_4[0x3c];
  do {
    auVar9 = aesenc(auVar9,auVar8);
    uVar3 = uVar3 - 1;
    auVar8 = *pauVar6;
    pauVar6 = pauVar6 + 1;
  } while (uVar3 != 0);
  auVar10 = aesenclast(auVar9,auVar8);
  uVar7 = (ulonglong)(param_4[0x3c] << 4);
  uVar3 = *param_1;
  uVar14 = param_1[1];
  uVar15 = param_1[2];
  uVar16 = param_1[3];
  auVar8._0_8_ = auVar13._0_8_ + _L_increment64;
  auVar8._8_8_ = auVar13._8_8_ + _UNK_140df8368;
  while( true ) {
    uVar3 = uVar3 ^ auVar10._0_4_;
    uVar14 = uVar14 ^ auVar10._4_4_;
    uVar15 = uVar15 ^ auVar10._8_4_;
    uVar16 = uVar16 ^ auVar10._12_4_;
    *param_2 = uVar3;
    param_2[1] = uVar14;
    param_2[2] = uVar15;
    param_2[3] = uVar16;
    param_2 = param_2 + 4;
    auVar10 = pshufb(auVar8,auVar12);
    param_3 = param_3 + -1;
    if (param_3 == 0) break;
    auVar9 = *(undefined1 (*) [16])(param_4 + 4);
    auVar13._0_4_ = auVar10._0_4_ ^ *param_4;
    auVar13._4_4_ = auVar10._4_4_ ^ param_4[1];
    auVar13._8_4_ = auVar10._8_4_ ^ param_4[2];
    auVar13._12_4_ = auVar10._12_4_ ^ param_4[3];
    auVar10._0_4_ = auVar11._0_4_ ^ uVar3 ^ *param_4;
    auVar10._4_4_ = auVar11._4_4_ ^ uVar14 ^ param_4[1];
    auVar10._8_4_ = auVar11._8_4_ ^ uVar15 ^ param_4[2];
    auVar10._12_4_ = auVar11._12_4_ ^ uVar16 ^ param_4[3];
    auVar11 = *(undefined1 (*) [16])(param_4 + 8);
    lVar5 = 0x10 - uVar7;
    do {
      auVar13 = aesenc(auVar13,auVar9);
      auVar10 = aesenc(auVar10,auVar9);
      auVar9 = *(undefined1 (*) [16])((longlong)param_4 + lVar5 + uVar7 + 0x20);
      lVar5 = lVar5 + 0x20;
      auVar13 = aesenc(auVar13,auVar11);
      auVar10 = aesenc(auVar10,auVar11);
      auVar11 = *(undefined1 (*) [16])((longlong)param_4 + lVar5 + uVar7 + 0x10);
    } while (lVar5 != 0);
    uVar3 = param_1[4];
    uVar14 = param_1[5];
    uVar15 = param_1[6];
    uVar16 = param_1[7];
    lVar5 = auVar8._8_8_;
    auVar8._0_8_ = auVar8._0_8_ + lVar1;
    auVar8._8_8_ = lVar5 + lVar2;
    auVar13 = aesenc(auVar13,auVar9);
    auVar9 = aesenc(auVar10,auVar9);
    auVar10 = aesenclast(auVar13,auVar11);
    auVar11 = aesenclast(auVar9,auVar11);
    param_1 = param_1 + 4;
  }
  uVar4 = param_4[0x3c];
  auVar10 = *(undefined1 (*) [16])(param_4 + 4);
  pauVar6 = (undefined1 (*) [16])(param_4 + 8);
  auVar12._0_4_ = auVar11._0_4_ ^ uVar3 ^ *param_4;
  auVar12._4_4_ = auVar11._4_4_ ^ uVar14 ^ param_4[1];
  auVar12._8_4_ = auVar11._8_4_ ^ uVar15 ^ param_4[2];
  auVar12._12_4_ = auVar11._12_4_ ^ uVar16 ^ param_4[3];
  do {
    auVar12 = aesenc(auVar12,auVar10);
    uVar4 = uVar4 - 1;
    auVar10 = *pauVar6;
    pauVar6 = pauVar6 + 1;
  } while (uVar4 != 0);
  auVar10 = aesenclast(auVar12,auVar10);
  *param_6 = auVar10;
  return;
}

// aesni_ctr32_encrypt_blocks @ 140df4a80

void aesni_ctr32_encrypt_blocks
               (undefined1 (*param_1) [16],undefined1 (*param_2) [16],ulonglong param_3,
               undefined1 (*param_4) [16],undefined1 (*param_5) [16])

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 (*pauVar4) [16];
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulonglong uVar17;
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  ulonglong uVar10;
  
  if (param_3 == 1) {
    uVar3 = *(uint *)(*param_1 + 4);
    uVar8 = *(uint *)(*param_1 + 8);
    uVar7 = *(uint *)(*param_1 + 0xc);
    iVar6 = *(int *)param_4[0xf];
    auVar14 = param_4[1];
    pauVar4 = param_4 + 2;
    auVar13._0_4_ = *(uint *)*param_5 ^ *(uint *)*param_4;
    auVar13._4_4_ = *(uint *)(*param_5 + 4) ^ *(uint *)(*param_4 + 4);
    auVar13._8_4_ = *(uint *)(*param_5 + 8) ^ *(uint *)(*param_4 + 8);
    auVar13._12_4_ = *(uint *)(*param_5 + 0xc) ^ *(uint *)(*param_4 + 0xc);
    do {
      auVar13 = aesenc(auVar13,auVar14);
      iVar6 = iVar6 + -1;
      auVar14 = *pauVar4;
      pauVar4 = pauVar4 + 1;
    } while (iVar6 != 0);
    auVar14 = aesenclast(auVar13,auVar14);
    *(uint *)*param_2 = auVar14._0_4_ ^ *(uint *)*param_1;
    *(uint *)(*param_2 + 4) = auVar14._4_4_ ^ uVar3;
    *(uint *)(*param_2 + 8) = auVar14._8_4_ ^ uVar8;
    *(uint *)(*param_2 + 0xc) = auVar14._12_4_ ^ uVar7;
    return;
  }
  uVar3 = *(uint *)(*param_5 + 0xc);
  auStack_130 = *param_5 ^ *param_4;
  uVar8 = *(uint *)(*param_4 + 0xc);
  uVar9 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  uVar10 = (ulonglong)uVar9;
  uVar3 = uVar9 + 1;
  uVar7 = uVar9 + 2;
  auStack_120._0_8_ = auStack_130._0_8_;
  uVar17 = auStack_130._8_8_;
  auStack_120._8_8_ =
       uVar17 & 0xffffffff |
       (ulonglong)
       ((uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 * 0x1000000) ^
       uVar8) << 0x20;
  uVar3 = uVar9 + 3;
  auStack_110._8_8_ =
       uVar17 & 0xffffffff |
       (ulonglong)
       ((uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000) ^
       uVar8) << 0x20;
  auStack_110._0_8_ = auStack_120._0_8_;
  uVar11 = uVar9 + 4;
  auStack_100._8_8_ =
       uVar17 & 0xffffffff |
       (ulonglong)
       ((uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 * 0x1000000) ^
       uVar8) << 0x20;
  auStack_100._0_8_ = auStack_120._0_8_;
  uVar7 = uVar9 + 5;
  auStack_f0._0_12_ = auStack_130._0_12_;
  auStack_f0._12_4_ =
       (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 * 0x1000000) ^
       uVar8;
  uVar11 = uVar9 + 6;
  uVar3 = *(uint *)param_4[0xf];
  auStack_e0._12_4_ =
       (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000) ^ uVar8
  ;
  auStack_e0._0_12_ = auStack_f0._0_12_;
  uVar9 = uVar9 + 7;
  auStack_d0._12_4_ =
       (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 * 0x1000000) ^
       uVar8;
  auStack_d0._0_12_ = auStack_f0._0_12_;
  auStack_c0._12_4_ =
       (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 * 0x1000000) ^ uVar8
  ;
  auStack_c0._0_12_ = auStack_f0._0_12_;
  auVar14 = param_4[1];
  if (7 < param_3) {
    if ((DAT_15540a9f4 & 0x4400000) == 0x400000) {
      uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
      puVar5 = param_4[2] + (uVar3 << 4);
      lVar12 = 0x30 - (ulonglong)(uVar3 << 4);
      do {
        auVar22 = auStack_e0;
        auVar21 = auStack_f0;
        auVar19 = auStack_100;
        auVar18 = auStack_110;
        auVar16 = auStack_120;
        auVar15 = auStack_130;
        param_3 = param_3 - 6;
        iVar6 = (int)uVar10;
        uVar10 = (ulonglong)(iVar6 + 6U);
        auVar13 = *(undefined1 (*) [16])(puVar5 + lVar12 + -0x30);
        auVar24 = aesenc(auStack_130,auVar14);
        uVar3 = iVar6 + 6U ^ uVar8;
        auVar26 = aesenc(auStack_120,auVar14);
        auStack_130[0xd] = (char)(uVar3 >> 0x10);
        auStack_130[0xc] = (char)(uVar3 >> 0x18);
        auStack_130[0xe] = (char)(uVar3 >> 8);
        auStack_130[0xf] = (char)uVar3;
        auStack_130._0_12_ = auVar15._0_12_;
        auVar15 = aesenc(auStack_110,auVar14);
        uVar3 = iVar6 + 7U ^ uVar8;
        auStack_120[0xd] = (char)(uVar3 >> 0x10);
        auStack_120[0xc] = (char)(uVar3 >> 0x18);
        auStack_120[0xe] = (char)(uVar3 >> 8);
        auStack_120[0xf] = (char)uVar3;
        auStack_120._0_12_ = auVar16._0_12_;
        auVar16 = aesenc(auStack_100,auVar14);
        uVar3 = iVar6 + 8U ^ uVar8;
        auVar20 = aesenc(auStack_f0,auVar14);
        auStack_110[0xd] = (char)(uVar3 >> 0x10);
        auStack_110[0xc] = (char)(uVar3 >> 0x18);
        auStack_110[0xe] = (char)(uVar3 >> 8);
        auStack_110[0xf] = (char)uVar3;
        auStack_110._0_12_ = auVar18._0_12_;
        auVar14 = aesenc(auStack_e0,auVar14);
        uVar3 = iVar6 + 9U ^ uVar8;
        auVar24 = aesenc(auVar24,auVar13);
        auStack_100[0xd] = (char)(uVar3 >> 0x10);
        auStack_100[0xc] = (char)(uVar3 >> 0x18);
        auStack_100[0xe] = (char)(uVar3 >> 8);
        auStack_100[0xf] = (char)uVar3;
        auStack_100._0_12_ = auVar19._0_12_;
        auVar26 = aesenc(auVar26,auVar13);
        uVar3 = iVar6 + 10U ^ uVar8;
        auStack_f0[0xd] = (char)(uVar3 >> 0x10);
        auStack_f0[0xc] = (char)(uVar3 >> 0x18);
        auStack_f0[0xe] = (char)(uVar3 >> 8);
        auStack_f0[0xf] = (char)uVar3;
        auStack_f0._0_12_ = auVar21._0_12_;
        auVar23 = aesenc(auVar15,auVar13);
        uVar3 = iVar6 + 0xbU ^ uVar8;
        auVar25 = aesenc(auVar16,auVar13);
        auStack_e0[0xd] = (char)(uVar3 >> 0x10);
        auStack_e0[0xc] = (char)(uVar3 >> 0x18);
        auStack_e0[0xe] = (char)(uVar3 >> 8);
        auStack_e0[0xf] = (char)uVar3;
        auStack_e0._0_12_ = auVar22._0_12_;
        auVar22 = aesenc(auVar20,auVar13);
        auVar20 = aesenc(auVar14,auVar13);
        L_enc_loop6();
        auVar13 = *param_1;
        auVar15 = param_1[1];
        auVar16 = param_1[2];
        auVar18 = param_1[3];
        auVar19 = param_1[4];
        auVar21 = param_1[5];
        param_1 = param_1 + 6;
        auVar14 = *(undefined1 (*) [16])(puVar5 + lVar12 + -0x40);
        *param_2 = auVar13 ^ auVar24;
        param_2[1] = auVar15 ^ auVar26;
        param_2[2] = auVar16 ^ auVar23;
        param_2[3] = auVar18 ^ auVar25;
        param_2[4] = auVar19 ^ auVar22;
        param_2[5] = auVar21 ^ auVar20;
        param_2 = param_2 + 6;
      } while (5 < param_3);
      if (param_3 == 0) goto L_ctr32_done;
      param_4 = (undefined1 (*) [16])(puVar5 + lVar12 + -0x50);
      uVar3 = (uint)-((int)lVar12 + -0x30) >> 4;
    }
    else {
      pauVar4 = param_1;
      do {
        param_3 = param_3 - 8;
        iVar6 = (int)uVar10;
        uVar7 = iVar6 + 8;
        uVar10 = (ulonglong)uVar7;
        auVar15 = aesenc(auStack_130,auVar14);
        auVar16 = aesenc(auStack_120,auVar14);
        auVar13 = param_4[2];
        auVar18 = aesenc(auStack_110,auVar14);
        auVar19 = aesenc(auStack_100,auVar14);
        auStack_130._12_4_ =
             (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000) ^
             uVar8;
        uVar7 = iVar6 + 9;
        auVar21 = aesenc(auStack_f0,auVar14);
        auVar22 = aesenc(auStack_e0,auVar14);
        auVar24 = aesenc(auStack_d0,auVar14);
        auVar26 = aesenc(auStack_c0,auVar14);
        auVar14 = param_4[3];
        auVar15 = aesenc(auVar15,auVar13);
        auVar16 = aesenc(auVar16,auVar13);
        auVar18 = aesenc(auVar18,auVar13);
        auVar19 = aesenc(auVar19,auVar13);
        auStack_120._12_4_ =
             (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000) ^
             uVar8;
        uVar7 = iVar6 + 10;
        auVar21 = aesenc(auVar21,auVar13);
        auVar22 = aesenc(auVar22,auVar13);
        auVar24 = aesenc(auVar24,auVar13);
        auVar26 = aesenc(auVar26,auVar13);
        auVar13 = param_4[4];
        auVar15 = aesenc(auVar15,auVar14);
        auVar16 = aesenc(auVar16,auVar14);
        auVar18 = aesenc(auVar18,auVar14);
        auVar19 = aesenc(auVar19,auVar14);
        auStack_110._12_4_ =
             (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000) ^
             uVar8;
        uVar7 = iVar6 + 0xb;
        auVar21 = aesenc(auVar21,auVar14);
        auVar22 = aesenc(auVar22,auVar14);
        auVar24 = aesenc(auVar24,auVar14);
        auVar26 = aesenc(auVar26,auVar14);
        auVar14 = param_4[5];
        auVar15 = aesenc(auVar15,auVar13);
        auVar16 = aesenc(auVar16,auVar13);
        auVar18 = aesenc(auVar18,auVar13);
        auVar19 = aesenc(auVar19,auVar13);
        auStack_100._12_4_ =
             (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000) ^
             uVar8;
        uVar7 = iVar6 + 0xc;
        auVar21 = aesenc(auVar21,auVar13);
        auVar22 = aesenc(auVar22,auVar13);
        auVar24 = aesenc(auVar24,auVar13);
        auVar26 = aesenc(auVar26,auVar13);
        auVar13 = param_4[6];
        auVar15 = aesenc(auVar15,auVar14);
        auVar16 = aesenc(auVar16,auVar14);
        auVar18 = aesenc(auVar18,auVar14);
        auVar19 = aesenc(auVar19,auVar14);
        auStack_f0._12_4_ =
             (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000) ^
             uVar8;
        uVar7 = iVar6 + 0xd;
        auVar21 = aesenc(auVar21,auVar14);
        auVar22 = aesenc(auVar22,auVar14);
        auVar24 = aesenc(auVar24,auVar14);
        auVar26 = aesenc(auVar26,auVar14);
        auVar14 = param_4[7];
        auVar15 = aesenc(auVar15,auVar13);
        auVar16 = aesenc(auVar16,auVar13);
        auVar18 = aesenc(auVar18,auVar13);
        auVar19 = aesenc(auVar19,auVar13);
        auStack_e0._12_4_ =
             (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000) ^
             uVar8;
        uVar7 = iVar6 + 0xe;
        auVar21 = aesenc(auVar21,auVar13);
        auVar22 = aesenc(auVar22,auVar13);
        auVar24 = aesenc(auVar24,auVar13);
        auVar26 = aesenc(auVar26,auVar13);
        auVar13 = param_4[8];
        auVar15 = aesenc(auVar15,auVar14);
        auVar16 = aesenc(auVar16,auVar14);
        auVar18 = aesenc(auVar18,auVar14);
        auVar19 = aesenc(auVar19,auVar14);
        auStack_d0._12_4_ =
             (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000) ^
             uVar8;
        uVar7 = iVar6 + 0xf;
        auVar21 = aesenc(auVar21,auVar14);
        auVar22 = aesenc(auVar22,auVar14);
        auVar24 = aesenc(auVar24,auVar14);
        auVar26 = aesenc(auVar26,auVar14);
        auVar14 = param_4[9];
        auVar15 = aesenc(auVar15,auVar13);
        auVar16 = aesenc(auVar16,auVar13);
        auVar18 = aesenc(auVar18,auVar13);
        auVar19 = aesenc(auVar19,auVar13);
        auStack_c0._12_4_ =
             (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000) ^
             uVar8;
        auVar21 = aesenc(auVar21,auVar13);
        auVar22 = aesenc(auVar22,auVar13);
        auVar24 = aesenc(auVar24,auVar13);
        auVar26 = aesenc(auVar26,auVar13);
        auVar13 = param_4[10];
        if (10 < uVar3) {
          auVar15 = aesenc(auVar15,auVar14);
          auVar16 = aesenc(auVar16,auVar14);
          auVar18 = aesenc(auVar18,auVar14);
          auVar19 = aesenc(auVar19,auVar14);
          auVar21 = aesenc(auVar21,auVar14);
          auVar22 = aesenc(auVar22,auVar14);
          auVar24 = aesenc(auVar24,auVar14);
          auVar26 = aesenc(auVar26,auVar14);
          auVar14 = param_4[0xb];
          auVar15 = aesenc(auVar15,auVar13);
          auVar16 = aesenc(auVar16,auVar13);
          auVar18 = aesenc(auVar18,auVar13);
          auVar19 = aesenc(auVar19,auVar13);
          auVar21 = aesenc(auVar21,auVar13);
          auVar22 = aesenc(auVar22,auVar13);
          auVar24 = aesenc(auVar24,auVar13);
          auVar26 = aesenc(auVar26,auVar13);
          auVar13 = param_4[0xc];
          if (uVar3 != 0xb) {
            auVar15 = aesenc(auVar15,auVar14);
            auVar16 = aesenc(auVar16,auVar14);
            auVar18 = aesenc(auVar18,auVar14);
            auVar19 = aesenc(auVar19,auVar14);
            auVar21 = aesenc(auVar21,auVar14);
            auVar22 = aesenc(auVar22,auVar14);
            auVar24 = aesenc(auVar24,auVar14);
            auVar26 = aesenc(auVar26,auVar14);
            auVar14 = param_4[0xd];
            auVar15 = aesenc(auVar15,auVar13);
            auVar16 = aesenc(auVar16,auVar13);
            auVar18 = aesenc(auVar18,auVar13);
            auVar19 = aesenc(auVar19,auVar13);
            auVar21 = aesenc(auVar21,auVar13);
            auVar22 = aesenc(auVar22,auVar13);
            auVar24 = aesenc(auVar24,auVar13);
            auVar26 = aesenc(auVar26,auVar13);
            auVar13 = param_4[0xe];
          }
        }
        auVar15 = aesenc(auVar15,auVar14);
        auVar16 = aesenc(auVar16,auVar14);
        auVar18 = aesenc(auVar18,auVar14);
        auVar19 = aesenc(auVar19,auVar14);
        auVar21 = aesenc(auVar21,auVar14);
        auVar22 = aesenc(auVar22,auVar14);
        auVar24 = aesenc(auVar24,auVar14);
        auVar26 = aesenc(auVar26,auVar14);
        param_1 = pauVar4 + 8;
        auVar15 = aesenclast(auVar15,*pauVar4 ^ auVar13);
        auVar16 = aesenclast(auVar16,pauVar4[1] ^ auVar13);
        auVar18 = aesenclast(auVar18,pauVar4[2] ^ auVar13);
        auVar19 = aesenclast(auVar19,pauVar4[3] ^ auVar13);
        auVar21 = aesenclast(auVar21,pauVar4[4] ^ auVar13);
        auVar22 = aesenclast(auVar22,pauVar4[5] ^ auVar13);
        auVar24 = aesenclast(auVar24,pauVar4[6] ^ auVar13);
        auVar14 = param_4[1];
        auVar13 = aesenclast(auVar26,pauVar4[7] ^ auVar13);
        *param_2 = auVar15;
        param_2[1] = auVar16;
        param_2[2] = auVar18;
        param_2[3] = auVar19;
        param_2[4] = auVar21;
        param_2[5] = auVar22;
        param_2[6] = auVar24;
        param_2[7] = auVar13;
        param_2 = param_2 + 8;
        pauVar4 = param_1;
      } while (7 < param_3);
      if (param_3 == 0) goto L_ctr32_done;
    }
  }
  param_4 = param_4 + 1;
  if (param_3 < 4) {
    do {
      auStack_130 = aesenc(auStack_130,auVar14);
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      auStack_120 = aesenc(auStack_120,auVar14);
      auStack_110 = aesenc(auStack_110,auVar14);
      auVar14 = *param_4;
    } while (uVar3 != 0);
    auVar13 = aesenclast(auStack_130,auVar14);
    auVar15 = aesenclast(auStack_120,auVar14);
    auVar14 = aesenclast(auStack_110,auVar14);
    uVar3 = *(uint *)(*param_1 + 4);
    uVar8 = *(uint *)(*param_1 + 8);
    uVar7 = *(uint *)(*param_1 + 0xc);
    *(uint *)*param_2 = auVar13._0_4_ ^ *(uint *)*param_1;
    *(uint *)(*param_2 + 4) = auVar13._4_4_ ^ uVar3;
    *(uint *)(*param_2 + 8) = auVar13._8_4_ ^ uVar8;
    *(uint *)(*param_2 + 0xc) = auVar13._12_4_ ^ uVar7;
    if (1 < param_3) {
      uVar3 = *(uint *)(param_1[1] + 4);
      uVar8 = *(uint *)(param_1[1] + 8);
      uVar7 = *(uint *)(param_1[1] + 0xc);
      *(uint *)param_2[1] = auVar15._0_4_ ^ *(uint *)param_1[1];
      *(uint *)(param_2[1] + 4) = auVar15._4_4_ ^ uVar3;
      *(uint *)(param_2[1] + 8) = auVar15._8_4_ ^ uVar8;
      *(uint *)(param_2[1] + 0xc) = auVar15._12_4_ ^ uVar7;
      if (param_3 != 2) {
        uVar3 = *(uint *)(param_1[2] + 4);
        uVar8 = *(uint *)(param_1[2] + 8);
        uVar7 = *(uint *)(param_1[2] + 0xc);
        *(uint *)param_2[2] = auVar14._0_4_ ^ *(uint *)param_1[2];
        *(uint *)(param_2[2] + 4) = auVar14._4_4_ ^ uVar3;
        *(uint *)(param_2[2] + 8) = auVar14._8_4_ ^ uVar8;
        *(uint *)(param_2[2] + 0xc) = auVar14._12_4_ ^ uVar7;
      }
    }
  }
  else if (param_3 == 4) {
    do {
      auStack_130 = aesenc(auStack_130,auVar14);
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      auStack_120 = aesenc(auStack_120,auVar14);
      auStack_110 = aesenc(auStack_110,auVar14);
      auStack_100 = aesenc(auStack_100,auVar14);
      auVar14 = *param_4;
    } while (uVar3 != 0);
    auVar15 = aesenclast(auStack_130,auVar14);
    auVar16 = aesenclast(auStack_120,auVar14);
    uVar3 = *(uint *)(*param_1 + 4);
    uVar8 = *(uint *)(*param_1 + 8);
    uVar7 = *(uint *)(*param_1 + 0xc);
    uVar9 = *(uint *)param_1[1];
    uVar11 = *(uint *)(param_1[1] + 4);
    uVar1 = *(uint *)(param_1[1] + 8);
    uVar2 = *(uint *)(param_1[1] + 0xc);
    auVar18 = aesenclast(auStack_110,auVar14);
    auVar19 = aesenclast(auStack_100,auVar14);
    auVar14 = param_1[2];
    auVar13 = param_1[3];
    *(uint *)*param_2 = auVar15._0_4_ ^ *(uint *)*param_1;
    *(uint *)(*param_2 + 4) = auVar15._4_4_ ^ uVar3;
    *(uint *)(*param_2 + 8) = auVar15._8_4_ ^ uVar8;
    *(uint *)(*param_2 + 0xc) = auVar15._12_4_ ^ uVar7;
    *(uint *)param_2[1] = auVar16._0_4_ ^ uVar9;
    *(uint *)(param_2[1] + 4) = auVar16._4_4_ ^ uVar11;
    *(uint *)(param_2[1] + 8) = auVar16._8_4_ ^ uVar1;
    *(uint *)(param_2[1] + 0xc) = auVar16._12_4_ ^ uVar2;
    param_2[2] = auVar18 ^ auVar14;
    param_2[3] = auVar19 ^ auVar13;
  }
  else {
    auVar19 = aesenc(auStack_130,auVar14);
    auVar21 = aesenc(auStack_120,auVar14);
    auVar22 = aesenc(auStack_110,auVar14);
    auVar13 = *param_1;
    auVar24 = aesenc(auStack_100,auVar14);
    auVar26 = aesenc(auStack_f0,auVar14);
    auVar15 = param_1[1];
    auVar16 = param_1[2];
    auVar23 = aesenc(auStack_e0,auVar14);
    auVar25 = aesenc(auStack_d0,auVar14);
    L_enc_loop8_enter(param_4[1] + (uVar3 << 4));
    auVar14 = param_1[3];
    auVar18 = param_1[4];
    *param_2 = auVar19 ^ auVar13;
    param_2[1] = auVar21 ^ auVar15;
    param_2[2] = auVar22 ^ auVar16;
    param_2[3] = auVar24 ^ auVar14;
    param_2[4] = auVar26 ^ auVar18;
    if (5 < param_3) {
      uVar3 = *(uint *)(param_1[5] + 4);
      uVar8 = *(uint *)(param_1[5] + 8);
      uVar7 = *(uint *)(param_1[5] + 0xc);
      *(uint *)param_2[5] = auVar23._0_4_ ^ *(uint *)param_1[5];
      *(uint *)(param_2[5] + 4) = auVar23._4_4_ ^ uVar3;
      *(uint *)(param_2[5] + 8) = auVar23._8_4_ ^ uVar8;
      *(uint *)(param_2[5] + 0xc) = auVar23._12_4_ ^ uVar7;
      if (param_3 != 6) {
        uVar3 = *(uint *)(param_1[6] + 4);
        uVar8 = *(uint *)(param_1[6] + 8);
        uVar7 = *(uint *)(param_1[6] + 0xc);
        *(uint *)param_2[6] = auVar25._0_4_ ^ *(uint *)param_1[6];
        *(uint *)(param_2[6] + 4) = auVar25._4_4_ ^ uVar3;
        *(uint *)(param_2[6] + 8) = auVar25._8_4_ ^ uVar8;
        *(uint *)(param_2[6] + 0xc) = auVar25._12_4_ ^ uVar7;
      }
    }
  }
L_ctr32_done:
  *(undefined8 *)((longlong)register0x00000020 + -0xa8) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0xa0) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x98) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x90) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x88) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x80) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x78) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x70) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x68) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x60) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x58) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x48) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x40) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x38) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x28) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x20) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x18) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x10) = 0;
  return;
}

// L$SEH_begin_aesni_ctr32_encrypt_blocks @ 140df4a8d

void L_SEH_begin_aesni_ctr32_encrypt_blocks
               (undefined1 (*param_1) [16],undefined1 (*param_2) [16],ulonglong param_3,
               undefined1 (*param_4) [16],undefined1 (*param_5) [16])

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 (*pauVar4) [16];
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  ulonglong uVar17;
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  ulonglong uVar10;
  
  if (param_3 == 1) {
    uVar3 = *(uint *)(*param_1 + 4);
    uVar8 = *(uint *)(*param_1 + 8);
    uVar7 = *(uint *)(*param_1 + 0xc);
    iVar6 = *(int *)param_4[0xf];
    auVar14 = param_4[1];
    pauVar4 = param_4 + 2;
    auVar13._0_4_ = *(uint *)*param_5 ^ *(uint *)*param_4;
    auVar13._4_4_ = *(uint *)(*param_5 + 4) ^ *(uint *)(*param_4 + 4);
    auVar13._8_4_ = *(uint *)(*param_5 + 8) ^ *(uint *)(*param_4 + 8);
    auVar13._12_4_ = *(uint *)(*param_5 + 0xc) ^ *(uint *)(*param_4 + 0xc);
    do {
      auVar13 = aesenc(auVar13,auVar14);
      iVar6 = iVar6 + -1;
      auVar14 = *pauVar4;
      pauVar4 = pauVar4 + 1;
    } while (iVar6 != 0);
    auVar14 = aesenclast(auVar13,auVar14);
    *(uint *)*param_2 = auVar14._0_4_ ^ *(uint *)*param_1;
    *(uint *)(*param_2 + 4) = auVar14._4_4_ ^ uVar3;
    *(uint *)(*param_2 + 8) = auVar14._8_4_ ^ uVar8;
    *(uint *)(*param_2 + 0xc) = auVar14._12_4_ ^ uVar7;
    return;
  }
  uVar3 = *(uint *)(*param_5 + 0xc);
  local_130 = *param_5 ^ *param_4;
  uVar8 = *(uint *)(*param_4 + 0xc);
  uVar9 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
  uVar10 = (ulonglong)uVar9;
  uVar3 = uVar9 + 1;
  uVar7 = uVar9 + 2;
  local_120._0_8_ = local_130._0_8_;
  uVar17 = local_130._8_8_;
  local_120._8_8_ =
       uVar17 & 0xffffffff |
       (ulonglong)
       ((uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 * 0x1000000) ^
       uVar8) << 0x20;
  uVar3 = uVar9 + 3;
  local_110._8_8_ =
       uVar17 & 0xffffffff |
       (ulonglong)
       ((uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000) ^
       uVar8) << 0x20;
  local_110._0_8_ = local_120._0_8_;
  uVar11 = uVar9 + 4;
  local_100._8_8_ =
       uVar17 & 0xffffffff |
       (ulonglong)
       ((uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 * 0x1000000) ^
       uVar8) << 0x20;
  local_100._0_8_ = local_120._0_8_;
  uVar7 = uVar9 + 5;
  local_f0._0_12_ = local_130._0_12_;
  local_f0._12_4_ =
       (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 * 0x1000000) ^
       uVar8;
  uVar11 = uVar9 + 6;
  uVar3 = *(uint *)param_4[0xf];
  local_e0._12_4_ =
       (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000) ^ uVar8
  ;
  local_e0._0_12_ = local_f0._0_12_;
  uVar9 = uVar9 + 7;
  local_d0._12_4_ =
       (uVar11 >> 0x18 | (uVar11 & 0xff0000) >> 8 | (uVar11 & 0xff00) << 8 | uVar11 * 0x1000000) ^
       uVar8;
  local_d0._0_12_ = local_f0._0_12_;
  local_c0._12_4_ =
       (uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 * 0x1000000) ^ uVar8
  ;
  local_c0._0_12_ = local_f0._0_12_;
  auVar14 = param_4[1];
  if (7 < param_3) {
    if ((DAT_15540a9f4 & 0x4400000) == 0x400000) {
      uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
      puVar5 = param_4[2] + (uVar3 << 4);
      lVar12 = 0x30 - (ulonglong)(uVar3 << 4);
      do {
        auVar22 = local_e0;
        auVar21 = local_f0;
        auVar19 = local_100;
        auVar18 = local_110;
        auVar16 = local_120;
        auVar15 = local_130;
        param_3 = param_3 - 6;
        iVar6 = (int)uVar10;
        uVar10 = (ulonglong)(iVar6 + 6U);
        auVar13 = *(undefined1 (*) [16])(puVar5 + lVar12 + -0x30);
        auVar24 = aesenc(local_130,auVar14);
        uVar3 = iVar6 + 6U ^ uVar8;
        auVar26 = aesenc(local_120,auVar14);
        local_130[0xd] = (char)(uVar3 >> 0x10);
        local_130[0xc] = (char)(uVar3 >> 0x18);
        local_130[0xe] = (char)(uVar3 >> 8);
        local_130[0xf] = (char)uVar3;
        local_130._0_12_ = auVar15._0_12_;
        auVar15 = aesenc(local_110,auVar14);
        uVar3 = iVar6 + 7U ^ uVar8;
        local_120[0xd] = (char)(uVar3 >> 0x10);
        local_120[0xc] = (char)(uVar3 >> 0x18);
        local_120[0xe] = (char)(uVar3 >> 8);
        local_120[0xf] = (char)uVar3;
        local_120._0_12_ = auVar16._0_12_;
        auVar16 = aesenc(local_100,auVar14);
        uVar3 = iVar6 + 8U ^ uVar8;
        auVar20 = aesenc(local_f0,auVar14);
        local_110[0xd] = (char)(uVar3 >> 0x10);
        local_110[0xc] = (char)(uVar3 >> 0x18);
        local_110[0xe] = (char)(uVar3 >> 8);
        local_110[0xf] = (char)uVar3;
        local_110._0_12_ = auVar18._0_12_;
        auVar14 = aesenc(local_e0,auVar14);
        uVar3 = iVar6 + 9U ^ uVar8;
        auVar24 = aesenc(auVar24,auVar13);
        local_100[0xd] = (char)(uVar3 >> 0x10);
        local_100[0xc] = (char)(uVar3 >> 0x18);
        local_100[0xe] = (char)(uVar3 >> 8);
        local_100[0xf] = (char)uVar3;
        local_100._0_12_ = auVar19._0_12_;
        auVar26 = aesenc(auVar26,auVar13);
        uVar3 = iVar6 + 10U ^ uVar8;
        local_f0[0xd] = (char)(uVar3 >> 0x10);
        local_f0[0xc] = (char)(uVar3 >> 0x18);
        local_f0[0xe] = (char)(uVar3 >> 8);
        local_f0[0xf] = (char)uVar3;
        local_f0._0_12_ = auVar21._0_12_;
        auVar23 = aesenc(auVar15,auVar13);
        uVar3 = iVar6 + 0xbU ^ uVar8;
        auVar25 = aesenc(auVar16,auVar13);
        local_e0[0xd] = (char)(uVar3 >> 0x10);
        local_e0[0xc] = (char)(uVar3 >> 0x18);
        local_e0[0xe] = (char)(uVar3 >> 8);
        local_e0[0xf] = (char)uVar3;
        local_e0._0_12_ = auVar22._0_12_;
        auVar22 = aesenc(auVar20,auVar13);
        auVar20 = aesenc(auVar14,auVar13);
        L_enc_loop6();
        auVar13 = *param_1;
        auVar15 = param_1[1];
        auVar16 = param_1[2];
        auVar18 = param_1[3];
        auVar19 = param_1[4];
        auVar21 = param_1[5];
        param_1 = param_1 + 6;
        auVar14 = *(undefined1 (*) [16])(puVar5 + lVar12 + -0x40);
        *param_2 = auVar13 ^ auVar24;
        param_2[1] = auVar15 ^ auVar26;
        param_2[2] = auVar16 ^ auVar23;
        param_2[3] = auVar18 ^ auVar25;
        param_2[4] = auVar19 ^ auVar22;
        param_2[5] = auVar21 ^ auVar20;
        param_2 = param_2 + 6;
      } while (5 < param_3);
      if (param_3 == 0) goto L_ctr32_done;
      param_4 = (undefined1 (*) [16])(puVar5 + lVar12 + -0x50);
      uVar3 = (uint)-((int)lVar12 + -0x30) >> 4;
    }
    else {
      pauVar4 = param_1;
      do {
        param_3 = param_3 - 8;
        iVar6 = (int)uVar10;
        uVar7 = iVar6 + 8;
        uVar10 = (ulonglong)uVar7;
        auVar15 = aesenc(local_130,auVar14);
        auVar16 = aesenc(local_120,auVar14);
        auVar13 = param_4[2];
        auVar18 = aesenc(local_110,auVar14);
        auVar19 = aesenc(local_100,auVar14);
        local_130._12_4_ =
             (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000) ^
             uVar8;
        uVar7 = iVar6 + 9;
        auVar21 = aesenc(local_f0,auVar14);
        auVar22 = aesenc(local_e0,auVar14);
        auVar24 = aesenc(local_d0,auVar14);
        auVar26 = aesenc(local_c0,auVar14);
        auVar14 = param_4[3];
        auVar15 = aesenc(auVar15,auVar13);
        auVar16 = aesenc(auVar16,auVar13);
        auVar18 = aesenc(auVar18,auVar13);
        auVar19 = aesenc(auVar19,auVar13);
        local_120._12_4_ =
             (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000) ^
             uVar8;
        uVar7 = iVar6 + 10;
        auVar21 = aesenc(auVar21,auVar13);
        auVar22 = aesenc(auVar22,auVar13);
        auVar24 = aesenc(auVar24,auVar13);
        auVar26 = aesenc(auVar26,auVar13);
        auVar13 = param_4[4];
        auVar15 = aesenc(auVar15,auVar14);
        auVar16 = aesenc(auVar16,auVar14);
        auVar18 = aesenc(auVar18,auVar14);
        auVar19 = aesenc(auVar19,auVar14);
        local_110._12_4_ =
             (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000) ^
             uVar8;
        uVar7 = iVar6 + 0xb;
        auVar21 = aesenc(auVar21,auVar14);
        auVar22 = aesenc(auVar22,auVar14);
        auVar24 = aesenc(auVar24,auVar14);
        auVar26 = aesenc(auVar26,auVar14);
        auVar14 = param_4[5];
        auVar15 = aesenc(auVar15,auVar13);
        auVar16 = aesenc(auVar16,auVar13);
        auVar18 = aesenc(auVar18,auVar13);
        auVar19 = aesenc(auVar19,auVar13);
        local_100._12_4_ =
             (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000) ^
             uVar8;
        uVar7 = iVar6 + 0xc;
        auVar21 = aesenc(auVar21,auVar13);
        auVar22 = aesenc(auVar22,auVar13);
        auVar24 = aesenc(auVar24,auVar13);
        auVar26 = aesenc(auVar26,auVar13);
        auVar13 = param_4[6];
        auVar15 = aesenc(auVar15,auVar14);
        auVar16 = aesenc(auVar16,auVar14);
        auVar18 = aesenc(auVar18,auVar14);
        auVar19 = aesenc(auVar19,auVar14);
        local_f0._12_4_ =
             (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000) ^
             uVar8;
        uVar7 = iVar6 + 0xd;
        auVar21 = aesenc(auVar21,auVar14);
        auVar22 = aesenc(auVar22,auVar14);
        auVar24 = aesenc(auVar24,auVar14);
        auVar26 = aesenc(auVar26,auVar14);
        auVar14 = param_4[7];
        auVar15 = aesenc(auVar15,auVar13);
        auVar16 = aesenc(auVar16,auVar13);
        auVar18 = aesenc(auVar18,auVar13);
        auVar19 = aesenc(auVar19,auVar13);
        local_e0._12_4_ =
             (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000) ^
             uVar8;
        uVar7 = iVar6 + 0xe;
        auVar21 = aesenc(auVar21,auVar13);
        auVar22 = aesenc(auVar22,auVar13);
        auVar24 = aesenc(auVar24,auVar13);
        auVar26 = aesenc(auVar26,auVar13);
        auVar13 = param_4[8];
        auVar15 = aesenc(auVar15,auVar14);
        auVar16 = aesenc(auVar16,auVar14);
        auVar18 = aesenc(auVar18,auVar14);
        auVar19 = aesenc(auVar19,auVar14);
        local_d0._12_4_ =
             (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000) ^
             uVar8;
        uVar7 = iVar6 + 0xf;
        auVar21 = aesenc(auVar21,auVar14);
        auVar22 = aesenc(auVar22,auVar14);
        auVar24 = aesenc(auVar24,auVar14);
        auVar26 = aesenc(auVar26,auVar14);
        auVar14 = param_4[9];
        auVar15 = aesenc(auVar15,auVar13);
        auVar16 = aesenc(auVar16,auVar13);
        auVar18 = aesenc(auVar18,auVar13);
        auVar19 = aesenc(auVar19,auVar13);
        local_c0._12_4_ =
             (uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 * 0x1000000) ^
             uVar8;
        auVar21 = aesenc(auVar21,auVar13);
        auVar22 = aesenc(auVar22,auVar13);
        auVar24 = aesenc(auVar24,auVar13);
        auVar26 = aesenc(auVar26,auVar13);
        auVar13 = param_4[10];
        if (10 < uVar3) {
          auVar15 = aesenc(auVar15,auVar14);
          auVar16 = aesenc(auVar16,auVar14);
          auVar18 = aesenc(auVar18,auVar14);
          auVar19 = aesenc(auVar19,auVar14);
          auVar21 = aesenc(auVar21,auVar14);
          auVar22 = aesenc(auVar22,auVar14);
          auVar24 = aesenc(auVar24,auVar14);
          auVar26 = aesenc(auVar26,auVar14);
          auVar14 = param_4[0xb];
          auVar15 = aesenc(auVar15,auVar13);
          auVar16 = aesenc(auVar16,auVar13);
          auVar18 = aesenc(auVar18,auVar13);
          auVar19 = aesenc(auVar19,auVar13);
          auVar21 = aesenc(auVar21,auVar13);
          auVar22 = aesenc(auVar22,auVar13);
          auVar24 = aesenc(auVar24,auVar13);
          auVar26 = aesenc(auVar26,auVar13);
          auVar13 = param_4[0xc];
          if (uVar3 != 0xb) {
            auVar15 = aesenc(auVar15,auVar14);
            auVar16 = aesenc(auVar16,auVar14);
            auVar18 = aesenc(auVar18,auVar14);
            auVar19 = aesenc(auVar19,auVar14);
            auVar21 = aesenc(auVar21,auVar14);
            auVar22 = aesenc(auVar22,auVar14);
            auVar24 = aesenc(auVar24,auVar14);
            auVar26 = aesenc(auVar26,auVar14);
            auVar14 = param_4[0xd];
            auVar15 = aesenc(auVar15,auVar13);
            auVar16 = aesenc(auVar16,auVar13);
            auVar18 = aesenc(auVar18,auVar13);
            auVar19 = aesenc(auVar19,auVar13);
            auVar21 = aesenc(auVar21,auVar13);
            auVar22 = aesenc(auVar22,auVar13);
            auVar24 = aesenc(auVar24,auVar13);
            auVar26 = aesenc(auVar26,auVar13);
            auVar13 = param_4[0xe];
          }
        }
        auVar15 = aesenc(auVar15,auVar14);
        auVar16 = aesenc(auVar16,auVar14);
        auVar18 = aesenc(auVar18,auVar14);
        auVar19 = aesenc(auVar19,auVar14);
        auVar21 = aesenc(auVar21,auVar14);
        auVar22 = aesenc(auVar22,auVar14);
        auVar24 = aesenc(auVar24,auVar14);
        auVar26 = aesenc(auVar26,auVar14);
        param_1 = pauVar4 + 8;
        auVar15 = aesenclast(auVar15,*pauVar4 ^ auVar13);
        auVar16 = aesenclast(auVar16,pauVar4[1] ^ auVar13);
        auVar18 = aesenclast(auVar18,pauVar4[2] ^ auVar13);
        auVar19 = aesenclast(auVar19,pauVar4[3] ^ auVar13);
        auVar21 = aesenclast(auVar21,pauVar4[4] ^ auVar13);
        auVar22 = aesenclast(auVar22,pauVar4[5] ^ auVar13);
        auVar24 = aesenclast(auVar24,pauVar4[6] ^ auVar13);
        auVar14 = param_4[1];
        auVar13 = aesenclast(auVar26,pauVar4[7] ^ auVar13);
        *param_2 = auVar15;
        param_2[1] = auVar16;
        param_2[2] = auVar18;
        param_2[3] = auVar19;
        param_2[4] = auVar21;
        param_2[5] = auVar22;
        param_2[6] = auVar24;
        param_2[7] = auVar13;
        param_2 = param_2 + 8;
        pauVar4 = param_1;
      } while (7 < param_3);
      if (param_3 == 0) goto L_ctr32_done;
    }
  }
  param_4 = param_4 + 1;
  if (param_3 < 4) {
    do {
      local_130 = aesenc(local_130,auVar14);
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      local_120 = aesenc(local_120,auVar14);
      local_110 = aesenc(local_110,auVar14);
      auVar14 = *param_4;
    } while (uVar3 != 0);
    auVar13 = aesenclast(local_130,auVar14);
    auVar15 = aesenclast(local_120,auVar14);
    auVar14 = aesenclast(local_110,auVar14);
    uVar3 = *(uint *)(*param_1 + 4);
    uVar8 = *(uint *)(*param_1 + 8);
    uVar7 = *(uint *)(*param_1 + 0xc);
    *(uint *)*param_2 = auVar13._0_4_ ^ *(uint *)*param_1;
    *(uint *)(*param_2 + 4) = auVar13._4_4_ ^ uVar3;
    *(uint *)(*param_2 + 8) = auVar13._8_4_ ^ uVar8;
    *(uint *)(*param_2 + 0xc) = auVar13._12_4_ ^ uVar7;
    if (1 < param_3) {
      uVar3 = *(uint *)(param_1[1] + 4);
      uVar8 = *(uint *)(param_1[1] + 8);
      uVar7 = *(uint *)(param_1[1] + 0xc);
      *(uint *)param_2[1] = auVar15._0_4_ ^ *(uint *)param_1[1];
      *(uint *)(param_2[1] + 4) = auVar15._4_4_ ^ uVar3;
      *(uint *)(param_2[1] + 8) = auVar15._8_4_ ^ uVar8;
      *(uint *)(param_2[1] + 0xc) = auVar15._12_4_ ^ uVar7;
      if (param_3 != 2) {
        uVar3 = *(uint *)(param_1[2] + 4);
        uVar8 = *(uint *)(param_1[2] + 8);
        uVar7 = *(uint *)(param_1[2] + 0xc);
        *(uint *)param_2[2] = auVar14._0_4_ ^ *(uint *)param_1[2];
        *(uint *)(param_2[2] + 4) = auVar14._4_4_ ^ uVar3;
        *(uint *)(param_2[2] + 8) = auVar14._8_4_ ^ uVar8;
        *(uint *)(param_2[2] + 0xc) = auVar14._12_4_ ^ uVar7;
      }
    }
  }
  else if (param_3 == 4) {
    do {
      local_130 = aesenc(local_130,auVar14);
      param_4 = param_4 + 1;
      uVar3 = uVar3 - 1;
      local_120 = aesenc(local_120,auVar14);
      local_110 = aesenc(local_110,auVar14);
      local_100 = aesenc(local_100,auVar14);
      auVar14 = *param_4;
    } while (uVar3 != 0);
    auVar15 = aesenclast(local_130,auVar14);
    auVar16 = aesenclast(local_120,auVar14);
    uVar3 = *(uint *)(*param_1 + 4);
    uVar8 = *(uint *)(*param_1 + 8);
    uVar7 = *(uint *)(*param_1 + 0xc);
    uVar9 = *(uint *)param_1[1];
    uVar11 = *(uint *)(param_1[1] + 4);
    uVar1 = *(uint *)(param_1[1] + 8);
    uVar2 = *(uint *)(param_1[1] + 0xc);
    auVar18 = aesenclast(local_110,auVar14);
    auVar19 = aesenclast(local_100,auVar14);
    auVar14 = param_1[2];
    auVar13 = param_1[3];
    *(uint *)*param_2 = auVar15._0_4_ ^ *(uint *)*param_1;
    *(uint *)(*param_2 + 4) = auVar15._4_4_ ^ uVar3;
    *(uint *)(*param_2 + 8) = auVar15._8_4_ ^ uVar8;
    *(uint *)(*param_2 + 0xc) = auVar15._12_4_ ^ uVar7;
    *(uint *)param_2[1] = auVar16._0_4_ ^ uVar9;
    *(uint *)(param_2[1] + 4) = auVar16._4_4_ ^ uVar11;
    *(uint *)(param_2[1] + 8) = auVar16._8_4_ ^ uVar1;
    *(uint *)(param_2[1] + 0xc) = auVar16._12_4_ ^ uVar2;
    param_2[2] = auVar18 ^ auVar14;
    param_2[3] = auVar19 ^ auVar13;
  }
  else {
    auVar19 = aesenc(local_130,auVar14);
    auVar21 = aesenc(local_120,auVar14);
    auVar22 = aesenc(local_110,auVar14);
    auVar13 = *param_1;
    auVar24 = aesenc(local_100,auVar14);
    auVar26 = aesenc(local_f0,auVar14);
    auVar15 = param_1[1];
    auVar16 = param_1[2];
    auVar23 = aesenc(local_e0,auVar14);
    auVar25 = aesenc(local_d0,auVar14);
    L_enc_loop8_enter(param_4[1] + (uVar3 << 4));
    auVar14 = param_1[3];
    auVar18 = param_1[4];
    *param_2 = auVar19 ^ auVar13;
    param_2[1] = auVar21 ^ auVar15;
    param_2[2] = auVar22 ^ auVar16;
    param_2[3] = auVar24 ^ auVar14;
    param_2[4] = auVar26 ^ auVar18;
    if (5 < param_3) {
      uVar3 = *(uint *)(param_1[5] + 4);
      uVar8 = *(uint *)(param_1[5] + 8);
      uVar7 = *(uint *)(param_1[5] + 0xc);
      *(uint *)param_2[5] = auVar23._0_4_ ^ *(uint *)param_1[5];
      *(uint *)(param_2[5] + 4) = auVar23._4_4_ ^ uVar3;
      *(uint *)(param_2[5] + 8) = auVar23._8_4_ ^ uVar8;
      *(uint *)(param_2[5] + 0xc) = auVar23._12_4_ ^ uVar7;
      if (param_3 != 6) {
        uVar3 = *(uint *)(param_1[6] + 4);
        uVar8 = *(uint *)(param_1[6] + 8);
        uVar7 = *(uint *)(param_1[6] + 0xc);
        *(uint *)param_2[6] = auVar25._0_4_ ^ *(uint *)param_1[6];
        *(uint *)(param_2[6] + 4) = auVar25._4_4_ ^ uVar3;
        *(uint *)(param_2[6] + 8) = auVar25._8_4_ ^ uVar8;
        *(uint *)(param_2[6] + 0xc) = auVar25._12_4_ ^ uVar7;
      }
    }
  }
L_ctr32_done:
  *(undefined8 *)((longlong)register0x00000020 + -0xa8) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0xa0) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x98) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x90) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x88) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x80) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x78) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x70) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x68) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x60) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x58) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x48) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x40) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x38) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x28) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x20) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x18) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x10) = 0;
  return;
}

// aesni_xts_encrypt @ 140df5480

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void aesni_xts_encrypt(undefined1 (*param_1) [16],undefined1 (*param_2) [16],ulonglong param_3,
                      undefined1 (*param_4) [16],uint *param_5,uint *param_6)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 (*pauVar22) [16];
  ulonglong uVar23;
  ulonglong uVar24;
  bool bVar25;
  uint uVar26;
  uint uVar27;
  int iVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  int iVar36;
  undefined1 auVar30 [16];
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar42;
  uint uVar43;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  uint uVar44;
  uint uVar45;
  uint uVar47;
  uint uVar48;
  undefined1 auVar46 [16];
  uint uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  uint uVar56;
  uint uVar57;
  undefined1 auVar55 [16];
  uint uVar58;
  uint uVar60;
  uint uVar61;
  undefined1 auVar59 [16];
  uint uVar62;
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
  
  uVar17 = param_5[0x3c];
  uVar18 = *(uint *)param_4[0xf];
  auVar51 = *(undefined1 (*) [16])(param_5 + 4);
  pauVar22 = (undefined1 (*) [16])(param_5 + 8);
  auVar28._0_4_ = *param_6 ^ *param_5;
  auVar28._4_4_ = param_6[1] ^ param_5[1];
  auVar28._8_4_ = param_6[2] ^ param_5[2];
  auVar28._12_4_ = param_6[3] ^ param_5[3];
  do {
    auVar28 = aesenc(auVar28,auVar51);
    uVar17 = uVar17 - 1;
    auVar51 = *pauVar22;
    pauVar22 = pauVar22 + 1;
  } while (uVar17 != 0);
  auVar29 = aesenclast(auVar28,auVar51);
  auVar51 = *param_4;
  uVar21 = (ulonglong)(uVar18 << 4);
  iVar31 = auVar29._4_4_;
  iVar36 = auVar29._12_4_;
  auVar28 = *(undefined1 (*) [16])(param_4[1] + uVar21) ^ auVar51;
  auVar30._0_4_ = iVar36 >> 0x1f;
  auVar30._4_4_ = auVar30._0_4_;
  auVar30._8_4_ = iVar31 >> 0x1f;
  auVar30._12_4_ = auVar30._8_4_;
  auVar68._8_8_ = auVar29._8_8_ * 2;
  auVar68._0_8_ = auVar29._0_8_ * 2;
  auVar29 = auVar29 ^ auVar51;
  auVar68 = auVar68 ^ auVar30 & _L_xts_magic;
  auVar40._0_4_ = iVar36 * 2 >> 0x1f;
  auVar40._4_4_ = iVar36 * 2 >> 0x1f;
  auVar40._8_4_ = iVar31 * 2 >> 0x1f;
  auVar40._12_4_ = iVar31 * 2 >> 0x1f;
  auVar69._8_8_ = auVar68._8_8_ * 2;
  auVar69._0_8_ = auVar68._0_8_ * 2;
  auVar68 = auVar68 ^ auVar51;
  auVar69 = auVar69 ^ auVar40 & _L_xts_magic;
  auVar46._0_4_ = iVar36 * 4 >> 0x1f;
  auVar46._4_4_ = iVar36 * 4 >> 0x1f;
  auVar46._8_4_ = iVar31 * 4 >> 0x1f;
  auVar46._12_4_ = iVar31 * 4 >> 0x1f;
  auVar70._8_8_ = auVar69._8_8_ * 2;
  auVar70._0_8_ = auVar69._0_8_ * 2;
  auVar69 = auVar69 ^ auVar51;
  auVar70 = auVar70 ^ auVar46 & _L_xts_magic;
  auVar50._0_4_ = iVar36 * 8 >> 0x1f;
  auVar50._4_4_ = iVar36 * 8 >> 0x1f;
  auVar50._8_4_ = iVar31 * 8 >> 0x1f;
  auVar50._12_4_ = iVar31 * 8 >> 0x1f;
  auVar71._8_8_ = auVar70._8_8_ * 2;
  auVar71._0_8_ = auVar70._0_8_ * 2;
  auVar70 = auVar70 ^ auVar51;
  auVar71 = auVar71 ^ auVar50 & _L_xts_magic;
  auVar41._0_4_ = (iVar36 << 4) >> 0x1f;
  auVar41._4_4_ = (iVar36 << 4) >> 0x1f;
  auVar41._8_4_ = (iVar31 << 4) >> 0x1f;
  auVar41._12_4_ = (iVar31 << 4) >> 0x1f;
  auVar72._8_8_ = auVar71._8_8_ * 2;
  auVar72._0_8_ = auVar71._0_8_ * 2;
  auVar71 = auVar71 ^ auVar51;
  auVar72 = auVar72 ^ auVar41 & _L_xts_magic;
  uVar23 = (param_3 & 0xfffffffffffffff0) - 0x60;
  if (0x5f < (param_3 & 0xfffffffffffffff0)) {
    auVar41 = param_4[1];
    pauVar22 = param_2;
    do {
      auVar30 = aesenc(*param_1 ^ auVar29,auVar41);
      auVar40 = aesenc(param_1[1] ^ auVar68,auVar41);
      pauVar1 = param_1 + 4;
      auVar46 = aesenc(param_1[2] ^ auVar69,auVar41);
      pauVar2 = param_1 + 5;
      auVar54 = auVar51 ^ auVar72;
      auVar50 = aesenc(param_1[3] ^ auVar70,auVar41);
      auVar51 = param_4[2];
      param_1 = param_1 + 6;
      auVar55 = auVar29 ^ auVar28;
      auVar52 = aesenc(*pauVar1 ^ auVar71,auVar41);
      auVar59 = auVar68 ^ auVar28;
      auVar53 = aesenc(*pauVar2 ^ auVar54,auVar41);
      auVar29 = param_4[3];
      auVar63 = auVar69 ^ auVar28;
      auVar69 = aesenc(auVar30,auVar51);
      auVar64 = auVar70 ^ auVar28;
      auVar41 = aesenc(auVar40,auVar51);
      auVar65 = auVar71 ^ auVar28;
      auVar68 = aesenc(auVar46,auVar51);
      auVar70 = aesenc(auVar50,auVar51);
      auVar30 = aesenc(auVar52,auVar51);
      auVar40 = aesenc(auVar53,auVar51);
      auVar51 = param_4[4];
      iVar31 = auVar72._4_4_;
      iVar36 = auVar72._12_4_;
      lVar19 = 0x70 - uVar21;
      do {
        auVar71 = aesenc(auVar69,auVar29);
        auVar41 = aesenc(auVar41,auVar29);
        auVar68 = aesenc(auVar68,auVar29);
        auVar70 = aesenc(auVar70,auVar29);
        auVar30 = aesenc(auVar30,auVar29);
        auVar40 = aesenc(auVar40,auVar29);
        auVar29 = *(undefined1 (*) [16])(param_4[-2] + lVar19 + uVar21);
        lVar20 = lVar19 + 0x20;
        auVar69 = aesenc(auVar71,auVar51);
        auVar41 = aesenc(auVar41,auVar51);
        auVar68 = aesenc(auVar68,auVar51);
        auVar70 = aesenc(auVar70,auVar51);
        auVar30 = aesenc(auVar30,auVar51);
        auVar40 = aesenc(auVar40,auVar51);
        auVar51 = *(undefined1 (*) [16])(param_4[-1] + uVar21 + lVar19);
        lVar19 = lVar20;
      } while (lVar20 != 0);
      auVar46 = aesenc(auVar69,auVar29);
      auVar73._8_8_ = auVar72._8_8_ * 2;
      auVar73._0_8_ = auVar72._0_8_ * 2;
      auVar52._0_4_ = iVar36 >> 0x1f;
      auVar52._4_4_ = auVar52._0_4_;
      auVar52._8_4_ = iVar31 >> 0x1f;
      auVar52._12_4_ = auVar52._8_4_;
      auVar50 = aesenc(auVar41,auVar29);
      auVar71 = *param_4;
      auVar68 = aesenc(auVar68,auVar29);
      auVar70 = aesenc(auVar70,auVar29);
      auVar72 = aesenc(auVar30,auVar29);
      auVar73 = auVar73 ^ auVar52 & _L_xts_magic;
      auVar52 = aesenc(auVar40,auVar29);
      auVar69 = *(undefined1 (*) [16])(param_4[-2] + uVar21);
      auVar41 = aesenc(auVar46,auVar51);
      auVar29 = auVar71 ^ auVar73;
      auVar30 = aesenc(auVar50,auVar51);
      auVar53._0_4_ = iVar36 * 2 >> 0x1f;
      auVar53._4_4_ = iVar36 * 2 >> 0x1f;
      auVar53._8_4_ = iVar31 * 2 >> 0x1f;
      auVar53._12_4_ = iVar31 * 2 >> 0x1f;
      auVar74._8_8_ = auVar73._8_8_ * 2;
      auVar74._0_8_ = auVar73._0_8_ * 2;
      auVar40 = aesenc(auVar68,auVar51);
      auVar50 = aesenc(auVar70,auVar51);
      auVar72 = aesenc(auVar72,auVar51);
      auVar74 = auVar74 ^ auVar53 & _L_xts_magic;
      auVar52 = aesenc(auVar52,auVar51);
      auVar51 = *(undefined1 (*) [16])(param_4[-1] + uVar21);
      auVar70 = aesenc(auVar41,auVar69);
      auVar68 = auVar71 ^ auVar74;
      auVar66._0_4_ = iVar36 * 4 >> 0x1f;
      auVar66._4_4_ = iVar36 * 4 >> 0x1f;
      auVar66._8_4_ = iVar31 * 4 >> 0x1f;
      auVar66._12_4_ = iVar31 * 4 >> 0x1f;
      auVar30 = aesenc(auVar30,auVar69);
      auVar75._8_8_ = auVar74._8_8_ * 2;
      auVar75._0_8_ = auVar74._0_8_ * 2;
      auVar46 = aesenc(auVar40,auVar69);
      auVar50 = aesenc(auVar50,auVar69);
      auVar75 = auVar75 ^ auVar66 & _L_xts_magic;
      auVar72 = aesenc(auVar72,auVar69);
      auVar52 = aesenc(auVar52,auVar69);
      auVar41 = *(undefined1 (*) [16])(*param_4 + uVar21);
      auVar70 = aesenc(auVar70,auVar51);
      auVar69 = auVar71 ^ auVar75;
      auVar67._0_4_ = iVar36 * 8 >> 0x1f;
      auVar67._4_4_ = iVar36 * 8 >> 0x1f;
      auVar67._8_4_ = iVar31 * 8 >> 0x1f;
      auVar67._12_4_ = iVar31 * 8 >> 0x1f;
      auVar40 = aesenc(auVar30,auVar51);
      auVar76._8_8_ = auVar75._8_8_ * 2;
      auVar76._0_8_ = auVar75._0_8_ * 2;
      auVar46 = aesenc(auVar46,auVar51);
      auVar50 = aesenc(auVar50,auVar51);
      auVar72 = aesenc(auVar72,auVar51);
      auVar76 = auVar76 ^ auVar67 & _L_xts_magic;
      auVar52 = aesenc(auVar52,auVar51);
      auVar30 = aesenc(auVar70,auVar41);
      auVar70 = auVar71 ^ auVar76;
      auVar51._0_4_ = iVar36 * 0x10 >> 0x1f;
      auVar51._4_4_ = iVar36 * 0x10 >> 0x1f;
      auVar51._8_4_ = iVar31 * 0x10 >> 0x1f;
      auVar51._12_4_ = iVar31 * 0x10 >> 0x1f;
      auVar40 = aesenc(auVar40,auVar41);
      auVar77._8_8_ = auVar76._8_8_ * 2;
      auVar77._0_8_ = auVar76._0_8_ * 2;
      auVar46 = aesenc(auVar46,auVar41);
      auVar50 = aesenc(auVar50,auVar41);
      auVar77 = auVar77 ^ auVar51 & _L_xts_magic;
      auVar51 = *param_4;
      auVar72 = aesenc(auVar72,auVar41);
      auVar53 = aesenc(auVar52,auVar41);
      auVar41 = param_4[1];
      auVar71 = auVar71 ^ auVar77;
      auVar30 = aesenclast(auVar30,auVar55);
      auVar55._0_4_ = (iVar36 << 5) >> 0x1f;
      auVar55._4_4_ = (iVar36 << 5) >> 0x1f;
      auVar55._8_4_ = (iVar31 << 5) >> 0x1f;
      auVar55._12_4_ = (iVar31 << 5) >> 0x1f;
      auVar78._8_8_ = auVar77._8_8_ * 2;
      auVar78._0_8_ = auVar77._0_8_ * 2;
      auVar40 = aesenclast(auVar40,auVar59);
      auVar46 = aesenclast(auVar46,auVar63);
      auVar50 = aesenclast(auVar50,auVar64);
      auVar52 = aesenclast(auVar72,auVar65);
      auVar53 = aesenclast(auVar53,auVar54 ^ auVar28);
      auVar72 = auVar78 ^ auVar55 & _L_xts_magic;
      param_2 = pauVar22 + 6;
      *pauVar22 = auVar30;
      pauVar22[1] = auVar40;
      pauVar22[2] = auVar46;
      pauVar22[3] = auVar50;
      pauVar22[4] = auVar52;
      pauVar22[5] = auVar53;
      bVar25 = 0x5f < uVar23;
      uVar23 = uVar23 - 0x60;
      pauVar22 = param_2;
    } while (bVar25);
    uVar18 = 0x70U - (int)(0x70 - uVar21) >> 4;
  }
  uVar21 = (ulonglong)uVar18;
  auVar29 = auVar29 ^ auVar51;
  uVar24 = uVar23 + 0x60;
  auVar28 = auVar29;
  if (uVar23 != 0xffffffffffffffa0) {
    auVar28 = auVar68 ^ auVar51;
    uVar17 = auVar29._0_4_;
    uVar56 = auVar29._4_4_;
    uVar57 = auVar29._8_4_;
    uVar58 = auVar29._12_4_;
    if (uVar24 < 0x20) {
      puVar4 = *param_1;
      puVar5 = *param_1;
      puVar6 = *param_1;
      puVar7 = *param_1;
      param_1 = param_1 + 1;
      auVar51 = param_4[1];
      pauVar22 = param_4 + 2;
      auVar29._0_4_ = *(uint *)puVar4 ^ uVar17 ^ *(uint *)*param_4;
      auVar29._4_4_ = *(uint *)(puVar5 + 4) ^ uVar56 ^ *(uint *)(*param_4 + 4);
      auVar29._8_4_ = *(uint *)(puVar6 + 8) ^ uVar57 ^ *(uint *)(*param_4 + 8);
      auVar29._12_4_ = *(uint *)(puVar7 + 0xc) ^ uVar58 ^ *(uint *)(*param_4 + 0xc);
      do {
        auVar29 = aesenc(auVar29,auVar51);
        uVar18 = uVar18 - 1;
        auVar51 = *pauVar22;
        pauVar22 = pauVar22 + 1;
      } while (uVar18 != 0);
      auVar51 = aesenclast(auVar29,auVar51);
      *(uint *)*param_2 = auVar51._0_4_ ^ uVar17;
      *(uint *)(*param_2 + 4) = auVar51._4_4_ ^ uVar56;
      *(uint *)(*param_2 + 8) = auVar51._8_4_ ^ uVar57;
      *(uint *)(*param_2 + 0xc) = auVar51._12_4_ ^ uVar58;
      param_2 = param_2 + 1;
    }
    else {
      auVar69 = auVar69 ^ auVar51;
      uVar18 = auVar28._0_4_;
      uVar60 = auVar28._4_4_;
      uVar61 = auVar28._8_4_;
      uVar62 = auVar28._12_4_;
      if (uVar24 == 0x20) {
        puVar4 = *param_1;
        puVar5 = *param_1;
        puVar6 = *param_1;
        puVar7 = *param_1;
        pauVar22 = param_1 + 1;
        pauVar1 = param_1 + 1;
        pauVar2 = param_1 + 1;
        pauVar8 = param_1 + 1;
        param_1 = param_1 + 2;
        uVar26 = *(uint *)puVar4 ^ uVar17;
        uVar32 = *(uint *)(puVar5 + 4) ^ uVar56;
        uVar34 = *(uint *)(puVar6 + 8) ^ uVar57;
        uVar37 = *(uint *)(puVar7 + 0xc) ^ uVar58;
        uVar27 = *(uint *)*pauVar22 ^ uVar18;
        uVar33 = *(uint *)(*pauVar1 + 4) ^ uVar60;
        uVar35 = *(uint *)(*pauVar2 + 8) ^ uVar61;
        uVar38 = *(uint *)(*pauVar8 + 0xc) ^ uVar62;
        _aesni_encrypt2();
        *(uint *)*param_2 = uVar26 ^ uVar17;
        *(uint *)(*param_2 + 4) = uVar32 ^ uVar56;
        *(uint *)(*param_2 + 8) = uVar34 ^ uVar57;
        *(uint *)(*param_2 + 0xc) = uVar37 ^ uVar58;
        *(uint *)param_2[1] = uVar27 ^ uVar18;
        *(uint *)(param_2[1] + 4) = uVar33 ^ uVar60;
        *(uint *)(param_2[1] + 8) = uVar35 ^ uVar61;
        *(uint *)(param_2[1] + 0xc) = uVar38 ^ uVar62;
        param_2 = param_2 + 2;
        auVar28 = auVar69;
      }
      else {
        auVar70 = auVar70 ^ auVar51;
        uVar26 = auVar69._0_4_;
        uVar32 = auVar69._4_4_;
        uVar34 = auVar69._8_4_;
        uVar37 = auVar69._12_4_;
        if (uVar24 < 0x40) {
          puVar4 = *param_1;
          puVar5 = *param_1;
          puVar6 = *param_1;
          puVar7 = *param_1;
          pauVar22 = param_1 + 1;
          pauVar2 = param_1 + 1;
          pauVar8 = param_1 + 1;
          pauVar9 = param_1 + 1;
          pauVar1 = param_1 + 2;
          pauVar10 = param_1 + 2;
          pauVar11 = param_1 + 2;
          pauVar12 = param_1 + 2;
          param_1 = param_1 + 3;
          uVar27 = *(uint *)puVar4 ^ uVar17;
          uVar33 = *(uint *)(puVar5 + 4) ^ uVar56;
          uVar35 = *(uint *)(puVar6 + 8) ^ uVar57;
          uVar38 = *(uint *)(puVar7 + 0xc) ^ uVar58;
          uVar39 = *(uint *)*pauVar22 ^ uVar18;
          uVar42 = *(uint *)(*pauVar2 + 4) ^ uVar60;
          uVar43 = *(uint *)(*pauVar8 + 8) ^ uVar61;
          uVar44 = *(uint *)(*pauVar9 + 0xc) ^ uVar62;
          uVar45 = *(uint *)*pauVar1 ^ uVar26;
          uVar47 = *(uint *)(*pauVar10 + 4) ^ uVar32;
          uVar48 = *(uint *)(*pauVar11 + 8) ^ uVar34;
          uVar49 = *(uint *)(*pauVar12 + 0xc) ^ uVar37;
          _aesni_encrypt3();
          *(uint *)*param_2 = uVar27 ^ uVar17;
          *(uint *)(*param_2 + 4) = uVar33 ^ uVar56;
          *(uint *)(*param_2 + 8) = uVar35 ^ uVar57;
          *(uint *)(*param_2 + 0xc) = uVar38 ^ uVar58;
          *(uint *)param_2[1] = uVar39 ^ uVar18;
          *(uint *)(param_2[1] + 4) = uVar42 ^ uVar60;
          *(uint *)(param_2[1] + 8) = uVar43 ^ uVar61;
          *(uint *)(param_2[1] + 0xc) = uVar44 ^ uVar62;
          *(uint *)param_2[2] = uVar45 ^ uVar26;
          *(uint *)(param_2[2] + 4) = uVar47 ^ uVar32;
          *(uint *)(param_2[2] + 8) = uVar48 ^ uVar34;
          *(uint *)(param_2[2] + 0xc) = uVar49 ^ uVar37;
          param_2 = param_2 + 3;
          auVar28 = auVar70;
        }
        else {
          auVar71 = auVar71 ^ auVar51;
          if (uVar24 == 0x40) {
            pauVar22 = param_1 + 1;
            pauVar8 = param_1 + 1;
            pauVar9 = param_1 + 1;
            pauVar10 = param_1 + 1;
            pauVar1 = param_1 + 2;
            pauVar11 = param_1 + 2;
            pauVar12 = param_1 + 2;
            pauVar13 = param_1 + 2;
            auVar54._0_4_ = *(uint *)*param_1 ^ uVar17;
            auVar54._4_4_ = *(uint *)(*param_1 + 4) ^ uVar56;
            auVar54._8_4_ = *(uint *)(*param_1 + 8) ^ uVar57;
            auVar54._12_4_ = *(uint *)(*param_1 + 0xc) ^ uVar58;
            pauVar2 = param_1 + 3;
            pauVar14 = param_1 + 3;
            pauVar15 = param_1 + 3;
            pauVar16 = param_1 + 3;
            param_1 = param_1 + 4;
            auVar59._0_4_ = *(uint *)*pauVar22 ^ uVar18;
            auVar59._4_4_ = *(uint *)(*pauVar8 + 4) ^ uVar60;
            auVar59._8_4_ = *(uint *)(*pauVar9 + 8) ^ uVar61;
            auVar59._12_4_ = *(uint *)(*pauVar10 + 0xc) ^ uVar62;
            auVar63._0_4_ = *(uint *)*pauVar1 ^ uVar26;
            auVar63._4_4_ = *(uint *)(*pauVar11 + 4) ^ uVar32;
            auVar63._8_4_ = *(uint *)(*pauVar12 + 8) ^ uVar34;
            auVar63._12_4_ = *(uint *)(*pauVar13 + 0xc) ^ uVar37;
            auVar64._0_4_ = *(uint *)*pauVar2 ^ auVar70._0_4_;
            auVar64._4_4_ = *(uint *)(*pauVar14 + 4) ^ auVar70._4_4_;
            auVar64._8_4_ = *(uint *)(*pauVar15 + 8) ^ auVar70._8_4_;
            auVar64._12_4_ = *(uint *)(*pauVar16 + 0xc) ^ auVar70._12_4_;
            _aesni_encrypt4();
            *param_2 = auVar54 ^ auVar29;
            param_2[1] = auVar59 ^ auVar28;
            param_2[2] = auVar63 ^ auVar69;
            param_2[3] = auVar64 ^ auVar70;
            param_2 = param_2 + 4;
            auVar28 = auVar71;
          }
          else {
            pauVar22 = param_1 + 2;
            auVar29 = *param_1 ^ auVar29;
            pauVar1 = param_1 + 3;
            auVar28 = param_1[1] ^ auVar28;
            pauVar2 = param_1 + 4;
            param_1 = param_1 + 5;
            auVar69 = *pauVar22 ^ auVar69;
            auVar51 = *pauVar1 ^ auVar70;
            auVar41 = *pauVar2 ^ auVar71;
            _aesni_encrypt6();
            *(uint *)*param_2 = auVar29._0_4_ ^ uVar17;
            *(uint *)(*param_2 + 4) = auVar29._4_4_ ^ uVar56;
            *(uint *)(*param_2 + 8) = auVar29._8_4_ ^ uVar57;
            *(uint *)(*param_2 + 0xc) = auVar29._12_4_ ^ uVar58;
            *(uint *)param_2[1] = auVar28._0_4_ ^ uVar18;
            *(uint *)(param_2[1] + 4) = auVar28._4_4_ ^ uVar60;
            *(uint *)(param_2[1] + 8) = auVar28._8_4_ ^ uVar61;
            *(uint *)(param_2[1] + 0xc) = auVar28._12_4_ ^ uVar62;
            *(uint *)param_2[2] = auVar69._0_4_ ^ uVar26;
            *(uint *)(param_2[2] + 4) = auVar69._4_4_ ^ uVar32;
            *(uint *)(param_2[2] + 8) = auVar69._8_4_ ^ uVar34;
            *(uint *)(param_2[2] + 0xc) = auVar69._12_4_ ^ uVar37;
            *(uint *)param_2[3] = auVar51._0_4_ ^ auVar70._0_4_;
            *(uint *)(param_2[3] + 4) = auVar51._4_4_ ^ auVar70._4_4_;
            *(uint *)(param_2[3] + 8) = auVar51._8_4_ ^ auVar70._8_4_;
            *(uint *)(param_2[3] + 0xc) = auVar51._12_4_ ^ auVar70._12_4_;
            *(uint *)param_2[4] = auVar41._0_4_ ^ auVar71._0_4_;
            *(uint *)(param_2[4] + 4) = auVar41._4_4_ ^ auVar71._4_4_;
            *(uint *)(param_2[4] + 8) = auVar41._8_4_ ^ auVar71._8_4_;
            *(uint *)(param_2[4] + 0xc) = auVar41._12_4_ ^ auVar71._12_4_;
            param_2 = param_2 + 5;
            auVar28 = auVar72;
          }
        }
      }
    }
  }
  param_3 = param_3 & 0xf;
  uVar23 = param_3;
  if (param_3 != 0) {
    do {
      puVar4 = *param_1;
      uVar3 = param_2[-1][0];
      param_1 = (undefined1 (*) [16])(*param_1 + 1);
      param_2[-1][0] = *puVar4;
      (*param_2)[0] = uVar3;
      param_2 = (undefined1 (*) [16])(*param_2 + 1);
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
    uVar21 = uVar21 & 0xffffffff;
    auVar51 = param_4[1];
    pauVar22 = param_4 + 2;
    auVar65._0_4_ =
         *(uint *)((longlong)param_2 + (-0x10 - param_3)) ^ auVar28._0_4_ ^ *(uint *)*param_4;
    auVar65._4_4_ =
         *(uint *)((longlong)param_2 + (-0xc - param_3)) ^ auVar28._4_4_ ^ *(uint *)(*param_4 + 4);
    auVar65._8_4_ =
         *(uint *)((longlong)param_2 + (-8 - param_3)) ^ auVar28._8_4_ ^ *(uint *)(*param_4 + 8);
    auVar65._12_4_ =
         *(uint *)((longlong)param_2 + (-4 - param_3)) ^ auVar28._12_4_ ^ *(uint *)(*param_4 + 0xc);
    do {
      auVar65 = aesenc(auVar65,auVar51);
      uVar17 = (int)uVar21 - 1;
      uVar21 = (ulonglong)uVar17;
      auVar51 = *pauVar22;
      pauVar22 = pauVar22 + 1;
    } while (uVar17 != 0);
    auVar51 = aesenclast(auVar65,auVar51);
    *(uint *)((longlong)param_2 + (-0x10 - param_3)) = auVar51._0_4_ ^ auVar28._0_4_;
    *(uint *)((longlong)param_2 + (-0xc - param_3)) = auVar51._4_4_ ^ auVar28._4_4_;
    *(uint *)((longlong)param_2 + (-8 - param_3)) = auVar51._8_4_ ^ auVar28._8_4_;
    *(uint *)((longlong)param_2 + (-4 - param_3)) = auVar51._12_4_ ^ auVar28._12_4_;
  }
  *(undefined8 *)((longlong)register0x00000020 + -0xa8) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0xa0) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x98) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x90) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x88) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x80) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x78) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x70) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x68) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x60) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x58) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x48) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x40) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x38) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x28) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x20) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x18) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x10) = 0;
  return;
}

// L$SEH_begin_aesni_xts_encrypt @ 140df548d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L_SEH_begin_aesni_xts_encrypt
               (undefined1 (*param_1) [16],undefined1 (*param_2) [16],ulonglong param_3,
               undefined1 (*param_4) [16],uint *param_5,uint *param_6)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 (*pauVar22) [16];
  ulonglong uVar23;
  ulonglong uVar24;
  bool bVar25;
  uint uVar26;
  uint uVar27;
  int iVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  int iVar36;
  undefined1 auVar30 [16];
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar42;
  uint uVar43;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  uint uVar44;
  uint uVar45;
  uint uVar47;
  uint uVar48;
  undefined1 auVar46 [16];
  uint uVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  uint uVar56;
  uint uVar57;
  undefined1 auVar55 [16];
  uint uVar58;
  uint uVar60;
  uint uVar61;
  undefined1 auVar59 [16];
  uint uVar62;
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
  
  uVar17 = param_5[0x3c];
  uVar18 = *(uint *)param_4[0xf];
  auVar51 = *(undefined1 (*) [16])(param_5 + 4);
  pauVar22 = (undefined1 (*) [16])(param_5 + 8);
  auVar28._0_4_ = *param_6 ^ *param_5;
  auVar28._4_4_ = param_6[1] ^ param_5[1];
  auVar28._8_4_ = param_6[2] ^ param_5[2];
  auVar28._12_4_ = param_6[3] ^ param_5[3];
  do {
    auVar28 = aesenc(auVar28,auVar51);
    uVar17 = uVar17 - 1;
    auVar51 = *pauVar22;
    pauVar22 = pauVar22 + 1;
  } while (uVar17 != 0);
  auVar29 = aesenclast(auVar28,auVar51);
  auVar51 = *param_4;
  uVar21 = (ulonglong)(uVar18 << 4);
  iVar31 = auVar29._4_4_;
  iVar36 = auVar29._12_4_;
  auVar28 = *(undefined1 (*) [16])(param_4[1] + uVar21) ^ auVar51;
  auVar30._0_4_ = iVar36 >> 0x1f;
  auVar30._4_4_ = auVar30._0_4_;
  auVar30._8_4_ = iVar31 >> 0x1f;
  auVar30._12_4_ = auVar30._8_4_;
  auVar68._8_8_ = auVar29._8_8_ * 2;
  auVar68._0_8_ = auVar29._0_8_ * 2;
  auVar29 = auVar29 ^ auVar51;
  auVar68 = auVar68 ^ auVar30 & _L_xts_magic;
  auVar40._0_4_ = iVar36 * 2 >> 0x1f;
  auVar40._4_4_ = iVar36 * 2 >> 0x1f;
  auVar40._8_4_ = iVar31 * 2 >> 0x1f;
  auVar40._12_4_ = iVar31 * 2 >> 0x1f;
  auVar69._8_8_ = auVar68._8_8_ * 2;
  auVar69._0_8_ = auVar68._0_8_ * 2;
  auVar68 = auVar68 ^ auVar51;
  auVar69 = auVar69 ^ auVar40 & _L_xts_magic;
  auVar46._0_4_ = iVar36 * 4 >> 0x1f;
  auVar46._4_4_ = iVar36 * 4 >> 0x1f;
  auVar46._8_4_ = iVar31 * 4 >> 0x1f;
  auVar46._12_4_ = iVar31 * 4 >> 0x1f;
  auVar70._8_8_ = auVar69._8_8_ * 2;
  auVar70._0_8_ = auVar69._0_8_ * 2;
  auVar69 = auVar69 ^ auVar51;
  auVar70 = auVar70 ^ auVar46 & _L_xts_magic;
  auVar50._0_4_ = iVar36 * 8 >> 0x1f;
  auVar50._4_4_ = iVar36 * 8 >> 0x1f;
  auVar50._8_4_ = iVar31 * 8 >> 0x1f;
  auVar50._12_4_ = iVar31 * 8 >> 0x1f;
  auVar71._8_8_ = auVar70._8_8_ * 2;
  auVar71._0_8_ = auVar70._0_8_ * 2;
  auVar70 = auVar70 ^ auVar51;
  auVar71 = auVar71 ^ auVar50 & _L_xts_magic;
  auVar41._0_4_ = (iVar36 << 4) >> 0x1f;
  auVar41._4_4_ = (iVar36 << 4) >> 0x1f;
  auVar41._8_4_ = (iVar31 << 4) >> 0x1f;
  auVar41._12_4_ = (iVar31 << 4) >> 0x1f;
  auVar72._8_8_ = auVar71._8_8_ * 2;
  auVar72._0_8_ = auVar71._0_8_ * 2;
  auVar71 = auVar71 ^ auVar51;
  auVar72 = auVar72 ^ auVar41 & _L_xts_magic;
  uVar23 = (param_3 & 0xfffffffffffffff0) - 0x60;
  if (0x5f < (param_3 & 0xfffffffffffffff0)) {
    auVar41 = param_4[1];
    pauVar22 = param_2;
    do {
      auVar30 = aesenc(*param_1 ^ auVar29,auVar41);
      auVar40 = aesenc(param_1[1] ^ auVar68,auVar41);
      pauVar1 = param_1 + 4;
      auVar46 = aesenc(param_1[2] ^ auVar69,auVar41);
      pauVar2 = param_1 + 5;
      auVar54 = auVar51 ^ auVar72;
      auVar50 = aesenc(param_1[3] ^ auVar70,auVar41);
      auVar51 = param_4[2];
      param_1 = param_1 + 6;
      auVar55 = auVar29 ^ auVar28;
      auVar52 = aesenc(*pauVar1 ^ auVar71,auVar41);
      auVar59 = auVar68 ^ auVar28;
      auVar53 = aesenc(*pauVar2 ^ auVar54,auVar41);
      auVar29 = param_4[3];
      auVar63 = auVar69 ^ auVar28;
      auVar69 = aesenc(auVar30,auVar51);
      auVar64 = auVar70 ^ auVar28;
      auVar41 = aesenc(auVar40,auVar51);
      auVar65 = auVar71 ^ auVar28;
      auVar68 = aesenc(auVar46,auVar51);
      auVar70 = aesenc(auVar50,auVar51);
      auVar30 = aesenc(auVar52,auVar51);
      auVar40 = aesenc(auVar53,auVar51);
      auVar51 = param_4[4];
      iVar31 = auVar72._4_4_;
      iVar36 = auVar72._12_4_;
      lVar19 = 0x70 - uVar21;
      do {
        auVar71 = aesenc(auVar69,auVar29);
        auVar41 = aesenc(auVar41,auVar29);
        auVar68 = aesenc(auVar68,auVar29);
        auVar70 = aesenc(auVar70,auVar29);
        auVar30 = aesenc(auVar30,auVar29);
        auVar40 = aesenc(auVar40,auVar29);
        auVar29 = *(undefined1 (*) [16])(param_4[-2] + lVar19 + uVar21);
        lVar20 = lVar19 + 0x20;
        auVar69 = aesenc(auVar71,auVar51);
        auVar41 = aesenc(auVar41,auVar51);
        auVar68 = aesenc(auVar68,auVar51);
        auVar70 = aesenc(auVar70,auVar51);
        auVar30 = aesenc(auVar30,auVar51);
        auVar40 = aesenc(auVar40,auVar51);
        auVar51 = *(undefined1 (*) [16])(param_4[-1] + uVar21 + lVar19);
        lVar19 = lVar20;
      } while (lVar20 != 0);
      auVar46 = aesenc(auVar69,auVar29);
      auVar73._8_8_ = auVar72._8_8_ * 2;
      auVar73._0_8_ = auVar72._0_8_ * 2;
      auVar52._0_4_ = iVar36 >> 0x1f;
      auVar52._4_4_ = auVar52._0_4_;
      auVar52._8_4_ = iVar31 >> 0x1f;
      auVar52._12_4_ = auVar52._8_4_;
      auVar50 = aesenc(auVar41,auVar29);
      auVar71 = *param_4;
      auVar68 = aesenc(auVar68,auVar29);
      auVar70 = aesenc(auVar70,auVar29);
      auVar72 = aesenc(auVar30,auVar29);
      auVar73 = auVar73 ^ auVar52 & _L_xts_magic;
      auVar52 = aesenc(auVar40,auVar29);
      auVar69 = *(undefined1 (*) [16])(param_4[-2] + uVar21);
      auVar41 = aesenc(auVar46,auVar51);
      auVar29 = auVar71 ^ auVar73;
      auVar30 = aesenc(auVar50,auVar51);
      auVar53._0_4_ = iVar36 * 2 >> 0x1f;
      auVar53._4_4_ = iVar36 * 2 >> 0x1f;
      auVar53._8_4_ = iVar31 * 2 >> 0x1f;
      auVar53._12_4_ = iVar31 * 2 >> 0x1f;
      auVar74._8_8_ = auVar73._8_8_ * 2;
      auVar74._0_8_ = auVar73._0_8_ * 2;
      auVar40 = aesenc(auVar68,auVar51);
      auVar50 = aesenc(auVar70,auVar51);
      auVar72 = aesenc(auVar72,auVar51);
      auVar74 = auVar74 ^ auVar53 & _L_xts_magic;
      auVar52 = aesenc(auVar52,auVar51);
      auVar51 = *(undefined1 (*) [16])(param_4[-1] + uVar21);
      auVar70 = aesenc(auVar41,auVar69);
      auVar68 = auVar71 ^ auVar74;
      auVar66._0_4_ = iVar36 * 4 >> 0x1f;
      auVar66._4_4_ = iVar36 * 4 >> 0x1f;
      auVar66._8_4_ = iVar31 * 4 >> 0x1f;
      auVar66._12_4_ = iVar31 * 4 >> 0x1f;
      auVar30 = aesenc(auVar30,auVar69);
      auVar75._8_8_ = auVar74._8_8_ * 2;
      auVar75._0_8_ = auVar74._0_8_ * 2;
      auVar46 = aesenc(auVar40,auVar69);
      auVar50 = aesenc(auVar50,auVar69);
      auVar75 = auVar75 ^ auVar66 & _L_xts_magic;
      auVar72 = aesenc(auVar72,auVar69);
      auVar52 = aesenc(auVar52,auVar69);
      auVar41 = *(undefined1 (*) [16])(*param_4 + uVar21);
      auVar70 = aesenc(auVar70,auVar51);
      auVar69 = auVar71 ^ auVar75;
      auVar67._0_4_ = iVar36 * 8 >> 0x1f;
      auVar67._4_4_ = iVar36 * 8 >> 0x1f;
      auVar67._8_4_ = iVar31 * 8 >> 0x1f;
      auVar67._12_4_ = iVar31 * 8 >> 0x1f;
      auVar40 = aesenc(auVar30,auVar51);
      auVar76._8_8_ = auVar75._8_8_ * 2;
      auVar76._0_8_ = auVar75._0_8_ * 2;
      auVar46 = aesenc(auVar46,auVar51);
      auVar50 = aesenc(auVar50,auVar51);
      auVar72 = aesenc(auVar72,auVar51);
      auVar76 = auVar76 ^ auVar67 & _L_xts_magic;
      auVar52 = aesenc(auVar52,auVar51);
      auVar30 = aesenc(auVar70,auVar41);
      auVar70 = auVar71 ^ auVar76;
      auVar51._0_4_ = iVar36 * 0x10 >> 0x1f;
      auVar51._4_4_ = iVar36 * 0x10 >> 0x1f;
      auVar51._8_4_ = iVar31 * 0x10 >> 0x1f;
      auVar51._12_4_ = iVar31 * 0x10 >> 0x1f;
      auVar40 = aesenc(auVar40,auVar41);
      auVar77._8_8_ = auVar76._8_8_ * 2;
      auVar77._0_8_ = auVar76._0_8_ * 2;
      auVar46 = aesenc(auVar46,auVar41);
      auVar50 = aesenc(auVar50,auVar41);
      auVar77 = auVar77 ^ auVar51 & _L_xts_magic;
      auVar51 = *param_4;
      auVar72 = aesenc(auVar72,auVar41);
      auVar53 = aesenc(auVar52,auVar41);
      auVar41 = param_4[1];
      auVar71 = auVar71 ^ auVar77;
      auVar30 = aesenclast(auVar30,auVar55);
      auVar55._0_4_ = (iVar36 << 5) >> 0x1f;
      auVar55._4_4_ = (iVar36 << 5) >> 0x1f;
      auVar55._8_4_ = (iVar31 << 5) >> 0x1f;
      auVar55._12_4_ = (iVar31 << 5) >> 0x1f;
      auVar78._8_8_ = auVar77._8_8_ * 2;
      auVar78._0_8_ = auVar77._0_8_ * 2;
      auVar40 = aesenclast(auVar40,auVar59);
      auVar46 = aesenclast(auVar46,auVar63);
      auVar50 = aesenclast(auVar50,auVar64);
      auVar52 = aesenclast(auVar72,auVar65);
      auVar53 = aesenclast(auVar53,auVar54 ^ auVar28);
      auVar72 = auVar78 ^ auVar55 & _L_xts_magic;
      param_2 = pauVar22 + 6;
      *pauVar22 = auVar30;
      pauVar22[1] = auVar40;
      pauVar22[2] = auVar46;
      pauVar22[3] = auVar50;
      pauVar22[4] = auVar52;
      pauVar22[5] = auVar53;
      bVar25 = 0x5f < uVar23;
      uVar23 = uVar23 - 0x60;
      pauVar22 = param_2;
    } while (bVar25);
    uVar18 = 0x70U - (int)(0x70 - uVar21) >> 4;
  }
  uVar21 = (ulonglong)uVar18;
  auVar29 = auVar29 ^ auVar51;
  uVar24 = uVar23 + 0x60;
  auVar28 = auVar29;
  if (uVar23 != 0xffffffffffffffa0) {
    auVar28 = auVar68 ^ auVar51;
    uVar17 = auVar29._0_4_;
    uVar56 = auVar29._4_4_;
    uVar57 = auVar29._8_4_;
    uVar58 = auVar29._12_4_;
    if (uVar24 < 0x20) {
      puVar4 = *param_1;
      puVar5 = *param_1;
      puVar6 = *param_1;
      puVar7 = *param_1;
      param_1 = param_1 + 1;
      auVar51 = param_4[1];
      pauVar22 = param_4 + 2;
      auVar29._0_4_ = *(uint *)puVar4 ^ uVar17 ^ *(uint *)*param_4;
      auVar29._4_4_ = *(uint *)(puVar5 + 4) ^ uVar56 ^ *(uint *)(*param_4 + 4);
      auVar29._8_4_ = *(uint *)(puVar6 + 8) ^ uVar57 ^ *(uint *)(*param_4 + 8);
      auVar29._12_4_ = *(uint *)(puVar7 + 0xc) ^ uVar58 ^ *(uint *)(*param_4 + 0xc);
      do {
        auVar29 = aesenc(auVar29,auVar51);
        uVar18 = uVar18 - 1;
        auVar51 = *pauVar22;
        pauVar22 = pauVar22 + 1;
      } while (uVar18 != 0);
      auVar51 = aesenclast(auVar29,auVar51);
      *(uint *)*param_2 = auVar51._0_4_ ^ uVar17;
      *(uint *)(*param_2 + 4) = auVar51._4_4_ ^ uVar56;
      *(uint *)(*param_2 + 8) = auVar51._8_4_ ^ uVar57;
      *(uint *)(*param_2 + 0xc) = auVar51._12_4_ ^ uVar58;
      param_2 = param_2 + 1;
    }
    else {
      auVar69 = auVar69 ^ auVar51;
      uVar18 = auVar28._0_4_;
      uVar60 = auVar28._4_4_;
      uVar61 = auVar28._8_4_;
      uVar62 = auVar28._12_4_;
      if (uVar24 == 0x20) {
        puVar4 = *param_1;
        puVar5 = *param_1;
        puVar6 = *param_1;
        puVar7 = *param_1;
        pauVar22 = param_1 + 1;
        pauVar1 = param_1 + 1;
        pauVar2 = param_1 + 1;
        pauVar8 = param_1 + 1;
        param_1 = param_1 + 2;
        uVar26 = *(uint *)puVar4 ^ uVar17;
        uVar32 = *(uint *)(puVar5 + 4) ^ uVar56;
        uVar34 = *(uint *)(puVar6 + 8) ^ uVar57;
        uVar37 = *(uint *)(puVar7 + 0xc) ^ uVar58;
        uVar27 = *(uint *)*pauVar22 ^ uVar18;
        uVar33 = *(uint *)(*pauVar1 + 4) ^ uVar60;
        uVar35 = *(uint *)(*pauVar2 + 8) ^ uVar61;
        uVar38 = *(uint *)(*pauVar8 + 0xc) ^ uVar62;
        _aesni_encrypt2();
        *(uint *)*param_2 = uVar26 ^ uVar17;
        *(uint *)(*param_2 + 4) = uVar32 ^ uVar56;
        *(uint *)(*param_2 + 8) = uVar34 ^ uVar57;
        *(uint *)(*param_2 + 0xc) = uVar37 ^ uVar58;
        *(uint *)param_2[1] = uVar27 ^ uVar18;
        *(uint *)(param_2[1] + 4) = uVar33 ^ uVar60;
        *(uint *)(param_2[1] + 8) = uVar35 ^ uVar61;
        *(uint *)(param_2[1] + 0xc) = uVar38 ^ uVar62;
        param_2 = param_2 + 2;
        auVar28 = auVar69;
      }
      else {
        auVar70 = auVar70 ^ auVar51;
        uVar26 = auVar69._0_4_;
        uVar32 = auVar69._4_4_;
        uVar34 = auVar69._8_4_;
        uVar37 = auVar69._12_4_;
        if (uVar24 < 0x40) {
          puVar4 = *param_1;
          puVar5 = *param_1;
          puVar6 = *param_1;
          puVar7 = *param_1;
          pauVar22 = param_1 + 1;
          pauVar2 = param_1 + 1;
          pauVar8 = param_1 + 1;
          pauVar9 = param_1 + 1;
          pauVar1 = param_1 + 2;
          pauVar10 = param_1 + 2;
          pauVar11 = param_1 + 2;
          pauVar12 = param_1 + 2;
          param_1 = param_1 + 3;
          uVar27 = *(uint *)puVar4 ^ uVar17;
          uVar33 = *(uint *)(puVar5 + 4) ^ uVar56;
          uVar35 = *(uint *)(puVar6 + 8) ^ uVar57;
          uVar38 = *(uint *)(puVar7 + 0xc) ^ uVar58;
          uVar39 = *(uint *)*pauVar22 ^ uVar18;
          uVar42 = *(uint *)(*pauVar2 + 4) ^ uVar60;
          uVar43 = *(uint *)(*pauVar8 + 8) ^ uVar61;
          uVar44 = *(uint *)(*pauVar9 + 0xc) ^ uVar62;
          uVar45 = *(uint *)*pauVar1 ^ uVar26;
          uVar47 = *(uint *)(*pauVar10 + 4) ^ uVar32;
          uVar48 = *(uint *)(*pauVar11 + 8) ^ uVar34;
          uVar49 = *(uint *)(*pauVar12 + 0xc) ^ uVar37;
          _aesni_encrypt3();
          *(uint *)*param_2 = uVar27 ^ uVar17;
          *(uint *)(*param_2 + 4) = uVar33 ^ uVar56;
          *(uint *)(*param_2 + 8) = uVar35 ^ uVar57;
          *(uint *)(*param_2 + 0xc) = uVar38 ^ uVar58;
          *(uint *)param_2[1] = uVar39 ^ uVar18;
          *(uint *)(param_2[1] + 4) = uVar42 ^ uVar60;
          *(uint *)(param_2[1] + 8) = uVar43 ^ uVar61;
          *(uint *)(param_2[1] + 0xc) = uVar44 ^ uVar62;
          *(uint *)param_2[2] = uVar45 ^ uVar26;
          *(uint *)(param_2[2] + 4) = uVar47 ^ uVar32;
          *(uint *)(param_2[2] + 8) = uVar48 ^ uVar34;
          *(uint *)(param_2[2] + 0xc) = uVar49 ^ uVar37;
          param_2 = param_2 + 3;
          auVar28 = auVar70;
        }
        else {
          auVar71 = auVar71 ^ auVar51;
          if (uVar24 == 0x40) {
            pauVar22 = param_1 + 1;
            pauVar8 = param_1 + 1;
            pauVar9 = param_1 + 1;
            pauVar10 = param_1 + 1;
            pauVar1 = param_1 + 2;
            pauVar11 = param_1 + 2;
            pauVar12 = param_1 + 2;
            pauVar13 = param_1 + 2;
            auVar54._0_4_ = *(uint *)*param_1 ^ uVar17;
            auVar54._4_4_ = *(uint *)(*param_1 + 4) ^ uVar56;
            auVar54._8_4_ = *(uint *)(*param_1 + 8) ^ uVar57;
            auVar54._12_4_ = *(uint *)(*param_1 + 0xc) ^ uVar58;
            pauVar2 = param_1 + 3;
            pauVar14 = param_1 + 3;
            pauVar15 = param_1 + 3;
            pauVar16 = param_1 + 3;
            param_1 = param_1 + 4;
            auVar59._0_4_ = *(uint *)*pauVar22 ^ uVar18;
            auVar59._4_4_ = *(uint *)(*pauVar8 + 4) ^ uVar60;
            auVar59._8_4_ = *(uint *)(*pauVar9 + 8) ^ uVar61;
            auVar59._12_4_ = *(uint *)(*pauVar10 + 0xc) ^ uVar62;
            auVar63._0_4_ = *(uint *)*pauVar1 ^ uVar26;
            auVar63._4_4_ = *(uint *)(*pauVar11 + 4) ^ uVar32;
            auVar63._8_4_ = *(uint *)(*pauVar12 + 8) ^ uVar34;
            auVar63._12_4_ = *(uint *)(*pauVar13 + 0xc) ^ uVar37;
            auVar64._0_4_ = *(uint *)*pauVar2 ^ auVar70._0_4_;
            auVar64._4_4_ = *(uint *)(*pauVar14 + 4) ^ auVar70._4_4_;
            auVar64._8_4_ = *(uint *)(*pauVar15 + 8) ^ auVar70._8_4_;
            auVar64._12_4_ = *(uint *)(*pauVar16 + 0xc) ^ auVar70._12_4_;
            _aesni_encrypt4();
            *param_2 = auVar54 ^ auVar29;
            param_2[1] = auVar59 ^ auVar28;
            param_2[2] = auVar63 ^ auVar69;
            param_2[3] = auVar64 ^ auVar70;
            param_2 = param_2 + 4;
            auVar28 = auVar71;
          }
          else {
            pauVar22 = param_1 + 2;
            auVar29 = *param_1 ^ auVar29;
            pauVar1 = param_1 + 3;
            auVar28 = param_1[1] ^ auVar28;
            pauVar2 = param_1 + 4;
            param_1 = param_1 + 5;
            auVar69 = *pauVar22 ^ auVar69;
            auVar51 = *pauVar1 ^ auVar70;
            auVar41 = *pauVar2 ^ auVar71;
            _aesni_encrypt6();
            *(uint *)*param_2 = auVar29._0_4_ ^ uVar17;
            *(uint *)(*param_2 + 4) = auVar29._4_4_ ^ uVar56;
            *(uint *)(*param_2 + 8) = auVar29._8_4_ ^ uVar57;
            *(uint *)(*param_2 + 0xc) = auVar29._12_4_ ^ uVar58;
            *(uint *)param_2[1] = auVar28._0_4_ ^ uVar18;
            *(uint *)(param_2[1] + 4) = auVar28._4_4_ ^ uVar60;
            *(uint *)(param_2[1] + 8) = auVar28._8_4_ ^ uVar61;
            *(uint *)(param_2[1] + 0xc) = auVar28._12_4_ ^ uVar62;
            *(uint *)param_2[2] = auVar69._0_4_ ^ uVar26;
            *(uint *)(param_2[2] + 4) = auVar69._4_4_ ^ uVar32;
            *(uint *)(param_2[2] + 8) = auVar69._8_4_ ^ uVar34;
            *(uint *)(param_2[2] + 0xc) = auVar69._12_4_ ^ uVar37;
            *(uint *)param_2[3] = auVar51._0_4_ ^ auVar70._0_4_;
            *(uint *)(param_2[3] + 4) = auVar51._4_4_ ^ auVar70._4_4_;
            *(uint *)(param_2[3] + 8) = auVar51._8_4_ ^ auVar70._8_4_;
            *(uint *)(param_2[3] + 0xc) = auVar51._12_4_ ^ auVar70._12_4_;
            *(uint *)param_2[4] = auVar41._0_4_ ^ auVar71._0_4_;
            *(uint *)(param_2[4] + 4) = auVar41._4_4_ ^ auVar71._4_4_;
            *(uint *)(param_2[4] + 8) = auVar41._8_4_ ^ auVar71._8_4_;
            *(uint *)(param_2[4] + 0xc) = auVar41._12_4_ ^ auVar71._12_4_;
            param_2 = param_2 + 5;
            auVar28 = auVar72;
          }
        }
      }
    }
  }
  param_3 = param_3 & 0xf;
  uVar23 = param_3;
  if (param_3 != 0) {
    do {
      puVar4 = *param_1;
      uVar3 = param_2[-1][0];
      param_1 = (undefined1 (*) [16])(*param_1 + 1);
      param_2[-1][0] = *puVar4;
      (*param_2)[0] = uVar3;
      param_2 = (undefined1 (*) [16])(*param_2 + 1);
      uVar23 = uVar23 - 1;
    } while (uVar23 != 0);
    uVar21 = uVar21 & 0xffffffff;
    auVar51 = param_4[1];
    pauVar22 = param_4 + 2;
    auVar65._0_4_ =
         *(uint *)((longlong)param_2 + (-0x10 - param_3)) ^ auVar28._0_4_ ^ *(uint *)*param_4;
    auVar65._4_4_ =
         *(uint *)((longlong)param_2 + (-0xc - param_3)) ^ auVar28._4_4_ ^ *(uint *)(*param_4 + 4);
    auVar65._8_4_ =
         *(uint *)((longlong)param_2 + (-8 - param_3)) ^ auVar28._8_4_ ^ *(uint *)(*param_4 + 8);
    auVar65._12_4_ =
         *(uint *)((longlong)param_2 + (-4 - param_3)) ^ auVar28._12_4_ ^ *(uint *)(*param_4 + 0xc);
    do {
      auVar65 = aesenc(auVar65,auVar51);
      uVar17 = (int)uVar21 - 1;
      uVar21 = (ulonglong)uVar17;
      auVar51 = *pauVar22;
      pauVar22 = pauVar22 + 1;
    } while (uVar17 != 0);
    auVar51 = aesenclast(auVar65,auVar51);
    *(uint *)((longlong)param_2 + (-0x10 - param_3)) = auVar51._0_4_ ^ auVar28._0_4_;
    *(uint *)((longlong)param_2 + (-0xc - param_3)) = auVar51._4_4_ ^ auVar28._4_4_;
    *(uint *)((longlong)param_2 + (-8 - param_3)) = auVar51._8_4_ ^ auVar28._8_4_;
    *(uint *)((longlong)param_2 + (-4 - param_3)) = auVar51._12_4_ ^ auVar28._12_4_;
  }
  *(undefined8 *)((longlong)register0x00000020 + -0xa8) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0xa0) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x98) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x90) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x88) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x80) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x78) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x70) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x68) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x60) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x58) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x48) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x40) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x38) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x28) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x20) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x18) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x10) = 0;
  return;
}

// aesni_xts_decrypt @ 140df5cb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void aesni_xts_decrypt(undefined1 (*param_1) [16],undefined1 (*param_2) [16],ulonglong param_3,
                      undefined1 (*param_4) [16],uint *param_5,uint *param_6)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 (*pauVar22) [16];
  ulonglong uVar23;
  ulonglong uVar24;
  uint *puVar25;
  bool bVar26;
  undefined1 auVar27 [16];
  uint uVar28;
  uint uVar29;
  uint uVar35;
  uint uVar37;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  int iVar39;
  undefined1 auVar32 [16];
  uint uVar36;
  uint uVar38;
  uint uVar40;
  uint uVar41;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  uint uVar42;
  uint uVar45;
  uint uVar46;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  uint uVar47;
  uint uVar48;
  uint uVar50;
  uint uVar51;
  undefined1 auVar49 [16];
  uint uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  uint uVar59;
  uint uVar60;
  undefined1 auVar58 [16];
  uint uVar61;
  uint uVar63;
  uint uVar64;
  undefined1 auVar62 [16];
  uint uVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  int iVar68;
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
  
  uVar17 = param_5[0x3c];
  uVar18 = *(uint *)param_4[0xf];
  auVar54 = *(undefined1 (*) [16])(param_5 + 4);
  pauVar22 = (undefined1 (*) [16])(param_5 + 8);
  auVar30._0_4_ = *param_6 ^ *param_5;
  auVar30._4_4_ = param_6[1] ^ param_5[1];
  auVar30._8_4_ = param_6[2] ^ param_5[2];
  auVar30._12_4_ = param_6[3] ^ param_5[3];
  do {
    auVar30 = aesenc(auVar30,auVar54);
    uVar17 = uVar17 - 1;
    auVar54 = *pauVar22;
    pauVar22 = pauVar22 + 1;
  } while (uVar17 != 0);
  auVar31 = aesenclast(auVar30,auVar54);
  param_3 = param_3 + (ulonglong)((param_3 & 0xf) != 0) * -0x10;
  auVar54 = *param_4;
  uVar21 = (ulonglong)(uVar18 << 4);
  iVar68 = auVar31._4_4_;
  iVar39 = auVar31._12_4_;
  auVar27 = *(undefined1 (*) [16])(param_4[1] + uVar21) ^ auVar54;
  auVar32._0_4_ = iVar39 >> 0x1f;
  auVar32._4_4_ = auVar32._0_4_;
  auVar32._8_4_ = iVar68 >> 0x1f;
  auVar32._12_4_ = auVar32._8_4_;
  auVar72._8_8_ = auVar31._8_8_ * 2;
  auVar72._0_8_ = auVar31._0_8_ * 2;
  auVar31 = auVar31 ^ auVar54;
  auVar72 = auVar72 ^ auVar32 & _L_xts_magic;
  auVar43._0_4_ = iVar39 * 2 >> 0x1f;
  auVar43._4_4_ = iVar39 * 2 >> 0x1f;
  auVar43._8_4_ = iVar68 * 2 >> 0x1f;
  auVar43._12_4_ = iVar68 * 2 >> 0x1f;
  auVar73._8_8_ = auVar72._8_8_ * 2;
  auVar73._0_8_ = auVar72._0_8_ * 2;
  auVar72 = auVar72 ^ auVar54;
  auVar73 = auVar73 ^ auVar43 & _L_xts_magic;
  auVar49._0_4_ = iVar39 * 4 >> 0x1f;
  auVar49._4_4_ = iVar39 * 4 >> 0x1f;
  auVar49._8_4_ = iVar68 * 4 >> 0x1f;
  auVar49._12_4_ = iVar68 * 4 >> 0x1f;
  auVar74._8_8_ = auVar73._8_8_ * 2;
  auVar74._0_8_ = auVar73._0_8_ * 2;
  auVar73 = auVar73 ^ auVar54;
  auVar74 = auVar74 ^ auVar49 & _L_xts_magic;
  auVar53._0_4_ = iVar39 * 8 >> 0x1f;
  auVar53._4_4_ = iVar39 * 8 >> 0x1f;
  auVar53._8_4_ = iVar68 * 8 >> 0x1f;
  auVar53._12_4_ = iVar68 * 8 >> 0x1f;
  auVar75._8_8_ = auVar74._8_8_ * 2;
  auVar75._0_8_ = auVar74._0_8_ * 2;
  auVar74 = auVar74 ^ auVar54;
  auVar75 = auVar75 ^ auVar53 & _L_xts_magic;
  auVar44._0_4_ = (iVar39 << 4) >> 0x1f;
  auVar44._4_4_ = (iVar39 << 4) >> 0x1f;
  auVar44._8_4_ = (iVar68 << 4) >> 0x1f;
  auVar44._12_4_ = (iVar68 << 4) >> 0x1f;
  auVar76._8_8_ = auVar75._8_8_ * 2;
  auVar76._0_8_ = auVar75._0_8_ * 2;
  auVar75 = auVar75 ^ auVar54;
  auVar76 = auVar76 ^ auVar44 & _L_xts_magic;
  uVar23 = (param_3 & 0xfffffffffffffff0) - 0x60;
  auVar30 = _L_xts_magic;
  if (0x5f < (param_3 & 0xfffffffffffffff0)) {
    auVar44 = param_4[1];
    pauVar22 = param_2;
    do {
      auVar30 = _L_xts_magic;
      auVar32 = aesdec(*param_1 ^ auVar31,auVar44);
      auVar43 = aesdec(param_1[1] ^ auVar72,auVar44);
      pauVar1 = param_1 + 4;
      auVar49 = aesdec(param_1[2] ^ auVar73,auVar44);
      pauVar2 = param_1 + 5;
      auVar57 = auVar54 ^ auVar76;
      auVar53 = aesdec(param_1[3] ^ auVar74,auVar44);
      auVar54 = param_4[2];
      param_1 = param_1 + 6;
      auVar58 = auVar31 ^ auVar27;
      auVar55 = aesdec(*pauVar1 ^ auVar75,auVar44);
      auVar62 = auVar72 ^ auVar27;
      auVar56 = aesdec(*pauVar2 ^ auVar57,auVar44);
      auVar31 = param_4[3];
      auVar66 = auVar73 ^ auVar27;
      auVar72 = aesdec(auVar32,auVar54);
      auVar67 = auVar74 ^ auVar27;
      auVar44 = aesdec(auVar43,auVar54);
      auVar69 = auVar75 ^ auVar27;
      auVar73 = aesdec(auVar49,auVar54);
      auVar74 = aesdec(auVar53,auVar54);
      auVar32 = aesdec(auVar55,auVar54);
      auVar43 = aesdec(auVar56,auVar54);
      auVar54 = param_4[4];
      iVar68 = auVar76._4_4_;
      iVar39 = auVar76._12_4_;
      lVar19 = 0x70 - uVar21;
      do {
        auVar75 = aesdec(auVar72,auVar31);
        auVar44 = aesdec(auVar44,auVar31);
        auVar73 = aesdec(auVar73,auVar31);
        auVar74 = aesdec(auVar74,auVar31);
        auVar32 = aesdec(auVar32,auVar31);
        auVar43 = aesdec(auVar43,auVar31);
        auVar31 = *(undefined1 (*) [16])(param_4[-2] + lVar19 + uVar21);
        lVar20 = lVar19 + 0x20;
        auVar72 = aesdec(auVar75,auVar54);
        auVar44 = aesdec(auVar44,auVar54);
        auVar73 = aesdec(auVar73,auVar54);
        auVar74 = aesdec(auVar74,auVar54);
        auVar32 = aesdec(auVar32,auVar54);
        auVar43 = aesdec(auVar43,auVar54);
        auVar54 = *(undefined1 (*) [16])(param_4[-1] + uVar21 + lVar19);
        lVar19 = lVar20;
      } while (lVar20 != 0);
      auVar72 = aesdec(auVar72,auVar31);
      auVar77._8_8_ = auVar76._8_8_ * 2;
      auVar77._0_8_ = auVar76._0_8_ * 2;
      auVar55._0_4_ = iVar39 >> 0x1f;
      auVar55._4_4_ = auVar55._0_4_;
      auVar55._8_4_ = iVar68 >> 0x1f;
      auVar55._12_4_ = auVar55._8_4_;
      auVar76 = aesdec(auVar44,auVar31);
      auVar75 = *param_4;
      auVar49 = aesdec(auVar73,auVar31);
      auVar74 = aesdec(auVar74,auVar31);
      auVar53 = aesdec(auVar32,auVar31);
      auVar77 = auVar77 ^ auVar55 & _L_xts_magic;
      auVar43 = aesdec(auVar43,auVar31);
      auVar44 = *(undefined1 (*) [16])(param_4[-2] + uVar21);
      auVar72 = aesdec(auVar72,auVar54);
      auVar31 = auVar75 ^ auVar77;
      auVar73 = aesdec(auVar76,auVar54);
      auVar56._0_4_ = iVar39 * 2 >> 0x1f;
      auVar56._4_4_ = iVar39 * 2 >> 0x1f;
      auVar56._8_4_ = iVar68 * 2 >> 0x1f;
      auVar56._12_4_ = iVar68 * 2 >> 0x1f;
      auVar78._8_8_ = auVar77._8_8_ * 2;
      auVar78._0_8_ = auVar77._0_8_ * 2;
      auVar32 = aesdec(auVar49,auVar54);
      auVar49 = aesdec(auVar74,auVar54);
      auVar55 = aesdec(auVar53,auVar54);
      auVar78 = auVar78 ^ auVar56 & _L_xts_magic;
      auVar56 = aesdec(auVar43,auVar54);
      auVar54 = *(undefined1 (*) [16])(param_4[-1] + uVar21);
      auVar76 = aesdec(auVar72,auVar44);
      auVar72 = auVar75 ^ auVar78;
      auVar70._0_4_ = iVar39 * 4 >> 0x1f;
      auVar70._4_4_ = iVar39 * 4 >> 0x1f;
      auVar70._8_4_ = iVar68 * 4 >> 0x1f;
      auVar70._12_4_ = iVar68 * 4 >> 0x1f;
      auVar74 = aesdec(auVar73,auVar44);
      auVar79._8_8_ = auVar78._8_8_ * 2;
      auVar79._0_8_ = auVar78._0_8_ * 2;
      auVar43 = aesdec(auVar32,auVar44);
      auVar53 = aesdec(auVar49,auVar44);
      auVar79 = auVar79 ^ auVar70 & _L_xts_magic;
      auVar55 = aesdec(auVar55,auVar44);
      auVar56 = aesdec(auVar56,auVar44);
      auVar44 = *(undefined1 (*) [16])(*param_4 + uVar21);
      auVar76 = aesdec(auVar76,auVar54);
      auVar73 = auVar75 ^ auVar79;
      auVar71._0_4_ = iVar39 * 8 >> 0x1f;
      auVar71._4_4_ = iVar39 * 8 >> 0x1f;
      auVar71._8_4_ = iVar68 * 8 >> 0x1f;
      auVar71._12_4_ = iVar68 * 8 >> 0x1f;
      auVar32 = aesdec(auVar74,auVar54);
      auVar80._8_8_ = auVar79._8_8_ * 2;
      auVar80._0_8_ = auVar79._0_8_ * 2;
      auVar49 = aesdec(auVar43,auVar54);
      auVar53 = aesdec(auVar53,auVar54);
      auVar55 = aesdec(auVar55,auVar54);
      auVar80 = auVar80 ^ auVar71 & _L_xts_magic;
      auVar56 = aesdec(auVar56,auVar54);
      auVar76 = aesdec(auVar76,auVar44);
      auVar74 = auVar75 ^ auVar80;
      auVar54._0_4_ = iVar39 * 0x10 >> 0x1f;
      auVar54._4_4_ = iVar39 * 0x10 >> 0x1f;
      auVar54._8_4_ = iVar68 * 0x10 >> 0x1f;
      auVar54._12_4_ = iVar68 * 0x10 >> 0x1f;
      auVar43 = aesdec(auVar32,auVar44);
      auVar81._8_8_ = auVar80._8_8_ * 2;
      auVar81._0_8_ = auVar80._0_8_ * 2;
      auVar49 = aesdec(auVar49,auVar44);
      auVar53 = aesdec(auVar53,auVar44);
      auVar81 = auVar81 ^ auVar54 & _L_xts_magic;
      auVar54 = *param_4;
      auVar55 = aesdec(auVar55,auVar44);
      auVar56 = aesdec(auVar56,auVar44);
      auVar44 = param_4[1];
      auVar75 = auVar75 ^ auVar81;
      auVar32 = aesdeclast(auVar76,auVar58);
      auVar58._0_4_ = (iVar39 << 5) >> 0x1f;
      auVar58._4_4_ = (iVar39 << 5) >> 0x1f;
      auVar58._8_4_ = (iVar68 << 5) >> 0x1f;
      auVar58._12_4_ = (iVar68 << 5) >> 0x1f;
      auVar82._8_8_ = auVar81._8_8_ * 2;
      auVar82._0_8_ = auVar81._0_8_ * 2;
      auVar43 = aesdeclast(auVar43,auVar62);
      auVar49 = aesdeclast(auVar49,auVar66);
      auVar53 = aesdeclast(auVar53,auVar67);
      auVar55 = aesdeclast(auVar55,auVar69);
      auVar56 = aesdeclast(auVar56,auVar57 ^ auVar27);
      auVar76 = auVar82 ^ auVar58 & _L_xts_magic;
      param_2 = pauVar22 + 6;
      *pauVar22 = auVar32;
      pauVar22[1] = auVar43;
      pauVar22[2] = auVar49;
      pauVar22[3] = auVar53;
      pauVar22[4] = auVar55;
      pauVar22[5] = auVar56;
      bVar26 = 0x5f < uVar23;
      uVar23 = uVar23 - 0x60;
      pauVar22 = param_2;
    } while (bVar26);
    uVar18 = 0x70U - (int)(0x70 - uVar21) >> 4;
  }
  uVar21 = (ulonglong)uVar18;
  auVar31 = auVar31 ^ auVar54;
  auVar72 = auVar72 ^ auVar54;
  uVar24 = uVar23 + 0x60;
  auVar27 = auVar72;
  if (uVar23 == 0xffffffffffffffa0) {
L_xts_dec_done:
    auVar76 = auVar31;
    param_3 = param_3 & 0xf;
    if (param_3 == 0) goto L_xts_dec_ret;
  }
  else {
    auVar27 = auVar73 ^ auVar54;
    uVar17 = auVar31._0_4_;
    uVar59 = auVar31._4_4_;
    uVar60 = auVar31._8_4_;
    uVar61 = auVar31._12_4_;
    if (uVar24 < 0x20) {
      puVar4 = *param_1;
      puVar5 = *param_1;
      puVar6 = *param_1;
      puVar7 = *param_1;
      param_1 = param_1 + 1;
      auVar54 = param_4[1];
      pauVar22 = param_4 + 2;
      auVar31._0_4_ = *(uint *)puVar4 ^ uVar17 ^ *(uint *)*param_4;
      auVar31._4_4_ = *(uint *)(puVar5 + 4) ^ uVar59 ^ *(uint *)(*param_4 + 4);
      auVar31._8_4_ = *(uint *)(puVar6 + 8) ^ uVar60 ^ *(uint *)(*param_4 + 8);
      auVar31._12_4_ = *(uint *)(puVar7 + 0xc) ^ uVar61 ^ *(uint *)(*param_4 + 0xc);
      do {
        auVar31 = aesdec(auVar31,auVar54);
        uVar18 = uVar18 - 1;
        auVar54 = *pauVar22;
        pauVar22 = pauVar22 + 1;
      } while (uVar18 != 0);
      auVar54 = aesdeclast(auVar31,auVar54);
      *(uint *)*param_2 = auVar54._0_4_ ^ uVar17;
      *(uint *)(*param_2 + 4) = auVar54._4_4_ ^ uVar59;
      *(uint *)(*param_2 + 8) = auVar54._8_4_ ^ uVar60;
      *(uint *)(*param_2 + 0xc) = auVar54._12_4_ ^ uVar61;
      param_2 = param_2 + 1;
      auVar31 = auVar72;
      goto L_xts_dec_done;
    }
    auVar74 = auVar74 ^ auVar54;
    uVar18 = auVar72._0_4_;
    uVar63 = auVar72._4_4_;
    uVar64 = auVar72._8_4_;
    uVar65 = auVar72._12_4_;
    if (uVar24 == 0x20) {
      puVar4 = *param_1;
      puVar5 = *param_1;
      puVar6 = *param_1;
      puVar7 = *param_1;
      pauVar22 = param_1 + 1;
      pauVar1 = param_1 + 1;
      pauVar2 = param_1 + 1;
      pauVar8 = param_1 + 1;
      param_1 = param_1 + 2;
      uVar28 = *(uint *)puVar4 ^ uVar17;
      uVar35 = *(uint *)(puVar5 + 4) ^ uVar59;
      uVar37 = *(uint *)(puVar6 + 8) ^ uVar60;
      uVar40 = *(uint *)(puVar7 + 0xc) ^ uVar61;
      uVar29 = *(uint *)*pauVar22 ^ uVar18;
      uVar36 = *(uint *)(*pauVar1 + 4) ^ uVar63;
      uVar38 = *(uint *)(*pauVar2 + 8) ^ uVar64;
      uVar41 = *(uint *)(*pauVar8 + 0xc) ^ uVar65;
      _aesni_decrypt2();
      *(uint *)*param_2 = uVar28 ^ uVar17;
      *(uint *)(*param_2 + 4) = uVar35 ^ uVar59;
      *(uint *)(*param_2 + 8) = uVar37 ^ uVar60;
      *(uint *)(*param_2 + 0xc) = uVar40 ^ uVar61;
      *(uint *)param_2[1] = uVar29 ^ uVar18;
      *(uint *)(param_2[1] + 4) = uVar36 ^ uVar63;
      *(uint *)(param_2[1] + 8) = uVar38 ^ uVar64;
      *(uint *)(param_2[1] + 0xc) = uVar41 ^ uVar65;
      param_2 = param_2 + 2;
      auVar31 = auVar27;
      auVar27 = auVar74;
      goto L_xts_dec_done;
    }
    auVar75 = auVar75 ^ auVar54;
    uVar28 = auVar27._0_4_;
    uVar35 = auVar27._4_4_;
    uVar37 = auVar27._8_4_;
    uVar40 = auVar27._12_4_;
    if (uVar24 < 0x40) {
      puVar4 = *param_1;
      puVar5 = *param_1;
      puVar6 = *param_1;
      puVar7 = *param_1;
      pauVar22 = param_1 + 1;
      pauVar2 = param_1 + 1;
      pauVar8 = param_1 + 1;
      pauVar9 = param_1 + 1;
      pauVar1 = param_1 + 2;
      pauVar10 = param_1 + 2;
      pauVar11 = param_1 + 2;
      pauVar12 = param_1 + 2;
      param_1 = param_1 + 3;
      uVar29 = *(uint *)puVar4 ^ uVar17;
      uVar36 = *(uint *)(puVar5 + 4) ^ uVar59;
      uVar38 = *(uint *)(puVar6 + 8) ^ uVar60;
      uVar41 = *(uint *)(puVar7 + 0xc) ^ uVar61;
      uVar42 = *(uint *)*pauVar22 ^ uVar18;
      uVar45 = *(uint *)(*pauVar2 + 4) ^ uVar63;
      uVar46 = *(uint *)(*pauVar8 + 8) ^ uVar64;
      uVar47 = *(uint *)(*pauVar9 + 0xc) ^ uVar65;
      uVar48 = *(uint *)*pauVar1 ^ uVar28;
      uVar50 = *(uint *)(*pauVar10 + 4) ^ uVar35;
      uVar51 = *(uint *)(*pauVar11 + 8) ^ uVar37;
      uVar52 = *(uint *)(*pauVar12 + 0xc) ^ uVar40;
      _aesni_decrypt3();
      *(uint *)*param_2 = uVar29 ^ uVar17;
      *(uint *)(*param_2 + 4) = uVar36 ^ uVar59;
      *(uint *)(*param_2 + 8) = uVar38 ^ uVar60;
      *(uint *)(*param_2 + 0xc) = uVar41 ^ uVar61;
      *(uint *)param_2[1] = uVar42 ^ uVar18;
      *(uint *)(param_2[1] + 4) = uVar45 ^ uVar63;
      *(uint *)(param_2[1] + 8) = uVar46 ^ uVar64;
      *(uint *)(param_2[1] + 0xc) = uVar47 ^ uVar65;
      *(uint *)param_2[2] = uVar48 ^ uVar28;
      *(uint *)(param_2[2] + 4) = uVar50 ^ uVar35;
      *(uint *)(param_2[2] + 8) = uVar51 ^ uVar37;
      *(uint *)(param_2[2] + 0xc) = uVar52 ^ uVar40;
      param_2 = param_2 + 3;
      auVar31 = auVar74;
      auVar27 = auVar75;
      goto L_xts_dec_done;
    }
    if (uVar24 == 0x40) {
      pauVar22 = param_1 + 1;
      pauVar8 = param_1 + 1;
      pauVar9 = param_1 + 1;
      pauVar10 = param_1 + 1;
      pauVar1 = param_1 + 2;
      pauVar11 = param_1 + 2;
      pauVar12 = param_1 + 2;
      pauVar13 = param_1 + 2;
      auVar57._0_4_ = *(uint *)*param_1 ^ uVar17;
      auVar57._4_4_ = *(uint *)(*param_1 + 4) ^ uVar59;
      auVar57._8_4_ = *(uint *)(*param_1 + 8) ^ uVar60;
      auVar57._12_4_ = *(uint *)(*param_1 + 0xc) ^ uVar61;
      pauVar2 = param_1 + 3;
      pauVar14 = param_1 + 3;
      pauVar15 = param_1 + 3;
      pauVar16 = param_1 + 3;
      param_1 = param_1 + 4;
      auVar62._0_4_ = *(uint *)*pauVar22 ^ uVar18;
      auVar62._4_4_ = *(uint *)(*pauVar8 + 4) ^ uVar63;
      auVar62._8_4_ = *(uint *)(*pauVar9 + 8) ^ uVar64;
      auVar62._12_4_ = *(uint *)(*pauVar10 + 0xc) ^ uVar65;
      auVar66._0_4_ = *(uint *)*pauVar1 ^ uVar28;
      auVar66._4_4_ = *(uint *)(*pauVar11 + 4) ^ uVar35;
      auVar66._8_4_ = *(uint *)(*pauVar12 + 8) ^ uVar37;
      auVar66._12_4_ = *(uint *)(*pauVar13 + 0xc) ^ uVar40;
      auVar67._0_4_ = *(uint *)*pauVar2 ^ auVar74._0_4_;
      auVar67._4_4_ = *(uint *)(*pauVar14 + 4) ^ auVar74._4_4_;
      auVar67._8_4_ = *(uint *)(*pauVar15 + 8) ^ auVar74._8_4_;
      auVar67._12_4_ = *(uint *)(*pauVar16 + 0xc) ^ auVar74._12_4_;
      _aesni_decrypt4();
      *param_2 = auVar57 ^ auVar31;
      param_2[1] = auVar62 ^ auVar72;
      param_2[2] = auVar66 ^ auVar27;
      param_2[3] = auVar67 ^ auVar74;
      param_2 = param_2 + 4;
      auVar31 = auVar75;
      auVar27 = auVar76;
      goto L_xts_dec_done;
    }
    pauVar22 = param_1 + 2;
    auVar31 = *param_1 ^ auVar31;
    pauVar1 = param_1 + 3;
    auVar72 = param_1[1] ^ auVar72;
    pauVar2 = param_1 + 4;
    param_1 = param_1 + 5;
    auVar27 = *pauVar22 ^ auVar27;
    auVar54 = *pauVar1 ^ auVar74;
    auVar44 = *pauVar2 ^ auVar75;
    _aesni_decrypt6();
    *(uint *)*param_2 = auVar31._0_4_ ^ uVar17;
    *(uint *)(*param_2 + 4) = auVar31._4_4_ ^ uVar59;
    *(uint *)(*param_2 + 8) = auVar31._8_4_ ^ uVar60;
    *(uint *)(*param_2 + 0xc) = auVar31._12_4_ ^ uVar61;
    *(uint *)param_2[1] = auVar72._0_4_ ^ uVar18;
    *(uint *)(param_2[1] + 4) = auVar72._4_4_ ^ uVar63;
    *(uint *)(param_2[1] + 8) = auVar72._8_4_ ^ uVar64;
    *(uint *)(param_2[1] + 0xc) = auVar72._12_4_ ^ uVar65;
    *(uint *)param_2[2] = auVar27._0_4_ ^ uVar28;
    *(uint *)(param_2[2] + 4) = auVar27._4_4_ ^ uVar35;
    *(uint *)(param_2[2] + 8) = auVar27._8_4_ ^ uVar37;
    *(uint *)(param_2[2] + 0xc) = auVar27._12_4_ ^ uVar40;
    *(uint *)param_2[3] = auVar54._0_4_ ^ auVar74._0_4_;
    *(uint *)(param_2[3] + 4) = auVar54._4_4_ ^ auVar74._4_4_;
    *(uint *)(param_2[3] + 8) = auVar54._8_4_ ^ auVar74._8_4_;
    *(uint *)(param_2[3] + 0xc) = auVar54._12_4_ ^ auVar74._12_4_;
    iVar68 = -(uint)(auVar76._0_4_ < 0);
    *(uint *)param_2[4] = auVar44._0_4_ ^ auVar75._0_4_;
    *(uint *)(param_2[4] + 4) = auVar44._4_4_ ^ auVar75._4_4_;
    *(uint *)(param_2[4] + 8) = auVar44._8_4_ ^ auVar75._8_4_;
    *(uint *)(param_2[4] + 0xc) = auVar44._12_4_ ^ auVar75._12_4_;
    param_2 = param_2 + 5;
    auVar69._4_4_ = iVar68;
    auVar69._0_4_ = -(uint)(auVar76._12_4_ < SUB124(SUB1612((undefined1  [16])0x0,4),8));
    auVar69._8_4_ = -(uint)(auVar76._4_4_ < 0);
    auVar69._12_4_ = iVar68;
    param_3 = param_3 & 0xf;
    if (param_3 == 0) goto L_xts_dec_ret;
    auVar27._8_8_ = auVar76._8_8_ * 2;
    auVar27._0_8_ = auVar76._0_8_ * 2;
    auVar27 = auVar69 & auVar30 ^ auVar27;
  }
  uVar23 = uVar21 & 0xffffffff;
  auVar54 = param_4[1];
  pauVar22 = param_4 + 2;
  auVar33._0_4_ = *(uint *)*param_1 ^ auVar27._0_4_ ^ *(uint *)*param_4;
  auVar33._4_4_ = *(uint *)(*param_1 + 4) ^ auVar27._4_4_ ^ *(uint *)(*param_4 + 4);
  auVar33._8_4_ = *(uint *)(*param_1 + 8) ^ auVar27._8_4_ ^ *(uint *)(*param_4 + 8);
  auVar33._12_4_ = *(uint *)(*param_1 + 0xc) ^ auVar27._12_4_ ^ *(uint *)(*param_4 + 0xc);
  do {
    auVar33 = aesdec(auVar33,auVar54);
    uVar17 = (int)uVar23 - 1;
    uVar23 = (ulonglong)uVar17;
    auVar54 = *pauVar22;
    pauVar22 = pauVar22 + 1;
  } while (uVar17 != 0);
  auVar54 = aesdeclast(auVar33,auVar54);
  *(uint *)*param_2 = auVar54._0_4_ ^ auVar27._0_4_;
  *(uint *)(*param_2 + 4) = auVar54._4_4_ ^ auVar27._4_4_;
  *(uint *)(*param_2 + 8) = auVar54._8_4_ ^ auVar27._8_4_;
  *(uint *)(*param_2 + 0xc) = auVar54._12_4_ ^ auVar27._12_4_;
  uVar23 = param_3;
  do {
    pauVar22 = param_1 + 1;
    uVar3 = (*param_2)[0];
    param_1 = (undefined1 (*) [16])(*param_1 + 1);
    (*param_2)[0] = (*pauVar22)[0];
    param_2[1][0] = uVar3;
    param_2 = (undefined1 (*) [16])(*param_2 + 1);
    uVar23 = uVar23 - 1;
  } while (uVar23 != 0);
  puVar25 = (uint *)((longlong)param_2 - param_3);
  uVar21 = uVar21 & 0xffffffff;
  auVar54 = param_4[1];
  pauVar22 = param_4 + 2;
  auVar34._0_4_ = *puVar25 ^ auVar76._0_4_ ^ *(uint *)*param_4;
  auVar34._4_4_ = puVar25[1] ^ auVar76._4_4_ ^ *(uint *)(*param_4 + 4);
  auVar34._8_4_ = puVar25[2] ^ auVar76._8_4_ ^ *(uint *)(*param_4 + 8);
  auVar34._12_4_ = puVar25[3] ^ auVar76._12_4_ ^ *(uint *)(*param_4 + 0xc);
  do {
    auVar34 = aesdec(auVar34,auVar54);
    uVar17 = (int)uVar21 - 1;
    uVar21 = (ulonglong)uVar17;
    auVar54 = *pauVar22;
    pauVar22 = pauVar22 + 1;
  } while (uVar17 != 0);
  auVar54 = aesdeclast(auVar34,auVar54);
  *puVar25 = auVar54._0_4_ ^ auVar76._0_4_;
  puVar25[1] = auVar54._4_4_ ^ auVar76._4_4_;
  puVar25[2] = auVar54._8_4_ ^ auVar76._8_4_;
  puVar25[3] = auVar54._12_4_ ^ auVar76._12_4_;
L_xts_dec_ret:
  *(undefined8 *)((longlong)register0x00000020 + -0xa8) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0xa0) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x98) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x90) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x88) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x80) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x78) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x70) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x68) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x60) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x58) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x48) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x40) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x38) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x28) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x20) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x18) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x10) = 0;
  return;
}

// L$SEH_begin_aesni_xts_decrypt @ 140df5cbd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L_SEH_begin_aesni_xts_decrypt
               (undefined1 (*param_1) [16],undefined1 (*param_2) [16],ulonglong param_3,
               undefined1 (*param_4) [16],uint *param_5,uint *param_6)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 (*pauVar8) [16];
  undefined1 (*pauVar9) [16];
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 (*pauVar22) [16];
  ulonglong uVar23;
  ulonglong uVar24;
  uint *puVar25;
  bool bVar26;
  undefined1 auVar27 [16];
  uint uVar28;
  uint uVar29;
  uint uVar35;
  uint uVar37;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  int iVar39;
  undefined1 auVar32 [16];
  uint uVar36;
  uint uVar38;
  uint uVar40;
  uint uVar41;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  uint uVar42;
  uint uVar45;
  uint uVar46;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  uint uVar47;
  uint uVar48;
  uint uVar50;
  uint uVar51;
  undefined1 auVar49 [16];
  uint uVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  uint uVar59;
  uint uVar60;
  undefined1 auVar58 [16];
  uint uVar61;
  uint uVar63;
  uint uVar64;
  undefined1 auVar62 [16];
  uint uVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  int iVar68;
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
  
  uVar17 = param_5[0x3c];
  uVar18 = *(uint *)param_4[0xf];
  auVar54 = *(undefined1 (*) [16])(param_5 + 4);
  pauVar22 = (undefined1 (*) [16])(param_5 + 8);
  auVar30._0_4_ = *param_6 ^ *param_5;
  auVar30._4_4_ = param_6[1] ^ param_5[1];
  auVar30._8_4_ = param_6[2] ^ param_5[2];
  auVar30._12_4_ = param_6[3] ^ param_5[3];
  do {
    auVar30 = aesenc(auVar30,auVar54);
    uVar17 = uVar17 - 1;
    auVar54 = *pauVar22;
    pauVar22 = pauVar22 + 1;
  } while (uVar17 != 0);
  auVar31 = aesenclast(auVar30,auVar54);
  param_3 = param_3 + (ulonglong)((param_3 & 0xf) != 0) * -0x10;
  auVar54 = *param_4;
  uVar21 = (ulonglong)(uVar18 << 4);
  iVar68 = auVar31._4_4_;
  iVar39 = auVar31._12_4_;
  auVar27 = *(undefined1 (*) [16])(param_4[1] + uVar21) ^ auVar54;
  auVar32._0_4_ = iVar39 >> 0x1f;
  auVar32._4_4_ = auVar32._0_4_;
  auVar32._8_4_ = iVar68 >> 0x1f;
  auVar32._12_4_ = auVar32._8_4_;
  auVar72._8_8_ = auVar31._8_8_ * 2;
  auVar72._0_8_ = auVar31._0_8_ * 2;
  auVar31 = auVar31 ^ auVar54;
  auVar72 = auVar72 ^ auVar32 & _L_xts_magic;
  auVar43._0_4_ = iVar39 * 2 >> 0x1f;
  auVar43._4_4_ = iVar39 * 2 >> 0x1f;
  auVar43._8_4_ = iVar68 * 2 >> 0x1f;
  auVar43._12_4_ = iVar68 * 2 >> 0x1f;
  auVar73._8_8_ = auVar72._8_8_ * 2;
  auVar73._0_8_ = auVar72._0_8_ * 2;
  auVar72 = auVar72 ^ auVar54;
  auVar73 = auVar73 ^ auVar43 & _L_xts_magic;
  auVar49._0_4_ = iVar39 * 4 >> 0x1f;
  auVar49._4_4_ = iVar39 * 4 >> 0x1f;
  auVar49._8_4_ = iVar68 * 4 >> 0x1f;
  auVar49._12_4_ = iVar68 * 4 >> 0x1f;
  auVar74._8_8_ = auVar73._8_8_ * 2;
  auVar74._0_8_ = auVar73._0_8_ * 2;
  auVar73 = auVar73 ^ auVar54;
  auVar74 = auVar74 ^ auVar49 & _L_xts_magic;
  auVar53._0_4_ = iVar39 * 8 >> 0x1f;
  auVar53._4_4_ = iVar39 * 8 >> 0x1f;
  auVar53._8_4_ = iVar68 * 8 >> 0x1f;
  auVar53._12_4_ = iVar68 * 8 >> 0x1f;
  auVar75._8_8_ = auVar74._8_8_ * 2;
  auVar75._0_8_ = auVar74._0_8_ * 2;
  auVar74 = auVar74 ^ auVar54;
  auVar75 = auVar75 ^ auVar53 & _L_xts_magic;
  auVar44._0_4_ = (iVar39 << 4) >> 0x1f;
  auVar44._4_4_ = (iVar39 << 4) >> 0x1f;
  auVar44._8_4_ = (iVar68 << 4) >> 0x1f;
  auVar44._12_4_ = (iVar68 << 4) >> 0x1f;
  auVar76._8_8_ = auVar75._8_8_ * 2;
  auVar76._0_8_ = auVar75._0_8_ * 2;
  auVar75 = auVar75 ^ auVar54;
  auVar76 = auVar76 ^ auVar44 & _L_xts_magic;
  uVar23 = (param_3 & 0xfffffffffffffff0) - 0x60;
  auVar30 = _L_xts_magic;
  if (0x5f < (param_3 & 0xfffffffffffffff0)) {
    auVar44 = param_4[1];
    pauVar22 = param_2;
    do {
      auVar30 = _L_xts_magic;
      auVar32 = aesdec(*param_1 ^ auVar31,auVar44);
      auVar43 = aesdec(param_1[1] ^ auVar72,auVar44);
      pauVar1 = param_1 + 4;
      auVar49 = aesdec(param_1[2] ^ auVar73,auVar44);
      pauVar2 = param_1 + 5;
      auVar57 = auVar54 ^ auVar76;
      auVar53 = aesdec(param_1[3] ^ auVar74,auVar44);
      auVar54 = param_4[2];
      param_1 = param_1 + 6;
      auVar58 = auVar31 ^ auVar27;
      auVar55 = aesdec(*pauVar1 ^ auVar75,auVar44);
      auVar62 = auVar72 ^ auVar27;
      auVar56 = aesdec(*pauVar2 ^ auVar57,auVar44);
      auVar31 = param_4[3];
      auVar66 = auVar73 ^ auVar27;
      auVar72 = aesdec(auVar32,auVar54);
      auVar67 = auVar74 ^ auVar27;
      auVar44 = aesdec(auVar43,auVar54);
      auVar69 = auVar75 ^ auVar27;
      auVar73 = aesdec(auVar49,auVar54);
      auVar74 = aesdec(auVar53,auVar54);
      auVar32 = aesdec(auVar55,auVar54);
      auVar43 = aesdec(auVar56,auVar54);
      auVar54 = param_4[4];
      iVar68 = auVar76._4_4_;
      iVar39 = auVar76._12_4_;
      lVar19 = 0x70 - uVar21;
      do {
        auVar75 = aesdec(auVar72,auVar31);
        auVar44 = aesdec(auVar44,auVar31);
        auVar73 = aesdec(auVar73,auVar31);
        auVar74 = aesdec(auVar74,auVar31);
        auVar32 = aesdec(auVar32,auVar31);
        auVar43 = aesdec(auVar43,auVar31);
        auVar31 = *(undefined1 (*) [16])(param_4[-2] + lVar19 + uVar21);
        lVar20 = lVar19 + 0x20;
        auVar72 = aesdec(auVar75,auVar54);
        auVar44 = aesdec(auVar44,auVar54);
        auVar73 = aesdec(auVar73,auVar54);
        auVar74 = aesdec(auVar74,auVar54);
        auVar32 = aesdec(auVar32,auVar54);
        auVar43 = aesdec(auVar43,auVar54);
        auVar54 = *(undefined1 (*) [16])(param_4[-1] + uVar21 + lVar19);
        lVar19 = lVar20;
      } while (lVar20 != 0);
      auVar72 = aesdec(auVar72,auVar31);
      auVar77._8_8_ = auVar76._8_8_ * 2;
      auVar77._0_8_ = auVar76._0_8_ * 2;
      auVar55._0_4_ = iVar39 >> 0x1f;
      auVar55._4_4_ = auVar55._0_4_;
      auVar55._8_4_ = iVar68 >> 0x1f;
      auVar55._12_4_ = auVar55._8_4_;
      auVar76 = aesdec(auVar44,auVar31);
      auVar75 = *param_4;
      auVar49 = aesdec(auVar73,auVar31);
      auVar74 = aesdec(auVar74,auVar31);
      auVar53 = aesdec(auVar32,auVar31);
      auVar77 = auVar77 ^ auVar55 & _L_xts_magic;
      auVar43 = aesdec(auVar43,auVar31);
      auVar44 = *(undefined1 (*) [16])(param_4[-2] + uVar21);
      auVar72 = aesdec(auVar72,auVar54);
      auVar31 = auVar75 ^ auVar77;
      auVar73 = aesdec(auVar76,auVar54);
      auVar56._0_4_ = iVar39 * 2 >> 0x1f;
      auVar56._4_4_ = iVar39 * 2 >> 0x1f;
      auVar56._8_4_ = iVar68 * 2 >> 0x1f;
      auVar56._12_4_ = iVar68 * 2 >> 0x1f;
      auVar78._8_8_ = auVar77._8_8_ * 2;
      auVar78._0_8_ = auVar77._0_8_ * 2;
      auVar32 = aesdec(auVar49,auVar54);
      auVar49 = aesdec(auVar74,auVar54);
      auVar55 = aesdec(auVar53,auVar54);
      auVar78 = auVar78 ^ auVar56 & _L_xts_magic;
      auVar56 = aesdec(auVar43,auVar54);
      auVar54 = *(undefined1 (*) [16])(param_4[-1] + uVar21);
      auVar76 = aesdec(auVar72,auVar44);
      auVar72 = auVar75 ^ auVar78;
      auVar70._0_4_ = iVar39 * 4 >> 0x1f;
      auVar70._4_4_ = iVar39 * 4 >> 0x1f;
      auVar70._8_4_ = iVar68 * 4 >> 0x1f;
      auVar70._12_4_ = iVar68 * 4 >> 0x1f;
      auVar74 = aesdec(auVar73,auVar44);
      auVar79._8_8_ = auVar78._8_8_ * 2;
      auVar79._0_8_ = auVar78._0_8_ * 2;
      auVar43 = aesdec(auVar32,auVar44);
      auVar53 = aesdec(auVar49,auVar44);
      auVar79 = auVar79 ^ auVar70 & _L_xts_magic;
      auVar55 = aesdec(auVar55,auVar44);
      auVar56 = aesdec(auVar56,auVar44);
      auVar44 = *(undefined1 (*) [16])(*param_4 + uVar21);
      auVar76 = aesdec(auVar76,auVar54);
      auVar73 = auVar75 ^ auVar79;
      auVar71._0_4_ = iVar39 * 8 >> 0x1f;
      auVar71._4_4_ = iVar39 * 8 >> 0x1f;
      auVar71._8_4_ = iVar68 * 8 >> 0x1f;
      auVar71._12_4_ = iVar68 * 8 >> 0x1f;
      auVar32 = aesdec(auVar74,auVar54);
      auVar80._8_8_ = auVar79._8_8_ * 2;
      auVar80._0_8_ = auVar79._0_8_ * 2;
      auVar49 = aesdec(auVar43,auVar54);
      auVar53 = aesdec(auVar53,auVar54);
      auVar55 = aesdec(auVar55,auVar54);
      auVar80 = auVar80 ^ auVar71 & _L_xts_magic;
      auVar56 = aesdec(auVar56,auVar54);
      auVar76 = aesdec(auVar76,auVar44);
      auVar74 = auVar75 ^ auVar80;
      auVar54._0_4_ = iVar39 * 0x10 >> 0x1f;
      auVar54._4_4_ = iVar39 * 0x10 >> 0x1f;
      auVar54._8_4_ = iVar68 * 0x10 >> 0x1f;
      auVar54._12_4_ = iVar68 * 0x10 >> 0x1f;
      auVar43 = aesdec(auVar32,auVar44);
      auVar81._8_8_ = auVar80._8_8_ * 2;
      auVar81._0_8_ = auVar80._0_8_ * 2;
      auVar49 = aesdec(auVar49,auVar44);
      auVar53 = aesdec(auVar53,auVar44);
      auVar81 = auVar81 ^ auVar54 & _L_xts_magic;
      auVar54 = *param_4;
      auVar55 = aesdec(auVar55,auVar44);
      auVar56 = aesdec(auVar56,auVar44);
      auVar44 = param_4[1];
      auVar75 = auVar75 ^ auVar81;
      auVar32 = aesdeclast(auVar76,auVar58);
      auVar58._0_4_ = (iVar39 << 5) >> 0x1f;
      auVar58._4_4_ = (iVar39 << 5) >> 0x1f;
      auVar58._8_4_ = (iVar68 << 5) >> 0x1f;
      auVar58._12_4_ = (iVar68 << 5) >> 0x1f;
      auVar82._8_8_ = auVar81._8_8_ * 2;
      auVar82._0_8_ = auVar81._0_8_ * 2;
      auVar43 = aesdeclast(auVar43,auVar62);
      auVar49 = aesdeclast(auVar49,auVar66);
      auVar53 = aesdeclast(auVar53,auVar67);
      auVar55 = aesdeclast(auVar55,auVar69);
      auVar56 = aesdeclast(auVar56,auVar57 ^ auVar27);
      auVar76 = auVar82 ^ auVar58 & _L_xts_magic;
      param_2 = pauVar22 + 6;
      *pauVar22 = auVar32;
      pauVar22[1] = auVar43;
      pauVar22[2] = auVar49;
      pauVar22[3] = auVar53;
      pauVar22[4] = auVar55;
      pauVar22[5] = auVar56;
      bVar26 = 0x5f < uVar23;
      uVar23 = uVar23 - 0x60;
      pauVar22 = param_2;
    } while (bVar26);
    uVar18 = 0x70U - (int)(0x70 - uVar21) >> 4;
  }
  uVar21 = (ulonglong)uVar18;
  auVar31 = auVar31 ^ auVar54;
  auVar72 = auVar72 ^ auVar54;
  uVar24 = uVar23 + 0x60;
  auVar27 = auVar72;
  if (uVar23 == 0xffffffffffffffa0) {
L_xts_dec_done:
    auVar76 = auVar31;
    param_3 = param_3 & 0xf;
    if (param_3 == 0) goto L_xts_dec_ret;
  }
  else {
    auVar27 = auVar73 ^ auVar54;
    uVar17 = auVar31._0_4_;
    uVar59 = auVar31._4_4_;
    uVar60 = auVar31._8_4_;
    uVar61 = auVar31._12_4_;
    if (uVar24 < 0x20) {
      puVar4 = *param_1;
      puVar5 = *param_1;
      puVar6 = *param_1;
      puVar7 = *param_1;
      param_1 = param_1 + 1;
      auVar54 = param_4[1];
      pauVar22 = param_4 + 2;
      auVar31._0_4_ = *(uint *)puVar4 ^ uVar17 ^ *(uint *)*param_4;
      auVar31._4_4_ = *(uint *)(puVar5 + 4) ^ uVar59 ^ *(uint *)(*param_4 + 4);
      auVar31._8_4_ = *(uint *)(puVar6 + 8) ^ uVar60 ^ *(uint *)(*param_4 + 8);
      auVar31._12_4_ = *(uint *)(puVar7 + 0xc) ^ uVar61 ^ *(uint *)(*param_4 + 0xc);
      do {
        auVar31 = aesdec(auVar31,auVar54);
        uVar18 = uVar18 - 1;
        auVar54 = *pauVar22;
        pauVar22 = pauVar22 + 1;
      } while (uVar18 != 0);
      auVar54 = aesdeclast(auVar31,auVar54);
      *(uint *)*param_2 = auVar54._0_4_ ^ uVar17;
      *(uint *)(*param_2 + 4) = auVar54._4_4_ ^ uVar59;
      *(uint *)(*param_2 + 8) = auVar54._8_4_ ^ uVar60;
      *(uint *)(*param_2 + 0xc) = auVar54._12_4_ ^ uVar61;
      param_2 = param_2 + 1;
      auVar31 = auVar72;
      goto L_xts_dec_done;
    }
    auVar74 = auVar74 ^ auVar54;
    uVar18 = auVar72._0_4_;
    uVar63 = auVar72._4_4_;
    uVar64 = auVar72._8_4_;
    uVar65 = auVar72._12_4_;
    if (uVar24 == 0x20) {
      puVar4 = *param_1;
      puVar5 = *param_1;
      puVar6 = *param_1;
      puVar7 = *param_1;
      pauVar22 = param_1 + 1;
      pauVar1 = param_1 + 1;
      pauVar2 = param_1 + 1;
      pauVar8 = param_1 + 1;
      param_1 = param_1 + 2;
      uVar28 = *(uint *)puVar4 ^ uVar17;
      uVar35 = *(uint *)(puVar5 + 4) ^ uVar59;
      uVar37 = *(uint *)(puVar6 + 8) ^ uVar60;
      uVar40 = *(uint *)(puVar7 + 0xc) ^ uVar61;
      uVar29 = *(uint *)*pauVar22 ^ uVar18;
      uVar36 = *(uint *)(*pauVar1 + 4) ^ uVar63;
      uVar38 = *(uint *)(*pauVar2 + 8) ^ uVar64;
      uVar41 = *(uint *)(*pauVar8 + 0xc) ^ uVar65;
      _aesni_decrypt2();
      *(uint *)*param_2 = uVar28 ^ uVar17;
      *(uint *)(*param_2 + 4) = uVar35 ^ uVar59;
      *(uint *)(*param_2 + 8) = uVar37 ^ uVar60;
      *(uint *)(*param_2 + 0xc) = uVar40 ^ uVar61;
      *(uint *)param_2[1] = uVar29 ^ uVar18;
      *(uint *)(param_2[1] + 4) = uVar36 ^ uVar63;
      *(uint *)(param_2[1] + 8) = uVar38 ^ uVar64;
      *(uint *)(param_2[1] + 0xc) = uVar41 ^ uVar65;
      param_2 = param_2 + 2;
      auVar31 = auVar27;
      auVar27 = auVar74;
      goto L_xts_dec_done;
    }
    auVar75 = auVar75 ^ auVar54;
    uVar28 = auVar27._0_4_;
    uVar35 = auVar27._4_4_;
    uVar37 = auVar27._8_4_;
    uVar40 = auVar27._12_4_;
    if (uVar24 < 0x40) {
      puVar4 = *param_1;
      puVar5 = *param_1;
      puVar6 = *param_1;
      puVar7 = *param_1;
      pauVar22 = param_1 + 1;
      pauVar2 = param_1 + 1;
      pauVar8 = param_1 + 1;
      pauVar9 = param_1 + 1;
      pauVar1 = param_1 + 2;
      pauVar10 = param_1 + 2;
      pauVar11 = param_1 + 2;
      pauVar12 = param_1 + 2;
      param_1 = param_1 + 3;
      uVar29 = *(uint *)puVar4 ^ uVar17;
      uVar36 = *(uint *)(puVar5 + 4) ^ uVar59;
      uVar38 = *(uint *)(puVar6 + 8) ^ uVar60;
      uVar41 = *(uint *)(puVar7 + 0xc) ^ uVar61;
      uVar42 = *(uint *)*pauVar22 ^ uVar18;
      uVar45 = *(uint *)(*pauVar2 + 4) ^ uVar63;
      uVar46 = *(uint *)(*pauVar8 + 8) ^ uVar64;
      uVar47 = *(uint *)(*pauVar9 + 0xc) ^ uVar65;
      uVar48 = *(uint *)*pauVar1 ^ uVar28;
      uVar50 = *(uint *)(*pauVar10 + 4) ^ uVar35;
      uVar51 = *(uint *)(*pauVar11 + 8) ^ uVar37;
      uVar52 = *(uint *)(*pauVar12 + 0xc) ^ uVar40;
      _aesni_decrypt3();
      *(uint *)*param_2 = uVar29 ^ uVar17;
      *(uint *)(*param_2 + 4) = uVar36 ^ uVar59;
      *(uint *)(*param_2 + 8) = uVar38 ^ uVar60;
      *(uint *)(*param_2 + 0xc) = uVar41 ^ uVar61;
      *(uint *)param_2[1] = uVar42 ^ uVar18;
      *(uint *)(param_2[1] + 4) = uVar45 ^ uVar63;
      *(uint *)(param_2[1] + 8) = uVar46 ^ uVar64;
      *(uint *)(param_2[1] + 0xc) = uVar47 ^ uVar65;
      *(uint *)param_2[2] = uVar48 ^ uVar28;
      *(uint *)(param_2[2] + 4) = uVar50 ^ uVar35;
      *(uint *)(param_2[2] + 8) = uVar51 ^ uVar37;
      *(uint *)(param_2[2] + 0xc) = uVar52 ^ uVar40;
      param_2 = param_2 + 3;
      auVar31 = auVar74;
      auVar27 = auVar75;
      goto L_xts_dec_done;
    }
    if (uVar24 == 0x40) {
      pauVar22 = param_1 + 1;
      pauVar8 = param_1 + 1;
      pauVar9 = param_1 + 1;
      pauVar10 = param_1 + 1;
      pauVar1 = param_1 + 2;
      pauVar11 = param_1 + 2;
      pauVar12 = param_1 + 2;
      pauVar13 = param_1 + 2;
      auVar57._0_4_ = *(uint *)*param_1 ^ uVar17;
      auVar57._4_4_ = *(uint *)(*param_1 + 4) ^ uVar59;
      auVar57._8_4_ = *(uint *)(*param_1 + 8) ^ uVar60;
      auVar57._12_4_ = *(uint *)(*param_1 + 0xc) ^ uVar61;
      pauVar2 = param_1 + 3;
      pauVar14 = param_1 + 3;
      pauVar15 = param_1 + 3;
      pauVar16 = param_1 + 3;
      param_1 = param_1 + 4;
      auVar62._0_4_ = *(uint *)*pauVar22 ^ uVar18;
      auVar62._4_4_ = *(uint *)(*pauVar8 + 4) ^ uVar63;
      auVar62._8_4_ = *(uint *)(*pauVar9 + 8) ^ uVar64;
      auVar62._12_4_ = *(uint *)(*pauVar10 + 0xc) ^ uVar65;
      auVar66._0_4_ = *(uint *)*pauVar1 ^ uVar28;
      auVar66._4_4_ = *(uint *)(*pauVar11 + 4) ^ uVar35;
      auVar66._8_4_ = *(uint *)(*pauVar12 + 8) ^ uVar37;
      auVar66._12_4_ = *(uint *)(*pauVar13 + 0xc) ^ uVar40;
      auVar67._0_4_ = *(uint *)*pauVar2 ^ auVar74._0_4_;
      auVar67._4_4_ = *(uint *)(*pauVar14 + 4) ^ auVar74._4_4_;
      auVar67._8_4_ = *(uint *)(*pauVar15 + 8) ^ auVar74._8_4_;
      auVar67._12_4_ = *(uint *)(*pauVar16 + 0xc) ^ auVar74._12_4_;
      _aesni_decrypt4();
      *param_2 = auVar57 ^ auVar31;
      param_2[1] = auVar62 ^ auVar72;
      param_2[2] = auVar66 ^ auVar27;
      param_2[3] = auVar67 ^ auVar74;
      param_2 = param_2 + 4;
      auVar31 = auVar75;
      auVar27 = auVar76;
      goto L_xts_dec_done;
    }
    pauVar22 = param_1 + 2;
    auVar31 = *param_1 ^ auVar31;
    pauVar1 = param_1 + 3;
    auVar72 = param_1[1] ^ auVar72;
    pauVar2 = param_1 + 4;
    param_1 = param_1 + 5;
    auVar27 = *pauVar22 ^ auVar27;
    auVar54 = *pauVar1 ^ auVar74;
    auVar44 = *pauVar2 ^ auVar75;
    _aesni_decrypt6();
    *(uint *)*param_2 = auVar31._0_4_ ^ uVar17;
    *(uint *)(*param_2 + 4) = auVar31._4_4_ ^ uVar59;
    *(uint *)(*param_2 + 8) = auVar31._8_4_ ^ uVar60;
    *(uint *)(*param_2 + 0xc) = auVar31._12_4_ ^ uVar61;
    *(uint *)param_2[1] = auVar72._0_4_ ^ uVar18;
    *(uint *)(param_2[1] + 4) = auVar72._4_4_ ^ uVar63;
    *(uint *)(param_2[1] + 8) = auVar72._8_4_ ^ uVar64;
    *(uint *)(param_2[1] + 0xc) = auVar72._12_4_ ^ uVar65;
    *(uint *)param_2[2] = auVar27._0_4_ ^ uVar28;
    *(uint *)(param_2[2] + 4) = auVar27._4_4_ ^ uVar35;
    *(uint *)(param_2[2] + 8) = auVar27._8_4_ ^ uVar37;
    *(uint *)(param_2[2] + 0xc) = auVar27._12_4_ ^ uVar40;
    *(uint *)param_2[3] = auVar54._0_4_ ^ auVar74._0_4_;
    *(uint *)(param_2[3] + 4) = auVar54._4_4_ ^ auVar74._4_4_;
    *(uint *)(param_2[3] + 8) = auVar54._8_4_ ^ auVar74._8_4_;
    *(uint *)(param_2[3] + 0xc) = auVar54._12_4_ ^ auVar74._12_4_;
    iVar68 = -(uint)(auVar76._0_4_ < 0);
    *(uint *)param_2[4] = auVar44._0_4_ ^ auVar75._0_4_;
    *(uint *)(param_2[4] + 4) = auVar44._4_4_ ^ auVar75._4_4_;
    *(uint *)(param_2[4] + 8) = auVar44._8_4_ ^ auVar75._8_4_;
    *(uint *)(param_2[4] + 0xc) = auVar44._12_4_ ^ auVar75._12_4_;
    param_2 = param_2 + 5;
    auVar69._4_4_ = iVar68;
    auVar69._0_4_ = -(uint)(auVar76._12_4_ < SUB124(SUB1612((undefined1  [16])0x0,4),8));
    auVar69._8_4_ = -(uint)(auVar76._4_4_ < 0);
    auVar69._12_4_ = iVar68;
    param_3 = param_3 & 0xf;
    if (param_3 == 0) goto L_xts_dec_ret;
    auVar27._8_8_ = auVar76._8_8_ * 2;
    auVar27._0_8_ = auVar76._0_8_ * 2;
    auVar27 = auVar69 & auVar30 ^ auVar27;
  }
  uVar23 = uVar21 & 0xffffffff;
  auVar54 = param_4[1];
  pauVar22 = param_4 + 2;
  auVar33._0_4_ = *(uint *)*param_1 ^ auVar27._0_4_ ^ *(uint *)*param_4;
  auVar33._4_4_ = *(uint *)(*param_1 + 4) ^ auVar27._4_4_ ^ *(uint *)(*param_4 + 4);
  auVar33._8_4_ = *(uint *)(*param_1 + 8) ^ auVar27._8_4_ ^ *(uint *)(*param_4 + 8);
  auVar33._12_4_ = *(uint *)(*param_1 + 0xc) ^ auVar27._12_4_ ^ *(uint *)(*param_4 + 0xc);
  do {
    auVar33 = aesdec(auVar33,auVar54);
    uVar17 = (int)uVar23 - 1;
    uVar23 = (ulonglong)uVar17;
    auVar54 = *pauVar22;
    pauVar22 = pauVar22 + 1;
  } while (uVar17 != 0);
  auVar54 = aesdeclast(auVar33,auVar54);
  *(uint *)*param_2 = auVar54._0_4_ ^ auVar27._0_4_;
  *(uint *)(*param_2 + 4) = auVar54._4_4_ ^ auVar27._4_4_;
  *(uint *)(*param_2 + 8) = auVar54._8_4_ ^ auVar27._8_4_;
  *(uint *)(*param_2 + 0xc) = auVar54._12_4_ ^ auVar27._12_4_;
  uVar23 = param_3;
  do {
    pauVar22 = param_1 + 1;
    uVar3 = (*param_2)[0];
    param_1 = (undefined1 (*) [16])(*param_1 + 1);
    (*param_2)[0] = (*pauVar22)[0];
    param_2[1][0] = uVar3;
    param_2 = (undefined1 (*) [16])(*param_2 + 1);
    uVar23 = uVar23 - 1;
  } while (uVar23 != 0);
  puVar25 = (uint *)((longlong)param_2 - param_3);
  uVar21 = uVar21 & 0xffffffff;
  auVar54 = param_4[1];
  pauVar22 = param_4 + 2;
  auVar34._0_4_ = *puVar25 ^ auVar76._0_4_ ^ *(uint *)*param_4;
  auVar34._4_4_ = puVar25[1] ^ auVar76._4_4_ ^ *(uint *)(*param_4 + 4);
  auVar34._8_4_ = puVar25[2] ^ auVar76._8_4_ ^ *(uint *)(*param_4 + 8);
  auVar34._12_4_ = puVar25[3] ^ auVar76._12_4_ ^ *(uint *)(*param_4 + 0xc);
  do {
    auVar34 = aesdec(auVar34,auVar54);
    uVar17 = (int)uVar21 - 1;
    uVar21 = (ulonglong)uVar17;
    auVar54 = *pauVar22;
    pauVar22 = pauVar22 + 1;
  } while (uVar17 != 0);
  auVar54 = aesdeclast(auVar34,auVar54);
  *puVar25 = auVar54._0_4_ ^ auVar76._0_4_;
  puVar25[1] = auVar54._4_4_ ^ auVar76._4_4_;
  puVar25[2] = auVar54._8_4_ ^ auVar76._8_4_;
  puVar25[3] = auVar54._12_4_ ^ auVar76._12_4_;
L_xts_dec_ret:
  *(undefined8 *)((longlong)register0x00000020 + -0xa8) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0xa0) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x98) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x90) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x88) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x80) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x78) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x70) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x68) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x60) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x58) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x50) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x48) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x40) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x38) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x30) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x28) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x20) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x18) = 0;
  *(undefined8 *)((longlong)register0x00000020 + -0x10) = 0;
  return;
}

// aesni_ocb_encrypt @ 140df6560

void aesni_ocb_encrypt(undefined8 param_1,undefined8 *param_2,ulonglong param_3,longlong param_4,
                      ulonglong param_5,uint *param_6,uint *param_7,undefined8 *param_8)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *in_RCX;
  ulonglong uVar13;
  uint in_XMM0_Dc;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dc_00;
  uint extraout_XMM0_Dc_01;
  uint extraout_XMM0_Dc_02;
  uint extraout_XMM0_Dc_03;
  uint extraout_XMM0_Dc_04;
  uint extraout_XMM0_Dc_05;
  uint in_XMM0_Dd;
  uint extraout_XMM0_Dd;
  uint extraout_XMM0_Dd_00;
  uint extraout_XMM0_Dd_01;
  uint extraout_XMM0_Dd_02;
  uint extraout_XMM0_Dd_03;
  uint extraout_XMM0_Dd_04;
  uint extraout_XMM0_Dd_05;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  uint unaff_XMM11_Da;
  uint unaff_XMM11_Db;
  uint unaff_XMM11_Dc;
  uint unaff_XMM11_Dd;
  uint unaff_XMM12_Da;
  uint unaff_XMM12_Db;
  uint unaff_XMM12_Dc;
  uint unaff_XMM12_Dd;
  uint unaff_XMM13_Da;
  uint unaff_XMM13_Db;
  uint unaff_XMM13_Dc;
  uint unaff_XMM13_Dd;
  uint unaff_XMM14_Da;
  uint unaff_XMM14_Db;
  uint unaff_XMM14_Dc;
  uint unaff_XMM14_Dd;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  
  uVar13 = (ulonglong)(uint)(*(int *)(param_4 + 0xf0) << 4);
  puVar1 = (uint *)(param_4 + 0x10 + uVar13);
  uVar22 = *param_6 ^ *puVar1;
  uVar23 = param_6[1] ^ puVar1[1];
  uVar24 = param_6[2] ^ puVar1[2];
  uVar25 = param_6[3] ^ puVar1[3];
  uVar3 = *param_7;
  uVar4 = param_7[1];
  uVar5 = param_7[2];
  uVar6 = param_7[3];
  uVar7 = *param_8;
  uVar8 = param_8[1];
  if ((param_5 & 1) == 0) {
    lVar2 = 0;
    if (param_5 != 0) {
      for (; (param_5 >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
      }
    }
    param_5 = param_5 + 1;
    param_7 = param_7 + lVar2 * 4;
    uVar22 = *param_7;
    uVar23 = param_7[1];
    uVar24 = param_7[2];
    uVar25 = param_7[3];
    uVar14 = *in_RCX;
    uVar15 = in_RCX[1];
    in_RCX = in_RCX + 2;
    param_1 = __ocb_encrypt1(param_4 + 0x20 + uVar13);
    *param_2 = uVar14;
    param_2[1] = uVar15;
    param_2 = param_2 + 2;
    param_3 = param_3 - 1;
    in_XMM0_Dc = extraout_XMM0_Dc;
    in_XMM0_Dd = extraout_XMM0_Dd;
    if (param_3 == 0) goto L_ocb_enc_done;
  }
  lVar2 = 0;
  if (param_5 + 1 != 0) {
    for (; (param_5 + 1 >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
    }
  }
  lVar2 = 0;
  if (param_5 + 3 != 0) {
    for (; (param_5 + 3 >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
    }
  }
  lVar2 = 0;
  if (param_5 + 5 != 0) {
    for (; (param_5 + 5 >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
    }
  }
  while (uVar13 = param_3 - 6, 5 < param_3) {
    uVar14 = *in_RCX;
    uVar15 = in_RCX[1];
    uVar16 = in_RCX[2];
    uVar17 = in_RCX[3];
    uVar18 = in_RCX[4];
    uVar19 = in_RCX[5];
    uVar20 = in_RCX[6];
    uVar21 = in_RCX[7];
    uVar9 = in_RCX[8];
    uVar10 = in_RCX[9];
    uVar11 = in_RCX[10];
    uVar12 = in_RCX[0xb];
    in_RCX = in_RCX + 0xc;
    param_1 = __ocb_encrypt6();
    *param_2 = uVar14;
    param_2[1] = uVar15;
    param_2[2] = uVar16;
    param_2[3] = uVar17;
    param_2[4] = uVar18;
    param_2[5] = uVar19;
    param_2[6] = uVar20;
    param_2[7] = uVar21;
    param_2[8] = uVar9;
    param_2[9] = uVar10;
    param_2[10] = uVar11;
    param_2[0xb] = uVar12;
    param_2 = param_2 + 0xc;
    in_XMM0_Dc = extraout_XMM0_Dc_00;
    in_XMM0_Dd = extraout_XMM0_Dd_00;
    param_3 = uVar13;
  }
  if (uVar13 != 0xfffffffffffffffa) {
    uVar14 = *in_RCX;
    uVar15 = in_RCX[1];
    if (param_3 < 2) {
      param_1 = __ocb_encrypt1();
      *param_2 = uVar14;
      param_2[1] = uVar15;
      in_XMM0_Dc = extraout_XMM0_Dc_02;
      in_XMM0_Dd = extraout_XMM0_Dd_02;
      uVar22 = uVar3;
      uVar23 = uVar4;
      uVar24 = uVar5;
      uVar25 = uVar6;
    }
    else {
      uVar16 = in_RCX[2];
      uVar17 = in_RCX[3];
      if (param_3 == 2) {
        param_1 = __ocb_encrypt4();
        *param_2 = uVar14;
        param_2[1] = uVar15;
        param_2[2] = uVar16;
        param_2[3] = uVar17;
        in_XMM0_Dc = extraout_XMM0_Dc_03;
        in_XMM0_Dd = extraout_XMM0_Dd_03;
        uVar22 = unaff_XMM11_Da;
        uVar23 = unaff_XMM11_Db;
        uVar24 = unaff_XMM11_Dc;
        uVar25 = unaff_XMM11_Dd;
      }
      else {
        uVar18 = in_RCX[4];
        uVar19 = in_RCX[5];
        if (param_3 < 4) {
          param_1 = __ocb_encrypt4();
          *param_2 = uVar14;
          param_2[1] = uVar15;
          param_2[2] = uVar16;
          param_2[3] = uVar17;
          param_2[4] = uVar18;
          param_2[5] = uVar19;
          in_XMM0_Dc = extraout_XMM0_Dc_04;
          in_XMM0_Dd = extraout_XMM0_Dd_04;
          uVar22 = unaff_XMM12_Da;
          uVar23 = unaff_XMM12_Db;
          uVar24 = unaff_XMM12_Dc;
          uVar25 = unaff_XMM12_Dd;
        }
        else {
          uVar20 = in_RCX[6];
          uVar21 = in_RCX[7];
          if (param_3 == 4) {
            param_1 = __ocb_encrypt4();
            *param_2 = uVar14;
            param_2[1] = uVar15;
            param_2[2] = uVar16;
            param_2[3] = uVar17;
            param_2[4] = uVar18;
            param_2[5] = uVar19;
            param_2[6] = uVar20;
            param_2[7] = uVar21;
            in_XMM0_Dc = extraout_XMM0_Dc_05;
            in_XMM0_Dd = extraout_XMM0_Dd_05;
            uVar22 = unaff_XMM13_Da;
            uVar23 = unaff_XMM13_Db;
            uVar24 = unaff_XMM13_Dc;
            uVar25 = unaff_XMM13_Dd;
          }
          else {
            uVar9 = in_RCX[8];
            uVar10 = in_RCX[9];
            param_1 = __ocb_encrypt6();
            *param_2 = uVar14;
            param_2[1] = uVar15;
            param_2[2] = uVar16;
            param_2[3] = uVar17;
            param_2[4] = uVar18;
            param_2[5] = uVar19;
            param_2[6] = uVar20;
            param_2[7] = uVar21;
            param_2[8] = uVar9;
            param_2[9] = uVar10;
            in_XMM0_Dc = extraout_XMM0_Dc_01;
            in_XMM0_Dd = extraout_XMM0_Dd_01;
            uVar22 = unaff_XMM14_Da;
            uVar23 = unaff_XMM14_Db;
            uVar24 = unaff_XMM14_Dc;
            uVar25 = unaff_XMM14_Dd;
          }
        }
      }
    }
  }
L_ocb_enc_done:
  *param_8 = uVar7;
  param_8[1] = uVar8;
  *param_6 = uVar22 ^ (uint)param_1;
  param_6[1] = uVar23 ^ (uint)((ulonglong)param_1 >> 0x20);
  param_6[2] = uVar24 ^ in_XMM0_Dc;
  param_6[3] = uVar25 ^ in_XMM0_Dd;
  return;
}

// L$SEH_begin_aesni_ocb_encrypt @ 140df656d

void L_SEH_begin_aesni_ocb_encrypt
               (undefined8 param_1,undefined8 *param_2,ulonglong param_3,longlong param_4,
               ulonglong param_5,uint *param_6,uint *param_7,undefined8 *param_8)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *in_RCX;
  ulonglong uVar13;
  uint in_XMM0_Dc;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dc_00;
  uint extraout_XMM0_Dc_01;
  uint extraout_XMM0_Dc_02;
  uint extraout_XMM0_Dc_03;
  uint extraout_XMM0_Dc_04;
  uint extraout_XMM0_Dc_05;
  uint in_XMM0_Dd;
  uint extraout_XMM0_Dd;
  uint extraout_XMM0_Dd_00;
  uint extraout_XMM0_Dd_01;
  uint extraout_XMM0_Dd_02;
  uint extraout_XMM0_Dd_03;
  uint extraout_XMM0_Dd_04;
  uint extraout_XMM0_Dd_05;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  uint unaff_XMM11_Da;
  uint unaff_XMM11_Db;
  uint unaff_XMM11_Dc;
  uint unaff_XMM11_Dd;
  uint unaff_XMM12_Da;
  uint unaff_XMM12_Db;
  uint unaff_XMM12_Dc;
  uint unaff_XMM12_Dd;
  uint unaff_XMM13_Da;
  uint unaff_XMM13_Db;
  uint unaff_XMM13_Dc;
  uint unaff_XMM13_Dd;
  uint unaff_XMM14_Da;
  uint unaff_XMM14_Db;
  uint unaff_XMM14_Dc;
  uint unaff_XMM14_Dd;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  
  uVar13 = (ulonglong)(uint)(*(int *)(param_4 + 0xf0) << 4);
  puVar1 = (uint *)(param_4 + 0x10 + uVar13);
  uVar22 = *param_6 ^ *puVar1;
  uVar23 = param_6[1] ^ puVar1[1];
  uVar24 = param_6[2] ^ puVar1[2];
  uVar25 = param_6[3] ^ puVar1[3];
  uVar3 = *param_7;
  uVar4 = param_7[1];
  uVar5 = param_7[2];
  uVar6 = param_7[3];
  uVar7 = *param_8;
  uVar8 = param_8[1];
  if ((param_5 & 1) == 0) {
    lVar2 = 0;
    if (param_5 != 0) {
      for (; (param_5 >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
      }
    }
    param_5 = param_5 + 1;
    param_7 = param_7 + lVar2 * 4;
    uVar22 = *param_7;
    uVar23 = param_7[1];
    uVar24 = param_7[2];
    uVar25 = param_7[3];
    uVar14 = *in_RCX;
    uVar15 = in_RCX[1];
    in_RCX = in_RCX + 2;
    param_1 = __ocb_encrypt1(param_4 + 0x20 + uVar13);
    *param_2 = uVar14;
    param_2[1] = uVar15;
    param_2 = param_2 + 2;
    param_3 = param_3 - 1;
    in_XMM0_Dc = extraout_XMM0_Dc;
    in_XMM0_Dd = extraout_XMM0_Dd;
    if (param_3 == 0) goto L_ocb_enc_done;
  }
  lVar2 = 0;
  if (param_5 + 1 != 0) {
    for (; (param_5 + 1 >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
    }
  }
  lVar2 = 0;
  if (param_5 + 3 != 0) {
    for (; (param_5 + 3 >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
    }
  }
  lVar2 = 0;
  if (param_5 + 5 != 0) {
    for (; (param_5 + 5 >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
    }
  }
  while (uVar13 = param_3 - 6, 5 < param_3) {
    uVar14 = *in_RCX;
    uVar15 = in_RCX[1];
    uVar16 = in_RCX[2];
    uVar17 = in_RCX[3];
    uVar18 = in_RCX[4];
    uVar19 = in_RCX[5];
    uVar20 = in_RCX[6];
    uVar21 = in_RCX[7];
    uVar9 = in_RCX[8];
    uVar10 = in_RCX[9];
    uVar11 = in_RCX[10];
    uVar12 = in_RCX[0xb];
    in_RCX = in_RCX + 0xc;
    param_1 = __ocb_encrypt6();
    *param_2 = uVar14;
    param_2[1] = uVar15;
    param_2[2] = uVar16;
    param_2[3] = uVar17;
    param_2[4] = uVar18;
    param_2[5] = uVar19;
    param_2[6] = uVar20;
    param_2[7] = uVar21;
    param_2[8] = uVar9;
    param_2[9] = uVar10;
    param_2[10] = uVar11;
    param_2[0xb] = uVar12;
    param_2 = param_2 + 0xc;
    in_XMM0_Dc = extraout_XMM0_Dc_00;
    in_XMM0_Dd = extraout_XMM0_Dd_00;
    param_3 = uVar13;
  }
  if (uVar13 != 0xfffffffffffffffa) {
    uVar14 = *in_RCX;
    uVar15 = in_RCX[1];
    if (param_3 < 2) {
      param_1 = __ocb_encrypt1();
      *param_2 = uVar14;
      param_2[1] = uVar15;
      in_XMM0_Dc = extraout_XMM0_Dc_02;
      in_XMM0_Dd = extraout_XMM0_Dd_02;
      uVar22 = uVar3;
      uVar23 = uVar4;
      uVar24 = uVar5;
      uVar25 = uVar6;
    }
    else {
      uVar16 = in_RCX[2];
      uVar17 = in_RCX[3];
      if (param_3 == 2) {
        param_1 = __ocb_encrypt4();
        *param_2 = uVar14;
        param_2[1] = uVar15;
        param_2[2] = uVar16;
        param_2[3] = uVar17;
        in_XMM0_Dc = extraout_XMM0_Dc_03;
        in_XMM0_Dd = extraout_XMM0_Dd_03;
        uVar22 = unaff_XMM11_Da;
        uVar23 = unaff_XMM11_Db;
        uVar24 = unaff_XMM11_Dc;
        uVar25 = unaff_XMM11_Dd;
      }
      else {
        uVar18 = in_RCX[4];
        uVar19 = in_RCX[5];
        if (param_3 < 4) {
          param_1 = __ocb_encrypt4();
          *param_2 = uVar14;
          param_2[1] = uVar15;
          param_2[2] = uVar16;
          param_2[3] = uVar17;
          param_2[4] = uVar18;
          param_2[5] = uVar19;
          in_XMM0_Dc = extraout_XMM0_Dc_04;
          in_XMM0_Dd = extraout_XMM0_Dd_04;
          uVar22 = unaff_XMM12_Da;
          uVar23 = unaff_XMM12_Db;
          uVar24 = unaff_XMM12_Dc;
          uVar25 = unaff_XMM12_Dd;
        }
        else {
          uVar20 = in_RCX[6];
          uVar21 = in_RCX[7];
          if (param_3 == 4) {
            param_1 = __ocb_encrypt4();
            *param_2 = uVar14;
            param_2[1] = uVar15;
            param_2[2] = uVar16;
            param_2[3] = uVar17;
            param_2[4] = uVar18;
            param_2[5] = uVar19;
            param_2[6] = uVar20;
            param_2[7] = uVar21;
            in_XMM0_Dc = extraout_XMM0_Dc_05;
            in_XMM0_Dd = extraout_XMM0_Dd_05;
            uVar22 = unaff_XMM13_Da;
            uVar23 = unaff_XMM13_Db;
            uVar24 = unaff_XMM13_Dc;
            uVar25 = unaff_XMM13_Dd;
          }
          else {
            uVar9 = in_RCX[8];
            uVar10 = in_RCX[9];
            param_1 = __ocb_encrypt6();
            *param_2 = uVar14;
            param_2[1] = uVar15;
            param_2[2] = uVar16;
            param_2[3] = uVar17;
            param_2[4] = uVar18;
            param_2[5] = uVar19;
            param_2[6] = uVar20;
            param_2[7] = uVar21;
            param_2[8] = uVar9;
            param_2[9] = uVar10;
            in_XMM0_Dc = extraout_XMM0_Dc_01;
            in_XMM0_Dd = extraout_XMM0_Dd_01;
            uVar22 = unaff_XMM14_Da;
            uVar23 = unaff_XMM14_Db;
            uVar24 = unaff_XMM14_Dc;
            uVar25 = unaff_XMM14_Dd;
          }
        }
      }
    }
  }
L_ocb_enc_done:
  *param_8 = uVar7;
  param_8[1] = uVar8;
  *param_6 = uVar22 ^ (uint)param_1;
  param_6[1] = uVar23 ^ (uint)((ulonglong)param_1 >> 0x20);
  param_6[2] = uVar24 ^ in_XMM0_Dc;
  param_6[3] = uVar25 ^ in_XMM0_Dd;
  return;
}

// __ocb_encrypt6 @ 140df68a0

undefined8 __ocb_encrypt6(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  longlong in_RAX;
  longlong unaff_RBX;
  longlong in_R11;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong unaff_R14;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 in_XMM1_Dc;
  undefined4 uVar18;
  undefined4 in_XMM1_Dd;
  undefined4 uVar19;
  undefined1 in_XMM2 [16];
  undefined1 auVar20 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar21 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar22 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar23 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar24 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 unaff_XMM15 [16];
  undefined1 auVar33 [16];
  
  auVar28 = unaff_XMM10 ^ unaff_XMM15 ^ unaff_XMM9;
  auVar29 = *(undefined1 (*) [16])(unaff_RBX + unaff_R12) ^ auVar28;
  auVar30 = unaff_XMM10 ^ auVar29;
  auVar31 = *(undefined1 (*) [16])(unaff_RBX + unaff_R13) ^ auVar30;
  auVar32 = unaff_XMM10 ^ auVar31;
  auVar33 = *(undefined1 (*) [16])(unaff_RBX + unaff_R14) ^ auVar32;
  auVar26 = *(undefined1 (*) [16])(in_R11 + 0x20);
  lVar2 = 0;
  if (param_3 + 1U != 0) {
    for (; (param_3 + 1U >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
    }
  }
  lVar2 = 0;
  if (param_3 + 3U != 0) {
    for (; (param_3 + 3U >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
    }
  }
  lVar2 = 0;
  if (param_3 + 5U != 0) {
    for (; (param_3 + 5U >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
    }
  }
  auVar20._8_4_ = in_XMM1_Dc;
  auVar20._0_8_ = param_2;
  auVar20._12_4_ = in_XMM1_Dd;
  auVar20 = aesenc(in_XMM2 ^ auVar28,auVar20);
  auVar21._8_4_ = in_XMM1_Dc;
  auVar21._0_8_ = param_2;
  auVar21._12_4_ = in_XMM1_Dd;
  auVar21 = aesenc(in_XMM3 ^ auVar29,auVar21);
  auVar22._8_4_ = in_XMM1_Dc;
  auVar22._0_8_ = param_2;
  auVar22._12_4_ = in_XMM1_Dd;
  auVar22 = aesenc(in_XMM4 ^ auVar30,auVar22);
  auVar23._8_4_ = in_XMM1_Dc;
  auVar23._0_8_ = param_2;
  auVar23._12_4_ = in_XMM1_Dd;
  auVar23 = aesenc(in_XMM5 ^ auVar31,auVar23);
  auVar24._8_4_ = in_XMM1_Dc;
  auVar24._0_8_ = param_2;
  auVar24._12_4_ = in_XMM1_Dd;
  auVar24 = aesenc(unaff_XMM6 ^ auVar32,auVar24);
  auVar25._8_4_ = in_XMM1_Dc;
  auVar25._0_8_ = param_2;
  auVar25._12_4_ = in_XMM1_Dd;
  auVar25 = aesenc(unaff_XMM7 ^ auVar33,auVar25);
  uVar16 = *(undefined4 *)(in_R11 + 0x30);
  uVar17 = *(undefined4 *)(in_R11 + 0x34);
  uVar18 = *(undefined4 *)(in_R11 + 0x38);
  uVar19 = *(undefined4 *)(in_R11 + 0x3c);
  auVar20 = aesenc(auVar20,auVar26);
  auVar21 = aesenc(auVar21,auVar26);
  auVar22 = aesenc(auVar22,auVar26);
  auVar23 = aesenc(auVar23,auVar26);
  auVar24 = aesenc(auVar24,auVar26);
  auVar26 = aesenc(auVar25,auVar26);
  uVar12 = *(undefined4 *)(in_R11 + 0x40);
  uVar13 = *(undefined4 *)(in_R11 + 0x44);
  uVar14 = *(undefined4 *)(in_R11 + 0x48);
  uVar15 = *(undefined4 *)(in_R11 + 0x4c);
  do {
    auVar27._4_4_ = uVar17;
    auVar27._0_4_ = uVar16;
    auVar27._8_4_ = uVar18;
    auVar27._12_4_ = uVar19;
    auVar20 = aesenc(auVar20,auVar27);
    auVar7._4_4_ = uVar17;
    auVar7._0_4_ = uVar16;
    auVar7._8_4_ = uVar18;
    auVar7._12_4_ = uVar19;
    auVar21 = aesenc(auVar21,auVar7);
    auVar8._4_4_ = uVar17;
    auVar8._0_4_ = uVar16;
    auVar8._8_4_ = uVar18;
    auVar8._12_4_ = uVar19;
    auVar22 = aesenc(auVar22,auVar8);
    auVar9._4_4_ = uVar17;
    auVar9._0_4_ = uVar16;
    auVar9._8_4_ = uVar18;
    auVar9._12_4_ = uVar19;
    auVar23 = aesenc(auVar23,auVar9);
    auVar10._4_4_ = uVar17;
    auVar10._0_4_ = uVar16;
    auVar10._8_4_ = uVar18;
    auVar10._12_4_ = uVar19;
    auVar24 = aesenc(auVar24,auVar10);
    auVar11._4_4_ = uVar17;
    auVar11._0_4_ = uVar16;
    auVar11._8_4_ = uVar18;
    auVar11._12_4_ = uVar19;
    auVar27 = aesenc(auVar26,auVar11);
    auVar25 = *(undefined1 (*) [16])(param_1 + in_RAX);
    uVar16 = auVar25._0_4_;
    uVar17 = auVar25._4_4_;
    uVar18 = auVar25._8_4_;
    uVar19 = auVar25._12_4_;
    in_RAX = in_RAX + 0x20;
    auVar26._4_4_ = uVar13;
    auVar26._0_4_ = uVar12;
    auVar26._8_4_ = uVar14;
    auVar26._12_4_ = uVar15;
    auVar20 = aesenc(auVar20,auVar26);
    auVar1._4_4_ = uVar13;
    auVar1._0_4_ = uVar12;
    auVar1._8_4_ = uVar14;
    auVar1._12_4_ = uVar15;
    auVar21 = aesenc(auVar21,auVar1);
    auVar3._4_4_ = uVar13;
    auVar3._0_4_ = uVar12;
    auVar3._8_4_ = uVar14;
    auVar3._12_4_ = uVar15;
    auVar22 = aesenc(auVar22,auVar3);
    auVar4._4_4_ = uVar13;
    auVar4._0_4_ = uVar12;
    auVar4._8_4_ = uVar14;
    auVar4._12_4_ = uVar15;
    auVar23 = aesenc(auVar23,auVar4);
    auVar5._4_4_ = uVar13;
    auVar5._0_4_ = uVar12;
    auVar5._8_4_ = uVar14;
    auVar5._12_4_ = uVar15;
    auVar24 = aesenc(auVar24,auVar5);
    auVar6._4_4_ = uVar13;
    auVar6._0_4_ = uVar12;
    auVar6._8_4_ = uVar14;
    auVar6._12_4_ = uVar15;
    auVar26 = aesenc(auVar27,auVar6);
    auVar1 = *(undefined1 (*) [16])(param_1 + -0x10 + in_RAX);
    uVar12 = auVar1._0_4_;
    uVar13 = auVar1._4_4_;
    uVar14 = auVar1._8_4_;
    uVar15 = auVar1._12_4_;
  } while (in_RAX != 0);
  auVar20 = aesenc(auVar20,auVar25);
  auVar21 = aesenc(auVar21,auVar25);
  auVar22 = aesenc(auVar22,auVar25);
  auVar23 = aesenc(auVar23,auVar25);
  auVar24 = aesenc(auVar24,auVar25);
  auVar26 = aesenc(auVar26,auVar25);
  aesenclast(auVar20,auVar28 ^ unaff_XMM9);
  aesenclast(auVar21,auVar29 ^ unaff_XMM9);
  aesenclast(auVar22,auVar30 ^ unaff_XMM9);
  aesenclast(auVar23,auVar31 ^ unaff_XMM9);
  aesenclast(auVar24,auVar32 ^ unaff_XMM9);
  aesenclast(auVar26,auVar33 ^ unaff_XMM9);
  return auVar1._0_8_;
}

// __ocb_encrypt4 @ 140df6a60

undefined8 __ocb_encrypt4(longlong param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong in_RAX;
  longlong unaff_RBX;
  longlong in_R11;
  longlong unaff_R12;
  longlong unaff_R13;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 in_XMM1_Dc;
  undefined4 uVar13;
  undefined4 in_XMM1_Dd;
  undefined4 uVar14;
  undefined1 in_XMM2 [16];
  undefined1 auVar15 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar16 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar17 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 unaff_XMM15 [16];
  
  auVar21 = unaff_XMM10 ^ unaff_XMM15 ^ unaff_XMM9;
  auVar22 = *(undefined1 (*) [16])(unaff_RBX + unaff_R12) ^ auVar21;
  auVar23 = unaff_XMM10 ^ auVar22;
  auVar24 = *(undefined1 (*) [16])(unaff_RBX + unaff_R13) ^ auVar23;
  auVar19 = *(undefined1 (*) [16])(in_R11 + 0x20);
  auVar15._8_4_ = in_XMM1_Dc;
  auVar15._0_8_ = param_2;
  auVar15._12_4_ = in_XMM1_Dd;
  auVar15 = aesenc(in_XMM2 ^ auVar21,auVar15);
  auVar16._8_4_ = in_XMM1_Dc;
  auVar16._0_8_ = param_2;
  auVar16._12_4_ = in_XMM1_Dd;
  auVar16 = aesenc(in_XMM3 ^ auVar22,auVar16);
  auVar17._8_4_ = in_XMM1_Dc;
  auVar17._0_8_ = param_2;
  auVar17._12_4_ = in_XMM1_Dd;
  auVar17 = aesenc(in_XMM4 ^ auVar23,auVar17);
  auVar18._8_4_ = in_XMM1_Dc;
  auVar18._0_8_ = param_2;
  auVar18._12_4_ = in_XMM1_Dd;
  auVar18 = aesenc(in_XMM5 ^ auVar24,auVar18);
  uVar11 = *(undefined4 *)(in_R11 + 0x30);
  uVar12 = *(undefined4 *)(in_R11 + 0x34);
  uVar13 = *(undefined4 *)(in_R11 + 0x38);
  uVar14 = *(undefined4 *)(in_R11 + 0x3c);
  auVar15 = aesenc(auVar15,auVar19);
  auVar16 = aesenc(auVar16,auVar19);
  auVar17 = aesenc(auVar17,auVar19);
  auVar19 = aesenc(auVar18,auVar19);
  uVar7 = *(undefined4 *)(in_R11 + 0x40);
  uVar8 = *(undefined4 *)(in_R11 + 0x44);
  uVar9 = *(undefined4 *)(in_R11 + 0x48);
  uVar10 = *(undefined4 *)(in_R11 + 0x4c);
  do {
    auVar20._4_4_ = uVar12;
    auVar20._0_4_ = uVar11;
    auVar20._8_4_ = uVar13;
    auVar20._12_4_ = uVar14;
    auVar15 = aesenc(auVar15,auVar20);
    auVar4._4_4_ = uVar12;
    auVar4._0_4_ = uVar11;
    auVar4._8_4_ = uVar13;
    auVar4._12_4_ = uVar14;
    auVar16 = aesenc(auVar16,auVar4);
    auVar5._4_4_ = uVar12;
    auVar5._0_4_ = uVar11;
    auVar5._8_4_ = uVar13;
    auVar5._12_4_ = uVar14;
    auVar17 = aesenc(auVar17,auVar5);
    auVar6._4_4_ = uVar12;
    auVar6._0_4_ = uVar11;
    auVar6._8_4_ = uVar13;
    auVar6._12_4_ = uVar14;
    auVar20 = aesenc(auVar19,auVar6);
    auVar18 = *(undefined1 (*) [16])(param_1 + in_RAX);
    uVar11 = auVar18._0_4_;
    uVar12 = auVar18._4_4_;
    uVar13 = auVar18._8_4_;
    uVar14 = auVar18._12_4_;
    in_RAX = in_RAX + 0x20;
    auVar19._4_4_ = uVar8;
    auVar19._0_4_ = uVar7;
    auVar19._8_4_ = uVar9;
    auVar19._12_4_ = uVar10;
    auVar15 = aesenc(auVar15,auVar19);
    auVar1._4_4_ = uVar8;
    auVar1._0_4_ = uVar7;
    auVar1._8_4_ = uVar9;
    auVar1._12_4_ = uVar10;
    auVar16 = aesenc(auVar16,auVar1);
    auVar2._4_4_ = uVar8;
    auVar2._0_4_ = uVar7;
    auVar2._8_4_ = uVar9;
    auVar2._12_4_ = uVar10;
    auVar17 = aesenc(auVar17,auVar2);
    auVar3._4_4_ = uVar8;
    auVar3._0_4_ = uVar7;
    auVar3._8_4_ = uVar9;
    auVar3._12_4_ = uVar10;
    auVar19 = aesenc(auVar20,auVar3);
    auVar1 = *(undefined1 (*) [16])(param_1 + -0x10 + in_RAX);
    uVar7 = auVar1._0_4_;
    uVar8 = auVar1._4_4_;
    uVar9 = auVar1._8_4_;
    uVar10 = auVar1._12_4_;
  } while (in_RAX != 0);
  auVar15 = aesenc(auVar15,auVar18);
  auVar16 = aesenc(auVar16,auVar18);
  auVar17 = aesenc(auVar17,auVar18);
  auVar19 = aesenc(auVar19,auVar18);
  aesenclast(auVar15,auVar21 ^ unaff_XMM9);
  aesenclast(auVar16,auVar22 ^ unaff_XMM9);
  aesenclast(auVar17,auVar23 ^ unaff_XMM9);
  aesenclast(auVar19,auVar24 ^ unaff_XMM9);
  return auVar1._0_8_;
}

// __ocb_encrypt1 @ 140df6b80

undefined8 __ocb_encrypt1(longlong param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong in_RAX;
  longlong in_R11;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_XMM1_Dc;
  undefined4 uVar9;
  undefined4 in_XMM1_Dd;
  undefined4 uVar10;
  undefined1 in_XMM2 [16];
  undefined1 auVar11 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 unaff_XMM15 [16];
  
  auVar11._8_4_ = in_XMM1_Dc;
  auVar11._0_8_ = param_2;
  auVar11._12_4_ = in_XMM1_Dd;
  auVar11 = aesenc(in_XMM2 ^ unaff_XMM7 ^ unaff_XMM15 ^ unaff_XMM9,auVar11);
  uVar7 = *(undefined4 *)(in_R11 + 0x30);
  uVar8 = *(undefined4 *)(in_R11 + 0x34);
  uVar9 = *(undefined4 *)(in_R11 + 0x38);
  uVar10 = *(undefined4 *)(in_R11 + 0x3c);
  auVar11 = aesenc(auVar11,*(undefined1 (*) [16])(in_R11 + 0x20));
  uVar3 = *(undefined4 *)(in_R11 + 0x40);
  uVar4 = *(undefined4 *)(in_R11 + 0x44);
  uVar5 = *(undefined4 *)(in_R11 + 0x48);
  uVar6 = *(undefined4 *)(in_R11 + 0x4c);
  do {
    auVar1._4_4_ = uVar8;
    auVar1._0_4_ = uVar7;
    auVar1._8_4_ = uVar9;
    auVar1._12_4_ = uVar10;
    auVar11 = aesenc(auVar11,auVar1);
    auVar1 = *(undefined1 (*) [16])(param_1 + in_RAX);
    uVar7 = auVar1._0_4_;
    uVar8 = auVar1._4_4_;
    uVar9 = auVar1._8_4_;
    uVar10 = auVar1._12_4_;
    in_RAX = in_RAX + 0x20;
    auVar2._4_4_ = uVar4;
    auVar2._0_4_ = uVar3;
    auVar2._8_4_ = uVar5;
    auVar2._12_4_ = uVar6;
    auVar11 = aesenc(auVar11,auVar2);
    auVar2 = *(undefined1 (*) [16])(param_1 + -0x10 + in_RAX);
    uVar3 = auVar2._0_4_;
    uVar4 = auVar2._4_4_;
    uVar5 = auVar2._8_4_;
    uVar6 = auVar2._12_4_;
  } while (in_RAX != 0);
  auVar11 = aesenc(auVar11,auVar1);
  aesenclast(auVar11,unaff_XMM7 ^ unaff_XMM15);
  return auVar2._0_8_;
}

// aesni_ocb_decrypt @ 140df6c00

void aesni_ocb_decrypt(undefined8 param_1,undefined1 (*param_2) [16],ulonglong param_3,
                      longlong param_4,ulonglong param_5,uint *param_6,uint *param_7,
                      undefined1 (*param_8) [16])

{
  uint *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 (*in_RCX) [16];
  ulonglong uVar9;
  uint in_XMM0_Dc;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dc_00;
  uint extraout_XMM0_Dc_01;
  uint extraout_XMM0_Dc_02;
  uint extraout_XMM0_Dc_03;
  uint extraout_XMM0_Dc_04;
  uint extraout_XMM0_Dc_05;
  uint in_XMM0_Dd;
  uint extraout_XMM0_Dd;
  uint extraout_XMM0_Dd_00;
  uint extraout_XMM0_Dd_01;
  uint extraout_XMM0_Dd_02;
  uint extraout_XMM0_Dd_03;
  uint extraout_XMM0_Dd_04;
  uint extraout_XMM0_Dd_05;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  uint uVar14;
  uint uVar16;
  uint uVar17;
  undefined1 auVar15 [16];
  uint uVar18;
  uint unaff_XMM11_Da;
  uint unaff_XMM11_Db;
  uint unaff_XMM11_Dc;
  uint unaff_XMM11_Dd;
  uint unaff_XMM12_Da;
  uint unaff_XMM12_Db;
  uint unaff_XMM12_Dc;
  uint unaff_XMM12_Dd;
  uint unaff_XMM13_Da;
  uint unaff_XMM13_Db;
  uint unaff_XMM13_Dc;
  uint unaff_XMM13_Dd;
  uint unaff_XMM14_Da;
  uint unaff_XMM14_Db;
  uint unaff_XMM14_Dc;
  uint unaff_XMM14_Dd;
  
  uVar9 = (ulonglong)(uint)(*(int *)(param_4 + 0xf0) << 4);
  puVar1 = (uint *)(param_4 + 0x10 + uVar9);
  uVar14 = *param_6 ^ *puVar1;
  uVar16 = param_6[1] ^ puVar1[1];
  uVar17 = param_6[2] ^ puVar1[2];
  uVar18 = param_6[3] ^ puVar1[3];
  uVar5 = *param_7;
  uVar6 = param_7[1];
  uVar7 = param_7[2];
  uVar8 = param_7[3];
  auVar11 = *param_8;
  auVar15 = auVar11;
  if ((param_5 & 1) == 0) {
    lVar4 = 0;
    if (param_5 != 0) {
      for (; (param_5 >> lVar4 & 1) == 0; lVar4 = lVar4 + 1) {
      }
    }
    param_5 = param_5 + 1;
    param_7 = param_7 + lVar4 * 4;
    uVar14 = *param_7;
    uVar16 = param_7[1];
    uVar17 = param_7[2];
    uVar18 = param_7[3];
    auVar10 = *in_RCX;
    in_RCX = in_RCX + 1;
    param_1 = __ocb_decrypt1(param_4 + 0x20 + uVar9);
    *param_2 = auVar10;
    auVar15._0_4_ = auVar11._0_4_ ^ auVar10._0_4_;
    auVar15._4_4_ = auVar11._4_4_ ^ auVar10._4_4_;
    auVar15._8_4_ = auVar11._8_4_ ^ auVar10._8_4_;
    auVar15._12_4_ = auVar11._12_4_ ^ auVar10._12_4_;
    param_2 = param_2 + 1;
    param_3 = param_3 - 1;
    in_XMM0_Dc = extraout_XMM0_Dc;
    in_XMM0_Dd = extraout_XMM0_Dd;
    if (param_3 == 0) goto L_ocb_dec_done;
  }
  lVar4 = 0;
  if (param_5 + 1 != 0) {
    for (; (param_5 + 1 >> lVar4 & 1) == 0; lVar4 = lVar4 + 1) {
    }
  }
  lVar4 = 0;
  if (param_5 + 3 != 0) {
    for (; (param_5 + 3 >> lVar4 & 1) == 0; lVar4 = lVar4 + 1) {
    }
  }
  lVar4 = 0;
  if (param_5 + 5 != 0) {
    for (; (param_5 + 5 >> lVar4 & 1) == 0; lVar4 = lVar4 + 1) {
    }
  }
  while (uVar9 = param_3 - 6, 5 < param_3) {
    auVar11 = *in_RCX;
    auVar10 = in_RCX[1];
    auVar12 = in_RCX[2];
    auVar13 = in_RCX[3];
    auVar2 = in_RCX[4];
    auVar3 = in_RCX[5];
    in_RCX = in_RCX + 6;
    param_1 = __ocb_decrypt6();
    *param_2 = auVar11;
    param_2[1] = auVar10;
    param_2[2] = auVar12;
    param_2[3] = auVar13;
    param_2[4] = auVar2;
    param_2[5] = auVar3;
    auVar15 = auVar15 ^ auVar11 ^ auVar10 ^ auVar12 ^ auVar13 ^ auVar2 ^ auVar3;
    param_2 = param_2 + 6;
    in_XMM0_Dc = extraout_XMM0_Dc_00;
    in_XMM0_Dd = extraout_XMM0_Dd_00;
    param_3 = uVar9;
  }
  if (uVar9 != 0xfffffffffffffffa) {
    auVar11 = *in_RCX;
    uVar14 = auVar15._0_4_;
    uVar16 = auVar15._4_4_;
    uVar17 = auVar15._8_4_;
    uVar18 = auVar15._12_4_;
    if (param_3 < 2) {
      param_1 = __ocb_decrypt1();
      *param_2 = auVar11;
      auVar15._0_4_ = uVar14 ^ auVar11._0_4_;
      auVar15._4_4_ = uVar16 ^ auVar11._4_4_;
      auVar15._8_4_ = uVar17 ^ auVar11._8_4_;
      auVar15._12_4_ = uVar18 ^ auVar11._12_4_;
      in_XMM0_Dc = extraout_XMM0_Dc_02;
      in_XMM0_Dd = extraout_XMM0_Dd_02;
      uVar14 = uVar5;
      uVar16 = uVar6;
      uVar17 = uVar7;
      uVar18 = uVar8;
    }
    else {
      auVar10 = in_RCX[1];
      if (param_3 == 2) {
        param_1 = __ocb_decrypt4();
        *param_2 = auVar11;
        param_2[1] = auVar10;
        auVar15._0_4_ = uVar14 ^ auVar11._0_4_ ^ auVar10._0_4_;
        auVar15._4_4_ = uVar16 ^ auVar11._4_4_ ^ auVar10._4_4_;
        auVar15._8_4_ = uVar17 ^ auVar11._8_4_ ^ auVar10._8_4_;
        auVar15._12_4_ = uVar18 ^ auVar11._12_4_ ^ auVar10._12_4_;
        in_XMM0_Dc = extraout_XMM0_Dc_03;
        in_XMM0_Dd = extraout_XMM0_Dd_03;
        uVar14 = unaff_XMM11_Da;
        uVar16 = unaff_XMM11_Db;
        uVar17 = unaff_XMM11_Dc;
        uVar18 = unaff_XMM11_Dd;
      }
      else {
        auVar12 = in_RCX[2];
        if (param_3 < 4) {
          param_1 = __ocb_decrypt4();
          *param_2 = auVar11;
          param_2[1] = auVar10;
          param_2[2] = auVar12;
          auVar15._0_4_ = uVar14 ^ auVar11._0_4_ ^ auVar10._0_4_ ^ auVar12._0_4_;
          auVar15._4_4_ = uVar16 ^ auVar11._4_4_ ^ auVar10._4_4_ ^ auVar12._4_4_;
          auVar15._8_4_ = uVar17 ^ auVar11._8_4_ ^ auVar10._8_4_ ^ auVar12._8_4_;
          auVar15._12_4_ = uVar18 ^ auVar11._12_4_ ^ auVar10._12_4_ ^ auVar12._12_4_;
          in_XMM0_Dc = extraout_XMM0_Dc_04;
          in_XMM0_Dd = extraout_XMM0_Dd_04;
          uVar14 = unaff_XMM12_Da;
          uVar16 = unaff_XMM12_Db;
          uVar17 = unaff_XMM12_Dc;
          uVar18 = unaff_XMM12_Dd;
        }
        else {
          auVar13 = in_RCX[3];
          if (param_3 == 4) {
            param_1 = __ocb_decrypt4();
            *param_2 = auVar11;
            param_2[1] = auVar10;
            param_2[2] = auVar12;
            param_2[3] = auVar13;
            auVar15 = auVar15 ^ auVar11 ^ auVar10 ^ auVar12 ^ auVar13;
            in_XMM0_Dc = extraout_XMM0_Dc_05;
            in_XMM0_Dd = extraout_XMM0_Dd_05;
            uVar14 = unaff_XMM13_Da;
            uVar16 = unaff_XMM13_Db;
            uVar17 = unaff_XMM13_Dc;
            uVar18 = unaff_XMM13_Dd;
          }
          else {
            auVar2 = in_RCX[4];
            param_1 = __ocb_decrypt6();
            *param_2 = auVar11;
            param_2[1] = auVar10;
            param_2[2] = auVar12;
            param_2[3] = auVar13;
            param_2[4] = auVar2;
            auVar15 = auVar15 ^ auVar11 ^ auVar10 ^ auVar12 ^ auVar13 ^ auVar2;
            in_XMM0_Dc = extraout_XMM0_Dc_01;
            in_XMM0_Dd = extraout_XMM0_Dd_01;
            uVar14 = unaff_XMM14_Da;
            uVar16 = unaff_XMM14_Db;
            uVar17 = unaff_XMM14_Dc;
            uVar18 = unaff_XMM14_Dd;
          }
        }
      }
    }
  }
L_ocb_dec_done:
  *param_8 = auVar15;
  *param_6 = uVar14 ^ (uint)param_1;
  param_6[1] = uVar16 ^ (uint)((ulonglong)param_1 >> 0x20);
  param_6[2] = uVar17 ^ in_XMM0_Dc;
  param_6[3] = uVar18 ^ in_XMM0_Dd;
  return;
}

// L$SEH_begin_aesni_ocb_decrypt @ 140df6c0d

void L_SEH_begin_aesni_ocb_decrypt
               (undefined8 param_1,undefined1 (*param_2) [16],ulonglong param_3,longlong param_4,
               ulonglong param_5,uint *param_6,uint *param_7,undefined1 (*param_8) [16])

{
  uint *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 (*in_RCX) [16];
  ulonglong uVar9;
  uint in_XMM0_Dc;
  uint extraout_XMM0_Dc;
  uint extraout_XMM0_Dc_00;
  uint extraout_XMM0_Dc_01;
  uint extraout_XMM0_Dc_02;
  uint extraout_XMM0_Dc_03;
  uint extraout_XMM0_Dc_04;
  uint extraout_XMM0_Dc_05;
  uint in_XMM0_Dd;
  uint extraout_XMM0_Dd;
  uint extraout_XMM0_Dd_00;
  uint extraout_XMM0_Dd_01;
  uint extraout_XMM0_Dd_02;
  uint extraout_XMM0_Dd_03;
  uint extraout_XMM0_Dd_04;
  uint extraout_XMM0_Dd_05;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  uint uVar14;
  uint uVar16;
  uint uVar17;
  undefined1 auVar15 [16];
  uint uVar18;
  uint unaff_XMM11_Da;
  uint unaff_XMM11_Db;
  uint unaff_XMM11_Dc;
  uint unaff_XMM11_Dd;
  uint unaff_XMM12_Da;
  uint unaff_XMM12_Db;
  uint unaff_XMM12_Dc;
  uint unaff_XMM12_Dd;
  uint unaff_XMM13_Da;
  uint unaff_XMM13_Db;
  uint unaff_XMM13_Dc;
  uint unaff_XMM13_Dd;
  uint unaff_XMM14_Da;
  uint unaff_XMM14_Db;
  uint unaff_XMM14_Dc;
  uint unaff_XMM14_Dd;
  
  uVar9 = (ulonglong)(uint)(*(int *)(param_4 + 0xf0) << 4);
  puVar1 = (uint *)(param_4 + 0x10 + uVar9);
  uVar14 = *param_6 ^ *puVar1;
  uVar16 = param_6[1] ^ puVar1[1];
  uVar17 = param_6[2] ^ puVar1[2];
  uVar18 = param_6[3] ^ puVar1[3];
  uVar5 = *param_7;
  uVar6 = param_7[1];
  uVar7 = param_7[2];
  uVar8 = param_7[3];
  auVar11 = *param_8;
  auVar15 = auVar11;
  if ((param_5 & 1) == 0) {
    lVar4 = 0;
    if (param_5 != 0) {
      for (; (param_5 >> lVar4 & 1) == 0; lVar4 = lVar4 + 1) {
      }
    }
    param_5 = param_5 + 1;
    param_7 = param_7 + lVar4 * 4;
    uVar14 = *param_7;
    uVar16 = param_7[1];
    uVar17 = param_7[2];
    uVar18 = param_7[3];
    auVar10 = *in_RCX;
    in_RCX = in_RCX + 1;
    param_1 = __ocb_decrypt1(param_4 + 0x20 + uVar9);
    *param_2 = auVar10;
    auVar15._0_4_ = auVar11._0_4_ ^ auVar10._0_4_;
    auVar15._4_4_ = auVar11._4_4_ ^ auVar10._4_4_;
    auVar15._8_4_ = auVar11._8_4_ ^ auVar10._8_4_;
    auVar15._12_4_ = auVar11._12_4_ ^ auVar10._12_4_;
    param_2 = param_2 + 1;
    param_3 = param_3 - 1;
    in_XMM0_Dc = extraout_XMM0_Dc;
    in_XMM0_Dd = extraout_XMM0_Dd;
    if (param_3 == 0) goto L_ocb_dec_done;
  }
  lVar4 = 0;
  if (param_5 + 1 != 0) {
    for (; (param_5 + 1 >> lVar4 & 1) == 0; lVar4 = lVar4 + 1) {
    }
  }
  lVar4 = 0;
  if (param_5 + 3 != 0) {
    for (; (param_5 + 3 >> lVar4 & 1) == 0; lVar4 = lVar4 + 1) {
    }
  }
  lVar4 = 0;
  if (param_5 + 5 != 0) {
    for (; (param_5 + 5 >> lVar4 & 1) == 0; lVar4 = lVar4 + 1) {
    }
  }
  while (uVar9 = param_3 - 6, 5 < param_3) {
    auVar11 = *in_RCX;
    auVar10 = in_RCX[1];
    auVar12 = in_RCX[2];
    auVar13 = in_RCX[3];
    auVar2 = in_RCX[4];
    auVar3 = in_RCX[5];
    in_RCX = in_RCX + 6;
    param_1 = __ocb_decrypt6();
    *param_2 = auVar11;
    param_2[1] = auVar10;
    param_2[2] = auVar12;
    param_2[3] = auVar13;
    param_2[4] = auVar2;
    param_2[5] = auVar3;
    auVar15 = auVar15 ^ auVar11 ^ auVar10 ^ auVar12 ^ auVar13 ^ auVar2 ^ auVar3;
    param_2 = param_2 + 6;
    in_XMM0_Dc = extraout_XMM0_Dc_00;
    in_XMM0_Dd = extraout_XMM0_Dd_00;
    param_3 = uVar9;
  }
  if (uVar9 != 0xfffffffffffffffa) {
    auVar11 = *in_RCX;
    uVar14 = auVar15._0_4_;
    uVar16 = auVar15._4_4_;
    uVar17 = auVar15._8_4_;
    uVar18 = auVar15._12_4_;
    if (param_3 < 2) {
      param_1 = __ocb_decrypt1();
      *param_2 = auVar11;
      auVar15._0_4_ = uVar14 ^ auVar11._0_4_;
      auVar15._4_4_ = uVar16 ^ auVar11._4_4_;
      auVar15._8_4_ = uVar17 ^ auVar11._8_4_;
      auVar15._12_4_ = uVar18 ^ auVar11._12_4_;
      in_XMM0_Dc = extraout_XMM0_Dc_02;
      in_XMM0_Dd = extraout_XMM0_Dd_02;
      uVar14 = uVar5;
      uVar16 = uVar6;
      uVar17 = uVar7;
      uVar18 = uVar8;
    }
    else {
      auVar10 = in_RCX[1];
      if (param_3 == 2) {
        param_1 = __ocb_decrypt4();
        *param_2 = auVar11;
        param_2[1] = auVar10;
        auVar15._0_4_ = uVar14 ^ auVar11._0_4_ ^ auVar10._0_4_;
        auVar15._4_4_ = uVar16 ^ auVar11._4_4_ ^ auVar10._4_4_;
        auVar15._8_4_ = uVar17 ^ auVar11._8_4_ ^ auVar10._8_4_;
        auVar15._12_4_ = uVar18 ^ auVar11._12_4_ ^ auVar10._12_4_;
        in_XMM0_Dc = extraout_XMM0_Dc_03;
        in_XMM0_Dd = extraout_XMM0_Dd_03;
        uVar14 = unaff_XMM11_Da;
        uVar16 = unaff_XMM11_Db;
        uVar17 = unaff_XMM11_Dc;
        uVar18 = unaff_XMM11_Dd;
      }
      else {
        auVar12 = in_RCX[2];
        if (param_3 < 4) {
          param_1 = __ocb_decrypt4();
          *param_2 = auVar11;
          param_2[1] = auVar10;
          param_2[2] = auVar12;
          auVar15._0_4_ = uVar14 ^ auVar11._0_4_ ^ auVar10._0_4_ ^ auVar12._0_4_;
          auVar15._4_4_ = uVar16 ^ auVar11._4_4_ ^ auVar10._4_4_ ^ auVar12._4_4_;
          auVar15._8_4_ = uVar17 ^ auVar11._8_4_ ^ auVar10._8_4_ ^ auVar12._8_4_;
          auVar15._12_4_ = uVar18 ^ auVar11._12_4_ ^ auVar10._12_4_ ^ auVar12._12_4_;
          in_XMM0_Dc = extraout_XMM0_Dc_04;
          in_XMM0_Dd = extraout_XMM0_Dd_04;
          uVar14 = unaff_XMM12_Da;
          uVar16 = unaff_XMM12_Db;
          uVar17 = unaff_XMM12_Dc;
          uVar18 = unaff_XMM12_Dd;
        }
        else {
          auVar13 = in_RCX[3];
          if (param_3 == 4) {
            param_1 = __ocb_decrypt4();
            *param_2 = auVar11;
            param_2[1] = auVar10;
            param_2[2] = auVar12;
            param_2[3] = auVar13;
            auVar15 = auVar15 ^ auVar11 ^ auVar10 ^ auVar12 ^ auVar13;
            in_XMM0_Dc = extraout_XMM0_Dc_05;
            in_XMM0_Dd = extraout_XMM0_Dd_05;
            uVar14 = unaff_XMM13_Da;
            uVar16 = unaff_XMM13_Db;
            uVar17 = unaff_XMM13_Dc;
            uVar18 = unaff_XMM13_Dd;
          }
          else {
            auVar2 = in_RCX[4];
            param_1 = __ocb_decrypt6();
            *param_2 = auVar11;
            param_2[1] = auVar10;
            param_2[2] = auVar12;
            param_2[3] = auVar13;
            param_2[4] = auVar2;
            auVar15 = auVar15 ^ auVar11 ^ auVar10 ^ auVar12 ^ auVar13 ^ auVar2;
            in_XMM0_Dc = extraout_XMM0_Dc_01;
            in_XMM0_Dd = extraout_XMM0_Dd_01;
            uVar14 = unaff_XMM14_Da;
            uVar16 = unaff_XMM14_Db;
            uVar17 = unaff_XMM14_Dc;
            uVar18 = unaff_XMM14_Dd;
          }
        }
      }
    }
  }
L_ocb_dec_done:
  *param_8 = auVar15;
  *param_6 = uVar14 ^ (uint)param_1;
  param_6[1] = uVar16 ^ (uint)((ulonglong)param_1 >> 0x20);
  param_6[2] = uVar17 ^ in_XMM0_Dc;
  param_6[3] = uVar18 ^ in_XMM0_Dd;
  return;
}

// __ocb_decrypt6 @ 140df6fc0

undefined8 __ocb_decrypt6(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  longlong in_RAX;
  longlong unaff_RBX;
  longlong in_R11;
  longlong unaff_R12;
  longlong unaff_R13;
  longlong unaff_R14;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 in_XMM1_Dc;
  undefined4 uVar18;
  undefined4 in_XMM1_Dd;
  undefined4 uVar19;
  undefined1 in_XMM2 [16];
  undefined1 auVar20 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar21 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar22 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar23 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar24 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 unaff_XMM15 [16];
  undefined1 auVar33 [16];
  
  auVar28 = unaff_XMM10 ^ unaff_XMM15 ^ unaff_XMM9;
  auVar29 = *(undefined1 (*) [16])(unaff_RBX + unaff_R12) ^ auVar28;
  auVar30 = unaff_XMM10 ^ auVar29;
  auVar31 = *(undefined1 (*) [16])(unaff_RBX + unaff_R13) ^ auVar30;
  auVar32 = unaff_XMM10 ^ auVar31;
  auVar33 = *(undefined1 (*) [16])(unaff_RBX + unaff_R14) ^ auVar32;
  auVar26 = *(undefined1 (*) [16])(in_R11 + 0x20);
  lVar2 = 0;
  if (param_3 + 1U != 0) {
    for (; (param_3 + 1U >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
    }
  }
  lVar2 = 0;
  if (param_3 + 3U != 0) {
    for (; (param_3 + 3U >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
    }
  }
  lVar2 = 0;
  if (param_3 + 5U != 0) {
    for (; (param_3 + 5U >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
    }
  }
  auVar20._8_4_ = in_XMM1_Dc;
  auVar20._0_8_ = param_2;
  auVar20._12_4_ = in_XMM1_Dd;
  auVar20 = aesdec(in_XMM2 ^ auVar28,auVar20);
  auVar21._8_4_ = in_XMM1_Dc;
  auVar21._0_8_ = param_2;
  auVar21._12_4_ = in_XMM1_Dd;
  auVar21 = aesdec(in_XMM3 ^ auVar29,auVar21);
  auVar22._8_4_ = in_XMM1_Dc;
  auVar22._0_8_ = param_2;
  auVar22._12_4_ = in_XMM1_Dd;
  auVar22 = aesdec(in_XMM4 ^ auVar30,auVar22);
  auVar23._8_4_ = in_XMM1_Dc;
  auVar23._0_8_ = param_2;
  auVar23._12_4_ = in_XMM1_Dd;
  auVar23 = aesdec(in_XMM5 ^ auVar31,auVar23);
  auVar24._8_4_ = in_XMM1_Dc;
  auVar24._0_8_ = param_2;
  auVar24._12_4_ = in_XMM1_Dd;
  auVar24 = aesdec(unaff_XMM6 ^ auVar32,auVar24);
  auVar25._8_4_ = in_XMM1_Dc;
  auVar25._0_8_ = param_2;
  auVar25._12_4_ = in_XMM1_Dd;
  auVar25 = aesdec(unaff_XMM7 ^ auVar33,auVar25);
  uVar16 = *(undefined4 *)(in_R11 + 0x30);
  uVar17 = *(undefined4 *)(in_R11 + 0x34);
  uVar18 = *(undefined4 *)(in_R11 + 0x38);
  uVar19 = *(undefined4 *)(in_R11 + 0x3c);
  auVar20 = aesdec(auVar20,auVar26);
  auVar21 = aesdec(auVar21,auVar26);
  auVar22 = aesdec(auVar22,auVar26);
  auVar23 = aesdec(auVar23,auVar26);
  auVar24 = aesdec(auVar24,auVar26);
  auVar26 = aesdec(auVar25,auVar26);
  uVar12 = *(undefined4 *)(in_R11 + 0x40);
  uVar13 = *(undefined4 *)(in_R11 + 0x44);
  uVar14 = *(undefined4 *)(in_R11 + 0x48);
  uVar15 = *(undefined4 *)(in_R11 + 0x4c);
  do {
    auVar27._4_4_ = uVar17;
    auVar27._0_4_ = uVar16;
    auVar27._8_4_ = uVar18;
    auVar27._12_4_ = uVar19;
    auVar20 = aesdec(auVar20,auVar27);
    auVar7._4_4_ = uVar17;
    auVar7._0_4_ = uVar16;
    auVar7._8_4_ = uVar18;
    auVar7._12_4_ = uVar19;
    auVar21 = aesdec(auVar21,auVar7);
    auVar8._4_4_ = uVar17;
    auVar8._0_4_ = uVar16;
    auVar8._8_4_ = uVar18;
    auVar8._12_4_ = uVar19;
    auVar22 = aesdec(auVar22,auVar8);
    auVar9._4_4_ = uVar17;
    auVar9._0_4_ = uVar16;
    auVar9._8_4_ = uVar18;
    auVar9._12_4_ = uVar19;
    auVar23 = aesdec(auVar23,auVar9);
    auVar10._4_4_ = uVar17;
    auVar10._0_4_ = uVar16;
    auVar10._8_4_ = uVar18;
    auVar10._12_4_ = uVar19;
    auVar24 = aesdec(auVar24,auVar10);
    auVar11._4_4_ = uVar17;
    auVar11._0_4_ = uVar16;
    auVar11._8_4_ = uVar18;
    auVar11._12_4_ = uVar19;
    auVar27 = aesdec(auVar26,auVar11);
    auVar25 = *(undefined1 (*) [16])(param_1 + in_RAX);
    uVar16 = auVar25._0_4_;
    uVar17 = auVar25._4_4_;
    uVar18 = auVar25._8_4_;
    uVar19 = auVar25._12_4_;
    in_RAX = in_RAX + 0x20;
    auVar26._4_4_ = uVar13;
    auVar26._0_4_ = uVar12;
    auVar26._8_4_ = uVar14;
    auVar26._12_4_ = uVar15;
    auVar20 = aesdec(auVar20,auVar26);
    auVar1._4_4_ = uVar13;
    auVar1._0_4_ = uVar12;
    auVar1._8_4_ = uVar14;
    auVar1._12_4_ = uVar15;
    auVar21 = aesdec(auVar21,auVar1);
    auVar3._4_4_ = uVar13;
    auVar3._0_4_ = uVar12;
    auVar3._8_4_ = uVar14;
    auVar3._12_4_ = uVar15;
    auVar22 = aesdec(auVar22,auVar3);
    auVar4._4_4_ = uVar13;
    auVar4._0_4_ = uVar12;
    auVar4._8_4_ = uVar14;
    auVar4._12_4_ = uVar15;
    auVar23 = aesdec(auVar23,auVar4);
    auVar5._4_4_ = uVar13;
    auVar5._0_4_ = uVar12;
    auVar5._8_4_ = uVar14;
    auVar5._12_4_ = uVar15;
    auVar24 = aesdec(auVar24,auVar5);
    auVar6._4_4_ = uVar13;
    auVar6._0_4_ = uVar12;
    auVar6._8_4_ = uVar14;
    auVar6._12_4_ = uVar15;
    auVar26 = aesdec(auVar27,auVar6);
    auVar1 = *(undefined1 (*) [16])(param_1 + -0x10 + in_RAX);
    uVar12 = auVar1._0_4_;
    uVar13 = auVar1._4_4_;
    uVar14 = auVar1._8_4_;
    uVar15 = auVar1._12_4_;
  } while (in_RAX != 0);
  auVar20 = aesdec(auVar20,auVar25);
  auVar21 = aesdec(auVar21,auVar25);
  auVar22 = aesdec(auVar22,auVar25);
  auVar23 = aesdec(auVar23,auVar25);
  auVar24 = aesdec(auVar24,auVar25);
  auVar26 = aesdec(auVar26,auVar25);
  aesdeclast(auVar20,auVar28 ^ unaff_XMM9);
  aesdeclast(auVar21,auVar29 ^ unaff_XMM9);
  aesdeclast(auVar22,auVar30 ^ unaff_XMM9);
  aesdeclast(auVar23,auVar31 ^ unaff_XMM9);
  aesdeclast(auVar24,auVar32 ^ unaff_XMM9);
  aesdeclast(auVar26,auVar33 ^ unaff_XMM9);
  return auVar1._0_8_;
}

// __ocb_decrypt4 @ 140df7160

undefined8 __ocb_decrypt4(longlong param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong in_RAX;
  longlong unaff_RBX;
  longlong in_R11;
  longlong unaff_R12;
  longlong unaff_R13;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 in_XMM1_Dc;
  undefined4 uVar13;
  undefined4 in_XMM1_Dd;
  undefined4 uVar14;
  undefined1 in_XMM2 [16];
  undefined1 auVar15 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar16 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar17 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 unaff_XMM15 [16];
  
  auVar21 = unaff_XMM10 ^ unaff_XMM15 ^ unaff_XMM9;
  auVar22 = *(undefined1 (*) [16])(unaff_RBX + unaff_R12) ^ auVar21;
  auVar23 = unaff_XMM10 ^ auVar22;
  auVar24 = *(undefined1 (*) [16])(unaff_RBX + unaff_R13) ^ auVar23;
  auVar19 = *(undefined1 (*) [16])(in_R11 + 0x20);
  auVar15._8_4_ = in_XMM1_Dc;
  auVar15._0_8_ = param_2;
  auVar15._12_4_ = in_XMM1_Dd;
  auVar15 = aesdec(in_XMM2 ^ auVar21,auVar15);
  auVar16._8_4_ = in_XMM1_Dc;
  auVar16._0_8_ = param_2;
  auVar16._12_4_ = in_XMM1_Dd;
  auVar16 = aesdec(in_XMM3 ^ auVar22,auVar16);
  auVar17._8_4_ = in_XMM1_Dc;
  auVar17._0_8_ = param_2;
  auVar17._12_4_ = in_XMM1_Dd;
  auVar17 = aesdec(in_XMM4 ^ auVar23,auVar17);
  auVar18._8_4_ = in_XMM1_Dc;
  auVar18._0_8_ = param_2;
  auVar18._12_4_ = in_XMM1_Dd;
  auVar18 = aesdec(in_XMM5 ^ auVar24,auVar18);
  uVar11 = *(undefined4 *)(in_R11 + 0x30);
  uVar12 = *(undefined4 *)(in_R11 + 0x34);
  uVar13 = *(undefined4 *)(in_R11 + 0x38);
  uVar14 = *(undefined4 *)(in_R11 + 0x3c);
  auVar15 = aesdec(auVar15,auVar19);
  auVar16 = aesdec(auVar16,auVar19);
  auVar17 = aesdec(auVar17,auVar19);
  auVar19 = aesdec(auVar18,auVar19);
  uVar7 = *(undefined4 *)(in_R11 + 0x40);
  uVar8 = *(undefined4 *)(in_R11 + 0x44);
  uVar9 = *(undefined4 *)(in_R11 + 0x48);
  uVar10 = *(undefined4 *)(in_R11 + 0x4c);
  do {
    auVar20._4_4_ = uVar12;
    auVar20._0_4_ = uVar11;
    auVar20._8_4_ = uVar13;
    auVar20._12_4_ = uVar14;
    auVar15 = aesdec(auVar15,auVar20);
    auVar4._4_4_ = uVar12;
    auVar4._0_4_ = uVar11;
    auVar4._8_4_ = uVar13;
    auVar4._12_4_ = uVar14;
    auVar16 = aesdec(auVar16,auVar4);
    auVar5._4_4_ = uVar12;
    auVar5._0_4_ = uVar11;
    auVar5._8_4_ = uVar13;
    auVar5._12_4_ = uVar14;
    auVar17 = aesdec(auVar17,auVar5);
    auVar6._4_4_ = uVar12;
    auVar6._0_4_ = uVar11;
    auVar6._8_4_ = uVar13;
    auVar6._12_4_ = uVar14;
    auVar20 = aesdec(auVar19,auVar6);
    auVar18 = *(undefined1 (*) [16])(param_1 + in_RAX);
    uVar11 = auVar18._0_4_;
    uVar12 = auVar18._4_4_;
    uVar13 = auVar18._8_4_;
    uVar14 = auVar18._12_4_;
    in_RAX = in_RAX + 0x20;
    auVar19._4_4_ = uVar8;
    auVar19._0_4_ = uVar7;
    auVar19._8_4_ = uVar9;
    auVar19._12_4_ = uVar10;
    auVar15 = aesdec(auVar15,auVar19);
    auVar1._4_4_ = uVar8;
    auVar1._0_4_ = uVar7;
    auVar1._8_4_ = uVar9;
    auVar1._12_4_ = uVar10;
    auVar16 = aesdec(auVar16,auVar1);
    auVar2._4_4_ = uVar8;
    auVar2._0_4_ = uVar7;
    auVar2._8_4_ = uVar9;
    auVar2._12_4_ = uVar10;
    auVar17 = aesdec(auVar17,auVar2);
    auVar3._4_4_ = uVar8;
    auVar3._0_4_ = uVar7;
    auVar3._8_4_ = uVar9;
    auVar3._12_4_ = uVar10;
    auVar19 = aesdec(auVar20,auVar3);
    auVar1 = *(undefined1 (*) [16])(param_1 + -0x10 + in_RAX);
    uVar7 = auVar1._0_4_;
    uVar8 = auVar1._4_4_;
    uVar9 = auVar1._8_4_;
    uVar10 = auVar1._12_4_;
  } while (in_RAX != 0);
  auVar15 = aesdec(auVar15,auVar18);
  auVar16 = aesdec(auVar16,auVar18);
  auVar17 = aesdec(auVar17,auVar18);
  auVar19 = aesdec(auVar19,auVar18);
  aesdeclast(auVar15,auVar21 ^ unaff_XMM9);
  aesdeclast(auVar16,auVar22 ^ unaff_XMM9);
  aesdeclast(auVar17,auVar23 ^ unaff_XMM9);
  aesdeclast(auVar19,auVar24 ^ unaff_XMM9);
  return auVar1._0_8_;
}

// __ocb_decrypt1 @ 140df7280

undefined8 __ocb_decrypt1(longlong param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong in_RAX;
  longlong in_R11;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_XMM1_Dc;
  undefined4 uVar9;
  undefined4 in_XMM1_Dd;
  undefined4 uVar10;
  undefined1 in_XMM2 [16];
  undefined1 auVar11 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 unaff_XMM9 [16];
  undefined1 unaff_XMM15 [16];
  
  auVar11._8_4_ = in_XMM1_Dc;
  auVar11._0_8_ = param_2;
  auVar11._12_4_ = in_XMM1_Dd;
  auVar11 = aesdec(in_XMM2 ^ unaff_XMM7 ^ unaff_XMM15 ^ unaff_XMM9,auVar11);
  uVar7 = *(undefined4 *)(in_R11 + 0x30);
  uVar8 = *(undefined4 *)(in_R11 + 0x34);
  uVar9 = *(undefined4 *)(in_R11 + 0x38);
  uVar10 = *(undefined4 *)(in_R11 + 0x3c);
  auVar11 = aesdec(auVar11,*(undefined1 (*) [16])(in_R11 + 0x20));
  uVar3 = *(undefined4 *)(in_R11 + 0x40);
  uVar4 = *(undefined4 *)(in_R11 + 0x44);
  uVar5 = *(undefined4 *)(in_R11 + 0x48);
  uVar6 = *(undefined4 *)(in_R11 + 0x4c);
  do {
    auVar1._4_4_ = uVar8;
    auVar1._0_4_ = uVar7;
    auVar1._8_4_ = uVar9;
    auVar1._12_4_ = uVar10;
    auVar11 = aesdec(auVar11,auVar1);
    auVar1 = *(undefined1 (*) [16])(param_1 + in_RAX);
    uVar7 = auVar1._0_4_;
    uVar8 = auVar1._4_4_;
    uVar9 = auVar1._8_4_;
    uVar10 = auVar1._12_4_;
    in_RAX = in_RAX + 0x20;
    auVar2._4_4_ = uVar4;
    auVar2._0_4_ = uVar3;
    auVar2._8_4_ = uVar5;
    auVar2._12_4_ = uVar6;
    auVar11 = aesdec(auVar11,auVar2);
    auVar2 = *(undefined1 (*) [16])(param_1 + -0x10 + in_RAX);
    uVar3 = auVar2._0_4_;
    uVar4 = auVar2._4_4_;
    uVar5 = auVar2._8_4_;
    uVar6 = auVar2._12_4_;
  } while (in_RAX != 0);
  auVar11 = aesdec(auVar11,auVar1);
  aesdeclast(auVar11,unaff_XMM7 ^ unaff_XMM15);
  return auVar2._0_8_;
}

// aesni_cbc_encrypt @ 140df72f0

void aesni_cbc_encrypt(undefined1 (*param_1) [16],undefined1 (*param_2) [16],ulonglong param_3,
                      undefined1 (*param_4) [16],undefined1 (*param_5) [16],int param_6)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 (*pauVar9) [16];
  longlong lVar10;
  undefined1 (*pauVar11) [16];
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
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
  undefined1 aauStack_c0 [11] [16];
  
  if (param_3 == 0) {
    return;
  }
  uVar8 = *(uint *)param_4[0xf];
  uVar14 = (ulonglong)uVar8;
  if (param_6 != 0) {
    auVar18 = *param_5;
    uVar12 = param_3;
    if (param_3 < 0x10) goto code_r0x000140df73b5;
    uVar12 = param_3 - 0x10;
    pauVar11 = param_1;
    while( true ) {
      do {
        param_3 = uVar12;
        param_1 = pauVar11 + 1;
        auVar19 = param_4[1];
        pauVar9 = param_4 + 2;
        auVar17._0_4_ = auVar18._0_4_ ^ *(uint *)*pauVar11 ^ *(uint *)*param_4;
        auVar17._4_4_ = auVar18._4_4_ ^ *(uint *)(*pauVar11 + 4) ^ *(uint *)(*param_4 + 4);
        auVar17._8_4_ = auVar18._8_4_ ^ *(uint *)(*pauVar11 + 8) ^ *(uint *)(*param_4 + 8);
        auVar17._12_4_ = auVar18._12_4_ ^ *(uint *)(*pauVar11 + 0xc) ^ *(uint *)(*param_4 + 0xc);
        uVar12 = uVar14;
        do {
          auVar17 = aesenc(auVar17,auVar19);
          uVar8 = (int)uVar12 - 1;
          uVar12 = (ulonglong)uVar8;
          auVar19 = *pauVar9;
          pauVar9 = pauVar9 + 1;
        } while (uVar8 != 0);
        auVar18 = aesenclast(auVar17,auVar19);
        *param_2 = auVar18;
        param_2 = param_2 + 1;
        uVar12 = param_3 - 0x10;
        pauVar11 = param_1;
      } while (0xf < param_3);
      uVar12 = param_3;
      if (param_3 == 0) break;
code_r0x000140df73b5:
      for (; param_3 != 0; param_3 = param_3 - 1) {
        (*param_2)[0] = (*param_1)[0];
        param_1 = (undefined1 (*) [16])(*param_1 + 1);
        param_2 = (undefined1 (*) [16])(*param_2 + 1);
      }
      for (lVar10 = 0x10 - uVar12; lVar10 != 0; lVar10 = lVar10 + -1) {
        (*param_2)[0] = 0;
        param_2 = (undefined1 (*) [16])(*param_2 + 1);
      }
      param_2 = param_2 + -1;
      uVar12 = 0;
      pauVar11 = param_2;
    }
    *param_5 = auVar18;
    return;
  }
  if (param_3 == 0x10) {
    uVar8 = *(uint *)(*param_1 + 4);
    uVar2 = *(uint *)(*param_1 + 8);
    uVar3 = *(uint *)(*param_1 + 0xc);
    uVar4 = *(uint *)*param_5;
    uVar5 = *(uint *)(*param_5 + 4);
    uVar6 = *(uint *)(*param_5 + 8);
    uVar7 = *(uint *)(*param_5 + 0xc);
    auVar18 = param_4[1];
    pauVar11 = param_4 + 2;
    auVar19._0_4_ = *(uint *)*param_1 ^ *(uint *)*param_4;
    auVar19._4_4_ = uVar8 ^ *(uint *)(*param_4 + 4);
    auVar19._8_4_ = uVar2 ^ *(uint *)(*param_4 + 8);
    auVar19._12_4_ = uVar3 ^ *(uint *)(*param_4 + 0xc);
    do {
      auVar19 = aesdec(auVar19,auVar18);
      uVar15 = (int)uVar14 - 1;
      uVar14 = (ulonglong)uVar15;
      auVar18 = *pauVar11;
      pauVar11 = pauVar11 + 1;
    } while (uVar15 != 0);
    auVar18 = aesdeclast(auVar19,auVar18);
    *(uint *)*param_5 = *(uint *)*param_1;
    *(uint *)(*param_5 + 4) = uVar8;
    *(uint *)(*param_5 + 8) = uVar2;
    *(uint *)(*param_5 + 0xc) = uVar3;
    *(uint *)*param_2 = auVar18._0_4_ ^ uVar4;
    *(uint *)(*param_2 + 4) = auVar18._4_4_ ^ uVar5;
    *(uint *)(*param_2 + 8) = auVar18._8_4_ ^ uVar6;
    *(uint *)(*param_2 + 0xc) = auVar18._12_4_ ^ uVar7;
    return;
  }
  auVar18 = *param_5;
  if (0x50 < param_3) {
    auVar19 = *param_4;
    auVar17 = *param_1;
    auVar23 = param_1[1];
    auVar24 = param_1[2];
    auVar25 = param_1[3];
    auVar22 = param_1[4];
    auVar31 = param_1[5];
    if (param_3 < 0x71) {
L_cbc_dec_six_or_seven:
      if (param_3 < 0x61) {
        auVar19 = auVar17;
        auVar21 = auVar23;
        auVar27 = auVar24;
        auVar20 = auVar25;
        _aesni_decrypt6();
        *param_2 = auVar19 ^ auVar18;
        param_2[1] = auVar21 ^ auVar17;
        param_2[2] = auVar27 ^ auVar23;
        param_2[3] = auVar20 ^ auVar24;
        aauStack_c0[0] = auVar31 ^ auVar22;
        param_2[4] = auVar22 ^ auVar25;
        pauVar9 = param_2 + 5;
        auVar18 = auVar31;
      }
      else {
        auVar19 = param_1[6];
        auVar27 = auVar17;
        auVar20 = auVar23;
        auVar26 = auVar24;
        auVar28 = auVar25;
        _aesni_decrypt8();
        aauStack_c0[0] = param_1[5];
        auVar21 = param_1[6];
        *param_2 = auVar27 ^ auVar18;
        param_2[1] = auVar20 ^ auVar17;
        param_2[2] = auVar26 ^ auVar23;
        param_2[3] = auVar28 ^ auVar24;
        param_2[4] = auVar22 ^ auVar25;
        aauStack_c0[0] = auVar19 ^ aauStack_c0[0];
        param_2[5] = auVar31 ^ auVar22;
        pauVar9 = param_2 + 6;
        auVar18 = auVar21;
      }
      goto L_cbc_dec_tail_collected;
    }
    uVar12 = param_3 - 0x50;
    pauVar11 = param_1;
    uVar16 = uVar14;
    auVar21 = auVar18;
    if ((DAT_15540a9f4 & 0x4400000) == 0x400000) {
      while( true ) {
        auVar18 = auVar31;
        param_1 = pauVar11 + 6;
        auVar19 = auVar17;
        auVar31 = auVar23;
        auVar27 = auVar24;
        auVar20 = auVar25;
        _aesni_decrypt6();
        *param_2 = auVar19 ^ auVar21;
        param_2[1] = auVar31 ^ auVar17;
        param_2[2] = auVar27 ^ auVar23;
        param_2[3] = auVar20 ^ auVar24;
        aauStack_c0[0] = auVar18 ^ auVar22;
        uVar14 = uVar16 & 0xffffffff;
        param_2[4] = auVar22 ^ auVar25;
        pauVar9 = param_2 + 5;
        uVar13 = uVar12 - 0x60;
        if (uVar12 < 0x60 || uVar13 == 0) break;
        *pauVar9 = aauStack_c0[0];
        param_2 = param_2 + 6;
        auVar17 = *param_1;
        auVar23 = pauVar11[7];
        auVar24 = pauVar11[8];
        auVar25 = pauVar11[9];
        auVar22 = pauVar11[10];
        pauVar9 = pauVar11 + 0xb;
        uVar12 = uVar13;
        pauVar11 = param_1;
        auVar31 = *pauVar9;
        auVar21 = auVar18;
      }
      param_3 = uVar12 - 0x10;
      if (param_3 == 0 || (longlong)uVar13 < -0x50) goto L_cbc_dec_tail_collected;
      *pauVar9 = aauStack_c0[0];
      param_2 = param_2 + 6;
    }
    else {
      param_3 = param_3 - 0x70;
      while( true ) {
        auVar21 = param_4[1];
        auVar20 = aesdec(auVar17 ^ auVar19,auVar21);
        auVar27 = param_4[2];
        auVar26 = aesdec(auVar23 ^ auVar19,auVar21);
        auVar28 = aesdec(auVar24 ^ auVar19,auVar21);
        auVar29 = aesdec(auVar25 ^ auVar19,auVar21);
        auVar30 = aesdec(auVar22 ^ auVar19,auVar21);
        auVar31 = aesdec(auVar31 ^ auVar19,auVar21);
        auVar32 = aesdec(param_1[6] ^ auVar19,auVar21);
        auVar33 = aesdec(param_1[7] ^ auVar19,auVar21);
        pauVar11 = (undefined1 (*) [16])(*param_1 + ((ulonglong)(param_3 < 0x70) - 1 & 0x80));
        auVar19 = param_4[3];
        auVar21 = aesdec(auVar20,auVar27);
        auVar20 = aesdec(auVar26,auVar27);
        auVar26 = aesdec(auVar28,auVar27);
        auVar28 = aesdec(auVar29,auVar27);
        auVar29 = aesdec(auVar30,auVar27);
        auVar30 = aesdec(auVar31,auVar27);
        auVar32 = aesdec(auVar32,auVar27);
        auVar33 = aesdec(auVar33,auVar27);
        auVar31 = param_4[4];
        auVar21 = aesdec(auVar21,auVar19);
        auVar27 = aesdec(auVar20,auVar19);
        auVar20 = aesdec(auVar26,auVar19);
        auVar26 = aesdec(auVar28,auVar19);
        auVar28 = aesdec(auVar29,auVar19);
        auVar29 = aesdec(auVar30,auVar19);
        auVar30 = aesdec(auVar32,auVar19);
        auVar32 = aesdec(auVar33,auVar19);
        auVar19 = param_4[5];
        auVar21 = aesdec(auVar21,auVar31);
        auVar27 = aesdec(auVar27,auVar31);
        auVar20 = aesdec(auVar20,auVar31);
        auVar26 = aesdec(auVar26,auVar31);
        auVar28 = aesdec(auVar28,auVar31);
        auVar29 = aesdec(auVar29,auVar31);
        auVar30 = aesdec(auVar30,auVar31);
        auVar32 = aesdec(auVar32,auVar31);
        auVar31 = param_4[6];
        auVar21 = aesdec(auVar21,auVar19);
        auVar27 = aesdec(auVar27,auVar19);
        auVar20 = aesdec(auVar20,auVar19);
        auVar26 = aesdec(auVar26,auVar19);
        auVar28 = aesdec(auVar28,auVar19);
        auVar29 = aesdec(auVar29,auVar19);
        auVar30 = aesdec(auVar30,auVar19);
        auVar32 = aesdec(auVar32,auVar19);
        auVar19 = param_4[7];
        auVar21 = aesdec(auVar21,auVar31);
        auVar27 = aesdec(auVar27,auVar31);
        auVar20 = aesdec(auVar20,auVar31);
        auVar26 = aesdec(auVar26,auVar31);
        auVar28 = aesdec(auVar28,auVar31);
        auVar29 = aesdec(auVar29,auVar31);
        auVar30 = aesdec(auVar30,auVar31);
        auVar32 = aesdec(auVar32,auVar31);
        auVar31 = param_4[8];
        auVar21 = aesdec(auVar21,auVar19);
        auVar27 = aesdec(auVar27,auVar19);
        auVar20 = aesdec(auVar20,auVar19);
        auVar26 = aesdec(auVar26,auVar19);
        auVar28 = aesdec(auVar28,auVar19);
        auVar29 = aesdec(auVar29,auVar19);
        auVar30 = aesdec(auVar30,auVar19);
        auVar32 = aesdec(auVar32,auVar19);
        auVar19 = param_4[9];
        auVar21 = aesdec(auVar21,auVar31);
        auVar27 = aesdec(auVar27,auVar31);
        auVar20 = aesdec(auVar20,auVar31);
        auVar26 = aesdec(auVar26,auVar31);
        auVar28 = aesdec(auVar28,auVar31);
        auVar29 = aesdec(auVar29,auVar31);
        auVar30 = aesdec(auVar30,auVar31);
        auVar32 = aesdec(auVar32,auVar31);
        auVar31 = param_4[10];
        if (10 < uVar8) {
          auVar21 = aesdec(auVar21,auVar19);
          auVar27 = aesdec(auVar27,auVar19);
          auVar20 = aesdec(auVar20,auVar19);
          auVar26 = aesdec(auVar26,auVar19);
          auVar28 = aesdec(auVar28,auVar19);
          auVar29 = aesdec(auVar29,auVar19);
          auVar30 = aesdec(auVar30,auVar19);
          auVar32 = aesdec(auVar32,auVar19);
          auVar19 = param_4[0xb];
          auVar21 = aesdec(auVar21,auVar31);
          auVar27 = aesdec(auVar27,auVar31);
          auVar20 = aesdec(auVar20,auVar31);
          auVar26 = aesdec(auVar26,auVar31);
          auVar28 = aesdec(auVar28,auVar31);
          auVar29 = aesdec(auVar29,auVar31);
          auVar30 = aesdec(auVar30,auVar31);
          auVar32 = aesdec(auVar32,auVar31);
          auVar31 = param_4[0xc];
          if (uVar8 != 0xb) {
            auVar21 = aesdec(auVar21,auVar19);
            auVar27 = aesdec(auVar27,auVar19);
            auVar20 = aesdec(auVar20,auVar19);
            auVar26 = aesdec(auVar26,auVar19);
            auVar28 = aesdec(auVar28,auVar19);
            auVar29 = aesdec(auVar29,auVar19);
            auVar30 = aesdec(auVar30,auVar19);
            auVar32 = aesdec(auVar32,auVar19);
            auVar19 = param_4[0xd];
            auVar21 = aesdec(auVar21,auVar31);
            auVar27 = aesdec(auVar27,auVar31);
            auVar20 = aesdec(auVar20,auVar31);
            auVar26 = aesdec(auVar26,auVar31);
            auVar28 = aesdec(auVar28,auVar31);
            auVar29 = aesdec(auVar29,auVar31);
            auVar30 = aesdec(auVar30,auVar31);
            auVar32 = aesdec(auVar32,auVar31);
            auVar31 = param_4[0xe];
          }
        }
        auVar21 = aesdec(auVar21,auVar19);
        auVar27 = aesdec(auVar27,auVar19);
        auVar20 = aesdec(auVar20,auVar19);
        auVar26 = aesdec(auVar26,auVar19);
        auVar28 = aesdec(auVar28,auVar19);
        auVar29 = aesdec(auVar29,auVar19);
        auVar30 = aesdec(auVar30,auVar19);
        auVar19 = aesdec(auVar32,auVar19);
        pauVar9 = param_1 + 5;
        auVar21 = aesdeclast(auVar21,auVar18 ^ auVar31);
        pauVar1 = param_1 + 6;
        auVar27 = aesdeclast(auVar27,auVar17 ^ auVar31);
        auVar18 = param_1[7];
        auVar20 = aesdeclast(auVar20,auVar23 ^ auVar31);
        param_1 = param_1 + 8;
        auVar17 = *pauVar11;
        auVar26 = aesdeclast(auVar26,auVar24 ^ auVar31);
        auVar28 = aesdeclast(auVar28,auVar25 ^ auVar31);
        auVar23 = pauVar11[1];
        auVar24 = pauVar11[2];
        auVar29 = aesdeclast(auVar29,auVar22 ^ auVar31);
        auVar30 = aesdeclast(auVar30,*pauVar9 ^ auVar31);
        auVar25 = pauVar11[3];
        auVar22 = pauVar11[4];
        aauStack_c0[0] = aesdeclast(auVar19,*pauVar1 ^ auVar31);
        auVar31 = pauVar11[5];
        auVar19 = *param_4;
        *param_2 = auVar21;
        param_2[1] = auVar27;
        param_2[2] = auVar20;
        param_2[3] = auVar26;
        param_2[4] = auVar28;
        param_2[5] = auVar29;
        param_2[6] = auVar30;
        pauVar9 = param_2 + 7;
        uVar12 = param_3 - 0x80;
        if (param_3 < 0x80 || uVar12 == 0) break;
        *pauVar9 = aauStack_c0[0];
        param_2 = param_2 + 8;
        param_3 = uVar12;
      }
      param_3 = param_3 - 0x10;
      if (param_3 == 0 || (longlong)uVar12 < -0x70) goto L_cbc_dec_tail_collected;
      *pauVar9 = aauStack_c0[0];
      param_2 = param_2 + 8;
      if (0x50 < param_3) goto L_cbc_dec_six_or_seven;
    }
  }
  auVar19 = *param_1;
  uVar12 = param_3 - 0x10;
  if (param_3 < 0x10 || uVar12 == 0) {
    auVar17 = param_4[1];
    pauVar11 = param_4 + 2;
    auVar23._0_4_ = auVar19._0_4_ ^ *(uint *)*param_4;
    auVar23._4_4_ = auVar19._4_4_ ^ *(uint *)(*param_4 + 4);
    auVar23._8_4_ = auVar19._8_4_ ^ *(uint *)(*param_4 + 8);
    auVar23._12_4_ = auVar19._12_4_ ^ *(uint *)(*param_4 + 0xc);
    do {
      auVar23 = aesdec(auVar23,auVar17);
      uVar8 = (int)uVar14 - 1;
      uVar14 = (ulonglong)uVar8;
      auVar17 = *pauVar11;
      pauVar11 = pauVar11 + 1;
    } while (uVar8 != 0);
    auVar17 = aesdeclast(auVar23,auVar17);
    aauStack_c0[0]._0_4_ = auVar17._0_4_ ^ auVar18._0_4_;
    aauStack_c0[0]._4_4_ = auVar17._4_4_ ^ auVar18._4_4_;
    aauStack_c0[0]._8_4_ = auVar17._8_4_ ^ auVar18._8_4_;
    aauStack_c0[0]._12_4_ = auVar17._12_4_ ^ auVar18._12_4_;
    param_3 = uVar12;
    pauVar9 = param_2;
    auVar18 = auVar19;
  }
  else {
    auVar17 = param_1[1];
    uVar14 = param_3 - 0x20;
    if (uVar12 < 0x10 || uVar14 == 0) {
      auVar23 = auVar19;
      auVar24 = auVar17;
      _aesni_decrypt2();
      aauStack_c0[0] = auVar24 ^ auVar19;
      *param_2 = auVar23 ^ auVar18;
      param_3 = uVar14;
      pauVar9 = param_2 + 1;
      auVar18 = auVar17;
    }
    else {
      auVar23 = param_1[2];
      uVar12 = param_3 - 0x30;
      if (uVar14 < 0x10 || uVar12 == 0) {
        auVar24 = auVar19;
        auVar25 = auVar17;
        auVar22 = auVar23;
        _aesni_decrypt3();
        *param_2 = auVar24 ^ auVar18;
        aauStack_c0[0] = auVar22 ^ auVar17;
        param_2[1] = auVar25 ^ auVar19;
        param_3 = uVar12;
        pauVar9 = param_2 + 2;
        auVar18 = auVar23;
      }
      else {
        auVar24 = param_1[3];
        param_3 = param_3 - 0x40;
        if (uVar12 < 0x10 || param_3 == 0) {
          auVar25 = auVar19;
          auVar22 = auVar17;
          auVar31 = auVar23;
          auVar21 = auVar24;
          _aesni_decrypt4();
          *param_2 = auVar25 ^ auVar18;
          param_2[1] = auVar22 ^ auVar19;
          aauStack_c0[0] = auVar21 ^ auVar23;
          param_2[2] = auVar31 ^ auVar17;
          pauVar9 = param_2 + 3;
          auVar18 = auVar24;
        }
        else {
          auVar25 = param_1[4];
          auVar22 = auVar19;
          auVar31 = auVar17;
          auVar21 = auVar23;
          auVar27 = auVar24;
          _aesni_decrypt6();
          *param_2 = auVar22 ^ auVar18;
          param_2[1] = auVar31 ^ auVar19;
          param_2[2] = auVar21 ^ auVar17;
          aauStack_c0[0] = auVar25 ^ auVar24;
          param_2[3] = auVar27 ^ auVar23;
          param_3 = param_3 - 0x10;
          pauVar9 = param_2 + 4;
          auVar18 = auVar25;
        }
      }
    }
  }
L_cbc_dec_tail_collected:
  *param_5 = auVar18;
  if ((param_3 & 0xf) == 0) {
    *pauVar9 = aauStack_c0[0];
  }
  else {
    pauVar11 = aauStack_c0;
    for (lVar10 = 0x10 - (param_3 & 0xf); lVar10 != 0; lVar10 = lVar10 + -1) {
      (*pauVar9)[0] = (*pauVar11)[0];
      pauVar11 = (undefined1 (*) [16])((longlong)pauVar11 + 1);
      pauVar9 = (undefined1 (*) [16])(*pauVar9 + 1);
    }
  }
  return;
}

// L$SEH_begin_aesni_cbc_encrypt @ 140df72fd

void L_SEH_begin_aesni_cbc_encrypt
               (undefined1 (*param_1) [16],undefined1 (*param_2) [16],ulonglong param_3,
               undefined1 (*param_4) [16],undefined1 (*param_5) [16],int param_6)

{
  undefined1 (*pauVar1) [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 (*pauVar9) [16];
  longlong lVar10;
  undefined1 (*pauVar11) [16];
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
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
  undefined1 local_c0 [11] [16];
  
  if (param_3 == 0) {
    return;
  }
  uVar8 = *(uint *)param_4[0xf];
  uVar14 = (ulonglong)uVar8;
  if (param_6 != 0) {
    auVar18 = *param_5;
    uVar12 = param_3;
    if (param_3 < 0x10) goto code_r0x000140df73b5;
    uVar12 = param_3 - 0x10;
    pauVar11 = param_1;
    while( true ) {
      do {
        param_3 = uVar12;
        param_1 = pauVar11 + 1;
        auVar19 = param_4[1];
        pauVar9 = param_4 + 2;
        auVar17._0_4_ = auVar18._0_4_ ^ *(uint *)*pauVar11 ^ *(uint *)*param_4;
        auVar17._4_4_ = auVar18._4_4_ ^ *(uint *)(*pauVar11 + 4) ^ *(uint *)(*param_4 + 4);
        auVar17._8_4_ = auVar18._8_4_ ^ *(uint *)(*pauVar11 + 8) ^ *(uint *)(*param_4 + 8);
        auVar17._12_4_ = auVar18._12_4_ ^ *(uint *)(*pauVar11 + 0xc) ^ *(uint *)(*param_4 + 0xc);
        uVar12 = uVar14;
        do {
          auVar17 = aesenc(auVar17,auVar19);
          uVar8 = (int)uVar12 - 1;
          uVar12 = (ulonglong)uVar8;
          auVar19 = *pauVar9;
          pauVar9 = pauVar9 + 1;
        } while (uVar8 != 0);
        auVar18 = aesenclast(auVar17,auVar19);
        *param_2 = auVar18;
        param_2 = param_2 + 1;
        uVar12 = param_3 - 0x10;
        pauVar11 = param_1;
      } while (0xf < param_3);
      uVar12 = param_3;
      if (param_3 == 0) break;
code_r0x000140df73b5:
      for (; param_3 != 0; param_3 = param_3 - 1) {
        (*param_2)[0] = (*param_1)[0];
        param_1 = (undefined1 (*) [16])(*param_1 + 1);
        param_2 = (undefined1 (*) [16])(*param_2 + 1);
      }
      for (lVar10 = 0x10 - uVar12; lVar10 != 0; lVar10 = lVar10 + -1) {
        (*param_2)[0] = 0;
        param_2 = (undefined1 (*) [16])(*param_2 + 1);
      }
      param_2 = param_2 + -1;
      uVar12 = 0;
      pauVar11 = param_2;
    }
    *param_5 = auVar18;
    return;
  }
  if (param_3 == 0x10) {
    uVar8 = *(uint *)(*param_1 + 4);
    uVar2 = *(uint *)(*param_1 + 8);
    uVar3 = *(uint *)(*param_1 + 0xc);
    uVar4 = *(uint *)*param_5;
    uVar5 = *(uint *)(*param_5 + 4);
    uVar6 = *(uint *)(*param_5 + 8);
    uVar7 = *(uint *)(*param_5 + 0xc);
    auVar18 = param_4[1];
    pauVar11 = param_4 + 2;
    auVar19._0_4_ = *(uint *)*param_1 ^ *(uint *)*param_4;
    auVar19._4_4_ = uVar8 ^ *(uint *)(*param_4 + 4);
    auVar19._8_4_ = uVar2 ^ *(uint *)(*param_4 + 8);
    auVar19._12_4_ = uVar3 ^ *(uint *)(*param_4 + 0xc);
    do {
      auVar19 = aesdec(auVar19,auVar18);
      uVar15 = (int)uVar14 - 1;
      uVar14 = (ulonglong)uVar15;
      auVar18 = *pauVar11;
      pauVar11 = pauVar11 + 1;
    } while (uVar15 != 0);
    auVar18 = aesdeclast(auVar19,auVar18);
    *(uint *)*param_5 = *(uint *)*param_1;
    *(uint *)(*param_5 + 4) = uVar8;
    *(uint *)(*param_5 + 8) = uVar2;
    *(uint *)(*param_5 + 0xc) = uVar3;
    *(uint *)*param_2 = auVar18._0_4_ ^ uVar4;
    *(uint *)(*param_2 + 4) = auVar18._4_4_ ^ uVar5;
    *(uint *)(*param_2 + 8) = auVar18._8_4_ ^ uVar6;
    *(uint *)(*param_2 + 0xc) = auVar18._12_4_ ^ uVar7;
    return;
  }
  auVar18 = *param_5;
  if (0x50 < param_3) {
    auVar19 = *param_4;
    auVar17 = *param_1;
    auVar23 = param_1[1];
    auVar24 = param_1[2];
    auVar25 = param_1[3];
    auVar22 = param_1[4];
    auVar31 = param_1[5];
    if (param_3 < 0x71) {
L_cbc_dec_six_or_seven:
      if (param_3 < 0x61) {
        auVar19 = auVar17;
        auVar21 = auVar23;
        auVar27 = auVar24;
        auVar20 = auVar25;
        _aesni_decrypt6();
        *param_2 = auVar19 ^ auVar18;
        param_2[1] = auVar21 ^ auVar17;
        param_2[2] = auVar27 ^ auVar23;
        param_2[3] = auVar20 ^ auVar24;
        local_c0[0] = auVar31 ^ auVar22;
        param_2[4] = auVar22 ^ auVar25;
        pauVar9 = param_2 + 5;
        auVar18 = auVar31;
      }
      else {
        auVar19 = param_1[6];
        auVar27 = auVar17;
        auVar20 = auVar23;
        auVar26 = auVar24;
        auVar28 = auVar25;
        _aesni_decrypt8();
        local_c0[0] = param_1[5];
        auVar21 = param_1[6];
        *param_2 = auVar27 ^ auVar18;
        param_2[1] = auVar20 ^ auVar17;
        param_2[2] = auVar26 ^ auVar23;
        param_2[3] = auVar28 ^ auVar24;
        param_2[4] = auVar22 ^ auVar25;
        local_c0[0] = auVar19 ^ local_c0[0];
        param_2[5] = auVar31 ^ auVar22;
        pauVar9 = param_2 + 6;
        auVar18 = auVar21;
      }
      goto L_cbc_dec_tail_collected;
    }
    uVar12 = param_3 - 0x50;
    pauVar11 = param_1;
    uVar16 = uVar14;
    auVar21 = auVar18;
    if ((DAT_15540a9f4 & 0x4400000) == 0x400000) {
      while( true ) {
        auVar18 = auVar31;
        param_1 = pauVar11 + 6;
        auVar19 = auVar17;
        auVar31 = auVar23;
        auVar27 = auVar24;
        auVar20 = auVar25;
        _aesni_decrypt6();
        *param_2 = auVar19 ^ auVar21;
        param_2[1] = auVar31 ^ auVar17;
        param_2[2] = auVar27 ^ auVar23;
        param_2[3] = auVar20 ^ auVar24;
        local_c0[0] = auVar18 ^ auVar22;
        uVar14 = uVar16 & 0xffffffff;
        param_2[4] = auVar22 ^ auVar25;
        pauVar9 = param_2 + 5;
        uVar13 = uVar12 - 0x60;
        if (uVar12 < 0x60 || uVar13 == 0) break;
        *pauVar9 = local_c0[0];
        param_2 = param_2 + 6;
        auVar17 = *param_1;
        auVar23 = pauVar11[7];
        auVar24 = pauVar11[8];
        auVar25 = pauVar11[9];
        auVar22 = pauVar11[10];
        pauVar9 = pauVar11 + 0xb;
        uVar12 = uVar13;
        pauVar11 = param_1;
        auVar31 = *pauVar9;
        auVar21 = auVar18;
      }
      param_3 = uVar12 - 0x10;
      if (param_3 == 0 || (longlong)uVar13 < -0x50) goto L_cbc_dec_tail_collected;
      *pauVar9 = local_c0[0];
      param_2 = param_2 + 6;
    }
    else {
      param_3 = param_3 - 0x70;
      while( true ) {
        auVar21 = param_4[1];
        auVar20 = aesdec(auVar17 ^ auVar19,auVar21);
        auVar27 = param_4[2];
        auVar26 = aesdec(auVar23 ^ auVar19,auVar21);
        auVar28 = aesdec(auVar24 ^ auVar19,auVar21);
        auVar29 = aesdec(auVar25 ^ auVar19,auVar21);
        auVar30 = aesdec(auVar22 ^ auVar19,auVar21);
        auVar31 = aesdec(auVar31 ^ auVar19,auVar21);
        auVar32 = aesdec(param_1[6] ^ auVar19,auVar21);
        auVar33 = aesdec(param_1[7] ^ auVar19,auVar21);
        pauVar11 = (undefined1 (*) [16])(*param_1 + ((ulonglong)(param_3 < 0x70) - 1 & 0x80));
        auVar19 = param_4[3];
        auVar21 = aesdec(auVar20,auVar27);
        auVar20 = aesdec(auVar26,auVar27);
        auVar26 = aesdec(auVar28,auVar27);
        auVar28 = aesdec(auVar29,auVar27);
        auVar29 = aesdec(auVar30,auVar27);
        auVar30 = aesdec(auVar31,auVar27);
        auVar32 = aesdec(auVar32,auVar27);
        auVar33 = aesdec(auVar33,auVar27);
        auVar31 = param_4[4];
        auVar21 = aesdec(auVar21,auVar19);
        auVar27 = aesdec(auVar20,auVar19);
        auVar20 = aesdec(auVar26,auVar19);
        auVar26 = aesdec(auVar28,auVar19);
        auVar28 = aesdec(auVar29,auVar19);
        auVar29 = aesdec(auVar30,auVar19);
        auVar30 = aesdec(auVar32,auVar19);
        auVar32 = aesdec(auVar33,auVar19);
        auVar19 = param_4[5];
        auVar21 = aesdec(auVar21,auVar31);
        auVar27 = aesdec(auVar27,auVar31);
        auVar20 = aesdec(auVar20,auVar31);
        auVar26 = aesdec(auVar26,auVar31);
        auVar28 = aesdec(auVar28,auVar31);
        auVar29 = aesdec(auVar29,auVar31);
        auVar30 = aesdec(auVar30,auVar31);
        auVar32 = aesdec(auVar32,auVar31);
        auVar31 = param_4[6];
        auVar21 = aesdec(auVar21,auVar19);
        auVar27 = aesdec(auVar27,auVar19);
        auVar20 = aesdec(auVar20,auVar19);
        auVar26 = aesdec(auVar26,auVar19);
        auVar28 = aesdec(auVar28,auVar19);
        auVar29 = aesdec(auVar29,auVar19);
        auVar30 = aesdec(auVar30,auVar19);
        auVar32 = aesdec(auVar32,auVar19);
        auVar19 = param_4[7];
        auVar21 = aesdec(auVar21,auVar31);
        auVar27 = aesdec(auVar27,auVar31);
        auVar20 = aesdec(auVar20,auVar31);
        auVar26 = aesdec(auVar26,auVar31);
        auVar28 = aesdec(auVar28,auVar31);
        auVar29 = aesdec(auVar29,auVar31);
        auVar30 = aesdec(auVar30,auVar31);
        auVar32 = aesdec(auVar32,auVar31);
        auVar31 = param_4[8];
        auVar21 = aesdec(auVar21,auVar19);
        auVar27 = aesdec(auVar27,auVar19);
        auVar20 = aesdec(auVar20,auVar19);
        auVar26 = aesdec(auVar26,auVar19);
        auVar28 = aesdec(auVar28,auVar19);
        auVar29 = aesdec(auVar29,auVar19);
        auVar30 = aesdec(auVar30,auVar19);
        auVar32 = aesdec(auVar32,auVar19);
        auVar19 = param_4[9];
        auVar21 = aesdec(auVar21,auVar31);
        auVar27 = aesdec(auVar27,auVar31);
        auVar20 = aesdec(auVar20,auVar31);
        auVar26 = aesdec(auVar26,auVar31);
        auVar28 = aesdec(auVar28,auVar31);
        auVar29 = aesdec(auVar29,auVar31);
        auVar30 = aesdec(auVar30,auVar31);
        auVar32 = aesdec(auVar32,auVar31);
        auVar31 = param_4[10];
        if (10 < uVar8) {
          auVar21 = aesdec(auVar21,auVar19);
          auVar27 = aesdec(auVar27,auVar19);
          auVar20 = aesdec(auVar20,auVar19);
          auVar26 = aesdec(auVar26,auVar19);
          auVar28 = aesdec(auVar28,auVar19);
          auVar29 = aesdec(auVar29,auVar19);
          auVar30 = aesdec(auVar30,auVar19);
          auVar32 = aesdec(auVar32,auVar19);
          auVar19 = param_4[0xb];
          auVar21 = aesdec(auVar21,auVar31);
          auVar27 = aesdec(auVar27,auVar31);
          auVar20 = aesdec(auVar20,auVar31);
          auVar26 = aesdec(auVar26,auVar31);
          auVar28 = aesdec(auVar28,auVar31);
          auVar29 = aesdec(auVar29,auVar31);
          auVar30 = aesdec(auVar30,auVar31);
          auVar32 = aesdec(auVar32,auVar31);
          auVar31 = param_4[0xc];
          if (uVar8 != 0xb) {
            auVar21 = aesdec(auVar21,auVar19);
            auVar27 = aesdec(auVar27,auVar19);
            auVar20 = aesdec(auVar20,auVar19);
            auVar26 = aesdec(auVar26,auVar19);
            auVar28 = aesdec(auVar28,auVar19);
            auVar29 = aesdec(auVar29,auVar19);
            auVar30 = aesdec(auVar30,auVar19);
            auVar32 = aesdec(auVar32,auVar19);
            auVar19 = param_4[0xd];
            auVar21 = aesdec(auVar21,auVar31);
            auVar27 = aesdec(auVar27,auVar31);
            auVar20 = aesdec(auVar20,auVar31);
            auVar26 = aesdec(auVar26,auVar31);
            auVar28 = aesdec(auVar28,auVar31);
            auVar29 = aesdec(auVar29,auVar31);
            auVar30 = aesdec(auVar30,auVar31);
            auVar32 = aesdec(auVar32,auVar31);
            auVar31 = param_4[0xe];
          }
        }
        auVar21 = aesdec(auVar21,auVar19);
        auVar27 = aesdec(auVar27,auVar19);
        auVar20 = aesdec(auVar20,auVar19);
        auVar26 = aesdec(auVar26,auVar19);
        auVar28 = aesdec(auVar28,auVar19);
        auVar29 = aesdec(auVar29,auVar19);
        auVar30 = aesdec(auVar30,auVar19);
        auVar19 = aesdec(auVar32,auVar19);
        pauVar9 = param_1 + 5;
        auVar21 = aesdeclast(auVar21,auVar18 ^ auVar31);
        pauVar1 = param_1 + 6;
        auVar27 = aesdeclast(auVar27,auVar17 ^ auVar31);
        auVar18 = param_1[7];
        auVar20 = aesdeclast(auVar20,auVar23 ^ auVar31);
        param_1 = param_1 + 8;
        auVar17 = *pauVar11;
        auVar26 = aesdeclast(auVar26,auVar24 ^ auVar31);
        auVar28 = aesdeclast(auVar28,auVar25 ^ auVar31);
        auVar23 = pauVar11[1];
        auVar24 = pauVar11[2];
        auVar29 = aesdeclast(auVar29,auVar22 ^ auVar31);
        auVar30 = aesdeclast(auVar30,*pauVar9 ^ auVar31);
        auVar25 = pauVar11[3];
        auVar22 = pauVar11[4];
        local_c0[0] = aesdeclast(auVar19,*pauVar1 ^ auVar31);
        auVar31 = pauVar11[5];
        auVar19 = *param_4;
        *param_2 = auVar21;
        param_2[1] = auVar27;
        param_2[2] = auVar20;
        param_2[3] = auVar26;
        param_2[4] = auVar28;
        param_2[5] = auVar29;
        param_2[6] = auVar30;
        pauVar9 = param_2 + 7;
        uVar12 = param_3 - 0x80;
        if (param_3 < 0x80 || uVar12 == 0) break;
        *pauVar9 = local_c0[0];
        param_2 = param_2 + 8;
        param_3 = uVar12;
      }
      param_3 = param_3 - 0x10;
      if (param_3 == 0 || (longlong)uVar12 < -0x70) goto L_cbc_dec_tail_collected;
      *pauVar9 = local_c0[0];
      param_2 = param_2 + 8;
      if (0x50 < param_3) goto L_cbc_dec_six_or_seven;
    }
  }
  auVar19 = *param_1;
  uVar12 = param_3 - 0x10;
  if (param_3 < 0x10 || uVar12 == 0) {
    auVar17 = param_4[1];
    pauVar11 = param_4 + 2;
    auVar23._0_4_ = auVar19._0_4_ ^ *(uint *)*param_4;
    auVar23._4_4_ = auVar19._4_4_ ^ *(uint *)(*param_4 + 4);
    auVar23._8_4_ = auVar19._8_4_ ^ *(uint *)(*param_4 + 8);
    auVar23._12_4_ = auVar19._12_4_ ^ *(uint *)(*param_4 + 0xc);
    do {
      auVar23 = aesdec(auVar23,auVar17);
      uVar8 = (int)uVar14 - 1;
      uVar14 = (ulonglong)uVar8;
      auVar17 = *pauVar11;
      pauVar11 = pauVar11 + 1;
    } while (uVar8 != 0);
    auVar17 = aesdeclast(auVar23,auVar17);
    local_c0[0]._0_4_ = auVar17._0_4_ ^ auVar18._0_4_;
    local_c0[0]._4_4_ = auVar17._4_4_ ^ auVar18._4_4_;
    local_c0[0]._8_4_ = auVar17._8_4_ ^ auVar18._8_4_;
    local_c0[0]._12_4_ = auVar17._12_4_ ^ auVar18._12_4_;
    param_3 = uVar12;
    pauVar9 = param_2;
    auVar18 = auVar19;
  }
  else {
    auVar17 = param_1[1];
    uVar14 = param_3 - 0x20;
    if (uVar12 < 0x10 || uVar14 == 0) {
      auVar23 = auVar19;
      auVar24 = auVar17;
      _aesni_decrypt2();
      local_c0[0] = auVar24 ^ auVar19;
      *param_2 = auVar23 ^ auVar18;
      param_3 = uVar14;
      pauVar9 = param_2 + 1;
      auVar18 = auVar17;
    }
    else {
      auVar23 = param_1[2];
      uVar12 = param_3 - 0x30;
      if (uVar14 < 0x10 || uVar12 == 0) {
        auVar24 = auVar19;
        auVar25 = auVar17;
        auVar22 = auVar23;
        _aesni_decrypt3();
        *param_2 = auVar24 ^ auVar18;
        local_c0[0] = auVar22 ^ auVar17;
        param_2[1] = auVar25 ^ auVar19;
        param_3 = uVar12;
        pauVar9 = param_2 + 2;
        auVar18 = auVar23;
      }
      else {
        auVar24 = param_1[3];
        param_3 = param_3 - 0x40;
        if (uVar12 < 0x10 || param_3 == 0) {
          auVar25 = auVar19;
          auVar22 = auVar17;
          auVar31 = auVar23;
          auVar21 = auVar24;
          _aesni_decrypt4();
          *param_2 = auVar25 ^ auVar18;
          param_2[1] = auVar22 ^ auVar19;
          local_c0[0] = auVar21 ^ auVar23;
          param_2[2] = auVar31 ^ auVar17;
          pauVar9 = param_2 + 3;
          auVar18 = auVar24;
        }
        else {
          auVar25 = param_1[4];
          auVar22 = auVar19;
          auVar31 = auVar17;
          auVar21 = auVar23;
          auVar27 = auVar24;
          _aesni_decrypt6();
          *param_2 = auVar22 ^ auVar18;
          param_2[1] = auVar31 ^ auVar19;
          param_2[2] = auVar21 ^ auVar17;
          local_c0[0] = auVar25 ^ auVar24;
          param_2[3] = auVar27 ^ auVar23;
          param_3 = param_3 - 0x10;
          pauVar9 = param_2 + 4;
          auVar18 = auVar25;
        }
      }
    }
  }
L_cbc_dec_tail_collected:
  *param_5 = auVar18;
  if ((param_3 & 0xf) == 0) {
    *pauVar9 = local_c0[0];
  }
  else {
    pauVar11 = local_c0;
    for (lVar10 = 0x10 - (param_3 & 0xf); lVar10 != 0; lVar10 = lVar10 + -1) {
      (*pauVar9)[0] = (*pauVar11)[0];
      pauVar11 = (undefined1 (*) [16])((longlong)pauVar11 + 1);
      pauVar9 = (undefined1 (*) [16])(*pauVar9 + 1);
    }
  }
  return;
}

// aesni_set_decrypt_key @ 140df7d30

undefined8 aesni_set_decrypt_key(undefined8 param_1,int param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 (*pauVar7) [16];
  undefined1 (*pauVar8) [16];
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  iVar6 = aesni_set_encrypt_key();
  uVar9 = extraout_XMM0_Qa;
  if (iVar6 == 0) {
    puVar3 = (undefined8 *)((longlong)param_3 + (ulonglong)(uint)(param_2 << 4) + 0x10);
    uVar9 = param_3[1];
    uVar4 = *puVar3;
    uVar5 = puVar3[1];
    *puVar3 = *param_3;
    puVar3[1] = uVar9;
    *param_3 = uVar4;
    param_3[1] = uVar5;
    pauVar7 = (undefined1 (*) [16])(puVar3 + -2);
    pauVar8 = (undefined1 (*) [16])(param_3 + 2);
    do {
      auVar10 = aesimc(*pauVar8);
      auVar11 = aesimc(*pauVar7);
      pauVar1 = pauVar8 + 1;
      pauVar2 = pauVar7 + -1;
      *pauVar7 = auVar10;
      *pauVar8 = auVar11;
      pauVar7 = pauVar2;
      pauVar8 = pauVar1;
    } while (pauVar1 < pauVar2);
    auVar10 = aesimc(*pauVar1);
    *pauVar2 = auVar10;
    uVar9 = 0;
  }
  return uVar9;
}

// aesni_set_encrypt_key @ 140df7da0

/* WARNING: Removing unreachable block (ram,0x000140df81e6) */
/* WARNING: Removing unreachable block (ram,0x000140df81dd) */
/* WARNING: Removing unreachable block (ram,0x000140df81ef) */
/* WARNING: Removing unreachable block (ram,0x000140df81b0) */
/* WARNING: Removing unreachable block (ram,0x000140df819e) */
/* WARNING: Removing unreachable block (ram,0x000140df8061) */
/* WARNING: Removing unreachable block (ram,0x000140df8073) */
/* WARNING: Removing unreachable block (ram,0x000140df8058) */
/* WARNING: Removing unreachable block (ram,0x000140df804f) */
/* WARNING: Removing unreachable block (ram,0x000140df7f5d) */
/* WARNING: Removing unreachable block (ram,0x000140df7f54) */
/* WARNING: Removing unreachable block (ram,0x000140df7f31) */
/* WARNING: Removing unreachable block (ram,0x000140df7f1f) */
/* WARNING: Removing unreachable block (ram,0x000140df7ed7) */
/* WARNING: Removing unreachable block (ram,0x000140df7ee0) */
/* WARNING: Removing unreachable block (ram,0x000140df7ee9) */
/* WARNING: Removing unreachable block (ram,0x000140df7f66) */
/* WARNING: Removing unreachable block (ram,0x000140df81a7) */
/* WARNING: Removing unreachable block (ram,0x000140df7f28) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 aesni_set_encrypt_key(undefined1 (*param_1) [16],int param_2,undefined1 (*param_3) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 (*pauVar9) [16];
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined1 (*pauVar12) [16];
  uint uVar13;
  int iVar14;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 extraout_XMM0_Qb_08;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined8 extraout_XMM0_Qb_09;
  undefined1 auVar28 [16];
  undefined4 uVar34;
  undefined8 extraout_XMM0_Qb_10;
  undefined8 extraout_XMM0_Qb_11;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined8 extraout_XMM0_Qb_16;
  undefined1 auVar33 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  ulonglong uVar39;
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
  ulonglong uVar15;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined8 extraout_XMM0_Qb_01;
  undefined8 extraout_XMM0_Qb_02;
  undefined8 extraout_XMM0_Qb_03;
  undefined8 extraout_XMM0_Qb_04;
  undefined8 extraout_XMM0_Qb_05;
  undefined8 extraout_XMM0_Qb_06;
  undefined8 extraout_XMM0_Qb_07;
  undefined8 extraout_XMM0_Qb_12;
  undefined8 extraout_XMM0_Qb_13;
  undefined8 extraout_XMM0_Qb_14;
  undefined8 extraout_XMM0_Qb_15;
  
  auVar37 = _L_key_rcon1;
  auVar25 = _L_key_rotate192;
  auVar35 = _L_key_rotate;
  uVar10 = 0xffffffffffffffff;
  if ((param_1 != (undefined1 (*) [16])0x0) && (param_3 != (undefined1 (*) [16])0x0)) {
    auVar27 = *param_1;
    uVar13 = DAT_15540a9f4 & 0x10000800;
    if (param_2 == 0x100) {
      auVar25 = param_1[1];
      uVar34 = 0xd;
      if (uVar13 == 0x10000000) {
        iVar14 = 7;
        *param_3 = auVar27;
        param_3[1] = auVar25;
        while( true ) {
          auVar26 = pshufb(auVar25,auVar35);
          auVar44 = aesenclast(auVar26,auVar37);
          uVar15 = auVar27._0_8_;
          auVar33._0_8_ = uVar15 << 0x20;
          auVar33._8_8_ = auVar27._8_8_ << 0x20 | uVar15 >> 0x20;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = (uVar15 >> 0x20) << 0x20 | uVar15 & 0xffffffff;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar15 << 0x20;
          auVar50._0_4_ = auVar37._0_4_ << 1;
          auVar50._4_4_ = auVar37._4_4_ << 1;
          auVar50._8_4_ = auVar37._8_4_ << 1;
          auVar50._12_4_ = auVar37._12_4_ << 1;
          auVar27 = auVar7 << 0x40 ^ auVar27 ^ auVar33 ^ auVar26 << 0x40 ^ auVar44;
          param_3[2] = auVar27;
          iVar14 = iVar14 + -1;
          if (iVar14 == 0) break;
          uVar34 = auVar27._12_4_;
          auVar45._4_4_ = uVar34;
          auVar45._0_4_ = uVar34;
          auVar45._8_4_ = uVar34;
          auVar45._12_4_ = uVar34;
          auVar26 = aesenclast(auVar45,(undefined1  [16])0x0);
          uVar15 = auVar25._0_8_;
          auVar38._0_8_ = uVar15 << 0x20;
          auVar38._8_8_ = auVar25._8_8_ << 0x20 | uVar15 >> 0x20;
          auVar37._8_8_ = 0;
          auVar37._0_8_ = (uVar15 >> 0x20) << 0x20 | uVar15 & 0xffffffff;
          auVar44._8_8_ = 0;
          auVar44._0_8_ = uVar15 << 0x20;
          auVar25 = auVar26 ^ auVar44 << 0x40 ^ auVar25 ^ auVar38 ^ auVar37 << 0x40;
          param_3[3] = auVar25;
          auVar37 = auVar50;
          param_3 = param_3 + 2;
        }
        *(undefined4 *)param_3[3] = 0xd;
        uVar10 = 0;
      }
      else {
        *param_3 = auVar27;
        param_3[1] = auVar25;
        auVar35 = aeskeygenassist(auVar25,1);
        auVar35._0_8_ = L_key_expansion_256a_cold(param_1,auVar35._0_8_);
        auVar35._8_8_ = extraout_XMM0_Qb_10;
        auVar37 = aeskeygenassist(auVar35,1);
        uVar10 = L_key_expansion_256b(auVar35._0_8_,auVar37._0_8_);
        auVar35 = aeskeygenassist(auVar25,2);
        auVar27._0_8_ = L_key_expansion_256a(uVar10,auVar35._0_8_);
        auVar27._8_8_ = extraout_XMM0_Qb_11;
        auVar35 = aeskeygenassist(auVar27,2);
        uVar10 = L_key_expansion_256b(auVar27._0_8_,auVar35._0_8_);
        auVar35 = aeskeygenassist(auVar25,4);
        auVar29._0_8_ = L_key_expansion_256a(uVar10,auVar35._0_8_);
        auVar29._8_8_ = extraout_XMM0_Qb_12;
        auVar35 = aeskeygenassist(auVar29,4);
        uVar10 = L_key_expansion_256b(auVar29._0_8_,auVar35._0_8_);
        auVar35 = aeskeygenassist(auVar25,8);
        auVar30._0_8_ = L_key_expansion_256a(uVar10,auVar35._0_8_);
        auVar30._8_8_ = extraout_XMM0_Qb_13;
        auVar35 = aeskeygenassist(auVar30,8);
        uVar10 = L_key_expansion_256b(auVar30._0_8_,auVar35._0_8_);
        auVar35 = aeskeygenassist(auVar25,0x10);
        auVar31._0_8_ = L_key_expansion_256a(uVar10,auVar35._0_8_);
        auVar31._8_8_ = extraout_XMM0_Qb_14;
        auVar35 = aeskeygenassist(auVar31,0x10);
        uVar10 = L_key_expansion_256b(auVar31._0_8_,auVar35._0_8_);
        auVar35 = aeskeygenassist(auVar25,0x20);
        auVar32._0_8_ = L_key_expansion_256a(uVar10,auVar35._0_8_);
        auVar32._8_8_ = extraout_XMM0_Qb_15;
        auVar35 = aeskeygenassist(auVar32,0x20);
        uVar10 = L_key_expansion_256b(auVar32._0_8_,auVar35._0_8_);
        auVar35 = aeskeygenassist(auVar25,0x40);
        puVar11 = (undefined8 *)L_key_expansion_256a(uVar10,auVar35._0_8_);
        *puVar11 = extraout_XMM0_Qa_01;
        puVar11[1] = extraout_XMM0_Qb_16;
        *(undefined4 *)(puVar11 + 2) = uVar34;
        uVar10 = 0;
      }
    }
    else if (param_2 == 0xc0) {
      auVar43._8_8_ = 0;
      auVar43._0_8_ = *(ulonglong *)param_1[1];
      uVar34 = 0xb;
      if (uVar13 == 0x10000000) {
        iVar14 = 8;
        *param_3 = auVar27;
        pauVar9 = param_3 + 1;
        do {
          pauVar12 = pauVar9;
          uVar39 = auVar43._0_8_;
          *(ulonglong *)*pauVar12 = uVar39;
          auVar35 = pshufb(auVar43,auVar25);
          auVar35 = aesenclast(auVar35,auVar37);
          auVar49._0_4_ = auVar37._0_4_ << 1;
          auVar49._4_4_ = auVar37._4_4_ << 1;
          auVar49._8_4_ = auVar37._8_4_ << 1;
          auVar49._12_4_ = auVar37._12_4_ << 1;
          uVar15 = auVar27._0_8_;
          auVar28._0_8_ = uVar15 << 0x20;
          auVar28._8_8_ = auVar27._8_8_ << 0x20 | uVar15 >> 0x20;
          auVar3._8_8_ = 0;
          auVar3._0_8_ = (uVar15 >> 0x20) << 0x20 | uVar15 & 0xffffffff;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = uVar15 << 0x20;
          auVar27 = auVar6 << 0x40 ^ auVar27 ^ auVar28 ^ auVar3 << 0x40;
          uVar34 = auVar27._12_4_;
          auVar46._4_4_ = uVar34;
          auVar46._0_4_ = uVar34;
          auVar46._8_4_ = uVar34;
          auVar46._12_4_ = uVar34;
          auVar36._0_8_ = uVar39 << 0x20;
          auVar36._8_8_ = auVar43._8_8_ << 0x20 | uVar39 >> 0x20;
          auVar27 = auVar27 ^ auVar35;
          auVar43 = auVar35 ^ auVar46 ^ auVar43 ^ auVar36;
          *(undefined1 (*) [16])(*pauVar12 + 8) = auVar27;
          iVar14 = iVar14 + -1;
          pauVar9 = (undefined1 (*) [16])(pauVar12[1] + 8);
          auVar37 = auVar49;
        } while (iVar14 != 0);
        *(undefined4 *)(pauVar12[3] + 8) = 0xb;
        uVar10 = 0;
      }
      else {
        *param_3 = auVar27;
        auVar35 = aeskeygenassist(auVar43,1);
        uVar10 = L_key_expansion_192a_cold(param_1,auVar35._0_8_);
        auVar35 = aeskeygenassist(auVar43,2);
        uVar10 = L_key_expansion_192b(uVar10,auVar35._0_8_);
        auVar35 = aeskeygenassist(auVar43,4);
        uVar10 = L_key_expansion_192a(uVar10,auVar35._0_8_);
        auVar35 = aeskeygenassist(auVar43,8);
        uVar10 = L_key_expansion_192b(uVar10,auVar35._0_8_);
        auVar35 = aeskeygenassist(auVar43,0x10);
        uVar10 = L_key_expansion_192a(uVar10,auVar35._0_8_);
        auVar35 = aeskeygenassist(auVar43,0x20);
        uVar10 = L_key_expansion_192b(uVar10,auVar35._0_8_);
        auVar35 = aeskeygenassist(auVar43,0x40);
        uVar10 = L_key_expansion_192a(uVar10,auVar35._0_8_);
        auVar35 = aeskeygenassist(auVar43,0x80);
        puVar11 = (undefined8 *)L_key_expansion_192b(uVar10,auVar35._0_8_);
        *puVar11 = extraout_XMM0_Qa_00;
        puVar11[1] = extraout_XMM0_Qb_09;
        *(undefined4 *)(puVar11 + 6) = uVar34;
        uVar10 = 0;
      }
    }
    else if (param_2 == 0x80) {
      uVar34 = 9;
      if (uVar13 == 0x10000000) {
        iVar14 = 8;
        *param_3 = auVar27;
        pauVar9 = param_3 + 1;
        do {
          pauVar12 = pauVar9;
          auVar25 = pshufb(auVar27,auVar35);
          auVar26 = aesenclast(auVar25,auVar37);
          auVar47._0_4_ = auVar37._0_4_ << 1;
          auVar47._4_4_ = auVar37._4_4_ << 1;
          auVar47._8_4_ = auVar37._8_4_ << 1;
          auVar47._12_4_ = auVar37._12_4_ << 1;
          uVar15 = auVar27._0_8_;
          auVar40._0_8_ = uVar15 << 0x20;
          auVar40._8_8_ = auVar27._8_8_ << 0x20 | uVar15 >> 0x20;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = (uVar15 >> 0x20) << 0x20 | uVar15 & 0xffffffff;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = uVar15 << 0x20;
          auVar27 = auVar26 ^ auVar4 << 0x40 ^ auVar27 ^ auVar40 ^ auVar25 << 0x40;
          *pauVar12 = auVar27;
          iVar14 = iVar14 + -1;
          pauVar9 = pauVar12 + 1;
          auVar37 = auVar47;
        } while (iVar14 != 0);
        auVar25 = pshufb(auVar27,auVar35);
        auVar25 = aesenclast(auVar25,_L_key_rcon1b);
        auVar48._0_4_ = (int)L_key_rcon1b << 1;
        auVar48._4_4_ = L_key_rcon1b._4_4_ << 1;
        auVar48._8_4_ = L_key_rcon1b._8_4_ << 1;
        auVar48._12_4_ = L_key_rcon1b._12_4_ << 1;
        uVar15 = auVar27._0_8_;
        auVar41._0_8_ = uVar15 << 0x20;
        auVar41._8_8_ = auVar27._8_8_ << 0x20 | uVar15 >> 0x20;
        auVar1._8_8_ = 0;
        auVar1._0_8_ = (uVar15 >> 0x20) << 0x20 | uVar15 & 0xffffffff;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15 << 0x20;
        auVar25 = auVar25 ^ auVar8 << 0x40 ^ auVar27 ^ auVar41 ^ auVar1 << 0x40;
        pauVar12[1] = auVar25;
        auVar35 = pshufb(auVar25,auVar35);
        auVar35 = aesenclast(auVar35,auVar48);
        uVar15 = auVar25._0_8_;
        auVar42._0_8_ = uVar15 << 0x20;
        auVar42._8_8_ = auVar25._8_8_ << 0x20 | uVar15 >> 0x20;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = (uVar15 >> 0x20) << 0x20 | uVar15 & 0xffffffff;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar15 << 0x20;
        pauVar12[2] = auVar35 ^ auVar5 << 0x40 ^ auVar25 ^ auVar42 ^ auVar2 << 0x40;
        *(undefined4 *)pauVar12[7] = 9;
        uVar10 = 0;
      }
      else {
        *param_3 = auVar27;
        auVar35 = aeskeygenassist(auVar27,1);
        auVar16._0_8_ = L_key_expansion_128_cold(param_1,auVar35._0_8_);
        auVar16._8_8_ = extraout_XMM0_Qb;
        auVar35 = aeskeygenassist(auVar16,2);
        auVar17._0_8_ = L_key_expansion_128(auVar16._0_8_,auVar35._0_8_);
        auVar17._8_8_ = extraout_XMM0_Qb_00;
        auVar35 = aeskeygenassist(auVar17,4);
        auVar18._0_8_ = L_key_expansion_128(auVar17._0_8_,auVar35._0_8_);
        auVar18._8_8_ = extraout_XMM0_Qb_01;
        auVar35 = aeskeygenassist(auVar18,8);
        auVar19._0_8_ = L_key_expansion_128(auVar18._0_8_,auVar35._0_8_);
        auVar19._8_8_ = extraout_XMM0_Qb_02;
        auVar35 = aeskeygenassist(auVar19,0x10);
        auVar20._0_8_ = L_key_expansion_128(auVar19._0_8_,auVar35._0_8_);
        auVar20._8_8_ = extraout_XMM0_Qb_03;
        auVar35 = aeskeygenassist(auVar20,0x20);
        auVar21._0_8_ = L_key_expansion_128(auVar20._0_8_,auVar35._0_8_);
        auVar21._8_8_ = extraout_XMM0_Qb_04;
        auVar35 = aeskeygenassist(auVar21,0x40);
        auVar22._0_8_ = L_key_expansion_128(auVar21._0_8_,auVar35._0_8_);
        auVar22._8_8_ = extraout_XMM0_Qb_05;
        auVar35 = aeskeygenassist(auVar22,0x80);
        auVar23._0_8_ = L_key_expansion_128(auVar22._0_8_,auVar35._0_8_);
        auVar23._8_8_ = extraout_XMM0_Qb_06;
        auVar35 = aeskeygenassist(auVar23,0x1b);
        auVar24._0_8_ = L_key_expansion_128(auVar23._0_8_,auVar35._0_8_);
        auVar24._8_8_ = extraout_XMM0_Qb_07;
        auVar35 = aeskeygenassist(auVar24,0x36);
        puVar11 = (undefined8 *)L_key_expansion_128(auVar24._0_8_,auVar35._0_8_);
        *puVar11 = extraout_XMM0_Qa;
        puVar11[1] = extraout_XMM0_Qb_08;
        *(undefined4 *)(puVar11 + 10) = uVar34;
        uVar10 = 0;
      }
    }
    else {
      uVar10 = 0xfffffffffffffffe;
    }
  }
  return uVar10;
}

// L$key_expansion_128 @ 140df8250

undefined4 * L_key_expansion_128(undefined8 param_1)

{
  undefined4 *in_RAX;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  
  *in_RAX = (int)param_1;
  in_RAX[1] = (int)((ulonglong)param_1 >> 0x20);
  in_RAX[2] = in_XMM0_Dc;
  in_RAX[3] = in_XMM0_Dd;
  return in_RAX + 4;
}

// L$key_expansion_128_cold @ 140df8257

undefined8 L_key_expansion_128_cold(undefined8 param_1)

{
  uint in_XMM1_Dd;
  uint in_XMM4_Da;
  
  return CONCAT44((uint)((ulonglong)param_1 >> 0x20) ^ in_XMM4_Da ^ (uint)param_1 ^ in_XMM1_Dd,
                  (uint)param_1 ^ in_XMM1_Dd);
}

// L$key_expansion_192a @ 140df8270

/* WARNING: Removing unreachable block (ram,0x000140df8289) */

undefined8 * L_key_expansion_192a(undefined8 param_1)

{
  undefined8 *in_RAX;
  undefined8 in_XMM0_Qb;
  
  *in_RAX = param_1;
  in_RAX[1] = in_XMM0_Qb;
  return in_RAX + 2;
}

// L$key_expansion_192a_cold @ 140df8277

/* WARNING: Removing unreachable block (ram,0x000140df8289) */

ulonglong L_key_expansion_192a_cold(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  uint in_XMM4_Da;
  
  uVar1 = (undefined4)((ulonglong)param_2 >> 0x20);
  return CONCAT44((uint)((ulonglong)param_1 >> 0x20) ^ in_XMM4_Da ^ (uint)param_1,(uint)param_1) ^
         CONCAT44(uVar1,uVar1);
}

// L$key_expansion_192b @ 140df82b0

/* WARNING: Removing unreachable block (ram,0x000140df8289) */

undefined4 * L_key_expansion_192b(undefined8 param_1,undefined8 param_2)

{
  undefined4 *in_RAX;
  undefined1 in_XMM0 [16];
  undefined1 auVar1 [16];
  undefined4 in_XMM5_Da;
  undefined4 in_XMM5_Db;
  
  *in_RAX = in_XMM5_Da;
  in_RAX[1] = in_XMM5_Db;
  in_RAX[2] = in_XMM0._0_4_;
  in_RAX[3] = in_XMM0._4_4_;
  auVar1._0_8_ = in_XMM0._8_8_;
  auVar1._8_4_ = (int)param_2;
  auVar1._12_4_ = (int)((ulonglong)param_2 >> 0x20);
  *(undefined1 (*) [16])(in_RAX + 4) = auVar1;
  return in_RAX + 8;
}

// L$key_expansion_256a @ 140df82d0

undefined8 * L_key_expansion_256a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *in_RAX;
  undefined8 in_XMM2_Qb;
  
  *in_RAX = param_3;
  in_RAX[1] = in_XMM2_Qb;
  return in_RAX + 2;
}

// L$key_expansion_256a_cold @ 140df82d7

undefined8 L_key_expansion_256a_cold(undefined8 param_1)

{
  uint in_XMM1_Dd;
  uint in_XMM4_Da;
  
  return CONCAT44((uint)((ulonglong)param_1 >> 0x20) ^ in_XMM4_Da ^ (uint)param_1 ^ in_XMM1_Dd,
                  (uint)param_1 ^ in_XMM1_Dd);
}

// L$key_expansion_256b @ 140df82f0

undefined8 * L_key_expansion_256b(undefined8 param_1)

{
  undefined8 *in_RAX;
  undefined8 in_XMM0_Qb;
  
  *in_RAX = param_1;
  in_RAX[1] = in_XMM0_Qb;
  return in_RAX + 2;
}


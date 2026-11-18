// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __sse4_tanf4@@16 @ 150166bc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __sse4_tanf4__16(void)

{
  ulonglong uVar1;
  undefined4 in_EAX;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint in_XMM0_Da;
  uint in_XMM0_Db;
  uint in_XMM0_Dc;
  uint in_XMM0_Dd;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar13 [16];
  float fVar17;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  uint uVar28;
  uint uVar30;
  uint uVar31;
  undefined1 auVar29 [16];
  uint uVar32;
  float fVar33;
  float fVar36;
  float fVar37;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float fVar38;
  uint uVar39;
  uint uVar43;
  uint uVar44;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  uint uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  float fVar52;
  float fVar55;
  float fVar56;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float fVar57;
  float fVar58;
  float fVar61;
  float fVar62;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  
  uVar5 = 0;
  fVar12 = (float)(in_XMM0_Da & _DAT_1562291c0);
  fVar14 = (float)(in_XMM0_Db & _UNK_1562291c4);
  fVar15 = (float)(in_XMM0_Dc & _UNK_1562291c8);
  fVar16 = (float)(in_XMM0_Dd & _UNK_1562291cc);
  auVar23._4_4_ = -(uint)(_UNK_1562292c4 < fVar14);
  auVar23._0_4_ = -(uint)(_DAT_1562292c0 < fVar12);
  auVar23._8_4_ = -(uint)(_UNK_1562292c8 < fVar15);
  auVar23._12_4_ = -(uint)(_UNK_1562292cc < fVar16);
  fVar17 = _DAT_156229140 * fVar12 + _DAT_156229240;
  fVar20 = _UNK_156229144 * fVar14 + _UNK_156229244;
  fVar21 = _UNK_156229148 * fVar15 + _UNK_156229248;
  fVar22 = _UNK_15622914c * fVar16 + _UNK_15622924c;
  iVar2 = movmskps(in_EAX,auVar23);
  fVar46 = fVar17 - _DAT_156229240;
  fVar47 = fVar20 - _UNK_156229244;
  fVar48 = fVar21 - _UNK_156229248;
  fVar49 = fVar22 - _UNK_15622924c;
  uVar7 = -(uint)((float)((int)fVar17 << 0x1e) != 0.0);
  uVar8 = -(uint)((float)((int)fVar20 << 0x1e) != 0.0);
  uVar9 = -(uint)((float)((int)fVar21 << 0x1e) != 0.0);
  uVar10 = -(uint)((float)((int)fVar22 << 0x1e) != 0.0);
  fVar46 = (((fVar12 - _DAT_156229300 * fVar46) - _DAT_156229340 * fVar46) - _DAT_156229380 * fVar46
           ) - _DAT_1562293c0 * fVar46;
  fVar47 = (((fVar14 - _UNK_156229304 * fVar47) - _UNK_156229344 * fVar47) - _UNK_156229384 * fVar47
           ) - _UNK_1562293c4 * fVar47;
  fVar48 = (((fVar15 - _UNK_156229308 * fVar48) - _UNK_156229348 * fVar48) - _UNK_156229388 * fVar48
           ) - _UNK_1562293c8 * fVar48;
  fVar49 = (((fVar16 - _UNK_15622930c * fVar49) - _UNK_15622934c * fVar49) - _UNK_15622938c * fVar49
           ) - _UNK_1562293cc * fVar49;
  fVar64 = fVar46 * fVar46;
  fVar65 = fVar47 * fVar47;
  fVar66 = fVar48 * fVar48;
  fVar67 = fVar49 * fVar49;
  fVar46 = fVar46 * (_DAT_156229500 * fVar64 + _DAT_1562294c0);
  fVar47 = fVar47 * (_UNK_156229504 * fVar65 + _UNK_1562294c4);
  fVar48 = fVar48 * (_UNK_156229508 * fVar66 + _UNK_1562294c8);
  fVar49 = fVar49 * (_UNK_15622950c * fVar67 + _UNK_1562294cc);
  fVar64 = fVar64 * (_DAT_1562295c0 * fVar64 + _DAT_156229580) + _DAT_156229540;
  fVar65 = fVar65 * (_UNK_1562295c4 * fVar65 + _UNK_156229584) + _UNK_156229544;
  fVar66 = fVar66 * (_UNK_1562295c8 * fVar66 + _UNK_156229588) + _UNK_156229548;
  fVar67 = fVar67 * (_UNK_1562295cc * fVar67 + _UNK_15622958c) + _UNK_15622954c;
  auVar24._0_4_ = ~uVar7 & (uint)fVar46;
  auVar24._4_4_ = ~uVar8 & (uint)fVar47;
  auVar24._8_4_ = ~uVar9 & (uint)fVar48;
  auVar24._12_4_ = ~uVar10 & (uint)fVar49;
  auVar27._0_4_ = uVar7 & (uint)fVar64;
  auVar27._4_4_ = uVar8 & (uint)fVar65;
  auVar27._8_4_ = uVar9 & (uint)fVar66;
  auVar27._12_4_ = uVar10 & (uint)fVar67;
  auVar25._0_4_ = (uint)fVar46 & uVar7;
  auVar25._4_4_ = (uint)fVar47 & uVar8;
  auVar25._8_4_ = (uint)fVar48 & uVar9;
  auVar25._12_4_ = (uint)fVar49 & uVar10;
  auVar18._0_4_ = ~uVar7 & (uint)fVar64;
  auVar18._4_4_ = ~uVar8 & (uint)fVar65;
  auVar18._8_4_ = ~uVar9 & (uint)fVar66;
  auVar18._12_4_ = ~uVar10 & (uint)fVar67;
  auVar25 = divps(auVar24 | auVar27,auVar25 | auVar18);
  auVar26._0_4_ = auVar25._0_4_ ^ (int)fVar17 << 0x1f ^ ~_DAT_1562291c0 & in_XMM0_Da;
  auVar26._4_4_ = auVar25._4_4_ ^ (int)fVar20 << 0x1f ^ ~_UNK_1562291c4 & in_XMM0_Db;
  auVar26._8_4_ = auVar25._8_4_ ^ (int)fVar21 << 0x1f ^ ~_UNK_1562291c8 & in_XMM0_Dc;
  auVar26._12_4_ = auVar25._12_4_ ^ (int)fVar22 << 0x1f ^ ~_UNK_1562291cc & in_XMM0_Dd;
  if (iVar2 != 0) {
    auVar29._4_4_ = -(uint)((float)(in_XMM0_Db & 0x7f800000) == INFINITY);
    auVar29._0_4_ = -(uint)((float)(in_XMM0_Da & 0x7f800000) == INFINITY);
    auVar29._8_4_ = -(uint)((float)(in_XMM0_Dc & 0x7f800000) == INFINITY);
    auVar29._12_4_ = -(uint)((float)(in_XMM0_Dd & 0x7f800000) == INFINITY);
    uVar1 = (ulonglong)((((uint)fVar12 & 0x7f800000) >> 0x17) * 0xc);
    uVar5 = movmskps(0x7f800000,auVar29);
    uVar6 = (ulonglong)((((uint)fVar15 & 0x7f800000) >> 0x17) * 0xc);
    uVar3 = (ulonglong)((((uint)fVar14 & 0x7f800000) >> 0x17) * 0xc);
    uVar4 = (ulonglong)((((uint)fVar16 & 0x7f800000) >> 0x17) * 0xc);
    auVar40._4_4_ = *(uint *)(&DAT_156228208 + uVar3);
    auVar40._0_4_ = *(uint *)(&DAT_156228208 + uVar1);
    auVar40._12_4_ = *(uint *)(&DAT_156228208 + uVar4);
    auVar40._8_4_ = *(uint *)(&DAT_156228208 + uVar6);
    auVar53._4_4_ = *(uint *)((longlong)&__common_stan_reduction_data + uVar3);
    auVar53._0_4_ = *(uint *)((longlong)&__common_stan_reduction_data + uVar1);
    auVar59._4_4_ = *(uint *)(&DAT_156228204 + uVar3);
    auVar59._0_4_ = *(uint *)(&DAT_156228204 + uVar1);
    auVar59._12_4_ = *(uint *)(&DAT_156228204 + uVar4);
    auVar59._8_4_ = *(uint *)(&DAT_156228204 + uVar6);
    auVar53._12_4_ = *(uint *)((longlong)&__common_stan_reduction_data + uVar4);
    auVar53._8_4_ = *(uint *)((longlong)&__common_stan_reduction_data + uVar6);
    auVar41._0_4_ = *(uint *)(&DAT_156228208 + uVar1) >> 0x10;
    auVar41._4_4_ = *(uint *)(&DAT_156228208 + uVar3) >> 0x10;
    auVar41._8_4_ = *(uint *)(&DAT_156228208 + uVar6) >> 0x10;
    auVar41._12_4_ = *(uint *)(&DAT_156228208 + uVar4) >> 0x10;
    auVar54._0_4_ = *(uint *)((longlong)&__common_stan_reduction_data + uVar1) >> 0x10;
    auVar54._4_4_ = *(uint *)((longlong)&__common_stan_reduction_data + uVar3) >> 0x10;
    auVar54._8_4_ = *(uint *)((longlong)&__common_stan_reduction_data + uVar6) >> 0x10;
    auVar54._12_4_ = *(uint *)((longlong)&__common_stan_reduction_data + uVar4) >> 0x10;
    auVar34._0_4_ = ((uint)fVar12 & 0x7fffff) + 0x800000;
    auVar34._4_4_ = ((uint)fVar14 & 0x7fffff) + 0x800000;
    auVar34._8_4_ = ((uint)fVar15 & 0x7fffff) + 0x800000;
    auVar34._12_4_ = ((uint)fVar16 & 0x7fffff) + 0x800000;
    auVar51._8_4_ = 0xffff;
    auVar51._0_8_ = 0xffff0000ffff;
    auVar51._12_4_ = 0xffff;
    auVar50._0_4_ = auVar34._0_4_ >> 0x10;
    auVar50._4_4_ = auVar34._4_4_ >> 0x10;
    auVar50._8_4_ = auVar34._8_4_ >> 0x10;
    auVar50._12_4_ = auVar34._12_4_ >> 0x10;
    auVar34 = auVar34 & auVar51;
    auVar24 = pmulld(auVar34,auVar59 & auVar51);
    auVar11._0_4_ = *(uint *)(&DAT_156228204 + uVar1) >> 0x10;
    auVar11._4_4_ = *(uint *)(&DAT_156228204 + uVar3) >> 0x10;
    auVar11._8_4_ = *(uint *)(&DAT_156228204 + uVar6) >> 0x10;
    auVar11._12_4_ = *(uint *)(&DAT_156228204 + uVar4) >> 0x10;
    auVar29 = pmulld(auVar50,auVar41);
    auVar25 = pmulld(auVar41,auVar34);
    auVar18 = auVar24 & auVar51;
    auVar41 = pmulld(auVar40 & auVar51,auVar50);
    auVar27 = pmulld(auVar34,auVar11);
    auVar60 = pmulld(auVar59 & auVar51,auVar50);
    auVar42._0_4_ =
         (auVar41._0_4_ >> 0x10) + auVar18._0_4_ + auVar29._0_4_ + (auVar25._0_4_ >> 0x10);
    auVar42._4_4_ =
         (auVar41._4_4_ >> 0x10) + auVar18._4_4_ + auVar29._4_4_ + (auVar25._4_4_ >> 0x10);
    auVar42._8_4_ =
         (auVar41._8_4_ >> 0x10) + auVar18._8_4_ + auVar29._8_4_ + (auVar25._8_4_ >> 0x10);
    auVar42._12_4_ =
         (auVar41._12_4_ >> 0x10) + auVar18._12_4_ + auVar29._12_4_ + (auVar25._12_4_ >> 0x10);
    auVar18 = auVar27 & auVar51;
    auVar29 = pmulld(auVar34,auVar53 & auVar51);
    auVar25 = pmulld(auVar11,auVar50);
    uVar7 = (auVar42._0_4_ >> 0x10) + auVar18._0_4_ + auVar60._0_4_ + (auVar24._0_4_ >> 0x10);
    uVar8 = (auVar42._4_4_ >> 0x10) + auVar18._4_4_ + auVar60._4_4_ + (auVar24._4_4_ >> 0x10);
    uVar9 = (auVar42._8_4_ >> 0x10) + auVar18._8_4_ + auVar60._8_4_ + (auVar24._8_4_ >> 0x10);
    uVar10 = (auVar42._12_4_ >> 0x10) + auVar18._12_4_ + auVar60._12_4_ + (auVar24._12_4_ >> 0x10);
    auVar24 = auVar29 & auVar51;
    auVar18 = pmulld(auVar34,auVar54);
    auVar19._0_4_ = (uVar7 >> 0x10) + auVar24._0_4_ + auVar25._0_4_ + (auVar27._0_4_ >> 0x10);
    auVar19._4_4_ = (uVar8 >> 0x10) + auVar24._4_4_ + auVar25._4_4_ + (auVar27._4_4_ >> 0x10);
    auVar19._8_4_ = (uVar9 >> 0x10) + auVar24._8_4_ + auVar25._8_4_ + (auVar27._8_4_ >> 0x10);
    auVar19._12_4_ = (uVar10 >> 0x10) + auVar24._12_4_ + auVar25._12_4_ + (auVar27._12_4_ >> 0x10);
    auVar24 = pmulld(auVar50,auVar53 & auVar51);
    auVar18 = auVar18 & auVar51;
    auVar25 = auVar19 & auVar51;
    auVar42 = auVar42 & auVar51;
    uVar28 = ((auVar19._0_4_ >> 0x10) + auVar18._0_4_ + auVar24._0_4_ + (auVar29._0_4_ >> 0x10)) *
             0x10000 + auVar25._0_4_;
    uVar30 = ((auVar19._4_4_ >> 0x10) + auVar18._4_4_ + auVar24._4_4_ + (auVar29._4_4_ >> 0x10)) *
             0x10000 + auVar25._4_4_;
    uVar31 = ((auVar19._8_4_ >> 0x10) + auVar18._8_4_ + auVar24._8_4_ + (auVar29._8_4_ >> 0x10)) *
             0x10000 + auVar25._8_4_;
    uVar32 = ((auVar19._12_4_ >> 0x10) + auVar18._12_4_ + auVar24._12_4_ + (auVar29._12_4_ >> 0x10))
             * 0x10000 + auVar25._12_4_;
    uVar7 = uVar7 * 0x10000 + auVar42._0_4_;
    uVar8 = uVar8 * 0x10000 + auVar42._4_4_;
    uVar9 = uVar9 * 0x10000 + auVar42._8_4_;
    uVar10 = uVar10 * 0x10000 + auVar42._12_4_;
    uVar39 = (uint)fVar12 & 0x80000000;
    uVar43 = (uint)fVar14 & 0x80000000;
    uVar44 = (uint)fVar15 & 0x80000000;
    uVar45 = (uint)fVar16 & 0x80000000;
    fVar52 = (float)(uVar28 >> 9 | uVar39 ^ 0x3f800000);
    fVar55 = (float)(uVar30 >> 9 | uVar43 ^ 0x3f800000);
    fVar56 = (float)(uVar31 >> 9 | uVar44 ^ 0x3f800000);
    fVar57 = (float)(uVar32 >> 9 | uVar45 ^ 0x3f800000);
    fVar58 = fVar52 + 49152.0;
    fVar61 = fVar55 + 49152.0;
    fVar62 = fVar56 + 49152.0;
    fVar63 = fVar57 + 49152.0;
    fVar52 = fVar52 - (fVar58 - 49152.0);
    fVar55 = fVar55 - (fVar61 - 49152.0);
    fVar56 = fVar56 - (fVar62 - 49152.0);
    fVar57 = fVar57 - (fVar63 - 49152.0);
    fVar46 = (float)((uVar28 & 0x1ff) << 0xe | uVar7 >> 0x12 | uVar39 ^ 0x34000000) -
             (float)(uVar39 ^ 0x34000000);
    fVar47 = (float)((uVar30 & 0x1ff) << 0xe | uVar8 >> 0x12 | uVar43 ^ 0x34000000) -
             (float)(uVar43 ^ 0x34000000);
    fVar48 = (float)((uVar31 & 0x1ff) << 0xe | uVar9 >> 0x12 | uVar44 ^ 0x34000000) -
             (float)(uVar44 ^ 0x34000000);
    fVar49 = (float)((uVar32 & 0x1ff) << 0xe | uVar10 >> 0x12 | uVar45 ^ 0x34000000) -
             (float)(uVar45 ^ 0x34000000);
    fVar64 = fVar52 + fVar46;
    fVar65 = fVar55 + fVar47;
    fVar66 = fVar56 + fVar48;
    fVar67 = fVar57 + fVar49;
    fVar17 = (float)((uint)fVar64 & 0xfffff000);
    fVar20 = (float)((uint)fVar65 & 0xfffff000);
    fVar21 = (float)((uint)fVar66 & 0xfffff000);
    fVar22 = (float)((uint)fVar67 & 0xfffff000);
    fVar64 = (fVar64 - fVar17) * 6.283203 + fVar17 * -1.781782e-05 +
             (((float)((uVar7 & 0x3ffff) << 5 | uVar39 ^ 0x28800000) - (float)(uVar39 ^ 0x28800000))
             + fVar46 + (fVar52 - fVar64)) * 6.2831855 + (fVar64 - fVar17) * -1.781782e-05;
    fVar65 = (fVar65 - fVar20) * 6.283203 + fVar20 * -1.781782e-05 +
             (((float)((uVar8 & 0x3ffff) << 5 | uVar43 ^ 0x28800000) - (float)(uVar43 ^ 0x28800000))
             + fVar47 + (fVar55 - fVar65)) * 6.2831855 + (fVar65 - fVar20) * -1.781782e-05;
    fVar66 = (fVar66 - fVar21) * 6.283203 + fVar21 * -1.781782e-05 +
             (((float)((uVar9 & 0x3ffff) << 5 | uVar44 ^ 0x28800000) - (float)(uVar44 ^ 0x28800000))
             + fVar48 + (fVar56 - fVar66)) * 6.2831855 + (fVar66 - fVar21) * -1.781782e-05;
    fVar67 = (fVar67 - fVar22) * 6.283203 + fVar22 * -1.781782e-05 +
             (((float)((uVar10 & 0x3ffff) << 5 | uVar45 ^ 0x28800000) - (float)(uVar45 ^ 0x28800000)
              ) + fVar49 + (fVar57 - fVar67)) * 6.2831855 + (fVar67 - fVar22) * -1.781782e-05;
    fVar46 = fVar64 + fVar17 * 6.283203;
    fVar47 = fVar65 + fVar20 * 6.283203;
    fVar48 = fVar66 + fVar21 * 6.283203;
    fVar49 = fVar67 + fVar22 * 6.283203;
    uVar7 = -(uint)(9.536743e-07 < ABS(fVar12));
    uVar8 = -(uint)(9.536743e-07 < ABS(fVar14));
    uVar9 = -(uint)(9.536743e-07 < ABS(fVar15));
    uVar10 = -(uint)(9.536743e-07 < ABS(fVar16));
    fVar46 = (float)(-(uint)(ABS(fVar12) <= 9.536743e-07) & (uint)fVar12 | (uint)fVar46 & uVar7) +
             (float)(uVar7 & (uint)(fVar64 + (fVar17 * 6.283203 - fVar46)));
    fVar47 = (float)(-(uint)(ABS(fVar14) <= 9.536743e-07) & (uint)fVar14 | (uint)fVar47 & uVar8) +
             (float)(uVar8 & (uint)(fVar65 + (fVar20 * 6.283203 - fVar47)));
    fVar48 = (float)(-(uint)(ABS(fVar15) <= 9.536743e-07) & (uint)fVar15 | (uint)fVar48 & uVar9) +
             (float)(uVar9 & (uint)(fVar66 + (fVar21 * 6.283203 - fVar48)));
    fVar49 = (float)(-(uint)(ABS(fVar16) <= 9.536743e-07) & (uint)fVar16 | (uint)fVar49 & uVar10) +
             (float)(uVar10 & (uint)(fVar67 + (fVar22 * 6.283203 - fVar49)));
    uVar7 = ((uint)fVar58 & 0x7f) * 0x28;
    uVar8 = ((uint)fVar61 & 0x7f) * 0x28;
    uVar9 = ((uint)fVar62 & 0x7f) * 0x28;
    uVar10 = ((uint)fVar63 & 0x7f) * 0x28;
    fVar14 = *(float *)(&DAT_156229640 + uVar7) - fVar46;
    fVar16 = *(float *)(&DAT_156229640 + uVar8) - fVar47;
    fVar20 = *(float *)(&DAT_156229640 + uVar9) - fVar48;
    fVar22 = *(float *)(&DAT_156229640 + uVar10) - fVar49;
    auVar60._0_8_ = CONCAT44(fVar16,fVar14) & 0xfffff000fffff000;
    auVar60._8_4_ = (float)((uint)fVar20 & 0xfffff000);
    auVar60._12_4_ = (float)((uint)fVar22 & 0xfffff000);
    auVar35._0_4_ =
         *(float *)(&DAT_156229644 + uVar7) + (fVar14 - (float)((uint)fVar14 & 0xfffff000));
    auVar35._4_4_ =
         *(float *)(&DAT_156229644 + uVar8) + (fVar16 - (float)((uint)fVar16 & 0xfffff000));
    auVar35._8_4_ = *(float *)(&DAT_156229644 + uVar9) + (fVar20 - auVar60._8_4_);
    auVar35._12_4_ = *(float *)(&DAT_156229644 + uVar10) + (fVar22 - auVar60._12_4_);
    auVar25 = rcpps(auVar35,auVar60);
    fVar12 = (float)(auVar25._0_4_ & 0xfffff000);
    fVar15 = (float)(auVar25._4_4_ & 0xfffff000);
    fVar17 = (float)(auVar25._8_4_ & 0xfffff000);
    fVar21 = (float)(auVar25._12_4_ & 0xfffff000);
    fVar64 = _DAT_156229280 - (float)((uint)fVar14 & 0xfffff000) * fVar12;
    fVar65 = _UNK_156229284 - (float)((uint)fVar16 & 0xfffff000) * fVar15;
    fVar66 = _UNK_156229288 - auVar60._8_4_ * fVar17;
    fVar67 = _UNK_15622928c - auVar60._12_4_ * fVar21;
    fVar33 = fVar12 * *(float *)(&DAT_156229648 + uVar7);
    fVar36 = fVar15 * *(float *)(&DAT_156229648 + uVar8);
    fVar37 = fVar17 * *(float *)(&DAT_156229648 + uVar9);
    fVar38 = fVar21 * *(float *)(&DAT_156229648 + uVar10);
    fVar12 = (fVar12 * fVar64 + fVar12) * (_DAT_156229280 + fVar64 * fVar64);
    fVar15 = (fVar15 * fVar65 + fVar15) * (_UNK_156229284 + fVar65 * fVar65);
    fVar17 = (fVar17 * fVar66 + fVar17) * (_UNK_156229288 + fVar66 * fVar66);
    fVar21 = (fVar21 * fVar67 + fVar21) * (_UNK_15622928c + fVar67 * fVar67);
    fVar52 = (((*(float *)(&DAT_156229640 + uVar7) - fVar14) - fVar46) + auVar35._0_4_) * fVar12;
    fVar56 = (((*(float *)(&DAT_156229640 + uVar8) - fVar16) - fVar47) + auVar35._4_4_) * fVar15;
    fVar58 = (((*(float *)(&DAT_156229640 + uVar9) - fVar20) - fVar48) + auVar35._8_4_) * fVar17;
    fVar62 = (((*(float *)(&DAT_156229640 + uVar10) - fVar22) - fVar49) + auVar35._12_4_) * fVar21;
    fVar55 = *(float *)(&DAT_15622964c + uVar7) + *(float *)(&DAT_156229654 + uVar7) * fVar46;
    fVar57 = *(float *)(&DAT_15622964c + uVar8) + *(float *)(&DAT_156229654 + uVar8) * fVar47;
    fVar61 = *(float *)(&DAT_15622964c + uVar9) + *(float *)(&DAT_156229654 + uVar9) * fVar48;
    fVar63 = *(float *)(&DAT_15622964c + uVar10) + *(float *)(&DAT_156229654 + uVar10) * fVar49;
    fVar14 = fVar55 + fVar33;
    fVar16 = fVar57 + fVar36;
    fVar20 = fVar61 + fVar37;
    fVar22 = fVar63 + fVar38;
    auVar13._0_4_ =
         (uint)(fVar14 + *(float *)(&DAT_156229650 + uVar7) +
                         *(float *)(&DAT_156229648 + uVar7) *
                         fVar12 * (fVar52 * fVar52 - (fVar52 - fVar64)) +
                         *(float *)(&DAT_156229654 + uVar7) * fVar46 +
                         (*(float *)(&DAT_15622964c + uVar7) - fVar55) + fVar55 + (fVar33 - fVar14)
                         + fVar46 * (*(float *)(&DAT_156229658 + uVar7) +
                                     *(float *)(&DAT_15622965c + uVar7) * fVar46 +
                                    (*(float *)(&DAT_156229660 + uVar7) +
                                    *(float *)(&DAT_156229664 + uVar7) * fVar46) * fVar46 * fVar46))
         ^ ~_DAT_1562291c0 & in_XMM0_Da;
    auVar13._4_4_ =
         (uint)(fVar16 + *(float *)(&DAT_156229650 + uVar8) +
                         *(float *)(&DAT_156229648 + uVar8) *
                         fVar15 * (fVar56 * fVar56 - (fVar56 - fVar65)) +
                         *(float *)(&DAT_156229654 + uVar8) * fVar47 +
                         (*(float *)(&DAT_15622964c + uVar8) - fVar57) + fVar57 + (fVar36 - fVar16)
                         + fVar47 * (*(float *)(&DAT_156229658 + uVar8) +
                                     *(float *)(&DAT_15622965c + uVar8) * fVar47 +
                                    (*(float *)(&DAT_156229660 + uVar8) +
                                    *(float *)(&DAT_156229664 + uVar8) * fVar47) * fVar47 * fVar47))
         ^ ~_UNK_1562291c4 & in_XMM0_Db;
    auVar13._8_4_ =
         (uint)(fVar20 + *(float *)(&DAT_156229650 + uVar9) +
                         *(float *)(&DAT_156229648 + uVar9) *
                         fVar17 * (fVar58 * fVar58 - (fVar58 - fVar66)) +
                         *(float *)(&DAT_156229654 + uVar9) * fVar48 +
                         (*(float *)(&DAT_15622964c + uVar9) - fVar61) + fVar61 + (fVar37 - fVar20)
                         + fVar48 * (*(float *)(&DAT_156229658 + uVar9) +
                                     *(float *)(&DAT_15622965c + uVar9) * fVar48 +
                                    (*(float *)(&DAT_156229660 + uVar9) +
                                    *(float *)(&DAT_156229664 + uVar9) * fVar48) * fVar48 * fVar48))
         ^ ~_UNK_1562291c8 & in_XMM0_Dc;
    auVar13._12_4_ =
         (uint)(fVar22 + *(float *)(&DAT_156229650 + uVar10) +
                         *(float *)(&DAT_156229648 + uVar10) *
                         fVar21 * (fVar62 * fVar62 - (fVar62 - fVar67)) +
                         *(float *)(&DAT_156229654 + uVar10) * fVar49 +
                         (*(float *)(&DAT_15622964c + uVar10) - fVar63) + fVar63 + (fVar38 - fVar22)
                         + fVar49 * (*(float *)(&DAT_156229658 + uVar10) +
                                     *(float *)(&DAT_15622965c + uVar10) * fVar49 +
                                    (*(float *)(&DAT_156229660 + uVar10) +
                                    *(float *)(&DAT_156229664 + uVar10) * fVar49) * fVar49 * fVar49)
               ) ^ ~_UNK_1562291cc & in_XMM0_Dd;
    blendvps(auVar26,auVar13,auVar23);
  }
  if (uVar5 != 0) {
    uVar7 = 0;
    do {
      if ((uVar5 >> (uVar7 & 0x1f) & 1) != 0) {
        __common_stan_cout_rare();
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < 4);
  }
  return;
}


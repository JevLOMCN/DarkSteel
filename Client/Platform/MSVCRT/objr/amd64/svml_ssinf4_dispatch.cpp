// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 3

// __vdecl_sinf4 @ 15015c030

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __vdecl_sinf4(void)

{
  ulonglong uVar1;
  undefined4 in_EAX;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  float in_XMM0_Da;
  float in_XMM0_Db;
  float in_XMM0_Dc;
  float in_XMM0_Dd;
  uint uVar9;
  uint uVar10;
  undefined1 auVar8 [16];
  uint uVar11;
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar33 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar58;
  float fVar59;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar60;
  uint uVar61;
  uint uVar63;
  uint uVar64;
  undefined1 auVar62 [16];
  uint uVar65;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar68;
  float fVar71;
  float fVar72;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  float fVar73;
  uint uVar74;
  float fVar75;
  uint uVar78;
  float fVar79;
  uint uVar80;
  float fVar81;
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  uint uVar82;
  float fVar83;
  
  if (__isa_available < 2) {
    __sse2_sinf4__16();
    return;
  }
  uVar7 = 0;
  fVar31 = (float)((uint)in_XMM0_Da & _DAT_1561e1100);
  fVar34 = (float)((uint)in_XMM0_Db & _UNK_1561e1104);
  fVar36 = (float)((uint)in_XMM0_Dc & _UNK_1561e1108);
  fVar38 = (float)((uint)in_XMM0_Dd & _UNK_1561e110c);
  fVar17 = _DAT_1561e1580 * fVar31 + _DAT_1561e15c0;
  fVar19 = _UNK_1561e1584 * fVar34 + _UNK_1561e15c4;
  fVar21 = _UNK_1561e1588 * fVar36 + _UNK_1561e15c8;
  fVar23 = _UNK_1561e158c * fVar38 + _UNK_1561e15cc;
  fVar18 = fVar17 - _DAT_1561e15c0;
  fVar20 = fVar19 - _UNK_1561e15c4;
  fVar22 = fVar21 - _UNK_1561e15c8;
  fVar24 = fVar23 - _UNK_1561e15cc;
  auVar8._4_4_ = -(uint)(_UNK_1561e1144 < fVar34);
  auVar8._0_4_ = -(uint)(_DAT_1561e1140 < fVar31);
  auVar8._8_4_ = -(uint)(_UNK_1561e1148 < fVar36);
  auVar8._12_4_ = -(uint)(_UNK_1561e114c < fVar38);
  iVar2 = movmskps(in_EAX,auVar8);
  fVar40 = (((fVar31 - _DAT_1561e12c0 * fVar18) - _DAT_1561e1300 * fVar18) - _DAT_1561e1340 * fVar18
           ) - _DAT_1561e1380 * fVar18;
  fVar46 = (((fVar34 - _UNK_1561e12c4 * fVar20) - _UNK_1561e1304 * fVar20) - _UNK_1561e1344 * fVar20
           ) - _UNK_1561e1384 * fVar20;
  fVar49 = (((fVar36 - _UNK_1561e12c8 * fVar22) - _UNK_1561e1308 * fVar22) - _UNK_1561e1348 * fVar22
           ) - _UNK_1561e1388 * fVar22;
  fVar52 = (((fVar38 - _UNK_1561e12cc * fVar24) - _UNK_1561e130c * fVar24) - _UNK_1561e134c * fVar24
           ) - _UNK_1561e138c * fVar24;
  fVar18 = fVar40 * fVar40;
  fVar20 = fVar46 * fVar46;
  fVar22 = fVar49 * fVar49;
  fVar24 = fVar52 * fVar52;
  fVar40 = (float)((uint)fVar40 ^ (int)fVar17 << 0x1f);
  fVar46 = (float)((uint)fVar46 ^ (int)fVar19 << 0x1f);
  fVar49 = (float)((uint)fVar49 ^ (int)fVar21 << 0x1f);
  fVar52 = (float)((uint)fVar52 ^ (int)fVar23 << 0x1f);
  auVar43._0_4_ =
       (uint)(fVar40 + fVar18 * (((_DAT_1561e1540 * fVar18 + _DAT_1561e1500) * fVar18 +
                                 _DAT_1561e14c0) * fVar18 + _DAT_1561e1480) * fVar40) ^
       ~_DAT_1561e1100 & (uint)in_XMM0_Da;
  auVar43._4_4_ =
       (uint)(fVar46 + fVar20 * (((_UNK_1561e1544 * fVar20 + _UNK_1561e1504) * fVar20 +
                                 _UNK_1561e14c4) * fVar20 + _UNK_1561e1484) * fVar46) ^
       ~_UNK_1561e1104 & (uint)in_XMM0_Db;
  auVar43._8_4_ =
       (uint)(fVar49 + fVar22 * (((_UNK_1561e1548 * fVar22 + _UNK_1561e1508) * fVar22 +
                                 _UNK_1561e14c8) * fVar22 + _UNK_1561e1488) * fVar49) ^
       ~_UNK_1561e1108 & (uint)in_XMM0_Dc;
  auVar43._12_4_ =
       (uint)(fVar52 + fVar24 * (((_UNK_1561e154c * fVar24 + _UNK_1561e150c) * fVar24 +
                                 _UNK_1561e14cc) * fVar24 + _UNK_1561e148c) * fVar52) ^
       ~_UNK_1561e110c & (uint)in_XMM0_Dd;
  if (iVar2 != 0) {
    auVar33._4_4_ = -(uint)((float)((uint)fVar34 & (uint)_UNK_1561e1184) == _UNK_1561e1184);
    auVar33._0_4_ = -(uint)((float)((uint)fVar31 & (uint)_DAT_1561e1180) == _DAT_1561e1180);
    auVar33._8_4_ = -(uint)((float)((uint)fVar36 & (uint)_UNK_1561e1188) == _UNK_1561e1188);
    auVar33._12_4_ = -(uint)((float)((uint)fVar38 & (uint)_UNK_1561e118c) == _UNK_1561e118c);
    uVar7 = movmskps(0,auVar33);
    uVar1 = (ulonglong)((((uint)in_XMM0_Da & 0x7f800000) >> 0x17) * 0xc);
    uVar5 = (ulonglong)((((uint)in_XMM0_Dc & 0x7f800000) >> 0x17) * 0xc);
    uVar4 = (ulonglong)((((uint)in_XMM0_Db & 0x7f800000) >> 0x17) * 0xc);
    uVar3 = (ulonglong)((((uint)in_XMM0_Dd & 0x7f800000) >> 0x17) * 0xc);
    auVar77._4_4_ = *(uint *)(&DAT_1561df508 + uVar4);
    auVar77._0_4_ = *(uint *)(&DAT_1561df508 + uVar1);
    auVar77._12_4_ = *(uint *)(&DAT_1561df508 + uVar3);
    auVar77._8_4_ = *(uint *)(&DAT_1561df508 + uVar5);
    auVar56._12_4_ = *(uint *)(&DAT_1561df504 + uVar3);
    auVar56._8_4_ = *(uint *)(&DAT_1561df504 + uVar5);
    auVar56._4_4_ = *(uint *)(&DAT_1561df504 + uVar4);
    auVar56._0_4_ = *(uint *)(&DAT_1561df504 + uVar1);
    auVar66._4_4_ = *(uint *)((longlong)&__common_ssin_reduction_data + uVar4);
    auVar66._0_4_ = *(uint *)((longlong)&__common_ssin_reduction_data + uVar1);
    auVar66._12_4_ = *(uint *)((longlong)&__common_ssin_reduction_data + uVar3);
    auVar66._8_4_ = *(uint *)((longlong)&__common_ssin_reduction_data + uVar5);
    auVar62._0_4_ = *(uint *)(&DAT_1561df508 + uVar1) >> 0x10;
    auVar62._4_4_ = *(uint *)(&DAT_1561df508 + uVar4) >> 0x10;
    auVar62._8_4_ = *(uint *)(&DAT_1561df508 + uVar5) >> 0x10;
    auVar62._12_4_ = *(uint *)(&DAT_1561df508 + uVar3) >> 0x10;
    auVar70._0_4_ = *(uint *)(&DAT_1561df504 + uVar1) >> 0x10;
    auVar70._4_4_ = *(uint *)(&DAT_1561df504 + uVar4) >> 0x10;
    auVar70._8_4_ = *(uint *)(&DAT_1561df504 + uVar5) >> 0x10;
    auVar70._12_4_ = *(uint *)(&DAT_1561df504 + uVar3) >> 0x10;
    auVar67._0_4_ = *(uint *)((longlong)&__common_ssin_reduction_data + uVar1) >> 0x10;
    auVar67._4_4_ = *(uint *)((longlong)&__common_ssin_reduction_data + uVar4) >> 0x10;
    auVar67._8_4_ = *(uint *)((longlong)&__common_ssin_reduction_data + uVar5) >> 0x10;
    auVar67._12_4_ = *(uint *)((longlong)&__common_ssin_reduction_data + uVar3) >> 0x10;
    auVar69._0_4_ = ((uint)in_XMM0_Da & 0x7fffff) + 0x800000;
    auVar69._4_4_ = ((uint)in_XMM0_Db & 0x7fffff) + 0x800000;
    auVar69._8_4_ = ((uint)in_XMM0_Dc & 0x7fffff) + 0x800000;
    auVar69._12_4_ = ((uint)in_XMM0_Dd & 0x7fffff) + 0x800000;
    auVar12._8_4_ = 0xffff;
    auVar12._0_8_ = 0xffff0000ffff;
    auVar12._12_4_ = 0xffff;
    auVar30._0_4_ = auVar69._0_4_ >> 0x10;
    auVar30._4_4_ = auVar69._4_4_ >> 0x10;
    auVar30._8_4_ = auVar69._8_4_ >> 0x10;
    auVar30._12_4_ = auVar69._12_4_ >> 0x10;
    auVar69 = auVar69 & auVar12;
    auVar29 = pmulld(auVar69,auVar56 & auVar12);
    auVar8 = pmulld(auVar30,auVar62);
    auVar76 = pmulld(auVar62,auVar69);
    auVar62 = auVar29 & auVar12;
    auVar44 = pmulld(auVar77 & auVar12,auVar30);
    auVar33 = pmulld(auVar69,auVar70);
    auVar57 = pmulld(auVar56 & auVar12,auVar30);
    auVar45._0_4_ = (auVar44._0_4_ >> 0x10) + auVar62._0_4_ + auVar8._0_4_ + (auVar76._0_4_ >> 0x10)
    ;
    auVar45._4_4_ = (auVar44._4_4_ >> 0x10) + auVar62._4_4_ + auVar8._4_4_ + (auVar76._4_4_ >> 0x10)
    ;
    auVar45._8_4_ = (auVar44._8_4_ >> 0x10) + auVar62._8_4_ + auVar8._8_4_ + (auVar76._8_4_ >> 0x10)
    ;
    auVar45._12_4_ =
         (auVar44._12_4_ >> 0x10) + auVar62._12_4_ + auVar8._12_4_ + (auVar76._12_4_ >> 0x10);
    auVar77 = auVar33 & auVar12;
    auVar44 = pmulld(auVar69,auVar66 & auVar12);
    auVar8 = pmulld(auVar70,auVar30);
    uVar6 = (auVar45._0_4_ >> 0x10) + auVar77._0_4_ + auVar57._0_4_ + (auVar29._0_4_ >> 0x10);
    uVar9 = (auVar45._4_4_ >> 0x10) + auVar77._4_4_ + auVar57._4_4_ + (auVar29._4_4_ >> 0x10);
    uVar10 = (auVar45._8_4_ >> 0x10) + auVar77._8_4_ + auVar57._8_4_ + (auVar29._8_4_ >> 0x10);
    uVar11 = (auVar45._12_4_ >> 0x10) + auVar77._12_4_ + auVar57._12_4_ + (auVar29._12_4_ >> 0x10);
    auVar29 = auVar44 & auVar12;
    auVar70 = pmulld(auVar69,auVar67);
    auVar57._0_4_ = (uVar6 >> 0x10) + auVar29._0_4_ + auVar8._0_4_ + (auVar33._0_4_ >> 0x10);
    auVar57._4_4_ = (uVar9 >> 0x10) + auVar29._4_4_ + auVar8._4_4_ + (auVar33._4_4_ >> 0x10);
    auVar57._8_4_ = (uVar10 >> 0x10) + auVar29._8_4_ + auVar8._8_4_ + (auVar33._8_4_ >> 0x10);
    auVar57._12_4_ = (uVar11 >> 0x10) + auVar29._12_4_ + auVar8._12_4_ + (auVar33._12_4_ >> 0x10);
    auVar8 = pmulld(auVar30,auVar66 & auVar12);
    auVar70 = auVar70 & auVar12;
    auVar30 = auVar57 & auVar12;
    auVar45 = auVar45 & auVar12;
    uVar74 = ((auVar57._0_4_ >> 0x10) + auVar70._0_4_ + auVar8._0_4_ + (auVar44._0_4_ >> 0x10)) *
             0x10000 + auVar30._0_4_;
    uVar78 = ((auVar57._4_4_ >> 0x10) + auVar70._4_4_ + auVar8._4_4_ + (auVar44._4_4_ >> 0x10)) *
             0x10000 + auVar30._4_4_;
    uVar80 = ((auVar57._8_4_ >> 0x10) + auVar70._8_4_ + auVar8._8_4_ + (auVar44._8_4_ >> 0x10)) *
             0x10000 + auVar30._8_4_;
    uVar82 = ((auVar57._12_4_ >> 0x10) + auVar70._12_4_ + auVar8._12_4_ + (auVar44._12_4_ >> 0x10))
             * 0x10000 + auVar30._12_4_;
    uVar6 = uVar6 * 0x10000 + auVar45._0_4_;
    uVar9 = uVar9 * 0x10000 + auVar45._4_4_;
    uVar10 = uVar10 * 0x10000 + auVar45._8_4_;
    uVar11 = uVar11 * 0x10000 + auVar45._12_4_;
    uVar61 = (uint)in_XMM0_Da & 0x80000000;
    uVar63 = (uint)in_XMM0_Db & 0x80000000;
    uVar64 = (uint)in_XMM0_Dc & 0x80000000;
    uVar65 = (uint)in_XMM0_Dd & 0x80000000;
    fVar40 = (float)(uVar74 >> 9 | uVar61 ^ 0x3f800000);
    fVar46 = (float)(uVar78 >> 9 | uVar63 ^ 0x3f800000);
    fVar49 = (float)(uVar80 >> 9 | uVar64 ^ 0x3f800000);
    fVar52 = (float)(uVar82 >> 9 | uVar65 ^ 0x3f800000);
    fVar68 = fVar40 + 49152.0;
    fVar71 = fVar46 + 49152.0;
    fVar72 = fVar49 + 49152.0;
    fVar73 = fVar52 + 49152.0;
    fVar17 = (float)((uVar74 & 0x1ff) << 0xe | uVar6 >> 0x12 | uVar61 ^ 0x34000000) -
             (float)(uVar61 ^ 0x34000000);
    fVar19 = (float)((uVar78 & 0x1ff) << 0xe | uVar9 >> 0x12 | uVar63 ^ 0x34000000) -
             (float)(uVar63 ^ 0x34000000);
    fVar21 = (float)((uVar80 & 0x1ff) << 0xe | uVar10 >> 0x12 | uVar64 ^ 0x34000000) -
             (float)(uVar64 ^ 0x34000000);
    fVar23 = (float)((uVar82 & 0x1ff) << 0xe | uVar11 >> 0x12 | uVar65 ^ 0x34000000) -
             (float)(uVar65 ^ 0x34000000);
    fVar40 = fVar40 - (fVar68 - 49152.0);
    fVar46 = fVar46 - (fVar71 - 49152.0);
    fVar49 = fVar49 - (fVar72 - 49152.0);
    fVar52 = fVar52 - (fVar73 - 49152.0);
    fVar18 = fVar40 + fVar17;
    fVar20 = fVar46 + fVar19;
    fVar22 = fVar49 + fVar21;
    fVar24 = fVar52 + fVar23;
    fVar13 = (float)((uint)fVar18 & 0xfffff000);
    fVar14 = (float)((uint)fVar20 & 0xfffff000);
    fVar15 = (float)((uint)fVar22 & 0xfffff000);
    fVar16 = (float)((uint)fVar24 & 0xfffff000);
    fVar41 = (fVar18 - fVar13) * 6.283203 + fVar13 * -1.781782e-05 +
             (((float)((uVar6 & 0x3ffff) << 5 | uVar61 ^ 0x28800000) - (float)(uVar61 ^ 0x28800000))
             + fVar17 + (fVar40 - fVar18)) * 6.2831855 + (fVar18 - fVar13) * -1.781782e-05;
    fVar47 = (fVar20 - fVar14) * 6.283203 + fVar14 * -1.781782e-05 +
             (((float)((uVar9 & 0x3ffff) << 5 | uVar63 ^ 0x28800000) - (float)(uVar63 ^ 0x28800000))
             + fVar19 + (fVar46 - fVar20)) * 6.2831855 + (fVar20 - fVar14) * -1.781782e-05;
    fVar50 = (fVar22 - fVar15) * 6.283203 + fVar15 * -1.781782e-05 +
             (((float)((uVar10 & 0x3ffff) << 5 | uVar64 ^ 0x28800000) - (float)(uVar64 ^ 0x28800000)
              ) + fVar21 + (fVar49 - fVar22)) * 6.2831855 + (fVar22 - fVar15) * -1.781782e-05;
    fVar53 = (fVar24 - fVar16) * 6.283203 + fVar16 * -1.781782e-05 +
             (((float)((uVar11 & 0x3ffff) << 5 | uVar65 ^ 0x28800000) - (float)(uVar65 ^ 0x28800000)
              ) + fVar23 + (fVar52 - fVar24)) * 6.2831855 + (fVar24 - fVar16) * -1.781782e-05;
    fVar75 = fVar41 + fVar13 * 6.283203;
    fVar79 = fVar47 + fVar14 * 6.283203;
    fVar81 = fVar50 + fVar15 * 6.283203;
    fVar83 = fVar53 + fVar16 * 6.283203;
    uVar6 = -(uint)(9.536743e-07 < ABS(in_XMM0_Da));
    uVar9 = -(uint)(9.536743e-07 < ABS(in_XMM0_Db));
    uVar10 = -(uint)(9.536743e-07 < ABS(in_XMM0_Dc));
    uVar11 = -(uint)(9.536743e-07 < ABS(in_XMM0_Dd));
    fVar32 = (float)(-(uint)(ABS(in_XMM0_Da) <= 9.536743e-07) & (uint)in_XMM0_Da |
                    (uint)fVar75 & uVar6);
    fVar35 = (float)(-(uint)(ABS(in_XMM0_Db) <= 9.536743e-07) & (uint)in_XMM0_Db |
                    (uint)fVar79 & uVar9);
    fVar37 = (float)(-(uint)(ABS(in_XMM0_Dc) <= 9.536743e-07) & (uint)in_XMM0_Dc |
                    (uint)fVar81 & uVar10);
    fVar39 = (float)(-(uint)(ABS(in_XMM0_Dd) <= 9.536743e-07) & (uint)in_XMM0_Dd |
                    (uint)fVar83 & uVar11);
    uVar1 = (ulonglong)(((uint)fVar68 & 0xff) << 4);
    fVar25 = fVar32 * fVar32;
    fVar26 = fVar35 * fVar35;
    fVar27 = fVar37 * fVar37;
    fVar28 = fVar39 * fVar39;
    uVar4 = (ulonglong)(((uint)fVar72 & 0xff) << 4);
    uVar3 = (ulonglong)(((uint)fVar71 & 0xff) << 4);
    uVar5 = (ulonglong)(((uint)fVar73 & 0xff) << 4);
    fVar18 = *(float *)(&DAT_1561e0104 + uVar1);
    fVar20 = *(float *)(&DAT_1561e0104 + uVar4);
    fVar22 = *(float *)(&DAT_1561e0104 + uVar3);
    fVar24 = *(float *)(&DAT_1561e0104 + uVar5);
    fVar17 = fVar32 * *(float *)(&DAT_1561e010c + uVar1);
    fVar19 = fVar35 * *(float *)(&DAT_1561e010c + uVar3);
    fVar21 = fVar37 * *(float *)(&DAT_1561e010c + uVar4);
    fVar23 = fVar39 * *(float *)(&DAT_1561e010c + uVar5);
    fVar42 = fVar18 + fVar17;
    fVar48 = fVar22 + fVar19;
    fVar51 = fVar20 + fVar21;
    fVar54 = fVar24 + fVar23;
    fVar55 = fVar32 * *(float *)((longlong)&__common_ssin_data + uVar1);
    fVar58 = fVar35 * *(float *)((longlong)&__common_ssin_data + uVar3);
    fVar59 = fVar37 * *(float *)((longlong)&__common_ssin_data + uVar4);
    fVar60 = fVar39 * *(float *)((longlong)&__common_ssin_data + uVar5);
    fVar40 = fVar42 + fVar55;
    fVar46 = fVar48 + fVar58;
    fVar49 = fVar51 + fVar59;
    fVar52 = fVar54 + fVar60;
    fVar68 = (*(float *)((longlong)&__common_ssin_data + uVar1) + *(float *)(&DAT_1561e010c + uVar1)
             ) - fVar32 * fVar18;
    fVar71 = (*(float *)((longlong)&__common_ssin_data + uVar3) + *(float *)(&DAT_1561e010c + uVar3)
             ) - fVar35 * fVar22;
    fVar72 = (*(float *)((longlong)&__common_ssin_data + uVar4) + *(float *)(&DAT_1561e010c + uVar4)
             ) - fVar37 * fVar20;
    fVar73 = (*(float *)((longlong)&__common_ssin_data + uVar5) + *(float *)(&DAT_1561e010c + uVar5)
             ) - fVar39 * fVar24;
    auVar29._0_4_ =
         fVar40 + *(float *)(&DAT_1561e0108 + uVar1) +
                  (float)(uVar6 & (uint)(fVar41 + (fVar13 * 6.283203 - fVar75))) * fVar68 +
                  fVar18 * fVar25 * (_DAT_1561e1280 * fVar25 + _DAT_1561e1240) +
                  fVar17 + (fVar18 - fVar42) + fVar55 + (fVar42 - fVar40) +
                  (_DAT_1561e1200 * fVar25 + _DAT_1561e11c0) * fVar25 * fVar32 * fVar68;
    auVar29._4_4_ =
         fVar46 + *(float *)(&DAT_1561e0108 + uVar3) +
                  (float)(uVar9 & (uint)(fVar47 + (fVar14 * 6.283203 - fVar79))) * fVar71 +
                  fVar22 * fVar26 * (_UNK_1561e1284 * fVar26 + _UNK_1561e1244) +
                  fVar19 + (fVar22 - fVar48) + fVar58 + (fVar48 - fVar46) +
                  (_UNK_1561e1204 * fVar26 + _UNK_1561e11c4) * fVar26 * fVar35 * fVar71;
    auVar29._8_4_ =
         fVar49 + *(float *)(&DAT_1561e0108 + uVar4) +
                  (float)(uVar10 & (uint)(fVar50 + (fVar15 * 6.283203 - fVar81))) * fVar72 +
                  fVar20 * fVar27 * (_UNK_1561e1288 * fVar27 + _UNK_1561e1248) +
                  fVar21 + (fVar20 - fVar51) + fVar59 + (fVar51 - fVar49) +
                  (_UNK_1561e1208 * fVar27 + _UNK_1561e11c8) * fVar27 * fVar37 * fVar72;
    auVar29._12_4_ =
         fVar52 + *(float *)(&DAT_1561e0108 + uVar5) +
                  (float)(uVar11 & (uint)(fVar53 + (fVar16 * 6.283203 - fVar83))) * fVar73 +
                  fVar24 * fVar28 * (_UNK_1561e128c * fVar28 + _UNK_1561e124c) +
                  fVar23 + (fVar24 - fVar54) + fVar60 + (fVar54 - fVar52) +
                  (_UNK_1561e120c * fVar28 + _UNK_1561e11cc) * fVar28 * fVar39 * fVar73;
    auVar44._4_4_ = -(uint)(_UNK_1561e1144 < fVar34);
    auVar44._0_4_ = -(uint)(_DAT_1561e1140 < fVar31);
    auVar44._8_4_ = -(uint)(_UNK_1561e1148 < fVar36);
    auVar44._12_4_ = -(uint)(_UNK_1561e114c < fVar38);
    blendvps(auVar43,auVar29,auVar44);
  }
  if (uVar7 != 0) {
    uVar6 = 0;
    do {
      if ((uVar7 >> (uVar6 & 0x1f) & 1) != 0) {
        __common_ssin_cout_rare();
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 4);
  }
  return;
}

// __libm_sse2_sincosf_ @ 15015c050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __libm_sse2_sincosf_(void)

{
  uint in_XMM0_Da;
  
  if ((float)L_two_to_neg_13 <= (float)(in_XMM0_Da & (uint)L_abs_mask)) {
    __vdecl_sinf4();
    return;
  }
  return;
}

// __libm_sse2_sincosf4_ @ 15015c093

void __cdecl __libm_sse2_sincosf4_(void)

{
  __vdecl_sinf4();
  return;
}


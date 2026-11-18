// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __vdecl_cosf4 @ 15015c200

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __vdecl_cosf4(void)

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
  undefined1 auVar8 [16];
  float fVar9;
  float fVar11;
  uint uVar12;
  float fVar13;
  uint uVar14;
  float fVar15;
  undefined1 auVar10 [16];
  uint uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar20;
  undefined1 auVar19 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar26 [16];
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  uint uVar40;
  float fVar41;
  uint uVar43;
  float fVar44;
  uint uVar45;
  float fVar46;
  undefined1 auVar42 [16];
  uint uVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  undefined1 auVar51 [16];
  float fVar57;
  float fVar58;
  float fVar61;
  float fVar62;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  float fVar63;
  uint uVar64;
  float fVar65;
  uint uVar68;
  float fVar69;
  uint uVar70;
  float fVar71;
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  uint uVar72;
  float fVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  float fVar78;
  undefined1 auVar77 [16];
  float fVar79;
  
  if (__isa_available < 2) {
    __sse2_cosf4__16();
    return;
  }
  uVar7 = 0;
  fVar9 = (float)(_DAT_156207000 & (uint)in_XMM0_Da);
  fVar11 = (float)(_UNK_156207004 & (uint)in_XMM0_Db);
  fVar13 = (float)(_UNK_156207008 & (uint)in_XMM0_Dc);
  fVar15 = (float)(_UNK_15620700c & (uint)in_XMM0_Dd);
  auVar8._4_4_ = -(uint)(_UNK_1562075c4 == fVar11 + _UNK_1562075c4);
  auVar8._0_4_ = -(uint)(_DAT_1562075c0 == fVar9 + _DAT_1562075c0);
  auVar8._8_4_ = -(uint)(_UNK_1562075c8 == fVar13 + _UNK_1562075c8);
  auVar8._12_4_ = -(uint)(_UNK_1562075cc == fVar15 + _UNK_1562075cc);
  auVar18._4_4_ = -(uint)(_UNK_156207044 < fVar11);
  auVar18._0_4_ = -(uint)(_DAT_156207040 < fVar9);
  auVar18._8_4_ = -(uint)(_UNK_156207048 < fVar13);
  auVar18._12_4_ = -(uint)(_UNK_15620704c < fVar15);
  iVar2 = movmskps(in_EAX,auVar18);
  fVar22 = _DAT_156207540 * (fVar9 + _DAT_1562075c0) + _DAT_156207580;
  fVar27 = _UNK_156207544 * (fVar11 + _UNK_1562075c4) + _UNK_156207584;
  fVar31 = _UNK_156207548 * (fVar13 + _UNK_1562075c8) + _UNK_156207588;
  fVar35 = _UNK_15620754c * (fVar15 + _UNK_1562075cc) + _UNK_15620758c;
  fVar23 = (fVar22 - _DAT_156207580) - _DAT_156207600;
  fVar28 = (fVar27 - _UNK_156207584) - _UNK_156207604;
  fVar32 = (fVar31 - _UNK_156207588) - _UNK_156207608;
  fVar36 = (fVar35 - _UNK_15620758c) - _UNK_15620760c;
  fVar23 = (((fVar9 - _DAT_1562071c0 * fVar23) - _DAT_156207200 * fVar23) - _DAT_156207240 * fVar23)
           - _DAT_156207280 * fVar23;
  fVar28 = (((fVar11 - _UNK_1562071c4 * fVar28) - _UNK_156207204 * fVar28) - _UNK_156207244 * fVar28
           ) - _UNK_156207284 * fVar28;
  fVar32 = (((fVar13 - _UNK_1562071c8 * fVar32) - _UNK_156207208 * fVar32) - _UNK_156207248 * fVar32
           ) - _UNK_156207288 * fVar32;
  fVar36 = (((fVar15 - _UNK_1562071cc * fVar36) - _UNK_15620720c * fVar36) - _UNK_15620724c * fVar36
           ) - _UNK_15620728c * fVar36;
  fVar49 = fVar23 * fVar23;
  fVar52 = fVar28 * fVar28;
  fVar54 = fVar32 * fVar32;
  fVar56 = fVar36 * fVar36;
  fVar23 = (float)((uint)fVar23 ^ (int)fVar22 << 0x1f);
  fVar28 = (float)((uint)fVar28 ^ (int)fVar27 << 0x1f);
  fVar32 = (float)((uint)fVar32 ^ (int)fVar31 << 0x1f);
  fVar36 = (float)((uint)fVar36 ^ (int)fVar35 << 0x1f);
  auVar10._0_4_ =
       fVar23 + (((_DAT_156207440 * fVar49 + _DAT_156207400) * fVar49 + _DAT_1562073c0) * fVar49 +
                _DAT_156207380) * fVar49 * fVar23;
  auVar10._4_4_ =
       fVar28 + (((_UNK_156207444 * fVar52 + _UNK_156207404) * fVar52 + _UNK_1562073c4) * fVar52 +
                _UNK_156207384) * fVar52 * fVar28;
  auVar10._8_4_ =
       fVar32 + (((_UNK_156207448 * fVar54 + _UNK_156207408) * fVar54 + _UNK_1562073c8) * fVar54 +
                _UNK_156207388) * fVar54 * fVar32;
  auVar10._12_4_ =
       fVar36 + (((_UNK_15620744c * fVar56 + _UNK_15620740c) * fVar56 + _UNK_1562073cc) * fVar56 +
                _UNK_15620738c) * fVar56 * fVar36;
  auVar18 = blendvps(auVar10,_DAT_156207640,auVar8);
  if (iVar2 != 0) {
    auVar39._4_4_ = -(uint)((float)((uint)fVar11 & (uint)_UNK_156207084) == _UNK_156207084);
    auVar39._0_4_ = -(uint)((float)((uint)fVar9 & (uint)_DAT_156207080) == _DAT_156207080);
    auVar39._8_4_ = -(uint)((float)((uint)fVar13 & (uint)_UNK_156207088) == _UNK_156207088);
    auVar39._12_4_ = -(uint)((float)((uint)fVar15 & (uint)_UNK_15620708c) == _UNK_15620708c);
    uVar7 = movmskps(0,auVar39);
    uVar1 = (ulonglong)((((uint)in_XMM0_Da & 0x7f800000) >> 0x17) * 0xc);
    uVar5 = (ulonglong)((((uint)in_XMM0_Dc & 0x7f800000) >> 0x17) * 0xc);
    uVar4 = (ulonglong)((((uint)in_XMM0_Db & 0x7f800000) >> 0x17) * 0xc);
    uVar3 = (ulonglong)((((uint)in_XMM0_Dd & 0x7f800000) >> 0x17) * 0xc);
    auVar66._4_4_ = *(uint *)((longlong)&__common_scos_reduction_data + uVar4);
    auVar66._0_4_ = *(uint *)((longlong)&__common_scos_reduction_data + uVar1);
    auVar66._12_4_ = *(uint *)((longlong)&__common_scos_reduction_data + uVar3);
    auVar66._8_4_ = *(uint *)((longlong)&__common_scos_reduction_data + uVar5);
    auVar74._4_4_ = *(uint *)(&DAT_156205404 + uVar4);
    auVar74._0_4_ = *(uint *)(&DAT_156205404 + uVar1);
    auVar75._4_4_ = *(uint *)(&DAT_156205408 + uVar4);
    auVar75._0_4_ = *(uint *)(&DAT_156205408 + uVar1);
    auVar67._0_4_ = *(uint *)((longlong)&__common_scos_reduction_data + uVar1) >> 0x10;
    auVar67._4_4_ = *(uint *)((longlong)&__common_scos_reduction_data + uVar4) >> 0x10;
    auVar67._8_4_ = *(uint *)((longlong)&__common_scos_reduction_data + uVar5) >> 0x10;
    auVar67._12_4_ = *(uint *)((longlong)&__common_scos_reduction_data + uVar3) >> 0x10;
    auVar74._12_4_ = *(uint *)(&DAT_156205404 + uVar3);
    auVar74._8_4_ = *(uint *)(&DAT_156205404 + uVar5);
    auVar75._12_4_ = *(uint *)(&DAT_156205408 + uVar3);
    auVar75._8_4_ = *(uint *)(&DAT_156205408 + uVar5);
    auVar19._0_4_ = *(uint *)(&DAT_156205404 + uVar1) >> 0x10;
    auVar19._4_4_ = *(uint *)(&DAT_156205404 + uVar4) >> 0x10;
    auVar19._8_4_ = *(uint *)(&DAT_156205404 + uVar5) >> 0x10;
    auVar19._12_4_ = *(uint *)(&DAT_156205404 + uVar3) >> 0x10;
    auVar51._0_4_ = ((uint)in_XMM0_Da & 0x7fffff) + 0x800000;
    auVar51._4_4_ = ((uint)in_XMM0_Db & 0x7fffff) + 0x800000;
    auVar51._8_4_ = ((uint)in_XMM0_Dc & 0x7fffff) + 0x800000;
    auVar51._12_4_ = ((uint)in_XMM0_Dd & 0x7fffff) + 0x800000;
    auVar77._8_4_ = 0xffff;
    auVar77._0_8_ = 0xffff0000ffff;
    auVar77._12_4_ = 0xffff;
    auVar17._0_4_ = auVar51._0_4_ >> 0x10;
    auVar17._4_4_ = auVar51._4_4_ >> 0x10;
    auVar17._8_4_ = auVar51._8_4_ >> 0x10;
    auVar17._12_4_ = auVar51._12_4_ >> 0x10;
    auVar51 = auVar51 & auVar77;
    auVar59._0_4_ = *(uint *)(&DAT_156205408 + uVar1) >> 0x10;
    auVar59._4_4_ = *(uint *)(&DAT_156205408 + uVar4) >> 0x10;
    auVar59._8_4_ = *(uint *)(&DAT_156205408 + uVar5) >> 0x10;
    auVar59._12_4_ = *(uint *)(&DAT_156205408 + uVar3) >> 0x10;
    auVar26 = pmulld(auVar51,auVar74 & auVar77);
    auVar10 = pmulld(auVar17,auVar59);
    auVar42 = pmulld(auVar59,auVar51);
    auVar8 = auVar26 & auVar77;
    auVar59 = pmulld(auVar75 & auVar77,auVar17);
    auVar39 = pmulld(auVar51,auVar19);
    auVar75 = pmulld(auVar74 & auVar77,auVar17);
    auVar60._0_4_ = (auVar59._0_4_ >> 0x10) + auVar8._0_4_ + auVar10._0_4_ + (auVar42._0_4_ >> 0x10)
    ;
    auVar60._4_4_ = (auVar59._4_4_ >> 0x10) + auVar8._4_4_ + auVar10._4_4_ + (auVar42._4_4_ >> 0x10)
    ;
    auVar60._8_4_ = (auVar59._8_4_ >> 0x10) + auVar8._8_4_ + auVar10._8_4_ + (auVar42._8_4_ >> 0x10)
    ;
    auVar60._12_4_ =
         (auVar59._12_4_ >> 0x10) + auVar8._12_4_ + auVar10._12_4_ + (auVar42._12_4_ >> 0x10);
    auVar42 = auVar39 & auVar77;
    auVar10 = pmulld(auVar51,auVar66 & auVar77);
    auVar8 = pmulld(auVar19,auVar17);
    uVar6 = (auVar60._0_4_ >> 0x10) + auVar42._0_4_ + auVar75._0_4_ + (auVar26._0_4_ >> 0x10);
    uVar12 = (auVar60._4_4_ >> 0x10) + auVar42._4_4_ + auVar75._4_4_ + (auVar26._4_4_ >> 0x10);
    uVar14 = (auVar60._8_4_ >> 0x10) + auVar42._8_4_ + auVar75._8_4_ + (auVar26._8_4_ >> 0x10);
    uVar16 = (auVar60._12_4_ >> 0x10) + auVar42._12_4_ + auVar75._12_4_ + (auVar26._12_4_ >> 0x10);
    auVar26 = auVar10 & auVar77;
    auVar42 = pmulld(auVar51,auVar67);
    auVar76._0_4_ = (uVar6 >> 0x10) + auVar26._0_4_ + auVar8._0_4_ + (auVar39._0_4_ >> 0x10);
    auVar76._4_4_ = (uVar12 >> 0x10) + auVar26._4_4_ + auVar8._4_4_ + (auVar39._4_4_ >> 0x10);
    auVar76._8_4_ = (uVar14 >> 0x10) + auVar26._8_4_ + auVar8._8_4_ + (auVar39._8_4_ >> 0x10);
    auVar76._12_4_ = (uVar16 >> 0x10) + auVar26._12_4_ + auVar8._12_4_ + (auVar39._12_4_ >> 0x10);
    auVar8 = pmulld(auVar17,auVar66 & auVar77);
    auVar42 = auVar42 & auVar77;
    auVar26 = auVar76 & auVar77;
    uVar40 = ((auVar76._0_4_ >> 0x10) + auVar42._0_4_ + auVar8._0_4_ + (auVar10._0_4_ >> 0x10)) *
             0x10000 + auVar26._0_4_;
    uVar43 = ((auVar76._4_4_ >> 0x10) + auVar42._4_4_ + auVar8._4_4_ + (auVar10._4_4_ >> 0x10)) *
             0x10000 + auVar26._4_4_;
    uVar45 = ((auVar76._8_4_ >> 0x10) + auVar42._8_4_ + auVar8._8_4_ + (auVar10._8_4_ >> 0x10)) *
             0x10000 + auVar26._8_4_;
    uVar47 = ((auVar76._12_4_ >> 0x10) + auVar42._12_4_ + auVar8._12_4_ + (auVar10._12_4_ >> 0x10))
             * 0x10000 + auVar26._12_4_;
    uVar64 = (uint)in_XMM0_Da & 0x80000000;
    uVar68 = (uint)in_XMM0_Db & 0x80000000;
    uVar70 = (uint)in_XMM0_Dc & 0x80000000;
    uVar72 = (uint)in_XMM0_Dd & 0x80000000;
    fVar22 = (float)(uVar40 >> 9 | uVar64 ^ 0x3f800000);
    fVar27 = (float)(uVar43 >> 9 | uVar68 ^ 0x3f800000);
    fVar31 = (float)(uVar45 >> 9 | uVar70 ^ 0x3f800000);
    fVar35 = (float)(uVar47 >> 9 | uVar72 ^ 0x3f800000);
    auVar60 = auVar60 & auVar77;
    uVar6 = uVar6 * 0x10000 + auVar60._0_4_;
    uVar12 = uVar12 * 0x10000 + auVar60._4_4_;
    uVar14 = uVar14 * 0x10000 + auVar60._8_4_;
    uVar16 = uVar16 * 0x10000 + auVar60._12_4_;
    auVar26._4_4_ = -(uint)(_UNK_156207044 < fVar11);
    auVar26._0_4_ = -(uint)(_DAT_156207040 < fVar9);
    auVar26._8_4_ = -(uint)(_UNK_156207048 < fVar13);
    auVar26._12_4_ = -(uint)(_UNK_15620704c < fVar15);
    fVar52 = fVar22 + 49152.0;
    fVar56 = fVar27 + 49152.0;
    fVar78 = fVar31 + 49152.0;
    fVar79 = fVar35 + 49152.0;
    fVar9 = (float)((uVar40 & 0x1ff) << 0xe | uVar6 >> 0x12 | uVar64 ^ 0x34000000) -
            (float)(uVar64 ^ 0x34000000);
    fVar11 = (float)((uVar43 & 0x1ff) << 0xe | uVar12 >> 0x12 | uVar68 ^ 0x34000000) -
             (float)(uVar68 ^ 0x34000000);
    fVar13 = (float)((uVar45 & 0x1ff) << 0xe | uVar14 >> 0x12 | uVar70 ^ 0x34000000) -
             (float)(uVar70 ^ 0x34000000);
    fVar15 = (float)((uVar47 & 0x1ff) << 0xe | uVar16 >> 0x12 | uVar72 ^ 0x34000000) -
             (float)(uVar72 ^ 0x34000000);
    fVar22 = fVar22 - (fVar52 - 49152.0);
    fVar27 = fVar27 - (fVar56 - 49152.0);
    fVar31 = fVar31 - (fVar78 - 49152.0);
    fVar35 = fVar35 - (fVar79 - 49152.0);
    fVar23 = fVar22 + fVar9;
    fVar28 = fVar27 + fVar11;
    fVar32 = fVar31 + fVar13;
    fVar36 = fVar35 + fVar15;
    fVar24 = (float)((uint)fVar23 & 0xfffff000);
    fVar29 = (float)((uint)fVar28 & 0xfffff000);
    fVar33 = (float)((uint)fVar32 & 0xfffff000);
    fVar37 = (float)((uint)fVar36 & 0xfffff000);
    fVar50 = (fVar23 - fVar24) * 6.283203 + fVar24 * -1.781782e-05 +
             (((float)((uVar6 & 0x3ffff) << 5 | uVar64 ^ 0x28800000) - (float)(uVar64 ^ 0x28800000))
             + fVar9 + (fVar22 - fVar23)) * 6.2831855 + (fVar23 - fVar24) * -1.781782e-05;
    fVar53 = (fVar28 - fVar29) * 6.283203 + fVar29 * -1.781782e-05 +
             (((float)((uVar12 & 0x3ffff) << 5 | uVar68 ^ 0x28800000) - (float)(uVar68 ^ 0x28800000)
              ) + fVar11 + (fVar27 - fVar28)) * 6.2831855 + (fVar28 - fVar29) * -1.781782e-05;
    fVar55 = (fVar32 - fVar33) * 6.283203 + fVar33 * -1.781782e-05 +
             (((float)((uVar14 & 0x3ffff) << 5 | uVar70 ^ 0x28800000) - (float)(uVar70 ^ 0x28800000)
              ) + fVar13 + (fVar31 - fVar32)) * 6.2831855 + (fVar32 - fVar33) * -1.781782e-05;
    fVar57 = (fVar36 - fVar37) * 6.283203 + fVar37 * -1.781782e-05 +
             (((float)((uVar16 & 0x3ffff) << 5 | uVar72 ^ 0x28800000) - (float)(uVar72 ^ 0x28800000)
              ) + fVar15 + (fVar35 - fVar36)) * 6.2831855 + (fVar36 - fVar37) * -1.781782e-05;
    fVar22 = fVar50 + fVar24 * 6.283203;
    fVar31 = fVar53 + fVar29 * 6.283203;
    fVar49 = fVar55 + fVar33 * 6.283203;
    fVar54 = fVar57 + fVar37 * 6.283203;
    uVar1 = (ulonglong)(((uint)fVar52 & 0xff) << 4);
    uVar4 = (ulonglong)(((uint)fVar78 & 0xff) << 4);
    uVar3 = (ulonglong)(((uint)fVar56 & 0xff) << 4);
    uVar6 = -(uint)(9.536743e-07 < ABS(in_XMM0_Da));
    uVar12 = -(uint)(9.536743e-07 < ABS(in_XMM0_Db));
    uVar14 = -(uint)(9.536743e-07 < ABS(in_XMM0_Dc));
    uVar16 = -(uint)(9.536743e-07 < ABS(in_XMM0_Dd));
    uVar5 = (ulonglong)(((uint)fVar79 & 0xff) << 4);
    fVar41 = (float)(-(uint)(ABS(in_XMM0_Da) <= 9.536743e-07) & (uint)in_XMM0_Da |
                    (uint)fVar22 & uVar6);
    fVar44 = (float)(-(uint)(ABS(in_XMM0_Db) <= 9.536743e-07) & (uint)in_XMM0_Db |
                    (uint)fVar31 & uVar12);
    fVar46 = (float)(-(uint)(ABS(in_XMM0_Dc) <= 9.536743e-07) & (uint)in_XMM0_Dc |
                    (uint)fVar49 & uVar14);
    fVar48 = (float)(-(uint)(ABS(in_XMM0_Dd) <= 9.536743e-07) & (uint)in_XMM0_Dd |
                    (uint)fVar54 & uVar16);
    fVar25 = fVar41 * fVar41;
    fVar30 = fVar44 * fVar44;
    fVar34 = fVar46 * fVar46;
    fVar38 = fVar48 * fVar48;
    fVar9 = *(float *)(&DAT_156206004 + uVar1);
    fVar11 = *(float *)(&DAT_156206004 + uVar4);
    fVar13 = *(float *)(&DAT_156206004 + uVar3);
    fVar15 = *(float *)(&DAT_156206004 + uVar5);
    fVar23 = fVar41 * *(float *)(&DAT_15620600c + uVar1);
    fVar28 = fVar44 * *(float *)(&DAT_15620600c + uVar3);
    fVar32 = fVar46 * *(float *)(&DAT_15620600c + uVar4);
    fVar36 = fVar48 * *(float *)(&DAT_15620600c + uVar5);
    fVar58 = fVar9 + fVar23;
    fVar61 = fVar13 + fVar28;
    fVar62 = fVar11 + fVar32;
    fVar63 = fVar15 + fVar36;
    fVar65 = fVar41 * *(float *)((longlong)&__common_scos_data + uVar1);
    fVar69 = fVar44 * *(float *)((longlong)&__common_scos_data + uVar3);
    fVar71 = fVar46 * *(float *)((longlong)&__common_scos_data + uVar4);
    fVar73 = fVar48 * *(float *)((longlong)&__common_scos_data + uVar5);
    fVar27 = fVar58 + fVar65;
    fVar35 = fVar61 + fVar69;
    fVar52 = fVar62 + fVar71;
    fVar56 = fVar63 + fVar73;
    fVar78 = (*(float *)((longlong)&__common_scos_data + uVar1) + *(float *)(&DAT_15620600c + uVar1)
             ) - fVar41 * fVar9;
    fVar79 = (*(float *)((longlong)&__common_scos_data + uVar3) + *(float *)(&DAT_15620600c + uVar3)
             ) - fVar44 * fVar13;
    fVar20 = (*(float *)((longlong)&__common_scos_data + uVar4) + *(float *)(&DAT_15620600c + uVar4)
             ) - fVar46 * fVar11;
    fVar21 = (*(float *)((longlong)&__common_scos_data + uVar5) + *(float *)(&DAT_15620600c + uVar5)
             ) - fVar48 * fVar15;
    auVar42._0_4_ =
         fVar27 + *(float *)(&DAT_156206008 + uVar1) +
                  (float)(uVar6 & (uint)(fVar50 + (fVar24 * 6.283203 - fVar22))) * fVar78 +
                  fVar9 * fVar25 * (_DAT_156207180 * fVar25 + _DAT_156207140) +
                  fVar23 + (fVar9 - fVar58) + fVar65 + (fVar58 - fVar27) +
                  (_DAT_156207100 * fVar25 + _DAT_1562070c0) * fVar25 * fVar41 * fVar78;
    auVar42._4_4_ =
         fVar35 + *(float *)(&DAT_156206008 + uVar3) +
                  (float)(uVar12 & (uint)(fVar53 + (fVar29 * 6.283203 - fVar31))) * fVar79 +
                  fVar13 * fVar30 * (_UNK_156207184 * fVar30 + _UNK_156207144) +
                  fVar28 + (fVar13 - fVar61) + fVar69 + (fVar61 - fVar35) +
                  (_UNK_156207104 * fVar30 + _UNK_1562070c4) * fVar30 * fVar44 * fVar79;
    auVar42._8_4_ =
         fVar52 + *(float *)(&DAT_156206008 + uVar4) +
                  (float)(uVar14 & (uint)(fVar55 + (fVar33 * 6.283203 - fVar49))) * fVar20 +
                  fVar11 * fVar34 * (_UNK_156207188 * fVar34 + _UNK_156207148) +
                  fVar32 + (fVar11 - fVar62) + fVar71 + (fVar62 - fVar52) +
                  (_UNK_156207108 * fVar34 + _UNK_1562070c8) * fVar34 * fVar46 * fVar20;
    auVar42._12_4_ =
         fVar56 + *(float *)(&DAT_156206008 + uVar5) +
                  (float)(uVar16 & (uint)(fVar57 + (fVar37 * 6.283203 - fVar54))) * fVar21 +
                  fVar15 * fVar38 * (_UNK_15620718c * fVar38 + _UNK_15620714c) +
                  fVar36 + (fVar15 - fVar63) + fVar73 + (fVar63 - fVar56) +
                  (_UNK_15620710c * fVar38 + _UNK_1562070cc) * fVar38 * fVar48 * fVar21;
    blendvps(auVar18,auVar42,auVar26);
  }
  if (uVar7 != 0) {
    uVar6 = 0;
    do {
      if ((uVar7 >> (uVar6 & 0x1f) & 1) != 0) {
        __common_scos_cout_rare();
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 4);
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 3

// __sse2_powf4@@32 @ 150164f30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __sse2_powf4__32(void)

{
  undefined1 auVar1 [12];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 uVar6;
  float fVar7;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  longlong lVar11;
  double *pdVar12;
  uint uVar13;
  uint uVar14;
  float fVar15;
  uint uVar16;
  double dVar17;
  undefined1 in_XMM0 [16];
  undefined1 auVar18 [16];
  double dVar22;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float in_XMM1_Da;
  int iVar23;
  float in_XMM1_Db;
  int iVar25;
  float in_XMM1_Dc;
  int iVar26;
  float in_XMM1_Dd;
  undefined1 auVar24 [16];
  int iVar27;
  float fVar28;
  undefined1 auVar29 [16];
  double dVar32;
  double dVar33;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  uint uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  double dVar51;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar56;
  undefined1 auVar55 [16];
  uint local_108;
  uint uStack_104;
  uint uStack_100;
  uint uStack_fc;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  float local_58 [4];
  undefined1 local_48 [16];
  undefined1 auVar46 [16];
  
  auVar41._4_4_ = _UNK_1561cdba4;
  auVar41._0_4_ = _DAT_1561cdba0;
  auVar41._8_4_ = _UNK_1561cdba8;
  auVar41._12_4_ = _UNK_1561cdbac;
  auVar24._0_4_ = -(uint)(0 < (int)in_XMM1_Da);
  auVar24._4_4_ = -(uint)(0 < (int)in_XMM1_Db);
  auVar24._8_4_ = -(uint)(0 < (int)in_XMM1_Dc);
  auVar24._12_4_ = -(uint)(0 < (int)in_XMM1_Dd);
  auVar35._0_4_ = -(uint)(_DAT_1561cdb20 < (int)in_XMM1_Da);
  auVar35._4_4_ = -(uint)(_UNK_1561cdb24 < (int)in_XMM1_Db);
  auVar35._8_4_ = -(uint)(_UNK_1561cdb28 < (int)in_XMM1_Dc);
  auVar35._12_4_ = -(uint)(_UNK_1561cdb2c < (int)in_XMM1_Dd);
  uVar16 = -(uint)(_UNK_1561cdb0c <= (float)((uint)_UNK_1561cdb0c & (uint)in_XMM1_Dd));
  auVar53._4_4_ = -(uint)(_UNK_1561cdb04 <= (float)((uint)_UNK_1561cdb04 & (uint)in_XMM1_Db));
  auVar53._0_4_ = -(uint)((float)s_Data <= (float)(s_Data & (uint)in_XMM1_Da));
  auVar53._8_4_ = -(uint)(_UNK_1561cdb08 <= (float)((uint)_UNK_1561cdb08 & (uint)in_XMM1_Dc));
  auVar53._12_4_ = uVar16;
  auVar39 = _DAT_1561cdb40 & in_XMM0;
  uVar14 = in_XMM0._0_4_;
  auVar43._0_4_ = -(uint)(uVar14 == 0);
  uVar10 = in_XMM0._4_4_;
  auVar43._4_4_ = -(uint)(uVar10 == 0);
  uVar8 = in_XMM0._8_4_;
  auVar43._8_4_ = -(uint)(uVar8 == 0);
  uVar34 = in_XMM0._12_4_;
  auVar43._12_4_ = -(uint)(SUB124(SUB1612((undefined1  [16])0x0,4),8) == uVar34);
  auVar29._0_4_ = _DAT_1561cdb50 + auVar39._0_4_;
  auVar29._4_4_ = _UNK_1561cdb54 + auVar39._4_4_;
  auVar29._8_4_ = _UNK_1561cdb58 + auVar39._8_4_;
  auVar29._12_4_ = _UNK_1561cdb5c + auVar39._12_4_;
  auVar43 = auVar43 & ~auVar35 & auVar24;
  auVar29 = auVar29 & _DAT_1561cdb60;
  auVar36._0_4_ = -(uint)((int)uVar14 < _DAT_1561cdb10);
  auVar36._4_4_ = -(uint)((int)uVar10 < _UNK_1561cdb14);
  auVar36._8_4_ = -(uint)((int)uVar8 < _UNK_1561cdb18);
  auVar36._12_4_ = -(uint)((int)uVar34 < _UNK_1561cdb1c);
  auVar44._4_4_ = _UNK_1561cdcb4;
  auVar44._0_4_ = _DAT_1561cdcb0;
  auVar44._8_4_ = _UNK_1561cdcb8;
  auVar44._12_4_ = _UNK_1561cdcbc;
  auVar44 = auVar43 ^ auVar44;
  auVar39 = auVar39 | auVar41 ^ auVar29;
  uVar9 = ((ushort)(SUB161(auVar43 >> 7,0) & 1) | (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar43[0xf] >> 7) << 0xf
          ) ^ 0xffff;
  if (uVar9 != 0) {
    auVar18._0_4_ = -(uint)(_DAT_1561cdb20 < (int)uVar14);
    auVar18._4_4_ = -(uint)(_UNK_1561cdb24 < (int)uVar10);
    auVar18._8_4_ = -(uint)(_UNK_1561cdb28 < (int)uVar8);
    auVar18._12_4_ = -(uint)(_UNK_1561cdb2c < (int)uVar34);
    fVar38 = auVar39._0_4_;
    auVar40._0_4_ = _DAT_1561cdba0 + fVar38;
    fVar15 = auVar39._4_4_;
    auVar40._4_4_ = _UNK_1561cdba4 + fVar15;
    auVar40._8_4_ = _UNK_1561cdba8 + auVar39._8_4_;
    auVar40._12_4_ = _UNK_1561cdbac + auVar39._12_4_;
    local_108 = auVar44._0_4_;
    uStack_104 = auVar44._4_4_;
    uStack_100 = auVar44._8_4_;
    uStack_fc = auVar44._12_4_;
    auVar18 = auVar18 | auVar36;
    auVar46._0_12_ = ZEXT812(0);
    auVar46._12_4_ = fVar15;
    auVar45._4_8_ = auVar46._8_8_;
    auVar45._0_4_ = fVar38;
    auVar45._12_4_ = 0;
    auVar45 = auVar45 << 0x20;
    iVar23 = (((uVar14 & 0x7fffffff) >> 0x17) - _DAT_1561cdb30 & local_108) +
             (auVar29._0_4_ >> 0x17);
    iVar25 = (((uVar10 & 0x7fffffff) >> 0x17) - _UNK_1561cdb34 & uStack_104) +
             (auVar29._4_4_ >> 0x17);
    iVar26 = (((uVar8 & 0x7fffffff) >> 0x17) - _UNK_1561cdb38 & uStack_100) +
             (auVar29._8_4_ >> 0x17);
    iVar27 = (((uVar34 & 0x7fffffff) >> 0x17) - _UNK_1561cdb3c & uStack_fc) +
             (auVar29._12_4_ >> 0x17);
    uVar13 = 0;
    local_58[0] = in_XMM1_Da;
    local_58[1] = in_XMM1_Db;
    local_58[2] = in_XMM1_Dc;
    local_58[3] = in_XMM1_Dd;
    local_48 = in_XMM0;
    if ((((ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
          (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
          (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
          (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
          (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
          (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
          (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar18[0xf] >> 7) << 0xf)
        & uVar9) != 0) {
      local_48._0_4_ = ~local_108 & (uint)_DAT_1561cdba0 | local_108 & uVar14;
      local_48._4_4_ = ~uStack_104 & (uint)_UNK_1561cdba4 | uStack_104 & uVar10;
      local_48._8_4_ = ~uStack_100 & (uint)_UNK_1561cdba8 | uStack_100 & uVar8;
      local_48._12_4_ = ~uStack_fc & (uint)_UNK_1561cdbac | uStack_fc & uVar34;
      local_58[0] = (float)(local_108 & (uint)in_XMM1_Da | ~local_108 & (uint)_DAT_1561cdba0);
      local_58[1] = (float)(uStack_104 & (uint)in_XMM1_Db | ~uStack_104 & (uint)_UNK_1561cdba4);
      local_58[2] = (float)(uStack_100 & (uint)in_XMM1_Dc | ~uStack_100 & (uint)_UNK_1561cdba8);
      local_58[3] = (float)(uStack_fc & (uint)in_XMM1_Dd | ~uStack_fc & (uint)_UNK_1561cdbac);
      auVar19._0_4_ = -(uint)(_DAT_1561cdb20 < (int)local_48._0_4_);
      auVar19._4_4_ = -(uint)(_UNK_1561cdb24 < (int)local_48._4_4_);
      auVar19._8_4_ = -(uint)(_UNK_1561cdb28 < (int)local_48._8_4_);
      auVar19._12_4_ = -(uint)(_UNK_1561cdb2c < (int)local_48._12_4_);
      auVar37._0_4_ = -(uint)((int)local_48._0_4_ < _DAT_1561cdb10);
      auVar37._4_4_ = -(uint)((int)local_48._4_4_ < _UNK_1561cdb14);
      auVar37._8_4_ = -(uint)((int)local_48._8_4_ < _UNK_1561cdb18);
      auVar37._12_4_ = -(uint)((int)local_48._12_4_ < _UNK_1561cdb1c);
      auVar19 = auVar19 | auVar37;
      auVar30._4_4_ = -(uint)((int)(local_48._4_4_ & _UNK_1561cdb94) < _UNK_1561cdb14);
      auVar30._0_4_ = -(uint)((int)(local_48._0_4_ & _DAT_1561cdb90) < _DAT_1561cdb10);
      auVar30._8_4_ = -(uint)((int)(local_48._8_4_ & _UNK_1561cdb98) < _UNK_1561cdb18);
      auVar30._12_4_ = -(uint)((int)(local_48._12_4_ & _UNK_1561cdb9c) < _UNK_1561cdb1c);
      auVar37 = auVar37 & auVar30;
      if ((((((((((((((((SUB161(auVar37 >> 7,0) & 1) == 0 && (SUB161(auVar37 >> 0xf,0) & 1) == 0) &&
                      (SUB161(auVar37 >> 0x17,0) & 1) == 0) && (SUB161(auVar37 >> 0x1f,0) & 1) == 0)
                    && (SUB161(auVar37 >> 0x27,0) & 1) == 0) && (SUB161(auVar37 >> 0x2f,0) & 1) == 0
                   ) && (SUB161(auVar37 >> 0x37,0) & 1) == 0) &&
                 (SUB161(auVar37 >> 0x3f,0) & 1) == 0) && (SUB161(auVar37 >> 0x47,0) & 1) == 0) &&
               (SUB161(auVar37 >> 0x4f,0) & 1) == 0) && (SUB161(auVar37 >> 0x57,0) & 1) == 0) &&
             (SUB161(auVar37 >> 0x5f,0) & 1) == 0) && (SUB161(auVar37 >> 0x67,0) & 1) == 0) &&
           (SUB161(auVar37 >> 0x6f,0) & 1) == 0) && (SUB161(auVar37 >> 0x77,0) & 1) == 0) &&
          -1 < auVar37[0xf]) {
        uVar13 = (uint)(ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar19[0xf] >> 7) << 0xf);
        auVar50._0_12_ = ZEXT812(0);
        auVar50._12_4_ = fVar15;
        auVar3._4_8_ = auVar50._8_8_;
        auVar3._0_4_ = fVar38;
        auVar3._12_4_ = 0;
        auVar45 = auVar3 << 0x20;
      }
      else {
        auVar39._4_4_ = _UNK_1561cdb94;
        auVar39._0_4_ = _DAT_1561cdb90;
        auVar39._8_4_ = _UNK_1561cdb98;
        auVar39._12_4_ = _UNK_1561cdb9c;
        auVar4._4_4_ = _UNK_1561cdba4;
        auVar4._0_4_ = _DAT_1561cdba0;
        auVar4._8_4_ = _UNK_1561cdba8;
        auVar4._12_4_ = _UNK_1561cdbac;
        auVar41 = auVar4 & auVar37;
        auVar44 = local_48 & auVar39 | auVar41;
        auVar37 = auVar37 & _DAT_1561cdb80;
        auVar48._0_4_ = auVar44._0_4_ - auVar41._0_4_;
        auVar48._4_4_ = auVar44._4_4_ - auVar41._4_4_;
        auVar48._8_4_ = auVar44._8_4_ - auVar41._8_4_;
        auVar48._12_4_ = auVar44._12_4_ - auVar41._12_4_;
        auVar39 = auVar48 & _DAT_1561cdb40;
        auVar31._0_4_ = _DAT_1561cdb50 + auVar39._0_4_;
        auVar31._4_4_ = _UNK_1561cdb54 + auVar39._4_4_;
        auVar31._8_4_ = _UNK_1561cdb58 + auVar39._8_4_;
        auVar31._12_4_ = _UNK_1561cdb5c + auVar39._12_4_;
        auVar31 = auVar31 & _DAT_1561cdb60;
        auVar39 = auVar39 | auVar4 ^ auVar31;
        auVar20._0_4_ = -(uint)(0 < (int)local_48._0_4_);
        auVar20._4_4_ = -(uint)(0 < (int)local_48._4_4_);
        auVar20._8_4_ = -(uint)(0 < (int)local_48._8_4_);
        auVar20._12_4_ = -(uint)(0 < (int)local_48._12_4_);
        auVar21._0_4_ = -(uint)(_DAT_1561cdb20 < (int)local_48._0_4_);
        auVar21._4_4_ = -(uint)(_UNK_1561cdb24 < (int)local_48._4_4_);
        auVar21._8_4_ = -(uint)(_UNK_1561cdb28 < (int)local_48._8_4_);
        auVar21._12_4_ = -(uint)(_UNK_1561cdb2c < (int)local_48._12_4_);
        auVar5._4_4_ = _UNK_1561cdcb4;
        auVar5._0_4_ = _DAT_1561cdcb0;
        auVar5._8_4_ = _UNK_1561cdcb8;
        auVar5._12_4_ = _UNK_1561cdcbc;
        auVar21 = auVar20 ^ auVar5 | auVar21;
        uVar13 = (uint)(ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                                (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                                (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                                (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                                (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                                (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                                (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                                (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                                (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                                (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                                (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                                (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                                (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                                (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                                (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                               (ushort)(byte)(auVar21[0xf] >> 7) << 0xf);
        auVar40._0_4_ = _DAT_1561cdba0 + auVar39._0_4_;
        auVar40._4_4_ = _UNK_1561cdba4 + auVar39._4_4_;
        auVar40._8_4_ = _UNK_1561cdba8 + auVar39._8_4_;
        auVar40._12_4_ = _UNK_1561cdbac + auVar39._12_4_;
        auVar49._0_12_ = ZEXT812(0);
        auVar49._12_4_ = auVar39._4_4_;
        auVar2._4_8_ = auVar49._8_8_;
        auVar2._0_4_ = auVar39._0_4_;
        auVar2._12_4_ = 0;
        auVar45 = auVar2 << 0x20;
        iVar23 = (((uint)ABS(auVar48._0_4_) >> 0x17) -
                 ((uint)(auVar37._0_4_ + (int)_DAT_1561cdba0) >> 0x17)) + (auVar31._0_4_ >> 0x17);
        iVar25 = (((uint)ABS(auVar48._4_4_) >> 0x17) -
                 ((uint)(auVar37._4_4_ + (int)_UNK_1561cdba4) >> 0x17)) + (auVar31._4_4_ >> 0x17);
        iVar26 = (((uint)ABS(auVar48._8_4_) >> 0x17) -
                 ((uint)(auVar37._8_4_ + (int)_UNK_1561cdba8) >> 0x17)) + (auVar31._8_4_ >> 0x17);
        iVar27 = (((uint)ABS(auVar48._12_4_) >> 0x17) -
                 ((uint)(auVar37._12_4_ + (int)_UNK_1561cdbac) >> 0x17)) + (auVar31._12_4_ >> 0x17);
      }
    }
    auVar41 = rcpps(auVar40,auVar40);
    uVar14 = auVar39._8_4_;
    auVar1._4_4_ = SUB124(SUB1612((undefined1  [16])0x0,4),8);
    auVar1._0_4_ = uVar14;
    auVar1._8_4_ = auVar39._12_4_;
    auVar47._0_8_ =
         (double)CONCAT44((auVar45._4_4_ >> 4) + _UNK_1561cdb74,
                          (int)(auVar45._0_8_ >> 4) + _DAT_1561cdb70);
    auVar47._8_4_ = (int)(auVar45._8_8_ >> 4) + _UNK_1561cdb78;
    auVar47._12_4_ = (auVar45._12_4_ >> 4) + _UNK_1561cdb7c;
    auVar54._0_8_ =
         (double)CONCAT44((uVar14 >> 4) + _UNK_1561cdb74,uVar14 * 0x10000000 + _DAT_1561cdb70);
    auVar54._8_4_ = (int)(auVar1._4_8_ >> 4) + _UNK_1561cdb78;
    auVar54._12_4_ = (auVar39._12_4_ >> 4) + _UNK_1561cdb7c;
    dVar32 = auVar47._8_8_;
    dVar42 = auVar54._8_8_;
    dVar17 = (double)auVar41._0_4_ * (auVar47._0_8_ * (double)auVar41._0_4_ - _DAT_1561cdbb0);
    dVar22 = (double)auVar41._4_4_ * (dVar32 * (double)auVar41._4_4_ - _UNK_1561cdbb8);
    dVar17 = (auVar47._0_8_ * dVar17 + _DAT_1561cdbb0) * (_DAT_1561cdbb0 - auVar47._0_8_) * dVar17;
    dVar32 = (dVar32 * dVar22 + _UNK_1561cdbb8) * (_UNK_1561cdbb8 - dVar32) * dVar22;
    dVar52 = (auVar54._0_8_ * (double)auVar41._8_4_ - _DAT_1561cdbb0) * (double)auVar41._8_4_;
    dVar56 = (dVar42 * (double)auVar41._12_4_ - _UNK_1561cdbb8) * (double)auVar41._12_4_;
    dVar22 = dVar17 * dVar17;
    dVar33 = dVar32 * dVar32;
    dVar52 = (auVar54._0_8_ * dVar52 + _DAT_1561cdbb0) * (_DAT_1561cdbb0 - auVar54._0_8_) * dVar52;
    dVar56 = (dVar42 * dVar56 + _UNK_1561cdbb8) * (_UNK_1561cdbb8 - dVar42) * dVar56;
    dVar42 = dVar52 * dVar52;
    dVar51 = dVar56 * dVar56;
    local_98._0_8_ =
         (dVar17 * _DAT_1561cdc00 *
          ((((_DAT_1561cdbf0 * dVar22 + _DAT_1561cdbe0) * dVar22 + _DAT_1561cdbd0) * dVar22 +
           _DAT_1561cdbc0) * dVar22 + _DAT_1561cdbb0) + (double)iVar23) * (double)local_58[0];
    local_98._8_8_ =
         (dVar32 * _UNK_1561cdc08 *
          ((((_UNK_1561cdbf8 * dVar33 + _UNK_1561cdbe8) * dVar33 + _UNK_1561cdbd8) * dVar33 +
           _UNK_1561cdbc8) * dVar33 + _UNK_1561cdbb8) + (double)iVar25) * (double)local_58[1];
    local_88._0_8_ =
         (((((_DAT_1561cdbf0 * dVar42 + _DAT_1561cdbe0) * dVar42 + _DAT_1561cdbd0) * dVar42 +
           _DAT_1561cdbc0) * dVar42 + _DAT_1561cdbb0) * dVar52 * _DAT_1561cdc00 + (double)iVar26) *
         (double)local_58[2];
    local_88._8_8_ =
         (((((_UNK_1561cdbf8 * dVar51 + _UNK_1561cdbe8) * dVar51 + _UNK_1561cdbd8) * dVar51 +
           _UNK_1561cdbc8) * dVar51 + _UNK_1561cdbb8) * dVar56 * _UNK_1561cdc08 + (double)iVar27) *
         (double)local_58[3];
    if (((((((((((((((((SUB161(auVar53 >> 7,0) & 1) != 0 || (SUB161(auVar53 >> 0xf,0) & 1) != 0) ||
                     (SUB161(auVar53 >> 0x17,0) & 1) != 0) || (SUB161(auVar53 >> 0x1f,0) & 1) != 0)
                   || (SUB161(auVar53 >> 0x27,0) & 1) != 0) || (SUB161(auVar53 >> 0x2f,0) & 1) != 0)
                 || (SUB161(auVar53 >> 0x37,0) & 1) != 0) || (SUB161(auVar53 >> 0x3f,0) & 1) != 0)
               || (SUB161(auVar53 >> 0x47,0) & 1) != 0) || (SUB161(auVar53 >> 0x4f,0) & 1) != 0) ||
             (SUB161(auVar53 >> 0x57,0) & 1) != 0) || (SUB161(auVar53 >> 0x5f,0) & 1) != 0) ||
           (uVar16 >> 7 & 1) != 0) || (uVar16 >> 0xf & 1) != 0) || (uVar16 >> 0x17 & 1) != 0) ||
        (int)uVar16 < 0) || uVar13 != 0) {
      pdVar12 = (double *)local_98;
      lVar11 = 0;
      do {
        uVar16 = *(uint *)(local_48 + lVar11 * 4);
        fVar38 = local_58[lVar11];
        uVar14 = uVar16 & 0x7fffffff;
        fVar15 = ABS(fVar38);
        if (fVar15 == 0.0) {
          *(undefined4 *)((longlong)pdVar12 + 4) = 0xffffffff;
          *(undefined4 *)pdVar12 = 0x3f800000;
        }
        else if ((uVar14 < 0x7f800001) && ((uint)fVar15 < 0x7f800001)) {
          if ((uVar13 & 1) != 0) {
            if (uVar14 == 0) {
              uVar10 = (uint)fVar38 & 0x7f800000;
              fVar7 = ABS(fVar38);
              if (uVar10 < 0x4a800001) {
                fVar28 = 0.0 - fVar7;
                fVar7 = fVar7 + 8388608.0;
                uVar10 = movmskps(uVar10,ZEXT416(-(uint)(8388608.0 - fVar7 == fVar28)));
                if ((uVar10 & 1) == 0) {
LAB_15016590b:
                  uVar10 = 0;
                }
                else {
LAB_15016590f:
                  uVar10 = (((uint)fVar7 & 1) + 1) * 0x40000000;
                }
              }
              else {
                if (0x7f7fffff < uVar10) goto LAB_15016590b;
                if (uVar10 == 0x4b000000) goto LAB_15016590f;
                uVar10 = 0;
              }
              uVar8 = 0;
              if ((uVar10 & 0x80000000) != 0) {
                uVar8 = uVar16 & 0x80000000;
              }
              *(uint *)pdVar12 =
                   (0x800000 << (byte)(((uint)fVar38 & 0x80000000) >> 0x1c)) - 0x800000U | uVar8;
              if (((uint)fVar38 & 0x80000000) != 0) {
                _raise_zerodivide();
              }
            }
            else if (uVar14 == 0x7f800000) {
              uVar10 = (uint)fVar38 & 0x7f800000;
              fVar7 = ABS(fVar38);
              if (uVar10 < 0x4a800001) {
                fVar28 = 0.0 - fVar7;
                fVar7 = fVar7 + 8388608.0;
                uVar10 = movmskps(uVar10,ZEXT416(-(uint)(8388608.0 - fVar7 == fVar28)));
                if ((uVar10 & 1) == 0) {
LAB_15016585b:
                  uVar10 = 0;
                }
                else {
LAB_15016585f:
                  uVar10 = (((uint)fVar7 & 1) + 1) * 0x40000000;
                }
              }
              else {
                if (0x7f7fffff < uVar10) goto LAB_15016585b;
                if (uVar10 == 0x4b000000) goto LAB_15016585f;
                uVar10 = 0;
              }
              *(uint *)pdVar12 =
                   uVar10 & 0x80000000 & uVar16 |
                   (0x80000000U >> (((byte)((uint)fVar38 >> 0x18) & 0x80) >> 4)) - 0x800000;
            }
            else {
              uVar10 = (uint)fVar38 & 0x7f800000;
              fVar7 = ABS(fVar38);
              if (uVar10 < 0x4a800001) {
                fVar28 = 0.0 - fVar7;
                fVar7 = fVar7 + 8388608.0;
                uVar10 = movmskps(uVar10,ZEXT416(-(uint)(8388608.0 - fVar7 == fVar28)));
                if ((uVar10 & 1) == 0) {
LAB_1501655c5:
                  uVar10 = 0;
                }
                else {
LAB_1501655c9:
                  uVar10 = (((uint)fVar7 & 1) + 1) * 0x40000000;
                }
              }
              else {
                if (0x7f7fffff < uVar10) goto LAB_1501655c5;
                if (uVar10 == 0x4b000000) goto LAB_1501655c9;
                uVar10 = 0x40000000;
              }
              if (uVar10 == 0) {
                if ((uint)fVar15 < 0x7f800000) {
                  *(undefined4 *)pdVar12 = 0x7fffffff;
                  _raise_invalid();
                }
              }
              else {
                if ((*(uint *)((longlong)pdVar12 + 4) & 0x7fffffff) < 0x40862000) {
                  dVar17 = *pdVar12;
                  uVar8 = (uint)((ulonglong)dVar17 >> 0x20);
                  dVar22 = dVar17 + (_DAT_1561cdc10 - (_DAT_1561cdc10 + dVar17));
                  auVar55._0_4_ = -(uint)(_DAT_1561cdc20 < (int)(uVar8 & _DAT_1561cdb90));
                  auVar55._4_4_ = -(uint)(_UNK_1561cdc24 < (int)(uVar8 & _UNK_1561cdb94));
                  auVar55._8_4_ = -(uint)(_UNK_1561cdc28 < (int)(uVar8 & _UNK_1561cdb98));
                  auVar55._12_4_ = -(uint)(_UNK_1561cdc2c < (int)(uVar8 & _UNK_1561cdb9c));
                  fVar7 = (float)((double)((ulonglong)
                                           (uint)(SUB84(_DAT_1561cdc10 + dVar17,0) + _DAT_1561cdc30)
                                           << 0x34 | _DAT_1561cdca0) *
                                 ((_DAT_1561cdc40 + dVar22) * dVar22 + _DAT_1561cdc60) *
                                 ((_DAT_1561cdc50 + dVar22) * dVar22 + _DAT_1561cdc70) *
                                 ((dVar22 + _DAT_1561cdc80) * dVar22 + _DAT_1561cdc90));
                  if ((((((((((((((((SUB161(auVar55 >> 7,0) & 1) != 0 ||
                                   (SUB161(auVar55 >> 0xf,0) & 1) != 0) ||
                                  (SUB161(auVar55 >> 0x17,0) & 1) != 0) ||
                                 (SUB161(auVar55 >> 0x1f,0) & 1) != 0) ||
                                (SUB161(auVar55 >> 0x27,0) & 1) != 0) ||
                               (SUB161(auVar55 >> 0x2f,0) & 1) != 0) ||
                              (SUB161(auVar55 >> 0x37,0) & 1) != 0) ||
                             (SUB161(auVar55 >> 0x3f,0) & 1) != 0) ||
                            (SUB161(auVar55 >> 0x47,0) & 1) != 0) ||
                           (SUB161(auVar55 >> 0x4f,0) & 1) != 0) ||
                          (SUB161(auVar55 >> 0x57,0) & 1) != 0) ||
                         (SUB161(auVar55 >> 0x5f,0) & 1) != 0) || (auVar55._12_4_ >> 7 & 1) != 0) ||
                       (auVar55._12_4_ >> 0xf & 1) != 0) || (auVar55._12_4_ >> 0x17 & 1) != 0) ||
                      (int)auVar55._12_4_ < 0) {
                    uVar34 = -(uint)(_DAT_1561cdc20 < (int)(uVar8 & _DAT_1561cdb90));
                    fVar7 = (float)(s_Data & ~-(uint)((longlong)dVar17 < 0) &
                                             (-(uint)(_DAT_1561cdcb0 == uVar8) ^ uVar34) |
                                   SUB84(dVar17,0) & -(uint)(_DAT_1561cdcb0 == uVar8) |
                                   ~uVar34 & (uint)fVar7);
                  }
                  *(float *)pdVar12 = fVar7;
                  uVar8 = *(uint *)pdVar12;
                }
                else {
                  uVar8 = (0x80000000U >>
                          (((byte)(*(uint *)((longlong)pdVar12 + 4) >> 0x18) & 0x80) >> 4)) -
                          0x800000;
                }
                *(uint *)pdVar12 = uVar8 | uVar10 & 0x80000000;
              }
            }
            *(undefined4 *)((longlong)pdVar12 + 4) = 0xffffffff;
          }
          if (uVar16 == 0x3f800000) {
            *(undefined4 *)((longlong)pdVar12 + 4) = 0xffffffff;
            *(undefined4 *)pdVar12 = 0x3f800000;
          }
          else if (fVar15 == INFINITY) {
            *(undefined4 *)((longlong)pdVar12 + 4) = 0xffffffff;
            if (uVar14 == 0x3f800000) {
              *(undefined4 *)pdVar12 = 0x3f800000;
            }
            else if (uVar14 < 0x7f800000) {
              uVar6 = 0;
              if ((uint)fVar38 >> 0x1f != (uint)(0x3f800000 < uVar14)) {
                uVar6 = 0x7f800000;
              }
              *(undefined4 *)pdVar12 = uVar6;
            }
          }
        }
        else {
          *(undefined4 *)((longlong)pdVar12 + 4) = 0xffffffff;
          uVar6 = 0x7fffffff;
          if (uVar16 == 0x3f800000) {
            uVar6 = 0x3f800000;
          }
          *(undefined4 *)pdVar12 = uVar6;
        }
        lVar11 = lVar11 + 1;
        pdVar12 = pdVar12 + 1;
        uVar13 = (int)uVar13 >> 4;
      } while (lVar11 < 4);
    }
  }
  return;
}

// _raise_zerodivide @ 150165a50

void __cdecl _raise_zerodivide(void)

{
  return;
}

// _raise_invalid @ 150165a70

void __cdecl _raise_invalid(void)

{
  return;
}


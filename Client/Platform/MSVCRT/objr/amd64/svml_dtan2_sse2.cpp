// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __sse2_tan2@@16 @ 150165a90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __sse2_tan2__16(void)

{
  ushort uVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined4 in_ECX;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 in_XMM0 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  ulonglong uVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  uint uVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined1 auVar23 [16];
  ulonglong uVar24;
  ulonglong uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar31;
  ulonglong uVar32;
  uint uVar36;
  double dVar37;
  undefined4 uVar38;
  uint uVar39;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  double dVar42;
  undefined1 auVar43 [16];
  double dVar45;
  undefined1 auVar44 [16];
  ulonglong uVar46;
  ulonglong uVar48;
  undefined1 auVar47 [16];
  ulonglong uVar49;
  ulonglong uVar51;
  undefined1 auVar50 [16];
  ulonglong uVar52;
  double dVar53;
  ulonglong uVar55;
  undefined1 auVar54 [16];
  double dVar56;
  ulonglong uVar57;
  ulonglong uVar58;
  ulonglong uVar59;
  ulonglong uVar60;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double dVar68;
  double dVar69;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  double dVar72;
  
  uVar7 = in_XMM0._12_4_;
  uVar6 = 0;
  uVar18 = in_XMM0._0_4_;
  uVar19 = in_XMM0._4_4_;
  uVar20 = in_XMM0._8_4_;
  auVar26._0_8_ = (double)CONCAT44(_UNK_156221204 & uVar19,_DAT_156221200 & uVar18);
  auVar26._8_4_ = _UNK_156221208 & uVar20;
  auVar26._12_4_ = _UNK_15622120c & uVar7;
  auVar50._8_4_ = auVar26._8_4_;
  auVar50._0_8_ = auVar26._0_8_;
  auVar50._12_4_ = auVar26._12_4_;
  dVar31 = _DAT_156227c80 * auVar26._0_8_ + _DAT_156221280;
  dVar37 = _UNK_156227c88 * auVar26._8_8_ + _UNK_156221288;
  auVar43._8_4_ = SUB84(dVar37,0);
  auVar43._0_8_ = dVar31;
  uVar38 = (undefined4)((ulonglong)dVar37 >> 0x20);
  auVar43._12_4_ = uVar38;
  auVar70._8_4_ = SUB84(dVar37,0);
  auVar70._0_8_ = dVar31;
  auVar70._12_4_ = uVar38;
  dVar42 = dVar31 - _DAT_156221280;
  dVar45 = auVar43._8_8_ - _UNK_156221288;
  uVar10 = -(ulonglong)((double)((longlong)dVar31 << 0x3e) != 0.0);
  uVar11 = -(ulonglong)((double)((longlong)dVar37 << 0x3e) != 0.0);
  uVar36 = (uint)(uVar10 >> 0x20);
  uVar39 = (uint)(uVar11 >> 0x20);
  dVar37 = ((auVar26._0_8_ - _DAT_156227cc0 * dVar42) - _DAT_156227d00 * dVar42) -
           _DAT_156227d40 * dVar42;
  dVar42 = ((auVar50._8_8_ - _UNK_156227cc8 * dVar45) - _UNK_156227d08 * dVar45) -
           _UNK_156227d48 * dVar45;
  auVar64._8_4_ = SUB84(dVar42,0);
  auVar64._0_8_ = dVar37;
  auVar64._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
  dVar45 = dVar37 * dVar37;
  dVar68 = auVar64._8_8_ * dVar42;
  dVar31 = (double)CONCAT44(auVar26._12_4_,auVar26._8_4_);
  auVar13._8_4_ = (int)-(ulonglong)(_UNK_156227c08 < dVar31);
  auVar13._0_8_ = -(ulonglong)(_DAT_156227c00 < auVar26._0_8_);
  auVar13._12_4_ = (int)(-(ulonglong)(_UNK_156227c08 < dVar31) >> 0x20);
  iVar5 = movmskpd(in_ECX,auVar13);
  dVar31 = dVar45 * ((_DAT_156228000 * dVar45 + _DAT_156227fc0) * dVar45 + _DAT_156227f80) +
           _DAT_156227f40;
  dVar69 = dVar68 * ((_UNK_156228008 * dVar68 + _UNK_156227fc8) * dVar68 + _UNK_156227f88) +
           _UNK_156227f48;
  dVar37 = dVar37 + ((_DAT_156227f00 * dVar45 + _DAT_156227ec0) * dVar45 + _DAT_156227e80) * dVar45
                    * dVar37;
  dVar42 = dVar42 + ((_UNK_156227f08 * dVar68 + _UNK_156227ec8) * dVar68 + _UNK_156227e88) * dVar68
                    * dVar42;
  auVar47._0_4_ = ~(uint)uVar10 & SUB84(dVar37,0);
  auVar47._4_4_ = ~uVar36 & (uint)((ulonglong)dVar37 >> 0x20);
  auVar47._8_4_ = ~(uint)uVar11 & SUB84(dVar42,0);
  auVar47._12_4_ = ~uVar39 & (uint)((ulonglong)dVar42 >> 0x20);
  auVar61._0_8_ = uVar10 & (ulonglong)dVar31;
  auVar61._8_4_ = (undefined4)((ulonglong)dVar69 & uVar11);
  auVar61._12_4_ = (undefined4)(((ulonglong)dVar69 & uVar11) >> 0x20);
  auVar23._0_8_ = (ulonglong)dVar37 & uVar10;
  auVar23._8_4_ = (undefined4)((ulonglong)dVar42 & uVar11);
  auVar23._12_4_ = (undefined4)(((ulonglong)dVar42 & uVar11) >> 0x20);
  auVar33._0_4_ = ~(uint)uVar10 & SUB84(dVar31,0);
  auVar33._4_4_ = ~uVar36 & (uint)((ulonglong)dVar31 >> 0x20);
  auVar33._8_4_ = ~(uint)uVar11 & SUB84(dVar69,0);
  auVar33._12_4_ = ~uVar39 & (uint)((ulonglong)dVar69 >> 0x20);
  auVar13 = divpd(auVar47 | auVar61,auVar23 | auVar33);
  if (iVar5 != 0) {
    auVar27._0_8_ =
         (double)CONCAT44(_UNK_156221204 & uVar19 & DAT_156221240._4_4_,
                          _DAT_156221200 & uVar18 & (uint)DAT_156221240);
    auVar27._8_4_ = auVar26._8_4_ & DAT_156221240._8_4_;
    auVar27._12_4_ = auVar26._12_4_ & DAT_156221240._12_4_;
    auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ == DAT_156221240._8_8_);
    auVar28._0_8_ = -(ulonglong)(auVar27._0_8_ == (double)DAT_156221240);
    uVar6 = movmskpd(0,auVar28);
    uVar1 = SUB162(__2il0floatpacket_17 & in_XMM0,0xe) >> 4;
    uVar21 = SUB168(__2il0floatpacket_18 & in_XMM0,0) + __2il0floatpacket_19;
    uVar24 = SUB168(__2il0floatpacket_18 & in_XMM0,8) + _UNK_1561cdd28;
    uVar8 = (ulonglong)((SUB164(__2il0floatpacket_17 & in_XMM0,4) >> 0x14) * 0x18);
    uVar9 = (ulonglong)(((uint)uVar1 + (uint)uVar1 * 2) * 8);
    uVar10 = *(ulonglong *)(&DAT_156214c10 + uVar9);
    auVar2._4_8_ = auVar13._8_8_ ^
                   auVar70._8_8_ << 0x3f ^ (ulonglong)(~_UNK_15622120c & uVar7) << 0x20;
    auVar2._0_4_ = (int)(*(ulonglong *)(&DAT_156214c10 + uVar8) >> 0x20);
    uVar32 = auVar2._0_8_;
    auVar14._0_8_ = uVar32 << 0x20;
    auVar14._8_4_ = (int)uVar10;
    auVar14._12_4_ = (int)(uVar10 >> 0x20);
    uVar22 = uVar21 & __2il0floatpacket_20;
    uVar25 = uVar24 & _UNK_1561cdd38;
    uVar11 = *(ulonglong *)(&DAT_156214c08 + uVar9);
    auVar3._4_8_ = dVar69;
    auVar3._0_4_ = (int)(*(ulonglong *)(&DAT_156214c08 + uVar8) >> 0x20);
    uVar60 = auVar3._0_8_;
    auVar65._0_8_ = uVar60 << 0x20;
    auVar65._8_4_ = (int)uVar11;
    auVar65._12_4_ = (int)(uVar11 >> 0x20);
    uVar59 = *(ulonglong *)(&DAT_156214c08 + uVar8) & __2il0floatpacket_20;
    uVar52 = (uVar22 & 0xffffffff) * (uVar59 & 0xffffffff);
    uVar55 = (uVar25 & 0xffffffff) * (uVar11 & _UNK_1561cdd38 & 0xffffffff);
    uVar17 = (auVar14._8_8_ >> 0x20) * (uVar25 & 0xffffffff) >> 0x20;
    uVar36 = (uint)(uVar21 >> 0x20);
    uVar39 = (uint)(uVar24 >> 0x20);
    uVar57 = (uVar22 & 0xffffffff) * (uVar60 & 0xffffffff);
    uVar58 = (uVar25 & 0xffffffff) * (auVar65._8_8_ >> 0x20);
    uVar49 = __2il0floatpacket_20 & *(ulonglong *)((longlong)&__common_dtan_reduction_data + uVar8);
    uVar51 = _UNK_1561cdd38 & *(ulonglong *)((longlong)&__common_dtan_reduction_data + uVar9);
    uVar46 = ((*(ulonglong *)(&DAT_156214c10 + uVar8) & __2il0floatpacket_20 & 0xffffffff) *
              (ulonglong)uVar36 >> 0x20) +
             (__2il0floatpacket_20 & uVar52) +
             (uVar21 >> 0x20) * (uVar32 & 0xffffffff) +
             ((uVar32 & 0xffffffff) * (uVar22 & 0xffffffff) >> 0x20);
    uVar48 = ((uVar10 & _UNK_1561cdd38 & 0xffffffff) * (ulonglong)uVar39 >> 0x20) +
             (_UNK_1561cdd38 & uVar55) + (uVar24 >> 0x20) * (auVar14._8_8_ >> 0x20) + uVar17;
    uVar32 = (uVar22 & 0xffffffff) * (uVar49 & 0xffffffff);
    uVar21 = (uVar25 & 0xffffffff) * (uVar51 & 0xffffffff);
    auVar4._4_8_ = uVar17;
    auVar4._0_4_ = (int)(uVar46 >> 0x20);
    auVar15._0_8_ = auVar4._0_8_ << 0x20;
    auVar15._8_4_ = (int)uVar48;
    auVar15._12_4_ = (int)(uVar48 >> 0x20);
    uVar10 = (auVar4._0_8_ & 0xffffffff) +
             (__2il0floatpacket_20 & uVar57) +
             (uVar59 & 0xffffffff) * (ulonglong)uVar36 + (uVar52 >> 0x20);
    uVar11 = (auVar15._8_8_ >> 0x20) +
             (_UNK_1561cdd38 & uVar58) +
             (uVar11 & _UNK_1561cdd38 & 0xffffffff) * (ulonglong)uVar39 + (uVar55 >> 0x20);
    uVar60 = (uVar10 >> 0x20) +
             (__2il0floatpacket_20 & uVar32) +
             (uVar60 & 0xffffffff) * (ulonglong)uVar36 + (uVar57 >> 0x20);
    uVar17 = (uVar11 >> 0x20) +
             (_UNK_1561cdd38 & uVar21) +
             (auVar65._8_8_ >> 0x20) * (ulonglong)uVar39 + (uVar58 >> 0x20);
    uVar32 = ((uVar60 >> 0x20) +
              ((uVar22 & 0xffffffff) *
               (*(ulonglong *)((longlong)&__common_dtan_reduction_data + uVar8) >> 0x20) &
              __2il0floatpacket_20) + (ulonglong)uVar36 * (uVar49 & 0xffffffff) + (uVar32 >> 0x20)
             << 0x20) + (uVar60 & __2il0floatpacket_20);
    uVar60 = ((uVar17 >> 0x20) +
              ((uVar25 & 0xffffffff) *
               (*(ulonglong *)((longlong)&__common_dtan_reduction_data + uVar9) >> 0x20) &
              _UNK_1561cdd38) + (uVar24 >> 0x20) * (uVar51 & 0xffffffff) + (uVar21 >> 0x20) << 0x20)
             + (uVar17 & _UNK_1561cdd38);
    uVar10 = (uVar10 << 0x20) + (uVar46 & __2il0floatpacket_20);
    uVar11 = (uVar11 << 0x20) + (uVar48 & _UNK_1561cdd38);
    auVar50 = __2il0floatpacket_21 & in_XMM0;
    auVar34._0_8_ = uVar32 >> 0xc;
    auVar34._8_8_ = uVar60 >> 0xc;
    auVar34 = auVar34 | __2il0floatpacket_22 ^ auVar50;
    dVar31 = auVar34._0_8_;
    dVar68 = __2il0floatpacket_23 + dVar31;
    dVar37 = auVar34._8_8_;
    dVar69 = _UNK_1561cdd68 + dVar37;
    auVar66._8_4_ = SUB84(dVar69,0);
    auVar66._0_8_ = dVar68;
    auVar66._12_4_ = (int)((ulonglong)dVar69 >> 0x20);
    auVar40._0_8_ = (__2il0floatpacket_27 & uVar32) << 0x28;
    auVar40._8_8_ = (_UNK_1561cdda8 & uVar60) << 0x28;
    auVar16._0_8_ = uVar10 >> 0x18;
    auVar16._8_8_ = uVar11 >> 0x18;
    auVar47 = __2il0floatpacket_24 ^ auVar50;
    auVar50 = auVar50 ^ __2il0floatpacket_26;
    auVar44._0_8_ = (__2il0floatpacket_25 & uVar10) << 0x1c;
    auVar44._8_8_ = (_UNK_1561cdd88 & uVar11) << 0x1c;
    dVar31 = dVar31 - (dVar68 - __2il0floatpacket_23);
    dVar37 = dVar37 - (auVar66._8_8_ - _UNK_1561cdd68);
    auVar13 = auVar40 | auVar16 | auVar50;
    auVar54._8_4_ = SUB84(dVar37,0);
    auVar54._0_8_ = dVar31;
    auVar54._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
    dVar42 = auVar13._0_8_ - auVar50._0_8_;
    dVar45 = auVar13._8_8_ - auVar50._8_8_;
    dVar53 = dVar31 + dVar42;
    dVar56 = auVar54._8_8_ + dVar45;
    auVar41._0_8_ = dVar42 + (dVar31 - dVar53);
    auVar41._8_8_ = dVar45 + (dVar37 - dVar56);
    auVar71._0_8_ =
         (double)CONCAT44(_UNK_1561cdde4 & (uint)((ulonglong)dVar53 >> 0x20),
                          _2il0floatpacket_31 & SUB84(dVar53,0));
    auVar71._8_4_ = _UNK_1561cdde8 & SUB84(dVar56,0);
    auVar71._12_4_ = _UNK_1561cddec & (uint)((ulonglong)dVar56 >> 0x20);
    dVar72 = auVar71._8_8_;
    dVar31 = __2il0floatpacket_29 * (dVar53 - auVar71._0_8_) + auVar71._0_8_ * __2il0floatpacket_30
             + ((SUB168(auVar44 | auVar47,0) - auVar47._0_8_) + auVar41._0_8_) *
               __2il0floatpacket_28 + __2il0floatpacket_30 * (dVar53 - auVar71._0_8_);
    dVar37 = _UNK_1561cddc8 * (dVar56 - dVar72) + dVar72 * _UNK_1561cddd8 +
             ((SUB168(auVar44 | auVar47,8) - auVar47._8_8_) + auVar41._8_8_) * _UNK_1561cddb8 +
             _UNK_1561cddd8 * (dVar56 - dVar72);
    auVar62._8_4_ = SUB84(dVar37,0);
    auVar62._0_8_ = dVar31;
    auVar62._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
    dVar42 = dVar31 + __2il0floatpacket_29 * auVar71._0_8_;
    dVar45 = auVar62._8_8_ + _UNK_1561cddc8 * dVar72;
    auVar29._0_8_ = (double)CONCAT44(_UNK_1561cddf4 & uVar19,_2il0floatpacket_32 & uVar18);
    auVar29._8_4_ = _UNK_1561cddf8 & uVar20;
    auVar29._12_4_ = _UNK_1561cddfc & uVar7;
    uVar11 = -(ulonglong)(_UNK_1561cde08 < auVar29._8_8_);
    lVar12 = -(ulonglong)(auVar29._8_8_ <= _UNK_1561cde08);
    dVar37 = dVar37 + (_UNK_1561cddc8 * dVar72 - dVar45);
    auVar30._0_4_ = (uint)-(ulonglong)(auVar29._0_8_ <= __2il0floatpacket_33) & uVar18;
    auVar30._4_4_ = (uint)(-(ulonglong)(auVar29._0_8_ <= __2il0floatpacket_33) >> 0x20) & uVar19;
    auVar30._8_4_ = (uint)lVar12 & uVar20;
    auVar30._12_4_ = (uint)((ulonglong)lVar12 >> 0x20) & uVar7;
    auVar63._0_8_ = (ulonglong)dVar42 & -(ulonglong)(__2il0floatpacket_33 < auVar29._0_8_);
    uVar10 = uVar11 & (ulonglong)dVar45;
    auVar63._8_4_ = (undefined4)uVar10;
    auVar63._12_4_ = (undefined4)(uVar10 >> 0x20);
    auVar67._0_8_ =
         (double)((ulonglong)(dVar31 + (__2il0floatpacket_29 * auVar71._0_8_ - dVar42)) &
                 -(ulonglong)(__2il0floatpacket_33 < auVar29._0_8_));
    auVar67._8_4_ = (uint)uVar11 & SUB84(dVar37,0);
    auVar67._12_4_ = (uint)(uVar11 >> 0x20) & (uint)((ulonglong)dVar37 >> 0x20);
    auVar35._0_8_ =
         CONCAT44((float)(*(double *)
                           (&DAT_156221400 +
                           (uint)(ushort)(SUB82(dVar69,0) & (ushort)_UNK_1561cde18 &
                                         (ushort)_UNK_1561cde28) * 0x68) -
                         (SUB168(auVar30 | auVar63,8) + auVar67._8_8_)),
                  (float)(*(double *)
                           (&DAT_156221400 +
                           (SUB84(dVar68,0) & (uint)__2il0floatpacket_34 &
                           (uint)__2il0floatpacket_35) * 0x68) -
                         (SUB168(auVar30 | auVar63,0) + auVar67._0_8_)));
    auVar35._8_8_ = auVar35._0_8_;
    rcpps(auVar41,auVar35);
  }
  if (uVar6 != 0) {
    uVar7 = 0;
    do {
      if ((uVar6 >> (uVar7 & 0x1f) & 1) != 0) {
        __common_dtan_cout_rare();
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < 2);
  }
  return;
}


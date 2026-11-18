// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __vdecl_cos2 @ 15015c1e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __vdecl_cos2(void)

{
  ushort uVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined4 in_EAX;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar10;
  uint uVar11;
  undefined1 in_XMM0 [16];
  uint uVar12;
  undefined1 auVar9 [16];
  uint uVar13;
  ulonglong uVar14;
  uint uVar20;
  uint uVar21;
  uint uVar24;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulonglong uVar22;
  undefined1 auVar17 [16];
  ulonglong uVar23;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 uVar25;
  undefined4 uVar26;
  double dVar27;
  double dVar31;
  uint uVar33;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  ulonglong uVar32;
  undefined1 auVar30 [16];
  double dVar34;
  ulonglong uVar38;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  ulonglong uVar48;
  ulonglong uVar49;
  ulonglong uVar51;
  ulonglong uVar52;
  double dVar53;
  undefined1 auVar50 [16];
  double dVar54;
  ulonglong uVar55;
  ulonglong uVar57;
  undefined1 auVar56 [16];
  double dVar58;
  ulonglong uVar59;
  double dVar60;
  double dVar61;
  double dVar62;
  double dVar65;
  ulonglong uVar66;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double dVar67;
  double dVar68;
  double dVar70;
  ulonglong uVar71;
  undefined1 auVar72 [16];
  ulonglong uVar73;
  ulonglong uVar74;
  double dVar75;
  ulonglong uVar77;
  undefined1 auVar76 [16];
  double dVar78;
  ulonglong uVar79;
  ulonglong uVar80;
  double dVar69;
  
  if (__isa_available < 2) {
    __sse2_cos2__16();
    return;
  }
  uVar5 = in_XMM0._0_4_;
  uVar10 = in_XMM0._4_4_;
  uVar11 = in_XMM0._8_4_;
  uVar12 = in_XMM0._12_4_;
  uVar6 = 0;
  auVar39._0_8_ = (double)CONCAT44(uVar10 & _UNK_156204b84,uVar5 & __common_dcos_data);
  auVar39._8_4_ = uVar11 & _UNK_156204b88;
  auVar39._12_4_ = uVar12 & _UNK_156204b8c;
  dVar27 = _DAT_156204c00 - auVar39._0_8_;
  dVar31 = _UNK_156204c08 - auVar39._8_8_;
  uVar13 = __common_dcos_data & SUB84(dVar27,0);
  uVar20 = _UNK_156204b84 & (uint)((ulonglong)dVar27 >> 0x20);
  uVar21 = _UNK_156204b88 & SUB84(dVar31,0);
  uVar24 = _UNK_156204b8c & (uint)((ulonglong)dVar31 >> 0x20);
  auVar30._8_8_ = -(ulonglong)(_UNK_156204c08 == dVar31);
  auVar30._0_8_ = -(ulonglong)(_DAT_156204c00 == dVar27);
  dVar58 = _DAT_156204c40 * dVar27 + _DAT_156204c80;
  dVar65 = _UNK_156204c48 * dVar31 + _UNK_156204c88;
  lVar7 = -(ulonglong)(_DAT_156204bc0 < (double)CONCAT44(uVar20,uVar13));
  lVar8 = -(ulonglong)(_UNK_156204bc8 < (double)CONCAT44(uVar24,uVar21));
  uVar25 = (undefined4)lVar8;
  uVar26 = (undefined4)((ulonglong)lVar8 >> 0x20);
  auVar35._8_4_ = SUB84(dVar65,0);
  auVar35._0_8_ = dVar58;
  auVar35._12_4_ = (int)((ulonglong)dVar65 >> 0x20);
  auVar29._8_4_ = uVar25;
  auVar29._0_8_ = lVar7;
  auVar29._12_4_ = uVar26;
  iVar4 = movmskpd(in_EAX,auVar29);
  dVar27 = _DAT_156204cc0 - (dVar58 - _DAT_156204c80);
  dVar31 = _UNK_156204cc8 - (auVar35._8_8_ - _UNK_156204c88);
  dVar27 = (_DAT_156204d00 * dVar27 - auVar39._0_8_) + _DAT_156204d40 * dVar27 +
           _DAT_156204d80 * dVar27 + _DAT_156204dc0 * dVar27;
  dVar31 = (_UNK_156204d08 * dVar31 - auVar39._8_8_) + _UNK_156204d48 * dVar31 +
           _UNK_156204d88 * dVar31 + _UNK_156204dc8 * dVar31;
  auVar64._8_4_ = SUB84(dVar31,0);
  auVar72._8_4_ = auVar64._8_4_;
  auVar72._0_8_ = dVar27;
  uVar33 = (uint)((ulonglong)dVar31 >> 0x20);
  auVar72._12_4_ = uVar33;
  dVar70 = dVar27 * dVar27;
  dVar31 = auVar72._8_8_ * dVar31;
  auVar64._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar27 >> 0x20) ^
                        (uint)((ulonglong)((longlong)dVar58 << 0x3f) >> 0x20),SUB84(dVar27,0));
  auVar64._12_4_ = uVar33 ^ (uint)((ulonglong)((longlong)dVar65 << 0x3f) >> 0x20);
  auVar28._0_8_ =
       auVar64._0_8_ +
       ((((((_DAT_156205080 * dVar70 + _DAT_156205040) * dVar70 + _DAT_156205000) * dVar70 +
          _DAT_156204fc0) * dVar70 + _DAT_156204f80) * dVar70 + _DAT_156204f40) * dVar70 +
       _DAT_156204ec0) * dVar70 * auVar64._0_8_;
  auVar28._8_8_ =
       auVar64._8_8_ +
       ((((((_UNK_156205088 * dVar31 + _UNK_156205048) * dVar31 + _UNK_156205008) * dVar31 +
          _UNK_156204fc8) * dVar31 + _UNK_156204f88) * dVar31 + _UNK_156204f48) * dVar31 +
       _UNK_156204ec8) * dVar31 * auVar64._8_8_;
  auVar29 = blendvpd(auVar28,_DAT_1562050c0,auVar30);
  if (iVar4 != 0) {
    auVar15._0_8_ = (double)CONCAT44(uVar20 & DAT_156204880._4_4_,uVar13 & (uint)DAT_156204880);
    auVar15._8_4_ = uVar21 & DAT_156204880._8_4_;
    auVar15._12_4_ = uVar24 & DAT_156204880._12_4_;
    auVar16._8_8_ = -(ulonglong)(auVar15._8_8_ == DAT_156204880._8_8_);
    auVar16._0_8_ = -(ulonglong)(auVar15._0_8_ == (double)DAT_156204880);
    uVar6 = movmskpd(0,auVar16);
    uVar1 = SUB162(__2il0floatpacket_26 & in_XMM0,0xe) >> 4;
    uVar48 = SUB168(__2il0floatpacket_27 & in_XMM0,0) + __2il0floatpacket_28;
    uVar51 = SUB168(__2il0floatpacket_27 & in_XMM0,8) + _UNK_1561ca628;
    uVar55 = (ulonglong)((SUB164(__2il0floatpacket_26 & in_XMM0,4) >> 0x14) * 0x18);
    uVar23 = (ulonglong)(((uint)uVar1 + (uint)uVar1 * 2) * 8);
    uVar49 = uVar48 & __2il0floatpacket_29;
    uVar52 = uVar51 & _UNK_1561ca638;
    uVar14 = *(ulonglong *)(&DAT_1561f4610 + uVar23);
    uVar33 = (uint)(*(ulonglong *)(&DAT_1561f4610 + uVar55) >> 0x20);
    auVar3._4_4_ = (int)uVar14;
    auVar3._0_4_ = uVar33;
    auVar3._8_4_ = (int)(uVar14 >> 0x20);
    uVar21 = (uint)(*(ulonglong *)(&DAT_1561f4608 + uVar55) >> 0x20);
    uVar24 = (uint)(*(ulonglong *)(&DAT_1561f4608 + uVar23) >> 0x20);
    uVar13 = (uint)(uVar48 >> 0x20);
    uVar20 = (uint)(uVar51 >> 0x20);
    uVar74 = *(ulonglong *)(&DAT_1561f4608 + uVar55) & __2il0floatpacket_29;
    uVar77 = *(ulonglong *)(&DAT_1561f4608 + uVar23) & _UNK_1561ca638;
    uVar22 = (auVar3._4_8_ >> 0x20) * (uVar52 & 0xffffffff) >> 0x20;
    uVar59 = (uVar49 & 0xffffffff) * (uVar74 & 0xffffffff);
    uVar66 = (uVar52 & 0xffffffff) * (uVar77 & 0xffffffff);
    uVar71 = (uVar49 & 0xffffffff) * (ulonglong)uVar21;
    uVar73 = (uVar52 & 0xffffffff) * (ulonglong)uVar24;
    uVar57 = __2il0floatpacket_29 & *(ulonglong *)((longlong)&__common_dcos_reduction_data + uVar55)
    ;
    uVar32 = _UNK_1561ca638 & *(ulonglong *)((longlong)&__common_dcos_reduction_data + uVar23);
    uVar79 = ((*(ulonglong *)(&DAT_1561f4610 + uVar55) & __2il0floatpacket_29 & 0xffffffff) *
              (ulonglong)uVar13 >> 0x20) +
             (__2il0floatpacket_29 & uVar59) +
             (uVar48 >> 0x20) * (ulonglong)uVar33 +
             ((ulonglong)uVar33 * (uVar49 & 0xffffffff) >> 0x20);
    uVar80 = ((uVar14 & _UNK_1561ca638 & 0xffffffff) * (ulonglong)uVar20 >> 0x20) +
             (_UNK_1561ca638 & uVar66) + (uVar51 >> 0x20) * (auVar3._4_8_ >> 0x20) + uVar22;
    uVar48 = (uVar49 & 0xffffffff) * (uVar57 & 0xffffffff);
    uVar38 = (uVar52 & 0xffffffff) * (uVar32 & 0xffffffff);
    auVar2._4_8_ = uVar22;
    auVar2._0_4_ = (int)(uVar79 >> 0x20);
    auVar17._0_8_ = auVar2._0_8_ << 0x20;
    auVar17._8_4_ = (int)uVar80;
    auVar17._12_4_ = (int)(uVar80 >> 0x20);
    uVar14 = (auVar2._0_8_ & 0xffffffff) +
             (__2il0floatpacket_29 & uVar71) +
             (uVar74 & 0xffffffff) * (ulonglong)uVar13 + (uVar59 >> 0x20);
    uVar22 = (auVar17._8_8_ >> 0x20) +
             (_UNK_1561ca638 & uVar73) +
             (uVar77 & 0xffffffff) * (ulonglong)uVar20 + (uVar66 >> 0x20);
    uVar59 = (uVar14 >> 0x20) +
             (__2il0floatpacket_29 & uVar48) +
             (ulonglong)uVar21 * (ulonglong)uVar13 + (uVar71 >> 0x20);
    uVar66 = (uVar22 >> 0x20) +
             (_UNK_1561ca638 & uVar38) + (ulonglong)uVar24 * (ulonglong)uVar20 + (uVar73 >> 0x20);
    uVar55 = ((uVar59 >> 0x20) +
              ((uVar49 & 0xffffffff) *
               (*(ulonglong *)((longlong)&__common_dcos_reduction_data + uVar55) >> 0x20) &
              __2il0floatpacket_29) + (ulonglong)uVar13 * (uVar57 & 0xffffffff) + (uVar48 >> 0x20)
             << 0x20) + (uVar59 & __2il0floatpacket_29);
    uVar57 = ((uVar66 >> 0x20) +
              ((uVar52 & 0xffffffff) *
               (*(ulonglong *)((longlong)&__common_dcos_reduction_data + uVar23) >> 0x20) &
              _UNK_1561ca638) + (uVar51 >> 0x20) * (uVar32 & 0xffffffff) + (uVar38 >> 0x20) << 0x20)
             + (uVar66 & _UNK_1561ca638);
    auVar35 = __2il0floatpacket_30 & in_XMM0;
    auVar42._0_8_ = uVar55 >> 0xc;
    auVar42._8_8_ = uVar57 >> 0xc;
    auVar42 = auVar42 | __2il0floatpacket_31 ^ auVar35;
    dVar58 = auVar42._0_8_;
    dVar70 = __2il0floatpacket_32 + dVar58;
    dVar65 = auVar42._8_8_;
    dVar53 = _UNK_1561ca668 + dVar65;
    uVar14 = (uVar14 << 0x20) + (uVar79 & __2il0floatpacket_29);
    uVar23 = (uVar22 << 0x20) + (uVar80 & _UNK_1561ca638);
    auVar40._8_4_ = SUB84(dVar53,0);
    auVar40._0_8_ = dVar70;
    auVar40._12_4_ = (int)((ulonglong)dVar53 >> 0x20);
    auVar9._8_4_ = uVar25;
    auVar9._0_8_ = lVar7;
    auVar9._12_4_ = uVar26;
    auVar63._0_8_ = (__2il0floatpacket_37 & uVar55) << 0x28;
    auVar63._8_8_ = (_UNK_1561ca6b8 & uVar57) << 0x28;
    auVar18._0_8_ = uVar14 >> 0x18;
    auVar18._8_8_ = uVar23 >> 0x18;
    auVar30 = __2il0floatpacket_34 ^ auVar35;
    auVar35 = auVar35 ^ __2il0floatpacket_36;
    auVar45._0_8_ = (__2il0floatpacket_35 & uVar14) << 0x1c;
    auVar45._8_8_ = (_UNK_1561ca698 & uVar23) << 0x1c;
    dVar58 = dVar58 - (dVar70 - __2il0floatpacket_32);
    dVar65 = dVar65 - (auVar40._8_8_ - _UNK_1561ca668);
    auVar64 = auVar63 | auVar18 | auVar35;
    auVar19._8_4_ = SUB84(dVar65,0);
    auVar19._0_8_ = dVar58;
    auVar19._12_4_ = (int)((ulonglong)dVar65 >> 0x20);
    dVar60 = auVar64._0_8_ - auVar35._0_8_;
    dVar67 = auVar64._8_8_ - auVar35._8_8_;
    dVar27 = dVar58 + dVar60;
    dVar31 = auVar19._8_8_ + dVar67;
    auVar56._0_8_ =
         (double)CONCAT44(_UNK_1561ca6f4 & (uint)((ulonglong)dVar27 >> 0x20),
                          _2il0floatpacket_41 & SUB84(dVar27,0));
    auVar56._8_4_ = _UNK_1561ca6f8 & SUB84(dVar31,0);
    auVar56._12_4_ = _UNK_1561ca6fc & (uint)((ulonglong)dVar31 >> 0x20);
    dVar34 = auVar56._8_8_;
    dVar60 = __2il0floatpacket_39 * (dVar27 - auVar56._0_8_) + auVar56._0_8_ * __2il0floatpacket_40
             + ((SUB168(auVar45 | auVar30,0) - auVar30._0_8_) + dVar60 + (dVar58 - dVar27)) *
               __2il0floatpacket_38 + __2il0floatpacket_40 * (dVar27 - auVar56._0_8_);
    dVar65 = _UNK_1561ca6d8 * (dVar31 - dVar34) + dVar34 * _UNK_1561ca6e8 +
             ((SUB168(auVar45 | auVar30,8) - auVar30._8_8_) + dVar67 + (dVar65 - dVar31)) *
             _UNK_1561ca6c8 + _UNK_1561ca6e8 * (dVar31 - dVar34);
    auVar46._8_4_ = SUB84(dVar65,0);
    auVar46._0_8_ = dVar60;
    auVar46._12_4_ = (int)((ulonglong)dVar65 >> 0x20);
    auVar43._0_8_ = (double)CONCAT44(_UNK_1561ca704 & uVar10,_2il0floatpacket_42 & uVar5);
    auVar43._8_4_ = _UNK_1561ca708 & uVar11;
    auVar43._12_4_ = _UNK_1561ca70c & uVar12;
    dVar31 = dVar60 + __2il0floatpacket_39 * auVar56._0_8_;
    dVar58 = auVar46._8_8_ + _UNK_1561ca6d8 * dVar34;
    uVar23 = -(ulonglong)(_UNK_1561ca718 < auVar43._8_8_);
    lVar7 = -(ulonglong)(auVar43._8_8_ <= _UNK_1561ca718);
    uVar55 = (ulonglong)((SUB84(dVar70,0) & _2il0floatpacket_33) << 5);
    auVar44._0_4_ = (uint)-(ulonglong)(auVar43._0_8_ <= __2il0floatpacket_43) & uVar5;
    auVar44._4_4_ = (uint)(-(ulonglong)(auVar43._0_8_ <= __2il0floatpacket_43) >> 0x20) & uVar10;
    auVar44._8_4_ = (uint)lVar7 & uVar11;
    auVar44._12_4_ = (uint)((ulonglong)lVar7 >> 0x20) & uVar12;
    auVar47._0_8_ = -(ulonglong)(__2il0floatpacket_43 < auVar43._0_8_) & (ulonglong)dVar31;
    uVar14 = uVar23 & (ulonglong)dVar58;
    auVar47._8_4_ = (undefined4)uVar14;
    auVar47._12_4_ = (undefined4)(uVar14 >> 0x20);
    uVar14 = (ulonglong)(ushort)(SUB82(dVar53,0) & (ushort)_UNK_1561ca678);
    lVar7 = uVar14 * 0x20;
    dVar61 = SUB168(auVar44 | auVar47,0);
    dVar69 = SUB168(auVar44 | auVar47,8);
    dVar62 = dVar61 * *(double *)(&DAT_156200808 + uVar55);
    dVar68 = dVar69 * *(double *)(&DAT_156200808 + lVar7);
    dVar27 = *(double *)(&DAT_156200810 + uVar55);
    auVar41._0_8_ =
         (double)((ulonglong)(dVar60 + (__2il0floatpacket_39 * auVar56._0_8_ - dVar31)) &
                 -(ulonglong)(__2il0floatpacket_43 < auVar43._0_8_));
    uVar23 = (ulonglong)(dVar65 + (_UNK_1561ca6d8 * dVar34 - dVar58)) & uVar23;
    auVar41._8_4_ = (undefined4)uVar23;
    auVar41._12_4_ = (undefined4)(uVar23 >> 0x20);
    dVar31 = *(double *)(&DAT_156200810 + lVar7);
    dVar58 = dVar61 * *(double *)((longlong)&__common_dcos_data_ha + uVar55);
    dVar65 = dVar69 * *(double *)(&__common_dcos_data_ha + uVar14 * 8);
    dVar70 = *(double *)((longlong)&__common_dcos_data_ha + uVar55) +
             *(double *)(&DAT_156200808 + uVar55);
    dVar53 = *(double *)(&__common_dcos_data_ha + uVar14 * 8) + *(double *)(&DAT_156200808 + lVar7);
    auVar76._8_4_ = SUB84(dVar31,0);
    auVar76._0_8_ = dVar27;
    uVar25 = (undefined4)((ulonglong)dVar31 >> 0x20);
    auVar76._12_4_ = uVar25;
    auVar50._8_4_ = SUB84(dVar31,0);
    auVar50._0_8_ = dVar27;
    auVar50._12_4_ = uVar25;
    dVar75 = dVar27 + dVar62;
    dVar78 = auVar76._8_8_ + dVar68;
    auVar36._8_4_ = SUB84(dVar78,0);
    auVar36._0_8_ = dVar75;
    auVar36._12_4_ = (int)((ulonglong)dVar78 >> 0x20);
    dVar34 = dVar75 + dVar58;
    dVar60 = auVar36._8_8_ + dVar65;
    dVar67 = dVar61 * dVar61;
    dVar54 = dVar69 * dVar69;
    auVar37._0_8_ =
         dVar34 + dVar62 + (dVar27 - dVar75) + dVar58 + (dVar75 - dVar34) +
                  (_DAT_156204a80 * dVar67 + _DAT_156204a40) * dVar67 * dVar61 * dVar70 +
                  dVar67 * ((_DAT_156204b40 * dVar67 + _DAT_156204b00) * dVar67 + _DAT_156204ac0) *
                  dVar27 + *(double *)(&DAT_156200818 + uVar55) +
                           auVar41._0_8_ * (dVar70 - dVar61 * dVar27);
    auVar37._8_8_ =
         dVar60 + dVar68 + (auVar50._8_8_ - dVar78) + dVar65 + (dVar78 - dVar60) +
                  (_UNK_156204a88 * dVar54 + _UNK_156204a48) * dVar54 * dVar69 * dVar53 +
                  dVar54 * ((_UNK_156204b48 * dVar54 + _UNK_156204b08) * dVar54 + _UNK_156204ac8) *
                  dVar31 + *(double *)(&DAT_156200818 + lVar7) +
                           auVar41._8_8_ * (dVar53 - dVar69 * dVar31);
    blendvpd(auVar29,auVar37,auVar9);
  }
  if (uVar6 != 0) {
    uVar5 = 0;
    do {
      if ((uVar6 >> (uVar5 & 0x1f) & 1) != 0) {
        __common_dcos_cout_rare();
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < 2);
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __vdecl_tan2 @ 15015c310

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __vdecl_tan2(void)

{
  ushort uVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined4 in_ECX;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar13;
  undefined1 in_XMM0 [16];
  uint uVar14;
  undefined1 auVar12 [16];
  longlong lVar17;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  uint uVar18;
  uint uVar24;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  double dVar30;
  undefined4 uVar33;
  undefined1 auVar28 [16];
  ulonglong uVar31;
  ulonglong uVar32;
  undefined1 auVar29 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined4 uVar41;
  double dVar42;
  undefined1 auVar44 [16];
  ulonglong uVar43;
  double dVar48;
  ulonglong uVar49;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  ulonglong uVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar54;
  undefined1 auVar53 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  ulonglong uVar58;
  ulonglong uVar61;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar62 [16];
  ulonglong uVar63;
  ulonglong uVar64;
  double dVar65;
  undefined1 auVar66 [16];
  ulonglong uVar68;
  undefined1 auVar67 [16];
  double dVar69;
  double dVar70;
  ulonglong uVar71;
  undefined1 auVar72 [16];
  double dVar74;
  ulonglong uVar75;
  undefined1 auVar73 [16];
  uint uVar78;
  ulonglong uVar76;
  undefined1 auVar77 [16];
  
  if (__isa_available < 2) {
    __sse2_tan2__16();
    return;
  }
  uVar7 = in_XMM0._0_4_;
  uVar8 = in_XMM0._4_4_;
  uVar13 = in_XMM0._8_4_;
  uVar14 = in_XMM0._12_4_;
  uVar6 = 0;
  auVar19._0_8_ = (double)CONCAT44(uVar8 & _UNK_156221204,uVar7 & _DAT_156221200);
  auVar19._8_4_ = uVar13 & _UNK_156221208;
  auVar19._12_4_ = uVar14 & _UNK_15622120c;
  auVar45._8_4_ = auVar19._8_4_;
  auVar45._0_8_ = auVar19._0_8_;
  auVar45._12_4_ = auVar19._12_4_;
  dVar25 = _DAT_156227c80 * auVar19._0_8_ + _DAT_156221280;
  dVar30 = _UNK_156227c88 * auVar19._8_8_ + _UNK_156221288;
  auVar44._8_4_ = SUB84(dVar30,0);
  auVar44._0_8_ = dVar25;
  uVar33 = (undefined4)((ulonglong)dVar30 >> 0x20);
  auVar44._12_4_ = uVar33;
  auVar77._8_4_ = SUB84(dVar30,0);
  auVar77._0_8_ = dVar25;
  auVar77._12_4_ = uVar33;
  dVar42 = dVar25 - _DAT_156221280;
  dVar48 = auVar44._8_8_ - _UNK_156221288;
  uVar10 = -(ulonglong)((double)((longlong)dVar25 << 0x3e) != 0.0);
  uVar11 = -(ulonglong)((double)((longlong)dVar30 << 0x3e) != 0.0);
  uVar18 = (uint)(uVar10 >> 0x20);
  uVar24 = (uint)(uVar11 >> 0x20);
  dVar42 = ((auVar19._0_8_ - _DAT_156227cc0 * dVar42) - _DAT_156227d00 * dVar42) -
           _DAT_156227d40 * dVar42;
  dVar48 = ((auVar45._8_8_ - _UNK_156227cc8 * dVar48) - _UNK_156227d08 * dVar48) -
           _UNK_156227d48 * dVar48;
  auVar72._8_4_ = SUB84(dVar48,0);
  auVar72._0_8_ = dVar42;
  auVar72._12_4_ = (int)((ulonglong)dVar48 >> 0x20);
  dVar70 = dVar42 * dVar42;
  dVar74 = auVar72._8_8_ * dVar48;
  dVar30 = (double)CONCAT44(auVar19._12_4_,auVar19._8_4_);
  uVar33 = (undefined4)-(ulonglong)(_UNK_156227c08 < dVar30);
  uVar41 = (undefined4)(-(ulonglong)(_UNK_156227c08 < dVar30) >> 0x20);
  auVar35._8_4_ = uVar33;
  auVar35._0_8_ = -(ulonglong)(_DAT_156227c00 < auVar19._0_8_);
  auVar35._12_4_ = uVar41;
  iVar5 = movmskpd(in_ECX,auVar35);
  dVar30 = ((_UNK_156227f08 * dVar74 + _UNK_156227ec8) * dVar74 + _UNK_156227e88) * dVar74 * dVar48;
  dVar42 = dVar42 + ((_DAT_156227f00 * dVar70 + _DAT_156227ec0) * dVar70 + _DAT_156227e80) * dVar70
                    * dVar42;
  dVar48 = dVar48 + dVar30;
  dVar70 = dVar70 * ((_DAT_156228000 * dVar70 + _DAT_156227fc0) * dVar70 + _DAT_156227f80) +
           _DAT_156227f40;
  dVar74 = dVar74 * ((_UNK_156228008 * dVar74 + _UNK_156227fc8) * dVar74 + _UNK_156227f88) +
           _UNK_156227f48;
  auVar34._0_4_ = ~(uint)uVar10 & SUB84(dVar42,0);
  auVar34._4_4_ = ~uVar18 & (uint)((ulonglong)dVar42 >> 0x20);
  auVar34._8_4_ = ~(uint)uVar11 & SUB84(dVar48,0);
  auVar34._12_4_ = ~uVar24 & (uint)((ulonglong)dVar48 >> 0x20);
  auVar66._0_8_ = uVar10 & (ulonglong)dVar70;
  auVar66._8_4_ = (undefined4)((ulonglong)dVar74 & uVar11);
  auVar66._12_4_ = (undefined4)(((ulonglong)dVar74 & uVar11) >> 0x20);
  auVar59._0_8_ = (ulonglong)dVar42 & uVar10;
  auVar59._8_4_ = (undefined4)((ulonglong)dVar48 & uVar11);
  auVar59._12_4_ = (undefined4)(((ulonglong)dVar48 & uVar11) >> 0x20);
  auVar28._0_4_ = ~(uint)uVar10 & SUB84(dVar70,0);
  auVar28._4_4_ = ~uVar18 & (uint)((ulonglong)dVar70 >> 0x20);
  auVar28._8_4_ = ~(uint)uVar11 & SUB84(dVar74,0);
  auVar28._12_4_ = ~uVar24 & (uint)((ulonglong)dVar74 >> 0x20);
  auVar35 = divpd(auVar34 | auVar66,auVar59 | auVar28);
  auVar36._0_4_ = auVar35._0_4_ ^ ~_DAT_156221200 & uVar7;
  auVar36._4_4_ =
       auVar35._4_4_ ^
       (uint)((ulonglong)((longlong)dVar25 << 0x3f) >> 0x20) ^ ~_UNK_156221204 & uVar8;
  auVar36._8_4_ = auVar35._8_4_ ^ ~_UNK_156221208 & uVar13;
  auVar36._12_4_ =
       auVar35._12_4_ ^
       (uint)((ulonglong)(auVar77._8_8_ << 0x3f) >> 0x20) ^ ~_UNK_15622120c & uVar14;
  if (iVar5 != 0) {
    auVar20._0_8_ =
         (double)CONCAT44(uVar8 & _UNK_156221204 & DAT_156221240._4_4_,
                          uVar7 & _DAT_156221200 & (uint)DAT_156221240);
    auVar20._8_4_ = auVar19._8_4_ & DAT_156221240._8_4_;
    auVar20._12_4_ = auVar19._12_4_ & DAT_156221240._12_4_;
    uVar1 = SUB162(__2il0floatpacket_17 & in_XMM0,0xe) >> 4;
    auVar21._8_8_ = -(ulonglong)(auVar20._8_8_ == DAT_156221240._8_8_);
    auVar21._0_8_ = -(ulonglong)(auVar20._0_8_ == (double)DAT_156221240);
    uVar26 = SUB168(__2il0floatpacket_18 & in_XMM0,0) + __2il0floatpacket_19;
    uVar31 = SUB168(__2il0floatpacket_18 & in_XMM0,8) + _UNK_1561cdf28;
    uVar6 = movmskpd(0,auVar21);
    uVar27 = uVar26 & __2il0floatpacket_20;
    uVar32 = uVar31 & _UNK_1561cdf38;
    uVar63 = (ulonglong)((SUB164(__2il0floatpacket_17 & in_XMM0,4) >> 0x14) * 0x18);
    uVar9 = (ulonglong)(((uint)uVar1 + (uint)uVar1 * 2) * 8);
    uVar10 = *(ulonglong *)(&DAT_156214c10 + uVar9);
    auVar2._4_8_ = dVar30;
    auVar2._0_4_ = (int)(*(ulonglong *)(&DAT_156214c10 + uVar63) >> 0x20);
    uVar50 = auVar2._0_8_;
    auVar62._0_8_ = uVar50 << 0x20;
    auVar62._8_4_ = (int)uVar10;
    auVar62._12_4_ = (int)(uVar10 >> 0x20);
    uVar11 = *(ulonglong *)(&DAT_156214c08 + uVar9);
    uVar78 = (uint)(*(ulonglong *)(&DAT_156214c08 + uVar63) >> 0x20);
    auVar4._4_4_ = (int)uVar11;
    auVar4._0_4_ = uVar78;
    auVar4._8_4_ = (int)(uVar11 >> 0x20);
    uVar18 = (uint)(uVar26 >> 0x20);
    uVar24 = (uint)(uVar31 >> 0x20);
    uVar76 = *(ulonglong *)(&DAT_156214c08 + uVar63) & __2il0floatpacket_20;
    uVar64 = (uVar27 & 0xffffffff) * (uVar76 & 0xffffffff);
    uVar68 = (uVar32 & 0xffffffff) * (uVar11 & _UNK_1561cdf38 & 0xffffffff);
    uVar71 = (uVar27 & 0xffffffff) * (ulonglong)uVar78;
    uVar75 = (uVar32 & 0xffffffff) * (auVar4._4_8_ >> 0x20);
    lVar17 = (_UNK_1561cdf38 & uVar68) +
             (uVar31 >> 0x20) * (auVar62._8_8_ >> 0x20) +
             ((auVar62._8_8_ >> 0x20) * (uVar32 & 0xffffffff) >> 0x20);
    uVar43 = __2il0floatpacket_20 & *(ulonglong *)((longlong)&__common_dtan_reduction_data + uVar63)
    ;
    uVar49 = _UNK_1561cdf38 & *(ulonglong *)((longlong)&__common_dtan_reduction_data + uVar9);
    uVar58 = ((*(ulonglong *)(&DAT_156214c10 + uVar63) & __2il0floatpacket_20 & 0xffffffff) *
              (ulonglong)uVar18 >> 0x20) +
             (__2il0floatpacket_20 & uVar64) +
             (uVar26 >> 0x20) * (uVar50 & 0xffffffff) +
             ((uVar50 & 0xffffffff) * (uVar27 & 0xffffffff) >> 0x20);
    uVar61 = ((uVar10 & _UNK_1561cdf38 & 0xffffffff) * (ulonglong)uVar24 >> 0x20) + lVar17;
    uVar50 = (uVar27 & 0xffffffff) * (uVar43 & 0xffffffff);
    uVar26 = (uVar32 & 0xffffffff) * (uVar49 & 0xffffffff);
    auVar3._4_8_ = lVar17;
    auVar3._0_4_ = (int)(uVar58 >> 0x20);
    auVar15._0_8_ = auVar3._0_8_ << 0x20;
    auVar15._8_4_ = (int)uVar61;
    auVar15._12_4_ = (int)(uVar61 >> 0x20);
    uVar10 = (auVar3._0_8_ & 0xffffffff) +
             (__2il0floatpacket_20 & uVar71) +
             (uVar76 & 0xffffffff) * (ulonglong)uVar18 + (uVar64 >> 0x20);
    uVar11 = (auVar15._8_8_ >> 0x20) +
             (_UNK_1561cdf38 & uVar75) +
             (uVar11 & _UNK_1561cdf38 & 0xffffffff) * (ulonglong)uVar24 + (uVar68 >> 0x20);
    uVar64 = (uVar10 >> 0x20) +
             (__2il0floatpacket_20 & uVar50) +
             (ulonglong)uVar78 * (ulonglong)uVar18 + (uVar71 >> 0x20);
    uVar68 = (uVar11 >> 0x20) +
             (_UNK_1561cdf38 & uVar26) +
             (auVar4._4_8_ >> 0x20) * (ulonglong)uVar24 + (uVar75 >> 0x20);
    uVar50 = ((uVar64 >> 0x20) +
              ((uVar27 & 0xffffffff) *
               (*(ulonglong *)((longlong)&__common_dtan_reduction_data + uVar63) >> 0x20) &
              __2il0floatpacket_20) + (ulonglong)uVar18 * (uVar43 & 0xffffffff) + (uVar50 >> 0x20)
             << 0x20) + (uVar64 & __2il0floatpacket_20);
    uVar63 = ((uVar68 >> 0x20) +
              ((uVar32 & 0xffffffff) *
               (*(ulonglong *)((longlong)&__common_dtan_reduction_data + uVar9) >> 0x20) &
              _UNK_1561cdf38) + (uVar31 >> 0x20) * (uVar49 & 0xffffffff) + (uVar26 >> 0x20) << 0x20)
             + (uVar68 & _UNK_1561cdf38);
    uVar10 = (uVar10 << 0x20) + (uVar58 & __2il0floatpacket_20);
    uVar11 = (uVar11 << 0x20) + (uVar61 & _UNK_1561cdf38);
    auVar45 = __2il0floatpacket_21 & in_XMM0;
    auVar51._0_8_ = uVar50 >> 0xc;
    auVar51._8_8_ = uVar63 >> 0xc;
    auVar51 = auVar51 | __2il0floatpacket_22 ^ auVar45;
    dVar25 = auVar51._0_8_;
    dVar48 = __2il0floatpacket_23 + dVar25;
    dVar74 = auVar51._8_8_;
    dVar70 = _UNK_1561cdf68 + dVar74;
    auVar55._8_4_ = SUB84(dVar70,0);
    auVar55._0_8_ = dVar48;
    auVar55._12_4_ = (int)((ulonglong)dVar70 >> 0x20);
    auVar22._0_8_ = (__2il0floatpacket_27 & uVar50) << 0x28;
    auVar22._8_8_ = (_UNK_1561cdfa8 & uVar63) << 0x28;
    auVar16._0_8_ = uVar10 >> 0x18;
    auVar16._8_8_ = uVar11 >> 0x18;
    auVar59 = __2il0floatpacket_24 ^ auVar45;
    auVar45 = auVar45 ^ __2il0floatpacket_26;
    auVar37._0_8_ = (__2il0floatpacket_25 & uVar10) << 0x1c;
    auVar37._8_8_ = (_UNK_1561cdf88 & uVar11) << 0x1c;
    dVar25 = dVar25 - (dVar48 - __2il0floatpacket_23);
    dVar74 = dVar74 - (auVar55._8_8_ - _UNK_1561cdf68);
    auVar35 = auVar22 | auVar16 | auVar45;
    auVar67._8_4_ = SUB84(dVar74,0);
    auVar67._0_8_ = dVar25;
    auVar67._12_4_ = (int)((ulonglong)dVar74 >> 0x20);
    dVar30 = auVar35._0_8_ - auVar45._0_8_;
    dVar42 = auVar35._8_8_ - auVar45._8_8_;
    dVar65 = dVar25 + dVar30;
    dVar69 = auVar67._8_8_ + dVar42;
    auVar52._0_8_ = dVar25 - dVar65;
    auVar52._8_8_ = dVar74 - dVar69;
    auVar73._0_8_ =
         (double)CONCAT44(_UNK_1561cdfe4 & (uint)((ulonglong)dVar65 >> 0x20),
                          _2il0floatpacket_31 & SUB84(dVar65,0));
    auVar73._8_4_ = _UNK_1561cdfe8 & SUB84(dVar69,0);
    auVar73._12_4_ = _UNK_1561cdfec & (uint)((ulonglong)dVar69 >> 0x20);
    dVar54 = auVar73._8_8_;
    dVar30 = __2il0floatpacket_29 * (dVar65 - auVar73._0_8_) + auVar73._0_8_ * __2il0floatpacket_30
             + ((SUB168(auVar37 | auVar59,0) - auVar59._0_8_) + dVar30 + auVar52._0_8_) *
               __2il0floatpacket_28 + __2il0floatpacket_30 * (dVar65 - auVar73._0_8_);
    dVar42 = _UNK_1561cdfc8 * (dVar69 - dVar54) + dVar54 * _UNK_1561cdfd8 +
             ((SUB168(auVar37 | auVar59,8) - auVar59._8_8_) + dVar42 + auVar52._8_8_) *
             _UNK_1561cdfb8 + _UNK_1561cdfd8 * (dVar69 - dVar54);
    auVar56._8_4_ = SUB84(dVar42,0);
    auVar56._0_8_ = dVar30;
    auVar56._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
    dVar25 = dVar30 + __2il0floatpacket_29 * auVar73._0_8_;
    dVar74 = auVar56._8_8_ + _UNK_1561cdfc8 * dVar54;
    auVar38._0_8_ = (double)CONCAT44(_UNK_1561cdff4 & uVar8,_2il0floatpacket_32 & uVar7);
    auVar38._8_4_ = _UNK_1561cdff8 & uVar13;
    auVar38._12_4_ = _UNK_1561cdffc & uVar14;
    uVar11 = -(ulonglong)(_UNK_1561ce008 < auVar38._8_8_);
    lVar17 = -(ulonglong)(auVar38._8_8_ <= _UNK_1561ce008);
    dVar42 = dVar42 + (_UNK_1561cdfc8 * dVar54 - dVar74);
    auVar39._0_4_ = (uint)-(ulonglong)(auVar38._0_8_ <= __2il0floatpacket_33) & uVar7;
    auVar39._4_4_ = (uint)(-(ulonglong)(auVar38._0_8_ <= __2il0floatpacket_33) >> 0x20) & uVar8;
    auVar39._8_4_ = (uint)lVar17 & uVar13;
    auVar39._12_4_ = (uint)((ulonglong)lVar17 >> 0x20) & uVar14;
    auVar57._0_8_ = (ulonglong)dVar25 & -(ulonglong)(__2il0floatpacket_33 < auVar38._0_8_);
    uVar10 = uVar11 & (ulonglong)dVar74;
    auVar57._8_4_ = (undefined4)uVar10;
    auVar57._12_4_ = (undefined4)(uVar10 >> 0x20);
    auVar60._0_8_ =
         (double)((ulonglong)(dVar30 + (__2il0floatpacket_29 * auVar73._0_8_ - dVar25)) &
                 -(ulonglong)(__2il0floatpacket_33 < auVar38._0_8_));
    auVar60._8_4_ = (uint)uVar11 & SUB84(dVar42,0);
    auVar60._12_4_ = (uint)(uVar11 >> 0x20) & (uint)((ulonglong)dVar42 >> 0x20);
    uVar7 = (SUB84(dVar48,0) & (uint)__2il0floatpacket_34 & (uint)__2il0floatpacket_35) * 0x68;
    dVar48 = SUB168(auVar39 | auVar57,0) + auVar60._0_8_;
    dVar25 = SUB168(auVar39 | auVar57,8) + auVar60._8_8_;
    uVar8 = (uint)(ushort)(SUB82(dVar70,0) & (ushort)_UNK_1561ce018 & (ushort)_UNK_1561ce028) * 0x68
    ;
    dVar30 = *(double *)(&DAT_156221400 + uVar7) - dVar48;
    dVar42 = *(double *)(&DAT_156221400 + uVar8) - dVar25;
    auVar46._0_8_ = CONCAT44((float)dVar42,(float)dVar30);
    auVar46._8_8_ = auVar46._0_8_;
    auVar29._0_8_ =
         (double)CONCAT44(_UNK_1561cdfe4 & (uint)((ulonglong)dVar30 >> 0x20),
                          _2il0floatpacket_31 & SUB84(dVar30,0));
    auVar29._8_4_ = _UNK_1561cdfe8 & SUB84(dVar42,0);
    auVar29._12_4_ = _UNK_1561cdfec & (uint)((ulonglong)dVar42 >> 0x20);
    auVar35 = rcpps(auVar52,auVar46);
    dVar69 = (double)auVar35._0_4_;
    dVar54 = (double)auVar35._4_4_;
    dVar70 = (__2il0floatpacket_36 - auVar29._0_8_ * dVar69) - (dVar30 - auVar29._0_8_) * dVar69;
    dVar74 = (_UNK_1561ce038 - auVar29._8_8_ * dVar54) - (dVar42 - auVar29._8_8_) * dVar54;
    auVar23._8_4_ = SUB84(dVar74,0);
    auVar23._0_8_ = dVar70;
    auVar23._12_4_ = (int)((ulonglong)dVar74 >> 0x20);
    dVar30 = auVar23._8_8_ * dVar74;
    auVar47._8_4_ = SUB84(dVar25,0);
    auVar47._0_8_ = dVar48;
    auVar47._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
    dVar42 = dVar48 * dVar48;
    dVar65 = auVar47._8_8_ * dVar25;
    auVar53._8_4_ = SUB84(dVar65,0);
    auVar53._0_8_ = dVar42;
    auVar53._12_4_ = (int)((ulonglong)dVar65 >> 0x20);
    auVar40._0_8_ =
         *(double *)(&DAT_156221418 + uVar7) + *(double *)(&DAT_156221428 + uVar7) * dVar48 +
         *(double *)(&DAT_156221410 + uVar7) *
         (dVar69 + (dVar70 + dVar70 * dVar70) * (dVar70 * dVar70 * dVar69 + dVar69)) +
         dVar48 * (*(double *)(&DAT_156221430 + uVar7) +
                   *(double *)(&DAT_156221438 + uVar7) * dVar48 +
                   dVar42 * (*(double *)(&DAT_156221440 + uVar7) +
                            *(double *)(&DAT_156221448 + uVar7) * dVar48) +
                  dVar42 * dVar42 *
                  (*(double *)(&DAT_156221450 + uVar7) +
                   *(double *)(&DAT_156221458 + uVar7) * dVar48 +
                  *(double *)(&DAT_156221460 + uVar7) * dVar42));
    auVar40._8_8_ =
         *(double *)(&DAT_156221418 + uVar8) + *(double *)(&DAT_156221428 + uVar8) * dVar25 +
         *(double *)(&DAT_156221410 + uVar8) *
         (dVar54 + (dVar74 + dVar30) * (dVar30 * dVar54 + dVar54)) +
         dVar25 * (*(double *)(&DAT_156221430 + uVar8) +
                   *(double *)(&DAT_156221438 + uVar8) * dVar25 +
                   dVar65 * (*(double *)(&DAT_156221440 + uVar8) +
                            *(double *)(&DAT_156221448 + uVar8) * dVar25) +
                  auVar53._8_8_ * dVar65 *
                  (*(double *)(&DAT_156221450 + uVar8) +
                   *(double *)(&DAT_156221458 + uVar8) * dVar25 +
                  *(double *)(&DAT_156221460 + uVar8) * dVar65));
    auVar12._8_4_ = uVar33;
    auVar12._0_8_ = -(ulonglong)(_DAT_156227c00 < auVar19._0_8_);
    auVar12._12_4_ = uVar41;
    blendvpd(auVar36,auVar40,auVar12);
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


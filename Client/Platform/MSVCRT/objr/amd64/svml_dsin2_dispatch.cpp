// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 2

// __vdecl_sin2 @ 15015bfc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __vdecl_sin2(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ushort uVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined4 in_EAX;
  int iVar7;
  uint uVar8;
  uint in_XMM0_Da;
  ulonglong uVar9;
  uint in_XMM0_Db;
  uint in_XMM0_Dc;
  uint in_XMM0_Dd;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  longlong lVar15;
  undefined1 auVar12 [16];
  ulonglong uVar16;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined4 uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined1 auVar24 [16];
  ulonglong uVar23;
  ulonglong uVar29;
  ulonglong uVar30;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint uVar31;
  uint uVar34;
  undefined1 auVar32 [16];
  double dVar35;
  undefined1 auVar33 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar42;
  double dVar43;
  undefined1 auVar41 [16];
  double dVar44;
  double dVar45;
  ulonglong uVar46;
  double dVar47;
  double dVar48;
  double dVar50;
  ulonglong uVar51;
  undefined1 auVar49 [16];
  double dVar52;
  ulonglong uVar54;
  ulonglong uVar55;
  ulonglong uVar56;
  undefined1 auVar57 [16];
  ulonglong uVar60;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  double dVar61;
  uint uVar68;
  ulonglong uVar62;
  double dVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  uint uVar71;
  ulonglong uVar69;
  undefined1 auVar67 [16];
  double dVar70;
  ulonglong uVar72;
  ulonglong uVar74;
  undefined1 auVar73 [16];
  undefined1 auVar75 [16];
  ulonglong uVar76;
  ulonglong uVar78;
  undefined1 auVar77 [16];
  ulonglong uVar79;
  ulonglong uVar80;
  double dVar53;
  
  if (__isa_available < 2) {
    __sse2_sin2__16();
    return;
  }
  uVar8 = 0;
  uVar18 = in_XMM0_Da & __common_dsin_data;
  uVar19 = in_XMM0_Db & _UNK_1561dee84;
  uVar20 = in_XMM0_Dc & _UNK_1561dee88;
  uVar21 = in_XMM0_Dd & _UNK_1561dee8c;
  auVar64._0_8_ = (double)CONCAT44(uVar19,uVar18);
  auVar64._8_4_ = uVar20;
  auVar64._12_4_ = uVar21;
  dVar45 = _DAT_1561def00 * (double)CONCAT44(uVar19,uVar18) + _DAT_1561def40;
  dVar50 = _UNK_1561def08 * (double)CONCAT44(uVar21,uVar20) + _UNK_1561def48;
  auVar75._8_4_ = SUB84(dVar50,0);
  auVar75._0_8_ = dVar45;
  auVar75._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
  dVar38 = dVar45 - _DAT_1561def40;
  dVar42 = auVar75._8_8_ - _UNK_1561def48;
  dVar61 = (((auVar64._0_8_ - _DAT_1561df000 * dVar38) - _DAT_1561df040 * dVar38) -
           _DAT_1561df080 * dVar38) - _DAT_1561df0c0 * dVar38;
  dVar42 = (((auVar64._8_8_ - _UNK_1561df008 * dVar42) - _UNK_1561df048 * dVar42) -
           _UNK_1561df088 * dVar42) - _UNK_1561df0c8 * dVar42;
  auVar65._8_4_ = SUB84(dVar42,0);
  auVar57._8_4_ = auVar65._8_4_;
  auVar57._0_8_ = dVar61;
  uVar31 = (uint)((ulonglong)dVar42 >> 0x20);
  auVar57._12_4_ = uVar31;
  auVar26._0_8_ = (double)CONCAT44(uVar19,uVar18);
  auVar26._8_4_ = uVar20;
  auVar26._12_4_ = uVar21;
  dVar38 = dVar61 * dVar61;
  dVar42 = auVar57._8_8_ * dVar42;
  auVar24._8_8_ = -(ulonglong)(_UNK_1561deec8 < auVar26._8_8_);
  auVar24._0_8_ = -(ulonglong)(_DAT_1561deec0 < auVar26._0_8_);
  auVar65._0_8_ =
       (double)CONCAT44((uint)((ulonglong)dVar61 >> 0x20) ^
                        (uint)((ulonglong)((longlong)dVar45 << 0x3f) >> 0x20),SUB84(dVar61,0));
  auVar65._12_4_ = uVar31 ^ (uint)((ulonglong)((longlong)dVar50 << 0x3f) >> 0x20);
  iVar7 = movmskpd(in_EAX,auVar24);
  dVar38 = auVar65._0_8_ +
           dVar38 * ((((((_DAT_1561df340 * dVar38 + _DAT_1561df300) * dVar38 + _DAT_1561df2c0) *
                        dVar38 + _DAT_1561df280) * dVar38 + _DAT_1561df240) * dVar38 +
                     _DAT_1561df200) * dVar38 + _DAT_1561df1c0) * auVar65._0_8_;
  dVar42 = auVar65._8_8_ +
           dVar42 * ((((((_UNK_1561df348 * dVar42 + _UNK_1561df308) * dVar42 + _UNK_1561df2c8) *
                        dVar42 + _UNK_1561df288) * dVar42 + _UNK_1561df248) * dVar42 +
                     _UNK_1561df208) * dVar42 + _UNK_1561df1c8) * auVar65._8_8_;
  auVar66._0_4_ = SUB84(dVar38,0) ^ ~__common_dsin_data & in_XMM0_Da;
  auVar66._4_4_ = (uint)((ulonglong)dVar38 >> 0x20) ^ ~_UNK_1561dee84 & in_XMM0_Db;
  auVar66._8_4_ = SUB84(dVar42,0) ^ ~_UNK_1561dee88 & in_XMM0_Dc;
  auVar66._12_4_ = (uint)((ulonglong)dVar42 >> 0x20) ^ ~_UNK_1561dee8c & in_XMM0_Dd;
  if (iVar7 != 0) {
    auVar1._4_4_ = uVar19;
    auVar1._0_4_ = uVar18;
    auVar1._8_4_ = uVar20;
    auVar1._12_4_ = uVar21;
    uVar4 = SUB162(__2il0floatpacket_23 & auVar1,0xe) >> 4;
    auVar10._0_8_ = (double)CONCAT44(uVar19 & DAT_1561deb80._4_4_,uVar18 & (uint)DAT_1561deb80);
    auVar10._8_4_ = uVar20 & DAT_1561deb80._8_4_;
    auVar10._12_4_ = uVar21 & DAT_1561deb80._12_4_;
    uVar46 = (ulonglong)((SUB164(__2il0floatpacket_23 & auVar1,4) >> 0x14) * 0x18);
    auVar2._4_4_ = uVar19;
    auVar2._0_4_ = uVar18;
    auVar2._8_4_ = uVar20;
    auVar2._12_4_ = uVar21;
    uVar22 = SUB168(__2il0floatpacket_24 & auVar2,0) + __2il0floatpacket_25;
    uVar29 = SUB168(__2il0floatpacket_24 & auVar2,8) + _UNK_1561c9228;
    auVar11._8_8_ = -(ulonglong)(auVar10._8_8_ == DAT_1561deb80._8_8_);
    auVar11._0_8_ = -(ulonglong)(auVar10._0_8_ == (double)DAT_1561deb80);
    uVar51 = (ulonglong)(((uint)uVar4 + (uint)uVar4 * 2) * 8);
    uVar9 = *(ulonglong *)(&DAT_1561ce910 + uVar51);
    auVar5._4_8_ = DAT_1561deb80._8_8_;
    auVar5._0_4_ = (int)(*(ulonglong *)(&DAT_1561ce910 + uVar46) >> 0x20);
    uVar16 = auVar5._0_8_;
    auVar36._0_8_ = uVar16 << 0x20;
    auVar36._8_4_ = (int)uVar9;
    auVar36._12_4_ = (int)(uVar9 >> 0x20);
    uVar8 = movmskpd(0,auVar11);
    uVar23 = uVar22 & __2il0floatpacket_26;
    uVar30 = uVar29 & _UNK_1561c9238;
    uVar68 = (uint)(*(ulonglong *)(&DAT_1561ce908 + uVar46) >> 0x20);
    uVar71 = (uint)(*(ulonglong *)(&DAT_1561ce908 + uVar51) >> 0x20);
    uVar62 = *(ulonglong *)(&DAT_1561ce908 + uVar46) & __2il0floatpacket_26;
    uVar69 = *(ulonglong *)(&DAT_1561ce908 + uVar51) & _UNK_1561c9238;
    uVar54 = (uVar23 & 0xffffffff) * (uVar62 & 0xffffffff);
    uVar55 = (uVar30 & 0xffffffff) * (uVar69 & 0xffffffff);
    uVar31 = (uint)(uVar22 >> 0x20);
    uVar34 = (uint)(uVar29 >> 0x20);
    lVar15 = (uVar29 >> 0x20) * (auVar36._8_8_ >> 0x20) +
             ((auVar36._8_8_ >> 0x20) * (uVar30 & 0xffffffff) >> 0x20);
    uVar56 = (uVar23 & 0xffffffff) * (ulonglong)uVar68;
    uVar60 = (uVar30 & 0xffffffff) * (ulonglong)uVar71;
    uVar76 = __2il0floatpacket_26 & *(ulonglong *)((longlong)&__common_dsin_reduction_data + uVar46)
    ;
    uVar78 = _UNK_1561c9238 & *(ulonglong *)((longlong)&__common_dsin_reduction_data + uVar51);
    uVar72 = ((*(ulonglong *)(&DAT_1561ce910 + uVar46) & __2il0floatpacket_26 & 0xffffffff) *
              (ulonglong)uVar31 >> 0x20) +
             (__2il0floatpacket_26 & uVar54) +
             (uVar22 >> 0x20) * (uVar16 & 0xffffffff) +
             ((uVar16 & 0xffffffff) * (uVar23 & 0xffffffff) >> 0x20);
    uVar74 = ((uVar9 & _UNK_1561c9238 & 0xffffffff) * (ulonglong)uVar34 >> 0x20) +
             (_UNK_1561c9238 & uVar55) + lVar15;
    uVar79 = (uVar23 & 0xffffffff) * (uVar76 & 0xffffffff);
    uVar80 = (uVar30 & 0xffffffff) * (uVar78 & 0xffffffff);
    auVar6._4_8_ = lVar15;
    auVar6._0_4_ = (int)(uVar72 >> 0x20);
    auVar12._0_8_ = auVar6._0_8_ << 0x20;
    auVar12._8_4_ = (int)uVar74;
    auVar12._12_4_ = (int)(uVar74 >> 0x20);
    uVar9 = (auVar6._0_8_ & 0xffffffff) +
            (__2il0floatpacket_26 & uVar56) +
            (uVar62 & 0xffffffff) * (ulonglong)uVar31 + (uVar54 >> 0x20);
    uVar16 = (auVar12._8_8_ >> 0x20) +
             (_UNK_1561c9238 & uVar60) +
             (uVar69 & 0xffffffff) * (ulonglong)uVar34 + (uVar55 >> 0x20);
    uVar22 = (uVar9 >> 0x20) +
             (__2il0floatpacket_26 & uVar79) +
             (ulonglong)uVar68 * (ulonglong)uVar31 + (uVar56 >> 0x20);
    uVar54 = (uVar16 >> 0x20) +
             (_UNK_1561c9238 & uVar80) + (ulonglong)uVar71 * (ulonglong)uVar34 + (uVar60 >> 0x20);
    uVar46 = ((uVar22 >> 0x20) +
              ((uVar23 & 0xffffffff) *
               (*(ulonglong *)((longlong)&__common_dsin_reduction_data + uVar46) >> 0x20) &
              __2il0floatpacket_26) + (ulonglong)uVar31 * (uVar76 & 0xffffffff) + (uVar79 >> 0x20)
             << 0x20) + (uVar22 & __2il0floatpacket_26);
    uVar51 = ((uVar54 >> 0x20) +
              ((uVar30 & 0xffffffff) *
               (*(ulonglong *)((longlong)&__common_dsin_reduction_data + uVar51) >> 0x20) &
              _UNK_1561c9238) + (uVar29 >> 0x20) * (uVar78 & 0xffffffff) + (uVar80 >> 0x20) << 0x20)
             + (uVar54 & _UNK_1561c9238);
    auVar77._4_4_ = uVar19;
    auVar77._0_4_ = uVar18;
    auVar77._8_4_ = uVar20;
    auVar77._12_4_ = uVar21;
    auVar77 = __2il0floatpacket_27 & auVar77;
    auVar32._0_8_ = uVar46 >> 0xc;
    auVar32._8_8_ = uVar51 >> 0xc;
    auVar32 = auVar32 | __2il0floatpacket_28 ^ auVar77;
    dVar61 = auVar32._0_8_;
    dVar39 = __2il0floatpacket_29 + dVar61;
    dVar35 = auVar32._8_8_;
    dVar43 = _UNK_1561c9268 + dVar35;
    uVar9 = (uVar9 << 0x20) + (uVar72 & __2il0floatpacket_26);
    uVar16 = (uVar16 << 0x20) + (uVar74 & _UNK_1561c9238);
    auVar73._8_4_ = SUB84(dVar43,0);
    auVar73._0_8_ = dVar39;
    auVar73._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
    auVar25._0_8_ = (__2il0floatpacket_34 & uVar46) << 0x28;
    auVar25._8_8_ = (_UNK_1561c92b8 & uVar51) << 0x28;
    auVar13._0_8_ = uVar9 >> 0x18;
    auVar13._8_8_ = uVar16 >> 0x18;
    auVar75 = __2il0floatpacket_31 ^ auVar77;
    auVar77 = auVar77 ^ __2il0floatpacket_33;
    auVar37._0_8_ = (__2il0floatpacket_32 & uVar9) << 0x1c;
    auVar37._8_8_ = (_UNK_1561c9298 & uVar16) << 0x1c;
    dVar61 = dVar61 - (dVar39 - __2il0floatpacket_29);
    dVar35 = dVar35 - (auVar73._8_8_ - _UNK_1561c9268);
    auVar26 = auVar25 | auVar13 | auVar77;
    auVar14._8_4_ = SUB84(dVar35,0);
    auVar14._0_8_ = dVar61;
    auVar14._12_4_ = (int)((ulonglong)dVar35 >> 0x20);
    dVar45 = auVar26._0_8_ - auVar77._0_8_;
    dVar50 = auVar26._8_8_ - auVar77._8_8_;
    dVar38 = dVar61 + dVar45;
    dVar42 = auVar14._8_8_ + dVar50;
    auVar49._0_8_ =
         (double)CONCAT44(_UNK_1561c92f4 & (uint)((ulonglong)dVar38 >> 0x20),
                          _2il0floatpacket_38 & SUB84(dVar38,0));
    auVar49._8_4_ = _UNK_1561c92f8 & SUB84(dVar42,0);
    auVar49._12_4_ = _UNK_1561c92fc & (uint)((ulonglong)dVar42 >> 0x20);
    dVar40 = auVar49._8_8_;
    dVar61 = __2il0floatpacket_36 * (dVar38 - auVar49._0_8_) + auVar49._0_8_ * __2il0floatpacket_37
             + ((SUB168(auVar37 | auVar75,0) - auVar75._0_8_) + dVar45 + (dVar61 - dVar38)) *
               __2il0floatpacket_35 + __2il0floatpacket_37 * (dVar38 - auVar49._0_8_);
    dVar50 = _UNK_1561c92d8 * (dVar42 - dVar40) + dVar40 * _UNK_1561c92e8 +
             ((SUB168(auVar37 | auVar75,8) - auVar75._8_8_) + dVar50 + (dVar35 - dVar42)) *
             _UNK_1561c92c8 + _UNK_1561c92e8 * (dVar42 - dVar40);
    auVar58._8_4_ = SUB84(dVar50,0);
    auVar58._0_8_ = dVar61;
    auVar58._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
    auVar27._0_8_ = (double)CONCAT44(_UNK_1561c9304 & uVar19,_2il0floatpacket_39 & uVar18);
    auVar27._8_4_ = _UNK_1561c9308 & uVar20;
    auVar27._12_4_ = _UNK_1561c930c & uVar21;
    dVar42 = dVar61 + __2il0floatpacket_36 * auVar49._0_8_;
    dVar45 = auVar58._8_8_ + _UNK_1561c92d8 * dVar40;
    uVar16 = -(ulonglong)(_UNK_1561c9318 < auVar27._8_8_);
    lVar15 = -(ulonglong)(auVar27._8_8_ <= _UNK_1561c9318);
    uVar51 = (ulonglong)((SUB84(dVar39,0) & _2il0floatpacket_30) << 5);
    auVar28._0_4_ = (uint)-(ulonglong)(auVar27._0_8_ <= __2il0floatpacket_40) & uVar18;
    auVar28._4_4_ = (uint)(-(ulonglong)(auVar27._0_8_ <= __2il0floatpacket_40) >> 0x20) & uVar19;
    auVar28._8_4_ = (uint)lVar15 & uVar20;
    auVar28._12_4_ = (uint)((ulonglong)lVar15 >> 0x20) & uVar21;
    auVar59._0_8_ = -(ulonglong)(__2il0floatpacket_40 < auVar27._0_8_) & (ulonglong)dVar42;
    uVar9 = uVar16 & (ulonglong)dVar45;
    auVar59._8_4_ = (undefined4)uVar9;
    auVar59._12_4_ = (undefined4)(uVar9 >> 0x20);
    uVar9 = (ulonglong)(ushort)(SUB82(dVar43,0) & (ushort)_UNK_1561c9278);
    lVar15 = uVar9 * 0x20;
    dVar47 = SUB168(auVar28 | auVar59,0);
    dVar53 = SUB168(auVar28 | auVar59,8);
    dVar48 = dVar47 * *(double *)(&DAT_1561dab08 + uVar51);
    dVar52 = dVar53 * *(double *)(&DAT_1561dab08 + lVar15);
    dVar38 = *(double *)(&DAT_1561dab10 + uVar51);
    auVar33._0_8_ =
         (double)((ulonglong)(dVar61 + (__2il0floatpacket_36 * auVar49._0_8_ - dVar42)) &
                 -(ulonglong)(__2il0floatpacket_40 < auVar27._0_8_));
    uVar16 = (ulonglong)(dVar50 + (_UNK_1561c92d8 * dVar40 - dVar45)) & uVar16;
    auVar33._8_4_ = (undefined4)uVar16;
    auVar33._12_4_ = (undefined4)(uVar16 >> 0x20);
    dVar42 = *(double *)(&DAT_1561dab10 + lVar15);
    auVar67._8_4_ = SUB84(dVar42,0);
    auVar67._0_8_ = dVar38;
    uVar17 = (undefined4)((ulonglong)dVar42 >> 0x20);
    auVar67._12_4_ = uVar17;
    auVar41._8_4_ = SUB84(dVar42,0);
    auVar41._0_8_ = dVar38;
    auVar41._12_4_ = uVar17;
    dVar63 = dVar38 + dVar48;
    dVar70 = auVar67._8_8_ + dVar52;
    dVar40 = dVar47 * dVar47;
    dVar44 = dVar53 * dVar53;
    dVar61 = dVar47 * *(double *)((longlong)&__common_dsin_data_ha + uVar51);
    dVar35 = dVar53 * *(double *)(&__common_dsin_data_ha + uVar9 * 8);
    dVar39 = *(double *)((longlong)&__common_dsin_data_ha + uVar51) +
             *(double *)(&DAT_1561dab08 + uVar51);
    dVar43 = *(double *)(&__common_dsin_data_ha + uVar9 * 8) + *(double *)(&DAT_1561dab08 + lVar15);
    dVar45 = dVar63 + dVar61;
    dVar50 = dVar70 + dVar35;
    dVar45 = dVar45 + dVar48 + (dVar38 - dVar63) + dVar61 + (dVar63 - dVar45) +
                      (_DAT_1561ded80 * dVar40 + _DAT_1561ded40) * dVar40 * dVar47 * dVar39 +
                      dVar40 * ((_DAT_1561dee40 * dVar40 + _DAT_1561dee00) * dVar40 + _DAT_1561dedc0
                               ) * dVar38 +
                      *(double *)(&DAT_1561dab18 + uVar51) +
                      auVar33._0_8_ * (dVar39 - dVar47 * dVar38);
    dVar50 = dVar50 + dVar52 + (auVar41._8_8_ - dVar70) + dVar35 + (dVar70 - dVar50) +
                      (_UNK_1561ded88 * dVar44 + _UNK_1561ded48) * dVar44 * dVar53 * dVar43 +
                      dVar44 * ((_UNK_1561dee48 * dVar44 + _UNK_1561dee08) * dVar44 + _UNK_1561dedc8
                               ) * dVar42 +
                      *(double *)(&DAT_1561dab18 + lVar15) +
                      auVar33._8_8_ * (dVar43 - dVar53 * dVar42);
    auVar3._4_4_ = (uint)((ulonglong)dVar45 >> 0x20) ^ ~_UNK_1561dee84 & in_XMM0_Db;
    auVar3._0_4_ = SUB84(dVar45,0) ^ ~__common_dsin_data & in_XMM0_Da;
    auVar3._8_4_ = SUB84(dVar50,0) ^ ~_UNK_1561dee88 & in_XMM0_Dc;
    auVar3._12_4_ = (uint)((ulonglong)dVar50 >> 0x20) ^ ~_UNK_1561dee8c & in_XMM0_Dd;
    blendvpd(auVar66,auVar3,auVar24);
  }
  if (uVar8 != 0) {
    uVar18 = 0;
    do {
      if ((uVar8 >> (uVar18 & 0x1f) & 1) != 0) {
        __common_dsin_cout_rare();
      }
      uVar18 = uVar18 + 1;
    } while ((int)uVar18 < 2);
  }
  return;
}

// __libm_sse2_sincos_ @ 15015bfe0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __libm_sse2_sincos_(void)

{
  ulonglong in_XMM0_Qa;
  
  if ((double)L_two_to_neg_27 <= (double)(in_XMM0_Qa & L_abs_mask)) {
    __vdecl_sin2();
    return;
  }
  return;
}


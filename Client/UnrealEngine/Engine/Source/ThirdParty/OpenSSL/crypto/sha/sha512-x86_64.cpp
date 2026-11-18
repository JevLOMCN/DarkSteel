// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 8

// sha512_block_data_order @ 140e25580

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sha512_block_data_order(ulonglong *param_1,undefined1 (*param_2) [16],longlong param_3)

{
  char *pcVar1;
  ulonglong *puVar2;
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [24];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 (*pauVar38) [24];
  ulonglong uVar39;
  longlong lVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  undefined1 (*pauVar47) [16];
  undefined1 (*pauVar48) [16];
  longlong *plVar49;
  undefined1 (*pauVar50) [24];
  undefined1 (*pauVar51) [16];
  undefined1 (*pauVar52) [16];
  ulonglong uVar53;
  ulonglong uVar54;
  ulonglong uVar55;
  ulonglong uVar56;
  longlong lVar57;
  ulonglong uVar58;
  ulonglong uVar59;
  ulonglong uVar60;
  ulonglong uVar61;
  ulonglong uVar62;
  ulonglong uVar63;
  longlong lVar65;
  undefined1 auVar64 [32];
  longlong lVar66;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar67 [32];
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined1 auVar68 [32];
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined8 unaff_XMM10_Qa;
  undefined8 unaff_XMM10_Qb;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined8 unaff_XMM11_Qa;
  undefined8 unaff_XMM11_Qb;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auStack_5b0 [1136];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a0;
  ulonglong uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  
  if ((DAT_15540a9f4 & 0x800) != 0) {
    auVar4 = vpshufb_avx(*param_2,_DAT_140e26d00);
    auVar5 = vpshufb_avx(param_2[1],_DAT_140e26d00);
    auVar6 = vpshufb_avx(param_2[2],_DAT_140e26d00);
    auVar7 = vpshufb_avx(param_2[3],_DAT_140e26d00);
    auVar8 = vpshufb_avx(param_2[4],_DAT_140e26d00);
    auVar9 = vpshufb_avx(param_2[5],_DAT_140e26d00);
    auVar10._8_8_ = DAT_140e26808;
    auVar10._0_8_ = K512;
    vpaddq_avx(auVar4,auVar10);
    auVar10 = vpshufb_avx(param_2[6],_DAT_140e26d00);
    auVar11._8_8_ = DAT_140e26828;
    auVar11._0_8_ = DAT_140e26820;
    vpaddq_avx(auVar5,auVar11);
    auVar11 = vpshufb_avx(param_2[7],_DAT_140e26d00);
    auVar69._8_8_ = DAT_140e26848;
    auVar69._0_8_ = DAT_140e26840;
    vpaddq_avx(auVar6,auVar69);
    auVar6._8_8_ = DAT_140e26868;
    auVar6._0_8_ = DAT_140e26860;
    vpaddq_avx(auVar7,auVar6);
    auVar7._8_8_ = DAT_140e26888;
    auVar7._0_8_ = DAT_140e26880;
    vpaddq_avx(auVar8,auVar7);
    auVar70._8_8_ = DAT_140e268a8;
    auVar70._0_8_ = DAT_140e268a0;
    vpaddq_avx(auVar9,auVar70);
    auVar73._8_8_ = DAT_140e268c8;
    auVar73._0_8_ = DAT_140e268c0;
    vpaddq_avx(auVar10,auVar73);
    auVar74._8_8_ = DAT_140e268e8;
    auVar74._0_8_ = DAT_140e268e0;
    vpaddq_avx(auVar11,auVar74);
    vpalignr_avx(auVar5,auVar4,8);
    vpalignr_avx(auVar9,auVar8,8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((_DAT_15540a9f8 & 0x128) == 0x128) {
    uVar46 = (ulonglong)auStack_5b0 & 0xfffffffffffff800;
    pauVar47 = (undefined1 (*) [16])(uVar46 + 0x480);
    *(ulonglong **)(uVar46 + 0x500) = param_1;
    *(undefined1 (**) [16])(uVar46 + 0x508) = param_2;
    *(undefined1 (**) [16])(uVar46 + 0x510) = param_2 + param_3 * 8;
    *(BADSPACEBASE **)(uVar46 + 0x518) = register0x00000020;
    *(undefined8 *)(uVar46 + 0x520) = unaff_XMM6_Qa;
    *(undefined8 *)(uVar46 + 0x528) = unaff_XMM6_Qb;
    *(undefined8 *)(uVar46 + 0x530) = unaff_XMM7_Qa;
    *(undefined8 *)(uVar46 + 0x538) = unaff_XMM7_Qb;
    *(undefined8 *)(uVar46 + 0x540) = unaff_XMM8_Qa;
    *(undefined8 *)(uVar46 + 0x548) = unaff_XMM8_Qb;
    *(undefined8 *)(uVar46 + 0x550) = unaff_XMM9_Qa;
    *(undefined8 *)(uVar46 + 0x558) = unaff_XMM9_Qb;
    *(undefined8 *)(uVar46 + 0x560) = unaff_XMM10_Qa;
    *(undefined8 *)(uVar46 + 0x568) = unaff_XMM10_Qb;
    *(undefined8 *)(uVar46 + 0x570) = unaff_XMM11_Qa;
    *(undefined8 *)(uVar46 + 0x578) = unaff_XMM11_Qb;
    pauVar52 = param_2 + 8;
    uVar41 = *param_1;
    uVar44 = param_1[1];
    uVar39 = param_1[2];
    pauVar51 = pauVar52;
    if (pauVar52 == param_2 + param_3 * 8) {
      pauVar51 = (undefined1 (*) [16])(uVar46 + 0x480);
    }
    uVar59 = param_1[3];
    uVar60 = param_1[4];
    uVar61 = param_1[5];
    uVar62 = param_1[6];
    uVar42 = param_1[7];
    do {
      auVar72._16_16_ = _UNK_140e26d10;
      auVar72._0_16_ = _DAT_140e26d00;
      auVar64._16_16_ = ZEXT116(1) * *pauVar51;
      auVar64._0_16_ = ZEXT116(0) * *pauVar51 | ZEXT116(1) * pauVar52[-8];
      auVar71._16_16_ = ZEXT116(1) * pauVar51[1];
      auVar71._0_16_ = ZEXT116(0) * pauVar51[1] | ZEXT116(1) * pauVar52[-7];
      auVar24 = vpshufb_avx2(auVar64,auVar72);
      auVar76._16_16_ = ZEXT116(1) * pauVar51[2];
      auVar76._0_16_ = ZEXT116(0) * pauVar51[2] | ZEXT116(1) * pauVar52[-6];
      auVar25 = vpshufb_avx2(auVar71,auVar72);
      auVar77._16_16_ = ZEXT116(1) * pauVar51[3];
      auVar77._0_16_ = ZEXT116(0) * pauVar51[3] | ZEXT116(1) * pauVar52[-5];
      auVar26 = vpshufb_avx2(auVar76,auVar72);
      auVar80._16_16_ = ZEXT116(1) * pauVar51[4];
      auVar80._0_16_ = ZEXT116(0) * pauVar51[4] | ZEXT116(1) * pauVar52[-4];
      auVar27 = vpshufb_avx2(auVar77,auVar72);
      auVar81._16_16_ = ZEXT116(1) * pauVar51[5];
      auVar81._0_16_ = ZEXT116(0) * pauVar51[5] | ZEXT116(1) * pauVar52[-3];
      auVar28 = vpshufb_avx2(auVar80,auVar72);
      auVar67._16_16_ = ZEXT116(1) * pauVar51[6];
      auVar67._0_16_ = ZEXT116(0) * pauVar51[6] | ZEXT116(1) * pauVar52[-2];
      auVar29 = vpshufb_avx2(auVar81,auVar72);
      auVar68._16_16_ = ZEXT116(1) * pauVar51[7];
      auVar68._0_16_ = ZEXT116(0) * pauVar51[7] | ZEXT116(1) * pauVar52[-1];
      lVar66 = auVar24._8_8_ + DAT_140e26808;
      lVar15 = auVar24._16_8_ + DAT_140e26810;
      lVar19 = auVar24._24_8_ + DAT_140e26818;
      auVar30 = vpshufb_avx2(auVar67,auVar72);
      lVar57 = auVar25._0_8_ + DAT_140e26820;
      lVar12 = auVar25._8_8_ + DAT_140e26828;
      lVar16 = auVar25._16_8_ + DAT_140e26830;
      lVar20 = auVar25._24_8_ + DAT_140e26838;
      auVar31 = vpshufb_avx2(auVar68,auVar72);
      lVar40 = auVar26._0_8_ + DAT_140e26840;
      lVar13 = auVar26._8_8_ + DAT_140e26848;
      lVar17 = auVar26._16_8_ + DAT_140e26850;
      lVar21 = auVar26._24_8_ + DAT_140e26858;
      lVar65 = auVar27._0_8_ + DAT_140e26860;
      lVar14 = auVar27._8_8_ + DAT_140e26868;
      lVar18 = auVar27._16_8_ + DAT_140e26870;
      lVar22 = auVar27._24_8_ + DAT_140e26878;
      *(longlong *)*pauVar47 = auVar24._0_8_ + K512;
      *(longlong *)(*pauVar47 + 8) = lVar66;
      *(longlong *)pauVar47[1] = lVar15;
      *(longlong *)(pauVar47[1] + 8) = lVar19;
      lVar66 = auVar28._0_8_ + DAT_140e26880;
      lVar15 = auVar28._8_8_ + DAT_140e26888;
      lVar19 = auVar28._16_8_ + DAT_140e26890;
      lVar23 = auVar28._24_8_ + DAT_140e26898;
      *(longlong *)pauVar47[2] = lVar57;
      *(longlong *)(pauVar47[2] + 8) = lVar12;
      *(longlong *)pauVar47[3] = lVar16;
      *(longlong *)(pauVar47[3] + 8) = lVar20;
      lVar57 = auVar29._0_8_ + DAT_140e268a0;
      lVar12 = auVar29._8_8_ + DAT_140e268a8;
      lVar16 = auVar29._16_8_ + DAT_140e268b0;
      lVar20 = auVar29._24_8_ + DAT_140e268b8;
      *(longlong *)pauVar47[4] = lVar40;
      *(longlong *)(pauVar47[4] + 8) = lVar13;
      *(longlong *)pauVar47[5] = lVar17;
      *(longlong *)(pauVar47[5] + 8) = lVar21;
      lVar40 = auVar30._0_8_ + DAT_140e268c0;
      lVar13 = auVar30._8_8_ + DAT_140e268c8;
      lVar17 = auVar30._16_8_ + DAT_140e268d0;
      lVar21 = auVar30._24_8_ + DAT_140e268d8;
      *(longlong *)pauVar47[6] = lVar65;
      *(longlong *)(pauVar47[6] + 8) = lVar14;
      *(longlong *)pauVar47[7] = lVar18;
      *(longlong *)(pauVar47[7] + 8) = lVar22;
      lVar65 = auVar31._0_8_ + DAT_140e268e0;
      lVar14 = auVar31._8_8_ + DAT_140e268e8;
      lVar18 = auVar31._16_8_ + DAT_140e268f0;
      lVar22 = auVar31._24_8_ + DAT_140e268f8;
      *(longlong *)pauVar47[-8] = lVar66;
      *(longlong *)(pauVar47[-8] + 8) = lVar15;
      *(longlong *)pauVar47[-7] = lVar19;
      *(longlong *)(pauVar47[-7] + 8) = lVar23;
      uVar63 = 0;
      *(longlong *)pauVar47[-6] = lVar57;
      *(longlong *)(pauVar47[-6] + 8) = lVar12;
      *(longlong *)pauVar47[-5] = lVar16;
      *(longlong *)(pauVar47[-5] + 8) = lVar20;
      *(longlong *)pauVar47[-4] = lVar40;
      *(longlong *)(pauVar47[-4] + 8) = lVar13;
      *(longlong *)pauVar47[-3] = lVar17;
      *(longlong *)(pauVar47[-3] + 8) = lVar21;
      uVar58 = uVar44 ^ uVar39;
      *(longlong *)pauVar47[-2] = lVar65;
      *(longlong *)(pauVar47[-2] + 8) = lVar14;
      *(longlong *)pauVar47[-1] = lVar18;
      *(longlong *)(pauVar47[-1] + 8) = lVar22;
      pauVar47 = pauVar47 + -8;
      pauVar50 = (undefined1 (*) [24])&DAT_140e26980;
      do {
        pauVar48 = pauVar47;
        auVar72 = vpalignr_avx2(auVar25,auVar24,8);
        auVar64 = vpalignr_avx2(auVar29,auVar28,8);
        uVar41 = uVar41 + uVar63;
        auVar76 = vpsrlq_avx2(auVar72,1);
        lVar40 = auVar24._8_8_;
        lVar65 = auVar24._16_8_;
        lVar66 = auVar24._24_8_;
        auVar80 = vpsrlq_avx2(auVar72,7);
        auVar71 = vpsllq_avx2(auVar72,0x38);
        lVar57 = uVar42 + *(longlong *)pauVar48[8] + (uVar61 & uVar60) + (~uVar60 & uVar62) +
                 ((uVar60 >> 0x29 | uVar60 << 0x17) ^ (uVar60 >> 0x12 | uVar60 << 0x2e) ^
                 (uVar60 >> 0xe | uVar60 << 0x32));
        auVar77 = vpsrlq_avx2(auVar76,7);
        uVar59 = uVar59 + lVar57;
        auVar72 = vpsllq_avx2(auVar71,7);
        auVar81 = vpsrlq_avx2(auVar31,6);
        auVar72 = auVar80 ^ auVar76 ^ auVar71 ^ auVar77 ^ auVar72;
        auVar77 = vpsllq_avx2(auVar31,3);
        auVar76 = vpsrlq_avx2(auVar31,0x13);
        uVar42 = lVar57 + (uVar58 & (uVar41 ^ uVar44) ^ uVar44) +
                 ((uVar41 >> 0x22 | uVar41 * 0x40000000) ^ (uVar41 >> 0x27 | uVar41 * 0x2000000) ^
                 (uVar41 >> 0x1c | uVar41 << 0x24));
        auVar80 = vpsllq_avx2(auVar77,0x2a);
        auVar71 = vpsrlq_avx2(auVar76,0x2a);
        auVar71 = auVar81 ^ auVar77 ^ auVar76 ^ auVar80 ^ auVar71;
        lVar57 = uVar62 + *(longlong *)(pauVar48[8] + 8) + (uVar60 & uVar59) + (~uVar59 & uVar61) +
                 ((uVar59 >> 0x29 | uVar59 * 0x800000) ^ (uVar59 >> 0x12 | uVar59 << 0x2e) ^
                 (uVar59 >> 0xe | uVar59 << 0x32));
        auVar24._0_8_ = auVar24._0_8_ + auVar64._0_8_ + auVar72._0_8_ + auVar71._0_8_;
        auVar24._8_8_ = lVar40 + auVar64._8_8_ + auVar72._8_8_ + auVar71._8_8_;
        auVar24._16_8_ = lVar65 + auVar64._16_8_ + auVar72._16_8_ + auVar71._16_8_;
        auVar24._24_8_ = lVar66 + auVar64._24_8_ + auVar72._24_8_ + auVar71._24_8_;
        uVar39 = uVar39 + lVar57;
        lVar65 = *(longlong *)pauVar50[-5];
        auVar32 = *(undefined1 (*) [24])((longlong)pauVar50[-6] + 0x10);
        lVar40 = *(longlong *)((longlong)pauVar50[-5] + 0x10);
        *(longlong *)pauVar48[-8] =
             auVar24._0_8_ + *(longlong *)*(undefined1 (*) [24])((longlong)pauVar50[-6] + 0x10);
        *(longlong *)(pauVar48[-8] + 8) = auVar24._8_8_ + lVar65;
        *(longlong *)pauVar48[-7] = auVar24._16_8_ + auVar32._16_8_;
        *(longlong *)(pauVar48[-7] + 8) = auVar24._24_8_ + lVar40;
        auVar72 = vpalignr_avx2(auVar26,auVar25,8);
        auVar64 = vpalignr_avx2(auVar30,auVar29,8);
        uVar62 = lVar57 + ((uVar41 ^ uVar44) & (uVar42 ^ uVar41) ^ uVar41) +
                 ((uVar42 >> 0x22 | uVar42 * 0x40000000) ^ (uVar42 >> 0x27 | uVar42 * 0x2000000) ^
                 (uVar42 >> 0x1c | uVar42 << 0x24));
        auVar76 = vpsrlq_avx2(auVar72,1);
        lVar40 = auVar25._8_8_;
        lVar65 = auVar25._16_8_;
        lVar66 = auVar25._24_8_;
        auVar80 = vpsrlq_avx2(auVar72,7);
        auVar71 = vpsllq_avx2(auVar72,0x38);
        lVar57 = uVar61 + *(longlong *)pauVar48[10] + (uVar59 & uVar39) + (~uVar39 & uVar60) +
                 ((uVar39 >> 0x29 | uVar39 * 0x800000) ^ (uVar39 >> 0x12 | uVar39 << 0x2e) ^
                 (uVar39 >> 0xe | uVar39 << 0x32));
        auVar77 = vpsrlq_avx2(auVar76,7);
        uVar44 = uVar44 + lVar57;
        auVar72 = vpsllq_avx2(auVar71,7);
        auVar81 = vpsrlq_avx2(auVar24,6);
        auVar72 = auVar80 ^ auVar76 ^ auVar71 ^ auVar77 ^ auVar72;
        auVar77 = vpsllq_avx2(auVar24,3);
        auVar76 = vpsrlq_avx2(auVar24,0x13);
        uVar61 = lVar57 + ((uVar42 ^ uVar41) & (uVar62 ^ uVar42) ^ uVar42) +
                 ((uVar62 >> 0x22 | uVar62 * 0x40000000) ^ (uVar62 >> 0x27 | uVar62 * 0x2000000) ^
                 (uVar62 >> 0x1c | uVar62 << 0x24));
        auVar80 = vpsllq_avx2(auVar77,0x2a);
        auVar71 = vpsrlq_avx2(auVar76,0x2a);
        auVar71 = auVar81 ^ auVar77 ^ auVar76 ^ auVar80 ^ auVar71;
        lVar57 = uVar60 + *(longlong *)(pauVar48[10] + 8) + (uVar39 & uVar44) + (~uVar44 & uVar59) +
                 ((uVar44 >> 0x29 | uVar44 * 0x800000) ^ (uVar44 >> 0x12 | uVar44 << 0x2e) ^
                 (uVar44 >> 0xe | uVar44 << 0x32));
        auVar25._0_8_ = auVar25._0_8_ + auVar64._0_8_ + auVar72._0_8_ + auVar71._0_8_;
        auVar25._8_8_ = lVar40 + auVar64._8_8_ + auVar72._8_8_ + auVar71._8_8_;
        auVar25._16_8_ = lVar65 + auVar64._16_8_ + auVar72._16_8_ + auVar71._16_8_;
        auVar25._24_8_ = lVar66 + auVar64._24_8_ + auVar72._24_8_ + auVar71._24_8_;
        uVar41 = uVar41 + lVar57;
        lVar65 = *(longlong *)((longlong)pauVar50[-4] + 8);
        auVar32 = pauVar50[-4];
        lVar40 = *(longlong *)pauVar50[-3];
        *(longlong *)pauVar48[-6] = auVar25._0_8_ + *(longlong *)pauVar50[-4];
        *(longlong *)(pauVar48[-6] + 8) = auVar25._8_8_ + lVar65;
        *(longlong *)pauVar48[-5] = auVar25._16_8_ + auVar32._16_8_;
        *(longlong *)(pauVar48[-5] + 8) = auVar25._24_8_ + lVar40;
        auVar72 = vpalignr_avx2(auVar27,auVar26,8);
        auVar64 = vpalignr_avx2(auVar31,auVar30,8);
        uVar60 = lVar57 + ((uVar62 ^ uVar42) & (uVar61 ^ uVar62) ^ uVar62) +
                 ((uVar61 >> 0x22 | uVar61 * 0x40000000) ^ (uVar61 >> 0x27 | uVar61 * 0x2000000) ^
                 (uVar61 >> 0x1c | uVar61 << 0x24));
        auVar76 = vpsrlq_avx2(auVar72,1);
        lVar40 = auVar26._8_8_;
        lVar65 = auVar26._16_8_;
        lVar66 = auVar26._24_8_;
        auVar80 = vpsrlq_avx2(auVar72,7);
        auVar71 = vpsllq_avx2(auVar72,0x38);
        lVar57 = uVar59 + *(longlong *)pauVar48[0xc] + (uVar44 & uVar41) + (~uVar41 & uVar39) +
                 ((uVar41 >> 0x29 | uVar41 * 0x800000) ^ (uVar41 >> 0x12 | uVar41 << 0x2e) ^
                 (uVar41 >> 0xe | uVar41 << 0x32));
        auVar77 = vpsrlq_avx2(auVar76,7);
        uVar42 = uVar42 + lVar57;
        auVar72 = vpsllq_avx2(auVar71,7);
        auVar81 = vpsrlq_avx2(auVar25,6);
        auVar72 = auVar80 ^ auVar76 ^ auVar71 ^ auVar77 ^ auVar72;
        auVar77 = vpsllq_avx2(auVar25,3);
        auVar76 = vpsrlq_avx2(auVar25,0x13);
        uVar59 = lVar57 + ((uVar61 ^ uVar62) & (uVar60 ^ uVar61) ^ uVar61) +
                 ((uVar60 >> 0x22 | uVar60 * 0x40000000) ^ (uVar60 >> 0x27 | uVar60 * 0x2000000) ^
                 (uVar60 >> 0x1c | uVar60 << 0x24));
        auVar80 = vpsllq_avx2(auVar77,0x2a);
        auVar71 = vpsrlq_avx2(auVar76,0x2a);
        auVar71 = auVar81 ^ auVar77 ^ auVar76 ^ auVar80 ^ auVar71;
        lVar57 = uVar39 + *(longlong *)(pauVar48[0xc] + 8) + (uVar41 & uVar42) + (~uVar42 & uVar44)
                 + ((uVar42 >> 0x29 | uVar42 * 0x800000) ^ (uVar42 >> 0x12 | uVar42 << 0x2e) ^
                   (uVar42 >> 0xe | uVar42 << 0x32));
        auVar26._0_8_ = auVar26._0_8_ + auVar64._0_8_ + auVar72._0_8_ + auVar71._0_8_;
        auVar26._8_8_ = lVar40 + auVar64._8_8_ + auVar72._8_8_ + auVar71._8_8_;
        auVar26._16_8_ = lVar65 + auVar64._16_8_ + auVar72._16_8_ + auVar71._16_8_;
        auVar26._24_8_ = lVar66 + auVar64._24_8_ + auVar72._24_8_ + auVar71._24_8_;
        uVar62 = uVar62 + lVar57;
        lVar65 = *(longlong *)((longlong)pauVar50[-3] + 0x10);
        auVar32 = *(undefined1 (*) [24])((longlong)pauVar50[-3] + 8);
        lVar40 = *(longlong *)((longlong)pauVar50[-2] + 8);
        *(longlong *)pauVar48[-4] =
             auVar26._0_8_ + *(longlong *)*(undefined1 (*) [24])((longlong)pauVar50[-3] + 8);
        *(longlong *)(pauVar48[-4] + 8) = auVar26._8_8_ + lVar65;
        *(longlong *)pauVar48[-3] = auVar26._16_8_ + auVar32._16_8_;
        *(longlong *)(pauVar48[-3] + 8) = auVar26._24_8_ + lVar40;
        auVar72 = vpalignr_avx2(auVar28,auVar27,8);
        auVar64 = vpalignr_avx2(auVar24,auVar31,8);
        uVar39 = lVar57 + ((uVar60 ^ uVar61) & (uVar59 ^ uVar60) ^ uVar60) +
                 ((uVar59 >> 0x22 | uVar59 * 0x40000000) ^ (uVar59 >> 0x27 | uVar59 * 0x2000000) ^
                 (uVar59 >> 0x1c | uVar59 << 0x24));
        auVar76 = vpsrlq_avx2(auVar72,1);
        lVar40 = auVar27._8_8_;
        lVar65 = auVar27._16_8_;
        lVar66 = auVar27._24_8_;
        auVar80 = vpsrlq_avx2(auVar72,7);
        auVar71 = vpsllq_avx2(auVar72,0x38);
        lVar57 = uVar44 + *(longlong *)pauVar48[0xe] + (uVar42 & uVar62) + (~uVar62 & uVar41) +
                 ((uVar62 >> 0x29 | uVar62 * 0x800000) ^ (uVar62 >> 0x12 | uVar62 << 0x2e) ^
                 (uVar62 >> 0xe | uVar62 << 0x32));
        auVar77 = vpsrlq_avx2(auVar76,7);
        uVar61 = uVar61 + lVar57;
        auVar72 = vpsllq_avx2(auVar71,7);
        auVar81 = vpsrlq_avx2(auVar26,6);
        auVar72 = auVar80 ^ auVar76 ^ auVar71 ^ auVar77 ^ auVar72;
        auVar77 = vpsllq_avx2(auVar26,3);
        auVar76 = vpsrlq_avx2(auVar26,0x13);
        uVar44 = lVar57 + ((uVar59 ^ uVar60) & (uVar39 ^ uVar59) ^ uVar59) +
                 ((uVar39 >> 0x22 | uVar39 * 0x40000000) ^ (uVar39 >> 0x27 | uVar39 * 0x2000000) ^
                 (uVar39 >> 0x1c | uVar39 << 0x24));
        auVar80 = vpsllq_avx2(auVar77,0x2a);
        auVar71 = vpsrlq_avx2(auVar76,0x2a);
        auVar71 = auVar81 ^ auVar77 ^ auVar76 ^ auVar80 ^ auVar71;
        lVar57 = uVar41 + *(longlong *)(pauVar48[0xe] + 8) + (uVar62 & uVar61) + (~uVar61 & uVar42)
                 + ((uVar61 >> 0x29 | uVar61 * 0x800000) ^ (uVar61 >> 0x12 | uVar61 << 0x2e) ^
                   (uVar61 >> 0xe | uVar61 << 0x32));
        auVar27._0_8_ = auVar27._0_8_ + auVar64._0_8_ + auVar72._0_8_ + auVar71._0_8_;
        auVar27._8_8_ = lVar40 + auVar64._8_8_ + auVar72._8_8_ + auVar71._8_8_;
        auVar27._16_8_ = lVar65 + auVar64._16_8_ + auVar72._16_8_ + auVar71._16_8_;
        auVar27._24_8_ = lVar66 + auVar64._24_8_ + auVar72._24_8_ + auVar71._24_8_;
        uVar60 = uVar60 + lVar57;
        lVar65 = *(longlong *)pauVar50[-1];
        auVar32 = *(undefined1 (*) [24])((longlong)pauVar50[-2] + 0x10);
        lVar40 = *(longlong *)((longlong)pauVar50[-1] + 0x10);
        *(longlong *)pauVar48[-2] =
             auVar27._0_8_ + *(longlong *)*(undefined1 (*) [24])((longlong)pauVar50[-2] + 0x10);
        *(longlong *)(pauVar48[-2] + 8) = auVar27._8_8_ + lVar65;
        *(longlong *)pauVar48[-1] = auVar27._16_8_ + auVar32._16_8_;
        *(longlong *)(pauVar48[-1] + 8) = auVar27._24_8_ + lVar40;
        pauVar47 = pauVar48 + -0x10;
        auVar72 = vpalignr_avx2(auVar29,auVar28,8);
        auVar64 = vpalignr_avx2(auVar25,auVar24,8);
        uVar41 = lVar57 + ((uVar39 ^ uVar59) & (uVar44 ^ uVar39) ^ uVar39) +
                 ((uVar44 >> 0x22 | uVar44 * 0x40000000) ^ (uVar44 >> 0x27 | uVar44 * 0x2000000) ^
                 (uVar44 >> 0x1c | uVar44 << 0x24));
        auVar76 = vpsrlq_avx2(auVar72,1);
        lVar40 = auVar28._8_8_;
        lVar65 = auVar28._16_8_;
        lVar66 = auVar28._24_8_;
        auVar80 = vpsrlq_avx2(auVar72,7);
        auVar71 = vpsllq_avx2(auVar72,0x38);
        lVar57 = uVar42 + *(longlong *)*pauVar48 + (uVar61 & uVar60) + (~uVar60 & uVar62) +
                 ((uVar60 >> 0x29 | uVar60 * 0x800000) ^ (uVar60 >> 0x12 | uVar60 << 0x2e) ^
                 (uVar60 >> 0xe | uVar60 << 0x32));
        auVar77 = vpsrlq_avx2(auVar76,7);
        uVar59 = uVar59 + lVar57;
        auVar72 = vpsllq_avx2(auVar71,7);
        auVar81 = vpsrlq_avx2(auVar27,6);
        auVar72 = auVar80 ^ auVar76 ^ auVar71 ^ auVar77 ^ auVar72;
        auVar77 = vpsllq_avx2(auVar27,3);
        auVar76 = vpsrlq_avx2(auVar27,0x13);
        uVar42 = lVar57 + ((uVar44 ^ uVar39) & (uVar41 ^ uVar44) ^ uVar44) +
                 ((uVar41 >> 0x22 | uVar41 * 0x40000000) ^ (uVar41 >> 0x27 | uVar41 * 0x2000000) ^
                 (uVar41 >> 0x1c | uVar41 << 0x24));
        auVar80 = vpsllq_avx2(auVar77,0x2a);
        auVar71 = vpsrlq_avx2(auVar76,0x2a);
        auVar71 = auVar81 ^ auVar77 ^ auVar76 ^ auVar80 ^ auVar71;
        lVar57 = uVar62 + *(longlong *)(*pauVar48 + 8) + (uVar60 & uVar59) + (~uVar59 & uVar61) +
                 ((uVar59 >> 0x29 | uVar59 * 0x800000) ^ (uVar59 >> 0x12 | uVar59 << 0x2e) ^
                 (uVar59 >> 0xe | uVar59 << 0x32));
        auVar28._0_8_ = auVar28._0_8_ + auVar64._0_8_ + auVar72._0_8_ + auVar71._0_8_;
        auVar28._8_8_ = lVar40 + auVar64._8_8_ + auVar72._8_8_ + auVar71._8_8_;
        auVar28._16_8_ = lVar65 + auVar64._16_8_ + auVar72._16_8_ + auVar71._16_8_;
        auVar28._24_8_ = lVar66 + auVar64._24_8_ + auVar72._24_8_ + auVar71._24_8_;
        uVar39 = uVar39 + lVar57;
        lVar65 = *(longlong *)((longlong)*pauVar50 + 8);
        auVar32 = *pauVar50;
        lVar40 = *(longlong *)pauVar50[1];
        *(longlong *)*pauVar47 = auVar28._0_8_ + *(longlong *)*pauVar50;
        *(longlong *)(pauVar48[-0x10] + 8) = auVar28._8_8_ + lVar65;
        *(longlong *)pauVar48[-0xf] = auVar28._16_8_ + auVar32._16_8_;
        *(longlong *)(pauVar48[-0xf] + 8) = auVar28._24_8_ + lVar40;
        auVar72 = vpalignr_avx2(auVar30,auVar29,8);
        auVar64 = vpalignr_avx2(auVar26,auVar25,8);
        uVar62 = lVar57 + ((uVar41 ^ uVar44) & (uVar42 ^ uVar41) ^ uVar41) +
                 ((uVar42 >> 0x22 | uVar42 * 0x40000000) ^ (uVar42 >> 0x27 | uVar42 * 0x2000000) ^
                 (uVar42 >> 0x1c | uVar42 << 0x24));
        auVar76 = vpsrlq_avx2(auVar72,1);
        lVar40 = auVar29._8_8_;
        lVar65 = auVar29._16_8_;
        lVar66 = auVar29._24_8_;
        auVar80 = vpsrlq_avx2(auVar72,7);
        auVar71 = vpsllq_avx2(auVar72,0x38);
        lVar57 = uVar61 + *(longlong *)pauVar48[2] + (uVar59 & uVar39) + (~uVar39 & uVar60) +
                 ((uVar39 >> 0x29 | uVar39 * 0x800000) ^ (uVar39 >> 0x12 | uVar39 << 0x2e) ^
                 (uVar39 >> 0xe | uVar39 << 0x32));
        auVar77 = vpsrlq_avx2(auVar76,7);
        uVar44 = uVar44 + lVar57;
        auVar72 = vpsllq_avx2(auVar71,7);
        auVar81 = vpsrlq_avx2(auVar28,6);
        auVar72 = auVar80 ^ auVar76 ^ auVar71 ^ auVar77 ^ auVar72;
        auVar77 = vpsllq_avx2(auVar28,3);
        auVar76 = vpsrlq_avx2(auVar28,0x13);
        uVar61 = lVar57 + ((uVar42 ^ uVar41) & (uVar62 ^ uVar42) ^ uVar42) +
                 ((uVar62 >> 0x22 | uVar62 * 0x40000000) ^ (uVar62 >> 0x27 | uVar62 * 0x2000000) ^
                 (uVar62 >> 0x1c | uVar62 << 0x24));
        auVar80 = vpsllq_avx2(auVar77,0x2a);
        auVar71 = vpsrlq_avx2(auVar76,0x2a);
        auVar71 = auVar81 ^ auVar77 ^ auVar76 ^ auVar80 ^ auVar71;
        lVar57 = uVar60 + *(longlong *)(pauVar48[2] + 8) + (uVar39 & uVar44) + (~uVar44 & uVar59) +
                 ((uVar44 >> 0x29 | uVar44 * 0x800000) ^ (uVar44 >> 0x12 | uVar44 << 0x2e) ^
                 (uVar44 >> 0xe | uVar44 << 0x32));
        auVar29._0_8_ = auVar29._0_8_ + auVar64._0_8_ + auVar72._0_8_ + auVar71._0_8_;
        auVar29._8_8_ = lVar40 + auVar64._8_8_ + auVar72._8_8_ + auVar71._8_8_;
        auVar29._16_8_ = lVar65 + auVar64._16_8_ + auVar72._16_8_ + auVar71._16_8_;
        auVar29._24_8_ = lVar66 + auVar64._24_8_ + auVar72._24_8_ + auVar71._24_8_;
        uVar41 = uVar41 + lVar57;
        lVar65 = *(longlong *)((longlong)pauVar50[1] + 0x10);
        auVar32 = *(undefined1 (*) [24])((longlong)pauVar50[1] + 8);
        lVar40 = *(longlong *)((longlong)pauVar50[2] + 8);
        *(longlong *)pauVar48[-0xe] =
             auVar29._0_8_ + *(longlong *)*(undefined1 (*) [24])((longlong)pauVar50[1] + 8);
        *(longlong *)(pauVar48[-0xe] + 8) = auVar29._8_8_ + lVar65;
        *(longlong *)pauVar48[-0xd] = auVar29._16_8_ + auVar32._16_8_;
        *(longlong *)(pauVar48[-0xd] + 8) = auVar29._24_8_ + lVar40;
        auVar72 = vpalignr_avx2(auVar31,auVar30,8);
        auVar64 = vpalignr_avx2(auVar27,auVar26,8);
        uVar60 = lVar57 + ((uVar62 ^ uVar42) & (uVar61 ^ uVar62) ^ uVar62) +
                 ((uVar61 >> 0x22 | uVar61 * 0x40000000) ^ (uVar61 >> 0x27 | uVar61 * 0x2000000) ^
                 (uVar61 >> 0x1c | uVar61 << 0x24));
        auVar76 = vpsrlq_avx2(auVar72,1);
        lVar40 = auVar30._8_8_;
        lVar65 = auVar30._16_8_;
        lVar66 = auVar30._24_8_;
        auVar80 = vpsrlq_avx2(auVar72,7);
        auVar71 = vpsllq_avx2(auVar72,0x38);
        lVar57 = uVar59 + *(longlong *)pauVar48[4] + (uVar44 & uVar41) + (~uVar41 & uVar39) +
                 ((uVar41 >> 0x29 | uVar41 * 0x800000) ^ (uVar41 >> 0x12 | uVar41 << 0x2e) ^
                 (uVar41 >> 0xe | uVar41 << 0x32));
        auVar77 = vpsrlq_avx2(auVar76,7);
        uVar42 = uVar42 + lVar57;
        auVar72 = vpsllq_avx2(auVar71,7);
        auVar81 = vpsrlq_avx2(auVar29,6);
        auVar72 = auVar80 ^ auVar76 ^ auVar71 ^ auVar77 ^ auVar72;
        auVar77 = vpsllq_avx2(auVar29,3);
        auVar76 = vpsrlq_avx2(auVar29,0x13);
        uVar59 = lVar57 + ((uVar61 ^ uVar62) & (uVar60 ^ uVar61) ^ uVar61) +
                 ((uVar60 >> 0x22 | uVar60 * 0x40000000) ^ (uVar60 >> 0x27 | uVar60 * 0x2000000) ^
                 (uVar60 >> 0x1c | uVar60 << 0x24));
        auVar80 = vpsllq_avx2(auVar77,0x2a);
        auVar71 = vpsrlq_avx2(auVar76,0x2a);
        auVar71 = auVar81 ^ auVar77 ^ auVar76 ^ auVar80 ^ auVar71;
        lVar57 = uVar39 + *(longlong *)(pauVar48[4] + 8) + (uVar41 & uVar42) + (~uVar42 & uVar44) +
                 ((uVar42 >> 0x29 | uVar42 * 0x800000) ^ (uVar42 >> 0x12 | uVar42 << 0x2e) ^
                 (uVar42 >> 0xe | uVar42 << 0x32));
        auVar30._0_8_ = auVar30._0_8_ + auVar64._0_8_ + auVar72._0_8_ + auVar71._0_8_;
        auVar30._8_8_ = lVar40 + auVar64._8_8_ + auVar72._8_8_ + auVar71._8_8_;
        auVar30._16_8_ = lVar65 + auVar64._16_8_ + auVar72._16_8_ + auVar71._16_8_;
        auVar30._24_8_ = lVar66 + auVar64._24_8_ + auVar72._24_8_ + auVar71._24_8_;
        uVar62 = uVar62 + lVar57;
        lVar65 = *(longlong *)pauVar50[3];
        auVar32 = *(undefined1 (*) [24])((longlong)pauVar50[2] + 0x10);
        lVar40 = *(longlong *)((longlong)pauVar50[3] + 0x10);
        *(longlong *)pauVar48[-0xc] =
             auVar30._0_8_ + *(longlong *)*(undefined1 (*) [24])((longlong)pauVar50[2] + 0x10);
        *(longlong *)(pauVar48[-0xc] + 8) = auVar30._8_8_ + lVar65;
        *(longlong *)pauVar48[-0xb] = auVar30._16_8_ + auVar32._16_8_;
        *(longlong *)(pauVar48[-0xb] + 8) = auVar30._24_8_ + lVar40;
        auVar72 = vpalignr_avx2(auVar24,auVar31,8);
        auVar64 = vpalignr_avx2(auVar28,auVar27,8);
        uVar39 = lVar57 + ((uVar60 ^ uVar61) & (uVar59 ^ uVar60) ^ uVar60) +
                 ((uVar59 >> 0x22 | uVar59 * 0x40000000) ^ (uVar59 >> 0x27 | uVar59 * 0x2000000) ^
                 (uVar59 >> 0x1c | uVar59 << 0x24));
        auVar76 = vpsrlq_avx2(auVar72,1);
        lVar40 = auVar31._8_8_;
        lVar65 = auVar31._16_8_;
        lVar66 = auVar31._24_8_;
        auVar80 = vpsrlq_avx2(auVar72,7);
        auVar71 = vpsllq_avx2(auVar72,0x38);
        lVar57 = uVar44 + *(longlong *)pauVar48[6] + (uVar42 & uVar62) + (~uVar62 & uVar41) +
                 ((uVar62 >> 0x29 | uVar62 * 0x800000) ^ (uVar62 >> 0x12 | uVar62 << 0x2e) ^
                 (uVar62 >> 0xe | uVar62 << 0x32));
        auVar77 = vpsrlq_avx2(auVar76,7);
        uVar61 = uVar61 + lVar57;
        auVar72 = vpsllq_avx2(auVar71,7);
        auVar81 = vpsrlq_avx2(auVar30,6);
        auVar72 = auVar80 ^ auVar76 ^ auVar71 ^ auVar77 ^ auVar72;
        auVar77 = vpsllq_avx2(auVar30,3);
        auVar76 = vpsrlq_avx2(auVar30,0x13);
        uVar44 = lVar57 + ((uVar59 ^ uVar60) & (uVar39 ^ uVar59) ^ uVar59) +
                 ((uVar39 >> 0x22 | uVar39 * 0x40000000) ^ (uVar39 >> 0x27 | uVar39 * 0x2000000) ^
                 (uVar39 >> 0x1c | uVar39 << 0x24));
        auVar80 = vpsllq_avx2(auVar77,0x2a);
        auVar71 = vpsrlq_avx2(auVar76,0x2a);
        auVar71 = auVar81 ^ auVar77 ^ auVar76 ^ auVar80 ^ auVar71;
        lVar57 = uVar41 + *(longlong *)(pauVar48[6] + 8) + (uVar62 & uVar61) + (~uVar61 & uVar42) +
                 ((uVar61 >> 0x29 | uVar61 * 0x800000) ^ (uVar61 >> 0x12 | uVar61 << 0x2e) ^
                 (uVar61 >> 0xe | uVar61 << 0x32));
        uVar58 = uVar44 ^ uVar39;
        auVar31._0_8_ = auVar31._0_8_ + auVar64._0_8_ + auVar72._0_8_ + auVar71._0_8_;
        auVar31._8_8_ = lVar40 + auVar64._8_8_ + auVar72._8_8_ + auVar71._8_8_;
        auVar31._16_8_ = lVar65 + auVar64._16_8_ + auVar72._16_8_ + auVar71._16_8_;
        auVar31._24_8_ = lVar66 + auVar64._24_8_ + auVar72._24_8_ + auVar71._24_8_;
        uVar60 = uVar60 + lVar57;
        lVar65 = *(longlong *)((longlong)pauVar50[4] + 8);
        auVar32 = pauVar50[4];
        lVar40 = *(longlong *)pauVar50[5];
        uVar63 = (uVar44 >> 0x22 | uVar44 * 0x40000000) ^ (uVar44 >> 0x27 | uVar44 * 0x2000000) ^
                 (uVar44 >> 0x1c | uVar44 << 0x24);
        uVar41 = lVar57 + ((uVar39 ^ uVar59) & uVar58 ^ uVar39);
        *(longlong *)pauVar48[-10] = auVar31._0_8_ + *(longlong *)pauVar50[4];
        *(longlong *)(pauVar48[-10] + 8) = auVar31._8_8_ + lVar65;
        *(longlong *)pauVar48[-9] = auVar31._16_8_ + auVar32._16_8_;
        *(longlong *)(pauVar48[-9] + 8) = auVar31._24_8_ + lVar40;
        pauVar38 = pauVar50 + 5;
        pauVar50 = (undefined1 (*) [24])((longlong)pauVar50[10] + 0x10);
      } while (*(char *)((longlong)*pauVar38 + 0xf) != '\0');
      uVar41 = uVar41 + uVar63;
      lVar57 = uVar42 + *(longlong *)pauVar48[-8] + (uVar61 & uVar60) + (~uVar60 & uVar62) +
               ((uVar60 >> 0x29 | uVar60 * 0x800000) ^ (uVar60 >> 0x12 | uVar60 << 0x2e) ^
               (uVar60 >> 0xe | uVar60 << 0x32));
      uVar59 = uVar59 + lVar57;
      uVar42 = lVar57 + (uVar58 & (uVar41 ^ uVar44) ^ uVar44) +
               ((uVar41 >> 0x22 | uVar41 * 0x40000000) ^ (uVar41 >> 0x27 | uVar41 * 0x2000000) ^
               (uVar41 >> 0x1c | uVar41 << 0x24));
      lVar57 = uVar62 + *(longlong *)(pauVar48[-8] + 8) + (uVar60 & uVar59) + (~uVar59 & uVar61) +
               ((uVar59 >> 0x29 | uVar59 * 0x800000) ^ (uVar59 >> 0x12 | uVar59 << 0x2e) ^
               (uVar59 >> 0xe | uVar59 << 0x32));
      uVar39 = uVar39 + lVar57;
      uVar62 = lVar57 + ((uVar41 ^ uVar44) & (uVar42 ^ uVar41) ^ uVar41) +
               ((uVar42 >> 0x22 | uVar42 * 0x40000000) ^ (uVar42 >> 0x27 | uVar42 * 0x2000000) ^
               (uVar42 >> 0x1c | uVar42 << 0x24));
      lVar57 = uVar61 + *(longlong *)pauVar48[-6] + (uVar59 & uVar39) + (~uVar39 & uVar60) +
               ((uVar39 >> 0x29 | uVar39 * 0x800000) ^ (uVar39 >> 0x12 | uVar39 << 0x2e) ^
               (uVar39 >> 0xe | uVar39 << 0x32));
      uVar44 = uVar44 + lVar57;
      uVar61 = lVar57 + ((uVar42 ^ uVar41) & (uVar62 ^ uVar42) ^ uVar42) +
               ((uVar62 >> 0x22 | uVar62 * 0x40000000) ^ (uVar62 >> 0x27 | uVar62 * 0x2000000) ^
               (uVar62 >> 0x1c | uVar62 << 0x24));
      lVar57 = uVar60 + *(longlong *)(pauVar48[-6] + 8) + (uVar39 & uVar44) + (~uVar44 & uVar59) +
               ((uVar44 >> 0x29 | uVar44 * 0x800000) ^ (uVar44 >> 0x12 | uVar44 << 0x2e) ^
               (uVar44 >> 0xe | uVar44 << 0x32));
      uVar41 = uVar41 + lVar57;
      uVar60 = lVar57 + ((uVar62 ^ uVar42) & (uVar61 ^ uVar62) ^ uVar62) +
               ((uVar61 >> 0x22 | uVar61 * 0x40000000) ^ (uVar61 >> 0x27 | uVar61 * 0x2000000) ^
               (uVar61 >> 0x1c | uVar61 << 0x24));
      lVar57 = uVar59 + *(longlong *)pauVar48[-4] + (uVar44 & uVar41) + (~uVar41 & uVar39) +
               ((uVar41 >> 0x29 | uVar41 * 0x800000) ^ (uVar41 >> 0x12 | uVar41 << 0x2e) ^
               (uVar41 >> 0xe | uVar41 << 0x32));
      uVar42 = uVar42 + lVar57;
      uVar59 = lVar57 + ((uVar61 ^ uVar62) & (uVar60 ^ uVar61) ^ uVar61) +
               ((uVar60 >> 0x22 | uVar60 * 0x40000000) ^ (uVar60 >> 0x27 | uVar60 * 0x2000000) ^
               (uVar60 >> 0x1c | uVar60 << 0x24));
      lVar57 = uVar39 + *(longlong *)(pauVar48[-4] + 8) + (uVar41 & uVar42) + (~uVar42 & uVar44) +
               ((uVar42 >> 0x29 | uVar42 * 0x800000) ^ (uVar42 >> 0x12 | uVar42 << 0x2e) ^
               (uVar42 >> 0xe | uVar42 << 0x32));
      uVar62 = uVar62 + lVar57;
      uVar39 = lVar57 + ((uVar60 ^ uVar61) & (uVar59 ^ uVar60) ^ uVar60) +
               ((uVar59 >> 0x22 | uVar59 * 0x40000000) ^ (uVar59 >> 0x27 | uVar59 * 0x2000000) ^
               (uVar59 >> 0x1c | uVar59 << 0x24));
      lVar57 = uVar44 + *(longlong *)pauVar48[-2] + (uVar42 & uVar62) + (~uVar62 & uVar41) +
               ((uVar62 >> 0x29 | uVar62 * 0x800000) ^ (uVar62 >> 0x12 | uVar62 << 0x2e) ^
               (uVar62 >> 0xe | uVar62 << 0x32));
      uVar61 = uVar61 + lVar57;
      uVar44 = lVar57 + ((uVar59 ^ uVar60) & (uVar39 ^ uVar59) ^ uVar59) +
               ((uVar39 >> 0x22 | uVar39 * 0x40000000) ^ (uVar39 >> 0x27 | uVar39 * 0x2000000) ^
               (uVar39 >> 0x1c | uVar39 << 0x24));
      lVar57 = uVar41 + *(longlong *)(pauVar48[-2] + 8) + (uVar62 & uVar61) + (~uVar61 & uVar42) +
               ((uVar61 >> 0x29 | uVar61 * 0x800000) ^ (uVar61 >> 0x12 | uVar61 << 0x2e) ^
               (uVar61 >> 0xe | uVar61 << 0x32));
      uVar60 = uVar60 + lVar57;
      uVar41 = lVar57 + ((uVar39 ^ uVar59) & (uVar44 ^ uVar39) ^ uVar39) +
               ((uVar44 >> 0x22 | uVar44 * 0x40000000) ^ (uVar44 >> 0x27 | uVar44 * 0x2000000) ^
               (uVar44 >> 0x1c | uVar44 << 0x24));
      lVar57 = uVar42 + *(longlong *)*pauVar47 + (uVar61 & uVar60) + (~uVar60 & uVar62) +
               ((uVar60 >> 0x29 | uVar60 * 0x800000) ^ (uVar60 >> 0x12 | uVar60 << 0x2e) ^
               (uVar60 >> 0xe | uVar60 << 0x32));
      uVar59 = uVar59 + lVar57;
      uVar42 = lVar57 + ((uVar44 ^ uVar39) & (uVar41 ^ uVar44) ^ uVar44) +
               ((uVar41 >> 0x22 | uVar41 * 0x40000000) ^ (uVar41 >> 0x27 | uVar41 * 0x2000000) ^
               (uVar41 >> 0x1c | uVar41 << 0x24));
      lVar57 = uVar62 + *(longlong *)(pauVar48[-0x10] + 8) + (uVar60 & uVar59) + (~uVar59 & uVar61)
               + ((uVar59 >> 0x29 | uVar59 * 0x800000) ^ (uVar59 >> 0x12 | uVar59 << 0x2e) ^
                 (uVar59 >> 0xe | uVar59 << 0x32));
      uVar39 = uVar39 + lVar57;
      uVar62 = lVar57 + ((uVar41 ^ uVar44) & (uVar42 ^ uVar41) ^ uVar41) +
               ((uVar42 >> 0x22 | uVar42 * 0x40000000) ^ (uVar42 >> 0x27 | uVar42 * 0x2000000) ^
               (uVar42 >> 0x1c | uVar42 << 0x24));
      lVar57 = uVar61 + *(longlong *)pauVar48[-0xe] + (uVar59 & uVar39) + (~uVar39 & uVar60) +
               ((uVar39 >> 0x29 | uVar39 * 0x800000) ^ (uVar39 >> 0x12 | uVar39 << 0x2e) ^
               (uVar39 >> 0xe | uVar39 << 0x32));
      uVar44 = uVar44 + lVar57;
      uVar61 = lVar57 + ((uVar42 ^ uVar41) & (uVar62 ^ uVar42) ^ uVar42) +
               ((uVar62 >> 0x22 | uVar62 * 0x40000000) ^ (uVar62 >> 0x27 | uVar62 * 0x2000000) ^
               (uVar62 >> 0x1c | uVar62 << 0x24));
      lVar57 = uVar60 + *(longlong *)(pauVar48[-0xe] + 8) + (uVar39 & uVar44) + (~uVar44 & uVar59) +
               ((uVar44 >> 0x29 | uVar44 * 0x800000) ^ (uVar44 >> 0x12 | uVar44 << 0x2e) ^
               (uVar44 >> 0xe | uVar44 << 0x32));
      uVar41 = uVar41 + lVar57;
      uVar60 = lVar57 + ((uVar62 ^ uVar42) & (uVar61 ^ uVar62) ^ uVar62) +
               ((uVar61 >> 0x22 | uVar61 * 0x40000000) ^ (uVar61 >> 0x27 | uVar61 * 0x2000000) ^
               (uVar61 >> 0x1c | uVar61 << 0x24));
      lVar57 = uVar59 + *(longlong *)pauVar48[-0xc] + (uVar44 & uVar41) + (~uVar41 & uVar39) +
               ((uVar41 >> 0x29 | uVar41 * 0x800000) ^ (uVar41 >> 0x12 | uVar41 << 0x2e) ^
               (uVar41 >> 0xe | uVar41 << 0x32));
      uVar42 = uVar42 + lVar57;
      uVar59 = lVar57 + ((uVar61 ^ uVar62) & (uVar60 ^ uVar61) ^ uVar61) +
               ((uVar60 >> 0x22 | uVar60 * 0x40000000) ^ (uVar60 >> 0x27 | uVar60 * 0x2000000) ^
               (uVar60 >> 0x1c | uVar60 << 0x24));
      lVar57 = uVar39 + *(longlong *)(pauVar48[-0xc] + 8) + (uVar41 & uVar42) + (~uVar42 & uVar44) +
               ((uVar42 >> 0x29 | uVar42 * 0x800000) ^ (uVar42 >> 0x12 | uVar42 << 0x2e) ^
               (uVar42 >> 0xe | uVar42 << 0x32));
      uVar62 = uVar62 + lVar57;
      uVar39 = lVar57 + ((uVar60 ^ uVar61) & (uVar59 ^ uVar60) ^ uVar60) +
               ((uVar59 >> 0x22 | uVar59 * 0x40000000) ^ (uVar59 >> 0x27 | uVar59 * 0x2000000) ^
               (uVar59 >> 0x1c | uVar59 << 0x24));
      lVar57 = uVar44 + *(longlong *)pauVar48[-10] + (uVar42 & uVar62) + (~uVar62 & uVar41) +
               ((uVar62 >> 0x29 | uVar62 * 0x800000) ^ (uVar62 >> 0x12 | uVar62 << 0x2e) ^
               (uVar62 >> 0xe | uVar62 << 0x32));
      uVar61 = uVar61 + lVar57;
      uVar44 = lVar57 + ((uVar59 ^ uVar60) & (uVar39 ^ uVar59) ^ uVar59) +
               ((uVar39 >> 0x22 | uVar39 * 0x40000000) ^ (uVar39 >> 0x27 | uVar39 * 0x2000000) ^
               (uVar39 >> 0x1c | uVar39 << 0x24));
      lVar57 = uVar41 + *(longlong *)(pauVar48[-10] + 8) + (uVar62 & uVar61) + (~uVar61 & uVar42) +
               ((uVar61 >> 0x29 | uVar61 * 0x800000) ^ (uVar61 >> 0x12 | uVar61 << 0x2e) ^
               (uVar61 >> 0xe | uVar61 << 0x32));
      plVar49 = *(longlong **)pauVar48[0x40];
      pauVar51 = pauVar48 + 0x38;
      lVar40 = lVar57 + ((uVar39 ^ uVar59) & (uVar44 ^ uVar39) ^ uVar39) +
               ((uVar44 >> 0x22 | uVar44 * 0x40000000) ^ (uVar44 >> 0x27 | uVar44 * 0x2000000) ^
               (uVar44 >> 0x1c | uVar44 << 0x24)) + *plVar49;
      uVar44 = uVar44 + plVar49[1];
      uVar39 = uVar39 + plVar49[2];
      uVar59 = uVar59 + plVar49[3];
      uVar60 = uVar60 + lVar57 + plVar49[4];
      uVar61 = uVar61 + plVar49[5];
      uVar62 = uVar62 + plVar49[6];
      uVar42 = uVar42 + plVar49[7];
      *plVar49 = lVar40;
      plVar49[1] = uVar44;
      plVar49[2] = uVar39;
      plVar49[3] = uVar59;
      plVar49[4] = uVar60;
      plVar49[5] = uVar61;
      plVar49[6] = uVar62;
      plVar49[7] = uVar42;
      if (pauVar52 == *(undefined1 (**) [16])pauVar48[0x41]) {
        return;
      }
      uVar41 = 0;
      uVar58 = uVar44 ^ uVar39;
      do {
        uVar41 = lVar40 + uVar41;
        lVar57 = uVar42 + *(longlong *)pauVar51[1] + (uVar61 & uVar60) + (~uVar60 & uVar62) +
                 ((uVar60 >> 0x29 | uVar60 << 0x17) ^ (uVar60 >> 0x12 | uVar60 << 0x2e) ^
                 (uVar60 >> 0xe | uVar60 << 0x32));
        uVar59 = uVar59 + lVar57;
        uVar42 = lVar57 + (uVar58 & (uVar41 ^ uVar44) ^ uVar44) +
                 ((uVar41 >> 0x22 | uVar41 * 0x40000000) ^ (uVar41 >> 0x27 | uVar41 * 0x2000000) ^
                 (uVar41 >> 0x1c | uVar41 << 0x24));
        lVar57 = uVar62 + *(longlong *)(pauVar51[1] + 8) + (uVar60 & uVar59) + (~uVar59 & uVar61) +
                 ((uVar59 >> 0x29 | uVar59 * 0x800000) ^ (uVar59 >> 0x12 | uVar59 << 0x2e) ^
                 (uVar59 >> 0xe | uVar59 << 0x32));
        uVar39 = uVar39 + lVar57;
        uVar62 = lVar57 + ((uVar41 ^ uVar44) & (uVar42 ^ uVar41) ^ uVar41) +
                 ((uVar42 >> 0x22 | uVar42 * 0x40000000) ^ (uVar42 >> 0x27 | uVar42 * 0x2000000) ^
                 (uVar42 >> 0x1c | uVar42 << 0x24));
        lVar57 = uVar61 + *(longlong *)pauVar51[3] + (uVar59 & uVar39) + (~uVar39 & uVar60) +
                 ((uVar39 >> 0x29 | uVar39 * 0x800000) ^ (uVar39 >> 0x12 | uVar39 << 0x2e) ^
                 (uVar39 >> 0xe | uVar39 << 0x32));
        uVar44 = uVar44 + lVar57;
        uVar61 = lVar57 + ((uVar42 ^ uVar41) & (uVar62 ^ uVar42) ^ uVar42) +
                 ((uVar62 >> 0x22 | uVar62 * 0x40000000) ^ (uVar62 >> 0x27 | uVar62 * 0x2000000) ^
                 (uVar62 >> 0x1c | uVar62 << 0x24));
        lVar57 = uVar60 + *(longlong *)(pauVar51[3] + 8) + (uVar39 & uVar44) + (~uVar44 & uVar59) +
                 ((uVar44 >> 0x29 | uVar44 * 0x800000) ^ (uVar44 >> 0x12 | uVar44 << 0x2e) ^
                 (uVar44 >> 0xe | uVar44 << 0x32));
        uVar41 = uVar41 + lVar57;
        uVar60 = lVar57 + ((uVar62 ^ uVar42) & (uVar61 ^ uVar62) ^ uVar62) +
                 ((uVar61 >> 0x22 | uVar61 * 0x40000000) ^ (uVar61 >> 0x27 | uVar61 * 0x2000000) ^
                 (uVar61 >> 0x1c | uVar61 << 0x24));
        lVar57 = uVar59 + *(longlong *)pauVar51[5] + (uVar44 & uVar41) + (~uVar41 & uVar39) +
                 ((uVar41 >> 0x29 | uVar41 * 0x800000) ^ (uVar41 >> 0x12 | uVar41 << 0x2e) ^
                 (uVar41 >> 0xe | uVar41 << 0x32));
        uVar42 = uVar42 + lVar57;
        uVar59 = lVar57 + ((uVar61 ^ uVar62) & (uVar60 ^ uVar61) ^ uVar61) +
                 ((uVar60 >> 0x22 | uVar60 * 0x40000000) ^ (uVar60 >> 0x27 | uVar60 * 0x2000000) ^
                 (uVar60 >> 0x1c | uVar60 << 0x24));
        lVar57 = uVar39 + *(longlong *)(pauVar51[5] + 8) + (uVar41 & uVar42) + (~uVar42 & uVar44) +
                 ((uVar42 >> 0x29 | uVar42 * 0x800000) ^ (uVar42 >> 0x12 | uVar42 << 0x2e) ^
                 (uVar42 >> 0xe | uVar42 << 0x32));
        uVar62 = uVar62 + lVar57;
        uVar39 = lVar57 + ((uVar60 ^ uVar61) & (uVar59 ^ uVar60) ^ uVar60) +
                 ((uVar59 >> 0x22 | uVar59 * 0x40000000) ^ (uVar59 >> 0x27 | uVar59 * 0x2000000) ^
                 (uVar59 >> 0x1c | uVar59 << 0x24));
        lVar57 = uVar44 + *(longlong *)pauVar51[7] + (uVar42 & uVar62) + (~uVar62 & uVar41) +
                 ((uVar62 >> 0x29 | uVar62 * 0x800000) ^ (uVar62 >> 0x12 | uVar62 << 0x2e) ^
                 (uVar62 >> 0xe | uVar62 << 0x32));
        uVar61 = uVar61 + lVar57;
        uVar44 = lVar57 + ((uVar59 ^ uVar60) & (uVar39 ^ uVar59) ^ uVar59) +
                 ((uVar39 >> 0x22 | uVar39 * 0x40000000) ^ (uVar39 >> 0x27 | uVar39 * 0x2000000) ^
                 (uVar39 >> 0x1c | uVar39 << 0x24));
        lVar40 = uVar41 + *(longlong *)(pauVar51[7] + 8) + (uVar62 & uVar61) + (~uVar61 & uVar42) +
                 ((uVar61 >> 0x29 | uVar61 * 0x800000) ^ (uVar61 >> 0x12 | uVar61 << 0x2e) ^
                 (uVar61 >> 0xe | uVar61 << 0x32));
        uVar58 = uVar44 ^ uVar39;
        uVar60 = uVar60 + lVar40;
        uVar41 = (uVar44 >> 0x22 | uVar44 * 0x40000000) ^ (uVar44 >> 0x27 | uVar44 * 0x2000000) ^
                 (uVar44 >> 0x1c | uVar44 << 0x24);
        lVar40 = lVar40 + ((uVar39 ^ uVar59) & uVar58 ^ uVar39);
        pauVar51 = pauVar51 + -8;
      } while (pauVar47 <= pauVar51);
      puVar2 = *(ulonglong **)pauVar48[0x40];
      pauVar47 = pauVar48 + 0x38;
      uVar41 = lVar40 + uVar41 + *puVar2;
      uVar44 = uVar44 + puVar2[1];
      uVar39 = uVar39 + puVar2[2];
      uVar59 = uVar59 + puVar2[3];
      uVar60 = uVar60 + puVar2[4];
      uVar61 = uVar61 + puVar2[5];
      pauVar52 = pauVar52 + 0x10;
      uVar62 = uVar62 + puVar2[6];
      uVar42 = uVar42 + puVar2[7];
      pauVar3 = *(undefined1 (**) [16])pauVar48[0x41];
      *puVar2 = uVar41;
      pauVar51 = pauVar52;
      if (pauVar52 == pauVar3) {
        pauVar51 = pauVar47;
      }
      puVar2[1] = uVar44;
      puVar2[2] = uVar39;
      puVar2[3] = uVar59;
      puVar2[4] = uVar60;
      puVar2[5] = uVar61;
      puVar2[6] = uVar62;
      puVar2[7] = uVar42;
    } while (pauVar52 <= pauVar3);
    return;
  }
  if ((DAT_15540a9f4 & 0x10000200 | OPENSSL_ia32cap_P & 0x40000000) != 0x50000200) {
    pauVar52 = param_2 + param_3 * 8;
    uVar39 = *param_1;
    uVar44 = param_1[1];
    uVar41 = param_1[2];
    uVar42 = param_1[3];
    uVar62 = param_1[4];
    uVar61 = param_1[5];
    uVar60 = param_1[6];
    uVar59 = param_1[7];
    do {
      uVar58 = *(ulonglong *)*param_2;
      auStack_100._0_8_ =
           uVar58 >> 0x38 | (uVar58 & 0xff000000000000) >> 0x28 | (uVar58 & 0xff0000000000) >> 0x18
           | (uVar58 & 0xff00000000) >> 8 | (uVar58 & 0xff000000) << 8 | (uVar58 & 0xff0000) << 0x18
           | (uVar58 & 0xff00) << 0x28 | uVar58 << 0x38;
      uVar58 = (uVar62 >> 0x17 | uVar62 << 0x29) ^ uVar62;
      uVar63 = (uVar39 >> 5 | uVar39 << 0x3b) ^ uVar39;
      uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar62;
      uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar39;
      lVar57 = auStack_100._0_8_ + uVar59 + ((uVar61 ^ uVar60) & uVar62 ^ uVar60) + K512 +
               (uVar58 >> 0xe | uVar58 << 0x32);
      uVar42 = uVar42 + lVar57;
      uVar56 = (uVar44 ^ (uVar44 ^ uVar41) & (uVar39 ^ uVar44)) + lVar57 +
               (uVar63 >> 0x1c | uVar63 << 0x24);
      uVar59 = *(ulonglong *)(*param_2 + 8);
      auStack_100._8_8_ =
           uVar59 >> 0x38 | (uVar59 & 0xff000000000000) >> 0x28 | (uVar59 & 0xff0000000000) >> 0x18
           | (uVar59 & 0xff00000000) >> 8 | (uVar59 & 0xff000000) << 8 | (uVar59 & 0xff0000) << 0x18
           | (uVar59 & 0xff00) << 0x28 | uVar59 << 0x38;
      uVar59 = (uVar42 >> 0x17 | uVar42 << 0x29) ^ uVar42;
      uVar58 = (uVar56 >> 5 | uVar56 << 0x3b) ^ uVar56;
      uVar59 = (uVar59 >> 4 | uVar59 << 0x3c) ^ uVar42;
      uVar58 = (uVar58 >> 6 | uVar58 << 0x3a) ^ uVar56;
      lVar57 = auStack_100._8_8_ + uVar60 + ((uVar62 ^ uVar61) & uVar42 ^ uVar61) + DAT_140e26808 +
               (uVar59 >> 0xe | uVar59 << 0x32);
      uVar41 = uVar41 + lVar57;
      uVar55 = (uVar39 ^ (uVar39 ^ uVar44) & (uVar56 ^ uVar39)) + lVar57 +
               (uVar58 >> 0x1c | uVar58 << 0x24);
      uVar60 = *(ulonglong *)param_2[1];
      auStack_f0._0_8_ =
           uVar60 >> 0x38 | (uVar60 & 0xff000000000000) >> 0x28 | (uVar60 & 0xff0000000000) >> 0x18
           | (uVar60 & 0xff00000000) >> 8 | (uVar60 & 0xff000000) << 8 | (uVar60 & 0xff0000) << 0x18
           | (uVar60 & 0xff00) << 0x28 | uVar60 << 0x38;
      uVar60 = (uVar41 >> 0x17 | uVar41 << 0x29) ^ uVar41;
      uVar59 = (uVar55 >> 5 | uVar55 << 0x3b) ^ uVar55;
      uVar60 = (uVar60 >> 4 | uVar60 << 0x3c) ^ uVar41;
      uVar59 = (uVar59 >> 6 | uVar59 << 0x3a) ^ uVar55;
      lVar57 = auStack_f0._0_8_ + uVar61 + ((uVar42 ^ uVar62) & uVar41 ^ uVar62) + DAT_140e26820 +
               (uVar60 >> 0xe | uVar60 << 0x32);
      uVar44 = uVar44 + lVar57;
      uVar54 = (uVar56 ^ (uVar56 ^ uVar39) & (uVar55 ^ uVar56)) + lVar57 +
               (uVar59 >> 0x1c | uVar59 << 0x24);
      uVar61 = *(ulonglong *)(param_2[1] + 8);
      auStack_f0._8_8_ =
           uVar61 >> 0x38 | (uVar61 & 0xff000000000000) >> 0x28 | (uVar61 & 0xff0000000000) >> 0x18
           | (uVar61 & 0xff00000000) >> 8 | (uVar61 & 0xff000000) << 8 | (uVar61 & 0xff0000) << 0x18
           | (uVar61 & 0xff00) << 0x28 | uVar61 << 0x38;
      uVar61 = (uVar44 >> 0x17 | uVar44 << 0x29) ^ uVar44;
      uVar60 = (uVar54 >> 5 | uVar54 << 0x3b) ^ uVar54;
      uVar61 = (uVar61 >> 4 | uVar61 << 0x3c) ^ uVar44;
      uVar60 = (uVar60 >> 6 | uVar60 << 0x3a) ^ uVar54;
      lVar57 = auStack_f0._8_8_ + uVar62 + ((uVar41 ^ uVar42) & uVar44 ^ uVar42) + DAT_140e26828 +
               (uVar61 >> 0xe | uVar61 << 0x32);
      uVar39 = uVar39 + lVar57;
      uVar53 = (uVar55 ^ (uVar55 ^ uVar56) & (uVar54 ^ uVar55)) + lVar57 +
               (uVar60 >> 0x1c | uVar60 << 0x24);
      uVar62 = *(ulonglong *)param_2[2];
      auStack_e0._0_8_ =
           uVar62 >> 0x38 | (uVar62 & 0xff000000000000) >> 0x28 | (uVar62 & 0xff0000000000) >> 0x18
           | (uVar62 & 0xff00000000) >> 8 | (uVar62 & 0xff000000) << 8 | (uVar62 & 0xff0000) << 0x18
           | (uVar62 & 0xff00) << 0x28 | uVar62 << 0x38;
      uVar62 = (uVar39 >> 0x17 | uVar39 << 0x29) ^ uVar39;
      uVar61 = (uVar53 >> 5 | uVar53 << 0x3b) ^ uVar53;
      uVar62 = (uVar62 >> 4 | uVar62 << 0x3c) ^ uVar39;
      uVar61 = (uVar61 >> 6 | uVar61 << 0x3a) ^ uVar53;
      lVar57 = auStack_e0._0_8_ + uVar42 + ((uVar44 ^ uVar41) & uVar39 ^ uVar41) + DAT_140e26840 +
               (uVar62 >> 0xe | uVar62 << 0x32);
      uVar56 = uVar56 + lVar57;
      uVar43 = (uVar54 ^ (uVar54 ^ uVar55) & (uVar53 ^ uVar54)) + lVar57 +
               (uVar61 >> 0x1c | uVar61 << 0x24);
      uVar42 = *(ulonglong *)(param_2[2] + 8);
      auStack_e0._8_8_ =
           uVar42 >> 0x38 | (uVar42 & 0xff000000000000) >> 0x28 | (uVar42 & 0xff0000000000) >> 0x18
           | (uVar42 & 0xff00000000) >> 8 | (uVar42 & 0xff000000) << 8 | (uVar42 & 0xff0000) << 0x18
           | (uVar42 & 0xff00) << 0x28 | uVar42 << 0x38;
      uVar42 = (uVar56 >> 0x17 | uVar56 << 0x29) ^ uVar56;
      uVar62 = (uVar43 >> 5 | uVar43 << 0x3b) ^ uVar43;
      uVar42 = (uVar42 >> 4 | uVar42 << 0x3c) ^ uVar56;
      uVar62 = (uVar62 >> 6 | uVar62 << 0x3a) ^ uVar43;
      lVar57 = auStack_e0._8_8_ + uVar41 + ((uVar39 ^ uVar44) & uVar56 ^ uVar44) + DAT_140e26848 +
               (uVar42 >> 0xe | uVar42 << 0x32);
      uVar55 = uVar55 + lVar57;
      uVar63 = (uVar53 ^ (uVar53 ^ uVar54) & (uVar43 ^ uVar53)) + lVar57 +
               (uVar62 >> 0x1c | uVar62 << 0x24);
      uVar41 = *(ulonglong *)param_2[3];
      auStack_d0._0_8_ =
           uVar41 >> 0x38 | (uVar41 & 0xff000000000000) >> 0x28 | (uVar41 & 0xff0000000000) >> 0x18
           | (uVar41 & 0xff00000000) >> 8 | (uVar41 & 0xff000000) << 8 | (uVar41 & 0xff0000) << 0x18
           | (uVar41 & 0xff00) << 0x28 | uVar41 << 0x38;
      uVar41 = (uVar55 >> 0x17 | uVar55 << 0x29) ^ uVar55;
      uVar42 = (uVar63 >> 5 | uVar63 << 0x3b) ^ uVar63;
      uVar41 = (uVar41 >> 4 | uVar41 << 0x3c) ^ uVar55;
      uVar42 = (uVar42 >> 6 | uVar42 << 0x3a) ^ uVar63;
      lVar57 = auStack_d0._0_8_ + uVar44 + ((uVar56 ^ uVar39) & uVar55 ^ uVar39) + DAT_140e26860 +
               (uVar41 >> 0xe | uVar41 << 0x32);
      uVar54 = uVar54 + lVar57;
      uVar45 = (uVar43 ^ (uVar43 ^ uVar53) & (uVar63 ^ uVar43)) + lVar57 +
               (uVar42 >> 0x1c | uVar42 << 0x24);
      uVar44 = *(ulonglong *)(param_2[3] + 8);
      auStack_d0._8_8_ =
           uVar44 >> 0x38 | (uVar44 & 0xff000000000000) >> 0x28 | (uVar44 & 0xff0000000000) >> 0x18
           | (uVar44 & 0xff00000000) >> 8 | (uVar44 & 0xff000000) << 8 | (uVar44 & 0xff0000) << 0x18
           | (uVar44 & 0xff00) << 0x28 | uVar44 << 0x38;
      uVar44 = (uVar54 >> 0x17 | uVar54 << 0x29) ^ uVar54;
      uVar41 = (uVar45 >> 5 | uVar45 << 0x3b) ^ uVar45;
      uVar44 = (uVar44 >> 4 | uVar44 << 0x3c) ^ uVar54;
      uVar41 = (uVar41 >> 6 | uVar41 << 0x3a) ^ uVar45;
      lVar57 = auStack_d0._8_8_ + uVar39 + ((uVar55 ^ uVar56) & uVar54 ^ uVar56) + DAT_140e26868 +
               (uVar44 >> 0xe | uVar44 << 0x32);
      uVar53 = uVar53 + lVar57;
      uVar58 = (uVar63 ^ (uVar63 ^ uVar43) & (uVar45 ^ uVar63)) + lVar57 +
               (uVar41 >> 0x1c | uVar41 << 0x24);
      uVar39 = *(ulonglong *)param_2[4];
      uStack_c0 = uVar39 >> 0x38 | (uVar39 & 0xff000000000000) >> 0x28 |
                  (uVar39 & 0xff0000000000) >> 0x18 | (uVar39 & 0xff00000000) >> 8 |
                  (uVar39 & 0xff000000) << 8 | (uVar39 & 0xff0000) << 0x18 |
                  (uVar39 & 0xff00) << 0x28 | uVar39 << 0x38;
      uVar39 = (uVar53 >> 0x17 | uVar53 << 0x29) ^ uVar53;
      uVar44 = (uVar58 >> 5 | uVar58 << 0x3b) ^ uVar58;
      uVar39 = (uVar39 >> 4 | uVar39 << 0x3c) ^ uVar53;
      uVar44 = (uVar44 >> 6 | uVar44 << 0x3a) ^ uVar58;
      lVar57 = uStack_c0 + uVar56 + ((uVar54 ^ uVar55) & uVar53 ^ uVar55) + DAT_140e26880 +
               (uVar39 >> 0xe | uVar39 << 0x32);
      uVar43 = uVar43 + lVar57;
      uVar59 = (uVar45 ^ (uVar45 ^ uVar63) & (uVar58 ^ uVar45)) + lVar57 +
               (uVar44 >> 0x1c | uVar44 << 0x24);
      uVar39 = *(ulonglong *)(param_2[4] + 8);
      uStack_b8 = uVar39 >> 0x38 | (uVar39 & 0xff000000000000) >> 0x28 |
                  (uVar39 & 0xff0000000000) >> 0x18 | (uVar39 & 0xff00000000) >> 8 |
                  (uVar39 & 0xff000000) << 8 | (uVar39 & 0xff0000) << 0x18 |
                  (uVar39 & 0xff00) << 0x28 | uVar39 << 0x38;
      uVar39 = (uVar43 >> 0x17 | uVar43 << 0x29) ^ uVar43;
      uVar44 = (uVar59 >> 5 | uVar59 << 0x3b) ^ uVar59;
      uVar39 = (uVar39 >> 4 | uVar39 << 0x3c) ^ uVar43;
      uVar44 = (uVar44 >> 6 | uVar44 << 0x3a) ^ uVar59;
      lVar57 = uStack_b8 + uVar55 + ((uVar53 ^ uVar54) & uVar43 ^ uVar54) + DAT_140e26888 +
               (uVar39 >> 0xe | uVar39 << 0x32);
      uVar63 = uVar63 + lVar57;
      uVar60 = (uVar58 ^ (uVar58 ^ uVar45) & (uVar59 ^ uVar58)) + lVar57 +
               (uVar44 >> 0x1c | uVar44 << 0x24);
      uVar39 = *(ulonglong *)param_2[5];
      uStack_b0 = uVar39 >> 0x38 | (uVar39 & 0xff000000000000) >> 0x28 |
                  (uVar39 & 0xff0000000000) >> 0x18 | (uVar39 & 0xff00000000) >> 8 |
                  (uVar39 & 0xff000000) << 8 | (uVar39 & 0xff0000) << 0x18 |
                  (uVar39 & 0xff00) << 0x28 | uVar39 << 0x38;
      uVar39 = (uVar63 >> 0x17 | uVar63 << 0x29) ^ uVar63;
      uVar44 = (uVar60 >> 5 | uVar60 << 0x3b) ^ uVar60;
      uVar39 = (uVar39 >> 4 | uVar39 << 0x3c) ^ uVar63;
      uVar44 = (uVar44 >> 6 | uVar44 << 0x3a) ^ uVar60;
      lVar57 = uStack_b0 + uVar54 + ((uVar43 ^ uVar53) & uVar63 ^ uVar53) + DAT_140e268a0 +
               (uVar39 >> 0xe | uVar39 << 0x32);
      uVar45 = uVar45 + lVar57;
      uVar61 = (uVar59 ^ (uVar59 ^ uVar58) & (uVar60 ^ uVar59)) + lVar57 +
               (uVar44 >> 0x1c | uVar44 << 0x24);
      uVar39 = *(ulonglong *)(param_2[5] + 8);
      uVar54 = uVar39 >> 0x38 | (uVar39 & 0xff000000000000) >> 0x28 |
               (uVar39 & 0xff0000000000) >> 0x18 | (uVar39 & 0xff00000000) >> 8 |
               (uVar39 & 0xff000000) << 8 | (uVar39 & 0xff0000) << 0x18 | (uVar39 & 0xff00) << 0x28
               | uVar39 << 0x38;
      uVar39 = (uVar45 >> 0x17 | uVar45 << 0x29) ^ uVar45;
      uVar44 = (uVar61 >> 5 | uVar61 << 0x3b) ^ uVar61;
      uVar39 = (uVar39 >> 4 | uVar39 << 0x3c) ^ uVar45;
      uVar44 = (uVar44 >> 6 | uVar44 << 0x3a) ^ uVar61;
      lVar57 = uVar54 + uVar53 + ((uVar63 ^ uVar43) & uVar45 ^ uVar43) + DAT_140e268a8 +
               (uVar39 >> 0xe | uVar39 << 0x32);
      uVar58 = uVar58 + lVar57;
      uVar62 = (uVar60 ^ (uVar60 ^ uVar59) & (uVar61 ^ uVar60)) + lVar57 +
               (uVar44 >> 0x1c | uVar44 << 0x24);
      uVar39 = *(ulonglong *)param_2[6];
      uStack_a0 = uVar39 >> 0x38 | (uVar39 & 0xff000000000000) >> 0x28 |
                  (uVar39 & 0xff0000000000) >> 0x18 | (uVar39 & 0xff00000000) >> 8 |
                  (uVar39 & 0xff000000) << 8 | (uVar39 & 0xff0000) << 0x18 |
                  (uVar39 & 0xff00) << 0x28 | uVar39 << 0x38;
      uVar39 = (uVar58 >> 0x17 | uVar58 << 0x29) ^ uVar58;
      uVar44 = (uVar62 >> 5 | uVar62 << 0x3b) ^ uVar62;
      uVar39 = (uVar39 >> 4 | uVar39 << 0x3c) ^ uVar58;
      uVar44 = (uVar44 >> 6 | uVar44 << 0x3a) ^ uVar62;
      lVar57 = uStack_a0 + uVar43 + ((uVar45 ^ uVar63) & uVar58 ^ uVar63) + DAT_140e268c0 +
               (uVar39 >> 0xe | uVar39 << 0x32);
      uVar59 = uVar59 + lVar57;
      uVar42 = (uVar61 ^ (uVar61 ^ uVar60) & (uVar62 ^ uVar61)) + lVar57 +
               (uVar44 >> 0x1c | uVar44 << 0x24);
      uVar39 = *(ulonglong *)(param_2[6] + 8);
      uStack_98 = uVar39 >> 0x38 | (uVar39 & 0xff000000000000) >> 0x28 |
                  (uVar39 & 0xff0000000000) >> 0x18 | (uVar39 & 0xff00000000) >> 8 |
                  (uVar39 & 0xff000000) << 8 | (uVar39 & 0xff0000) << 0x18 |
                  (uVar39 & 0xff00) << 0x28 | uVar39 << 0x38;
      uVar39 = (uVar59 >> 0x17 | uVar59 << 0x29) ^ uVar59;
      uVar44 = (uVar42 >> 5 | uVar42 << 0x3b) ^ uVar42;
      uVar39 = (uVar39 >> 4 | uVar39 << 0x3c) ^ uVar59;
      uVar44 = (uVar44 >> 6 | uVar44 << 0x3a) ^ uVar42;
      lVar57 = uStack_98 + uVar63 + ((uVar58 ^ uVar45) & uVar59 ^ uVar45) + DAT_140e268c8 +
               (uVar39 >> 0xe | uVar39 << 0x32);
      uVar60 = uVar60 + lVar57;
      uVar41 = (uVar62 ^ (uVar62 ^ uVar61) & (uVar42 ^ uVar62)) + lVar57 +
               (uVar44 >> 0x1c | uVar44 << 0x24);
      uVar39 = *(ulonglong *)param_2[7];
      uStack_90 = uVar39 >> 0x38 | (uVar39 & 0xff000000000000) >> 0x28 |
                  (uVar39 & 0xff0000000000) >> 0x18 | (uVar39 & 0xff00000000) >> 8 |
                  (uVar39 & 0xff000000) << 8 | (uVar39 & 0xff0000) << 0x18 |
                  (uVar39 & 0xff00) << 0x28 | uVar39 << 0x38;
      uVar39 = (uVar60 >> 0x17 | uVar60 << 0x29) ^ uVar60;
      uVar44 = (uVar41 >> 5 | uVar41 << 0x3b) ^ uVar41;
      uVar39 = (uVar39 >> 4 | uVar39 << 0x3c) ^ uVar60;
      uVar44 = (uVar44 >> 6 | uVar44 << 0x3a) ^ uVar41;
      lVar57 = uStack_90 + uVar45 + ((uVar59 ^ uVar58) & uVar60 ^ uVar58) + DAT_140e268e0 +
               (uVar39 >> 0xe | uVar39 << 0x32);
      uVar61 = uVar61 + lVar57;
      uVar44 = (uVar42 ^ (uVar42 ^ uVar62) & (uVar41 ^ uVar42)) + lVar57 +
               (uVar44 >> 0x1c | uVar44 << 0x24);
      uVar39 = *(ulonglong *)(param_2[7] + 8);
      uStack_88 = uVar39 >> 0x38 | (uVar39 & 0xff000000000000) >> 0x28 |
                  (uVar39 & 0xff0000000000) >> 0x18 | (uVar39 & 0xff00000000) >> 8 |
                  (uVar39 & 0xff000000) << 8 | (uVar39 & 0xff0000) << 0x18 |
                  (uVar39 & 0xff00) << 0x28 | uVar39 << 0x38;
      uVar39 = (uVar61 >> 0x17 | uVar61 << 0x29) ^ uVar61;
      uVar63 = (uVar44 >> 5 | uVar44 << 0x3b) ^ uVar44;
      uVar43 = (uVar39 >> 4 | uVar39 << 0x3c) ^ uVar61;
      uVar39 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar44;
      uVar63 = uVar44 ^ uVar41;
      uVar39 = uVar39 >> 0x1c | uVar39 << 0x24;
      lVar57 = uStack_88 + uVar58 + ((uVar60 ^ uVar59) & uVar61 ^ uVar59) + DAT_140e268e8 +
               (uVar43 >> 0xe | uVar43 << 0x32);
      uVar62 = uVar62 + lVar57;
      lVar57 = (uVar41 ^ (uVar41 ^ uVar42) & uVar63) + lVar57;
      plVar49 = &DAT_140e26900;
      do {
        uVar39 = lVar57 + uVar39;
        uVar58 = ((ulonglong)auStack_100._8_8_ >> 7 | auStack_100._8_8_ << 0x39) ^ auStack_100._8_8_
        ;
        uVar43 = (uStack_90 >> 0x2a | uStack_90 << 0x16) ^ uStack_90;
        auStack_100._0_8_ =
             ((ulonglong)auStack_100._8_8_ >> 7 ^
             (uVar58 >> 1 | (ulonglong)((uVar58 & 1) != 0) << 0x3f)) + uStack_b8 + auStack_100._0_8_
             + ((uVar43 >> 0x13 | uVar43 << 0x2d) ^ uStack_90 >> 6);
        uVar58 = (uVar62 >> 0x17 | uVar62 << 0x29) ^ uVar62;
        uVar43 = (uVar39 >> 5 | uVar39 << 0x3b) ^ uVar39;
        uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar62;
        uVar43 = (uVar43 >> 6 | uVar43 << 0x3a) ^ uVar39;
        lVar57 = auStack_100._0_8_ + uVar59 + ((uVar61 ^ uVar60) & uVar62 ^ uVar60) + *plVar49 +
                 (uVar58 >> 0xe | uVar58 << 0x32);
        uVar42 = uVar42 + lVar57;
        uVar45 = (uVar44 ^ uVar63 & (uVar39 ^ uVar44)) + lVar57 + (uVar43 >> 0x1c | uVar43 << 0x24);
        uVar58 = ((ulonglong)auStack_f0._0_8_ >> 7 | auStack_f0._0_8_ << 0x39) ^ auStack_f0._0_8_;
        uVar59 = (uStack_88 >> 0x2a | uStack_88 << 0x16) ^ uStack_88;
        auStack_100._8_8_ =
             ((ulonglong)auStack_f0._0_8_ >> 7 ^
             (uVar58 >> 1 | (ulonglong)((uVar58 & 1) != 0) << 0x3f)) + uStack_b0 + auStack_100._8_8_
             + ((uVar59 >> 0x13 | uVar59 << 0x2d) ^ uStack_88 >> 6);
        uVar59 = (uVar42 >> 0x17 | uVar42 << 0x29) ^ uVar42;
        uVar58 = (uVar45 >> 5 | uVar45 << 0x3b) ^ uVar45;
        uVar59 = (uVar59 >> 4 | uVar59 << 0x3c) ^ uVar42;
        uVar58 = (uVar58 >> 6 | uVar58 << 0x3a) ^ uVar45;
        lVar57 = auStack_100._8_8_ + uVar60 + ((uVar62 ^ uVar61) & uVar42 ^ uVar61) + plVar49[1] +
                 (uVar59 >> 0xe | uVar59 << 0x32);
        uVar41 = uVar41 + lVar57;
        uVar60 = (uVar39 ^ (uVar39 ^ uVar44) & (uVar45 ^ uVar39)) + lVar57 +
                 (uVar58 >> 0x1c | uVar58 << 0x24);
        uVar59 = ((ulonglong)auStack_f0._8_8_ >> 7 | auStack_f0._8_8_ << 0x39) ^ auStack_f0._8_8_;
        uVar58 = ((ulonglong)auStack_100._0_8_ >> 0x2a | auStack_100._0_8_ * 0x400000) ^
                 auStack_100._0_8_;
        auStack_f0._0_8_ =
             ((ulonglong)auStack_f0._8_8_ >> 7 ^
             (uVar59 >> 1 | (ulonglong)((uVar59 & 1) != 0) << 0x3f)) + uVar54 + auStack_f0._0_8_ +
             ((uVar58 >> 0x13 | uVar58 << 0x2d) ^ (ulonglong)auStack_100._0_8_ >> 6);
        uVar59 = (uVar41 >> 0x17 | uVar41 << 0x29) ^ uVar41;
        uVar58 = (uVar60 >> 5 | uVar60 << 0x3b) ^ uVar60;
        uVar59 = (uVar59 >> 4 | uVar59 << 0x3c) ^ uVar41;
        uVar58 = (uVar58 >> 6 | uVar58 << 0x3a) ^ uVar60;
        lVar57 = auStack_f0._0_8_ + uVar61 + ((uVar42 ^ uVar62) & uVar41 ^ uVar62) + plVar49[4] +
                 (uVar59 >> 0xe | uVar59 << 0x32);
        uVar44 = uVar44 + lVar57;
        uVar43 = (uVar45 ^ (uVar45 ^ uVar39) & (uVar60 ^ uVar45)) + lVar57 +
                 (uVar58 >> 0x1c | uVar58 << 0x24);
        uVar59 = ((ulonglong)auStack_e0._0_8_ >> 7 | auStack_e0._0_8_ << 0x39) ^ auStack_e0._0_8_;
        uVar61 = ((ulonglong)auStack_100._8_8_ >> 0x2a | auStack_100._8_8_ * 0x400000) ^
                 auStack_100._8_8_;
        auStack_f0._8_8_ =
             ((ulonglong)auStack_e0._0_8_ >> 7 ^
             (uVar59 >> 1 | (ulonglong)((uVar59 & 1) != 0) << 0x3f)) + uStack_a0 + auStack_f0._8_8_
             + ((uVar61 >> 0x13 | uVar61 << 0x2d) ^ (ulonglong)auStack_100._8_8_ >> 6);
        uVar61 = (uVar44 >> 0x17 | uVar44 << 0x29) ^ uVar44;
        uVar59 = (uVar43 >> 5 | uVar43 << 0x3b) ^ uVar43;
        uVar61 = (uVar61 >> 4 | uVar61 << 0x3c) ^ uVar44;
        uVar59 = (uVar59 >> 6 | uVar59 << 0x3a) ^ uVar43;
        lVar57 = auStack_f0._8_8_ + uVar62 + ((uVar41 ^ uVar42) & uVar44 ^ uVar42) + plVar49[5] +
                 (uVar61 >> 0xe | uVar61 << 0x32);
        uVar39 = uVar39 + lVar57;
        uVar63 = (uVar60 ^ (uVar60 ^ uVar45) & (uVar43 ^ uVar60)) + lVar57 +
                 (uVar59 >> 0x1c | uVar59 << 0x24);
        uVar62 = ((ulonglong)auStack_e0._8_8_ >> 7 | auStack_e0._8_8_ << 0x39) ^ auStack_e0._8_8_;
        uVar61 = ((ulonglong)auStack_f0._0_8_ >> 0x2a | auStack_f0._0_8_ * 0x400000) ^
                 auStack_f0._0_8_;
        auStack_e0._0_8_ =
             ((ulonglong)auStack_e0._8_8_ >> 7 ^
             (uVar62 >> 1 | (ulonglong)((uVar62 & 1) != 0) << 0x3f)) + uStack_98 + auStack_e0._0_8_
             + ((uVar61 >> 0x13 | uVar61 << 0x2d) ^ (ulonglong)auStack_f0._0_8_ >> 6);
        uVar62 = (uVar39 >> 0x17 | uVar39 << 0x29) ^ uVar39;
        uVar61 = (uVar63 >> 5 | uVar63 << 0x3b) ^ uVar63;
        uVar62 = (uVar62 >> 4 | uVar62 << 0x3c) ^ uVar39;
        uVar61 = (uVar61 >> 6 | uVar61 << 0x3a) ^ uVar63;
        lVar57 = auStack_e0._0_8_ + uVar42 + ((uVar44 ^ uVar41) & uVar39 ^ uVar41) + plVar49[8] +
                 (uVar62 >> 0xe | uVar62 << 0x32);
        uVar45 = uVar45 + lVar57;
        uVar42 = (uVar43 ^ (uVar43 ^ uVar60) & (uVar63 ^ uVar43)) + lVar57 +
                 (uVar61 >> 0x1c | uVar61 << 0x24);
        uVar61 = ((ulonglong)auStack_d0._0_8_ >> 7 | auStack_d0._0_8_ << 0x39) ^ auStack_d0._0_8_;
        uVar62 = ((ulonglong)auStack_f0._8_8_ >> 0x2a | auStack_f0._8_8_ * 0x400000) ^
                 auStack_f0._8_8_;
        auStack_e0._8_8_ =
             ((ulonglong)auStack_d0._0_8_ >> 7 ^
             (uVar61 >> 1 | (ulonglong)((uVar61 & 1) != 0) << 0x3f)) + uStack_90 + auStack_e0._8_8_
             + ((uVar62 >> 0x13 | uVar62 << 0x2d) ^ (ulonglong)auStack_f0._8_8_ >> 6);
        uVar62 = (uVar45 >> 0x17 | uVar45 << 0x29) ^ uVar45;
        uVar61 = (uVar42 >> 5 | uVar42 << 0x3b) ^ uVar42;
        uVar62 = (uVar62 >> 4 | uVar62 << 0x3c) ^ uVar45;
        uVar61 = (uVar61 >> 6 | uVar61 << 0x3a) ^ uVar42;
        lVar57 = auStack_e0._8_8_ + uVar41 + ((uVar39 ^ uVar44) & uVar45 ^ uVar44) + plVar49[9] +
                 (uVar62 >> 0xe | uVar62 << 0x32);
        uVar60 = uVar60 + lVar57;
        uVar41 = (uVar63 ^ (uVar63 ^ uVar43) & (uVar42 ^ uVar63)) + lVar57 +
                 (uVar61 >> 0x1c | uVar61 << 0x24);
        uVar62 = ((ulonglong)auStack_d0._8_8_ >> 7 | auStack_d0._8_8_ << 0x39) ^ auStack_d0._8_8_;
        uVar61 = ((ulonglong)auStack_e0._0_8_ >> 0x2a | auStack_e0._0_8_ * 0x400000) ^
                 auStack_e0._0_8_;
        auStack_d0._0_8_ =
             ((ulonglong)auStack_d0._8_8_ >> 7 ^
             (uVar62 >> 1 | (ulonglong)((uVar62 & 1) != 0) << 0x3f)) + uStack_88 + auStack_d0._0_8_
             + ((uVar61 >> 0x13 | uVar61 << 0x2d) ^ (ulonglong)auStack_e0._0_8_ >> 6);
        uVar62 = (uVar60 >> 0x17 | uVar60 << 0x29) ^ uVar60;
        uVar61 = (uVar41 >> 5 | uVar41 << 0x3b) ^ uVar41;
        uVar62 = (uVar62 >> 4 | uVar62 << 0x3c) ^ uVar60;
        uVar61 = (uVar61 >> 6 | uVar61 << 0x3a) ^ uVar41;
        lVar57 = auStack_d0._0_8_ + uVar44 + ((uVar45 ^ uVar39) & uVar60 ^ uVar39) + plVar49[0xc] +
                 (uVar62 >> 0xe | uVar62 << 0x32);
        uVar43 = uVar43 + lVar57;
        uVar44 = (uVar42 ^ (uVar42 ^ uVar63) & (uVar41 ^ uVar42)) + lVar57 +
                 (uVar61 >> 0x1c | uVar61 << 0x24);
        uVar61 = (uStack_c0 >> 7 | uStack_c0 << 0x39) ^ uStack_c0;
        uVar62 = ((ulonglong)auStack_e0._8_8_ >> 0x2a | auStack_e0._8_8_ * 0x400000) ^
                 auStack_e0._8_8_;
        auStack_d0._8_8_ =
             (uStack_c0 >> 7 ^ (uVar61 >> 1 | (ulonglong)((uVar61 & 1) != 0) << 0x3f)) +
             auStack_100._0_8_ + auStack_d0._8_8_ +
             ((uVar62 >> 0x13 | uVar62 << 0x2d) ^ (ulonglong)auStack_e0._8_8_ >> 6);
        uVar62 = (uVar43 >> 0x17 | uVar43 << 0x29) ^ uVar43;
        uVar61 = (uVar44 >> 5 | uVar44 << 0x3b) ^ uVar44;
        uVar62 = (uVar62 >> 4 | uVar62 << 0x3c) ^ uVar43;
        uVar61 = (uVar61 >> 6 | uVar61 << 0x3a) ^ uVar44;
        lVar57 = auStack_d0._8_8_ + uVar39 + ((uVar60 ^ uVar45) & uVar43 ^ uVar45) + plVar49[0xd] +
                 (uVar62 >> 0xe | uVar62 << 0x32);
        uVar63 = uVar63 + lVar57;
        uVar58 = (uVar41 ^ (uVar41 ^ uVar42) & (uVar44 ^ uVar41)) + lVar57 +
                 (uVar61 >> 0x1c | uVar61 << 0x24);
        uVar39 = (uStack_b8 >> 7 | uStack_b8 << 0x39) ^ uStack_b8;
        uVar62 = ((ulonglong)auStack_d0._0_8_ >> 0x2a | auStack_d0._0_8_ * 0x400000) ^
                 auStack_d0._0_8_;
        uStack_c0 = (uStack_b8 >> 7 ^ (uVar39 >> 1 | (ulonglong)((uVar39 & 1) != 0) << 0x3f)) +
                    auStack_100._8_8_ + uStack_c0 +
                    ((uVar62 >> 0x13 | uVar62 << 0x2d) ^ (ulonglong)auStack_d0._0_8_ >> 6);
        uVar39 = (uVar63 >> 0x17 | uVar63 << 0x29) ^ uVar63;
        uVar62 = (uVar58 >> 5 | uVar58 << 0x3b) ^ uVar58;
        uVar39 = (uVar39 >> 4 | uVar39 << 0x3c) ^ uVar63;
        uVar62 = (uVar62 >> 6 | uVar62 << 0x3a) ^ uVar58;
        lVar57 = uStack_c0 + uVar45 + ((uVar43 ^ uVar60) & uVar63 ^ uVar60) + plVar49[0x10] +
                 (uVar39 >> 0xe | uVar39 << 0x32);
        uVar42 = uVar42 + lVar57;
        uVar59 = (uVar44 ^ (uVar44 ^ uVar41) & (uVar58 ^ uVar44)) + lVar57 +
                 (uVar62 >> 0x1c | uVar62 << 0x24);
        uVar62 = (uStack_b0 >> 7 | uStack_b0 << 0x39) ^ uStack_b0;
        uVar39 = ((ulonglong)auStack_d0._8_8_ >> 0x2a | auStack_d0._8_8_ * 0x400000) ^
                 auStack_d0._8_8_;
        uStack_b8 = (uStack_b0 >> 7 ^ (uVar62 >> 1 | (ulonglong)((uVar62 & 1) != 0) << 0x3f)) +
                    auStack_f0._0_8_ + uStack_b8 +
                    ((uVar39 >> 0x13 | uVar39 << 0x2d) ^ (ulonglong)auStack_d0._8_8_ >> 6);
        uVar39 = (uVar42 >> 0x17 | uVar42 << 0x29) ^ uVar42;
        uVar62 = (uVar59 >> 5 | uVar59 << 0x3b) ^ uVar59;
        uVar39 = (uVar39 >> 4 | uVar39 << 0x3c) ^ uVar42;
        uVar62 = (uVar62 >> 6 | uVar62 << 0x3a) ^ uVar59;
        lVar57 = uStack_b8 + uVar60 + ((uVar63 ^ uVar43) & uVar42 ^ uVar43) + plVar49[0x11] +
                 (uVar39 >> 0xe | uVar39 << 0x32);
        uVar41 = uVar41 + lVar57;
        uVar60 = (uVar58 ^ (uVar58 ^ uVar44) & (uVar59 ^ uVar58)) + lVar57 +
                 (uVar62 >> 0x1c | uVar62 << 0x24);
        uVar39 = (uVar54 >> 7 | uVar54 << 0x39) ^ uVar54;
        uVar62 = (uStack_c0 >> 0x2a | uStack_c0 * 0x400000) ^ uStack_c0;
        uStack_b0 = (uVar54 >> 7 ^ (uVar39 >> 1 | (ulonglong)((uVar39 & 1) != 0) << 0x3f)) +
                    auStack_f0._8_8_ + uStack_b0 +
                    ((uVar62 >> 0x13 | uVar62 << 0x2d) ^ uStack_c0 >> 6);
        uVar39 = (uVar41 >> 0x17 | uVar41 << 0x29) ^ uVar41;
        uVar62 = (uVar60 >> 5 | uVar60 << 0x3b) ^ uVar60;
        uVar39 = (uVar39 >> 4 | uVar39 << 0x3c) ^ uVar41;
        uVar62 = (uVar62 >> 6 | uVar62 << 0x3a) ^ uVar60;
        lVar57 = uStack_b0 + uVar43 + ((uVar42 ^ uVar63) & uVar41 ^ uVar63) + plVar49[0x14] +
                 (uVar39 >> 0xe | uVar39 << 0x32);
        uVar44 = uVar44 + lVar57;
        uVar61 = (uVar59 ^ (uVar59 ^ uVar58) & (uVar60 ^ uVar59)) + lVar57 +
                 (uVar62 >> 0x1c | uVar62 << 0x24);
        uVar62 = (uStack_a0 >> 7 | uStack_a0 << 0x39) ^ uStack_a0;
        uVar39 = (uStack_b8 >> 0x2a | uStack_b8 * 0x400000) ^ uStack_b8;
        uVar54 = (uStack_a0 >> 7 ^ (uVar62 >> 1 | (ulonglong)((uVar62 & 1) != 0) << 0x3f)) +
                 auStack_e0._0_8_ + uVar54 + ((uVar39 >> 0x13 | uVar39 << 0x2d) ^ uStack_b8 >> 6);
        uVar39 = (uVar44 >> 0x17 | uVar44 << 0x29) ^ uVar44;
        uVar62 = (uVar61 >> 5 | uVar61 << 0x3b) ^ uVar61;
        uVar39 = (uVar39 >> 4 | uVar39 << 0x3c) ^ uVar44;
        uVar62 = (uVar62 >> 6 | uVar62 << 0x3a) ^ uVar61;
        lVar57 = uVar54 + uVar63 + ((uVar41 ^ uVar42) & uVar44 ^ uVar42) + plVar49[0x15] +
                 (uVar39 >> 0xe | uVar39 << 0x32);
        uVar58 = uVar58 + lVar57;
        uVar62 = (uVar60 ^ (uVar60 ^ uVar59) & (uVar61 ^ uVar60)) + lVar57 +
                 (uVar62 >> 0x1c | uVar62 << 0x24);
        uVar39 = (uStack_98 >> 7 | uStack_98 << 0x39) ^ uStack_98;
        uVar63 = (uStack_b0 >> 0x2a | uStack_b0 * 0x400000) ^ uStack_b0;
        uStack_a0 = (uStack_98 >> 7 ^ (uVar39 >> 1 | (ulonglong)((uVar39 & 1) != 0) << 0x3f)) +
                    auStack_e0._8_8_ + uStack_a0 +
                    ((uVar63 >> 0x13 | uVar63 << 0x2d) ^ uStack_b0 >> 6);
        uVar39 = (uVar58 >> 0x17 | uVar58 << 0x29) ^ uVar58;
        uVar63 = (uVar62 >> 5 | uVar62 << 0x3b) ^ uVar62;
        uVar39 = (uVar39 >> 4 | uVar39 << 0x3c) ^ uVar58;
        uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar62;
        lVar57 = uStack_a0 + uVar42 + ((uVar44 ^ uVar41) & uVar58 ^ uVar41) + plVar49[0x18] +
                 (uVar39 >> 0xe | uVar39 << 0x32);
        uVar59 = uVar59 + lVar57;
        uVar42 = (uVar61 ^ (uVar61 ^ uVar60) & (uVar62 ^ uVar61)) + lVar57 +
                 (uVar63 >> 0x1c | uVar63 << 0x24);
        uVar63 = (uStack_90 >> 7 | uStack_90 << 0x39) ^ uStack_90;
        uVar39 = (uVar54 >> 0x2a | uVar54 * 0x400000) ^ uVar54;
        uStack_98 = (uStack_90 >> 7 ^ (uVar63 >> 1 | (ulonglong)((uVar63 & 1) != 0) << 0x3f)) +
                    auStack_d0._0_8_ + uStack_98 + ((uVar39 >> 0x13 | uVar39 << 0x2d) ^ uVar54 >> 6)
        ;
        uVar39 = (uVar59 >> 0x17 | uVar59 << 0x29) ^ uVar59;
        uVar63 = (uVar42 >> 5 | uVar42 << 0x3b) ^ uVar42;
        uVar39 = (uVar39 >> 4 | uVar39 << 0x3c) ^ uVar59;
        uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar42;
        lVar57 = uStack_98 + uVar41 + ((uVar58 ^ uVar44) & uVar59 ^ uVar44) + plVar49[0x19] +
                 (uVar39 >> 0xe | uVar39 << 0x32);
        uVar60 = uVar60 + lVar57;
        uVar41 = (uVar62 ^ (uVar62 ^ uVar61) & (uVar42 ^ uVar62)) + lVar57 +
                 (uVar63 >> 0x1c | uVar63 << 0x24);
        uVar39 = (uStack_88 >> 7 | uStack_88 << 0x39) ^ uStack_88;
        uVar63 = (uStack_a0 >> 0x2a | uStack_a0 * 0x400000) ^ uStack_a0;
        uStack_90 = (uStack_88 >> 7 ^ (uVar39 >> 1 | (ulonglong)((uVar39 & 1) != 0) << 0x3f)) +
                    auStack_d0._8_8_ + uStack_90 +
                    ((uVar63 >> 0x13 | uVar63 << 0x2d) ^ uStack_a0 >> 6);
        uVar39 = (uVar60 >> 0x17 | uVar60 << 0x29) ^ uVar60;
        uVar63 = (uVar41 >> 5 | uVar41 << 0x3b) ^ uVar41;
        uVar39 = (uVar39 >> 4 | uVar39 << 0x3c) ^ uVar60;
        uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar41;
        lVar57 = uStack_90 + uVar44 + ((uVar59 ^ uVar58) & uVar60 ^ uVar58) + plVar49[0x1c] +
                 (uVar39 >> 0xe | uVar39 << 0x32);
        uVar61 = uVar61 + lVar57;
        uVar44 = (uVar42 ^ (uVar42 ^ uVar62) & (uVar41 ^ uVar42)) + lVar57 +
                 (uVar63 >> 0x1c | uVar63 << 0x24);
        uVar63 = ((ulonglong)auStack_100._0_8_ >> 7 | auStack_100._0_8_ << 0x39) ^ auStack_100._0_8_
        ;
        uVar39 = (uStack_98 >> 0x2a | uStack_98 * 0x400000) ^ uStack_98;
        uStack_88 = ((ulonglong)auStack_100._0_8_ >> 7 ^
                    (uVar63 >> 1 | (ulonglong)((uVar63 & 1) != 0) << 0x3f)) + uStack_c0 + uStack_88
                    + ((uVar39 >> 0x13 | uVar39 << 0x2d) ^ uStack_98 >> 6);
        uVar39 = (uVar61 >> 0x17 | uVar61 << 0x29) ^ uVar61;
        uVar63 = (uVar44 >> 5 | uVar44 << 0x3b) ^ uVar44;
        uVar43 = (uVar39 >> 4 | uVar39 << 0x3c) ^ uVar61;
        uVar39 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar44;
        uVar63 = uVar44 ^ uVar41;
        uVar39 = uVar39 >> 0x1c | uVar39 << 0x24;
        lVar57 = uStack_88 + uVar58 + ((uVar60 ^ uVar59) & uVar61 ^ uVar59) + plVar49[0x1d] +
                 (uVar43 >> 0xe | uVar43 << 0x32);
        uVar62 = uVar62 + lVar57;
        lVar57 = (uVar41 ^ (uVar41 ^ uVar42) & uVar63) + lVar57;
        pcVar1 = (char *)((longlong)plVar49 + 0x107);
        plVar49 = plVar49 + 0x20;
      } while (*pcVar1 != '\0');
      param_2 = param_2 + 8;
      uVar39 = lVar57 + uVar39 + *param_1;
      uVar44 = uVar44 + param_1[1];
      uVar41 = uVar41 + param_1[2];
      uVar42 = uVar42 + param_1[3];
      uVar62 = uVar62 + param_1[4];
      uVar61 = uVar61 + param_1[5];
      uVar60 = uVar60 + param_1[6];
      uVar59 = uVar59 + param_1[7];
      *param_1 = uVar39;
      param_1[1] = uVar44;
      param_1[2] = uVar41;
      param_1[3] = uVar42;
      param_1[4] = uVar62;
      param_1[5] = uVar61;
      param_1[6] = uVar60;
      param_1[7] = uVar59;
    } while (param_2 < pauVar52);
    return;
  }
  pauVar52 = param_2 + param_3 * 8;
  uVar39 = *param_1;
  uVar44 = param_1[1];
  uVar41 = param_1[2];
  uVar42 = param_1[3];
  uVar62 = param_1[4];
  uVar61 = param_1[5];
  uVar60 = param_1[6];
  uVar59 = param_1[7];
  do {
    auVar4 = vpshufb_avx(*param_2,_DAT_140e26d00);
    auVar5 = vpshufb_avx(param_2[1],_DAT_140e26d00);
    auVar6 = vpshufb_avx(param_2[2],_DAT_140e26d00);
    auVar7 = vpshufb_avx(param_2[3],_DAT_140e26d00);
    auVar8 = vpshufb_avx(param_2[4],_DAT_140e26d00);
    auVar9 = vpshufb_avx(param_2[5],_DAT_140e26d00);
    auVar75._8_8_ = DAT_140e26808;
    auVar75._0_8_ = K512;
    auStack_140 = vpaddq_avx(auVar4,auVar75);
    auVar10 = vpshufb_avx(param_2[6],_DAT_140e26d00);
    auVar78._8_8_ = DAT_140e26828;
    auVar78._0_8_ = DAT_140e26820;
    auStack_130 = vpaddq_avx(auVar5,auVar78);
    auVar11 = vpshufb_avx(param_2[7],_DAT_140e26d00);
    auVar79._8_8_ = DAT_140e26848;
    auVar79._0_8_ = DAT_140e26840;
    auStack_120 = vpaddq_avx(auVar6,auVar79);
    auVar33._8_8_ = DAT_140e26868;
    auVar33._0_8_ = DAT_140e26860;
    auStack_110 = vpaddq_avx(auVar7,auVar33);
    auVar34._8_8_ = DAT_140e26888;
    auVar34._0_8_ = DAT_140e26880;
    auStack_100 = vpaddq_avx(auVar8,auVar34);
    auVar35._8_8_ = DAT_140e268a8;
    auVar35._0_8_ = DAT_140e268a0;
    auStack_f0 = vpaddq_avx(auVar9,auVar35);
    auVar36._8_8_ = DAT_140e268c8;
    auVar36._0_8_ = DAT_140e268c0;
    auStack_e0 = vpaddq_avx(auVar10,auVar36);
    auVar37._8_8_ = DAT_140e268e8;
    auVar37._0_8_ = DAT_140e268e0;
    auStack_d0 = vpaddq_avx(auVar11,auVar37);
    uVar58 = uVar44 ^ uVar41;
    pauVar47 = (undefined1 (*) [16])&DAT_140e26880;
    do {
      auVar69 = vpalignr_avx(auVar5,auVar4,8);
      auVar70 = vpalignr_avx(auVar9,auVar8,8);
      auVar73 = vpsrlq_avx(auVar69,1);
      uVar63 = (uVar62 >> 0x17 | uVar62 << 0x29) ^ uVar62;
      auVar4 = vpaddq_avx(auVar4,auVar70);
      uVar43 = (uVar39 >> 5 | uVar39 << 0x3b) ^ uVar39;
      auVar78 = vpsrlq_avx(auVar69,7);
      uVar63 = (uVar63 >> 4 | uVar63 << 0x3c) ^ uVar62;
      auVar69 = vpsllq_avx(auVar69,0x38);
      auVar74 = vpsrlq_avx(auVar73,7);
      auVar70 = vpsllq_avx(auVar69,7);
      uVar43 = (uVar43 >> 6 | uVar43 << 0x3a) ^ uVar39;
      lVar57 = uVar59 + auStack_140._0_8_ + ((uVar61 ^ uVar60) & uVar62 ^ uVar60) +
               (uVar63 >> 0xe | uVar63 << 0x32);
      auVar79 = vpsrlq_avx(auVar11,6);
      uVar42 = uVar42 + lVar57;
      uVar59 = (uVar43 >> 0x1c | uVar43 << 0x24) + lVar57 + (uVar58 & (uVar39 ^ uVar44) ^ uVar44);
      auVar75 = vpsllq_avx(auVar11,3);
      auVar4 = vpaddq_avx(auVar4,auVar78 ^ auVar73 ^ auVar69 ^ auVar74 ^ auVar70);
      auVar69 = vpsrlq_avx(auVar11,0x13);
      uVar58 = (uVar42 >> 0x17 | uVar42 << 0x29) ^ uVar42;
      uVar63 = (uVar59 >> 5 | uVar59 << 0x3b) ^ uVar59;
      auVar73 = vpsllq_avx(auVar75,0x2a);
      uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar42;
      auVar70 = vpsrlq_avx(auVar69,0x2a);
      auVar4 = vpaddq_avx(auVar4,auVar79 ^ auVar75 ^ auVar69 ^ auVar73 ^ auVar70);
      uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar59;
      lVar57 = uVar60 + auStack_140._8_8_ + ((uVar62 ^ uVar61) & uVar42 ^ uVar61) +
               (uVar58 >> 0xe | uVar58 << 0x32);
      auStack_140 = vpaddq_avx(auVar4,pauVar47[8]);
      uVar41 = uVar41 + lVar57;
      uVar60 = (uVar63 >> 0x1c | uVar63 << 0x24) +
               lVar57 + ((uVar39 ^ uVar44) & (uVar59 ^ uVar39) ^ uVar39);
      auVar69 = vpalignr_avx(auVar6,auVar5,8);
      auVar70 = vpalignr_avx(auVar10,auVar9,8);
      auVar73 = vpsrlq_avx(auVar69,1);
      uVar58 = (uVar41 >> 0x17 | uVar41 << 0x29) ^ uVar41;
      auVar5 = vpaddq_avx(auVar5,auVar70);
      uVar63 = (uVar60 >> 5 | uVar60 << 0x3b) ^ uVar60;
      auVar78 = vpsrlq_avx(auVar69,7);
      uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar41;
      auVar69 = vpsllq_avx(auVar69,0x38);
      auVar74 = vpsrlq_avx(auVar73,7);
      auVar70 = vpsllq_avx(auVar69,7);
      uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar60;
      lVar57 = uVar61 + auStack_130._0_8_ + ((uVar42 ^ uVar62) & uVar41 ^ uVar62) +
               (uVar58 >> 0xe | uVar58 << 0x32);
      auVar79 = vpsrlq_avx(auVar4,6);
      uVar44 = uVar44 + lVar57;
      uVar61 = (uVar63 >> 0x1c | uVar63 << 0x24) +
               lVar57 + ((uVar59 ^ uVar39) & (uVar60 ^ uVar59) ^ uVar59);
      auVar75 = vpsllq_avx(auVar4,3);
      auVar5 = vpaddq_avx(auVar5,auVar78 ^ auVar73 ^ auVar69 ^ auVar74 ^ auVar70);
      auVar69 = vpsrlq_avx(auVar4,0x13);
      uVar58 = (uVar44 >> 0x17 | uVar44 << 0x29) ^ uVar44;
      uVar63 = (uVar61 >> 5 | uVar61 << 0x3b) ^ uVar61;
      auVar73 = vpsllq_avx(auVar75,0x2a);
      uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar44;
      auVar70 = vpsrlq_avx(auVar69,0x2a);
      auVar5 = vpaddq_avx(auVar5,auVar79 ^ auVar75 ^ auVar69 ^ auVar73 ^ auVar70);
      uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar61;
      lVar57 = uVar62 + auStack_130._8_8_ + ((uVar41 ^ uVar42) & uVar44 ^ uVar42) +
               (uVar58 >> 0xe | uVar58 << 0x32);
      auStack_130 = vpaddq_avx(auVar5,pauVar47[10]);
      uVar39 = uVar39 + lVar57;
      uVar62 = (uVar63 >> 0x1c | uVar63 << 0x24) +
               lVar57 + ((uVar60 ^ uVar59) & (uVar61 ^ uVar60) ^ uVar60);
      auVar69 = vpalignr_avx(auVar7,auVar6,8);
      auVar70 = vpalignr_avx(auVar11,auVar10,8);
      auVar73 = vpsrlq_avx(auVar69,1);
      uVar58 = (uVar39 >> 0x17 | uVar39 << 0x29) ^ uVar39;
      auVar6 = vpaddq_avx(auVar6,auVar70);
      uVar63 = (uVar62 >> 5 | uVar62 << 0x3b) ^ uVar62;
      auVar78 = vpsrlq_avx(auVar69,7);
      uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar39;
      auVar69 = vpsllq_avx(auVar69,0x38);
      auVar74 = vpsrlq_avx(auVar73,7);
      auVar70 = vpsllq_avx(auVar69,7);
      uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar62;
      lVar57 = uVar42 + auStack_120._0_8_ + ((uVar44 ^ uVar41) & uVar39 ^ uVar41) +
               (uVar58 >> 0xe | uVar58 << 0x32);
      auVar79 = vpsrlq_avx(auVar5,6);
      uVar59 = uVar59 + lVar57;
      uVar42 = (uVar63 >> 0x1c | uVar63 << 0x24) +
               lVar57 + ((uVar61 ^ uVar60) & (uVar62 ^ uVar61) ^ uVar61);
      auVar75 = vpsllq_avx(auVar5,3);
      auVar6 = vpaddq_avx(auVar6,auVar78 ^ auVar73 ^ auVar69 ^ auVar74 ^ auVar70);
      auVar69 = vpsrlq_avx(auVar5,0x13);
      uVar58 = (uVar59 >> 0x17 | uVar59 << 0x29) ^ uVar59;
      uVar63 = (uVar42 >> 5 | uVar42 << 0x3b) ^ uVar42;
      auVar73 = vpsllq_avx(auVar75,0x2a);
      uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar59;
      auVar70 = vpsrlq_avx(auVar69,0x2a);
      auVar6 = vpaddq_avx(auVar6,auVar79 ^ auVar75 ^ auVar69 ^ auVar73 ^ auVar70);
      uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar42;
      lVar57 = uVar41 + auStack_120._8_8_ + ((uVar39 ^ uVar44) & uVar59 ^ uVar44) +
               (uVar58 >> 0xe | uVar58 << 0x32);
      auStack_120 = vpaddq_avx(auVar6,pauVar47[0xc]);
      uVar60 = uVar60 + lVar57;
      uVar41 = (uVar63 >> 0x1c | uVar63 << 0x24) +
               lVar57 + ((uVar62 ^ uVar61) & (uVar42 ^ uVar62) ^ uVar62);
      auVar69 = vpalignr_avx(auVar8,auVar7,8);
      auVar70 = vpalignr_avx(auVar4,auVar11,8);
      auVar73 = vpsrlq_avx(auVar69,1);
      uVar58 = (uVar60 >> 0x17 | uVar60 << 0x29) ^ uVar60;
      auVar7 = vpaddq_avx(auVar7,auVar70);
      uVar63 = (uVar41 >> 5 | uVar41 << 0x3b) ^ uVar41;
      auVar78 = vpsrlq_avx(auVar69,7);
      uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar60;
      auVar69 = vpsllq_avx(auVar69,0x38);
      auVar74 = vpsrlq_avx(auVar73,7);
      auVar70 = vpsllq_avx(auVar69,7);
      uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar41;
      lVar57 = uVar44 + auStack_110._0_8_ + ((uVar59 ^ uVar39) & uVar60 ^ uVar39) +
               (uVar58 >> 0xe | uVar58 << 0x32);
      auVar79 = vpsrlq_avx(auVar6,6);
      uVar61 = uVar61 + lVar57;
      uVar44 = (uVar63 >> 0x1c | uVar63 << 0x24) +
               lVar57 + ((uVar42 ^ uVar62) & (uVar41 ^ uVar42) ^ uVar42);
      auVar75 = vpsllq_avx(auVar6,3);
      auVar7 = vpaddq_avx(auVar7,auVar78 ^ auVar73 ^ auVar69 ^ auVar74 ^ auVar70);
      auVar69 = vpsrlq_avx(auVar6,0x13);
      uVar58 = (uVar61 >> 0x17 | uVar61 << 0x29) ^ uVar61;
      uVar63 = (uVar44 >> 5 | uVar44 << 0x3b) ^ uVar44;
      auVar73 = vpsllq_avx(auVar75,0x2a);
      uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar61;
      auVar70 = vpsrlq_avx(auVar69,0x2a);
      auVar7 = vpaddq_avx(auVar7,auVar79 ^ auVar75 ^ auVar69 ^ auVar73 ^ auVar70);
      uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar44;
      lVar57 = uVar39 + auStack_110._8_8_ + ((uVar60 ^ uVar59) & uVar61 ^ uVar59) +
               (uVar58 >> 0xe | uVar58 << 0x32);
      auStack_110 = vpaddq_avx(auVar7,pauVar47[0xe]);
      uVar62 = uVar62 + lVar57;
      uVar39 = (uVar63 >> 0x1c | uVar63 << 0x24) +
               lVar57 + ((uVar41 ^ uVar42) & (uVar44 ^ uVar41) ^ uVar41);
      auVar69 = vpalignr_avx(auVar9,auVar8,8);
      auVar70 = vpalignr_avx(auVar5,auVar4,8);
      auVar73 = vpsrlq_avx(auVar69,1);
      uVar58 = (uVar62 >> 0x17 | uVar62 << 0x29) ^ uVar62;
      auVar8 = vpaddq_avx(auVar8,auVar70);
      uVar63 = (uVar39 >> 5 | uVar39 << 0x3b) ^ uVar39;
      auVar78 = vpsrlq_avx(auVar69,7);
      uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar62;
      auVar69 = vpsllq_avx(auVar69,0x38);
      auVar74 = vpsrlq_avx(auVar73,7);
      auVar70 = vpsllq_avx(auVar69,7);
      uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar39;
      lVar57 = uVar59 + auStack_100._0_8_ + ((uVar61 ^ uVar60) & uVar62 ^ uVar60) +
               (uVar58 >> 0xe | uVar58 << 0x32);
      auVar79 = vpsrlq_avx(auVar7,6);
      uVar42 = uVar42 + lVar57;
      uVar59 = (uVar63 >> 0x1c | uVar63 << 0x24) +
               lVar57 + ((uVar44 ^ uVar41) & (uVar39 ^ uVar44) ^ uVar44);
      auVar75 = vpsllq_avx(auVar7,3);
      auVar8 = vpaddq_avx(auVar8,auVar78 ^ auVar73 ^ auVar69 ^ auVar74 ^ auVar70);
      auVar69 = vpsrlq_avx(auVar7,0x13);
      uVar58 = (uVar42 >> 0x17 | uVar42 << 0x29) ^ uVar42;
      uVar63 = (uVar59 >> 5 | uVar59 << 0x3b) ^ uVar59;
      auVar73 = vpsllq_avx(auVar75,0x2a);
      uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar42;
      auVar70 = vpsrlq_avx(auVar69,0x2a);
      auVar8 = vpaddq_avx(auVar8,auVar79 ^ auVar75 ^ auVar69 ^ auVar73 ^ auVar70);
      uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar59;
      lVar57 = uVar60 + auStack_100._8_8_ + ((uVar62 ^ uVar61) & uVar42 ^ uVar61) +
               (uVar58 >> 0xe | uVar58 << 0x32);
      auStack_100 = vpaddq_avx(auVar8,pauVar47[0x10]);
      uVar41 = uVar41 + lVar57;
      uVar60 = (uVar63 >> 0x1c | uVar63 << 0x24) +
               lVar57 + ((uVar39 ^ uVar44) & (uVar59 ^ uVar39) ^ uVar39);
      auVar69 = vpalignr_avx(auVar10,auVar9,8);
      auVar70 = vpalignr_avx(auVar6,auVar5,8);
      auVar73 = vpsrlq_avx(auVar69,1);
      uVar58 = (uVar41 >> 0x17 | uVar41 << 0x29) ^ uVar41;
      auVar9 = vpaddq_avx(auVar9,auVar70);
      uVar63 = (uVar60 >> 5 | uVar60 << 0x3b) ^ uVar60;
      auVar78 = vpsrlq_avx(auVar69,7);
      uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar41;
      auVar69 = vpsllq_avx(auVar69,0x38);
      auVar74 = vpsrlq_avx(auVar73,7);
      auVar70 = vpsllq_avx(auVar69,7);
      uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar60;
      lVar57 = uVar61 + auStack_f0._0_8_ + ((uVar42 ^ uVar62) & uVar41 ^ uVar62) +
               (uVar58 >> 0xe | uVar58 << 0x32);
      auVar79 = vpsrlq_avx(auVar8,6);
      uVar44 = uVar44 + lVar57;
      uVar61 = (uVar63 >> 0x1c | uVar63 << 0x24) +
               lVar57 + ((uVar59 ^ uVar39) & (uVar60 ^ uVar59) ^ uVar59);
      auVar75 = vpsllq_avx(auVar8,3);
      auVar9 = vpaddq_avx(auVar9,auVar78 ^ auVar73 ^ auVar69 ^ auVar74 ^ auVar70);
      auVar69 = vpsrlq_avx(auVar8,0x13);
      uVar58 = (uVar44 >> 0x17 | uVar44 << 0x29) ^ uVar44;
      uVar63 = (uVar61 >> 5 | uVar61 << 0x3b) ^ uVar61;
      auVar73 = vpsllq_avx(auVar75,0x2a);
      uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar44;
      auVar70 = vpsrlq_avx(auVar69,0x2a);
      auVar9 = vpaddq_avx(auVar9,auVar79 ^ auVar75 ^ auVar69 ^ auVar73 ^ auVar70);
      uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar61;
      lVar57 = uVar62 + auStack_f0._8_8_ + ((uVar41 ^ uVar42) & uVar44 ^ uVar42) +
               (uVar58 >> 0xe | uVar58 << 0x32);
      auStack_f0 = vpaddq_avx(auVar9,pauVar47[0x12]);
      uVar39 = uVar39 + lVar57;
      uVar62 = (uVar63 >> 0x1c | uVar63 << 0x24) +
               lVar57 + ((uVar60 ^ uVar59) & (uVar61 ^ uVar60) ^ uVar60);
      auVar69 = vpalignr_avx(auVar11,auVar10,8);
      auVar70 = vpalignr_avx(auVar7,auVar6,8);
      auVar73 = vpsrlq_avx(auVar69,1);
      uVar58 = (uVar39 >> 0x17 | uVar39 << 0x29) ^ uVar39;
      auVar10 = vpaddq_avx(auVar10,auVar70);
      uVar63 = (uVar62 >> 5 | uVar62 << 0x3b) ^ uVar62;
      auVar78 = vpsrlq_avx(auVar69,7);
      uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar39;
      auVar69 = vpsllq_avx(auVar69,0x38);
      auVar74 = vpsrlq_avx(auVar73,7);
      auVar70 = vpsllq_avx(auVar69,7);
      uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar62;
      lVar57 = uVar42 + auStack_e0._0_8_ + ((uVar44 ^ uVar41) & uVar39 ^ uVar41) +
               (uVar58 >> 0xe | uVar58 << 0x32);
      auVar79 = vpsrlq_avx(auVar9,6);
      uVar59 = uVar59 + lVar57;
      uVar42 = (uVar63 >> 0x1c | uVar63 << 0x24) +
               lVar57 + ((uVar61 ^ uVar60) & (uVar62 ^ uVar61) ^ uVar61);
      auVar75 = vpsllq_avx(auVar9,3);
      auVar10 = vpaddq_avx(auVar10,auVar78 ^ auVar73 ^ auVar69 ^ auVar74 ^ auVar70);
      auVar69 = vpsrlq_avx(auVar9,0x13);
      uVar58 = (uVar59 >> 0x17 | uVar59 << 0x29) ^ uVar59;
      uVar63 = (uVar42 >> 5 | uVar42 << 0x3b) ^ uVar42;
      auVar73 = vpsllq_avx(auVar75,0x2a);
      uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar59;
      auVar70 = vpsrlq_avx(auVar69,0x2a);
      auVar10 = vpaddq_avx(auVar10,auVar79 ^ auVar75 ^ auVar69 ^ auVar73 ^ auVar70);
      uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar42;
      lVar57 = uVar41 + auStack_e0._8_8_ + ((uVar39 ^ uVar44) & uVar59 ^ uVar44) +
               (uVar58 >> 0xe | uVar58 << 0x32);
      auStack_e0 = vpaddq_avx(auVar10,pauVar47[0x14]);
      uVar60 = uVar60 + lVar57;
      uVar41 = (uVar63 >> 0x1c | uVar63 << 0x24) +
               lVar57 + ((uVar62 ^ uVar61) & (uVar42 ^ uVar62) ^ uVar62);
      auVar69 = vpalignr_avx(auVar4,auVar11,8);
      auVar70 = vpalignr_avx(auVar8,auVar7,8);
      auVar73 = vpsrlq_avx(auVar69,1);
      uVar58 = (uVar60 >> 0x17 | uVar60 << 0x29) ^ uVar60;
      auVar11 = vpaddq_avx(auVar11,auVar70);
      uVar63 = (uVar41 >> 5 | uVar41 << 0x3b) ^ uVar41;
      auVar78 = vpsrlq_avx(auVar69,7);
      uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar60;
      auVar69 = vpsllq_avx(auVar69,0x38);
      auVar74 = vpsrlq_avx(auVar73,7);
      auVar70 = vpsllq_avx(auVar69,7);
      uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar41;
      lVar57 = uVar44 + auStack_d0._0_8_ + ((uVar59 ^ uVar39) & uVar60 ^ uVar39) +
               (uVar58 >> 0xe | uVar58 << 0x32);
      auVar79 = vpsrlq_avx(auVar10,6);
      uVar61 = uVar61 + lVar57;
      uVar44 = (uVar63 >> 0x1c | uVar63 << 0x24) +
               lVar57 + ((uVar42 ^ uVar62) & (uVar41 ^ uVar42) ^ uVar42);
      auVar75 = vpsllq_avx(auVar10,3);
      auVar11 = vpaddq_avx(auVar11,auVar78 ^ auVar73 ^ auVar69 ^ auVar74 ^ auVar70);
      auVar69 = vpsrlq_avx(auVar10,0x13);
      uVar58 = (uVar61 >> 0x17 | uVar61 << 0x29) ^ uVar61;
      uVar43 = (uVar44 >> 5 | uVar44 << 0x3b) ^ uVar44;
      auVar73 = vpsllq_avx(auVar75,0x2a);
      uVar63 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar61;
      auVar70 = vpsrlq_avx(auVar69,0x2a);
      uVar58 = uVar44 ^ uVar41;
      auVar11 = vpaddq_avx(auVar11,auVar79 ^ auVar75 ^ auVar69 ^ auVar73 ^ auVar70);
      uVar43 = (uVar43 >> 6 | uVar43 << 0x3a) ^ uVar44;
      lVar57 = uVar39 + auStack_d0._8_8_ + ((uVar60 ^ uVar59) & uVar61 ^ uVar59) +
               (uVar63 >> 0xe | uVar63 << 0x32);
      auStack_d0 = vpaddq_avx(auVar11,pauVar47[0x16]);
      uVar62 = uVar62 + lVar57;
      uVar39 = (uVar43 >> 0x1c | uVar43 << 0x24) + lVar57 + ((uVar41 ^ uVar42) & uVar58 ^ uVar41);
      pauVar51 = pauVar47 + 0x18;
      pauVar47 = pauVar47 + 0x10;
    } while (*(char *)((longlong)*pauVar51 + 7) != '\0');
    uVar63 = (uVar62 >> 0x17 | uVar62 << 0x29) ^ uVar62;
    uVar43 = (uVar39 >> 5 | uVar39 << 0x3b) ^ uVar39;
    uVar63 = (uVar63 >> 4 | uVar63 << 0x3c) ^ uVar62;
    uVar43 = (uVar43 >> 6 | uVar43 << 0x3a) ^ uVar39;
    lVar57 = uVar59 + auStack_140._0_8_ + ((uVar61 ^ uVar60) & uVar62 ^ uVar60) +
             (uVar63 >> 0xe | uVar63 << 0x32);
    uVar42 = uVar42 + lVar57;
    uVar59 = (uVar43 >> 0x1c | uVar43 << 0x24) + lVar57 + (uVar58 & (uVar39 ^ uVar44) ^ uVar44);
    uVar58 = (uVar42 >> 0x17 | uVar42 << 0x29) ^ uVar42;
    uVar63 = (uVar59 >> 5 | uVar59 << 0x3b) ^ uVar59;
    uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar42;
    uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar59;
    lVar57 = uVar60 + auStack_140._8_8_ + ((uVar62 ^ uVar61) & uVar42 ^ uVar61) +
             (uVar58 >> 0xe | uVar58 << 0x32);
    uVar41 = uVar41 + lVar57;
    uVar60 = (uVar63 >> 0x1c | uVar63 << 0x24) +
             lVar57 + ((uVar39 ^ uVar44) & (uVar59 ^ uVar39) ^ uVar39);
    uVar58 = (uVar41 >> 0x17 | uVar41 << 0x29) ^ uVar41;
    uVar63 = (uVar60 >> 5 | uVar60 << 0x3b) ^ uVar60;
    uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar41;
    uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar60;
    lVar57 = uVar61 + auStack_130._0_8_ + ((uVar42 ^ uVar62) & uVar41 ^ uVar62) +
             (uVar58 >> 0xe | uVar58 << 0x32);
    uVar44 = uVar44 + lVar57;
    uVar61 = (uVar63 >> 0x1c | uVar63 << 0x24) +
             lVar57 + ((uVar59 ^ uVar39) & (uVar60 ^ uVar59) ^ uVar59);
    uVar58 = (uVar44 >> 0x17 | uVar44 << 0x29) ^ uVar44;
    uVar63 = (uVar61 >> 5 | uVar61 << 0x3b) ^ uVar61;
    uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar44;
    uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar61;
    lVar57 = uVar62 + auStack_130._8_8_ + ((uVar41 ^ uVar42) & uVar44 ^ uVar42) +
             (uVar58 >> 0xe | uVar58 << 0x32);
    uVar39 = uVar39 + lVar57;
    uVar62 = (uVar63 >> 0x1c | uVar63 << 0x24) +
             lVar57 + ((uVar60 ^ uVar59) & (uVar61 ^ uVar60) ^ uVar60);
    uVar58 = (uVar39 >> 0x17 | uVar39 << 0x29) ^ uVar39;
    uVar63 = (uVar62 >> 5 | uVar62 << 0x3b) ^ uVar62;
    uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar39;
    uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar62;
    lVar57 = uVar42 + auStack_120._0_8_ + ((uVar44 ^ uVar41) & uVar39 ^ uVar41) +
             (uVar58 >> 0xe | uVar58 << 0x32);
    uVar59 = uVar59 + lVar57;
    uVar42 = (uVar63 >> 0x1c | uVar63 << 0x24) +
             lVar57 + ((uVar61 ^ uVar60) & (uVar62 ^ uVar61) ^ uVar61);
    uVar58 = (uVar59 >> 0x17 | uVar59 << 0x29) ^ uVar59;
    uVar63 = (uVar42 >> 5 | uVar42 << 0x3b) ^ uVar42;
    uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar59;
    uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar42;
    lVar57 = uVar41 + auStack_120._8_8_ + ((uVar39 ^ uVar44) & uVar59 ^ uVar44) +
             (uVar58 >> 0xe | uVar58 << 0x32);
    uVar60 = uVar60 + lVar57;
    uVar41 = (uVar63 >> 0x1c | uVar63 << 0x24) +
             lVar57 + ((uVar62 ^ uVar61) & (uVar42 ^ uVar62) ^ uVar62);
    uVar58 = (uVar60 >> 0x17 | uVar60 << 0x29) ^ uVar60;
    uVar63 = (uVar41 >> 5 | uVar41 << 0x3b) ^ uVar41;
    uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar60;
    uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar41;
    lVar57 = uVar44 + auStack_110._0_8_ + ((uVar59 ^ uVar39) & uVar60 ^ uVar39) +
             (uVar58 >> 0xe | uVar58 << 0x32);
    uVar61 = uVar61 + lVar57;
    uVar44 = (uVar63 >> 0x1c | uVar63 << 0x24) +
             lVar57 + ((uVar42 ^ uVar62) & (uVar41 ^ uVar42) ^ uVar42);
    uVar58 = (uVar61 >> 0x17 | uVar61 << 0x29) ^ uVar61;
    uVar63 = (uVar44 >> 5 | uVar44 << 0x3b) ^ uVar44;
    uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar61;
    uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar44;
    lVar57 = uVar39 + auStack_110._8_8_ + ((uVar60 ^ uVar59) & uVar61 ^ uVar59) +
             (uVar58 >> 0xe | uVar58 << 0x32);
    uVar62 = uVar62 + lVar57;
    uVar39 = (uVar63 >> 0x1c | uVar63 << 0x24) +
             lVar57 + ((uVar41 ^ uVar42) & (uVar44 ^ uVar41) ^ uVar41);
    uVar58 = (uVar62 >> 0x17 | uVar62 << 0x29) ^ uVar62;
    uVar63 = (uVar39 >> 5 | uVar39 << 0x3b) ^ uVar39;
    uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar62;
    uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar39;
    lVar57 = uVar59 + auStack_100._0_8_ + ((uVar61 ^ uVar60) & uVar62 ^ uVar60) +
             (uVar58 >> 0xe | uVar58 << 0x32);
    uVar42 = uVar42 + lVar57;
    uVar59 = (uVar63 >> 0x1c | uVar63 << 0x24) +
             lVar57 + ((uVar44 ^ uVar41) & (uVar39 ^ uVar44) ^ uVar44);
    uVar58 = (uVar42 >> 0x17 | uVar42 << 0x29) ^ uVar42;
    uVar63 = (uVar59 >> 5 | uVar59 << 0x3b) ^ uVar59;
    uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar42;
    uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar59;
    lVar57 = uVar60 + auStack_100._8_8_ + ((uVar62 ^ uVar61) & uVar42 ^ uVar61) +
             (uVar58 >> 0xe | uVar58 << 0x32);
    uVar41 = uVar41 + lVar57;
    uVar60 = (uVar63 >> 0x1c | uVar63 << 0x24) +
             lVar57 + ((uVar39 ^ uVar44) & (uVar59 ^ uVar39) ^ uVar39);
    uVar58 = (uVar41 >> 0x17 | uVar41 << 0x29) ^ uVar41;
    uVar63 = (uVar60 >> 5 | uVar60 << 0x3b) ^ uVar60;
    uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar41;
    uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar60;
    lVar57 = uVar61 + auStack_f0._0_8_ + ((uVar42 ^ uVar62) & uVar41 ^ uVar62) +
             (uVar58 >> 0xe | uVar58 << 0x32);
    uVar44 = uVar44 + lVar57;
    uVar61 = (uVar63 >> 0x1c | uVar63 << 0x24) +
             lVar57 + ((uVar59 ^ uVar39) & (uVar60 ^ uVar59) ^ uVar59);
    uVar58 = (uVar44 >> 0x17 | uVar44 << 0x29) ^ uVar44;
    uVar63 = (uVar61 >> 5 | uVar61 << 0x3b) ^ uVar61;
    uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar44;
    uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar61;
    lVar57 = uVar62 + auStack_f0._8_8_ + ((uVar41 ^ uVar42) & uVar44 ^ uVar42) +
             (uVar58 >> 0xe | uVar58 << 0x32);
    uVar39 = uVar39 + lVar57;
    uVar58 = (uVar63 >> 0x1c | uVar63 << 0x24) +
             lVar57 + ((uVar60 ^ uVar59) & (uVar61 ^ uVar60) ^ uVar60);
    uVar62 = (uVar39 >> 0x17 | uVar39 << 0x29) ^ uVar39;
    uVar63 = (uVar58 >> 5 | uVar58 << 0x3b) ^ uVar58;
    uVar62 = (uVar62 >> 4 | uVar62 << 0x3c) ^ uVar39;
    uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar58;
    lVar57 = uVar42 + auStack_e0._0_8_ + ((uVar44 ^ uVar41) & uVar39 ^ uVar41) +
             (uVar62 >> 0xe | uVar62 << 0x32);
    uVar59 = uVar59 + lVar57;
    uVar42 = (uVar63 >> 0x1c | uVar63 << 0x24) +
             lVar57 + ((uVar61 ^ uVar60) & (uVar58 ^ uVar61) ^ uVar61);
    uVar62 = (uVar59 >> 0x17 | uVar59 << 0x29) ^ uVar59;
    uVar63 = (uVar42 >> 5 | uVar42 << 0x3b) ^ uVar42;
    uVar62 = (uVar62 >> 4 | uVar62 << 0x3c) ^ uVar59;
    uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar42;
    lVar57 = uVar41 + auStack_e0._8_8_ + ((uVar39 ^ uVar44) & uVar59 ^ uVar44) +
             (uVar62 >> 0xe | uVar62 << 0x32);
    uVar60 = uVar60 + lVar57;
    uVar41 = (uVar63 >> 0x1c | uVar63 << 0x24) +
             lVar57 + ((uVar58 ^ uVar61) & (uVar42 ^ uVar58) ^ uVar58);
    uVar62 = (uVar60 >> 0x17 | uVar60 << 0x29) ^ uVar60;
    uVar63 = (uVar41 >> 5 | uVar41 << 0x3b) ^ uVar41;
    uVar62 = (uVar62 >> 4 | uVar62 << 0x3c) ^ uVar60;
    uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar41;
    lVar57 = uVar44 + auStack_d0._0_8_ + ((uVar59 ^ uVar39) & uVar60 ^ uVar39) +
             (uVar62 >> 0xe | uVar62 << 0x32);
    uVar61 = uVar61 + lVar57;
    uVar44 = (uVar63 >> 0x1c | uVar63 << 0x24) +
             lVar57 + ((uVar42 ^ uVar58) & (uVar41 ^ uVar42) ^ uVar42);
    uVar62 = (uVar61 >> 0x17 | uVar61 << 0x29) ^ uVar61;
    uVar63 = (uVar44 >> 5 | uVar44 << 0x3b) ^ uVar44;
    uVar62 = (uVar62 >> 4 | uVar62 << 0x3c) ^ uVar61;
    uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar44;
    lVar57 = uVar39 + auStack_d0._8_8_ + ((uVar60 ^ uVar59) & uVar61 ^ uVar59) +
             (uVar62 >> 0xe | uVar62 << 0x32);
    uVar39 = (uVar63 >> 0x1c | uVar63 << 0x24) +
             lVar57 + ((uVar41 ^ uVar42) & (uVar44 ^ uVar41) ^ uVar41) + *param_1;
    param_2 = param_2 + 8;
    uVar44 = uVar44 + param_1[1];
    uVar41 = uVar41 + param_1[2];
    uVar42 = uVar42 + param_1[3];
    uVar62 = uVar58 + lVar57 + param_1[4];
    uVar61 = uVar61 + param_1[5];
    uVar60 = uVar60 + param_1[6];
    uVar59 = uVar59 + param_1[7];
    *param_1 = uVar39;
    param_1[1] = uVar44;
    param_1[2] = uVar41;
    param_1[3] = uVar42;
    param_1[4] = uVar62;
    param_1[5] = uVar61;
    param_1[6] = uVar60;
    param_1[7] = uVar59;
  } while (param_2 < pauVar52);
  return;
}

// L$SEH_begin_sha512_block_data_order @ 140e2558d

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L_SEH_begin_sha512_block_data_order
               (ulonglong *param_1,undefined1 (*param_2) [16],longlong param_3)

{
  char *pcVar1;
  ulonglong *puVar2;
  undefined1 (*pauVar3) [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  undefined1 auVar24 [32];
  undefined1 auVar25 [32];
  undefined1 auVar26 [32];
  undefined1 auVar27 [32];
  undefined1 auVar28 [32];
  undefined1 auVar29 [32];
  undefined1 auVar30 [32];
  undefined1 auVar31 [32];
  undefined1 auVar32 [24];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 (*pauVar38) [24];
  ulonglong uVar39;
  longlong lVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  undefined1 (*pauVar47) [16];
  undefined1 (*pauVar48) [16];
  longlong *plVar49;
  undefined1 (*pauVar50) [24];
  undefined1 (*pauVar51) [16];
  undefined1 (*pauVar52) [16];
  ulonglong uVar53;
  ulonglong uVar54;
  ulonglong uVar55;
  ulonglong uVar56;
  longlong lVar57;
  ulonglong uVar58;
  ulonglong uVar59;
  ulonglong uVar60;
  ulonglong uVar61;
  ulonglong uVar62;
  ulonglong uVar63;
  longlong lVar65;
  undefined1 auVar64 [32];
  longlong lVar66;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar67 [32];
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined1 auVar68 [32];
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [32];
  undefined1 auVar72 [32];
  undefined8 unaff_XMM10_Qa;
  undefined8 unaff_XMM10_Qb;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [32];
  undefined1 auVar77 [32];
  undefined8 unaff_XMM11_Qa;
  undefined8 unaff_XMM11_Qb;
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [32];
  undefined1 auVar81 [32];
  undefined1 auStack_5b0 [1136];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  
  if ((DAT_15540a9f4 & 0x800) != 0) {
    auVar4 = vpshufb_avx(*param_2,_DAT_140e26d00);
    auVar5 = vpshufb_avx(param_2[1],_DAT_140e26d00);
    auVar6 = vpshufb_avx(param_2[2],_DAT_140e26d00);
    auVar7 = vpshufb_avx(param_2[3],_DAT_140e26d00);
    auVar8 = vpshufb_avx(param_2[4],_DAT_140e26d00);
    auVar9 = vpshufb_avx(param_2[5],_DAT_140e26d00);
    auVar10._8_8_ = DAT_140e26808;
    auVar10._0_8_ = K512;
    vpaddq_avx(auVar4,auVar10);
    auVar10 = vpshufb_avx(param_2[6],_DAT_140e26d00);
    auVar11._8_8_ = DAT_140e26828;
    auVar11._0_8_ = DAT_140e26820;
    vpaddq_avx(auVar5,auVar11);
    auVar11 = vpshufb_avx(param_2[7],_DAT_140e26d00);
    auVar69._8_8_ = DAT_140e26848;
    auVar69._0_8_ = DAT_140e26840;
    vpaddq_avx(auVar6,auVar69);
    auVar6._8_8_ = DAT_140e26868;
    auVar6._0_8_ = DAT_140e26860;
    vpaddq_avx(auVar7,auVar6);
    auVar7._8_8_ = DAT_140e26888;
    auVar7._0_8_ = DAT_140e26880;
    vpaddq_avx(auVar8,auVar7);
    auVar70._8_8_ = DAT_140e268a8;
    auVar70._0_8_ = DAT_140e268a0;
    vpaddq_avx(auVar9,auVar70);
    auVar73._8_8_ = DAT_140e268c8;
    auVar73._0_8_ = DAT_140e268c0;
    vpaddq_avx(auVar10,auVar73);
    auVar74._8_8_ = DAT_140e268e8;
    auVar74._0_8_ = DAT_140e268e0;
    vpaddq_avx(auVar11,auVar74);
    vpalignr_avx(auVar5,auVar4,8);
    vpalignr_avx(auVar9,auVar8,8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((_DAT_15540a9f8 & 0x128) == 0x128) {
    uVar46 = (ulonglong)auStack_5b0 & 0xfffffffffffff800;
    pauVar47 = (undefined1 (*) [16])(uVar46 + 0x480);
    *(ulonglong **)(uVar46 + 0x500) = param_1;
    *(undefined1 (**) [16])(uVar46 + 0x508) = param_2;
    *(undefined1 (**) [16])(uVar46 + 0x510) = param_2 + param_3 * 8;
    *(BADSPACEBASE **)(uVar46 + 0x518) = register0x00000020;
    *(undefined8 *)(uVar46 + 0x520) = unaff_XMM6_Qa;
    *(undefined8 *)(uVar46 + 0x528) = unaff_XMM6_Qb;
    *(undefined8 *)(uVar46 + 0x530) = unaff_XMM7_Qa;
    *(undefined8 *)(uVar46 + 0x538) = unaff_XMM7_Qb;
    *(undefined8 *)(uVar46 + 0x540) = unaff_XMM8_Qa;
    *(undefined8 *)(uVar46 + 0x548) = unaff_XMM8_Qb;
    *(undefined8 *)(uVar46 + 0x550) = unaff_XMM9_Qa;
    *(undefined8 *)(uVar46 + 0x558) = unaff_XMM9_Qb;
    *(undefined8 *)(uVar46 + 0x560) = unaff_XMM10_Qa;
    *(undefined8 *)(uVar46 + 0x568) = unaff_XMM10_Qb;
    *(undefined8 *)(uVar46 + 0x570) = unaff_XMM11_Qa;
    *(undefined8 *)(uVar46 + 0x578) = unaff_XMM11_Qb;
    pauVar52 = param_2 + 8;
    uVar41 = *param_1;
    uVar44 = param_1[1];
    uVar39 = param_1[2];
    pauVar51 = pauVar52;
    if (pauVar52 == param_2 + param_3 * 8) {
      pauVar51 = (undefined1 (*) [16])(uVar46 + 0x480);
    }
    uVar59 = param_1[3];
    uVar60 = param_1[4];
    uVar61 = param_1[5];
    uVar62 = param_1[6];
    uVar42 = param_1[7];
    do {
      auVar72._16_16_ = _UNK_140e26d10;
      auVar72._0_16_ = _DAT_140e26d00;
      auVar64._16_16_ = ZEXT116(1) * *pauVar51;
      auVar64._0_16_ = ZEXT116(0) * *pauVar51 | ZEXT116(1) * pauVar52[-8];
      auVar71._16_16_ = ZEXT116(1) * pauVar51[1];
      auVar71._0_16_ = ZEXT116(0) * pauVar51[1] | ZEXT116(1) * pauVar52[-7];
      auVar24 = vpshufb_avx2(auVar64,auVar72);
      auVar76._16_16_ = ZEXT116(1) * pauVar51[2];
      auVar76._0_16_ = ZEXT116(0) * pauVar51[2] | ZEXT116(1) * pauVar52[-6];
      auVar25 = vpshufb_avx2(auVar71,auVar72);
      auVar77._16_16_ = ZEXT116(1) * pauVar51[3];
      auVar77._0_16_ = ZEXT116(0) * pauVar51[3] | ZEXT116(1) * pauVar52[-5];
      auVar26 = vpshufb_avx2(auVar76,auVar72);
      auVar80._16_16_ = ZEXT116(1) * pauVar51[4];
      auVar80._0_16_ = ZEXT116(0) * pauVar51[4] | ZEXT116(1) * pauVar52[-4];
      auVar27 = vpshufb_avx2(auVar77,auVar72);
      auVar81._16_16_ = ZEXT116(1) * pauVar51[5];
      auVar81._0_16_ = ZEXT116(0) * pauVar51[5] | ZEXT116(1) * pauVar52[-3];
      auVar28 = vpshufb_avx2(auVar80,auVar72);
      auVar67._16_16_ = ZEXT116(1) * pauVar51[6];
      auVar67._0_16_ = ZEXT116(0) * pauVar51[6] | ZEXT116(1) * pauVar52[-2];
      auVar29 = vpshufb_avx2(auVar81,auVar72);
      auVar68._16_16_ = ZEXT116(1) * pauVar51[7];
      auVar68._0_16_ = ZEXT116(0) * pauVar51[7] | ZEXT116(1) * pauVar52[-1];
      lVar66 = auVar24._8_8_ + DAT_140e26808;
      lVar15 = auVar24._16_8_ + DAT_140e26810;
      lVar19 = auVar24._24_8_ + DAT_140e26818;
      auVar30 = vpshufb_avx2(auVar67,auVar72);
      lVar57 = auVar25._0_8_ + DAT_140e26820;
      lVar12 = auVar25._8_8_ + DAT_140e26828;
      lVar16 = auVar25._16_8_ + DAT_140e26830;
      lVar20 = auVar25._24_8_ + DAT_140e26838;
      auVar31 = vpshufb_avx2(auVar68,auVar72);
      lVar40 = auVar26._0_8_ + DAT_140e26840;
      lVar13 = auVar26._8_8_ + DAT_140e26848;
      lVar17 = auVar26._16_8_ + DAT_140e26850;
      lVar21 = auVar26._24_8_ + DAT_140e26858;
      lVar65 = auVar27._0_8_ + DAT_140e26860;
      lVar14 = auVar27._8_8_ + DAT_140e26868;
      lVar18 = auVar27._16_8_ + DAT_140e26870;
      lVar22 = auVar27._24_8_ + DAT_140e26878;
      *(longlong *)*pauVar47 = auVar24._0_8_ + K512;
      *(longlong *)(*pauVar47 + 8) = lVar66;
      *(longlong *)pauVar47[1] = lVar15;
      *(longlong *)(pauVar47[1] + 8) = lVar19;
      lVar66 = auVar28._0_8_ + DAT_140e26880;
      lVar15 = auVar28._8_8_ + DAT_140e26888;
      lVar19 = auVar28._16_8_ + DAT_140e26890;
      lVar23 = auVar28._24_8_ + DAT_140e26898;
      *(longlong *)pauVar47[2] = lVar57;
      *(longlong *)(pauVar47[2] + 8) = lVar12;
      *(longlong *)pauVar47[3] = lVar16;
      *(longlong *)(pauVar47[3] + 8) = lVar20;
      lVar57 = auVar29._0_8_ + DAT_140e268a0;
      lVar12 = auVar29._8_8_ + DAT_140e268a8;
      lVar16 = auVar29._16_8_ + DAT_140e268b0;
      lVar20 = auVar29._24_8_ + DAT_140e268b8;
      *(longlong *)pauVar47[4] = lVar40;
      *(longlong *)(pauVar47[4] + 8) = lVar13;
      *(longlong *)pauVar47[5] = lVar17;
      *(longlong *)(pauVar47[5] + 8) = lVar21;
      lVar40 = auVar30._0_8_ + DAT_140e268c0;
      lVar13 = auVar30._8_8_ + DAT_140e268c8;
      lVar17 = auVar30._16_8_ + DAT_140e268d0;
      lVar21 = auVar30._24_8_ + DAT_140e268d8;
      *(longlong *)pauVar47[6] = lVar65;
      *(longlong *)(pauVar47[6] + 8) = lVar14;
      *(longlong *)pauVar47[7] = lVar18;
      *(longlong *)(pauVar47[7] + 8) = lVar22;
      lVar65 = auVar31._0_8_ + DAT_140e268e0;
      lVar14 = auVar31._8_8_ + DAT_140e268e8;
      lVar18 = auVar31._16_8_ + DAT_140e268f0;
      lVar22 = auVar31._24_8_ + DAT_140e268f8;
      *(longlong *)pauVar47[-8] = lVar66;
      *(longlong *)(pauVar47[-8] + 8) = lVar15;
      *(longlong *)pauVar47[-7] = lVar19;
      *(longlong *)(pauVar47[-7] + 8) = lVar23;
      uVar63 = 0;
      *(longlong *)pauVar47[-6] = lVar57;
      *(longlong *)(pauVar47[-6] + 8) = lVar12;
      *(longlong *)pauVar47[-5] = lVar16;
      *(longlong *)(pauVar47[-5] + 8) = lVar20;
      *(longlong *)pauVar47[-4] = lVar40;
      *(longlong *)(pauVar47[-4] + 8) = lVar13;
      *(longlong *)pauVar47[-3] = lVar17;
      *(longlong *)(pauVar47[-3] + 8) = lVar21;
      uVar58 = uVar44 ^ uVar39;
      *(longlong *)pauVar47[-2] = lVar65;
      *(longlong *)(pauVar47[-2] + 8) = lVar14;
      *(longlong *)pauVar47[-1] = lVar18;
      *(longlong *)(pauVar47[-1] + 8) = lVar22;
      pauVar47 = pauVar47 + -8;
      pauVar50 = (undefined1 (*) [24])&DAT_140e26980;
      do {
        pauVar48 = pauVar47;
        auVar72 = vpalignr_avx2(auVar25,auVar24,8);
        auVar64 = vpalignr_avx2(auVar29,auVar28,8);
        uVar41 = uVar41 + uVar63;
        auVar76 = vpsrlq_avx2(auVar72,1);
        lVar40 = auVar24._8_8_;
        lVar65 = auVar24._16_8_;
        lVar66 = auVar24._24_8_;
        auVar80 = vpsrlq_avx2(auVar72,7);
        auVar71 = vpsllq_avx2(auVar72,0x38);
        lVar57 = uVar42 + *(longlong *)pauVar48[8] + (uVar61 & uVar60) + (~uVar60 & uVar62) +
                 ((uVar60 >> 0x29 | uVar60 << 0x17) ^ (uVar60 >> 0x12 | uVar60 << 0x2e) ^
                 (uVar60 >> 0xe | uVar60 << 0x32));
        auVar77 = vpsrlq_avx2(auVar76,7);
        uVar59 = uVar59 + lVar57;
        auVar72 = vpsllq_avx2(auVar71,7);
        auVar81 = vpsrlq_avx2(auVar31,6);
        auVar72 = auVar80 ^ auVar76 ^ auVar71 ^ auVar77 ^ auVar72;
        auVar77 = vpsllq_avx2(auVar31,3);
        auVar76 = vpsrlq_avx2(auVar31,0x13);
        uVar42 = lVar57 + (uVar58 & (uVar41 ^ uVar44) ^ uVar44) +
                 ((uVar41 >> 0x22 | uVar41 * 0x40000000) ^ (uVar41 >> 0x27 | uVar41 * 0x2000000) ^
                 (uVar41 >> 0x1c | uVar41 << 0x24));
        auVar80 = vpsllq_avx2(auVar77,0x2a);
        auVar71 = vpsrlq_avx2(auVar76,0x2a);
        auVar71 = auVar81 ^ auVar77 ^ auVar76 ^ auVar80 ^ auVar71;
        lVar57 = uVar62 + *(longlong *)(pauVar48[8] + 8) + (uVar60 & uVar59) + (~uVar59 & uVar61) +
                 ((uVar59 >> 0x29 | uVar59 * 0x800000) ^ (uVar59 >> 0x12 | uVar59 << 0x2e) ^
                 (uVar59 >> 0xe | uVar59 << 0x32));
        auVar24._0_8_ = auVar24._0_8_ + auVar64._0_8_ + auVar72._0_8_ + auVar71._0_8_;
        auVar24._8_8_ = lVar40 + auVar64._8_8_ + auVar72._8_8_ + auVar71._8_8_;
        auVar24._16_8_ = lVar65 + auVar64._16_8_ + auVar72._16_8_ + auVar71._16_8_;
        auVar24._24_8_ = lVar66 + auVar64._24_8_ + auVar72._24_8_ + auVar71._24_8_;
        uVar39 = uVar39 + lVar57;
        lVar65 = *(longlong *)pauVar50[-5];
        auVar32 = *(undefined1 (*) [24])((longlong)pauVar50[-6] + 0x10);
        lVar40 = *(longlong *)((longlong)pauVar50[-5] + 0x10);
        *(longlong *)pauVar48[-8] =
             auVar24._0_8_ + *(longlong *)*(undefined1 (*) [24])((longlong)pauVar50[-6] + 0x10);
        *(longlong *)(pauVar48[-8] + 8) = auVar24._8_8_ + lVar65;
        *(longlong *)pauVar48[-7] = auVar24._16_8_ + auVar32._16_8_;
        *(longlong *)(pauVar48[-7] + 8) = auVar24._24_8_ + lVar40;
        auVar72 = vpalignr_avx2(auVar26,auVar25,8);
        auVar64 = vpalignr_avx2(auVar30,auVar29,8);
        uVar62 = lVar57 + ((uVar41 ^ uVar44) & (uVar42 ^ uVar41) ^ uVar41) +
                 ((uVar42 >> 0x22 | uVar42 * 0x40000000) ^ (uVar42 >> 0x27 | uVar42 * 0x2000000) ^
                 (uVar42 >> 0x1c | uVar42 << 0x24));
        auVar76 = vpsrlq_avx2(auVar72,1);
        lVar40 = auVar25._8_8_;
        lVar65 = auVar25._16_8_;
        lVar66 = auVar25._24_8_;
        auVar80 = vpsrlq_avx2(auVar72,7);
        auVar71 = vpsllq_avx2(auVar72,0x38);
        lVar57 = uVar61 + *(longlong *)pauVar48[10] + (uVar59 & uVar39) + (~uVar39 & uVar60) +
                 ((uVar39 >> 0x29 | uVar39 * 0x800000) ^ (uVar39 >> 0x12 | uVar39 << 0x2e) ^
                 (uVar39 >> 0xe | uVar39 << 0x32));
        auVar77 = vpsrlq_avx2(auVar76,7);
        uVar44 = uVar44 + lVar57;
        auVar72 = vpsllq_avx2(auVar71,7);
        auVar81 = vpsrlq_avx2(auVar24,6);
        auVar72 = auVar80 ^ auVar76 ^ auVar71 ^ auVar77 ^ auVar72;
        auVar77 = vpsllq_avx2(auVar24,3);
        auVar76 = vpsrlq_avx2(auVar24,0x13);
        uVar61 = lVar57 + ((uVar42 ^ uVar41) & (uVar62 ^ uVar42) ^ uVar42) +
                 ((uVar62 >> 0x22 | uVar62 * 0x40000000) ^ (uVar62 >> 0x27 | uVar62 * 0x2000000) ^
                 (uVar62 >> 0x1c | uVar62 << 0x24));
        auVar80 = vpsllq_avx2(auVar77,0x2a);
        auVar71 = vpsrlq_avx2(auVar76,0x2a);
        auVar71 = auVar81 ^ auVar77 ^ auVar76 ^ auVar80 ^ auVar71;
        lVar57 = uVar60 + *(longlong *)(pauVar48[10] + 8) + (uVar39 & uVar44) + (~uVar44 & uVar59) +
                 ((uVar44 >> 0x29 | uVar44 * 0x800000) ^ (uVar44 >> 0x12 | uVar44 << 0x2e) ^
                 (uVar44 >> 0xe | uVar44 << 0x32));
        auVar25._0_8_ = auVar25._0_8_ + auVar64._0_8_ + auVar72._0_8_ + auVar71._0_8_;
        auVar25._8_8_ = lVar40 + auVar64._8_8_ + auVar72._8_8_ + auVar71._8_8_;
        auVar25._16_8_ = lVar65 + auVar64._16_8_ + auVar72._16_8_ + auVar71._16_8_;
        auVar25._24_8_ = lVar66 + auVar64._24_8_ + auVar72._24_8_ + auVar71._24_8_;
        uVar41 = uVar41 + lVar57;
        lVar65 = *(longlong *)((longlong)pauVar50[-4] + 8);
        auVar32 = pauVar50[-4];
        lVar40 = *(longlong *)pauVar50[-3];
        *(longlong *)pauVar48[-6] = auVar25._0_8_ + *(longlong *)pauVar50[-4];
        *(longlong *)(pauVar48[-6] + 8) = auVar25._8_8_ + lVar65;
        *(longlong *)pauVar48[-5] = auVar25._16_8_ + auVar32._16_8_;
        *(longlong *)(pauVar48[-5] + 8) = auVar25._24_8_ + lVar40;
        auVar72 = vpalignr_avx2(auVar27,auVar26,8);
        auVar64 = vpalignr_avx2(auVar31,auVar30,8);
        uVar60 = lVar57 + ((uVar62 ^ uVar42) & (uVar61 ^ uVar62) ^ uVar62) +
                 ((uVar61 >> 0x22 | uVar61 * 0x40000000) ^ (uVar61 >> 0x27 | uVar61 * 0x2000000) ^
                 (uVar61 >> 0x1c | uVar61 << 0x24));
        auVar76 = vpsrlq_avx2(auVar72,1);
        lVar40 = auVar26._8_8_;
        lVar65 = auVar26._16_8_;
        lVar66 = auVar26._24_8_;
        auVar80 = vpsrlq_avx2(auVar72,7);
        auVar71 = vpsllq_avx2(auVar72,0x38);
        lVar57 = uVar59 + *(longlong *)pauVar48[0xc] + (uVar44 & uVar41) + (~uVar41 & uVar39) +
                 ((uVar41 >> 0x29 | uVar41 * 0x800000) ^ (uVar41 >> 0x12 | uVar41 << 0x2e) ^
                 (uVar41 >> 0xe | uVar41 << 0x32));
        auVar77 = vpsrlq_avx2(auVar76,7);
        uVar42 = uVar42 + lVar57;
        auVar72 = vpsllq_avx2(auVar71,7);
        auVar81 = vpsrlq_avx2(auVar25,6);
        auVar72 = auVar80 ^ auVar76 ^ auVar71 ^ auVar77 ^ auVar72;
        auVar77 = vpsllq_avx2(auVar25,3);
        auVar76 = vpsrlq_avx2(auVar25,0x13);
        uVar59 = lVar57 + ((uVar61 ^ uVar62) & (uVar60 ^ uVar61) ^ uVar61) +
                 ((uVar60 >> 0x22 | uVar60 * 0x40000000) ^ (uVar60 >> 0x27 | uVar60 * 0x2000000) ^
                 (uVar60 >> 0x1c | uVar60 << 0x24));
        auVar80 = vpsllq_avx2(auVar77,0x2a);
        auVar71 = vpsrlq_avx2(auVar76,0x2a);
        auVar71 = auVar81 ^ auVar77 ^ auVar76 ^ auVar80 ^ auVar71;
        lVar57 = uVar39 + *(longlong *)(pauVar48[0xc] + 8) + (uVar41 & uVar42) + (~uVar42 & uVar44)
                 + ((uVar42 >> 0x29 | uVar42 * 0x800000) ^ (uVar42 >> 0x12 | uVar42 << 0x2e) ^
                   (uVar42 >> 0xe | uVar42 << 0x32));
        auVar26._0_8_ = auVar26._0_8_ + auVar64._0_8_ + auVar72._0_8_ + auVar71._0_8_;
        auVar26._8_8_ = lVar40 + auVar64._8_8_ + auVar72._8_8_ + auVar71._8_8_;
        auVar26._16_8_ = lVar65 + auVar64._16_8_ + auVar72._16_8_ + auVar71._16_8_;
        auVar26._24_8_ = lVar66 + auVar64._24_8_ + auVar72._24_8_ + auVar71._24_8_;
        uVar62 = uVar62 + lVar57;
        lVar65 = *(longlong *)((longlong)pauVar50[-3] + 0x10);
        auVar32 = *(undefined1 (*) [24])((longlong)pauVar50[-3] + 8);
        lVar40 = *(longlong *)((longlong)pauVar50[-2] + 8);
        *(longlong *)pauVar48[-4] =
             auVar26._0_8_ + *(longlong *)*(undefined1 (*) [24])((longlong)pauVar50[-3] + 8);
        *(longlong *)(pauVar48[-4] + 8) = auVar26._8_8_ + lVar65;
        *(longlong *)pauVar48[-3] = auVar26._16_8_ + auVar32._16_8_;
        *(longlong *)(pauVar48[-3] + 8) = auVar26._24_8_ + lVar40;
        auVar72 = vpalignr_avx2(auVar28,auVar27,8);
        auVar64 = vpalignr_avx2(auVar24,auVar31,8);
        uVar39 = lVar57 + ((uVar60 ^ uVar61) & (uVar59 ^ uVar60) ^ uVar60) +
                 ((uVar59 >> 0x22 | uVar59 * 0x40000000) ^ (uVar59 >> 0x27 | uVar59 * 0x2000000) ^
                 (uVar59 >> 0x1c | uVar59 << 0x24));
        auVar76 = vpsrlq_avx2(auVar72,1);
        lVar40 = auVar27._8_8_;
        lVar65 = auVar27._16_8_;
        lVar66 = auVar27._24_8_;
        auVar80 = vpsrlq_avx2(auVar72,7);
        auVar71 = vpsllq_avx2(auVar72,0x38);
        lVar57 = uVar44 + *(longlong *)pauVar48[0xe] + (uVar42 & uVar62) + (~uVar62 & uVar41) +
                 ((uVar62 >> 0x29 | uVar62 * 0x800000) ^ (uVar62 >> 0x12 | uVar62 << 0x2e) ^
                 (uVar62 >> 0xe | uVar62 << 0x32));
        auVar77 = vpsrlq_avx2(auVar76,7);
        uVar61 = uVar61 + lVar57;
        auVar72 = vpsllq_avx2(auVar71,7);
        auVar81 = vpsrlq_avx2(auVar26,6);
        auVar72 = auVar80 ^ auVar76 ^ auVar71 ^ auVar77 ^ auVar72;
        auVar77 = vpsllq_avx2(auVar26,3);
        auVar76 = vpsrlq_avx2(auVar26,0x13);
        uVar44 = lVar57 + ((uVar59 ^ uVar60) & (uVar39 ^ uVar59) ^ uVar59) +
                 ((uVar39 >> 0x22 | uVar39 * 0x40000000) ^ (uVar39 >> 0x27 | uVar39 * 0x2000000) ^
                 (uVar39 >> 0x1c | uVar39 << 0x24));
        auVar80 = vpsllq_avx2(auVar77,0x2a);
        auVar71 = vpsrlq_avx2(auVar76,0x2a);
        auVar71 = auVar81 ^ auVar77 ^ auVar76 ^ auVar80 ^ auVar71;
        lVar57 = uVar41 + *(longlong *)(pauVar48[0xe] + 8) + (uVar62 & uVar61) + (~uVar61 & uVar42)
                 + ((uVar61 >> 0x29 | uVar61 * 0x800000) ^ (uVar61 >> 0x12 | uVar61 << 0x2e) ^
                   (uVar61 >> 0xe | uVar61 << 0x32));
        auVar27._0_8_ = auVar27._0_8_ + auVar64._0_8_ + auVar72._0_8_ + auVar71._0_8_;
        auVar27._8_8_ = lVar40 + auVar64._8_8_ + auVar72._8_8_ + auVar71._8_8_;
        auVar27._16_8_ = lVar65 + auVar64._16_8_ + auVar72._16_8_ + auVar71._16_8_;
        auVar27._24_8_ = lVar66 + auVar64._24_8_ + auVar72._24_8_ + auVar71._24_8_;
        uVar60 = uVar60 + lVar57;
        lVar65 = *(longlong *)pauVar50[-1];
        auVar32 = *(undefined1 (*) [24])((longlong)pauVar50[-2] + 0x10);
        lVar40 = *(longlong *)((longlong)pauVar50[-1] + 0x10);
        *(longlong *)pauVar48[-2] =
             auVar27._0_8_ + *(longlong *)*(undefined1 (*) [24])((longlong)pauVar50[-2] + 0x10);
        *(longlong *)(pauVar48[-2] + 8) = auVar27._8_8_ + lVar65;
        *(longlong *)pauVar48[-1] = auVar27._16_8_ + auVar32._16_8_;
        *(longlong *)(pauVar48[-1] + 8) = auVar27._24_8_ + lVar40;
        pauVar47 = pauVar48 + -0x10;
        auVar72 = vpalignr_avx2(auVar29,auVar28,8);
        auVar64 = vpalignr_avx2(auVar25,auVar24,8);
        uVar41 = lVar57 + ((uVar39 ^ uVar59) & (uVar44 ^ uVar39) ^ uVar39) +
                 ((uVar44 >> 0x22 | uVar44 * 0x40000000) ^ (uVar44 >> 0x27 | uVar44 * 0x2000000) ^
                 (uVar44 >> 0x1c | uVar44 << 0x24));
        auVar76 = vpsrlq_avx2(auVar72,1);
        lVar40 = auVar28._8_8_;
        lVar65 = auVar28._16_8_;
        lVar66 = auVar28._24_8_;
        auVar80 = vpsrlq_avx2(auVar72,7);
        auVar71 = vpsllq_avx2(auVar72,0x38);
        lVar57 = uVar42 + *(longlong *)*pauVar48 + (uVar61 & uVar60) + (~uVar60 & uVar62) +
                 ((uVar60 >> 0x29 | uVar60 * 0x800000) ^ (uVar60 >> 0x12 | uVar60 << 0x2e) ^
                 (uVar60 >> 0xe | uVar60 << 0x32));
        auVar77 = vpsrlq_avx2(auVar76,7);
        uVar59 = uVar59 + lVar57;
        auVar72 = vpsllq_avx2(auVar71,7);
        auVar81 = vpsrlq_avx2(auVar27,6);
        auVar72 = auVar80 ^ auVar76 ^ auVar71 ^ auVar77 ^ auVar72;
        auVar77 = vpsllq_avx2(auVar27,3);
        auVar76 = vpsrlq_avx2(auVar27,0x13);
        uVar42 = lVar57 + ((uVar44 ^ uVar39) & (uVar41 ^ uVar44) ^ uVar44) +
                 ((uVar41 >> 0x22 | uVar41 * 0x40000000) ^ (uVar41 >> 0x27 | uVar41 * 0x2000000) ^
                 (uVar41 >> 0x1c | uVar41 << 0x24));
        auVar80 = vpsllq_avx2(auVar77,0x2a);
        auVar71 = vpsrlq_avx2(auVar76,0x2a);
        auVar71 = auVar81 ^ auVar77 ^ auVar76 ^ auVar80 ^ auVar71;
        lVar57 = uVar62 + *(longlong *)(*pauVar48 + 8) + (uVar60 & uVar59) + (~uVar59 & uVar61) +
                 ((uVar59 >> 0x29 | uVar59 * 0x800000) ^ (uVar59 >> 0x12 | uVar59 << 0x2e) ^
                 (uVar59 >> 0xe | uVar59 << 0x32));
        auVar28._0_8_ = auVar28._0_8_ + auVar64._0_8_ + auVar72._0_8_ + auVar71._0_8_;
        auVar28._8_8_ = lVar40 + auVar64._8_8_ + auVar72._8_8_ + auVar71._8_8_;
        auVar28._16_8_ = lVar65 + auVar64._16_8_ + auVar72._16_8_ + auVar71._16_8_;
        auVar28._24_8_ = lVar66 + auVar64._24_8_ + auVar72._24_8_ + auVar71._24_8_;
        uVar39 = uVar39 + lVar57;
        lVar65 = *(longlong *)((longlong)*pauVar50 + 8);
        auVar32 = *pauVar50;
        lVar40 = *(longlong *)pauVar50[1];
        *(longlong *)*pauVar47 = auVar28._0_8_ + *(longlong *)*pauVar50;
        *(longlong *)(pauVar48[-0x10] + 8) = auVar28._8_8_ + lVar65;
        *(longlong *)pauVar48[-0xf] = auVar28._16_8_ + auVar32._16_8_;
        *(longlong *)(pauVar48[-0xf] + 8) = auVar28._24_8_ + lVar40;
        auVar72 = vpalignr_avx2(auVar30,auVar29,8);
        auVar64 = vpalignr_avx2(auVar26,auVar25,8);
        uVar62 = lVar57 + ((uVar41 ^ uVar44) & (uVar42 ^ uVar41) ^ uVar41) +
                 ((uVar42 >> 0x22 | uVar42 * 0x40000000) ^ (uVar42 >> 0x27 | uVar42 * 0x2000000) ^
                 (uVar42 >> 0x1c | uVar42 << 0x24));
        auVar76 = vpsrlq_avx2(auVar72,1);
        lVar40 = auVar29._8_8_;
        lVar65 = auVar29._16_8_;
        lVar66 = auVar29._24_8_;
        auVar80 = vpsrlq_avx2(auVar72,7);
        auVar71 = vpsllq_avx2(auVar72,0x38);
        lVar57 = uVar61 + *(longlong *)pauVar48[2] + (uVar59 & uVar39) + (~uVar39 & uVar60) +
                 ((uVar39 >> 0x29 | uVar39 * 0x800000) ^ (uVar39 >> 0x12 | uVar39 << 0x2e) ^
                 (uVar39 >> 0xe | uVar39 << 0x32));
        auVar77 = vpsrlq_avx2(auVar76,7);
        uVar44 = uVar44 + lVar57;
        auVar72 = vpsllq_avx2(auVar71,7);
        auVar81 = vpsrlq_avx2(auVar28,6);
        auVar72 = auVar80 ^ auVar76 ^ auVar71 ^ auVar77 ^ auVar72;
        auVar77 = vpsllq_avx2(auVar28,3);
        auVar76 = vpsrlq_avx2(auVar28,0x13);
        uVar61 = lVar57 + ((uVar42 ^ uVar41) & (uVar62 ^ uVar42) ^ uVar42) +
                 ((uVar62 >> 0x22 | uVar62 * 0x40000000) ^ (uVar62 >> 0x27 | uVar62 * 0x2000000) ^
                 (uVar62 >> 0x1c | uVar62 << 0x24));
        auVar80 = vpsllq_avx2(auVar77,0x2a);
        auVar71 = vpsrlq_avx2(auVar76,0x2a);
        auVar71 = auVar81 ^ auVar77 ^ auVar76 ^ auVar80 ^ auVar71;
        lVar57 = uVar60 + *(longlong *)(pauVar48[2] + 8) + (uVar39 & uVar44) + (~uVar44 & uVar59) +
                 ((uVar44 >> 0x29 | uVar44 * 0x800000) ^ (uVar44 >> 0x12 | uVar44 << 0x2e) ^
                 (uVar44 >> 0xe | uVar44 << 0x32));
        auVar29._0_8_ = auVar29._0_8_ + auVar64._0_8_ + auVar72._0_8_ + auVar71._0_8_;
        auVar29._8_8_ = lVar40 + auVar64._8_8_ + auVar72._8_8_ + auVar71._8_8_;
        auVar29._16_8_ = lVar65 + auVar64._16_8_ + auVar72._16_8_ + auVar71._16_8_;
        auVar29._24_8_ = lVar66 + auVar64._24_8_ + auVar72._24_8_ + auVar71._24_8_;
        uVar41 = uVar41 + lVar57;
        lVar65 = *(longlong *)((longlong)pauVar50[1] + 0x10);
        auVar32 = *(undefined1 (*) [24])((longlong)pauVar50[1] + 8);
        lVar40 = *(longlong *)((longlong)pauVar50[2] + 8);
        *(longlong *)pauVar48[-0xe] =
             auVar29._0_8_ + *(longlong *)*(undefined1 (*) [24])((longlong)pauVar50[1] + 8);
        *(longlong *)(pauVar48[-0xe] + 8) = auVar29._8_8_ + lVar65;
        *(longlong *)pauVar48[-0xd] = auVar29._16_8_ + auVar32._16_8_;
        *(longlong *)(pauVar48[-0xd] + 8) = auVar29._24_8_ + lVar40;
        auVar72 = vpalignr_avx2(auVar31,auVar30,8);
        auVar64 = vpalignr_avx2(auVar27,auVar26,8);
        uVar60 = lVar57 + ((uVar62 ^ uVar42) & (uVar61 ^ uVar62) ^ uVar62) +
                 ((uVar61 >> 0x22 | uVar61 * 0x40000000) ^ (uVar61 >> 0x27 | uVar61 * 0x2000000) ^
                 (uVar61 >> 0x1c | uVar61 << 0x24));
        auVar76 = vpsrlq_avx2(auVar72,1);
        lVar40 = auVar30._8_8_;
        lVar65 = auVar30._16_8_;
        lVar66 = auVar30._24_8_;
        auVar80 = vpsrlq_avx2(auVar72,7);
        auVar71 = vpsllq_avx2(auVar72,0x38);
        lVar57 = uVar59 + *(longlong *)pauVar48[4] + (uVar44 & uVar41) + (~uVar41 & uVar39) +
                 ((uVar41 >> 0x29 | uVar41 * 0x800000) ^ (uVar41 >> 0x12 | uVar41 << 0x2e) ^
                 (uVar41 >> 0xe | uVar41 << 0x32));
        auVar77 = vpsrlq_avx2(auVar76,7);
        uVar42 = uVar42 + lVar57;
        auVar72 = vpsllq_avx2(auVar71,7);
        auVar81 = vpsrlq_avx2(auVar29,6);
        auVar72 = auVar80 ^ auVar76 ^ auVar71 ^ auVar77 ^ auVar72;
        auVar77 = vpsllq_avx2(auVar29,3);
        auVar76 = vpsrlq_avx2(auVar29,0x13);
        uVar59 = lVar57 + ((uVar61 ^ uVar62) & (uVar60 ^ uVar61) ^ uVar61) +
                 ((uVar60 >> 0x22 | uVar60 * 0x40000000) ^ (uVar60 >> 0x27 | uVar60 * 0x2000000) ^
                 (uVar60 >> 0x1c | uVar60 << 0x24));
        auVar80 = vpsllq_avx2(auVar77,0x2a);
        auVar71 = vpsrlq_avx2(auVar76,0x2a);
        auVar71 = auVar81 ^ auVar77 ^ auVar76 ^ auVar80 ^ auVar71;
        lVar57 = uVar39 + *(longlong *)(pauVar48[4] + 8) + (uVar41 & uVar42) + (~uVar42 & uVar44) +
                 ((uVar42 >> 0x29 | uVar42 * 0x800000) ^ (uVar42 >> 0x12 | uVar42 << 0x2e) ^
                 (uVar42 >> 0xe | uVar42 << 0x32));
        auVar30._0_8_ = auVar30._0_8_ + auVar64._0_8_ + auVar72._0_8_ + auVar71._0_8_;
        auVar30._8_8_ = lVar40 + auVar64._8_8_ + auVar72._8_8_ + auVar71._8_8_;
        auVar30._16_8_ = lVar65 + auVar64._16_8_ + auVar72._16_8_ + auVar71._16_8_;
        auVar30._24_8_ = lVar66 + auVar64._24_8_ + auVar72._24_8_ + auVar71._24_8_;
        uVar62 = uVar62 + lVar57;
        lVar65 = *(longlong *)pauVar50[3];
        auVar32 = *(undefined1 (*) [24])((longlong)pauVar50[2] + 0x10);
        lVar40 = *(longlong *)((longlong)pauVar50[3] + 0x10);
        *(longlong *)pauVar48[-0xc] =
             auVar30._0_8_ + *(longlong *)*(undefined1 (*) [24])((longlong)pauVar50[2] + 0x10);
        *(longlong *)(pauVar48[-0xc] + 8) = auVar30._8_8_ + lVar65;
        *(longlong *)pauVar48[-0xb] = auVar30._16_8_ + auVar32._16_8_;
        *(longlong *)(pauVar48[-0xb] + 8) = auVar30._24_8_ + lVar40;
        auVar72 = vpalignr_avx2(auVar24,auVar31,8);
        auVar64 = vpalignr_avx2(auVar28,auVar27,8);
        uVar39 = lVar57 + ((uVar60 ^ uVar61) & (uVar59 ^ uVar60) ^ uVar60) +
                 ((uVar59 >> 0x22 | uVar59 * 0x40000000) ^ (uVar59 >> 0x27 | uVar59 * 0x2000000) ^
                 (uVar59 >> 0x1c | uVar59 << 0x24));
        auVar76 = vpsrlq_avx2(auVar72,1);
        lVar40 = auVar31._8_8_;
        lVar65 = auVar31._16_8_;
        lVar66 = auVar31._24_8_;
        auVar80 = vpsrlq_avx2(auVar72,7);
        auVar71 = vpsllq_avx2(auVar72,0x38);
        lVar57 = uVar44 + *(longlong *)pauVar48[6] + (uVar42 & uVar62) + (~uVar62 & uVar41) +
                 ((uVar62 >> 0x29 | uVar62 * 0x800000) ^ (uVar62 >> 0x12 | uVar62 << 0x2e) ^
                 (uVar62 >> 0xe | uVar62 << 0x32));
        auVar77 = vpsrlq_avx2(auVar76,7);
        uVar61 = uVar61 + lVar57;
        auVar72 = vpsllq_avx2(auVar71,7);
        auVar81 = vpsrlq_avx2(auVar30,6);
        auVar72 = auVar80 ^ auVar76 ^ auVar71 ^ auVar77 ^ auVar72;
        auVar77 = vpsllq_avx2(auVar30,3);
        auVar76 = vpsrlq_avx2(auVar30,0x13);
        uVar44 = lVar57 + ((uVar59 ^ uVar60) & (uVar39 ^ uVar59) ^ uVar59) +
                 ((uVar39 >> 0x22 | uVar39 * 0x40000000) ^ (uVar39 >> 0x27 | uVar39 * 0x2000000) ^
                 (uVar39 >> 0x1c | uVar39 << 0x24));
        auVar80 = vpsllq_avx2(auVar77,0x2a);
        auVar71 = vpsrlq_avx2(auVar76,0x2a);
        auVar71 = auVar81 ^ auVar77 ^ auVar76 ^ auVar80 ^ auVar71;
        lVar57 = uVar41 + *(longlong *)(pauVar48[6] + 8) + (uVar62 & uVar61) + (~uVar61 & uVar42) +
                 ((uVar61 >> 0x29 | uVar61 * 0x800000) ^ (uVar61 >> 0x12 | uVar61 << 0x2e) ^
                 (uVar61 >> 0xe | uVar61 << 0x32));
        uVar58 = uVar44 ^ uVar39;
        auVar31._0_8_ = auVar31._0_8_ + auVar64._0_8_ + auVar72._0_8_ + auVar71._0_8_;
        auVar31._8_8_ = lVar40 + auVar64._8_8_ + auVar72._8_8_ + auVar71._8_8_;
        auVar31._16_8_ = lVar65 + auVar64._16_8_ + auVar72._16_8_ + auVar71._16_8_;
        auVar31._24_8_ = lVar66 + auVar64._24_8_ + auVar72._24_8_ + auVar71._24_8_;
        uVar60 = uVar60 + lVar57;
        lVar65 = *(longlong *)((longlong)pauVar50[4] + 8);
        auVar32 = pauVar50[4];
        lVar40 = *(longlong *)pauVar50[5];
        uVar63 = (uVar44 >> 0x22 | uVar44 * 0x40000000) ^ (uVar44 >> 0x27 | uVar44 * 0x2000000) ^
                 (uVar44 >> 0x1c | uVar44 << 0x24);
        uVar41 = lVar57 + ((uVar39 ^ uVar59) & uVar58 ^ uVar39);
        *(longlong *)pauVar48[-10] = auVar31._0_8_ + *(longlong *)pauVar50[4];
        *(longlong *)(pauVar48[-10] + 8) = auVar31._8_8_ + lVar65;
        *(longlong *)pauVar48[-9] = auVar31._16_8_ + auVar32._16_8_;
        *(longlong *)(pauVar48[-9] + 8) = auVar31._24_8_ + lVar40;
        pauVar38 = pauVar50 + 5;
        pauVar50 = (undefined1 (*) [24])((longlong)pauVar50[10] + 0x10);
      } while (*(char *)((longlong)*pauVar38 + 0xf) != '\0');
      uVar41 = uVar41 + uVar63;
      lVar57 = uVar42 + *(longlong *)pauVar48[-8] + (uVar61 & uVar60) + (~uVar60 & uVar62) +
               ((uVar60 >> 0x29 | uVar60 * 0x800000) ^ (uVar60 >> 0x12 | uVar60 << 0x2e) ^
               (uVar60 >> 0xe | uVar60 << 0x32));
      uVar59 = uVar59 + lVar57;
      uVar42 = lVar57 + (uVar58 & (uVar41 ^ uVar44) ^ uVar44) +
               ((uVar41 >> 0x22 | uVar41 * 0x40000000) ^ (uVar41 >> 0x27 | uVar41 * 0x2000000) ^
               (uVar41 >> 0x1c | uVar41 << 0x24));
      lVar57 = uVar62 + *(longlong *)(pauVar48[-8] + 8) + (uVar60 & uVar59) + (~uVar59 & uVar61) +
               ((uVar59 >> 0x29 | uVar59 * 0x800000) ^ (uVar59 >> 0x12 | uVar59 << 0x2e) ^
               (uVar59 >> 0xe | uVar59 << 0x32));
      uVar39 = uVar39 + lVar57;
      uVar62 = lVar57 + ((uVar41 ^ uVar44) & (uVar42 ^ uVar41) ^ uVar41) +
               ((uVar42 >> 0x22 | uVar42 * 0x40000000) ^ (uVar42 >> 0x27 | uVar42 * 0x2000000) ^
               (uVar42 >> 0x1c | uVar42 << 0x24));
      lVar57 = uVar61 + *(longlong *)pauVar48[-6] + (uVar59 & uVar39) + (~uVar39 & uVar60) +
               ((uVar39 >> 0x29 | uVar39 * 0x800000) ^ (uVar39 >> 0x12 | uVar39 << 0x2e) ^
               (uVar39 >> 0xe | uVar39 << 0x32));
      uVar44 = uVar44 + lVar57;
      uVar61 = lVar57 + ((uVar42 ^ uVar41) & (uVar62 ^ uVar42) ^ uVar42) +
               ((uVar62 >> 0x22 | uVar62 * 0x40000000) ^ (uVar62 >> 0x27 | uVar62 * 0x2000000) ^
               (uVar62 >> 0x1c | uVar62 << 0x24));
      lVar57 = uVar60 + *(longlong *)(pauVar48[-6] + 8) + (uVar39 & uVar44) + (~uVar44 & uVar59) +
               ((uVar44 >> 0x29 | uVar44 * 0x800000) ^ (uVar44 >> 0x12 | uVar44 << 0x2e) ^
               (uVar44 >> 0xe | uVar44 << 0x32));
      uVar41 = uVar41 + lVar57;
      uVar60 = lVar57 + ((uVar62 ^ uVar42) & (uVar61 ^ uVar62) ^ uVar62) +
               ((uVar61 >> 0x22 | uVar61 * 0x40000000) ^ (uVar61 >> 0x27 | uVar61 * 0x2000000) ^
               (uVar61 >> 0x1c | uVar61 << 0x24));
      lVar57 = uVar59 + *(longlong *)pauVar48[-4] + (uVar44 & uVar41) + (~uVar41 & uVar39) +
               ((uVar41 >> 0x29 | uVar41 * 0x800000) ^ (uVar41 >> 0x12 | uVar41 << 0x2e) ^
               (uVar41 >> 0xe | uVar41 << 0x32));
      uVar42 = uVar42 + lVar57;
      uVar59 = lVar57 + ((uVar61 ^ uVar62) & (uVar60 ^ uVar61) ^ uVar61) +
               ((uVar60 >> 0x22 | uVar60 * 0x40000000) ^ (uVar60 >> 0x27 | uVar60 * 0x2000000) ^
               (uVar60 >> 0x1c | uVar60 << 0x24));
      lVar57 = uVar39 + *(longlong *)(pauVar48[-4] + 8) + (uVar41 & uVar42) + (~uVar42 & uVar44) +
               ((uVar42 >> 0x29 | uVar42 * 0x800000) ^ (uVar42 >> 0x12 | uVar42 << 0x2e) ^
               (uVar42 >> 0xe | uVar42 << 0x32));
      uVar62 = uVar62 + lVar57;
      uVar39 = lVar57 + ((uVar60 ^ uVar61) & (uVar59 ^ uVar60) ^ uVar60) +
               ((uVar59 >> 0x22 | uVar59 * 0x40000000) ^ (uVar59 >> 0x27 | uVar59 * 0x2000000) ^
               (uVar59 >> 0x1c | uVar59 << 0x24));
      lVar57 = uVar44 + *(longlong *)pauVar48[-2] + (uVar42 & uVar62) + (~uVar62 & uVar41) +
               ((uVar62 >> 0x29 | uVar62 * 0x800000) ^ (uVar62 >> 0x12 | uVar62 << 0x2e) ^
               (uVar62 >> 0xe | uVar62 << 0x32));
      uVar61 = uVar61 + lVar57;
      uVar44 = lVar57 + ((uVar59 ^ uVar60) & (uVar39 ^ uVar59) ^ uVar59) +
               ((uVar39 >> 0x22 | uVar39 * 0x40000000) ^ (uVar39 >> 0x27 | uVar39 * 0x2000000) ^
               (uVar39 >> 0x1c | uVar39 << 0x24));
      lVar57 = uVar41 + *(longlong *)(pauVar48[-2] + 8) + (uVar62 & uVar61) + (~uVar61 & uVar42) +
               ((uVar61 >> 0x29 | uVar61 * 0x800000) ^ (uVar61 >> 0x12 | uVar61 << 0x2e) ^
               (uVar61 >> 0xe | uVar61 << 0x32));
      uVar60 = uVar60 + lVar57;
      uVar41 = lVar57 + ((uVar39 ^ uVar59) & (uVar44 ^ uVar39) ^ uVar39) +
               ((uVar44 >> 0x22 | uVar44 * 0x40000000) ^ (uVar44 >> 0x27 | uVar44 * 0x2000000) ^
               (uVar44 >> 0x1c | uVar44 << 0x24));
      lVar57 = uVar42 + *(longlong *)*pauVar47 + (uVar61 & uVar60) + (~uVar60 & uVar62) +
               ((uVar60 >> 0x29 | uVar60 * 0x800000) ^ (uVar60 >> 0x12 | uVar60 << 0x2e) ^
               (uVar60 >> 0xe | uVar60 << 0x32));
      uVar59 = uVar59 + lVar57;
      uVar42 = lVar57 + ((uVar44 ^ uVar39) & (uVar41 ^ uVar44) ^ uVar44) +
               ((uVar41 >> 0x22 | uVar41 * 0x40000000) ^ (uVar41 >> 0x27 | uVar41 * 0x2000000) ^
               (uVar41 >> 0x1c | uVar41 << 0x24));
      lVar57 = uVar62 + *(longlong *)(pauVar48[-0x10] + 8) + (uVar60 & uVar59) + (~uVar59 & uVar61)
               + ((uVar59 >> 0x29 | uVar59 * 0x800000) ^ (uVar59 >> 0x12 | uVar59 << 0x2e) ^
                 (uVar59 >> 0xe | uVar59 << 0x32));
      uVar39 = uVar39 + lVar57;
      uVar62 = lVar57 + ((uVar41 ^ uVar44) & (uVar42 ^ uVar41) ^ uVar41) +
               ((uVar42 >> 0x22 | uVar42 * 0x40000000) ^ (uVar42 >> 0x27 | uVar42 * 0x2000000) ^
               (uVar42 >> 0x1c | uVar42 << 0x24));
      lVar57 = uVar61 + *(longlong *)pauVar48[-0xe] + (uVar59 & uVar39) + (~uVar39 & uVar60) +
               ((uVar39 >> 0x29 | uVar39 * 0x800000) ^ (uVar39 >> 0x12 | uVar39 << 0x2e) ^
               (uVar39 >> 0xe | uVar39 << 0x32));
      uVar44 = uVar44 + lVar57;
      uVar61 = lVar57 + ((uVar42 ^ uVar41) & (uVar62 ^ uVar42) ^ uVar42) +
               ((uVar62 >> 0x22 | uVar62 * 0x40000000) ^ (uVar62 >> 0x27 | uVar62 * 0x2000000) ^
               (uVar62 >> 0x1c | uVar62 << 0x24));
      lVar57 = uVar60 + *(longlong *)(pauVar48[-0xe] + 8) + (uVar39 & uVar44) + (~uVar44 & uVar59) +
               ((uVar44 >> 0x29 | uVar44 * 0x800000) ^ (uVar44 >> 0x12 | uVar44 << 0x2e) ^
               (uVar44 >> 0xe | uVar44 << 0x32));
      uVar41 = uVar41 + lVar57;
      uVar60 = lVar57 + ((uVar62 ^ uVar42) & (uVar61 ^ uVar62) ^ uVar62) +
               ((uVar61 >> 0x22 | uVar61 * 0x40000000) ^ (uVar61 >> 0x27 | uVar61 * 0x2000000) ^
               (uVar61 >> 0x1c | uVar61 << 0x24));
      lVar57 = uVar59 + *(longlong *)pauVar48[-0xc] + (uVar44 & uVar41) + (~uVar41 & uVar39) +
               ((uVar41 >> 0x29 | uVar41 * 0x800000) ^ (uVar41 >> 0x12 | uVar41 << 0x2e) ^
               (uVar41 >> 0xe | uVar41 << 0x32));
      uVar42 = uVar42 + lVar57;
      uVar59 = lVar57 + ((uVar61 ^ uVar62) & (uVar60 ^ uVar61) ^ uVar61) +
               ((uVar60 >> 0x22 | uVar60 * 0x40000000) ^ (uVar60 >> 0x27 | uVar60 * 0x2000000) ^
               (uVar60 >> 0x1c | uVar60 << 0x24));
      lVar57 = uVar39 + *(longlong *)(pauVar48[-0xc] + 8) + (uVar41 & uVar42) + (~uVar42 & uVar44) +
               ((uVar42 >> 0x29 | uVar42 * 0x800000) ^ (uVar42 >> 0x12 | uVar42 << 0x2e) ^
               (uVar42 >> 0xe | uVar42 << 0x32));
      uVar62 = uVar62 + lVar57;
      uVar39 = lVar57 + ((uVar60 ^ uVar61) & (uVar59 ^ uVar60) ^ uVar60) +
               ((uVar59 >> 0x22 | uVar59 * 0x40000000) ^ (uVar59 >> 0x27 | uVar59 * 0x2000000) ^
               (uVar59 >> 0x1c | uVar59 << 0x24));
      lVar57 = uVar44 + *(longlong *)pauVar48[-10] + (uVar42 & uVar62) + (~uVar62 & uVar41) +
               ((uVar62 >> 0x29 | uVar62 * 0x800000) ^ (uVar62 >> 0x12 | uVar62 << 0x2e) ^
               (uVar62 >> 0xe | uVar62 << 0x32));
      uVar61 = uVar61 + lVar57;
      uVar44 = lVar57 + ((uVar59 ^ uVar60) & (uVar39 ^ uVar59) ^ uVar59) +
               ((uVar39 >> 0x22 | uVar39 * 0x40000000) ^ (uVar39 >> 0x27 | uVar39 * 0x2000000) ^
               (uVar39 >> 0x1c | uVar39 << 0x24));
      lVar57 = uVar41 + *(longlong *)(pauVar48[-10] + 8) + (uVar62 & uVar61) + (~uVar61 & uVar42) +
               ((uVar61 >> 0x29 | uVar61 * 0x800000) ^ (uVar61 >> 0x12 | uVar61 << 0x2e) ^
               (uVar61 >> 0xe | uVar61 << 0x32));
      plVar49 = *(longlong **)pauVar48[0x40];
      pauVar51 = pauVar48 + 0x38;
      lVar40 = lVar57 + ((uVar39 ^ uVar59) & (uVar44 ^ uVar39) ^ uVar39) +
               ((uVar44 >> 0x22 | uVar44 * 0x40000000) ^ (uVar44 >> 0x27 | uVar44 * 0x2000000) ^
               (uVar44 >> 0x1c | uVar44 << 0x24)) + *plVar49;
      uVar44 = uVar44 + plVar49[1];
      uVar39 = uVar39 + plVar49[2];
      uVar59 = uVar59 + plVar49[3];
      uVar60 = uVar60 + lVar57 + plVar49[4];
      uVar61 = uVar61 + plVar49[5];
      uVar62 = uVar62 + plVar49[6];
      uVar42 = uVar42 + plVar49[7];
      *plVar49 = lVar40;
      plVar49[1] = uVar44;
      plVar49[2] = uVar39;
      plVar49[3] = uVar59;
      plVar49[4] = uVar60;
      plVar49[5] = uVar61;
      plVar49[6] = uVar62;
      plVar49[7] = uVar42;
      if (pauVar52 == *(undefined1 (**) [16])pauVar48[0x41]) {
        return;
      }
      uVar41 = 0;
      uVar58 = uVar44 ^ uVar39;
      do {
        uVar41 = lVar40 + uVar41;
        lVar57 = uVar42 + *(longlong *)pauVar51[1] + (uVar61 & uVar60) + (~uVar60 & uVar62) +
                 ((uVar60 >> 0x29 | uVar60 << 0x17) ^ (uVar60 >> 0x12 | uVar60 << 0x2e) ^
                 (uVar60 >> 0xe | uVar60 << 0x32));
        uVar59 = uVar59 + lVar57;
        uVar42 = lVar57 + (uVar58 & (uVar41 ^ uVar44) ^ uVar44) +
                 ((uVar41 >> 0x22 | uVar41 * 0x40000000) ^ (uVar41 >> 0x27 | uVar41 * 0x2000000) ^
                 (uVar41 >> 0x1c | uVar41 << 0x24));
        lVar57 = uVar62 + *(longlong *)(pauVar51[1] + 8) + (uVar60 & uVar59) + (~uVar59 & uVar61) +
                 ((uVar59 >> 0x29 | uVar59 * 0x800000) ^ (uVar59 >> 0x12 | uVar59 << 0x2e) ^
                 (uVar59 >> 0xe | uVar59 << 0x32));
        uVar39 = uVar39 + lVar57;
        uVar62 = lVar57 + ((uVar41 ^ uVar44) & (uVar42 ^ uVar41) ^ uVar41) +
                 ((uVar42 >> 0x22 | uVar42 * 0x40000000) ^ (uVar42 >> 0x27 | uVar42 * 0x2000000) ^
                 (uVar42 >> 0x1c | uVar42 << 0x24));
        lVar57 = uVar61 + *(longlong *)pauVar51[3] + (uVar59 & uVar39) + (~uVar39 & uVar60) +
                 ((uVar39 >> 0x29 | uVar39 * 0x800000) ^ (uVar39 >> 0x12 | uVar39 << 0x2e) ^
                 (uVar39 >> 0xe | uVar39 << 0x32));
        uVar44 = uVar44 + lVar57;
        uVar61 = lVar57 + ((uVar42 ^ uVar41) & (uVar62 ^ uVar42) ^ uVar42) +
                 ((uVar62 >> 0x22 | uVar62 * 0x40000000) ^ (uVar62 >> 0x27 | uVar62 * 0x2000000) ^
                 (uVar62 >> 0x1c | uVar62 << 0x24));
        lVar57 = uVar60 + *(longlong *)(pauVar51[3] + 8) + (uVar39 & uVar44) + (~uVar44 & uVar59) +
                 ((uVar44 >> 0x29 | uVar44 * 0x800000) ^ (uVar44 >> 0x12 | uVar44 << 0x2e) ^
                 (uVar44 >> 0xe | uVar44 << 0x32));
        uVar41 = uVar41 + lVar57;
        uVar60 = lVar57 + ((uVar62 ^ uVar42) & (uVar61 ^ uVar62) ^ uVar62) +
                 ((uVar61 >> 0x22 | uVar61 * 0x40000000) ^ (uVar61 >> 0x27 | uVar61 * 0x2000000) ^
                 (uVar61 >> 0x1c | uVar61 << 0x24));
        lVar57 = uVar59 + *(longlong *)pauVar51[5] + (uVar44 & uVar41) + (~uVar41 & uVar39) +
                 ((uVar41 >> 0x29 | uVar41 * 0x800000) ^ (uVar41 >> 0x12 | uVar41 << 0x2e) ^
                 (uVar41 >> 0xe | uVar41 << 0x32));
        uVar42 = uVar42 + lVar57;
        uVar59 = lVar57 + ((uVar61 ^ uVar62) & (uVar60 ^ uVar61) ^ uVar61) +
                 ((uVar60 >> 0x22 | uVar60 * 0x40000000) ^ (uVar60 >> 0x27 | uVar60 * 0x2000000) ^
                 (uVar60 >> 0x1c | uVar60 << 0x24));
        lVar57 = uVar39 + *(longlong *)(pauVar51[5] + 8) + (uVar41 & uVar42) + (~uVar42 & uVar44) +
                 ((uVar42 >> 0x29 | uVar42 * 0x800000) ^ (uVar42 >> 0x12 | uVar42 << 0x2e) ^
                 (uVar42 >> 0xe | uVar42 << 0x32));
        uVar62 = uVar62 + lVar57;
        uVar39 = lVar57 + ((uVar60 ^ uVar61) & (uVar59 ^ uVar60) ^ uVar60) +
                 ((uVar59 >> 0x22 | uVar59 * 0x40000000) ^ (uVar59 >> 0x27 | uVar59 * 0x2000000) ^
                 (uVar59 >> 0x1c | uVar59 << 0x24));
        lVar57 = uVar44 + *(longlong *)pauVar51[7] + (uVar42 & uVar62) + (~uVar62 & uVar41) +
                 ((uVar62 >> 0x29 | uVar62 * 0x800000) ^ (uVar62 >> 0x12 | uVar62 << 0x2e) ^
                 (uVar62 >> 0xe | uVar62 << 0x32));
        uVar61 = uVar61 + lVar57;
        uVar44 = lVar57 + ((uVar59 ^ uVar60) & (uVar39 ^ uVar59) ^ uVar59) +
                 ((uVar39 >> 0x22 | uVar39 * 0x40000000) ^ (uVar39 >> 0x27 | uVar39 * 0x2000000) ^
                 (uVar39 >> 0x1c | uVar39 << 0x24));
        lVar40 = uVar41 + *(longlong *)(pauVar51[7] + 8) + (uVar62 & uVar61) + (~uVar61 & uVar42) +
                 ((uVar61 >> 0x29 | uVar61 * 0x800000) ^ (uVar61 >> 0x12 | uVar61 << 0x2e) ^
                 (uVar61 >> 0xe | uVar61 << 0x32));
        uVar58 = uVar44 ^ uVar39;
        uVar60 = uVar60 + lVar40;
        uVar41 = (uVar44 >> 0x22 | uVar44 * 0x40000000) ^ (uVar44 >> 0x27 | uVar44 * 0x2000000) ^
                 (uVar44 >> 0x1c | uVar44 << 0x24);
        lVar40 = lVar40 + ((uVar39 ^ uVar59) & uVar58 ^ uVar39);
        pauVar51 = pauVar51 + -8;
      } while (pauVar47 <= pauVar51);
      puVar2 = *(ulonglong **)pauVar48[0x40];
      pauVar47 = pauVar48 + 0x38;
      uVar41 = lVar40 + uVar41 + *puVar2;
      uVar44 = uVar44 + puVar2[1];
      uVar39 = uVar39 + puVar2[2];
      uVar59 = uVar59 + puVar2[3];
      uVar60 = uVar60 + puVar2[4];
      uVar61 = uVar61 + puVar2[5];
      pauVar52 = pauVar52 + 0x10;
      uVar62 = uVar62 + puVar2[6];
      uVar42 = uVar42 + puVar2[7];
      pauVar3 = *(undefined1 (**) [16])pauVar48[0x41];
      *puVar2 = uVar41;
      pauVar51 = pauVar52;
      if (pauVar52 == pauVar3) {
        pauVar51 = pauVar47;
      }
      puVar2[1] = uVar44;
      puVar2[2] = uVar39;
      puVar2[3] = uVar59;
      puVar2[4] = uVar60;
      puVar2[5] = uVar61;
      puVar2[6] = uVar62;
      puVar2[7] = uVar42;
    } while (pauVar52 <= pauVar3);
    return;
  }
  if ((DAT_15540a9f4 & 0x10000200 | OPENSSL_ia32cap_P & 0x40000000) != 0x50000200) {
    pauVar52 = param_2 + param_3 * 8;
    uVar39 = *param_1;
    uVar44 = param_1[1];
    uVar41 = param_1[2];
    uVar42 = param_1[3];
    uVar62 = param_1[4];
    uVar61 = param_1[5];
    uVar60 = param_1[6];
    uVar59 = param_1[7];
    do {
      uVar58 = *(ulonglong *)*param_2;
      local_100._0_8_ =
           uVar58 >> 0x38 | (uVar58 & 0xff000000000000) >> 0x28 | (uVar58 & 0xff0000000000) >> 0x18
           | (uVar58 & 0xff00000000) >> 8 | (uVar58 & 0xff000000) << 8 | (uVar58 & 0xff0000) << 0x18
           | (uVar58 & 0xff00) << 0x28 | uVar58 << 0x38;
      uVar58 = (uVar62 >> 0x17 | uVar62 << 0x29) ^ uVar62;
      uVar63 = (uVar39 >> 5 | uVar39 << 0x3b) ^ uVar39;
      uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar62;
      uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar39;
      lVar57 = local_100._0_8_ + uVar59 + ((uVar61 ^ uVar60) & uVar62 ^ uVar60) + K512 +
               (uVar58 >> 0xe | uVar58 << 0x32);
      uVar42 = uVar42 + lVar57;
      uVar56 = (uVar44 ^ (uVar44 ^ uVar41) & (uVar39 ^ uVar44)) + lVar57 +
               (uVar63 >> 0x1c | uVar63 << 0x24);
      uVar59 = *(ulonglong *)(*param_2 + 8);
      local_100._8_8_ =
           uVar59 >> 0x38 | (uVar59 & 0xff000000000000) >> 0x28 | (uVar59 & 0xff0000000000) >> 0x18
           | (uVar59 & 0xff00000000) >> 8 | (uVar59 & 0xff000000) << 8 | (uVar59 & 0xff0000) << 0x18
           | (uVar59 & 0xff00) << 0x28 | uVar59 << 0x38;
      uVar59 = (uVar42 >> 0x17 | uVar42 << 0x29) ^ uVar42;
      uVar58 = (uVar56 >> 5 | uVar56 << 0x3b) ^ uVar56;
      uVar59 = (uVar59 >> 4 | uVar59 << 0x3c) ^ uVar42;
      uVar58 = (uVar58 >> 6 | uVar58 << 0x3a) ^ uVar56;
      lVar57 = local_100._8_8_ + uVar60 + ((uVar62 ^ uVar61) & uVar42 ^ uVar61) + DAT_140e26808 +
               (uVar59 >> 0xe | uVar59 << 0x32);
      uVar41 = uVar41 + lVar57;
      uVar55 = (uVar39 ^ (uVar39 ^ uVar44) & (uVar56 ^ uVar39)) + lVar57 +
               (uVar58 >> 0x1c | uVar58 << 0x24);
      uVar60 = *(ulonglong *)param_2[1];
      local_f0._0_8_ =
           uVar60 >> 0x38 | (uVar60 & 0xff000000000000) >> 0x28 | (uVar60 & 0xff0000000000) >> 0x18
           | (uVar60 & 0xff00000000) >> 8 | (uVar60 & 0xff000000) << 8 | (uVar60 & 0xff0000) << 0x18
           | (uVar60 & 0xff00) << 0x28 | uVar60 << 0x38;
      uVar60 = (uVar41 >> 0x17 | uVar41 << 0x29) ^ uVar41;
      uVar59 = (uVar55 >> 5 | uVar55 << 0x3b) ^ uVar55;
      uVar60 = (uVar60 >> 4 | uVar60 << 0x3c) ^ uVar41;
      uVar59 = (uVar59 >> 6 | uVar59 << 0x3a) ^ uVar55;
      lVar57 = local_f0._0_8_ + uVar61 + ((uVar42 ^ uVar62) & uVar41 ^ uVar62) + DAT_140e26820 +
               (uVar60 >> 0xe | uVar60 << 0x32);
      uVar44 = uVar44 + lVar57;
      uVar54 = (uVar56 ^ (uVar56 ^ uVar39) & (uVar55 ^ uVar56)) + lVar57 +
               (uVar59 >> 0x1c | uVar59 << 0x24);
      uVar61 = *(ulonglong *)(param_2[1] + 8);
      local_f0._8_8_ =
           uVar61 >> 0x38 | (uVar61 & 0xff000000000000) >> 0x28 | (uVar61 & 0xff0000000000) >> 0x18
           | (uVar61 & 0xff00000000) >> 8 | (uVar61 & 0xff000000) << 8 | (uVar61 & 0xff0000) << 0x18
           | (uVar61 & 0xff00) << 0x28 | uVar61 << 0x38;
      uVar61 = (uVar44 >> 0x17 | uVar44 << 0x29) ^ uVar44;
      uVar60 = (uVar54 >> 5 | uVar54 << 0x3b) ^ uVar54;
      uVar61 = (uVar61 >> 4 | uVar61 << 0x3c) ^ uVar44;
      uVar60 = (uVar60 >> 6 | uVar60 << 0x3a) ^ uVar54;
      lVar57 = local_f0._8_8_ + uVar62 + ((uVar41 ^ uVar42) & uVar44 ^ uVar42) + DAT_140e26828 +
               (uVar61 >> 0xe | uVar61 << 0x32);
      uVar39 = uVar39 + lVar57;
      uVar53 = (uVar55 ^ (uVar55 ^ uVar56) & (uVar54 ^ uVar55)) + lVar57 +
               (uVar60 >> 0x1c | uVar60 << 0x24);
      uVar62 = *(ulonglong *)param_2[2];
      local_e0._0_8_ =
           uVar62 >> 0x38 | (uVar62 & 0xff000000000000) >> 0x28 | (uVar62 & 0xff0000000000) >> 0x18
           | (uVar62 & 0xff00000000) >> 8 | (uVar62 & 0xff000000) << 8 | (uVar62 & 0xff0000) << 0x18
           | (uVar62 & 0xff00) << 0x28 | uVar62 << 0x38;
      uVar62 = (uVar39 >> 0x17 | uVar39 << 0x29) ^ uVar39;
      uVar61 = (uVar53 >> 5 | uVar53 << 0x3b) ^ uVar53;
      uVar62 = (uVar62 >> 4 | uVar62 << 0x3c) ^ uVar39;
      uVar61 = (uVar61 >> 6 | uVar61 << 0x3a) ^ uVar53;
      lVar57 = local_e0._0_8_ + uVar42 + ((uVar44 ^ uVar41) & uVar39 ^ uVar41) + DAT_140e26840 +
               (uVar62 >> 0xe | uVar62 << 0x32);
      uVar56 = uVar56 + lVar57;
      uVar43 = (uVar54 ^ (uVar54 ^ uVar55) & (uVar53 ^ uVar54)) + lVar57 +
               (uVar61 >> 0x1c | uVar61 << 0x24);
      uVar42 = *(ulonglong *)(param_2[2] + 8);
      local_e0._8_8_ =
           uVar42 >> 0x38 | (uVar42 & 0xff000000000000) >> 0x28 | (uVar42 & 0xff0000000000) >> 0x18
           | (uVar42 & 0xff00000000) >> 8 | (uVar42 & 0xff000000) << 8 | (uVar42 & 0xff0000) << 0x18
           | (uVar42 & 0xff00) << 0x28 | uVar42 << 0x38;
      uVar42 = (uVar56 >> 0x17 | uVar56 << 0x29) ^ uVar56;
      uVar62 = (uVar43 >> 5 | uVar43 << 0x3b) ^ uVar43;
      uVar42 = (uVar42 >> 4 | uVar42 << 0x3c) ^ uVar56;
      uVar62 = (uVar62 >> 6 | uVar62 << 0x3a) ^ uVar43;
      lVar57 = local_e0._8_8_ + uVar41 + ((uVar39 ^ uVar44) & uVar56 ^ uVar44) + DAT_140e26848 +
               (uVar42 >> 0xe | uVar42 << 0x32);
      uVar55 = uVar55 + lVar57;
      uVar63 = (uVar53 ^ (uVar53 ^ uVar54) & (uVar43 ^ uVar53)) + lVar57 +
               (uVar62 >> 0x1c | uVar62 << 0x24);
      uVar41 = *(ulonglong *)param_2[3];
      local_d0._0_8_ =
           uVar41 >> 0x38 | (uVar41 & 0xff000000000000) >> 0x28 | (uVar41 & 0xff0000000000) >> 0x18
           | (uVar41 & 0xff00000000) >> 8 | (uVar41 & 0xff000000) << 8 | (uVar41 & 0xff0000) << 0x18
           | (uVar41 & 0xff00) << 0x28 | uVar41 << 0x38;
      uVar41 = (uVar55 >> 0x17 | uVar55 << 0x29) ^ uVar55;
      uVar42 = (uVar63 >> 5 | uVar63 << 0x3b) ^ uVar63;
      uVar41 = (uVar41 >> 4 | uVar41 << 0x3c) ^ uVar55;
      uVar42 = (uVar42 >> 6 | uVar42 << 0x3a) ^ uVar63;
      lVar57 = local_d0._0_8_ + uVar44 + ((uVar56 ^ uVar39) & uVar55 ^ uVar39) + DAT_140e26860 +
               (uVar41 >> 0xe | uVar41 << 0x32);
      uVar54 = uVar54 + lVar57;
      uVar45 = (uVar43 ^ (uVar43 ^ uVar53) & (uVar63 ^ uVar43)) + lVar57 +
               (uVar42 >> 0x1c | uVar42 << 0x24);
      uVar44 = *(ulonglong *)(param_2[3] + 8);
      local_d0._8_8_ =
           uVar44 >> 0x38 | (uVar44 & 0xff000000000000) >> 0x28 | (uVar44 & 0xff0000000000) >> 0x18
           | (uVar44 & 0xff00000000) >> 8 | (uVar44 & 0xff000000) << 8 | (uVar44 & 0xff0000) << 0x18
           | (uVar44 & 0xff00) << 0x28 | uVar44 << 0x38;
      uVar44 = (uVar54 >> 0x17 | uVar54 << 0x29) ^ uVar54;
      uVar41 = (uVar45 >> 5 | uVar45 << 0x3b) ^ uVar45;
      uVar44 = (uVar44 >> 4 | uVar44 << 0x3c) ^ uVar54;
      uVar41 = (uVar41 >> 6 | uVar41 << 0x3a) ^ uVar45;
      lVar57 = local_d0._8_8_ + uVar39 + ((uVar55 ^ uVar56) & uVar54 ^ uVar56) + DAT_140e26868 +
               (uVar44 >> 0xe | uVar44 << 0x32);
      uVar53 = uVar53 + lVar57;
      uVar58 = (uVar63 ^ (uVar63 ^ uVar43) & (uVar45 ^ uVar63)) + lVar57 +
               (uVar41 >> 0x1c | uVar41 << 0x24);
      uVar39 = *(ulonglong *)param_2[4];
      local_c0 = uVar39 >> 0x38 | (uVar39 & 0xff000000000000) >> 0x28 |
                 (uVar39 & 0xff0000000000) >> 0x18 | (uVar39 & 0xff00000000) >> 8 |
                 (uVar39 & 0xff000000) << 8 | (uVar39 & 0xff0000) << 0x18 |
                 (uVar39 & 0xff00) << 0x28 | uVar39 << 0x38;
      uVar39 = (uVar53 >> 0x17 | uVar53 << 0x29) ^ uVar53;
      uVar44 = (uVar58 >> 5 | uVar58 << 0x3b) ^ uVar58;
      uVar39 = (uVar39 >> 4 | uVar39 << 0x3c) ^ uVar53;
      uVar44 = (uVar44 >> 6 | uVar44 << 0x3a) ^ uVar58;
      lVar57 = local_c0 + uVar56 + ((uVar54 ^ uVar55) & uVar53 ^ uVar55) + DAT_140e26880 +
               (uVar39 >> 0xe | uVar39 << 0x32);
      uVar43 = uVar43 + lVar57;
      uVar59 = (uVar45 ^ (uVar45 ^ uVar63) & (uVar58 ^ uVar45)) + lVar57 +
               (uVar44 >> 0x1c | uVar44 << 0x24);
      uVar39 = *(ulonglong *)(param_2[4] + 8);
      local_b8 = uVar39 >> 0x38 | (uVar39 & 0xff000000000000) >> 0x28 |
                 (uVar39 & 0xff0000000000) >> 0x18 | (uVar39 & 0xff00000000) >> 8 |
                 (uVar39 & 0xff000000) << 8 | (uVar39 & 0xff0000) << 0x18 |
                 (uVar39 & 0xff00) << 0x28 | uVar39 << 0x38;
      uVar39 = (uVar43 >> 0x17 | uVar43 << 0x29) ^ uVar43;
      uVar44 = (uVar59 >> 5 | uVar59 << 0x3b) ^ uVar59;
      uVar39 = (uVar39 >> 4 | uVar39 << 0x3c) ^ uVar43;
      uVar44 = (uVar44 >> 6 | uVar44 << 0x3a) ^ uVar59;
      lVar57 = local_b8 + uVar55 + ((uVar53 ^ uVar54) & uVar43 ^ uVar54) + DAT_140e26888 +
               (uVar39 >> 0xe | uVar39 << 0x32);
      uVar63 = uVar63 + lVar57;
      uVar60 = (uVar58 ^ (uVar58 ^ uVar45) & (uVar59 ^ uVar58)) + lVar57 +
               (uVar44 >> 0x1c | uVar44 << 0x24);
      uVar39 = *(ulonglong *)param_2[5];
      local_b0 = uVar39 >> 0x38 | (uVar39 & 0xff000000000000) >> 0x28 |
                 (uVar39 & 0xff0000000000) >> 0x18 | (uVar39 & 0xff00000000) >> 8 |
                 (uVar39 & 0xff000000) << 8 | (uVar39 & 0xff0000) << 0x18 |
                 (uVar39 & 0xff00) << 0x28 | uVar39 << 0x38;
      uVar39 = (uVar63 >> 0x17 | uVar63 << 0x29) ^ uVar63;
      uVar44 = (uVar60 >> 5 | uVar60 << 0x3b) ^ uVar60;
      uVar39 = (uVar39 >> 4 | uVar39 << 0x3c) ^ uVar63;
      uVar44 = (uVar44 >> 6 | uVar44 << 0x3a) ^ uVar60;
      lVar57 = local_b0 + uVar54 + ((uVar43 ^ uVar53) & uVar63 ^ uVar53) + DAT_140e268a0 +
               (uVar39 >> 0xe | uVar39 << 0x32);
      uVar45 = uVar45 + lVar57;
      uVar61 = (uVar59 ^ (uVar59 ^ uVar58) & (uVar60 ^ uVar59)) + lVar57 +
               (uVar44 >> 0x1c | uVar44 << 0x24);
      uVar39 = *(ulonglong *)(param_2[5] + 8);
      uVar54 = uVar39 >> 0x38 | (uVar39 & 0xff000000000000) >> 0x28 |
               (uVar39 & 0xff0000000000) >> 0x18 | (uVar39 & 0xff00000000) >> 8 |
               (uVar39 & 0xff000000) << 8 | (uVar39 & 0xff0000) << 0x18 | (uVar39 & 0xff00) << 0x28
               | uVar39 << 0x38;
      uVar39 = (uVar45 >> 0x17 | uVar45 << 0x29) ^ uVar45;
      uVar44 = (uVar61 >> 5 | uVar61 << 0x3b) ^ uVar61;
      uVar39 = (uVar39 >> 4 | uVar39 << 0x3c) ^ uVar45;
      uVar44 = (uVar44 >> 6 | uVar44 << 0x3a) ^ uVar61;
      lVar57 = uVar54 + uVar53 + ((uVar63 ^ uVar43) & uVar45 ^ uVar43) + DAT_140e268a8 +
               (uVar39 >> 0xe | uVar39 << 0x32);
      uVar58 = uVar58 + lVar57;
      uVar62 = (uVar60 ^ (uVar60 ^ uVar59) & (uVar61 ^ uVar60)) + lVar57 +
               (uVar44 >> 0x1c | uVar44 << 0x24);
      uVar39 = *(ulonglong *)param_2[6];
      local_a0 = uVar39 >> 0x38 | (uVar39 & 0xff000000000000) >> 0x28 |
                 (uVar39 & 0xff0000000000) >> 0x18 | (uVar39 & 0xff00000000) >> 8 |
                 (uVar39 & 0xff000000) << 8 | (uVar39 & 0xff0000) << 0x18 |
                 (uVar39 & 0xff00) << 0x28 | uVar39 << 0x38;
      uVar39 = (uVar58 >> 0x17 | uVar58 << 0x29) ^ uVar58;
      uVar44 = (uVar62 >> 5 | uVar62 << 0x3b) ^ uVar62;
      uVar39 = (uVar39 >> 4 | uVar39 << 0x3c) ^ uVar58;
      uVar44 = (uVar44 >> 6 | uVar44 << 0x3a) ^ uVar62;
      lVar57 = local_a0 + uVar43 + ((uVar45 ^ uVar63) & uVar58 ^ uVar63) + DAT_140e268c0 +
               (uVar39 >> 0xe | uVar39 << 0x32);
      uVar59 = uVar59 + lVar57;
      uVar42 = (uVar61 ^ (uVar61 ^ uVar60) & (uVar62 ^ uVar61)) + lVar57 +
               (uVar44 >> 0x1c | uVar44 << 0x24);
      uVar39 = *(ulonglong *)(param_2[6] + 8);
      local_98 = uVar39 >> 0x38 | (uVar39 & 0xff000000000000) >> 0x28 |
                 (uVar39 & 0xff0000000000) >> 0x18 | (uVar39 & 0xff00000000) >> 8 |
                 (uVar39 & 0xff000000) << 8 | (uVar39 & 0xff0000) << 0x18 |
                 (uVar39 & 0xff00) << 0x28 | uVar39 << 0x38;
      uVar39 = (uVar59 >> 0x17 | uVar59 << 0x29) ^ uVar59;
      uVar44 = (uVar42 >> 5 | uVar42 << 0x3b) ^ uVar42;
      uVar39 = (uVar39 >> 4 | uVar39 << 0x3c) ^ uVar59;
      uVar44 = (uVar44 >> 6 | uVar44 << 0x3a) ^ uVar42;
      lVar57 = local_98 + uVar63 + ((uVar58 ^ uVar45) & uVar59 ^ uVar45) + DAT_140e268c8 +
               (uVar39 >> 0xe | uVar39 << 0x32);
      uVar60 = uVar60 + lVar57;
      uVar41 = (uVar62 ^ (uVar62 ^ uVar61) & (uVar42 ^ uVar62)) + lVar57 +
               (uVar44 >> 0x1c | uVar44 << 0x24);
      uVar39 = *(ulonglong *)param_2[7];
      local_90 = uVar39 >> 0x38 | (uVar39 & 0xff000000000000) >> 0x28 |
                 (uVar39 & 0xff0000000000) >> 0x18 | (uVar39 & 0xff00000000) >> 8 |
                 (uVar39 & 0xff000000) << 8 | (uVar39 & 0xff0000) << 0x18 |
                 (uVar39 & 0xff00) << 0x28 | uVar39 << 0x38;
      uVar39 = (uVar60 >> 0x17 | uVar60 << 0x29) ^ uVar60;
      uVar44 = (uVar41 >> 5 | uVar41 << 0x3b) ^ uVar41;
      uVar39 = (uVar39 >> 4 | uVar39 << 0x3c) ^ uVar60;
      uVar44 = (uVar44 >> 6 | uVar44 << 0x3a) ^ uVar41;
      lVar57 = local_90 + uVar45 + ((uVar59 ^ uVar58) & uVar60 ^ uVar58) + DAT_140e268e0 +
               (uVar39 >> 0xe | uVar39 << 0x32);
      uVar61 = uVar61 + lVar57;
      uVar44 = (uVar42 ^ (uVar42 ^ uVar62) & (uVar41 ^ uVar42)) + lVar57 +
               (uVar44 >> 0x1c | uVar44 << 0x24);
      uVar39 = *(ulonglong *)(param_2[7] + 8);
      local_88 = uVar39 >> 0x38 | (uVar39 & 0xff000000000000) >> 0x28 |
                 (uVar39 & 0xff0000000000) >> 0x18 | (uVar39 & 0xff00000000) >> 8 |
                 (uVar39 & 0xff000000) << 8 | (uVar39 & 0xff0000) << 0x18 |
                 (uVar39 & 0xff00) << 0x28 | uVar39 << 0x38;
      uVar39 = (uVar61 >> 0x17 | uVar61 << 0x29) ^ uVar61;
      uVar63 = (uVar44 >> 5 | uVar44 << 0x3b) ^ uVar44;
      uVar43 = (uVar39 >> 4 | uVar39 << 0x3c) ^ uVar61;
      uVar39 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar44;
      uVar63 = uVar44 ^ uVar41;
      uVar39 = uVar39 >> 0x1c | uVar39 << 0x24;
      lVar57 = local_88 + uVar58 + ((uVar60 ^ uVar59) & uVar61 ^ uVar59) + DAT_140e268e8 +
               (uVar43 >> 0xe | uVar43 << 0x32);
      uVar62 = uVar62 + lVar57;
      lVar57 = (uVar41 ^ (uVar41 ^ uVar42) & uVar63) + lVar57;
      plVar49 = &DAT_140e26900;
      do {
        uVar39 = lVar57 + uVar39;
        uVar58 = ((ulonglong)local_100._8_8_ >> 7 | local_100._8_8_ << 0x39) ^ local_100._8_8_;
        uVar43 = (local_90 >> 0x2a | local_90 << 0x16) ^ local_90;
        local_100._0_8_ =
             ((ulonglong)local_100._8_8_ >> 7 ^
             (uVar58 >> 1 | (ulonglong)((uVar58 & 1) != 0) << 0x3f)) + local_b8 + local_100._0_8_ +
             ((uVar43 >> 0x13 | uVar43 << 0x2d) ^ local_90 >> 6);
        uVar58 = (uVar62 >> 0x17 | uVar62 << 0x29) ^ uVar62;
        uVar43 = (uVar39 >> 5 | uVar39 << 0x3b) ^ uVar39;
        uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar62;
        uVar43 = (uVar43 >> 6 | uVar43 << 0x3a) ^ uVar39;
        lVar57 = local_100._0_8_ + uVar59 + ((uVar61 ^ uVar60) & uVar62 ^ uVar60) + *plVar49 +
                 (uVar58 >> 0xe | uVar58 << 0x32);
        uVar42 = uVar42 + lVar57;
        uVar45 = (uVar44 ^ uVar63 & (uVar39 ^ uVar44)) + lVar57 + (uVar43 >> 0x1c | uVar43 << 0x24);
        uVar58 = ((ulonglong)local_f0._0_8_ >> 7 | local_f0._0_8_ << 0x39) ^ local_f0._0_8_;
        uVar59 = (local_88 >> 0x2a | local_88 << 0x16) ^ local_88;
        local_100._8_8_ =
             ((ulonglong)local_f0._0_8_ >> 7 ^
             (uVar58 >> 1 | (ulonglong)((uVar58 & 1) != 0) << 0x3f)) + local_b0 + local_100._8_8_ +
             ((uVar59 >> 0x13 | uVar59 << 0x2d) ^ local_88 >> 6);
        uVar59 = (uVar42 >> 0x17 | uVar42 << 0x29) ^ uVar42;
        uVar58 = (uVar45 >> 5 | uVar45 << 0x3b) ^ uVar45;
        uVar59 = (uVar59 >> 4 | uVar59 << 0x3c) ^ uVar42;
        uVar58 = (uVar58 >> 6 | uVar58 << 0x3a) ^ uVar45;
        lVar57 = local_100._8_8_ + uVar60 + ((uVar62 ^ uVar61) & uVar42 ^ uVar61) + plVar49[1] +
                 (uVar59 >> 0xe | uVar59 << 0x32);
        uVar41 = uVar41 + lVar57;
        uVar60 = (uVar39 ^ (uVar39 ^ uVar44) & (uVar45 ^ uVar39)) + lVar57 +
                 (uVar58 >> 0x1c | uVar58 << 0x24);
        uVar59 = ((ulonglong)local_f0._8_8_ >> 7 | local_f0._8_8_ << 0x39) ^ local_f0._8_8_;
        uVar58 = ((ulonglong)local_100._0_8_ >> 0x2a | local_100._0_8_ * 0x400000) ^ local_100._0_8_
        ;
        local_f0._0_8_ =
             ((ulonglong)local_f0._8_8_ >> 7 ^
             (uVar59 >> 1 | (ulonglong)((uVar59 & 1) != 0) << 0x3f)) + uVar54 + local_f0._0_8_ +
             ((uVar58 >> 0x13 | uVar58 << 0x2d) ^ (ulonglong)local_100._0_8_ >> 6);
        uVar59 = (uVar41 >> 0x17 | uVar41 << 0x29) ^ uVar41;
        uVar58 = (uVar60 >> 5 | uVar60 << 0x3b) ^ uVar60;
        uVar59 = (uVar59 >> 4 | uVar59 << 0x3c) ^ uVar41;
        uVar58 = (uVar58 >> 6 | uVar58 << 0x3a) ^ uVar60;
        lVar57 = local_f0._0_8_ + uVar61 + ((uVar42 ^ uVar62) & uVar41 ^ uVar62) + plVar49[4] +
                 (uVar59 >> 0xe | uVar59 << 0x32);
        uVar44 = uVar44 + lVar57;
        uVar43 = (uVar45 ^ (uVar45 ^ uVar39) & (uVar60 ^ uVar45)) + lVar57 +
                 (uVar58 >> 0x1c | uVar58 << 0x24);
        uVar59 = ((ulonglong)local_e0._0_8_ >> 7 | local_e0._0_8_ << 0x39) ^ local_e0._0_8_;
        uVar61 = ((ulonglong)local_100._8_8_ >> 0x2a | local_100._8_8_ * 0x400000) ^ local_100._8_8_
        ;
        local_f0._8_8_ =
             ((ulonglong)local_e0._0_8_ >> 7 ^
             (uVar59 >> 1 | (ulonglong)((uVar59 & 1) != 0) << 0x3f)) + local_a0 + local_f0._8_8_ +
             ((uVar61 >> 0x13 | uVar61 << 0x2d) ^ (ulonglong)local_100._8_8_ >> 6);
        uVar61 = (uVar44 >> 0x17 | uVar44 << 0x29) ^ uVar44;
        uVar59 = (uVar43 >> 5 | uVar43 << 0x3b) ^ uVar43;
        uVar61 = (uVar61 >> 4 | uVar61 << 0x3c) ^ uVar44;
        uVar59 = (uVar59 >> 6 | uVar59 << 0x3a) ^ uVar43;
        lVar57 = local_f0._8_8_ + uVar62 + ((uVar41 ^ uVar42) & uVar44 ^ uVar42) + plVar49[5] +
                 (uVar61 >> 0xe | uVar61 << 0x32);
        uVar39 = uVar39 + lVar57;
        uVar63 = (uVar60 ^ (uVar60 ^ uVar45) & (uVar43 ^ uVar60)) + lVar57 +
                 (uVar59 >> 0x1c | uVar59 << 0x24);
        uVar62 = ((ulonglong)local_e0._8_8_ >> 7 | local_e0._8_8_ << 0x39) ^ local_e0._8_8_;
        uVar61 = ((ulonglong)local_f0._0_8_ >> 0x2a | local_f0._0_8_ * 0x400000) ^ local_f0._0_8_;
        local_e0._0_8_ =
             ((ulonglong)local_e0._8_8_ >> 7 ^
             (uVar62 >> 1 | (ulonglong)((uVar62 & 1) != 0) << 0x3f)) + local_98 + local_e0._0_8_ +
             ((uVar61 >> 0x13 | uVar61 << 0x2d) ^ (ulonglong)local_f0._0_8_ >> 6);
        uVar62 = (uVar39 >> 0x17 | uVar39 << 0x29) ^ uVar39;
        uVar61 = (uVar63 >> 5 | uVar63 << 0x3b) ^ uVar63;
        uVar62 = (uVar62 >> 4 | uVar62 << 0x3c) ^ uVar39;
        uVar61 = (uVar61 >> 6 | uVar61 << 0x3a) ^ uVar63;
        lVar57 = local_e0._0_8_ + uVar42 + ((uVar44 ^ uVar41) & uVar39 ^ uVar41) + plVar49[8] +
                 (uVar62 >> 0xe | uVar62 << 0x32);
        uVar45 = uVar45 + lVar57;
        uVar42 = (uVar43 ^ (uVar43 ^ uVar60) & (uVar63 ^ uVar43)) + lVar57 +
                 (uVar61 >> 0x1c | uVar61 << 0x24);
        uVar61 = ((ulonglong)local_d0._0_8_ >> 7 | local_d0._0_8_ << 0x39) ^ local_d0._0_8_;
        uVar62 = ((ulonglong)local_f0._8_8_ >> 0x2a | local_f0._8_8_ * 0x400000) ^ local_f0._8_8_;
        local_e0._8_8_ =
             ((ulonglong)local_d0._0_8_ >> 7 ^
             (uVar61 >> 1 | (ulonglong)((uVar61 & 1) != 0) << 0x3f)) + local_90 + local_e0._8_8_ +
             ((uVar62 >> 0x13 | uVar62 << 0x2d) ^ (ulonglong)local_f0._8_8_ >> 6);
        uVar62 = (uVar45 >> 0x17 | uVar45 << 0x29) ^ uVar45;
        uVar61 = (uVar42 >> 5 | uVar42 << 0x3b) ^ uVar42;
        uVar62 = (uVar62 >> 4 | uVar62 << 0x3c) ^ uVar45;
        uVar61 = (uVar61 >> 6 | uVar61 << 0x3a) ^ uVar42;
        lVar57 = local_e0._8_8_ + uVar41 + ((uVar39 ^ uVar44) & uVar45 ^ uVar44) + plVar49[9] +
                 (uVar62 >> 0xe | uVar62 << 0x32);
        uVar60 = uVar60 + lVar57;
        uVar41 = (uVar63 ^ (uVar63 ^ uVar43) & (uVar42 ^ uVar63)) + lVar57 +
                 (uVar61 >> 0x1c | uVar61 << 0x24);
        uVar62 = ((ulonglong)local_d0._8_8_ >> 7 | local_d0._8_8_ << 0x39) ^ local_d0._8_8_;
        uVar61 = ((ulonglong)local_e0._0_8_ >> 0x2a | local_e0._0_8_ * 0x400000) ^ local_e0._0_8_;
        local_d0._0_8_ =
             ((ulonglong)local_d0._8_8_ >> 7 ^
             (uVar62 >> 1 | (ulonglong)((uVar62 & 1) != 0) << 0x3f)) + local_88 + local_d0._0_8_ +
             ((uVar61 >> 0x13 | uVar61 << 0x2d) ^ (ulonglong)local_e0._0_8_ >> 6);
        uVar62 = (uVar60 >> 0x17 | uVar60 << 0x29) ^ uVar60;
        uVar61 = (uVar41 >> 5 | uVar41 << 0x3b) ^ uVar41;
        uVar62 = (uVar62 >> 4 | uVar62 << 0x3c) ^ uVar60;
        uVar61 = (uVar61 >> 6 | uVar61 << 0x3a) ^ uVar41;
        lVar57 = local_d0._0_8_ + uVar44 + ((uVar45 ^ uVar39) & uVar60 ^ uVar39) + plVar49[0xc] +
                 (uVar62 >> 0xe | uVar62 << 0x32);
        uVar43 = uVar43 + lVar57;
        uVar44 = (uVar42 ^ (uVar42 ^ uVar63) & (uVar41 ^ uVar42)) + lVar57 +
                 (uVar61 >> 0x1c | uVar61 << 0x24);
        uVar61 = (local_c0 >> 7 | local_c0 << 0x39) ^ local_c0;
        uVar62 = ((ulonglong)local_e0._8_8_ >> 0x2a | local_e0._8_8_ * 0x400000) ^ local_e0._8_8_;
        local_d0._8_8_ =
             (local_c0 >> 7 ^ (uVar61 >> 1 | (ulonglong)((uVar61 & 1) != 0) << 0x3f)) +
             local_100._0_8_ + local_d0._8_8_ +
             ((uVar62 >> 0x13 | uVar62 << 0x2d) ^ (ulonglong)local_e0._8_8_ >> 6);
        uVar62 = (uVar43 >> 0x17 | uVar43 << 0x29) ^ uVar43;
        uVar61 = (uVar44 >> 5 | uVar44 << 0x3b) ^ uVar44;
        uVar62 = (uVar62 >> 4 | uVar62 << 0x3c) ^ uVar43;
        uVar61 = (uVar61 >> 6 | uVar61 << 0x3a) ^ uVar44;
        lVar57 = local_d0._8_8_ + uVar39 + ((uVar60 ^ uVar45) & uVar43 ^ uVar45) + plVar49[0xd] +
                 (uVar62 >> 0xe | uVar62 << 0x32);
        uVar63 = uVar63 + lVar57;
        uVar58 = (uVar41 ^ (uVar41 ^ uVar42) & (uVar44 ^ uVar41)) + lVar57 +
                 (uVar61 >> 0x1c | uVar61 << 0x24);
        uVar39 = (local_b8 >> 7 | local_b8 << 0x39) ^ local_b8;
        uVar62 = ((ulonglong)local_d0._0_8_ >> 0x2a | local_d0._0_8_ * 0x400000) ^ local_d0._0_8_;
        local_c0 = (local_b8 >> 7 ^ (uVar39 >> 1 | (ulonglong)((uVar39 & 1) != 0) << 0x3f)) +
                   local_100._8_8_ + local_c0 +
                   ((uVar62 >> 0x13 | uVar62 << 0x2d) ^ (ulonglong)local_d0._0_8_ >> 6);
        uVar39 = (uVar63 >> 0x17 | uVar63 << 0x29) ^ uVar63;
        uVar62 = (uVar58 >> 5 | uVar58 << 0x3b) ^ uVar58;
        uVar39 = (uVar39 >> 4 | uVar39 << 0x3c) ^ uVar63;
        uVar62 = (uVar62 >> 6 | uVar62 << 0x3a) ^ uVar58;
        lVar57 = local_c0 + uVar45 + ((uVar43 ^ uVar60) & uVar63 ^ uVar60) + plVar49[0x10] +
                 (uVar39 >> 0xe | uVar39 << 0x32);
        uVar42 = uVar42 + lVar57;
        uVar59 = (uVar44 ^ (uVar44 ^ uVar41) & (uVar58 ^ uVar44)) + lVar57 +
                 (uVar62 >> 0x1c | uVar62 << 0x24);
        uVar62 = (local_b0 >> 7 | local_b0 << 0x39) ^ local_b0;
        uVar39 = ((ulonglong)local_d0._8_8_ >> 0x2a | local_d0._8_8_ * 0x400000) ^ local_d0._8_8_;
        local_b8 = (local_b0 >> 7 ^ (uVar62 >> 1 | (ulonglong)((uVar62 & 1) != 0) << 0x3f)) +
                   local_f0._0_8_ + local_b8 +
                   ((uVar39 >> 0x13 | uVar39 << 0x2d) ^ (ulonglong)local_d0._8_8_ >> 6);
        uVar39 = (uVar42 >> 0x17 | uVar42 << 0x29) ^ uVar42;
        uVar62 = (uVar59 >> 5 | uVar59 << 0x3b) ^ uVar59;
        uVar39 = (uVar39 >> 4 | uVar39 << 0x3c) ^ uVar42;
        uVar62 = (uVar62 >> 6 | uVar62 << 0x3a) ^ uVar59;
        lVar57 = local_b8 + uVar60 + ((uVar63 ^ uVar43) & uVar42 ^ uVar43) + plVar49[0x11] +
                 (uVar39 >> 0xe | uVar39 << 0x32);
        uVar41 = uVar41 + lVar57;
        uVar60 = (uVar58 ^ (uVar58 ^ uVar44) & (uVar59 ^ uVar58)) + lVar57 +
                 (uVar62 >> 0x1c | uVar62 << 0x24);
        uVar39 = (uVar54 >> 7 | uVar54 << 0x39) ^ uVar54;
        uVar62 = (local_c0 >> 0x2a | local_c0 * 0x400000) ^ local_c0;
        local_b0 = (uVar54 >> 7 ^ (uVar39 >> 1 | (ulonglong)((uVar39 & 1) != 0) << 0x3f)) +
                   local_f0._8_8_ + local_b0 + ((uVar62 >> 0x13 | uVar62 << 0x2d) ^ local_c0 >> 6);
        uVar39 = (uVar41 >> 0x17 | uVar41 << 0x29) ^ uVar41;
        uVar62 = (uVar60 >> 5 | uVar60 << 0x3b) ^ uVar60;
        uVar39 = (uVar39 >> 4 | uVar39 << 0x3c) ^ uVar41;
        uVar62 = (uVar62 >> 6 | uVar62 << 0x3a) ^ uVar60;
        lVar57 = local_b0 + uVar43 + ((uVar42 ^ uVar63) & uVar41 ^ uVar63) + plVar49[0x14] +
                 (uVar39 >> 0xe | uVar39 << 0x32);
        uVar44 = uVar44 + lVar57;
        uVar61 = (uVar59 ^ (uVar59 ^ uVar58) & (uVar60 ^ uVar59)) + lVar57 +
                 (uVar62 >> 0x1c | uVar62 << 0x24);
        uVar62 = (local_a0 >> 7 | local_a0 << 0x39) ^ local_a0;
        uVar39 = (local_b8 >> 0x2a | local_b8 * 0x400000) ^ local_b8;
        uVar54 = (local_a0 >> 7 ^ (uVar62 >> 1 | (ulonglong)((uVar62 & 1) != 0) << 0x3f)) +
                 local_e0._0_8_ + uVar54 + ((uVar39 >> 0x13 | uVar39 << 0x2d) ^ local_b8 >> 6);
        uVar39 = (uVar44 >> 0x17 | uVar44 << 0x29) ^ uVar44;
        uVar62 = (uVar61 >> 5 | uVar61 << 0x3b) ^ uVar61;
        uVar39 = (uVar39 >> 4 | uVar39 << 0x3c) ^ uVar44;
        uVar62 = (uVar62 >> 6 | uVar62 << 0x3a) ^ uVar61;
        lVar57 = uVar54 + uVar63 + ((uVar41 ^ uVar42) & uVar44 ^ uVar42) + plVar49[0x15] +
                 (uVar39 >> 0xe | uVar39 << 0x32);
        uVar58 = uVar58 + lVar57;
        uVar62 = (uVar60 ^ (uVar60 ^ uVar59) & (uVar61 ^ uVar60)) + lVar57 +
                 (uVar62 >> 0x1c | uVar62 << 0x24);
        uVar39 = (local_98 >> 7 | local_98 << 0x39) ^ local_98;
        uVar63 = (local_b0 >> 0x2a | local_b0 * 0x400000) ^ local_b0;
        local_a0 = (local_98 >> 7 ^ (uVar39 >> 1 | (ulonglong)((uVar39 & 1) != 0) << 0x3f)) +
                   local_e0._8_8_ + local_a0 + ((uVar63 >> 0x13 | uVar63 << 0x2d) ^ local_b0 >> 6);
        uVar39 = (uVar58 >> 0x17 | uVar58 << 0x29) ^ uVar58;
        uVar63 = (uVar62 >> 5 | uVar62 << 0x3b) ^ uVar62;
        uVar39 = (uVar39 >> 4 | uVar39 << 0x3c) ^ uVar58;
        uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar62;
        lVar57 = local_a0 + uVar42 + ((uVar44 ^ uVar41) & uVar58 ^ uVar41) + plVar49[0x18] +
                 (uVar39 >> 0xe | uVar39 << 0x32);
        uVar59 = uVar59 + lVar57;
        uVar42 = (uVar61 ^ (uVar61 ^ uVar60) & (uVar62 ^ uVar61)) + lVar57 +
                 (uVar63 >> 0x1c | uVar63 << 0x24);
        uVar63 = (local_90 >> 7 | local_90 << 0x39) ^ local_90;
        uVar39 = (uVar54 >> 0x2a | uVar54 * 0x400000) ^ uVar54;
        local_98 = (local_90 >> 7 ^ (uVar63 >> 1 | (ulonglong)((uVar63 & 1) != 0) << 0x3f)) +
                   local_d0._0_8_ + local_98 + ((uVar39 >> 0x13 | uVar39 << 0x2d) ^ uVar54 >> 6);
        uVar39 = (uVar59 >> 0x17 | uVar59 << 0x29) ^ uVar59;
        uVar63 = (uVar42 >> 5 | uVar42 << 0x3b) ^ uVar42;
        uVar39 = (uVar39 >> 4 | uVar39 << 0x3c) ^ uVar59;
        uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar42;
        lVar57 = local_98 + uVar41 + ((uVar58 ^ uVar44) & uVar59 ^ uVar44) + plVar49[0x19] +
                 (uVar39 >> 0xe | uVar39 << 0x32);
        uVar60 = uVar60 + lVar57;
        uVar41 = (uVar62 ^ (uVar62 ^ uVar61) & (uVar42 ^ uVar62)) + lVar57 +
                 (uVar63 >> 0x1c | uVar63 << 0x24);
        uVar39 = (local_88 >> 7 | local_88 << 0x39) ^ local_88;
        uVar63 = (local_a0 >> 0x2a | local_a0 * 0x400000) ^ local_a0;
        local_90 = (local_88 >> 7 ^ (uVar39 >> 1 | (ulonglong)((uVar39 & 1) != 0) << 0x3f)) +
                   local_d0._8_8_ + local_90 + ((uVar63 >> 0x13 | uVar63 << 0x2d) ^ local_a0 >> 6);
        uVar39 = (uVar60 >> 0x17 | uVar60 << 0x29) ^ uVar60;
        uVar63 = (uVar41 >> 5 | uVar41 << 0x3b) ^ uVar41;
        uVar39 = (uVar39 >> 4 | uVar39 << 0x3c) ^ uVar60;
        uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar41;
        lVar57 = local_90 + uVar44 + ((uVar59 ^ uVar58) & uVar60 ^ uVar58) + plVar49[0x1c] +
                 (uVar39 >> 0xe | uVar39 << 0x32);
        uVar61 = uVar61 + lVar57;
        uVar44 = (uVar42 ^ (uVar42 ^ uVar62) & (uVar41 ^ uVar42)) + lVar57 +
                 (uVar63 >> 0x1c | uVar63 << 0x24);
        uVar63 = ((ulonglong)local_100._0_8_ >> 7 | local_100._0_8_ << 0x39) ^ local_100._0_8_;
        uVar39 = (local_98 >> 0x2a | local_98 * 0x400000) ^ local_98;
        local_88 = ((ulonglong)local_100._0_8_ >> 7 ^
                   (uVar63 >> 1 | (ulonglong)((uVar63 & 1) != 0) << 0x3f)) + local_c0 + local_88 +
                   ((uVar39 >> 0x13 | uVar39 << 0x2d) ^ local_98 >> 6);
        uVar39 = (uVar61 >> 0x17 | uVar61 << 0x29) ^ uVar61;
        uVar63 = (uVar44 >> 5 | uVar44 << 0x3b) ^ uVar44;
        uVar43 = (uVar39 >> 4 | uVar39 << 0x3c) ^ uVar61;
        uVar39 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar44;
        uVar63 = uVar44 ^ uVar41;
        uVar39 = uVar39 >> 0x1c | uVar39 << 0x24;
        lVar57 = local_88 + uVar58 + ((uVar60 ^ uVar59) & uVar61 ^ uVar59) + plVar49[0x1d] +
                 (uVar43 >> 0xe | uVar43 << 0x32);
        uVar62 = uVar62 + lVar57;
        lVar57 = (uVar41 ^ (uVar41 ^ uVar42) & uVar63) + lVar57;
        pcVar1 = (char *)((longlong)plVar49 + 0x107);
        plVar49 = plVar49 + 0x20;
      } while (*pcVar1 != '\0');
      param_2 = param_2 + 8;
      uVar39 = lVar57 + uVar39 + *param_1;
      uVar44 = uVar44 + param_1[1];
      uVar41 = uVar41 + param_1[2];
      uVar42 = uVar42 + param_1[3];
      uVar62 = uVar62 + param_1[4];
      uVar61 = uVar61 + param_1[5];
      uVar60 = uVar60 + param_1[6];
      uVar59 = uVar59 + param_1[7];
      *param_1 = uVar39;
      param_1[1] = uVar44;
      param_1[2] = uVar41;
      param_1[3] = uVar42;
      param_1[4] = uVar62;
      param_1[5] = uVar61;
      param_1[6] = uVar60;
      param_1[7] = uVar59;
    } while (param_2 < pauVar52);
    return;
  }
  pauVar52 = param_2 + param_3 * 8;
  uVar39 = *param_1;
  uVar44 = param_1[1];
  uVar41 = param_1[2];
  uVar42 = param_1[3];
  uVar62 = param_1[4];
  uVar61 = param_1[5];
  uVar60 = param_1[6];
  uVar59 = param_1[7];
  do {
    auVar4 = vpshufb_avx(*param_2,_DAT_140e26d00);
    auVar5 = vpshufb_avx(param_2[1],_DAT_140e26d00);
    auVar6 = vpshufb_avx(param_2[2],_DAT_140e26d00);
    auVar7 = vpshufb_avx(param_2[3],_DAT_140e26d00);
    auVar8 = vpshufb_avx(param_2[4],_DAT_140e26d00);
    auVar9 = vpshufb_avx(param_2[5],_DAT_140e26d00);
    auVar75._8_8_ = DAT_140e26808;
    auVar75._0_8_ = K512;
    auStack_140 = vpaddq_avx(auVar4,auVar75);
    auVar10 = vpshufb_avx(param_2[6],_DAT_140e26d00);
    auVar78._8_8_ = DAT_140e26828;
    auVar78._0_8_ = DAT_140e26820;
    auStack_130 = vpaddq_avx(auVar5,auVar78);
    auVar11 = vpshufb_avx(param_2[7],_DAT_140e26d00);
    auVar79._8_8_ = DAT_140e26848;
    auVar79._0_8_ = DAT_140e26840;
    auStack_120 = vpaddq_avx(auVar6,auVar79);
    auVar33._8_8_ = DAT_140e26868;
    auVar33._0_8_ = DAT_140e26860;
    auStack_110 = vpaddq_avx(auVar7,auVar33);
    auVar34._8_8_ = DAT_140e26888;
    auVar34._0_8_ = DAT_140e26880;
    local_100 = vpaddq_avx(auVar8,auVar34);
    auVar35._8_8_ = DAT_140e268a8;
    auVar35._0_8_ = DAT_140e268a0;
    local_f0 = vpaddq_avx(auVar9,auVar35);
    auVar36._8_8_ = DAT_140e268c8;
    auVar36._0_8_ = DAT_140e268c0;
    local_e0 = vpaddq_avx(auVar10,auVar36);
    auVar37._8_8_ = DAT_140e268e8;
    auVar37._0_8_ = DAT_140e268e0;
    local_d0 = vpaddq_avx(auVar11,auVar37);
    uVar58 = uVar44 ^ uVar41;
    pauVar47 = (undefined1 (*) [16])&DAT_140e26880;
    do {
      auVar69 = vpalignr_avx(auVar5,auVar4,8);
      auVar70 = vpalignr_avx(auVar9,auVar8,8);
      auVar73 = vpsrlq_avx(auVar69,1);
      uVar63 = (uVar62 >> 0x17 | uVar62 << 0x29) ^ uVar62;
      auVar4 = vpaddq_avx(auVar4,auVar70);
      uVar43 = (uVar39 >> 5 | uVar39 << 0x3b) ^ uVar39;
      auVar78 = vpsrlq_avx(auVar69,7);
      uVar63 = (uVar63 >> 4 | uVar63 << 0x3c) ^ uVar62;
      auVar69 = vpsllq_avx(auVar69,0x38);
      auVar74 = vpsrlq_avx(auVar73,7);
      auVar70 = vpsllq_avx(auVar69,7);
      uVar43 = (uVar43 >> 6 | uVar43 << 0x3a) ^ uVar39;
      lVar57 = uVar59 + auStack_140._0_8_ + ((uVar61 ^ uVar60) & uVar62 ^ uVar60) +
               (uVar63 >> 0xe | uVar63 << 0x32);
      auVar79 = vpsrlq_avx(auVar11,6);
      uVar42 = uVar42 + lVar57;
      uVar59 = (uVar43 >> 0x1c | uVar43 << 0x24) + lVar57 + (uVar58 & (uVar39 ^ uVar44) ^ uVar44);
      auVar75 = vpsllq_avx(auVar11,3);
      auVar4 = vpaddq_avx(auVar4,auVar78 ^ auVar73 ^ auVar69 ^ auVar74 ^ auVar70);
      auVar69 = vpsrlq_avx(auVar11,0x13);
      uVar58 = (uVar42 >> 0x17 | uVar42 << 0x29) ^ uVar42;
      uVar63 = (uVar59 >> 5 | uVar59 << 0x3b) ^ uVar59;
      auVar73 = vpsllq_avx(auVar75,0x2a);
      uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar42;
      auVar70 = vpsrlq_avx(auVar69,0x2a);
      auVar4 = vpaddq_avx(auVar4,auVar79 ^ auVar75 ^ auVar69 ^ auVar73 ^ auVar70);
      uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar59;
      lVar57 = uVar60 + auStack_140._8_8_ + ((uVar62 ^ uVar61) & uVar42 ^ uVar61) +
               (uVar58 >> 0xe | uVar58 << 0x32);
      auStack_140 = vpaddq_avx(auVar4,pauVar47[8]);
      uVar41 = uVar41 + lVar57;
      uVar60 = (uVar63 >> 0x1c | uVar63 << 0x24) +
               lVar57 + ((uVar39 ^ uVar44) & (uVar59 ^ uVar39) ^ uVar39);
      auVar69 = vpalignr_avx(auVar6,auVar5,8);
      auVar70 = vpalignr_avx(auVar10,auVar9,8);
      auVar73 = vpsrlq_avx(auVar69,1);
      uVar58 = (uVar41 >> 0x17 | uVar41 << 0x29) ^ uVar41;
      auVar5 = vpaddq_avx(auVar5,auVar70);
      uVar63 = (uVar60 >> 5 | uVar60 << 0x3b) ^ uVar60;
      auVar78 = vpsrlq_avx(auVar69,7);
      uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar41;
      auVar69 = vpsllq_avx(auVar69,0x38);
      auVar74 = vpsrlq_avx(auVar73,7);
      auVar70 = vpsllq_avx(auVar69,7);
      uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar60;
      lVar57 = uVar61 + auStack_130._0_8_ + ((uVar42 ^ uVar62) & uVar41 ^ uVar62) +
               (uVar58 >> 0xe | uVar58 << 0x32);
      auVar79 = vpsrlq_avx(auVar4,6);
      uVar44 = uVar44 + lVar57;
      uVar61 = (uVar63 >> 0x1c | uVar63 << 0x24) +
               lVar57 + ((uVar59 ^ uVar39) & (uVar60 ^ uVar59) ^ uVar59);
      auVar75 = vpsllq_avx(auVar4,3);
      auVar5 = vpaddq_avx(auVar5,auVar78 ^ auVar73 ^ auVar69 ^ auVar74 ^ auVar70);
      auVar69 = vpsrlq_avx(auVar4,0x13);
      uVar58 = (uVar44 >> 0x17 | uVar44 << 0x29) ^ uVar44;
      uVar63 = (uVar61 >> 5 | uVar61 << 0x3b) ^ uVar61;
      auVar73 = vpsllq_avx(auVar75,0x2a);
      uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar44;
      auVar70 = vpsrlq_avx(auVar69,0x2a);
      auVar5 = vpaddq_avx(auVar5,auVar79 ^ auVar75 ^ auVar69 ^ auVar73 ^ auVar70);
      uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar61;
      lVar57 = uVar62 + auStack_130._8_8_ + ((uVar41 ^ uVar42) & uVar44 ^ uVar42) +
               (uVar58 >> 0xe | uVar58 << 0x32);
      auStack_130 = vpaddq_avx(auVar5,pauVar47[10]);
      uVar39 = uVar39 + lVar57;
      uVar62 = (uVar63 >> 0x1c | uVar63 << 0x24) +
               lVar57 + ((uVar60 ^ uVar59) & (uVar61 ^ uVar60) ^ uVar60);
      auVar69 = vpalignr_avx(auVar7,auVar6,8);
      auVar70 = vpalignr_avx(auVar11,auVar10,8);
      auVar73 = vpsrlq_avx(auVar69,1);
      uVar58 = (uVar39 >> 0x17 | uVar39 << 0x29) ^ uVar39;
      auVar6 = vpaddq_avx(auVar6,auVar70);
      uVar63 = (uVar62 >> 5 | uVar62 << 0x3b) ^ uVar62;
      auVar78 = vpsrlq_avx(auVar69,7);
      uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar39;
      auVar69 = vpsllq_avx(auVar69,0x38);
      auVar74 = vpsrlq_avx(auVar73,7);
      auVar70 = vpsllq_avx(auVar69,7);
      uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar62;
      lVar57 = uVar42 + auStack_120._0_8_ + ((uVar44 ^ uVar41) & uVar39 ^ uVar41) +
               (uVar58 >> 0xe | uVar58 << 0x32);
      auVar79 = vpsrlq_avx(auVar5,6);
      uVar59 = uVar59 + lVar57;
      uVar42 = (uVar63 >> 0x1c | uVar63 << 0x24) +
               lVar57 + ((uVar61 ^ uVar60) & (uVar62 ^ uVar61) ^ uVar61);
      auVar75 = vpsllq_avx(auVar5,3);
      auVar6 = vpaddq_avx(auVar6,auVar78 ^ auVar73 ^ auVar69 ^ auVar74 ^ auVar70);
      auVar69 = vpsrlq_avx(auVar5,0x13);
      uVar58 = (uVar59 >> 0x17 | uVar59 << 0x29) ^ uVar59;
      uVar63 = (uVar42 >> 5 | uVar42 << 0x3b) ^ uVar42;
      auVar73 = vpsllq_avx(auVar75,0x2a);
      uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar59;
      auVar70 = vpsrlq_avx(auVar69,0x2a);
      auVar6 = vpaddq_avx(auVar6,auVar79 ^ auVar75 ^ auVar69 ^ auVar73 ^ auVar70);
      uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar42;
      lVar57 = uVar41 + auStack_120._8_8_ + ((uVar39 ^ uVar44) & uVar59 ^ uVar44) +
               (uVar58 >> 0xe | uVar58 << 0x32);
      auStack_120 = vpaddq_avx(auVar6,pauVar47[0xc]);
      uVar60 = uVar60 + lVar57;
      uVar41 = (uVar63 >> 0x1c | uVar63 << 0x24) +
               lVar57 + ((uVar62 ^ uVar61) & (uVar42 ^ uVar62) ^ uVar62);
      auVar69 = vpalignr_avx(auVar8,auVar7,8);
      auVar70 = vpalignr_avx(auVar4,auVar11,8);
      auVar73 = vpsrlq_avx(auVar69,1);
      uVar58 = (uVar60 >> 0x17 | uVar60 << 0x29) ^ uVar60;
      auVar7 = vpaddq_avx(auVar7,auVar70);
      uVar63 = (uVar41 >> 5 | uVar41 << 0x3b) ^ uVar41;
      auVar78 = vpsrlq_avx(auVar69,7);
      uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar60;
      auVar69 = vpsllq_avx(auVar69,0x38);
      auVar74 = vpsrlq_avx(auVar73,7);
      auVar70 = vpsllq_avx(auVar69,7);
      uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar41;
      lVar57 = uVar44 + auStack_110._0_8_ + ((uVar59 ^ uVar39) & uVar60 ^ uVar39) +
               (uVar58 >> 0xe | uVar58 << 0x32);
      auVar79 = vpsrlq_avx(auVar6,6);
      uVar61 = uVar61 + lVar57;
      uVar44 = (uVar63 >> 0x1c | uVar63 << 0x24) +
               lVar57 + ((uVar42 ^ uVar62) & (uVar41 ^ uVar42) ^ uVar42);
      auVar75 = vpsllq_avx(auVar6,3);
      auVar7 = vpaddq_avx(auVar7,auVar78 ^ auVar73 ^ auVar69 ^ auVar74 ^ auVar70);
      auVar69 = vpsrlq_avx(auVar6,0x13);
      uVar58 = (uVar61 >> 0x17 | uVar61 << 0x29) ^ uVar61;
      uVar63 = (uVar44 >> 5 | uVar44 << 0x3b) ^ uVar44;
      auVar73 = vpsllq_avx(auVar75,0x2a);
      uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar61;
      auVar70 = vpsrlq_avx(auVar69,0x2a);
      auVar7 = vpaddq_avx(auVar7,auVar79 ^ auVar75 ^ auVar69 ^ auVar73 ^ auVar70);
      uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar44;
      lVar57 = uVar39 + auStack_110._8_8_ + ((uVar60 ^ uVar59) & uVar61 ^ uVar59) +
               (uVar58 >> 0xe | uVar58 << 0x32);
      auStack_110 = vpaddq_avx(auVar7,pauVar47[0xe]);
      uVar62 = uVar62 + lVar57;
      uVar39 = (uVar63 >> 0x1c | uVar63 << 0x24) +
               lVar57 + ((uVar41 ^ uVar42) & (uVar44 ^ uVar41) ^ uVar41);
      auVar69 = vpalignr_avx(auVar9,auVar8,8);
      auVar70 = vpalignr_avx(auVar5,auVar4,8);
      auVar73 = vpsrlq_avx(auVar69,1);
      uVar58 = (uVar62 >> 0x17 | uVar62 << 0x29) ^ uVar62;
      auVar8 = vpaddq_avx(auVar8,auVar70);
      uVar63 = (uVar39 >> 5 | uVar39 << 0x3b) ^ uVar39;
      auVar78 = vpsrlq_avx(auVar69,7);
      uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar62;
      auVar69 = vpsllq_avx(auVar69,0x38);
      auVar74 = vpsrlq_avx(auVar73,7);
      auVar70 = vpsllq_avx(auVar69,7);
      uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar39;
      lVar57 = uVar59 + local_100._0_8_ + ((uVar61 ^ uVar60) & uVar62 ^ uVar60) +
               (uVar58 >> 0xe | uVar58 << 0x32);
      auVar79 = vpsrlq_avx(auVar7,6);
      uVar42 = uVar42 + lVar57;
      uVar59 = (uVar63 >> 0x1c | uVar63 << 0x24) +
               lVar57 + ((uVar44 ^ uVar41) & (uVar39 ^ uVar44) ^ uVar44);
      auVar75 = vpsllq_avx(auVar7,3);
      auVar8 = vpaddq_avx(auVar8,auVar78 ^ auVar73 ^ auVar69 ^ auVar74 ^ auVar70);
      auVar69 = vpsrlq_avx(auVar7,0x13);
      uVar58 = (uVar42 >> 0x17 | uVar42 << 0x29) ^ uVar42;
      uVar63 = (uVar59 >> 5 | uVar59 << 0x3b) ^ uVar59;
      auVar73 = vpsllq_avx(auVar75,0x2a);
      uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar42;
      auVar70 = vpsrlq_avx(auVar69,0x2a);
      auVar8 = vpaddq_avx(auVar8,auVar79 ^ auVar75 ^ auVar69 ^ auVar73 ^ auVar70);
      uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar59;
      lVar57 = uVar60 + local_100._8_8_ + ((uVar62 ^ uVar61) & uVar42 ^ uVar61) +
               (uVar58 >> 0xe | uVar58 << 0x32);
      local_100 = vpaddq_avx(auVar8,pauVar47[0x10]);
      uVar41 = uVar41 + lVar57;
      uVar60 = (uVar63 >> 0x1c | uVar63 << 0x24) +
               lVar57 + ((uVar39 ^ uVar44) & (uVar59 ^ uVar39) ^ uVar39);
      auVar69 = vpalignr_avx(auVar10,auVar9,8);
      auVar70 = vpalignr_avx(auVar6,auVar5,8);
      auVar73 = vpsrlq_avx(auVar69,1);
      uVar58 = (uVar41 >> 0x17 | uVar41 << 0x29) ^ uVar41;
      auVar9 = vpaddq_avx(auVar9,auVar70);
      uVar63 = (uVar60 >> 5 | uVar60 << 0x3b) ^ uVar60;
      auVar78 = vpsrlq_avx(auVar69,7);
      uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar41;
      auVar69 = vpsllq_avx(auVar69,0x38);
      auVar74 = vpsrlq_avx(auVar73,7);
      auVar70 = vpsllq_avx(auVar69,7);
      uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar60;
      lVar57 = uVar61 + local_f0._0_8_ + ((uVar42 ^ uVar62) & uVar41 ^ uVar62) +
               (uVar58 >> 0xe | uVar58 << 0x32);
      auVar79 = vpsrlq_avx(auVar8,6);
      uVar44 = uVar44 + lVar57;
      uVar61 = (uVar63 >> 0x1c | uVar63 << 0x24) +
               lVar57 + ((uVar59 ^ uVar39) & (uVar60 ^ uVar59) ^ uVar59);
      auVar75 = vpsllq_avx(auVar8,3);
      auVar9 = vpaddq_avx(auVar9,auVar78 ^ auVar73 ^ auVar69 ^ auVar74 ^ auVar70);
      auVar69 = vpsrlq_avx(auVar8,0x13);
      uVar58 = (uVar44 >> 0x17 | uVar44 << 0x29) ^ uVar44;
      uVar63 = (uVar61 >> 5 | uVar61 << 0x3b) ^ uVar61;
      auVar73 = vpsllq_avx(auVar75,0x2a);
      uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar44;
      auVar70 = vpsrlq_avx(auVar69,0x2a);
      auVar9 = vpaddq_avx(auVar9,auVar79 ^ auVar75 ^ auVar69 ^ auVar73 ^ auVar70);
      uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar61;
      lVar57 = uVar62 + local_f0._8_8_ + ((uVar41 ^ uVar42) & uVar44 ^ uVar42) +
               (uVar58 >> 0xe | uVar58 << 0x32);
      local_f0 = vpaddq_avx(auVar9,pauVar47[0x12]);
      uVar39 = uVar39 + lVar57;
      uVar62 = (uVar63 >> 0x1c | uVar63 << 0x24) +
               lVar57 + ((uVar60 ^ uVar59) & (uVar61 ^ uVar60) ^ uVar60);
      auVar69 = vpalignr_avx(auVar11,auVar10,8);
      auVar70 = vpalignr_avx(auVar7,auVar6,8);
      auVar73 = vpsrlq_avx(auVar69,1);
      uVar58 = (uVar39 >> 0x17 | uVar39 << 0x29) ^ uVar39;
      auVar10 = vpaddq_avx(auVar10,auVar70);
      uVar63 = (uVar62 >> 5 | uVar62 << 0x3b) ^ uVar62;
      auVar78 = vpsrlq_avx(auVar69,7);
      uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar39;
      auVar69 = vpsllq_avx(auVar69,0x38);
      auVar74 = vpsrlq_avx(auVar73,7);
      auVar70 = vpsllq_avx(auVar69,7);
      uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar62;
      lVar57 = uVar42 + local_e0._0_8_ + ((uVar44 ^ uVar41) & uVar39 ^ uVar41) +
               (uVar58 >> 0xe | uVar58 << 0x32);
      auVar79 = vpsrlq_avx(auVar9,6);
      uVar59 = uVar59 + lVar57;
      uVar42 = (uVar63 >> 0x1c | uVar63 << 0x24) +
               lVar57 + ((uVar61 ^ uVar60) & (uVar62 ^ uVar61) ^ uVar61);
      auVar75 = vpsllq_avx(auVar9,3);
      auVar10 = vpaddq_avx(auVar10,auVar78 ^ auVar73 ^ auVar69 ^ auVar74 ^ auVar70);
      auVar69 = vpsrlq_avx(auVar9,0x13);
      uVar58 = (uVar59 >> 0x17 | uVar59 << 0x29) ^ uVar59;
      uVar63 = (uVar42 >> 5 | uVar42 << 0x3b) ^ uVar42;
      auVar73 = vpsllq_avx(auVar75,0x2a);
      uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar59;
      auVar70 = vpsrlq_avx(auVar69,0x2a);
      auVar10 = vpaddq_avx(auVar10,auVar79 ^ auVar75 ^ auVar69 ^ auVar73 ^ auVar70);
      uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar42;
      lVar57 = uVar41 + local_e0._8_8_ + ((uVar39 ^ uVar44) & uVar59 ^ uVar44) +
               (uVar58 >> 0xe | uVar58 << 0x32);
      local_e0 = vpaddq_avx(auVar10,pauVar47[0x14]);
      uVar60 = uVar60 + lVar57;
      uVar41 = (uVar63 >> 0x1c | uVar63 << 0x24) +
               lVar57 + ((uVar62 ^ uVar61) & (uVar42 ^ uVar62) ^ uVar62);
      auVar69 = vpalignr_avx(auVar4,auVar11,8);
      auVar70 = vpalignr_avx(auVar8,auVar7,8);
      auVar73 = vpsrlq_avx(auVar69,1);
      uVar58 = (uVar60 >> 0x17 | uVar60 << 0x29) ^ uVar60;
      auVar11 = vpaddq_avx(auVar11,auVar70);
      uVar63 = (uVar41 >> 5 | uVar41 << 0x3b) ^ uVar41;
      auVar78 = vpsrlq_avx(auVar69,7);
      uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar60;
      auVar69 = vpsllq_avx(auVar69,0x38);
      auVar74 = vpsrlq_avx(auVar73,7);
      auVar70 = vpsllq_avx(auVar69,7);
      uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar41;
      lVar57 = uVar44 + local_d0._0_8_ + ((uVar59 ^ uVar39) & uVar60 ^ uVar39) +
               (uVar58 >> 0xe | uVar58 << 0x32);
      auVar79 = vpsrlq_avx(auVar10,6);
      uVar61 = uVar61 + lVar57;
      uVar44 = (uVar63 >> 0x1c | uVar63 << 0x24) +
               lVar57 + ((uVar42 ^ uVar62) & (uVar41 ^ uVar42) ^ uVar42);
      auVar75 = vpsllq_avx(auVar10,3);
      auVar11 = vpaddq_avx(auVar11,auVar78 ^ auVar73 ^ auVar69 ^ auVar74 ^ auVar70);
      auVar69 = vpsrlq_avx(auVar10,0x13);
      uVar58 = (uVar61 >> 0x17 | uVar61 << 0x29) ^ uVar61;
      uVar43 = (uVar44 >> 5 | uVar44 << 0x3b) ^ uVar44;
      auVar73 = vpsllq_avx(auVar75,0x2a);
      uVar63 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar61;
      auVar70 = vpsrlq_avx(auVar69,0x2a);
      uVar58 = uVar44 ^ uVar41;
      auVar11 = vpaddq_avx(auVar11,auVar79 ^ auVar75 ^ auVar69 ^ auVar73 ^ auVar70);
      uVar43 = (uVar43 >> 6 | uVar43 << 0x3a) ^ uVar44;
      lVar57 = uVar39 + local_d0._8_8_ + ((uVar60 ^ uVar59) & uVar61 ^ uVar59) +
               (uVar63 >> 0xe | uVar63 << 0x32);
      local_d0 = vpaddq_avx(auVar11,pauVar47[0x16]);
      uVar62 = uVar62 + lVar57;
      uVar39 = (uVar43 >> 0x1c | uVar43 << 0x24) + lVar57 + ((uVar41 ^ uVar42) & uVar58 ^ uVar41);
      pauVar51 = pauVar47 + 0x18;
      pauVar47 = pauVar47 + 0x10;
    } while (*(char *)((longlong)*pauVar51 + 7) != '\0');
    uVar63 = (uVar62 >> 0x17 | uVar62 << 0x29) ^ uVar62;
    uVar43 = (uVar39 >> 5 | uVar39 << 0x3b) ^ uVar39;
    uVar63 = (uVar63 >> 4 | uVar63 << 0x3c) ^ uVar62;
    uVar43 = (uVar43 >> 6 | uVar43 << 0x3a) ^ uVar39;
    lVar57 = uVar59 + auStack_140._0_8_ + ((uVar61 ^ uVar60) & uVar62 ^ uVar60) +
             (uVar63 >> 0xe | uVar63 << 0x32);
    uVar42 = uVar42 + lVar57;
    uVar59 = (uVar43 >> 0x1c | uVar43 << 0x24) + lVar57 + (uVar58 & (uVar39 ^ uVar44) ^ uVar44);
    uVar58 = (uVar42 >> 0x17 | uVar42 << 0x29) ^ uVar42;
    uVar63 = (uVar59 >> 5 | uVar59 << 0x3b) ^ uVar59;
    uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar42;
    uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar59;
    lVar57 = uVar60 + auStack_140._8_8_ + ((uVar62 ^ uVar61) & uVar42 ^ uVar61) +
             (uVar58 >> 0xe | uVar58 << 0x32);
    uVar41 = uVar41 + lVar57;
    uVar60 = (uVar63 >> 0x1c | uVar63 << 0x24) +
             lVar57 + ((uVar39 ^ uVar44) & (uVar59 ^ uVar39) ^ uVar39);
    uVar58 = (uVar41 >> 0x17 | uVar41 << 0x29) ^ uVar41;
    uVar63 = (uVar60 >> 5 | uVar60 << 0x3b) ^ uVar60;
    uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar41;
    uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar60;
    lVar57 = uVar61 + auStack_130._0_8_ + ((uVar42 ^ uVar62) & uVar41 ^ uVar62) +
             (uVar58 >> 0xe | uVar58 << 0x32);
    uVar44 = uVar44 + lVar57;
    uVar61 = (uVar63 >> 0x1c | uVar63 << 0x24) +
             lVar57 + ((uVar59 ^ uVar39) & (uVar60 ^ uVar59) ^ uVar59);
    uVar58 = (uVar44 >> 0x17 | uVar44 << 0x29) ^ uVar44;
    uVar63 = (uVar61 >> 5 | uVar61 << 0x3b) ^ uVar61;
    uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar44;
    uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar61;
    lVar57 = uVar62 + auStack_130._8_8_ + ((uVar41 ^ uVar42) & uVar44 ^ uVar42) +
             (uVar58 >> 0xe | uVar58 << 0x32);
    uVar39 = uVar39 + lVar57;
    uVar62 = (uVar63 >> 0x1c | uVar63 << 0x24) +
             lVar57 + ((uVar60 ^ uVar59) & (uVar61 ^ uVar60) ^ uVar60);
    uVar58 = (uVar39 >> 0x17 | uVar39 << 0x29) ^ uVar39;
    uVar63 = (uVar62 >> 5 | uVar62 << 0x3b) ^ uVar62;
    uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar39;
    uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar62;
    lVar57 = uVar42 + auStack_120._0_8_ + ((uVar44 ^ uVar41) & uVar39 ^ uVar41) +
             (uVar58 >> 0xe | uVar58 << 0x32);
    uVar59 = uVar59 + lVar57;
    uVar42 = (uVar63 >> 0x1c | uVar63 << 0x24) +
             lVar57 + ((uVar61 ^ uVar60) & (uVar62 ^ uVar61) ^ uVar61);
    uVar58 = (uVar59 >> 0x17 | uVar59 << 0x29) ^ uVar59;
    uVar63 = (uVar42 >> 5 | uVar42 << 0x3b) ^ uVar42;
    uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar59;
    uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar42;
    lVar57 = uVar41 + auStack_120._8_8_ + ((uVar39 ^ uVar44) & uVar59 ^ uVar44) +
             (uVar58 >> 0xe | uVar58 << 0x32);
    uVar60 = uVar60 + lVar57;
    uVar41 = (uVar63 >> 0x1c | uVar63 << 0x24) +
             lVar57 + ((uVar62 ^ uVar61) & (uVar42 ^ uVar62) ^ uVar62);
    uVar58 = (uVar60 >> 0x17 | uVar60 << 0x29) ^ uVar60;
    uVar63 = (uVar41 >> 5 | uVar41 << 0x3b) ^ uVar41;
    uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar60;
    uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar41;
    lVar57 = uVar44 + auStack_110._0_8_ + ((uVar59 ^ uVar39) & uVar60 ^ uVar39) +
             (uVar58 >> 0xe | uVar58 << 0x32);
    uVar61 = uVar61 + lVar57;
    uVar44 = (uVar63 >> 0x1c | uVar63 << 0x24) +
             lVar57 + ((uVar42 ^ uVar62) & (uVar41 ^ uVar42) ^ uVar42);
    uVar58 = (uVar61 >> 0x17 | uVar61 << 0x29) ^ uVar61;
    uVar63 = (uVar44 >> 5 | uVar44 << 0x3b) ^ uVar44;
    uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar61;
    uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar44;
    lVar57 = uVar39 + auStack_110._8_8_ + ((uVar60 ^ uVar59) & uVar61 ^ uVar59) +
             (uVar58 >> 0xe | uVar58 << 0x32);
    uVar62 = uVar62 + lVar57;
    uVar39 = (uVar63 >> 0x1c | uVar63 << 0x24) +
             lVar57 + ((uVar41 ^ uVar42) & (uVar44 ^ uVar41) ^ uVar41);
    uVar58 = (uVar62 >> 0x17 | uVar62 << 0x29) ^ uVar62;
    uVar63 = (uVar39 >> 5 | uVar39 << 0x3b) ^ uVar39;
    uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar62;
    uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar39;
    lVar57 = uVar59 + local_100._0_8_ + ((uVar61 ^ uVar60) & uVar62 ^ uVar60) +
             (uVar58 >> 0xe | uVar58 << 0x32);
    uVar42 = uVar42 + lVar57;
    uVar59 = (uVar63 >> 0x1c | uVar63 << 0x24) +
             lVar57 + ((uVar44 ^ uVar41) & (uVar39 ^ uVar44) ^ uVar44);
    uVar58 = (uVar42 >> 0x17 | uVar42 << 0x29) ^ uVar42;
    uVar63 = (uVar59 >> 5 | uVar59 << 0x3b) ^ uVar59;
    uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar42;
    uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar59;
    lVar57 = uVar60 + local_100._8_8_ + ((uVar62 ^ uVar61) & uVar42 ^ uVar61) +
             (uVar58 >> 0xe | uVar58 << 0x32);
    uVar41 = uVar41 + lVar57;
    uVar60 = (uVar63 >> 0x1c | uVar63 << 0x24) +
             lVar57 + ((uVar39 ^ uVar44) & (uVar59 ^ uVar39) ^ uVar39);
    uVar58 = (uVar41 >> 0x17 | uVar41 << 0x29) ^ uVar41;
    uVar63 = (uVar60 >> 5 | uVar60 << 0x3b) ^ uVar60;
    uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar41;
    uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar60;
    lVar57 = uVar61 + local_f0._0_8_ + ((uVar42 ^ uVar62) & uVar41 ^ uVar62) +
             (uVar58 >> 0xe | uVar58 << 0x32);
    uVar44 = uVar44 + lVar57;
    uVar61 = (uVar63 >> 0x1c | uVar63 << 0x24) +
             lVar57 + ((uVar59 ^ uVar39) & (uVar60 ^ uVar59) ^ uVar59);
    uVar58 = (uVar44 >> 0x17 | uVar44 << 0x29) ^ uVar44;
    uVar63 = (uVar61 >> 5 | uVar61 << 0x3b) ^ uVar61;
    uVar58 = (uVar58 >> 4 | uVar58 << 0x3c) ^ uVar44;
    uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar61;
    lVar57 = uVar62 + local_f0._8_8_ + ((uVar41 ^ uVar42) & uVar44 ^ uVar42) +
             (uVar58 >> 0xe | uVar58 << 0x32);
    uVar39 = uVar39 + lVar57;
    uVar58 = (uVar63 >> 0x1c | uVar63 << 0x24) +
             lVar57 + ((uVar60 ^ uVar59) & (uVar61 ^ uVar60) ^ uVar60);
    uVar62 = (uVar39 >> 0x17 | uVar39 << 0x29) ^ uVar39;
    uVar63 = (uVar58 >> 5 | uVar58 << 0x3b) ^ uVar58;
    uVar62 = (uVar62 >> 4 | uVar62 << 0x3c) ^ uVar39;
    uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar58;
    lVar57 = uVar42 + local_e0._0_8_ + ((uVar44 ^ uVar41) & uVar39 ^ uVar41) +
             (uVar62 >> 0xe | uVar62 << 0x32);
    uVar59 = uVar59 + lVar57;
    uVar42 = (uVar63 >> 0x1c | uVar63 << 0x24) +
             lVar57 + ((uVar61 ^ uVar60) & (uVar58 ^ uVar61) ^ uVar61);
    uVar62 = (uVar59 >> 0x17 | uVar59 << 0x29) ^ uVar59;
    uVar63 = (uVar42 >> 5 | uVar42 << 0x3b) ^ uVar42;
    uVar62 = (uVar62 >> 4 | uVar62 << 0x3c) ^ uVar59;
    uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar42;
    lVar57 = uVar41 + local_e0._8_8_ + ((uVar39 ^ uVar44) & uVar59 ^ uVar44) +
             (uVar62 >> 0xe | uVar62 << 0x32);
    uVar60 = uVar60 + lVar57;
    uVar41 = (uVar63 >> 0x1c | uVar63 << 0x24) +
             lVar57 + ((uVar58 ^ uVar61) & (uVar42 ^ uVar58) ^ uVar58);
    uVar62 = (uVar60 >> 0x17 | uVar60 << 0x29) ^ uVar60;
    uVar63 = (uVar41 >> 5 | uVar41 << 0x3b) ^ uVar41;
    uVar62 = (uVar62 >> 4 | uVar62 << 0x3c) ^ uVar60;
    uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar41;
    lVar57 = uVar44 + local_d0._0_8_ + ((uVar59 ^ uVar39) & uVar60 ^ uVar39) +
             (uVar62 >> 0xe | uVar62 << 0x32);
    uVar61 = uVar61 + lVar57;
    uVar44 = (uVar63 >> 0x1c | uVar63 << 0x24) +
             lVar57 + ((uVar42 ^ uVar58) & (uVar41 ^ uVar42) ^ uVar42);
    uVar62 = (uVar61 >> 0x17 | uVar61 << 0x29) ^ uVar61;
    uVar63 = (uVar44 >> 5 | uVar44 << 0x3b) ^ uVar44;
    uVar62 = (uVar62 >> 4 | uVar62 << 0x3c) ^ uVar61;
    uVar63 = (uVar63 >> 6 | uVar63 << 0x3a) ^ uVar44;
    lVar57 = uVar39 + local_d0._8_8_ + ((uVar60 ^ uVar59) & uVar61 ^ uVar59) +
             (uVar62 >> 0xe | uVar62 << 0x32);
    uVar39 = (uVar63 >> 0x1c | uVar63 << 0x24) +
             lVar57 + ((uVar41 ^ uVar42) & (uVar44 ^ uVar41) ^ uVar41) + *param_1;
    param_2 = param_2 + 8;
    uVar44 = uVar44 + param_1[1];
    uVar41 = uVar41 + param_1[2];
    uVar42 = uVar42 + param_1[3];
    uVar62 = uVar58 + lVar57 + param_1[4];
    uVar61 = uVar61 + param_1[5];
    uVar60 = uVar60 + param_1[6];
    uVar59 = uVar59 + param_1[7];
    *param_1 = uVar39;
    param_1[1] = uVar44;
    param_1[2] = uVar41;
    param_1[3] = uVar42;
    param_1[4] = uVar62;
    param_1[5] = uVar61;
    param_1[6] = uVar60;
    param_1[7] = uVar59;
  } while (param_2 < pauVar52);
  return;
}

// sha512_block_data_order_xop @ 140e26d80

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sha512_block_data_order_xop(undefined8 param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar1 = vpshufb_avx(*param_2,_DAT_140e26d00);
  auVar2 = vpshufb_avx(param_2[1],_DAT_140e26d00);
  auVar3 = vpshufb_avx(param_2[2],_DAT_140e26d00);
  auVar4 = vpshufb_avx(param_2[3],_DAT_140e26d00);
  auVar5 = vpshufb_avx(param_2[4],_DAT_140e26d00);
  auVar6 = vpshufb_avx(param_2[5],_DAT_140e26d00);
  vpaddq_avx(auVar1,_K512);
  auVar7 = vpshufb_avx(param_2[6],_DAT_140e26d00);
  vpaddq_avx(auVar2,_DAT_140e26820);
  auVar8 = vpshufb_avx(param_2[7],_DAT_140e26d00);
  vpaddq_avx(auVar3,_DAT_140e26840);
  vpaddq_avx(auVar4,_DAT_140e26860);
  vpaddq_avx(auVar5,_DAT_140e26880);
  vpaddq_avx(auVar6,_DAT_140e268a0);
  vpaddq_avx(auVar7,_DAT_140e268c0);
  vpaddq_avx(auVar8,_DAT_140e268e0);
  vpalignr_avx(auVar2,auVar1,8);
  vpalignr_avx(auVar6,auVar5,8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// L$SEH_begin_sha512_block_data_order_xop @ 140e26d8d

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L_SEH_begin_sha512_block_data_order_xop(undefined8 param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  auVar1 = vpshufb_avx(*param_2,_DAT_140e26d00);
  auVar2 = vpshufb_avx(param_2[1],_DAT_140e26d00);
  auVar3 = vpshufb_avx(param_2[2],_DAT_140e26d00);
  auVar4 = vpshufb_avx(param_2[3],_DAT_140e26d00);
  auVar5 = vpshufb_avx(param_2[4],_DAT_140e26d00);
  auVar6 = vpshufb_avx(param_2[5],_DAT_140e26d00);
  vpaddq_avx(auVar1,_K512);
  auVar7 = vpshufb_avx(param_2[6],_DAT_140e26d00);
  vpaddq_avx(auVar2,_DAT_140e26820);
  auVar8 = vpshufb_avx(param_2[7],_DAT_140e26d00);
  vpaddq_avx(auVar3,_DAT_140e26840);
  vpaddq_avx(auVar4,_DAT_140e26860);
  vpaddq_avx(auVar5,_DAT_140e26880);
  vpaddq_avx(auVar6,_DAT_140e268a0);
  vpaddq_avx(auVar7,_DAT_140e268c0);
  vpaddq_avx(auVar8,_DAT_140e268e0);
  vpalignr_avx(auVar2,auVar1,8);
  vpalignr_avx(auVar6,auVar5,8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// sha512_block_data_order_avx @ 140e27d80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sha512_block_data_order_avx(ulonglong *param_1,undefined1 (*param_2) [16],longlong param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 (*pauVar10) [16];
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 (*pauVar15) [16];
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  
  pauVar1 = param_2 + param_3 * 8;
  uVar11 = *param_1;
  uVar14 = param_1[1];
  uVar12 = param_1[2];
  uVar13 = param_1[3];
  uVar23 = param_1[4];
  uVar22 = param_1[5];
  uVar21 = param_1[6];
  uVar20 = param_1[7];
  do {
    auVar2 = vpshufb_avx(*param_2,_DAT_140e26d00);
    auVar3 = vpshufb_avx(param_2[1],_DAT_140e26d00);
    auVar4 = vpshufb_avx(param_2[2],_DAT_140e26d00);
    auVar5 = vpshufb_avx(param_2[3],_DAT_140e26d00);
    auVar6 = vpshufb_avx(param_2[4],_DAT_140e26d00);
    auVar7 = vpshufb_avx(param_2[5],_DAT_140e26d00);
    auStack_140 = vpaddq_avx(auVar2,_K512);
    auVar8 = vpshufb_avx(param_2[6],_DAT_140e26d00);
    auStack_130 = vpaddq_avx(auVar3,_DAT_140e26820);
    auVar9 = vpshufb_avx(param_2[7],_DAT_140e26d00);
    auStack_120 = vpaddq_avx(auVar4,_DAT_140e26840);
    auStack_110 = vpaddq_avx(auVar5,_DAT_140e26860);
    auStack_100 = vpaddq_avx(auVar6,_DAT_140e26880);
    auStack_f0 = vpaddq_avx(auVar7,_DAT_140e268a0);
    auStack_e0 = vpaddq_avx(auVar8,_DAT_140e268c0);
    auStack_d0 = vpaddq_avx(auVar9,_DAT_140e268e0);
    uVar16 = uVar14 ^ uVar12;
    pauVar15 = (undefined1 (*) [16])&DAT_140e26880;
    do {
      auVar24 = vpalignr_avx(auVar3,auVar2,8);
      auVar25 = vpalignr_avx(auVar7,auVar6,8);
      auVar26 = vpsrlq_avx(auVar24,1);
      uVar18 = (uVar23 >> 0x17 | uVar23 << 0x29) ^ uVar23;
      auVar2 = vpaddq_avx(auVar2,auVar25);
      uVar19 = (uVar11 >> 5 | uVar11 << 0x3b) ^ uVar11;
      auVar29 = vpsrlq_avx(auVar24,7);
      uVar18 = (uVar18 >> 4 | uVar18 << 0x3c) ^ uVar23;
      auVar24 = vpsllq_avx(auVar24,0x38);
      auVar27 = vpsrlq_avx(auVar26,7);
      auVar25 = vpsllq_avx(auVar24,7);
      uVar19 = (uVar19 >> 6 | uVar19 << 0x3a) ^ uVar11;
      lVar17 = uVar20 + auStack_140._0_8_ + ((uVar22 ^ uVar21) & uVar23 ^ uVar21) +
               (uVar18 >> 0xe | uVar18 << 0x32);
      auVar30 = vpsrlq_avx(auVar9,6);
      uVar13 = uVar13 + lVar17;
      uVar20 = (uVar19 >> 0x1c | uVar19 << 0x24) + lVar17 + (uVar16 & (uVar11 ^ uVar14) ^ uVar14);
      auVar28 = vpsllq_avx(auVar9,3);
      auVar2 = vpaddq_avx(auVar2,auVar29 ^ auVar26 ^ auVar24 ^ auVar27 ^ auVar25);
      auVar24 = vpsrlq_avx(auVar9,0x13);
      uVar16 = (uVar13 >> 0x17 | uVar13 << 0x29) ^ uVar13;
      uVar18 = (uVar20 >> 5 | uVar20 << 0x3b) ^ uVar20;
      auVar26 = vpsllq_avx(auVar28,0x2a);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar13;
      auVar25 = vpsrlq_avx(auVar24,0x2a);
      auVar2 = vpaddq_avx(auVar2,auVar30 ^ auVar28 ^ auVar24 ^ auVar26 ^ auVar25);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar20;
      lVar17 = uVar21 + auStack_140._8_8_ + ((uVar23 ^ uVar22) & uVar13 ^ uVar22) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      auStack_140 = vpaddq_avx(auVar2,pauVar15[8]);
      uVar12 = uVar12 + lVar17;
      uVar21 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar11 ^ uVar14) & (uVar20 ^ uVar11) ^ uVar11);
      auVar24 = vpalignr_avx(auVar4,auVar3,8);
      auVar25 = vpalignr_avx(auVar8,auVar7,8);
      auVar26 = vpsrlq_avx(auVar24,1);
      uVar16 = (uVar12 >> 0x17 | uVar12 << 0x29) ^ uVar12;
      auVar3 = vpaddq_avx(auVar3,auVar25);
      uVar18 = (uVar21 >> 5 | uVar21 << 0x3b) ^ uVar21;
      auVar29 = vpsrlq_avx(auVar24,7);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar12;
      auVar24 = vpsllq_avx(auVar24,0x38);
      auVar27 = vpsrlq_avx(auVar26,7);
      auVar25 = vpsllq_avx(auVar24,7);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar21;
      lVar17 = uVar22 + auStack_130._0_8_ + ((uVar13 ^ uVar23) & uVar12 ^ uVar23) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      auVar30 = vpsrlq_avx(auVar2,6);
      uVar14 = uVar14 + lVar17;
      uVar22 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar20 ^ uVar11) & (uVar21 ^ uVar20) ^ uVar20);
      auVar28 = vpsllq_avx(auVar2,3);
      auVar3 = vpaddq_avx(auVar3,auVar29 ^ auVar26 ^ auVar24 ^ auVar27 ^ auVar25);
      auVar24 = vpsrlq_avx(auVar2,0x13);
      uVar16 = (uVar14 >> 0x17 | uVar14 << 0x29) ^ uVar14;
      uVar18 = (uVar22 >> 5 | uVar22 << 0x3b) ^ uVar22;
      auVar26 = vpsllq_avx(auVar28,0x2a);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar14;
      auVar25 = vpsrlq_avx(auVar24,0x2a);
      auVar3 = vpaddq_avx(auVar3,auVar30 ^ auVar28 ^ auVar24 ^ auVar26 ^ auVar25);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar22;
      lVar17 = uVar23 + auStack_130._8_8_ + ((uVar12 ^ uVar13) & uVar14 ^ uVar13) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      auStack_130 = vpaddq_avx(auVar3,pauVar15[10]);
      uVar11 = uVar11 + lVar17;
      uVar23 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar21 ^ uVar20) & (uVar22 ^ uVar21) ^ uVar21);
      auVar24 = vpalignr_avx(auVar5,auVar4,8);
      auVar25 = vpalignr_avx(auVar9,auVar8,8);
      auVar26 = vpsrlq_avx(auVar24,1);
      uVar16 = (uVar11 >> 0x17 | uVar11 << 0x29) ^ uVar11;
      auVar4 = vpaddq_avx(auVar4,auVar25);
      uVar18 = (uVar23 >> 5 | uVar23 << 0x3b) ^ uVar23;
      auVar29 = vpsrlq_avx(auVar24,7);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar11;
      auVar24 = vpsllq_avx(auVar24,0x38);
      auVar27 = vpsrlq_avx(auVar26,7);
      auVar25 = vpsllq_avx(auVar24,7);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar23;
      lVar17 = uVar13 + auStack_120._0_8_ + ((uVar14 ^ uVar12) & uVar11 ^ uVar12) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      auVar30 = vpsrlq_avx(auVar3,6);
      uVar20 = uVar20 + lVar17;
      uVar13 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar22 ^ uVar21) & (uVar23 ^ uVar22) ^ uVar22);
      auVar28 = vpsllq_avx(auVar3,3);
      auVar4 = vpaddq_avx(auVar4,auVar29 ^ auVar26 ^ auVar24 ^ auVar27 ^ auVar25);
      auVar24 = vpsrlq_avx(auVar3,0x13);
      uVar16 = (uVar20 >> 0x17 | uVar20 << 0x29) ^ uVar20;
      uVar18 = (uVar13 >> 5 | uVar13 << 0x3b) ^ uVar13;
      auVar26 = vpsllq_avx(auVar28,0x2a);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar20;
      auVar25 = vpsrlq_avx(auVar24,0x2a);
      auVar4 = vpaddq_avx(auVar4,auVar30 ^ auVar28 ^ auVar24 ^ auVar26 ^ auVar25);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar13;
      lVar17 = uVar12 + auStack_120._8_8_ + ((uVar11 ^ uVar14) & uVar20 ^ uVar14) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      auStack_120 = vpaddq_avx(auVar4,pauVar15[0xc]);
      uVar21 = uVar21 + lVar17;
      uVar12 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar23 ^ uVar22) & (uVar13 ^ uVar23) ^ uVar23);
      auVar24 = vpalignr_avx(auVar6,auVar5,8);
      auVar25 = vpalignr_avx(auVar2,auVar9,8);
      auVar26 = vpsrlq_avx(auVar24,1);
      uVar16 = (uVar21 >> 0x17 | uVar21 << 0x29) ^ uVar21;
      auVar5 = vpaddq_avx(auVar5,auVar25);
      uVar18 = (uVar12 >> 5 | uVar12 << 0x3b) ^ uVar12;
      auVar29 = vpsrlq_avx(auVar24,7);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar21;
      auVar24 = vpsllq_avx(auVar24,0x38);
      auVar27 = vpsrlq_avx(auVar26,7);
      auVar25 = vpsllq_avx(auVar24,7);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar12;
      lVar17 = uVar14 + auStack_110._0_8_ + ((uVar20 ^ uVar11) & uVar21 ^ uVar11) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      auVar30 = vpsrlq_avx(auVar4,6);
      uVar22 = uVar22 + lVar17;
      uVar14 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar13 ^ uVar23) & (uVar12 ^ uVar13) ^ uVar13);
      auVar28 = vpsllq_avx(auVar4,3);
      auVar5 = vpaddq_avx(auVar5,auVar29 ^ auVar26 ^ auVar24 ^ auVar27 ^ auVar25);
      auVar24 = vpsrlq_avx(auVar4,0x13);
      uVar16 = (uVar22 >> 0x17 | uVar22 << 0x29) ^ uVar22;
      uVar18 = (uVar14 >> 5 | uVar14 << 0x3b) ^ uVar14;
      auVar26 = vpsllq_avx(auVar28,0x2a);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar22;
      auVar25 = vpsrlq_avx(auVar24,0x2a);
      auVar5 = vpaddq_avx(auVar5,auVar30 ^ auVar28 ^ auVar24 ^ auVar26 ^ auVar25);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar14;
      lVar17 = uVar11 + auStack_110._8_8_ + ((uVar21 ^ uVar20) & uVar22 ^ uVar20) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      auStack_110 = vpaddq_avx(auVar5,pauVar15[0xe]);
      uVar23 = uVar23 + lVar17;
      uVar11 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar12 ^ uVar13) & (uVar14 ^ uVar12) ^ uVar12);
      auVar24 = vpalignr_avx(auVar7,auVar6,8);
      auVar25 = vpalignr_avx(auVar3,auVar2,8);
      auVar26 = vpsrlq_avx(auVar24,1);
      uVar16 = (uVar23 >> 0x17 | uVar23 << 0x29) ^ uVar23;
      auVar6 = vpaddq_avx(auVar6,auVar25);
      uVar18 = (uVar11 >> 5 | uVar11 << 0x3b) ^ uVar11;
      auVar29 = vpsrlq_avx(auVar24,7);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar23;
      auVar24 = vpsllq_avx(auVar24,0x38);
      auVar27 = vpsrlq_avx(auVar26,7);
      auVar25 = vpsllq_avx(auVar24,7);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar11;
      lVar17 = uVar20 + auStack_100._0_8_ + ((uVar22 ^ uVar21) & uVar23 ^ uVar21) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      auVar30 = vpsrlq_avx(auVar5,6);
      uVar13 = uVar13 + lVar17;
      uVar20 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar14 ^ uVar12) & (uVar11 ^ uVar14) ^ uVar14);
      auVar28 = vpsllq_avx(auVar5,3);
      auVar6 = vpaddq_avx(auVar6,auVar29 ^ auVar26 ^ auVar24 ^ auVar27 ^ auVar25);
      auVar24 = vpsrlq_avx(auVar5,0x13);
      uVar16 = (uVar13 >> 0x17 | uVar13 << 0x29) ^ uVar13;
      uVar18 = (uVar20 >> 5 | uVar20 << 0x3b) ^ uVar20;
      auVar26 = vpsllq_avx(auVar28,0x2a);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar13;
      auVar25 = vpsrlq_avx(auVar24,0x2a);
      auVar6 = vpaddq_avx(auVar6,auVar30 ^ auVar28 ^ auVar24 ^ auVar26 ^ auVar25);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar20;
      lVar17 = uVar21 + auStack_100._8_8_ + ((uVar23 ^ uVar22) & uVar13 ^ uVar22) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      auStack_100 = vpaddq_avx(auVar6,pauVar15[0x10]);
      uVar12 = uVar12 + lVar17;
      uVar21 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar11 ^ uVar14) & (uVar20 ^ uVar11) ^ uVar11);
      auVar24 = vpalignr_avx(auVar8,auVar7,8);
      auVar25 = vpalignr_avx(auVar4,auVar3,8);
      auVar26 = vpsrlq_avx(auVar24,1);
      uVar16 = (uVar12 >> 0x17 | uVar12 << 0x29) ^ uVar12;
      auVar7 = vpaddq_avx(auVar7,auVar25);
      uVar18 = (uVar21 >> 5 | uVar21 << 0x3b) ^ uVar21;
      auVar29 = vpsrlq_avx(auVar24,7);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar12;
      auVar24 = vpsllq_avx(auVar24,0x38);
      auVar27 = vpsrlq_avx(auVar26,7);
      auVar25 = vpsllq_avx(auVar24,7);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar21;
      lVar17 = uVar22 + auStack_f0._0_8_ + ((uVar13 ^ uVar23) & uVar12 ^ uVar23) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      auVar30 = vpsrlq_avx(auVar6,6);
      uVar14 = uVar14 + lVar17;
      uVar22 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar20 ^ uVar11) & (uVar21 ^ uVar20) ^ uVar20);
      auVar28 = vpsllq_avx(auVar6,3);
      auVar7 = vpaddq_avx(auVar7,auVar29 ^ auVar26 ^ auVar24 ^ auVar27 ^ auVar25);
      auVar24 = vpsrlq_avx(auVar6,0x13);
      uVar16 = (uVar14 >> 0x17 | uVar14 << 0x29) ^ uVar14;
      uVar18 = (uVar22 >> 5 | uVar22 << 0x3b) ^ uVar22;
      auVar26 = vpsllq_avx(auVar28,0x2a);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar14;
      auVar25 = vpsrlq_avx(auVar24,0x2a);
      auVar7 = vpaddq_avx(auVar7,auVar30 ^ auVar28 ^ auVar24 ^ auVar26 ^ auVar25);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar22;
      lVar17 = uVar23 + auStack_f0._8_8_ + ((uVar12 ^ uVar13) & uVar14 ^ uVar13) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      auStack_f0 = vpaddq_avx(auVar7,pauVar15[0x12]);
      uVar11 = uVar11 + lVar17;
      uVar23 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar21 ^ uVar20) & (uVar22 ^ uVar21) ^ uVar21);
      auVar24 = vpalignr_avx(auVar9,auVar8,8);
      auVar25 = vpalignr_avx(auVar5,auVar4,8);
      auVar26 = vpsrlq_avx(auVar24,1);
      uVar16 = (uVar11 >> 0x17 | uVar11 << 0x29) ^ uVar11;
      auVar8 = vpaddq_avx(auVar8,auVar25);
      uVar18 = (uVar23 >> 5 | uVar23 << 0x3b) ^ uVar23;
      auVar29 = vpsrlq_avx(auVar24,7);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar11;
      auVar24 = vpsllq_avx(auVar24,0x38);
      auVar27 = vpsrlq_avx(auVar26,7);
      auVar25 = vpsllq_avx(auVar24,7);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar23;
      lVar17 = uVar13 + auStack_e0._0_8_ + ((uVar14 ^ uVar12) & uVar11 ^ uVar12) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      auVar30 = vpsrlq_avx(auVar7,6);
      uVar20 = uVar20 + lVar17;
      uVar13 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar22 ^ uVar21) & (uVar23 ^ uVar22) ^ uVar22);
      auVar28 = vpsllq_avx(auVar7,3);
      auVar8 = vpaddq_avx(auVar8,auVar29 ^ auVar26 ^ auVar24 ^ auVar27 ^ auVar25);
      auVar24 = vpsrlq_avx(auVar7,0x13);
      uVar16 = (uVar20 >> 0x17 | uVar20 << 0x29) ^ uVar20;
      uVar18 = (uVar13 >> 5 | uVar13 << 0x3b) ^ uVar13;
      auVar26 = vpsllq_avx(auVar28,0x2a);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar20;
      auVar25 = vpsrlq_avx(auVar24,0x2a);
      auVar8 = vpaddq_avx(auVar8,auVar30 ^ auVar28 ^ auVar24 ^ auVar26 ^ auVar25);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar13;
      lVar17 = uVar12 + auStack_e0._8_8_ + ((uVar11 ^ uVar14) & uVar20 ^ uVar14) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      auStack_e0 = vpaddq_avx(auVar8,pauVar15[0x14]);
      uVar21 = uVar21 + lVar17;
      uVar12 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar23 ^ uVar22) & (uVar13 ^ uVar23) ^ uVar23);
      auVar24 = vpalignr_avx(auVar2,auVar9,8);
      auVar25 = vpalignr_avx(auVar6,auVar5,8);
      auVar26 = vpsrlq_avx(auVar24,1);
      uVar16 = (uVar21 >> 0x17 | uVar21 << 0x29) ^ uVar21;
      auVar9 = vpaddq_avx(auVar9,auVar25);
      uVar18 = (uVar12 >> 5 | uVar12 << 0x3b) ^ uVar12;
      auVar29 = vpsrlq_avx(auVar24,7);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar21;
      auVar24 = vpsllq_avx(auVar24,0x38);
      auVar27 = vpsrlq_avx(auVar26,7);
      auVar25 = vpsllq_avx(auVar24,7);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar12;
      lVar17 = uVar14 + auStack_d0._0_8_ + ((uVar20 ^ uVar11) & uVar21 ^ uVar11) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      auVar30 = vpsrlq_avx(auVar8,6);
      uVar22 = uVar22 + lVar17;
      uVar14 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar13 ^ uVar23) & (uVar12 ^ uVar13) ^ uVar13);
      auVar28 = vpsllq_avx(auVar8,3);
      auVar9 = vpaddq_avx(auVar9,auVar29 ^ auVar26 ^ auVar24 ^ auVar27 ^ auVar25);
      auVar24 = vpsrlq_avx(auVar8,0x13);
      uVar16 = (uVar22 >> 0x17 | uVar22 << 0x29) ^ uVar22;
      uVar19 = (uVar14 >> 5 | uVar14 << 0x3b) ^ uVar14;
      auVar26 = vpsllq_avx(auVar28,0x2a);
      uVar18 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar22;
      auVar25 = vpsrlq_avx(auVar24,0x2a);
      uVar16 = uVar14 ^ uVar12;
      auVar9 = vpaddq_avx(auVar9,auVar30 ^ auVar28 ^ auVar24 ^ auVar26 ^ auVar25);
      uVar19 = (uVar19 >> 6 | uVar19 << 0x3a) ^ uVar14;
      lVar17 = uVar11 + auStack_d0._8_8_ + ((uVar21 ^ uVar20) & uVar22 ^ uVar20) +
               (uVar18 >> 0xe | uVar18 << 0x32);
      auStack_d0 = vpaddq_avx(auVar9,pauVar15[0x16]);
      uVar23 = uVar23 + lVar17;
      uVar11 = (uVar19 >> 0x1c | uVar19 << 0x24) + lVar17 + ((uVar12 ^ uVar13) & uVar16 ^ uVar12);
      pauVar10 = pauVar15 + 0x18;
      pauVar15 = pauVar15 + 0x10;
    } while (*(char *)((longlong)*pauVar10 + 7) != '\0');
    uVar18 = (uVar23 >> 0x17 | uVar23 << 0x29) ^ uVar23;
    uVar19 = (uVar11 >> 5 | uVar11 << 0x3b) ^ uVar11;
    uVar18 = (uVar18 >> 4 | uVar18 << 0x3c) ^ uVar23;
    uVar19 = (uVar19 >> 6 | uVar19 << 0x3a) ^ uVar11;
    lVar17 = uVar20 + auStack_140._0_8_ + ((uVar22 ^ uVar21) & uVar23 ^ uVar21) +
             (uVar18 >> 0xe | uVar18 << 0x32);
    uVar13 = uVar13 + lVar17;
    uVar20 = (uVar19 >> 0x1c | uVar19 << 0x24) + lVar17 + (uVar16 & (uVar11 ^ uVar14) ^ uVar14);
    uVar16 = (uVar13 >> 0x17 | uVar13 << 0x29) ^ uVar13;
    uVar18 = (uVar20 >> 5 | uVar20 << 0x3b) ^ uVar20;
    uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar13;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar20;
    lVar17 = uVar21 + auStack_140._8_8_ + ((uVar23 ^ uVar22) & uVar13 ^ uVar22) +
             (uVar16 >> 0xe | uVar16 << 0x32);
    uVar12 = uVar12 + lVar17;
    uVar21 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar11 ^ uVar14) & (uVar20 ^ uVar11) ^ uVar11);
    uVar16 = (uVar12 >> 0x17 | uVar12 << 0x29) ^ uVar12;
    uVar18 = (uVar21 >> 5 | uVar21 << 0x3b) ^ uVar21;
    uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar12;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar21;
    lVar17 = uVar22 + auStack_130._0_8_ + ((uVar13 ^ uVar23) & uVar12 ^ uVar23) +
             (uVar16 >> 0xe | uVar16 << 0x32);
    uVar14 = uVar14 + lVar17;
    uVar22 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar20 ^ uVar11) & (uVar21 ^ uVar20) ^ uVar20);
    uVar16 = (uVar14 >> 0x17 | uVar14 << 0x29) ^ uVar14;
    uVar18 = (uVar22 >> 5 | uVar22 << 0x3b) ^ uVar22;
    uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar14;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar22;
    lVar17 = uVar23 + auStack_130._8_8_ + ((uVar12 ^ uVar13) & uVar14 ^ uVar13) +
             (uVar16 >> 0xe | uVar16 << 0x32);
    uVar11 = uVar11 + lVar17;
    uVar23 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar21 ^ uVar20) & (uVar22 ^ uVar21) ^ uVar21);
    uVar16 = (uVar11 >> 0x17 | uVar11 << 0x29) ^ uVar11;
    uVar18 = (uVar23 >> 5 | uVar23 << 0x3b) ^ uVar23;
    uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar11;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar23;
    lVar17 = uVar13 + auStack_120._0_8_ + ((uVar14 ^ uVar12) & uVar11 ^ uVar12) +
             (uVar16 >> 0xe | uVar16 << 0x32);
    uVar20 = uVar20 + lVar17;
    uVar13 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar22 ^ uVar21) & (uVar23 ^ uVar22) ^ uVar22);
    uVar16 = (uVar20 >> 0x17 | uVar20 << 0x29) ^ uVar20;
    uVar18 = (uVar13 >> 5 | uVar13 << 0x3b) ^ uVar13;
    uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar20;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar13;
    lVar17 = uVar12 + auStack_120._8_8_ + ((uVar11 ^ uVar14) & uVar20 ^ uVar14) +
             (uVar16 >> 0xe | uVar16 << 0x32);
    uVar21 = uVar21 + lVar17;
    uVar12 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar23 ^ uVar22) & (uVar13 ^ uVar23) ^ uVar23);
    uVar16 = (uVar21 >> 0x17 | uVar21 << 0x29) ^ uVar21;
    uVar18 = (uVar12 >> 5 | uVar12 << 0x3b) ^ uVar12;
    uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar21;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar12;
    lVar17 = uVar14 + auStack_110._0_8_ + ((uVar20 ^ uVar11) & uVar21 ^ uVar11) +
             (uVar16 >> 0xe | uVar16 << 0x32);
    uVar22 = uVar22 + lVar17;
    uVar14 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar13 ^ uVar23) & (uVar12 ^ uVar13) ^ uVar13);
    uVar16 = (uVar22 >> 0x17 | uVar22 << 0x29) ^ uVar22;
    uVar18 = (uVar14 >> 5 | uVar14 << 0x3b) ^ uVar14;
    uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar22;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar14;
    lVar17 = uVar11 + auStack_110._8_8_ + ((uVar21 ^ uVar20) & uVar22 ^ uVar20) +
             (uVar16 >> 0xe | uVar16 << 0x32);
    uVar23 = uVar23 + lVar17;
    uVar11 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar12 ^ uVar13) & (uVar14 ^ uVar12) ^ uVar12);
    uVar16 = (uVar23 >> 0x17 | uVar23 << 0x29) ^ uVar23;
    uVar18 = (uVar11 >> 5 | uVar11 << 0x3b) ^ uVar11;
    uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar23;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar11;
    lVar17 = uVar20 + auStack_100._0_8_ + ((uVar22 ^ uVar21) & uVar23 ^ uVar21) +
             (uVar16 >> 0xe | uVar16 << 0x32);
    uVar13 = uVar13 + lVar17;
    uVar20 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar14 ^ uVar12) & (uVar11 ^ uVar14) ^ uVar14);
    uVar16 = (uVar13 >> 0x17 | uVar13 << 0x29) ^ uVar13;
    uVar18 = (uVar20 >> 5 | uVar20 << 0x3b) ^ uVar20;
    uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar13;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar20;
    lVar17 = uVar21 + auStack_100._8_8_ + ((uVar23 ^ uVar22) & uVar13 ^ uVar22) +
             (uVar16 >> 0xe | uVar16 << 0x32);
    uVar12 = uVar12 + lVar17;
    uVar21 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar11 ^ uVar14) & (uVar20 ^ uVar11) ^ uVar11);
    uVar16 = (uVar12 >> 0x17 | uVar12 << 0x29) ^ uVar12;
    uVar18 = (uVar21 >> 5 | uVar21 << 0x3b) ^ uVar21;
    uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar12;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar21;
    lVar17 = uVar22 + auStack_f0._0_8_ + ((uVar13 ^ uVar23) & uVar12 ^ uVar23) +
             (uVar16 >> 0xe | uVar16 << 0x32);
    uVar14 = uVar14 + lVar17;
    uVar22 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar20 ^ uVar11) & (uVar21 ^ uVar20) ^ uVar20);
    uVar16 = (uVar14 >> 0x17 | uVar14 << 0x29) ^ uVar14;
    uVar18 = (uVar22 >> 5 | uVar22 << 0x3b) ^ uVar22;
    uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar14;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar22;
    lVar17 = uVar23 + auStack_f0._8_8_ + ((uVar12 ^ uVar13) & uVar14 ^ uVar13) +
             (uVar16 >> 0xe | uVar16 << 0x32);
    uVar11 = uVar11 + lVar17;
    uVar16 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar21 ^ uVar20) & (uVar22 ^ uVar21) ^ uVar21);
    uVar23 = (uVar11 >> 0x17 | uVar11 << 0x29) ^ uVar11;
    uVar18 = (uVar16 >> 5 | uVar16 << 0x3b) ^ uVar16;
    uVar23 = (uVar23 >> 4 | uVar23 << 0x3c) ^ uVar11;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar16;
    lVar17 = uVar13 + auStack_e0._0_8_ + ((uVar14 ^ uVar12) & uVar11 ^ uVar12) +
             (uVar23 >> 0xe | uVar23 << 0x32);
    uVar20 = uVar20 + lVar17;
    uVar13 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar22 ^ uVar21) & (uVar16 ^ uVar22) ^ uVar22);
    uVar23 = (uVar20 >> 0x17 | uVar20 << 0x29) ^ uVar20;
    uVar18 = (uVar13 >> 5 | uVar13 << 0x3b) ^ uVar13;
    uVar23 = (uVar23 >> 4 | uVar23 << 0x3c) ^ uVar20;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar13;
    lVar17 = uVar12 + auStack_e0._8_8_ + ((uVar11 ^ uVar14) & uVar20 ^ uVar14) +
             (uVar23 >> 0xe | uVar23 << 0x32);
    uVar21 = uVar21 + lVar17;
    uVar12 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar16 ^ uVar22) & (uVar13 ^ uVar16) ^ uVar16);
    uVar23 = (uVar21 >> 0x17 | uVar21 << 0x29) ^ uVar21;
    uVar18 = (uVar12 >> 5 | uVar12 << 0x3b) ^ uVar12;
    uVar23 = (uVar23 >> 4 | uVar23 << 0x3c) ^ uVar21;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar12;
    lVar17 = uVar14 + auStack_d0._0_8_ + ((uVar20 ^ uVar11) & uVar21 ^ uVar11) +
             (uVar23 >> 0xe | uVar23 << 0x32);
    uVar22 = uVar22 + lVar17;
    uVar14 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar13 ^ uVar16) & (uVar12 ^ uVar13) ^ uVar13);
    uVar23 = (uVar22 >> 0x17 | uVar22 << 0x29) ^ uVar22;
    uVar18 = (uVar14 >> 5 | uVar14 << 0x3b) ^ uVar14;
    uVar23 = (uVar23 >> 4 | uVar23 << 0x3c) ^ uVar22;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar14;
    lVar17 = uVar11 + auStack_d0._8_8_ + ((uVar21 ^ uVar20) & uVar22 ^ uVar20) +
             (uVar23 >> 0xe | uVar23 << 0x32);
    uVar11 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar12 ^ uVar13) & (uVar14 ^ uVar12) ^ uVar12) + *param_1;
    param_2 = param_2 + 8;
    uVar14 = uVar14 + param_1[1];
    uVar12 = uVar12 + param_1[2];
    uVar13 = uVar13 + param_1[3];
    uVar23 = uVar16 + lVar17 + param_1[4];
    uVar22 = uVar22 + param_1[5];
    uVar21 = uVar21 + param_1[6];
    uVar20 = uVar20 + param_1[7];
    *param_1 = uVar11;
    param_1[1] = uVar14;
    param_1[2] = uVar12;
    param_1[3] = uVar13;
    param_1[4] = uVar23;
    param_1[5] = uVar22;
    param_1[6] = uVar21;
    param_1[7] = uVar20;
  } while (param_2 < pauVar1);
  return;
}

// L$SEH_begin_sha512_block_data_order_avx @ 140e27d8d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L_SEH_begin_sha512_block_data_order_avx
               (ulonglong *param_1,undefined1 (*param_2) [16],longlong param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 (*pauVar10) [16];
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined1 (*pauVar15) [16];
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 local_140 [16];
  undefined1 local_130 [16];
  undefined1 local_120 [16];
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  undefined1 local_d0 [16];
  
  pauVar1 = param_2 + param_3 * 8;
  uVar11 = *param_1;
  uVar14 = param_1[1];
  uVar12 = param_1[2];
  uVar13 = param_1[3];
  uVar23 = param_1[4];
  uVar22 = param_1[5];
  uVar21 = param_1[6];
  uVar20 = param_1[7];
  do {
    auVar2 = vpshufb_avx(*param_2,_DAT_140e26d00);
    auVar3 = vpshufb_avx(param_2[1],_DAT_140e26d00);
    auVar4 = vpshufb_avx(param_2[2],_DAT_140e26d00);
    auVar5 = vpshufb_avx(param_2[3],_DAT_140e26d00);
    auVar6 = vpshufb_avx(param_2[4],_DAT_140e26d00);
    auVar7 = vpshufb_avx(param_2[5],_DAT_140e26d00);
    local_140 = vpaddq_avx(auVar2,_K512);
    auVar8 = vpshufb_avx(param_2[6],_DAT_140e26d00);
    local_130 = vpaddq_avx(auVar3,_DAT_140e26820);
    auVar9 = vpshufb_avx(param_2[7],_DAT_140e26d00);
    local_120 = vpaddq_avx(auVar4,_DAT_140e26840);
    local_110 = vpaddq_avx(auVar5,_DAT_140e26860);
    local_100 = vpaddq_avx(auVar6,_DAT_140e26880);
    local_f0 = vpaddq_avx(auVar7,_DAT_140e268a0);
    local_e0 = vpaddq_avx(auVar8,_DAT_140e268c0);
    local_d0 = vpaddq_avx(auVar9,_DAT_140e268e0);
    uVar16 = uVar14 ^ uVar12;
    pauVar15 = (undefined1 (*) [16])&DAT_140e26880;
    do {
      auVar24 = vpalignr_avx(auVar3,auVar2,8);
      auVar25 = vpalignr_avx(auVar7,auVar6,8);
      auVar26 = vpsrlq_avx(auVar24,1);
      uVar18 = (uVar23 >> 0x17 | uVar23 << 0x29) ^ uVar23;
      auVar2 = vpaddq_avx(auVar2,auVar25);
      uVar19 = (uVar11 >> 5 | uVar11 << 0x3b) ^ uVar11;
      auVar29 = vpsrlq_avx(auVar24,7);
      uVar18 = (uVar18 >> 4 | uVar18 << 0x3c) ^ uVar23;
      auVar24 = vpsllq_avx(auVar24,0x38);
      auVar27 = vpsrlq_avx(auVar26,7);
      auVar25 = vpsllq_avx(auVar24,7);
      uVar19 = (uVar19 >> 6 | uVar19 << 0x3a) ^ uVar11;
      lVar17 = uVar20 + local_140._0_8_ + ((uVar22 ^ uVar21) & uVar23 ^ uVar21) +
               (uVar18 >> 0xe | uVar18 << 0x32);
      auVar30 = vpsrlq_avx(auVar9,6);
      uVar13 = uVar13 + lVar17;
      uVar20 = (uVar19 >> 0x1c | uVar19 << 0x24) + lVar17 + (uVar16 & (uVar11 ^ uVar14) ^ uVar14);
      auVar28 = vpsllq_avx(auVar9,3);
      auVar2 = vpaddq_avx(auVar2,auVar29 ^ auVar26 ^ auVar24 ^ auVar27 ^ auVar25);
      auVar24 = vpsrlq_avx(auVar9,0x13);
      uVar16 = (uVar13 >> 0x17 | uVar13 << 0x29) ^ uVar13;
      uVar18 = (uVar20 >> 5 | uVar20 << 0x3b) ^ uVar20;
      auVar26 = vpsllq_avx(auVar28,0x2a);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar13;
      auVar25 = vpsrlq_avx(auVar24,0x2a);
      auVar2 = vpaddq_avx(auVar2,auVar30 ^ auVar28 ^ auVar24 ^ auVar26 ^ auVar25);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar20;
      lVar17 = uVar21 + local_140._8_8_ + ((uVar23 ^ uVar22) & uVar13 ^ uVar22) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      local_140 = vpaddq_avx(auVar2,pauVar15[8]);
      uVar12 = uVar12 + lVar17;
      uVar21 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar11 ^ uVar14) & (uVar20 ^ uVar11) ^ uVar11);
      auVar24 = vpalignr_avx(auVar4,auVar3,8);
      auVar25 = vpalignr_avx(auVar8,auVar7,8);
      auVar26 = vpsrlq_avx(auVar24,1);
      uVar16 = (uVar12 >> 0x17 | uVar12 << 0x29) ^ uVar12;
      auVar3 = vpaddq_avx(auVar3,auVar25);
      uVar18 = (uVar21 >> 5 | uVar21 << 0x3b) ^ uVar21;
      auVar29 = vpsrlq_avx(auVar24,7);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar12;
      auVar24 = vpsllq_avx(auVar24,0x38);
      auVar27 = vpsrlq_avx(auVar26,7);
      auVar25 = vpsllq_avx(auVar24,7);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar21;
      lVar17 = uVar22 + local_130._0_8_ + ((uVar13 ^ uVar23) & uVar12 ^ uVar23) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      auVar30 = vpsrlq_avx(auVar2,6);
      uVar14 = uVar14 + lVar17;
      uVar22 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar20 ^ uVar11) & (uVar21 ^ uVar20) ^ uVar20);
      auVar28 = vpsllq_avx(auVar2,3);
      auVar3 = vpaddq_avx(auVar3,auVar29 ^ auVar26 ^ auVar24 ^ auVar27 ^ auVar25);
      auVar24 = vpsrlq_avx(auVar2,0x13);
      uVar16 = (uVar14 >> 0x17 | uVar14 << 0x29) ^ uVar14;
      uVar18 = (uVar22 >> 5 | uVar22 << 0x3b) ^ uVar22;
      auVar26 = vpsllq_avx(auVar28,0x2a);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar14;
      auVar25 = vpsrlq_avx(auVar24,0x2a);
      auVar3 = vpaddq_avx(auVar3,auVar30 ^ auVar28 ^ auVar24 ^ auVar26 ^ auVar25);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar22;
      lVar17 = uVar23 + local_130._8_8_ + ((uVar12 ^ uVar13) & uVar14 ^ uVar13) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      local_130 = vpaddq_avx(auVar3,pauVar15[10]);
      uVar11 = uVar11 + lVar17;
      uVar23 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar21 ^ uVar20) & (uVar22 ^ uVar21) ^ uVar21);
      auVar24 = vpalignr_avx(auVar5,auVar4,8);
      auVar25 = vpalignr_avx(auVar9,auVar8,8);
      auVar26 = vpsrlq_avx(auVar24,1);
      uVar16 = (uVar11 >> 0x17 | uVar11 << 0x29) ^ uVar11;
      auVar4 = vpaddq_avx(auVar4,auVar25);
      uVar18 = (uVar23 >> 5 | uVar23 << 0x3b) ^ uVar23;
      auVar29 = vpsrlq_avx(auVar24,7);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar11;
      auVar24 = vpsllq_avx(auVar24,0x38);
      auVar27 = vpsrlq_avx(auVar26,7);
      auVar25 = vpsllq_avx(auVar24,7);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar23;
      lVar17 = uVar13 + local_120._0_8_ + ((uVar14 ^ uVar12) & uVar11 ^ uVar12) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      auVar30 = vpsrlq_avx(auVar3,6);
      uVar20 = uVar20 + lVar17;
      uVar13 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar22 ^ uVar21) & (uVar23 ^ uVar22) ^ uVar22);
      auVar28 = vpsllq_avx(auVar3,3);
      auVar4 = vpaddq_avx(auVar4,auVar29 ^ auVar26 ^ auVar24 ^ auVar27 ^ auVar25);
      auVar24 = vpsrlq_avx(auVar3,0x13);
      uVar16 = (uVar20 >> 0x17 | uVar20 << 0x29) ^ uVar20;
      uVar18 = (uVar13 >> 5 | uVar13 << 0x3b) ^ uVar13;
      auVar26 = vpsllq_avx(auVar28,0x2a);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar20;
      auVar25 = vpsrlq_avx(auVar24,0x2a);
      auVar4 = vpaddq_avx(auVar4,auVar30 ^ auVar28 ^ auVar24 ^ auVar26 ^ auVar25);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar13;
      lVar17 = uVar12 + local_120._8_8_ + ((uVar11 ^ uVar14) & uVar20 ^ uVar14) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      local_120 = vpaddq_avx(auVar4,pauVar15[0xc]);
      uVar21 = uVar21 + lVar17;
      uVar12 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar23 ^ uVar22) & (uVar13 ^ uVar23) ^ uVar23);
      auVar24 = vpalignr_avx(auVar6,auVar5,8);
      auVar25 = vpalignr_avx(auVar2,auVar9,8);
      auVar26 = vpsrlq_avx(auVar24,1);
      uVar16 = (uVar21 >> 0x17 | uVar21 << 0x29) ^ uVar21;
      auVar5 = vpaddq_avx(auVar5,auVar25);
      uVar18 = (uVar12 >> 5 | uVar12 << 0x3b) ^ uVar12;
      auVar29 = vpsrlq_avx(auVar24,7);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar21;
      auVar24 = vpsllq_avx(auVar24,0x38);
      auVar27 = vpsrlq_avx(auVar26,7);
      auVar25 = vpsllq_avx(auVar24,7);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar12;
      lVar17 = uVar14 + local_110._0_8_ + ((uVar20 ^ uVar11) & uVar21 ^ uVar11) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      auVar30 = vpsrlq_avx(auVar4,6);
      uVar22 = uVar22 + lVar17;
      uVar14 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar13 ^ uVar23) & (uVar12 ^ uVar13) ^ uVar13);
      auVar28 = vpsllq_avx(auVar4,3);
      auVar5 = vpaddq_avx(auVar5,auVar29 ^ auVar26 ^ auVar24 ^ auVar27 ^ auVar25);
      auVar24 = vpsrlq_avx(auVar4,0x13);
      uVar16 = (uVar22 >> 0x17 | uVar22 << 0x29) ^ uVar22;
      uVar18 = (uVar14 >> 5 | uVar14 << 0x3b) ^ uVar14;
      auVar26 = vpsllq_avx(auVar28,0x2a);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar22;
      auVar25 = vpsrlq_avx(auVar24,0x2a);
      auVar5 = vpaddq_avx(auVar5,auVar30 ^ auVar28 ^ auVar24 ^ auVar26 ^ auVar25);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar14;
      lVar17 = uVar11 + local_110._8_8_ + ((uVar21 ^ uVar20) & uVar22 ^ uVar20) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      local_110 = vpaddq_avx(auVar5,pauVar15[0xe]);
      uVar23 = uVar23 + lVar17;
      uVar11 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar12 ^ uVar13) & (uVar14 ^ uVar12) ^ uVar12);
      auVar24 = vpalignr_avx(auVar7,auVar6,8);
      auVar25 = vpalignr_avx(auVar3,auVar2,8);
      auVar26 = vpsrlq_avx(auVar24,1);
      uVar16 = (uVar23 >> 0x17 | uVar23 << 0x29) ^ uVar23;
      auVar6 = vpaddq_avx(auVar6,auVar25);
      uVar18 = (uVar11 >> 5 | uVar11 << 0x3b) ^ uVar11;
      auVar29 = vpsrlq_avx(auVar24,7);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar23;
      auVar24 = vpsllq_avx(auVar24,0x38);
      auVar27 = vpsrlq_avx(auVar26,7);
      auVar25 = vpsllq_avx(auVar24,7);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar11;
      lVar17 = uVar20 + local_100._0_8_ + ((uVar22 ^ uVar21) & uVar23 ^ uVar21) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      auVar30 = vpsrlq_avx(auVar5,6);
      uVar13 = uVar13 + lVar17;
      uVar20 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar14 ^ uVar12) & (uVar11 ^ uVar14) ^ uVar14);
      auVar28 = vpsllq_avx(auVar5,3);
      auVar6 = vpaddq_avx(auVar6,auVar29 ^ auVar26 ^ auVar24 ^ auVar27 ^ auVar25);
      auVar24 = vpsrlq_avx(auVar5,0x13);
      uVar16 = (uVar13 >> 0x17 | uVar13 << 0x29) ^ uVar13;
      uVar18 = (uVar20 >> 5 | uVar20 << 0x3b) ^ uVar20;
      auVar26 = vpsllq_avx(auVar28,0x2a);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar13;
      auVar25 = vpsrlq_avx(auVar24,0x2a);
      auVar6 = vpaddq_avx(auVar6,auVar30 ^ auVar28 ^ auVar24 ^ auVar26 ^ auVar25);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar20;
      lVar17 = uVar21 + local_100._8_8_ + ((uVar23 ^ uVar22) & uVar13 ^ uVar22) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      local_100 = vpaddq_avx(auVar6,pauVar15[0x10]);
      uVar12 = uVar12 + lVar17;
      uVar21 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar11 ^ uVar14) & (uVar20 ^ uVar11) ^ uVar11);
      auVar24 = vpalignr_avx(auVar8,auVar7,8);
      auVar25 = vpalignr_avx(auVar4,auVar3,8);
      auVar26 = vpsrlq_avx(auVar24,1);
      uVar16 = (uVar12 >> 0x17 | uVar12 << 0x29) ^ uVar12;
      auVar7 = vpaddq_avx(auVar7,auVar25);
      uVar18 = (uVar21 >> 5 | uVar21 << 0x3b) ^ uVar21;
      auVar29 = vpsrlq_avx(auVar24,7);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar12;
      auVar24 = vpsllq_avx(auVar24,0x38);
      auVar27 = vpsrlq_avx(auVar26,7);
      auVar25 = vpsllq_avx(auVar24,7);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar21;
      lVar17 = uVar22 + local_f0._0_8_ + ((uVar13 ^ uVar23) & uVar12 ^ uVar23) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      auVar30 = vpsrlq_avx(auVar6,6);
      uVar14 = uVar14 + lVar17;
      uVar22 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar20 ^ uVar11) & (uVar21 ^ uVar20) ^ uVar20);
      auVar28 = vpsllq_avx(auVar6,3);
      auVar7 = vpaddq_avx(auVar7,auVar29 ^ auVar26 ^ auVar24 ^ auVar27 ^ auVar25);
      auVar24 = vpsrlq_avx(auVar6,0x13);
      uVar16 = (uVar14 >> 0x17 | uVar14 << 0x29) ^ uVar14;
      uVar18 = (uVar22 >> 5 | uVar22 << 0x3b) ^ uVar22;
      auVar26 = vpsllq_avx(auVar28,0x2a);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar14;
      auVar25 = vpsrlq_avx(auVar24,0x2a);
      auVar7 = vpaddq_avx(auVar7,auVar30 ^ auVar28 ^ auVar24 ^ auVar26 ^ auVar25);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar22;
      lVar17 = uVar23 + local_f0._8_8_ + ((uVar12 ^ uVar13) & uVar14 ^ uVar13) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      local_f0 = vpaddq_avx(auVar7,pauVar15[0x12]);
      uVar11 = uVar11 + lVar17;
      uVar23 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar21 ^ uVar20) & (uVar22 ^ uVar21) ^ uVar21);
      auVar24 = vpalignr_avx(auVar9,auVar8,8);
      auVar25 = vpalignr_avx(auVar5,auVar4,8);
      auVar26 = vpsrlq_avx(auVar24,1);
      uVar16 = (uVar11 >> 0x17 | uVar11 << 0x29) ^ uVar11;
      auVar8 = vpaddq_avx(auVar8,auVar25);
      uVar18 = (uVar23 >> 5 | uVar23 << 0x3b) ^ uVar23;
      auVar29 = vpsrlq_avx(auVar24,7);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar11;
      auVar24 = vpsllq_avx(auVar24,0x38);
      auVar27 = vpsrlq_avx(auVar26,7);
      auVar25 = vpsllq_avx(auVar24,7);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar23;
      lVar17 = uVar13 + local_e0._0_8_ + ((uVar14 ^ uVar12) & uVar11 ^ uVar12) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      auVar30 = vpsrlq_avx(auVar7,6);
      uVar20 = uVar20 + lVar17;
      uVar13 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar22 ^ uVar21) & (uVar23 ^ uVar22) ^ uVar22);
      auVar28 = vpsllq_avx(auVar7,3);
      auVar8 = vpaddq_avx(auVar8,auVar29 ^ auVar26 ^ auVar24 ^ auVar27 ^ auVar25);
      auVar24 = vpsrlq_avx(auVar7,0x13);
      uVar16 = (uVar20 >> 0x17 | uVar20 << 0x29) ^ uVar20;
      uVar18 = (uVar13 >> 5 | uVar13 << 0x3b) ^ uVar13;
      auVar26 = vpsllq_avx(auVar28,0x2a);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar20;
      auVar25 = vpsrlq_avx(auVar24,0x2a);
      auVar8 = vpaddq_avx(auVar8,auVar30 ^ auVar28 ^ auVar24 ^ auVar26 ^ auVar25);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar13;
      lVar17 = uVar12 + local_e0._8_8_ + ((uVar11 ^ uVar14) & uVar20 ^ uVar14) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      local_e0 = vpaddq_avx(auVar8,pauVar15[0x14]);
      uVar21 = uVar21 + lVar17;
      uVar12 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar23 ^ uVar22) & (uVar13 ^ uVar23) ^ uVar23);
      auVar24 = vpalignr_avx(auVar2,auVar9,8);
      auVar25 = vpalignr_avx(auVar6,auVar5,8);
      auVar26 = vpsrlq_avx(auVar24,1);
      uVar16 = (uVar21 >> 0x17 | uVar21 << 0x29) ^ uVar21;
      auVar9 = vpaddq_avx(auVar9,auVar25);
      uVar18 = (uVar12 >> 5 | uVar12 << 0x3b) ^ uVar12;
      auVar29 = vpsrlq_avx(auVar24,7);
      uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar21;
      auVar24 = vpsllq_avx(auVar24,0x38);
      auVar27 = vpsrlq_avx(auVar26,7);
      auVar25 = vpsllq_avx(auVar24,7);
      uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar12;
      lVar17 = uVar14 + local_d0._0_8_ + ((uVar20 ^ uVar11) & uVar21 ^ uVar11) +
               (uVar16 >> 0xe | uVar16 << 0x32);
      auVar30 = vpsrlq_avx(auVar8,6);
      uVar22 = uVar22 + lVar17;
      uVar14 = (uVar18 >> 0x1c | uVar18 << 0x24) +
               lVar17 + ((uVar13 ^ uVar23) & (uVar12 ^ uVar13) ^ uVar13);
      auVar28 = vpsllq_avx(auVar8,3);
      auVar9 = vpaddq_avx(auVar9,auVar29 ^ auVar26 ^ auVar24 ^ auVar27 ^ auVar25);
      auVar24 = vpsrlq_avx(auVar8,0x13);
      uVar16 = (uVar22 >> 0x17 | uVar22 << 0x29) ^ uVar22;
      uVar19 = (uVar14 >> 5 | uVar14 << 0x3b) ^ uVar14;
      auVar26 = vpsllq_avx(auVar28,0x2a);
      uVar18 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar22;
      auVar25 = vpsrlq_avx(auVar24,0x2a);
      uVar16 = uVar14 ^ uVar12;
      auVar9 = vpaddq_avx(auVar9,auVar30 ^ auVar28 ^ auVar24 ^ auVar26 ^ auVar25);
      uVar19 = (uVar19 >> 6 | uVar19 << 0x3a) ^ uVar14;
      lVar17 = uVar11 + local_d0._8_8_ + ((uVar21 ^ uVar20) & uVar22 ^ uVar20) +
               (uVar18 >> 0xe | uVar18 << 0x32);
      local_d0 = vpaddq_avx(auVar9,pauVar15[0x16]);
      uVar23 = uVar23 + lVar17;
      uVar11 = (uVar19 >> 0x1c | uVar19 << 0x24) + lVar17 + ((uVar12 ^ uVar13) & uVar16 ^ uVar12);
      pauVar10 = pauVar15 + 0x18;
      pauVar15 = pauVar15 + 0x10;
    } while (*(char *)((longlong)*pauVar10 + 7) != '\0');
    uVar18 = (uVar23 >> 0x17 | uVar23 << 0x29) ^ uVar23;
    uVar19 = (uVar11 >> 5 | uVar11 << 0x3b) ^ uVar11;
    uVar18 = (uVar18 >> 4 | uVar18 << 0x3c) ^ uVar23;
    uVar19 = (uVar19 >> 6 | uVar19 << 0x3a) ^ uVar11;
    lVar17 = uVar20 + local_140._0_8_ + ((uVar22 ^ uVar21) & uVar23 ^ uVar21) +
             (uVar18 >> 0xe | uVar18 << 0x32);
    uVar13 = uVar13 + lVar17;
    uVar20 = (uVar19 >> 0x1c | uVar19 << 0x24) + lVar17 + (uVar16 & (uVar11 ^ uVar14) ^ uVar14);
    uVar16 = (uVar13 >> 0x17 | uVar13 << 0x29) ^ uVar13;
    uVar18 = (uVar20 >> 5 | uVar20 << 0x3b) ^ uVar20;
    uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar13;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar20;
    lVar17 = uVar21 + local_140._8_8_ + ((uVar23 ^ uVar22) & uVar13 ^ uVar22) +
             (uVar16 >> 0xe | uVar16 << 0x32);
    uVar12 = uVar12 + lVar17;
    uVar21 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar11 ^ uVar14) & (uVar20 ^ uVar11) ^ uVar11);
    uVar16 = (uVar12 >> 0x17 | uVar12 << 0x29) ^ uVar12;
    uVar18 = (uVar21 >> 5 | uVar21 << 0x3b) ^ uVar21;
    uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar12;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar21;
    lVar17 = uVar22 + local_130._0_8_ + ((uVar13 ^ uVar23) & uVar12 ^ uVar23) +
             (uVar16 >> 0xe | uVar16 << 0x32);
    uVar14 = uVar14 + lVar17;
    uVar22 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar20 ^ uVar11) & (uVar21 ^ uVar20) ^ uVar20);
    uVar16 = (uVar14 >> 0x17 | uVar14 << 0x29) ^ uVar14;
    uVar18 = (uVar22 >> 5 | uVar22 << 0x3b) ^ uVar22;
    uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar14;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar22;
    lVar17 = uVar23 + local_130._8_8_ + ((uVar12 ^ uVar13) & uVar14 ^ uVar13) +
             (uVar16 >> 0xe | uVar16 << 0x32);
    uVar11 = uVar11 + lVar17;
    uVar23 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar21 ^ uVar20) & (uVar22 ^ uVar21) ^ uVar21);
    uVar16 = (uVar11 >> 0x17 | uVar11 << 0x29) ^ uVar11;
    uVar18 = (uVar23 >> 5 | uVar23 << 0x3b) ^ uVar23;
    uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar11;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar23;
    lVar17 = uVar13 + local_120._0_8_ + ((uVar14 ^ uVar12) & uVar11 ^ uVar12) +
             (uVar16 >> 0xe | uVar16 << 0x32);
    uVar20 = uVar20 + lVar17;
    uVar13 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar22 ^ uVar21) & (uVar23 ^ uVar22) ^ uVar22);
    uVar16 = (uVar20 >> 0x17 | uVar20 << 0x29) ^ uVar20;
    uVar18 = (uVar13 >> 5 | uVar13 << 0x3b) ^ uVar13;
    uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar20;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar13;
    lVar17 = uVar12 + local_120._8_8_ + ((uVar11 ^ uVar14) & uVar20 ^ uVar14) +
             (uVar16 >> 0xe | uVar16 << 0x32);
    uVar21 = uVar21 + lVar17;
    uVar12 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar23 ^ uVar22) & (uVar13 ^ uVar23) ^ uVar23);
    uVar16 = (uVar21 >> 0x17 | uVar21 << 0x29) ^ uVar21;
    uVar18 = (uVar12 >> 5 | uVar12 << 0x3b) ^ uVar12;
    uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar21;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar12;
    lVar17 = uVar14 + local_110._0_8_ + ((uVar20 ^ uVar11) & uVar21 ^ uVar11) +
             (uVar16 >> 0xe | uVar16 << 0x32);
    uVar22 = uVar22 + lVar17;
    uVar14 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar13 ^ uVar23) & (uVar12 ^ uVar13) ^ uVar13);
    uVar16 = (uVar22 >> 0x17 | uVar22 << 0x29) ^ uVar22;
    uVar18 = (uVar14 >> 5 | uVar14 << 0x3b) ^ uVar14;
    uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar22;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar14;
    lVar17 = uVar11 + local_110._8_8_ + ((uVar21 ^ uVar20) & uVar22 ^ uVar20) +
             (uVar16 >> 0xe | uVar16 << 0x32);
    uVar23 = uVar23 + lVar17;
    uVar11 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar12 ^ uVar13) & (uVar14 ^ uVar12) ^ uVar12);
    uVar16 = (uVar23 >> 0x17 | uVar23 << 0x29) ^ uVar23;
    uVar18 = (uVar11 >> 5 | uVar11 << 0x3b) ^ uVar11;
    uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar23;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar11;
    lVar17 = uVar20 + local_100._0_8_ + ((uVar22 ^ uVar21) & uVar23 ^ uVar21) +
             (uVar16 >> 0xe | uVar16 << 0x32);
    uVar13 = uVar13 + lVar17;
    uVar20 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar14 ^ uVar12) & (uVar11 ^ uVar14) ^ uVar14);
    uVar16 = (uVar13 >> 0x17 | uVar13 << 0x29) ^ uVar13;
    uVar18 = (uVar20 >> 5 | uVar20 << 0x3b) ^ uVar20;
    uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar13;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar20;
    lVar17 = uVar21 + local_100._8_8_ + ((uVar23 ^ uVar22) & uVar13 ^ uVar22) +
             (uVar16 >> 0xe | uVar16 << 0x32);
    uVar12 = uVar12 + lVar17;
    uVar21 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar11 ^ uVar14) & (uVar20 ^ uVar11) ^ uVar11);
    uVar16 = (uVar12 >> 0x17 | uVar12 << 0x29) ^ uVar12;
    uVar18 = (uVar21 >> 5 | uVar21 << 0x3b) ^ uVar21;
    uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar12;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar21;
    lVar17 = uVar22 + local_f0._0_8_ + ((uVar13 ^ uVar23) & uVar12 ^ uVar23) +
             (uVar16 >> 0xe | uVar16 << 0x32);
    uVar14 = uVar14 + lVar17;
    uVar22 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar20 ^ uVar11) & (uVar21 ^ uVar20) ^ uVar20);
    uVar16 = (uVar14 >> 0x17 | uVar14 << 0x29) ^ uVar14;
    uVar18 = (uVar22 >> 5 | uVar22 << 0x3b) ^ uVar22;
    uVar16 = (uVar16 >> 4 | uVar16 << 0x3c) ^ uVar14;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar22;
    lVar17 = uVar23 + local_f0._8_8_ + ((uVar12 ^ uVar13) & uVar14 ^ uVar13) +
             (uVar16 >> 0xe | uVar16 << 0x32);
    uVar11 = uVar11 + lVar17;
    uVar16 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar21 ^ uVar20) & (uVar22 ^ uVar21) ^ uVar21);
    uVar23 = (uVar11 >> 0x17 | uVar11 << 0x29) ^ uVar11;
    uVar18 = (uVar16 >> 5 | uVar16 << 0x3b) ^ uVar16;
    uVar23 = (uVar23 >> 4 | uVar23 << 0x3c) ^ uVar11;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar16;
    lVar17 = uVar13 + local_e0._0_8_ + ((uVar14 ^ uVar12) & uVar11 ^ uVar12) +
             (uVar23 >> 0xe | uVar23 << 0x32);
    uVar20 = uVar20 + lVar17;
    uVar13 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar22 ^ uVar21) & (uVar16 ^ uVar22) ^ uVar22);
    uVar23 = (uVar20 >> 0x17 | uVar20 << 0x29) ^ uVar20;
    uVar18 = (uVar13 >> 5 | uVar13 << 0x3b) ^ uVar13;
    uVar23 = (uVar23 >> 4 | uVar23 << 0x3c) ^ uVar20;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar13;
    lVar17 = uVar12 + local_e0._8_8_ + ((uVar11 ^ uVar14) & uVar20 ^ uVar14) +
             (uVar23 >> 0xe | uVar23 << 0x32);
    uVar21 = uVar21 + lVar17;
    uVar12 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar16 ^ uVar22) & (uVar13 ^ uVar16) ^ uVar16);
    uVar23 = (uVar21 >> 0x17 | uVar21 << 0x29) ^ uVar21;
    uVar18 = (uVar12 >> 5 | uVar12 << 0x3b) ^ uVar12;
    uVar23 = (uVar23 >> 4 | uVar23 << 0x3c) ^ uVar21;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar12;
    lVar17 = uVar14 + local_d0._0_8_ + ((uVar20 ^ uVar11) & uVar21 ^ uVar11) +
             (uVar23 >> 0xe | uVar23 << 0x32);
    uVar22 = uVar22 + lVar17;
    uVar14 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar13 ^ uVar16) & (uVar12 ^ uVar13) ^ uVar13);
    uVar23 = (uVar22 >> 0x17 | uVar22 << 0x29) ^ uVar22;
    uVar18 = (uVar14 >> 5 | uVar14 << 0x3b) ^ uVar14;
    uVar23 = (uVar23 >> 4 | uVar23 << 0x3c) ^ uVar22;
    uVar18 = (uVar18 >> 6 | uVar18 << 0x3a) ^ uVar14;
    lVar17 = uVar11 + local_d0._8_8_ + ((uVar21 ^ uVar20) & uVar22 ^ uVar20) +
             (uVar23 >> 0xe | uVar23 << 0x32);
    uVar11 = (uVar18 >> 0x1c | uVar18 << 0x24) +
             lVar17 + ((uVar12 ^ uVar13) & (uVar14 ^ uVar12) ^ uVar12) + *param_1;
    param_2 = param_2 + 8;
    uVar14 = uVar14 + param_1[1];
    uVar12 = uVar12 + param_1[2];
    uVar13 = uVar13 + param_1[3];
    uVar23 = uVar16 + lVar17 + param_1[4];
    uVar22 = uVar22 + param_1[5];
    uVar21 = uVar21 + param_1[6];
    uVar20 = uVar20 + param_1[7];
    *param_1 = uVar11;
    param_1[1] = uVar14;
    param_1[2] = uVar12;
    param_1[3] = uVar13;
    param_1[4] = uVar23;
    param_1[5] = uVar22;
    param_1[6] = uVar21;
    param_1[7] = uVar20;
  } while (param_2 < pauVar1);
  return;
}

// sha512_block_data_order_avx2 @ 140e28fc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void sha512_block_data_order_avx2(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined1 (*pauVar1) [16];
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [24];
  undefined1 (*pauVar25) [24];
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined1 (*pauVar32) [16];
  undefined1 (*pauVar33) [16];
  undefined1 (*pauVar34) [24];
  undefined1 (*pauVar35) [16];
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  undefined1 (*pauVar41) [16];
  ulonglong uVar42;
  longlong lVar43;
  longlong lVar44;
  undefined1 auVar45 [32];
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined1 auVar46 [32];
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined8 unaff_XMM10_Qa;
  undefined8 unaff_XMM10_Qb;
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined8 unaff_XMM11_Qa;
  undefined8 unaff_XMM11_Qb;
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auStack_5b0 [1408];
  
  uVar31 = (ulonglong)auStack_5b0 & 0xfffffffffffff800;
  pauVar1 = (undefined1 (*) [16])(param_2 + param_3 * 0x80);
  pauVar32 = (undefined1 (*) [16])(uVar31 + 0x480);
  *(longlong **)(uVar31 + 0x500) = param_1;
  *(longlong *)(uVar31 + 0x508) = param_2;
  *(undefined1 (**) [16])(uVar31 + 0x510) = pauVar1;
  *(BADSPACEBASE **)(uVar31 + 0x518) = register0x00000020;
  *(undefined8 *)(uVar31 + 0x520) = unaff_XMM6_Qa;
  *(undefined8 *)(uVar31 + 0x528) = unaff_XMM6_Qb;
  *(undefined8 *)(uVar31 + 0x530) = unaff_XMM7_Qa;
  *(undefined8 *)(uVar31 + 0x538) = unaff_XMM7_Qb;
  *(undefined8 *)(uVar31 + 0x540) = unaff_XMM8_Qa;
  *(undefined8 *)(uVar31 + 0x548) = unaff_XMM8_Qb;
  *(undefined8 *)(uVar31 + 0x550) = unaff_XMM9_Qa;
  *(undefined8 *)(uVar31 + 0x558) = unaff_XMM9_Qb;
  *(undefined8 *)(uVar31 + 0x560) = unaff_XMM10_Qa;
  *(undefined8 *)(uVar31 + 0x568) = unaff_XMM10_Qb;
  *(undefined8 *)(uVar31 + 0x570) = unaff_XMM11_Qa;
  *(undefined8 *)(uVar31 + 0x578) = unaff_XMM11_Qb;
  pauVar35 = (undefined1 (*) [16])(param_2 + 0x80);
  lVar27 = *param_1;
  uVar30 = param_1[1];
  uVar28 = param_1[2];
  pauVar41 = pauVar35;
  if (pauVar35 == pauVar1) {
    pauVar41 = (undefined1 (*) [16])(uVar31 + 0x480);
  }
  uVar29 = param_1[3];
  uVar37 = param_1[4];
  uVar38 = param_1[5];
  uVar39 = param_1[6];
  uVar40 = param_1[7];
  do {
    auVar48._16_16_ = ZEXT116(1) * *pauVar41;
    auVar48._0_16_ = ZEXT116(0) * *pauVar41 | ZEXT116(1) * pauVar35[-8];
    auVar45._16_16_ = ZEXT116(1) * pauVar41[1];
    auVar45._0_16_ = ZEXT116(0) * pauVar41[1] | ZEXT116(1) * pauVar35[-7];
    auVar16 = vpshufb_avx2(auVar48,_DAT_140e26d00);
    auVar47._16_16_ = ZEXT116(1) * pauVar41[2];
    auVar47._0_16_ = ZEXT116(0) * pauVar41[2] | ZEXT116(1) * pauVar35[-6];
    auVar17 = vpshufb_avx2(auVar45,_DAT_140e26d00);
    auVar49._16_16_ = ZEXT116(1) * pauVar41[3];
    auVar49._0_16_ = ZEXT116(0) * pauVar41[3] | ZEXT116(1) * pauVar35[-5];
    auVar18 = vpshufb_avx2(auVar47,_DAT_140e26d00);
    auVar50._16_16_ = ZEXT116(1) * pauVar41[4];
    auVar50._0_16_ = ZEXT116(0) * pauVar41[4] | ZEXT116(1) * pauVar35[-4];
    auVar19 = vpshufb_avx2(auVar49,_DAT_140e26d00);
    auVar51._16_16_ = ZEXT116(1) * pauVar41[5];
    auVar51._0_16_ = ZEXT116(0) * pauVar41[5] | ZEXT116(1) * pauVar35[-3];
    auVar20 = vpshufb_avx2(auVar50,_DAT_140e26d00);
    auVar52._16_16_ = ZEXT116(1) * pauVar41[6];
    auVar52._0_16_ = ZEXT116(0) * pauVar41[6] | ZEXT116(1) * pauVar35[-2];
    auVar21 = vpshufb_avx2(auVar51,_DAT_140e26d00);
    auVar46._16_16_ = ZEXT116(1) * pauVar41[7];
    auVar46._0_16_ = ZEXT116(0) * pauVar41[7] | ZEXT116(1) * pauVar35[-1];
    lVar3 = auVar16._8_8_ + DAT_140e26808;
    lVar7 = auVar16._16_8_ + DAT_140e26810;
    lVar11 = auVar16._24_8_ + DAT_140e26818;
    auVar22 = vpshufb_avx2(auVar52,_DAT_140e26d00);
    lVar26 = auVar17._0_8_ + DAT_140e26820;
    lVar4 = auVar17._8_8_ + DAT_140e26828;
    lVar8 = auVar17._16_8_ + DAT_140e26830;
    lVar12 = auVar17._24_8_ + DAT_140e26838;
    auVar23 = vpshufb_avx2(auVar46,_DAT_140e26d00);
    lVar43 = auVar18._0_8_ + DAT_140e26840;
    lVar5 = auVar18._8_8_ + DAT_140e26848;
    lVar9 = auVar18._16_8_ + DAT_140e26850;
    lVar13 = auVar18._24_8_ + DAT_140e26858;
    lVar44 = auVar19._0_8_ + DAT_140e26860;
    lVar6 = auVar19._8_8_ + DAT_140e26868;
    lVar10 = auVar19._16_8_ + DAT_140e26870;
    lVar14 = auVar19._24_8_ + DAT_140e26878;
    *(longlong *)*pauVar32 = auVar16._0_8_ + K512;
    *(longlong *)(*pauVar32 + 8) = lVar3;
    *(longlong *)pauVar32[1] = lVar7;
    *(longlong *)(pauVar32[1] + 8) = lVar11;
    lVar3 = auVar20._0_8_ + DAT_140e26880;
    lVar7 = auVar20._8_8_ + DAT_140e26888;
    lVar11 = auVar20._16_8_ + DAT_140e26890;
    lVar15 = auVar20._24_8_ + DAT_140e26898;
    *(longlong *)pauVar32[2] = lVar26;
    *(longlong *)(pauVar32[2] + 8) = lVar4;
    *(longlong *)pauVar32[3] = lVar8;
    *(longlong *)(pauVar32[3] + 8) = lVar12;
    lVar26 = auVar21._0_8_ + DAT_140e268a0;
    lVar4 = auVar21._8_8_ + DAT_140e268a8;
    lVar8 = auVar21._16_8_ + DAT_140e268b0;
    lVar12 = auVar21._24_8_ + DAT_140e268b8;
    *(longlong *)pauVar32[4] = lVar43;
    *(longlong *)(pauVar32[4] + 8) = lVar5;
    *(longlong *)pauVar32[5] = lVar9;
    *(longlong *)(pauVar32[5] + 8) = lVar13;
    lVar43 = auVar22._0_8_ + DAT_140e268c0;
    lVar5 = auVar22._8_8_ + DAT_140e268c8;
    lVar9 = auVar22._16_8_ + DAT_140e268d0;
    lVar13 = auVar22._24_8_ + DAT_140e268d8;
    *(longlong *)pauVar32[6] = lVar44;
    *(longlong *)(pauVar32[6] + 8) = lVar6;
    *(longlong *)pauVar32[7] = lVar10;
    *(longlong *)(pauVar32[7] + 8) = lVar14;
    lVar44 = auVar23._0_8_ + DAT_140e268e0;
    lVar6 = auVar23._8_8_ + DAT_140e268e8;
    lVar10 = auVar23._16_8_ + DAT_140e268f0;
    lVar14 = auVar23._24_8_ + DAT_140e268f8;
    *(longlong *)pauVar32[-8] = lVar3;
    *(longlong *)(pauVar32[-8] + 8) = lVar7;
    *(longlong *)pauVar32[-7] = lVar11;
    *(longlong *)(pauVar32[-7] + 8) = lVar15;
    uVar42 = 0;
    *(longlong *)pauVar32[-6] = lVar26;
    *(longlong *)(pauVar32[-6] + 8) = lVar4;
    *(longlong *)pauVar32[-5] = lVar8;
    *(longlong *)(pauVar32[-5] + 8) = lVar12;
    *(longlong *)pauVar32[-4] = lVar43;
    *(longlong *)(pauVar32[-4] + 8) = lVar5;
    *(longlong *)pauVar32[-3] = lVar9;
    *(longlong *)(pauVar32[-3] + 8) = lVar13;
    uVar36 = uVar30 ^ uVar28;
    *(longlong *)pauVar32[-2] = lVar44;
    *(longlong *)(pauVar32[-2] + 8) = lVar6;
    *(longlong *)pauVar32[-1] = lVar10;
    *(longlong *)(pauVar32[-1] + 8) = lVar14;
    pauVar1 = pauVar32 + -8;
    pauVar34 = (undefined1 (*) [24])&DAT_140e26980;
    do {
      pauVar33 = pauVar1;
      auVar48 = vpalignr_avx2(auVar17,auVar16,8);
      auVar45 = vpalignr_avx2(auVar21,auVar20,8);
      uVar42 = lVar27 + uVar42;
      auVar49 = vpsrlq_avx2(auVar48,1);
      lVar26 = auVar16._8_8_;
      lVar43 = auVar16._16_8_;
      lVar44 = auVar16._24_8_;
      auVar51 = vpsrlq_avx2(auVar48,7);
      auVar47 = vpsllq_avx2(auVar48,0x38);
      lVar27 = uVar40 + *(longlong *)pauVar33[8] + (uVar38 & uVar37) + (~uVar37 & uVar39) +
               ((uVar37 >> 0x29 | uVar37 << 0x17) ^ (uVar37 >> 0x12 | uVar37 << 0x2e) ^
               (uVar37 >> 0xe | uVar37 << 0x32));
      auVar50 = vpsrlq_avx2(auVar49,7);
      uVar29 = uVar29 + lVar27;
      auVar48 = vpsllq_avx2(auVar47,7);
      auVar52 = vpsrlq_avx2(auVar23,6);
      auVar48 = auVar51 ^ auVar49 ^ auVar47 ^ auVar50 ^ auVar48;
      auVar50 = vpsllq_avx2(auVar23,3);
      auVar49 = vpsrlq_avx2(auVar23,0x13);
      uVar40 = lVar27 + (uVar36 & (uVar42 ^ uVar30) ^ uVar30) +
               ((uVar42 >> 0x22 | uVar42 * 0x40000000) ^ (uVar42 >> 0x27 | uVar42 * 0x2000000) ^
               (uVar42 >> 0x1c | uVar42 << 0x24));
      auVar51 = vpsllq_avx2(auVar50,0x2a);
      auVar47 = vpsrlq_avx2(auVar49,0x2a);
      auVar47 = auVar52 ^ auVar50 ^ auVar49 ^ auVar51 ^ auVar47;
      lVar27 = uVar39 + *(longlong *)(pauVar33[8] + 8) + (uVar37 & uVar29) + (~uVar29 & uVar38) +
               ((uVar29 >> 0x29 | uVar29 * 0x800000) ^ (uVar29 >> 0x12 | uVar29 << 0x2e) ^
               (uVar29 >> 0xe | uVar29 << 0x32));
      auVar16._0_8_ = auVar16._0_8_ + auVar45._0_8_ + auVar48._0_8_ + auVar47._0_8_;
      auVar16._8_8_ = lVar26 + auVar45._8_8_ + auVar48._8_8_ + auVar47._8_8_;
      auVar16._16_8_ = lVar43 + auVar45._16_8_ + auVar48._16_8_ + auVar47._16_8_;
      auVar16._24_8_ = lVar44 + auVar45._24_8_ + auVar48._24_8_ + auVar47._24_8_;
      uVar28 = uVar28 + lVar27;
      lVar43 = *(longlong *)pauVar34[-5];
      auVar24 = *(undefined1 (*) [24])((longlong)pauVar34[-6] + 0x10);
      lVar26 = *(longlong *)((longlong)pauVar34[-5] + 0x10);
      *(longlong *)pauVar33[-8] =
           auVar16._0_8_ + *(longlong *)*(undefined1 (*) [24])((longlong)pauVar34[-6] + 0x10);
      *(longlong *)(pauVar33[-8] + 8) = auVar16._8_8_ + lVar43;
      *(longlong *)pauVar33[-7] = auVar16._16_8_ + auVar24._16_8_;
      *(longlong *)(pauVar33[-7] + 8) = auVar16._24_8_ + lVar26;
      auVar48 = vpalignr_avx2(auVar18,auVar17,8);
      auVar45 = vpalignr_avx2(auVar22,auVar21,8);
      uVar39 = lVar27 + ((uVar42 ^ uVar30) & (uVar40 ^ uVar42) ^ uVar42) +
               ((uVar40 >> 0x22 | uVar40 * 0x40000000) ^ (uVar40 >> 0x27 | uVar40 * 0x2000000) ^
               (uVar40 >> 0x1c | uVar40 << 0x24));
      auVar49 = vpsrlq_avx2(auVar48,1);
      lVar26 = auVar17._8_8_;
      lVar43 = auVar17._16_8_;
      lVar44 = auVar17._24_8_;
      auVar51 = vpsrlq_avx2(auVar48,7);
      auVar47 = vpsllq_avx2(auVar48,0x38);
      lVar27 = uVar38 + *(longlong *)pauVar33[10] + (uVar29 & uVar28) + (~uVar28 & uVar37) +
               ((uVar28 >> 0x29 | uVar28 * 0x800000) ^ (uVar28 >> 0x12 | uVar28 << 0x2e) ^
               (uVar28 >> 0xe | uVar28 << 0x32));
      auVar50 = vpsrlq_avx2(auVar49,7);
      uVar30 = uVar30 + lVar27;
      auVar48 = vpsllq_avx2(auVar47,7);
      auVar52 = vpsrlq_avx2(auVar16,6);
      auVar48 = auVar51 ^ auVar49 ^ auVar47 ^ auVar50 ^ auVar48;
      auVar50 = vpsllq_avx2(auVar16,3);
      auVar49 = vpsrlq_avx2(auVar16,0x13);
      uVar38 = lVar27 + ((uVar40 ^ uVar42) & (uVar39 ^ uVar40) ^ uVar40) +
               ((uVar39 >> 0x22 | uVar39 * 0x40000000) ^ (uVar39 >> 0x27 | uVar39 * 0x2000000) ^
               (uVar39 >> 0x1c | uVar39 << 0x24));
      auVar51 = vpsllq_avx2(auVar50,0x2a);
      auVar47 = vpsrlq_avx2(auVar49,0x2a);
      auVar47 = auVar52 ^ auVar50 ^ auVar49 ^ auVar51 ^ auVar47;
      lVar27 = uVar37 + *(longlong *)(pauVar33[10] + 8) + (uVar28 & uVar30) + (~uVar30 & uVar29) +
               ((uVar30 >> 0x29 | uVar30 * 0x800000) ^ (uVar30 >> 0x12 | uVar30 << 0x2e) ^
               (uVar30 >> 0xe | uVar30 << 0x32));
      auVar17._0_8_ = auVar17._0_8_ + auVar45._0_8_ + auVar48._0_8_ + auVar47._0_8_;
      auVar17._8_8_ = lVar26 + auVar45._8_8_ + auVar48._8_8_ + auVar47._8_8_;
      auVar17._16_8_ = lVar43 + auVar45._16_8_ + auVar48._16_8_ + auVar47._16_8_;
      auVar17._24_8_ = lVar44 + auVar45._24_8_ + auVar48._24_8_ + auVar47._24_8_;
      uVar42 = uVar42 + lVar27;
      lVar43 = *(longlong *)((longlong)pauVar34[-4] + 8);
      auVar24 = pauVar34[-4];
      lVar26 = *(longlong *)pauVar34[-3];
      *(longlong *)pauVar33[-6] = auVar17._0_8_ + *(longlong *)pauVar34[-4];
      *(longlong *)(pauVar33[-6] + 8) = auVar17._8_8_ + lVar43;
      *(longlong *)pauVar33[-5] = auVar17._16_8_ + auVar24._16_8_;
      *(longlong *)(pauVar33[-5] + 8) = auVar17._24_8_ + lVar26;
      auVar48 = vpalignr_avx2(auVar19,auVar18,8);
      auVar45 = vpalignr_avx2(auVar23,auVar22,8);
      uVar37 = lVar27 + ((uVar39 ^ uVar40) & (uVar38 ^ uVar39) ^ uVar39) +
               ((uVar38 >> 0x22 | uVar38 * 0x40000000) ^ (uVar38 >> 0x27 | uVar38 * 0x2000000) ^
               (uVar38 >> 0x1c | uVar38 << 0x24));
      auVar49 = vpsrlq_avx2(auVar48,1);
      lVar26 = auVar18._8_8_;
      lVar43 = auVar18._16_8_;
      lVar44 = auVar18._24_8_;
      auVar51 = vpsrlq_avx2(auVar48,7);
      auVar47 = vpsllq_avx2(auVar48,0x38);
      lVar27 = uVar29 + *(longlong *)pauVar33[0xc] + (uVar30 & uVar42) + (~uVar42 & uVar28) +
               ((uVar42 >> 0x29 | uVar42 * 0x800000) ^ (uVar42 >> 0x12 | uVar42 << 0x2e) ^
               (uVar42 >> 0xe | uVar42 << 0x32));
      auVar50 = vpsrlq_avx2(auVar49,7);
      uVar40 = uVar40 + lVar27;
      auVar48 = vpsllq_avx2(auVar47,7);
      auVar52 = vpsrlq_avx2(auVar17,6);
      auVar48 = auVar51 ^ auVar49 ^ auVar47 ^ auVar50 ^ auVar48;
      auVar50 = vpsllq_avx2(auVar17,3);
      auVar49 = vpsrlq_avx2(auVar17,0x13);
      uVar29 = lVar27 + ((uVar38 ^ uVar39) & (uVar37 ^ uVar38) ^ uVar38) +
               ((uVar37 >> 0x22 | uVar37 * 0x40000000) ^ (uVar37 >> 0x27 | uVar37 * 0x2000000) ^
               (uVar37 >> 0x1c | uVar37 << 0x24));
      auVar51 = vpsllq_avx2(auVar50,0x2a);
      auVar47 = vpsrlq_avx2(auVar49,0x2a);
      auVar47 = auVar52 ^ auVar50 ^ auVar49 ^ auVar51 ^ auVar47;
      lVar27 = uVar28 + *(longlong *)(pauVar33[0xc] + 8) + (uVar42 & uVar40) + (~uVar40 & uVar30) +
               ((uVar40 >> 0x29 | uVar40 * 0x800000) ^ (uVar40 >> 0x12 | uVar40 << 0x2e) ^
               (uVar40 >> 0xe | uVar40 << 0x32));
      auVar18._0_8_ = auVar18._0_8_ + auVar45._0_8_ + auVar48._0_8_ + auVar47._0_8_;
      auVar18._8_8_ = lVar26 + auVar45._8_8_ + auVar48._8_8_ + auVar47._8_8_;
      auVar18._16_8_ = lVar43 + auVar45._16_8_ + auVar48._16_8_ + auVar47._16_8_;
      auVar18._24_8_ = lVar44 + auVar45._24_8_ + auVar48._24_8_ + auVar47._24_8_;
      uVar39 = uVar39 + lVar27;
      lVar43 = *(longlong *)((longlong)pauVar34[-3] + 0x10);
      auVar24 = *(undefined1 (*) [24])((longlong)pauVar34[-3] + 8);
      lVar26 = *(longlong *)((longlong)pauVar34[-2] + 8);
      *(longlong *)pauVar33[-4] =
           auVar18._0_8_ + *(longlong *)*(undefined1 (*) [24])((longlong)pauVar34[-3] + 8);
      *(longlong *)(pauVar33[-4] + 8) = auVar18._8_8_ + lVar43;
      *(longlong *)pauVar33[-3] = auVar18._16_8_ + auVar24._16_8_;
      *(longlong *)(pauVar33[-3] + 8) = auVar18._24_8_ + lVar26;
      auVar48 = vpalignr_avx2(auVar20,auVar19,8);
      auVar45 = vpalignr_avx2(auVar16,auVar23,8);
      uVar28 = lVar27 + ((uVar37 ^ uVar38) & (uVar29 ^ uVar37) ^ uVar37) +
               ((uVar29 >> 0x22 | uVar29 * 0x40000000) ^ (uVar29 >> 0x27 | uVar29 * 0x2000000) ^
               (uVar29 >> 0x1c | uVar29 << 0x24));
      auVar49 = vpsrlq_avx2(auVar48,1);
      lVar26 = auVar19._8_8_;
      lVar43 = auVar19._16_8_;
      lVar44 = auVar19._24_8_;
      auVar51 = vpsrlq_avx2(auVar48,7);
      auVar47 = vpsllq_avx2(auVar48,0x38);
      lVar27 = uVar30 + *(longlong *)pauVar33[0xe] + (uVar40 & uVar39) + (~uVar39 & uVar42) +
               ((uVar39 >> 0x29 | uVar39 * 0x800000) ^ (uVar39 >> 0x12 | uVar39 << 0x2e) ^
               (uVar39 >> 0xe | uVar39 << 0x32));
      auVar50 = vpsrlq_avx2(auVar49,7);
      uVar38 = uVar38 + lVar27;
      auVar48 = vpsllq_avx2(auVar47,7);
      auVar52 = vpsrlq_avx2(auVar18,6);
      auVar48 = auVar51 ^ auVar49 ^ auVar47 ^ auVar50 ^ auVar48;
      auVar50 = vpsllq_avx2(auVar18,3);
      auVar49 = vpsrlq_avx2(auVar18,0x13);
      uVar30 = lVar27 + ((uVar29 ^ uVar37) & (uVar28 ^ uVar29) ^ uVar29) +
               ((uVar28 >> 0x22 | uVar28 * 0x40000000) ^ (uVar28 >> 0x27 | uVar28 * 0x2000000) ^
               (uVar28 >> 0x1c | uVar28 << 0x24));
      auVar51 = vpsllq_avx2(auVar50,0x2a);
      auVar47 = vpsrlq_avx2(auVar49,0x2a);
      auVar47 = auVar52 ^ auVar50 ^ auVar49 ^ auVar51 ^ auVar47;
      lVar27 = uVar42 + *(longlong *)(pauVar33[0xe] + 8) + (uVar39 & uVar38) + (~uVar38 & uVar40) +
               ((uVar38 >> 0x29 | uVar38 * 0x800000) ^ (uVar38 >> 0x12 | uVar38 << 0x2e) ^
               (uVar38 >> 0xe | uVar38 << 0x32));
      auVar19._0_8_ = auVar19._0_8_ + auVar45._0_8_ + auVar48._0_8_ + auVar47._0_8_;
      auVar19._8_8_ = lVar26 + auVar45._8_8_ + auVar48._8_8_ + auVar47._8_8_;
      auVar19._16_8_ = lVar43 + auVar45._16_8_ + auVar48._16_8_ + auVar47._16_8_;
      auVar19._24_8_ = lVar44 + auVar45._24_8_ + auVar48._24_8_ + auVar47._24_8_;
      uVar37 = uVar37 + lVar27;
      lVar43 = *(longlong *)pauVar34[-1];
      auVar24 = *(undefined1 (*) [24])((longlong)pauVar34[-2] + 0x10);
      lVar26 = *(longlong *)((longlong)pauVar34[-1] + 0x10);
      *(longlong *)pauVar33[-2] =
           auVar19._0_8_ + *(longlong *)*(undefined1 (*) [24])((longlong)pauVar34[-2] + 0x10);
      *(longlong *)(pauVar33[-2] + 8) = auVar19._8_8_ + lVar43;
      *(longlong *)pauVar33[-1] = auVar19._16_8_ + auVar24._16_8_;
      *(longlong *)(pauVar33[-1] + 8) = auVar19._24_8_ + lVar26;
      pauVar1 = pauVar33 + -0x10;
      auVar48 = vpalignr_avx2(auVar21,auVar20,8);
      auVar45 = vpalignr_avx2(auVar17,auVar16,8);
      uVar42 = lVar27 + ((uVar28 ^ uVar29) & (uVar30 ^ uVar28) ^ uVar28) +
               ((uVar30 >> 0x22 | uVar30 * 0x40000000) ^ (uVar30 >> 0x27 | uVar30 * 0x2000000) ^
               (uVar30 >> 0x1c | uVar30 << 0x24));
      auVar49 = vpsrlq_avx2(auVar48,1);
      lVar26 = auVar20._8_8_;
      lVar43 = auVar20._16_8_;
      lVar44 = auVar20._24_8_;
      auVar51 = vpsrlq_avx2(auVar48,7);
      auVar47 = vpsllq_avx2(auVar48,0x38);
      lVar27 = uVar40 + *(longlong *)*pauVar33 + (uVar38 & uVar37) + (~uVar37 & uVar39) +
               ((uVar37 >> 0x29 | uVar37 * 0x800000) ^ (uVar37 >> 0x12 | uVar37 << 0x2e) ^
               (uVar37 >> 0xe | uVar37 << 0x32));
      auVar50 = vpsrlq_avx2(auVar49,7);
      uVar29 = uVar29 + lVar27;
      auVar48 = vpsllq_avx2(auVar47,7);
      auVar52 = vpsrlq_avx2(auVar19,6);
      auVar48 = auVar51 ^ auVar49 ^ auVar47 ^ auVar50 ^ auVar48;
      auVar50 = vpsllq_avx2(auVar19,3);
      auVar49 = vpsrlq_avx2(auVar19,0x13);
      uVar40 = lVar27 + ((uVar30 ^ uVar28) & (uVar42 ^ uVar30) ^ uVar30) +
               ((uVar42 >> 0x22 | uVar42 * 0x40000000) ^ (uVar42 >> 0x27 | uVar42 * 0x2000000) ^
               (uVar42 >> 0x1c | uVar42 << 0x24));
      auVar51 = vpsllq_avx2(auVar50,0x2a);
      auVar47 = vpsrlq_avx2(auVar49,0x2a);
      auVar47 = auVar52 ^ auVar50 ^ auVar49 ^ auVar51 ^ auVar47;
      lVar27 = uVar39 + *(longlong *)(*pauVar33 + 8) + (uVar37 & uVar29) + (~uVar29 & uVar38) +
               ((uVar29 >> 0x29 | uVar29 * 0x800000) ^ (uVar29 >> 0x12 | uVar29 << 0x2e) ^
               (uVar29 >> 0xe | uVar29 << 0x32));
      auVar20._0_8_ = auVar20._0_8_ + auVar45._0_8_ + auVar48._0_8_ + auVar47._0_8_;
      auVar20._8_8_ = lVar26 + auVar45._8_8_ + auVar48._8_8_ + auVar47._8_8_;
      auVar20._16_8_ = lVar43 + auVar45._16_8_ + auVar48._16_8_ + auVar47._16_8_;
      auVar20._24_8_ = lVar44 + auVar45._24_8_ + auVar48._24_8_ + auVar47._24_8_;
      uVar28 = uVar28 + lVar27;
      lVar43 = *(longlong *)((longlong)*pauVar34 + 8);
      auVar24 = *pauVar34;
      lVar26 = *(longlong *)pauVar34[1];
      *(longlong *)*pauVar1 = auVar20._0_8_ + *(longlong *)*pauVar34;
      *(longlong *)(pauVar33[-0x10] + 8) = auVar20._8_8_ + lVar43;
      *(longlong *)pauVar33[-0xf] = auVar20._16_8_ + auVar24._16_8_;
      *(longlong *)(pauVar33[-0xf] + 8) = auVar20._24_8_ + lVar26;
      auVar48 = vpalignr_avx2(auVar22,auVar21,8);
      auVar45 = vpalignr_avx2(auVar18,auVar17,8);
      uVar39 = lVar27 + ((uVar42 ^ uVar30) & (uVar40 ^ uVar42) ^ uVar42) +
               ((uVar40 >> 0x22 | uVar40 * 0x40000000) ^ (uVar40 >> 0x27 | uVar40 * 0x2000000) ^
               (uVar40 >> 0x1c | uVar40 << 0x24));
      auVar49 = vpsrlq_avx2(auVar48,1);
      lVar26 = auVar21._8_8_;
      lVar43 = auVar21._16_8_;
      lVar44 = auVar21._24_8_;
      auVar51 = vpsrlq_avx2(auVar48,7);
      auVar47 = vpsllq_avx2(auVar48,0x38);
      lVar27 = uVar38 + *(longlong *)pauVar33[2] + (uVar29 & uVar28) + (~uVar28 & uVar37) +
               ((uVar28 >> 0x29 | uVar28 * 0x800000) ^ (uVar28 >> 0x12 | uVar28 << 0x2e) ^
               (uVar28 >> 0xe | uVar28 << 0x32));
      auVar50 = vpsrlq_avx2(auVar49,7);
      uVar30 = uVar30 + lVar27;
      auVar48 = vpsllq_avx2(auVar47,7);
      auVar52 = vpsrlq_avx2(auVar20,6);
      auVar48 = auVar51 ^ auVar49 ^ auVar47 ^ auVar50 ^ auVar48;
      auVar50 = vpsllq_avx2(auVar20,3);
      auVar49 = vpsrlq_avx2(auVar20,0x13);
      uVar38 = lVar27 + ((uVar40 ^ uVar42) & (uVar39 ^ uVar40) ^ uVar40) +
               ((uVar39 >> 0x22 | uVar39 * 0x40000000) ^ (uVar39 >> 0x27 | uVar39 * 0x2000000) ^
               (uVar39 >> 0x1c | uVar39 << 0x24));
      auVar51 = vpsllq_avx2(auVar50,0x2a);
      auVar47 = vpsrlq_avx2(auVar49,0x2a);
      auVar47 = auVar52 ^ auVar50 ^ auVar49 ^ auVar51 ^ auVar47;
      lVar27 = uVar37 + *(longlong *)(pauVar33[2] + 8) + (uVar28 & uVar30) + (~uVar30 & uVar29) +
               ((uVar30 >> 0x29 | uVar30 * 0x800000) ^ (uVar30 >> 0x12 | uVar30 << 0x2e) ^
               (uVar30 >> 0xe | uVar30 << 0x32));
      auVar21._0_8_ = auVar21._0_8_ + auVar45._0_8_ + auVar48._0_8_ + auVar47._0_8_;
      auVar21._8_8_ = lVar26 + auVar45._8_8_ + auVar48._8_8_ + auVar47._8_8_;
      auVar21._16_8_ = lVar43 + auVar45._16_8_ + auVar48._16_8_ + auVar47._16_8_;
      auVar21._24_8_ = lVar44 + auVar45._24_8_ + auVar48._24_8_ + auVar47._24_8_;
      uVar42 = uVar42 + lVar27;
      lVar43 = *(longlong *)((longlong)pauVar34[1] + 0x10);
      auVar24 = *(undefined1 (*) [24])((longlong)pauVar34[1] + 8);
      lVar26 = *(longlong *)((longlong)pauVar34[2] + 8);
      *(longlong *)pauVar33[-0xe] =
           auVar21._0_8_ + *(longlong *)*(undefined1 (*) [24])((longlong)pauVar34[1] + 8);
      *(longlong *)(pauVar33[-0xe] + 8) = auVar21._8_8_ + lVar43;
      *(longlong *)pauVar33[-0xd] = auVar21._16_8_ + auVar24._16_8_;
      *(longlong *)(pauVar33[-0xd] + 8) = auVar21._24_8_ + lVar26;
      auVar48 = vpalignr_avx2(auVar23,auVar22,8);
      auVar45 = vpalignr_avx2(auVar19,auVar18,8);
      uVar37 = lVar27 + ((uVar39 ^ uVar40) & (uVar38 ^ uVar39) ^ uVar39) +
               ((uVar38 >> 0x22 | uVar38 * 0x40000000) ^ (uVar38 >> 0x27 | uVar38 * 0x2000000) ^
               (uVar38 >> 0x1c | uVar38 << 0x24));
      auVar49 = vpsrlq_avx2(auVar48,1);
      lVar26 = auVar22._8_8_;
      lVar43 = auVar22._16_8_;
      lVar44 = auVar22._24_8_;
      auVar51 = vpsrlq_avx2(auVar48,7);
      auVar47 = vpsllq_avx2(auVar48,0x38);
      lVar27 = uVar29 + *(longlong *)pauVar33[4] + (uVar30 & uVar42) + (~uVar42 & uVar28) +
               ((uVar42 >> 0x29 | uVar42 * 0x800000) ^ (uVar42 >> 0x12 | uVar42 << 0x2e) ^
               (uVar42 >> 0xe | uVar42 << 0x32));
      auVar50 = vpsrlq_avx2(auVar49,7);
      uVar40 = uVar40 + lVar27;
      auVar48 = vpsllq_avx2(auVar47,7);
      auVar52 = vpsrlq_avx2(auVar21,6);
      auVar48 = auVar51 ^ auVar49 ^ auVar47 ^ auVar50 ^ auVar48;
      auVar50 = vpsllq_avx2(auVar21,3);
      auVar49 = vpsrlq_avx2(auVar21,0x13);
      uVar29 = lVar27 + ((uVar38 ^ uVar39) & (uVar37 ^ uVar38) ^ uVar38) +
               ((uVar37 >> 0x22 | uVar37 * 0x40000000) ^ (uVar37 >> 0x27 | uVar37 * 0x2000000) ^
               (uVar37 >> 0x1c | uVar37 << 0x24));
      auVar51 = vpsllq_avx2(auVar50,0x2a);
      auVar47 = vpsrlq_avx2(auVar49,0x2a);
      auVar47 = auVar52 ^ auVar50 ^ auVar49 ^ auVar51 ^ auVar47;
      lVar27 = uVar28 + *(longlong *)(pauVar33[4] + 8) + (uVar42 & uVar40) + (~uVar40 & uVar30) +
               ((uVar40 >> 0x29 | uVar40 * 0x800000) ^ (uVar40 >> 0x12 | uVar40 << 0x2e) ^
               (uVar40 >> 0xe | uVar40 << 0x32));
      auVar22._0_8_ = auVar22._0_8_ + auVar45._0_8_ + auVar48._0_8_ + auVar47._0_8_;
      auVar22._8_8_ = lVar26 + auVar45._8_8_ + auVar48._8_8_ + auVar47._8_8_;
      auVar22._16_8_ = lVar43 + auVar45._16_8_ + auVar48._16_8_ + auVar47._16_8_;
      auVar22._24_8_ = lVar44 + auVar45._24_8_ + auVar48._24_8_ + auVar47._24_8_;
      uVar39 = uVar39 + lVar27;
      lVar43 = *(longlong *)pauVar34[3];
      auVar24 = *(undefined1 (*) [24])((longlong)pauVar34[2] + 0x10);
      lVar26 = *(longlong *)((longlong)pauVar34[3] + 0x10);
      *(longlong *)pauVar33[-0xc] =
           auVar22._0_8_ + *(longlong *)*(undefined1 (*) [24])((longlong)pauVar34[2] + 0x10);
      *(longlong *)(pauVar33[-0xc] + 8) = auVar22._8_8_ + lVar43;
      *(longlong *)pauVar33[-0xb] = auVar22._16_8_ + auVar24._16_8_;
      *(longlong *)(pauVar33[-0xb] + 8) = auVar22._24_8_ + lVar26;
      auVar48 = vpalignr_avx2(auVar16,auVar23,8);
      auVar45 = vpalignr_avx2(auVar20,auVar19,8);
      uVar28 = lVar27 + ((uVar37 ^ uVar38) & (uVar29 ^ uVar37) ^ uVar37) +
               ((uVar29 >> 0x22 | uVar29 * 0x40000000) ^ (uVar29 >> 0x27 | uVar29 * 0x2000000) ^
               (uVar29 >> 0x1c | uVar29 << 0x24));
      auVar49 = vpsrlq_avx2(auVar48,1);
      lVar26 = auVar23._8_8_;
      lVar43 = auVar23._16_8_;
      lVar44 = auVar23._24_8_;
      auVar51 = vpsrlq_avx2(auVar48,7);
      auVar47 = vpsllq_avx2(auVar48,0x38);
      lVar27 = uVar30 + *(longlong *)pauVar33[6] + (uVar40 & uVar39) + (~uVar39 & uVar42) +
               ((uVar39 >> 0x29 | uVar39 * 0x800000) ^ (uVar39 >> 0x12 | uVar39 << 0x2e) ^
               (uVar39 >> 0xe | uVar39 << 0x32));
      auVar50 = vpsrlq_avx2(auVar49,7);
      uVar38 = uVar38 + lVar27;
      auVar48 = vpsllq_avx2(auVar47,7);
      auVar52 = vpsrlq_avx2(auVar22,6);
      auVar48 = auVar51 ^ auVar49 ^ auVar47 ^ auVar50 ^ auVar48;
      auVar50 = vpsllq_avx2(auVar22,3);
      auVar49 = vpsrlq_avx2(auVar22,0x13);
      uVar30 = lVar27 + ((uVar29 ^ uVar37) & (uVar28 ^ uVar29) ^ uVar29) +
               ((uVar28 >> 0x22 | uVar28 * 0x40000000) ^ (uVar28 >> 0x27 | uVar28 * 0x2000000) ^
               (uVar28 >> 0x1c | uVar28 << 0x24));
      auVar51 = vpsllq_avx2(auVar50,0x2a);
      auVar47 = vpsrlq_avx2(auVar49,0x2a);
      auVar47 = auVar52 ^ auVar50 ^ auVar49 ^ auVar51 ^ auVar47;
      lVar27 = uVar42 + *(longlong *)(pauVar33[6] + 8) + (uVar39 & uVar38) + (~uVar38 & uVar40) +
               ((uVar38 >> 0x29 | uVar38 * 0x800000) ^ (uVar38 >> 0x12 | uVar38 << 0x2e) ^
               (uVar38 >> 0xe | uVar38 << 0x32));
      uVar36 = uVar30 ^ uVar28;
      auVar23._0_8_ = auVar23._0_8_ + auVar45._0_8_ + auVar48._0_8_ + auVar47._0_8_;
      auVar23._8_8_ = lVar26 + auVar45._8_8_ + auVar48._8_8_ + auVar47._8_8_;
      auVar23._16_8_ = lVar43 + auVar45._16_8_ + auVar48._16_8_ + auVar47._16_8_;
      auVar23._24_8_ = lVar44 + auVar45._24_8_ + auVar48._24_8_ + auVar47._24_8_;
      uVar37 = uVar37 + lVar27;
      lVar43 = *(longlong *)((longlong)pauVar34[4] + 8);
      auVar24 = pauVar34[4];
      lVar26 = *(longlong *)pauVar34[5];
      uVar42 = (uVar30 >> 0x22 | uVar30 * 0x40000000) ^ (uVar30 >> 0x27 | uVar30 * 0x2000000) ^
               (uVar30 >> 0x1c | uVar30 << 0x24);
      lVar27 = lVar27 + ((uVar28 ^ uVar29) & uVar36 ^ uVar28);
      *(longlong *)pauVar33[-10] = auVar23._0_8_ + *(longlong *)pauVar34[4];
      *(longlong *)(pauVar33[-10] + 8) = auVar23._8_8_ + lVar43;
      *(longlong *)pauVar33[-9] = auVar23._16_8_ + auVar24._16_8_;
      *(longlong *)(pauVar33[-9] + 8) = auVar23._24_8_ + lVar26;
      pauVar25 = pauVar34 + 5;
      pauVar34 = (undefined1 (*) [24])((longlong)pauVar34[10] + 0x10);
    } while (*(char *)((longlong)*pauVar25 + 0xf) != '\0');
    uVar42 = lVar27 + uVar42;
    lVar27 = uVar40 + *(longlong *)pauVar33[-8] + (uVar38 & uVar37) + (~uVar37 & uVar39) +
             ((uVar37 >> 0x29 | uVar37 * 0x800000) ^ (uVar37 >> 0x12 | uVar37 << 0x2e) ^
             (uVar37 >> 0xe | uVar37 << 0x32));
    uVar29 = uVar29 + lVar27;
    uVar40 = lVar27 + (uVar36 & (uVar42 ^ uVar30) ^ uVar30) +
             ((uVar42 >> 0x22 | uVar42 * 0x40000000) ^ (uVar42 >> 0x27 | uVar42 * 0x2000000) ^
             (uVar42 >> 0x1c | uVar42 << 0x24));
    lVar27 = uVar39 + *(longlong *)(pauVar33[-8] + 8) + (uVar37 & uVar29) + (~uVar29 & uVar38) +
             ((uVar29 >> 0x29 | uVar29 * 0x800000) ^ (uVar29 >> 0x12 | uVar29 << 0x2e) ^
             (uVar29 >> 0xe | uVar29 << 0x32));
    uVar28 = uVar28 + lVar27;
    uVar39 = lVar27 + ((uVar42 ^ uVar30) & (uVar40 ^ uVar42) ^ uVar42) +
             ((uVar40 >> 0x22 | uVar40 * 0x40000000) ^ (uVar40 >> 0x27 | uVar40 * 0x2000000) ^
             (uVar40 >> 0x1c | uVar40 << 0x24));
    lVar27 = uVar38 + *(longlong *)pauVar33[-6] + (uVar29 & uVar28) + (~uVar28 & uVar37) +
             ((uVar28 >> 0x29 | uVar28 * 0x800000) ^ (uVar28 >> 0x12 | uVar28 << 0x2e) ^
             (uVar28 >> 0xe | uVar28 << 0x32));
    uVar30 = uVar30 + lVar27;
    uVar38 = lVar27 + ((uVar40 ^ uVar42) & (uVar39 ^ uVar40) ^ uVar40) +
             ((uVar39 >> 0x22 | uVar39 * 0x40000000) ^ (uVar39 >> 0x27 | uVar39 * 0x2000000) ^
             (uVar39 >> 0x1c | uVar39 << 0x24));
    lVar27 = uVar37 + *(longlong *)(pauVar33[-6] + 8) + (uVar28 & uVar30) + (~uVar30 & uVar29) +
             ((uVar30 >> 0x29 | uVar30 * 0x800000) ^ (uVar30 >> 0x12 | uVar30 << 0x2e) ^
             (uVar30 >> 0xe | uVar30 << 0x32));
    uVar42 = uVar42 + lVar27;
    uVar37 = lVar27 + ((uVar39 ^ uVar40) & (uVar38 ^ uVar39) ^ uVar39) +
             ((uVar38 >> 0x22 | uVar38 * 0x40000000) ^ (uVar38 >> 0x27 | uVar38 * 0x2000000) ^
             (uVar38 >> 0x1c | uVar38 << 0x24));
    lVar27 = uVar29 + *(longlong *)pauVar33[-4] + (uVar30 & uVar42) + (~uVar42 & uVar28) +
             ((uVar42 >> 0x29 | uVar42 * 0x800000) ^ (uVar42 >> 0x12 | uVar42 << 0x2e) ^
             (uVar42 >> 0xe | uVar42 << 0x32));
    uVar40 = uVar40 + lVar27;
    uVar29 = lVar27 + ((uVar38 ^ uVar39) & (uVar37 ^ uVar38) ^ uVar38) +
             ((uVar37 >> 0x22 | uVar37 * 0x40000000) ^ (uVar37 >> 0x27 | uVar37 * 0x2000000) ^
             (uVar37 >> 0x1c | uVar37 << 0x24));
    lVar27 = uVar28 + *(longlong *)(pauVar33[-4] + 8) + (uVar42 & uVar40) + (~uVar40 & uVar30) +
             ((uVar40 >> 0x29 | uVar40 * 0x800000) ^ (uVar40 >> 0x12 | uVar40 << 0x2e) ^
             (uVar40 >> 0xe | uVar40 << 0x32));
    uVar39 = uVar39 + lVar27;
    uVar28 = lVar27 + ((uVar37 ^ uVar38) & (uVar29 ^ uVar37) ^ uVar37) +
             ((uVar29 >> 0x22 | uVar29 * 0x40000000) ^ (uVar29 >> 0x27 | uVar29 * 0x2000000) ^
             (uVar29 >> 0x1c | uVar29 << 0x24));
    lVar27 = uVar30 + *(longlong *)pauVar33[-2] + (uVar40 & uVar39) + (~uVar39 & uVar42) +
             ((uVar39 >> 0x29 | uVar39 * 0x800000) ^ (uVar39 >> 0x12 | uVar39 << 0x2e) ^
             (uVar39 >> 0xe | uVar39 << 0x32));
    uVar38 = uVar38 + lVar27;
    uVar30 = lVar27 + ((uVar29 ^ uVar37) & (uVar28 ^ uVar29) ^ uVar29) +
             ((uVar28 >> 0x22 | uVar28 * 0x40000000) ^ (uVar28 >> 0x27 | uVar28 * 0x2000000) ^
             (uVar28 >> 0x1c | uVar28 << 0x24));
    lVar27 = uVar42 + *(longlong *)(pauVar33[-2] + 8) + (uVar39 & uVar38) + (~uVar38 & uVar40) +
             ((uVar38 >> 0x29 | uVar38 * 0x800000) ^ (uVar38 >> 0x12 | uVar38 << 0x2e) ^
             (uVar38 >> 0xe | uVar38 << 0x32));
    uVar37 = uVar37 + lVar27;
    uVar42 = lVar27 + ((uVar28 ^ uVar29) & (uVar30 ^ uVar28) ^ uVar28) +
             ((uVar30 >> 0x22 | uVar30 * 0x40000000) ^ (uVar30 >> 0x27 | uVar30 * 0x2000000) ^
             (uVar30 >> 0x1c | uVar30 << 0x24));
    lVar27 = uVar40 + *(longlong *)*pauVar1 + (uVar38 & uVar37) + (~uVar37 & uVar39) +
             ((uVar37 >> 0x29 | uVar37 * 0x800000) ^ (uVar37 >> 0x12 | uVar37 << 0x2e) ^
             (uVar37 >> 0xe | uVar37 << 0x32));
    uVar29 = uVar29 + lVar27;
    uVar40 = lVar27 + ((uVar30 ^ uVar28) & (uVar42 ^ uVar30) ^ uVar30) +
             ((uVar42 >> 0x22 | uVar42 * 0x40000000) ^ (uVar42 >> 0x27 | uVar42 * 0x2000000) ^
             (uVar42 >> 0x1c | uVar42 << 0x24));
    lVar27 = uVar39 + *(longlong *)(pauVar33[-0x10] + 8) + (uVar37 & uVar29) + (~uVar29 & uVar38) +
             ((uVar29 >> 0x29 | uVar29 * 0x800000) ^ (uVar29 >> 0x12 | uVar29 << 0x2e) ^
             (uVar29 >> 0xe | uVar29 << 0x32));
    uVar28 = uVar28 + lVar27;
    uVar39 = lVar27 + ((uVar42 ^ uVar30) & (uVar40 ^ uVar42) ^ uVar42) +
             ((uVar40 >> 0x22 | uVar40 * 0x40000000) ^ (uVar40 >> 0x27 | uVar40 * 0x2000000) ^
             (uVar40 >> 0x1c | uVar40 << 0x24));
    lVar27 = uVar38 + *(longlong *)pauVar33[-0xe] + (uVar29 & uVar28) + (~uVar28 & uVar37) +
             ((uVar28 >> 0x29 | uVar28 * 0x800000) ^ (uVar28 >> 0x12 | uVar28 << 0x2e) ^
             (uVar28 >> 0xe | uVar28 << 0x32));
    uVar30 = uVar30 + lVar27;
    uVar38 = lVar27 + ((uVar40 ^ uVar42) & (uVar39 ^ uVar40) ^ uVar40) +
             ((uVar39 >> 0x22 | uVar39 * 0x40000000) ^ (uVar39 >> 0x27 | uVar39 * 0x2000000) ^
             (uVar39 >> 0x1c | uVar39 << 0x24));
    lVar27 = uVar37 + *(longlong *)(pauVar33[-0xe] + 8) + (uVar28 & uVar30) + (~uVar30 & uVar29) +
             ((uVar30 >> 0x29 | uVar30 * 0x800000) ^ (uVar30 >> 0x12 | uVar30 << 0x2e) ^
             (uVar30 >> 0xe | uVar30 << 0x32));
    uVar42 = uVar42 + lVar27;
    uVar37 = lVar27 + ((uVar39 ^ uVar40) & (uVar38 ^ uVar39) ^ uVar39) +
             ((uVar38 >> 0x22 | uVar38 * 0x40000000) ^ (uVar38 >> 0x27 | uVar38 * 0x2000000) ^
             (uVar38 >> 0x1c | uVar38 << 0x24));
    lVar27 = uVar29 + *(longlong *)pauVar33[-0xc] + (uVar30 & uVar42) + (~uVar42 & uVar28) +
             ((uVar42 >> 0x29 | uVar42 * 0x800000) ^ (uVar42 >> 0x12 | uVar42 << 0x2e) ^
             (uVar42 >> 0xe | uVar42 << 0x32));
    uVar40 = uVar40 + lVar27;
    uVar29 = lVar27 + ((uVar38 ^ uVar39) & (uVar37 ^ uVar38) ^ uVar38) +
             ((uVar37 >> 0x22 | uVar37 * 0x40000000) ^ (uVar37 >> 0x27 | uVar37 * 0x2000000) ^
             (uVar37 >> 0x1c | uVar37 << 0x24));
    lVar27 = uVar28 + *(longlong *)(pauVar33[-0xc] + 8) + (uVar42 & uVar40) + (~uVar40 & uVar30) +
             ((uVar40 >> 0x29 | uVar40 * 0x800000) ^ (uVar40 >> 0x12 | uVar40 << 0x2e) ^
             (uVar40 >> 0xe | uVar40 << 0x32));
    uVar39 = uVar39 + lVar27;
    uVar28 = lVar27 + ((uVar37 ^ uVar38) & (uVar29 ^ uVar37) ^ uVar37) +
             ((uVar29 >> 0x22 | uVar29 * 0x40000000) ^ (uVar29 >> 0x27 | uVar29 * 0x2000000) ^
             (uVar29 >> 0x1c | uVar29 << 0x24));
    lVar27 = uVar30 + *(longlong *)pauVar33[-10] + (uVar40 & uVar39) + (~uVar39 & uVar42) +
             ((uVar39 >> 0x29 | uVar39 * 0x800000) ^ (uVar39 >> 0x12 | uVar39 << 0x2e) ^
             (uVar39 >> 0xe | uVar39 << 0x32));
    uVar38 = uVar38 + lVar27;
    uVar30 = lVar27 + ((uVar29 ^ uVar37) & (uVar28 ^ uVar29) ^ uVar29) +
             ((uVar28 >> 0x22 | uVar28 * 0x40000000) ^ (uVar28 >> 0x27 | uVar28 * 0x2000000) ^
             (uVar28 >> 0x1c | uVar28 << 0x24));
    lVar27 = uVar42 + *(longlong *)(pauVar33[-10] + 8) + (uVar39 & uVar38) + (~uVar38 & uVar40) +
             ((uVar38 >> 0x29 | uVar38 * 0x800000) ^ (uVar38 >> 0x12 | uVar38 << 0x2e) ^
             (uVar38 >> 0xe | uVar38 << 0x32));
    plVar2 = *(longlong **)pauVar33[0x40];
    pauVar32 = pauVar33 + 0x38;
    lVar26 = lVar27 + ((uVar28 ^ uVar29) & (uVar30 ^ uVar28) ^ uVar28) +
             ((uVar30 >> 0x22 | uVar30 * 0x40000000) ^ (uVar30 >> 0x27 | uVar30 * 0x2000000) ^
             (uVar30 >> 0x1c | uVar30 << 0x24)) + *plVar2;
    uVar30 = uVar30 + plVar2[1];
    uVar28 = uVar28 + plVar2[2];
    uVar29 = uVar29 + plVar2[3];
    uVar37 = uVar37 + lVar27 + plVar2[4];
    uVar38 = uVar38 + plVar2[5];
    uVar39 = uVar39 + plVar2[6];
    uVar40 = uVar40 + plVar2[7];
    *plVar2 = lVar26;
    plVar2[1] = uVar30;
    plVar2[2] = uVar28;
    plVar2[3] = uVar29;
    plVar2[4] = uVar37;
    plVar2[5] = uVar38;
    plVar2[6] = uVar39;
    plVar2[7] = uVar40;
    if (pauVar35 == *(undefined1 (**) [16])pauVar33[0x41]) {
      return;
    }
    uVar42 = 0;
    uVar36 = uVar30 ^ uVar28;
    do {
      uVar42 = lVar26 + uVar42;
      lVar27 = uVar40 + *(longlong *)pauVar32[1] + (uVar38 & uVar37) + (~uVar37 & uVar39) +
               ((uVar37 >> 0x29 | uVar37 << 0x17) ^ (uVar37 >> 0x12 | uVar37 << 0x2e) ^
               (uVar37 >> 0xe | uVar37 << 0x32));
      uVar29 = uVar29 + lVar27;
      uVar40 = lVar27 + (uVar36 & (uVar42 ^ uVar30) ^ uVar30) +
               ((uVar42 >> 0x22 | uVar42 * 0x40000000) ^ (uVar42 >> 0x27 | uVar42 * 0x2000000) ^
               (uVar42 >> 0x1c | uVar42 << 0x24));
      lVar27 = uVar39 + *(longlong *)(pauVar32[1] + 8) + (uVar37 & uVar29) + (~uVar29 & uVar38) +
               ((uVar29 >> 0x29 | uVar29 * 0x800000) ^ (uVar29 >> 0x12 | uVar29 << 0x2e) ^
               (uVar29 >> 0xe | uVar29 << 0x32));
      uVar28 = uVar28 + lVar27;
      uVar39 = lVar27 + ((uVar42 ^ uVar30) & (uVar40 ^ uVar42) ^ uVar42) +
               ((uVar40 >> 0x22 | uVar40 * 0x40000000) ^ (uVar40 >> 0x27 | uVar40 * 0x2000000) ^
               (uVar40 >> 0x1c | uVar40 << 0x24));
      lVar27 = uVar38 + *(longlong *)pauVar32[3] + (uVar29 & uVar28) + (~uVar28 & uVar37) +
               ((uVar28 >> 0x29 | uVar28 * 0x800000) ^ (uVar28 >> 0x12 | uVar28 << 0x2e) ^
               (uVar28 >> 0xe | uVar28 << 0x32));
      uVar30 = uVar30 + lVar27;
      uVar38 = lVar27 + ((uVar40 ^ uVar42) & (uVar39 ^ uVar40) ^ uVar40) +
               ((uVar39 >> 0x22 | uVar39 * 0x40000000) ^ (uVar39 >> 0x27 | uVar39 * 0x2000000) ^
               (uVar39 >> 0x1c | uVar39 << 0x24));
      lVar27 = uVar37 + *(longlong *)(pauVar32[3] + 8) + (uVar28 & uVar30) + (~uVar30 & uVar29) +
               ((uVar30 >> 0x29 | uVar30 * 0x800000) ^ (uVar30 >> 0x12 | uVar30 << 0x2e) ^
               (uVar30 >> 0xe | uVar30 << 0x32));
      uVar42 = uVar42 + lVar27;
      uVar37 = lVar27 + ((uVar39 ^ uVar40) & (uVar38 ^ uVar39) ^ uVar39) +
               ((uVar38 >> 0x22 | uVar38 * 0x40000000) ^ (uVar38 >> 0x27 | uVar38 * 0x2000000) ^
               (uVar38 >> 0x1c | uVar38 << 0x24));
      lVar27 = uVar29 + *(longlong *)pauVar32[5] + (uVar30 & uVar42) + (~uVar42 & uVar28) +
               ((uVar42 >> 0x29 | uVar42 * 0x800000) ^ (uVar42 >> 0x12 | uVar42 << 0x2e) ^
               (uVar42 >> 0xe | uVar42 << 0x32));
      uVar40 = uVar40 + lVar27;
      uVar29 = lVar27 + ((uVar38 ^ uVar39) & (uVar37 ^ uVar38) ^ uVar38) +
               ((uVar37 >> 0x22 | uVar37 * 0x40000000) ^ (uVar37 >> 0x27 | uVar37 * 0x2000000) ^
               (uVar37 >> 0x1c | uVar37 << 0x24));
      lVar27 = uVar28 + *(longlong *)(pauVar32[5] + 8) + (uVar42 & uVar40) + (~uVar40 & uVar30) +
               ((uVar40 >> 0x29 | uVar40 * 0x800000) ^ (uVar40 >> 0x12 | uVar40 << 0x2e) ^
               (uVar40 >> 0xe | uVar40 << 0x32));
      uVar39 = uVar39 + lVar27;
      uVar28 = lVar27 + ((uVar37 ^ uVar38) & (uVar29 ^ uVar37) ^ uVar37) +
               ((uVar29 >> 0x22 | uVar29 * 0x40000000) ^ (uVar29 >> 0x27 | uVar29 * 0x2000000) ^
               (uVar29 >> 0x1c | uVar29 << 0x24));
      lVar27 = uVar30 + *(longlong *)pauVar32[7] + (uVar40 & uVar39) + (~uVar39 & uVar42) +
               ((uVar39 >> 0x29 | uVar39 * 0x800000) ^ (uVar39 >> 0x12 | uVar39 << 0x2e) ^
               (uVar39 >> 0xe | uVar39 << 0x32));
      uVar38 = uVar38 + lVar27;
      uVar30 = lVar27 + ((uVar29 ^ uVar37) & (uVar28 ^ uVar29) ^ uVar29) +
               ((uVar28 >> 0x22 | uVar28 * 0x40000000) ^ (uVar28 >> 0x27 | uVar28 * 0x2000000) ^
               (uVar28 >> 0x1c | uVar28 << 0x24));
      lVar26 = uVar42 + *(longlong *)(pauVar32[7] + 8) + (uVar39 & uVar38) + (~uVar38 & uVar40) +
               ((uVar38 >> 0x29 | uVar38 * 0x800000) ^ (uVar38 >> 0x12 | uVar38 << 0x2e) ^
               (uVar38 >> 0xe | uVar38 << 0x32));
      uVar36 = uVar30 ^ uVar28;
      uVar37 = uVar37 + lVar26;
      uVar42 = (uVar30 >> 0x22 | uVar30 * 0x40000000) ^ (uVar30 >> 0x27 | uVar30 * 0x2000000) ^
               (uVar30 >> 0x1c | uVar30 << 0x24);
      lVar26 = lVar26 + ((uVar28 ^ uVar29) & uVar36 ^ uVar28);
      pauVar32 = pauVar32 + -8;
    } while (pauVar1 <= pauVar32);
    plVar2 = *(longlong **)pauVar33[0x40];
    pauVar32 = pauVar33 + 0x38;
    lVar27 = lVar26 + uVar42 + *plVar2;
    uVar30 = uVar30 + plVar2[1];
    uVar28 = uVar28 + plVar2[2];
    uVar29 = uVar29 + plVar2[3];
    uVar37 = uVar37 + plVar2[4];
    uVar38 = uVar38 + plVar2[5];
    pauVar35 = pauVar35 + 0x10;
    uVar39 = uVar39 + plVar2[6];
    uVar40 = uVar40 + plVar2[7];
    pauVar1 = *(undefined1 (**) [16])pauVar33[0x41];
    *plVar2 = lVar27;
    pauVar41 = pauVar35;
    if (pauVar35 == pauVar1) {
      pauVar41 = pauVar32;
    }
    plVar2[1] = uVar30;
    plVar2[2] = uVar28;
    plVar2[3] = uVar29;
    plVar2[4] = uVar37;
    plVar2[5] = uVar38;
    plVar2[6] = uVar39;
    plVar2[7] = uVar40;
  } while (pauVar35 <= pauVar1);
  return;
}

// L$SEH_begin_sha512_block_data_order_avx2 @ 140e28fcd

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void L_SEH_begin_sha512_block_data_order_avx2(longlong *param_1,longlong param_2,longlong param_3)

{
  undefined1 (*pauVar1) [16];
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  undefined1 auVar20 [32];
  undefined1 auVar21 [32];
  undefined1 auVar22 [32];
  undefined1 auVar23 [32];
  undefined1 auVar24 [24];
  undefined1 (*pauVar25) [24];
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined1 (*pauVar32) [16];
  undefined1 (*pauVar33) [16];
  undefined1 (*pauVar34) [24];
  undefined1 (*pauVar35) [16];
  ulonglong uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  undefined1 (*pauVar41) [16];
  ulonglong uVar42;
  longlong lVar43;
  longlong lVar44;
  undefined1 auVar45 [32];
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined1 auVar46 [32];
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  undefined1 auVar47 [32];
  undefined1 auVar48 [32];
  undefined8 unaff_XMM10_Qa;
  undefined8 unaff_XMM10_Qb;
  undefined1 auVar49 [32];
  undefined1 auVar50 [32];
  undefined8 unaff_XMM11_Qa;
  undefined8 unaff_XMM11_Qb;
  undefined1 auVar51 [32];
  undefined1 auVar52 [32];
  undefined1 auStack_5b0 [1408];
  
  uVar31 = (ulonglong)auStack_5b0 & 0xfffffffffffff800;
  pauVar1 = (undefined1 (*) [16])(param_2 + param_3 * 0x80);
  pauVar32 = (undefined1 (*) [16])(uVar31 + 0x480);
  *(longlong **)(uVar31 + 0x500) = param_1;
  *(longlong *)(uVar31 + 0x508) = param_2;
  *(undefined1 (**) [16])(uVar31 + 0x510) = pauVar1;
  *(BADSPACEBASE **)(uVar31 + 0x518) = register0x00000020;
  *(undefined8 *)(uVar31 + 0x520) = unaff_XMM6_Qa;
  *(undefined8 *)(uVar31 + 0x528) = unaff_XMM6_Qb;
  *(undefined8 *)(uVar31 + 0x530) = unaff_XMM7_Qa;
  *(undefined8 *)(uVar31 + 0x538) = unaff_XMM7_Qb;
  *(undefined8 *)(uVar31 + 0x540) = unaff_XMM8_Qa;
  *(undefined8 *)(uVar31 + 0x548) = unaff_XMM8_Qb;
  *(undefined8 *)(uVar31 + 0x550) = unaff_XMM9_Qa;
  *(undefined8 *)(uVar31 + 0x558) = unaff_XMM9_Qb;
  *(undefined8 *)(uVar31 + 0x560) = unaff_XMM10_Qa;
  *(undefined8 *)(uVar31 + 0x568) = unaff_XMM10_Qb;
  *(undefined8 *)(uVar31 + 0x570) = unaff_XMM11_Qa;
  *(undefined8 *)(uVar31 + 0x578) = unaff_XMM11_Qb;
  pauVar35 = (undefined1 (*) [16])(param_2 + 0x80);
  lVar27 = *param_1;
  uVar30 = param_1[1];
  uVar28 = param_1[2];
  pauVar41 = pauVar35;
  if (pauVar35 == pauVar1) {
    pauVar41 = (undefined1 (*) [16])(uVar31 + 0x480);
  }
  uVar29 = param_1[3];
  uVar37 = param_1[4];
  uVar38 = param_1[5];
  uVar39 = param_1[6];
  uVar40 = param_1[7];
  do {
    auVar48._16_16_ = ZEXT116(1) * *pauVar41;
    auVar48._0_16_ = ZEXT116(0) * *pauVar41 | ZEXT116(1) * pauVar35[-8];
    auVar45._16_16_ = ZEXT116(1) * pauVar41[1];
    auVar45._0_16_ = ZEXT116(0) * pauVar41[1] | ZEXT116(1) * pauVar35[-7];
    auVar16 = vpshufb_avx2(auVar48,_DAT_140e26d00);
    auVar47._16_16_ = ZEXT116(1) * pauVar41[2];
    auVar47._0_16_ = ZEXT116(0) * pauVar41[2] | ZEXT116(1) * pauVar35[-6];
    auVar17 = vpshufb_avx2(auVar45,_DAT_140e26d00);
    auVar49._16_16_ = ZEXT116(1) * pauVar41[3];
    auVar49._0_16_ = ZEXT116(0) * pauVar41[3] | ZEXT116(1) * pauVar35[-5];
    auVar18 = vpshufb_avx2(auVar47,_DAT_140e26d00);
    auVar50._16_16_ = ZEXT116(1) * pauVar41[4];
    auVar50._0_16_ = ZEXT116(0) * pauVar41[4] | ZEXT116(1) * pauVar35[-4];
    auVar19 = vpshufb_avx2(auVar49,_DAT_140e26d00);
    auVar51._16_16_ = ZEXT116(1) * pauVar41[5];
    auVar51._0_16_ = ZEXT116(0) * pauVar41[5] | ZEXT116(1) * pauVar35[-3];
    auVar20 = vpshufb_avx2(auVar50,_DAT_140e26d00);
    auVar52._16_16_ = ZEXT116(1) * pauVar41[6];
    auVar52._0_16_ = ZEXT116(0) * pauVar41[6] | ZEXT116(1) * pauVar35[-2];
    auVar21 = vpshufb_avx2(auVar51,_DAT_140e26d00);
    auVar46._16_16_ = ZEXT116(1) * pauVar41[7];
    auVar46._0_16_ = ZEXT116(0) * pauVar41[7] | ZEXT116(1) * pauVar35[-1];
    lVar3 = auVar16._8_8_ + DAT_140e26808;
    lVar7 = auVar16._16_8_ + DAT_140e26810;
    lVar11 = auVar16._24_8_ + DAT_140e26818;
    auVar22 = vpshufb_avx2(auVar52,_DAT_140e26d00);
    lVar26 = auVar17._0_8_ + DAT_140e26820;
    lVar4 = auVar17._8_8_ + DAT_140e26828;
    lVar8 = auVar17._16_8_ + DAT_140e26830;
    lVar12 = auVar17._24_8_ + DAT_140e26838;
    auVar23 = vpshufb_avx2(auVar46,_DAT_140e26d00);
    lVar43 = auVar18._0_8_ + DAT_140e26840;
    lVar5 = auVar18._8_8_ + DAT_140e26848;
    lVar9 = auVar18._16_8_ + DAT_140e26850;
    lVar13 = auVar18._24_8_ + DAT_140e26858;
    lVar44 = auVar19._0_8_ + DAT_140e26860;
    lVar6 = auVar19._8_8_ + DAT_140e26868;
    lVar10 = auVar19._16_8_ + DAT_140e26870;
    lVar14 = auVar19._24_8_ + DAT_140e26878;
    *(longlong *)*pauVar32 = auVar16._0_8_ + K512;
    *(longlong *)(*pauVar32 + 8) = lVar3;
    *(longlong *)pauVar32[1] = lVar7;
    *(longlong *)(pauVar32[1] + 8) = lVar11;
    lVar3 = auVar20._0_8_ + DAT_140e26880;
    lVar7 = auVar20._8_8_ + DAT_140e26888;
    lVar11 = auVar20._16_8_ + DAT_140e26890;
    lVar15 = auVar20._24_8_ + DAT_140e26898;
    *(longlong *)pauVar32[2] = lVar26;
    *(longlong *)(pauVar32[2] + 8) = lVar4;
    *(longlong *)pauVar32[3] = lVar8;
    *(longlong *)(pauVar32[3] + 8) = lVar12;
    lVar26 = auVar21._0_8_ + DAT_140e268a0;
    lVar4 = auVar21._8_8_ + DAT_140e268a8;
    lVar8 = auVar21._16_8_ + DAT_140e268b0;
    lVar12 = auVar21._24_8_ + DAT_140e268b8;
    *(longlong *)pauVar32[4] = lVar43;
    *(longlong *)(pauVar32[4] + 8) = lVar5;
    *(longlong *)pauVar32[5] = lVar9;
    *(longlong *)(pauVar32[5] + 8) = lVar13;
    lVar43 = auVar22._0_8_ + DAT_140e268c0;
    lVar5 = auVar22._8_8_ + DAT_140e268c8;
    lVar9 = auVar22._16_8_ + DAT_140e268d0;
    lVar13 = auVar22._24_8_ + DAT_140e268d8;
    *(longlong *)pauVar32[6] = lVar44;
    *(longlong *)(pauVar32[6] + 8) = lVar6;
    *(longlong *)pauVar32[7] = lVar10;
    *(longlong *)(pauVar32[7] + 8) = lVar14;
    lVar44 = auVar23._0_8_ + DAT_140e268e0;
    lVar6 = auVar23._8_8_ + DAT_140e268e8;
    lVar10 = auVar23._16_8_ + DAT_140e268f0;
    lVar14 = auVar23._24_8_ + DAT_140e268f8;
    *(longlong *)pauVar32[-8] = lVar3;
    *(longlong *)(pauVar32[-8] + 8) = lVar7;
    *(longlong *)pauVar32[-7] = lVar11;
    *(longlong *)(pauVar32[-7] + 8) = lVar15;
    uVar42 = 0;
    *(longlong *)pauVar32[-6] = lVar26;
    *(longlong *)(pauVar32[-6] + 8) = lVar4;
    *(longlong *)pauVar32[-5] = lVar8;
    *(longlong *)(pauVar32[-5] + 8) = lVar12;
    *(longlong *)pauVar32[-4] = lVar43;
    *(longlong *)(pauVar32[-4] + 8) = lVar5;
    *(longlong *)pauVar32[-3] = lVar9;
    *(longlong *)(pauVar32[-3] + 8) = lVar13;
    uVar36 = uVar30 ^ uVar28;
    *(longlong *)pauVar32[-2] = lVar44;
    *(longlong *)(pauVar32[-2] + 8) = lVar6;
    *(longlong *)pauVar32[-1] = lVar10;
    *(longlong *)(pauVar32[-1] + 8) = lVar14;
    pauVar1 = pauVar32 + -8;
    pauVar34 = (undefined1 (*) [24])&DAT_140e26980;
    do {
      pauVar33 = pauVar1;
      auVar48 = vpalignr_avx2(auVar17,auVar16,8);
      auVar45 = vpalignr_avx2(auVar21,auVar20,8);
      uVar42 = lVar27 + uVar42;
      auVar49 = vpsrlq_avx2(auVar48,1);
      lVar26 = auVar16._8_8_;
      lVar43 = auVar16._16_8_;
      lVar44 = auVar16._24_8_;
      auVar51 = vpsrlq_avx2(auVar48,7);
      auVar47 = vpsllq_avx2(auVar48,0x38);
      lVar27 = uVar40 + *(longlong *)pauVar33[8] + (uVar38 & uVar37) + (~uVar37 & uVar39) +
               ((uVar37 >> 0x29 | uVar37 << 0x17) ^ (uVar37 >> 0x12 | uVar37 << 0x2e) ^
               (uVar37 >> 0xe | uVar37 << 0x32));
      auVar50 = vpsrlq_avx2(auVar49,7);
      uVar29 = uVar29 + lVar27;
      auVar48 = vpsllq_avx2(auVar47,7);
      auVar52 = vpsrlq_avx2(auVar23,6);
      auVar48 = auVar51 ^ auVar49 ^ auVar47 ^ auVar50 ^ auVar48;
      auVar50 = vpsllq_avx2(auVar23,3);
      auVar49 = vpsrlq_avx2(auVar23,0x13);
      uVar40 = lVar27 + (uVar36 & (uVar42 ^ uVar30) ^ uVar30) +
               ((uVar42 >> 0x22 | uVar42 * 0x40000000) ^ (uVar42 >> 0x27 | uVar42 * 0x2000000) ^
               (uVar42 >> 0x1c | uVar42 << 0x24));
      auVar51 = vpsllq_avx2(auVar50,0x2a);
      auVar47 = vpsrlq_avx2(auVar49,0x2a);
      auVar47 = auVar52 ^ auVar50 ^ auVar49 ^ auVar51 ^ auVar47;
      lVar27 = uVar39 + *(longlong *)(pauVar33[8] + 8) + (uVar37 & uVar29) + (~uVar29 & uVar38) +
               ((uVar29 >> 0x29 | uVar29 * 0x800000) ^ (uVar29 >> 0x12 | uVar29 << 0x2e) ^
               (uVar29 >> 0xe | uVar29 << 0x32));
      auVar16._0_8_ = auVar16._0_8_ + auVar45._0_8_ + auVar48._0_8_ + auVar47._0_8_;
      auVar16._8_8_ = lVar26 + auVar45._8_8_ + auVar48._8_8_ + auVar47._8_8_;
      auVar16._16_8_ = lVar43 + auVar45._16_8_ + auVar48._16_8_ + auVar47._16_8_;
      auVar16._24_8_ = lVar44 + auVar45._24_8_ + auVar48._24_8_ + auVar47._24_8_;
      uVar28 = uVar28 + lVar27;
      lVar43 = *(longlong *)pauVar34[-5];
      auVar24 = *(undefined1 (*) [24])((longlong)pauVar34[-6] + 0x10);
      lVar26 = *(longlong *)((longlong)pauVar34[-5] + 0x10);
      *(longlong *)pauVar33[-8] =
           auVar16._0_8_ + *(longlong *)*(undefined1 (*) [24])((longlong)pauVar34[-6] + 0x10);
      *(longlong *)(pauVar33[-8] + 8) = auVar16._8_8_ + lVar43;
      *(longlong *)pauVar33[-7] = auVar16._16_8_ + auVar24._16_8_;
      *(longlong *)(pauVar33[-7] + 8) = auVar16._24_8_ + lVar26;
      auVar48 = vpalignr_avx2(auVar18,auVar17,8);
      auVar45 = vpalignr_avx2(auVar22,auVar21,8);
      uVar39 = lVar27 + ((uVar42 ^ uVar30) & (uVar40 ^ uVar42) ^ uVar42) +
               ((uVar40 >> 0x22 | uVar40 * 0x40000000) ^ (uVar40 >> 0x27 | uVar40 * 0x2000000) ^
               (uVar40 >> 0x1c | uVar40 << 0x24));
      auVar49 = vpsrlq_avx2(auVar48,1);
      lVar26 = auVar17._8_8_;
      lVar43 = auVar17._16_8_;
      lVar44 = auVar17._24_8_;
      auVar51 = vpsrlq_avx2(auVar48,7);
      auVar47 = vpsllq_avx2(auVar48,0x38);
      lVar27 = uVar38 + *(longlong *)pauVar33[10] + (uVar29 & uVar28) + (~uVar28 & uVar37) +
               ((uVar28 >> 0x29 | uVar28 * 0x800000) ^ (uVar28 >> 0x12 | uVar28 << 0x2e) ^
               (uVar28 >> 0xe | uVar28 << 0x32));
      auVar50 = vpsrlq_avx2(auVar49,7);
      uVar30 = uVar30 + lVar27;
      auVar48 = vpsllq_avx2(auVar47,7);
      auVar52 = vpsrlq_avx2(auVar16,6);
      auVar48 = auVar51 ^ auVar49 ^ auVar47 ^ auVar50 ^ auVar48;
      auVar50 = vpsllq_avx2(auVar16,3);
      auVar49 = vpsrlq_avx2(auVar16,0x13);
      uVar38 = lVar27 + ((uVar40 ^ uVar42) & (uVar39 ^ uVar40) ^ uVar40) +
               ((uVar39 >> 0x22 | uVar39 * 0x40000000) ^ (uVar39 >> 0x27 | uVar39 * 0x2000000) ^
               (uVar39 >> 0x1c | uVar39 << 0x24));
      auVar51 = vpsllq_avx2(auVar50,0x2a);
      auVar47 = vpsrlq_avx2(auVar49,0x2a);
      auVar47 = auVar52 ^ auVar50 ^ auVar49 ^ auVar51 ^ auVar47;
      lVar27 = uVar37 + *(longlong *)(pauVar33[10] + 8) + (uVar28 & uVar30) + (~uVar30 & uVar29) +
               ((uVar30 >> 0x29 | uVar30 * 0x800000) ^ (uVar30 >> 0x12 | uVar30 << 0x2e) ^
               (uVar30 >> 0xe | uVar30 << 0x32));
      auVar17._0_8_ = auVar17._0_8_ + auVar45._0_8_ + auVar48._0_8_ + auVar47._0_8_;
      auVar17._8_8_ = lVar26 + auVar45._8_8_ + auVar48._8_8_ + auVar47._8_8_;
      auVar17._16_8_ = lVar43 + auVar45._16_8_ + auVar48._16_8_ + auVar47._16_8_;
      auVar17._24_8_ = lVar44 + auVar45._24_8_ + auVar48._24_8_ + auVar47._24_8_;
      uVar42 = uVar42 + lVar27;
      lVar43 = *(longlong *)((longlong)pauVar34[-4] + 8);
      auVar24 = pauVar34[-4];
      lVar26 = *(longlong *)pauVar34[-3];
      *(longlong *)pauVar33[-6] = auVar17._0_8_ + *(longlong *)pauVar34[-4];
      *(longlong *)(pauVar33[-6] + 8) = auVar17._8_8_ + lVar43;
      *(longlong *)pauVar33[-5] = auVar17._16_8_ + auVar24._16_8_;
      *(longlong *)(pauVar33[-5] + 8) = auVar17._24_8_ + lVar26;
      auVar48 = vpalignr_avx2(auVar19,auVar18,8);
      auVar45 = vpalignr_avx2(auVar23,auVar22,8);
      uVar37 = lVar27 + ((uVar39 ^ uVar40) & (uVar38 ^ uVar39) ^ uVar39) +
               ((uVar38 >> 0x22 | uVar38 * 0x40000000) ^ (uVar38 >> 0x27 | uVar38 * 0x2000000) ^
               (uVar38 >> 0x1c | uVar38 << 0x24));
      auVar49 = vpsrlq_avx2(auVar48,1);
      lVar26 = auVar18._8_8_;
      lVar43 = auVar18._16_8_;
      lVar44 = auVar18._24_8_;
      auVar51 = vpsrlq_avx2(auVar48,7);
      auVar47 = vpsllq_avx2(auVar48,0x38);
      lVar27 = uVar29 + *(longlong *)pauVar33[0xc] + (uVar30 & uVar42) + (~uVar42 & uVar28) +
               ((uVar42 >> 0x29 | uVar42 * 0x800000) ^ (uVar42 >> 0x12 | uVar42 << 0x2e) ^
               (uVar42 >> 0xe | uVar42 << 0x32));
      auVar50 = vpsrlq_avx2(auVar49,7);
      uVar40 = uVar40 + lVar27;
      auVar48 = vpsllq_avx2(auVar47,7);
      auVar52 = vpsrlq_avx2(auVar17,6);
      auVar48 = auVar51 ^ auVar49 ^ auVar47 ^ auVar50 ^ auVar48;
      auVar50 = vpsllq_avx2(auVar17,3);
      auVar49 = vpsrlq_avx2(auVar17,0x13);
      uVar29 = lVar27 + ((uVar38 ^ uVar39) & (uVar37 ^ uVar38) ^ uVar38) +
               ((uVar37 >> 0x22 | uVar37 * 0x40000000) ^ (uVar37 >> 0x27 | uVar37 * 0x2000000) ^
               (uVar37 >> 0x1c | uVar37 << 0x24));
      auVar51 = vpsllq_avx2(auVar50,0x2a);
      auVar47 = vpsrlq_avx2(auVar49,0x2a);
      auVar47 = auVar52 ^ auVar50 ^ auVar49 ^ auVar51 ^ auVar47;
      lVar27 = uVar28 + *(longlong *)(pauVar33[0xc] + 8) + (uVar42 & uVar40) + (~uVar40 & uVar30) +
               ((uVar40 >> 0x29 | uVar40 * 0x800000) ^ (uVar40 >> 0x12 | uVar40 << 0x2e) ^
               (uVar40 >> 0xe | uVar40 << 0x32));
      auVar18._0_8_ = auVar18._0_8_ + auVar45._0_8_ + auVar48._0_8_ + auVar47._0_8_;
      auVar18._8_8_ = lVar26 + auVar45._8_8_ + auVar48._8_8_ + auVar47._8_8_;
      auVar18._16_8_ = lVar43 + auVar45._16_8_ + auVar48._16_8_ + auVar47._16_8_;
      auVar18._24_8_ = lVar44 + auVar45._24_8_ + auVar48._24_8_ + auVar47._24_8_;
      uVar39 = uVar39 + lVar27;
      lVar43 = *(longlong *)((longlong)pauVar34[-3] + 0x10);
      auVar24 = *(undefined1 (*) [24])((longlong)pauVar34[-3] + 8);
      lVar26 = *(longlong *)((longlong)pauVar34[-2] + 8);
      *(longlong *)pauVar33[-4] =
           auVar18._0_8_ + *(longlong *)*(undefined1 (*) [24])((longlong)pauVar34[-3] + 8);
      *(longlong *)(pauVar33[-4] + 8) = auVar18._8_8_ + lVar43;
      *(longlong *)pauVar33[-3] = auVar18._16_8_ + auVar24._16_8_;
      *(longlong *)(pauVar33[-3] + 8) = auVar18._24_8_ + lVar26;
      auVar48 = vpalignr_avx2(auVar20,auVar19,8);
      auVar45 = vpalignr_avx2(auVar16,auVar23,8);
      uVar28 = lVar27 + ((uVar37 ^ uVar38) & (uVar29 ^ uVar37) ^ uVar37) +
               ((uVar29 >> 0x22 | uVar29 * 0x40000000) ^ (uVar29 >> 0x27 | uVar29 * 0x2000000) ^
               (uVar29 >> 0x1c | uVar29 << 0x24));
      auVar49 = vpsrlq_avx2(auVar48,1);
      lVar26 = auVar19._8_8_;
      lVar43 = auVar19._16_8_;
      lVar44 = auVar19._24_8_;
      auVar51 = vpsrlq_avx2(auVar48,7);
      auVar47 = vpsllq_avx2(auVar48,0x38);
      lVar27 = uVar30 + *(longlong *)pauVar33[0xe] + (uVar40 & uVar39) + (~uVar39 & uVar42) +
               ((uVar39 >> 0x29 | uVar39 * 0x800000) ^ (uVar39 >> 0x12 | uVar39 << 0x2e) ^
               (uVar39 >> 0xe | uVar39 << 0x32));
      auVar50 = vpsrlq_avx2(auVar49,7);
      uVar38 = uVar38 + lVar27;
      auVar48 = vpsllq_avx2(auVar47,7);
      auVar52 = vpsrlq_avx2(auVar18,6);
      auVar48 = auVar51 ^ auVar49 ^ auVar47 ^ auVar50 ^ auVar48;
      auVar50 = vpsllq_avx2(auVar18,3);
      auVar49 = vpsrlq_avx2(auVar18,0x13);
      uVar30 = lVar27 + ((uVar29 ^ uVar37) & (uVar28 ^ uVar29) ^ uVar29) +
               ((uVar28 >> 0x22 | uVar28 * 0x40000000) ^ (uVar28 >> 0x27 | uVar28 * 0x2000000) ^
               (uVar28 >> 0x1c | uVar28 << 0x24));
      auVar51 = vpsllq_avx2(auVar50,0x2a);
      auVar47 = vpsrlq_avx2(auVar49,0x2a);
      auVar47 = auVar52 ^ auVar50 ^ auVar49 ^ auVar51 ^ auVar47;
      lVar27 = uVar42 + *(longlong *)(pauVar33[0xe] + 8) + (uVar39 & uVar38) + (~uVar38 & uVar40) +
               ((uVar38 >> 0x29 | uVar38 * 0x800000) ^ (uVar38 >> 0x12 | uVar38 << 0x2e) ^
               (uVar38 >> 0xe | uVar38 << 0x32));
      auVar19._0_8_ = auVar19._0_8_ + auVar45._0_8_ + auVar48._0_8_ + auVar47._0_8_;
      auVar19._8_8_ = lVar26 + auVar45._8_8_ + auVar48._8_8_ + auVar47._8_8_;
      auVar19._16_8_ = lVar43 + auVar45._16_8_ + auVar48._16_8_ + auVar47._16_8_;
      auVar19._24_8_ = lVar44 + auVar45._24_8_ + auVar48._24_8_ + auVar47._24_8_;
      uVar37 = uVar37 + lVar27;
      lVar43 = *(longlong *)pauVar34[-1];
      auVar24 = *(undefined1 (*) [24])((longlong)pauVar34[-2] + 0x10);
      lVar26 = *(longlong *)((longlong)pauVar34[-1] + 0x10);
      *(longlong *)pauVar33[-2] =
           auVar19._0_8_ + *(longlong *)*(undefined1 (*) [24])((longlong)pauVar34[-2] + 0x10);
      *(longlong *)(pauVar33[-2] + 8) = auVar19._8_8_ + lVar43;
      *(longlong *)pauVar33[-1] = auVar19._16_8_ + auVar24._16_8_;
      *(longlong *)(pauVar33[-1] + 8) = auVar19._24_8_ + lVar26;
      pauVar1 = pauVar33 + -0x10;
      auVar48 = vpalignr_avx2(auVar21,auVar20,8);
      auVar45 = vpalignr_avx2(auVar17,auVar16,8);
      uVar42 = lVar27 + ((uVar28 ^ uVar29) & (uVar30 ^ uVar28) ^ uVar28) +
               ((uVar30 >> 0x22 | uVar30 * 0x40000000) ^ (uVar30 >> 0x27 | uVar30 * 0x2000000) ^
               (uVar30 >> 0x1c | uVar30 << 0x24));
      auVar49 = vpsrlq_avx2(auVar48,1);
      lVar26 = auVar20._8_8_;
      lVar43 = auVar20._16_8_;
      lVar44 = auVar20._24_8_;
      auVar51 = vpsrlq_avx2(auVar48,7);
      auVar47 = vpsllq_avx2(auVar48,0x38);
      lVar27 = uVar40 + *(longlong *)*pauVar33 + (uVar38 & uVar37) + (~uVar37 & uVar39) +
               ((uVar37 >> 0x29 | uVar37 * 0x800000) ^ (uVar37 >> 0x12 | uVar37 << 0x2e) ^
               (uVar37 >> 0xe | uVar37 << 0x32));
      auVar50 = vpsrlq_avx2(auVar49,7);
      uVar29 = uVar29 + lVar27;
      auVar48 = vpsllq_avx2(auVar47,7);
      auVar52 = vpsrlq_avx2(auVar19,6);
      auVar48 = auVar51 ^ auVar49 ^ auVar47 ^ auVar50 ^ auVar48;
      auVar50 = vpsllq_avx2(auVar19,3);
      auVar49 = vpsrlq_avx2(auVar19,0x13);
      uVar40 = lVar27 + ((uVar30 ^ uVar28) & (uVar42 ^ uVar30) ^ uVar30) +
               ((uVar42 >> 0x22 | uVar42 * 0x40000000) ^ (uVar42 >> 0x27 | uVar42 * 0x2000000) ^
               (uVar42 >> 0x1c | uVar42 << 0x24));
      auVar51 = vpsllq_avx2(auVar50,0x2a);
      auVar47 = vpsrlq_avx2(auVar49,0x2a);
      auVar47 = auVar52 ^ auVar50 ^ auVar49 ^ auVar51 ^ auVar47;
      lVar27 = uVar39 + *(longlong *)(*pauVar33 + 8) + (uVar37 & uVar29) + (~uVar29 & uVar38) +
               ((uVar29 >> 0x29 | uVar29 * 0x800000) ^ (uVar29 >> 0x12 | uVar29 << 0x2e) ^
               (uVar29 >> 0xe | uVar29 << 0x32));
      auVar20._0_8_ = auVar20._0_8_ + auVar45._0_8_ + auVar48._0_8_ + auVar47._0_8_;
      auVar20._8_8_ = lVar26 + auVar45._8_8_ + auVar48._8_8_ + auVar47._8_8_;
      auVar20._16_8_ = lVar43 + auVar45._16_8_ + auVar48._16_8_ + auVar47._16_8_;
      auVar20._24_8_ = lVar44 + auVar45._24_8_ + auVar48._24_8_ + auVar47._24_8_;
      uVar28 = uVar28 + lVar27;
      lVar43 = *(longlong *)((longlong)*pauVar34 + 8);
      auVar24 = *pauVar34;
      lVar26 = *(longlong *)pauVar34[1];
      *(longlong *)*pauVar1 = auVar20._0_8_ + *(longlong *)*pauVar34;
      *(longlong *)(pauVar33[-0x10] + 8) = auVar20._8_8_ + lVar43;
      *(longlong *)pauVar33[-0xf] = auVar20._16_8_ + auVar24._16_8_;
      *(longlong *)(pauVar33[-0xf] + 8) = auVar20._24_8_ + lVar26;
      auVar48 = vpalignr_avx2(auVar22,auVar21,8);
      auVar45 = vpalignr_avx2(auVar18,auVar17,8);
      uVar39 = lVar27 + ((uVar42 ^ uVar30) & (uVar40 ^ uVar42) ^ uVar42) +
               ((uVar40 >> 0x22 | uVar40 * 0x40000000) ^ (uVar40 >> 0x27 | uVar40 * 0x2000000) ^
               (uVar40 >> 0x1c | uVar40 << 0x24));
      auVar49 = vpsrlq_avx2(auVar48,1);
      lVar26 = auVar21._8_8_;
      lVar43 = auVar21._16_8_;
      lVar44 = auVar21._24_8_;
      auVar51 = vpsrlq_avx2(auVar48,7);
      auVar47 = vpsllq_avx2(auVar48,0x38);
      lVar27 = uVar38 + *(longlong *)pauVar33[2] + (uVar29 & uVar28) + (~uVar28 & uVar37) +
               ((uVar28 >> 0x29 | uVar28 * 0x800000) ^ (uVar28 >> 0x12 | uVar28 << 0x2e) ^
               (uVar28 >> 0xe | uVar28 << 0x32));
      auVar50 = vpsrlq_avx2(auVar49,7);
      uVar30 = uVar30 + lVar27;
      auVar48 = vpsllq_avx2(auVar47,7);
      auVar52 = vpsrlq_avx2(auVar20,6);
      auVar48 = auVar51 ^ auVar49 ^ auVar47 ^ auVar50 ^ auVar48;
      auVar50 = vpsllq_avx2(auVar20,3);
      auVar49 = vpsrlq_avx2(auVar20,0x13);
      uVar38 = lVar27 + ((uVar40 ^ uVar42) & (uVar39 ^ uVar40) ^ uVar40) +
               ((uVar39 >> 0x22 | uVar39 * 0x40000000) ^ (uVar39 >> 0x27 | uVar39 * 0x2000000) ^
               (uVar39 >> 0x1c | uVar39 << 0x24));
      auVar51 = vpsllq_avx2(auVar50,0x2a);
      auVar47 = vpsrlq_avx2(auVar49,0x2a);
      auVar47 = auVar52 ^ auVar50 ^ auVar49 ^ auVar51 ^ auVar47;
      lVar27 = uVar37 + *(longlong *)(pauVar33[2] + 8) + (uVar28 & uVar30) + (~uVar30 & uVar29) +
               ((uVar30 >> 0x29 | uVar30 * 0x800000) ^ (uVar30 >> 0x12 | uVar30 << 0x2e) ^
               (uVar30 >> 0xe | uVar30 << 0x32));
      auVar21._0_8_ = auVar21._0_8_ + auVar45._0_8_ + auVar48._0_8_ + auVar47._0_8_;
      auVar21._8_8_ = lVar26 + auVar45._8_8_ + auVar48._8_8_ + auVar47._8_8_;
      auVar21._16_8_ = lVar43 + auVar45._16_8_ + auVar48._16_8_ + auVar47._16_8_;
      auVar21._24_8_ = lVar44 + auVar45._24_8_ + auVar48._24_8_ + auVar47._24_8_;
      uVar42 = uVar42 + lVar27;
      lVar43 = *(longlong *)((longlong)pauVar34[1] + 0x10);
      auVar24 = *(undefined1 (*) [24])((longlong)pauVar34[1] + 8);
      lVar26 = *(longlong *)((longlong)pauVar34[2] + 8);
      *(longlong *)pauVar33[-0xe] =
           auVar21._0_8_ + *(longlong *)*(undefined1 (*) [24])((longlong)pauVar34[1] + 8);
      *(longlong *)(pauVar33[-0xe] + 8) = auVar21._8_8_ + lVar43;
      *(longlong *)pauVar33[-0xd] = auVar21._16_8_ + auVar24._16_8_;
      *(longlong *)(pauVar33[-0xd] + 8) = auVar21._24_8_ + lVar26;
      auVar48 = vpalignr_avx2(auVar23,auVar22,8);
      auVar45 = vpalignr_avx2(auVar19,auVar18,8);
      uVar37 = lVar27 + ((uVar39 ^ uVar40) & (uVar38 ^ uVar39) ^ uVar39) +
               ((uVar38 >> 0x22 | uVar38 * 0x40000000) ^ (uVar38 >> 0x27 | uVar38 * 0x2000000) ^
               (uVar38 >> 0x1c | uVar38 << 0x24));
      auVar49 = vpsrlq_avx2(auVar48,1);
      lVar26 = auVar22._8_8_;
      lVar43 = auVar22._16_8_;
      lVar44 = auVar22._24_8_;
      auVar51 = vpsrlq_avx2(auVar48,7);
      auVar47 = vpsllq_avx2(auVar48,0x38);
      lVar27 = uVar29 + *(longlong *)pauVar33[4] + (uVar30 & uVar42) + (~uVar42 & uVar28) +
               ((uVar42 >> 0x29 | uVar42 * 0x800000) ^ (uVar42 >> 0x12 | uVar42 << 0x2e) ^
               (uVar42 >> 0xe | uVar42 << 0x32));
      auVar50 = vpsrlq_avx2(auVar49,7);
      uVar40 = uVar40 + lVar27;
      auVar48 = vpsllq_avx2(auVar47,7);
      auVar52 = vpsrlq_avx2(auVar21,6);
      auVar48 = auVar51 ^ auVar49 ^ auVar47 ^ auVar50 ^ auVar48;
      auVar50 = vpsllq_avx2(auVar21,3);
      auVar49 = vpsrlq_avx2(auVar21,0x13);
      uVar29 = lVar27 + ((uVar38 ^ uVar39) & (uVar37 ^ uVar38) ^ uVar38) +
               ((uVar37 >> 0x22 | uVar37 * 0x40000000) ^ (uVar37 >> 0x27 | uVar37 * 0x2000000) ^
               (uVar37 >> 0x1c | uVar37 << 0x24));
      auVar51 = vpsllq_avx2(auVar50,0x2a);
      auVar47 = vpsrlq_avx2(auVar49,0x2a);
      auVar47 = auVar52 ^ auVar50 ^ auVar49 ^ auVar51 ^ auVar47;
      lVar27 = uVar28 + *(longlong *)(pauVar33[4] + 8) + (uVar42 & uVar40) + (~uVar40 & uVar30) +
               ((uVar40 >> 0x29 | uVar40 * 0x800000) ^ (uVar40 >> 0x12 | uVar40 << 0x2e) ^
               (uVar40 >> 0xe | uVar40 << 0x32));
      auVar22._0_8_ = auVar22._0_8_ + auVar45._0_8_ + auVar48._0_8_ + auVar47._0_8_;
      auVar22._8_8_ = lVar26 + auVar45._8_8_ + auVar48._8_8_ + auVar47._8_8_;
      auVar22._16_8_ = lVar43 + auVar45._16_8_ + auVar48._16_8_ + auVar47._16_8_;
      auVar22._24_8_ = lVar44 + auVar45._24_8_ + auVar48._24_8_ + auVar47._24_8_;
      uVar39 = uVar39 + lVar27;
      lVar43 = *(longlong *)pauVar34[3];
      auVar24 = *(undefined1 (*) [24])((longlong)pauVar34[2] + 0x10);
      lVar26 = *(longlong *)((longlong)pauVar34[3] + 0x10);
      *(longlong *)pauVar33[-0xc] =
           auVar22._0_8_ + *(longlong *)*(undefined1 (*) [24])((longlong)pauVar34[2] + 0x10);
      *(longlong *)(pauVar33[-0xc] + 8) = auVar22._8_8_ + lVar43;
      *(longlong *)pauVar33[-0xb] = auVar22._16_8_ + auVar24._16_8_;
      *(longlong *)(pauVar33[-0xb] + 8) = auVar22._24_8_ + lVar26;
      auVar48 = vpalignr_avx2(auVar16,auVar23,8);
      auVar45 = vpalignr_avx2(auVar20,auVar19,8);
      uVar28 = lVar27 + ((uVar37 ^ uVar38) & (uVar29 ^ uVar37) ^ uVar37) +
               ((uVar29 >> 0x22 | uVar29 * 0x40000000) ^ (uVar29 >> 0x27 | uVar29 * 0x2000000) ^
               (uVar29 >> 0x1c | uVar29 << 0x24));
      auVar49 = vpsrlq_avx2(auVar48,1);
      lVar26 = auVar23._8_8_;
      lVar43 = auVar23._16_8_;
      lVar44 = auVar23._24_8_;
      auVar51 = vpsrlq_avx2(auVar48,7);
      auVar47 = vpsllq_avx2(auVar48,0x38);
      lVar27 = uVar30 + *(longlong *)pauVar33[6] + (uVar40 & uVar39) + (~uVar39 & uVar42) +
               ((uVar39 >> 0x29 | uVar39 * 0x800000) ^ (uVar39 >> 0x12 | uVar39 << 0x2e) ^
               (uVar39 >> 0xe | uVar39 << 0x32));
      auVar50 = vpsrlq_avx2(auVar49,7);
      uVar38 = uVar38 + lVar27;
      auVar48 = vpsllq_avx2(auVar47,7);
      auVar52 = vpsrlq_avx2(auVar22,6);
      auVar48 = auVar51 ^ auVar49 ^ auVar47 ^ auVar50 ^ auVar48;
      auVar50 = vpsllq_avx2(auVar22,3);
      auVar49 = vpsrlq_avx2(auVar22,0x13);
      uVar30 = lVar27 + ((uVar29 ^ uVar37) & (uVar28 ^ uVar29) ^ uVar29) +
               ((uVar28 >> 0x22 | uVar28 * 0x40000000) ^ (uVar28 >> 0x27 | uVar28 * 0x2000000) ^
               (uVar28 >> 0x1c | uVar28 << 0x24));
      auVar51 = vpsllq_avx2(auVar50,0x2a);
      auVar47 = vpsrlq_avx2(auVar49,0x2a);
      auVar47 = auVar52 ^ auVar50 ^ auVar49 ^ auVar51 ^ auVar47;
      lVar27 = uVar42 + *(longlong *)(pauVar33[6] + 8) + (uVar39 & uVar38) + (~uVar38 & uVar40) +
               ((uVar38 >> 0x29 | uVar38 * 0x800000) ^ (uVar38 >> 0x12 | uVar38 << 0x2e) ^
               (uVar38 >> 0xe | uVar38 << 0x32));
      uVar36 = uVar30 ^ uVar28;
      auVar23._0_8_ = auVar23._0_8_ + auVar45._0_8_ + auVar48._0_8_ + auVar47._0_8_;
      auVar23._8_8_ = lVar26 + auVar45._8_8_ + auVar48._8_8_ + auVar47._8_8_;
      auVar23._16_8_ = lVar43 + auVar45._16_8_ + auVar48._16_8_ + auVar47._16_8_;
      auVar23._24_8_ = lVar44 + auVar45._24_8_ + auVar48._24_8_ + auVar47._24_8_;
      uVar37 = uVar37 + lVar27;
      lVar43 = *(longlong *)((longlong)pauVar34[4] + 8);
      auVar24 = pauVar34[4];
      lVar26 = *(longlong *)pauVar34[5];
      uVar42 = (uVar30 >> 0x22 | uVar30 * 0x40000000) ^ (uVar30 >> 0x27 | uVar30 * 0x2000000) ^
               (uVar30 >> 0x1c | uVar30 << 0x24);
      lVar27 = lVar27 + ((uVar28 ^ uVar29) & uVar36 ^ uVar28);
      *(longlong *)pauVar33[-10] = auVar23._0_8_ + *(longlong *)pauVar34[4];
      *(longlong *)(pauVar33[-10] + 8) = auVar23._8_8_ + lVar43;
      *(longlong *)pauVar33[-9] = auVar23._16_8_ + auVar24._16_8_;
      *(longlong *)(pauVar33[-9] + 8) = auVar23._24_8_ + lVar26;
      pauVar25 = pauVar34 + 5;
      pauVar34 = (undefined1 (*) [24])((longlong)pauVar34[10] + 0x10);
    } while (*(char *)((longlong)*pauVar25 + 0xf) != '\0');
    uVar42 = lVar27 + uVar42;
    lVar27 = uVar40 + *(longlong *)pauVar33[-8] + (uVar38 & uVar37) + (~uVar37 & uVar39) +
             ((uVar37 >> 0x29 | uVar37 * 0x800000) ^ (uVar37 >> 0x12 | uVar37 << 0x2e) ^
             (uVar37 >> 0xe | uVar37 << 0x32));
    uVar29 = uVar29 + lVar27;
    uVar40 = lVar27 + (uVar36 & (uVar42 ^ uVar30) ^ uVar30) +
             ((uVar42 >> 0x22 | uVar42 * 0x40000000) ^ (uVar42 >> 0x27 | uVar42 * 0x2000000) ^
             (uVar42 >> 0x1c | uVar42 << 0x24));
    lVar27 = uVar39 + *(longlong *)(pauVar33[-8] + 8) + (uVar37 & uVar29) + (~uVar29 & uVar38) +
             ((uVar29 >> 0x29 | uVar29 * 0x800000) ^ (uVar29 >> 0x12 | uVar29 << 0x2e) ^
             (uVar29 >> 0xe | uVar29 << 0x32));
    uVar28 = uVar28 + lVar27;
    uVar39 = lVar27 + ((uVar42 ^ uVar30) & (uVar40 ^ uVar42) ^ uVar42) +
             ((uVar40 >> 0x22 | uVar40 * 0x40000000) ^ (uVar40 >> 0x27 | uVar40 * 0x2000000) ^
             (uVar40 >> 0x1c | uVar40 << 0x24));
    lVar27 = uVar38 + *(longlong *)pauVar33[-6] + (uVar29 & uVar28) + (~uVar28 & uVar37) +
             ((uVar28 >> 0x29 | uVar28 * 0x800000) ^ (uVar28 >> 0x12 | uVar28 << 0x2e) ^
             (uVar28 >> 0xe | uVar28 << 0x32));
    uVar30 = uVar30 + lVar27;
    uVar38 = lVar27 + ((uVar40 ^ uVar42) & (uVar39 ^ uVar40) ^ uVar40) +
             ((uVar39 >> 0x22 | uVar39 * 0x40000000) ^ (uVar39 >> 0x27 | uVar39 * 0x2000000) ^
             (uVar39 >> 0x1c | uVar39 << 0x24));
    lVar27 = uVar37 + *(longlong *)(pauVar33[-6] + 8) + (uVar28 & uVar30) + (~uVar30 & uVar29) +
             ((uVar30 >> 0x29 | uVar30 * 0x800000) ^ (uVar30 >> 0x12 | uVar30 << 0x2e) ^
             (uVar30 >> 0xe | uVar30 << 0x32));
    uVar42 = uVar42 + lVar27;
    uVar37 = lVar27 + ((uVar39 ^ uVar40) & (uVar38 ^ uVar39) ^ uVar39) +
             ((uVar38 >> 0x22 | uVar38 * 0x40000000) ^ (uVar38 >> 0x27 | uVar38 * 0x2000000) ^
             (uVar38 >> 0x1c | uVar38 << 0x24));
    lVar27 = uVar29 + *(longlong *)pauVar33[-4] + (uVar30 & uVar42) + (~uVar42 & uVar28) +
             ((uVar42 >> 0x29 | uVar42 * 0x800000) ^ (uVar42 >> 0x12 | uVar42 << 0x2e) ^
             (uVar42 >> 0xe | uVar42 << 0x32));
    uVar40 = uVar40 + lVar27;
    uVar29 = lVar27 + ((uVar38 ^ uVar39) & (uVar37 ^ uVar38) ^ uVar38) +
             ((uVar37 >> 0x22 | uVar37 * 0x40000000) ^ (uVar37 >> 0x27 | uVar37 * 0x2000000) ^
             (uVar37 >> 0x1c | uVar37 << 0x24));
    lVar27 = uVar28 + *(longlong *)(pauVar33[-4] + 8) + (uVar42 & uVar40) + (~uVar40 & uVar30) +
             ((uVar40 >> 0x29 | uVar40 * 0x800000) ^ (uVar40 >> 0x12 | uVar40 << 0x2e) ^
             (uVar40 >> 0xe | uVar40 << 0x32));
    uVar39 = uVar39 + lVar27;
    uVar28 = lVar27 + ((uVar37 ^ uVar38) & (uVar29 ^ uVar37) ^ uVar37) +
             ((uVar29 >> 0x22 | uVar29 * 0x40000000) ^ (uVar29 >> 0x27 | uVar29 * 0x2000000) ^
             (uVar29 >> 0x1c | uVar29 << 0x24));
    lVar27 = uVar30 + *(longlong *)pauVar33[-2] + (uVar40 & uVar39) + (~uVar39 & uVar42) +
             ((uVar39 >> 0x29 | uVar39 * 0x800000) ^ (uVar39 >> 0x12 | uVar39 << 0x2e) ^
             (uVar39 >> 0xe | uVar39 << 0x32));
    uVar38 = uVar38 + lVar27;
    uVar30 = lVar27 + ((uVar29 ^ uVar37) & (uVar28 ^ uVar29) ^ uVar29) +
             ((uVar28 >> 0x22 | uVar28 * 0x40000000) ^ (uVar28 >> 0x27 | uVar28 * 0x2000000) ^
             (uVar28 >> 0x1c | uVar28 << 0x24));
    lVar27 = uVar42 + *(longlong *)(pauVar33[-2] + 8) + (uVar39 & uVar38) + (~uVar38 & uVar40) +
             ((uVar38 >> 0x29 | uVar38 * 0x800000) ^ (uVar38 >> 0x12 | uVar38 << 0x2e) ^
             (uVar38 >> 0xe | uVar38 << 0x32));
    uVar37 = uVar37 + lVar27;
    uVar42 = lVar27 + ((uVar28 ^ uVar29) & (uVar30 ^ uVar28) ^ uVar28) +
             ((uVar30 >> 0x22 | uVar30 * 0x40000000) ^ (uVar30 >> 0x27 | uVar30 * 0x2000000) ^
             (uVar30 >> 0x1c | uVar30 << 0x24));
    lVar27 = uVar40 + *(longlong *)*pauVar1 + (uVar38 & uVar37) + (~uVar37 & uVar39) +
             ((uVar37 >> 0x29 | uVar37 * 0x800000) ^ (uVar37 >> 0x12 | uVar37 << 0x2e) ^
             (uVar37 >> 0xe | uVar37 << 0x32));
    uVar29 = uVar29 + lVar27;
    uVar40 = lVar27 + ((uVar30 ^ uVar28) & (uVar42 ^ uVar30) ^ uVar30) +
             ((uVar42 >> 0x22 | uVar42 * 0x40000000) ^ (uVar42 >> 0x27 | uVar42 * 0x2000000) ^
             (uVar42 >> 0x1c | uVar42 << 0x24));
    lVar27 = uVar39 + *(longlong *)(pauVar33[-0x10] + 8) + (uVar37 & uVar29) + (~uVar29 & uVar38) +
             ((uVar29 >> 0x29 | uVar29 * 0x800000) ^ (uVar29 >> 0x12 | uVar29 << 0x2e) ^
             (uVar29 >> 0xe | uVar29 << 0x32));
    uVar28 = uVar28 + lVar27;
    uVar39 = lVar27 + ((uVar42 ^ uVar30) & (uVar40 ^ uVar42) ^ uVar42) +
             ((uVar40 >> 0x22 | uVar40 * 0x40000000) ^ (uVar40 >> 0x27 | uVar40 * 0x2000000) ^
             (uVar40 >> 0x1c | uVar40 << 0x24));
    lVar27 = uVar38 + *(longlong *)pauVar33[-0xe] + (uVar29 & uVar28) + (~uVar28 & uVar37) +
             ((uVar28 >> 0x29 | uVar28 * 0x800000) ^ (uVar28 >> 0x12 | uVar28 << 0x2e) ^
             (uVar28 >> 0xe | uVar28 << 0x32));
    uVar30 = uVar30 + lVar27;
    uVar38 = lVar27 + ((uVar40 ^ uVar42) & (uVar39 ^ uVar40) ^ uVar40) +
             ((uVar39 >> 0x22 | uVar39 * 0x40000000) ^ (uVar39 >> 0x27 | uVar39 * 0x2000000) ^
             (uVar39 >> 0x1c | uVar39 << 0x24));
    lVar27 = uVar37 + *(longlong *)(pauVar33[-0xe] + 8) + (uVar28 & uVar30) + (~uVar30 & uVar29) +
             ((uVar30 >> 0x29 | uVar30 * 0x800000) ^ (uVar30 >> 0x12 | uVar30 << 0x2e) ^
             (uVar30 >> 0xe | uVar30 << 0x32));
    uVar42 = uVar42 + lVar27;
    uVar37 = lVar27 + ((uVar39 ^ uVar40) & (uVar38 ^ uVar39) ^ uVar39) +
             ((uVar38 >> 0x22 | uVar38 * 0x40000000) ^ (uVar38 >> 0x27 | uVar38 * 0x2000000) ^
             (uVar38 >> 0x1c | uVar38 << 0x24));
    lVar27 = uVar29 + *(longlong *)pauVar33[-0xc] + (uVar30 & uVar42) + (~uVar42 & uVar28) +
             ((uVar42 >> 0x29 | uVar42 * 0x800000) ^ (uVar42 >> 0x12 | uVar42 << 0x2e) ^
             (uVar42 >> 0xe | uVar42 << 0x32));
    uVar40 = uVar40 + lVar27;
    uVar29 = lVar27 + ((uVar38 ^ uVar39) & (uVar37 ^ uVar38) ^ uVar38) +
             ((uVar37 >> 0x22 | uVar37 * 0x40000000) ^ (uVar37 >> 0x27 | uVar37 * 0x2000000) ^
             (uVar37 >> 0x1c | uVar37 << 0x24));
    lVar27 = uVar28 + *(longlong *)(pauVar33[-0xc] + 8) + (uVar42 & uVar40) + (~uVar40 & uVar30) +
             ((uVar40 >> 0x29 | uVar40 * 0x800000) ^ (uVar40 >> 0x12 | uVar40 << 0x2e) ^
             (uVar40 >> 0xe | uVar40 << 0x32));
    uVar39 = uVar39 + lVar27;
    uVar28 = lVar27 + ((uVar37 ^ uVar38) & (uVar29 ^ uVar37) ^ uVar37) +
             ((uVar29 >> 0x22 | uVar29 * 0x40000000) ^ (uVar29 >> 0x27 | uVar29 * 0x2000000) ^
             (uVar29 >> 0x1c | uVar29 << 0x24));
    lVar27 = uVar30 + *(longlong *)pauVar33[-10] + (uVar40 & uVar39) + (~uVar39 & uVar42) +
             ((uVar39 >> 0x29 | uVar39 * 0x800000) ^ (uVar39 >> 0x12 | uVar39 << 0x2e) ^
             (uVar39 >> 0xe | uVar39 << 0x32));
    uVar38 = uVar38 + lVar27;
    uVar30 = lVar27 + ((uVar29 ^ uVar37) & (uVar28 ^ uVar29) ^ uVar29) +
             ((uVar28 >> 0x22 | uVar28 * 0x40000000) ^ (uVar28 >> 0x27 | uVar28 * 0x2000000) ^
             (uVar28 >> 0x1c | uVar28 << 0x24));
    lVar27 = uVar42 + *(longlong *)(pauVar33[-10] + 8) + (uVar39 & uVar38) + (~uVar38 & uVar40) +
             ((uVar38 >> 0x29 | uVar38 * 0x800000) ^ (uVar38 >> 0x12 | uVar38 << 0x2e) ^
             (uVar38 >> 0xe | uVar38 << 0x32));
    plVar2 = *(longlong **)pauVar33[0x40];
    pauVar32 = pauVar33 + 0x38;
    lVar26 = lVar27 + ((uVar28 ^ uVar29) & (uVar30 ^ uVar28) ^ uVar28) +
             ((uVar30 >> 0x22 | uVar30 * 0x40000000) ^ (uVar30 >> 0x27 | uVar30 * 0x2000000) ^
             (uVar30 >> 0x1c | uVar30 << 0x24)) + *plVar2;
    uVar30 = uVar30 + plVar2[1];
    uVar28 = uVar28 + plVar2[2];
    uVar29 = uVar29 + plVar2[3];
    uVar37 = uVar37 + lVar27 + plVar2[4];
    uVar38 = uVar38 + plVar2[5];
    uVar39 = uVar39 + plVar2[6];
    uVar40 = uVar40 + plVar2[7];
    *plVar2 = lVar26;
    plVar2[1] = uVar30;
    plVar2[2] = uVar28;
    plVar2[3] = uVar29;
    plVar2[4] = uVar37;
    plVar2[5] = uVar38;
    plVar2[6] = uVar39;
    plVar2[7] = uVar40;
    if (pauVar35 == *(undefined1 (**) [16])pauVar33[0x41]) {
      return;
    }
    uVar42 = 0;
    uVar36 = uVar30 ^ uVar28;
    do {
      uVar42 = lVar26 + uVar42;
      lVar27 = uVar40 + *(longlong *)pauVar32[1] + (uVar38 & uVar37) + (~uVar37 & uVar39) +
               ((uVar37 >> 0x29 | uVar37 << 0x17) ^ (uVar37 >> 0x12 | uVar37 << 0x2e) ^
               (uVar37 >> 0xe | uVar37 << 0x32));
      uVar29 = uVar29 + lVar27;
      uVar40 = lVar27 + (uVar36 & (uVar42 ^ uVar30) ^ uVar30) +
               ((uVar42 >> 0x22 | uVar42 * 0x40000000) ^ (uVar42 >> 0x27 | uVar42 * 0x2000000) ^
               (uVar42 >> 0x1c | uVar42 << 0x24));
      lVar27 = uVar39 + *(longlong *)(pauVar32[1] + 8) + (uVar37 & uVar29) + (~uVar29 & uVar38) +
               ((uVar29 >> 0x29 | uVar29 * 0x800000) ^ (uVar29 >> 0x12 | uVar29 << 0x2e) ^
               (uVar29 >> 0xe | uVar29 << 0x32));
      uVar28 = uVar28 + lVar27;
      uVar39 = lVar27 + ((uVar42 ^ uVar30) & (uVar40 ^ uVar42) ^ uVar42) +
               ((uVar40 >> 0x22 | uVar40 * 0x40000000) ^ (uVar40 >> 0x27 | uVar40 * 0x2000000) ^
               (uVar40 >> 0x1c | uVar40 << 0x24));
      lVar27 = uVar38 + *(longlong *)pauVar32[3] + (uVar29 & uVar28) + (~uVar28 & uVar37) +
               ((uVar28 >> 0x29 | uVar28 * 0x800000) ^ (uVar28 >> 0x12 | uVar28 << 0x2e) ^
               (uVar28 >> 0xe | uVar28 << 0x32));
      uVar30 = uVar30 + lVar27;
      uVar38 = lVar27 + ((uVar40 ^ uVar42) & (uVar39 ^ uVar40) ^ uVar40) +
               ((uVar39 >> 0x22 | uVar39 * 0x40000000) ^ (uVar39 >> 0x27 | uVar39 * 0x2000000) ^
               (uVar39 >> 0x1c | uVar39 << 0x24));
      lVar27 = uVar37 + *(longlong *)(pauVar32[3] + 8) + (uVar28 & uVar30) + (~uVar30 & uVar29) +
               ((uVar30 >> 0x29 | uVar30 * 0x800000) ^ (uVar30 >> 0x12 | uVar30 << 0x2e) ^
               (uVar30 >> 0xe | uVar30 << 0x32));
      uVar42 = uVar42 + lVar27;
      uVar37 = lVar27 + ((uVar39 ^ uVar40) & (uVar38 ^ uVar39) ^ uVar39) +
               ((uVar38 >> 0x22 | uVar38 * 0x40000000) ^ (uVar38 >> 0x27 | uVar38 * 0x2000000) ^
               (uVar38 >> 0x1c | uVar38 << 0x24));
      lVar27 = uVar29 + *(longlong *)pauVar32[5] + (uVar30 & uVar42) + (~uVar42 & uVar28) +
               ((uVar42 >> 0x29 | uVar42 * 0x800000) ^ (uVar42 >> 0x12 | uVar42 << 0x2e) ^
               (uVar42 >> 0xe | uVar42 << 0x32));
      uVar40 = uVar40 + lVar27;
      uVar29 = lVar27 + ((uVar38 ^ uVar39) & (uVar37 ^ uVar38) ^ uVar38) +
               ((uVar37 >> 0x22 | uVar37 * 0x40000000) ^ (uVar37 >> 0x27 | uVar37 * 0x2000000) ^
               (uVar37 >> 0x1c | uVar37 << 0x24));
      lVar27 = uVar28 + *(longlong *)(pauVar32[5] + 8) + (uVar42 & uVar40) + (~uVar40 & uVar30) +
               ((uVar40 >> 0x29 | uVar40 * 0x800000) ^ (uVar40 >> 0x12 | uVar40 << 0x2e) ^
               (uVar40 >> 0xe | uVar40 << 0x32));
      uVar39 = uVar39 + lVar27;
      uVar28 = lVar27 + ((uVar37 ^ uVar38) & (uVar29 ^ uVar37) ^ uVar37) +
               ((uVar29 >> 0x22 | uVar29 * 0x40000000) ^ (uVar29 >> 0x27 | uVar29 * 0x2000000) ^
               (uVar29 >> 0x1c | uVar29 << 0x24));
      lVar27 = uVar30 + *(longlong *)pauVar32[7] + (uVar40 & uVar39) + (~uVar39 & uVar42) +
               ((uVar39 >> 0x29 | uVar39 * 0x800000) ^ (uVar39 >> 0x12 | uVar39 << 0x2e) ^
               (uVar39 >> 0xe | uVar39 << 0x32));
      uVar38 = uVar38 + lVar27;
      uVar30 = lVar27 + ((uVar29 ^ uVar37) & (uVar28 ^ uVar29) ^ uVar29) +
               ((uVar28 >> 0x22 | uVar28 * 0x40000000) ^ (uVar28 >> 0x27 | uVar28 * 0x2000000) ^
               (uVar28 >> 0x1c | uVar28 << 0x24));
      lVar26 = uVar42 + *(longlong *)(pauVar32[7] + 8) + (uVar39 & uVar38) + (~uVar38 & uVar40) +
               ((uVar38 >> 0x29 | uVar38 * 0x800000) ^ (uVar38 >> 0x12 | uVar38 << 0x2e) ^
               (uVar38 >> 0xe | uVar38 << 0x32));
      uVar36 = uVar30 ^ uVar28;
      uVar37 = uVar37 + lVar26;
      uVar42 = (uVar30 >> 0x22 | uVar30 * 0x40000000) ^ (uVar30 >> 0x27 | uVar30 * 0x2000000) ^
               (uVar30 >> 0x1c | uVar30 << 0x24);
      lVar26 = lVar26 + ((uVar28 ^ uVar29) & uVar36 ^ uVar28);
      pauVar32 = pauVar32 + -8;
    } while (pauVar1 <= pauVar32);
    plVar2 = *(longlong **)pauVar33[0x40];
    pauVar32 = pauVar33 + 0x38;
    lVar27 = lVar26 + uVar42 + *plVar2;
    uVar30 = uVar30 + plVar2[1];
    uVar28 = uVar28 + plVar2[2];
    uVar29 = uVar29 + plVar2[3];
    uVar37 = uVar37 + plVar2[4];
    uVar38 = uVar38 + plVar2[5];
    pauVar35 = pauVar35 + 0x10;
    uVar39 = uVar39 + plVar2[6];
    uVar40 = uVar40 + plVar2[7];
    pauVar1 = *(undefined1 (**) [16])pauVar33[0x41];
    *plVar2 = lVar27;
    pauVar41 = pauVar35;
    if (pauVar35 == pauVar1) {
      pauVar41 = pauVar32;
    }
    plVar2[1] = uVar30;
    plVar2[2] = uVar28;
    plVar2[3] = uVar29;
    plVar2[4] = uVar37;
    plVar2[5] = uVar38;
    plVar2[6] = uVar39;
    plVar2[7] = uVar40;
  } while (pauVar35 <= pauVar1);
  return;
}


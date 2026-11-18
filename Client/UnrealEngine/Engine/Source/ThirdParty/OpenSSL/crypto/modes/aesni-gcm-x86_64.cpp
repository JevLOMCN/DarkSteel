// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenSSL
// Functions: 6

// _aesni_ctr32_ghash_6x @ 140df8700

void _aesni_ctr32_ghash_6x
               (undefined1 (*param_1) [16],ulonglong param_2,undefined1 (*param_3) [16],
               longlong param_4,undefined8 param_5,undefined8 param_6,ulonglong param_7,
               ulonglong param_8,ulonglong param_9,ulonglong param_10,ulonglong param_11,
               ulonglong param_12,ulonglong param_13,ulonglong param_14,undefined8 param_15,
               undefined8 param_16)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  undefined8 uVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
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
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  char cVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  char cVar53;
  char cVar54;
  char cVar55;
  char cVar56;
  char cVar57;
  char cVar58;
  char cVar59;
  int iVar60;
  int iVar61;
  int iVar62;
  int iVar63;
  uint unaff_EBX;
  uint unaff_EBP;
  undefined1 (*unaff_RSI) [16];
  undefined1 (*unaff_RDI) [16];
  undefined1 (*in_R11) [16];
  undefined8 *unaff_R14;
  undefined8 *unaff_R15;
  bool bVar64;
  undefined1 in_ZMM1 [64];
  undefined1 auVar65 [64];
  ulonglong unaff_XMM7_Qa;
  ulonglong unaff_XMM7_Qb;
  ulonglong uVar66;
  ulonglong uVar67;
  undefined1 in_ZMM8 [64];
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
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 local_res18 [16];
  
  cVar44 = in_R11[2][0];
  cVar45 = in_R11[2][1];
  cVar46 = in_R11[2][2];
  cVar47 = in_R11[2][3];
  cVar48 = in_R11[2][4];
  cVar49 = in_R11[2][5];
  cVar50 = in_R11[2][6];
  cVar51 = in_R11[2][7];
  cVar52 = in_R11[2][8];
  cVar53 = in_R11[2][9];
  cVar54 = in_R11[2][10];
  cVar55 = in_R11[2][0xb];
  cVar56 = in_R11[2][0xc];
  cVar57 = in_R11[2][0xd];
  cVar58 = in_R11[2][0xe];
  cVar59 = in_R11[2][0xf];
  auVar65 = ZEXT1664((undefined1  [16])0x0);
  auVar97 = param_1[-8];
  auVar91[0] = in_ZMM1[0] + cVar44;
  auVar91[1] = in_ZMM1[1] + cVar45;
  auVar91[2] = in_ZMM1[2] + cVar46;
  auVar91[3] = in_ZMM1[3] + cVar47;
  auVar91[4] = in_ZMM1[4] + cVar48;
  auVar91[5] = in_ZMM1[5] + cVar49;
  auVar91[6] = in_ZMM1[6] + cVar50;
  auVar91[7] = in_ZMM1[7] + cVar51;
  auVar91[8] = in_ZMM1[8] + cVar52;
  auVar91[9] = in_ZMM1[9] + cVar53;
  auVar91[10] = in_ZMM1[10] + cVar54;
  auVar91[0xb] = in_ZMM1[0xb] + cVar55;
  auVar91[0xc] = in_ZMM1[0xc] + cVar56;
  auVar91[0xd] = in_ZMM1[0xd] + cVar57;
  auVar91[0xe] = in_ZMM1[0xe] + cVar58;
  auVar91[0xf] = in_ZMM1[0xf] + cVar59;
  auVar87[0] = auVar91[0] + cVar44;
  auVar87[1] = auVar91[1] + cVar45;
  auVar87[2] = auVar91[2] + cVar46;
  auVar87[3] = auVar91[3] + cVar47;
  auVar87[4] = auVar91[4] + cVar48;
  auVar87[5] = auVar91[5] + cVar49;
  auVar87[6] = auVar91[6] + cVar50;
  auVar87[7] = auVar91[7] + cVar51;
  auVar87[8] = auVar91[8] + cVar52;
  auVar87[9] = auVar91[9] + cVar53;
  auVar87[10] = auVar91[10] + cVar54;
  auVar87[0xb] = auVar91[0xb] + cVar55;
  auVar87[0xc] = auVar91[0xc] + cVar56;
  auVar87[0xd] = auVar91[0xd] + cVar57;
  auVar87[0xe] = auVar91[0xe] + cVar58;
  auVar87[0xf] = auVar91[0xf] + cVar59;
  auVar88[0] = auVar87[0] + cVar44;
  auVar88[1] = auVar87[1] + cVar45;
  auVar88[2] = auVar87[2] + cVar46;
  auVar88[3] = auVar87[3] + cVar47;
  auVar88[4] = auVar87[4] + cVar48;
  auVar88[5] = auVar87[5] + cVar49;
  auVar88[6] = auVar87[6] + cVar50;
  auVar88[7] = auVar87[7] + cVar51;
  auVar88[8] = auVar87[8] + cVar52;
  auVar88[9] = auVar87[9] + cVar53;
  auVar88[10] = auVar87[10] + cVar54;
  auVar88[0xb] = auVar87[0xb] + cVar55;
  auVar88[0xc] = auVar87[0xc] + cVar56;
  auVar88[0xd] = auVar87[0xd] + cVar57;
  auVar88[0xe] = auVar87[0xe] + cVar58;
  auVar88[0xf] = auVar87[0xf] + cVar59;
  auVar86[0] = auVar88[0] + cVar44;
  auVar86[1] = auVar88[1] + cVar45;
  auVar86[2] = auVar88[2] + cVar46;
  auVar86[3] = auVar88[3] + cVar47;
  auVar86[4] = auVar88[4] + cVar48;
  auVar86[5] = auVar88[5] + cVar49;
  auVar86[6] = auVar88[6] + cVar50;
  auVar86[7] = auVar88[7] + cVar51;
  auVar86[8] = auVar88[8] + cVar52;
  auVar86[9] = auVar88[9] + cVar53;
  auVar86[10] = auVar88[10] + cVar54;
  auVar86[0xb] = auVar88[0xb] + cVar55;
  auVar86[0xc] = auVar88[0xc] + cVar56;
  auVar86[0xd] = auVar88[0xd] + cVar57;
  auVar86[0xe] = auVar88[0xe] + cVar58;
  auVar86[0xf] = auVar88[0xf] + cVar59;
  auVar95[0] = auVar86[0] + cVar44;
  auVar95[1] = auVar86[1] + cVar45;
  auVar95[2] = auVar86[2] + cVar46;
  auVar95[3] = auVar86[3] + cVar47;
  auVar95[4] = auVar86[4] + cVar48;
  auVar95[5] = auVar86[5] + cVar49;
  auVar95[6] = auVar86[6] + cVar50;
  auVar95[7] = auVar86[7] + cVar51;
  auVar95[8] = auVar86[8] + cVar52;
  auVar95[9] = auVar86[9] + cVar53;
  auVar95[10] = auVar86[10] + cVar54;
  auVar95[0xb] = auVar86[0xb] + cVar55;
  auVar95[0xc] = auVar86[0xc] + cVar56;
  auVar95[0xd] = auVar86[0xd] + cVar57;
  auVar95[0xe] = auVar86[0xe] + cVar58;
  auVar95[0xf] = auVar86[0xf] + cVar59;
  auVar94 = in_ZMM1._0_16_ ^ auVar97;
  local_res18 = (undefined1  [16])0x0;
  while( true ) {
    param_2 = param_2 - 6;
    bVar64 = unaff_EBX < 0xfa000000;
    unaff_EBX = unaff_EBX + 0x6000000;
    if (bVar64) {
      uVar66 = *(ulonglong *)(param_4 + -0x20);
      uVar67 = *(ulonglong *)(param_4 + -0x18);
      auVar73[0] = auVar95[0] + cVar44;
      auVar73[1] = auVar95[1] + cVar45;
      auVar73[2] = auVar95[2] + cVar46;
      auVar73[3] = auVar95[3] + cVar47;
      auVar73[4] = auVar95[4] + cVar48;
      auVar73[5] = auVar95[5] + cVar49;
      auVar73[6] = auVar95[6] + cVar50;
      auVar73[7] = auVar95[7] + cVar51;
      auVar73[8] = auVar95[8] + cVar52;
      auVar73[9] = auVar95[9] + cVar53;
      auVar73[10] = auVar95[10] + cVar54;
      auVar73[0xb] = auVar95[0xb] + cVar55;
      auVar73[0xc] = auVar95[0xc] + cVar56;
      auVar73[0xd] = auVar95[0xd] + cVar57;
      auVar73[0xe] = auVar95[0xe] + cVar58;
      auVar73[0xf] = auVar95[0xf] + cVar59;
    }
    else {
      auVar73 = *in_R11;
      auVar91 = vpshufb_avx(in_ZMM1._0_16_,auVar73);
      iVar60 = *(int *)in_R11[3];
      iVar61 = *(int *)(in_R11[3] + 4);
      iVar62 = *(int *)(in_R11[3] + 8);
      iVar63 = *(int *)(in_R11[3] + 0xc);
      auVar80._0_4_ = auVar91._0_4_ + *(int *)in_R11[4];
      auVar80._4_4_ = auVar91._4_4_ + *(int *)(in_R11[4] + 4);
      auVar80._8_4_ = auVar91._8_4_ + *(int *)(in_R11[4] + 8);
      auVar80._12_4_ = auVar91._12_4_ + *(int *)(in_R11[4] + 0xc);
      auVar79._0_4_ = auVar91._0_4_ + iVar60;
      auVar79._4_4_ = auVar91._4_4_ + iVar61;
      auVar79._8_4_ = auVar91._8_4_ + iVar62;
      auVar79._12_4_ = auVar91._12_4_ + iVar63;
      uVar66 = *(ulonglong *)(param_4 + -0x20);
      uVar67 = *(ulonglong *)(param_4 + -0x18);
      auVar68._0_4_ = auVar80._0_4_ + iVar60;
      auVar68._4_4_ = auVar80._4_4_ + iVar61;
      auVar68._8_4_ = auVar80._8_4_ + iVar62;
      auVar68._12_4_ = auVar80._12_4_ + iVar63;
      auVar91 = vpshufb_avx(auVar80,auVar73);
      auVar74._0_4_ = auVar79._0_4_ + iVar60;
      auVar74._4_4_ = auVar79._4_4_ + iVar61;
      auVar74._8_4_ = auVar79._8_4_ + iVar62;
      auVar74._12_4_ = auVar79._12_4_ + iVar63;
      auVar87 = vpshufb_avx(auVar79,auVar73);
      auVar81._0_4_ = auVar68._0_4_ + iVar60;
      auVar81._4_4_ = auVar68._4_4_ + iVar61;
      auVar81._8_4_ = auVar68._8_4_ + iVar62;
      auVar81._12_4_ = auVar68._12_4_ + iVar63;
      auVar88 = vpshufb_avx(auVar68,auVar73);
      auVar8._0_4_ = auVar74._0_4_ + iVar60;
      auVar8._4_4_ = auVar74._4_4_ + iVar61;
      auVar8._8_4_ = auVar74._8_4_ + iVar62;
      auVar8._12_4_ = auVar74._12_4_ + iVar63;
      auVar86 = vpshufb_avx(auVar74,auVar73);
      auVar95 = vpshufb_avx(auVar81,auVar73);
      auVar73 = vpshufb_avx(auVar8,auVar73);
    }
    *param_3 = auVar73;
    auVar92._8_8_ = 0;
    auVar92._0_8_ = unaff_XMM7_Qa;
    auVar89._8_8_ = 0;
    auVar89._0_8_ = uVar67;
    auVar73 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar92 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar73 = auVar73 ^ auVar89 << uVar7;
      }
    }
    auVar80 = param_1[-7];
    auVar69._8_8_ = 0;
    auVar69._0_8_ = unaff_XMM7_Qb;
    auVar75._8_8_ = 0;
    auVar75._0_8_ = uVar66;
    auVar79 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar69 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar79 = auVar79 ^ auVar75 << uVar7;
      }
    }
    auVar68 = aesenc(auVar94,auVar80);
    auVar82._8_8_ = 0;
    auVar82._0_8_ = unaff_XMM7_Qa;
    auVar96._8_8_ = 0;
    auVar96._0_8_ = uVar66;
    auVar94 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar82 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar94 = auVar94 ^ auVar96 << uVar7;
      }
    }
    auVar74 = aesenc(auVar91 ^ auVar97,auVar80);
    auVar70._8_8_ = 0;
    auVar70._0_8_ = unaff_XMM7_Qb;
    auVar76._8_8_ = 0;
    auVar76._0_8_ = uVar67;
    auVar91 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar70 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar91 = auVar91 ^ auVar76 << uVar7;
      }
    }
    auVar81 = aesenc(auVar87 ^ auVar97,auVar80);
    auVar88 = aesenc(auVar88 ^ auVar97,auVar80);
    auVar83._8_8_ = 0;
    auVar83._0_8_ = param_7;
    auVar93._8_8_ = 0;
    auVar93._0_8_ = *(ulonglong *)(param_4 + -0x10);
    auVar87 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar83 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar87 = auVar87 ^ auVar93 << uVar7;
      }
    }
    auVar92 = aesenc(auVar86 ^ auVar97,auVar80);
    auVar86 = param_1[-6];
    auVar71._8_8_ = 0;
    auVar71._0_8_ = param_7;
    auVar77._8_8_ = 0;
    auVar77._0_8_ = *(ulonglong *)(param_4 + -8);
    auVar8 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar71 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar8 = auVar8 ^ auVar77 << uVar7;
      }
    }
    auVar95 = aesenc(auVar95 ^ auVar97,auVar80);
    auVar84._8_8_ = 0;
    auVar84._0_8_ = param_8;
    auVar90._8_8_ = 0;
    auVar90._0_8_ = *(ulonglong *)(param_4 + -0x10);
    auVar97 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar84 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar97 = auVar97 ^ auVar90 << uVar7;
      }
    }
    unaff_R14 = (undefined8 *)((longlong)unaff_R14 + (-(ulonglong)(unaff_R14 <= unaff_R15) & 0x60));
    auVar68 = aesenc(auVar68,auVar86);
    auVar72._8_8_ = 0;
    auVar72._0_8_ = param_8;
    auVar78._8_8_ = 0;
    auVar78._0_8_ = *(ulonglong *)(param_4 + -8);
    auVar80 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar72 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar80 = auVar80 ^ auVar78 << uVar7;
      }
    }
    auVar74 = aesenc(auVar74,auVar86);
    uVar5 = unaff_R14[0xb];
    unaff_XMM7_Qa =
         CONCAT17((char)uVar5,
                  CONCAT16((char)((ulonglong)uVar5 >> 8),
                           CONCAT15((char)((ulonglong)uVar5 >> 0x10),
                                    CONCAT14((char)((ulonglong)uVar5 >> 0x18),
                                             CONCAT13((char)((ulonglong)uVar5 >> 0x20),
                                                      CONCAT12((char)((ulonglong)uVar5 >> 0x28),
                                                               CONCAT11((char)((ulonglong)uVar5 >>
                                                                              0x30),
                                                                        (char)((ulonglong)uVar5 >>
                                                                              0x38))))))));
    auVar81 = aesenc(auVar81,auVar86);
    uVar5 = unaff_R14[10];
    unaff_XMM7_Qb =
         CONCAT17((char)uVar5,
                  CONCAT16((char)((ulonglong)uVar5 >> 8),
                           CONCAT15((char)((ulonglong)uVar5 >> 0x10),
                                    CONCAT14((char)((ulonglong)uVar5 >> 0x18),
                                             CONCAT13((char)((ulonglong)uVar5 >> 0x20),
                                                      CONCAT12((char)((ulonglong)uVar5 >> 0x28),
                                                               CONCAT11((char)((ulonglong)uVar5 >>
                                                                              0x30),
                                                                        (char)((ulonglong)uVar5 >>
                                                                              0x38))))))));
    auVar89 = aesenc(auVar88,auVar86);
    auVar92 = aesenc(auVar92,auVar86);
    auVar95 = aesenc(auVar95,auVar86);
    auVar88 = param_1[-5];
    auVar85._8_8_ = 0;
    auVar85._0_8_ = param_9;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = *(ulonglong *)(param_4 + 0x10);
    auVar86 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar85 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar86 = auVar86 ^ auVar12 << uVar7;
      }
    }
    auVar69 = aesenc(auVar68,auVar88);
    auVar24._8_8_ = 0;
    auVar24._0_8_ = param_9;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = *(ulonglong *)(param_4 + 0x18);
    auVar68 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar24 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar68 = auVar68 ^ auVar30 << uVar7;
      }
    }
    auVar75 = aesenc(auVar74,auVar88);
    auVar16._8_8_ = 0;
    auVar16._0_8_ = param_10;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = *(ulonglong *)(param_4 + 0x10);
    auVar74 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar16 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar74 = auVar74 ^ auVar20 << uVar7;
      }
    }
    auVar82 = aesenc(auVar81,auVar88);
    auVar36._8_8_ = 0;
    auVar36._0_8_ = param_10;
    auVar40._8_8_ = 0;
    auVar40._0_8_ = *(ulonglong *)(param_4 + 0x18);
    auVar81 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar36 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar81 = auVar81 ^ auVar40 << uVar7;
      }
    }
    auVar89 = aesenc(auVar89,auVar88);
    auVar92 = aesenc(auVar92,auVar88);
    auVar96 = aesenc(auVar95,auVar88);
    auVar88 = param_1[-4];
    auVar9._8_8_ = 0;
    auVar9._0_8_ = param_11;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = *(ulonglong *)(param_4 + 0x20);
    auVar95 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar9 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar95 = auVar95 ^ auVar13 << uVar7;
      }
    }
    auVar70 = aesenc(auVar69,auVar88);
    auVar25._8_8_ = 0;
    auVar25._0_8_ = param_11;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = *(ulonglong *)(param_4 + 0x28);
    auVar69 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar25 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar69 = auVar69 ^ auVar31 << uVar7;
      }
    }
    auVar76 = aesenc(auVar75,auVar88);
    uVar5 = unaff_R14[9];
    param_7 = CONCAT17((char)uVar5,
                       CONCAT16((char)((ulonglong)uVar5 >> 8),
                                CONCAT15((char)((ulonglong)uVar5 >> 0x10),
                                         CONCAT14((char)((ulonglong)uVar5 >> 0x18),
                                                  CONCAT13((char)((ulonglong)uVar5 >> 0x20),
                                                           CONCAT12((char)((ulonglong)uVar5 >> 0x28)
                                                                    ,CONCAT11((char)((ulonglong)
                                                                                     uVar5 >> 0x30),
                                                                              (char)((ulonglong)
                                                                                     uVar5 >> 0x38))
                                                                   ))))));
    auVar17._8_8_ = 0;
    auVar17._0_8_ = param_12;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = *(ulonglong *)(param_4 + 0x20);
    auVar75 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar17 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar75 = auVar75 ^ auVar21 << uVar7;
      }
    }
    auVar83 = aesenc(auVar82,auVar88);
    uVar5 = unaff_R14[8];
    param_8 = CONCAT17((char)uVar5,
                       CONCAT16((char)((ulonglong)uVar5 >> 8),
                                CONCAT15((char)((ulonglong)uVar5 >> 0x10),
                                         CONCAT14((char)((ulonglong)uVar5 >> 0x18),
                                                  CONCAT13((char)((ulonglong)uVar5 >> 0x20),
                                                           CONCAT12((char)((ulonglong)uVar5 >> 0x28)
                                                                    ,CONCAT11((char)((ulonglong)
                                                                                     uVar5 >> 0x30),
                                                                              (char)((ulonglong)
                                                                                     uVar5 >> 0x38))
                                                                   ))))));
    auVar37._8_8_ = 0;
    auVar37._0_8_ = param_12;
    auVar41._8_8_ = 0;
    auVar41._0_8_ = *(ulonglong *)(param_4 + 0x28);
    auVar82 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar37 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar82 = auVar82 ^ auVar41 << uVar7;
      }
    }
    auVar89 = aesenc(auVar89,auVar88);
    auVar93 = aesenc(auVar92,auVar88);
    auVar96 = aesenc(auVar96,auVar88);
    auVar88 = param_1[-3];
    auVar10._8_8_ = 0;
    auVar10._0_8_ = param_13;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = *(ulonglong *)(param_4 + 0x40);
    auVar92 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar10 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar92 = auVar92 ^ auVar14 << uVar7;
      }
    }
    auVar71 = aesenc(auVar70,auVar88);
    auVar26._8_8_ = 0;
    auVar26._0_8_ = param_13;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = *(ulonglong *)(param_4 + 0x48);
    auVar70 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar26 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar70 = auVar70 ^ auVar32 << uVar7;
      }
    }
    auVar77 = aesenc(auVar76,auVar88);
    uVar5 = unaff_R14[7];
    param_9 = CONCAT17((char)uVar5,
                       CONCAT16((char)((ulonglong)uVar5 >> 8),
                                CONCAT15((char)((ulonglong)uVar5 >> 0x10),
                                         CONCAT14((char)((ulonglong)uVar5 >> 0x18),
                                                  CONCAT13((char)((ulonglong)uVar5 >> 0x20),
                                                           CONCAT12((char)((ulonglong)uVar5 >> 0x28)
                                                                    ,CONCAT11((char)((ulonglong)
                                                                                     uVar5 >> 0x30),
                                                                              (char)((ulonglong)
                                                                                     uVar5 >> 0x38))
                                                                   ))))));
    auVar18._8_8_ = 0;
    auVar18._0_8_ = param_14;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = *(ulonglong *)(param_4 + 0x40);
    auVar76 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar18 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar76 = auVar76 ^ auVar22 << uVar7;
      }
    }
    auVar6._8_8_ = param_16;
    auVar6._0_8_ = param_15;
    auVar6 = in_ZMM8._0_16_ ^ auVar65._0_16_ ^ local_res18 ^ auVar6;
    auVar84 = aesenc(auVar83,auVar88);
    uVar5 = unaff_R14[6];
    param_10 = CONCAT17((char)uVar5,
                        CONCAT16((char)((ulonglong)uVar5 >> 8),
                                 CONCAT15((char)((ulonglong)uVar5 >> 0x10),
                                          CONCAT14((char)((ulonglong)uVar5 >> 0x18),
                                                   CONCAT13((char)((ulonglong)uVar5 >> 0x20),
                                                            CONCAT12((char)((ulonglong)uVar5 >> 0x28
                                                                           ),CONCAT11((char)((
                                                  ulonglong)uVar5 >> 0x30),
                                                  (char)((ulonglong)uVar5 >> 0x38))))))));
    auVar38._8_8_ = 0;
    auVar38._0_8_ = param_14;
    auVar42._8_8_ = 0;
    auVar42._0_8_ = *(ulonglong *)(param_4 + 0x48);
    auVar83 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar38 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar83 = auVar83 ^ auVar42 << uVar7;
      }
    }
    auVar90 = aesenc(auVar89,auVar88);
    auVar93 = aesenc(auVar93,auVar88);
    auVar96 = aesenc(auVar96,auVar88);
    auVar88 = param_1[-2];
    uVar66 = auVar6._0_8_;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar66;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = *(ulonglong *)(param_4 + 0x58);
    auVar89 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar27 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar89 = auVar89 ^ auVar33 << uVar7;
      }
    }
    auVar72 = aesenc(auVar71,auVar88);
    uVar67 = auVar6._8_8_;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar67;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = *(ulonglong *)(param_4 + 0x50);
    auVar71 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar19 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar71 = auVar71 ^ auVar23 << uVar7;
      }
    }
    auVar78 = aesenc(auVar77,auVar88);
    uVar5 = unaff_R14[5];
    param_11 = CONCAT17((char)uVar5,
                        CONCAT16((char)((ulonglong)uVar5 >> 8),
                                 CONCAT15((char)((ulonglong)uVar5 >> 0x10),
                                          CONCAT14((char)((ulonglong)uVar5 >> 0x18),
                                                   CONCAT13((char)((ulonglong)uVar5 >> 0x20),
                                                            CONCAT12((char)((ulonglong)uVar5 >> 0x28
                                                                           ),CONCAT11((char)((
                                                  ulonglong)uVar5 >> 0x30),
                                                  (char)((ulonglong)uVar5 >> 0x38))))))));
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar66;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = *(ulonglong *)(param_4 + 0x50);
    auVar77 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar11 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar77 = auVar77 ^ auVar15 << uVar7;
      }
    }
    auVar85 = aesenc(auVar84,auVar88);
    uVar5 = unaff_R14[4];
    param_12 = CONCAT17((char)uVar5,
                        CONCAT16((char)((ulonglong)uVar5 >> 8),
                                 CONCAT15((char)((ulonglong)uVar5 >> 0x10),
                                          CONCAT14((char)((ulonglong)uVar5 >> 0x18),
                                                   CONCAT13((char)((ulonglong)uVar5 >> 0x20),
                                                            CONCAT12((char)((ulonglong)uVar5 >> 0x28
                                                                           ),CONCAT11((char)((
                                                  ulonglong)uVar5 >> 0x30),
                                                  (char)((ulonglong)uVar5 >> 0x38))))))));
    auVar39._8_8_ = 0;
    auVar39._0_8_ = uVar67;
    auVar43._8_8_ = 0;
    auVar43._0_8_ = *(ulonglong *)(param_4 + 0x58);
    auVar84 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar39 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar84 = auVar84 ^ auVar43 << uVar7;
      }
    }
    auVar90 = aesenc(auVar90,auVar88);
    auVar93 = aesenc(auVar93,auVar88);
    auVar96 = aesenc(auVar96,auVar88);
    auVar71 = auVar79 ^ auVar73 ^ auVar8 ^ auVar97 ^ auVar68 ^ auVar74 ^ auVar69 ^ auVar75 ^ auVar70
              ^ auVar76 ^ auVar89 ^ auVar71;
    auVar97 = param_1[-1];
    auVar88 = vpslldq_avx(auVar71,8);
    auVar73 = aesenc(auVar72,auVar97);
    auVar79 = aesenc(auVar78,auVar97);
    auVar88 = auVar94 ^ auVar87 ^ auVar86 ^ auVar95 ^ auVar92 ^ auVar77 ^ auVar88;
    uVar5 = unaff_R14[3];
    param_13 = CONCAT17((char)uVar5,
                        CONCAT16((char)((ulonglong)uVar5 >> 8),
                                 CONCAT15((char)((ulonglong)uVar5 >> 0x10),
                                          CONCAT14((char)((ulonglong)uVar5 >> 0x18),
                                                   CONCAT13((char)((ulonglong)uVar5 >> 0x20),
                                                            CONCAT12((char)((ulonglong)uVar5 >> 0x28
                                                                           ),CONCAT11((char)((
                                                  ulonglong)uVar5 >> 0x30),
                                                  (char)((ulonglong)uVar5 >> 0x38))))))));
    auVar86 = aesenc(auVar85,auVar97);
    uVar5 = unaff_R14[2];
    param_14 = CONCAT17((char)uVar5,
                        CONCAT16((char)((ulonglong)uVar5 >> 8),
                                 CONCAT15((char)((ulonglong)uVar5 >> 0x10),
                                          CONCAT14((char)((ulonglong)uVar5 >> 0x18),
                                                   CONCAT13((char)((ulonglong)uVar5 >> 0x20),
                                                            CONCAT12((char)((ulonglong)uVar5 >> 0x28
                                                                           ),CONCAT11((char)((
                                                  ulonglong)uVar5 >> 0x30),
                                                  (char)((ulonglong)uVar5 >> 0x38))))))));
    auVar94 = vpalignr_avx(auVar88,auVar88,8);
    auVar28._8_8_ = 0;
    auVar28._0_8_ = auVar88._0_8_;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = *(ulonglong *)(in_R11[1] + 8);
    auVar87 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar28 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar87 = auVar87 ^ auVar34 << uVar7;
      }
    }
    auVar95 = aesenc(auVar90,auVar97);
    auVar68 = aesenc(auVar93,auVar97);
    auVar88 = *param_1;
    auVar74 = aesenc(auVar96,auVar97);
    auVar73 = aesenc(auVar73,auVar88);
    auVar97 = param_1[1];
    auVar79 = aesenc(auVar79,auVar88);
    local_res18 = vpsrldq_avx(auVar71,8);
    auVar86 = aesenc(auVar86,auVar88);
    local_res18 = auVar91 ^ auVar80 ^ auVar81 ^ auVar82 ^ auVar83 ^ auVar84 ^ local_res18;
    auVar91 = aesenc(auVar95,auVar88);
    auVar87 = auVar87 ^ auVar94;
    uVar5 = unaff_R14[1];
    param_15 = CONCAT17((char)uVar5,
                        CONCAT16((char)((ulonglong)uVar5 >> 8),
                                 CONCAT15((char)((ulonglong)uVar5 >> 0x10),
                                          CONCAT14((char)((ulonglong)uVar5 >> 0x18),
                                                   CONCAT13((char)((ulonglong)uVar5 >> 0x20),
                                                            CONCAT12((char)((ulonglong)uVar5 >> 0x28
                                                                           ),CONCAT11((char)((
                                                  ulonglong)uVar5 >> 0x30),
                                                  (char)((ulonglong)uVar5 >> 0x38))))))));
    auVar94 = aesenc(auVar68,auVar88);
    uVar5 = *unaff_R14;
    param_16 = CONCAT17((char)uVar5,
                        CONCAT16((char)((ulonglong)uVar5 >> 8),
                                 CONCAT15((char)((ulonglong)uVar5 >> 0x10),
                                          CONCAT14((char)((ulonglong)uVar5 >> 0x18),
                                                   CONCAT13((char)((ulonglong)uVar5 >> 0x20),
                                                            CONCAT12((char)((ulonglong)uVar5 >> 0x28
                                                                           ),CONCAT11((char)((
                                                  ulonglong)uVar5 >> 0x30),
                                                  (char)((ulonglong)uVar5 >> 0x38))))))));
    auVar88 = aesenc(auVar74,auVar88);
    auVar95 = param_1[2];
    if (10 < unaff_EBP) {
      auVar73 = aesenc(auVar73,auVar97);
      auVar80 = aesenc(auVar79,auVar97);
      auVar86 = aesenc(auVar86,auVar97);
      auVar91 = aesenc(auVar91,auVar97);
      auVar94 = aesenc(auVar94,auVar97);
      auVar88 = aesenc(auVar88,auVar97);
      auVar73 = aesenc(auVar73,auVar95);
      auVar79 = aesenc(auVar80,auVar95);
      auVar86 = aesenc(auVar86,auVar95);
      auVar91 = aesenc(auVar91,auVar95);
      auVar94 = aesenc(auVar94,auVar95);
      auVar97 = param_1[3];
      auVar88 = aesenc(auVar88,auVar95);
      auVar95 = param_1[4];
      if (unaff_EBP != 0xb) {
        auVar73 = aesenc(auVar73,auVar97);
        auVar80 = aesenc(auVar79,auVar97);
        auVar86 = aesenc(auVar86,auVar97);
        auVar91 = aesenc(auVar91,auVar97);
        auVar94 = aesenc(auVar94,auVar97);
        auVar88 = aesenc(auVar88,auVar97);
        auVar73 = aesenc(auVar73,auVar95);
        auVar79 = aesenc(auVar80,auVar95);
        auVar86 = aesenc(auVar86,auVar95);
        auVar91 = aesenc(auVar91,auVar95);
        auVar94 = aesenc(auVar94,auVar95);
        auVar97 = param_1[5];
        auVar88 = aesenc(auVar88,auVar95);
        auVar95 = param_1[6];
      }
    }
    auVar80 = aesenc(auVar73,auVar97);
    auVar73 = vpalignr_avx(auVar87,auVar87,8);
    in_ZMM8 = ZEXT1664(auVar73);
    auVar73 = aesenc(auVar79,auVar97);
    auVar29._8_8_ = 0;
    auVar29._0_8_ = auVar87._0_8_;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = *(ulonglong *)(in_R11[1] + 8);
    auVar87 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar29 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar87 = auVar87 ^ auVar35 << uVar7;
      }
    }
    auVar65 = ZEXT1664(auVar87);
    auVar87 = aesenc(auVar86,auVar97);
    auVar86 = aesenc(auVar91,auVar97);
    pauVar1 = unaff_RDI + 2;
    auVar74 = aesenc(auVar94,auVar97);
    pauVar2 = unaff_RDI + 3;
    auVar81 = aesenc(auVar88,auVar97);
    pauVar3 = unaff_RDI + 4;
    pauVar4 = unaff_RDI + 5;
    auVar94 = *param_3;
    in_ZMM1 = ZEXT1664(auVar94);
    auVar80 = aesenclast(auVar80,auVar95 ^ *unaff_RDI);
    cVar44 = in_R11[2][0];
    cVar45 = in_R11[2][1];
    cVar46 = in_R11[2][2];
    cVar47 = in_R11[2][3];
    cVar48 = in_R11[2][4];
    cVar49 = in_R11[2][5];
    cVar50 = in_R11[2][6];
    cVar51 = in_R11[2][7];
    cVar52 = in_R11[2][8];
    cVar53 = in_R11[2][9];
    cVar54 = in_R11[2][10];
    cVar55 = in_R11[2][0xb];
    cVar56 = in_R11[2][0xc];
    cVar57 = in_R11[2][0xd];
    cVar58 = in_R11[2][0xe];
    cVar59 = in_R11[2][0xf];
    auVar73 = aesenclast(auVar73,auVar95 ^ unaff_RDI[1]);
    auVar91[0] = auVar94[0] + cVar44;
    auVar91[1] = auVar94[1] + cVar45;
    auVar91[2] = auVar94[2] + cVar46;
    auVar91[3] = auVar94[3] + cVar47;
    auVar91[4] = auVar94[4] + cVar48;
    auVar91[5] = auVar94[5] + cVar49;
    auVar91[6] = auVar94[6] + cVar50;
    auVar91[7] = auVar94[7] + cVar51;
    auVar91[8] = auVar94[8] + cVar52;
    auVar91[9] = auVar94[9] + cVar53;
    auVar91[10] = auVar94[10] + cVar54;
    auVar91[0xb] = auVar94[0xb] + cVar55;
    auVar91[0xc] = auVar94[0xc] + cVar56;
    auVar91[0xd] = auVar94[0xd] + cVar57;
    auVar91[0xe] = auVar94[0xe] + cVar58;
    auVar91[0xf] = auVar94[0xf] + cVar59;
    unaff_RDI = unaff_RDI + 6;
    auVar79 = aesenclast(auVar87,auVar95 ^ *pauVar1);
    auVar87[0] = auVar91[0] + cVar44;
    auVar87[1] = auVar91[1] + cVar45;
    auVar87[2] = auVar91[2] + cVar46;
    auVar87[3] = auVar91[3] + cVar47;
    auVar87[4] = auVar91[4] + cVar48;
    auVar87[5] = auVar91[5] + cVar49;
    auVar87[6] = auVar91[6] + cVar50;
    auVar87[7] = auVar91[7] + cVar51;
    auVar87[8] = auVar91[8] + cVar52;
    auVar87[9] = auVar91[9] + cVar53;
    auVar87[10] = auVar91[10] + cVar54;
    auVar87[0xb] = auVar91[0xb] + cVar55;
    auVar87[0xc] = auVar91[0xc] + cVar56;
    auVar87[0xd] = auVar91[0xd] + cVar57;
    auVar87[0xe] = auVar91[0xe] + cVar58;
    auVar87[0xf] = auVar91[0xf] + cVar59;
    auVar97 = param_1[-8];
    auVar68 = aesenclast(auVar86,auVar95 ^ *pauVar2);
    auVar88[0] = auVar87[0] + cVar44;
    auVar88[1] = auVar87[1] + cVar45;
    auVar88[2] = auVar87[2] + cVar46;
    auVar88[3] = auVar87[3] + cVar47;
    auVar88[4] = auVar87[4] + cVar48;
    auVar88[5] = auVar87[5] + cVar49;
    auVar88[6] = auVar87[6] + cVar50;
    auVar88[7] = auVar87[7] + cVar51;
    auVar88[8] = auVar87[8] + cVar52;
    auVar88[9] = auVar87[9] + cVar53;
    auVar88[10] = auVar87[10] + cVar54;
    auVar88[0xb] = auVar87[0xb] + cVar55;
    auVar88[0xc] = auVar87[0xc] + cVar56;
    auVar88[0xd] = auVar87[0xd] + cVar57;
    auVar88[0xe] = auVar87[0xe] + cVar58;
    auVar88[0xf] = auVar87[0xf] + cVar59;
    auVar74 = aesenclast(auVar74,auVar95 ^ *pauVar3);
    auVar86[0] = auVar88[0] + cVar44;
    auVar86[1] = auVar88[1] + cVar45;
    auVar86[2] = auVar88[2] + cVar46;
    auVar86[3] = auVar88[3] + cVar47;
    auVar86[4] = auVar88[4] + cVar48;
    auVar86[5] = auVar88[5] + cVar49;
    auVar86[6] = auVar88[6] + cVar50;
    auVar86[7] = auVar88[7] + cVar51;
    auVar86[8] = auVar88[8] + cVar52;
    auVar86[9] = auVar88[9] + cVar53;
    auVar86[10] = auVar88[10] + cVar54;
    auVar86[0xb] = auVar88[0xb] + cVar55;
    auVar86[0xc] = auVar88[0xc] + cVar56;
    auVar86[0xd] = auVar88[0xd] + cVar57;
    auVar86[0xe] = auVar88[0xe] + cVar58;
    auVar86[0xf] = auVar88[0xf] + cVar59;
    auVar81 = aesenclast(auVar81,auVar95 ^ *pauVar4);
    auVar95[0] = auVar86[0] + cVar44;
    auVar95[1] = auVar86[1] + cVar45;
    auVar95[2] = auVar86[2] + cVar46;
    auVar95[3] = auVar86[3] + cVar47;
    auVar95[4] = auVar86[4] + cVar48;
    auVar95[5] = auVar86[5] + cVar49;
    auVar95[6] = auVar86[6] + cVar50;
    auVar95[7] = auVar86[7] + cVar51;
    auVar95[8] = auVar86[8] + cVar52;
    auVar95[9] = auVar86[9] + cVar53;
    auVar95[10] = auVar86[10] + cVar54;
    auVar95[0xb] = auVar86[0xb] + cVar55;
    auVar95[0xc] = auVar86[0xc] + cVar56;
    auVar95[0xd] = auVar86[0xd] + cVar57;
    auVar95[0xe] = auVar86[0xe] + cVar58;
    auVar95[0xf] = auVar86[0xf] + cVar59;
    if (param_2 < 6) break;
    *unaff_RSI = auVar80;
    auVar94 = auVar94 ^ auVar97;
    unaff_RSI[1] = auVar73;
    unaff_RSI[2] = auVar79;
    unaff_RSI[3] = auVar68;
    unaff_RSI[4] = auVar74;
    unaff_RSI[5] = auVar81;
    unaff_RSI = unaff_RSI + 6;
  }
  return;
}

// aesni_gcm_decrypt @ 140df8c80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
aesni_gcm_decrypt(undefined1 (*param_1) [16],longlong param_2,ulonglong param_3,longlong param_4,
                 undefined8 param_5,undefined1 (*param_6) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 *puVar6;
  undefined1 (*pauVar7) [16];
  undefined8 uVar8;
  undefined1 (*pauVar9) [16];
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auVar12 [64];
  undefined4 unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  undefined4 unaff_XMM10_Da;
  undefined4 unaff_XMM10_Db;
  undefined4 unaff_XMM10_Dc;
  undefined4 unaff_XMM10_Dd;
  undefined4 unaff_XMM11_Da;
  undefined4 unaff_XMM11_Db;
  undefined4 unaff_XMM11_Dc;
  undefined4 unaff_XMM11_Dd;
  undefined4 unaff_XMM12_Da;
  undefined4 unaff_XMM12_Db;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM12_Dd;
  undefined4 unaff_XMM13_Da;
  undefined4 unaff_XMM13_Db;
  undefined4 unaff_XMM13_Dc;
  undefined4 unaff_XMM13_Dd;
  undefined4 unaff_XMM14_Da;
  undefined4 unaff_XMM14_Db;
  undefined4 unaff_XMM14_Dc;
  undefined4 unaff_XMM14_Dd;
  undefined1 auStack_180 [40];
  undefined1 auStack_158 [296];
  
  uVar8 = 0;
  if (0x5f < param_3) {
    pauVar9 = (undefined1 (*) [16])&L_bswap_mask;
    pauVar7 = param_6 + 4;
    auVar3 = vpshufb_avx(*param_6,_L_bswap_mask);
    auVar12 = ZEXT1664(auVar3);
    uVar10 = param_4 - 0x80U & 0xf80;
    uVar11 = ((ulonglong)auStack_158 & 0xf80) - uVar10;
    puVar6 = auStack_180;
    if ((uVar10 <= ((ulonglong)auStack_158 & 0xf80)) && (puVar6 = auStack_180, uVar11 < 0x300)) {
      puVar6 = auStack_180 + -uVar11;
    }
    uVar8 = 0;
    auVar3 = param_1[2];
    vpshufb_avx(param_1[5],_L_bswap_mask);
    auVar1 = param_1[1];
    auVar4 = vpshufb_avx(param_1[4],_L_bswap_mask);
    auVar2 = *param_1;
    auVar5 = vpshufb_avx(param_1[3],_L_bswap_mask);
    *(undefined1 (*) [16])(puVar6 + 0x30) = auVar4;
    auVar3 = vpshufb_avx(auVar3,_L_bswap_mask);
    *(undefined1 (*) [16])(puVar6 + 0x40) = auVar5;
    auVar1 = vpshufb_avx(auVar1,_L_bswap_mask);
    *(undefined1 (*) [16])(puVar6 + 0x50) = auVar3;
    auVar3 = vpshufb_avx(auVar2,_L_bswap_mask);
    *(undefined1 (*) [16])(puVar6 + 0x60) = auVar1;
    *(undefined1 (*) [16])(puVar6 + 0x70) = auVar3;
    *(undefined8 *)(puVar6 + -8) = 0x140df8dd1;
    _aesni_ctr32_ghash_6x(param_4 + 0x80,param_3 >> 4);
    *(undefined4 *)(param_2 + -0x60) = unaff_XMM9_Da;
    *(undefined4 *)(param_2 + -0x5c) = unaff_XMM9_Db;
    *(undefined4 *)(param_2 + -0x58) = unaff_XMM9_Dc;
    *(undefined4 *)(param_2 + -0x54) = unaff_XMM9_Dd;
    *(undefined4 *)(param_2 + -0x50) = unaff_XMM10_Da;
    *(undefined4 *)(param_2 + -0x4c) = unaff_XMM10_Db;
    *(undefined4 *)(param_2 + -0x48) = unaff_XMM10_Dc;
    *(undefined4 *)(param_2 + -0x44) = unaff_XMM10_Dd;
    *(undefined4 *)(param_2 + -0x40) = unaff_XMM11_Da;
    *(undefined4 *)(param_2 + -0x3c) = unaff_XMM11_Db;
    *(undefined4 *)(param_2 + -0x38) = unaff_XMM11_Dc;
    *(undefined4 *)(param_2 + -0x34) = unaff_XMM11_Dd;
    *(undefined4 *)(param_2 + -0x30) = unaff_XMM12_Da;
    *(undefined4 *)(param_2 + -0x2c) = unaff_XMM12_Db;
    *(undefined4 *)(param_2 + -0x28) = unaff_XMM12_Dc;
    *(undefined4 *)(param_2 + -0x24) = unaff_XMM12_Dd;
    *(undefined4 *)(param_2 + -0x20) = unaff_XMM13_Da;
    *(undefined4 *)(param_2 + -0x1c) = unaff_XMM13_Db;
    *(undefined4 *)(param_2 + -0x18) = unaff_XMM13_Dc;
    *(undefined4 *)(param_2 + -0x14) = unaff_XMM13_Dd;
    *(undefined4 *)(param_2 + -0x10) = unaff_XMM14_Da;
    *(undefined4 *)(param_2 + -0xc) = unaff_XMM14_Db;
    *(undefined4 *)(param_2 + -8) = unaff_XMM14_Dc;
    *(undefined4 *)(param_2 + -4) = unaff_XMM14_Dd;
    auVar3 = vpshufb_avx(auVar12._0_16_,*pauVar9);
    pauVar7[-4] = auVar3;
  }
  return uVar8;
}

// L$SEH_begin_aesni_gcm_decrypt @ 140df8c8d

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
L_SEH_begin_aesni_gcm_decrypt
          (undefined1 (*param_1) [16],longlong param_2,ulonglong param_3,longlong param_4,
          undefined8 param_5,undefined1 (*param_6) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 *puVar6;
  undefined1 (*pauVar7) [16];
  undefined8 uVar8;
  undefined1 (*pauVar9) [16];
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 auVar12 [64];
  undefined4 unaff_XMM9_Da;
  undefined4 unaff_XMM9_Db;
  undefined4 unaff_XMM9_Dc;
  undefined4 unaff_XMM9_Dd;
  undefined4 unaff_XMM10_Da;
  undefined4 unaff_XMM10_Db;
  undefined4 unaff_XMM10_Dc;
  undefined4 unaff_XMM10_Dd;
  undefined4 unaff_XMM11_Da;
  undefined4 unaff_XMM11_Db;
  undefined4 unaff_XMM11_Dc;
  undefined4 unaff_XMM11_Dd;
  undefined4 unaff_XMM12_Da;
  undefined4 unaff_XMM12_Db;
  undefined4 unaff_XMM12_Dc;
  undefined4 unaff_XMM12_Dd;
  undefined4 unaff_XMM13_Da;
  undefined4 unaff_XMM13_Db;
  undefined4 unaff_XMM13_Dc;
  undefined4 unaff_XMM13_Dd;
  undefined4 unaff_XMM14_Da;
  undefined4 unaff_XMM14_Db;
  undefined4 unaff_XMM14_Dc;
  undefined4 unaff_XMM14_Dd;
  undefined1 auStack_180 [40];
  undefined1 auStack_158 [296];
  
  uVar8 = 0;
  if (0x5f < param_3) {
    pauVar9 = (undefined1 (*) [16])&L_bswap_mask;
    pauVar7 = param_6 + 4;
    auVar3 = vpshufb_avx(*param_6,_L_bswap_mask);
    auVar12 = ZEXT1664(auVar3);
    uVar10 = param_4 - 0x80U & 0xf80;
    uVar11 = ((ulonglong)auStack_158 & 0xf80) - uVar10;
    puVar6 = auStack_180;
    if ((uVar10 <= ((ulonglong)auStack_158 & 0xf80)) && (puVar6 = auStack_180, uVar11 < 0x300)) {
      puVar6 = auStack_180 + -uVar11;
    }
    uVar8 = 0;
    auVar3 = param_1[2];
    vpshufb_avx(param_1[5],_L_bswap_mask);
    auVar1 = param_1[1];
    auVar4 = vpshufb_avx(param_1[4],_L_bswap_mask);
    auVar2 = *param_1;
    auVar5 = vpshufb_avx(param_1[3],_L_bswap_mask);
    *(undefined1 (*) [16])(puVar6 + 0x30) = auVar4;
    auVar3 = vpshufb_avx(auVar3,_L_bswap_mask);
    *(undefined1 (*) [16])(puVar6 + 0x40) = auVar5;
    auVar1 = vpshufb_avx(auVar1,_L_bswap_mask);
    *(undefined1 (*) [16])(puVar6 + 0x50) = auVar3;
    auVar3 = vpshufb_avx(auVar2,_L_bswap_mask);
    *(undefined1 (*) [16])(puVar6 + 0x60) = auVar1;
    *(undefined1 (*) [16])(puVar6 + 0x70) = auVar3;
    *(undefined8 *)(puVar6 + -8) = 0x140df8dd1;
    _aesni_ctr32_ghash_6x(param_4 + 0x80,param_3 >> 4);
    *(undefined4 *)(param_2 + -0x60) = unaff_XMM9_Da;
    *(undefined4 *)(param_2 + -0x5c) = unaff_XMM9_Db;
    *(undefined4 *)(param_2 + -0x58) = unaff_XMM9_Dc;
    *(undefined4 *)(param_2 + -0x54) = unaff_XMM9_Dd;
    *(undefined4 *)(param_2 + -0x50) = unaff_XMM10_Da;
    *(undefined4 *)(param_2 + -0x4c) = unaff_XMM10_Db;
    *(undefined4 *)(param_2 + -0x48) = unaff_XMM10_Dc;
    *(undefined4 *)(param_2 + -0x44) = unaff_XMM10_Dd;
    *(undefined4 *)(param_2 + -0x40) = unaff_XMM11_Da;
    *(undefined4 *)(param_2 + -0x3c) = unaff_XMM11_Db;
    *(undefined4 *)(param_2 + -0x38) = unaff_XMM11_Dc;
    *(undefined4 *)(param_2 + -0x34) = unaff_XMM11_Dd;
    *(undefined4 *)(param_2 + -0x30) = unaff_XMM12_Da;
    *(undefined4 *)(param_2 + -0x2c) = unaff_XMM12_Db;
    *(undefined4 *)(param_2 + -0x28) = unaff_XMM12_Dc;
    *(undefined4 *)(param_2 + -0x24) = unaff_XMM12_Dd;
    *(undefined4 *)(param_2 + -0x20) = unaff_XMM13_Da;
    *(undefined4 *)(param_2 + -0x1c) = unaff_XMM13_Db;
    *(undefined4 *)(param_2 + -0x18) = unaff_XMM13_Dc;
    *(undefined4 *)(param_2 + -0x14) = unaff_XMM13_Dd;
    *(undefined4 *)(param_2 + -0x10) = unaff_XMM14_Da;
    *(undefined4 *)(param_2 + -0xc) = unaff_XMM14_Db;
    *(undefined4 *)(param_2 + -8) = unaff_XMM14_Dc;
    *(undefined4 *)(param_2 + -4) = unaff_XMM14_Dd;
    auVar3 = vpshufb_avx(auVar12._0_16_,*pauVar9);
    pauVar7[-4] = auVar3;
  }
  return uVar8;
}

// _aesni_ctr32_6x @ 140df8e80

void _aesni_ctr32_6x(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  uint unaff_EBX;
  int unaff_EBP;
  undefined1 (*unaff_RSI) [16];
  undefined1 (*unaff_RDI) [16];
  longlong in_R11;
  undefined1 (*pauVar26) [16];
  int iVar27;
  undefined1 in_XMM0 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [64];
  undefined1 auVar31 [16];
  undefined1 auVar32 [64];
  undefined1 auVar33 [16];
  undefined1 auVar34 [64];
  undefined1 auVar35 [16];
  undefined1 auVar36 [64];
  undefined1 auVar37 [16];
  undefined1 auVar38 [64];
  undefined1 auVar39 [16];
  undefined1 auVar40 [64];
  undefined1 auVar41 [64];
  
  auVar29 = *(undefined1 (*) [16])(param_1 + -0x80);
  cVar6 = *(char *)(in_R11 + 0x20);
  cVar7 = *(char *)(in_R11 + 0x21);
  cVar8 = *(char *)(in_R11 + 0x22);
  cVar9 = *(char *)(in_R11 + 0x23);
  cVar10 = *(char *)(in_R11 + 0x24);
  cVar11 = *(char *)(in_R11 + 0x25);
  cVar12 = *(char *)(in_R11 + 0x26);
  cVar13 = *(char *)(in_R11 + 0x27);
  cVar14 = *(char *)(in_R11 + 0x28);
  cVar15 = *(char *)(in_R11 + 0x29);
  cVar16 = *(char *)(in_R11 + 0x2a);
  cVar17 = *(char *)(in_R11 + 0x2b);
  cVar18 = *(char *)(in_R11 + 0x2c);
  cVar19 = *(char *)(in_R11 + 0x2d);
  cVar20 = *(char *)(in_R11 + 0x2e);
  cVar21 = *(char *)(in_R11 + 0x2f);
  iVar27 = unaff_EBP + -1;
  auVar41 = ZEXT1664(*(undefined1 (*) [16])(param_1 + -0x70));
  pauVar26 = (undefined1 (*) [16])(param_1 + -0x60);
  auVar30 = ZEXT1664(in_ZMM1._0_16_ ^ auVar29);
  if (unaff_EBX < 0xfa000000) {
    auVar1[0] = in_ZMM1[0] + cVar6;
    auVar1[1] = in_ZMM1[1] + cVar7;
    auVar1[2] = in_ZMM1[2] + cVar8;
    auVar1[3] = in_ZMM1[3] + cVar9;
    auVar1[4] = in_ZMM1[4] + cVar10;
    auVar1[5] = in_ZMM1[5] + cVar11;
    auVar1[6] = in_ZMM1[6] + cVar12;
    auVar1[7] = in_ZMM1[7] + cVar13;
    auVar1[8] = in_ZMM1[8] + cVar14;
    auVar1[9] = in_ZMM1[9] + cVar15;
    auVar1[10] = in_ZMM1[10] + cVar16;
    auVar1[0xb] = in_ZMM1[0xb] + cVar17;
    auVar1[0xc] = in_ZMM1[0xc] + cVar18;
    auVar1[0xd] = in_ZMM1[0xd] + cVar19;
    auVar1[0xe] = in_ZMM1[0xe] + cVar20;
    auVar1[0xf] = in_ZMM1[0xf] + cVar21;
    auVar2[0] = auVar1[0] + cVar6;
    auVar2[1] = auVar1[1] + cVar7;
    auVar2[2] = auVar1[2] + cVar8;
    auVar2[3] = auVar1[3] + cVar9;
    auVar2[4] = auVar1[4] + cVar10;
    auVar2[5] = auVar1[5] + cVar11;
    auVar2[6] = auVar1[6] + cVar12;
    auVar2[7] = auVar1[7] + cVar13;
    auVar2[8] = auVar1[8] + cVar14;
    auVar2[9] = auVar1[9] + cVar15;
    auVar2[10] = auVar1[10] + cVar16;
    auVar2[0xb] = auVar1[0xb] + cVar17;
    auVar2[0xc] = auVar1[0xc] + cVar18;
    auVar2[0xd] = auVar1[0xd] + cVar19;
    auVar2[0xe] = auVar1[0xe] + cVar20;
    auVar2[0xf] = auVar1[0xf] + cVar21;
    auVar32 = ZEXT1664(auVar1 ^ auVar29);
    auVar3[0] = auVar2[0] + cVar6;
    auVar3[1] = auVar2[1] + cVar7;
    auVar3[2] = auVar2[2] + cVar8;
    auVar3[3] = auVar2[3] + cVar9;
    auVar3[4] = auVar2[4] + cVar10;
    auVar3[5] = auVar2[5] + cVar11;
    auVar3[6] = auVar2[6] + cVar12;
    auVar3[7] = auVar2[7] + cVar13;
    auVar3[8] = auVar2[8] + cVar14;
    auVar3[9] = auVar2[9] + cVar15;
    auVar3[10] = auVar2[10] + cVar16;
    auVar3[0xb] = auVar2[0xb] + cVar17;
    auVar3[0xc] = auVar2[0xc] + cVar18;
    auVar3[0xd] = auVar2[0xd] + cVar19;
    auVar3[0xe] = auVar2[0xe] + cVar20;
    auVar3[0xf] = auVar2[0xf] + cVar21;
    auVar34 = ZEXT1664(auVar2 ^ auVar29);
    auVar4[0] = auVar3[0] + cVar6;
    auVar4[1] = auVar3[1] + cVar7;
    auVar4[2] = auVar3[2] + cVar8;
    auVar4[3] = auVar3[3] + cVar9;
    auVar4[4] = auVar3[4] + cVar10;
    auVar4[5] = auVar3[5] + cVar11;
    auVar4[6] = auVar3[6] + cVar12;
    auVar4[7] = auVar3[7] + cVar13;
    auVar4[8] = auVar3[8] + cVar14;
    auVar4[9] = auVar3[9] + cVar15;
    auVar4[10] = auVar3[10] + cVar16;
    auVar4[0xb] = auVar3[0xb] + cVar17;
    auVar4[0xc] = auVar3[0xc] + cVar18;
    auVar4[0xd] = auVar3[0xd] + cVar19;
    auVar4[0xe] = auVar3[0xe] + cVar20;
    auVar4[0xf] = auVar3[0xf] + cVar21;
    auVar36 = ZEXT1664(auVar3 ^ auVar29);
    auVar5[0] = auVar4[0] + cVar6;
    auVar5[1] = auVar4[1] + cVar7;
    auVar5[2] = auVar4[2] + cVar8;
    auVar5[3] = auVar4[3] + cVar9;
    auVar5[4] = auVar4[4] + cVar10;
    auVar5[5] = auVar4[5] + cVar11;
    auVar5[6] = auVar4[6] + cVar12;
    auVar5[7] = auVar4[7] + cVar13;
    auVar5[8] = auVar4[8] + cVar14;
    auVar5[9] = auVar4[9] + cVar15;
    auVar5[10] = auVar4[10] + cVar16;
    auVar5[0xb] = auVar4[0xb] + cVar17;
    auVar5[0xc] = auVar4[0xc] + cVar18;
    auVar5[0xd] = auVar4[0xd] + cVar19;
    auVar5[0xe] = auVar4[0xe] + cVar20;
    auVar5[0xf] = auVar4[0xf] + cVar21;
    auVar38 = ZEXT1664(auVar4 ^ auVar29);
    auVar40 = ZEXT1664(auVar5 ^ auVar29);
  }
  else {
    auVar33 = vpshufb_avx(in_ZMM1._0_16_,in_XMM0);
    iVar22 = *(int *)(in_R11 + 0x30);
    iVar23 = *(int *)(in_R11 + 0x34);
    iVar24 = *(int *)(in_R11 + 0x38);
    iVar25 = *(int *)(in_R11 + 0x3c);
    auVar28._0_4_ = auVar33._0_4_ + *(int *)(in_R11 + 0x40);
    auVar28._4_4_ = auVar33._4_4_ + *(int *)(in_R11 + 0x44);
    auVar28._8_4_ = auVar33._8_4_ + *(int *)(in_R11 + 0x48);
    auVar28._12_4_ = auVar33._12_4_ + *(int *)(in_R11 + 0x4c);
    auVar31._0_4_ = auVar33._0_4_ + iVar22;
    auVar31._4_4_ = auVar33._4_4_ + iVar23;
    auVar31._8_4_ = auVar33._8_4_ + iVar24;
    auVar31._12_4_ = auVar33._12_4_ + iVar25;
    auVar33._0_4_ = auVar28._0_4_ + iVar22;
    auVar33._4_4_ = auVar28._4_4_ + iVar23;
    auVar33._8_4_ = auVar28._8_4_ + iVar24;
    auVar33._12_4_ = auVar28._12_4_ + iVar25;
    auVar28 = vpshufb_avx(auVar28,in_XMM0);
    auVar35._0_4_ = auVar31._0_4_ + iVar22;
    auVar35._4_4_ = auVar31._4_4_ + iVar23;
    auVar35._8_4_ = auVar31._8_4_ + iVar24;
    auVar35._12_4_ = auVar31._12_4_ + iVar25;
    auVar31 = vpshufb_avx(auVar31,in_XMM0);
    auVar32 = ZEXT1664(auVar28 ^ auVar29);
    auVar37._0_4_ = auVar33._0_4_ + iVar22;
    auVar37._4_4_ = auVar33._4_4_ + iVar23;
    auVar37._8_4_ = auVar33._8_4_ + iVar24;
    auVar37._12_4_ = auVar33._12_4_ + iVar25;
    auVar28 = vpshufb_avx(auVar33,in_XMM0);
    auVar34 = ZEXT1664(auVar31 ^ auVar29);
    auVar39._0_4_ = auVar35._0_4_ + iVar22;
    auVar39._4_4_ = auVar35._4_4_ + iVar23;
    auVar39._8_4_ = auVar35._8_4_ + iVar24;
    auVar39._12_4_ = auVar35._12_4_ + iVar25;
    auVar31 = vpshufb_avx(auVar35,in_XMM0);
    auVar36 = ZEXT1664(auVar28 ^ auVar29);
    auVar28 = vpshufb_avx(auVar37,in_XMM0);
    auVar38 = ZEXT1664(auVar31 ^ auVar29);
    vpshufb_avx(auVar39,in_XMM0);
    auVar40 = ZEXT1664(auVar28 ^ auVar29);
  }
  do {
    auVar29 = auVar41._0_16_;
    auVar28 = aesenc(auVar30._0_16_,auVar29);
    auVar30._0_32_ = ZEXT1632(auVar28);
    auVar31 = aesenc(auVar32._0_16_,auVar29);
    auVar32._0_32_ = ZEXT1632(auVar31);
    auVar33 = aesenc(auVar34._0_16_,auVar29);
    auVar34._0_32_ = ZEXT1632(auVar33);
    auVar35 = aesenc(auVar36._0_16_,auVar29);
    auVar36._0_32_ = ZEXT1632(auVar35);
    auVar37 = aesenc(auVar38._0_16_,auVar29);
    auVar38._0_32_ = ZEXT1632(auVar37);
    auVar39 = aesenc(auVar40._0_16_,auVar29);
    auVar40._0_32_ = ZEXT1632(auVar39);
    auVar29 = *pauVar26;
    auVar41 = ZEXT1664(auVar29);
    pauVar26 = pauVar26 + 1;
    iVar27 = iVar27 + -1;
  } while (iVar27 != 0);
  auVar1 = *pauVar26;
  auVar28 = aesenc(auVar28,auVar29);
  auVar31 = aesenc(auVar31,auVar29);
  auVar33 = aesenc(auVar33,auVar29);
  auVar35 = aesenc(auVar35,auVar29);
  auVar37 = aesenc(auVar37,auVar29);
  auVar39 = aesenc(auVar39,auVar29);
  auVar29 = aesenclast(auVar28,auVar1 ^ *unaff_RDI);
  auVar28 = aesenclast(auVar31,auVar1 ^ unaff_RDI[1]);
  auVar31 = aesenclast(auVar33,auVar1 ^ unaff_RDI[2]);
  auVar33 = aesenclast(auVar35,auVar1 ^ unaff_RDI[3]);
  auVar35 = aesenclast(auVar37,auVar1 ^ unaff_RDI[4]);
  auVar37 = aesenclast(auVar39,auVar1 ^ unaff_RDI[5]);
  *unaff_RSI = auVar29;
  unaff_RSI[1] = auVar28;
  unaff_RSI[2] = auVar31;
  unaff_RSI[3] = auVar33;
  unaff_RSI[4] = auVar35;
  unaff_RSI[5] = auVar37;
  return;
}

// aesni_gcm_encrypt @ 140df9000

/* WARNING: Removing unreachable block (ram,0x000140df93d4) */
/* WARNING: Removing unreachable block (ram,0x000140df9388) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
aesni_gcm_encrypt(undefined8 param_1,longlong param_2,ulonglong param_3,longlong param_4,
                 undefined8 param_5,undefined1 (*param_6) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
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
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
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
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
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
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  ulonglong uVar81;
  ulonglong uVar82;
  undefined1 *puVar83;
  undefined1 (*pauVar84) [16];
  undefined8 uVar85;
  undefined1 (*pauVar86) [16];
  ulonglong uVar87;
  ulonglong uVar88;
  undefined1 extraout_var [56];
  undefined1 auVar89 [64];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [64];
  undefined1 auVar95 [16];
  undefined1 in_ZMM9 [64];
  undefined1 auVar96 [64];
  undefined1 in_ZMM10 [64];
  undefined1 auVar97 [64];
  undefined1 in_ZMM11 [64];
  undefined1 auVar98 [64];
  undefined1 in_ZMM12 [64];
  undefined1 auVar99 [64];
  undefined1 in_ZMM13 [64];
  undefined1 auVar100 [64];
  undefined1 in_ZMM14 [64];
  undefined1 auVar101 [64];
  undefined1 auStack_180 [40];
  undefined1 auStack_158 [176];
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [16];
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 extraout_var_00 [56];
  
  uVar85 = 0;
  if (0x11f < param_3) {
    auStack_a8 = in_ZMM9._0_16_;
    auStack_98 = in_ZMM10._0_16_;
    auStack_88 = in_ZMM11._0_16_;
    auStack_78 = in_ZMM12._0_16_;
    auStack_68 = in_ZMM13._0_16_;
    auStack_58 = in_ZMM14._0_16_;
    auVar96 = ZEXT1664(auStack_a8);
    auVar97 = ZEXT1664(auStack_98);
    auVar98 = ZEXT1664(auStack_88);
    auVar99 = ZEXT1664(auStack_78);
    auVar100 = ZEXT1664(auStack_68);
    auVar101 = ZEXT1664(auStack_58);
    pauVar86 = (undefined1 (*) [16])&L_bswap_mask;
    uVar87 = param_4 - 0x80U & 0xf80;
    uVar88 = ((ulonglong)auStack_158 & 0xf80) - uVar87;
    puVar83 = auStack_180;
    if ((uVar87 <= ((ulonglong)auStack_158 & 0xf80)) && (puVar83 = auStack_180, uVar88 < 0x300)) {
      puVar83 = auStack_180 + -uVar88;
    }
    param_3 = param_3 >> 4;
    *(undefined8 *)(puVar83 + -8) = 0x140df90ea;
    auVar94._0_8_ = _aesni_ctr32_6x(_L_bswap_mask,param_3);
    auVar94._8_56_ = extraout_var;
    auVar91 = auVar94._0_16_;
    auVar1 = vpshufb_avx(auVar96._0_16_,auVar91);
    auVar90 = vpshufb_avx(auVar97._0_16_,auVar91);
    *(undefined1 (*) [16])(puVar83 + 0x70) = auVar1;
    auVar1 = vpshufb_avx(auVar98._0_16_,auVar91);
    *(undefined1 (*) [16])(puVar83 + 0x60) = auVar90;
    auVar90 = vpshufb_avx(auVar99._0_16_,auVar91);
    *(undefined1 (*) [16])(puVar83 + 0x50) = auVar1;
    auVar1 = vpshufb_avx(auVar100._0_16_,auVar91);
    *(undefined1 (*) [16])(puVar83 + 0x40) = auVar90;
    vpshufb_avx(auVar101._0_16_,auVar91);
    *(undefined1 (*) [16])(puVar83 + 0x30) = auVar1;
    *(undefined8 *)(puVar83 + -8) = 0x140df912b;
    auVar89._0_8_ = _aesni_ctr32_6x();
    auVar89._8_56_ = extraout_var_00;
    pauVar84 = param_6 + 4;
    uVar85 = 0xc0;
    auVar1 = vpshufb_avx(*param_6,auVar89._0_16_);
    auVar94 = ZEXT1664(auVar1);
    *(undefined8 *)(puVar83 + -8) = 0x140df9148;
    _aesni_ctr32_ghash_6x(auVar89._0_8_,param_3 - 0xc);
    auVar1 = *(undefined1 (*) [16])(puVar83 + 0x20);
    auVar90 = *pauVar86;
    uVar87 = *(ulonglong *)pauVar84[-2];
    uVar88 = *(ulonglong *)(pauVar84[-2] + 8);
    auVar95 = vpunpckhqdq_avx(auVar1,auVar1);
    uVar81 = *(ulonglong *)*pauVar84;
    uVar82 = *(ulonglong *)(*pauVar84 + 8);
    *(undefined1 (*) [16])(param_2 + -0x60) = auVar96._0_16_;
    auVar91 = vpshufb_avx(auVar96._0_16_,auVar90);
    *(undefined1 (*) [16])(param_2 + -0x50) = auVar97._0_16_;
    auVar2 = vpshufb_avx(auVar97._0_16_,auVar90);
    *(undefined1 (*) [16])(param_2 + -0x40) = auVar98._0_16_;
    auVar3 = vpshufb_avx(auVar98._0_16_,auVar90);
    *(undefined1 (*) [16])(param_2 + -0x30) = auVar99._0_16_;
    auVar4 = vpshufb_avx(auVar99._0_16_,auVar90);
    *(undefined1 (*) [16])(param_2 + -0x20) = auVar100._0_16_;
    auVar5 = vpshufb_avx(auVar100._0_16_,auVar90);
    *(undefined1 (*) [16])(param_2 + -0x10) = auVar101._0_16_;
    auVar6 = vpshufb_avx(auVar101._0_16_,auVar90);
    *(undefined1 (*) [16])(puVar83 + 0x10) = auVar91;
    auVar90 = *(undefined1 (*) [16])(puVar83 + 0x30);
    auVar91 = vpunpckhqdq_avx(auVar90,auVar90);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = auVar1._0_8_;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar87;
    auVar8 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar9 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar8 = auVar8 ^ auVar27 << uVar7;
      }
    }
    auVar54._8_8_ = 0;
    auVar54._0_8_ = auVar1._8_8_;
    auVar65._8_8_ = 0;
    auVar65._0_8_ = uVar88;
    auVar9 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar54 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar9 = auVar9 ^ auVar65 << uVar7;
      }
    }
    auVar10._8_8_ = 0;
    auVar10._0_8_ = SUB168(auVar95 ^ auVar1,0);
    auVar95._8_8_ = 0;
    auVar95._0_8_ = uVar81;
    auVar1 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar10 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar1 = auVar1 ^ auVar95 << uVar7;
      }
    }
    auVar95 = *(undefined1 (*) [16])(puVar83 + 0x40);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = auVar90._0_8_;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = *(ulonglong *)pauVar84[-1];
    auVar27 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar11 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar27 = auVar27 ^ auVar28 << uVar7;
      }
    }
    auVar54 = vpunpckhqdq_avx(auVar95,auVar95);
    auVar55._8_8_ = 0;
    auVar55._0_8_ = auVar90._8_8_;
    auVar66._8_8_ = 0;
    auVar66._0_8_ = *(ulonglong *)(pauVar84[-1] + 8);
    auVar65 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar55 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar65 = auVar65 ^ auVar66 << uVar7;
      }
    }
    auVar44._8_8_ = 0;
    auVar44._0_8_ = SUB168(auVar91 ^ auVar90,0);
    auVar91._8_8_ = 0;
    auVar91._0_8_ = uVar82;
    auVar90 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar44 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar90 = auVar90 ^ auVar91 << uVar7;
      }
    }
    auVar91 = *(undefined1 (*) [16])(puVar83 + 0x50);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = auVar95._0_8_;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = *(ulonglong *)pauVar84[1];
    auVar10 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar12 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar10 = auVar10 ^ auVar29 << uVar7;
      }
    }
    auVar11 = vpunpckhqdq_avx(auVar91,auVar91);
    auVar56._8_8_ = 0;
    auVar56._0_8_ = auVar95._8_8_;
    auVar67._8_8_ = 0;
    auVar67._0_8_ = *(ulonglong *)(pauVar84[1] + 8);
    auVar28 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar56 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar28 = auVar28 ^ auVar67 << uVar7;
      }
    }
    auVar13._8_8_ = 0;
    auVar13._0_8_ = SUB168(auVar54 ^ auVar95,0);
    auVar30._8_8_ = 0;
    auVar30._0_8_ = *(ulonglong *)pauVar84[3];
    auVar95 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar13 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar95 = auVar95 ^ auVar30 << uVar7;
      }
    }
    auVar54 = *(undefined1 (*) [16])(puVar83 + 0x60);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = auVar91._0_8_;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = *(ulonglong *)pauVar84[2];
    auVar55 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar14 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar55 = auVar55 ^ auVar31 << uVar7;
      }
    }
    auVar66 = vpunpckhqdq_avx(auVar54,auVar54);
    auVar57._8_8_ = 0;
    auVar57._0_8_ = auVar91._8_8_;
    auVar68._8_8_ = 0;
    auVar68._0_8_ = *(ulonglong *)(pauVar84[2] + 8);
    auVar44 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar57 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar44 = auVar44 ^ auVar68 << uVar7;
      }
    }
    auVar45._8_8_ = 0;
    auVar45._0_8_ = SUB168(auVar11 ^ auVar91,0);
    auVar50._8_8_ = 0;
    auVar50._0_8_ = *(ulonglong *)(pauVar84[3] + 8);
    auVar91 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar45 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar91 = auVar91 ^ auVar50 << uVar7;
      }
    }
    auVar11 = auVar94._0_16_ ^ *(undefined1 (*) [16])(puVar83 + 0x70);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = auVar54._0_8_;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = *(ulonglong *)pauVar84[4];
    auVar12 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar15 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar12 = auVar12 ^ auVar32 << uVar7;
      }
    }
    auVar29 = vpunpckhqdq_avx(auVar11,auVar11);
    auVar58._8_8_ = 0;
    auVar58._0_8_ = auVar54._8_8_;
    auVar69._8_8_ = 0;
    auVar69._0_8_ = *(ulonglong *)(pauVar84[4] + 8);
    auVar56 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar58 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar56 = auVar56 ^ auVar69 << uVar7;
      }
    }
    auVar16._8_8_ = 0;
    auVar16._0_8_ = SUB168(auVar66 ^ auVar54,0);
    auVar33._8_8_ = 0;
    auVar33._0_8_ = *(ulonglong *)pauVar84[6];
    auVar54 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar16 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar54 = auVar54 ^ auVar33 << uVar7;
      }
    }
    auVar17._8_8_ = 0;
    auVar17._0_8_ = auVar11._0_8_;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = *(ulonglong *)pauVar84[5];
    auVar66 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar17 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar66 = auVar66 ^ auVar34 << uVar7;
      }
    }
    auVar67 = vpunpckhqdq_avx(auVar6,auVar6);
    auVar59._8_8_ = 0;
    auVar59._0_8_ = auVar11._8_8_;
    auVar70._8_8_ = 0;
    auVar70._0_8_ = *(ulonglong *)(pauVar84[5] + 8);
    auVar13 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar59 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar13 = auVar13 ^ auVar70 << uVar7;
      }
    }
    auVar66 = auVar66 ^ auVar12 ^ auVar55 ^ auVar10 ^ auVar27 ^ auVar8;
    auVar46._8_8_ = 0;
    auVar46._0_8_ = SUB168(auVar29 ^ auVar11,0);
    auVar51._8_8_ = 0;
    auVar51._0_8_ = *(ulonglong *)(pauVar84[6] + 8);
    auVar8 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar46 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar8 = auVar8 ^ auVar51 << uVar7;
      }
    }
    auVar13 = auVar13 ^ auVar56 ^ auVar44 ^ auVar28 ^ auVar65 ^ auVar9;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = auVar6._0_8_;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = *(ulonglong *)pauVar84[-2];
    auVar9 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar18 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar9 = auVar9 ^ auVar35 << uVar7;
      }
    }
    auVar90 = auVar8 ^ auVar54 ^ auVar91 ^ auVar95 ^ auVar90 ^ auVar1 ^ auVar13 ^ auVar66;
    auVar1 = vpunpckhqdq_avx(auVar5,auVar5);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = auVar6._8_8_;
    auVar71._8_8_ = 0;
    auVar71._0_8_ = *(ulonglong *)(pauVar84[-2] + 8);
    auVar91 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar8 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar91 = auVar91 ^ auVar71 << uVar7;
      }
    }
    auVar95 = vpslldq_avx(auVar90,8);
    auVar19._8_8_ = 0;
    auVar19._0_8_ = SUB168(auVar67 ^ auVar6,0);
    auVar36._8_8_ = 0;
    auVar36._0_8_ = *(ulonglong *)*pauVar84;
    auVar6 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar19 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar6 = auVar6 ^ auVar36 << uVar7;
      }
    }
    auVar66 = auVar66 ^ auVar95;
    auVar90 = vpsrldq_avx(auVar90,8);
    auVar13 = auVar13 ^ auVar90;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = auVar5._0_8_;
    auVar37._8_8_ = 0;
    auVar37._0_8_ = *(ulonglong *)pauVar84[-1];
    auVar90 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar20 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar90 = auVar90 ^ auVar37 << uVar7;
      }
    }
    auVar95 = vpunpckhqdq_avx(auVar4,auVar4);
    auVar60._8_8_ = 0;
    auVar60._0_8_ = auVar5._8_8_;
    auVar72._8_8_ = 0;
    auVar72._0_8_ = *(ulonglong *)(pauVar84[-1] + 8);
    auVar8 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar60 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar8 = auVar8 ^ auVar72 << uVar7;
      }
    }
    auVar27 = vpalignr_avx(auVar66,auVar66,8);
    auVar47._8_8_ = 0;
    auVar47._0_8_ = SUB168(auVar1 ^ auVar5,0);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = *(ulonglong *)(*pauVar84 + 8);
    auVar1 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar47 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar1 = auVar1 ^ auVar5 << uVar7;
      }
    }
    auVar21._8_8_ = 0;
    auVar21._0_8_ = auVar4._0_8_;
    auVar38._8_8_ = 0;
    auVar38._0_8_ = *(ulonglong *)pauVar84[1];
    auVar5 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar21 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar5 = auVar5 ^ auVar38 << uVar7;
      }
    }
    auVar54 = vpunpckhqdq_avx(auVar3,auVar3);
    auVar61._8_8_ = 0;
    auVar61._0_8_ = auVar4._8_8_;
    auVar73._8_8_ = 0;
    auVar73._0_8_ = *(ulonglong *)(pauVar84[1] + 8);
    auVar65 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar61 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar65 = auVar65 ^ auVar73 << uVar7;
      }
    }
    auVar22._8_8_ = 0;
    auVar22._0_8_ = SUB168(auVar95 ^ auVar4,0);
    auVar39._8_8_ = 0;
    auVar39._0_8_ = *(ulonglong *)pauVar84[3];
    auVar4 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar22 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar4 = auVar4 ^ auVar39 << uVar7;
      }
    }
    auVar77._8_8_ = 0;
    auVar77._0_8_ = auVar66._0_8_;
    auVar79._8_8_ = 0;
    auVar79._0_8_ = *(ulonglong *)(pauVar86[1] + 8);
    auVar95 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar77 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar95 = auVar95 ^ auVar79 << uVar7;
      }
    }
    auVar92._0_8_ = CONCAT44(auVar95._4_4_ ^ auVar27._4_4_,auVar95._0_4_ ^ auVar27._0_4_);
    auVar92._8_4_ = auVar95._8_4_ ^ auVar27._8_4_;
    auVar92._12_4_ = auVar95._12_4_ ^ auVar27._12_4_;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = auVar3._0_8_;
    auVar40._8_8_ = 0;
    auVar40._0_8_ = *(ulonglong *)pauVar84[2];
    auVar95 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar23 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar95 = auVar95 ^ auVar40 << uVar7;
      }
    }
    auVar27 = vpunpckhqdq_avx(auVar2,auVar2);
    auVar62._8_8_ = 0;
    auVar62._0_8_ = auVar3._8_8_;
    auVar74._8_8_ = 0;
    auVar74._0_8_ = *(ulonglong *)(pauVar84[2] + 8);
    auVar10 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar62 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar10 = auVar10 ^ auVar74 << uVar7;
      }
    }
    auVar11 = vpalignr_avx(auVar92,auVar92,8);
    auVar48._8_8_ = 0;
    auVar48._0_8_ = SUB168(auVar54 ^ auVar3,0);
    auVar52._8_8_ = 0;
    auVar52._0_8_ = *(ulonglong *)(pauVar84[3] + 8);
    auVar3 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar48 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar3 = auVar3 ^ auVar52 << uVar7;
      }
    }
    auVar78._8_8_ = 0;
    auVar78._0_8_ = auVar92._0_8_;
    auVar80._8_8_ = 0;
    auVar80._0_8_ = *(ulonglong *)(pauVar86[1] + 8);
    auVar54 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar78 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar54 = auVar54 ^ auVar80 << uVar7;
      }
    }
    auVar93._0_8_ =
         CONCAT44(auVar54._4_4_ ^ auVar11._4_4_ ^ auVar13._4_4_ ^ *(uint *)(puVar83 + 0x14),
                  auVar54._0_4_ ^ auVar11._0_4_ ^ auVar13._0_4_ ^ *(uint *)(puVar83 + 0x10));
    auVar93._8_4_ = auVar54._8_4_ ^ auVar11._8_4_ ^ auVar13._8_4_ ^ *(uint *)(puVar83 + 0x18);
    auVar93._12_4_ = auVar54._12_4_ ^ auVar11._12_4_ ^ auVar13._12_4_ ^ *(uint *)(puVar83 + 0x1c);
    auVar24._8_8_ = 0;
    auVar24._0_8_ = auVar2._0_8_;
    auVar41._8_8_ = 0;
    auVar41._0_8_ = *(ulonglong *)pauVar84[4];
    auVar54 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar24 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar54 = auVar54 ^ auVar41 << uVar7;
      }
    }
    auVar11 = vpunpckhqdq_avx(auVar93,auVar93);
    auVar63._8_8_ = 0;
    auVar63._0_8_ = auVar2._8_8_;
    auVar75._8_8_ = 0;
    auVar75._0_8_ = *(ulonglong *)(pauVar84[4] + 8);
    auVar28 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar63 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar28 = auVar28 ^ auVar75 << uVar7;
      }
    }
    auVar25._8_8_ = 0;
    auVar25._0_8_ = SUB168(auVar27 ^ auVar2,0);
    auVar42._8_8_ = 0;
    auVar42._0_8_ = *(ulonglong *)pauVar84[6];
    auVar2 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar25 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar2 = auVar2 ^ auVar42 << uVar7;
      }
    }
    auVar26._8_8_ = 0;
    auVar26._0_8_ = auVar93._0_8_;
    auVar43._8_8_ = 0;
    auVar43._0_8_ = *(ulonglong *)pauVar84[5];
    auVar27 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar26 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar27 = auVar27 ^ auVar43 << uVar7;
      }
    }
    auVar64._8_8_ = 0;
    auVar64._0_8_ = auVar93._8_8_;
    auVar76._8_8_ = 0;
    auVar76._0_8_ = *(ulonglong *)(pauVar84[5] + 8);
    auVar55 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar64 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar55 = auVar55 ^ auVar76 << uVar7;
      }
    }
    auVar27 = auVar27 ^ auVar54 ^ auVar95 ^ auVar5 ^ auVar90 ^ auVar9;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = SUB168(auVar11 ^ auVar93,0);
    auVar53._8_8_ = 0;
    auVar53._0_8_ = *(ulonglong *)(pauVar84[6] + 8);
    auVar90 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar49 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar90 = auVar90 ^ auVar53 << uVar7;
      }
    }
    auVar55 = auVar55 ^ auVar28 ^ auVar10 ^ auVar65 ^ auVar8 ^ auVar91;
    auVar1 = auVar90 ^ auVar2 ^ auVar3 ^ auVar4 ^ auVar1 ^ auVar6 ^ auVar55 ^ auVar27;
    auVar90 = vpslldq_avx(auVar1,8);
    auVar91 = vpsrldq_avx(auVar1,8);
    auVar27 = auVar27 ^ auVar90;
    auVar1 = vpalignr_avx(auVar27,auVar27,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = auVar27._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = *(ulonglong *)(pauVar86[1] + 8);
    auVar90 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar2 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar90 = auVar90 ^ auVar3 << uVar7;
      }
    }
    auVar90 = auVar90 ^ auVar1;
    auVar1 = vpalignr_avx(auVar90,auVar90,8);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = auVar90._0_8_;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = *(ulonglong *)(pauVar86[1] + 8);
    auVar90 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar4 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar90 = auVar90 ^ auVar6 << uVar7;
      }
    }
    auVar1 = vpshufb_avx(auVar90 ^ auVar1 ^ auVar55 ^ auVar91,*pauVar86);
    pauVar84[-4] = auVar1;
  }
  return uVar85;
}

// L$SEH_begin_aesni_gcm_encrypt @ 140df900d

/* WARNING: Removing unreachable block (ram,0x000140df93d4) */
/* WARNING: Removing unreachable block (ram,0x000140df9388) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
L_SEH_begin_aesni_gcm_encrypt
          (undefined8 param_1,longlong param_2,ulonglong param_3,longlong param_4,undefined8 param_5
          ,undefined1 (*param_6) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
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
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
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
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
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
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  ulonglong uVar81;
  ulonglong uVar82;
  undefined1 *puVar83;
  undefined1 (*pauVar84) [16];
  undefined8 uVar85;
  undefined1 (*pauVar86) [16];
  ulonglong uVar87;
  ulonglong uVar88;
  undefined1 extraout_var [56];
  undefined1 auVar89 [64];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [64];
  undefined1 auVar95 [16];
  undefined1 in_ZMM9 [64];
  undefined1 auVar96 [64];
  undefined1 in_ZMM10 [64];
  undefined1 auVar97 [64];
  undefined1 in_ZMM11 [64];
  undefined1 auVar98 [64];
  undefined1 in_ZMM12 [64];
  undefined1 auVar99 [64];
  undefined1 in_ZMM13 [64];
  undefined1 auVar100 [64];
  undefined1 in_ZMM14 [64];
  undefined1 auVar101 [64];
  undefined1 auStack_180 [40];
  undefined1 auStack_158 [176];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 extraout_var_00 [56];
  
  uVar85 = 0;
  if (0x11f < param_3) {
    local_a8 = in_ZMM9._0_16_;
    local_98 = in_ZMM10._0_16_;
    local_88 = in_ZMM11._0_16_;
    local_78 = in_ZMM12._0_16_;
    local_68 = in_ZMM13._0_16_;
    local_58 = in_ZMM14._0_16_;
    auVar96 = ZEXT1664(local_a8);
    auVar97 = ZEXT1664(local_98);
    auVar98 = ZEXT1664(local_88);
    auVar99 = ZEXT1664(local_78);
    auVar100 = ZEXT1664(local_68);
    auVar101 = ZEXT1664(local_58);
    pauVar86 = (undefined1 (*) [16])&L_bswap_mask;
    uVar87 = param_4 - 0x80U & 0xf80;
    uVar88 = ((ulonglong)auStack_158 & 0xf80) - uVar87;
    puVar83 = auStack_180;
    if ((uVar87 <= ((ulonglong)auStack_158 & 0xf80)) && (puVar83 = auStack_180, uVar88 < 0x300)) {
      puVar83 = auStack_180 + -uVar88;
    }
    param_3 = param_3 >> 4;
    *(undefined8 *)(puVar83 + -8) = 0x140df90ea;
    auVar94._0_8_ = _aesni_ctr32_6x(_L_bswap_mask,param_3);
    auVar94._8_56_ = extraout_var;
    auVar91 = auVar94._0_16_;
    auVar1 = vpshufb_avx(auVar96._0_16_,auVar91);
    auVar90 = vpshufb_avx(auVar97._0_16_,auVar91);
    *(undefined1 (*) [16])(puVar83 + 0x70) = auVar1;
    auVar1 = vpshufb_avx(auVar98._0_16_,auVar91);
    *(undefined1 (*) [16])(puVar83 + 0x60) = auVar90;
    auVar90 = vpshufb_avx(auVar99._0_16_,auVar91);
    *(undefined1 (*) [16])(puVar83 + 0x50) = auVar1;
    auVar1 = vpshufb_avx(auVar100._0_16_,auVar91);
    *(undefined1 (*) [16])(puVar83 + 0x40) = auVar90;
    vpshufb_avx(auVar101._0_16_,auVar91);
    *(undefined1 (*) [16])(puVar83 + 0x30) = auVar1;
    *(undefined8 *)(puVar83 + -8) = 0x140df912b;
    auVar89._0_8_ = _aesni_ctr32_6x();
    auVar89._8_56_ = extraout_var_00;
    pauVar84 = param_6 + 4;
    uVar85 = 0xc0;
    auVar1 = vpshufb_avx(*param_6,auVar89._0_16_);
    auVar94 = ZEXT1664(auVar1);
    *(undefined8 *)(puVar83 + -8) = 0x140df9148;
    _aesni_ctr32_ghash_6x(auVar89._0_8_,param_3 - 0xc);
    auVar1 = *(undefined1 (*) [16])(puVar83 + 0x20);
    auVar90 = *pauVar86;
    uVar87 = *(ulonglong *)pauVar84[-2];
    uVar88 = *(ulonglong *)(pauVar84[-2] + 8);
    auVar95 = vpunpckhqdq_avx(auVar1,auVar1);
    uVar81 = *(ulonglong *)*pauVar84;
    uVar82 = *(ulonglong *)(*pauVar84 + 8);
    *(undefined1 (*) [16])(param_2 + -0x60) = auVar96._0_16_;
    auVar91 = vpshufb_avx(auVar96._0_16_,auVar90);
    *(undefined1 (*) [16])(param_2 + -0x50) = auVar97._0_16_;
    auVar2 = vpshufb_avx(auVar97._0_16_,auVar90);
    *(undefined1 (*) [16])(param_2 + -0x40) = auVar98._0_16_;
    auVar3 = vpshufb_avx(auVar98._0_16_,auVar90);
    *(undefined1 (*) [16])(param_2 + -0x30) = auVar99._0_16_;
    auVar4 = vpshufb_avx(auVar99._0_16_,auVar90);
    *(undefined1 (*) [16])(param_2 + -0x20) = auVar100._0_16_;
    auVar5 = vpshufb_avx(auVar100._0_16_,auVar90);
    *(undefined1 (*) [16])(param_2 + -0x10) = auVar101._0_16_;
    auVar6 = vpshufb_avx(auVar101._0_16_,auVar90);
    *(undefined1 (*) [16])(puVar83 + 0x10) = auVar91;
    auVar90 = *(undefined1 (*) [16])(puVar83 + 0x30);
    auVar91 = vpunpckhqdq_avx(auVar90,auVar90);
    auVar9._8_8_ = 0;
    auVar9._0_8_ = auVar1._0_8_;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar87;
    auVar8 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar9 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar8 = auVar8 ^ auVar27 << uVar7;
      }
    }
    auVar54._8_8_ = 0;
    auVar54._0_8_ = auVar1._8_8_;
    auVar65._8_8_ = 0;
    auVar65._0_8_ = uVar88;
    auVar9 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar54 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar9 = auVar9 ^ auVar65 << uVar7;
      }
    }
    auVar10._8_8_ = 0;
    auVar10._0_8_ = SUB168(auVar95 ^ auVar1,0);
    auVar95._8_8_ = 0;
    auVar95._0_8_ = uVar81;
    auVar1 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar10 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar1 = auVar1 ^ auVar95 << uVar7;
      }
    }
    auVar95 = *(undefined1 (*) [16])(puVar83 + 0x40);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = auVar90._0_8_;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = *(ulonglong *)pauVar84[-1];
    auVar27 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar11 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar27 = auVar27 ^ auVar28 << uVar7;
      }
    }
    auVar54 = vpunpckhqdq_avx(auVar95,auVar95);
    auVar55._8_8_ = 0;
    auVar55._0_8_ = auVar90._8_8_;
    auVar66._8_8_ = 0;
    auVar66._0_8_ = *(ulonglong *)(pauVar84[-1] + 8);
    auVar65 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar55 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar65 = auVar65 ^ auVar66 << uVar7;
      }
    }
    auVar44._8_8_ = 0;
    auVar44._0_8_ = SUB168(auVar91 ^ auVar90,0);
    auVar91._8_8_ = 0;
    auVar91._0_8_ = uVar82;
    auVar90 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar44 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar90 = auVar90 ^ auVar91 << uVar7;
      }
    }
    auVar91 = *(undefined1 (*) [16])(puVar83 + 0x50);
    auVar12._8_8_ = 0;
    auVar12._0_8_ = auVar95._0_8_;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = *(ulonglong *)pauVar84[1];
    auVar10 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar12 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar10 = auVar10 ^ auVar29 << uVar7;
      }
    }
    auVar11 = vpunpckhqdq_avx(auVar91,auVar91);
    auVar56._8_8_ = 0;
    auVar56._0_8_ = auVar95._8_8_;
    auVar67._8_8_ = 0;
    auVar67._0_8_ = *(ulonglong *)(pauVar84[1] + 8);
    auVar28 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar56 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar28 = auVar28 ^ auVar67 << uVar7;
      }
    }
    auVar13._8_8_ = 0;
    auVar13._0_8_ = SUB168(auVar54 ^ auVar95,0);
    auVar30._8_8_ = 0;
    auVar30._0_8_ = *(ulonglong *)pauVar84[3];
    auVar95 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar13 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar95 = auVar95 ^ auVar30 << uVar7;
      }
    }
    auVar54 = *(undefined1 (*) [16])(puVar83 + 0x60);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = auVar91._0_8_;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = *(ulonglong *)pauVar84[2];
    auVar55 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar14 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar55 = auVar55 ^ auVar31 << uVar7;
      }
    }
    auVar66 = vpunpckhqdq_avx(auVar54,auVar54);
    auVar57._8_8_ = 0;
    auVar57._0_8_ = auVar91._8_8_;
    auVar68._8_8_ = 0;
    auVar68._0_8_ = *(ulonglong *)(pauVar84[2] + 8);
    auVar44 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar57 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar44 = auVar44 ^ auVar68 << uVar7;
      }
    }
    auVar45._8_8_ = 0;
    auVar45._0_8_ = SUB168(auVar11 ^ auVar91,0);
    auVar50._8_8_ = 0;
    auVar50._0_8_ = *(ulonglong *)(pauVar84[3] + 8);
    auVar91 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar45 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar91 = auVar91 ^ auVar50 << uVar7;
      }
    }
    auVar11 = auVar94._0_16_ ^ *(undefined1 (*) [16])(puVar83 + 0x70);
    auVar15._8_8_ = 0;
    auVar15._0_8_ = auVar54._0_8_;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = *(ulonglong *)pauVar84[4];
    auVar12 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar15 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar12 = auVar12 ^ auVar32 << uVar7;
      }
    }
    auVar29 = vpunpckhqdq_avx(auVar11,auVar11);
    auVar58._8_8_ = 0;
    auVar58._0_8_ = auVar54._8_8_;
    auVar69._8_8_ = 0;
    auVar69._0_8_ = *(ulonglong *)(pauVar84[4] + 8);
    auVar56 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar58 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar56 = auVar56 ^ auVar69 << uVar7;
      }
    }
    auVar16._8_8_ = 0;
    auVar16._0_8_ = SUB168(auVar66 ^ auVar54,0);
    auVar33._8_8_ = 0;
    auVar33._0_8_ = *(ulonglong *)pauVar84[6];
    auVar54 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar16 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar54 = auVar54 ^ auVar33 << uVar7;
      }
    }
    auVar17._8_8_ = 0;
    auVar17._0_8_ = auVar11._0_8_;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = *(ulonglong *)pauVar84[5];
    auVar66 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar17 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar66 = auVar66 ^ auVar34 << uVar7;
      }
    }
    auVar67 = vpunpckhqdq_avx(auVar6,auVar6);
    auVar59._8_8_ = 0;
    auVar59._0_8_ = auVar11._8_8_;
    auVar70._8_8_ = 0;
    auVar70._0_8_ = *(ulonglong *)(pauVar84[5] + 8);
    auVar13 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar59 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar13 = auVar13 ^ auVar70 << uVar7;
      }
    }
    auVar66 = auVar66 ^ auVar12 ^ auVar55 ^ auVar10 ^ auVar27 ^ auVar8;
    auVar46._8_8_ = 0;
    auVar46._0_8_ = SUB168(auVar29 ^ auVar11,0);
    auVar51._8_8_ = 0;
    auVar51._0_8_ = *(ulonglong *)(pauVar84[6] + 8);
    auVar8 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar46 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar8 = auVar8 ^ auVar51 << uVar7;
      }
    }
    auVar13 = auVar13 ^ auVar56 ^ auVar44 ^ auVar28 ^ auVar65 ^ auVar9;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = auVar6._0_8_;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = *(ulonglong *)pauVar84[-2];
    auVar9 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar18 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar9 = auVar9 ^ auVar35 << uVar7;
      }
    }
    auVar90 = auVar8 ^ auVar54 ^ auVar91 ^ auVar95 ^ auVar90 ^ auVar1 ^ auVar13 ^ auVar66;
    auVar1 = vpunpckhqdq_avx(auVar5,auVar5);
    auVar8._8_8_ = 0;
    auVar8._0_8_ = auVar6._8_8_;
    auVar71._8_8_ = 0;
    auVar71._0_8_ = *(ulonglong *)(pauVar84[-2] + 8);
    auVar91 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar8 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar91 = auVar91 ^ auVar71 << uVar7;
      }
    }
    auVar95 = vpslldq_avx(auVar90,8);
    auVar19._8_8_ = 0;
    auVar19._0_8_ = SUB168(auVar67 ^ auVar6,0);
    auVar36._8_8_ = 0;
    auVar36._0_8_ = *(ulonglong *)*pauVar84;
    auVar6 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar19 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar6 = auVar6 ^ auVar36 << uVar7;
      }
    }
    auVar66 = auVar66 ^ auVar95;
    auVar90 = vpsrldq_avx(auVar90,8);
    auVar13 = auVar13 ^ auVar90;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = auVar5._0_8_;
    auVar37._8_8_ = 0;
    auVar37._0_8_ = *(ulonglong *)pauVar84[-1];
    auVar90 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar20 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar90 = auVar90 ^ auVar37 << uVar7;
      }
    }
    auVar95 = vpunpckhqdq_avx(auVar4,auVar4);
    auVar60._8_8_ = 0;
    auVar60._0_8_ = auVar5._8_8_;
    auVar72._8_8_ = 0;
    auVar72._0_8_ = *(ulonglong *)(pauVar84[-1] + 8);
    auVar8 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar60 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar8 = auVar8 ^ auVar72 << uVar7;
      }
    }
    auVar27 = vpalignr_avx(auVar66,auVar66,8);
    auVar47._8_8_ = 0;
    auVar47._0_8_ = SUB168(auVar1 ^ auVar5,0);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = *(ulonglong *)(*pauVar84 + 8);
    auVar1 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar47 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar1 = auVar1 ^ auVar5 << uVar7;
      }
    }
    auVar21._8_8_ = 0;
    auVar21._0_8_ = auVar4._0_8_;
    auVar38._8_8_ = 0;
    auVar38._0_8_ = *(ulonglong *)pauVar84[1];
    auVar5 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar21 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar5 = auVar5 ^ auVar38 << uVar7;
      }
    }
    auVar54 = vpunpckhqdq_avx(auVar3,auVar3);
    auVar61._8_8_ = 0;
    auVar61._0_8_ = auVar4._8_8_;
    auVar73._8_8_ = 0;
    auVar73._0_8_ = *(ulonglong *)(pauVar84[1] + 8);
    auVar65 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar61 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar65 = auVar65 ^ auVar73 << uVar7;
      }
    }
    auVar22._8_8_ = 0;
    auVar22._0_8_ = SUB168(auVar95 ^ auVar4,0);
    auVar39._8_8_ = 0;
    auVar39._0_8_ = *(ulonglong *)pauVar84[3];
    auVar4 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar22 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar4 = auVar4 ^ auVar39 << uVar7;
      }
    }
    auVar77._8_8_ = 0;
    auVar77._0_8_ = auVar66._0_8_;
    auVar79._8_8_ = 0;
    auVar79._0_8_ = *(ulonglong *)(pauVar86[1] + 8);
    auVar95 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar77 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar95 = auVar95 ^ auVar79 << uVar7;
      }
    }
    auVar92._0_8_ = CONCAT44(auVar95._4_4_ ^ auVar27._4_4_,auVar95._0_4_ ^ auVar27._0_4_);
    auVar92._8_4_ = auVar95._8_4_ ^ auVar27._8_4_;
    auVar92._12_4_ = auVar95._12_4_ ^ auVar27._12_4_;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = auVar3._0_8_;
    auVar40._8_8_ = 0;
    auVar40._0_8_ = *(ulonglong *)pauVar84[2];
    auVar95 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar23 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar95 = auVar95 ^ auVar40 << uVar7;
      }
    }
    auVar27 = vpunpckhqdq_avx(auVar2,auVar2);
    auVar62._8_8_ = 0;
    auVar62._0_8_ = auVar3._8_8_;
    auVar74._8_8_ = 0;
    auVar74._0_8_ = *(ulonglong *)(pauVar84[2] + 8);
    auVar10 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar62 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar10 = auVar10 ^ auVar74 << uVar7;
      }
    }
    auVar11 = vpalignr_avx(auVar92,auVar92,8);
    auVar48._8_8_ = 0;
    auVar48._0_8_ = SUB168(auVar54 ^ auVar3,0);
    auVar52._8_8_ = 0;
    auVar52._0_8_ = *(ulonglong *)(pauVar84[3] + 8);
    auVar3 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar48 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar3 = auVar3 ^ auVar52 << uVar7;
      }
    }
    auVar78._8_8_ = 0;
    auVar78._0_8_ = auVar92._0_8_;
    auVar80._8_8_ = 0;
    auVar80._0_8_ = *(ulonglong *)(pauVar86[1] + 8);
    auVar54 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar78 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar54 = auVar54 ^ auVar80 << uVar7;
      }
    }
    auVar93._0_8_ =
         CONCAT44(auVar54._4_4_ ^ auVar11._4_4_ ^ auVar13._4_4_ ^ *(uint *)(puVar83 + 0x14),
                  auVar54._0_4_ ^ auVar11._0_4_ ^ auVar13._0_4_ ^ *(uint *)(puVar83 + 0x10));
    auVar93._8_4_ = auVar54._8_4_ ^ auVar11._8_4_ ^ auVar13._8_4_ ^ *(uint *)(puVar83 + 0x18);
    auVar93._12_4_ = auVar54._12_4_ ^ auVar11._12_4_ ^ auVar13._12_4_ ^ *(uint *)(puVar83 + 0x1c);
    auVar24._8_8_ = 0;
    auVar24._0_8_ = auVar2._0_8_;
    auVar41._8_8_ = 0;
    auVar41._0_8_ = *(ulonglong *)pauVar84[4];
    auVar54 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar24 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar54 = auVar54 ^ auVar41 << uVar7;
      }
    }
    auVar11 = vpunpckhqdq_avx(auVar93,auVar93);
    auVar63._8_8_ = 0;
    auVar63._0_8_ = auVar2._8_8_;
    auVar75._8_8_ = 0;
    auVar75._0_8_ = *(ulonglong *)(pauVar84[4] + 8);
    auVar28 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar63 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar28 = auVar28 ^ auVar75 << uVar7;
      }
    }
    auVar25._8_8_ = 0;
    auVar25._0_8_ = SUB168(auVar27 ^ auVar2,0);
    auVar42._8_8_ = 0;
    auVar42._0_8_ = *(ulonglong *)pauVar84[6];
    auVar2 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar25 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar2 = auVar2 ^ auVar42 << uVar7;
      }
    }
    auVar26._8_8_ = 0;
    auVar26._0_8_ = auVar93._0_8_;
    auVar43._8_8_ = 0;
    auVar43._0_8_ = *(ulonglong *)pauVar84[5];
    auVar27 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar26 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar27 = auVar27 ^ auVar43 << uVar7;
      }
    }
    auVar64._8_8_ = 0;
    auVar64._0_8_ = auVar93._8_8_;
    auVar76._8_8_ = 0;
    auVar76._0_8_ = *(ulonglong *)(pauVar84[5] + 8);
    auVar55 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar64 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar55 = auVar55 ^ auVar76 << uVar7;
      }
    }
    auVar27 = auVar27 ^ auVar54 ^ auVar95 ^ auVar5 ^ auVar90 ^ auVar9;
    auVar49._8_8_ = 0;
    auVar49._0_8_ = SUB168(auVar11 ^ auVar93,0);
    auVar53._8_8_ = 0;
    auVar53._0_8_ = *(ulonglong *)(pauVar84[6] + 8);
    auVar90 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar49 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar90 = auVar90 ^ auVar53 << uVar7;
      }
    }
    auVar55 = auVar55 ^ auVar28 ^ auVar10 ^ auVar65 ^ auVar8 ^ auVar91;
    auVar1 = auVar90 ^ auVar2 ^ auVar3 ^ auVar4 ^ auVar1 ^ auVar6 ^ auVar55 ^ auVar27;
    auVar90 = vpslldq_avx(auVar1,8);
    auVar91 = vpsrldq_avx(auVar1,8);
    auVar27 = auVar27 ^ auVar90;
    auVar1 = vpalignr_avx(auVar27,auVar27,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = auVar27._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = *(ulonglong *)(pauVar86[1] + 8);
    auVar90 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar2 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar90 = auVar90 ^ auVar3 << uVar7;
      }
    }
    auVar90 = auVar90 ^ auVar1;
    auVar1 = vpalignr_avx(auVar90,auVar90,8);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = auVar90._0_8_;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = *(ulonglong *)(pauVar86[1] + 8);
    auVar90 = (undefined1  [16])0x0;
    for (uVar7 = 0; uVar7 < 0x40; uVar7 = uVar7 + 1) {
      if ((auVar4 & (undefined1  [16])0x1 << uVar7) != (undefined1  [16])0x0) {
        auVar90 = auVar90 ^ auVar6 << uVar7;
      }
    }
    auVar1 = vpshufb_avx(auVar90 ^ auVar1 ^ auVar55 ^ auVar91,*pauVar86);
    pauVar84[-4] = auVar1;
  }
  return uVar85;
}


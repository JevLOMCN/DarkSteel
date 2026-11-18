// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 4

// get_exp_golomb_tails @ 14f3ddab0

/* WARNING: Removing unreachable block (ram,0x00014f3ddb43) */
/* WARNING: Removing unreachable block (ram,0x00014f3ddb33) */
/* WARNING: Removing unreachable block (ram,0x00014f3ddb16) */
/* WARNING: Removing unreachable block (ram,0x00014f3ddb04) */
/* WARNING: Removing unreachable block (ram,0x00014f3ddade) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl
oo2::get_exp_golomb_tails
          (__m128i *param_1,__m128i *param_2,uchar *param_3,uint param_4,__m128i *param_5)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auVar6 [14];
  undefined1 auVar7 [12];
  unkbyte10 Var8;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ushort uVar24;
  char cVar39;
  char cVar40;
  char cVar41;
  char cVar42;
  char cVar43;
  char cVar44;
  char cVar45;
  char cVar46;
  char cVar47;
  char cVar48;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  char cVar49;
  char cVar58;
  char cVar59;
  char cVar60;
  char cVar61;
  char cVar62;
  char cVar63;
  char cVar64;
  char cVar65;
  char cVar66;
  char cVar67;
  char cVar68;
  char cVar69;
  char cVar70;
  undefined1 auVar50 [16];
  short sVar71;
  undefined1 auVar74 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 unaff_XMM6_Ba;
  undefined1 unaff_XMM6_Bb;
  undefined1 unaff_XMM6_Bc;
  undefined1 unaff_XMM6_Bd;
  undefined1 unaff_XMM6_Be;
  undefined1 unaff_XMM6_Bf;
  undefined1 uVar78;
  undefined1 unaff_XMM6_Bg;
  undefined1 uVar79;
  undefined1 unaff_XMM6_Bh;
  undefined1 uVar80;
  undefined1 unaff_XMM6_Bi;
  undefined1 unaff_XMM6_Bj;
  undefined1 uVar81;
  undefined1 unaff_XMM6_Bk;
  undefined1 uVar82;
  undefined1 unaff_XMM6_Bl;
  undefined1 uVar83;
  undefined1 unaff_XMM6_Bm;
  undefined1 unaff_XMM6_Bn;
  undefined1 uVar84;
  undefined1 unaff_XMM6_Bo;
  undefined1 uVar85;
  undefined1 unaff_XMM6_Bp;
  undefined1 uVar86;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 uVar25;
  undefined6 uVar26;
  undefined8 uVar27;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar28 [12];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar29 [14];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar72 [12];
  undefined1 auVar73 [14];
  undefined1 auVar75 [16];
  
  auVar1 = *(undefined1 (*) [16])param_5->m128i_i8;
  uVar2 = CONCAT13(unaff_XMM6_Bd,CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba))) ^
          CONCAT13(unaff_XMM6_Bd,CONCAT12(unaff_XMM6_Bc,CONCAT11(unaff_XMM6_Bb,unaff_XMM6_Ba)));
  uVar3 = CONCAT13(unaff_XMM6_Bh,CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be))) ^
          CONCAT13(unaff_XMM6_Bh,CONCAT12(unaff_XMM6_Bg,CONCAT11(unaff_XMM6_Bf,unaff_XMM6_Be)));
  uVar78 = (undefined1)(uVar3 >> 8);
  uVar79 = (undefined1)(uVar3 >> 0x10);
  uVar80 = (undefined1)(uVar3 >> 0x18);
  uVar4 = CONCAT13(unaff_XMM6_Bl,CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi))) ^
          CONCAT13(unaff_XMM6_Bl,CONCAT12(unaff_XMM6_Bk,CONCAT11(unaff_XMM6_Bj,unaff_XMM6_Bi)));
  uVar81 = (undefined1)(uVar4 >> 8);
  uVar82 = (undefined1)(uVar4 >> 0x10);
  uVar83 = (undefined1)(uVar4 >> 0x18);
  uVar5 = CONCAT13(unaff_XMM6_Bp,CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm))) ^
          CONCAT13(unaff_XMM6_Bp,CONCAT12(unaff_XMM6_Bo,CONCAT11(unaff_XMM6_Bn,unaff_XMM6_Bm)));
  uVar84 = (undefined1)(uVar5 >> 8);
  uVar85 = (undefined1)(uVar5 >> 0x10);
  uVar86 = (undefined1)(uVar5 >> 0x18);
  cVar49 = auVar1[0];
  cVar58 = auVar1[1];
  cVar18 = cVar49 + cVar58;
  cVar59 = auVar1[2];
  cVar60 = auVar1[3];
  cVar61 = auVar1[4];
  cVar62 = auVar1[5];
  cVar63 = auVar1[6];
  cVar64 = auVar1[7];
  cVar65 = auVar1[8];
  cVar66 = auVar1[9];
  cVar67 = auVar1[10];
  cVar68 = auVar1[0xb];
  cVar69 = auVar1[0xc];
  cVar70 = auVar1[0xd];
  cVar23 = auVar1[0xe];
  cVar39 = cVar49 + cVar58 + cVar59;
  cVar40 = cVar18 + cVar59 + cVar60;
  cVar41 = cVar58 + cVar59 + cVar60 + cVar61;
  cVar42 = cVar59 + cVar60 + cVar61 + cVar62;
  cVar43 = cVar60 + cVar61 + cVar62 + cVar63;
  cVar44 = cVar61 + cVar62 + cVar63 + cVar64;
  cVar45 = cVar62 + cVar63 + cVar64 + cVar65;
  cVar46 = cVar63 + cVar64 + cVar65 + cVar66;
  cVar47 = cVar64 + cVar65 + cVar66 + cVar67;
  cVar48 = cVar65 + cVar66 + cVar67 + cVar68;
  cVar19 = cVar49 + cVar41;
  cVar20 = cVar18 + cVar42;
  cVar21 = cVar39 + cVar43;
  cVar22 = cVar40 + cVar44;
  auVar30[4] = (char)uVar3;
  auVar30._0_4_ = uVar2;
  auVar30[5] = uVar78;
  auVar30[6] = uVar79;
  auVar30[7] = uVar80;
  auVar30[8] = (char)uVar4;
  auVar30[9] = uVar81;
  auVar30[10] = uVar82;
  auVar30[0xb] = uVar83;
  auVar30[0xc] = (char)uVar5;
  auVar30[0xd] = uVar84;
  auVar30[0xe] = uVar85;
  auVar30[0xf] = uVar86;
  auVar30 = pshufb(ZEXT416(param_4),auVar30);
  auVar74 = pshufb(___xmm_ffffffffffffffff7f3f1f0f07030100,auVar1);
  uVar24 = CONCAT11(auVar30[1] + cVar49,auVar30[0]);
  uVar25 = CONCAT13(auVar30[3] + cVar39,CONCAT12(auVar30[2] + cVar18,uVar24));
  uVar26 = CONCAT15(auVar30[5] + cVar19,CONCAT14(auVar30[4] + cVar40,uVar25));
  uVar27 = CONCAT17(auVar30[7] + cVar21,CONCAT16(auVar30[6] + cVar20,uVar26));
  auVar28._0_10_ =
       CONCAT19(auVar30[9] + cVar49 + cVar41 + cVar45,CONCAT18(auVar30[8] + cVar22,uVar27));
  auVar28[10] = auVar30[10] + cVar18 + cVar42 + cVar46;
  auVar28[0xb] = auVar30[0xb] + cVar39 + cVar43 + cVar47;
  auVar29[0xc] = auVar30[0xc] + cVar40 + cVar44 + cVar48;
  auVar29._0_12_ = auVar28;
  auVar29[0xd] = auVar30[0xd] + cVar19 + cVar45 + cVar66 + cVar67 + cVar68 + cVar69;
  auVar9[0xe] = auVar30[0xe] + cVar20 + cVar46 + cVar67 + cVar68 + cVar69 + cVar70;
  auVar9._0_14_ = auVar29;
  auVar9[0xf] = auVar30[0xf] + cVar21 + cVar47 + cVar68 + cVar69 + cVar70 + cVar23;
  auVar76._0_2_ = uVar24 >> 3;
  auVar76._2_2_ = (ushort)((uint)uVar25 >> 0x13);
  auVar76._4_2_ = (ushort)((uint6)uVar26 >> 0x23);
  auVar76._6_2_ = (ushort)((ulonglong)uVar27 >> 0x33);
  auVar76._8_2_ = (ushort)((unkuint10)auVar28._0_10_ >> 0x43);
  auVar76._10_2_ = auVar28._10_2_ >> 3;
  auVar76._12_2_ = auVar29._12_2_ >> 3;
  auVar76._14_2_ = auVar9._14_2_ >> 3;
  auVar89 = pshufb(*(undefined1 (*) [16])param_3,auVar76 & ___xmm_1f1f1f1f1f1f1f1f1f1f1f1f1f1f1f1f);
  auVar87 = pshufb(*(undefined1 (*) [16])(param_3 + 1),
                   auVar76 & ___xmm_1f1f1f1f1f1f1f1f1f1f1f1f1f1f1f1f);
  auVar9 = ___xmm_07070707070707070707070707070707 & auVar9;
  auVar10[0] = auVar9[0] + cVar49;
  auVar10[1] = auVar9[1] + cVar58;
  auVar10[2] = auVar9[2] + cVar59;
  auVar10[3] = auVar9[3] + cVar60;
  auVar10[4] = auVar9[4] + cVar61;
  auVar10[5] = auVar9[5] + cVar62;
  auVar10[6] = auVar9[6] + cVar63;
  auVar10[7] = auVar9[7] + cVar64;
  auVar10[8] = auVar9[8] + cVar65;
  auVar10[9] = auVar9[9] + cVar66;
  auVar10[10] = auVar9[10] + cVar67;
  auVar10[0xb] = auVar9[0xb] + cVar68;
  auVar10[0xc] = auVar9[0xc] + cVar69;
  auVar10[0xd] = auVar9[0xd] + cVar70;
  auVar10[0xe] = auVar9[0xe] + cVar23;
  auVar10[0xf] = auVar9[0xf] + auVar1[0xf];
  auVar76 = pshufb(___xmm_00000000000000008040201008040201,auVar10);
  auVar30 = pshufb(___xmm_80402010080402010000000000000000,auVar10);
  auVar57._0_14_ = auVar74._0_14_;
  auVar57[0xe] = auVar74[7];
  auVar57[0xf] = uVar80;
  auVar56._14_2_ = auVar57._14_2_;
  auVar56._0_13_ = auVar74._0_13_;
  auVar56[0xd] = uVar79;
  auVar55._13_3_ = auVar56._13_3_;
  auVar55._0_12_ = auVar74._0_12_;
  auVar55[0xc] = auVar74[6];
  auVar54._12_4_ = auVar55._12_4_;
  auVar54._0_11_ = auVar74._0_11_;
  auVar54[0xb] = uVar78;
  auVar53._11_5_ = auVar54._11_5_;
  auVar53._0_10_ = auVar74._0_10_;
  auVar53[10] = auVar74[5];
  auVar52._10_6_ = auVar53._10_6_;
  auVar52._0_9_ = auVar74._0_9_;
  auVar52[9] = (char)uVar3;
  auVar51._9_7_ = auVar52._9_7_;
  auVar51._0_8_ = auVar74._0_8_;
  auVar51[8] = auVar74[4];
  Var8 = CONCAT91(CONCAT81(auVar51._8_8_,(char)(uVar2 >> 0x18)),auVar74[3]);
  auVar7._2_10_ = Var8;
  auVar7[1] = (char)(uVar2 >> 0x10);
  auVar7[0] = auVar74[2];
  auVar6._2_12_ = auVar7;
  auVar6[1] = (char)(uVar2 >> 8);
  auVar6[0] = auVar74[1];
  auVar50._0_2_ = CONCAT11((char)uVar2,auVar74[0]);
  auVar50._2_14_ = auVar6;
  auVar38._0_14_ = auVar76._0_14_;
  auVar38[0xe] = auVar76[7];
  auVar38[0xf] = auVar30[7];
  auVar37._14_2_ = auVar38._14_2_;
  auVar37._0_13_ = auVar76._0_13_;
  auVar37[0xd] = auVar30[6];
  auVar36._13_3_ = auVar37._13_3_;
  auVar36._0_12_ = auVar76._0_12_;
  auVar36[0xc] = auVar76[6];
  auVar35._12_4_ = auVar36._12_4_;
  auVar35._0_11_ = auVar76._0_11_;
  auVar35[0xb] = auVar30[5];
  auVar34._11_5_ = auVar35._11_5_;
  auVar34._0_10_ = auVar76._0_10_;
  auVar34[10] = auVar76[5];
  auVar33._10_6_ = auVar34._10_6_;
  auVar33._0_9_ = auVar76._0_9_;
  auVar33[9] = auVar30[4];
  auVar32._9_7_ = auVar33._9_7_;
  auVar32._0_8_ = auVar76._0_8_;
  auVar32[8] = auVar76[4];
  auVar31._8_8_ = auVar32._8_8_;
  auVar31[7] = auVar30[3];
  auVar31[6] = auVar76[3];
  auVar31[5] = auVar30[2];
  auVar31[4] = auVar76[2];
  auVar31[3] = auVar30[1];
  auVar31[2] = auVar76[1];
  auVar31[0] = auVar76[0];
  auVar31[1] = auVar30[0];
  auVar77[1] = auVar30[8];
  auVar77[0] = auVar76[8];
  auVar77[2] = auVar76[9];
  auVar77[3] = auVar30[9];
  auVar77[4] = auVar76[10];
  auVar77[5] = auVar30[10];
  auVar77[6] = auVar76[0xb];
  auVar77[7] = auVar30[0xb];
  auVar77[8] = auVar76[0xc];
  auVar77[9] = auVar30[0xc];
  auVar77[10] = auVar76[0xd];
  auVar77[0xb] = auVar30[0xd];
  auVar77[0xc] = auVar76[0xe];
  auVar77[0xd] = auVar30[0xe];
  auVar77[0xe] = auVar76[0xf];
  auVar77[0xf] = auVar30[0xf];
  auVar88[1] = auVar89[8];
  auVar88[0] = auVar87[8];
  auVar88[2] = auVar87[9];
  auVar88[3] = auVar89[9];
  auVar88[4] = auVar87[10];
  auVar88[5] = auVar89[10];
  auVar88[6] = auVar87[0xb];
  auVar88[7] = auVar89[0xb];
  auVar88[8] = auVar87[0xc];
  auVar88[9] = auVar89[0xc];
  auVar88[10] = auVar87[0xd];
  auVar88[0xb] = auVar89[0xd];
  auVar88[0xc] = auVar87[0xe];
  auVar88[0xd] = auVar89[0xe];
  auVar88[0xe] = auVar87[0xf];
  auVar88[0xf] = auVar89[0xf];
  auVar76 = pmulhuw(auVar77,auVar88);
  sVar71 = CONCAT11((char)uVar4,auVar74[8]);
  uVar25 = CONCAT13(uVar81,CONCAT12(auVar74[9],sVar71));
  uVar26 = CONCAT15(uVar82,CONCAT14(auVar74[10],uVar25));
  uVar27 = CONCAT17(uVar83,CONCAT16(auVar74[0xb],uVar26));
  auVar72._0_10_ = CONCAT19((char)uVar5,CONCAT18(auVar74[0xc],uVar27));
  auVar72[10] = auVar74[0xd];
  auVar72[0xb] = uVar84;
  auVar73[0xc] = auVar74[0xe];
  auVar73._0_12_ = auVar72;
  auVar73[0xd] = uVar85;
  auVar75[0xe] = auVar74[0xf];
  auVar75._0_14_ = auVar73;
  auVar75[0xf] = uVar86;
  auVar17._0_14_ = auVar87._0_14_;
  auVar17[0xe] = auVar87[7];
  auVar17[0xf] = auVar89[7];
  auVar16._14_2_ = auVar17._14_2_;
  auVar16._0_13_ = auVar87._0_13_;
  auVar16[0xd] = auVar89[6];
  auVar15._13_3_ = auVar16._13_3_;
  auVar15._0_12_ = auVar87._0_12_;
  auVar15[0xc] = auVar87[6];
  auVar14._12_4_ = auVar15._12_4_;
  auVar14._0_11_ = auVar87._0_11_;
  auVar14[0xb] = auVar89[5];
  auVar13._11_5_ = auVar14._11_5_;
  auVar13._0_10_ = auVar87._0_10_;
  auVar13[10] = auVar87[5];
  auVar12._10_6_ = auVar13._10_6_;
  auVar12._0_9_ = auVar87._0_9_;
  auVar12[9] = auVar89[4];
  auVar11._9_7_ = auVar12._9_7_;
  auVar11._0_8_ = auVar87._0_8_;
  auVar11[8] = auVar87[4];
  auVar74._8_8_ = auVar11._8_8_;
  auVar74[7] = auVar89[3];
  auVar74[6] = auVar87[3];
  auVar74[5] = auVar89[2];
  auVar74[4] = auVar87[2];
  auVar74[3] = auVar89[1];
  auVar74[2] = auVar87[1];
  auVar74[0] = auVar87[0];
  auVar74[1] = auVar89[0];
  auVar76 = auVar76 & auVar75;
  auVar30 = pmulhuw(auVar31,auVar74);
  auVar30 = auVar30 & auVar50;
  param_1->m128i_i16[0] = auVar30._0_2_ + auVar50._0_2_;
  param_1->m128i_i16[1] = auVar30._2_2_ + auVar6._0_2_;
  param_1->m128i_i16[2] = auVar30._4_2_ + auVar7._0_2_;
  param_1->m128i_i16[3] = auVar30._6_2_ + (short)Var8;
  param_1->m128i_i16[4] = auVar30._8_2_ + auVar51._8_2_;
  param_1->m128i_i16[5] = auVar30._10_2_ + auVar53._10_2_;
  param_1->m128i_i16[6] = auVar30._12_2_ + auVar55._12_2_;
  param_1->m128i_i16[7] = auVar30._14_2_ + auVar56._14_2_;
  param_2->m128i_i16[0] = auVar76._0_2_ + sVar71;
  param_2->m128i_i16[1] = auVar76._2_2_ + (short)((uint)uVar25 >> 0x10);
  param_2->m128i_i16[2] = auVar76._4_2_ + (short)((uint6)uVar26 >> 0x20);
  param_2->m128i_i16[3] = auVar76._6_2_ + (short)((ulonglong)uVar27 >> 0x30);
  param_2->m128i_i16[4] = auVar76._8_2_ + (short)((unkuint10)auVar72._0_10_ >> 0x40);
  param_2->m128i_i16[5] = auVar76._10_2_ + auVar72._10_2_;
  param_2->m128i_i16[6] = auVar76._12_2_ + auVar73._12_2_;
  param_2->m128i_i16[7] = auVar76._14_2_ + auVar75._14_2_;
  return (uint)(byte)(cVar22 + cVar48 + cVar69 + cVar70 + cVar23 + auVar1[0xf]);
}

// newLZ_decode_alphabet_shape_run_pairs_ssse3 @ 14f3ddc00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014f3ddd65) */
/* WARNING: Removing unreachable block (ram,0x00014f3ddd72) */
/* WARNING: Removing unreachable block (ram,0x00014f3ddd9e) */
/* WARNING: Removing unreachable block (ram,0x00014f3ddd58) */
/* WARNING: Removing unreachable block (ram,0x00014f3ddd8e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
oo2::newLZ_decode_alphabet_shape_run_pairs_ssse3
          (ushort *param_1,BlockBitReader *param_2,uchar *param_3,uint param_4)

{
  ushort *puVar1;
  uchar *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  undefined1 auVar21 [14];
  undefined1 auVar22 [12];
  unkbyte10 Var23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  ulonglong uVar40;
  undefined1 (*pauVar41) [16];
  ulonglong uVar42;
  uint uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  size_t _Size;
  char cVar55;
  char cVar56;
  char cVar57;
  char cVar58;
  char cVar59;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined4 uVar60;
  char cVar74;
  ushort uVar75;
  char cVar76;
  char cVar77;
  ushort uVar78;
  char cVar79;
  char cVar80;
  ushort uVar81;
  char cVar82;
  char cVar83;
  ushort uVar84;
  char cVar85;
  char cVar86;
  ushort uVar87;
  char cVar88;
  ushort uVar89;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  ushort uVar90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 in_XMM3_Ba;
  undefined1 in_XMM3_Bb;
  undefined1 in_XMM3_Bc;
  undefined1 in_XMM3_Bd;
  undefined1 in_XMM3_Be;
  undefined1 in_XMM3_Bf;
  undefined1 in_XMM3_Bg;
  undefined1 in_XMM3_Bh;
  undefined1 in_XMM3_Bi;
  undefined1 in_XMM3_Bj;
  undefined1 in_XMM3_Bk;
  undefined1 in_XMM3_Bl;
  undefined1 in_XMM3_Bm;
  undefined1 in_XMM3_Bn;
  undefined1 in_XMM3_Bo;
  undefined1 in_XMM3_Bp;
  short sVar100;
  undefined1 auVar103 [16];
  ushort uVar105;
  ushort uVar108;
  ushort uVar109;
  ushort uVar110;
  ushort uVar111;
  ushort uVar112;
  ushort uVar113;
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  ushort uVar114;
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  byte bVar118;
  byte bVar119;
  byte bVar120;
  byte bVar121;
  byte bVar122;
  byte bVar123;
  byte bVar124;
  byte bVar125;
  byte bVar126;
  byte bVar127;
  byte bVar128;
  byte bVar129;
  byte bVar130;
  byte bVar131;
  byte bVar132;
  byte bVar133;
  undefined1 auVar134 [16];
  undefined1 auStack_108 [32];
  uchar *local_e8;
  ushort *local_e0;
  ulonglong local_d8 [20];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined6 uVar61;
  undefined8 uVar62;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar63 [12];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar64 [14];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar101 [12];
  undefined1 auVar102 [14];
  undefined1 auVar104 [16];
  
  local_d8[4] = __security_cookie.value ^ (ulonglong)auStack_108;
  puVar2 = param_2->ptr;
  if (puVar2 < param_2->end) {
    uVar43 = param_2->pos_in_byte;
    uVar42 = (longlong)param_2->end - (longlong)puVar2;
    uVar45 = 0;
    uVar44 = uVar42;
    local_e8 = param_3;
    if (uVar42 < 0x10f) {
      uVar44 = uVar45;
      if (0xf < uVar42) {
        uVar44 = uVar42 - 0x10;
      }
      _Size = uVar42 - uVar44;
      if (_Size != 0) {
        local_e0 = param_1;
        memcpy(local_d8,puVar2 + uVar44,_Size);
        param_1 = local_e0;
      }
      param_3 = local_e8;
      *(undefined8 *)((longlong)local_d8 + _Size) = 0;
      *(undefined8 *)((longlong)local_d8 + _Size + 8) = 0;
    }
    bVar39 = UNK_1531e914f;
    bVar38 = UNK_1531e914e;
    bVar37 = UNK_1531e914d;
    bVar36 = UNK_1531e914c;
    bVar35 = UNK_1531e914b;
    bVar34 = UNK_1531e914a;
    bVar33 = UNK_1531e9149;
    bVar32 = UNK_1531e9148;
    bVar31 = UNK_1531e9147;
    bVar30 = UNK_1531e9146;
    bVar29 = UNK_1531e9145;
    bVar28 = UNK_1531e9144;
    bVar27 = UNK_1531e9143;
    bVar26 = UNK_1531e9142;
    bVar25 = UNK_1531e9141;
    bVar24 = __xmm_08080808080808080808080808080808;
    auVar134 = ___xmm_01000100010001000100010001000100;
    bVar118 = __xmm_08080808080808080808080808080808;
    bVar119 = UNK_1531e9141;
    bVar120 = UNK_1531e9142;
    bVar121 = UNK_1531e9143;
    bVar122 = UNK_1531e9144;
    bVar123 = UNK_1531e9145;
    bVar124 = UNK_1531e9146;
    bVar125 = UNK_1531e9147;
    bVar126 = UNK_1531e9148;
    bVar127 = UNK_1531e9149;
    bVar128 = UNK_1531e914a;
    bVar129 = UNK_1531e914b;
    bVar130 = UNK_1531e914c;
    bVar131 = UNK_1531e914d;
    bVar132 = UNK_1531e914e;
    bVar133 = UNK_1531e914f;
    if (param_4 != 0) {
      do {
        uVar40 = (ulonglong)(uVar43 >> 3);
        auVar91 = paddusb(*(undefined1 (*) [16])(param_3 + uVar45 * 2),auVar134);
        bVar3 = auVar91[0];
        bVar118 = (bVar118 < bVar3) * bVar3 | (bVar118 >= bVar3) * bVar118;
        bVar4 = auVar91[1];
        bVar119 = (bVar119 < bVar4) * bVar4 | (bVar119 >= bVar4) * bVar119;
        bVar5 = auVar91[2];
        bVar120 = (bVar120 < bVar5) * bVar5 | (bVar120 >= bVar5) * bVar120;
        bVar6 = auVar91[3];
        bVar121 = (bVar121 < bVar6) * bVar6 | (bVar121 >= bVar6) * bVar121;
        bVar7 = auVar91[4];
        bVar122 = (bVar122 < bVar7) * bVar7 | (bVar122 >= bVar7) * bVar122;
        bVar8 = auVar91[5];
        bVar123 = (bVar123 < bVar8) * bVar8 | (bVar123 >= bVar8) * bVar123;
        bVar9 = auVar91[6];
        bVar124 = (bVar124 < bVar9) * bVar9 | (bVar124 >= bVar9) * bVar124;
        bVar10 = auVar91[7];
        bVar125 = (bVar125 < bVar10) * bVar10 | (bVar125 >= bVar10) * bVar125;
        bVar11 = auVar91[8];
        bVar126 = (bVar126 < bVar11) * bVar11 | (bVar126 >= bVar11) * bVar126;
        bVar12 = auVar91[9];
        bVar127 = (bVar127 < bVar12) * bVar12 | (bVar127 >= bVar12) * bVar127;
        bVar13 = auVar91[10];
        bVar128 = (bVar128 < bVar13) * bVar13 | (bVar128 >= bVar13) * bVar128;
        bVar14 = auVar91[0xb];
        bVar129 = (bVar129 < bVar14) * bVar14 | (bVar129 >= bVar14) * bVar129;
        bVar15 = auVar91[0xc];
        bVar130 = (bVar130 < bVar15) * bVar15 | (bVar130 >= bVar15) * bVar130;
        bVar16 = auVar91[0xd];
        bVar131 = (bVar131 < bVar16) * bVar16 | (bVar131 >= bVar16) * bVar131;
        bVar17 = auVar91[0xe];
        bVar132 = (bVar132 < bVar17) * bVar17 | (bVar132 >= bVar17) * bVar132;
        bVar18 = auVar91[0xf];
        bVar133 = (bVar133 < bVar18) * bVar18 | (bVar133 >= bVar18) * bVar133;
        auVar91[0] = (bVar24 < bVar3) * bVar24 | (bVar24 >= bVar3) * bVar3;
        auVar91[1] = (bVar25 < bVar4) * bVar25 | (bVar25 >= bVar4) * bVar4;
        auVar91[2] = (bVar26 < bVar5) * bVar26 | (bVar26 >= bVar5) * bVar5;
        auVar91[3] = (bVar27 < bVar6) * bVar27 | (bVar27 >= bVar6) * bVar6;
        auVar91[4] = (bVar28 < bVar7) * bVar28 | (bVar28 >= bVar7) * bVar7;
        auVar91[5] = (bVar29 < bVar8) * bVar29 | (bVar29 >= bVar8) * bVar8;
        auVar91[6] = (bVar30 < bVar9) * bVar30 | (bVar30 >= bVar9) * bVar9;
        auVar91[7] = (bVar31 < bVar10) * bVar31 | (bVar31 >= bVar10) * bVar10;
        auVar91[8] = (bVar32 < bVar11) * bVar32 | (bVar32 >= bVar11) * bVar11;
        auVar91[9] = (bVar33 < bVar12) * bVar33 | (bVar33 >= bVar12) * bVar12;
        auVar91[10] = (bVar34 < bVar13) * bVar34 | (bVar34 >= bVar13) * bVar13;
        auVar91[0xb] = (bVar35 < bVar14) * bVar35 | (bVar35 >= bVar14) * bVar14;
        auVar91[0xc] = (bVar36 < bVar15) * bVar36 | (bVar36 >= bVar15) * bVar15;
        auVar91[0xd] = (bVar37 < bVar16) * bVar37 | (bVar37 >= bVar16) * bVar16;
        auVar91[0xe] = (bVar38 < bVar17) * bVar38 | (bVar38 >= bVar17) * bVar17;
        auVar91[0xf] = (bVar39 < bVar18) * bVar39 | (bVar39 >= bVar18) * bVar18;
        pauVar41 = (undefined1 (*) [16])(puVar2 + uVar40);
        if (uVar44 <= uVar40) {
          if (uVar42 <= uVar40) {
            return false;
          }
          pauVar41 = (undefined1 (*) [16])((longlong)local_d8 + (uVar40 - uVar44));
        }
        uVar19 = CONCAT13(in_XMM3_Bd,CONCAT12(in_XMM3_Bc,CONCAT11(in_XMM3_Bb,in_XMM3_Ba))) ^
                 CONCAT13(in_XMM3_Bd,CONCAT12(in_XMM3_Bc,CONCAT11(in_XMM3_Bb,in_XMM3_Ba)));
        in_XMM3_Ba = (undefined1)uVar19;
        in_XMM3_Bb = (undefined1)(uVar19 >> 8);
        in_XMM3_Bc = (undefined1)(uVar19 >> 0x10);
        in_XMM3_Bd = (undefined1)(uVar19 >> 0x18);
        uVar20 = CONCAT13(in_XMM3_Bh,CONCAT12(in_XMM3_Bg,CONCAT11(in_XMM3_Bf,in_XMM3_Be))) ^
                 CONCAT13(in_XMM3_Bh,CONCAT12(in_XMM3_Bg,CONCAT11(in_XMM3_Bf,in_XMM3_Be)));
        in_XMM3_Be = (undefined1)uVar20;
        in_XMM3_Bf = (undefined1)(uVar20 >> 8);
        in_XMM3_Bg = (undefined1)(uVar20 >> 0x10);
        in_XMM3_Bh = (undefined1)(uVar20 >> 0x18);
        uVar20 = CONCAT13(in_XMM3_Bl,CONCAT12(in_XMM3_Bk,CONCAT11(in_XMM3_Bj,in_XMM3_Bi))) ^
                 CONCAT13(in_XMM3_Bl,CONCAT12(in_XMM3_Bk,CONCAT11(in_XMM3_Bj,in_XMM3_Bi)));
        in_XMM3_Bi = (undefined1)uVar20;
        in_XMM3_Bj = (undefined1)(uVar20 >> 8);
        in_XMM3_Bk = (undefined1)(uVar20 >> 0x10);
        in_XMM3_Bl = (undefined1)(uVar20 >> 0x18);
        uVar20 = CONCAT13(in_XMM3_Bp,CONCAT12(in_XMM3_Bo,CONCAT11(in_XMM3_Bn,in_XMM3_Bm))) ^
                 CONCAT13(in_XMM3_Bp,CONCAT12(in_XMM3_Bo,CONCAT11(in_XMM3_Bn,in_XMM3_Bm)));
        in_XMM3_Bm = (undefined1)uVar20;
        in_XMM3_Bn = (undefined1)(uVar20 >> 8);
        in_XMM3_Bo = (undefined1)(uVar20 >> 0x10);
        in_XMM3_Bp = (undefined1)(uVar20 >> 0x18);
        cVar55 = auVar91[0] + auVar91[1];
        cVar74 = auVar91[0] + auVar91[1] + auVar91[2];
        cVar76 = cVar55 + auVar91[2] + auVar91[3];
        cVar77 = auVar91[1] + auVar91[2] + auVar91[3] + auVar91[4];
        cVar79 = auVar91[2] + auVar91[3] + auVar91[4] + auVar91[5];
        cVar80 = auVar91[3] + auVar91[4] + auVar91[5] + auVar91[6];
        cVar82 = auVar91[4] + auVar91[5] + auVar91[6] + auVar91[7];
        cVar83 = auVar91[5] + auVar91[6] + auVar91[7] + auVar91[8];
        cVar85 = auVar91[6] + auVar91[7] + auVar91[8] + auVar91[9];
        cVar86 = auVar91[7] + auVar91[8] + auVar91[9] + auVar91[10];
        cVar88 = auVar91[8] + auVar91[9] + auVar91[10] + auVar91[0xb];
        cVar56 = auVar91[0] + cVar77;
        cVar57 = cVar55 + cVar79;
        cVar58 = cVar74 + cVar80;
        cVar59 = cVar76 + cVar82;
        auVar65[4] = in_XMM3_Be;
        auVar65._0_4_ = uVar19;
        auVar65[5] = in_XMM3_Bf;
        auVar65[6] = in_XMM3_Bg;
        auVar65[7] = in_XMM3_Bh;
        auVar65[8] = in_XMM3_Bi;
        auVar65[9] = in_XMM3_Bj;
        auVar65[10] = in_XMM3_Bk;
        auVar65[0xb] = in_XMM3_Bl;
        auVar65[0xc] = in_XMM3_Bm;
        auVar65[0xd] = in_XMM3_Bn;
        auVar65[0xe] = in_XMM3_Bo;
        auVar65[0xf] = in_XMM3_Bp;
        auVar65 = pshufb(ZEXT416(uVar43 & 7),auVar65);
        auVar103 = pshufb(___xmm_ffffffffffffffff7f3f1f0f07030100,auVar91);
        uVar75 = CONCAT11(auVar65[1] + auVar91[0],auVar65[0]);
        uVar60 = CONCAT13(auVar65[3] + cVar74,CONCAT12(auVar65[2] + cVar55,uVar75));
        uVar61 = CONCAT15(auVar65[5] + cVar56,CONCAT14(auVar65[4] + cVar76,uVar60));
        uVar62 = CONCAT17(auVar65[7] + cVar58,CONCAT16(auVar65[6] + cVar57,uVar61));
        auVar63._0_10_ =
             CONCAT19(auVar65[9] + auVar91[0] + cVar77 + cVar83,CONCAT18(auVar65[8] + cVar59,uVar62)
                     );
        auVar63[10] = auVar65[10] + cVar55 + cVar79 + cVar85;
        auVar63[0xb] = auVar65[0xb] + cVar74 + cVar80 + cVar86;
        auVar64[0xc] = auVar65[0xc] + cVar76 + cVar82 + cVar88;
        auVar64._0_12_ = auVar63;
        auVar64[0xd] = auVar65[0xd] +
                       cVar56 + cVar83 + auVar91[9] + auVar91[10] + auVar91[0xb] + auVar91[0xc];
        auVar46[0xe] = auVar65[0xe] +
                       cVar57 + cVar85 + auVar91[10] + auVar91[0xb] + auVar91[0xc] + auVar91[0xd];
        auVar46._0_14_ = auVar64;
        auVar46[0xf] = auVar65[0xf] +
                       cVar58 + cVar86 + auVar91[0xb] + auVar91[0xc] + auVar91[0xd] + auVar91[0xe];
        auVar106._0_2_ = uVar75 >> 3;
        auVar106._2_2_ = (ushort)((uint)uVar60 >> 0x13);
        auVar106._4_2_ = (ushort)((uint6)uVar61 >> 0x23);
        auVar106._6_2_ = (ushort)((ulonglong)uVar62 >> 0x33);
        auVar106._8_2_ = (ushort)((unkuint10)auVar63._0_10_ >> 0x43);
        auVar106._10_2_ = auVar63._10_2_ >> 3;
        auVar106._12_2_ = auVar64._12_2_ >> 3;
        auVar106._14_2_ = auVar46._14_2_ >> 3;
        auVar117 = pshufb(*pauVar41,auVar106 & ___xmm_1f1f1f1f1f1f1f1f1f1f1f1f1f1f1f1f);
        auVar115 = pshufb(*(undefined1 (*) [16])(*pauVar41 + 1),
                          auVar106 & ___xmm_1f1f1f1f1f1f1f1f1f1f1f1f1f1f1f1f);
        auVar46 = ___xmm_07070707070707070707070707070707 & auVar46;
        auVar47[0] = auVar46[0] + auVar91[0];
        auVar47[1] = auVar46[1] + auVar91[1];
        auVar47[2] = auVar46[2] + auVar91[2];
        auVar47[3] = auVar46[3] + auVar91[3];
        auVar47[4] = auVar46[4] + auVar91[4];
        auVar47[5] = auVar46[5] + auVar91[5];
        auVar47[6] = auVar46[6] + auVar91[6];
        auVar47[7] = auVar46[7] + auVar91[7];
        auVar47[8] = auVar46[8] + auVar91[8];
        auVar47[9] = auVar46[9] + auVar91[9];
        auVar47[10] = auVar46[10] + auVar91[10];
        auVar47[0xb] = auVar46[0xb] + auVar91[0xb];
        auVar47[0xc] = auVar46[0xc] + auVar91[0xc];
        auVar47[0xd] = auVar46[0xd] + auVar91[0xd];
        auVar47[0xe] = auVar46[0xe] + auVar91[0xe];
        auVar47[0xf] = auVar46[0xf] + auVar91[0xf];
        auVar106 = pshufb(___xmm_00000000000000008040201008040201,auVar47);
        auVar65 = pshufb(___xmm_80402010080402010000000000000000,auVar47);
        auVar99._0_14_ = auVar103._0_14_;
        auVar99[0xe] = auVar103[7];
        auVar99[0xf] = in_XMM3_Bh;
        auVar98._14_2_ = auVar99._14_2_;
        auVar98._0_13_ = auVar103._0_13_;
        auVar98[0xd] = in_XMM3_Bg;
        auVar97._13_3_ = auVar98._13_3_;
        auVar97._0_12_ = auVar103._0_12_;
        auVar97[0xc] = auVar103[6];
        auVar96._12_4_ = auVar97._12_4_;
        auVar96._0_11_ = auVar103._0_11_;
        auVar96[0xb] = in_XMM3_Bf;
        auVar95._11_5_ = auVar96._11_5_;
        auVar95._0_10_ = auVar103._0_10_;
        auVar95[10] = auVar103[5];
        auVar94._10_6_ = auVar95._10_6_;
        auVar94._0_9_ = auVar103._0_9_;
        auVar94[9] = in_XMM3_Be;
        auVar93._9_7_ = auVar94._9_7_;
        auVar93._0_8_ = auVar103._0_8_;
        auVar93[8] = auVar103[4];
        Var23 = CONCAT91(CONCAT81(auVar93._8_8_,in_XMM3_Bd),auVar103[3]);
        auVar22._2_10_ = Var23;
        auVar22[1] = in_XMM3_Bc;
        auVar22[0] = auVar103[2];
        auVar21._2_12_ = auVar22;
        auVar21[1] = in_XMM3_Bb;
        auVar21[0] = auVar103[1];
        auVar92._0_2_ = CONCAT11(in_XMM3_Ba,auVar103[0]);
        auVar92._2_14_ = auVar21;
        auVar73._0_14_ = auVar106._0_14_;
        auVar73[0xe] = auVar106[7];
        auVar73[0xf] = auVar65[7];
        auVar72._14_2_ = auVar73._14_2_;
        auVar72._0_13_ = auVar106._0_13_;
        auVar72[0xd] = auVar65[6];
        auVar71._13_3_ = auVar72._13_3_;
        auVar71._0_12_ = auVar106._0_12_;
        auVar71[0xc] = auVar106[6];
        auVar70._12_4_ = auVar71._12_4_;
        auVar70._0_11_ = auVar106._0_11_;
        auVar70[0xb] = auVar65[5];
        auVar69._11_5_ = auVar70._11_5_;
        auVar69._0_10_ = auVar106._0_10_;
        auVar69[10] = auVar106[5];
        auVar68._10_6_ = auVar69._10_6_;
        auVar68._0_9_ = auVar106._0_9_;
        auVar68[9] = auVar65[4];
        auVar67._9_7_ = auVar68._9_7_;
        auVar67._0_8_ = auVar106._0_8_;
        auVar67[8] = auVar106[4];
        auVar66._8_8_ = auVar67._8_8_;
        auVar66[7] = auVar65[3];
        auVar66[6] = auVar106[3];
        auVar66[5] = auVar65[2];
        auVar66[4] = auVar106[2];
        auVar66[3] = auVar65[1];
        auVar66[2] = auVar106[1];
        auVar66[0] = auVar106[0];
        auVar66[1] = auVar65[0];
        auVar107[1] = auVar65[8];
        auVar107[0] = auVar106[8];
        auVar107[2] = auVar106[9];
        auVar107[3] = auVar65[9];
        auVar107[4] = auVar106[10];
        auVar107[5] = auVar65[10];
        auVar107[6] = auVar106[0xb];
        auVar107[7] = auVar65[0xb];
        auVar107[8] = auVar106[0xc];
        auVar107[9] = auVar65[0xc];
        auVar107[10] = auVar106[0xd];
        auVar107[0xb] = auVar65[0xd];
        auVar107[0xc] = auVar106[0xe];
        auVar107[0xd] = auVar65[0xe];
        auVar107[0xe] = auVar106[0xf];
        auVar107[0xf] = auVar65[0xf];
        sVar100 = CONCAT11(in_XMM3_Bi,auVar103[8]);
        uVar60 = CONCAT13(in_XMM3_Bj,CONCAT12(auVar103[9],sVar100));
        uVar61 = CONCAT15(in_XMM3_Bk,CONCAT14(auVar103[10],uVar60));
        uVar62 = CONCAT17(in_XMM3_Bl,CONCAT16(auVar103[0xb],uVar61));
        auVar101._0_10_ = CONCAT19(in_XMM3_Bm,CONCAT18(auVar103[0xc],uVar62));
        auVar101[10] = auVar103[0xd];
        auVar101[0xb] = in_XMM3_Bn;
        auVar102[0xc] = auVar103[0xe];
        auVar102._0_12_ = auVar101;
        auVar102[0xd] = in_XMM3_Bo;
        auVar104[0xe] = auVar103[0xf];
        auVar104._0_14_ = auVar102;
        auVar104[0xf] = in_XMM3_Bp;
        auVar54._0_14_ = auVar115._0_14_;
        auVar54[0xe] = auVar115[7];
        auVar54[0xf] = auVar117[7];
        auVar53._14_2_ = auVar54._14_2_;
        auVar53._0_13_ = auVar115._0_13_;
        auVar53[0xd] = auVar117[6];
        auVar52._13_3_ = auVar53._13_3_;
        auVar52._0_12_ = auVar115._0_12_;
        auVar52[0xc] = auVar115[6];
        auVar51._12_4_ = auVar52._12_4_;
        auVar51._0_11_ = auVar115._0_11_;
        auVar51[0xb] = auVar117[5];
        auVar50._11_5_ = auVar51._11_5_;
        auVar50._0_10_ = auVar115._0_10_;
        auVar50[10] = auVar115[5];
        auVar49._10_6_ = auVar50._10_6_;
        auVar49._0_9_ = auVar115._0_9_;
        auVar49[9] = auVar117[4];
        auVar48._9_7_ = auVar49._9_7_;
        auVar48._0_8_ = auVar115._0_8_;
        auVar48[8] = auVar115[4];
        auVar103._8_8_ = auVar48._8_8_;
        auVar103[7] = auVar117[3];
        auVar103[6] = auVar115[3];
        auVar103[5] = auVar117[2];
        auVar103[4] = auVar115[2];
        auVar103[3] = auVar117[1];
        auVar103[2] = auVar115[1];
        auVar103[0] = auVar115[0];
        auVar103[1] = auVar117[0];
        auVar65 = pmulhuw(auVar66,auVar103);
        auVar116[1] = auVar117[8];
        auVar116[0] = auVar115[8];
        auVar116[2] = auVar115[9];
        auVar116[3] = auVar117[9];
        auVar116[4] = auVar115[10];
        auVar116[5] = auVar117[10];
        auVar116[6] = auVar115[0xb];
        auVar116[7] = auVar117[0xb];
        auVar116[8] = auVar115[0xc];
        auVar116[9] = auVar117[0xc];
        auVar116[10] = auVar115[0xd];
        auVar116[0xb] = auVar117[0xd];
        auVar116[0xc] = auVar115[0xe];
        auVar116[0xd] = auVar117[0xe];
        auVar116[0xe] = auVar115[0xf];
        auVar116[0xf] = auVar117[0xf];
        auVar106 = pmulhuw(auVar107,auVar116);
        uVar43 = uVar43 + (byte)(cVar59 + cVar88 + auVar91[0xc] + auVar91[0xd] +
                                                   auVar91[0xe] + auVar91[0xf]);
        auVar65 = auVar65 & auVar92;
        uVar75 = auVar65._2_2_ + auVar21._0_2_ + _UNK_150631da2;
        uVar78 = auVar65._4_2_ + auVar22._0_2_ + _UNK_150631da4;
        uVar81 = auVar65._6_2_ + (short)Var23 + _UNK_150631da6;
        uVar84 = auVar65._8_2_ + auVar93._8_2_ + _UNK_150631da8;
        uVar87 = auVar65._10_2_ + auVar95._10_2_ + _UNK_150631daa;
        uVar89 = auVar65._12_2_ + auVar97._12_2_ + _UNK_150631dac;
        uVar90 = auVar65._14_2_ + auVar98._14_2_ + _UNK_150631dae;
        auVar106 = auVar106 & auVar104;
        uVar105 = auVar106._0_2_ + sVar100 + ___xmm_00000001000000010000000100000001;
        uVar108 = auVar106._2_2_ + (short)((uint)uVar60 >> 0x10) + _UNK_150631da2;
        uVar109 = auVar106._4_2_ + (short)((uint6)uVar61 >> 0x20) + _UNK_150631da4;
        uVar110 = auVar106._6_2_ + (short)((ulonglong)uVar62 >> 0x30) + _UNK_150631da6;
        uVar111 = auVar106._8_2_ + (short)((unkuint10)auVar101._0_10_ >> 0x40) + _UNK_150631da8;
        uVar112 = auVar106._10_2_ + auVar101._10_2_ + _UNK_150631daa;
        uVar113 = auVar106._12_2_ + auVar102._12_2_ + _UNK_150631dac;
        uVar114 = auVar106._14_2_ + auVar104._14_2_ + _UNK_150631dae;
        puVar1 = param_1 + uVar45 * 2;
        *puVar1 = auVar65._0_2_ + auVar92._0_2_ + ___xmm_00000001000000010000000100000001;
        puVar1[1] = uVar75;
        puVar1[2] = uVar78;
        puVar1[3] = uVar81;
        puVar1[4] = uVar84;
        puVar1[5] = uVar87;
        puVar1[6] = uVar89;
        puVar1[7] = uVar90;
        puVar1 = param_1 + uVar45 * 2 + 8;
        *puVar1 = uVar105;
        puVar1[1] = uVar108;
        puVar1[2] = uVar109;
        puVar1[3] = uVar110;
        puVar1[4] = uVar111;
        puVar1[5] = uVar112;
        puVar1[6] = uVar113;
        puVar1[7] = uVar114;
        uVar45 = uVar45 + 8;
        param_3 = local_e8;
      } while (uVar45 < param_4);
    }
    auVar134[0] = -(bVar24 == bVar118);
    auVar134[1] = -(bVar25 == bVar119);
    auVar134[2] = -(bVar26 == bVar120);
    auVar134[3] = -(bVar27 == bVar121);
    auVar134[4] = -(bVar28 == bVar122);
    auVar134[5] = -(bVar29 == bVar123);
    auVar134[6] = -(bVar30 == bVar124);
    auVar134[7] = -(bVar31 == bVar125);
    auVar134[8] = -(bVar32 == bVar126);
    auVar134[9] = -(bVar33 == bVar127);
    auVar134[10] = -(bVar34 == bVar128);
    auVar134[0xb] = -(bVar35 == bVar129);
    auVar134[0xc] = -(bVar36 == bVar130);
    auVar134[0xd] = -(bVar37 == bVar131);
    auVar134[0xe] = -(bVar38 == bVar132);
    auVar134[0xf] = -(bVar39 == bVar133);
    if (((ushort)((ushort)(SUB161(auVar134 >> 7,0) & 1) |
                  (ushort)(SUB161(auVar134 >> 0xf,0) & 1) << 1 |
                  (ushort)(SUB161(auVar134 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar134 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar134 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar134 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar134 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar134 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar134 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar134 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar134 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar134 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar134 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar134 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar134 >> 0x77,0) & 1) << 0xe |
                 (ushort)(auVar134[0xf] >> 7) << 0xf) == 0xffff) &&
       (uVar43 = uVar43 - (-param_4 & 7), uVar43 + 7 >> 3 <= uVar42)) {
      param_2->ptr = param_2->ptr + (uVar43 >> 3);
      param_2->pos_in_byte = uVar43 & 7;
      return true;
    }
  }
  return false;
}

// simd_prefix_sum_u8 @ 14f3ddef0

/* WARNING: Removing unreachable block (ram,0x00014f3ddf1b) */
/* WARNING: Removing unreachable block (ram,0x00014f3ddf0e) */
/* WARNING: Removing unreachable block (ram,0x00014f3ddf01) */
/* WARNING: Removing unreachable block (ram,0x00014f3ddef4) */

__m128i * __cdecl oo2::simd_prefix_sum_u8(__m128i *__return_storage_ptr__,__m128i *param_1)

{
  __m128i *in_RAX;
  
  return in_RAX;
}

// subtract_sat @ 14f3ddf40

ulong64 __cdecl oo2::subtract_sat(ulong64 param_1,ulong64 param_2)

{
  ulong64 uVar1;
  
  uVar1 = 0;
  if (param_2 <= param_1) {
    uVar1 = param_1 - param_2;
  }
  return uVar1;
}


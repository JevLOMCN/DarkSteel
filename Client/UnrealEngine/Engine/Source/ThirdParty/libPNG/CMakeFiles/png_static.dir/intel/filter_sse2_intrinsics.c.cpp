// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libPNG
// Functions: 6

// png_read_filter_row_sub3_sse2 @ 140dd9d90

void __cdecl
png_read_filter_row_sub3_sse2(png_row_info_struct *param_1,uchar *param_2,uchar *param_3)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  undefined3 uVar4;
  ulonglong uVar5;
  uchar uVar6;
  uchar uVar7;
  char cVar8;
  char cVar9;
  uchar uVar10;
  
  uVar5 = param_1->rowbytes;
  if (uVar5 < 4) {
    uVar6 = '\0';
    uVar7 = '\0';
    uVar10 = '\0';
    if (uVar5 == 0) {
      return;
    }
  }
  else {
    uVar1 = uVar5 - 4;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar1;
    if ((SUB164(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 1 & 1) == 0) {
      uVar2 = *(undefined4 *)param_2;
      uVar6 = *param_2;
      uVar7 = param_2[1];
      uVar10 = param_2[2];
      *(short *)param_2 = (short)uVar2;
      param_2[2] = (uchar)((uint)uVar2 >> 0x10);
      param_2 = param_2 + 3;
      uVar5 = uVar5 - 3;
    }
    else {
      uVar6 = '\0';
      uVar7 = '\0';
      uVar10 = '\0';
    }
    if (2 < uVar1) {
      do {
        uVar2 = *(undefined4 *)param_2;
        cVar8 = (char)uVar2 + uVar6;
        cVar9 = (char)((uint)uVar2 >> 8) + uVar7;
        uVar10 = (char)((uint)uVar2 >> 0x10) + uVar10;
        *(ushort *)param_2 = CONCAT11(cVar9,cVar8);
        param_2[2] = uVar10;
        uVar2 = *(undefined4 *)(param_2 + 3);
        uVar6 = (char)uVar2 + cVar8;
        uVar7 = (char)((uint)uVar2 >> 8) + cVar9;
        uVar10 = (char)((uint)uVar2 >> 0x10) + uVar10;
        param_2[3] = uVar6;
        param_2[4] = uVar7;
        param_2[5] = uVar10;
        param_2 = param_2 + 6;
        uVar5 = uVar5 - 6;
      } while (3 < uVar5);
    }
  }
  uVar4 = *(undefined3 *)param_2;
  *(ushort *)param_2 = CONCAT11((char)((uint3)uVar4 >> 8) + uVar7,(char)uVar4 + uVar6);
  param_2[2] = (char)((uint3)uVar4 >> 0x10) + uVar10;
  return;
}

// png_read_filter_row_sub4_sse2 @ 140dd9e60

void __cdecl
png_read_filter_row_sub4_sse2(png_row_info_struct *param_1,uchar *param_2,uchar *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  
  uVar2 = param_1->rowbytes;
  uVar3 = uVar2 + 4;
  if (4 < uVar3) {
    uVar4 = '\0';
    uVar5 = '\0';
    uVar6 = '\0';
    uVar7 = '\0';
    if ((uVar2 - 1 & 4) == 0) {
      uVar4 = *param_2;
      uVar5 = param_2[1];
      uVar6 = param_2[2];
      uVar7 = param_2[3];
      param_2 = param_2 + 4;
      uVar3 = uVar2;
    }
    if (3 < uVar2 - 1) {
      do {
        uVar1 = *(undefined4 *)param_2;
        cVar8 = (char)uVar1 + uVar4;
        cVar9 = (char)((uint)uVar1 >> 8) + uVar5;
        cVar10 = (char)((uint)uVar1 >> 0x10) + uVar6;
        cVar11 = (char)((uint)uVar1 >> 0x18) + uVar7;
        *(uint *)param_2 = CONCAT13(cVar11,CONCAT12(cVar10,CONCAT11(cVar9,cVar8)));
        uVar1 = *(undefined4 *)(param_2 + 4);
        uVar4 = (char)uVar1 + cVar8;
        uVar5 = (char)((uint)uVar1 >> 8) + cVar9;
        uVar6 = (char)((uint)uVar1 >> 0x10) + cVar10;
        uVar7 = (char)((uint)uVar1 >> 0x18) + cVar11;
        param_2[4] = uVar4;
        param_2[5] = uVar5;
        param_2[6] = uVar6;
        param_2[7] = uVar7;
        param_2 = param_2 + 8;
        uVar3 = uVar3 - 8;
      } while (4 < uVar3);
    }
  }
  return;
}

// png_read_filter_row_avg3_sse2 @ 140dd9ed0

void __cdecl
png_read_filter_row_avg3_sse2(png_row_info_struct *param_1,uchar *param_2,uchar *param_3)

{
  undefined4 uVar1;
  undefined3 uVar2;
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
  ulonglong uVar18;
  char cVar19;
  byte bVar20;
  char cVar21;
  byte bVar22;
  char cVar23;
  byte bVar24;
  byte bVar25;
  char cVar26;
  byte bVar27;
  char cVar28;
  byte bVar29;
  char cVar30;
  byte bVar31;
  char cVar32;
  byte bVar33;
  char cVar34;
  byte bVar35;
  char cVar36;
  byte bVar37;
  char cVar38;
  byte bVar39;
  char cVar40;
  byte bVar41;
  char cVar42;
  byte bVar43;
  char cVar44;
  byte bVar45;
  char cVar46;
  byte bVar47;
  char cVar48;
  byte bVar49;
  char cVar50;
  byte bVar51;
  
  bVar17 = UNK_150b50e2f;
  bVar16 = UNK_150b50e2e;
  bVar15 = UNK_150b50e2d;
  bVar14 = UNK_150b50e2c;
  bVar13 = UNK_150b50e2b;
  bVar12 = UNK_150b50e2a;
  bVar11 = UNK_150b50e29;
  bVar10 = UNK_150b50e28;
  bVar9 = UNK_150b50e27;
  bVar8 = UNK_150b50e26;
  bVar7 = UNK_150b50e25;
  bVar6 = UNK_150b50e24;
  bVar5 = UNK_150b50e23;
  bVar4 = UNK_150b50e22;
  bVar3 = UNK_150b50e21;
  bVar25 = __xmm_01010101010101010101010101010101;
  uVar18 = param_1->rowbytes;
  if (uVar18 < 4) {
    bVar20 = 0;
    bVar22 = 0;
    bVar24 = 0;
    bVar27 = 0;
    bVar29 = 0;
    bVar31 = 0;
    bVar33 = 0;
    bVar35 = 0;
    bVar37 = 0;
    bVar39 = 0;
    bVar41 = 0;
    bVar43 = 0;
    bVar45 = 0;
    bVar47 = 0;
    bVar49 = 0;
    bVar51 = 0;
    if (uVar18 == 0) {
      return;
    }
  }
  else {
    bVar20 = 0;
    bVar22 = 0;
    bVar24 = 0;
    bVar27 = 0;
    bVar29 = 0;
    bVar31 = 0;
    bVar33 = 0;
    bVar35 = 0;
    bVar37 = 0;
    bVar39 = 0;
    bVar41 = 0;
    bVar43 = 0;
    bVar45 = 0;
    bVar47 = 0;
    bVar49 = 0;
    bVar51 = 0;
    do {
      uVar1 = *(undefined4 *)param_2;
      cVar19 = pavgb(bVar20,*param_3);
      cVar21 = pavgb(bVar22,param_3[1]);
      cVar23 = pavgb(bVar24,param_3[2]);
      cVar26 = pavgb(bVar27,param_3[3]);
      cVar28 = pavgb(bVar29,0);
      cVar30 = pavgb(bVar31,0);
      cVar32 = pavgb(bVar33,0);
      cVar34 = pavgb(bVar35,0);
      cVar36 = pavgb(bVar37,0);
      cVar38 = pavgb(bVar39,0);
      cVar40 = pavgb(bVar41,0);
      cVar42 = pavgb(bVar43,0);
      cVar44 = pavgb(bVar45,0);
      cVar46 = pavgb(bVar47,0);
      cVar48 = pavgb(bVar49,0);
      cVar50 = pavgb(bVar51,0);
      bVar29 = cVar28 - (bVar29 & bVar6);
      bVar31 = cVar30 - (bVar31 & bVar7);
      bVar33 = cVar32 - (bVar33 & bVar8);
      bVar35 = cVar34 - (bVar35 & bVar9);
      bVar37 = cVar36 - (bVar37 & bVar10);
      bVar39 = cVar38 - (bVar39 & bVar11);
      bVar41 = cVar40 - (bVar41 & bVar12);
      bVar43 = cVar42 - (bVar43 & bVar13);
      bVar45 = cVar44 - (bVar45 & bVar14);
      bVar47 = cVar46 - (bVar47 & bVar15);
      bVar49 = cVar48 - (bVar49 & bVar16);
      bVar51 = cVar50 - (bVar51 & bVar17);
      bVar20 = (cVar19 - ((bVar20 ^ *param_3) & bVar25)) + (char)uVar1;
      bVar22 = (cVar21 - ((bVar22 ^ param_3[1]) & bVar3)) + (char)((uint)uVar1 >> 8);
      bVar24 = (cVar23 - ((bVar24 ^ param_3[2]) & bVar4)) + (char)((uint)uVar1 >> 0x10);
      bVar27 = (cVar26 - ((bVar27 ^ param_3[3]) & bVar5)) + (char)((uint)uVar1 >> 0x18);
      *param_2 = bVar20;
      param_2[1] = bVar22;
      param_2[2] = bVar24;
      param_3 = param_3 + 3;
      param_2 = param_2 + 3;
      uVar18 = uVar18 - 3;
    } while (3 < uVar18);
  }
  uVar2 = *(undefined3 *)param_2;
  cVar19 = pavgb(bVar20,*param_3);
  cVar21 = pavgb(bVar22,param_3[1]);
  cVar23 = pavgb(bVar24,param_3[2]);
  pavgb(bVar27,0);
  pavgb(bVar29,0);
  pavgb(bVar31,0);
  pavgb(bVar33,0);
  pavgb(bVar35,0);
  pavgb(bVar37,0);
  pavgb(bVar39,0);
  pavgb(bVar41,0);
  pavgb(bVar43,0);
  pavgb(bVar45,0);
  pavgb(bVar47,0);
  pavgb(bVar49,0);
  pavgb(bVar51,0);
  bVar25 = (bVar24 ^ param_3[2]) & UNK_1531f38f2;
  *(ushort *)param_2 =
       CONCAT11((cVar21 + (char)((uint3)uVar2 >> 8)) - ((bVar22 ^ param_3[1]) & UNK_1531f38f1),
                (cVar19 + (char)uVar2) -
                ((bVar20 ^ *param_3) & __xmm_00000000000000000000000000010101));
  param_2[2] = (cVar23 + (char)((uint3)uVar2 >> 0x10)) - bVar25;
  return;
}

// png_read_filter_row_avg4_sse2 @ 140dd9f90

void __cdecl
png_read_filter_row_avg4_sse2(png_row_info_struct *param_1,uchar *param_2,uchar *param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
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
  ulonglong uVar19;
  longlong lVar20;
  char cVar21;
  byte bVar22;
  char cVar23;
  byte bVar24;
  char cVar25;
  byte bVar26;
  char cVar27;
  byte bVar28;
  char cVar29;
  byte bVar30;
  char cVar31;
  byte bVar32;
  char cVar33;
  byte bVar34;
  char cVar35;
  byte bVar36;
  char cVar37;
  byte bVar38;
  char cVar39;
  byte bVar40;
  char cVar41;
  byte bVar42;
  char cVar43;
  byte bVar44;
  char cVar45;
  byte bVar46;
  char cVar47;
  byte bVar48;
  char cVar49;
  byte bVar50;
  char cVar51;
  byte bVar52;
  
  bVar18 = UNK_150b50e2f;
  bVar17 = UNK_150b50e2e;
  bVar16 = UNK_150b50e2d;
  bVar15 = UNK_150b50e2c;
  bVar14 = UNK_150b50e2b;
  bVar13 = UNK_150b50e2a;
  bVar12 = UNK_150b50e29;
  bVar11 = UNK_150b50e28;
  bVar10 = UNK_150b50e27;
  bVar9 = UNK_150b50e26;
  bVar8 = UNK_150b50e25;
  bVar7 = UNK_150b50e24;
  bVar6 = UNK_150b50e23;
  bVar5 = UNK_150b50e22;
  bVar4 = UNK_150b50e21;
  bVar3 = __xmm_01010101010101010101010101010101;
  uVar19 = param_1->rowbytes + 4;
  if (4 < uVar19) {
    bVar22 = 0;
    bVar24 = 0;
    bVar26 = 0;
    bVar28 = 0;
    bVar30 = 0;
    bVar32 = 0;
    bVar34 = 0;
    bVar36 = 0;
    bVar38 = 0;
    bVar40 = 0;
    bVar42 = 0;
    bVar44 = 0;
    bVar46 = 0;
    bVar48 = 0;
    bVar50 = 0;
    bVar52 = 0;
    lVar20 = 0;
    do {
      pbVar1 = param_3 + lVar20;
      uVar2 = *(undefined4 *)(param_2 + lVar20);
      cVar21 = pavgb(bVar22,*pbVar1);
      cVar23 = pavgb(bVar24,pbVar1[1]);
      cVar25 = pavgb(bVar26,pbVar1[2]);
      cVar27 = pavgb(bVar28,pbVar1[3]);
      cVar29 = pavgb(bVar30,0);
      cVar31 = pavgb(bVar32,0);
      cVar33 = pavgb(bVar34,0);
      cVar35 = pavgb(bVar36,0);
      cVar37 = pavgb(bVar38,0);
      cVar39 = pavgb(bVar40,0);
      cVar41 = pavgb(bVar42,0);
      cVar43 = pavgb(bVar44,0);
      cVar45 = pavgb(bVar46,0);
      cVar47 = pavgb(bVar48,0);
      cVar49 = pavgb(bVar50,0);
      cVar51 = pavgb(bVar52,0);
      bVar30 = cVar29 - (bVar30 & bVar7);
      bVar32 = cVar31 - (bVar32 & bVar8);
      bVar34 = cVar33 - (bVar34 & bVar9);
      bVar36 = cVar35 - (bVar36 & bVar10);
      bVar38 = cVar37 - (bVar38 & bVar11);
      bVar40 = cVar39 - (bVar40 & bVar12);
      bVar42 = cVar41 - (bVar42 & bVar13);
      bVar44 = cVar43 - (bVar44 & bVar14);
      bVar46 = cVar45 - (bVar46 & bVar15);
      bVar48 = cVar47 - (bVar48 & bVar16);
      bVar50 = cVar49 - (bVar50 & bVar17);
      bVar52 = cVar51 - (bVar52 & bVar18);
      bVar22 = (cVar21 - ((bVar22 ^ *pbVar1) & bVar3)) + (char)uVar2;
      bVar24 = (cVar23 - ((bVar24 ^ pbVar1[1]) & bVar4)) + (char)((uint)uVar2 >> 8);
      bVar26 = (cVar25 - ((bVar26 ^ pbVar1[2]) & bVar5)) + (char)((uint)uVar2 >> 0x10);
      bVar28 = (cVar27 - ((bVar28 ^ pbVar1[3]) & bVar6)) + (char)((uint)uVar2 >> 0x18);
      pbVar1 = param_2 + lVar20;
      *pbVar1 = bVar22;
      pbVar1[1] = bVar24;
      pbVar1[2] = bVar26;
      pbVar1[3] = bVar28;
      uVar19 = uVar19 - 4;
      lVar20 = lVar20 + 4;
    } while (4 < uVar19);
  }
  return;
}

// png_read_filter_row_paeth3_sse2 @ 140dd9ff0

void __cdecl
png_read_filter_row_paeth3_sse2(png_row_info_struct *param_1,uchar *param_2,uchar *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined3 uVar6;
  undefined3 uVar7;
  undefined7 uVar8;
  undefined3 uVar9;
  uint7 uVar10;
  ulonglong uVar11;
  byte bVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  short sVar16;
  undefined1 auVar15 [16];
  undefined1 auVar17 [14];
  short sVar18;
  ushort uVar19;
  byte bVar22;
  short sVar23;
  ushort uVar24;
  byte bVar25;
  short sVar26;
  ushort uVar27;
  short sVar28;
  ushort uVar29;
  short sVar30;
  ushort uVar31;
  short sVar32;
  ushort uVar33;
  short sVar34;
  ushort uVar35;
  short sVar36;
  ushort uVar37;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  short sVar38;
  ushort uVar39;
  short sVar40;
  ushort uVar41;
  short sVar42;
  ushort uVar43;
  short sVar44;
  ushort uVar45;
  short sVar46;
  ushort uVar47;
  short sVar48;
  ushort uVar49;
  short sVar50;
  ushort uVar51;
  short sVar52;
  ushort uVar53;
  ushort uVar54;
  ushort uVar55;
  ushort uVar56;
  ushort uVar57;
  ushort uVar58;
  short sVar59;
  ushort uVar60;
  short sVar61;
  short sVar62;
  ushort uVar63;
  short sVar64;
  ushort uVar65;
  ushort uVar66;
  ushort uVar69;
  ushort uVar70;
  ushort uVar71;
  ushort uVar72;
  ushort uVar73;
  ushort uVar74;
  ushort uVar75;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  
  uVar11 = param_1->rowbytes;
  if (uVar11 < 4) {
    auVar15 = (undefined1  [16])0x0;
    auVar13 = (undefined1  [16])0x0;
    if (uVar11 == 0) {
      return;
    }
  }
  else {
    auVar13 = (undefined1  [16])0x0;
    auVar14 = (undefined1  [16])0x0;
    do {
      uVar1 = *(undefined4 *)param_3;
      bVar12 = (byte)((uint)uVar1 >> 0x18);
      uVar8 = CONCAT25((short)(((uint7)bVar12 << 0x30) >> 0x28),
                       CONCAT14((char)((uint)uVar1 >> 0x10),uVar1));
      uVar10 = (uint7)CONCAT41((int)(CONCAT34((int3)((uint7)uVar8 >> 0x20),uVar1) >> 0x18),
                               (char)((uint)uVar1 >> 8)) & 0xffffff00ff;
      auVar15 = ZEXT716(CONCAT52((int5)uVar10,(ushort)(byte)uVar1));
      uVar2 = *(undefined4 *)param_2;
      sVar18 = (ushort)(byte)uVar1 - auVar14._0_2_;
      sVar23 = (short)uVar10 - auVar14._2_2_;
      sVar26 = (short)((uint7)uVar8 >> 0x20) - auVar14._4_2_;
      sVar28 = (ushort)bVar12 - auVar14._6_2_;
      sVar61 = auVar14._8_2_;
      sVar30 = -sVar61;
      sVar59 = auVar14._10_2_;
      sVar32 = -sVar59;
      sVar62 = auVar14._12_2_;
      sVar34 = -sVar62;
      sVar64 = auVar14._14_2_;
      sVar36 = -sVar64;
      sVar38 = auVar13._0_2_ - auVar14._0_2_;
      sVar40 = auVar13._2_2_ - auVar14._2_2_;
      sVar42 = auVar13._4_2_ - auVar14._4_2_;
      sVar44 = auVar13._6_2_ - auVar14._6_2_;
      sVar46 = auVar13._8_2_ - sVar61;
      sVar48 = auVar13._10_2_ - sVar59;
      sVar50 = auVar13._12_2_ - sVar62;
      sVar52 = auVar13._14_2_ - sVar64;
      auVar17 = SUB1614((undefined1  [16])0x0,2);
      sVar3 = -sVar18;
      sVar4 = -sVar23;
      sVar5 = -sVar26;
      sVar16 = -sVar28;
      sVar59 = auVar17._8_2_ + sVar59;
      sVar62 = auVar17._10_2_ + sVar62;
      sVar64 = auVar17._12_2_ + sVar64;
      uVar54 = (ushort)(sVar3 < sVar18) * sVar18 | (ushort)(sVar3 >= sVar18) * sVar3;
      uVar55 = (ushort)(sVar4 < sVar23) * sVar23 | (ushort)(sVar4 >= sVar23) * sVar4;
      uVar56 = (ushort)(sVar5 < sVar26) * sVar26 | (ushort)(sVar5 >= sVar26) * sVar5;
      uVar57 = (ushort)(sVar16 < sVar28) * sVar28 | (ushort)(sVar16 >= sVar28) * sVar16;
      uVar58 = (ushort)(sVar61 < sVar30) * sVar30 | (ushort)(sVar61 >= sVar30) * sVar61;
      uVar60 = (ushort)(sVar59 < sVar32) * sVar32 | (ushort)(sVar59 >= sVar32) * sVar59;
      uVar63 = (ushort)(sVar62 < sVar34) * sVar34 | (ushort)(sVar62 >= sVar34) * sVar62;
      uVar65 = (ushort)(sVar64 < sVar36) * sVar36 | (ushort)(sVar64 >= sVar36) * sVar64;
      sVar18 = sVar18 + sVar38;
      sVar23 = sVar23 + sVar40;
      sVar26 = sVar26 + sVar42;
      sVar28 = sVar28 + sVar44;
      sVar30 = sVar30 + sVar46;
      sVar32 = sVar32 + sVar48;
      sVar34 = sVar34 + sVar50;
      sVar36 = sVar36 + sVar52;
      auVar17 = SUB1614((undefined1  [16])0x0,2);
      sVar3 = -sVar38;
      sVar4 = -sVar40;
      sVar5 = -sVar42;
      sVar16 = -sVar44;
      sVar61 = -sVar46;
      sVar59 = auVar17._8_2_ - sVar48;
      sVar62 = auVar17._10_2_ - sVar50;
      sVar64 = auVar17._12_2_ - sVar52;
      uVar66 = (ushort)(sVar3 < sVar38) * sVar38 | (ushort)(sVar3 >= sVar38) * sVar3;
      uVar69 = (ushort)(sVar4 < sVar40) * sVar40 | (ushort)(sVar4 >= sVar40) * sVar4;
      uVar70 = (ushort)(sVar5 < sVar42) * sVar42 | (ushort)(sVar5 >= sVar42) * sVar5;
      uVar71 = (ushort)(sVar16 < sVar44) * sVar44 | (ushort)(sVar16 >= sVar44) * sVar16;
      uVar72 = (ushort)(sVar61 < sVar46) * sVar46 | (ushort)(sVar61 >= sVar46) * sVar61;
      uVar73 = (ushort)(sVar59 < sVar48) * sVar48 | (ushort)(sVar59 >= sVar48) * sVar59;
      uVar74 = (ushort)(sVar62 < sVar50) * sVar50 | (ushort)(sVar62 >= sVar50) * sVar62;
      uVar75 = (ushort)(sVar64 < sVar52) * sVar52 | (ushort)(sVar64 >= sVar52) * sVar64;
      auVar17 = SUB1614((undefined1  [16])0x0,2);
      sVar3 = -sVar18;
      sVar4 = -sVar23;
      sVar5 = -sVar26;
      sVar16 = -sVar28;
      sVar61 = -sVar30;
      sVar59 = auVar17._8_2_ - sVar32;
      sVar62 = auVar17._10_2_ - sVar34;
      sVar64 = auVar17._12_2_ - sVar36;
      uVar39 = (ushort)(sVar3 < sVar18) * sVar18 | (ushort)(sVar3 >= sVar18) * sVar3;
      uVar41 = (ushort)(sVar4 < sVar23) * sVar23 | (ushort)(sVar4 >= sVar23) * sVar4;
      uVar43 = (ushort)(sVar5 < sVar26) * sVar26 | (ushort)(sVar5 >= sVar26) * sVar5;
      uVar45 = (ushort)(sVar16 < sVar28) * sVar28 | (ushort)(sVar16 >= sVar28) * sVar16;
      uVar47 = (ushort)(sVar61 < sVar30) * sVar30 | (ushort)(sVar61 >= sVar30) * sVar61;
      uVar49 = (ushort)(sVar59 < sVar32) * sVar32 | (ushort)(sVar59 >= sVar32) * sVar59;
      uVar51 = (ushort)(sVar62 < sVar34) * sVar34 | (ushort)(sVar62 >= sVar34) * sVar62;
      uVar53 = (ushort)(sVar64 < sVar36) * sVar36 | (ushort)(sVar64 >= sVar36) * sVar64;
      uVar19 = ((short)uVar66 < (short)uVar54) * uVar66 | ((short)uVar66 >= (short)uVar54) * uVar54;
      uVar24 = ((short)uVar69 < (short)uVar55) * uVar69 | ((short)uVar69 >= (short)uVar55) * uVar55;
      uVar27 = ((short)uVar70 < (short)uVar56) * uVar70 | ((short)uVar70 >= (short)uVar56) * uVar56;
      uVar29 = ((short)uVar71 < (short)uVar57) * uVar71 | ((short)uVar71 >= (short)uVar57) * uVar57;
      uVar31 = ((short)uVar72 < (short)uVar58) * uVar72 | ((short)uVar72 >= (short)uVar58) * uVar58;
      uVar33 = ((short)uVar73 < (short)uVar60) * uVar73 | ((short)uVar73 >= (short)uVar60) * uVar60;
      uVar35 = ((short)uVar74 < (short)uVar63) * uVar74 | ((short)uVar74 >= (short)uVar63) * uVar63;
      uVar37 = ((short)uVar75 < (short)uVar65) * uVar75 | ((short)uVar75 >= (short)uVar65) * uVar65;
      uVar19 = ((short)uVar39 < (short)uVar19) * uVar39 | ((short)uVar39 >= (short)uVar19) * uVar19;
      uVar24 = ((short)uVar41 < (short)uVar24) * uVar41 | ((short)uVar41 >= (short)uVar24) * uVar24;
      uVar27 = ((short)uVar43 < (short)uVar27) * uVar43 | ((short)uVar43 >= (short)uVar27) * uVar27;
      uVar29 = ((short)uVar45 < (short)uVar29) * uVar45 | ((short)uVar45 >= (short)uVar29) * uVar29;
      uVar31 = ((short)uVar47 < (short)uVar31) * uVar47 | ((short)uVar47 >= (short)uVar31) * uVar31;
      uVar33 = ((short)uVar49 < (short)uVar33) * uVar49 | ((short)uVar49 >= (short)uVar33) * uVar33;
      uVar35 = ((short)uVar51 < (short)uVar35) * uVar51 | ((short)uVar51 >= (short)uVar35) * uVar35;
      uVar37 = ((short)uVar53 < (short)uVar37) * uVar53 | ((short)uVar53 >= (short)uVar37) * uVar37;
      auVar67._0_2_ = -(ushort)(uVar66 == uVar19);
      auVar67._2_2_ = -(ushort)(uVar69 == uVar24);
      auVar67._4_2_ = -(ushort)(uVar70 == uVar27);
      auVar67._6_2_ = -(ushort)(uVar71 == uVar29);
      auVar67._8_2_ = -(ushort)(uVar72 == uVar31);
      auVar67._10_2_ = -(ushort)(uVar73 == uVar33);
      auVar67._12_2_ = -(ushort)(uVar74 == uVar35);
      auVar67._14_2_ = -(ushort)(uVar75 == uVar37);
      auVar20._0_2_ = -(ushort)(uVar19 == uVar54);
      auVar20._2_2_ = -(ushort)(uVar24 == uVar55);
      auVar20._4_2_ = -(ushort)(uVar27 == uVar56);
      auVar20._6_2_ = -(ushort)(uVar29 == uVar57);
      auVar20._8_2_ = -(ushort)(uVar31 == uVar58);
      auVar20._10_2_ = -(ushort)(uVar33 == uVar60);
      auVar20._12_2_ = -(ushort)(uVar35 == uVar63);
      auVar20._14_2_ = -(ushort)(uVar37 == uVar65);
      auVar14 = auVar13 & auVar20 | ~auVar20 & (~auVar67 & auVar14 | auVar15 & auVar67);
      bVar12 = auVar14[0] + (char)uVar2;
      auVar13._0_2_ = CONCAT11(0,bVar12);
      auVar13[2] = auVar14[2] + (char)((uint)uVar2 >> 8);
      auVar13[3] = 0;
      auVar13[4] = auVar14[4] + (char)((uint)uVar2 >> 0x10);
      auVar13[5] = 0;
      auVar13[6] = auVar14[6] + (char)((uint)uVar2 >> 0x18);
      auVar13[7] = 0;
      auVar13[8] = auVar14[8];
      auVar13[9] = auVar14[9];
      auVar13[10] = auVar14[10];
      auVar13[0xb] = auVar14[0xb];
      auVar13[0xc] = auVar14[0xc];
      auVar13[0xd] = auVar14[0xd];
      auVar13[0xe] = auVar14[0xe];
      auVar13[0xf] = auVar14[0xf];
      uVar19 = (ushort)auVar13[2];
      uVar24 = (ushort)auVar13[4];
      *(ushort *)param_2 =
           CONCAT11((uVar19 != 0) * (uVar19 < 0x100) * auVar13[2] - (0xff < uVar19),
                    (auVar13._0_2_ != 0) * (auVar13._0_2_ < 0x100) * bVar12 - (0xff < auVar13._0_2_)
                   );
      param_2[2] = (uVar24 != 0) * (uVar24 < 0x100) * auVar13[4] - (0xff < uVar24);
      param_3 = param_3 + 3;
      param_2 = param_2 + 3;
      uVar11 = uVar11 - 3;
      auVar14 = auVar15;
    } while (3 < uVar11);
  }
  uVar6 = *(undefined3 *)param_3;
  bVar12 = (byte)((uint3)uVar6 >> 0x10);
  uVar9 = CONCAT21((short)(((uint5)bVar12 << 0x20) >> 0x18),(char)((uint3)uVar6 >> 8));
  uVar7 = *(undefined3 *)param_2;
  sVar64 = (ushort)(byte)uVar6 - auVar15._0_2_;
  sVar18 = (short)uVar9 - auVar15._2_2_;
  sVar23 = (ushort)bVar12 - auVar15._4_2_;
  sVar16 = auVar15._8_2_;
  sVar30 = -sVar16;
  sVar61 = auVar15._10_2_;
  sVar32 = -sVar61;
  sVar59 = auVar15._12_2_;
  sVar34 = -sVar59;
  sVar62 = auVar15._14_2_;
  sVar36 = -sVar62;
  sVar26 = auVar13._0_2_ - auVar15._0_2_;
  sVar28 = auVar13._2_2_ - auVar15._2_2_;
  sVar38 = auVar13._4_2_ - auVar15._4_2_;
  sVar40 = auVar13._8_2_ - sVar16;
  sVar42 = auVar13._10_2_ - sVar61;
  sVar44 = auVar13._12_2_ - sVar59;
  sVar46 = auVar13._14_2_ - sVar62;
  auVar17 = SUB1614((undefined1  [16])0x0,2);
  sVar3 = -sVar64;
  sVar4 = -sVar18;
  sVar5 = -sVar23;
  sVar61 = auVar17._8_2_ + sVar61;
  sVar59 = auVar17._10_2_ + sVar59;
  sVar62 = auVar17._12_2_ + sVar62;
  uVar51 = (ushort)(sVar3 < sVar64) * sVar64 | (ushort)(sVar3 >= sVar64) * sVar3;
  uVar53 = (ushort)(sVar4 < sVar18) * sVar18 | (ushort)(sVar4 >= sVar18) * sVar4;
  uVar54 = (ushort)(sVar5 < sVar23) * sVar23 | (ushort)(sVar5 >= sVar23) * sVar5;
  uVar55 = (ushort)(sVar16 < sVar30) * sVar30 | (ushort)(sVar16 >= sVar30) * sVar16;
  uVar56 = (ushort)(sVar61 < sVar32) * sVar32 | (ushort)(sVar61 >= sVar32) * sVar61;
  uVar57 = (ushort)(sVar59 < sVar34) * sVar34 | (ushort)(sVar59 >= sVar34) * sVar59;
  uVar58 = (ushort)(sVar62 < sVar36) * sVar36 | (ushort)(sVar62 >= sVar36) * sVar62;
  sVar64 = sVar64 + sVar26;
  sVar18 = sVar18 + sVar28;
  sVar23 = sVar23 + sVar38;
  sVar30 = sVar30 + sVar40;
  sVar32 = sVar32 + sVar42;
  sVar34 = sVar34 + sVar44;
  sVar36 = sVar36 + sVar46;
  auVar17 = SUB1614((undefined1  [16])0x0,2);
  sVar3 = -sVar26;
  sVar4 = -sVar28;
  sVar5 = -sVar38;
  sVar16 = -sVar40;
  sVar61 = auVar17._8_2_ - sVar42;
  sVar59 = auVar17._10_2_ - sVar44;
  sVar62 = auVar17._12_2_ - sVar46;
  uVar60 = (ushort)(sVar3 < sVar26) * sVar26 | (ushort)(sVar3 >= sVar26) * sVar3;
  uVar63 = (ushort)(sVar4 < sVar28) * sVar28 | (ushort)(sVar4 >= sVar28) * sVar4;
  uVar65 = (ushort)(sVar5 < sVar38) * sVar38 | (ushort)(sVar5 >= sVar38) * sVar5;
  uVar66 = (ushort)(sVar16 < sVar40) * sVar40 | (ushort)(sVar16 >= sVar40) * sVar16;
  uVar69 = (ushort)(sVar61 < sVar42) * sVar42 | (ushort)(sVar61 >= sVar42) * sVar61;
  uVar70 = (ushort)(sVar59 < sVar44) * sVar44 | (ushort)(sVar59 >= sVar44) * sVar59;
  uVar71 = (ushort)(sVar62 < sVar46) * sVar46 | (ushort)(sVar62 >= sVar46) * sVar62;
  auVar17 = SUB1614((undefined1  [16])0x0,2);
  sVar3 = -sVar64;
  sVar4 = -sVar18;
  sVar5 = -sVar23;
  sVar16 = -sVar30;
  sVar61 = auVar17._8_2_ - sVar32;
  sVar59 = auVar17._10_2_ - sVar34;
  sVar62 = auVar17._12_2_ - sVar36;
  uVar19 = (ushort)(sVar3 < sVar64) * sVar64 | (ushort)(sVar3 >= sVar64) * sVar3;
  uVar24 = (ushort)(sVar4 < sVar18) * sVar18 | (ushort)(sVar4 >= sVar18) * sVar4;
  uVar27 = (ushort)(sVar5 < sVar23) * sVar23 | (ushort)(sVar5 >= sVar23) * sVar5;
  uVar29 = (ushort)(sVar16 < sVar30) * sVar30 | (ushort)(sVar16 >= sVar30) * sVar16;
  uVar31 = (ushort)(sVar61 < sVar32) * sVar32 | (ushort)(sVar61 >= sVar32) * sVar61;
  uVar33 = (ushort)(sVar59 < sVar34) * sVar34 | (ushort)(sVar59 >= sVar34) * sVar59;
  uVar35 = (ushort)(sVar62 < sVar36) * sVar36 | (ushort)(sVar62 >= sVar36) * sVar62;
  uVar37 = ((short)uVar60 < (short)uVar51) * uVar60 | ((short)uVar60 >= (short)uVar51) * uVar51;
  uVar39 = ((short)uVar63 < (short)uVar53) * uVar63 | ((short)uVar63 >= (short)uVar53) * uVar53;
  uVar41 = ((short)uVar65 < (short)uVar54) * uVar65 | ((short)uVar65 >= (short)uVar54) * uVar54;
  uVar43 = ((short)uVar66 < (short)uVar55) * uVar66 | ((short)uVar66 >= (short)uVar55) * uVar55;
  uVar45 = ((short)uVar69 < (short)uVar56) * uVar69 | ((short)uVar69 >= (short)uVar56) * uVar56;
  uVar47 = ((short)uVar70 < (short)uVar57) * uVar70 | ((short)uVar70 >= (short)uVar57) * uVar57;
  uVar49 = ((short)uVar71 < (short)uVar58) * uVar71 | ((short)uVar71 >= (short)uVar58) * uVar58;
  uVar19 = ((short)uVar19 < (short)uVar37) * uVar19 | ((short)uVar19 >= (short)uVar37) * uVar37;
  uVar24 = ((short)uVar24 < (short)uVar39) * uVar24 | ((short)uVar24 >= (short)uVar39) * uVar39;
  uVar27 = ((short)uVar27 < (short)uVar41) * uVar27 | ((short)uVar27 >= (short)uVar41) * uVar41;
  uVar29 = ((short)uVar29 < (short)uVar43) * uVar29 | ((short)uVar29 >= (short)uVar43) * uVar43;
  uVar31 = ((short)uVar31 < (short)uVar45) * uVar31 | ((short)uVar31 >= (short)uVar45) * uVar45;
  uVar33 = ((short)uVar33 < (short)uVar47) * uVar33 | ((short)uVar33 >= (short)uVar47) * uVar47;
  uVar35 = ((short)uVar35 < (short)uVar49) * uVar35 | ((short)uVar35 >= (short)uVar49) * uVar49;
  auVar17._0_2_ = -(ushort)(uVar60 == uVar19);
  auVar17._2_2_ = -(ushort)(uVar63 == uVar24);
  auVar17._4_2_ = -(ushort)(uVar65 == uVar27);
  auVar17._6_2_ = 0;
  auVar17._8_2_ = -(ushort)(uVar66 == uVar29);
  auVar17._10_2_ = -(ushort)(uVar69 == uVar31);
  auVar17._12_2_ = -(ushort)(uVar70 == uVar33);
  auVar68._14_2_ = -(ushort)(uVar71 == uVar35);
  auVar68._0_14_ = auVar17;
  auVar14._14_2_ = 0;
  auVar14._0_14_ = auVar17;
  auVar21._0_2_ = -(ushort)(uVar19 == uVar51);
  auVar21._2_2_ = -(ushort)(uVar24 == uVar53);
  auVar21._4_2_ = -(ushort)(uVar27 == uVar54);
  auVar21._6_2_ = 0;
  auVar21._8_2_ = -(ushort)(uVar29 == uVar55);
  auVar21._10_2_ = -(ushort)(uVar31 == uVar56);
  auVar21._12_2_ = -(ushort)(uVar33 == uVar57);
  auVar21._14_2_ = -(ushort)(uVar35 == uVar58);
  auVar13 = ~auVar21 & (~auVar68 & auVar15 | ZEXT516(CONCAT32(uVar9,(ushort)(byte)uVar6)) & auVar14)
            | auVar13 & auVar21;
  bVar12 = auVar13[0] + (char)uVar7;
  uVar27 = (ushort)bVar12;
  bVar22 = auVar13[2] + (char)((uint3)uVar7 >> 8);
  bVar25 = auVar13[4] + (char)((uint3)uVar7 >> 0x10);
  uVar19 = (ushort)bVar22;
  uVar24 = (ushort)bVar25;
  *(ushort *)param_2 =
       CONCAT11((uVar19 != 0) * (uVar19 < 0x100) * bVar22 - (0xff < uVar19),
                (uVar27 != 0) * (uVar27 < 0x100) * bVar12 - (0xff < uVar27));
  param_2[2] = (uVar24 != 0) * (uVar24 < 0x100) * bVar25 - (0xff < uVar24);
  return;
}

// png_read_filter_row_paeth4_sse2 @ 140dda1b0

void __cdecl
png_read_filter_row_paeth4_sse2(png_row_info_struct *param_1,uchar *param_2,uchar *param_3)

{
  undefined4 uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  undefined7 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  short sVar12;
  byte bVar13;
  short sVar14;
  ushort uVar15;
  short sVar18;
  ushort uVar19;
  short sVar20;
  ushort uVar21;
  short sVar22;
  ushort uVar23;
  short sVar24;
  ushort uVar25;
  short sVar26;
  ushort uVar27;
  short sVar28;
  ushort uVar29;
  short sVar30;
  ushort uVar31;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  short sVar32;
  ushort uVar33;
  short sVar34;
  ushort uVar35;
  short sVar37;
  ushort uVar38;
  short sVar39;
  ushort uVar40;
  short sVar41;
  ushort uVar42;
  short sVar43;
  ushort uVar44;
  short sVar45;
  ushort uVar46;
  short sVar47;
  undefined1 auVar36 [14];
  ushort uVar48;
  ushort uVar49;
  ushort uVar50;
  ushort uVar51;
  ushort uVar52;
  ushort uVar53;
  short sVar54;
  ushort uVar55;
  short sVar56;
  ushort uVar57;
  short sVar58;
  ushort uVar59;
  ushort uVar60;
  ushort uVar62;
  ushort uVar63;
  ushort uVar64;
  ushort uVar65;
  ushort uVar66;
  ushort uVar67;
  ushort uVar68;
  undefined1 auVar61 [16];
  
  uVar8 = param_1->rowbytes + 4;
  if (4 < uVar8) {
    lVar9 = 0;
    auVar10 = (undefined1  [16])0x0;
    auVar17 = (undefined1  [16])0x0;
    do {
      uVar1 = *(undefined4 *)(param_3 + lVar9);
      bVar13 = (byte)((uint)uVar1 >> 0x18);
      uVar6 = CONCAT25((short)(((uint7)bVar13 << 0x30) >> 0x28),
                       CONCAT14((char)((uint)uVar1 >> 0x10),uVar1));
      uVar15 = (ushort)uVar1;
      uVar7 = (ulonglong)
              CONCAT43((int)(CONCAT34((int3)((uint7)uVar6 >> 0x20),uVar1) >> 0x18),
                       CONCAT12((char)((uint)uVar1 >> 8),uVar15)) & 0xffffffff00ffffff;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = CONCAT62((int6)(uVar7 >> 0x10),uVar15) & 0xffffffffffff00ff;
      uVar1 = *(undefined4 *)(param_2 + lVar9);
      sVar14 = (uVar15 & 0xff) - auVar17._0_2_;
      sVar18 = (short)(uVar7 >> 0x10) - auVar17._2_2_;
      sVar20 = (short)((uint7)uVar6 >> 0x20) - auVar17._4_2_;
      sVar22 = (ushort)bVar13 - auVar17._6_2_;
      sVar12 = auVar17._8_2_;
      sVar24 = -sVar12;
      sVar54 = auVar17._10_2_;
      sVar26 = -sVar54;
      sVar56 = auVar17._12_2_;
      sVar28 = -sVar56;
      sVar58 = auVar17._14_2_;
      sVar30 = -sVar58;
      sVar32 = auVar10._0_2_ - auVar17._0_2_;
      sVar34 = auVar10._2_2_ - auVar17._2_2_;
      sVar37 = auVar10._4_2_ - auVar17._4_2_;
      sVar39 = auVar10._6_2_ - auVar17._6_2_;
      sVar41 = auVar10._8_2_ - sVar12;
      sVar43 = auVar10._10_2_ - sVar54;
      sVar45 = auVar10._12_2_ - sVar56;
      sVar47 = auVar10._14_2_ - sVar58;
      auVar36 = SUB1614((undefined1  [16])0x0,2);
      sVar2 = -sVar14;
      sVar3 = -sVar18;
      sVar4 = -sVar20;
      sVar5 = -sVar22;
      sVar54 = auVar36._8_2_ + sVar54;
      sVar56 = auVar36._10_2_ + sVar56;
      sVar58 = auVar36._12_2_ + sVar58;
      uVar49 = (ushort)(sVar2 < sVar14) * sVar14 | (ushort)(sVar2 >= sVar14) * sVar2;
      uVar50 = (ushort)(sVar3 < sVar18) * sVar18 | (ushort)(sVar3 >= sVar18) * sVar3;
      uVar51 = (ushort)(sVar4 < sVar20) * sVar20 | (ushort)(sVar4 >= sVar20) * sVar4;
      uVar52 = (ushort)(sVar5 < sVar22) * sVar22 | (ushort)(sVar5 >= sVar22) * sVar5;
      uVar53 = (ushort)(sVar12 < sVar24) * sVar24 | (ushort)(sVar12 >= sVar24) * sVar12;
      uVar55 = (ushort)(sVar54 < sVar26) * sVar26 | (ushort)(sVar54 >= sVar26) * sVar54;
      uVar57 = (ushort)(sVar56 < sVar28) * sVar28 | (ushort)(sVar56 >= sVar28) * sVar56;
      uVar59 = (ushort)(sVar58 < sVar30) * sVar30 | (ushort)(sVar58 >= sVar30) * sVar58;
      sVar14 = sVar14 + sVar32;
      sVar18 = sVar18 + sVar34;
      sVar20 = sVar20 + sVar37;
      sVar22 = sVar22 + sVar39;
      sVar24 = sVar24 + sVar41;
      sVar26 = sVar26 + sVar43;
      sVar28 = sVar28 + sVar45;
      sVar30 = sVar30 + sVar47;
      auVar36 = SUB1614((undefined1  [16])0x0,2);
      sVar2 = -sVar32;
      sVar3 = -sVar34;
      sVar4 = -sVar37;
      sVar5 = -sVar39;
      sVar12 = -sVar41;
      sVar54 = auVar36._8_2_ - sVar43;
      sVar56 = auVar36._10_2_ - sVar45;
      sVar58 = auVar36._12_2_ - sVar47;
      uVar60 = (ushort)(sVar2 < sVar32) * sVar32 | (ushort)(sVar2 >= sVar32) * sVar2;
      uVar62 = (ushort)(sVar3 < sVar34) * sVar34 | (ushort)(sVar3 >= sVar34) * sVar3;
      uVar63 = (ushort)(sVar4 < sVar37) * sVar37 | (ushort)(sVar4 >= sVar37) * sVar4;
      uVar64 = (ushort)(sVar5 < sVar39) * sVar39 | (ushort)(sVar5 >= sVar39) * sVar5;
      uVar65 = (ushort)(sVar12 < sVar41) * sVar41 | (ushort)(sVar12 >= sVar41) * sVar12;
      uVar66 = (ushort)(sVar54 < sVar43) * sVar43 | (ushort)(sVar54 >= sVar43) * sVar54;
      uVar67 = (ushort)(sVar56 < sVar45) * sVar45 | (ushort)(sVar56 >= sVar45) * sVar56;
      uVar68 = (ushort)(sVar58 < sVar47) * sVar47 | (ushort)(sVar58 >= sVar47) * sVar58;
      auVar36 = SUB1614((undefined1  [16])0x0,2);
      sVar2 = -sVar14;
      sVar3 = -sVar18;
      sVar4 = -sVar20;
      sVar5 = -sVar22;
      sVar12 = -sVar24;
      sVar54 = auVar36._8_2_ - sVar26;
      sVar56 = auVar36._10_2_ - sVar28;
      sVar58 = auVar36._12_2_ - sVar30;
      uVar33 = (ushort)(sVar2 < sVar14) * sVar14 | (ushort)(sVar2 >= sVar14) * sVar2;
      uVar35 = (ushort)(sVar3 < sVar18) * sVar18 | (ushort)(sVar3 >= sVar18) * sVar3;
      uVar38 = (ushort)(sVar4 < sVar20) * sVar20 | (ushort)(sVar4 >= sVar20) * sVar4;
      uVar40 = (ushort)(sVar5 < sVar22) * sVar22 | (ushort)(sVar5 >= sVar22) * sVar5;
      uVar42 = (ushort)(sVar12 < sVar24) * sVar24 | (ushort)(sVar12 >= sVar24) * sVar12;
      uVar44 = (ushort)(sVar54 < sVar26) * sVar26 | (ushort)(sVar54 >= sVar26) * sVar54;
      uVar46 = (ushort)(sVar56 < sVar28) * sVar28 | (ushort)(sVar56 >= sVar28) * sVar56;
      uVar48 = (ushort)(sVar58 < sVar30) * sVar30 | (ushort)(sVar58 >= sVar30) * sVar58;
      uVar15 = ((short)uVar60 < (short)uVar49) * uVar60 | ((short)uVar60 >= (short)uVar49) * uVar49;
      uVar19 = ((short)uVar62 < (short)uVar50) * uVar62 | ((short)uVar62 >= (short)uVar50) * uVar50;
      uVar21 = ((short)uVar63 < (short)uVar51) * uVar63 | ((short)uVar63 >= (short)uVar51) * uVar51;
      uVar23 = ((short)uVar64 < (short)uVar52) * uVar64 | ((short)uVar64 >= (short)uVar52) * uVar52;
      uVar25 = ((short)uVar65 < (short)uVar53) * uVar65 | ((short)uVar65 >= (short)uVar53) * uVar53;
      uVar27 = ((short)uVar66 < (short)uVar55) * uVar66 | ((short)uVar66 >= (short)uVar55) * uVar55;
      uVar29 = ((short)uVar67 < (short)uVar57) * uVar67 | ((short)uVar67 >= (short)uVar57) * uVar57;
      uVar31 = ((short)uVar68 < (short)uVar59) * uVar68 | ((short)uVar68 >= (short)uVar59) * uVar59;
      uVar15 = ((short)uVar33 < (short)uVar15) * uVar33 | ((short)uVar33 >= (short)uVar15) * uVar15;
      uVar19 = ((short)uVar35 < (short)uVar19) * uVar35 | ((short)uVar35 >= (short)uVar19) * uVar19;
      uVar21 = ((short)uVar38 < (short)uVar21) * uVar38 | ((short)uVar38 >= (short)uVar21) * uVar21;
      uVar23 = ((short)uVar40 < (short)uVar23) * uVar40 | ((short)uVar40 >= (short)uVar23) * uVar23;
      uVar25 = ((short)uVar42 < (short)uVar25) * uVar42 | ((short)uVar42 >= (short)uVar25) * uVar25;
      uVar27 = ((short)uVar44 < (short)uVar27) * uVar44 | ((short)uVar44 >= (short)uVar27) * uVar27;
      uVar29 = ((short)uVar46 < (short)uVar29) * uVar46 | ((short)uVar46 >= (short)uVar29) * uVar29;
      uVar31 = ((short)uVar48 < (short)uVar31) * uVar48 | ((short)uVar48 >= (short)uVar31) * uVar31;
      auVar61._0_2_ = -(ushort)(uVar60 == uVar15);
      auVar61._2_2_ = -(ushort)(uVar62 == uVar19);
      auVar61._4_2_ = -(ushort)(uVar63 == uVar21);
      auVar61._6_2_ = -(ushort)(uVar64 == uVar23);
      auVar61._8_2_ = -(ushort)(uVar65 == uVar25);
      auVar61._10_2_ = -(ushort)(uVar66 == uVar27);
      auVar61._12_2_ = -(ushort)(uVar67 == uVar29);
      auVar61._14_2_ = -(ushort)(uVar68 == uVar31);
      auVar16._0_2_ = -(ushort)(uVar15 == uVar49);
      auVar16._2_2_ = -(ushort)(uVar19 == uVar50);
      auVar16._4_2_ = -(ushort)(uVar21 == uVar51);
      auVar16._6_2_ = -(ushort)(uVar23 == uVar52);
      auVar16._8_2_ = -(ushort)(uVar25 == uVar53);
      auVar16._10_2_ = -(ushort)(uVar27 == uVar55);
      auVar16._12_2_ = -(ushort)(uVar29 == uVar57);
      auVar16._14_2_ = -(ushort)(uVar31 == uVar59);
      auVar17 = ~auVar16 & (~auVar61 & auVar17 | auVar11 & auVar61) | auVar10 & auVar16;
      bVar13 = auVar17[0] + (char)uVar1;
      auVar10._0_2_ = CONCAT11(0,bVar13);
      auVar10[2] = auVar17[2] + (char)((uint)uVar1 >> 8);
      auVar10[3] = 0;
      auVar10[4] = auVar17[4] + (char)((uint)uVar1 >> 0x10);
      auVar10[5] = 0;
      auVar10[6] = auVar17[6] + (char)((uint)uVar1 >> 0x18);
      auVar10[7] = 0;
      auVar10[8] = auVar17[8];
      auVar10[9] = auVar17[9];
      auVar10[10] = auVar17[10];
      auVar10[0xb] = auVar17[0xb];
      auVar10[0xc] = auVar17[0xc];
      auVar10[0xd] = auVar17[0xd];
      auVar10[0xe] = auVar17[0xe];
      auVar10[0xf] = auVar17[0xf];
      uVar15 = (ushort)auVar10[2];
      uVar19 = (ushort)auVar10[4];
      uVar21 = (ushort)auVar10[6];
      *(uint *)(param_2 + lVar9) =
           CONCAT13((uVar21 != 0) * (uVar21 < 0x100) * auVar10[6] - (0xff < uVar21),
                    CONCAT12((uVar19 != 0) * (uVar19 < 0x100) * auVar10[4] - (0xff < uVar19),
                             CONCAT11((uVar15 != 0) * (uVar15 < 0x100) * auVar10[2] -
                                      (0xff < uVar15),
                                      (auVar10._0_2_ != 0) * (auVar10._0_2_ < 0x100) * bVar13 -
                                      (0xff < auVar10._0_2_))));
      uVar8 = uVar8 - 4;
      lVar9 = lVar9 + 4;
      auVar17 = auVar11;
    } while (4 < uVar8);
  }
  return;
}


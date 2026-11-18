// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 3

// U8_check @ 14f3d8a10

uchar __cdecl oo2::U8_check(int param_1)

{
  return (uchar)param_1;
}

// newlz_multiarrays_trellis_core_sse4 @ 14f3d8a20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
oo2::newlz_multiarrays_trellis_core_sse4
          (ulong64 *param_1,uchar *param_2,uchar *param_3,uchar *param_4,uchar *param_5,
          ushort *param_6,ushort *param_7,int param_8,int param_9,ushort param_10,ushort param_11)

{
  ushort *puVar1;
  short *psVar2;
  byte bVar3;
  int iVar4;
  ulong64 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 (*pauVar8) [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int iVar12;
  undefined1 in_XMM1 [16];
  undefined1 auVar14 [16];
  short sVar15;
  short sVar16;
  short sVar19;
  short sVar21;
  short sVar23;
  short sVar25;
  short sVar27;
  short sVar29;
  short sVar31;
  undefined1 auVar17 [16];
  short sVar20;
  short sVar22;
  short sVar24;
  short sVar26;
  short sVar28;
  short sVar30;
  short sVar32;
  undefined1 auVar18 [16];
  int iVar33;
  undefined1 auVar34 [16];
  int iVar35;
  short sVar36;
  short sVar37;
  short sVar38;
  short sVar39;
  short sVar40;
  short sVar41;
  short sVar42;
  short sVar43;
  undefined1 auVar13 [12];
  
  auVar9 = ___xmm_03020302030203020302030203020302;
  auVar11 = ___xmm_01000100010001000100010001000100;
  sVar31 = _UNK_15071d21e;
  sVar29 = _UNK_15071d21c;
  sVar27 = _UNK_15071d21a;
  sVar25 = _UNK_15071d218;
  sVar23 = _UNK_15071d216;
  sVar21 = _UNK_15071d214;
  sVar19 = _UNK_15071d212;
  sVar15 = ___xmm_00000000000000000000000000000008;
  auVar17 = ___xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar14._0_4_ = CONCAT22(param_10,param_10);
  auVar14._4_4_ = auVar14._0_4_;
  auVar14._8_4_ = auVar14._0_4_;
  auVar14._12_4_ = auVar14._0_4_;
  if (param_8 < 9) {
    auVar17 = *(undefined1 (*) [16])param_6;
    if (param_3 < param_5) {
      puVar5 = param_1 + ((longlong)param_3 - (longlong)param_4);
      do {
        sVar15 = auVar17._0_2_ - auVar14._0_2_;
        sVar19 = auVar17._2_2_ - auVar14._2_2_;
        sVar21 = auVar17._4_2_ - auVar14._4_2_;
        sVar23 = auVar17._6_2_ - auVar14._6_2_;
        sVar25 = auVar17._8_2_ - auVar14._8_2_;
        sVar27 = auVar17._10_2_ - auVar14._10_2_;
        sVar29 = auVar17._12_2_ - auVar14._12_2_;
        sVar31 = auVar17._14_2_ - auVar14._14_2_;
        auVar9._0_2_ = -(ushort)((short)param_11 < sVar15);
        auVar9._2_2_ = -(ushort)((short)param_11 < sVar19);
        auVar9._4_2_ = -(ushort)((short)param_11 < sVar21);
        auVar9._6_2_ = -(ushort)((short)param_11 < sVar23);
        auVar9._8_2_ = -(ushort)((short)param_11 < sVar25);
        auVar9._10_2_ = -(ushort)((short)param_11 < sVar27);
        auVar9._12_2_ = -(ushort)((short)param_11 < sVar29);
        auVar9._14_2_ = -(ushort)((short)param_11 < sVar31);
        auVar14 = packsswb(auVar9,ZEXT816(0));
        puVar1 = param_7 + (ulonglong)*param_3 * 8;
        auVar17._0_2_ =
             (((short)param_11 < sVar15) * param_11 | (ushort)((short)param_11 >= sVar15) * sVar15)
             + *puVar1;
        auVar17._2_2_ =
             (((short)param_11 < sVar19) * param_11 | (ushort)((short)param_11 >= sVar19) * sVar19)
             + puVar1[1];
        auVar17._4_2_ =
             (((short)param_11 < sVar21) * param_11 | (ushort)((short)param_11 >= sVar21) * sVar21)
             + puVar1[2];
        auVar17._6_2_ =
             (((short)param_11 < sVar23) * param_11 | (ushort)((short)param_11 >= sVar23) * sVar23)
             + puVar1[3];
        auVar17._8_2_ =
             (((short)param_11 < sVar25) * param_11 | (ushort)((short)param_11 >= sVar25) * sVar25)
             + puVar1[4];
        auVar17._10_2_ =
             (((short)param_11 < sVar27) * param_11 | (ushort)((short)param_11 >= sVar27) * sVar27)
             + puVar1[5];
        auVar17._12_2_ =
             (((short)param_11 < sVar29) * param_11 | (ushort)((short)param_11 >= sVar29) * sVar29)
             + puVar1[6];
        auVar17._14_2_ =
             (((short)param_11 < sVar31) * param_11 | (ushort)((short)param_11 >= sVar31) * sVar31)
             + puVar1[7];
        auVar9 = phminposuw(auVar17);
        *puVar5 = (longlong)
                  (int)(uint)(ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar14[0xf] >> 7) << 0xf);
        auVar14 = pshufb(auVar9,auVar11);
        param_3[(longlong)param_2 - (longlong)param_4] = auVar9[2];
        param_3 = param_3 + 1;
        puVar5 = puVar5 + 1;
      } while (param_3 < param_5);
      return;
    }
  }
  else {
    while (param_3 < param_5) {
      bVar3 = *param_3;
      lVar7 = (longlong)param_3 - (longlong)param_4;
      param_3 = param_3 + 1;
      uVar6 = 0;
      iVar4 = 0;
      sVar36 = 0;
      sVar37 = 0;
      sVar38 = 0;
      sVar39 = 0;
      sVar40 = 0;
      sVar41 = 0;
      sVar42 = 0;
      sVar43 = 0;
      auVar11 = auVar17;
      if (0 < param_9) {
        pauVar8 = (undefined1 (*) [16])param_6;
        auVar34 = auVar17;
        do {
          sVar16 = *(short *)*pauVar8 - auVar14._0_2_;
          sVar20 = *(short *)(*pauVar8 + 2) - auVar14._2_2_;
          sVar22 = *(short *)(*pauVar8 + 4) - auVar14._4_2_;
          sVar24 = *(short *)(*pauVar8 + 6) - auVar14._6_2_;
          sVar26 = *(short *)(*pauVar8 + 8) - auVar14._8_2_;
          sVar28 = *(short *)(*pauVar8 + 10) - auVar14._10_2_;
          sVar30 = *(short *)(*pauVar8 + 0xc) - auVar14._12_2_;
          sVar32 = *(short *)(*pauVar8 + 0xe) - auVar14._14_2_;
          auVar18._0_2_ = -(ushort)((short)param_11 < sVar16);
          auVar18._2_2_ = -(ushort)((short)param_11 < sVar20);
          auVar18._4_2_ = -(ushort)((short)param_11 < sVar22);
          auVar18._6_2_ = -(ushort)((short)param_11 < sVar24);
          auVar18._8_2_ = -(ushort)((short)param_11 < sVar26);
          auVar18._10_2_ = -(ushort)((short)param_11 < sVar28);
          auVar18._12_2_ = -(ushort)((short)param_11 < sVar30);
          auVar18._14_2_ = -(ushort)((short)param_11 < sVar32);
          auVar18 = packsswb(auVar18,ZEXT816(0));
          psVar2 = (short *)((longlong)param_7 +
                             ((ulonglong)((uint)bVar3 * param_9) * 2 - (longlong)param_6) + -0x10 +
                            (longlong)(pauVar8 + 1));
          auVar10._0_2_ =
               (((short)param_11 < sVar16) * param_11 | (ushort)((short)param_11 >= sVar16) * sVar16
               ) + *psVar2;
          auVar10._2_2_ =
               (((short)param_11 < sVar20) * param_11 | (ushort)((short)param_11 >= sVar20) * sVar20
               ) + psVar2[1];
          auVar10._4_2_ =
               (((short)param_11 < sVar22) * param_11 | (ushort)((short)param_11 >= sVar22) * sVar22
               ) + psVar2[2];
          auVar10._6_2_ =
               (((short)param_11 < sVar24) * param_11 | (ushort)((short)param_11 >= sVar24) * sVar24
               ) + psVar2[3];
          auVar10._8_2_ =
               (((short)param_11 < sVar26) * param_11 | (ushort)((short)param_11 >= sVar26) * sVar26
               ) + psVar2[4];
          auVar10._10_2_ =
               (((short)param_11 < sVar28) * param_11 | (ushort)((short)param_11 >= sVar28) * sVar28
               ) + psVar2[5];
          auVar10._12_2_ =
               (((short)param_11 < sVar30) * param_11 | (ushort)((short)param_11 >= sVar30) * sVar30
               ) + psVar2[6];
          auVar10._14_2_ =
               (((short)param_11 < sVar32) * param_11 | (ushort)((short)param_11 >= sVar32) * sVar32
               ) + psVar2[7];
          *pauVar8 = auVar10;
          auVar11 = phminposuw(auVar10);
          auVar11 = pshuflw(in_XMM1,auVar11,0xe1);
          iVar12 = CONCAT22(auVar11._2_2_ + sVar37,auVar11._0_2_ + sVar36);
          auVar13._0_8_ = CONCAT26(auVar11._6_2_ + sVar39,CONCAT24(auVar11._4_2_ + sVar38,iVar12));
          auVar13._8_2_ = auVar11._8_2_ + sVar40;
          auVar13._10_2_ = auVar11._10_2_ + sVar41;
          in_XMM1._12_2_ = auVar11._12_2_ + sVar42;
          in_XMM1._0_12_ = auVar13;
          in_XMM1._14_2_ = auVar11._14_2_ + sVar43;
          sVar36 = sVar36 + sVar15;
          sVar37 = sVar37 + sVar19;
          sVar38 = sVar38 + sVar21;
          sVar39 = sVar39 + sVar23;
          sVar40 = sVar40 + sVar25;
          sVar41 = sVar41 + sVar27;
          sVar42 = sVar42 + sVar29;
          sVar43 = sVar43 + sVar31;
          uVar6 = uVar6 | (longlong)
                          (int)(uint)(ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                                              (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
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
                                              (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                                             (ushort)(byte)(auVar18[0xf] >> 7) << 0xf) <<
                          ((byte)iVar4 & 0x3f);
          iVar4 = iVar4 + 8;
          iVar33 = auVar34._0_4_;
          auVar11._0_4_ = (uint)(iVar12 < iVar33) * iVar12 | (uint)(iVar12 >= iVar33) * iVar33;
          iVar12 = (int)((ulonglong)auVar13._0_8_ >> 0x20);
          iVar33 = auVar34._4_4_;
          auVar11._4_4_ = (uint)(iVar12 < iVar33) * iVar12 | (uint)(iVar12 >= iVar33) * iVar33;
          iVar12 = auVar13._8_4_;
          iVar33 = auVar34._8_4_;
          iVar35 = auVar34._12_4_;
          auVar11._8_4_ = (uint)(iVar12 < iVar33) * iVar12 | (uint)(iVar12 >= iVar33) * iVar33;
          iVar12 = in_XMM1._12_4_;
          auVar11._12_4_ = (uint)(iVar12 < iVar35) * iVar12 | (uint)(iVar12 >= iVar35) * iVar35;
          pauVar8 = pauVar8 + 1;
          auVar34 = auVar11;
        } while (iVar4 < param_9);
      }
      param_1[lVar7] = uVar6;
      auVar14 = pshufb(auVar11,auVar9);
      param_2[lVar7] = auVar11[0];
    }
  }
  return;
}

// rrPtrDiff @ 14f3d8ca0

long64 __cdecl oo2::rrPtrDiff(long64 param_1)

{
  return param_1;
}


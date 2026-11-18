// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: radaudio_decoder_win64
// Functions: 6

// UERAradaudio_sse2_compute_band_energy_multiple4_ @ 14f8cc3a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UERAradaudio_sse2_compute_band_energy_multiple4_
               (longlong param_1,int param_2,longlong param_3,ulonglong *param_4,float *param_5)

{
  int *piVar1;
  float *pfVar2;
  ulonglong uVar3;
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auVar12 [14];
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  ulonglong uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  
  iVar36 = _UNK_15352bbbc;
  iVar35 = _UNK_15352bbb8;
  iVar34 = _UNK_15352bbb4;
  iVar33 = ___xmm_0000008f0000008f0000008f0000008f;
  iVar32 = _UNK_15352bb8c;
  iVar31 = _UNK_15352bb88;
  iVar30 = _UNK_15352bb84;
  iVar29 = ___xmm_ffffffefffffffefffffffefffffffef;
  fVar28 = _UNK_15352bb7c;
  fVar27 = _UNK_15352bb78;
  fVar26 = _UNK_15352bb74;
  fVar25 = ___xmm_3f2800003f2800003f2800003f280000;
  fVar24 = _UNK_15352bb6c;
  fVar23 = _UNK_15352bb68;
  fVar22 = _UNK_15352bb64;
  fVar21 = ___xmm_3eb000003eb000003eb000003eb00000;
  fVar20 = _UNK_150d5a7ac;
  fVar19 = _UNK_150d5a7a8;
  fVar18 = _UNK_150d5a7a4;
  fVar17 = ___xmm_37800000378000003780000037800000;
  fVar16 = _UNK_15076b1fc;
  fVar15 = _UNK_15076b1f8;
  fVar14 = _UNK_15076b1f4;
  fVar13 = ___xmm_3f8000003f8000003f8000003f800000;
  if (0 < param_2) {
    param_3 = param_3 - (longlong)param_5;
    param_1 = param_1 - (longlong)param_5;
    uVar37 = (ulonglong)((param_2 - 1U >> 2) + 1);
    do {
      piVar1 = (int *)(param_3 + (longlong)param_5);
      iVar6 = piVar1[1];
      iVar7 = piVar1[2];
      iVar8 = piVar1[3];
      uVar3 = *param_4;
      auVar4._8_4_ = 0;
      auVar4._0_8_ = uVar3;
      auVar4._12_2_ = (short)(uVar3 >> 0x30);
      auVar5._8_2_ = (short)(uVar3 >> 0x20);
      auVar5._0_8_ = uVar3;
      auVar5._10_4_ = auVar4._10_4_;
      auVar12._6_8_ = 0;
      auVar12._0_6_ = auVar5._8_6_;
      param_4 = param_4 + 1;
      fVar38 = (float)(ushort)uVar3 * fVar17;
      fVar39 = (float)(int)CONCAT82(SUB148(auVar12 << 0x40,6),(short)(uVar3 >> 0x10)) * fVar18;
      fVar40 = (float)auVar5._8_4_ * fVar19;
      fVar41 = (float)(auVar4._10_4_ >> 0x10) * fVar20;
      fVar9 = param_5[1];
      fVar10 = param_5[2];
      fVar11 = param_5[3];
      pfVar2 = (float *)(param_1 + (longlong)param_5);
      *pfVar2 = ((fVar21 * fVar38 + fVar25) * fVar38 + fVar13) *
                (float)(~-(uint)(iVar29 == *piVar1) & (iVar33 + *piVar1) * 0x800000) * *param_5;
      pfVar2[1] = ((fVar22 * fVar39 + fVar26) * fVar39 + fVar14) *
                  (float)(~-(uint)(iVar30 == iVar6) & (iVar34 + iVar6) * 0x800000) * fVar9;
      pfVar2[2] = ((fVar23 * fVar40 + fVar27) * fVar40 + fVar15) *
                  (float)(~-(uint)(iVar31 == iVar7) & (iVar35 + iVar7) * 0x800000) * fVar10;
      pfVar2[3] = ((fVar24 * fVar41 + fVar28) * fVar41 + fVar16) *
                  (float)(~-(uint)(iVar32 == iVar8) & (iVar36 + iVar8) * 0x800000) * fVar11;
      param_5 = param_5 + 4;
      uVar37 = uVar37 - 1;
    } while (uVar37 != 0);
  }
  return;
}

// UERAradaudio_sse2_compute_windowed_sum_multiple8_ @ 14f8cc4b0

void UERAradaudio_sse2_compute_windowed_sum_multiple8_
               (longlong param_1,int param_2,longlong param_3,longlong param_4,float param_5,
               longlong param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ushort uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  ushort *puVar30;
  ushort *puVar31;
  ushort *puVar32;
  ushort uVar33;
  ushort *puVar34;
  ushort *puVar35;
  ushort *puVar36;
  longlong lVar37;
  float *pfVar38;
  ushort *puVar39;
  float *pfVar40;
  longlong lVar41;
  longlong lVar42;
  undefined1 auVar43 [12];
  undefined1 auVar44 [12];
  undefined1 auVar46 [16];
  undefined1 auVar49 [16];
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar50 [16];
  
  lVar41 = 0;
  param_5 = param_5 * __real_37800000;
  lVar42 = (longlong)param_2 >> 1;
  if (0 < lVar42) {
    pfVar38 = (float *)(param_1 + 0x10);
    pfVar40 = (float *)(param_3 + -0x20 + lVar42 * 4);
    do {
      puVar39 = (ushort *)(param_4 + lVar41 * 2);
      uVar7 = *puVar39;
      fVar8 = *pfVar40;
      fVar9 = pfVar40[1];
      fVar10 = pfVar40[2];
      pfVar11 = pfVar40 + 3;
      lVar37 = param_2 - lVar41;
      lVar41 = lVar41 + 8;
      fVar12 = pfVar40[4];
      fVar13 = pfVar40[5];
      fVar14 = pfVar40[6];
      fVar15 = pfVar40[7];
      pfVar40 = pfVar40 + -8;
      pfVar1 = (float *)(param_6 + -0x20 + lVar37 * 4);
      fVar16 = *pfVar1;
      fVar17 = pfVar1[1];
      fVar18 = pfVar1[2];
      pfVar2 = (float *)(param_6 + -0x10 + lVar37 * 4);
      fVar19 = *pfVar2;
      fVar20 = pfVar2[1];
      fVar21 = pfVar2[2];
      fVar22 = pfVar2[3];
      auVar43._0_8_ = CONCAT26(puVar39[5],(uint6)puVar39[4] << 0x10);
      auVar43._8_2_ = 0;
      auVar43._10_2_ = puVar39[6];
      auVar45._12_2_ = 0;
      auVar45._0_12_ = auVar43;
      auVar45._14_2_ = puVar39[7];
      pfVar2 = (float *)((longlong)pfVar38 + (param_6 - param_1));
      fVar23 = pfVar2[1];
      fVar24 = pfVar2[2];
      fVar25 = pfVar2[3];
      auVar47._0_12_ = ZEXT812(0);
      auVar47._12_2_ = 0;
      auVar47._14_2_ = puVar39[3];
      auVar46._12_4_ = auVar47._12_4_;
      auVar46._0_10_ = auVar47._0_10_;
      auVar46._10_2_ = puVar39[2];
      lVar37 = (ulonglong)auVar46._10_6_ << 0x10;
      auVar5._2_8_ = lVar37;
      auVar5._0_2_ = puVar39[1];
      auVar5._10_6_ = 0;
      pfVar3 = (float *)((longlong)pfVar38 + (param_6 - param_1) + -0x10);
      fVar26 = *pfVar3;
      fVar27 = pfVar3[1];
      fVar28 = pfVar3[2];
      fVar29 = pfVar3[3];
      *pfVar38 = (float)(int)((uint6)puVar39[4] << 0x10) * param_5 * pfVar1[3] - *pfVar11 * *pfVar2;
      pfVar38[1] = (float)(int)(auVar43._0_8_ >> 0x20) * param_5 * fVar18 - fVar10 * fVar23;
      pfVar38[2] = (float)auVar43._8_4_ * param_5 * fVar17 - fVar9 * fVar24;
      pfVar38[3] = (float)auVar45._12_4_ * param_5 * fVar16 - fVar8 * fVar25;
      pfVar38[-4] = (float)(int)((uint)uVar7 << 0x10) * param_5 * fVar22 - fVar15 * fVar26;
      pfVar38[-3] = (float)SUB164(auVar5 << 0x30,4) * param_5 * fVar21 - fVar14 * fVar27;
      pfVar38[-2] = (float)(int)lVar37 * param_5 * fVar20 - fVar13 * fVar28;
      pfVar38[-1] = (float)auVar46._12_4_ * param_5 * fVar19 - fVar12 * fVar29;
      pfVar38 = pfVar38 + 8;
    } while (lVar41 < lVar42);
    lVar41 = lVar42 * 4 + 0x10;
    pfVar38 = (float *)(lVar41 + param_1);
    pfVar40 = (float *)(param_6 + (lVar42 + -8) * 4);
    puVar39 = (ushort *)(param_4 + (lVar42 + -8) * 2);
    lVar37 = (lVar42 - 1U >> 3) + 1;
    do {
      uVar7 = *puVar39;
      puVar30 = puVar39 + 1;
      puVar31 = puVar39 + 2;
      puVar32 = puVar39 + 3;
      uVar33 = puVar39[4];
      puVar34 = puVar39 + 5;
      puVar35 = puVar39 + 6;
      puVar36 = puVar39 + 7;
      puVar39 = puVar39 + -8;
      pfVar2 = (float *)((longlong)pfVar38 + ((param_3 + lVar42 * -4) - param_1));
      fVar8 = pfVar2[1];
      fVar9 = pfVar2[2];
      fVar10 = pfVar2[3];
      auVar44._0_8_ = CONCAT26(*puVar34,(uint6)uVar33 << 0x10);
      auVar44._8_2_ = 0;
      auVar44._10_2_ = *puVar35;
      auVar48._12_2_ = 0;
      auVar48._0_12_ = auVar44;
      auVar48._14_2_ = *puVar36;
      fVar12 = pfVar40[4];
      fVar13 = pfVar40[5];
      fVar14 = pfVar40[6];
      fVar15 = pfVar40[7];
      auVar50._0_12_ = ZEXT812(0);
      auVar50._12_2_ = 0;
      auVar50._14_2_ = *puVar32;
      auVar49._12_4_ = auVar50._12_4_;
      auVar49._0_10_ = auVar50._0_10_;
      auVar49._10_2_ = *puVar31;
      lVar4 = (ulonglong)auVar49._10_6_ << 0x10;
      auVar6._2_8_ = lVar4;
      auVar6._0_2_ = *puVar30;
      auVar6._10_6_ = 0;
      fVar16 = *pfVar40;
      fVar17 = pfVar40[1];
      fVar18 = pfVar40[2];
      pfVar11 = pfVar40 + 3;
      pfVar40 = pfVar40 + -8;
      pfVar1 = (float *)((param_6 - param_1) + (longlong)pfVar38);
      fVar19 = pfVar1[1];
      fVar20 = pfVar1[2];
      fVar21 = pfVar1[3];
      pfVar3 = (float *)(((param_3 - lVar41) - param_1) + (longlong)pfVar38);
      fVar22 = *pfVar3;
      fVar23 = pfVar3[1];
      fVar24 = pfVar3[2];
      fVar25 = pfVar3[3];
      pfVar3 = (float *)((param_6 - param_1) + -0x10 + (longlong)pfVar38);
      fVar26 = *pfVar3;
      fVar27 = pfVar3[1];
      fVar28 = pfVar3[2];
      fVar29 = pfVar3[3];
      *pfVar38 = *pfVar2 * *pfVar1 + (float)auVar49._12_4_ * param_5 * *pfVar11;
      pfVar38[1] = fVar8 * fVar19 + (float)(int)lVar4 * param_5 * fVar18;
      pfVar38[2] = fVar9 * fVar20 + (float)SUB164(auVar6 << 0x30,4) * param_5 * fVar17;
      pfVar38[3] = fVar10 * fVar21 + (float)(int)((uint)uVar7 << 0x10) * param_5 * fVar16;
      pfVar38[-4] = fVar22 * fVar26 + (float)auVar48._12_4_ * param_5 * fVar15;
      pfVar38[-3] = fVar23 * fVar27 + (float)auVar44._8_4_ * param_5 * fVar14;
      pfVar38[-2] = fVar24 * fVar28 + (float)(int)(auVar44._0_8_ >> 0x20) * param_5 * fVar13;
      pfVar38[-1] = fVar25 * fVar29 + (float)(int)((uint6)uVar33 << 0x10) * param_5 * fVar12;
      pfVar38 = pfVar38 + 8;
      lVar37 = lVar37 + -1;
    } while (lVar37 != 0);
  }
  return;
}

// UERAradaudio_sse2_count_bytes_below_value_sentinel16_ @ 14f8cc6a0

int UERAradaudio_sse2_count_bytes_below_value_sentinel16_(longlong param_1,int param_2,char param_3)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
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
  longlong lVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  
  cVar17 = UNK_1508be4ff;
  cVar16 = UNK_1508be4fe;
  cVar15 = UNK_1508be4fd;
  cVar14 = UNK_1508be4fc;
  cVar13 = UNK_1508be4fb;
  cVar12 = UNK_1508be4fa;
  cVar11 = UNK_1508be4f9;
  cVar10 = UNK_1508be4f8;
  cVar9 = UNK_1508be4f7;
  cVar8 = UNK_1508be4f6;
  cVar7 = UNK_1508be4f5;
  cVar6 = UNK_1508be4f4;
  cVar5 = UNK_1508be4f3;
  cVar4 = UNK_1508be4f2;
  cVar3 = UNK_1508be4f1;
  cVar2 = __xmm_80808080808080808080808080808080;
  param_3 = param_3 + -0x80;
  iVar23 = 0;
  uVar22 = param_2 + 0xfU & 0xfffffff0;
  uVar21 = 0;
  *(undefined8 *)(param_2 + param_1) = 0xffffffffffffffff;
  *(undefined8 *)((longlong)param_2 + 8 + param_1) = 0xffffffffffffffff;
  if (0 < (int)uVar22) {
    lVar20 = 0;
    do {
      uVar21 = uVar21 + 0xff0;
      uVar19 = uVar21;
      if ((int)uVar22 <= (int)uVar21) {
        uVar19 = uVar22;
      }
      auVar25 = ZEXT816(0);
      for (lVar18 = lVar20; lVar18 < (int)uVar19; lVar18 = lVar18 + 0x10) {
        pcVar1 = (char *)(param_1 + lVar18);
        auVar24[0] = auVar25[0] + ((char)(*pcVar1 + cVar2) < param_3);
        auVar24[1] = auVar25[1] + ((char)(pcVar1[1] + cVar3) < param_3);
        auVar24[2] = auVar25[2] + ((char)(pcVar1[2] + cVar4) < param_3);
        auVar24[3] = auVar25[3] + ((char)(pcVar1[3] + cVar5) < param_3);
        auVar24[4] = auVar25[4] + ((char)(pcVar1[4] + cVar6) < param_3);
        auVar24[5] = auVar25[5] + ((char)(pcVar1[5] + cVar7) < param_3);
        auVar24[6] = auVar25[6] + ((char)(pcVar1[6] + cVar8) < param_3);
        auVar24[7] = auVar25[7] + ((char)(pcVar1[7] + cVar9) < param_3);
        auVar24[8] = auVar25[8] + ((char)(pcVar1[8] + cVar10) < param_3);
        auVar24[9] = auVar25[9] + ((char)(pcVar1[9] + cVar11) < param_3);
        auVar24[10] = auVar25[10] + ((char)(pcVar1[10] + cVar12) < param_3);
        auVar24[0xb] = auVar25[0xb] + ((char)(pcVar1[0xb] + cVar13) < param_3);
        auVar24[0xc] = auVar25[0xc] + ((char)(pcVar1[0xc] + cVar14) < param_3);
        auVar24[0xd] = auVar25[0xd] + ((char)(pcVar1[0xd] + cVar15) < param_3);
        auVar24[0xe] = auVar25[0xe] + ((char)(pcVar1[0xe] + cVar16) < param_3);
        auVar24[0xf] = auVar25[0xf] + ((char)(pcVar1[0xf] + cVar17) < param_3);
        auVar25 = auVar24;
      }
      auVar25 = psadbw(auVar25,ZEXT816(0));
      lVar20 = lVar20 + 0xff0;
      iVar23 = iVar23 + auVar25._0_4_ + (uint)auVar25._8_2_;
    } while ((int)uVar21 < (int)uVar22);
  }
  return iVar23;
}

// UERAradaudio_sse2_expand_coefficients_excess_read15_ @ 14f8cc770

undefined8
UERAradaudio_sse2_expand_coefficients_excess_read15_
          (longlong param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 uVar3;
  uint uVar4;
  ushort uVar5;
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
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  char cVar31;
  char cVar32;
  char cVar33;
  char cVar34;
  char cVar35;
  char cVar36;
  uint uVar37;
  uint uVar38;
  longlong lVar39;
  undefined1 auVar40 [16];
  
  cVar36 = UNK_1531e914f;
  cVar35 = UNK_1531e914e;
  cVar34 = UNK_1531e914d;
  cVar33 = UNK_1531e914c;
  cVar32 = UNK_1531e914b;
  cVar31 = UNK_1531e914a;
  cVar30 = UNK_1531e9149;
  cVar29 = UNK_1531e9148;
  cVar28 = UNK_1531e9147;
  cVar27 = UNK_1531e9146;
  cVar26 = UNK_1531e9145;
  cVar25 = UNK_1531e9144;
  cVar24 = UNK_1531e9143;
  cVar23 = UNK_1531e9142;
  cVar22 = UNK_1531e9141;
  cVar21 = __xmm_08080808080808080808080808080808;
  uVar38 = param_2 + 0xfU & 0xfffffff0;
  if (0 < (int)uVar38) {
    lVar39 = 0;
    do {
      pcVar1 = (char *)(lVar39 + param_1);
      cVar6 = pcVar1[1];
      cVar7 = pcVar1[2];
      cVar8 = pcVar1[3];
      cVar9 = pcVar1[4];
      cVar10 = pcVar1[5];
      cVar11 = pcVar1[6];
      cVar12 = pcVar1[7];
      cVar13 = pcVar1[8];
      cVar14 = pcVar1[9];
      cVar15 = pcVar1[10];
      cVar16 = pcVar1[0xb];
      cVar17 = pcVar1[0xc];
      cVar18 = pcVar1[0xd];
      cVar19 = pcVar1[0xe];
      cVar20 = pcVar1[0xf];
      auVar40[0] = -(*pcVar1 == '\0');
      auVar40[1] = -(cVar6 == '\0');
      auVar40[2] = -(cVar7 == '\0');
      auVar40[3] = -(cVar8 == '\0');
      auVar40[4] = -(cVar9 == '\0');
      auVar40[5] = -(cVar10 == '\0');
      auVar40[6] = -(cVar11 == '\0');
      auVar40[7] = -(cVar12 == '\0');
      auVar40[8] = -(cVar13 == '\0');
      auVar40[9] = -(cVar14 == '\0');
      auVar40[10] = -(cVar15 == '\0');
      auVar40[0xb] = -(cVar16 == '\0');
      auVar40[0xc] = -(cVar17 == '\0');
      auVar40[0xd] = -(cVar18 == '\0');
      auVar40[0xe] = -(cVar19 == '\0');
      auVar40[0xf] = -(cVar20 == '\0');
      uVar5 = (ushort)(SUB161(auVar40 >> 7,0) & 1) | (ushort)(SUB161(auVar40 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar40 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar40 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar40 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar40 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar40 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar40 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar40 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar40 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar40 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar40 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar40 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar40 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar40 >> 0x77,0) & 1) << 0xe | (ushort)(auVar40[0xf] >> 7) << 0xf;
      uVar37 = (uint)uVar5;
      pcVar2 = (char *)(lVar39 + param_1);
      *pcVar2 = *pcVar1 - cVar21;
      pcVar2[1] = cVar6 - cVar22;
      pcVar2[2] = cVar7 - cVar23;
      pcVar2[3] = cVar8 - cVar24;
      pcVar2[4] = cVar9 - cVar25;
      pcVar2[5] = cVar10 - cVar26;
      pcVar2[6] = cVar11 - cVar27;
      pcVar2[7] = cVar12 - cVar28;
      pcVar2[8] = cVar13 - cVar29;
      pcVar2[9] = cVar14 - cVar30;
      pcVar2[10] = cVar15 - cVar31;
      pcVar2[0xb] = cVar16 - cVar32;
      pcVar2[0xc] = cVar17 - cVar33;
      pcVar2[0xd] = cVar18 - cVar34;
      pcVar2[0xe] = cVar19 - cVar35;
      pcVar2[0xf] = cVar20 - cVar36;
      if (uVar5 != 0) {
        do {
          uVar4 = 0;
          if (uVar37 != 0) {
            for (; (uVar37 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
            }
          }
          uVar37 = uVar37 & uVar37 - 1;
          uVar3 = *param_3;
          param_3 = param_3 + 1;
          *(undefined1 *)((ulonglong)uVar4 + lVar39 + param_1) = uVar3;
        } while (uVar37 != 0);
        if (param_4 < param_3) {
          return 0;
        }
      }
      lVar39 = lVar39 + 0x10;
    } while (lVar39 < (int)uVar38);
  }
  return 1;
}

// UERAradaudio_sse2_find_next_coarse_run_excess16_ @ 14f8cc810

byte * UERAradaudio_sse2_find_next_coarse_run_excess16_(byte *param_1,byte *param_2)

{
  uint uVar1;
  ushort uVar2;
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
  byte bVar19;
  byte bVar21;
  byte bVar22;
  byte bVar23;
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
  undefined1 auVar20 [16];
  
  do {
    if (param_2 <= param_1) {
      return param_1;
    }
    bVar3 = *param_1;
    bVar4 = param_1[1];
    bVar5 = param_1[2];
    bVar6 = param_1[3];
    bVar7 = param_1[4];
    bVar8 = param_1[5];
    bVar9 = param_1[6];
    bVar10 = param_1[7];
    bVar11 = param_1[8];
    bVar12 = param_1[9];
    bVar13 = param_1[10];
    bVar14 = param_1[0xb];
    bVar15 = param_1[0xc];
    bVar16 = param_1[0xd];
    bVar17 = param_1[0xe];
    bVar18 = param_1[0xf];
    param_1 = param_1 + 0x10;
    bVar19 = (bVar3 < __xmm_3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c) *
             __xmm_3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c |
             (bVar3 >= __xmm_3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c3c) * bVar3;
    bVar21 = (bVar4 < UNK_15352bbc1) * UNK_15352bbc1 | (bVar4 >= UNK_15352bbc1) * bVar4;
    bVar22 = (bVar5 < UNK_15352bbc2) * UNK_15352bbc2 | (bVar5 >= UNK_15352bbc2) * bVar5;
    bVar23 = (bVar6 < UNK_15352bbc3) * UNK_15352bbc3 | (bVar6 >= UNK_15352bbc3) * bVar6;
    bVar24 = (bVar7 < UNK_15352bbc4) * UNK_15352bbc4 | (bVar7 >= UNK_15352bbc4) * bVar7;
    bVar25 = (bVar8 < UNK_15352bbc5) * UNK_15352bbc5 | (bVar8 >= UNK_15352bbc5) * bVar8;
    bVar26 = (bVar9 < UNK_15352bbc6) * UNK_15352bbc6 | (bVar9 >= UNK_15352bbc6) * bVar9;
    bVar27 = (bVar10 < UNK_15352bbc7) * UNK_15352bbc7 | (bVar10 >= UNK_15352bbc7) * bVar10;
    bVar28 = (bVar11 < UNK_15352bbc8) * UNK_15352bbc8 | (bVar11 >= UNK_15352bbc8) * bVar11;
    bVar29 = (bVar12 < UNK_15352bbc9) * UNK_15352bbc9 | (bVar12 >= UNK_15352bbc9) * bVar12;
    bVar30 = (bVar13 < UNK_15352bbca) * UNK_15352bbca | (bVar13 >= UNK_15352bbca) * bVar13;
    bVar31 = (bVar14 < UNK_15352bbcb) * UNK_15352bbcb | (bVar14 >= UNK_15352bbcb) * bVar14;
    bVar32 = (bVar15 < UNK_15352bbcc) * UNK_15352bbcc | (bVar15 >= UNK_15352bbcc) * bVar15;
    bVar33 = (bVar16 < UNK_15352bbcd) * UNK_15352bbcd | (bVar16 >= UNK_15352bbcd) * bVar16;
    bVar34 = (bVar17 < UNK_15352bbce) * UNK_15352bbce | (bVar17 >= UNK_15352bbce) * bVar17;
    bVar35 = (bVar18 < UNK_15352bbcf) * UNK_15352bbcf | (bVar18 >= UNK_15352bbcf) * bVar18;
    auVar20[0] = -((byte)((__xmm_efefefefefefefefefefefefefefefef < bVar19) *
                          __xmm_efefefefefefefefefefefefefefefef |
                         (__xmm_efefefefefefefefefefefefefefefef >= bVar19) * bVar19) == bVar3);
    auVar20[1] = -((byte)((UNK_15352bbd1 < bVar21) * UNK_15352bbd1 |
                         (UNK_15352bbd1 >= bVar21) * bVar21) == bVar4);
    auVar20[2] = -((byte)((UNK_15352bbd2 < bVar22) * UNK_15352bbd2 |
                         (UNK_15352bbd2 >= bVar22) * bVar22) == bVar5);
    auVar20[3] = -((byte)((UNK_15352bbd3 < bVar23) * UNK_15352bbd3 |
                         (UNK_15352bbd3 >= bVar23) * bVar23) == bVar6);
    auVar20[4] = -((byte)((UNK_15352bbd4 < bVar24) * UNK_15352bbd4 |
                         (UNK_15352bbd4 >= bVar24) * bVar24) == bVar7);
    auVar20[5] = -((byte)((UNK_15352bbd5 < bVar25) * UNK_15352bbd5 |
                         (UNK_15352bbd5 >= bVar25) * bVar25) == bVar8);
    auVar20[6] = -((byte)((UNK_15352bbd6 < bVar26) * UNK_15352bbd6 |
                         (UNK_15352bbd6 >= bVar26) * bVar26) == bVar9);
    auVar20[7] = -((byte)((UNK_15352bbd7 < bVar27) * UNK_15352bbd7 |
                         (UNK_15352bbd7 >= bVar27) * bVar27) == bVar10);
    auVar20[8] = -((byte)((UNK_15352bbd8 < bVar28) * UNK_15352bbd8 |
                         (UNK_15352bbd8 >= bVar28) * bVar28) == bVar11);
    auVar20[9] = -((byte)((UNK_15352bbd9 < bVar29) * UNK_15352bbd9 |
                         (UNK_15352bbd9 >= bVar29) * bVar29) == bVar12);
    auVar20[10] = -((byte)((UNK_15352bbda < bVar30) * UNK_15352bbda |
                          (UNK_15352bbda >= bVar30) * bVar30) == bVar13);
    auVar20[0xb] = -((byte)((UNK_15352bbdb < bVar31) * UNK_15352bbdb |
                           (UNK_15352bbdb >= bVar31) * bVar31) == bVar14);
    auVar20[0xc] = -((byte)((UNK_15352bbdc < bVar32) * UNK_15352bbdc |
                           (UNK_15352bbdc >= bVar32) * bVar32) == bVar15);
    auVar20[0xd] = -((byte)((UNK_15352bbdd < bVar33) * UNK_15352bbdd |
                           (UNK_15352bbdd >= bVar33) * bVar33) == bVar16);
    auVar20[0xe] = -((byte)((UNK_15352bbde < bVar34) * UNK_15352bbde |
                           (UNK_15352bbde >= bVar34) * bVar34) == bVar17);
    auVar20[0xf] = -((byte)((UNK_15352bbdf < bVar35) * UNK_15352bbdf |
                           (UNK_15352bbdf >= bVar35) * bVar35) == bVar18);
    uVar2 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe | (ushort)(auVar20[0xf] >> 7) << 0xf;
  } while (uVar2 == 0);
  uVar1 = 0;
  if (uVar2 != 0) {
    for (; (uVar2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  return param_1 + ((ulonglong)uVar1 - 0x10);
}

// UERAradaudio_sse2_unpack_nibbles_read_sentinel16_write_multiple32_ @ 14f8cc870

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UERAradaudio_sse2_unpack_nibbles_read_sentinel16_write_multiple32_
               (longlong param_1,longlong param_2,int param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  uint uVar17;
  uint uVar20;
  undefined1 auVar18 [12];
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar26;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar19 [16];
  undefined1 auVar24 [12];
  undefined1 auVar25 [16];
  
  uVar5 = _UNK_15111455c;
  uVar4 = _UNK_151114558;
  uVar3 = _UNK_151114554;
  uVar2 = ___xmm_0f0f0f0f0f0f0f0f0f0f0f0f0f0f0f0f;
  *(undefined8 *)(param_3 + param_2) = param_4;
  *(undefined8 *)((longlong)param_3 + 8 + param_2) = param_4;
  uVar7 = (longlong)(param_3 + 0xf) & 0xfffffffffffffff0;
  if (0 < (longlong)uVar7) {
    lVar6 = 0;
    do {
      auVar8 = *(undefined1 (*) [16])(param_2 + lVar6);
      uVar17 = CONCAT22(auVar8._2_2_ >> 4,auVar8._0_2_ >> 4);
      auVar18._0_8_ = CONCAT26(auVar8._6_2_ >> 4,CONCAT24(auVar8._4_2_ >> 4,uVar17));
      auVar18._8_2_ = auVar8._8_2_ >> 4;
      auVar18._10_2_ = auVar8._10_2_ >> 4;
      auVar19._12_2_ = auVar8._12_2_ >> 4;
      auVar19._0_12_ = auVar18;
      auVar19._14_2_ = auVar8._14_2_ >> 4;
      uVar23 = auVar8._0_4_ & uVar2;
      uVar26 = auVar8._4_4_ & uVar3;
      auVar24._0_8_ = CONCAT44(uVar26,uVar23);
      auVar24._8_4_ = auVar8._8_4_ & uVar4;
      auVar25._12_4_ = auVar8._12_4_ & uVar5;
      auVar25._0_12_ = auVar24;
      uVar17 = uVar17 & uVar2;
      uVar20 = (uint)((ulonglong)auVar18._0_8_ >> 0x20) & uVar3;
      uVar21 = auVar18._8_4_ & uVar4;
      uVar22 = auVar19._12_4_ & uVar5;
      auVar16._0_14_ = auVar25._0_14_;
      auVar16[0xe] = (char)(uVar26 >> 0x18);
      auVar16[0xf] = (char)(uVar20 >> 0x18);
      auVar15._14_2_ = auVar16._14_2_;
      auVar15._0_13_ = auVar25._0_13_;
      auVar15[0xd] = (char)(uVar20 >> 0x10);
      auVar14._13_3_ = auVar15._13_3_;
      auVar14[0xc] = (char)(uVar26 >> 0x10);
      auVar14._0_12_ = auVar24;
      auVar13._12_4_ = auVar14._12_4_;
      auVar13._0_11_ = auVar24._0_11_;
      auVar13[0xb] = (char)(uVar20 >> 8);
      auVar12._11_5_ = auVar13._11_5_;
      auVar12._0_10_ = auVar24._0_10_;
      auVar12[10] = (char)(uVar26 >> 8);
      auVar11._10_6_ = auVar12._10_6_;
      auVar11._0_9_ = auVar24._0_9_;
      auVar11[9] = (char)uVar20;
      auVar10._9_7_ = auVar11._9_7_;
      auVar10[8] = (char)uVar26;
      auVar10._0_8_ = auVar24._0_8_;
      auVar9._8_8_ = auVar10._8_8_;
      auVar9[7] = (char)(uVar17 >> 0x18);
      auVar9[6] = (char)(uVar23 >> 0x18);
      auVar9[5] = (char)(uVar17 >> 0x10);
      auVar9[4] = (char)(uVar23 >> 0x10);
      auVar9._0_4_ = uVar23;
      auVar8._4_12_ = auVar9._4_12_;
      auVar8[3] = (char)(uVar17 >> 8);
      auVar8[2] = (char)(uVar23 >> 8);
      auVar8[0] = (undefined1)uVar23;
      auVar8[1] = (char)uVar17;
      *(undefined1 (*) [16])(param_1 + lVar6 * 2) = auVar8;
      puVar1 = (undefined1 *)(param_1 + 0x10 + lVar6 * 2);
      *puVar1 = (char)auVar24._8_4_;
      puVar1[1] = (char)uVar21;
      puVar1[2] = (char)(auVar24._8_4_ >> 8);
      puVar1[3] = (char)(uVar21 >> 8);
      puVar1[4] = (char)(auVar24._8_4_ >> 0x10);
      puVar1[5] = (char)(uVar21 >> 0x10);
      puVar1[6] = (char)(auVar24._8_4_ >> 0x18);
      puVar1[7] = (char)(uVar21 >> 0x18);
      puVar1[8] = (char)auVar25._12_4_;
      puVar1[9] = (char)uVar22;
      puVar1[10] = (char)(auVar25._12_4_ >> 8);
      puVar1[0xb] = (char)(uVar22 >> 8);
      puVar1[0xc] = (char)(auVar25._12_4_ >> 0x10);
      puVar1[0xd] = (char)(uVar22 >> 0x10);
      puVar1[0xe] = (char)(auVar25._12_4_ >> 0x18);
      puVar1[0xf] = (char)(uVar22 >> 0x18);
      lVar6 = lVar6 + 0x10;
    } while (lVar6 < (longlong)uVar7);
  }
  return;
}


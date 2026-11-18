// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 9

// sum<unsigned_int> @ 14f3a6f00

uint __cdecl oo2::sum<unsigned_int>(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  uVar6 = 0;
  uVar7 = (ulonglong)((longlong)param_2 + (3 - (longlong)param_1)) >> 2;
  if (param_2 < param_1) {
    uVar7 = uVar6;
  }
  if ((uVar7 != 0) && (7 < uVar7)) {
    iVar12 = 0;
    iVar13 = 0;
    iVar14 = 0;
    iVar15 = 0;
    iVar8 = 0;
    iVar9 = 0;
    iVar10 = 0;
    iVar11 = 0;
    do {
      uVar6 = uVar6 + 8;
      iVar12 = iVar12 + *param_1;
      iVar13 = iVar13 + param_1[1];
      iVar14 = iVar14 + param_1[2];
      iVar15 = iVar15 + param_1[3];
      puVar1 = param_1 + 4;
      puVar2 = param_1 + 5;
      puVar3 = param_1 + 6;
      puVar4 = param_1 + 7;
      param_1 = param_1 + 8;
      iVar8 = iVar8 + *puVar1;
      iVar9 = iVar9 + *puVar2;
      iVar10 = iVar10 + *puVar3;
      iVar11 = iVar11 + *puVar4;
    } while (uVar6 != (uVar7 & 0xfffffffffffffff8));
    uVar6 = (ulonglong)(uint)(iVar8 + iVar12 + iVar10 + iVar14 + iVar9 + iVar13 + iVar11 + iVar15);
  }
  uVar5 = (uint)uVar6;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    uVar5 = (int)uVar6 + *param_1;
    uVar6 = (ulonglong)uVar5;
  }
  return uVar5;
}

// all_cont_bytes @ 14f3a6fa0

bool __cdecl oo2::all_cont_bytes(uchar *param_1,uchar *param_2)

{
  uchar uVar1;
  
  do {
    if (param_2 <= param_1) {
      return true;
    }
    uVar1 = *param_1;
    param_1 = param_1 + 1;
  } while ((byte)(uVar1 + 0x80) < 0x40);
  return false;
}

// histo_to_codecost @ 14f3a6fc0

void __cdecl oo2::histo_to_codecost(uint *param_1,int *param_2,int param_3,int param_4,int param_5)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int *piVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  
  uVar13 = 0;
  uVar15 = (ulonglong)param_3;
  uVar9 = uVar15 & 0x3fffffffffffffff;
  if (param_1 + uVar15 < param_1) {
    uVar9 = uVar13;
  }
  puVar5 = param_1;
  uVar11 = uVar13;
  if ((uVar9 != 0) && (uVar11 = 0, 7 < uVar9)) {
    iVar21 = 0;
    iVar22 = 0;
    iVar23 = 0;
    iVar24 = 0;
    iVar17 = 0;
    iVar18 = 0;
    iVar19 = 0;
    iVar20 = 0;
    uVar11 = uVar13;
    do {
      uVar11 = uVar11 + 8;
      iVar21 = iVar21 + *puVar5;
      iVar22 = iVar22 + puVar5[1];
      iVar23 = iVar23 + puVar5[2];
      iVar24 = iVar24 + puVar5[3];
      puVar1 = puVar5 + 4;
      puVar2 = puVar5 + 5;
      puVar3 = puVar5 + 6;
      puVar4 = puVar5 + 7;
      puVar5 = puVar5 + 8;
      iVar17 = iVar17 + *puVar1;
      iVar18 = iVar18 + *puVar2;
      iVar19 = iVar19 + *puVar3;
      iVar20 = iVar20 + *puVar4;
    } while (uVar11 != (uVar9 & 0xfffffffffffffff8));
    uVar11 = (ulonglong)
             (uint)(iVar17 + iVar21 + iVar19 + iVar23 + iVar18 + iVar22 + iVar20 + iVar24);
  }
  uVar14 = (uint)uVar11;
  for (; puVar5 != param_1 + uVar15; puVar5 = puVar5 + 1) {
    uVar14 = (int)uVar11 + *puVar5;
    uVar11 = (ulonglong)uVar14;
  }
  uVar16 = param_3 + uVar14 * 4;
  iVar17 = log2tabled_bk_32(uVar16);
  uVar9 = uVar13 & 0xffffffff;
  uVar14 = (uint)uVar13;
  if (0 < param_3) {
    uVar13 = uVar15;
    piVar6 = param_2;
    do {
      uVar14 = *(int *)(((longlong)param_1 - (longlong)param_2) + (longlong)piVar6) * 4 + 1;
      if (uVar14 < 0x20) {
        iVar18 = c_log2tabled_bk_32[uVar14];
      }
      else {
        iVar18 = 0x1f;
        if (uVar14 != 0) {
          for (; uVar14 >> iVar18 == 0; iVar18 = iVar18 + -1) {
          }
        }
        uVar10 = uVar14 << (0x20U - (char)iVar18 & 0x1f);
        uVar8 = uVar10 >> 0x1a;
        iVar18 = ((0x20 - iVar18) * 0x2000 -
                 (int)((ulonglong)((uint)c_log2table_bk[uVar8 + 1] - (uint)c_log2table_bk[uVar8]) *
                       (ulonglong)(uVar10 << 6) + 0x9fffffff >> 0x20)) - (uint)c_log2table_bk[uVar8]
        ;
      }
      iVar18 = (iVar18 - iVar17) * 0x20 >> 0xd;
      uVar14 = (int)uVar9 + iVar18 * uVar14;
      uVar9 = (ulonglong)uVar14;
      *piVar6 = iVar18 + param_4;
      piVar6 = piVar6 + 1;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
    uVar13 = 0;
  }
  if ((int)(uVar16 * param_5) < (int)uVar14) {
    uVar9 = uVar13 & 0xffffffff;
    uVar14 = (uint)uVar13;
    if ((0 < param_3) && (0xf < (uint)param_3)) {
      iVar17 = param_4 + 0x100;
      piVar6 = param_2 + 8;
      do {
        piVar6[-8] = iVar17;
        piVar6[-7] = iVar17;
        piVar6[-6] = iVar17;
        piVar6[-5] = iVar17;
        uVar14 = (int)uVar9 + 0x10;
        uVar9 = (ulonglong)uVar14;
        uVar13 = uVar13 + 0x10;
        piVar6[-4] = iVar17;
        piVar6[-3] = iVar17;
        piVar6[-2] = iVar17;
        piVar6[-1] = iVar17;
        *piVar6 = iVar17;
        piVar6[1] = iVar17;
        piVar6[2] = iVar17;
        piVar6[3] = iVar17;
        piVar6[4] = iVar17;
        piVar6[5] = iVar17;
        piVar6[6] = iVar17;
        piVar6[7] = iVar17;
        piVar6 = piVar6 + 0x10;
      } while ((longlong)uVar13 < (longlong)(uVar15 & 0xfffffffffffffff0));
    }
    lVar7 = (longlong)(int)uVar14;
    if (lVar7 < (longlong)uVar15) {
      piVar6 = param_2 + lVar7;
      for (lVar12 = uVar15 - lVar7; lVar12 != 0; lVar12 = lVar12 + -1) {
        *piVar6 = param_4 + 0x100;
        piVar6 = piVar6 + 1;
      }
    }
  }
  return;
}

// is_cont_byte @ 14f3a71f0

bool __cdecl oo2::is_cont_byte(uchar param_1)

{
  return (byte)(param_1 + 0x80) < 0x40;
}

// log2tabled_bk_32 @ 14f3a7200

int __cdecl oo2::log2tabled_bk_32(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 < 0x20) {
    return c_log2tabled_bk_32[param_1];
  }
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  uVar3 = param_1 << ((byte)(0x20 - iVar1) & 0x1f);
  uVar2 = uVar3 >> 0x1a;
  return ((0x20 - iVar1) * 0x2000 -
         (int)((ulonglong)((uint)c_log2table_bk[uVar2 + 1] - (uint)c_log2table_bk[uVar2]) *
               (ulonglong)(uVar3 << 6) + 0x9fffffff >> 0x20)) - (uint)c_log2table_bk[uVar2];
}

// might_be_utf8 @ 14f3a7280

bool __cdecl oo2::might_be_utf8(uchar *param_1,uchar *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  longlong lVar4;
  longlong lVar5;
  
  for (pbVar2 = param_1; (pbVar2 < param_2 && ((byte)(*pbVar2 + 0x80) < 0x40)); pbVar2 = pbVar2 + 1)
  {
  }
  if (3 < (longlong)pbVar2 - (longlong)param_1) {
    return false;
  }
  if (param_2 <= pbVar2) {
    return true;
  }
  lVar4 = (longlong)param_2 - (longlong)pbVar2;
  do {
    bVar1 = *pbVar2;
    pbVar3 = pbVar2 + 1;
    lVar5 = lVar4 + -1;
    if (0x75 < (byte)(bVar1 - 9)) {
      if (0x32 < (byte)(bVar1 + 0x3e)) {
        return false;
      }
      if (bVar1 < 0xe0) {
        if (lVar5 < 1) {
          return true;
        }
        if (0x3f < (byte)(*pbVar3 + 0x80)) {
          return false;
        }
        pbVar3 = pbVar2 + 2;
        lVar5 = lVar4 + -2;
      }
      else if (bVar1 < 0xf0) {
        if (lVar5 < 2) {
          do {
            if (param_2 <= pbVar3) {
              return true;
            }
            bVar1 = *pbVar3;
            pbVar3 = pbVar3 + 1;
          } while ((byte)(bVar1 + 0x80) < 0x40);
          return false;
        }
        if (0x3f < (byte)(*pbVar3 + 0x80)) {
          return false;
        }
        if (0x3f < (byte)(pbVar2[2] + 0x80)) {
          return false;
        }
        pbVar3 = pbVar2 + 3;
        lVar5 = lVar4 + -3;
      }
      else {
        if (lVar5 < 3) {
          do {
            if (param_2 <= pbVar3) {
              return true;
            }
            bVar1 = *pbVar3;
            pbVar3 = pbVar3 + 1;
          } while ((byte)(bVar1 + 0x80) < 0x40);
          return false;
        }
        if (0x3f < (byte)(*pbVar3 + 0x80)) {
          return false;
        }
        if (0x3f < (byte)(pbVar2[2] + 0x80)) {
          return false;
        }
        if (0x3f < (byte)(pbVar2[3] + 0x80)) {
          return false;
        }
        pbVar3 = pbVar2 + 4;
        lVar5 = lVar4 + -4;
      }
    }
    pbVar2 = pbVar3;
    lVar4 = lVar5;
    if (param_2 <= pbVar3) {
      return true;
    }
  } while( true );
}

// newlz_guess_should_hash_length_be_over_four @ 14f3a73c0

int __cdecl oo2::newlz_guess_should_hash_length_be_over_four(void *param_1,long64 param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  longlong lVar5;
  longlong lVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  longlong lVar11;
  
  iVar8 = 0;
  iVar10 = 0;
  if (param_2 < 0x400) {
    return 0;
  }
  lVar11 = 0x20;
  pbVar7 = param_1;
LAB_14f3a7430:
  pbVar9 = (byte *)param_2;
  if ((longlong)(pbVar7 + (0x20 - (longlong)param_1)) < param_2) {
    pbVar9 = pbVar7 + (0x20 - (longlong)param_1);
  }
  pbVar9 = pbVar9 + (longlong)param_1;
  for (pbVar3 = pbVar7; (pbVar3 < pbVar9 && ((byte)(*pbVar3 + 0x80) < 0x40)); pbVar3 = pbVar3 + 1) {
  }
  iVar2 = iVar10;
  if ((longlong)pbVar3 - (longlong)pbVar7 < 4) {
    if (pbVar3 < pbVar9) {
      lVar5 = (longlong)pbVar9 - (longlong)pbVar3;
      do {
        bVar1 = *pbVar3;
        pbVar4 = pbVar3 + 1;
        lVar6 = lVar5 + -1;
        if (0x75 < (byte)(bVar1 - 9)) {
          if (0x32 < (byte)(bVar1 + 0x3e)) goto LAB_14f3a75bc;
          if (bVar1 < 0xe0) {
            if (lVar6 < 1) break;
            if (0x3f < (byte)(*pbVar4 + 0x80)) goto LAB_14f3a75bc;
            pbVar4 = pbVar3 + 2;
            lVar6 = lVar5 + -2;
          }
          else if (bVar1 < 0xf0) {
            if (lVar6 < 2) goto joined_r0x00014f3a7563;
            if ((0x3f < (byte)(*pbVar4 + 0x80)) || (0x3f < (byte)(pbVar3[2] + 0x80)))
            goto LAB_14f3a75bc;
            pbVar4 = pbVar3 + 3;
            lVar6 = lVar5 + -3;
          }
          else {
            if (lVar6 < 3) goto joined_r0x00014f3a7593;
            if (((0x3f < (byte)(*pbVar4 + 0x80)) || (0x3f < (byte)(pbVar3[2] + 0x80))) ||
               (0x3f < (byte)(pbVar3[3] + 0x80))) goto LAB_14f3a75bc;
            pbVar4 = pbVar3 + 4;
            lVar6 = lVar5 + -4;
          }
        }
        pbVar3 = pbVar4;
        lVar5 = lVar6;
      } while (pbVar4 < pbVar9);
    }
LAB_14f3a75b7:
    iVar2 = 1;
  }
  goto LAB_14f3a75bc;
  while (bVar1 = *pbVar4, pbVar4 = pbVar4 + 1, (byte)(bVar1 + 0x80) < 0x40) {
joined_r0x00014f3a7593:
    if (pbVar9 <= pbVar4) goto LAB_14f3a75b7;
  }
  goto LAB_14f3a75bc;
  while (bVar1 = *pbVar4, pbVar4 = pbVar4 + 1, (byte)(bVar1 + 0x80) < 0x40) {
joined_r0x00014f3a7563:
    if (pbVar9 <= pbVar4) goto LAB_14f3a75b7;
  }
LAB_14f3a75bc:
  iVar8 = iVar8 + iVar2;
  pbVar7 = pbVar7 + ((longlong)(param_2 + (ulonglong)((uint)(param_2 >> 0x3f) & 0x1f)) >> 5);
  lVar11 = lVar11 + -1;
  if (lVar11 == 0) {
    return (int)(0xd < iVar8);
  }
  goto LAB_14f3a7430;
}

// newlz_guess_should_hash_length_be_over_four_by_utf8_detector @ 14f3a73e0

int __cdecl
oo2::newlz_guess_should_hash_length_be_over_four_by_utf8_detector(void *param_1,long64 param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  longlong lVar5;
  longlong lVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  longlong lVar11;
  
  iVar8 = 0;
  iVar10 = 0;
  if (param_2 < 0x400) {
    return 0;
  }
  lVar11 = 0x20;
  pbVar7 = param_1;
LAB_14f3a7430:
  pbVar9 = (byte *)param_2;
  if ((longlong)(pbVar7 + (0x20 - (longlong)param_1)) < param_2) {
    pbVar9 = pbVar7 + (0x20 - (longlong)param_1);
  }
  pbVar9 = pbVar9 + (longlong)param_1;
  for (pbVar3 = pbVar7; (pbVar3 < pbVar9 && ((byte)(*pbVar3 + 0x80) < 0x40)); pbVar3 = pbVar3 + 1) {
  }
  iVar2 = iVar10;
  if ((longlong)pbVar3 - (longlong)pbVar7 < 4) {
    if (pbVar3 < pbVar9) {
      lVar5 = (longlong)pbVar9 - (longlong)pbVar3;
      do {
        bVar1 = *pbVar3;
        pbVar4 = pbVar3 + 1;
        lVar6 = lVar5 + -1;
        if (0x75 < (byte)(bVar1 - 9)) {
          if (0x32 < (byte)(bVar1 + 0x3e)) goto LAB_14f3a75bc;
          if (bVar1 < 0xe0) {
            if (lVar6 < 1) break;
            if (0x3f < (byte)(*pbVar4 + 0x80)) goto LAB_14f3a75bc;
            pbVar4 = pbVar3 + 2;
            lVar6 = lVar5 + -2;
          }
          else if (bVar1 < 0xf0) {
            if (lVar6 < 2) goto joined_r0x00014f3a7563;
            if ((0x3f < (byte)(*pbVar4 + 0x80)) || (0x3f < (byte)(pbVar3[2] + 0x80)))
            goto LAB_14f3a75bc;
            pbVar4 = pbVar3 + 3;
            lVar6 = lVar5 + -3;
          }
          else {
            if (lVar6 < 3) goto joined_r0x00014f3a7593;
            if (((0x3f < (byte)(*pbVar4 + 0x80)) || (0x3f < (byte)(pbVar3[2] + 0x80))) ||
               (0x3f < (byte)(pbVar3[3] + 0x80))) goto LAB_14f3a75bc;
            pbVar4 = pbVar3 + 4;
            lVar6 = lVar5 + -4;
          }
        }
        pbVar3 = pbVar4;
        lVar5 = lVar6;
      } while (pbVar4 < pbVar9);
    }
LAB_14f3a75b7:
    iVar2 = 1;
  }
  goto LAB_14f3a75bc;
  while (bVar1 = *pbVar4, pbVar4 = pbVar4 + 1, (byte)(bVar1 + 0x80) < 0x40) {
joined_r0x00014f3a7593:
    if (pbVar9 <= pbVar4) goto LAB_14f3a75b7;
  }
  goto LAB_14f3a75bc;
  while (bVar1 = *pbVar4, pbVar4 = pbVar4 + 1, (byte)(bVar1 + 0x80) < 0x40) {
joined_r0x00014f3a7563:
    if (pbVar9 <= pbVar4) goto LAB_14f3a75b7;
  }
LAB_14f3a75bc:
  iVar8 = iVar8 + iVar2;
  pbVar7 = pbVar7 + ((longlong)(param_2 + (ulonglong)((uint)(param_2 >> 0x3f) & 0x1f)) >> 5);
  lVar11 = lVar11 + -1;
  if (lVar11 == 0) {
    return (int)(0xd < iVar8);
  }
  goto LAB_14f3a7430;
}

// rrClz32 @ 14f3a7610

uint __cdecl oo2::rrClz32(uint param_1)

{
  int iVar1;
  
  iVar1 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar1 == 0; iVar1 = iVar1 + -1) {
    }
  }
  return 0x1f - iVar1;
}


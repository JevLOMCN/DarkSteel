// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __common_dpow_cout_rare @ 1501694a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __common_dpow_cout_rare(void)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ushort uVar6;
  byte bVar7;
  int iVar8;
  double *in_RCX;
  ulonglong uVar9;
  uint uVar10;
  double *in_RDX;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  double *in_R8;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  uint uStack_ac;
  uint uStack_a4;
  uint local_a0;
  byte bStack_99;
  undefined8 local_98;
  int local_90;
  undefined4 uStack_8c;
  
  dVar25 = (double)CONCAT26(DAT_156214ba8._6_2_,(undefined6)DAT_156214ba8);
  dVar18 = *in_RCX * dVar25;
  dVar20 = *in_RDX * dVar25;
  local_c8._6_2_ = (ushort)((ulonglong)dVar18 >> 0x30);
  uStack_8c._2_2_ = (ushort)((ulonglong)dVar20 >> 0x30);
  uVar10 = (uint)uStack_8c._2_2_;
  uStack_8c._3_1_ = (byte)((ulonglong)dVar20 >> 0x38);
  bVar7 = uStack_8c._3_1_;
  uVar16 = (local_c8._6_2_ & 0x7ff0) >> 4;
  uVar10 = (uVar10 & 0x7ff0) >> 4;
  uVar15 = (uint)(byte)((ulonglong)dVar18 >> 0x3f);
  if ((((ulonglong)dVar18 & 0xfffff00000000) == 0) &&
     (local_c8._0_4_ = SUB84(dVar18,0), (int)local_c8 == 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  uStack_8c = (uint)((ulonglong)dVar20 >> 0x20);
  local_90 = SUB84(dVar20,0);
  if ((((ulonglong)dVar20 & 0xfffff00000000) == 0) && (local_90 == 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  bVar17 = uVar10 != 0x7ff;
  uVar13 = uVar10 << 0x14 | uStack_8c & 0xfffff;
  if (local_90 == 0 && uVar13 == 0) {
    uVar13 = 2;
LAB_150169603:
    if (((longlong)dVar18 < 0) || (uVar16 != 0x3ff)) {
      if ((((ulonglong)dVar20 & 0x7ff0000000000000) != 0) || (!bVar3)) goto LAB_150169622;
    }
    else if ((!bVar4) && ((((ulonglong)dVar20 & 0x7ff0000000000000) != 0 || (!bVar3))))
    goto LAB_15016962b;
LAB_1501699d9:
    bStack_99 = (byte)((ulonglong)(dVar18 + dVar20) >> 0x38);
    local_98._7_1_ = (byte)(DAT_156214ba8._6_2_ >> 8);
    local_98 = (double)CONCAT17(local_98._7_1_ & 0x7f | bStack_99 & 0x80,
                                (int7)CONCAT26(DAT_156214ba8._6_2_,(undefined6)DAT_156214ba8));
    dVar18 = local_98 * local_98;
    goto LAB_150169a13;
  }
  iVar8 = uVar10 - 0x3ff;
  if ((uVar10 < 0x3ff) || (!bVar17)) {
    uVar13 = 0;
    goto LAB_150169603;
  }
  if (iVar8 < 0x15) {
    if ((uVar13 << ((byte)iVar8 & 0x1f) & 0xfffff) == 0 && local_90 == 0) {
      uVar13 = 1 - ((int)~(uVar13 << ((char)uVar10 + 0xcU & 0x1f)) >> 0x1f);
    }
    else {
LAB_1501695ae:
      uVar13 = 0;
    }
  }
  else if (iVar8 < 0x35) {
    uVar13 = local_90 << ((char)uVar10 + 0xcU & 0x1f);
    if ((uVar13 & 0x7fffffff) != 0) goto LAB_1501695ae;
    uVar13 = 1 - ((int)~uVar13 >> 0x1f);
  }
  else {
    uVar13 = 2;
  }
  if (((longlong)dVar18 < 0) || (uVar16 != 0x3ff)) {
LAB_150169622:
    if (uVar16 != 0x7ff) goto LAB_15016962b;
    bVar5 = false;
  }
  else {
    if (bVar4) goto LAB_1501699d9;
LAB_15016962b:
    bVar5 = true;
  }
  if ((bVar4 || bVar5) && (bVar3 || bVar17)) {
    if (dVar18 == DAT_156214ba0) {
      if ((longlong)dVar20 < 0) {
        dVar18 = (double)(&DAT_156214ba8)[uVar13 & uVar15] / (dVar18 * dVar18);
      }
      else {
        dVar18 = (double)(&DAT_156214ba8)[uVar13 & uVar15] * dVar18 * dVar18;
      }
    }
    else if ((dVar18 != _DAT_156214bb0) || ((uVar13 == 0 && (bVar17)))) {
      if ((bVar5) && (bVar17)) {
        if ((DAT_156214ba0 < dVar18) || (uVar13 != 0)) {
          local_c8 = ABS(dVar18);
          dVar1 = (double)(&DAT_156214ba8)[uVar13 & uVar15];
          iVar8 = 0;
          if (((ulonglong)dVar18 & 0x7ff0000000000000) == 0) {
            iVar8 = -200;
            local_c8 = local_c8 * _DAT_156214bd0;
          }
          local_b8._6_2_ = (ushort)((ulonglong)local_c8 >> 0x30);
          uVar6 = local_b8._6_2_;
          local_b8 = (double)CONCAT26((local_b8._6_2_ & 0x800f) + 0x3ff0,SUB86(local_c8,0));
          uVar16 = (local_b8._4_4_ & 0xfc000) + 0x4000 >> 0xf;
          uVar11 = (ulonglong)(uVar16 * 2);
          dVar18 = *(double *)(&_vmldPowHATab + (ulonglong)uVar16 * 2) * local_b8;
          uStack_ac = (uint)((ulonglong)dVar18 >> 0x20);
          uVar15 = (uStack_ac & 0xfc00) + 0x400 >> 0xb;
          dVar18 = dVar18 * *(double *)(&DAT_156213418 + (ulonglong)uVar15 * 8);
          uVar9 = (ulonglong)(uVar15 * 2);
          uStack_a4 = (uint)((ulonglong)dVar18 >> 0x20);
          uVar13 = (uStack_a4 & 0xff0) + 0x10 >> 5;
          uVar14 = (ulonglong)(uVar13 * 2);
          dVar18 = dVar18 * *(double *)(&DAT_156213730 + (ulonglong)uVar13 * 8);
          dVar22 = *(double *)(&_vmldPowHATab + (ulonglong)uVar16 * 2) *
                   *(double *)(&DAT_156213418 + (ulonglong)uVar15 * 8) *
                   *(double *)(&DAT_156213730 + (ulonglong)uVar13 * 8);
          dVar19 = dVar18 - _DAT_156214bc0;
          dVar23 = (double)(((int)((((uVar6 & 0x7ff0) >> 4) << 0x14 | local_c8._4_4_ & 0xfffff) +
                                  0xc0184000) >> 0x14) + iVar8) +
                   *(double *)(&DAT_156213208 + uVar11 * 8) +
                   *(double *)(&DAT_156213520 + uVar9 * 8) +
                   *(double *)(&DAT_156213b38 + uVar14 * 8);
          dVar21 = DAT_156214bc8 * local_b8 - (DAT_156214bc8 * local_b8 - local_b8);
          dVar2 = DAT_156214bc8 * dVar22 - (DAT_156214bc8 * dVar22 - dVar22);
          dVar26 = dVar23 + dVar19;
          dVar18 = (dVar21 * dVar2 - dVar18) + dVar2 * (local_b8 - dVar21) +
                   dVar21 * (dVar22 - dVar2) + (local_b8 - dVar21) * (dVar22 - dVar2);
          local_c0._6_2_ = (ushort)((ulonglong)dVar26 >> 0x30);
          uVar10 = uVar10 + ((local_c0._6_2_ & 0x7ff0) >> 4);
          if (uVar10 < 0x809) {
            if (uVar10 < 0x7c1) {
              dVar18 = dVar1 * (dVar25 + DAT_156214b98);
            }
            else {
              dVar2 = dVar19 + dVar18;
              dVar25 = *(double *)(&DAT_156213528 + uVar9 * 8) +
                       *(double *)(&DAT_156213b40 + uVar14 * 8) +
                       *(double *)(&DAT_156213210 + uVar11 * 8) +
                       dVar18 + (dVar23 - dVar26) + dVar19;
              dVar2 = (((DAT_156214b60 * dVar2 + DAT_156214b58) * dVar2 + DAT_156214b50) * dVar2 +
                      DAT_156214b48) * dVar2;
              dVar21 = dVar26 + dVar2;
              dVar24 = dVar25 + dVar21;
              dVar22 = DAT_156214bc8 * dVar24 - (DAT_156214bc8 * dVar24 - dVar24);
              dVar19 = dVar20 * DAT_156214bc8 - (dVar20 * DAT_156214bc8 - dVar20);
              dVar23 = DAT_156214bb8 + dVar19 * dVar22;
              local_a0 = SUB84(dVar23,0);
              uVar9 = (ulonglong)((local_a0 & 0x7f) * 2);
              dVar18 = *(double *)(&DAT_156214348 + uVar9 * 8);
              iVar12 = (int)local_a0 >> 7;
              dVar25 = ((dVar21 - dVar24) + dVar25 + (dVar26 - dVar21) + dVar2) * dVar20 +
                       (dVar20 - dVar19) * (dVar24 - dVar22) + dVar19 * (dVar24 - dVar22) +
                       dVar22 * (dVar20 - dVar19) + (dVar19 * dVar22 - (dVar23 - DAT_156214bb8));
              dVar25 = ((((DAT_156214b88 * dVar25 + DAT_156214b80) * dVar25 + DAT_156214b78) *
                         dVar25 + DAT_156214b70) * dVar25 + DAT_156214b68) * dVar25 * dVar18 +
                       *(double *)(&DAT_156214350 + uVar9 * 8);
              dVar20 = dVar25 + dVar18;
              local_c8._6_2_ = (ushort)((ulonglong)dVar20 >> 0x30);
              iVar8 = (((local_c8._6_2_ & 0x7ff0) >> 4) - 0x3ff) + iVar12;
              if (iVar8 < 0x400) {
                if (iVar8 < -0x3fe) {
                  if (iVar8 < -0x408) {
                    if (iVar8 < -0x43c) {
                      dVar18 = dVar1 * DAT_156214b98 * DAT_156214b98;
                    }
                    else {
                      local_c0 = (double)CONCAT26(DAT_156214ba8._6_2_ & 0x800f |
                                                  (ushort)((iVar12 + 0x4c7U & 0x7ff) << 4),
                                                  (undefined6)DAT_156214ba8);
                      dVar18 = dVar1 * DAT_156214bd8 * dVar20 * local_c0 +
                               DAT_156214b98 * DAT_156214b98;
                    }
                  }
                  else {
                    dVar26 = DAT_156214bc8 * dVar20 - (DAT_156214bc8 * dVar20 - dVar20);
                    local_c0 = (double)CONCAT26(DAT_156214ba8._6_2_ & 0x800f |
                                                (ushort)((iVar12 + 0x4c7U & 0x7ff) << 4),
                                                (undefined6)DAT_156214ba8);
                    dVar18 = dVar1 * DAT_156214bd8 *
                             (dVar26 * local_c0 +
                             ((dVar18 - dVar20) + dVar25 + (dVar20 - dVar26)) * local_c0) +
                             DAT_156214b98 * DAT_156214b98;
                  }
                }
                else {
                  local_c8 = (double)CONCAT26(local_c8._6_2_ & 0x800f |
                                              (ushort)((iVar8 + 0x3ffU & 0x7ff) << 4),
                                              SUB86(dVar20,0));
                  dVar18 = dVar1 * local_c8;
                }
              }
              else {
                dVar18 = dVar1 * DAT_156214b90 * DAT_156214b90;
              }
            }
          }
          else {
            local_c0._7_1_ = (byte)((ulonglong)dVar26 >> 0x38);
            dVar18 = (&DAT_156214b90)[(byte)((bVar7 ^ local_c0._7_1_) >> 7)] *
                     (&DAT_156214b90)[(byte)((bVar7 ^ local_c0._7_1_) >> 7)] * dVar1;
          }
        }
        else {
          dVar18 = DAT_156214ba0 / DAT_156214ba0;
        }
      }
      else if (uVar16 < 0x3ff) {
        dVar18 = DAT_156214ba0;
        if ((longlong)dVar20 < 0) {
          dVar18 = dVar20 * dVar20;
        }
      }
      else if ((longlong)dVar20 < 0) {
        dVar18 = DAT_156214ba0 * (double)(&DAT_156214ba8)[uVar13 & uVar15];
      }
      else {
        dVar18 = dVar18 * dVar18 * dVar20 * (double)(&DAT_156214ba8)[uVar13 & uVar15];
      }
    }
    else {
      dVar18 = (double)(&DAT_156214ba8)[uVar13 & 1];
    }
  }
  else {
    dVar18 = dVar18 + dVar20;
  }
LAB_150169a13:
  *in_R8 = dVar18;
  return;
}


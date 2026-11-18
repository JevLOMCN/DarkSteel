// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 10

// FUN_14087ecc0 @ 14087ecc0

/* WARNING: Removing unreachable block (ram,0x00014087ecf5) */
/* WARNING: Removing unreachable block (ram,0x00014087ecde) */
/* WARNING: Removing unreachable block (ram,0x00014087eccc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14087ecc0(void)

{
  longlong lVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  int iVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  uint in_XCR0;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  
  lVar1 = cpuid_Version_info(1);
  uVar6 = *(uint *)(lVar1 + 0xc);
  uVar13 = 0;
  piVar2 = (int *)cpuid_Extended_Feature_Enumeration_info(7);
  uVar4 = piVar2[1];
  uVar5 = piVar2[2];
  uVar7 = piVar2[3];
  if (0 < *piVar2) {
    puVar3 = (uint *)cpuid_Extended_Feature_Enumeration_info(7);
    uVar13 = *puVar3;
  }
  if ((((uVar6 & 0x8000000) != 0) && ((uVar4 & 0x10020) == 0x10020)) &&
     (uVar8 = xinuse(0), (~(in_XCR0 & (uint)uVar8) & 0xe6) == 0)) {
    bVar14 = (~uVar4 & 0x10020000) == 0;
    auVar16._0_4_ = -(uint)((uVar7 & ___xmm_00000200000001000000004000000800) == 0);
    auVar16._4_4_ = -(uint)((uVar7 & _UNK_150aa8f74) == 0);
    auVar16._8_4_ = -(uint)((uVar7 & _UNK_150aa8f78) == 0);
    auVar16._12_4_ = -(uint)((uVar7 & _UNK_150aa8f7c) == 0);
    iVar12 = movmskps(~uVar7,auVar16);
    bVar10 = ((~uVar7 & 0x5000) == 0 && (0xbfffffff < uVar4 && bVar14)) & (byte)(uVar7 >> 10) &
             iVar12 == 0;
    iVar11 = bVar10 + 7;
    iVar12 = 9;
    if ((uVar13 & 0x10) == 0) {
      iVar12 = iVar11;
    }
    if (bVar10 == 0) {
      iVar12 = iVar11;
    }
    auVar15._0_4_ = -(uint)((uVar13 & ___xmm_02000000010000000040000000000020) == 0);
    auVar15._4_4_ = -(uint)((uVar5 & _UNK_150aa8f84) == 0);
    auVar15._8_4_ = -(uint)((uVar5 & _UNK_150aa8f88) == 0);
    auVar15._12_4_ = -(uint)((uVar5 & _UNK_150aa8f8c) == 0);
    if ((uVar5 & 0x800000) == 0) {
      iVar12 = iVar11;
    }
    iVar9 = movmskps((uint)bVar10,auVar15);
    if (iVar9 != 0) {
      iVar12 = iVar11;
    }
    if (0xbfffffff < uVar4 && bVar14) {
      return iVar12;
    }
    if ((uVar4 & 0x1c000000) == 0x1c000000) {
      return 6;
    }
  }
  if (((~uVar6 & 0x18000000) == 0) && (uVar8 = xinuse(0), (~(in_XCR0 & (uint)uVar8) & 6) == 0)) {
    iVar12 = 5;
    if ((uVar13 & 0x10) == 0) {
      iVar12 = 4 - (uint)((~uVar6 & 0x60000000) != 0 || (uVar4 & 0x20) == 0);
    }
  }
  else {
    iVar12 = 2 - (uint)((uVar6 & 0x100000) == 0);
    if ((uVar6 & 0x180000) == 0) {
      iVar12 = 0;
    }
    if ((uVar6 & 0x180000) == 0 && (*(uint *)(lVar1 + 8) & 0x4000000) == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return iVar12;
}

// FUN_14087ee60 @ 14087ee60

void FUN_14087ee60(void)

{
  if (DAT_154bb37cc != -1) {
    return;
  }
  DAT_154bb37cc = FUN_14087ecc0();
  return;
}

// ApplyXPBDBendingConstraints @ 14087ee90

void ApplyXPBDBendingConstraints
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  FUN_14087ee60();
  if (DAT_154bb37cc < 7) {
    if (DAT_154bb37cc < 4) {
      if (DAT_154bb37cc < 3) {
        if (DAT_154bb37cc < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyXPBDBendingConstraints_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12);
      }
      else {
        ApplyXPBDBendingConstraints_avx
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12);
      }
    }
    else {
      ApplyXPBDBendingConstraints_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12);
    }
  }
  else {
    ApplyXPBDBendingConstraints_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12);
  }
  return;
}

// ApplyXPBDBendingConstraintsWithDamping @ 14087f060

void ApplyXPBDBendingConstraintsWithDamping
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
               undefined4 param_17)

{
  FUN_14087ee60();
  if (DAT_154bb37cc < 7) {
    if (DAT_154bb37cc < 4) {
      if (DAT_154bb37cc < 3) {
        if (DAT_154bb37cc < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyXPBDBendingConstraintsWithDamping_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13,param_14,param_15,param_16,param_17);
      }
      else {
        ApplyXPBDBendingConstraintsWithDamping_avx
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13,param_14,param_15,param_16,param_17);
      }
    }
    else {
      ApplyXPBDBendingConstraintsWithDamping_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12,param_13,param_14,param_15,param_16,param_17);
    }
  }
  else {
    ApplyXPBDBendingConstraintsWithDamping_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14,param_15,param_16,param_17);
  }
  return;
}

// ApplyXPBDBendingConstraintsWithDampingAndMaps @ 14087f320

void ApplyXPBDBendingConstraintsWithDampingAndMaps
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               undefined4 param_13,undefined1 param_14,undefined8 param_15,undefined8 param_16,
               undefined1 param_17,undefined8 param_18,undefined8 param_19,undefined1 param_20,
               undefined8 param_21,undefined8 param_22,undefined4 param_23)

{
  FUN_14087ee60();
  if (DAT_154bb37cc < 7) {
    if (DAT_154bb37cc < 4) {
      if (DAT_154bb37cc < 3) {
        if (DAT_154bb37cc < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyXPBDBendingConstraintsWithDampingAndMaps_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
                   param_20,param_21,param_22,param_23);
      }
      else {
        ApplyXPBDBendingConstraintsWithDampingAndMaps_avx();
      }
    }
    else {
      ApplyXPBDBendingConstraintsWithDampingAndMaps_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
                 param_20,param_21,param_22,param_23);
    }
  }
  else {
    ApplyXPBDBendingConstraintsWithDampingAndMaps_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
               param_20,param_21,param_22,param_23);
  }
  return;
}

// ApplyXPBDBendingConstraintsWithMaps @ 14087f790

void ApplyXPBDBendingConstraintsWithMaps
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined4 param_9,undefined1 param_10,undefined8 param_11,undefined8 param_12,
               undefined1 param_13,undefined8 param_14,undefined8 param_15,undefined4 param_16)

{
  FUN_14087ee60();
  if (DAT_154bb37cc < 7) {
    if (DAT_154bb37cc < 4) {
      if (DAT_154bb37cc < 3) {
        if (DAT_154bb37cc < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyXPBDBendingConstraintsWithMaps_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13,param_14,param_15,param_16);
      }
      else {
        ApplyXPBDBendingConstraintsWithMaps_avx();
      }
    }
    else {
      ApplyXPBDBendingConstraintsWithMaps_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12,param_13,param_14,param_15,param_16);
    }
  }
  else {
    ApplyXPBDBendingConstraintsWithMaps_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14,param_15,param_16);
  }
  return;
}

// ApplyXPBDBendingDampingConstraints @ 14087f9e0

void ApplyXPBDBendingDampingConstraints
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
               undefined4 param_17)

{
  FUN_14087ee60();
  if (DAT_154bb37cc < 7) {
    if (DAT_154bb37cc < 4) {
      if (DAT_154bb37cc < 3) {
        if (DAT_154bb37cc < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyXPBDBendingDampingConstraints_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13,param_14,param_15,param_16,param_17);
      }
      else {
        ApplyXPBDBendingDampingConstraints_avx
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13,param_14,param_15,param_16,param_17);
      }
    }
    else {
      ApplyXPBDBendingDampingConstraints_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12,param_13,param_14,param_15,param_16,param_17);
    }
  }
  else {
    ApplyXPBDBendingDampingConstraints_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14,param_15,param_16,param_17);
  }
  return;
}

// ApplyXPBDBendingDampingConstraintsWithMaps @ 14087fca0

void ApplyXPBDBendingDampingConstraintsWithMaps
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               undefined4 param_13,undefined1 param_14,undefined8 param_15,undefined8 param_16,
               undefined1 param_17,undefined8 param_18,undefined8 param_19,undefined1 param_20,
               undefined8 param_21,undefined8 param_22,undefined4 param_23)

{
  FUN_14087ee60();
  if (DAT_154bb37cc < 7) {
    if (DAT_154bb37cc < 4) {
      if (DAT_154bb37cc < 3) {
        if (DAT_154bb37cc < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyXPBDBendingDampingConstraintsWithMaps_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
                   param_20,param_21,param_22,param_23);
      }
      else {
        ApplyXPBDBendingDampingConstraintsWithMaps_avx();
      }
    }
    else {
      ApplyXPBDBendingDampingConstraintsWithMaps_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
                 param_20,param_21,param_22,param_23);
    }
  }
  else {
    ApplyXPBDBendingDampingConstraintsWithMaps_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
               param_20,param_21,param_22,param_23);
  }
  return;
}

// InitXPBDBendingConstraintsIsBuckled @ 140880110

void InitXPBDBendingConstraintsIsBuckled
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
               undefined4 param_13)

{
  FUN_14087ee60();
  if (DAT_154bb37cc < 7) {
    if (DAT_154bb37cc < 4) {
      if (DAT_154bb37cc < 3) {
        if (DAT_154bb37cc < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        InitXPBDBendingConstraintsIsBuckled_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13);
      }
      else {
        InitXPBDBendingConstraintsIsBuckled_avx
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13);
      }
    }
    else {
      InitXPBDBendingConstraintsIsBuckled_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12,param_13);
    }
  }
  else {
    InitXPBDBendingConstraintsIsBuckled_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13);
  }
  return;
}

// InitXPBDBendingConstraintsIsBuckledWithMaps @ 1408802e0

void InitXPBDBendingConstraintsIsBuckledWithMaps
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13,undefined4 param_14)

{
  FUN_14087ee60();
  if (DAT_154bb37cc < 7) {
    if (DAT_154bb37cc < 4) {
      if (DAT_154bb37cc < 3) {
        if (DAT_154bb37cc < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        InitXPBDBendingConstraintsIsBuckledWithMaps_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13,param_14);
      }
      else {
        InitXPBDBendingConstraintsIsBuckledWithMaps_avx();
      }
    }
    else {
      InitXPBDBendingConstraintsIsBuckledWithMaps_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12,param_13,param_14);
    }
  }
  else {
    InitXPBDBendingConstraintsIsBuckledWithMaps_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14);
  }
  return;
}


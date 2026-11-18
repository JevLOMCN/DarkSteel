// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 8

// FUN_1406fa220 @ 1406fa220

/* WARNING: Removing unreachable block (ram,0x0001406fa255) */
/* WARNING: Removing unreachable block (ram,0x0001406fa23e) */
/* WARNING: Removing unreachable block (ram,0x0001406fa22c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1406fa220(void)

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

// FUN_1406fa3c0 @ 1406fa3c0

void FUN_1406fa3c0(void)

{
  if (DAT_154bb37c4 != -1) {
    return;
  }
  DAT_154bb37c4 = FUN_1406fa220();
  return;
}

// ApplyXPBDAnisotropicBendingConstraints @ 1406fa3f0

void ApplyXPBDAnisotropicBendingConstraints
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
               undefined4 param_13)

{
  FUN_1406fa3c0();
  if (DAT_154bb37c4 < 7) {
    if (DAT_154bb37c4 < 4) {
      if (DAT_154bb37c4 < 3) {
        if (DAT_154bb37c4 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyXPBDAnisotropicBendingConstraints_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13);
      }
      else {
        ApplyXPBDAnisotropicBendingConstraints_avx
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13);
      }
    }
    else {
      ApplyXPBDAnisotropicBendingConstraints_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12,param_13);
    }
  }
  else {
    ApplyXPBDAnisotropicBendingConstraints_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13);
  }
  return;
}

// ApplyXPBDAnisotropicBendingConstraintsWithDamping @ 1406fa5c0

void ApplyXPBDAnisotropicBendingConstraintsWithDamping
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
               undefined4 param_17,undefined4 param_18)

{
  FUN_1406fa3c0();
  if (DAT_154bb37c4 < 7) {
    if (DAT_154bb37c4 < 4) {
      if (DAT_154bb37c4 < 3) {
        if (DAT_154bb37c4 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyXPBDAnisotropicBendingConstraintsWithDamping_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18);
      }
      else {
        ApplyXPBDAnisotropicBendingConstraintsWithDamping_avx();
      }
    }
    else {
      ApplyXPBDAnisotropicBendingConstraintsWithDamping_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18);
    }
  }
  else {
    ApplyXPBDAnisotropicBendingConstraintsWithDamping_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18);
  }
  return;
}

// ApplyXPBDAnisotropicBendingConstraintsWithDampingAndMaps @ 1406fa8b0

void ApplyXPBDAnisotropicBendingConstraintsWithDampingAndMaps
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13,undefined4 param_14,undefined1 param_15,undefined8 param_16,
               undefined8 param_17,undefined1 param_18,undefined8 param_19,undefined8 param_20,
               undefined1 param_21,undefined8 param_22,undefined8 param_23,undefined1 param_24,
               undefined8 param_25,undefined8 param_26,undefined1 param_27,undefined8 param_28,
               undefined8 param_29,undefined1 param_30,undefined8 param_31,undefined8 param_32,
               undefined1 param_33,undefined8 param_34,undefined8 param_35,undefined4 param_36)

{
  FUN_1406fa3c0();
  if (DAT_154bb37c4 < 7) {
    if (DAT_154bb37c4 < 4) {
      if (DAT_154bb37c4 < 3) {
        if (DAT_154bb37c4 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyXPBDAnisotropicBendingConstraintsWithDampingAndMaps_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
                   param_20,param_21,param_22,param_23,param_24,param_25,param_26,param_27,param_28,
                   param_29,param_30,param_31,param_32,param_33,param_34,param_35,param_36);
      }
      else {
        ApplyXPBDAnisotropicBendingConstraintsWithDampingAndMaps_avx();
      }
    }
    else {
      ApplyXPBDAnisotropicBendingConstraintsWithDampingAndMaps_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
                 param_20,param_21,param_22,param_23,param_24,param_25,param_26,param_27,param_28,
                 param_29,param_30,param_31,param_32,param_33,param_34,param_35,param_36);
    }
  }
  else {
    ApplyXPBDAnisotropicBendingConstraintsWithDampingAndMaps_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
               param_20,param_21,param_22,param_23,param_24,param_25,param_26,param_27,param_28,
               param_29,param_30,param_31,param_32,param_33,param_34,param_35,param_36);
  }
  return;
}

// ApplyXPBDAnisotropicBendingConstraintsWithMaps @ 1406fb070

void ApplyXPBDAnisotropicBendingConstraintsWithMaps
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined4 param_10,undefined1 param_11,undefined8 param_12,
               undefined8 param_13,undefined1 param_14,undefined8 param_15,undefined8 param_16,
               undefined1 param_17,undefined8 param_18,undefined8 param_19,undefined1 param_20,
               undefined8 param_21,undefined8 param_22,undefined1 param_23,undefined8 param_24,
               undefined8 param_25,undefined1 param_26,undefined8 param_27,undefined8 param_28,
               undefined4 param_29)

{
  FUN_1406fa3c0();
  if (DAT_154bb37c4 < 7) {
    if (DAT_154bb37c4 < 4) {
      if (DAT_154bb37c4 < 3) {
        if (DAT_154bb37c4 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyXPBDAnisotropicBendingConstraintsWithMaps_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
                   param_20,param_21,param_22,param_23,param_24,param_25,param_26,param_27,param_28,
                   param_29);
      }
      else {
        ApplyXPBDAnisotropicBendingConstraintsWithMaps_avx();
      }
    }
    else {
      ApplyXPBDAnisotropicBendingConstraintsWithMaps_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
                 param_20,param_21,param_22,param_23,param_24,param_25,param_26,param_27,param_28,
                 param_29);
    }
  }
  else {
    ApplyXPBDAnisotropicBendingConstraintsWithMaps_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
               param_20,param_21,param_22,param_23,param_24,param_25,param_26,param_27,param_28,
               param_29);
  }
  return;
}

// ApplyXPBDAnisotropicBendingDampingConstraints @ 1406fb670

void ApplyXPBDAnisotropicBendingDampingConstraints
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
               undefined4 param_17,undefined4 param_18)

{
  FUN_1406fa3c0();
  if (DAT_154bb37c4 < 7) {
    if (DAT_154bb37c4 < 4) {
      if (DAT_154bb37c4 < 3) {
        if (DAT_154bb37c4 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyXPBDAnisotropicBendingDampingConstraints_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18);
      }
      else {
        ApplyXPBDAnisotropicBendingDampingConstraints_avx();
      }
    }
    else {
      ApplyXPBDAnisotropicBendingDampingConstraints_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18);
    }
  }
  else {
    ApplyXPBDAnisotropicBendingDampingConstraints_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18);
  }
  return;
}

// ApplyXPBDAnisotropicBendingDampingConstraintsWithMaps @ 1406fb960

void ApplyXPBDAnisotropicBendingDampingConstraintsWithMaps
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13,undefined4 param_14,undefined1 param_15,undefined8 param_16,
               undefined8 param_17,undefined1 param_18,undefined8 param_19,undefined8 param_20,
               undefined1 param_21,undefined8 param_22,undefined8 param_23,undefined1 param_24,
               undefined8 param_25,undefined8 param_26,undefined1 param_27,undefined8 param_28,
               undefined8 param_29,undefined1 param_30,undefined8 param_31,undefined8 param_32,
               undefined1 param_33,undefined8 param_34,undefined8 param_35,undefined4 param_36)

{
  FUN_1406fa3c0();
  if (DAT_154bb37c4 < 7) {
    if (DAT_154bb37c4 < 4) {
      if (DAT_154bb37c4 < 3) {
        if (DAT_154bb37c4 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyXPBDAnisotropicBendingDampingConstraintsWithMaps_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
                   param_20,param_21,param_22,param_23,param_24,param_25,param_26,param_27,param_28,
                   param_29,param_30,param_31,param_32,param_33,param_34,param_35,param_36);
      }
      else {
        ApplyXPBDAnisotropicBendingDampingConstraintsWithMaps_avx();
      }
    }
    else {
      ApplyXPBDAnisotropicBendingDampingConstraintsWithMaps_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
                 param_20,param_21,param_22,param_23,param_24,param_25,param_26,param_27,param_28,
                 param_29,param_30,param_31,param_32,param_33,param_34,param_35,param_36);
    }
  }
  else {
    ApplyXPBDAnisotropicBendingDampingConstraintsWithMaps_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
               param_20,param_21,param_22,param_23,param_24,param_25,param_26,param_27,param_28,
               param_29,param_30,param_31,param_32,param_33,param_34,param_35,param_36);
  }
  return;
}


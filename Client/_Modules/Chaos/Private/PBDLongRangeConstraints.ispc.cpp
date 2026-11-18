// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// FUN_1402ff020 @ 1402ff020

/* WARNING: Removing unreachable block (ram,0x0001402ff055) */
/* WARNING: Removing unreachable block (ram,0x0001402ff03e) */
/* WARNING: Removing unreachable block (ram,0x0001402ff02c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1402ff020(void)

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

// FUN_1402ff1c0 @ 1402ff1c0

void FUN_1402ff1c0(void)

{
  if (DAT_154bb37a0 != -1) {
    return;
  }
  DAT_154bb37a0 = FUN_1402ff020();
  return;
}

// ApplyLongRangeConstraints @ 1402ff1f0

void ApplyLongRangeConstraints
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  FUN_1402ff1c0();
  if (DAT_154bb37a0 < 7) {
    if (DAT_154bb37a0 < 4) {
      if (DAT_154bb37a0 < 3) {
        if (DAT_154bb37a0 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyLongRangeConstraints_sse4(param_1,param_2,param_3,param_4,param_5,param_6);
      }
      else {
        ApplyLongRangeConstraints_avx(param_1,param_2,param_3,param_4,param_5,param_6);
      }
    }
    else {
      ApplyLongRangeConstraints_avx2(param_1,param_2,param_3,param_4,param_5,param_6);
    }
  }
  else {
    ApplyLongRangeConstraints_avx512skx(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}

// ApplyLongRangeConstraintsScaleWeightmap @ 1402ff2c0

void ApplyLongRangeConstraintsScaleWeightmap
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_1402ff1c0();
  if (DAT_154bb37a0 < 7) {
    if (DAT_154bb37a0 < 4) {
      if (DAT_154bb37a0 < 3) {
        if (DAT_154bb37a0 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyLongRangeConstraintsScaleWeightmap_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      }
      else {
        ApplyLongRangeConstraintsScaleWeightmap_avx
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      }
    }
    else {
      ApplyLongRangeConstraintsScaleWeightmap_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    }
  }
  else {
    ApplyLongRangeConstraintsScaleWeightmap_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}

// ApplyLongRangeConstraintsStiffnessScaleWeightmaps @ 1402ff3b0

void ApplyLongRangeConstraintsStiffnessScaleWeightmaps
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  FUN_1402ff1c0();
  if (DAT_154bb37a0 < 7) {
    if (DAT_154bb37a0 < 4) {
      if (DAT_154bb37a0 < 3) {
        if (DAT_154bb37a0 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyLongRangeConstraintsStiffnessScaleWeightmaps_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      }
      else {
        ApplyLongRangeConstraintsStiffnessScaleWeightmaps_avx
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      }
    }
    else {
      ApplyLongRangeConstraintsStiffnessScaleWeightmaps_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    }
  }
  else {
    ApplyLongRangeConstraintsStiffnessScaleWeightmaps_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return;
}

// ApplyLongRangeConstraintsStiffnessWeightmap @ 1402ff4c0

void ApplyLongRangeConstraintsStiffnessWeightmap
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_1402ff1c0();
  if (DAT_154bb37a0 < 7) {
    if (DAT_154bb37a0 < 4) {
      if (DAT_154bb37a0 < 3) {
        if (DAT_154bb37a0 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyLongRangeConstraintsStiffnessWeightmap_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      }
      else {
        ApplyLongRangeConstraintsStiffnessWeightmap_avx
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      }
    }
    else {
      ApplyLongRangeConstraintsStiffnessWeightmap_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    }
  }
  else {
    ApplyLongRangeConstraintsStiffnessWeightmap_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}


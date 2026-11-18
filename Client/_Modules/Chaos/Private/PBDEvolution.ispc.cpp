// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// FUN_14013c9c0 @ 14013c9c0

/* WARNING: Removing unreachable block (ram,0x00014013c9f5) */
/* WARNING: Removing unreachable block (ram,0x00014013c9de) */
/* WARNING: Removing unreachable block (ram,0x00014013c9cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14013c9c0(void)

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

// FUN_14013cb60 @ 14013cb60

void FUN_14013cb60(void)

{
  if (DAT_154bb3798 != -1) {
    return;
  }
  DAT_154bb3798 = FUN_14013c9c0();
  return;
}

// PostIterationUpdates @ 14013cb90

void PostIterationUpdates
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6)

{
  FUN_14013cb60();
  if (DAT_154bb3798 < 7) {
    if (DAT_154bb3798 < 4) {
      if (DAT_154bb3798 < 3) {
        if (DAT_154bb3798 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        PostIterationUpdates_sse4(param_1,param_2,param_3,param_4,param_5,param_6);
      }
      else {
        PostIterationUpdates_avx(param_1,param_2,param_3,param_4,param_5,param_6);
      }
    }
    else {
      PostIterationUpdates_avx2(param_1,param_2,param_3,param_4,param_5,param_6);
    }
  }
  else {
    PostIterationUpdates_avx512skx(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}


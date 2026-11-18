// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 14

// FUN_140136bc0 @ 140136bc0

/* WARNING: Removing unreachable block (ram,0x000140136bf5) */
/* WARNING: Removing unreachable block (ram,0x000140136bde) */
/* WARNING: Removing unreachable block (ram,0x000140136bcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140136bc0(void)

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

// FUN_140136d60 @ 140136d60

void FUN_140136d60(void)

{
  if (DAT_154bb3794 != -1) {
    return;
  }
  DAT_154bb3794 = FUN_140136bc0();
  return;
}

// SampleBoxNoNormal @ 140136d90

void SampleBoxNoNormal(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  FUN_140136d60();
  if (DAT_154bb3794 < 7) {
    if (DAT_154bb3794 < 4) {
      if (DAT_154bb3794 < 3) {
        if (DAT_154bb3794 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        SampleBoxNoNormal_sse4(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      }
      else {
        SampleBoxNoNormal_avx(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      }
    }
    else {
      SampleBoxNoNormal_avx2(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    }
  }
  else {
    SampleBoxNoNormal_avx512skx(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return;
}

// SampleBoxNoNormalAll @ 140136ea0

void SampleBoxNoNormalAll
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  FUN_140136d60();
  if (DAT_154bb3794 < 7) {
    if (DAT_154bb3794 < 4) {
      if (DAT_154bb3794 < 3) {
        if (DAT_154bb3794 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        SampleBoxNoNormalAll_sse4(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      }
      else {
        SampleBoxNoNormalAll_avx(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      }
    }
    else {
      SampleBoxNoNormalAll_avx2(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    }
  }
  else {
    SampleBoxNoNormalAll_avx512skx(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}

// SampleBoxNormalAverage @ 140136f90

void SampleBoxNormalAverage
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined4 param_9)

{
  FUN_140136d60();
  if (DAT_154bb3794 < 7) {
    if (DAT_154bb3794 < 4) {
      if (DAT_154bb3794 < 3) {
        if (DAT_154bb3794 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        SampleBoxNormalAverage_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
      }
      else {
        SampleBoxNormalAverage_avx
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
      }
    }
    else {
      SampleBoxNormalAverage_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
    }
  }
  else {
    SampleBoxNormalAverage_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  return;
}

// SampleBoxNormalAverageAll @ 1401370d0

void SampleBoxNormalAverageAll
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  FUN_140136d60();
  if (DAT_154bb3794 < 7) {
    if (DAT_154bb3794 < 4) {
      if (DAT_154bb3794 < 3) {
        if (DAT_154bb3794 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        SampleBoxNormalAverageAll_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      }
      else {
        SampleBoxNormalAverageAll_avx
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      }
    }
    else {
      SampleBoxNormalAverageAll_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    }
  }
  else {
    SampleBoxNormalAverageAll_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return;
}

// SampleLevelSetNoNormal @ 1401371f0

void SampleLevelSetNoNormal
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined4 param_11)

{
  FUN_140136d60();
  if (DAT_154bb3794 < 7) {
    if (DAT_154bb3794 < 4) {
      if (DAT_154bb3794 < 3) {
        if (DAT_154bb3794 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        SampleLevelSetNoNormal_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11);
      }
      else {
        SampleLevelSetNoNormal_avx
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11);
      }
    }
    else {
      SampleLevelSetNoNormal_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11);
    }
  }
  else {
    SampleLevelSetNoNormal_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11);
  }
  return;
}

// SampleLevelSetNoNormalAll @ 140137370

void SampleLevelSetNoNormalAll
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined4 param_10)

{
  FUN_140136d60();
  if (DAT_154bb3794 < 7) {
    if (DAT_154bb3794 < 4) {
      if (DAT_154bb3794 < 3) {
        if (DAT_154bb3794 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        SampleLevelSetNoNormalAll_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10)
        ;
      }
      else {
        SampleLevelSetNoNormalAll_avx
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10)
        ;
      }
    }
    else {
      SampleLevelSetNoNormalAll_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
    }
  }
  else {
    SampleLevelSetNoNormalAll_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  }
  return;
}

// SampleLevelSetNormalAverage @ 1401374d0

void SampleLevelSetNormalAverage
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12)

{
  FUN_140136d60();
  if (DAT_154bb3794 < 7) {
    if (DAT_154bb3794 < 4) {
      if (DAT_154bb3794 < 3) {
        if (DAT_154bb3794 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        SampleLevelSetNormalAverage_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12);
      }
      else {
        SampleLevelSetNormalAverage_avx
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12);
      }
    }
    else {
      SampleLevelSetNormalAverage_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12);
    }
  }
  else {
    SampleLevelSetNormalAverage_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12);
  }
  return;
}

// SampleLevelSetNormalAverageAll @ 140137680

void SampleLevelSetNormalAverageAll
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined4 param_11)

{
  FUN_140136d60();
  if (DAT_154bb3794 < 7) {
    if (DAT_154bb3794 < 4) {
      if (DAT_154bb3794 < 3) {
        if (DAT_154bb3794 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        SampleLevelSetNormalAverageAll_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11);
      }
      else {
        SampleLevelSetNormalAverageAll_avx
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11);
      }
    }
    else {
      SampleLevelSetNormalAverageAll_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11);
    }
  }
  else {
    SampleLevelSetNormalAverageAll_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11);
  }
  return;
}

// SamplePlaneNoNormalAll @ 140137810

void SamplePlaneNoNormalAll
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  FUN_140136d60();
  if (DAT_154bb3794 < 7) {
    if (DAT_154bb3794 < 4) {
      if (DAT_154bb3794 < 3) {
        if (DAT_154bb3794 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        SamplePlaneNoNormalAll_sse4(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      }
      else {
        SamplePlaneNoNormalAll_avx(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      }
    }
    else {
      SamplePlaneNoNormalAll_avx2(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    }
  }
  else {
    SamplePlaneNoNormalAll_avx512skx(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}

// SamplePlaneNormalAverageAll @ 140137900

void SamplePlaneNormalAverageAll
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  FUN_140136d60();
  if (DAT_154bb3794 < 7) {
    if (DAT_154bb3794 < 4) {
      if (DAT_154bb3794 < 3) {
        if (DAT_154bb3794 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        SamplePlaneNormalAverageAll_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      }
      else {
        SamplePlaneNormalAverageAll_avx
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      }
    }
    else {
      SamplePlaneNormalAverageAll_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    }
  }
  else {
    SamplePlaneNormalAverageAll_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return;
}

// SampleSphereNoNormalAll @ 140137a20

void SampleSphereNoNormalAll
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  FUN_140136d60();
  if (DAT_154bb3794 < 7) {
    if (DAT_154bb3794 < 4) {
      if (DAT_154bb3794 < 3) {
        if (DAT_154bb3794 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        SampleSphereNoNormalAll_sse4(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      }
      else {
        SampleSphereNoNormalAll_avx(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      }
    }
    else {
      SampleSphereNoNormalAll_avx2(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    }
  }
  else {
    SampleSphereNoNormalAll_avx512skx(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}

// SampleSphereNormalAverageAll @ 140137b10

void SampleSphereNormalAverageAll
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  FUN_140136d60();
  if (DAT_154bb3794 < 7) {
    if (DAT_154bb3794 < 4) {
      if (DAT_154bb3794 < 3) {
        if (DAT_154bb3794 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        SampleSphereNormalAverageAll_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      }
      else {
        SampleSphereNormalAverageAll_avx
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      }
    }
    else {
      SampleSphereNormalAverageAll_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    }
  }
  else {
    SampleSphereNormalAverageAll_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return;
}


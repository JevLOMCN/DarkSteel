// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 59

// FUN_140a3a540 @ 140a3a540

/* WARNING: Removing unreachable block (ram,0x000140a3a575) */
/* WARNING: Removing unreachable block (ram,0x000140a3a55e) */
/* WARNING: Removing unreachable block (ram,0x000140a3a54c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_140a3a540(void)

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

// FUN_140a3a6e0 @ 140a3a6e0

void FUN_140a3a6e0(void)

{
  if (DAT_154bbe964 != -1) {
    return;
  }
  DAT_154bbe964 = FUN_140a3a540();
  return;
}

// ArrayAPFLongDelayProcess @ 140a3a710

void ArrayAPFLongDelayProcess
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               undefined8 param_5,undefined4 param_6)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayAPFLongDelayProcess_sse4(param_1,param_2,param_3,param_4,param_5,param_6);
      }
      else {
        ArrayAPFLongDelayProcess_avx(param_1,param_2,param_3,param_4,param_5,param_6);
      }
    }
    else {
      ArrayAPFLongDelayProcess_avx2(param_1,param_2,param_3,param_4,param_5,param_6);
    }
  }
  else {
    ArrayAPFLongDelayProcess_avx512skx(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}

// ArrayAbs @ 140a3a7f0

void ArrayAbs(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayAbs_sse4(param_1,param_2,param_3);
      }
      else {
        ArrayAbs_avx(param_1,param_2,param_3);
      }
    }
    else {
      ArrayAbs_avx2(param_1,param_2,param_3);
    }
  }
  else {
    ArrayAbs_avx512skx(param_1,param_2,param_3);
  }
  return;
}

// ArrayAbsInPlace @ 140a3a870

void ArrayAbsInPlace(undefined8 param_1,undefined4 param_2)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayAbsInPlace_sse4(param_1,param_2);
      }
      else {
        ArrayAbsInPlace_avx(param_1,param_2);
      }
    }
    else {
      ArrayAbsInPlace_avx2(param_1,param_2);
    }
  }
  else {
    ArrayAbsInPlace_avx512skx(param_1,param_2);
  }
  return;
}

// ArrayAddConstantInplace @ 140a3a8e0

void ArrayAddConstantInplace(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayAddConstantInplace_sse4(param_1,param_2,param_3);
      }
      else {
        ArrayAddConstantInplace_avx(param_1,param_2,param_3);
      }
    }
    else {
      ArrayAddConstantInplace_avx2(param_1,param_2,param_3);
    }
  }
  else {
    ArrayAddConstantInplace_avx512skx(param_1,param_2,param_3);
  }
  return;
}

// ArrayAddInPlace @ 140a3a960

void ArrayAddInPlace(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayAddInPlace_sse4(param_1,param_2,param_3);
      }
      else {
        ArrayAddInPlace_avx(param_1,param_2,param_3);
      }
    }
    else {
      ArrayAddInPlace_avx2(param_1,param_2,param_3);
    }
  }
  else {
    ArrayAddInPlace_avx512skx(param_1,param_2,param_3);
  }
  return;
}

// ArrayClampInPlace @ 140a3a9e0

void ArrayClampInPlace(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayClampInPlace_sse4(param_1,param_2,param_3,param_4);
      }
      else {
        ArrayClampInPlace_avx(param_1,param_2,param_3,param_4);
      }
    }
    else {
      ArrayClampInPlace_avx2(param_1,param_2,param_3,param_4);
    }
  }
  else {
    ArrayClampInPlace_avx512skx(param_1,param_2,param_3,param_4);
  }
  return;
}

// ArrayClampMaxInPlace @ 140a3aa80

void ArrayClampMaxInPlace(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayClampMaxInPlace_sse4(param_1,param_2,param_3);
      }
      else {
        ArrayClampMaxInPlace_avx(param_1,param_2,param_3);
      }
    }
    else {
      ArrayClampMaxInPlace_avx2(param_1,param_2,param_3);
    }
  }
  else {
    ArrayClampMaxInPlace_avx512skx(param_1,param_2,param_3);
  }
  return;
}

// ArrayClampMinInPlace @ 140a3ab10

void ArrayClampMinInPlace(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayClampMinInPlace_sse4(param_1,param_2,param_3);
      }
      else {
        ArrayClampMinInPlace_avx(param_1,param_2,param_3);
      }
    }
    else {
      ArrayClampMinInPlace_avx2(param_1,param_2,param_3);
    }
  }
  else {
    ArrayClampMinInPlace_avx512skx(param_1,param_2,param_3);
  }
  return;
}

// ArrayComplexConjugate @ 140a3aba0

void ArrayComplexConjugate(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayComplexConjugate_sse4(param_1,param_2,param_3);
      }
      else {
        ArrayComplexConjugate_avx(param_1,param_2,param_3);
      }
    }
    else {
      ArrayComplexConjugate_avx2(param_1,param_2,param_3);
    }
  }
  else {
    ArrayComplexConjugate_avx512skx(param_1,param_2,param_3);
  }
  return;
}

// ArrayComplexConjugateInPlace @ 140a3ac20

void ArrayComplexConjugateInPlace(undefined8 param_1,undefined4 param_2)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayComplexConjugateInPlace_sse4(param_1,param_2);
      }
      else {
        ArrayComplexConjugateInPlace_avx(param_1,param_2);
      }
    }
    else {
      ArrayComplexConjugateInPlace_avx2(param_1,param_2);
    }
  }
  else {
    ArrayComplexConjugateInPlace_avx512skx(param_1,param_2);
  }
  return;
}

// ArrayComplexMultiplyAdd @ 140a3ac90

void ArrayComplexMultiplyAdd
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayComplexMultiplyAdd_sse4(param_1,param_2,param_3,param_4);
      }
      else {
        ArrayComplexMultiplyAdd_avx(param_1,param_2,param_3,param_4);
      }
    }
    else {
      ArrayComplexMultiplyAdd_avx2(param_1,param_2,param_3,param_4);
    }
  }
  else {
    ArrayComplexMultiplyAdd_avx512skx(param_1,param_2,param_3,param_4);
  }
  return;
}

// ArrayComplexMultiplyInPlace @ 140a3ad20

void ArrayComplexMultiplyInPlace(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayComplexMultiplyInPlace_sse4(param_1,param_2,param_3);
      }
      else {
        ArrayComplexMultiplyInPlace_avx(param_1,param_2,param_3);
      }
    }
    else {
      ArrayComplexMultiplyInPlace_avx2(param_1,param_2,param_3);
    }
  }
  else {
    ArrayComplexMultiplyInPlace_avx512skx(param_1,param_2,param_3);
  }
  return;
}

// ArrayComplexToPower @ 140a3ada0

void ArrayComplexToPower(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4
                        )

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayComplexToPower_sse4(param_1,param_2,param_3,param_4);
      }
      else {
        ArrayComplexToPower_avx(param_1,param_2,param_3,param_4);
      }
    }
    else {
      ArrayComplexToPower_avx2(param_1,param_2,param_3,param_4);
    }
  }
  else {
    ArrayComplexToPower_avx512skx(param_1,param_2,param_3,param_4);
  }
  return;
}

// ArrayComplexToPowerInterleaved @ 140a3ae30

void ArrayComplexToPowerInterleaved(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayComplexToPowerInterleaved_sse4(param_1,param_2,param_3);
      }
      else {
        ArrayComplexToPowerInterleaved_avx(param_1,param_2,param_3);
      }
    }
    else {
      ArrayComplexToPowerInterleaved_avx2(param_1,param_2,param_3);
    }
  }
  else {
    ArrayComplexToPowerInterleaved_avx512skx(param_1,param_2,param_3);
  }
  return;
}

// ArrayCumulativeSum @ 140a3aeb0

void ArrayCumulativeSum(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayCumulativeSum_sse4(param_1,param_2,param_3);
      }
      else {
        ArrayCumulativeSum_avx(param_1,param_2,param_3);
      }
    }
    else {
      ArrayCumulativeSum_avx2(param_1,param_2,param_3);
    }
  }
  else {
    ArrayCumulativeSum_avx512skx(param_1,param_2,param_3);
  }
  return;
}

// ArrayFade @ 140a3af30

void ArrayFade(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayFade_sse4(param_1,param_2,param_3,param_4);
      }
      else {
        ArrayFade_avx(param_1,param_2,param_3,param_4);
      }
    }
    else {
      ArrayFade_avx2(param_1,param_2,param_3,param_4);
    }
  }
  else {
    ArrayFade_avx512skx(param_1,param_2,param_3,param_4);
  }
  return;
}

// ArrayFade2 @ 140a3afd0

void ArrayFade2(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayFade2_sse4(param_1,param_2,param_3,param_4,param_5);
      }
      else {
        ArrayFade2_avx(param_1,param_2,param_3,param_4,param_5);
      }
    }
    else {
      ArrayFade2_avx2(param_1,param_2,param_3,param_4,param_5);
    }
  }
  else {
    ArrayFade2_avx512skx(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}

// ArrayFloatToPcm16 @ 140a3b090

void ArrayFloatToPcm16(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayFloatToPcm16_sse4(param_1,param_2,param_3);
      }
      else {
        ArrayFloatToPcm16_avx(param_1,param_2,param_3);
      }
    }
    else {
      ArrayFloatToPcm16_avx2(param_1,param_2,param_3);
    }
  }
  else {
    ArrayFloatToPcm16_avx512skx(param_1,param_2,param_3);
  }
  return;
}

// ArrayGetAverageAbsValue @ 140a3b110

void ArrayGetAverageAbsValue(undefined8 param_1,undefined4 param_2)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayGetAverageAbsValue_sse4(param_1,param_2);
      }
      else {
        ArrayGetAverageAbsValue_avx(param_1,param_2);
      }
    }
    else {
      ArrayGetAverageAbsValue_avx2(param_1,param_2);
    }
  }
  else {
    ArrayGetAverageAbsValue_avx512skx(param_1,param_2);
  }
  return;
}

// ArrayGetAverageValue @ 140a3b180

void ArrayGetAverageValue(undefined8 param_1,undefined4 param_2)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayGetAverageValue_sse4(param_1,param_2);
      }
      else {
        ArrayGetAverageValue_avx(param_1,param_2);
      }
    }
    else {
      ArrayGetAverageValue_avx2(param_1,param_2);
    }
  }
  else {
    ArrayGetAverageValue_avx512skx(param_1,param_2);
  }
  return;
}

// ArrayGetEuclideanNorm @ 140a3b1f0

void ArrayGetEuclideanNorm(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayGetEuclideanNorm_sse4(param_1,param_2,param_3);
      }
      else {
        ArrayGetEuclideanNorm_avx(param_1,param_2,param_3);
      }
    }
    else {
      ArrayGetEuclideanNorm_avx2(param_1,param_2,param_3);
    }
  }
  else {
    ArrayGetEuclideanNorm_avx512skx(param_1,param_2,param_3);
  }
  return;
}

// ArrayGetMagnitude @ 140a3b270

void ArrayGetMagnitude(undefined8 param_1,undefined4 param_2)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayGetMagnitude_sse4(param_1,param_2);
      }
      else {
        ArrayGetMagnitude_avx(param_1,param_2);
      }
    }
    else {
      ArrayGetMagnitude_avx2(param_1,param_2);
    }
  }
  else {
    ArrayGetMagnitude_avx512skx(param_1,param_2);
  }
  return;
}

// ArrayLerpAddInPlace @ 140a3b2e0

void ArrayLerpAddInPlace(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4
                        ,undefined4 param_5)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayLerpAddInPlace_sse4(param_1,param_2,param_3,param_4,param_5);
      }
      else {
        ArrayLerpAddInPlace_avx(param_1,param_2,param_3,param_4,param_5);
      }
    }
    else {
      ArrayLerpAddInPlace_avx2(param_1,param_2,param_3,param_4,param_5);
    }
  }
  else {
    ArrayLerpAddInPlace_avx512skx(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}

// ArrayLerpFractionalDelay @ 140a3b3a0

void ArrayLerpFractionalDelay
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6,undefined4 param_7)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayLerpFractionalDelay_sse4(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      }
      else {
        ArrayLerpFractionalDelay_avx(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
      }
    }
    else {
      ArrayLerpFractionalDelay_avx2(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    }
  }
  else {
    ArrayLerpFractionalDelay_avx512skx(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}

// ArrayMagnitudeToDecibelInPlace @ 140a3b4a0

void ArrayMagnitudeToDecibelInPlace(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayMagnitudeToDecibelInPlace_sse4(param_1,param_2,param_3);
      }
      else {
        ArrayMagnitudeToDecibelInPlace_avx(param_1,param_2,param_3);
      }
    }
    else {
      ArrayMagnitudeToDecibelInPlace_avx2(param_1,param_2,param_3);
    }
  }
  else {
    ArrayMagnitudeToDecibelInPlace_avx512skx(param_1,param_2,param_3);
  }
  return;
}

// ArrayMax @ 140a3b530

void ArrayMax(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayMax_sse4(param_1,param_2,param_3,param_4);
      }
      else {
        ArrayMax_avx(param_1,param_2,param_3,param_4);
      }
    }
    else {
      ArrayMax_avx2(param_1,param_2,param_3,param_4);
    }
  }
  else {
    ArrayMax_avx512skx(param_1,param_2,param_3,param_4);
  }
  return;
}

// ArrayMaxAbsValue @ 140a3b5c0

void ArrayMaxAbsValue(undefined8 param_1,undefined4 param_2)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayMaxAbsValue_sse4(param_1,param_2);
      }
      else {
        ArrayMaxAbsValue_avx(param_1,param_2);
      }
    }
    else {
      ArrayMaxAbsValue_avx2(param_1,param_2);
    }
  }
  else {
    ArrayMaxAbsValue_avx512skx(param_1,param_2);
  }
  return;
}

// ArrayMean @ 140a3b630

void ArrayMean(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayMean_sse4(param_1,param_2,param_3);
      }
      else {
        ArrayMean_avx(param_1,param_2,param_3);
      }
    }
    else {
      ArrayMean_avx2(param_1,param_2,param_3);
    }
  }
  else {
    ArrayMean_avx512skx(param_1,param_2,param_3);
  }
  return;
}

// ArrayMeanFilter @ 140a3b6b0

void ArrayMeanFilter(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayMeanFilter_sse4(param_1,param_2,param_3,param_4,param_5,param_6);
      }
      else {
        ArrayMeanFilter_avx(param_1,param_2,param_3,param_4,param_5,param_6);
      }
    }
    else {
      ArrayMeanFilter_avx2(param_1,param_2,param_3,param_4,param_5,param_6);
    }
  }
  else {
    ArrayMeanFilter_avx512skx(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}

// ArrayMeanSquared @ 140a3b780

void ArrayMeanSquared(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayMeanSquared_sse4(param_1,param_2,param_3);
      }
      else {
        ArrayMeanSquared_avx(param_1,param_2,param_3);
      }
    }
    else {
      ArrayMeanSquared_avx2(param_1,param_2,param_3);
    }
  }
  else {
    ArrayMeanSquared_avx512skx(param_1,param_2,param_3);
  }
  return;
}

// ArrayMinMaxNormalize @ 140a3b800

void ArrayMinMaxNormalize(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayMinMaxNormalize_sse4(param_1,param_2,param_3);
      }
      else {
        ArrayMinMaxNormalize_avx(param_1,param_2,param_3);
      }
    }
    else {
      ArrayMinMaxNormalize_avx2(param_1,param_2,param_3);
    }
  }
  else {
    ArrayMinMaxNormalize_avx512skx(param_1,param_2,param_3);
  }
  return;
}

// ArrayMixIn @ 140a3b880

void ArrayMixIn(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayMixIn_sse4(param_1,param_2,param_3);
      }
      else {
        ArrayMixIn_avx(param_1,param_2,param_3);
      }
    }
    else {
      ArrayMixIn_avx2(param_1,param_2,param_3);
    }
  }
  else {
    ArrayMixIn_avx512skx(param_1,param_2,param_3);
  }
  return;
}

// ArrayMixInWithDelta @ 140a3b900

void ArrayMixInWithDelta(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4
                        ,undefined4 param_5)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayMixInWithDelta_sse4(param_1,param_2,param_3,param_4,param_5);
      }
      else {
        ArrayMixInWithDelta_avx(param_1,param_2,param_3,param_4,param_5);
      }
    }
    else {
      ArrayMixInWithDelta_avx2(param_1,param_2,param_3,param_4,param_5);
    }
  }
  else {
    ArrayMixInWithDelta_avx512skx(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}

// ArrayMixInWithGain @ 140a3b9c0

void ArrayMixInWithGain(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayMixInWithGain_sse4(param_1,param_2,param_3,param_4);
      }
      else {
        ArrayMixInWithGain_avx(param_1,param_2,param_3,param_4);
      }
    }
    else {
      ArrayMixInWithGain_avx2(param_1,param_2,param_3,param_4);
    }
  }
  else {
    ArrayMixInWithGain_avx512skx(param_1,param_2,param_3,param_4);
  }
  return;
}

// ArrayMultiply @ 140a3ba60

void ArrayMultiply(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayMultiply_sse4(param_1,param_2,param_3,param_4);
      }
      else {
        ArrayMultiply_avx(param_1,param_2,param_3,param_4);
      }
    }
    else {
      ArrayMultiply_avx2(param_1,param_2,param_3,param_4);
    }
  }
  else {
    ArrayMultiply_avx512skx(param_1,param_2,param_3,param_4);
  }
  return;
}

// ArrayMultiplyAddInPlace @ 140a3baf0

void ArrayMultiplyAddInPlace
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayMultiplyAddInPlace_sse4(param_1,param_2,param_3,param_4);
      }
      else {
        ArrayMultiplyAddInPlace_avx(param_1,param_2,param_3,param_4);
      }
    }
    else {
      ArrayMultiplyAddInPlace_avx2(param_1,param_2,param_3,param_4);
    }
  }
  else {
    ArrayMultiplyAddInPlace_avx512skx(param_1,param_2,param_3,param_4);
  }
  return;
}

// ArrayMultiplyByConstant @ 140a3bb90

void ArrayMultiplyByConstant
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayMultiplyByConstant_sse4(param_1,param_2,param_3,param_4);
      }
      else {
        ArrayMultiplyByConstant_avx(param_1,param_2,param_3,param_4);
      }
    }
    else {
      ArrayMultiplyByConstant_avx2(param_1,param_2,param_3,param_4);
    }
  }
  else {
    ArrayMultiplyByConstant_avx512skx(param_1,param_2,param_3,param_4);
  }
  return;
}

// ArrayMultiplyByConstantInPlace @ 140a3bc30

void ArrayMultiplyByConstantInPlace(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayMultiplyByConstantInPlace_sse4(param_1,param_2,param_3);
      }
      else {
        ArrayMultiplyByConstantInPlace_avx(param_1,param_2,param_3);
      }
    }
    else {
      ArrayMultiplyByConstantInPlace_avx2(param_1,param_2,param_3);
    }
  }
  else {
    ArrayMultiplyByConstantInPlace_avx512skx(param_1,param_2,param_3);
  }
  return;
}

// ArrayMultiplyInPlace @ 140a3bcb0

void ArrayMultiplyInPlace(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayMultiplyInPlace_sse4(param_1,param_2,param_3);
      }
      else {
        ArrayMultiplyInPlace_avx(param_1,param_2,param_3);
      }
    }
    else {
      ArrayMultiplyInPlace_avx2(param_1,param_2,param_3);
    }
  }
  else {
    ArrayMultiplyInPlace_avx512skx(param_1,param_2,param_3);
  }
  return;
}

// ArrayPcm16ToFloat @ 140a3bd30

void ArrayPcm16ToFloat(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayPcm16ToFloat_sse4(param_1,param_2,param_3);
      }
      else {
        ArrayPcm16ToFloat_avx(param_1,param_2,param_3);
      }
    }
    else {
      ArrayPcm16ToFloat_avx2(param_1,param_2,param_3);
    }
  }
  else {
    ArrayPcm16ToFloat_avx512skx(param_1,param_2,param_3);
  }
  return;
}

// ArrayPowerToDecibelInPlace @ 140a3bdb0

void ArrayPowerToDecibelInPlace(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayPowerToDecibelInPlace_sse4(param_1,param_2,param_3);
      }
      else {
        ArrayPowerToDecibelInPlace_avx(param_1,param_2,param_3);
      }
    }
    else {
      ArrayPowerToDecibelInPlace_avx2(param_1,param_2,param_3);
    }
  }
  else {
    ArrayPowerToDecibelInPlace_avx512skx(param_1,param_2,param_3);
  }
  return;
}

// ArrayRangeClamp @ 140a3be40

void ArrayRangeClamp(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayRangeClamp_sse4(param_1,param_2,param_3,param_4);
      }
      else {
        ArrayRangeClamp_avx(param_1,param_2,param_3,param_4);
      }
    }
    else {
      ArrayRangeClamp_avx2(param_1,param_2,param_3,param_4);
    }
  }
  else {
    ArrayRangeClamp_avx512skx(param_1,param_2,param_3,param_4);
  }
  return;
}

// ArrayScaledComplexConjugate @ 140a3bee0

void ArrayScaledComplexConjugate
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayScaledComplexConjugate_sse4(param_1,param_2,param_3,param_4);
      }
      else {
        ArrayScaledComplexConjugate_avx(param_1,param_2,param_3,param_4);
      }
    }
    else {
      ArrayScaledComplexConjugate_avx2(param_1,param_2,param_3,param_4);
    }
  }
  else {
    ArrayScaledComplexConjugate_avx512skx(param_1,param_2,param_3,param_4);
  }
  return;
}

// ArraySetToConstantInplace @ 140a3bf70

void ArraySetToConstantInplace(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArraySetToConstantInplace_sse4(param_1,param_2,param_3);
      }
      else {
        ArraySetToConstantInplace_avx(param_1,param_2,param_3);
      }
    }
    else {
      ArraySetToConstantInplace_avx2(param_1,param_2,param_3);
    }
  }
  else {
    ArraySetToConstantInplace_avx512skx(param_1,param_2,param_3);
  }
  return;
}

// ArraySqrtInPlace @ 140a3bff0

void ArraySqrtInPlace(undefined8 param_1,undefined4 param_2)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArraySqrtInPlace_sse4(param_1,param_2);
      }
      else {
        ArraySqrtInPlace_avx(param_1,param_2);
      }
    }
    else {
      ArraySqrtInPlace_avx2(param_1,param_2);
    }
  }
  else {
    ArraySqrtInPlace_avx512skx(param_1,param_2);
  }
  return;
}

// ArraySquare @ 140a3c060

void ArraySquare(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArraySquare_sse4(param_1,param_2,param_3);
      }
      else {
        ArraySquare_avx(param_1,param_2,param_3);
      }
    }
    else {
      ArraySquare_avx2(param_1,param_2,param_3);
    }
  }
  else {
    ArraySquare_avx512skx(param_1,param_2,param_3);
  }
  return;
}

// ArraySquareInPlace @ 140a3c0e0

void ArraySquareInPlace(undefined8 param_1,undefined4 param_2)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArraySquareInPlace_sse4(param_1,param_2);
      }
      else {
        ArraySquareInPlace_avx(param_1,param_2);
      }
    }
    else {
      ArraySquareInPlace_avx2(param_1,param_2);
    }
  }
  else {
    ArraySquareInPlace_avx512skx(param_1,param_2);
  }
  return;
}

// ArraySubtract @ 140a3c150

void ArraySubtract(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArraySubtract_sse4(param_1,param_2,param_3,param_4);
      }
      else {
        ArraySubtract_avx(param_1,param_2,param_3,param_4);
      }
    }
    else {
      ArraySubtract_avx2(param_1,param_2,param_3,param_4);
    }
  }
  else {
    ArraySubtract_avx512skx(param_1,param_2,param_3,param_4);
  }
  return;
}

// ArraySubtractByConstantInPlace @ 140a3c1e0

void ArraySubtractByConstantInPlace(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArraySubtractByConstantInPlace_sse4(param_1,param_2,param_3);
      }
      else {
        ArraySubtractByConstantInPlace_avx(param_1,param_2,param_3);
      }
    }
    else {
      ArraySubtractByConstantInPlace_avx2(param_1,param_2,param_3);
    }
  }
  else {
    ArraySubtractByConstantInPlace_avx512skx(param_1,param_2,param_3);
  }
  return;
}

// ArraySubtractInPlace1 @ 140a3c270

void ArraySubtractInPlace1(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArraySubtractInPlace1_sse4(param_1,param_2,param_3);
      }
      else {
        ArraySubtractInPlace1_avx(param_1,param_2,param_3);
      }
    }
    else {
      ArraySubtractInPlace1_avx2(param_1,param_2,param_3);
    }
  }
  else {
    ArraySubtractInPlace1_avx512skx(param_1,param_2,param_3);
  }
  return;
}

// ArraySubtractInPlace2 @ 140a3c2f0

void ArraySubtractInPlace2(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArraySubtractInPlace2_sse4(param_1,param_2,param_3);
      }
      else {
        ArraySubtractInPlace2_avx(param_1,param_2,param_3);
      }
    }
    else {
      ArraySubtractInPlace2_avx2(param_1,param_2,param_3);
    }
  }
  else {
    ArraySubtractInPlace2_avx512skx(param_1,param_2,param_3);
  }
  return;
}

// ArraySum @ 140a3c370

void ArraySum(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArraySum_sse4(param_1,param_2,param_3);
      }
      else {
        ArraySum_avx(param_1,param_2,param_3);
      }
    }
    else {
      ArraySum_avx2(param_1,param_2,param_3);
    }
  }
  else {
    ArraySum_avx512skx(param_1,param_2,param_3);
  }
  return;
}

// ArraySum2 @ 140a3c3f0

void ArraySum2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArraySum2_sse4(param_1,param_2,param_3,param_4);
      }
      else {
        ArraySum2_avx(param_1,param_2,param_3,param_4);
      }
    }
    else {
      ArraySum2_avx2(param_1,param_2,param_3,param_4);
    }
  }
  else {
    ArraySum2_avx512skx(param_1,param_2,param_3,param_4);
  }
  return;
}

// ArrayUnderflowClamp @ 140a3c480

void ArrayUnderflowClamp(undefined8 param_1,undefined4 param_2)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayUnderflowClamp_sse4(param_1,param_2);
      }
      else {
        ArrayUnderflowClamp_avx(param_1,param_2);
      }
    }
    else {
      ArrayUnderflowClamp_avx2(param_1,param_2);
    }
  }
  else {
    ArrayUnderflowClamp_avx512skx(param_1,param_2);
  }
  return;
}

// ArrayWeightedSumOneGain @ 140a3c4f0

void ArrayWeightedSumOneGain
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayWeightedSumOneGain_sse4(param_1,param_2,param_3,param_4,param_5);
      }
      else {
        ArrayWeightedSumOneGain_avx(param_1,param_2,param_3,param_4,param_5);
      }
    }
    else {
      ArrayWeightedSumOneGain_avx2(param_1,param_2,param_3,param_4,param_5);
    }
  }
  else {
    ArrayWeightedSumOneGain_avx512skx(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}

// ArrayWeightedSumTwoGain @ 140a3c5a0

void ArrayWeightedSumTwoGain
               (undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5,undefined4 param_6)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ArrayWeightedSumTwoGain_sse4(param_1,param_2,param_3,param_4,param_5,param_6);
      }
      else {
        ArrayWeightedSumTwoGain_avx(param_1,param_2,param_3,param_4,param_5,param_6);
      }
    }
    else {
      ArrayWeightedSumTwoGain_avx2(param_1,param_2,param_3,param_4,param_5,param_6);
    }
  }
  else {
    ArrayWeightedSumTwoGain_avx512skx(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}

// TransformArrayRow @ 140a3c680

void TransformArrayRow(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                      undefined4 param_5)

{
  FUN_140a3a6e0();
  if (DAT_154bbe964 < 7) {
    if (DAT_154bbe964 < 4) {
      if (DAT_154bbe964 < 3) {
        if (DAT_154bbe964 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        TransformArrayRow_sse4(param_1,param_2,param_3,param_4,param_5);
      }
      else {
        TransformArrayRow_avx(param_1,param_2,param_3,param_4,param_5);
      }
    }
    else {
      TransformArrayRow_avx2(param_1,param_2,param_3,param_4,param_5);
    }
  }
  else {
    TransformArrayRow_avx512skx(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}


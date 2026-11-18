// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 12

// FUN_1402df790 @ 1402df790

/* WARNING: Removing unreachable block (ram,0x0001402df7c5) */
/* WARNING: Removing unreachable block (ram,0x0001402df7ae) */
/* WARNING: Removing unreachable block (ram,0x0001402df79c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1402df790(void)

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

// FUN_1402df930 @ 1402df930

void FUN_1402df930(void)

{
  if (DAT_154bb379c != -1) {
    return;
  }
  DAT_154bb379c = FUN_1402df790();
  return;
}

// ApplyKinematicTriangleCollisions @ 1402df960

void ApplyKinematicTriangleCollisions
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10)

{
  FUN_1402df930();
  if (DAT_154bb379c < 7) {
    if (DAT_154bb379c < 4) {
      if (DAT_154bb379c < 3) {
        if (DAT_154bb379c < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyKinematicTriangleCollisions_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10)
        ;
      }
      else {
        ApplyKinematicTriangleCollisions_avx
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10)
        ;
      }
    }
    else {
      ApplyKinematicTriangleCollisions_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
    }
  }
  else {
    ApplyKinematicTriangleCollisions_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  }
  return;
}

// ApplyKinematicTriangleCollisionsPAndInvM @ 1402dfb00

void ApplyKinematicTriangleCollisionsPAndInvM
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10)

{
  FUN_1402df930();
  if (DAT_154bb379c < 7) {
    if (DAT_154bb379c < 4) {
      if (DAT_154bb379c < 3) {
        if (DAT_154bb379c < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyKinematicTriangleCollisionsPAndInvM_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10)
        ;
      }
      else {
        ApplyKinematicTriangleCollisionsPAndInvM_avx
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10)
        ;
      }
    }
    else {
      ApplyKinematicTriangleCollisionsPAndInvM_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
    }
  }
  else {
    ApplyKinematicTriangleCollisionsPAndInvM_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  }
  return;
}

// ApplyKinematicTriangleCollisionsWithFriction @ 1402dfca0

void ApplyKinematicTriangleCollisionsWithFriction
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
               undefined4 param_13,undefined4 param_14)

{
  FUN_1402df930();
  if (DAT_154bb379c < 7) {
    if (DAT_154bb379c < 4) {
      if (DAT_154bb379c < 3) {
        if (DAT_154bb379c < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyKinematicTriangleCollisionsWithFriction_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13,param_14);
      }
      else {
        ApplyKinematicTriangleCollisionsWithFriction_avx
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13,param_14);
      }
    }
    else {
      ApplyKinematicTriangleCollisionsWithFriction_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12,param_13,param_14);
    }
  }
  else {
    ApplyKinematicTriangleCollisionsWithFriction_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14);
  }
  return;
}

// ApplyKinematicTriangleCollisionsWithFrictionAndMaps @ 1402dfef0

void ApplyKinematicTriangleCollisionsWithFrictionAndMaps
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
               undefined4 param_13,undefined4 param_14,undefined1 param_15,undefined8 param_16,
               undefined8 param_17,undefined4 param_18)

{
  FUN_1402df930();
  if (DAT_154bb379c < 7) {
    if (DAT_154bb379c < 4) {
      if (DAT_154bb379c < 3) {
        if (DAT_154bb379c < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyKinematicTriangleCollisionsWithFrictionAndMaps_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18);
      }
      else {
        ApplyKinematicTriangleCollisionsWithFrictionAndMaps_avx(param_1);
      }
    }
    else {
      ApplyKinematicTriangleCollisionsWithFrictionAndMaps_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18);
    }
  }
  else {
    ApplyKinematicTriangleCollisionsWithFrictionAndMaps_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18);
  }
  return;
}

// ApplyKinematicTriangleCollisionsWithFrictionAndMapsPAndInvM @ 1402e0200

void ApplyKinematicTriangleCollisionsWithFrictionAndMapsPAndInvM
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
               undefined4 param_13,undefined4 param_14,undefined1 param_15,undefined8 param_16,
               undefined8 param_17,undefined4 param_18)

{
  FUN_1402df930();
  if (DAT_154bb379c < 7) {
    if (DAT_154bb379c < 4) {
      if (DAT_154bb379c < 3) {
        if (DAT_154bb379c < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyKinematicTriangleCollisionsWithFrictionAndMapsPAndInvM_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18);
      }
      else {
        ApplyKinematicTriangleCollisionsWithFrictionAndMapsPAndInvM_avx(param_1);
      }
    }
    else {
      ApplyKinematicTriangleCollisionsWithFrictionAndMapsPAndInvM_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18);
    }
  }
  else {
    ApplyKinematicTriangleCollisionsWithFrictionAndMapsPAndInvM_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18);
  }
  return;
}

// ApplyKinematicTriangleCollisionsWithFrictionMap @ 1402e0510

void ApplyKinematicTriangleCollisionsWithFrictionMap
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
               undefined8 param_13,undefined8 param_14,undefined4 param_15)

{
  FUN_1402df930();
  if (DAT_154bb379c < 7) {
    if (DAT_154bb379c < 4) {
      if (DAT_154bb379c < 3) {
        if (DAT_154bb379c < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyKinematicTriangleCollisionsWithFrictionMap_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13,param_14,param_15);
      }
      else {
        ApplyKinematicTriangleCollisionsWithFrictionMap_avx
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13,param_14,param_15);
      }
    }
    else {
      ApplyKinematicTriangleCollisionsWithFrictionMap_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12,param_13,param_14,param_15);
    }
  }
  else {
    ApplyKinematicTriangleCollisionsWithFrictionMap_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14,param_15);
  }
  return;
}

// ApplyKinematicTriangleCollisionsWithFrictionMapPAndInvM @ 1402e0780

void ApplyKinematicTriangleCollisionsWithFrictionMapPAndInvM
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
               undefined8 param_13,undefined8 param_14,undefined4 param_15)

{
  FUN_1402df930();
  if (DAT_154bb379c < 7) {
    if (DAT_154bb379c < 4) {
      if (DAT_154bb379c < 3) {
        if (DAT_154bb379c < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyKinematicTriangleCollisionsWithFrictionMapPAndInvM_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13,param_14,param_15);
      }
      else {
        ApplyKinematicTriangleCollisionsWithFrictionMapPAndInvM_avx
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13,param_14,param_15);
      }
    }
    else {
      ApplyKinematicTriangleCollisionsWithFrictionMapPAndInvM_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12,param_13,param_14,param_15);
    }
  }
  else {
    ApplyKinematicTriangleCollisionsWithFrictionMapPAndInvM_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14,param_15);
  }
  return;
}

// ApplyKinematicTriangleCollisionsWithFrictionPAndInvM @ 1402e09f0

void ApplyKinematicTriangleCollisionsWithFrictionPAndInvM
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
               undefined4 param_13,undefined4 param_14)

{
  FUN_1402df930();
  if (DAT_154bb379c < 7) {
    if (DAT_154bb379c < 4) {
      if (DAT_154bb379c < 3) {
        if (DAT_154bb379c < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyKinematicTriangleCollisionsWithFrictionPAndInvM_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13,param_14);
      }
      else {
        ApplyKinematicTriangleCollisionsWithFrictionPAndInvM_avx
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13,param_14);
      }
    }
    else {
      ApplyKinematicTriangleCollisionsWithFrictionPAndInvM_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12,param_13,param_14);
    }
  }
  else {
    ApplyKinematicTriangleCollisionsWithFrictionPAndInvM_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14);
  }
  return;
}

// ApplyKinematicTriangleCollisionsWithMaps @ 1402e0c40

void ApplyKinematicTriangleCollisionsWithMaps
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  FUN_1402df930();
  if (DAT_154bb379c < 7) {
    if (DAT_154bb379c < 4) {
      if (DAT_154bb379c < 3) {
        if (DAT_154bb379c < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyKinematicTriangleCollisionsWithMaps_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12);
      }
      else {
        ApplyKinematicTriangleCollisionsWithMaps_avx
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12);
      }
    }
    else {
      ApplyKinematicTriangleCollisionsWithMaps_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12);
    }
  }
  else {
    ApplyKinematicTriangleCollisionsWithMaps_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12);
  }
  return;
}

// ApplyKinematicTriangleCollisionsWithMapsPAndInvM @ 1402e0e20

void ApplyKinematicTriangleCollisionsWithMapsPAndInvM
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  FUN_1402df930();
  if (DAT_154bb379c < 7) {
    if (DAT_154bb379c < 4) {
      if (DAT_154bb379c < 3) {
        if (DAT_154bb379c < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyKinematicTriangleCollisionsWithMapsPAndInvM_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12);
      }
      else {
        ApplyKinematicTriangleCollisionsWithMapsPAndInvM_avx
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12);
      }
    }
    else {
      ApplyKinematicTriangleCollisionsWithMapsPAndInvM_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12);
    }
  }
  else {
    ApplyKinematicTriangleCollisionsWithMapsPAndInvM_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12);
  }
  return;
}


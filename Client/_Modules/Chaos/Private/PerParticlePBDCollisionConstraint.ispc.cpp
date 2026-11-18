// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 15

// FUN_1405978b0 @ 1405978b0

/* WARNING: Removing unreachable block (ram,0x0001405978e5) */
/* WARNING: Removing unreachable block (ram,0x0001405978ce) */
/* WARNING: Removing unreachable block (ram,0x0001405978bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1405978b0(void)

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

// FUN_140597a50 @ 140597a50

void FUN_140597a50(void)

{
  if (DAT_154bb37b4 != -1) {
    return;
  }
  DAT_154bb37b4 = FUN_1405978b0();
  return;
}

// ApplyPerParticleBatchCollisionFastFriction @ 140597a80

void ApplyPerParticleBatchCollisionFastFriction
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
               undefined4 param_13)

{
  FUN_140597a50();
  if (DAT_154bb37b4 < 7) {
    if (DAT_154bb37b4 < 4) {
      if (DAT_154bb37b4 < 3) {
        if (DAT_154bb37b4 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyPerParticleBatchCollisionFastFriction_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13);
      }
      else {
        ApplyPerParticleBatchCollisionFastFriction_avx
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13);
      }
    }
    else {
      ApplyPerParticleBatchCollisionFastFriction_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12,param_13);
    }
  }
  else {
    ApplyPerParticleBatchCollisionFastFriction_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13);
  }
  return;
}

// ApplyPerParticleBatchCollisionFastFrictionAndGeneratePlanarConstraints @ 140597c80

void ApplyPerParticleBatchCollisionFastFrictionAndGeneratePlanarConstraints
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
               undefined4 param_17)

{
  FUN_140597a50();
  if (DAT_154bb37b4 < 7) {
    if (DAT_154bb37b4 < 4) {
      if (DAT_154bb37b4 < 3) {
        if (DAT_154bb37b4 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyPerParticleBatchCollisionFastFrictionAndGeneratePlanarConstraints_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13,param_14,param_15,param_16,param_17);
      }
      else {
        ApplyPerParticleBatchCollisionFastFrictionAndGeneratePlanarConstraints_avx();
      }
    }
    else {
      ApplyPerParticleBatchCollisionFastFrictionAndGeneratePlanarConstraints_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12,param_13,param_14,param_15,param_16,param_17);
    }
  }
  else {
    ApplyPerParticleBatchCollisionFastFrictionAndGeneratePlanarConstraints_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14,param_15,param_16,param_17);
  }
  return;
}

// ApplyPerParticleBatchCollisionFastFrictionWithVelocityBones @ 140597f30

void ApplyPerParticleBatchCollisionFastFrictionWithVelocityBones
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined8 param_12,
               undefined8 param_13,undefined8 param_14,undefined4 param_15,undefined4 param_16,
               undefined4 param_17,undefined4 param_18,undefined4 param_19)

{
  FUN_140597a50();
  if (DAT_154bb37b4 < 7) {
    if (DAT_154bb37b4 < 4) {
      if (DAT_154bb37b4 < 3) {
        if (DAT_154bb37b4 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyPerParticleBatchCollisionFastFrictionWithVelocityBones_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19)
        ;
      }
      else {
        ApplyPerParticleBatchCollisionFastFrictionWithVelocityBones_avx();
      }
    }
    else {
      ApplyPerParticleBatchCollisionFastFrictionWithVelocityBones_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19);
    }
  }
  else {
    ApplyPerParticleBatchCollisionFastFrictionWithVelocityBones_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19);
  }
  return;
}

// ApplyPerParticleBatchCollisionFastFrictionWithVelocityBonesAndGeneratePlanarConstraints @ 140598260

void ApplyPerParticleBatchCollisionFastFrictionWithVelocityBonesAndGeneratePlanarConstraints
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13,undefined8 param_14,undefined4 param_15,undefined8 param_16,
               undefined8 param_17,undefined8 param_18,undefined4 param_19,undefined4 param_20,
               undefined4 param_21,undefined4 param_22,undefined4 param_23)

{
  FUN_140597a50();
  if (DAT_154bb37b4 < 7) {
    if (DAT_154bb37b4 < 4) {
      if (DAT_154bb37b4 < 3) {
        if (DAT_154bb37b4 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyPerParticleBatchCollisionFastFrictionWithVelocityBonesAndGeneratePlanarConstraints_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
                   param_20,param_21,param_22,param_23);
      }
      else {
        ApplyPerParticleBatchCollisionFastFrictionWithVelocityBonesAndGeneratePlanarConstraints_avx
                  ();
      }
    }
    else {
      ApplyPerParticleBatchCollisionFastFrictionWithVelocityBonesAndGeneratePlanarConstraints_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
                 param_20,param_21,param_22,param_23);
    }
  }
  else {
    ApplyPerParticleBatchCollisionFastFrictionWithVelocityBonesAndGeneratePlanarConstraints_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
               param_20,param_21,param_22,param_23);
  }
  return;
}

// ApplyPerParticleBatchCollisionNoFriction @ 1405986a0

void ApplyPerParticleBatchCollisionNoFriction
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  FUN_140597a50();
  if (DAT_154bb37b4 < 7) {
    if (DAT_154bb37b4 < 4) {
      if (DAT_154bb37b4 < 3) {
        if (DAT_154bb37b4 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyPerParticleBatchCollisionNoFriction_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      }
      else {
        ApplyPerParticleBatchCollisionNoFriction_avx
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      }
    }
    else {
      ApplyPerParticleBatchCollisionNoFriction_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    }
  }
  else {
    ApplyPerParticleBatchCollisionNoFriction_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return;
}

// ApplyPerParticleBatchCollisionNoFrictionAndGeneratePlanarConstraints @ 1405987c0

void ApplyPerParticleBatchCollisionNoFrictionAndGeneratePlanarConstraints
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  FUN_140597a50();
  if (DAT_154bb37b4 < 7) {
    if (DAT_154bb37b4 < 4) {
      if (DAT_154bb37b4 < 3) {
        if (DAT_154bb37b4 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyPerParticleBatchCollisionNoFrictionAndGeneratePlanarConstraints_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11);
      }
      else {
        ApplyPerParticleBatchCollisionNoFrictionAndGeneratePlanarConstraints_avx
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11);
      }
    }
    else {
      ApplyPerParticleBatchCollisionNoFrictionAndGeneratePlanarConstraints_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11);
    }
  }
  else {
    ApplyPerParticleBatchCollisionNoFrictionAndGeneratePlanarConstraints_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11);
  }
  return;
}

// ApplyPerParticleCollisionFastFriction @ 140598940

void ApplyPerParticleCollisionFastFriction
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
               undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
               undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
               undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20)

{
  FUN_140597a50();
  if (DAT_154bb37b4 < 7) {
    if (DAT_154bb37b4 < 4) {
      if (DAT_154bb37b4 < 3) {
        if (DAT_154bb37b4 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyPerParticleCollisionFastFriction_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
                   param_20);
      }
      else {
        ApplyPerParticleCollisionFastFriction_avx();
      }
    }
    else {
      ApplyPerParticleCollisionFastFriction_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
                 param_20);
    }
  }
  else {
    ApplyPerParticleCollisionFastFriction_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
               param_20);
  }
  return;
}

// ApplyPerParticleCollisionNoFriction @ 140598cd0

void ApplyPerParticleCollisionNoFriction
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
               undefined4 param_9,undefined8 param_10,undefined8 param_11,undefined4 param_12,
               undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
               undefined4 param_17,undefined4 param_18,undefined4 param_19)

{
  FUN_140597a50();
  if (DAT_154bb37b4 < 7) {
    if (DAT_154bb37b4 < 4) {
      if (DAT_154bb37b4 < 3) {
        if (DAT_154bb37b4 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyPerParticleCollisionNoFriction_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19)
        ;
      }
      else {
        ApplyPerParticleCollisionNoFriction_avx();
      }
    }
    else {
      ApplyPerParticleCollisionNoFriction_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19);
    }
  }
  else {
    ApplyPerParticleCollisionNoFriction_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19);
  }
  return;
}

// ApplyPerParticleSimpleCollisionFastFriction @ 140598ff0

void ApplyPerParticleSimpleCollisionFastFriction
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
               undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
               undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
               undefined4 param_17)

{
  FUN_140597a50();
  if (DAT_154bb37b4 < 7) {
    if (DAT_154bb37b4 < 4) {
      if (DAT_154bb37b4 < 3) {
        if (DAT_154bb37b4 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyPerParticleSimpleCollisionFastFriction_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13,param_14,param_15,param_16,param_17);
      }
      else {
        ApplyPerParticleSimpleCollisionFastFriction_avx();
      }
    }
    else {
      ApplyPerParticleSimpleCollisionFastFriction_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12,param_13,param_14,param_15,param_16,param_17);
    }
  }
  else {
    ApplyPerParticleSimpleCollisionFastFriction_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14,param_15,param_16,param_17);
  }
  return;
}

// ApplyPerParticleSimpleCollisionFastFrictionAndGeneratePlanarConstraints @ 140599280

void ApplyPerParticleSimpleCollisionFastFrictionAndGeneratePlanarConstraints
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
               undefined8 param_13,undefined8 param_14,undefined4 param_15,undefined4 param_16,
               undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,
               undefined4 param_21)

{
  FUN_140597a50();
  if (DAT_154bb37b4 < 7) {
    if (DAT_154bb37b4 < 4) {
      if (DAT_154bb37b4 < 3) {
        if (DAT_154bb37b4 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyPerParticleSimpleCollisionFastFrictionAndGeneratePlanarConstraints_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
                   param_20,param_21);
      }
      else {
        ApplyPerParticleSimpleCollisionFastFrictionAndGeneratePlanarConstraints_avx();
      }
    }
    else {
      ApplyPerParticleSimpleCollisionFastFrictionAndGeneratePlanarConstraints_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
                 param_20,param_21);
    }
  }
  else {
    ApplyPerParticleSimpleCollisionFastFrictionAndGeneratePlanarConstraints_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
               param_20,param_21);
  }
  return;
}

// ApplyPerParticleSimpleCollisionNoFriction @ 140599650

void ApplyPerParticleSimpleCollisionNoFriction
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
               undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
               undefined4 param_13)

{
  FUN_140597a50();
  if (DAT_154bb37b4 < 7) {
    if (DAT_154bb37b4 < 4) {
      if (DAT_154bb37b4 < 3) {
        if (DAT_154bb37b4 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyPerParticleSimpleCollisionNoFriction_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13);
      }
      else {
        ApplyPerParticleSimpleCollisionNoFriction_avx
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13);
      }
    }
    else {
      ApplyPerParticleSimpleCollisionNoFriction_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12,param_13);
    }
  }
  else {
    ApplyPerParticleSimpleCollisionNoFriction_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13);
  }
  return;
}

// ApplyPerParticleSimpleCollisionNoFrictionAndGeneratePlanarConstraints @ 140599810

void ApplyPerParticleSimpleCollisionNoFrictionAndGeneratePlanarConstraints
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
               undefined8 param_9,undefined8 param_10,undefined4 param_11,undefined4 param_12,
               undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16)

{
  FUN_140597a50();
  if (DAT_154bb37b4 < 7) {
    if (DAT_154bb37b4 < 4) {
      if (DAT_154bb37b4 < 3) {
        if (DAT_154bb37b4 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ApplyPerParticleSimpleCollisionNoFrictionAndGeneratePlanarConstraints_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13,param_14,param_15,param_16);
      }
      else {
        ApplyPerParticleSimpleCollisionNoFrictionAndGeneratePlanarConstraints_avx();
      }
    }
    else {
      ApplyPerParticleSimpleCollisionNoFrictionAndGeneratePlanarConstraints_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12,param_13,param_14,param_15,param_16);
    }
  }
  else {
    ApplyPerParticleSimpleCollisionNoFrictionAndGeneratePlanarConstraints_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14,param_15,param_16);
  }
  return;
}

// ExportHack_PerParticlePBDCollisionConstraintStructs @ 140599a50

void ExportHack_PerParticlePBDCollisionConstraintStructs
               (undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
               undefined8 param_13,undefined4 param_14,undefined8 param_15,undefined8 param_16,
               undefined8 param_17)

{
  FUN_140597a50();
  if (DAT_154bb37b4 < 7) {
    if (DAT_154bb37b4 < 4) {
      if (DAT_154bb37b4 < 3) {
        if (DAT_154bb37b4 < 2) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        ExportHack_PerParticlePBDCollisionConstraintStructs_sse4
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11,param_12,param_13,param_14,param_15,param_16,param_17);
      }
      else {
        ExportHack_PerParticlePBDCollisionConstraintStructs_avx();
      }
    }
    else {
      ExportHack_PerParticlePBDCollisionConstraintStructs_avx2
                (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                 param_11,param_12,param_13,param_14,param_15,param_16,param_17);
    }
  }
  else {
    ExportHack_PerParticlePBDCollisionConstraintStructs_avx512skx
              (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14,param_15,param_16,param_17);
  }
  return;
}


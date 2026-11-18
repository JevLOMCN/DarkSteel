// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MSVCRT
// Functions: 1

// __common_trig_reduction @ 150167b00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __common_trig_reduction(void)

{
  double dVar1;
  double dVar2;
  double *in_RAX;
  ulonglong uVar3;
  byte bVar4;
  int in_ECX;
  uint uVar5;
  int iVar6;
  ulong *puVar7;
  longlong lVar8;
  ulong *puVar9;
  int iVar10;
  ulonglong uVar11;
  double in_XMM0_Qa;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined8 local_40;
  
  local_40._6_2_ = (ushort)((ulonglong)in_XMM0_Qa >> 0x30);
  uVar5 = (local_40._6_2_ & 0x7ff0) >> 4;
  if (uVar5 < 0x7ff) {
    if (uVar5 < 0x41d) {
      if (in_ECX == 0) {
        puVar7 = &_PIO2_21x5;
        dVar12 = (double)(int)((int)(__PI02_INV * in_XMM0_Qa) + 1U & 0xfffffffe);
      }
      else if (in_ECX == 1) {
        puVar7 = &_PIO2_21x5;
        dVar12 = (double)(int)((int)(__PI02_INV * in_XMM0_Qa) | 1);
      }
      else {
        dVar12 = (double)(int)((int)(__PI04_INV * in_XMM0_Qa) + 1U & 0xfffffffe);
        puVar7 = &_PI04_21x5;
      }
      dVar18 = in_XMM0_Qa - *(double *)puVar7 * dVar12;
      dVar28 = dVar18 - *(double *)((longlong)puVar7 + 8) * dVar12;
      dVar13 = dVar28 - *(double *)((longlong)puVar7 + 0x10) * dVar12;
      dVar18 = ((dVar18 - dVar28) - *(double *)((longlong)puVar7 + 8) * dVar12) +
               ((dVar28 - dVar13) - *(double *)((longlong)puVar7 + 0x10) * dVar12);
      dVar28 = dVar13 + dVar18;
      dVar20 = dVar28 - *(double *)((longlong)puVar7 + 0x18) * dVar12;
      *in_RAX = dVar20 + ((dVar18 + (dVar13 - dVar28) +
                          ((dVar28 - dVar20) - *(double *)((longlong)puVar7 + 0x18) * dVar12)) -
                         dVar12 * *(double *)((longlong)puVar7 + 0x20));
    }
    else {
      if (in_ECX == 0) {
        iVar10 = 0;
        puVar9 = &_PIO2_25x2;
        puVar7 = &_DDP;
      }
      else if (in_ECX == 1) {
        iVar10 = 1;
        puVar9 = &_PIO2_25x2;
        puVar7 = &_DDP;
      }
      else {
        iVar10 = 0;
        puVar9 = &_PI04_25x2;
        puVar7 = &_DP;
      }
      local_40 = (double)CONCAT26(local_40._6_2_ & 0x800f | (ushort)((uVar5 - 200 & 0x7ff) << 4),
                                  SUB86(in_XMM0_Qa,0));
      dVar18 = local_40;
      iVar6 = (int)(uVar5 - 0x41c) / 0x19;
      local_40._0_4_ = SUB84(in_XMM0_Qa,0);
      local_40._4_4_ = SUB84(dVar18,4);
      local_40 = (double)(CONCAT44(local_40._4_4_,(undefined4)local_40) & 0xfffffffff8000000);
      dVar28 = local_40;
      dVar18 = dVar18 - local_40;
      dVar12 = __zero_none;
      dVar13 = __zero_none;
      if (0x10 < (int)(iVar6 * -0x19 + -0x41c + uVar5)) {
        lVar8 = (longlong)iVar6;
        iVar6 = iVar6 + 1;
        dVar13 = *(double *)(puVar7 + lVar8 * 2) * dVar18 +
                 *(double *)(puVar7 + lVar8 * 2 + 2) * local_40;
        dVar12 = (*(double *)(puVar7 + lVar8 * 2) * dVar18 - dVar13) +
                 *(double *)(puVar7 + lVar8 * 2 + 2) * local_40;
        local_40 = (double)((ulonglong)(dVar13 + dVar12) & 0xfffffffffff00000);
        dVar13 = dVar13 - local_40;
      }
      lVar8 = (longlong)iVar6;
      dVar25 = dVar13 + *(double *)(puVar7 + lVar8 * 2) * dVar18;
      dVar20 = dVar28 * *(double *)(puVar7 + lVar8 * 2 + 2);
      dVar21 = *(double *)(puVar7 + lVar8 * 2 + 2) * dVar18;
      dVar1 = dVar25 + dVar20;
      dVar14 = (dVar13 - dVar25) + *(double *)(puVar7 + lVar8 * 2) * dVar18 + dVar12 +
               (dVar25 - dVar1) + dVar20;
      dVar29 = dVar28 * *(double *)(puVar7 + lVar8 * 2 + 4);
      dVar26 = *(double *)(puVar7 + lVar8 * 2 + 4) * dVar18;
      dVar12 = dVar1 + dVar14 + dVar21 + dVar29;
      local_40._6_2_ = (ushort)((ulonglong)dVar12 >> 0x30);
      iVar6 = -((local_40._6_2_ & 0x7ff0) >> 4);
      bVar4 = (char)iVar6 + 0x33;
      uVar3 = (ulonglong)(iVar6 + 0x3f4 >> 0x1f);
      uVar11 = (longlong)((ulonglong)dVar12 | ~uVar3) >> (bVar4 & 0x3f);
      dVar1 = dVar1 - (double)((uVar3 & uVar11) << (bVar4 & 0x3f));
      dVar12 = dVar1 + dVar14;
      dVar13 = dVar12 + *(double *)(&_zero_none + (ulonglong)(iVar10 + (int)uVar11 & 1) * 2);
      dVar15 = dVar13 + dVar21;
      dVar22 = dVar15 + dVar29;
      dVar30 = dVar22 + dVar26;
      dVar20 = dVar28 * *(double *)(puVar7 + lVar8 * 2 + 6);
      dVar16 = *(double *)(puVar7 + lVar8 * 2 + 6) * dVar18;
      dVar2 = dVar30 + dVar20;
      dVar27 = dVar2 + dVar16;
      dVar23 = dVar28 * *(double *)(puVar7 + lVar8 * 2 + 8);
      dVar31 = dVar27 + dVar23;
      dVar17 = *(double *)(puVar7 + lVar8 * 2 + 8) * dVar18 +
               dVar28 * *(double *)(puVar7 + lVar8 * 2 + 10);
      dVar25 = dVar17 + dVar31;
      dVar24 = *(double *)(puVar7 + lVar8 * 2 + 10) * dVar18 +
               dVar28 * *(double *)(puVar7 + lVar8 * 2 + 0xc);
      dVar32 = dVar24 + dVar25;
      dVar19 = dVar18 * *(double *)(puVar7 + lVar8 * 2 + 0xc) +
               dVar28 * *(double *)(puVar7 + lVar8 * 2 + 0xe);
      dVar28 = dVar32 + dVar19;
      dVar18 = __TWO_26H * dVar28;
      dVar18 = (dVar28 + dVar18) - dVar18;
      dVar12 = (dVar32 - dVar18) + dVar19 +
               dVar24 + (dVar25 - dVar32) +
               dVar17 + (dVar31 - dVar25) +
               (dVar27 - dVar31) + dVar23 +
               (dVar2 - dVar27) + dVar16 +
               (dVar30 - dVar2) + dVar20 +
               (dVar22 - dVar30) + dVar26 +
               (dVar15 - dVar22) + dVar29 + (dVar13 - dVar15) + dVar21 + (dVar1 - dVar12) + dVar14;
      dVar28 = dVar18 * *(double *)puVar9;
      dVar12 = *(double *)puVar9 * dVar12 + (dVar12 + dVar18) * *(double *)((longlong)puVar9 + 8);
      dVar13 = dVar12 + dVar28;
      dVar13 = dVar13 + dVar12 + (dVar28 - dVar13);
      if (in_ECX < 2) {
        *in_RAX = dVar13;
      }
      else if (dVar13 <= __PI04) {
        *in_RAX = dVar13;
      }
      else {
        *in_RAX = dVar13 - __PI02;
      }
    }
  }
  else {
    *in_RAX = in_XMM0_Qa * __zero_none;
  }
  return;
}


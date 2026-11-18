// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 1

// oodle_enchuff3_x64_bmi2_kern @ 140d3b7a0

void oodle_enchuff3_x64_bmi2_kern(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte *pbVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  
  lVar1 = param_1[3];
  lVar2 = param_1[2];
  pbVar9 = (byte *)*param_1;
  puVar10 = (ulonglong *)param_1[4];
  uVar11 = param_1[7];
  bVar8 = *(byte *)(param_1 + 10);
  lVar12 = param_1[5];
  uVar13 = param_1[8];
  bVar20 = *(byte *)((longlong)param_1 + 0x54);
  puVar14 = (ulonglong *)param_1[6];
  uVar15 = param_1[9];
  bVar25 = *(byte *)(param_1 + 0xb);
  param_1[1] = param_1[1] + -0x10;
  do {
    bVar3 = bVar8 + *(char *)(lVar1 + (ulonglong)*pbVar9);
    bVar16 = bVar20 + *(char *)(lVar1 + (ulonglong)pbVar9[1]);
    bVar21 = bVar25 + *(char *)(lVar1 + (ulonglong)pbVar9[2]);
    bVar4 = bVar3 + *(char *)(lVar1 + (ulonglong)pbVar9[3]);
    bVar17 = bVar16 + *(char *)(lVar1 + (ulonglong)pbVar9[4]);
    bVar22 = bVar21 + *(char *)(lVar1 + (ulonglong)pbVar9[5]);
    bVar5 = bVar4 + *(char *)(lVar1 + (ulonglong)pbVar9[6]);
    bVar18 = bVar17 + *(char *)(lVar1 + (ulonglong)pbVar9[7]);
    bVar23 = bVar22 + *(char *)(lVar1 + (ulonglong)pbVar9[8]);
    bVar6 = bVar5 + *(char *)(lVar1 + (ulonglong)pbVar9[9]);
    bVar19 = bVar18 + *(char *)(lVar1 + (ulonglong)pbVar9[10]);
    bVar24 = bVar23 + *(char *)(lVar1 + (ulonglong)pbVar9[0xb]);
    bVar7 = bVar6 + *(char *)(lVar1 + (ulonglong)pbVar9[0xc]);
    uVar11 = uVar11 | *(longlong *)(lVar2 + (ulonglong)*pbVar9 * 8) << ((ulonglong)bVar8 & 0x3f) |
             *(longlong *)(lVar2 + (ulonglong)pbVar9[3] * 8) << ((ulonglong)bVar3 & 0x3f) |
             *(longlong *)(lVar2 + (ulonglong)pbVar9[6] * 8) << ((ulonglong)bVar4 & 0x3f) |
             *(longlong *)(lVar2 + (ulonglong)pbVar9[9] * 8) << ((ulonglong)bVar5 & 0x3f) |
             *(longlong *)(lVar2 + (ulonglong)pbVar9[0xc] * 8) << ((ulonglong)bVar6 & 0x3f);
    bVar3 = bVar19 + *(char *)(lVar1 + (ulonglong)pbVar9[0xd]);
    uVar13 = uVar13 | *(longlong *)(lVar2 + (ulonglong)pbVar9[1] * 8) << ((ulonglong)bVar20 & 0x3f)
             | *(longlong *)(lVar2 + (ulonglong)pbVar9[4] * 8) << ((ulonglong)bVar16 & 0x3f) |
             *(longlong *)(lVar2 + (ulonglong)pbVar9[7] * 8) << ((ulonglong)bVar17 & 0x3f) |
             *(longlong *)(lVar2 + (ulonglong)pbVar9[10] * 8) << ((ulonglong)bVar18 & 0x3f) |
             *(longlong *)(lVar2 + (ulonglong)pbVar9[0xd] * 8) << ((ulonglong)bVar19 & 0x3f);
    bVar4 = bVar24 + *(char *)(lVar1 + (ulonglong)pbVar9[0xe]);
    uVar15 = uVar15 | *(longlong *)(lVar2 + (ulonglong)pbVar9[2] * 8) << ((ulonglong)bVar25 & 0x3f)
             | *(longlong *)(lVar2 + (ulonglong)pbVar9[5] * 8) << ((ulonglong)bVar21 & 0x3f) |
             *(longlong *)(lVar2 + (ulonglong)pbVar9[8] * 8) << ((ulonglong)bVar22 & 0x3f) |
             *(longlong *)(lVar2 + (ulonglong)pbVar9[0xb] * 8) << ((ulonglong)bVar23 & 0x3f) |
             *(longlong *)(lVar2 + (ulonglong)pbVar9[0xe] * 8) << ((ulonglong)bVar24 & 0x3f);
    pbVar9 = pbVar9 + 0xf;
    *puVar10 = uVar11;
    bVar8 = bVar7 & 7;
    uVar11 = uVar11 >> ((ulonglong)(bVar7 & 0xfffffff8) & 0x3f);
    puVar10 = (ulonglong *)((longlong)puVar10 + (ulonglong)(bVar7 >> 3));
    *(ulonglong *)(lVar12 + -8) =
         uVar13 >> 0x38 | (uVar13 & 0xff000000000000) >> 0x28 | (uVar13 & 0xff0000000000) >> 0x18 |
         (uVar13 & 0xff00000000) >> 8 | (uVar13 & 0xff000000) << 8 | (uVar13 & 0xff0000) << 0x18 |
         (uVar13 & 0xff00) << 0x28 | uVar13 << 0x38;
    bVar20 = bVar3 & 7;
    uVar13 = uVar13 >> ((ulonglong)(bVar3 & 0xfffffff8) & 0x3f);
    lVar12 = lVar12 - (ulonglong)(bVar3 >> 3);
    *puVar14 = uVar15;
    bVar25 = bVar4 & 7;
    uVar15 = uVar15 >> ((ulonglong)(bVar4 & 0xfffffff8) & 0x3f);
    puVar14 = (ulonglong *)((longlong)puVar14 + (ulonglong)(bVar4 >> 3));
  } while (pbVar9 <= (byte *)param_1[1]);
  param_1[1] = param_1[1] + 0x10;
  *param_1 = pbVar9;
  param_1[4] = puVar10;
  param_1[7] = uVar11;
  *(uint *)(param_1 + 10) = (uint)bVar8;
  param_1[5] = lVar12;
  param_1[8] = uVar13;
  *(uint *)((longlong)param_1 + 0x54) = (uint)bVar20;
  param_1[6] = puVar14;
  param_1[9] = uVar15;
  *(uint *)(param_1 + 0xb) = (uint)bVar25;
  return;
}


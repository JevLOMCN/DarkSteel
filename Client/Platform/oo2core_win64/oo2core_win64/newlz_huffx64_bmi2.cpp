// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 1

// oodle_newLZ_huff_x64_bmi2_kern @ 140d3bc40

undefined8 oodle_newLZ_huff_x64_bmi2_kern(longlong *param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  longlong lVar14;
  ulonglong uVar15;
  byte bVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  ulonglong *puVar25;
  ulonglong *puVar26;
  ulonglong *puVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  
  puVar27 = (ulonglong *)param_1[8];
  if (7 < (ulonglong)(param_1[7] - (longlong)puVar27)) {
    lVar14 = param_1[2];
    if (0xe < (ulonglong)(lVar14 - *param_1)) {
      puVar25 = (ulonglong *)param_1[6];
      uVar28 = 0;
      uVar18 = 0;
      uVar29 = 0;
      uVar22 = 0;
      uVar30 = 0;
      uVar20 = 0;
      puVar26 = (ulonglong *)(param_1[7] + -8);
      puVar23 = (undefined1 *)*param_1;
      do {
        uVar19 = (uint)uVar20;
        uVar21 = (uint)uVar22;
        uVar17 = (uint)uVar18;
        puVar24 = puVar23;
        if ((puVar27 < puVar25) || (puVar26 < puVar27)) break;
        puVar24 = puVar23 + 0xf;
        uVar15 = *puVar26;
        uVar28 = uVar28 | *puVar25 << (uVar18 & 0x3f);
        uVar29 = uVar29 | (uVar15 >> 0x38 | (uVar15 & 0xff000000000000) >> 0x28 |
                           (uVar15 & 0xff0000000000) >> 0x18 | (uVar15 & 0xff00000000) >> 8 |
                           (uVar15 & 0xff000000) << 8 | (uVar15 & 0xff0000) << 0x18 |
                           (uVar15 & 0xff00) << 0x28 | uVar15 << 0x38) << (uVar22 & 0x3f);
        uVar30 = uVar30 | *puVar27 << (uVar20 & 0x3f);
        uVar1 = *(ushort *)((longlong)param_1 + (uVar28 & 0x7ff) * 2 + 0x90);
        uVar28 = uVar28 >> ((ulonglong)uVar1 & 0x3f);
        *puVar23 = (char)(uVar1 >> 8);
        puVar25 = (ulonglong *)((longlong)puVar25 + (7 - (ulonglong)(uVar17 >> 3)));
        uVar2 = *(ushort *)((longlong)param_1 + (uVar29 & 0x7ff) * 2 + 0x90);
        uVar29 = uVar29 >> ((ulonglong)uVar2 & 0x3f);
        puVar23[1] = (char)(uVar2 >> 8);
        puVar26 = (ulonglong *)((longlong)puVar26 + ((ulonglong)(uVar21 >> 3) - 7));
        uVar3 = *(ushort *)((longlong)param_1 + (uVar30 & 0x7ff) * 2 + 0x90);
        uVar30 = uVar30 >> ((ulonglong)uVar3 & 0x3f);
        puVar23[2] = (char)(uVar3 >> 8);
        puVar27 = (ulonglong *)((longlong)puVar27 + (7 - (ulonglong)(uVar19 >> 3)));
        uVar4 = *(ushort *)((longlong)param_1 + (uVar28 & 0x7ff) * 2 + 0x90);
        uVar28 = uVar28 >> ((ulonglong)uVar4 & 0x3f);
        puVar23[3] = (char)(uVar4 >> 8);
        uVar5 = *(ushort *)((longlong)param_1 + (uVar29 & 0x7ff) * 2 + 0x90);
        uVar29 = uVar29 >> ((ulonglong)uVar5 & 0x3f);
        puVar23[4] = (char)(uVar5 >> 8);
        uVar6 = *(ushort *)((longlong)param_1 + (uVar30 & 0x7ff) * 2 + 0x90);
        uVar30 = uVar30 >> ((ulonglong)uVar6 & 0x3f);
        puVar23[5] = (char)(uVar6 >> 8);
        uVar7 = *(ushort *)((longlong)param_1 + (uVar28 & 0x7ff) * 2 + 0x90);
        uVar28 = uVar28 >> ((ulonglong)uVar7 & 0x3f);
        puVar23[6] = (char)(uVar7 >> 8);
        uVar8 = *(ushort *)((longlong)param_1 + (uVar29 & 0x7ff) * 2 + 0x90);
        uVar29 = uVar29 >> ((ulonglong)uVar8 & 0x3f);
        puVar23[7] = (char)(uVar8 >> 8);
        uVar9 = *(ushort *)((longlong)param_1 + (uVar30 & 0x7ff) * 2 + 0x90);
        uVar30 = uVar30 >> ((ulonglong)uVar9 & 0x3f);
        puVar23[8] = (char)(uVar9 >> 8);
        uVar10 = *(ushort *)((longlong)param_1 + (uVar28 & 0x7ff) * 2 + 0x90);
        uVar28 = uVar28 >> ((ulonglong)uVar10 & 0x3f);
        puVar23[9] = (char)(uVar10 >> 8);
        uVar11 = *(ushort *)((longlong)param_1 + (uVar29 & 0x7ff) * 2 + 0x90);
        uVar29 = uVar29 >> ((ulonglong)uVar11 & 0x3f);
        puVar23[10] = (char)(uVar11 >> 8);
        uVar12 = *(ushort *)((longlong)param_1 + (uVar30 & 0x7ff) * 2 + 0x90);
        uVar30 = uVar30 >> ((ulonglong)uVar12 & 0x3f);
        puVar23[0xb] = (char)(uVar12 >> 8);
        uVar13 = *(ushort *)((longlong)param_1 + (uVar28 & 0x7ff) * 2 + 0x90);
        uVar28 = uVar28 >> ((ulonglong)uVar13 & 0x3f);
        bVar16 = ((((((byte)uVar18 | 0x38) - (char)uVar1) - (char)uVar4) - (char)uVar7) -
                 (char)uVar10) - (char)uVar13;
        uVar18 = (ulonglong)bVar16;
        uVar17 = (uint)bVar16;
        puVar23[0xc] = (char)(uVar13 >> 8);
        uVar1 = *(ushort *)((longlong)param_1 + (uVar29 & 0x7ff) * 2 + 0x90);
        uVar29 = uVar29 >> ((ulonglong)uVar1 & 0x3f);
        bVar16 = ((((((byte)uVar22 | 0x38) - (char)uVar2) - (char)uVar5) - (char)uVar8) -
                 (char)uVar11) - (char)uVar1;
        uVar22 = (ulonglong)bVar16;
        uVar21 = (uint)bVar16;
        puVar23[0xd] = (char)(uVar1 >> 8);
        uVar1 = *(ushort *)((longlong)param_1 + (uVar30 & 0x7ff) * 2 + 0x90);
        uVar30 = uVar30 >> ((ulonglong)uVar1 & 0x3f);
        bVar16 = ((((((byte)uVar20 | 0x38) - (char)uVar3) - (char)uVar6) - (char)uVar9) -
                 (char)uVar12) - (char)uVar1;
        uVar20 = (ulonglong)bVar16;
        uVar19 = (uint)bVar16;
        puVar23[0xe] = (char)(uVar1 >> 8);
        puVar23 = puVar24;
      } while (puVar24 < (undefined1 *)(lVar14 + -0xe));
      *param_1 = (longlong)puVar24;
      param_1[6] = (longlong)puVar25 - (ulonglong)(uVar17 >> 3);
      *(uint *)(param_1 + 0xf) = uVar17 & 7;
      *(int *)(param_1 + 0xc) = (int)uVar28;
      param_1[7] = (longlong)puVar26 + (ulonglong)(uVar21 >> 3) + 8;
      *(uint *)((longlong)param_1 + 0x7c) = uVar21 & 7;
      *(int *)((longlong)param_1 + 100) = (int)uVar29;
      param_1[8] = (longlong)puVar27 - (ulonglong)(uVar19 >> 3);
      *(uint *)(param_1 + 0x10) = uVar19 & 7;
      *(int *)(param_1 + 0xd) = (int)uVar30;
    }
  }
  return 1;
}


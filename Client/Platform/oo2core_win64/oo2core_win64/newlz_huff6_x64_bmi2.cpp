// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 1

// oodle_newLZ_huff6_x64_bmi2_kern @ 140d3c780

undefined8 oodle_newLZ_huff6_x64_bmi2_kern(undefined8 *param_1)

{
  ushort uVar1;
  ulonglong *puVar2;
  int iVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  
  if (0xe < (ulonglong)(param_1[3] - param_1[1])) {
    puVar2 = (ulonglong *)param_1[6];
    puVar4 = (ulonglong *)param_1[8];
    if (7 < (ulonglong)(param_1[7] - (longlong)puVar4)) {
      puVar5 = (ulonglong *)(param_1[7] + -8);
      puVar7 = (ulonglong *)param_1[9];
      puVar10 = (ulonglong *)param_1[0xb];
      if (7 < (ulonglong)(param_1[10] - (longlong)puVar10)) {
        puVar8 = (ulonglong *)(param_1[10] + -8);
        param_1[3] = param_1[3] + -0xe;
        uVar11 = 0;
        uVar13 = 0;
        uVar14 = 0;
        uVar15 = 0;
        uVar16 = 0;
        uVar17 = 0;
        puVar6 = (ulonglong *)param_1[6];
        puVar18 = (undefined1 *)*param_1;
        puVar20 = (undefined1 *)param_1[1];
        while ((puVar2 <= puVar4 && (puVar4 <= puVar5))) {
          puVar19 = puVar18 + 0xf;
          puVar21 = puVar20 + 0xf;
          if ((puVar10 < puVar7) || (puVar8 < puVar10)) break;
          uVar12 = (*puVar2 | 0x8000000000000000) >> uVar11;
          uVar11 = *puVar5;
          uVar13 = (uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 |
                    (uVar11 & 0xff0000000000) >> 0x18 | (uVar11 & 0xff00000000) >> 8 |
                    (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 |
                    (uVar11 & 0xff00) << 0x28 | (uVar11 & 0xff | 0x80) << 0x38) >> uVar13;
          uVar14 = (*puVar4 | 0x8000000000000000) >> uVar14;
          uVar15 = (*puVar7 | 0x8000000000000000) >> uVar15;
          uVar11 = *puVar8;
          uVar16 = (uVar11 >> 0x38 | (uVar11 & 0xff000000000000) >> 0x28 |
                    (uVar11 & 0xff0000000000) >> 0x18 | (uVar11 & 0xff00000000) >> 8 |
                    (uVar11 & 0xff000000) << 8 | (uVar11 & 0xff0000) << 0x18 |
                    (uVar11 & 0xff00) << 0x28 | (uVar11 & 0xff | 0x80) << 0x38) >> uVar16;
          uVar17 = (*puVar10 | 0x8000000000000000) >> uVar17;
          uVar1 = *(ushort *)((longlong)param_1 + (uVar12 & 0x7ff) * 2 + 0x90);
          uVar12 = uVar12 >> ((ulonglong)uVar1 & 0x3f);
          *puVar18 = (char)(uVar1 >> 8);
          uVar1 = *(ushort *)((longlong)param_1 + (uVar13 & 0x7ff) * 2 + 0x90);
          uVar13 = uVar13 >> ((ulonglong)uVar1 & 0x3f);
          puVar18[1] = (char)(uVar1 >> 8);
          uVar1 = *(ushort *)((longlong)param_1 + (uVar14 & 0x7ff) * 2 + 0x90);
          uVar14 = uVar14 >> ((ulonglong)uVar1 & 0x3f);
          puVar18[2] = (char)(uVar1 >> 8);
          uVar1 = *(ushort *)((longlong)param_1 + (uVar15 & 0x7ff) * 2 + 0x90);
          uVar15 = uVar15 >> ((ulonglong)uVar1 & 0x3f);
          *puVar20 = (char)(uVar1 >> 8);
          uVar1 = *(ushort *)((longlong)param_1 + (uVar16 & 0x7ff) * 2 + 0x90);
          uVar16 = uVar16 >> ((ulonglong)uVar1 & 0x3f);
          puVar20[1] = (char)(uVar1 >> 8);
          uVar1 = *(ushort *)((longlong)param_1 + (uVar17 & 0x7ff) * 2 + 0x90);
          uVar17 = uVar17 >> ((ulonglong)uVar1 & 0x3f);
          puVar20[2] = (char)(uVar1 >> 8);
          uVar1 = *(ushort *)((longlong)param_1 + (uVar12 & 0x7ff) * 2 + 0x90);
          uVar12 = uVar12 >> ((ulonglong)uVar1 & 0x3f);
          puVar18[3] = (char)(uVar1 >> 8);
          uVar1 = *(ushort *)((longlong)param_1 + (uVar13 & 0x7ff) * 2 + 0x90);
          uVar13 = uVar13 >> ((ulonglong)uVar1 & 0x3f);
          puVar18[4] = (char)(uVar1 >> 8);
          uVar1 = *(ushort *)((longlong)param_1 + (uVar14 & 0x7ff) * 2 + 0x90);
          uVar14 = uVar14 >> ((ulonglong)uVar1 & 0x3f);
          puVar18[5] = (char)(uVar1 >> 8);
          uVar1 = *(ushort *)((longlong)param_1 + (uVar15 & 0x7ff) * 2 + 0x90);
          uVar15 = uVar15 >> ((ulonglong)uVar1 & 0x3f);
          puVar20[3] = (char)(uVar1 >> 8);
          uVar1 = *(ushort *)((longlong)param_1 + (uVar16 & 0x7ff) * 2 + 0x90);
          uVar16 = uVar16 >> ((ulonglong)uVar1 & 0x3f);
          puVar20[4] = (char)(uVar1 >> 8);
          uVar1 = *(ushort *)((longlong)param_1 + (uVar17 & 0x7ff) * 2 + 0x90);
          uVar17 = uVar17 >> ((ulonglong)uVar1 & 0x3f);
          puVar20[5] = (char)(uVar1 >> 8);
          uVar1 = *(ushort *)((longlong)param_1 + (uVar12 & 0x7ff) * 2 + 0x90);
          uVar12 = uVar12 >> ((ulonglong)uVar1 & 0x3f);
          puVar18[6] = (char)(uVar1 >> 8);
          uVar1 = *(ushort *)((longlong)param_1 + (uVar13 & 0x7ff) * 2 + 0x90);
          uVar13 = uVar13 >> ((ulonglong)uVar1 & 0x3f);
          puVar18[7] = (char)(uVar1 >> 8);
          uVar1 = *(ushort *)((longlong)param_1 + (uVar14 & 0x7ff) * 2 + 0x90);
          uVar14 = uVar14 >> ((ulonglong)uVar1 & 0x3f);
          puVar18[8] = (char)(uVar1 >> 8);
          uVar1 = *(ushort *)((longlong)param_1 + (uVar15 & 0x7ff) * 2 + 0x90);
          uVar15 = uVar15 >> ((ulonglong)uVar1 & 0x3f);
          puVar20[6] = (char)(uVar1 >> 8);
          uVar1 = *(ushort *)((longlong)param_1 + (uVar16 & 0x7ff) * 2 + 0x90);
          uVar16 = uVar16 >> ((ulonglong)uVar1 & 0x3f);
          puVar20[7] = (char)(uVar1 >> 8);
          uVar1 = *(ushort *)((longlong)param_1 + (uVar17 & 0x7ff) * 2 + 0x90);
          uVar17 = uVar17 >> ((ulonglong)uVar1 & 0x3f);
          puVar20[8] = (char)(uVar1 >> 8);
          uVar1 = *(ushort *)((longlong)param_1 + (uVar12 & 0x7ff) * 2 + 0x90);
          uVar12 = uVar12 >> ((ulonglong)uVar1 & 0x3f);
          puVar18[9] = (char)(uVar1 >> 8);
          uVar1 = *(ushort *)((longlong)param_1 + (uVar13 & 0x7ff) * 2 + 0x90);
          uVar13 = uVar13 >> ((ulonglong)uVar1 & 0x3f);
          puVar18[10] = (char)(uVar1 >> 8);
          uVar1 = *(ushort *)((longlong)param_1 + (uVar14 & 0x7ff) * 2 + 0x90);
          uVar14 = uVar14 >> ((ulonglong)uVar1 & 0x3f);
          puVar18[0xb] = (char)(uVar1 >> 8);
          uVar1 = *(ushort *)((longlong)param_1 + (uVar15 & 0x7ff) * 2 + 0x90);
          uVar15 = uVar15 >> ((ulonglong)uVar1 & 0x3f);
          puVar20[9] = (char)(uVar1 >> 8);
          uVar1 = *(ushort *)((longlong)param_1 + (uVar16 & 0x7ff) * 2 + 0x90);
          uVar16 = uVar16 >> ((ulonglong)uVar1 & 0x3f);
          puVar20[10] = (char)(uVar1 >> 8);
          uVar1 = *(ushort *)((longlong)param_1 + (uVar17 & 0x7ff) * 2 + 0x90);
          uVar17 = uVar17 >> ((ulonglong)uVar1 & 0x3f);
          puVar20[0xb] = (char)(uVar1 >> 8);
          uVar1 = *(ushort *)((longlong)param_1 + (uVar12 & 0x7ff) * 2 + 0x90);
          uVar11 = LZCOUNT(uVar12) + (ulonglong)uVar1;
          puVar18[0xc] = (char)(uVar1 >> 8);
          uVar1 = *(ushort *)((longlong)param_1 + (uVar13 & 0x7ff) * 2 + 0x90);
          uVar13 = LZCOUNT(uVar13) + (ulonglong)uVar1;
          puVar18[0xd] = (char)(uVar1 >> 8);
          uVar1 = *(ushort *)((longlong)param_1 + (uVar14 & 0x7ff) * 2 + 0x90);
          uVar14 = LZCOUNT(uVar14) + (ulonglong)uVar1;
          puVar18[0xe] = (char)(uVar1 >> 8);
          uVar1 = *(ushort *)((longlong)param_1 + (uVar15 & 0x7ff) * 2 + 0x90);
          uVar15 = LZCOUNT(uVar15) + (ulonglong)uVar1;
          puVar20[0xc] = (char)(uVar1 >> 8);
          uVar1 = *(ushort *)((longlong)param_1 + (uVar16 & 0x7ff) * 2 + 0x90);
          uVar16 = LZCOUNT(uVar16) + (ulonglong)uVar1;
          puVar20[0xd] = (char)(uVar1 >> 8);
          uVar1 = *(ushort *)((longlong)param_1 + (uVar17 & 0x7ff) * 2 + 0x90);
          uVar17 = LZCOUNT(uVar17) + (ulonglong)uVar1;
          puVar20[0xe] = (char)(uVar1 >> 8);
          puVar2 = (ulonglong *)((longlong)puVar6 + ((uVar11 & 0xff) >> 3));
          uVar11 = uVar11 & 7;
          puVar5 = (ulonglong *)((longlong)puVar5 - ((uVar13 & 0xff) >> 3));
          uVar13 = uVar13 & 7;
          puVar4 = (ulonglong *)((longlong)puVar4 + ((uVar14 & 0xff) >> 3));
          uVar14 = uVar14 & 7;
          puVar7 = (ulonglong *)((longlong)puVar7 + ((uVar15 & 0xff) >> 3));
          uVar15 = uVar15 & 7;
          puVar8 = (ulonglong *)((longlong)puVar8 - ((uVar16 & 0xff) >> 3));
          uVar16 = uVar16 & 7;
          puVar10 = (ulonglong *)((longlong)puVar10 + ((uVar17 & 0xff) >> 3));
          uVar17 = uVar17 & 7;
          puVar6 = puVar2;
          puVar18 = puVar19;
          puVar20 = puVar21;
          if ((undefined1 *)param_1[3] <= puVar21) break;
        }
        *param_1 = puVar18;
        param_1[1] = puVar20;
        param_1[3] = param_1[3] + 0xe;
        puVar6 = puVar5 + 1;
        if (((puVar4 < puVar2) ||
            (((puVar6 <= puVar4 && ((puVar4 != puVar6 || (uVar13 != 0 || uVar14 != 0)))) ||
             (puVar9 = puVar8 + 1, puVar10 < puVar7)))) ||
           ((puVar9 <= puVar10 && ((puVar10 != puVar9 || (uVar16 != 0 || uVar17 != 0)))))) {
          return 0;
        }
        iVar3 = 0;
        if (uVar11 != 0) {
          uVar12 = *puVar2;
          puVar2 = (ulonglong *)((longlong)puVar2 + 1);
          iVar3 = 8 - (int)uVar11;
          *(uint *)(param_1 + 0xc) = (uint)(byte)((byte)uVar12 >> (sbyte)uVar11);
        }
        param_1[6] = puVar2;
        *(int *)(param_1 + 0xf) = iVar3;
        iVar3 = 0;
        if (uVar13 != 0) {
          puVar6 = (ulonglong *)((longlong)puVar5 + 7);
          iVar3 = 8 - (int)uVar13;
          *(uint *)((longlong)param_1 + 100) =
               (uint)(*(byte *)((longlong)puVar5 + 7) >> (sbyte)uVar13);
        }
        param_1[7] = puVar6;
        *(int *)((longlong)param_1 + 0x7c) = iVar3;
        iVar3 = 0;
        if (uVar14 != 0) {
          uVar11 = *puVar4;
          puVar4 = (ulonglong *)((longlong)puVar4 + 1);
          iVar3 = 8 - (int)uVar14;
          *(uint *)(param_1 + 0xd) = (uint)(byte)((byte)uVar11 >> (sbyte)uVar14);
        }
        param_1[8] = puVar4;
        *(int *)(param_1 + 0x10) = iVar3;
        iVar3 = 0;
        if (uVar15 != 0) {
          uVar11 = *puVar7;
          puVar7 = (ulonglong *)((longlong)puVar7 + 1);
          iVar3 = 8 - (int)uVar15;
          *(uint *)((longlong)param_1 + 0x6c) = (uint)(byte)((byte)uVar11 >> (sbyte)uVar15);
        }
        param_1[9] = puVar7;
        *(int *)((longlong)param_1 + 0x84) = iVar3;
        iVar3 = 0;
        if (uVar16 != 0) {
          puVar9 = (ulonglong *)((longlong)puVar8 + 7);
          iVar3 = 8 - (int)uVar16;
          *(uint *)(param_1 + 0xe) = (uint)(*(byte *)((longlong)puVar8 + 7) >> (sbyte)uVar16);
        }
        param_1[10] = puVar9;
        *(int *)(param_1 + 0x11) = iVar3;
        iVar3 = 0;
        if (uVar17 != 0) {
          uVar11 = *puVar10;
          puVar10 = (ulonglong *)((longlong)puVar10 + 1);
          iVar3 = 8 - (int)uVar17;
          *(uint *)((longlong)param_1 + 0x74) = (uint)(byte)((byte)uVar11 >> (sbyte)uVar17);
        }
        param_1[0xb] = puVar10;
        *(int *)((longlong)param_1 + 0x8c) = iVar3;
      }
    }
  }
  return 1;
}


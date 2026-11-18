// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 1

// oodle_newLZ_huff6_x64_generic_kern @ 140d3c220

undefined8 oodle_newLZ_huff6_x64_generic_kern(undefined8 *param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  ulonglong *puVar3;
  int iVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ulonglong *puVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  
  if (0xe < (ulonglong)(param_1[3] - param_1[1])) {
    puVar3 = (ulonglong *)param_1[6];
    puVar5 = (ulonglong *)param_1[8];
    if (7 < (ulonglong)(param_1[7] - (longlong)puVar5)) {
      puVar6 = (ulonglong *)(param_1[7] + -8);
      puVar8 = (ulonglong *)param_1[9];
      puVar11 = (ulonglong *)param_1[0xb];
      if (7 < (ulonglong)(param_1[10] - (longlong)puVar11)) {
        puVar9 = (ulonglong *)(param_1[10] + -8);
        param_1[3] = param_1[3] + -0xe;
        uVar12 = 0;
        uVar14 = 0;
        uVar15 = 0;
        uVar16 = 0;
        uVar17 = 0;
        uVar18 = 0;
        puVar7 = (ulonglong *)param_1[6];
        puVar19 = (undefined1 *)*param_1;
        puVar21 = (undefined1 *)param_1[1];
        while ((puVar3 <= puVar5 && (puVar5 <= puVar6))) {
          puVar20 = puVar19 + 0xf;
          puVar22 = puVar21 + 0xf;
          if ((puVar11 < puVar8) || (puVar9 < puVar11)) break;
          uVar13 = (*puVar3 | 0x8000000000000000) >> (sbyte)uVar12;
          uVar12 = *puVar6;
          uVar14 = (uVar12 >> 0x38 | (uVar12 & 0xff000000000000) >> 0x28 |
                    (uVar12 & 0xff0000000000) >> 0x18 | (uVar12 & 0xff00000000) >> 8 |
                    (uVar12 & 0xff000000) << 8 | (uVar12 & 0xff0000) << 0x18 |
                    (uVar12 & 0xff00) << 0x28 | (uVar12 & 0xff | 0x80) << 0x38) >> (sbyte)uVar14;
          uVar15 = (*puVar5 | 0x8000000000000000) >> (sbyte)uVar15;
          uVar16 = (*puVar8 | 0x8000000000000000) >> (sbyte)uVar16;
          uVar12 = *puVar9;
          uVar17 = (uVar12 >> 0x38 | (uVar12 & 0xff000000000000) >> 0x28 |
                    (uVar12 & 0xff0000000000) >> 0x18 | (uVar12 & 0xff00000000) >> 8 |
                    (uVar12 & 0xff000000) << 8 | (uVar12 & 0xff0000) << 0x18 |
                    (uVar12 & 0xff00) << 0x28 | (uVar12 & 0xff | 0x80) << 0x38) >> (sbyte)uVar17;
          uVar18 = (*puVar11 | 0x8000000000000000) >> (sbyte)uVar18;
          uVar1 = *(undefined2 *)((longlong)param_1 + (uVar13 & 0x7ff) * 2 + 0x90);
          uVar13 = uVar13 >> ((byte)uVar1 & 0x3f);
          *puVar19 = (char)((ushort)uVar1 >> 8);
          uVar1 = *(undefined2 *)((longlong)param_1 + (uVar14 & 0x7ff) * 2 + 0x90);
          uVar14 = uVar14 >> ((byte)uVar1 & 0x3f);
          puVar19[1] = (char)((ushort)uVar1 >> 8);
          uVar1 = *(undefined2 *)((longlong)param_1 + (uVar15 & 0x7ff) * 2 + 0x90);
          uVar15 = uVar15 >> ((byte)uVar1 & 0x3f);
          puVar19[2] = (char)((ushort)uVar1 >> 8);
          uVar1 = *(undefined2 *)((longlong)param_1 + (uVar16 & 0x7ff) * 2 + 0x90);
          uVar16 = uVar16 >> ((byte)uVar1 & 0x3f);
          *puVar21 = (char)((ushort)uVar1 >> 8);
          uVar1 = *(undefined2 *)((longlong)param_1 + (uVar17 & 0x7ff) * 2 + 0x90);
          uVar17 = uVar17 >> ((byte)uVar1 & 0x3f);
          puVar21[1] = (char)((ushort)uVar1 >> 8);
          uVar1 = *(undefined2 *)((longlong)param_1 + (uVar18 & 0x7ff) * 2 + 0x90);
          uVar18 = uVar18 >> ((byte)uVar1 & 0x3f);
          puVar21[2] = (char)((ushort)uVar1 >> 8);
          uVar1 = *(undefined2 *)((longlong)param_1 + (uVar13 & 0x7ff) * 2 + 0x90);
          uVar13 = uVar13 >> ((byte)uVar1 & 0x3f);
          puVar19[3] = (char)((ushort)uVar1 >> 8);
          uVar1 = *(undefined2 *)((longlong)param_1 + (uVar14 & 0x7ff) * 2 + 0x90);
          uVar14 = uVar14 >> ((byte)uVar1 & 0x3f);
          puVar19[4] = (char)((ushort)uVar1 >> 8);
          uVar1 = *(undefined2 *)((longlong)param_1 + (uVar15 & 0x7ff) * 2 + 0x90);
          uVar15 = uVar15 >> ((byte)uVar1 & 0x3f);
          puVar19[5] = (char)((ushort)uVar1 >> 8);
          uVar1 = *(undefined2 *)((longlong)param_1 + (uVar16 & 0x7ff) * 2 + 0x90);
          uVar16 = uVar16 >> ((byte)uVar1 & 0x3f);
          puVar21[3] = (char)((ushort)uVar1 >> 8);
          uVar1 = *(undefined2 *)((longlong)param_1 + (uVar17 & 0x7ff) * 2 + 0x90);
          uVar17 = uVar17 >> ((byte)uVar1 & 0x3f);
          puVar21[4] = (char)((ushort)uVar1 >> 8);
          uVar1 = *(undefined2 *)((longlong)param_1 + (uVar18 & 0x7ff) * 2 + 0x90);
          uVar18 = uVar18 >> ((byte)uVar1 & 0x3f);
          puVar21[5] = (char)((ushort)uVar1 >> 8);
          uVar1 = *(undefined2 *)((longlong)param_1 + (uVar13 & 0x7ff) * 2 + 0x90);
          uVar13 = uVar13 >> ((byte)uVar1 & 0x3f);
          puVar19[6] = (char)((ushort)uVar1 >> 8);
          uVar1 = *(undefined2 *)((longlong)param_1 + (uVar14 & 0x7ff) * 2 + 0x90);
          uVar14 = uVar14 >> ((byte)uVar1 & 0x3f);
          puVar19[7] = (char)((ushort)uVar1 >> 8);
          uVar1 = *(undefined2 *)((longlong)param_1 + (uVar15 & 0x7ff) * 2 + 0x90);
          uVar15 = uVar15 >> ((byte)uVar1 & 0x3f);
          puVar19[8] = (char)((ushort)uVar1 >> 8);
          uVar1 = *(undefined2 *)((longlong)param_1 + (uVar16 & 0x7ff) * 2 + 0x90);
          uVar16 = uVar16 >> ((byte)uVar1 & 0x3f);
          puVar21[6] = (char)((ushort)uVar1 >> 8);
          uVar1 = *(undefined2 *)((longlong)param_1 + (uVar17 & 0x7ff) * 2 + 0x90);
          uVar17 = uVar17 >> ((byte)uVar1 & 0x3f);
          puVar21[7] = (char)((ushort)uVar1 >> 8);
          uVar1 = *(undefined2 *)((longlong)param_1 + (uVar18 & 0x7ff) * 2 + 0x90);
          uVar18 = uVar18 >> ((byte)uVar1 & 0x3f);
          puVar21[8] = (char)((ushort)uVar1 >> 8);
          uVar1 = *(undefined2 *)((longlong)param_1 + (uVar13 & 0x7ff) * 2 + 0x90);
          uVar13 = uVar13 >> ((byte)uVar1 & 0x3f);
          puVar19[9] = (char)((ushort)uVar1 >> 8);
          uVar1 = *(undefined2 *)((longlong)param_1 + (uVar14 & 0x7ff) * 2 + 0x90);
          uVar14 = uVar14 >> ((byte)uVar1 & 0x3f);
          puVar19[10] = (char)((ushort)uVar1 >> 8);
          uVar1 = *(undefined2 *)((longlong)param_1 + (uVar15 & 0x7ff) * 2 + 0x90);
          uVar15 = uVar15 >> ((byte)uVar1 & 0x3f);
          puVar19[0xb] = (char)((ushort)uVar1 >> 8);
          uVar1 = *(undefined2 *)((longlong)param_1 + (uVar16 & 0x7ff) * 2 + 0x90);
          uVar16 = uVar16 >> ((byte)uVar1 & 0x3f);
          puVar21[9] = (char)((ushort)uVar1 >> 8);
          uVar1 = *(undefined2 *)((longlong)param_1 + (uVar17 & 0x7ff) * 2 + 0x90);
          uVar17 = uVar17 >> ((byte)uVar1 & 0x3f);
          puVar21[10] = (char)((ushort)uVar1 >> 8);
          uVar1 = *(undefined2 *)((longlong)param_1 + (uVar18 & 0x7ff) * 2 + 0x90);
          uVar18 = uVar18 >> ((byte)uVar1 & 0x3f);
          puVar21[0xb] = (char)((ushort)uVar1 >> 8);
          uVar2 = *(ushort *)((longlong)param_1 + (uVar13 & 0x7ff) * 2 + 0x90);
          uVar12 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> uVar12 == 0; uVar12 = uVar12 - 1) {
            }
          }
          uVar12 = (uVar12 ^ 0x3f) + (ulonglong)uVar2;
          puVar19[0xc] = (char)(uVar2 >> 8);
          uVar2 = *(ushort *)((longlong)param_1 + (uVar14 & 0x7ff) * 2 + 0x90);
          uVar13 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> uVar13 == 0; uVar13 = uVar13 - 1) {
            }
          }
          uVar14 = (uVar13 ^ 0x3f) + (ulonglong)uVar2;
          puVar19[0xd] = (char)(uVar2 >> 8);
          uVar2 = *(ushort *)((longlong)param_1 + (uVar15 & 0x7ff) * 2 + 0x90);
          uVar13 = 0x3f;
          if (uVar15 != 0) {
            for (; uVar15 >> uVar13 == 0; uVar13 = uVar13 - 1) {
            }
          }
          uVar15 = (uVar13 ^ 0x3f) + (ulonglong)uVar2;
          puVar19[0xe] = (char)(uVar2 >> 8);
          uVar2 = *(ushort *)((longlong)param_1 + (uVar16 & 0x7ff) * 2 + 0x90);
          uVar13 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> uVar13 == 0; uVar13 = uVar13 - 1) {
            }
          }
          uVar16 = (uVar13 ^ 0x3f) + (ulonglong)uVar2;
          puVar21[0xc] = (char)(uVar2 >> 8);
          uVar2 = *(ushort *)((longlong)param_1 + (uVar17 & 0x7ff) * 2 + 0x90);
          uVar13 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> uVar13 == 0; uVar13 = uVar13 - 1) {
            }
          }
          uVar17 = (uVar13 ^ 0x3f) + (ulonglong)uVar2;
          puVar21[0xd] = (char)(uVar2 >> 8);
          uVar2 = *(ushort *)((longlong)param_1 + (uVar18 & 0x7ff) * 2 + 0x90);
          uVar13 = 0x3f;
          if (uVar18 != 0) {
            for (; uVar18 >> uVar13 == 0; uVar13 = uVar13 - 1) {
            }
          }
          uVar18 = (uVar13 ^ 0x3f) + (ulonglong)uVar2;
          puVar21[0xe] = (char)(uVar2 >> 8);
          puVar3 = (ulonglong *)((longlong)puVar7 + ((uVar12 & 0xff) >> 3));
          uVar12 = uVar12 & 7;
          puVar6 = (ulonglong *)((longlong)puVar6 - ((uVar14 & 0xff) >> 3));
          uVar14 = uVar14 & 7;
          puVar5 = (ulonglong *)((longlong)puVar5 + ((uVar15 & 0xff) >> 3));
          uVar15 = uVar15 & 7;
          puVar8 = (ulonglong *)((longlong)puVar8 + ((uVar16 & 0xff) >> 3));
          uVar16 = uVar16 & 7;
          puVar9 = (ulonglong *)((longlong)puVar9 - ((uVar17 & 0xff) >> 3));
          uVar17 = uVar17 & 7;
          puVar11 = (ulonglong *)((longlong)puVar11 + ((uVar18 & 0xff) >> 3));
          uVar18 = uVar18 & 7;
          puVar7 = puVar3;
          puVar19 = puVar20;
          puVar21 = puVar22;
          if ((undefined1 *)param_1[3] <= puVar22) break;
        }
        *param_1 = puVar19;
        param_1[1] = puVar21;
        param_1[3] = param_1[3] + 0xe;
        puVar7 = puVar6 + 1;
        if (((puVar5 < puVar3) ||
            (((puVar7 <= puVar5 && ((puVar5 != puVar7 || (uVar14 != 0 || uVar15 != 0)))) ||
             (puVar10 = puVar9 + 1, puVar11 < puVar8)))) ||
           ((puVar10 <= puVar11 && ((puVar11 != puVar10 || (uVar17 != 0 || uVar18 != 0)))))) {
          return 0;
        }
        iVar4 = 0;
        if (uVar12 != 0) {
          uVar13 = *puVar3;
          puVar3 = (ulonglong *)((longlong)puVar3 + 1);
          iVar4 = 8 - (int)uVar12;
          *(uint *)(param_1 + 0xc) = (uint)(byte)((byte)uVar13 >> (sbyte)uVar12);
        }
        param_1[6] = puVar3;
        *(int *)(param_1 + 0xf) = iVar4;
        iVar4 = 0;
        if (uVar14 != 0) {
          puVar7 = (ulonglong *)((longlong)puVar6 + 7);
          iVar4 = 8 - (int)uVar14;
          *(uint *)((longlong)param_1 + 100) =
               (uint)(*(byte *)((longlong)puVar6 + 7) >> (sbyte)uVar14);
        }
        param_1[7] = puVar7;
        *(int *)((longlong)param_1 + 0x7c) = iVar4;
        iVar4 = 0;
        if (uVar15 != 0) {
          uVar12 = *puVar5;
          puVar5 = (ulonglong *)((longlong)puVar5 + 1);
          iVar4 = 8 - (int)uVar15;
          *(uint *)(param_1 + 0xd) = (uint)(byte)((byte)uVar12 >> (sbyte)uVar15);
        }
        param_1[8] = puVar5;
        *(int *)(param_1 + 0x10) = iVar4;
        iVar4 = 0;
        if (uVar16 != 0) {
          uVar12 = *puVar8;
          puVar8 = (ulonglong *)((longlong)puVar8 + 1);
          iVar4 = 8 - (int)uVar16;
          *(uint *)((longlong)param_1 + 0x6c) = (uint)(byte)((byte)uVar12 >> (sbyte)uVar16);
        }
        param_1[9] = puVar8;
        *(int *)((longlong)param_1 + 0x84) = iVar4;
        iVar4 = 0;
        if (uVar17 != 0) {
          puVar10 = (ulonglong *)((longlong)puVar9 + 7);
          iVar4 = 8 - (int)uVar17;
          *(uint *)(param_1 + 0xe) = (uint)(*(byte *)((longlong)puVar9 + 7) >> (sbyte)uVar17);
        }
        param_1[10] = puVar10;
        *(int *)(param_1 + 0x11) = iVar4;
        iVar4 = 0;
        if (uVar18 != 0) {
          uVar12 = *puVar11;
          puVar11 = (ulonglong *)((longlong)puVar11 + 1);
          iVar4 = 8 - (int)uVar18;
          *(uint *)((longlong)param_1 + 0x74) = (uint)(byte)((byte)uVar12 >> (sbyte)uVar18);
        }
        param_1[0xb] = puVar11;
        *(int *)((longlong)param_1 + 0x8c) = iVar4;
      }
    }
  }
  return 1;
}


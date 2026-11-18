// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 1

// oodle_newLZ_tans_x64_generic_kern @ 140d3d280

undefined8 oodle_newLZ_tans_x64_generic_kern(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  
  lVar16 = param_1[2];
  if (9 < (ulonglong)(lVar16 - param_1[1])) {
    puVar14 = (ulonglong *)param_1[3];
    lVar3 = param_1[4];
    if (0xe < (ulonglong)(lVar3 - (longlong)puVar14)) {
      puVar15 = (ulonglong *)(lVar3 + -0xf);
      uVar7 = (ulonglong)*(uint *)(param_1 + 7);
      uVar5 = (ulonglong)*(uint *)((longlong)param_1 + 0x3c);
      uVar8 = (ulonglong)*(uint *)(param_1 + 8);
      uVar9 = (ulonglong)*(uint *)((longlong)param_1 + 0x44);
      uVar13 = (ulonglong)*(uint *)(param_1 + 9);
      iVar4 = -(int)param_1[6];
      if (iVar4 != 0) {
        puVar14 = (ulonglong *)((longlong)puVar14 + -1);
        iVar4 = iVar4 + 8;
      }
      uVar6 = (*puVar14 | 0x8000000000000000) >> ((byte)iVar4 & 0x3f);
      iVar4 = -*(int *)((longlong)param_1 + 0x34);
      if (iVar4 != 0) {
        puVar15 = (ulonglong *)(lVar3 + -0xe);
        iVar4 = iVar4 + 8;
      }
      uVar17 = *(ulonglong *)((longlong)puVar15 + 7);
      uVar17 = (uVar17 >> 0x38 | (uVar17 & 0xff000000000000) >> 0x28 |
                (uVar17 & 0xff0000000000) >> 0x18 | (uVar17 & 0xff00000000) >> 8 |
                (uVar17 & 0xff000000) << 8 | (uVar17 & 0xff0000) << 0x18 | (uVar17 & 0xff00) << 0x28
               | (uVar17 & 0xff | 0x80) << 0x38) >> ((byte)iVar4 & 0x3f);
      lVar3 = *param_1;
      puVar10 = (undefined1 *)param_1[1];
      do {
        puVar11 = puVar10;
        if (puVar15 < puVar14) break;
        puVar11 = puVar10 + 10;
        uVar1 = *(uint *)(lVar3 + 4 + uVar7 * 8);
        uVar2 = *(uint *)(lVar3 + uVar7 * 8);
        *puVar10 = (char)(uVar1 >> 8);
        uVar7 = uVar6 >> ((byte)uVar1 & 0x3f);
        uVar18 = (ulonglong)((uVar2 & (uint)uVar6) + (uVar1 >> 0x10));
        uVar1 = *(uint *)(lVar3 + 4 + uVar5 * 8);
        uVar2 = *(uint *)(lVar3 + uVar5 * 8);
        puVar10[1] = (char)(uVar1 >> 8);
        uVar6 = uVar7 >> ((byte)uVar1 & 0x3f);
        uVar5 = (ulonglong)((uVar2 & (uint)uVar7) + (uVar1 >> 0x10));
        uVar1 = *(uint *)(lVar3 + 4 + uVar8 * 8);
        uVar2 = *(uint *)(lVar3 + uVar8 * 8);
        puVar10[2] = (char)(uVar1 >> 8);
        uVar7 = uVar6 >> ((byte)uVar1 & 0x3f);
        uVar19 = (ulonglong)((uVar2 & (uint)uVar6) + (uVar1 >> 0x10));
        uVar1 = *(uint *)(lVar3 + 4 + uVar9 * 8);
        uVar2 = *(uint *)(lVar3 + uVar9 * 8);
        puVar10[3] = (char)(uVar1 >> 8);
        uVar8 = uVar7 >> ((byte)uVar1 & 0x3f);
        uVar12 = (ulonglong)((uVar2 & (uint)uVar7) + (uVar1 >> 0x10));
        uVar1 = *(uint *)(lVar3 + 4 + uVar13 * 8);
        uVar2 = *(uint *)(lVar3 + uVar13 * 8);
        puVar10[4] = (char)(uVar1 >> 8);
        uVar9 = uVar8 >> ((byte)uVar1 & 0x3f);
        uVar13 = (ulonglong)((uVar2 & (uint)uVar8) + (uVar1 >> 0x10));
        uVar7 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> uVar7 == 0; uVar7 = uVar7 - 1) {
          }
        }
        puVar14 = (ulonglong *)((longlong)puVar14 + ((uVar7 ^ 0x3f) >> 3));
        uVar6 = (*puVar14 | 0x8000000000000000) >> ((byte)(uVar7 ^ 0x3f) & 7);
        uVar1 = *(uint *)(lVar3 + 4 + uVar18 * 8);
        uVar2 = *(uint *)(lVar3 + uVar18 * 8);
        puVar10[5] = (char)(uVar1 >> 8);
        uVar8 = uVar17 >> ((byte)uVar1 & 0x3f);
        uVar7 = (ulonglong)((uVar2 & (uint)uVar17) + (uVar1 >> 0x10));
        uVar1 = *(uint *)(lVar3 + 4 + uVar5 * 8);
        uVar2 = *(uint *)(lVar3 + uVar5 * 8);
        puVar10[6] = (char)(uVar1 >> 8);
        uVar9 = uVar8 >> ((byte)uVar1 & 0x3f);
        uVar5 = (ulonglong)((uVar2 & (uint)uVar8) + (uVar1 >> 0x10));
        uVar1 = *(uint *)(lVar3 + 4 + uVar19 * 8);
        uVar2 = *(uint *)(lVar3 + uVar19 * 8);
        puVar10[7] = (char)(uVar1 >> 8);
        uVar17 = uVar9 >> ((byte)uVar1 & 0x3f);
        uVar8 = (ulonglong)((uVar2 & (uint)uVar9) + (uVar1 >> 0x10));
        uVar1 = *(uint *)(lVar3 + 4 + uVar12 * 8);
        uVar2 = *(uint *)(lVar3 + uVar12 * 8);
        puVar10[8] = (char)(uVar1 >> 8);
        uVar18 = uVar17 >> ((byte)uVar1 & 0x3f);
        uVar9 = (ulonglong)((uVar2 & (uint)uVar17) + (uVar1 >> 0x10));
        uVar1 = *(uint *)(lVar3 + 4 + uVar13 * 8);
        uVar2 = *(uint *)(lVar3 + uVar13 * 8);
        puVar10[9] = (char)(uVar1 >> 8);
        uVar19 = uVar18 >> ((byte)uVar1 & 0x3f);
        uVar13 = (ulonglong)((uVar2 & (uint)uVar18) + (uVar1 >> 0x10));
        uVar17 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> uVar17 == 0; uVar17 = uVar17 - 1) {
          }
        }
        puVar15 = (ulonglong *)((longlong)puVar15 - ((uVar17 ^ 0x3f) >> 3));
        uVar18 = *(ulonglong *)((longlong)puVar15 + 7);
        uVar17 = (uVar18 >> 0x38 | (uVar18 & 0xff000000000000) >> 0x28 |
                  (uVar18 & 0xff0000000000) >> 0x18 | (uVar18 & 0xff00000000) >> 8 |
                  (uVar18 & 0xff000000) << 8 | (uVar18 & 0xff0000) << 0x18 |
                  (uVar18 & 0xff00) << 0x28 | (uVar18 & 0xff | 0x80) << 0x38) >>
                 ((byte)(uVar17 ^ 0x3f) & 7);
        puVar10 = puVar11;
      } while (puVar11 < (undefined1 *)(lVar16 + -9));
      param_1[1] = (longlong)puVar11;
      lVar16 = (longlong)puVar15 + 0xf;
      *(int *)(param_1 + 7) = (int)uVar7;
      *(int *)((longlong)param_1 + 0x3c) = (int)uVar5;
      *(int *)(param_1 + 8) = (int)uVar8;
      *(int *)((longlong)param_1 + 0x44) = (int)uVar9;
      *(int *)(param_1 + 9) = (int)uVar13;
      uVar7 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> uVar7 == 0; uVar7 = uVar7 - 1) {
        }
      }
      iVar4 = 0;
      if ((uVar7 ^ 0x3f) != 0) {
        puVar14 = (ulonglong *)((longlong)puVar14 + 1);
        iVar4 = 8 - (int)(uVar7 ^ 0x3f);
      }
      *(int *)(param_1 + 5) = (int)uVar6;
      param_1[3] = (longlong)puVar14;
      *(int *)(param_1 + 6) = iVar4;
      uVar7 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> uVar7 == 0; uVar7 = uVar7 - 1) {
        }
      }
      iVar4 = 0;
      if ((uVar7 ^ 0x3f) != 0) {
        lVar16 = (longlong)puVar15 + 0xe;
        iVar4 = 8 - (int)(uVar7 ^ 0x3f);
      }
      *(int *)((longlong)param_1 + 0x2c) = (int)uVar17;
      param_1[4] = lVar16;
      *(int *)((longlong)param_1 + 0x34) = iVar4;
    }
  }
  return 1;
}


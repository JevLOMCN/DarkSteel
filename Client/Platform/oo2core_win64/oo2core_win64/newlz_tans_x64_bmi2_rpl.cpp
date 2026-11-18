// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 1

// oodle_newLZ_tans_x64_bmi2_rpl_kern @ 140d3d740

undefined8 oodle_newLZ_tans_x64_bmi2_rpl_kern(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  sbyte sVar6;
  sbyte sVar7;
  sbyte sVar8;
  sbyte sVar9;
  sbyte sVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  ulonglong uVar21;
  ulonglong *puVar22;
  ulonglong *puVar23;
  longlong lVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  
  lVar24 = param_1[2];
  if (9 < (ulonglong)(lVar24 - param_1[1])) {
    puVar22 = (ulonglong *)param_1[3];
    lVar5 = param_1[4];
    if (0xe < (ulonglong)(lVar5 - (longlong)puVar22)) {
      puVar23 = (ulonglong *)(lVar5 + -0xf);
      uVar18 = (ulonglong)*(uint *)(param_1 + 7);
      uVar26 = (ulonglong)*(uint *)((longlong)param_1 + 0x3c);
      uVar27 = (ulonglong)*(uint *)(param_1 + 8);
      uVar28 = (ulonglong)*(uint *)((longlong)param_1 + 0x44);
      uVar21 = (ulonglong)*(uint *)(param_1 + 9);
      uVar11 = -(int)param_1[6];
      if (uVar11 != 0) {
        puVar22 = (ulonglong *)((longlong)puVar22 + -1);
        uVar11 = uVar11 + 8;
      }
      uVar13 = (*puVar22 | 0x8000000000000000) >> ((ulonglong)uVar11 & 0x3f);
      uVar11 = -*(int *)((longlong)param_1 + 0x34);
      if (uVar11 != 0) {
        puVar23 = (ulonglong *)(lVar5 + -0xe);
        uVar11 = uVar11 + 8;
      }
      uVar25 = *(ulonglong *)((longlong)puVar23 + 7);
      uVar25 = (uVar25 >> 0x38 | (uVar25 & 0xff000000000000) >> 0x28 |
                (uVar25 & 0xff0000000000) >> 0x18 | (uVar25 & 0xff00000000) >> 8 |
                (uVar25 & 0xff000000) << 8 | (uVar25 & 0xff0000) << 0x18 | (uVar25 & 0xff00) << 0x28
               | (uVar25 & 0xff | 0x80) << 0x38) >> ((ulonglong)uVar11 & 0x3f);
      lVar5 = *param_1;
      puVar19 = (undefined1 *)param_1[1];
      do {
        puVar20 = puVar19;
        if (puVar23 < puVar22) break;
        puVar20 = puVar19 + 10;
        uVar11 = *(uint *)(lVar5 + 4 + uVar18 * 8);
        sVar6 = ((byte)uVar11 < 0x21) * (' ' - (byte)uVar11);
        iVar12 = (int)uVar13;
        uVar14 = uVar13 >> ((ulonglong)uVar11 & 0x3f);
        *puVar19 = (char)(uVar11 >> 8);
        uVar1 = *(uint *)(lVar5 + 4 + uVar26 * 8);
        sVar7 = ((byte)uVar1 < 0x21) * (' ' - (byte)uVar1);
        uVar15 = uVar14 >> ((ulonglong)uVar1 & 0x3f);
        puVar19[1] = (char)(uVar1 >> 8);
        uVar2 = *(uint *)(lVar5 + 4 + uVar27 * 8);
        sVar8 = ((byte)uVar2 < 0x21) * (' ' - (byte)uVar2);
        uVar16 = uVar15 >> ((ulonglong)uVar2 & 0x3f);
        puVar19[2] = (char)(uVar2 >> 8);
        uVar3 = *(uint *)(lVar5 + 4 + uVar28 * 8);
        sVar9 = ((byte)uVar3 < 0x21) * (' ' - (byte)uVar3);
        uVar17 = uVar16 >> ((ulonglong)uVar3 & 0x3f);
        puVar19[3] = (char)(uVar3 >> 8);
        uVar4 = *(uint *)(lVar5 + 4 + uVar21 * 8);
        sVar10 = ((byte)uVar4 < 0x21) * (' ' - (byte)uVar4);
        puVar19[4] = (char)(uVar4 >> 8);
        uVar18 = LZCOUNT(uVar17 >> ((ulonglong)uVar4 & 0x3f));
        puVar22 = (ulonglong *)((longlong)puVar22 + (uVar18 >> 3));
        uVar13 = (*puVar22 | 0x8000000000000000) >> (uVar18 & 7);
        uVar11 = *(uint *)(lVar5 + 4 +
                          (ulonglong)(((uint)(iVar12 << sVar6) >> sVar6) + (uVar11 >> 0x10)) * 8);
        sVar6 = ((byte)uVar11 < 0x21) * (' ' - (byte)uVar11);
        uVar26 = uVar25 >> ((ulonglong)uVar11 & 0x3f);
        puVar19[5] = (char)(uVar11 >> 8);
        uVar18 = (ulonglong)(((uint)((int)uVar25 << sVar6) >> sVar6) + (uVar11 >> 0x10));
        uVar11 = *(uint *)(lVar5 + 4 +
                          (ulonglong)(((uint)((int)uVar14 << sVar7) >> sVar7) + (uVar1 >> 0x10)) * 8
                          );
        sVar6 = ((byte)uVar11 < 0x21) * (' ' - (byte)uVar11);
        uVar27 = uVar26 >> ((ulonglong)uVar11 & 0x3f);
        puVar19[6] = (char)(uVar11 >> 8);
        uVar26 = (ulonglong)(((uint)((int)uVar26 << sVar6) >> sVar6) + (uVar11 >> 0x10));
        uVar11 = *(uint *)(lVar5 + 4 +
                          (ulonglong)(((uint)((int)uVar15 << sVar8) >> sVar8) + (uVar2 >> 0x10)) * 8
                          );
        sVar6 = ((byte)uVar11 < 0x21) * (' ' - (byte)uVar11);
        uVar28 = uVar27 >> ((ulonglong)uVar11 & 0x3f);
        puVar19[7] = (char)(uVar11 >> 8);
        uVar27 = (ulonglong)(((uint)((int)uVar27 << sVar6) >> sVar6) + (uVar11 >> 0x10));
        uVar11 = *(uint *)(lVar5 + 4 +
                          (ulonglong)(((uint)((int)uVar16 << sVar9) >> sVar9) + (uVar3 >> 0x10)) * 8
                          );
        sVar6 = ((byte)uVar11 < 0x21) * (' ' - (byte)uVar11);
        uVar25 = uVar28 >> ((ulonglong)uVar11 & 0x3f);
        puVar19[8] = (char)(uVar11 >> 8);
        uVar28 = (ulonglong)(((uint)((int)uVar28 << sVar6) >> sVar6) + (uVar11 >> 0x10));
        uVar11 = *(uint *)(lVar5 + 4 +
                          (ulonglong)(((uint)((int)uVar17 << sVar10) >> sVar10) + (uVar4 >> 0x10)) *
                          8);
        sVar6 = ((byte)uVar11 < 0x21) * (' ' - (byte)uVar11);
        puVar19[9] = (char)(uVar11 >> 8);
        uVar21 = (ulonglong)(((uint)((int)uVar25 << sVar6) >> sVar6) + (uVar11 >> 0x10));
        uVar14 = LZCOUNT(uVar25 >> ((ulonglong)uVar11 & 0x3f));
        puVar23 = (ulonglong *)((longlong)puVar23 - (uVar14 >> 3));
        uVar25 = *(ulonglong *)((longlong)puVar23 + 7);
        uVar25 = (uVar25 >> 0x38 | (uVar25 & 0xff000000000000) >> 0x28 |
                  (uVar25 & 0xff0000000000) >> 0x18 | (uVar25 & 0xff00000000) >> 8 |
                  (uVar25 & 0xff000000) << 8 | (uVar25 & 0xff0000) << 0x18 |
                  (uVar25 & 0xff00) << 0x28 | (uVar25 & 0xff | 0x80) << 0x38) >> (uVar14 & 7);
        puVar19 = puVar20;
      } while (puVar20 < (undefined1 *)(lVar24 + -9));
      param_1[1] = (longlong)puVar20;
      lVar24 = (longlong)puVar23 + 0xf;
      *(int *)(param_1 + 7) = (int)uVar18;
      *(int *)((longlong)param_1 + 0x3c) = (int)uVar26;
      *(int *)(param_1 + 8) = (int)uVar27;
      *(int *)((longlong)param_1 + 0x44) = (int)uVar28;
      *(int *)(param_1 + 9) = (int)uVar21;
      iVar12 = (int)LZCOUNT(uVar13);
      if (LZCOUNT(uVar13) != 0) {
        puVar22 = (ulonglong *)((longlong)puVar22 + 1);
        iVar12 = 8 - iVar12;
      }
      *(int *)(param_1 + 5) = (int)uVar13;
      param_1[3] = (longlong)puVar22;
      *(int *)(param_1 + 6) = iVar12;
      iVar12 = (int)LZCOUNT(uVar25);
      if (LZCOUNT(uVar25) != 0) {
        lVar24 = (longlong)puVar23 + 0xe;
        iVar12 = 8 - iVar12;
      }
      *(int *)((longlong)param_1 + 0x2c) = (int)uVar25;
      param_1[4] = lVar24;
      *(int *)((longlong)param_1 + 0x34) = iVar12;
    }
  }
  return 1;
}


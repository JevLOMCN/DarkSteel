// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 1

// oodle_newLZ_huff_x64_generic_kern @ 140d3b9a0

undefined8 oodle_newLZ_huff_x64_generic_kern(longlong *param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar21;
  undefined1 *puVar23;
  undefined1 *puVar24;
  ulonglong *puVar25;
  ulonglong *puVar26;
  ulonglong *puVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  uint uVar8;
  uint uVar20;
  uint uVar22;
  
  puVar27 = (ulonglong *)param_1[8];
  if (7 < (ulonglong)(param_1[7] - (longlong)puVar27)) {
    lVar2 = param_1[2];
    if (0xe < (ulonglong)(lVar2 - *param_1)) {
      puVar25 = (ulonglong *)param_1[6];
      uVar28 = 0;
      uVar29 = 0;
      uVar30 = 0;
      puVar26 = (ulonglong *)(param_1[7] + -8);
      puVar23 = (undefined1 *)*param_1;
      uVar4 = 0;
      uVar5 = 0;
      uVar6 = 0;
      do {
        uVar20 = uVar6;
        uVar22 = uVar5;
        uVar8 = uVar4;
        puVar24 = puVar23;
        if ((puVar27 < puVar25) || (puVar26 < puVar27)) break;
        puVar24 = puVar23 + 0xf;
        uVar3 = *puVar26;
        uVar28 = uVar28 | *puVar25 << ((byte)uVar8 & 0x3f);
        uVar29 = uVar29 | (uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 |
                           (uVar3 & 0xff0000000000) >> 0x18 | (uVar3 & 0xff00000000) >> 8 |
                           (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 |
                           (uVar3 & 0xff00) << 0x28 | uVar3 << 0x38) << ((byte)uVar22 & 0x3f);
        uVar30 = uVar30 | *puVar27 << ((byte)uVar20 & 0x3f);
        uVar1 = *(undefined2 *)((longlong)param_1 + (uVar28 & 0x7ff) * 2 + 0x90);
        bVar21 = (byte)uVar1;
        uVar28 = uVar28 >> (bVar21 & 0x3f);
        *puVar23 = (char)((ushort)uVar1 >> 8);
        puVar25 = (ulonglong *)((longlong)puVar25 + (7 - (ulonglong)(uVar8 >> 3)));
        uVar1 = *(undefined2 *)((longlong)param_1 + (uVar29 & 0x7ff) * 2 + 0x90);
        bVar19 = (byte)uVar1;
        uVar29 = uVar29 >> (bVar19 & 0x3f);
        puVar23[1] = (char)((ushort)uVar1 >> 8);
        puVar26 = (ulonglong *)((longlong)puVar26 + ((ulonglong)(uVar22 >> 3) - 7));
        uVar1 = *(undefined2 *)((longlong)param_1 + (uVar30 & 0x7ff) * 2 + 0x90);
        bVar9 = (byte)uVar1;
        uVar30 = uVar30 >> (bVar9 & 0x3f);
        puVar23[2] = (char)((ushort)uVar1 >> 8);
        puVar27 = (ulonglong *)((longlong)puVar27 + (7 - (ulonglong)(uVar20 >> 3)));
        uVar1 = *(undefined2 *)((longlong)param_1 + (uVar28 & 0x7ff) * 2 + 0x90);
        bVar10 = (byte)uVar1;
        uVar28 = uVar28 >> (bVar10 & 0x3f);
        puVar23[3] = (char)((ushort)uVar1 >> 8);
        uVar1 = *(undefined2 *)((longlong)param_1 + (uVar29 & 0x7ff) * 2 + 0x90);
        bVar11 = (byte)uVar1;
        uVar29 = uVar29 >> (bVar11 & 0x3f);
        puVar23[4] = (char)((ushort)uVar1 >> 8);
        uVar1 = *(undefined2 *)((longlong)param_1 + (uVar30 & 0x7ff) * 2 + 0x90);
        bVar12 = (byte)uVar1;
        uVar30 = uVar30 >> (bVar12 & 0x3f);
        puVar23[5] = (char)((ushort)uVar1 >> 8);
        uVar1 = *(undefined2 *)((longlong)param_1 + (uVar28 & 0x7ff) * 2 + 0x90);
        bVar13 = (byte)uVar1;
        uVar28 = uVar28 >> (bVar13 & 0x3f);
        puVar23[6] = (char)((ushort)uVar1 >> 8);
        uVar1 = *(undefined2 *)((longlong)param_1 + (uVar29 & 0x7ff) * 2 + 0x90);
        bVar14 = (byte)uVar1;
        uVar29 = uVar29 >> (bVar14 & 0x3f);
        puVar23[7] = (char)((ushort)uVar1 >> 8);
        uVar1 = *(undefined2 *)((longlong)param_1 + (uVar30 & 0x7ff) * 2 + 0x90);
        bVar15 = (byte)uVar1;
        uVar30 = uVar30 >> (bVar15 & 0x3f);
        puVar23[8] = (char)((ushort)uVar1 >> 8);
        uVar1 = *(undefined2 *)((longlong)param_1 + (uVar28 & 0x7ff) * 2 + 0x90);
        bVar16 = (byte)uVar1;
        uVar28 = uVar28 >> (bVar16 & 0x3f);
        puVar23[9] = (char)((ushort)uVar1 >> 8);
        uVar1 = *(undefined2 *)((longlong)param_1 + (uVar29 & 0x7ff) * 2 + 0x90);
        bVar17 = (byte)uVar1;
        uVar29 = uVar29 >> (bVar17 & 0x3f);
        puVar23[10] = (char)((ushort)uVar1 >> 8);
        uVar1 = *(undefined2 *)((longlong)param_1 + (uVar30 & 0x7ff) * 2 + 0x90);
        bVar18 = (byte)uVar1;
        uVar30 = uVar30 >> (bVar18 & 0x3f);
        puVar23[0xb] = (char)((ushort)uVar1 >> 8);
        uVar1 = *(undefined2 *)((longlong)param_1 + (uVar28 & 0x7ff) * 2 + 0x90);
        bVar7 = (byte)uVar1;
        uVar28 = uVar28 >> (bVar7 & 0x3f);
        bVar7 = ((((((byte)uVar8 | 0x38) - bVar21) - bVar10) - bVar13) - bVar16) - bVar7;
        uVar8 = (uint)bVar7;
        puVar23[0xc] = (char)((ushort)uVar1 >> 8);
        uVar1 = *(undefined2 *)((longlong)param_1 + (uVar29 & 0x7ff) * 2 + 0x90);
        bVar21 = (byte)uVar1;
        uVar29 = uVar29 >> (bVar21 & 0x3f);
        bVar21 = ((((((byte)uVar22 | 0x38) - bVar19) - bVar11) - bVar14) - bVar17) - bVar21;
        uVar22 = (uint)bVar21;
        puVar23[0xd] = (char)((ushort)uVar1 >> 8);
        uVar1 = *(undefined2 *)((longlong)param_1 + (uVar30 & 0x7ff) * 2 + 0x90);
        bVar19 = (byte)uVar1;
        uVar30 = uVar30 >> (bVar19 & 0x3f);
        bVar19 = ((((((byte)uVar20 | 0x38) - bVar9) - bVar12) - bVar15) - bVar18) - bVar19;
        uVar20 = (uint)bVar19;
        puVar23[0xe] = (char)((ushort)uVar1 >> 8);
        puVar23 = puVar24;
        uVar4 = (uint)bVar7;
        uVar5 = (uint)bVar21;
        uVar6 = (uint)bVar19;
      } while (puVar24 < (undefined1 *)(lVar2 + -0xe));
      *param_1 = (longlong)puVar24;
      param_1[6] = (longlong)puVar25 - (ulonglong)(uVar8 >> 3);
      *(uint *)(param_1 + 0xf) = uVar8 & 7;
      *(int *)(param_1 + 0xc) = (int)uVar28;
      param_1[7] = (longlong)puVar26 + (ulonglong)(uVar22 >> 3) + 8;
      *(uint *)((longlong)param_1 + 0x7c) = uVar22 & 7;
      *(int *)((longlong)param_1 + 100) = (int)uVar29;
      param_1[8] = (longlong)puVar27 - (ulonglong)(uVar20 >> 3);
      *(uint *)(param_1 + 0x10) = uVar20 & 7;
      *(int *)(param_1 + 0xd) = (int)uVar30;
    }
  }
  return 1;
}


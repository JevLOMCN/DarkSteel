// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 1

// oodle_histo_x64_generic @ 140d3b280

void oodle_histo_x64_generic(longlong *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  byte bVar28;
  longlong *plVar30;
  byte bVar29;
  
  plVar30 = param_1 + 4;
  for (lVar23 = 0x200; lVar23 != 0; lVar23 = lVar23 + -1) {
    *plVar30 = 0;
    plVar30 = plVar30 + 1;
  }
  lVar23 = *param_1 + -0x18 + param_1[1];
  lVar24 = -param_1[1];
  lVar25 = lVar24 + 0x18;
  if (lVar24 < -0x18) {
    uVar26 = *(ulonglong *)(lVar23 + lVar25);
    do {
      while( true ) {
        uVar27 = *(ulonglong *)(lVar23 + 8 + lVar25);
        bVar28 = (byte)(uVar26 >> 8);
        bVar29 = (byte)(uVar26 >> 0x18);
        if (uVar26 == uVar27) break;
        piVar2 = (int *)((longlong)param_1 + (uVar26 & 0xff) * 4 + 0x20);
        *piVar2 = *piVar2 + 1;
        piVar2 = (int *)((longlong)param_1 + (ulonglong)bVar28 * 4 + 0x420);
        *piVar2 = *piVar2 + 1;
        piVar2 = (int *)((longlong)param_1 + (uVar26 >> 0x10 & 0xff) * 4 + 0x820);
        *piVar2 = *piVar2 + 1;
        piVar2 = (int *)((longlong)param_1 + (ulonglong)bVar29 * 4 + 0xc20);
        *piVar2 = *piVar2 + 1;
        piVar2 = (int *)((longlong)param_1 + (uVar26 >> 0x20 & 0xff) * 4 + 0x20);
        *piVar2 = *piVar2 + 1;
        piVar2 = (int *)((longlong)param_1 + (uVar26 >> 0x28 & 0xff) * 4 + 0x420);
        *piVar2 = *piVar2 + 1;
        piVar2 = (int *)((longlong)param_1 + (uVar26 >> 0x30 & 0xff) * 4 + 0x820);
        *piVar2 = *piVar2 + 1;
        piVar2 = (int *)((longlong)param_1 + (uVar26 >> 0x38) * 4 + 0xc20);
        *piVar2 = *piVar2 + 1;
        uVar26 = *(ulonglong *)(lVar23 + 0x10 + lVar25);
        piVar2 = (int *)((longlong)param_1 + (uVar27 & 0xff) * 4 + 0x20);
        *piVar2 = *piVar2 + 1;
        piVar2 = (int *)((longlong)param_1 + (uVar27 >> 8 & 0xff) * 4 + 0x420);
        *piVar2 = *piVar2 + 1;
        piVar2 = (int *)((longlong)param_1 + (uVar27 >> 0x10 & 0xff) * 4 + 0x820);
        *piVar2 = *piVar2 + 1;
        piVar2 = (int *)((longlong)param_1 + (uVar27 >> 0x18 & 0xff) * 4 + 0xc20);
        *piVar2 = *piVar2 + 1;
        piVar2 = (int *)((longlong)param_1 + (uVar27 >> 0x20 & 0xff) * 4 + 0x20);
        *piVar2 = *piVar2 + 1;
        piVar2 = (int *)((longlong)param_1 + (uVar27 >> 0x28 & 0xff) * 4 + 0x420);
        *piVar2 = *piVar2 + 1;
        piVar2 = (int *)((longlong)param_1 + (uVar27 >> 0x30 & 0xff) * 4 + 0x820);
        *piVar2 = *piVar2 + 1;
        piVar2 = (int *)((longlong)param_1 + (uVar27 >> 0x38) * 4 + 0xc20);
        *piVar2 = *piVar2 + 1;
joined_r0x000140d3b4ce:
        lVar25 = lVar25 + 0x10;
        if (-1 < lVar25) goto oodle_histo_x64_generic_tail;
      }
      uVar27 = uVar27 << 8 ^ uVar26;
      if (uVar27 < 0x100) {
        piVar2 = (int *)((longlong)param_1 + uVar27 * 4 + 0x20);
        *piVar2 = *piVar2 + 0x10;
        uVar26 = *(ulonglong *)(lVar23 + 0x10 + lVar25);
        goto joined_r0x000140d3b4ce;
      }
      piVar2 = (int *)((longlong)param_1 + (uVar26 & 0xff) * 4 + 0x20);
      *piVar2 = *piVar2 + 2;
      piVar2 = (int *)((longlong)param_1 + (ulonglong)bVar28 * 4 + 0x420);
      *piVar2 = *piVar2 + 2;
      piVar2 = (int *)((longlong)param_1 + (uVar26 >> 0x10 & 0xff) * 4 + 0x820);
      *piVar2 = *piVar2 + 2;
      piVar2 = (int *)((longlong)param_1 + (ulonglong)bVar29 * 4 + 0xc20);
      *piVar2 = *piVar2 + 2;
      piVar2 = (int *)((longlong)param_1 + (uVar26 >> 0x20 & 0xff) * 4 + 0x20);
      *piVar2 = *piVar2 + 2;
      piVar2 = (int *)((longlong)param_1 + (uVar26 >> 0x28 & 0xff) * 4 + 0x420);
      *piVar2 = *piVar2 + 2;
      piVar2 = (int *)((longlong)param_1 + (uVar26 >> 0x30 & 0xff) * 4 + 0x820);
      *piVar2 = *piVar2 + 2;
      piVar2 = (int *)((longlong)param_1 + (uVar26 >> 0x38) * 4 + 0xc20);
      *piVar2 = *piVar2 + 2;
      uVar26 = *(ulonglong *)(lVar23 + 0x10 + lVar25);
      lVar25 = lVar25 + 0x10;
    } while (lVar25 < 0);
  }
oodle_histo_x64_generic_tail:
  for (lVar25 = lVar25 + -0x18; lVar25 != 0; lVar25 = lVar25 + 1) {
    piVar2 = (int *)((longlong)param_1 + (ulonglong)*(byte *)(lVar23 + 0x18 + lVar25) * 4 + 0x20);
    *piVar2 = *piVar2 + 1;
  }
  lVar23 = param_1[2];
  uVar26 = (ulonglong)(((uint)param_1[3] & 0xffff) << 2);
  if ((param_1[3] & 0x10000U) == 0) {
    while (uVar22 = (uint)uVar26, (uVar26 & 0xf) != 0) {
      *(int *)(lVar23 + uVar26) =
           *(int *)((longlong)param_1 + uVar26 + 0x20) +
           *(int *)((longlong)param_1 + uVar26 + 0x420) +
           *(int *)((longlong)param_1 + uVar26 + 0x820) +
           *(int *)((longlong)param_1 + uVar26 + 0xc20);
      uVar26 = (ulonglong)(uVar22 - 4);
    }
    while (uVar22 = uVar22 - 0x10, -1 < (int)uVar22) {
      uVar26 = (ulonglong)uVar22;
      piVar1 = (int *)((longlong)param_1 + uVar26 + 0x20);
      iVar7 = piVar1[1];
      iVar8 = piVar1[2];
      iVar9 = piVar1[3];
      piVar3 = (int *)((longlong)param_1 + uVar26 + 0x420);
      iVar10 = piVar3[1];
      iVar11 = piVar3[2];
      iVar12 = piVar3[3];
      piVar4 = (int *)((longlong)param_1 + uVar26 + 0x820);
      iVar13 = piVar4[1];
      iVar14 = piVar4[2];
      iVar15 = piVar4[3];
      piVar5 = (int *)((longlong)param_1 + uVar26 + 0xc20);
      iVar16 = piVar5[1];
      iVar17 = piVar5[2];
      iVar18 = piVar5[3];
      piVar2 = (int *)(lVar23 + uVar26);
      *piVar2 = *piVar1 + *piVar3 + *piVar4 + *piVar5;
      piVar2[1] = iVar7 + iVar10 + iVar13 + iVar16;
      piVar2[2] = iVar8 + iVar11 + iVar14 + iVar17;
      piVar2[3] = iVar9 + iVar12 + iVar15 + iVar18;
    }
  }
  else {
    while (uVar22 = (uint)uVar26, (uVar26 & 0xf) != 0) {
      *(int *)(lVar23 + uVar26) =
           *(int *)(lVar23 + uVar26) + *(int *)((longlong)param_1 + uVar26 + 0x20) +
           *(int *)((longlong)param_1 + uVar26 + 0x420) +
           *(int *)((longlong)param_1 + uVar26 + 0x820) +
           *(int *)((longlong)param_1 + uVar26 + 0xc20);
      uVar26 = (ulonglong)(uVar22 - 4);
    }
    while (uVar22 = uVar22 - 0x10, -1 < (int)uVar22) {
      uVar26 = (ulonglong)uVar22;
      piVar2 = (int *)(lVar23 + uVar26);
      iVar7 = piVar2[1];
      iVar8 = piVar2[2];
      iVar9 = piVar2[3];
      piVar3 = (int *)((longlong)param_1 + uVar26 + 0x20);
      iVar10 = piVar3[1];
      iVar11 = piVar3[2];
      iVar12 = piVar3[3];
      piVar4 = (int *)((longlong)param_1 + uVar26 + 0x420);
      iVar13 = piVar4[1];
      iVar14 = piVar4[2];
      iVar15 = piVar4[3];
      piVar5 = (int *)((longlong)param_1 + uVar26 + 0x820);
      iVar16 = piVar5[1];
      iVar17 = piVar5[2];
      iVar18 = piVar5[3];
      piVar6 = (int *)((longlong)param_1 + uVar26 + 0xc20);
      iVar19 = piVar6[1];
      iVar20 = piVar6[2];
      iVar21 = piVar6[3];
      piVar1 = (int *)(lVar23 + uVar26);
      *piVar1 = *piVar2 + *piVar3 + *piVar4 + *piVar5 + *piVar6;
      piVar1[1] = iVar7 + iVar10 + iVar13 + iVar16 + iVar19;
      piVar1[2] = iVar8 + iVar11 + iVar14 + iVar17 + iVar20;
      piVar1[3] = iVar9 + iVar12 + iVar15 + iVar18 + iVar21;
    }
  }
  return;
}


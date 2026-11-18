// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 2

// silk_insertion_sort_increasing @ 14f894acc

void silk_insertion_sort_increasing(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  undefined4 *puVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  int iVar10;
  
  lVar5 = (longlong)param_4;
  if (param_4 < 1) {
    celt_fatal("assertion failed: K > 0","../../../third_party/opus/src/silk/sort.c",0x33);
  }
  if (param_3 < 1) {
    celt_fatal("assertion failed: L > 0","../../../third_party/opus/src/silk/sort.c",0x34);
  }
  if (param_3 < param_4) {
    celt_fatal("assertion failed: L >= K","../../../third_party/opus/src/silk/sort.c",0x35);
  }
  iVar3 = 0;
  piVar4 = param_2;
  if (0 < param_4) {
    do {
      *piVar4 = iVar3;
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < param_4);
  }
  iVar3 = 1;
  if (1 < param_4) {
    lVar9 = 0;
    piVar4 = param_1;
    do {
      piVar4 = piVar4 + 1;
      iVar1 = *piVar4;
      iVar10 = iVar3 + -1;
      lVar7 = lVar9;
      if (-1 < iVar10) {
        puVar6 = (undefined4 *)(((longlong)param_2 - (longlong)param_1) + (longlong)piVar4);
        do {
          iVar2 = *(int *)(((longlong)param_1 - (longlong)param_2) + -4 + (longlong)puVar6);
          if (iVar2 <= iVar1) break;
          *(int *)(((longlong)param_1 - (longlong)param_2) + (longlong)puVar6) = iVar2;
          lVar7 = lVar7 + -1;
          *puVar6 = puVar6[-1];
          puVar6 = puVar6 + -1;
          iVar10 = iVar10 + -1;
        } while (-1 < iVar10);
      }
      param_1[lVar7 + 1] = iVar1;
      param_2[lVar7 + 1] = iVar3;
      lVar9 = lVar9 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_4);
  }
  if (param_4 < param_3) {
    piVar4 = param_1 + lVar5;
    iVar3 = param_4;
    do {
      iVar1 = *piVar4;
      if (iVar1 < param_1[lVar5 + -1]) {
        iVar10 = param_4 + -2;
        lVar9 = lVar5 + -2;
        if (-1 < iVar10) {
          piVar8 = param_2 + lVar5 + -1;
          do {
            iVar2 = *(int *)((longlong)piVar8 + ((longlong)param_1 - (longlong)param_2) + -4);
            if (iVar2 <= iVar1) break;
            *(int *)((longlong)piVar8 + ((longlong)param_1 - (longlong)param_2)) = iVar2;
            lVar9 = lVar9 + -1;
            *piVar8 = piVar8[-1];
            piVar8 = piVar8 + -1;
            iVar10 = iVar10 + -1;
          } while (-1 < iVar10);
        }
        param_1[lVar9 + 1] = iVar1;
        param_2[lVar9 + 1] = iVar3;
      }
      iVar3 = iVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar3 < param_3);
  }
  return;
}

// silk_insertion_sort_increasing_all_values_int16 @ 14f894c50

void silk_insertion_sort_increasing_all_values_int16(longlong param_1,int param_2)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 < 1) {
    celt_fatal("assertion failed: L > 0","../../../third_party/opus/src/silk/sort.c",0x90);
  }
  if (1 < (longlong)param_2) {
    lVar4 = 1;
    iVar5 = 0;
    do {
      sVar1 = *(short *)(param_1 + lVar4 * 2);
      iVar6 = iVar5;
      lVar3 = lVar4;
      while ((lVar3 = lVar3 + -1, -1 < iVar6 &&
             (sVar2 = *(short *)(param_1 + lVar3 * 2), sVar1 < sVar2))) {
        *(short *)(param_1 + 2 + lVar3 * 2) = sVar2;
        iVar6 = iVar6 + -1;
      }
      iVar5 = iVar5 + 1;
      *(short *)(param_1 + 2 + lVar3 * 2) = sVar1;
      lVar4 = lVar4 + 1;
    } while (lVar4 < param_2);
  }
  return;
}


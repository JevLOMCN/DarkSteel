// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_insertion_sort_decreasing_FLP @ 14f893134

void silk_insertion_sort_decreasing_FLP(float *param_1,int *param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  undefined4 *puVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  
  lVar5 = (longlong)param_4;
  if (param_4 < 1) {
    celt_fatal("assertion failed: K > 0","../../../third_party/opus/src/silk/float/sort_FLP.c",0x32)
    ;
  }
  if (param_3 < 1) {
    celt_fatal("assertion failed: L > 0","../../../third_party/opus/src/silk/float/sort_FLP.c",0x33)
    ;
  }
  if (param_3 < param_4) {
    celt_fatal("assertion failed: L >= K","../../../third_party/opus/src/silk/float/sort_FLP.c",0x34
              );
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
    pfVar7 = param_1;
    do {
      pfVar7 = pfVar7 + 1;
      fVar1 = *pfVar7;
      iVar10 = iVar3 + -1;
      lVar8 = lVar9;
      if (-1 < iVar10) {
        puVar6 = (undefined4 *)(((longlong)param_2 - (longlong)param_1) + (longlong)pfVar7);
        do {
          fVar2 = *(float *)(((longlong)param_1 - (longlong)param_2) + -4 + (longlong)puVar6);
          if (fVar1 <= fVar2) break;
          *(float *)(((longlong)param_1 - (longlong)param_2) + (longlong)puVar6) = fVar2;
          lVar8 = lVar8 + -1;
          *puVar6 = puVar6[-1];
          puVar6 = puVar6 + -1;
          iVar10 = iVar10 + -1;
        } while (-1 < iVar10);
      }
      param_1[lVar8 + 1] = fVar1;
      param_2[lVar8 + 1] = iVar3;
      lVar9 = lVar9 + 1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_4);
  }
  if (param_4 < param_3) {
    pfVar7 = param_1 + lVar5;
    iVar3 = param_4;
    do {
      fVar1 = *pfVar7;
      if (param_1[lVar5 + -1] <= fVar1 && fVar1 != param_1[lVar5 + -1]) {
        iVar10 = param_4 + -2;
        lVar9 = lVar5 + -2;
        if (-1 < iVar10) {
          piVar4 = param_2 + lVar5 + -1;
          do {
            fVar2 = *(float *)((longlong)piVar4 + ((longlong)param_1 - (longlong)param_2) + -4);
            if (fVar1 <= fVar2) break;
            *(float *)((longlong)piVar4 + ((longlong)param_1 - (longlong)param_2)) = fVar2;
            lVar9 = lVar9 + -1;
            *piVar4 = piVar4[-1];
            piVar4 = piVar4 + -1;
            iVar10 = iVar10 + -1;
          } while (-1 < iVar10);
        }
        param_1[lVar9 + 1] = fVar1;
        param_2[lVar9 + 1] = iVar3;
      }
      iVar3 = iVar3 + 1;
      pfVar7 = pfVar7 + 1;
    } while (iVar3 < param_3);
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_NLSF_VQ_weights_laroia @ 14f89420c

void silk_NLSF_VQ_weights_laroia(undefined2 *param_1,short *param_2,uint param_3)

{
  longlong lVar1;
  short *psVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  if ((int)param_3 < 1) {
    celt_fatal("assertion failed: D > 0",
               "../../../third_party/opus/src/silk/NLSF_VQ_weights_laroia.c",0x33);
  }
  if ((param_3 & 1) != 0) {
    celt_fatal("assertion failed: ( D & 1 ) == 0",
               "../../../third_party/opus/src/silk/NLSF_VQ_weights_laroia.c",0x34);
  }
  iVar8 = (int)*param_2;
  iVar5 = 1;
  if (1 < param_2[1] - iVar8) {
    iVar5 = param_2[1] - iVar8;
  }
  lVar1 = 0x20000 / (longlong)iVar5;
  iVar4 = (int)lVar1;
  iVar5 = 1;
  if (1 < iVar8) {
    iVar5 = iVar8;
  }
  iVar5 = iVar4 + (int)(0x20000 / (longlong)iVar5);
  uVar3 = 0x7fff;
  if (iVar5 < 0x7fff) {
    uVar3 = (short)iVar5;
  }
  lVar7 = (longlong)(int)param_3 + -1;
  *param_1 = uVar3;
  if (1 < lVar7) {
    lVar9 = ((longlong)(int)param_3 - 3U >> 1) + 1;
    psVar2 = param_2;
    do {
      psVar6 = psVar2 + 2;
      iVar5 = 1;
      if (1 < (int)*psVar6 - (int)psVar2[1]) {
        iVar5 = (int)*psVar6 - (int)psVar2[1];
      }
      iVar8 = (int)(0x20000 / (longlong)iVar5);
      iVar5 = iVar8 + (int)lVar1;
      uVar3 = 0x7fff;
      if (iVar5 < 0x7fff) {
        uVar3 = (short)iVar5;
      }
      *(undefined2 *)(((longlong)param_1 - (longlong)param_2) + -2 + (longlong)psVar6) = uVar3;
      iVar5 = 1;
      if (1 < (int)psVar2[3] - (int)*psVar6) {
        iVar5 = (int)psVar2[3] - (int)*psVar6;
      }
      lVar1 = 0x20000 / (longlong)iVar5;
      iVar4 = (int)lVar1;
      iVar8 = iVar4 + iVar8;
      uVar3 = 0x7fff;
      if (iVar8 < 0x7fff) {
        uVar3 = (short)iVar8;
      }
      *(undefined2 *)(((longlong)param_1 - (longlong)param_2) + (longlong)psVar6) = uVar3;
      lVar9 = lVar9 + -1;
      psVar2 = psVar6;
    } while (lVar9 != 0);
  }
  iVar5 = 1;
  if (1 < 0x8000 - param_2[lVar7]) {
    iVar5 = 0x8000 - param_2[lVar7];
  }
  iVar4 = (int)(0x20000 / (longlong)iVar5) + iVar4;
  uVar3 = 0x7fff;
  if (iVar4 < 0x7fff) {
    uVar3 = (short)iVar4;
  }
  param_1[lVar7] = uVar3;
  return;
}


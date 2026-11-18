// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_sum_sqr_shift @ 14f88bd18

void silk_sum_sqr_shift(int *param_1,int *param_2,short *param_3,uint param_4)

{
  short *psVar1;
  short sVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  short *psVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  
  iVar9 = 0;
  if (param_4 == 0) {
    iVar10 = 0x20;
  }
  else {
    iVar10 = 0x1f;
    if (param_4 != 0) {
      for (; param_4 >> iVar10 == 0; iVar10 = iVar10 + -1) {
      }
    }
    iVar10 = 0x1f - iVar10;
  }
  iVar5 = 0;
  bVar4 = (byte)(0x1f - iVar10);
  uVar7 = param_4;
  if (0 < (int)(param_4 - 1)) {
    uVar3 = (param_4 - 2 >> 1) + 1;
    uVar11 = (ulonglong)uVar3;
    iVar5 = uVar3 * 2;
    psVar6 = param_3;
    do {
      psVar1 = psVar6 + 1;
      sVar2 = *psVar6;
      psVar6 = psVar6 + 2;
      uVar7 = uVar7 + ((uint)((int)*psVar1 * (int)*psVar1 + (int)sVar2 * (int)sVar2) >>
                      (bVar4 & 0x1f));
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  if (iVar5 < (int)param_4) {
    uVar7 = uVar7 + ((uint)((int)param_3[iVar5] * (int)param_3[iVar5]) >> (bVar4 & 0x1f));
  }
  if (uVar7 == 0) {
    iVar5 = 0x20;
  }
  else {
    iVar5 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    iVar5 = 0x1f - iVar5;
  }
  iVar8 = 0;
  iVar10 = ((0x1f - iVar10) - iVar5) + 3;
  if (iVar10 < 0) {
    iVar10 = 0;
  }
  if (0 < (int)(param_4 - 1)) {
    uVar7 = (param_4 - 2 >> 1) + 1;
    uVar11 = (ulonglong)uVar7;
    iVar8 = uVar7 * 2;
    psVar6 = param_3;
    do {
      psVar1 = psVar6 + 1;
      sVar2 = *psVar6;
      psVar6 = psVar6 + 2;
      iVar9 = iVar9 + ((uint)((int)sVar2 * (int)sVar2 + (int)*psVar1 * (int)*psVar1) >>
                      ((byte)iVar10 & 0x1f));
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  if (iVar8 < (int)param_4) {
    iVar9 = iVar9 + ((uint)((int)param_3[iVar8] * (int)param_3[iVar8]) >> ((byte)iVar10 & 0x1f));
  }
  *param_2 = iVar10;
  *param_1 = iVar9;
  return;
}


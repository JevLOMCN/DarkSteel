// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_ana_filt_bank_1 @ 14f8923d8

void silk_ana_filt_bank_1
               (longlong param_1,int *param_2,longlong param_3,undefined2 *param_4,int param_5)

{
  undefined2 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar3 = 0;
  if (0 < (longlong)param_5 >> 1) {
    lVar8 = (longlong)DAT_154dfaf00;
    param_3 = param_3 - (longlong)param_4;
    lVar7 = (longlong)DAT_154dfaefc;
    do {
      iVar6 = *param_2;
      iVar4 = *(short *)(param_1 + lVar3 * 4) * 0x400;
      iVar2 = iVar4 - iVar6;
      iVar2 = (int)((ulonglong)(iVar2 * lVar8) >> 0x10) + iVar2;
      *param_2 = iVar2 + iVar4;
      iVar6 = iVar6 + iVar2;
      iVar4 = *(short *)(param_1 + 2 + lVar3 * 4) * 0x400;
      iVar2 = (int)((ulonglong)((iVar4 - param_2[1]) * lVar7) >> 0x10);
      iVar5 = param_2[1] + iVar2;
      param_2[1] = iVar2 + iVar4;
      iVar2 = (iVar5 + iVar6 >> 10) + 1 >> 1;
      uVar1 = (undefined2)iVar2;
      if (iVar2 < -0x8000) {
        uVar1 = 0x8000;
      }
      if (0x7fff < iVar2) {
        uVar1 = 0x7fff;
      }
      *(undefined2 *)(param_3 + (longlong)param_4) = uVar1;
      iVar6 = (iVar5 - iVar6 >> 10) + 1 >> 1;
      uVar1 = (undefined2)iVar6;
      if (iVar6 < -0x8000) {
        uVar1 = 0x8000;
      }
      if (0x7fff < iVar6) {
        uVar1 = 0x7fff;
      }
      lVar3 = lVar3 + 1;
      *param_4 = uVar1;
      param_4 = param_4 + 1;
    } while (lVar3 < (longlong)param_5 >> 1);
  }
  return;
}


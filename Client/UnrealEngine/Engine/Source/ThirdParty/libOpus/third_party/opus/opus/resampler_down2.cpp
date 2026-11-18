// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_resampler_down2 @ 14f892e60

void silk_resampler_down2(int *param_1,longlong param_2,longlong param_3,int param_4)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  lVar7 = 0;
  if (0 < param_4 >> 1) {
    do {
      iVar5 = *param_1;
      iVar6 = *(short *)(param_3 + lVar7 * 4) * 0x400;
      iVar3 = iVar6 - iVar5;
      iVar3 = (int)((ulonglong)((longlong)iVar3 * -0x647f) >> 0x10) + iVar3;
      iVar1 = param_1[1];
      *param_1 = iVar3 + iVar6;
      iVar4 = *(short *)(param_3 + 2 + lVar7 * 4) * 0x400;
      iVar6 = (int)((ulonglong)((longlong)(iVar4 - iVar1) * 0x2690) >> 0x10);
      param_1[1] = iVar6 + iVar4;
      iVar5 = (iVar1 + iVar5 + iVar3 + iVar6 >> 10) + 1 >> 1;
      uVar2 = (undefined2)iVar5;
      if (iVar5 < -0x8000) {
        uVar2 = 0x8000;
      }
      if (0x7fff < iVar5) {
        uVar2 = 0x7fff;
      }
      *(undefined2 *)(param_2 + lVar7 * 2) = uVar2;
      lVar7 = lVar7 + 1;
    } while (lVar7 < param_4 >> 1);
  }
  return;
}


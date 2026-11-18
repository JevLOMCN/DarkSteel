// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 2

// silk_resampler_private_up2_HQ @ 14f885bdc

void silk_resampler_private_up2_HQ(int *param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (0 < param_4) {
    lVar7 = 0;
    do {
      iVar6 = *(short *)(param_3 + lVar7 * 2) * 0x400;
      iVar3 = (int)((ulonglong)((longlong)(iVar6 - *param_1) * 0x6d2) >> 0x10);
      iVar4 = *param_1 + iVar3;
      *param_1 = iVar3 + iVar6;
      iVar2 = (int)((ulonglong)((longlong)(iVar4 - param_1[1]) * 0x3a8a) >> 0x10);
      iVar5 = param_1[1] + iVar2;
      iVar3 = param_1[2];
      param_1[1] = iVar4 + iVar2;
      iVar2 = iVar5 - iVar3;
      iVar2 = (int)((ulonglong)((longlong)iVar2 * -0x6755) >> 0x10) + iVar2;
      param_1[2] = iVar5 + iVar2;
      iVar3 = (iVar3 + iVar2 >> 9) + 1 >> 1;
      uVar1 = (undefined2)iVar3;
      if (iVar3 < -0x8000) {
        uVar1 = 0x8000;
      }
      if (0x7fff < iVar3) {
        uVar1 = 0x7fff;
      }
      *(undefined2 *)(param_2 + lVar7 * 4) = uVar1;
      iVar3 = (int)((ulonglong)((longlong)(iVar6 - param_1[3]) * 0x1ac6) >> 0x10);
      iVar4 = param_1[3] + iVar3;
      param_1[3] = iVar3 + iVar6;
      iVar2 = (int)((ulonglong)((longlong)(iVar4 - param_1[4]) * 0x64a9) >> 0x10);
      iVar5 = param_1[4] + iVar2;
      iVar3 = param_1[5];
      param_1[4] = iVar4 + iVar2;
      iVar2 = iVar5 - iVar3;
      iVar2 = (int)((ulonglong)((longlong)iVar2 * -0x270a) >> 0x10) + iVar2;
      param_1[5] = iVar5 + iVar2;
      iVar3 = (iVar3 + iVar2 >> 9) + 1 >> 1;
      uVar1 = (undefined2)iVar3;
      if (iVar3 < -0x8000) {
        uVar1 = 0x8000;
      }
      if (0x7fff < iVar3) {
        uVar1 = 0x7fff;
      }
      *(undefined2 *)(param_2 + 2 + lVar7 * 4) = uVar1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < param_4);
  }
  return;
}

// silk_resampler_private_up2_HQ_wrapper @ 14f885d54

void silk_resampler_private_up2_HQ_wrapper
               (int *param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (0 < param_4) {
    lVar7 = 0;
    do {
      iVar6 = *(short *)(param_3 + lVar7 * 2) * 0x400;
      iVar3 = (int)((ulonglong)((longlong)(iVar6 - *param_1) * 0x6d2) >> 0x10);
      iVar4 = *param_1 + iVar3;
      *param_1 = iVar3 + iVar6;
      iVar2 = (int)((ulonglong)((longlong)(iVar4 - param_1[1]) * 0x3a8a) >> 0x10);
      iVar5 = param_1[1] + iVar2;
      iVar3 = param_1[2];
      param_1[1] = iVar4 + iVar2;
      iVar2 = iVar5 - iVar3;
      iVar2 = (int)((ulonglong)((longlong)iVar2 * -0x6755) >> 0x10) + iVar2;
      param_1[2] = iVar5 + iVar2;
      iVar3 = (iVar3 + iVar2 >> 9) + 1 >> 1;
      uVar1 = (undefined2)iVar3;
      if (iVar3 < -0x8000) {
        uVar1 = 0x8000;
      }
      if (0x7fff < iVar3) {
        uVar1 = 0x7fff;
      }
      *(undefined2 *)(param_2 + lVar7 * 4) = uVar1;
      iVar3 = (int)((ulonglong)((longlong)(iVar6 - param_1[3]) * 0x1ac6) >> 0x10);
      iVar4 = param_1[3] + iVar3;
      param_1[3] = iVar3 + iVar6;
      iVar2 = (int)((ulonglong)((longlong)(iVar4 - param_1[4]) * 0x64a9) >> 0x10);
      iVar5 = param_1[4] + iVar2;
      iVar3 = param_1[5];
      param_1[4] = iVar4 + iVar2;
      iVar2 = iVar5 - iVar3;
      iVar2 = (int)((ulonglong)((longlong)iVar2 * -0x270a) >> 0x10) + iVar2;
      param_1[5] = iVar5 + iVar2;
      iVar3 = (iVar3 + iVar2 >> 9) + 1 >> 1;
      uVar1 = (undefined2)iVar3;
      if (iVar3 < -0x8000) {
        uVar1 = 0x8000;
      }
      if (0x7fff < iVar3) {
        uVar1 = 0x7fff;
      }
      *(undefined2 *)(param_2 + 2 + lVar7 * 4) = uVar1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < param_4);
  }
  return;
}


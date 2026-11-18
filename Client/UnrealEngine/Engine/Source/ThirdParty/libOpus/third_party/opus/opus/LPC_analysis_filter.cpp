// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_LPC_analysis_filter @ 14f892574

void silk_LPC_analysis_filter(void *param_1,longlong param_2,short *param_3,int param_4,int param_5)

{
  short *psVar1;
  short sVar2;
  longlong lVar3;
  undefined2 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  short *psVar8;
  longlong lVar9;
  short *psVar10;
  int iVar11;
  
  uVar6 = (ulonglong)param_5;
  if (param_5 < 6) {
    celt_fatal("assertion failed: d >= 6","../../../third_party/opus/src/silk/LPC_analysis_filter.c"
               ,0x43);
  }
  if ((uVar6 & 1) != 0) {
    celt_fatal("assertion failed: (d & 1) == 0",
               "../../../third_party/opus/src/silk/LPC_analysis_filter.c",0x44);
  }
  if (param_4 < param_5) {
    celt_fatal("assertion failed: d <= len",
               "../../../third_party/opus/src/silk/LPC_analysis_filter.c",0x45);
  }
  if ((longlong)uVar6 < (longlong)param_4) {
    psVar10 = (short *)(param_2 + (uVar6 - 6) * 2);
    lVar9 = (longlong)param_4 - uVar6;
    do {
      uVar7 = 6;
      iVar11 = (int)psVar10[4] * (int)param_3[1] + (int)psVar10[3] * (int)param_3[2] +
               (int)psVar10[2] * (int)param_3[3] + (int)param_3[4] * (int)psVar10[1] +
               (int)param_3[5] * (int)*psVar10 + (int)*param_3 * (int)psVar10[5];
      if (6 < (longlong)uVar6) {
        psVar8 = psVar10 + -1;
        do {
          psVar1 = param_3 + uVar7;
          uVar5 = ~uVar7;
          lVar3 = uVar7 + 1;
          uVar7 = uVar7 + 2;
          sVar2 = *psVar8;
          psVar8 = psVar8 + -2;
          iVar11 = iVar11 + (int)*psVar1 * (int)sVar2 +
                   (int)psVar10[uVar5 + 5] * (int)param_3[lVar3];
        } while ((longlong)uVar7 < (longlong)uVar6);
      }
      iVar11 = (psVar10[6] * 0x1000 - iVar11 >> 0xb) + 1 >> 1;
      uVar4 = (undefined2)iVar11;
      if (iVar11 < -0x8000) {
        uVar4 = 0x8000;
      }
      if (0x7fff < iVar11) {
        uVar4 = 0x7fff;
      }
      *(undefined2 *)((longlong)psVar10 + (longlong)param_1 + (0xc - param_2)) = uVar4;
      psVar10 = psVar10 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  memset(param_1,0,uVar6 * 2);
  return;
}


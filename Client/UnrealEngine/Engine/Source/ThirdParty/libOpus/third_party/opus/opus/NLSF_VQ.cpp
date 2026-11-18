// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_NLSF_VQ @ 14f894cd8

void silk_NLSF_VQ(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
                 uint param_6)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  byte *pbVar12;
  short *psVar13;
  ulonglong uVar14;
  
  if ((param_6 & 1) != 0) {
    celt_fatal("assertion failed: ( LPC_order & 1 ) == 0",
               "../../../third_party/opus/src/silk/NLSF_VQ.c",0x31);
  }
  if (0 < param_5) {
    uVar9 = (ulonglong)(int)param_6;
    lVar10 = 0;
    param_2 = param_2 - param_4;
    do {
      iVar11 = 0;
      if (-1 < (longlong)(uVar9 - 2)) {
        iVar7 = 0;
        pbVar12 = (byte *)((uVar9 - 2) + param_3);
        uVar14 = uVar9 >> 1;
        psVar13 = (short *)(param_4 + (uVar9 - 1) * 2);
        do {
          pbVar1 = pbVar12 + 1;
          bVar2 = *pbVar12;
          pbVar12 = pbVar12 + -2;
          iVar8 = (int)(short)(*(short *)(param_2 + (longlong)psVar13) + (ushort)*pbVar1 * -0x80) *
                  (int)*psVar13;
          uVar3 = iVar8 - (iVar7 >> 1);
          uVar5 = (int)uVar3 >> 0x1f;
          iVar7 = (int)(short)(*(short *)(param_2 + 2 + (longlong)(psVar13 + -2)) +
                              (ushort)bVar2 * -0x80) * (int)psVar13[-1];
          uVar4 = iVar7 - (iVar8 >> 1);
          uVar6 = (int)uVar4 >> 0x1f;
          iVar11 = iVar11 + ((uVar3 ^ uVar5) - uVar5) + ((uVar4 ^ uVar6) - uVar6);
          uVar14 = uVar14 - 1;
          psVar13 = psVar13 + -2;
        } while (uVar14 != 0);
      }
      *(int *)(param_1 + lVar10 * 4) = iVar11;
      param_3 = param_3 + uVar9;
      lVar10 = lVar10 + 1;
      param_4 = param_4 + uVar9 * 2;
      param_2 = param_2 + uVar9 * -2;
    } while (lVar10 < param_5);
  }
  return;
}


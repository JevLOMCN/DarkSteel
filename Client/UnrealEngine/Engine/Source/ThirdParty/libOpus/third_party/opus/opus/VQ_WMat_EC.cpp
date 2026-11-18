// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_VQ_WMat_EC_c @ 14f893f54

void silk_VQ_WMat_EC_c(undefined1 *param_1,int *param_2,int *param_3,uint *param_4,int *param_5,
                      int *param_6,longlong param_7,longlong param_8,byte *param_9,short param_10,
                      int param_11,int param_12)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  
  iVar9 = 0;
  iVar2 = *param_6;
  iVar3 = param_6[1];
  iVar4 = param_6[2];
  iVar5 = param_6[3];
  iVar6 = param_6[4];
  *param_3 = 0x7fffffff;
  *param_2 = 0x7fffffff;
  *param_1 = 0;
  if (0 < param_12) {
    pcVar12 = (char *)(param_7 + 3);
    param_8 = param_8 - (longlong)param_9;
    do {
      bVar1 = param_9[param_8];
      iVar10 = (int)pcVar12[1];
      iVar8 = (int)*pcVar12;
      iVar11 = (int)pcVar12[-1];
      iVar8 = (int)((ulonglong)
                    ((longlong)(iVar10 * param_5[0x18] + iVar6 * -0x100) * (longlong)pcVar12[1]) >>
                   0x10) +
              (int)((ulonglong)
                    ((longlong)
                     ((int)pcVar12[-3] * *param_5 +
                     iVar2 * -0x100 + iVar11 * param_5[2] * 2 + iVar10 * param_5[4] * 2 +
                     iVar8 * param_5[3] * 2 + (int)pcVar12[-2] * param_5[1] * 2) *
                    (longlong)pcVar12[-3]) >> 0x10) +
              (int)((ulonglong)
                    ((longlong)
                     ((int)pcVar12[-2] * param_5[6] +
                     iVar3 * -0x100 + iVar8 * param_5[8] * 2 + iVar11 * param_5[7] * 2 +
                     iVar10 * param_5[9] * 2) * (longlong)pcVar12[-2]) >> 0x10) +
              (int)((ulonglong)
                    ((longlong)
                     (iVar11 * param_5[0xc] +
                     iVar4 * -0x100 + iVar10 * param_5[0xe] * 2 + iVar8 * param_5[0xd] * 2) *
                    (longlong)pcVar12[-1]) >> 0x10) +
              (int)((ulonglong)
                    ((longlong)(iVar5 * -0x100 + iVar8 * param_5[0x12] + iVar10 * param_5[0x13] * 2)
                    * (longlong)*pcVar12) >> 0x10) + 0x8021;
      if (-1 < iVar8) {
        iVar11 = (uint)bVar1 - param_11;
        iVar10 = 0;
        if (0 < iVar11) {
          iVar10 = iVar11;
        }
        iVar8 = iVar10 * 0x800 + iVar8;
        sVar7 = silk_lin2log(iVar8);
        iVar10 = (int)(short)(sVar7 + -0x780) * (int)param_10 + (uint)*param_9 * 4;
        if (iVar10 <= *param_3) {
          *param_3 = iVar10;
          *param_2 = iVar8;
          *param_1 = (char)iVar9;
          *param_4 = (uint)bVar1;
        }
      }
      pcVar12 = pcVar12 + 5;
      iVar9 = iVar9 + 1;
      param_9 = param_9 + 1;
    } while (iVar9 < param_12);
  }
  return;
}


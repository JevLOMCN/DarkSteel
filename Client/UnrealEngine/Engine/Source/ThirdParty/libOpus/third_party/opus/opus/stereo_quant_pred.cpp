// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_stereo_quant_pred @ 14f8860d0

void silk_stereo_quant_pred(int *param_1,char *param_2)

{
  short sVar1;
  short sVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar4 = 0;
  lVar9 = 2;
  piVar8 = param_1;
  do {
    cVar5 = *param_2;
    iVar7 = 0;
    iVar11 = 0x7fffffff;
    do {
      iVar12 = 0;
      sVar1 = (&silk_stereo_pred_quant_Q13)[iVar7];
      sVar2 = (&DAT_153514d3a)[iVar7];
      iVar10 = iVar4;
      iVar13 = iVar11;
      do {
        iVar4 = (int)(short)((short)iVar12 * 2 + 1) *
                (int)(short)((ulonglong)(uint)((int)sVar2 - (int)sVar1) * 0x199a >> 0x10) +
                (int)sVar1;
        iVar11 = *piVar8 - iVar4;
        if (*piVar8 - iVar4 < 1) {
          iVar11 = iVar4 - *piVar8;
        }
        if (iVar13 <= iVar11) goto LAB_14f886177;
        param_2[1] = (char)iVar12;
        iVar12 = iVar12 + 1;
        cVar5 = (char)iVar7;
        *param_2 = cVar5;
        iVar10 = iVar4;
        iVar13 = iVar11;
      } while (iVar12 < 5);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0xf);
LAB_14f886177:
    iVar4 = iVar10;
    lVar3 = (longlong)(int)cVar5;
    cVar6 = (char)((ulonglong)(lVar3 * 0x55555556) >> 0x20) +
            (char)((lVar3 / 3 + (lVar3 >> 0x3f) & 0xffffffffU) >> 0x1f);
    param_2[2] = cVar6;
    *param_2 = cVar5 + cVar6 * -3;
    param_2 = param_2 + 3;
    *piVar8 = iVar4;
    piVar8 = piVar8 + 1;
    lVar9 = lVar9 + -1;
    if (lVar9 == 0) {
      *param_1 = *param_1 - param_1[1];
      return;
    }
  } while( true );
}


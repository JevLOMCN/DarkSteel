// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_stereo_MS_to_LR @ 14f884030

void silk_stereo_MS_to_LR
               (short *param_1,undefined4 *param_2,short *param_3,short *param_4,int param_5,
               int param_6)

{
  short *psVar1;
  short *psVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  undefined2 uVar10;
  int iVar11;
  short *psVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  
  *param_2 = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)param_3 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)((longlong)param_2 + (longlong)param_6 * 2);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + param_6);
  iVar8 = (int)*param_1;
  iVar9 = (int)param_1[1];
  lVar14 = (longlong)(param_5 << 3);
  iVar11 = (int)(short)(0x10000 / (longlong)(param_5 << 3));
  sVar7 = *param_4;
  sVar3 = *param_1;
  sVar4 = param_4[2];
  sVar5 = param_1[1];
  if (0 < param_5 << 3) {
    psVar12 = (short *)(param_2 + 1);
    lVar16 = lVar14;
    do {
      psVar1 = psVar12 + -2;
      iVar8 = iVar8 + (((short)(sVar7 - sVar3) * iVar11 >> 0xf) + 1 >> 1);
      sVar6 = *psVar12;
      iVar9 = iVar9 + (((short)(sVar4 - sVar5) * iVar11 >> 0xf) + 1 >> 1);
      psVar2 = psVar12 + -1;
      psVar12 = psVar12 + 1;
      iVar15 = ((int)((ulonglong)
                      ((longlong)(*psVar1 * 0x200 + sVar6 * 0x200 + *psVar2 * 0x400) *
                      (longlong)(short)iVar8) >> 0x10) +
                (int)((ulonglong)((longlong)((int)*psVar2 << 0xb) * (longlong)(short)iVar9) >> 0x10)
                + *(short *)((longlong)param_3 + (-4 - (longlong)param_2) + (longlong)psVar12) *
                  0x100 >> 7) + 1 >> 1;
      uVar10 = (undefined2)iVar15;
      if (iVar15 < -0x8000) {
        uVar10 = 0x8000;
      }
      if (0x7fff < iVar15) {
        uVar10 = 0x7fff;
      }
      *(undefined2 *)((longlong)param_3 + (-4 - (longlong)param_2) + (longlong)psVar12) = uVar10;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  lVar16 = (longlong)param_6;
  if (lVar14 < lVar16) {
    sVar7 = *param_4;
    sVar3 = param_4[2];
    lVar13 = lVar16 - lVar14;
    psVar12 = (short *)((longlong)param_2 + lVar14 * 2 + 4);
    do {
      iVar8 = ((int)((ulonglong)
                     ((longlong)(psVar12[-2] * 0x200 + *psVar12 * 0x200 + psVar12[-1] * 0x400) *
                     (longlong)sVar7) >> 0x10) +
               (int)((ulonglong)((longlong)((int)psVar12[-1] << 0xb) * (longlong)sVar3) >> 0x10) +
               *(short *)((longlong)psVar12 + (longlong)param_3 + (-2 - (longlong)param_2)) * 0x100
              >> 7) + 1 >> 1;
      uVar10 = (undefined2)iVar8;
      if (iVar8 < -0x8000) {
        uVar10 = 0x8000;
      }
      if (0x7fff < iVar8) {
        uVar10 = 0x7fff;
      }
      *(undefined2 *)((longlong)psVar12 + (longlong)param_3 + (-2 - (longlong)param_2)) = uVar10;
      lVar13 = lVar13 + -1;
      psVar12 = psVar12 + 1;
    } while (lVar13 != 0);
  }
  *param_1 = *param_4;
  param_1[1] = param_4[2];
  if (0 < lVar16) {
    lVar14 = (longlong)param_2 - (longlong)param_3;
    do {
      param_3 = param_3 + 1;
      iVar9 = (int)*(short *)(lVar14 + (longlong)param_3);
      iVar8 = iVar9 + *param_3;
      iVar9 = iVar9 - *param_3;
      uVar10 = (undefined2)iVar8;
      if (iVar8 < -0x8000) {
        uVar10 = 0x8000;
      }
      if (0x7fff < iVar8) {
        uVar10 = 0x7fff;
      }
      *(undefined2 *)(lVar14 + (longlong)param_3) = uVar10;
      sVar7 = (short)iVar9;
      if (iVar9 < -0x8000) {
        sVar7 = -0x8000;
      }
      if (0x7fff < iVar9) {
        sVar7 = 0x7fff;
      }
      *param_3 = sVar7;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  return;
}


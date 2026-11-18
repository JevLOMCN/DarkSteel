// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 2

// silk_biquad_alt_stride1 @ 14f88be78

void silk_biquad_alt_stride1
               (longlong param_1,int *param_2,int *param_3,int *param_4,undefined2 *param_5,
               int param_6)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  iVar1 = *param_3;
  iVar2 = param_3[1];
  lVar6 = (longlong)param_6;
  if (0 < lVar6) {
    param_1 = param_1 - (longlong)param_5;
    do {
      lVar8 = (longlong)*(short *)(param_1 + (longlong)param_5);
      iVar7 = *param_4 * 4 + (int)((ulonglong)(*param_2 * lVar8) >> 0x10) * 4;
      lVar5 = (longlong)iVar7;
      iVar4 = (((int)((ulonglong)(-iVar1 & 0x3fff) * lVar5 >> 0x10) >> 0xd) + 1 >> 1) +
              (int)((ulonglong)((short)(-iVar1 >> 0xe) * lVar5) >> 0x10) + param_4[1];
      *param_4 = iVar4;
      *param_4 = (int)((ulonglong)(param_2[1] * lVar8) >> 0x10) + iVar4;
      iVar4 = (((int)((ulonglong)(-iVar2 & 0x3fff) * lVar5 >> 0x10) >> 0xd) + 1 >> 1) +
              (int)((ulonglong)((short)(-iVar2 >> 0xe) * lVar5) >> 0x10);
      param_4[1] = iVar4;
      iVar7 = iVar7 + 0x3fff >> 0xe;
      param_4[1] = (int)((ulonglong)(param_2[2] * lVar8) >> 0x10) + iVar4;
      uVar3 = (undefined2)iVar7;
      if (iVar7 < -0x8000) {
        uVar3 = 0x8000;
      }
      if (0x7fff < iVar7) {
        uVar3 = 0x7fff;
      }
      *param_5 = uVar3;
      param_5 = param_5 + 1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}

// silk_biquad_alt_stride2_c @ 14f88bfc4

void silk_biquad_alt_stride2_c
               (longlong param_1,int *param_2,int *param_3,int *param_4,longlong param_5,int param_6
               )

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  lVar6 = (longlong)param_6;
  if (0 < lVar6) {
    psVar4 = (short *)(param_1 + 2);
    lVar12 = (longlong)(short)(-*param_3 >> 0xe);
    uVar1 = (ulonglong)(-param_3[1] & 0x3fff);
    lVar2 = (longlong)(short)(-param_3[1] >> 0xe);
    uVar11 = (ulonglong)(-*param_3 & 0x3fff);
    do {
      iVar10 = *param_4 * 4 +
               (int)((ulonglong)((longlong)psVar4[-1] * (longlong)*param_2) >> 0x10) * 4;
      lVar8 = (longlong)iVar10;
      iVar5 = param_4[2] * 4 +
              (int)((ulonglong)((longlong)*psVar4 * (longlong)*param_2) >> 0x10) * 4;
      lVar9 = (longlong)iVar5;
      iVar7 = (((int)(uVar11 * lVar8 >> 0x10) >> 0xd) + 1 >> 1) +
              (int)((ulonglong)(lVar12 * lVar8) >> 0x10) + param_4[1];
      *param_4 = iVar7;
      iVar3 = (((int)(uVar11 * lVar9 >> 0x10) >> 0xd) + 1 >> 1) +
              (int)((ulonglong)(lVar9 * lVar12) >> 0x10) + param_4[3];
      param_4[2] = iVar3;
      *param_4 = (int)((ulonglong)((longlong)param_2[1] * (longlong)psVar4[-1]) >> 0x10) + iVar7;
      param_4[2] = (int)((ulonglong)((longlong)param_2[1] * (longlong)*psVar4) >> 0x10) + iVar3;
      iVar3 = (int)((ulonglong)(lVar2 * lVar9) >> 0x10) +
              (((int)(uVar1 * lVar9 >> 0x10) >> 0xd) + 1 >> 1);
      param_4[3] = iVar3;
      iVar7 = (((int)(uVar1 * lVar8 >> 0x10) >> 0xd) + 1 >> 1) +
              (int)((ulonglong)(lVar8 * lVar2) >> 0x10);
      param_4[1] = iVar7;
      param_4[1] = (int)((ulonglong)((longlong)param_2[2] * (longlong)psVar4[-1]) >> 0x10) + iVar7;
      iVar7 = iVar10 + 0x3fff >> 0xe;
      param_4[3] = (int)((ulonglong)((longlong)param_2[2] * (longlong)*psVar4) >> 0x10) + iVar3;
      iVar3 = 0x7fff;
      if ((iVar7 < 0x8000) && (iVar3 = iVar7, iVar7 < -0x8000)) {
        iVar3 = -0x8000;
      }
      *(short *)((param_5 - param_1) + -2 + (longlong)psVar4) = (short)iVar3;
      iVar5 = iVar5 + 0x3fff >> 0xe;
      iVar3 = 0x7fff;
      if ((iVar5 < 0x8000) && (iVar3 = iVar5, iVar5 < -0x8000)) {
        iVar3 = -0x8000;
      }
      *(short *)((param_5 - param_1) + (longlong)psVar4) = (short)iVar3;
      psVar4 = psVar4 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}


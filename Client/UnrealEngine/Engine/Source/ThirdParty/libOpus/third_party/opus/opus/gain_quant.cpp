// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 3

// silk_gains_ID @ 14f886a98

ulonglong silk_gains_ID(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar1 = 0;
  uVar2 = uVar1;
  if (0 < param_2) {
    do {
      uVar3 = uVar2 + 1;
      uVar1 = (ulonglong)(uint)((int)uVar1 * 0x100 + (int)*(char *)(uVar2 + param_1));
      uVar2 = uVar3;
    } while ((longlong)uVar3 < (longlong)param_2);
  }
  return uVar1;
}

// silk_gains_dequant @ 14f886ac0

void silk_gains_dequant(longlong param_1,char *param_2,char *param_3,int param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  lVar6 = 0;
  if (0 < (longlong)param_5) {
    do {
      if ((lVar6 == 0) && (param_4 == 0)) {
        cVar1 = (char)(*param_3 + -0x10);
        if (*param_3 + -0x10 < (int)*param_2) {
          cVar1 = *param_2;
        }
      }
      else {
        uVar2 = (int)param_2[lVar6] - 4;
        if (*param_3 + 8 < (int)uVar2) {
          uVar2 = (uint)(byte)((char)uVar2 * '\x02' - (char)(*param_3 + 8));
        }
        cVar1 = (char)uVar2 + *param_3;
      }
      if (cVar1 < '@') {
        if (cVar1 < '\0') {
          cVar1 = '\0';
        }
      }
      else {
        cVar1 = '?';
      }
      *param_3 = cVar1;
      iVar5 = (int)((ulonglong)((longlong)cVar1 * 0x1d1c71) >> 0x10) + 0x82a;
      iVar4 = 0xf7f;
      if (iVar5 < 0xf7f) {
        iVar4 = iVar5;
      }
      uVar3 = silk_log2lin(iVar4);
      *(undefined4 *)(param_1 + lVar6 * 4) = uVar3;
      lVar6 = lVar6 + 1;
    } while (lVar6 < param_5);
  }
  return;
}

// silk_gains_quant @ 14f886bac

void silk_gains_quant(char *param_1,longlong param_2,char *param_3,int param_4,int param_5)

{
  short sVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  lVar7 = 0;
  if (0 < (longlong)param_5) {
    do {
      sVar1 = silk_lin2log(*(undefined4 *)(param_2 + lVar7 * 4));
      cVar4 = (char)((ulonglong)((longlong)(short)(sVar1 + -0x82a) * 0x8cb) >> 0x10);
      param_1[lVar7] = cVar4;
      if (cVar4 < *param_3) {
        cVar4 = cVar4 + '\x01';
      }
      cVar3 = '?';
      if ((cVar4 < '@') && (cVar3 = cVar4, cVar4 < '\0')) {
        cVar3 = '\0';
      }
      param_1[lVar7] = cVar3;
      if ((lVar7 == 0) && (param_4 == 0)) {
        iVar5 = *param_3 + -4;
        if (iVar5 < 0x40) {
          if (cVar3 < '@') {
            iVar6 = (int)cVar3;
            if (cVar3 < iVar5) {
              iVar6 = iVar5;
            }
          }
          else {
            iVar6 = 0x3f;
          }
        }
        else {
          iVar6 = iVar5;
          if ((cVar3 <= iVar5) && (iVar6 = (int)cVar3, cVar3 < '?')) {
            iVar6 = 0x3f;
          }
        }
        cVar4 = (char)iVar6;
        *param_1 = cVar4;
        *param_3 = cVar4;
      }
      else {
        cVar3 = cVar3 - *param_3;
        param_1[lVar7] = cVar3;
        iVar5 = *param_3 + 8;
        if (iVar5 < cVar3) {
          cVar3 = (char)((cVar3 - iVar5) + 1 >> 1) + (char)iVar5;
          param_1[lVar7] = cVar3;
        }
        if (cVar3 < '%') {
          if (cVar3 < -4) {
            cVar3 = -4;
          }
        }
        else {
          cVar3 = '$';
        }
        param_1[lVar7] = cVar3;
        if (iVar5 < cVar3) {
          cVar3 = (cVar3 * '\x02' - (char)iVar5) + *param_3;
          cVar4 = '?';
          if (cVar3 < '?') {
            cVar4 = cVar3;
          }
        }
        else {
          cVar4 = *param_3 + cVar3;
        }
        *param_3 = cVar4;
        param_1[lVar7] = param_1[lVar7] + '\x04';
        cVar4 = *param_3;
      }
      iVar6 = (int)((ulonglong)((longlong)cVar4 * 0x1d1c71) >> 0x10) + 0x82a;
      iVar5 = 0xf7f;
      if (iVar6 < 0xf7f) {
        iVar5 = iVar6;
      }
      uVar2 = silk_log2lin(iVar5);
      *(undefined4 *)(param_2 + lVar7 * 4) = uVar2;
      lVar7 = lVar7 + 1;
    } while (lVar7 < param_5);
  }
  return;
}


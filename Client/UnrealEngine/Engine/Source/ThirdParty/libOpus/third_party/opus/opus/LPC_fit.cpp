// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_LPC_fit @ 14f893d7c

void silk_LPC_fit(short *param_1,uint *param_2,int param_3,int param_4,uint param_5)

{
  short sVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar7 = (ulonglong)param_5;
  iVar8 = 0;
  param_4 = param_4 - param_3;
  bVar2 = (byte)param_4 - 1;
  do {
    uVar4 = 0;
    iVar6 = 0;
    puVar5 = param_2;
    if (0 < (int)param_5) {
      do {
        uVar3 = *puVar5;
        if ((int)uVar3 < 1) {
          uVar3 = -uVar3;
        }
        if ((int)uVar3 <= (int)uVar4) {
          uVar3 = uVar4;
        }
        uVar4 = uVar3;
        iVar6 = iVar6 + 1;
        puVar5 = puVar5 + 1;
      } while (iVar6 < (int)param_5);
    }
    iVar6 = ((int)uVar4 >> (bVar2 & 0x1f)) + 1 >> 1;
    if (param_4 == 1) {
      iVar6 = ((int)uVar4 >> 1) + (uVar4 & 1);
    }
    if (iVar6 < 0x8000) break;
    silk_bwexpander_32(param_2,param_5);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 10);
  if (0 < (int)param_5) {
    if (iVar8 == 10) {
      do {
        uVar4 = *param_2;
        uVar3 = (int)uVar4 >> (bVar2 & 0x1f);
        iVar8 = (int)uVar4 >> 1;
        if (param_4 == 1) {
          iVar6 = (uVar4 & 1) + iVar8;
        }
        else {
          iVar6 = (int)(uVar3 + 1) >> 1;
        }
        if (iVar6 < 0x8000) {
          if (param_4 == 1) {
            iVar6 = (uVar4 & 1) + iVar8;
            uVar3 = uVar4;
          }
          else {
            iVar6 = (int)(uVar3 + 1) >> 1;
          }
          sVar1 = -0x8000;
          if (-0x8001 < iVar6) {
            if (param_4 == 1) {
              sVar1 = (short)iVar8 + ((ushort)uVar4 & 1);
            }
            else {
              sVar1 = (short)((int)(uVar3 + 1) >> 1);
            }
          }
        }
        else {
          sVar1 = 0x7fff;
        }
        *param_1 = sVar1;
        param_1 = param_1 + 1;
        *param_2 = (int)sVar1 << ((byte)param_4 & 0x1f);
        param_2 = param_2 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    else {
      do {
        uVar4 = *param_2;
        if (param_4 == 1) {
          sVar1 = (short)((int)uVar4 >> 1) + ((ushort)uVar4 & 1);
        }
        else {
          sVar1 = (short)(((int)uVar4 >> (bVar2 & 0x1f)) + 1 >> 1);
        }
        *param_1 = sVar1;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  return;
}


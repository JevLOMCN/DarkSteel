// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_NLSF_decode @ 14f892c24

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void silk_NLSF_decode(longlong param_1,char *param_2,longlong param_3)

{
  short sVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  longlong lVar5;
  byte *pbVar6;
  short *psVar7;
  char *pcVar8;
  longlong lVar9;
  short sVar10;
  int iVar11;
  undefined1 auStack_a8 [31];
  byte abStack_89 [17];
  short local_78 [16];
  undefined1 local_58 [32];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_a8;
  silk_NLSF_unpack(local_58,abStack_89 + 1,param_3,(int)*param_2);
  sVar10 = *(short *)(param_3 + 2);
  iVar4 = 0;
  iVar11 = sVar10 + -1;
  lVar5 = (longlong)iVar11;
  if (-1 < iVar11) {
    sVar1 = *(short *)(param_3 + 4);
    pcVar8 = param_2 + lVar5 + 1;
    do {
      pbVar6 = (byte *)(pcVar8 + (longlong)(abStack_89 + -(longlong)param_2));
      iVar2 = *pcVar8 * 0x400;
      iVar11 = (int)*pcVar8 << 10;
      if (iVar11 < 1) {
        if (iVar11 < 0) {
          iVar2 = iVar2 + 0x66;
        }
      }
      else {
        iVar2 = iVar2 + -0x66;
      }
      pcVar8 = pcVar8 + -1;
      iVar4 = (int)((ulonglong)((longlong)iVar2 * (longlong)sVar1) >> 0x10) +
              ((int)((uint)*pbVar6 * (int)(short)iVar4) >> 8);
      local_78[lVar5] = (short)iVar4;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  iVar11 = 0;
  lVar5 = (longlong)((int)*param_2 * (int)sVar10);
  pbVar6 = (byte *)(*(longlong *)(param_3 + 8) + lVar5);
  psVar7 = (short *)(*(longlong *)(param_3 + 0x10) + lVar5 * 2);
  if (0 < sVar10) {
    lVar5 = (longlong)local_78 - (longlong)psVar7;
    lVar9 = param_1 - (longlong)psVar7;
    do {
      iVar4 = ((int)*(short *)(lVar5 + (longlong)psVar7) << 0xe) / (int)*psVar7 +
              (uint)*pbVar6 * 0x80;
      uVar3 = (undefined2)iVar4;
      if (iVar4 < 0) {
        uVar3 = 0;
      }
      if (0x7fff < iVar4) {
        uVar3 = 0x7fff;
      }
      iVar11 = iVar11 + 1;
      *(undefined2 *)(lVar9 + (longlong)psVar7) = uVar3;
      pbVar6 = pbVar6 + 1;
      sVar10 = *(short *)(param_3 + 2);
      psVar7 = psVar7 + 1;
    } while (iVar11 < sVar10);
  }
  silk_NLSF_stabilize(param_1,*(undefined8 *)(param_3 + 0x40),(int)sVar10);
  return;
}


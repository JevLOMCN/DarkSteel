// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 2

// silk_NLSF2A @ 14f88efa4

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void silk_NLSF2A(longlong param_1,longlong param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 *puVar6;
  int *piVar7;
  longlong lVar8;
  undefined1 auStack_188 [32];
  int local_168;
  int local_158 [14];
  int local_120 [13];
  int aiStack_ec [25];
  int local_88;
  undefined1 local_84 [92];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_188;
  lVar3 = (longlong)param_3;
  if ((param_3 != 10) && (param_3 != 0x10)) {
    celt_fatal("assertion failed: d==10 || d==16","../../../third_party/opus/src/silk/NLSF2A.c",0x59
              );
  }
  puVar6 = &DAT_15351a188;
  if (param_3 == 0x10) {
    puVar6 = &DAT_15351a178;
  }
  if (0 < param_3) {
    lVar8 = 0;
    do {
      iVar4 = (int)*(short *)(param_2 + lVar8 * 2);
      iVar2 = iVar4 >> 8;
      pbVar1 = puVar6 + lVar8;
      lVar8 = lVar8 + 1;
      (&local_88)[*pbVar1] =
           ((iVar4 + iVar2 * -0x100) *
            ((int)(short)(&DAT_15351a7b2)[iVar2] - (int)(short)(&silk_LSFCosTab_FIX_Q12)[iVar2]) +
            (short)(&silk_LSFCosTab_FIX_Q12)[iVar2] * 0x100 >> 3) + 1 >> 1;
    } while (lVar8 < lVar3);
  }
  iVar2 = param_3 >> 1;
  FUN_14f88f160(local_158,&local_88,iVar2);
  FUN_14f88f160(local_120,local_84);
  lVar8 = (longlong)iVar2;
  if (0 < iVar2) {
    piVar7 = aiStack_ec + lVar3;
    lVar5 = 0;
    do {
      iVar4 = *(int *)((longlong)local_158 + lVar5 + 4) + *(int *)((longlong)local_158 + lVar5);
      iVar2 = *(int *)((longlong)local_120 + lVar5 + 4) - *(int *)((longlong)local_120 + lVar5);
      *(int *)((longlong)aiStack_ec + lVar5 + 4U) = -(iVar2 + iVar4);
      *piVar7 = iVar2 - iVar4;
      piVar7 = piVar7 + -1;
      lVar8 = lVar8 + -1;
      lVar5 = lVar5 + 4;
    } while (lVar8 != 0);
  }
  local_168 = param_3;
  silk_LPC_fit(param_1,aiStack_ec + 1,0xc);
  iVar2 = 0;
  while( true ) {
    iVar4 = silk_LPC_inverse_pred_gain_c(param_1,param_3);
    if ((iVar4 != 0) || (0xf < iVar2)) break;
    silk_bwexpander_32(aiStack_ec + 1,param_3,0x10000 - (2 << ((byte)iVar2 & 0x1f)));
    lVar8 = 0;
    if (0 < param_3) {
      do {
        *(short *)(param_1 + lVar8 * 2) = (short)((aiStack_ec[lVar8 + 1] >> 4) + 1 >> 1);
        lVar8 = lVar8 + 1;
      } while (lVar8 < lVar3);
    }
    iVar2 = iVar2 + 1;
  }
  return;
}

// FUN_14f88f160 @ 14f88f160

void FUN_14f88f160(undefined4 *param_1,int *param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  int *piVar5;
  
  *param_1 = 0x10000;
  param_1[1] = -*param_2;
  if (1 < param_3) {
    lVar4 = 1;
    piVar5 = param_1 + 2;
    uVar2 = (ulonglong)(param_3 - 1);
    do {
      iVar1 = param_2[lVar4 * 2];
      *piVar5 = piVar5[-2] * 2 - (int)(((longlong)piVar5[-1] * (longlong)iVar1 >> 0xf) + 1 >> 1);
      for (lVar3 = lVar4; 1 < lVar3; lVar3 = lVar3 + -1) {
        param_1[lVar3] =
             param_1[lVar3] +
             (param_1[lVar3 + -2] -
             (int)(((longlong)(int)param_1[lVar3 + -1] * (longlong)iVar1 >> 0xf) + 1 >> 1));
      }
      param_1[1] = param_1[1] - iVar1;
      lVar4 = lVar4 + 1;
      piVar5 = piVar5 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}


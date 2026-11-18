// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 2

// FUN_14f886d2c @ 14f886d2c

void FUN_14f886d2c(undefined8 *param_1,undefined8 *param_2,int param_3,int param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_3 < 4) {
    lVar6 = (longlong)param_3;
    lVar1 = lVar6 * 0xc;
    if (0 < param_4) {
      lVar3 = (longlong)(short)param_4;
      lVar5 = (longlong)param_1 + lVar6 * -0xc + -0x153514d98;
      piVar4 = (int *)(&silk_Transition_LP_B_Q28 + lVar1);
      lVar1 = 3;
      if (param_4 < 0x8000) {
        do {
          *(int *)((longlong)piVar4 + lVar5) =
               (int)((ulonglong)((piVar4[3] - *piVar4) * lVar3) >> 0x10) + *piVar4;
          piVar4 = piVar4 + 1;
          lVar1 = lVar1 + -1;
        } while (lVar1 != 0);
        lVar1 = 2;
        piVar4 = (int *)(&silk_Transition_LP_A_Q28 + lVar6 * 8);
        do {
          *(int *)((longlong)(param_2 + (-0x2a6a29bb - lVar6)) + (longlong)piVar4) =
               (int)((ulonglong)((piVar4[2] - *piVar4) * lVar3) >> 0x10) + *piVar4;
          piVar4 = piVar4 + 1;
          lVar1 = lVar1 + -1;
        } while (lVar1 != 0);
        return;
      }
      do {
        *(int *)(lVar5 + (longlong)piVar4) =
             (int)((ulonglong)((piVar4[3] - *piVar4) * lVar3) >> 0x10) + piVar4[3];
        piVar4 = piVar4 + 1;
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0);
      lVar1 = 2;
      piVar4 = (int *)(&silk_Transition_LP_A_Q28 + lVar6 * 8);
      do {
        *(int *)((longlong)(param_2 + (-0x2a6a29bb - lVar6)) + (longlong)piVar4) =
             (int)((ulonglong)((piVar4[2] - *piVar4) * lVar3) >> 0x10) + piVar4[2];
        piVar4 = piVar4 + 1;
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0);
      return;
    }
    *param_1 = *(undefined8 *)(&silk_Transition_LP_B_Q28 + lVar1);
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(&DAT_153514da0 + lVar1);
    uVar2 = *(undefined8 *)(&silk_Transition_LP_A_Q28 + lVar6 * 8);
  }
  else {
    *param_1 = DAT_153514dc8;
    *(undefined4 *)(param_1 + 1) = DAT_153514dd0;
    uVar2 = DAT_153514df8;
  }
  *param_2 = uVar2;
  return;
}

// silk_LP_variable_cutoff @ 14f886e94

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void silk_LP_variable_cutoff(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [8];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_78;
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != 0) {
    iVar1 = *(int *)(param_1 + 8);
    iVar4 = iVar1 * -0x400 + 0x40000;
    iVar3 = iVar4 >> 0x10;
    FUN_14f886d2c(local_40,local_48,iVar3,iVar4 + iVar3 * -0x10000);
    iVar1 = iVar1 + iVar2;
    iVar2 = 0x100;
    if ((iVar1 < 0x101) && (iVar2 = 0, -1 < iVar1)) {
      iVar2 = iVar1;
    }
    *(int *)(param_1 + 8) = iVar2;
    local_58 = param_2;
    local_50 = param_3;
    silk_biquad_alt_stride1(param_2,local_40,local_48,param_1);
  }
  return;
}


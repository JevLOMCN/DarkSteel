// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_resampler_down2_3 @ 14f892f44

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void silk_resampler_down2_3(int *param_1,undefined2 *param_2,longlong param_3,int param_4)

{
  int iVar1;
  undefined2 uVar2;
  longlong lVar3;
  int iVar4;
  int *piVar5;
  ulonglong uVar6;
  int local_7c8 [4];
  undefined1 local_7b8 [1920];
  undefined2 *local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)&local_38;
  local_7c8[0] = *param_1;
  local_7c8[1] = param_1[1];
  local_7c8[2] = param_1[2];
  local_7c8[3] = param_1[3];
  local_38 = param_2;
  do {
    iVar1 = 0x1e0;
    if (param_4 < 0x1e0) {
      iVar1 = param_4;
    }
    silk_resampler_private_AR2(param_1 + 4,local_7b8,param_3,&silk_Resampler_2_3_COEFS_LQ,iVar1);
    if (2 < iVar1) {
      piVar5 = local_7c8;
      uVar6 = (ulonglong)((iVar1 - 3U) / 3 + 1);
      do {
        piVar5 = piVar5 + 3;
        iVar4 = ((int)((ulonglong)((longlong)piVar5[-3] * (longlong)DAT_153516c54) >> 0x10) +
                 (int)((ulonglong)((longlong)DAT_153516c56 * (longlong)piVar5[-2]) >> 0x10) +
                 (int)((ulonglong)((longlong)DAT_153516c5a * (longlong)piVar5[-1]) >> 0x10) +
                 (int)((ulonglong)((longlong)DAT_153516c58 * (longlong)*piVar5) >> 0x10) >> 5) + 1
                >> 1;
        uVar2 = (undefined2)iVar4;
        if (iVar4 < -0x8000) {
          uVar2 = 0x8000;
        }
        if (0x7fff < iVar4) {
          uVar2 = 0x7fff;
        }
        *local_38 = uVar2;
        iVar4 = ((int)((ulonglong)((longlong)piVar5[1] * (longlong)DAT_153516c54) >> 0x10) +
                 (int)((ulonglong)((longlong)DAT_153516c56 * (longlong)*piVar5) >> 0x10) +
                 (int)((ulonglong)((longlong)DAT_153516c5a * (longlong)piVar5[-1]) >> 0x10) +
                 (int)((ulonglong)((longlong)DAT_153516c58 * (longlong)piVar5[-2]) >> 0x10) >> 5) +
                1 >> 1;
        uVar2 = (undefined2)iVar4;
        if (iVar4 < -0x8000) {
          uVar2 = 0x8000;
        }
        if (0x7fff < iVar4) {
          uVar2 = 0x7fff;
        }
        local_38[1] = uVar2;
        local_38 = local_38 + 2;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    lVar3 = (longlong)iVar1;
    param_4 = param_4 - iVar1;
    param_3 = param_3 + lVar3 * 2;
    local_7c8[0] = local_7c8[lVar3];
    local_7c8[1] = local_7c8[lVar3 + 1];
    local_7c8[2] = local_7c8[lVar3 + 2];
    local_7c8[3] = *(int *)(local_7b8 + lVar3 * 4 + -4);
  } while (0 < param_4);
  *param_1 = local_7c8[0];
  param_1[1] = local_7c8[1];
  param_1[2] = local_7c8[2];
  param_1[3] = local_7c8[3];
  return;
}


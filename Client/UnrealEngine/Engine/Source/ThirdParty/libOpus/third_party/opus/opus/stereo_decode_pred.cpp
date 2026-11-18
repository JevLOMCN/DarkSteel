// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 2

// silk_stereo_decode_mid_only @ 14f8842c4

void silk_stereo_decode_mid_only(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = ec_dec_icdf(param_1,&silk_stereo_only_code_mid_iCDF,8);
  *param_2 = uVar1;
  return;
}

// silk_stereo_decode_pred @ 14f8842f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void silk_stereo_decode_pred(undefined8 param_1,int *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  int local_48;
  undefined4 local_44;
  int local_40;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_68;
  local_34 = ec_dec_icdf(param_1,&silk_stereo_pred_joint_iCDF,8);
  puVar3 = &local_44;
  lVar6 = 2;
  lVar2 = 2;
  local_40 = local_34 / 5;
  local_34 = local_34 % 5;
  do {
    uVar1 = ec_dec_icdf(param_1,&silk_uniform3_iCDF,8);
    puVar3[-1] = uVar1;
    uVar1 = ec_dec_icdf(param_1,&silk_uniform5_iCDF,8);
    *puVar3 = uVar1;
    puVar3 = puVar3 + 3;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  piVar4 = &local_48;
  piVar5 = param_2;
  do {
    *piVar4 = *piVar4 + piVar4[2] * 3;
    *piVar5 = (int)(short)((ulonglong)
                           (uint)((int)(short)(&DAT_153514d3a)[*piVar4] -
                                 (int)(short)(&silk_stereo_pred_quant_Q13)[*piVar4]) * 0x199a >>
                          0x10) * (int)(short)((short)piVar4[1] * 2 + 1) +
              (int)(short)(&silk_stereo_pred_quant_Q13)[*piVar4];
    piVar5 = piVar5 + 1;
    lVar6 = lVar6 + -1;
    piVar4 = piVar4 + 3;
  } while (lVar6 != 0);
  *param_2 = *param_2 - param_2[1];
  return;
}


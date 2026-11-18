// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_find_LPC_FLP @ 14f88e258

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void silk_find_LPC_FLP(longlong param_1,undefined8 param_2,longlong param_3,undefined4 param_4)

{
  int iVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_758 [32];
  undefined4 local_738;
  int local_730;
  undefined1 local_728 [64];
  undefined1 local_6e8 [64];
  undefined1 local_6a8 [1536];
  undefined1 local_a8 [32];
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_758;
  local_730 = *(int *)(param_1 + 0x1220);
  local_738 = *(undefined4 *)(param_1 + 0x11e4);
  iVar5 = *(int *)(param_1 + 0x11ec) + local_730;
  *(undefined1 *)(param_1 + 0x12af) = 4;
  fVar6 = (float)silk_burg_modified_FLP(local_6e8,param_3,param_4,iVar5);
  if (((*(int *)(param_1 + 0x1218) != 0) && (*(int *)(param_1 + 0x1238) == 0)) &&
     (*(int *)(param_1 + 0x11e4) == 4)) {
    local_730 = *(int *)(param_1 + 0x1220);
    local_738 = 2;
    fVar7 = (float)silk_burg_modified_FLP
                             (local_728,param_3 + (longlong)(iVar5 * 2) * 4,param_4,iVar5);
    fVar6 = fVar6 - fVar7;
    silk_A2NLSF_FLP(param_2,local_728,*(undefined4 *)(param_1 + 0x1220));
    iVar4 = 3;
    fVar7 = __real_7f7fffff;
    do {
      local_738 = *(undefined4 *)(param_1 + 0x1220);
      silk_interpolate(local_a8,param_1 + 0x1194,param_2,iVar4);
      silk_NLSF2A_FLP(local_728,local_a8,*(undefined4 *)(param_1 + 0x1220),
                      *(undefined4 *)(param_1 + 0x13f4));
      local_738 = *(undefined4 *)(param_1 + 0x1220);
      silk_LPC_analysis_filter_FLP(local_6a8,local_728,param_3,iVar5 * 2);
      iVar1 = *(int *)(param_1 + 0x1220);
      dVar3 = (double)silk_energy_FLP(local_6a8 +
                                      ((longlong)*(int *)(param_1 + 0x1220) + (longlong)iVar5) * 4,
                                      iVar5 - *(int *)(param_1 + 0x1220));
      dVar2 = (double)silk_energy_FLP(local_6a8 + (longlong)iVar1 * 4,iVar5 - iVar1);
      fVar8 = (float)(dVar3 + dVar2);
      if (fVar6 <= fVar8) {
        if (fVar7 < fVar8) break;
      }
      else {
        *(char *)(param_1 + 0x12af) = (char)iVar4;
        fVar6 = fVar8;
      }
      iVar4 = iVar4 + -1;
      fVar7 = fVar8;
    } while (-1 < iVar4);
  }
  if ((*(char *)(param_1 + 0x12af) == '\x04') &&
     (silk_A2NLSF_FLP(param_2,local_6e8,*(undefined4 *)(param_1 + 0x1220)),
     *(char *)(param_1 + 0x12af) == '\x04')) {
    return;
  }
  if (((*(int *)(param_1 + 0x1218) == 0) || (*(int *)(param_1 + 0x1238) != 0)) ||
     (*(int *)(param_1 + 0x11e4) != 4)) {
    celt_fatal("assertion failed: psEncC->indices.NLSFInterpCoef_Q2 == 4 || ( psEncC->useInterpolatedNLSFs && !psEncC->first_frame_after_reset && psEncC->nb_subfr == MAX_NB_SUBFR )"
               ,"../../../third_party/opus/src/silk/float/find_LPC_FLP.c",0x67);
  }
  return;
}


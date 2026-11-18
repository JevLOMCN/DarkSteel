// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_find_pred_coefs_FLP @ 14f887d64

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void silk_find_pred_coefs_FLP
               (longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
               undefined4 param_5)

{
  int *piVar1;
  double dVar2;
  float *pfVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  float fVar9;
  undefined1 auStack_8a8 [32];
  float *local_888;
  undefined1 *local_880;
  undefined1 *local_878;
  int local_870;
  undefined4 local_868;
  undefined4 local_860;
  float local_858 [4];
  undefined1 local_848 [80];
  undefined1 local_7f8 [400];
  undefined1 local_668 [1536];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_8a8;
  uVar4 = *(uint *)(param_1 + 0x11e4);
  if (0 < (int)uVar4) {
    pfVar3 = local_858;
    uVar5 = (ulonglong)uVar4;
    do {
      *pfVar3 = __real_3f800000 / *(float *)((param_2 - (longlong)local_858) + (longlong)pfVar3);
      pfVar3 = pfVar3 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  iVar6 = *(int *)(param_1 + 0x1220);
  if (*(char *)(param_1 + 0x12ad) == '\x02') {
    piVar1 = (int *)(param_2 + 0xe4);
    if (*(int *)(param_1 + 0x11f0) - iVar6 < *piVar1 + 2) {
      celt_fatal("assertion failed: psEnc->sCmn.ltp_mem_length - psEnc->sCmn.predictLPCOrder >= psEncCtrl->pitchL[ 0 ] + LTP_ORDER / 2"
                 ,"../../../third_party/opus/src/silk/float/find_pred_coefs_FLP.c",0x3e);
      uVar4 = *(uint *)(param_1 + 0x11e4);
    }
    local_880 = (undefined1 *)CONCAT44(local_880._4_4_,uVar4);
    local_888 = (float *)CONCAT44(local_888._4_4_,*(undefined4 *)(param_1 + 0x11ec));
    silk_find_LTP_FLP(local_7f8,local_848,param_3,piVar1);
    local_860 = *(undefined4 *)(param_1 + 0x13f4);
    local_888 = (float *)(param_2 + 0x2c4);
    local_868 = *(undefined4 *)(param_1 + 0x11e4);
    local_870 = *(undefined4 *)(param_1 + 0x11ec);
    local_878 = local_848;
    local_880 = local_7f8;
    silk_quant_LTP_gains_FLP(param_2 + 0x90,param_1 + 0x1294,param_1 + 0x12b0,param_1 + 0x1230);
    silk_LTP_scale_ctrl_FLP(param_1,param_2,param_5);
    local_870 = *(int *)(param_1 + 0x1220);
    local_878 = (undefined1 *)CONCAT44(local_878._4_4_,*(undefined4 *)(param_1 + 0x11e4));
    local_880 = (undefined1 *)CONCAT44(local_880._4_4_,*(undefined4 *)(param_1 + 0x11ec));
    local_888 = local_858;
    silk_LTP_analysis_filter_FLP(local_668,param_4 + (longlong)local_870 * -4,param_2 + 0x90,piVar1)
    ;
  }
  else {
    puVar8 = local_668;
    iVar7 = 0;
    param_4 = param_4 + (longlong)iVar6 * -4;
    if (0 < (int)uVar4) {
      pfVar3 = local_858;
      iVar6 = *(int *)(param_1 + 0x11ec) + iVar6;
      do {
        silk_scale_copy_vector_FLP(puVar8,param_4,*pfVar3,iVar6);
        pfVar3 = pfVar3 + 1;
        iVar7 = iVar7 + 1;
        uVar4 = *(uint *)(param_1 + 0x11e4);
        iVar6 = *(int *)(param_1 + 0x1220) + *(int *)(param_1 + 0x11ec);
        param_4 = param_4 + (longlong)*(int *)(param_1 + 0x11ec) * 4;
        puVar8 = puVar8 + (longlong)iVar6 * 4;
      } while (iVar7 < (int)uVar4);
    }
    memset((void *)(param_2 + 0x90),0,(longlong)(int)(uVar4 * 5) << 2);
    *(undefined4 *)(param_2 + 0x2c4) = 0;
    *(undefined4 *)(param_1 + 0x1230) = 0;
  }
  fVar9 = __real_3c23d70a;
  if (*(int *)(param_1 + 0x1238) == 0) {
    dVar2 = pow(__real_4000000000000000,(double)(*(float *)(param_2 + 0x2c4) / __real_40400000));
    fVar9 = ((float)dVar2 / __real_461c4000) /
            (*(float *)(param_2 + 700) * __real_3f400000 + __real_3e800000);
  }
  silk_find_LPC_FLP(param_1,&local_68,local_668,fVar9);
  silk_process_NLSFs_FLP(param_1,param_2 + 0x10,&local_68,(undefined8 *)(param_1 + 0x1194));
  local_878 = (undefined1 *)CONCAT44(local_878._4_4_,*(undefined4 *)(param_1 + 0x1220));
  local_880 = (undefined1 *)CONCAT44(local_880._4_4_,*(undefined4 *)(param_1 + 0x11e4));
  local_888 = (float *)CONCAT44(local_888._4_4_,*(undefined4 *)(param_1 + 0x11ec));
  silk_residual_energy_FLP(param_2 + 0x2c8,local_668,param_2 + 0x10,param_2);
  *(undefined8 *)(param_1 + 0x1194) = local_68;
  *(undefined8 *)(param_1 + 0x119c) = uStack_60;
  *(undefined8 *)(param_1 + 0x11a4) = local_58;
  *(undefined8 *)(param_1 + 0x11ac) = uStack_50;
  return;
}


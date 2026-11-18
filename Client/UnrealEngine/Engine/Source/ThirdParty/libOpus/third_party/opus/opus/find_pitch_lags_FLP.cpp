// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_find_pitch_lags_FLP @ 14f887a28

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int silk_find_pitch_lags_FLP
              (longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
              undefined4 param_5)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  void *_Src;
  int iVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_788 [32];
  longlong local_768;
  undefined4 local_760;
  float local_758;
  float local_750;
  undefined4 local_748;
  undefined4 local_740;
  undefined4 local_738;
  undefined4 local_730;
  float local_728 [20];
  undefined1 local_6d8 [64];
  undefined1 local_698 [64];
  undefined1 local_658 [1536];
  ulonglong local_58;
  undefined8 extraout_XMM0_Qb;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_788;
  iVar2 = *(int *)(param_1 + 0x11f0);
  iVar1 = *(int *)(param_1 + 0x11f4);
  iVar4 = *(int *)(param_1 + 0x11c4);
  iVar6 = *(int *)(param_1 + 0x11e8) + iVar2 + iVar1;
  if (iVar6 < iVar4) {
    celt_fatal("assertion failed: buf_len >= psEnc->sCmn.pitch_LPC_win_length",
               "../../../third_party/opus/src/silk/float/find_pitch_lags_FLP.c",0x3b);
    iVar2 = *(int *)(param_1 + 0x11f0);
    iVar4 = *(int *)(param_1 + 0x11c4);
    iVar1 = *(int *)(param_1 + 0x11f4);
  }
  param_4 = param_4 + (longlong)iVar2 * -4;
  lVar5 = ((longlong)iVar6 - (longlong)iVar4) * 4 + param_4;
  silk_apply_sine_window_FLP(local_658,lVar5,1,iVar1);
  lVar3 = (longlong)*(int *)(param_1 + 0x11f4) * 4;
  _Src = (void *)(lVar5 + lVar3);
  memcpy(local_658 + lVar3,_Src,
         (longlong)(*(int *)(param_1 + 0x11c4) + *(int *)(param_1 + 0x11f4) * -2) << 2);
  lVar5 = (longlong)(*(int *)(param_1 + 0x11c4) + *(int *)(param_1 + 0x11f4) * -2);
  silk_apply_sine_window_FLP(local_658 + lVar3 + lVar5 * 4,(void *)((longlong)_Src + lVar5 * 4),2);
  silk_autocorrelation_FLP
            (local_728,local_658,*(undefined4 *)(param_1 + 0x11c4),*(int *)(param_1 + 0x1228) + 1);
  local_728[0] = local_728[0] + local_728[0] * __real_3a83126f + __real_3f800000;
  auVar7._0_8_ = silk_schur_FLP(local_698,local_728,*(undefined4 *)(param_1 + 0x1228));
  auVar7._8_8_ = extraout_XMM0_Qb;
  if ((float)auVar7._0_8_ <= __real_3f800000) {
    auVar8._4_12_ = auVar7._4_12_;
    auVar8._0_4_ = __real_3f800000;
    auVar7._0_8_ = auVar8._0_8_;
  }
  *(float *)(param_2 + 0x2c0) = local_728[0] / (float)auVar7._0_8_;
  silk_k2a_FLP(local_6d8,local_698,*(undefined4 *)(param_1 + 0x1228));
  silk_bwexpander_FLP(local_6d8,*(undefined4 *)(param_1 + 0x1228),__real_3f7d70a4);
  local_768 = CONCAT44(local_768._4_4_,*(undefined4 *)(param_1 + 0x1228));
  silk_LPC_analysis_filter_FLP(param_3,local_6d8,param_4,iVar6);
  if ((*(char *)(param_1 + 0x12ad) == '\0') || (*(int *)(param_1 + 0x1238) != 0)) {
    iVar2 = 0;
    *(undefined8 *)(param_2 + 0xe4) = 0;
    *(undefined8 *)(param_2 + 0xec) = 0;
    *(undefined2 *)(param_1 + 0x12aa) = 0;
    *(undefined1 *)(param_1 + 0x12ac) = 0;
    *(undefined4 *)(param_1 + 0x2764) = 0;
  }
  else {
    local_768 = param_1 + 0x2764;
    local_730 = param_5;
    local_738 = *(undefined4 *)(param_1 + 0x11e4);
    local_740 = *(undefined4 *)(param_1 + 0x1224);
    local_748 = *(undefined4 *)(param_1 + 0x11e0);
    local_760 = *(undefined4 *)(param_1 + 0x11c0);
    local_758 = (float)*(int *)(param_1 + 0x122c) * __real_37800000;
    local_750 = (((__real_3f19999a - (float)*(int *)(param_1 + 0x1228) * __real_3b83126f) -
                 (float)*(int *)(param_1 + 0x11b4) * __real_3dcccccd * __real_3b800000) -
                (float)(int)(*(char *)(param_1 + 0x11bd) >> 1) * __real_3e19999a) -
                (float)*(int *)(param_1 + 0x1278) * __real_3dcccccd * __real_38000000;
    iVar1 = silk_pitch_analysis_core_FLP(param_3,param_2 + 0xe4,param_1 + 0x12aa,param_1 + 0x12ac);
    iVar2 = -iVar1;
    *(char *)(param_1 + 0x12ad) = '\x02' - (iVar1 != 0);
  }
  return iVar2;
}


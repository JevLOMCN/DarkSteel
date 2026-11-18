// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_decode_indices @ 14f88493c

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void silk_decode_indices(longlong param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  short *psVar7;
  undefined1 *puVar8;
  char *pcVar9;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  short local_68 [16];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_98;
  if ((param_4 == 0) && (*(int *)(param_1 + 0x970 + (longlong)param_3 * 4) == 0)) {
    iVar4 = ec_dec_icdf(param_2,&silk_type_offset_no_VAD_iCDF,8);
  }
  else {
    iVar4 = ec_dec_icdf(param_2,&silk_type_offset_VAD_iCDF,8);
    iVar4 = iVar4 + 2;
  }
  cVar2 = (char)(iVar4 >> 1);
  *(char *)(param_1 + 0xae5) = cVar2;
  *(byte *)(param_1 + 0xae6) = (byte)iVar4 & 1;
  if (param_5 == 2) {
    uVar1 = ec_dec_icdf(param_2,&silk_delta_gain_iCDF,8);
    *(undefined1 *)(param_1 + 0xac8) = uVar1;
  }
  else {
    cVar2 = ec_dec_icdf(param_2,&silk_gain_iCDF + (longlong)cVar2 * 8,8);
    *(char *)(param_1 + 0xac8) = cVar2 << 3;
    cVar2 = ec_dec_icdf(param_2,&silk_uniform8_iCDF,8);
    *(char *)(param_1 + 0xac8) = *(char *)(param_1 + 0xac8) + cVar2;
  }
  iVar4 = 1;
  if (1 < *(int *)(param_1 + 0x914)) {
    puVar8 = (undefined1 *)(param_1 + 0xac9);
    do {
      uVar1 = ec_dec_icdf(param_2,&silk_delta_gain_iCDF,8);
      *puVar8 = uVar1;
      iVar4 = iVar4 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x914));
  }
  cVar2 = ec_dec_icdf(param_2,(longlong)
                              (((int)*(char *)(param_1 + 0xae5) >> 1) *
                              (int)**(short **)(param_1 + 0xac0)) +
                              *(longlong *)(*(short **)(param_1 + 0xac0) + 0xc),8);
  *(char *)(param_1 + 0xad0) = cVar2;
  silk_NLSF_unpack(local_68,local_78,*(undefined8 *)(param_1 + 0xac0),(int)cVar2);
  lVar6 = *(longlong *)(param_1 + 0xac0);
  if ((int)*(short *)(lVar6 + 2) != *(int *)(param_1 + 0x924)) {
    celt_fatal("assertion failed: psDec->psNLSF_CB->order == psDec->LPC_order",
               "../../../third_party/opus/src/silk/decode_indices.c",0x52);
    lVar6 = *(longlong *)(param_1 + 0xac0);
  }
  iVar4 = 0;
  if (0 < *(short *)(lVar6 + 2)) {
    pcVar9 = (char *)(param_1 + 0xad1);
    psVar7 = local_68;
    do {
      iVar5 = ec_dec_icdf(param_2,(longlong)*psVar7 + *(longlong *)(lVar6 + 0x30),8);
      if (iVar5 == 0) {
        iVar5 = ec_dec_icdf(param_2,&silk_NLSF_EXT_iCDF,8);
        iVar5 = -iVar5;
      }
      else if (iVar5 == 8) {
        iVar5 = ec_dec_icdf(param_2,&silk_NLSF_EXT_iCDF,8);
        iVar5 = iVar5 + 8;
      }
      iVar4 = iVar4 + 1;
      *pcVar9 = (char)iVar5 + -4;
      psVar7 = psVar7 + 1;
      lVar6 = *(longlong *)(param_1 + 0xac0);
      pcVar9 = pcVar9 + 1;
    } while (iVar4 < *(short *)(lVar6 + 2));
  }
  if (*(int *)(param_1 + 0x914) == 4) {
    uVar1 = ec_dec_icdf(param_2,&silk_NLSF_interpolation_factor_iCDF,8);
  }
  else {
    uVar1 = 4;
  }
  *(undefined1 *)(param_1 + 0xae7) = uVar1;
  if (*(char *)(param_1 + 0xae5) == '\x02') {
    if (((param_5 == 2) && (*(int *)(param_1 + 0x968) == 2)) &&
       (sVar3 = ec_dec_icdf(param_2,&silk_pitch_delta_iCDF,8), 0 < sVar3)) {
      sVar3 = *(short *)(param_1 + 0x96c) + -9 + sVar3;
      *(short *)(param_1 + 0xae2) = sVar3;
    }
    else {
      sVar3 = ec_dec_icdf(param_2,&silk_pitch_lag_iCDF,8);
      *(short *)(param_1 + 0xae2) = sVar3 * (short)(*(int *)(param_1 + 0x90c) >> 1);
      sVar3 = ec_dec_icdf(param_2,*(undefined8 *)(param_1 + 0x950),8);
      *(short *)(param_1 + 0xae2) = *(short *)(param_1 + 0xae2) + sVar3;
      sVar3 = *(short *)(param_1 + 0xae2);
    }
    *(short *)(param_1 + 0x96c) = sVar3;
    uVar1 = ec_dec_icdf(param_2,*(undefined8 *)(param_1 + 0x958),8);
    *(undefined1 *)(param_1 + 0xae4) = uVar1;
    uVar1 = ec_dec_icdf(param_2,&silk_LTP_per_index_iCDF,8);
    iVar4 = 0;
    *(undefined1 *)(param_1 + 0xae8) = uVar1;
    if (0 < *(int *)(param_1 + 0x914)) {
      puVar8 = (undefined1 *)(param_1 + 0xacc);
      do {
        uVar1 = ec_dec_icdf(param_2,(&silk_LTP_gain_iCDF_ptrs)[*(char *)(param_1 + 0xae8)],8);
        *puVar8 = uVar1;
        iVar4 = iVar4 + 1;
        puVar8 = puVar8 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x914));
    }
    if (param_5 == 0) {
      uVar1 = ec_dec_icdf(param_2,&silk_LTPscale_iCDF,8);
      *(undefined1 *)(param_1 + 0xae9) = uVar1;
    }
    else {
      *(undefined1 *)(param_1 + 0xae9) = 0;
    }
  }
  *(int *)(param_1 + 0x968) = (int)*(char *)(param_1 + 0xae5);
  uVar1 = ec_dec_icdf(param_2,&silk_uniform4_iCDF,8);
  *(undefined1 *)(param_1 + 0xaea) = uVar1;
  return;
}


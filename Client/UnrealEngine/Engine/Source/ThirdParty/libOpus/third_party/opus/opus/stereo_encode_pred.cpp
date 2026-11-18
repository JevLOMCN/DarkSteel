// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 2

// silk_stereo_encode_mid_only @ 14f87f454

void silk_stereo_encode_mid_only(undefined8 param_1,char param_2)

{
  ec_enc_icdf(param_1,(int)param_2,&silk_stereo_only_code_mid_iCDF,8);
  return;
}

// silk_stereo_encode_pred @ 14f87f470

void silk_stereo_encode_pred(undefined8 param_1,char *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = param_2[2] * 5 + (int)param_2[5];
  if (0x18 < iVar1) {
    celt_fatal("assertion failed: n < 25","../../../third_party/opus/src/silk/stereo_encode_pred.c",
               0x2c);
  }
  ec_enc_icdf(param_1,iVar1,&silk_stereo_pred_joint_iCDF,8);
  lVar2 = 2;
  do {
    if ('\x02' < *param_2) {
      celt_fatal("assertion failed: ix[ n ][ 0 ] < 3",
                 "../../../third_party/opus/src/silk/stereo_encode_pred.c",0x2f);
    }
    if ('\x04' < param_2[1]) {
      celt_fatal("assertion failed: ix[ n ][ 1 ] < STEREO_QUANT_SUB_STEPS",
                 "../../../third_party/opus/src/silk/stereo_encode_pred.c",0x30);
    }
    ec_enc_icdf(param_1,(int)*param_2,&silk_uniform3_iCDF,8);
    ec_enc_icdf(param_1,(int)param_2[1],&silk_uniform5_iCDF,8);
    param_2 = param_2 + 3;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}


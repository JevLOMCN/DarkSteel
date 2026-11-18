// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_encode_indices @ 14f87fd64

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void silk_encode_indices(longlong param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  short sVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  undefined *puVar11;
  short *psVar12;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  short local_68 [16];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (param_4 == 0) {
    pcVar9 = (char *)(param_1 + 0x1290);
  }
  else {
    pcVar9 = (char *)(param_1 + ((longlong)param_3 + 0xaa) * 0x24);
  }
  uVar6 = (int)pcVar9[0x1e] + pcVar9[0x1d] * 2;
  if (5 < uVar6) {
    celt_fatal("assertion failed: typeOffset >= 0 && typeOffset < 6",
               "../../../third_party/opus/src/silk/encode_indices.c",0x3b);
  }
  if ((int)uVar6 < 2) {
    if (param_4 != 0) {
      celt_fatal("assertion failed: encode_LBRR == 0 || typeOffset >= 2",
                 "../../../third_party/opus/src/silk/encode_indices.c",0x3c);
      goto LAB_14f87fdfb;
    }
    puVar11 = &silk_type_offset_no_VAD_iCDF;
  }
  else {
LAB_14f87fdfb:
    uVar6 = uVar6 - 2;
    puVar11 = &silk_type_offset_VAD_iCDF;
  }
  ec_enc_icdf(param_2,uVar6,puVar11,8);
  uVar6 = (uint)*pcVar9;
  if (param_5 == 2) {
    puVar11 = &silk_delta_gain_iCDF;
  }
  else {
    ec_enc_icdf(param_2,(int)uVar6 >> 3,&silk_gain_iCDF + (longlong)pcVar9[0x1d] * 8,8);
    puVar11 = &silk_uniform8_iCDF;
    uVar6 = (int)*pcVar9 & 7;
  }
  ec_enc_icdf(param_2,uVar6,puVar11,8);
  iVar10 = 1;
  pcVar8 = pcVar9;
  if (1 < *(int *)(param_1 + 0x11e4)) {
    do {
      ec_enc_icdf(param_2,(int)pcVar8[1],&silk_delta_gain_iCDF,8);
      iVar10 = iVar10 + 1;
      pcVar8 = pcVar8 + 1;
    } while (iVar10 < *(int *)(param_1 + 0x11e4));
  }
  pcVar8 = pcVar9 + 8;
  ec_enc_icdf(param_2,(int)*pcVar8,
              (longlong)(((int)pcVar9[0x1d] >> 1) * (int)**(short **)(param_1 + 0x1260)) +
              *(longlong *)(*(short **)(param_1 + 0x1260) + 0xc),8);
  silk_NLSF_unpack(local_68,local_78,*(undefined8 *)(param_1 + 0x1260),(int)*pcVar8);
  lVar4 = *(longlong *)(param_1 + 0x1260);
  if ((int)*(short *)(lVar4 + 2) != *(int *)(param_1 + 0x1220)) {
    celt_fatal("assertion failed: psEncC->psNLSF_CB->order == psEncC->predictLPCOrder",
               "../../../third_party/opus/src/silk/encode_indices.c",0x5d);
    lVar4 = *(longlong *)(param_1 + 0x1260);
  }
  iVar10 = 0;
  if (0 < *(short *)(lVar4 + 2)) {
    pcVar7 = pcVar9 + 9;
    psVar12 = local_68;
    do {
      puVar11 = (undefined *)((longlong)*psVar12 + *(longlong *)(lVar4 + 0x30));
      cVar1 = pcVar7[(longlong)(pcVar9 + (8 - (longlong)pcVar8))];
      if (cVar1 < '\x04') {
        if (cVar1 < -3) {
          ec_enc_icdf(param_2,0,puVar11,8);
          iVar5 = -(int)*pcVar7;
          goto LAB_14f87ff83;
        }
        iVar5 = cVar1 + 4;
      }
      else {
        ec_enc_icdf(param_2,8,puVar11,8);
        iVar5 = (int)*pcVar7;
LAB_14f87ff83:
        iVar5 = iVar5 + -4;
        puVar11 = &silk_NLSF_EXT_iCDF;
      }
      ec_enc_icdf(param_2,iVar5,puVar11,8);
      lVar4 = *(longlong *)(param_1 + 0x1260);
      iVar10 = iVar10 + 1;
      psVar12 = psVar12 + 1;
      pcVar7 = pcVar7 + 1;
    } while (iVar10 < *(short *)(lVar4 + 2));
  }
  if (*(int *)(param_1 + 0x11e4) == 4) {
    ec_enc_icdf(param_2,(int)pcVar9[0x1f],&silk_NLSF_interpolation_factor_iCDF,8);
  }
  if (pcVar9[0x1d] != '\x02') goto LAB_14f88010b;
  if ((param_5 == 2) && (*(int *)(param_1 + 0x1698) == 2)) {
    iVar10 = (int)*(short *)(pcVar9 + 0x1a) - (int)*(short *)(param_1 + 0x169c);
    uVar6 = iVar10 + 8;
    iVar10 = iVar10 + 9;
    if (0x13 < uVar6) {
      iVar10 = 0;
    }
    ec_enc_icdf(param_2,iVar10,&silk_pitch_delta_iCDF,8);
    if (0x13 < uVar6) goto LAB_14f88002c;
  }
  else {
LAB_14f88002c:
    sVar2 = *(short *)(pcVar9 + 0x1a);
    iVar10 = *(int *)(param_1 + 0x11e0) >> 1;
    uVar3 = (longlong)(int)sVar2 / (longlong)iVar10;
    ec_enc_icdf(param_2,uVar3 & 0xffffffff,&silk_pitch_lag_iCDF,8);
    ec_enc_icdf(param_2,(int)sVar2 - (int)(short)iVar10 * (int)(short)uVar3,
                *(undefined8 *)(param_1 + 0x1250),8);
  }
  iVar10 = 0;
  *(undefined2 *)(param_1 + 0x169c) = *(undefined2 *)(pcVar9 + 0x1a);
  ec_enc_icdf(param_2,(int)pcVar9[0x1c],*(undefined8 *)(param_1 + 0x1258),8);
  ec_enc_icdf(param_2,(int)pcVar9[0x20],&silk_LTP_per_index_iCDF,8);
  if (0 < *(int *)(param_1 + 0x11e4)) {
    pcVar8 = pcVar9 + 4;
    do {
      ec_enc_icdf(param_2,(int)*pcVar8,(&silk_LTP_gain_iCDF_ptrs)[pcVar9[0x20]],8);
      iVar10 = iVar10 + 1;
      pcVar8 = pcVar8 + 1;
    } while (iVar10 < *(int *)(param_1 + 0x11e4));
  }
  if (param_5 == 0) {
    ec_enc_icdf(param_2,(int)pcVar9[0x21],&silk_LTPscale_iCDF,8);
  }
LAB_14f88010b:
  *(int *)(param_1 + 0x1698) = (int)pcVar9[0x1d];
  ec_enc_icdf(param_2,(int)pcVar9[0x22],&silk_uniform4_iCDF,8);
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_decoder_set_fs @ 14f88446c

undefined4 silk_decoder_set_fs(longlong param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = 0;
  if (((param_2 - 8U & 0xfffffff3) != 0) || (param_2 == 0x14)) {
    celt_fatal("assertion failed: fs_kHz == 8 || fs_kHz == 12 || fs_kHz == 16",
               "../../../third_party/opus/src/silk/decoder_set_fs.c",0x2b);
  }
  if ((*(int *)(param_1 + 0x914) - 2U & 0xfffffffd) != 0) {
    celt_fatal("assertion failed: psDec->nb_subfr == MAX_NB_SUBFR || psDec->nb_subfr == MAX_NB_SUBFR/2"
               ,"../../../third_party/opus/src/silk/decoder_set_fs.c",0x2c);
  }
  iVar7 = (int)(short)param_2;
  *(int *)(param_1 + 0x91c) = iVar7 * 5;
  iVar6 = (int)(short)(iVar7 * 5) * (int)*(short *)(param_1 + 0x914);
  iVar2 = *(int *)(param_1 + 0x90c);
  if ((iVar2 != param_2) || (*(int *)(param_1 + 0x910) != param_3)) {
    uVar1 = silk_resampler_init(param_1 + 0x990,iVar7 * 1000,param_3,0);
    *(int *)(param_1 + 0x910) = param_3;
    iVar2 = *(int *)(param_1 + 0x90c);
  }
  if ((iVar2 == param_2) && (iVar5 = *(int *)(param_1 + 0x918), iVar6 == *(int *)(param_1 + 0x918)))
  goto LAB_14f884664;
  if (param_2 == 8) {
    puVar3 = &silk_pitch_contour_NB_iCDF;
    if (*(int *)(param_1 + 0x914) != 4) {
      puVar3 = &silk_pitch_contour_10_ms_NB_iCDF;
    }
    *(undefined **)(param_1 + 0x958) = puVar3;
    iVar2 = *(int *)(param_1 + 0x90c);
  }
  else {
    puVar3 = &silk_pitch_contour_iCDF;
    if (*(int *)(param_1 + 0x914) != 4) {
      puVar3 = &silk_pitch_contour_10_ms_iCDF;
    }
    *(undefined **)(param_1 + 0x958) = puVar3;
  }
  if (iVar2 != param_2) {
    *(int *)(param_1 + 0x920) = iVar7 * 0x14;
    if ((param_2 - 8U & 0xfffffffb) == 0) {
      puVar3 = &silk_NLSF_CB_NB_MB;
      uVar4 = 10;
    }
    else {
      puVar3 = &silk_NLSF_CB_WB;
      uVar4 = 0x10;
    }
    *(undefined4 *)(param_1 + 0x924) = uVar4;
    *(undefined **)(param_1 + 0xac0) = puVar3;
    if (param_2 == 0x10) {
      puVar3 = &silk_uniform8_iCDF;
LAB_14f8845fe:
      *(undefined **)(param_1 + 0x950) = puVar3;
    }
    else {
      if (param_2 == 0xc) {
        puVar3 = &silk_uniform6_iCDF;
        goto LAB_14f8845fe;
      }
      if (param_2 == 8) {
        puVar3 = &silk_uniform4_iCDF;
        goto LAB_14f8845fe;
      }
      celt_fatal("assertion failed: 0","../../../third_party/opus/src/silk/decoder_set_fs.c",0x59);
    }
    *(undefined4 *)(param_1 + 0x105c) = 0;
    *(undefined4 *)(param_1 + 0x948) = 1;
    *(undefined4 *)(param_1 + 0x904) = 100;
    *(undefined1 *)(param_1 + 0x908) = 10;
    memset((void *)(param_1 + 0x504),0,0x400);
  }
  *(int *)(param_1 + 0x90c) = param_2;
  *(int *)(param_1 + 0x918) = iVar6;
  iVar5 = iVar6;
LAB_14f884664:
  if (0x13f < iVar5 - 1U) {
    celt_fatal("assertion failed: psDec->frame_length > 0 && psDec->frame_length <= MAX_FRAME_LENGTH"
               ,"../../../third_party/opus/src/silk/decoder_set_fs.c",0x68);
  }
  return uVar1;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_decode_pitch @ 14f892b04

void silk_decode_pitch(short param_1,char param_2,int *param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  ulonglong uVar6;
  undefined *puVar7;
  longlong lVar8;
  
  if (param_4 == 8) {
    if (param_5 == 4) {
      puVar7 = &silk_CB_lags_stage2;
      lVar8 = 0xb;
    }
    else {
      if (param_5 != 2) {
        celt_fatal("assertion failed: nb_subfr == PE_MAX_NB_SUBFR >> 1",
                   "../../../third_party/opus/src/silk/decode_pitch.c",0x36);
      }
      puVar7 = &silk_CB_lags_stage2_10_ms;
      lVar8 = 3;
    }
  }
  else if (param_5 == 4) {
    puVar7 = &silk_CB_lags_stage3;
    lVar8 = 0x22;
  }
  else {
    if (param_5 != 2) {
      celt_fatal("assertion failed: nb_subfr == PE_MAX_NB_SUBFR >> 1",
                 "../../../third_party/opus/src/silk/decode_pitch.c",0x3f);
    }
    puVar7 = &silk_CB_lags_stage3_10_ms;
    lVar8 = 0xc;
  }
  iVar2 = (short)param_4 * 2;
  iVar1 = (short)param_4 * 0x12;
  if (0 < (int)param_5) {
    pcVar5 = puVar7 + param_2;
    uVar6 = (ulonglong)param_5;
    do {
      iVar3 = (int)*pcVar5 + param_1 + iVar2;
      if (iVar1 < iVar2) {
        iVar4 = iVar2;
        if ((iVar3 <= iVar2) && (iVar4 = iVar3, iVar3 < iVar1)) {
          iVar4 = iVar1;
        }
      }
      else {
        iVar4 = iVar1;
        if ((iVar3 <= iVar1) && (iVar4 = iVar3, iVar3 < iVar2)) {
          iVar4 = iVar2;
        }
      }
      *param_3 = iVar4;
      pcVar5 = pcVar5 + lVar8;
      param_3 = param_3 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 2

// FUN_14f88dca0 @ 14f88dca0

void FUN_14f88dca0(longlong param_1,float *param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  float *pfVar2;
  
  if (0x10 < (longlong)param_4) {
    pfVar2 = (float *)(param_3 + 0x38);
    lVar1 = (longlong)param_4 + -0x10;
    do {
      *(float *)((longlong)pfVar2 + (param_1 - param_3) + 8) =
           pfVar2[2] -
           (*param_2 * pfVar2[1] + *pfVar2 * param_2[1] + pfVar2[-1] * param_2[2] +
            pfVar2[-2] * param_2[3] + pfVar2[-3] * param_2[4] + pfVar2[-4] * param_2[5] +
            pfVar2[-5] * param_2[6] + pfVar2[-6] * param_2[7] + pfVar2[-7] * param_2[8] +
            pfVar2[-8] * param_2[9] + pfVar2[-9] * param_2[10] + pfVar2[-10] * param_2[0xb] +
            pfVar2[-0xb] * param_2[0xc] + pfVar2[-0xc] * param_2[0xd] + pfVar2[-0xd] * param_2[0xe]
           + pfVar2[-0xe] * param_2[0xf]);
      pfVar2 = pfVar2 + 1;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}

// silk_LPC_analysis_filter_FLP @ 14f88ddc8

void silk_LPC_analysis_filter_FLP
               (void *param_1,float *param_2,longlong param_3,int param_4,int param_5)

{
  float *pfVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_4;
  if (param_4 < param_5) {
    celt_fatal("assertion failed: Order <= length",
               "../../../third_party/opus/src/silk/float/LPC_analysis_filter_FLP.c",0xda);
  }
  if (param_5 == 6) {
    if (6 < lVar2) {
      pfVar1 = (float *)(param_3 + 0x10);
      lVar2 = lVar2 + -6;
      do {
        *(float *)((longlong)pfVar1 + (longlong)param_1 + (8 - param_3)) =
             pfVar1[2] -
             (*pfVar1 * param_2[1] + *param_2 * pfVar1[1] + pfVar1[-1] * param_2[2] +
              pfVar1[-2] * param_2[3] + pfVar1[-3] * param_2[4] + pfVar1[-4] * param_2[5]);
        pfVar1 = pfVar1 + 1;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
  }
  else if (param_5 == 8) {
    if (8 < lVar2) {
      pfVar1 = (float *)(param_3 + 0x18);
      lVar2 = lVar2 + -8;
      do {
        *(float *)((longlong)pfVar1 + (longlong)param_1 + (8 - param_3)) =
             pfVar1[2] -
             (*pfVar1 * param_2[1] + pfVar1[1] * *param_2 + pfVar1[-1] * param_2[2] +
              pfVar1[-2] * param_2[3] + pfVar1[-3] * param_2[4] + pfVar1[-4] * param_2[5] +
              pfVar1[-5] * param_2[6] + pfVar1[-6] * param_2[7]);
        pfVar1 = pfVar1 + 1;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
  }
  else if (param_5 == 10) {
    if (10 < lVar2) {
      pfVar1 = (float *)(param_3 + 0x20);
      lVar2 = lVar2 + -10;
      do {
        *(float *)((longlong)pfVar1 + (longlong)param_1 + (8 - param_3)) =
             pfVar1[2] -
             (*pfVar1 * param_2[1] + *param_2 * pfVar1[1] + pfVar1[-1] * param_2[2] +
              pfVar1[-2] * param_2[3] + pfVar1[-3] * param_2[4] + pfVar1[-4] * param_2[5] +
              pfVar1[-5] * param_2[6] + pfVar1[-6] * param_2[7] + pfVar1[-7] * param_2[8] +
             pfVar1[-8] * param_2[9]);
        pfVar1 = pfVar1 + 1;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
  }
  else if (param_5 == 0xc) {
    if (0xc < lVar2) {
      pfVar1 = (float *)(param_3 + 0x28);
      lVar2 = lVar2 + -0xc;
      do {
        *(float *)((longlong)pfVar1 + (longlong)param_1 + (8 - param_3)) =
             pfVar1[2] -
             (*param_2 * pfVar1[1] + *pfVar1 * param_2[1] + pfVar1[-1] * param_2[2] +
              pfVar1[-2] * param_2[3] + pfVar1[-3] * param_2[4] + pfVar1[-4] * param_2[5] +
              pfVar1[-5] * param_2[6] + pfVar1[-6] * param_2[7] + pfVar1[-7] * param_2[8] +
              pfVar1[-8] * param_2[9] + pfVar1[-9] * param_2[10] + pfVar1[-10] * param_2[0xb]);
        pfVar1 = pfVar1 + 1;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
    }
  }
  else if (param_5 == 0x10) {
    FUN_14f88dca0(param_1,param_2,param_3,param_4);
  }
  else {
    celt_fatal("assertion failed: 0",
               "../../../third_party/opus/src/silk/float/LPC_analysis_filter_FLP.c",0xf2);
  }
  memset(param_1,0,(longlong)param_5 << 2);
  return;
}


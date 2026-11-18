// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_apply_sine_window_FLP @ 14f88c6a0

void silk_apply_sine_window_FLP(longlong param_1,longlong param_2,int param_3,int param_4)

{
  longlong lVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (1 < param_3 - 1U) {
    celt_fatal("assertion failed: win_type == 1 || win_type == 2",
               "../../../third_party/opus/src/silk/float/apply_sine_window_FLP.c",0x30);
  }
  if (((longlong)param_4 & 3U) != 0) {
    celt_fatal("assertion failed: ( length & 3 ) == 0",
               "../../../third_party/opus/src/silk/float/apply_sine_window_FLP.c",0x33);
  }
  fVar4 = __real_40490fdb / (float)(param_4 + 1);
  fVar5 = __real_40000000 - fVar4 * fVar4;
  if (param_3 < 2) {
    fVar3 = 0.0;
  }
  else {
    fVar4 = fVar5 * __real_3f000000;
    fVar3 = __real_3f800000;
  }
  if (0 < param_4) {
    param_2 = param_2 - param_1;
    pfVar2 = (float *)(param_1 + 4);
    lVar1 = ((longlong)param_4 - 1U >> 2) + 1;
    do {
      pfVar2[-1] = *(float *)(param_2 + -4 + (longlong)pfVar2) * __real_3f000000 * (fVar4 + fVar3);
      *pfVar2 = fVar4 * *(float *)(param_2 + (longlong)pfVar2);
      fVar3 = fVar4 * fVar5 - fVar3;
      pfVar2[1] = *(float *)(param_2 + 4 + (longlong)pfVar2) * __real_3f000000 * (fVar4 + fVar3);
      fVar4 = fVar3 * fVar5 - fVar4;
      pfVar2[2] = fVar3 * *(float *)(param_2 + 8 + (longlong)pfVar2);
      pfVar2 = pfVar2 + 4;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  return;
}


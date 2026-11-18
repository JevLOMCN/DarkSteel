// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_interpolate @ 14f893980

void silk_interpolate(longlong param_1,longlong param_2,short *param_3,int param_4,uint param_5)

{
  ulonglong uVar1;
  
  if (param_4 < 0) {
    celt_fatal("assertion failed: ifact_Q2 >= 0","../../../third_party/opus/src/silk/interpolate.c",
               0x2d);
  }
  if (4 < param_4) {
    celt_fatal("assertion failed: ifact_Q2 <= 4","../../../third_party/opus/src/silk/interpolate.c",
               0x2e);
  }
  if (0 < (int)param_5) {
    param_2 = param_2 - (longlong)param_3;
    param_1 = param_1 - (longlong)param_3;
    uVar1 = (ulonglong)param_5;
    do {
      *(short *)(param_1 + (longlong)param_3) =
           (short)((int)(short)(*param_3 - *(short *)(param_2 + (longlong)param_3)) *
                   (int)(short)param_4 >> 2) + *(short *)(param_2 + (longlong)param_3);
      param_3 = param_3 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}


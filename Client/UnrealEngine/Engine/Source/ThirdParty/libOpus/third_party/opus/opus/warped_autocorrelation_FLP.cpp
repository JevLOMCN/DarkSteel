// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_warped_autocorrelation_FLP @ 14f88c4f8

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void silk_warped_autocorrelation_FLP
               (longlong param_1,longlong param_2,float param_3,int param_4,int param_5)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_1f8 [32];
  double local_1d8 [26];
  double local_108 [26];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  uVar4 = (ulonglong)param_5;
  memset(local_1d8,0,200);
  memset(local_108,0,200);
  if ((uVar4 & 1) != 0) {
    celt_fatal("assertion failed: ( order & 1 ) == 0",
               "../../../third_party/opus/src/silk/float/warped_autocorrelation_FLP.c",0x31);
  }
  lVar2 = 0;
  lVar5 = lVar2;
  if (0 < param_4) {
    do {
      dVar8 = (double)*(float *)(param_2 + lVar5 * 4);
      if (0 < param_5) {
        lVar3 = (uVar4 - 1 >> 1) + 1;
        lVar6 = lVar2;
        do {
          dVar7 = (*(double *)((longlong)local_1d8 + lVar6 + 8) - dVar8) * (double)param_3 +
                  *(double *)((longlong)local_1d8 + lVar6);
          *(double *)((longlong)local_1d8 + lVar6) = dVar8;
          dVar1 = *(double *)((longlong)local_1d8 + lVar6 + 0x10);
          *(double *)((longlong)local_108 + lVar6) =
               local_1d8[0] * dVar8 + *(double *)((longlong)local_108 + lVar6);
          dVar8 = (dVar1 - dVar7) * (double)param_3 + *(double *)((longlong)local_1d8 + lVar6 + 8);
          *(double *)((longlong)local_1d8 + lVar6 + 8) = dVar7;
          *(double *)((longlong)local_108 + lVar6 + 8) =
               local_1d8[0] * dVar7 + *(double *)((longlong)local_108 + lVar6 + 8);
          lVar6 = lVar6 + 0x10;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      local_1d8[uVar4] = dVar8;
      lVar5 = lVar5 + 1;
      local_108[uVar4] = local_1d8[0] * dVar8 + local_108[uVar4];
    } while (lVar5 < param_4);
  }
  if (0 < param_5 + 1) {
    do {
      *(float *)(param_1 + lVar2 * 4) = (float)local_108[lVar2];
      lVar2 = lVar2 + 1;
    } while (lVar2 < param_5 + 1);
  }
  return;
}


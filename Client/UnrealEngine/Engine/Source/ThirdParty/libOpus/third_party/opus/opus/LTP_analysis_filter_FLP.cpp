// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_LTP_analysis_filter_FLP @ 14f88e608

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void silk_LTP_analysis_filter_FLP
               (float *param_1,longlong param_2,undefined8 *param_3,longlong param_4,float *param_5,
               int param_6,int param_7,int param_8)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  longlong lVar5;
  float *pfVar6;
  uint uVar7;
  longlong lVar8;
  float *pfVar9;
  ulonglong uVar10;
  float fVar11;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar5 = (longlong)param_7;
  if (0 < lVar5) {
    uVar7 = param_8 + param_6;
    param_4 = param_4 - (longlong)param_5;
    do {
      fVar2 = *param_5;
      local_38 = *(undefined4 *)(param_3 + 2);
      local_48 = *param_3;
      uStack_40 = param_3[1];
      if (0 < (int)uVar7) {
        uVar10 = (ulonglong)uVar7;
        pfVar9 = (float *)(param_2 + (longlong)*(int *)(param_4 + (longlong)param_5) * -4 + 8);
        pfVar4 = param_1;
        do {
          fVar11 = *(float *)((longlong)pfVar4 + (param_2 - (longlong)param_1));
          lVar8 = 0;
          *pfVar4 = fVar11;
          pfVar6 = pfVar9;
          do {
            lVar1 = lVar8 * 4;
            lVar8 = lVar8 + 1;
            fVar3 = *pfVar6;
            pfVar6 = pfVar6 + -1;
            fVar11 = fVar11 - *(float *)((longlong)&local_48 + lVar1) * fVar3;
            *pfVar4 = fVar11;
          } while (lVar8 < 5);
          pfVar9 = pfVar9 + 1;
          *pfVar4 = fVar11 * fVar2;
          pfVar4 = pfVar4 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      param_2 = param_2 + (longlong)param_6 * 4;
      param_5 = param_5 + 1;
      param_3 = (undefined8 *)((longlong)param_3 + 0x14);
      param_1 = param_1 + (int)uVar7;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}


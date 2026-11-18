// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_find_LTP_FLP @ 14f88e4c8

void silk_find_LTP_FLP(float *param_1,longlong param_2,longlong param_3,longlong param_4,int param_5
                      ,int param_6)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = __real_3f800000;
  lVar3 = 0;
  if (0 < (longlong)param_6) {
    do {
      lVar2 = param_3 + (longlong)(*(int *)(param_4 + lVar3 * 4) + 2) * -4;
      silk_corrMatrix_FLP(lVar2,param_5,5,param_1);
      silk_corrVector_FLP(lVar2,param_3,param_5,5,param_2);
      dVar4 = (double)silk_energy_FLP(param_3,param_5 + 5);
      fVar5 = (param_1[0x18] + *param_1) * __real_3c75c28f + fVar1;
      fVar6 = (float)dVar4;
      if ((float)dVar4 <= fVar5) {
        fVar6 = fVar5;
      }
      fVar6 = fVar1 / fVar6;
      silk_scale_vector_FLP(param_1,fVar6,0x19);
      silk_scale_vector_FLP(param_2,fVar6,5);
      param_3 = param_3 + (longlong)param_5 * 4;
      param_1 = param_1 + 0x19;
      param_2 = param_2 + 0x14;
      lVar3 = lVar3 + 1;
    } while (lVar3 < param_6);
  }
  return;
}


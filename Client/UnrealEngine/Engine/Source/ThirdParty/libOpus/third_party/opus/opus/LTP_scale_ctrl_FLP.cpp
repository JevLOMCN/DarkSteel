// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_LTP_scale_ctrl_FLP @ 14f88e1e0

void silk_LTP_scale_ctrl_FLP(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  float fVar2;
  float fVar3;
  
  if (param_3 == 0) {
    fVar2 = (float)(*(int *)(param_1 + 0x1680) + *(int *)(param_1 + 0x1208)) *
            *(float *)(param_2 + 0x2c4) * __real_3dcccccd;
    fVar3 = 0.0;
    if (0.0 <= fVar2) {
      fVar3 = fVar2;
    }
    fVar2 = __real_40000000;
    if (fVar3 <= __real_40000000) {
      fVar2 = fVar3;
    }
    cVar1 = (char)(int)fVar2;
  }
  else {
    cVar1 = '\0';
  }
  *(char *)(param_1 + 0x12b1) = cVar1;
  *(float *)(param_2 + 0xe0) =
       (float)(int)(short)(&silk_LTPScales_table_Q14)[cVar1] * __real_38800000;
  return;
}


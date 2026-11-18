// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_energy_FLP @ 14f88c454

double silk_energy_FLP(longlong param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  ulonglong uVar8;
  double dVar9;
  
  iVar7 = 0;
  dVar9 = 0.0;
  if (0 < param_2 + -3) {
    pfVar6 = (float *)(param_1 + 8);
    uVar5 = (param_2 - 4U >> 2) + 1;
    uVar8 = (ulonglong)uVar5;
    iVar7 = uVar5 * 4;
    do {
      pfVar1 = pfVar6 + -1;
      pfVar2 = pfVar6 + -2;
      fVar4 = *pfVar6;
      pfVar3 = pfVar6 + 1;
      pfVar6 = pfVar6 + 4;
      dVar9 = dVar9 + (double)*pfVar2 * (double)*pfVar2 + (double)*pfVar1 * (double)*pfVar1 +
                      (double)fVar4 * (double)fVar4 + (double)*pfVar3 * (double)*pfVar3;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  if (iVar7 < param_2) {
    pfVar6 = (float *)(param_1 + (longlong)iVar7 * 4);
    uVar8 = (ulonglong)(uint)(param_2 - iVar7);
    do {
      fVar4 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      dVar9 = dVar9 + (double)fVar4 * (double)fVar4;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  return dVar9;
}


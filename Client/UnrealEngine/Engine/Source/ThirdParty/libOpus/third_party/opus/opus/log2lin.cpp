// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// silk_log2lin @ 14f87437c

int silk_log2lin(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if ((int)param_1 < 0) {
    return 0;
  }
  if (0xf7e < (int)param_1) {
    return 0x7fffffff;
  }
  uVar2 = param_1 & 0x7f;
  iVar3 = 1 << ((byte)((int)param_1 >> 7) & 0x1f);
  iVar1 = (int)((ulonglong)((longlong)(int)((0x80 - uVar2) * uVar2) * -0xae) >> 0x10) + uVar2;
  if ((int)param_1 < 0x800) {
    iVar1 = iVar1 * iVar3 >> 7;
  }
  else {
    iVar1 = iVar1 * (iVar3 >> 7);
  }
  return iVar1 + iVar3;
}


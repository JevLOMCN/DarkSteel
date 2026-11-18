// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libOpus
// Functions: 1

// isqrt32 @ 14f884f20

void isqrt32(uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar4 = 0x1f;
  if (param_1 != 0) {
    for (; param_1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
    }
  }
  iVar6 = 0;
  iVar4 = iVar4 >> 1;
  uVar5 = 1 << ((byte)iVar4 & 0x1f);
  do {
    uVar3 = uVar5 + iVar6 * 2 << ((byte)iVar4 & 0x1f);
    iVar1 = uVar5 + iVar6;
    if (param_1 < uVar3) {
      iVar1 = iVar6;
    }
    iVar6 = iVar1;
    uVar5 = uVar5 >> 1;
    uVar2 = param_1 - uVar3;
    if (param_1 < uVar3) {
      uVar2 = param_1;
    }
    iVar4 = iVar4 + -1;
    param_1 = uVar2;
  } while (-1 < iVar4);
  return;
}


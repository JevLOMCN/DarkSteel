// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PakFile
// Functions: 1

// RandRange @ 142a8f2f0

int __cdecl FMath::RandRange(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_2 - param_1;
  if (0 < iVar3 + 1) {
    uVar1 = rand();
    iVar2 = (int)((float)(uVar1 & 0x7fff) * (float)(iVar3 + 1) * __real_38000100);
    if (iVar2 < iVar3) {
      iVar3 = iVar2;
    }
    return iVar3 + param_1;
  }
  return param_1;
}


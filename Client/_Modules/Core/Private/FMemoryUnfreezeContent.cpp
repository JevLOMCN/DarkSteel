// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// GetDerivedTypeDesc @ 1419fd280

FTypeLayoutDesc * __thiscall
FMemoryUnfreezeContent::GetDerivedTypeDesc
          (FMemoryUnfreezeContent *this,FTypeLayoutDesc *param_1,int param_2)

{
  FTypeLayoutDesc *pFVar1;
  
  pFVar1 = (FTypeLayoutDesc *)0x0;
  if (param_2 == -1) {
    pFVar1 = param_1;
  }
  return pFVar1;
}


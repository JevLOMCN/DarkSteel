// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FindFieldByName @ 1485bbbf0

FStructField * __thiscall
UE::Shader::FStructType::FindFieldByName(FStructType *this,wchar_t *param_1)

{
  FStructField *pFVar1;
  int iVar2;
  FStructField *pFVar3;
  
  pFVar3 = (this->Fields).DataPtr;
  pFVar1 = pFVar3 + (this->Fields).ArrayNum;
  while( true ) {
    if (pFVar3 == pFVar1) {
      return (FStructField *)0x0;
    }
    iVar2 = wcscmp(pFVar3->Name,param_1);
    if (iVar2 == 0) break;
    pFVar3 = pFVar3 + 1;
  }
  return pFVar3;
}


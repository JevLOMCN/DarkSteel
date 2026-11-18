// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// Find @ 14ae71230

int __thiscall TArrayView<FGuid_const_,int>::Find(TArrayView<FGuid_const_,int> *this,FGuid *param_1)

{
  FGuid *pFVar1;
  FGuid *pFVar2;
  
  pFVar1 = this->DataPtr;
  if (pFVar1 != pFVar1 + this->ArrayNum) {
    pFVar2 = pFVar1;
    do {
      if (((param_1->D == pFVar2->D && param_1->C == pFVar2->C) && param_1->B == pFVar2->B) &&
          param_1->A == pFVar2->A) {
        return (int)((longlong)pFVar2 - (longlong)pFVar1 >> 4);
      }
      pFVar2 = pFVar2 + 1;
    } while (pFVar2 != pFVar1 + this->ArrayNum);
  }
  return -1;
}


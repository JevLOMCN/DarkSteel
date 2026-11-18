// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NamingTokensUI
// Functions: 2

// GetBeginning @ 14d1071a0

FTextLocation * __thiscall FTextSelection::GetBeginning(FTextSelection *this)

{
  int iVar1;
  int iVar2;
  FTextSelection *pFVar3;
  
  iVar1 = (this->LocationB).LineIndex;
  iVar2 = (this->LocationA).LineIndex;
  pFVar3 = (FTextSelection *)&this->LocationB;
  if (iVar2 == iVar1) {
    if ((this->LocationA).Offset < (this->LocationB).Offset) {
      return &this->LocationA;
    }
  }
  else if (iVar2 < iVar1) {
    pFVar3 = this;
  }
  return &pFVar3->LocationA;
}

// GetEnd @ 14d1086e0

FTextLocation * __thiscall FTextSelection::GetEnd(FTextSelection *this)

{
  int iVar1;
  int iVar2;
  FTextSelection *pFVar3;
  
  iVar1 = (this->LocationB).LineIndex;
  iVar2 = (this->LocationA).LineIndex;
  pFVar3 = (FTextSelection *)&this->LocationB;
  if (iVar2 == iVar1) {
    if ((this->LocationB).Offset < (this->LocationA).Offset) {
      return &this->LocationA;
    }
  }
  else if (iVar1 <= iVar2) {
    pFVar3 = this;
  }
  return &pFVar3->LocationA;
}


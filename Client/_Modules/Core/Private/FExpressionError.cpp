// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FExpressionError @ 1417a0e60

FExpressionError * __thiscall
FExpressionError::FExpressionError(FExpressionError *this,FText *param_1)

{
  ITextData *pIVar1;
  undefined1 local_res8 [8];
  
  (this->Text).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_1->TextData).Reference;
  (this->Text).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->Text).Flags = param_1->Flags;
  return this;
}


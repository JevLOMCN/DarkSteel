// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// operator= @ 1435e4ef0

FProgressData * __thiscall
FProgressCancel::FProgressData::operator=(FProgressData *this,FProgressData *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  this->CurrentMin = param_1->CurrentMin;
  this->CurrentMax = param_1->CurrentMax;
  this->ScopeDepth = param_1->ScopeDepth;
  pIVar1 = (param_1->Message).TextData.Reference;
  pIVar2 = (this->Message).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->Message).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->Message).Flags = (param_1->Message).Flags;
  return this;
}


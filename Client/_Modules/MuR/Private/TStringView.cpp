// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 1

// TStringView<wchar_t><FString> @ 14a94e700

TStringView<wchar_t> * __thiscall
TStringView<wchar_t>::TStringView<wchar_t><FString>(TStringView<wchar_t> *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  
  this->DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  iVar1 = (param_1->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  this->Size = iVar2;
  return this;
}


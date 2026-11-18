// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 1

// TStringView<wchar_t> @ 141dc3cd0

TStringView<wchar_t> * __thiscall
TStringView<wchar_t>::TStringView<wchar_t>(TStringView<wchar_t> *this,wchar_t *param_1)

{
  size_t sVar1;
  
  this->DataPtr = param_1;
  if (param_1 != (wchar_t *)0x0) {
    sVar1 = wcslen(param_1);
    this->Size = (int)sVar1;
    return this;
  }
  this->Size = 0;
  return this;
}


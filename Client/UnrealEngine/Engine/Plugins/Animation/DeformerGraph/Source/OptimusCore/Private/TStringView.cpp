// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 1

// TrimStartAndEnd @ 14e227ba0

TStringView<wchar_t> * __thiscall
TStringView<wchar_t>::TrimStartAndEnd
          (TStringView<wchar_t> *this,TStringView<wchar_t> *__return_storage_ptr__)

{
  wchar_t *pwVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  int iVar5;
  longlong lVar6;
  
  pwVar4 = this->DataPtr;
  iVar5 = 0;
  pwVar1 = pwVar4 + this->Size;
  while ((pwVar4 != pwVar1 && (iVar2 = iswspace(*pwVar4), iVar2 != 0))) {
    iVar5 = iVar5 + 1;
    pwVar4 = pwVar4 + 1;
  }
  pwVar1 = this->DataPtr;
  iVar2 = this->Size - iVar5;
  if (iVar2 != 0) {
    lVar6 = (longlong)iVar2;
    do {
      iVar3 = iswspace((pwVar1 + iVar5)[lVar6 + -1]);
      if (iVar3 == 0) break;
      iVar2 = iVar2 + -1;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  __return_storage_ptr__->DataPtr = pwVar1 + iVar5;
  __return_storage_ptr__->Size = iVar2;
  return __return_storage_ptr__;
}


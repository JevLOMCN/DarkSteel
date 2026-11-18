// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// Append<FString> @ 14991fff0

TStringBuilderBase<wchar_t> * __thiscall
TStringBuilderBase<wchar_t>::Append<FString>(TStringBuilderBase<wchar_t> *this,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  ulong64 uVar4;
  int iVar5;
  
  iVar1 = (param_1->Data).ArrayNum;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  iVar5 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  uVar4 = (ulong64)iVar5;
  if (this->End < this->CurPos + uVar4) {
    Extend(this,uVar4);
  }
  if (iVar5 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy(this->CurPos,pFVar2,uVar4 * 2);
    this->CurPos = (wchar_t *)((longlong)pvVar3 + uVar4 * 2);
  }
  return this;
}


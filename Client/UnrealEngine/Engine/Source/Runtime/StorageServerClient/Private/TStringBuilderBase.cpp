// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StorageServerClient
// Functions: 1

// Append<FAnsiString_&> @ 148cadf50

TStringBuilderBase<char> * __thiscall
TStringBuilderBase<char>::Append<FAnsiString_&>(TStringBuilderBase<char> *this,FAnsiString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  int iVar4;
  ulong64 uVar5;
  
  iVar1 = (param_1->Data).ArrayNum;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  iVar4 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  uVar5 = (ulong64)iVar4;
  if (this->End < this->CurPos + uVar5) {
    Extend(this,uVar5);
  }
  if (iVar4 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy(this->CurPos,pFVar2,uVar5);
    this->CurPos = (char *)((longlong)pvVar3 + uVar5);
  }
  return this;
}


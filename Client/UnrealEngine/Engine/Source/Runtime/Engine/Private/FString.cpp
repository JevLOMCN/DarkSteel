// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Left @ 147649960

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __thiscall FString::Left(FString *this,FString *__return_storage_ptr__,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (this->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  iVar1 = iVar3;
  if (param_1 < iVar3) {
    iVar1 = param_1;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    iVar2 = iVar1;
  }
  RemoveAt(this,iVar2,iVar3 - iVar2,No);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (this->Data).AllocatorInstance.Data;
  (this->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (this->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (this->Data).ArrayMax;
  (this->Data).ArrayNum = 0;
  (this->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}


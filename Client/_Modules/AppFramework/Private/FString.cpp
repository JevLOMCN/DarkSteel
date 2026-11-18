// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 4

// Find @ 142fc3fa0

int __thiscall FString::Find(FString *this,wchar_t *param_1,Type param_2,Type param_3,int param_4)

{
  int iVar1;
  size_t sVar2;
  
  if (param_1 == (wchar_t *)0x0) {
    iVar1 = -1;
  }
  else {
    sVar2 = wcslen(param_1);
    iVar1 = Find(this,param_1,(int)sVar2,param_2,param_3,param_4);
  }
  return iVar1;
}

// Append<FString,wchar_t> @ 143042460

FString * __thiscall FString::Append<FString,wchar_t>(FString *this,FString *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  AppendChars(this,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar2);
  return this;
}

// FromInt @ 1430c4ab0

FString * __cdecl FString::FromInt(FString *__return_storage_ptr__,int param_1)

{
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  AppendInt(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// LeftInline @ 1430d6450

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FString::LeftInline(FString *this,int param_1,EAllowShrinking param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (this->Data).ArrayNum;
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  iVar1 = iVar2;
  if (param_1 < iVar2) {
    iVar1 = param_1;
  }
  iVar3 = 0;
  if (0 < iVar1) {
    iVar3 = iVar1;
  }
  RemoveAt(this,iVar3,iVar2 - iVar3,param_2);
  return;
}


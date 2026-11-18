// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 3

// IsValid @ 14ae7a910

bool __thiscall Metasound::Frontend::FGraphClassRegistryKey::IsValid(FGraphClassRegistryKey *this)

{
  bool bVar1;
  
  if ((this->NodeKey).Type != Invalid) {
    bVar1 = FMetasoundFrontendClassName::IsValid(&(this->NodeKey).ClassName);
    if (bVar1) {
      bVar1 = FMetasoundFrontendVersionNumber::IsValid(&(this->NodeKey).Version);
      if (((bVar1) && ((this->AssetPath).PackageName != (FName)0x0)) &&
         (this->ObjectID != 0xffffffff)) {
        return true;
      }
    }
  }
  return false;
}

// ToString @ 14ae8b070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
Metasound::Frontend::FGraphClassRegistryKey::ToString
          (FGraphClassRegistryKey *this,FString *__return_storage_ptr__,FString *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  FString *pFVar4;
  ulong64 uVar5;
  int iVar6;
  undefined1 auStack_488 [32];
  FString local_468;
  TStringBuilderBase<wchar_t> local_458;
  wchar_t local_438 [512];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_488;
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  local_458.Base = local_438;
  local_458.End = (wchar_t *)local_38;
  local_458.bIsDynamic = false;
  local_458.bIsExternal = false;
  iVar1 = (param_1->Data).ArrayNum;
  local_458.CurPos = local_438;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  uVar5 = (ulong64)iVar6;
  if (local_38 < local_438 + uVar5) {
    TStringBuilderBase<wchar_t>::Extend(&local_458,uVar5);
  }
  if (iVar6 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy(local_458.CurPos,pFVar2,uVar5 * 2);
    local_458.CurPos = (wchar_t *)((longlong)pvVar3 + uVar5 * 2);
  }
  if (local_458.End < local_458.CurPos + 2) {
    TStringBuilderBase<wchar_t>::Extend(&local_458,2);
  }
  pvVar3 = FGenericPlatformString::Memcpy(local_458.CurPos,L" [",4);
  local_458.CurPos = (wchar_t *)((longlong)pvVar3 + 4);
  pFVar4 = ToString(this,&local_468);
  iVar1 = (pFVar4->Data).ArrayNum;
  pFVar2 = (pFVar4->Data).AllocatorInstance.Data;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  uVar5 = (ulong64)iVar6;
  if (local_458.End < local_458.CurPos + uVar5) {
    TStringBuilderBase<wchar_t>::Extend(&local_458,uVar5);
  }
  if (iVar6 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy(local_458.CurPos,pFVar2,uVar5 * 2);
    local_458.CurPos = (wchar_t *)((longlong)pvVar3 + uVar5 * 2);
  }
  if (local_468.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_468.Data.AllocatorInstance.Data);
  }
  if (local_458.End < local_458.CurPos + 2) {
    TStringBuilderBase<wchar_t>::Extend(&local_458,2);
  }
  pvVar3 = FGenericPlatformString::Memcpy(local_458.CurPos,L" ]",4);
  local_458.CurPos = (wchar_t *)((longlong)pvVar3 + 4);
  if (local_458.End < (wchar_t *)((longlong)pvVar3 + 6U)) {
    TStringBuilderBase<wchar_t>::Extend(&local_458,1);
  }
  *local_458.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_458.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_458);
  return __return_storage_ptr__;
}

// ToString @ 14ae8b280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
Metasound::Frontend::FGraphClassRegistryKey::ToString
          (FGraphClassRegistryKey *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType FVar3;
  FString *pFVar4;
  void *pvVar5;
  ulong64 uVar6;
  int iVar7;
  undefined1 auStack_298 [32];
  FString local_278;
  FString local_268;
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [256];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_298;
  local_258.Base = local_238;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  local_258.CurPos = local_238;
  local_258.End = (wchar_t *)local_38;
  pFVar4 = FNodeClassRegistryKey::ToString(&this->NodeKey,&local_278);
  iVar1 = (pFVar4->Data).ArrayNum;
  pFVar2 = (pFVar4->Data).AllocatorInstance.Data;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = 0;
  }
  uVar6 = (ulong64)iVar7;
  if (local_258.End < local_258.CurPos + uVar6) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,uVar6);
  }
  if (iVar7 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(local_258.CurPos,pFVar2,uVar6 * 2);
    local_258.CurPos = (wchar_t *)((longlong)pvVar5 + uVar6 * 2);
  }
  if ((FName)local_278.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  if (local_258.End < local_258.CurPos + 2) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,2);
  }
  pvVar5 = FGenericPlatformString::Memcpy(local_258.CurPos,L", ",4);
  local_258.CurPos = (wchar_t *)((longlong)pvVar5 + 4);
  local_278.Data.AllocatorInstance.Data =
       *(FScriptContainerElement **)&(this->AssetPath).PackageName;
  pFVar4 = ::FName::ToString((FName *)&local_278,&local_268);
  iVar1 = (pFVar4->Data).ArrayNum;
  pFVar2 = (pFVar4->Data).AllocatorInstance.Data;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = 0;
  }
  uVar6 = (ulong64)iVar7;
  if (local_258.End < local_258.CurPos + uVar6) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,uVar6);
  }
  if (iVar7 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(local_258.CurPos,pFVar2,uVar6 * 2);
    local_258.CurPos = (wchar_t *)((longlong)pvVar5 + uVar6 * 2);
  }
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  if (local_258.End < local_258.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,1);
  }
  pvVar5 = FGenericPlatformString::Memcpy(local_258.CurPos,&u__,2);
  local_258.CurPos = (wchar_t *)((longlong)pvVar5 + 2);
  local_278.Data.AllocatorInstance.Data = *(FScriptContainerElement **)&(this->AssetPath).AssetName;
  pFVar4 = ::FName::ToString((FName *)&local_278,&local_268);
  iVar1 = (pFVar4->Data).ArrayNum;
  pFVar2 = (pFVar4->Data).AllocatorInstance.Data;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = 0;
  }
  uVar6 = (ulong64)iVar7;
  if (local_258.End < local_258.CurPos + uVar6) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,uVar6);
  }
  if (iVar7 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(local_258.CurPos,pFVar2,uVar6 * 2);
    local_258.CurPos = (wchar_t *)((longlong)pvVar5 + uVar6 * 2);
  }
  if (local_268.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data.AllocatorInstance.Data);
  }
  if (local_258.End < local_258.CurPos + 2) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,2);
  }
  pvVar5 = FGenericPlatformString::Memcpy(local_258.CurPos,L", ",4);
  local_258.CurPos = (wchar_t *)((longlong)pvVar5 + 4);
  ::FString::PrintfImpl(&local_278,L"%u");
  FVar3.Data = local_278.Data.AllocatorInstance.Data;
  iVar7 = local_278.Data.ArrayNum + -1;
  if (local_278.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  uVar6 = (ulong64)iVar7;
  if (local_258.End < local_258.CurPos + uVar6) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,uVar6);
  }
  if (iVar7 != 0) {
    pvVar5 = FGenericPlatformString::Memcpy(local_258.CurPos,FVar3.Data,uVar6 * 2);
    local_258.CurPos = (wchar_t *)((longlong)pvVar5 + uVar6 * 2);
  }
  if ((FName)local_278.Data.AllocatorInstance.Data != (FName)0x0) {
    FMemory::Free(local_278.Data.AllocatorInstance.Data);
  }
  if (local_258.End < local_258.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_258,1);
  }
  *local_258.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_258.Base);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  return __return_storage_ptr__;
}


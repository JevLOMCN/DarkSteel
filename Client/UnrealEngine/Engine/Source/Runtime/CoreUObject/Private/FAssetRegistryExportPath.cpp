// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 7

// FAssetRegistryExportPath @ 141e841d0

FAssetRegistryExportPath * __thiscall
FAssetRegistryExportPath::FAssetRegistryExportPath
          (FAssetRegistryExportPath *this,TStringView<char> *param_1)

{
  TStringView<char> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  ParseExportPath<TStringView<char>_>(this,&local_18);
  return this;
}

// FAssetRegistryExportPath @ 141e84200

FAssetRegistryExportPath * __thiscall
FAssetRegistryExportPath::FAssetRegistryExportPath
          (FAssetRegistryExportPath *this,TStringView<wchar_t> *param_1)

{
  TStringView<wchar_t> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  ParseExportPath<TStringView<wchar_t>_>(this,&local_18);
  return this;
}

// ToName @ 141ebe560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FName __thiscall FAssetRegistryExportPath::ToName(FAssetRegistryExportPath *this)

{
  FName *pFVar1;
  FName in_RDX;
  undefined1 auStack_268 [32];
  FName local_248 [2];
  TStringBuilderBase<wchar_t> local_238;
  wchar_t local_218 [256];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_268;
  if (((this->ClassPath).PackageName == (FName)0x0) && (this->Object == (FName)0x0)) {
    *(FName *)in_RDX = this->Package;
  }
  else {
    local_238.Base = local_218;
    local_238.bIsDynamic = false;
    local_238.bIsExternal = false;
    local_238.CurPos = local_218;
    local_238.End = (wchar_t *)local_18;
    ToString(this,&local_238);
    pFVar1 = ::FName::FName(local_248,
                            (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1),
                            local_238.Base,FNAME_Add);
    *(FName *)in_RDX = *pFVar1;
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  }
  return in_RDX;
}

// ToPath @ 141ebe6c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FAssetRegistryExportPath::ToPath(FAssetRegistryExportPath *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  undefined1 auStack_268 [32];
  FString local_248;
  TStringBuilderBase<wchar_t> local_238;
  wchar_t local_218 [256];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_268;
  local_238.Base = local_218;
  local_238.bIsDynamic = false;
  local_238.bIsExternal = false;
  local_238.CurPos = local_218;
  local_238.End = (wchar_t *)local_18;
  ::FName::AppendString(&this->Package,&local_238);
  if (this->Object != (FName)0x0) {
    if (local_238.End < local_238.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_238,1);
    }
    *local_238.CurPos = L'.';
    local_238.CurPos = local_238.CurPos + 1;
    ::FName::AppendString(&this->Object,&local_238);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar2 = ::FString::ConstructFromPtrSize
                     (&local_248,local_238.Base,
                      (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1));
  if (__return_storage_ptr__ != pFVar2) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  return __return_storage_ptr__;
}

// ToPath @ 141ebe800

void __thiscall
FAssetRegistryExportPath::ToPath
          (FAssetRegistryExportPath *this,TStringBuilderBase<wchar_t> *param_1)

{
  ::FName::AppendString(&this->Package,param_1);
  if (this->Object != (FName)0x0) {
    if (param_1->End < param_1->CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(param_1,1);
    }
    *param_1->CurPos = L'.';
    param_1->CurPos = param_1->CurPos + 1;
    ::FName::AppendString(&this->Object,param_1);
  }
  return;
}

// ToString @ 141ebe870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
FAssetRegistryExportPath::ToString(FAssetRegistryExportPath *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  undefined1 auStack_268 [32];
  FString local_248;
  TStringBuilderBase<wchar_t> local_238;
  wchar_t local_218 [256];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_268;
  local_238.Base = local_218;
  local_238.bIsDynamic = false;
  local_238.bIsExternal = false;
  local_238.CurPos = local_218;
  local_238.End = (wchar_t *)local_18;
  ToString(this,&local_238);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar2 = ::FString::ConstructFromPtrSize
                     (&local_248,local_238.Base,
                      (int)((longlong)local_238.CurPos - (longlong)local_238.Base >> 1));
  if (__return_storage_ptr__ != pFVar2) {
    pFVar1 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_238);
  return __return_storage_ptr__;
}

// ToString @ 141ebe970

void __thiscall
FAssetRegistryExportPath::ToString
          (FAssetRegistryExportPath *this,TStringBuilderBase<wchar_t> *param_1)

{
  wchar_t **ppwVar1;
  
  ppwVar1 = &param_1->CurPos;
  if ((this->ClassPath).PackageName != (FName)0x0) {
    FTopLevelAssetPath::AppendString(&this->ClassPath,param_1);
    if (param_1->End < *ppwVar1 + 1) {
      TStringBuilderBase<wchar_t>::Extend(param_1,1);
    }
    **ppwVar1 = L'\'';
    *ppwVar1 = *ppwVar1 + 1;
  }
  ::FName::AppendString(&this->Package,param_1);
  if (this->Object != (FName)0x0) {
    if (param_1->End < *ppwVar1 + 1) {
      TStringBuilderBase<wchar_t>::Extend(param_1,1);
    }
    **ppwVar1 = L'.';
    *ppwVar1 = *ppwVar1 + 1;
    ::FName::AppendString(&this->Object,param_1);
  }
  if ((this->ClassPath).PackageName != (FName)0x0) {
    if (param_1->End < *ppwVar1 + 1) {
      TStringBuilderBase<wchar_t>::Extend(param_1,1);
    }
    ppwVar1 = &param_1->CurPos;
    **ppwVar1 = L'\'';
    *ppwVar1 = *ppwVar1 + 1;
  }
  return;
}


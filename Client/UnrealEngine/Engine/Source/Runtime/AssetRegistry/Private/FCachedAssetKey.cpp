// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 2

// FCachedAssetKey @ 142ad5a60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FCachedAssetKey * __thiscall
UE::AssetRegistry::Private::FCachedAssetKey::FCachedAssetKey
          (FCachedAssetKey *this,FSoftObjectPath *param_1)

{
  int iVar1;
  code *pcVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  bool bVar5;
  FString *pFVar6;
  FAssetPathParts *pFVar7;
  FCachedAssetKey *pFVar8;
  FName *pFVar9;
  int iVar10;
  int iVar12;
  undefined1 auStack_928 [32];
  wchar_t *local_908;
  int iStack_900;
  undefined4 uStack_8fc;
  FName local_8f8;
  FName local_8f0;
  FString local_8e8;
  TStringView<wchar_t> local_8d8;
  FName local_8c8;
  FName FStack_8c0;
  FString local_8b8;
  FAssetPathParts local_8a8;
  TStringBuilderBase<wchar_t> local_888;
  wchar_t local_868 [1035];
  wchar_t local_52 [5];
  ulonglong local_48;
  FScriptContainerElement *pFVar11;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_928;
  pFVar11 = (FScriptContainerElement *)0x0;
  iVar10 = 0;
  (this->OuterPath).ComparisonIndex = 0;
  (this->OuterPath).Number = 0;
  (this->ObjectName).ComparisonIndex = 0;
  (this->ObjectName).Number = 0;
  local_8c8 = (param_1->AssetPath).PackageName;
  FStack_8c0 = (param_1->AssetPath).AssetName;
  if ((param_1->AssetPath).AssetName != (FName)0x0) {
    iVar1 = (param_1->SubPathString).Data.ArrayNum;
    iVar12 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar12 = iVar10;
    }
    pFVar6 = ::FString::ConstructFromPtrSize
                       (&local_8e8,(uchar *)(param_1->SubPathString).Data.AllocatorInstance.Data,
                        iVar12);
    if (&local_8b8 != pFVar6) {
      pFVar11 = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar10 = (pFVar6->Data).ArrayNum;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if (local_8e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_8e8.Data.AllocatorInstance.Data);
    }
    if (pFVar11 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar11);
    }
    if (iVar10 < 2) {
      this->OuterPath = (param_1->AssetPath).PackageName;
      this->ObjectName = (param_1->AssetPath).AssetName;
    }
    else {
      local_888.Base = local_868;
      local_888.CurPos = local_868;
      local_888.End = local_52;
      local_888.bIsDynamic = false;
      local_888.bIsExternal = false;
      FSoftObjectPath::ToString(param_1,&local_888);
      local_908 = local_888.Base;
      iStack_900 = (int)((longlong)local_888.CurPos - (longlong)local_888.Base >> 1);
      local_8d8._12_4_ = uStack_8fc;
      local_8d8.Size = iStack_900;
      local_8d8.DataPtr = local_888.Base;
      pFVar7 = SplitIntoOuterPathAndAssetName(&local_8a8,&local_8d8);
      iVar10 = (pFVar7->OuterPath).Size;
      iVar1 = (pFVar7->InnermostName).Size;
      pwVar3 = (pFVar7->OuterPath).DataPtr;
      pwVar4 = (pFVar7->InnermostName).DataPtr;
      if ((iVar10 == 0) || (iVar1 == 0)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Parts.OuterPath.IsEmpty() && !Parts.InnermostName.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AssetRegistry\\Public\\AssetRegistry\\AssetDataMap.h"
                           ,0x1d0,L"");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          pFVar8 = (FCachedAssetKey *)(*pcVar2)();
          return pFVar8;
        }
      }
      pFVar9 = ::FName::FName(&local_8f8,iVar10,pwVar3,FNAME_Find);
      this->OuterPath = *pFVar9;
      pFVar9 = ::FName::FName(&local_8f0,iVar1,pwVar4,FNAME_Add);
      this->ObjectName = *pFVar9;
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_888);
    }
  }
  return this;
}

// ToString @ 142b26b60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __thiscall
UE::AssetRegistry::Private::FCachedAssetKey::ToString
          (FCachedAssetKey *this,FString *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  undefined1 auStack_888 [32];
  FString local_868;
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1035];
  wchar_t local_22 [5];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_888;
  local_858.Base = local_838;
  local_858.CurPos = local_838;
  local_858.End = local_22;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  ConcatenateOuterPathAndObjectName(&local_858,this->OuterPath,this->ObjectName);
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  pFVar2 = ::FString::ConstructFromPtrSize
                     (&local_868,local_858.Base,
                      (int)((longlong)local_858.CurPos - (longlong)local_858.Base >> 1));
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
  if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_868.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
  return __return_storage_ptr__;
}


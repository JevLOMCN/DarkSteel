// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 5

// BuildExternalDataLayerActorsRootPath @ 148a4b260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FExternalDataLayerHelper::BuildExternalDataLayerActorsRootPath
          (FString *param_1,FExternalDataLayerUID *param_2,FString *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  bool bVar3;
  void *pvVar4;
  wchar_t *pwVar5;
  size_t sVar6;
  ulong64 uVar7;
  int iVar8;
  wchar_t *pwVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_888 [32];
  TStringView<wchar_t> local_868;
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1024];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_888;
  if (((param_1->Data).ArrayNum < 2) || (param_2->Value == 0)) {
    bVar3 = false;
  }
  else {
    local_858.Base = local_838;
    local_858.CurPos = local_838;
    local_858.End = (wchar_t *)local_38;
    local_858.bIsDynamic = false;
    local_858.bIsExternal = false;
    pvVar4 = FGenericPlatformString::Memcpy(local_838,&u__,2);
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    local_858.CurPos = (wchar_t *)((longlong)pvVar4 + 2);
    iVar1 = (param_1->Data).ArrayNum;
    iVar8 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar8 = 0;
    }
    uVar7 = (ulong64)iVar8;
    if (local_858.End < local_858.CurPos + uVar7) {
      TStringBuilderBase<wchar_t>::Extend(&local_858,uVar7);
    }
    if (iVar8 != 0) {
      pvVar4 = FGenericPlatformString::Memcpy(local_858.CurPos,pFVar2,uVar7 * 2);
      local_858.CurPos = (wchar_t *)((longlong)pvVar4 + uVar7 * 2);
    }
    if (local_858.End < local_858.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_858,1);
    }
    pvVar4 = FGenericPlatformString::Memcpy(local_858.CurPos,&u__,2);
    local_858.CurPos = (wchar_t *)((longlong)pvVar4 + 2);
    pwVar5 = FPackagePath::GetExternalActorsFolderName();
    iVar8 = 0;
    if (pwVar5 != (wchar_t *)0x0) {
      sVar6 = wcslen(pwVar5);
      iVar8 = (int)sVar6;
    }
    uVar7 = (ulong64)iVar8;
    if (local_858.End < local_858.CurPos + uVar7) {
      TStringBuilderBase<wchar_t>::Extend(&local_858,uVar7);
    }
    if (iVar8 != 0) {
      pvVar4 = FGenericPlatformString::Memcpy(local_858.CurPos,pwVar5,uVar7 * 2);
      local_858.CurPos = (wchar_t *)((longlong)pvVar4 + uVar7 * 2);
    }
    iVar8 = ExternalDataLayerFolder.Size;
    uVar7 = (ulong64)iVar8;
    local_868 = ExternalDataLayerFolder;
    uVar10 = (int)ExternalDataLayerFolder.DataPtr;
    uVar11 = ExternalDataLayerFolder.DataPtr._4_4_;
    if (local_858.End < local_858.CurPos + uVar7) {
      TStringBuilderBase<wchar_t>::Extend(&local_858,uVar7);
      uVar10 = local_868.DataPtr._0_4_;
      uVar11 = local_868.DataPtr._4_4_;
    }
    if (iVar8 != 0) {
      pvVar4 = FGenericPlatformString::Memcpy
                         (local_858.CurPos,(void *)CONCAT44(uVar11,uVar10),uVar7 * 2);
      local_858.CurPos = (wchar_t *)((longlong)pvVar4 + uVar7 * 2);
    }
    ::FString::PrintfImpl((FString *)&local_868,L"%X");
    pwVar5 = local_868.DataPtr;
    iVar8 = local_868.Size + -1;
    if (local_868.Size == 0) {
      iVar8 = 0;
    }
    uVar7 = (ulong64)iVar8;
    if (local_858.End < local_858.CurPos + uVar7) {
      TStringBuilderBase<wchar_t>::Extend(&local_858,uVar7);
    }
    pwVar9 = local_868.DataPtr;
    if (iVar8 != 0) {
      pvVar4 = FGenericPlatformString::Memcpy(local_858.CurPos,pwVar5,uVar7 * 2);
      local_858.CurPos = (wchar_t *)((longlong)pvVar4 + uVar7 * 2);
      pwVar9 = local_868.DataPtr;
    }
    if (pwVar9 != (wchar_t *)0x0) {
      FMemory::Free(pwVar9);
    }
    if (local_858.End < local_858.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_858,1);
    }
    *local_858.CurPos = L'\0';
    ::FString::operator=(param_3,local_858.Base);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
    bVar3 = true;
  }
  return bVar3;
}

// BuildExternalDataLayerRootPath @ 148a4b540

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FExternalDataLayerHelper::BuildExternalDataLayerRootPath
          (FString *param_1,FExternalDataLayerUID *param_2,FString *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  wchar_t *pwVar3;
  bool bVar4;
  void *pvVar5;
  ulong64 uVar6;
  int iVar7;
  wchar_t *pwVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined1 auStack_888 [32];
  TStringView<wchar_t> local_868;
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1024];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_888;
  if (((param_1->Data).ArrayNum < 2) || (param_2->Value == 0)) {
    bVar4 = false;
  }
  else {
    local_858.Base = local_838;
    local_858.CurPos = local_838;
    local_858.End = (wchar_t *)local_38;
    local_858.bIsDynamic = false;
    local_858.bIsExternal = false;
    pvVar5 = FGenericPlatformString::Memcpy(local_838,&u__,2);
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    local_858.CurPos = (wchar_t *)((longlong)pvVar5 + 2);
    iVar1 = (param_1->Data).ArrayNum;
    iVar7 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar7 = 0;
    }
    uVar6 = (ulong64)iVar7;
    if (local_858.End < local_858.CurPos + uVar6) {
      TStringBuilderBase<wchar_t>::Extend(&local_858,uVar6);
    }
    if (iVar7 != 0) {
      pvVar5 = FGenericPlatformString::Memcpy(local_858.CurPos,pFVar2,uVar6 * 2);
      local_858.CurPos = (wchar_t *)((longlong)pvVar5 + uVar6 * 2);
    }
    iVar7 = ExternalDataLayerFolder.Size;
    uVar6 = (ulong64)iVar7;
    local_868 = ExternalDataLayerFolder;
    uVar9 = (int)ExternalDataLayerFolder.DataPtr;
    uVar10 = ExternalDataLayerFolder.DataPtr._4_4_;
    if (local_858.End < local_858.CurPos + uVar6) {
      TStringBuilderBase<wchar_t>::Extend(&local_858,uVar6);
      uVar9 = local_868.DataPtr._0_4_;
      uVar10 = local_868.DataPtr._4_4_;
    }
    if (iVar7 != 0) {
      pvVar5 = FGenericPlatformString::Memcpy
                         (local_858.CurPos,(void *)CONCAT44(uVar10,uVar9),uVar6 * 2);
      local_858.CurPos = (wchar_t *)((longlong)pvVar5 + uVar6 * 2);
    }
    ::FString::PrintfImpl((FString *)&local_868,L"%X");
    pwVar3 = local_868.DataPtr;
    iVar7 = local_868.Size + -1;
    if (local_868.Size == 0) {
      iVar7 = 0;
    }
    uVar6 = (ulong64)iVar7;
    if (local_858.End < local_858.CurPos + uVar6) {
      TStringBuilderBase<wchar_t>::Extend(&local_858,uVar6);
    }
    pwVar8 = local_868.DataPtr;
    if (iVar7 != 0) {
      pvVar5 = FGenericPlatformString::Memcpy(local_858.CurPos,pwVar3,uVar6 * 2);
      local_858.CurPos = (wchar_t *)((longlong)pvVar5 + uVar6 * 2);
      pwVar8 = local_868.DataPtr;
    }
    if (pwVar8 != (wchar_t *)0x0) {
      FMemory::Free(pwVar8);
    }
    if (local_858.End < local_858.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_858,1);
    }
    *local_858.CurPos = L'\0';
    ::FString::operator=(param_3,local_858.Base);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
    bVar4 = true;
  }
  return bVar4;
}

// GetExternalDataLayerLevelRootPath @ 148a58100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl
FExternalDataLayerHelper::GetExternalDataLayerLevelRootPath
          (FString *__return_storage_ptr__,FString *param_1,FExternalDataLayerUID *param_2,
          FString *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  ForAnyElementType FVar3;
  bool bVar4;
  FString *pFVar5;
  void *pvVar6;
  ulong64 uVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_898 [32];
  FString local_878;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStack_898;
  local_878.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_878.Data.ArrayNum = 0;
  local_878.Data.ArrayMax = 0;
  bVar4 = BuildExternalDataLayerRootPath(param_1,param_2,&local_878);
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("BuildExternalDataLayerRootPath(InExternalDataLayerMountPoint, InExternalDataLayerUID, ExternalDataLayerRootPath)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerHelper.cpp"
                       ,0x49,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  FVar3.Data = local_878.Data.AllocatorInstance.Data;
  local_868.Base = local_848;
  local_868.End = (wchar_t *)local_48;
  local_868.bIsDynamic = false;
  local_868.bIsExternal = false;
  local_868.CurPos = local_848;
  iVar8 = local_878.Data.ArrayNum + -1;
  if (local_878.Data.ArrayNum == 0) {
    iVar8 = 0;
  }
  uVar7 = (ulong64)iVar8;
  if (local_48 < local_848 + uVar7) {
    TStringBuilderBase<wchar_t>::Extend(&local_868,uVar7);
  }
  if (iVar8 != 0) {
    pvVar6 = FGenericPlatformString::Memcpy(local_868.CurPos,FVar3.Data,uVar7 * 2);
    local_868.CurPos = (wchar_t *)((longlong)pvVar6 + uVar7 * 2);
  }
  if (local_868.End < local_868.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_868,1);
  }
  pvVar6 = FGenericPlatformString::Memcpy(local_868.CurPos,&u__,2);
  pFVar1 = (param_3->Data).AllocatorInstance.Data;
  local_868.CurPos = (wchar_t *)((longlong)pvVar6 + 2);
  iVar8 = (param_3->Data).ArrayNum;
  iVar9 = iVar8 + -1;
  if (iVar8 == 0) {
    iVar9 = 0;
  }
  uVar7 = (ulong64)iVar9;
  if (local_868.End < local_868.CurPos + uVar7) {
    TStringBuilderBase<wchar_t>::Extend(&local_868,uVar7);
  }
  if (iVar9 != 0) {
    pvVar6 = FGenericPlatformString::Memcpy(local_868.CurPos,pFVar1,uVar7 * 2);
    local_868.CurPos = (wchar_t *)((longlong)pvVar6 + uVar7 * 2);
  }
  if (local_868.End < local_868.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_868,1);
  }
  *local_868.CurPos = L'\0';
  ::FString::FString(__return_storage_ptr__,local_868.Base);
  FPaths::RemoveDuplicateSlashes(__return_storage_ptr__);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
  if (local_878.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_878.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetExternalDataLayerLevelRootPath @ 148a58300

FString * __cdecl
FExternalDataLayerHelper::GetExternalDataLayerLevelRootPath
          (FString *__return_storage_ptr__,UExternalDataLayerAsset *param_1,FString *param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  UPackage *pUVar4;
  FName this;
  FName local_res8;
  FName local_res10;
  FString local_38;
  FString local_28;
  
  if (param_1 == (UExternalDataLayerAsset *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InExternalDataLayerAsset",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerHelper.cpp"
                       ,0x41,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((param_1->UID).Value == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InExternalDataLayerAsset->GetUID().IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerHelper.cpp"
                       ,0x42,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  pUVar4 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)param_1);
  local_res8 = (FName)pUVar4->_padding_;
  ::FName::ToString(&local_res8,&local_38);
  this = FPackageName::GetPackageMountPoint((FString *)&local_res10,SUB81(&local_38,0));
  pFVar3 = ::FName::ToString((FName *)this,&local_28);
  GetExternalDataLayerLevelRootPath(__return_storage_ptr__,pFVar3,&param_1->UID,param_2);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetExternalStreamingObjectPackageName @ 148a58670

FString * __cdecl
FExternalDataLayerHelper::GetExternalStreamingObjectPackageName
          (FString *__return_storage_ptr__,UExternalDataLayerAsset *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  
  if (param_1 == (UExternalDataLayerAsset *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InExternalDataLayerAsset",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\WorldPartition\\DataLayer\\ExternalDataLayerHelper.cpp"
                       ,0x19,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"StreamingObject_%X");
  return __return_storage_ptr__;
}


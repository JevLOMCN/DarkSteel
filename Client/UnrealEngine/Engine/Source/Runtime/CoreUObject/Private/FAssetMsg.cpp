// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// FormatPathForAssetLog @ 14226cb70

FString * __cdecl
FAssetMsg::FormatPathForAssetLog(FString *__return_storage_ptr__,FPackagePath *param_1)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_18;
  
  pFVar1 = FPackagePath::GetDebugName(param_1,&local_18);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  if (ShowDiskPathOnce == false) {
    FConfigCacheIni::GetBool
              (GConfig,L"Core.System",L"AssetLogShowsDiskPath",&ShowDiskPath,&GEngineIni);
    ShowDiskPathOnce = true;
  }
  ::FString::FString(__return_storage_ptr__,pwVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FormatPathForAssetLog @ 14226cc10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FString * __cdecl FAssetMsg::FormatPathForAssetLog(FString *__return_storage_ptr__,UObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FString *pFVar5;
  ForAnyElementType FVar6;
  undefined1 auStackY_2b8 [32];
  FString local_288;
  undefined4 local_278;
  FString local_270;
  FString local_260;
  TStringBuilderBase<wchar_t> local_248;
  wchar_t local_228 [256];
  ulonglong local_28 [2];
  
  local_28[0] = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_278 = 0;
  if (param_1 == (UObject *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6173121095420340098>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectGlobals.cpp"
                       ,0x187e,"Object");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar1)();
      return pFVar5;
    }
    local_260.Data.ArrayNum = 0;
    local_260.Data.ArrayMax = 0;
    pFVar5 = &local_260;
    bVar3 = true;
    bVar2 = false;
    bVar4 = false;
    FVar6.Data = (FScriptContainerElement *)0x0;
  }
  else {
    local_248.Base = local_228;
    local_288.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_248.CurPos = local_228;
    local_288.Data.ArrayNum = 0;
    local_288.Data.ArrayMax = 0;
    local_248.End = (wchar_t *)local_28;
    local_248.bIsDynamic = false;
    local_248.bIsExternal = false;
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,(UObject *)0x0,&local_248);
    ::FString::AppendChars
              (&local_288,local_248.Base,
               (int)((longlong)local_248.CurPos - (longlong)local_248.Base >> 1));
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_248);
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_288.Data.ArrayNum != 0) {
      FVar6.Data = local_288.Data.AllocatorInstance.Data;
    }
    if (ShowDiskPathOnce == false) {
      FConfigCacheIni::GetBool
                (GConfig,L"Core.System",L"AssetLogShowsDiskPath",&ShowDiskPath,&GEngineIni);
      ShowDiskPathOnce = true;
    }
    ::FString::FString(&local_270,(wchar_t *)FVar6.Data);
    pFVar5 = &local_270;
    bVar3 = false;
    bVar2 = true;
    bVar4 = true;
    FVar6.Data = local_270.Data.AllocatorInstance.Data;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar6.Data;
  (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar5->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar5->Data).ArrayMax;
  (pFVar5->Data).ArrayNum = 0;
  (pFVar5->Data).ArrayMax = 0;
  if (bVar4) {
    if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_270.Data.AllocatorInstance.Data);
    }
  }
  if (bVar2) {
    if (local_288.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_288.Data.AllocatorInstance.Data);
    }
  }
  if ((bVar3) && (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_260.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FormatPathForAssetLog @ 14226cde0

FString * __cdecl FAssetMsg::FormatPathForAssetLog(FString *__return_storage_ptr__,wchar_t *param_1)

{
  if (!ShowDiskPathOnce) {
    FConfigCacheIni::GetBool
              (GConfig,L"Core.System",L"AssetLogShowsDiskPath",&ShowDiskPath,&GEngineIni);
    ShowDiskPathOnce = true;
  }
  ::FString::FString(__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetAssetLogString @ 14226ec90

FString * __cdecl
FAssetMsg::GetAssetLogString(FString *__return_storage_ptr__,FPackagePath *param_1,FString *param_2)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28;
  FString local_18;
  
  pFVar1 = FPackagePath::GetDebugName(param_1,&local_18);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  if (ShowDiskPathOnce == false) {
    FConfigCacheIni::GetBool
              (GConfig,L"Core.System",L"AssetLogShowsDiskPath",&ShowDiskPath,&GEngineIni);
    ShowDiskPathOnce = true;
  }
  ::FString::FString(&local_28,pwVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(__return_storage_ptr__,L"[AssetLog] %s: %s");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAssetLogString @ 14226ed90

FString * __cdecl
FAssetMsg::GetAssetLogString(FString *__return_storage_ptr__,UObject *param_1,FString *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FString *pFVar6;
  UPackage *pUVar7;
  ForAnyElementType FVar8;
  FName local_res8;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffff00000000);
  if (param_1 == (UObject *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6173121095420340083>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectGlobals.cpp"
                       ,0x188d,"Object");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FString *)(*pcVar2)();
      return pFVar6;
    }
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    pFVar6 = &local_28;
    bVar4 = true;
    bVar3 = false;
    bVar5 = false;
    FVar8.Data = (FScriptContainerElement *)(UPackage *)0x0;
  }
  else {
    while( true ) {
      if ((TObjectPtr<UObject>_u_0)((TObjectPtr<UObject>_u_0 *)((longlong)param_1 + 0x20))->DebugPtr
          == (TObjectPtr<UObject>_u_0)0x0) {
        pUVar7 = CastChecked<UPackage,UObject>(param_1);
      }
      else {
        pUVar7 = (UPackage *)0x0;
        if ((*(uint *)((longlong)param_1 + 8) >> 0x1c & 1) != 0) {
          pUVar7 = GetObjectExternalPackageThreadSafe((UObjectBase *)param_1);
        }
      }
      if (pUVar7 != (UPackage *)0x0) break;
      param_1 = ((TObjectPtr<UObject>_u_0 *)((longlong)param_1 + 0x20))->DebugPtr;
    }
    local_res8 = (FName)pUVar7->_padding_;
    ::FName::ToString(&local_res8,&local_38);
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_38.Data.ArrayNum != 0) {
      FVar8.Data = local_38.Data.AllocatorInstance.Data;
    }
    if (ShowDiskPathOnce == false) {
      FConfigCacheIni::GetBool
                (GConfig,L"Core.System",L"AssetLogShowsDiskPath",&ShowDiskPath,&GEngineIni);
      ShowDiskPathOnce = true;
    }
    ::FString::FString(&local_58,(wchar_t *)FVar8.Data);
    ::FString::PrintfImpl(&local_48,L"[AssetLog] %s: %s");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    pFVar6 = &local_48;
    bVar4 = false;
    bVar3 = true;
    bVar5 = true;
    FVar8.Data = local_48.Data.AllocatorInstance.Data;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = FVar8.Data;
  (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar6->Data).ArrayNum;
  iVar1 = (pFVar6->Data).ArrayMax;
  (pFVar6->Data).ArrayNum = 0;
  (pFVar6->Data).ArrayMax = 0;
  (__return_storage_ptr__->Data).ArrayMax = iVar1;
  if ((bVar5) && ((UPackage *)local_48.Data.AllocatorInstance.Data != (UPackage *)0x0)) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((bVar3) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((bVar4) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetAssetLogString @ 14226ef90

FString * __cdecl
FAssetMsg::GetAssetLogString(FString *__return_storage_ptr__,wchar_t *param_1,FString *param_2)

{
  FString local_18;
  
  if (!ShowDiskPathOnce) {
    FConfigCacheIni::GetBool
              (GConfig,L"Core.System",L"AssetLogShowsDiskPath",&ShowDiskPath,&GEngineIni);
    ShowDiskPathOnce = true;
  }
  ::FString::FString(&local_18,param_1);
  ::FString::PrintfImpl(__return_storage_ptr__,L"[AssetLog] %s: %s");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}


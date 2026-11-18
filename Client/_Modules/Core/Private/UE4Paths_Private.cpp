// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// ConvertRelativePathToFullInternal<FString_const_&> @ 141907df0

FString * __cdecl
UE4Paths_Private::ConvertRelativePathToFullInternal<FString_const_&>
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  bool local_res8 [8];
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  bVar4 = FPaths::IsRelative(param_2);
  iVar6 = 0;
  if (bVar4) {
    iVar1 = (param_1->Data).ArrayNum;
    iVar7 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar7 = iVar6;
    }
    ::FString::AssignRange
              (__return_storage_ptr__,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar7);
    iVar1 = (param_2->Data).ArrayNum;
    iVar7 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar7 = iVar6;
    }
    ::FString::PathAppend
              (__return_storage_ptr__,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar7);
  }
  else if (__return_storage_ptr__ != param_2) {
    pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
    (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (param_2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (param_2->Data).ArrayMax;
    (param_2->Data).ArrayNum = 0;
    (param_2->Data).ArrayMax = 0;
  }
  iVar1 = (__return_storage_ptr__->Data).ArrayNum;
  pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = iVar6;
  }
  pFVar3 = pFVar2;
  while (pFVar3 < pFVar2 + (longlong)iVar7 * 2) {
    sVar5 = *(short *)pFVar3;
    if (sVar5 == 0x5c) {
      sVar5 = 0x2f;
    }
    *(short *)pFVar3 = sVar5;
    pFVar3 = pFVar3 + 2;
  }
  UE4PathViews_Private::CollapseRelativeDirectoriesImplTemplate<FString>
            (__return_storage_ptr__,false,local_res8);
  ::FString::TrimToNullTerminator(__return_storage_ptr__);
  iVar1 = (__return_storage_ptr__->Data).ArrayNum;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = iVar6;
  }
  if (iVar7 == 0) {
    ::FString::operator=(__return_storage_ptr__,L"/");
  }
  return __return_storage_ptr__;
}

// ConvertRelativePathToFullInternal<TStringView<wchar_t>_> @ 141907f10

FString * __cdecl
UE4Paths_Private::ConvertRelativePathToFullInternal<TStringView<wchar_t>_>
          (FString *__return_storage_ptr__,TStringView<wchar_t> *param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  bool local_res8 [8];
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  bVar4 = FPaths::IsRelative(param_2);
  iVar6 = 0;
  if (bVar4) {
    ::FString::AssignRange
              (__return_storage_ptr__,param_1->DataPtr,(int)*(undefined8 *)&param_1->Size);
    iVar1 = (param_2->Data).ArrayNum;
    iVar7 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar7 = iVar6;
    }
    ::FString::PathAppend
              (__return_storage_ptr__,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar7);
  }
  else if (__return_storage_ptr__ != param_2) {
    pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
    (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (param_2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (param_2->Data).ArrayMax;
    (param_2->Data).ArrayNum = 0;
    (param_2->Data).ArrayMax = 0;
  }
  iVar1 = (__return_storage_ptr__->Data).ArrayNum;
  pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = iVar6;
  }
  pFVar3 = pFVar2;
  while (pFVar3 < pFVar2 + (longlong)iVar7 * 2) {
    sVar5 = *(short *)pFVar3;
    if (sVar5 == 0x5c) {
      sVar5 = 0x2f;
    }
    *(short *)pFVar3 = sVar5;
    pFVar3 = pFVar3 + 2;
  }
  UE4PathViews_Private::CollapseRelativeDirectoriesImplTemplate<FString>
            (__return_storage_ptr__,false,local_res8);
  ::FString::TrimToNullTerminator(__return_storage_ptr__);
  iVar1 = (__return_storage_ptr__->Data).ArrayNum;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = iVar6;
  }
  if (iVar7 == 0) {
    ::FString::operator=(__return_storage_ptr__,L"/");
  }
  return __return_storage_ptr__;
}

// ConvertRelativePathToFullInternal<FString> @ 141908020

FString * __cdecl
UE4Paths_Private::ConvertRelativePathToFullInternal<FString>
          (FString *__return_storage_ptr__,FString *param_1,FString *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  bool local_res8 [8];
  
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  bVar4 = FPaths::IsRelative(param_2);
  iVar6 = 0;
  if (bVar4) {
    if (__return_storage_ptr__ != param_1) {
      pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data
      ;
      (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (param_1->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (param_1->Data).ArrayMax;
      (param_1->Data).ArrayNum = 0;
      (param_1->Data).ArrayMax = 0;
    }
    iVar1 = (param_2->Data).ArrayNum;
    iVar7 = iVar1 + -1;
    if (iVar1 == 0) {
      iVar7 = iVar6;
    }
    ::FString::PathAppend
              (__return_storage_ptr__,(wchar_t *)(param_2->Data).AllocatorInstance.Data,iVar7);
  }
  else if (__return_storage_ptr__ != param_2) {
    pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (param_2->Data).AllocatorInstance.Data;
    (param_2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (param_2->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (param_2->Data).ArrayMax;
    (param_2->Data).ArrayNum = 0;
    (param_2->Data).ArrayMax = 0;
  }
  iVar1 = (__return_storage_ptr__->Data).ArrayNum;
  pFVar2 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = iVar6;
  }
  pFVar3 = pFVar2;
  while (pFVar3 < pFVar2 + (longlong)iVar7 * 2) {
    sVar5 = *(short *)pFVar3;
    if (sVar5 == 0x5c) {
      sVar5 = 0x2f;
    }
    *(short *)pFVar3 = sVar5;
    pFVar3 = pFVar3 + 2;
  }
  UE4PathViews_Private::CollapseRelativeDirectoriesImplTemplate<FString>
            (__return_storage_ptr__,false,local_res8);
  ::FString::TrimToNullTerminator(__return_storage_ptr__);
  iVar1 = (__return_storage_ptr__->Data).ArrayNum;
  iVar7 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar7 = iVar6;
  }
  if (iVar7 == 0) {
    ::FString::operator=(__return_storage_ptr__,L"/");
  }
  return __return_storage_ptr__;
}

// EngineSavedDir @ 1419374b0

FString * __cdecl UE4Paths_Private::EngineSavedDir(FString *__return_storage_ptr__)

{
  bool bVar1;
  wchar_t *pwVar2;
  FEngineVersion *this;
  FString *pFVar3;
  wchar_t *_Str;
  size_t sVar4;
  FScriptContainerElement **ppFVar5;
  wchar_t *_Str_00;
  longlong lVar6;
  int iVar7;
  int iVar8;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  wchar_t *local_48;
  int local_40;
  FScriptContainerElement *local_38;
  int local_30 [2];
  FScriptContainerElement *local_28;
  int local_20;
  
  bVar1 = FPaths::ShouldSaveToUserDir();
  if (!bVar1) {
    bVar1 = FApp::IsEngineInstalled();
    if (!bVar1) {
      pwVar2 = FGenericPlatformMisc::EngineDir();
      ::FString::FString(&local_78,pwVar2);
      goto LAB_14193767e;
    }
  }
  this = FEngineVersion::Current();
  pFVar3 = FEngineVersion::ToString(this,&local_58,Minor);
  pwVar2 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    _Str_00 = L"";
  }
  else {
    _Str_00 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = FApp::GetEpicProductIdentifier(&local_68);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar2 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  _Str = FWindowsPlatformProcess::UserSettingsDir();
  iVar7 = 0;
  local_48 = _Str;
  if (_Str != (wchar_t *)0x0) {
    sVar4 = wcslen(_Str);
    iVar7 = (int)sVar4;
  }
  iVar8 = 0;
  local_40 = iVar7;
  local_38 = (FScriptContainerElement *)pwVar2;
  if ((FScriptContainerElement *)pwVar2 != (FScriptContainerElement *)0x0) {
    sVar4 = wcslen(pwVar2);
    iVar8 = (int)sVar4;
  }
  local_20 = 0;
  local_30[0] = iVar8;
  local_28 = (FScriptContainerElement *)_Str_00;
  if ((FScriptContainerElement *)_Str_00 != (FScriptContainerElement *)0x0) {
    sVar4 = wcslen(_Str_00);
    local_20 = (int)sVar4;
  }
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_88.Data.ArrayNum = 0;
  local_88.Data.ArrayMax = 0;
  ::FString::Reserve(&local_88,iVar8 + local_20 + 3 + iVar7);
  ::FString::AppendChars(&local_88,_Str,iVar7);
  ppFVar5 = &local_38;
  lVar6 = 2;
  do {
    ::FString::PathAppend(&local_88,(wchar_t *)*ppFVar5,(int)ppFVar5[1]);
    ppFVar5 = ppFVar5 + 2;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  ::FString::ConcatFC(&local_78,&local_88,L"/");
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
LAB_14193767e:
  GetSavedDirSuffix(__return_storage_ptr__,&local_78,L"-enginesaveddirsuffix=");
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GameSavedDir @ 141943d30

FString * __cdecl UE4Paths_Private::GameSavedDir(FString *__return_storage_ptr__)

{
  FString *pFVar1;
  FString local_18;
  
  pFVar1 = FPaths::ProjectUserDir(&local_18);
  GetSavedDirSuffix(__return_storage_ptr__,pFVar1,L"-saveddirsuffix=");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetSavedDirSuffix @ 14194b640

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl
UE4Paths_Private::GetSavedDirSuffix
          (FString *__return_storage_ptr__,FString *param_1,wchar_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  wchar_t *pwVar4;
  FString *pFVar5;
  int iVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  FString local_28;
  FString local_18;
  
  ::FString::ConcatFC(__return_storage_ptr__,param_1,L"Saved");
  uVar7 = 0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  pwVar4 = FCommandLine::Get();
  bVar2 = FParse::Value(pwVar4,param_2,&local_28,true,(wchar_t **)0x0);
  uVar8 = uVar7;
  if (bVar2) {
    while( true ) {
      iVar6 = (int)uVar7;
      iVar3 = local_28.Data.ArrayNum + -1;
      if (local_28.Data.ArrayNum == 0) {
        iVar3 = 0;
      }
      if (iVar3 <= iVar6) break;
      if ((((iVar6 < 0) || (local_28.Data.ArrayNum == 0)) || (local_28.Data.ArrayNum + -1 <= iVar6))
         && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValidIndex(Index)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                ,0x107,
                                L"String index out of bounds: Index %i from a string with a length of %i"
                               ), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar1)();
        return pFVar5;
      }
      pwVar4 = wcschr(L"_0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz",
                      *(wchar_t *)(local_28.Data.AllocatorInstance.Data + uVar8));
      if (pwVar4 == (wchar_t *)0x0) {
        ::FString::RemoveAt(&local_28,iVar6,No);
        iVar6 = iVar6 + -1;
        uVar8 = uVar8 - 2;
      }
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar8 = uVar8 + 2;
    }
  }
  else {
  }
  if (1 < local_28.Data.ArrayNum) {
    ::FString::ConcatCF(&local_18,L"_",&local_28);
    iVar3 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars
              (__return_storage_ptr__,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar3);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  ::FString::AppendChars(__return_storage_ptr__,L"/",1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}


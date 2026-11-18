// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Localization
// Functions: 3

// GetResolvedPathRoot @ 146b76860

FString * __cdecl
FLocalizationGatherPathRootUtil::GetResolvedPathRoot
          (FString *__return_storage_ptr__,ELocalizationGatherPathRoot param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  FString local_28;
  FString local_18;
  
  if (param_1 == Auto) {
    bVar2 = !param_2;
    if (bVar2) {
      pFVar3 = FPaths::ProjectDir(&local_28);
    }
    else {
      pFVar3 = FPaths::EngineDir(&local_18);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = (pFVar3->Data).ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (bVar2) {
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    if ((!bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
  if (param_1 == Engine) {
    FPaths::EngineDir(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  if (param_1 == Project) {
    FPaths::ProjectDir(__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocalizationTargetTypes.cpp"
                     ,0x2f,L"Unknown ELocalizationGatherPathRoot!");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FString *)(*pcVar1)();
    return pFVar3;
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetResolvedPathRootDisplayName @ 146b76980

/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FText * __cdecl
FLocalizationGatherPathRootUtil::GetResolvedPathRootDisplayName
          (FText *__return_storage_ptr__,ELocalizationGatherPathRoot param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  FText *pFVar3;
  FText *pFVar4;
  FTextFormat *pFVar5;
  FText local_88;
  FText local_78;
  FText local_68;
  FText local_58;
  FText local_48;
  FTextFormat local_38;
  FText local_28;
  FTextFormat local_18;
  
  if (param_1 == Auto) {
    if (param_2) {
      pFVar3 = FText::AsLocalizable_Advanced_LocText
                         (&local_68,L"LocalizationTargetTypes",L"EngineRootDisplayName",L"Engine/");
      FText::FText(__return_storage_ptr__,pFVar3);
      local_78.TextData.Reference = local_68.TextData.Reference;
    }
    else {
      pFVar3 = FText::AsCultureInvariant(&local_28,GInternalProjectName);
      pFVar4 = FText::AsLocalizable_Advanced_LocText
                         (&local_58,L"LocalizationTargetTypes",L"ProjectRootDisplayNameFmt",L"{0}/")
      ;
      pFVar5 = FTextFormat::FTextFormat(&local_18,pFVar4,Default);
      FText::Format<FText>(&local_88,pFVar5,pFVar3);
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_58.TextData.Reference + 0x10))();
      }
      FText::FText(__return_storage_ptr__,&local_88);
      local_78.TextData.Reference = local_88.TextData.Reference;
    }
  }
  else {
    if (param_1 == Engine) {
      FText::AsLocalizable_Advanced_LocText
                (__return_storage_ptr__,L"LocalizationTargetTypes",L"EngineRootDisplayName",
                 L"Engine/");
      return __return_storage_ptr__;
    }
    if (param_1 != Project) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\Localization\\Private\\LocalizationTargetTypes.cpp"
                         ,0x44,L"Unknown ELocalizationGatherPathRoot!");
      if (!bVar2) {
        FText::FText(__return_storage_ptr__);
        return __return_storage_ptr__;
      }
      pcVar1 = (code *)swi(3);
      pFVar3 = (FText *)(*pcVar1)();
      return pFVar3;
    }
    pFVar3 = FText::AsCultureInvariant(&local_48,GInternalProjectName);
    pFVar4 = FText::AsLocalizable_Advanced_LocText
                       (&local_78,L"LocalizationTargetTypes",L"ProjectRootDisplayNameFmt",L"{0}/");
    pFVar5 = FTextFormat::FTextFormat(&local_38,pFVar4,Default);
    FText::Format<FText>(__return_storage_ptr__,pFVar5,pFVar3);
  }
  if (local_78.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetResolvedPathRootToken @ 146b76b30

FString * __cdecl
FLocalizationGatherPathRootUtil::GetResolvedPathRootToken
          (FString *__return_storage_ptr__,ELocalizationGatherPathRoot param_1)

{
  if (param_1 == Engine) {
    ::FString::FString(__return_storage_ptr__,L"%LOCENGINEROOT%");
    return __return_storage_ptr__;
  }
  if (param_1 != Project) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  ::FString::FString(__return_storage_ptr__,L"%LOCPROJECTROOT%");
  return __return_storage_ptr__;
}


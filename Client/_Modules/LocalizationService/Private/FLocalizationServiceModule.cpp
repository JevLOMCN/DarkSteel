// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LocalizationService
// Functions: 18

// FLocalizationServiceModule @ 146b2d9c0

FLocalizationServiceModule * __thiscall
FLocalizationServiceModule::FLocalizationServiceModule(FLocalizationServiceModule *this)

{
  this->_padding_ = (longlong)&___7FLocalizationServiceModule__6B_;
  (this->LocalizationServiceSettings).Provider.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->LocalizationServiceSettings).Provider.Data.ArrayNum = 0;
  (this->LocalizationServiceSettings).Provider.Data.ArrayMax = 0;
  (this->LocalizationServiceSettings).bUseGlobalSettings = false;
  this->CurrentLocalizationServiceProvider = (ILocalizationServiceProvider *)0x0;
  this->DefaultLocalizationServiceProvider =
       (FDefaultLocalizationServiceProvider)&___7FDefaultLocalizationServiceProvider__6B_;
  return this;
}

// ClearCurrentLocalizationServiceProvider @ 146b2e7f0

void __thiscall
FLocalizationServiceModule::ClearCurrentLocalizationServiceProvider
          (FLocalizationServiceModule *this)

{
  if (this->CurrentLocalizationServiceProvider != (ILocalizationServiceProvider *)0x0) {
    (**(code **)((longlong)*this->CurrentLocalizationServiceProvider + 0x10))();
    this->CurrentLocalizationServiceProvider =
         (ILocalizationServiceProvider *)&this->DefaultLocalizationServiceProvider;
  }
  return;
}

// GetLocalizationServiceProviderName @ 146b31c00

FName __thiscall
FLocalizationServiceModule::GetLocalizationServiceProviderName
          (FLocalizationServiceModule *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  IModularFeatures *this_00;
  FName FVar4;
  undefined8 *puVar5;
  uint in_register_00000014;
  uint in_R8D;
  TArray<ILocalizationServiceProvider_*,TSizedDefaultAllocator<32>_> local_18;
  
  FVar4.Number = in_register_00000014;
  FVar4.ComparisonIndex.Value = param_1;
  this_00 = IModularFeatures::Get();
  IModularFeatures::GetModularFeatureImplementations<ILocalizationServiceProvider>
            (this_00,&local_18,LocalizationServiceFeatureName);
  if ((((int)in_R8D < 0) || (local_18.ArrayNum <= (int)in_R8D)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Providers.IsValidIndex(ProviderIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\LocalizationService\\Private\\LocalizationServiceModule.cpp"
                         ,0xdb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar4 = (FName)(*pcVar1)();
    return FVar4;
  }
  uVar3 = 0;
  if ((int)in_R8D < local_18.ArrayNum) {
    uVar3 = ~in_R8D >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    FVar4 = (FName)(*pcVar1)();
    return FVar4;
  }
  puVar5 = (undefined8 *)
           (**(code **)(**(longlong **)(local_18.AllocatorInstance.Data + (longlong)(int)in_R8D * 8)
                       + 0x18))();
  *(undefined8 *)FVar4 = *puVar5;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return FVar4;
}

// GetNumLocalizationServiceProviders @ 146b31d90

int __thiscall
FLocalizationServiceModule::GetNumLocalizationServiceProviders(FLocalizationServiceModule *this)

{
  int iVar1;
  IModularFeatures *pIVar2;
  
  pIVar2 = IModularFeatures::Get();
                    /* WARNING: Could not recover jumptable at 0x000146b31dae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (**(code **)((longlong)*pIVar2 + 0x18))
                    (pIVar2,LocalizationServiceFeatureName,*(code **)((longlong)*pIVar2 + 0x18));
  return iVar1;
}

// GetProvider @ 146b31ef0

ILocalizationServiceProvider * __thiscall
FLocalizationServiceModule::GetProvider(FLocalizationServiceModule *this)

{
  return this->CurrentLocalizationServiceProvider;
}

// GetUseGlobalSettings @ 146b32290

bool __thiscall FLocalizationServiceModule::GetUseGlobalSettings(FLocalizationServiceModule *this)

{
  return (this->LocalizationServiceSettings).bUseGlobalSettings;
}

// HandleModularFeatureRegistered @ 146b32390

void __thiscall
FLocalizationServiceModule::HandleModularFeatureRegistered
          (FLocalizationServiceModule *this,FName *param_1,IModularFeature *param_2)

{
  FScriptContainerElement *_Src;
  ILocalizationServiceProvider *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  IModularFeatures *pIVar6;
  FName *this_00;
  FString *pFVar7;
  uint uVar8;
  longlong lVar9;
  ForAnyElementType FStack_38;
  int iStack_30;
  int iStack_2c;
  TArray<ILocalizationServiceProvider_*,TSizedDefaultAllocator<32>_> TStack_28;
  FString FStack_18;
  
  if (*param_1 != LocalizationServiceFeatureName) {
    return;
  }
  pIVar6 = IModularFeatures::Get();
  iVar4 = (**(code **)((longlong)*pIVar6 + 0x18))(pIVar6,LocalizationServiceFeatureName);
  if (0 < iVar4) {
    iStack_30 = (this->LocalizationServiceSettings).Provider.Data.ArrayNum;
    lVar9 = (longlong)iStack_30;
    _Src = (this->LocalizationServiceSettings).Provider.Data.AllocatorInstance.Data;
    FStack_38.Data = (FScriptContainerElement *)0x0;
    if (iStack_30 == 0) {
      iStack_2c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iStack_30,0,&FStack_38,iStack_30,&iStack_2c);
      memcpy(FStack_38.Data,_Src,lVar9 * 2);
    }
    pIVar6 = IModularFeatures::Get();
    IModularFeatures::GetModularFeatureImplementations<ILocalizationServiceProvider>
              (pIVar6,&TStack_28,LocalizationServiceFeatureName);
    uVar8 = 0;
    while( true ) {
      if (((int)uVar8 < 0) || (TStack_28.ArrayNum <= (int)uVar8)) goto LAB_146b32752;
      uVar5 = 0;
      if ((int)uVar8 < TStack_28.ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pIVar1 = *(ILocalizationServiceProvider **)
                (TStack_28.AllocatorInstance.Data + (longlong)(int)uVar8 * 8);
      this_00 = (FName *)(**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
      pFVar7 = ::FName::ToString(this_00,&FStack_18);
      iVar4 = (pFVar7->Data).ArrayNum;
      if (iStack_30 == iVar4) {
        if (iStack_30 < 2) {
          bVar3 = true;
        }
        else {
          iVar4 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)FStack_38.Data,
                             (wchar_t *)(pFVar7->Data).AllocatorInstance.Data);
          bVar3 = iVar4 == 0;
        }
      }
      else {
        bVar3 = iStack_30 + iVar4 == 1;
      }
      if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
      }
      if (bVar3) break;
      uVar8 = uVar8 + 1;
    }
    this->CurrentLocalizationServiceProvider = pIVar1;
LAB_146b32752:
    if (this->CurrentLocalizationServiceProvider == (ILocalizationServiceProvider *)0x0) {
      this->CurrentLocalizationServiceProvider =
           (ILocalizationServiceProvider *)&this->DefaultLocalizationServiceProvider;
    }
    if (TStack_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(TStack_28.AllocatorInstance.Data);
    }
    if (FStack_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data);
    }
  }
  if (this->CurrentLocalizationServiceProvider == (ILocalizationServiceProvider *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentLocalizationServiceProvider",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\LocalizationService\\Private\\LocalizationServiceModule.cpp"
                       ,0x62,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146b327d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->CurrentLocalizationServiceProvider + 8))
            (this->CurrentLocalizationServiceProvider,0);
  return;
}

// HandleModularFeatureUnregistered @ 146b323b0

void __thiscall
FLocalizationServiceModule::HandleModularFeatureUnregistered
          (FLocalizationServiceModule *this,FName *param_1,IModularFeature *param_2)

{
  ILocalizationServiceProvider *pIVar1;
  ILocalizationServiceProvider *pIVar2;
  
  if (*param_1 == LocalizationServiceFeatureName) {
    pIVar1 = this->CurrentLocalizationServiceProvider;
    pIVar2 = (ILocalizationServiceProvider *)(param_2 + -8);
    if (param_2 == (IModularFeature *)0x0) {
      pIVar2 = (ILocalizationServiceProvider *)0x0;
    }
    if ((pIVar1 == pIVar2) && (pIVar1 != (ILocalizationServiceProvider *)0x0)) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
      this->CurrentLocalizationServiceProvider =
           (ILocalizationServiceProvider *)&this->DefaultLocalizationServiceProvider;
    }
  }
  return;
}

// InitializeLocalizationServiceProviders @ 146b325c0

void __thiscall
FLocalizationServiceModule::InitializeLocalizationServiceProviders(FLocalizationServiceModule *this)

{
  FScriptContainerElement *_Src;
  ILocalizationServiceProvider *pIVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  IModularFeatures *pIVar6;
  FName *this_00;
  FString *pFVar7;
  uint uVar8;
  longlong lVar9;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  TArray<ILocalizationServiceProvider_*,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  pIVar6 = IModularFeatures::Get();
  iVar4 = (**(code **)((longlong)*pIVar6 + 0x18))(pIVar6,LocalizationServiceFeatureName);
  if (0 < iVar4) {
    local_30 = (this->LocalizationServiceSettings).Provider.Data.ArrayNum;
    lVar9 = (longlong)local_30;
    _Src = (this->LocalizationServiceSettings).Provider.Data.AllocatorInstance.Data;
    local_38.Data = (FScriptContainerElement *)0x0;
    if (local_30 == 0) {
      local_2c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_30,0,&local_38,local_30,&local_2c);
      memcpy(local_38.Data,_Src,lVar9 * 2);
    }
    pIVar6 = IModularFeatures::Get();
    IModularFeatures::GetModularFeatureImplementations<ILocalizationServiceProvider>
              (pIVar6,&local_28,LocalizationServiceFeatureName);
    uVar8 = 0;
    while( true ) {
      if (((int)uVar8 < 0) || (local_28.ArrayNum <= (int)uVar8)) goto LAB_146b32752;
      uVar5 = 0;
      if ((int)uVar8 < local_28.ArrayNum) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      pIVar1 = *(ILocalizationServiceProvider **)
                (local_28.AllocatorInstance.Data + (longlong)(int)uVar8 * 8);
      this_00 = (FName *)(**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
      pFVar7 = ::FName::ToString(this_00,&local_18);
      iVar4 = (pFVar7->Data).ArrayNum;
      if (local_30 == iVar4) {
        if (local_30 < 2) {
          bVar3 = true;
        }
        else {
          iVar4 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)local_38.Data,
                             (wchar_t *)(pFVar7->Data).AllocatorInstance.Data);
          bVar3 = iVar4 == 0;
        }
      }
      else {
        bVar3 = local_30 + iVar4 == 1;
      }
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar3) break;
      uVar8 = uVar8 + 1;
    }
    this->CurrentLocalizationServiceProvider = pIVar1;
LAB_146b32752:
    if (this->CurrentLocalizationServiceProvider == (ILocalizationServiceProvider *)0x0) {
      this->CurrentLocalizationServiceProvider =
           (ILocalizationServiceProvider *)&this->DefaultLocalizationServiceProvider;
    }
    if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.AllocatorInstance.Data);
    }
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
  }
  if (this->CurrentLocalizationServiceProvider == (ILocalizationServiceProvider *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentLocalizationServiceProvider",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\LocalizationService\\Private\\LocalizationServiceModule.cpp"
                       ,0x62,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000146b327d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*this->CurrentLocalizationServiceProvider + 8))
            (this->CurrentLocalizationServiceProvider,0);
  return;
}

// IsEnabled @ 146b32870

bool __thiscall FLocalizationServiceModule::IsEnabled(FLocalizationServiceModule *this)

{
  undefined1 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)(**(code **)(this->_padding_ + 0x50))();
                    /* WARNING: Could not recover jumptable at 0x000146b32888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*plVar2 + 0x30))(plVar2,*(code **)(*plVar2 + 0x30));
  return (bool)uVar1;
}

// SaveSettings @ 146b330b0

void __thiscall FLocalizationServiceModule::SaveSettings(FLocalizationServiceModule *this)

{
  FString *pFVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  
  pFVar1 = LocalizationServiceHelpers::GetSettingsIni();
  pFVar2 = LocalizationServiceHelpers::GetGlobalSettingsIni();
  pwVar4 = L"";
  if ((this->LocalizationServiceSettings).Provider.Data.ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(this->LocalizationServiceSettings).Provider.Data.AllocatorInstance.Data;
  }
  pwVar3 = L"";
  if (LocalizationServiceSettingsConstants::SettingsSection.Data.ArrayNum != 0) {
    pwVar3 = (wchar_t *)LocalizationServiceSettingsConstants::SettingsSection.Data.AllocatorInstance
    ;
  }
  FConfigCacheIni::SetString(GConfig,pwVar3,L"Provider",pwVar5,pFVar1);
  if (LocalizationServiceSettingsConstants::SettingsSection.Data.ArrayNum != 0) {
    pwVar4 = (wchar_t *)LocalizationServiceSettingsConstants::SettingsSection.Data.AllocatorInstance
    ;
  }
  FConfigCacheIni::SetBool
            (GConfig,pwVar4,L"UseGlobalSettings",
             (this->LocalizationServiceSettings).bUseGlobalSettings,pFVar2);
  return;
}

// SetCurrentLocalizationServiceProvider @ 146b33220

void __thiscall
FLocalizationServiceModule::SetCurrentLocalizationServiceProvider
          (FLocalizationServiceModule *this,ILocalizationServiceProvider *param_1)

{
  ILocalizationServiceProvider *pIVar1;
  FName *this_00;
  FString *pFVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_18;
  
  pIVar1 = this->CurrentLocalizationServiceProvider;
  if (param_1 != pIVar1) {
    if (pIVar1 != (ILocalizationServiceProvider *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    this->CurrentLocalizationServiceProvider = param_1;
    (**(code **)((longlong)*param_1 + 8))(param_1,0);
    this_00 = (FName *)(**(code **)((longlong)*this->CurrentLocalizationServiceProvider + 0x18))();
    pFVar2 = ::FName::ToString(this_00,&local_18);
    ::FString::operator=(&(this->LocalizationServiceSettings).Provider,pFVar2);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    pFVar2 = LocalizationServiceHelpers::GetSettingsIni();
    pFVar3 = LocalizationServiceHelpers::GetGlobalSettingsIni();
    pwVar5 = L"";
    if ((this->LocalizationServiceSettings).Provider.Data.ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(this->LocalizationServiceSettings).Provider.Data.AllocatorInstance.Data;
    }
    pwVar4 = L"";
    if (LocalizationServiceSettingsConstants::SettingsSection.Data.ArrayNum != 0) {
      pwVar4 = (wchar_t *)
               LocalizationServiceSettingsConstants::SettingsSection.Data.AllocatorInstance;
    }
    FConfigCacheIni::SetString(GConfig,pwVar4,L"Provider",pwVar6,pFVar2);
    if (LocalizationServiceSettingsConstants::SettingsSection.Data.ArrayNum != 0) {
      pwVar5 = (wchar_t *)
               LocalizationServiceSettingsConstants::SettingsSection.Data.AllocatorInstance;
    }
    FConfigCacheIni::SetBool
              (GConfig,pwVar5,L"UseGlobalSettings",
               (this->LocalizationServiceSettings).bUseGlobalSettings,pFVar3);
  }
  return;
}

// SetCurrentLocalizationServiceProvider @ 146b33330

void __thiscall
FLocalizationServiceModule::SetCurrentLocalizationServiceProvider
          (FLocalizationServiceModule *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  IModularFeatures *this_00;
  TArray<ILocalizationServiceProvider_*,TSizedDefaultAllocator<32>_> local_18;
  
  this_00 = IModularFeatures::Get();
  IModularFeatures::GetModularFeatureImplementations<ILocalizationServiceProvider>
            (this_00,&local_18,LocalizationServiceFeatureName);
  if (((param_1 < 0) || (local_18.ArrayNum <= param_1)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Providers.IsValidIndex(ProviderIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\LocalizationService\\Private\\LocalizationServiceModule.cpp"
                         ,0xc2,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar3 = 0;
  if (param_1 < local_18.ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar3 == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  SetCurrentLocalizationServiceProvider
            (this,*(ILocalizationServiceProvider **)
                   (local_18.AllocatorInstance.Data + (longlong)param_1 * 8));
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// SetProvider @ 146b33410

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FLocalizationServiceModule::SetProvider(FLocalizationServiceModule *this,FName *param_1)

{
  ILocalizationServiceProvider *pIVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  IModularFeatures *this_00;
  FName *pFVar5;
  uint uVar6;
  TArray<ILocalizationServiceProvider_*,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  this_00 = IModularFeatures::Get();
  IModularFeatures::GetModularFeatureImplementations<ILocalizationServiceProvider>
            (this_00,&local_28,LocalizationServiceFeatureName);
  uVar6 = 0;
  do {
    if (((int)uVar6 < 0) || (local_28.ArrayNum <= (int)uVar6)) {
      ::FName::ToString(param_1,&local_18);
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogLocalizationService)
      ;
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
LAB_146b33514:
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      return;
    }
    uVar4 = 0;
    if ((int)uVar6 < local_28.ArrayNum) {
      uVar4 = ~uVar6 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pIVar1 = *(ILocalizationServiceProvider **)
              (local_28.AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
    pFVar5 = (FName *)(**(code **)((longlong)*pIVar1 + 0x18))(pIVar1);
    if (*param_1 == *pFVar5) {
      SetCurrentLocalizationServiceProvider(this,pIVar1);
      goto LAB_146b33514;
    }
    uVar6 = uVar6 + 1;
  } while( true );
}

// SetUseGlobalSettings @ 146b33560

void __thiscall
FLocalizationServiceModule::SetUseGlobalSettings(FLocalizationServiceModule *this,bool param_1)

{
  (this->LocalizationServiceSettings).bUseGlobalSettings = param_1;
  return;
}

// ShutdownModule @ 146b33580

void __thiscall FLocalizationServiceModule::ShutdownModule(FLocalizationServiceModule *this)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  FModuleManager *pFVar5;
  FName *pFVar6;
  IModuleInterface *pIVar7;
  IModularFeatures *pIVar8;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy> *pTVar9;
  FLocalizationServiceModule *pFVar10;
  FName local_res8;
  FName local_res10;
  
  plVar4 = (longlong *)(**(code **)(this->_padding_ + 0x50))();
  (**(code **)(*plVar4 + 0x10))(plVar4);
  pFVar5 = FModuleManager::Get();
  pFVar6 = ::FName::FName(&local_res8,"MessageLog");
  bVar3 = FModuleManager::IsModuleLoaded(pFVar5,*pFVar6);
  if (bVar3) {
    pFVar6 = ::FName::FName(&local_res10,"MessageLog");
    FVar1 = *pFVar6;
    pFVar5 = FModuleManager::Get();
    pIVar7 = FModuleManager::LoadModuleChecked(pFVar5,FVar1);
    pcVar2 = *(code **)((longlong)*pIVar7 + 0x48);
    ::FName::FName(&local_res8,"LocalizationService");
    (*pcVar2)(pIVar7,&local_res8);
  }
  pIVar8 = IModularFeatures::Get();
  pFVar10 = this + 1;
  if (this == (FLocalizationServiceModule *)0xffffffffffffffd8) {
    pFVar10 = (FLocalizationServiceModule *)0x0;
  }
  (**(code **)((longlong)*pIVar8 + 0x30))(pIVar8,LocalizationServiceFeatureName,pFVar10);
  pIVar8 = IModularFeatures::Get();
  pTVar9 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
           (**(code **)((longlong)*pIVar8 + 0x38))(pIVar8);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(pTVar9,this);
  pIVar8 = IModularFeatures::Get();
  pTVar9 = (TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
           (**(code **)((longlong)*pIVar8 + 0x40))(pIVar8);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll(pTVar9,this);
  return;
}

// StartupModule @ 146b33690

void __thiscall FLocalizationServiceModule::StartupModule(FLocalizationServiceModule *this)

{
  FName FVar1;
  code *pcVar2;
  IModularFeatures *pIVar3;
  TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
  *pTVar4;
  FName *pFVar5;
  FModuleManager *this_00;
  IModuleInterface *pIVar6;
  FText *pFVar7;
  FLocalizationServiceModule *pFVar8;
  FName local_res8;
  FName local_res10;
  undefined4 local_28;
  undefined4 local_24;
  undefined2 local_20;
  FText local_18;
  
  FLocalizationServiceSettings::LoadSettings(&this->LocalizationServiceSettings);
  pIVar3 = IModularFeatures::Get();
  pTVar4 = (TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
            *)(**(code **)((longlong)*pIVar3 + 0x38))(pIVar3);
  TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
  ::AddRaw<FLocalizationServiceModule>
            (pTVar4,(FLocalizationServiceModule *)&local_res8,(pmf_c52ae56d)this);
  pIVar3 = IModularFeatures::Get();
  pTVar4 = (TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
            *)(**(code **)((longlong)*pIVar3 + 0x40))(pIVar3);
  TMulticastDelegateRegistration<void___cdecl(FName_const_&,IModularFeature_*),FDefaultDelegateUserPolicy>
  ::AddRaw<FLocalizationServiceModule>
            (pTVar4,(FLocalizationServiceModule *)&local_res8,(pmf_c52ae56d)this);
  pIVar3 = IModularFeatures::Get();
  pFVar8 = this + 1;
  if (this == (FLocalizationServiceModule *)0xffffffffffffffd8) {
    pFVar8 = (FLocalizationServiceModule *)0x0;
  }
  (**(code **)((longlong)*pIVar3 + 0x28))(pIVar3,LocalizationServiceFeatureName,pFVar8);
  pFVar5 = ::FName::FName(&local_res10,"MessageLog");
  FVar1 = *pFVar5;
  this_00 = FModuleManager::Get();
  pIVar6 = FModuleManager::LoadModuleChecked(this_00,FVar1);
  local_28 = 0x10001;
  local_24 = 0x14;
  local_20 = 1;
  pcVar2 = *(code **)((longlong)*pIVar6 + 0x40);
  pFVar7 = FText::AsLocalizable_Advanced_LocText
                     (&local_18,L"LocalizationService",L"LocalizationServiceLogLabel",
                      L"Localization Service");
  ::FName::FName(&local_res8,"LocalizationService");
  (*pcVar2)(pIVar6,&local_res8,pFVar7,&local_28);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// Tick @ 146b337f0

void __thiscall FLocalizationServiceModule::Tick(FLocalizationServiceModule *this)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x50))();
  (**(code **)(*plVar1 + 0x80))(plVar1);
                    /* WARNING: Could not recover jumptable at 0x000146b3381d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,*(code **)(*plVar1 + 0x30));
  return;
}


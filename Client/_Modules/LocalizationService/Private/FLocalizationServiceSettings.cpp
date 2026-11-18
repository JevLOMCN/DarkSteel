// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LocalizationService
// Functions: 6

// GetProvider @ 146b31f00

FString * __thiscall FLocalizationServiceSettings::GetProvider(FLocalizationServiceSettings *this)

{
  return &this->Provider;
}

// GetUseGlobalSettings @ 146b322a0

bool __thiscall
FLocalizationServiceSettings::GetUseGlobalSettings(FLocalizationServiceSettings *this)

{
  return this->bUseGlobalSettings;
}

// LoadSettings @ 146b32940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FLocalizationServiceSettings::LoadSettings(FLocalizationServiceSettings *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  ForAnyElementType FVar8;
  uint uVar9;
  FScriptContainerElement *_Dst;
  wchar_t *pwVar10;
  longlong lVar11;
  undefined1 auStackY_138 [32];
  TArray<FString,TSizedDefaultAllocator<32>_> local_108;
  TArray<FString,TSizedDefaultAllocator<32>_> local_f8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_e8;
  FString local_d8;
  FString local_c8;
  TPairInitializer<FString_const_&,FString_&&> local_b8;
  FString *local_a8;
  FString local_a0;
  TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  pFVar6 = LocalizationServiceHelpers::GetGlobalSettingsIni();
  pwVar10 = L"";
  pwVar7 = L"";
  if (LocalizationServiceSettingsConstants::SettingsSection.Data.ArrayNum != 0) {
    pwVar7 = (wchar_t *)LocalizationServiceSettingsConstants::SettingsSection.Data.AllocatorInstance
    ;
  }
  FConfigCacheIni::GetBool(GConfig,pwVar7,L"UseGlobalSettings",&this->bUseGlobalSettings,pFVar6);
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  local_108.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.ArrayNum = 0;
  local_108.ArrayMax = 0;
  pwVar7 = FCommandLine::Get();
  FCommandLine::Parse(pwVar7,&local_e8,&local_108);
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  uVar9 = local_108.ArrayNum - 1;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  if (-1 < (int)uVar9) {
    lVar11 = (longlong)(int)uVar9 << 4;
    while( true ) {
      uVar3 = 0;
      if ((int)uVar9 < local_108.ArrayNum) {
        uVar3 = ~uVar9 >> 0x1f;
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
      local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.ArrayNum = 0;
      local_f8.ArrayMax = 0;
      iVar4 = ::FString::ParseIntoArray
                        ((FString *)(local_108.AllocatorInstance.Data + lVar11),&local_f8,L"=",true)
      ;
      if (iVar4 == 2) {
        if ((local_f8.ArrayNum < 2) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar6 = ::FString::TrimQuotes
                           ((FString *)(local_f8.AllocatorInstance.Data + 0x10),&local_a0,
                            (bool *)0x0);
        if ((local_f8.ArrayNum < 1) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_b8.Value = (FString *)local_f8.AllocatorInstance.Data;
        local_a8 = pFVar6;
        TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FString_const_&,FString_&&>_>
                  (&local_88,&local_b8,(bool *)&local_b8.Value);
        if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a0.Data.AllocatorInstance.Data);
        }
        uVar3 = 0;
        if ((int)uVar9 < local_108.ArrayNum) {
          uVar3 = ~uVar9 >> 0x1f;
        }
        if (uVar3 == 0) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        _Dst = local_108.AllocatorInstance.Data + lVar11;
        iVar4 = local_108.ArrayNum;
        if (*(void **)_Dst != (void *)0x0) {
          FMemory::Free(*(void **)_Dst);
          iVar4 = local_108.ArrayNum;
        }
        iVar5 = (iVar4 - uVar9) + -1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + 0x10,(longlong)iVar5 << 4);
          iVar4 = local_108.ArrayNum;
        }
        local_108.ArrayNum = iVar4 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&local_108.AllocatorInstance,iVar4 + -1,&local_108.ArrayMax);
      }
      DestructItems<FString,int>((FString *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
      if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.AllocatorInstance.Data);
      }
      lVar11 = lVar11 + -0x10;
      uVar9 = uVar9 - 1;
      if ((int)uVar9 < 0) break;
    }
  }
  lVar11 = 0;
  ::FString::FString(&local_d8,L"LocalizationServiceProvider");
  FVar8.Data = (FScriptContainerElement *)L"";
  if (local_d8.Data.ArrayNum != 0) {
    FVar8.Data = local_d8.Data.AllocatorInstance.Data;
  }
  iVar4 = local_d8.Data.ArrayNum + -1;
  if (local_d8.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar8.Data);
  iVar4 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FString>(&local_88,uVar9,&local_d8);
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (iVar4 == -1) {
    pFVar6 = LocalizationServiceHelpers::GetSettingsIni();
    if (LocalizationServiceSettingsConstants::SettingsSection.Data.ArrayNum != 0) {
      pwVar10 = (wchar_t *)
                LocalizationServiceSettingsConstants::SettingsSection.Data.AllocatorInstance;
    }
    FConfigCacheIni::GetString(GConfig,pwVar10,L"Provider",&this->Provider,pFVar6);
  }
  else {
    ::FString::FString(&local_c8,L"LocalizationServiceProvider");
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_c8.Data.ArrayNum != 0) {
      FVar8.Data = local_c8.Data.AllocatorInstance.Data;
    }
    iVar4 = local_c8.Data.ArrayNum + -1;
    if (local_c8.Data.ArrayNum == 0) {
      iVar4 = 0;
    }
    uVar9 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar4,(wchar_t *)FVar8.Data);
    iVar4 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FString>(&local_88,uVar9,&local_c8);
    if (((iVar4 == -1) || (lVar11 = local_88.Elements._0_8_ + (longlong)iVar4 * 0x28, lVar11 == 0))
       && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar4 = *(int *)(lVar11 + 0x18) + -1;
    if (*(int *)(lVar11 + 0x18) == 0) {
      iVar4 = 0;
    }
    ::FString::AssignRange(&this->Provider,*(wchar_t **)(lVar11 + 0x10),iVar4);
    if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c8.Data.AllocatorInstance.Data);
    }
  }
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  DestructItems<FString,int>((FString *)local_108.AllocatorInstance.Data,local_108.ArrayNum);
  if (local_108.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.AllocatorInstance.Data);
  }
  DestructItems<FString,int>((FString *)local_e8.AllocatorInstance.Data,local_e8.ArrayNum);
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  return;
}

// SaveSettings @ 146b33170

void __thiscall FLocalizationServiceSettings::SaveSettings(FLocalizationServiceSettings *this)

{
  FString *pFVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  
  pFVar1 = LocalizationServiceHelpers::GetSettingsIni();
  pFVar2 = LocalizationServiceHelpers::GetGlobalSettingsIni();
  pwVar4 = L"";
  if ((this->Provider).Data.ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(this->Provider).Data.AllocatorInstance.Data;
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
  FConfigCacheIni::SetBool(GConfig,pwVar4,L"UseGlobalSettings",this->bUseGlobalSettings,pFVar2);
  return;
}

// SetProvider @ 146b33550

void __thiscall
FLocalizationServiceSettings::SetProvider(FLocalizationServiceSettings *this,FString *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  if (this != (FLocalizationServiceSettings *)param_1) {
    iVar2 = (this->Provider).Data.ArrayMax;
    piVar1 = &(this->Provider).Data.ArrayMax;
    _Src = (param_1->Data).AllocatorInstance.Data;
    iVar3 = (param_1->Data).ArrayNum;
    (this->Provider).Data.ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
      return;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
    if (iVar3 != 0) {
      memcpy((this->Provider).Data.AllocatorInstance.Data,_Src,(longlong)iVar3 * 2);
    }
  }
  return;
}

// SetUseGlobalSettings @ 146b33570

void __thiscall
FLocalizationServiceSettings::SetUseGlobalSettings(FLocalizationServiceSettings *this,bool param_1)

{
  this->bUseGlobalSettings = param_1;
  return;
}


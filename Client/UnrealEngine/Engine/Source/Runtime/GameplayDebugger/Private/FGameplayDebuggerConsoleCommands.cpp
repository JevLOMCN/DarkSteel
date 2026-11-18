// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayDebugger
// Functions: 9

// EnableCategoryName @ 146d4afe0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FGameplayDebuggerConsoleCommands::EnableCategoryName
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  TObjectPtr<AGameplayDebuggerCategoryReplicator> *pTVar1;
  FScriptContainerElement *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  UGameplayDebuggerLocalController *pUVar9;
  wchar_t *pwVar10;
  AGameplayDebuggerCategoryReplicator *pAVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  FName local_res18 [2];
  FString local_38;
  
  pUVar9 = GetController(param_2);
  pTVar1 = &pUVar9->CachedReplicator;
  if ((pUVar9 == (UGameplayDebuggerLocalController *)0x0) ||
     ((pTVar1->field0_0x0).DebugPtr == (AGameplayDebuggerCategoryReplicator *)0x0)) {
    if ((1 < (byte)LogConsoleResponse._0_1_) &&
       ((pUVar9 != (UGameplayDebuggerLocalController *)0x0 &&
        ((pTVar1->field0_0x0).DebugPtr == (AGameplayDebuggerCategoryReplicator *)0x0)))) {
      UE::Logging::Private::BasicLog<2>
                (&`private:_static_void___cdecl_FGameplayDebuggerConsoleCommands::EnableCategoryName(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64,UWorld*___ptr64)'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
      return;
    }
  }
  else {
    iVar8 = param_1->ArrayNum;
    bVar15 = iVar8 == 1;
    if (iVar8 < 1) {
      if (1 < (byte)LogConsoleResponse._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&`private:_static_void___cdecl_FGameplayDebuggerConsoleCommands::EnableCategoryName(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64,UWorld*___ptr64)'
                    ::__l31::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
        return;
      }
    }
    else {
      if (1 < iVar8) {
        pFVar2 = (param_1->AllocatorInstance).Data;
        if (*(int *)(pFVar2 + 0x18) == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = *(wchar_t **)(pFVar2 + 0x10);
        }
        bVar15 = FToBoolHelper::FromCStringWide(pwVar10);
      }
      pAVar11 = (pTVar1->field0_0x0).DebugPtr;
      uVar13 = 0;
      uVar14 = uVar13;
      if (0 < (pAVar11->Categories).ArrayNum) {
        do {
          uVar12 = (uint)uVar13;
          uVar7 = 0;
          if ((int)uVar12 < (pAVar11->Categories).ArrayNum) {
            uVar7 = ~uVar12 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar2 = (pAVar11->Categories).AllocatorInstance.Data;
          pTVar3 = *(TReferenceControllerBase<1> **)(pFVar2 + uVar14 + 8);
          lVar4 = *(longlong *)(pFVar2 + uVar14);
          if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_res18[0] = *(FName *)(lVar4 + 0x48);
          ::FName::ToString(local_res18,&local_38);
          if ((param_1->ArrayNum < 1) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar2 = (param_1->AllocatorInstance).Data;
          iVar8 = *(int *)(pFVar2 + 8);
          if (iVar8 == 0) {
            pwVar10 = L"";
            uVar7 = 0;
          }
          else {
            pwVar10 = *(wchar_t **)pFVar2;
            uVar7 = iVar8 - 1;
          }
          iVar8 = ::FString::Find(&local_38,pwVar10,uVar7,IgnoreCase,FromStart,-1);
          if (iVar8 != -1) {
            AGameplayDebuggerCategoryReplicator::SetCategoryEnabled
                      ((pTVar1->field0_0x0).DebugPtr,uVar12,bVar15);
          }
          if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38.Data.AllocatorInstance.Data);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar3);
          pAVar11 = (pTVar1->field0_0x0).DebugPtr;
          uVar13 = (ulonglong)(uVar12 + 1);
          uVar14 = uVar14 + 0x10;
        } while ((int)(uVar12 + 1) < (pAVar11->Categories).ArrayNum);
      }
    }
  }
  return;
}

// EnableGameplayDebugger @ 146d4b220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FGameplayDebuggerConsoleCommands::EnableGameplayDebugger
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  UGameplayDebuggerLocalController *this;
  wchar_t *pwVar3;
  
  this = GetController(param_2);
  if (this != (UGameplayDebuggerLocalController *)0x0) {
    bVar2 = true;
    if (0 < param_1->ArrayNum) {
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (*(int *)(pFVar1 + 8) == 0) {
        pwVar3 = L"";
      }
      else {
        pwVar3 = *(wchar_t **)pFVar1;
      }
      bVar2 = FToBoolHelper::FromCStringWide(pwVar3);
    }
    if (this->bIsLocallyEnabled != bVar2) {
      UGameplayDebuggerLocalController::ToggleActivation(this,BestPawnCandidate);
    }
  }
  return;
}

// GetController @ 146d4c060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UGameplayDebuggerLocalController * __cdecl
FGameplayDebuggerConsoleCommands::GetController(UWorld *param_1)

{
  FName FVar1;
  APlayerController *pAVar2;
  FName *pFVar3;
  FModuleManager *this;
  FGameplayDebuggerModule *this_00;
  AGameplayDebuggerPlayerManager *this_01;
  FGameplayDebuggerPlayerData *pFVar4;
  UGameplayDebuggerLocalController *pUVar5;
  FName local_res10;
  
  if (!UGameplayDebuggerLocalController::bConsoleCommandsEnabled) {
    return (UGameplayDebuggerLocalController *)0x0;
  }
  pUVar5 = (UGameplayDebuggerLocalController *)0x0;
  pAVar2 = UEngine::GetFirstLocalPlayerController(GEngine,param_1);
  if (pAVar2 != (APlayerController *)0x0) {
    pFVar3 = ::FName::FName(&local_res10,"GameplayDebugger");
    FVar1 = *pFVar3;
    this = FModuleManager::Get();
    this_00 = (FGameplayDebuggerModule *)FModuleManager::LoadModuleChecked(this,FVar1);
    this_01 = FGameplayDebuggerModule::GetPlayerManager(this_00,param_1);
    pFVar4 = AGameplayDebuggerPlayerManager::GetPlayerData(this_01,pAVar2);
    if (((pFVar4 != (FGameplayDebuggerPlayerData *)0x0) &&
        (pUVar5 = (pFVar4->Controller).field0_0x0.DebugPtr,
        UE::GC::GIsIncrementalReachabilityPending != false)) &&
       (pUVar5 != (UGameplayDebuggerLocalController *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
  }
  if ((1 < (byte)LogConsoleResponse._0_1_) && (pUVar5 == (UGameplayDebuggerLocalController *)0x0)) {
    UE::Logging::Private::BasicLog<2>
              (&`private:_static_class_UGameplayDebuggerLocalController*___ptr64___cdecl_FGameplayDebuggerConsoleCommands::GetController(UWorld*___ptr64)'
                ::__l9::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
  }
  return pUVar5;
}

// SelectLocalPlayer @ 146d5acb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FGameplayDebuggerConsoleCommands::SelectLocalPlayer(UWorld *param_1)

{
  UGameplayDebuggerLocalController *this;
  
  this = GetController(param_1);
  if (this != (UGameplayDebuggerLocalController *)0x0) {
    UGameplayDebuggerLocalController::OnSelectLocalPlayer(this);
    return;
  }
  return;
}

// SelectNextRow @ 146d5ace0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FGameplayDebuggerConsoleCommands::SelectNextRow(UWorld *param_1)

{
  UGameplayDebuggerLocalController *pUVar1;
  int iVar2;
  
  pUVar1 = GetController(param_1);
  if (pUVar1 != (UGameplayDebuggerLocalController *)0x0) {
    iVar2 = pUVar1->NumCategorySlots + 9;
    if (0x13 < iVar2) {
      pUVar1->ActiveRowIdx = (pUVar1->ActiveRowIdx + 1) % (iVar2 / 10);
      return;
    }
    pUVar1->ActiveRowIdx = 0;
  }
  return;
}

// SelectPreviousRow @ 146d5ad50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FGameplayDebuggerConsoleCommands::SelectPreviousRow(UWorld *param_1)

{
  int iVar1;
  UGameplayDebuggerLocalController *pUVar2;
  
  pUVar2 = GetController(param_1);
  if (pUVar2 != (UGameplayDebuggerLocalController *)0x0) {
    iVar1 = (pUVar2->NumCategorySlots + 9) / 10;
    if (1 < iVar1) {
      pUVar2->ActiveRowIdx = (pUVar2->ActiveRowIdx + -1 + iVar1) % iVar1;
      return;
    }
    pUVar2->ActiveRowIdx = 0;
  }
  return;
}

// SetFontSize @ 146d5bce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FGameplayDebuggerConsoleCommands::SetFontSize
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  FScriptContainerElement *pFVar1;
  UObject *this;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  UGameplayDebuggerLocalController *pUVar5;
  UClass *this_00;
  int iVar6;
  wchar_t *_Str;
  ForAnyElementType FVar7;
  FString local_38;
  FString local_28;
  FString local_18;
  
  if (param_1->ArrayNum == 1) {
    bVar3 = ::FString::IsNumeric((FString *)(param_1->AllocatorInstance).Data);
    if (bVar3) {
      pUVar5 = GetController(param_2);
      if (pUVar5 != (UGameplayDebuggerLocalController *)0x0) {
        if (param_1->ArrayNum < 1) {
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
        pFVar1 = (param_1->AllocatorInstance).Data;
        if (*(int *)(pFVar1 + 8) == 0) {
          _Str = L"";
        }
        else {
          _Str = *(wchar_t **)pFVar1;
        }
        iVar4 = _wtoi(_Str);
        this_00 = UGameplayDebuggerUserSettings::StaticClass();
        if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(this_00);
        }
        this = (this_00->ClassDefaultObject).field0_0x0.DebugPtr;
        iVar6 = 100;
        if (iVar4 < 100) {
          iVar6 = iVar4;
        }
        iVar4 = 1;
        if (1 < iVar6) {
          iVar4 = iVar6;
        }
        *(int *)&this[3].field_0x20 = iVar4;
        UObject::GetProjectUserConfigFilename(this,&local_38);
        FVar7.Data = (FScriptContainerElement *)L"";
        if (local_38.Data.ArrayNum != 0) {
          FVar7.Data = local_38.Data.AllocatorInstance.Data;
        }
        ::FString::FString(&local_28,(wchar_t *)FVar7.Data);
        FConfigCacheIni::SetInt
                  (GConfig,L"/Script/GameplayDebugger.GameplayDebuggerUserSettings",L"FontSize",
                   *(int *)&this[3].field_0x20,&local_28);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        ::FString::FString(&local_18,L"");
        FConfigCacheIni::Flush(GConfig,false,&local_18);
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
        if ((pUVar5->HUDFont).field0_0x0.DebugPtr == (UFont *)0x0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("LocalController->HUDFont",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GameplayDebugger\\Private\\GameplayDebuggerLocalController.cpp"
                             ,0x4af,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        iVar4 = UGameplayDebuggerUserSettings::GetFontSize();
        ((pUVar5->HUDFont).field0_0x0.DebugPtr)->LegacyFontSize = iVar4;
      }
    }
    else if (1 < (byte)LogConsoleResponse._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`private:_static_void___cdecl_FGameplayDebuggerConsoleCommands::SetFontSize(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64,UWorld*___ptr64)'
                  ::__l27::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
      return;
    }
  }
  else if (1 < (byte)LogConsoleResponse._0_1_) {
    UE::Logging::Private::BasicLog<2>
              (&`private:_static_void___cdecl_FGameplayDebuggerConsoleCommands::SetFontSize(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64,UWorld*___ptr64)'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
    return;
  }
  return;
}

// ToggleCategory @ 146d5ca60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
FGameplayDebuggerConsoleCommands::ToggleCategory
          (TArray<FString,TSizedDefaultAllocator<32>_> *param_1,UWorld *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UGameplayDebuggerLocalController *this;
  int iVar6;
  wchar_t *_Str;
  int iVar7;
  
  this = GetController(param_2);
  if (this != (UGameplayDebuggerLocalController *)0x0) {
    if (param_1->ArrayNum == 1) {
      bVar4 = ::FString::IsNumeric((FString *)(param_1->AllocatorInstance).Data);
      if (bVar4) {
        if (param_1->ArrayNum < 1) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pFVar2 = (param_1->AllocatorInstance).Data;
        if (*(int *)(pFVar2 + 8) == 0) {
          _Str = L"";
        }
        else {
          _Str = *(wchar_t **)pFVar2;
        }
        iVar5 = _wtoi(_Str);
        iVar1 = (this->SlotCategoryIds).ArrayNum;
        iVar6 = (iVar1 + 9) / 10;
        if (this->ActiveRowIdx == iVar6 + -1) {
          iVar6 = iVar1 + iVar6 * -10 + 10;
        }
        else {
          iVar6 = 10;
        }
        if (iVar1 < iVar6) {
          iVar6 = iVar1;
        }
        iVar7 = iVar6 + -1;
        if (iVar6 + -1 < 0) {
          iVar7 = 0;
        }
        if (((-1 < iVar5) && (iVar5 < iVar1)) && (iVar5 <= iVar7)) {
          UGameplayDebuggerLocalController::ToggleSlotState(this,iVar5 + this->ActiveRowIdx * 10);
          return;
        }
        if (1 < (byte)LogConsoleResponse._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    (&`private:_static_void___cdecl_FGameplayDebuggerConsoleCommands::ToggleCategory(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64,UWorld*___ptr64)'
                      ::__l51::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
        }
      }
      else if (1 < (byte)LogConsoleResponse._0_1_) {
        UE::Logging::Private::BasicLog<2>
                  (&`private:_static_void___cdecl_FGameplayDebuggerConsoleCommands::ToggleCategory(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64,UWorld*___ptr64)'
                    ::__l30::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
        return;
      }
    }
    else if (1 < (byte)LogConsoleResponse._0_1_) {
      UE::Logging::Private::BasicLog<2>
                (&`private:_static_void___cdecl_FGameplayDebuggerConsoleCommands::ToggleCategory(TArray<FString,TSizedDefaultAllocator<32>_>_const&___ptr64,UWorld*___ptr64)'
                  ::__l9::LOG_Static,(FLogCategoryBase *)&LogConsoleResponse);
      return;
    }
  }
  return;
}

// ToggleGameplayDebugger @ 146d5cc70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl FGameplayDebuggerConsoleCommands::ToggleGameplayDebugger(UWorld *param_1)

{
  UGameplayDebuggerLocalController *this;
  
  this = GetController(param_1);
  if (this != (UGameplayDebuggerLocalController *)0x0) {
    UGameplayDebuggerLocalController::ToggleActivation(this,BestPawnCandidate);
    return;
  }
  return;
}


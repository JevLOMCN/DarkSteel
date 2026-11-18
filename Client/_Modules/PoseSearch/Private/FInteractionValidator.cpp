// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 3

// FInteractionValidator @ 14a918bc0

/* WARNING: Enum "Type": Some values do not have unique names */

FInteractionValidator * __thiscall
UE::PoseSearch::FInteractionValidator::FInteractionValidator
          (FInteractionValidator *this,FInteractionIsland *param_1)

{
  int iVar1;
  
  this->ValidatingAnimContext = (UObject *)0x0;
  this->ValidatingIsland = param_1;
  LOCK();
  iVar1 = (param_1->TickFunctionsThreadSafeCounter).Counter;
  (param_1->TickFunctionsThreadSafeCounter).Counter = -1;
  UNLOCK();
  if (iVar1 != 0) {
    if (1 < (byte)LogPoseSearch._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    }
    FInteractionIsland::LogTickDependencies(this->ValidatingIsland);
  }
  return this;
}

// FInteractionValidator @ 14a918c20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FInteractionValidator * __thiscall
UE::PoseSearch::FInteractionValidator::FInteractionValidator
          (FInteractionValidator *this,UObject *param_1)

{
  FThreadSafeCounter *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FInteractionIsland *pFVar4;
  code *pcVar5;
  FName FVar6;
  bool bVar7;
  FInteractionValidator *pFVar8;
  UWorld *this_00;
  UPoseSearchInteractionSubsystem *pUVar9;
  AActor *pAVar10;
  AActor *pAVar11;
  FScriptContainerElement *this_01;
  FName FVar12;
  undefined1 local_res8 [8];
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FString local_78;
  FString local_68;
  FString local_58;
  
  this->ValidatingAnimContext = param_1;
  this->ValidatingIsland = (FInteractionIsland *)0x0;
  if (param_1 == (UObject *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("AnimContext",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionValidator.cpp"
                       ,0x10,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FInteractionValidator *)(*pcVar5)();
      return pFVar8;
    }
  }
  else {
    this_00 = (UWorld *)(**(code **)(*(longlong *)param_1 + 0x180))(param_1);
    if (((this_00 != (UWorld *)0x0) &&
        (pUVar9 = UWorld::GetSubsystem<UPoseSearchInteractionSubsystem>(this_00),
        pUVar9 != (UPoseSearchInteractionSubsystem *)0x0)) &&
       (pUVar9 = UWorld::GetSubsystem<UPoseSearchInteractionSubsystem>(this_00),
       pUVar9 != (UPoseSearchInteractionSubsystem *)0x0)) {
      iVar3 = (pUVar9->Islands).ArrayNum;
      FVar12 = (FName)(pUVar9->Islands).AllocatorInstance.Data;
      local_res10 = (FName)((longlong)FVar12 + (longlong)iVar3 * 8);
      while( true ) {
        FVar6 = local_res10;
        if ((pUVar9->Islands).ArrayNum != iVar3) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<UE::PoseSearch::FInteractionIsland_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        if (FVar12 == FVar6) break;
        pFVar4 = *(FInteractionIsland **)FVar12;
        this_01 = (pFVar4->IslandAnimContexts).AllocatorInstance.Data;
        pFVar2 = this_01 + (longlong)(pFVar4->IslandAnimContexts).ArrayNum * 8;
        for (; this_01 != pFVar2; this_01 = this_01 + 8) {
          bVar7 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                            ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)this_01,param_1);
          if (bVar7) {
            this->ValidatingIsland = pFVar4;
            if (pFVar4 == (FInteractionIsland *)0x0) {
              return this;
            }
            pAVar10 = GetContextOwningActor(param_1,false);
            if ((pAVar10 == (AActor *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Actor",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionValidator.cpp"
                                   ,0x1e,L""), bVar7)) {
              pcVar5 = (code *)swi(3);
              pFVar8 = (FInteractionValidator *)(*pcVar5)();
              return pFVar8;
            }
            pAVar11 = FInteractionIsland::GetMainActor(this->ValidatingIsland);
            if (pAVar11 == (AActor *)0x0) {
              if (1 < (byte)LogPoseSearch._0_1_) {
                Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
              }
              FInteractionIsland::LogTickDependencies(this->ValidatingIsland);
              return this;
            }
            if (pAVar10 == pAVar11) {
              LOCK();
              pFVar1 = &this->ValidatingIsland->InteractionIslandThreadSafeCounter;
              iVar3 = pFVar1->Counter;
              pFVar1->Counter = -1;
              UNLOCK();
              if (iVar3 == 0) {
                return this;
              }
              if (1 < (byte)LogPoseSearch._0_1_) {
                local_res10 = (FName)pAVar11->_padding_;
                ::FName::ToString(&local_res10,&local_78);
                Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
                if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_78.Data.AllocatorInstance.Data);
                }
              }
              FInteractionIsland::LogTickDependencies(this->ValidatingIsland);
              return this;
            }
            LOCK();
            pFVar1 = &this->ValidatingIsland->InteractionIslandThreadSafeCounter;
            iVar3 = pFVar1->Counter;
            pFVar1->Counter = pFVar1->Counter + 1;
            UNLOCK();
            if (-1 < iVar3) {
              return this;
            }
            if (1 < (byte)LogPoseSearch._0_1_) {
              local_res18 = (FName)pAVar10->_padding_;
              ::FName::ToString(&local_res18,&local_58);
              local_res20 = (FName)pAVar11->_padding_;
              ::FName::ToString(&local_res20,&local_68);
              Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
              if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_68.Data.AllocatorInstance.Data);
              }
              if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_58.Data.AllocatorInstance.Data);
              }
            }
            FInteractionIsland::LogTickDependencies(this->ValidatingIsland);
            return this;
          }
        }
        FVar12 = (FName)((longlong)FVar12 + 8);
      }
      this->ValidatingIsland = (FInteractionIsland *)0x0;
    }
  }
  return this;
}

// ~FInteractionValidator @ 14a91aba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UE::PoseSearch::FInteractionValidator::~FInteractionValidator(FInteractionValidator *this)

{
  FThreadSafeCounter *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FNameEntryId FVar4;
  UObject *pUVar5;
  code *pcVar6;
  FName FVar7;
  bool bVar8;
  UWorld *this_00;
  UPoseSearchInteractionSubsystem *pUVar9;
  AActor *pAVar10;
  AActor *pAVar11;
  ulonglong uVar12;
  FScriptContainerElement *this_01;
  FInteractionIsland *this_02;
  FName FVar13;
  undefined1 local_res8 [8];
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FString local_78;
  FString local_68;
  FString local_58;
  
  if (this->ValidatingAnimContext == (UObject *)0x0) {
    if ((this->ValidatingIsland == (FInteractionIsland *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ValidatingIsland",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionValidator.cpp"
                           ,0x4d,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    LOCK();
    pFVar1 = &this->ValidatingIsland->TickFunctionsThreadSafeCounter;
    iVar3 = pFVar1->Counter;
    pFVar1->Counter = 0;
    UNLOCK();
    if ((iVar3 != -1) && (1 < (byte)LogPoseSearch._0_1_)) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
      return;
    }
  }
  else if ((((this->ValidatingIsland != (FInteractionIsland *)0x0) &&
            (this_00 = (UWorld *)(**(code **)(*(longlong *)this->ValidatingAnimContext + 0x180))(),
            this_00 != (UWorld *)0x0)) &&
           (pUVar9 = UWorld::GetSubsystem<UPoseSearchInteractionSubsystem>(this_00),
           pUVar9 != (UPoseSearchInteractionSubsystem *)0x0)) &&
          (pUVar9 = UWorld::GetSubsystem<UPoseSearchInteractionSubsystem>(this_00),
          pUVar9 != (UPoseSearchInteractionSubsystem *)0x0)) {
    pUVar5 = this->ValidatingAnimContext;
    this_02 = (FInteractionIsland *)0x0;
    if (pUVar5 != (UObject *)0x0) {
      FVar4.Value = (pUVar9->Islands).ArrayNum;
      uVar12 = (ulonglong)(int)FVar4.Value;
      FVar13 = (FName)(pUVar9->Islands).AllocatorInstance.Data;
      local_res10.ComparisonIndex.Value = FVar4.Value;
      local_res18 = (FName)((longlong)FVar13 + uVar12 * 8);
      while( true ) {
        FVar7 = local_res18;
        if ((pUVar9->Islands).ArrayNum != (int)uVar12) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<UE::PoseSearch::FInteractionIsland_*,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res8);
        }
        this_02 = (FInteractionIsland *)0x0;
        if (FVar13 == FVar7) break;
        this_02 = *(FInteractionIsland **)FVar13;
        this_01 = (this_02->IslandAnimContexts).AllocatorInstance.Data;
        pFVar2 = this_01 + (longlong)(this_02->IslandAnimContexts).ArrayNum * 8;
        for (; this_01 != pFVar2; this_01 = this_01 + 8) {
          bVar8 = TWeakObjectPtr<UObject_const_,FWeakObjectPtr>::UEOpEquals<UObject,bool>
                            ((TWeakObjectPtr<UObject_const_,FWeakObjectPtr> *)this_01,pUVar5);
          if (bVar8) goto LAB_14a91ad30;
        }
        uVar12 = (ulonglong)local_res10 & 0xffffffff;
        FVar13 = (FName)((longlong)FVar13 + 8);
      }
    }
LAB_14a91ad30:
    if (this_02 == this->ValidatingIsland) {
      pAVar10 = GetContextOwningActor(this->ValidatingAnimContext,false);
      if ((pAVar10 == (AActor *)0x0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Actor",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\PoseSearchInteractionValidator.cpp"
                             ,0x69,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pAVar11 = FInteractionIsland::GetMainActor(this_02);
      if (pAVar11 == (AActor *)0x0) {
        if (1 < (byte)LogPoseSearch._0_1_) {
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
        }
      }
      else {
        if (pAVar10 == pAVar11) {
          LOCK();
          iVar3 = (this_02->InteractionIslandThreadSafeCounter).Counter;
          (this_02->InteractionIslandThreadSafeCounter).Counter = 0;
          UNLOCK();
          if (iVar3 < 0) {
            return;
          }
          if ((byte)LogPoseSearch._0_1_ < 2) {
            return;
          }
          local_res10 = (FName)pAVar11->_padding_;
          ::FName::ToString(&local_res10,&local_78);
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
        }
        else {
          LOCK();
          pFVar1 = &this_02->InteractionIslandThreadSafeCounter;
          iVar3 = pFVar1->Counter;
          pFVar1->Counter = pFVar1->Counter + -1;
          UNLOCK();
          if (0 < iVar3) {
            return;
          }
          if ((byte)LogPoseSearch._0_1_ < 2) {
            return;
          }
          local_res18 = (FName)pAVar10->_padding_;
          ::FName::ToString(&local_res18,&local_58);
          local_res20 = (FName)pAVar11->_padding_;
          ::FName::ToString(&local_res20,&local_68);
          Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
          local_78.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
          if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_68.Data.AllocatorInstance.Data);
            local_78.Data.AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
          }
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
      }
    }
    else if (1 < (byte)LogPoseSearch._0_1_) {
      Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogPoseSearch);
    }
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// StaticClass @ 14b4bbe30

UClass * __cdecl UDS_InteractionAbility_StuffQuestBoard::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbility_StuffQuestBoard.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbility_StuffQuestBoard",
               &Z_Registration_Info_UClass_UDS_InteractionAbility_StuffQuestBoard.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbility_StuffQuestBoard,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbility_StuffQuestBoard>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbility_StuffQuestBoard>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbility_StuffQuestBoard.InnerSingleton;
}

// UDS_InteractionAbility_StuffQuestBoard @ 14b4c1c10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_InteractionAbility_StuffQuestBoard * __thiscall
UDS_InteractionAbility_StuffQuestBoard::UDS_InteractionAbility_StuffQuestBoard
          (UDS_InteractionAbility_StuffQuestBoard *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->InteractionAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->InteractionAbilityData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UDS_InteractionAbility_StuffQuestBoard @ 14b4c1c60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

UDS_InteractionAbility_StuffQuestBoard * __thiscall
UDS_InteractionAbility_StuffQuestBoard::UDS_InteractionAbility_StuffQuestBoard
          (UDS_InteractionAbility_StuffQuestBoard *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->InteractionAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->InteractionAbilityData).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UDS_InteractionAbility_StuffQuestBoard @ 14b4c2550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_StuffQuestBoard::~UDS_InteractionAbility_StuffQuestBoard
          (UDS_InteractionAbility_StuffQuestBoard *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetDefaultInputPolicy @ 14b4c3af0

EDS_AbilityInputPolicy __thiscall
UDS_InteractionAbility_StuffQuestBoard::GetDefaultInputPolicy
          (UDS_InteractionAbility_StuffQuestBoard *this)

{
  return BlockInput;
}

// GetPrivateStaticClass @ 14b4c50e0

UClass * __cdecl UDS_InteractionAbility_StuffQuestBoard::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbility_StuffQuestBoard.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbility_StuffQuestBoard",
               &Z_Registration_Info_UClass_UDS_InteractionAbility_StuffQuestBoard.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbility_StuffQuestBoard,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbility_StuffQuestBoard>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbility_StuffQuestBoard>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbility_StuffQuestBoard.InnerSingleton;
}

// ShouldNotifyChangedCharState @ 14b4c5490

bool __thiscall
UDS_InteractionAbility_StuffQuestBoard::ShouldNotifyChangedCharState
          (UDS_InteractionAbility_StuffQuestBoard *this)

{
  return true;
}

// StaticRegisterNativesUDS_InteractionAbility_StuffQuestBoard @ 14b4c5710

void __cdecl
UDS_InteractionAbility_StuffQuestBoard::StaticRegisterNativesUDS_InteractionAbility_StuffQuestBoard
          (void)

{
  return;
}

// InitInteractionAbilityData_StuffQuestBoard @ 14b7efce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __cdecl
UDS_InteractionAbility_StuffQuestBoard::InitInteractionAbilityData_StuffQuestBoard
          (TWeakObjectPtr<UDS_InteractionAbilityData_StuffQuestBoard,FWeakObjectPtr> *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  FDS_EntityBase *pFVar5;
  FDS_StuffBaseTableRow *pFVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  undefined1 auStackY_1a8 [32];
  uint uVar11;
  wchar_t *pwVar12;
  undefined1 local_168 [8];
  TArray<FDS_QuestDailySuggestTableRow_const_*,TSizedDefaultAllocator<32>_> local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffQuestBoard,FWeakObjectPtr>::UEOpEquals
                    (param_1,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,
               "UDS_InteractionAbility_StuffQuestBoard::InitInteractionAbilityData_StuffQuestBoard",
               0x52,Yes);
    UDS_LogManager::PrintLog
              (pUVar3,1,Warning,local_148.Ptr,0xaf,L"OutInteractionAbilityData is nullptr.");
  }
  else {
    pUVar4 = FWeakObjectPtr::Get(&param_1->WeakPtr);
    pFVar5 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar4[2].field_0x8);
    if (pFVar5 == (FDS_EntityBase *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar3 = UDS_LogManager::GetInst();
      FWeakObjectPtr::Get(&param_1->WeakPtr);
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,
                 "UDS_InteractionAbility_StuffQuestBoard::InitInteractionAbilityData_StuffQuestBoard"
                 ,0x52,Yes);
      pwVar12 = L"targetEntity is nullptr. (%llu)";
      uVar11 = 0xb6;
    }
    else {
      pFVar6 = FDS_StuffBaseTableRow::Get(pFVar5->TableID,true);
      if (pFVar6 != (FDS_StuffBaseTableRow *)0x0) {
        lVar9 = 0;
        FDS_QuestDailySuggestTableRow::GetAll(&local_160);
        iVar7 = local_160.ArrayNum;
        pFVar1 = local_160.AllocatorInstance.Data + (longlong)iVar7 * 8;
        uVar8 = local_160._8_8_;
        FVar10.Data = local_160.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar8 != iVar7) {
            `TCheckedPointerIterator<FDS_QuestDailySuggestTableRow_const_*,int,0>::operator!='::__l2
            ::<lambda_1>::operator()(local_168);
            uVar8 = local_160._8_8_;
          }
          if (FVar10.Data == pFVar1) break;
          if (*(int *)(*(longlong *)FVar10.Data + 0x24) == pFVar6->ID) {
            lVar9 = *(longlong *)FVar10.Data;
          }
          FVar10.Data = FVar10.Data + 8;
        }
        if (lVar9 == 0) {
          pUVar3 = UDS_LogManager::GetInst();
          if (pUVar3 != (UDS_LogManager *)0x0) {
            pUVar3 = UDS_LogManager::GetInst();
            local_148._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_148,
                       "UDS_InteractionAbility_StuffQuestBoard::InitInteractionAbilityData_StuffQuestBoard"
                       ,0x52,Yes);
            UDS_LogManager::PrintLog
                      (pUVar3,1,Warning,local_148.Ptr,0xce,
                       L"questDailySuggestTable is nullptr. (%llu)");
            if ((void *)local_148._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_148._padding_);
            }
          }
          bVar2 = false;
        }
        else {
          pUVar4 = FWeakObjectPtr::Get(&param_1->WeakPtr);
          bVar2 = true;
          *(undefined4 *)&pUVar4[2].field_0x18 = *(undefined4 *)(lVar9 + 8);
        }
        if (local_160.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_160.AllocatorInstance.Data);
          return bVar2;
        }
        return bVar2;
      }
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = (longlong)pFVar6;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,
                 "UDS_InteractionAbility_StuffQuestBoard::InitInteractionAbilityData_StuffQuestBoard"
                 ,0x52,Yes);
      pwVar12 = L"stuffBaseTable is nullptr. (%llu)";
      uVar11 = 0xbd;
    }
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,uVar11,pwVar12);
  }
  if ((FDS_StuffBaseTableRow *)local_148._padding_ != (FDS_StuffBaseTableRow *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return false;
}

// OnAbilityRetryActivate @ 14b7f48f0

void __thiscall
UDS_InteractionAbility_StuffQuestBoard::OnAbilityRetryActivate
          (UDS_InteractionAbility_StuffQuestBoard *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<2578767380347879537>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_InteractionAbility_StuffQuestBoard.cpp"
                     ,0x71,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnCanActivate @ 14b7f7240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_InteractionAbility_StuffQuestBoard::OnCanActivate(UDS_InteractionAbility_StuffQuestBoard *this)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_StuffQuestBoard,FWeakObjectPtr> *this_00;
  int iVar1;
  bool bVar2;
  TWeakObjectPtr<UDS_InteractionAbilityData_StuffQuestBoard,FWeakObjectPtr> TVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  undefined1 auStackY_178 [32];
  ulong64 local_144;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar2 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar2) {
    this_00 = &this->InteractionAbilityData;
    bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffQuestBoard,FWeakObjectPtr>::UEOpEquals
                      (this_00,(void *)0x0);
    if (bVar2) {
      TVar3 = UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_StuffQuestBoard>
                        (&local_144,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      this_00->WeakPtr = *TVar3.WeakPtr;
    }
    bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffQuestBoard,FWeakObjectPtr>::UEOpEquals
                      (this_00,(void *)0x0);
    if (bVar2) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_InteractionAbility_StuffQuestBoard::OnCanActivate",0x35,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_138.Ptr,0x2f,L"InteractionAbilityData is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      iVar1 = *(int *)&pUVar5[2].field_0x10;
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      bVar2 = DS_AbilityUtil_Interaction::IsAbleInteraction_SourceEntity
                        ((ulong64 *)&this->_padding_,(ulong64 *)&pUVar5[2].field_0x8,iVar1,true);
      if (bVar2) {
        pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        iVar1 = *(int *)&pUVar5[2].field_0x10;
        pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        bVar2 = DS_AbilityUtil_Interaction::IsAbleInteraction_TargetEntity
                          ((ulong64 *)&pUVar5[2].field_0x8,iVar1,0);
        if (bVar2) {
          bVar2 = InitInteractionAbilityData_StuffQuestBoard(this_00);
          return bVar2;
        }
      }
    }
  }
  return false;
}

// OnChangedCharState @ 14b7f9900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_StuffQuestBoard::OnChangedCharState
          (UDS_InteractionAbility_StuffQuestBoard *this,
          TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,FDS_ChangedCharStateInfo *param_2
          )

{
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_AbilitySystemComponent *pUVar4;
  UObject *pUVar5;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_1a8 [32];
  EDS_AbilityDeactivateType local_178 [16];
  FDS_ChangedCharStateInfo local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_168.StateTag.TagName = (param_2->StateTag).TagName;
  local_168.bIsStateTagOn = param_2->bIsStateTagOn;
  local_168._9_7_ = *(undefined7 *)&param_2->field_0x9;
  local_168.AddedCharState = param_2->AddedCharState;
  local_168.RemovedCharState = param_2->RemovedCharState;
  local_168.AddedCharDetailState = param_2->AddedCharDetailState;
  local_168.RemovedCharDetailState = param_2->RemovedCharDetailState;
  local_res10 = param_1.WeakPtr;
  UDS_GameplayAbility::OnChangedCharState((UDS_GameplayAbility *)this,param_1,&local_168);
  bVar2 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_StuffQuestBoard::OnChangedCharState",0x3a,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x7a,L"InCharStateData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    local_178[0] = Cancel;
    pUVar4 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (pUVar4,(FGameplayTag *)&this->_padding_,local_178);
  }
  else {
    bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffQuestBoard,FWeakObjectPtr>::UEOpEquals
                      (&this->InteractionAbilityData,(void *)0x0);
    if (bVar2) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_InteractionAbility_StuffQuestBoard::OnChangedCharState",0x3a,Yes)
        ;
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_138.Ptr,0x81,L"InteractionAbilityData is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      pUVar5 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
      iVar1 = *(int *)&pUVar5[2].field_0x10;
      pUVar5 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
      bVar2 = DS_AbilityUtil_Interaction::IsAbleInteraction_SourceEntity
                        ((ulong64 *)&this->_padding_,(ulong64 *)&pUVar5[2].field_0x8,iVar1,true);
      if (bVar2) {
        return;
      }
    }
    local_178[0] = Cancel;
    pUVar4 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (pUVar4,(FGameplayTag *)&this->_padding_,local_178);
  }
  return;
}

// OnDeactivateAbility @ 14b7fcc20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_StuffQuestBoard::OnDeactivateAbility
          (UDS_InteractionAbility_StuffQuestBoard *this,bool *param_1)

{
  bool bVar1;
  FGameplayTag *pFVar2;
  UObject *pUVar3;
  EDS_StateTagType local_res8 [32];
  
  local_res8[0] = Interaction_StuffQuestBoard;
  pFVar2 = FDS_GameplayTags::GetStateTag(local_res8);
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar2);
  bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffQuestBoard,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (!bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
                    /* WARNING: Could not recover jumptable at 0x00014b7fcc73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar3 + 0x2c8))(pUVar3,*(code **)(*(longlong *)pUVar3 + 0x2c8));
    return;
  }
  return;
}

// OnOpenQuestDailyWindow @ 14b8008e0

void __thiscall
UDS_InteractionAbility_StuffQuestBoard::OnOpenQuestDailyWindow
          (UDS_InteractionAbility_StuffQuestBoard *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  FDS_ViewModelContext *pFVar3;
  UScriptStruct *pUVar4;
  UDS_ViewModelContextManager *this_00;
  UObject *pUVar5;
  UDS_AbilitySystemComponent *pUVar6;
  FDS_ViewModelContext *pFVar7;
  FDS_ViewModelContext *pFVar8;
  EDS_AbilityDeactivateType local_res10 [8];
  EDS_AbilityDeactivateType local_res18 [8];
  FWeakObjectPtr local_res20;
  UDS_UserWidget *local_58;
  TSharedPtr<FDS_ViewModelContext,1> local_50;
  TSharedPtr<FDS_ViewModelContext,1> local_40;
  
  if ((param_1 == (UDS_UserWidget *)0x0) ||
     (bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffQuestBoard,FWeakObjectPtr>::UEOpEquals
                        (&this->InteractionAbilityData,(void *)0x0), bVar2)) {
    local_res18[0] = Cancel;
    pUVar6 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (pUVar6,(FGameplayTag *)&this->_padding_,local_res18);
    return;
  }
  pFVar3 = ::operator_new(0x28);
  pFVar8 = (FDS_ViewModelContext *)0x0;
  pFVar7 = pFVar8;
  if (pFVar3 != (FDS_ViewModelContext *)0x0) {
    *(undefined8 *)&pFVar3->ViewModelTemplateKey = 0;
    *(undefined4 *)((longlong)&pFVar3[1]._padding_ + 4) = 0;
    *(undefined8 *)&pFVar3->DerivedStaticStruct = 0;
    (pFVar3->ViewModelName).ComparisonIndex = 0;
    (pFVar3->ViewModelName).Number = 0;
    pFVar3->_padding_ = (longlong)&___7FDS_ViewModelContext_DailyQuestPopupOpen__6B_;
    *(undefined4 *)&pFVar3[1]._padding_ = 0;
    pFVar7 = pFVar3;
  }
  pFVar3 = ::operator_new(0x20);
  if (pFVar3 != (FDS_ViewModelContext *)0x0) {
    *(atomic<int> *)&pFVar3->DerivedStaticStruct = (atomic<int>)0x1;
    *(code **)&(pFVar3->ViewModelName).ComparisonIndex = ViewModelContextDeleter;
    pFVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_DailyQuestPopupOpen__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
    ;
    ((atomic<int> *)&pFVar3->DerivedStaticStruct)[1] = (atomic<int>)0x1;
    *(FDS_ViewModelContext **)&pFVar3->ViewModelTemplateKey = pFVar7;
    pFVar8 = pFVar3;
  }
  if ((pFVar7 == (FDS_ViewModelContext *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pUVar4 = FDS_ViewModelContext_DailyQuestPopupOpen::StaticStruct();
  *(UScriptStruct **)&pFVar7->DerivedStaticStruct = pUVar4;
  this_00 = UDS_ViewModelContextManager::GetInst();
  if (this_00 != (UDS_ViewModelContextManager *)0x0) {
    if (pFVar8 != (FDS_ViewModelContext *)0x0) {
      LOCK();
      *(atomic<int> *)&pFVar8->DerivedStaticStruct =
           (atomic<int>)((int)*(atomic<int> *)&pFVar8->DerivedStaticStruct + 1);
      UNLOCK();
    }
    local_50.Object = pFVar7;
    local_50.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
    UDS_ViewModelContextManager::RegisterContext(this_00,&local_50);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.SharedReferenceCount.ReferenceController);
  }
  pFVar7->ViewModelTemplateKey = W_B_DaliyQuest;
  pUVar5 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
  *(undefined4 *)&pFVar7[1]._padding_ = *(undefined4 *)&pUVar5[2].field_0x18;
  if (pFVar8 != (FDS_ViewModelContext *)0x0) {
    LOCK();
    *(atomic<int> *)&pFVar8->DerivedStaticStruct =
         (atomic<int>)((int)*(atomic<int> *)&pFVar8->DerivedStaticStruct + 1);
    UNLOCK();
  }
  local_40.Object = pFVar7;
  local_40.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pFVar8;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_58 = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_58);
  DS_ViewModelTemplateUtil::BindViewModel
            ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res20,&local_40,false);
  local_res10[0] = Success;
  pUVar6 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (pUVar6,(FGameplayTag *)&this->_padding_,local_res10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar8);
  return;
}

// OnPostActivateAbility @ 14b805e80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_StuffQuestBoard::OnPostActivateAbility
          (UDS_InteractionAbility_StuffQuestBoard *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_AbilitySystemComponent *this_00;
  FGameplayTag *pFVar3;
  undefined1 auStackY_178 [32];
  EDS_AbilityDeactivateType local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffQuestBoard,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_StuffQuestBoard::OnPostActivateAbility",0x3d,Yes
                );
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x4e,L"InteractionAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    bVar1 = OpenQuestBoardUI(this);
    if (bVar1) {
      local_148[0] = 0x4f;
      pFVar3 = FDS_GameplayTags::GetStateTag(local_148);
      UDS_GameplayAbility::AddTagToASC((UDS_GameplayAbility *)this,pFVar3);
      return;
    }
  }
  local_148[0] = Cancel;
  this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (this_00,(FGameplayTag *)&this->_padding_,local_148);
  return;
}

// OnQuestDailySuggestPopup_CancelConfirm @ 14b808100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_StuffQuestBoard::OnQuestDailySuggestPopup_CancelConfirm
          (UDS_InteractionAbility_StuffQuestBoard *this,
          TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar1;
  UDS_AbilitySystemComponent *this_01;
  undefined1 auStackY_178 [32];
  EDS_AbilityDeactivateType local_148 [4];
  float local_144;
  uint local_140 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,
                 "UDS_InteractionAbility_StuffQuestBoard::OnQuestDailySuggestPopup_CancelConfirm",
                 0x4e,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x1b8,L"windowMng is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    local_148[0] = Cancel;
  }
  else {
    local_144 = 0.0;
    local_140[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,PopupCommon,local_140,&local_144);
    local_148[0] = Success;
  }
  this_01 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (this_01,(FGameplayTag *)&this->_padding_,local_148);
  return;
}

// OnQuestDailySuggestPopup_ClickConfirm @ 14b808230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_StuffQuestBoard::OnQuestDailySuggestPopup_ClickConfirm
          (UDS_InteractionAbility_StuffQuestBoard *this,
          TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_StuffQuestBoard,FWeakObjectPtr> *this_00;
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_AbilitySystemComponent *pUVar3;
  UObject *pUVar4;
  FDS_EntityBase *pFVar5;
  UDS_DailyQuestManager *pUVar6;
  UDS_WindowManager *this_01;
  undefined1 auStackY_188 [32];
  EDS_AbilityDeactivateType local_148 [4];
  float local_144;
  uint local_140 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this_00 = &this->InteractionAbilityData;
  bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffQuestBoard,FWeakObjectPtr>::UEOpEquals
                    (this_00,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,
                 "UDS_InteractionAbility_StuffQuestBoard::OnQuestDailySuggestPopup_ClickConfirm",
                 0x4d,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x18d,L"InteractionAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    local_148[0] = Cancel;
    pUVar3 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (pUVar3,(FGameplayTag *)&this->_padding_,local_148);
    return;
  }
  pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  pFVar5 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar4[2].field_0x8);
  if (pFVar5 == (FDS_EntityBase *)0x0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    FWeakObjectPtr::Get(&this_00->WeakPtr);
    local_138._padding_ = (longlong)pFVar5;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,
               "UDS_InteractionAbility_StuffQuestBoard::OnQuestDailySuggestPopup_ClickConfirm",0x4d,
               Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Warning,local_138.Ptr,0x195,L"targetEntity is nullptr. (%llu)");
  }
  else {
    pUVar6 = UDS_DailyQuestManager::GetInst();
    if (pUVar6 != (UDS_DailyQuestManager *)0x0) {
      pUVar6->TargetStuffBaseTableID = pFVar5->TableID;
      pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      FDS_DailyQuestService::SendDailyQuestPool(*(int *)&pUVar4[2].field_0x18);
      this_01 = UDS_WindowManager::GetInst();
      if (this_01 == (UDS_WindowManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 != (UDS_LogManager *)0x0) {
          pUVar2 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,
                     "UDS_InteractionAbility_StuffQuestBoard::OnQuestDailySuggestPopup_ClickConfirm"
                     ,0x4d,Yes);
          UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x1a8,L"windowMng is nullptr.");
          if ((void *)local_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
        local_148[0] = Cancel;
      }
      else {
        local_144 = 0.0;
        local_140[0] = 0;
        UDS_WindowManager::CloseWindow(this_01,PopupCommon,local_140,&local_144);
        local_148[0] = Success;
      }
      pUVar3 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_)
      ;
      UDS_AbilitySystemComponent::DeactivateAbilityByTag
                (pUVar3,(FGameplayTag *)&this->_padding_,local_148);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,
               "UDS_InteractionAbility_StuffQuestBoard::OnQuestDailySuggestPopup_ClickConfirm",0x4d,
               Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x19c,L"dailyQuestMng is nullptr.");
  }
  if ((FDS_EntityBase *)local_138._padding_ != (FDS_EntityBase *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OpenQuestBoardUI @ 14b80bfb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_InteractionAbility_StuffQuestBoard::OpenQuestBoardUI
          (UDS_InteractionAbility_StuffQuestBoard *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  FDS_QuestDailySuggestTableRow *pFVar6;
  UObject *pUVar7;
  UDS_ZoneManager *pUVar8;
  FDS_ZoneBaseTableRow *this_00;
  FDS_StringWorldTableRow *pFVar9;
  FString *pFVar10;
  UDS_DailyQuestManager *this_01;
  undefined1 auStackY_ae8 [32];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_aa8;
  FWeakObjectPtr local_a98 [2];
  FStringFormatArg local_a88;
  FStringFormatArg local_a68;
  FString local_a48;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_a38;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_918;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_7f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_6d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_498;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_378;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_ae8;
  bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffQuestBoard,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar2) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_a38._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_a38,"UDS_InteractionAbility_StuffQuestBoard::OpenQuestBoardUI",0x38,Yes);
    UDS_LogManager::PrintLog
              (pUVar4,1,Warning,local_a38.Ptr,0xdb,L"InteractionAbilityData is nullptr.");
    local_a88.StringValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)local_a38._padding_;
  }
  else {
    pUVar5 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    if (*(int *)&pUVar5[2].field_0x18 < 1) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_918._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_918,"UDS_InteractionAbility_StuffQuestBoard::OpenQuestBoardUI",0x38,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_918.Ptr,0xe2,L"questDailySuggestTableID is invalid. (%d)");
      local_a88.StringValue.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)local_918._padding_;
    }
    else {
      pFVar6 = FDS_QuestDailySuggestTableRow::Get((longlong)*(int *)&pUVar5[2].field_0x18,true);
      if (pFVar6 == (FDS_QuestDailySuggestTableRow *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar4 = UDS_LogManager::GetInst();
        local_7f8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_7f8,"UDS_InteractionAbility_StuffQuestBoard::OpenQuestBoardUI",0x38,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_7f8.Ptr,0xe9,L"questDailySuggestTableRow is nullptr");
        local_a88.StringValue.Data.AllocatorInstance.Data =
             (FScriptContainerElement *)local_7f8._padding_;
      }
      else {
        UDS_PlayerData::GetMainPlayerData();
        bVar2 = FWeakObjectPtr::IsValid(local_a98);
        if (bVar2) {
          pUVar7 = FWeakObjectPtr::Get(local_a98);
          if (*(int *)&pUVar7[6].field_0x10 < pFVar6->AscenderLevel) {
            pUVar8 = UDS_ZoneManager::GetInst();
            if (pUVar8 == (UDS_ZoneManager *)0x0) {
              pUVar4 = UDS_LogManager::GetInst();
              if (pUVar4 == (UDS_LogManager *)0x0) {
                return false;
              }
              pUVar4 = UDS_LogManager::GetInst();
              local_5b8._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_5b8,"UDS_InteractionAbility_StuffQuestBoard::OpenQuestBoardUI",0x38,
                         Yes);
              UDS_LogManager::PrintLog(pUVar4,1,Warning,local_5b8.Ptr,0xf9,L"zoneManager nullptr");
              local_a88.StringValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)local_5b8._padding_;
            }
            else {
              this_00 = FDS_ZoneBaseTableRow::Get((ulonglong)pUVar8->ZoneID,true);
              if (this_00 == (FDS_ZoneBaseTableRow *)0x0) {
                pUVar4 = UDS_LogManager::GetInst();
                if (pUVar4 == (UDS_LogManager *)0x0) {
                  return false;
                }
                pUVar4 = UDS_LogManager::GetInst();
                local_498._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_498,"UDS_InteractionAbility_StuffQuestBoard::OpenQuestBoardUI",
                           0x38,Yes);
                UDS_LogManager::PrintLog
                          (pUVar4,1,Warning,local_498.Ptr,0x100,L"zoneBaseTableRow nullptr");
                local_a88.StringValue.Data.AllocatorInstance.Data =
                     (FScriptContainerElement *)local_498._padding_;
              }
              else {
                pFVar9 = FDS_ZoneBaseTableRow::ID_ZoneNameTable(this_00);
                pFVar10 = ::FString::FString(&local_a48,&pFVar9->Text);
                FStringFormatArg::FStringFormatArg(&local_a88,pFVar10);
                FStringFormatArg::FStringFormatArg(&local_a68,pFVar6->AscenderLevel);
                local_aa8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_aa8.ArrayNum = 2;
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x20,8,2,0,&local_aa8.AllocatorInstance,2,&local_aa8.ArrayMax);
                ConstructItems<FStringFormatArg,FStringFormatArg,int>
                          (local_aa8.AllocatorInstance.Data,&local_a88,2);
                UDS_UIMessageManager::OpenMsgByStringUi
                          (0x11136,Alert_System_02,&local_aa8,
                           (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                            *)0x0);
                DestructItems<FStringFormatArg,int>
                          ((FStringFormatArg *)local_aa8.AllocatorInstance.Data,local_aa8.ArrayNum);
                if ((FStringFormatArg *)local_aa8.AllocatorInstance.Data != (FStringFormatArg *)0x0)
                {
                  FMemory::Free(local_aa8.AllocatorInstance.Data);
                }
                if (local_a68.StringValue.Data.AllocatorInstance.Data !=
                    (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_a68.StringValue.Data.AllocatorInstance.Data);
                }
              }
            }
          }
          else {
            this_01 = UDS_DailyQuestManager::GetInst();
            if (this_01 == (UDS_DailyQuestManager *)0x0) {
              pUVar4 = UDS_LogManager::GetInst();
              if (pUVar4 == (UDS_LogManager *)0x0) {
                return false;
              }
              pUVar4 = UDS_LogManager::GetInst();
              local_378._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_378,"UDS_InteractionAbility_StuffQuestBoard::OpenQuestBoardUI",0x38,
                         Yes);
              UDS_LogManager::PrintLog
                        (pUVar4,1,Warning,local_378.Ptr,0x10d,L"dailyQuestMng is nullptr.");
              local_a88.StringValue.Data.AllocatorInstance.Data =
                   (FScriptContainerElement *)local_378._padding_;
            }
            else {
              bVar2 = UDS_DailyQuestManager::IsSuggestQuestBoard
                                (this_01,*(int *)&pUVar5[2].field_0x18);
              if (bVar2) {
                bVar2 = OpenQuestDailyWindow(this);
                if (bVar2) {
                  return true;
                }
                pUVar4 = UDS_LogManager::GetInst();
                if (pUVar4 == (UDS_LogManager *)0x0) {
                  return false;
                }
                pUVar4 = UDS_LogManager::GetInst();
                local_258._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_258,"UDS_InteractionAbility_StuffQuestBoard::OpenQuestBoardUI",
                           0x38,Yes);
                UDS_LogManager::PrintLog
                          (pUVar4,1,Warning,local_258.Ptr,0x116,L"OpenQuestDailyWindow() failed.");
                local_a88.StringValue.Data.AllocatorInstance.Data =
                     (FScriptContainerElement *)local_258._padding_;
              }
              else {
                bVar2 = UDS_DailyQuestManager::IsDailySuggestCountOver(this_01);
                if (bVar2) {
                  return true;
                }
                bVar2 = OpenQuestDailySuggestPopup(this);
                if (bVar2) {
                  return true;
                }
                pUVar4 = UDS_LogManager::GetInst();
                if (pUVar4 == (UDS_LogManager *)0x0) {
                  return false;
                }
                pUVar4 = UDS_LogManager::GetInst();
                local_138._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_138,"UDS_InteractionAbility_StuffQuestBoard::OpenQuestBoardUI",
                           0x38,Yes);
                UDS_LogManager::PrintLog
                          (pUVar4,1,Warning,local_138.Ptr,0x125,
                           L"OpenQuestDailySuggestPopup() failed.");
                local_a88.StringValue.Data.AllocatorInstance.Data =
                     (FScriptContainerElement *)local_138._padding_;
              }
            }
          }
        }
        else {
          bVar2 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<2578767380347879662>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_InteractionAbility_StuffQuestBoard.cpp"
                             ,0xee,"playerData.IsValid()");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            uVar3 = (*pcVar1)();
            return (bool)uVar3;
          }
          pUVar4 = UDS_LogManager::GetInst();
          if (pUVar4 == (UDS_LogManager *)0x0) {
            return false;
          }
          pUVar4 = UDS_LogManager::GetInst();
          local_6d8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_6d8,"UDS_InteractionAbility_StuffQuestBoard::OpenQuestBoardUI",0x38,Yes)
          ;
          UDS_LogManager::PrintLog(pUVar4,1,Warning,local_6d8.Ptr,0xf0,L"playerData is Invalid");
          local_a88.StringValue.Data.AllocatorInstance.Data =
               (FScriptContainerElement *)local_6d8._padding_;
        }
      }
    }
  }
  if (local_a88.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a88.StringValue.Data.AllocatorInstance.Data);
  }
  return false;
}

// OpenQuestDailySuggestPopup @ 14b80c640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __thiscall
UDS_InteractionAbility_StuffQuestBoard::OpenQuestDailySuggestPopup
          (UDS_InteractionAbility_StuffQuestBoard *this)

{
  FInstancedStruct *pFVar1;
  FObjectPtr_u_0 FVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  UDS_LogManager *pUVar7;
  UObject *pUVar8;
  FDS_EntityBase *pFVar9;
  FDS_StuffBaseTableRow *pFVar10;
  UDS_DailyQuestManager *pUVar11;
  UDS_CommonPopupManager *this_00;
  UDS_M_CommonPopup *pUVar12;
  FDS_Text *pFVar13;
  FObjectPtr_u_0 *pFVar14;
  FDS_Int32StringFormatArg *pFVar15;
  longlong lVar16;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  *pTVar17;
  int iVar18;
  undefined1 auStackY_268 [32];
  uint uVar19;
  wchar_t *pwVar20;
  TArray<FDS_TextFormatArg,TSizedDefaultAllocator<32>_> local_228;
  FWeakObjectPtr local_218;
  FDS_Text local_210;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_1c0;
  undefined1 local_1a8 [32];
  void *local_188;
  undefined4 local_180;
  uint local_17c;
  undefined4 local_178;
  int local_174;
  ForElementType<FSetElementId> local_170;
  int local_160 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  bVar4 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffQuestBoard,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar4) {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar7 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_InteractionAbility_StuffQuestBoard::OpenQuestDailySuggestPopup",0x42,
               Yes);
    pwVar20 = L"InteractionAbilityData is nullptr.";
    uVar19 = 0x155;
LAB_14b80c906:
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_158.Ptr,uVar19,pwVar20);
  }
  else {
    pUVar8 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    pFVar9 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar8[2].field_0x8);
    if (pFVar9 == (FDS_EntityBase *)0x0) {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar7 = UDS_LogManager::GetInst();
      FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_InteractionAbility_StuffQuestBoard::OpenQuestDailySuggestPopup",
                 0x42,Yes);
      pwVar20 = L"targetEntity is nullptr. (%llu)";
      uVar19 = 0x15c;
    }
    else {
      pFVar10 = FDS_StuffBaseTableRow::Get(pFVar9->TableID,true);
      if (pFVar10 != (FDS_StuffBaseTableRow *)0x0) {
        pUVar11 = UDS_DailyQuestManager::GetInst();
        if (pUVar11 == (UDS_DailyQuestManager *)0x0) {
          pUVar7 = UDS_LogManager::GetInst();
          if (pUVar7 == (UDS_LogManager *)0x0) {
            return false;
          }
          pUVar7 = UDS_LogManager::GetInst();
          local_158._padding_ = (longlong)pUVar11;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_InteractionAbility_StuffQuestBoard::OpenQuestDailySuggestPopup"
                     ,0x42,Yes);
          pwVar20 = L"dailyQuestMng is nullptr.";
          uVar19 = 0x16a;
        }
        else {
          this_00 = UDS_CommonPopupManager::GetInst();
          if (this_00 == (UDS_CommonPopupManager *)0x0) {
            pUVar7 = UDS_LogManager::GetInst();
            if (pUVar7 == (UDS_LogManager *)0x0) {
              return false;
            }
            pUVar7 = UDS_LogManager::GetInst();
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,
                       "UDS_InteractionAbility_StuffQuestBoard::OpenQuestDailySuggestPopup",0x42,Yes
                      );
            pwVar20 = L"commonPopupMng is nullptr.";
            uVar19 = 0x171;
          }
          else {
            UDS_CommonPopupManager::CreateCommonPopup(this_00);
            bVar4 = TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>::UEOpEquals
                              ((TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> *)&local_218,
                               (void *)0x0);
            if (!bVar4) {
              pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_218);
              pFVar13 = FDS_Text::FromStringTableFormat<FDS_StringWorldID_const_&>
                                  (&local_210,StringUi,0xed81,&pFVar10->ID_Name);
              UDS_M_CommonPopup::SetTitle(pUVar12,pFVar13);
              pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_218);
              pFVar13 = FDS_Text::FromStringTableFormat<FDS_StringWorldID_const_&>
                                  (&local_210,StringUi,0xed82,&pFVar10->ID_Name);
              UDS_M_CommonPopup::SetMainContent(pUVar12,pFVar13);
              pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_218);
              iVar5 = DS_CommonDataHelper::DailyQuestSuggestZone();
              local_17c = 0x80;
              local_178 = 0xffffffff;
              local_1a8._0_8_ = (FScriptContainerElement *)0x0;
              local_1a8._8_8_ = 0;
              local_188 = (void *)0x0;
              local_180 = 0;
              local_174 = 0;
              local_170.SecondaryData = (ForElementType<FSetElementId>)0x0;
              local_160[0] = 0;
              iVar18 = 0;
              if ((TMap<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>,0>_>
                   *)local_1a8 != &pUVar11->SuggestDailyQuestMap) {
                UE::Core::Private::
                CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                          (&local_170,local_160,
                           (ForElementType<FSetElementId> *)
                           &(pUVar11->SuggestDailyQuestMap).field_0x38,
                           *(int *)&(pUVar11->SuggestDailyQuestMap).field_0x48);
                TSparseArray<TSparseSetElement<TTuple<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::operator=((TSparseArray<TSparseSetElement<TTuple<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)local_1a8,
                            (TSparseArray<TSparseSetElement<TTuple<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             *)&pUVar11->SuggestDailyQuestMap);
                iVar18 = local_1a8._8_4_;
              }
              iVar3 = local_174;
              local_210.StringTableType = None;
              local_210.StringTableID = 0;
              local_210.StringEnumTableNameID.ComparisonIndex.Value = 0;
              local_210.StringEnumTableNameID.Number = 0;
              local_210.TimeExpressionType = None;
              local_210.DateTime.Ticks = 0;
              local_210.TimeSpan.Ticks = 0;
              local_210.IsExpression = false;
              local_210.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_210.UniqueString.Data.ArrayNum = 0;
              local_210.UniqueString.Data.ArrayMax = 0;
              local_210.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_210.FormatArgs.ArrayNum = 0;
              local_210.FormatArgs.ArrayMax = 0;
              local_228.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_228.ArrayNum = 0;
              local_228.ArrayMax = 0;
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x828,&local_228.AllocatorInstance,&local_228.ArrayMax);
              pFVar1 = (FInstancedStruct *)
                       (local_228.AllocatorInstance.Data + (longlong)iVar6 * 0x28);
              local_228.ArrayNum = iVar6 + 1;
              FInstancedStruct::FInstancedStruct(pFVar1);
              pFVar14 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
              FVar2 = pFVar14[1];
              pFVar1[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar14;
              pFVar1[1].StructMemory = (uchar *)FVar2;
              pFVar1[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar14[2];
              FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar1);
              pFVar15 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar1);
              if (pFVar15 != (FDS_Int32StringFormatArg *)0x0) {
                pFVar15->Value = iVar18 - iVar3;
              }
              if (local_228.ArrayNum == local_228.ArrayMax) {
                local_228.ArrayNum =
                     UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x828,&local_228.AllocatorInstance,&local_228.ArrayMax);
              }
              lVar16 = (longlong)local_228.ArrayNum;
              local_228.ArrayNum = local_228.ArrayNum + 1;
              pFVar1 = (FInstancedStruct *)(local_228.AllocatorInstance.Data + lVar16 * 0x28);
              FInstancedStruct::FInstancedStruct(pFVar1);
              pFVar14 = (FObjectPtr_u_0 *)FNumberFormattingOptions::DefaultWithGrouping();
              FVar2 = pFVar14[1];
              pFVar1[1].ScriptStruct.field0_0x0.ObjectPtr.field0_0x0 = *pFVar14;
              pFVar1[1].StructMemory = (uchar *)FVar2;
              pFVar1[2].ScriptStruct.field0_0x0 = (TObjectPtr<UScriptStruct_const_>_u_0)pFVar14[2];
              FInstancedStruct::InitializeAs<FDS_Int32StringFormatArg>(pFVar1);
              pFVar15 = FInstancedStruct::GetMutablePtr<FDS_Int32StringFormatArg>(pFVar1);
              if (pFVar15 != (FDS_Int32StringFormatArg *)0x0) {
                pFVar15->Value = iVar5;
              }
              FDS_Text::SetTextFormatFromStringTable(&local_210,StringUi,0xed83,&local_228);
              DestructItems<FDS_TextFormatArg,int>
                        ((FDS_TextFormatArg *)local_228.AllocatorInstance.Data,local_228.ArrayNum);
              if ((FDS_TextFormatArg *)local_228.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0)
              {
                FMemory::Free(local_228.AllocatorInstance.Data);
              }
              UDS_M_CommonPopup::SetSubContent01(pUVar12,&local_210);
              local_160[0] = 0;
              if (local_170.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_170.SecondaryData);
              }
              TSparseArray<TSparseSetElement<TTuple<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<int,TArray<DailyQuestInfo,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                                 *)local_1a8,0,local_1a8._8_4_);
              iVar18 = SUB84(local_1a8._8_8_,4);
              local_1a8._8_8_ = local_1a8._8_8_ & 0xffffffff00000000;
              if (iVar18 != 0) {
                UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x20,8,0,(ForAnyElementType *)local_1a8,0,(int *)(local_1a8 + 0xc));
              }
              local_178 = 0xffffffff;
              local_174 = 0;
              local_180 = 0;
              if (0x80 < local_17c) {
                local_17c = 0x80;
                TBitArray<FDefaultBitArrayAllocator>::Realloc
                          ((TBitArray<FDefaultBitArrayAllocator> *)(local_1a8 + 0x10),0);
              }
              if (local_188 != (void *)0x0) {
                FMemory::Free(local_188);
              }
              if ((FScriptContainerElement *)local_1a8._0_8_ != (FScriptContainerElement *)0x0) {
                FMemory::Free((void *)local_1a8._0_8_);
              }
              pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_218);
              UDS_M_CommonPopup::SetButton(pUVar12,ButtonCancel,StringUi,0x66,false);
              pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_218);
              local_228._8_8_ = local_228._8_8_ & 0xffffffff00000000;
              local_228.AllocatorInstance.Data =
                   (FScriptContainerElement *)OnQuestDailySuggestPopup_CancelConfirm;
              pTVar17 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                        ::CreateUObject<UDS_InteractionAbility_StuffQuestBoard>
                                  (&local_1c0,this,(pmf_23432b0a *)&local_228);
              UDS_M_CommonPopup::SetDelegate(pUVar12,ButtonCancel,pTVar17);
              pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_218);
              UDS_M_CommonPopup::SetButton(pUVar12,ButtonConfirm,StringUi,0x65,false);
              pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_218);
              local_228._8_8_ = local_228._8_8_ & 0xffffffff00000000;
              local_228.AllocatorInstance.Data =
                   (FScriptContainerElement *)OnQuestDailySuggestPopup_ClickConfirm;
              pTVar17 = TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
                        ::CreateUObject<UDS_InteractionAbility_StuffQuestBoard>
                                  (&local_1c0,this,(pmf_23432b0a *)&local_228);
              UDS_M_CommonPopup::SetDelegate(pUVar12,ButtonConfirm,pTVar17);
              pUVar12 = (UDS_M_CommonPopup *)FWeakObjectPtr::Get(&local_218);
              UDS_M_CommonPopup::OpenCommonPopup(pUVar12);
              return true;
            }
            pUVar7 = UDS_LogManager::GetInst();
            if (pUVar7 == (UDS_LogManager *)0x0) {
              return false;
            }
            pUVar7 = UDS_LogManager::GetInst();
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,
                       "UDS_InteractionAbility_StuffQuestBoard::OpenQuestDailySuggestPopup",0x42,Yes
                      );
            pwVar20 = L"commonPopupModel is nullptr.";
            uVar19 = 0x178;
          }
        }
        goto LAB_14b80c906;
      }
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar7 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_InteractionAbility_StuffQuestBoard::OpenQuestDailySuggestPopup",
                 0x42,Yes);
      pwVar20 = L"stuffBaseTable is nullptr. (%llu)";
      uVar19 = 0x163;
    }
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_158.Ptr,uVar19,pwVar20);
  }
  if ((UDS_DailyQuestManager *)local_158._padding_ != (UDS_DailyQuestManager *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return false;
}

// OpenQuestDailyWindow @ 14b80cd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UDS_InteractionAbility_StuffQuestBoard::OpenQuestDailyWindow
          (UDS_InteractionAbility_StuffQuestBoard *this)

{
  bool bVar1;
  UDS_DailyQuestManager *pUVar2;
  UDS_LogManager *pUVar3;
  UDS_WindowManager *this_00;
  UObject *pUVar4;
  FDS_EntityBase *pFVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar8;
  undefined1 auStackY_208 [32];
  uint uVar9;
  wchar_t *pwVar10;
  undefined1 local_1c8 [8];
  FDelegateAllocation local_1c0;
  code *local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  bool local_198;
  UDS_InteractionAbility_StuffQuestBoard *local_188;
  FDestructionSentinel local_180;
  FDelegateAllocation *local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pUVar2 = UDS_DailyQuestManager::GetInst();
  if (pUVar2 == (UDS_DailyQuestManager *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_InteractionAbility_StuffQuestBoard::OpenQuestDailyWindow",0x3c,Yes);
    pwVar10 = L"dailyQuestMng is nullptr.";
    uVar9 = 0x133;
  }
  else {
    this_00 = UDS_WindowManager::GetInst();
    if (this_00 != (UDS_WindowManager *)0x0) {
      pUVar4 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
      pFVar5 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar4[2].field_0x8);
      if (pFVar5 != (FDS_EntityBase *)0x0) {
        local_1a8 = OnOpenQuestDailyWindow;
        uStack_1a0 = 0;
        local_1c8 = (undefined1  [8])0x0;
        local_1c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_1c0.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c8,
                   (FWriteAccessScope *)&local_180);
        local_168 = &local_1c0;
        puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_1c0);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = &
                    ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar7 = FDelegateHandle::GenerateNewID();
          puVar6[2] = uVar7;
          *puVar6 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_InteractionAbility_StuffQuestBoard____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this != (UDS_InteractionAbility_StuffQuestBoard *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar6[3] = 0;
          local_188 = this;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (this != (UDS_InteractionAbility_StuffQuestBoard *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_188);
          puVar6[4] = local_1a8;
          puVar6[5] = CONCAT44(uStack_19c,uStack_1a0);
        }
        if (local_180.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_180.Accessor,&local_180);
        }
        pTVar8 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
                 TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                           ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                            &local_1a8,
                            (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                            local_1c8);
        bVar1 = UDS_WindowManager::OpenWindow(this_00,QuestDaily,pTVar8);
        if (bVar1) {
          bVar1 = true;
          pUVar2->TargetStuffBaseTableID = pFVar5->TableID;
        }
        else {
          pUVar3 = UDS_LogManager::GetInst();
          if (pUVar3 != (UDS_LogManager *)0x0) {
            pUVar3 = UDS_LogManager::GetInst();
            local_158._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_158,"UDS_InteractionAbility_StuffQuestBoard::OpenQuestDailyWindow",
                       0x3c,Yes);
            UDS_LogManager::PrintLog(pUVar3,1,Warning,local_158.Ptr,0x148,L"OpenWindow() failed.");
            if ((void *)local_158._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_158._padding_);
            }
          }
          bVar1 = false;
        }
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1c8,
                   (FWriteAccessScope *)&local_1a8);
        if ((local_1c0.DelegateSize != 0) &&
           (local_1c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_1c0.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_1c0,0,0,0x10);
          local_1c0.DelegateSize = 0;
        }
        if (local_198 == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_19c,uStack_1a0),
                     (FDestructionSentinel *)&local_1a8);
        }
        if (local_1c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_1c0.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_1c8);
        return bVar1;
      }
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar3 = UDS_LogManager::GetInst();
      FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_InteractionAbility_StuffQuestBoard::OpenQuestDailyWindow",0x3c,Yes)
      ;
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_158.Ptr,0x141,L"targetEntity is nullptr. (%llu)");
      goto LAB_14b80cecd;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_InteractionAbility_StuffQuestBoard::OpenQuestDailyWindow",0x3c,Yes);
    pwVar10 = L"windowMng is nullptr.";
    uVar9 = 0x13a;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_158.Ptr,uVar9,pwVar10);
LAB_14b80cecd:
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return false;
}

// TryActivate @ 14b815520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

bool __cdecl
UDS_InteractionAbility_StuffQuestBoard::TryActivate(ulong64 *param_1,ulong64 *param_2,int param_3)

{
  bool bVar1;
  FDS_EntityBase *this;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_198 [32];
  uint uVar4;
  wchar_t *pwVar5;
  EDS_AbilityTagType local_158 [8];
  FWeakObjectPtr local_150;
  undefined8 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  if (((*param_1 == 0) || (*param_2 == 0)) || (param_3 == 0)) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_StuffQuestBoard::TryActivate",0x33,Yes);
    pwVar5 = L"Invalid parameter.";
    uVar4 = 0x92;
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this == (FDS_EntityBase *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = (longlong)this;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_StuffQuestBoard::TryActivate",0x33,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x99,L"sourceEntity is nullptr. (%llu)");
      goto LAB_14b81571c;
    }
    local_158[0] = Interaction_StuffQuestBoard;
    UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_StuffQuestBoard>
              ((ulong64 *)&local_150,(EDS_AbilityTagType *)param_1);
    bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffQuestBoard,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_InteractionAbilityData_StuffQuestBoard,FWeakObjectPtr> *)
                       &local_150,(void *)0x0);
    if (!bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&local_150);
      *(ulong64 *)&pUVar3[2].field_0x8 = *param_2;
      pUVar3 = FWeakObjectPtr::Get(&local_150);
      local_148[0] = 0;
      local_158[0] = Interaction_StuffQuestBoard;
      *(int *)&pUVar3[2].field_0x10 = param_3;
      bVar1 = FDS_EntityBase::TryActivateAbility
                        (this,local_158,(TObjectPtr<UWN_AbilityContext>)local_148);
      return bVar1;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_StuffQuestBoard::TryActivate",0x33,Yes);
    pwVar5 = L"abilityData is nullptr.";
    uVar4 = 0xa0;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
LAB_14b81571c:
  if ((FDS_EntityBase *)local_138._padding_ != (FDS_EntityBase *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}


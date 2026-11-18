// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 24

// StaticClass @ 14b4bb530

UClass * __cdecl UDS_InteractionAbility_NPCLing::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbility_NPCLing.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbility_NPCLing",
               &Z_Registration_Info_UClass_UDS_InteractionAbility_NPCLing.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbility_NPCLing,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbility_NPCLing>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbility_NPCLing>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbility_NPCLing.InnerSingleton;
}

// UDS_InteractionAbility_NPCLing @ 14b4c1530

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

UDS_InteractionAbility_NPCLing * __thiscall
UDS_InteractionAbility_NPCLing::UDS_InteractionAbility_NPCLing
          (UDS_InteractionAbility_NPCLing *this,FVTableHelper *param_1)

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

// UDS_InteractionAbility_NPCLing @ 14b4c1580

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

UDS_InteractionAbility_NPCLing * __thiscall
UDS_InteractionAbility_NPCLing::UDS_InteractionAbility_NPCLing
          (UDS_InteractionAbility_NPCLing *this,FObjectInitializer *param_1)

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

// ~UDS_InteractionAbility_NPCLing @ 14b4c2400

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
UDS_InteractionAbility_NPCLing::~UDS_InteractionAbility_NPCLing
          (UDS_InteractionAbility_NPCLing *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetDefaultInputPolicy @ 14b4c3aa0

EDS_AbilityInputPolicy __thiscall
UDS_InteractionAbility_NPCLing::GetDefaultInputPolicy(UDS_InteractionAbility_NPCLing *this)

{
  return EndIfInput;
}

// GetPrivateStaticClass @ 14b4c4ae0

UClass * __cdecl UDS_InteractionAbility_NPCLing::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbility_NPCLing.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbility_NPCLing",
               &Z_Registration_Info_UClass_UDS_InteractionAbility_NPCLing.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbility_NPCLing,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbility_NPCLing>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbility_NPCLing>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbility_NPCLing.InnerSingleton;
}

// ShouldNotifyChangedCharState @ 14b4c5440

bool __thiscall
UDS_InteractionAbility_NPCLing::ShouldNotifyChangedCharState(UDS_InteractionAbility_NPCLing *this)

{
  return true;
}

// StaticRegisterNativesUDS_InteractionAbility_NPCLing @ 14b4c5690

void __cdecl
UDS_InteractionAbility_NPCLing::StaticRegisterNativesUDS_InteractionAbility_NPCLing(void)

{
  return;
}

// BindDelegate @ 14b7da8a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_InteractionAbility_NPCLing::BindDelegate(UDS_InteractionAbility_NPCLing *this)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_NPCLing,FWeakObjectPtr> *this_00;
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_1a8 [32];
  undefined1 local_168 [304];
  void *local_38;
  wchar_t *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  this_00 = &this->InteractionAbilityData;
  bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar1) {
    FWeakObjectPtr::Get(&this_00->WeakPtr);
    UDS_NPCLingData::GetData((ulong64)(local_168 + 0x10));
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_168 + 0x10));
    if (bVar1) {
      local_168._8_4_ = 0;
      local_168._0_8_ = OnInteractionStart;
      local_168._40_8_ = (ulonglong)(uint)local_168._12_4_ << 0x20;
      local_168._32_8_ = OnInteractionStart;
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_168 + 0x10));
      TMulticastDelegateRegistration<void___cdecl(unsigned___int64,float),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_InteractionAbility_NPCLing>
                ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64,float),FDefaultDelegateUserPolicy>
                  *)&pUVar3[2].field_0x8,(UDS_InteractionAbility_NPCLing *)local_168,
                 (pmf_9087f476 *)this);
      local_168._8_4_ = 0;
      local_168._0_8_ = OnInteractionCancel;
      local_168._40_8_ = (ulonglong)(uint)local_168._12_4_ << 0x20;
      local_168._32_8_ = OnInteractionCancel;
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_168 + 0x10));
      TMulticastDelegateRegistration<void___cdecl(unsigned___int64,int),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_InteractionAbility_NPCLing>
                ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64,int),FDefaultDelegateUserPolicy>
                  *)(pUVar3 + 3),(UDS_InteractionAbility_NPCLing *)local_168,(pmf_57e44489 *)this);
      local_168._8_4_ = 0;
      local_168._0_8_ = OnInteractionComplete;
      local_168._40_8_ = (ulonglong)(uint)local_168._12_4_ << 0x20;
      local_168._32_8_ = OnInteractionComplete;
      pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_168 + 0x10));
      TMulticastDelegateRegistration<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>::
      AddUObject<UDS_InteractionAbility_NPCLing>
                ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
                  *)&pUVar3[3].field_0x20,(UDS_InteractionAbility_NPCLing *)local_168,
                 (pmf_393aeb31 *)this);
    }
    else {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        FWeakObjectPtr::Get(&this_00->WeakPtr);
        local_38 = (void *)0x0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_168 + 0x30),
                   "UDS_InteractionAbility_NPCLing::BindDelegate",0x2c,Yes);
        UDS_LogManager::PrintLog(pUVar2,1,Warning,local_30,0xe0,L"npcLingData is nullptr. (%llu)");
        if (local_38 != (void *)0x0) {
          FMemory::Free(local_38);
        }
      }
    }
  }
  return;
}

// IsEnoughItem @ 14b7f2c30

bool __thiscall UDS_InteractionAbility_NPCLing::IsEnoughItem(UDS_InteractionAbility_NPCLing *this)

{
  bool bVar1;
  EDS_GradeType EVar2;
  int iVar3;
  int iVar4;
  UDS_NPCLingData *pUVar5;
  FWeakObjectPtr local_res8;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->InteractionAbilityData).WeakPtr);
  if (bVar1) {
    FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    UDS_NPCLingData::GetData((ulong64)&local_res8);
    bVar1 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar1) {
      pUVar5 = (UDS_NPCLingData *)FWeakObjectPtr::Get(&local_res8);
      iVar3 = UDS_NPCLingData::GetPlayerSkillLevel(pUVar5);
      pUVar5 = (UDS_NPCLingData *)FWeakObjectPtr::Get(&local_res8);
      EVar2 = UDS_NPCLingData::GetPlayerSkillGrade(pUVar5);
      iVar4 = FDS_PlayerSkillNeedItemTableRow::GetReqItemTID(Ling,iVar3,EVar2);
      iVar3 = FDS_PlayerSkillNeedItemTableRow::GetReqItemCount(Ling,iVar3,EVar2);
      if ((0 < iVar4) && (0 < iVar3)) {
        iVar4 = DS_ItemDataUtil::GetTotalStackCountByItemTID(PlayerNormal,iVar4);
        return iVar3 <= iVar4;
      }
      return true;
    }
  }
  return false;
}

// IsEnoughPlayerSkillLevel @ 14b7f2e00

bool __thiscall
UDS_InteractionAbility_NPCLing::IsEnoughPlayerSkillLevel(UDS_InteractionAbility_NPCLing *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  UDS_NPCLingData *this_00;
  EDS_PlayerSkillType local_res8 [8];
  FWeakObjectPtr local_res10;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->InteractionAbilityData).WeakPtr);
  if (bVar1) {
    FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    UDS_NPCLingData::GetData((ulong64)&local_res10);
    bVar1 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar1) {
      local_res8[0] = Ling;
      iVar2 = DS_AbilityUtil_PlayerSkill::GetPlayerSkillLevel_SourceEntity
                        ((ulong64 *)&this->_padding_,local_res8);
      this_00 = (UDS_NPCLingData *)FWeakObjectPtr::Get(&local_res10);
      iVar3 = UDS_NPCLingData::GetPlayerSkillLevel(this_00);
      return iVar3 <= iVar2;
    }
  }
  return false;
}

// IsEnoughTicket @ 14b7f2f40

bool __thiscall UDS_InteractionAbility_NPCLing::IsEnoughTicket(UDS_InteractionAbility_NPCLing *this)

{
  bool bVar1;
  EDS_GradeType EVar2;
  EDS_TicketType EVar3;
  int iVar4;
  UDS_NPCLingData *pUVar5;
  UObject *pUVar6;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->InteractionAbilityData).WeakPtr);
  if (bVar1) {
    FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    UDS_NPCLingData::GetData((ulong64)&local_res10);
    bVar1 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar1) {
      pUVar5 = (UDS_NPCLingData *)FWeakObjectPtr::Get(&local_res10);
      iVar4 = UDS_NPCLingData::GetPlayerSkillLevel(pUVar5);
      pUVar5 = (UDS_NPCLingData *)FWeakObjectPtr::Get(&local_res10);
      EVar2 = UDS_NPCLingData::GetPlayerSkillGrade(pUVar5);
      EVar3 = FDS_PlayerSkillNeedItemTableRow::GetReqTicketType(Ling,iVar4,EVar2);
      iVar4 = FDS_PlayerSkillNeedItemTableRow::GetReqTicketCount(Ling,iVar4,EVar2);
      if (EVar3 == None) {
        return true;
      }
      UDS_TicketData::GetDataByCharEntityID
                ((ulong64 *)local_res18,(EDS_TicketType *)&this->_padding_);
      bVar1 = FWeakObjectPtr::IsValid(local_res18);
      if (bVar1) {
        pUVar6 = FWeakObjectPtr::Get(local_res18);
        return iVar4 <= *(int *)&pUVar6[2].field_0xc;
      }
    }
  }
  return false;
}

// OnAbilityRetryActivate @ 14b7f4790

void __thiscall
UDS_InteractionAbility_NPCLing::OnAbilityRetryActivate(UDS_InteractionAbility_NPCLing *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<4043791896223416477>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_InteractionAbility_NPCLing.cpp"
                     ,0x9d,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnCanActivate @ 14b7f6800

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_InteractionAbility_NPCLing::OnCanActivate(UDS_InteractionAbility_NPCLing *this)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_NPCLing,FWeakObjectPtr> *this_00;
  int iVar1;
  bool bVar2;
  TWeakObjectPtr<UDS_InteractionAbilityData_NPCLing,FWeakObjectPtr> TVar3;
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
    bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (!bVar2) {
      TVar3 = UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_NPCLing>
                        (&local_144,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      this_00->WeakPtr = *TVar3.WeakPtr;
    }
    bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
    if (bVar2) {
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
        return bVar2;
      }
    }
    else {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_InteractionAbility_NPCLing::OnCanActivate",0x2d,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_138.Ptr,0x25,L"InteractionAbilityData is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
  }
  return false;
}

// OnChangedCharState @ 14b7f8e10

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
UDS_InteractionAbility_NPCLing::OnChangedCharState
          (UDS_InteractionAbility_NPCLing *this,
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
                (&local_138,"UDS_InteractionAbility_NPCLing::OnChangedCharState",0x32,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0xa6,L"InCharStateData is nullptr.");
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
    bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_NPCLing,FWeakObjectPtr>::UEOpEquals
                      (&this->InteractionAbilityData,(void *)0x0);
    if (bVar2) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_InteractionAbility_NPCLing::OnChangedCharState",0x32,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_138.Ptr,0xad,L"InteractionAbilityData is nullptr.");
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

// OnDeactivateAbility @ 14b7fc160

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
UDS_InteractionAbility_NPCLing::OnDeactivateAbility
          (UDS_InteractionAbility_NPCLing *this,bool *param_1)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_NPCLing,FWeakObjectPtr> *this_00;
  bool bVar1;
  UObject *pUVar2;
  FDS_EntityBase *pFVar3;
  FDS_PlayerSkillBaseTableRow *this_01;
  FString *pFVar4;
  FGameplayTag *pFVar5;
  FWeakObjectPtr local_res8;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_48;
  FString local_38;
  FStringFormatArg local_28;
  
  this_00 = &this->InteractionAbilityData;
  bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if ((bVar1) && (*param_1 == false)) {
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    if (pUVar2[2].field_0x18 == '\x01') {
      bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
      if (bVar1) {
        pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        pFVar3 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar2[2].field_0x8);
        if (pFVar3 != (FDS_EntityBase *)0x0) {
          pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          pUVar2[2].field_0x18 = 0;
          pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          FDS_NpcLingService::RequestLingSkillCancel(*(ulong64 *)&pUVar2[2].field_0x8);
        }
      }
      this_01 = FDS_PlayerSkillBaseTableRow::GetRef(6,true);
      bVar1 = FDS_PlayerSkillBaseTableRow::IsValid(this_01);
      if (bVar1) {
        pFVar4 = (FString *)
                 (**(code **)((this_01->ID_SkillName)._padding_ + 8))(&this_01->ID_SkillName);
        pFVar4 = ::FString::FString(&local_38,pFVar4);
        FStringFormatArg::FStringFormatArg(&local_28,pFVar4);
        local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_48.ArrayNum = 1;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,1,0,&local_48.AllocatorInstance,1,&local_48.ArrayMax);
        ConstructItems<FStringFormatArg,FStringFormatArg,int>
                  (local_48.AllocatorInstance.Data,&local_28,1);
        UDS_UIMessageManager::OpenMsgByStringUi
                  (0x4c2c5,Alert_None_01,&local_48,
                   (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                    *)0x0);
        DestructItems<FStringFormatArg,int>
                  ((FStringFormatArg *)local_48.AllocatorInstance.Data,local_48.ArrayNum);
        if ((FStringFormatArg *)local_48.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
          FMemory::Free(local_48.AllocatorInstance.Data);
        }
        if (local_28.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.StringValue.Data.AllocatorInstance.Data);
        }
      }
    }
  }
  local_res8.ObjectIndex._0_1_ = 0x52;
  pFVar5 = FDS_GameplayTags::GetStateTag((EDS_StateTagType *)&local_res8);
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar5);
  bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar1) {
    FWeakObjectPtr::Get(&this_00->WeakPtr);
    UDS_NPCLingData::GetData((ulong64)&local_res8);
    bVar1 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&local_res8);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[2].field_0x8,this);
      pUVar2 = FWeakObjectPtr::Get(&local_res8);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar2 + 3),this);
      pUVar2 = FWeakObjectPtr::Get(&local_res8);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[3].field_0x20,this);
    }
  }
  bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    (**(code **)(*(longlong *)pUVar2 + 0x2c8))(pUVar2);
  }
  return;
}

// OnInteractionCancel @ 14b7fe0a0

void __thiscall
UDS_InteractionAbility_NPCLing::OnInteractionCancel
          (UDS_InteractionAbility_NPCLing *this,ulong64 param_1,int param_2)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_AbilitySystemComponent *this_00;
  EDS_AbilityDeactivateType local_res8 [8];
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->InteractionAbilityData).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    local_res8[0] = Success;
    pUVar2[2].field_0x18 = 1;
  }
  else {
    local_res8[0] = Cancel;
  }
  this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (this_00,(FGameplayTag *)&this->_padding_,local_res8);
  return;
}

// OnInteractionComplete @ 14b7fe350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_InteractionAbility_NPCLing::OnInteractionComplete
          (UDS_InteractionAbility_NPCLing *this,ulong64 param_1)

{
  EDS_GradeType EVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  UDS_AbilitySystemComponent *pUVar6;
  UObject *pUVar7;
  FDS_PlayerSkillBaseTableRow *pFVar8;
  FString *pFVar9;
  UDS_TicketData *this_00;
  undefined1 auStackY_128 [32];
  EDS_AbilityDeactivateType local_e8 [8];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_e0;
  FWeakObjectPtr local_d0;
  FWeakObjectPtr local_c8;
  FString local_c0;
  FString local_b0;
  FStringFormatArg local_98;
  FStringFormatArg local_78;
  FStringFormatArg local_58;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  bVar3 = FWeakObjectPtr::IsValid(&(this->InteractionAbilityData).WeakPtr);
  if (bVar3) {
    pUVar7 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    uVar2 = *(undefined4 *)&pUVar7[2].field_0x10;
    pUVar7 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    UDS_InteractionData::GetData((ulong64)&local_d0,*(ulong64 *)&pUVar7[2].field_0x8,SUB41(uVar2,0))
    ;
    bVar3 = FWeakObjectPtr::IsValid(&local_d0);
    if (bVar3) {
      pUVar7 = FWeakObjectPtr::Get(&local_d0);
      iVar5 = *(int *)&pUVar7[3].field_0x4;
      pUVar7 = FWeakObjectPtr::Get(&local_d0);
      EVar1 = pUVar7[3].field_0x8;
      local_e8[0] = FDS_PlayerSkillNeedItemTableRow::GetReqTicketType(Ling,iVar5,EVar1);
      iVar4 = FDS_PlayerSkillNeedItemTableRow::GetReqTicketCount(Ling,iVar5,EVar1);
      if ((local_e8[0] != None) && (0 < iVar4)) {
        pFVar8 = FDS_PlayerSkillBaseTableRow::GetRef(6,true);
        UDS_TicketData::GetDataByCharEntityID
                  ((ulong64 *)&local_c8,(EDS_TicketType *)&this->_padding_);
        bVar3 = FDS_PlayerSkillBaseTableRow::IsValid(pFVar8);
        if ((bVar3) && (bVar3 = FWeakObjectPtr::IsValid(&local_c8), bVar3)) {
          pFVar9 = (FString *)
                   (**(code **)((pFVar8->ID_SkillName)._padding_ + 8))(&pFVar8->ID_SkillName);
          pFVar9 = ::FString::FString(&local_c0,pFVar9);
          FStringFormatArg::FStringFormatArg(&local_98,pFVar9);
          this_00 = (UDS_TicketData *)FWeakObjectPtr::Get(&local_c8);
          pFVar9 = UDS_TicketData::GetTicketName(this_00,&local_b0);
          FStringFormatArg::FStringFormatArg(&local_78,pFVar9);
          FStringFormatArg::FStringFormatArg(&local_58,iVar4);
          local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_e0.ArrayNum = 3;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,3,0,&local_e0.AllocatorInstance,3,&local_e0.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_e0.AllocatorInstance.Data,&local_98,3);
          UDS_UIMessageManager::OpenMsgByStringUi
                    (0x1d8b1,Complete_None_01,&local_e0,
                     (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                      *)0x0);
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_e0.AllocatorInstance.Data,local_e0.ArrayNum);
          if ((FStringFormatArg *)local_e0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
            FMemory::Free(local_e0.AllocatorInstance.Data);
          }
          if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
          }
          if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
          }
          if (local_98.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.StringValue.Data.AllocatorInstance.Data);
          }
        }
      }
      iVar4 = FDS_PlayerSkillNeedItemTableRow::GetReqItemTID(Ling,iVar5,EVar1);
      iVar5 = FDS_PlayerSkillNeedItemTableRow::GetReqItemCount(Ling,iVar5,EVar1);
      if ((0 < iVar4) && (0 < iVar5)) {
        pFVar8 = FDS_PlayerSkillBaseTableRow::GetRef(6,true);
        bVar3 = FDS_PlayerSkillBaseTableRow::IsValid(pFVar8);
        if (bVar3) {
          pFVar9 = (FString *)
                   (**(code **)((pFVar8->ID_SkillName)._padding_ + 8))(&pFVar8->ID_SkillName);
          pFVar9 = ::FString::FString(&local_b0,pFVar9);
          FStringFormatArg::FStringFormatArg(&local_98,pFVar9);
          pFVar9 = DS_ItemDataUtil::GetItemNameByTID(&local_c0,iVar4);
          FStringFormatArg::FStringFormatArg(&local_78,pFVar9);
          FStringFormatArg::FStringFormatArg(&local_58,iVar5);
          local_e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_e0.ArrayNum = 3;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,3,0,&local_e0.AllocatorInstance,3,&local_e0.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_e0.AllocatorInstance.Data,&local_98,3);
          UDS_UIMessageManager::OpenMsgByStringUi
                    (0x1d8b2,Complete_None_01,&local_e0,
                     (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                      *)0x0);
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_e0.AllocatorInstance.Data,local_e0.ArrayNum);
          if ((FStringFormatArg *)local_e0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
            FMemory::Free(local_e0.AllocatorInstance.Data);
          }
          if (local_58.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_58.StringValue.Data.AllocatorInstance.Data);
          }
          if (local_78.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.StringValue.Data.AllocatorInstance.Data);
          }
          if (local_98.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.StringValue.Data.AllocatorInstance.Data);
          }
        }
      }
    }
    pUVar7 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    local_e8[0] = Success;
    pUVar7[2].field_0x18 = 0;
    pUVar6 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (pUVar6,(FGameplayTag *)&this->_padding_,local_e8);
  }
  else {
    local_e8[0] = Cancel;
    pUVar6 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (pUVar6,(FGameplayTag *)&this->_padding_,local_e8);
  }
  return;
}

// OnInteractionStart @ 14b7fe980

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
UDS_InteractionAbility_NPCLing::OnInteractionStart
          (UDS_InteractionAbility_NPCLing *this,ulong64 param_1,float param_2)

{
  bool bVar1;
  UDS_AbilitySystemComponent *this_00;
  FGameplayTag *pFVar2;
  EDS_AbilityDeactivateType local_res8 [32];
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->InteractionAbilityData).WeakPtr);
  if (!bVar1) {
    local_res8[0] = Cancel;
    this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (this_00,(FGameplayTag *)&this->_padding_,local_res8);
    return;
  }
  local_res8[0] = 0x52;
  pFVar2 = FDS_GameplayTags::GetStateTag(local_res8);
  UDS_GameplayAbility::AddTagToASC((UDS_GameplayAbility *)this,pFVar2);
  return;
}

// OnPostActivateAbility @ 14b8039c0

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
UDS_InteractionAbility_NPCLing::OnPostActivateAbility(UDS_InteractionAbility_NPCLing *this)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_NPCLing,FWeakObjectPtr> *this_00;
  bool bVar1;
  EDS_GradeType EVar2;
  EDS_GradeType EVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  UDS_LogManager *pUVar7;
  UDS_AbilitySystemComponent *pUVar8;
  UDS_NPCLingData *pUVar9;
  UObject *pUVar10;
  FDS_EntityBase *pFVar11;
  FString *pFVar12;
  UDS_TicketData *this_01;
  FDS_PlayerSkillBaseTableRow *this_02;
  EDS_AbilityDeactivateType *pEVar13;
  undefined1 auStackY_228 [32];
  uint uVar14;
  wchar_t *pwVar15;
  EDS_AbilityDeactivateType local_1e8 [16];
  undefined1 local_1d8 [24];
  int local_1c0;
  int local_1bc;
  FString local_1b8;
  FWeakObjectPtr local_1a8 [2];
  FStringFormatArg local_198;
  FStringFormatArg local_178;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_228;
  this_00 = &this->InteractionAbilityData;
  bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar1) {
    FWeakObjectPtr::Get(&this_00->WeakPtr);
    UDS_NPCLingData::GetData((ulong64)local_1a8);
    bVar1 = FWeakObjectPtr::IsValid(local_1a8);
    if (bVar1) {
      pUVar9 = (UDS_NPCLingData *)FWeakObjectPtr::Get(local_1a8);
      iVar4 = UDS_NPCLingData::GetPlayerSkillLevel(pUVar9);
      pUVar9 = (UDS_NPCLingData *)FWeakObjectPtr::Get(local_1a8);
      EVar2 = UDS_NPCLingData::GetPlayerSkillGrade(pUVar9);
      bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
      if (!bVar1) {
LAB_14b80417e:
        this_02 = FDS_PlayerSkillBaseTableRow::GetRef(6,true);
        bVar1 = FDS_PlayerSkillBaseTableRow::IsValid(this_02);
        if (bVar1) {
          pFVar12 = (FString *)
                    (**(code **)((this_02->ID_SkillName)._padding_ + 8))(&this_02->ID_SkillName);
          pFVar12 = ::FString::FString(&local_1b8,pFVar12);
          FStringFormatArg::FStringFormatArg(&local_198,pFVar12);
          FStringFormatArg::FStringFormatArg(&local_178,iVar4);
          local_1d8._8_4_ = 2;
          local_1d8._0_4_ = 0;
          local_1d8._4_4_ = 0;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,2,0,(ForAnyElementType *)local_1d8,2,(int *)(local_1d8 + 0xc));
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    ((void *)local_1d8._0_8_,&local_198,2);
          UDS_UIMessageManager::OpenMsgByStringUi
                    (0x4c2c1,Alert_None_01,
                     (TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> *)local_1d8,
                     (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                      *)0x0);
          DestructItems<FStringFormatArg,int>((FStringFormatArg *)local_1d8._0_8_,local_1d8._8_4_);
          if ((FWeakObjectPtr)local_1d8._0_8_ != (FWeakObjectPtr)0x0) {
            FMemory::Free((void *)local_1d8._0_8_);
          }
          if (local_178.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_178.StringValue.Data.AllocatorInstance.Data);
          }
          if (local_198.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.StringValue.Data.AllocatorInstance.Data);
          }
        }
        local_1e8[1] = 2;
        pUVar8 = (UDS_AbilitySystemComponent *)
                 FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        UDS_AbilitySystemComponent::DeactivateAbilityByTag
                  (pUVar8,(FGameplayTag *)&this->_padding_,local_1e8 + 1);
        return;
      }
      FWeakObjectPtr::Get(&this_00->WeakPtr);
      UDS_NPCLingData::GetData((ulong64)(local_1d8 + 0x10));
      bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_1d8 + 0x10));
      if (!bVar1) goto LAB_14b80417e;
      local_1e8[0] = 6;
      iVar5 = DS_AbilityUtil_PlayerSkill::GetPlayerSkillLevel_SourceEntity
                        ((ulong64 *)&this->_padding_,local_1e8);
      pUVar9 = (UDS_NPCLingData *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_1d8 + 0x10));
      iVar6 = UDS_NPCLingData::GetPlayerSkillLevel(pUVar9);
      if (iVar5 < iVar6) goto LAB_14b80417e;
      bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
      if (bVar1) {
        FWeakObjectPtr::Get(&this_00->WeakPtr);
        UDS_NPCLingData::GetData((ulong64)(local_1d8 + 0x10));
        bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_1d8 + 0x10));
        if (bVar1) {
          pUVar9 = (UDS_NPCLingData *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_1d8 + 0x10));
          iVar5 = UDS_NPCLingData::GetPlayerSkillLevel(pUVar9);
          pUVar9 = (UDS_NPCLingData *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_1d8 + 0x10));
          EVar3 = UDS_NPCLingData::GetPlayerSkillGrade(pUVar9);
          local_1e8[0] = FDS_PlayerSkillNeedItemTableRow::GetReqTicketType(Ling,iVar5,EVar3);
          iVar5 = FDS_PlayerSkillNeedItemTableRow::GetReqTicketCount(Ling,iVar5,EVar3);
          if (local_1e8[0] != None) {
            UDS_TicketData::GetDataByCharEntityID
                      ((ulong64 *)local_1d8,(EDS_TicketType *)&this->_padding_);
            bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_1d8);
            if ((!bVar1) ||
               (pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)local_1d8),
               *(int *)&pUVar10[2].field_0xc < iVar5)) goto LAB_14b80403f;
          }
          bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
          if (bVar1) {
            FWeakObjectPtr::Get(&this_00->WeakPtr);
            UDS_NPCLingData::GetData((ulong64)(local_1d8 + 0x10));
            bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_1d8 + 0x10));
            if (!bVar1) goto LAB_14b803efc;
            pUVar9 = (UDS_NPCLingData *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_1d8 + 0x10));
            iVar5 = UDS_NPCLingData::GetPlayerSkillLevel(pUVar9);
            pUVar9 = (UDS_NPCLingData *)FWeakObjectPtr::Get((FWeakObjectPtr *)(local_1d8 + 0x10));
            EVar3 = UDS_NPCLingData::GetPlayerSkillGrade(pUVar9);
            iVar6 = FDS_PlayerSkillNeedItemTableRow::GetReqItemTID(Ling,iVar5,EVar3);
            iVar5 = FDS_PlayerSkillNeedItemTableRow::GetReqItemCount(Ling,iVar5,EVar3);
            if (((0 < iVar6) && (0 < iVar5)) &&
               (iVar6 = DS_ItemDataUtil::GetTotalStackCountByItemTID(PlayerNormal,iVar6),
               iVar6 < iVar5)) goto LAB_14b803efc;
            bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
            if (bVar1) {
              FWeakObjectPtr::Get(&this_00->WeakPtr);
              UDS_NPCLingData::GetData((ulong64)(local_1d8 + 0x10));
              bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_1d8 + 0x10));
              if (bVar1) {
                local_1d8._0_8_ = OnInteractionStart;
                local_1d8._8_4_ = 0;
                local_1b8.Data._8_8_ = (ulonglong)(uint)local_1d8._12_4_ << 0x20;
                local_1b8.Data.AllocatorInstance.Data =
                     (FScriptContainerElement *)OnInteractionStart;
                pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_1d8 + 0x10));
                TMulticastDelegateRegistration<void___cdecl(unsigned___int64,float),FDefaultDelegateUserPolicy>
                ::AddUObject<UDS_InteractionAbility_NPCLing>
                          ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64,float),FDefaultDelegateUserPolicy>
                            *)&pUVar10[2].field_0x8,(UDS_InteractionAbility_NPCLing *)local_1d8,
                           (pmf_9087f476 *)this);
                local_1d8._8_4_ = 0;
                local_1d8._0_8_ = OnInteractionCancel;
                local_1b8.Data._8_8_ = (ulonglong)(uint)local_1d8._12_4_ << 0x20;
                local_1b8.Data.AllocatorInstance.Data =
                     (FScriptContainerElement *)OnInteractionCancel;
                pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_1d8 + 0x10));
                TMulticastDelegateRegistration<void___cdecl(unsigned___int64,int),FDefaultDelegateUserPolicy>
                ::AddUObject<UDS_InteractionAbility_NPCLing>
                          ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64,int),FDefaultDelegateUserPolicy>
                            *)(pUVar10 + 3),(UDS_InteractionAbility_NPCLing *)local_1d8,
                           (pmf_57e44489 *)this);
                local_1d8._8_4_ = 0;
                local_1d8._0_8_ = OnInteractionComplete;
                local_1b8.Data._8_8_ = (ulonglong)(uint)local_1d8._12_4_ << 0x20;
                local_1b8.Data.AllocatorInstance.Data =
                     (FScriptContainerElement *)OnInteractionComplete;
                pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_1d8 + 0x10));
                TMulticastDelegateRegistration<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
                ::AddUObject<UDS_InteractionAbility_NPCLing>
                          ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
                            *)&pUVar10[3].field_0x20,(UDS_InteractionAbility_NPCLing *)local_1d8,
                           (pmf_393aeb31 *)this);
              }
              else {
                pUVar7 = UDS_LogManager::GetInst();
                if (pUVar7 != (UDS_LogManager *)0x0) {
                  pUVar7 = UDS_LogManager::GetInst();
                  FWeakObjectPtr::Get(&this_00->WeakPtr);
                  local_158._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_158,"UDS_InteractionAbility_NPCLing::BindDelegate",0x2c,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar7,1,Warning,local_158.Ptr,0xe0,L"npcLingData is nullptr. (%llu)");
                  if ((void *)local_158._padding_ != (void *)0x0) {
                    FMemory::Free((void *)local_158._padding_);
                  }
                }
              }
            }
            bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
            if (bVar1) {
              pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
              pFVar11 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar10[2].field_0x8);
              if (pFVar11 != (FDS_EntityBase *)0x0) {
                pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
                pUVar10[2].field_0x18 = 1;
                pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
                iVar4 = *(int *)&pUVar10[2].field_0x10;
                pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
                FDS_NpcLingService::RequestLingSkillStart(*(ulong64 *)&pUVar10[2].field_0x8,iVar4);
                return;
              }
            }
          }
          else {
LAB_14b803efc:
            iVar5 = FDS_PlayerSkillNeedItemTableRow::GetReqItemTID(Ling,iVar4,EVar2);
            iVar4 = FDS_PlayerSkillNeedItemTableRow::GetReqItemCount(Ling,iVar4,EVar2);
            pFVar12 = DS_ItemDataUtil::GetItemNameByTID(&local_1b8,iVar5);
            FStringFormatArg::FStringFormatArg(&local_198,pFVar12);
            FStringFormatArg::FStringFormatArg(&local_178,iVar4);
            local_1d8._8_4_ = 2;
            local_1d8._0_4_ = 0;
            local_1d8._4_4_ = 0;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,2,0,(ForAnyElementType *)local_1d8,2,(int *)(local_1d8 + 0xc));
            ConstructItems<FStringFormatArg,FStringFormatArg,int>
                      ((void *)local_1d8._0_8_,&local_198,2);
            UDS_UIMessageManager::OpenMsgByStringUi
                      (0x1d8af,Alert_None_01,
                       (TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> *)local_1d8,
                       (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                        *)0x0);
            DestructItems<FStringFormatArg,int>((FStringFormatArg *)local_1d8._0_8_,local_1d8._8_4_)
            ;
            if ((FWeakObjectPtr)local_1d8._0_8_ != (FWeakObjectPtr)0x0) {
              FMemory::Free((void *)local_1d8._0_8_);
            }
            if (local_178.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_178.StringValue.Data.AllocatorInstance.Data);
            }
            if (local_198.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_198.StringValue.Data.AllocatorInstance.Data);
            }
          }
          local_1e8[0] = Cancel;
          pUVar8 = (UDS_AbilitySystemComponent *)
                   FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          pEVar13 = local_1e8;
          goto LAB_14b804001;
        }
      }
LAB_14b80403f:
      local_1e8[0] = FDS_PlayerSkillNeedItemTableRow::GetReqTicketType(Ling,iVar4,EVar2);
      iVar4 = FDS_PlayerSkillNeedItemTableRow::GetReqTicketCount(Ling,iVar4,EVar2);
      UDS_TicketData::GetDataByCharEntityID((ulong64 *)local_1d8,(EDS_TicketType *)&this->_padding_)
      ;
      bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)local_1d8);
      if (bVar1) {
        this_01 = (UDS_TicketData *)FWeakObjectPtr::Get((FWeakObjectPtr *)local_1d8);
        pFVar12 = UDS_TicketData::GetTicketName(this_01,&local_1b8);
        FStringFormatArg::FStringFormatArg(&local_198,pFVar12);
        FStringFormatArg::FStringFormatArg(&local_178,iVar4);
        local_1c0 = 2;
        local_1d8._16_8_ = (FStringFormatArg *)0x0;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,2,0,(ForAnyElementType *)(local_1d8 + 0x10),2,&local_1bc);
        ConstructItems<FStringFormatArg,FStringFormatArg,int>((void *)local_1d8._16_8_,&local_198,2)
        ;
        UDS_UIMessageManager::OpenMsgByStringUi
                  (0x1d8af,Alert_None_01,
                   (TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> *)(local_1d8 + 0x10),
                   (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                    *)0x0);
        DestructItems<FStringFormatArg,int>((FStringFormatArg *)local_1d8._16_8_,local_1c0);
        if ((FStringFormatArg *)local_1d8._16_8_ != (FStringFormatArg *)0x0) {
          FMemory::Free((void *)local_1d8._16_8_);
        }
        if (local_178.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_178.StringValue.Data.AllocatorInstance.Data);
        }
        if (local_198.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.StringValue.Data.AllocatorInstance.Data);
        }
      }
      local_1e8[1] = 2;
      pUVar8 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_)
      ;
      pEVar13 = local_1e8 + 1;
LAB_14b804001:
      UDS_AbilitySystemComponent::DeactivateAbilityByTag
                (pUVar8,(FGameplayTag *)&this->_padding_,pEVar13);
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) goto LAB_14b803a79;
    pUVar7 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_InteractionAbility_NPCLing::OnPostActivateAbility",0x35,Yes);
    pwVar15 = L"npcLingData is nullptr.";
    uVar14 = 0x46;
  }
  else {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) goto LAB_14b803a79;
    pUVar7 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_InteractionAbility_NPCLing::OnPostActivateAbility",0x35,Yes);
    pwVar15 = L"InteractionAbilityData is nullptr.";
    uVar14 = 0x3e;
  }
  UDS_LogManager::PrintLog(pUVar7,1,Warning,local_158.Ptr,uVar14,pwVar15);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
LAB_14b803a79:
  local_1e8[0] = Cancel;
  pUVar8 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (pUVar8,(FGameplayTag *)&this->_padding_,local_1e8);
  return;
}

// SendLingCancelRequest @ 14b810bc0

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
UDS_InteractionAbility_NPCLing::SendLingCancelRequest(UDS_InteractionAbility_NPCLing *this)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_NPCLing,FWeakObjectPtr> *this_00;
  bool bVar1;
  UObject *pUVar2;
  FDS_EntityBase *pFVar3;
  
  this_00 = &this->InteractionAbilityData;
  bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    pFVar3 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar2[2].field_0x8);
    if (pFVar3 != (FDS_EntityBase *)0x0) {
      pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      pUVar2[2].field_0x18 = 0;
      pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      FDS_NpcLingService::RequestLingSkillCancel(*(ulong64 *)&pUVar2[2].field_0x8);
      return true;
    }
  }
  return false;
}

// SendLingUseRequest @ 14b810c30

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
UDS_InteractionAbility_NPCLing::SendLingUseRequest(UDS_InteractionAbility_NPCLing *this)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_NPCLing,FWeakObjectPtr> *this_00;
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  FDS_EntityBase *pFVar4;
  
  this_00 = &this->InteractionAbilityData;
  bVar2 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    pFVar4 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar3[2].field_0x8);
    if (pFVar4 != (FDS_EntityBase *)0x0) {
      pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      pUVar3[2].field_0x18 = 1;
      pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      iVar1 = *(int *)&pUVar3[2].field_0x10;
      pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      FDS_NpcLingService::RequestLingSkillStart(*(ulong64 *)&pUVar3[2].field_0x8,iVar1);
      return true;
    }
  }
  return false;
}

// TryActivate @ 14b8145d0

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
UDS_InteractionAbility_NPCLing::TryActivate(ulong64 *param_1,ulong64 *param_2,int param_3)

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
  if ((*param_1 == 0) || (*param_2 == 0)) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_NPCLing::TryActivate",0x2b,Yes);
    pwVar5 = L"Invalid parameter.";
    uVar4 = 0xbe;
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
                (&local_138,"UDS_InteractionAbility_NPCLing::TryActivate",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0xc5,L"sourceEntity is nullptr. (%llu)");
      goto LAB_14b8147c1;
    }
    local_158[0] = Interaction_NPCLing;
    UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_NPCLing>
              ((ulong64 *)&local_150,(EDS_AbilityTagType *)param_1);
    bVar1 = FWeakObjectPtr::IsValid(&local_150);
    if (bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&local_150);
      *(ulong64 *)&pUVar3[2].field_0x8 = *param_2;
      pUVar3 = FWeakObjectPtr::Get(&local_150);
      local_148[0] = 0;
      local_158[0] = Interaction_NPCLing;
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
              (&local_138,"UDS_InteractionAbility_NPCLing::TryActivate",0x2b,Yes);
    pwVar5 = L"abilityData is nullptr.";
    uVar4 = 0xcc;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
LAB_14b8147c1:
  if ((FDS_EntityBase *)local_138._padding_ != (FDS_EntityBase *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// UnbindDelegate @ 14b817020

void __thiscall UDS_InteractionAbility_NPCLing::UnbindDelegate(UDS_InteractionAbility_NPCLing *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res8;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->InteractionAbilityData).WeakPtr);
  if (bVar1) {
    FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    UDS_NPCLingData::GetData((ulong64)&local_res8);
    bVar1 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&local_res8);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[2].field_0x8,this);
      pUVar2 = FWeakObjectPtr::Get(&local_res8);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar2 + 3),this);
      pUVar2 = FWeakObjectPtr::Get(&local_res8);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[3].field_0x20,this);
    }
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 26

// StaticClass @ 14b4bbab0

UClass * __cdecl UDS_InteractionAbility_StuffOpenLocks::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbility_StuffOpenLocks.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbility_StuffOpenLocks",
               &Z_Registration_Info_UClass_UDS_InteractionAbility_StuffOpenLocks.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbility_StuffOpenLocks,0x168,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbility_StuffOpenLocks>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbility_StuffOpenLocks>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbility_StuffOpenLocks.InnerSingleton;
}

// UDS_InteractionAbility_StuffOpenLocks @ 14b4c1ab0

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

UDS_InteractionAbility_StuffOpenLocks * __thiscall
UDS_InteractionAbility_StuffOpenLocks::UDS_InteractionAbility_StuffOpenLocks
          (UDS_InteractionAbility_StuffOpenLocks *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->InteractionAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->InteractionAbilityData).WeakPtr,(FObjectPtr)local_res8);
  this->IsNeedSendPacketOpenlockCancel = false;
  return this;
}

// UDS_InteractionAbility_StuffOpenLocks @ 14b4c1b10

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

UDS_InteractionAbility_StuffOpenLocks * __thiscall
UDS_InteractionAbility_StuffOpenLocks::UDS_InteractionAbility_StuffOpenLocks
          (UDS_InteractionAbility_StuffOpenLocks *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->InteractionAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->InteractionAbilityData).WeakPtr,(FObjectPtr)local_res8);
  this->IsNeedSendPacketOpenlockCancel = false;
  return this;
}

// ~UDS_InteractionAbility_StuffOpenLocks @ 14b4c2510

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
UDS_InteractionAbility_StuffOpenLocks::~UDS_InteractionAbility_StuffOpenLocks
          (UDS_InteractionAbility_StuffOpenLocks *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetDefaultInputPolicy @ 14b4c3ad0

EDS_AbilityInputPolicy __thiscall
UDS_InteractionAbility_StuffOpenLocks::GetDefaultInputPolicy
          (UDS_InteractionAbility_StuffOpenLocks *this)

{
  return EndIfInput;
}

// GetPrivateStaticClass @ 14b4c4f60

UClass * __cdecl UDS_InteractionAbility_StuffOpenLocks::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbility_StuffOpenLocks.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbility_StuffOpenLocks",
               &Z_Registration_Info_UClass_UDS_InteractionAbility_StuffOpenLocks.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbility_StuffOpenLocks,0x168,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbility_StuffOpenLocks>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbility_StuffOpenLocks>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbility_StuffOpenLocks.InnerSingleton;
}

// ShouldNotifyChangedCharState @ 14b4c5470

bool __thiscall
UDS_InteractionAbility_StuffOpenLocks::ShouldNotifyChangedCharState
          (UDS_InteractionAbility_StuffOpenLocks *this)

{
  return true;
}

// StaticRegisterNativesUDS_InteractionAbility_StuffOpenLocks @ 14b4c56f0

void __cdecl
UDS_InteractionAbility_StuffOpenLocks::StaticRegisterNativesUDS_InteractionAbility_StuffOpenLocks
          (void)

{
  return;
}

// BindDelegate @ 14b7dabf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_StuffOpenLocks::BindDelegate(UDS_InteractionAbility_StuffOpenLocks *this)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_StuffOpenLocks,FWeakObjectPtr> *this_00;
  bool bVar1;
  UObject *pUVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_1b8 [32];
  undefined1 local_178 [320];
  void *local_38;
  wchar_t *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  this_00 = &this->InteractionAbilityData;
  bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (!bVar1) {
    return;
  }
  pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  UDS_StuffData::GetData((ulong64)(local_178 + 0x18),*(ulong64 *)&pUVar2[2].field_0x8,false);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(local_178 + 0x18));
  if (bVar1) {
    local_178._8_8_ = local_178._8_8_ & 0xffffffff00000000;
    local_178._0_8_ = OnInteractionStart;
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_178 + 0x18));
    TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_InteractionAbility_StuffOpenLocks>
              ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar2[8].field_0x8,(UDS_InteractionAbility_StuffOpenLocks *)(local_178 + 0x10),
               (pmf_9dc1a9a0 *)this);
    local_178._8_8_ = local_178._8_8_ & 0xffffffff00000000;
    local_178._0_8_ = OnInteractionCancel;
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_178 + 0x18));
    TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_InteractionAbility_StuffOpenLocks>
              ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                *)(pUVar2 + 9),(UDS_InteractionAbility_StuffOpenLocks *)(local_178 + 0x10),
               (pmf_9dc1a9a0 *)this);
    local_178._8_8_ = local_178._8_8_ & 0xffffffff00000000;
    local_178._0_8_ = OnInteractionComplete;
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_178 + 0x18));
    TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_InteractionAbility_StuffOpenLocks>
              ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>
                *)&pUVar2[9].field_0x20,(UDS_InteractionAbility_StuffOpenLocks *)(local_178 + 0x10),
               (pmf_9523cdc2 *)this);
  }
  FWeakObjectPtr::Get(&this_00->WeakPtr);
  UDS_StuffGatherData::GetData((ulong64)(local_178 + 0x20));
  bVar1 = TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr> *)(local_178 + 0x20),
                     (void *)0x0);
  if (bVar1) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    FWeakObjectPtr::Get(&this_00->WeakPtr);
    local_38 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_178 + 0x40),
               "UDS_InteractionAbility_StuffOpenLocks::BindDelegate",0x33,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_30,0xe1,L"stuffGatherData is nullptr. (%llu)");
  }
  else {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_178 + 0x20));
    if (pUVar2[0xe].field_0x8 != '\x01') {
      return;
    }
    UDS_PlayerData::GetMainPlayerData();
    bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)(local_178 + 0x10),
                       (void *)0x0);
    if (!bVar1) {
      local_178._8_8_ = local_178._8_8_ & 0xffffffff00000000;
      local_178._0_8_ = OnChangedPlayerSkillTargetInfo;
      local_178._48_8_ = OnChangedPlayerSkillTargetInfo;
      local_178._56_8_ = local_178._8_8_;
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_178 + 0x10));
      TMulticastDelegateRegistration<void___cdecl(enum_EDS_PlayerSkillType_const_&,FDS_PlayerSkillTargetInfo_const_&,enum_EDS_PlayerSkillTargetInfoChangeType_const_&),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_InteractionAbility_StuffOpenLocks>
                (&pUVar2[0xf].field_0x10,(UDS_InteractionAbility_StuffOpenLocks *)local_178,
                 (pmf_23604564 *)this);
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_38 = (void *)0x0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_178 + 0x40),
               "UDS_InteractionAbility_StuffOpenLocks::BindDelegate",0x33,Yes);
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_30,0xea,L"playerData is nullptr.");
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}

// ClearVariables @ 14b7dc8e0

void __thiscall
UDS_InteractionAbility_StuffOpenLocks::ClearVariables(UDS_InteractionAbility_StuffOpenLocks *this)

{
  this->IsNeedSendPacketOpenlockCancel = false;
  return;
}

// IsEnoughItem @ 14b7f2d10

bool __thiscall
UDS_InteractionAbility_StuffOpenLocks::IsEnoughItem(UDS_InteractionAbility_StuffOpenLocks *this)

{
  bool bVar1;
  EDS_GradeType EVar2;
  int iVar3;
  int iVar4;
  UDS_StuffGatherData *pUVar5;
  EDS_PlayerSkillType local_res8 [8];
  FWeakObjectPtr local_res10;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->InteractionAbilityData).WeakPtr);
  if (bVar1) {
    FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    UDS_StuffGatherData::GetData((ulong64)&local_res10);
    bVar1 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar1) {
      pUVar5 = (UDS_StuffGatherData *)FWeakObjectPtr::Get(&local_res10);
      local_res8[0] = OpenLocks;
      iVar3 = UDS_StuffGatherData::GetPlayerSkillLevel(pUVar5,local_res8);
      pUVar5 = (UDS_StuffGatherData *)FWeakObjectPtr::Get(&local_res10);
      local_res8[0] = OpenLocks;
      EVar2 = UDS_StuffGatherData::GetPlayerSkillGrade(pUVar5,local_res8);
      iVar4 = FDS_PlayerSkillNeedItemTableRow::GetReqItemTID(OpenLocks,iVar3,EVar2);
      iVar3 = FDS_PlayerSkillNeedItemTableRow::GetReqItemCount(OpenLocks,iVar3,EVar2);
      if ((0 < iVar4) && (0 < iVar3)) {
        iVar4 = DS_ItemDataUtil::GetTotalStackCountByItemTID(PlayerNormal,iVar4);
        return iVar3 <= iVar4;
      }
      return true;
    }
  }
  return false;
}

// IsEnoughPlayerSkillLevel @ 14b7f2ea0

bool __thiscall
UDS_InteractionAbility_StuffOpenLocks::IsEnoughPlayerSkillLevel
          (UDS_InteractionAbility_StuffOpenLocks *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  UDS_StuffGatherData *this_00;
  EDS_PlayerSkillType local_res8 [8];
  FWeakObjectPtr local_res10;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->InteractionAbilityData).WeakPtr);
  if (bVar1) {
    FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    UDS_StuffGatherData::GetData((ulong64)&local_res10);
    bVar1 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar1) {
      local_res8[0] = OpenLocks;
      iVar2 = DS_AbilityUtil_PlayerSkill::GetPlayerSkillLevel_SourceEntity
                        ((ulong64 *)&this->_padding_,local_res8);
      this_00 = (UDS_StuffGatherData *)FWeakObjectPtr::Get(&local_res10);
      local_res8[0] = OpenLocks;
      iVar3 = UDS_StuffGatherData::GetPlayerSkillLevel(this_00,local_res8);
      return iVar3 <= iVar2;
    }
  }
  return false;
}

// IsEnoughTicket @ 14b7f3040

bool __thiscall
UDS_InteractionAbility_StuffOpenLocks::IsEnoughTicket(UDS_InteractionAbility_StuffOpenLocks *this)

{
  bool bVar1;
  EDS_GradeType EVar2;
  EDS_TicketType EVar3;
  int iVar4;
  UDS_StuffGatherData *pUVar5;
  UObject *pUVar6;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->InteractionAbilityData).WeakPtr);
  if (bVar1) {
    FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    UDS_StuffGatherData::GetData((ulong64)local_res18);
    bVar1 = FWeakObjectPtr::IsValid(local_res18);
    if (bVar1) {
      pUVar5 = (UDS_StuffGatherData *)FWeakObjectPtr::Get(local_res18);
      local_res10.ObjectIndex._0_1_ = 4;
      iVar4 = UDS_StuffGatherData::GetPlayerSkillLevel(pUVar5,(EDS_PlayerSkillType *)&local_res10);
      pUVar5 = (UDS_StuffGatherData *)FWeakObjectPtr::Get(local_res18);
      local_res10.ObjectIndex._0_1_ = 4;
      EVar2 = UDS_StuffGatherData::GetPlayerSkillGrade(pUVar5,(EDS_PlayerSkillType *)&local_res10);
      EVar3 = FDS_PlayerSkillNeedItemTableRow::GetReqTicketType(OpenLocks,iVar4,EVar2);
      iVar4 = FDS_PlayerSkillNeedItemTableRow::GetReqTicketCount(OpenLocks,iVar4,EVar2);
      if (EVar3 == None) {
        return true;
      }
      UDS_TicketData::GetDataByCharEntityID
                ((ulong64 *)&local_res10,(EDS_TicketType *)&this->_padding_);
      bVar1 = FWeakObjectPtr::IsValid(&local_res10);
      if (bVar1) {
        pUVar6 = FWeakObjectPtr::Get(&local_res10);
        return iVar4 <= *(int *)&pUVar6[2].field_0xc;
      }
    }
  }
  return false;
}

// OnAbilityRetryActivate @ 14b7f4870

void __thiscall
UDS_InteractionAbility_StuffOpenLocks::OnAbilityRetryActivate
          (UDS_InteractionAbility_StuffOpenLocks *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_5984795201921613683>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_InteractionAbility_StuffOpenLocks.cpp"
                     ,0x8d,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnCanActivate @ 14b7f6ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_InteractionAbility_StuffOpenLocks::OnCanActivate(UDS_InteractionAbility_StuffOpenLocks *this)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_StuffOpenLocks,FWeakObjectPtr> *this_00;
  int iVar1;
  bool bVar2;
  TWeakObjectPtr<UDS_InteractionAbilityData_StuffOpenLocks,FWeakObjectPtr> TVar3;
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
      TVar3 = UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_StuffOpenLocks>
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
                  (&local_138,"UDS_InteractionAbility_StuffOpenLocks::OnCanActivate",0x34,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_138.Ptr,0x26,L"InteractionAbilityData is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
  }
  return false;
}

// OnChangedCharState @ 14b7f94a0

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
UDS_InteractionAbility_StuffOpenLocks::OnChangedCharState
          (UDS_InteractionAbility_StuffOpenLocks *this,
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
                (&local_138,"UDS_InteractionAbility_StuffOpenLocks::OnChangedCharState",0x39,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x9e,L"InCharStateData is nullptr.");
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
    bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffOpenLocks,FWeakObjectPtr>::UEOpEquals
                      (&this->InteractionAbilityData,(void *)0x0);
    if (bVar2) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_InteractionAbility_StuffOpenLocks::OnChangedCharState",0x39,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_138.Ptr,0xa5,L"InteractionAbilityData is nullptr.");
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

// OnChangedPlayerSkillTargetInfo @ 14b7fa3b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_StuffOpenLocks::OnChangedPlayerSkillTargetInfo
          (UDS_InteractionAbility_StuffOpenLocks *this,EDS_PlayerSkillType *param_1,
          FDS_PlayerSkillTargetInfo *param_2,EDS_PlayerSkillTargetInfoChangeType *param_3)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_StuffGatherData *this_00;
  UDS_AbilitySystemComponent *this_01;
  undefined1 auStackY_1a8 [32];
  EDS_AbilityDeactivateType local_168 [8];
  FWeakObjectPtr local_160;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffOpenLocks,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) goto LAB_14b7fa56e;
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_StuffOpenLocks::OnChangedPlayerSkillTargetInfo",
               0x45,Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Warning,local_138.Ptr,0x16f,L"InteractionAbilityData is nullptr.");
  }
  else {
    if (*param_1 != Detection) {
      return;
    }
    FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    UDS_StuffGatherData::GetData((ulong64)&local_160);
    bVar1 = TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr> *)&local_160,(void *)0x0)
    ;
    if (!bVar1) {
      this_00 = (UDS_StuffGatherData *)FWeakObjectPtr::Get(&local_160);
      bVar1 = UDS_StuffGatherData::IsDetected(this_00);
      if (bVar1) {
        return;
      }
      local_158._0_8_ = 0;
      local_158._8_8_ = 0;
      local_158._16_4_ = 0;
      UDS_UIMessageManager::OpenMsgByStringUi(0x4ce7a,Alert_System_01,&local_158);
      goto LAB_14b7fa56e;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) goto LAB_14b7fa56e;
    pUVar2 = UDS_LogManager::GetInst();
    FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_StuffOpenLocks::OnChangedPlayerSkillTargetInfo",
               0x45,Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Warning,local_138.Ptr,0x17d,L"stuffGatherData is nullptr. (%llu)");
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
LAB_14b7fa56e:
  local_168[0] = Cancel;
  this_01 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (this_01,(FGameplayTag *)&this->_padding_,local_168);
  return;
}

// OnDeactivateAbility @ 14b7fc920

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
UDS_InteractionAbility_StuffOpenLocks::OnDeactivateAbility
          (UDS_InteractionAbility_StuffOpenLocks *this,bool *param_1)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_StuffOpenLocks,FWeakObjectPtr> *this_00;
  bool bVar1;
  UObject *pUVar2;
  FDS_EntityBase *pFVar3;
  FGameplayTag *pFVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_198 [32];
  EDS_StateTagType local_158 [8];
  FWeakObjectPtr local_150;
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  this_00 = &this->InteractionAbilityData;
  bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    pFVar3 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar2[2].field_0x8);
    if ((pFVar3 != (FDS_EntityBase *)0x0) && (this->IsNeedSendPacketOpenlockCancel != false)) {
      pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      bVar1 = FDS_StuffService::SendOpenLockCancelRequest((ulong64 *)&pUVar2[2].field_0x8);
      if (bVar1) {
        this->IsNeedSendPacketOpenlockCancel = false;
      }
    }
  }
  local_158[0] = Interaction_OpenLocks;
  pFVar4 = FDS_GameplayTags::GetStateTag(local_158);
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar4);
  bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    UDS_StuffData::GetData((ulong64)&local_150,*(ulong64 *)&pUVar2[2].field_0x8,false);
    bVar1 = FWeakObjectPtr::IsValid(&local_150);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&local_150);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[8].field_0x8,this);
      pUVar2 = FWeakObjectPtr::Get(&local_150);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar2 + 9),this);
      pUVar2 = FWeakObjectPtr::Get(&local_150);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[9].field_0x20,this);
    }
    FWeakObjectPtr::Get(&this_00->WeakPtr);
    UDS_StuffGatherData::GetData((ulong64)&local_148);
    bVar1 = TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr> *)&local_148,(void *)0x0)
    ;
    if (bVar1) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        FWeakObjectPtr::Get(&this_00->WeakPtr);
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_InteractionAbility_StuffOpenLocks::UnbindDelegate",0x35,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_138.Ptr,0x105,L"stuffGatherData is nullptr. (%llu)");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      pUVar2 = FWeakObjectPtr::Get(&local_148);
      if (pUVar2[0xe].field_0x8 == '\x01') {
        UDS_PlayerData::GetMainPlayerData();
        bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)&local_140,(void *)0x0);
        if (!bVar1) {
          pUVar2 = FWeakObjectPtr::Get(&local_140);
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[0xf].field_0x10,
                     this);
        }
      }
    }
  }
  return;
}

// OnInteractionCancel @ 14b7fe240

void __thiscall
UDS_InteractionAbility_StuffOpenLocks::OnInteractionCancel
          (UDS_InteractionAbility_StuffOpenLocks *this,ulong64 *param_1)

{
  bool bVar1;
  UDS_AbilitySystemComponent *this_00;
  EDS_AbilityDeactivateType local_res8 [8];
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_28;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->InteractionAbilityData).WeakPtr);
  if (bVar1) {
    this->IsNeedSendPacketOpenlockCancel = false;
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    local_28._16_4_ = 0;
    UDS_UIMessageManager::OpenMsgByStringUi(0x1d8b3,Alert_None_01,&local_28);
    local_res8[0] = Success;
  }
  else {
    local_res8[0] = Cancel;
  }
  this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (this_00,(FGameplayTag *)&this->_padding_,local_res8);
  return;
}

// OnInteractionComplete @ 14b7fe8a0

void __thiscall
UDS_InteractionAbility_StuffOpenLocks::OnInteractionComplete
          (UDS_InteractionAbility_StuffOpenLocks *this,ulong64 *param_1,bool *param_2,bool *param_3)

{
  bool bVar1;
  UDS_AbilitySystemComponent *this_00;
  EDS_AbilityDeactivateType local_res8 [8];
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->InteractionAbilityData).WeakPtr);
  if (bVar1) {
    this->IsNeedSendPacketOpenlockCancel = false;
    local_res8[0] = Success;
  }
  else {
    local_res8[0] = Cancel;
  }
  this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (this_00,(FGameplayTag *)&this->_padding_,local_res8);
  return;
}

// OnInteractionStart @ 14b7fee20

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
UDS_InteractionAbility_StuffOpenLocks::OnInteractionStart
          (UDS_InteractionAbility_StuffOpenLocks *this,ulong64 *param_1)

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
  local_res8[0] = 0x50;
  pFVar2 = FDS_GameplayTags::GetStateTag(local_res8);
  UDS_GameplayAbility::AddTagToASC((UDS_GameplayAbility *)this,pFVar2);
  return;
}

// OnPostActivateAbility @ 14b805220

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
UDS_InteractionAbility_StuffOpenLocks::OnPostActivateAbility
          (UDS_InteractionAbility_StuffOpenLocks *this)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_StuffOpenLocks,FWeakObjectPtr> *this_00;
  bool bVar1;
  EDS_GradeType EVar2;
  EDS_GradeType EVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  UDS_LogManager *pUVar7;
  UDS_AbilitySystemComponent *pUVar8;
  UDS_StuffGatherData *pUVar9;
  UObject *pUVar10;
  FDS_EntityBase *pFVar11;
  FString *pFVar12;
  UDS_TicketData *this_01;
  FDS_PlayerSkillBaseTableRow *this_02;
  EDS_AbilityDeactivateType *pEVar13;
  undefined1 auStackY_218 [32];
  uint uVar14;
  wchar_t *pwVar15;
  EDS_AbilityDeactivateType local_1d8;
  EDS_AbilityDeactivateType local_1d7 [7];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1d0;
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1c0;
  FWeakObjectPtr local_1b0;
  FStringFormatArg local_1a8;
  FStringFormatArg local_188;
  FString local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_218;
  this_00 = &this->InteractionAbilityData;
  bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
  if (bVar1) {
    FWeakObjectPtr::Get(&this_00->WeakPtr);
    UDS_StuffGatherData::GetData((ulong64)&local_1b0);
    bVar1 = FWeakObjectPtr::IsValid(&local_1b0);
    if (bVar1) {
      pUVar9 = (UDS_StuffGatherData *)FWeakObjectPtr::Get(&local_1b0);
      local_1d8 = 4;
      iVar4 = UDS_StuffGatherData::GetPlayerSkillLevel(pUVar9,&local_1d8);
      pUVar9 = (UDS_StuffGatherData *)FWeakObjectPtr::Get(&local_1b0);
      local_1d8 = 4;
      EVar2 = UDS_StuffGatherData::GetPlayerSkillGrade(pUVar9,&local_1d8);
      bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
      if (!bVar1) {
LAB_14b8058ba:
        this_02 = FDS_PlayerSkillBaseTableRow::GetRef(4,true);
        bVar1 = FDS_PlayerSkillBaseTableRow::IsValid(this_02);
        if (bVar1) {
          pFVar12 = (FString *)
                    (**(code **)((this_02->ID_SkillName)._padding_ + 8))(&this_02->ID_SkillName);
          pFVar12 = ::FString::FString(&local_168,pFVar12);
          FStringFormatArg::FStringFormatArg(&local_1a8,pFVar12);
          FStringFormatArg::FStringFormatArg(&local_188,iVar4);
          local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1d0.ArrayNum = 2;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,2,0,&local_1d0.AllocatorInstance,2,&local_1d0.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_1d0.AllocatorInstance.Data,&local_1a8,2);
          UDS_UIMessageManager::OpenMsgByStringUi
                    (0x4c2c1,Alert_None_01,&local_1d0,
                     (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                      *)0x0);
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_1d0.AllocatorInstance.Data,local_1d0.ArrayNum);
          if ((FStringFormatArg *)local_1d0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
            FMemory::Free(local_1d0.AllocatorInstance.Data);
          }
          if (local_188.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_188.StringValue.Data.AllocatorInstance.Data);
          }
          if (local_1a8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.StringValue.Data.AllocatorInstance.Data);
          }
        }
        local_1d7[0] = Cancel;
        pUVar8 = (UDS_AbilitySystemComponent *)
                 FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        UDS_AbilitySystemComponent::DeactivateAbilityByTag
                  (pUVar8,(FGameplayTag *)&this->_padding_,local_1d7);
        return;
      }
      FWeakObjectPtr::Get(&this_00->WeakPtr);
      UDS_StuffGatherData::GetData((ulong64)&local_1c0);
      bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_1c0);
      if (!bVar1) goto LAB_14b8058ba;
      local_1d8 = 4;
      iVar5 = DS_AbilityUtil_PlayerSkill::GetPlayerSkillLevel_SourceEntity
                        ((ulong64 *)&this->_padding_,&local_1d8);
      pUVar9 = (UDS_StuffGatherData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_1c0);
      local_1d8 = 4;
      iVar6 = UDS_StuffGatherData::GetPlayerSkillLevel(pUVar9,&local_1d8);
      if (iVar5 < iVar6) goto LAB_14b8058ba;
      bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
      if (bVar1) {
        FWeakObjectPtr::Get(&this_00->WeakPtr);
        UDS_StuffGatherData::GetData((ulong64)&local_1c0);
        bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_1c0);
        if (bVar1) {
          pUVar9 = (UDS_StuffGatherData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_1c0);
          local_1d7[0] = 4;
          iVar5 = UDS_StuffGatherData::GetPlayerSkillLevel(pUVar9,local_1d7);
          pUVar9 = (UDS_StuffGatherData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_1c0);
          local_1d7[0] = 4;
          EVar3 = UDS_StuffGatherData::GetPlayerSkillGrade(pUVar9,local_1d7);
          local_1d8 = FDS_PlayerSkillNeedItemTableRow::GetReqTicketType(OpenLocks,iVar5,EVar3);
          iVar5 = FDS_PlayerSkillNeedItemTableRow::GetReqTicketCount(OpenLocks,iVar5,EVar3);
          if (local_1d8 != None) {
            UDS_TicketData::GetDataByCharEntityID
                      ((ulong64 *)&local_1d0,(EDS_TicketType *)&this->_padding_);
            bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_1d0);
            if ((!bVar1) ||
               (pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)&local_1d0),
               *(int *)&pUVar10[2].field_0xc < iVar5)) goto LAB_14b805779;
          }
          bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
          if (bVar1) {
            FWeakObjectPtr::Get(&this_00->WeakPtr);
            UDS_StuffGatherData::GetData((ulong64)&local_1c0);
            bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_1c0);
            if (!bVar1) goto LAB_14b80562d;
            pUVar9 = (UDS_StuffGatherData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_1c0);
            local_1d7[0] = 4;
            iVar5 = UDS_StuffGatherData::GetPlayerSkillLevel(pUVar9,local_1d7);
            pUVar9 = (UDS_StuffGatherData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_1c0);
            local_1d7[0] = 4;
            EVar3 = UDS_StuffGatherData::GetPlayerSkillGrade(pUVar9,local_1d7);
            iVar6 = FDS_PlayerSkillNeedItemTableRow::GetReqItemTID(OpenLocks,iVar5,EVar3);
            iVar5 = FDS_PlayerSkillNeedItemTableRow::GetReqItemCount(OpenLocks,iVar5,EVar3);
            if (((0 < iVar6) && (0 < iVar5)) &&
               (iVar6 = DS_ItemDataUtil::GetTotalStackCountByItemTID(PlayerNormal,iVar6),
               iVar6 < iVar5)) goto LAB_14b80562d;
            BindDelegate(this);
            bVar1 = FWeakObjectPtr::IsValid(&this_00->WeakPtr);
            if (bVar1) {
              pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
              pFVar11 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar10[2].field_0x8);
              if (pFVar11 != (FDS_EntityBase *)0x0) {
                pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
                iVar4 = *(int *)&pUVar10[2].field_0x10;
                pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
                bVar1 = FDS_StuffService::SendOpenLockUseRequest
                                  ((ulong64 *)&pUVar10[2].field_0x8,iVar4);
                if (bVar1) {
                  this->IsNeedSendPacketOpenlockCancel = true;
                  return;
                }
              }
            }
          }
          else {
LAB_14b80562d:
            iVar5 = FDS_PlayerSkillNeedItemTableRow::GetReqItemTID(OpenLocks,iVar4,EVar2);
            iVar4 = FDS_PlayerSkillNeedItemTableRow::GetReqItemCount(OpenLocks,iVar4,EVar2);
            pFVar12 = DS_ItemDataUtil::GetItemNameByTID((FString *)&local_1c0,iVar5);
            FStringFormatArg::FStringFormatArg(&local_1a8,pFVar12);
            FStringFormatArg::FStringFormatArg(&local_188,iVar4);
            local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1d0.ArrayNum = 2;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x20,8,2,0,&local_1d0.AllocatorInstance,2,&local_1d0.ArrayMax);
            ConstructItems<FStringFormatArg,FStringFormatArg,int>
                      (local_1d0.AllocatorInstance.Data,&local_1a8,2);
            UDS_UIMessageManager::OpenMsgByStringUi
                      (0x1d8b0,Alert_None_01,&local_1d0,
                       (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                        *)0x0);
            DestructItems<FStringFormatArg,int>
                      ((FStringFormatArg *)local_1d0.AllocatorInstance.Data,local_1d0.ArrayNum);
            if ((FStringFormatArg *)local_1d0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
              FMemory::Free(local_1d0.AllocatorInstance.Data);
            }
            if (local_188.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_188.StringValue.Data.AllocatorInstance.Data);
            }
            if (local_1a8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
            {
              FMemory::Free(local_1a8.StringValue.Data.AllocatorInstance.Data);
            }
          }
          local_1d7[0] = Cancel;
          pUVar8 = (UDS_AbilitySystemComponent *)
                   FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          pEVar13 = local_1d7;
          goto LAB_14b805735;
        }
      }
LAB_14b805779:
      local_1d7[0] = FDS_PlayerSkillNeedItemTableRow::GetReqTicketType(OpenLocks,iVar4,EVar2);
      iVar4 = FDS_PlayerSkillNeedItemTableRow::GetReqTicketCount(OpenLocks,iVar4,EVar2);
      UDS_TicketData::GetDataByCharEntityID
                ((ulong64 *)&local_1d0,(EDS_TicketType *)&this->_padding_);
      bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_1d0);
      if (bVar1) {
        this_01 = (UDS_TicketData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_1d0);
        pFVar12 = UDS_TicketData::GetTicketName(this_01,&local_168);
        FStringFormatArg::FStringFormatArg(&local_1a8,pFVar12);
        FStringFormatArg::FStringFormatArg(&local_188,iVar4);
        local_1c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1c0.ArrayNum = 2;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,2,0,&local_1c0.AllocatorInstance,2,&local_1c0.ArrayMax);
        ConstructItems<FStringFormatArg,FStringFormatArg,int>
                  (local_1c0.AllocatorInstance.Data,&local_1a8,2);
        UDS_UIMessageManager::OpenMsgByStringUi
                  (0x1d8af,Alert_None_01,&local_1c0,
                   (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                    *)0x0);
        DestructItems<FStringFormatArg,int>
                  ((FStringFormatArg *)local_1c0.AllocatorInstance.Data,local_1c0.ArrayNum);
        if ((FStringFormatArg *)local_1c0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
          FMemory::Free(local_1c0.AllocatorInstance.Data);
        }
        if (local_188.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.StringValue.Data.AllocatorInstance.Data);
        }
        if (local_1a8.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1a8.StringValue.Data.AllocatorInstance.Data);
        }
      }
      local_1d8 = Cancel;
      pUVar8 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_)
      ;
      pEVar13 = &local_1d8;
LAB_14b805735:
      UDS_AbilitySystemComponent::DeactivateAbilityByTag
                (pUVar8,(FGameplayTag *)&this->_padding_,pEVar13);
      return;
    }
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) goto LAB_14b8052d8;
    pUVar7 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_InteractionAbility_StuffOpenLocks::OnPostActivateAbility",0x3c,Yes);
    pwVar15 = L"stuffGatherData is nullptr.";
    uVar14 = 0x47;
  }
  else {
    pUVar7 = UDS_LogManager::GetInst();
    if (pUVar7 == (UDS_LogManager *)0x0) goto LAB_14b8052d8;
    pUVar7 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_InteractionAbility_StuffOpenLocks::OnPostActivateAbility",0x3c,Yes);
    pwVar15 = L"InteractionAbilityData is nullptr.";
    uVar14 = 0x3f;
  }
  UDS_LogManager::PrintLog(pUVar7,1,Warning,local_158.Ptr,uVar14,pwVar15);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
LAB_14b8052d8:
  local_1d8 = Cancel;
  pUVar8 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (pUVar8,(FGameplayTag *)&this->_padding_,&local_1d8);
  return;
}

// SendOpenlockCancelRequest @ 14b810d60

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
UDS_InteractionAbility_StuffOpenLocks::SendOpenlockCancelRequest
          (UDS_InteractionAbility_StuffOpenLocks *this)

{
  bool bVar1;
  UObject *pUVar2;
  FDS_EntityBase *pFVar3;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->InteractionAbilityData).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    pFVar3 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar2[2].field_0x8);
    if ((pFVar3 != (FDS_EntityBase *)0x0) && (this->IsNeedSendPacketOpenlockCancel != false)) {
      pUVar2 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
      bVar1 = FDS_StuffService::SendOpenLockCancelRequest((ulong64 *)&pUVar2[2].field_0x8);
      if (bVar1) {
        this->IsNeedSendPacketOpenlockCancel = false;
        return true;
      }
    }
  }
  return false;
}

// SendOpenlockUseRequest @ 14b810de0

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
UDS_InteractionAbility_StuffOpenLocks::SendOpenlockUseRequest
          (UDS_InteractionAbility_StuffOpenLocks *this)

{
  int iVar1;
  bool bVar2;
  UObject *pUVar3;
  FDS_EntityBase *pFVar4;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->InteractionAbilityData).WeakPtr);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    pFVar4 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar3[2].field_0x8);
    if (pFVar4 != (FDS_EntityBase *)0x0) {
      pUVar3 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
      iVar1 = *(int *)&pUVar3[2].field_0x10;
      pUVar3 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
      bVar2 = FDS_StuffService::SendOpenLockUseRequest((ulong64 *)&pUVar3[2].field_0x8,iVar1);
      if (bVar2) {
        this->IsNeedSendPacketOpenlockCancel = true;
        return true;
      }
    }
  }
  return false;
}

// TryActivate @ 14b8150a0

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
UDS_InteractionAbility_StuffOpenLocks::TryActivate(ulong64 *param_1,ulong64 *param_2,int param_3)

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
              (&local_138,"UDS_InteractionAbility_StuffOpenLocks::TryActivate",0x32,Yes);
    pwVar5 = L"Invalid parameter.";
    uVar4 = 0xb6;
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
                (&local_138,"UDS_InteractionAbility_StuffOpenLocks::TryActivate",0x32,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0xbd,L"sourceEntity is nullptr. (%llu)");
      goto LAB_14b815291;
    }
    local_158[0] = Interaction_StuffOpenLocks;
    UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_StuffOpenLocks>
              ((ulong64 *)&local_150,(EDS_AbilityTagType *)param_1);
    bVar1 = FWeakObjectPtr::IsValid(&local_150);
    if (bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&local_150);
      *(ulong64 *)&pUVar3[2].field_0x8 = *param_2;
      pUVar3 = FWeakObjectPtr::Get(&local_150);
      local_148[0] = 0;
      local_158[0] = Interaction_StuffOpenLocks;
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
              (&local_138,"UDS_InteractionAbility_StuffOpenLocks::TryActivate",0x32,Yes);
    pwVar5 = L"abilityData is nullptr.";
    uVar4 = 0xc4;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
LAB_14b815291:
  if ((FDS_EntityBase *)local_138._padding_ != (FDS_EntityBase *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// UnbindDelegate @ 14b817130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_StuffOpenLocks::UnbindDelegate(UDS_InteractionAbility_StuffOpenLocks *this)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr local_158;
  FWeakObjectPtr local_150;
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar1 = FWeakObjectPtr::IsValid(&(this->InteractionAbilityData).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    UDS_StuffData::GetData((ulong64)&local_158,*(ulong64 *)&pUVar2[2].field_0x8,false);
    bVar1 = FWeakObjectPtr::IsValid(&local_158);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&local_158);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[8].field_0x8,this);
      pUVar2 = FWeakObjectPtr::Get(&local_158);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar2 + 9),this);
      pUVar2 = FWeakObjectPtr::Get(&local_158);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[9].field_0x20,this);
    }
    FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    UDS_StuffGatherData::GetData((ulong64)&local_150);
    bVar1 = TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr> *)&local_150,(void *)0x0)
    ;
    if (bVar1) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_InteractionAbility_StuffOpenLocks::UnbindDelegate",0x35,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_138.Ptr,0x105,L"stuffGatherData is nullptr. (%llu)");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      pUVar2 = FWeakObjectPtr::Get(&local_150);
      if (pUVar2[0xe].field_0x8 == '\x01') {
        UDS_PlayerData::GetMainPlayerData();
        bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)local_148,(void *)0x0);
        if (!bVar1) {
          pUVar2 = FWeakObjectPtr::Get(local_148);
          TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                    ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[0xf].field_0x10,
                     this);
        }
      }
    }
  }
  return;
}


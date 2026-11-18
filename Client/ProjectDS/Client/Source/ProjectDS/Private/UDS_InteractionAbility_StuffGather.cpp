// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// StaticClass @ 14b4bb9b0

UClass * __cdecl UDS_InteractionAbility_StuffGather::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbility_StuffGather.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbility_StuffGather",
               &Z_Registration_Info_UClass_UDS_InteractionAbility_StuffGather.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbility_StuffGather,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbility_StuffGather>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbility_StuffGather>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbility_StuffGather.InnerSingleton;
}

// UDS_InteractionAbility_StuffGather @ 14b4c1a10

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

UDS_InteractionAbility_StuffGather * __thiscall
UDS_InteractionAbility_StuffGather::UDS_InteractionAbility_StuffGather
          (UDS_InteractionAbility_StuffGather *this,FVTableHelper *param_1)

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

// UDS_InteractionAbility_StuffGather @ 14b4c1a60

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

UDS_InteractionAbility_StuffGather * __thiscall
UDS_InteractionAbility_StuffGather::UDS_InteractionAbility_StuffGather
          (UDS_InteractionAbility_StuffGather *this,FObjectInitializer *param_1)

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

// ~UDS_InteractionAbility_StuffGather @ 14b4c24f0

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
UDS_InteractionAbility_StuffGather::~UDS_InteractionAbility_StuffGather
          (UDS_InteractionAbility_StuffGather *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetDefaultInputPolicy @ 14b4c3ac0

EDS_AbilityInputPolicy __thiscall
UDS_InteractionAbility_StuffGather::GetDefaultInputPolicy(UDS_InteractionAbility_StuffGather *this)

{
  return EndIfInput;
}

// GetPrivateStaticClass @ 14b4c4ea0

UClass * __cdecl UDS_InteractionAbility_StuffGather::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbility_StuffGather.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbility_StuffGather",
               &Z_Registration_Info_UClass_UDS_InteractionAbility_StuffGather.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbility_StuffGather,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbility_StuffGather>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbility_StuffGather>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbility_StuffGather.InnerSingleton;
}

// ShouldNotifyChangedCharState @ 14b4c5460

bool __thiscall
UDS_InteractionAbility_StuffGather::ShouldNotifyChangedCharState
          (UDS_InteractionAbility_StuffGather *this)

{
  return true;
}

// StaticRegisterNativesUDS_InteractionAbility_StuffGather @ 14b4c56e0

void __cdecl
UDS_InteractionAbility_StuffGather::StaticRegisterNativesUDS_InteractionAbility_StuffGather(void)

{
  return;
}

// BindStuffDataInteractionEvent @ 14b7db210

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

bool __thiscall
UDS_InteractionAbility_StuffGather::BindStuffDataInteractionEvent
          (UDS_InteractionAbility_StuffGather *this,ulong64 *param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_1c8 [32];
  uint uVar5;
  wchar_t *pwVar6;
  undefined1 local_188 [24];
  FWeakObjectPtr local_170;
  FWeakObjectPtr local_168 [2];
  code *local_158;
  ulonglong uStack_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pFVar2 = FDS_EntityBase::GetEntityBase(param_1);
  if (pFVar2 == (FDS_EntityBase *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_InteractionAbility_StuffGather::BindStuffDataInteractionEvent",0x41,
               Yes);
    pwVar6 = L"targetEntity is nullptr. (%llu)";
    uVar5 = 0x114;
  }
  else {
    UDS_StuffData::GetData((ulong64)&local_170,pFVar2->EntityID,false);
    bVar1 = TWeakObjectPtr<UDS_StuffData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_StuffData,FWeakObjectPtr> *)&local_170,(void *)0x0);
    if (bVar1) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_InteractionAbility_StuffGather::BindStuffDataInteractionEvent",0x41
                 ,Yes);
      pwVar6 = L"stuffData is nullptr. (%llu)";
      uVar5 = 0x11b;
    }
    else {
      UDS_StuffGatherData::GetData((ulong64)local_168);
      bVar1 = TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr> *)local_168,(void *)0x0
                        );
      if (!bVar1) {
        local_188._8_8_ = local_188._8_8_ & 0xffffffff00000000;
        local_188._0_8_ = OnInteractionStart;
        pUVar4 = FWeakObjectPtr::Get(&local_170);
        TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_InteractionAbility_StuffGather>
                  ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                    *)&pUVar4[8].field_0x8,(UDS_InteractionAbility_StuffGather *)(local_188 + 0x10),
                   (pmf_ad5eb11d *)this);
        local_188._8_8_ = local_188._8_8_ & 0xffffffff00000000;
        local_188._0_8_ = OnInteractionCancel;
        pUVar4 = FWeakObjectPtr::Get(&local_170);
        TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_InteractionAbility_StuffGather>
                  ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&),FDefaultDelegateUserPolicy>
                    *)(pUVar4 + 9),(UDS_InteractionAbility_StuffGather *)(local_188 + 0x10),
                   (pmf_ad5eb11d *)this);
        local_188._8_8_ = local_188._8_8_ & 0xffffffff00000000;
        local_188._0_8_ = OnInteractionComplete;
        pUVar4 = FWeakObjectPtr::Get(&local_170);
        TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>
        ::AddUObject<UDS_InteractionAbility_StuffGather>
                  ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64_const_&,bool_const_&,bool_const_&),FDefaultDelegateUserPolicy>
                    *)&pUVar4[9].field_0x20,(UDS_InteractionAbility_StuffGather *)(local_188 + 0x10)
                   ,(pmf_f4155e7f *)this);
        pUVar4 = FWeakObjectPtr::Get(local_168);
        if (pUVar4[0xe].field_0x8 != '\x01') {
          return true;
        }
        UDS_PlayerData::GetMainPlayerData();
        bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)(local_188 + 0x10),
                           (void *)0x0);
        if (!bVar1) {
          local_188._8_8_ = local_188._8_8_ & 0xffffffff00000000;
          local_188._0_8_ = OnChangedPlayerSkillTargetInfo;
          local_158 = OnChangedPlayerSkillTargetInfo;
          uStack_150 = local_188._8_8_;
          pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_188 + 0x10));
          TMulticastDelegateRegistration<void___cdecl(enum_EDS_PlayerSkillType_const_&,FDS_PlayerSkillTargetInfo_const_&,enum_EDS_PlayerSkillTargetInfoChangeType_const_&),FDefaultDelegateUserPolicy>
          ::AddUObject<UDS_InteractionAbility_StuffGather>
                    (&pUVar4[0xf].field_0x10,(UDS_InteractionAbility_StuffGather *)local_188,
                     (pmf_f1e0791d *)this);
          return true;
        }
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar3 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_InteractionAbility_StuffGather::BindStuffDataInteractionEvent",
                   0x41,Yes);
        UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,0x131,L"playerData is nullptr.");
        goto LAB_14b7db510;
      }
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_InteractionAbility_StuffGather::BindStuffDataInteractionEvent",0x41
                 ,Yes);
      pwVar6 = L"stuffGatherData is nullptr. (%llu)";
      uVar5 = 0x122;
    }
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,uVar5,pwVar6);
LAB_14b7db510:
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return false;
}

// IsContentsLock @ 14b7f26b0

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

bool __cdecl UDS_InteractionAbility_StuffGather::IsContentsLock(ulong64 *param_1)

{
  bool bVar1;
  EDS_StuffGatherType EVar2;
  FDS_EntityBase *pFVar3;
  UDS_LogManager *pUVar4;
  UDS_ContentManager *this;
  UDS_StuffGatherData *this_00;
  undefined1 auStackY_188 [32];
  uint uVar5;
  wchar_t *pwVar6;
  EDS_ContentsFunctionType local_148;
  uint local_144;
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  pFVar3 = FDS_EntityBase::GetEntityBase(param_1);
  if (pFVar3 == (FDS_EntityBase *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return true;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_StuffGather::IsContentsLock",0x32,Yes);
    pwVar6 = L"targetEntity is nullptr. (%llu)";
    uVar5 = 0xd7;
  }
  else {
    UDS_StuffGatherData::GetData((ulong64)&local_140);
    bVar1 = TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr> *)&local_140,(void *)0x0)
    ;
    if (!bVar1) {
      this = UDS_ContentManager::GetInst();
      if (this != (UDS_ContentManager *)0x0) {
        this_00 = (UDS_StuffGatherData *)FWeakObjectPtr::Get(&local_140);
        EVar2 = UDS_StuffGatherData::GetStuffGatherType(this_00);
        local_144 = (uint)EVar2;
        local_148 = StuffGatherStart;
        bVar1 = UDS_ContentManager::HasContentsFunction(this,&local_148,(int *)&local_144);
        if (!bVar1) {
          return false;
        }
        local_148 = StuffGatherStart;
        UDS_ContentManager::OnAlertMessage_ContentsFunction(this,&local_148);
        return true;
      }
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return true;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_StuffGather::IsContentsLock",0x32,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0xe5,L"contentMng is nullptr.");
      goto LAB_14b7f2859;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return true;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_StuffGather::IsContentsLock",0x32,Yes);
    pwVar6 = L"stuffGatherData is nullptr. (%llu)";
    uVar5 = 0xde;
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,uVar5,pwVar6);
LAB_14b7f2859:
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return true;
}

// OnAbilityRetryActivate @ 14b7f4830

void __thiscall
UDS_InteractionAbility_StuffGather::OnAbilityRetryActivate(UDS_InteractionAbility_StuffGather *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<924046915060891801>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_InteractionAbility_StuffGather.cpp"
                     ,0x99,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnCanActivate @ 14b7f6d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_InteractionAbility_StuffGather::OnCanActivate(UDS_InteractionAbility_StuffGather *this)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_StuffGather,FWeakObjectPtr> *this_00;
  int iVar1;
  bool bVar2;
  TWeakObjectPtr<UDS_InteractionAbilityData_StuffGather,FWeakObjectPtr> TVar3;
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
    bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffGather,FWeakObjectPtr>::UEOpEquals
                      (this_00,(void *)0x0);
    if (bVar2) {
      TVar3 = UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_StuffGather>
                        (&local_144,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      this_00->WeakPtr = *TVar3.WeakPtr;
    }
    bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffGather,FWeakObjectPtr>::UEOpEquals
                      (this_00,(void *)0x0);
    if (bVar2) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_InteractionAbility_StuffGather::OnCanActivate",0x31,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_138.Ptr,0x2c,L"InteractionAbilityData is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      bVar2 = IsContentsLock((ulong64 *)&pUVar5[2].field_0x8);
      if (!bVar2) {
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
    }
  }
  return false;
}

// OnChangedCharState @ 14b7f9270

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
UDS_InteractionAbility_StuffGather::OnChangedCharState
          (UDS_InteractionAbility_StuffGather *this,
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
                (&local_138,"UDS_InteractionAbility_StuffGather::OnChangedCharState",0x36,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0xa2,L"InCharStateData is nullptr.");
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
    bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffGather,FWeakObjectPtr>::UEOpEquals
                      (&this->InteractionAbilityData,(void *)0x0);
    if (bVar2) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_InteractionAbility_StuffGather::OnChangedCharState",0x36,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_138.Ptr,0xa9,L"InteractionAbilityData is nullptr.");
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

// OnChangedPlayerSkillTargetInfo @ 14b7fa1a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_StuffGather::OnChangedPlayerSkillTargetInfo
          (UDS_InteractionAbility_StuffGather *this,EDS_PlayerSkillType *param_1,
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
  bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffGather,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) goto LAB_14b7fa35e;
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_StuffGather::OnChangedPlayerSkillTargetInfo",0x42,
               Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Warning,local_138.Ptr,0x1ee,L"InteractionAbilityData is nullptr.");
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
      goto LAB_14b7fa35e;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) goto LAB_14b7fa35e;
    pUVar2 = UDS_LogManager::GetInst();
    FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_StuffGather::OnChangedPlayerSkillTargetInfo",0x42,
               Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Warning,local_138.Ptr,0x1fc,L"stuffGatherData is nullptr. (%llu)");
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
LAB_14b7fa35e:
  local_168[0] = Cancel;
  this_01 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (this_01,(FGameplayTag *)&this->_padding_,local_168);
  return;
}

// OnDeactivateAbility @ 14b7fc790

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
UDS_InteractionAbility_StuffGather::OnDeactivateAbility
          (UDS_InteractionAbility_StuffGather *this,bool *param_1)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_StuffGather,FWeakObjectPtr> *this_00;
  FName FVar1;
  bool bVar2;
  UObject *pUVar3;
  FDS_EntityBase *pFVar4;
  UDS_LogManager *pUVar5;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = &this->InteractionAbilityData;
  bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffGather,FWeakObjectPtr>::UEOpEquals
                    (this_00,(void *)0x0);
  if (!bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    if (pUVar3[2].field_0x20 == '\x01') {
      pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      pFVar4 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar3[2].field_0x8);
      if (pFVar4 == (FDS_EntityBase *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        if (pUVar5 != (UDS_LogManager *)0x0) {
          pUVar5 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_InteractionAbility_StuffGather::RequestStuffGatherCancel",0x3c,
                     Yes);
          UDS_LogManager::PrintLog
                    (pUVar5,1,Warning,local_138.Ptr,0x105,L"targetEntity is nullptr. (%llu)");
          if ((void *)local_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
      }
      else {
        FDS_StuffService::RequestStuffGatherCancel(*(ulong64 *)&pUVar3[2].field_0x8);
      }
    }
    pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    FVar1.ComparisonIndex.Value = *(uint *)&pUVar3[2].field_0x18;
    FVar1.Number = *(uint *)&pUVar3[2].field_0x1c;
    if (FVar1 != FGameplayTag::EmptyTag.TagName) {
      UDS_GameplayAbility::RemoveStateTagToASC
                ((UDS_GameplayAbility *)this,(FGameplayTag *)&pUVar3[2].field_0x18);
    }
    pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    UnbindStuffDataInteractionEvent(this,(ulong64 *)&pUVar3[2].field_0x8);
    pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    (**(code **)(*(longlong *)pUVar3 + 0x2c8))(pUVar3);
  }
  return;
}

// OnInteractionCancel @ 14b7fe120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_StuffGather::OnInteractionCancel
          (UDS_InteractionAbility_StuffGather *this,ulong64 *param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  UDS_AbilitySystemComponent *this_00;
  undefined1 auStackY_178 [32];
  EDS_AbilityDeactivateType local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffGather,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_StuffGather::OnInteractionCancel",0x37,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x1d1,L"InteractionAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    local_148[0] = Cancel;
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    local_148[0] = Success;
    pUVar3[2].field_0x20 = 0;
  }
  this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (this_00,(FGameplayTag *)&this->_padding_,local_148);
  return;
}

// OnInteractionComplete @ 14b7fe770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_StuffGather::OnInteractionComplete
          (UDS_InteractionAbility_StuffGather *this,ulong64 *param_1,bool *param_2,bool *param_3)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  UDS_AbilitySystemComponent *this_00;
  undefined1 auStackY_178 [32];
  EDS_AbilityDeactivateType local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffGather,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_StuffGather::OnInteractionComplete",0x39,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x1de,L"InteractionAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    local_148[0] = Cancel;
  }
  else {
    if (*param_2 != false) {
      return;
    }
    pUVar3 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    local_148[0] = Success;
    pUVar3[2].field_0x20 = 0;
  }
  this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (this_00,(FGameplayTag *)&this->_padding_,local_148);
  return;
}

// OnInteractionStart @ 14b7fe9f0

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
UDS_InteractionAbility_StuffGather::OnInteractionStart
          (UDS_InteractionAbility_StuffGather *this,ulong64 *param_1)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_StuffGather,FWeakObjectPtr> *this_00;
  bool bVar1;
  EDS_StuffGatherType EVar2;
  UDS_LogManager *pUVar3;
  UDS_AbilitySystemComponent *pUVar4;
  UObject *pUVar5;
  FDS_EntityBase *pFVar6;
  FDS_StuffGatherTableRow *pFVar7;
  UDS_StuffGatherData *this_01;
  FName *pFVar8;
  undefined1 auStackY_1a8 [32];
  uint uVar9;
  wchar_t *pwVar10;
  EDS_AbilityDeactivateType local_168 [8];
  FName local_160;
  FWeakObjectPtr local_158 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  this_00 = &this->InteractionAbilityData;
  bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffGather,FWeakObjectPtr>::UEOpEquals
                    (this_00,(void *)0x0);
  if (bVar1) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_InteractionAbility_StuffGather::OnInteractionStart",0x36,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_148.Ptr,0x169,L"InteractionAbilityData is nullptr.");
      if ((FDS_EntityBase *)local_148._padding_ != (FDS_EntityBase *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
    local_168[0] = Cancel;
    pUVar4 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (pUVar4,(FGameplayTag *)&this->_padding_,local_168);
    return;
  }
  pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  local_160.ComparisonIndex.Value = *(uint *)&pUVar5[2].field_0x18;
  local_160.Number = *(uint *)&pUVar5[2].field_0x1c;
  if (local_160 != FGameplayTag::EmptyTag.TagName) {
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,(FGameplayTag *)&local_160)
    ;
    local_160 = FGameplayTag::EmptyTag.TagName;
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    uVar9 = FGameplayTag::EmptyTag.TagName.Number;
    *(uint *)&pUVar5[2].field_0x18 = FGameplayTag::EmptyTag.TagName.ComparisonIndex.Value;
    *(uint *)&pUVar5[2].field_0x1c = uVar9;
  }
  pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  pFVar6 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar5[2].field_0x8);
  if (pFVar6 == (FDS_EntityBase *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b7feda4;
    pUVar3 = UDS_LogManager::GetInst();
    FWeakObjectPtr::Get(&this_00->WeakPtr);
    local_148._padding_ = (longlong)pFVar6;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_InteractionAbility_StuffGather::OnInteractionStart",0x36,Yes);
    pwVar10 = L"targetEntity is nullptr. (%llu)";
    uVar9 = 0x17c;
LAB_14b7feb92:
    UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,uVar9,pwVar10);
  }
  else {
    local_158[0].ObjectIndex = (int)pFVar6->TableID;
    pFVar7 = FDS_StuffGatherTableRow::GetByEntityTableID(&local_158[0].ObjectIndex);
    if (pFVar7 == (FDS_StuffGatherTableRow *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b7feda4;
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_InteractionAbility_StuffGather::OnInteractionStart",0x36,Yes);
      pwVar10 = L"stuffGatherTable is nullptr. (%d)";
      uVar9 = 0x184;
      goto LAB_14b7feb92;
    }
    if (pFVar7->StuffLocationType == Land) {
      UDS_StuffGatherData::GetData((ulong64)local_158);
      bVar1 = TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr> *)local_158,(void *)0x0
                        );
      if (bVar1) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b7feda4;
        pUVar3 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_InteractionAbility_StuffGather::OnInteractionStart",0x36,Yes);
        pwVar10 = L"stuffGatherData is nullptr. (%llu)";
        uVar9 = 400;
        goto LAB_14b7feb92;
      }
      this_01 = (UDS_StuffGatherData *)FWeakObjectPtr::Get(local_158);
      EVar2 = UDS_StuffGatherData::GetStuffGatherType(this_01);
      if (EVar2 == Stone) {
        local_168[0] = 0x45;
      }
      else if (EVar2 == Plant) {
        local_168[0] = 0x46;
      }
      else if (EVar2 == Tree) {
        local_168[0] = 0x47;
      }
      else if (EVar2 == Box) {
        local_168[0] = 0x48;
      }
      else {
        if (EVar2 != Archaeology) goto LAB_14b7fed15;
        local_168[0] = 0x51;
      }
    }
    else {
LAB_14b7fed15:
      local_168[0] = 0x4a;
    }
    pFVar8 = &FDS_GameplayTags::GetStateTag(local_168)->TagName;
    local_160 = *pFVar8;
    if (local_160 != FGameplayTag::EmptyTag.TagName) {
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      *(uint *)&pUVar5[2].field_0x18 = local_160.ComparisonIndex.Value;
      *(uint *)&pUVar5[2].field_0x1c = local_160.Number;
      UDS_GameplayAbility::AddTagToASC((UDS_GameplayAbility *)this,(FGameplayTag *)&local_160);
      return;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b7feda4;
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_InteractionAbility_StuffGather::OnInteractionStart",0x36,Yes);
    UDS_LogManager::PrintLog
              (pUVar3,1,Warning,local_148.Ptr,0x1c4,L"interactionStateTag is EmptyTag.");
  }
  if ((FDS_EntityBase *)local_148._padding_ != (FDS_EntityBase *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
LAB_14b7feda4:
  local_168[0] = Cancel;
  pUVar4 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (pUVar4,(FGameplayTag *)&this->_padding_,local_168);
  return;
}

// OnPostActivateAbility @ 14b804e50

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
UDS_InteractionAbility_StuffGather::OnPostActivateAbility(UDS_InteractionAbility_StuffGather *this)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_StuffGather,FWeakObjectPtr> *this_00;
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_AbilitySystemComponent *pUVar4;
  UObject *pUVar5;
  FDS_StuffGatherTableRow *this_01;
  UDS_TicketData *this_02;
  FString *pFVar6;
  FDS_EntityBase *pFVar7;
  undefined1 auStackY_208 [32];
  EDS_AbilityDeactivateType local_1c8 [8];
  TArray<FStringFormatArg,TSizedDefaultAllocator<32>_> local_1c0;
  FWeakObjectPtr local_1b0;
  FString local_1a8;
  FStringFormatArg local_198;
  FStringFormatArg local_178;
  FString local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_208;
  this_00 = &this->InteractionAbilityData;
  bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffGather,FWeakObjectPtr>::UEOpEquals
                    (this_00,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_InteractionAbility_StuffGather::OnPostActivateAbility",0x39,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_148.Ptr,0x4b,L"InteractionAbilityData is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    bVar2 = BindStuffDataInteractionEvent(this,(ulong64 *)&pUVar5[2].field_0x8);
    if (bVar2) {
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      this_01 = FDS_StuffGatherTableRow::GetRefWithEntityID(*(ulong64 *)&pUVar5[2].field_0x8);
      bVar2 = FDS_StuffGatherTableRow::IsValid(this_01);
      if (!bVar2) {
        local_1c8[0] = Cancel;
        pUVar4 = (UDS_AbilitySystemComponent *)
                 FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        UDS_AbilitySystemComponent::DeactivateAbilityByTag
                  (pUVar4,(FGameplayTag *)&this->_padding_,local_1c8);
        return;
      }
      if (this_01->CostTicketType != None) {
        UDS_TicketData::GetDataByCharEntityID
                  ((ulong64 *)&local_1b0,(EDS_TicketType *)&this->_padding_);
        bVar2 = TWeakObjectPtr<UDS_TicketData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_TicketData,FWeakObjectPtr> *)&local_1b0,(void *)0x0);
        if ((!bVar2) &&
           (pUVar5 = FWeakObjectPtr::Get(&local_1b0),
           *(int *)&pUVar5[2].field_0xc < this_01->CostTicketValue)) {
          this_02 = (UDS_TicketData *)FWeakObjectPtr::Get(&local_1b0);
          UDS_TicketData::GetTicketName(this_02,&local_1a8);
          pFVar6 = ::FString::FString(&local_158,&local_1a8);
          FStringFormatArg::FStringFormatArg(&local_198,pFVar6);
          FStringFormatArg::FStringFormatArg(&local_178,this_01->CostTicketValue);
          local_1c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1c0.ArrayNum = 2;
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x20,8,2,0,&local_1c0.AllocatorInstance,2,&local_1c0.ArrayMax);
          ConstructItems<FStringFormatArg,FStringFormatArg,int>
                    (local_1c0.AllocatorInstance.Data,&local_198,2);
          UDS_UIMessageManager::OpenMsgByStringUi
                    (0x1d8af,Alert_None_01,&local_1c0,
                     (TMap<EDS_MessageArgsType,__int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_MessageArgsType,__int64,0>_>
                      *)0x0);
          DestructItems<FStringFormatArg,int>
                    ((FStringFormatArg *)local_1c0.AllocatorInstance.Data,local_1c0.ArrayNum);
          if ((FStringFormatArg *)local_1c0.AllocatorInstance.Data != (FStringFormatArg *)0x0) {
            FMemory::Free(local_1c0.AllocatorInstance.Data);
          }
          if (local_178.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_178.StringValue.Data.AllocatorInstance.Data);
          }
          if (local_198.StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_198.StringValue.Data.AllocatorInstance.Data);
          }
          local_1c8[0] = Cancel;
          pUVar4 = (UDS_AbilitySystemComponent *)
                   FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          UDS_AbilitySystemComponent::DeactivateAbilityByTag
                    (pUVar4,(FGameplayTag *)&this->_padding_,local_1c8);
          if (local_1a8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return;
          }
          FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
          return;
        }
      }
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      iVar1 = *(int *)&pUVar5[2].field_0x10;
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      pFVar7 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar5[2].field_0x8);
      if (pFVar7 == (FDS_EntityBase *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 != (UDS_LogManager *)0x0) {
          pUVar3 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_InteractionAbility_StuffGather::RequestStuffGatherStart",0x3b,
                     Yes);
          UDS_LogManager::PrintLog
                    (pUVar3,1,Warning,local_148.Ptr,0xf7,L"targetEntity is nullptr. (%llu)");
          if ((void *)local_148._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_148._padding_);
          }
        }
        local_1c8[0] = Cancel;
        pUVar4 = (UDS_AbilitySystemComponent *)
                 FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        UDS_AbilitySystemComponent::DeactivateAbilityByTag
                  (pUVar4,(FGameplayTag *)&this->_padding_,local_1c8);
        return;
      }
      FDS_StuffService::RequestStuffGatherStart(*(ulong64 *)&pUVar5[2].field_0x8,iVar1);
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      pUVar5[2].field_0x20 = 1;
      return;
    }
  }
  local_1c8[0] = Cancel;
  pUVar4 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AbilitySystemComponent::DeactivateAbilityByTag
            (pUVar4,(FGameplayTag *)&this->_padding_,local_1c8);
  return;
}

// RequestStuffGatherCancel @ 14b810930

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

bool __cdecl UDS_InteractionAbility_StuffGather::RequestStuffGatherCancel(ulong64 *param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = FDS_EntityBase::GetEntityBase(param_1);
  if (pFVar2 == (FDS_EntityBase *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_StuffGather::RequestStuffGatherCancel",0x3c,Yes)
      ;
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x105,L"targetEntity is nullptr. (%llu)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar1 = false;
  }
  else {
    FDS_StuffService::RequestStuffGatherCancel(*param_1);
    bVar1 = true;
  }
  return bVar1;
}

// RequestStuffGatherStart @ 14b810a30

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
UDS_InteractionAbility_StuffGather::RequestStuffGatherStart(ulong64 *param_1,int param_2)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_LogManager *pUVar3;
  undefined1 auStackY_178 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar2 = FDS_EntityBase::GetEntityBase(param_1);
  if (pFVar2 == (FDS_EntityBase *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_StuffGather::RequestStuffGatherStart",0x3b,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0xf7,L"targetEntity is nullptr. (%llu)");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    bVar1 = false;
  }
  else {
    FDS_StuffService::RequestStuffGatherStart(*param_1,param_2);
    bVar1 = true;
  }
  return bVar1;
}

// TryActivate @ 14b814e60

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
UDS_InteractionAbility_StuffGather::TryActivate(ulong64 *param_1,ulong64 *param_2,int param_3)

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
              (&local_138,"UDS_InteractionAbility_StuffGather::TryActivate",0x2f,Yes);
    pwVar5 = L"Invalid parameter.";
    uVar4 = 0xba;
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
                (&local_138,"UDS_InteractionAbility_StuffGather::TryActivate",0x2f,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0xc1,L"sourceEntity is nullptr. (%llu)");
      goto LAB_14b815053;
    }
    local_158[0] = Interaction_StuffGather;
    UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_StuffGather>
              ((ulong64 *)&local_150,(EDS_AbilityTagType *)param_1);
    bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_StuffGather,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_InteractionAbilityData_StuffGather,FWeakObjectPtr> *)
                       &local_150,(void *)0x0);
    if (!bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&local_150);
      *(ulong64 *)&pUVar3[2].field_0x8 = *param_2;
      pUVar3 = FWeakObjectPtr::Get(&local_150);
      local_148[0] = 0;
      local_158[0] = Interaction_StuffGather;
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
              (&local_138,"UDS_InteractionAbility_StuffGather::TryActivate",0x2f,Yes);
    pwVar5 = L"abilityData is nullptr.";
    uVar4 = 200;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
LAB_14b815053:
  if ((FDS_EntityBase *)local_138._padding_ != (FDS_EntityBase *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// UnbindStuffDataInteractionEvent @ 14b8174c0

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

bool __thiscall
UDS_InteractionAbility_StuffGather::UnbindStuffDataInteractionEvent
          (UDS_InteractionAbility_StuffGather *this,ulong64 *param_1)

{
  bool bVar1;
  FDS_EntityBase *pFVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_198 [32];
  uint uVar5;
  wchar_t *pwVar6;
  FWeakObjectPtr local_158;
  FWeakObjectPtr local_150;
  FWeakObjectPtr local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  pFVar2 = FDS_EntityBase::GetEntityBase(param_1);
  if (pFVar2 == (FDS_EntityBase *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_StuffGather::UnbindStuffDataInteractionEvent",0x43
               ,Yes);
    pwVar6 = L"targetEntity is nullptr. (%llu)";
    uVar5 = 0x141;
  }
  else {
    UDS_StuffData::GetData((ulong64)&local_158,pFVar2->EntityID,false);
    bVar1 = TWeakObjectPtr<UDS_StuffData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_StuffData,FWeakObjectPtr> *)&local_158,(void *)0x0);
    if (bVar1) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_StuffGather::UnbindStuffDataInteractionEvent",
                 0x43,Yes);
      pwVar6 = L"stuffData is nullptr. (%llu)";
      uVar5 = 0x148;
    }
    else {
      UDS_StuffGatherData::GetData((ulong64)&local_150);
      bVar1 = TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_StuffGatherData,FWeakObjectPtr> *)&local_150,
                         (void *)0x0);
      if (!bVar1) {
        pUVar4 = FWeakObjectPtr::Get(&local_158);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[8].field_0x8,this);
        pUVar4 = FWeakObjectPtr::Get(&local_158);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar4 + 9),this);
        pUVar4 = FWeakObjectPtr::Get(&local_158);
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[9].field_0x20,this)
        ;
        pUVar4 = FWeakObjectPtr::Get(&local_150);
        if (pUVar4[0xe].field_0x8 == '\x01') {
          UDS_PlayerData::GetMainPlayerData();
          bVar1 = TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_PlayerData,FWeakObjectPtr> *)local_148,(void *)0x0)
          ;
          if (!bVar1) {
            pUVar4 = FWeakObjectPtr::Get(local_148);
            TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar4[0xf].field_0x10
                       ,this);
          }
        }
        return true;
      }
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_StuffGather::UnbindStuffDataInteractionEvent",
                 0x43,Yes);
      pwVar6 = L"stuffGatherData is nullptr. (%llu)";
      uVar5 = 0x14f;
    }
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar5,pwVar6);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 17

// StaticClass @ 14b52bbd0

UClass * __cdecl UDS_NormalAttackControlAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NormalAttackControlAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NormalAttackControlAbility",
               &Z_Registration_Info_UClass_UDS_NormalAttackControlAbility.InnerSingleton,
               StaticRegisterNativesUDS_NormalAttackControlAbility,0x170,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_NormalAttackControlAbility>,
               InternalVTableHelperCtorCaller<UDS_NormalAttackControlAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NormalAttackControlAbility.InnerSingleton;
}

// UDS_NormalAttackControlAbility @ 14b52fab0

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

UDS_NormalAttackControlAbility * __thiscall
UDS_NormalAttackControlAbility::UDS_NormalAttackControlAbility
          (UDS_NormalAttackControlAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->NormalAttackData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->LocalFindTargetData).field0_0x0.DebugPtr = (UDS_FindTargetAbilityData *)0x0;
  return this;
}

// ~UDS_NormalAttackControlAbility @ 14b530b00

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
UDS_NormalAttackControlAbility::~UDS_NormalAttackControlAbility
          (UDS_NormalAttackControlAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b532f00

UClass * __cdecl UDS_NormalAttackControlAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_NormalAttackControlAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_NormalAttackControlAbility",
               &Z_Registration_Info_UClass_UDS_NormalAttackControlAbility.InnerSingleton,
               StaticRegisterNativesUDS_NormalAttackControlAbility,0x170,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_NormalAttackControlAbility>,
               InternalVTableHelperCtorCaller<UDS_NormalAttackControlAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_NormalAttackControlAbility.InnerSingleton;
}

// ShouldTickComponent @ 14b533080

bool __thiscall
UDS_NormalAttackControlAbility::ShouldTickComponent(UDS_NormalAttackControlAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_NormalAttackControlAbility @ 14b5331c0

void __cdecl
UDS_NormalAttackControlAbility::StaticRegisterNativesUDS_NormalAttackControlAbility(void)

{
  return;
}

// UDS_NormalAttackControlAbility @ 14b823230

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

UDS_NormalAttackControlAbility * __thiscall
UDS_NormalAttackControlAbility::UDS_NormalAttackControlAbility
          (UDS_NormalAttackControlAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->NormalAttackData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->LocalFindTargetData).field0_0x0.DebugPtr = (UDS_FindTargetAbilityData *)0x0;
  return this;
}

// ClearVariables @ 14b827cd0

void __thiscall UDS_NormalAttackControlAbility::ClearVariables(UDS_NormalAttackControlAbility *this)

{
  return;
}

// DoNormalAttack @ 14b82cd30

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

void __thiscall UDS_NormalAttackControlAbility::DoNormalAttack(UDS_NormalAttackControlAbility *this)

{
  bool bVar1;
  int iVar2;
  UDS_CharStateData *pUVar3;
  UDS_NormalAttackAbilityData *pUVar4;
  UDS_SkillAbilityContext *pUVar5;
  FWeakObjectPtr local_res8;
  UDS_SkillAbilityContext *local_res10;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->CharStateData).WeakPtr);
  if (bVar1) {
    pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
    local_res8.ObjectIndex = 0xf;
    bVar1 = UDS_CharStateData::HasCharDetailState(pUVar3,(EDS_CharDetailState *)&local_res8);
    if (bVar1) {
      pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
      local_res8.ObjectIndex = 0x15;
      bVar1 = UDS_CharStateData::HasCharDetailState(pUVar3,(EDS_CharDetailState *)&local_res8);
      if (!bVar1) {
        return;
      }
    }
    if ((this->LocalFindTargetData).field0_0x0.DebugPtr == (UDS_FindTargetAbilityData *)0x0) {
      local_res8.ObjectIndex._0_1_ = 2;
      UDS_GameplayAbility::DeactivateAbility
                ((UDS_GameplayAbility *)this,(EDS_AbilityDeactivateType *)&local_res8);
      return;
    }
    pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
    local_res8.ObjectIndex = 0x15;
    bVar1 = UDS_CharStateData::HasCharDetailState(pUVar3,(EDS_CharDetailState *)&local_res8);
    if (!bVar1) {
      pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
      local_res8.ObjectIndex = 0x16;
      bVar1 = UDS_CharStateData::HasCharDetailState(pUVar3,(EDS_CharDetailState *)&local_res8);
      if (!bVar1) {
        pUVar4 = (UDS_NormalAttackAbilityData *)
                 FWeakObjectPtr::Get(&(this->NormalAttackData).WeakPtr);
        UDS_NormalAttackAbilityData::ResetAttackStep(pUVar4);
      }
    }
    pUVar4 = (UDS_NormalAttackAbilityData *)FWeakObjectPtr::Get(&(this->NormalAttackData).WeakPtr);
    pUVar5 = (UDS_SkillAbilityContext *)(this->LocalFindTargetData).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar5 != (UDS_SkillAbilityContext *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 != (UDS_SkillAbilityContext *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_SkillAbilityContext *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    bVar1 = UDS_NormalAttackAbilityData::DoAttack
                      (pUVar4,(TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)local_res8);
    if (bVar1) {
      pUVar5 = NewObject<UDS_SkillAbilityContext>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 != (UDS_SkillAbilityContext *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      pUVar4 = (UDS_NormalAttackAbilityData *)FWeakObjectPtr::Get(&(this->NormalAttackData).WeakPtr)
      ;
      iVar2 = UDS_NormalAttackAbilityData::GetAttackSkillID(pUVar4);
      pUVar5->SkillID = iVar2;
      local_res10 = pUVar5;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      local_res8.ObjectIndex._0_1_ = 0x10;
      bVar1 = UDS_GameplayAbility::TryActivateAbility
                        ((UDS_GameplayAbility *)this,(EDS_AbilityTagType *)&local_res8,
                         (TObjectPtr<UWN_AbilityContext>)&local_res10);
      if (bVar1) {
        return;
      }
    }
    local_res8.ObjectIndex._0_1_ = 2;
    UDS_GameplayAbility::DeactivateAbility
              ((UDS_GameplayAbility *)this,(EDS_AbilityDeactivateType *)&local_res8);
  }
  return;
}

// GetAbleNormalAttackSkillID @ 14b830da0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

int __thiscall
UDS_NormalAttackControlAbility::GetAbleNormalAttackSkillID(UDS_NormalAttackControlAbility *this)

{
  UDS_FindTargetAbilityData *pUVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  UDS_LogManager *pUVar6;
  UDS_NormalAttackAbilityData *pUVar7;
  UDS_CharStateData *pUVar8;
  FDS_NormalAttackInfo *pFVar9;
  atomic<unsigned_char> *paVar10;
  undefined1 auStackY_3d8 [32];
  int local_3a8 [6];
  FWeakObjectPtr local_390;
  UDS_FindTargetAbilityData *local_388 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_378;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_3d8;
  cVar3 = (**(code **)(this->_padding_ + 0x2c0))();
  if (cVar3 != '\0') {
    bVar4 = TWeakObjectPtr<UDS_NormalAttackAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&this->NormalAttackData,(void *)0x0);
    if (bVar4) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 != (UDS_LogManager *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        local_378._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_378,"UDS_NormalAttackControlAbility::GetAbleNormalAttackSkillID",0x3a,Yes)
        ;
        UDS_LogManager::PrintLog
                  (pUVar6,1,Warning,local_378.Ptr,0xf2,L"[CCSAI] NormalAttackData is nullptr.");
        if ((void *)local_378._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_378._padding_);
        }
      }
      iVar5 = 0xf3;
      paVar10 = &bGEnsureHasExecuted<3777451800148312307>;
    }
    else {
      bVar4 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                        (&this->CharStateData,(void *)0x0);
      if (bVar4) {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 != (UDS_LogManager *)0x0) {
          pUVar6 = UDS_LogManager::GetInst();
          local_258._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_258,"UDS_NormalAttackControlAbility::GetAbleNormalAttackSkillID",0x3a,
                     Yes);
          UDS_LogManager::PrintLog
                    (pUVar6,1,Warning,local_258.Ptr,0xf9,L"[CCSAI] CharStateData is nullptr.");
          if ((void *)local_258._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_258._padding_);
          }
        }
        iVar5 = 0xfa;
        paVar10 = &bGEnsureHasExecuted<3777451800148312314>;
      }
      else {
        if ((this->LocalFindTargetData).field0_0x0.DebugPtr != (UDS_FindTargetAbilityData *)0x0) {
          pUVar7 = (UDS_NormalAttackAbilityData *)
                   FWeakObjectPtr::Get(&(this->NormalAttackData).WeakPtr);
          local_3a8[0] = UDS_NormalAttackAbilityData::GetAttackStep(pUVar7);
          pUVar8 = (UDS_CharStateData *)FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
          local_3a8[1] = 0xf;
          bVar4 = UDS_CharStateData::HasCharDetailState
                            (pUVar8,(EDS_CharDetailState *)(local_3a8 + 1));
          if (bVar4) {
            pUVar8 = (UDS_CharStateData *)FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
            local_3a8[2] = 0x15;
            bVar4 = UDS_CharStateData::HasCharDetailState
                              (pUVar8,(EDS_CharDetailState *)(local_3a8 + 2));
            if (!bVar4) {
              return 0;
            }
          }
          pUVar8 = (UDS_CharStateData *)FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
          local_3a8[3] = 0x15;
          bVar4 = UDS_CharStateData::HasCharDetailState
                            (pUVar8,(EDS_CharDetailState *)(local_3a8 + 3));
          if (!bVar4) {
            pUVar8 = (UDS_CharStateData *)FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
            local_3a8[4] = 0x16;
            bVar4 = UDS_CharStateData::HasCharDetailState
                              (pUVar8,(EDS_CharDetailState *)(local_3a8 + 4));
            if (!bVar4) {
              local_3a8[0] = 0;
            }
          }
          pUVar7 = (UDS_NormalAttackAbilityData *)
                   FWeakObjectPtr::Get(&(this->NormalAttackData).WeakPtr);
          pUVar1 = (this->LocalFindTargetData).field0_0x0.DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (pUVar1 != (UDS_FindTargetAbilityData *)0x0) {
              UE::GC::MarkAsReachable((UObject *)pUVar1);
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar1 != (UDS_FindTargetAbilityData *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar1);
            }
          }
          local_390.ObjectIndex = 0;
          local_390.ObjectSerialNumber = 0;
          local_388[0] = pUVar1;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar1 != (UDS_FindTargetAbilityData *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar1);
          }
          FWeakObjectPtr::operator=(&local_390,(FObjectPtr)local_388);
          pFVar9 = UDS_NormalAttackAbilityData::CCSAI_GetSkillInfoByDistance
                             (pUVar7,(TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)
                                     local_390,local_3a8);
          return pFVar9->SkillID;
        }
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 != (UDS_LogManager *)0x0) {
          pUVar6 = UDS_LogManager::GetInst();
          local_138._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_138,"UDS_NormalAttackControlAbility::GetAbleNormalAttackSkillID",0x3a,
                     Yes);
          UDS_LogManager::PrintLog
                    (pUVar6,1,Warning,local_138.Ptr,0x100,L"[CCSAI] LocalFindTargetData is nullptr."
                    );
          if ((void *)local_138._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_138._padding_);
          }
        }
        iVar5 = 0x101;
        paVar10 = &bGEnsureHasExecuted<3777451800148312321>;
      }
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (paVar10,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_NormalAttackControlAbility.cpp"
                       ,iVar5,"false");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  return 0;
}

// InitOtherAbilityEventSubscriptions @ 14b834b20

void __thiscall
UDS_NormalAttackControlAbility::InitOtherAbilityEventSubscriptions
          (UDS_NormalAttackControlAbility *this)

{
  FGameplayTag *pFVar1;
  EDS_AbilityTagType local_res8 [32];
  
  local_res8[0] = Skill_ActiveSkill;
  pFVar1 = FDS_GameplayTags::GetAbilityTag(local_res8);
  FGameplayTagContainer::AddTag((FGameplayTagContainer *)&this->_padding_,pFVar1);
  local_res8[0] = Trace;
  pFVar1 = FDS_GameplayTags::GetAbilityTag(local_res8);
  FGameplayTagContainer::AddTag((FGameplayTagContainer *)&this->_padding_,pFVar1);
  return;
}

// OnAbilityRetryActivate @ 14b837c30

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
UDS_NormalAttackControlAbility::OnAbilityRetryActivate(UDS_NormalAttackControlAbility *this)

{
  bool bVar1;
  int iVar2;
  UDS_CharStateData *pUVar3;
  UDS_NormalAttackAbilityData *pUVar4;
  UDS_SkillAbilityContext *pUVar5;
  FWeakObjectPtr FStackX_8;
  UDS_SkillAbilityContext *pUStackX_10;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->CharStateData).WeakPtr);
  if (bVar1) {
    pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
    FStackX_8.ObjectIndex = 0xf;
    bVar1 = UDS_CharStateData::HasCharDetailState(pUVar3,(EDS_CharDetailState *)&FStackX_8);
    if (bVar1) {
      pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
      FStackX_8.ObjectIndex = 0x15;
      bVar1 = UDS_CharStateData::HasCharDetailState(pUVar3,(EDS_CharDetailState *)&FStackX_8);
      if (!bVar1) {
        return;
      }
    }
    if ((this->LocalFindTargetData).field0_0x0.DebugPtr == (UDS_FindTargetAbilityData *)0x0) {
      FStackX_8.ObjectIndex._0_1_ = 2;
      UDS_GameplayAbility::DeactivateAbility
                ((UDS_GameplayAbility *)this,(EDS_AbilityDeactivateType *)&FStackX_8);
      return;
    }
    pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
    FStackX_8.ObjectIndex = 0x15;
    bVar1 = UDS_CharStateData::HasCharDetailState(pUVar3,(EDS_CharDetailState *)&FStackX_8);
    if (!bVar1) {
      pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
      FStackX_8.ObjectIndex = 0x16;
      bVar1 = UDS_CharStateData::HasCharDetailState(pUVar3,(EDS_CharDetailState *)&FStackX_8);
      if (!bVar1) {
        pUVar4 = (UDS_NormalAttackAbilityData *)
                 FWeakObjectPtr::Get(&(this->NormalAttackData).WeakPtr);
        UDS_NormalAttackAbilityData::ResetAttackStep(pUVar4);
      }
    }
    pUVar4 = (UDS_NormalAttackAbilityData *)FWeakObjectPtr::Get(&(this->NormalAttackData).WeakPtr);
    pUVar5 = (UDS_SkillAbilityContext *)(this->LocalFindTargetData).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar5 != (UDS_SkillAbilityContext *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 != (UDS_SkillAbilityContext *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
    }
    FStackX_8.ObjectIndex = 0;
    FStackX_8.ObjectSerialNumber = 0;
    pUStackX_10 = pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar5 != (UDS_SkillAbilityContext *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar5);
    }
    FWeakObjectPtr::operator=(&FStackX_8,(FObjectPtr)&pUStackX_10);
    bVar1 = UDS_NormalAttackAbilityData::DoAttack
                      (pUVar4,(TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)FStackX_8);
    if (bVar1) {
      pUVar5 = NewObject<UDS_SkillAbilityContext>((UObject *)this);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar5 != (UDS_SkillAbilityContext *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      pUVar4 = (UDS_NormalAttackAbilityData *)FWeakObjectPtr::Get(&(this->NormalAttackData).WeakPtr)
      ;
      iVar2 = UDS_NormalAttackAbilityData::GetAttackSkillID(pUVar4);
      pUVar5->SkillID = iVar2;
      pUStackX_10 = pUVar5;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar5);
      }
      FStackX_8.ObjectIndex._0_1_ = 0x10;
      bVar1 = UDS_GameplayAbility::TryActivateAbility
                        ((UDS_GameplayAbility *)this,(EDS_AbilityTagType *)&FStackX_8,
                         (TObjectPtr<UWN_AbilityContext>)&pUStackX_10);
      if (bVar1) {
        return;
      }
    }
    FStackX_8.ObjectIndex._0_1_ = 2;
    UDS_GameplayAbility::DeactivateAbility
              ((UDS_GameplayAbility *)this,(EDS_AbilityDeactivateType *)&FStackX_8);
  }
  return;
}

// OnCanActivate @ 14b8397f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

bool __thiscall UDS_NormalAttackControlAbility::OnCanActivate(UDS_NormalAttackControlAbility *this)

{
  bool bVar1;
  int iVar2;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar3;
  TWeakObjectPtr<UDS_NormalAttackAbilityData,FWeakObjectPtr> TVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_FindTargetAbilityData *pUVar8;
  longlong *plVar9;
  undefined1 auStackY_1f8 [32];
  ulong64 local_1c4;
  undefined1 local_1b8 [128];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->CharStateData).WeakPtr);
    if (!bVar1) {
      TVar3 = UDS_CharStateData::GetData((ulong64)&local_1c4);
                    /* WARNING: Load size is inaccurate */
      (this->CharStateData).WeakPtr = *TVar3.WeakPtr;
    }
    TVar4 = UDS_AbilityDataSet::GetAbilityData<UDS_NormalAttackAbilityData>
                      (&local_1c4,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
    (this->NormalAttackData).WeakPtr = *TVar4.WeakPtr;
    bVar1 = FWeakObjectPtr::IsValid(&(this->NormalAttackData).WeakPtr);
    if (bVar1) {
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      iVar2 = (**(code **)(*(longlong *)pUVar6 + 0x438))(pUVar6);
      if (iVar2 == 1) {
        bVar1 = false;
        if ((this->LocalFindTargetData).field0_0x0.DebugPtr == (UDS_FindTargetAbilityData *)0x0) {
          FObjectInitializer::AssertIfInConstructor
                    ((UObject *)this,
                     L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                    );
          pUVar7 = Z_Construct_UClass_UDS_FindTargetAbilityData_NoRegister();
          FStaticConstructObjectParameters::FStaticConstructObjectParameters
                    ((FStaticConstructObjectParameters *)local_1b8,pUVar7);
          local_1b8._8_8_ = this;
          pUVar8 = (UDS_FindTargetAbilityData *)
                   StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_1b8);
          if (local_1b8._64_8_ != 0) {
            plVar9 = (longlong *)(local_1b8 + 0x50);
            if ((longlong *)local_1b8._104_8_ != (longlong *)0x0) {
              plVar9 = (longlong *)local_1b8._104_8_;
            }
            (**(code **)(*plVar9 + 0x10))();
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar8 != (UDS_FindTargetAbilityData *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar8);
          }
          (this->LocalFindTargetData).field0_0x0.DebugPtr = pUVar8;
          bVar1 = pUVar8 == (UDS_FindTargetAbilityData *)0x0;
        }
        return !bVar1;
      }
    }
    else {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 != (UDS_LogManager *)0x0) {
        pUVar5 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_NormalAttackControlAbility::OnCanActivate",0x2d,Yes);
        UDS_LogManager::PrintLog
                  (pUVar5,1,Warning,local_138.Ptr,0x30,L"NormalAttackData is invalid.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
  }
  return false;
}

// OnDeactivateAbility @ 14b83f420

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
UDS_NormalAttackControlAbility::OnDeactivateAbility
          (UDS_NormalAttackControlAbility *this,bool *param_1)

{
  EDS_AbilityTagType local_res8 [32];
  
  local_res8[0] = Trace;
  UDS_GameplayAbility::DeactivateAbility
            ((UDS_GameplayAbility *)this,local_res8,(EDS_AbilityDeactivateType *)&this->_padding_);
  return;
}

// OnDeactivatedOtherAbility @ 14b840450

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
UDS_NormalAttackControlAbility::OnDeactivatedOtherAbility
          (UDS_NormalAttackControlAbility *this,FGameplayTag *param_1,bool *param_2)

{
  FName *pFVar1;
  EDS_AbilityDeactivateType local_res20 [8];
  
  local_res20[0] = 0x11;
  pFVar1 = &FDS_GameplayTags::GetAbilityTag(local_res20)->TagName;
  if ((*pFVar1 == (FName)0x0) || (param_1->TagName != *pFVar1)) {
    local_res20[0] = DeathCancel;
    pFVar1 = &FDS_GameplayTags::GetAbilityTag(local_res20)->TagName;
    if (*pFVar1 == (FName)0x0) {
      return;
    }
    if (param_1->TagName != *pFVar1) {
      return;
    }
    if (*param_2 != false) {
      return;
    }
    local_res20[0] = Cancel;
  }
  else {
    local_res20[0] = Success;
  }
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res20);
  return;
}

// OnPostActivateAbility @ 14b844330

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
UDS_NormalAttackControlAbility::OnPostActivateAbility(UDS_NormalAttackControlAbility *this)

{
  int iVar1;
  UDS_FindTargetAbilityData *pUVar2;
  TObjectPtr<UDS_FindTargetAbilityData>_u_0 TVar3;
  bool bVar4;
  UDS_NormalAttackAbilityData *this_00;
  FDS_NormalAttackInfo *pFVar5;
  UDS_DataBase *pUVar6;
  ulong64 uVar7;
  TObjectPtr<UDS_FindTargetAbilityData>_u_0 local_res8;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> local_res20;
  FWeakObjectPtr local_38 [3];
  
  bVar4 = TWeakObjectPtr<UDS_NormalAttackAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->NormalAttackData,(void *)0x0);
  if ((!bVar4) &&
     (pUVar2 = (this->LocalFindTargetData).field0_0x0.DebugPtr,
     pUVar2 != (UDS_FindTargetAbilityData *)0x0)) {
    (**(code **)(pUVar2->_padding_ + 0x2c8))();
    UDS_CharInfoData::GetData((ulong64)&local_res10);
    bVar4 = TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharInfoData,FWeakObjectPtr> *)&local_res10,(void *)0x0);
    if (!bVar4) {
      UDS_CharStateData::GetData((ulong64)&local_res20);
      bVar4 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals(&local_res20,(void *)0x0)
      ;
      if (!bVar4) {
        UDS_PlayerData::GetData((ulong64)local_38,this->_padding_,false);
        bVar4 = FWeakObjectPtr::IsValid(local_38);
        if (bVar4) {
          this_00 = (UDS_NormalAttackAbilityData *)
                    FWeakObjectPtr::Get(&(this->NormalAttackData).WeakPtr);
          pFVar5 = UDS_NormalAttackAbilityData::GetSkillInfo(this_00);
          pUVar2 = (this->LocalFindTargetData).field0_0x0.DebugPtr;
          iVar1 = pFVar5->SkillID;
          pUVar6 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_res10);
          local_res8 = (TObjectPtr<UDS_FindTargetAbilityData>_u_0)UDS_DataBase::GetEntityID(pUVar6);
          UDS_FindTargetAbilityData::SetFindTargetDataBySkillID(pUVar2,(ulong64 *)&local_res8,iVar1)
          ;
          TVar3 = (TObjectPtr<UDS_FindTargetAbilityData>_u_0)
                  (this->LocalFindTargetData).field0_0x0.DebugPtr;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            if (TVar3.DebugPtr != (UDS_FindTargetAbilityData *)0x0) {
              UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (TVar3.DebugPtr != (UDS_FindTargetAbilityData *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
            }
          }
          local_res18.ObjectIndex = 0;
          local_res18.ObjectSerialNumber = 0;
          local_res8 = TVar3;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (TVar3.DebugPtr != (UDS_FindTargetAbilityData *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
          }
          FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res8);
          pUVar6 = (UDS_DataBase *)FWeakObjectPtr::Get(&local_res10);
          uVar7 = UDS_DataBase::GetEntityID(pUVar6);
          UDS_FindTargetAbility::FindTargetByDistance
                    (uVar7,(TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> *)&local_res18)
          ;
          DoNormalAttack(this);
          return;
        }
      }
    }
  }
  local_res8._0_1_ = 2;
  UDS_GameplayAbility::DeactivateAbility
            ((UDS_GameplayAbility *)this,(EDS_AbilityDeactivateType *)&local_res8);
  return;
}

// OnTickComponent @ 14b849250

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
UDS_NormalAttackControlAbility::OnTickComponent(UDS_NormalAttackControlAbility *this,float param_1)

{
  bool bVar1;
  EDS_AbilityDeactivateType local_res8 [32];
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  bVar1 = FWeakObjectPtr::IsValid(&(this->NormalAttackData).WeakPtr);
  if (!bVar1) {
    local_res8[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
  }
  return;
}


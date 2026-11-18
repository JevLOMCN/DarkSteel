// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b5920f0

UClass * __cdecl UDS_SkillProcessAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SkillProcessAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SkillProcessAbility",
               &Z_Registration_Info_UClass_UDS_SkillProcessAbility.InnerSingleton,
               StaticRegisterNativesUDS_SkillProcessAbility,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SkillProcessAbility>,
               InternalVTableHelperCtorCaller<UDS_SkillProcessAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SkillProcessAbility.InnerSingleton;
}

// UDS_SkillProcessAbility @ 14b594a30

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

UDS_SkillProcessAbility * __thiscall
UDS_SkillProcessAbility::UDS_SkillProcessAbility
          (UDS_SkillProcessAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->SkillData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_SkillProcessAbility @ 14b595550

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

void __thiscall UDS_SkillProcessAbility::~UDS_SkillProcessAbility(UDS_SkillProcessAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b5971b0

UClass * __cdecl UDS_SkillProcessAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SkillProcessAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SkillProcessAbility",
               &Z_Registration_Info_UClass_UDS_SkillProcessAbility.InnerSingleton,
               StaticRegisterNativesUDS_SkillProcessAbility,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SkillProcessAbility>,
               InternalVTableHelperCtorCaller<UDS_SkillProcessAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SkillProcessAbility.InnerSingleton;
}

// StaticRegisterNativesUDS_SkillProcessAbility @ 14b5978d0

void __cdecl UDS_SkillProcessAbility::StaticRegisterNativesUDS_SkillProcessAbility(void)

{
  return;
}

// UDS_SkillProcessAbility @ 14b8234b0

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

UDS_SkillProcessAbility * __thiscall
UDS_SkillProcessAbility::UDS_SkillProcessAbility
          (UDS_SkillProcessAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->SkillData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ActiveSkill @ 14b824680

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

void __thiscall UDS_SkillProcessAbility::ActiveSkill(UDS_SkillProcessAbility *this,int param_1)

{
  EDS_SkillUseType EVar1;
  bool bVar2;
  FDS_SkillTableRow *pFVar3;
  UDS_LogManager *pUVar4;
  FDS_SkillConditionTableRow *pFVar5;
  UDS_TraceAbilityData *this_00;
  UObject *pUVar6;
  EDS_AbilityDeactivateType *pEVar7;
  TObjectPtr<UWN_AbilityContext>_u_0 TVar8;
  undefined1 auStackY_1c8 [32];
  EDS_AbilityDeactivateType local_188;
  EDS_AbilityDeactivateType local_187 [7];
  FWeakObjectPtr local_180;
  UObject *local_178;
  UObject *local_170;
  FWeakObjectPtr local_168 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pFVar3 = FDS_SkillTableRow::Get((longlong)param_1,true);
  if (pFVar3 == (FDS_SkillTableRow *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_SkillProcessAbility::ActiveSkill",0x24,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_158.Ptr,0x81,L"skillTableRow is nullptr. SkillID : %d");
LAB_14b82472d:
      if ((void *)local_158._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_158._padding_);
      }
    }
  }
  else {
    pFVar5 = (FDS_SkillConditionTableRow *)0x0;
    if (0 < pFVar3->ID_MainSkill) {
      pFVar5 = FDS_SkillConditionTableRow::Get((longlong)pFVar3->ID_MainSkill,true);
    }
    local_187[0] = DeathCancel;
    UDS_AbilityDataSet::GetAbilityData<UDS_TraceAbilityData>
              ((ulong64 *)local_168,(EDS_AbilityTagType *)&this->_padding_);
    bVar2 = FWeakObjectPtr::IsValid(local_168);
    if (bVar2) {
      local_187[0] = 0x18;
      bVar2 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_187);
      if (bVar2) {
        local_188 = 0x11;
        local_187[0] = bVar2;
        UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,&local_188,local_187);
      }
      SetAbilityData(this,pFVar3,(TWeakObjectPtr<UDS_TraceAbilityData,FWeakObjectPtr>)local_168[0]);
      this_00 = (UDS_TraceAbilityData *)FWeakObjectPtr::Get(local_168);
      bVar2 = UDS_TraceAbilityData::IsTrackingNeeded(this_00);
      if (bVar2) {
        pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        if (pUVar6[6].field_0x11 != '\0') goto LAB_14b82486f;
        local_180.ObjectIndex = 0;
        local_180.ObjectSerialNumber = 0;
        TVar8.DebugPtr = (UWN_AbilityContext *)&local_180;
        local_188 = DeathCancel;
      }
      else {
LAB_14b82486f:
        if (pFVar5 == (FDS_SkillConditionTableRow *)0x0) {
          pUVar6 = (UObject *)this->_padding_;
          local_170 = pUVar6;
          if (pFVar3->SkillUseType == StackSkill) {
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              if (pUVar6 != (UObject *)0x0) {
                UE::GC::MarkAsReachable(pUVar6);
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)
                 ) {
                UE::GC::MarkAsReachable(pUVar6);
              }
            }
            local_180.ObjectIndex = 0;
            local_180.ObjectSerialNumber = 0;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar6);
            }
            FWeakObjectPtr::operator=(&local_180,(FObjectPtr)&local_170);
            local_178 = FWeakObjectPtr::Get(&local_180);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_178 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(local_178);
            }
            local_188 = 0x14;
          }
          else {
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              if (pUVar6 != (UObject *)0x0) {
                UE::GC::MarkAsReachable(pUVar6);
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)
                 ) {
                UE::GC::MarkAsReachable(pUVar6);
              }
            }
            local_180.ObjectIndex = 0;
            local_180.ObjectSerialNumber = 0;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar6);
            }
            FWeakObjectPtr::operator=(&local_180,(FObjectPtr)&local_170);
            local_178 = FWeakObjectPtr::Get(&local_180);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_178 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(local_178);
            }
            local_188 = 0x11;
          }
        }
        else {
          EVar1 = pFVar5->SkillUseType;
          if (EVar1 == CastingSkill) {
            pUVar6 = (UObject *)this->_padding_;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              if (pUVar6 != (UObject *)0x0) {
                UE::GC::MarkAsReachable(pUVar6);
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)
                 ) {
                UE::GC::MarkAsReachable(pUVar6);
              }
            }
            local_180.ObjectIndex = 0;
            local_180.ObjectSerialNumber = 0;
            local_170 = pUVar6;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar6);
            }
            FWeakObjectPtr::operator=(&local_180,(FObjectPtr)&local_170);
            local_178 = FWeakObjectPtr::Get(&local_180);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_178 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(local_178);
            }
            local_188 = 0x13;
          }
          else if (EVar1 == ChainSkill) {
            pUVar6 = (UObject *)this->_padding_;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              if (pUVar6 != (UObject *)0x0) {
                UE::GC::MarkAsReachable(pUVar6);
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)
                 ) {
                UE::GC::MarkAsReachable(pUVar6);
              }
            }
            local_180.ObjectIndex = 0;
            local_180.ObjectSerialNumber = 0;
            local_170 = pUVar6;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar6);
            }
            FWeakObjectPtr::operator=(&local_180,(FObjectPtr)&local_170);
            local_178 = FWeakObjectPtr::Get(&local_180);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_178 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(local_178);
            }
            local_188 = 0x12;
          }
          else {
            if (((EVar1 != ToggleSkill) && (EVar1 != ToggleAttackSkill)) &&
               (EVar1 != ToggleSkillShield)) {
              pUVar6 = (UObject *)this->_padding_;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                if (pUVar6 != (UObject *)0x0) {
                  UE::GC::MarkAsReachable(pUVar6);
                }
                if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                   (pUVar6 != (UObject *)0x0)) {
                  UE::GC::MarkAsReachable(pUVar6);
                }
              }
              local_180.ObjectIndex = 0;
              local_180.ObjectSerialNumber = 0;
              local_178 = pUVar6;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)
                 ) {
                UE::GC::MarkAsReachable(pUVar6);
              }
              FWeakObjectPtr::operator=(&local_180,(FObjectPtr)&local_178);
              local_170 = FWeakObjectPtr::Get(&local_180);
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (local_170 != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(local_170);
              }
              local_188 = 0x11;
              TVar8.DebugPtr = (UWN_AbilityContext *)&local_170;
              goto LAB_14b824c26;
            }
            pUVar6 = (UObject *)this->_padding_;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              if (pUVar6 != (UObject *)0x0) {
                UE::GC::MarkAsReachable(pUVar6);
              }
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)
                 ) {
                UE::GC::MarkAsReachable(pUVar6);
              }
            }
            local_180.ObjectIndex = 0;
            local_180.ObjectSerialNumber = 0;
            local_170 = pUVar6;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0))
            {
              UE::GC::MarkAsReachable(pUVar6);
            }
            FWeakObjectPtr::operator=(&local_180,(FObjectPtr)&local_170);
            local_178 = FWeakObjectPtr::Get(&local_180);
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (local_178 != (UObject *)0x0)) {
              UE::GC::MarkAsReachable(local_178);
            }
            local_188 = 0x15;
          }
        }
        TVar8.DebugPtr = (UWN_AbilityContext *)&local_178;
      }
LAB_14b824c26:
      UDS_GameplayAbility::TryActivateAbility
                ((UDS_GameplayAbility *)this,&local_188,(TObjectPtr<UWN_AbilityContext>)TVar8);
      pEVar7 = &local_188;
      local_188 = Success;
      goto LAB_14b824c3d;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_SkillProcessAbility::ActiveSkill",0x24,Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_158.Ptr,0x90,L"traceAbilityData is invalid.");
      goto LAB_14b82472d;
    }
  }
  local_187[0] = Cancel;
  pEVar7 = local_187;
LAB_14b824c3d:
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,pEVar7);
  return;
}

// OnAbilityRetryActivate @ 14b837c80

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

void __thiscall UDS_SkillProcessAbility::OnAbilityRetryActivate(UDS_SkillProcessAbility *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  UDS_GameplayAbility::GetContextData<UDS_SkillAbilityContext>((UDS_GameplayAbility *)this);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    ActiveSkill(this,*(int *)(pUVar2 + 1));
  }
  return;
}

// OnCanActivate @ 14b83a610

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

bool __thiscall UDS_SkillProcessAbility::OnCanActivate(UDS_SkillProcessAbility *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> TVar7;
  UDS_SkillData *this_00;
  void *pvVar8;
  undefined1 auStackY_2c8 [32];
  FWeakObjectPtr local_280;
  FWeakObjectPtr local_278;
  EDS_SpecialBuffType local_270;
  undefined1 local_26c [20];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  bVar2 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (!bVar2) {
    return false;
  }
  UDS_GameplayAbility::GetContextData<UDS_SkillAbilityContext>((UDS_GameplayAbility *)this);
  bVar2 = FWeakObjectPtr::IsValid(&local_280);
  if (bVar2) {
    pUVar6 = FWeakObjectPtr::Get(&local_280);
    if (pUVar6[4].field_0x15 == '\x01') {
      return true;
    }
    pUVar6 = FWeakObjectPtr::Get(&local_280);
    TVar7 = UDS_SkillData::GetData
                      ((ulong64)local_26c,this->_padding_,SUB41(*(undefined4 *)(pUVar6 + 1),0));
                    /* WARNING: Load size is inaccurate */
    (this->SkillData).WeakPtr = *TVar7.WeakPtr;
    bVar2 = FWeakObjectPtr::IsValid(&(this->SkillData).WeakPtr);
    if (bVar2) {
      this_00 = (UDS_SkillData *)FWeakObjectPtr::Get(&(this->SkillData).WeakPtr);
      bVar2 = UDS_SkillData::IsAffectedByForbidCombatSkill(this_00);
      if (bVar2) {
        local_270 = ForbidCombatSkill;
        bVar2 = UDS_CharBuffData::CheckForbidSpecialBuff
                          ((ulong64 *)&this->_padding_,&local_270,
                           (bool *)((longlong)&this->_padding_ + 1));
        if (!bVar2) {
          return false;
        }
      }
      pUVar6 = FWeakObjectPtr::Get(&(this->SkillData).WeakPtr);
      cVar3 = (**(code **)(*(longlong *)pUVar6 + 0x2f8))(pUVar6);
      if (cVar3 == '\0') {
        return false;
      }
      UDS_AbilityDataSet::GetAbilityData<UDS_AirWalkAbilityData>
                ((ulong64 *)&local_278,(EDS_AbilityTagType *)&this->_padding_);
      bVar2 = FWeakObjectPtr::IsValid(&local_278);
      if (!bVar2) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_8646657838531215279>,true,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_SkillProcessAbility.cpp"
                           ,0x51,"airwalkAbilityData.IsValid()");
        if (!bVar2) {
          return false;
        }
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      pUVar6 = FWeakObjectPtr::Get(&local_278);
      if (pUVar6[5].field_0x15 != '\0') {
        return true;
      }
      pUVar6 = FWeakObjectPtr::Get(&local_278);
      if (pUVar6[5].field_0x10 != '\0') {
        return false;
      }
      if (pUVar6[5].field_0x11 != '\0') {
        return false;
      }
      pUVar6 = FWeakObjectPtr::Get(&local_278);
      return pUVar6[4].field_0x20 == '\0';
    }
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar5 = UDS_LogManager::GetInst();
    FWeakObjectPtr::Get(&local_280);
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_SkillProcessAbility::OnCanActivate",0x26,Yes);
    UDS_LogManager::PrintLog
              (pUVar5,1,Warning,local_138.Ptr,0x3c,L"skill data is invalid. SkillID : %d");
    pvVar8 = (void *)local_138._padding_;
  }
  else {
    pUVar5 = UDS_LogManager::GetInst();
    if (pUVar5 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar5 = UDS_LogManager::GetInst();
    local_258._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_258,"UDS_SkillProcessAbility::OnCanActivate",0x26,Yes);
    UDS_LogManager::PrintLog(pUVar5,1,Warning,local_258.Ptr,0x30,L"skill context is invalid.");
    pvVar8 = (void *)local_258._padding_;
  }
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  return false;
}

// OnDeactivateAbility @ 14b83f950

void __thiscall
UDS_SkillProcessAbility::OnDeactivateAbility(UDS_SkillProcessAbility *this,bool *param_1)

{
  return;
}

// OnPostActivateAbility @ 14b845de0

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

void __thiscall UDS_SkillProcessAbility::OnPostActivateAbility(UDS_SkillProcessAbility *this)

{
  FWeakObjectPtr *pFVar1;
  FDS_EntityBase *this_00;
  bool bVar2;
  UDS_SkillDataSet *this_01;
  UObject *pUVar3;
  UObject *pUVar4;
  int iVar5;
  ForAnyElementType this_02;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_38;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->SkillData).WeakPtr);
  if (bVar2) {
    TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_res10);
    bVar2 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar2) {
      this_01 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_res10);
      UDS_SkillDataSet::GetCurrentActiveSkillList(this_01,&local_38);
      iVar5 = local_38.ArrayNum;
      pFVar1 = (FWeakObjectPtr *)(local_38.AllocatorInstance.Data + (longlong)iVar5 * 8);
      this_02.Data = local_38.AllocatorInstance.Data;
      while( true ) {
        if (local_38.ArrayNum != iVar5) {
          `TCheckedPointerIterator<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_res8);
        }
        if ((FWeakObjectPtr *)this_02.Data == pFVar1) break;
        pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.Data);
        if (pUVar3[9].field_0x8 != '\x01') {
          pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.Data);
          if (pUVar3[9].field_0x8 != '\x02') {
            pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.Data);
            pUVar4 = FWeakObjectPtr::Get(&(this->SkillData).WeakPtr);
            if (*(int *)&pUVar3[2].field_0x1c != *(int *)&pUVar4[2].field_0x1c) {
              this_00 = (FDS_EntityBase *)this->_padding_;
              pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.Data);
              FDS_EntityBase::DeActivateSkillAbility(this_00,*(int *)&pUVar3[2].field_0x1c,Cancel);
            }
          }
        }
        this_02.Data = this_02.Data + 8;
      }
      if ((FWeakObjectPtr *)local_38.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
    }
  }
  UDS_GameplayAbility::GetContextData<UDS_SkillAbilityContext>((UDS_GameplayAbility *)this);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_res18);
    ActiveSkill(this,*(int *)(pUVar3 + 1));
  }
  return;
}

// SetAbilityData @ 14b84ed80

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
UDS_SkillProcessAbility::SetAbilityData
          (UDS_SkillProcessAbility *this,FDS_SkillTableRow *param_1,
          TWeakObjectPtr<UDS_TraceAbilityData,FWeakObjectPtr> param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_CharStateData *this_00;
  UObject *pUVar3;
  UDS_FindTargetAbilityData *this_01;
  UDS_TraceAbilityData *this_02;
  UDS_MoveToTargetAbilityData *this_03;
  ulong64 uVar4;
  FWeakObjectPtr local_res18 [2];
  undefined1 auStackY_1c8 [32];
  uint uVar5;
  wchar_t *pwVar6;
  EDS_AbilityTagType local_198 [8];
  FWeakObjectPtr local_190;
  FWeakObjectPtr local_188;
  FWeakObjectPtr local_180;
  FWeakObjectPtr local_178;
  FWeakObjectPtr local_170;
  UObject *local_168;
  UObject *local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  local_res18[0] = param_2.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (!bVar1) {
    return;
  }
  UDS_PlayerData::GetData((ulong64)&local_178,this->_padding_,false);
  bVar1 = FWeakObjectPtr::IsValid(&local_178);
  if (bVar1) {
    UDS_CharStateData::GetData((ulong64)&local_180);
    bVar1 = FWeakObjectPtr::IsValid(&local_180);
    if (bVar1) {
      this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_180);
      local_190.ObjectIndex = 0x10;
      local_190.ObjectSerialNumber = 0;
      bVar1 = UDS_CharStateData::HasCharState(this_00,(EDS_CharState *)&local_190);
      if (bVar1) {
        return;
      }
      pUVar3 = FWeakObjectPtr::Get(&local_178);
      local_198[0] = FindTarget;
      uVar4 = *(ulong64 *)&pUVar3[9].field_0x8;
      UDS_AbilityDataSet::GetAbilityData<UDS_FindTargetAbilityData>
                ((ulong64 *)&local_188,(EDS_AbilityTagType *)&this->_padding_);
      bVar1 = FWeakObjectPtr::IsValid(&local_188);
      if (bVar1) {
        this_01 = (UDS_FindTargetAbilityData *)FWeakObjectPtr::Get(&local_188);
        UDS_FindTargetAbilityData::SetFindTargetDataBySkillID(this_01,param_1->ID);
        pUVar3 = (UObject *)this->_padding_;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pUVar3 != (UObject *)0x0) {
            UE::GC::MarkAsReachable(pUVar3);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(pUVar3);
          }
        }
        local_190.ObjectIndex = 0;
        local_190.ObjectSerialNumber = 0;
        local_168 = pUVar3;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar3);
        }
        FWeakObjectPtr::operator=(&local_190,(FObjectPtr)&local_168);
        local_160 = FWeakObjectPtr::Get(&local_190);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_160 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(local_160);
        }
        local_198[0] = FindTarget;
        UDS_GameplayAbility::TryActivateAbility
                  ((UDS_GameplayAbility *)this,local_198,(TObjectPtr<UWN_AbilityContext>)&local_160)
        ;
        pUVar3 = FWeakObjectPtr::Get(&local_188);
        uVar4 = *(ulong64 *)&pUVar3[2].field_0x10;
      }
      this_02 = (UDS_TraceAbilityData *)FWeakObjectPtr::Get(local_res18);
      UDS_TraceAbilityData::SetTargetTraceData
                (this_02,(FDS_EntityBase *)this->_padding_,param_1,uVar4,false);
      local_198[0] = MoveToTarget;
      UDS_AbilityDataSet::GetAbilityData<UDS_MoveToTargetAbilityData>
                ((ulong64 *)&local_170,(EDS_AbilityTagType *)&this->_padding_);
      bVar1 = FWeakObjectPtr::IsValid(&local_170);
      if (bVar1) {
        this_03 = (UDS_MoveToTargetAbilityData *)FWeakObjectPtr::Get(&local_170);
        UDS_MoveToTargetAbilityData::SetMoveToTargetDataBySkill(this_03,uVar4,param_1);
        return;
      }
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_SkillProcessAbility::SetAbilityData",0x27,Yes);
      pwVar6 = L"moveToTargetAbilityData is invalid.";
      uVar5 = 0x108;
    }
    else {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_158._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_158,"UDS_SkillProcessAbility::SetAbilityData",0x27,Yes);
      pwVar6 = L"charStateData is invalid.";
      uVar5 = 0xeb;
    }
  }
  else {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_158._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_158,"UDS_SkillProcessAbility::SetAbilityData",0x27,Yes);
    pwVar6 = L"playerData is invalid.";
    uVar5 = 0xe4;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_158.Ptr,uVar5,pwVar6);
  if ((void *)local_158._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_158._padding_);
  }
  return;
}

// TerminateAllSkills @ 14b851ae0

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

void __thiscall UDS_SkillProcessAbility::TerminateAllSkills(UDS_SkillProcessAbility *this)

{
  FWeakObjectPtr *pFVar1;
  FDS_EntityBase *this_00;
  bool bVar2;
  UDS_SkillDataSet *this_01;
  UObject *pUVar3;
  UObject *pUVar4;
  int iVar5;
  ForAnyElementType this_02;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res10;
  TArray<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> local_38;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->SkillData).WeakPtr);
  if (bVar2) {
    TDS_DataSetGetter<UDS_SkillDataSet>::Get((ulong64)&local_res10);
    bVar2 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar2) {
      this_01 = (UDS_SkillDataSet *)FWeakObjectPtr::Get(&local_res10);
      UDS_SkillDataSet::GetCurrentActiveSkillList(this_01,&local_38);
      iVar5 = local_38.ArrayNum;
      pFVar1 = (FWeakObjectPtr *)(local_38.AllocatorInstance.Data + (longlong)iVar5 * 8);
      this_02.Data = local_38.AllocatorInstance.Data;
      while( true ) {
        if (local_38.ArrayNum != iVar5) {
          `TCheckedPointerIterator<TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_res8);
        }
        if ((FWeakObjectPtr *)this_02.Data == pFVar1) break;
        pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.Data);
        if (pUVar3[9].field_0x8 != '\x01') {
          pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.Data);
          if (pUVar3[9].field_0x8 != '\x02') {
            pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.Data);
            pUVar4 = FWeakObjectPtr::Get(&(this->SkillData).WeakPtr);
            if (*(int *)&pUVar3[2].field_0x1c != *(int *)&pUVar4[2].field_0x1c) {
              this_00 = (FDS_EntityBase *)this->_padding_;
              pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.Data);
              FDS_EntityBase::DeActivateSkillAbility(this_00,*(int *)&pUVar3[2].field_0x1c,Cancel);
            }
          }
        }
        this_02.Data = this_02.Data + 8;
      }
      if ((FWeakObjectPtr *)local_38.AllocatorInstance.Data != (FWeakObjectPtr *)0x0) {
        FMemory::Free(local_38.AllocatorInstance.Data);
      }
    }
  }
  return;
}


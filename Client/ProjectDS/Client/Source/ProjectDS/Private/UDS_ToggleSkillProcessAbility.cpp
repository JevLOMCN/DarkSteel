// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// StaticClass @ 14b5c3cc0

UClass * __cdecl UDS_ToggleSkillProcessAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ToggleSkillProcessAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ToggleSkillProcessAbility",
               &Z_Registration_Info_UClass_UDS_ToggleSkillProcessAbility.InnerSingleton,
               StaticRegisterNativesUDS_ToggleSkillProcessAbility,0x168,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ToggleSkillProcessAbility>,
               InternalVTableHelperCtorCaller<UDS_ToggleSkillProcessAbility>,local_res8,
               UDS_SkillAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ToggleSkillProcessAbility.InnerSingleton;
}

// UDS_ToggleSkillProcessAbility @ 14b5c72e0

UDS_ToggleSkillProcessAbility * __thiscall
UDS_ToggleSkillProcessAbility::UDS_ToggleSkillProcessAbility
          (UDS_ToggleSkillProcessAbility *this,FVTableHelper *param_1)

{
  UDS_SkillAbility::UDS_SkillAbility((UDS_SkillAbility *)this,param_1);
  this->SkillID = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// ~UDS_ToggleSkillProcessAbility @ 14b5c8bf0

void __thiscall
UDS_ToggleSkillProcessAbility::~UDS_ToggleSkillProcessAbility(UDS_ToggleSkillProcessAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_SkillAbility::~UDS_SkillAbility((UDS_SkillAbility *)this);
  return;
}

// GetDefaultInputPolicy @ 14b5cb870

EDS_AbilityInputPolicy __thiscall
UDS_ToggleSkillProcessAbility::GetDefaultInputPolicy(UDS_ToggleSkillProcessAbility *this)

{
  return None;
}

// GetPrivateStaticClass @ 14b5cbf60

UClass * __cdecl UDS_ToggleSkillProcessAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ToggleSkillProcessAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ToggleSkillProcessAbility",
               &Z_Registration_Info_UClass_UDS_ToggleSkillProcessAbility.InnerSingleton,
               StaticRegisterNativesUDS_ToggleSkillProcessAbility,0x168,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_ToggleSkillProcessAbility>,
               InternalVTableHelperCtorCaller<UDS_ToggleSkillProcessAbility>,local_res8,
               UDS_SkillAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ToggleSkillProcessAbility.InnerSingleton;
}

// StaticRegisterNativesUDS_ToggleSkillProcessAbility @ 14b5cdff0

void __cdecl UDS_ToggleSkillProcessAbility::StaticRegisterNativesUDS_ToggleSkillProcessAbility(void)

{
  return;
}

// UDS_ToggleSkillProcessAbility @ 14b823620

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

UDS_ToggleSkillProcessAbility * __thiscall
UDS_ToggleSkillProcessAbility::UDS_ToggleSkillProcessAbility
          (UDS_ToggleSkillProcessAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->SkillID = 0;
  return this;
}

// ClearVariables @ 14b828060

void __thiscall UDS_ToggleSkillProcessAbility::ClearVariables(UDS_ToggleSkillProcessAbility *this)

{
  this->_padding_ = 0;
  this->SkillID = 0;
  this->ActiveToggleSkillTagType = None;
  return;
}

// GetSkillData @ 14b831f90

TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> __thiscall
UDS_ToggleSkillProcessAbility::GetSkillData(UDS_ToggleSkillProcessAbility *this,int param_1)

{
  int in_register_00000014;
  FWeakObjectPtr FVar1;
  bool in_R8B;
  
  FVar1.ObjectSerialNumber = in_register_00000014;
  FVar1.ObjectIndex = param_1;
  UDS_SkillData::GetData((ulong64)FVar1,this->_padding_,in_R8B);
  return (TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)FVar1;
}

// GetToggleSkillTagType @ 14b8329d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

EDS_AbilityTagType __thiscall
UDS_ToggleSkillProcessAbility::GetToggleSkillTagType
          (UDS_ToggleSkillProcessAbility *this,int param_1)

{
  byte bVar1;
  bool bVar2;
  UObject *pUVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_1a8 [32];
  FWeakObjectPtr local_168;
  FString local_160;
  FString local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  UDS_SkillData::GetData((ulong64)&local_168,this->_padding_,SUB41(param_1,0));
  bVar2 = FWeakObjectPtr::IsValid(&local_168);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&local_168);
    bVar1 = pUVar3[9].field_0x9;
    if ((bVar1 == 1) || (bVar1 == 2)) {
      return ToggleSkill_Default;
    }
    if (bVar1 == 3) {
      return ToggleSkill_Move;
    }
    ::FString::FString(&local_150,"EDS_ToggleSkillType");
    DS_Util::GetEnumToString(&local_160,&local_150,(ulonglong)bVar1);
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_ToggleSkillProcessAbility::GetToggleSkillTagType",0x34,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x138,
                 L"Toggle skill tag not found. ToggleSkillType : %s");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
  }
  pUVar4 = UDS_LogManager::GetInst();
  if (pUVar4 != (UDS_LogManager *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_ToggleSkillProcessAbility::GetToggleSkillTagType",0x34,Yes);
    UDS_LogManager::PrintLog
              (pUVar4,1,Warning,local_138.Ptr,0x13e,L"Toggle skill tag not found. SkillID : %d");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return None;
}

// InitOtherAbilityEventSubscriptions @ 14b834bf0

void __thiscall
UDS_ToggleSkillProcessAbility::InitOtherAbilityEventSubscriptions
          (UDS_ToggleSkillProcessAbility *this)

{
  return;
}

// OnAbilityRetryActivate @ 14b837d00

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
UDS_ToggleSkillProcessAbility::OnAbilityRetryActivate(UDS_ToggleSkillProcessAbility *this)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  UObject *pUVar5;
  UDS_SkillData *pUVar6;
  UDS_LogManager *pUVar7;
  UDS_GameInstance *pUVar8;
  UDS_RotateToTargetAbilityData *this_00;
  longlong lVar9;
  undefined1 auStackY_1b8 [32];
  uint uVar10;
  wchar_t *pwVar11;
  EDS_AbilityDeactivateType EStack_178;
  EDS_AbilityTagType aEStack_177 [7];
  FWeakObjectPtr FStack_170;
  FWeakObjectPtr FStack_168;
  FWeakObjectPtr FStack_160;
  FWeakObjectPtr FStack_158;
  FWeakObjectPtr FStack_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> TStack_148;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  UDS_GameplayAbility::GetContextData<UDS_SkillAbilityContext>((UDS_GameplayAbility *)this);
  bVar3 = FWeakObjectPtr::IsValid(&FStack_170);
  if (!bVar3) {
    EStack_178 = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,&EStack_178);
    return;
  }
  pUVar5 = FWeakObjectPtr::Get(&FStack_170);
  UDS_SkillData::GetData((ulong64)&FStack_158,this->_padding_,SUB41(*(undefined4 *)(pUVar5 + 1),0));
  bVar3 = FWeakObjectPtr::IsValid(&FStack_158);
  if (!bVar3) {
    EStack_178 = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,&EStack_178);
    return;
  }
  pUVar6 = (UDS_SkillData *)FWeakObjectPtr::Get(&FStack_158);
  bVar3 = UDS_SkillData::IsSkillActive(pUVar6);
  if (bVar3) {
    pUVar6 = (UDS_SkillData *)FWeakObjectPtr::Get(&FStack_158);
    bVar3 = UDS_SkillData::CheckToggleEndWaitTime(pUVar6);
    if (!bVar3) {
      return;
    }
  }
  if (this->ActiveToggleSkillTagType != None) {
    iVar4 = this->SkillID;
    pUVar5 = FWeakObjectPtr::Get(&FStack_170);
    if (*(int *)(pUVar5 + 1) == iVar4) {
      EStack_178 = Success;
      UDS_GameplayAbility::DeactivateAbility
                ((UDS_GameplayAbility *)this,&this->ActiveToggleSkillTagType,&EStack_178);
      EStack_178 = Success;
      UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,&EStack_178);
      return;
    }
    EStack_178 = Cancel;
    UDS_GameplayAbility::DeactivateAbility
              ((UDS_GameplayAbility *)this,&this->ActiveToggleSkillTagType,&EStack_178);
  }
  pUVar5 = FWeakObjectPtr::Get(&FStack_170);
  aEStack_177[0] = GetToggleSkillTagType(this,*(int *)(pUVar5 + 1));
  if (aEStack_177[0] != None) {
    pUVar5 = FWeakObjectPtr::Get(&FStack_170);
    UDS_SkillData::GetData
              ((ulong64)&FStack_168,this->_padding_,SUB41(*(undefined4 *)(pUVar5 + 1),0));
    bVar3 = FWeakObjectPtr::IsValid(&FStack_168);
    if (bVar3) {
      EStack_178 = 0x1b;
      UDS_AbilityDataSet::GetAbilityData<UDS_FindTargetAbilityData>
                ((ulong64 *)&FStack_160,(EDS_AbilityTagType *)&this->_padding_);
      bVar3 = FWeakObjectPtr::IsValid(&FStack_160);
      if (bVar3) {
        pUVar8 = UDS_GameInstance::GetInst();
        if (pUVar8->bUseNewRotateAbility == false) {
          EStack_178 = 0x1d;
          UDS_AbilityDataSet::GetAbilityData<UDS_RotateToTargetAbilityData>
                    ((ulong64 *)&FStack_150,(EDS_AbilityTagType *)&this->_padding_);
          bVar3 = FWeakObjectPtr::IsValid(&FStack_150);
          if (bVar3) {
            this_00 = (UDS_RotateToTargetAbilityData *)FWeakObjectPtr::Get(&FStack_150);
            bVar3 = UDS_RotateToTargetAbilityData::SetRotateToTargetDataBySkillData
                              (this_00,(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)FStack_168);
            if (!bVar3) goto LAB_14b851f07;
          }
        }
        FStack_160 = (FWeakObjectPtr)FWeakObjectPtr::Get(&FStack_170);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (FStack_160 != (FWeakObjectPtr)0x0)) {
          UE::GC::MarkAsReachable((UObject *)FStack_160);
        }
        UDS_GameplayAbility::TryActivateAbility
                  ((UDS_GameplayAbility *)this,aEStack_177,
                   (TObjectPtr<UWN_AbilityContext>)&FStack_160);
        plVar2 = &this->_padding_;
        piVar1 = (int *)((longlong)&this->_padding_ + 4);
        if (*(int *)((longlong)&this->_padding_ + 4) < 1) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,1,(ForAnyElementType *)plVar2,(int)this->_padding_,piVar1);
        }
        pUVar8 = UDS_GameInstance::GetInst();
        if (pUVar8->bUseNewRotateAbility == false) {
          FStack_160 = (FWeakObjectPtr)FWeakObjectPtr::Get(&FStack_170);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (FStack_160 != (FWeakObjectPtr)0x0)) {
            UE::GC::MarkAsReachable((UObject *)FStack_160);
          }
          EStack_178 = 0x1d;
          UDS_GameplayAbility::TryActivateAbility
                    ((UDS_GameplayAbility *)this,&EStack_178,
                     (TObjectPtr<UWN_AbilityContext>)&FStack_160);
          EStack_178 = 0x1d;
          UDS_GameplayAbility::GetAbility
                    ((UDS_GameplayAbility *)this,(EDS_AbilityTagType *)&FStack_168);
          bVar3 = TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr> *)&FStack_168,
                             (void *)0x0);
          if (bVar3) goto LAB_14b8520c7;
          iVar4 = (int)this->_padding_;
          if (iVar4 == *(int *)((longlong)&this->_padding_ + 4)) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,(ForAnyElementType *)plVar2,piVar1);
          }
          *(int *)&this->_padding_ = iVar4 + 1;
          lVar9 = *plVar2;
        }
        else {
          FStack_160 = (FWeakObjectPtr)FWeakObjectPtr::Get(&FStack_170);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (FStack_160 != (FWeakObjectPtr)0x0)) {
            UE::GC::MarkAsReachable((UObject *)FStack_160);
          }
          EStack_178 = 0x1e;
          UDS_GameplayAbility::TryActivateAbility
                    ((UDS_GameplayAbility *)this,&EStack_178,
                     (TObjectPtr<UWN_AbilityContext>)&FStack_160);
          EStack_178 = 0x1e;
          UDS_GameplayAbility::GetAbility
                    ((UDS_GameplayAbility *)this,(EDS_AbilityTagType *)&FStack_168);
          bVar3 = TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr> *)&FStack_168,
                             (void *)0x0);
          if (bVar3) goto LAB_14b8520c7;
          iVar4 = (int)this->_padding_;
          if (iVar4 == *(int *)((longlong)&this->_padding_ + 4)) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,(ForAnyElementType *)&this->_padding_,piVar1);
          }
          *(int *)&this->_padding_ = iVar4 + 1;
          lVar9 = this->_padding_;
        }
        *(FWeakObjectPtr *)(lVar9 + (longlong)iVar4 * 8) = FStack_168;
LAB_14b8520c7:
        pUVar5 = FWeakObjectPtr::Get(&FStack_170);
        SendToggleSkill(this,*(int *)(pUVar5 + 1),true);
        return;
      }
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 == (UDS_LogManager *)0x0) goto LAB_14b851f07;
      pUVar7 = UDS_LogManager::GetInst();
      TStack_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_148,"UDS_ToggleSkillProcessAbility::SetToggleSkillData",0x31,Yes);
      pwVar11 = L"findTargetData is Invalid. EntityID : %d";
      uVar10 = 0x59;
    }
    else {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 == (UDS_LogManager *)0x0) goto LAB_14b851f07;
      pUVar7 = UDS_LogManager::GetInst();
      TStack_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&TStack_148,"UDS_ToggleSkillProcessAbility::SetToggleSkillData",0x31,Yes);
      pwVar11 = L"skillData is Invalid. SkillID : %d";
      uVar10 = 0x52;
    }
    UDS_LogManager::PrintLog(pUVar7,1,Warning,TStack_148.Ptr,uVar10,pwVar11);
    if ((void *)TStack_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)TStack_148._padding_);
    }
  }
LAB_14b851f07:
  EStack_178 = Cancel;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,&EStack_178);
  return;
}

// OnCanActivate @ 14b83b830

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

bool __thiscall UDS_ToggleSkillProcessAbility::OnCanActivate(UDS_ToggleSkillProcessAbility *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> TVar4;
  undefined1 auStackY_198 [32];
  FWeakObjectPtr local_158;
  FWeakObjectPtr local_150;
  undefined1 local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    UDS_GameplayAbility::GetContextData<UDS_SkillAbilityContext>((UDS_GameplayAbility *)this);
    bVar1 = FWeakObjectPtr::IsValid(&local_158);
    if (bVar1) {
      pUVar3 = FWeakObjectPtr::Get(&local_158);
      TVar4 = UDS_SkillData::GetData
                        ((ulong64)local_148,this->_padding_,SUB41(*(undefined4 *)(pUVar3 + 1),0));
      this->_padding_ = *(longlong *)TVar4.WeakPtr;
      bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
      if (bVar1) {
        UDS_GameplayAbility::GetContextData<UDS_SkillAbilityContext>((UDS_GameplayAbility *)this);
        bVar1 = FWeakObjectPtr::IsValid(&local_150);
        return bVar1;
      }
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar2 = UDS_LogManager::GetInst();
      FWeakObjectPtr::Get(&local_158);
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_SkillAbility::OnCanActivate",0x1f,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x23,L"skill data is invalid. SkillID : %d");
    }
    else {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_SkillAbility::OnCanActivate",0x1f,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x1c,L"skill context is invalid.");
    }
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  return false;
}

// OnDeactivateAbility @ 14b8401b0

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
UDS_ToggleSkillProcessAbility::OnDeactivateAbility
          (UDS_ToggleSkillProcessAbility *this,bool *param_1)

{
  EDS_AbilityInputPolicy local_res8 [8];
  
  local_res8[0] = None;
  UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_res8);
  local_res8[0] = 0x1d;
  UDS_GameplayAbility::DeactivateAbility
            ((UDS_GameplayAbility *)this,local_res8,(EDS_AbilityDeactivateType *)&this->_padding_);
  local_res8[0] = 0x1e;
  UDS_GameplayAbility::DeactivateAbility
            ((UDS_GameplayAbility *)this,local_res8,(EDS_AbilityDeactivateType *)&this->_padding_);
  local_res8[0] = 0x17;
  UDS_GameplayAbility::DeactivateAbility
            ((UDS_GameplayAbility *)this,local_res8,(EDS_AbilityDeactivateType *)&this->_padding_);
  local_res8[0] = 0x16;
  UDS_GameplayAbility::DeactivateAbility
            ((UDS_GameplayAbility *)this,local_res8,(EDS_AbilityDeactivateType *)&this->_padding_);
  if ((this->ActiveToggleSkillTagType != None) || (0 < this->SkillID)) {
    local_res8[0] = EndIfInputWithAniCut;
    UDS_GameplayAbility::DeactivateAbility
              ((UDS_GameplayAbility *)this,&this->ActiveToggleSkillTagType,local_res8);
  }
  SendToggleSkill(this,this->SkillID,false);
  return;
}

// OnDeactivatedOtherAbility @ 14b840580

void __thiscall
UDS_ToggleSkillProcessAbility::OnDeactivatedOtherAbility
          (UDS_ToggleSkillProcessAbility *this,FGameplayTag *param_1,bool *param_2)

{
  return;
}

// OnPostActivateAbility @ 14b846c90

void __thiscall
UDS_ToggleSkillProcessAbility::OnPostActivateAbility(UDS_ToggleSkillProcessAbility *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  UDS_AbnormalAbilityData *pUVar4;
  UObject *pUVar5;
  undefined4 local_res10 [2];
  FWeakObjectPtr local_res18;
  
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar3) {
    UDS_AbilityDataSet::GetAbilityData<UDS_AbnormalAbilityData>
              ((ulong64 *)&local_res18,(EDS_AbilityTagType *)&this->_padding_);
    bVar3 = FWeakObjectPtr::IsValid(&local_res18);
    if (bVar3) {
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      if (pUVar5[8].field_0x25 == '\x01') {
        pUVar4 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&local_res18);
        UDS_AbnormalAbilityData::RemoveAbnormalGroup(pUVar4,StateControl);
      }
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      if (pUVar5[8].field_0x26 == '\x01') {
        pUVar4 = (UDS_AbnormalAbilityData *)FWeakObjectPtr::Get(&local_res18);
        UDS_AbnormalAbilityData::RemoveAbnormalGroup(pUVar4,MoveControl);
      }
    }
    else {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_139802890586816394>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_SkillAbility.cpp"
                         ,0x76,"abnormalAbilityData.IsValid()");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar3) {
    plVar1 = (longlong *)this->_padding_;
    pcVar2 = *(code **)(*plVar1 + 0x90);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    local_res10[0] = *(undefined4 *)&pUVar5[2].field_0x1c;
    (*pcVar2)(plVar1,local_res10);
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_139802890586816464>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_SkillAbility.cpp"
                       ,0x30,"OwnerSkillData.IsValid()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  ToggleSkill(this);
  return;
}

// OnTickComponent @ 14b84a860

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
UDS_ToggleSkillProcessAbility::OnTickComponent(UDS_ToggleSkillProcessAbility *this,float param_1)

{
  bool bVar1;
  UDS_SkillData *this_00;
  EDS_AbilityDeactivateType local_res8 [8];
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    this_00 = (UDS_SkillData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar1 = UDS_SkillData::CheckSkillCost(this_00);
    if (!bVar1) {
      local_res8[0] = Cancel;
      UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
    }
  }
  return;
}

// SendToggleSkill @ 14b84ea70

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
UDS_ToggleSkillProcessAbility::SendToggleSkill
          (UDS_ToggleSkillProcessAbility *this,int param_1,bool param_2)

{
  longlong *plVar1;
  bool bVar2;
  EDS_AbilityTagType EVar3;
  UDS_SkillData *this_00;
  UDS_SendPacketManager *this_01;
  UDS_MovementCore *pUVar4;
  TRotator<double> *pTVar5;
  FDS_GetTargetLocationResult *pFVar6;
  UObject *pUVar7;
  UDS_PlayerData *this_02;
  ulong64 uVar8;
  float fVar9;
  FWeakObjectPtr local_res8;
  undefined1 local_res10;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_188;
  FWeakObjectPtr local_180;
  TVector<double>_u_0 local_178;
  FDS_GetTargetLocationResult local_160;
  TVector<double>_u_0 local_138;
  FDS_SendSkillData local_118;
  FDS_GetTargetLocationResult local_68;
  
  plVar1 = &this->_padding_;
  UDS_SkillData::GetData((ulong64)&local_res8,*plVar1,SUB41(param_1,0));
  bVar2 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar2) {
    UDS_GameplayAbility::GetContextData<UDS_SkillAbilityContext>((UDS_GameplayAbility *)this);
    bVar2 = FWeakObjectPtr::IsValid(&local_188);
    if (bVar2) {
      this_00 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_res8);
      if (param_2) {
        (**(code **)(this_00->_padding_ + 0x2d8))(this_00,local_188);
        this->SkillID = param_1;
        EVar3 = GetToggleSkillTagType(this,param_1);
      }
      else {
        UDS_SkillData::EndSkill(this_00);
        EVar3 = None;
        this->SkillID = 0;
      }
      this->ActiveToggleSkillTagType = EVar3;
      if ((*(char *)((longlong)&this->_padding_ + 1) != '\0') &&
         (this_01 = UDS_SendPacketManager::GetInst(), this_01 != (UDS_SendPacketManager *)0x0)) {
        if (param_2) {
          pUVar4 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          UDS_MovementCore::GetActorFootLocation(pUVar4,(TVector<double> *)&local_178._s_0);
          pUVar4 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          pTVar5 = UDS_MovementCore::GetActorRotation(pUVar4,(TRotator<double> *)&local_68);
          local_res10 = 0x1b;
          uVar8 = 0;
          fVar9 = (float)pTVar5->Yaw;
          UDS_AbilityDataSet::GetAbilityData<UDS_FindTargetAbilityData>
                    ((ulong64 *)&local_res20,(EDS_AbilityTagType *)plVar1);
          bVar2 = TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr> *)
                             &local_res20,(void *)0x0);
          if (!bVar2) {
            pFVar6 = UDS_FindTargetAbility::GetTargetLocation
                               (&local_68,
                                (TWeakObjectPtr<UDS_FindTargetAbilityData,FWeakObjectPtr>)
                                local_res20,true);
            local_160.bIsValid = pFVar6->bIsValid;
            local_160._1_7_ = *(undefined7 *)&pFVar6->field_0x1;
            local_160.TargetLocation.field0_0x0._s_0.X = (pFVar6->TargetLocation).field0_0x0._s_0.X;
            local_160.TargetLocation.field0_0x0._s_0.Y = (pFVar6->TargetLocation).field0_0x0._s_0.Y;
            local_160.TargetLocation.field0_0x0._s_0.Z = (pFVar6->TargetLocation).field0_0x0._s_0.Z;
            local_160.TargetRadius = pFVar6->TargetRadius;
            local_160._36_4_ = *(undefined4 *)&pFVar6->field_0x24;
            bVar2 = FDS_GetTargetLocationResult::IsValidData(&local_160);
            if (bVar2) {
              local_138._s_0.X = local_160.TargetLocation.field0_0x0._s_0.X - local_178._s_0.X;
              local_138._s_0.Y = local_160.TargetLocation.field0_0x0._s_0.Y - local_178._s_0.Y;
              local_138._s_0.Z = local_160.TargetLocation.field0_0x0._s_0.Z - local_178._s_0.Z;
              UE::Math::TVector<double>::ToOrientationRotator
                        ((TVector<double> *)&local_138._s_0,(TRotator<double> *)&local_68);
              fVar9 = (float)local_68.TargetLocation.field0_0x0._s_0.X;
            }
            pUVar7 = FWeakObjectPtr::Get(&local_res20);
            uVar8 = *(ulong64 *)&pUVar7[2].field_0x10;
          }
          local_118.TargetEntityID = 0;
          local_118.HitSphereLocation.field0_0x0._s_0.Z =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          local_118.StopSkillDestTime = 0.0;
          local_118.HitSphereRadius = 0.0;
          local_118.StopSkillDestLocation.field0_0x0._s_0.Z =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          local_118.ProjectileEndLocation.field0_0x0._s_0.Z =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          local_118.ProjectileImpactLocation.field0_0x0._s_0.Z =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          local_118.SourceLocation.field0_0x0._s_0.X = local_178._s_0.X;
          local_118.SourceLocation.field0_0x0._s_0.Y = local_178._s_0.Y;
          local_118.HitSphereLocation.field0_0x0._s_0.X =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_118.HitSphereLocation.field0_0x0._s_0.Y =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_118.HitSphereID = -1;
          local_118.StopSkillDestLocation.field0_0x0._s_0.X =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_118.StopSkillDestLocation.field0_0x0._s_0.Y =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_118.ProjectileImpactDelay = 0.0;
          local_118.ProjectileEndLocation.field0_0x0._s_0.X =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_118.ProjectileEndLocation.field0_0x0._s_0.Y =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_118.ProjectileImpactLocation.field0_0x0._s_0.X =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_118.ProjectileImpactLocation.field0_0x0._s_0.Y =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_118.SourceLocation.field0_0x0._s_0.Z = local_178._s_0.Z;
          local_118.SkillID = param_1;
          local_118.RotateYaw = fVar9;
          pUVar7 = FWeakObjectPtr::Get(&local_res8);
          local_118.SkillStartTime = *(double *)&pUVar7[7].field_0x8;
          if (uVar8 != 0) {
            local_118.TargetEntityID = uVar8;
            UDS_PlayerData::GetData((ulong64)&local_180,*plVar1,false);
            bVar2 = FWeakObjectPtr::IsValid(&local_180);
            if (bVar2) {
              this_02 = (UDS_PlayerData *)FWeakObjectPtr::Get(&local_180);
              UDS_PlayerData::SetMainTargetEntityID(this_02,uVar8);
            }
          }
          UDS_SendPacketManager::SendPlayerSkillRequest(this_01,&local_118);
          return true;
        }
        UDS_SendPacketManager::TerminateSkillRequest(this_01,param_1);
        return true;
      }
    }
  }
  return false;
}

// SetToggleSkillData @ 14b8504f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_ToggleSkillProcessAbility::SetToggleSkillData(UDS_ToggleSkillProcessAbility *this,int param_1)

{
  longlong *plVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UDS_GameInstance *pUVar4;
  UDS_RotateToTargetAbilityData *this_00;
  undefined1 auStackY_198 [32];
  uint uVar5;
  wchar_t *pwVar6;
  FWeakObjectPtr local_150;
  FWeakObjectPtr local_148;
  FWeakObjectPtr local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  plVar1 = &this->_padding_;
  UDS_SkillData::GetData((ulong64)&local_148,*plVar1,SUB41(param_1,0));
  bVar2 = FWeakObjectPtr::IsValid(&local_148);
  if (bVar2) {
    UDS_AbilityDataSet::GetAbilityData<UDS_FindTargetAbilityData>
              ((ulong64 *)&local_140,(EDS_AbilityTagType *)plVar1);
    bVar2 = FWeakObjectPtr::IsValid(&local_140);
    if (bVar2) {
      pUVar4 = UDS_GameInstance::GetInst();
      if (pUVar4->bUseNewRotateAbility != false) {
        return true;
      }
      UDS_AbilityDataSet::GetAbilityData<UDS_RotateToTargetAbilityData>
                ((ulong64 *)&local_150,(EDS_AbilityTagType *)plVar1);
      bVar2 = FWeakObjectPtr::IsValid(&local_150);
      if (bVar2) {
        this_00 = (UDS_RotateToTargetAbilityData *)FWeakObjectPtr::Get(&local_150);
        bVar2 = UDS_RotateToTargetAbilityData::SetRotateToTargetDataBySkillData
                          (this_00,(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)local_148);
        return bVar2;
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
              (&local_138,"UDS_ToggleSkillProcessAbility::SetToggleSkillData",0x31,Yes);
    pwVar6 = L"findTargetData is Invalid. EntityID : %d";
    uVar5 = 0x59;
  }
  else {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_ToggleSkillProcessAbility::SetToggleSkillData",0x31,Yes);
    pwVar6 = L"skillData is Invalid. SkillID : %d";
    uVar5 = 0x52;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,uVar5,pwVar6);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// ToggleSkill @ 14b851c10

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

void __thiscall UDS_ToggleSkillProcessAbility::ToggleSkill(UDS_ToggleSkillProcessAbility *this)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  UObject *pUVar5;
  UDS_SkillData *pUVar6;
  UDS_LogManager *pUVar7;
  UDS_GameInstance *pUVar8;
  UDS_RotateToTargetAbilityData *this_00;
  longlong lVar9;
  undefined1 auStackY_1b8 [32];
  uint uVar10;
  wchar_t *pwVar11;
  EDS_AbilityDeactivateType local_178;
  EDS_AbilityTagType local_177 [7];
  FWeakObjectPtr local_170;
  FWeakObjectPtr local_168;
  FWeakObjectPtr local_160;
  FWeakObjectPtr local_158;
  FWeakObjectPtr local_150;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  UDS_GameplayAbility::GetContextData<UDS_SkillAbilityContext>((UDS_GameplayAbility *)this);
  bVar3 = FWeakObjectPtr::IsValid(&local_170);
  if (!bVar3) {
    local_178 = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,&local_178);
    return;
  }
  pUVar5 = FWeakObjectPtr::Get(&local_170);
  UDS_SkillData::GetData((ulong64)&local_158,this->_padding_,SUB41(*(undefined4 *)(pUVar5 + 1),0));
  bVar3 = FWeakObjectPtr::IsValid(&local_158);
  if (!bVar3) {
    local_178 = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,&local_178);
    return;
  }
  pUVar6 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_158);
  bVar3 = UDS_SkillData::IsSkillActive(pUVar6);
  if (bVar3) {
    pUVar6 = (UDS_SkillData *)FWeakObjectPtr::Get(&local_158);
    bVar3 = UDS_SkillData::CheckToggleEndWaitTime(pUVar6);
    if (!bVar3) {
      return;
    }
  }
  if (this->ActiveToggleSkillTagType != None) {
    iVar4 = this->SkillID;
    pUVar5 = FWeakObjectPtr::Get(&local_170);
    if (*(int *)(pUVar5 + 1) == iVar4) {
      local_178 = Success;
      UDS_GameplayAbility::DeactivateAbility
                ((UDS_GameplayAbility *)this,&this->ActiveToggleSkillTagType,&local_178);
      local_178 = Success;
      UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,&local_178);
      return;
    }
    local_178 = Cancel;
    UDS_GameplayAbility::DeactivateAbility
              ((UDS_GameplayAbility *)this,&this->ActiveToggleSkillTagType,&local_178);
  }
  pUVar5 = FWeakObjectPtr::Get(&local_170);
  local_177[0] = GetToggleSkillTagType(this,*(int *)(pUVar5 + 1));
  if (local_177[0] != None) {
    pUVar5 = FWeakObjectPtr::Get(&local_170);
    UDS_SkillData::GetData((ulong64)&local_168,this->_padding_,SUB41(*(undefined4 *)(pUVar5 + 1),0))
    ;
    bVar3 = FWeakObjectPtr::IsValid(&local_168);
    if (bVar3) {
      local_178 = 0x1b;
      UDS_AbilityDataSet::GetAbilityData<UDS_FindTargetAbilityData>
                ((ulong64 *)&local_160,(EDS_AbilityTagType *)&this->_padding_);
      bVar3 = FWeakObjectPtr::IsValid(&local_160);
      if (bVar3) {
        pUVar8 = UDS_GameInstance::GetInst();
        if (pUVar8->bUseNewRotateAbility == false) {
          local_178 = 0x1d;
          UDS_AbilityDataSet::GetAbilityData<UDS_RotateToTargetAbilityData>
                    ((ulong64 *)&local_150,(EDS_AbilityTagType *)&this->_padding_);
          bVar3 = FWeakObjectPtr::IsValid(&local_150);
          if (bVar3) {
            this_00 = (UDS_RotateToTargetAbilityData *)FWeakObjectPtr::Get(&local_150);
            bVar3 = UDS_RotateToTargetAbilityData::SetRotateToTargetDataBySkillData
                              (this_00,(TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>)local_168);
            if (!bVar3) goto LAB_14b851f07;
          }
        }
        local_160 = (FWeakObjectPtr)FWeakObjectPtr::Get(&local_170);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_160 != (FWeakObjectPtr)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_160);
        }
        UDS_GameplayAbility::TryActivateAbility
                  ((UDS_GameplayAbility *)this,local_177,(TObjectPtr<UWN_AbilityContext>)&local_160)
        ;
        plVar2 = &this->_padding_;
        piVar1 = (int *)((longlong)&this->_padding_ + 4);
        if (*(int *)((longlong)&this->_padding_ + 4) < 1) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,1,(ForAnyElementType *)plVar2,(int)this->_padding_,piVar1);
        }
        pUVar8 = UDS_GameInstance::GetInst();
        if (pUVar8->bUseNewRotateAbility == false) {
          local_160 = (FWeakObjectPtr)FWeakObjectPtr::Get(&local_170);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_160 != (FWeakObjectPtr)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_160);
          }
          local_178 = 0x1d;
          UDS_GameplayAbility::TryActivateAbility
                    ((UDS_GameplayAbility *)this,&local_178,
                     (TObjectPtr<UWN_AbilityContext>)&local_160);
          local_178 = 0x1d;
          UDS_GameplayAbility::GetAbility
                    ((UDS_GameplayAbility *)this,(EDS_AbilityTagType *)&local_168);
          bVar3 = TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr> *)&local_168,
                             (void *)0x0);
          if (bVar3) goto LAB_14b8520c7;
          iVar4 = (int)this->_padding_;
          if (iVar4 == *(int *)((longlong)&this->_padding_ + 4)) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,(ForAnyElementType *)plVar2,piVar1);
          }
          *(int *)&this->_padding_ = iVar4 + 1;
          lVar9 = *plVar2;
        }
        else {
          local_160 = (FWeakObjectPtr)FWeakObjectPtr::Get(&local_170);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (local_160 != (FWeakObjectPtr)0x0)) {
            UE::GC::MarkAsReachable((UObject *)local_160);
          }
          local_178 = 0x1e;
          UDS_GameplayAbility::TryActivateAbility
                    ((UDS_GameplayAbility *)this,&local_178,
                     (TObjectPtr<UWN_AbilityContext>)&local_160);
          local_178 = 0x1e;
          UDS_GameplayAbility::GetAbility
                    ((UDS_GameplayAbility *)this,(EDS_AbilityTagType *)&local_168);
          bVar3 = TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr> *)&local_168,
                             (void *)0x0);
          if (bVar3) goto LAB_14b8520c7;
          iVar4 = (int)this->_padding_;
          if (iVar4 == *(int *)((longlong)&this->_padding_ + 4)) {
            iVar4 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x408,(ForAnyElementType *)&this->_padding_,piVar1);
          }
          *(int *)&this->_padding_ = iVar4 + 1;
          lVar9 = this->_padding_;
        }
        *(FWeakObjectPtr *)(lVar9 + (longlong)iVar4 * 8) = local_168;
LAB_14b8520c7:
        pUVar5 = FWeakObjectPtr::Get(&local_170);
        SendToggleSkill(this,*(int *)(pUVar5 + 1),true);
        return;
      }
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 == (UDS_LogManager *)0x0) goto LAB_14b851f07;
      pUVar7 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_ToggleSkillProcessAbility::SetToggleSkillData",0x31,Yes);
      pwVar11 = L"findTargetData is Invalid. EntityID : %d";
      uVar10 = 0x59;
    }
    else {
      pUVar7 = UDS_LogManager::GetInst();
      if (pUVar7 == (UDS_LogManager *)0x0) goto LAB_14b851f07;
      pUVar7 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_ToggleSkillProcessAbility::SetToggleSkillData",0x31,Yes);
      pwVar11 = L"skillData is Invalid. SkillID : %d";
      uVar10 = 0x52;
    }
    UDS_LogManager::PrintLog(pUVar7,1,Warning,local_148.Ptr,uVar10,pwVar11);
    if ((void *)local_148._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_148._padding_);
    }
  }
LAB_14b851f07:
  local_178 = Cancel;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,&local_178);
  return;
}


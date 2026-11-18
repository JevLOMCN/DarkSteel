// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// StaticClass @ 14b4ae160

UClass * __cdecl UDS_ImpactEffectAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ImpactEffectAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ImpactEffectAbility",
               &Z_Registration_Info_UClass_UDS_ImpactEffectAbility.InnerSingleton,
               StaticRegisterNativesUDS_ImpactEffectAbility,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ImpactEffectAbility>,
               InternalVTableHelperCtorCaller<UDS_ImpactEffectAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ImpactEffectAbility.InnerSingleton;
}

// UDS_ImpactEffectAbility @ 14b4b27c0

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

UDS_ImpactEffectAbility * __thiscall
UDS_ImpactEffectAbility::UDS_ImpactEffectAbility
          (UDS_ImpactEffectAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->OwnerSkeletalMeshComponent).WeakPtr = (FWeakObjectPtr)0x0;
  this->ElapsedTime = 0.0;
  this->ImpactPauseTime = 0.0;
  this->AnimRateRecoveryAccelTime = 0.0;
  this->AnimRateRecoveryDecelTime = 0.0;
  return this;
}

// UDS_ImpactEffectAbility @ 14b4b2810

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

UDS_ImpactEffectAbility * __thiscall
UDS_ImpactEffectAbility::UDS_ImpactEffectAbility
          (UDS_ImpactEffectAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->OwnerSkeletalMeshComponent).WeakPtr = (FWeakObjectPtr)0x0;
  this->ElapsedTime = 0.0;
  this->ImpactPauseTime = 0.0;
  this->AnimRateRecoveryAccelTime = 0.0;
  this->AnimRateRecoveryDecelTime = 0.0;
  return this;
}

// ~UDS_ImpactEffectAbility @ 14b4b3990

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

void __thiscall UDS_ImpactEffectAbility::~UDS_ImpactEffectAbility(UDS_ImpactEffectAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b4b7900

UClass * __cdecl UDS_ImpactEffectAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ImpactEffectAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ImpactEffectAbility",
               &Z_Registration_Info_UClass_UDS_ImpactEffectAbility.InnerSingleton,
               StaticRegisterNativesUDS_ImpactEffectAbility,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_ImpactEffectAbility>,
               InternalVTableHelperCtorCaller<UDS_ImpactEffectAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ImpactEffectAbility.InnerSingleton;
}

// ShouldNotifyChangedCharState @ 14b4b83c0

bool __thiscall UDS_ImpactEffectAbility::ShouldNotifyChangedCharState(UDS_ImpactEffectAbility *this)

{
  return true;
}

// ShouldTickComponent @ 14b4b83d0

bool __thiscall UDS_ImpactEffectAbility::ShouldTickComponent(UDS_ImpactEffectAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_ImpactEffectAbility @ 14b4b8600

void __cdecl UDS_ImpactEffectAbility::StaticRegisterNativesUDS_ImpactEffectAbility(void)

{
  return;
}

// AccelAnimRateScale @ 14b7d9cb0

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
UDS_ImpactEffectAbility::AccelAnimRateScale(UDS_ImpactEffectAbility *this,float param_1)

{
  float local_res8 [4];
  EDS_GlobalAnimRateScaleType local_res18 [4];
  
  local_res18[0] = ImpactEffect;
  local_res8[0] = (this->ElapsedTime - this->ImpactPauseTime) / this->AnimRateRecoveryAccelTime;
  if (__real_3f800000 <= local_res8[0]) {
    local_res8[0] = __real_3f800000;
  }
  if (local_res8[0] <= 0.0) {
    local_res8[0] = 0.0;
  }
  local_res8[0] = local_res8[0] + local_res8[0];
  FDS_EntityBase::SetGlobalAnimRateScale((FDS_EntityBase *)this->_padding_,local_res18,local_res8);
  return;
}

// BeginImpact @ 14b7da810

void __thiscall UDS_ImpactEffectAbility::BeginImpact(UDS_ImpactEffectAbility *this,float param_1)

{
  UDS_AbilitySystemComponent *this_00;
  FGameplayTag *pFVar1;
  float fVar2;
  undefined8 local_res8;
  EDS_AbilityTagType local_res10 [24];
  
  this->ImpactPauseTime = param_1;
  local_res10[0] = ImpactEffect;
  fVar2 = param_1 * __real_3f000000;
  if (param_1 * __real_3f000000 <= __real_3c23d70a) {
    fVar2 = __real_3c23d70a;
  }
  this->AnimRateRecoveryAccelTime = fVar2;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  fVar2 = param_1 + param_1;
  if (param_1 + param_1 <= __real_3c23d70a) {
    fVar2 = __real_3c23d70a;
  }
  this->AnimRateRecoveryDecelTime = fVar2;
  this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  local_res8 = 0;
  pFVar1 = FDS_GameplayTags::GetAbilityTag(local_res10);
  UDS_AbilitySystemComponent::TryActivateAbilityByTag
            (this_00,pFVar1,(TObjectPtr<UWN_AbilityContext>)&local_res8);
  return;
}

// ClearVariables @ 14b7dc880

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

void __thiscall UDS_ImpactEffectAbility::ClearVariables(UDS_ImpactEffectAbility *this)

{
  float local_res8 [2];
  EDS_GlobalAnimRateScaleType local_res10 [6];
  
  local_res8[0] = 1.0;
  this->ElapsedTime = 0.0;
  this->ImpactPauseTime = 0.0;
  this->AnimRateRecoveryAccelTime = 0.0;
  this->AnimRateRecoveryDecelTime = 0.0;
  local_res10[0] = ImpactEffect;
  FDS_EntityBase::SetGlobalAnimRateScale((FDS_EntityBase *)this->_padding_,local_res10,local_res8);
  return;
}

// DecelAnimRateScale @ 14b7e3be0

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
UDS_ImpactEffectAbility::DecelAnimRateScale(UDS_ImpactEffectAbility *this,float param_1)

{
  float local_res8 [4];
  EDS_GlobalAnimRateScaleType local_res18 [4];
  
  local_res18[0] = ImpactEffect;
  local_res8[0] =
       ((this->ElapsedTime - this->ImpactPauseTime) - this->AnimRateRecoveryAccelTime) /
       this->AnimRateRecoveryDecelTime;
  if (__real_3f800000 <= local_res8[0]) {
    local_res8[0] = __real_3f800000;
  }
  if (local_res8[0] <= 0.0) {
    local_res8[0] = 0.0;
  }
  local_res8[0] = __real_40000000 - local_res8[0];
  FDS_EntityBase::SetGlobalAnimRateScale((FDS_EntityBase *)this->_padding_,local_res18,local_res8);
  return;
}

// OnAbilityAdded @ 14b7f4390

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

void __thiscall UDS_ImpactEffectAbility::OnAbilityAdded(UDS_ImpactEffectAbility *this)

{
  UDS_GameplayAbility::OnAbilityAdded((UDS_GameplayAbility *)this);
  TMulticastDelegateRegistration<void___cdecl(server_msg::GroupDamageEventResponse_const_&),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_ImpactEffectAbility>
            ((TMulticastDelegateRegistration<void___cdecl(server_msg::GroupDamageEventResponse_const_&),FDefaultDelegateUserPolicy>
              *)&FDS_BattleService::OnGroupDamageEventDelegate,
             (UDS_ImpactEffectAbility *)&stack0x00000010,(pmf_00faf9ff *)this);
  return;
}

// OnAbilityRemoved @ 14b7f44a0

void __thiscall UDS_ImpactEffectAbility::OnAbilityRemoved(UDS_ImpactEffectAbility *this)

{
  char cVar1;
  bool bVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res8 [4];
  
  cVar1 = (**(code **)(this->_padding_ + 0x388))();
  if (cVar1 == '\x01') {
    UDS_CharStateData::GetData((ulong64)local_res8);
    bVar2 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)local_res8,(void *)0x0);
    if (!bVar2) {
      pUVar3 = FWeakObjectPtr::Get(local_res8);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3[7].field_0x20,this);
    }
  }
  cVar1 = (**(code **)(this->_padding_ + 0x3a0))(this);
  if (cVar1 == '\x01') {
    UDS_CharBuffData::GetData((ulong64)local_res8);
    bVar2 = TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_CharBuffData,FWeakObjectPtr> *)local_res8,(void *)0x0);
    if (!bVar2) {
      pUVar3 = FWeakObjectPtr::Get(local_res8);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar3 + 7),this);
    }
  }
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &FDS_BattleService::OnGroupDamageEventDelegate,this);
  return;
}

// OnAbilityRetryActivate @ 14b7f4640

void __thiscall UDS_ImpactEffectAbility::OnAbilityRetryActivate(UDS_ImpactEffectAbility *this)

{
  return;
}

// OnCanActivate @ 14b7f6010

bool __thiscall UDS_ImpactEffectAbility::OnCanActivate(UDS_ImpactEffectAbility *this)

{
  bool bVar1;
  
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    return __real_322bcc77 <
           (float)((uint)this->ImpactPauseTime & __xmm_7fffffff7fffffff7fffffff7fffffff);
  }
  return false;
}

// OnChangedCharState @ 14b7f82f0

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
UDS_ImpactEffectAbility::OnChangedCharState
          (UDS_ImpactEffectAbility *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  UDS_AbilitySystemComponent *this_00;
  EDS_AbilityDeactivateType local_res18 [16];
  FDS_ChangedCharStateInfo local_38;
  
  local_38.StateTag.TagName = (param_2->StateTag).TagName;
  local_38.bIsStateTagOn = param_2->bIsStateTagOn;
  local_38._9_7_ = *(undefined7 *)&param_2->field_0x9;
  local_38.AddedCharState = param_2->AddedCharState;
  local_38.RemovedCharState = param_2->RemovedCharState;
  local_38.AddedCharDetailState = param_2->AddedCharDetailState;
  local_38.RemovedCharDetailState = param_2->RemovedCharDetailState;
  UDS_GameplayAbility::OnChangedCharState((UDS_GameplayAbility *)this,param_1,&local_38);
  if (param_2->RemovedCharState == Skill) {
    local_res18[0] = Success;
    this_00 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (this_00,(FGameplayTag *)&this->_padding_,local_res18);
  }
  return;
}

// OnDeactivateAbility @ 14b7fb490

void __thiscall
UDS_ImpactEffectAbility::OnDeactivateAbility(UDS_ImpactEffectAbility *this,bool *param_1)

{
  return;
}

// OnGroupDamageEvent @ 14b7fd890

void __thiscall
UDS_ImpactEffectAbility::OnGroupDamageEvent
          (UDS_ImpactEffectAbility *this,GroupDamageEventResponse *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  FDS_SkillAttackTableRow *pFVar3;
  UDS_AbilitySystemComponent *this_00;
  FGameplayTag *pFVar4;
  Impl_ *pIVar5;
  float fVar6;
  float fVar7;
  EDS_AbilityTagType local_res8 [8];
  undefined8 local_res18;
  
  if ((char)this->_padding_ != '\x01') {
    uVar2 = *(ulonglong *)&(param_1->_impl_).damage_events_;
    if ((uVar2 & 1) == 0) {
      pIVar5 = &param_1->_impl_;
    }
    else {
      pIVar5 = (Impl_ *)(uVar2 + 7);
    }
    puVar1 = &(pIVar5->damage_events_).field_0x0 +
             (longlong)*(int *)&(param_1->_impl_).damage_events_.field_0x8 * 8;
    if (pIVar5 != (Impl_ *)puVar1) {
      while ((this->_padding_ != *(longlong *)(*(longlong *)&pIVar5->damage_events_ + 0x28) ||
             (pFVar3 = FDS_SkillAttackTableRow::GetRef
                                 ((longlong)*(int *)(*(longlong *)&pIVar5->damage_events_ + 0x38),
                                  true), pFVar3->IsHitAction == false))) {
        pIVar5 = (Impl_ *)&(pIVar5->damage_events_).field_0x8;
        if (pIVar5 == (Impl_ *)puVar1) {
          return;
        }
      }
      fVar7 = pFVar3->HitActionTime;
      this->ImpactPauseTime = fVar7;
      local_res8[0] = ImpactEffect;
      fVar6 = fVar7 * __real_3f000000;
      if (fVar7 * __real_3f000000 <= __real_3c23d70a) {
        fVar6 = __real_3c23d70a;
      }
      this->AnimRateRecoveryAccelTime = fVar6;
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      fVar6 = fVar7 + fVar7;
      if (fVar7 + fVar7 <= __real_3c23d70a) {
        fVar6 = __real_3c23d70a;
      }
      this->AnimRateRecoveryDecelTime = fVar6;
      this_00 = (UDS_AbilitySystemComponent *)
                FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      local_res18 = 0;
      pFVar4 = FDS_GameplayTags::GetAbilityTag(local_res8);
      UDS_AbilitySystemComponent::TryActivateAbilityByTag
                (this_00,pFVar4,(TObjectPtr<UWN_AbilityContext>)&local_res18);
    }
  }
  return;
}

// OnPostActivateAbility @ 14b8019f0

void __thiscall UDS_ImpactEffectAbility::OnPostActivateAbility(UDS_ImpactEffectAbility *this)

{
  return;
}

// OnTickComponent @ 14b80a590

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
UDS_ImpactEffectAbility::OnTickComponent(UDS_ImpactEffectAbility *this,float param_1)

{
  float fVar1;
  float fVar2;
  UDS_AbilitySystemComponent *this_00;
  FDS_EntityBase *this_01;
  float local_res8 [4];
  EDS_GlobalAnimRateScaleType local_res18 [4];
  
  fVar1 = this->ElapsedTime;
  local_res18[0] = ImpactEffect;
  fVar2 = this->ImpactPauseTime;
  if (fVar2 < fVar1) {
    local_res8[0] = this->AnimRateRecoveryAccelTime;
    this_01 = (FDS_EntityBase *)this->_padding_;
    if (local_res8[0] + fVar2 < fVar1) {
      local_res8[0] = ((fVar1 - fVar2) - local_res8[0]) / this->AnimRateRecoveryDecelTime;
      if (__real_3f800000 <= local_res8[0]) {
        local_res8[0] = __real_3f800000;
      }
      if (local_res8[0] <= 0.0) {
        local_res8[0] = 0.0;
      }
      local_res8[0] = __real_40000000 - local_res8[0];
      FDS_EntityBase::SetGlobalAnimRateScale(this_01,local_res18,local_res8);
      if (this->ImpactPauseTime + this->AnimRateRecoveryAccelTime + this->AnimRateRecoveryDecelTime
          < this->ElapsedTime) {
        local_res8[0] = (float)CONCAT31(local_res8[0]._1_3_,1);
        this_00 = (UDS_AbilitySystemComponent *)
                  FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        UDS_AbilitySystemComponent::DeactivateAbilityByTag
                  (this_00,(FGameplayTag *)&this->_padding_,(EDS_AbilityDeactivateType *)local_res8)
        ;
        return;
      }
      goto LAB_14b80a5dc;
    }
    local_res8[0] = (fVar1 - fVar2) / local_res8[0];
    if (__real_3f800000 <= local_res8[0]) {
      local_res8[0] = __real_3f800000;
    }
    if (local_res8[0] <= 0.0) {
      local_res8[0] = 0.0;
    }
    local_res8[0] = local_res8[0] + local_res8[0];
  }
  else {
    this_01 = (FDS_EntityBase *)this->_padding_;
    local_res8[0] = 0.0;
  }
  FDS_EntityBase::SetGlobalAnimRateScale(this_01,local_res18,local_res8);
LAB_14b80a5dc:
  this->ElapsedTime = param_1 + this->ElapsedTime;
  return;
}

// PausedAnimRateScale @ 14b80d120

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

void __thiscall UDS_ImpactEffectAbility::PausedAnimRateScale(UDS_ImpactEffectAbility *this)

{
  float local_res8 [2];
  EDS_GlobalAnimRateScaleType local_res10 [6];
  
  local_res8[0] = 0.0;
  local_res10[0] = ImpactEffect;
  FDS_EntityBase::SetGlobalAnimRateScale((FDS_EntityBase *)this->_padding_,local_res10,local_res8);
  return;
}


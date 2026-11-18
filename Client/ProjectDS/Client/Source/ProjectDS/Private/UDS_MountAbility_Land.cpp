// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b4f4b80

UClass * __cdecl UDS_MountAbility_Land::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountAbility_Land.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountAbility_Land",
               &Z_Registration_Info_UClass_UDS_MountAbility_Land.InnerSingleton,
               StaticRegisterNativesUDS_MountAbility_Land,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_MountAbility_Land>,
               InternalVTableHelperCtorCaller<UDS_MountAbility_Land>,local_res8,
               UDS_MountBaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountAbility_Land.InnerSingleton;
}

// UDS_MountAbility_Land @ 14b4f7e20

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

UDS_MountAbility_Land * __thiscall
UDS_MountAbility_Land::UDS_MountAbility_Land(UDS_MountAbility_Land *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->AirWalkAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->LandTimerHandle).Handle = 0;
  return this;
}

// UDS_MountAbility_Land @ 14b4f7e70

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

UDS_MountAbility_Land * __thiscall
UDS_MountAbility_Land::UDS_MountAbility_Land
          (UDS_MountAbility_Land *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->AirWalkAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  (this->LandTimerHandle).Handle = 0;
  return this;
}

// ~UDS_MountAbility_Land @ 14b4f8690

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

void __thiscall UDS_MountAbility_Land::~UDS_MountAbility_Land(UDS_MountAbility_Land *this)

{
  this->_padding_ = (longlong)&UDS_MountBaseAbility::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UDS_MountBaseAbility::_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b4fa1f0

UClass * __cdecl UDS_MountAbility_Land::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountAbility_Land.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountAbility_Land",
               &Z_Registration_Info_UClass_UDS_MountAbility_Land.InnerSingleton,
               StaticRegisterNativesUDS_MountAbility_Land,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_MountAbility_Land>,
               InternalVTableHelperCtorCaller<UDS_MountAbility_Land>,local_res8,
               UDS_MountBaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountAbility_Land.InnerSingleton;
}

// StaticRegisterNativesUDS_MountAbility_Land @ 14b4fa8b0

void __cdecl UDS_MountAbility_Land::StaticRegisterNativesUDS_MountAbility_Land(void)

{
  return;
}

// OnAbilityRetryActivate @ 14b837990

void __thiscall UDS_MountAbility_Land::OnAbilityRetryActivate(UDS_MountAbility_Land *this)

{
  return;
}

// OnCanActivate @ 14b838730

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

bool __thiscall UDS_MountAbility_Land::OnCanActivate(UDS_MountAbility_Land *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr> TVar2;
  EDS_StateTagType local_res10 [8];
  ulong64 local_res18 [2];
  
  bVar1 = UDS_MountBaseAbility::OnCanActivate((UDS_MountBaseAbility *)this);
  if (bVar1) {
    bVar1 = TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr>::UEOpEquals
                      (&this->AirWalkAbilityData,(void *)0x0);
    if (bVar1) {
      local_res10[0] = AirWalk_Dash;
      TVar2 = UDS_AbilityDataSet::GetAbilityData<UDS_AirWalkAbilityData>
                        (local_res18,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      (this->AirWalkAbilityData).WeakPtr = *TVar2.WeakPtr;
    }
    local_res10[0] = Mount_DisMount;
    bVar1 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_res10);
    return !bVar1;
  }
  return false;
}

// OnDeactivateAbility @ 14b83e7b0

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
UDS_MountAbility_Land::OnDeactivateAbility(UDS_MountAbility_Land *this,bool *param_1)

{
  FGameplayTag *pFVar1;
  EDS_StateTagType local_res18 [8];
  FWeakObjectPtr local_res20;
  undefined8 local_18 [2];
  
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_18[0] = 0;
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_18);
  local_res18[0] = Mount_Land;
  pFVar1 = FDS_GameplayTags::GetStateTag(local_res18);
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar1);
  return;
}

// OnLandAniEndTimerEvent @ 14b8409d0

void __thiscall UDS_MountAbility_Land::OnLandAniEndTimerEvent(UDS_MountAbility_Land *this)

{
  bool bVar1;
  EDS_StateTagType local_res8 [8];
  FWeakObjectPtr local_res10 [3];
  
  (**(code **)(*(longlong *)this->_padding_ + 0x178))((longlong *)this->_padding_,local_res10);
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    local_res8[0] = Mount_Land;
    FDS_GameplayTags::GetStateTag(local_res8);
  }
  return;
}

// OnLandEnter @ 14b840a20

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

void __thiscall UDS_MountAbility_Land::OnLandEnter(UDS_MountAbility_Land *this)

{
  EDS_AbilityDeactivateType local_res10 [24];
  
  local_res10[0] = Success;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res10);
  return;
}

// OnPostActivateAbility @ 14b842a40

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

void __thiscall UDS_MountAbility_Land::OnPostActivateAbility(UDS_MountAbility_Land *this)

{
  bool bVar1;
  UObject *pUVar2;
  FTimerManager *this_00;
  FGameplayTag *pFVar3;
  EDS_AbilityDeactivateType local_res8 [8];
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  longlong local_res20;
  code *local_28;
  undefined8 uStack_20;
  
  bVar1 = TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->AirWalkAbilityData,(void *)0x0);
  if (!bVar1) {
    bVar1 = TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MountAbilityData,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (!bVar1) {
      pUVar2 = FWeakObjectPtr::Get(&(this->AirWalkAbilityData).WeakPtr);
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar2 + 6),this);
      uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
      local_28 = OnLandEnter;
      pUVar2 = FWeakObjectPtr::Get(&(this->AirWalkAbilityData).WeakPtr);
      TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
      AddUObject<UDS_MountAbility_Land>
                ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 (pUVar2 + 6),(UDS_MountAbility_Land *)local_res8,(pmf_81e1938a *)this);
      (**(code **)(*(longlong *)this->_padding_ + 0x178))((longlong *)this->_padding_,&local_res18);
      bVar1 = FWeakObjectPtr::IsValid(&local_res18);
      if (bVar1) {
        local_res8[0] = 0x79;
        FDS_GameplayTags::GetStateTag(local_res8);
      }
      this_00 = FDS_TimerManager::Get((UObject *)0x0);
      uStack_20 = uStack_20 & 0xffffffff00000000;
      local_28 = OnLandAniEndTimerEvent;
      FTimerManager::SetTimer<UDS_MountAbility_Land>
                (this_00,&this->LandTimerHandle,this,(pmf_81e1938a *)&local_28,__real_3f800000,false
                 ,__real_bf800000);
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_res20 = 0;
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res20);
      local_res8[0] = 0x79;
      pFVar3 = FDS_GameplayTags::GetStateTag(local_res8);
      UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,pFVar3);
      return;
    }
  }
  local_res8[0] = Cancel;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
  return;
}


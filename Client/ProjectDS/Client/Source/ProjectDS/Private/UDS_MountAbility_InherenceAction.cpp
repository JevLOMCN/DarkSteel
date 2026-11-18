// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b4f48c0

UClass * __cdecl UDS_MountAbility_InherenceAction::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountAbility_InherenceAction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountAbility_InherenceAction",
               &Z_Registration_Info_UClass_UDS_MountAbility_InherenceAction.InnerSingleton,
               StaticRegisterNativesUDS_MountAbility_InherenceAction,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_MountAbility_InherenceAction>,
               InternalVTableHelperCtorCaller<UDS_MountAbility_InherenceAction>,local_res8,
               UDS_MountBaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountAbility_InherenceAction.InnerSingleton;
}

// UDS_MountAbility_InherenceAction @ 14b4f7d80

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

UDS_MountAbility_InherenceAction * __thiscall
UDS_MountAbility_InherenceAction::UDS_MountAbility_InherenceAction
          (UDS_MountAbility_InherenceAction *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->InherenceActionTimerHandle).Handle = 0;
  return this;
}

// UDS_MountAbility_InherenceAction @ 14b4f7dd0

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

UDS_MountAbility_InherenceAction * __thiscall
UDS_MountAbility_InherenceAction::UDS_MountAbility_InherenceAction
          (UDS_MountAbility_InherenceAction *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->InherenceActionTimerHandle).Handle = 0;
  return this;
}

// ~UDS_MountAbility_InherenceAction @ 14b4f8670

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
UDS_MountAbility_InherenceAction::~UDS_MountAbility_InherenceAction
          (UDS_MountAbility_InherenceAction *this)

{
  this->_padding_ = (longlong)&UDS_MountBaseAbility::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UDS_MountBaseAbility::_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b4fa130

UClass * __cdecl UDS_MountAbility_InherenceAction::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MountAbility_InherenceAction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MountAbility_InherenceAction",
               &Z_Registration_Info_UClass_UDS_MountAbility_InherenceAction.InnerSingleton,
               StaticRegisterNativesUDS_MountAbility_InherenceAction,0x178,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_MountAbility_InherenceAction>,
               InternalVTableHelperCtorCaller<UDS_MountAbility_InherenceAction>,local_res8,
               UDS_MountBaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MountAbility_InherenceAction.InnerSingleton;
}

// ShouldNotifyChangedCharState @ 14b4fa6c0

bool __thiscall
UDS_MountAbility_InherenceAction::ShouldNotifyChangedCharState
          (UDS_MountAbility_InherenceAction *this)

{
  return true;
}

// StaticRegisterNativesUDS_MountAbility_InherenceAction @ 14b4fa8a0

void __cdecl
UDS_MountAbility_InherenceAction::StaticRegisterNativesUDS_MountAbility_InherenceAction(void)

{
  return;
}

// EndCoolDown @ 14b82d390

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
UDS_MountAbility_InherenceAction::EndCoolDown(UDS_MountAbility_InherenceAction *this)

{
  FTimerManager *this_00;
  FTimerData *pFVar1;
  FGameplayTag *pFVar2;
  EDS_AbilityDeactivateType local_res8 [8];
  FWeakObjectPtr local_res10;
  undefined8 local_res18 [2];
  
  this_00 = FDS_TimerManager::Get((UObject *)0x0);
  pFVar1 = FTimerManager::FindTimer(this_00,&this->InherenceActionTimerHandle);
  if (pFVar1 != (FTimerData *)0x0) {
    FTimerManager::InternalClearTimer
              (this_00,(FTimerHandle)(this->InherenceActionTimerHandle).Handle);
  }
  (this->InherenceActionTimerHandle).Handle = 0;
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
  local_res8[0] = 0x71;
  pFVar2 = FDS_GameplayTags::GetStateTag(local_res8);
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar2);
  local_res8[0] = Success;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
  return;
}

// OnAbilityRetryActivate @ 14b837980

void __thiscall
UDS_MountAbility_InherenceAction::OnAbilityRetryActivate(UDS_MountAbility_InherenceAction *this)

{
  return;
}

// OnCanActivate @ 14b838710

bool __thiscall
UDS_MountAbility_InherenceAction::OnCanActivate(UDS_MountAbility_InherenceAction *this)

{
  bool bVar1;
  
  bVar1 = UDS_MountBaseAbility::OnCanActivate((UDS_MountBaseAbility *)this);
  return bVar1;
}

// OnChangedCharState @ 14b83be50

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
UDS_MountAbility_InherenceAction::OnChangedCharState
          (UDS_MountAbility_InherenceAction *this,
          TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,FDS_ChangedCharStateInfo *param_2
          )

{
  FDS_ChangedCharStateInfo local_38;
  
  local_38.StateTag.TagName = (param_2->StateTag).TagName;
  local_38.bIsStateTagOn = param_2->bIsStateTagOn;
  local_38._9_7_ = *(undefined7 *)&param_2->field_0x9;
  local_38.AddedCharState = param_2->AddedCharState;
  local_38.RemovedCharState = param_2->RemovedCharState;
  local_38.AddedCharDetailState = param_2->AddedCharDetailState;
  local_38.RemovedCharDetailState = param_2->RemovedCharDetailState;
  UDS_GameplayAbility::OnChangedCharState((UDS_GameplayAbility *)this,param_1,&local_38);
  return;
}

// OnDeactivateAbility @ 14b83e7a0

void __thiscall
UDS_MountAbility_InherenceAction::OnDeactivateAbility
          (UDS_MountAbility_InherenceAction *this,bool *param_1)

{
  return;
}

// OnPostActivateAbility @ 14b842970

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
UDS_MountAbility_InherenceAction::OnPostActivateAbility(UDS_MountAbility_InherenceAction *this)

{
  FGameplayTag *pFVar1;
  FTimerManager *this_00;
  EDS_AbilityInputPolicy local_res8 [8];
  FWeakObjectPtr local_res10;
  undefined8 local_res18 [2];
  code *local_28;
  undefined8 uStack_20;
  
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18[0] = 0;
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
  local_res8[0] = 0x71;
  pFVar1 = FDS_GameplayTags::GetStateTag(local_res8);
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,pFVar1);
  local_res8[0] = BlockInput;
  UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_res8);
  if ((this->InherenceActionTimerHandle).Handle == 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    uStack_20 = (ulonglong)uStack_20._4_4_ << 0x20;
    local_28 = EndCoolDown;
    FTimerManager::SetTimer<UDS_MountAbility_InherenceAction>
              (this_00,&this->InherenceActionTimerHandle,this,(pmf_31ecfc1e *)&local_28,
               __real_40000000,false,__real_bf800000);
  }
  return;
}

// StartCoolDown @ 14b8513e0

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
UDS_MountAbility_InherenceAction::StartCoolDown(UDS_MountAbility_InherenceAction *this)

{
  FTimerManager *this_00;
  code *local_18;
  undefined8 uStack_10;
  
  if ((this->InherenceActionTimerHandle).Handle == 0) {
    this_00 = FDS_TimerManager::Get((UObject *)0x0);
    uStack_10 = (ulonglong)uStack_10._4_4_ << 0x20;
    local_18 = EndCoolDown;
    FTimerManager::SetTimer<UDS_MountAbility_InherenceAction>
              (this_00,&this->InherenceActionTimerHandle,this,(pmf_31ecfc1e *)&local_18,
               __real_40000000,false,__real_bf800000);
  }
  return;
}


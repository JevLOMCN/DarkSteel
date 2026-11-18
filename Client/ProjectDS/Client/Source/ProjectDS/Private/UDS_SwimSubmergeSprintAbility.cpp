// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b5aef50

UClass * __cdecl UDS_SwimSubmergeSprintAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SwimSubmergeSprintAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SwimSubmergeSprintAbility",
               &Z_Registration_Info_UClass_UDS_SwimSubmergeSprintAbility.InnerSingleton,
               StaticRegisterNativesUDS_SwimSubmergeSprintAbility,0x170,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_SwimSubmergeSprintAbility>,
               InternalVTableHelperCtorCaller<UDS_SwimSubmergeSprintAbility>,local_res8,
               UDS_SwimBaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SwimSubmergeSprintAbility.InnerSingleton;
}

// UDS_SwimSubmergeSprintAbility @ 14b5b1ae0

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

UDS_SwimSubmergeSprintAbility * __thiscall
UDS_SwimSubmergeSprintAbility::UDS_SwimSubmergeSprintAbility
          (UDS_SwimSubmergeSprintAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined8 *)&this->field_0x158 = 0;
  *(undefined8 *)&this->field_0x160 = 0;
  *(undefined8 *)&this->field_0x168 = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// UDS_SwimSubmergeSprintAbility @ 14b5b1b30

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

UDS_SwimSubmergeSprintAbility * __thiscall
UDS_SwimSubmergeSprintAbility::UDS_SwimSubmergeSprintAbility
          (UDS_SwimSubmergeSprintAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined8 *)&this->field_0x158 = 0;
  *(undefined8 *)&this->field_0x160 = 0;
  *(undefined8 *)&this->field_0x168 = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// ~UDS_SwimSubmergeSprintAbility @ 14b5b27d0

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
UDS_SwimSubmergeSprintAbility::~UDS_SwimSubmergeSprintAbility(UDS_SwimSubmergeSprintAbility *this)

{
  *(undefined ***)this = &UDS_SwimBaseAbility::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 =
       &UDS_SwimBaseAbility::_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b5b4450

UClass * __cdecl UDS_SwimSubmergeSprintAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SwimSubmergeSprintAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SwimSubmergeSprintAbility",
               &Z_Registration_Info_UClass_UDS_SwimSubmergeSprintAbility.InnerSingleton,
               StaticRegisterNativesUDS_SwimSubmergeSprintAbility,0x170,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_SwimSubmergeSprintAbility>,
               InternalVTableHelperCtorCaller<UDS_SwimSubmergeSprintAbility>,local_res8,
               UDS_SwimBaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SwimSubmergeSprintAbility.InnerSingleton;
}

// GetSwimStep @ 14b5b5290

EDS_SwimStep __thiscall
UDS_SwimSubmergeSprintAbility::GetSwimStep(UDS_SwimSubmergeSprintAbility *this)

{
  return SwimSubmergeSprint;
}

// ShouldNotifyChangedCharState @ 14b5b57a0

bool __thiscall
UDS_SwimSubmergeSprintAbility::ShouldNotifyChangedCharState(UDS_SwimSubmergeSprintAbility *this)

{
  return true;
}

// ShouldStopAbilityOnExhaustedStamina @ 14b5b57e0

bool __thiscall
UDS_SwimSubmergeSprintAbility::ShouldStopAbilityOnExhaustedStamina
          (UDS_SwimSubmergeSprintAbility *this)

{
  return true;
}

// ShouldTickComponent @ 14b5b5830

bool __thiscall
UDS_SwimSubmergeSprintAbility::ShouldTickComponent(UDS_SwimSubmergeSprintAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_SwimSubmergeSprintAbility @ 14b5b58c0

void __cdecl UDS_SwimSubmergeSprintAbility::StaticRegisterNativesUDS_SwimSubmergeSprintAbility(void)

{
  return;
}

// OnCanActivate @ 14b83b370

bool __thiscall UDS_SwimSubmergeSprintAbility::OnCanActivate(UDS_SwimSubmergeSprintAbility *this)

{
  bool bVar1;
  UDS_SwimAbilityData *this_00;
  
  bVar1 = UDS_SwimBaseAbility::OnCanActivate((UDS_SwimBaseAbility *)this);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x158);
    if (bVar1) {
      this_00 = (UDS_SwimAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x158);
      bVar1 = UDS_SwimAbilityData::CanNextStep(this_00,SwimSubmergeSprint);
      return bVar1;
    }
  }
  return false;
}

// OnChangedCharState @ 14b83c7b0

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
UDS_SwimSubmergeSprintAbility::OnChangedCharState
          (UDS_SwimSubmergeSprintAbility *this,
          TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,FDS_ChangedCharStateInfo *param_2
          )

{
  bool bVar1;
  UDS_CharStateData *this_00;
  FWeakObjectPtr local_res10;
  EDS_CharDetailState local_res18 [4];
  FDS_ChangedCharStateInfo local_38;
  
  local_38.StateTag.TagName = (param_2->StateTag).TagName;
  local_38.bIsStateTagOn = param_2->bIsStateTagOn;
  local_38._9_7_ = *(undefined7 *)&param_2->field_0x9;
  local_38.AddedCharState = param_2->AddedCharState;
  local_38.RemovedCharState = param_2->RemovedCharState;
  local_38.AddedCharDetailState = param_2->AddedCharDetailState;
  local_38.RemovedCharDetailState = param_2->RemovedCharDetailState;
  local_res10 = param_1.WeakPtr;
  UDS_GameplayAbility::OnChangedCharState((UDS_GameplayAbility *)this,param_1,&local_38);
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
    local_res18[0] = SwimSubmerge;
    bVar1 = UDS_CharStateData::HasCharDetailState(this_00,local_res18);
    if (!bVar1) {
      local_res18[0] = CONCAT31(local_res18[0]._1_3_,2);
      UDS_GameplayAbility::DeactivateAbility
                ((UDS_GameplayAbility *)this,(EDS_AbilityDeactivateType *)local_res18);
    }
  }
  return;
}

// OnDeactivateAbility @ 14b83fcb0

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
UDS_SwimSubmergeSprintAbility::OnDeactivateAbility
          (UDS_SwimSubmergeSprintAbility *this,bool *param_1)

{
  bool bVar1;
  UDS_SwimAbilityData *this_00;
  EDS_StateTagType local_res18 [16];
  
  UDS_SwimBaseAbility::OnDeactivateAbility((UDS_SwimBaseAbility *)this,param_1);
  bVar1 = UDS_SwimBaseAbility::IsFullySubmerged((UDS_SwimBaseAbility *)this);
  if ((bVar1) && (*param_1 == true)) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x158);
    if (bVar1) {
      this_00 = (UDS_SwimAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x158);
      UDS_SwimAbilityData::DoNextStep(this_00,SwimSubmerge);
    }
  }
  local_res18[0] = SwimSubmergeSprint;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res18);
  return;
}

// OnPostActivateAbility @ 14b846600

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
UDS_SwimSubmergeSprintAbility::OnPostActivateAbility(UDS_SwimSubmergeSprintAbility *this)

{
  bool bVar1;
  UDS_SwimAbilityData *this_00;
  EDS_StateTagType local_res8 [8];
  
  UDS_SwimBaseAbility::OnPostActivateAbility((UDS_SwimBaseAbility *)this);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x158);
  if (bVar1) {
    this_00 = (UDS_SwimAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x158);
    UDS_SwimAbilityData::DoNextStep(this_00,SwimSubmergeSprint);
  }
  local_res8[0] = SwimSubmergeSprint;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  return;
}

// OnTickComponent @ 14b84a320

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
UDS_SwimSubmergeSprintAbility::OnTickComponent(UDS_SwimSubmergeSprintAbility *this,float param_1)

{
  char cVar1;
  bool bVar2;
  UObject *pUVar3;
  UDS_SwimAbilityData *this_00;
  FDS_SwimStepInfo *this_01;
  EDS_AbilityDeactivateType local_res8 [8];
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  cVar1 = (**(code **)(*(longlong *)this + 0x3e0))(this);
  if (cVar1 == '\0') {
    local_res8[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
    return;
  }
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x158);
  if (pUVar3[4].field_0x11 == '\x05') {
    this_00 = (UDS_SwimAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x158);
    this_01 = UDS_SwimAbilityData::GetSwimStepInfo(this_00,SwimSubmergeSprint);
    bVar2 = FDS_SwimStepInfo::CheckSwimTime(this_01);
    if (bVar2) {
      return;
    }
    local_res8[0] = Success;
  }
  else {
    local_res8[0] = Cancel;
  }
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
  return;
}


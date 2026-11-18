// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b5af050

UClass * __cdecl UDS_SwimSurfaceSprintAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SwimSurfaceSprintAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SwimSurfaceSprintAbility",
               &Z_Registration_Info_UClass_UDS_SwimSurfaceSprintAbility.InnerSingleton,
               StaticRegisterNativesUDS_SwimSurfaceSprintAbility,0x170,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_SwimSurfaceSprintAbility>,
               InternalVTableHelperCtorCaller<UDS_SwimSurfaceSprintAbility>,local_res8,
               UDS_SwimBaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SwimSurfaceSprintAbility.InnerSingleton;
}

// UDS_SwimSurfaceSprintAbility @ 14b5b1b80

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

UDS_SwimSurfaceSprintAbility * __thiscall
UDS_SwimSurfaceSprintAbility::UDS_SwimSurfaceSprintAbility
          (UDS_SwimSurfaceSprintAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined8 *)&this->field_0x158 = 0;
  *(undefined8 *)&this->field_0x160 = 0;
  *(undefined8 *)&this->field_0x168 = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// UDS_SwimSurfaceSprintAbility @ 14b5b1bd0

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

UDS_SwimSurfaceSprintAbility * __thiscall
UDS_SwimSurfaceSprintAbility::UDS_SwimSurfaceSprintAbility
          (UDS_SwimSurfaceSprintAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined8 *)&this->field_0x158 = 0;
  *(undefined8 *)&this->field_0x160 = 0;
  *(undefined8 *)&this->field_0x168 = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// ~UDS_SwimSurfaceSprintAbility @ 14b5b27f0

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
UDS_SwimSurfaceSprintAbility::~UDS_SwimSurfaceSprintAbility(UDS_SwimSurfaceSprintAbility *this)

{
  *(undefined ***)this = &UDS_SwimBaseAbility::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 =
       &UDS_SwimBaseAbility::_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b5b4510

UClass * __cdecl UDS_SwimSurfaceSprintAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SwimSurfaceSprintAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SwimSurfaceSprintAbility",
               &Z_Registration_Info_UClass_UDS_SwimSurfaceSprintAbility.InnerSingleton,
               StaticRegisterNativesUDS_SwimSurfaceSprintAbility,0x170,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_SwimSurfaceSprintAbility>,
               InternalVTableHelperCtorCaller<UDS_SwimSurfaceSprintAbility>,local_res8,
               UDS_SwimBaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SwimSurfaceSprintAbility.InnerSingleton;
}

// GetSwimStep @ 14b5b52a0

EDS_SwimStep __thiscall
UDS_SwimSurfaceSprintAbility::GetSwimStep(UDS_SwimSurfaceSprintAbility *this)

{
  return SwimSurfaceSprint;
}

// ShouldStopAbilityOnExhaustedStamina @ 14b5b57f0

bool __thiscall
UDS_SwimSurfaceSprintAbility::ShouldStopAbilityOnExhaustedStamina
          (UDS_SwimSurfaceSprintAbility *this)

{
  return true;
}

// ShouldTickComponent @ 14b5b5840

bool __thiscall
UDS_SwimSurfaceSprintAbility::ShouldTickComponent(UDS_SwimSurfaceSprintAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_SwimSurfaceSprintAbility @ 14b5b58d0

void __cdecl UDS_SwimSurfaceSprintAbility::StaticRegisterNativesUDS_SwimSurfaceSprintAbility(void)

{
  return;
}

// OnCanActivate @ 14b83b3d0

bool __thiscall UDS_SwimSurfaceSprintAbility::OnCanActivate(UDS_SwimSurfaceSprintAbility *this)

{
  bool bVar1;
  UDS_SwimAbilityData *this_00;
  
  bVar1 = UDS_SwimBaseAbility::OnCanActivate((UDS_SwimBaseAbility *)this);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x158);
    if (bVar1) {
      this_00 = (UDS_SwimAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x158);
      bVar1 = UDS_SwimAbilityData::CanNextStep(this_00,SwimSurfaceSprint);
      return bVar1;
    }
  }
  return false;
}

// OnDeactivateAbility @ 14b83fd20

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
UDS_SwimSurfaceSprintAbility::OnDeactivateAbility(UDS_SwimSurfaceSprintAbility *this,bool *param_1)

{
  bool bVar1;
  UDS_SwimAbilityData *pUVar2;
  EDS_StateTagType local_res8 [8];
  
  UDS_SwimBaseAbility::OnDeactivateAbility((UDS_SwimBaseAbility *)this,param_1);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x158);
  if (bVar1) {
    pUVar2 = (UDS_SwimAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x158);
    bVar1 = UDS_SwimAbilityData::CanNextStep(pUVar2,Swim);
    if (bVar1) {
      bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x158);
      if (bVar1) {
        pUVar2 = (UDS_SwimAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x158);
        UDS_SwimAbilityData::DoNextStep(pUVar2,Swim);
      }
    }
  }
  local_res8[0] = SwimSurfaceSprint;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  return;
}

// OnPostActivateAbility @ 14b846660

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
UDS_SwimSurfaceSprintAbility::OnPostActivateAbility(UDS_SwimSurfaceSprintAbility *this)

{
  bool bVar1;
  UDS_SwimAbilityData *this_00;
  EDS_StateTagType local_res8 [8];
  
  UDS_SwimBaseAbility::OnPostActivateAbility((UDS_SwimBaseAbility *)this);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x158);
  if (bVar1) {
    this_00 = (UDS_SwimAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x158);
    UDS_SwimAbilityData::DoNextStep(this_00,SwimSurfaceSprint);
  }
  local_res8[0] = SwimSurfaceSprint;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  return;
}

// OnTickComponent @ 14b84a3c0

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
UDS_SwimSurfaceSprintAbility::OnTickComponent(UDS_SwimSurfaceSprintAbility *this,float param_1)

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
  if (pUVar3[4].field_0x11 == '\x03') {
    this_00 = (UDS_SwimAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x158);
    this_01 = UDS_SwimAbilityData::GetSwimStepInfo(this_00,SwimSurfaceSprint);
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


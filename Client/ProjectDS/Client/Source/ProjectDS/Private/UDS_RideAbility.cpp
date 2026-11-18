// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b584b60

UClass * __cdecl UDS_RideAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RideAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RideAbility",
               &Z_Registration_Info_UClass_UDS_RideAbility.InnerSingleton,
               StaticRegisterNativesUDS_RideAbility,0x158,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_RideAbility>,InternalVTableHelperCtorCaller<UDS_RideAbility>
               ,local_res8,UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RideAbility.InnerSingleton;
}

// UDS_RideAbility @ 14b586f80

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

UDS_RideAbility * __thiscall
UDS_RideAbility::UDS_RideAbility(UDS_RideAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// UDS_RideAbility @ 14b586fc0

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

UDS_RideAbility * __thiscall
UDS_RideAbility::UDS_RideAbility(UDS_RideAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// ~UDS_RideAbility @ 14b587970

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

void __thiscall UDS_RideAbility::~UDS_RideAbility(UDS_RideAbility *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b588fb0

UClass * __cdecl UDS_RideAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_RideAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_RideAbility",
               &Z_Registration_Info_UClass_UDS_RideAbility.InnerSingleton,
               StaticRegisterNativesUDS_RideAbility,0x158,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_RideAbility>,InternalVTableHelperCtorCaller<UDS_RideAbility>
               ,local_res8,UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_RideAbility.InnerSingleton;
}

// StaticRegisterNativesUDS_RideAbility @ 14b589b90

void __cdecl UDS_RideAbility::StaticRegisterNativesUDS_RideAbility(void)

{
  return;
}

// OnCanActivate @ 14b839fc0

bool __thiscall UDS_RideAbility::OnCanActivate(UDS_RideAbility *this)

{
  bool bVar1;
  
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  return bVar1;
}

// OnDeactivateAbility @ 14b83f810

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

void __thiscall UDS_RideAbility::OnDeactivateAbility(UDS_RideAbility *this,bool *param_1)

{
  EDS_StateTagType local_res18 [16];
  
  local_res18[0] = Ride;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res18);
  return;
}

// OnPostActivateAbility @ 14b845350

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

void __thiscall UDS_RideAbility::OnPostActivateAbility(UDS_RideAbility *this)

{
  EDS_StateTagType local_res10 [24];
  
  local_res10[0] = Ride;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res10);
  return;
}

// OnTickComponent @ 14b849410

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

void __thiscall UDS_RideAbility::OnTickComponent(UDS_RideAbility *this,float param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  UDS_CharStateData *pUVar4;
  TWeakObjectPtr<AActor,FWeakObjectPtr> *this_00;
  FWeakObjectPtr local_res8 [2];
  FWeakObjectPtr local_res18;
  undefined8 local_res20;
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  UDS_CharStateData::GetData((ulong64)&local_res18);
  bVar3 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar3) {
LAB_14b8494a6:
    local_res8[0].ObjectIndex._0_1_ = 2;
    UDS_GameplayAbility::DeactivateAbility
              ((UDS_GameplayAbility *)this,(EDS_AbilityDeactivateType *)local_res8);
    return;
  }
  pUVar4 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res18);
  local_res8[0].ObjectIndex = 0x1e;
  bVar3 = UDS_CharStateData::HasCharDetailState(pUVar4,(EDS_CharDetailState *)local_res8);
  if (!bVar3) {
    pUVar4 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res18);
    local_res8[0].ObjectIndex = 0x1f;
    bVar3 = UDS_CharStateData::HasCharDetailState(pUVar4,(EDS_CharDetailState *)local_res8);
    if (!bVar3) {
      this_00 = (TWeakObjectPtr<AActor,FWeakObjectPtr> *)
                (**(code **)(**(longlong **)&this->field_0xc8 + 0x1d0))();
      bVar3 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
      if (!bVar3) {
        return;
      }
      goto LAB_14b8494a6;
    }
  }
  plVar1 = *(longlong **)&this->field_0xc8;
  pcVar2 = *(code **)(*plVar1 + 0x1c8);
  local_res8[0].ObjectIndex = 0;
  local_res8[0].ObjectSerialNumber = 0;
  local_res20 = 0;
  FWeakObjectPtr::operator=(local_res8,(FObjectPtr)&local_res20);
  (*pcVar2)(plVar1,local_res8[0]);
  local_res8[0].ObjectIndex._0_1_ = 2;
  UDS_GameplayAbility::DeactivateAbility
            ((UDS_GameplayAbility *)this,(EDS_AbilityDeactivateType *)local_res8);
  return;
}

// ShouldTickComponent @ 14b850700

bool __thiscall UDS_RideAbility::ShouldTickComponent(UDS_RideAbility *this)

{
  return true;
}


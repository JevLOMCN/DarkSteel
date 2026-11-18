// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b59b000

UClass * __cdecl UDS_SpawnUnbeatableAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SpawnUnbeatableAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SpawnUnbeatableAbility",
               &Z_Registration_Info_UClass_UDS_SpawnUnbeatableAbility.InnerSingleton,
               StaticRegisterNativesUDS_SpawnUnbeatableAbility,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_SpawnUnbeatableAbility>,
               InternalVTableHelperCtorCaller<UDS_SpawnUnbeatableAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SpawnUnbeatableAbility.InnerSingleton;
}

// UDS_SpawnUnbeatableAbility @ 14b59cfe0

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

UDS_SpawnUnbeatableAbility * __thiscall
UDS_SpawnUnbeatableAbility::UDS_SpawnUnbeatableAbility
          (UDS_SpawnUnbeatableAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->SpawnRemainTime = 0.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// UDS_SpawnUnbeatableAbility @ 14b59d020

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

UDS_SpawnUnbeatableAbility * __thiscall
UDS_SpawnUnbeatableAbility::UDS_SpawnUnbeatableAbility
          (UDS_SpawnUnbeatableAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->SpawnRemainTime = 0.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// ~UDS_SpawnUnbeatableAbility @ 14b59d540

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
UDS_SpawnUnbeatableAbility::~UDS_SpawnUnbeatableAbility(UDS_SpawnUnbeatableAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b59e3c0

UClass * __cdecl UDS_SpawnUnbeatableAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SpawnUnbeatableAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SpawnUnbeatableAbility",
               &Z_Registration_Info_UClass_UDS_SpawnUnbeatableAbility.InnerSingleton,
               StaticRegisterNativesUDS_SpawnUnbeatableAbility,0x160,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_SpawnUnbeatableAbility>,
               InternalVTableHelperCtorCaller<UDS_SpawnUnbeatableAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SpawnUnbeatableAbility.InnerSingleton;
}

// ShouldTickComponent @ 14b59e4f0

bool __thiscall UDS_SpawnUnbeatableAbility::ShouldTickComponent(UDS_SpawnUnbeatableAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_SpawnUnbeatableAbility @ 14b59e5b0

void __cdecl UDS_SpawnUnbeatableAbility::StaticRegisterNativesUDS_SpawnUnbeatableAbility(void)

{
  return;
}

// OnCanActivate @ 14b83abe0

bool __thiscall UDS_SpawnUnbeatableAbility::OnCanActivate(UDS_SpawnUnbeatableAbility *this)

{
  bool bVar1;
  
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  return bVar1;
}

// OnDeactivateAbility @ 14b83fa30

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
UDS_SpawnUnbeatableAbility::OnDeactivateAbility(UDS_SpawnUnbeatableAbility *this,bool *param_1)

{
  EDS_StateTagType local_res18 [16];
  
  local_res18[0] = SpawnUnbeatable;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res18);
  return;
}

// OnPostActivateAbility @ 14b8460f0

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

void __thiscall UDS_SpawnUnbeatableAbility::OnPostActivateAbility(UDS_SpawnUnbeatableAbility *this)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  EDS_AbilityDeactivateType local_res8 [32];
  
  dVar1 = *(double *)(this->_padding_ + 0x28);
  dVar2 = UDS_TimeUtilManager::GetCurrentServerTime();
  uVar3 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar4 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if ((double)CONCAT44(uVar4,uVar3) < __real_3e45798ee2308c3a ||
      (double)CONCAT44(uVar4,uVar3) == __real_3e45798ee2308c3a) {
    local_res8[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
    return;
  }
  this->SpawnRemainTime = dVar1 - dVar2;
  if (dVar1 - dVar2 <= 0.0) {
    local_res8[0] = Success;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
    return;
  }
  local_res8[0] = 0x7e;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  return;
}

// OnTickComponent @ 14b849ed0

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
UDS_SpawnUnbeatableAbility::OnTickComponent(UDS_SpawnUnbeatableAbility *this,float param_1)

{
  double dVar1;
  EDS_AbilityDeactivateType local_res10 [24];
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  dVar1 = this->SpawnRemainTime - (double)param_1;
  this->SpawnRemainTime = dVar1;
  if (dVar1 <= 0.0) {
    local_res10[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res10);
  }
  return;
}


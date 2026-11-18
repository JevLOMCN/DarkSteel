// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b5aec10

UClass * __cdecl UDS_SwimServerFailForceUpAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SwimServerFailForceUpAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SwimServerFailForceUpAbility",
               &Z_Registration_Info_UClass_UDS_SwimServerFailForceUpAbility.InnerSingleton,
               StaticRegisterNativesUDS_SwimServerFailForceUpAbility,0x170,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_SwimServerFailForceUpAbility>,
               InternalVTableHelperCtorCaller<UDS_SwimServerFailForceUpAbility>,local_res8,
               UDS_SwimBaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SwimServerFailForceUpAbility.InnerSingleton;
}

// UDS_SwimServerFailForceUpAbility @ 14b5b1a40

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

UDS_SwimServerFailForceUpAbility * __thiscall
UDS_SwimServerFailForceUpAbility::UDS_SwimServerFailForceUpAbility
          (UDS_SwimServerFailForceUpAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined8 *)&this->field_0x158 = 0;
  *(undefined8 *)&this->field_0x160 = 0;
  *(undefined8 *)&this->field_0x168 = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// UDS_SwimServerFailForceUpAbility @ 14b5b1a90

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

UDS_SwimServerFailForceUpAbility * __thiscall
UDS_SwimServerFailForceUpAbility::UDS_SwimServerFailForceUpAbility
          (UDS_SwimServerFailForceUpAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined8 *)&this->field_0x158 = 0;
  *(undefined8 *)&this->field_0x160 = 0;
  *(undefined8 *)&this->field_0x168 = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// ~UDS_SwimServerFailForceUpAbility @ 14b5b27b0

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
UDS_SwimServerFailForceUpAbility::~UDS_SwimServerFailForceUpAbility
          (UDS_SwimServerFailForceUpAbility *this)

{
  *(undefined ***)this = &UDS_SwimBaseAbility::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 =
       &UDS_SwimBaseAbility::_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b5b4390

UClass * __cdecl UDS_SwimServerFailForceUpAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SwimServerFailForceUpAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SwimServerFailForceUpAbility",
               &Z_Registration_Info_UClass_UDS_SwimServerFailForceUpAbility.InnerSingleton,
               StaticRegisterNativesUDS_SwimServerFailForceUpAbility,0x170,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_SwimServerFailForceUpAbility>,
               InternalVTableHelperCtorCaller<UDS_SwimServerFailForceUpAbility>,local_res8,
               UDS_SwimBaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SwimServerFailForceUpAbility.InnerSingleton;
}

// GetSwimStep @ 14b5b5280

EDS_SwimStep __thiscall
UDS_SwimServerFailForceUpAbility::GetSwimStep(UDS_SwimServerFailForceUpAbility *this)

{
  return SwimServerFailForceUp;
}

// StaticRegisterNativesUDS_SwimServerFailForceUpAbility @ 14b5b58b0

void __cdecl
UDS_SwimServerFailForceUpAbility::StaticRegisterNativesUDS_SwimServerFailForceUpAbility(void)

{
  return;
}

// InitOtherAbilityEventSubscriptions @ 14b834bb0

void __thiscall
UDS_SwimServerFailForceUpAbility::InitOtherAbilityEventSubscriptions
          (UDS_SwimServerFailForceUpAbility *this)

{
  FGameplayTag *pFVar1;
  EDS_AbilityTagType local_res8 [32];
  
  local_res8[0] = SwimUp;
  pFVar1 = FDS_GameplayTags::GetAbilityTag(local_res8);
  FGameplayTagContainer::AddTag((FGameplayTagContainer *)&this->field_0x118,pFVar1);
  return;
}

// OnCanActivate @ 14b83b350

bool __thiscall
UDS_SwimServerFailForceUpAbility::OnCanActivate(UDS_SwimServerFailForceUpAbility *this)

{
  bool bVar1;
  
  bVar1 = UDS_SwimBaseAbility::OnCanActivate((UDS_SwimBaseAbility *)this);
  return bVar1;
}

// OnDeactivateAbility @ 14b83fc40

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
UDS_SwimServerFailForceUpAbility::OnDeactivateAbility
          (UDS_SwimServerFailForceUpAbility *this,bool *param_1)

{
  UDS_SwimAbilityData *this_00;
  EDS_StateTagType local_res8 [8];
  
  this_00 = (UDS_SwimAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x158);
  UDS_SwimAbilityData::DoNextStep(this_00,Swim);
  local_res8[0] = SwimServerFailForceUp;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  local_res8[0] = SwimSubmerge;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  UDS_SwimBaseAbility::OnDeactivateAbility((UDS_SwimBaseAbility *)this,param_1);
  return;
}

// OnDeactivatedOtherAbility @ 14b840530

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
UDS_SwimServerFailForceUpAbility::OnDeactivatedOtherAbility
          (UDS_SwimServerFailForceUpAbility *this,FGameplayTag *param_1,bool *param_2)

{
  FName *pFVar1;
  EDS_AbilityDeactivateType local_res20 [8];
  
  local_res20[0] = 9;
  pFVar1 = &FDS_GameplayTags::GetAbilityTag(local_res20)->TagName;
  if ((*pFVar1 != (FName)0x0) && (param_1->TagName == *pFVar1)) {
    local_res20[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res20);
  }
  return;
}

// OnPostActivateAbility @ 14b846540

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
UDS_SwimServerFailForceUpAbility::OnPostActivateAbility(UDS_SwimServerFailForceUpAbility *this)

{
  bool bVar1;
  UDS_SwimAbilityData *this_00;
  EDS_AbilityDeactivateType local_res8 [8];
  EDS_AbilityTagType local_res10 [8];
  
  UDS_SwimBaseAbility::OnPostActivateAbility((UDS_SwimBaseAbility *)this);
  local_res8[0] = Cancel;
  local_res10[0] = 6;
  FDS_EntityBase::DeactivateAbility(*(FDS_EntityBase **)&this->field_0xc8,local_res10,local_res8);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x158);
  if (bVar1) {
    this_00 = (UDS_SwimAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x158);
    UDS_SwimAbilityData::DoNextStep(this_00,SwimServerFailForceUp);
    local_res8[0] = 0x11;
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
    local_res8[0] = 9;
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
    local_res10[0] = None;
    local_res10[1] = None;
    local_res10[2] = None;
    local_res10[3] = None;
    local_res10[4] = None;
    local_res10[5] = None;
    local_res10[6] = None;
    local_res10[7] = None;
    local_res8[0] = 9;
    FDS_EntityBase::TryActivateAbility
              (*(FDS_EntityBase **)&this->field_0xc8,local_res8,
               (TObjectPtr<UWN_AbilityContext>)local_res10);
  }
  return;
}

// OnTickComponent @ 14b84a310

void __thiscall
UDS_SwimServerFailForceUpAbility::OnTickComponent
          (UDS_SwimServerFailForceUpAbility *this,float param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UObject *pUVar5;
  uint uVar6;
  longlong lVar7;
  FWeakObjectPtr FStackX_8;
  
  iVar1 = *(int *)&this->field_0x148;
  uVar6 = 0;
  if (0 < (longlong)iVar1) {
    lVar7 = 0;
    do {
      if ((int)uVar6 < 0) {
        return;
      }
      if (*(int *)&this->field_0x148 <= (int)uVar6) {
        return;
      }
      uVar4 = 0;
      if ((int)uVar6 < *(int *)&this->field_0x148) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FStackX_8 = *(FWeakObjectPtr *)(*(longlong *)&this->field_0x140 + lVar7 * 8);
      bVar3 = TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_GameplayAbility,FWeakObjectPtr> *)&FStackX_8,
                         (void *)0x0);
      if (!bVar3) {
        pUVar5 = FWeakObjectPtr::Get(&FStackX_8);
        (**(code **)(*(longlong *)pUVar5 + 0x368))(pUVar5,param_1);
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar1);
  }
  return;
}

// TryActivate @ 14b853ed0

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

bool __cdecl UDS_SwimServerFailForceUpAbility::TryActivate(ulong64 param_1)

{
  UDS_LogManager *pUVar1;
  FDS_EntityBase *this;
  undefined1 auStackY_198 [32];
  EDS_AbilityTagType local_158 [8];
  ulong64 local_150;
  undefined8 local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_150 = param_1;
  if (param_1 == 0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_SwimServerFailForceUpAbility::TryActivate",0x2d,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x54,L"Invalid parameter.");
  }
  else {
    this = FDS_EntityBase::GetEntityBase(&local_150);
    if (this != (FDS_EntityBase *)0x0) {
      if (this->EntityType == MainCharacter) {
        local_148[0] = 0;
        local_158[0] = SwimServerFailForceUp;
        FDS_EntityBase::TryActivateAbility(this,local_158,(TObjectPtr<UWN_AbilityContext>)local_148)
        ;
      }
      return true;
    }
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar1 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_SwimServerFailForceUpAbility::TryActivate",0x2d,Yes);
    UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x5b,L"sourceEntity is nullptr. (%llu)")
    ;
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}


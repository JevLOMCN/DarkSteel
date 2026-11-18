// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 12

// StaticClass @ 14b421ff0

UClass * __cdecl UDS_AvoidSkillAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AvoidSkillAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AvoidSkillAbility",
               &Z_Registration_Info_UClass_UDS_AvoidSkillAbility.InnerSingleton,
               StaticRegisterNativesUDS_AvoidSkillAbility,0x168,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AvoidSkillAbility>,
               InternalVTableHelperCtorCaller<UDS_AvoidSkillAbility>,local_res8,
               UDS_SkillAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AvoidSkillAbility.InnerSingleton;
}

// UDS_AvoidSkillAbility @ 14b423ce0

UDS_AvoidSkillAbility * __thiscall
UDS_AvoidSkillAbility::UDS_AvoidSkillAbility(UDS_AvoidSkillAbility *this,FVTableHelper *param_1)

{
  UDS_SkillAbility::UDS_SkillAbility((UDS_SkillAbility *)this,param_1);
  this->TempMaxAcceleration = 0.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// ~UDS_AvoidSkillAbility @ 14b4240a0

void __thiscall UDS_AvoidSkillAbility::~UDS_AvoidSkillAbility(UDS_AvoidSkillAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_SkillAbility::~UDS_SkillAbility((UDS_SkillAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b425170

UClass * __cdecl UDS_AvoidSkillAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AvoidSkillAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AvoidSkillAbility",
               &Z_Registration_Info_UClass_UDS_AvoidSkillAbility.InnerSingleton,
               StaticRegisterNativesUDS_AvoidSkillAbility,0x168,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AvoidSkillAbility>,
               InternalVTableHelperCtorCaller<UDS_AvoidSkillAbility>,local_res8,
               UDS_SkillAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AvoidSkillAbility.InnerSingleton;
}

// StaticRegisterNativesUDS_AvoidSkillAbility @ 14b425590

void __cdecl UDS_AvoidSkillAbility::StaticRegisterNativesUDS_AvoidSkillAbility(void)

{
  return;
}

// UDS_AvoidSkillAbility @ 14b79b6a0

UDS_AvoidSkillAbility * __thiscall
UDS_AvoidSkillAbility::UDS_AvoidSkillAbility
          (UDS_AvoidSkillAbility *this,FObjectInitializer *param_1)

{
  UDS_SkillAbility::UDS_SkillAbility((UDS_SkillAbility *)this,param_1);
  this->TempMaxAcceleration = 0.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// ClearVariables @ 14b7a00b0

void __thiscall UDS_AvoidSkillAbility::ClearVariables(UDS_AvoidSkillAbility *this)

{
  this->_padding_ = 0;
  return;
}

// InitOtherAbilityEventSubscriptions @ 14b7aeee0

void __thiscall
UDS_AvoidSkillAbility::InitOtherAbilityEventSubscriptions(UDS_AvoidSkillAbility *this)

{
  FGameplayTag *pFVar1;
  EDS_AbilityTagType local_res8 [32];
  
  local_res8[0] = SkillMove;
  pFVar1 = FDS_GameplayTags::GetAbilityTag(local_res8);
  FGameplayTagContainer::AddTag((FGameplayTagContainer *)&this->_padding_,pFVar1);
  return;
}

// OnCanActivate @ 14b7b5e30

bool __thiscall UDS_AvoidSkillAbility::OnCanActivate(UDS_AvoidSkillAbility *this)

{
  bool bVar1;
  char cVar2;
  UObject *pUVar3;
  
  bVar1 = UDS_SkillAbility::OnCanActivate((UDS_SkillAbility *)this);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    cVar2 = (**(code **)(*(longlong *)pUVar3 + 0x2f8))(pUVar3);
    return cVar2 != '\0';
  }
  return false;
}

// OnDeactivateAbility @ 14b7b8240

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_AvoidSkillAbility::OnDeactivateAbility(UDS_AvoidSkillAbility *this,bool *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  UObject *pUVar4;
  TVector<double>_u_0 *pTVar5;
  UDS_MovementCore *this_00;
  float fVar6;
  double local_58;
  double local_50;
  double local_48;
  TVector<double>_u_0 local_40 [2];
  
  UDS_SkillAbility::OnDeactivateAbility((UDS_SkillAbility *)this,param_1);
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (pUVar4[6].field_0x11 != '\0') {
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if (*(USceneComponent **)(pUVar4 + 0xb) == (USceneComponent *)0x0) {
      pTVar5 = local_40;
      local_40[0]._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
      local_40[0]._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
      local_40[0]._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
    }
    else {
      pTVar5 = &USceneComponent::GetForwardVector
                          (*(USceneComponent **)(pUVar4 + 0xb),(TVector<double> *)&local_40[0]._s_0)
                ->field0_0x0;
    }
    dVar2 = (((TVector<double>_u_0 *)&(pTVar5->_s_0).X)->_s_0).X;
    dVar3 = (pTVar5->_s_0).Y;
    dVar1 = (pTVar5->_s_0).Z;
    this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    fVar6 = UDS_MovementCore::GetMaxMoveSpeed(this_00);
    local_48 = (double)fVar6;
    local_58 = local_48 * dVar2;
    local_50 = local_48 * dVar3;
    local_48 = local_48 * dVar1;
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar4 + 0x398))(pUVar4,&local_58);
  }
  return;
}

// OnDeactivatedOtherAbility @ 14b7b8a60

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
UDS_AvoidSkillAbility::OnDeactivatedOtherAbility
          (UDS_AvoidSkillAbility *this,FGameplayTag *param_1,bool *param_2)

{
  FName *pFVar1;
  EDS_AbilityDeactivateType local_res20 [8];
  
  local_res20[0] = 0x1f;
  pFVar1 = &FDS_GameplayTags::GetAbilityTag(local_res20)->TagName;
  if ((*pFVar1 != (FName)0x0) && (param_1->TagName == *pFVar1)) {
    local_res20[0] = Success;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res20);
  }
  return;
}

// OnPostActivateAbility @ 14b7bb530

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

void __thiscall UDS_AvoidSkillAbility::OnPostActivateAbility(UDS_AvoidSkillAbility *this)

{
  UObject *pUVar1;
  bool bVar2;
  EDS_AbilityDeactivateType local_res8 [8];
  FWeakObjectPtr local_res10;
  UObject *local_res18;
  UObject *local_res20;
  
  UDS_SkillAbility::OnPostActivateAbility((UDS_SkillAbility *)this);
  local_res8[0] = Cancel;
  local_res10.ObjectIndex._0_1_ = 1;
  UDS_GameplayAbility::DeactivateAbility
            ((UDS_GameplayAbility *)this,(EDS_AbilityTagType *)&local_res10,local_res8);
  local_res8[0] = Cancel;
  local_res10.ObjectIndex._0_1_ = 0x30;
  UDS_GameplayAbility::DeactivateAbility
            ((UDS_GameplayAbility *)this,(EDS_AbilityTagType *)&local_res10,local_res8);
  local_res8[0] = Cancel;
  local_res10.ObjectIndex._0_1_ = 0x11;
  UDS_GameplayAbility::DeactivateAbility
            ((UDS_GameplayAbility *)this,(EDS_AbilityTagType *)&local_res10,local_res8);
  local_res8[0] = Cancel;
  local_res10.ObjectIndex._0_1_ = 0x13;
  UDS_GameplayAbility::DeactivateAbility
            ((UDS_GameplayAbility *)this,(EDS_AbilityTagType *)&local_res10,local_res8);
  local_res8[0] = Cancel;
  local_res10.ObjectIndex._0_1_ = 0xe;
  UDS_GameplayAbility::DeactivateAbility
            ((UDS_GameplayAbility *)this,(EDS_AbilityTagType *)&local_res10,local_res8);
  local_res8[0] = Cancel;
  local_res10.ObjectIndex._0_1_ = 0x10;
  UDS_GameplayAbility::DeactivateAbility
            ((UDS_GameplayAbility *)this,(EDS_AbilityTagType *)&local_res10,local_res8);
  local_res8[0] = Cancel;
  local_res10.ObjectIndex._0_1_ = 3;
  UDS_GameplayAbility::DeactivateAbility
            ((UDS_GameplayAbility *)this,(EDS_AbilityTagType *)&local_res10,local_res8);
  pUVar1 = (UObject *)this->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar1 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar1);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar1);
    }
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_res18 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar1);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_res18);
  local_res20 = FWeakObjectPtr::Get(&local_res10);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  local_res8[0] = 0x11;
  bVar2 = UDS_GameplayAbility::TryActivateAbility
                    ((UDS_GameplayAbility *)this,local_res8,
                     (TObjectPtr<UWN_AbilityContext>)&local_res20);
  if (!bVar2) {
    local_res8[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
  }
  return;
}


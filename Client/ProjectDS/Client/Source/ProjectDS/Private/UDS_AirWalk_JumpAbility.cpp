// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 16

// StaticClass @ 14b40f070

UClass * __cdecl UDS_AirWalk_JumpAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AirWalk_JumpAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AirWalk_JumpAbility",
               &Z_Registration_Info_UClass_UDS_AirWalk_JumpAbility.InnerSingleton,
               StaticRegisterNativesUDS_AirWalk_JumpAbility,0x168,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AirWalk_JumpAbility>,
               InternalVTableHelperCtorCaller<UDS_AirWalk_JumpAbility>,local_res8,
               UDS_AirWalk_BaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AirWalk_JumpAbility.InnerSingleton;
}

// UDS_AirWalk_JumpAbility @ 14b411920

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

UDS_AirWalk_JumpAbility * __thiscall
UDS_AirWalk_JumpAbility::UDS_AirWalk_JumpAbility
          (UDS_AirWalk_JumpAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// ~UDS_AirWalk_JumpAbility @ 14b4120d0

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

void __thiscall UDS_AirWalk_JumpAbility::~UDS_AirWalk_JumpAbility(UDS_AirWalk_JumpAbility *this)

{
  this->_padding_ = (longlong)&UDS_AirWalk_BaseAbility::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UDS_AirWalk_BaseAbility::_vftable__for__IGameplayTaskOwnerInterface__
  ;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b413d20

UClass * __cdecl UDS_AirWalk_JumpAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AirWalk_JumpAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AirWalk_JumpAbility",
               &Z_Registration_Info_UClass_UDS_AirWalk_JumpAbility.InnerSingleton,
               StaticRegisterNativesUDS_AirWalk_JumpAbility,0x168,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AirWalk_JumpAbility>,
               InternalVTableHelperCtorCaller<UDS_AirWalk_JumpAbility>,local_res8,
               UDS_AirWalk_BaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AirWalk_JumpAbility.InnerSingleton;
}

// ShouldTickComponent @ 14b414190

bool __thiscall UDS_AirWalk_JumpAbility::ShouldTickComponent(UDS_AirWalk_JumpAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_AirWalk_JumpAbility @ 14b414370

void __cdecl UDS_AirWalk_JumpAbility::StaticRegisterNativesUDS_AirWalk_JumpAbility(void)

{
  return;
}

// UDS_AirWalk_JumpAbility @ 14b79b540

UDS_AirWalk_JumpAbility * __thiscall
UDS_AirWalk_JumpAbility::UDS_AirWalk_JumpAbility
          (UDS_AirWalk_JumpAbility *this,FObjectInitializer *param_1)

{
  UDS_AirWalk_BaseAbility::UDS_AirWalk_BaseAbility((UDS_AirWalk_BaseAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// ClearVariables @ 14b79ff60

void __thiscall UDS_AirWalk_JumpAbility::ClearVariables(UDS_AirWalk_JumpAbility *this)

{
  this->PrevAirWalkStep = Ready;
  return;
}

// DoJump @ 14b7a4cc0

void __thiscall UDS_AirWalk_JumpAbility::DoJump(UDS_AirWalk_JumpAbility *this)

{
  bool bVar1;
  int iVar2;
  UObject *pUVar3;
  UDS_AirWalkAbilityData *pUVar4;
  FDS_AirWalkStepInfo *pFVar5;
  
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  iVar2 = (**(code **)(*(longlong *)pUVar3 + 0x438))(pUVar3);
  if (iVar2 == 4) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar3 + 0x448))(pUVar3,1);
  }
  pUVar4 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  bVar1 = UDS_AirWalkAbilityData::DoJump(pUVar4);
  if (bVar1) {
    pUVar4 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pFVar5 = UDS_AirWalkAbilityData::GetAirWalkStepInfo(pUVar4,pUVar3[4].field_0x20);
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar3 + 0x2e8))(pUVar3,pFVar5->AirWalkSpeed);
    UpdateJumpStateTag(this,pFVar5->AirWalkStep);
  }
  return;
}

// GetAirWalkStep @ 14b7ab1f0

EDS_AirWalkStep __thiscall UDS_AirWalk_JumpAbility::GetAirWalkStep(UDS_AirWalk_JumpAbility *this)

{
  bool bVar1;
  UObject *pUVar2;
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    return (pUVar2[5].field_0x10 == '\x01') + Jump1;
  }
  return Jump1;
}

// OnAbilityRetryActivate @ 14b7b4020

void __thiscall UDS_AirWalk_JumpAbility::OnAbilityRetryActivate(UDS_AirWalk_JumpAbility *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x2c0))();
  if (cVar1 != '\0') {
    DoJump(this);
    return;
  }
  return;
}

// OnCanActivate @ 14b7b5720

bool __thiscall UDS_AirWalk_JumpAbility::OnCanActivate(UDS_AirWalk_JumpAbility *this)

{
  bool bVar1;
  FName *pFVar2;
  bool local_res8 [8];
  EDS_SpecialBuffType local_res10 [6];
  
  local_res8[0] = true;
  local_res10[0] = ForbidCharJump;
  bVar1 = UDS_CharBuffData::CheckForbidSpecialBuff
                    ((ulong64 *)&this->_padding_,local_res10,local_res8);
  if (bVar1) {
    if (Jump1Tag.TagName == (FName)0x0) {
      local_res8[0] = true;
      pFVar2 = &FDS_GameplayTags::GetStateTag(local_res8)->TagName;
      Jump1Tag.TagName = *pFVar2;
    }
    if (Jump2Tag.TagName == (FName)0x0) {
      local_res8[0] = true;
      pFVar2 = &FDS_GameplayTags::GetStateTag(local_res8)->TagName;
      Jump2Tag.TagName = *pFVar2;
    }
    bVar1 = UDS_AirWalk_BaseAbility::OnCanActivate((UDS_AirWalk_BaseAbility *)this);
    return bVar1;
  }
  return false;
}

// OnDeactivateAbility @ 14b7b7f60

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
UDS_AirWalk_JumpAbility::OnDeactivateAbility(UDS_AirWalk_JumpAbility *this,bool *param_1)

{
  EDS_StateTagType local_res18 [16];
  
  UDS_AirWalk_BaseAbility::OnDeactivateAbility((UDS_AirWalk_BaseAbility *)this,param_1);
  local_res18[0] = AirWalk_Jump01;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res18);
  local_res18[0] = AirWalk_Jump02;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res18);
  return;
}

// OnPostActivateAbility @ 14b7bb220

void __thiscall UDS_AirWalk_JumpAbility::OnPostActivateAbility(UDS_AirWalk_JumpAbility *this)

{
  UDS_AirWalk_BaseAbility::OnPostActivateAbility((UDS_AirWalk_BaseAbility *)this);
  DoJump(this);
  return;
}

// OnTickComponent @ 14b7bd510

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
UDS_AirWalk_JumpAbility::OnTickComponent(UDS_AirWalk_JumpAbility *this,float param_1)

{
  bool bVar1;
  UObject *pUVar2;
  EDS_AbilityDeactivateType local_res8 [8];
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (!bVar1) {
    local_res8[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
    return;
  }
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if ((pUVar2[4].field_0x20 != '\x01') && (pUVar2[4].field_0x20 != '\x02')) {
    local_res8[0] = Success;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
    return;
  }
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UpdateJumpStateTag(this,pUVar2[4].field_0x20);
  return;
}

// UpdateJumpStateTag @ 14b7c9840

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
UDS_AirWalk_JumpAbility::UpdateJumpStateTag(UDS_AirWalk_JumpAbility *this,EDS_AirWalkStep param_1)

{
  if (this->PrevAirWalkStep != param_1) {
    this->PrevAirWalkStep = param_1;
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,&Jump1Tag);
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,&Jump2Tag);
    if (param_1 == Jump1) {
      UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,&Jump1Tag);
      return;
    }
    if (param_1 == Jump2) {
      UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,&Jump2Tag);
    }
  }
  return;
}


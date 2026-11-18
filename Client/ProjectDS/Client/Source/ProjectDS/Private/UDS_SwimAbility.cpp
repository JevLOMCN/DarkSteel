// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 21

// StaticClass @ 14b5ad260

UClass * __cdecl UDS_SwimAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SwimAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SwimAbility",
               &Z_Registration_Info_UClass_UDS_SwimAbility.InnerSingleton,
               StaticRegisterNativesUDS_SwimAbility,0x178,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_SwimAbility>,InternalVTableHelperCtorCaller<UDS_SwimAbility>
               ,local_res8,UDS_SwimBaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SwimAbility.InnerSingleton;
}

// UDS_SwimAbility @ 14b5b1630

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

UDS_SwimAbility * __thiscall
UDS_SwimAbility::UDS_SwimAbility(UDS_SwimAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->bIsFullySubmerged = false;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// UDS_SwimAbility @ 14b5b1680

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

UDS_SwimAbility * __thiscall
UDS_SwimAbility::UDS_SwimAbility(UDS_SwimAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->bIsFullySubmerged = false;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// ~UDS_SwimAbility @ 14b5b25e0

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

void __thiscall UDS_SwimAbility::~UDS_SwimAbility(UDS_SwimAbility *this)

{
  this->_padding_ = (longlong)&UDS_SwimBaseAbility::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UDS_SwimBaseAbility::_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b5b3fd0

UClass * __cdecl UDS_SwimAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SwimAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SwimAbility",
               &Z_Registration_Info_UClass_UDS_SwimAbility.InnerSingleton,
               StaticRegisterNativesUDS_SwimAbility,0x178,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UDS_SwimAbility>,InternalVTableHelperCtorCaller<UDS_SwimAbility>
               ,local_res8,UDS_SwimBaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SwimAbility.InnerSingleton;
}

// GetSwimStep @ 14b5b5260

EDS_SwimStep __thiscall UDS_SwimAbility::GetSwimStep(UDS_SwimAbility *this)

{
  return Swim;
}

// ShouldNotifyChangedCharState @ 14b5b5790

bool __thiscall UDS_SwimAbility::ShouldNotifyChangedCharState(UDS_SwimAbility *this)

{
  return true;
}

// ShouldNotifyChangedCharState_WhenInactive @ 14b5b57c0

bool __thiscall UDS_SwimAbility::ShouldNotifyChangedCharState_WhenInactive(UDS_SwimAbility *this)

{
  return true;
}

// ShouldTickComponent @ 14b5b5810

bool __thiscall UDS_SwimAbility::ShouldTickComponent(UDS_SwimAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_SwimAbility @ 14b5b5860

void __cdecl UDS_SwimAbility::StaticRegisterNativesUDS_SwimAbility(void)

{
  return;
}

// ApplySwimmingEquipmentAppearance @ 14b8250f0

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

void __thiscall UDS_SwimAbility::ApplySwimmingEquipmentAppearance(UDS_SwimAbility *this)

{
  FDS_EquipmentAppearanceData local_18 [2];
  
  local_18[0].AppearanceStateTag = Locomotion_Swim;
  local_18[0].TransitionTime = 0.0;
  local_18[0].bIsVisible = false;
  FDS_EntityBase::SetDesiredEquipmentAppearanceData((FDS_EntityBase *)this->_padding_,local_18);
  return;
}

// DeactivateAbilitiesForSwimming @ 14b82cb80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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

void __thiscall UDS_SwimAbility::DeactivateAbilitiesForSwimming(UDS_SwimAbility *this)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  ForAnyElementType FVar3;
  ulonglong uVar4;
  undefined1 auStackY_88 [32];
  EDS_AbilityDeactivateType local_48 [8];
  ForAnyElementType local_40;
  uint local_38;
  int local_34 [3];
  undefined2 local_28;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_88;
  local_34[1] = 0x12131110;
  local_34[2] = 0x17161514;
  local_28 = 0xd0c;
  local_40.Data = (FScriptContainerElement *)0x0;
  local_38 = 10;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,10,0,&local_40,10,local_34);
  memcpy(local_40.Data,local_34 + 1,10);
  uVar2 = local_38;
  uVar4 = (ulonglong)(int)local_38;
  pFVar1 = local_40.Data + uVar4;
  FVar3.Data = local_40.Data;
  while( true ) {
    if ((uint)uVar4 != uVar2) {
      `TCheckedPointerIterator<enum_EDS_AbilityTagType,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_48);
    }
    if (FVar3.Data == pFVar1) break;
    local_48[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility
              ((UDS_GameplayAbility *)this,(EDS_AbilityTagType *)FVar3.Data,local_48);
    uVar4 = (ulonglong)local_38;
    FVar3.Data = FVar3.Data + 1;
  }
  if (local_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.Data);
  }
  return;
}

// ExitSubmergedState @ 14b830350

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

void __thiscall UDS_SwimAbility::ExitSubmergedState(UDS_SwimAbility *this)

{
  bool bVar1;
  UDS_SwimAbilityData *pUVar2;
  EDS_StateTagType local_res8 [8];
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    pUVar2 = (UDS_SwimAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar1 = UDS_SwimAbilityData::CanNextStep(pUVar2,Swim);
    if (bVar1) {
      bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
      if (bVar1) {
        pUVar2 = (UDS_SwimAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        UDS_SwimAbilityData::DoNextStep(pUVar2,Swim);
      }
    }
  }
  local_res8[0] = SwimSubmerge;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  return;
}

// GetCameraPitchAngle @ 14b8313d0

float __thiscall UDS_SwimAbility::GetCameraPitchAngle(UDS_SwimAbility *this)

{
  bool bVar1;
  ADS_MainCharacter *this_00;
  TWeakObjectPtr<UDS_MainCameraComponent,FWeakObjectPtr> this_01;
  UDS_MainCameraComponent *this_02;
  UObject *pUVar2;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  UObject *local_res18 [2];
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    this_00 = (ADS_MainCharacter *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    this_01 = ADS_MainCharacter::GetFollowCamera(this_00);
    local_res18[0] = FWeakObjectPtr::Get((FWeakObjectPtr *)this_01.WeakPtr);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(local_res18[0]);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18[0] != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(local_res18[0]);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
    bVar1 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar1) {
      this_02 = (UDS_MainCameraComponent *)FWeakObjectPtr::Get(&local_res8);
      UDS_MainCameraComponent::GetNowCameraState(this_02);
      bVar1 = FWeakObjectPtr::IsValid(&local_res10);
      if (bVar1) {
        pUVar2 = FWeakObjectPtr::Get(&local_res10);
        return *(float *)&pUVar2[1].field_0x20;
      }
    }
  }
  return 0.0;
}

// OnCanActivate @ 14b83adf0

bool __thiscall UDS_SwimAbility::OnCanActivate(UDS_SwimAbility *this)

{
  bool bVar1;
  
  bVar1 = UDS_SwimBaseAbility::OnCanActivate((UDS_SwimBaseAbility *)this);
  return bVar1;
}

// OnChangedCharState @ 14b83c6c0

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
UDS_SwimAbility::OnChangedCharState
          (UDS_SwimAbility *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  bool bVar1;
  UDS_CharStateData *pUVar2;
  FWeakObjectPtr local_res10;
  EDS_CharState local_res18;
  undefined8 local_res20;
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
    pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
    local_res18 = Swim;
    bVar1 = UDS_CharStateData::HasCharState(pUVar2,&local_res18);
    if (bVar1) {
      local_res20 = 0;
      local_res18 = CONCAT71(local_res18._1_7_,5);
      UDS_GameplayAbility::TryActivateAbility
                ((UDS_GameplayAbility *)this,(EDS_AbilityTagType *)&local_res18,
                 (TObjectPtr<UWN_AbilityContext>)&local_res20);
    }
    else if (param_2->RemovedCharState == Swim) {
      local_res18 = CONCAT71(local_res18._1_7_,1);
      UDS_GameplayAbility::DeactivateAbility
                ((UDS_GameplayAbility *)this,(EDS_AbilityDeactivateType *)&local_res18);
    }
    pUVar2 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_res10);
    local_res18 = CONCAT44(local_res18._4_4_,6);
    bVar1 = UDS_CharStateData::HasCharDetailState(pUVar2,(EDS_CharDetailState *)&local_res18);
    this->bIsFullySubmerged = bVar1;
  }
  return;
}

// OnDeactivateAbility @ 14b83fa80

void __thiscall UDS_SwimAbility::OnDeactivateAbility(UDS_SwimAbility *this,bool *param_1)

{
  char cVar1;
  bool bVar2;
  UDS_SwimAbilityData *this_00;
  
  UDS_SwimBaseAbility::OnDeactivateAbility((UDS_SwimBaseAbility *)this,param_1);
  cVar1 = (**(code **)(this->_padding_ + 0x3e0))(this);
  if (cVar1 != '\0') {
    bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
    if (bVar2) {
      this_00 = (UDS_SwimAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      UDS_SwimAbilityData::DoNextStep(this_00,Ready);
      return;
    }
  }
  return;
}

// OnPostActivateAbility @ 14b8461e0

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

void __thiscall UDS_SwimAbility::OnPostActivateAbility(UDS_SwimAbility *this)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  UDS_SwimAbilityData *this_00;
  ForAnyElementType FVar5;
  ulonglong uVar6;
  undefined1 auStackY_88 [32];
  EDS_AbilityDeactivateType local_48 [8];
  ForAnyElementType local_40;
  uint local_38;
  int local_34;
  FDS_EquipmentAppearanceData local_30;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_88;
  UDS_SwimBaseAbility::OnPostActivateAbility((UDS_SwimBaseAbility *)this);
  local_48[0] = Cancel;
  bVar3 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_48);
  if ((bVar3) && (cVar4 = (**(code **)(this->_padding_ + 0x3e0))(this), cVar4 != '\0')) {
    local_30.AppearanceStateTag = SwimForceUp;
    local_30._1_3_ = 0x121311;
    local_30.TransitionTime = 4.849422e-25;
    local_30._8_2_ = 0xd0c;
    local_40.Data = (FScriptContainerElement *)0x0;
    local_38 = 10;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,10,0,&local_40,10,&local_34);
    memcpy(local_40.Data,&local_30,10);
    uVar2 = local_38;
    uVar6 = (ulonglong)(int)local_38;
    pFVar1 = local_40.Data + uVar6;
    FVar5.Data = local_40.Data;
    while( true ) {
      if ((uint)uVar6 != uVar2) {
        `TCheckedPointerIterator<enum_EDS_AbilityTagType,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_48);
      }
      if (FVar5.Data == pFVar1) break;
      local_48[0] = Cancel;
      UDS_GameplayAbility::DeactivateAbility
                ((UDS_GameplayAbility *)this,(EDS_AbilityTagType *)FVar5.Data,local_48);
      uVar6 = (ulonglong)local_38;
      FVar5.Data = FVar5.Data + 1;
    }
    if (local_40.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40.Data);
    }
    local_30.AppearanceStateTag = None;
    local_30._1_3_ = 0;
    local_30.TransitionTime = 0.0;
    local_48[0] = 10;
    UDS_GameplayAbility::TryActivateAbility
              ((UDS_GameplayAbility *)this,local_48,(TObjectPtr<UWN_AbilityContext>)&local_30);
    bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
    if (bVar3) {
      this_00 = (UDS_SwimAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      UDS_SwimAbilityData::DoNextStep(this_00,Swim);
    }
    local_30.AppearanceStateTag = 2;
    local_30._0_8_ = local_30._0_8_ & 0xffffffff;
    local_30._8_2_ = local_30._8_2_ & 0xff00;
    FDS_EntityBase::SetDesiredEquipmentAppearanceData((FDS_EntityBase *)this->_padding_,&local_30);
    return;
  }
  local_48[0] = Cancel;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_48);
  return;
}

// OnTickComponent @ 14b849f30

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

void __thiscall UDS_SwimAbility::OnTickComponent(UDS_SwimAbility *this,float param_1)

{
  double dVar1;
  char cVar2;
  bool bVar3;
  UObject *pUVar4;
  UDS_SwimAbilityData *pUVar5;
  APawn *this_00;
  TRotator<double> *pTVar6;
  TVector<double> *pTVar7;
  EDS_AbilityDeactivateType local_res8 [8];
  double local_98;
  double dStack_90;
  double local_88;
  TRotator<double> local_80;
  TVector<double>_u_0 local_68;
  TRotator<double> local_50;
  TRotator<double> local_38 [2];
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  cVar2 = (**(code **)(this->_padding_ + 0x3e0))(this);
  if (cVar2 == '\0') {
    local_res8[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
  }
  else {
    if (this->bIsFullySubmerged == true) {
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      cVar2 = (**(code **)(*(longlong *)pUVar4 + 800))(pUVar4);
      if (cVar2 == '\0') {
        bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
        if (bVar3) {
          pUVar5 = (UDS_SwimAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          bVar3 = UDS_SwimAbilityData::CanNextStep(pUVar5,Swim);
          if ((bVar3) &&
             (bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_), bVar3)) {
            pUVar5 = (UDS_SwimAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
            UDS_SwimAbilityData::DoNextStep(pUVar5,Swim);
          }
        }
        local_res8[0] = 9;
        UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
      }
    }
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if (pUVar4[6].field_0x10 != '\x01') {
      if (this->bIsFullySubmerged == true) {
        UpdateSubmergedSwimMovement(this,param_1);
      }
      else {
        this_00 = (APawn *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        pTVar6 = APawn::GetControlRotation(this_00,local_38);
        local_80.Yaw = pTVar6->Yaw;
        local_80.Pitch = 0.0;
        local_50.Yaw = ADS_CameraManager::CameraRotation.Yaw;
        local_50.Roll = ADS_CameraManager::CameraRotation.Roll;
        local_80.Roll = 0.0;
        local_98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        dStack_90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        UE::Math::TRotator<double>::RotateVector
                  (&local_80,(TVector<double> *)&local_68._s_0,
                   &UE::Math::TVector<double>::RightVector);
        local_50.Pitch = 0.0;
        pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        dVar1 = *(double *)(pUVar4 + 6);
        local_98 = local_98 + dVar1 * local_68._s_0.X;
        dStack_90 = dStack_90 + dVar1 * local_68._s_0.Y;
        local_88 = local_88 + dVar1 * local_68._s_0.Z;
        pTVar7 = UE::Math::TRotator<double>::Vector(&local_50,(TVector<double> *)local_38);
        pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        dVar1 = *(double *)&pUVar4[6].field_0x8;
        local_98 = local_98 + dVar1 * (pTVar7->field0_0x0)._s_0.X;
        dStack_90 = dStack_90 + dVar1 * (pTVar7->field0_0x0)._s_0.Y;
        local_88 = local_88 + dVar1 * (pTVar7->field0_0x0)._s_0.Z;
        pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        (**(code **)(*(longlong *)pUVar4 + 0x2e0))(pUVar4,&local_98);
      }
    }
  }
  return;
}

// UpdateSubmergedSwimMovement @ 14b85ab50

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UDS_SwimAbility::UpdateSubmergedSwimMovement(UDS_SwimAbility *this,float param_1)

{
  double dVar1;
  bool bVar2;
  APawn *this_00;
  TRotator<double> *pTVar3;
  ADS_MainCharacter *this_01;
  TWeakObjectPtr<UDS_MainCameraComponent,FWeakObjectPtr> this_02;
  UDS_MainCameraComponent *this_03;
  UObject *pUVar4;
  TVector<double> *pTVar5;
  uint uVar6;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  double local_98;
  double dStack_90;
  double local_88;
  TRotator<double> local_80;
  TRotator<double> local_68;
  TVector<double>_u_0 local_50;
  TRotator<double> local_30;
  
  this_00 = (APawn *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pTVar3 = APawn::GetControlRotation(this_00,&local_30);
  local_68.Yaw = pTVar3->Yaw;
  local_68.Pitch = 0.0;
  local_80.Pitch = ADS_CameraManager::CameraRotation.Pitch;
  local_80.Yaw = ADS_CameraManager::CameraRotation.Yaw;
  local_68.Roll = 0.0;
  local_80.Roll = ADS_CameraManager::CameraRotation.Roll;
  local_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  UE::Math::TRotator<double>::RotateVector
            (&local_68,(TVector<double> *)&local_50._s_0,&UE::Math::TVector<double>::RightVector);
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar2) {
    this_01 = (ADS_MainCharacter *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    this_02 = ADS_MainCharacter::GetFollowCamera(this_01);
    local_res20 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_02.WeakPtr);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res20);
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res20);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
    bVar2 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar2) {
      this_03 = (UDS_MainCameraComponent *)FWeakObjectPtr::Get(&local_res8);
      UDS_MainCameraComponent::GetNowCameraState(this_03);
      bVar2 = FWeakObjectPtr::IsValid(&local_res18);
      if (bVar2) {
        pUVar4 = FWeakObjectPtr::Get(&local_res18);
        uVar6 = *(uint *)&pUVar4[1].field_0x20;
        goto LAB_14b85ac9d;
      }
    }
  }
  uVar6 = 0;
LAB_14b85ac9d:
  local_80.Pitch = local_80.Pitch + (double)(float)(uVar6 ^ __xmm_80000000800000008000000080000000);
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  dVar1 = *(double *)(pUVar4 + 6);
  local_98 = local_98 + dVar1 * local_50._s_0.X;
  dStack_90 = dStack_90 + dVar1 * local_50._s_0.Y;
  local_88 = local_88 + dVar1 * local_50._s_0.Z;
  pTVar5 = UE::Math::TRotator<double>::Vector(&local_80,(TVector<double> *)&local_30);
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  dVar1 = *(double *)&pUVar4[6].field_0x8;
  local_98 = local_98 + dVar1 * (pTVar5->field0_0x0)._s_0.X;
  dStack_90 = dStack_90 + dVar1 * (pTVar5->field0_0x0)._s_0.Y;
  local_88 = local_88 + dVar1 * (pTVar5->field0_0x0)._s_0.Z;
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (**(code **)(*(longlong *)pUVar4 + 0x2e0))(pUVar4,&local_98);
  return;
}

// UpdateSurfaceSwimMovement @ 14b85adb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UDS_SwimAbility::UpdateSurfaceSwimMovement(UDS_SwimAbility *this,float param_1)

{
  double dVar1;
  APawn *this_00;
  TRotator<double> *pTVar2;
  UObject *pUVar3;
  TVector<double> *pTVar4;
  double local_98;
  double dStack_90;
  double local_88;
  TRotator<double> local_80;
  TVector<double>_u_0 local_68;
  TRotator<double> local_50;
  TRotator<double> local_38 [2];
  
  this_00 = (APawn *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pTVar2 = APawn::GetControlRotation(this_00,local_38);
  local_80.Yaw = pTVar2->Yaw;
  local_80.Pitch = 0.0;
  local_50.Yaw = ADS_CameraManager::CameraRotation.Yaw;
  local_50.Roll = ADS_CameraManager::CameraRotation.Roll;
  local_80.Roll = 0.0;
  local_98 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_90 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  UE::Math::TRotator<double>::RotateVector
            (&local_80,(TVector<double> *)&local_68._s_0,&UE::Math::TVector<double>::RightVector);
  local_50.Pitch = 0.0;
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  dVar1 = *(double *)(pUVar3 + 6);
  local_98 = local_98 + dVar1 * local_68._s_0.X;
  dStack_90 = dStack_90 + dVar1 * local_68._s_0.Y;
  local_88 = local_88 + dVar1 * local_68._s_0.Z;
  pTVar4 = UE::Math::TRotator<double>::Vector(&local_50,(TVector<double> *)local_38);
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  dVar1 = *(double *)&pUVar3[6].field_0x8;
  local_98 = local_98 + dVar1 * (pTVar4->field0_0x0)._s_0.X;
  dStack_90 = dStack_90 + dVar1 * (pTVar4->field0_0x0)._s_0.Y;
  local_88 = local_88 + dVar1 * (pTVar4->field0_0x0)._s_0.Z;
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (**(code **)(*(longlong *)pUVar3 + 0x2e0))(pUVar3,&local_98);
  return;
}


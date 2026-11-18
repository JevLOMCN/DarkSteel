// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b5af150

UClass * __cdecl UDS_SwimUpAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SwimUpAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SwimUpAbility",
               &Z_Registration_Info_UClass_UDS_SwimUpAbility.InnerSingleton,
               StaticRegisterNativesUDS_SwimUpAbility,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SwimUpAbility>,
               InternalVTableHelperCtorCaller<UDS_SwimUpAbility>,local_res8,
               UDS_SwimBaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SwimUpAbility.InnerSingleton;
}

// UDS_SwimUpAbility @ 14b5b1c20

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

UDS_SwimUpAbility * __thiscall
UDS_SwimUpAbility::UDS_SwimUpAbility(UDS_SwimUpAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined8 *)&this->field_0x158 = 0;
  *(undefined8 *)&this->field_0x160 = 0;
  *(undefined8 *)&this->field_0x168 = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// UDS_SwimUpAbility @ 14b5b1c70

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

UDS_SwimUpAbility * __thiscall
UDS_SwimUpAbility::UDS_SwimUpAbility(UDS_SwimUpAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  *(undefined8 *)&this->field_0x158 = 0;
  *(undefined8 *)&this->field_0x160 = 0;
  *(undefined8 *)&this->field_0x168 = 0;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IGameplayTaskOwnerInterface__;
  return this;
}

// ~UDS_SwimUpAbility @ 14b5b2810

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

void __thiscall UDS_SwimUpAbility::~UDS_SwimUpAbility(UDS_SwimUpAbility *this)

{
  *(undefined ***)this = &UDS_SwimBaseAbility::_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 =
       &UDS_SwimBaseAbility::_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b5b45d0

UClass * __cdecl UDS_SwimUpAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SwimUpAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SwimUpAbility",
               &Z_Registration_Info_UClass_UDS_SwimUpAbility.InnerSingleton,
               StaticRegisterNativesUDS_SwimUpAbility,0x170,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SwimUpAbility>,
               InternalVTableHelperCtorCaller<UDS_SwimUpAbility>,local_res8,
               UDS_SwimBaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SwimUpAbility.InnerSingleton;
}

// GetSwimStep @ 14b5b52b0

EDS_SwimStep __thiscall UDS_SwimUpAbility::GetSwimStep(UDS_SwimUpAbility *this)

{
  return SwimUp;
}

// ShouldNotifyChangedCharState @ 14b5b57b0

bool __thiscall UDS_SwimUpAbility::ShouldNotifyChangedCharState(UDS_SwimUpAbility *this)

{
  return true;
}

// ShouldStopAbilityOnExhaustedStamina @ 14b5b5800

bool __thiscall UDS_SwimUpAbility::ShouldStopAbilityOnExhaustedStamina(UDS_SwimUpAbility *this)

{
  return true;
}

// ShouldTickComponent @ 14b5b5850

bool __thiscall UDS_SwimUpAbility::ShouldTickComponent(UDS_SwimUpAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_SwimUpAbility @ 14b5b58e0

void __cdecl UDS_SwimUpAbility::StaticRegisterNativesUDS_SwimUpAbility(void)

{
  return;
}

// EndSwimUp @ 14b82d490

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

void __thiscall UDS_SwimUpAbility::EndSwimUp(UDS_SwimUpAbility *this)

{
  bool bVar1;
  UDS_SwimAbilityData *this_00;
  EDS_SwimStep EVar2;
  EDS_AbilityInputPolicy local_res10 [24];
  
  local_res10[0] = None;
  UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_res10);
  bVar1 = UDS_SwimBaseAbility::IsFullySubmerged((UDS_SwimBaseAbility *)this);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x158);
    if (!bVar1) goto LAB_14b82d4f7;
    this_00 = (UDS_SwimAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x158);
    EVar2 = SwimSubmerge;
  }
  else {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x158);
    if (!bVar1) goto LAB_14b82d4f7;
    this_00 = (UDS_SwimAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x158);
    EVar2 = Swim;
  }
  UDS_SwimAbilityData::DoNextStep(this_00,EVar2);
LAB_14b82d4f7:
  local_res10[0] = 0xd;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res10);
  local_res10[0] = 8;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res10);
  return;
}

// OnCanActivate @ 14b83b430

bool __thiscall UDS_SwimUpAbility::OnCanActivate(UDS_SwimUpAbility *this)

{
  bool bVar1;
  UDS_SwimAbilityData *this_00;
  
  bVar1 = UDS_SwimBaseAbility::OnCanActivate((UDS_SwimBaseAbility *)this);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x158);
    if (bVar1) {
      this_00 = (UDS_SwimAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x158);
      bVar1 = UDS_SwimAbilityData::CanNextStep(this_00,SwimUp);
      return bVar1;
    }
  }
  return false;
}

// OnChangedCharState @ 14b83c840

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
UDS_SwimUpAbility::OnChangedCharState
          (UDS_SwimUpAbility *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  bool bVar1;
  EDS_AbilityDeactivateType local_res18 [16];
  FDS_ChangedCharStateInfo local_38;
  
  local_38.StateTag.TagName = (param_2->StateTag).TagName;
  local_38.bIsStateTagOn = param_2->bIsStateTagOn;
  local_38._9_7_ = *(undefined7 *)&param_2->field_0x9;
  local_38.AddedCharState = param_2->AddedCharState;
  local_38.RemovedCharState = param_2->RemovedCharState;
  local_38.AddedCharDetailState = param_2->AddedCharDetailState;
  local_38.RemovedCharDetailState = param_2->RemovedCharDetailState;
  UDS_GameplayAbility::OnChangedCharState((UDS_GameplayAbility *)this,param_1,&local_38);
  bVar1 = UDS_SwimBaseAbility::IsFullySubmerged((UDS_SwimBaseAbility *)this);
  if (!bVar1) {
    local_res18[0] = Success;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res18);
  }
  return;
}

// OnDeactivateAbility @ 14b83fdb0

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

void __thiscall UDS_SwimUpAbility::OnDeactivateAbility(UDS_SwimUpAbility *this,bool *param_1)

{
  bool bVar1;
  UDS_SwimAbilityData *this_00;
  EDS_SwimStep EVar2;
  EDS_AbilityInputPolicy local_res18 [16];
  
  UDS_SwimBaseAbility::OnDeactivateAbility((UDS_SwimBaseAbility *)this,param_1);
  local_res18[0] = None;
  UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_res18);
  bVar1 = UDS_SwimBaseAbility::IsFullySubmerged((UDS_SwimBaseAbility *)this);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x158);
    if (!bVar1) goto LAB_14b83fe1f;
    this_00 = (UDS_SwimAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x158);
    EVar2 = SwimSubmerge;
  }
  else {
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x158);
    if (!bVar1) goto LAB_14b83fe1f;
    this_00 = (UDS_SwimAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x158);
    EVar2 = Swim;
  }
  UDS_SwimAbilityData::DoNextStep(this_00,EVar2);
LAB_14b83fe1f:
  local_res18[0] = 0xd;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res18);
  local_res18[0] = 8;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res18);
  return;
}

// OnPostActivateAbility @ 14b8466c0

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

void __thiscall UDS_SwimUpAbility::OnPostActivateAbility(UDS_SwimUpAbility *this)

{
  bool bVar1;
  UDS_SwimAbilityData *this_00;
  EDS_AbilityInputPolicy local_res8 [8];
  
  UDS_SwimBaseAbility::OnPostActivateAbility((UDS_SwimBaseAbility *)this);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x158);
  if (bVar1) {
    this_00 = (UDS_SwimAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x158);
    UDS_SwimAbilityData::DoNextStep(this_00,SwimUp);
  }
  local_res8[0] = 8;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  local_res8[0] = 0xd;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  local_res8[0] = BlockInput;
  UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_res8);
  return;
}

// OnTickComponent @ 14b84a460

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

void __thiscall UDS_SwimUpAbility::OnTickComponent(UDS_SwimUpAbility *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  UObject *pUVar3;
  ADS_MainCharacter *this_00;
  UDS_CharacterTrajectoryComponent *this_01;
  FTransformTrajectory *pFVar4;
  UDS_MovementCore *this_02;
  TMatrix<double> *this_03;
  TVector<double> *pTVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_118 [32];
  EDS_AbilityDeactivateType local_f8 [8];
  FWeakObjectPtr local_f0;
  TVector<double>_u_0 local_e8;
  TVector<double> local_d0;
  TVector<double> local_b8;
  undefined1 local_98 [56];
  float local_60;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_118;
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  bVar2 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x168);
  if (bVar2) {
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x168);
    (**(code **)(*(longlong *)&pUVar3[0x29].field_0x10 + 0x1c0))(&pUVar3[0x29].field_0x10,&local_f0)
    ;
    bVar2 = FWeakObjectPtr::IsValid(&local_f0);
    if (bVar2) {
      this_00 = (ADS_MainCharacter *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x168);
      ADS_MainCharacter::GetFluxSurfaceLocation(this_00,(TVector<double> *)&local_e8._s_0);
      uVar6 = SUB84(local_e8._s_0.X,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar7 = (uint)((ulonglong)local_e8._0_8_ >> 0x20) &
              __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if (((__real_3fb99999a0000000 <= (double)CONCAT44(uVar7,uVar6) &&
            (double)CONCAT44(uVar7,uVar6) != __real_3fb99999a0000000) ||
          (uVar6 = SUB84(local_e8._s_0.Y,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar7 = (uint)((ulonglong)local_e8._8_8_ >> 0x20) &
                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          __real_3fb99999a0000000 <= (double)CONCAT44(uVar7,uVar6) &&
          (double)CONCAT44(uVar7,uVar6) != __real_3fb99999a0000000)) ||
         (uVar6 = SUB84(local_e8._s_0.Z,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar7 = (uint)((ulonglong)local_e8._16_8_ >> 0x20) &
                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         __real_3fb99999a0000000 <= (double)CONCAT44(uVar7,uVar6) &&
         (double)CONCAT44(uVar7,uVar6) != __real_3fb99999a0000000)) {
        local_98._0_8_ = UE::Math::TQuat<double>::Identity.X;
        local_98._8_8_ = UE::Math::TQuat<double>::Identity.Y;
        local_60 = 0.0;
        local_98._16_8_ = UE::Math::TQuat<double>::Identity.Z;
        local_98._24_8_ = UE::Math::TQuat<double>::Identity.W;
        local_98._32_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_98._40_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_98._48_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        this_01 = (UDS_CharacterTrajectoryComponent *)FWeakObjectPtr::Get(&local_f0);
        pFVar4 = UDS_CharacterTrajectoryComponent::GetPoseSearchQueryTrajectory(this_01);
        UPoseSearchTrajectoryLibrary::GetTransformTrajectorySampleAtTime
                  (pFVar4,__real_3f19999a,(FTransformTrajectorySample *)local_98,false);
        if ((double)local_98._48_8_ <= local_e8._s_0.Z) goto LAB_14b84a5ac;
      }
      local_f8[0] = Success;
      UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_f8);
      return;
    }
  }
LAB_14b84a5ac:
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x158);
  if (pUVar3[4].field_0x11 == '\x06') {
    this_02 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd0);
    UDS_MovementCore::GetActorForwardVector(this_02,&local_d0);
    this_03 = UE::Math::TRotationMatrix<double>::MakeFromX((TMatrix<double> *)local_98,&local_d0);
    UE::Math::TMatrix<double>::Rotator(this_03,(TRotator<double> *)&local_e8._s_0);
    local_e8._s_0.X = local_e8._s_0.X + __real_4049000000000000;
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd0);
    pcVar1 = *(code **)(*(longlong *)pUVar3 + 0x2e0);
    pTVar5 = UE::Math::TRotator<double>::Vector((TRotator<double> *)&local_e8._s_0,&local_b8);
    (*pcVar1)(pUVar3,pTVar5);
  }
  else {
    local_f8[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_f8);
  }
  return;
}

// StartSwimUp @ 14b851920

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

void __thiscall UDS_SwimUpAbility::StartSwimUp(UDS_SwimUpAbility *this)

{
  bool bVar1;
  UDS_SwimAbilityData *this_00;
  EDS_AbilityInputPolicy local_res8 [8];
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->field_0x158);
  if (bVar1) {
    this_00 = (UDS_SwimAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0x158);
    UDS_SwimAbilityData::DoNextStep(this_00,SwimUp);
  }
  local_res8[0] = 8;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  local_res8[0] = 0xd;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  local_res8[0] = BlockInput;
  UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_res8);
  return;
}

// UpdateSwimUp @ 14b85af40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UDS_SwimUpAbility::UpdateSwimUp(UDS_SwimUpAbility *this,float param_1)

{
  code *pcVar1;
  UDS_MovementCore *this_00;
  TMatrix<double> *this_01;
  UObject *pUVar2;
  TVector<double> *pTVar3;
  undefined1 auStack_108 [32];
  TRotator<double> local_e8;
  TVector<double> local_d0;
  TVector<double> local_b8;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_108;
  this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd0);
  UDS_MovementCore::GetActorForwardVector(this_00,&local_d0);
  this_01 = UE::Math::TRotationMatrix<double>::MakeFromX(&local_98,&local_d0);
  UE::Math::TMatrix<double>::Rotator(this_01,&local_e8);
  local_e8.Pitch = local_e8.Pitch + __real_4049000000000000;
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->field_0xd0);
  pcVar1 = *(code **)(*(longlong *)pUVar2 + 0x2e0);
  pTVar3 = UE::Math::TRotator<double>::Vector(&local_e8,&local_b8);
  (*pcVar1)(pUVar2,pTVar3);
  return;
}


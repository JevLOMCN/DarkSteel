// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b40d390

UClass * __cdecl UDS_AerialDiveAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AerialDiveAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AerialDiveAbility",
               &Z_Registration_Info_UClass_UDS_AerialDiveAbility.InnerSingleton,
               StaticRegisterNativesUDS_AerialDiveAbility,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AerialDiveAbility>,
               InternalVTableHelperCtorCaller<UDS_AerialDiveAbility>,local_res8,
               UDS_SwimBaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AerialDiveAbility.InnerSingleton;
}

// UDS_AerialDiveAbility @ 14b411460

UDS_AerialDiveAbility * __thiscall
UDS_AerialDiveAbility::UDS_AerialDiveAbility(UDS_AerialDiveAbility *this,FVTableHelper *param_1)

{
  UDS_SwimBaseAbility::UDS_SwimBaseAbility((UDS_SwimBaseAbility *)this,param_1);
  this->DampingSpeed = 1.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->bMoveToSurface = false;
  return this;
}

// UDS_AerialDiveAbility @ 14b4114b0

UDS_AerialDiveAbility * __thiscall
UDS_AerialDiveAbility::UDS_AerialDiveAbility
          (UDS_AerialDiveAbility *this,FObjectInitializer *param_1)

{
  UDS_SwimBaseAbility::UDS_SwimBaseAbility((UDS_SwimBaseAbility *)this,param_1);
  this->DampingSpeed = 1.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->bMoveToSurface = false;
  return this;
}

// ~UDS_AerialDiveAbility @ 14b411f60

void __thiscall UDS_AerialDiveAbility::~UDS_AerialDiveAbility(UDS_AerialDiveAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_SwimBaseAbility::~UDS_SwimBaseAbility((UDS_SwimBaseAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b413720

UClass * __cdecl UDS_AerialDiveAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AerialDiveAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AerialDiveAbility",
               &Z_Registration_Info_UClass_UDS_AerialDiveAbility.InnerSingleton,
               StaticRegisterNativesUDS_AerialDiveAbility,0x178,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AerialDiveAbility>,
               InternalVTableHelperCtorCaller<UDS_AerialDiveAbility>,local_res8,
               UDS_SwimBaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AerialDiveAbility.InnerSingleton;
}

// ShouldTickComponent @ 14b414150

bool __thiscall UDS_AerialDiveAbility::ShouldTickComponent(UDS_AerialDiveAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_AerialDiveAbility @ 14b414290

void __cdecl UDS_AerialDiveAbility::StaticRegisterNativesUDS_AerialDiveAbility(void)

{
  return;
}

// GetDesiredDepth @ 14b7ab7d0

float __thiscall UDS_AerialDiveAbility::GetDesiredDepth(UDS_AerialDiveAbility *this,float param_1)

{
  float fVar1;
  
  fVar1 = param_1 * __real_3983126f;
  if (__real_3f800000 <= param_1 * __real_3983126f) {
    fVar1 = __real_3f800000;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1 * __real_44480000;
}

// OnCanActivate @ 14b7b5180

bool __thiscall UDS_AerialDiveAbility::OnCanActivate(UDS_AerialDiveAbility *this)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = UDS_SwimBaseAbility::OnCanActivate((UDS_SwimBaseAbility *)this);
  if (bVar1) {
    cVar2 = (**(code **)(this->_padding_ + 0x3e0))(this);
    return cVar2 != '\0';
  }
  return false;
}

// OnDeactivateAbility @ 14b7b77e0

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
UDS_AerialDiveAbility::OnDeactivateAbility(UDS_AerialDiveAbility *this,bool *param_1)

{
  UDS_MovementCore *this_00;
  UObject *pUVar1;
  EDS_AbilityInputPolicy local_res8 [8];
  TVector<double> local_28;
  
  UDS_SwimBaseAbility::OnDeactivateAbility((UDS_SwimBaseAbility *)this,param_1);
  this->bMoveToSurface = false;
  if (*param_1 == false) {
    this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_MovementCore::GetVelocity(this_00,&local_28);
    local_28.field0_0x0._s_0.Z = 0.0;
    pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar1 + 0x398))(pUVar1,&local_28);
  }
  UDS_SwimBaseAbility::DoNextStep((UDS_SwimBaseAbility *)this,Swim);
  local_res8[0] = 0xe;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  local_res8[0] = 0xd;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  local_res8[0] = None;
  UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_res8);
  return;
}

// OnPostActivateAbility @ 14b7ba600

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

void __thiscall UDS_AerialDiveAbility::OnPostActivateAbility(UDS_AerialDiveAbility *this)

{
  char cVar1;
  int iVar2;
  UObject *pUVar3;
  UDS_MovementCore *this_00;
  double dVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  double local_res8;
  TVector<double>_u_0 local_58 [3];
  
  UDS_SwimBaseAbility::OnPostActivateAbility((UDS_SwimBaseAbility *)this);
  this->bMoveToSurface = false;
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  cVar1 = (**(code **)(*(longlong *)pUVar3 + 800))(pUVar3);
  this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_MovementCore::GetVelocity(this_00,(TVector<double> *)&local_58[0]._s_0);
  dVar4 = (double)local_58[0]._8_8_ * (double)local_58[0]._8_8_ +
          (double)local_58[0]._0_8_ * (double)local_58[0]._0_8_ +
          (double)local_58[0]._16_8_ * (double)local_58[0]._16_8_;
  uVar5 = local_58[0]._s_0.Z;
  if ((dVar4 != __real_3ff0000000000000) &&
     (uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     __real_3e45798ee0000000 <= dVar4)) {
    local_res8 = __real_3ff0000000000000 / SQRT(dVar4);
    uVar5 = local_res8 * (double)local_58[0]._16_8_;
  }
  fVar7 = (float)((double)local_58[0]._16_8_ * (double)uVar5);
  if ((cVar1 == '\0') && ((0.0 <= (double)uVar5 || (fVar7 <= __real_43480000)))) {
    local_res8 = (double)CONCAT71(local_res8._1_7_,1);
    UDS_GameplayAbility::DeactivateAbility
              ((UDS_GameplayAbility *)this,(EDS_AbilityDeactivateType *)&local_res8);
    return;
  }
  fVar6 = fVar7 * __real_3983126f;
  if (__real_3f800000 <= fVar7 * __real_3983126f) {
    fVar6 = __real_3f800000;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  fVar6 = fVar6 * __real_44480000;
  if ((cVar1 != '\0') ||
     (iVar2 = DS_CommonDataHelper::IgnoreGravitySwimStartHeight(), (float)iVar2 < fVar6)) {
    if (fVar6 <= __real_42f00000) {
      fVar6 = __real_42f00000;
    }
    local_res8._0_1_ = 0xe;
    this->DampingSpeed = (fVar7 / fVar6) * __real_3f400000;
    UDS_GameplayAbility::AddStateTagToASC
              ((UDS_GameplayAbility *)this,(EDS_StateTagType *)&local_res8);
    local_res8 = (double)CONCAT71(local_res8._1_7_,3);
    UDS_GameplayAbility::SetInputPolicy
              ((UDS_GameplayAbility *)this,(EDS_AbilityInputPolicy *)&local_res8);
  }
  else {
    local_res8 = (double)CONCAT71(local_res8._1_7_,2);
    UDS_GameplayAbility::DeactivateAbility
              ((UDS_GameplayAbility *)this,(EDS_AbilityDeactivateType *)&local_res8);
  }
  return;
}

// OnTickComponent @ 14b7bcee0

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

void __thiscall UDS_AerialDiveAbility::OnTickComponent(UDS_AerialDiveAbility *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  UDS_MovementCore *pUVar3;
  TMatrix<double> *this_00;
  UObject *pUVar4;
  TVector<double> *pTVar5;
  undefined1 auStackY_128 [32];
  EDS_AbilityDeactivateType local_f8 [8];
  TVector<double>_u_0 local_f0;
  TVector<double> local_d8;
  TVector<double> local_c0;
  TMatrix<double> local_a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_128;
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  local_f8[0] = Cancel;
  bVar2 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_f8);
  if (bVar2) {
    if (this->bMoveToSurface == true) {
      bVar2 = UDS_SwimBaseAbility::IsNearSurface((UDS_SwimBaseAbility *)this);
      if (bVar2) {
        local_f8[0] = bVar2;
        UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_f8);
      }
      else {
        pUVar3 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        UDS_MovementCore::GetActorForwardVector(pUVar3,&local_d8);
        this_00 = UE::Math::TRotationMatrix<double>::MakeFromX(&local_a8,&local_d8);
        UE::Math::TMatrix<double>::Rotator(this_00,(TRotator<double> *)&local_f0._s_0);
        local_f0._s_0.X = local_f0._s_0.X + __real_4049000000000000;
        pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        pcVar1 = *(code **)(*(longlong *)pUVar4 + 0x2e0);
        pTVar5 = UE::Math::TRotator<double>::Vector((TRotator<double> *)&local_f0._s_0,&local_c0);
        (*pcVar1)(pUVar4,pTVar5);
      }
    }
    else {
      pUVar3 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      UDS_MovementCore::GetVelocity(pUVar3,(TVector<double> *)&local_f0._s_0);
      FMath::VInterpTo(&local_d8,(TVector<double> *)&local_f0._s_0,
                       &UE::Math::TVector<double>::ZeroVector,param_1,this->DampingSpeed);
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      (**(code **)(*(longlong *)pUVar4 + 0x398))(pUVar4,&local_d8);
      if (__real_c024000000000000 <= local_f0._s_0.Z) {
        UDS_SwimBaseAbility::DoNextStep((UDS_SwimBaseAbility *)this,SwimForceUp);
        local_f8[0] = 0xe;
        UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_f8);
        local_f8[0] = 0xd;
        UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_f8);
        this->bMoveToSurface = true;
      }
    }
  }
  else {
    local_f8[0] = Success;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_f8);
  }
  return;
}

// ReduceSubmergeVelocity @ 14b7c00f0

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
UDS_AerialDiveAbility::ReduceSubmergeVelocity(UDS_AerialDiveAbility *this,float param_1)

{
  UDS_MovementCore *this_00;
  UObject *pUVar1;
  EDS_StateTagType local_res8 [8];
  TVector<double> local_48;
  TVector<double> local_30;
  
  this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_MovementCore::GetVelocity(this_00,&local_48);
  FMath::VInterpTo(&local_30,&local_48,&UE::Math::TVector<double>::ZeroVector,param_1,
                   this->DampingSpeed);
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (**(code **)(*(longlong *)pUVar1 + 0x398))(pUVar1,&local_30);
  if (__real_c024000000000000 <= local_48.field0_0x0._s_0.Z) {
    UDS_SwimBaseAbility::DoNextStep((UDS_SwimBaseAbility *)this,SwimForceUp);
    local_res8[0] = AerialDive;
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
    local_res8[0] = SwimUp;
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
    this->bMoveToSurface = true;
  }
  return;
}

// UpdateMoveToSurface @ 14b7c98c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UDS_AerialDiveAbility::UpdateMoveToSurface(UDS_AerialDiveAbility *this,float param_1)

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
  this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_MovementCore::GetActorForwardVector(this_00,&local_d0);
  this_01 = UE::Math::TRotationMatrix<double>::MakeFromX(&local_98,&local_d0);
  UE::Math::TMatrix<double>::Rotator(this_01,&local_e8);
  local_e8.Pitch = local_e8.Pitch + __real_4049000000000000;
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pcVar1 = *(code **)(*(longlong *)pUVar2 + 0x2e0);
  pTVar3 = UE::Math::TRotator<double>::Vector(&local_e8,&local_b8);
  (*pcVar1)(pUVar2,pTVar3);
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b4fced0

UClass * __cdecl UDS_MoveToTargetAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MoveToTargetAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MoveToTargetAbility",
               &Z_Registration_Info_UClass_UDS_MoveToTargetAbility.InnerSingleton,
               StaticRegisterNativesUDS_MoveToTargetAbility,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_MoveToTargetAbility>,
               InternalVTableHelperCtorCaller<UDS_MoveToTargetAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MoveToTargetAbility.InnerSingleton;
}

// UDS_MoveToTargetAbility @ 14b5015e0

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

UDS_MoveToTargetAbility * __thiscall
UDS_MoveToTargetAbility::UDS_MoveToTargetAbility
          (UDS_MoveToTargetAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->AbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_MoveToTargetAbility @ 14b502800

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

void __thiscall UDS_MoveToTargetAbility::~UDS_MoveToTargetAbility(UDS_MoveToTargetAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b504ba0

UClass * __cdecl UDS_MoveToTargetAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_MoveToTargetAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_MoveToTargetAbility",
               &Z_Registration_Info_UClass_UDS_MoveToTargetAbility.InnerSingleton,
               StaticRegisterNativesUDS_MoveToTargetAbility,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_MoveToTargetAbility>,
               InternalVTableHelperCtorCaller<UDS_MoveToTargetAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_MoveToTargetAbility.InnerSingleton;
}

// ShouldTickComponent @ 14b505ab0

bool __thiscall UDS_MoveToTargetAbility::ShouldTickComponent(UDS_MoveToTargetAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_MoveToTargetAbility @ 14b505b90

void __cdecl UDS_MoveToTargetAbility::StaticRegisterNativesUDS_MoveToTargetAbility(void)

{
  return;
}

// UDS_MoveToTargetAbility @ 14b8231f0

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

UDS_MoveToTargetAbility * __thiscall
UDS_MoveToTargetAbility::UDS_MoveToTargetAbility
          (UDS_MoveToTargetAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->AbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ClearVariables @ 14b827c60

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

void __thiscall UDS_MoveToTargetAbility::ClearVariables(UDS_MoveToTargetAbility *this)

{
  EDS_StateTagType local_res8 [32];
  
  local_res8[0] = Trace;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  (this->AbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  return;
}

// GetMoveToTargetState @ 14b831d30

EDS_MoveToTargetAbilityState __cdecl
UDS_MoveToTargetAbility::GetMoveToTargetState
          (TWeakObjectPtr<UDS_MoveToTargetAbilityData,FWeakObjectPtr> param_1)

{
  EDS_MoveToTargetAbilityState EVar1;
  
  EVar1 = MoveToTarget(param_1,0.0);
  return EVar1;
}

// MoveProcess @ 14b836b00

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

void __thiscall UDS_MoveToTargetAbility::MoveProcess(UDS_MoveToTargetAbility *this,float param_1)

{
  EDS_MoveToTargetAbilityState EVar1;
  EDS_AbilityDeactivateType local_res8 [32];
  
  EVar1 = MoveToTarget((TWeakObjectPtr<UDS_MoveToTargetAbilityData,FWeakObjectPtr>)
                       (this->AbilityData).WeakPtr,param_1);
  if (EVar1 == Abort) {
    local_res8[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
    return;
  }
  if (EVar1 == Arrived) {
    local_res8[0] = Success;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
  }
  return;
}

// MoveToTarget @ 14b836b60

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

EDS_MoveToTargetAbilityState __cdecl
UDS_MoveToTargetAbility::MoveToTarget
          (TWeakObjectPtr<UDS_MoveToTargetAbilityData,FWeakObjectPtr> param_1,float param_2)

{
  bool bVar1;
  UDS_DataBase *this;
  UObject *pUVar2;
  FDS_EntityBase *pFVar3;
  FDS_EntityBase *pFVar4;
  UDS_MovementCore *pUVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  double dVar11;
  float fVar12;
  FWeakObjectPtr local_res8 [2];
  FWeakObjectPtr local_res18;
  ulong64 local_res20;
  TVector<double>_u_0 local_c8;
  ulong64 local_b0;
  FWeakObjectPtr local_a8;
  FWeakObjectPtr local_a0;
  TVector<double>_u_0 local_98;
  TVector<double>_u_0 local_80;
  TRotator<double> local_68 [3];
  
  local_res8[0] = param_1.WeakPtr;
  bVar1 = FWeakObjectPtr::IsValid(local_res8);
  if (!bVar1) {
    return Abort;
  }
  this = (UDS_DataBase *)FWeakObjectPtr::Get(local_res8);
  local_res20 = UDS_DataBase::GetEntityID(this);
  pUVar2 = FWeakObjectPtr::Get(local_res8);
  local_b0 = *(ulong64 *)&pUVar2[2].field_0x8;
  pFVar3 = FDS_EntityBase::GetEntityBase(&local_res20);
  UDS_MovementCore::GetMovementCore((ulong64)&local_a8);
  if (pFVar3 == (FDS_EntityBase *)0x0) {
    return Abort;
  }
  bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_a8,(void *)0x0);
  if (bVar1) {
    return Abort;
  }
  pFVar4 = FDS_EntityBase::GetEntityBase(&local_b0);
  UDS_MovementCore::GetMovementCore((ulong64)&local_a0);
  if ((pFVar4 == (FDS_EntityBase *)0x0) ||
     (bVar1 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_a0,(void *)0x0),
     bVar1)) {
    return Arrived;
  }
  pUVar5 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_a8);
  UDS_MovementCore::GetActorFootLocation(pUVar5,(TVector<double> *)&local_80._s_0);
  pUVar5 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_a0);
  UDS_MovementCore::GetActorFootLocation(pUVar5,(TVector<double> *)&local_98._s_0);
  pUVar2 = FWeakObjectPtr::Get(local_res8);
  fVar12 = *(float *)&pUVar2[2].field_0x10 + pFVar4->ScaledCapsuleRadius;
  if ((float)((local_98._s_0.Y - local_80._s_0.Y) * (local_98._s_0.Y - local_80._s_0.Y) +
              (local_98._s_0.X - local_80._s_0.X) * (local_98._s_0.X - local_80._s_0.X) +
             (local_98._s_0.Z - local_80._s_0.Z) * (local_98._s_0.Z - local_80._s_0.Z)) <=
      fVar12 * fVar12) {
    return Arrived;
  }
  if (param_2 <= 0.0) {
    return Moving;
  }
  (**(code **)(pFVar3->_padding_ + 0x78))(pFVar3,&local_res18);
  bVar1 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar1) {
    return Moving;
  }
  local_c8._s_0.X = local_98._s_0.X - local_80._s_0.X;
  local_c8._s_0.Y = local_98._s_0.Y - local_80._s_0.Y;
  local_c8._s_0.Z = local_98._s_0.Z - local_80._s_0.Z;
  UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_c8._s_0,local_68);
  local_68[0].Roll = 0.0;
  local_68[0].Pitch = 0.0;
  dVar11 = local_c8._s_0.Y * local_c8._s_0.Y + local_c8._s_0.X * local_c8._s_0.X +
           local_c8._s_0.Z * local_c8._s_0.Z;
  if (dVar11 != __real_3ff0000000000000) {
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (dVar11 < __real_3e45798ee0000000) goto LAB_14b836d98;
    dVar11 = __real_3ff0000000000000 / SQRT(dVar11);
    local_c8._s_0.Z = local_c8._s_0.Z * dVar11;
    local_c8._s_0.X = local_c8._s_0.X * dVar11;
    local_c8._s_0.Y = local_c8._s_0.Y * dVar11;
  }
  uVar6 = SUB84(local_c8._s_0.X,0);
  uVar7 = (int)((ulonglong)local_c8._s_0.X >> 0x20);
  uVar8 = SUB84(local_c8._s_0.Y,0);
  uVar9 = (int)((ulonglong)local_c8._s_0.Y >> 0x20);
  uVar10 = local_c8._s_0.Z;
LAB_14b836d98:
  local_c8._4_4_ = uVar7;
  local_c8._0_4_ = uVar6;
  local_c8._12_4_ = uVar9;
  local_c8._8_4_ = uVar8;
  local_c8._s_0.Z = (double)uVar10;
  pUVar2 = FWeakObjectPtr::Get(&local_res18);
  (**(code **)(*(longlong *)pUVar2 + 0x4f0))(pUVar2,local_68);
  pUVar2 = FWeakObjectPtr::Get(&local_res18);
  (**(code **)(*(longlong *)pUVar2 + 0x2e0))(pUVar2,&local_c8);
  return Moving;
}

// OnCanActivate @ 14b838d40

bool __thiscall UDS_MoveToTargetAbility::OnCanActivate(UDS_MoveToTargetAbility *this)

{
  bool bVar1;
  
  bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar1) {
    return *(char *)((longlong)&this->_padding_ + 1) != '\0';
  }
  return false;
}

// OnDeactivateAbility @ 14b83ed80

void __thiscall
UDS_MoveToTargetAbility::OnDeactivateAbility(UDS_MoveToTargetAbility *this,bool *param_1)

{
  return;
}

// OnPostActivateAbility @ 14b8434b0

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

void __thiscall UDS_MoveToTargetAbility::OnPostActivateAbility(UDS_MoveToTargetAbility *this)

{
  TWeakObjectPtr<UDS_MoveToTargetAbilityData,FWeakObjectPtr> TVar1;
  EDS_StateTagType local_res8 [8];
  ulong64 local_res10 [3];
  
  local_res8[0] = Trace;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  local_res8[0] = Locomotion_Swim;
  TVar1 = UDS_AbilityDataSet::GetAbilityData<UDS_MoveToTargetAbilityData>
                    (local_res10,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
  (this->AbilityData).WeakPtr = *TVar1.WeakPtr;
  return;
}

// OnTickComponent @ 14b848a80

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
UDS_MoveToTargetAbility::OnTickComponent(UDS_MoveToTargetAbility *this,float param_1)

{
  EDS_MoveToTargetAbilityState EVar1;
  EDS_AbilityDeactivateType local_res8 [32];
  
  EVar1 = MoveToTarget((TWeakObjectPtr<UDS_MoveToTargetAbilityData,FWeakObjectPtr>)
                       (this->AbilityData).WeakPtr,param_1);
  if (EVar1 == Abort) {
    local_res8[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
    return;
  }
  if (EVar1 == Arrived) {
    local_res8[0] = Success;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
  }
  return;
}


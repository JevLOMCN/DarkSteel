// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 19

// StaticClass @ 14b5997e0

UClass * __cdecl UDS_SlopeSlideAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SlopeSlideAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SlopeSlideAbility",
               &Z_Registration_Info_UClass_UDS_SlopeSlideAbility.InnerSingleton,
               StaticRegisterNativesUDS_SlopeSlideAbility,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SlopeSlideAbility>,
               InternalVTableHelperCtorCaller<UDS_SlopeSlideAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SlopeSlideAbility.InnerSingleton;
}

// UDS_SlopeSlideAbility @ 14b59caa0

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

UDS_SlopeSlideAbility * __thiscall
UDS_SlopeSlideAbility::UDS_SlopeSlideAbility(UDS_SlopeSlideAbility *this,FVTableHelper *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->SlopeAngleDegrees = 0.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->bIsSlopeSlide = false;
  return this;
}

// UDS_SlopeSlideAbility @ 14b59caf0

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

UDS_SlopeSlideAbility * __thiscall
UDS_SlopeSlideAbility::UDS_SlopeSlideAbility
          (UDS_SlopeSlideAbility *this,FObjectInitializer *param_1)

{
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->SlopeAngleDegrees = 0.0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->bIsSlopeSlide = false;
  return this;
}

// ~UDS_SlopeSlideAbility @ 14b59d390

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

void __thiscall UDS_SlopeSlideAbility::~UDS_SlopeSlideAbility(UDS_SlopeSlideAbility *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b59df40

UClass * __cdecl UDS_SlopeSlideAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_SlopeSlideAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_SlopeSlideAbility",
               &Z_Registration_Info_UClass_UDS_SlopeSlideAbility.InnerSingleton,
               StaticRegisterNativesUDS_SlopeSlideAbility,0x160,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_SlopeSlideAbility>,
               InternalVTableHelperCtorCaller<UDS_SlopeSlideAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_SlopeSlideAbility.InnerSingleton;
}

// ShouldNotifyChangedCharState @ 14b59e4c0

bool __thiscall UDS_SlopeSlideAbility::ShouldNotifyChangedCharState(UDS_SlopeSlideAbility *this)

{
  return true;
}

// ShouldNotifyChangedCharState_WhenInactive @ 14b59e4d0

bool __thiscall
UDS_SlopeSlideAbility::ShouldNotifyChangedCharState_WhenInactive(UDS_SlopeSlideAbility *this)

{
  return true;
}

// ShouldTickComponent @ 14b59e4e0

bool __thiscall UDS_SlopeSlideAbility::ShouldTickComponent(UDS_SlopeSlideAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_SlopeSlideAbility @ 14b59e520

void __cdecl UDS_SlopeSlideAbility::StaticRegisterNativesUDS_SlopeSlideAbility(void)

{
  return;
}

// AdjustRotationForSlopeSlide @ 14b824d70

void __thiscall
UDS_SlopeSlideAbility::AdjustRotationForSlopeSlide(UDS_SlopeSlideAbility *this,float param_1)

{
  double dVar1;
  UDS_MovementCore *pUVar2;
  TVector<double> *pTVar3;
  UObject *pUVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  double local_88;
  double dStack_80;
  undefined8 local_78;
  TRotator<double> local_70;
  TRotator<double> local_58;
  TRotator<double> local_40 [2];
  
  if (this->bIsSlopeSlide == true) {
    pUVar2 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pTVar3 = UDS_MovementCore::GetVelocity(pUVar2,(TVector<double> *)local_40);
    dVar9 = (pTVar3->field0_0x0)._s_0.X;
    dStack_80 = (pTVar3->field0_0x0)._s_0.Y;
    dVar1 = (pTVar3->field0_0x0)._s_0.Z;
    dVar8 = dStack_80 * dStack_80 + dVar9 * dVar9 + dVar1 * dVar1;
    if (dVar8 == __real_3ff0000000000000) {
      _local_88 = *(undefined1 (*) [16])&pTVar3->field0_0x0;
      dVar9 = local_88;
      uVar5 = local_88._8_4_;
      uVar10 = local_88._12_4_;
      local_78 = *(double *)((longlong)&pTVar3->field0_0x0 + 0x10);
    }
    else if (__real_3e45798ee0000000 <= dVar8) {
      dVar8 = __real_3ff0000000000000 / SQRT(dVar8);
      dVar9 = dVar9 * dVar8;
      dStack_80 = dStack_80 * dVar8;
      local_78 = dVar1 * dVar8;
      local_88 = dVar9;
      uVar5 = SUB84(dStack_80,0);
      uVar10 = (uint)((ulonglong)dStack_80 >> 0x20);
    }
    else {
      dVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
      uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
      _local_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
    }
    uVar6 = SUB84(dVar9,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar7 = (uint)((ulonglong)dVar9 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar7,uVar6) &&
          (double)CONCAT44(uVar7,uVar6) != __real_3f1a36e2e0000000) ||
        (__real_3f1a36e2e0000000 <
         (double)CONCAT44(uVar10 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          uVar5 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
       (__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)local_78 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)local_78 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
      pUVar2 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      UDS_MovementCore::GetActorRotation(pUVar2,local_40);
      UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_88,&local_58);
      FMath::RInterpTo(&local_70,local_40,&local_58,param_1,__real_41200000);
      local_70.Pitch = 0.0;
      local_70.Roll = 0.0;
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      (**(code **)(*(longlong *)pUVar4 + 0x370))(pUVar4,&local_70);
    }
  }
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  *(float *)(pUVar4 + 0xf) = this->SlopeAngleDegrees;
  return;
}

// ComputeSlopeAngle @ 14b8280e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall UDS_SlopeSlideAbility::ComputeSlopeAngle(UDS_SlopeSlideAbility *this)

{
  bool bVar1;
  UDS_MovementCore *this_00;
  TStatId TVar2;
  AActor *pAVar3;
  UWorld *this_01;
  undefined4 uVar4;
  undefined4 uVar5;
  double dVar6;
  float fVar7;
  undefined1 auStackY_248 [32];
  FCollisionObjectQueryParams local_210;
  TVector<double>_u_0 local_208;
  undefined8 local_1e0;
  undefined4 uStack_1d8;
  undefined1 uStack_1d4;
  undefined2 uStack_1d3;
  undefined1 uStack_1d1;
  TVector<double>_u_0 local_1d0;
  undefined1 local_1b8 [96];
  double local_158;
  double local_150;
  int local_114;
  FWeakObjectPtr local_100;
  FWeakObjectPtr FStack_f8;
  IActorInstanceManagerInterface *local_f0;
  undefined8 uStack_e8;
  FCollisionQueryParams local_b8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_248;
  memset(local_1b8,0,0x100);
  uStack_1d8 = 0xffffffff;
  uStack_1d3 = 0;
  local_100.ObjectIndex = 0;
  local_100.ObjectSerialNumber = 0;
  FStack_f8.ObjectIndex = 0;
  FStack_f8.ObjectSerialNumber = 0;
  uStack_1d1 = 0;
  local_1e0 = 0;
  uStack_1d4 = 0;
  uStack_e8._0_4_ = -1;
  uStack_e8._4_1_ = Invalid;
  uStack_e8._5_3_ = 0;
  local_1b8._4_4_ = 1.0;
  local_114 = -1;
  local_f0 = (IActorInstanceManagerInterface *)0x0;
  this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_MovementCore::GetActorLocation(this_00,(TVector<double> *)&local_208._s_0);
  local_210.IgnoreMask = '\0';
  local_210.ObjectTypesToQuery = 1;
  local_1d0._s_0.X = local_208._s_0.X;
  local_1d0._s_0.Y = local_208._s_0.Y;
  local_b8.OwnerTag.ComparisonIndex.Value = 0;
  local_b8.OwnerTag.Number = 0;
  local_1d0._s_0.Z = local_208._s_0.Z - __real_4069000000000000;
  local_b8.IgnoreComponents.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_b8.IgnoreComponents.ArrayNum = 0;
  local_b8.IgnoreComponents.ArrayMax = 8;
  local_b8.IgnoreSourceObjects.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_b8.IgnoreSourceObjects.ArrayNum = 0;
  local_b8.IgnoreSourceObjects.ArrayMax = 4;
  local_b8.bTraceComplex = false;
  local_b8.bFindInitialOverlaps = true;
  local_b8.bReturnFaceIndex = false;
  local_b8.bReturnPhysicalMaterial = false;
  local_b8.MobilityType = Any;
  local_b8.TraceTag.ComparisonIndex.Value = 0;
  local_b8.TraceTag.Number = 0;
  local_b8.bComponentListUnique = true;
  local_b8.IgnoreMask = '\0';
  local_b8.bIgnoreBlocks = false;
  local_b8.bIgnoreTouches = false;
  local_b8.bSkipNarrowPhase = false;
  TVar2 = FCollisionQueryParams::GetUnknownStatId();
  local_b8.StatId.StatIdPtr = *(TStatIdData **)&(TVar2.StatIdPtr)->Name;
  local_b8.bDebugQuery = false;
  local_b8.bTraceIntoSubComponents = true;
  local_b8.bReplaceHitWithSubComponents = true;
  pAVar3 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  FCollisionQueryParams::AddIgnoredActor(&local_b8,pAVar3);
  this_01 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  bVar1 = UWorld::LineTraceSingleByObjectType
                    (this_01,(FHitResult *)local_1b8,(TVector<double> *)&local_208._s_0,
                     (TVector<double> *)&local_1d0._s_0,&local_210,&local_b8);
  if (bVar1) {
    uVar4 = SUB84(__real_bff0000000000000,0);
    uVar5 = (undefined4)((ulonglong)__real_bff0000000000000 >> 0x20);
    dVar6 = local_158 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y +
            (double)local_1b8._88_8_ * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X +
            local_150 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
    if (__real_bff0000000000000 <= dVar6) {
      if (__real_3ff0000000000000 <= dVar6) {
        dVar6 = __real_3ff0000000000000;
      }
      uVar4 = SUB84(dVar6,0);
      uVar5 = (undefined4)((ulonglong)dVar6 >> 0x20);
    }
    dVar6 = acos((double)CONCAT44(uVar5,uVar4));
    fVar7 = (float)(dVar6 * __real_404ca5dc1a63c1f8);
  }
  else {
    fVar7 = 0.0;
  }
  if (local_b8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_b8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_b8.IgnoreComponents.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_b8.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  return fVar7;
}

// EnterSlopeSlide @ 14b82d530

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

void __thiscall UDS_SlopeSlideAbility::EnterSlopeSlide(UDS_SlopeSlideAbility *this)

{
  EDS_AbilityInputPolicy local_res8 [32];
  
  if (this->bIsSlopeSlide != true) {
    this->bIsSlopeSlide = true;
    local_res8[0] = BlockInput;
    UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_res8);
    local_res8[0] = 0x8e;
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  }
  return;
}

// ExitSlopeSlide @ 14b830300

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

void __thiscall UDS_SlopeSlideAbility::ExitSlopeSlide(UDS_SlopeSlideAbility *this)

{
  EDS_AbilityInputPolicy local_res8 [32];
  
  if (this->bIsSlopeSlide != false) {
    this->bIsSlopeSlide = false;
    local_res8[0] = None;
    UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_res8);
    local_res8[0] = 0x8e;
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  }
  return;
}

// Initialize @ 14b835690

void __thiscall UDS_SlopeSlideAbility::Initialize(UDS_SlopeSlideAbility *this)

{
  return;
}

// OnCanActivate @ 14b83ab70

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

bool __thiscall UDS_SlopeSlideAbility::OnCanActivate(UDS_SlopeSlideAbility *this)

{
  bool bVar1;
  EDS_StateTagType local_res10 [24];
  
  local_res10[0] = AirWalk_Falling;
  bVar1 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_res10);
  if (bVar1) {
    local_res10[0] = Locomotion_Climbing;
    bVar1 = UDS_GameplayAbility::HasStateTag((UDS_GameplayAbility *)this,local_res10);
    if (!bVar1) {
      bVar1 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
      return bVar1;
    }
  }
  return false;
}

// OnChangedCharState @ 14b83c610

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
UDS_SlopeSlideAbility::OnChangedCharState
          (UDS_SlopeSlideAbility *this,TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,
          FDS_ChangedCharStateInfo *param_2)

{
  bool bVar1;
  FWeakObjectPtr local_res10;
  EDS_AbilityDeactivateType local_res18 [8];
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
    if (param_2->AddedCharDetailState == Falling) {
      if ((char)this->_padding_ == '\0') {
        local_res20 = 0;
        local_res18[0] = 0x67;
        UDS_GameplayAbility::TryActivateAbility
                  ((UDS_GameplayAbility *)this,local_res18,
                   (TObjectPtr<UWN_AbilityContext>)&local_res20);
        return;
      }
    }
    else if (param_2->RemovedCharDetailState == Falling) {
      local_res18[0] = Success;
      UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res18);
    }
  }
  return;
}

// OnDeactivateAbility @ 14b83f9e0

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
UDS_SlopeSlideAbility::OnDeactivateAbility(UDS_SlopeSlideAbility *this,bool *param_1)

{
  EDS_AbilityInputPolicy local_res8 [32];
  
  if (this->bIsSlopeSlide == true) {
    this->bIsSlopeSlide = false;
    local_res8[0] = None;
    UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_res8);
    local_res8[0] = 0x8e;
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  }
  return;
}

// OnPostActivateAbility @ 14b846000

void __thiscall UDS_SlopeSlideAbility::OnPostActivateAbility(UDS_SlopeSlideAbility *this)

{
  return;
}

// OnTickComponent @ 14b849c20

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

void __thiscall UDS_SlopeSlideAbility::OnTickComponent(UDS_SlopeSlideAbility *this,float param_1)

{
  double dVar1;
  bool bVar2;
  char cVar3;
  UDS_MovementCore *pUVar4;
  TVector<double> *pTVar5;
  UObject *pUVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  uint uVar13;
  EDS_AbilityInputPolicy local_res8 [8];
  double local_88;
  double dStack_80;
  undefined8 local_78;
  TRotator<double> local_70;
  TRotator<double> local_58;
  TRotator<double> local_40 [2];
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  fVar7 = ComputeSlopeAngle(this);
  bVar2 = __real_42340000 <= fVar7;
  cVar3 = this->bIsSlopeSlide;
  this->SlopeAngleDegrees = fVar7;
  if ((((bool)cVar3 == bVar2) || (!bVar2)) || ((bool)cVar3 == bVar2)) {
    if (!bVar2) {
      if ((bool)cVar3 != false) {
        this->bIsSlopeSlide = false;
        local_res8[0] = bVar2;
        UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_res8);
        local_res8[0] = 0x8e;
        UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
      }
      local_res8[0] = EndIfInput;
      UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
      return;
    }
  }
  else {
    this->bIsSlopeSlide = bVar2;
    local_res8[0] = BlockInput;
    UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_res8);
    local_res8[0] = 0x8e;
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
    cVar3 = this->bIsSlopeSlide;
  }
  if (cVar3 == '\x01') {
    pUVar4 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pTVar5 = UDS_MovementCore::GetVelocity(pUVar4,(TVector<double> *)local_40);
    dVar12 = (pTVar5->field0_0x0)._s_0.X;
    dStack_80 = (pTVar5->field0_0x0)._s_0.Y;
    dVar1 = (pTVar5->field0_0x0)._s_0.Z;
    dVar11 = dStack_80 * dStack_80 + dVar12 * dVar12 + dVar1 * dVar1;
    if (dVar11 == __real_3ff0000000000000) {
      _local_88 = *(undefined1 (*) [16])&pTVar5->field0_0x0;
      dVar12 = local_88;
      uVar8 = local_88._8_4_;
      uVar13 = local_88._12_4_;
      local_78 = *(double *)((longlong)&pTVar5->field0_0x0 + 0x10);
    }
    else if (__real_3e45798ee0000000 <= dVar11) {
      dVar11 = __real_3ff0000000000000 / SQRT(dVar11);
      dVar12 = dVar12 * dVar11;
      dStack_80 = dStack_80 * dVar11;
      local_78 = dVar1 * dVar11;
      local_88 = dVar12;
      uVar8 = SUB84(dStack_80,0);
      uVar13 = (uint)((ulonglong)dStack_80 >> 0x20);
    }
    else {
      dVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
      uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      local_78 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
      _local_88 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_16_;
    }
    uVar9 = SUB84(dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar10 = (uint)((ulonglong)dVar12 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (((__real_3f1a36e2e0000000 <= (double)CONCAT44(uVar10,uVar9) &&
          (double)CONCAT44(uVar10,uVar9) != __real_3f1a36e2e0000000) ||
        (__real_3f1a36e2e0000000 <
         (double)CONCAT44(uVar13 & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          uVar8 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) ||
       (__real_3f1a36e2e0000000 <
        (double)CONCAT44((uint)((ulonglong)local_78 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)local_78 & (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
      pUVar4 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      UDS_MovementCore::GetActorRotation(pUVar4,local_40);
      UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_88,&local_58);
      FMath::RInterpTo(&local_70,local_40,&local_58,param_1,__real_41200000);
      local_70.Pitch = 0.0;
      local_70.Roll = 0.0;
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      (**(code **)(*(longlong *)pUVar6 + 0x370))(pUVar6,&local_70);
    }
  }
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  *(float *)(pUVar6 + 0xf) = this->SlopeAngleDegrees;
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// StaticClass @ 14b40ef70

UClass * __cdecl UDS_AirWalk_HoveringAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AirWalk_HoveringAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AirWalk_HoveringAbility",
               &Z_Registration_Info_UClass_UDS_AirWalk_HoveringAbility.InnerSingleton,
               StaticRegisterNativesUDS_AirWalk_HoveringAbility,400,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_AirWalk_HoveringAbility>,
               InternalVTableHelperCtorCaller<UDS_AirWalk_HoveringAbility>,local_res8,
               UDS_AirWalk_BaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AirWalk_HoveringAbility.InnerSingleton;
}

// UDS_AirWalk_HoveringAbility @ 14b4118a0

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

UDS_AirWalk_HoveringAbility * __thiscall
UDS_AirWalk_HoveringAbility::UDS_AirWalk_HoveringAbility
          (UDS_AirWalk_HoveringAbility *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = 0;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->ElapsedTime = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartVelocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->StartVelocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->DecelerationStopTime = 0.0;
  this->TickEnable = true;
  return this;
}

// ~UDS_AirWalk_HoveringAbility @ 14b4120b0

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
UDS_AirWalk_HoveringAbility::~UDS_AirWalk_HoveringAbility(UDS_AirWalk_HoveringAbility *this)

{
  this->_padding_ = (longlong)&UDS_AirWalk_BaseAbility::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UDS_AirWalk_BaseAbility::_vftable__for__IGameplayTaskOwnerInterface__
  ;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetAirWalkStep @ 14b4130d0

EDS_AirWalkStep __thiscall
UDS_AirWalk_HoveringAbility::GetAirWalkStep(UDS_AirWalk_HoveringAbility *this)

{
  return Hovering;
}

// GetPrivateStaticClass @ 14b413c60

UClass * __cdecl UDS_AirWalk_HoveringAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AirWalk_HoveringAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AirWalk_HoveringAbility",
               &Z_Registration_Info_UClass_UDS_AirWalk_HoveringAbility.InnerSingleton,
               StaticRegisterNativesUDS_AirWalk_HoveringAbility,400,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_AirWalk_HoveringAbility>,
               InternalVTableHelperCtorCaller<UDS_AirWalk_HoveringAbility>,local_res8,
               UDS_AirWalk_BaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AirWalk_HoveringAbility.InnerSingleton;
}

// ShouldHandleZoneChange @ 14b4140d0

bool __thiscall
UDS_AirWalk_HoveringAbility::ShouldHandleZoneChange(UDS_AirWalk_HoveringAbility *this)

{
  return true;
}

// ShouldStopAbilityOnExhaustedStamina @ 14b414130

bool __thiscall
UDS_AirWalk_HoveringAbility::ShouldStopAbilityOnExhaustedStamina(UDS_AirWalk_HoveringAbility *this)

{
  return true;
}

// ShouldTickComponent @ 14b414180

bool __thiscall UDS_AirWalk_HoveringAbility::ShouldTickComponent(UDS_AirWalk_HoveringAbility *this)

{
  return this->TickEnable;
}

// StaticRegisterNativesUDS_AirWalk_HoveringAbility @ 14b414360

void __cdecl UDS_AirWalk_HoveringAbility::StaticRegisterNativesUDS_AirWalk_HoveringAbility(void)

{
  return;
}

// UDS_AirWalk_HoveringAbility @ 14b79b4d0

UDS_AirWalk_HoveringAbility * __thiscall
UDS_AirWalk_HoveringAbility::UDS_AirWalk_HoveringAbility
          (UDS_AirWalk_HoveringAbility *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UDS_AirWalk_BaseAbility::UDS_AirWalk_BaseAbility((UDS_AirWalk_BaseAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->CharStateData).WeakPtr = (FWeakObjectPtr)0x0;
  this->ElapsedTime = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartVelocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartVelocity).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->DecelerationStopTime = 0.0;
  (this->StartVelocity).field0_0x0._s_0.Z = (double)uVar1;
  this->TickEnable = true;
  return this;
}

// DoHovering @ 14b7a4c00

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

void __thiscall UDS_AirWalk_HoveringAbility::DoHovering(UDS_AirWalk_HoveringAbility *this)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_AirWalkAbilityData *this_00;
  EDS_AbilityDeactivateType local_res8 [8];
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if ((pUVar2[5].field_0x10 != '\0') || (pUVar2[5].field_0x11 != '\0')) {
      this->TickEnable = true;
      this_00 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      UDS_AirWalkAbilityData::GetAirWalkStepInfo(this_00,Hovering);
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      (**(code **)(*(longlong *)pUVar2 + 0x448))(pUVar2,5);
      local_res8[0] = 0x28;
      UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
      return;
    }
  }
  local_res8[0] = Cancel;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
  return;
}

// DoStop @ 14b7a50a0

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

void __thiscall UDS_AirWalk_HoveringAbility::DoStop(UDS_AirWalk_HoveringAbility *this)

{
  UDS_AirWalkStopAbilityContext *pUVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UDS_AirWalk_HoveringAbility *local_res8;
  UDS_AirWalkStopAbilityContext *local_res10;
  uint uStack_4c;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  pUVar1 = NewObject<UDS_AirWalkStopAbilityContext>((UObject *)this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UDS_AirWalkStopAbilityContext *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar1->StopStartDelegate,
             (FWriteAccessScope *)&local_48);
  local_30 = &(pUVar1->StopStartDelegate).field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_AirWalk_HoveringAbility____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_AirWalk_HoveringAbility *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar2[3] = 0;
    local_res8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_AirWalk_HoveringAbility *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    puVar2[4] = OnStopStartFunc;
    puVar2[5] = (ulonglong)uStack_4c << 0x20;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar1->StopFinishDelegate,
             (FWriteAccessScope *)&local_48);
  local_30 = &(pUVar1->StopFinishDelegate).field_0x8;
  puVar2 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar3 = FDelegateHandle::GenerateNewID();
    puVar2[2] = uVar3;
    *puVar2 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_AirWalk_HoveringAbility____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_AirWalk_HoveringAbility *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar2[3] = 0;
    local_res8 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_AirWalk_HoveringAbility *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res8);
    puVar2[4] = OnStopFinishFunc;
    puVar2[5] = (ulonglong)uStack_4c << 0x20;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_res10 = pUVar1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 != (UDS_AirWalkStopAbilityContext *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  local_res8 = (UDS_AirWalk_HoveringAbility *)CONCAT71(local_res8._1_7_,0x2e);
  UDS_GameplayAbility::TryActivateAbility
            ((UDS_GameplayAbility *)this,(EDS_AbilityTagType *)&local_res8,
             (TObjectPtr<UWN_AbilityContext>)&local_res10);
  this->TickEnable = false;
  return;
}

// EndHovering @ 14b7a61b0

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

void __thiscall UDS_AirWalk_HoveringAbility::EndHovering(UDS_AirWalk_HoveringAbility *this)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_AirWalkAbilityData *this_00;
  EDS_AbilityDeactivateType local_res8 [8];
  EDS_AbilityTagType local_res10 [8];
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if (pUVar2[5].field_0x14 != '\0') {
      local_res8[0] = Cancel;
      local_res10[0] = AirWalk_Stop;
      UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res10,local_res8);
    }
    local_res8[0] = 0x28;
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar2 + 0x448))(pUVar2,3);
    this_00 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AirWalkAbilityData::DeActivateStep(this_00,Hovering);
  }
  return;
}

// OnAbilityRetryActivate @ 14b7b4000

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
UDS_AirWalk_HoveringAbility::OnAbilityRetryActivate(UDS_AirWalk_HoveringAbility *this)

{
  EDS_AbilityDeactivateType local_res10 [24];
  
  local_res10[0] = Success;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res10);
  return;
}

// OnCanActivate @ 14b7b5660

bool __thiscall UDS_AirWalk_HoveringAbility::OnCanActivate(UDS_AirWalk_HoveringAbility *this)

{
  bool bVar1;
  TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> TVar2;
  UDS_CharStateData *this_00;
  UDS_AirWalkAbilityData *this_01;
  EDS_CharState local_res10 [3];
  
  bVar1 = UDS_AirWalk_BaseAbility::OnCanActivate((UDS_AirWalk_BaseAbility *)this);
  if (bVar1) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->CharStateData).WeakPtr);
    if (!bVar1) {
      TVar2 = UDS_CharStateData::GetData((ulong64)local_res10);
                    /* WARNING: Load size is inaccurate */
      (this->CharStateData).WeakPtr = *TVar2.WeakPtr;
    }
    this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&(this->CharStateData).WeakPtr);
    local_res10[0] = AirWalk;
    bVar1 = UDS_CharStateData::HasCharState(this_00,local_res10);
    if (bVar1) {
      this_01 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      bVar1 = UDS_AirWalkAbilityData::IsNextStepPossible(this_01,Hovering);
      if (bVar1) {
        bVar1 = UDS_AirWalk_BaseAbility::CheckRequiredStaminaWithMessage
                          ((UDS_AirWalk_BaseAbility *)this);
        if (bVar1) {
          return true;
        }
        UDS_AirWalk_BaseAbility::NotifyActionProgressFlicker((UDS_AirWalk_BaseAbility *)this);
      }
    }
  }
  return false;
}

// OnDeactivateAbility @ 14b7b7eb0

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
UDS_AirWalk_HoveringAbility::OnDeactivateAbility(UDS_AirWalk_HoveringAbility *this,bool *param_1)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_AirWalkAbilityData *this_00;
  EDS_AbilityDeactivateType local_res8 [8];
  EDS_AbilityTagType local_res18 [16];
  
  UDS_AirWalk_BaseAbility::OnDeactivateAbility((UDS_AirWalk_BaseAbility *)this,param_1);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if (pUVar2[5].field_0x14 != '\0') {
      local_res8[0] = Cancel;
      local_res18[0] = AirWalk_Stop;
      UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res18,local_res8);
    }
    local_res8[0] = 0x28;
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar2 + 0x448))(pUVar2,3);
    this_00 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AirWalkAbilityData::DeActivateStep(this_00,Hovering);
  }
  return;
}

// OnPostActivateAbility @ 14b7bb180

void __thiscall
UDS_AirWalk_HoveringAbility::OnPostActivateAbility(UDS_AirWalk_HoveringAbility *this)

{
  undefined8 uVar1;
  UDS_AirWalkAbilityData *this_00;
  UDS_MovementCore *this_01;
  TVector<double> *pTVar2;
  TVector<double> local_28;
  
  UDS_AirWalk_BaseAbility::OnPostActivateAbility((UDS_AirWalk_BaseAbility *)this);
  this_00 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AirWalkAbilityData::DoNextStep(this_00,Hovering);
  this_01 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pTVar2 = UDS_MovementCore::GetVelocity(this_01,&local_28);
  if ((((double)CONCAT44((uint)((ulonglong)*(undefined8 *)&pTVar2->field0_0x0 >> 0x20) &
                         __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                         (uint)*(undefined8 *)&pTVar2->field0_0x0 &
                         (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= __real_3f1a36e2e0000000)
      && (uVar1 = *(undefined8 *)((longlong)&pTVar2->field0_0x0 + 8),
         (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
         __real_3f1a36e2e0000000)) &&
     (uVar1 = *(undefined8 *)((longlong)&pTVar2->field0_0x0 + 0x10),
     (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) &
                      __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                      (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
     __real_3f1a36e2e0000000)) {
    DoHovering(this);
    return;
  }
  DoStop(this);
  return;
}

// OnStopFinishFunc @ 14b7bc9d0

bool __thiscall
UDS_AirWalk_HoveringAbility::OnStopFinishFunc(UDS_AirWalk_HoveringAbility *this,float param_1)

{
  if (0.0 < param_1) {
    return false;
  }
  DoHovering(this);
  return true;
}

// OnStopStartFunc @ 14b7bcb60

void __thiscall UDS_AirWalk_HoveringAbility::OnStopStartFunc(UDS_AirWalk_HoveringAbility *this)

{
  UDS_MovementCore *this_00;
  UObject *pUVar1;
  TRotator<double> local_28;
  
  this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_MovementCore::GetActorRotation(this_00,&local_28);
  local_28.Pitch = 0.0;
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (**(code **)(*(longlong *)pUVar1 + 0x370))(pUVar1,&local_28);
  return;
}

// OnTickComponent @ 14b7bd480

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
UDS_AirWalk_HoveringAbility::OnTickComponent(UDS_AirWalk_HoveringAbility *this,float param_1)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_AirWalkAbilityData *this_00;
  EDS_AbilityDeactivateType local_res8 [8];
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if (pUVar2[4].field_0x20 == '\x03') {
      if (*(char *)((longlong)&this->_padding_ + 1) == '\0') {
        return;
      }
      this_00 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      bVar1 = UDS_AirWalkAbilityData::CheckAirWalkTime(this_00,Hovering);
      if (bVar1) {
        return;
      }
    }
    local_res8[0] = Success;
  }
  else {
    local_res8[0] = Cancel;
  }
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
  return;
}

// UpdateCostPerSecond @ 14b7c8ea0

void __thiscall
UDS_AirWalk_HoveringAbility::UpdateCostPerSecond
          (UDS_AirWalk_HoveringAbility *this,FDS_AirWalkStepInfo *param_1)

{
  return;
}

// UpdateUseCost @ 14b7ca740

void __thiscall
UDS_AirWalk_HoveringAbility::UpdateUseCost
          (UDS_AirWalk_HoveringAbility *this,FDS_AirWalkStepInfo *param_1)

{
  return;
}


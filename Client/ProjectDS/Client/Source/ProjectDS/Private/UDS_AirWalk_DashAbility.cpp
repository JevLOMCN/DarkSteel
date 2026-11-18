// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 25

// StaticClass @ 14b40ead0

UClass * __cdecl UDS_AirWalk_DashAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AirWalk_DashAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AirWalk_DashAbility",
               &Z_Registration_Info_UClass_UDS_AirWalk_DashAbility.InnerSingleton,
               StaticRegisterNativesUDS_AirWalk_DashAbility,0x1a0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AirWalk_DashAbility>,
               InternalVTableHelperCtorCaller<UDS_AirWalk_DashAbility>,local_res8,
               UDS_AirWalk_BaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AirWalk_DashAbility.InnerSingleton;
}

// UDS_AirWalk_DashAbility @ 14b411710

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

UDS_AirWalk_DashAbility * __thiscall
UDS_AirWalk_DashAbility::UDS_AirWalk_DashAbility
          (UDS_AirWalk_DashAbility *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->TickEnable = true;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->ElapsedTime = 0.0;
  this->ElapsedTimeForCost = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DashDirection).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DashDirection).field0_0x0._s_0.Y = (double)uVar1;
  (this->DashDirection).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DashVelocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DashVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->DashVelocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// ~UDS_AirWalk_DashAbility @ 14b412070

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

void __thiscall UDS_AirWalk_DashAbility::~UDS_AirWalk_DashAbility(UDS_AirWalk_DashAbility *this)

{
  this->_padding_ = (longlong)&UDS_AirWalk_BaseAbility::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UDS_AirWalk_BaseAbility::_vftable__for__IGameplayTaskOwnerInterface__
  ;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetAirWalkStep @ 14b4130b0

EDS_AirWalkStep __thiscall UDS_AirWalk_DashAbility::GetAirWalkStep(UDS_AirWalk_DashAbility *this)

{
  return AirDash;
}

// GetPrivateStaticClass @ 14b413ae0

UClass * __cdecl UDS_AirWalk_DashAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AirWalk_DashAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AirWalk_DashAbility",
               &Z_Registration_Info_UClass_UDS_AirWalk_DashAbility.InnerSingleton,
               StaticRegisterNativesUDS_AirWalk_DashAbility,0x1a0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AirWalk_DashAbility>,
               InternalVTableHelperCtorCaller<UDS_AirWalk_DashAbility>,local_res8,
               UDS_AirWalk_BaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AirWalk_DashAbility.InnerSingleton;
}

// ShouldHandleZoneChange @ 14b4140c0

bool __thiscall UDS_AirWalk_DashAbility::ShouldHandleZoneChange(UDS_AirWalk_DashAbility *this)

{
  return true;
}

// ShouldStopAbilityOnExhaustedStamina @ 14b414120

bool __thiscall
UDS_AirWalk_DashAbility::ShouldStopAbilityOnExhaustedStamina(UDS_AirWalk_DashAbility *this)

{
  return true;
}

// ShouldTickComponent @ 14b414160

bool __thiscall UDS_AirWalk_DashAbility::ShouldTickComponent(UDS_AirWalk_DashAbility *this)

{
  return this->TickEnable;
}

// StaticRegisterNativesUDS_AirWalk_DashAbility @ 14b414340

void __cdecl UDS_AirWalk_DashAbility::StaticRegisterNativesUDS_AirWalk_DashAbility(void)

{
  return;
}

// UDS_AirWalk_DashAbility @ 14b79b440

UDS_AirWalk_DashAbility * __thiscall
UDS_AirWalk_DashAbility::UDS_AirWalk_DashAbility
          (UDS_AirWalk_DashAbility *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UDS_AirWalk_BaseAbility::UDS_AirWalk_BaseAbility((UDS_AirWalk_BaseAbility *)this,param_1);
  this->TickEnable = true;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->ElapsedTime = 0.0;
  this->ElapsedTimeForCost = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DashDirection).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DashDirection).field0_0x0._s_0.Y = (double)uVar1;
  (this->DashDirection).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DashVelocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DashVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->DashVelocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// CheckCrash @ 14b79f0c0

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

bool __thiscall UDS_AirWalk_DashAbility::CheckCrash(UDS_AirWalk_DashAbility *this)

{
  bool bVar1;
  bool bVar2;
  ECollisionChannel EVar3;
  UDS_MovementCore *pUVar4;
  TRotator<double> *this_00;
  TStatId TVar5;
  AActor *pAVar6;
  UWorld *this_01;
  UObject *pUVar7;
  FCollisionShape *pFVar8;
  double dVar9;
  undefined1 auStackY_278 [32];
  FWeakObjectPtr local_228;
  TRotator<double> local_220;
  undefined4 uStack_208;
  undefined1 uStack_204;
  undefined2 uStack_203;
  undefined1 uStack_201;
  TVector<double>_u_0 local_200;
  TVector<double>_u_0 local_1e8;
  TQuat<double> local_1c8;
  FHitResult local_1a8;
  FCollisionQueryParams local_a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_278;
  (**(code **)(*(longlong *)this->_padding_ + 0x160))((longlong *)this->_padding_,&local_228);
  bVar1 = FWeakObjectPtr::IsValid(&local_228);
  bVar2 = false;
  if (bVar1) {
    pUVar4 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_MovementCore::GetActorLocation(pUVar4,(TVector<double> *)&local_200._s_0);
    dVar9 = (double)*(float *)(this->_padding_ + 0x58);
    local_1e8._s_0.X =
         dVar9 * (this->DashDirection).field0_0x0._s_0.X * __real_4010000000000000 +
         local_200._s_0.X;
    local_1e8._s_0.Y =
         dVar9 * (this->DashDirection).field0_0x0._s_0.Y * __real_4010000000000000 +
         local_200._s_0.Y;
    local_1e8._s_0.Z =
         dVar9 * (this->DashDirection).field0_0x0._s_0.Z * __real_4010000000000000 +
         local_200._s_0.Z;
    pUVar4 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    this_00 = UDS_MovementCore::GetActorRotation(pUVar4,&local_220);
    UE::Math::TRotator<double>::Quaternion(this_00,&local_1c8);
    memset(&local_1a8,0,0x100);
    uStack_208 = 0xffffffff;
    uStack_203 = 0;
    uStack_201 = 0;
    local_220.Roll = 0.0;
    uStack_204 = 0;
    local_1a8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
    local_1a8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
    local_1a8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
    local_1a8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
    local_1a8.Time = 1.0;
    local_1a8.HitObjectHandle.InstanceIndex = -1;
    local_1a8.HitObjectHandle.ResolutionStatus = Invalid;
    local_1a8.HitObjectHandle._29_3_ = 0;
    local_1a8.MyItem = -1;
    local_a8.OwnerTag.ComparisonIndex.Value = 0;
    local_a8.OwnerTag.Number = 0;
    local_1a8.HitObjectHandle.ManagerInterface.InterfaceInstance =
         (IActorInstanceManagerInterface *)0x0;
    local_a8.IgnoreComponents.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_a8.IgnoreComponents.ArrayNum = 0;
    local_a8.IgnoreComponents.ArrayMax = 8;
    local_a8.IgnoreSourceObjects.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0
    ;
    local_a8.IgnoreSourceObjects.ArrayNum = 0;
    local_a8.IgnoreSourceObjects.ArrayMax = 4;
    local_a8.bTraceComplex = false;
    local_a8.bFindInitialOverlaps = true;
    local_a8.bReturnFaceIndex = false;
    local_a8.bReturnPhysicalMaterial = false;
    local_a8.MobilityType = Any;
    local_220.Pitch = 0.0;
    local_a8.TraceTag.ComparisonIndex.Value = 0;
    local_a8.TraceTag.Number = 0;
    local_a8.bComponentListUnique = true;
    local_a8.IgnoreMask = '\0';
    local_a8.bIgnoreBlocks = false;
    local_a8.bIgnoreTouches = false;
    local_a8.bSkipNarrowPhase = false;
    TVar5 = FCollisionQueryParams::GetUnknownStatId();
    local_a8.StatId.StatIdPtr = *(TStatIdData **)&(TVar5.StatIdPtr)->Name;
    local_a8.bDebugQuery = false;
    local_a8.bTraceIntoSubComponents = true;
    local_a8.bReplaceHitWithSubComponents = true;
    pAVar6 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    FCollisionQueryParams::AddIgnoredActor(&local_a8,pAVar6);
    this_01 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    pUVar7 = FWeakObjectPtr::Get(&local_228);
    pFVar8 = (FCollisionShape *)(**(code **)(*(longlong *)pUVar7 + 0x8b8))(pUVar7,&local_220,0);
    pUVar7 = FWeakObjectPtr::Get(&local_228);
    EVar3 = (**(code **)(*(longlong *)pUVar7 + 0x5f0))(pUVar7);
    bVar2 = UWorld::SweepSingleByChannel
                      (this_01,&local_1a8,(TVector<double> *)&local_200._s_0,
                       (TVector<double> *)&local_1e8._s_0,&local_1c8,EVar3,pFVar8,&local_a8,
                       &FCollisionResponseParams::DefaultResponseParam);
    if (local_a8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_a8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_a8.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_a8.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
  }
  return bVar2;
}

// ClearVariables @ 14b79ff30

void __thiscall UDS_AirWalk_DashAbility::ClearVariables(UDS_AirWalk_DashAbility *this)

{
  undefined8 uVar1;
  
  this->ElapsedTime = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->ElapsedTimeForCost = 0.0;
  (this->DashDirection).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DashDirection).field0_0x0._s_0.Y = (double)uVar1;
  (this->DashDirection).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// DoDash @ 14b7a4830

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

void __thiscall UDS_AirWalk_DashAbility::DoDash(UDS_AirWalk_DashAbility *this)

{
  APlayerCameraManager *pAVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  UDS_AirWalkAbilityData *pUVar7;
  UObject *pUVar8;
  longlong lVar9;
  UWorld *pUVar10;
  APlayerController *pAVar11;
  TVector<double>_u_0 *pTVar12;
  FDS_AirWalkStepInfo *pFVar13;
  FWeakObjectPtr local_res8;
  APlayerCameraManager *local_res10;
  TVector<double>_u_0 local_48;
  TRotator<double> local_30;
  
  this->TickEnable = true;
  pUVar7 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AirWalkAbilityData::DoNextStep(pUVar7,AirDash);
  local_res8.ObjectIndex._0_1_ = 0x29;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,(EDS_StateTagType *)&local_res8)
  ;
  local_res8.ObjectIndex._0_1_ = 3;
  UDS_GameplayAbility::SetInputPolicy
            ((UDS_GameplayAbility *)this,(EDS_AbilityInputPolicy *)&local_res8);
  pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (**(code **)(*(longlong *)pUVar8 + 0x448))(pUVar8,5);
  pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (**(code **)(*(longlong *)pUVar8 + 0x398))(pUVar8,&UE::Math::TVector<double>::ZeroVector);
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    lVar9 = (**(code **)(this->_padding_ + 0x180))(this);
    if (lVar9 != 0) {
      pUVar10 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
      pAVar11 = UWorld::GetFirstPlayerController(pUVar10);
      if (pAVar11 != (APlayerController *)0x0) {
        pUVar10 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
        pAVar11 = UWorld::GetFirstPlayerController(pUVar10);
        pAVar1 = (pAVar11->PlayerCameraManager).field0_0x0.DebugPtr;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if (pAVar1 != (APlayerCameraManager *)0x0) {
            UE::GC::MarkAsReachable((UObject *)pAVar1);
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pAVar1 != (APlayerCameraManager *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pAVar1);
          }
        }
        local_res8.ObjectIndex = 0;
        local_res8.ObjectSerialNumber = 0;
        local_res10 = pAVar1;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pAVar1 != (APlayerCameraManager *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pAVar1);
        }
        FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
        bVar6 = FWeakObjectPtr::IsValid(&local_res8);
        if (bVar6) {
          pUVar8 = FWeakObjectPtr::Get(&local_res8);
          if (*(USceneComponent **)(pUVar8 + 0xb) == (USceneComponent *)0x0) {
            pTVar12 = &local_48;
            local_48._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
            local_48._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
            local_48._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
          }
          else {
            pTVar12 = &USceneComponent::GetForwardVector
                                 (*(USceneComponent **)(pUVar8 + 0xb),
                                  (TVector<double> *)&local_48._s_0)->field0_0x0;
          }
          dVar3 = (pTVar12->_s_0).Y;
          (this->DashDirection).field0_0x0._s_0.X =
               (((TVector<double>_u_0 *)&(pTVar12->_s_0).X)->_s_0).X;
          (this->DashDirection).field0_0x0._s_0.Y = dVar3;
          (this->DashDirection).field0_0x0._s_0.Z = (pTVar12->_s_0).Z;
        }
      }
    }
    pUVar7 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pFVar13 = UDS_AirWalkAbilityData::GetAirWalkStepInfo(pUVar7,AirDash);
    dVar5 = (this->DashDirection).field0_0x0._s_0.Y;
    dVar3 = (double)pFVar13->AirWalkSpeed;
    dVar4 = dVar3 * (this->DashDirection).field0_0x0._s_0.Z;
    (this->DashVelocity).field0_0x0._s_0.X = dVar3 * (this->DashDirection).field0_0x0._s_0.X;
    auVar2._8_4_ = SUB84(dVar4,0);
    auVar2._0_8_ = dVar3 * dVar5;
    auVar2._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    *(undefined1 (*) [16])((longlong)&(this->DashVelocity).field0_0x0 + 8) = auVar2;
    UE::Math::TVector<double>::ToOrientationRotator(&this->DashDirection,&local_30);
    pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar8 + 0x370))(pUVar8,&local_30);
  }
  return;
}

// DoStop @ 14b7a4e80

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

void __thiscall UDS_AirWalk_DashAbility::DoStop(UDS_AirWalk_DashAbility *this)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_AirWalkStopAbilityContext *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  UDS_AirWalk_DashAbility *local_res8;
  UDS_AirWalkStopAbilityContext *local_res10;
  uint uStack_4c;
  FDestructionSentinel local_48;
  undefined1 *local_30;
  
  this->TickEnable = false;
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pUVar3 = NewObject<UDS_AirWalkStopAbilityContext>(pUVar2);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UDS_AirWalkStopAbilityContext *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar3->StopStartDelegate,
             (FWriteAccessScope *)&local_48);
  local_30 = &(pUVar3->StopStartDelegate).field_0x8;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_AirWalk_DashAbility____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar4[3] = 0;
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = OnStopStartFunc;
    puVar4[5] = (ulonglong)uStack_4c << 0x20;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar3->StopFinishDelegate,
             (FWriteAccessScope *)&local_48);
  local_30 = &(pUVar3->StopFinishDelegate).field_0x8;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_30);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_AirWalk_DashAbility____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar4[3] = 0;
    local_res8 = this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = OnStopFinishFunc;
    puVar4[5] = (ulonglong)uStack_4c << 0x20;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  local_res10 = pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar3 != (UDS_AirWalkStopAbilityContext *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  local_res8._0_1_ = 0x2e;
  bVar1 = UDS_GameplayAbility::TryActivateAbility
                    ((UDS_GameplayAbility *)this,(EDS_AbilityTagType *)&local_res8,
                     (TObjectPtr<UWN_AbilityContext>)&local_res10);
  if (bVar1) {
    local_res8 = (UDS_AirWalk_DashAbility *)CONCAT71(local_res8._1_7_,0x29);
    UDS_GameplayAbility::RemoveStateTagToASC
              ((UDS_GameplayAbility *)this,(EDS_StateTagType *)&local_res8);
  }
  return;
}

// EndDash @ 14b7a5fa0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

void __thiscall UDS_AirWalk_DashAbility::EndDash(UDS_AirWalk_DashAbility *this)

{
  undefined8 uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  UObject *pUVar5;
  UDS_AirWalkAbilityData *this_00;
  uint uVar6;
  uint uVar7;
  EDS_AbilityInputPolicy local_res8 [8];
  EDS_AbilityTagType local_res10 [8];
  undefined1 local_38 [16];
  double local_28;
  
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar4) {
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if (pUVar5[5].field_0x14 != '\0') {
      local_res8[0] = EndIfInputWithAniCut;
      local_res10[0] = AirWalk_Stop;
      UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res10,local_res8);
    }
    this_00 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AirWalkAbilityData::DeActivateStep(this_00,AirDash);
    local_res8[0] = None;
    UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_res8);
    local_res8[0] = 0x29;
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
    local_res8[0] = None;
    UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_res8);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar5 + 0x448))(pUVar5,3);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    dVar2 = (this->DashVelocity).field0_0x0._s_0.Y * _UNK_150d9fb18;
    local_28 = (this->DashVelocity).field0_0x0._s_0.Z * ___xmm_3fe33333400000003fe3333340000000;
    local_38._8_4_ = SUB84(dVar2,0);
    local_38._0_8_ =
         (this->DashVelocity).field0_0x0._s_0.X * ___xmm_3fe33333400000003fe3333340000000;
    local_38._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    (**(code **)(*(longlong *)pUVar5 + 0x398))(pUVar5,local_38);
    if (((*(char *)((longlong)&this->_padding_ + 1) != '\0') &&
        (((uVar1 = *(undefined8 *)&(this->DashDirection).field0_0x0,
          uVar6 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar7 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar7,uVar6) &&
          (double)CONCAT44(uVar7,uVar6) != __real_3f1a36e2e0000000 ||
          (uVar1 = *(undefined8 *)((longlong)&(this->DashDirection).field0_0x0 + 8),
          uVar6 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar7 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar7,uVar6) &&
          (double)CONCAT44(uVar7,uVar6) != __real_3f1a36e2e0000000)) ||
         (uVar1 = *(undefined8 *)((longlong)&(this->DashDirection).field0_0x0 + 0x10),
         uVar6 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar7 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar7,uVar6) &&
         (double)CONCAT44(uVar7,uVar6) != __real_3f1a36e2e0000000)))) &&
       (pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_),
       pUVar5[5].field_0x14 == '\0')) {
      UE::Math::TVector<double>::ToOrientationRotator
                (&this->DashDirection,(TRotator<double> *)local_38);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_38._8_8_;
      local_38 = auVar3 << 0x40;
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      (**(code **)(*(longlong *)pUVar5 + 0x370))(pUVar5,local_38);
    }
  }
  return;
}

// OnAbilityRetryActivate @ 14b7b3fd0

void __thiscall UDS_AirWalk_DashAbility::OnAbilityRetryActivate(UDS_AirWalk_DashAbility *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x2c0))();
  if (cVar1 != '\0') {
    DoStop(this);
    return;
  }
  return;
}

// OnCanActivate @ 14b7b55e0

bool __thiscall UDS_AirWalk_DashAbility::OnCanActivate(UDS_AirWalk_DashAbility *this)

{
  bool bVar1;
  UDS_AirWalkAbilityData *this_00;
  
  bVar1 = UDS_AirWalk_BaseAbility::OnCanActivate((UDS_AirWalk_BaseAbility *)this);
  if (bVar1) {
    this_00 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar1 = UDS_AirWalkAbilityData::IsNextStepPossible(this_00,AirDash);
    if (bVar1) {
      bVar1 = UDS_AirWalk_BaseAbility::CheckRequiredStaminaWithMessage
                        ((UDS_AirWalk_BaseAbility *)this);
      if (bVar1) {
        return true;
      }
      UDS_AirWalk_BaseAbility::NotifyActionProgressFlicker((UDS_AirWalk_BaseAbility *)this);
    }
  }
  return false;
}

// OnDeactivateAbility @ 14b7b7bb0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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
UDS_AirWalk_DashAbility::OnDeactivateAbility(UDS_AirWalk_DashAbility *this,bool *param_1)

{
  undefined8 uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  UObject *pUVar5;
  UDS_AirWalkAbilityData *this_00;
  uint uVar6;
  uint uVar7;
  EDS_AbilityInputPolicy local_res8 [8];
  EDS_AbilityTagType local_res18 [16];
  undefined1 local_38 [16];
  double local_28;
  
  UDS_AirWalk_BaseAbility::OnDeactivateAbility((UDS_AirWalk_BaseAbility *)this,param_1);
  bVar4 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (bVar4) {
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if (pUVar5[5].field_0x14 != '\0') {
      local_res8[0] = EndIfInputWithAniCut;
      local_res18[0] = AirWalk_Stop;
      UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res18,local_res8);
    }
    this_00 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AirWalkAbilityData::DeActivateStep(this_00,AirDash);
    local_res8[0] = None;
    UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_res8);
    local_res8[0] = 0x29;
    UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
    local_res8[0] = None;
    UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_res8);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar5 + 0x448))(pUVar5,3);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    dVar2 = (this->DashVelocity).field0_0x0._s_0.Y * _UNK_150d9fb18;
    local_28 = (this->DashVelocity).field0_0x0._s_0.Z * ___xmm_3fe33333400000003fe3333340000000;
    local_38._8_4_ = SUB84(dVar2,0);
    local_38._0_8_ =
         (this->DashVelocity).field0_0x0._s_0.X * ___xmm_3fe33333400000003fe3333340000000;
    local_38._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    (**(code **)(*(longlong *)pUVar5 + 0x398))(pUVar5,local_38);
    if (((*(char *)((longlong)&this->_padding_ + 1) != '\0') &&
        (((uVar1 = *(undefined8 *)&(this->DashDirection).field0_0x0,
          uVar6 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar7 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar7,uVar6) &&
          (double)CONCAT44(uVar7,uVar6) != __real_3f1a36e2e0000000 ||
          (uVar1 = *(undefined8 *)((longlong)&(this->DashDirection).field0_0x0 + 8),
          uVar6 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
          uVar7 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
          __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar7,uVar6) &&
          (double)CONCAT44(uVar7,uVar6) != __real_3f1a36e2e0000000)) ||
         (uVar1 = *(undefined8 *)((longlong)&(this->DashDirection).field0_0x0 + 0x10),
         uVar6 = (uint)uVar1 & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
         uVar7 = (uint)((ulonglong)uVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
         __real_3f1a36e2e0000000 <= (double)CONCAT44(uVar7,uVar6) &&
         (double)CONCAT44(uVar7,uVar6) != __real_3f1a36e2e0000000)))) &&
       (pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_),
       pUVar5[5].field_0x14 == '\0')) {
      UE::Math::TVector<double>::ToOrientationRotator
                (&this->DashDirection,(TRotator<double> *)local_38);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_38._8_8_;
      local_38 = auVar3 << 0x40;
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      (**(code **)(*(longlong *)pUVar5 + 0x370))(pUVar5,local_38);
    }
  }
  return;
}

// OnPostActivateAbility @ 14b7baf40

void __thiscall UDS_AirWalk_DashAbility::OnPostActivateAbility(UDS_AirWalk_DashAbility *this)

{
  UDS_AirWalk_BaseAbility::OnPostActivateAbility((UDS_AirWalk_BaseAbility *)this);
  DoDash(this);
  return;
}

// OnStopFinishFunc @ 14b7bc9a0

bool __thiscall
UDS_AirWalk_DashAbility::OnStopFinishFunc(UDS_AirWalk_DashAbility *this,float param_1)

{
  if (__real_44480000 < param_1) {
    return false;
  }
  DoDash(this);
  return true;
}

// OnStopStartFunc @ 14b7bca00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UDS_AirWalk_DashAbility::OnStopStartFunc(UDS_AirWalk_DashAbility *this)

{
  APlayerCameraManager *pAVar1;
  bool bVar2;
  UWorld *this_00;
  APlayerController *pAVar3;
  UObject *pUVar4;
  TVector<double>_u_0 *pTVar5;
  FWeakObjectPtr local_res8;
  APlayerCameraManager *local_res10;
  TVector<double>_u_0 local_58;
  TVector<double>_u_0 local_40;
  TRotator<double> local_28;
  
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
    pAVar3 = UWorld::GetFirstPlayerController(this_00);
    pAVar1 = (pAVar3->PlayerCameraManager).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pAVar1 != (APlayerCameraManager *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pAVar1);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pAVar1 != (APlayerCameraManager *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pAVar1);
      }
    }
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res10 = pAVar1;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar1 != (APlayerCameraManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar1);
    }
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
    bVar2 = FWeakObjectPtr::IsValid(&local_res8);
    if (bVar2) {
      pUVar4 = FWeakObjectPtr::Get(&local_res8);
      if (*(USceneComponent **)(pUVar4 + 0xb) == (USceneComponent *)0x0) {
        pTVar5 = &local_58;
        local_58._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
        local_58._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
        local_58._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
      }
      else {
        pTVar5 = &USceneComponent::GetForwardVector
                            (*(USceneComponent **)(pUVar4 + 0xb),(TVector<double> *)&local_58._s_0)
                  ->field0_0x0;
      }
      local_40._s_0.X = (((TVector<double>_u_0 *)&(pTVar5->_s_0).X)->_s_0).X;
      local_40._s_0.Y = (pTVar5->_s_0).Y;
      local_40._s_0.Z = (pTVar5->_s_0).Z;
      UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_40._s_0,&local_28);
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      (**(code **)(*(longlong *)pUVar4 + 0x370))(pUVar4,&local_28);
    }
  }
  return;
}

// OnTickComponent @ 14b7bd0d0

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
UDS_AirWalk_DashAbility::OnTickComponent(UDS_AirWalk_DashAbility *this,float param_1)

{
  longlong *this_00;
  bool bVar1;
  UObject *pUVar2;
  FName *pFVar3;
  UDS_AirWalkAbilityData *pUVar4;
  float fVar5;
  EDS_AbilityDeactivateType local_res8 [8];
  FName local_res18 [2];
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  this_00 = &this->_padding_;
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  if (pUVar2[5].field_0x14 != '\0') {
    return;
  }
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
  if (!bVar1) {
    local_res8[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
    return;
  }
  bVar1 = CheckCrash(this);
  if (bVar1) {
    local_res8[0] = 0x2f;
    pFVar3 = &FDS_GameplayTags::GetStateTag(local_res8)->TagName;
    local_res18[0] = *pFVar3;
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,(FGameplayTag *)local_res18);
    UDS_GameplayAbility::RemoveStateTagToASC
              ((UDS_GameplayAbility *)this,(FGameplayTag *)local_res18);
    local_res8[0] = 0x2d;
    UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  }
  else {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    if (pUVar2[4].field_0x20 != '\x04') {
LAB_14b7bd1e2:
      local_res8[0] = Success;
      UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
      return;
    }
    bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)this_00);
    if (bVar1) {
      if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
        pUVar4 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
        bVar1 = UDS_AirWalkAbilityData::CheckAirWalkTime(pUVar4,AirDash);
        if (!bVar1) goto LAB_14b7bd1e2;
        pUVar4 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
        UDS_AirWalkAbilityData::GetAirWalkStepInfo(pUVar4,AirDash);
        fVar5 = param_1 + this->ElapsedTime;
        bVar1 = __real_3f800000 <= fVar5;
        this->ElapsedTime = fVar5;
        this->ElapsedTimeForCost = fVar5;
        if (bVar1) {
          this->ElapsedTimeForCost = 0.0;
        }
        pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        (**(code **)(*(longlong *)pUVar2 + 0x3a0))(pUVar2,&this->DashVelocity);
        pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        (**(code **)(*(longlong *)pUVar2 + 0x2c8))(pUVar2,&this->DashVelocity,param_1,1);
      }
      return;
    }
  }
  local_res8[0] = Cancel;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
  return;
}

// UpdateAirDash @ 14b7c7ee0

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

void __thiscall UDS_AirWalk_DashAbility::UpdateAirDash(UDS_AirWalk_DashAbility *this,float param_1)

{
  bool bVar1;
  UDS_AirWalkAbilityData *pUVar2;
  UObject *pUVar3;
  float fVar4;
  EDS_AbilityDeactivateType local_res8 [8];
  
  bVar1 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&this->_padding_);
  if (!bVar1) {
    local_res8[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
    return;
  }
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    pUVar2 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar1 = UDS_AirWalkAbilityData::CheckAirWalkTime(pUVar2,AirDash);
    if (!bVar1) {
      local_res8[0] = Success;
      UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
      return;
    }
    pUVar2 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AirWalkAbilityData::GetAirWalkStepInfo(pUVar2,AirDash);
    fVar4 = param_1 + this->ElapsedTime;
    bVar1 = __real_3f800000 <= fVar4;
    this->ElapsedTime = fVar4;
    this->ElapsedTimeForCost = fVar4;
    if (bVar1) {
      this->ElapsedTimeForCost = 0.0;
    }
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar3 + 0x3a0))(pUVar3,&this->DashVelocity);
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar3 + 0x2c8))(pUVar3,&this->DashVelocity,param_1,1);
  }
  return;
}

// UpdateCostPerSecond @ 14b7c8e90

void __thiscall
UDS_AirWalk_DashAbility::UpdateCostPerSecond
          (UDS_AirWalk_DashAbility *this,FDS_AirWalkStepInfo *param_1)

{
  return;
}

// UpdateUseCost @ 14b7ca730

void __thiscall
UDS_AirWalk_DashAbility::UpdateUseCost(UDS_AirWalk_DashAbility *this,FDS_AirWalkStepInfo *param_1)

{
  return;
}


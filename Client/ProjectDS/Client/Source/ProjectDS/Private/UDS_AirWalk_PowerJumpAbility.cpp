// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 34

// StaticClass @ 14b40f170

UClass * __cdecl UDS_AirWalk_PowerJumpAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AirWalk_PowerJumpAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AirWalk_PowerJumpAbility",
               &Z_Registration_Info_UClass_UDS_AirWalk_PowerJumpAbility.InnerSingleton,
               StaticRegisterNativesUDS_AirWalk_PowerJumpAbility,0x218,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AirWalk_PowerJumpAbility>,
               InternalVTableHelperCtorCaller<UDS_AirWalk_PowerJumpAbility>,local_res8,
               UDS_AirWalk_BaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AirWalk_PowerJumpAbility.InnerSingleton;
}

// UDS_AirWalk_PowerJumpAbility @ 14b411960

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

UDS_AirWalk_PowerJumpAbility * __thiscall
UDS_AirWalk_PowerJumpAbility::UDS_AirWalk_PowerJumpAbility
          (UDS_AirWalk_PowerJumpAbility *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = 0;
  (this->OnChangeCharStateHandle).ID = 0;
  (this->PowerJumpCurve).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  (this->PowerJumpGuideActor).field0_0x0.DebugPtr = (ADS_PowerJumpGuideActor *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->bIsCharging = false;
  this->ChargingTime = 0.0;
  this->ChargingTimeRatio = 0.0;
  this->PowerJumpMoveTime = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ActorLocationWhenStart).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ActorLocationWhenStart).field0_0x0._s_0.Y = (double)uVar1;
  (this->ActorLocationWhenStart).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CameraForwardVectorWhenStart).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CameraForwardVectorWhenStart).field0_0x0._s_0.Y = (double)uVar1;
  (this->CameraForwardVectorWhenStart).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CameraUpVectorWhenStart).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CameraUpVectorWhenStart).field0_0x0._s_0.Y = (double)uVar1;
  (this->CameraUpVectorWhenStart).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->PowerJumpRoute).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PowerJumpRoute).ArrayNum = 0;
  (this->PowerJumpRoute).ArrayMax = 0;
  this->PowerJumpForwardSpeed = 0.0;
  this->PowerJumpHeightCorrection = 0.0;
  this->bIsCrash = false;
  this->bIsInitByCommonDataTable = false;
  this->PowerJumpDirDegreesOffset = 0.0;
  this->PowerJumpPitchMin = -35.0;
  this->PowerJumpPitchMax = 90.0;
  this->TestScale = 9.0;
  this->testBreaking = 0.125;
  this->AngleInDegrees = 0.0;
  return this;
}

// UDS_AirWalk_PowerJumpAbility @ 14b411a70

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

UDS_AirWalk_PowerJumpAbility * __thiscall
UDS_AirWalk_PowerJumpAbility::UDS_AirWalk_PowerJumpAbility
          (UDS_AirWalk_PowerJumpAbility *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = 0;
  (this->OnChangeCharStateHandle).ID = 0;
  (this->PowerJumpCurve).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  (this->PowerJumpGuideActor).field0_0x0.DebugPtr = (ADS_PowerJumpGuideActor *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->bIsCharging = false;
  this->ChargingTime = 0.0;
  this->ChargingTimeRatio = 0.0;
  this->PowerJumpMoveTime = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ActorLocationWhenStart).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ActorLocationWhenStart).field0_0x0._s_0.Y = (double)uVar1;
  (this->ActorLocationWhenStart).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CameraForwardVectorWhenStart).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CameraForwardVectorWhenStart).field0_0x0._s_0.Y = (double)uVar1;
  (this->CameraForwardVectorWhenStart).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CameraUpVectorWhenStart).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CameraUpVectorWhenStart).field0_0x0._s_0.Y = (double)uVar1;
  (this->CameraUpVectorWhenStart).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->PowerJumpRoute).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PowerJumpRoute).ArrayNum = 0;
  (this->PowerJumpRoute).ArrayMax = 0;
  this->PowerJumpForwardSpeed = 0.0;
  this->PowerJumpHeightCorrection = 0.0;
  this->bIsCrash = false;
  this->bIsInitByCommonDataTable = false;
  this->PowerJumpDirDegreesOffset = 0.0;
  this->PowerJumpPitchMin = -35.0;
  this->PowerJumpPitchMax = 90.0;
  this->TestScale = 9.0;
  this->testBreaking = 0.125;
  this->AngleInDegrees = 0.0;
  return this;
}

// ~UDS_AirWalk_PowerJumpAbility @ 14b4120f0

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
UDS_AirWalk_PowerJumpAbility::~UDS_AirWalk_PowerJumpAbility(UDS_AirWalk_PowerJumpAbility *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  pFVar1 = (this->PowerJumpRoute).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&UDS_AirWalk_BaseAbility::_vftable__for__UObject__;
  this->_padding_ = (longlong)&UDS_AirWalk_BaseAbility::_vftable__for__IGameplayTaskOwnerInterface__
  ;
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetAirWalkStep @ 14b4130e0

EDS_AirWalkStep __thiscall
UDS_AirWalk_PowerJumpAbility::GetAirWalkStep(UDS_AirWalk_PowerJumpAbility *this)

{
  return PowerJump;
}

// GetDefaultInputPolicy @ 14b413110

EDS_AbilityInputPolicy __thiscall
UDS_AirWalk_PowerJumpAbility::GetDefaultInputPolicy(UDS_AirWalk_PowerJumpAbility *this)

{
  return BlockInput;
}

// GetPrivateStaticClass @ 14b413de0

UClass * __cdecl UDS_AirWalk_PowerJumpAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AirWalk_PowerJumpAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AirWalk_PowerJumpAbility",
               &Z_Registration_Info_UClass_UDS_AirWalk_PowerJumpAbility.InnerSingleton,
               StaticRegisterNativesUDS_AirWalk_PowerJumpAbility,0x218,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AirWalk_PowerJumpAbility>,
               InternalVTableHelperCtorCaller<UDS_AirWalk_PowerJumpAbility>,local_res8,
               UDS_AirWalk_BaseAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AirWalk_PowerJumpAbility.InnerSingleton;
}

// ShouldNotifyChangedCharState @ 14b4140f0

bool __thiscall
UDS_AirWalk_PowerJumpAbility::ShouldNotifyChangedCharState(UDS_AirWalk_PowerJumpAbility *this)

{
  return this->bIsCharging;
}

// ShouldTickComponent @ 14b4141a0

bool __thiscall
UDS_AirWalk_PowerJumpAbility::ShouldTickComponent(UDS_AirWalk_PowerJumpAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_AirWalk_PowerJumpAbility @ 14b414380

void __cdecl UDS_AirWalk_PowerJumpAbility::StaticRegisterNativesUDS_AirWalk_PowerJumpAbility(void)

{
  return;
}

// ChargingProcess @ 14b79ee20

void __thiscall
UDS_AirWalk_PowerJumpAbility::ChargingProcess(UDS_AirWalk_PowerJumpAbility *this,float param_1)

{
  float *pfVar1;
  UDS_AirWalkAbilityData *pUVar2;
  FDS_AirWalkStepInfo *pFVar3;
  float fVar4;
  
  pfVar1 = &this->ChargingTime;
  *pfVar1 = param_1 + *pfVar1;
  pUVar2 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pFVar3 = UDS_AirWalkAbilityData::GetAirWalkStepInfo(pUVar2,PowerJumpCharging);
  if (0.0 < pFVar3->ChargingTimeMax) {
    fVar4 = *pfVar1 / pFVar3->ChargingTimeMax;
    if (__real_3f800000 <= fVar4) {
      fVar4 = __real_3f800000;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    this->ChargingTimeRatio = fVar4;
  }
  pUVar2 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pFVar3 = UDS_AirWalkAbilityData::GetAirWalkStepInfo(pUVar2,PowerJump);
  this->PowerJumpMoveTime = pFVar3->AirWalkTime * this->ChargingTimeRatio;
  UpdatePowerJumpDirectionAndSpeed(this);
  UpdatePlayerRotation(this);
  if ((*(char *)((longlong)&this->_padding_ + 1) == '\x01') &&
     ((this->PowerJumpGuideActor).field0_0x0.DebugPtr != (ADS_PowerJumpGuideActor *)0x0)) {
    DrawPowerJumpMoveRoute(this);
    DrawLandingDecal(this);
  }
  pUVar2 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pFVar3 = UDS_AirWalkAbilityData::GetAirWalkStepInfo(pUVar2,PowerJumpCharging);
  fVar4 = pFVar3->ChargingTimeMax;
  if (fVar4 < *pfVar1 || fVar4 == *pfVar1) {
    this->ChargingTime = fVar4;
    EndCharging(this);
  }
  return;
}

// CheckCrash @ 14b79f720

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UDS_AirWalk_PowerJumpAbility::CheckCrash
          (UDS_AirWalk_PowerJumpAbility *this,TVector<double> *param_1)

{
  bool bVar1;
  ECollisionChannel EVar2;
  UWorld *this_00;
  UDS_LogManager *pUVar3;
  TStatId TVar4;
  AActor *pAVar5;
  UDS_MovementCore *pUVar6;
  TRotator<double> *this_01;
  UObject *pUVar7;
  FCollisionShape *pFVar8;
  double dVar9;
  undefined1 auStackY_3a8 [32];
  uint uVar10;
  wchar_t *pwVar11;
  FWeakObjectPtr local_358;
  TRotator<double> local_350;
  undefined4 uStack_338;
  undefined1 uStack_334;
  undefined2 uStack_333;
  undefined1 uStack_331;
  TVector<double>_u_0 local_330;
  TVector<double>_u_0 local_318;
  TQuat<double> local_2f8;
  FHitResult local_2d8;
  FCollisionQueryParams local_1d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_3a8;
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  if (this_00 == (UWorld *)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_AirWalk_PowerJumpAbility::CheckCrash",0x28,Yes);
    pwVar11 = L"world is nullptr.";
    uVar10 = 0x26f;
  }
  else {
    (**(code **)(*(longlong *)this->_padding_ + 0x160))();
    bVar1 = TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr> *)&local_358,(void *)0x0);
    if (!bVar1) {
      memset(&local_2d8,0,0x100);
      uStack_338 = 0xffffffff;
      uStack_333 = 0;
      uStack_331 = 0;
      local_350.Roll = 0.0;
      uStack_334 = 0;
      local_2d8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
      local_2d8.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
      local_2d8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
      local_2d8.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
      local_2d8.Time = 1.0;
      local_2d8.HitObjectHandle.InstanceIndex = -1;
      local_2d8.HitObjectHandle.ResolutionStatus = Invalid;
      local_2d8.HitObjectHandle._29_3_ = 0;
      local_2d8.MyItem = -1;
      local_1d8.OwnerTag.ComparisonIndex.Value = 0;
      local_1d8.OwnerTag.Number = 0;
      local_2d8.HitObjectHandle.ManagerInterface.InterfaceInstance =
           (IActorInstanceManagerInterface *)0x0;
      local_1d8.IgnoreComponents.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0
      ;
      local_1d8.IgnoreComponents.ArrayNum = 0;
      local_1d8.IgnoreComponents.ArrayMax = 8;
      local_1d8.IgnoreSourceObjects.AllocatorInstance.SecondaryData =
           (ForElementType<unsigned_int>)0x0;
      local_1d8.IgnoreSourceObjects.ArrayNum = 0;
      local_1d8.IgnoreSourceObjects.ArrayMax = 4;
      local_1d8.bTraceComplex = false;
      local_1d8.bFindInitialOverlaps = true;
      local_1d8.bReturnFaceIndex = false;
      local_1d8.bReturnPhysicalMaterial = false;
      local_1d8.MobilityType = Any;
      local_350.Pitch = 0.0;
      local_1d8.TraceTag.ComparisonIndex.Value = 0;
      local_1d8.TraceTag.Number = 0;
      local_1d8.bComponentListUnique = true;
      local_1d8.IgnoreMask = '\0';
      local_1d8.bIgnoreBlocks = false;
      local_1d8.bIgnoreTouches = false;
      local_1d8.bSkipNarrowPhase = false;
      TVar4 = FCollisionQueryParams::GetUnknownStatId();
      local_1d8.StatId.StatIdPtr = *(TStatIdData **)&(TVar4.StatIdPtr)->Name;
      local_1d8.bDebugQuery = false;
      local_1d8.bTraceIntoSubComponents = true;
      local_1d8.bReplaceHitWithSubComponents = true;
      pAVar5 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      FCollisionQueryParams::AddIgnoredActor(&local_1d8,pAVar5);
      pUVar6 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      UDS_MovementCore::GetActorLocation(pUVar6,(TVector<double> *)&local_330._s_0);
      dVar9 = (double)*(float *)(this->_padding_ + 0x5c);
      local_318._s_0.X = dVar9 * (param_1->field0_0x0)._s_0.X + local_330._s_0.X;
      local_318._s_0.Y = dVar9 * (param_1->field0_0x0)._s_0.Y + local_330._s_0.Y;
      local_318._s_0.Z = dVar9 * (param_1->field0_0x0)._s_0.Z + local_330._s_0.Z;
      pUVar6 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      this_01 = UDS_MovementCore::GetActorRotation(pUVar6,&local_350);
      UE::Math::TRotator<double>::Quaternion(this_01,&local_2f8);
      pUVar7 = FWeakObjectPtr::Get(&local_358);
      pFVar8 = (FCollisionShape *)(**(code **)(*(longlong *)pUVar7 + 0x8b8))(pUVar7,&local_350,0);
      pUVar7 = FWeakObjectPtr::Get(&local_358);
      EVar2 = (**(code **)(*(longlong *)pUVar7 + 0x5f0))(pUVar7);
      bVar1 = UWorld::SweepSingleByChannel
                        (this_00,&local_2d8,(TVector<double> *)&local_330._s_0,
                         (TVector<double> *)&local_318._s_0,&local_2f8,EVar2,pFVar8,&local_1d8,
                         &FCollisionResponseParams::DefaultResponseParam);
      if (local_1d8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_1d8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
      }
      if (local_1d8.IgnoreComponents.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_1d8.IgnoreComponents.AllocatorInstance.SecondaryData);
        return bVar1;
      }
      return bVar1;
    }
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_AirWalk_PowerJumpAbility::CheckCrash",0x28,Yes);
    pwVar11 = L"capsuleComp is nullptr.";
    uVar10 = 0x276;
  }
  UDS_LogManager::PrintLog(pUVar3,1,Display,local_148.Ptr,uVar10,pwVar11);
  if ((void *)local_148._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
  return false;
}

// ClearVariables @ 14b79ff70

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UDS_AirWalk_PowerJumpAbility::ClearVariables(UDS_AirWalk_PowerJumpAbility *this)

{
  char cVar1;
  ADS_PowerJumpGuideActor *this_00;
  undefined8 uVar2;
  
  this->bIsCharging = false;
  cVar1 = *(char *)((longlong)&this->_padding_ + 1);
  this->ChargingTime = 0.0;
  this->ChargingTimeRatio = 0.0;
  this->PowerJumpMoveTime = 0.0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ActorLocationWhenStart).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ActorLocationWhenStart).field0_0x0._s_0.Y = (double)uVar2;
  (this->ActorLocationWhenStart).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CameraForwardVectorWhenStart).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CameraForwardVectorWhenStart).field0_0x0._s_0.Y = (double)uVar2;
  (this->CameraForwardVectorWhenStart).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CameraUpVectorWhenStart).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CameraUpVectorWhenStart).field0_0x0._s_0.Y = (double)uVar2;
  (this->CameraUpVectorWhenStart).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->PowerJumpForwardSpeed = 0.0;
  this->PowerJumpHeightCorrection = 0.0;
  this->bIsCrash = false;
  if ((cVar1 == '\x01') &&
     (this_00 = (this->PowerJumpGuideActor).field0_0x0.DebugPtr,
     this_00 != (ADS_PowerJumpGuideActor *)0x0)) {
    ADS_PowerJumpGuideActor::ShowGuideSpline(this_00,false);
    ADS_PowerJumpGuideActor::ShowLandingDecal((this->PowerJumpGuideActor).field0_0x0.DebugPtr,false)
    ;
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&this->PowerJumpRoute,0xb,Default);
    return;
  }
  return;
}

// CreatePowerJumpGuideActor @ 14b7a3390

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_AirWalk_PowerJumpAbility::CreatePowerJumpGuideActor(UDS_AirWalk_PowerJumpAbility *this)

{
  UDS_LogManager *pUVar1;
  UClass *pUVar2;
  FString *pFVar3;
  size_t sVar4;
  UWorld *this_00;
  FActorSpawnParameters *pFVar5;
  ADS_PowerJumpGuideActor *pAVar6;
  longlong *plVar7;
  ADS_PowerJumpGuideActor *pAVar8;
  wchar_t *pwVar9;
  Type TVar10;
  int iVar11;
  undefined1 auStackY_298 [32];
  uint uVar12;
  wchar_t *pwVar13;
  TStringView<wchar_t> local_268;
  TStringView<wchar_t> local_258;
  FSoftObjectPath local_248;
  FString local_228;
  TTransform<double> local_218;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1b8;
  undefined1 local_98 [112];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_298;
  ::FString::FString((FString *)&local_258,
                     L"/Game/Blueprints/ActorBP/PowerJumpGuideActor_BP.PowerJumpGuideActor_BP_C");
  pAVar8 = (ADS_PowerJumpGuideActor *)0x0;
  local_248.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_248.AssetPath.PackageName.Number = 0;
  local_248.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_248.AssetPath.AssetName.Number = 0;
  local_248.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_248.SubPathString.Data.ArrayNum = 0;
  local_248.SubPathString.Data.ArrayMax = 0;
  iVar11 = 0;
  local_268.Size = iVar11;
  if (local_258.Size != 0) {
    local_268.Size = local_258.Size + -1;
  }
  local_268.DataPtr = local_258.DataPtr;
  FSoftObjectPath::SetPath(&local_248,&local_268);
  if ((FScriptContainerElement *)local_258.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.DataPtr);
  }
  if (local_248.AssetPath.PackageName == (FName)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 == (UDS_LogManager *)0x0) goto LAB_14b7a37a8;
    pUVar1 = UDS_LogManager::GetInst();
    local_1b8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_1b8,"UDS_AirWalk_PowerJumpAbility::CreatePowerJumpGuideActor",0x37,Yes);
    TVar10 = Warning;
    pwVar13 = L"assetPath is invalid.";
    uVar12 = 0x28c;
  }
  else {
    pUVar2 = FSoftClassPath::ResolveClass((FSoftClassPath *)&local_248);
    pwVar13 = L"";
    if (pUVar2 == (UClass *)0x0) {
      if (local_248.AssetPath.PackageName != (FName)0x0) {
        local_258.DataPtr = (wchar_t *)0x0;
        local_258._8_8_ = (ulonglong)(uint)local_228.Data.ArrayMax << 0x20;
        pFVar3 = FSoftObjectPath::ToString(&local_248,&local_228);
        if ((pFVar3->Data).ArrayNum == 0) {
          local_268.DataPtr = L"";
LAB_14b7a3506:
          sVar4 = wcslen(local_268.DataPtr);
          iVar11 = (int)sVar4;
        }
        else {
          local_268.DataPtr = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
          if ((FScriptContainerElement *)local_268.DataPtr != (FScriptContainerElement *)0x0)
          goto LAB_14b7a3506;
        }
        local_268.Size = iVar11;
        pUVar2 = Z_Construct_UClass_AActor_NoRegister();
        pUVar2 = StaticLoadClass(pUVar2,(UObject *)0x0,&local_268,&local_258,0,(UPackageMap *)0x0);
        if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_228.Data.AllocatorInstance.Data);
        }
        if (pUVar2 != (UClass *)0x0) goto LAB_14b7a35b6;
      }
      pUVar1 = UDS_LogManager::GetInst();
      if (pUVar1 == (UDS_LogManager *)0x0) goto LAB_14b7a37a8;
      pUVar1 = UDS_LogManager::GetInst();
      local_1b8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_1b8,"UDS_AirWalk_PowerJumpAbility::CreatePowerJumpGuideActor",0x37,Yes);
      TVar10 = Warning;
      pwVar13 = L"classPtr is nullptr.";
      uVar12 = 0x298;
    }
    else {
LAB_14b7a35b6:
      this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
      if (this_00 == (UWorld *)0x0) {
        pUVar1 = UDS_LogManager::GetInst();
        if (pUVar1 == (UDS_LogManager *)0x0) goto LAB_14b7a37a8;
        pUVar1 = UDS_LogManager::GetInst();
        local_1b8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_1b8,"UDS_AirWalk_PowerJumpAbility::CreatePowerJumpGuideActor",0x37,Yes);
        pwVar13 = L"world is nullptr.";
        uVar12 = 0x29f;
      }
      else {
        local_218.Rotation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        local_218.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
        local_218.Rotation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
        local_218.Rotation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_218.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
        local_218.Rotation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
        local_218.Translation.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
        local_218.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0]
        ;
        local_218.Translation.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
        local_218.Translation.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
        local_218.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2]
        ;
        local_218.Translation.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
        local_218.Scale3D.XY.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
        local_218.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
        local_218.Scale3D.XY.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
        local_218.Scale3D.ZW.m128d_f64[1]._0_4_ =
             SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
        local_218.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
        local_218.Scale3D.ZW.m128d_f64[1]._4_4_ =
             (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
        pFVar5 = FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_98);
        pAVar6 = (ADS_PowerJumpGuideActor *)UWorld::SpawnActor(this_00,pUVar2,&local_218,pFVar5);
        if (pAVar6 != (ADS_PowerJumpGuideActor *)0x0) {
          pUVar2 = Z_Construct_UClass_ADS_PowerJumpGuideActor_NoRegister();
          iVar11 = (int)pUVar2->_padding_;
          if ((*(int *)(pAVar6->_padding_ + 0x38) < iVar11) ||
             (pAVar8 = pAVar6,
             (longlong *)
             *(undefined1 **)(*(longlong *)(pAVar6->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
             &pUVar2->_padding_)) {
            pFVar3 = GetTypeName<ADS_PowerJumpGuideActor>(&local_228);
            if ((pFVar3->Data).ArrayNum == 0) {
              pwVar9 = L"";
            }
            else {
              pwVar9 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
            }
            pFVar3 = GetFullNameForCastLogError<AActor>((FString *)&local_268,(AActor *)pAVar6);
            if ((pFVar3->Data).ArrayNum != 0) {
              pwVar13 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
            }
                    /* WARNING: Subroutine does not return */
            CastLogError(pwVar13,pwVar9);
          }
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pAVar8 != (ADS_PowerJumpGuideActor *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pAVar8);
        }
        (this->PowerJumpGuideActor).field0_0x0.DebugPtr = pAVar8;
        if (local_98._64_8_ != 0) {
          plVar7 = (longlong *)(local_98 + 0x50);
          if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
            plVar7 = (longlong *)local_98._104_8_;
          }
          (**(code **)(*plVar7 + 0x10))();
        }
        pAVar8 = (this->PowerJumpGuideActor).field0_0x0.DebugPtr;
        if (pAVar8 != (ADS_PowerJumpGuideActor *)0x0) {
          ADS_PowerJumpGuideActor::ShowGuideSpline(pAVar8,false);
          ADS_PowerJumpGuideActor::ShowLandingDecal
                    ((this->PowerJumpGuideActor).field0_0x0.DebugPtr,false);
          goto LAB_14b7a37a8;
        }
        pUVar1 = UDS_LogManager::GetInst();
        if (pUVar1 == (UDS_LogManager *)0x0) goto LAB_14b7a37a8;
        pUVar1 = UDS_LogManager::GetInst();
        local_1b8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_1b8,"UDS_AirWalk_PowerJumpAbility::CreatePowerJumpGuideActor",0x37,Yes);
        pwVar13 = L"PowerJumpGuideActor is nullptr.";
        uVar12 = 0x2a7;
      }
      TVar10 = Display;
    }
  }
  UDS_LogManager::PrintLog(pUVar1,1,TVar10,local_1b8.Ptr,uVar12,pwVar13);
  if ((void *)local_1b8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_1b8._padding_);
  }
LAB_14b7a37a8:
  if (local_248.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// DoCharging @ 14b7a45a0

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

void __thiscall UDS_AirWalk_PowerJumpAbility::DoCharging(UDS_AirWalk_PowerJumpAbility *this)

{
  bool bVar1;
  UDS_AirWalkAbilityData *this_00;
  EDS_AbilityDeactivateType local_res8 [8];
  
  bVar1 = TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (((!bVar1) && ((this->PowerJumpCurve).field0_0x0.DebugPtr != (UCurveFloat *)0x0)) &&
     ((*(char *)((longlong)&this->_padding_ + 1) != '\x01' ||
      ((this->PowerJumpGuideActor).field0_0x0.DebugPtr != (ADS_PowerJumpGuideActor *)0x0)))) {
    this_00 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar1 = UDS_AirWalkAbilityData::DoPowerJumpCharging(this_00);
    if (bVar1) {
      this->bIsCharging = true;
      local_res8[0] = 0x30;
      UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
      return;
    }
  }
  local_res8[0] = Cancel;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
  return;
}

// DoFalling @ 14b7a4a80

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

void __thiscall UDS_AirWalk_PowerJumpAbility::DoFalling(UDS_AirWalk_PowerJumpAbility *this)

{
  longlong *this_00;
  UDS_MovementCore *this_01;
  UObject *pUVar1;
  float fVar2;
  EDS_StateTagType local_res8 [8];
  TVector<double>_u_0 local_38;
  undefined1 local_20 [16];
  double local_10;
  
  this_00 = &this->_padding_;
  this_01 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  UDS_MovementCore::GetVelocity(this_01,(TVector<double> *)&local_38._s_0);
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  (**(code **)(*(longlong *)pUVar1 + 0x448))(pUVar1,3);
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  fVar2 = (float)(**(code **)(*(longlong *)pUVar1 + 0x3d8))(pUVar1);
  this->DefaultGravityScale = fVar2;
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  fVar2 = (float)(**(code **)(*(longlong *)pUVar1 + 0x3c8))(pUVar1);
  this->DefaultTerminalVelocity = fVar2;
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  fVar2 = (float)(**(code **)(*(longlong *)pUVar1 + 0x3b0))(pUVar1);
  this->DefaultMaxAccelation = fVar2;
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  (**(code **)(*(longlong *)pUVar1 + 0x3e0))(pUVar1,this->DefaultGravityScale * this->TestScale);
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  (**(code **)(*(longlong *)pUVar1 + 0x3d0))(pUVar1,this->TestScale * this->DefaultTerminalVelocity)
  ;
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  (**(code **)(*(longlong *)pUVar1 + 0x3b8))(pUVar1,this->TestScale * this->DefaultMaxAccelation);
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  local_10 = local_38._s_0.Z * ___xmm_3fe99999a00000003fe99999a0000000;
  local_20._8_4_ = SUB84(local_38._s_0.Y * _UNK_152742b58,0);
  local_20._0_8_ = local_38._s_0.X * ___xmm_3fe99999a00000003fe99999a0000000;
  local_20._12_4_ = (int)((ulonglong)(local_38._s_0.Y * _UNK_152742b58) >> 0x20);
  (**(code **)(*(longlong *)pUVar1 + 0x398))(pUVar1,local_20);
  local_res8[0] = AirWalk_FallingHigher;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  return;
}

// DoPowerJump @ 14b7a4da0

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

void __thiscall UDS_AirWalk_PowerJumpAbility::DoPowerJump(UDS_AirWalk_PowerJumpAbility *this)

{
  ADS_PowerJumpGuideActor *this_00;
  bool bVar1;
  UDS_AirWalkAbilityData *this_01;
  UObject *pUVar2;
  EDS_AbilityDeactivateType local_res8 [8];
  
  bVar1 = TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (((!bVar1) && ((this->PowerJumpCurve).field0_0x0.DebugPtr != (UCurveFloat *)0x0)) &&
     ((*(char *)((longlong)&this->_padding_ + 1) != '\x01' ||
      ((this->PowerJumpGuideActor).field0_0x0.DebugPtr != (ADS_PowerJumpGuideActor *)0x0)))) {
    this_01 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar1 = UDS_AirWalkAbilityData::DoPowerJump(this_01);
    if (bVar1) {
      pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      (**(code **)(*(longlong *)pUVar2 + 0x448))(pUVar2,5);
      local_res8[0] = 0x31;
      UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
      UpdatePlayerRotation(this);
      if (*(char *)((longlong)&this->_padding_ + 1) != '\x01') {
        return;
      }
      this_00 = (this->PowerJumpGuideActor).field0_0x0.DebugPtr;
      if (this_00 == (ADS_PowerJumpGuideActor *)0x0) {
        return;
      }
      ADS_PowerJumpGuideActor::ShowGuideSpline(this_00,false);
      return;
    }
  }
  local_res8[0] = Cancel;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
  return;
}

// DrawLandingDecal @ 14b7a53e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UDS_AirWalk_PowerJumpAbility::DrawLandingDecal(UDS_AirWalk_PowerJumpAbility *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  ADS_PowerJumpGuideActor *pAVar6;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  ECollisionChannel EVar12;
  UDS_LogManager *pUVar13;
  AActor *pAVar14;
  longlong lVar15;
  UDS_MovementCore *this_00;
  TRotator<double> *this_01;
  UObject *pUVar16;
  FCollisionShape *pFVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  double dVar23;
  double dVar24;
  float fVar25;
  undefined1 auStackY_538 [32];
  FWeakObjectPtr local_4e8;
  FScriptContainerElement *local_4e0;
  TVector<double>_u_0 local_4d8;
  UWorld *local_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined4 uStack_4a0;
  undefined1 uStack_49c;
  undefined2 uStack_49b;
  undefined1 uStack_499;
  TVector<double>_u_0 local_498;
  TVector<double>_u_0 local_480;
  undefined1 local_468 [16];
  TQuat<double> local_458;
  TRotator<double> local_438;
  FHitResult local_418;
  FCollisionQueryParams local_318;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_538;
  if ((this->PowerJumpGuideActor).field0_0x0.DebugPtr != (ADS_PowerJumpGuideActor *)0x0) {
    iVar4 = (this->PowerJumpRoute).ArrayNum;
    uVar18 = iVar4 - 1;
    if (-1 < (int)uVar18) {
      local_4c0 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
      if (local_4c0 == (UWorld *)0x0) {
        pUVar13 = UDS_LogManager::GetInst();
        if (pUVar13 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar13 = UDS_LogManager::GetInst();
        local_288._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_288,"UDS_AirWalk_PowerJumpAbility::DrawLandingDecal",0x2e,Yes);
        UDS_LogManager::PrintLog(pUVar13,1,Display,local_288.Ptr,0x242,L"world is nullptr.");
        local_318.IgnoreComponents.AllocatorInstance.SecondaryData =
             (ForElementType<unsigned_int>)local_288._padding_;
      }
      else {
        (**(code **)(*(longlong *)this->_padding_ + 0x160))();
        bVar9 = TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UCapsuleComponent,FWeakObjectPtr> *)&local_4e8,
                           (void *)0x0);
        if (bVar9) {
          pUVar13 = UDS_LogManager::GetInst();
          if (pUVar13 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar13 = UDS_LogManager::GetInst();
          local_168._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_168,"UDS_AirWalk_PowerJumpAbility::DrawLandingDecal",0x2e,Yes);
          UDS_LogManager::PrintLog(pUVar13,1,Display,local_168.Ptr,0x249,L"capsuleComp is nullptr.")
          ;
          local_318.IgnoreComponents.AllocatorInstance.SecondaryData =
               (ForElementType<unsigned_int>)local_168._padding_;
        }
        else {
          memset(&local_418,0,0x100);
          uStack_4a0 = 0xffffffff;
          local_418.Time = 1.0;
          local_4b8 = 0;
          uStack_4b0 = 0;
          uStack_49b = 0;
          local_418.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
          local_418.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
          local_418.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
          local_418.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
          uStack_499 = 0;
          local_4a8 = 0;
          uStack_49c = 0;
          local_418.HitObjectHandle.InstanceIndex = -1;
          local_418.HitObjectHandle.ResolutionStatus = Invalid;
          local_418.HitObjectHandle._29_3_ = 0;
          local_418.MyItem = -1;
          local_418.HitObjectHandle.ManagerInterface.InterfaceInstance =
               (IActorInstanceManagerInterface *)0x0;
          FCollisionQueryParams::FCollisionQueryParams(&local_318);
          pAVar14 = (AActor *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          FCollisionQueryParams::AddIgnoredActor(&local_318,pAVar14);
          uVar19 = 0;
          uVar10 = uVar19;
          if ((int)uVar18 < (this->PowerJumpRoute).ArrayNum) {
            uVar10 = ~uVar18 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          uVar10 = iVar4 - 2;
          local_4e0 = (this->PowerJumpRoute).AllocatorInstance.Data;
          lVar20 = (longlong)(int)uVar18;
          uVar11 = uVar19;
          if ((int)uVar10 < (this->PowerJumpRoute).ArrayNum) {
            uVar11 = ~uVar10 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          lVar15 = (longlong)(int)uVar10;
          pFVar5 = (this->PowerJumpRoute).AllocatorInstance.Data;
          local_4d8._s_0.X =
               *(double *)(local_4e0 + lVar20 * 0x18) - *(double *)(pFVar5 + lVar15 * 0x18);
          local_4d8._s_0.Y =
               *(double *)(local_4e0 + lVar20 * 0x18 + 8) - *(double *)(pFVar5 + lVar15 * 0x18 + 8);
          local_4d8._s_0.Z =
               *(double *)(local_4e0 + lVar20 * 0x18 + 0x10) -
               *(double *)(pFVar5 + lVar15 * 0x18 + 0x10);
          UE::Math::TVector<double>::Normalize
                    ((TVector<double> *)&local_4d8._s_0,__real_3e45798ee0000000);
          pAVar6 = (this->PowerJumpGuideActor).field0_0x0.DebugPtr;
          fVar25 = this->AngleInDegrees + __real_41f00000;
          fVar1 = pAVar6->LandingDecalOffsetRatio_Min;
          fVar2 = pAVar6->LandingDecalOffsetRatio_Max;
          fVar3 = this->PowerJumpPitchMax;
          if ((int)uVar18 < (this->PowerJumpRoute).ArrayNum) {
            uVar19 = ~uVar18 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar5 = (this->PowerJumpRoute).AllocatorInstance.Data;
          dVar23 = (double)((fVar25 / fVar3) * (fVar2 - fVar1) + fVar1);
          dVar8 = local_4d8._s_0.X * dVar23 + *(double *)(pFVar5 + lVar20 * 0x18);
          dVar24 = local_4d8._s_0.Z * dVar23 + *(double *)(pFVar5 + lVar20 * 0x18 + 0x10);
          dVar23 = local_4d8._s_0.Y * dVar23 + *(double *)(pFVar5 + lVar20 * 0x18 + 8);
          uVar21 = SUB84(dVar23,0);
          uVar22 = (undefined4)((ulonglong)dVar23 >> 0x20);
          local_480._8_4_ = uVar21;
          local_480._0_8_ = dVar8;
          local_480._12_4_ = uVar22;
          local_498._8_4_ = uVar21;
          local_498._0_8_ = dVar8;
          local_498._12_4_ = uVar22;
          local_480._s_0.Z = dVar24 + __real_40f86a0000000000;
          local_498._s_0.Z = dVar24 + __real_c0f86a0000000000;
          this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          this_01 = UDS_MovementCore::GetActorRotation(this_00,&local_438);
          UE::Math::TRotator<double>::Quaternion(this_01,&local_458);
          pUVar16 = FWeakObjectPtr::Get(&local_4e8);
          pFVar17 = (FCollisionShape *)
                    (**(code **)(*(longlong *)pUVar16 + 0x8b8))(pUVar16,local_468,0);
          pUVar16 = FWeakObjectPtr::Get(&local_4e8);
          EVar12 = (**(code **)(*(longlong *)pUVar16 + 0x5f0))(pUVar16);
          bVar9 = UWorld::SweepSingleByChannel
                            (local_4c0,&local_418,(TVector<double> *)&local_480._s_0,
                             (TVector<double> *)&local_498._s_0,&local_458,EVar12,pFVar17,&local_318
                             ,&FCollisionResponseParams::DefaultResponseParam);
          if (bVar9) {
            ADS_PowerJumpGuideActor::SetLandingDecalPoint
                      ((this->PowerJumpGuideActor).field0_0x0.DebugPtr,
                       (TVector<double> *)&local_418.ImpactPoint);
          }
          ADS_PowerJumpGuideActor::ShowLandingDecal
                    ((this->PowerJumpGuideActor).field0_0x0.DebugPtr,bVar9);
          if (local_318.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_int>)0x0) {
            FMemory::Free((void *)local_318.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
          }
        }
      }
      if (local_318.IgnoreComponents.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_318.IgnoreComponents.AllocatorInstance.SecondaryData);
      }
    }
  }
  return;
}

// DrawPowerJumpMoveRoute @ 14b7a5930

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_AirWalk_PowerJumpAbility::DrawPowerJumpMoveRoute(UDS_AirWalk_PowerJumpAbility *this)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  TVector<double> *pTVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  ADS_PowerJumpGuideActor *this_00;
  code *pcVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  TVector<double> *pTVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  TVector<double>_u_0 local_78;
  TVector<double> local_60 [3];
  
  fVar8 = __real_3dcccccd;
  pTVar1 = &this->PowerJumpRoute;
  if ((this->PowerJumpRoute).ArrayNum == 0xb) {
    lVar13 = 0x18;
    iVar14 = 1;
    pTVar2 = &this->ActorLocationWhenStart;
    dVar17 = (this->ActorLocationWhenStart).field0_0x0._s_0.Y;
    dVar16 = (this->ActorLocationWhenStart).field0_0x0._s_0.Z;
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    *(double *)pFVar3 = (pTVar2->field0_0x0)._s_0.X;
    *(double *)(pFVar3 + 8) = dVar17;
    *(double *)(pFVar3 + 0x10) = dVar16;
    do {
      pTVar11 = GetPowerJumpDestination(this,local_60,(float)iVar14 * fVar8);
      dVar17 = (pTVar11->field0_0x0)._s_0.X;
      dVar6 = (pTVar11->field0_0x0)._s_0.Y;
      dVar16 = (pTVar11->field0_0x0)._s_0.Z;
      if (((this->PowerJumpRoute).ArrayNum <= iVar14) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (pTVar1->AllocatorInstance).Data;
      iVar14 = iVar14 + 1;
      pFVar3 = pFVar4 + lVar13;
      *(double *)pFVar3 = dVar17;
      *(double *)(pFVar3 + 8) = dVar6;
      *(double *)(pFVar4 + lVar13 + 0x10) = dVar16;
      fVar7 = __real_40a00000;
      lVar13 = lVar13 + 0x18;
    } while (iVar14 < 0xb);
    dVar17 = (double)this->PowerJumpForwardSpeed;
    dVar16 = (double)this->PowerJumpMoveTime;
    local_78._s_0.X =
         dVar17 * (this->CameraForwardVectorWhenStart).field0_0x0._s_0.X * dVar16 +
         (pTVar2->field0_0x0)._s_0.X;
    local_78._s_0.Y =
         dVar17 * (this->CameraForwardVectorWhenStart).field0_0x0._s_0.Y * dVar16 +
         (this->ActorLocationWhenStart).field0_0x0._s_0.Y;
    local_78._s_0.Z =
         dVar17 * (this->CameraForwardVectorWhenStart).field0_0x0._s_0.Z * dVar16 +
         (this->ActorLocationWhenStart).field0_0x0._s_0.Z;
    uVar12 = 0;
    do {
      uVar15 = uVar12 + 1;
      uVar10 = 0;
      if ((int)uVar15 < (this->PowerJumpRoute).ArrayNum) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      if (((this->PowerJumpRoute).ArrayNum <= (int)uVar12) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      DS_Util::ShowSyncLine
                ((TVector<double> *)((pTVar1->AllocatorInstance).Data + (ulonglong)uVar12 * 0x18),
                 (TVector<double> *)(pFVar3 + (longlong)(int)uVar15 * 0x18),&FColor::Red,false,fVar8
                 ,'\0',fVar7);
      DS_Util::ShowSyncLine
                (pTVar2,(TVector<double> *)&local_78._s_0,&FColor::Green,false,fVar8,'\0',fVar7);
      uVar12 = uVar15;
    } while ((int)uVar15 < 10);
    this_00 = (this->PowerJumpGuideActor).field0_0x0.DebugPtr;
    if (this_00 != (ADS_PowerJumpGuideActor *)0x0) {
      AActor::SetActorLocation((AActor *)this_00,pTVar2,false,(FHitResult *)0x0,None);
      ADS_PowerJumpGuideActor::SetGuideSplinePoint
                ((this->PowerJumpGuideActor).field0_0x0.DebugPtr,pTVar1);
      ADS_PowerJumpGuideActor::ShowGuideSpline((this->PowerJumpGuideActor).field0_0x0.DebugPtr,true)
      ;
    }
  }
  return;
}

// EndCharging @ 14b7a5e40

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

void __thiscall UDS_AirWalk_PowerJumpAbility::EndCharging(UDS_AirWalk_PowerJumpAbility *this)

{
  ADS_PowerJumpGuideActor *this_00;
  bool bVar1;
  UDS_AirWalkAbilityData *pUVar2;
  FDS_AirWalkStepInfo *pFVar3;
  UObject *pUVar4;
  float fVar5;
  EDS_AbilityDeactivateType local_res8 [8];
  
  this->bIsCharging = false;
  local_res8[0] = 0x30;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  pUVar2 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pFVar3 = UDS_AirWalkAbilityData::GetAirWalkStepInfo(pUVar2,PowerJumpCharging);
  fVar5 = pFVar3->ChargingTimeMax;
  if (0.0 < fVar5) {
    if (pFVar3->ChargingTimeMin <= this->ChargingTime) {
      fVar5 = this->ChargingTime / fVar5;
      if (__real_3f800000 <= fVar5) {
        fVar5 = __real_3f800000;
      }
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      this->ChargingTimeRatio = fVar5;
    }
    else {
      fVar5 = pFVar3->ChargingTimeMin / fVar5;
      if (__real_3f800000 <= fVar5) {
        fVar5 = __real_3f800000;
      }
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      this->ChargingTimeRatio = fVar5;
    }
  }
  bVar1 = TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (((!bVar1) && ((this->PowerJumpCurve).field0_0x0.DebugPtr != (UCurveFloat *)0x0)) &&
     ((*(char *)((longlong)&this->_padding_ + 1) != '\x01' ||
      ((this->PowerJumpGuideActor).field0_0x0.DebugPtr != (ADS_PowerJumpGuideActor *)0x0)))) {
    pUVar2 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    bVar1 = UDS_AirWalkAbilityData::DoPowerJump(pUVar2);
    if (bVar1) {
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      (**(code **)(*(longlong *)pUVar4 + 0x448))(pUVar4,5);
      local_res8[0] = 0x31;
      UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
      UpdatePlayerRotation(this);
      if (*(char *)((longlong)&this->_padding_ + 1) != '\x01') {
        return;
      }
      this_00 = (this->PowerJumpGuideActor).field0_0x0.DebugPtr;
      if (this_00 == (ADS_PowerJumpGuideActor *)0x0) {
        return;
      }
      ADS_PowerJumpGuideActor::ShowGuideSpline(this_00,false);
      return;
    }
  }
  local_res8[0] = Cancel;
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
  return;
}

// GetPowerJumpDestination @ 14b7acc50

TVector<double> * __thiscall
UDS_AirWalk_PowerJumpAbility::GetPowerJumpDestination
          (UDS_AirWalk_PowerJumpAbility *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  UDS_AirWalkAbilityData *this_00;
  FDS_AirWalkStepInfo *pFVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  fVar8 = UCurveFloat::GetFloatValue((this->PowerJumpCurve).field0_0x0.DebugPtr,param_1);
  this_00 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pFVar7 = UDS_AirWalkAbilityData::GetAirWalkStepInfo(this_00,PowerJumpCharging);
  dVar11 = (double)this->PowerJumpForwardSpeed;
  dVar9 = (double)(this->PowerJumpHeightCorrection * pFVar7->AirMoveHeight *
                  fVar8 * this->ChargingTimeRatio);
  dVar1 = (this->CameraForwardVectorWhenStart).field0_0x0._s_0.Y;
  dVar2 = (this->CameraForwardVectorWhenStart).field0_0x0._s_0.Z;
  dVar10 = (double)(param_1 * this->PowerJumpMoveTime);
  dVar3 = (this->ActorLocationWhenStart).field0_0x0._s_0.Y;
  dVar4 = (this->ActorLocationWhenStart).field0_0x0._s_0.Z;
  dVar5 = (this->CameraUpVectorWhenStart).field0_0x0._s_0.Y;
  dVar6 = (this->CameraUpVectorWhenStart).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       dVar11 * (this->CameraForwardVectorWhenStart).field0_0x0._s_0.X * dVar10 +
       (this->ActorLocationWhenStart).field0_0x0._s_0.X +
       dVar9 * (this->CameraUpVectorWhenStart).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar11 * dVar1 * dVar10 + dVar3 + dVar9 * dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar11 * dVar2 * dVar10 + dVar4 + dVar9 * dVar6;
  return __return_storage_ptr__;
}

// IsValidReferencedPtr @ 14b7b26f0

bool __thiscall
UDS_AirWalk_PowerJumpAbility::IsValidReferencedPtr(UDS_AirWalk_PowerJumpAbility *this)

{
  bool bVar1;
  
  bVar1 = TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if ((!bVar1) && ((this->PowerJumpCurve).field0_0x0.DebugPtr != (UCurveFloat *)0x0)) {
    if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
      return (this->PowerJumpGuideActor).field0_0x0.DebugPtr != (ADS_PowerJumpGuideActor *)0x0;
    }
    return true;
  }
  return false;
}

// OnAbilityRetryActivate @ 14b7b4050

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
UDS_AirWalk_PowerJumpAbility::OnAbilityRetryActivate(UDS_AirWalk_PowerJumpAbility *this)

{
  bool bVar1;
  UObject *pUVar2;
  EDS_AbilityDeactivateType local_res10 [8];
  FWeakObjectPtr local_res18 [2];
  
  UDS_GameplayAbility::GetContextData<UDS_AirWalkAbilityContext>((UDS_GameplayAbility *)this);
  bVar1 = FWeakObjectPtr::IsValid(local_res18);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res18);
    if (*(char *)(pUVar2 + 1) == '*') {
      local_res10[0] = Cancel;
      UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res10);
    }
    else if ((*(char *)(pUVar2 + 1) == '/') && (this->bIsCharging == true)) {
      EndCharging(this);
      return;
    }
  }
  return;
}

// OnCanActivate @ 14b7b57c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_AirWalk_PowerJumpAbility::OnCanActivate(UDS_AirWalk_PowerJumpAbility *this)

{
  bool bVar1;
  UObject *pUVar2;
  UCurveFloat *pUVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_178 [32];
  FName local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = UDS_AirWalk_BaseAbility::OnCanActivate((UDS_AirWalk_BaseAbility *)this);
  if ((((bVar1) &&
       (pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_),
       pUVar2[5].field_0x10 == '\0')) && (pUVar2[5].field_0x11 == '\0')) &&
     (pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_),
     pUVar2[5].field_0x13 != '\x01')) {
    if ((this->PowerJumpCurve).field0_0x0.DebugPtr == (UCurveFloat *)0x0) {
      ::FName::FName(local_148,L"/Game/Datas/Curve/AirWalk_PowerJump");
      pUVar3 = DS_Util::LoadObjFromPath<UCurveFloat>(local_148);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UCurveFloat *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar3);
      }
      (this->PowerJumpCurve).field0_0x0.DebugPtr = pUVar3;
    }
    if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
      if ((this->PowerJumpGuideActor).field0_0x0.DebugPtr == (ADS_PowerJumpGuideActor *)0x0) {
        CreatePowerJumpGuideActor(this);
      }
      if ((this->PowerJumpRoute).ArrayNum == 0) {
        TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumZeroed
                  (&this->PowerJumpRoute,0xb,Default);
      }
    }
    bVar1 = TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (((!bVar1) && ((this->PowerJumpCurve).field0_0x0.DebugPtr != (UCurveFloat *)0x0)) &&
       ((*(char *)((longlong)&this->_padding_ + 1) != '\x01' ||
        ((this->PowerJumpGuideActor).field0_0x0.DebugPtr != (ADS_PowerJumpGuideActor *)0x0)))) {
      return true;
    }
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_AirWalk_PowerJumpAbility::OnCanActivate",0x2b,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_138.Ptr,0x3f,
                 L"Ability terminated abnormally due to data issues.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  return false;
}

// OnChangedCharState @ 14b7b6880

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

void __thiscall
UDS_AirWalk_PowerJumpAbility::OnChangedCharState
          (UDS_AirWalk_PowerJumpAbility *this,
          TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,FDS_ChangedCharStateInfo *param_2
          )

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_CharStateData *pUVar3;
  FWeakObjectPtr local_res10 [2];
  undefined1 auStackY_1a8 [32];
  EDS_AbilityDeactivateType local_178 [8];
  EDS_CharState local_170;
  FDS_ChangedCharStateInfo local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  local_168.StateTag.TagName = (param_2->StateTag).TagName;
  local_168.bIsStateTagOn = param_2->bIsStateTagOn;
  local_168._9_7_ = *(undefined7 *)&param_2->field_0x9;
  local_168.AddedCharState = param_2->AddedCharState;
  local_168.RemovedCharState = param_2->RemovedCharState;
  local_168.AddedCharDetailState = param_2->AddedCharDetailState;
  local_168.RemovedCharDetailState = param_2->RemovedCharDetailState;
  local_res10[0] = param_1.WeakPtr;
  UDS_GameplayAbility::OnChangedCharState((UDS_GameplayAbility *)this,param_1,&local_168);
  bVar1 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)local_res10,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_AirWalk_PowerJumpAbility::OnChangedCharState",0x30,Yes);
      UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0xd2,L"InCharStateData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
    local_170 = Skill;
    bVar1 = UDS_CharStateData::HasCharState(pUVar3,&local_170);
    if (!bVar1) {
      pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
      local_170 = Avoid;
      bVar1 = UDS_CharStateData::HasCharState(pUVar3,&local_170);
      if (!bVar1) {
        pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
        bVar1 = UDS_CharStateData::HasControlAbnormalState(pUVar3);
        if (!bVar1) {
          pUVar3 = (UDS_CharStateData *)FWeakObjectPtr::Get(local_res10);
          local_170 = CONCAT44(local_170._4_4_,0x1c);
          bVar1 = UDS_CharStateData::HasCharDetailState(pUVar3,(EDS_CharDetailState *)&local_170);
          if (!bVar1) {
            return;
          }
        }
      }
    }
    local_178[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_178);
  }
  return;
}

// OnDeactivateAbility @ 14b7b7fa0

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
UDS_AirWalk_PowerJumpAbility::OnDeactivateAbility(UDS_AirWalk_PowerJumpAbility *this,bool *param_1)

{
  longlong *this_00;
  int iVar1;
  UObject *pUVar2;
  UDS_AirWalkAbilityData *this_01;
  UDS_MovementCore *this_02;
  double dVar3;
  EDS_StateTagType local_res8 [8];
  TVector<double>_u_0 local_38;
  undefined1 local_20 [16];
  double local_10;
  
  UDS_AirWalk_BaseAbility::OnDeactivateAbility((UDS_AirWalk_BaseAbility *)this,param_1);
  local_res8[0] = AirWalk_PowerJumpCharge;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  local_res8[0] = AirWalk_PowerJump;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (pUVar2[4].field_0x20 != '\x05') {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    if (pUVar2[4].field_0x20 != '\x06') goto LAB_14b7b8016;
  }
  this_01 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_AirWalkAbilityData::DoNextStep(this_01,Ready);
LAB_14b7b8016:
  this_00 = &this->_padding_;
  pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
  iVar1 = (**(code **)(*(longlong *)pUVar2 + 0x438))(pUVar2);
  if (iVar1 == 5) {
    DoFalling(this);
  }
  else {
    this_02 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    UDS_MovementCore::GetVelocity(this_02,(TVector<double> *)&local_38._s_0);
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    dVar3 = (double)this->testBreaking;
    local_10 = dVar3 * local_38._s_0.Z;
    local_20._8_4_ = SUB84(local_38._s_0.Y * dVar3,0);
    local_20._0_8_ = local_38._s_0.X * dVar3;
    local_20._12_4_ = (int)((ulonglong)(local_38._s_0.Y * dVar3) >> 0x20);
    (**(code **)(*(longlong *)pUVar2 + 0x398))(pUVar2,local_20);
  }
  if (this->bIsCharging == false) {
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    (**(code **)(*(longlong *)pUVar2 + 0x3e0))(pUVar2,this->DefaultGravityScale);
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    (**(code **)(*(longlong *)pUVar2 + 0x3b8))(pUVar2,this->DefaultMaxAccelation);
    pUVar2 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00);
    (**(code **)(*(longlong *)pUVar2 + 0x3d0))(pUVar2,this->DefaultTerminalVelocity);
  }
  return;
}

// OnLandEnter @ 14b7b92b0

void __thiscall UDS_AirWalk_PowerJumpAbility::OnLandEnter(UDS_AirWalk_PowerJumpAbility *this)

{
  return;
}

// OnPostActivateAbility @ 14b7bb250

void __thiscall
UDS_AirWalk_PowerJumpAbility::OnPostActivateAbility(UDS_AirWalk_PowerJumpAbility *this)

{
  float fVar1;
  
  UDS_AirWalk_BaseAbility::OnPostActivateAbility((UDS_AirWalk_BaseAbility *)this);
  if (this->bIsInitByCommonDataTable == false) {
    this->bIsInitByCommonDataTable = true;
    fVar1 = DS_CommonDataHelper::PowerJumpDirDegreeOffset();
    this->PowerJumpDirDegreesOffset = fVar1;
    fVar1 = DS_CommonDataHelper::PowerJumpPitchMin();
    this->PowerJumpPitchMin = fVar1;
    fVar1 = DS_CommonDataHelper::PowerJumpPitchMax();
    this->PowerJumpPitchMax = fVar1;
  }
  DoCharging(this);
  return;
}

// OnTickComponent @ 14b7bd5b0

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
UDS_AirWalk_PowerJumpAbility::OnTickComponent(UDS_AirWalk_PowerJumpAbility *this,float param_1)

{
  float *pfVar1;
  bool bVar2;
  UDS_AirWalkAbilityData *pUVar3;
  FDS_AirWalkStepInfo *pFVar4;
  float fVar5;
  EDS_AbilityDeactivateType local_res8 [8];
  
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  bVar2 = TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr> *)&this->_padding_,
                     (void *)0x0);
  if (((bVar2) || ((this->PowerJumpCurve).field0_0x0.DebugPtr == (UCurveFloat *)0x0)) ||
     ((*(char *)((longlong)&this->_padding_ + 1) == '\x01' &&
      ((this->PowerJumpGuideActor).field0_0x0.DebugPtr == (ADS_PowerJumpGuideActor *)0x0)))) {
    local_res8[0] = Cancel;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
  }
  else {
    if (this->bIsCharging != true) {
      PowerJumpProcess(this,param_1);
      return;
    }
    pfVar1 = &this->ChargingTime;
    *pfVar1 = param_1 + *pfVar1;
    pUVar3 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pFVar4 = UDS_AirWalkAbilityData::GetAirWalkStepInfo(pUVar3,PowerJumpCharging);
    if (0.0 < pFVar4->ChargingTimeMax) {
      fVar5 = *pfVar1 / pFVar4->ChargingTimeMax;
      if (__real_3f800000 <= fVar5) {
        fVar5 = __real_3f800000;
      }
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
      this->ChargingTimeRatio = fVar5;
    }
    pUVar3 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pFVar4 = UDS_AirWalkAbilityData::GetAirWalkStepInfo(pUVar3,PowerJump);
    this->PowerJumpMoveTime = pFVar4->AirWalkTime * this->ChargingTimeRatio;
    UpdatePowerJumpDirectionAndSpeed(this);
    UpdatePlayerRotation(this);
    if ((*(char *)((longlong)&this->_padding_ + 1) == '\x01') &&
       ((this->PowerJumpGuideActor).field0_0x0.DebugPtr != (ADS_PowerJumpGuideActor *)0x0)) {
      DrawPowerJumpMoveRoute(this);
      DrawLandingDecal(this);
    }
    pUVar3 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    pFVar4 = UDS_AirWalkAbilityData::GetAirWalkStepInfo(pUVar3,PowerJumpCharging);
    fVar5 = pFVar4->ChargingTimeMax;
    if (fVar5 < *pfVar1 || fVar5 == *pfVar1) {
      this->ChargingTime = fVar5;
      EndCharging(this);
      return;
    }
  }
  return;
}

// PowerJumpProcess @ 14b7bf160

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
UDS_AirWalk_PowerJumpAbility::PowerJumpProcess(UDS_AirWalk_PowerJumpAbility *this,float param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  UDS_AirWalkAbilityData *this_00;
  UDS_MovementCore *this_01;
  TVector<double> *pTVar7;
  undefined4 in_XMM1_Db;
  double dVar8;
  EDS_AbilityDeactivateType local_res8 [8];
  TVector<double>_u_0 local_98;
  double local_80;
  double local_78;
  double local_70;
  TVector<double> local_68 [4];
  
  pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if ((pUVar6[4].field_0x20 != '\x06') || (this->PowerJumpMoveTime <= 0.0)) {
LAB_14b7bf199:
    local_res8[0] = Success;
    UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res8);
  }
  else {
    this_00 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    dVar1 = UDS_AirWalkAbilityData::GetElapsedTimeSinceStepStart(this_00);
    if ((this->PowerJumpMoveTime <= (float)dVar1) || (this->bIsCrash != false)) {
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      iVar5 = (**(code **)(*(longlong *)pUVar6 + 0x438))(pUVar6);
      if (iVar5 == 5) {
        DoFalling(this);
      }
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      if ((pUVar6[5].field_0x10 == '\0') && (pUVar6[5].field_0x11 == '\0')) goto LAB_14b7bf199;
    }
    else {
      GetPowerJumpDestination
                (this,(TVector<double> *)&local_98._s_0,(float)dVar1 / this->PowerJumpMoveTime);
      this_01 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pTVar7 = UDS_MovementCore::GetActorLocation(this_01,local_68);
      dVar1 = local_98._s_0.X - (pTVar7->field0_0x0)._s_0.X;
      dVar2 = local_98._s_0.Y - (pTVar7->field0_0x0)._s_0.Y;
      dVar3 = local_98._s_0.Z - (pTVar7->field0_0x0)._s_0.Z;
      local_70 = __real_3ff0000000000000 / (double)param_1;
      local_80 = local_70 * dVar1;
      local_78 = local_70 * dVar2;
      local_70 = local_70 * dVar3;
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      (**(code **)(*(longlong *)pUVar6 + 0x3a0))(pUVar6,&local_80);
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      (**(code **)(*(longlong *)pUVar6 + 0x2c8))(pUVar6,&local_80,CONCAT44(in_XMM1_Db,param_1),1);
      dVar8 = dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3;
      local_98._s_0.X = dVar1;
      local_98._s_0.Y = dVar2;
      local_98._s_0.Z = dVar3;
      if (dVar8 != __real_3ff0000000000000) {
        if (__real_3e45798ee0000000 <= dVar8) {
          dVar8 = __real_3ff0000000000000 / SQRT(dVar8);
          local_98._s_0.X = dVar1 * dVar8;
          local_98._s_0.Y = dVar2 * dVar8;
          local_98._s_0.Z = dVar3 * dVar8;
        }
        else {
          local_98._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_98._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_98._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
      }
      bVar4 = CheckCrash(this,(TVector<double> *)&local_98._s_0);
      if (bVar4) {
        this->bIsCrash = true;
      }
    }
    if ((*(char *)((longlong)&this->_padding_ + 1) == '\x01') &&
       ((this->PowerJumpGuideActor).field0_0x0.DebugPtr != (ADS_PowerJumpGuideActor *)0x0)) {
      DrawLandingDecal(this);
    }
  }
  return;
}

// UpdateChargingTimeRatio @ 14b7c8640

void __thiscall
UDS_AirWalk_PowerJumpAbility::UpdateChargingTimeRatio
          (UDS_AirWalk_PowerJumpAbility *this,bool param_1)

{
  UDS_AirWalkAbilityData *this_00;
  FDS_AirWalkStepInfo *pFVar1;
  float fVar2;
  
  this_00 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pFVar1 = UDS_AirWalkAbilityData::GetAirWalkStepInfo(this_00,PowerJumpCharging);
  if (0.0 < pFVar1->ChargingTimeMax) {
    if ((!param_1) ||
       (fVar2 = pFVar1->ChargingTimeMin, fVar2 < this->ChargingTime || fVar2 == this->ChargingTime))
    {
      fVar2 = this->ChargingTime;
    }
    fVar2 = fVar2 / pFVar1->ChargingTimeMax;
    if (__real_3f800000 <= fVar2) {
      fVar2 = __real_3f800000;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    this->ChargingTimeRatio = fVar2;
  }
  return;
}

// UpdatePlayerRotation @ 14b7c9980

void __thiscall
UDS_AirWalk_PowerJumpAbility::UpdatePlayerRotation(UDS_AirWalk_PowerJumpAbility *this)

{
  UObject *pUVar1;
  double dVar2;
  TVector<double>_u_0 local_38;
  TRotator<double> local_20;
  
  local_38._s_0.X = (this->CameraForwardVectorWhenStart).field0_0x0._s_0.X;
  local_38._s_0.Y = (this->CameraForwardVectorWhenStart).field0_0x0._s_0.Y;
  dVar2 = local_38._s_0.Y * local_38._s_0.Y + local_38._s_0.X * local_38._s_0.X;
  if (dVar2 == __real_3ff0000000000000) {
    if ((this->CameraForwardVectorWhenStart).field0_0x0._s_0.Z == 0.0) {
      local_38._s_0.X = (this->CameraForwardVectorWhenStart).field0_0x0._s_0.X;
      local_38._s_0.Y = (this->CameraForwardVectorWhenStart).field0_0x0._s_0.Y;
      local_38._s_0.Z = (this->CameraForwardVectorWhenStart).field0_0x0._s_0.Z;
      goto LAB_14b7c9a33;
    }
  }
  else {
    if (dVar2 < __real_3e45798ee0000000) {
      local_38._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_38._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_38._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      goto LAB_14b7c9a33;
    }
    local_38._s_0.X = local_38._s_0.X * (__real_3ff0000000000000 / SQRT(dVar2));
    local_38._s_0.Y = local_38._s_0.Y * (__real_3ff0000000000000 / SQRT(dVar2));
  }
  local_38._s_0.Z = 0.0;
LAB_14b7c9a33:
  UE::Math::TVector<double>::ToOrientationRotator((TVector<double> *)&local_38._s_0,&local_20);
  pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (**(code **)(*(longlong *)pUVar1 + 0x370))(pUVar1,&local_20);
  return;
}

// UpdatePowerJumpDirectionAndSpeed @ 14b7c9a70

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

void __thiscall
UDS_AirWalk_PowerJumpAbility::UpdatePowerJumpDirectionAndSpeed(UDS_AirWalk_PowerJumpAbility *this)

{
  double dVar1;
  undefined1 auVar2 [16];
  APlayerCameraManager *pAVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  UWorld *this_00;
  UDS_LogManager *pUVar11;
  APlayerController *pAVar12;
  UObject *pUVar13;
  TVector<double>_u_0 *pTVar14;
  UDS_MovementCore *this_01;
  TVector<double> *pTVar15;
  UDS_AirWalkAbilityData *this_02;
  FDS_AirWalkStepInfo *pFVar16;
  float fVar17;
  float fVar18;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auStackY_258 [32];
  uint uVar27;
  wchar_t *pwVar28;
  APlayerCameraManager *local_228;
  FWeakObjectPtr local_220;
  TVector<double>_u_0 local_218;
  TVector<double> local_1f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1d8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_258;
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  if (this_00 == (UWorld *)0x0) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar11 = UDS_LogManager::GetInst();
    local_1d8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_1d8,"UDS_AirWalk_PowerJumpAbility::UpdatePowerJumpDirectionAndSpeed",0x3e,Yes)
    ;
    pwVar28 = L"world is nullptr.";
    uVar27 = 0x1c9;
LAB_14b7c9b01:
    UDS_LogManager::PrintLog(pUVar11,1,Display,local_1d8.Ptr,uVar27,pwVar28);
    if ((void *)local_1d8._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_1d8._padding_);
    }
    return;
  }
  pAVar12 = UWorld::GetFirstPlayerController(this_00);
  if (pAVar12 == (APlayerController *)0x0) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar11 = UDS_LogManager::GetInst();
    local_1d8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_1d8,"UDS_AirWalk_PowerJumpAbility::UpdatePowerJumpDirectionAndSpeed",0x3e,Yes)
    ;
    pwVar28 = L"playerController is nullptr.";
    uVar27 = 0x1d0;
    goto LAB_14b7c9b01;
  }
  pAVar3 = (pAVar12->PlayerCameraManager).field0_0x0.DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pAVar3 != (APlayerCameraManager *)0x0) {
      UE::GC::MarkAsReachable((UObject *)pAVar3);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pAVar3 != (APlayerCameraManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pAVar3);
    }
  }
  local_220.ObjectIndex = 0;
  local_220.ObjectSerialNumber = 0;
  local_228 = pAVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pAVar3 != (APlayerCameraManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pAVar3);
  }
  FWeakObjectPtr::operator=(&local_220,(FObjectPtr)&local_228);
  bVar10 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                     ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_220,(void *)0x0);
  if (bVar10) {
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar11 = UDS_LogManager::GetInst();
    local_1d8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_1d8,"UDS_AirWalk_PowerJumpAbility::UpdatePowerJumpDirectionAndSpeed",0x3e,Yes)
    ;
    pwVar28 = L"cameraActor is nullptr.";
    uVar27 = 0x1d7;
    goto LAB_14b7c9b01;
  }
  pUVar13 = FWeakObjectPtr::Get(&local_220);
  if (*(USceneComponent **)(pUVar13 + 0xb) == (USceneComponent *)0x0) {
    pTVar14 = &local_218;
    local_218._s_0.Y = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Y;
    local_218._s_0.X = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.X;
    local_218._s_0.Z = UE::Math::TVector<double>::ForwardVector.field0_0x0._s_0.Z;
  }
  else {
    pTVar14 = &USceneComponent::GetForwardVector
                         (*(USceneComponent **)(pUVar13 + 0xb),(TVector<double> *)&local_218._s_0)->
               field0_0x0;
  }
  auVar2 = *(undefined1 (*) [16])pTVar14;
  dVar4 = auVar2._0_8_;
  uVar23 = auVar2._8_4_;
  uVar24 = auVar2._12_4_;
  dVar5 = auVar2._8_8_;
  dVar1 = (pTVar14->_s_0).Z;
  uVar25 = SUB84(dVar1,0);
  uVar26 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar19 = dVar5 * dVar5 + dVar4 * dVar4;
  if (dVar19 == __real_3ff0000000000000) {
    dVar9 = dVar4;
    dVar19 = dVar5;
    if (dVar1 != 0.0) goto LAB_14b7c9db6;
  }
  else {
    if (dVar19 < __real_3e45798ee0000000) {
      uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
      uVar24 = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
      dVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
      uVar25 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar26 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
      local_228 = (APlayerCameraManager *)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      dVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
      goto LAB_14b7c9dbf;
    }
    dVar9 = dVar4 * (__real_3ff0000000000000 / SQRT(dVar19));
    dVar19 = dVar5 * (__real_3ff0000000000000 / SQRT(dVar19));
LAB_14b7c9db6:
    uVar25 = 0;
    uVar26 = 0;
  }
  local_228 = (APlayerCameraManager *)CONCAT44(uVar26,uVar25);
LAB_14b7c9dbf:
  local_218._8_4_ = uVar23;
  local_218._s_0.X = dVar19;
  local_218._12_4_ = uVar24;
  fVar17 = (float)(dVar19 * dVar5 + dVar9 * dVar4 + (double)CONCAT44(uVar26,uVar25) * dVar1);
  fVar18 = __real_bf800000;
  if ((__real_bf800000 <= fVar17) && (fVar18 = fVar17, __real_3f800000 <= fVar17)) {
    fVar18 = __real_3f800000;
  }
  local_1f8.field0_0x0._s_0.Z = dVar1;
  fVar18 = acosf(fVar18);
  fVar18 = fVar18 * __real_42652ee0;
  this->AngleInDegrees = fVar18;
  if (dVar1 < 0.0) {
    fVar18 = (float)((uint)fVar18 ^ __xmm_80000000800000008000000080000000);
    this->AngleInDegrees = fVar18;
  }
  fVar18 = fVar18 + this->PowerJumpDirDegreesOffset;
  if (this->PowerJumpPitchMax <= fVar18) {
    fVar18 = this->PowerJumpPitchMax;
  }
  dVar1 = dVar19 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z -
          (double)CONCAT44(uVar26,uVar25) * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  if (fVar18 <= this->PowerJumpPitchMin) {
    fVar18 = this->PowerJumpPitchMin;
  }
  dVar8 = (double)CONCAT44(uVar26,uVar25) * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X -
          dVar9 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  dVar7 = dVar9 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y -
          dVar19 * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  __libm_sse2_sincos_();
  dVar22 = (double)CONCAT44(extraout_XMM0_Dd,extraout_XMM0_Dc);
  dVar20 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar1;
  dVar6 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar8;
  dVar5 = (double)CONCAT44(extraout_XMM0_Db,extraout_XMM0_Da) * dVar7;
  dVar1 = dVar1 * __real_3fe6a09e6ecb41fe;
  dVar8 = dVar8 * __real_3fe6a09e6ecb41fe;
  dVar7 = dVar7 * __real_3fe6a09e6ecb41fe;
  this_01 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pTVar15 = UDS_MovementCore::GetActorLocation(this_01,&local_1f8);
  dVar4 = (pTVar15->field0_0x0)._s_0.Y;
  (this->ActorLocationWhenStart).field0_0x0._s_0.X = (pTVar15->field0_0x0)._s_0.X;
  (this->ActorLocationWhenStart).field0_0x0._s_0.Y = dVar4;
  (this->ActorLocationWhenStart).field0_0x0._s_0.Z = (pTVar15->field0_0x0)._s_0.Z;
  dVar21 = (double)local_228 * dVar6 - dVar19 * dVar5;
  dVar21 = dVar21 + dVar21;
  dVar4 = dVar9 * dVar5 - (double)local_228 * dVar20;
  dVar4 = dVar4 + dVar4;
  dVar19 = local_218._s_0.X * dVar20 - dVar9 * dVar6;
  dVar19 = dVar19 + dVar19;
  (this->CameraForwardVectorWhenStart).field0_0x0._s_0.X =
       (dVar19 * dVar6 - dVar4 * dVar5) + dVar21 * dVar22 + dVar9;
  (this->CameraForwardVectorWhenStart).field0_0x0._s_0.Y =
       (dVar21 * dVar5 - dVar19 * dVar20) + dVar4 * dVar22 + local_218._s_0.X;
  (this->CameraForwardVectorWhenStart).field0_0x0._s_0.Z =
       (dVar4 * dVar20 - dVar21 * dVar6) + dVar19 * dVar22 + (double)local_228;
  dVar9 = (this->CameraForwardVectorWhenStart).field0_0x0._s_0.X;
  dVar6 = (this->CameraForwardVectorWhenStart).field0_0x0._s_0.Y;
  dVar4 = (this->CameraForwardVectorWhenStart).field0_0x0._s_0.Z;
  dVar19 = dVar4 * dVar8 - dVar6 * dVar7;
  dVar19 = dVar19 + dVar19;
  dVar5 = dVar9 * dVar7 - dVar4 * dVar1;
  dVar5 = dVar5 + dVar5;
  dVar22 = dVar6 * dVar1 - dVar9 * dVar8;
  dVar22 = dVar22 + dVar22;
  dVar21 = dVar22 * __real_3fe6a09e5e333598;
  dVar20 = dVar5 * __real_3fe6a09e5e333598;
  (this->CameraUpVectorWhenStart).field0_0x0._s_0.X =
       (dVar22 * dVar8 - dVar5 * dVar7) + dVar19 * __real_3fe6a09e5e333598 + dVar9;
  (this->CameraUpVectorWhenStart).field0_0x0._s_0.Y =
       (dVar19 * dVar7 - dVar22 * dVar1) + dVar20 + dVar6;
  (this->CameraUpVectorWhenStart).field0_0x0._s_0.Z =
       (dVar5 * dVar1 - dVar19 * dVar8) + dVar21 + dVar4;
  this_02 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pFVar16 = UDS_AirWalkAbilityData::GetAirWalkStepInfo(this_02,PowerJumpCharging);
  fVar18 = (float)((uint)(fVar18 - __real_42b40000) & __xmm_7fffffff7fffffff7fffffff7fffffff) *
           __real_3c360b61;
  if (__real_3f800000 <= fVar18) {
    fVar18 = __real_3f800000;
  }
  if (fVar18 <= 0.0) {
    fVar18 = 0.0;
  }
  this->PowerJumpForwardSpeed =
       (pFVar16->AirWalkSpeed - pFVar16->PowerJumpDefaultSpeed) * this->ChargingTimeRatio +
       pFVar16->PowerJumpDefaultSpeed;
  this->PowerJumpHeightCorrection = fVar18;
  return;
}

// UpdatePowerJumpMoveTime @ 14b7ca1e0

void __thiscall
UDS_AirWalk_PowerJumpAbility::UpdatePowerJumpMoveTime(UDS_AirWalk_PowerJumpAbility *this)

{
  UDS_AirWalkAbilityData *this_00;
  FDS_AirWalkStepInfo *pFVar1;
  
  this_00 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  pFVar1 = UDS_AirWalkAbilityData::GetAirWalkStepInfo(this_00,PowerJump);
  this->PowerJumpMoveTime = this->ChargingTimeRatio * pFVar1->AirWalkTime;
  return;
}


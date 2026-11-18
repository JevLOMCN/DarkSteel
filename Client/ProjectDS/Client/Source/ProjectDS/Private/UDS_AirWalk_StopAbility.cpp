// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 15

// StaticClass @ 14b40f420

UClass * __cdecl UDS_AirWalk_StopAbility::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AirWalk_StopAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AirWalk_StopAbility",
               &Z_Registration_Info_UClass_UDS_AirWalk_StopAbility.InnerSingleton,
               StaticRegisterNativesUDS_AirWalk_StopAbility,0x1b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AirWalk_StopAbility>,
               InternalVTableHelperCtorCaller<UDS_AirWalk_StopAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AirWalk_StopAbility.InnerSingleton;
}

// UDS_AirWalk_StopAbility @ 14b411b80

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

UDS_AirWalk_StopAbility * __thiscall
UDS_AirWalk_StopAbility::UDS_AirWalk_StopAbility
          (UDS_AirWalk_StopAbility *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->ElapsedTime = 0.0;
  this->DecelerationStopTime = 0.0;
  this->CurSpeed = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartVelocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->StartVelocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&this->StopStartDelegate = 0;
  *(undefined8 *)&(this->StopStartDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->StopStartDelegate).field_0x10 = 0;
  *(undefined8 *)&this->StopFinishDelegate = 0;
  *(undefined8 *)&(this->StopFinishDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->StopFinishDelegate).field_0x10 = 0;
  (this->AirWalkAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ~UDS_AirWalk_StopAbility @ 14b412150

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

void __thiscall UDS_AirWalk_StopAbility::~UDS_AirWalk_StopAbility(UDS_AirWalk_StopAbility *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->StopFinishDelegate);
  pvVar1 = *(void **)&(this->StopFinishDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->StopFinishDelegate);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->StopStartDelegate);
  pvVar1 = *(void **)&(this->StopStartDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->StopStartDelegate);
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetAirWalkStep @ 14b4130f0

EDS_AirWalkStep __thiscall UDS_AirWalk_StopAbility::GetAirWalkStep(UDS_AirWalk_StopAbility *this)

{
  return AirStop;
}

// GetPrivateStaticClass @ 14b413ea0

UClass * __cdecl UDS_AirWalk_StopAbility::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AirWalk_StopAbility.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AirWalk_StopAbility",
               &Z_Registration_Info_UClass_UDS_AirWalk_StopAbility.InnerSingleton,
               StaticRegisterNativesUDS_AirWalk_StopAbility,0x1b8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_AirWalk_StopAbility>,
               InternalVTableHelperCtorCaller<UDS_AirWalk_StopAbility>,local_res8,
               UDS_GameplayAbility::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AirWalk_StopAbility.InnerSingleton;
}

// ShouldTickComponent @ 14b4141b0

bool __thiscall UDS_AirWalk_StopAbility::ShouldTickComponent(UDS_AirWalk_StopAbility *this)

{
  return true;
}

// StaticRegisterNativesUDS_AirWalk_StopAbility @ 14b414390

void __cdecl UDS_AirWalk_StopAbility::StaticRegisterNativesUDS_AirWalk_StopAbility(void)

{
  return;
}

// UDS_AirWalk_StopAbility @ 14b79b580

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

UDS_AirWalk_StopAbility * __thiscall
UDS_AirWalk_StopAbility::UDS_AirWalk_StopAbility
          (UDS_AirWalk_StopAbility *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UDS_GameplayAbility::UDS_GameplayAbility((UDS_GameplayAbility *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  this->ElapsedTime = 0.0;
  this->DecelerationStopTime = 0.0;
  this->CurSpeed = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartVelocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->StartVelocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  *(undefined8 *)&this->StopStartDelegate = 0;
  *(undefined8 *)&(this->StopStartDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->StopStartDelegate).field_0x10 = 0;
  *(undefined8 *)&this->StopFinishDelegate = 0;
  *(undefined8 *)&(this->StopFinishDelegate).field_0x8 = 0;
  *(undefined4 *)&(this->StopFinishDelegate).field_0x10 = 0;
  (this->AirWalkAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  return this;
}

// ClearVariables @ 14b7a0050

void __thiscall UDS_AirWalk_StopAbility::ClearVariables(UDS_AirWalk_StopAbility *this)

{
  undefined8 uVar1;
  
  this->ElapsedTime = 0.0;
  this->DecelerationStopTime = 0.0;
  this->CurSpeed = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StartVelocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StartVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->StartVelocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

// DoStop @ 14b7a52a0

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

void __thiscall UDS_AirWalk_StopAbility::DoStop(UDS_AirWalk_StopAbility *this)

{
  UDS_AirWalkAbilityData *pUVar1;
  FDS_AirWalkStepInfo *pFVar2;
  UDS_MovementCore *this_00;
  UObject *pUVar3;
  longlong lVar4;
  UWorld *this_01;
  APlayerController *pAVar5;
  EDS_AbilityInputPolicy local_res8 [8];
  TVector<double>_u_0 local_28;
  
  pUVar1 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get(&(this->AirWalkAbilityData).WeakPtr);
  UDS_AirWalkAbilityData::DoStop(pUVar1);
  pUVar1 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get(&(this->AirWalkAbilityData).WeakPtr);
  pFVar2 = UDS_AirWalkAbilityData::GetAirWalkStepInfo(pUVar1,Hovering);
  this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_MovementCore::GetVelocity(this_00,(TVector<double> *)&local_28._s_0);
  (this->StartVelocity).field0_0x0._s_0.X = local_28._s_0.X;
  (this->StartVelocity).field0_0x0._s_0.Y = local_28._s_0.Y;
  (this->StartVelocity).field0_0x0._s_0.Z = local_28._s_0.Z;
  this->DecelerationStopTime =
       (float)SQRT(local_28._s_0.X * local_28._s_0.X + local_28._s_0.Y * local_28._s_0.Y +
                   local_28._s_0.Z * local_28._s_0.Z) / pFVar2->StopSpeedDown;
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (**(code **)(*(longlong *)pUVar3 + 0x448))(pUVar3,5);
  local_res8[0] = 0x2b;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  lVar4 = (**(code **)(this->_padding_ + 0x180))(this);
  if (lVar4 != 0) {
    this_01 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    pAVar5 = UWorld::GetFirstPlayerController(this_01);
    if (pAVar5 != (APlayerController *)0x0) {
      local_res8[0] = BlockInput;
      UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_res8);
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                (&this->StopStartDelegate);
    }
  }
  return;
}

// OnAbilityRetryActivate @ 14b7b40c0

void __thiscall UDS_AirWalk_StopAbility::OnAbilityRetryActivate(UDS_AirWalk_StopAbility *this)

{
  return;
}

// OnCanActivate @ 14b7b5990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_AirWalk_StopAbility::OnCanActivate(UDS_AirWalk_StopAbility *this)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  UDS_CharStateData *this_00;
  TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr> TVar4;
  UDS_LogManager *pUVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  undefined1 auStackY_1c8 [32];
  FWeakObjectPtr local_190;
  FWeakObjectPtr local_188;
  UObject *local_180;
  undefined1 local_178 [8];
  ForAnyElementType local_170;
  int local_168;
  FWeakObjectPtr local_160;
  FDestructionSentinel local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  bVar3 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (!bVar3) {
    return false;
  }
  UDS_CharStateData::GetData((ulong64)&local_160);
  this_00 = (UDS_CharStateData *)FWeakObjectPtr::Get(&local_160);
  local_188.ObjectIndex = 0x800;
  local_188.ObjectSerialNumber = 0;
  bVar3 = UDS_CharStateData::HasCharState(this_00,(EDS_CharState *)&local_188);
  if (!bVar3) {
    return false;
  }
  bVar3 = TWeakObjectPtr<UDS_AirWalkAbilityData,FWeakObjectPtr>::UEOpEquals
                    (&this->AirWalkAbilityData,(void *)0x0);
  if (bVar3) {
    TVar4 = UDS_AbilityDataSet::GetAbilityData<UDS_AirWalkAbilityData>
                      ((ulong64 *)&local_180,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
    (this->AirWalkAbilityData).WeakPtr = *TVar4.WeakPtr;
    bVar3 = FWeakObjectPtr::IsValid(&(this->AirWalkAbilityData).WeakPtr);
    if (!bVar3) {
      pUVar5 = UDS_LogManager::GetInst();
      if (pUVar5 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar5 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_AirWalk_StopAbility::OnCanActivate",0x26,Yes);
      UDS_LogManager::PrintLog
                (pUVar5,1,Warning,local_138.Ptr,0x27,
                 L"Ability terminated abnormally due to data issues.");
      if ((void *)local_138._padding_ == (void *)0x0) {
        return false;
      }
      FMemory::Free((void *)local_138._padding_);
      return false;
    }
  }
  pUVar6 = (UObject *)this->_padding_;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar6 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
  }
  local_188.ObjectIndex = 0;
  local_188.ObjectSerialNumber = 0;
  local_180 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_188,(FObjectPtr)&local_180);
  pUVar6 = FWeakObjectPtr::Get(&local_188);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_AirWalkStopAbilityContext_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14b7b5b97;
  }
  pUVar6 = (UObject *)0x0;
LAB_14b7b5b97:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_190.ObjectIndex = 0;
  local_190.ObjectSerialNumber = 0;
  local_180 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_190,(FObjectPtr)&local_180);
  bVar3 = FWeakObjectPtr::IsValid(&local_190);
  if (!bVar3) {
    return false;
  }
  pUVar6 = FWeakObjectPtr::Get(&local_190);
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::CopyFrom<FDefaultDelegateUserPolicy>
            (&this->StopStartDelegate,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)(pUVar6 + 1));
  pUVar6 = FWeakObjectPtr::Get(&local_190);
  if ((TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)&pUVar6[1].field_0x18 !=
      &this->StopFinishDelegate) {
    local_178 = (undefined1  [8])0x0;
    local_170.Data = (FScriptContainerElement *)0x0;
    local_168 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar6[1].field_0x18,
               (FReadAccessScope *)&local_158);
    if ((*(int *)(pUVar6 + 2) != 0) &&
       (plVar2 = *(longlong **)&pUVar6[1].field_0x20, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x50))(plVar2,local_178);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_158);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->StopFinishDelegate,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_178);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_178,
               (FWriteAccessScope *)&local_158);
    if ((local_168 != 0) && (local_170.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_170.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_170,0,0,0x10);
      local_168 = 0;
    }
    if (local_158.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_158.Accessor,&local_158);
    }
    if (local_170.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_178);
  }
  return true;
}

// OnDeactivateAbility @ 14b7b8120

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
UDS_AirWalk_StopAbility::OnDeactivateAbility(UDS_AirWalk_StopAbility *this,bool *param_1)

{
  UObject *pUVar1;
  EDS_StateTagType local_res8 [8];
  
  pUVar1 = FWeakObjectPtr::Get(&(this->AirWalkAbilityData).WeakPtr);
  local_res8[0] = AirWalk_Stop;
  pUVar1[5].field_0x14 = 0;
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  if (*param_1 == false) {
    pUVar1 = FWeakObjectPtr::Get(&(this->AirWalkAbilityData).WeakPtr);
    if (pUVar1[4].field_0x20 == '\0') {
      pUVar1 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      (**(code **)(*(longlong *)pUVar1 + 0x448))(pUVar1,3);
    }
  }
  return;
}

// OnPostActivateAbility @ 14b7bb2b0

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

void __thiscall UDS_AirWalk_StopAbility::OnPostActivateAbility(UDS_AirWalk_StopAbility *this)

{
  UDS_AirWalkAbilityData *pUVar1;
  FDS_AirWalkStepInfo *pFVar2;
  UDS_MovementCore *this_00;
  UObject *pUVar3;
  longlong lVar4;
  UWorld *this_01;
  APlayerController *pAVar5;
  EDS_AbilityInputPolicy local_res8 [8];
  TVector<double>_u_0 local_28;
  
  pUVar1 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get(&(this->AirWalkAbilityData).WeakPtr);
  UDS_AirWalkAbilityData::DoStop(pUVar1);
  pUVar1 = (UDS_AirWalkAbilityData *)FWeakObjectPtr::Get(&(this->AirWalkAbilityData).WeakPtr);
  pFVar2 = UDS_AirWalkAbilityData::GetAirWalkStepInfo(pUVar1,Hovering);
  this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_MovementCore::GetVelocity(this_00,(TVector<double> *)&local_28._s_0);
  (this->StartVelocity).field0_0x0._s_0.X = local_28._s_0.X;
  (this->StartVelocity).field0_0x0._s_0.Y = local_28._s_0.Y;
  (this->StartVelocity).field0_0x0._s_0.Z = local_28._s_0.Z;
  this->DecelerationStopTime =
       (float)SQRT(local_28._s_0.X * local_28._s_0.X + local_28._s_0.Y * local_28._s_0.Y +
                   local_28._s_0.Z * local_28._s_0.Z) / pFVar2->StopSpeedDown;
  pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (**(code **)(*(longlong *)pUVar3 + 0x448))(pUVar3,5);
  local_res8[0] = 0x2b;
  UDS_GameplayAbility::AddStateTagToASC((UDS_GameplayAbility *)this,local_res8);
  lVar4 = (**(code **)(this->_padding_ + 0x180))(this);
  if (lVar4 != 0) {
    this_01 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    pAVar5 = UWorld::GetFirstPlayerController(this_01);
    if (pAVar5 != (APlayerController *)0x0) {
      local_res8[0] = BlockInput;
      UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_res8);
      TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::ExecuteIfBound
                (&this->StopStartDelegate);
    }
  }
  return;
}

// OnTickComponent @ 14b7bd770

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
UDS_AirWalk_StopAbility::OnTickComponent(UDS_AirWalk_StopAbility *this,float param_1)

{
  double dVar1;
  double dVar2;
  char cVar3;
  UDS_MovementCore *this_00;
  UObject *pUVar4;
  longlong *plVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  EDS_AbilityDeactivateType local_res10 [8];
  TVector<double>_u_0 local_48;
  undefined1 local_30 [40];
  
  this->ElapsedTime = param_1 + this->ElapsedTime;
  this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  UDS_MovementCore::GetVelocity(this_00,(TVector<double> *)&local_48._s_0);
  auVar7._0_8_ = local_48._s_0.Y * local_48._s_0.Y;
  auVar7._8_8_ = 0;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = local_48._s_0.X * local_48._s_0.X + auVar7._0_8_ +
                 local_48._s_0.Z * local_48._s_0.Z;
  auVar8 = sqrtpd(auVar7,auVar8);
  this->CurSpeed = (float)auVar8._0_8_;
  if (0.0 < (float)auVar8._0_8_) {
    fVar6 = this->ElapsedTime / this->DecelerationStopTime;
    local_30._0_8_ = (this->StartVelocity).field0_0x0._s_0.X;
    if (__real_3f800000 <= fVar6) {
      fVar6 = __real_3f800000;
    }
    dVar1 = (this->StartVelocity).field0_0x0._s_0.Y;
    local_30._16_8_ = (this->StartVelocity).field0_0x0._s_0.Z;
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    dVar2 = (double)fVar6;
    local_30._0_8_ =
         (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X - (double)local_30._0_8_) * dVar2
         + (double)local_30._0_8_;
    local_30._8_8_ =
         (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y - dVar1) * dVar2 + dVar1;
    local_30._16_8_ =
         (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z - (double)local_30._16_8_) * dVar2
         + (double)local_30._16_8_;
    pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    (**(code **)(*(longlong *)pUVar4 + 0x398))(pUVar4,local_30);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->StopFinishDelegate,
             (FReadAccessScope *)local_30);
  if (((*(int *)&(this->StopFinishDelegate).field_0x10 == 0) ||
      (plVar5 = *(longlong **)&(this->StopFinishDelegate).field_0x8, plVar5 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*plVar5 + 0x38))(), cVar3 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_30);
    if (this->CurSpeed <= 0.0) {
      pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      (**(code **)(*(longlong *)pUVar4 + 0x2d8))(pUVar4);
      local_res10[0] = Cancel;
      goto LAB_14b7bd961;
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)local_30);
  }
  fVar6 = this->CurSpeed;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->StopFinishDelegate,
             (FReadAccessScope *)local_30);
  if (*(int *)&(this->StopFinishDelegate).field_0x10 == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    plVar5 = *(longlong **)&(this->StopFinishDelegate).field_0x8;
  }
  cVar3 = (**(code **)(*plVar5 + 0x60))(plVar5,fVar6);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)local_30);
  if (cVar3 != '\x01') {
    return;
  }
  pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  (**(code **)(*(longlong *)pUVar4 + 0x2d8))(pUVar4);
  local_res10[0] = Success;
LAB_14b7bd961:
  UDS_GameplayAbility::DeactivateAbility((UDS_GameplayAbility *)this,local_res10);
  return;
}


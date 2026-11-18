// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TimeManagement
// Functions: 22

// StaticClass @ 146035bc0

UClass * __cdecl UTimecodeRegressionProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTimecodeRegressionProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TimeManagement",L"TimecodeRegressionProvider",
               &Z_Registration_Info_UClass_UTimecodeRegressionProvider.InnerSingleton,
               StaticRegisterNativesUTimecodeRegressionProvider,0xe8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTimecodeRegressionProvider>,
               InternalVTableHelperCtorCaller<UTimecodeRegressionProvider>,local_res8,
               UTimecodeProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTimecodeRegressionProvider.InnerSingleton;
}

// UTimecodeRegressionProvider @ 1460402f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UTimecodeRegressionProvider * __thiscall
UTimecodeRegressionProvider::UTimecodeRegressionProvider
          (UTimecodeRegressionProvider *this,FVTableHelper *param_1)

{
  UTimecodeProvider::UTimecodeProvider((UTimecodeProvider *)this,param_1);
  this->NumSampledFrames = 0x3c;
  this->_padding_ = (longlong)&___7UTimecodeRegressionProvider__6B_;
  (this->OwningEngine).field0_0x0.DebugPtr = (UEngine *)0x0;
  (this->TimecodeImpl).field0_0x0.DebugPtr = (UTimecodeProvider *)0x0;
  (this->EstimationState).bIsSet = false;
  return this;
}

// UTimecodeRegressionProvider @ 146040330

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UTimecodeRegressionProvider * __thiscall
UTimecodeRegressionProvider::UTimecodeRegressionProvider
          (UTimecodeRegressionProvider *this,FObjectInitializer *param_1)

{
  UTimecodeProvider::UTimecodeProvider((UTimecodeProvider *)this,param_1);
  this->NumSampledFrames = 0x3c;
  this->_padding_ = (longlong)&___7UTimecodeRegressionProvider__6B_;
  (this->OwningEngine).field0_0x0.DebugPtr = (UEngine *)0x0;
  (this->TimecodeImpl).field0_0x0.DebugPtr = (UTimecodeProvider *)0x0;
  (this->EstimationState).bIsSet = false;
  return this;
}

// ~UTimecodeRegressionProvider @ 146040650

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
UTimecodeRegressionProvider::~UTimecodeRegressionProvider(UTimecodeRegressionProvider *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UTimecodeRegressionProvider__6B_;
  if (((this->EstimationState).bIsSet != false) &&
     (pFVar1 = (this->EstimationState).TypedValue.TimecodeEstimator.ClockToTimecodeSamples.Samples.
               Data.AllocatorInstance.Data, pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  UTimecodeProvider::~UTimecodeProvider((UTimecodeProvider *)this);
  return;
}

// FetchAndUpdate @ 14604be80

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

void __thiscall UTimecodeRegressionProvider::FetchAndUpdate(UTimecodeRegressionProvider *this)

{
  TOptional<UE::TimeManagement::TimecodeEstimation::FFetchAndUpdateStats> *pTVar1;
  UTimecodeProvider *pUVar2;
  code *pcVar3;
  FFrameRate FVar4;
  bool bVar5;
  TOptional<UE::TimeManagement::TimecodeEstimation::FFetchAndUpdateStats> *pTVar6;
  TOptional<UE::TimeManagement::TimecodeEstimation::FFetchAndUpdateStats> local_28;
  
  if ((this->EstimationState).bIsSet == false) {
    pUVar2 = (this->TimecodeImpl).field0_0x0.DebugPtr;
    if (pUVar2 != (UTimecodeProvider *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014604bf28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(pUVar2->_padding_ + 0x2b8))();
      return;
    }
  }
  else {
    pTVar6 = UE::TimeManagement::TimecodeEstimation::FTimecodeEstimator::FetchAndUpdate
                       ((FTimecodeEstimator *)&this->EstimationState,&local_28);
    if (((this->EstimationState).bIsSet == false) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar1 = &(this->EstimationState).TypedValue.LastUpdateStats;
    if (pTVar6 != pTVar1) {
      if (pTVar6->bIsSet == false) {
        if ((this->EstimationState).TypedValue.LastUpdateStats.bIsSet != false) {
          (this->EstimationState).TypedValue.LastUpdateStats.bIsSet = false;
          return;
        }
      }
      else {
        FVar4 = (pTVar6->TypedValue).UnderlyingFrameTime.Rate;
        (pTVar1->TypedValue).UnderlyingFrameTime.Time =
             (pTVar6->TypedValue).UnderlyingFrameTime.Time;
        (this->EstimationState).TypedValue.LastUpdateStats.TypedValue.UnderlyingFrameTime.Rate =
             FVar4;
        (this->EstimationState).TypedValue.LastUpdateStats.bIsSet = true;
      }
    }
  }
  return;
}

// FetchTimecode @ 14604bf50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UTimecodeRegressionProvider::FetchTimecode
          (UTimecodeRegressionProvider *this,FQualifiedFrameTime *param_1)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014604bf57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(((this->TimecodeImpl).field0_0x0.DebugPtr)->_padding_ + 0x2b0))();
  return (bool)uVar1;
}

// GetLastSampledFrameTime @ 14604c680

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

TOptional<FQualifiedFrameTime> * __thiscall
UTimecodeRegressionProvider::GetLastSampledFrameTime
          (UTimecodeRegressionProvider *this,TOptional<FQualifiedFrameTime> *__return_storage_ptr__)

{
  FFrameTime local_28;
  FFrameRate FStack_20;
  bool local_18;
  
  if (((this->EstimationState).bIsSet == false) ||
     ((this->EstimationState).TypedValue.LastUpdateStats.bIsSet == false)) {
    local_18 = false;
  }
  else {
    local_28 = (this->EstimationState).TypedValue.LastUpdateStats.TypedValue.UnderlyingFrameTime.
               Time;
    FStack_20 = (this->EstimationState).TypedValue.LastUpdateStats.TypedValue.UnderlyingFrameTime.
                Rate;
    local_18 = true;
  }
  __return_storage_ptr__->bIsSet = local_18;
  if (local_18 != false) {
    (__return_storage_ptr__->TypedValue).Time = local_28;
    (__return_storage_ptr__->TypedValue).Rate = FStack_20;
  }
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14604d130

UClass * __cdecl UTimecodeRegressionProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTimecodeRegressionProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/TimeManagement",L"TimecodeRegressionProvider",
               &Z_Registration_Info_UClass_UTimecodeRegressionProvider.InnerSingleton,
               StaticRegisterNativesUTimecodeRegressionProvider,0xe8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UTimecodeRegressionProvider>,
               InternalVTableHelperCtorCaller<UTimecodeRegressionProvider>,local_res8,
               UTimecodeProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTimecodeRegressionProvider.InnerSingleton;
}

// GetQualifiedFrameTime @ 14604d210

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FQualifiedFrameTime * __thiscall
UTimecodeRegressionProvider::GetQualifiedFrameTime
          (UTimecodeRegressionProvider *this,FQualifiedFrameTime *__return_storage_ptr__)

{
  UTimecodeProvider *pUVar1;
  FFrameRate FVar2;
  FFrameNumber FVar3;
  float fVar4;
  FQualifiedFrameTime *pFVar5;
  FFrameTime *pFVar6;
  FFrameTime local_38;
  undefined8 uStack_30;
  FQualifiedFrameTime local_28;
  undefined1 local_18 [16];
  
  if ((this->EstimationState).bIsSet != false) {
    pFVar5 = UE::TimeManagement::TimecodeEstimation::FTimecodeEstimator::EstimateFrameTime
                       ((FTimecodeEstimator *)&this->EstimationState,&local_28);
    FVar2 = pFVar5->Rate;
    __return_storage_ptr__->Time = pFVar5->Time;
    __return_storage_ptr__->Rate = FVar2;
    return __return_storage_ptr__;
  }
  pUVar1 = (this->TimecodeImpl).field0_0x0.DebugPtr;
  if (pUVar1 == (UTimecodeProvider *)0x0) {
    local_38.FrameNumber.Value = 0;
    local_38.SubFrame = 0.0;
    pFVar6 = &local_38;
    uStack_30 = 0x100000018;
  }
  else {
    pFVar6 = (FFrameTime *)(**(code **)(pUVar1->_padding_ + 0x2c0))(pUVar1,local_18);
  }
  FVar3.Value = pFVar6[1].FrameNumber.Value;
  fVar4 = pFVar6[1].SubFrame;
  __return_storage_ptr__->Time = *pFVar6;
  (__return_storage_ptr__->Rate).Numerator = FVar3.Value;
  (__return_storage_ptr__->Rate).Denominator = (int)fVar4;
  return __return_storage_ptr__;
}

// GetSynchronizationState @ 14604d3a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ETimecodeProviderSynchronizationState __thiscall
UTimecodeRegressionProvider::GetSynchronizationState(UTimecodeRegressionProvider *this)

{
  UEngine *pUVar1;
  ETimecodeProviderSynchronizationState EVar2;
  
  pUVar1 = (this->OwningEngine).field0_0x0.DebugPtr;
  if (pUVar1 == (UEngine *)0x0) {
    return Closed;
  }
  if ((pUVar1->CustomTimeStep).field0_0x0.DebugPtr == (UEngineCustomTimeStep *)0x0) {
    return Error;
  }
                    /* WARNING: Could not recover jumptable at 0x00014604d3c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EVar2 = (**(code **)(((this->TimecodeImpl).field0_0x0.DebugPtr)->_padding_ + 0x2c8))();
  return EVar2;
}

// Initialize @ 14604dcc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
UTimecodeRegressionProvider::Initialize(UTimecodeRegressionProvider *this,UEngine *param_1)

{
  UTimecodeProvider *pUVar1;
  bool bVar2;
  char cVar3;
  undefined1 local_res8 [8];
  
  if (((this->TimecodeImpl).field0_0x0.DebugPtr == (UTimecodeProvider *)0x0) &&
     (bVar2 = `UTimecodeRegressionProvider::Initialize'::__l3::<lambda_1>::operator()(local_res8),
     !bVar2)) {
    return false;
  }
  pUVar1 = (this->TimecodeImpl).field0_0x0.DebugPtr;
  cVar3 = (**(code **)(pUVar1->_padding_ + 0x2d0))(pUVar1,param_1);
  if (cVar3 == '\0') {
    return false;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UEngine *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->OwningEngine).field0_0x0.DebugPtr = param_1;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddUObject<UTimecodeRegressionProvider>
            ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
             &param_1->CustomTimeStepChangedEvent,(UTimecodeRegressionProvider *)local_res8,
             (pmf_c8145c93)this);
  ReinitRegressionBuffer(this);
  return true;
}

// IsAutoDetected @ 14604ddd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UTimecodeRegressionProvider::IsAutoDetected(UTimecodeRegressionProvider *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014604ddd7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(((this->TimecodeImpl).field0_0x0.DebugPtr)->_padding_ + 0x2f0))();
  return (bool)uVar1;
}

// OnCustomTimeStepChanged @ 14604e870

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
UTimecodeRegressionProvider::OnCustomTimeStepChanged(UTimecodeRegressionProvider *this)

{
  UObjectBaseUtility *this_00;
  FScriptContainerElement *pFVar1;
  UTimecodeProvider *pUVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  IClockedTimeStep *pIVar6;
  longlong lVar7;
  int iVar8;
  bool *pbVar9;
  int iVar10;
  FName FStackX_8;
  FString aFStack_38 [2];
  
  if (((this->OwningEngine).field0_0x0.DebugPtr == (UEngine *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Private\\Estimation\\TimecodeRegressionProvider.cpp"
                         ,0x5e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = (UObjectBaseUtility *)
            (((this->OwningEngine).field0_0x0.DebugPtr)->CustomTimeStep).field0_0x0.DebugPtr;
  if (this_00 == (UObjectBaseUtility *)0x0) {
    pIVar6 = (IClockedTimeStep *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UClockedTimeStep_NoRegister();
    pIVar6 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar5);
  }
  if (((1 < (byte)LogTimeManagement._0_1_) && (this_00 != (UObjectBaseUtility *)0x0)) &&
     (pIVar6 == (IClockedTimeStep *)0x0)) {
    FStackX_8.ComparisonIndex.Value = *(uint *)&this_00->field_0x18;
    FStackX_8.Number = *(uint *)&this_00->field_0x1c;
    ::FName::ToString(&FStackX_8,aFStack_38);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTimeManagement);
    if (aFStack_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(aFStack_38[0].Data.AllocatorInstance.Data);
      goto LAB_14604f7db;
    }
  }
  pbVar9 = &(this->EstimationState).bIsSet;
  if (pIVar6 != (IClockedTimeStep *)0x0) {
    pUVar2 = (this->TimecodeImpl).field0_0x0.DebugPtr;
    iVar8 = 0x10000;
    if (this->NumSampledFrames < 0x10000) {
      iVar8 = this->NumSampledFrames;
    }
    iVar10 = 1;
    if (1 < iVar8) {
      iVar10 = iVar8;
    }
    if ((*pbVar9 != false) &&
       (pFVar1 = (this->EstimationState).TypedValue.TimecodeEstimator.ClockToTimecodeSamples.Samples
                 .Data.AllocatorInstance.Data, pFVar1 != (FScriptContainerElement *)0x0)) {
      FMemory::Free(pFVar1);
    }
    (this->EstimationState).TypedValue.TimecodeEstimator.StartClockTime.bIsSet = false;
    (this->EstimationState).TypedValue.TimecodeEstimator.TimecodeProvider = pUVar2;
    (this->EstimationState).TypedValue.TimecodeEstimator.EngineCustomTimeStep = pIVar6;
    (this->EstimationState).TypedValue.TimecodeEstimator.LinearRegressionFunction.Slope = 1.0;
    (this->EstimationState).TypedValue.TimecodeEstimator.LinearRegressionFunction.Offset = 0.0;
    UE::TimeManagement::FCachedLinearRegressionSums::FCachedLinearRegressionSums
              (&(this->EstimationState).TypedValue.TimecodeEstimator.ClockToTimecodeSamples,
               (longlong)iVar10);
    lVar7 = (**(code **)(pUVar2->_padding_ + 0x2c0))(pUVar2);
    (this->EstimationState).TypedValue.TimecodeEstimator.LastFrameRate = *(FFrameRate *)(lVar7 + 8);
    if (((longlong)iVar10 == 0) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4545176096206749600>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Private\\Estimation\\TimecodeEstimator.cpp"
                           ,0x60,"InNumSamples > 0"), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this->EstimationState).TypedValue.LastUpdateStats.bIsSet = false;
    *pbVar9 = true;
    return;
  }
LAB_14604f7db:
  pbVar9 = &(this->EstimationState).bIsSet;
  if (*pbVar9 != false) {
    pFVar1 = (this->EstimationState).TypedValue.TimecodeEstimator.ClockToTimecodeSamples.Samples.
             Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    *pbVar9 = false;
  }
  return;
}

// ReinitRegressionBuffer @ 14604f710

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
UTimecodeRegressionProvider::ReinitRegressionBuffer(UTimecodeRegressionProvider *this)

{
  UObjectBaseUtility *this_00;
  FScriptContainerElement *pFVar1;
  UTimecodeProvider *pUVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  IClockedTimeStep *pIVar6;
  longlong lVar7;
  int iVar8;
  bool *pbVar9;
  int iVar10;
  FName local_res8;
  FString local_38 [2];
  
  if (((this->OwningEngine).field0_0x0.DebugPtr == (UEngine *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Private\\Estimation\\TimecodeRegressionProvider.cpp"
                         ,0x5e,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = (UObjectBaseUtility *)
            (((this->OwningEngine).field0_0x0.DebugPtr)->CustomTimeStep).field0_0x0.DebugPtr;
  if (this_00 == (UObjectBaseUtility *)0x0) {
    pIVar6 = (IClockedTimeStep *)0x0;
  }
  else {
    pUVar5 = Z_Construct_UClass_UClockedTimeStep_NoRegister();
    pIVar6 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar5);
  }
  if (((1 < (byte)LogTimeManagement._0_1_) && (this_00 != (UObjectBaseUtility *)0x0)) &&
     (pIVar6 == (IClockedTimeStep *)0x0)) {
    local_res8.ComparisonIndex.Value = *(uint *)&this_00->field_0x18;
    local_res8.Number = *(uint *)&this_00->field_0x1c;
    ::FName::ToString(&local_res8,local_38);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogTimeManagement);
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
      goto LAB_14604f7db;
    }
  }
  pbVar9 = &(this->EstimationState).bIsSet;
  if (pIVar6 != (IClockedTimeStep *)0x0) {
    pUVar2 = (this->TimecodeImpl).field0_0x0.DebugPtr;
    iVar8 = 0x10000;
    if (this->NumSampledFrames < 0x10000) {
      iVar8 = this->NumSampledFrames;
    }
    iVar10 = 1;
    if (1 < iVar8) {
      iVar10 = iVar8;
    }
    if ((*pbVar9 != false) &&
       (pFVar1 = (this->EstimationState).TypedValue.TimecodeEstimator.ClockToTimecodeSamples.Samples
                 .Data.AllocatorInstance.Data, pFVar1 != (FScriptContainerElement *)0x0)) {
      FMemory::Free(pFVar1);
    }
    (this->EstimationState).TypedValue.TimecodeEstimator.StartClockTime.bIsSet = false;
    (this->EstimationState).TypedValue.TimecodeEstimator.TimecodeProvider = pUVar2;
    (this->EstimationState).TypedValue.TimecodeEstimator.EngineCustomTimeStep = pIVar6;
    (this->EstimationState).TypedValue.TimecodeEstimator.LinearRegressionFunction.Slope = 1.0;
    (this->EstimationState).TypedValue.TimecodeEstimator.LinearRegressionFunction.Offset = 0.0;
    UE::TimeManagement::FCachedLinearRegressionSums::FCachedLinearRegressionSums
              (&(this->EstimationState).TypedValue.TimecodeEstimator.ClockToTimecodeSamples,
               (longlong)iVar10);
    lVar7 = (**(code **)(pUVar2->_padding_ + 0x2c0))(pUVar2);
    (this->EstimationState).TypedValue.TimecodeEstimator.LastFrameRate = *(FFrameRate *)(lVar7 + 8);
    if (((longlong)iVar10 == 0) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_4545176096206749600>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\TimeManagement\\Private\\Estimation\\TimecodeEstimator.cpp"
                           ,0x60,"InNumSamples > 0"), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (this->EstimationState).TypedValue.LastUpdateStats.bIsSet = false;
    *pbVar9 = true;
    return;
  }
LAB_14604f7db:
  pbVar9 = &(this->EstimationState).bIsSet;
  if (*pbVar9 != false) {
    pFVar1 = (this->EstimationState).TypedValue.TimecodeEstimator.ClockToTimecodeSamples.Samples.
             Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    *pbVar9 = false;
  }
  return;
}

// SetIsAutoDetected @ 14604fa20

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
UTimecodeRegressionProvider::SetIsAutoDetected(UTimecodeRegressionProvider *this,bool param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014604fa27. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(((this->TimecodeImpl).field0_0x0.DebugPtr)->_padding_ + 0x2e8))();
  return;
}

// SetTimecodeImplementation @ 14604fa40

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
UTimecodeRegressionProvider::SetTimecodeImplementation
          (UTimecodeRegressionProvider *this,UTimecodeProvider *param_1)

{
  bool bVar1;
  undefined1 local_res10 [24];
  
  if ((param_1 != (UTimecodeProvider *)0x0) &&
     (((this->OwningEngine).field0_0x0.DebugPtr == (UEngine *)0x0 ||
      (bVar1 = `UTimecodeRegressionProvider::SetTimecodeImplementation'::__l3::<lambda_1>::
               operator()(local_res10), bVar1)))) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->TimecodeImpl).field0_0x0.DebugPtr = param_1;
  }
  return;
}

// Shutdown @ 14604fc70

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
UTimecodeRegressionProvider::Shutdown(UTimecodeRegressionProvider *this,UEngine *param_1)

{
  (**(code **)(((this->TimecodeImpl).field0_0x0.DebugPtr)->_padding_ + 0x2d8))();
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
             &((this->OwningEngine).field0_0x0.DebugPtr)->CustomTimeStepChangedEvent,this);
  (this->OwningEngine).field0_0x0.DebugPtr = (UEngine *)0x0;
  return;
}

// StaticRegisterNativesUTimecodeRegressionProvider @ 14604fe70

void __cdecl UTimecodeRegressionProvider::StaticRegisterNativesUTimecodeRegressionProvider(void)

{
  return;
}

// SupportsAutoDetected @ 14604feb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UTimecodeRegressionProvider::SupportsAutoDetected(UTimecodeRegressionProvider *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014604feb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(((this->TimecodeImpl).field0_0x0.DebugPtr)->_padding_ + 0x2e0))();
  return (bool)uVar1;
}

// SupportsTimestep @ 14604fee0

bool __cdecl UTimecodeRegressionProvider::SupportsTimestep(UEngineCustomTimeStep *param_1)

{
  UClass *this;
  bool bVar1;
  UClass *pUVar2;
  
  if ((param_1 != (UEngineCustomTimeStep *)0x0) &&
     (this = *(UClass **)&param_1->field_0x10, this != (UClass *)0x0)) {
    pUVar2 = Z_Construct_UClass_UClockedTimeStep_NoRegister();
    bVar1 = UClass::ImplementsInterface(this,pUVar2);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// operator() @ 1504e0e10

bool __thiscall `UTimecodeRegressionProvider::Initialize'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5346386147738124215>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5346386147738124215>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504e0e50

bool __thiscall
`UTimecodeRegressionProvider::SetTimecodeImplementation'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5346386147738124268>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5346386147738124268>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}


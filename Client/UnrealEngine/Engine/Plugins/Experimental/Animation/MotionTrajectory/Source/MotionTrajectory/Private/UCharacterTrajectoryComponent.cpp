// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionTrajectory
// Functions: 11

// StaticClass @ 14a94aaa0

UClass * __cdecl UCharacterTrajectoryComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCharacterTrajectoryComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionTrajectory",L"CharacterTrajectoryComponent",
               &Z_Registration_Info_UClass_UCharacterTrajectoryComponent.InnerSingleton,
               StaticRegisterNativesUCharacterTrajectoryComponent,0x2f0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UCharacterTrajectoryComponent>,
               InternalVTableHelperCtorCaller<UCharacterTrajectoryComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCharacterTrajectoryComponent.InnerSingleton;
}

// UCharacterTrajectoryComponent @ 14a94b230

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UCharacterTrajectoryComponent * __thiscall
UCharacterTrajectoryComponent::UCharacterTrajectoryComponent
          (UCharacterTrajectoryComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->Trajectory).Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->Trajectory).Samples.ArrayNum = 0;
  (this->Trajectory).Samples.ArrayMax = 0;
  (this->SamplingData).HistoryLengthSeconds = 1.5;
  (this->SamplingData).HistorySamplesPerSecond = 5;
  (this->SamplingData).PredictionLengthSeconds = 1.5;
  (this->SamplingData).PredictionSamplesPerSecond = 5;
  (this->SamplingData).NumHistorySamples = 0;
  (this->SamplingData).SecondsPerHistorySample = 0.0;
  (this->SamplingData).NumPredictionSamples = 0;
  (this->SamplingData).SecondsPerPredictionSample = 0.0;
  FCharacterTrajectoryData::FCharacterTrajectoryData(&this->CharacterTrajectoryData);
  (this->TranslationHistory).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TranslationHistory).ArrayNum = 0;
  (this->TranslationHistory).ArrayMax = 0;
  this->LastUpdateFrameNumber = 0;
  return this;
}

// UCharacterTrajectoryComponent @ 14a94b2e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UCharacterTrajectoryComponent * __thiscall
UCharacterTrajectoryComponent::UCharacterTrajectoryComponent
          (UCharacterTrajectoryComponent *this,FObjectInitializer *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  (this->Trajectory).Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->Trajectory).Samples.ArrayNum = 0;
  (this->Trajectory).Samples.ArrayMax = 0;
  (this->SamplingData).HistoryLengthSeconds = 1.5;
  (this->SamplingData).HistorySamplesPerSecond = 5;
  (this->SamplingData).PredictionLengthSeconds = 1.5;
  (this->SamplingData).PredictionSamplesPerSecond = 5;
  (this->SamplingData).NumHistorySamples = 0;
  (this->SamplingData).SecondsPerHistorySample = 0.0;
  (this->SamplingData).NumPredictionSamples = 0;
  (this->SamplingData).SecondsPerPredictionSample = 0.0;
  FCharacterTrajectoryData::FCharacterTrajectoryData(&this->CharacterTrajectoryData);
  this->field_0x42 = this->field_0x42 & 0xf9;
  this->field_0x9b = this->field_0x9b | 1;
  (this->TranslationHistory).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TranslationHistory).ArrayNum = 0;
  (this->TranslationHistory).ArrayMax = 0;
  this->LastUpdateFrameNumber = 0;
  return this;
}

// ~UCharacterTrajectoryComponent @ 14a94b460

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
UCharacterTrajectoryComponent::~UCharacterTrajectoryComponent(UCharacterTrajectoryComponent *this)

{
  FScriptContainerElement *pFVar1;
  
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  pFVar1 = (this->TranslationHistory).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FCharacterTrajectoryData::~FCharacterTrajectoryData(&this->CharacterTrajectoryData);
  pFVar1 = (this->Trajectory).Samples.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// BeginPlay @ 14a94b590

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UCharacterTrajectoryComponent::BeginPlay(UCharacterTrajectoryComponent *this)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  float fVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  USceneComponent *this_00;
  code *pcVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  bool bVar12;
  int iVar13;
  UClass *pUVar14;
  TRotator<double> *this_01;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  TVector<double>_u_0 local_68;
  TRotator<double> local_50;
  TQuat<double> local_38;
  
  UActorComponent::BeginPlay((UActorComponent *)this);
  if (((this->SamplingData).HistorySamplesPerSecond == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("HistorySamplesPerSecond",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Animation\\MotionTrajectory\\Source\\MotionTrajectory\\Private\\MotionTrajectoryLibrary.cpp"
                          ,0xd,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (((this->SamplingData).PredictionSamplesPerSecond == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("PredictionSamplesPerSecond",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Animation\\MotionTrajectory\\Source\\MotionTrajectory\\Private\\MotionTrajectoryLibrary.cpp"
                          ,0xe,L""), bVar12)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  fVar10 = __real_bf000000;
  fVar9 = __real_3f800000;
  pTVar2 = &this->TranslationHistory;
  fVar17 = (this->SamplingData).HistoryLengthSeconds;
  fVar16 = (float)(this->SamplingData).HistorySamplesPerSecond;
  fVar3 = (this->SamplingData).PredictionLengthSeconds;
  (this->SamplingData).NumHistorySamples =
       -((int)ROUND(__real_bf000000 - (fVar17 + fVar17) * fVar16) >> 1);
  fVar17 = (float)(this->SamplingData).PredictionSamplesPerSecond;
  (this->SamplingData).SecondsPerHistorySample = fVar9 / fVar16;
  (this->SamplingData).SecondsPerPredictionSample = fVar9 / fVar17;
  (this->SamplingData).NumPredictionSamples = -((int)ROUND(fVar10 - (fVar3 + fVar3) * fVar17) >> 1);
  uVar4 = (this->SamplingData).NumHistorySamples;
  uVar15 = (ulonglong)uVar4;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar15);
  }
  piVar1 = &(this->TranslationHistory).ArrayMax;
  (this->TranslationHistory).ArrayNum = 0;
  if (*piVar1 != uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar4,&pTVar2->AllocatorInstance,0,piVar1);
  }
  if (0 < (int)uVar4) {
    do {
      pFVar5 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar5 < (FScriptContainerElement *)
                     ((longlong)&UE::Math::TVector<double>::ZeroVector.field0_0x0 + 1)) &&
          (&UE::Math::TVector<double>::ZeroVector < pFVar5 + (longlong)*piVar1 * 0x18)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar13 = (this->TranslationHistory).ArrayNum;
      if (iVar13 == *piVar1) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->TranslationHistory).ArrayNum = iVar13 + 1;
      uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      pFVar6 = (pTVar2->AllocatorInstance).Data;
      pFVar5 = pFVar6 + (longlong)iVar13 * 0x18;
      *(double *)pFVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      *(undefined8 *)(pFVar5 + 8) = uVar11;
      *(double *)(pFVar6 + (longlong)iVar13 * 0x18 + 0x10) =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
  }
  lVar7 = *(longlong *)&this->field_0xa8;
  if (lVar7 != 0) {
    pUVar14 = Z_Construct_UClass_ACharacter_NoRegister();
    iVar13 = (int)pUVar14->_padding_;
    if ((iVar13 <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar13 * 8)
        == &pUVar14->_padding_)) {
      this_00 = *(USceneComponent **)(lVar7 + 0x340);
      if (this_00 != (USceneComponent *)0x0) {
        local_68._s_0.X = (this_00->ComponentToWorld).Translation.XY.m128d_f64[0];
        local_68._s_0.Y = (this_00->ComponentToWorld).Translation.XY.m128d_f64[1];
        local_68._s_0.Z = (this_00->ComponentToWorld).Translation.ZW.m128d_f64[0];
        this_01 = USceneComponent::GetComponentRotation(this_00,&local_50);
        UE::Math::TRotator<double>::Quaternion(this_01,&local_38);
        FMotionTrajectoryLibrary::InitTrajectorySamples
                  (&this->Trajectory,&this->SamplingData,(TVector<double> *)&local_68._s_0,&local_38
                  );
        return;
      }
      bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<1363217422839971912>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Animation\\MotionTrajectory\\Source\\MotionTrajectory\\Private\\CharacterTrajectoryComponent.cpp"
                          ,0x48,"false");
      if (!bVar12) {
        return;
      }
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (1 < (byte)LogMotionTrajectory._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMotionTrajectory);
  }
  return;
}

// GetPrivateStaticClass @ 14a94b8e0

UClass * __cdecl UCharacterTrajectoryComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UCharacterTrajectoryComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MotionTrajectory",L"CharacterTrajectoryComponent",
               &Z_Registration_Info_UClass_UCharacterTrajectoryComponent.InnerSingleton,
               StaticRegisterNativesUCharacterTrajectoryComponent,0x2f0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UCharacterTrajectoryComponent>,
               InternalVTableHelperCtorCaller<UCharacterTrajectoryComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UCharacterTrajectoryComponent.InnerSingleton;
}

// InitializeComponent @ 14a94be60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UCharacterTrajectoryComponent::InitializeComponent(UCharacterTrajectoryComponent *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  UClass *pUVar7;
  char *pcVar8;
  UObject *this_00;
  UFunction *pUVar9;
  <lambda_1> local_res8 [8];
  undefined8 local_res10;
  FName local_res18;
  FName local_res20;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_b8;
  FWeakObjectPtr local_b0;
  FName local_a8;
  UCharacterTrajectoryComponent *local_a0;
  FName *local_98;
  TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> local_90;
  FDestructionSentinel local_80;
  FReadAccessScope local_68;
  FReadAccessScope local_50;
  
  UActorComponent::InitializeComponent((UActorComponent *)this);
  lVar2 = *(longlong *)&this->field_0xa8;
  if (lVar2 == 0) {
LAB_14a94c092:
    if (1 < (byte)LogMotionTrajectory._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMotionTrajectory);
    }
    return;
  }
  pUVar7 = Z_Construct_UClass_ACharacter_NoRegister();
  iVar1 = (int)pUVar7->_padding_;
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
      &pUVar7->_padding_)) goto LAB_14a94c092;
  pcVar8 = strstr("&UCharacterTrajectoryComponent::OnMovementUpdated","::");
  pcVar5 = (char *)0x0;
  while (pcVar4 = pcVar8, pcVar4 != (char *)0x0) {
    pcVar8 = strstr(pcVar4 + 1,"::");
    pcVar5 = pcVar4;
  }
  if (((pcVar5 == (char *)0x0) || (pcVar5[2] == '0')) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function"), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  ::FName::FName(&local_res20,pcVar5 + 2);
  local_b8.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_b0.ObjectIndex = 0;
  local_b0.ObjectSerialNumber = 0;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  local_res18 = local_res20;
  local_a0 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_a0);
  local_a8 = local_res18;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_68);
  local_res10 = 0;
  if ((local_a8 == (FName)0x0) ||
     (this_00 = FWeakObjectPtr::Get(&local_b0), this_00 == (UObject *)0x0)) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
  }
  else {
    pUVar9 = UObject::FindFunction(this_00,local_a8);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_68);
    if (pUVar9 != (UFunction *)0x0) goto LAB_14a94c015;
  }
  local_98 = &local_res18;
  `TBaseDynamicDelegate<FNotThreadSafeDelegateMode,void,float,UE::Math::TVector<double>,UE::Math::TVector<double>_>
  ::__Internal_BindDynamic<UCharacterTrajectoryComponent>'::__l2::<lambda_1>::operator()(&local_98);
LAB_14a94c015:
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_b8,&local_50);
  local_90.Object = local_b0;
  local_90.FunctionName = local_a8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_50);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar2 + 0x4d0),
             (FWriteAccessScope *)&local_80);
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
  RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
            ((TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              *)(lVar2 + 0x4d8),local_res8,Default);
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::AddInternal
            ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(lVar2 + 0x4d0),&local_90);
  if (local_80.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_80.Accessor,&local_80);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_b8.AccessDetector);
  return;
}

// OnMovementUpdated @ 14a94c0f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UCharacterTrajectoryComponent::OnMovementUpdated
          (UCharacterTrajectoryComponent *this,float param_1,TVector<double> *param_2,
          TVector<double> *param_3)

{
  int iVar1;
  ACharacter *pAVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  UClass *pUVar6;
  longlong lVar7;
  UWorld *pUVar8;
  undefined4 uStack_3c;
  TArrayView<UE::Math::TVector<double>,int> local_38 [3];
  
  if (((this->LastUpdateFrameNumber == 0) || (this->LastUpdateFrameNumber != GFrameNumber)) &&
     (0.0 < param_1)) {
    pAVar2 = *(ACharacter **)&this->field_0xa8;
    if (pAVar2 != (ACharacter *)0x0) {
      pUVar6 = Z_Construct_UClass_ACharacter_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pAVar2->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pAVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar6->_padding_)) {
        FCharacterTrajectoryData::UpdateDataFromCharacter
                  (&this->CharacterTrajectoryData,param_1,pAVar2);
        local_38[0].DataPtr = (TVector<double> *)(this->TranslationHistory).AllocatorInstance.Data;
        iVar1 = (this->TranslationHistory).ArrayNum;
        if ((iVar1 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_38[0]._12_4_ = uStack_3c;
        local_38[0].ArrayNum = iVar1;
        FMotionTrajectoryLibrary::UpdateHistory_TransformHistory
                  (&this->Trajectory,local_38,&this->CharacterTrajectoryData,&this->SamplingData,
                   param_1);
        FMotionTrajectoryLibrary::UpdatePrediction_SimulateCharacterMovement
                  (&this->Trajectory,&this->CharacterTrajectoryData,&this->SamplingData);
        this->LastUpdateFrameNumber = GFrameNumber;
        pTVar4 = CVarCharacterTrajectoryDebug.Ref;
        bVar5 = IsInParallelGameThread();
        if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
          lVar7 = 0;
        }
        else {
          lVar7 = 4;
        }
        if (*(int *)((longlong)pTVar4->ShadowedValue + lVar7) == 0) {
          return;
        }
        pUVar8 = *(UWorld **)&this->field_0xb0;
        if (pUVar8 == (UWorld *)0x0) {
          pUVar8 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
        }
        UTransformTrajectoryBlueprintLibrary::DebugDrawTrajectory(&this->Trajectory,pUVar8,0.0,0.0);
        return;
      }
    }
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1363217422839971934>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\Animation\\MotionTrajectory\\Source\\MotionTrajectory\\Private\\CharacterTrajectoryComponent.cpp"
                       ,0x5e,"Character");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// StaticRegisterNativesUCharacterTrajectoryComponent @ 14a94c3b0

void __cdecl UCharacterTrajectoryComponent::StaticRegisterNativesUCharacterTrajectoryComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UCharacterTrajectoryComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UninitializeComponent @ 14a94c980

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
UCharacterTrajectoryComponent::UninitializeComponent(UCharacterTrajectoryComponent *this)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  UClass *pUVar7;
  char *pcVar8;
  FName local_res8;
  
  lVar2 = *(longlong *)&this->field_0xa8;
  if (lVar2 != 0) {
    pUVar7 = Z_Construct_UClass_ACharacter_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) {
      pcVar8 = strstr("&UCharacterTrajectoryComponent::OnMovementUpdated","::");
      pcVar5 = (char *)0x0;
      while (pcVar4 = pcVar8, pcVar4 != (char *)0x0) {
        pcVar8 = strstr(pcVar4 + 1,"::");
        pcVar5 = pcVar4;
      }
      if (((pcVar5 == (char *)0x0) || (pcVar5[2] == '0')) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result && Result[2] != \'0\'",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                             ,0x1da,L"\'%hs\' does not look like a member function"), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      ::FName::FName(&local_res8,pcVar5 + 2);
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::Remove
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)(lVar2 + 0x4d0),
                 (UObject *)this,local_res8);
      UActorComponent::UninitializeComponent((UActorComponent *)this);
      return;
    }
  }
  if (1 < (byte)LogMotionTrajectory._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogMotionTrajectory);
  }
  UActorComponent::UninitializeComponent((UActorComponent *)this);
  return;
}

// execOnMovementUpdated @ 14a94e160

void __cdecl
UCharacterTrajectoryComponent::execOnMovementUpdated(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float local_res10 [6];
  double local_78;
  double dStack_70;
  double local_68;
  double local_60;
  double dStack_58;
  double local_50;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_28;
  
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_48._s_0.Z = local_68;
  local_48._s_0.X = local_78;
  local_48._s_0.Y = dStack_70;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28._s_0.Z = local_50;
  local_28._s_0.X = local_60;
  local_28._s_0.Y = dStack_58;
  OnMovementUpdated((UCharacterTrajectoryComponent *)param_1,local_res10[0],
                    (TVector<double> *)&local_28._s_0,(TVector<double> *)&local_48._s_0);
  return;
}


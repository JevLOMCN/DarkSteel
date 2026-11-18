// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 12

// StaticStruct @ 14a898d00

UScriptStruct * __cdecl FAnimNode_PoseSearchHistoryCollector_Base::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base,
                         (UObject *)pUVar1,L"AnimNode_PoseSearchHistoryCollector_Base");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_PoseSearchHistoryCollector_Base.OuterSingleton;
}

// NeedsOnInitializeAnimInstance @ 14a898d80

bool __thiscall
FAnimNode_PoseSearchHistoryCollector_Base::NeedsOnInitializeAnimInstance
          (FAnimNode_PoseSearchHistoryCollector_Base *this)

{
  return true;
}

// OnInitializeAnimInstance @ 14a898d90

void __thiscall
FAnimNode_PoseSearchHistoryCollector_Base::OnInitializeAnimInstance
          (FAnimNode_PoseSearchHistoryCollector_Base *this,FAnimInstanceProxy *param_1,
          UAnimInstance *param_2)

{
  code *pcVar1;
  bool bVar2;
  FGenerateTrajectoryPoseHistory *this_00;
  TRawPtrProxy<UE::PoseSearch::FGenerateTrajectoryPoseHistory> local_res8;
  
  this_00 = ::operator_new(600);
  if (this_00 == (FGenerateTrajectoryPoseHistory *)0x0) {
    local_res8.Object = (FGenerateTrajectoryPoseHistory *)0x0;
  }
  else {
    memset(this_00,0,600);
    local_res8.Object =
         UE::PoseSearch::FGenerateTrajectoryPoseHistory::FGenerateTrajectoryPoseHistory(this_00);
    if ((((local_res8.Object != (FGenerateTrajectoryPoseHistory *)0x0) &&
         ((local_res8.Object)->_padding_ != 0)) && ((local_res8.Object)->_padding_ != 0)) &&
       (0 < *(int *)((local_res8.Object)->_padding_ + 8))) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InObject || !InObject->DoesSharedInstanceExist()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x7a5,L"Trying to share an already-shared object");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  TSharedPtr<UE::PoseSearch::FGenerateTrajectoryPoseHistory,1>::
  operator=<UE::PoseSearch::FGenerateTrajectoryPoseHistory>(&this->PoseHistoryPtr,&local_res8);
  return;
}

// Initialize_AnyThread @ 14a898e40

void __thiscall
FAnimNode_PoseSearchHistoryCollector_Base::Initialize_AnyThread
          (FAnimNode_PoseSearchHistoryCollector_Base *this,FAnimationInitializeContext *param_1)

{
  TSharedPtr<UE::PoseSearch::FGenerateTrajectoryPoseHistory,1> *this_00;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FGenerateTrajectoryPoseHistory *pFVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  USkeleton *pUVar7;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar8;
  undefined1 local_res8 [8];
  TRawPtrProxy<UE::PoseSearch::FGenerateTrajectoryPoseHistory> local_res18 [2];
  FMemMark local_f8;
  FBlendedCurve local_d0;
  code *local_b0;
  undefined1 *local_a8;
  TArrayView<FName_const_,int> local_a0;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_90;
  FAIPComponentSpacePoseProvider local_78;
  
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  this_00 = &this->PoseHistoryPtr;
  if (this_00->Object == (FGenerateTrajectoryPoseHistory *)0x0) {
    pFVar4 = ::operator_new(600);
    if (pFVar4 == (FGenerateTrajectoryPoseHistory *)0x0) {
      local_res18[0].Object = (FGenerateTrajectoryPoseHistory *)0x0;
    }
    else {
      memset(pFVar4,0,600);
      local_res18[0].Object =
           UE::PoseSearch::FGenerateTrajectoryPoseHistory::FGenerateTrajectoryPoseHistory(pFVar4);
      if ((((local_res18[0].Object != (FGenerateTrajectoryPoseHistory *)0x0) &&
           ((local_res18[0].Object)->_padding_ != 0)) && ((local_res18[0].Object)->_padding_ != 0))
         && (0 < *(int *)((local_res18[0].Object)->_padding_ + 8))) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InObject || !InObject->DoesSharedInstanceExist()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x7a5,L"Trying to share an already-shared object");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
    TSharedPtr<UE::PoseSearch::FGenerateTrajectoryPoseHistory,1>::
    operator=<UE::PoseSearch::FGenerateTrajectoryPoseHistory>(this_00,local_res18);
    if (this_00->Object == (FGenerateTrajectoryPoseHistory *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  UE::PoseSearch::FPoseHistory::Initialize_AnyThread
            ((FPoseHistory *)this_00->Object,this->PoseCount,this->SamplingInterval);
  puVar5 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_a8 = local_res8;
  local_b0 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_b0,puVar5);
  local_f8.Mem = (FMemStackBase *)(pFVar6 + 2);
  local_f8.Top = (local_f8.Mem)->Top;
  local_f8.SavedChunk = *(FTaggedMemory **)(pFVar6 + 4);
  local_f8.bPopped = false;
  local_f8.NextTopmostMark = *(FMemMark **)(pFVar6 + 5);
  pFVar6[5] = (FTlsAutoCleanup)&local_f8;
  *(int *)(pFVar6 + 6) = *(int *)(pFVar6 + 6) + 1;
  UE::PoseSearch::FAIPComponentSpacePoseProvider::FAIPComponentSpacePoseProvider
            (&local_78,*(FAnimInstanceProxy **)param_1);
  pUVar7 = UE::PoseSearch::FAIPComponentSpacePoseProvider::GetSkeletonAsset(&local_78);
  if (pUVar7 != (USkeleton *)0x0) {
    if (this_00->Object == (FGenerateTrajectoryPoseHistory *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_a0.DataPtr = (FName *)(this->CollectedCurves).AllocatorInstance.Data;
    iVar1 = (this->CollectedCurves).ArrayNum;
    pFVar4 = this_00->Object;
    if (iVar1 < 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_d0._17_4_ = 0;
    local_d0._21_2_ = 0;
    local_d0._23_1_ = 0;
    local_d0._0_8_ = 0;
    local_d0._8_8_ = 0;
    local_d0._16_1_ = 0;
    local_d0._24_8_ = 0;
    local_a0.ArrayNum = iVar1;
    pTVar8 = GetRequiredBones(this,&local_90,*(FAnimInstanceProxy **)param_1);
    UE::PoseSearch::FPoseHistory::EvaluateComponentSpace_AnyThread
              ((FPoseHistory *)pFVar4,0.0,(IComponentSpacePoseProvider *)&local_78,
               this->bStoreScales,this->RootBoneRecoveryTime,this->RootBoneTranslationRecoveryRatio,
               this->RootBoneRotationRecoveryRatio,true,true,pTVar8,&local_d0,&local_a0);
    if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90.AllocatorInstance.Data);
    }
  }
  local_78._padding_ = (longlong)&___7IComponentSpacePoseProvider_PoseSearch_UE__6B_;
  if (local_f8.bPopped == false) {
    if ((local_f8.Mem)->TopMark != &local_f8) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mem.TopMark == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                         ,0x215,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    local_f8.bPopped = true;
    (local_f8.Mem)->NumMarks = (local_f8.Mem)->NumMarks + -1;
    if (local_f8.SavedChunk != (local_f8.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_f8.Mem,local_f8.SavedChunk);
    }
    (local_f8.Mem)->Top = local_f8.Top;
    (local_f8.Mem)->TopMark = local_f8.NextTopmostMark;
  }
  return;
}

// CacheBones_AnyThread @ 14a899170

void __thiscall
FAnimNode_PoseSearchHistoryCollector_Base::CacheBones_AnyThread
          (FAnimNode_PoseSearchHistoryCollector_Base *this,FAnimationCacheBonesContext *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  FStatsHierarchical::BeginMeasurement
            ("FAnimNode_PoseSearchHistoryCollector_Base::CacheBones_AnyThread");
  if (*(longlong *)param_1 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Context.AnimInstanceProxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\AnimNode_PoseSearchHistoryCollector.cpp"
                       ,0x57,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FAnimNode_Base::CacheBones_AnyThread((FAnimNode_Base *)this,param_1);
  this->bCacheBones = true;
  FStatsHierarchical::EndMeasurement();
  return;
}

// Update_AnyThread @ 14a8991e0

void __thiscall
FAnimNode_PoseSearchHistoryCollector_Base::Update_AnyThread
          (FAnimNode_PoseSearchHistoryCollector_Base *this,FAnimationUpdateContext *param_1)

{
  float fVar1;
  int iVar2;
  FGenerateTrajectoryPoseHistory *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  FExposedValueHandler *this_00;
  FInteractionValidator local_28 [2];
  
  if (param_1->_padding_ == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Context.AnimInstanceProxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\AnimNode_PoseSearchHistoryCollector.cpp"
                       ,0x62,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  UE::PoseSearch::FInteractionValidator::FInteractionValidator
            (local_28,*(UObject **)(param_1->_padding_ + 0x140));
  this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
  if ((this->PoseHistoryPtr).Object == (FGenerateTrajectoryPoseHistory *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("PoseHistoryPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\AnimNode_PoseSearchHistoryCollector.cpp"
                       ,0x66,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  bVar6 = this->bGenerateTrajectory;
  if ((this->PoseHistoryPtr).Object == (FGenerateTrajectoryPoseHistory *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  ((this->PoseHistoryPtr).Object)->bGenerateTrajectory = bVar6;
  if ((this->PoseHistoryPtr).Object == (FGenerateTrajectoryPoseHistory *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = (this->PoseHistoryPtr).Object;
  if (pFVar3->bGenerateTrajectory == false) {
    if (pFVar3 == (FGenerateTrajectoryPoseHistory *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar3 = (this->PoseHistoryPtr).Object;
    (**(code **)(pFVar3->_padding_ + 0x20))
              (pFVar3,&this->TransformTrajectory,this->TrajectorySpeedMultiplier);
  }
  else {
    iVar2 = this->TrajectoryHistoryCount;
    if (this->TrajectoryHistoryCount < this->PoseCount) {
      iVar2 = this->PoseCount;
    }
    if (pFVar3 == (FGenerateTrajectoryPoseHistory *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    (((this->PoseHistoryPtr).Object)->TrajectoryDataSampling).NumHistorySamples = iVar2;
    fVar1 = this->SamplingInterval;
    if ((this->PoseHistoryPtr).Object == (FGenerateTrajectoryPoseHistory *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    (((this->PoseHistoryPtr).Object)->TrajectoryDataSampling).SecondsPerHistorySample = fVar1;
    iVar2 = this->TrajectoryPredictionCount;
    if ((this->PoseHistoryPtr).Object == (FGenerateTrajectoryPoseHistory *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    (((this->PoseHistoryPtr).Object)->TrajectoryDataSampling).NumPredictionSamples = iVar2;
    fVar1 = this->PredictionSamplingInterval;
    if ((this->PoseHistoryPtr).Object == (FGenerateTrajectoryPoseHistory *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    (((this->PoseHistoryPtr).Object)->TrajectoryDataSampling).SecondsPerPredictionSample = fVar1;
    if ((this->PoseHistoryPtr).Object == (FGenerateTrajectoryPoseHistory *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    FPoseSearchTrajectoryData::operator=
              (&((this->PoseHistoryPtr).Object)->TrajectoryData,&this->TrajectoryData);
    if ((this->PoseHistoryPtr).Object == (FGenerateTrajectoryPoseHistory *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar3 = (this->PoseHistoryPtr).Object;
    (**(code **)(pFVar3->_padding_ + 0x28))
              (pFVar3,*(undefined8 *)(param_1->_padding_ + 0x140),param_1->DeltaTime);
  }
  if ((this->PoseHistoryPtr).Object == (FGenerateTrajectoryPoseHistory *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  ((this->PoseHistoryPtr).Object)->bIsTrajectoryGeneratedBeforePreUpdate = false;
  lVar4 = param_1->_padding_;
  (this->UpdateCounter).Counter = *(short *)(lVar4 + 0x5b0);
  (this->UpdateCounter).LastSyncronizedFrame = *(ulong64 *)(lVar4 + 0x5a8);
  (this->UpdateCounter).SkipFrames = *(short *)(lVar4 + 0x5b2);
  UE::PoseSearch::FInteractionValidator::~FInteractionValidator(local_28);
  return;
}

// FAnimNode_PoseSearchHistoryCollector_Base @ 14a8aa840

FAnimNode_PoseSearchHistoryCollector_Base * __thiscall
FAnimNode_PoseSearchHistoryCollector_Base::FAnimNode_PoseSearchHistoryCollector_Base
          (FAnimNode_PoseSearchHistoryCollector_Base *this)

{
  this->PoseCount = 2;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FAnimNode_PoseSearchHistoryCollector_Base__6B_;
  this->SamplingInterval = 0.04;
  (this->UpdateCounter).LastSyncronizedFrame = 0xffffffffffffffff;
  (this->CollectedBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollectedBones).ArrayNum = 0;
  (this->CollectedBones).ArrayMax = 0;
  (this->CollectedCurves).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollectedCurves).ArrayNum = 0;
  (this->CollectedCurves).ArrayMax = 0;
  this->bInitializeWithRefPose_DEPRECATED = false;
  this->bResetOnBecomingRelevant = true;
  this->bStoreScales = false;
  this->RootBoneRecoveryTime = 0.0;
  this->RootBoneTranslationRecoveryRatio = 1.0;
  this->RootBoneRotationRecoveryRatio = 1.0;
  (this->UpdateCounter).Counter = -1;
  (this->UpdateCounter).SkipFrames = 0;
  this->bGenerateTrajectory = false;
  (this->TransformTrajectory).Samples.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransformTrajectory).Samples.ArrayNum = 0;
  (this->TransformTrajectory).Samples.ArrayMax = 0;
  this->TrajectorySpeedMultiplier = 1.0;
  this->TrajectoryHistoryCount = 10;
  this->TrajectoryPredictionCount = 8;
  this->PredictionSamplingInterval = 0.4;
  (this->TrajectoryData).RotateTowardsMovementSpeed = 10.0;
  (this->TrajectoryData).MaxControllerYawRate = 70.0;
  (this->TrajectoryData).BendVelocityTowardsAcceleration = 0.0;
  (this->TrajectoryData).bUseSpeedRemappingCurve = false;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&(this->TrajectoryData).SpeedRemappingCurve);
  (this->TrajectoryData).bUseAccelerationRemappingCurve = false;
  FRuntimeFloatCurve::FRuntimeFloatCurve(&(this->TrajectoryData).AccelerationRemappingCurve);
  this->bCacheBones = false;
  UE::PoseSearch::FPoseHistory::FPoseHistory(&this->PoseHistory);
  this->bIsTrajectoryGeneratedBeforePreUpdate = false;
  (this->PoseHistoryPtr).Object = (FGenerateTrajectoryPoseHistory *)0x0;
  (this->PoseHistoryPtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~FAnimNode_PoseSearchHistoryCollector_Base @ 14a8ad890

void __thiscall
FAnimNode_PoseSearchHistoryCollector_Base::~FAnimNode_PoseSearchHistoryCollector_Base
          (FAnimNode_PoseSearchHistoryCollector_Base *this)

{
  FScriptContainerElement *pFVar1;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->PoseHistoryPtr).SharedReferenceCount.ReferenceController);
  UE::PoseSearch::FPoseHistory::~FPoseHistory(&this->PoseHistory);
  FPoseSearchTrajectoryData::~FPoseSearchTrajectoryData(&this->TrajectoryData);
  pFVar1 = (this->TransformTrajectory).Samples.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CollectedCurves).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CollectedBones).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FAnimNode_Base__6B_;
  return;
}

// operator= @ 14a8ae760

FAnimNode_PoseSearchHistoryCollector_Base * __thiscall
FAnimNode_PoseSearchHistoryCollector_Base::operator=
          (FAnimNode_PoseSearchHistoryCollector_Base *this,
          FAnimNode_PoseSearchHistoryCollector_Base *param_1)

{
  TArray<FBoneReference,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FTransformTrajectory *pFVar3;
  int iVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FGenerateTrajectoryPoseHistory *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  short sVar10;
  short sVar11;
  undefined4 uVar12;
  
  this->_padding_ = param_1->_padding_;
  this->PoseCount = param_1->PoseCount;
  this->SamplingInterval = param_1->SamplingInterval;
  pTVar1 = &this->CollectedBones;
  if (pTVar1 != &param_1->CollectedBones) {
    iVar4 = (param_1->CollectedBones).ArrayNum;
    piVar2 = &(this->CollectedBones).ArrayMax;
    pFVar6 = (param_1->CollectedBones).AllocatorInstance.Data;
    (this->CollectedBones).ArrayNum = iVar4;
    if ((iVar4 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,iVar4,*piVar2,&pTVar1->AllocatorInstance,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pTVar1->AllocatorInstance).Data,pFVar6,(longlong)iVar4 << 4);
      }
    }
  }
  TArray<FName,TSizedDefaultAllocator<32>_>::operator=
            (&this->CollectedCurves,&param_1->CollectedCurves);
  this->bInitializeWithRefPose_DEPRECATED = param_1->bInitializeWithRefPose_DEPRECATED;
  pFVar3 = &this->TransformTrajectory;
  this->bResetOnBecomingRelevant = param_1->bResetOnBecomingRelevant;
  this->bStoreScales = param_1->bStoreScales;
  this->RootBoneRecoveryTime = param_1->RootBoneRecoveryTime;
  this->RootBoneTranslationRecoveryRatio = param_1->RootBoneTranslationRecoveryRatio;
  this->RootBoneRotationRecoveryRatio = param_1->RootBoneRotationRecoveryRatio;
  sVar10 = (param_1->UpdateCounter).Counter;
  sVar11 = (param_1->UpdateCounter).SkipFrames;
  uVar12 = *(undefined4 *)&(param_1->UpdateCounter).field_0xc;
  (this->UpdateCounter).LastSyncronizedFrame = (param_1->UpdateCounter).LastSyncronizedFrame;
  (this->UpdateCounter).Counter = sVar10;
  (this->UpdateCounter).SkipFrames = sVar11;
  *(undefined4 *)&(this->UpdateCounter).field_0xc = uVar12;
  this->bGenerateTrajectory = param_1->bGenerateTrajectory;
  if (pFVar3 != &param_1->TransformTrajectory) {
    iVar4 = (param_1->TransformTrajectory).Samples.ArrayNum;
    piVar2 = &(this->TransformTrajectory).Samples.ArrayMax;
    pFVar6 = (param_1->TransformTrajectory).Samples.AllocatorInstance.Data;
    iVar5 = *piVar2;
    (this->TransformTrajectory).Samples.ArrayNum = iVar4;
    if ((iVar4 == 0) && (iVar5 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,0x10,iVar4,iVar5,(ForAnyElementType *)pFVar3,iVar4,piVar2);
      if (iVar4 != 0) {
        memcpy((pFVar3->Samples).AllocatorInstance.Data,pFVar6,(longlong)iVar4 << 6);
      }
    }
  }
  this->TrajectorySpeedMultiplier = param_1->TrajectorySpeedMultiplier;
  this->TrajectoryHistoryCount = param_1->TrajectoryHistoryCount;
  this->TrajectoryPredictionCount = param_1->TrajectoryPredictionCount;
  this->PredictionSamplingInterval = param_1->PredictionSamplingInterval;
  (this->TrajectoryData).RotateTowardsMovementSpeed =
       (param_1->TrajectoryData).RotateTowardsMovementSpeed;
  (this->TrajectoryData).MaxControllerYawRate = (param_1->TrajectoryData).MaxControllerYawRate;
  (this->TrajectoryData).BendVelocityTowardsAcceleration =
       (param_1->TrajectoryData).BendVelocityTowardsAcceleration;
  (this->TrajectoryData).bUseSpeedRemappingCurve = (param_1->TrajectoryData).bUseSpeedRemappingCurve
  ;
  FRuntimeFloatCurve::operator=
            (&(this->TrajectoryData).SpeedRemappingCurve,
             &(param_1->TrajectoryData).SpeedRemappingCurve);
  (this->TrajectoryData).bUseAccelerationRemappingCurve =
       (param_1->TrajectoryData).bUseAccelerationRemappingCurve;
  FRuntimeFloatCurve::operator=
            (&(this->TrajectoryData).AccelerationRemappingCurve,
             &(param_1->TrajectoryData).AccelerationRemappingCurve);
  this->bCacheBones = param_1->bCacheBones;
  UE::PoseSearch::FPoseHistory::operator=(&this->PoseHistory,&param_1->PoseHistory);
  this->bIsTrajectoryGeneratedBeforePreUpdate = param_1->bIsTrajectoryGeneratedBeforePreUpdate;
  pTVar7 = (param_1->PoseHistoryPtr).SharedReferenceCount.ReferenceController;
  pFVar8 = (param_1->PoseHistoryPtr).Object;
  if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar9 = (this->PoseHistoryPtr).SharedReferenceCount.ReferenceController;
  (this->PoseHistoryPtr).Object = pFVar8;
  (this->PoseHistoryPtr).SharedReferenceCount.ReferenceController = pTVar7;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return this;
}

// GenerateTrajectory @ 14a8b90a0

void __thiscall
FAnimNode_PoseSearchHistoryCollector_Base::GenerateTrajectory
          (FAnimNode_PoseSearchHistoryCollector_Base *this,UAnimInstance *param_1)

{
  FGenerateTrajectoryPoseHistory *pFVar1;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar2;
  float fVar3;
  
  if ((this->PoseHistoryPtr).Object == (FGenerateTrajectoryPoseHistory *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PoseHistoryPtr.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\AnimNode_PoseSearchHistoryCollector.cpp"
                       ,0x16,L"");
    if (bVar2) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  if ((this->PoseHistoryPtr).Object == (FGenerateTrajectoryPoseHistory *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      UNRECOVERED_JUMPTABLE = (code *)swi(3);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  pFVar1 = (this->PoseHistoryPtr).Object;
  UNRECOVERED_JUMPTABLE = *(code **)(pFVar1->_padding_ + 0x28);
  fVar3 = UAnimInstance::GetDeltaSeconds(param_1);
                    /* WARNING: Could not recover jumptable at 0x00014a8b9146. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pFVar1,param_1,fVar3);
  return;
}

// GetRequiredBones @ 14a8bd3f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TArray<unsigned_short,TSizedDefaultAllocator<32>_> * __thiscall
FAnimNode_PoseSearchHistoryCollector_Base::GetRequiredBones
          (FAnimNode_PoseSearchHistoryCollector_Base *this,
          TArray<unsigned_short,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,
          FAnimInstanceProxy *param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> *pTVar6;
  USkinnedAsset *pUVar7;
  USkeleton *pUVar8;
  FName *pFVar9;
  FName *pFVar10;
  undefined1 local_res8 [8];
  ushort local_res10 [4];
  undefined1 local_38 [8];
  FName FStack_30;
  
  if ((param_1 == (FAnimInstanceProxy *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("AnimInstanceProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Private\\AnimNode_PoseSearchHistoryCollector.cpp"
                         ,0x38,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar6;
  }
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if ((this->CollectedBones).ArrayNum != 0) {
    if ((param_1->SkeletalMeshComponent == (USkeletalMeshComponent *)0x0) &&
       (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_2821110184175206020>,true,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimInstanceProxy.h"
                           ,0x17c,"SkeletalMeshComponent"), bVar5)) {
      pcVar4 = (code *)swi(3);
      pTVar6 = (TArray<unsigned_short,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
      return pTVar6;
    }
    if (((param_1->SkeletalMeshComponent != (USkeletalMeshComponent *)0x0) &&
        (pUVar7 = USkinnedMeshComponent::GetSkinnedAsset
                            ((USkinnedMeshComponent *)param_1->SkeletalMeshComponent),
        pUVar7 != (USkinnedAsset *)0x0)) &&
       (pUVar8 = (USkeleton *)(**(code **)(*(longlong *)pUVar7 + 0x400))(pUVar7),
       pUVar8 != (USkeleton *)0x0)) {
      uVar2 = (this->CollectedBones).ArrayNum;
      if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
      }
      if (*piVar1 < (int)uVar2) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,uVar2,&__return_storage_ptr__->AllocatorInstance,
                   __return_storage_ptr__->ArrayNum,piVar1);
      }
      iVar3 = (this->CollectedBones).ArrayNum;
      pFVar9 = (FName *)(this->CollectedBones).AllocatorInstance.Data;
      pFVar10 = pFVar9 + (longlong)iVar3 * 2;
      while( true ) {
        if ((this->CollectedBones).ArrayNum != iVar3) {
          `TCheckedPointerIterator<FBoneReference_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar9 == pFVar10) break;
        local_38 = *(undefined1 (*) [8])pFVar9;
        FStack_30 = pFVar9[1];
        bVar5 = FBoneReference::Initialize((FBoneReference *)local_38,pUVar8);
        if (bVar5) {
          local_res10[0] = (ushort)((int)(FStack_30.ComparisonIndex.Value * 2) >> 1);
          TArray<unsigned_short,TSizedDefaultAllocator<32>_>::AddUniqueImpl<unsigned_short>
                    (__return_storage_ptr__,local_res10);
        }
        pFVar9 = pFVar9 + 2;
      }
    }
  }
  return __return_storage_ptr__;
}

// GetPoseHistory @ 14a92bd90

FPoseHistory * __thiscall
FAnimNode_PoseSearchHistoryCollector_Base::GetPoseHistory
          (FAnimNode_PoseSearchHistoryCollector_Base *this)

{
  code *pcVar1;
  bool bVar2;
  FPoseHistory *pFVar3;
  
  if ((this->PoseHistoryPtr).Object != (FGenerateTrajectoryPoseHistory *)0x0) {
    return (FPoseHistory *)(this->PoseHistoryPtr).Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("PoseHistoryPtr.IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\PoseSearch\\Source\\Runtime\\Public\\PoseSearch\\AnimNode_PoseSearchHistoryCollector.h"
                     ,0x74,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FPoseHistory *)(*pcVar1)();
    return pFVar3;
  }
  return (FPoseHistory *)(this->PoseHistoryPtr).Object;
}


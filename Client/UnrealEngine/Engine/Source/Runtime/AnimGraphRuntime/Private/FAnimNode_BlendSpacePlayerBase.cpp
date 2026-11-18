// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 29

// StaticStruct @ 1463ecf00

UScriptStruct * __cdecl FAnimNode_BlendSpacePlayerBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayerBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayerBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayerBase,(UObject *)pUVar1,
                         L"AnimNode_BlendSpacePlayerBase");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayerBase.OuterSingleton;
}

// GetCurrentAssetTime @ 1463ed420

float __thiscall
FAnimNode_BlendSpacePlayerBase::GetCurrentAssetTime(FAnimNode_BlendSpacePlayerBase *this)

{
  FBlendSampleData *pFVar1;
  
  pFVar1 = GetHighestWeightedSample(this);
  if (pFVar1 != (FBlendSampleData *)0x0) {
    return pFVar1->Time;
  }
  return 0.0;
}

// GetCurrentAssetTimePlayRateAdjusted @ 1463ed450

float __thiscall
FAnimNode_BlendSpacePlayerBase::GetCurrentAssetTimePlayRateAdjusted
          (FAnimNode_BlendSpacePlayerBase *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (float)(**(code **)(this->_padding_ + 0xb8))();
  fVar2 = (float)(**(code **)(this->_padding_ + 0x160))(this);
  fVar3 = fVar1 * *(float *)((longlong)&this->_padding_ + 4);
  if (fVar2 < 0.0) {
    return fVar1 - fVar3;
  }
  return fVar3;
}

// GetCurrentAssetLength @ 1463ed4b0

float __thiscall
FAnimNode_BlendSpacePlayerBase::GetCurrentAssetLength(FAnimNode_BlendSpacePlayerBase *this)

{
  FBlendSampleData *pFVar1;
  UBlendSpace *this_00;
  FBlendSample *this_01;
  float fVar2;
  
  pFVar1 = GetHighestWeightedSample(this);
  if (pFVar1 != (FBlendSampleData *)0x0) {
    this_00 = (UBlendSpace *)(**(code **)(this->_padding_ + 0x148))(this);
    if (this_00 != (UBlendSpace *)0x0) {
      this_01 = UBlendSpace::GetBlendSample(this_00,pFVar1->SampleDataIndex);
      fVar2 = FBlendSample::GetSamplePlayLength(this_01);
      return fVar2;
    }
  }
  return 0.0;
}

// GetAnimAsset @ 1463ed8a0

UAnimationAsset * __thiscall
FAnimNode_BlendSpacePlayerBase::GetAnimAsset(FAnimNode_BlendSpacePlayerBase *this)

{
  UAnimationAsset *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001463ed8a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UAnimationAsset *)(**(code **)(this->_padding_ + 0x148))();
  return pUVar1;
}

// Initialize_AnyThread @ 1463ed8b0

void __thiscall
FAnimNode_BlendSpacePlayerBase::Initialize_AnyThread
          (FAnimNode_BlendSpacePlayerBase *this,FAnimationInitializeContext *param_1)

{
  FExposedValueHandler *this_00;
  UBlendSpace *pUVar1;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_BlendSpacePlayerBase::Initialize_AnyThread");
  FAnimNode_AssetPlayerBase::Initialize_AnyThread((FAnimNode_AssetPlayerBase *)this,param_1);
  this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
  Reinitialize(this,true);
  pUVar1 = (UBlendSpace *)(**(code **)(this->_padding_ + 0x148))(this);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UBlendSpace *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->PreviousBlendSpace).field0_0x0.DebugPtr = pUVar1;
  FStatsHierarchical::EndMeasurement();
  return;
}

// CacheBones_AnyThread @ 1463ed940

void __thiscall
FAnimNode_BlendSpacePlayerBase::CacheBones_AnyThread
          (FAnimNode_BlendSpacePlayerBase *this,FAnimationCacheBonesContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_BlendSpacePlayerBase::CacheBones_AnyThread");
  FStatsHierarchical::EndMeasurement();
  return;
}

// UpdateAssetPlayer @ 1463ed960

void __thiscall
FAnimNode_BlendSpacePlayerBase::UpdateAssetPlayer
          (FAnimNode_BlendSpacePlayerBase *this,FAnimationUpdateContext *param_1)

{
  FExposedValueHandler *this_00;
  
  this_00 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_00,(FAnimationBaseContext *)param_1);
  UpdateInternal(this,param_1);
  return;
}

// Evaluate_AnyThread @ 1463ed9a0

void __thiscall
FAnimNode_BlendSpacePlayerBase::Evaluate_AnyThread
          (FAnimNode_BlendSpacePlayerBase *this,FPoseContext *param_1)

{
  UBlendSpace *this_00;
  FAnimationPoseData local_68;
  FAnimExtractContext local_50;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_BlendSpacePlayerBase::Evaluate_AnyThread");
  this_00 = (UBlendSpace *)(**(code **)(this->_padding_ + 0x148))(this);
  if ((this_00 == (UBlendSpace *)0x0) || (this_00->_padding_ == 0)) {
    if (param_1->bExpectsAdditivePose == false) {
      FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
                ((FBaseCompactPose<TMemStackAllocator<0>_> *)&param_1->Pose,
                 *(FBoneContainer **)&(param_1->Pose).field_0x10);
    }
    else {
      FCompactPose::ResetToAdditiveIdentity(&param_1->Pose);
    }
  }
  else {
    FAnimationPoseData::FAnimationPoseData(&local_68,param_1);
    local_50.bLooping = (bool)(**(code **)(this->_padding_ + 0xd0))(this);
    local_50.CurrentTime = (double)*(float *)((longlong)&this->_padding_ + 4);
    local_50.DeltaTimeRecord._8_4_ = *(undefined4 *)&this->_padding_;
    local_50.bExtractRootMotion = (bool)(*(byte *)(param_1->_padding_ + 0x801) >> 1 & 1);
    local_50.DeltaTimeRecord._0_8_ = this->_padding_;
    local_50.PoseCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.PoseCurves.ArrayNum = 0;
    local_50.PoseCurves.ArrayMax = 0;
    local_50.BonesRequired.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_50.BonesRequired.ArrayNum = 0;
    local_50.BonesRequired.ArrayMax = 0;
    local_50.InterpolationOverride.bIsSet = false;
    UBlendSpace::GetAnimationPose(this_00,&this->BlendSampleDataCache,&local_50,&local_68);
    if (local_50.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.BonesRequired.AllocatorInstance.Data);
    }
    if (local_50.PoseCurves.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.PoseCurves.AllocatorInstance.Data);
    }
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 1463edad0

void __thiscall
FAnimNode_BlendSpacePlayerBase::GatherDebugData
          (FAnimNode_BlendSpacePlayerBase *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  longlong lVar2;
  int iVar3;
  FName local_res8;
  FString local_58;
  FString local_48;
  FString local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_BlendSpacePlayerBase::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayerBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayerBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_BlendSpacePlayerBase,(UObject *)pUVar1,
                         L"AnimNode_BlendSpacePlayerBase");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_BlendSpacePlayerBase.
                      OuterSingleton)->_padding_;
  ::FName::ToString(&local_res8,&local_58);
  ::FString::PrintfImpl(&local_48,L"%s<W:%.1f%%> %s");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  lVar2 = (**(code **)(this->_padding_ + 0x148))(this);
  if (lVar2 != 0) {
    local_res8 = *(FName *)(lVar2 + 0x18);
    ::FName::ToString(&local_res8,local_38);
    ::FString::PrintfImpl(&local_58,L"(\'%s\' Play Time: %.3f)");
    iVar3 = local_58.Data.ArrayNum + -1;
    if (local_58.Data.ArrayNum == 0) {
      iVar3 = 0;
    }
    ::FString::AppendChars(&local_48,(wchar_t *)local_58.Data.AllocatorInstance.Data,iVar3);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
    }
    _Src.Data = local_48.Data.AllocatorInstance.Data;
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum == 0) {
      local_58.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_48.Data.ArrayNum,
                 &local_58.Data.ArrayMax);
      memcpy(local_58.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_48.Data.ArrayNum * 2);
    }
    FNodeDebugData::AddDebugItem(param_1,&local_58,true);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GetLoop @ 1463edda0

bool __thiscall FAnimNode_BlendSpacePlayerBase::GetLoop(FAnimNode_BlendSpacePlayerBase *this)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001463edda3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(this->_padding_ + 0xd0))();
  return (bool)uVar1;
}

// ShouldTeleportToTime @ 1463eddb0

bool __thiscall
FAnimNode_BlendSpacePlayerBase::ShouldTeleportToTime(FAnimNode_BlendSpacePlayerBase *this)

{
  return false;
}

// IsEvaluator @ 1463eddc0

bool __thiscall FAnimNode_BlendSpacePlayerBase::IsEvaluator(FAnimNode_BlendSpacePlayerBase *this)

{
  return false;
}

// operator= @ 14640b380

FAnimNode_BlendSpacePlayerBase * __thiscall
FAnimNode_BlendSpacePlayerBase::operator=
          (FAnimNode_BlendSpacePlayerBase *this,FAnimNode_BlendSpacePlayerBase *param_1)

{
  UBlendSpace *pUVar1;
  longlong lVar2;
  
  this->_padding_ = param_1->_padding_;
  lVar2 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar2;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  FBlendFilter::operator=(&this->BlendFilter,&param_1->BlendFilter);
  TArray<FBlendSampleData,TSizedDefaultAllocator<32>_>::operator=
            (&this->BlendSampleDataCache,&param_1->BlendSampleDataCache);
  this->CachedTriangulationIndex = param_1->CachedTriangulationIndex;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->PreviousBlendSpace).field0_0x0.DebugPtr, pUVar1 != (UBlendSpace *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->PreviousBlendSpace).field0_0x0 = (param_1->PreviousBlendSpace).field0_0x0;
  return this;
}

// GetBlendSpace @ 146447d20

UBlendSpace * __thiscall
FAnimNode_BlendSpacePlayerBase::GetBlendSpace(FAnimNode_BlendSpacePlayerBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Public\\AnimNodes\\AnimNode_BlendSpacePlayer.h"
             ,0x3d,L"Pure virtual not implemented (%s)");
  return (UBlendSpace *)0x0;
}

// GetHighestWeightedSample @ 14644a980

FBlendSampleData * __thiscall
FAnimNode_BlendSpacePlayerBase::GetHighestWeightedSample(FAnimNode_BlendSpacePlayerBase *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FBlendSampleData *pFVar5;
  uint uVar6;
  longlong lVar7;
  
  iVar1 = (this->BlendSampleDataCache).ArrayNum;
  if (iVar1 == 0) {
    return (FBlendSampleData *)0x0;
  }
  if ((iVar1 < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FBlendSampleData *)(*pcVar2)();
    return pFVar5;
  }
  pFVar5 = (FBlendSampleData *)(this->BlendSampleDataCache).AllocatorInstance.Data;
  uVar6 = 1;
  if (1 < (this->BlendSampleDataCache).ArrayNum) {
    lVar7 = 0x60;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->BlendSampleDataCache).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FBlendSampleData *)(*pcVar2)();
        return pFVar5;
      }
      if (pFVar5->TotalWeight <
          *(float *)((this->BlendSampleDataCache).AllocatorInstance.Data + lVar7 + 0x10)) {
        uVar4 = 0;
        if ((int)uVar6 < (this->BlendSampleDataCache).ArrayNum) {
          uVar4 = ~uVar6 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          pFVar5 = (FBlendSampleData *)(*pcVar2)();
          return pFVar5;
        }
        pFVar5 = (FBlendSampleData *)
                 ((this->BlendSampleDataCache).AllocatorInstance.Data + (longlong)(int)uVar6 * 0x60)
        ;
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x60;
    } while ((int)uVar6 < (this->BlendSampleDataCache).ArrayNum);
  }
  return pFVar5;
}

// GetPlayRate @ 14644c680

float __thiscall FAnimNode_BlendSpacePlayerBase::GetPlayRate(FAnimNode_BlendSpacePlayerBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Public\\AnimNodes\\AnimNode_BlendSpacePlayer.h"
             ,0x46,L"Pure virtual not implemented (%s)");
  return __real_3f800000;
}

// GetPosition @ 14644cab0

TVector<double> * __thiscall
FAnimNode_BlendSpacePlayerBase::GetPosition
          (FAnimNode_BlendSpacePlayerBase *this,TVector<double> *__return_storage_ptr__)

{
  undefined8 uVar1;
  
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Public\\AnimNodes\\AnimNode_BlendSpacePlayer.h"
             ,0x40,L"Pure virtual not implemented (%s)");
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetStartPosition @ 14644f5e0

float __thiscall
FAnimNode_BlendSpacePlayerBase::GetStartPosition(FAnimNode_BlendSpacePlayerBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Public\\AnimNodes\\AnimNode_BlendSpacePlayer.h"
             ,0x43,L"Pure virtual not implemented (%s)");
  return 0.0;
}

// GetTimeFromEnd @ 14644fe70

float __thiscall
FAnimNode_BlendSpacePlayerBase::GetTimeFromEnd(FAnimNode_BlendSpacePlayerBase *this,float param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0x148))();
  if (lVar1 != 0) {
    return __real_3f800000 - param_1;
  }
  return 0.0;
}

// Reinitialize @ 1464638a0

void __thiscall
FAnimNode_BlendSpacePlayerBase::Reinitialize(FAnimNode_BlendSpacePlayerBase *this,bool param_1)

{
  int *piVar1;
  int iVar2;
  FBlendSampleData *pFVar3;
  UBlendSpace *this_00;
  float fVar4;
  float fVar5;
  
  piVar1 = &(this->BlendSampleDataCache).ArrayMax;
  pFVar3 = (FBlendSampleData *)(this->BlendSampleDataCache).AllocatorInstance.Data;
  iVar2 = (this->BlendSampleDataCache).ArrayNum;
  if ((this->BlendSampleDataCache).ArrayMax < 0) {
    DestructItems<FBlendSampleData,int>(pFVar3,iVar2);
    (this->BlendSampleDataCache).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,0,&(this->BlendSampleDataCache).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FBlendSampleData,int>(pFVar3,iVar2);
    (this->BlendSampleDataCache).ArrayNum = 0;
  }
  if (param_1) {
    fVar4 = (float)(**(code **)(this->_padding_ + 0x158))(this);
    fVar5 = fVar4;
    if (__real_3f800000 <= fVar4) {
      fVar5 = __real_3f800000;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    *(float *)((longlong)&this->_padding_ + 4) = fVar5;
    if (fVar4 == 0.0) {
      fVar5 = (float)(**(code **)(this->_padding_ + 0x160))(this);
      if (fVar5 < 0.0) {
        *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
      }
    }
    *(undefined4 *)&this->_padding_ = 0xfffffffe;
    *(undefined4 *)&this->_padding_ = 0xfffffffe;
  }
  this_00 = (UBlendSpace *)(**(code **)(this->_padding_ + 0x148))(this);
  if (this_00 != (UBlendSpace *)0x0) {
    UBlendSpace::InitializeFilter(this_00,&this->BlendFilter,2);
    return;
  }
  return;
}

// SetBlendSpace @ 146467fc0

bool __thiscall
FAnimNode_BlendSpacePlayerBase::SetBlendSpace
          (FAnimNode_BlendSpacePlayerBase *this,UBlendSpace *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Public\\AnimNodes\\AnimNode_BlendSpacePlayer.h"
             ,0x59,L"Pure virtual not implemented (%s)");
  return false;
}

// SetLoop @ 146469750

bool __thiscall
FAnimNode_BlendSpacePlayerBase::SetLoop(FAnimNode_BlendSpacePlayerBase *this,bool param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Public\\AnimNodes\\AnimNode_BlendSpacePlayer.h"
             ,0x62,L"Pure virtual not implemented (%s)");
  return false;
}

// SetPlayRate @ 14646a550

bool __thiscall
FAnimNode_BlendSpacePlayerBase::SetPlayRate(FAnimNode_BlendSpacePlayerBase *this,float param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Public\\AnimNodes\\AnimNode_BlendSpacePlayer.h"
             ,0x5f,L"Pure virtual not implemented (%s)");
  return false;
}

// SetPosition @ 14646a970

bool __thiscall
FAnimNode_BlendSpacePlayerBase::SetPosition
          (FAnimNode_BlendSpacePlayerBase *this,TVector<double> *param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Public\\AnimNodes\\AnimNode_BlendSpacePlayer.h"
             ,0x5c,L"Pure virtual not implemented (%s)");
  return false;
}

// SetResetPlayTimeWhenBlendSpaceChanges @ 14646acd0

bool __thiscall
FAnimNode_BlendSpacePlayerBase::SetResetPlayTimeWhenBlendSpaceChanges
          (FAnimNode_BlendSpacePlayerBase *this,bool param_1)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Public\\AnimNodes\\AnimNode_BlendSpacePlayer.h"
             ,0x50,L"Pure virtual not implemented (%s)");
  return false;
}

// ShouldResetPlayTimeWhenBlendSpaceChanges @ 14646b880

bool __thiscall
FAnimNode_BlendSpacePlayerBase::ShouldResetPlayTimeWhenBlendSpaceChanges
          (FAnimNode_BlendSpacePlayerBase *this)

{
  UE::Assert::Private::ProcessLowLevelFatalError
            ("C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Public\\AnimNodes\\AnimNode_BlendSpacePlayer.h"
             ,0x4d,L"Pure virtual not implemented (%s)");
  return true;
}

// SnapToPosition @ 14646bb60

void __thiscall
FAnimNode_BlendSpacePlayerBase::SnapToPosition
          (FAnimNode_BlendSpacePlayerBase *this,TVector<double> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = 0;
  iVar4 = 3;
  if ((this->BlendFilter).FilterPerAxis.ArrayNum < 3) {
    iVar4 = (this->BlendFilter).FilterPerAxis.ArrayNum;
  }
  if (0 < iVar4) {
    lVar7 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar6 < (this->BlendFilter).FilterPerAxis.ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->BlendFilter).FilterPerAxis.AllocatorInstance.Data;
      if ((2 < uVar6) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                             ,0x7ab,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FFIRFilterTimeBased::SetToValue
                ((FFIRFilterTimeBased *)(pFVar1 + (longlong)(int)uVar6 * 0x38),
                 (float)(param_1->field0_0x0).XYZ[lVar7]);
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar4);
  }
  return;
}

// UpdateInternal @ 1464742f0

void __thiscall
FAnimNode_BlendSpacePlayerBase::UpdateInternal
          (FAnimNode_BlendSpacePlayerBase *this,FAnimationUpdateContext *param_1)

{
  float fVar1;
  UBlendSpace *pUVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  UBlendSpace *pUVar7;
  FAnimSyncGroupScope *this_00;
  FAnimSyncDebugInfo *pFVar8;
  FAnimSyncParams *pFVar9;
  ForAnyElementType FVar10;
  ulonglong uVar11;
  float fVar12;
  ulonglong local_res8;
  ulonglong *local_res10;
  code **local_res18;
  FName local_res20;
  FString local_158;
  code *local_148;
  ulonglong **local_140;
  code *local_138;
  code ***local_130;
  TVector<double> local_128;
  FAnimTickRecord local_108;
  FAnimSyncDebugInfo local_88;
  FAnimSyncParams local_78 [3];
  
  uVar11 = 0;
  local_res8 = local_res8 & 0xffffffff00000000;
  FStatsHierarchical::BeginMeasurement("FAnimNode_BlendSpacePlayerBase::UpdateInternal");
  pUVar7 = (UBlendSpace *)(**(code **)(this->_padding_ + 0x148))(this);
  if ((pUVar7 == (UBlendSpace *)0x0) || (pUVar7->_padding_ == 0)) {
    FAnimGraphRuntimeTrace::OutputBlendSpacePlayer((FAnimationBaseContext *)param_1,this);
    if (pUVar7 == (UBlendSpace *)0x0) {
      FVar10.Data = (FScriptContainerElement *)&u_None;
      goto LAB_1464745f5;
    }
  }
  else {
    pUVar2 = (this->PreviousBlendSpace).field0_0x0.DebugPtr;
    if ((pUVar2 == (UBlendSpace *)0x0) || (pUVar2 != pUVar7)) {
      bVar4 = (bool)(**(code **)(this->_padding_ + 0x170))(this);
      Reinitialize(this,bVar4);
    }
    (**(code **)(this->_padding_ + 0x150))(this,&local_128);
    this_00 = FAnimationBaseContext::GetMessageChecked<UE::Anim::FAnimSyncGroupScope>
                        ((FAnimationBaseContext *)param_1);
    fVar1 = param_1->CurrentWeight;
    bVar4 = (bool)(**(code **)(this->_padding_ + 0x188))(this);
    bVar5 = (bool)(**(code **)(this->_padding_ + 0x180))(this);
    fVar12 = (float)(**(code **)(this->_padding_ + 0x160))(this);
    bVar6 = (bool)(**(code **)(this->_padding_ + 0xd0))(this);
    FAnimTickRecord::FAnimTickRecord
              (&local_108,pUVar7,&local_128,&this->BlendSampleDataCache,&this->BlendFilter,bVar6,
               fVar12,bVar5,bVar4,fVar1,(float *)((longlong)&this->_padding_ + 4),
               (FMarkerTickRecord *)&this->_padding_);
    local_108.DeltaTimeRecord = (FDeltaTimeRecord *)&this->_padding_;
    local_108.RootMotionWeightModifier = param_1->RootMotionWeightModifier;
    if (param_1->_padding_ == 0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1442789968400351459>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0xe3,"SharedContext != nullptr");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      local_res10 = &local_res8;
      local_140 = &local_res10;
      local_res8 = 0;
      local_148 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FAnimationBaseContext::GetMessage<UE::Anim::FAnimInertializationSyncScope>'::__l5::<lambda_1>,void,UE::Anim::FAnimInertializationSyncScope_&>
                  ::Call;
      local_res18 = &local_148;
      local_130 = &local_res18;
      local_138 = UE::Core::Private::Function::
                  TFunctionRefCaller<`UE::Anim::FMessageStack::TopMessage<UE::Anim::FAnimInertializationSyncScope>'::__l2::<lambda_1>,void,UE::Anim::IGraphMessage_&>
                  ::Call;
      UE::Anim::FMessageStack::TopMessage
                ((FMessageStack *)(param_1->_padding_ + 0x148),
                 UE::Anim::FAnimInertializationSyncScope::TypeName,
                 (TFunctionRef<void___cdecl(UE::Anim::IGraphMessage_&)> *)&local_138);
      uVar11 = local_res8;
    }
    local_108.bRequestedInertialization = uVar11 != 0;
    FAnimTickRecord::GatherContextData(&local_108,param_1);
    pFVar8 = UE::Anim::FAnimSyncDebugInfo::FAnimSyncDebugInfo
                       (&local_88,(FAnimationBaseContext *)param_1);
    pFVar9 = FAnimNode_AssetPlayerBase::GetSyncParams
                       ((FAnimNode_AssetPlayerBase *)this,local_78,
                        local_108.bRequestedInertialization);
    UE::Anim::FAnimSyncGroupScope::AddTickRecord(this_00,&local_108,pFVar9,pFVar8);
    FAnimTrace::OutputAnimTickRecord((FAnimationBaseContext *)param_1,&local_108);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->PreviousBlendSpace).field0_0x0.DebugPtr = pUVar7;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_108.ContextData.SharedReferenceCount.ReferenceController);
    FAnimGraphRuntimeTrace::OutputBlendSpacePlayer((FAnimationBaseContext *)param_1,this);
  }
  local_res20 = (FName)pUVar7->_padding_;
  ::FName::ToString(&local_res20,&local_158);
  uVar11 = 1;
  FVar10.Data = (FScriptContainerElement *)L"";
  if (local_158.Data.ArrayNum != 0) {
    FVar10.Data = local_158.Data.AllocatorInstance.Data;
  }
LAB_1464745f5:
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),L"Name",
             (wchar_t *)FVar10.Data);
  if ((uVar11 != 0) && (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),L"Asset",
             (UObject *)pUVar7);
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Playback Time",*(float *)((longlong)&this->_padding_ + 4));
  FStatsHierarchical::EndMeasurement();
  return;
}


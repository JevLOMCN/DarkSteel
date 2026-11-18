// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 8

// StaticStruct @ 1463db4b0

UScriptStruct * __cdecl FAnimNode_RotationOffsetBlendSpaceGraph::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph,
                         (UObject *)pUVar1,L"AnimNode_RotationOffsetBlendSpaceGraph");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph.OuterSingleton;
}

// Initialize_AnyThread @ 1463db5b0

void __thiscall
FAnimNode_RotationOffsetBlendSpaceGraph::Initialize_AnyThread
          (FAnimNode_RotationOffsetBlendSpaceGraph *this,FAnimationInitializeContext *param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FPoseLinkBase *this_00;
  FPoseLinkBase *pFVar5;
  undefined1 local_res8 [8];
  
  FStatsHierarchical::BeginMeasurement
            ("FAnimNode_RotationOffsetBlendSpaceGraph::Initialize_AnyThread");
  FStatsHierarchical::BeginMeasurement("FAnimNode_BlendSpaceGraphBase::Initialize_AnyThread");
  if (this->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("BlendSpace != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimNodes\\AnimNode_BlendSpaceGraphBase.cpp"
                       ,0x13,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  DestructItems<FBlendSampleData,int>((FBlendSampleData *)this->_padding_,(int)this->_padding_);
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *(undefined4 *)&this->_padding_ = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
  }
  UBlendSpace::InitializeFilter((UBlendSpace *)this->_padding_,(FBlendFilter *)&this->_padding_,2);
  iVar2 = (int)this->_padding_;
  this_00 = (FPoseLinkBase *)this->_padding_;
  pFVar5 = this_00 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<FPoseLink,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_00 == pFVar5) break;
    FPoseLinkBase::Initialize(this_00,param_1);
    this_00 = this_00 + 1;
  }
  FStatsHierarchical::EndMeasurement();
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->BasePose,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// CacheBones_AnyThread @ 1463db6d0

void __thiscall
FAnimNode_RotationOffsetBlendSpaceGraph::CacheBones_AnyThread
          (FAnimNode_RotationOffsetBlendSpaceGraph *this,FAnimationCacheBonesContext *param_1)

{
  int iVar1;
  FPoseLinkBase *this_00;
  FPoseLinkBase *pFVar2;
  undefined1 local_res8 [8];
  
  FStatsHierarchical::BeginMeasurement
            ("FAnimNode_RotationOffsetBlendSpaceGraph::CacheBones_AnyThread");
  FStatsHierarchical::BeginMeasurement("FAnimNode_BlendSpaceGraphBase::CacheBones_AnyThread");
  iVar1 = (int)this->_padding_;
  this_00 = (FPoseLinkBase *)this->_padding_;
  pFVar2 = this_00 + iVar1;
  while( true ) {
    if ((int)this->_padding_ != iVar1) {
      `TCheckedPointerIterator<FPoseLink,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_00 == pFVar2) break;
    FPoseLinkBase::CacheBones(this_00,param_1);
    this_00 = this_00 + 1;
  }
  FStatsHierarchical::EndMeasurement();
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->BasePose,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// Update_AnyThread @ 1463db770

void __thiscall
FAnimNode_RotationOffsetBlendSpaceGraph::Update_AnyThread
          (FAnimNode_RotationOffsetBlendSpaceGraph *this,FAnimationUpdateContext *param_1)

{
  EAnimAlphaInputType EVar1;
  int iVar2;
  UAnimInstance *this_00;
  bool bVar3;
  FExposedValueHandler *this_01;
  UClass *pUVar4;
  float fVar5;
  float fVar6;
  
  this->ActualAlpha = 0.0;
  bVar3 = FAnimNode_Base::IsLODEnabled
                    ((FAnimNode_Base *)this,(FAnimInstanceProxy *)param_1->_padding_);
  this->bIsLODEnabled = bVar3;
  if (!bVar3) goto LAB_1463db8c0;
  this_01 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_01,(FAnimationBaseContext *)param_1);
  EVar1 = this->AlphaInputType;
  if (EVar1 == Float) {
    fVar6 = FInputScaleBiasClamp::ApplyTo(&this->AlphaScaleBiasClamp,this->Alpha,param_1->DeltaTime)
    ;
    fVar6 = FInputScaleBias::ApplyTo(&this->AlphaScaleBias,fVar6);
LAB_1463db880:
    this->ActualAlpha = fVar6;
  }
  else {
    if (EVar1 == Bool) {
      fVar6 = FInputAlphaBoolBlend::ApplyTo
                        (&this->AlphaBoolBlend,this->bAlphaBoolEnabled,param_1->DeltaTime);
      goto LAB_1463db880;
    }
    if ((EVar1 == Curve) &&
       (this_00 = *(UAnimInstance **)(param_1->_padding_ + 0x140), this_00 != (UAnimInstance *)0x0))
    {
      pUVar4 = Z_Construct_UClass_UAnimInstance_NoRegister();
      iVar2 = (int)pUVar4->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar4->_padding_)) {
        fVar6 = param_1->DeltaTime;
        fVar5 = UAnimInstance::GetCurveValue(this_00,this->AlphaCurveName);
        fVar6 = FInputScaleBiasClamp::ApplyTo(&this->AlphaScaleBiasClamp,fVar5,fVar6);
        goto LAB_1463db880;
      }
    }
  }
  fVar6 = __real_3727c5ac;
  fVar5 = this->ActualAlpha;
  if (__real_3f800000 <= this->ActualAlpha) {
    fVar5 = __real_3f800000;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  this->ActualAlpha = fVar5;
  if (fVar6 < fVar5) {
    FAnimNode_BlendSpaceGraphBase::UpdateInternal((FAnimNode_BlendSpaceGraphBase *)this,param_1);
  }
LAB_1463db8c0:
  FPoseLinkBase::Update((FPoseLinkBase *)&this->BasePose,param_1);
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),L"Alpha",
             this->ActualAlpha);
  return;
}

// Evaluate_AnyThread @ 1463db900

void __thiscall
FAnimNode_RotationOffsetBlendSpaceGraph::Evaluate_AnyThread
          (FAnimNode_RotationOffsetBlendSpaceGraph *this,FPoseContext *param_1)

{
  int iVar1;
  UBlendSpace *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 local_148 [88];
  TArray<int,TSizedDefaultAllocator<32>_> *pTStack_f0;
  undefined8 local_e8;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_e0;
  undefined8 local_d8;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_d0;
  undefined8 local_c8;
  void *local_c0;
  undefined8 local_b8;
  bool local_b0;
  FAnimExtractContext local_a8;
  FPoseLink *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TArrayView<FPoseLink,int> local_48;
  FAnimationPoseData local_38;
  FAnimationPoseData local_20;
  
  FPoseLink::Evaluate(&this->BasePose,param_1);
  if ((this->bIsLODEnabled != false) && (__real_3727c5ac < this->ActualAlpha)) {
    FAnimationBaseContext::FAnimationBaseContext
              ((FAnimationBaseContext *)local_148,(FAnimInstanceProxy *)param_1->_padding_,
               (FAnimationUpdateSharedContext *)0x0);
    local_b0 = param_1->bExpectsAdditivePose != false;
    local_148._32_8_ = 0;
    local_148._40_8_ = 0;
    local_148._48_8_ = 0;
    local_148._56_8_ = 0;
    local_148._64_8_ = 0;
    local_148[0x48] = 0;
    local_148._80_8_ = 0;
    pTStack_f0 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
    local_e8 = 0;
    local_e0 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
    local_d8 = 0;
    local_d0 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                *)0x0;
    local_c8 = 0;
    local_c0 = (void *)0x0;
    local_b8 = 0;
    FPoseContext::InitializeImpl((FPoseContext *)local_148,(FAnimInstanceProxy *)param_1->_padding_)
    ;
    local_148._20_4_ = *(int *)((longlong)&param_1->_padding_ + 4);
    local_148._24_4_ = (undefined4)param_1->_padding_;
    FStatsHierarchical::BeginMeasurement("FAnimNode_BlendSpaceGraphBase::Evaluate_AnyThread");
    if (this->_padding_ == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BlendSpace != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimNodes\\AnimNode_BlendSpaceGraphBase.cpp"
                         ,0x5f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this_00 = (UBlendSpace *)this->_padding_;
    local_a8.bExtractRootMotion = false;
    local_a8.DeltaTimeRecord.bPreviousIsValid = false;
    local_a8.DeltaTimeRecord._9_3_ = 0;
    local_58 = (FPoseLink *)this->_padding_;
    local_a8.bLooping = false;
    local_a8.PoseCurves.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.PoseCurves.ArrayNum = 0;
    local_a8.PoseCurves.ArrayMax = 0;
    local_a8.BonesRequired.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_a8.BonesRequired.ArrayNum = 0;
    local_a8.BonesRequired.ArrayMax = 0;
    local_a8.InterpolationOverride.bIsSet = false;
    iVar1 = (int)this->_padding_;
    local_a8.CurrentTime = 0.0;
    local_a8.DeltaTimeRecord.Delta = 0.0;
    local_a8.DeltaTimeRecord.Previous = 0.0;
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
    local_48._12_4_ = uStack_4c;
    local_48.ArrayNum = iVar1;
    local_48.DataPtr = local_58;
    iStack_50 = iVar1;
    UBlendSpace::GetAnimationPose
              (this_00,(TArray<FBlendSampleData,TSizedDefaultAllocator<32>_> *)&this->_padding_,
               &local_48,&local_a8,(FPoseContext *)local_148);
    if (local_a8.BonesRequired.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.BonesRequired.AllocatorInstance.Data);
    }
    if (local_a8.PoseCurves.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.PoseCurves.AllocatorInstance.Data);
    }
    FStatsHierarchical::EndMeasurement();
    FAnimationPoseData::FAnimationPoseData(&local_20,param_1);
    FAnimationPoseData::FAnimationPoseData(&local_38,(FPoseContext *)local_148);
    FAnimationRuntime::AccumulateMeshSpaceRotationAdditiveToLocalPose
              (&local_20,&local_38,this->ActualAlpha);
    FCompactPose::NormalizeRotations(&param_1->Pose);
    if (local_c0 != (void *)0x0) {
      FMemory::Free(local_c0);
    }
    DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
              (local_d0,(int)local_c8);
    if (local_d0 !=
        (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)
        0x0) {
      FMemory::Free(local_d0);
    }
    DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
              (local_e0,(int)local_d8);
    if (local_e0 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_e0);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTStack_f0,(int)local_e8);
    if (pTStack_f0 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(pTStack_f0);
    }
  }
  return;
}

// GatherDebugData @ 1463dbb90

void __thiscall
FAnimNode_RotationOffsetBlendSpaceGraph::GatherDebugData
          (FAnimNode_RotationOffsetBlendSpaceGraph *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  int iVar2;
  FName local_res8;
  FString local_48;
  FString local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_RotationOffsetBlendSpaceGraph::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph,
                         (UObject *)pUVar1,L"AnimNode_RotationOffsetBlendSpaceGraph");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_RotationOffsetBlendSpaceGraph.
                      OuterSingleton)->_padding_;
  ::FName::ToString(&local_res8,&local_48);
  ::FString::PrintfImpl(local_38,L"%s<W:%.1f%%> %s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::PrintfImpl(&local_48,L"Alpha (%.1f%%)");
  iVar2 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars(local_38,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar2);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  _Src.Data = local_38[0].Data.AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_38[0].Data.ArrayNum == 0) {
    local_48.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_38[0].Data.ArrayNum,0,(ForAnyElementType *)&local_48,
               local_38[0].Data.ArrayNum,&local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_38[0].Data.ArrayNum * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_48,false);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->BasePose,param_1);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GetLODThreshold @ 1463dbd70

int __thiscall
FAnimNode_RotationOffsetBlendSpaceGraph::GetLODThreshold
          (FAnimNode_RotationOffsetBlendSpaceGraph *this)

{
  return this->LODThreshold;
}

// FAnimNode_RotationOffsetBlendSpaceGraph @ 146405830

FAnimNode_RotationOffsetBlendSpaceGraph * __thiscall
FAnimNode_RotationOffsetBlendSpaceGraph::FAnimNode_RotationOffsetBlendSpaceGraph
          (FAnimNode_RotationOffsetBlendSpaceGraph *this)

{
  float fVar1;
  
  fVar1 = __real_3e4ccccd;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = (longlong)&___7FAnimNode_RotationOffsetBlendSpaceGraph__6B_;
  *(undefined8 *)&this->BasePose = 0;
  *(undefined4 *)&(this->BasePose).field_0x8 = 0xffffffff;
  (this->BasePose).field_0xc = 0;
  this->LODThreshold = -1;
  this->Alpha = 1.0;
  (this->AlphaScaleBias).Scale = 1.0;
  (this->AlphaScaleBias).Bias = 0.0;
  (this->AlphaBoolBlend).BlendInTime = 0.0;
  (this->AlphaBoolBlend).BlendOutTime = 0.0;
  (this->AlphaBoolBlend).BlendOption = HermiteCubic;
  (this->AlphaBoolBlend).bInitialized = false;
  (this->AlphaBoolBlend).CustomCurve.field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  FAlphaBlend::FAlphaBlend(&(this->AlphaBoolBlend).AlphaBlend,fVar1);
  (this->AlphaCurveName).ComparisonIndex = 0;
  (this->AlphaCurveName).Number = 0;
  (this->AlphaScaleBiasClamp).bMapRange = false;
  (this->AlphaScaleBiasClamp).bClampResult = false;
  (this->AlphaScaleBiasClamp).bInterpResult = false;
  (this->AlphaScaleBiasClamp).bInitialized = false;
  (this->AlphaScaleBiasClamp).InRange.Min = 0.0;
  *(undefined8 *)&(this->AlphaScaleBiasClamp).InRange.Max = 0x3f800000;
  (this->AlphaScaleBiasClamp).OutRange.Max = 1.0;
  (this->AlphaScaleBiasClamp).Scale = 1.0;
  (this->AlphaScaleBiasClamp).Bias = 0.0;
  (this->AlphaScaleBiasClamp).ClampMin = 0.0;
  (this->AlphaScaleBiasClamp).ClampMax = 1.0;
  (this->AlphaScaleBiasClamp).InterpSpeedIncreasing = 10.0;
  (this->AlphaScaleBiasClamp).InterpSpeedDecreasing = 10.0;
  (this->AlphaScaleBiasClamp).InterpolatedResult = 0.0;
  this->ActualAlpha = 0.0;
  this->AlphaInputType = Float;
  this->bAlphaBoolEnabled = false;
  this->bIsLODEnabled = false;
  return this;
}


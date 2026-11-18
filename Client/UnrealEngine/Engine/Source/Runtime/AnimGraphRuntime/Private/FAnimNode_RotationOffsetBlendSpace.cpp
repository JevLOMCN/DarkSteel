// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 8

// StaticStruct @ 1463d8bb0

UScriptStruct * __cdecl FAnimNode_RotationOffsetBlendSpace::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_RotationOffsetBlendSpace.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_RotationOffsetBlendSpace.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace,
                         (UObject *)pUVar1,L"AnimNode_RotationOffsetBlendSpace");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_RotationOffsetBlendSpace.OuterSingleton;
}

// FAnimNode_RotationOffsetBlendSpace @ 146405700

FAnimNode_RotationOffsetBlendSpace * __thiscall
FAnimNode_RotationOffsetBlendSpace::FAnimNode_RotationOffsetBlendSpace
          (FAnimNode_RotationOffsetBlendSpace *this)

{
  float fVar1;
  
  fVar1 = __real_3e4ccccd;
  this->_padding_ = (longlong)&___7FAnimNode_RotationOffsetBlendSpace__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->BasePose = 0;
  (this->BasePose).field_0xc = 0;
  (this->AlphaBoolBlend).BlendInTime = 0.0;
  (this->AlphaBoolBlend).BlendOutTime = 0.0;
  (this->AlphaBoolBlend).CustomCurve.field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  *(undefined4 *)&this->_padding_ = 0xfffffffe;
  *(undefined4 *)&this->_padding_ = 0xfffffffe;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)&(this->BasePose).field_0x8 = 0xffffffff;
  this->LODThreshold = -1;
  this->Alpha = 1.0;
  (this->AlphaScaleBias).Scale = 1.0;
  (this->AlphaScaleBias).Bias = 0.0;
  (this->AlphaBoolBlend).BlendOption = HermiteCubic;
  (this->AlphaBoolBlend).bInitialized = false;
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

// CacheBones_AnyThread @ 14641a210

void __thiscall
FAnimNode_RotationOffsetBlendSpace::CacheBones_AnyThread
          (FAnimNode_RotationOffsetBlendSpace *this,FAnimationCacheBonesContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_RotationOffsetBlendSpace::CacheBones_AnyThread");
  FStatsHierarchical::BeginMeasurement("FAnimNode_BlendSpacePlayerBase::CacheBones_AnyThread");
  FStatsHierarchical::EndMeasurement();
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->BasePose,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// Evaluate_AnyThread @ 14643dd20

void __thiscall
FAnimNode_RotationOffsetBlendSpace::Evaluate_AnyThread
          (FAnimNode_RotationOffsetBlendSpace *this,FPoseContext *param_1)

{
  longlong lVar1;
  undefined1 local_d8 [88];
  TArray<int,TSizedDefaultAllocator<32>_> *pTStack_80;
  undefined8 local_78;
  TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *local_70;
  undefined8 local_68;
  TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  bool local_40;
  FAnimationPoseData local_38;
  FAnimationPoseData local_20;
  
  FPoseLink::Evaluate(&this->BasePose,param_1);
  if ((this->bIsLODEnabled != false) && (__real_3727c5ac < this->ActualAlpha)) {
    lVar1 = (**(code **)(this->_padding_ + 0x148))(this);
    if (lVar1 != 0) {
      FAnimationBaseContext::FAnimationBaseContext
                ((FAnimationBaseContext *)local_d8,(FAnimInstanceProxy *)param_1->_padding_,
                 (FAnimationUpdateSharedContext *)0x0);
      local_40 = param_1->bExpectsAdditivePose != false;
      local_d8._32_8_ = 0;
      local_d8._40_8_ = 0;
      local_d8._48_8_ = 0;
      local_d8._56_8_ = 0;
      local_d8._64_8_ = 0;
      local_d8[0x48] = 0;
      local_d8._80_8_ = 0;
      pTStack_80 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
      local_78 = 0;
      local_70 = (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0;
      local_68 = 0;
      local_60 = (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>
                  *)0x0;
      local_58 = 0;
      local_50 = (void *)0x0;
      local_48 = 0;
      FPoseContext::InitializeImpl
                ((FPoseContext *)local_d8,(FAnimInstanceProxy *)param_1->_padding_);
      local_d8._20_4_ = *(int *)((longlong)&param_1->_padding_ + 4);
      local_d8._24_4_ = (undefined4)param_1->_padding_;
      FAnimNode_BlendSpacePlayerBase::Evaluate_AnyThread
                ((FAnimNode_BlendSpacePlayerBase *)this,(FPoseContext *)local_d8);
      FAnimationPoseData::FAnimationPoseData(&local_20,param_1);
      FAnimationPoseData::FAnimationPoseData(&local_38,(FPoseContext *)local_d8);
      FAnimationRuntime::AccumulateMeshSpaceRotationAdditiveToLocalPose
                (&local_20,&local_38,this->ActualAlpha);
      FCompactPose::NormalizeRotations(&param_1->Pose);
      if (local_50 != (void *)0x0) {
        FMemory::Free(local_50);
      }
      DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
                (local_60,(int)local_58);
      if (local_60 !=
          (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *
          )0x0) {
        FMemory::Free(local_60);
      }
      DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
                (local_70,(int)local_68);
      if (local_70 != (TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_70);
      }
      DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>(pTStack_80,(int)local_78);
      if (pTStack_80 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(pTStack_80);
      }
    }
  }
  return;
}

// GatherDebugData @ 146445f90

void __thiscall
FAnimNode_RotationOffsetBlendSpace::GatherDebugData
          (FAnimNode_RotationOffsetBlendSpace *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  int iVar2;
  FName local_res8;
  FString local_48;
  FString local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_RotationOffsetBlendSpace::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_RotationOffsetBlendSpace.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_RotationOffsetBlendSpace.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_RotationOffsetBlendSpace,
                         (UObject *)pUVar1,L"AnimNode_RotationOffsetBlendSpace");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_RotationOffsetBlendSpace.
                      OuterSingleton)->_padding_;
  ::FName::ToString(&local_res8,&local_48);
  ::FString::PrintfImpl(local_38,L"%s<W:%.1f%%> %s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::PrintfImpl(&local_48,L"Alpha (%.1f%%) PlayTime (%.3f)");
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

// GetLODThreshold @ 14644b540

int __thiscall
FAnimNode_RotationOffsetBlendSpace::GetLODThreshold(FAnimNode_RotationOffsetBlendSpace *this)

{
  return this->LODThreshold;
}

// Initialize_AnyThread @ 14645a520

void __thiscall
FAnimNode_RotationOffsetBlendSpace::Initialize_AnyThread
          (FAnimNode_RotationOffsetBlendSpace *this,FAnimationInitializeContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_RotationOffsetBlendSpace::Initialize_AnyThread");
  FAnimNode_BlendSpacePlayerBase::Initialize_AnyThread
            ((FAnimNode_BlendSpacePlayerBase *)this,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->BasePose,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// UpdateAssetPlayer @ 146471da0

void __thiscall
FAnimNode_RotationOffsetBlendSpace::UpdateAssetPlayer
          (FAnimNode_RotationOffsetBlendSpace *this,FAnimationUpdateContext *param_1)

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
  if (!bVar3) goto LAB_146471ef3;
  this_01 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_01,(FAnimationBaseContext *)param_1);
  EVar1 = this->AlphaInputType;
  if (EVar1 == Float) {
    fVar6 = FInputScaleBiasClamp::ApplyTo(&this->AlphaScaleBiasClamp,this->Alpha,param_1->DeltaTime)
    ;
    fVar6 = FInputScaleBias::ApplyTo(&this->AlphaScaleBias,fVar6);
LAB_146471eb3:
    this->ActualAlpha = fVar6;
  }
  else {
    if (EVar1 == Bool) {
      fVar6 = FInputAlphaBoolBlend::ApplyTo
                        (&this->AlphaBoolBlend,this->bAlphaBoolEnabled,param_1->DeltaTime);
      goto LAB_146471eb3;
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
        goto LAB_146471eb3;
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
    FAnimNode_BlendSpacePlayerBase::UpdateInternal((FAnimNode_BlendSpacePlayerBase *)this,param_1);
  }
LAB_146471ef3:
  FPoseLinkBase::Update((FPoseLinkBase *)&this->BasePose,param_1);
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),L"Alpha",
             this->ActualAlpha);
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),
             L"Playback Time",*(float *)((longlong)&this->_padding_ + 4));
  return;
}


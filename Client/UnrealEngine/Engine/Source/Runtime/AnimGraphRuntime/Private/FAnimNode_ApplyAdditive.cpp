// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 9

// StaticStruct @ 1463d59e0

UScriptStruct * __cdecl FAnimNode_ApplyAdditive::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ApplyAdditive.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_ApplyAdditive.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ApplyAdditive,(UObject *)pUVar1,
                         L"AnimNode_ApplyAdditive");
  }
  return Z_Registration_Info_UScriptStruct_FAnimNode_ApplyAdditive.OuterSingleton;
}

// FAnimNode_ApplyAdditive @ 146403460

FAnimNode_ApplyAdditive * __thiscall
FAnimNode_ApplyAdditive::FAnimNode_ApplyAdditive(FAnimNode_ApplyAdditive *this)

{
  float fVar1;
  
  fVar1 = __real_3e4ccccd;
  this->_padding_ = (longlong)&___7FAnimNode_ApplyAdditive__6B_;
  this->_padding_ = 0;
  *(undefined8 *)&this->Base = 0;
  (this->Base).field_0xc = 0;
  *(undefined8 *)&this->Additive = 0;
  (this->Additive).field_0xc = 0;
  (this->AlphaBoolBlend).BlendInTime = 0.0;
  (this->AlphaBoolBlend).BlendOutTime = 0.0;
  (this->AlphaBoolBlend).CustomCurve.field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  *(undefined4 *)&(this->Base).field_0x8 = 0xffffffff;
  *(undefined4 *)&(this->Additive).field_0x8 = 0xffffffff;
  this->Alpha = 1.0;
  (this->AlphaScaleBias).Scale = 1.0;
  (this->AlphaScaleBias).Bias = 0.0;
  this->LODThreshold = -1;
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
  this->bAlphaBoolEnabled = true;
  return this;
}

// operator= @ 14640b110

FAnimNode_ApplyAdditive * __thiscall
FAnimNode_ApplyAdditive::operator=(FAnimNode_ApplyAdditive *this,FAnimNode_ApplyAdditive *param_1)

{
  UCurveFloat *pUVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  this->_padding_ = param_1->_padding_;
  uVar2 = *(undefined8 *)&(param_1->Base).field_0x8;
  *(undefined8 *)&this->Base = *(undefined8 *)&param_1->Base;
  *(undefined8 *)&(this->Base).field_0x8 = uVar2;
  uVar2 = *(undefined8 *)&(param_1->Additive).field_0x8;
  *(undefined8 *)&this->Additive = *(undefined8 *)&param_1->Additive;
  *(undefined8 *)&(this->Additive).field_0x8 = uVar2;
  this->Alpha = param_1->Alpha;
  this->AlphaScaleBias = param_1->AlphaScaleBias;
  this->LODThreshold = param_1->LODThreshold;
  (this->AlphaBoolBlend).BlendInTime = (param_1->AlphaBoolBlend).BlendInTime;
  (this->AlphaBoolBlend).BlendOutTime = (param_1->AlphaBoolBlend).BlendOutTime;
  (this->AlphaBoolBlend).BlendOption = (param_1->AlphaBoolBlend).BlendOption;
  (this->AlphaBoolBlend).bInitialized = (param_1->AlphaBoolBlend).bInitialized;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar1 = (param_1->AlphaBoolBlend).CustomCurve.field0_0x0.DebugPtr,
     pUVar1 != (UCurveFloat *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
  }
  (this->AlphaBoolBlend).CustomCurve.field0_0x0 = (param_1->AlphaBoolBlend).CustomCurve.field0_0x0;
  FAlphaBlend::operator=(&(this->AlphaBoolBlend).AlphaBlend,&(param_1->AlphaBoolBlend).AlphaBlend);
  this->AlphaCurveName = param_1->AlphaCurveName;
  bVar3 = (param_1->AlphaScaleBiasClamp).bClampResult;
  bVar4 = (param_1->AlphaScaleBiasClamp).bInterpResult;
  bVar5 = (param_1->AlphaScaleBiasClamp).bInitialized;
  fVar6 = (param_1->AlphaScaleBiasClamp).InRange.Min;
  uVar2 = *(undefined8 *)&(param_1->AlphaScaleBiasClamp).InRange.Max;
  (this->AlphaScaleBiasClamp).bMapRange = (param_1->AlphaScaleBiasClamp).bMapRange;
  (this->AlphaScaleBiasClamp).bClampResult = bVar3;
  (this->AlphaScaleBiasClamp).bInterpResult = bVar4;
  (this->AlphaScaleBiasClamp).bInitialized = bVar5;
  (this->AlphaScaleBiasClamp).InRange.Min = fVar6;
  *(undefined8 *)&(this->AlphaScaleBiasClamp).InRange.Max = uVar2;
  fVar6 = (param_1->AlphaScaleBiasClamp).Bias;
  fVar7 = (param_1->AlphaScaleBiasClamp).ClampMin;
  *(undefined8 *)&(this->AlphaScaleBiasClamp).OutRange.Max =
       *(undefined8 *)&(param_1->AlphaScaleBiasClamp).OutRange.Max;
  (this->AlphaScaleBiasClamp).Bias = fVar6;
  (this->AlphaScaleBiasClamp).ClampMin = fVar7;
  fVar6 = (param_1->AlphaScaleBiasClamp).InterpSpeedIncreasing;
  fVar7 = (param_1->AlphaScaleBiasClamp).InterpSpeedDecreasing;
  fVar8 = (param_1->AlphaScaleBiasClamp).InterpolatedResult;
  (this->AlphaScaleBiasClamp).ClampMax = (param_1->AlphaScaleBiasClamp).ClampMax;
  (this->AlphaScaleBiasClamp).InterpSpeedIncreasing = fVar6;
  (this->AlphaScaleBiasClamp).InterpSpeedDecreasing = fVar7;
  (this->AlphaScaleBiasClamp).InterpolatedResult = fVar8;
  this->ActualAlpha = param_1->ActualAlpha;
  this->AlphaInputType = param_1->AlphaInputType;
  this->bAlphaBoolEnabled = param_1->bAlphaBoolEnabled;
  return this;
}

// CacheBones_AnyThread @ 1464197a0

void __thiscall
FAnimNode_ApplyAdditive::CacheBones_AnyThread
          (FAnimNode_ApplyAdditive *this,FAnimationCacheBonesContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_ApplyAdditive::CacheBones_AnyThread");
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->Base,param_1);
  FPoseLinkBase::CacheBones((FPoseLinkBase *)&this->Additive,param_1);
  FStatsHierarchical::EndMeasurement();
  return;
}

// Evaluate_AnyThread @ 146439250

void __thiscall
FAnimNode_ApplyAdditive::Evaluate_AnyThread(FAnimNode_ApplyAdditive *this,FPoseContext *param_1)

{
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
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_ApplyAdditive::Evaluate_AnyThread");
  if (this->ActualAlpha <= __real_3727c5ac) {
    FPoseLink::Evaluate(&this->Base,param_1);
  }
  else {
    FAnimationBaseContext::FAnimationBaseContext
              ((FAnimationBaseContext *)local_d8,(FAnimInstanceProxy *)param_1->_padding_,
               (FAnimationUpdateSharedContext *)0x0);
    local_40 = true;
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
    FPoseContext::InitializeImpl((FPoseContext *)local_d8,(FAnimInstanceProxy *)param_1->_padding_);
    local_d8._20_4_ = *(int *)((longlong)&param_1->_padding_ + 4);
    local_d8._24_4_ = (undefined4)param_1->_padding_;
    FPoseLink::Evaluate(&this->Base,param_1);
    FPoseLink::Evaluate(&this->Additive,(FPoseContext *)local_d8);
    FAnimationPoseData::FAnimationPoseData(&local_20,param_1);
    FAnimationPoseData::FAnimationPoseData(&local_38,(FPoseContext *)local_d8);
    FAnimationRuntime::AccumulateAdditivePose
              (&local_20,&local_38,this->ActualAlpha,AAT_LocalSpaceBase);
    FCompactPose::NormalizeRotations(&param_1->Pose);
    if (local_50 != (void *)0x0) {
      FMemory::Free(local_50);
    }
    DestructItems<TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_>,int>
              (local_60,(int)local_58);
    if (local_60 !=
        (TArray<UE::Anim::TWrappedAttribute<TMemStackAllocator<0>_>,TSizedDefaultAllocator<32>_> *)
        0x0) {
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
  FStatsHierarchical::EndMeasurement();
  return;
}

// GatherDebugData @ 146442210

void __thiscall
FAnimNode_ApplyAdditive::GatherDebugData(FAnimNode_ApplyAdditive *this,FNodeDebugData *param_1)

{
  ForAnyElementType _Src;
  UPackage *pUVar1;
  FNodeDebugData *pFVar2;
  int iVar3;
  FName local_res8;
  FString local_48;
  FString local_38 [2];
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_ApplyAdditive::GatherDebugData");
  if (Z_Registration_Info_UScriptStruct_FAnimNode_ApplyAdditive.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimNode_ApplyAdditive.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_ApplyAdditive,(UObject *)pUVar1,
                         L"AnimNode_ApplyAdditive");
  }
  local_res8 = (FName)(Z_Registration_Info_UScriptStruct_FAnimNode_ApplyAdditive.OuterSingleton)->
                      _padding_;
  ::FName::ToString(&local_res8,&local_48);
  ::FString::PrintfImpl(local_38,L"%s<W:%.1f%%> %s");
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  ::FString::Empty(&param_1->NodeDescription);
  ::FString::PrintfImpl(&local_48,L"(Alpha: %.1f%%)");
  iVar3 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar3 = 0;
  }
  ::FString::AppendChars(local_38,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar3);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  _Src.Data = local_38[0].Data.AllocatorInstance.Data;
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar3 = (int)local_38[0].Data._8_8_;
  local_48.Data.ArrayNum = iVar3;
  if (iVar3 == 0) {
    local_48.Data._8_8_ = local_38[0].Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar3,0,(ForAnyElementType *)&local_48,iVar3,&local_48.Data.ArrayMax);
    memcpy(local_48.Data.AllocatorInstance.Data,_Src.Data,(longlong)iVar3 * 2);
  }
  FNodeDebugData::AddDebugItem(param_1,&local_48,false);
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pFVar2 = FNodeDebugData::BranchFlow(param_1,__real_3f800000,&local_48);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->Base,pFVar2);
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  pFVar2 = FNodeDebugData::BranchFlow(param_1,this->ActualAlpha,&local_48);
  FPoseLinkBase::GatherDebugData((FPoseLinkBase *)&this->Additive,pFVar2);
  if (local_38[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38[0].Data.AllocatorInstance.Data);
  }
  FStatsHierarchical::EndMeasurement();
  return;
}

// GetLODThreshold @ 14644b450

int __thiscall FAnimNode_ApplyAdditive::GetLODThreshold(FAnimNode_ApplyAdditive *this)

{
  return this->LODThreshold;
}

// Initialize_AnyThread @ 1464596e0

void __thiscall
FAnimNode_ApplyAdditive::Initialize_AnyThread
          (FAnimNode_ApplyAdditive *this,FAnimationInitializeContext *param_1)

{
  FStatsHierarchical::BeginMeasurement("FAnimNode_ApplyAdditive::Initialize_AnyThread");
  FAnimNode_Base::Initialize_AnyThread((FAnimNode_Base *)this,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->Base,param_1);
  FPoseLinkBase::Initialize((FPoseLinkBase *)&this->Additive,param_1);
  (this->AlphaBoolBlend).bInitialized = false;
  (this->AlphaScaleBiasClamp).bInitialized = false;
  FStatsHierarchical::EndMeasurement();
  return;
}

// Update_AnyThread @ 146477bb0

void __thiscall
FAnimNode_ApplyAdditive::Update_AnyThread
          (FAnimNode_ApplyAdditive *this,FAnimationUpdateContext *param_1)

{
  EAnimAlphaInputType EVar1;
  int iVar2;
  UAnimInstance *this_00;
  undefined4 uVar3;
  bool bVar4;
  FExposedValueHandler *this_01;
  UClass *pUVar5;
  float fVar6;
  float fVar7;
  FAnimationUpdateContext local_48;
  
  FStatsHierarchical::BeginMeasurement("FAnimNode_ApplyAdditive::Update_AnyThread");
  FPoseLinkBase::Update((FPoseLinkBase *)&this->Base,param_1);
  this->ActualAlpha = 0.0;
  bVar4 = FAnimNode_Base::IsLODEnabled
                    ((FAnimNode_Base *)this,(FAnimInstanceProxy *)param_1->_padding_);
  if (!bVar4) goto LAB_146477d20;
  this_01 = FAnimNode_Base::GetEvaluateGraphExposedInputs((FAnimNode_Base *)this);
  FExposedValueHandler::Execute(this_01,(FAnimationBaseContext *)param_1);
  EVar1 = this->AlphaInputType;
  if (EVar1 == Float) {
    fVar7 = FInputScaleBiasClamp::ApplyTo(&this->AlphaScaleBiasClamp,this->Alpha,param_1->DeltaTime)
    ;
    fVar7 = FInputScaleBias::ApplyTo(&this->AlphaScaleBias,fVar7);
LAB_146477ccf:
    this->ActualAlpha = fVar7;
  }
  else {
    if (EVar1 == Bool) {
      fVar7 = FInputAlphaBoolBlend::ApplyTo
                        (&this->AlphaBoolBlend,this->bAlphaBoolEnabled,param_1->DeltaTime);
      goto LAB_146477ccf;
    }
    if ((EVar1 == Curve) &&
       (this_00 = *(UAnimInstance **)(param_1->_padding_ + 0x140), this_00 != (UAnimInstance *)0x0))
    {
      pUVar5 = Z_Construct_UClass_UAnimInstance_NoRegister();
      iVar2 = (int)pUVar5->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)&this_00->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&this_00->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar5->_padding_)) {
        fVar7 = param_1->DeltaTime;
        fVar6 = UAnimInstance::GetCurveValue(this_00,this->AlphaCurveName);
        fVar7 = FInputScaleBiasClamp::ApplyTo(&this->AlphaScaleBiasClamp,fVar6,fVar7);
        goto LAB_146477ccf;
      }
    }
  }
  if (__real_3727c5ac < this->ActualAlpha) {
    local_48._padding_ = param_1->_padding_;
    local_48._padding_ = param_1->_padding_;
    local_48._padding_ = param_1->_padding_;
    local_48._padding_ = param_1->_padding_;
    uVar3 = param_1->RootMotionWeightModifier;
    local_48.DeltaTime = param_1->DeltaTime;
    local_48._44_4_ = *(undefined4 *)&param_1->field_0x2c;
    local_48.RootMotionWeightModifier = (float)uVar3;
    local_48.CurrentWeight = this->ActualAlpha * param_1->CurrentWeight;
    FPoseLinkBase::Update((FPoseLinkBase *)&this->Additive,&local_48);
  }
LAB_146477d20:
  FAnimTrace::OutputAnimNodeValue
            ((FAnimationBaseContext *)param_1,*(uint *)((longlong)&param_1->_padding_ + 4),L"Alpha",
             this->ActualAlpha);
  FStatsHierarchical::EndMeasurement();
  return;
}


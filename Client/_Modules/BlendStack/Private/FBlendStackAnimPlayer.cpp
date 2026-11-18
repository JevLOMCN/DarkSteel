// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BlendStack
// Functions: 31

// StaticStruct @ 14a85b9e0

UScriptStruct * __cdecl FBlendStackAnimPlayer::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBlendStackAnimPlayer.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_BlendStack();
    Z_Registration_Info_UScriptStruct_FBlendStackAnimPlayer.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBlendStackAnimPlayer,(UObject *)pUVar1,
                         L"BlendStackAnimPlayer");
  }
  return Z_Registration_Info_UScriptStruct_FBlendStackAnimPlayer.OuterSingleton;
}

// FBlendStackAnimPlayer @ 14a861460

FBlendStackAnimPlayer * __thiscall
FBlendStackAnimPlayer::FBlendStackAnimPlayer
          (FBlendStackAnimPlayer *this,FBlendStackAnimPlayer *param_1)

{
  int iVar1;
  UAnimSequenceBase *pUVar2;
  UObject *pUVar3;
  UBlendSpace *pUVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  bool bVar8;
  undefined1 uVar9;
  float fVar10;
  float fVar11;
  
  (this->OverrideCurve)._padding_ = 0;
  (this->OverrideCurve)._padding_ = (param_1->OverrideCurve)._padding_;
  (param_1->OverrideCurve)._padding_ = 0;
  *(int *)&(this->OverrideCurve)._padding_ = (int)(param_1->OverrideCurve)._padding_;
  *(undefined4 *)((longlong)&(this->OverrideCurve)._padding_ + 4) =
       *(undefined4 *)((longlong)&(param_1->OverrideCurve)._padding_ + 4);
  (param_1->OverrideCurve)._padding_ = 0;
  *(char *)&(this->OverrideCurve)._padding_ = (char)(param_1->OverrideCurve)._padding_;
  (this->OverrideCurve).Filter = (param_1->OverrideCurve).Filter;
  (this->SequencePlayerNode)._padding_ = (longlong)&___7FAnimNode_Base__6B_;
  (this->SequencePlayerNode)._padding_ = (param_1->SequencePlayerNode)._padding_;
  (this->SequencePlayerNode)._padding_ = (longlong)&___7FAnimNode_AssetPlayerBase__6B_;
  lVar5 = (param_1->SequencePlayerNode)._padding_;
  (this->SequencePlayerNode)._padding_ = (param_1->SequencePlayerNode)._padding_;
  (this->SequencePlayerNode)._padding_ = lVar5;
  *(int *)&(this->SequencePlayerNode)._padding_ = (int)(param_1->SequencePlayerNode)._padding_;
  *(undefined4 *)((longlong)&(this->SequencePlayerNode)._padding_ + 4) =
       *(undefined4 *)((longlong)&(param_1->SequencePlayerNode)._padding_ + 4);
  (this->SequencePlayerNode)._padding_ = (param_1->SequencePlayerNode)._padding_;
  *(int *)&(this->SequencePlayerNode)._padding_ = (int)(param_1->SequencePlayerNode)._padding_;
  *(undefined1 *)((longlong)&(this->SequencePlayerNode)._padding_ + 4) =
       *(undefined1 *)((longlong)&(param_1->SequencePlayerNode)._padding_ + 4);
  (this->SequencePlayerNode)._padding_ = (longlong)&___7FAnimNode_SequencePlayerBase__6B_;
  (this->SequencePlayerNode)._padding_ = (param_1->SequencePlayerNode)._padding_;
  (this->SequencePlayerNode)._padding_ = (longlong)&___7FAnimNode_SequencePlayer_Standalone__6B_;
  (this->SequencePlayerNode).GroupName = (param_1->SequencePlayerNode).GroupName;
  (this->SequencePlayerNode).GroupRole.Value = (param_1->SequencePlayerNode).GroupRole.Value;
  (this->SequencePlayerNode).bOverridePositionWhenJoiningSyncGroupAsLeader =
       (param_1->SequencePlayerNode).bOverridePositionWhenJoiningSyncGroupAsLeader;
  (this->SequencePlayerNode).Method = (param_1->SequencePlayerNode).Method;
  (this->SequencePlayerNode).bIgnoreForRelevancyTest =
       (param_1->SequencePlayerNode).bIgnoreForRelevancyTest;
  pUVar2 = (param_1->SequencePlayerNode).Sequence.field0_0x0.DebugPtr;
  (this->SequencePlayerNode).Sequence.field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UAnimSequenceBase *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  (this->SequencePlayerNode).PlayRateBasis = (param_1->SequencePlayerNode).PlayRateBasis;
  (this->SequencePlayerNode).PlayRate = (param_1->SequencePlayerNode).PlayRate;
  bVar7 = (param_1->SequencePlayerNode).PlayRateScaleBiasClampConstants.bClampResult;
  bVar8 = (param_1->SequencePlayerNode).PlayRateScaleBiasClampConstants.bInterpResult;
  uVar9 = (param_1->SequencePlayerNode).PlayRateScaleBiasClampConstants.field_0x3;
  fVar10 = (param_1->SequencePlayerNode).PlayRateScaleBiasClampConstants.InRange.Min;
  uVar6 = *(undefined8 *)&(param_1->SequencePlayerNode).PlayRateScaleBiasClampConstants.InRange.Max;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.bMapRange =
       (param_1->SequencePlayerNode).PlayRateScaleBiasClampConstants.bMapRange;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.bClampResult = bVar7;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.bInterpResult = bVar8;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.field_0x3 = uVar9;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.InRange.Min = fVar10;
  *(undefined8 *)&(this->SequencePlayerNode).PlayRateScaleBiasClampConstants.InRange.Max = uVar6;
  fVar10 = (param_1->SequencePlayerNode).PlayRateScaleBiasClampConstants.Bias;
  fVar11 = (param_1->SequencePlayerNode).PlayRateScaleBiasClampConstants.ClampMin;
  *(undefined8 *)&(this->SequencePlayerNode).PlayRateScaleBiasClampConstants.OutRange.Max =
       *(undefined8 *)&(param_1->SequencePlayerNode).PlayRateScaleBiasClampConstants.OutRange.Max;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.Bias = fVar10;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.ClampMin = fVar11;
  fVar10 = (param_1->SequencePlayerNode).PlayRateScaleBiasClampConstants.InterpSpeedIncreasing;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.ClampMax =
       (param_1->SequencePlayerNode).PlayRateScaleBiasClampConstants.ClampMax;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.InterpSpeedIncreasing = fVar10;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.InterpSpeedDecreasing =
       (param_1->SequencePlayerNode).PlayRateScaleBiasClampConstants.InterpSpeedDecreasing;
  (this->SequencePlayerNode).StartPosition = (param_1->SequencePlayerNode).StartPosition;
  (this->SequencePlayerNode).bLoopAnimation = (param_1->SequencePlayerNode).bLoopAnimation;
  (this->SequencePlayerNode).bStartFromMatchingPose =
       (param_1->SequencePlayerNode).bStartFromMatchingPose;
  (this->BlendSpacePlayerNode)._padding_ = (longlong)&___7FAnimNode_Base__6B_;
  (this->BlendSpacePlayerNode)._padding_ = (param_1->BlendSpacePlayerNode)._padding_;
  (this->BlendSpacePlayerNode)._padding_ = (longlong)&___7FAnimNode_AssetPlayerBase__6B_;
  lVar5 = (param_1->BlendSpacePlayerNode)._padding_;
  (this->BlendSpacePlayerNode)._padding_ = (param_1->BlendSpacePlayerNode)._padding_;
  (this->BlendSpacePlayerNode)._padding_ = lVar5;
  *(int *)&(this->BlendSpacePlayerNode)._padding_ = (int)(param_1->BlendSpacePlayerNode)._padding_;
  *(undefined4 *)((longlong)&(this->BlendSpacePlayerNode)._padding_ + 4) =
       *(undefined4 *)((longlong)&(param_1->BlendSpacePlayerNode)._padding_ + 4);
  (this->BlendSpacePlayerNode)._padding_ = (param_1->BlendSpacePlayerNode)._padding_;
  *(int *)&(this->BlendSpacePlayerNode)._padding_ = (int)(param_1->BlendSpacePlayerNode)._padding_;
  *(undefined1 *)((longlong)&(this->BlendSpacePlayerNode)._padding_ + 4) =
       *(undefined1 *)((longlong)&(param_1->BlendSpacePlayerNode)._padding_ + 4);
  (this->BlendSpacePlayerNode)._padding_ = (longlong)&___7FAnimNode_BlendSpacePlayerBase__6B_;
  (this->BlendSpacePlayerNode)._padding_ = 0;
  (this->BlendSpacePlayerNode)._padding_ = (param_1->BlendSpacePlayerNode)._padding_;
  (param_1->BlendSpacePlayerNode)._padding_ = 0;
  *(int *)&(this->BlendSpacePlayerNode)._padding_ = (int)(param_1->BlendSpacePlayerNode)._padding_;
  *(undefined4 *)((longlong)&(this->BlendSpacePlayerNode)._padding_ + 4) =
       *(undefined4 *)((longlong)&(param_1->BlendSpacePlayerNode)._padding_ + 4);
  (param_1->BlendSpacePlayerNode)._padding_ = 0;
  (this->BlendSpacePlayerNode)._padding_ = 0;
  (this->BlendSpacePlayerNode)._padding_ = (param_1->BlendSpacePlayerNode)._padding_;
  (param_1->BlendSpacePlayerNode)._padding_ = 0;
  *(int *)&(this->BlendSpacePlayerNode)._padding_ = (int)(param_1->BlendSpacePlayerNode)._padding_;
  *(undefined4 *)((longlong)&(this->BlendSpacePlayerNode)._padding_ + 4) =
       *(undefined4 *)((longlong)&(param_1->BlendSpacePlayerNode)._padding_ + 4);
  (param_1->BlendSpacePlayerNode)._padding_ = 0;
  *(int *)&(this->BlendSpacePlayerNode)._padding_ = (int)(param_1->BlendSpacePlayerNode)._padding_;
  pUVar3 = (UObject *)(param_1->BlendSpacePlayerNode)._padding_;
  (this->BlendSpacePlayerNode)._padding_ = (longlong)pUVar3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  (this->BlendSpacePlayerNode)._padding_ = (longlong)&___7FAnimNode_BlendSpacePlayer_Standalone__6B_
  ;
  (this->BlendSpacePlayerNode).GroupName = (param_1->BlendSpacePlayerNode).GroupName;
  (this->BlendSpacePlayerNode).GroupRole.Value = (param_1->BlendSpacePlayerNode).GroupRole.Value;
  (this->BlendSpacePlayerNode).bOverridePositionWhenJoiningSyncGroupAsLeader =
       (param_1->BlendSpacePlayerNode).bOverridePositionWhenJoiningSyncGroupAsLeader;
  (this->BlendSpacePlayerNode).Method = (param_1->BlendSpacePlayerNode).Method;
  (this->BlendSpacePlayerNode).bIgnoreForRelevancyTest =
       (param_1->BlendSpacePlayerNode).bIgnoreForRelevancyTest;
  (this->BlendSpacePlayerNode).X = (param_1->BlendSpacePlayerNode).X;
  (this->BlendSpacePlayerNode).Y = (param_1->BlendSpacePlayerNode).Y;
  (this->BlendSpacePlayerNode).PlayRate = (param_1->BlendSpacePlayerNode).PlayRate;
  (this->BlendSpacePlayerNode).bLoop = (param_1->BlendSpacePlayerNode).bLoop;
  (this->BlendSpacePlayerNode).bResetPlayTimeWhenBlendSpaceChanges =
       (param_1->BlendSpacePlayerNode).bResetPlayTimeWhenBlendSpaceChanges;
  (this->BlendSpacePlayerNode).StartPosition = (param_1->BlendSpacePlayerNode).StartPosition;
  pUVar4 = (param_1->BlendSpacePlayerNode).BlendSpace.field0_0x0.DebugPtr;
  (this->BlendSpacePlayerNode).BlendSpace.field0_0x0.DebugPtr = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UBlendSpace *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  FAnimNode_Mirror_Standalone::FAnimNode_Mirror_Standalone(&this->MirrorNode,&param_1->MirrorNode);
  (this->StoredBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StoredBones).AllocatorInstance.Data = (param_1->StoredBones).AllocatorInstance.Data;
  (param_1->StoredBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StoredBones).ArrayNum = (param_1->StoredBones).ArrayNum;
  (this->StoredBones).ArrayMax = (param_1->StoredBones).ArrayMax;
  (param_1->StoredBones).ArrayNum = 0;
  (param_1->StoredBones).ArrayMax = 0;
  *(undefined8 *)&this->StoredCurve = 0;
  *(undefined8 *)&this->StoredCurve = *(undefined8 *)&param_1->StoredCurve;
  *(undefined8 *)&param_1->StoredCurve = 0;
  *(undefined4 *)&(this->StoredCurve).field_0x8 = *(undefined4 *)&(param_1->StoredCurve).field_0x8;
  *(undefined4 *)&(this->StoredCurve).field_0xc = *(undefined4 *)&(param_1->StoredCurve).field_0xc;
  *(undefined8 *)&(param_1->StoredCurve).field_0x8 = 0;
  (this->StoredCurve).field_0x10 = (param_1->StoredCurve).field_0x10;
  *(undefined8 *)&(this->StoredCurve).field_0x18 = *(undefined8 *)&(param_1->StoredCurve).field_0x18
  ;
  *(undefined8 *)&this->StoredAttributes = 0;
  *(undefined8 *)&this->StoredAttributes = *(undefined8 *)&param_1->StoredAttributes;
  *(undefined8 *)&param_1->StoredAttributes = 0;
  *(undefined4 *)&(this->StoredAttributes).field_0x8 =
       *(undefined4 *)&(param_1->StoredAttributes).field_0x8;
  *(undefined4 *)&(this->StoredAttributes).field_0xc =
       *(undefined4 *)&(param_1->StoredAttributes).field_0xc;
  *(undefined8 *)&(param_1->StoredAttributes).field_0x8 = 0;
  *(undefined8 *)&(this->StoredAttributes).field_0x10 = 0;
  *(undefined8 *)&(this->StoredAttributes).field_0x10 =
       *(undefined8 *)&(param_1->StoredAttributes).field_0x10;
  *(undefined8 *)&(param_1->StoredAttributes).field_0x10 = 0;
  *(undefined4 *)&(this->StoredAttributes).field_0x18 =
       *(undefined4 *)&(param_1->StoredAttributes).field_0x18;
  *(undefined4 *)&(this->StoredAttributes).field_0x1c =
       *(undefined4 *)&(param_1->StoredAttributes).field_0x1c;
  *(undefined8 *)&(param_1->StoredAttributes).field_0x18 = 0;
  *(undefined8 *)&(this->StoredAttributes).field_0x20 = 0;
  *(undefined8 *)&(this->StoredAttributes).field_0x20 =
       *(undefined8 *)&(param_1->StoredAttributes).field_0x20;
  *(undefined8 *)&(param_1->StoredAttributes).field_0x20 = 0;
  *(undefined4 *)&(this->StoredAttributes).field_0x28 =
       *(undefined4 *)&(param_1->StoredAttributes).field_0x28;
  *(undefined4 *)&(this->StoredAttributes).field_0x2c =
       *(undefined4 *)&(param_1->StoredAttributes).field_0x2c;
  *(undefined8 *)&(param_1->StoredAttributes).field_0x28 = 0;
  *(undefined8 *)&(this->StoredAttributes).field_0x30 = 0;
  *(undefined8 *)&(this->StoredAttributes).field_0x30 =
       *(undefined8 *)&(param_1->StoredAttributes).field_0x30;
  *(undefined8 *)&(param_1->StoredAttributes).field_0x30 = 0;
  *(undefined4 *)&(this->StoredAttributes).field_0x38 =
       *(undefined4 *)&(param_1->StoredAttributes).field_0x38;
  *(undefined4 *)&(this->StoredAttributes).field_0x3c =
       *(undefined4 *)&(param_1->StoredAttributes).field_0x3c;
  *(undefined8 *)&(param_1->StoredAttributes).field_0x38 = 0;
  FBoneContainer::FBoneContainer(&this->StoredBoneContainer,&param_1->StoredBoneContainer);
  this->BlendOption = param_1->BlendOption;
  iVar1 = param_1->PoseLinkIndex;
  *(undefined8 *)&this->TotalBlendInTimePerBone = 0;
  this->PoseLinkIndex = iVar1;
  *(undefined8 *)&this->TotalBlendInTimePerBone = *(undefined8 *)&param_1->TotalBlendInTimePerBone;
  *(undefined8 *)&param_1->TotalBlendInTimePerBone = 0;
  *(undefined4 *)&(this->TotalBlendInTimePerBone).field_0x8 =
       *(undefined4 *)&(param_1->TotalBlendInTimePerBone).field_0x8;
  *(undefined4 *)&(this->TotalBlendInTimePerBone).field_0xc =
       *(undefined4 *)&(param_1->TotalBlendInTimePerBone).field_0xc;
  *(undefined8 *)&(param_1->TotalBlendInTimePerBone).field_0x8 = 0;
  this->TotalBlendInTime = param_1->TotalBlendInTime;
  this->CurrentBlendInTime = param_1->CurrentBlendInTime;
  this->TimeToActivation = param_1->TimeToActivation;
  this->bIsActive = param_1->bIsActive;
  (this->DebugColor).field0_0x0 = (param_1->DebugColor).field0_0x0;
  return this;
}

// FBlendStackAnimPlayer @ 14a8619f0

FBlendStackAnimPlayer * __thiscall
FBlendStackAnimPlayer::FBlendStackAnimPlayer
          (FBlendStackAnimPlayer *this,FBlendStackAnimPlayer *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar4;
  TTypedIndexRange<FSkeletonPoseBoneIndex,TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar5;
  int iVar6;
  UAnimSequenceBase *pUVar7;
  FFIRFilterTimeBased *pFVar8;
  FBlendSampleData *pFVar9;
  UObject *pUVar10;
  UBlendSpace *pUVar11;
  FScriptContainerElement *_Src;
  void *_Src_00;
  longlong lVar12;
  undefined8 uVar13;
  bool bVar14;
  bool bVar15;
  undefined1 uVar16;
  float fVar17;
  float fVar18;
  
  TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>::
  TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>
            (&this->OverrideCurve,&param_1->OverrideCurve);
  (this->SequencePlayerNode)._padding_ = (longlong)&___7FAnimNode_Base__6B_;
  (this->SequencePlayerNode)._padding_ = (param_1->SequencePlayerNode)._padding_;
  (this->SequencePlayerNode)._padding_ = (longlong)&___7FAnimNode_AssetPlayerBase__6B_;
  lVar12 = (param_1->SequencePlayerNode)._padding_;
  (this->SequencePlayerNode)._padding_ = (param_1->SequencePlayerNode)._padding_;
  (this->SequencePlayerNode)._padding_ = lVar12;
  *(int *)&(this->SequencePlayerNode)._padding_ = (int)(param_1->SequencePlayerNode)._padding_;
  *(undefined4 *)((longlong)&(this->SequencePlayerNode)._padding_ + 4) =
       *(undefined4 *)((longlong)&(param_1->SequencePlayerNode)._padding_ + 4);
  (this->SequencePlayerNode)._padding_ = (param_1->SequencePlayerNode)._padding_;
  *(int *)&(this->SequencePlayerNode)._padding_ = (int)(param_1->SequencePlayerNode)._padding_;
  *(undefined1 *)((longlong)&(this->SequencePlayerNode)._padding_ + 4) =
       *(undefined1 *)((longlong)&(param_1->SequencePlayerNode)._padding_ + 4);
  (this->SequencePlayerNode)._padding_ = (longlong)&___7FAnimNode_SequencePlayerBase__6B_;
  (this->SequencePlayerNode)._padding_ = (param_1->SequencePlayerNode)._padding_;
  (this->SequencePlayerNode)._padding_ = (longlong)&___7FAnimNode_SequencePlayer_Standalone__6B_;
  (this->SequencePlayerNode).GroupName = (param_1->SequencePlayerNode).GroupName;
  (this->SequencePlayerNode).GroupRole.Value = (param_1->SequencePlayerNode).GroupRole.Value;
  (this->SequencePlayerNode).bOverridePositionWhenJoiningSyncGroupAsLeader =
       (param_1->SequencePlayerNode).bOverridePositionWhenJoiningSyncGroupAsLeader;
  (this->SequencePlayerNode).Method = (param_1->SequencePlayerNode).Method;
  (this->SequencePlayerNode).bIgnoreForRelevancyTest =
       (param_1->SequencePlayerNode).bIgnoreForRelevancyTest;
  pUVar7 = (param_1->SequencePlayerNode).Sequence.field0_0x0.DebugPtr;
  (this->SequencePlayerNode).Sequence.field0_0x0.DebugPtr = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UAnimSequenceBase *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  plVar3 = &(this->BlendSpacePlayerNode)._padding_;
  (this->SequencePlayerNode).PlayRateBasis = (param_1->SequencePlayerNode).PlayRateBasis;
  (this->SequencePlayerNode).PlayRate = (param_1->SequencePlayerNode).PlayRate;
  bVar14 = (param_1->SequencePlayerNode).PlayRateScaleBiasClampConstants.bClampResult;
  bVar15 = (param_1->SequencePlayerNode).PlayRateScaleBiasClampConstants.bInterpResult;
  uVar16 = (param_1->SequencePlayerNode).PlayRateScaleBiasClampConstants.field_0x3;
  fVar17 = (param_1->SequencePlayerNode).PlayRateScaleBiasClampConstants.InRange.Min;
  uVar13 = *(undefined8 *)&(param_1->SequencePlayerNode).PlayRateScaleBiasClampConstants.InRange.Max
  ;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.bMapRange =
       (param_1->SequencePlayerNode).PlayRateScaleBiasClampConstants.bMapRange;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.bClampResult = bVar14;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.bInterpResult = bVar15;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.field_0x3 = uVar16;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.InRange.Min = fVar17;
  *(undefined8 *)&(this->SequencePlayerNode).PlayRateScaleBiasClampConstants.InRange.Max = uVar13;
  fVar17 = (param_1->SequencePlayerNode).PlayRateScaleBiasClampConstants.Bias;
  fVar18 = (param_1->SequencePlayerNode).PlayRateScaleBiasClampConstants.ClampMin;
  *(undefined8 *)&(this->SequencePlayerNode).PlayRateScaleBiasClampConstants.OutRange.Max =
       *(undefined8 *)&(param_1->SequencePlayerNode).PlayRateScaleBiasClampConstants.OutRange.Max;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.Bias = fVar17;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.ClampMin = fVar18;
  fVar17 = (param_1->SequencePlayerNode).PlayRateScaleBiasClampConstants.InterpSpeedIncreasing;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.ClampMax =
       (param_1->SequencePlayerNode).PlayRateScaleBiasClampConstants.ClampMax;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.InterpSpeedIncreasing = fVar17;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.InterpSpeedDecreasing =
       (param_1->SequencePlayerNode).PlayRateScaleBiasClampConstants.InterpSpeedDecreasing;
  (this->SequencePlayerNode).StartPosition = (param_1->SequencePlayerNode).StartPosition;
  (this->SequencePlayerNode).bLoopAnimation = (param_1->SequencePlayerNode).bLoopAnimation;
  (this->SequencePlayerNode).bStartFromMatchingPose =
       (param_1->SequencePlayerNode).bStartFromMatchingPose;
  (this->BlendSpacePlayerNode)._padding_ = (longlong)&___7FAnimNode_Base__6B_;
  (this->BlendSpacePlayerNode)._padding_ = (param_1->BlendSpacePlayerNode)._padding_;
  (this->BlendSpacePlayerNode)._padding_ = (longlong)&___7FAnimNode_AssetPlayerBase__6B_;
  lVar12 = (param_1->BlendSpacePlayerNode)._padding_;
  (this->BlendSpacePlayerNode)._padding_ = (param_1->BlendSpacePlayerNode)._padding_;
  (this->BlendSpacePlayerNode)._padding_ = lVar12;
  *(int *)&(this->BlendSpacePlayerNode)._padding_ = (int)(param_1->BlendSpacePlayerNode)._padding_;
  *(undefined4 *)((longlong)&(this->BlendSpacePlayerNode)._padding_ + 4) =
       *(undefined4 *)((longlong)&(param_1->BlendSpacePlayerNode)._padding_ + 4);
  (this->BlendSpacePlayerNode)._padding_ = (param_1->BlendSpacePlayerNode)._padding_;
  *(int *)&(this->BlendSpacePlayerNode)._padding_ = (int)(param_1->BlendSpacePlayerNode)._padding_;
  *(undefined1 *)((longlong)&(this->BlendSpacePlayerNode)._padding_ + 4) =
       *(undefined1 *)((longlong)&(param_1->BlendSpacePlayerNode)._padding_ + 4);
  (this->BlendSpacePlayerNode)._padding_ = (longlong)&___7FAnimNode_BlendSpacePlayerBase__6B_;
  piVar1 = (int *)((longlong)&(this->BlendSpacePlayerNode)._padding_ + 4);
  *plVar3 = 0;
  iVar6 = (int)(param_1->BlendSpacePlayerNode)._padding_;
  pFVar8 = (FFIRFilterTimeBased *)(param_1->BlendSpacePlayerNode)._padding_;
  *(int *)&(this->BlendSpacePlayerNode)._padding_ = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar6,0,(ForAnyElementType *)plVar3,iVar6,piVar1);
    ConstructItems<FFIRFilterTimeBased,FFIRFilterTimeBased,int>((void *)*plVar3,pFVar8,iVar6);
  }
  plVar3 = &(this->BlendSpacePlayerNode)._padding_;
  *plVar3 = 0;
  piVar1 = (int *)((longlong)&(this->BlendSpacePlayerNode)._padding_ + 4);
  iVar6 = (int)(param_1->BlendSpacePlayerNode)._padding_;
  pFVar9 = (FBlendSampleData *)(param_1->BlendSpacePlayerNode)._padding_;
  *(int *)&(this->BlendSpacePlayerNode)._padding_ = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,8,iVar6,0,(ForAnyElementType *)plVar3,iVar6,piVar1);
    ConstructItems<FBlendSampleData,FBlendSampleData,int>((void *)*plVar3,pFVar9,iVar6);
  }
  *(int *)&(this->BlendSpacePlayerNode)._padding_ = (int)(param_1->BlendSpacePlayerNode)._padding_;
  pUVar10 = (UObject *)(param_1->BlendSpacePlayerNode)._padding_;
  (this->BlendSpacePlayerNode)._padding_ = (longlong)pUVar10;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar10);
  }
  (this->BlendSpacePlayerNode)._padding_ = (longlong)&___7FAnimNode_BlendSpacePlayer_Standalone__6B_
  ;
  (this->BlendSpacePlayerNode).GroupName = (param_1->BlendSpacePlayerNode).GroupName;
  (this->BlendSpacePlayerNode).GroupRole.Value = (param_1->BlendSpacePlayerNode).GroupRole.Value;
  (this->BlendSpacePlayerNode).bOverridePositionWhenJoiningSyncGroupAsLeader =
       (param_1->BlendSpacePlayerNode).bOverridePositionWhenJoiningSyncGroupAsLeader;
  (this->BlendSpacePlayerNode).Method = (param_1->BlendSpacePlayerNode).Method;
  (this->BlendSpacePlayerNode).bIgnoreForRelevancyTest =
       (param_1->BlendSpacePlayerNode).bIgnoreForRelevancyTest;
  (this->BlendSpacePlayerNode).X = (param_1->BlendSpacePlayerNode).X;
  (this->BlendSpacePlayerNode).Y = (param_1->BlendSpacePlayerNode).Y;
  (this->BlendSpacePlayerNode).PlayRate = (param_1->BlendSpacePlayerNode).PlayRate;
  (this->BlendSpacePlayerNode).bLoop = (param_1->BlendSpacePlayerNode).bLoop;
  (this->BlendSpacePlayerNode).bResetPlayTimeWhenBlendSpaceChanges =
       (param_1->BlendSpacePlayerNode).bResetPlayTimeWhenBlendSpaceChanges;
  (this->BlendSpacePlayerNode).StartPosition = (param_1->BlendSpacePlayerNode).StartPosition;
  pUVar11 = (param_1->BlendSpacePlayerNode).BlendSpace.field0_0x0.DebugPtr;
  (this->BlendSpacePlayerNode).BlendSpace.field0_0x0.DebugPtr = pUVar11;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar11 != (UBlendSpace *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  FAnimNode_Mirror_Standalone::FAnimNode_Mirror_Standalone(&this->MirrorNode,&param_1->MirrorNode);
  pTVar4 = &this->StoredBones;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->StoredBones).ArrayMax;
  iVar6 = (param_1->StoredBones).ArrayNum;
  _Src = (param_1->StoredBones).AllocatorInstance.Data;
  (this->StoredBones).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,iVar6,0,&pTVar4->AllocatorInstance,iVar6,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data,_Src,(longlong)iVar6 * 0x60);
  }
  TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>::
  TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>
            ((TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *)
             &this->StoredCurve,
             (TBaseBlendedCurve<TSizedDefaultAllocator<32>,UE::Anim::FCurveElement> *)
             &param_1->StoredCurve);
  UE::Anim::TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>::
  TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>
            ((TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
             &this->StoredAttributes,
             (TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
             &param_1->StoredAttributes);
  FBoneContainer::FBoneContainer(&this->StoredBoneContainer,&param_1->StoredBoneContainer);
  pTVar5 = &this->TotalBlendInTimePerBone;
  this->BlendOption = param_1->BlendOption;
  this->PoseLinkIndex = param_1->PoseLinkIndex;
  puVar2 = &(this->TotalBlendInTimePerBone).field_0xc;
  *(undefined8 *)pTVar5 = 0;
  iVar6 = *(int *)&(param_1->TotalBlendInTimePerBone).field_0x8;
  _Src_00 = *(void **)&param_1->TotalBlendInTimePerBone;
  *(int *)&(this->TotalBlendInTimePerBone).field_0x8 = iVar6;
  if (iVar6 == 0) {
    *(undefined4 *)puVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar6,0,(ForAnyElementType *)pTVar5,iVar6,(int *)puVar2);
    memcpy(*(void **)pTVar5,_Src_00,(longlong)iVar6 << 2);
  }
  this->TotalBlendInTime = param_1->TotalBlendInTime;
  this->CurrentBlendInTime = param_1->CurrentBlendInTime;
  this->TimeToActivation = param_1->TimeToActivation;
  this->bIsActive = param_1->bIsActive;
  (this->DebugColor).field0_0x0 = (param_1->DebugColor).field0_0x0;
  return this;
}

// FBlendStackAnimPlayer @ 14a861ec0

FBlendStackAnimPlayer * __thiscall
FBlendStackAnimPlayer::FBlendStackAnimPlayer(FBlendStackAnimPlayer *this)

{
  *(undefined4 *)&(this->SequencePlayerNode)._padding_ = 0xfffffffe;
  *(undefined4 *)&(this->SequencePlayerNode)._padding_ = 0xfffffffe;
  (this->OverrideCurve)._padding_ = 0;
  *(undefined1 *)&(this->OverrideCurve)._padding_ = 0;
  (this->OverrideCurve).Filter = (FCurveFilter *)0x0;
  (this->SequencePlayerNode)._padding_ = 0;
  *(undefined1 *)&(this->SequencePlayerNode)._padding_ = 0;
  *(undefined4 *)&(this->SequencePlayerNode)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->SequencePlayerNode)._padding_ + 4) = 0;
  (this->SequencePlayerNode)._padding_ = (longlong)&___7FAnimNode_SequencePlayer_Standalone__6B_;
  (this->OverrideCurve)._padding_ = 0;
  (this->SequencePlayerNode)._padding_ = 0;
  (this->SequencePlayerNode)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->SequencePlayerNode)._padding_ + 4) = 0;
  (this->SequencePlayerNode).GroupName.ComparisonIndex = 0;
  (this->SequencePlayerNode).GroupName.Number = 0;
  (this->SequencePlayerNode).GroupRole = '\0';
  (this->SequencePlayerNode).bOverridePositionWhenJoiningSyncGroupAsLeader = false;
  (this->SequencePlayerNode).Method = DoNotSync;
  (this->SequencePlayerNode).bIgnoreForRelevancyTest = false;
  (this->SequencePlayerNode).Sequence.field0_0x0.DebugPtr = (UAnimSequenceBase *)0x0;
  (this->SequencePlayerNode).PlayRateBasis = 1.0;
  (this->SequencePlayerNode).PlayRate = 1.0;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.bMapRange = false;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.bClampResult = false;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.bInterpResult = false;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.Scale = 1.0;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.Bias = 0.0;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.ClampMin = 0.0;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.ClampMax = 1.0;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.InterpSpeedIncreasing = 10.0;
  *(undefined8 *)&(this->SequencePlayerNode).PlayRateScaleBiasClampConstants.InterpSpeedDecreasing =
       0x41200000;
  (this->SequencePlayerNode).bLoopAnimation = true;
  (this->SequencePlayerNode).bStartFromMatchingPose = false;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.InRange.Min = 0.0;
  *(undefined8 *)&(this->SequencePlayerNode).PlayRateScaleBiasClampConstants.InRange.Max =
       0x3f800000;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.OutRange.Max = 1.0;
  *(undefined4 *)&(this->BlendSpacePlayerNode)._padding_ = 0xfffffffe;
  *(undefined4 *)&(this->BlendSpacePlayerNode)._padding_ = 0xfffffffe;
  (this->BlendSpacePlayerNode)._padding_ = 0;
  *(undefined1 *)&(this->BlendSpacePlayerNode)._padding_ = 0;
  (this->BlendSpacePlayerNode)._padding_ = 0;
  (this->BlendSpacePlayerNode)._padding_ = 0;
  (this->BlendSpacePlayerNode)._padding_ = 0;
  (this->BlendSpacePlayerNode)._padding_ = 0;
  (this->BlendSpacePlayerNode)._padding_ = 0;
  (this->BlendSpacePlayerNode)._padding_ = 0;
  (this->BlendSpacePlayerNode)._padding_ = 0;
  *(undefined1 *)((longlong)&(this->BlendSpacePlayerNode)._padding_ + 4) = 0;
  *(undefined4 *)&(this->BlendSpacePlayerNode)._padding_ = 0xffffffff;
  (this->BlendSpacePlayerNode)._padding_ = (longlong)&___7FAnimNode_BlendSpacePlayer_Standalone__6B_
  ;
  (this->BlendSpacePlayerNode).GroupName.ComparisonIndex = 0;
  (this->BlendSpacePlayerNode).GroupName.Number = 0;
  (this->BlendSpacePlayerNode).GroupRole = '\0';
  (this->BlendSpacePlayerNode).bOverridePositionWhenJoiningSyncGroupAsLeader = false;
  (this->BlendSpacePlayerNode).Method = DoNotSync;
  (this->BlendSpacePlayerNode).bIgnoreForRelevancyTest = false;
  (this->BlendSpacePlayerNode).X = 0.0;
  (this->BlendSpacePlayerNode).Y = 0.0;
  (this->BlendSpacePlayerNode).PlayRate = 1.0;
  (this->BlendSpacePlayerNode).bLoop = true;
  (this->BlendSpacePlayerNode).bResetPlayTimeWhenBlendSpaceChanges = true;
  (this->BlendSpacePlayerNode).StartPosition = 0.0;
  (this->BlendSpacePlayerNode).BlendSpace.field0_0x0.DebugPtr = (UBlendSpace *)0x0;
  FAnimNode_Mirror_Standalone::FAnimNode_Mirror_Standalone(&this->MirrorNode);
  (this->StoredBones).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StoredBones).ArrayNum = 0;
  (this->StoredBones).ArrayMax = 0;
  *(undefined8 *)&this->StoredCurve = 0;
  *(undefined8 *)&(this->StoredCurve).field_0x8 = 0;
  (this->StoredCurve).field_0x10 = 0;
  *(undefined8 *)&(this->StoredCurve).field_0x18 = 0;
  *(undefined8 *)&this->StoredAttributes = 0;
  *(undefined8 *)&(this->StoredAttributes).field_0x8 = 0;
  *(undefined8 *)&(this->StoredAttributes).field_0x10 = 0;
  *(undefined8 *)&(this->StoredAttributes).field_0x18 = 0;
  *(undefined8 *)&(this->StoredAttributes).field_0x20 = 0;
  *(undefined8 *)&(this->StoredAttributes).field_0x28 = 0;
  *(undefined8 *)&(this->StoredAttributes).field_0x30 = 0;
  *(undefined8 *)&(this->StoredAttributes).field_0x38 = 0;
  FBoneContainer::FBoneContainer(&this->StoredBoneContainer);
  this->BlendOption = Linear;
  this->PoseLinkIndex = -1;
  *(undefined8 *)&this->TotalBlendInTimePerBone = 0;
  *(undefined8 *)&(this->TotalBlendInTimePerBone).field_0x8 = 0;
  this->TotalBlendInTime = 0.0;
  this->CurrentBlendInTime = 0.0;
  this->TimeToActivation = 0.0;
  this->bIsActive = false;
  (this->DebugColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::Black.field0_0x0;
  return this;
}

// ~FBlendStackAnimPlayer @ 14a862650

void __thiscall FBlendStackAnimPlayer::~FBlendStackAnimPlayer(FBlendStackAnimPlayer *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  if (*(void **)&this->TotalBlendInTimePerBone != (void *)0x0) {
    FMemory::Free(*(void **)&this->TotalBlendInTimePerBone);
  }
  FBoneContainer::~FBoneContainer(&this->StoredBoneContainer);
  UE::Anim::TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>::
  ~TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>
            ((TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
             &this->StoredAttributes);
  if (*(void **)&this->StoredCurve != (void *)0x0) {
    FMemory::Free(*(void **)&this->StoredCurve);
  }
  pFVar1 = (this->StoredBones).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FAnimNode_Mirror_Standalone::~FAnimNode_Mirror_Standalone(&this->MirrorNode);
  DestructItems<FBlendSampleData,int>
            ((FBlendSampleData *)(this->BlendSpacePlayerNode)._padding_,
             (int)(this->BlendSpacePlayerNode)._padding_);
  pvVar2 = (void *)(this->BlendSpacePlayerNode)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  DestructItems<FFIRFilterTimeBased,int>
            ((FFIRFilterTimeBased *)(this->BlendSpacePlayerNode)._padding_,
             (int)(this->BlendSpacePlayerNode)._padding_);
  pvVar2 = (void *)(this->BlendSpacePlayerNode)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  (this->BlendSpacePlayerNode)._padding_ = (longlong)&___7FAnimNode_Base__6B_;
  (this->SequencePlayerNode)._padding_ = (longlong)&___7FAnimNode_Base__6B_;
  pvVar2 = (void *)(this->OverrideCurve)._padding_;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
    return;
  }
  return;
}

// operator= @ 14a862cc0

FBlendStackAnimPlayer * __thiscall
FBlendStackAnimPlayer::operator=(FBlendStackAnimPlayer *this,FBlendStackAnimPlayer *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  TTypedIndexRange<FSkeletonPoseBoneIndex,TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar8;
  int iVar9;
  int iVar10;
  UAnimSequenceBase *pUVar11;
  void *pvVar12;
  UMirrorDataTable *pUVar13;
  FScriptContainerElement *_Src;
  TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar14;
  longlong lVar15;
  undefined8 uVar16;
  bool bVar17;
  bool bVar18;
  undefined1 uVar19;
  float fVar20;
  float fVar21;
  
  TArray<UE::Anim::FCurveElement,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UE::Anim::FCurveElement,TSizedDefaultAllocator<32>_> *)this,
             (TArray<UE::Anim::FCurveElement,TSizedDefaultAllocator<32>_> *)param_1);
  *(char *)&(this->OverrideCurve)._padding_ = (char)(param_1->OverrideCurve)._padding_;
  (this->OverrideCurve).Filter = (param_1->OverrideCurve).Filter;
  (this->SequencePlayerNode)._padding_ = (param_1->SequencePlayerNode)._padding_;
  lVar15 = (param_1->SequencePlayerNode)._padding_;
  (this->SequencePlayerNode)._padding_ = (param_1->SequencePlayerNode)._padding_;
  (this->SequencePlayerNode)._padding_ = lVar15;
  *(int *)&(this->SequencePlayerNode)._padding_ = (int)(param_1->SequencePlayerNode)._padding_;
  *(undefined4 *)((longlong)&(this->SequencePlayerNode)._padding_ + 4) =
       *(undefined4 *)((longlong)&(param_1->SequencePlayerNode)._padding_ + 4);
  (this->SequencePlayerNode)._padding_ = (param_1->SequencePlayerNode)._padding_;
  *(int *)&(this->SequencePlayerNode)._padding_ = (int)(param_1->SequencePlayerNode)._padding_;
  *(undefined1 *)((longlong)&(this->SequencePlayerNode)._padding_ + 4) =
       *(undefined1 *)((longlong)&(param_1->SequencePlayerNode)._padding_ + 4);
  (this->SequencePlayerNode)._padding_ = (param_1->SequencePlayerNode)._padding_;
  (this->SequencePlayerNode).GroupName = (param_1->SequencePlayerNode).GroupName;
  (this->SequencePlayerNode).GroupRole.Value = (param_1->SequencePlayerNode).GroupRole.Value;
  (this->SequencePlayerNode).bOverridePositionWhenJoiningSyncGroupAsLeader =
       (param_1->SequencePlayerNode).bOverridePositionWhenJoiningSyncGroupAsLeader;
  (this->SequencePlayerNode).Method = (param_1->SequencePlayerNode).Method;
  (this->SequencePlayerNode).bIgnoreForRelevancyTest =
       (param_1->SequencePlayerNode).bIgnoreForRelevancyTest;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar11 = (param_1->SequencePlayerNode).Sequence.field0_0x0.DebugPtr,
     pUVar11 != (UAnimSequenceBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
  }
  (this->SequencePlayerNode).Sequence.field0_0x0 = (param_1->SequencePlayerNode).Sequence.field0_0x0
  ;
  (this->SequencePlayerNode).PlayRateBasis = (param_1->SequencePlayerNode).PlayRateBasis;
  (this->SequencePlayerNode).PlayRate = (param_1->SequencePlayerNode).PlayRate;
  bVar17 = (param_1->SequencePlayerNode).PlayRateScaleBiasClampConstants.bClampResult;
  bVar18 = (param_1->SequencePlayerNode).PlayRateScaleBiasClampConstants.bInterpResult;
  uVar19 = (param_1->SequencePlayerNode).PlayRateScaleBiasClampConstants.field_0x3;
  fVar20 = (param_1->SequencePlayerNode).PlayRateScaleBiasClampConstants.InRange.Min;
  uVar16 = *(undefined8 *)&(param_1->SequencePlayerNode).PlayRateScaleBiasClampConstants.InRange.Max
  ;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.bMapRange =
       (param_1->SequencePlayerNode).PlayRateScaleBiasClampConstants.bMapRange;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.bClampResult = bVar17;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.bInterpResult = bVar18;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.field_0x3 = uVar19;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.InRange.Min = fVar20;
  *(undefined8 *)&(this->SequencePlayerNode).PlayRateScaleBiasClampConstants.InRange.Max = uVar16;
  fVar20 = (param_1->SequencePlayerNode).PlayRateScaleBiasClampConstants.Bias;
  fVar21 = (param_1->SequencePlayerNode).PlayRateScaleBiasClampConstants.ClampMin;
  *(undefined8 *)&(this->SequencePlayerNode).PlayRateScaleBiasClampConstants.OutRange.Max =
       *(undefined8 *)&(param_1->SequencePlayerNode).PlayRateScaleBiasClampConstants.OutRange.Max;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.Bias = fVar20;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.ClampMin = fVar21;
  fVar20 = (param_1->SequencePlayerNode).PlayRateScaleBiasClampConstants.InterpSpeedIncreasing;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.ClampMax =
       (param_1->SequencePlayerNode).PlayRateScaleBiasClampConstants.ClampMax;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.InterpSpeedIncreasing = fVar20;
  (this->SequencePlayerNode).PlayRateScaleBiasClampConstants.InterpSpeedDecreasing =
       (param_1->SequencePlayerNode).PlayRateScaleBiasClampConstants.InterpSpeedDecreasing;
  (this->SequencePlayerNode).StartPosition = (param_1->SequencePlayerNode).StartPosition;
  (this->SequencePlayerNode).bLoopAnimation = (param_1->SequencePlayerNode).bLoopAnimation;
  (this->SequencePlayerNode).bStartFromMatchingPose =
       (param_1->SequencePlayerNode).bStartFromMatchingPose;
  FAnimNode_BlendSpacePlayer_Standalone::operator=
            (&this->BlendSpacePlayerNode,&param_1->BlendSpacePlayerNode);
  (this->MirrorNode)._padding_ = (param_1->MirrorNode)._padding_;
  lVar15 = (param_1->MirrorNode)._padding_;
  (this->MirrorNode)._padding_ = (param_1->MirrorNode)._padding_;
  (this->MirrorNode)._padding_ = lVar15;
  *(char *)&(this->MirrorNode)._padding_ = (char)(param_1->MirrorNode)._padding_;
  *(undefined1 *)((longlong)&(this->MirrorNode)._padding_ + 1) =
       *(undefined1 *)((longlong)&(param_1->MirrorNode)._padding_ + 1);
  TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
             &(this->MirrorNode)._padding_,
             (TArray<FCompactPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
             &(param_1->MirrorNode)._padding_);
  plVar3 = &(param_1->MirrorNode)._padding_;
  plVar4 = &(this->MirrorNode)._padding_;
  if (plVar4 != plVar3) {
    iVar10 = (int)(param_1->MirrorNode)._padding_;
    piVar1 = (int *)((longlong)&(this->MirrorNode)._padding_ + 4);
    pvVar12 = (void *)*plVar3;
    iVar9 = *piVar1;
    *(int *)&(this->MirrorNode)._padding_ = iVar10;
    if ((iVar10 == 0) && (iVar9 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,0x10,iVar10,iVar9,(ForAnyElementType *)plVar4,iVar10,piVar1);
      if (iVar10 != 0) {
        memcpy((void *)*plVar4,pvVar12,(longlong)iVar10 << 5);
      }
    }
  }
  (this->MirrorNode).bMirror = (param_1->MirrorNode).bMirror;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar13 = (param_1->MirrorNode).MirrorDataTable.field0_0x0.DebugPtr,
     pUVar13 != (UMirrorDataTable *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar13);
  }
  (this->MirrorNode).MirrorDataTable.field0_0x0 = (param_1->MirrorNode).MirrorDataTable.field0_0x0;
  pTVar5 = &this->StoredBones;
  (this->MirrorNode).BlendTime = (param_1->MirrorNode).BlendTime;
  (this->MirrorNode).bResetChild = (param_1->MirrorNode).bResetChild;
  (this->MirrorNode).bBoneMirroring = (param_1->MirrorNode).bBoneMirroring;
  (this->MirrorNode).bCurveMirroring = (param_1->MirrorNode).bCurveMirroring;
  (this->MirrorNode).bAttributeMirroring = (param_1->MirrorNode).bAttributeMirroring;
  if (pTVar5 != &param_1->StoredBones) {
    iVar10 = (param_1->StoredBones).ArrayNum;
    piVar1 = &(this->StoredBones).ArrayMax;
    _Src = (param_1->StoredBones).AllocatorInstance.Data;
    (this->StoredBones).ArrayNum = iVar10;
    if ((iVar10 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,0x10,iVar10,*piVar1,&pTVar5->AllocatorInstance,iVar10,piVar1);
      if (iVar10 != 0) {
        memcpy((pTVar5->AllocatorInstance).Data,_Src,(longlong)iVar10 * 0x60);
      }
    }
  }
  TArray<UE::Anim::FCurveElement,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<UE::Anim::FCurveElement,TSizedDefaultAllocator<32>_> *)&this->StoredCurve,
             (TArray<UE::Anim::FCurveElement,TSizedDefaultAllocator<32>_> *)&param_1->StoredCurve);
  (this->StoredCurve).field_0x10 = (param_1->StoredCurve).field_0x10;
  *(undefined8 *)&(this->StoredCurve).field_0x18 = *(undefined8 *)&(param_1->StoredCurve).field_0x18
  ;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             &this->StoredAttributes,
             (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             &param_1->StoredAttributes);
  TArray<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
  operator=((TArray<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
             *)&(this->StoredAttributes).field_0x10,
            (TArray<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
             *)&(param_1->StoredAttributes).field_0x10);
  puVar6 = &(param_1->StoredAttributes).field_0x20;
  puVar7 = &(this->StoredAttributes).field_0x20;
  if (puVar7 != puVar6) {
    DestructItems<TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,int>
              (*(TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                 **)puVar7,*(int *)&(this->StoredAttributes).field_0x28);
    iVar10 = *(int *)&(param_1->StoredAttributes).field_0x28;
    puVar2 = &(this->StoredAttributes).field_0x2c;
    pTVar14 = *(TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                **)puVar6;
    *(int *)&(this->StoredAttributes).field_0x28 = iVar10;
    if ((iVar10 == 0) && (*(int *)puVar2 == 0)) {
      *(undefined4 *)puVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar10,*(int *)puVar2,(ForAnyElementType *)puVar7,iVar10,(int *)puVar2);
      ConstructItems<TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,int>
                (*(void **)puVar7,pTVar14,iVar10);
    }
  }
  TArray<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)
             &(this->StoredAttributes).field_0x30,
             (TArray<TWeakObjectPtr<UScriptStruct,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *)
             &(param_1->StoredAttributes).field_0x30);
  FBoneContainer::operator=(&this->StoredBoneContainer,&param_1->StoredBoneContainer);
  pTVar8 = &this->TotalBlendInTimePerBone;
  this->BlendOption = param_1->BlendOption;
  this->PoseLinkIndex = param_1->PoseLinkIndex;
  if (pTVar8 != &param_1->TotalBlendInTimePerBone) {
    iVar10 = *(int *)&(param_1->TotalBlendInTimePerBone).field_0x8;
    puVar6 = &(this->TotalBlendInTimePerBone).field_0xc;
    pvVar12 = *(void **)&param_1->TotalBlendInTimePerBone;
    *(int *)&(this->TotalBlendInTimePerBone).field_0x8 = iVar10;
    if ((iVar10 == 0) && (*(int *)puVar6 == 0)) {
      *(undefined4 *)puVar6 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar10,*(int *)puVar6,(ForAnyElementType *)pTVar8,iVar10,(int *)puVar6);
      if (iVar10 != 0) {
        memcpy(*(void **)pTVar8,pvVar12,(longlong)iVar10 << 2);
      }
    }
  }
  this->TotalBlendInTime = param_1->TotalBlendInTime;
  this->CurrentBlendInTime = param_1->CurrentBlendInTime;
  this->TimeToActivation = param_1->TimeToActivation;
  this->bIsActive = param_1->bIsActive;
  (this->DebugColor).field0_0x0 = (param_1->DebugColor).field0_0x0;
  return this;
}

// Evaluate_AnyThread @ 14a865a70

void __thiscall
FBlendStackAnimPlayer::Evaluate_AnyThread(FBlendStackAnimPlayer *this,FPoseContext *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_res8;
  
  lVar2 = (**(code **)((this->SequencePlayerNode)._padding_ + 0x148))(&this->SequencePlayerNode);
  if (lVar2 == 0) {
    lVar2 = (**(code **)((this->BlendSpacePlayerNode)._padding_ + 0x148))();
    if (lVar2 == 0) {
      RestorePoseContext(this,param_1);
      return;
    }
  }
  UpdateSourceLinkNode(this);
  (**(code **)((this->MirrorNode)._padding_ + 0x18))(&this->MirrorNode,param_1);
  iVar1 = (int)(this->OverrideCurve)._padding_;
  if (iVar1 != 0) {
    if ((*(int *)&(param_1->Curve).field_0x8 == 0) && (0 < iVar1)) {
      TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_>::operator=<TSizedDefaultAllocator<32>_>
                ((TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_> *)&param_1->Curve,
                 (TArray<UE::Anim::FCurveElement,TSizedDefaultAllocator<32>_> *)this);
      (param_1->Curve).field_0x10 = (char)(this->OverrideCurve)._padding_;
      return;
    }
    UE::Anim::FNamedValueArrayUtils::
    Union<_UE::Anim::FNamedValueArrayUtils::Union<TMemStackAllocator<0>,UE::Anim::FCurveElement,TSizedDefaultAllocator<32>_>_::__l2::<lambda_1>,TMemStackAllocator<0>,UE::Anim::FCurveElement,TSizedDefaultAllocator<32>,UE::Anim::FCurveElement>
              (&param_1->Curve,this,local_res8);
  }
  return;
}

// GetAccumulatedTime @ 14a865b90

float __thiscall FBlendStackAnimPlayer::GetAccumulatedTime(FBlendStackAnimPlayer *this)

{
  FAnimNode_BlendSpacePlayer_Standalone *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  float fVar5;
  
  lVar4 = (**(code **)((this->SequencePlayerNode)._padding_ + 0x148))(&this->SequencePlayerNode);
  if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014a865bc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar5 = (float)(**(code **)((this->SequencePlayerNode)._padding_ + 0xa8))
                             (&this->SequencePlayerNode);
    return fVar5;
  }
  pFVar1 = &this->BlendSpacePlayerNode;
  lVar4 = (**(code **)(pFVar1->_padding_ + 0x148))(pFVar1);
  if (lVar4 == 0) {
    return 0.0;
  }
  fVar5 = (float)(**(code **)(pFVar1->_padding_ + 0xa8))(pFVar1);
  if (0.0 <= fVar5) {
    fVar5 = (float)(**(code **)(pFVar1->_padding_ + 0xa8))(pFVar1);
    if (fVar5 <= __real_3f800000) goto LAB_14a865c30;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("BlendSpacePlayerNode.GetAccumulatedTime() >= 0.f && BlendSpacePlayerNode.GetAccumulatedTime() <= 1.f"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\BlendStack\\Source\\Runtime\\Private\\AnimNode_BlendStack.cpp"
                     ,0x12f,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    fVar5 = (float)(*pcVar2)();
    return fVar5;
  }
LAB_14a865c30:
                    /* WARNING: Could not recover jumptable at 0x00014a865c40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar5 = (float)(**(code **)(pFVar1->_padding_ + 0xa8))(pFVar1);
  return fVar5;
}

// GetAnimationAsset @ 14a865c60

UAnimationAsset * __thiscall FBlendStackAnimPlayer::GetAnimationAsset(FBlendStackAnimPlayer *this)

{
  longlong lVar1;
  UAnimationAsset *pUVar2;
  
  lVar1 = (**(code **)((this->SequencePlayerNode)._padding_ + 0x148))(&this->SequencePlayerNode);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014a865c92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar2 = (UAnimationAsset *)
             (**(code **)((this->SequencePlayerNode)._padding_ + 0x148))(&this->SequencePlayerNode);
    return pUVar2;
  }
  lVar1 = (**(code **)((this->BlendSpacePlayerNode)._padding_ + 0x148))(&this->BlendSpacePlayerNode)
  ;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014a865cca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pUVar2 = (UAnimationAsset *)
             (**(code **)((this->BlendSpacePlayerNode)._padding_ + 0x148))
                       (&this->BlendSpacePlayerNode);
    return pUVar2;
  }
  return (UAnimationAsset *)0x0;
}

// GetAnimationName @ 14a865cf0

FString * __thiscall
FBlendStackAnimPlayer::GetAnimationName(FBlendStackAnimPlayer *this,FString *__return_storage_ptr__)

{
  FAnimNode_BlendSpacePlayer_Standalone *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  FString *pFVar5;
  FName local_res8;
  FName local_res18;
  
  lVar4 = (**(code **)((this->SequencePlayerNode)._padding_ + 0x148))(&this->SequencePlayerNode);
  if (lVar4 == 0) {
    pFVar1 = &this->BlendSpacePlayerNode;
    lVar4 = (**(code **)(pFVar1->_padding_ + 0x148))(pFVar1);
    if (lVar4 == 0) {
      ::FString::FString(__return_storage_ptr__,"StoredPose");
      return __return_storage_ptr__;
    }
    lVar4 = (**(code **)(pFVar1->_padding_ + 0x148))(pFVar1);
    if (lVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BlendSpacePlayerNode.GetBlendSpace()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\BlendStack\\Source\\Runtime\\Private\\AnimNode_BlendStack.cpp"
                         ,0x1b3,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar5 = (FString *)(*pcVar2)();
        return pFVar5;
      }
    }
    lVar4 = (**(code **)(pFVar1->_padding_ + 0x148))(pFVar1);
    local_res18 = *(FName *)(lVar4 + 0x18);
    ::FName::ToString(&local_res18,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  lVar4 = (**(code **)((this->SequencePlayerNode)._padding_ + 0x148))(&this->SequencePlayerNode);
  if (lVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SequencePlayerNode.GetSequence()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\BlendStack\\Source\\Runtime\\Private\\AnimNode_BlendStack.cpp"
                       ,0x1ad,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FString *)(*pcVar2)();
      return pFVar5;
    }
  }
  lVar4 = (**(code **)((this->SequencePlayerNode)._padding_ + 0x148))(&this->SequencePlayerNode);
  local_res8 = *(FName *)(lVar4 + 0x18);
  ::FName::ToString(&local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetAssetPlayerNode @ 14a865e40

FAnimNode_AssetPlayerBase * __thiscall
FBlendStackAnimPlayer::GetAssetPlayerNode(FBlendStackAnimPlayer *this)

{
  longlong lVar1;
  FAnimNode_AssetPlayerBase *pFVar2;
  
  lVar1 = (**(code **)((this->SequencePlayerNode)._padding_ + 0x148))(&this->SequencePlayerNode);
  if (lVar1 != 0) {
    return (FAnimNode_AssetPlayerBase *)&this->SequencePlayerNode;
  }
  lVar1 = (**(code **)((this->BlendSpacePlayerNode)._padding_ + 0x148))();
  pFVar2 = (FAnimNode_AssetPlayerBase *)0x0;
  if (lVar1 != 0) {
    pFVar2 = (FAnimNode_AssetPlayerBase *)&this->BlendSpacePlayerNode;
  }
  return pFVar2;
}

// GetBlendInPercentage @ 14a865ea0

float __thiscall FBlendStackAnimPlayer::GetBlendInPercentage(FBlendStackAnimPlayer *this)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (__real_322bcc77 < this->TotalBlendInTime || __real_322bcc77 == this->TotalBlendInTime) {
    if (this->CurrentBlendInTime <= 0.0 && this->CurrentBlendInTime != 0.0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentBlendInTime >= 0.f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\BlendStack\\Source\\Runtime\\Private\\AnimNode_BlendStack.cpp"
                         ,0x1d4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar3 = (float)(*pcVar1)();
        return fVar3;
      }
    }
    fVar3 = this->CurrentBlendInTime / this->TotalBlendInTime;
    if (__real_3f800000 <= fVar3) {
      fVar3 = __real_3f800000;
    }
  }
  else {
    fVar3 = 0.0;
    if (this->TimeToActivation <= 0.0) {
      return __real_3f800000;
    }
  }
  return fVar3;
}

// GetBlendInWeight @ 14a865f30

float __thiscall FBlendStackAnimPlayer::GetBlendInWeight(FBlendStackAnimPlayer *this)

{
  float fVar1;
  
  fVar1 = GetBlendInPercentage(this);
  fVar1 = FAlphaBlend::AlphaToBlendOption(fVar1,this->BlendOption,(UCurveFloat *)0x0);
  return fVar1;
}

// GetBlendInWeights @ 14a865f60

void __thiscall
FBlendStackAnimPlayer::GetBlendInWeights(FBlendStackAnimPlayer *this,TArrayView<float,int> *param_1)

{
  code *pcVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  
  iVar6 = param_1->ArrayNum;
  if ((iVar6 != *(int *)&(this->TotalBlendInTimePerBone).field_0x8) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Weights.Num() == GetBlendInWeightsNum()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\BlendStack\\Source\\Runtime\\Private\\AnimNode_BlendStack.cpp"
                         ,0x1e6,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  fVar3 = __real_3f800000;
  fVar2 = __real_322bcc77;
  fVar11 = __real_3f800000;
  if (0.0 < this->TimeToActivation) {
    fVar11 = 0.0;
  }
  uVar8 = 0;
  if (0 < iVar6) {
    lVar9 = 0;
    do {
      uVar7 = ~uVar8 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar8 < *(int *)&(this->TotalBlendInTimePerBone).field_0x8) {
        uVar5 = uVar7;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      fVar10 = *(float *)(lVar9 + *(longlong *)&this->TotalBlendInTimePerBone);
      if (fVar2 <= fVar10) {
        if ((this->CurrentBlendInTime <= 0.0 && this->CurrentBlendInTime != 0.0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("CurrentBlendInTime >= 0.f",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\BlendStack\\Source\\Runtime\\Private\\AnimNode_BlendStack.cpp"
                               ,0x1f2,L""), bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        fVar10 = this->CurrentBlendInTime / fVar10;
        if (fVar3 <= fVar10) {
          fVar10 = fVar3;
        }
        fVar10 = FAlphaBlend::AlphaToBlendOption(fVar10,this->BlendOption,(UCurveFloat *)0x0);
        iVar6 = param_1->ArrayNum;
        uVar5 = 0;
        if ((int)uVar8 < iVar6) {
          uVar5 = uVar7;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        *(float *)(lVar9 + (longlong)param_1->DataPtr) = fVar10;
      }
      else {
        uVar5 = 0;
        if ((int)uVar8 < iVar6) {
          uVar5 = uVar7;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        *(float *)(lVar9 + (longlong)param_1->DataPtr) = fVar11;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 4;
    } while ((int)uVar8 < iVar6);
  }
  return;
}

// GetBlendInWeightsNum @ 14a866560

int __thiscall FBlendStackAnimPlayer::GetBlendInWeightsNum(FBlendStackAnimPlayer *this)

{
  return *(int *)&(this->TotalBlendInTimePerBone).field_0x8;
}

// GetBlendParameters @ 14a866660

TVector<double> * __thiscall
FBlendStackAnimPlayer::GetBlendParameters
          (FBlendStackAnimPlayer *this,TVector<double> *__return_storage_ptr__)

{
  FAnimNode_BlendSpacePlayer_Standalone *pFVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  pFVar1 = &this->BlendSpacePlayerNode;
  lVar3 = (**(code **)(pFVar1->_padding_ + 0x148))(pFVar1);
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (lVar3 != 0) {
    (**(code **)(pFVar1->_padding_ + 0x150))(pFVar1,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetCurrentAssetLength @ 14a866720

float __thiscall FBlendStackAnimPlayer::GetCurrentAssetLength(FBlendStackAnimPlayer *this)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = (**(code **)((this->SequencePlayerNode)._padding_ + 0x148))(&this->SequencePlayerNode);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014a866752. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(**(code **)((this->SequencePlayerNode)._padding_ + 0xb8))
                             (&this->SequencePlayerNode);
    return fVar2;
  }
  lVar1 = (**(code **)((this->BlendSpacePlayerNode)._padding_ + 0x148))(&this->BlendSpacePlayerNode)
  ;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014a86678a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(**(code **)((this->BlendSpacePlayerNode)._padding_ + 0xb8))
                             (&this->BlendSpacePlayerNode);
    return fVar2;
  }
  return 0.0;
}

// GetCurrentAssetTime @ 14a8667b0

float __thiscall FBlendStackAnimPlayer::GetCurrentAssetTime(FBlendStackAnimPlayer *this)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = (**(code **)((this->SequencePlayerNode)._padding_ + 0x148))(&this->SequencePlayerNode);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014a8667e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(**(code **)((this->SequencePlayerNode)._padding_ + 0xc0))
                             (&this->SequencePlayerNode);
    return fVar2;
  }
  lVar1 = (**(code **)((this->BlendSpacePlayerNode)._padding_ + 0x148))(&this->BlendSpacePlayerNode)
  ;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014a86681a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(**(code **)((this->BlendSpacePlayerNode)._padding_ + 0xc0))
                             (&this->BlendSpacePlayerNode);
    return fVar2;
  }
  return 0.0;
}

// GetDebugColor @ 14a866a70

FColor __thiscall FBlendStackAnimPlayer::GetDebugColor(FBlendStackAnimPlayer *this)

{
  FColor_u_0 *in_RDX;
  
  *in_RDX = (this->DebugColor).field0_0x0;
  return (FColor)SUB84(in_RDX,0);
}

// GetPlayRate @ 14a866b30

float __thiscall FBlendStackAnimPlayer::GetPlayRate(FBlendStackAnimPlayer *this)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = (**(code **)((this->SequencePlayerNode)._padding_ + 0x148))(&this->SequencePlayerNode);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014a866b62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(**(code **)((this->SequencePlayerNode)._padding_ + 0x170))
                             (&this->SequencePlayerNode);
    return fVar2;
  }
  lVar1 = (**(code **)((this->BlendSpacePlayerNode)._padding_ + 0x148))(&this->BlendSpacePlayerNode)
  ;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014a866b9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar2 = (float)(**(code **)((this->BlendSpacePlayerNode)._padding_ + 0x160))
                             (&this->BlendSpacePlayerNode);
    return fVar2;
  }
  return 0.0;
}

// HasValidPoseContext @ 14a866df0

bool __thiscall FBlendStackAnimPlayer::HasValidPoseContext(FBlendStackAnimPlayer *this)

{
  bool bVar1;
  
  if ((this->StoredBones).ArrayNum != 0) {
    bVar1 = FWeakObjectPtr::IsValid(&(this->StoredBoneContainer).Asset.WeakPtr);
    if (((bVar1) && ((this->StoredBoneContainer).RefSkeleton != (FReferenceSkeleton *)0x0)) &&
       (0 < (this->StoredBoneContainer).BoneIndicesArray.ArrayNum)) {
      return true;
    }
  }
  return false;
}

// Initialize @ 14a866e40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FBlendStackAnimPlayer::Initialize
          (FBlendStackAnimPlayer *this,FAnimationInitializeContext *param_1,UAnimationAsset *param_2
          ,float param_3,bool param_4,bool param_5,UMirrorDataTable *param_6,float param_7,
          UBlendProfile *param_8,EAlphaBlendOption param_9,TVector<double> *param_10,float param_11,
          float param_12,int param_13,FName param_14,Type param_15,EAnimSyncMethod param_16,
          bool param_17)

{
  int *piVar1;
  TTypedIndexRange<FSkeletonPoseBoneIndex,TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar2;
  FAnimNode_BlendSpacePlayer_Standalone *pFVar3;
  void *_Dst;
  undefined1 *puVar4;
  longlong lVar5;
  USkeleton *pUVar6;
  code *pcVar7;
  float fVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  UClass *pUVar12;
  int iVar13;
  UAnimationAsset *pUVar14;
  undefined4 in_XMM3_Db;
  FColor_u_0 local_res10;
  FString local_f0;
  FString local_e0;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  ulong64 local_b8;
  FString local_b0;
  TTypedIndexRange<FSkeletonPoseBoneIndex,TArrayView<float,int>_> local_98;
  TTypedIndexRange<FSkeletonPoseBoneIndex,TArrayView<float,int>_> local_88;
  FLinearColor local_78;
  double local_68;
  double dStack_60;
  double local_58;
  
  if (((param_5) && (param_6 == (UMirrorDataTable *)0x0)) && (1 < (byte)LogBlendStack._0_1_)) {
    if (param_2 == (UAnimationAsset *)0x0) {
      ::FString::FString(&local_f0,L"None");
    }
    else {
      local_d0 = (FName)param_2->_padding_;
      ::FName::ToString(&local_d0,&local_f0);
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBlendStack);
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
  }
  if ((*(longlong *)param_1 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Context.AnimInstanceProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\BlendStack\\Source\\Runtime\\Private\\AnimNode_BlendStack.cpp"
                         ,0x2c,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar5 = *(longlong *)param_1;
  if ((*(longlong *)(lVar5 + 0x150) == 0) &&
     (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2821110184175206029>,true,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Animation\\AnimInstanceProxy.h"
                         ,0x173,"Skeleton"), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pUVar6 = *(USkeleton **)(lVar5 + 0x150);
  if ((pUVar6 == (USkeleton *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Skeleton",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\BlendStack\\Source\\Runtime\\Private\\AnimNode_BlendStack.cpp"
                         ,0x2e,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar10 = (pUVar6->ReferenceSkeleton).FinalRefBoneInfo.ArrayNum;
  if (iVar10 < 1) {
    if (1 < (byte)LogBlendStack._0_1_) {
      if (param_2 == (UAnimationAsset *)0x0) {
        ::FString::FString(&local_e0,L"None");
      }
      else {
        local_c8 = (FName)param_2->_padding_;
        ::FName::ToString(&local_c8,&local_e0);
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBlendStack);
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
    }
  }
  else if ((__real_38d1b717 < param_7) && (param_8 != (UBlendProfile *)0x0)) {
    pTVar2 = &this->TotalBlendInTimePerBone;
    iVar13 = *(int *)&(this->TotalBlendInTimePerBone).field_0x8;
    puVar4 = &(this->TotalBlendInTimePerBone).field_0x8;
    if (iVar13 < iVar10) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar10 - iVar13,(ForAnyElementType *)pTVar2,(int *)puVar4,
                 (int *)&(this->TotalBlendInTimePerBone).field_0xc);
    }
    else if (iVar10 < iVar13) {
      iVar13 = iVar13 - iVar10;
      if (iVar13 < 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      else if (iVar13 == 0) goto LAB_14a8670fd;
      _Dst = (void *)(*(longlong *)pTVar2 + (longlong)iVar10 * 4);
      iVar10 = (*(int *)puVar4 - iVar13) - iVar10;
      if (iVar10 != 0) {
        memmove(_Dst,(void *)((longlong)_Dst + (longlong)iVar13 * 4),(longlong)iVar10 << 2);
      }
      *(int *)puVar4 = *(int *)puVar4 - iVar13;
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(ForAnyElementType *)pTVar2,*(int *)puVar4,
                 (int *)&(this->TotalBlendInTimePerBone).field_0xc);
    }
LAB_14a8670fd:
    local_98._0_8_ = *(undefined8 *)pTVar2;
    iVar10 = *(int *)puVar4;
    if ((iVar10 < 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_88._12_4_ = local_98._12_4_;
    local_88._8_4_ = iVar10;
    local_88._0_8_ = local_98._0_8_;
    local_98._8_4_ = iVar10;
    UBlendProfile::FillSkeletonBoneDurationsArray(param_8,&local_88,param_7,pUVar6);
  }
  this->BlendOption = param_9;
  lVar5 = (this->MirrorNode)._padding_;
  this->TotalBlendInTime = param_7;
  this->TimeToActivation = param_12;
  this->CurrentBlendInTime = 0.0;
  (**(code **)(lVar5 + 0xa8))(&this->MirrorNode,param_6);
  (**(code **)((this->MirrorNode)._padding_ + 0xe0))(&this->MirrorNode,param_5);
  fVar8 = __real_3f800000;
  if (param_2 == (UAnimationAsset *)0x0) goto LAB_14a867302;
  pUVar12 = Z_Construct_UClass_UAnimMontage_NoRegister();
  iVar10 = (int)pUVar12->_padding_;
  if ((*(int *)(param_2->_padding_ + 0x38) < iVar10) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar10 * 8)
      != &pUVar12->_padding_)) {
    if (param_2 == (UAnimationAsset *)0x0) goto LAB_14a867302;
    pUVar12 = Z_Construct_UClass_UAnimSequenceBase_NoRegister();
    iVar10 = (int)pUVar12->_padding_;
    if ((iVar10 <= *(int *)(param_2->_padding_ + 0x38)) &&
       ((longlong *)
        *(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
        &pUVar12->_padding_)) {
      (**(code **)((this->BlendSpacePlayerNode)._padding_ + 400))(&this->BlendSpacePlayerNode,0);
      (**(code **)((this->SequencePlayerNode)._padding_ + 0xb0))
                (&this->SequencePlayerNode,CONCAT44(in_XMM3_Db,param_3));
      (**(code **)((this->SequencePlayerNode)._padding_ + 0x158))(&this->SequencePlayerNode,param_2)
      ;
      (**(code **)((this->SequencePlayerNode)._padding_ + 0x160))(&this->SequencePlayerNode,param_4)
      ;
      (**(code **)((this->SequencePlayerNode)._padding_ + 0x198))
                (&this->SequencePlayerNode,param_11);
      (**(code **)((this->SequencePlayerNode)._padding_ + 0x138))
                (&this->SequencePlayerNode,param_16);
      (**(code **)((this->SequencePlayerNode)._padding_ + 0x128))
                (&this->SequencePlayerNode,param_14);
      (**(code **)((this->SequencePlayerNode)._padding_ + 0x130))
                (&this->SequencePlayerNode,param_15);
      (**(code **)((this->SequencePlayerNode)._padding_ + 0x140))
                (&this->SequencePlayerNode,param_17);
      goto LAB_14a867469;
    }
    if (param_2 == (UAnimationAsset *)0x0) {
LAB_14a867302:
      pUVar14 = (UAnimationAsset *)0x0;
    }
    else {
      pUVar12 = Z_Construct_UClass_UBlendSpace_NoRegister();
      iVar10 = (int)pUVar12->_padding_;
      if ((*(int *)(param_2->_padding_ + 0x38) < iVar10) ||
         (pUVar14 = param_2,
         (longlong *)
         *(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar10 * 8) !=
         &pUVar12->_padding_)) goto LAB_14a867302;
    }
    if (pUVar14 != (UAnimationAsset *)0x0) {
      (**(code **)((this->SequencePlayerNode)._padding_ + 0x158))(&this->SequencePlayerNode,0);
      pFVar3 = &this->BlendSpacePlayerNode;
      (**(code **)(pFVar3->_padding_ + 0x178))(pFVar3,0);
      if (fVar8 <= param_3) {
        param_3 = fVar8;
      }
      if (param_3 <= 0.0) {
        param_3 = 0.0;
      }
      (**(code **)(pFVar3->_padding_ + 0xb0))(pFVar3,CONCAT44(in_XMM3_Db,param_3));
      (**(code **)(pFVar3->_padding_ + 400))(pFVar3,pUVar14);
      (**(code **)(pFVar3->_padding_ + 0x1a8))(pFVar3,param_4);
      (**(code **)(pFVar3->_padding_ + 0x1a0))(pFVar3,param_11);
      local_68 = (param_10->field0_0x0)._s_0.X;
      dStack_60 = (param_10->field0_0x0)._s_0.Y;
      local_58 = (param_10->field0_0x0)._s_0.Z;
      (**(code **)(pFVar3->_padding_ + 0x198))(pFVar3,&local_68);
      (**(code **)(pFVar3->_padding_ + 0x138))(pFVar3,param_16);
      (**(code **)(pFVar3->_padding_ + 0x128))(pFVar3,param_14);
      (**(code **)(pFVar3->_padding_ + 0x130))(pFVar3,param_15);
      (**(code **)(pFVar3->_padding_ + 0x140))(pFVar3,param_17);
      goto LAB_14a867469;
    }
    if (param_2 == (UAnimationAsset *)0x0) goto LAB_14a867469;
  }
  (**(code **)((this->BlendSpacePlayerNode)._padding_ + 400))(&this->BlendSpacePlayerNode,0);
  (**(code **)((this->SequencePlayerNode)._padding_ + 0x158))(&this->SequencePlayerNode,0);
  if (1 < (byte)LogBlendStack._0_1_) {
    local_c0 = (FName)param_2->_padding_;
    ::FName::ToString(&local_c0,&local_b0);
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogBlendStack);
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
  }
LAB_14a867469:
  UpdateSourceLinkNode(this);
  piVar1 = (int *)((longlong)&(this->OverrideCurve)._padding_ + 4);
  this->PoseLinkIndex = param_13;
  iVar10 = *piVar1;
  *(undefined4 *)&(this->OverrideCurve)._padding_ = 0;
  if (iVar10 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this,0,piVar1);
  }
  *(undefined1 *)&(this->OverrideCurve)._padding_ = 0;
  local_b8 = FObjectTrace::GetObjectId((UObject *)param_2);
  uVar11 = CityHash32((char *)&local_b8,8);
  FLinearColor::MakeFromHSV8
            (&local_78,
             (uchar)(int)(((float)(uVar11 * 0xbb38435 + 0x3619636b >> 9 | 0x3f800000) - fVar8) *
                         __real_437f0000),0xc4,0xc4);
  FLinearColor::ToFColorSRGB(&local_78);
  (this->DebugColor).field0_0x0 = local_res10;
  return;
}

// IsLooping @ 14a867eb0

bool __thiscall FBlendStackAnimPlayer::IsLooping(FBlendStackAnimPlayer *this)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)((this->SequencePlayerNode)._padding_ + 0x148))(&this->SequencePlayerNode);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014a867ee2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((this->SequencePlayerNode)._padding_ + 0xd0))(&this->SequencePlayerNode);
    return (bool)uVar1;
  }
  lVar2 = (**(code **)((this->BlendSpacePlayerNode)._padding_ + 0x148))(&this->BlendSpacePlayerNode)
  ;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014a867f1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((this->BlendSpacePlayerNode)._padding_ + 0xd0))
                      (&this->BlendSpacePlayerNode);
    return (bool)uVar1;
  }
  return false;
}

// MovePoseContextTo @ 14a868200

void __thiscall
FBlendStackAnimPlayer::MovePoseContextTo(FBlendStackAnimPlayer *this,FBlendStackAnimPlayer *param_1)

{
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  FBlendedHeapCurve *pFVar3;
  FBlendedHeapCurve *pFVar4;
  FMeshAttributeContainer *pFVar5;
  FMeshAttributeContainer *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  
  pTVar1 = &this->StoredBones;
  pTVar2 = &param_1->StoredBones;
  if (pTVar2 != pTVar1) {
    pFVar7 = (pTVar2->AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    (pTVar2->AllocatorInstance).Data = (pTVar1->AllocatorInstance).Data;
    (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (param_1->StoredBones).ArrayNum = (this->StoredBones).ArrayNum;
    (param_1->StoredBones).ArrayMax = (this->StoredBones).ArrayMax;
    (this->StoredBones).ArrayNum = 0;
    (this->StoredBones).ArrayMax = 0;
  }
  pFVar3 = &this->StoredCurve;
  pFVar4 = &param_1->StoredCurve;
  if (pFVar4 != pFVar3) {
    if (*(void **)pFVar4 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar4);
    }
    *(undefined8 *)pFVar4 = *(undefined8 *)pFVar3;
    *(undefined8 *)pFVar3 = 0;
    *(undefined4 *)&(param_1->StoredCurve).field_0x8 = *(undefined4 *)&(this->StoredCurve).field_0x8
    ;
    *(undefined4 *)&(param_1->StoredCurve).field_0xc = *(undefined4 *)&(this->StoredCurve).field_0xc
    ;
    *(undefined8 *)&(this->StoredCurve).field_0x8 = 0;
  }
  (param_1->StoredCurve).field_0x10 = (this->StoredCurve).field_0x10;
  pFVar5 = &param_1->StoredAttributes;
  *(undefined8 *)&(param_1->StoredCurve).field_0x18 = *(undefined8 *)&(this->StoredCurve).field_0x18
  ;
  pFVar6 = &this->StoredAttributes;
  if (pFVar5 != pFVar6) {
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              (*(TArray<int,TSizedDefaultAllocator<32>_> **)pFVar5,
               *(int *)&(param_1->StoredAttributes).field_0x8);
    if (*(void **)pFVar5 != (void *)0x0) {
      FMemory::Free(*(void **)pFVar5);
    }
    *(undefined8 *)pFVar5 = *(undefined8 *)pFVar6;
    *(undefined8 *)pFVar6 = 0;
    *(undefined4 *)&(param_1->StoredAttributes).field_0x8 =
         *(undefined4 *)&(this->StoredAttributes).field_0x8;
    *(undefined4 *)&(param_1->StoredAttributes).field_0xc =
         *(undefined4 *)&(this->StoredAttributes).field_0xc;
    *(undefined8 *)&(this->StoredAttributes).field_0x8 = 0;
  }
  puVar8 = &(this->StoredAttributes).field_0x10;
  puVar9 = &(param_1->StoredAttributes).field_0x10;
  if (puVar9 != puVar8) {
    DestructItems<TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_>,int>
              (*(TArray<UE::Anim::FAttributeId,TSizedDefaultAllocator<32>_> **)puVar9,
               *(int *)&(param_1->StoredAttributes).field_0x18);
    if (*(void **)puVar9 != (void *)0x0) {
      FMemory::Free(*(void **)puVar9);
    }
    *(undefined8 *)puVar9 = *(undefined8 *)puVar8;
    *(undefined8 *)puVar8 = 0;
    *(undefined4 *)&(param_1->StoredAttributes).field_0x18 =
         *(undefined4 *)&(this->StoredAttributes).field_0x18;
    *(undefined4 *)&(param_1->StoredAttributes).field_0x1c =
         *(undefined4 *)&(this->StoredAttributes).field_0x1c;
    *(undefined8 *)&(this->StoredAttributes).field_0x18 = 0;
  }
  puVar8 = &(this->StoredAttributes).field_0x20;
  puVar9 = &(param_1->StoredAttributes).field_0x20;
  if (puVar9 != puVar8) {
    DestructItems<TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,int>
              (*(TArray<UE::Anim::TWrappedAttribute<TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
                 **)puVar9,*(int *)&(param_1->StoredAttributes).field_0x28);
    if (*(void **)puVar9 != (void *)0x0) {
      FMemory::Free(*(void **)puVar9);
    }
    *(undefined8 *)puVar9 = *(undefined8 *)puVar8;
    *(undefined8 *)puVar8 = 0;
    *(undefined4 *)&(param_1->StoredAttributes).field_0x28 =
         *(undefined4 *)&(this->StoredAttributes).field_0x28;
    *(undefined4 *)&(param_1->StoredAttributes).field_0x2c =
         *(undefined4 *)&(this->StoredAttributes).field_0x2c;
    *(undefined8 *)&(this->StoredAttributes).field_0x28 = 0;
  }
  puVar9 = &(this->StoredAttributes).field_0x30;
  puVar8 = &(param_1->StoredAttributes).field_0x30;
  if (puVar8 != puVar9) {
    if (*(void **)puVar8 != (void *)0x0) {
      FMemory::Free(*(void **)puVar8);
    }
    *(undefined8 *)puVar8 = *(undefined8 *)puVar9;
    *(undefined8 *)puVar9 = 0;
    *(undefined4 *)&(param_1->StoredAttributes).field_0x38 =
         *(undefined4 *)&(this->StoredAttributes).field_0x38;
    *(undefined4 *)&(param_1->StoredAttributes).field_0x3c =
         *(undefined4 *)&(this->StoredAttributes).field_0x3c;
    *(undefined8 *)&(this->StoredAttributes).field_0x38 = 0;
  }
  FBoneContainer::operator=(&param_1->StoredBoneContainer,&this->StoredBoneContainer);
  (param_1->StoredBones).ArrayNum = 0;
  if ((param_1->StoredBones).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x60,0x10,0,&pTVar2->AllocatorInstance,0,&(param_1->StoredBones).ArrayMax);
  }
  return;
}

// RestorePoseContext @ 14a868990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FBlendStackAnimPlayer::RestorePoseContext(FBlendStackAnimPlayer *this,FPoseContext *param_1)

{
  FCompactPose *pFVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  void *_Dst;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  bool bVar24;
  uint uVar25;
  uint uVar26;
  longlong lVar27;
  longlong lVar28;
  FBoneContainer *pFVar29;
  uint uVar30;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *pTVar31;
  undefined1 auStackY_258 [32];
  longlong local_228;
  longlong local_220;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  FBoneContainer local_1a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  lVar27 = (**(code **)((this->SequencePlayerNode)._padding_ + 0x148))(&this->SequencePlayerNode);
  if (((lVar27 != 0) ||
      (lVar27 = (**(code **)((this->BlendSpacePlayerNode)._padding_ + 0x148))(), lVar27 != 0)) &&
     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                         ("!SequencePlayerNode.GetSequence() && !BlendSpacePlayerNode.GetBlendSpace()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\BlendStack\\Source\\Runtime\\Private\\AnimNode_BlendStack.cpp"
                          ,0xbd,L""), bVar24)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  bVar24 = FWeakObjectPtr::IsValid(&(this->StoredBoneContainer).Asset.WeakPtr);
  if (((bVar24) && ((this->StoredBoneContainer).RefSkeleton != (FReferenceSkeleton *)0x0)) &&
     (0 < (this->StoredBoneContainer).BoneIndicesArray.ArrayNum)) {
    pFVar29 = *(FBoneContainer **)&(param_1->Pose).field_0x10;
    pFVar1 = &param_1->Pose;
    if (pFVar29->SerialNumber != (this->StoredBoneContainer).SerialNumber) {
      FBoneContainer::FBoneContainer(&local_1a8,pFVar29);
      uVar6 = *(uint *)&(param_1->Pose).field_0x8;
      uVar30 = 0;
      if (uVar6 != 0) {
        lVar27 = 0;
        local_220 = 0;
        local_228 = 0;
        do {
          if (((int)uVar30 < 0) || (local_1a8.CompactPoseToSkeletonIndex.ArrayNum <= (int)uVar30)) {
            bVar24 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<8192494858347217501>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\BoneContainer.h"
                                ,0x25d,"CompactPoseToSkeletonIndex.IsValidIndex(BoneIndex.GetInt())"
                               );
            if (bVar24) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
LAB_14a868c38:
            uVar25 = 0xffffffff;
          }
          else {
            uVar25 = 0;
            if ((int)uVar30 < local_1a8.CompactPoseToSkeletonIndex.ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            iVar5 = *(int *)(local_1a8.CompactPoseToSkeletonIndex.AllocatorInstance.Data + local_228
                            );
            if ((iVar5 < 0) || ((this->StoredBoneContainer).SkeletonToCompactPose.ArrayNum <= iVar5)
               ) goto LAB_14a868c38;
            if ((iVar5 < 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar25 = *(uint *)((this->StoredBoneContainer).SkeletonToCompactPose.AllocatorInstance.
                               Data + (longlong)iVar5 * 4);
          }
          if (uVar25 == 0xffffffff) {
            if (local_1a8.RefPoseOverride.Object == (FSkelMeshRefPoseOverride *)0x0) {
              pTVar31 = &(local_1a8.RefSkeleton)->FinalRefBonePose;
            }
            else {
              pTVar31 = &(local_1a8.RefPoseOverride.Object)->RefBonePoses;
            }
            uVar25 = 0;
            if ((int)uVar30 < local_1a8.BoneIndicesArray.ArrayNum) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar4 = *(ushort *)(local_1a8.BoneIndicesArray.AllocatorInstance.Data + local_220);
            if ((pTVar31->ArrayNum <= (int)(uint)uVar4) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar8 = (pTVar31->AllocatorInstance).Data;
            lVar28 = (ulonglong)uVar4 * 0x60;
            uVar14 = *(undefined8 *)(pFVar8 + lVar28 + 0x10);
            uVar15 = *(undefined8 *)(pFVar8 + lVar28 + 0x10 + 8);
            uVar16 = *(undefined8 *)(pFVar8 + lVar28 + 0x20);
            uVar17 = *(undefined8 *)(pFVar8 + lVar28 + 0x20 + 8);
            pFVar7 = pFVar8 + lVar28;
            uVar10 = *(undefined4 *)pFVar7;
            uVar11 = *(undefined4 *)(pFVar7 + 4);
            uVar12 = *(undefined4 *)(pFVar7 + 8);
            uVar13 = *(undefined4 *)(pFVar7 + 0xc);
            uVar18 = *(undefined8 *)(pFVar8 + lVar28 + 0x30);
            uVar19 = *(undefined8 *)(pFVar8 + lVar28 + 0x30 + 8);
            uVar20 = *(undefined8 *)(pFVar8 + lVar28 + 0x50);
            uVar21 = *(undefined8 *)(pFVar8 + lVar28 + 0x50 + 8);
            uVar22 = *(undefined8 *)(pFVar8 + lVar28 + 0x40);
            uVar23 = *(undefined8 *)(pFVar8 + lVar28 + 0x40 + 8);
            uVar25 = 0;
            if ((int)uVar30 < *(int *)&(param_1->Pose).field_0x8) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar28 = *(longlong *)pFVar1;
            puVar2 = (undefined4 *)(lVar28 + lVar27);
            *puVar2 = uVar10;
            puVar2[1] = uVar11;
            puVar2[2] = uVar12;
            puVar2[3] = uVar13;
            puVar3 = (undefined8 *)(lVar28 + 0x10 + lVar27);
            *puVar3 = uVar14;
            puVar3[1] = uVar15;
            puVar3 = (undefined8 *)(lVar28 + 0x20 + lVar27);
            *puVar3 = uVar16;
            puVar3[1] = uVar17;
            puVar3 = (undefined8 *)(lVar28 + 0x30 + lVar27);
            *puVar3 = uVar18;
            puVar3[1] = uVar19;
            puVar3 = (undefined8 *)(lVar28 + 0x40 + lVar27);
            *puVar3 = uVar22;
            puVar3[1] = uVar23;
            local_1c0 = (undefined4)uVar20;
            uStack_1bc = (undefined4)((ulonglong)uVar20 >> 0x20);
            uStack_1b8 = (undefined4)uVar21;
            uStack_1b4 = (undefined4)((ulonglong)uVar21 >> 0x20);
          }
          else {
            uVar26 = 0;
            if ((int)uVar25 < (this->StoredBones).ArrayNum) {
              uVar26 = ~uVar25 >> 0x1f;
            }
            if ((uVar26 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar8 = (this->StoredBones).AllocatorInstance.Data;
            lVar28 = (longlong)(int)uVar25 * 0x60;
            uVar14 = *(undefined8 *)(pFVar8 + lVar28 + 0x10);
            uVar15 = *(undefined8 *)(pFVar8 + lVar28 + 0x10 + 8);
            uVar16 = *(undefined8 *)(pFVar8 + lVar28 + 0x20);
            uVar17 = *(undefined8 *)(pFVar8 + lVar28 + 0x20 + 8);
            pFVar7 = pFVar8 + lVar28;
            uVar10 = *(undefined4 *)pFVar7;
            uVar11 = *(undefined4 *)(pFVar7 + 4);
            uVar12 = *(undefined4 *)(pFVar7 + 8);
            uVar13 = *(undefined4 *)(pFVar7 + 0xc);
            uVar18 = *(undefined8 *)(pFVar8 + lVar28 + 0x30);
            uVar19 = *(undefined8 *)(pFVar8 + lVar28 + 0x30 + 8);
            uVar20 = *(undefined8 *)(pFVar8 + lVar28 + 0x50);
            uVar21 = *(undefined8 *)(pFVar8 + lVar28 + 0x50 + 8);
            uVar22 = *(undefined8 *)(pFVar8 + lVar28 + 0x40);
            uVar23 = *(undefined8 *)(pFVar8 + lVar28 + 0x40 + 8);
            uVar25 = 0;
            if ((int)uVar30 < *(int *)&(param_1->Pose).field_0x8) {
              uVar25 = ~uVar30 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar24)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            lVar28 = *(longlong *)pFVar1;
            puVar2 = (undefined4 *)(lVar28 + lVar27);
            *puVar2 = uVar10;
            puVar2[1] = uVar11;
            puVar2[2] = uVar12;
            puVar2[3] = uVar13;
            puVar3 = (undefined8 *)(lVar28 + 0x10 + lVar27);
            *puVar3 = uVar14;
            puVar3[1] = uVar15;
            puVar3 = (undefined8 *)(lVar28 + 0x20 + lVar27);
            *puVar3 = uVar16;
            puVar3[1] = uVar17;
            puVar3 = (undefined8 *)(lVar28 + 0x30 + lVar27);
            *puVar3 = uVar18;
            puVar3[1] = uVar19;
            puVar3 = (undefined8 *)(lVar28 + 0x40 + lVar27);
            *puVar3 = uVar22;
            puVar3[1] = uVar23;
            local_200 = (undefined4)uVar20;
            uStack_1fc = (undefined4)((ulonglong)uVar20 >> 0x20);
            uStack_1f8 = (undefined4)uVar21;
            uStack_1f4 = (undefined4)((ulonglong)uVar21 >> 0x20);
            local_1c0 = local_200;
            uStack_1bc = uStack_1fc;
            uStack_1b8 = uStack_1f8;
            uStack_1b4 = uStack_1f4;
          }
          local_220 = local_220 + 2;
          puVar2 = (undefined4 *)(lVar28 + 0x50 + lVar27);
          *puVar2 = local_1c0;
          puVar2[1] = uStack_1bc;
          puVar2[2] = uStack_1b8;
          puVar2[3] = uStack_1b4;
          local_228 = local_228 + 4;
          uVar30 = uVar30 + 1;
          lVar27 = lVar27 + 0x60;
        } while (uVar30 != uVar6);
      }
      FBoneContainer::~FBoneContainer(&local_1a8);
      goto LAB_14a868f7b;
    }
    iVar5 = (this->StoredBones).ArrayNum;
    if (iVar5 != 0) {
      if ((*(int *)&(param_1->Pose).field_0x8 != iVar5) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("PoseContext.Pose.GetNumBones() == StoredBones.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\BlendStack\\Source\\Runtime\\Private\\AnimNode_BlendStack.cpp"
                              ,0xcb,L""), bVar24)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar5 = *(int *)&(param_1->Pose).field_0x8;
      pFVar7 = (this->StoredBones).AllocatorInstance.Data;
      _Dst = *(void **)pFVar1;
      if ((iVar5 < 0) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar24)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      memcpy(_Dst,pFVar7,(longlong)iVar5 * 0x60);
      goto LAB_14a868f7b;
    }
    if (param_1->bExpectsAdditivePose == false) goto LAB_14a868f76;
  }
  else if (param_1->bExpectsAdditivePose == false) {
    pFVar29 = *(FBoneContainer **)&(param_1->Pose).field_0x10;
LAB_14a868f76:
    FBaseCompactPose<TMemStackAllocator<0>_>::ResetToRefPose
              ((FBaseCompactPose<TMemStackAllocator<0>_> *)&param_1->Pose,pFVar29);
    goto LAB_14a868f7b;
  }
  FCompactPose::ResetToAdditiveIdentity(&param_1->Pose);
LAB_14a868f7b:
  TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_>::operator=<TSizedDefaultAllocator<32>_>
            ((TArray<UE::Anim::FCurveElement,TMemStackAllocator<0>_> *)&param_1->Curve,
             (TArray<UE::Anim::FCurveElement,TSizedDefaultAllocator<32>_> *)&this->StoredCurve);
  (param_1->Curve).field_0x10 = (this->StoredCurve).field_0x10;
  UE::Anim::TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_>::
  CopyFrom<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>
            ((TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)
             &param_1->CustomAttributes,
             (TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
             &this->StoredAttributes,*(FBoneContainer **)&(param_1->Pose).field_0x10);
  return;
}

// SetBlendParameters @ 14a868fe0

void __thiscall
FBlendStackAnimPlayer::SetBlendParameters(FBlendStackAnimPlayer *this,TVector<double> *param_1)

{
  FAnimNode_BlendSpacePlayer_Standalone *pFVar1;
  longlong lVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  double local_18;
  
  pFVar1 = &this->BlendSpacePlayerNode;
  lVar2 = (**(code **)(pFVar1->_padding_ + 0x148))(pFVar1);
  if (lVar2 != 0) {
    local_28 = *(undefined4 *)&param_1->field0_0x0;
    uStack_24 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
    uStack_20 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
    uStack_1c = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
    local_18 = (param_1->field0_0x0)._s_0.Z;
    (**(code **)(pFVar1->_padding_ + 0x198))(pFVar1,&local_28);
  }
  return;
}

// StorePoseContext @ 14a869270

void __thiscall
FBlendStackAnimPlayer::StorePoseContext(FBlendStackAnimPlayer *this,FPoseContext *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  bool bVar6;
  
  (**(code **)((this->SequencePlayerNode)._padding_ + 0x158))(&this->SequencePlayerNode,0);
  (**(code **)((this->BlendSpacePlayerNode)._padding_ + 400))(&this->BlendSpacePlayerNode,0);
  (**(code **)((this->MirrorNode)._padding_ + 0x110))(&this->MirrorNode,0);
  lVar4 = *(longlong *)&(param_1->Pose).field_0x10;
  if (lVar4 != 0) {
    bVar6 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(lVar4 + 0x30));
    if (((bVar6) && (*(longlong *)(lVar4 + 0x48) != 0)) && (0 < *(int *)(lVar4 + 8))) {
      iVar3 = *(int *)&(param_1->Pose).field_0x8;
      pvVar5 = *(void **)&param_1->Pose;
      piVar1 = &(this->StoredBones).ArrayMax;
      (this->StoredBones).ArrayNum = iVar3;
      if ((iVar3 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,iVar3,*piVar1,&(this->StoredBones).AllocatorInstance,iVar3,piVar1);
        if (iVar3 != 0) {
          memcpy((this->StoredBones).AllocatorInstance.Data,pvVar5,(longlong)iVar3 * 0x60);
        }
      }
      FBoneContainer::operator=
                (&this->StoredBoneContainer,*(FBoneContainer **)&(param_1->Pose).field_0x10);
    }
  }
  iVar3 = *(int *)&(param_1->Curve).field_0x8;
  pvVar5 = *(void **)&param_1->Curve;
  puVar2 = &(this->StoredCurve).field_0xc;
  *(int *)&(this->StoredCurve).field_0x8 = iVar3;
  if ((iVar3 == 0) && (*(int *)puVar2 == 0)) {
    *(undefined4 *)puVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar3,*(int *)puVar2,(ForAnyElementType *)&this->StoredCurve,iVar3,
               (int *)puVar2);
    if (iVar3 != 0) {
      memcpy(*(void **)&this->StoredCurve,pvVar5,(longlong)iVar3 << 4);
    }
  }
  (this->StoredCurve).field_0x10 = (param_1->Curve).field_0x10;
  UE::Anim::TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_>::
  CopyFrom<FCompactPoseBoneIndex,TMemStackAllocator<0>_>
            ((TAttributeContainer<FMeshPoseBoneIndex,TSizedDefaultAllocator<32>_> *)
             &this->StoredAttributes,
             (TAttributeContainer<FCompactPoseBoneIndex,TMemStackAllocator<0>_> *)
             &param_1->CustomAttributes,*(FBoneContainer **)&(param_1->Pose).field_0x10);
  return;
}

// UpdatePlayRate @ 14a869580

void __thiscall FBlendStackAnimPlayer::UpdatePlayRate(FBlendStackAnimPlayer *this,float param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)((this->SequencePlayerNode)._padding_ + 0x148))(&this->SequencePlayerNode);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014a8695c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((this->SequencePlayerNode)._padding_ + 0x198))(&this->SequencePlayerNode,param_1);
    return;
  }
  lVar1 = (**(code **)((this->BlendSpacePlayerNode)._padding_ + 0x148))(&this->BlendSpacePlayerNode)
  ;
  if (lVar1 != 0) {
    (**(code **)((this->BlendSpacePlayerNode)._padding_ + 0x1a0))
              (&this->BlendSpacePlayerNode,param_1);
  }
  return;
}

// UpdateSourceLinkNode @ 14a869850

void __thiscall FBlendStackAnimPlayer::UpdateSourceLinkNode(FBlendStackAnimPlayer *this)

{
  longlong lVar1;
  FAnimNode_BlendSpacePlayer_Standalone *pFVar2;
  
  lVar1 = (**(code **)((this->SequencePlayerNode)._padding_ + 0x148))(&this->SequencePlayerNode);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00014a869896. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((this->MirrorNode)._padding_ + 0x110))(&this->MirrorNode,&this->SequencePlayerNode)
    ;
    return;
  }
  lVar1 = (**(code **)((this->BlendSpacePlayerNode)._padding_ + 0x148))(&this->BlendSpacePlayerNode)
  ;
  if (lVar1 == 0) {
    pFVar2 = (FAnimNode_BlendSpacePlayer_Standalone *)0x0;
  }
  else {
    pFVar2 = &this->BlendSpacePlayerNode;
  }
                    /* WARNING: Could not recover jumptable at 0x00014a8698de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->MirrorNode)._padding_ + 0x110))(&this->MirrorNode,pFVar2);
  return;
}

// UpdateWithDeltaTime @ 14a8698f0

void __thiscall
FBlendStackAnimPlayer::UpdateWithDeltaTime
          (FBlendStackAnimPlayer *this,float param_1,int param_2,float param_3)

{
  float fVar1;
  float fVar2;
  
  if (0.0 < this->TimeToActivation) {
    fVar1 = this->TimeToActivation - param_1;
    this->TimeToActivation = fVar1;
    if (0.0 <= fVar1) {
      param_1 = 0.0;
    }
    else {
      param_1 = (float)((uint)fVar1 ^ __xmm_80000000800000008000000080000000);
      this->TimeToActivation = 0.0;
    }
  }
  fVar1 = this->CurrentBlendInTime;
  if (param_2 != 0) {
    fVar2 = powf(param_3,(float)(param_2 + 1));
    param_1 = fVar2 * param_1;
  }
  this->CurrentBlendInTime = fVar1 + param_1;
  return;
}

// Update_AnyThread @ 14a869990

void __thiscall
FBlendStackAnimPlayer::Update_AnyThread
          (FBlendStackAnimPlayer *this,FAnimationUpdateContext *param_1)

{
  UpdateSourceLinkNode(this);
                    /* WARNING: Could not recover jumptable at 0x00014a8699bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->MirrorNode)._padding_ + 0x10))(&this->MirrorNode,param_1);
  return;
}


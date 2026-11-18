// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 28

// FMovieScenePlaybackManager @ 14617ff40

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieScenePlaybackManager * __thiscall
FMovieScenePlaybackManager::FMovieScenePlaybackManager
          (FMovieScenePlaybackManager *this,UMovieSceneSequence *param_1)

{
  (this->PlaybackPosition).InputRate.Numerator = 0;
  (this->PlaybackPosition).InputRate.Denominator = 0;
  (this->PlaybackPosition).OutputRate.Numerator = 0;
  (this->PlaybackPosition).OutputRate.Denominator = 0;
  (this->PlaybackPosition).CurrentPosition.FrameNumber = 0;
  (this->PlaybackPosition).CurrentPosition.SubFrame = 0.0;
  (this->PlaybackPosition).PreviousPlayEvalPosition.bIsSet = false;
  (this->PlaybackPosition).LastRange.bIsSet = false;
  this->SequenceStartTick = 0;
  this->SequenceEndTick = 0;
  this->StartOffsetTicks = 0;
  this->EndOffsetTicks = 0;
  (this->PlaybackEndTick).bIsSet = false;
  (this->TimeTransform).LinearTransform.Offset.SubFrame = 0.0;
  (this->TimeTransform).NestedTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TimeTransform).NestedTransforms.ArrayNum = 0;
  (this->TimeTransform).NestedTransforms.ArrayMax = 0;
  this->bPingPongPlayback = false;
  this->bTransformPlaybackTime = false;
  (this->PlaybackPosition).EvaluationType = WithSubFrames;
  (this->DisplayRate).Numerator = 60000;
  (this->DisplayRate).Denominator = 1;
  this->NumLoopsToPlay = 1;
  this->NumLoopsCompleted = 0;
  this->PlayRate = 1.0;
  (this->TimeTransform).LinearTransform.TimeScale = 1.0;
  (this->TimeTransform).LinearTransform.Offset.FrameNumber = 0;
  this->DissectLooping = DissectOne;
  Initialize(this,param_1);
  return this;
}

// FMovieScenePlaybackManager @ 14617ffe0

FMovieScenePlaybackManager * __thiscall
FMovieScenePlaybackManager::FMovieScenePlaybackManager(FMovieScenePlaybackManager *this)

{
  (this->PlaybackPosition).EvaluationType = WithSubFrames;
  (this->PlaybackPosition).InputRate.Numerator = 0;
  (this->PlaybackPosition).InputRate.Denominator = 0;
  this->PlayRate = 1.0;
  (this->PlaybackPosition).OutputRate.Numerator = 0;
  (this->PlaybackPosition).OutputRate.Denominator = 0;
  (this->PlaybackPosition).CurrentPosition.FrameNumber = 0;
  (this->PlaybackPosition).CurrentPosition.SubFrame = 0.0;
  (this->PlaybackPosition).PreviousPlayEvalPosition.bIsSet = false;
  (this->PlaybackPosition).LastRange.bIsSet = false;
  (this->DisplayRate).Numerator = 60000;
  (this->DisplayRate).Denominator = 1;
  this->SequenceStartTick = 0;
  this->SequenceEndTick = 0;
  this->StartOffsetTicks = 0;
  this->EndOffsetTicks = 0;
  (this->PlaybackEndTick).bIsSet = false;
  this->NumLoopsToPlay = 1;
  this->NumLoopsCompleted = 0;
  (this->TimeTransform).LinearTransform.TimeScale = 1.0;
  (this->TimeTransform).LinearTransform.Offset.FrameNumber = 0;
  (this->TimeTransform).LinearTransform.Offset.SubFrame = 0.0;
  (this->TimeTransform).NestedTransforms.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TimeTransform).NestedTransforms.ArrayNum = 0;
  (this->TimeTransform).NestedTransforms.ArrayMax = 0;
  this->DissectLooping = DissectOne;
  this->bPingPongPlayback = false;
  this->bTransformPlaybackTime = false;
  return this;
}

// ClearPlaybackEndTime @ 146196fe0

void __thiscall FMovieScenePlaybackManager::ClearPlaybackEndTime(FMovieScenePlaybackManager *this)

{
  if ((this->PlaybackEndTick).bIsSet != false) {
    (this->PlaybackEndTick).bIsSet = false;
  }
  return;
}

// GetCurrentTime @ 1461b09a0

FFrameTime __thiscall FMovieScenePlaybackManager::GetCurrentTime(FMovieScenePlaybackManager *this)

{
  FFrameTime in_RDX;
  
  ConvertFrameTime(in_RDX,(FFrameRate)(this->PlaybackPosition).CurrentPosition,
                   (this->PlaybackPosition).OutputRate);
  return in_RDX;
}

// GetEffectiveEndTime @ 1461b0b40

FFrameTime __thiscall
FMovieScenePlaybackManager::GetEffectiveEndTime(FMovieScenePlaybackManager *this)

{
  FFrameRate FVar1;
  FFrameTime in_RDX;
  
  FVar1.Denominator = 0;
  FVar1.Numerator = (this->SequenceEndTick).Value - (this->EndOffsetTicks).Value;
  ConvertFrameTime(in_RDX,FVar1,(this->PlaybackPosition).OutputRate);
  return in_RDX;
}

// GetEffectivePlaybackRange @ 1461b0b80

TRange<FFrameTime> * __thiscall
FMovieScenePlaybackManager::GetEffectivePlaybackRange
          (FMovieScenePlaybackManager *this,TRange<FFrameTime> *__return_storage_ptr__)

{
  FFrameRate FVar1;
  FFrameRate FVar2;
  FFrameRate FVar3;
  ulonglong uVar4;
  uint uVar5;
  uint local_res8;
  float fStackX_c;
  undefined1 local_res10 [8];
  undefined4 local_38;
  undefined4 uStack_34;
  float fStack_30;
  undefined4 local_2c;
  
  local_res8 = (this->StartOffsetTicks).Value + (this->SequenceStartTick).Value;
  FVar1 = (this->PlaybackPosition).OutputRate;
  uVar5 = (this->SequenceEndTick).Value - (this->EndOffsetTicks).Value;
  fStackX_c = 0.0;
  FVar2.Denominator = 0;
  FVar2.Numerator = local_res8;
  ConvertFrameTime((FFrameTime)local_res10,FVar2,FVar1);
  fStackX_c = 0.0;
  FVar3.Denominator = 0;
  FVar3.Numerator = uVar5;
  local_res8 = uVar5;
  ConvertFrameTime((FFrameTime)&local_res8,FVar3,FVar1);
  uStack_34 = local_res10._0_4_;
  fStack_30 = local_res10._4_4_;
  (__return_storage_ptr__->LowerBound).Type = '\x01';
  *(undefined3 *)&(__return_storage_ptr__->LowerBound).field_0x1 = local_38._1_3_;
  (__return_storage_ptr__->LowerBound).Value.FrameNumber = (FFrameNumber)uStack_34;
  (__return_storage_ptr__->LowerBound).Value.SubFrame = fStack_30;
  uVar4 = CONCAT44(local_res8,local_2c) & 0xffffffffffffff00;
  (__return_storage_ptr__->UpperBound).Type = (TEnumAsByte<ERangeBoundTypes::Type>)(char)uVar4;
  *(int3 *)&(__return_storage_ptr__->UpperBound).field_0x1 = (int3)(uVar4 >> 8);
  (__return_storage_ptr__->UpperBound).Value.FrameNumber = (FFrameNumber)(int)(uVar4 >> 0x20);
  (__return_storage_ptr__->UpperBound).Value.SubFrame = fStackX_c;
  return __return_storage_ptr__;
}

// GetEffectiveStartTime @ 1461b0c40

FFrameTime __thiscall
FMovieScenePlaybackManager::GetEffectiveStartTime(FMovieScenePlaybackManager *this)

{
  FFrameRate FVar1;
  FFrameTime in_RDX;
  
  FVar1.Denominator = 0;
  FVar1.Numerator = (this->StartOffsetTicks).Value + (this->SequenceStartTick).Value;
  ConvertFrameTime(in_RDX,FVar1,(this->PlaybackPosition).OutputRate);
  return in_RDX;
}

// GetEndOffset @ 1461b0c80

FFrameTime __thiscall FMovieScenePlaybackManager::GetEndOffset(FMovieScenePlaybackManager *this)

{
  FFrameRate FVar1;
  FFrameTime in_RDX;
  
  FVar1.Denominator = 0;
  FVar1.Numerator = (this->EndOffsetTicks).Value;
  ConvertFrameTime(in_RDX,FVar1,(this->PlaybackPosition).OutputRate);
  return in_RDX;
}

// GetLastValidTick @ 1461b1360

FFrameNumber __thiscall
FMovieScenePlaybackManager::GetLastValidTick(FMovieScenePlaybackManager *this)

{
  int *in_RDX;
  
  *in_RDX = ((this->SequenceEndTick).Value - (this->EndOffsetTicks).Value) + -1;
  return (FFrameNumber)(int)in_RDX;
}

// GetPlaybackEndTime @ 1461b2a20

TOptional<FFrameTime> * __thiscall
FMovieScenePlaybackManager::GetPlaybackEndTime
          (FMovieScenePlaybackManager *this,TOptional<FFrameTime> *__return_storage_ptr__)

{
  FFrameRate FVar1;
  TOptional<FFrameNumber> *pTVar2;
  FFrameTime FVar3;
  uint local_res8 [8];
  
  pTVar2 = &this->PlaybackEndTick;
  if ((this->PlaybackEndTick).bIsSet == false) {
    pTVar2 = (TOptional<FFrameNumber> *)0x0;
  }
  if (pTVar2 != (TOptional<FFrameNumber> *)0x0) {
    local_res8[0] = (pTVar2->TypedValue).Value;
    local_res8[1] = 0;
    FVar1.Denominator = 0;
    FVar1.Numerator = local_res8[0];
    FVar3 = ConvertFrameTime((FFrameTime)local_res8,FVar1,(this->PlaybackPosition).OutputRate);
    __return_storage_ptr__->bIsSet = true;
    __return_storage_ptr__->TypedValue = *(FFrameTime *)FVar3;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->bIsSet = false;
  return __return_storage_ptr__;
}

// GetStartOffset @ 1461b41d0

FFrameTime __thiscall FMovieScenePlaybackManager::GetStartOffset(FMovieScenePlaybackManager *this)

{
  FFrameRate FVar1;
  FFrameTime in_RDX;
  
  FVar1.Denominator = 0;
  FVar1.Numerator = (this->StartOffsetTicks).Value;
  ConvertFrameTime(in_RDX,FVar1,(this->PlaybackPosition).OutputRate);
  return in_RDX;
}

// Initialize @ 1461b5b70

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
FMovieScenePlaybackManager::Initialize
          (FMovieScenePlaybackManager *this,UMovieSceneSequence *param_1)

{
  EMovieSceneEvaluationType EVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  FFrameRate FVar5;
  code *pcVar6;
  undefined4 uVar7;
  int iVar8;
  FFrameTime FVar9;
  FFrameTime FVar10;
  bool bVar11;
  longlong lVar12;
  char cVar13;
  longlong lVar14;
  FFrameNumber local_res10;
  float fStackX_14;
  
  if (param_1 == (UMovieSceneSequence *)0x0) {
    bVar11 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<690620944376397846>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieScenePlaybackManager.cpp"
                        ,0x16,"InSequence");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    lVar12 = (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
    EVar1 = *(EMovieSceneEvaluationType *)(lVar12 + 0x148);
    this->DisplayRate = *(FFrameRate *)(lVar12 + 0x140);
    iVar2 = (this->PlaybackPosition).InputRate.Denominator;
    FVar5 = *(FFrameRate *)(lVar12 + 0x138);
    if ((0 < iVar2) &&
       (((this->PlaybackPosition).InputRate.Numerator != FVar5.Numerator ||
        (iVar2 != FVar5.Denominator)))) {
      ConvertFrameTime((FFrameTime)&local_res10,(FFrameRate)(this->PlaybackPosition).CurrentPosition
                       ,(this->PlaybackPosition).InputRate);
      if (EVar1 == FrameLocked) {
        fStackX_14 = 0.0;
      }
      FVar9.SubFrame = fStackX_14;
      FVar9.FrameNumber.Value = local_res10.Value;
      (this->PlaybackPosition).CurrentPosition = FVar9;
      if ((this->PlaybackPosition).PreviousPlayEvalPosition.bIsSet != false) {
        (this->PlaybackPosition).PreviousPlayEvalPosition.bIsSet = false;
      }
      if ((this->PlaybackPosition).LastRange.bIsSet != false) {
        (this->PlaybackPosition).LastRange.bIsSet = false;
      }
    }
    (this->PlaybackPosition).InputRate = FVar5;
    (this->PlaybackPosition).OutputRate = FVar5;
    (this->PlaybackPosition).EvaluationType = EVar1;
    iVar2 = *(int *)(lVar12 + 300);
    uVar7 = *(undefined4 *)(lVar12 + 0x130);
    iVar8 = *(int *)(lVar12 + 0x134);
    cVar13 = (char)*(undefined4 *)(lVar12 + 0x128);
    if (cVar13 == '\x02') {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!InLowerBound.IsOpen()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                          ,0x2c,L"");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar14 = 0;
    lVar12 = lVar14;
    if (cVar13 == '\0') {
      lVar12 = 4;
    }
    iVar3 = *(int *)((longlong)
                     &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteInclusiveLower(TRangeBound<FFrameNumber>_const&___ptr64)'
                      ::__l2::Offsets + lVar12);
    if (cVar13 == '\x02') {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Type != ERangeBoundTypes::Open",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                          ,99,L"");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    (this->SequenceStartTick).Value = iVar2 + iVar3;
    cVar13 = (char)uVar7;
    if (cVar13 == '\x02') {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!InUpperBound.IsOpen()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                          ,0x44,L"");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (cVar13 == '\x01') {
      lVar14 = 4;
    }
    iVar2 = *(int *)((longlong)
                     &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteExclusiveUpper(TRangeBound<FFrameNumber>_const&___ptr64)'
                      ::__l2::Offsets + lVar14);
    if (cVar13 == '\x02') {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Type != ERangeBoundTypes::Open",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                          ,99,L"");
      if (bVar11) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    this->StartOffsetTicks = 0;
    this->EndOffsetTicks = 0;
    this->PlayRate = 1.0;
    uVar4 = (this->SequenceStartTick).Value;
    this->PlayDirection = Forwards;
    (this->SequenceEndTick).Value = iVar8 + iVar2;
    this->NumLoopsToPlay = 1;
    this->NumLoopsCompleted = 0;
    FVar10.SubFrame = 0.0;
    FVar10.FrameNumber.Value = uVar4;
    (this->PlaybackPosition).CurrentPosition = FVar10;
    if ((this->PlaybackPosition).PreviousPlayEvalPosition.bIsSet != false) {
      (this->PlaybackPosition).PreviousPlayEvalPosition.bIsSet = false;
    }
    if ((this->PlaybackPosition).LastRange.bIsSet != false) {
      (this->PlaybackPosition).LastRange.bIsSet = false;
    }
  }
  return;
}

// InternalUpdateToTick @ 1461b7610

/* WARNING: Removing unreachable block (ram,0x0001461b8ac0) */

void __thiscall
FMovieScenePlaybackManager::InternalUpdateToTick
          (FMovieScenePlaybackManager *this,FFrameNumber param_1,
          TArray<FMovieSceneContext,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  EPlayDirection EVar2;
  Type TVar3;
  uint uVar4;
  ForElementType<FMovieSceneContext> FVar5;
  code *pcVar6;
  FFrameTime FVar7;
  FFrameTime FVar8;
  FFrameTime FVar9;
  FFrameTime FVar10;
  FFrameTime FVar11;
  FFrameTime FVar12;
  FFrameTime FVar13;
  FFrameTime FVar14;
  FFrameTime FVar15;
  FFrameTime FVar16;
  FFrameTime FVar17;
  FFrameTime FVar18;
  FFrameTime FVar19;
  FFrameTime FVar20;
  FFrameTime FVar21;
  FFrameTime FVar22;
  FFrameTime FVar23;
  bool bVar24;
  int iVar25;
  FMovieSceneEvaluationRange *pFVar26;
  ForElementType<FMovieSceneContext> FVar27;
  uint uVar28;
  ForAnyElementType FVar29;
  FFrameTime FVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  uint uVar35;
  uint uVar36;
  bool bVar37;
  Type local_res20;
  byte local_798;
  int local_794;
  FFrameTime local_790;
  ulonglong local_778;
  FMovieSceneContext local_6d0;
  FMovieSceneContext local_650;
  FMovieSceneContext local_5d0;
  FMovieSceneContext local_550;
  FMovieSceneContext local_4d0;
  FMovieSceneContext local_450;
  FMovieSceneContext local_3d0;
  FMovieSceneContext local_350;
  FMovieSceneContext local_2d0;
  FMovieSceneContext local_250;
  FMovieSceneEvaluationRange local_1d0;
  FMovieSceneEvaluationRange local_1a8;
  FMovieSceneEvaluationRange local_180;
  FMovieSceneEvaluationRange local_158;
  FMovieSceneEvaluationRange local_130;
  FMovieSceneEvaluationRange local_108;
  FMovieSceneEvaluationRange local_e0;
  FMovieSceneEvaluationRange local_b8;
  FMovieSceneEvaluationRange local_90;
  FMovieSceneEvaluationRange local_68;
  
  local_res20 = this->PlaybackStatus;
  if (local_res20 == Stopped) {
    FVar7.SubFrame = 0.0;
    FVar7.FrameNumber.Value = param_1.Value;
    (this->PlaybackPosition).CurrentPosition = FVar7;
    if ((this->PlaybackPosition).PreviousPlayEvalPosition.bIsSet != false) {
      (this->PlaybackPosition).PreviousPlayEvalPosition.bIsSet = false;
    }
    if ((this->PlaybackPosition).LastRange.bIsSet == false) {
      return;
    }
    (this->PlaybackPosition).LastRange.bIsSet = false;
    return;
  }
  if ((this->NumLoopsToPlay < 1) || (this->NumLoopsCompleted < this->NumLoopsToPlay)) {
LAB_1461b7713:
    if ((local_res20 == Playing) || (local_res20 == Scrubbing)) {
      local_798 = 0;
    }
    else {
      local_798 = 1;
    }
  }
  else {
    bVar24 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<690620944376397923>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieScenePlaybackManager.cpp"
                        ,99,"NumLoopsCompleted < NumLoopsToPlay");
    if (bVar24) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    this->PlaybackStatus = Stopped;
    FVar8.SubFrame = 0.0;
    FVar8.FrameNumber.Value = param_1.Value;
    (this->PlaybackPosition).CurrentPosition = FVar8;
    if ((this->PlaybackPosition).PreviousPlayEvalPosition.bIsSet != false) {
      (this->PlaybackPosition).PreviousPlayEvalPosition.bIsSet = false;
    }
    local_res20 = Stopped;
    if ((this->PlaybackPosition).LastRange.bIsSet == false) goto LAB_1461b7713;
    (this->PlaybackPosition).LastRange.bIsSet = false;
    local_res20 = Stopped;
    local_798 = 1;
  }
  iVar34 = (this->SequenceEndTick).Value - (this->EndOffsetTicks).Value;
  uVar36 = (this->StartOffsetTicks).Value + (this->SequenceStartTick).Value;
  EVar2 = this->PlayDirection;
  iVar33 = iVar34 - uVar36;
  if (iVar33 < 0) {
    iVar33 = 0;
  }
  uVar35 = iVar34 - 1;
  uVar4 = uVar36;
  uVar31 = uVar35;
  if (EVar2 == Forwards) {
    uVar4 = uVar35;
    uVar31 = uVar36;
  }
  uVar28 = uVar4;
  if ((this->PlaybackEndTick).bIsSet != false) {
    uVar28 = (this->PlaybackEndTick).TypedValue.Value;
  }
  if (iVar33 < 1) {
    iVar33 = 1;
  }
  if (EVar2 == Forwards) {
    if (param_1.Value <= (int)uVar4) goto LAB_1461b779e;
LAB_1461b785e:
    bVar24 = true;
  }
  else {
    if (param_1.Value < (int)uVar4) goto LAB_1461b785e;
LAB_1461b779e:
    bVar24 = false;
  }
  if ((0 < this->NumLoopsToPlay) && (this->NumLoopsToPlay + -1 <= this->NumLoopsCompleted)) {
    if (EVar2 == Forwards) {
      if (param_1.Value < (int)uVar28) goto LAB_1461b77c2;
    }
    else if ((int)uVar28 < param_1.Value) goto LAB_1461b77c2;
    FVar9.SubFrame = 0.0;
    FVar9.FrameNumber.Value = uVar28;
    pFVar26 = FMovieScenePlaybackPosition::PlayTo(&this->PlaybackPosition,&local_1d0,FVar9,Forwards)
    ;
    FVar5 = (param_2->AllocatorInstance).SecondaryData;
    local_650._padding_._0_1_ = (pFVar26->EvaluationRange).LowerBound.Type;
    local_650._padding_._1_3_ = *(undefined3 *)&(pFVar26->EvaluationRange).LowerBound.field_0x1;
    local_650._padding_._4_4_ = (pFVar26->EvaluationRange).LowerBound.Value.FrameNumber;
    local_650._padding_ = *(longlong *)&(pFVar26->EvaluationRange).LowerBound.Value.SubFrame;
    local_650._padding_ = *(longlong *)&(pFVar26->EvaluationRange).UpperBound.Value;
    local_650._padding_ = *(longlong *)&pFVar26->CurrentFrameRate;
    local_650._padding_._0_4_ = pFVar26->Direction;
    local_650._padding_._4_4_ = pFVar26->TimeOverride;
    local_650.Status = local_res20;
    local_650._124_1_ = local_650._124_1_ & 0x80 | local_798;
    local_650.RootToSequenceTransform.LinearTransform.TimeScale = 1.0;
    local_650.RootToSequenceTransform.LinearTransform.Offset.FrameNumber.Value = 0;
    FVar27 = (ForElementType<FMovieSceneContext>)param_2;
    if (FVar5 != (ForElementType<FMovieSceneContext>)0x0) {
      FVar27 = FVar5;
    }
    local_650.RootToSequenceTransform.LinearTransform.Offset.SubFrame = 0.0;
    local_650.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_650.RootToSequenceTransform.NestedTransforms.ArrayNum = 0;
    local_650.RootToSequenceTransform.NestedTransforms.ArrayMax = 0;
    local_650.RootToSequenceWarpCounter._padding_ = 0;
    local_650.RootToSequenceWarpCounter._padding_ = 0;
    local_650.RootToSequenceWarpCounter._padding_._0_1_ = 0;
    local_650.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_650.RootToSequenceWarpCounter.WarpCounts.ArrayNum = 0;
    local_650.RootToSequenceWarpCounter.WarpCounts.ArrayMax = 0;
    local_650.PrePostRollStartEndTime.Value = -0x80000000;
    local_650.HierarchicalBias = 0;
    if ((ulonglong)FVar27 <= &local_650) {
      FVar27 = (ForElementType<FMovieSceneContext>)param_2;
      if (FVar5 != (ForElementType<FMovieSceneContext>)0x0) {
        FVar27 = FVar5;
      }
      if ((&local_650 <
           (FMovieSceneContext *)((longlong)param_2->ArrayMax * 0x80 + (longlong)FVar27)) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar24)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar33 = param_2->ArrayNum;
    if (iVar33 == param_2->ArrayMax) {
      iVar33 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneContext>_>
                         (0x880,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar33 + 1;
    FVar5 = (param_2->AllocatorInstance).SecondaryData;
    FVar27 = (ForElementType<FMovieSceneContext>)param_2;
    if (FVar5 != (ForElementType<FMovieSceneContext>)0x0) {
      FVar27 = FVar5;
    }
    FMovieSceneContext::FMovieSceneContext
              ((FMovieSceneContext *)((longlong)iVar33 * 0x80 + (longlong)FVar27),&local_650);
    if (local_650.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_650.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data);
    }
    if ((void *)local_650.RootToSequenceWarpCounter._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_650.RootToSequenceWarpCounter._padding_);
    }
    if (local_650.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_650.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data);
    }
    iVar33 = this->NumLoopsCompleted + 1;
    this->NumLoopsCompleted = iVar33;
    if (((this->NumLoopsToPlay < 1) || (iVar33 != this->NumLoopsToPlay)) &&
       (bVar24 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<690620944376397968>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieScenePlaybackManager.cpp"
                            ,0x90,"NumLoopsToPlay > 0 && NumLoopsCompleted == NumLoopsToPlay"),
       bVar24)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    this->PlaybackStatus = Stopped;
    goto LAB_1461b8f0a;
  }
LAB_1461b77c2:
  if (!bVar24) {
    TVar3 = this->PlaybackStatus;
    FVar20.SubFrame = 0.0;
    FVar20.FrameNumber.Value = param_1.Value;
    pFVar26 = FMovieScenePlaybackPosition::PlayTo(&this->PlaybackPosition,&local_68,FVar20,Forwards)
    ;
    FVar5 = (param_2->AllocatorInstance).SecondaryData;
    local_450._padding_._0_1_ = (pFVar26->EvaluationRange).LowerBound.Type;
    local_450._padding_._1_3_ = *(undefined3 *)&(pFVar26->EvaluationRange).LowerBound.field_0x1;
    local_450._padding_._4_4_ = (pFVar26->EvaluationRange).LowerBound.Value.FrameNumber;
    local_450._padding_ = *(longlong *)&(pFVar26->EvaluationRange).LowerBound.Value.SubFrame;
    local_450._padding_ = *(longlong *)&(pFVar26->EvaluationRange).UpperBound.Value;
    local_450._padding_ = *(longlong *)&pFVar26->CurrentFrameRate;
    local_450._padding_._0_4_ = pFVar26->Direction;
    local_450._padding_._4_4_ = pFVar26->TimeOverride;
    local_450.RootToSequenceTransform.LinearTransform.Offset.SubFrame = 0.0;
    local_450.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_450.RootToSequenceTransform.NestedTransforms.ArrayNum = 0;
    local_450.RootToSequenceTransform.NestedTransforms.ArrayMax = 0;
    local_450.RootToSequenceWarpCounter._padding_ = 0;
    local_450.RootToSequenceWarpCounter._padding_ = 0;
    local_450.RootToSequenceWarpCounter._padding_._0_1_ = 0;
    local_450.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_450.RootToSequenceWarpCounter.WarpCounts.ArrayNum = 0;
    local_450.RootToSequenceWarpCounter.WarpCounts.ArrayMax = 0;
    local_450.HierarchicalBias = 0;
    local_450._124_1_ = local_450._124_1_ & 0x80 | local_798;
    local_450.RootToSequenceTransform.LinearTransform.TimeScale = 1.0;
    local_450.RootToSequenceTransform.LinearTransform.Offset.FrameNumber.Value = 0;
    FVar27 = (ForElementType<FMovieSceneContext>)param_2;
    if (FVar5 != (ForElementType<FMovieSceneContext>)0x0) {
      FVar27 = FVar5;
    }
    local_450.PrePostRollStartEndTime.Value = -0x80000000;
    local_450.Status = TVar3;
    if ((ulonglong)FVar27 <= &local_450) {
      FVar27 = (ForElementType<FMovieSceneContext>)param_2;
      if (FVar5 != (ForElementType<FMovieSceneContext>)0x0) {
        FVar27 = FVar5;
      }
      if ((&local_450 <
           (FMovieSceneContext *)((longlong)param_2->ArrayMax * 0x80 + (longlong)FVar27)) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar24)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar33 = param_2->ArrayNum;
    if (iVar33 == param_2->ArrayMax) {
      iVar33 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneContext>_>
                         (0x880,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar33 + 1;
    FVar5 = (param_2->AllocatorInstance).SecondaryData;
    FVar27 = (ForElementType<FMovieSceneContext>)param_2;
    if (FVar5 != (ForElementType<FMovieSceneContext>)0x0) {
      FVar27 = FVar5;
    }
    FMovieSceneContext::FMovieSceneContext
              ((FMovieSceneContext *)((longlong)iVar33 * 0x80 + (longlong)FVar27),&local_450);
    if (local_450.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_450.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data);
    }
    if ((void *)local_450.RootToSequenceWarpCounter._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_450.RootToSequenceWarpCounter._padding_);
    }
    if (local_450.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_450.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data);
    }
    goto LAB_1461b8f0a;
  }
  iVar34 = param_1.Value - uVar31;
  local_794 = -iVar34;
  if (-iVar34 < 0) {
    local_794 = iVar34;
  }
  local_794 = local_794 / iVar33;
  if ((local_794 < 1) &&
     (bVar24 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<690620944376397979>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieScenePlaybackManager.cpp"
                          ,0x9b,"NumLoopingsOver > 0"), bVar24)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar25 = this->NumLoopsToPlay;
  if (iVar25 < 1) {
LAB_1461b7a98:
    local_res20._0_1_ = 0;
  }
  else {
    iVar32 = iVar25 - this->NumLoopsCompleted;
    if (local_794 < iVar32) {
      iVar32 = local_794;
    }
    local_794 = iVar32;
    if (this->NumLoopsCompleted + iVar32 < iVar25) goto LAB_1461b7a98;
    local_res20._0_1_ = 1;
  }
  if ((local_794 < 1) &&
     (bVar24 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<690620944376397988>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieScenePlaybackManager.cpp"
                          ,0xa4,"NumLoopsNewlyCompleted > 0"), bVar24)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (this->DissectLooping != None) {
    TVar3 = this->PlaybackStatus;
    FVar10.SubFrame = 0.0;
    FVar10.FrameNumber.Value = uVar4;
    pFVar26 = FMovieScenePlaybackPosition::PlayTo
                        (&this->PlaybackPosition,&local_1a8,FVar10,Forwards);
    FVar5 = (param_2->AllocatorInstance).SecondaryData;
    local_5d0._padding_._0_1_ = (pFVar26->EvaluationRange).LowerBound.Type;
    local_5d0._padding_._1_3_ = *(undefined3 *)&(pFVar26->EvaluationRange).LowerBound.field_0x1;
    local_5d0._padding_._4_4_ = (pFVar26->EvaluationRange).LowerBound.Value.FrameNumber;
    local_5d0._padding_ = *(longlong *)&(pFVar26->EvaluationRange).LowerBound.Value.SubFrame;
    local_5d0._padding_ = *(longlong *)&(pFVar26->EvaluationRange).UpperBound.Value;
    local_5d0._padding_ = *(longlong *)&pFVar26->CurrentFrameRate;
    local_5d0._padding_._0_4_ = pFVar26->Direction;
    local_5d0._padding_._4_4_ = pFVar26->TimeOverride;
    local_5d0.RootToSequenceTransform.LinearTransform.Offset.SubFrame = 0.0;
    local_5d0.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_5d0.RootToSequenceTransform.NestedTransforms.ArrayNum = 0;
    local_5d0.RootToSequenceTransform.NestedTransforms.ArrayMax = 0;
    local_5d0.RootToSequenceWarpCounter._padding_ = 0;
    local_5d0.RootToSequenceWarpCounter._padding_ = 0;
    local_5d0.RootToSequenceWarpCounter._padding_._0_1_ = 0;
    local_5d0.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_5d0.RootToSequenceWarpCounter.WarpCounts.ArrayNum = 0;
    local_5d0.RootToSequenceWarpCounter.WarpCounts.ArrayMax = 0;
    local_5d0.HierarchicalBias = 0;
    local_5d0._124_1_ = local_5d0._124_1_ & 0x80 | local_798;
    local_5d0.RootToSequenceTransform.LinearTransform.TimeScale = 1.0;
    local_5d0.RootToSequenceTransform.LinearTransform.Offset.FrameNumber.Value = 0;
    FVar27 = (ForElementType<FMovieSceneContext>)param_2;
    if (FVar5 != (ForElementType<FMovieSceneContext>)0x0) {
      FVar27 = FVar5;
    }
    local_5d0.PrePostRollStartEndTime.Value = -0x80000000;
    local_5d0.Status = TVar3;
    if ((ulonglong)FVar27 <= &local_5d0) {
      FVar27 = (ForElementType<FMovieSceneContext>)param_2;
      if (FVar5 != (ForElementType<FMovieSceneContext>)0x0) {
        FVar27 = FVar5;
      }
      if ((&local_5d0 <
           (FMovieSceneContext *)((longlong)param_2->ArrayMax * 0x80 + (longlong)FVar27)) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar24)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar25 = param_2->ArrayNum;
    if (iVar25 == param_2->ArrayMax) {
      iVar25 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneContext>_>
                         (0x880,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar25 + 1;
    FVar5 = (param_2->AllocatorInstance).SecondaryData;
    FVar27 = (ForElementType<FMovieSceneContext>)param_2;
    if (FVar5 != (ForElementType<FMovieSceneContext>)0x0) {
      FVar27 = FVar5;
    }
    FMovieSceneContext::FMovieSceneContext
              ((FMovieSceneContext *)((longlong)iVar25 * 0x80 + (longlong)FVar27),&local_5d0);
    if (local_5d0.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5d0.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data);
    }
    if ((void *)local_5d0.RootToSequenceWarpCounter._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_5d0.RootToSequenceWarpCounter._padding_);
    }
    if (local_5d0.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_5d0.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data);
    }
  }
  if ((1 < local_794) && (this->DissectLooping == DissectAll)) {
    uVar28 = (local_794 - (uint)(byte)(undefined1)local_res20) - 1;
    if (((int)uVar28 < 0) &&
       (bVar24 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<690620944376398009>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieScenePlaybackManager.cpp"
                            ,0xb9,"ExtraLoops >= 0"), bVar24)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (this->bPingPongPlayback == false) {
      if (0 < (int)uVar28) {
        piVar1 = &param_2->ArrayMax;
        local_778 = (ulonglong)uVar28;
        FVar11.SubFrame = 0.0;
        FVar11.FrameNumber.Value = uVar31;
        FVar12.SubFrame = 0.0;
        FVar12.FrameNumber.Value = uVar4;
        do {
          (this->PlaybackPosition).CurrentPosition = FVar11;
          if ((this->PlaybackPosition).PreviousPlayEvalPosition.bIsSet != false) {
            (this->PlaybackPosition).PreviousPlayEvalPosition.bIsSet = false;
          }
          if ((this->PlaybackPosition).LastRange.bIsSet != false) {
            (this->PlaybackPosition).LastRange.bIsSet = false;
          }
          TVar3 = this->PlaybackStatus;
          pFVar26 = FMovieScenePlaybackPosition::PlayTo
                              (&this->PlaybackPosition,&local_180,FVar12,Forwards);
          local_550._padding_._0_1_ = (pFVar26->EvaluationRange).LowerBound.Type;
          local_550._padding_._1_3_ =
               *(undefined3 *)&(pFVar26->EvaluationRange).LowerBound.field_0x1;
          local_550._padding_._4_4_ = (pFVar26->EvaluationRange).LowerBound.Value.FrameNumber;
          local_550._padding_ = *(longlong *)&(pFVar26->EvaluationRange).LowerBound.Value.SubFrame;
          local_550._padding_ = *(longlong *)&(pFVar26->EvaluationRange).UpperBound.Value;
          local_550._padding_ = *(longlong *)&pFVar26->CurrentFrameRate;
          local_550._padding_._0_4_ = pFVar26->Direction;
          local_550._padding_._4_4_ = pFVar26->TimeOverride;
          local_550._124_1_ = local_550._124_1_ & 0x83 | 3;
          local_550.RootToSequenceTransform.LinearTransform.TimeScale = 1.0;
          local_550.RootToSequenceTransform.LinearTransform.Offset.FrameNumber.Value = 0;
          FVar5 = (param_2->AllocatorInstance).SecondaryData;
          local_550.RootToSequenceTransform.LinearTransform.Offset.SubFrame = 0.0;
          local_550.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          FVar27 = (ForElementType<FMovieSceneContext>)param_2;
          if (FVar5 != (ForElementType<FMovieSceneContext>)0x0) {
            FVar27 = FVar5;
          }
          local_550.RootToSequenceTransform.NestedTransforms.ArrayNum = 0;
          local_550.RootToSequenceTransform.NestedTransforms.ArrayMax = 0;
          local_550.RootToSequenceWarpCounter._padding_ = 0;
          local_550.RootToSequenceWarpCounter._padding_ = 0;
          local_550.RootToSequenceWarpCounter._padding_._0_1_ = 0;
          local_550.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          local_550.RootToSequenceWarpCounter.WarpCounts.ArrayNum = 0;
          local_550.RootToSequenceWarpCounter.WarpCounts.ArrayMax = 0;
          local_550.PrePostRollStartEndTime.Value = -0x80000000;
          local_550.HierarchicalBias = 0;
          local_550.Status = TVar3;
          if ((ulonglong)FVar27 <= &local_550) {
            FVar27 = (ForElementType<FMovieSceneContext>)param_2;
            if (FVar5 != (ForElementType<FMovieSceneContext>)0x0) {
              FVar27 = FVar5;
            }
            if ((&local_550 < (FMovieSceneContext *)((longlong)*piVar1 * 0x80 + (longlong)FVar27))
               && (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar24)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          iVar25 = param_2->ArrayNum;
          if (iVar25 == *piVar1) {
            iVar25 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneContext>_>
                               (0x880,&param_2->AllocatorInstance,piVar1);
          }
          param_2->ArrayNum = iVar25 + 1;
          FVar5 = (param_2->AllocatorInstance).SecondaryData;
          FVar27 = (ForElementType<FMovieSceneContext>)param_2;
          if (FVar5 != (ForElementType<FMovieSceneContext>)0x0) {
            FVar27 = FVar5;
          }
          FMovieSceneContext::FMovieSceneContext
                    ((FMovieSceneContext *)((longlong)iVar25 * 0x80 + (longlong)FVar27),&local_550);
          if (local_550.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_550.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data);
          }
          if ((void *)local_550.RootToSequenceWarpCounter._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_550.RootToSequenceWarpCounter._padding_);
          }
          if (local_550.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_550.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data)
            ;
          }
          local_778 = local_778 - 1;
        } while (local_778 != 0);
      }
    }
    else {
      bVar24 = this->PlayDirection == Forwards;
      this->PlayDirection = (uint)bVar24;
      if (0 < (int)uVar28) {
        local_790 = (FFrameTime)(ulonglong)uVar28;
        do {
          if (bVar24) {
            FVar15.SubFrame = 0.0;
            FVar15.FrameNumber.Value = uVar35;
            (this->PlaybackPosition).CurrentPosition = FVar15;
            if ((this->PlaybackPosition).PreviousPlayEvalPosition.bIsSet != false) {
              (this->PlaybackPosition).PreviousPlayEvalPosition.bIsSet = false;
            }
            if ((this->PlaybackPosition).LastRange.bIsSet != false) {
              (this->PlaybackPosition).LastRange.bIsSet = false;
            }
            TVar3 = this->PlaybackStatus;
            FVar16.SubFrame = 0.0;
            FVar16.FrameNumber.Value = uVar36;
            pFVar26 = FMovieScenePlaybackPosition::PlayTo
                                (&this->PlaybackPosition,&local_130,FVar16,Forwards);
            FVar5 = (param_2->AllocatorInstance).SecondaryData;
            local_6d0._padding_._0_1_ = (pFVar26->EvaluationRange).LowerBound.Type;
            local_6d0._padding_._1_3_ =
                 *(undefined3 *)&(pFVar26->EvaluationRange).LowerBound.field_0x1;
            local_6d0._padding_._4_4_ = (pFVar26->EvaluationRange).LowerBound.Value.FrameNumber;
            local_6d0._padding_ = *(longlong *)&(pFVar26->EvaluationRange).LowerBound.Value.SubFrame
            ;
            local_6d0._padding_ = *(longlong *)&(pFVar26->EvaluationRange).UpperBound.Value;
            local_6d0._padding_ = *(longlong *)&pFVar26->CurrentFrameRate;
            local_6d0._padding_._0_4_ = pFVar26->Direction;
            local_6d0._padding_._4_4_ = pFVar26->TimeOverride;
            local_6d0._124_1_ = local_6d0._124_1_ & 0x83 | 3;
            piVar1 = &param_2->ArrayMax;
            local_6d0.RootToSequenceTransform.LinearTransform.TimeScale = 1.0;
            local_6d0.RootToSequenceTransform.LinearTransform.Offset.FrameNumber.Value = 0;
            local_6d0.RootToSequenceTransform.LinearTransform.Offset.SubFrame = 0.0;
            FVar27 = (ForElementType<FMovieSceneContext>)param_2;
            if (FVar5 != (ForElementType<FMovieSceneContext>)0x0) {
              FVar27 = FVar5;
            }
            local_6d0.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_6d0.RootToSequenceTransform.NestedTransforms.ArrayNum = 0;
            local_6d0.RootToSequenceTransform.NestedTransforms.ArrayMax = 0;
            local_6d0.RootToSequenceWarpCounter._padding_ = 0;
            local_6d0.RootToSequenceWarpCounter._padding_ = 0;
            local_6d0.RootToSequenceWarpCounter._padding_._0_1_ = 0;
            local_6d0.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_6d0.RootToSequenceWarpCounter.WarpCounts.ArrayNum = 0;
            local_6d0.RootToSequenceWarpCounter.WarpCounts.ArrayMax = 0;
            local_6d0.PrePostRollStartEndTime.Value = -0x80000000;
            local_6d0.HierarchicalBias = 0;
            local_6d0.Status = TVar3;
            if ((ulonglong)FVar27 <= &local_6d0) {
              FVar27 = (ForElementType<FMovieSceneContext>)param_2;
              if (FVar5 != (ForElementType<FMovieSceneContext>)0x0) {
                FVar27 = FVar5;
              }
              if ((&local_6d0 < (FMovieSceneContext *)((longlong)*piVar1 * 0x80 + (longlong)FVar27))
                 && (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar24)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            iVar25 = param_2->ArrayNum;
            if (iVar25 == *piVar1) {
              iVar25 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneContext>_>
                                 (0x880,&param_2->AllocatorInstance,piVar1);
            }
            param_2->ArrayNum = iVar25 + 1;
            FVar5 = (param_2->AllocatorInstance).SecondaryData;
            FVar27 = (ForElementType<FMovieSceneContext>)param_2;
            if (FVar5 != (ForElementType<FMovieSceneContext>)0x0) {
              FVar27 = FVar5;
            }
            FMovieSceneContext::FMovieSceneContext
                      ((FMovieSceneContext *)((longlong)iVar25 * 0x80 + (longlong)FVar27),&local_6d0
                      );
            if (local_6d0.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_6d0.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data);
            }
            FVar29.Data = local_6d0.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data;
            if ((void *)local_6d0.RootToSequenceWarpCounter._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_6d0.RootToSequenceWarpCounter._padding_);
              FVar29.Data = local_6d0.RootToSequenceTransform.NestedTransforms.AllocatorInstance.
                            Data;
            }
          }
          else {
            FVar13.SubFrame = 0.0;
            FVar13.FrameNumber.Value = uVar36;
            (this->PlaybackPosition).CurrentPosition = FVar13;
            if ((this->PlaybackPosition).PreviousPlayEvalPosition.bIsSet != false) {
              (this->PlaybackPosition).PreviousPlayEvalPosition.bIsSet = false;
            }
            if ((this->PlaybackPosition).LastRange.bIsSet != false) {
              (this->PlaybackPosition).LastRange.bIsSet = false;
            }
            TVar3 = this->PlaybackStatus;
            FVar14.SubFrame = 0.0;
            FVar14.FrameNumber.Value = uVar35;
            pFVar26 = FMovieScenePlaybackPosition::PlayTo
                                (&this->PlaybackPosition,&local_158,FVar14,Forwards);
            FVar5 = (param_2->AllocatorInstance).SecondaryData;
            local_4d0._padding_._0_1_ = (pFVar26->EvaluationRange).LowerBound.Type;
            local_4d0._padding_._1_3_ =
                 *(undefined3 *)&(pFVar26->EvaluationRange).LowerBound.field_0x1;
            local_4d0._padding_._4_4_ = (pFVar26->EvaluationRange).LowerBound.Value.FrameNumber;
            local_4d0._padding_ = *(longlong *)&(pFVar26->EvaluationRange).LowerBound.Value.SubFrame
            ;
            local_4d0._padding_ = *(longlong *)&(pFVar26->EvaluationRange).UpperBound.Value;
            local_4d0._padding_ = *(longlong *)&pFVar26->CurrentFrameRate;
            local_4d0._padding_._0_4_ = pFVar26->Direction;
            local_4d0._padding_._4_4_ = pFVar26->TimeOverride;
            local_4d0._124_1_ = local_4d0._124_1_ & 0x83 | 3;
            piVar1 = &param_2->ArrayMax;
            local_4d0.RootToSequenceTransform.LinearTransform.TimeScale = 1.0;
            local_4d0.RootToSequenceTransform.LinearTransform.Offset.FrameNumber.Value = 0;
            local_4d0.RootToSequenceTransform.LinearTransform.Offset.SubFrame = 0.0;
            FVar27 = (ForElementType<FMovieSceneContext>)param_2;
            if (FVar5 != (ForElementType<FMovieSceneContext>)0x0) {
              FVar27 = FVar5;
            }
            local_4d0.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_4d0.RootToSequenceTransform.NestedTransforms.ArrayNum = 0;
            local_4d0.RootToSequenceTransform.NestedTransforms.ArrayMax = 0;
            local_4d0.RootToSequenceWarpCounter._padding_ = 0;
            local_4d0.RootToSequenceWarpCounter._padding_ = 0;
            local_4d0.RootToSequenceWarpCounter._padding_._0_1_ = 0;
            local_4d0.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_4d0.RootToSequenceWarpCounter.WarpCounts.ArrayNum = 0;
            local_4d0.RootToSequenceWarpCounter.WarpCounts.ArrayMax = 0;
            local_4d0.PrePostRollStartEndTime.Value = -0x80000000;
            local_4d0.HierarchicalBias = 0;
            local_4d0.Status = TVar3;
            if ((ulonglong)FVar27 <= &local_4d0) {
              FVar27 = (ForElementType<FMovieSceneContext>)param_2;
              if (FVar5 != (ForElementType<FMovieSceneContext>)0x0) {
                FVar27 = FVar5;
              }
              if ((&local_4d0 < (FMovieSceneContext *)((longlong)*piVar1 * 0x80 + (longlong)FVar27))
                 && (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar24)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            iVar25 = param_2->ArrayNum;
            if (iVar25 == *piVar1) {
              iVar25 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneContext>_>
                                 (0x880,&param_2->AllocatorInstance,piVar1);
            }
            param_2->ArrayNum = iVar25 + 1;
            FVar5 = (param_2->AllocatorInstance).SecondaryData;
            FVar27 = (ForElementType<FMovieSceneContext>)param_2;
            if (FVar5 != (ForElementType<FMovieSceneContext>)0x0) {
              FVar27 = FVar5;
            }
            FMovieSceneContext::FMovieSceneContext
                      ((FMovieSceneContext *)((longlong)iVar25 * 0x80 + (longlong)FVar27),&local_4d0
                      );
            if (local_4d0.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_4d0.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data);
            }
            FVar29.Data = local_4d0.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data;
            if ((void *)local_4d0.RootToSequenceWarpCounter._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_4d0.RootToSequenceWarpCounter._padding_);
              FVar29.Data = local_4d0.RootToSequenceTransform.NestedTransforms.AllocatorInstance.
                            Data;
            }
          }
          if (FVar29.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar29.Data);
          }
          bVar24 = this->PlayDirection == Forwards;
          local_790 = (FFrameTime)((longlong)local_790 - 1);
          this->PlayDirection = (uint)bVar24;
        } while (local_790 != (FFrameTime)0x0);
      }
    }
  }
  if (((this->bPingPongPlayback != false) && (this->DissectLooping != DissectAll)) &&
     ((local_794 - (uint)(byte)(undefined1)local_res20 & 1) != 0)) {
    this->PlayDirection = (uint)(this->PlayDirection == Forwards);
  }
  EVar2 = this->PlayDirection;
  iVar25 = this->NumLoopsCompleted + local_794;
  this->NumLoopsCompleted = iVar25;
  uVar31 = uVar35;
  uVar4 = uVar36;
  if (EVar2 == Forwards) {
    uVar31 = uVar36;
    uVar4 = uVar35;
  }
  if ((this->PlaybackEndTick).bIsSet != false) {
    uVar4 = (this->PlaybackEndTick).TypedValue.Value;
  }
  if ((undefined1)local_res20 == 0) {
    iVar32 = iVar34 % iVar33;
    if (this->bPingPongPlayback != false) {
      iVar32 = -(iVar34 % iVar33);
    }
    local_790.FrameNumber.Value = iVar32 + uVar31;
    local_790.SubFrame = 0.0;
    uVar31 = local_790.FrameNumber.Value;
    if ((this->NumLoopsToPlay < 1) || (iVar25 < this->NumLoopsToPlay + -1)) {
      bVar24 = false;
    }
    else {
      bVar24 = true;
      if (EVar2 == Forwards) {
        bVar37 = SBORROW4(local_790.FrameNumber.Value,uVar4);
        iVar33 = local_790.FrameNumber.Value - uVar4;
      }
      else {
        bVar37 = SBORROW4(uVar4,local_790.FrameNumber.Value);
        iVar33 = uVar4 - local_790.FrameNumber.Value;
      }
      FVar30.SubFrame = 0.0;
      FVar30.FrameNumber.Value = uVar4;
      if (bVar37 == iVar33 < 0) {
        local_790 = FVar30;
        uVar31 = uVar4;
      }
    }
    if (EVar2 == Forwards) {
      uVar35 = uVar36;
    }
    FVar19.SubFrame = 0.0;
    FVar19.FrameNumber.Value = uVar35;
    (this->PlaybackPosition).CurrentPosition = FVar19;
    if ((this->PlaybackPosition).PreviousPlayEvalPosition.bIsSet != false) {
      (this->PlaybackPosition).PreviousPlayEvalPosition.bIsSet = false;
    }
    if ((this->PlaybackPosition).LastRange.bIsSet != false) {
      (this->PlaybackPosition).LastRange.bIsSet = false;
    }
    TVar3 = this->PlaybackStatus;
    pFVar26 = FMovieScenePlaybackPosition::PlayTo
                        (&this->PlaybackPosition,&local_90,local_790,Forwards);
    FVar5 = (param_2->AllocatorInstance).SecondaryData;
    local_250._padding_._0_1_ = (pFVar26->EvaluationRange).LowerBound.Type;
    local_250._padding_._1_3_ = *(undefined3 *)&(pFVar26->EvaluationRange).LowerBound.field_0x1;
    local_250._padding_._4_4_ = (pFVar26->EvaluationRange).LowerBound.Value.FrameNumber;
    local_250._padding_ = *(longlong *)&(pFVar26->EvaluationRange).LowerBound.Value.SubFrame;
    local_250._padding_ = *(longlong *)&(pFVar26->EvaluationRange).UpperBound.Value;
    local_250._padding_ = *(longlong *)&pFVar26->CurrentFrameRate;
    local_250._padding_._0_4_ = pFVar26->Direction;
    local_250._padding_._4_4_ = pFVar26->TimeOverride;
    local_250._124_1_ = local_250._124_1_ & 0x83 | 3;
    local_250.RootToSequenceTransform.LinearTransform.TimeScale = 1.0;
    local_250.RootToSequenceTransform.LinearTransform.Offset.FrameNumber.Value = 0;
    local_250.RootToSequenceTransform.LinearTransform.Offset.SubFrame = 0.0;
    FVar27 = (ForElementType<FMovieSceneContext>)param_2;
    if (FVar5 != (ForElementType<FMovieSceneContext>)0x0) {
      FVar27 = FVar5;
    }
    local_250.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_250.RootToSequenceTransform.NestedTransforms.ArrayNum = 0;
    local_250.RootToSequenceTransform.NestedTransforms.ArrayMax = 0;
    local_250.RootToSequenceWarpCounter._padding_ = 0;
    local_250.RootToSequenceWarpCounter._padding_ = 0;
    local_250.RootToSequenceWarpCounter._padding_._0_1_ = 0;
    local_250.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_250.RootToSequenceWarpCounter.WarpCounts.ArrayNum = 0;
    local_250.RootToSequenceWarpCounter.WarpCounts.ArrayMax = 0;
    local_250.PrePostRollStartEndTime.Value = -0x80000000;
    local_250.HierarchicalBias = 0;
    local_250.Status = TVar3;
    if ((ulonglong)FVar27 <= &local_250) {
      FVar27 = (ForElementType<FMovieSceneContext>)param_2;
      if (FVar5 != (ForElementType<FMovieSceneContext>)0x0) {
        FVar27 = FVar5;
      }
      if ((&local_250 <
           (FMovieSceneContext *)((longlong)param_2->ArrayMax * 0x80 + (longlong)FVar27)) &&
         (bVar37 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar37)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar33 = param_2->ArrayNum;
    if (iVar33 == param_2->ArrayMax) {
      iVar33 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneContext>_>
                         (0x880,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar33 + 1;
    FVar5 = (param_2->AllocatorInstance).SecondaryData;
    FVar27 = (ForElementType<FMovieSceneContext>)param_2;
    if (FVar5 != (ForElementType<FMovieSceneContext>)0x0) {
      FVar27 = FVar5;
    }
    FMovieSceneContext::FMovieSceneContext
              ((FMovieSceneContext *)((longlong)iVar33 * 0x80 + (longlong)FVar27),&local_250);
    if (local_250.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data);
    }
    if ((void *)local_250.RootToSequenceWarpCounter._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_250.RootToSequenceWarpCounter._padding_);
    }
    if (local_250.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_250.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data);
    }
    if ((bVar24) && (uVar31 == uVar4)) {
      this->NumLoopsCompleted = this->NumLoopsCompleted + 1;
      this->PlaybackStatus = Stopped;
    }
    goto LAB_1461b8f0a;
  }
  if ((local_794 < 2) &&
     (bVar24 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<690620944376398079>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieScenePlaybackManager.cpp"
                          ,0xff,"NumLoopsNewlyCompleted > 1"), bVar24)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (this->DissectLooping == None) {
    iVar33 = (this->PlaybackPosition).CurrentPosition.FrameNumber.Value;
    if (EVar2 == Forwards) {
      if (iVar33 < (int)uVar4) {
LAB_1461b8651:
        TVar3 = this->PlaybackStatus;
        FVar22.SubFrame = 0.0;
        FVar22.FrameNumber.Value = uVar4;
        pFVar26 = FMovieScenePlaybackPosition::PlayTo
                            (&this->PlaybackPosition,&local_108,FVar22,Forwards);
        FVar5 = (param_2->AllocatorInstance).SecondaryData;
        local_3d0._padding_._0_1_ = (pFVar26->EvaluationRange).LowerBound.Type;
        local_3d0._padding_._1_3_ = *(undefined3 *)&(pFVar26->EvaluationRange).LowerBound.field_0x1;
        local_3d0._padding_._4_4_ = (pFVar26->EvaluationRange).LowerBound.Value.FrameNumber;
        local_3d0._padding_ = *(longlong *)&(pFVar26->EvaluationRange).LowerBound.Value.SubFrame;
        local_3d0._padding_ = *(longlong *)&(pFVar26->EvaluationRange).UpperBound.Value;
        local_3d0._padding_ = *(longlong *)&pFVar26->CurrentFrameRate;
        local_3d0._padding_._0_4_ = pFVar26->Direction;
        local_3d0._padding_._4_4_ = pFVar26->TimeOverride;
        local_3d0._124_1_ = local_3d0._124_1_ & 0x80 | local_798;
        local_3d0.RootToSequenceTransform.LinearTransform.TimeScale = 1.0;
        local_3d0.RootToSequenceTransform.LinearTransform.Offset.FrameNumber.Value = 0;
        FVar27 = (ForElementType<FMovieSceneContext>)param_2;
        if (FVar5 != (ForElementType<FMovieSceneContext>)0x0) {
          FVar27 = FVar5;
        }
        local_3d0.RootToSequenceTransform.LinearTransform.Offset.SubFrame = 0.0;
        local_3d0.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        local_3d0.RootToSequenceTransform.NestedTransforms.ArrayNum = 0;
        local_3d0.RootToSequenceTransform.NestedTransforms.ArrayMax = 0;
        local_3d0.RootToSequenceWarpCounter._padding_ = 0;
        local_3d0.RootToSequenceWarpCounter._padding_ = 0;
        local_3d0.RootToSequenceWarpCounter._padding_._0_1_ = 0;
        local_3d0.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data =
             (FScriptContainerElement *)0x0;
        local_3d0.RootToSequenceWarpCounter.WarpCounts.ArrayNum = 0;
        local_3d0.RootToSequenceWarpCounter.WarpCounts.ArrayMax = 0;
        local_3d0.PrePostRollStartEndTime.Value = -0x80000000;
        local_3d0.HierarchicalBias = 0;
        local_3d0.Status = TVar3;
        if ((ulonglong)FVar27 <= &local_3d0) {
          FVar27 = (ForElementType<FMovieSceneContext>)param_2;
          if (FVar5 != (ForElementType<FMovieSceneContext>)0x0) {
            FVar27 = FVar5;
          }
          if ((&local_3d0 <
               (FMovieSceneContext *)((longlong)param_2->ArrayMax * 0x80 + (longlong)FVar27)) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar24)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        iVar33 = param_2->ArrayNum;
        if (iVar33 == param_2->ArrayMax) {
          iVar33 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneContext>_>
                             (0x880,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar33 + 1;
        FVar5 = (param_2->AllocatorInstance).SecondaryData;
        FVar27 = (ForElementType<FMovieSceneContext>)param_2;
        if (FVar5 != (ForElementType<FMovieSceneContext>)0x0) {
          FVar27 = FVar5;
        }
        FMovieSceneContext::FMovieSceneContext
                  ((FMovieSceneContext *)((longlong)iVar33 * 0x80 + (longlong)FVar27),&local_3d0);
        if (local_3d0.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3d0.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data);
        }
        FVar29.Data = local_3d0.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data;
        if ((void *)local_3d0.RootToSequenceWarpCounter._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_3d0.RootToSequenceWarpCounter._padding_);
          FVar29.Data = local_3d0.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data;
        }
        goto LAB_1461b8a18;
      }
    }
    else if ((int)uVar4 < iVar33) goto LAB_1461b8651;
    FVar17.SubFrame = 0.0;
    FVar17.FrameNumber.Value = uVar31;
    (this->PlaybackPosition).CurrentPosition = FVar17;
    if ((this->PlaybackPosition).PreviousPlayEvalPosition.bIsSet != false) {
      (this->PlaybackPosition).PreviousPlayEvalPosition.bIsSet = false;
    }
    if ((this->PlaybackPosition).LastRange.bIsSet != false) {
      (this->PlaybackPosition).LastRange.bIsSet = false;
    }
    TVar3 = this->PlaybackStatus;
    FVar21.SubFrame = 0.0;
    FVar21.FrameNumber.Value = uVar4;
    pFVar26 = FMovieScenePlaybackPosition::PlayTo(&this->PlaybackPosition,&local_e0,FVar21,Forwards)
    ;
    FVar5 = (param_2->AllocatorInstance).SecondaryData;
    local_350._padding_._0_1_ = (pFVar26->EvaluationRange).LowerBound.Type;
    local_350._padding_._1_3_ = *(undefined3 *)&(pFVar26->EvaluationRange).LowerBound.field_0x1;
    local_350._padding_._4_4_ = (pFVar26->EvaluationRange).LowerBound.Value.FrameNumber;
    local_350._padding_ = *(longlong *)&(pFVar26->EvaluationRange).LowerBound.Value.SubFrame;
    local_350._padding_ = *(longlong *)&(pFVar26->EvaluationRange).UpperBound.Value;
    local_350._padding_ = *(longlong *)&pFVar26->CurrentFrameRate;
    local_350._padding_._0_4_ = pFVar26->Direction;
    local_350._padding_._4_4_ = pFVar26->TimeOverride;
    local_350._124_1_ = local_350._124_1_ & 0x83 | 3;
    local_350.RootToSequenceTransform.LinearTransform.TimeScale = 1.0;
    local_350.RootToSequenceTransform.LinearTransform.Offset.FrameNumber.Value = 0;
    local_350.RootToSequenceTransform.LinearTransform.Offset.SubFrame = 0.0;
    FVar27 = (ForElementType<FMovieSceneContext>)param_2;
    if (FVar5 != (ForElementType<FMovieSceneContext>)0x0) {
      FVar27 = FVar5;
    }
    local_350.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_350.RootToSequenceTransform.NestedTransforms.ArrayNum = 0;
    local_350.RootToSequenceTransform.NestedTransforms.ArrayMax = 0;
    local_350.RootToSequenceWarpCounter._padding_ = 0;
    local_350.RootToSequenceWarpCounter._padding_ = 0;
    local_350.RootToSequenceWarpCounter._padding_._0_1_ = 0;
    local_350.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_350.RootToSequenceWarpCounter.WarpCounts.ArrayNum = 0;
    local_350.RootToSequenceWarpCounter.WarpCounts.ArrayMax = 0;
    local_350.PrePostRollStartEndTime.Value = -0x80000000;
    local_350.HierarchicalBias = 0;
    local_350.Status = TVar3;
    if ((ulonglong)FVar27 <= &local_350) {
      FVar27 = (ForElementType<FMovieSceneContext>)param_2;
      if (FVar5 != (ForElementType<FMovieSceneContext>)0x0) {
        FVar27 = FVar5;
      }
      if ((&local_350 <
           (FMovieSceneContext *)((longlong)param_2->ArrayMax * 0x80 + (longlong)FVar27)) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar24)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar33 = param_2->ArrayNum;
    if (iVar33 == param_2->ArrayMax) {
      iVar33 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneContext>_>
                         (0x880,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar33 + 1;
    FVar5 = (param_2->AllocatorInstance).SecondaryData;
    FVar27 = (ForElementType<FMovieSceneContext>)param_2;
    if (FVar5 != (ForElementType<FMovieSceneContext>)0x0) {
      FVar27 = FVar5;
    }
    FMovieSceneContext::FMovieSceneContext
              ((FMovieSceneContext *)((longlong)iVar33 * 0x80 + (longlong)FVar27),&local_350);
    if (local_350.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_350.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data);
    }
    FVar29.Data = local_350.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data;
    if ((void *)local_350.RootToSequenceWarpCounter._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_350.RootToSequenceWarpCounter._padding_);
      FVar29.Data = local_350.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data;
    }
  }
  else {
    FVar18.SubFrame = 0.0;
    FVar18.FrameNumber.Value = uVar31;
    (this->PlaybackPosition).CurrentPosition = FVar18;
    if ((this->PlaybackPosition).PreviousPlayEvalPosition.bIsSet != false) {
      (this->PlaybackPosition).PreviousPlayEvalPosition.bIsSet = false;
    }
    if ((this->PlaybackPosition).LastRange.bIsSet != false) {
      (this->PlaybackPosition).LastRange.bIsSet = false;
    }
    TVar3 = this->PlaybackStatus;
    FVar23.SubFrame = 0.0;
    FVar23.FrameNumber.Value = uVar4;
    pFVar26 = FMovieScenePlaybackPosition::PlayTo(&this->PlaybackPosition,&local_b8,FVar23,Forwards)
    ;
    FVar5 = (param_2->AllocatorInstance).SecondaryData;
    local_2d0._padding_._0_1_ = (pFVar26->EvaluationRange).LowerBound.Type;
    local_2d0._padding_._1_3_ = *(undefined3 *)&(pFVar26->EvaluationRange).LowerBound.field_0x1;
    local_2d0._padding_._4_4_ = (pFVar26->EvaluationRange).LowerBound.Value.FrameNumber;
    local_2d0._padding_ = *(longlong *)&(pFVar26->EvaluationRange).LowerBound.Value.SubFrame;
    local_2d0._padding_ = *(longlong *)&(pFVar26->EvaluationRange).UpperBound.Value;
    local_2d0._padding_ = *(longlong *)&pFVar26->CurrentFrameRate;
    local_2d0._padding_._0_4_ = pFVar26->Direction;
    local_2d0._padding_._4_4_ = pFVar26->TimeOverride;
    local_2d0._124_1_ = local_2d0._124_1_ & 0x83 | 3;
    local_2d0.RootToSequenceTransform.LinearTransform.TimeScale = 1.0;
    local_2d0.RootToSequenceTransform.LinearTransform.Offset.FrameNumber.Value = 0;
    local_2d0.RootToSequenceTransform.LinearTransform.Offset.SubFrame = 0.0;
    FVar27 = (ForElementType<FMovieSceneContext>)param_2;
    if (FVar5 != (ForElementType<FMovieSceneContext>)0x0) {
      FVar27 = FVar5;
    }
    local_2d0.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_2d0.RootToSequenceTransform.NestedTransforms.ArrayNum = 0;
    local_2d0.RootToSequenceTransform.NestedTransforms.ArrayMax = 0;
    local_2d0.RootToSequenceWarpCounter._padding_ = 0;
    local_2d0.RootToSequenceWarpCounter._padding_ = 0;
    local_2d0.RootToSequenceWarpCounter._padding_._0_1_ = 0;
    local_2d0.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_2d0.RootToSequenceWarpCounter.WarpCounts.ArrayNum = 0;
    local_2d0.RootToSequenceWarpCounter.WarpCounts.ArrayMax = 0;
    local_2d0.PrePostRollStartEndTime.Value = -0x80000000;
    local_2d0.HierarchicalBias = 0;
    local_2d0.Status = TVar3;
    if ((ulonglong)FVar27 <= &local_2d0) {
      FVar27 = (ForElementType<FMovieSceneContext>)param_2;
      if (FVar5 != (ForElementType<FMovieSceneContext>)0x0) {
        FVar27 = FVar5;
      }
      if ((&local_2d0 <
           (FMovieSceneContext *)((longlong)param_2->ArrayMax * 0x80 + (longlong)FVar27)) &&
         (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar24)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar33 = param_2->ArrayNum;
    if (iVar33 == param_2->ArrayMax) {
      iVar33 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FMovieSceneContext>_>
                         (0x880,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar33 + 1;
    FVar5 = (param_2->AllocatorInstance).SecondaryData;
    FVar27 = (ForElementType<FMovieSceneContext>)param_2;
    if (FVar5 != (ForElementType<FMovieSceneContext>)0x0) {
      FVar27 = FVar5;
    }
    FMovieSceneContext::FMovieSceneContext
              ((FMovieSceneContext *)((longlong)iVar33 * 0x80 + (longlong)FVar27),&local_2d0);
    if (local_2d0.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d0.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data);
    }
    FVar29.Data = local_2d0.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data;
    if ((void *)local_2d0.RootToSequenceWarpCounter._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_2d0.RootToSequenceWarpCounter._padding_);
      FVar29.Data = local_2d0.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data;
    }
  }
LAB_1461b8a18:
  if (FVar29.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar29.Data);
  }
  this->PlaybackStatus = Stopped;
LAB_1461b8f0a:
  if ((param_2->ArrayNum < 1) &&
     (bVar24 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<690620944376398173>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieScenePlaybackManager.cpp"
                          ,0x15d,"OutContexts.Num() > 0"), bVar24)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((param_2->ArrayNum != 1) && (this->DissectLooping == None)) &&
     (bVar24 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<690620944376398174>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieScenePlaybackManager.cpp"
                          ,0x15e,
                          "OutContexts.Num() == 1 || (DissectLooping != EMovieSceneLoopDissection::None)"
                         ), bVar24)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  return;
}

// ResetPlaybackSettings @ 1461cd9e0

void __thiscall FMovieScenePlaybackManager::ResetPlaybackSettings(FMovieScenePlaybackManager *this)

{
  this->NumLoopsToPlay = 1;
  this->NumLoopsCompleted = 0;
  this->StartOffsetTicks = 0;
  this->EndOffsetTicks = 0;
  this->PlayRate = 1.0;
  this->PlayDirection = Forwards;
  return;
}

// ReversePlayDirection @ 1461cfc30

void __thiscall FMovieScenePlaybackManager::ReversePlayDirection(FMovieScenePlaybackManager *this)

{
  this->PlayDirection = (uint)(this->PlayDirection == Forwards);
  return;
}

// SetCurrentTime @ 1461d2010

void __thiscall
FMovieScenePlaybackManager::SetCurrentTime(FMovieScenePlaybackManager *this,FFrameTime *param_1)

{
  uint uVar1;
  FFrameTime FVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_res8 [32];
  
  FVar2 = ConvertFrameTime((FFrameTime)local_res8,(FFrameRate)*param_1,this->DisplayRate);
  uVar1 = *(uint *)FVar2;
  if (__real_3f000000 < *(float *)((longlong)FVar2 + 4) ||
      __real_3f000000 == *(float *)((longlong)FVar2 + 4)) {
    uVar1 = uVar1 + 1;
  }
  uVar4 = ((this->SequenceEndTick).Value - (this->EndOffsetTicks).Value) - 1;
  uVar3 = (this->StartOffsetTicks).Value + (this->SequenceStartTick).Value;
  if ((int)uVar1 < (int)uVar4) {
    uVar4 = uVar1;
  }
  if ((int)uVar3 < (int)uVar4) {
    uVar3 = uVar4;
  }
  FVar2.SubFrame = 0.0;
  FVar2.FrameNumber.Value = uVar3;
  (this->PlaybackPosition).CurrentPosition = FVar2;
  if ((this->PlaybackPosition).PreviousPlayEvalPosition.bIsSet != false) {
    (this->PlaybackPosition).PreviousPlayEvalPosition.bIsSet = false;
  }
  if ((this->PlaybackPosition).LastRange.bIsSet != false) {
    (this->PlaybackPosition).LastRange.bIsSet = false;
  }
  return;
}

// SetCurrentTimeOffset @ 1461d20a0

void __thiscall
FMovieScenePlaybackManager::SetCurrentTimeOffset
          (FMovieScenePlaybackManager *this,FFrameTime *param_1)

{
  int iVar1;
  FFrameTime FVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_res8 [32];
  
  FVar2 = ConvertFrameTime((FFrameTime)local_res8,(FFrameRate)*param_1,this->DisplayRate);
  iVar1 = *(int *)FVar2;
  if (__real_3f000000 < *(float *)((longlong)FVar2 + 4) ||
      __real_3f000000 == *(float *)((longlong)FVar2 + 4)) {
    iVar1 = iVar1 + 1;
  }
  uVar4 = (this->StartOffsetTicks).Value + (this->SequenceStartTick).Value;
  uVar3 = ((this->SequenceEndTick).Value - (this->EndOffsetTicks).Value) - 1;
  if ((int)(uVar4 + iVar1) < (int)uVar3) {
    uVar3 = uVar4 + iVar1;
  }
  if ((int)uVar4 < (int)uVar3) {
    uVar4 = uVar3;
  }
  FVar2.SubFrame = 0.0;
  FVar2.FrameNumber.Value = uVar4;
  (this->PlaybackPosition).CurrentPosition = FVar2;
  if ((this->PlaybackPosition).PreviousPlayEvalPosition.bIsSet != false) {
    (this->PlaybackPosition).PreviousPlayEvalPosition.bIsSet = false;
  }
  if ((this->PlaybackPosition).LastRange.bIsSet != false) {
    (this->PlaybackPosition).LastRange.bIsSet = false;
  }
  return;
}

// SetEndOffset @ 1461d21e0

void __thiscall
FMovieScenePlaybackManager::SetEndOffset(FMovieScenePlaybackManager *this,FFrameTime *param_1)

{
  int iVar1;
  FFrameTime FVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_res8 [32];
  
  FVar2 = ConvertFrameTime((FFrameTime)local_res8,(FFrameRate)*param_1,this->DisplayRate);
  iVar1 = *(int *)FVar2;
  if (__real_3f000000 < *(float *)((longlong)FVar2 + 4) ||
      __real_3f000000 == *(float *)((longlong)FVar2 + 4)) {
    iVar1 = iVar1 + 1;
  }
  iVar3 = (this->StartOffsetTicks).Value;
  iVar5 = (this->SequenceEndTick).Value - (this->SequenceStartTick).Value;
  iVar4 = 0;
  if (0 < iVar3) {
    iVar4 = iVar3;
  }
  iVar3 = iVar5;
  if (iVar4 < iVar5) {
    iVar3 = iVar4;
  }
  (this->StartOffsetTicks).Value = iVar3;
  iVar4 = 0;
  if (0 < iVar1) {
    iVar4 = iVar1;
  }
  iVar1 = iVar5 - iVar3;
  if (iVar4 < iVar5 - iVar3) {
    iVar1 = iVar4;
  }
  (this->EndOffsetTicks).Value = iVar1;
  return;
}

// SetEndOffsetAsTime @ 1461d2260

void __thiscall
FMovieScenePlaybackManager::SetEndOffsetAsTime(FMovieScenePlaybackManager *this,FFrameTime *param_1)

{
  int iVar1;
  int iVar2;
  FFrameTime FVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 local_res8 [32];
  
  FVar3 = ConvertFrameTime((FFrameTime)local_res8,(FFrameRate)*param_1,this->DisplayRate);
  iVar2 = *(int *)FVar3;
  if (__real_3f000000 < *(float *)((longlong)FVar3 + 4) ||
      __real_3f000000 == *(float *)((longlong)FVar3 + 4)) {
    iVar2 = iVar2 + 1;
  }
  iVar4 = (this->StartOffsetTicks).Value;
  iVar5 = (this->SequenceEndTick).Value;
  iVar6 = iVar5 - (this->SequenceStartTick).Value;
  iVar1 = 0;
  if (0 < iVar4) {
    iVar1 = iVar4;
  }
  iVar4 = iVar6;
  if (iVar1 < iVar6) {
    iVar4 = iVar1;
  }
  iVar5 = iVar5 - iVar2;
  (this->StartOffsetTicks).Value = iVar4;
  iVar2 = 0;
  if (0 < iVar5) {
    iVar2 = iVar5;
  }
  iVar5 = iVar6 - iVar4;
  if (iVar2 < iVar6 - iVar4) {
    iVar5 = iVar2;
  }
  (this->EndOffsetTicks).Value = iVar5;
  return;
}

// SetNumLoopsToPlay @ 1461d2a50

void __thiscall
FMovieScenePlaybackManager::SetNumLoopsToPlay(FMovieScenePlaybackManager *this,int param_1)

{
  this->NumLoopsToPlay = param_1;
  return;
}

// SetPingPongPlayback @ 1461d2a60

void __thiscall
FMovieScenePlaybackManager::SetPingPongPlayback(FMovieScenePlaybackManager *this,bool param_1)

{
  this->bPingPongPlayback = param_1;
  return;
}

// SetPlaybackEndTime @ 1461d2a70

void __thiscall
FMovieScenePlaybackManager::SetPlaybackEndTime(FMovieScenePlaybackManager *this,FFrameTime *param_1)

{
  int iVar1;
  FFrameTime FVar2;
  int iVar3;
  int iVar4;
  undefined1 local_res8 [8];
  int local_18 [4];
  
  iVar4 = (this->SequenceEndTick).Value - (this->EndOffsetTicks).Value;
  iVar3 = (this->StartOffsetTicks).Value + (this->SequenceStartTick).Value;
  FVar2 = ConvertFrameTime((FFrameTime)local_res8,(FFrameRate)*param_1,this->DisplayRate);
  iVar1 = *(int *)FVar2;
  if (__real_3f000000 < *(float *)((longlong)FVar2 + 4) ||
      __real_3f000000 == *(float *)((longlong)FVar2 + 4)) {
    iVar1 = iVar1 + 1;
  }
  if (iVar1 < iVar4) {
    iVar4 = iVar1;
  }
  if (iVar3 < iVar4) {
    iVar3 = iVar4;
  }
  if ((TOptional<FFrameNumber> *)local_18 != &this->PlaybackEndTick) {
    (this->PlaybackEndTick).TypedValue.Value = iVar3;
    (this->PlaybackEndTick).bIsSet = true;
  }
  return;
}

// SetStartAndEndOffsetTicks @ 1461d2da0

void __thiscall
FMovieScenePlaybackManager::SetStartAndEndOffsetTicks
          (FMovieScenePlaybackManager *this,FFrameNumber param_1,FFrameNumber param_2)

{
  int iVar1;
  FFrameNumber FVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (this->SequenceEndTick).Value - (this->SequenceStartTick).Value;
  FVar2.Value = 0;
  if (0 < param_1.Value) {
    FVar2.Value = param_1.Value;
  }
  iVar1 = iVar3;
  if (FVar2.Value < iVar3) {
    iVar1 = FVar2.Value;
  }
  (this->StartOffsetTicks).Value = iVar1;
  FVar2.Value = 0;
  if (0 < param_2.Value) {
    FVar2.Value = param_2.Value;
  }
  iVar4 = iVar3 - iVar1;
  if (FVar2.Value < iVar3 - iVar1) {
    iVar4 = FVar2.Value;
  }
  (this->EndOffsetTicks).Value = iVar4;
  return;
}

// SetStartOffset @ 1461d2de0

void __thiscall
FMovieScenePlaybackManager::SetStartOffset(FMovieScenePlaybackManager *this,FFrameTime *param_1)

{
  int iVar1;
  FFrameTime FVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 local_res8 [32];
  
  FVar2 = ConvertFrameTime((FFrameTime)local_res8,(FFrameRate)*param_1,this->DisplayRate);
  iVar1 = *(int *)FVar2;
  if (__real_3f000000 < *(float *)((longlong)FVar2 + 4) ||
      __real_3f000000 == *(float *)((longlong)FVar2 + 4)) {
    iVar1 = iVar1 + 1;
  }
  iVar5 = (this->SequenceEndTick).Value - (this->SequenceStartTick).Value;
  iVar4 = 0;
  if (0 < iVar1) {
    iVar4 = iVar1;
  }
  iVar1 = (this->EndOffsetTicks).Value;
  iVar3 = iVar5;
  if (iVar4 < iVar5) {
    iVar3 = iVar4;
  }
  (this->StartOffsetTicks).Value = iVar3;
  iVar4 = 0;
  if (0 < iVar1) {
    iVar4 = iVar1;
  }
  iVar1 = iVar5 - iVar3;
  if (iVar4 < iVar5 - iVar3) {
    iVar1 = iVar4;
  }
  (this->EndOffsetTicks).Value = iVar1;
  return;
}

// Update @ 1461de490

void __thiscall
FMovieScenePlaybackManager::Update
          (FMovieScenePlaybackManager *this,float param_1,
          TArray<FMovieSceneContext,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  FFrameRate FVar1;
  bool bVar2;
  uchar uVar3;
  char cVar4;
  uint uVar5;
  UMovieSceneTimeWarpGetter *pUVar6;
  FFrameTime FVar7;
  int iVar8;
  FFrameNumber FVar9;
  FMovieSceneNumericVariant *pFVar10;
  FMovieSceneNumericVariant *this_00;
  int iVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar17;
  undefined1 in_XMM2 [16];
  undefined1 auVar16 [16];
  double dVar18;
  float fVar19;
  undefined8 local_res8;
  undefined8 local_res20;
  
  if (this->PlaybackStatus == Playing) {
    FVar1 = (this->PlaybackPosition).InputRate;
    FVar7 = (this->PlaybackPosition).CurrentPosition;
    if (this->PlayDirection != Forwards) {
      param_1 = (float)((uint)param_1 ^ __xmm_80000000800000008000000080000000);
    }
    dVar18 = ((double)param_1 * this->PlayRate * (double)FVar1.Numerator) /
             (double)FVar1.Denominator;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = dVar18;
    auVar16 = roundpd(in_XMM2,auVar16,1);
    dVar18 = dVar18 - auVar16._0_8_;
    uVar14 = auVar16._0_4_;
    uVar17 = auVar16._4_4_;
    if (__real_41dfffffffc00000 <= auVar16._0_8_) {
      uVar14 = SUB84(__real_41dfffffffc00000,0);
      uVar17 = (undefined4)((ulonglong)__real_41dfffffffc00000 >> 0x20);
    }
    if ((double)CONCAT44(uVar17,uVar14) <= __real_c1e0000000000000) {
      uVar14 = SUB84(__real_c1e0000000000000,0);
      uVar17 = (undefined4)((ulonglong)__real_c1e0000000000000 >> 0x20);
    }
    iVar11 = (int)dVar18;
    fVar19 = (float)dVar18 - (float)iVar11;
    fVar12 = fVar19;
    if ((0.0 < fVar19) && (fVar12 = ::FFrameTime::MaxSubframe, fVar19 <= ::FFrameTime::MaxSubframe))
    {
      fVar12 = fVar19;
    }
    fVar19 = ::FFrameTime::MaxSubframe;
    if (fVar12 <= ::FFrameTime::MaxSubframe) {
      fVar19 = fVar12;
    }
    if (fVar19 <= 0.0) {
      fVar19 = 0.0;
    }
    local_res8._4_4_ = FVar7.SubFrame;
    fVar19 = fVar19 + local_res8._4_4_;
    FVar9 = FVar7.FrameNumber.Value;
    iVar8 = (int)fVar19;
    fVar12 = fVar19;
    if ((iVar8 != -0x80000000) && ((float)iVar8 != fVar19)) {
      auVar13._4_4_ = fVar19;
      auVar13._0_4_ = fVar19;
      auVar13._8_8_ = 0;
      uVar5 = movmskps(FVar9.Value,auVar13);
      fVar12 = (float)(int)(iVar8 - (uVar5 & 1));
    }
    fVar15 = fVar19 - fVar12;
    if (::FFrameTime::MaxSubframe <= fVar19 - fVar12) {
      fVar15 = ::FFrameTime::MaxSubframe;
    }
    if (fVar15 <= 0.0) {
      fVar15 = 0.0;
    }
    local_res8 = CONCAT44(fVar15,(int)(double)CONCAT44(uVar17,uVar14) +
                                 ((int)ROUND((fVar19 + fVar19) - __real_3f000000) >> 1) +
                                 FVar9.Value + iVar11);
    local_res20 = local_res8;
    if (this->bTransformPlaybackTime != false) {
      this_00 = (FMovieSceneNumericVariant *)
                (this->TimeTransform).NestedTransforms.AllocatorInstance.Data;
      iVar11 = (this->TimeTransform).NestedTransforms.ArrayNum;
      pFVar10 = this_00 + (longlong)iVar11 * 2;
      while( true ) {
        if ((this->TimeTransform).NestedTransforms.ArrayNum != iVar11) {
          `TCheckedPointerIterator<FMovieSceneNestedSequenceTransform_const_,int,0>::operator!='::
          __l2::<lambda_1>::operator()(&local_res8);
        }
        if (this_00 == pFVar10) {
          bVar2 = false;
          cVar4 = (char)local_res8;
          goto LAB_1461de669;
        }
        if ((((*(ulonglong *)this_00->Data & 0xfff8000000000000) == 0xfff8000000000000) &&
            (uVar3 = FMovieSceneNumericVariant::GetTypeBits(this_00), uVar3 == '\0')) &&
           (pUVar6 = FMovieSceneTimeWarpVariant::AsCustom((FMovieSceneTimeWarpVariant *)this_00),
           pUVar6 != (UMovieSceneTimeWarpGetter *)0x0)) break;
        this_00 = this_00 + 2;
      }
      cVar4 = (**(code **)(pUVar6->_padding_ + 0x2e0))();
      bVar2 = true;
LAB_1461de669:
      if ((bVar2) && (cVar4 == '\x01')) {
        FVar7 = FMovieSceneSequenceTransform::TransformTime
                          (&this->TimeTransform,(FFrameTime)&local_res8);
        local_res20 = *(undefined8 *)FVar7;
      }
    }
    FVar9.Value = (int)local_res20;
    if (__real_3f000000 <= local_res20._4_4_) {
      FVar9.Value = FVar9.Value + 1;
    }
    InternalUpdateToTick(this,FVar9,param_2);
  }
  return;
}

// UpdateAtCurrentTime @ 1461de760

FMovieSceneContext * __thiscall
FMovieScenePlaybackManager::UpdateAtCurrentTime
          (FMovieScenePlaybackManager *this,FMovieSceneContext *__return_storage_ptr__)

{
  undefined1 *puVar1;
  Type TVar2;
  FFrameRate FVar3;
  code *pcVar4;
  bool bVar5;
  FMovieSceneContext *pFVar6;
  longlong local_res8;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  TVar2 = this->PlaybackStatus;
  if (((this->PlaybackPosition).InputRate.Denominator < 1) ||
     ((this->PlaybackPosition).OutputRate.Denominator < 1)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputRate.IsValid() && OutputRate.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\MovieScenePlayback.cpp"
                       ,0xbd,
                       L"Invalid input or output rate. SetTimeBase must be called before any use of this class."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FMovieSceneContext *)(*pcVar4)();
      return pFVar6;
    }
  }
  ConvertFrameTime((FFrameTime)&local_res8,(FFrameRate)(this->PlaybackPosition).CurrentPosition,
                   (this->PlaybackPosition).InputRate);
  uStack_34 = (undefined4)local_res8;
  uStack_30 = (undefined4)((ulonglong)local_res8 >> 0x20);
  FVar3 = (this->PlaybackPosition).OutputRate;
  __return_storage_ptr__->bHasJumped = false;
  __return_storage_ptr__->bHasPostRollStartTime = false;
  __return_storage_ptr__->bHasPreRollEndTime = false;
  __return_storage_ptr__->bSectionPostRoll = false;
  __return_storage_ptr__->bSectionPreRoll = false;
  __return_storage_ptr__->bSilent = false;
  __return_storage_ptr__->bHasLooped = false;
  __return_storage_ptr__->HierarchicalBias = 0;
  __return_storage_ptr__->Status = TVar2;
  local_38 = CONCAT31(local_38._1_3_,1);
  uStack_2c = CONCAT31(uStack_2c._1_3_,1);
  __return_storage_ptr__->_padding_ = CONCAT44(uStack_34,local_38);
  __return_storage_ptr__->_padding_ = CONCAT44(uStack_2c,uStack_30);
  __return_storage_ptr__->_padding_ = local_res8;
  __return_storage_ptr__->_padding_ = (longlong)FVar3;
  __return_storage_ptr__->_padding_ = -0x8000000000000000;
  (__return_storage_ptr__->RootToSequenceTransform).LinearTransform.Offset.SubFrame = 0.0;
  (__return_storage_ptr__->RootToSequenceTransform).NestedTransforms.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->RootToSequenceTransform).NestedTransforms.ArrayNum = 0;
  (__return_storage_ptr__->RootToSequenceTransform).NestedTransforms.ArrayMax = 0;
  (__return_storage_ptr__->RootToSequenceWarpCounter)._padding_ = 0;
  (__return_storage_ptr__->RootToSequenceWarpCounter)._padding_ = 0;
  *(undefined1 *)&(__return_storage_ptr__->RootToSequenceWarpCounter)._padding_ = 0;
  (__return_storage_ptr__->RootToSequenceWarpCounter).WarpCounts.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->RootToSequenceWarpCounter).WarpCounts.ArrayNum = 0;
  (__return_storage_ptr__->RootToSequenceWarpCounter).WarpCounts.ArrayMax = 0;
  (__return_storage_ptr__->RootToSequenceTransform).LinearTransform.TimeScale = 1.0;
  (__return_storage_ptr__->RootToSequenceTransform).LinearTransform.Offset.FrameNumber = 0;
  (__return_storage_ptr__->PrePostRollStartEndTime).Value = -0x80000000;
  return __return_storage_ptr__;
}

// UpdateTo @ 1461e0e80

void __thiscall
FMovieScenePlaybackManager::UpdateTo
          (FMovieScenePlaybackManager *this,FFrameTime param_1,
          TArray<FMovieSceneContext,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int local_res8;
  float local_resc;
  
  ConvertFrameTime((FFrameTime)&local_res8,(FFrameRate)param_1,this->DisplayRate);
  if (__real_3f000000 <= local_resc) {
    local_res8 = local_res8 + 1;
  }
  InternalUpdateToTick(this,(FFrameNumber)local_res8,param_2);
  return;
}

// UpdateToNextTick @ 1461e0ee0

FMovieSceneContext * __thiscall
FMovieScenePlaybackManager::UpdateToNextTick
          (FMovieScenePlaybackManager *this,FMovieSceneContext *__return_storage_ptr__)

{
  undefined1 *puVar1;
  longlong lVar2;
  Type TVar3;
  longlong lVar4;
  longlong lVar5;
  FFrameTime FVar6;
  FFrameRate FVar7;
  FMovieSceneEvaluationRange *pFVar8;
  FMovieSceneEvaluationRange local_38;
  
  TVar3 = this->PlaybackStatus;
  pFVar8 = FMovieScenePlaybackPosition::PlayTo
                     (&this->PlaybackPosition,&local_38,(this->PlaybackPosition).CurrentPosition,
                      this->PlayDirection);
  lVar4 = *(longlong *)&(pFVar8->EvaluationRange).LowerBound;
  lVar5 = *(longlong *)&(pFVar8->EvaluationRange).LowerBound.Value.SubFrame;
  FVar6 = (pFVar8->EvaluationRange).UpperBound.Value;
  FVar7 = pFVar8->CurrentFrameRate;
  lVar2 = *(longlong *)&pFVar8->Direction;
  __return_storage_ptr__->bHasJumped = false;
  __return_storage_ptr__->bHasPostRollStartTime = false;
  __return_storage_ptr__->bHasPreRollEndTime = false;
  __return_storage_ptr__->bSectionPostRoll = false;
  __return_storage_ptr__->bSectionPreRoll = false;
  __return_storage_ptr__->bSilent = false;
  __return_storage_ptr__->bHasLooped = false;
  __return_storage_ptr__->_padding_ = lVar4;
  __return_storage_ptr__->_padding_ = lVar5;
  __return_storage_ptr__->Status = TVar3;
  __return_storage_ptr__->_padding_ = (longlong)FVar6;
  __return_storage_ptr__->_padding_ = (longlong)FVar7;
  __return_storage_ptr__->HierarchicalBias = 0;
  __return_storage_ptr__->_padding_ = lVar2;
  (__return_storage_ptr__->RootToSequenceTransform).LinearTransform.Offset.SubFrame = 0.0;
  (__return_storage_ptr__->RootToSequenceTransform).NestedTransforms.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->RootToSequenceTransform).NestedTransforms.ArrayNum = 0;
  (__return_storage_ptr__->RootToSequenceTransform).NestedTransforms.ArrayMax = 0;
  (__return_storage_ptr__->RootToSequenceWarpCounter)._padding_ = 0;
  (__return_storage_ptr__->RootToSequenceWarpCounter)._padding_ = 0;
  *(undefined1 *)&(__return_storage_ptr__->RootToSequenceWarpCounter)._padding_ = 0;
  (__return_storage_ptr__->RootToSequenceWarpCounter).WarpCounts.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->RootToSequenceWarpCounter).WarpCounts.ArrayNum = 0;
  (__return_storage_ptr__->RootToSequenceWarpCounter).WarpCounts.ArrayMax = 0;
  (__return_storage_ptr__->RootToSequenceTransform).LinearTransform.TimeScale = 1.0;
  (__return_storage_ptr__->RootToSequenceTransform).LinearTransform.Offset.FrameNumber = 0;
  (__return_storage_ptr__->PrePostRollStartEndTime).Value = -0x80000000;
  return __return_storage_ptr__;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 13

// FMovieSceneTrackEvaluator @ 146181390

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieSceneTrackEvaluator * __thiscall
FMovieSceneTrackEvaluator::FMovieSceneTrackEvaluator
          (FMovieSceneTrackEvaluator *this,UMovieSceneSequence *param_1,
          FMovieSceneCompiledDataID param_2,UMovieSceneCompiledDataManager *param_3)

{
  undefined1 *puVar1;
  UMovieSceneSequence *local_res8 [2];
  uint local_58;
  uint uStack_4c;
  
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::RegisterGCObject((FGCObject *)this);
  this->_padding_ = (longlong)&___7FMovieSceneTrackEvaluator__6B_;
  (this->CachedPtrs).Pairs.AllocatorInstance.SecondaryData =
       (ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>)0x0;
  (this->CachedPtrs).Pairs.ArrayNum = 0;
  (this->CachedPtrs).Pairs.ArrayMax = 8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UMovieSceneSequence *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->RootSequence).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UMovieSceneSequence *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&(this->RootSequence).WeakPtr,(FObjectPtr)local_res8);
  (this->RootCompiledDataID).Value = param_2.Value;
  (this->RootID).Value = 0;
  (this->LastFrameMetaData).ActiveSequences.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastFrameMetaData).ActiveSequences.ArrayNum = 0;
  (this->LastFrameMetaData).ActiveSequences.ArrayMax = 0;
  (this->LastFrameMetaData).ActiveEntities.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastFrameMetaData).ActiveEntities.ArrayNum = 0;
  (this->LastFrameMetaData).ActiveEntities.ArrayMax = 0;
  (this->ThisFrameMetaData).ActiveSequences.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ThisFrameMetaData).ActiveSequences.ArrayNum = 0;
  (this->ThisFrameMetaData).ActiveSequences.ArrayMax = 0;
  (this->ThisFrameMetaData).ActiveEntities.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ThisFrameMetaData).ActiveEntities.ArrayNum = 0;
  (this->ThisFrameMetaData).ActiveEntities.ArrayMax = 0;
  (this->CompiledDataManager).field0_0x0.DebugPtr = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_3 != (UMovieSceneCompiledDataManager *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_3);
  }
  (this->RootOverridePath).PathToRoot.AllocatorInstance.SecondaryData =
       (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0;
  (this->RootOverridePath).PathToRoot.ArrayNum = 0;
  (this->RootOverridePath).PathToRoot.ArrayMax = 8;
  (this->ExecutionTokens).OrderedTokens.ArrayNum = 0;
  (this->ExecutionTokens).OrderedTokens.ArrayMax = 0;
  *(undefined8 *)&(this->ExecutionTokens).SharedTokens.field_0x8 = 0;
  (this->ExecutionTokens).OrderedTokens.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(this->ExecutionTokens).SharedTokens = 0;
  *(undefined8 *)&(this->ExecutionTokens).SharedTokens.field_0x20 = 0;
  *(undefined4 *)&(this->ExecutionTokens).SharedTokens.field_0x28 = 0;
  *(undefined4 *)&(this->ExecutionTokens).SharedTokens.field_0x2c = 0x80;
  *(undefined4 *)&(this->ExecutionTokens).SharedTokens.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExecutionTokens).SharedTokens.field_0x34 = 0;
  *(undefined8 *)&(this->ExecutionTokens).SharedTokens.field_0x40 = 0;
  *(undefined4 *)&(this->ExecutionTokens).SharedTokens.field_0x48 = 0;
  *(undefined8 *)&(this->ExecutionTokens).BlendingAccumulator.Actuators.field_0x8 = 0;
  *(undefined8 *)&(this->ExecutionTokens).BlendingAccumulator.Actuators = 0;
  *(undefined8 *)&(this->ExecutionTokens).BlendingAccumulator.Actuators.field_0x20 = 0;
  *(undefined4 *)&(this->ExecutionTokens).BlendingAccumulator.Actuators.field_0x28 = 0;
  *(undefined4 *)&(this->ExecutionTokens).BlendingAccumulator.Actuators.field_0x2c = 0x80;
  *(undefined4 *)&(this->ExecutionTokens).BlendingAccumulator.Actuators.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ExecutionTokens).BlendingAccumulator.Actuators.field_0x34 = 0;
  *(undefined8 *)&(this->ExecutionTokens).BlendingAccumulator.Actuators.field_0x40 = 0;
  *(undefined4 *)&(this->ExecutionTokens).BlendingAccumulator.Actuators.field_0x48 = 0;
  *(undefined8 *)&(this->ExecutionTokens).BlendingAccumulator.OperandToBlendState.field_0x8 = 0;
  *(undefined8 *)&(this->ExecutionTokens).BlendingAccumulator.OperandToBlendState = 0;
  *(undefined8 *)&(this->ExecutionTokens).BlendingAccumulator.OperandToBlendState.field_0x20 = 0;
  *(undefined4 *)&(this->ExecutionTokens).BlendingAccumulator.OperandToBlendState.field_0x28 = 0;
  *(undefined4 *)&(this->ExecutionTokens).BlendingAccumulator.OperandToBlendState.field_0x2c = 0x80;
  *(undefined4 *)&(this->ExecutionTokens).BlendingAccumulator.OperandToBlendState.field_0x30 =
       0xffffffff;
  *(undefined4 *)&(this->ExecutionTokens).BlendingAccumulator.OperandToBlendState.field_0x34 = 0;
  *(undefined8 *)&(this->ExecutionTokens).BlendingAccumulator.OperandToBlendState.field_0x40 = 0;
  *(undefined4 *)&(this->ExecutionTokens).BlendingAccumulator.OperandToBlendState.field_0x48 = 0;
  (this->ExecutionTokens).BlendingAccumulator.UnboundBlendState.TokensToBlend.ArrayNum = 0;
  (this->ExecutionTokens).BlendingAccumulator.UnboundBlendState.TokensToBlend.ArrayMax = 0;
  (this->ExecutionTokens).BlendingAccumulator.UnboundBlendState.TokensToBlend.AllocatorInstance.Data
       = (FScriptContainerElement *)0x0;
  (this->ExecutionTokens).Operand.ObjectBindingID.A = 0;
  (this->ExecutionTokens).Operand.ObjectBindingID.B = 0;
  (this->ExecutionTokens).Operand.ObjectBindingID.C = 0;
  (this->ExecutionTokens).Operand.ObjectBindingID.D = 0;
  (this->ExecutionTokens).Operand.SequenceID.Value = 0;
  (this->ExecutionTokens).Scope.Key.SequenceID = 0xffffffff;
  (this->ExecutionTokens).Scope.Key.TrackIdentifier = 0xffffffff;
  (this->ExecutionTokens).Scope.Key.SectionIndex = 0xffffffff;
  (this->ExecutionTokens).Scope.CompletionMode = KeepState;
  (this->ExecutionTokens).Context.bHasJumped = false;
  (this->ExecutionTokens).Context.bHasPostRollStartTime = false;
  (this->ExecutionTokens).Context.bHasPreRollEndTime = false;
  (this->ExecutionTokens).Context.bSectionPostRoll = false;
  (this->ExecutionTokens).Context.bSectionPreRoll = false;
  (this->ExecutionTokens).Context.bSilent = false;
  (this->ExecutionTokens).Context.bHasLooped = false;
  local_58 = CONCAT31(local_58._1_3_,1);
  uStack_4c = CONCAT31(uStack_4c._1_3_,1);
  (this->ExecutionTokens).Context._padding_ = (ulonglong)local_58;
  (this->ExecutionTokens).Context._padding_ = (ulonglong)uStack_4c << 0x20;
  (this->ExecutionTokens).Context.Status = Stopped;
  (this->ExecutionTokens).Context._padding_ = 0;
  (this->ExecutionTokens).Context._padding_ = 0x10000ea60;
  (this->ExecutionTokens).Context.HierarchicalBias = 0;
  (this->ExecutionTokens).Context._padding_ = -0x8000000000000000;
  (this->ExecutionTokens).Context.RootToSequenceTransform.LinearTransform.TimeScale = 1.0;
  (this->ExecutionTokens).Context.RootToSequenceTransform.LinearTransform.Offset.FrameNumber = 0;
  (this->ExecutionTokens).Context.RootToSequenceTransform.LinearTransform.Offset.SubFrame = 0.0;
  (this->ExecutionTokens).Context.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ExecutionTokens).Context.RootToSequenceTransform.NestedTransforms.ArrayNum = 0;
  (this->ExecutionTokens).Context.RootToSequenceTransform.NestedTransforms.ArrayMax = 0;
  (this->ExecutionTokens).Context.RootToSequenceWarpCounter._padding_ = 0;
  (this->ExecutionTokens).Context.RootToSequenceWarpCounter._padding_ = 0;
  *(undefined1 *)&(this->ExecutionTokens).Context.RootToSequenceWarpCounter._padding_ = 0;
  (this->ExecutionTokens).Context.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ExecutionTokens).Context.RootToSequenceWarpCounter.WarpCounts.ArrayNum = 0;
  (this->ExecutionTokens).Context.RootToSequenceWarpCounter.WarpCounts.ArrayMax = 0;
  (this->ExecutionTokens).Context.PrePostRollStartEndTime.Value = -0x80000000;
  this->CachedReallocationVersion = 0;
  return this;
}

// ~FMovieSceneTrackEvaluator @ 1461856e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMovieSceneTrackEvaluator::~FMovieSceneTrackEvaluator(FMovieSceneTrackEvaluator *this)

{
  ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair> FVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_> FVar3;
  
  this->_padding_ = (longlong)&___7FMovieSceneTrackEvaluator__6B_;
  if (((GExitPurge == false) && ((this->ThisFrameMetaData).ActiveEntities.ArrayNum != 0)) &&
     (5 < (byte)LogMovieSceneECS._0_1_)) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovieSceneECS);
  }
  FMovieSceneExecutionTokens::~FMovieSceneExecutionTokens(&this->ExecutionTokens);
  FVar1 = (this->RootOverridePath).PathToRoot.AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  pFVar2 = (this->ThisFrameMetaData).ActiveEntities.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ThisFrameMetaData).ActiveSequences.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->LastFrameMetaData).ActiveEntities.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->LastFrameMetaData).ActiveSequences.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FVar3 = (this->CachedPtrs).Pairs.AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>
                )0x0) {
    FMemory::Free((void *)FVar3);
  }
  this->_padding_ = (longlong)&___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)this);
  return;
}

// AddReferencedObjects @ 14618f140

void __thiscall
FMovieSceneTrackEvaluator::AddReferencedObjects
          (FMovieSceneTrackEvaluator *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014618f156. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->CompiledDataManager,0,0);
  return;
}

// CallSetupTearDown @ 146195fc0

void __thiscall
FMovieSceneTrackEvaluator::CallSetupTearDown
          (FMovieSceneTrackEvaluator *this,IMovieScenePlayer *param_1,
          FDelayedPreAnimatedStateRestore *param_2)

{
  TArray<FMovieSceneEvaluationKey,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair> FVar5;
  ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_> FVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  FDelayedPreAnimatedStateRestore *pFVar9;
  FPreAnimatedTemplateCaptureSources *pFVar10;
  FMovieSceneTrackIdentifier FVar11;
  bool bVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  FMovieSceneEvaluationState *pFVar16;
  ulonglong uVar17;
  FMovieSceneEvalTemplate *pFVar18;
  ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_> FVar19;
  uint *puVar20;
  FMovieSceneEvaluationTrack *pFVar21;
  FMovieSceneTrackImplementationPtr *pFVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  FMovieSceneSequenceID FVar26;
  uchar *puVar27;
  uint *puVar28;
  FMovieSceneEvaluationTrack *pFVar29;
  uint *puVar30;
  ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair> FVar31;
  FMovieSceneEvaluationTrack *this_00;
  ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_> FVar32;
  uint uVar33;
  longlong *plVar34;
  FMovieSceneEvaluationKey *pFVar35;
  ForAnyElementType FVar36;
  undefined1 local_res8 [8];
  IMovieScenePlayer *local_res10;
  FDelayedPreAnimatedStateRestore *local_res18;
  undefined1 local_res20 [8];
  undefined1 local_108;
  undefined1 local_107 [3];
  FRootInstanceHandle local_104;
  uint local_100;
  undefined8 local_f8;
  uint local_f0;
  IMovieScenePlayer *local_e8;
  TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
  *local_e0;
  TMap<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>_>
  *pTStack_d8;
  undefined8 local_d0;
  uint local_c8;
  FMovieSceneEvaluationKey FStack_c4;
  undefined8 local_b8;
  FPreAnimatedTemplateCaptureSources *local_a8;
  uint local_a0;
  FScriptContainerElement *local_98;
  TArray<FMovieSceneOrderedEvaluationKey,TSizedDefaultAllocator<32>_> local_90;
  TArray<FMovieSceneOrderedEvaluationKey,TSizedDefaultAllocator<32>_> local_80;
  uint local_68;
  
  local_res10 = param_1;
  local_res18 = param_2;
  plVar14 = (longlong *)(**(code **)(param_1->_padding_ + 0x18))(param_1);
  local_b8 = *(FPreAnimatedTemplateCaptureSources **)(*plVar14 + 0x488);
  lVar15 = (**(code **)(param_1->_padding_ + 0x18))(param_1);
  if (*(longlong *)(lVar15 + 8) == 0) {
    local_104 = (FRootInstanceHandle)0xffff;
  }
  else {
    local_104 = *(FRootInstanceHandle *)(*(longlong *)(lVar15 + 8) + 0x30);
  }
  local_d0 = (FPreAnimatedTemplateCaptureSources *)0xffffffffffffffff;
  local_e0 = (TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
              *)0x0;
  pTStack_d8 = (TMap<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>_>
                *)0x0;
  local_c8 = 0xffffffff;
  FStack_c4.SequenceID.Value = 0xffffffff;
  FStack_c4.TrackIdentifier.Value = 0xffffffff;
  FStack_c4.SectionIndex = 0xffffffff;
  local_e8 = param_1;
  pFVar16 = IMovieScenePlayer::GetEvaluationState(param_1);
  if (pFVar16 != (FMovieSceneEvaluationState *)0x0) {
    local_e0 = (TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
                *)&pFVar16->PersistentEntityData;
    pTStack_d8 = &pFVar16->PersistentSharedData;
  }
  local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_80.ArrayNum = 0;
  local_80.ArrayMax = 0;
  local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.ArrayNum = 0;
  local_90.ArrayMax = 0;
  FMovieSceneEvaluationMetaData::DiffEntities
            (&this->ThisFrameMetaData,&this->LastFrameMetaData,&local_90,&local_80);
  uVar17 = (ulonglong)local_80.ArrayNum;
  local_98 = local_80.AllocatorInstance.Data + uVar17 * 0x10;
  local_100 = local_80.ArrayNum;
  FVar36.Data = local_80.AllocatorInstance.Data;
  while( true ) {
    pFVar7 = local_98;
    if (local_80.ArrayNum != (int)uVar17) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMovieSceneOrderedEvaluationKey,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (FVar36.Data == pFVar7) break;
    local_f8 = *(FPreAnimatedTemplateCaptureSources **)FVar36.Data;
    FVar31 = (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)
             &this->RootOverridePath;
    iVar13 = (this->RootOverridePath).PathToRoot.ArrayNum;
    uVar4 = *(uint *)(FVar36.Data + 8);
    FVar26.Value = local_f8._0_4_;
    local_f0 = uVar4;
    if (iVar13 != 0) {
      FVar5 = (this->RootOverridePath).PathToRoot.AllocatorInstance.SecondaryData;
      if (FVar5 != (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0) {
        FVar31 = FVar5;
      }
      FVar5 = (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)
              ((longlong)FVar31 + (longlong)iVar13 * 8);
      while( true ) {
        if ((this->RootOverridePath).PathToRoot.ArrayNum != iVar13) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<UE::MovieScene::FSubSequencePath::FSequenceIDPair_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_res20);
        }
        if (FVar31 == FVar5) break;
        uVar23 = (uint)*(ulonglong *)FVar31;
        if (FVar26.Value == 0) {
          FVar31 = (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)
                   ((longlong)FVar31 + 8);
          FVar26.Value = uVar23;
        }
        else {
          uVar24 = FVar26.Value - uVar23 ^ (uint)(*(ulonglong *)FVar31 >> 0xd) & 0x7ffff;
          uVar33 = (-0x61c88647 - uVar23) - uVar24 ^ uVar24 << 8;
          uVar25 = (uVar23 - uVar33) - uVar24 ^ uVar33 >> 0xd;
          uVar23 = (uVar24 - uVar25) - uVar33 ^ uVar25 >> 0xc;
          uVar33 = (uVar33 - uVar25) - uVar23 ^ uVar23 << 0x10;
          uVar24 = (uVar25 - uVar33) - uVar23 ^ uVar33 >> 5;
          uVar23 = (uVar23 - uVar24) - uVar33 ^ uVar24 >> 3;
          uVar25 = (uVar33 - uVar23) - uVar24 ^ uVar23 << 10;
          FVar26.Value = (uVar24 - uVar25) - uVar23 ^ uVar25 >> 0xf;
          FVar31 = (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)
                   ((longlong)FVar31 + 8);
        }
      }
    }
    FVar32 = (ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>)
             &this->CachedPtrs;
    local_f8 = (FPreAnimatedTemplateCaptureSources *)CONCAT44(local_f8._4_4_,FVar26.Value);
    FVar6 = (this->CachedPtrs).Pairs.AllocatorInstance.SecondaryData;
    uVar23 = (this->CachedPtrs).Pairs.ArrayNum;
    FVar19 = FVar32;
    if (FVar6 != (ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>
                  )0x0) {
      FVar19 = FVar6;
    }
    iVar13 = 0;
    uVar24 = uVar23;
    if (0 < (int)uVar23) {
      do {
        iVar3 = (uVar24 >> 1) + iVar13;
        if (*(uint *)((longlong)iVar3 * 0x20 + (longlong)FVar19) < FVar26.Value) {
          iVar13 = iVar3 + (uVar24 & 1);
        }
        uVar25 = uVar24 >> 1;
        uVar24 = uVar24 >> 1;
      } while (uVar25 != 0);
    }
    if (iVar13 < (int)uVar23) {
      FVar19 = FVar32;
      if (FVar6 != (ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>
                    )0x0) {
        FVar19 = FVar6;
      }
      if ((FVar26.Value < *(uint *)((longlong)FVar19 + (longlong)iVar13 * 0x20)) || (iVar13 == -1))
      goto LAB_146196660;
      if ((iVar13 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar10 = local_f8;
      FVar6 = (this->CachedPtrs).Pairs.AllocatorInstance.SecondaryData;
      if (FVar6 != (ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>
                    )0x0) {
        FVar32 = FVar6;
      }
      if ((uchar *)((longlong)FVar32 + 8) + (longlong)iVar13 * 0x20 == (uchar *)0x0)
      goto LAB_146196660;
      plVar14 = *(longlong **)((uchar *)((longlong)FVar32 + 8) + (longlong)iVar13 * 0x20 + 8);
      FVar11.Value = local_f8._4_4_;
      if ((int)plVar14[1] != *(int *)((longlong)plVar14 + 0x34)) {
        plVar34 = plVar14 + 7;
        if ((longlong *)plVar14[8] != (longlong *)0x0) {
          plVar34 = (longlong *)plVar14[8];
        }
        uVar23 = *(uint *)((longlong)plVar34 +
                          (ulonglong)((int)plVar14[9] - 1U & local_f8._4_4_) * 4);
        if (uVar23 != 0xffffffff) {
          do {
            puVar20 = (uint *)((longlong)(int)uVar23 * 0x88 + *plVar14);
            if (*puVar20 == local_f8._4_4_) {
              this_00 = (FMovieSceneEvaluationTrack *)(puVar20 + 2);
              if (puVar20 == (uint *)0x0) {
                this_00 = (FMovieSceneEvaluationTrack *)0x0;
              }
              if (this_00 != (FMovieSceneEvaluationTrack *)0x0) goto LAB_14619639a;
              break;
            }
            uVar23 = puVar20[0x20];
          } while (uVar23 != 0xffffffff);
        }
      }
      pFVar29 = (FMovieSceneEvaluationTrack *)0x0;
      pFVar21 = pFVar29;
      if ((int)plVar14[0xb] != *(int *)((longlong)plVar14 + 0x84)) {
        plVar34 = plVar14 + 0x11;
        if ((longlong *)plVar14[0x12] != (longlong *)0x0) {
          plVar34 = (longlong *)plVar14[0x12];
        }
        uVar23 = *(uint *)((longlong)plVar34 +
                          (ulonglong)((int)plVar14[0x13] - 1U & local_f8._4_4_) * 4);
        if (uVar23 != 0xffffffff) {
          do {
            pFVar21 = (FMovieSceneEvaluationTrack *)((longlong)(int)uVar23 * 0x88 + plVar14[10]);
            if ((pFVar21->ObjectBindingID).A == local_f8._4_4_) break;
            uVar23 = pFVar21[1].ObjectBindingID.C;
            pFVar21 = pFVar29;
          } while (uVar23 != 0xffffffff);
        }
      }
      this_00 = (FMovieSceneEvaluationTrack *)&(pFVar21->ObjectBindingID).C;
      if (pFVar21 == (FMovieSceneEvaluationTrack *)0x0) {
        this_00 = pFVar29;
      }
LAB_14619639a:
      if ((int)plVar14[0xb] != *(int *)((longlong)plVar14 + 0x84)) {
        plVar34 = plVar14 + 0x11;
        if ((longlong *)plVar14[0x12] != (longlong *)0x0) {
          plVar34 = (longlong *)plVar14[0x12];
        }
        iVar13 = *(int *)((longlong)plVar34 +
                         (ulonglong)((int)plVar14[0x13] - 1U & local_f8._4_4_) * 4);
        if (iVar13 != -1) {
          do {
            if (*(uint *)((longlong)iVar13 * 0x88 + plVar14[10]) == local_f8._4_4_)
            goto LAB_146196402;
            iVar13 = *(int *)((longlong)iVar13 * 0x88 + 0x80 + plVar14[10]);
          } while (iVar13 != -1);
        }
      }
      iVar13 = -1;
LAB_146196402:
      local_d0 = local_f8;
      local_c8 = 0xffffffff;
      local_68 = uVar4;
      if (uVar4 == 0xffffffff) {
        if ((this_00 != (FMovieSceneEvaluationTrack *)0x0) &&
           (((this_00->TrackTemplate).field_0x30 & 1) != 0)) {
          pFVar22 = &this_00->TrackTemplate;
          if (((this_00->TrackTemplate).field_0x30 & 2) == 0) {
            pFVar22 = *(FMovieSceneTrackImplementationPtr **)pFVar22;
          }
          if ((pFVar22->field_0x8 & 2) != 0) {
            (**(code **)(*(longlong *)pFVar22 + 0x18))(pFVar22,&local_e8,local_res10);
          }
        }
        if (local_e0 ==
            (TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
             *)0x0) {
          bVar12 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<2208776142733705550>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PersistentEvaluationData.h"
                              ,0x14e,"EntityData");
          if (bVar12) {
code_r0x000146196554:
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        else if (*(int *)&(local_e0->Elements).field_0x8 != *(int *)&(local_e0->Elements).field_0x34
                ) {
          pFVar35 = (FMovieSceneEvaluationKey *)&local_d0;
          uVar23 = ~local_d0._4_4_ ^ local_c8 ^ local_d0._0_4_;
LAB_14619657e:
          TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
          ::RemoveImpl<FMovieSceneEvaluationKey>(local_e0,uVar23,pFVar35);
        }
      }
      else if ((this_00 != (FMovieSceneEvaluationTrack *)0x0) &&
              (bVar12 = FMovieSceneEvaluationTrack::HasChildTemplate(this_00,uVar4), bVar12)) {
        FStack_c4.SequenceID.Value = (uint)pFVar10;
        FStack_c4.TrackIdentifier.Value = FVar11.Value;
        FStack_c4.SectionIndex = uVar4;
        pFVar18 = FMovieSceneEvaluationTrack::GetChildTemplate(this_00,uVar4);
        if ((pFVar18->_padding_ & 2) != 0) {
          (**(code **)(pFVar18->_padding_ + 0x18))(pFVar18,&local_e8,local_res10);
        }
        if (local_e0 ==
            (TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
             *)0x0) {
          bVar12 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<2208776142733705550>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PersistentEvaluationData.h"
                              ,0x14e,"EntityData");
          if (bVar12) goto code_r0x000146196554;
        }
        else if (*(int *)&(local_e0->Elements).field_0x8 != *(int *)&(local_e0->Elements).field_0x34
                ) {
          pFVar35 = &FStack_c4;
          uVar23 = ~FStack_c4.TrackIdentifier.Value ^ FStack_c4.SectionIndex ^
                   FStack_c4.SequenceID.Value;
          goto LAB_14619657e;
        }
      }
      pFVar9 = local_res18;
      if ((iVar13 == -1) || (local_res18 == (FDelayedPreAnimatedStateRestore *)0x0))
      goto LAB_146196660;
      pFVar7 = (local_res18->KeysToRestore).AllocatorInstance.Data;
      pTVar1 = &local_res18->KeysToRestore;
      local_a8 = pFVar10;
      local_a0 = uVar4;
      if ((pFVar7 <= (FScriptContainerElement *)&local_a8) &&
         (((FScriptContainerElement *)&local_a8 <
           pFVar7 + (longlong)(local_res18->KeysToRestore).ArrayMax * 0xc &&
          (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar12)))) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar13 = (pFVar9->KeysToRestore).ArrayNum;
      piVar2 = &(pFVar9->KeysToRestore).ArrayMax;
      if (iVar13 == *piVar2) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&pTVar1->AllocatorInstance,piVar2);
      }
      FVar36.Data = FVar36.Data + 0x10;
      (pFVar9->KeysToRestore).ArrayNum = iVar13 + 1;
      pFVar7 = (pTVar1->AllocatorInstance).Data;
      *(FPreAnimatedTemplateCaptureSources **)(pFVar7 + (longlong)iVar13 * 0xc) = local_a8;
      *(uint *)(pFVar7 + (longlong)iVar13 * 0xc + 8) = local_a0;
      uVar17 = (ulonglong)local_100;
    }
    else {
LAB_146196660:
      if (local_b8 != (FPreAnimatedTemplateCaptureSources *)0x0) {
        UE::MovieScene::FPreAnimatedTemplateCaptureSources::StopTrackingCaptureSource
                  (local_b8,(FMovieSceneEvaluationKey *)&local_f8,local_104);
      }
      FVar36.Data = FVar36.Data + 0x10;
      uVar17 = (ulonglong)local_100;
    }
  }
  uVar17 = (ulonglong)local_90.ArrayNum;
  local_98 = local_90.AllocatorInstance.Data + uVar17 * 0x10;
  local_100 = local_90.ArrayNum;
  FVar36.Data = local_90.AllocatorInstance.Data;
  do {
    pFVar7 = local_98;
    if (local_90.ArrayNum != (int)uVar17) {
      local_108 = 0;
      `TCheckedPointerIterator<FMovieSceneOrderedEvaluationKey,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_108);
    }
    if (FVar36.Data == pFVar7) {
      if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.AllocatorInstance.Data);
      }
      if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.AllocatorInstance.Data);
      }
      return;
    }
    local_b8 = *(FPreAnimatedTemplateCaptureSources **)FVar36.Data;
    FVar31 = (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)
             &this->RootOverridePath;
    iVar13 = (this->RootOverridePath).PathToRoot.ArrayNum;
    uVar4 = *(uint *)(FVar36.Data + 8);
    uVar23 = (uint)local_b8;
    if (iVar13 != 0) {
      FVar5 = (this->RootOverridePath).PathToRoot.AllocatorInstance.SecondaryData;
      if (FVar5 != (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0) {
        FVar31 = FVar5;
      }
      FVar5 = (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)
              ((longlong)FVar31 + (longlong)iVar13 * 8);
      while( true ) {
        if ((this->RootOverridePath).PathToRoot.ArrayNum != iVar13) {
          local_107[0] = 0;
          `TCheckedPointerIterator<UE::MovieScene::FSubSequencePath::FSequenceIDPair_const_,int,0>::
          operator!='::__l2::<lambda_1>::operator()(local_107);
        }
        if (FVar31 == FVar5) break;
        uVar24 = (uint)*(ulonglong *)FVar31;
        if (uVar23 == 0) {
          FVar31 = (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)
                   ((longlong)FVar31 + 8);
          uVar23 = uVar24;
        }
        else {
          uVar23 = uVar23 - uVar24 ^ (uint)(*(ulonglong *)FVar31 >> 0xd) & 0x7ffff;
          uVar25 = (-0x61c88647 - uVar23) - uVar24 ^ uVar23 << 8;
          uVar24 = (uVar24 - uVar25) - uVar23 ^ uVar25 >> 0xd;
          uVar23 = (uVar23 - uVar24) - uVar25 ^ uVar24 >> 0xc;
          uVar25 = (uVar25 - uVar24) - uVar23 ^ uVar23 << 0x10;
          uVar24 = (uVar24 - uVar25) - uVar23 ^ uVar25 >> 5;
          uVar23 = (uVar23 - uVar24) - uVar25 ^ uVar24 >> 3;
          uVar25 = (uVar25 - uVar23) - uVar24 ^ uVar23 << 10;
          uVar23 = (uVar24 - uVar25) - uVar23 ^ uVar25 >> 0xf;
          FVar31 = (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)
                   ((longlong)FVar31 + 8);
        }
      }
    }
    FVar32 = (ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>)
             &this->CachedPtrs;
    local_b8 = (FPreAnimatedTemplateCaptureSources *)CONCAT44(local_b8._4_4_,uVar23);
    FVar6 = (this->CachedPtrs).Pairs.AllocatorInstance.SecondaryData;
    uVar24 = (this->CachedPtrs).Pairs.ArrayNum;
    FVar19 = FVar32;
    if (FVar6 != (ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>
                  )0x0) {
      FVar19 = FVar6;
    }
    iVar13 = 0;
    uVar25 = uVar24;
    if (0 < (int)uVar24) {
      do {
        iVar3 = (uVar25 >> 1) + iVar13;
        if (*(uint *)((longlong)iVar3 * 0x20 + (longlong)FVar19) < uVar23) {
          iVar13 = iVar3 + (uVar25 & 1);
        }
        uVar33 = uVar25 >> 1;
        uVar25 = uVar25 >> 1;
      } while (uVar33 != 0);
    }
    puVar27 = (uchar *)0x0;
    if (iVar13 < (int)uVar24) {
      FVar19 = FVar32;
      if (FVar6 != (ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>
                    )0x0) {
        FVar19 = FVar6;
      }
      if ((uVar23 < *(uint *)((longlong)iVar13 * 0x20 + (longlong)FVar19)) || (iVar13 == -1))
      goto LAB_146196894;
      if ((iVar13 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar6 = (this->CachedPtrs).Pairs.AllocatorInstance.SecondaryData;
      if (FVar6 != (ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>
                    )0x0) {
        FVar32 = FVar6;
      }
      puVar27 = (uchar *)((longlong)FVar32 + 8) + (longlong)iVar13 * 0x20;
      if (puVar27 == (uchar *)0x0) goto LAB_146196894;
    }
    else {
LAB_146196894:
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Value != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                          ,0x141,L"");
      if (bVar12) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    plVar14 = *(longlong **)(puVar27 + 8);
    if ((int)plVar14[1] != *(int *)((longlong)plVar14 + 0x34)) {
      plVar34 = plVar14 + 7;
      if ((longlong *)plVar14[8] != (longlong *)0x0) {
        plVar34 = (longlong *)plVar14[8];
      }
      uVar23 = *(uint *)((longlong)plVar34 + (ulonglong)((int)plVar14[9] - 1U & local_b8._4_4_) * 4)
      ;
      if (uVar23 != 0xffffffff) {
        do {
          puVar20 = (uint *)((longlong)(int)uVar23 * 0x88 + *plVar14);
          if (*puVar20 == local_b8._4_4_) {
            puVar28 = puVar20 + 2;
            if (puVar20 == (uint *)0x0) {
              puVar28 = (uint *)0x0;
            }
            if (puVar28 != (uint *)0x0) goto LAB_146196983;
            break;
          }
          uVar23 = puVar20[0x20];
        } while (uVar23 != 0xffffffff);
      }
    }
    puVar30 = (uint *)0x0;
    puVar20 = puVar30;
    if ((int)plVar14[0xb] != *(int *)((longlong)plVar14 + 0x84)) {
      plVar34 = plVar14 + 0x11;
      if ((longlong *)plVar14[0x12] != (longlong *)0x0) {
        plVar34 = (longlong *)plVar14[0x12];
      }
      uVar23 = *(uint *)((longlong)plVar34 +
                        (ulonglong)((int)plVar14[0x13] - 1U & local_b8._4_4_) * 4);
      if (uVar23 != 0xffffffff) {
        do {
          puVar20 = (uint *)((longlong)(int)uVar23 * 0x88 + plVar14[10]);
          if (*puVar20 == local_b8._4_4_) break;
          uVar23 = puVar20[0x20];
          puVar20 = puVar30;
        } while (uVar23 != 0xffffffff);
      }
    }
    puVar28 = puVar20 + 2;
    if (puVar20 == (uint *)0x0) {
      puVar28 = puVar30;
    }
    if (puVar28 != (uint *)0x0) {
LAB_146196983:
      local_d0 = local_b8;
      local_c8 = 0xffffffff;
      local_68 = uVar4;
      if (uVar4 == 0xffffffff) {
        if ((puVar28[0x18] & 1) != 0) {
          puVar20 = puVar28 + 0xc;
          if ((puVar28[0x18] & 2) == 0) {
            puVar20 = *(uint **)puVar20;
          }
          if ((puVar20[2] & 1) != 0) {
            lVar15 = *(longlong *)puVar20;
            goto LAB_146196a88;
          }
        }
      }
      else {
        FStack_c4.SequenceID.Value = (uint)local_b8;
        uVar23 = 0;
        if ((int)uVar4 < (int)puVar28[10]) {
          uVar23 = ~uVar4 >> 0x1f;
        }
        FStack_c4.TrackIdentifier.Value = local_b8._4_4_;
        FStack_c4.SectionIndex = uVar4;
        if ((uVar23 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        puVar20 = (uint *)(*(longlong *)(puVar28 + 8) + (longlong)(int)uVar4 * 0x88);
        if (((puVar20[0x20] & 1) == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("bIsValid",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                ,0x97,
                                L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if ((puVar20[0x20] & 2) == 0) {
          puVar20 = *(uint **)puVar20;
        }
        if ((puVar20[2] & 1) != 0) {
          lVar15 = *(longlong *)puVar20;
LAB_146196a88:
          (**(code **)(lVar15 + 0x10))(puVar20,&local_e8,local_res10);
        }
      }
    }
    FVar36.Data = FVar36.Data + 0x10;
    uVar17 = (ulonglong)local_100;
  } while( true );
}

// ConstructEvaluationPtrCache @ 146198bd0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
FMovieSceneTrackEvaluator::ConstructEvaluationPtrCache(FMovieSceneTrackEvaluator *this)

{
  TObjectPtr<UMovieSceneCompiledDataManager> *pTVar1;
  undefined1 *puVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  UMovieSceneCompiledDataManager *pUVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FMovieSceneSequenceHierarchy *pFVar10;
  UMovieSceneSequence *pUVar11;
  TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs> *pTVar12;
  FMovieSceneEvaluationTemplate *pFVar13;
  UObject *pUVar14;
  longlong lVar15;
  uint *puVar16;
  int iVar17;
  uint *puVar18;
  uint uVar19;
  FMovieSceneSequenceID *pFVar20;
  int iVar21;
  undefined1 *puVar22;
  int iVar23;
  uint uVar24;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_res18;
  undefined4 local_9c;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  pTVar1 = &this->CompiledDataManager;
  if (((this->CachedPtrs).Pairs.ArrayNum == 0) ||
     (this->CachedReallocationVersion < ((pTVar1->field0_0x0).DebugPtr)->ReallocationVersion)) {
    if (((pTVar1->field0_0x0).DebugPtr == (UMovieSceneCompiledDataManager *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("CompiledDataManager",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\Instances\\MovieSceneTrackEvaluator.cpp"
                           ,0x9b,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar10 = UMovieSceneCompiledDataManager::FindHierarchy
                        ((pTVar1->field0_0x0).DebugPtr,
                         (FMovieSceneCompiledDataID)(this->RootCompiledDataID).Value);
    if (pFVar10 != (FMovieSceneSequenceHierarchy *)0x0) {
      TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(pFVar10->SubSequences).field_0x10;
      iVar17 = *(int *)&(pFVar10->SubSequences).field_0x28;
      iVar21 = 0;
      uVar8 = 1;
      iVar23 = 0;
      iVar9 = iVar21;
      if (iVar17 != 0) {
        puVar16 = *(uint **)&(pFVar10->SubSequences).field_0x20;
        if (puVar16 == (uint *)0x0) {
          puVar16 = (uint *)TStack_60.Array;
        }
        uVar19 = *puVar16;
        iVar23 = 0;
        iVar21 = 0;
        while (uVar19 == 0) {
          lVar15 = (longlong)iVar21;
          iVar23 = iVar23 + 0x20;
          iVar21 = iVar21 + 1;
          iVar9 = iVar17;
          if ((int)(iVar17 + -1 + (iVar17 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_146198cfe;
          uVar19 = puVar16[lVar15 + 1];
        }
        uVar8 = -uVar19 & uVar19;
        uVar3 = (ulonglong)uVar8 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        local_res18 = (int)lVar15;
        iVar9 = iVar23 + -1 + local_res18;
        if (iVar17 < iVar9) {
          iVar9 = iVar17;
        }
      }
LAB_146198cfe:
      puVar2 = &(pFVar10->SubSequences).field_0x10;
      uVar19 = *(uint *)&(pFVar10->SubSequences).field_0x28;
      TStack_60.CurrentBitIndex = iVar9;
      TStack_60.UnvisitedBitMask = 0xffffffff;
      uVar24 = uVar19 & 0xffffffe0;
      TStack_60._padding_ = CONCAT44(uVar8,iVar21);
      iVar17 = (int)uVar19 >> 5;
      TStack_60._28_4_ = local_9c;
      TStack_60.BaseBitIndex = iVar23;
      uStack_40 = CONCAT44(uStack_6c,
                           *(int *)&(pFVar10->SubSequences).field_0x8 -
                           *(int *)&(pFVar10->SubSequences).field_0x34);
      if (((int)uVar19 < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar8 = *(uint *)&(pFVar10->SubSequences).field_0x28;
      if (uVar19 != uVar8) {
        puVar4 = *(undefined1 **)&(pFVar10->SubSequences).field_0x20;
        puVar22 = puVar2;
        if (puVar4 != (undefined1 *)0x0) {
          puVar22 = puVar4;
        }
        uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar17 * 4);
        while (uVar19 == 0) {
          lVar15 = (longlong)iVar17;
          uVar24 = uVar24 + 0x20;
          iVar17 = iVar17 + 1;
          uVar19 = uVar8;
          if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
          goto LAB_146198e10;
          uVar19 = *(uint *)(puVar22 + lVar15 * 4 + 4);
        }
        uVar3 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
        lVar15 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar19 = (int)lVar15 + -1 + uVar24;
        if ((int)uVar8 < (int)uVar19) {
          uVar19 = uVar8;
        }
      }
LAB_146198e10:
      while( true ) {
        if (*(int *)&(pFVar10->SubSequences).field_0x8 - *(int *)&(pFVar10->SubSequences).field_0x34
            != (int)uStack_40) {
          `TSparseArray<TSparseSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSubSequenceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if ((TStack_60.CurrentBitIndex == uVar19) &&
           (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) break;
        pFVar20 = (FMovieSceneSequenceID *)
                  ((longlong)TStack_60.CurrentBitIndex * 0x120 + *(longlong *)&pFVar10->SubSequences
                  );
        pUVar11 = FMovieSceneSubSequenceData::GetSequence
                            ((FMovieSceneSubSequenceData *)(pFVar20 + 2));
        UMovieSceneCompiledDataManager::FindDataID
                  ((this->CompiledDataManager).field0_0x0.DebugPtr,
                   (UMovieSceneSequence *)&local_res10);
        pUVar5 = (this->CompiledDataManager).field0_0x0.DebugPtr;
        if (*(int *)&(pUVar5->TrackTemplates).field_0x8 !=
            *(int *)&(pUVar5->TrackTemplates).field_0x34) {
          puVar4 = *(undefined1 **)&(pUVar5->TrackTemplates).field_0x40;
          puVar22 = &(pUVar5->TrackTemplates).field_0x38;
          if (puVar4 != (undefined1 *)0x0) {
            puVar22 = puVar4;
          }
          uVar8 = *(uint *)(puVar22 +
                           (ulonglong)
                           (*(int *)&(pUVar5->TrackTemplates).field_0x48 - 1U & local_res10) * 4);
          if (uVar8 != 0xffffffff) {
            do {
              puVar16 = (uint *)((longlong)(int)uVar8 * 0x170 + *(longlong *)&pUVar5->TrackTemplates
                                );
              if (*puVar16 == local_res10) goto LAB_146198ee0;
              uVar8 = puVar16[0x5a];
            } while (uVar8 != 0xffffffff);
          }
        }
        puVar16 = (uint *)0x0;
LAB_146198ee0:
        puVar18 = puVar16 + 2;
        if (puVar16 == (uint *)0x0) {
          puVar18 = (uint *)0x0;
        }
        if (puVar18 != (uint *)0x0) {
          pTVar12 = TSortedMap<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>
                    ::AllocateMemoryForEmplace<FMovieSceneSequenceID_const_&>
                              (&this->CachedPtrs,pFVar20);
          *(uint *)pTVar12 = pFVar20->Value;
          *(UMovieSceneSequence **)&pTVar12->field_0x8 = pUVar11;
          *(uint **)&pTVar12->field_0x10 = puVar18;
          *(FMovieSceneSequenceID **)&pTVar12->field_0x18 = pFVar20 + 2;
        }
        TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
      }
    }
    pFVar13 = UMovieSceneCompiledDataManager::FindTrackTemplate
                        ((this->CompiledDataManager).field0_0x0.DebugPtr,
                         (FMovieSceneCompiledDataID)(this->RootCompiledDataID).Value);
    if (pFVar13 != (FMovieSceneEvaluationTemplate *)0x0) {
      pUVar14 = FWeakObjectPtr::Get(&(this->RootSequence).WeakPtr);
      pTVar12 = TSortedMap<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>
                ::AllocateMemoryForEmplace<FMovieSceneSequenceID_const_&>
                          (&this->CachedPtrs,&MovieSceneSequenceID::Root);
      *(undefined4 *)pTVar12 = 0;
      *(UObject **)&pTVar12->field_0x8 = pUVar14;
      *(FMovieSceneEvaluationTemplate **)&pTVar12->field_0x10 = pFVar13;
      *(undefined8 *)&pTVar12->field_0x18 = 0;
    }
  }
  return;
}

// CopyActuators @ 14619a320

void __thiscall
FMovieSceneTrackEvaluator::CopyActuators
          (FMovieSceneTrackEvaluator *this,FMovieSceneBlendingAccumulator *param_1)

{
  FMovieSceneBlendingAccumulator *pFVar1;
  
  pFVar1 = &(this->ExecutionTokens).BlendingAccumulator;
  if (param_1 != pFVar1) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(param_1->Actuators).field_0x38,
               (int *)&(param_1->Actuators).field_0x48,
               (ForElementType<FSetElementId> *)
               &(this->ExecutionTokens).BlendingAccumulator.Actuators.field_0x38,
               *(int *)&(this->ExecutionTokens).BlendingAccumulator.Actuators.field_0x48);
    TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)param_1,
                (TSparseArray<TSparseSetElement<TTuple<FMovieSceneBlendingActuatorID,TSharedRef<IMovieSceneBlendingActuator,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)pFVar1);
  }
  return;
}

// Evaluate @ 1461a1b40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

void __thiscall
FMovieSceneTrackEvaluator::Evaluate
          (FMovieSceneTrackEvaluator *this,FMovieSceneContext *param_1,IMovieScenePlayer *param_2,
          FMovieSceneSequenceID param_3)

{
  int *piVar1;
  FMovieSceneEvaluationMetaData *this_00;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  LARGE_INTEGER this_01;
  uint uVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_MovieSceneEval_TrackEvaluator> FVar16;
  UMovieSceneSequence *pUVar17;
  FMovieSceneSequenceHierarchy *pFVar18;
  uint *puVar19;
  FMovieSceneContext *pFVar20;
  FMovieSceneEvaluationGroup *pFVar21;
  FMovieSceneEvaluationState *this_02;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *pTVar22;
  UObject *pUVar23;
  longlong lVar24;
  FThreadStats *this_03;
  FThreadStatsPool *this_04;
  FMovieSceneSubSequenceData *this_05;
  undefined1 *puVar25;
  ulonglong uVar26;
  LARGE_INTEGER LVar27;
  ForAnyElementType FVar28;
  FRootInstanceHandle FVar29;
  bool bVar30;
  LARGE_INTEGER local_res8;
  FMovieSceneContext *local_res10;
  FColor_u_0 local_res20 [2];
  undefined1 local_108 [12];
  uint uStack_fc;
  FName local_f8;
  byte local_f0;
  FDelayedPreAnimatedStateRestore local_e8;
  LARGE_INTEGER local_d0;
  FMovieSceneContext local_c0;
  
  FVar16 = StatPtr_MovieSceneEval_TrackEvaluator;
  local_res10 = param_1;
  if (StatPtr_MovieSceneEval_TrackEvaluator ==
      (FThreadSafeStaticStat<FStat_MovieSceneEval_TrackEvaluator>)0x0) {
    pFVar15 = ::FName::FName((FName *)local_108,"MovieSceneEval_TrackEvaluator");
    FVar16 = (FThreadSafeStaticStat<FStat_MovieSceneEval_TrackEvaluator>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_MovieSceneEval_TrackEvaluator,*pFVar15
                        ,L"Template Evaluation Cost","STATGROUP_MovieSceneEval","STATCAT_Advanced",
                        L"Movie Scene Evaluation",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_d0.s.LowPart = 0;
  local_d0.s.HighPart = 0;
  bVar5 = false;
  bVar7 = false;
  LVar27 = *(LARGE_INTEGER *)FVar16;
  if ((LVar27.s.LowPart == 0) && (LVar27.s.HighPart == 0)) {
LAB_1461a1c8e:
    bVar6 = false;
    LVar27 = local_d0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar27;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\Instances\\MovieSceneTrackEvaluator.cpp"
                   ,99);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1461a1c8e;
    local_res8 = LVar27;
    FThreadStats::AddMessage((FName)LVar27.s,CycleScopeStart);
    bVar6 = true;
  }
  iVar8 = (this->LastFrameMetaData).ActiveSequences.ArrayNum;
  iVar9 = (this->LastFrameMetaData).ActiveSequences.ArrayMax;
  this_00 = &this->ThisFrameMetaData;
  pFVar2 = (this_00->ActiveSequences).AllocatorInstance.Data;
  iVar10 = (this->ThisFrameMetaData).ActiveSequences.ArrayNum;
  iVar11 = (this->ThisFrameMetaData).ActiveSequences.ArrayMax;
  pFVar4 = (this->ThisFrameMetaData).ActiveEntities.AllocatorInstance.Data;
  iVar12 = (this->ThisFrameMetaData).ActiveEntities.ArrayNum;
  iVar13 = (this->ThisFrameMetaData).ActiveEntities.ArrayMax;
  (this_00->ActiveSequences).AllocatorInstance.Data =
       (this->LastFrameMetaData).ActiveSequences.AllocatorInstance.Data;
  (this->ThisFrameMetaData).ActiveSequences.ArrayNum = iVar8;
  (this->ThisFrameMetaData).ActiveSequences.ArrayMax = iVar9;
  iVar8 = (this->LastFrameMetaData).ActiveEntities.ArrayNum;
  iVar9 = (this->LastFrameMetaData).ActiveEntities.ArrayMax;
  (this->ThisFrameMetaData).ActiveEntities.AllocatorInstance.Data =
       (this->LastFrameMetaData).ActiveEntities.AllocatorInstance.Data;
  (this->ThisFrameMetaData).ActiveEntities.ArrayNum = iVar8;
  (this->ThisFrameMetaData).ActiveEntities.ArrayMax = iVar9;
  (this->LastFrameMetaData).ActiveSequences.AllocatorInstance.Data = pFVar2;
  (this->LastFrameMetaData).ActiveSequences.ArrayNum = iVar10;
  (this->LastFrameMetaData).ActiveSequences.ArrayMax = iVar11;
  (this->LastFrameMetaData).ActiveEntities.AllocatorInstance.Data = pFVar4;
  (this->LastFrameMetaData).ActiveEntities.ArrayNum = iVar12;
  (this->LastFrameMetaData).ActiveEntities.ArrayMax = iVar13;
  FMovieSceneEvaluationMetaData::Reset(this_00);
  ConstructEvaluationPtrCache(this);
  if ((this->RootID).Value != param_3.Value) {
    CallSetupTearDown(this,param_2,(FDelayedPreAnimatedStateRestore *)0x0);
    FMovieSceneEvaluationMetaData::Reset(&this->LastFrameMetaData);
  }
  pUVar17 = (UMovieSceneSequence *)FWeakObjectPtr::Get(&(this->RootSequence).WeakPtr);
  if (pUVar17 != (UMovieSceneSequence *)0x0) {
    if (param_3.Value == 0) {
LAB_1461a1dc8:
      FScopeCycleCounterUObject::FScopeCycleCounterUObject
                ((FScopeCycleCounterUObject *)&local_f8,(UObjectBaseUtility *)pUVar17);
      pFVar20 = FMovieSceneContext::FMovieSceneContext(&local_c0,param_1);
      pFVar21 = SetupFrame(this,pUVar17,param_3,pFVar20);
      if (pFVar21 == (FMovieSceneEvaluationGroup *)0x0) {
        CallSetupTearDown(this,param_2,(FDelayedPreAnimatedStateRestore *)0x0);
      }
      else {
        local_e8.KeysToRestore.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_e8.KeysToRestore.ArrayNum = 0;
        local_e8.KeysToRestore.ArrayMax = 0;
        local_e8.Player = param_2;
        CallSetupTearDown(this,param_2,&local_e8);
        this_02 = IMovieScenePlayer::GetEvaluationState(param_2);
        if (this_02 != (FMovieSceneEvaluationState *)0x0) {
          FMovieSceneEvaluationState::InvalidateExpiredObjects(this_02);
        }
        EvaluateGroup(this,pFVar21,param_1,param_2);
        FMovieSceneExecutionTokens::Apply(&this->ExecutionTokens,param_1,param_2);
        pTVar22 = IMovieScenePlayer::GetSharedPlaybackState
                            (local_e8.Player,
                             (TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *)local_108);
        pUVar23 = FWeakObjectPtr::Get(&(pTVar22->Object->WeakLinker).WeakPtr);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)CONCAT44(uStack_fc,local_108._8_4_));
        local_res8 = (LARGE_INTEGER)((LARGE_INTEGER *)(pUVar23 + 0x1d))->QuadPart;
        if ((FName)local_res8.QuadPart != (FName)0x0) {
          lVar24 = (**(code **)((local_e8.Player)->_padding_ + 0x18))();
          this_01 = local_res8;
          if (*(longlong *)(lVar24 + 8) == 0) {
            FVar29 = (FRootInstanceHandle)0xffff;
          }
          else {
            FVar29 = *(FRootInstanceHandle *)(*(longlong *)(lVar24 + 8) + 0x30);
          }
          iVar8 = local_e8.KeysToRestore.ArrayNum;
          uVar26 = (ulonglong)local_e8.KeysToRestore.ArrayNum;
          pFVar15 = (FName *)(local_e8.KeysToRestore.AllocatorInstance.Data + uVar26 * 0xc);
          FVar28.Data = local_e8.KeysToRestore.AllocatorInstance.Data;
          while( true ) {
            if ((int)uVar26 != iVar8) {
              `TCheckedPointerIterator<FMovieSceneEvaluationKey,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res20);
            }
            param_1 = local_res10;
            if ((FName *)FVar28.Data == pFVar15) break;
            local_108._0_8_ = *(undefined8 *)FVar28.Data;
            local_108._8_4_ = (((FName *)((longlong)FVar28.Data + 8))->ComparisonIndex).Value;
            UE::MovieScene::FPreAnimatedTemplateCaptureSources::StopTrackingCaptureSource
                      ((FPreAnimatedTemplateCaptureSources *)this_01,
                       (FMovieSceneEvaluationKey *)local_108,FVar29);
            uVar26 = local_e8.KeysToRestore._8_8_ & 0xffffffff;
            FVar28.Data = (FScriptContainerElement *)&((FName *)((longlong)FVar28.Data + 8))->Number
            ;
          }
        }
        bVar30 = (longlong)local_e8.KeysToRestore._8_8_ < 0;
        local_e8.KeysToRestore._8_8_ = local_e8.KeysToRestore._8_8_ & 0xffffffff00000000;
        if (bVar30) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xc,4,0,&local_e8.KeysToRestore.AllocatorInstance,0,
                     &local_e8.KeysToRestore.ArrayMax);
        }
        if ((FName *)local_e8.KeysToRestore.AllocatorInstance.Data != (FName *)0x0) {
          FMemory::Free(local_e8.KeysToRestore.AllocatorInstance.Data);
        }
      }
      if ((local_f0 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_f0 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_f0 & 4) != 0) {
        FThreadStats::AddMessage(local_f8,CycleScopeEnd);
      }
      local_f0 = 0;
      goto LAB_1461a1fa2;
    }
    pFVar18 = UMovieSceneCompiledDataManager::FindHierarchy
                        ((this->CompiledDataManager).field0_0x0.DebugPtr,
                         (FMovieSceneCompiledDataID)(this->RootCompiledDataID).Value);
    if (pFVar18 != (FMovieSceneSequenceHierarchy *)0x0) {
      if (*(int *)&(pFVar18->SubSequences).field_0x8 != *(int *)&(pFVar18->SubSequences).field_0x34)
      {
        puVar25 = *(undefined1 **)&(pFVar18->SubSequences).field_0x40;
        if (puVar25 == (undefined1 *)0x0) {
          puVar25 = &(pFVar18->SubSequences).field_0x38;
        }
        uVar14 = *(uint *)(puVar25 +
                          (ulonglong)
                          (*(int *)&(pFVar18->SubSequences).field_0x48 - 1U & param_3.Value) * 4);
        if (uVar14 != 0xffffffff) {
          do {
            puVar19 = (uint *)((longlong)(int)uVar14 * 0x120 + *(longlong *)&pFVar18->SubSequences);
            if (*puVar19 == param_3.Value) goto LAB_1461a1d9e;
            uVar14 = puVar19[0x46];
          } while (uVar14 != 0xffffffff);
        }
      }
      puVar19 = (uint *)0x0;
LAB_1461a1d9e:
      this_05 = (FMovieSceneSubSequenceData *)(puVar19 + 2);
      if (puVar19 == (uint *)0x0) {
        this_05 = (FMovieSceneSubSequenceData *)0x0;
      }
      if ((this_05 != (FMovieSceneSubSequenceData *)0x0) &&
         (pUVar17 = FMovieSceneSubSequenceData::GetSequence(this_05),
         pUVar17 != (UMovieSceneSequence *)0x0)) goto LAB_1461a1dc8;
    }
  }
  CallSetupTearDown(this,param_2,(FDelayedPreAnimatedStateRestore *)0x0);
LAB_1461a1fa2:
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && ((FName)LVar27.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_03 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_03 == (FThreadStats *)0x0) {
      this_04 = FThreadStatsPool::Get();
      this_03 = FThreadStatsPool::GetFromPool(this_04);
    }
    if (this_03->bWaitForExplicitFlush < this_03->ScopeCount) {
      local_108._8_4_ = LVar27.s.LowPart;
      uStack_fc = LVar27.s.HighPart & 0xffff6fffU | 0x6000;
      QueryPerformanceCounter(&local_res8);
      local_108._0_8_ = local_res8.QuadPart & 0xffffffff;
      FThreadStats::AddStatMessage(this_03,(FStatMessage *)local_108);
      piVar1 = &this_03->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_03,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_03,false,false);
      }
    }
  }
  pFVar2 = (param_1->RootToSequenceWarpCounter).WarpCounts.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar3 = (void *)(param_1->RootToSequenceWarpCounter)._padding_;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pFVar2 = (param_1->RootToSequenceTransform).NestedTransforms.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// EvaluateGroup @ 1461a2920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMovieSceneTrackEvaluator::EvaluateGroup
          (FMovieSceneTrackEvaluator *this,FMovieSceneEvaluationGroup *param_1,
          FMovieSceneContext *param_2,IMovieScenePlayer *param_3)

{
  TSortedMap<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>,TLess<FMovieSceneSequenceID_const_&>_>
  *pTVar1;
  FMovieSceneExecutionTokens *pFVar2;
  longlong *plVar3;
  ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair> FVar4;
  code *pcVar5;
  IMovieScenePlayer *pIVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  int iVar9;
  FMovieSceneEvaluationState *pFVar10;
  FMovieSceneContext *pFVar11;
  FMovieSceneTrackImplementation *pFVar12;
  FMovieSceneTrackImplementationPtr *pFVar13;
  byte bVar14;
  char cVar15;
  char cVar16;
  ulonglong uVar17;
  uint *puVar18;
  FMovieSceneEvaluationTrack *pFVar19;
  ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_> FVar20;
  ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_> FVar21;
  uint uVar22;
  longlong lVar23;
  ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_> FVar24;
  uchar *puVar25;
  FMovieSceneTrackImplementationPtr *pFVar26;
  FScriptContainerElement *pFVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  uint uVar30;
  int iVar31;
  longlong *plVar32;
  ulonglong *puVar33;
  int *piVar34;
  ulonglong uVar35;
  FMovieSceneEvaluationTrack *pFVar36;
  FMovieSceneFieldEntry_ChildTemplate *pFVar37;
  FMovieSceneTrackEvaluator *pFVar38;
  uchar *puVar39;
  uint uVar40;
  uint uVar41;
  FMovieSceneSequenceID FVar42;
  ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair> FVar43;
  FMovieSceneEvaluationTrack *pFVar44;
  ulonglong uVar45;
  ulonglong *puVar46;
  undefined1 auStackY_5b8 [32];
  undefined1 local_578;
  undefined1 local_577;
  undefined1 local_576 [2];
  uint local_574;
  ushort local_570;
  ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_> local_568;
  FMovieSceneFieldEntry_ChildTemplate *local_560;
  FMovieSceneTrackEvaluator *local_558;
  uchar *local_550;
  undefined4 local_548;
  int iStack_544;
  undefined4 uStack_540;
  int iStack_53c;
  FMovieSceneEvaluationOperand local_538;
  undefined4 local_518;
  int iStack_514;
  undefined4 uStack_510;
  int iStack_50c;
  FMovieSceneContext local_508;
  FMovieSceneEvaluationGroup *local_488;
  ulonglong local_480;
  longlong local_478;
  undefined8 local_470;
  uint local_468;
  undefined1 local_464;
  int local_460;
  undefined1 local_45c;
  int local_458;
  undefined1 local_454;
  int local_450;
  undefined1 local_44c;
  int local_448 [2];
  FScriptContainerElement *local_440;
  undefined8 local_438;
  uint local_430;
  undefined8 local_428;
  uint uStack_420;
  undefined4 uStack_41c;
  FPersistentEvaluationData local_418;
  undefined8 local_3e8;
  uint local_3e0;
  IMovieScenePlayer *local_3d8;
  FMovieSceneEvaluationKey local_3d0 [2];
  undefined8 local_3b8;
  uint uStack_3b0;
  undefined4 uStack_3ac;
  uint local_3a8;
  uint uStack_3a4;
  undefined4 uStack_3a0;
  uint uStack_39c;
  FMovieSceneFieldEntry_ChildTemplate *local_398;
  uint uStack_390;
  undefined4 uStack_38c;
  FScriptContainerElement *local_388;
  TArrayView<FMovieSceneFieldEntry_ChildTemplate_const_,int> local_378;
  FMovieSceneContext local_368;
  TRange<FFrameNumber> local_2e8;
  TRange<FFrameNumber> local_2d8;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  uint uStack_2c0;
  undefined4 uStack_2bc;
  TArrayView<FMovieSceneFieldEntry_ChildTemplate_const_,int> local_2b8;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  uint uStack_2a0;
  undefined4 uStack_29c;
  TArrayView<FMovieSceneFieldEntry_ChildTemplate_const_,int> local_298;
  FMovieSceneContext local_288;
  FMovieSceneContext local_208;
  FMovieSceneContext local_188;
  FMovieSceneContext local_108;
  FScopedPreAnimatedCaptureSource local_88;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_5b8;
  local_418.EntityData =
       (TMap<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>_>
        *)0x0;
  local_418.SharedData =
       (TMap<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>_>
        *)0x0;
  local_418.TrackKey.SequenceID.Value = 0xffffffff;
  local_418.TrackKey.TrackIdentifier.Value = 0xffffffff;
  local_418.TrackKey.SectionIndex = 0xffffffff;
  local_418.SectionKey.SequenceID.Value = 0xffffffff;
  local_418.SectionKey.TrackIdentifier.Value = 0xffffffff;
  local_418.SectionKey.SectionIndex = 0xffffffff;
  local_558 = this;
  local_488 = param_1;
  local_418.Player = param_3;
  local_3d8 = param_3;
  pFVar10 = IMovieScenePlayer::GetEvaluationState(param_3);
  if (pFVar10 != (FMovieSceneEvaluationState *)0x0) {
    local_418.EntityData = &pFVar10->PersistentEntityData;
    local_418.SharedData = &pFVar10->PersistentSharedData;
  }
  local_538.ObjectBindingID.A = 0;
  local_538.ObjectBindingID.B = 0;
  local_538.ObjectBindingID.C = 0;
  local_538.ObjectBindingID.D = 0;
  local_538.SequenceID.Value = 0;
  FMovieSceneContext::FMovieSceneContext(&local_368,param_2);
  FMovieSceneContext::FMovieSceneContext(&local_508,&local_368);
  local_468 = (param_1->LUTIndices).ArrayNum;
  uVar17 = (ulonglong)(int)local_468;
  uVar35 = 0;
  pFVar27 = (param_1->LUTIndices).AllocatorInstance.Data;
  local_560 = (FMovieSceneFieldEntry_ChildTemplate *)(param_1->SectionLUT).AllocatorInstance.Data;
  local_388 = pFVar27 + uVar17 * 8;
  local_574 = 0;
  local_480 = 0;
  uVar45 = uVar35;
  uVar28 = local_378._12_4_;
  uVar29 = uStack_41c;
  do {
    pFVar7 = local_388;
    local_440 = pFVar27;
    if ((param_1->LUTIndices).ArrayNum != (int)uVar17) {
      local_578 = 0;
      `TCheckedPointerIterator<FMovieSceneEvaluationGroupLUTIndex_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_578);
      uVar35 = (ulonglong)local_574;
    }
    if (pFVar27 == pFVar7) {
      if (local_508.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_508.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data);
      }
      if ((void *)local_508.RootToSequenceWarpCounter._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_508.RootToSequenceWarpCounter._padding_);
      }
      if (local_508.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_508.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data);
      }
      if (local_368.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_368.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data);
      }
      if ((void *)local_368.RootToSequenceWarpCounter._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_368.RootToSequenceWarpCounter._padding_);
      }
      if (local_368.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_368.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data);
      }
      return;
    }
    uVar17 = (ulonglong)(*(int *)pFVar27 + (int)uVar35);
    if ((longlong)uVar45 < (longlong)uVar17) {
      lVar23 = uVar45 * 0xc;
      local_568 = (ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>
                   )&this->RootOverridePath;
      local_470 = uVar17 - uVar45;
      pTVar1 = &this->CachedPtrs;
      pFVar38 = this;
      local_480 = uVar17;
      do {
        uVar22 = 0;
        if ((int)(uint)uVar35 < (param_1->TrackLUT).ArrayNum) {
          uVar22 = ~(uint)uVar35 >> 0x1f;
        }
        local_478 = lVar23;
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar27 = (param_1->TrackLUT).AllocatorInstance.Data;
        local_3e8 = *(undefined8 *)(pFVar27 + lVar23);
        local_3e0 = *(uint *)(pFVar27 + lVar23 + 8);
        iVar31 = (pFVar38->RootOverridePath).PathToRoot.ArrayNum;
        FVar42.Value = (uint)local_3e8;
        if (iVar31 != 0) {
          FVar24 = local_568;
          if (*(ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>
                *)((longlong)local_568 + 0x40) !=
              (ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>
              )0x0) {
            FVar24 = *(ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>
                       *)((longlong)local_568 + 0x40);
          }
          FVar21 = (ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>
                    )((longlong)FVar24 + (longlong)iVar31 * 8);
          while( true ) {
            if ((pFVar38->RootOverridePath).PathToRoot.ArrayNum != iVar31) {
              local_577 = 0;
              `TCheckedPointerIterator<UE::MovieScene::FSubSequencePath::FSequenceIDPair_const_,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(&local_577);
            }
            if (FVar24 == FVar21) break;
            uVar22 = (uint)*(ulonglong *)FVar24;
            if (FVar42.Value == 0) {
              FVar24 = (ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>
                        )((longlong)FVar24 + 8);
              FVar42.Value = uVar22;
            }
            else {
              uVar40 = FVar42.Value - uVar22 ^ (uint)(*(ulonglong *)FVar24 >> 0xd) & 0x7ffff;
              uVar30 = (-0x61c88647 - uVar40) - uVar22 ^ uVar40 << 8;
              uVar41 = (uVar22 - uVar30) - uVar40 ^ uVar30 >> 0xd;
              uVar22 = (uVar40 - uVar41) - uVar30 ^ uVar41 >> 0xc;
              uVar30 = (uVar30 - uVar22) - uVar41 ^ uVar22 << 0x10;
              uVar40 = (uVar41 - uVar30) - uVar22 ^ uVar30 >> 5;
              uVar22 = (uVar22 - uVar40) - uVar30 ^ uVar40 >> 3;
              uVar30 = (uVar30 - uVar22) - uVar40 ^ uVar22 << 10;
              FVar42.Value = (uVar40 - uVar30) - uVar22 ^ uVar30 >> 0xf;
              FVar24 = (ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>
                        )((longlong)FVar24 + 8);
            }
          }
        }
        FVar24 = (this->CachedPtrs).Pairs.AllocatorInstance.SecondaryData;
        uVar22 = (this->CachedPtrs).Pairs.ArrayNum;
        FVar21 = (ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>
                  )pTVar1;
        if (FVar24 != (ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>
                       )0x0) {
          FVar21 = FVar24;
        }
        iVar31 = 0;
        uVar30 = uVar22;
        if (0 < (int)uVar22) {
          do {
            iVar9 = (uVar30 >> 1) + iVar31;
            if (*(uint *)((longlong)iVar9 * 0x20 + (longlong)FVar21) < FVar42.Value) {
              iVar31 = iVar9 + (uVar30 & 1);
            }
            uVar40 = uVar30 >> 1;
            uVar30 = uVar30 >> 1;
          } while (uVar40 != 0);
        }
        puVar25 = (uchar *)0x0;
        if (iVar31 < (int)uVar22) {
          FVar21 = (ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>
                    )pTVar1;
          if (FVar24 != (ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>
                         )0x0) {
            FVar21 = FVar24;
          }
          if ((FVar42.Value < *(uint *)((longlong)iVar31 * 0x20 + (longlong)FVar21)) ||
             (iVar31 == -1)) goto LAB_1461a2cda;
          if ((iVar31 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar24 = (this->CachedPtrs).Pairs.AllocatorInstance.SecondaryData;
          FVar21 = (ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>
                    )pTVar1;
          if (FVar24 != (ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>
                         )0x0) {
            FVar21 = FVar24;
          }
          puVar39 = (uchar *)((longlong)FVar21 + 0x18) + (longlong)iVar31 * 0x20;
          puVar25 = (uchar *)((longlong)FVar21 + 8) + (longlong)iVar31 * 0x20;
          local_550 = puVar39;
          if (puVar25 == (uchar *)0x0) goto LAB_1461a2cec;
        }
        else {
LAB_1461a2cda:
          local_550 = &DAT_00000010;
LAB_1461a2cec:
          puVar39 = local_550;
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                             ,0x141,L"");
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pIVar6 = local_3d8;
        uVar22 = local_3e0;
        plVar3 = *(longlong **)(puVar25 + 8);
        if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
          plVar32 = plVar3 + 7;
          if ((longlong *)plVar3[8] != (longlong *)0x0) {
            plVar32 = (longlong *)plVar3[8];
          }
          uVar30 = *(uint *)((longlong)plVar32 +
                            (ulonglong)((int)plVar3[9] - 1U & local_3e8._4_4_) * 4);
          if (uVar30 != 0xffffffff) {
            do {
              puVar18 = (uint *)((longlong)(int)uVar30 * 0x88 + *plVar3);
              if (*puVar18 == local_3e8._4_4_) {
                pFVar44 = (FMovieSceneEvaluationTrack *)(puVar18 + 2);
                if (puVar18 == (uint *)0x0) {
                  pFVar44 = (FMovieSceneEvaluationTrack *)0x0;
                }
                if (pFVar44 != (FMovieSceneEvaluationTrack *)0x0) goto LAB_1461a2dda;
                break;
              }
              uVar30 = puVar18[0x20];
            } while (uVar30 != 0xffffffff);
          }
        }
        pFVar36 = (FMovieSceneEvaluationTrack *)0x0;
        pFVar19 = pFVar36;
        if ((int)plVar3[0xb] != *(int *)((longlong)plVar3 + 0x84)) {
          plVar32 = plVar3 + 0x11;
          if ((longlong *)plVar3[0x12] != (longlong *)0x0) {
            plVar32 = (longlong *)plVar3[0x12];
          }
          uVar30 = *(uint *)((longlong)plVar32 +
                            (ulonglong)((int)plVar3[0x13] - 1U & local_3e8._4_4_) * 4);
          if (uVar30 != 0xffffffff) {
            do {
              pFVar19 = (FMovieSceneEvaluationTrack *)((longlong)(int)uVar30 * 0x88 + plVar3[10]);
              if ((pFVar19->ObjectBindingID).A == local_3e8._4_4_) break;
              uVar30 = pFVar19[1].ObjectBindingID.C;
              pFVar19 = pFVar36;
            } while (uVar30 != 0xffffffff);
          }
        }
        pFVar44 = (FMovieSceneEvaluationTrack *)&(pFVar19->ObjectBindingID).C;
        if (pFVar19 == (FMovieSceneEvaluationTrack *)0x0) {
          pFVar44 = pFVar36;
        }
LAB_1461a2dda:
        uVar45 = (ulonglong)(ushort)local_3e0;
        if (pFVar44 != (FMovieSceneEvaluationTrack *)0x0) {
          local_538.ObjectBindingID.A = (pFVar44->ObjectBindingID).A;
          local_538.ObjectBindingID.B = (pFVar44->ObjectBindingID).B;
          local_538.ObjectBindingID.C = (pFVar44->ObjectBindingID).C;
          local_538.ObjectBindingID.D = (pFVar44->ObjectBindingID).D;
          local_3d0[0].TrackIdentifier.Value = local_3e8._4_4_;
          local_3d0[0].SectionIndex = 0xffffffff;
          local_418.TrackKey.TrackIdentifier.Value = local_3e8._4_4_;
          local_418.TrackKey.SequenceID.Value = FVar42.Value;
          local_418.TrackKey.SectionIndex = 0xffffffff;
          local_538.SequenceID.Value = FVar42.Value;
          local_3d0[0].SequenceID.Value = FVar42.Value;
          FScopedPreAnimatedCaptureSource::FScopedPreAnimatedCaptureSource
                    (&local_88,&local_3d8->PreAnimatedState,local_3d0,false);
          local_508._padding_._0_4_ = (undefined4)local_368._padding_;
          local_508._padding_._4_4_ = (int)((ulonglong)local_368._padding_ >> 0x20);
          local_508._padding_._0_4_ = (undefined4)local_368._padding_;
          local_508._padding_._4_4_ = (undefined4)((ulonglong)local_368._padding_ >> 0x20);
          local_508._padding_ = local_368._padding_;
          local_508.RootToSequenceTransform.LinearTransform.TimeScale =
               local_368.RootToSequenceTransform.LinearTransform.TimeScale;
          local_508.RootToSequenceTransform.LinearTransform.Offset.FrameNumber.Value =
               local_368.RootToSequenceTransform.LinearTransform.Offset.FrameNumber.Value;
          local_508._padding_ = local_368._padding_;
          local_508._padding_ = local_368._padding_;
          local_508.RootToSequenceTransform.LinearTransform.Offset.SubFrame =
               local_368.RootToSequenceTransform.LinearTransform.Offset.SubFrame;
          TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_>::operator=
                    (&local_508.RootToSequenceTransform.NestedTransforms,
                     &local_368.RootToSequenceTransform.NestedTransforms);
          FMovieSceneWarpCounter::operator=
                    (&local_508.RootToSequenceWarpCounter,&local_368.RootToSequenceWarpCounter);
          local_508.Status = local_368.Status;
          local_508.PrePostRollStartEndTime.Value = local_368.PrePostRollStartEndTime.Value;
          local_508.HierarchicalBias = local_368.HierarchicalBias;
          local_508._124_1_ = local_508._124_1_ & 0x80 | local_368._124_1_ & 0x7f;
          lVar23 = *(longlong *)puVar39;
          if (lVar23 != 0) {
            pFVar11 = FMovieSceneContext::Transform
                                (&local_368,&local_288,
                                 (FMovieSceneSequenceTransform *)(lVar23 + 0x40),
                                 *(FFrameRate *)(lVar23 + 0x60));
            local_508._padding_._0_4_ = (undefined4)pFVar11->_padding_;
            local_508._padding_._4_4_ = (int)((ulonglong)pFVar11->_padding_ >> 0x20);
            local_508._padding_._0_4_ = (undefined4)pFVar11->_padding_;
            local_508._padding_._4_4_ = (undefined4)((ulonglong)pFVar11->_padding_ >> 0x20);
            local_508._padding_ = pFVar11->_padding_;
            local_508._padding_ = pFVar11->_padding_;
            local_508._padding_ = pFVar11->_padding_;
            FMovieSceneSequenceTransform::operator=
                      (&local_508.RootToSequenceTransform,&pFVar11->RootToSequenceTransform);
            FMovieSceneWarpCounter::operator=
                      (&local_508.RootToSequenceWarpCounter,&pFVar11->RootToSequenceWarpCounter);
            local_508.Status = pFVar11->Status;
            local_508.PrePostRollStartEndTime.Value = (pFVar11->PrePostRollStartEndTime).Value;
            local_508.HierarchicalBias = pFVar11->HierarchicalBias;
            local_508._124_1_ = local_508._124_1_ & 0xfe | pFVar11->bHasJumped;
            local_508._124_1_ = (local_508._124_1_ ^ pFVar11->field_0x7c) & 2 ^ local_508._124_1_;
            local_508._124_1_ = (local_508._124_1_ ^ pFVar11->field_0x7c) & 4 ^ local_508._124_1_;
            local_508._124_1_ = (local_508._124_1_ ^ pFVar11->field_0x7c) & 8 ^ local_508._124_1_;
            local_508._124_1_ = (local_508._124_1_ ^ pFVar11->field_0x7c) & 0x10 ^ local_508._124_1_
            ;
            local_508._124_1_ = (local_508._124_1_ ^ pFVar11->field_0x7c) & 0x20 ^ local_508._124_1_
            ;
            local_508._124_1_ = (local_508._124_1_ ^ pFVar11->field_0x7c) & 0x40 ^ local_508._124_1_
            ;
            if (local_288.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_288.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data);
            }
            if ((void *)local_288.RootToSequenceWarpCounter._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_288.RootToSequenceWarpCounter._padding_);
            }
            if (local_288.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_288.RootToSequenceTransform.NestedTransforms.AllocatorInstance.
                            Data);
            }
            lVar23 = *(longlong *)local_550;
            local_2e8.LowerBound = *(TRangeBound<FFrameNumber> *)(lVar23 + 0x9c);
            local_2e8.UpperBound = *(TRangeBound<FFrameNumber> *)(lVar23 + 0xa4);
            local_2d8.LowerBound = *(TRangeBound<FFrameNumber> *)(lVar23 + 0x8c);
            local_2d8.UpperBound = *(TRangeBound<FFrameNumber> *)(lVar23 + 0x94);
            FMovieSceneContext::ReportOuterSectionRanges(&local_508,&local_2d8,&local_2e8);
            local_508.HierarchicalBias = (int)*(short *)(*(longlong *)puVar39 + 0xac);
          }
          local_3b8 = local_560;
          uStack_3b0 = uVar22 & 0xffff;
          uStack_3ac = uVar28;
          if ((((pFVar44->TrackTemplate).field_0x30 & 1) == 0) ||
             (pFVar12 = TInlineValue<FMovieSceneTrackImplementation,48,8>::GetValue
                                  ((TInlineValue<FMovieSceneTrackImplementation,48,8> *)
                                   &pFVar44->TrackTemplate), (pFVar12->field_0x8 & 4) == 0)) {
            pFVar11 = FMovieSceneContext::FMovieSceneContext(&local_188,&local_508);
            local_2b8._12_4_ = uStack_3ac;
            local_2b8.ArrayNum = uStack_3b0;
            local_2b8.DataPtr = local_3b8;
            FMovieSceneEvaluationTrack::DefaultInitialize
                      (pFVar44,&local_2b8,&local_538,pFVar11,&local_418,pIVar6);
          }
          else {
            pFVar12 = TInlineValue<FMovieSceneTrackImplementation,48,8>::GetValue
                                ((TInlineValue<FMovieSceneTrackImplementation,48,8> *)
                                 &pFVar44->TrackTemplate);
            local_2c8 = (undefined4)local_3b8;
            uStack_2c4 = local_3b8._4_4_;
            uStack_2c0 = uStack_3b0;
            uStack_2bc = uStack_3ac;
            (**(code **)(*(longlong *)pFVar12 + 0x28))(pFVar12,pFVar44,&local_2c8,&local_538);
          }
          *(FScopedPreAnimatedCaptureSource **)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xee8)
               = local_88.PrevCaptureSource;
        }
        local_574 = local_574 + 1;
        uVar35 = (ulonglong)local_574;
        lVar23 = local_478 + 0xc;
        local_470 = local_470 + -1;
        local_560 = local_560 + uVar45;
        pFVar38 = local_558;
        param_1 = local_488;
      } while (local_470 != 0);
      local_470 = 0;
      pFVar27 = local_440;
      this = local_558;
      uVar45 = local_480;
      uVar29 = uStack_41c;
    }
    local_478 = (longlong)(*(int *)(pFVar27 + 4) + (int)uVar35);
    if ((longlong)uVar45 < local_478) {
      FVar24 = (ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>
                )&this->CachedPtrs;
      local_568 = FVar24;
      do {
        uVar22 = 0;
        if ((int)(uint)uVar35 < (param_1->TrackLUT).ArrayNum) {
          uVar22 = ~(uint)uVar35 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar38 = local_558;
        pFVar27 = (param_1->TrackLUT).AllocatorInstance.Data;
        local_470 = *(ulonglong *)(pFVar27 + uVar45 * 0xc);
        local_430 = *(uint *)(pFVar27 + uVar45 * 0xc + 8);
        uVar45 = local_470 & 0xffffffff;
        FVar42.Value = (uint)local_470;
        iVar31 = (local_558->RootOverridePath).PathToRoot.ArrayNum;
        local_438 = local_470;
        if (iVar31 != 0) {
          FVar4 = (this->RootOverridePath).PathToRoot.AllocatorInstance.SecondaryData;
          FVar43 = (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)
                   &this->RootOverridePath;
          if (FVar4 != (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)0x0) {
            FVar43 = FVar4;
          }
          FVar4 = (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)
                  ((longlong)FVar43 + (longlong)iVar31 * 8);
          while( true ) {
            FVar42.Value = (uint)uVar45;
            if ((pFVar38->RootOverridePath).PathToRoot.ArrayNum != iVar31) {
              local_576[0] = 0;
              `TCheckedPointerIterator<UE::MovieScene::FSubSequencePath::FSequenceIDPair_const_,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(local_576);
            }
            uVar29 = uStack_41c;
            if (FVar43 == FVar4) break;
            uVar45 = *(ulonglong *)FVar43;
            if (FVar42.Value == 0) {
              uVar45 = uVar45 & 0xffffffff;
              FVar43 = (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)
                       ((longlong)FVar43 + 8);
            }
            else {
              iVar9 = (int)uVar45;
              uVar22 = FVar42.Value - iVar9 ^ (uint)(uVar45 >> 0xd) & 0x7ffff;
              uVar40 = (-0x61c88647 - uVar22) - iVar9 ^ uVar22 << 8;
              uVar30 = (iVar9 - uVar40) - uVar22 ^ uVar40 >> 0xd;
              uVar22 = (uVar22 - uVar30) - uVar40 ^ uVar30 >> 0xc;
              uVar40 = (uVar40 - uVar30) - uVar22 ^ uVar22 << 0x10;
              uVar30 = (uVar30 - uVar40) - uVar22 ^ uVar40 >> 5;
              uVar22 = (uVar22 - uVar30) - uVar40 ^ uVar30 >> 3;
              uVar40 = (uVar40 - uVar22) - uVar30 ^ uVar22 << 10;
              uVar45 = (ulonglong)((uVar30 - uVar40) - uVar22 ^ uVar40 >> 0xf);
              FVar43 = (ForElementType<UE::MovieScene::FSubSequencePath::FSequenceIDPair>)
                       ((longlong)FVar43 + 8);
            }
          }
        }
        FVar21 = *(ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>
                   *)((longlong)FVar24 + 0x100);
        uVar22 = *(uint *)((longlong)FVar24 + 0x108);
        FVar20 = FVar24;
        if (FVar21 != (ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>
                       )0x0) {
          FVar20 = FVar21;
        }
        iVar31 = 0;
        uVar30 = uVar22;
        if (0 < (int)uVar22) {
          do {
            iVar9 = (uVar30 >> 1) + iVar31;
            if ((uint)*(ulonglong *)((longlong)iVar9 * 0x20 + (longlong)FVar20) < FVar42.Value) {
              iVar31 = (uVar30 & 1) + iVar9;
            }
            uVar40 = uVar30 >> 1;
            uVar30 = uVar30 >> 1;
          } while (uVar40 != 0);
        }
        puVar33 = (ulonglong *)0x0;
        if (iVar31 < (int)uVar22) {
          FVar20 = FVar24;
          if (FVar21 != (ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>
                         )0x0) {
            FVar20 = FVar21;
          }
          if ((FVar42.Value < (uint)*(ulonglong *)((longlong)iVar31 * 0x20 + (longlong)FVar20)) ||
             (iVar31 == -1)) goto LAB_1461a33d9;
          if ((iVar31 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FVar21 = FVar24;
          if (*(ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>
                *)((longlong)FVar24 + 0x100) !=
              (ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>
              )0x0) {
            FVar21 = *(ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>
                       *)((longlong)FVar24 + 0x100);
          }
          puVar46 = (ulonglong *)((longlong)FVar21 + 0x18) + (longlong)iVar31 * 4;
          puVar33 = (ulonglong *)((longlong)FVar21 + 8) + (longlong)iVar31 * 4;
          if (puVar33 == (ulonglong *)0x0) goto LAB_1461a33e5;
        }
        else {
LAB_1461a33d9:
          puVar46 = (ulonglong *)&DAT_00000010;
LAB_1461a33e5:
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Value != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SortedMap.h"
                             ,0x141,L"");
          if (bVar8) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        plVar3 = (longlong *)puVar33[1];
        local_570 = (ushort)local_430;
        if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
          plVar32 = plVar3 + 7;
          if ((longlong *)plVar3[8] != (longlong *)0x0) {
            plVar32 = (longlong *)plVar3[8];
          }
          uVar22 = *(uint *)((longlong)plVar32 +
                            (ulonglong)((int)plVar3[9] - 1U & local_470._4_4_) * 4);
          if (uVar22 != 0xffffffff) {
            do {
              puVar18 = (uint *)((longlong)(int)uVar22 * 0x88 + *plVar3);
              if (*puVar18 == local_438._4_4_) {
                pFVar44 = (FMovieSceneEvaluationTrack *)(puVar18 + 2);
                if (puVar18 == (uint *)0x0) {
                  pFVar44 = (FMovieSceneEvaluationTrack *)0x0;
                }
                if (pFVar44 != (FMovieSceneEvaluationTrack *)0x0) goto LAB_1461a34f3;
                break;
              }
              uVar22 = puVar18[0x20];
            } while (uVar22 != 0xffffffff);
          }
        }
        pFVar36 = (FMovieSceneEvaluationTrack *)0x0;
        pFVar19 = pFVar36;
        if ((int)plVar3[0xb] != *(int *)((longlong)plVar3 + 0x84)) {
          plVar32 = plVar3 + 0x11;
          if ((longlong *)plVar3[0x12] != (longlong *)0x0) {
            plVar32 = (longlong *)plVar3[0x12];
          }
          uVar22 = *(uint *)((longlong)plVar32 +
                            (ulonglong)((int)plVar3[0x13] - 1U & local_470._4_4_) * 4);
          if (uVar22 != 0xffffffff) {
            do {
              pFVar19 = (FMovieSceneEvaluationTrack *)((longlong)(int)uVar22 * 0x88 + plVar3[10]);
              if ((pFVar19->ObjectBindingID).A == local_438._4_4_) break;
              uVar22 = pFVar19[1].ObjectBindingID.C;
              pFVar19 = pFVar36;
            } while (uVar22 != 0xffffffff);
          }
        }
        pFVar44 = (FMovieSceneEvaluationTrack *)&(pFVar19->ObjectBindingID).C;
        if (pFVar19 == (FMovieSceneEvaluationTrack *)0x0) {
          pFVar44 = pFVar36;
        }
        if (pFVar44 == (FMovieSceneEvaluationTrack *)0x0) {
          uVar22 = local_430 & 0xffff;
          pFVar37 = local_560;
        }
        else {
LAB_1461a34f3:
          local_538.ObjectBindingID.A = (pFVar44->ObjectBindingID).A;
          local_538.ObjectBindingID.B = (pFVar44->ObjectBindingID).B;
          local_538.ObjectBindingID.C = (pFVar44->ObjectBindingID).C;
          local_538.ObjectBindingID.D = (pFVar44->ObjectBindingID).D;
          pFVar2 = &local_558->ExecutionTokens;
          (local_558->ExecutionTokens).Operand.ObjectBindingID.A = local_538.ObjectBindingID.A;
          (local_558->ExecutionTokens).Operand.ObjectBindingID.B = local_538.ObjectBindingID.B;
          (local_558->ExecutionTokens).Operand.ObjectBindingID.C = local_538.ObjectBindingID.C;
          (local_558->ExecutionTokens).Operand.ObjectBindingID.D = local_538.ObjectBindingID.D;
          uStack_3a4 = local_470._4_4_;
          (local_558->ExecutionTokens).Operand.SequenceID.Value = FVar42.Value;
          local_508._padding_._0_4_ = (undefined4)local_368._padding_;
          local_508._padding_._4_4_ = (int)((ulonglong)local_368._padding_ >> 0x20);
          local_508._padding_._0_4_ = (undefined4)local_368._padding_;
          local_508._padding_._4_4_ = (undefined4)((ulonglong)local_368._padding_ >> 0x20);
          uStack_3a0 = 0xffffffff;
          uStack_39c = uStack_39c & 0xffffff00;
          local_418.TrackKey.TrackIdentifier.Value = local_470._4_4_;
          local_418.TrackKey.SequenceID.Value = FVar42.Value;
          (local_558->ExecutionTokens).Scope.Key.SequenceID = (FMovieSceneSequenceID)FVar42.Value;
          (local_558->ExecutionTokens).Scope.Key.TrackIdentifier =
               (FMovieSceneTrackIdentifier)local_470._4_4_;
          *(ulonglong *)&(local_558->ExecutionTokens).Scope.Key.SectionIndex =
               CONCAT44(uStack_39c,0xffffffff);
          local_508._padding_ = local_368._padding_;
          local_508._padding_ = local_368._padding_;
          local_418.TrackKey.SectionIndex = 0xffffffff;
          local_508._padding_ = local_368._padding_;
          local_508.RootToSequenceTransform.LinearTransform.TimeScale =
               local_368.RootToSequenceTransform.LinearTransform.TimeScale;
          local_508.RootToSequenceTransform.LinearTransform.Offset.FrameNumber.Value =
               local_368.RootToSequenceTransform.LinearTransform.Offset.FrameNumber.Value;
          local_508.RootToSequenceTransform.LinearTransform.Offset.SubFrame =
               local_368.RootToSequenceTransform.LinearTransform.Offset.SubFrame;
          local_538.SequenceID.Value = FVar42.Value;
          local_3a8 = FVar42.Value;
          TArray<FMovieSceneNestedSequenceTransform,TSizedDefaultAllocator<32>_>::operator=
                    (&local_508.RootToSequenceTransform.NestedTransforms,
                     &local_368.RootToSequenceTransform.NestedTransforms);
          FMovieSceneWarpCounter::operator=
                    (&local_508.RootToSequenceWarpCounter,&local_368.RootToSequenceWarpCounter);
          local_508.Status = local_368.Status;
          local_508.PrePostRollStartEndTime.Value = local_368.PrePostRollStartEndTime.Value;
          local_508.HierarchicalBias = local_368.HierarchicalBias;
          local_508._124_1_ = local_508._124_1_ & 0x80 | local_368._124_1_ & 0x7f;
          uVar45 = *puVar46;
          if (uVar45 != 0) {
            pFVar11 = FMovieSceneContext::Transform
                                (&local_368,&local_208,
                                 (FMovieSceneSequenceTransform *)(uVar45 + 0x40),
                                 *(FFrameRate *)(uVar45 + 0x60));
            local_508._padding_._0_4_ = (undefined4)pFVar11->_padding_;
            local_508._padding_._4_4_ = (int)((ulonglong)pFVar11->_padding_ >> 0x20);
            local_508._padding_._0_4_ = (undefined4)pFVar11->_padding_;
            local_508._padding_._4_4_ = (undefined4)((ulonglong)pFVar11->_padding_ >> 0x20);
            local_508._padding_ = pFVar11->_padding_;
            local_508._padding_ = pFVar11->_padding_;
            local_508._padding_ = pFVar11->_padding_;
            FMovieSceneSequenceTransform::operator=
                      (&local_508.RootToSequenceTransform,&pFVar11->RootToSequenceTransform);
            FMovieSceneWarpCounter::operator=
                      (&local_508.RootToSequenceWarpCounter,&pFVar11->RootToSequenceWarpCounter);
            local_508.Status = pFVar11->Status;
            local_508.PrePostRollStartEndTime.Value = (pFVar11->PrePostRollStartEndTime).Value;
            local_508.HierarchicalBias = pFVar11->HierarchicalBias;
            bVar14 = local_508._124_1_ & 0xfe | pFVar11->bHasJumped;
            bVar14 = (bVar14 ^ pFVar11->field_0x7c) & 2 ^ bVar14;
            bVar14 = (bVar14 ^ pFVar11->field_0x7c) & 4 ^ bVar14;
            bVar14 = (bVar14 ^ pFVar11->field_0x7c) & 8 ^ bVar14;
            bVar14 = (bVar14 ^ pFVar11->field_0x7c) & 0x10 ^ bVar14;
            bVar14 = (bVar14 ^ pFVar11->field_0x7c) & 0x20 ^ bVar14;
            local_508._124_1_ = (bVar14 ^ pFVar11->field_0x7c) & 0x40 ^ bVar14;
            if (local_208.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_208.RootToSequenceWarpCounter.WarpCounts.AllocatorInstance.Data);
            }
            if ((void *)local_208.RootToSequenceWarpCounter._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_208.RootToSequenceWarpCounter._padding_);
            }
            if (local_208.RootToSequenceTransform.NestedTransforms.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_208.RootToSequenceTransform.NestedTransforms.AllocatorInstance.
                            Data);
            }
            uVar45 = *puVar46;
            local_548 = (undefined4)*(undefined8 *)(uVar45 + 0x9c);
            iStack_544 = (int)((ulonglong)*(undefined8 *)(uVar45 + 0x9c) >> 0x20);
            uStack_540 = (undefined4)*(undefined8 *)(uVar45 + 0xa4);
            iStack_53c = (int)((ulonglong)*(undefined8 *)(uVar45 + 0xa4) >> 0x20);
            local_518 = (undefined4)*(undefined8 *)(uVar45 + 0x8c);
            iStack_514 = (int)((ulonglong)*(undefined8 *)(uVar45 + 0x8c) >> 0x20);
            uStack_510 = (undefined4)*(undefined8 *)(uVar45 + 0x94);
            iStack_50c = (int)((ulonglong)*(undefined8 *)(uVar45 + 0x94) >> 0x20);
            iVar31 = local_508._padding_._4_4_;
            if (local_508._padding_._4_4_ == -0x80000000) {
              if ((int)local_508._padding_ == 0) {
                if ((local_508._padding_._4_1_ == '\x02') &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Type != ERangeBoundTypes::Open",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                       ,99,L""), bVar8)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                iVar31 = (int)local_508._padding_;
              }
              else {
                iVar31 = local_508._padding_._4_4_;
                if (((char)local_508._padding_ == '\x02') &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Type != ERangeBoundTypes::Open",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                                       ,99,L""), iVar31 = local_508._padding_._4_4_, bVar8)) {
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
              }
            }
            local_464 = 1;
            local_460 = iVar31;
            cVar16 = (char)local_518;
            if ((char)local_518 == '\x02') {
              piVar34 = &iStack_514;
LAB_1461a37c9:
              if (cVar16 == (char)local_518) goto LAB_1461a37d1;
LAB_1461a3861:
              local_454 = 1;
              local_450 = iVar31;
              cVar16 = (char)local_548;
              if ((char)local_548 == '\x02') {
                piVar34 = &iStack_544;
LAB_1461a38a6:
                if (cVar16 == (char)local_548) goto LAB_1461a38ae;
              }
              else {
                if (iVar31 <= iStack_544) {
                  if ((iVar31 < iStack_544) || ((char)local_548 != '\x01')) {
                    piVar34 = &local_450;
                    cVar16 = '\x01';
                  }
                  else {
                    piVar34 = &iStack_544;
                  }
                  goto LAB_1461a38a6;
                }
                piVar34 = &iStack_544;
LAB_1461a38ae:
                if ((cVar16 == '\x02') || (*piVar34 == iStack_544)) {
                  local_44c = 1;
                  local_448[0] = iVar31;
                  cVar16 = (char)uStack_540;
                  cVar15 = cVar16;
                  if (cVar16 == '\x02') {
                    piVar34 = &iStack_53c;
LAB_1461a3902:
                    bVar8 = cVar15 != cVar16;
                    cVar16 = cVar15;
                    if (bVar8) goto LAB_1461a393f;
                  }
                  else {
                    if (iStack_53c <= iVar31) {
                      if ((iStack_53c < iVar31) || (cVar16 != '\x01')) {
                        piVar34 = local_448;
                        cVar15 = '\x01';
                      }
                      else {
                        piVar34 = &iStack_53c;
                      }
                      goto LAB_1461a3902;
                    }
                    piVar34 = &iStack_53c;
                  }
                  if (((cVar16 == '\x02') || (*piVar34 == iStack_53c)) &&
                     ((char)local_548 != '\x02')) {
                    local_508.PrePostRollStartEndTime.Value = iStack_544;
                    bVar14 = 0;
                    if ((int)local_508._padding_ == 1) {
                      bVar14 = 0x20;
                    }
                    bVar14 = bVar14 | local_508._124_1_ & 0xdf;
                    local_508._124_1_ = (~(bVar14 * '\x02') ^ bVar14) & 0x40 ^ bVar14;
                    goto LAB_1461a394a;
                  }
                }
              }
LAB_1461a393f:
              local_508._124_1_ = local_508._124_1_ & 0x9f;
              local_508.PrePostRollStartEndTime.Value = -0x80000000;
            }
            else {
              if (iVar31 <= iStack_514) {
                if ((iVar31 < iStack_514) || ((char)local_518 != '\x01')) {
                  piVar34 = &local_460;
                  cVar16 = '\x01';
                }
                else {
                  piVar34 = &iStack_514;
                }
                goto LAB_1461a37c9;
              }
              piVar34 = &iStack_514;
LAB_1461a37d1:
              if ((cVar16 != '\x02') && (*piVar34 != iStack_514)) goto LAB_1461a3861;
              local_45c = 1;
              local_458 = iVar31;
              cVar15 = (char)uStack_510;
              cVar16 = cVar15;
              if (cVar15 == '\x02') {
                piVar34 = &iStack_50c;
LAB_1461a3820:
                if (cVar16 != cVar15) goto LAB_1461a3861;
              }
              else {
                if (iStack_50c <= iVar31) {
                  if ((iStack_50c < iVar31) || (cVar15 != '\x01')) {
                    piVar34 = &local_458;
                    cVar16 = '\x01';
                  }
                  else {
                    piVar34 = &iStack_50c;
                  }
                  goto LAB_1461a3820;
                }
                piVar34 = &iStack_50c;
              }
              if (((cVar16 != '\x02') && (*piVar34 != iStack_50c)) || (cVar15 == '\x02'))
              goto LAB_1461a3861;
              local_508.PrePostRollStartEndTime.Value = iStack_50c;
              bVar14 = 0;
              if ((int)local_508._padding_ == 0) {
                bVar14 = 0x20;
              }
              bVar14 = bVar14 | local_508._124_1_ & 0xdf;
              local_508._124_1_ = (~(bVar14 * '\x02') ^ bVar14) & 0x40 ^ bVar14;
            }
LAB_1461a394a:
            local_508.HierarchicalBias = (int)*(short *)(*puVar46 + 0xac);
          }
          pFVar37 = local_560;
          uVar22 = (uint)local_570;
          local_428 = local_560;
          uStack_420 = uVar22;
          uStack_41c = uVar29;
          if (((pFVar44->TrackTemplate).field_0x30 & 1) != 0) {
            bVar14 = (pFVar44->TrackTemplate).field_0x30;
            pFVar26 = &pFVar44->TrackTemplate;
            pFVar13 = pFVar26;
            if ((bVar14 & 2) == 0) {
              pFVar13 = *(FMovieSceneTrackImplementationPtr **)pFVar26;
            }
            if ((pFVar13->field_0x8 & 8) != 0) {
              if (((bVar14 & 1) == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("bIsValid",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                                     ,0x97,
                                     L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                                    ), bVar8)) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              if (((pFVar44->TrackTemplate).field_0x30 & 2) == 0) {
                pFVar26 = *(FMovieSceneTrackImplementationPtr **)&pFVar44->TrackTemplate;
              }
              local_2a8 = (undefined4)local_428;
              uStack_2a4 = local_428._4_4_;
              uStack_2a0 = uStack_420;
              uStack_29c = uStack_41c;
              (**(code **)(*(longlong *)pFVar26 + 0x30))(pFVar26,pFVar44,&local_2a8,&local_538);
              FVar24 = local_568;
              goto LAB_1461a3a1f;
            }
          }
          local_398 = local_560;
          uStack_390 = uVar22;
          if (pFVar44->EvaluationMethod == Static) {
            uStack_38c = uVar29;
            pFVar11 = FMovieSceneContext::FMovieSceneContext(&local_108,&local_508);
            local_378._12_4_ = uStack_38c;
            local_378.ArrayNum = uStack_390;
            local_378.DataPtr = local_398;
            FMovieSceneEvaluationTrack::EvaluateStatic
                      (pFVar44,&local_378,&local_538,pFVar11,&local_418,pFVar2);
            FVar24 = local_568;
          }
          else {
            FVar24 = local_568;
            if (pFVar44->EvaluationMethod == Swept) {
              local_298._12_4_ = uVar29;
              local_298.ArrayNum = uVar22;
              local_298.DataPtr = local_560;
              FMovieSceneEvaluationTrack::EvaluateSwept
                        (pFVar44,&local_298,&local_538,&local_508,&local_418,pFVar2);
              FVar24 = local_568;
            }
          }
        }
LAB_1461a3a1f:
        local_574 = local_574 + 1;
        uVar35 = (ulonglong)local_574;
        uVar45 = local_480 + 1;
        local_560 = pFVar37 + uVar22;
        param_1 = local_488;
        local_480 = uVar45;
      } while ((longlong)uVar45 < local_478);
      pFVar27 = local_440;
      this = local_558;
      uVar28 = local_378._12_4_;
    }
    FMovieSceneExecutionTokens::Apply(&this->ExecutionTokens,&local_368,local_3d8);
    uVar35 = (ulonglong)local_574;
    pFVar27 = pFVar27 + 8;
    uVar17 = (ulonglong)local_468;
    param_1 = local_488;
  } while( true );
}

// Finish @ 1461aa1f0

void __thiscall
FMovieSceneTrackEvaluator::Finish(FMovieSceneTrackEvaluator *this,IMovieScenePlayer *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  FMovieSceneEvaluationMetaData *this_00;
  
  this_00 = &this->ThisFrameMetaData;
  iVar3 = (this->LastFrameMetaData).ActiveSequences.ArrayNum;
  iVar4 = (this->LastFrameMetaData).ActiveSequences.ArrayMax;
  pFVar1 = (this_00->ActiveSequences).AllocatorInstance.Data;
  iVar5 = (this->ThisFrameMetaData).ActiveSequences.ArrayNum;
  iVar6 = (this->ThisFrameMetaData).ActiveSequences.ArrayMax;
  pFVar2 = (this->ThisFrameMetaData).ActiveEntities.AllocatorInstance.Data;
  iVar7 = (this->ThisFrameMetaData).ActiveEntities.ArrayNum;
  iVar8 = (this->ThisFrameMetaData).ActiveEntities.ArrayMax;
  (this_00->ActiveSequences).AllocatorInstance.Data =
       (this->LastFrameMetaData).ActiveSequences.AllocatorInstance.Data;
  (this->ThisFrameMetaData).ActiveSequences.ArrayNum = iVar3;
  (this->ThisFrameMetaData).ActiveSequences.ArrayMax = iVar4;
  iVar3 = (this->LastFrameMetaData).ActiveEntities.ArrayNum;
  iVar4 = (this->LastFrameMetaData).ActiveEntities.ArrayMax;
  (this->ThisFrameMetaData).ActiveEntities.AllocatorInstance.Data =
       (this->LastFrameMetaData).ActiveEntities.AllocatorInstance.Data;
  (this->ThisFrameMetaData).ActiveEntities.ArrayNum = iVar3;
  (this->ThisFrameMetaData).ActiveEntities.ArrayMax = iVar4;
  (this->LastFrameMetaData).ActiveSequences.AllocatorInstance.Data = pFVar1;
  (this->LastFrameMetaData).ActiveSequences.ArrayNum = iVar5;
  (this->LastFrameMetaData).ActiveSequences.ArrayMax = iVar6;
  (this->LastFrameMetaData).ActiveEntities.AllocatorInstance.Data = pFVar2;
  (this->LastFrameMetaData).ActiveEntities.ArrayNum = iVar7;
  (this->LastFrameMetaData).ActiveEntities.ArrayMax = iVar8;
  FMovieSceneEvaluationMetaData::Reset(this_00);
  ConstructEvaluationPtrCache(this);
  CallSetupTearDown(this,param_1,(FDelayedPreAnimatedStateRestore *)0x0);
  return;
}

// GetReferencerName @ 1461b3420

FString * __thiscall
FMovieSceneTrackEvaluator::GetReferencerName
          (FMovieSceneTrackEvaluator *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FMovieSceneTrackEvaluator");
  return __return_storage_ptr__;
}

// GetSequence @ 1461b38e0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

UMovieSceneSequence * __thiscall
FMovieSceneTrackEvaluator::GetSequence
          (FMovieSceneTrackEvaluator *this,FMovieSceneSequenceID *param_1)

{
  UMovieSceneSequence *pUVar1;
  FMovieSceneSequenceHierarchy *this_00;
  FMovieSceneSubSequenceData *this_01;
  
  pUVar1 = (UMovieSceneSequence *)FWeakObjectPtr::Get(&(this->RootSequence).WeakPtr);
  if (pUVar1 != (UMovieSceneSequence *)0x0) {
    if (param_1->Value == 0) {
      return pUVar1;
    }
    this_00 = UMovieSceneCompiledDataManager::FindHierarchy
                        ((this->CompiledDataManager).field0_0x0.DebugPtr,
                         (FMovieSceneCompiledDataID)(this->RootCompiledDataID).Value);
    if ((this_00 != (FMovieSceneSequenceHierarchy *)0x0) &&
       (this_01 = FMovieSceneSequenceHierarchy::FindSubData(this_00,param_1),
       this_01 != (FMovieSceneSubSequenceData *)0x0)) {
      pUVar1 = FMovieSceneSubSequenceData::GetSequence(this_01);
      return pUVar1;
    }
  }
  return (UMovieSceneSequence *)0x0;
}

// InvalidateCachedData @ 1461ba330

void __thiscall FMovieSceneTrackEvaluator::InvalidateCachedData(FMovieSceneTrackEvaluator *this)

{
  int *piVar1;
  
  piVar1 = &(this->CachedPtrs).Pairs.ArrayMax;
  (this->CachedPtrs).Pairs.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>_>
              (0x20,8,0,(ForElementType<TTuple<FMovieSceneSequenceID,FMovieSceneTrackEvaluator::FCachedPtrs>_>
                         *)&this->CachedPtrs,0,piVar1);
    this->CachedReallocationVersion = 0;
    return;
  }
  this->CachedReallocationVersion = 0;
  return;
}

// SetupFrame @ 1461d37d0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FMovieSceneEvaluationGroup * __thiscall
FMovieSceneTrackEvaluator::SetupFrame
          (FMovieSceneTrackEvaluator *this,UMovieSceneSequence *param_1,
          FMovieSceneSequenceID param_2,FMovieSceneContext *param_3)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  code *pcVar4;
  FMovieSceneTimeTransform *pFVar5;
  bool bVar6;
  uint uVar7;
  FMovieSceneSequenceHierarchy *pFVar8;
  FMovieSceneEvaluationGroup *pFVar9;
  FMovieSceneEvaluationField *this_00;
  uint *puVar10;
  FFrameTime FVar11;
  uint uVar12;
  undefined1 *puVar13;
  TEnumAsByte<ERangeBoundTypes::Type> TVar14;
  FFrameNumber FVar15;
  longlong lVar16;
  FMovieSceneNestedSequenceTransform *this_01;
  uint *puVar17;
  FMovieSceneNestedSequenceTransform *pFVar18;
  FMovieSceneCompiledDataID local_res8;
  FMovieSceneTimeTransform *local_res10;
  undefined1 local_res18 [8];
  FMovieSceneTimeTransform *local_res20;
  FMovieSceneTimeTransform *local_78;
  TRangeBound<FFrameNumber> local_70;
  TRangeBound<FFrameNumber> local_68;
  undefined1 local_60 [8];
  TRange<FFrameNumber> local_58;
  
  pFVar8 = UMovieSceneCompiledDataManager::FindHierarchy
                     ((this->CompiledDataManager).field0_0x0.DebugPtr,
                      (FMovieSceneCompiledDataID)(this->RootCompiledDataID).Value);
  if ((param_1 == (UMovieSceneSequence *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("OverrideRootSequence",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\Instances\\MovieSceneTrackEvaluator.cpp"
                         ,0xb9,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pFVar9 = (FMovieSceneEvaluationGroup *)(*pcVar4)();
    return pFVar9;
  }
  (this->RootID).Value = param_2.Value;
  UE::MovieScene::FSubSequencePath::Reset(&this->RootOverridePath,param_2,pFVar8);
  FMovieSceneEvaluationRange::TimeRangeToNumberRange(&local_58,(TRange<FFrameTime> *)param_3);
  if ((int)param_3->_padding_ == 0) {
    local_70 = local_58.UpperBound;
    TVar14 = local_58.UpperBound.Type.Value;
    if ((TVar14.Value == '\x02') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InUpperBound.IsOpen()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                           ,0x44,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FMovieSceneEvaluationGroup *)(*pcVar4)();
      return pFVar9;
    }
    lVar16 = 0;
    if (TVar14.Value == '\x01') {
      lVar16 = 4;
    }
    iVar1 = *(int *)((longlong)
                     &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteExclusiveUpper(TRangeBound<FFrameNumber>_const&___ptr64)'
                      ::__l2::Offsets + lVar16);
    if ((TVar14.Value == '\x02') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FMovieSceneEvaluationGroup *)(*pcVar4)();
      return pFVar9;
    }
    FVar15.Value = iVar1 + local_70.Value.Value + -1;
  }
  else {
    local_68 = local_58.LowerBound;
    TVar14 = local_58.LowerBound.Type.Value;
    if ((TVar14.Value == '\x02') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InLowerBound.IsOpen()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\MovieSceneTimeHelpers.h"
                           ,0x2c,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FMovieSceneEvaluationGroup *)(*pcVar4)();
      return pFVar9;
    }
    lVar16 = 0;
    if (TVar14.Value == '\0') {
      lVar16 = 4;
    }
    iVar1 = *(int *)((longlong)
                     &`struct_FFrameNumber___cdecl_UE::MovieScene::DiscreteInclusiveLower(TRangeBound<FFrameNumber>_const&___ptr64)'
                      ::__l2::Offsets + lVar16);
    if ((TVar14.Value == '\x02') &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Type != ERangeBoundTypes::Open",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                           ,99,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FMovieSceneEvaluationGroup *)(*pcVar4)();
      return pFVar9;
    }
    FVar15.Value = iVar1 + local_68.Value.Value;
  }
  local_res10 = (FMovieSceneTimeTransform *)(ulonglong)(uint)FVar15.Value;
  if (param_2.Value == 0) {
    this_00 = UMovieSceneCompiledDataManager::FindTrackTemplateField
                        ((this->CompiledDataManager).field0_0x0.DebugPtr,
                         (FMovieSceneCompiledDataID)(this->RootCompiledDataID).Value);
  }
  else {
    if ((pFVar8 == (FMovieSceneSequenceHierarchy *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RootHierarchy",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\Instances\\MovieSceneTrackEvaluator.cpp"
                           ,199,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      pFVar9 = (FMovieSceneEvaluationGroup *)(*pcVar4)();
      return pFVar9;
    }
    UMovieSceneCompiledDataManager::FindDataID
              ((this->CompiledDataManager).field0_0x0.DebugPtr,(UMovieSceneSequence *)&local_res8);
    this_00 = UMovieSceneCompiledDataManager::FindTrackTemplateField
                        ((this->CompiledDataManager).field0_0x0.DebugPtr,local_res8);
    if (*(int *)&(pFVar8->SubSequences).field_0x8 != *(int *)&(pFVar8->SubSequences).field_0x34) {
      puVar13 = *(undefined1 **)&(pFVar8->SubSequences).field_0x40;
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = &(pFVar8->SubSequences).field_0x38;
      }
      uVar7 = *(uint *)(puVar13 +
                       (ulonglong)(*(int *)&(pFVar8->SubSequences).field_0x48 - 1U & param_2.Value)
                       * 4);
      if (uVar7 != 0xffffffff) {
        do {
          puVar10 = (uint *)((longlong)(int)uVar7 * 0x120 + *(longlong *)&pFVar8->SubSequences);
          if (*puVar10 == param_2.Value) {
            puVar17 = puVar10 + 2;
            if (puVar10 == (uint *)0x0) {
              puVar17 = (uint *)0x0;
            }
            if (puVar17 != (uint *)0x0) {
              if (puVar17[0x16] == 0) {
                ::operator*((FFrameTime)&local_78,local_res10);
              }
              else {
                ::operator*((FFrameTime)&local_res20,local_res10);
                uVar7 = puVar17[0x16];
                this_01 = *(FMovieSceneNestedSequenceTransform **)(puVar17 + 0x14);
                pFVar18 = this_01 + (int)uVar7;
                while( true ) {
                  pFVar5 = local_res20;
                  if (puVar17[0x16] != uVar7) {
                    local_res18[0] = 0;
                    `TCheckedPointerIterator<FMovieSceneNestedSequenceTransform_const_,int,0>::
                    operator!='::__l2::<lambda_1>::operator()(local_res18);
                  }
                  local_78 = pFVar5;
                  if (this_01 == pFVar18) break;
                  FVar11 = FMovieSceneNestedSequenceTransform::TransformTime
                                     (this_01,(FFrameTime)local_60);
                  this_01 = this_01 + 1;
                  local_res20 = *(FMovieSceneTimeTransform **)FVar11;
                }
              }
              local_res10._0_4_ = (int)local_78;
              FVar15.Value = (int)local_res10;
              local_res10 = local_78;
            }
            break;
          }
          uVar7 = puVar10[0x46];
        } while (uVar7 != 0xffffffff);
      }
    }
  }
  if (this_00 != (FMovieSceneEvaluationField *)0x0) {
    uVar7 = FMovieSceneEvaluationField::GetSegmentFromTime(this_00,FVar15);
    if (uVar7 != 0xffffffff) {
      uVar12 = 0;
      if ((int)uVar7 < (this_00->MetaData).ArrayNum) {
        uVar12 = ~uVar7 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FMovieSceneEvaluationGroup *)(*pcVar4)();
        return pFVar9;
      }
      FMovieSceneEvaluationMetaData::operator=
                (&this->ThisFrameMetaData,
                 (FMovieSceneEvaluationMetaData *)
                 ((this_00->MetaData).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x20));
      uVar12 = 0;
      if ((int)uVar7 < (this_00->Groups).ArrayNum) {
        uVar12 = ~uVar7 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        pFVar9 = (FMovieSceneEvaluationGroup *)(*pcVar4)();
        return pFVar9;
      }
      pFVar2 = (param_3->RootToSequenceWarpCounter).WarpCounts.AllocatorInstance.Data;
      pFVar9 = (FMovieSceneEvaluationGroup *)
               ((this_00->Groups).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x30);
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      pvVar3 = (void *)(param_3->RootToSequenceWarpCounter)._padding_;
      if (pvVar3 != (void *)0x0) {
        FMemory::Free(pvVar3);
      }
      pFVar2 = (param_3->RootToSequenceTransform).NestedTransforms.AllocatorInstance.Data;
      if (pFVar2 == (FScriptContainerElement *)0x0) {
        return pFVar9;
      }
      FMemory::Free(pFVar2);
      return pFVar9;
    }
  }
  pFVar2 = (param_3->RootToSequenceWarpCounter).WarpCounts.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar3 = (void *)(param_3->RootToSequenceWarpCounter)._padding_;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  pFVar2 = (param_3->RootToSequenceTransform).NestedTransforms.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return (FMovieSceneEvaluationGroup *)0x0;
}


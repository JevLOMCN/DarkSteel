// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// FPersistentEvaluationData @ 146181830

FPersistentEvaluationData * __thiscall
FPersistentEvaluationData::FPersistentEvaluationData
          (FPersistentEvaluationData *this,IMovieScenePlayer *param_1)

{
  FMovieSceneEvaluationState *pFVar1;
  
  this->Player = param_1;
  this->EntityData =
       (TMap<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>_>
        *)0x0;
  this->SharedData =
       (TMap<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>_>
        *)0x0;
  (this->TrackKey).SequenceID = 0xffffffff;
  (this->TrackKey).TrackIdentifier = 0xffffffff;
  *(undefined8 *)&(this->TrackKey).SectionIndex = 0xffffffffffffffff;
  (this->SectionKey).TrackIdentifier = 0xffffffff;
  (this->SectionKey).SectionIndex = 0xffffffff;
  pFVar1 = IMovieScenePlayer::GetEvaluationState(param_1);
  if (pFVar1 != (FMovieSceneEvaluationState *)0x0) {
    this->SharedData = &pFVar1->PersistentSharedData;
    this->EntityData = &pFVar1->PersistentEntityData;
  }
  return this;
}

// GetInstanceData @ 1461b1150

FMovieSceneSequenceInstanceData * __thiscall
FPersistentEvaluationData::GetInstanceData(FPersistentEvaluationData *this)

{
  longlong lVar1;
  FMovieSceneSequenceHierarchy *this_00;
  FMovieSceneSubSequenceData *pFVar2;
  UMovieSceneCompiledDataManager *pUVar3;
  FMovieSceneCompiledDataID FVar4;
  longlong lVar5;
  UMovieSceneCompiledDataManager *pUVar6;
  
  lVar1 = (**(code **)(this->Player->_padding_ + 0x18))();
  pUVar6 = (UMovieSceneCompiledDataManager *)0x0;
  lVar5 = *(longlong *)(lVar1 + 8);
  pUVar3 = pUVar6;
  if (lVar5 != 0) {
    pUVar3 = *(UMovieSceneCompiledDataManager **)(lVar5 + 0x28);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar3 != (UMovieSceneCompiledDataManager *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar3);
      lVar5 = *(longlong *)(lVar1 + 8);
    }
    if (lVar5 != 0) {
      FVar4.Value = *(int *)(lVar5 + 0x34);
      goto LAB_1461b11b5;
    }
  }
  FVar4.Value = -1;
LAB_1461b11b5:
  this_00 = UMovieSceneCompiledDataManager::FindHierarchy(pUVar3,FVar4);
  pUVar3 = (UMovieSceneCompiledDataManager *)0x0;
  if (((this_00 != (FMovieSceneSequenceHierarchy *)0x0) &&
      (pFVar2 = FMovieSceneSequenceHierarchy::FindSubData(this_00,&(this->TrackKey).SequenceID),
      pUVar3 = pUVar6, pFVar2 != (FMovieSceneSubSequenceData *)0x0)) &&
     (((pFVar2->InstanceData).field_0x10 & 1) != 0)) {
    pUVar3 = (UMovieSceneCompiledDataManager *)
             TInlineValue<FMovieSceneSequenceInstanceData,16,8>::GetValue
                       ((TInlineValue<FMovieSceneSequenceInstanceData,16,8> *)&pFVar2->InstanceData)
    ;
  }
  return (FMovieSceneSequenceInstanceData *)pUVar3;
}


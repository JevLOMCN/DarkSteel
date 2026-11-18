// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// Execute @ 146669d70

void __thiscall
TPropertyTrackExecutionToken<UObject_*,FMovieSceneObjectBindingID>::Execute
          (TPropertyTrackExecutionToken<UObject_*,FMovieSceneObjectBindingID> *this,
          FMovieSceneContext *param_1,FMovieSceneEvaluationOperand *param_2,
          FPersistentEvaluationData *param_3,IMovieScenePlayer *param_4)

{
  int iVar1;
  FTrackInstancePropertyBindings *this_00;
  FSectionData *pFVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  FWeakObjectPtr *pFVar6;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res18 [2];
  IMovieScenePreAnimatedTokenProducer local_68;
  FTrackInstancePropertyBindings *local_60;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_58;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_48;
  
  pFVar2 = FPersistentEvaluationData::GetSectionData<PropertyTemplate::FSectionData>(param_3);
  this_00 = (pFVar2->PropertyBindings).Object;
  FMovieSceneObjectBindingID::ResolveBoundObjects
            (&this->Value,&local_58,(FMovieSceneSequenceID)(param_2->SequenceID).Value,param_4);
  for (pFVar6 = &(local_58.DataPtr)->WeakPtr; pFVar6 != &local_58.DataPtr[local_58.ArrayNum].WeakPtr
      ; pFVar6 = pFVar6 + 1) {
    local_res8 = *pFVar6;
    pUVar3 = FWeakObjectPtr::Get(&local_res8);
    if (pUVar3 != (UObject *)0x0) {
      pUVar4 = Z_Construct_UClass_AActor_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) goto LAB_146669e1e;
    }
  }
  pUVar3 = (UObject *)0x0;
LAB_146669e1e:
  IMovieScenePlayer::FindBoundObjects
            (param_4,&local_48,&param_2->ObjectBindingID,&param_2->SequenceID);
  for (pFVar6 = &(local_48.DataPtr)->WeakPtr; pFVar6 != &local_48.DataPtr[local_48.ArrayNum].WeakPtr
      ; pFVar6 = pFVar6 + 1) {
    local_res18[0] = *pFVar6;
    pUVar5 = FWeakObjectPtr::Get(local_res18);
    if (pUVar5 != (UObject *)0x0) {
      local_68 = (IMovieScenePreAnimatedTokenProducer)
                 &___7__FTokenProducer_PEAVUObject___PropertyTemplate__6B_;
      local_60 = this_00;
      FMovieScenePreAnimatedState::SavePreAnimatedState
                (&param_4->PreAnimatedState,pUVar5,(FMovieSceneAnimTypeID)(pFVar2->PropertyID).ID,
                 &local_68);
      local_68 = (IMovieScenePreAnimatedTokenProducer)&___7IMovieScenePreAnimatedTokenProducer__6B_;
      FTrackInstancePropertyBindings::CallFunction<UObject_*>(this_00,pUVar5,pUVar3);
    }
  }
  return;
}

// Execute @ 146669ee0

void __thiscall
TPropertyTrackExecutionToken<bool,bool>::Execute
          (TPropertyTrackExecutionToken<bool,bool> *this,FMovieSceneContext *param_1,
          FMovieSceneEvaluationOperand *param_2,FPersistentEvaluationData *param_3,
          IMovieScenePlayer *param_4)

{
  bool bVar1;
  FTrackInstancePropertyBindings *this_00;
  FSectionData *pFVar2;
  UObject *pUVar3;
  FWeakObjectPtr *pFVar4;
  FWeakObjectPtr local_res8;
  IMovieScenePreAnimatedTokenProducer local_48;
  FTrackInstancePropertyBindings *local_40;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_38;
  
  pFVar2 = FPersistentEvaluationData::GetSectionData<PropertyTemplate::FSectionData>(param_3);
  bVar1 = this->Value;
  this_00 = (pFVar2->PropertyBindings).Object;
  IMovieScenePlayer::FindBoundObjects
            (param_4,&local_38,&param_2->ObjectBindingID,&param_2->SequenceID);
  for (pFVar4 = &(local_38.DataPtr)->WeakPtr; pFVar4 != &local_38.DataPtr[local_38.ArrayNum].WeakPtr
      ; pFVar4 = pFVar4 + 1) {
    local_res8 = *pFVar4;
    pUVar3 = FWeakObjectPtr::Get(&local_res8);
    if (pUVar3 != (UObject *)0x0) {
      local_48 = (IMovieScenePreAnimatedTokenProducer)&___7__FTokenProducer__N_PropertyTemplate__6B_
      ;
      local_40 = this_00;
      FMovieScenePreAnimatedState::SavePreAnimatedState
                (&param_4->PreAnimatedState,pUVar3,(FMovieSceneAnimTypeID)(pFVar2->PropertyID).ID,
                 &local_48);
      local_48 = (IMovieScenePreAnimatedTokenProducer)&___7IMovieScenePreAnimatedTokenProducer__6B_;
      FTrackInstancePropertyBindings::CallFunction<bool>(this_00,pUVar3,bVar1);
    }
  }
  return;
}


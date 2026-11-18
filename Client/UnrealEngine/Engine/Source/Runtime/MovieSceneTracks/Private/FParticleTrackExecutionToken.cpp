// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// Execute @ 14666acb0

void __thiscall
FParticleTrackExecutionToken::Execute
          (FParticleTrackExecutionToken *this,FMovieSceneContext *param_1,
          FMovieSceneEvaluationOperand *param_2,FPersistentEvaluationData *param_3,
          IMovieScenePlayer *param_4)

{
  EParticleKey EVar1;
  int iVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  FMovieSceneAnimTypeID FVar5;
  UObject *pUVar6;
  FWeakObjectPtr *pFVar7;
  FWeakObjectPtr local_res18 [2];
  IMovieScenePreAnimatedTokenProducer local_48;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_40;
  
  IMovieScenePlayer::FindBoundObjects
            (param_4,&local_40,&param_2->ObjectBindingID,&param_2->SequenceID);
  pFVar7 = &(local_40.DataPtr)->WeakPtr;
  do {
    if (pFVar7 == &local_40.DataPtr[local_40.ArrayNum].WeakPtr) {
      return;
    }
    local_res18[0] = *pFVar7;
    pUVar3 = FWeakObjectPtr::Get(local_res18);
    if (pUVar3 == (UObject *)0x0) {
LAB_14666ad50:
      if (pUVar3 != (UObject *)0x0) {
        pUVar4 = Z_Construct_UClass_UFXSystemComponent_NoRegister();
        iVar2 = (int)pUVar4->_padding_;
        if ((iVar2 <= *(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38)) &&
           (pUVar6 = pUVar3,
           (longlong *)
           *(undefined1 **)
            (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
           &pUVar4->_padding_)) goto LAB_14666ad7f;
      }
      pUVar6 = (UObject *)0x0;
    }
    else {
      pUVar4 = Z_Construct_UClass_AEmitter_NoRegister();
      iVar2 = (int)pUVar4->_padding_;
      if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar2) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
          &pUVar4->_padding_)) goto LAB_14666ad50;
      pUVar6 = *(UObject **)&pUVar3[0x11].field_0x18;
    }
LAB_14666ad7f:
    if (pUVar6 != (UObject *)0x0) {
      local_48 = (IMovieScenePreAnimatedTokenProducer)&___7FActiveTokenProducer__6B_;
      FVar5.ID = TMovieSceneAnimTypeID<FActiveTokenProducer,0>::CachedID;
      if (TMovieSceneAnimTypeID<FActiveTokenProducer,0>::CachedID == 0) {
        FVar5.ID = FMovieSceneAnimTypeID::Initialize
                             (&TMovieSceneAnimTypeID<FActiveTokenProducer,0>::CachedID,0);
      }
      FMovieScenePreAnimatedState::SavePreAnimatedState
                (&param_4->PreAnimatedState,pUVar3,FVar5,&local_48);
      EVar1 = this->ParticleKey;
      if (EVar1 == Activate) {
        if ((pUVar6[3].field_0x22 & 0x10) == 0) {
          (**(code **)(*(longlong *)pUVar6 + 0x2c8))(pUVar6);
        }
      }
      else if (EVar1 == Deactivate) {
        (**(code **)(*(longlong *)pUVar6 + 0x2c8))(pUVar6,0,1);
      }
      else if (EVar1 == Trigger) {
        (**(code **)(*(longlong *)pUVar6 + 0xaf0))(pUVar6);
      }
    }
    pFVar7 = pFVar7 + 1;
  } while( true );
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 1

// Execute @ 14666aa10

void __thiscall
FParticleParameterExecutionToken::Execute
          (FParticleParameterExecutionToken *this,FMovieSceneContext *param_1,
          FMovieSceneEvaluationOperand *param_2,FPersistentEvaluationData *param_3,
          IMovieScenePlayer *param_4)

{
  int iVar1;
  ForElementType<FScalarParameterNameAndValue> FVar2;
  ForElementType<FColorParameterNameAndValue> FVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  FMovieSceneAnimTypeID FVar6;
  ForElementType<FScalarParameterNameAndValue> FVar7;
  ForElementType<FVectorParameterNameAndValue> FVar8;
  ForElementType<FColorParameterNameAndValue> FVar9;
  ForElementType<FVectorParameterNameAndValue> FVar10;
  FWeakObjectPtr *this_00;
  IMovieScenePreAnimatedTokenProducer local_res18;
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  IMovieScenePlayer::FindBoundObjects
            (param_4,&local_58,&param_2->ObjectBindingID,&param_2->SequenceID);
  this_00 = &(local_58.DataPtr)->WeakPtr;
  do {
    if (this_00 == &local_58.DataPtr[local_58.ArrayNum].WeakPtr) {
      return;
    }
    pUVar4 = FWeakObjectPtr::Get(this_00);
    if (pUVar4 == (UObject *)0x0) {
LAB_14666aaa6:
      pUVar4 = FWeakObjectPtr::Get(this_00);
      if (pUVar4 != (UObject *)0x0) {
        pUVar5 = Z_Construct_UClass_AEmitter_NoRegister();
        iVar1 = (int)pUVar5->_padding_;
        if (((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
            ((longlong *)
             *(undefined1 **)
              (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
             &pUVar5->_padding_)) &&
           (pUVar4 = *(UObject **)&pUVar4[0x11].field_0x18, pUVar4 != (UObject *)0x0))
        goto LAB_14666aaf5;
      }
    }
    else {
      pUVar5 = Z_Construct_UClass_UParticleSystemComponent_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) goto LAB_14666aaa6;
LAB_14666aaf5:
      local_res18 = (IMovieScenePreAnimatedTokenProducer)
                    &___7FParticleParameterPreAnimatedTokenProducer__6B_;
      FVar6.ID = TMovieSceneAnimTypeID<FParticleParameterExecutionToken,0>::CachedID;
      if (TMovieSceneAnimTypeID<FParticleParameterExecutionToken,0>::CachedID == 0) {
        FVar6.ID = FMovieSceneAnimTypeID::Initialize
                             (&TMovieSceneAnimTypeID<FParticleParameterExecutionToken,0>::CachedID,0
                             );
      }
      FMovieScenePreAnimatedState::SavePreAnimatedState
                (&param_4->PreAnimatedState,pUVar4,FVar6,&local_res18);
      FVar2 = (this->Values).ScalarValues.AllocatorInstance.SecondaryData;
      FVar7 = (ForElementType<FScalarParameterNameAndValue>)&this->Values;
      iVar1 = (this->Values).ScalarValues.ArrayNum;
      if (FVar2 != (ForElementType<FScalarParameterNameAndValue>)0x0) {
        FVar7 = FVar2;
      }
      FVar2 = (ForElementType<FScalarParameterNameAndValue>)
              ((longlong)FVar7 + (longlong)iVar1 * 0xc);
      while( true ) {
        if ((this->Values).ScalarValues.ArrayNum != iVar1) {
          `TCheckedPointerIterator<FScalarParameterNameAndValue,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_res18);
        }
        if (FVar7 == FVar2) break;
        (**(code **)(*(longlong *)pUVar4 + 0xaa0))
                  (pUVar4,*(undefined8 *)FVar7,*(undefined4 *)((longlong)FVar7 + 8));
        FVar7 = (ForElementType<FScalarParameterNameAndValue>)((longlong)FVar7 + 0xc);
      }
      iVar1 = (this->Values).VectorValues.ArrayNum;
      FVar8 = (ForElementType<FVectorParameterNameAndValue>)&(this->Values).VectorValues;
      FVar10 = (this->Values).VectorValues.AllocatorInstance.SecondaryData;
      if (FVar10 != (ForElementType<FVectorParameterNameAndValue>)0x0) {
        FVar8 = FVar10;
      }
      FVar10 = (ForElementType<FVectorParameterNameAndValue>)
               ((longlong)iVar1 * 0x20 + (longlong)FVar8);
      while( true ) {
        if ((this->Values).VectorValues.ArrayNum != iVar1) {
          `TCheckedPointerIterator<FVectorParameterNameAndValue,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_res18);
        }
        if (FVar8 == FVar10) break;
        local_48 = *(undefined4 *)((longlong)FVar8 + 8);
        uStack_44 = *(undefined4 *)((longlong)FVar8 + 0xc);
        uStack_40 = *(undefined4 *)((longlong)FVar8 + 0x10);
        uStack_3c = *(undefined4 *)((longlong)FVar8 + 0x14);
        local_38 = *(undefined8 *)((longlong)FVar8 + 0x18);
        (**(code **)(*(longlong *)pUVar4 + 0xaa8))(pUVar4,*(undefined8 *)FVar8,&local_48);
        FVar8 = (ForElementType<FVectorParameterNameAndValue>)((longlong)FVar8 + 0x20);
      }
      iVar1 = (this->Values).ColorValues.ArrayNum;
      FVar9 = (ForElementType<FColorParameterNameAndValue>)&(this->Values).ColorValues;
      FVar3 = (this->Values).ColorValues.AllocatorInstance.SecondaryData;
      if (FVar3 != (ForElementType<FColorParameterNameAndValue>)0x0) {
        FVar9 = FVar3;
      }
      FVar3 = (ForElementType<FColorParameterNameAndValue>)
              ((longlong)FVar9 + (longlong)iVar1 * 0x18);
      while( true ) {
        if ((this->Values).ColorValues.ArrayNum != iVar1) {
          `TCheckedPointerIterator<FColorParameterNameAndValue,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_res18);
        }
        if (FVar9 == FVar3) break;
        local_48 = *(undefined4 *)((longlong)FVar9 + 8);
        uStack_44 = *(undefined4 *)((longlong)FVar9 + 0xc);
        uStack_40 = *(undefined4 *)((longlong)FVar9 + 0x10);
        uStack_3c = *(undefined4 *)((longlong)FVar9 + 0x14);
        (**(code **)(*(longlong *)pUVar4 + 0xab0))(pUVar4,*(undefined8 *)FVar9,&local_48);
        FVar9 = (ForElementType<FColorParameterNameAndValue>)((longlong)FVar9 + 0x18);
      }
    }
    this_00 = this_00 + 1;
  } while( true );
}


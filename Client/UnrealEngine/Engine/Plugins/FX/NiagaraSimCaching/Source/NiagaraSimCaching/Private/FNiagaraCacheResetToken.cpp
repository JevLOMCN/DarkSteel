// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraSimCaching
// Functions: 1

// Execute @ 14ea237b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNiagaraCacheResetToken::Execute
          (FNiagaraCacheResetToken *this,FMovieSceneContext *param_1,
          FMovieSceneEvaluationOperand *param_2,FPersistentEvaluationData *param_3,
          IMovieScenePlayer *param_4)

{
  int iVar1;
  UNiagaraComponent *this_00;
  UClass *pUVar2;
  FWeakObjectPtr *pFVar3;
  FWeakObjectPtr local_res18 [2];
  TArrayView<TWeakObjectPtr<UObject,FWeakObjectPtr>,int> local_18;
  
  if ((((param_2->ObjectBindingID).D != 0 || (param_2->ObjectBindingID).C != 0) ||
      (param_2->ObjectBindingID).B != 0) || (param_2->ObjectBindingID).A != 0) {
    IMovieScenePlayer::FindBoundObjects
              (param_4,&local_18,&param_2->ObjectBindingID,&param_2->SequenceID);
    pFVar3 = &(local_18.DataPtr)->WeakPtr;
    if (&(local_18.DataPtr)->WeakPtr != &local_18.DataPtr[local_18.ArrayNum].WeakPtr) {
      do {
        local_res18[0] = *pFVar3;
        this_00 = (UNiagaraComponent *)FWeakObjectPtr::Get(local_res18);
        if (this_00 != (UNiagaraComponent *)0x0) {
          pUVar2 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
          iVar1 = (int)pUVar2->_padding_;
          if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
              &pUVar2->_padding_)) {
            UNiagaraComponent::SetSimCache(this_00,(UNiagaraSimCache *)0x0,false);
            return;
          }
        }
        pFVar3 = pFVar3 + 1;
        if (pFVar3 == &local_18.DataPtr[local_18.ArrayNum].WeakPtr) {
          return;
        }
      } while( true );
    }
  }
  return;
}


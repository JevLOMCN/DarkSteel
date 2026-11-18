// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// GetObjectBindingID @ 1460ce2b0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */

FGuid * __thiscall
UE::MovieScene::FEntityImportParams::GetObjectBindingID
          (FEntityImportParams *this,FGuid *__return_storage_ptr__)

{
  FMovieSceneEvaluationFieldSharedEntityMetaData *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  pFVar1 = this->SharedMetaData;
  if (pFVar1 != (FMovieSceneEvaluationFieldSharedEntityMetaData *)0x0) {
    uVar2 = (pFVar1->ObjectBindingID).B;
    uVar3 = (pFVar1->ObjectBindingID).C;
    uVar4 = (pFVar1->ObjectBindingID).D;
    __return_storage_ptr__->A = (pFVar1->ObjectBindingID).A;
    __return_storage_ptr__->B = uVar2;
    __return_storage_ptr__->C = uVar3;
    __return_storage_ptr__->D = uVar4;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  return __return_storage_ptr__;
}


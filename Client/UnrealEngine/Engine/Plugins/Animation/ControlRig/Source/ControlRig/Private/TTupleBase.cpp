// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TRead<UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FGuid>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FRootInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMovieSceneSequenceID>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FControlRigSourceData>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FBaseControlRigEvalData>_>,bool,bool> @ 14a3bc590

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TRead<UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FGuid>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FRootInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMovieSceneSequenceID>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FControlRigSourceData>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FBaseControlRigEvalData>_>,bool,bool>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TRead<UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FGuid>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FRootInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMovieSceneSequenceID>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FControlRigSourceData>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FBaseControlRigEvalData>_>,bool,bool>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7>,UE::MovieScene::TRead<UE::MovieScene::FMovieSceneEntityID>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FGuid>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FRootInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TReadOptional<FMovieSceneSequenceID>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FControlRigSourceData>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FBaseControlRigEvalData>_>,bool,bool>
           *this)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = *(longlong *)&this->field_0x68;
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)&this->field_0x70;
    if (*(ulonglong *)&this->field_0x70 < *(ulonglong *)(lVar2 + 0x28)) {
      uVar3 = *(ulonglong *)(lVar2 + 0x28);
    }
    *(ulonglong *)(lVar2 + 0x28) = uVar3;
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x68 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x78 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)&this->field_0x68 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x50 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x50 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x58 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x50 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x38 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x38 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x40 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x38 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x20 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x20 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x28 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x20 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x8 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x8 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x10 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014a3bc652. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x8 + 0x20));
      return;
    }
  }
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieSceneEvaluationHookComponent>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FFrameTime>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FEvaluationHookFlags>_>_> @ 14611d350

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieSceneEvaluationHookComponent>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FFrameTime>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FEvaluationHookFlags>_>_>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieSceneEvaluationHookComponent>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FFrameTime>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FEvaluationHookFlags>_>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<UE::MovieScene::FInstanceHandle>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FMovieSceneEvaluationHookComponent>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TRead<FFrameTime>_>,UE::MovieScene::TComponentLock<UE::MovieScene::TWrite<UE::MovieScene::FEvaluationHookFlags>_>_>
           *this)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = *(longlong *)&this->field_0x48;
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)&this->field_0x50;
    if (*(ulonglong *)&this->field_0x50 < *(ulonglong *)(lVar2 + 0x28)) {
      uVar3 = *(ulonglong *)(lVar2 + 0x28);
    }
    *(ulonglong *)(lVar2 + 0x28) = uVar3;
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x48 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x58 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(*(longlong *)&this->field_0x48 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x30 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x30 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x38 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x30 + 0x20));
    }
  }
  if (*(longlong *)&this->field_0x18 != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)&this->field_0x18 + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x20 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)&this->field_0x18 + 0x20));
    }
  }
  if (*(longlong *)this != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)this + 0x30);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)&this->field_0x8 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014611d3ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)this + 0x20));
      return;
    }
  }
  return;
}

// ApplyAfter<void_(__cdecl_UMovieSceneSequencePlayer::*const_&)(FMovieSceneSequencePlaybackParams),UMovieSceneSequencePlayer_*_&> @ 1461f0ee0

/* WARNING: Enum "EMovieSceneSequenceFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0>,FMovieSceneSequencePlaybackParams>::
ApplyAfter<void_(__cdecl_UMovieSceneSequencePlayer::*const_&)(FMovieSceneSequencePlaybackParams),UMovieSceneSequencePlayer_*_&>
          (TTupleBase<TIntegerSequence<unsigned_int,0>,FMovieSceneSequencePlaybackParams> *this,
          pmf_a1d89628 *param_1,UMovieSceneSequencePlayer **param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  UMovieSceneSequencePlayer *pUVar3;
  undefined8 local_58;
  undefined4 local_50;
  FString local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  
  pcVar1 = *(code **)param_1;
  uVar2 = *(undefined8 *)&param_1->field_0x8;
  pUVar3 = DereferenceIfNecessary<UMovieSceneSequencePlayer,UMovieSceneSequencePlayer_*_&>(param_2);
  local_50 = *(undefined4 *)&this->field_0x8;
  local_58 = *(undefined8 *)this;
  ::FString::FString(&local_48,(FString *)&this->field_0x10);
  local_20 = this->field_0x38;
  local_38 = *(undefined8 *)&this->field_0x20;
  uStack_30 = *(undefined8 *)&this->field_0x28;
  local_28 = *(undefined8 *)&this->field_0x30;
  local_1f = this->field_0x39;
  local_1e = this->field_0x3a;
  (*pcVar1)((longlong)&pUVar3->_padding_ + (longlong)(int)uVar2,&local_58);
  return;
}

// TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_> @ 146298f80

TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
* __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
::
TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
           *this,TTupleBase<TIntegerSequence<unsigned_int,0,1,2,3,4,5,6,7,8>,UE::MovieScene::TAdd<FMovieSceneSequenceID>,UE::MovieScene::FAdd,UE::MovieScene::TAddConditional<FMovieSceneSequenceID>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>,UE::MovieScene::TAddConditional<UE::MovieScene::FSourceDoubleChannel>_>
                 *param_1)

{
  char cVar1;
  
  *(undefined2 *)this = *(undefined2 *)param_1;
  this->field_0x8 = 0;
  cVar1 = param_1->field_0x8;
  this->field_0x8 = cVar1;
  if (cVar1 != '\0') {
    *(undefined4 *)&this->field_0x4 = *(undefined4 *)&param_1->field_0x4;
  }
  *(undefined2 *)&this->field_0xc = *(undefined2 *)&param_1->field_0xc;
  *(undefined4 *)&this->field_0x10 = *(undefined4 *)&param_1->field_0x10;
  this->field_0x18 = 0;
  cVar1 = param_1->field_0x18;
  this->field_0x18 = cVar1;
  if (cVar1 != '\0') {
    *(undefined4 *)&this->field_0x14 = *(undefined4 *)&param_1->field_0x14;
  }
  *(undefined4 *)&this->field_0x20 = *(undefined4 *)&param_1->field_0x20;
  this->field_0x30 = 0;
  cVar1 = param_1->field_0x30;
  this->field_0x30 = cVar1;
  if (cVar1 != '\0') {
    *(undefined8 *)&this->field_0x28 = *(undefined8 *)&param_1->field_0x28;
  }
  *(undefined4 *)&this->field_0x38 = *(undefined4 *)&param_1->field_0x38;
  this->field_0x48 = 0;
  cVar1 = param_1->field_0x48;
  this->field_0x48 = cVar1;
  if (cVar1 != '\0') {
    *(undefined8 *)&this->field_0x40 = *(undefined8 *)&param_1->field_0x40;
  }
  *(undefined4 *)&this->field_0x50 = *(undefined4 *)&param_1->field_0x50;
  this->field_0x60 = 0;
  cVar1 = param_1->field_0x60;
  this->field_0x60 = cVar1;
  if (cVar1 != '\0') {
    *(undefined8 *)&this->field_0x58 = *(undefined8 *)&param_1->field_0x58;
  }
  *(undefined4 *)&this->field_0x68 = *(undefined4 *)&param_1->field_0x68;
  this->field_0x78 = 0;
  cVar1 = param_1->field_0x78;
  this->field_0x78 = cVar1;
  if (cVar1 != '\0') {
    *(undefined8 *)&this->field_0x70 = *(undefined8 *)&param_1->field_0x70;
  }
  *(undefined4 *)&this->field_0x80 = *(undefined4 *)&param_1->field_0x80;
  this->field_0x90 = 0;
  cVar1 = param_1->field_0x90;
  this->field_0x90 = cVar1;
  if (cVar1 != '\0') {
    *(undefined8 *)&this->field_0x88 = *(undefined8 *)&param_1->field_0x88;
  }
  *(undefined4 *)&this->field_0x98 = *(undefined4 *)&param_1->field_0x98;
  this->field_0xa8 = 0;
  cVar1 = param_1->field_0xa8;
  this->field_0xa8 = cVar1;
  if (cVar1 != '\0') {
    *(undefined8 *)&this->field_0xa0 = *(undefined8 *)&param_1->field_0xa0;
  }
  return this;
}


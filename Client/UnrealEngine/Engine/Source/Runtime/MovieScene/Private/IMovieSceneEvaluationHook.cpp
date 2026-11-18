// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 10

// Begin @ 1461947f0

void __thiscall
IMovieSceneEvaluationHook::Begin
          (IMovieSceneEvaluationHook *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *param_1,FEvaluationHookParams *param_2
          )

{
  code *pcVar1;
  IMovieScenePlayer *pIVar2;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_18;
  
  pcVar1 = *(code **)((longlong)*this + 0x10);
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pIVar2 = UE::MovieScene::FPlayerIndexPlaybackCapability::GetPlayer(&local_18);
  (*pcVar1)(this,pIVar2,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// End @ 1461a1490

void __thiscall
IMovieSceneEvaluationHook::End
          (IMovieSceneEvaluationHook *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *param_1,FEvaluationHookParams *param_2
          )

{
  code *pcVar1;
  IMovieScenePlayer *pIVar2;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_18;
  
  pcVar1 = *(code **)((longlong)*this + 0x30);
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pIVar2 = UE::MovieScene::FPlayerIndexPlaybackCapability::GetPlayer(&local_18);
  (*pcVar1)(this,pIVar2,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Trigger @ 1461da6b0

void __thiscall
IMovieSceneEvaluationHook::Trigger
          (IMovieSceneEvaluationHook *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *param_1,FEvaluationHookParams *param_2
          )

{
  code *pcVar1;
  IMovieScenePlayer *pIVar2;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_18;
  
  pcVar1 = *(code **)((longlong)*this + 0x40);
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pIVar2 = UE::MovieScene::FPlayerIndexPlaybackCapability::GetPlayer(&local_18);
  (*pcVar1)(this,pIVar2,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// Update @ 1461de6e0

void __thiscall
IMovieSceneEvaluationHook::Update
          (IMovieSceneEvaluationHook *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *param_1,FEvaluationHookParams *param_2
          )

{
  code *pcVar1;
  IMovieScenePlayer *pIVar2;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_18;
  
  pcVar1 = *(code **)((longlong)*this + 0x20);
  local_18.Object = param_1->Object;
  local_18.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pIVar2 = UE::MovieScene::FPlayerIndexPlaybackCapability::GetPlayer(&local_18);
  (*pcVar1)(this,pIVar2,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// ~IMovieSceneEvaluationHook @ 1461ff820

void __thiscall
IMovieSceneEvaluationHook::~IMovieSceneEvaluationHook(IMovieSceneEvaluationHook *this)

{
  *this = (IMovieSceneEvaluationHook)&___7IMovieSceneEvaluationHook__6B_;
  return;
}

// Begin @ 1462084a0

void __thiscall
IMovieSceneEvaluationHook::Begin
          (IMovieSceneEvaluationHook *this,IMovieScenePlayer *param_1,FEvaluationHookParams *param_2
          )

{
  return;
}

// End @ 14620f640

void __thiscall
IMovieSceneEvaluationHook::End
          (IMovieSceneEvaluationHook *this,IMovieScenePlayer *param_1,FEvaluationHookParams *param_2
          )

{
  return;
}

// Trigger @ 146239a00

void __thiscall
IMovieSceneEvaluationHook::Trigger
          (IMovieSceneEvaluationHook *this,IMovieScenePlayer *param_1,FEvaluationHookParams *param_2
          )

{
  return;
}

// Update @ 14623b670

void __thiscall
IMovieSceneEvaluationHook::Update
          (IMovieSceneEvaluationHook *this,IMovieScenePlayer *param_1,FEvaluationHookParams *param_2
          )

{
  return;
}

// _getUObject @ 146241e70

UObject * __thiscall IMovieSceneEvaluationHook::_getUObject(IMovieSceneEvaluationHook *this)

{
  return (UObject *)0x0;
}


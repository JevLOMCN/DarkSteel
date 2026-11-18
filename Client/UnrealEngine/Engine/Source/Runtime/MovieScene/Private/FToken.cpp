// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// RestoreState @ 1461522a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`UE::MovieScene::FSpawnTrackPreAnimatedTokenProducer::CacheExistingState'::__l2::FToken::
RestoreState(void *this,UObject *param_1,FRestoreStateParams *param_2)

{
  int iVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSharedPlaybackState *this_00;
  code *pcVar3;
  bool bVar4;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *pTVar5;
  FMovieSceneSpawnRegister *this_01;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_38;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_28;
  
  pTVar5 = UE::MovieScene::FRestoreStateParams::GetTerminalPlaybackState(param_2,&local_28);
  pTVar2 = (pTVar5->SharedReferenceCount).ReferenceController;
  this_00 = pTVar5->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (this_00 == (FSharedPlaybackState *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_726948761313476557>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\EntitySystem\\MovieSceneSpawnablesSystem.cpp"
                       ,0x33,"PlaybackState");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    this_01 = UE::MovieScene::FSharedPlaybackState::FindCapability<FMovieSceneSpawnRegister>
                        (this_00);
    if (this_01 != (FMovieSceneSpawnRegister *)0x0) {
      iVar1 = *(int *)((longlong)this + 0x1c);
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_38.Object = this_00;
      local_38.SharedReferenceCount.ReferenceController = pTVar2;
      if ((this_00 == (FSharedPlaybackState *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x25d,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar4 = FMovieSceneSpawnRegister::DestroySpawnedObject
                        (this_01,(FGuid *)((longlong)this + 8),
                         (FMovieSceneSequenceID *)((longlong)this + 0x18),&local_38,iVar1);
      if (!bVar4) {
        (**(code **)(this_01->_padding_ + 0x20))(this_01,param_1,0);
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}


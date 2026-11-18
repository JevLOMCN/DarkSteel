// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// GetTerminalPlaybackState @ 1461b43b0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> * __thiscall
UE::MovieScene::FRestoreStateParams::GetTerminalPlaybackState
          (FRestoreStateParams *this,
          TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  FSharedPlaybackState *pFVar2;
  code *pcVar3;
  bool bVar4;
  FInstanceRegistry *pFVar5;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *pTVar6;
  longlong lVar7;
  
  if ((this->Linker != (UMovieSceneEntitySystemLinker *)0x0) &&
     ((this->TerminalInstanceHandle).InstanceID != 0xffff)) {
    pFVar5 = UMovieSceneEntitySystemLinker::GetInstanceRegistry(this->Linker);
    lVar7 = (ulonglong)(this->TerminalInstanceHandle).InstanceID * 0x140;
    pTVar1 = *(TReferenceControllerBase<1> **)(lVar7 + 0x120 + *(longlong *)&pFVar5->Instances);
    pFVar2 = *(FSharedPlaybackState **)(lVar7 + 0x118 + *(longlong *)&pFVar5->Instances);
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      __return_storage_ptr__->Object = pFVar2;
      (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
      return __return_storage_ptr__;
    }
    __return_storage_ptr__->Object = pFVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
    return __return_storage_ptr__;
  }
  bVar4 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_39367992357683165>,true,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\PreAnimatedState\\MovieSceneRestoreStateParams.cpp"
                     ,0x23,"false");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *)(*pcVar3)();
    return pTVar6;
  }
  __return_storage_ptr__->Object = (FSharedPlaybackState *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetTerminalPlayer @ 1461b4490

/* WARNING: Enum "Type": Some values do not have unique names */

IMovieScenePlayer * __thiscall
UE::MovieScene::FRestoreStateParams::GetTerminalPlayer(FRestoreStateParams *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FInstanceRegistry *pFVar4;
  IMovieScenePlayer *pIVar5;
  longlong lVar6;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> local_18;
  
  if ((this->Linker != (UMovieSceneEntitySystemLinker *)0x0) &&
     ((this->TerminalInstanceHandle).InstanceID != 0xffff)) {
    pFVar4 = UMovieSceneEntitySystemLinker::GetInstanceRegistry(this->Linker);
    lVar6 = (ulonglong)(this->TerminalInstanceHandle).InstanceID * 0x140;
    pTVar1 = *(TReferenceControllerBase<1> **)(lVar6 + 0x120 + *(longlong *)&pFVar4->Instances);
    local_18.Object = *(FSharedPlaybackState **)(lVar6 + 0x118 + *(longlong *)&pFVar4->Instances);
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_18.SharedReferenceCount.ReferenceController = pTVar1;
    pIVar5 = FPlayerIndexPlaybackCapability::GetPlayer(&local_18);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    return pIVar5;
  }
  bVar3 = Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_39367992357683177>,true,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Private\\Evaluation\\PreAnimatedState\\MovieSceneRestoreStateParams.cpp"
                     ,0x17,"false");
  if (!bVar3) {
    return (IMovieScenePlayer *)0x0;
  }
  pcVar2 = (code *)swi(3);
  pIVar5 = (IMovieScenePlayer *)(*pcVar2)();
  return pIVar5;
}


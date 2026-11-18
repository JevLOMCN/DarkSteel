// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaCompositing
// Functions: 2

// Add<FMovieSceneMediaPlayerStoreContainer> @ 14ea64cf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FMovieSceneMediaPlayerStoreContainer * __thiscall
FPersistentEvaluationData::Add<FMovieSceneMediaPlayerStoreContainer>
          (FPersistentEvaluationData *this,FSharedPersistentDataKey *param_1)

{
  TSharedPtr<FMovieSceneMediaPlayerStore,1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  FMovieSceneMediaPlayerStoreContainer *pFVar4;
  FMovieSceneMediaPlayerStoreContainer *pFVar5;
  FMovieSceneMediaPlayerStoreContainer *pFVar6;
  FDelegateHandle FVar7;
  FMovieSceneMediaPlayerStore *pFVar8;
  TPairInitializer<FSharedPersistentDataKey_const_&,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_&&>
  local_res8;
  FMovieSceneMediaPlayerStoreContainer *local_res18 [2];
  undefined1 local_78 [8];
  FMovieSceneMediaPlayerStore *local_70;
  FSharedReferencer<1> FStack_68;
  FSharedPersistentDataKey *local_60;
  FMovieSceneMediaPlayerStoreContainer **local_58;
  
  local_res8.Value =
       (TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_> *)param_1;
  if ((this->SharedData ==
       (TMap<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>_>
        *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PersistentEvaluationData.h"
                         ,0xd6,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar4 = (FMovieSceneMediaPlayerStoreContainer *)(*pcVar2)();
    return pFVar4;
  }
  pFVar5 = ::operator_new(0x18);
  pFVar4 = (FMovieSceneMediaPlayerStoreContainer *)0x0;
  if (pFVar5 != (FMovieSceneMediaPlayerStoreContainer *)0x0) {
    pTVar1 = &pFVar5->MediaPlayerStore;
    pTVar1->Object = (FMovieSceneMediaPlayerStore *)0x0;
    (pFVar5->MediaPlayerStore).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    pFVar5->_padding_ = (longlong)&___7FMovieSceneMediaPlayerStoreContainer__6B_;
    pFVar6 = ::operator_new(200);
    if (pFVar6 == (FMovieSceneMediaPlayerStoreContainer *)0x0) {
      local_70 = ___xmm_00000000000000000000000000000010;
      pFVar8 = (FMovieSceneMediaPlayerStore *)&DAT_00000010;
      FStack_68.ReferenceController = (TReferenceControllerBase<1> *)_UNK_150651568;
    }
    else {
      *(undefined4 *)&(pFVar6->MediaPlayerStore).Object = 1;
      *(undefined4 *)((longlong)&(pFVar6->MediaPlayerStore).Object + 4) = 1;
      pFVar6[1]._padding_ = 0;
      pFVar6->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_VFMovieSceneMediaPlayerStore___00_SharedPointerInternals__6B_
      ;
      pFVar6[1].MediaPlayerStore.Object = (FMovieSceneMediaPlayerStore *)0x0;
      (pFVar6->MediaPlayerStore).SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)&___7FMovieSceneMediaPlayerStore__6B_;
      pFVar6[2].MediaPlayerStore.Object = (FMovieSceneMediaPlayerStore *)0x0;
      *(undefined4 *)&pFVar6[2].MediaPlayerStore.SharedReferenceCount.ReferenceController = 0;
      *(undefined4 *)
       ((longlong)&pFVar6[2].MediaPlayerStore.SharedReferenceCount.ReferenceController + 4) = 0x80;
      *(undefined4 *)&pFVar6[3]._padding_ = 0xffffffff;
      *(undefined4 *)((longlong)&pFVar6[3]._padding_ + 4) = 0;
      pFVar6[3].MediaPlayerStore.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      *(undefined4 *)&pFVar6[4]._padding_ = 0;
      pFVar6[4].MediaPlayerStore.Object = (FMovieSceneMediaPlayerStore *)0x0;
      pFVar6[4].MediaPlayerStore.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      pFVar6[5].MediaPlayerStore.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      *(undefined4 *)&pFVar6[6]._padding_ = 0;
      *(undefined4 *)((longlong)&pFVar6[6]._padding_ + 4) = 0x80;
      *(undefined4 *)&pFVar6[6].MediaPlayerStore.Object = 0xffffffff;
      *(undefined4 *)((longlong)&pFVar6[6].MediaPlayerStore.Object + 4) = 0;
      pFVar6[7]._padding_ = 0;
      *(undefined4 *)&pFVar6[7].MediaPlayerStore.Object = 0;
      pFVar6[7].MediaPlayerStore.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)0x0;
      pFVar6[8]._padding_ = 0;
      FVar7 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
              AddRaw<FMovieSceneMediaPlayerStore>
                        ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                          *)&FCoreDelegates::OnEndFrame,
                         (FMovieSceneMediaPlayerStore *)(local_res18 + 1),
                         (pmf_e3b72090)&(pFVar6->MediaPlayerStore).SharedReferenceCount);
      pFVar6[7].MediaPlayerStore.SharedReferenceCount.ReferenceController =
           *(TReferenceControllerBase<1> **)FVar7.ID;
      FVar7 = TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
              AddRaw<FMovieSceneMediaPlayerStore>
                        ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                          *)&FCoreDelegates::OnPreExit,(FMovieSceneMediaPlayerStore *)local_78,
                         (pmf_e3b72090)&(pFVar6->MediaPlayerStore).SharedReferenceCount);
      pFVar8 = (FMovieSceneMediaPlayerStore *)&(pFVar6->MediaPlayerStore).SharedReferenceCount;
      pFVar6[8]._padding_ = *(longlong *)FVar7.ID;
      if ((pFVar8 == (FMovieSceneMediaPlayerStore *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FMovieSceneMediaPlayerStoreContainer *)(*pcVar2)();
        return pFVar4;
      }
      LOCK();
      *(int *)&(pFVar6->MediaPlayerStore).Object = *(int *)&(pFVar6->MediaPlayerStore).Object + 1;
      UNLOCK();
      FStack_68.ReferenceController = (TReferenceControllerBase<1> *)pFVar6;
      pFVar4 = pFVar6;
      local_70 = pFVar8;
    }
    if (pTVar1 != (TSharedPtr<FMovieSceneMediaPlayerStore,1> *)&local_70) {
      pTVar1->Object = pFVar8;
      local_70 = (FMovieSceneMediaPlayerStore *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(pFVar5->MediaPlayerStore).SharedReferenceCount,&FStack_68);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_68.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar4);
    pFVar4 = pFVar5;
  }
  local_60 = (FSharedPersistentDataKey *)local_res8.Value;
  local_58 = local_res18;
  local_res18[0] = pFVar4;
  TSet<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FSharedPersistentDataKey_const_&,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_&&>_>
            ((TSet<TTuple<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FSharedPersistentDataKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
              *)this->SharedData,&local_res8,(bool *)&local_60);
  if (local_res18[0] != (FMovieSceneMediaPlayerStoreContainer *)0x0) {
    (**(code **)local_res18[0]->_padding_)(local_res18[0],1);
  }
  return pFVar4;
}

// Find<FMovieSceneMediaData> @ 14ea65fe0

/* WARNING: Enum "EMediaEvent": Some values do not have unique names */

FMovieSceneMediaData * __thiscall
FPersistentEvaluationData::Find<FMovieSceneMediaData>
          (FPersistentEvaluationData *this,FMovieSceneEvaluationKey *param_1)

{
  TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
  *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FMovieSceneMediaData *pFVar4;
  longlong lVar5;
  FMovieSceneMediaData *pFVar6;
  
  this_00 = (TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
             *)this->EntityData;
  if (this_00 !=
      (TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
       *)0x0) {
    iVar3 = TSet<TTuple<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>_>,TDefaultMapHashableKeyFuncs<FMovieSceneEvaluationKey,TUniquePtr<IPersistentEvaluationData,TDefaultDelete<IPersistentEvaluationData>_>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FMovieSceneEvaluationKey>
                      (this_00,~(param_1->TrackIdentifier).Value ^ param_1->SectionIndex ^
                               (param_1->SequenceID).Value,param_1);
    pFVar4 = (FMovieSceneMediaData *)0x0;
    if (iVar3 != -1) {
      lVar5 = (longlong)iVar3 * 0x20 + *(longlong *)&this_00->Elements;
      pFVar6 = (FMovieSceneMediaData *)(lVar5 + 0x10);
      if (lVar5 == 0) {
        pFVar6 = pFVar4;
      }
      if (pFVar6 != (FMovieSceneMediaData *)0x0) {
        pFVar4 = (FMovieSceneMediaData *)pFVar6->_padding_;
      }
    }
    return pFVar4;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<2208776142733705528>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\PersistentEvaluationData.h"
                     ,0x138,"EntityData");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar4 = (FMovieSceneMediaData *)(*pcVar1)();
    return pFVar4;
  }
  return (FMovieSceneMediaData *)0x0;
}


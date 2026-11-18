// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 2

// RestorePreAnimatedValue @ 146863990

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TSimplePreAnimatedStateTraits<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedFadeState>::
RestorePreAnimatedValue
          (TSimplePreAnimatedStateTraits<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedFadeState>
           *this,FMovieSceneAnimTypeID *param_1,FPreAnimatedFadeState *param_2,
          FRestoreStateParams *param_3)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_38;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> local_28 [2];
  
  FRestoreStateParams::GetTerminalPlaybackState(param_3,&local_38);
  if (local_38.Object == (FSharedPlaybackState *)0x0) {
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<7843864627694796929>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneFadeSystem.cpp"
                       ,0x81,"SharedPlaybackState");
    if (!bVar3) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_38.SharedReferenceCount.ReferenceController);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = param_2->bFadeAudio;
  fVar1 = param_2->FadeValue;
  if ((local_38.Object == (FSharedPlaybackState *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x408,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_28[0].SharedReferenceCount.ReferenceController =
       local_38.SharedReferenceCount.ReferenceController;
  if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((local_38.Object == (FSharedPlaybackState *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x25d,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FFadeUtil::ApplyFade(local_28,fVar1,&param_2->FadeColor,bVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  return;
}

// RestorePreAnimatedValue @ 146863ab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::
TSimplePreAnimatedStateTraits<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedSlomoState>::
RestorePreAnimatedValue
          (TSimplePreAnimatedStateTraits<FMovieSceneAnimTypeID,UE::MovieScene::FPreAnimatedSlomoState>
           *this,FMovieSceneAnimTypeID *param_1,FPreAnimatedSlomoState *param_2,
          FRestoreStateParams *param_3)

{
  double dVar1;
  TReferenceControllerBase<1> *pTVar2;
  FSharedPlaybackState *pFVar3;
  code *pcVar4;
  bool bVar5;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *pTVar6;
  UObject *pUVar7;
  TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> local_28 [2];
  
  pTVar6 = FRestoreStateParams::GetTerminalPlaybackState(param_3,local_28);
  pTVar2 = (pTVar6->SharedReferenceCount).ReferenceController;
  pFVar3 = pTVar6->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28[0].SharedReferenceCount.ReferenceController);
  if (pFVar3 == (FSharedPlaybackState *)0x0) {
    bVar5 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1072050551778181182>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieSceneTracks\\Private\\Systems\\MovieSceneSlomoSystem.cpp"
                       ,0x3e,"SharedPlaybackState");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else if ((param_2->TimeDilation).bIsSet != false) {
    dVar1 = (param_2->TimeDilation).TypedValue;
    pUVar7 = FWeakObjectPtr::Get(&(pFVar3->WeakPlaybackContext).WeakPtr);
    FSlomoUtil::ApplySlomo(pUVar7,dVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 7

// operator-> @ 146623f90

FMovieSceneChannelProxy * __thiscall
TSharedPtr<FMovieSceneChannelProxy,1>::operator->(TSharedPtr<FMovieSceneChannelProxy,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneChannelProxy *pFVar3;
  
  if (this->Object != (FMovieSceneChannelProxy *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMovieSceneChannelProxy *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator=<FStructOnScope> @ 14672b720

TSharedPtr<FStructOnScope,1> * __thiscall
TSharedPtr<FStructOnScope,1>::operator=<FStructOnScope>
          (TSharedPtr<FStructOnScope,1> *this,TRawPtrProxy<FStructOnScope> *param_1)

{
  FStructOnScope *pFVar1;
  TSharedPtr<FStructOnScope,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFStructOnScope__U__DefaultDeleter_VFStructOnScope___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FStructOnScope *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator-> @ 14676c180

FPreAnimatedAudioStorage * __thiscall
TSharedPtr<UE::MovieScene::FPreAnimatedAudioStorage,1>::operator->
          (TSharedPtr<UE::MovieScene::FPreAnimatedAudioStorage,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FPreAnimatedAudioStorage *pFVar3;
  
  if (this->Object != (FPreAnimatedAudioStorage *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FPreAnimatedAudioStorage *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14676c1d0

FPreAnimatedCameraComponentShakeStateStorage * __thiscall
TSharedPtr<UE::MovieScene::FPreAnimatedCameraComponentShakeStateStorage,1>::operator->
          (TSharedPtr<UE::MovieScene::FPreAnimatedCameraComponentShakeStateStorage,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FPreAnimatedCameraComponentShakeStateStorage *pFVar3;
  
  if (this->Object != (FPreAnimatedCameraComponentShakeStateStorage *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FPreAnimatedCameraComponentShakeStateStorage *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14676c220

FPreAnimatedCameraShakeStateStorage * __thiscall
TSharedPtr<UE::MovieScene::FPreAnimatedCameraShakeStateStorage,1>::operator->
          (TSharedPtr<UE::MovieScene::FPreAnimatedCameraShakeStateStorage,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FPreAnimatedCameraShakeStateStorage *pFVar3;
  
  if (this->Object != (FPreAnimatedCameraShakeStateStorage *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FPreAnimatedCameraShakeStateStorage *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 146810470

FDesiredLayerStates * __thiscall
TSharedPtr<UE::MovieScene::FDesiredLayerStates,1>::operator->
          (TSharedPtr<UE::MovieScene::FDesiredLayerStates,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FDesiredLayerStates *pFVar3;
  
  if (this->Object != (FDesiredLayerStates *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FDesiredLayerStates *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 1468104c0

FPreAnimatedSkeletalAnimationMontageStorage * __thiscall
TSharedPtr<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageStorage,1>::operator->
          (TSharedPtr<UE::MovieScene::FPreAnimatedSkeletalAnimationMontageStorage,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FPreAnimatedSkeletalAnimationMontageStorage *pFVar3;
  
  if (this->Object != (FPreAnimatedSkeletalAnimationMontageStorage *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FPreAnimatedSkeletalAnimationMontageStorage *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// operator=<FTrackInstancePropertyBindings> @ 1461687a0

TSharedPtr<FTrackInstancePropertyBindings,1> * __thiscall
TSharedPtr<FTrackInstancePropertyBindings,1>::operator=<FTrackInstancePropertyBindings>
          (TSharedPtr<FTrackInstancePropertyBindings,1> *this,
          TRawPtrProxy<FTrackInstancePropertyBindings> *param_1)

{
  FTrackInstancePropertyBindings *pFVar1;
  TSharedPtr<FTrackInstancePropertyBindings,1> local_18;
  
  pFVar1 = param_1->Object;
  local_18.Object = pFVar1;
  local_18.SharedReferenceCount.ReferenceController = ::operator_new(0x18);
  if (local_18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
    (local_18.SharedReferenceCount.ReferenceController)->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_VFTrackInstancePropertyBindings__U__DefaultDeleter_VFTrackInstancePropertyBindings___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    (local_18.SharedReferenceCount.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
    local_18.SharedReferenceCount.ReferenceController[1]._padding_ = (longlong)pFVar1;
  }
  if (this != &local_18) {
    this->Object = pFVar1;
    local_18.Object = (FTrackInstancePropertyBindings *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&local_18.SharedReferenceCount);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  return this;
}

// operator-> @ 146187840

FSharedPlaybackState * __thiscall
TSharedPtr<UE::MovieScene::FSharedPlaybackState,1>::operator->
          (TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FSharedPlaybackState *pFVar3;
  
  if (this->Object != (FSharedPlaybackState *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FSharedPlaybackState *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// ToSharedRef @ 1461d5ff0

TSharedRef<UE::MovieScene::FSharedPlaybackState,1> * __thiscall
TSharedPtr<UE::MovieScene::FSharedPlaybackState,1>::ToSharedRef
          (TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *pTVar4;
  
  if (this->Object == (FSharedPlaybackState *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FSharedPlaybackState *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// operator-> @ 146200710

FMovieSceneTimeController * __thiscall
TSharedPtr<FMovieSceneTimeController,1>::operator->(TSharedPtr<FMovieSceneTimeController,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FMovieSceneTimeController *pFVar3;
  
  if (this->Object != (FMovieSceneTimeController *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMovieSceneTimeController *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// ToSharedRef @ 146239800

TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> * __thiscall
TSharedPtr<UE::MovieScene::FSharedPlaybackState_const_,1>::ToSharedRef
          (TSharedPtr<UE::MovieScene::FSharedPlaybackState_const_,1> *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *pTVar4;
  
  if (this->Object == (FSharedPlaybackState *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  pTVar1 = (this->SharedReferenceCount).ReferenceController;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (__return_storage_ptr__->Object == (FSharedPlaybackState *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// ToSharedRef @ 1462398a0

TSharedRef<UE::MovieScene::FSharedPlaybackState,1> * __thiscall
TSharedPtr<UE::MovieScene::FSharedPlaybackState,1>::ToSharedRef
          (TSharedPtr<UE::MovieScene::FSharedPlaybackState,1> *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *pTVar3;
  
  if (this->Object == (FSharedPlaybackState *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x416,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  __return_storage_ptr__->Object = this->Object;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (this->SharedReferenceCount).ReferenceController;
  (this->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  this->Object = (FSharedPlaybackState *)0x0;
  if (__return_storage_ptr__->Object == (FSharedPlaybackState *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x26c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return __return_storage_ptr__;
}


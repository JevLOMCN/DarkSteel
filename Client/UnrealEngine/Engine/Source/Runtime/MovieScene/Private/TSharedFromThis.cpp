// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 3

// AsShared @ 146125120

TSharedRef<UE::MovieScene::FSharedPlaybackState,1> * __thiscall
TSharedFromThis<UE::MovieScene::FSharedPlaybackState,1>::AsShared
          (TSharedFromThis<UE::MovieScene::FSharedPlaybackState,1> *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *__return_storage_ptr__)

{
  FSharedPlaybackState *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *pTVar5;
  FSharedPlaybackState *pFVar6;
  FSharedPlaybackState *pFVar7;
  bool bVar8;
  
  pFVar1 = (FSharedPlaybackState *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar7 = (FSharedPlaybackState *)0x0;
  pFVar6 = pFVar1;
  if (pFVar1 != (FSharedPlaybackState *)0x0) {
    iVar3 = *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar7;
      if (iVar3 == 0) goto LAB_146125161;
      LOCK();
      iVar4 = *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController;
      bVar8 = iVar3 == iVar4;
      if (bVar8) {
        *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar4;
    } while (!bVar8);
    pFVar7 = (this->WeakThis).Object;
    pFVar6 = pFVar1;
  }
LAB_146125161:
  if ((pFVar7 != (FSharedPlaybackState *)this) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *)(*pcVar2)();
    return pTVar5;
  }
  if ((pFVar7 == (FSharedPlaybackState *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FSharedPlaybackState *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::MovieScene::FSharedPlaybackState,1> *)(*pcVar2)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 146125220

TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> * __thiscall
TSharedFromThis<UE::MovieScene::FSharedPlaybackState,1>::AsShared
          (TSharedFromThis<UE::MovieScene::FSharedPlaybackState,1> *this,
          TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *__return_storage_ptr__)

{
  FSharedPlaybackState *pFVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *pTVar5;
  FSharedPlaybackState *pFVar6;
  FSharedPlaybackState *pFVar7;
  bool bVar8;
  
  pFVar1 = (FSharedPlaybackState *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pFVar7 = (FSharedPlaybackState *)0x0;
  pFVar6 = pFVar1;
  if (pFVar1 != (FSharedPlaybackState *)0x0) {
    iVar3 = *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController;
    do {
      pFVar6 = pFVar7;
      if (iVar3 == 0) goto LAB_146125261;
      LOCK();
      iVar4 = *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController;
      bVar8 = iVar3 == iVar4;
      if (bVar8) {
        *(int *)&((FWeakReferencer<1> *)&pFVar1->_padding_)->ReferenceController = iVar3 + 1;
        iVar4 = iVar3;
      }
      UNLOCK();
      iVar3 = iVar4;
    } while (!bVar8);
    pFVar7 = (this->WeakThis).Object;
    pFVar6 = pFVar1;
  }
LAB_146125261:
  if ((pFVar7 != (FSharedPlaybackState *)this) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x69a,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *)(*pcVar2)();
    return pTVar5;
  }
  if ((pFVar7 == (FSharedPlaybackState *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *)(*pcVar2)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pFVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar6;
  if ((pFVar7 == (FSharedPlaybackState *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    pTVar5 = (TSharedRef<UE::MovieScene::FSharedPlaybackState_const_,1> *)(*pcVar2)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}

// AsShared @ 1462a4710

TSharedRef<IMovieSceneBlendingActuator,1> * __thiscall
TSharedFromThis<IMovieSceneBlendingActuator,1>::AsShared
          (TSharedFromThis<IMovieSceneBlendingActuator,1> *this,
          TSharedRef<IMovieSceneBlendingActuator,1> *__return_storage_ptr__)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  IMovieSceneBlendingActuator *pIVar4;
  TSharedRef<IMovieSceneBlendingActuator,1> *pTVar5;
  IMovieSceneBlendingActuator *pIVar6;
  IMovieSceneBlendingActuator *pIVar7;
  IMovieSceneBlendingActuator *pIVar8;
  bool bVar9;
  
  pIVar4 = (IMovieSceneBlendingActuator *)(this->WeakThis).WeakReferenceCount.ReferenceController;
  pIVar8 = (IMovieSceneBlendingActuator *)0x0;
  pIVar6 = pIVar4;
  pIVar7 = pIVar8;
  if (pIVar4 != (IMovieSceneBlendingActuator *)0x0) {
    iVar2 = *(int *)&((FWeakReferencer<1> *)&pIVar4->field_0x8)->ReferenceController;
    do {
      pIVar6 = pIVar8;
      pIVar7 = (IMovieSceneBlendingActuator *)0x0;
      if (iVar2 == 0) goto LAB_1462a4751;
      LOCK();
      iVar3 = *(int *)&((FWeakReferencer<1> *)&pIVar4->field_0x8)->ReferenceController;
      bVar9 = iVar2 == iVar3;
      if (bVar9) {
        *(int *)&((FWeakReferencer<1> *)&pIVar4->field_0x8)->ReferenceController = iVar2 + 1;
        iVar3 = iVar2;
      }
      UNLOCK();
      iVar2 = iVar3;
    } while (!bVar9);
    pIVar6 = pIVar4;
    pIVar7 = (this->WeakThis).Object;
  }
LAB_1462a4751:
  pIVar4 = (IMovieSceneBlendingActuator *)&pIVar7->field_0x8;
  if (pIVar7 == (IMovieSceneBlendingActuator *)0x0) {
    pIVar4 = pIVar8;
  }
  if ((pIVar4 != (IMovieSceneBlendingActuator *)this) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SharedThis.Get() == this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x67f,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<IMovieSceneBlendingActuator,1> *)(*pcVar1)();
    return pTVar5;
  }
  if ((pIVar7 == (IMovieSceneBlendingActuator *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x416,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<IMovieSceneBlendingActuator,1> *)(*pcVar1)();
    return pTVar5;
  }
  __return_storage_ptr__->Object = pIVar7;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pIVar6;
  if ((pIVar7 == (IMovieSceneBlendingActuator *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x26c,L""), bVar9)) {
    pcVar1 = (code *)swi(3);
    pTVar5 = (TSharedRef<IMovieSceneBlendingActuator,1> *)(*pcVar1)();
    return pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return __return_storage_ptr__;
}


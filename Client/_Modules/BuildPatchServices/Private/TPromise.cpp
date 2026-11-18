// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 9

// TPromise<TSharedPtr<FBuildPatchAppManifest,1>_> @ 14321f910

TPromise<TSharedPtr<FBuildPatchAppManifest,1>_> * __thiscall
TPromise<TSharedPtr<FBuildPatchAppManifest,1>_>::TPromise<TSharedPtr<FBuildPatchAppManifest,1>_>
          (TPromise<TSharedPtr<FBuildPatchAppManifest,1>_> *this)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FEvent *pFVar4;
  TPromise<TSharedPtr<FBuildPatchAppManifest,1>_> *pTVar5;
  
  pTVar3 = ::operator_new(0x90);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    (this->State).Object = (TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *)0x10;
    (this->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TFutureState_V__TSharedPtr_VFBuildPatchAppManifest___00_____00_SharedPointerInternals__6B_
    ;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5]._padding_ = 0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[6]._padding_ = 0;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[7]._padding_ = 0;
    pTVar3[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[7].WeakReferenceCount = (atomic<int>)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar3 + 1),4000);
    pTVar3[4]._padding_ = 0;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    pFVar4 = FGenericPlatformProcess::GetSynchEventFromPool(true);
    pTVar3[7]._padding_ = (longlong)pFVar4;
    *(undefined1 *)&pTVar3[7].SharedReferenceCount = 0;
    if ((TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *)(pTVar3 + 1) ==
        (TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TPromise<TSharedPtr<FBuildPatchAppManifest,1>_> *)(*pcVar1)();
        return pTVar5;
      }
    }
    (this->State).Object = (TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *)(pTVar3 + 1);
    (this->State).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  this->bFutureRetrieved = false;
  return this;
}

// GetFuture @ 143256c70

TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> * __thiscall
TPromise<TSharedPtr<FBuildPatchAppManifest,1>_>::GetFuture
          (TPromise<TSharedPtr<FBuildPatchAppManifest,1>_> *this,
          TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *__return_storage_ptr__)

{
  TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *pTVar5;
  
  if (this->bFutureRetrieved != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bFutureRetrieved",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x24d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pTVar1 = (this->State).Object;
  this->bFutureRetrieved = true;
  if (pTVar1 == (TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TFuture<TSharedPtr<FBuildPatchAppManifest,1>_> *)(*pcVar3)();
      return pTVar5;
    }
  }
  *(TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> **)__return_storage_ptr__ =
       (this->State).Object;
  pTVar2 = (this->State).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetFuture @ 143256d10

TFuture<void> * __thiscall
TPromise<void>::GetFuture(TPromise<void> *this,TFuture<void> *__return_storage_ptr__)

{
  TFutureState<void> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TFuture<void> *pTVar5;
  
  if (this->bFutureRetrieved != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bFutureRetrieved",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x24d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TFuture<void> *)(*pcVar3)();
      return pTVar5;
    }
  }
  pTVar1 = (this->State).Object;
  this->bFutureRetrieved = true;
  if (pTVar1 == (TFutureState<void> *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TFuture<void> *)(*pcVar3)();
      return pTVar5;
    }
  }
  *(TFutureState<void> **)__return_storage_ptr__ = (this->State).Object;
  pTVar2 = (this->State).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// SetValue @ 143268ce0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
TPromise<TSharedPtr<FBuildPatchAppManifest,1>_>::SetValue
          (TPromise<TSharedPtr<FBuildPatchAppManifest,1>_> *this,
          TSharedPtr<FBuildPatchAppManifest,1> *param_1)

{
  TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *this_00;
  code *pcVar1;
  bool bVar2;
  
  if ((this->State).Object == (TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((this->State).Object == (TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  this_00 = (this->State).Object;
  if (*(TAtomic<bool> *)&this_00->_padding_ != (TAtomic<bool>)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0xcd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  *(FBuildPatchAppManifest **)(this_00->Result).Pad = param_1->Object;
  *(TReferenceControllerBase<1> **)((this_00->Result).Pad + 8) =
       (param_1->SharedReferenceCount).ReferenceController;
  (param_1->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
  param_1->Object = (FBuildPatchAppManifest *)0x0;
  FFutureState::MarkComplete((FFutureState *)this_00);
  return;
}

// SetValue @ 143268db0

/* WARNING: Enum "EFeatureLevel": Some values do not have unique names */

void __thiscall
TPromise<TSharedPtr<FBuildPatchAppManifest,1>_>::SetValue
          (TPromise<TSharedPtr<FBuildPatchAppManifest,1>_> *this,
          TSharedPtr<FBuildPatchAppManifest,1> *param_1)

{
  TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *this_00;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->State).Object == (TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((this->State).Object == (TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  this_00 = (this->State).Object;
  if (*(TAtomic<bool> *)&this_00->_padding_ != (TAtomic<bool>)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0xcd,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(FBuildPatchAppManifest **)(this_00->Result).Pad = param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)((this_00->Result).Pad + 8) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  FFutureState::MarkComplete((FFutureState *)this_00);
  return;
}

// SetValue @ 143268e80

void __thiscall TPromise<void>::SetValue(TPromise<void> *this)

{
  TFutureState<void> *this_00;
  code *pcVar1;
  bool bVar2;
  
  if ((this->State).Object == (TFutureState<void> *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((this->State).Object == (TFutureState<void> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  this_00 = (this->State).Object;
  if (*(TAtomic<bool> *)&this_00->field_0x68 != (TAtomic<bool>)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0xcd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FFutureState::MarkComplete((FFutureState *)this_00);
  return;
}

// TPromise<TSharedPtr<FBuildPatchAppManifest,1>_> @ 14327de30

TPromise<TSharedPtr<FBuildPatchAppManifest,1>_> * __thiscall
TPromise<TSharedPtr<FBuildPatchAppManifest,1>_>::TPromise<TSharedPtr<FBuildPatchAppManifest,1>_>
          (TPromise<TSharedPtr<FBuildPatchAppManifest,1>_> *this,
          TUniqueFunction<void___cdecl(void)> *param_1)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  TPromise<TSharedPtr<FBuildPatchAppManifest,1>_> *pTVar4;
  
  pTVar3 = ::operator_new(0x90);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    (this->State).Object = (TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *)0x10;
    (this->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TFutureState_V__TSharedPtr_VFBuildPatchAppManifest___00_____00_SharedPointerInternals__6B_
    ;
    FFutureState::FFutureState((FFutureState *)(pTVar3 + 1),param_1);
    if ((TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *)(pTVar3 + 1) ==
        (TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TPromise<TSharedPtr<FBuildPatchAppManifest,1>_> *)(*pcVar1)();
        return pTVar4;
      }
    }
    (this->State).Object = (TFutureState<TSharedPtr<FBuildPatchAppManifest,1>_> *)(pTVar3 + 1);
    (this->State).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  this->bFutureRetrieved = false;
  return this;
}

// TPromise<void> @ 14327df00

TPromise<void> * __thiscall TPromise<void>::TPromise<void>(TPromise<void> *this)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FEvent *pFVar4;
  TPromise<void> *pTVar5;
  
  pTVar3 = ::operator_new(0x90);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    (this->State).Object = (TFutureState<void> *)0x10;
    (this->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_V__TFutureState_X___00_SharedPointerInternals__6B_;
    pTVar3[1]._padding_ = 0;
    pTVar3[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[2]._padding_ = 0;
    pTVar3[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[3]._padding_ = 0;
    pTVar3[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[4]._padding_ = 0;
    pTVar3[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[5]._padding_ = 0;
    pTVar3[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[6]._padding_ = 0;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    pTVar3[7]._padding_ = 0;
    pTVar3[7].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[7].WeakReferenceCount = (atomic<int>)0x0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar3 + 1),4000);
    pTVar3[4]._padding_ = 0;
    pTVar3[6].SharedReferenceCount = (atomic<int>)0x0;
    pTVar3[6].WeakReferenceCount = (atomic<int>)0x0;
    pFVar4 = FGenericPlatformProcess::GetSynchEventFromPool(true);
    pTVar3[7]._padding_ = (longlong)pFVar4;
    *(undefined1 *)&pTVar3[7].SharedReferenceCount = 0;
    if ((TFutureState<void> *)(pTVar3 + 1) == (TFutureState<void> *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TPromise<void> *)(*pcVar1)();
        return pTVar5;
      }
    }
    (this->State).Object = (TFutureState<void> *)(pTVar3 + 1);
    (this->State).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  this->bFutureRetrieved = false;
  return this;
}

// SetValue @ 1432ee000

void __thiscall
TPromise<TSharedPtr<TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString>,1>_>::SetValue
          (TPromise<TSharedPtr<TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString>,1>_>
           *this,TSharedPtr<TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString>,1> *param_1)

{
  TFutureState<TSharedPtr<TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString>,1>_> *this_00;
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->State).Object ==
      (TFutureState<TSharedPtr<TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString>,1>_> *)
      0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((this->State).Object ==
        (TFutureState<TSharedPtr<TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString>,1>_> *)
        0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  this_00 = (this->State).Object;
  if (*(TAtomic<bool> *)&this_00->_padding_ != (TAtomic<bool>)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0xcd,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(TValueOrError<TSharedPtr<FBuildPatchAppManifest,1>,FString> **)(this_00->Result).Pad =
       param_1->Object;
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)((this_00->Result).Pad + 8) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  FFutureState::MarkComplete((FFutureState *)this_00);
  return;
}


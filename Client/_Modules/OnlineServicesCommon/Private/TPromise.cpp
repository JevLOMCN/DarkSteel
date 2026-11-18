// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 9

// EmplaceValue<UE::Online::Private::FFunctionalTestLogoutUser::Result> @ 14efd8da0

void __thiscall
TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>::
EmplaceValue<UE::Online::Private::FFunctionalTestLogoutUser::Result>
          (TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>
           *this,Result *param_1)

{
  TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_> *this_00;
  code *pcVar1;
  bool bVar2;
  
  if ((this->State).Object ==
      (TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_> *)
      0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((this->State).Object ==
        (TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_> *)
        0x0) {
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
  (this_00->Result).Pad[0x30] = '\0';
  *(undefined ***)(this_00->Result).Pad =
       &___7__TOnlineResult_UFFunctionalTestLogoutUser_Private_Online_UE___Online_UE__6B_;
  FFutureState::MarkComplete((FFutureState *)this_00);
  return;
}

// EmplaceValue<UE::Online::FOnlineError> @ 14efd8e60

void __thiscall
TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>::
EmplaceValue<UE::Online::FOnlineError>
          (TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_> *this
          ,FOnlineError *param_1)

{
  TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_> *this_00;
  FOnlineError *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->State).Object ==
      (TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_> *)0x0
     ) {
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
        (TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_> *)
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
  if (*(TAtomic<bool> *)&this_00->field_0x68 != (TAtomic<bool>)0x0) {
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
  *(undefined ***)(this_00->Result).Pad =
       &
       ___7__TResult_UResult_FFunctionalTestLoginUser_Private_Online_UE__VFOnlineError_45__Online_UE__6B_
  ;
  *(IOnlineErrorDetails **)((this_00->Result).Pad + 8) = (param_1->Details).Object;
  *(TReferenceControllerBase<1> **)((this_00->Result).Pad + 0x10) =
       (param_1->Details).SharedReferenceCount.ReferenceController;
  pFVar1 = (param_1->Inner).Object;
  (param_1->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (param_1->Details).Object = (IOnlineErrorDetails *)0x0;
  *(FOnlineError **)((this_00->Result).Pad + 0x18) = pFVar1;
  *(TReferenceControllerBase<1> **)((this_00->Result).Pad + 0x20) =
       (param_1->Inner).SharedReferenceCount.ReferenceController;
  (param_1->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (param_1->Inner).Object = (FOnlineError *)0x0;
  *(ulong64 *)((this_00->Result).Pad + 0x28) = param_1->ErrorCode;
  *(undefined ***)(this_00->Result).Pad =
       &___7__TOnlineResult_UFFunctionalTestLoginUser_Private_Online_UE___Online_UE__6B_;
  (this_00->Result).Pad[0x30] = '\x01';
  FFutureState::MarkComplete((FFutureState *)this_00);
  return;
}

// EmplaceValue<UE::Online::FOnlineError> @ 14efd8f80

void __thiscall
TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>::
EmplaceValue<UE::Online::FOnlineError>
          (TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>
           *this,FOnlineError *param_1)

{
  TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_> *this_00;
  FOnlineError *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->State).Object ==
      (TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_> *)
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
        (TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_> *)
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
  if (*(TAtomic<bool> *)&this_00->field_0x68 != (TAtomic<bool>)0x0) {
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
  *(undefined ***)(this_00->Result).Pad =
       &
       ___7__TResult_UResult_FFunctionalTestLogoutUser_Private_Online_UE__VFOnlineError_45__Online_UE__6B_
  ;
  *(IOnlineErrorDetails **)((this_00->Result).Pad + 8) = (param_1->Details).Object;
  *(TReferenceControllerBase<1> **)((this_00->Result).Pad + 0x10) =
       (param_1->Details).SharedReferenceCount.ReferenceController;
  pFVar1 = (param_1->Inner).Object;
  (param_1->Details).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (param_1->Details).Object = (IOnlineErrorDetails *)0x0;
  *(FOnlineError **)((this_00->Result).Pad + 0x18) = pFVar1;
  *(TReferenceControllerBase<1> **)((this_00->Result).Pad + 0x20) =
       (param_1->Inner).SharedReferenceCount.ReferenceController;
  (param_1->Inner).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (param_1->Inner).Object = (FOnlineError *)0x0;
  *(ulong64 *)((this_00->Result).Pad + 0x28) = param_1->ErrorCode;
  *(undefined ***)(this_00->Result).Pad =
       &___7__TOnlineResult_UFFunctionalTestLogoutUser_Private_Online_UE___Online_UE__6B_;
  (this_00->Result).Pad[0x30] = '\x01';
  FFutureState::MarkComplete((FFutureState *)this_00);
  return;
}

// TPromise<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_> @ 14efe2f70

TPromise<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
* __thiscall
TPromise<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
::
TPromise<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
          (TPromise<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
           *this)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FEvent *pFVar4;
  TPromise<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
  *pTVar5;
  
  pTVar3 = ::operator_new(0x90);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    (this->State).Object =
         (TFutureState<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
          *)0x10;
    (this->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TFutureState_V__TArray_V__TOnlineResult_UFFunctionalTestLogoutUser_Private_Online_UE___Online_UE__V__TSizedDefaultAllocator__0CA________00_SharedPointerInternals__6B_
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
    if ((TFutureState<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
         *)(pTVar3 + 1) ==
        (TFutureState<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
         *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TPromise<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
                  *)(*pcVar1)();
        return pTVar5;
      }
    }
    (this->State).Object =
         (TFutureState<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
          *)(pTVar3 + 1);
    (this->State).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  this->bFutureRetrieved = false;
  return this;
}

// TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_> @ 14efe3080

TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_> * __thiscall
TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>::
TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>
          (TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_> *this
          )

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FEvent *pFVar4;
  TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_> *pTVar5;
  
  pTVar3 = ::operator_new(0xc0);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    (this->State).Object =
         (TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_> *)
         0x10;
    (this->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TFutureState_V__TOnlineResult_UFFunctionalTestLoginUser_Private_Online_UE___Online_UE_____00_SharedPointerInternals__6B_
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
    if ((TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_> *)
        (pTVar3 + 1) ==
        (TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_> *)
        0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>
                  *)(*pcVar1)();
        return pTVar5;
      }
    }
    (this->State).Object =
         (TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_> *)
         (pTVar3 + 1);
    (this->State).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  this->bFutureRetrieved = false;
  return this;
}

// TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_> @ 14efe3190

TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_> * __thiscall
TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>::
TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>
          (TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>
           *this)

{
  code *pcVar1;
  bool bVar2;
  TReferenceControllerBase<1> *pTVar3;
  FEvent *pFVar4;
  TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_> *pTVar5;
  
  pTVar3 = ::operator_new(0xc0);
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    pTVar3 = (TReferenceControllerBase<1> *)0x0;
    (this->State).Object =
         (TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_> *
         )0x10;
    (this->State).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_V__TFutureState_V__TOnlineResult_UFFunctionalTestLogoutUser_Private_Online_UE___Online_UE_____00_SharedPointerInternals__6B_
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
    if ((TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_> *)
        (pTVar3 + 1) ==
        (TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_> *)
        0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>
                  *)(*pcVar1)();
        return pTVar5;
      }
    }
    (this->State).Object =
         (TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_> *
         )(pTVar3 + 1);
    (this->State).SharedReferenceCount.ReferenceController = pTVar3;
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  this->bFutureRetrieved = false;
  return this;
}

// GetFuture @ 14effed20

TFuture<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
* __thiscall
TPromise<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
::GetFuture(TPromise<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
            *this,TFuture<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
                  *__return_storage_ptr__)

{
  TFutureState<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TFuture<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
  *pTVar5;
  
  if (this->bFutureRetrieved != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bFutureRetrieved",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x24d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TFuture<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar3)();
      return pTVar5;
    }
  }
  pTVar1 = (this->State).Object;
  this->bFutureRetrieved = true;
  if (pTVar1 == (TFutureState<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
                 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TFuture<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar3)();
      return pTVar5;
    }
  }
  *(TFutureState<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
    **)__return_storage_ptr__ = (this->State).Object;
  pTVar2 = (this->State).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetFuture @ 14effedc0

TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_> * __thiscall
TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>::GetFuture
          (TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_> *this
          ,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>
           *__return_storage_ptr__)

{
  TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_> *pTVar5;
  
  if (this->bFutureRetrieved != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bFutureRetrieved",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x24d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_> *
               )(*pcVar3)();
      return pTVar5;
    }
  }
  pTVar1 = (this->State).Object;
  this->bFutureRetrieved = true;
  if (pTVar1 == (TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>
                 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_> *
               )(*pcVar3)();
      return pTVar5;
    }
  }
  *(TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_> **)
   __return_storage_ptr__ = (this->State).Object;
  pTVar2 = (this->State).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetFuture @ 14effee60

TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_> * __thiscall
TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>::GetFuture
          (TPromise<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>
           *this,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>
                 *__return_storage_ptr__)

{
  TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_> *pTVar5;
  
  if (this->bFutureRetrieved != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bFutureRetrieved",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x24d,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>
                *)(*pcVar3)();
      return pTVar5;
    }
  }
  pTVar1 = (this->State).Object;
  this->bFutureRetrieved = true;
  if (pTVar1 == (TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>
                 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar5 = (TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>
                *)(*pcVar3)();
      return pTVar5;
    }
  }
  *(TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_> **)
   __return_storage_ptr__ = (this->State).Object;
  pTVar2 = (this->State).SharedReferenceCount.ReferenceController;
  *(TReferenceControllerBase<1> **)&__return_storage_ptr__->field_0x8 = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}


// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 49

// ~<lambda_1> @ 14ee0f1c0

void __thiscall
`TFutureBase<UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_>::
Then<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_>::Next<``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FAddSessionMember>'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x30));
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((*(longlong *)this != 0) && (*(char *)(*(longlong *)this + 0x68) == '\0')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 8));
  return;
}

// ~<lambda_1> @ 14ee0f240

void __thiscall
`TFutureBase<UE::Online::TOnlineResult<UE::Online::FCreateSession>_>::
Then<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FCreateSession>_>::Next<``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FCreateSession>'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x30));
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((*(longlong *)this != 0) && (*(char *)(*(longlong *)this + 0x68) == '\0')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 8));
  return;
}

// ~<lambda_1> @ 14ee0f2c0

void __thiscall
`TFutureBase<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>::
Then<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>::Next<``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FFindSessions>'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x30));
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((*(longlong *)this != 0) && (*(char *)(*(longlong *)this + 0x68) == '\0')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 8));
  return;
}

// ~<lambda_1> @ 14ee0f340

void __thiscall
`TFutureBase<UE::Online::TOnlineResult<UE::Online::FJoinSession>_>::
Then<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FJoinSession>_>::Next<``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FJoinSession>'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x30));
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((*(longlong *)this != 0) && (*(char *)(*(longlong *)this + 0x68) == '\0')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 8));
  return;
}

// ~<lambda_1> @ 14ee0f3c0

void __thiscall
`TFutureBase<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_>::
Then<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_>::Next<``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FLeaveSession>'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x30));
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((*(longlong *)this != 0) && (*(char *)(*(longlong *)this + 0x68) == '\0')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 8));
  return;
}

// ~<lambda_1> @ 14ee0f440

void __thiscall
`TFutureBase<UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_>::
Then<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_>::Next<``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FRejectSessionInvite>'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x30));
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((*(longlong *)this != 0) && (*(char *)(*(longlong *)this + 0x68) == '\0')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 8));
  return;
}

// ~<lambda_1> @ 14ee0f4c0

void __thiscall
`TFutureBase<UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_>::
Then<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_>::Next<``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FRemoveSessionMember>'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x30));
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((*(longlong *)this != 0) && (*(char *)(*(longlong *)this + 0x68) == '\0')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 8));
  return;
}

// ~<lambda_1> @ 14ee0f540

void __thiscall
`TFutureBase<UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_>::
Then<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_>::Next<``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FSendSessionInvite>'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x30));
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((*(longlong *)this != 0) && (*(char *)(*(longlong *)this + 0x68) == '\0')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 8));
  return;
}

// ~<lambda_1> @ 14ee0f5c0

void __thiscall
`TFutureBase<UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_>::
Then<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_>::Next<``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FStartMatchmaking>'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x30));
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((*(longlong *)this != 0) && (*(char *)(*(longlong *)this + 0x68) == '\0')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 8));
  return;
}

// ~<lambda_1> @ 14ee0f640

void __thiscall
`TFutureBase<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_>::
Then<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_>::Next<``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FUpdateSessionSettings>'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x30));
  plVar3 = *(longlong **)((longlong)this + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((*(longlong *)this != 0) && (*(char *)(*(longlong *)this + 0x68) == '\0')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 8));
  return;
}

// ~<lambda_1> @ 14ee0f6c0

void __thiscall
`TFutureBase<UE::Online::FBatchQueryPresenceHelperResult>::
Then<`TFutureBase<UE::Online::FBatchQueryPresenceHelperResult>::Next<``UE::Online::Private::TStep<UE::Online::FBatchQueryPresenceHelperResult>::SetExecFunction<UE::Online::FBatchQueryPresence,`UE::Online::FPresenceCommon::BatchQueryPresence'::__l2::<lambda_1>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  plVar3 = *(longlong **)((longlong)this + 0x28);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((*(longlong *)this != 0) && (*(char *)(*(longlong *)this + 0x68) == '\0')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 8));
  return;
}

// operator() @ 14ee299a0

void __thiscall
`TFutureBase<UE::Online::FBatchQueryPresenceHelperResult>::
Next<``UE::Online::Private::TStep<UE::Online::FBatchQueryPresenceHelperResult>::SetExecFunction<UE::Online::FBatchQueryPresence,`UE::Online::FPresenceCommon::BatchQueryPresence'::__l2::<lambda_1>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'
::__l2::<lambda_1>::operator()
          (void *this,TFuture<UE::Online::FBatchQueryPresenceHelperResult> *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *this_00;
  code *pcVar7;
  atomic<int> aVar8;
  bool bVar9;
  atomic<int> aVar10;
  TReferenceControllerBase<1> *pTVar11;
  TSharedRef<UE::Online::FUserPresence_const_,1> *pTVar12;
  int iVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *local_res10;
  
  lVar2 = *(longlong *)param_1;
  pTVar3 = *(TReferenceControllerBase<1> **)&param_1->field_0x8;
  *(undefined8 *)&param_1->field_0x8 = 0;
  *(undefined8 *)param_1 = 0;
  if (lVar2 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x155,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  while (*(char *)(lVar2 + 0x68) == '\0') {
    (**(code **)(**(longlong **)(lVar2 + 0x60) + 0x20))(*(longlong **)(lVar2 + 0x60),0xffffffff,0);
  }
  pTVar12 = *(TSharedRef<UE::Online::FUserPresence_const_,1> **)(lVar2 + 0x70);
  *(undefined8 *)(lVar2 + 0x70) = 0;
  uVar1 = *(undefined4 *)(lVar2 + 0x7c);
  iVar13 = *(int *)(lVar2 + 0x78);
  *(undefined8 *)(lVar2 + 0x78) = 0;
  pTVar14 = *(TReferenceControllerBase<1> **)(lVar2 + 0x88);
  uVar4 = *(undefined8 *)(lVar2 + 0x80);
  uVar5 = *(undefined8 *)(lVar2 + 0x90);
  local_res10 = *(TReferenceControllerBase<1> **)(lVar2 + 0x98);
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x98) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  uVar6 = *(undefined8 *)(lVar2 + 0xa0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  pTVar11 = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar8 = pTVar3->SharedReferenceCount;
    do {
      pTVar11 = (TReferenceControllerBase<1> *)0x0;
      if (aVar8 == (atomic<int>)0x0) goto LAB_14ee29ae1;
      LOCK();
      aVar10 = pTVar3->SharedReferenceCount;
      bVar9 = aVar8 == aVar10;
      if (bVar9) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
        aVar10 = aVar8;
      }
      UNLOCK();
      aVar8 = aVar10;
    } while (!bVar9);
    this_00 = *(TOnlineAsyncOp<UE::Online::FBatchQueryPresence> **)((longlong)this + 8);
    pTVar11 = pTVar3;
    if (this_00 != (TOnlineAsyncOp<UE::Online::FBatchQueryPresence> *)0x0) {
      lVar2 = *(longlong *)this;
      if ((*(char *)(lVar2 + 0x78) != '\0') &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bResultSet",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                             ,0x1ee,L""), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(TSharedRef<UE::Online::FUserPresence_const_,1> **)(lVar2 + 0x40) = pTVar12;
      pTVar12 = (TSharedRef<UE::Online::FUserPresence_const_,1> *)0x0;
      *(undefined4 *)(lVar2 + 0x4c) = uVar1;
      *(int *)(lVar2 + 0x48) = iVar13;
      iVar13 = 0;
      *(undefined8 *)(lVar2 + 0x50) = uVar4;
      *(undefined8 *)(lVar2 + 0x60) = uVar5;
      *(TReferenceControllerBase<1> **)(lVar2 + 0x58) = pTVar14;
      pTVar14 = (TReferenceControllerBase<1> *)0x0;
      *(TReferenceControllerBase<1> **)(lVar2 + 0x68) = local_res10;
      *(undefined8 *)(lVar2 + 0x70) = uVar6;
      *(undefined1 *)(lVar2 + 0x78) = 1;
      local_res10 = (TReferenceControllerBase<1> *)0x0;
      UE::Online::TOnlineAsyncOp<UE::Online::FBatchQueryPresence>::ExecuteNextStep(this_00);
    }
  }
LAB_14ee29ae1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14);
  DestructItems<TSharedRef<UE::Online::FUserPresence_const_,1>,int>(pTVar12,iVar13);
  if (pTVar12 != (TSharedRef<UE::Online::FUserPresence_const_,1> *)0x0) {
    FMemory::Free(pTVar12);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&param_1->field_0x8);
  return;
}

// operator() @ 14ee2a3f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`TFutureBase<UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_>::
Then<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FAddSessionMember>_>::Next<``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FAddSessionMember>'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  undefined **local_48;
  TVariant<UE::Online::FAddSessionMember::Result,UE::Online::FOnlineError> local_40;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)((longlong)this + 0x28);
  pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x30) = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  if (lVar1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x155,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  while (*(char *)(lVar1 + 0x68) == '\0') {
    (**(code **)(**(longlong **)(lVar1 + 0x60) + 0x20))(*(longlong **)(lVar1 + 0x60),0xffffffff,0);
  }
  local_48 = &___7__TResult_UResult_FAddSessionMember_Online_UE__VFOnlineError_34__Online_UE__6B_;
  TVariant<UE::Online::FAddSessionMember::Result,UE::Online::FOnlineError>::
  TVariant<UE::Online::FAddSessionMember::Result,UE::Online::FOnlineError>
            (&local_40,
             (TVariant<UE::Online::FAddSessionMember::Result,UE::Online::FOnlineError> *)
             (lVar1 + 0x78));
  local_48 = &___7__TOnlineResult_UFAddSessionMember_Online_UE___Online_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  ``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FAddSessionMember>'::__l2::
  <lambda_1>::operator()'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),
             (TOnlineResult<UE::Online::FAddSessionMember> *)&local_48);
  if (1 < local_40.TypeIndex) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FAddSessionMember::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_40.TypeIndex])();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TPromise<void>::EmplaceValue<>(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// operator() @ 14ee2a560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`TFutureBase<UE::Online::TOnlineResult<UE::Online::FCreateSession>_>::
Then<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FCreateSession>_>::Next<``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FCreateSession>'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  undefined **local_48;
  TVariant<UE::Online::FCreateSession::Result,UE::Online::FOnlineError> local_40;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)((longlong)this + 0x28);
  pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x30) = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  if (lVar1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x155,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  while (*(char *)(lVar1 + 0x68) == '\0') {
    (**(code **)(**(longlong **)(lVar1 + 0x60) + 0x20))(*(longlong **)(lVar1 + 0x60),0xffffffff,0);
  }
  local_48 = &___7__TResult_UResult_FCreateSession_Online_UE__VFOnlineError_34__Online_UE__6B_;
  TVariant<UE::Online::FCreateSession::Result,UE::Online::FOnlineError>::
  TVariant<UE::Online::FCreateSession::Result,UE::Online::FOnlineError>
            (&local_40,
             (TVariant<UE::Online::FCreateSession::Result,UE::Online::FOnlineError> *)(lVar1 + 0x78)
            );
  local_48 = &___7__TOnlineResult_UFCreateSession_Online_UE___Online_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  ``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FCreateSession>'::__l2::
  <lambda_1>::operator()'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),(TOnlineResult<UE::Online::FCreateSession> *)&local_48)
  ;
  if (1 < local_40.TypeIndex) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FCreateSession::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_40.TypeIndex])();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TPromise<void>::EmplaceValue<>(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// operator() @ 14ee2a6d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`TFutureBase<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>::
Then<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FFindSessions>_>::Next<``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FFindSessions>'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  undefined **local_48;
  TVariant<UE::Online::FFindSessions::Result,UE::Online::FOnlineError> local_40;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)((longlong)this + 0x28);
  pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x30) = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  if (lVar1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x155,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  while (*(char *)(lVar1 + 0x68) == '\0') {
    (**(code **)(**(longlong **)(lVar1 + 0x60) + 0x20))(*(longlong **)(lVar1 + 0x60),0xffffffff,0);
  }
  local_48 = &___7__TResult_UResult_FFindSessions_Online_UE__VFOnlineError_34__Online_UE__6B_;
  TVariant<UE::Online::FFindSessions::Result,UE::Online::FOnlineError>::
  TVariant<UE::Online::FFindSessions::Result,UE::Online::FOnlineError>
            (&local_40,
             (TVariant<UE::Online::FFindSessions::Result,UE::Online::FOnlineError> *)(lVar1 + 0x78))
  ;
  local_48 = &___7__TOnlineResult_UFFindSessions_Online_UE___Online_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  ``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FFindSessions>'::__l2::
  <lambda_1>::operator()'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),(TOnlineResult<UE::Online::FFindSessions> *)&local_48);
  if (1 < local_40.TypeIndex) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FFindSessions::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_40.TypeIndex])();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TPromise<void>::EmplaceValue<>(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// operator() @ 14ee2a840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`TFutureBase<UE::Online::TOnlineResult<UE::Online::FJoinSession>_>::
Then<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FJoinSession>_>::Next<``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FJoinSession>'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  undefined **local_48;
  TVariant<UE::Online::FJoinSession::Result,UE::Online::FOnlineError> local_40;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)((longlong)this + 0x28);
  pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x30) = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  if (lVar1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x155,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  while (*(char *)(lVar1 + 0x68) == '\0') {
    (**(code **)(**(longlong **)(lVar1 + 0x60) + 0x20))(*(longlong **)(lVar1 + 0x60),0xffffffff,0);
  }
  local_48 = &___7__TResult_UResult_FJoinSession_Online_UE__VFOnlineError_34__Online_UE__6B_;
  TVariant<UE::Online::FJoinSession::Result,UE::Online::FOnlineError>::
  TVariant<UE::Online::FJoinSession::Result,UE::Online::FOnlineError>
            (&local_40,
             (TVariant<UE::Online::FJoinSession::Result,UE::Online::FOnlineError> *)(lVar1 + 0x78));
  local_48 = &___7__TOnlineResult_UFJoinSession_Online_UE___Online_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  ``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FJoinSession>'::__l2::
  <lambda_1>::operator()'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),(TOnlineResult<UE::Online::FJoinSession> *)&local_48);
  if (1 < local_40.TypeIndex) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FJoinSession::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_40.TypeIndex])();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TPromise<void>::EmplaceValue<>(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// operator() @ 14ee2a9b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`TFutureBase<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_>::
Then<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FLeaveSession>_>::Next<``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FLeaveSession>'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  undefined **local_48;
  TVariant<UE::Online::FLeaveSession::Result,UE::Online::FOnlineError> local_40;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)((longlong)this + 0x28);
  pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x30) = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  if (lVar1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x155,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  while (*(char *)(lVar1 + 0x68) == '\0') {
    (**(code **)(**(longlong **)(lVar1 + 0x60) + 0x20))(*(longlong **)(lVar1 + 0x60),0xffffffff,0);
  }
  local_48 = &___7__TResult_UResult_FLeaveSession_Online_UE__VFOnlineError_34__Online_UE__6B_;
  TVariant<UE::Online::FLeaveSession::Result,UE::Online::FOnlineError>::
  TVariant<UE::Online::FLeaveSession::Result,UE::Online::FOnlineError>
            (&local_40,
             (TVariant<UE::Online::FLeaveSession::Result,UE::Online::FOnlineError> *)(lVar1 + 0x78))
  ;
  local_48 = &___7__TOnlineResult_UFLeaveSession_Online_UE___Online_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  ``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FLeaveSession>'::__l2::
  <lambda_1>::operator()'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),(TOnlineResult<UE::Online::FLeaveSession> *)&local_48);
  if (1 < local_40.TypeIndex) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FLeaveSession::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_40.TypeIndex])();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TPromise<void>::EmplaceValue<>(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// operator() @ 14ee2ab20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`TFutureBase<UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_>::
Then<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FRejectSessionInvite>_>::Next<``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FRejectSessionInvite>'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  undefined **local_48;
  TVariant<UE::Online::FRejectSessionInvite::Result,UE::Online::FOnlineError> local_40;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)((longlong)this + 0x28);
  pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x30) = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  if (lVar1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x155,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  while (*(char *)(lVar1 + 0x68) == '\0') {
    (**(code **)(**(longlong **)(lVar1 + 0x60) + 0x20))(*(longlong **)(lVar1 + 0x60),0xffffffff,0);
  }
  local_48 = &___7__TResult_UResult_FRejectSessionInvite_Online_UE__VFOnlineError_34__Online_UE__6B_
  ;
  TVariant<UE::Online::FRejectSessionInvite::Result,UE::Online::FOnlineError>::
  TVariant<UE::Online::FRejectSessionInvite::Result,UE::Online::FOnlineError>
            (&local_40,
             (TVariant<UE::Online::FRejectSessionInvite::Result,UE::Online::FOnlineError> *)
             (lVar1 + 0x78));
  local_48 = &___7__TOnlineResult_UFRejectSessionInvite_Online_UE___Online_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  ``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FRejectSessionInvite>'::__l2
  ::<lambda_1>::operator()'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),
             (TOnlineResult<UE::Online::FRejectSessionInvite> *)&local_48);
  if (1 < local_40.TypeIndex) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FRejectSessionInvite::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_40.TypeIndex])();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TPromise<void>::EmplaceValue<>(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// operator() @ 14ee2ac90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`TFutureBase<UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_>::
Then<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FRemoveSessionMember>_>::Next<``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FRemoveSessionMember>'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  undefined **local_48;
  TVariant<UE::Online::FRemoveSessionMember::Result,UE::Online::FOnlineError> local_40;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)((longlong)this + 0x28);
  pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x30) = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  if (lVar1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x155,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  while (*(char *)(lVar1 + 0x68) == '\0') {
    (**(code **)(**(longlong **)(lVar1 + 0x60) + 0x20))(*(longlong **)(lVar1 + 0x60),0xffffffff,0);
  }
  local_48 = &___7__TResult_UResult_FRemoveSessionMember_Online_UE__VFOnlineError_34__Online_UE__6B_
  ;
  TVariant<UE::Online::FRemoveSessionMember::Result,UE::Online::FOnlineError>::
  TVariant<UE::Online::FRemoveSessionMember::Result,UE::Online::FOnlineError>
            (&local_40,
             (TVariant<UE::Online::FRemoveSessionMember::Result,UE::Online::FOnlineError> *)
             (lVar1 + 0x78));
  local_48 = &___7__TOnlineResult_UFRemoveSessionMember_Online_UE___Online_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  ``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FRemoveSessionMember>'::__l2
  ::<lambda_1>::operator()'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),
             (TOnlineResult<UE::Online::FRemoveSessionMember> *)&local_48);
  if (1 < local_40.TypeIndex) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FRemoveSessionMember::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_40.TypeIndex])();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TPromise<void>::EmplaceValue<>(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// operator() @ 14ee2ae00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`TFutureBase<UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_>::
Then<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FSendSessionInvite>_>::Next<``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FSendSessionInvite>'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  undefined **local_48;
  TVariant<UE::Online::FSendSessionInvite::Result,UE::Online::FOnlineError> local_40;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)((longlong)this + 0x28);
  pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x30) = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  if (lVar1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x155,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  while (*(char *)(lVar1 + 0x68) == '\0') {
    (**(code **)(**(longlong **)(lVar1 + 0x60) + 0x20))(*(longlong **)(lVar1 + 0x60),0xffffffff,0);
  }
  local_48 = &___7__TResult_UResult_FSendSessionInvite_Online_UE__VFOnlineError_34__Online_UE__6B_;
  TVariant<UE::Online::FSendSessionInvite::Result,UE::Online::FOnlineError>::
  TVariant<UE::Online::FSendSessionInvite::Result,UE::Online::FOnlineError>
            (&local_40,
             (TVariant<UE::Online::FSendSessionInvite::Result,UE::Online::FOnlineError> *)
             (lVar1 + 0x78));
  local_48 = &___7__TOnlineResult_UFSendSessionInvite_Online_UE___Online_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  ``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FSendSessionInvite>'::__l2::
  <lambda_1>::operator()'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),
             (TOnlineResult<UE::Online::FSendSessionInvite> *)&local_48);
  if (1 < local_40.TypeIndex) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FSendSessionInvite::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_40.TypeIndex])();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TPromise<void>::EmplaceValue<>(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// operator() @ 14ee2af70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`TFutureBase<UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_>::
Then<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FStartMatchmaking>_>::Next<``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FStartMatchmaking>'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  undefined **local_48;
  TVariant<UE::Online::FStartMatchmaking::Result,UE::Online::FOnlineError> local_40;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)((longlong)this + 0x28);
  pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x30) = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  if (lVar1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x155,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  while (*(char *)(lVar1 + 0x68) == '\0') {
    (**(code **)(**(longlong **)(lVar1 + 0x60) + 0x20))(*(longlong **)(lVar1 + 0x60),0xffffffff,0);
  }
  local_48 = &___7__TResult_UResult_FStartMatchmaking_Online_UE__VFOnlineError_34__Online_UE__6B_;
  TVariant<UE::Online::FStartMatchmaking::Result,UE::Online::FOnlineError>::
  TVariant<UE::Online::FStartMatchmaking::Result,UE::Online::FOnlineError>
            (&local_40,
             (TVariant<UE::Online::FStartMatchmaking::Result,UE::Online::FOnlineError> *)
             (lVar1 + 0x78));
  local_48 = &___7__TOnlineResult_UFStartMatchmaking_Online_UE___Online_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  ``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FStartMatchmaking>'::__l2::
  <lambda_1>::operator()'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),
             (TOnlineResult<UE::Online::FStartMatchmaking> *)&local_48);
  if (1 < local_40.TypeIndex) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FStartMatchmaking::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_40.TypeIndex])();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TPromise<void>::EmplaceValue<>(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// operator() @ 14ee2b0e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`TFutureBase<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_>::
Then<`TFutureBase<UE::Online::TOnlineResult<UE::Online::FUpdateSessionSettings>_>::Next<``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FUpdateSessionSettings>'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  undefined **local_48;
  TVariant<UE::Online::FUpdateSessionSettings::Result,UE::Online::FOnlineError> local_40;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)((longlong)this + 0x28);
  pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0x30);
  *(undefined8 *)((longlong)this + 0x30) = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  if (lVar1 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x155,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  while (*(char *)(lVar1 + 0x68) == '\0') {
    (**(code **)(**(longlong **)(lVar1 + 0x60) + 0x20))(*(longlong **)(lVar1 + 0x60),0xffffffff,0);
  }
  local_48 = &
             ___7__TResult_UResult_FUpdateSessionSettings_Online_UE__VFOnlineError_34__Online_UE__6B_
  ;
  TVariant<UE::Online::FUpdateSessionSettings::Result,UE::Online::FOnlineError>::
  TVariant<UE::Online::FUpdateSessionSettings::Result,UE::Online::FOnlineError>
            (&local_40,
             (TVariant<UE::Online::FUpdateSessionSettings::Result,UE::Online::FOnlineError> *)
             (lVar1 + 0x78));
  local_48 = &___7__TOnlineResult_UFUpdateSessionSettings_Online_UE___Online_UE__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  ``UE::Online::FSessionsCommon::ExecuteAsyncSessionsMethod<UE::Online::FUpdateSessionSettings>'::
  __l2::<lambda_1>::operator()'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0x18),
             (TOnlineResult<UE::Online::FUpdateSessionSettings> *)&local_48);
  if (1 < local_40.TypeIndex) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::FUpdateSessionSettings::Result,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[local_40.TypeIndex])();
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TPromise<void>::EmplaceValue<>(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// ~<lambda_1> @ 14efe3bb0

void __thiscall
`TFutureBase<void>::
Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FCreateLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  plVar3 = *(longlong **)((longlong)this + 0x28);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((*(longlong *)this != 0) && (*(char *)(*(longlong *)this + 0x68) == '\0')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 8));
  return;
}

// ~<lambda_1> @ 14efe3c30

void __thiscall
`TFutureBase<void>::
Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FFindLobbies::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  plVar3 = *(longlong **)((longlong)this + 0x28);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((*(longlong *)this != 0) && (*(char *)(*(longlong *)this + 0x68) == '\0')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 8));
  return;
}

// ~<lambda_1> @ 14efe3cb0

void __thiscall
`TFutureBase<void>::
Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FInviteLobbyMember::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  plVar3 = *(longlong **)((longlong)this + 0x28);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((*(longlong *)this != 0) && (*(char *)(*(longlong *)this + 0x68) == '\0')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 8));
  return;
}

// ~<lambda_1> @ 14efe3d30

void __thiscall
`TFutureBase<void>::
Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  plVar3 = *(longlong **)((longlong)this + 0x28);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((*(longlong *)this != 0) && (*(char *)(*(longlong *)this + 0x68) == '\0')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 8));
  return;
}

// ~<lambda_1> @ 14efe3db0

void __thiscall
`TFutureBase<void>::
Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  plVar3 = *(longlong **)((longlong)this + 0x28);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((*(longlong *)this != 0) && (*(char *)(*(longlong *)this + 0x68) == '\0')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 8));
  return;
}

// ~<lambda_1> @ 14efe3e30

void __thiscall
`TFutureBase<void>::
Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  plVar3 = *(longlong **)((longlong)this + 0x28);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((*(longlong *)this != 0) && (*(char *)(*(longlong *)this + 0x68) == '\0')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 8));
  return;
}

// ~<lambda_1> @ 14efe3eb0

void __thiscall
`TFutureBase<void>::
Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyMemberAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  plVar3 = *(longlong **)((longlong)this + 0x28);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((*(longlong *)this != 0) && (*(char *)(*(longlong *)this + 0x68) == '\0')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 8));
  return;
}

// ~<lambda_1> @ 14efe3f30

void __thiscall
`TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
::
Then<`TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::Next<``UE::Online::Private::TStep<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_12>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  plVar3 = *(longlong **)((longlong)this + 0x28);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((*(longlong *)this != 0) && (*(char *)(*(longlong *)this + 0x68) == '\0')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 8));
  return;
}

// ~<lambda_1> @ 14efe3fb0

void __thiscall
`TFutureBase<int>::
Then<`TFutureBase<int>::Next<``UE::Online::Private::TStep<int>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_21>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  plVar3 = *(longlong **)((longlong)this + 0x28);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((*(longlong *)this != 0) && (*(char *)(*(longlong *)this + 0x68) == '\0')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 8));
  return;
}

// ~<lambda_1> @ 14efe4030

void __thiscall
`TFutureBase<void>::
Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  plVar3 = *(longlong **)((longlong)this + 0x28);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  if ((*(longlong *)this != 0) && (*(char *)(*(longlong *)this + 0x68) == '\0')) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 8));
  return;
}

// ~<lambda_1> @ 14efe40b0

void __thiscall
`TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>::
Then<``UE::Online::Private::CaptureStepResult<UE::Online::Private::FFunctionalTestLoginUser,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLoginUser::Params_&&)>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x58));
  ``UE::Online::Private::
  CaptureStepResult<UE::Online::Private::FFunctionalTestLoginUser,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLoginUser>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLoginUser::Params_&&)>'
  ::__l2::<lambda_1>::operator()'::__l2::<lambda_1>::~<lambda_1>((void *)((longlong)this + 0x18));
  if ((*(longlong *)this != 0) && (*(char *)(*(longlong *)this + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 8));
  return;
}

// ~<lambda_1> @ 14efe4120

void __thiscall
`TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>::
Then<``UE::Online::Private::ConsumeStepResult<UE::Online::Private::FFunctionalTestLogoutAllUsers,UE::Online::FFunctionalTestLobbies,TFuture<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>_(__cdecl*)(UE::Online::Private::FFunctionalTestLogoutAllUsers::Params_&&)>'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x48));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  if ((*(longlong *)((longlong)this + 0x18) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x18) + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((*(longlong *)this != 0) && (*(char *)(*(longlong *)this + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 8));
  return;
}

// ~<lambda_1> @ 14efe41d0

void __thiscall
`TFutureBase<TArray<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>,TSizedDefaultAllocator<32>_>_>
::Then<`UE::Online::Private::FunctionalTestLogoutAllUsers'::__l2::<lambda_1>_>'::__l2::<lambda_1>::
~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((*(longlong *)this != 0) && (*(char *)(*(longlong *)this + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 8));
  return;
}

// ~<lambda_1> @ 14efe4240

void __thiscall
`TFutureBase<int>::
Then<``UE::Online::Private::AwaitInvitation'::__l2::<lambda_1>::operator()'::__l8::<lambda_1>_>'::
__l2::<lambda_1>::~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x38));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((*(longlong *)this != 0) && (*(char *)(*(longlong *)this + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 8));
  return;
}

// ~<lambda_1> @ 14efe42b0

void __thiscall
`TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>::
Then<`UE::Online::WhenAll<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutUser>_>'::__l11::<lambda_1>_>'
::__l2::<lambda_1>::~<lambda_1>(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x30));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x20));
  if ((*(longlong *)this != 0) && (*(char *)(*(longlong *)this + 0x68) == '\0')) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("State->IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x242,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 8));
  return;
}

// operator() @ 14efe9990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`TFutureBase<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
::
Next<``UE::Online::Private::TStep<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_12>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'
::__l2::<lambda_1>::operator()
          (void *this,
          TFuture<UE::Online::TDefaultErrorResultInternal<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>_>_>
          *param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  code *pcVar3;
  atomic<int> aVar4;
  bool bVar5;
  atomic<int> aVar6;
  ulonglong uVar7;
  TReferenceControllerBase<1> *pTVar8;
  undefined1 auStack_98 [32];
  undefined **local_78;
  undefined1 local_70 [40];
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)param_1;
  pTVar2 = *(TReferenceControllerBase<1> **)&param_1->field_0x8;
  *(undefined8 *)&param_1->field_0x8 = 0;
  *(undefined8 *)param_1 = 0;
  if (lVar1 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x155,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  while (*(char *)(lVar1 + 0x68) == '\0') {
    (**(code **)(**(longlong **)(lVar1 + 0x60) + 0x20))(*(longlong **)(lVar1 + 0x60),0xffffffff,0);
  }
  local_78 = &
             ___7__TResult_V__TOnlineId_UFLobby_OnlineIdHandleTags_Online_UE___Online_UE__VFOnlineError_23__Online_UE__6B_
  ;
  local_48 = *(byte *)(lVar1 + 0xa0);
  uVar7 = (ulonglong)local_48;
  if ((1 < local_48) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0x105,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
              ::__l2::MoveConstructors)[uVar7])(local_70,lVar1 + 0x78);
  local_78 = &
             ___7__TDefaultErrorResultInternal_V__TOnlineId_UFLobby_OnlineIdHandleTags_Online_UE___Online_UE___Online_UE__6B_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  pTVar8 = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = pTVar2->SharedReferenceCount;
    do {
      pTVar8 = (TReferenceControllerBase<1> *)0x0;
      if (aVar4 == (atomic<int>)0x0) goto LAB_14efe9ad1;
      LOCK();
      aVar6 = pTVar2->SharedReferenceCount;
      bVar5 = aVar4 == aVar6;
      if (bVar5) {
        pTVar2->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar6 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar6;
    } while (!bVar5);
    this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 8);
    pTVar8 = pTVar2;
    if (this_00 != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      lVar1 = *(longlong *)this;
      if ((*(char *)(lVar1 + 0x78) != '\0') &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bResultSet",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                             ,0x1ee,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      *(undefined ***)(lVar1 + 0x40) =
           &
           ___7__TResult_V__TOnlineId_UFLobby_OnlineIdHandleTags_Online_UE___Online_UE__VFOnlineError_23__Online_UE__6B_
      ;
      uVar7 = (ulonglong)local_48;
      *(byte *)(lVar1 + 0x70) = local_48;
      if ((1 < local_48) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(MoveConstructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0x105,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TMoveConstructorLookup<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>,UE::Online::FOnlineError>::Construct(unsigned___int64,void*___ptr64,void*___ptr64)'
                  ::__l2::MoveConstructors)[uVar7])(lVar1 + 0x48,local_70);
      *(undefined ***)(lVar1 + 0x40) =
           &
           ___7__TDefaultErrorResultInternal_V__TOnlineId_UFLobby_OnlineIdHandleTags_Online_UE___Online_UE___Online_UE__6B_
      ;
      *(undefined1 *)(lVar1 + 0x78) = 1;
      UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this_00);
    }
  }
LAB_14efe9ad1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  uVar7 = (ulonglong)local_48;
  if ((1 < local_48) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FLobby>,UE::Online::FOnlineError>::Destruct(unsigned___int64,void*___ptr64)'
              ::__l2::Destructors)[uVar7])(local_70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&param_1->field_0x8);
  return;
}

// operator() @ 14efecea0

void __thiscall
`TFutureBase<void>::
Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FCreateLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FCreateLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  undefined1 local_18 [16];
  
  local_18._0_8_ = *(undefined8 *)((longlong)this + 0x30);
  local_18._8_8_ = *(undefined8 *)((longlong)this + 0x38);
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined8 *)((longlong)this + 0x30) = 0;
  TFuture<void>::Consume((TFuture<void> *)local_18);
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x28);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efecf00;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 0x20) !=
        (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep
                (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 0x20));
    }
  }
LAB_14efecf00:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_18._8_8_);
  TPromise<void>::EmplaceValue<>(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// operator() @ 14efecf50

void __thiscall
`TFutureBase<void>::
Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FFindLobbies::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FFindLobbies::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  undefined1 local_18 [16];
  
  local_18._0_8_ = *(undefined8 *)((longlong)this + 0x30);
  local_18._8_8_ = *(undefined8 *)((longlong)this + 0x38);
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined8 *)((longlong)this + 0x30) = 0;
  TFuture<void>::Consume((TFuture<void> *)local_18);
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x28);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efecfb0;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 0x20) !=
        (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep
                (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 0x20));
    }
  }
LAB_14efecfb0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_18._8_8_);
  TPromise<void>::EmplaceValue<>(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// operator() @ 14efed000

void __thiscall
`TFutureBase<void>::
Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FInviteLobbyMember::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FInviteLobbyMember::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  undefined1 local_18 [16];
  
  local_18._0_8_ = *(undefined8 *)((longlong)this + 0x30);
  local_18._8_8_ = *(undefined8 *)((longlong)this + 0x38);
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined8 *)((longlong)this + 0x30) = 0;
  TFuture<void>::Consume((TFuture<void> *)local_18);
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x28);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efed060;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 0x20) !=
        (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep
                (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 0x20));
    }
  }
LAB_14efed060:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_18._8_8_);
  TPromise<void>::EmplaceValue<>(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// operator() @ 14efed0b0

void __thiscall
`TFutureBase<void>::
Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FJoinLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FJoinLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  undefined1 local_18 [16];
  
  local_18._0_8_ = *(undefined8 *)((longlong)this + 0x30);
  local_18._8_8_ = *(undefined8 *)((longlong)this + 0x38);
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined8 *)((longlong)this + 0x30) = 0;
  TFuture<void>::Consume((TFuture<void> *)local_18);
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x28);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efed110;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 0x20) !=
        (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep
                (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 0x20));
    }
  }
LAB_14efed110:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_18._8_8_);
  TPromise<void>::EmplaceValue<>(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// operator() @ 14efed160

void __thiscall
`TFutureBase<void>::
Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FLeaveLobby::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FLeaveLobby::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  undefined1 local_18 [16];
  
  local_18._0_8_ = *(undefined8 *)((longlong)this + 0x30);
  local_18._8_8_ = *(undefined8 *)((longlong)this + 0x38);
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined8 *)((longlong)this + 0x30) = 0;
  TFuture<void>::Consume((TFuture<void> *)local_18);
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x28);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efed1c0;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 0x20) !=
        (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep
                (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 0x20));
    }
  }
LAB_14efed1c0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_18._8_8_);
  TPromise<void>::EmplaceValue<>(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// operator() @ 14efed210

void __thiscall
`TFutureBase<void>::
Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyAttributes::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  undefined1 local_18 [16];
  
  local_18._0_8_ = *(undefined8 *)((longlong)this + 0x30);
  local_18._8_8_ = *(undefined8 *)((longlong)this + 0x38);
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined8 *)((longlong)this + 0x30) = 0;
  TFuture<void>::Consume((TFuture<void> *)local_18);
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x28);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efed270;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 0x20) !=
        (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep
                (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 0x20));
    }
  }
LAB_14efed270:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_18._8_8_);
  TPromise<void>::EmplaceValue<>(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// operator() @ 14efed2c0

void __thiscall
`TFutureBase<void>::
Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,UE::Online::FModifyLobbyMemberAttributes::Params_&,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&,UE::Online::FModifyLobbyMemberAttributes::Params_&&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  undefined1 local_18 [16];
  
  local_18._0_8_ = *(undefined8 *)((longlong)this + 0x30);
  local_18._8_8_ = *(undefined8 *)((longlong)this + 0x38);
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined8 *)((longlong)this + 0x30) = 0;
  TFuture<void>::Consume((TFuture<void> *)local_18);
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x28);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efed320;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 0x20) !=
        (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep
                (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 0x20));
    }
  }
LAB_14efed320:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_18._8_8_);
  TPromise<void>::EmplaceValue<>(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// operator() @ 14efed370

void __thiscall
`TFutureBase<int>::
Then<`TFutureBase<int>::Next<``UE::Online::Private::TStep<int>::SetExecFunction<UE::Online::FFunctionalTestLobbies,`UE::Online::RunLobbyFunctionalTest'::__l2::<lambda_21>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  undefined4 uVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *this_00;
  code *pcVar4;
  atomic<int> aVar5;
  bool bVar6;
  atomic<int> aVar7;
  TReferenceControllerBase<1> *pTVar8;
  
  lVar2 = *(longlong *)((longlong)this + 0x30);
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x38);
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined8 *)((longlong)this + 0x30) = 0;
  if (lVar2 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x155,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  while (*(char *)(lVar2 + 0x68) == '\0') {
    (**(code **)(**(longlong **)(lVar2 + 0x60) + 0x20))(*(longlong **)(lVar2 + 0x60),0xffffffff,0);
  }
  uVar1 = *(undefined4 *)(lVar2 + 0x70);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x28);
  pTVar8 = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar5 = pTVar3->SharedReferenceCount;
    do {
      pTVar8 = (TReferenceControllerBase<1> *)0x0;
      if (aVar5 == (atomic<int>)0x0) goto LAB_14efed441;
      LOCK();
      aVar7 = pTVar3->SharedReferenceCount;
      bVar6 = aVar5 == aVar7;
      if (bVar6) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar7 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar7;
    } while (!bVar6);
    this_00 = *(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 0x20);
    pTVar8 = pTVar3;
    if (this_00 != (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      lVar2 = *(longlong *)((longlong)this + 0x18);
      if ((*(char *)(lVar2 + 0x44) != '\0') &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("!bResultSet",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineServices\\Source\\OnlineServicesCommon\\Public\\Online\\OnlineAsyncOp.h"
                             ,0x1ee,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(undefined4 *)(lVar2 + 0x40) = uVar1;
      *(undefined1 *)(lVar2 + 0x44) = 1;
      UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep(this_00);
    }
  }
LAB_14efed441:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TPromise<void>::EmplaceValue<>(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// operator() @ 14efed4d0

void __thiscall
`TFutureBase<void>::
Then<`TFutureBase<void>::Next<``UE::Online::Private::TStep<void>::SetExecFunction<UE::Online::FFunctionalTestLobbies,TFunction<TFuture<void>___cdecl(UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>_&)>_>'::__l2::<lambda_1>::operator()'::__l6::<lambda_1>_>'::__l2::<lambda_1>_>'
::__l2::<lambda_1>::operator()(void *this)

{
  atomic<int> aVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  bool bVar4;
  undefined1 local_18 [16];
  
  local_18._0_8_ = *(undefined8 *)((longlong)this + 0x30);
  local_18._8_8_ = *(undefined8 *)((longlong)this + 0x38);
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined8 *)((longlong)this + 0x30) = 0;
  TFuture<void>::Consume((TFuture<void> *)local_18);
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x28);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    aVar1 = pTVar3->SharedReferenceCount;
    do {
      if (aVar1 == (atomic<int>)0x0) {
        pTVar3 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14efed530;
      }
      LOCK();
      aVar2 = pTVar3->SharedReferenceCount;
      bVar4 = aVar1 == aVar2;
      if (bVar4) {
        pTVar3->SharedReferenceCount = (atomic<int>)((int)aVar1 + 1);
        aVar2 = aVar1;
      }
      UNLOCK();
      aVar1 = aVar2;
    } while (!bVar4);
    if (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 0x20) !=
        (TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> *)0x0) {
      UE::Online::TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies>::ExecuteNextStep
                (*(TOnlineAsyncOp<UE::Online::FFunctionalTestLobbies> **)((longlong)this + 0x20));
    }
  }
LAB_14efed530:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_18._8_8_);
  TPromise<void>::EmplaceValue<>(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// operator() @ 14efed580

void __thiscall
`TFutureBase<int>::
Then<``UE::Online::Private::AwaitInvitation'::__l2::<lambda_1>::operator()'::__l8::<lambda_1>_>'::
__l2::<lambda_1>::operator()(void *this)

{
  TReferenceControllerBase<1> *pTVar1;
  longlong *plVar2;
  FFutureState *this_00;
  code *pcVar3;
  bool bVar4;
  
  pTVar1 = *(TReferenceControllerBase<1> **)((longlong)this + 0x38);
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined8 *)((longlong)this + 0x30) = 0;
  plVar2 = *(longlong **)((longlong)this + 0x18);
  if (*plVar2 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x283,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*plVar2 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  this_00 = (FFutureState *)*plVar2;
  if (this_00->bComplete != (TAtomic<bool>)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsComplete()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0xcd,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00[1].Mutex.CriticalSection.Opaque1[0] =
       &
       ___7__TResult_V__TOnlineId_UFLobby_OnlineIdHandleTags_Online_UE___Online_UE__VFOnlineError_23__Online_UE__6B_
  ;
  this_00[1].Mutex.CriticalSection.Opaque2[0] = *(long *)((longlong)this + 0x28);
  *(undefined1 *)&this_00[1].CompletionCallback = 0;
  this_00[1].Mutex.CriticalSection.Opaque1[0] =
       &
       ___7__TDefaultErrorResultInternal_V__TOnlineId_UFLobby_OnlineIdHandleTags_Online_UE___Online_UE___Online_UE__6B_
  ;
  FFutureState::MarkComplete(this_00);
  TPromise<void>::EmplaceValue<>(this);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return;
}

// Get @ 14effe320

TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers> * __thiscall
TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>::Get
          (TFutureBase<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>
           *this)

{
  TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>
  *pTVar1;
  code *pcVar2;
  bool bVar3;
  TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers> *pTVar4;
  
  if ((this->State).Object ==
      (TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>
       *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("State.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Future.h"
                       ,0x155,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers> *)(*pcVar2)();
      return pTVar4;
    }
    if ((this->State).Object ==
        (TFutureState<UE::Online::TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers>_>
         *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar4 = (TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers> *)(*pcVar2)();
        return pTVar4;
      }
    }
  }
  pTVar1 = (this->State).Object;
  while (pTVar1->field_0x68 == '\0') {
    (**(code **)(**(longlong **)&pTVar1->field_0x60 + 0x20))
              (*(longlong **)&pTVar1->field_0x60,0xffffffff,0);
  }
  return (TOnlineResult<UE::Online::Private::FFunctionalTestLogoutAllUsers> *)&pTVar1->Result;
}

